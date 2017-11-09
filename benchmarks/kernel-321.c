// --atomics 39 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 9,67,5 -l 9,1,1
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

__constant uint32_t permutations[10][9] = {
{5,3,2,0,7,8,6,4,1}, // permutation 0
{2,5,6,8,0,4,1,3,7}, // permutation 1
{2,3,4,8,7,0,6,1,5}, // permutation 2
{7,5,4,0,8,3,6,2,1}, // permutation 3
{1,6,0,7,3,4,8,2,5}, // permutation 4
{2,7,6,8,5,0,1,3,4}, // permutation 5
{5,7,0,8,6,3,2,4,1}, // permutation 6
{3,0,8,6,2,7,1,5,4}, // permutation 7
{6,3,0,2,7,8,4,5,1}, // permutation 8
{5,3,7,4,2,6,1,8,0} // permutation 9
};

// Seed: 911856100

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   int8_t * f1;
   int16_t  f2;
};

union U1 {
   uint32_t  f0;
   volatile int8_t * volatile  f1;
   uint8_t  f2;
   uint64_t  f3;
   volatile uint64_t  f4;
};

struct S2 {
    int8_t g_11[6];
    int32_t g_60;
    volatile int32_t g_63[10][6];
    volatile int32_t g_64;
    volatile int32_t g_65;
    volatile int32_t g_66[6][3];
    int32_t g_67[1][1][5];
    volatile int32_t *g_72;
    uint16_t g_75;
    int32_t *g_95[3][9];
    uint8_t g_104;
    uint8_t g_108;
    uint8_t g_112[1][10][3];
    int16_t g_116;
    VECTOR(int8_t, 16) g_128;
    uint8_t *g_138;
    int16_t g_140;
    int16_t g_150;
    VECTOR(uint8_t, 8) g_163;
    union U1 g_171;
    union U1 *g_174;
    int32_t **g_175;
    uint32_t g_192;
    uint16_t g_207[5];
    volatile int32_t ** volatile g_208;
    volatile union U1 g_212;
    int64_t *g_214[6];
    int64_t **g_213;
    union U1 *g_237;
    volatile int32_t ** volatile g_244;
    volatile int32_t ** volatile g_245;
    VECTOR(uint32_t, 4) g_266;
    uint64_t g_283;
    uint32_t g_295;
    uint64_t g_328;
    volatile uint64_t g_330;
    VECTOR(uint32_t, 8) g_347;
    volatile VECTOR(uint8_t, 2) g_350;
    uint64_t g_357;
    VECTOR(uint64_t, 8) g_378;
    uint32_t g_395;
    volatile uint64_t *g_526;
    volatile uint64_t **g_525;
    int32_t g_528[3];
    int32_t * volatile g_527;
    int8_t g_545;
    volatile VECTOR(uint16_t, 4) g_577;
    union U0 g_580;
    VECTOR(int8_t, 4) g_639;
    int32_t * volatile g_720;
    VECTOR(uint16_t, 8) g_733;
    volatile VECTOR(int8_t, 8) g_750;
    volatile VECTOR(int8_t, 2) g_754;
    volatile VECTOR(uint16_t, 2) g_759;
    int32_t ** volatile g_770[4];
    volatile uint16_t g_775;
    volatile int32_t ** volatile g_778;
    volatile int32_t ** volatile g_779;
    VECTOR(int8_t, 4) g_795;
    VECTOR(int64_t, 4) g_796;
    volatile VECTOR(uint8_t, 16) g_914;
    volatile VECTOR(uint16_t, 4) g_992;
    uint16_t *g_995;
    uint32_t g_1010;
    volatile VECTOR(int16_t, 4) g_1018;
    VECTOR(int32_t, 8) g_1028;
    uint32_t *** volatile g_1083;
    int32_t ** volatile g_1085;
    int32_t ** volatile g_1086[9];
    int32_t ** volatile g_1087;
    int32_t ** volatile g_1088[4][8][1];
    int32_t ** volatile g_1089;
    volatile uint32_t g_1104;
    volatile uint32_t *g_1103;
    volatile uint32_t **g_1102;
    union U1 g_1209;
    VECTOR(int16_t, 8) g_1230;
    uint8_t **g_1254;
    uint8_t *** volatile g_1253;
    int32_t *g_1255;
    int64_t **g_1264[5];
    uint32_t *g_1306[6][1];
    uint32_t **g_1305;
    uint32_t ***g_1304;
    volatile int32_t **g_1339[4][7];
    volatile int32_t ***g_1338[10];
    volatile int32_t ****g_1337;
    int32_t g_1373;
    volatile union U1 g_1378;
    volatile VECTOR(uint16_t, 16) g_1394;
    VECTOR(uint16_t, 8) g_1395;
    VECTOR(uint32_t, 2) g_1404;
    VECTOR(uint32_t, 4) g_1405;
    int32_t ** volatile g_1412;
    volatile VECTOR(int16_t, 4) g_1414;
    volatile VECTOR(int8_t, 16) g_1415;
    VECTOR(int16_t, 2) g_1431;
    VECTOR(int8_t, 4) g_1432;
    VECTOR(int8_t, 2) g_1433;
    VECTOR(uint32_t, 16) g_1447;
    uint64_t *g_1459;
    uint64_t **g_1458;
    VECTOR(int32_t, 2) g_1485;
    volatile VECTOR(int16_t, 4) g_1498;
    VECTOR(uint64_t, 16) g_1529;
    VECTOR(uint16_t, 16) g_1559;
    VECTOR(int32_t, 2) g_1579;
    volatile int8_t ***g_1594;
    volatile VECTOR(uint16_t, 16) g_1599;
    VECTOR(int8_t, 16) g_1608;
    VECTOR(uint16_t, 2) g_1615;
    VECTOR(uint16_t, 2) g_1617;
    VECTOR(int8_t, 4) g_1624;
    VECTOR(int32_t, 8) g_1632;
    uint64_t ***g_1636;
    volatile VECTOR(uint16_t, 2) g_1644;
    volatile VECTOR(uint16_t, 2) g_1645;
    VECTOR(uint64_t, 8) g_1657;
    VECTOR(uint32_t, 2) g_1689;
    VECTOR(uint32_t, 2) g_1750;
    int32_t g_1760;
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
union U0  func_1(struct S2 * p_1768);
int16_t  func_5(int32_t  p_6, int16_t  p_7, int32_t  p_8, int64_t  p_9, struct S2 * p_1768);
int32_t  func_12(uint32_t  p_13, uint8_t  p_14, int8_t  p_15, struct S2 * p_1768);
int16_t  func_16(int8_t * p_17, uint8_t  p_18, int16_t  p_19, int8_t * p_20, int16_t  p_21, struct S2 * p_1768);
int8_t * func_22(union U0  p_23, struct S2 * p_1768);
int32_t * func_51(int8_t * p_52, int32_t * p_53, uint32_t  p_54, struct S2 * p_1768);
int8_t * func_55(uint16_t  p_56, struct S2 * p_1768);
union U1  func_57(int32_t * p_58, struct S2 * p_1768);
union U1 * func_87(uint16_t  p_88, int32_t * p_89, union U1 * p_90, uint32_t  p_91, uint32_t * p_92, struct S2 * p_1768);
union U1 * func_96(uint8_t  p_97, uint32_t  p_98, int32_t  p_99, struct S2 * p_1768);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1768->l_comm_values p_1768->g_comm_values p_1768->g_60 p_1768->g_67 p_1768->g_64 p_1768->g_733 p_1768->g_75 p_1768->g_237 p_1768->g_171 p_1768->g_750 p_1768->g_754 p_1768->g_759 p_1768->g_138 p_1768->g_108 p_1768->g_66 p_1768->g_207 p_1768->g_775 p_1768->g_208 p_1768->g_72 p_1768->g_779 p_1768->g_395 p_1768->g_525 p_1768->g_526 p_1768->g_330 p_1768->g_347 p_1768->g_163 p_1768->g_128 p_1768->g_580 p_1768->g_914 p_1768->g_95 p_1768->g_992 p_1768->g_1010 p_1768->g_995 p_1768->g_795 p_1768->g_295 p_1768->g_528 p_1768->g_1018 p_1768->g_1028 p_1768->g_527 p_1768->g_150 p_1768->g_213 p_1768->g_796 p_1768->g_140 p_1768->g_1089 p_1768->g_328 p_1768->g_112 p_1768->g_1102 p_1768->g_11 p_1768->g_545 p_1768->g_174 p_1768->g_1209 p_1768->g_1230 p_1768->g_1253 p_1768->g_1255 p_1768->g_175 p_1768->g_283 p_1768->g_116 p_1768->g_1304 p_1768->g_1104 p_1768->g_357 p_1768->g_580.f0 p_1768->g_1337 p_1768->g_1254 p_1768->g_639 p_1768->g_1373 p_1768->g_378 p_1768->g_1378 p_1768->g_1394 p_1768->g_1412 p_1768->g_1414 p_1768->g_1415 p_1768->g_1431 p_1768->g_1432 p_1768->g_1433 p_1768->g_266 p_1768->g_1338 p_1768->g_1339 p_1768->g_1395 p_1768->g_1485 p_1768->g_1498 p_1768->g_577 p_1768->g_63 p_1768->g_192 p_1768->g_1459 p_1768->g_1529 p_1768->g_1636 p_1768->g_1458 p_1768->g_1760 p_1768->g_1632
 * writes: p_1768->g_60 p_1768->g_67 p_1768->g_72 p_1768->g_75 p_1768->g_207 p_1768->g_775 p_1768->g_395 p_1768->g_357 p_1768->g_328 p_1768->g_995 p_1768->g_108 p_1768->g_545 p_1768->g_528 p_1768->g_150 p_1768->g_214 p_1768->g_95 p_1768->g_116 p_1768->g_140 p_1768->g_213 p_1768->g_175 p_1768->g_1230 p_1768->g_11 p_1768->g_1264 p_1768->g_733 p_1768->g_295 p_1768->g_1010 p_1768->g_1373 p_1768->g_378 p_1768->g_1458 p_1768->g_192 p_1768->g_1255 p_1768->g_283
 */
union U0  func_1(struct S2 * p_1768)
{ /* block id: 4 */
    int16_t l_4 = 0x1D5FL;
    int8_t *l_10 = &p_1768->g_11[1];
    union U0 l_24 = {0xE67B38EBL};
    int64_t *l_1263 = (void*)0;
    int64_t **l_1262 = &l_1263;
    uint32_t *l_1358 = &p_1768->g_1010;
    int64_t l_1359 = 6L;
    int8_t *l_1371 = (void*)0;
    int8_t **l_1370 = &l_1371;
    int32_t *l_1372[8] = {&p_1768->g_1373,&p_1768->g_1373,&p_1768->g_1373,&p_1768->g_1373,&p_1768->g_1373,&p_1768->g_1373,&p_1768->g_1373,&p_1768->g_1373};
    int32_t l_1374 = 0x12D7E44CL;
    int8_t l_1375[6] = {2L,0x70L,2L,2L,0x70L,2L};
    int8_t *l_1510[7][3] = {{&l_1375[4],&l_1375[4],&p_1768->g_545},{&l_1375[4],&l_1375[4],&p_1768->g_545},{&l_1375[4],&l_1375[4],&p_1768->g_545},{&l_1375[4],&l_1375[4],&p_1768->g_545},{&l_1375[4],&l_1375[4],&p_1768->g_545},{&l_1375[4],&l_1375[4],&p_1768->g_545},{&l_1375[4],&l_1375[4],&p_1768->g_545}};
    int16_t l_1512 = 4L;
    VECTOR(int8_t, 2) l_1525 = (VECTOR(int8_t, 2))((-1L), 0x37L);
    VECTOR(int32_t, 8) l_1569 = (VECTOR(int32_t, 8))(0x70102E2DL, (VECTOR(int32_t, 4))(0x70102E2DL, (VECTOR(int32_t, 2))(0x70102E2DL, 0x26C3CD8FL), 0x26C3CD8FL), 0x26C3CD8FL, 0x70102E2DL, 0x26C3CD8FL);
    uint8_t l_1575 = 0x4DL;
    int16_t l_1596 = 1L;
    uint8_t ***l_1627 = &p_1768->g_1254;
    uint64_t ***l_1633 = &p_1768->g_1458;
    int8_t l_1745 = 0x3EL;
    VECTOR(uint32_t, 8) l_1751 = (VECTOR(uint32_t, 8))(0x93CF8B53L, (VECTOR(uint32_t, 4))(0x93CF8B53L, (VECTOR(uint32_t, 2))(0x93CF8B53L, 0x9CB75FE8L), 0x9CB75FE8L), 0x9CB75FE8L, 0x93CF8B53L, 0x9CB75FE8L);
    int16_t l_1753 = 0L;
    int16_t *l_1763 = &p_1768->g_116;
    int16_t *l_1764[8][5][2] = {{{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0}},{{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0}},{{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0}},{{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0}},{{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0}},{{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0}},{{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0}},{{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0},{&l_1596,(void*)0}}};
    uint32_t l_1765 = 4294967287UL;
    uint16_t l_1766 = 65535UL;
    uint32_t l_1767 = 0x4E3E407AL;
    int i, j, k;
    if ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))((safe_mul_func_int16_t_s_s((l_4 &= ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x069FL, 0x4C2FL)).yxyx)).x), ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(0x6DFAL, ((VECTOR(int16_t, 4))((-1L), func_5((p_1768->g_1373 &= ((p_1768->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1768->tid, 9))] || ((VECTOR(int16_t, 8))(((l_10 == ((*l_1370) = (func_12(((*l_1358) = (func_16(func_22(l_24, p_1768), l_24.f0, l_24.f0, l_10, (l_1262 == (p_1768->g_1264[2] = &l_1263)), p_1768) == p_1768->g_347.s5)), l_1359, p_1768->g_639.w, p_1768) , l_10))) && p_1768->g_1028.s5), (-8L), ((VECTOR(int16_t, 2))(0x2E82L)), ((VECTOR(int16_t, 4))(0x27A0L)))).s1) | l_1359)), l_1374, l_1375[4], p_1768->g_378.s5, p_1768), 0x33FDL, 0x658DL)), (-1L), 8L, 0x6917L)).odd, ((VECTOR(int16_t, 4))(0x2696L))))).z)), 1L, ((VECTOR(int8_t, 2))((-1L))), 0L, (-1L), 6L, 0x0BL)).s7454630415225636))), ((VECTOR(int8_t, 16))(0x07L)), ((VECTOR(int8_t, 16))(1L))))))).s9 <= 1UL))
    { /* block id: 681 */
        uint64_t *l_1456 = &p_1768->g_328;
        uint64_t **l_1455[8] = {&l_1456,&l_1456,&l_1456,&l_1456,&l_1456,&l_1456,&l_1456,&l_1456};
        int32_t l_1463 = 7L;
        union U0 l_1484 = {1UL};
        int i;
        for (p_1768->g_545 = (-27); (p_1768->g_545 > 8); ++p_1768->g_545)
        { /* block id: 684 */
            uint32_t l_1454 = 0x898EA436L;
            int32_t l_1462 = 0x60510994L;
            int32_t l_1464 = 0x124F4938L;
            for (p_1768->g_108 = (-1); (p_1768->g_108 > 25); p_1768->g_108++)
            { /* block id: 687 */
                uint64_t ***l_1457[5] = {&l_1455[7],&l_1455[7],&l_1455[7],&l_1455[7],&l_1455[7]};
                int32_t l_1465[6] = {0x0231FFF8L,0x0231FFF8L,0x0231FFF8L,0x0231FFF8L,0x0231FFF8L,0x0231FFF8L};
                int i;
                (*p_1768->g_527) = ((p_1768->g_580 , ((VECTOR(uint32_t, 2))(p_1768->g_1447.sb9)).lo) , (l_1465[3] = ((*p_1768->g_237) , (l_1464 = ((~GROUP_DIVERGE(0, 1)) && (safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((safe_add_func_uint8_t_u_u((***p_1768->g_1253), ((((void*)0 == (**p_1768->g_1337)) && ((l_1462 = (l_1454 ^ ((p_1768->g_1458 = l_1455[7]) == ((safe_lshift_func_int8_t_s_u(p_1768->g_1395.s4, (*p_1768->g_138))) , (void*)0)))) && 0xBC506AFFDA023F11L)) , l_1463))), (**p_1768->g_1254))) >= l_1463), 5UL)))))));
                if ((atomic_inc(&p_1768->g_atomic_input[39 * get_linear_group_id() + 4]) == 9))
                { /* block id: 694 */
                    int32_t l_1466 = (-6L);
                    int64_t l_1481 = 1L;
                    uint32_t l_1482[10][9] = {{4294967294UL,4294967294UL,0x98F57ED8L,0x19222B02L,9UL,1UL,0x681B771AL,0UL,0x681B771AL},{4294967294UL,4294967294UL,0x98F57ED8L,0x19222B02L,9UL,1UL,0x681B771AL,0UL,0x681B771AL},{4294967294UL,4294967294UL,0x98F57ED8L,0x19222B02L,9UL,1UL,0x681B771AL,0UL,0x681B771AL},{4294967294UL,4294967294UL,0x98F57ED8L,0x19222B02L,9UL,1UL,0x681B771AL,0UL,0x681B771AL},{4294967294UL,4294967294UL,0x98F57ED8L,0x19222B02L,9UL,1UL,0x681B771AL,0UL,0x681B771AL},{4294967294UL,4294967294UL,0x98F57ED8L,0x19222B02L,9UL,1UL,0x681B771AL,0UL,0x681B771AL},{4294967294UL,4294967294UL,0x98F57ED8L,0x19222B02L,9UL,1UL,0x681B771AL,0UL,0x681B771AL},{4294967294UL,4294967294UL,0x98F57ED8L,0x19222B02L,9UL,1UL,0x681B771AL,0UL,0x681B771AL},{4294967294UL,4294967294UL,0x98F57ED8L,0x19222B02L,9UL,1UL,0x681B771AL,0UL,0x681B771AL},{4294967294UL,4294967294UL,0x98F57ED8L,0x19222B02L,9UL,1UL,0x681B771AL,0UL,0x681B771AL}};
                    int32_t *l_1483 = &l_1466;
                    int i, j;
                    for (l_1466 = 0; (l_1466 <= (-27)); l_1466--)
                    { /* block id: 697 */
                        uint8_t l_1469 = 0UL;
                        uint16_t l_1470 = 65531UL;
                        VECTOR(int8_t, 8) l_1471 = (VECTOR(int8_t, 8))(0x5BL, (VECTOR(int8_t, 4))(0x5BL, (VECTOR(int8_t, 2))(0x5BL, 0x3BL), 0x3BL), 0x3BL, 0x5BL, 0x3BL);
                        int32_t l_1473 = (-10L);
                        int32_t *l_1472 = &l_1473;
                        int i;
                        l_1469 = 3L;
                        l_1472 = ((l_1470 , l_1471.s7) , (void*)0);
                    }
                    for (l_1466 = 0; (l_1466 == (-11)); --l_1466)
                    { /* block id: 703 */
                        int32_t l_1477 = 0x3D6831DEL;
                        int32_t *l_1476 = &l_1477;
                        int32_t *l_1478 = &l_1477;
                        int8_t l_1479 = 0x09L;
                        uint8_t l_1480 = 0UL;
                        l_1478 = l_1476;
                        l_1479 = 9L;
                        l_1480 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x076A68F1L, 6L, (-1L), 0x733B5D71L)).wyyyyzzyzzyywyyy)).s9;
                    }
                    l_1482[3][4] = l_1481;
                    l_1483 = l_1483;
                    unsigned int result = 0;
                    result += l_1466;
                    result += l_1481;
                    int l_1482_i0, l_1482_i1;
                    for (l_1482_i0 = 0; l_1482_i0 < 10; l_1482_i0++) {
                        for (l_1482_i1 = 0; l_1482_i1 < 9; l_1482_i1++) {
                            result += l_1482[l_1482_i0][l_1482_i1];
                        }
                    }
                    atomic_add(&p_1768->g_special_values[39 * get_linear_group_id() + 4], result);
                }
                else
                { /* block id: 710 */
                    (1 + 1);
                }
            }
            return l_1484;
        }
        return p_1768->g_580;
    }
    else
    { /* block id: 717 */
        int32_t l_1486 = 0x24056B4FL;
        int64_t *l_1487 = (void*)0;
        int8_t ***l_1507 = &l_1370;
        int16_t *l_1508 = &p_1768->g_140;
        int16_t *l_1509 = &p_1768->g_150;
        int64_t *l_1511 = (void*)0;
        int32_t l_1513 = 8L;
        l_1486 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x7FBE237BL, 0x424C5C45L)), ((VECTOR(int32_t, 4))(p_1768->g_1485.yxxy)), 0x123F29F8L, 0L)).s5;
        l_1486 ^= (((VECTOR(uint8_t, 4))(2UL, ((VECTOR(uint8_t, 2))(0x9EL, 246UL)), 0UL)).x <= p_1768->g_128.s7);
        l_1512 = ((((*l_1262) = l_1487) == ((*p_1768->g_213) = ((+(safe_mod_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(0x5859L, ((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((((l_1486 || l_1486) >= (p_1768->g_11[1] == ((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(p_1768->g_1498.wwwwxwxx)).lo, ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(0x0F45L, (safe_rshift_func_int8_t_s_s(((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x165CDE03D0C41DA3L, 0x1D5A8EFB245DBB1AL)).yxxxyyxy)), 0x29B6EF755CDA8F58L, (-7L), 0x137249F73C180955L, 3L, l_1486, 0x7F1CFE79AF91DC28L, (-1L), 0x5882EEC2806FB3A1L)).s7 > (((*p_1768->g_138)--) == p_1768->g_577.y)) , (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(0x04DCL, 0xF8F7L)).lo, ((((((*l_1509) = ((*l_1508) = (safe_mul_func_uint8_t_u_u((&l_1370 == l_1507), p_1768->g_63[5][0])))) > l_1486) | l_1486) , l_1510[6][1]) != &p_1768->g_11[1])))), 6)), 0L, ((VECTOR(int16_t, 8))((-2L))), p_1768->g_192, ((VECTOR(int16_t, 4))((-2L))))), ((VECTOR(int16_t, 16))(0x7D49L))))).s54f7, ((VECTOR(int16_t, 4))(0x38D6L))))), ((VECTOR(int16_t, 4))(0x046CL))))).xwwwxyyxxxyyyzyx, ((VECTOR(int16_t, 16))(1L))))).s7d7b)).xxzxxxywwxywxyxy, ((VECTOR(int16_t, 16))(1L))))).s8)) < 0x7AL), 0x190D560DA31B3AB1L)), 0)) | l_1486))), l_1486)), l_1486))) , l_1511))) , l_1486);
        l_1513 &= l_1486;
    }
    for (p_1768->g_192 = (-10); (p_1768->g_192 == 19); p_1768->g_192 = safe_add_func_int16_t_s_s(p_1768->g_192, 1))
    { /* block id: 730 */
        uint32_t l_1521 = 4294967292UL;
        VECTOR(int16_t, 2) l_1536 = (VECTOR(int16_t, 2))(8L, 2L);
        uint32_t l_1552 = 0x6103B670L;
        int32_t l_1554[1];
        int32_t l_1563[6];
        int32_t l_1564 = 1L;
        VECTOR(int8_t, 16) l_1573 = (VECTOR(int8_t, 16))(0x02L, (VECTOR(int8_t, 4))(0x02L, (VECTOR(int8_t, 2))(0x02L, 0x3DL), 0x3DL), 0x3DL, 0x02L, 0x3DL, (VECTOR(int8_t, 2))(0x02L, 0x3DL), (VECTOR(int8_t, 2))(0x02L, 0x3DL), 0x02L, 0x3DL, 0x02L, 0x3DL);
        int64_t l_1576[6] = {0x65B54F49EF47BBBDL,0x65B54F49EF47BBBDL,0x65B54F49EF47BBBDL,0x65B54F49EF47BBBDL,0x65B54F49EF47BBBDL,0x65B54F49EF47BBBDL};
        VECTOR(int8_t, 2) l_1623 = (VECTOR(int8_t, 2))(7L, 1L);
        VECTOR(uint64_t, 2) l_1701 = (VECTOR(uint64_t, 2))(0xA10844A18B45FE90L, 0xDFF62F57657A3B28L);
        uint32_t l_1733[10][5][5] = {{{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L}},{{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L}},{{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L}},{{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L}},{{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L}},{{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L}},{{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L}},{{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L}},{{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L}},{{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L},{4294967287UL,0xA611AB39L,4294967287UL,0x480DE822L,0xF3F19DE8L}}};
        int8_t **l_1752 = &l_1510[6][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1554[i] = 1L;
        for (i = 0; i < 6; i++)
            l_1563[i] = 4L;
        if ((atomic_inc(&p_1768->l_atomic_input[18]) == 7))
        { /* block id: 732 */
            uint16_t l_1516 = 0x1931L;
            l_1516++;
            unsigned int result = 0;
            result += l_1516;
            atomic_add(&p_1768->l_special_values[18], result);
        }
        else
        { /* block id: 734 */
            (1 + 1);
        }
        for (p_1768->g_75 = 0; (p_1768->g_75 == 46); p_1768->g_75 = safe_add_func_uint8_t_u_u(p_1768->g_75, 7))
        { /* block id: 739 */
            VECTOR(int8_t, 16) l_1524 = (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x03L), 0x03L), 0x03L, (-4L), 0x03L, (VECTOR(int8_t, 2))((-4L), 0x03L), (VECTOR(int8_t, 2))((-4L), 0x03L), (-4L), 0x03L, (-4L), 0x03L);
            uint16_t l_1528 = 65526UL;
            uint8_t l_1549 = 0x24L;
            uint32_t l_1550 = 4294967295UL;
            int8_t l_1551 = 0x68L;
            int16_t *l_1553 = &p_1768->g_150;
            VECTOR(uint8_t, 16) l_1587 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL, (VECTOR(uint8_t, 2))(255UL, 1UL), (VECTOR(uint8_t, 2))(255UL, 1UL), 255UL, 1UL, 255UL, 1UL);
            uint64_t *l_1590 = (void*)0;
            VECTOR(int8_t, 16) l_1622 = (VECTOR(int8_t, 16))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x57L), 0x57L), 0x57L, (-2L), 0x57L, (VECTOR(int8_t, 2))((-2L), 0x57L), (VECTOR(int8_t, 2))((-2L), 0x57L), (-2L), 0x57L, (-2L), 0x57L);
            uint64_t l_1626 = 8UL;
            uint64_t ***l_1640 = (void*)0;
            int32_t l_1647 = 0x49F4CCD3L;
            uint32_t l_1668 = 1UL;
            int32_t l_1731 = 0x57E67704L;
            int i;
            if ((((((l_1521 & ((((safe_div_func_uint16_t_u_u(((+(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(1L, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_1524.s0a7820ec)).s30)).xxxxxyyyyxyyyxxx, ((VECTOR(int8_t, 16))(l_1525.yxxxyxyxxyyyxyyx))))).odd)).lo, ((VECTOR(int8_t, 2))(1L, 0x41L)).xxyy, ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 4))((-4L), 0x3AL, 0x12L, 0L)).yxzyzwwx, ((VECTOR(int8_t, 8))(3L, 0L, 0x0AL, (safe_div_func_uint64_t_u_u(l_1528, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 16))(p_1768->g_1529.s081270ca9171d89b)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0xE2A2F2FEAE53D180L, 0xE5ACE2798A6B46A9L)), 1UL, 0xCBC011DFE29044C3L)), (safe_sub_func_int8_t_s_s(p_1768->g_1433.y, ((**p_1768->g_1254)--))), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(8UL, (+(((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(0x1541L, ((VECTOR(int16_t, 2))(l_1536.yy)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x1514L, ((*l_1553) = ((VECTOR(int16_t, 16))(p_1768->g_1529.s7, (safe_mul_func_uint16_t_u_u(l_1524.s4, ((safe_lshift_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(l_1524.s8, (((safe_mod_func_int8_t_s_s((p_1768->g_795.y = (safe_sub_func_uint64_t_u_u(((((safe_lshift_func_int16_t_s_u((((VECTOR(int16_t, 8))(0L, ((VECTOR(int16_t, 4))((l_1549 || l_1521), 1L, 0x3285L, (-1L))), (((VECTOR(int64_t, 8))(0L, (-3L), 0x6CC24F8665FBA33CL, 8L, l_1521, 0x62027D29329DA7C4L, (-6L), 0x29B78F25FACF658CL)).s0 < (*p_1768->g_1459)), 0x6603L, 0x002BL)).s1 > 0UL), l_1550)) || l_1521) & (**p_1768->g_525)) >= l_1521), l_1551))), 0xE6L)) != l_1552) < l_1528))) > (**p_1768->g_1254)), 2)) > 0x3DDDL))), 0x2AF9L, ((VECTOR(int16_t, 2))(0x26C0L)), ((VECTOR(int16_t, 4))((-7L))), l_1521, 0x6A8DL, ((VECTOR(int16_t, 2))(0x48BAL)), ((VECTOR(int16_t, 2))(0x08E5L)), 0L)).sd), (-1L), 0x7288L)).zyzxxwxz)), 7L, ((VECTOR(int16_t, 4))(0L)))).s8, p_1768->g_1485.x)) <= 0x0AL) & l_1550)), 8UL, 0xCB9D85F1F547C319L, ((VECTOR(uint64_t, 4))(0x93C93C2EEFD2EEA2L)), ((VECTOR(uint64_t, 2))(0x9358793ED7B746C6L)), ((VECTOR(uint64_t, 2))(5UL)), 0UL, ((VECTOR(uint64_t, 2))(0xFCD50CE7771FE029L)), 0UL)).sf9)), 0x7FDCE5CB5BEF7EF6L)).s0643101070005767)).se5)).yyxxxxxxyxyxxyxx))).s7623)).z)), ((VECTOR(int8_t, 2))(0x29L)), 0x20L, 5L))))).hi))).hi, ((VECTOR(int8_t, 2))(1L))))), ((VECTOR(int8_t, 2))(0x01L)), ((VECTOR(int8_t, 8))(0L)), 1L, 7L, (-10L))).sb5, ((VECTOR(int8_t, 2))(1L))))).lo , l_1521)) ^ l_1524.se), p_1768->g_1230.s3)) || FAKE_DIVERGE(p_1768->group_0_offset, get_group_id(0), 10)) | l_1536.y) == (*p_1768->g_1459))) , p_1768->g_11[1]) , (-9L)) == l_1536.x) , l_1549))
            { /* block id: 743 */
                uint16_t *l_1555[6][9] = {{&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528},{&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528},{&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528},{&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528},{&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528},{&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528,&l_1528}};
                uint64_t l_1556 = 0UL;
                int32_t l_1560 = 0x7BDCE977L;
                int32_t l_1572 = 1L;
                uint32_t *l_1574 = &p_1768->g_395;
                int i, j;
                l_1554[0] = 1L;
                l_1576[1] = ((((l_1556--) | l_1550) >= (l_1560 = ((VECTOR(uint16_t, 8))(p_1768->g_1559.s35450671)).s2)) <= (safe_add_func_int32_t_s_s((l_1564 = (l_1563[5] = (l_1554[0] = l_1528))), ((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))(0x3DEA2748L, (p_1768->g_1394.s6 , l_1552), 5L, ((VECTOR(int32_t, 2))(l_1569.s40)), 0x57E827B5L, ((VECTOR(int32_t, 8))(0x3DE7D786L, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))((+((p_1768->g_580 , (safe_sub_func_uint32_t_u_u(l_1572, (((*l_1553) = (l_1536.y == ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(l_1573.sac2ff54a))))).s5)) && (((*l_1574) ^= l_1550) < l_1524.se))))) <= 0x6BL)), (-1L), l_1536.x, l_1575, ((VECTOR(int32_t, 2))(0L)), (-4L), 0L)).lo, ((VECTOR(int32_t, 4))((-6L)))))), 0x36F60330L, (-1L), 3L)), 1L, 1L)).sd, l_1524.s7)), p_1768->g_639.z)) & l_1552))));
            }
            else
            { /* block id: 753 */
                uint64_t **l_1584 = &p_1768->g_1459;
                VECTOR(uint64_t, 4) l_1591 = (VECTOR(uint64_t, 4))(0x9F5A0A45205660B6L, (VECTOR(uint64_t, 2))(0x9F5A0A45205660B6L, 0x43B15DDB4D42C65AL), 0x43B15DDB4D42C65AL);
                int32_t l_1607 = 2L;
                uint16_t l_1641 = 0xBCB0L;
                int32_t *l_1700 = (void*)0;
                VECTOR(int32_t, 16) l_1702 = (VECTOR(int32_t, 16))(0x09EF7159L, (VECTOR(int32_t, 4))(0x09EF7159L, (VECTOR(int32_t, 2))(0x09EF7159L, 0x4847D9C8L), 0x4847D9C8L), 0x4847D9C8L, 0x09EF7159L, 0x4847D9C8L, (VECTOR(int32_t, 2))(0x09EF7159L, 0x4847D9C8L), (VECTOR(int32_t, 2))(0x09EF7159L, 0x4847D9C8L), 0x09EF7159L, 0x4847D9C8L, 0x09EF7159L, 0x4847D9C8L);
                VECTOR(uint8_t, 16) l_1711 = (VECTOR(uint8_t, 16))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 255UL), 255UL), 255UL, 2UL, 255UL, (VECTOR(uint8_t, 2))(2UL, 255UL), (VECTOR(uint8_t, 2))(2UL, 255UL), 2UL, 255UL, 2UL, 255UL);
                int i;
                for (p_1768->g_1373 = (-26); (p_1768->g_1373 != 27); p_1768->g_1373 = safe_add_func_uint32_t_u_u(p_1768->g_1373, 1))
                { /* block id: 756 */
                    uint16_t *l_1582 = (void*)0;
                    uint16_t *l_1583 = (void*)0;
                    uint32_t **l_1595 = &p_1768->g_1306[4][0];
                    int32_t l_1597 = (-6L);
                    int32_t l_1598 = (-1L);
                    uint8_t *l_1606[9][9] = {{&p_1768->g_104,(void*)0,&l_1549,&p_1768->g_104,&p_1768->g_112[0][6][1],&l_1549,&l_1549,&p_1768->g_112[0][6][1],&p_1768->g_104},{&p_1768->g_104,(void*)0,&l_1549,&p_1768->g_104,&p_1768->g_112[0][6][1],&l_1549,&l_1549,&p_1768->g_112[0][6][1],&p_1768->g_104},{&p_1768->g_104,(void*)0,&l_1549,&p_1768->g_104,&p_1768->g_112[0][6][1],&l_1549,&l_1549,&p_1768->g_112[0][6][1],&p_1768->g_104},{&p_1768->g_104,(void*)0,&l_1549,&p_1768->g_104,&p_1768->g_112[0][6][1],&l_1549,&l_1549,&p_1768->g_112[0][6][1],&p_1768->g_104},{&p_1768->g_104,(void*)0,&l_1549,&p_1768->g_104,&p_1768->g_112[0][6][1],&l_1549,&l_1549,&p_1768->g_112[0][6][1],&p_1768->g_104},{&p_1768->g_104,(void*)0,&l_1549,&p_1768->g_104,&p_1768->g_112[0][6][1],&l_1549,&l_1549,&p_1768->g_112[0][6][1],&p_1768->g_104},{&p_1768->g_104,(void*)0,&l_1549,&p_1768->g_104,&p_1768->g_112[0][6][1],&l_1549,&l_1549,&p_1768->g_112[0][6][1],&p_1768->g_104},{&p_1768->g_104,(void*)0,&l_1549,&p_1768->g_104,&p_1768->g_112[0][6][1],&l_1549,&l_1549,&p_1768->g_112[0][6][1],&p_1768->g_104},{&p_1768->g_104,(void*)0,&l_1549,&p_1768->g_104,&p_1768->g_112[0][6][1],&l_1549,&l_1549,&p_1768->g_112[0][6][1],&p_1768->g_104}};
                    VECTOR(uint16_t, 16) l_1616 = (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x3358L), 0x3358L), 0x3358L, 6UL, 0x3358L, (VECTOR(uint16_t, 2))(6UL, 0x3358L), (VECTOR(uint16_t, 2))(6UL, 0x3358L), 6UL, 0x3358L, 6UL, 0x3358L);
                    int64_t *l_1625 = &l_1576[1];
                    VECTOR(uint32_t, 16) l_1646 = (VECTOR(uint32_t, 16))(0x7B8C5518L, (VECTOR(uint32_t, 4))(0x7B8C5518L, (VECTOR(uint32_t, 2))(0x7B8C5518L, 1UL), 1UL), 1UL, 0x7B8C5518L, 1UL, (VECTOR(uint32_t, 2))(0x7B8C5518L, 1UL), (VECTOR(uint32_t, 2))(0x7B8C5518L, 1UL), 0x7B8C5518L, 1UL, 0x7B8C5518L, 1UL);
                    int32_t *l_1649 = &p_1768->g_528[2];
                    union U0 l_1673 = {0UL};
                    int i, j;
                    l_1598 &= (l_1597 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(p_1768->g_1579.xyxxxyxx)).s60, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((safe_lshift_func_int16_t_s_s(((!(p_1768->g_1395.s4 = l_1551)) >= (l_1584 != &p_1768->g_526)), 11)), (((((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_1587.s3709efa29827d2e6)).s454e)))).x, (safe_add_func_int64_t_s_s(((void*)0 == l_1590), ((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 8))(l_1591.ywyzyxww)).s2554554775540746, ((VECTOR(uint64_t, 8))((((-7L) | (((void*)0 != p_1768->g_1594) || ((l_1595 == (void*)0) <= l_1596))) , (*p_1768->g_1459)), 0x8C03BF3B15FFF177L, 0x90747BAF9DB79B8FL, ((VECTOR(uint64_t, 4))(1UL)), 2UL)).s6036754253263604, ((VECTOR(uint64_t, 16))(0UL))))).lo)).s71, ((VECTOR(uint64_t, 2))(0xB22AC38D0735BB6BL))))).odd)))) & p_1768->g_759.y) & l_1591.x) >= (*p_1768->g_1459)) < 0x0F1ADDD8BD6AA779L), 0x374A67B6L, l_1591.w, 0x14A5F2B3L, l_1563[5], (-10L), ((VECTOR(int32_t, 2))(0x4D4507CFL)), 0x0413C083L, 0L, 0L, ((VECTOR(int32_t, 4))(0x59803B1CL)))).se3))))))), 0x53B69877L, ((VECTOR(int32_t, 2))(0x7863FE23L)), (-3L), (-1L), (-5L))).s5234055657257341, ((VECTOR(int32_t, 16))(0x3E422FF8L)), ((VECTOR(int32_t, 16))((-1L)))))).s9c)).odd);
                    if ((!((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 8))(p_1768->g_1599.s72b5f01f)).s73, (uint16_t)0UL, (uint16_t)((void*)0 == &p_1768->g_1338[3])))).yyxxxxyyyyyyyyyy)).s4 < (safe_mod_func_int64_t_s_s((+((*l_1625) |= (safe_lshift_func_uint8_t_u_s((((l_1607 = (~(--(*p_1768->g_138)))) < (l_1598 = ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 2))(p_1768->g_1608.s5a)).yyxxyyxy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))(0x4EL, (-8L), 0x51L, (safe_add_func_int64_t_s_s((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 4))(p_1768->g_1615.xxyx)).odd, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 2))(0x339DL, 0xA93CL)), ((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(l_1616.s18ce)).wzwxyzywywxwxzyy, ((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 4))(p_1768->g_1617.yyxx)).even, ((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 4))(p_1768->g_1447.sf, (p_1768->g_1431.y || ((safe_add_func_uint8_t_u_u((l_1563[1] = (l_1591.z != (safe_mul_func_uint8_t_u_u(l_1616.s1, ((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 2))((-1L), 5L)).xxyy, ((VECTOR(int8_t, 4))(l_1622.s4056)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_1623.xxyxyxxxyyyyyyyy)).s95e2)).xxxwzxyx)).odd))), 0L, 0x09L, 0L, 0x57L)), ((VECTOR(int8_t, 2))(p_1768->g_1624.xz)), 0x59L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x24L, 8L)))).hi, (p_1768->g_545 |= ((*p_1768->g_1254) == &l_1549)), l_1591.w, 0L, (-1L))).s78)).xyyxxyxyxxyxxxxy, ((VECTOR(int8_t, 16))(0x64L))))).s1)))), l_1554[0])) && 0x3EE9L)), 1UL, 0xFDC3L)).wxwzwyxzzwxxyxyy, ((VECTOR(uint16_t, 16))(0xF776L))))).sd9))), p_1768->g_11[0], p_1768->g_295, ((VECTOR(uint16_t, 4))(0x1CDFL)))))).s16, ((VECTOR(uint16_t, 2))(1UL)), ((VECTOR(uint16_t, 2))(65535UL))))).yxyyxyyyyyyxxxyx))).sb4))), 0xFA92L, 0xF585L)).odd))).hi, l_1549)), l_1549)), GROUP_DIVERGE(1, 1))), 0L, ((VECTOR(int8_t, 2))(5L)), 0x4CL)), ((VECTOR(int8_t, 8))(0x69L))))).s3212270325224147, ((VECTOR(int8_t, 16))((-1L))), ((VECTOR(int8_t, 16))(0L))))).s85)).xyxxxxxy))).s7)) & 0x0CL), 2)))), l_1521))) , 0x0A4A23AFL)))
                    { /* block id: 766 */
                        if (l_1626)
                            break;
                    }
                    else
                    { /* block id: 768 */
                        uint64_t ****l_1634 = (void*)0;
                        uint64_t ****l_1635 = &l_1633;
                        uint64_t ****l_1637 = (void*)0;
                        uint64_t ***l_1639 = &p_1768->g_1458;
                        uint64_t ****l_1638[5] = {&l_1639,&l_1639,&l_1639,&l_1639,&l_1639};
                        int32_t **l_1648 = &p_1768->g_1255;
                        int i;
                        l_1647 = ((l_1627 != &p_1768->g_1254) ^ (safe_add_func_int8_t_s_s(0x73L, ((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(0x32A2A63CL, 0x34CD1CE4L, 0x07D18D09L, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_1768->g_1632.s20274676)).s4224427616434001)).even, ((VECTOR(int32_t, 8))(0x3DAFD100L, 0x7F080EF8L, ((VECTOR(int32_t, 4))((((l_1640 = (p_1768->g_1636 = ((*l_1635) = l_1633))) != (((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(GROUP_DIVERGE(1, 1), 0xBE5BL, 65530UL, 0x9566L)), 0xCC89L, 0x1386L, ((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x710FL, 0x43E1L)), 0x2509L, 0x3D7CL)), l_1641, 1L, (0x162043DBL > (safe_lshift_func_int8_t_s_u(l_1587.s7, (((GROUP_DIVERGE(1, 1) , l_1536.x) & (l_1598 = ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 8))(p_1768->g_1644.xyxyxxyx)).s75, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_1768->g_1645.yy)).xyyyyxyx)).s61)))))).yxyy, ((VECTOR(uint16_t, 2))(0UL, 0xC694L)).yyyy))).even)).xyxx, ((VECTOR(uint32_t, 4))(l_1646.sce75))))).xwxzyxyzyzzzwzxx)).s12, ((VECTOR(uint32_t, 16))((18446744073709551609UL != l_1597), ((VECTOR(uint32_t, 4))(0x8EC8B893L)), l_1550, 9UL, ((VECTOR(uint32_t, 2))(7UL)), 4294967295UL, l_1591.z, ((VECTOR(uint32_t, 4))(0xABCAE936L)), 0x61BDEC39L)).s97))).xyyy)).z)) , 253UL)))), 0x2D3CL, 0x21DEL, 0x5868L, l_1576[1], 0x0CB0L, 0x5A63L, 7L, 2L, 0x3966L)).odd))).even)).lo))), ((VECTOR(uint16_t, 2))(9UL)), 1UL, 0xB739L, ((VECTOR(uint16_t, 4))(0xE9A3L)))).lo, ((VECTOR(uint16_t, 8))(0x26A2L))))).s4 , &l_1584)) , l_1616.s3), 0x2DD0DD4FL, 1L, 1L)), 0x352B63EFL, 0L)), ((VECTOR(int32_t, 8))(0x514654D4L))))), l_1573.s4, ((VECTOR(int32_t, 2))(1L)), 9L, 0x526AF83FL)).s72c2, ((VECTOR(int32_t, 4))(3L)), ((VECTOR(int32_t, 4))(0x033B89F1L))))).yxzzywwy, ((VECTOR(int32_t, 8))(4L))))).s2, 7L)) , (*p_1768->g_138)))));
                        l_1647 = (-10L);
                        l_1649 = ((*l_1648) = &l_1563[5]);
                        if (l_1576[1])
                            continue;
                    }
                    for (p_1768->g_108 = (-15); (p_1768->g_108 < 33); p_1768->g_108++)
                    { /* block id: 781 */
                        uint16_t *l_1652 = &p_1768->g_207[4];
                        int32_t l_1676 = 8L;
                        l_1647 = l_1554[0];
                        (*l_1649) = ((--(*l_1652)) < (l_1521 == ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(p_1768->g_1657.s25471621)).s5, ((*l_1625) = ((((*l_1649) == ((l_1591.w | ((VECTOR(int16_t, 16))((p_1768->g_1431.y = (((((*p_1768->g_1459)--) <= (safe_rshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((l_1668 , p_1768->g_128.sf) | l_1524.s1), (safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((((((l_1673 , (((((l_1591.y > (safe_mod_func_uint8_t_u_u(l_1641, l_1622.sc))) <= 0xC95F4BAFD0F333B1L) > 255UL) == (*p_1768->g_526)) , (***p_1768->g_1253))) | (**p_1768->g_1254)) & l_1676) ^ l_1676) < (*l_1649)) & l_1528), 1)) , p_1768->g_1414.y), l_1591.x)))), l_1550)), (-6L))), l_1623.x))) <= GROUP_DIVERGE(0, 1)) & (*l_1649))), l_1550, 0x42DEL, 0x47A6L, 0L, ((VECTOR(int16_t, 2))(0x129DL)), ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 4))(0x2443L)), 0x7995L)).sb) <= (*l_1649))) , (*l_1649)) <= l_1564)))) , 1L)));
                        if (l_1641)
                            break;
                        (*l_1649) ^= 1L;
                    }
                    if ((*l_1649))
                    { /* block id: 791 */
                        uint16_t **l_1690 = &p_1768->g_995;
                        uint16_t **l_1691 = &l_1583;
                        int32_t l_1694 = 0x590491CEL;
                        uint32_t *l_1695 = (void*)0;
                        uint32_t *l_1696 = (void*)0;
                        uint32_t *l_1697 = (void*)0;
                        uint32_t *l_1698 = &p_1768->g_295;
                        int32_t **l_1699[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                        uint64_t *l_1710 = &p_1768->g_283;
                        uint64_t **l_1709 = &l_1710;
                        VECTOR(uint8_t, 8) l_1729 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), 255UL, 0UL, 255UL);
                        int i;
                        l_1647 = (((-1L) == (safe_rshift_func_uint8_t_u_s(((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((**p_1768->g_1254) ^= ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((-1L), ((VECTOR(uint32_t, 8))(0xA1FDE13EL, ((VECTOR(uint32_t, 2))(p_1768->g_1689.yx)), 1UL, ((VECTOR(uint32_t, 4))(0x1EB19404L, ((*l_1698) ^= (((((*l_1649) = (((((VECTOR(uint64_t, 4))(((&l_1641 == ((*l_1691) = ((*l_1690) = &p_1768->g_207[4]))) > (safe_rshift_func_uint16_t_u_u((((((*p_1768->g_1459) != l_1576[1]) , (*p_1768->g_1337)) != (*p_1768->g_1337)) , p_1768->g_1230.s5), 14))), l_1641, 6UL, 0x996C075DAD9FE2ACL)).x == (-1L)) , l_1694) && l_1607)) <= l_1694) == l_1528) | l_1552)), 0xCEAF5EEBL, 1UL)))).s0)), l_1521)), 1)) , l_1551)), 2)) >= 0x4B01L), l_1668)) && 1L), 2))) & p_1768->g_1529.s2);
                        l_1649 = (l_1700 = l_1372[3]);
                        if (l_1701.x)
                            break;
                        l_1554[0] |= ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(l_1702.sc0)).yxxxyyxy, (int32_t)(!((safe_mul_func_int16_t_s_s(((((l_1563[5] = (safe_add_func_int8_t_s_s(p_1768->g_comm_values[p_1768->tid], (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))((((*l_1709) = &p_1768->g_283) == l_1590), ((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_1711.sef10)).y, 255UL, 0x72L, ((VECTOR(uint8_t, 2))(2UL, 0x08L)), 0xD1L, (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((((((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 16))((safe_lshift_func_uint16_t_u_u(((1L < ((*l_1553) = 0x3148L)) != ((VECTOR(uint64_t, 16))(((safe_unary_minus_func_int32_t_s((8L != (safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(p_1768->g_1394.sd, (safe_sub_func_int16_t_s_s(p_1768->g_1373, ((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_1729.s4513546761261526)).hi)).s4, ((*l_10) = (+(((VECTOR(uint64_t, 16))(0UL, (**p_1768->g_1458), 0xF77DB554816CDDCDL, (***p_1768->g_1636), ((VECTOR(uint64_t, 2))(0x7A64ED9A6014C3F9L)), ((VECTOR(uint64_t, 4))(0x3C60B5C5044A460CL)), l_1616.s8, 0xBF74A218CDF12A50L, (***p_1768->g_1636), ((VECTOR(uint64_t, 2))(0x058BCA2673D81D8AL)), 0xD4413F4AA84A3E50L)).s2 <= l_1622.s8))))) || GROUP_DIVERGE(0, 1)))))), p_1768->g_1608.s6))))) == (**p_1768->g_1254)), 2UL, 0UL, 18446744073709551615UL, ((VECTOR(uint64_t, 4))(0x259FD7142803F009L)), ((VECTOR(uint64_t, 8))(1UL)))).s2), 13)), 1L, p_1768->g_1431.y, 0x06FCL, p_1768->g_639.x, 1L, 0x6960L, ((VECTOR(int16_t, 2))(0x38CAL)), p_1768->g_733.s7, ((VECTOR(int16_t, 2))((-1L))), 0x77A3L, p_1768->g_1447.s4, 7L, 0x7889L)), (int16_t)(-1L), (int16_t)0L))).s2 < p_1768->g_128.s2) & (*p_1768->g_138)) <= 0x0E13C70FL) | 0x4BBB629CDFA58D8AL), p_1768->g_60)), (*p_1768->g_995))), 15)), 255UL, 5UL, 0xC1L, ((VECTOR(uint8_t, 2))(0x72L)), (**p_1768->g_1254), GROUP_DIVERGE(2, 1), 0xC2L, 0xC1L)).even)), ((VECTOR(uint8_t, 8))(5UL))))).s24, ((VECTOR(uint8_t, 2))(1UL))))), GROUP_DIVERGE(0, 1), 0x31L, 1UL, 255UL, 0x8AL)).odd)).z, 0UL))))) ^ 0UL) <= l_1576[5]) | l_1536.x), p_1768->g_1529.s6)) || 9UL))))).s2740326115653313, ((VECTOR(int32_t, 16))(0x55BBDCDCL)), ((VECTOR(int32_t, 16))(0x216A40BCL))))).s7;
                    }
                    else
                    { /* block id: 806 */
                        int32_t l_1730 = (-4L);
                        int32_t l_1732 = 1L;
                        int32_t **l_1736 = &p_1768->g_1255;
                        l_1733[3][1][1]--;
                        (*l_1736) = (void*)0;
                    }
                }
            }
            for (p_1768->g_283 = 0; (p_1768->g_283 < 13); p_1768->g_283 = safe_add_func_int64_t_s_s(p_1768->g_283, 7))
            { /* block id: 814 */
                volatile union U1 *l_1740 = (void*)0;
                volatile union U1 **l_1739 = &l_1740;
                (*l_1739) = &p_1768->g_1378;
            }
        }
        l_1753 &= ((safe_mul_func_uint8_t_u_u((l_1358 != (void*)0), ((p_1768->g_283 ^= (safe_rshift_func_uint16_t_u_u(p_1768->g_comm_values[p_1768->tid], 8))) , 0x56L))) < (l_1745 , ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((l_1536.y && ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(0xF6E3B086L, ((VECTOR(uint32_t, 2))(p_1768->g_1750.xx)), 0x55AA3E3FL, 0x5442BC81L, ((VECTOR(uint32_t, 2))(l_1751.s74)), 0UL)).s46)).lo, (*p_1768->g_1103), (((***p_1768->g_1253) || (l_1752 == (void*)0)) & 0x72EA4DFFL), ((VECTOR(uint32_t, 4))(0UL)), 4294967295UL)), ((VECTOR(uint32_t, 8))(4294967291UL))))))).s2), 7)), (*p_1768->g_138))) <= p_1768->g_150)));
    }
    l_1767 ^= ((safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s(0x278D139F4CC2CCEDL, ((((-7L) & (4294967287UL || ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))((~(((~((VECTOR(int32_t, 2))(0x1B0315B5L, (-4L))).hi) & ((p_1768->g_328 != (*p_1768->g_138)) , ((((0x124788AAL | (l_1765 ^= (((*p_1768->g_526) > (++(***p_1768->g_1636))) ^ (p_1768->g_1760 ^ (safe_rshift_func_int16_t_s_u((p_1768->g_1230.s2 &= (p_1768->g_150 = ((*l_1763) = p_1768->g_1632.s2))), 13)))))) , (-1L)) , 0x1FAB623FL) , 0x4A5868E9L))) <= 0x6EL)), 0x59EFL, 0x23DDL, ((VECTOR(int16_t, 2))((-8L))), ((VECTOR(int16_t, 4))((-6L))), 0x4FE3L, 9L, p_1768->g_75, ((VECTOR(int16_t, 4))(0x185CL)))).hi)).s1030513107157453, ((VECTOR(uint16_t, 16))(0x7CEDL))))).se)) == 1L) ^ (-7L)))), FAKE_DIVERGE(p_1768->global_0_offset, get_global_id(0), 10))) == l_1766);
    return l_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_1768->g_1378 p_1768->g_140 p_1768->g_1394 p_1768->g_1412 p_1768->g_1414 p_1768->g_1415 p_1768->g_1254 p_1768->g_138 p_1768->g_525 p_1768->g_526 p_1768->g_330 p_1768->g_1431 p_1768->g_1432 p_1768->g_1433 p_1768->g_128 p_1768->g_112 p_1768->g_266 p_1768->g_207 p_1768->g_328
 * writes: p_1768->g_140 p_1768->g_108 p_1768->g_395 p_1768->g_95 p_1768->g_378 p_1768->g_11 p_1768->g_328
 */
int16_t  func_5(int32_t  p_6, int16_t  p_7, int32_t  p_8, int64_t  p_9, struct S2 * p_1768)
{ /* block id: 651 */
    uint32_t l_1379 = 5UL;
    union U0 l_1401 = {0x8E749F9DL};
    VECTOR(int8_t, 16) l_1408 = (VECTOR(int8_t, 16))(0x16L, (VECTOR(int8_t, 4))(0x16L, (VECTOR(int8_t, 2))(0x16L, 0x41L), 0x41L), 0x41L, 0x16L, 0x41L, (VECTOR(int8_t, 2))(0x16L, 0x41L), (VECTOR(int8_t, 2))(0x16L, 0x41L), 0x16L, 0x41L, 0x16L, 0x41L);
    VECTOR(int32_t, 2) l_1411 = (VECTOR(int32_t, 2))(0x5177CA88L, 0x6B51BB68L);
    union U1 *l_1416 = &p_1768->g_1209;
    int32_t l_1439[4][6][6] = {{{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)}},{{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)}},{{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)}},{{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)},{1L,0x475FE439L,(-3L),0L,0L,(-3L)}}};
    uint32_t l_1440 = 0x2DF6C890L;
    int i, j, k;
    l_1379 ^= (safe_mod_func_int32_t_s_s(p_8, (p_1768->g_1378 , p_8)));
    if ((atomic_inc(&p_1768->g_atomic_input[39 * get_linear_group_id() + 10]) == 5))
    { /* block id: 654 */
        int32_t l_1380 = 0x7EEE8B58L;
        int32_t l_1381[5] = {(-10L),(-10L),(-10L),(-10L),(-10L)};
        uint8_t l_1382 = 255UL;
        int32_t *l_1383 = &l_1380;
        int i;
        l_1382 = (l_1381[3] &= l_1380);
        l_1383 = l_1383;
        unsigned int result = 0;
        result += l_1380;
        int l_1381_i0;
        for (l_1381_i0 = 0; l_1381_i0 < 5; l_1381_i0++) {
            result += l_1381[l_1381_i0];
        }
        result += l_1382;
        atomic_add(&p_1768->g_special_values[39 * get_linear_group_id() + 10], result);
    }
    else
    { /* block id: 658 */
        (1 + 1);
    }
    for (p_1768->g_140 = 0; (p_1768->g_140 <= 21); p_1768->g_140 = safe_add_func_uint16_t_u_u(p_1768->g_140, 5))
    { /* block id: 663 */
        uint16_t l_1386 = 0x8D02L;
        int32_t l_1387 = 0x6202FD0BL;
        int8_t *l_1400[2][10] = {{&p_1768->g_11[4],(void*)0,(void*)0,(void*)0,&p_1768->g_11[4],&p_1768->g_11[4],(void*)0,(void*)0,(void*)0,&p_1768->g_11[4]},{&p_1768->g_11[4],(void*)0,(void*)0,(void*)0,&p_1768->g_11[4],&p_1768->g_11[4],(void*)0,(void*)0,(void*)0,&p_1768->g_11[4]}};
        VECTOR(int16_t, 4) l_1413 = (VECTOR(int16_t, 4))(0x369EL, (VECTOR(int16_t, 2))(0x369EL, (-1L)), (-1L));
        union U1 *l_1417 = &p_1768->g_1209;
        int32_t l_1420 = 0x28D594C1L;
        VECTOR(int8_t, 8) l_1434 = (VECTOR(int8_t, 8))(0x77L, (VECTOR(int8_t, 4))(0x77L, (VECTOR(int8_t, 2))(0x77L, 0x18L), 0x18L), 0x18L, 0x77L, 0x18L);
        uint64_t *l_1437 = &p_1768->g_328;
        int32_t l_1438 = 4L;
        int i, j;
        l_1387 |= l_1386;
        for (p_1768->g_108 = (-16); (p_1768->g_108 >= 56); p_1768->g_108 = safe_add_func_uint8_t_u_u(p_1768->g_108, 7))
        { /* block id: 667 */
            VECTOR(uint32_t, 4) l_1398 = (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0xB56769A2L), 0xB56769A2L);
            int32_t *l_1399[7] = {&p_1768->g_528[2],&p_1768->g_528[2],&p_1768->g_528[2],&p_1768->g_528[2],&p_1768->g_528[2],&p_1768->g_528[2],&p_1768->g_528[2]};
            int i;
            p_6 = ((p_6 & (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_1768->g_1394.s97fbeade)).s2, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_1768->g_1395.s0225)).zxzyxwzwzwxwxyxz)).s62)).odd)), 1))) , (((safe_add_func_uint8_t_u_u(FAKE_DIVERGE(p_1768->group_2_offset, get_group_id(2), 10), (l_1379 != (p_9 | p_6)))) & p_7) & ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_1398.zw)), 0x58E2E2B6L, 4294967295UL)).z));
        }
        (*p_1768->g_1412) = func_51(l_1400[0][5], func_51(&p_1768->g_11[4], (l_1401 , &p_6), p_1768->g_1394.s0, p_1768), (safe_div_func_uint8_t_u_u((((VECTOR(uint32_t, 8))(0x09FCD2DDL, ((VECTOR(uint32_t, 2))(p_1768->g_1404.xx)), ((VECTOR(uint32_t, 16))(p_1768->g_1405.yywyzzzxxxzwxyyx)).s3, 4294967289UL, ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x79L, 0x70L)).xxyy)), 8L, 0x63L, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))((safe_lshift_func_int8_t_s_s(p_6, p_6)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_1408.sc84bfc1c10ba5bdf)).lo)))).even)).odd)), ((VECTOR(int8_t, 4))((((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 8))(1UL, 8UL, ((VECTOR(uint32_t, 2))(1UL, 0x73F40AE4L)), (safe_add_func_int16_t_s_s((p_7 , 1L), p_9)), p_6, 0x60E33BC4L, 4294967295UL)), ((VECTOR(uint32_t, 8))(0UL))))).s5 < l_1379), l_1411.y, 4L, (-1L))), 0x56L)).s34, (int8_t)(-7L)))), (-5L), p_1768->g_347.s3, 0x1CL, 0x72L, ((VECTOR(int8_t, 2))(0x44L)), 0x4EL, 1L)).s5 > p_7) == 9L), 4294967295UL, 0xDC2ABA50L)).s7 , 255UL), l_1387)), p_1768);
        l_1438 &= ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(l_1413.yxxyxzxzyzzxwwzx)).s63fa, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(p_1768->g_1414.zwzxyzzz)).lo, (int16_t)((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 2))(p_1768->g_1415.s88)).yxxyxxxxxxyyxxyy, ((VECTOR(uint8_t, 16))(((**p_1768->g_1254) = ((l_1387 = (l_1416 == l_1417)) >= l_1411.y)), 0x38L, ((*p_1768->g_138) = ((safe_rshift_func_uint8_t_u_u(0xC3L, ((((((*l_1437) ^= (((l_1420 != ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(((((safe_add_func_uint64_t_u_u((p_1768->g_378.s6 = (**p_1768->g_525)), (safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))(0x42F2L, ((VECTOR(int16_t, 2))((-6L), 0x29B8L)), 1L)).zywzxxxw, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x1A90L, (-8L))))).yyyxyxxyyxxxxxxy, ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(0x4CFEL, 0x4FC1L, (~((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_1768->g_1431.xx)).xyxy)).y), 0x4039L, ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_1768->g_1432.wywx)), (-10L), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 4))(p_1768->g_1433.yyyy)), (int8_t)l_1408.s3, (int8_t)((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 8))(l_1434.s52550116)).s3646634217762426, ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))((p_1768->g_11[1] = ((((safe_mod_func_uint32_t_u_u(0xA7FF9166L, p_6)) != p_1768->g_128.s5) == p_8) == p_6)), 0x0CL, p_6, l_1413.w, l_1387, 3L, 0L, ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))(3L)), l_1411.x, 0x5DL, ((VECTOR(int8_t, 2))(0L)), 0x77L)).s25, ((VECTOR(int8_t, 2))(7L))))).yyxyxyxyxxyyyxxy)))))).sf9, ((VECTOR(int8_t, 2))(0x02L)), ((VECTOR(int8_t, 2))(0x68L))))).xyxxxxyy)).s42, ((VECTOR(int8_t, 2))((-6L))), ((VECTOR(int8_t, 2))((-6L)))))), (-1L), 7L)), ((VECTOR(int8_t, 4))(4L)))).s75, ((VECTOR(int8_t, 2))(0x04L))))).even))), p_1768->g_112[0][9][2], 0x26L, p_1768->g_266.x, p_1768->g_207[2], ((VECTOR(int8_t, 4))((-2L))), p_1768->g_128.s5, 0x64L, (-4L), 0x78L)).sb, (-4L), 0x2CL)).odd, ((VECTOR(uint8_t, 4))(255UL))))))).s14, ((VECTOR(int16_t, 2))(0x00ABL))))).yyyxxxxxyyxxxxyy))))).s4f)).xxyxxxyx))).s72, ((VECTOR(uint16_t, 2))(0UL))))), (-8L), 0x6E33145BL)).odd)).even, l_1411.y)))) ^ p_7) == p_1768->g_1433.y) & 1L), l_1408.s7)), p_1768->g_112[0][9][2])), 0x2D102991L)) || 0x31B2L)) > p_8) && l_1387)) || 18446744073709551615UL) >= l_1411.y) , l_1413.y) | 0x198383122A91AC4AL))) | 0x6122L)), ((VECTOR(uint8_t, 2))(255UL)), p_7, ((VECTOR(uint8_t, 4))(1UL)), ((VECTOR(uint8_t, 4))(0x73L)), 0xBFL, 0x23L))))).lo)).s0)))))).hi)), ((VECTOR(int16_t, 2))(0x3FFDL)), ((VECTOR(int16_t, 2))(0x0806L))))).xyxy, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 4))(8L))))).even, (int16_t)3L))).xyyx, ((VECTOR(uint16_t, 4))(65532UL))))).x;
    }
    l_1440++;
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1768->g_64 p_1768->g_60 p_1768->g_67 p_1768->g_775 p_1768->g_208 p_1768->g_72 p_1768->g_779 p_1768->g_525 p_1768->g_526 p_1768->g_330 p_1768->g_347 p_1768->g_163 p_1768->g_128 p_1768->g_95 p_1768->g_795 p_1768->g_295 p_1768->g_528 p_1768->l_comm_values p_1768->g_580 p_1768->g_914 p_1768->g_527 p_1768->g_207 p_1768->g_213 p_1768->g_108 p_1768->g_796 p_1768->g_759 p_1768->g_138 p_1768->g_140 p_1768->g_237 p_1768->g_171 p_1768->g_1089 p_1768->g_1102 p_1768->g_11 p_1768->g_545 p_1768->g_174 p_1768->g_1209 p_1768->g_1253 p_1768->g_75 p_1768->g_639 p_1768->g_175
 * writes: p_1768->g_60 p_1768->g_67 p_1768->g_72 p_1768->g_75 p_1768->g_775 p_1768->g_395 p_1768->g_357 p_1768->g_328 p_1768->g_545 p_1768->g_528 p_1768->g_150 p_1768->g_214 p_1768->g_108 p_1768->g_95 p_1768->g_116 p_1768->g_140 p_1768->g_1230 p_1768->g_11
 */
int32_t  func_12(uint32_t  p_13, uint8_t  p_14, int8_t  p_15, struct S2 * p_1768)
{ /* block id: 645 */
    uint8_t l_1360 = 0xA9L;
    int32_t *l_1361 = (void*)0;
    int32_t l_1362 = 0x3241CDB9L;
    int32_t *l_1363 = &p_1768->g_60;
    int32_t *l_1364 = &p_1768->g_528[2];
    int32_t *l_1365[5][9][5] = {{{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]}},{{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]}},{{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]}},{{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]}},{{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]},{&p_1768->g_528[2],&p_1768->g_60,&p_1768->g_528[1],(void*)0,&p_1768->g_67[0][0][0]}}};
    int32_t l_1366 = 0x786B23BCL;
    uint32_t l_1367 = 0x57533FAFL;
    int i, j, k;
    (*p_1768->g_175) = func_51(func_55(l_1360, p_1768), l_1361, p_1768->g_639.x, p_1768);
    ++l_1367;
    return p_1768->g_347.s5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1768->g_395 p_1768->g_175 p_1768->g_526 p_1768->g_330 p_1768->g_67 p_1768->g_95 p_1768->g_60 p_1768->g_283 p_1768->g_1230 p_1768->g_207 p_1768->g_116 p_1768->g_1304 p_1768->g_525 p_1768->g_328 p_1768->g_11 p_1768->g_1104 p_1768->g_138 p_1768->g_108 p_1768->g_295 p_1768->g_357 p_1768->g_580.f0 p_1768->g_754 p_1768->g_1337 p_1768->g_528 p_1768->g_1089 p_1768->g_1254
 * writes: p_1768->g_395 p_1768->g_95 p_1768->g_116 p_1768->g_733 p_1768->g_67 p_1768->g_108 p_1768->g_295 p_1768->g_60 p_1768->g_11
 */
int16_t  func_16(int8_t * p_17, uint8_t  p_18, int16_t  p_19, int8_t * p_20, int16_t  p_21, struct S2 * p_1768)
{ /* block id: 609 */
    int32_t ***l_1274 = &p_1768->g_175;
    union U0 l_1275 = {0x124C575FL};
    VECTOR(uint16_t, 16) l_1292 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL), 65535UL, 65535UL, 65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL, 65535UL, 65535UL, 65535UL);
    int64_t ***l_1300[5] = {&p_1768->g_1264[2],&p_1768->g_1264[2],&p_1768->g_1264[2],&p_1768->g_1264[2],&p_1768->g_1264[2]};
    VECTOR(int32_t, 4) l_1311 = (VECTOR(int32_t, 4))(0x5766F6CAL, (VECTOR(int32_t, 2))(0x5766F6CAL, (-1L)), (-1L));
    union U0 l_1334 = {0xDB3F0A4DL};
    VECTOR(int8_t, 4) l_1345 = (VECTOR(int8_t, 4))(0x49L, (VECTOR(int8_t, 2))(0x49L, (-1L)), (-1L));
    int i;
    for (p_1768->g_395 = (-23); (p_1768->g_395 != 27); p_1768->g_395++)
    { /* block id: 612 */
        int32_t *l_1267 = &p_1768->g_67[0][0][3];
        union U0 l_1270 = {0xE1EEBBD3L};
        int64_t l_1271 = (-7L);
        VECTOR(uint8_t, 16) l_1286 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL, 255UL, 255UL, 255UL);
        int32_t l_1346 = (-1L);
        int32_t l_1354 = (-7L);
        uint64_t l_1355[6];
        int i;
        for (i = 0; i < 6; i++)
            l_1355[i] = 0xB75C0736991B19B4L;
        (*p_1768->g_175) = l_1267;
        if ((safe_mod_func_uint8_t_u_u((l_1270 , (l_1271 == (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((safe_sub_func_int16_t_s_s(((l_1274 != (l_1275 , l_1274)) != ((*p_1768->g_526) && (*l_1267))), (***l_1274))) | FAKE_DIVERGE(p_1768->group_1_offset, get_group_id(1), 10)), 0x4BE1L, ((((safe_sub_func_int64_t_s_s((((((safe_sub_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_s((l_1286.s0 |= ((safe_div_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(p_1768->g_283, (***l_1274))) & 0x7B934262L), p_18)) & 6L)), p_21)) , 0L) <= (*l_1267)) < 1UL), (-4L))) , 0x17L) , &p_1768->g_116) != &p_19) == p_1768->g_1230.s4), 0x4840ED948D06CBFAL)) , 0x494F5298L) , 0xE5CEF7171E459437L) , p_1768->g_207[3]), (-7L), p_21, p_18, 0L, 0x6995L)).even)))).z & 0x09F2L))), 0xB6L)))
        { /* block id: 615 */
            VECTOR(int16_t, 16) l_1291 = (VECTOR(int16_t, 16))(0x493EL, (VECTOR(int16_t, 4))(0x493EL, (VECTOR(int16_t, 2))(0x493EL, (-1L)), (-1L)), (-1L), 0x493EL, (-1L), (VECTOR(int16_t, 2))(0x493EL, (-1L)), (VECTOR(int16_t, 2))(0x493EL, (-1L)), 0x493EL, (-1L), 0x493EL, (-1L));
            VECTOR(uint16_t, 2) l_1293 = (VECTOR(uint16_t, 2))(6UL, 65535UL);
            int64_t ***l_1299[10] = {&p_1768->g_213,&p_1768->g_1264[3],&p_1768->g_213,&p_1768->g_213,&p_1768->g_1264[3],&p_1768->g_213,&p_1768->g_213,&p_1768->g_1264[3],&p_1768->g_213,&p_1768->g_213};
            uint32_t *l_1303 = &p_1768->g_295;
            uint32_t **l_1302[5];
            uint32_t ***l_1301 = &l_1302[3];
            uint32_t ***l_1307 = &p_1768->g_1305;
            VECTOR(int32_t, 16) l_1312 = (VECTOR(int32_t, 16))(0x4A42D60BL, (VECTOR(int32_t, 4))(0x4A42D60BL, (VECTOR(int32_t, 2))(0x4A42D60BL, 0x6B29E3C7L), 0x6B29E3C7L), 0x6B29E3C7L, 0x4A42D60BL, 0x6B29E3C7L, (VECTOR(int32_t, 2))(0x4A42D60BL, 0x6B29E3C7L), (VECTOR(int32_t, 2))(0x4A42D60BL, 0x6B29E3C7L), 0x4A42D60BL, 0x6B29E3C7L, 0x4A42D60BL, 0x6B29E3C7L);
            int i;
            for (i = 0; i < 5; i++)
                l_1302[i] = &l_1303;
            for (p_1768->g_116 = 0; (p_1768->g_116 <= (-8)); p_1768->g_116--)
            { /* block id: 618 */
                VECTOR(int16_t, 2) l_1298 = (VECTOR(int16_t, 2))(0x4F2CL, 0x2D89L);
                uint64_t *l_1308 = (void*)0;
                uint64_t *l_1309[5][9] = {{&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283},{&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283},{&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283},{&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283},{&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283,&p_1768->g_283}};
                int32_t l_1310[6][2][1] = {{{(-4L)},{(-4L)}},{{(-4L)},{(-4L)}},{{(-4L)},{(-4L)}},{{(-4L)},{(-4L)}},{{(-4L)},{(-4L)}},{{(-4L)},{(-4L)}}};
                VECTOR(uint16_t, 2) l_1317 = (VECTOR(uint16_t, 2))(0UL, 0UL);
                int32_t l_1318 = 0x381BD4CAL;
                union U0 l_1331 = {0x90D42892L};
                uint32_t l_1340 = 0xFF58AB1BL;
                int i, j, k;
                (*l_1267) = (((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(l_1291.s156287a361a56663)).s2, (p_1768->g_733.s0 = ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 16))(l_1292.s0ea6e16dcc8746f2)).even, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_1293.xyxxyxxx)).odd)).wyzyxwzw))).s21)), ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 2))(0x6C0BL, 65535UL)).xyxyxxxy, (uint16_t)((~(***l_1274)) > (+(safe_div_func_uint8_t_u_u((*l_1267), (safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_1298.yx)), (p_21 , (l_1299[1] != l_1300[4])), (-1L), (l_1301 == (l_1270 , (l_1307 = p_1768->g_1304))), 9L, 0x7918L, 0x6C07L)).s0, 11)))))), (uint16_t)((((**p_1768->g_525) > p_1768->g_328) | 18446744073709551614UL) == p_19)))), 0x612CL, 0x0455L, 0xFFBDL, 65533UL, 1UL, 0xE044L)))).s8be6)), ((VECTOR(uint16_t, 4))(5UL))))).x))) , l_1308) == l_1309[2][7]);
                (**p_1768->g_175) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((*p_20) < (l_1310[0][1][0] = (0x46L >= p_1768->g_1104))), 0x698AF298L, 3L, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))((-1L), (-1L))), ((VECTOR(int32_t, 4))(l_1311.xzwz)).even)))))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(l_1312.s0052)), (int32_t)(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))((*l_1267), (-1L), (safe_mod_func_uint8_t_u_u((+(safe_rshift_func_uint16_t_u_u((((+(***l_1274)) && ((p_21 | p_19) | (l_1318 = (((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 2))(0x2929L, 0xA674L)).xyxyxyxx, ((VECTOR(uint16_t, 4))(l_1317.yxxy)).zxxwwxwz))).even))).xyxzxxzwyxxyyxyy, (uint16_t)(l_1310[0][1][0] = (l_1298.x > (((*l_1303) |= ((((*p_1768->g_138) = (*p_1768->g_138)) || p_1768->g_1104) != p_19)) & (*l_1267))))))), ((VECTOR(uint16_t, 16))(0x9386L))))).s1 ^ p_19)))) , p_18), p_1768->g_357))), l_1293.y)), l_1317.y, ((VECTOR(int8_t, 4))(0x22L)), p_1768->g_328, ((VECTOR(int8_t, 2))(0L)), 0L, (*l_1267), ((VECTOR(int8_t, 2))(0x46L)), 0L)), ((VECTOR(uint8_t, 16))(255UL))))).sd & p_19), (int32_t)0x0B5C7DE0L))).xwwzwzxw)), ((VECTOR(int32_t, 2))((-8L))), ((VECTOR(int32_t, 2))((-1L))), (-10L), (-10L), 3L, 2L)).s1c))), 0x1FCC9BC7L, 0x03323D88L, ((VECTOR(int32_t, 2))(6L)), 0x4A976FB5L, 0x02380B69L)), 1L, 0x10E52D7BL, 0x2CF71E3AL)).hi, ((VECTOR(int32_t, 8))(0x23639BE3L)), ((VECTOR(int32_t, 8))((-1L)))))).s00, ((VECTOR(int32_t, 2))((-1L)))))).xxxxyyyx, ((VECTOR(int32_t, 8))(9L))))).lo, ((VECTOR(int32_t, 4))(3L)), ((VECTOR(int32_t, 4))(3L))))).hi)).xyyy)).hi)), 1L, (-7L))).w;
                (**p_1768->g_1089) = (safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((((((-1L) > (((safe_rshift_func_int16_t_s_u((***l_1274), 9)) < ((((safe_lshift_func_uint16_t_u_s((p_1768->g_580.f0 < (p_19 > (((*p_17) &= (*l_1267)) != ((((safe_sub_func_int32_t_s_s((l_1312.sf = (!(safe_mod_func_int8_t_s_s((l_1331 , (safe_mul_func_int8_t_s_s(0x2EL, ((l_1334 , (safe_div_func_uint32_t_u_u((3L != l_1291.s1), FAKE_DIVERGE(p_1768->local_2_offset, get_local_id(2), 10)))) | p_19)))), p_1768->g_754.x)))), 0x1580D342L)) ^ (*l_1267)) <= 0x46AAL) , (*l_1267))))), 4)) < (*l_1267)) , (void*)0) != p_1768->g_1337)) ^ 18446744073709551614UL)) <= p_1768->g_528[0]) >= p_19) , (void*)0) != (void*)0), (*p_1768->g_138))), l_1340));
                l_1346 |= (safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((0UL != (*l_1267)), ((*p_20) = ((VECTOR(int8_t, 2))(l_1345.yz)).hi))), ((**p_1768->g_1254) &= p_21)));
            }
            return p_21;
        }
        else
        { /* block id: 636 */
            int32_t *l_1347 = &p_1768->g_528[0];
            int32_t *l_1348 = &p_1768->g_67[0][0][3];
            int32_t *l_1349 = &p_1768->g_528[2];
            int32_t l_1350 = 0x3BB9DD27L;
            int32_t *l_1351 = (void*)0;
            int32_t *l_1352 = (void*)0;
            int32_t *l_1353[5];
            int i;
            for (i = 0; i < 5; i++)
                l_1353[i] = &p_1768->g_528[2];
            if (p_19)
                break;
            l_1355[4]++;
            if (p_21)
                break;
        }
        (***l_1274) &= 0x390ADB3CL;
    }
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_1768->g_comm_values p_1768->g_60 p_1768->g_67 p_1768->g_64 p_1768->g_733 p_1768->g_75 p_1768->g_237 p_1768->g_171 p_1768->g_750 p_1768->g_754 p_1768->g_759 p_1768->g_138 p_1768->g_108 p_1768->g_66 p_1768->g_207 p_1768->g_775 p_1768->g_208 p_1768->g_72 p_1768->g_779 p_1768->g_395 p_1768->g_525 p_1768->g_526 p_1768->g_330 p_1768->g_347 p_1768->g_163 p_1768->g_128 p_1768->l_comm_values p_1768->g_580 p_1768->g_914 p_1768->g_95 p_1768->g_992 p_1768->g_1010 p_1768->g_995 p_1768->g_795 p_1768->g_295 p_1768->g_528 p_1768->g_1018 p_1768->g_1028 p_1768->g_527 p_1768->g_150 p_1768->g_213 p_1768->g_796 p_1768->g_140 p_1768->g_1089 p_1768->g_328 p_1768->g_112 p_1768->g_1102 p_1768->g_11 p_1768->g_545 p_1768->g_174 p_1768->g_1209 p_1768->g_1230 p_1768->g_1253 p_1768->g_1255
 * writes: p_1768->g_60 p_1768->g_67 p_1768->g_72 p_1768->g_75 p_1768->g_207 p_1768->g_775 p_1768->g_395 p_1768->g_357 p_1768->g_328 p_1768->g_995 p_1768->g_108 p_1768->g_545 p_1768->g_528 p_1768->g_150 p_1768->g_214 p_1768->g_95 p_1768->g_116 p_1768->g_140 p_1768->g_213 p_1768->g_175 p_1768->g_1230 p_1768->g_11
 */
int8_t * func_22(union U0  p_23, struct S2 * p_1768)
{ /* block id: 6 */
    int32_t *l_1260 = &p_1768->g_528[2];
    int8_t *l_1261 = &p_1768->g_11[5];
    if ((atomic_inc(&p_1768->l_atomic_input[0]) == 7))
    { /* block id: 8 */
        uint16_t l_25 = 2UL;
        VECTOR(int32_t, 4) l_26 = (VECTOR(int32_t, 4))(0x720725FCL, (VECTOR(int32_t, 2))(0x720725FCL, 0L), 0L);
        int64_t l_27 = 0x7EA82BC906383254L;
        uint64_t l_28 = 1UL;
        VECTOR(uint16_t, 2) l_29 = (VECTOR(uint16_t, 2))(0xA329L, 0xC837L);
        VECTOR(uint64_t, 4) l_30 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x312A7FAD540778D4L), 0x312A7FAD540778D4L);
        VECTOR(int32_t, 8) l_31 = (VECTOR(int32_t, 8))(0x06516035L, (VECTOR(int32_t, 4))(0x06516035L, (VECTOR(int32_t, 2))(0x06516035L, (-1L)), (-1L)), (-1L), 0x06516035L, (-1L));
        VECTOR(int32_t, 4) l_32 = (VECTOR(int32_t, 4))(0x07874D2DL, (VECTOR(int32_t, 2))(0x07874D2DL, 8L), 8L);
        VECTOR(int32_t, 16) l_33 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0L), 0L), 0L, 2L, 0L, (VECTOR(int32_t, 2))(2L, 0L), (VECTOR(int32_t, 2))(2L, 0L), 2L, 0L, 2L, 0L);
        uint64_t l_34 = 0xAD70698381653144L;
        uint32_t l_35 = 0x3D709C59L;
        int8_t l_36 = 4L;
        VECTOR(uint64_t, 4) l_37 = (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 0UL), 0UL);
        int64_t l_38 = 0x5EBCD59021B0A093L;
        int16_t l_39[10];
        int32_t l_40[3][10][5] = {{{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)}},{{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)}},{{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)},{1L,2L,(-1L),1L,(-1L)}}};
        int64_t l_41 = 5L;
        int8_t l_42[9][4][7] = {{{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L}},{{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L}},{{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L}},{{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L}},{{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L}},{{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L}},{{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L}},{{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L}},{{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L},{0x63L,0x05L,0L,0L,0x63L,(-5L),0x05L}}};
        int16_t l_43[1];
        int16_t l_44 = 0x4F45L;
        int16_t l_45 = (-10L);
        int16_t l_46 = 0x3806L;
        uint32_t l_47 = 0x6BB719D3L;
        uint32_t l_48 = 1UL;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_39[i] = 1L;
        for (i = 0; i < 1; i++)
            l_43[i] = 0x34C1L;
        l_47 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_25, (-6L), 0x07FD074DL, (-7L), ((VECTOR(int32_t, 4))(l_26.yyyz)))).even, ((VECTOR(int32_t, 16))(0x419C2B2EL, (-1L), ((VECTOR(int32_t, 8))((-3L), (l_44 = ((l_27 , (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x1359A703L, 0x1EFAE07DL)))).even , (l_28 = 0x766593C394A737B7L))) , (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_29.xxyxyxxy)).odd)).wyyxywxz)).s4 , (l_43[0] = (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_30.xzzywzww)).s7702061724634401)).lo)).s1 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x6724D257L, 0x65FF1FC5L)), 0x79046E0AL, 0x481DB3AAL)).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-6L), (-8L))), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(l_31.s64)), ((VECTOR(int32_t, 8))(l_32.zwyxyxzx)).s31))), (int32_t)((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_33.saf)), 0L, (l_35 = l_34), l_36, (((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_37.xx)), 9UL, 18446744073709551613UL)).ywzzzyxy, ((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(0x7762BE9700A5FF0FL, 18446744073709551615UL, 0xFA943C7D870105C6L, 0UL)).zyywyzzx)), ((VECTOR(uint64_t, 16))(0x0A9375314680EDEDL, ((VECTOR(uint64_t, 2))(0x5A4C4AE3B72CD76EL)), 18446744073709551615UL, l_38, l_39[0], 18446744073709551615UL, ((VECTOR(uint64_t, 2))(0xE7D1E91BE676CD85L)), 0x3D52604697E54B53L, 1UL, l_40[2][4][0], ((VECTOR(uint64_t, 2))(1UL)), 0x427816D4D43A62FBL, 0x1089868D59668C86L)).s6, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), l_41, ((VECTOR(uint64_t, 4))(1UL)))).s447e, ((VECTOR(uint64_t, 4))(0x892391BE15C8DD58L))))), ((VECTOR(uint64_t, 4))(0xE83D4860CE0BB6B9L))))).zzyzwzww))).s1 , (-1L)), (-4L), 6L)).s2570744340433253)).sd))).xyyx, ((VECTOR(int32_t, 4))(0x5423D3ABL))))), 0x7F7E758AL, 0x152CE29BL)), (int32_t)l_42[5][3][0]))).s5237610240445203)))).odd, ((VECTOR(int32_t, 8))(6L)), ((VECTOR(int32_t, 8))((-1L)))))).s07))))))), 0L, (-10L))))).yyzyxywx)).s30)), (-8L), 0x79EFC8E8L, ((VECTOR(int32_t, 2))((-7L))), 0x40C85F22L, 0x09797D0EL)).s0))))), l_45, 1L, 0x2558FF78L, l_46, (-8L), 0x76D1638BL)), 0x00995AFDL, ((VECTOR(int32_t, 4))(0x511C70F4L)), 0x7556C5F0L)).s395e))))).y;
        l_48++;
        unsigned int result = 0;
        result += l_25;
        result += l_26.w;
        result += l_26.z;
        result += l_26.y;
        result += l_26.x;
        result += l_27;
        result += l_28;
        result += l_29.y;
        result += l_29.x;
        result += l_30.w;
        result += l_30.z;
        result += l_30.y;
        result += l_30.x;
        result += l_31.s7;
        result += l_31.s6;
        result += l_31.s5;
        result += l_31.s4;
        result += l_31.s3;
        result += l_31.s2;
        result += l_31.s1;
        result += l_31.s0;
        result += l_32.w;
        result += l_32.z;
        result += l_32.y;
        result += l_32.x;
        result += l_33.sf;
        result += l_33.se;
        result += l_33.sd;
        result += l_33.sc;
        result += l_33.sb;
        result += l_33.sa;
        result += l_33.s9;
        result += l_33.s8;
        result += l_33.s7;
        result += l_33.s6;
        result += l_33.s5;
        result += l_33.s4;
        result += l_33.s3;
        result += l_33.s2;
        result += l_33.s1;
        result += l_33.s0;
        result += l_34;
        result += l_35;
        result += l_36;
        result += l_37.w;
        result += l_37.z;
        result += l_37.y;
        result += l_37.x;
        result += l_38;
        int l_39_i0;
        for (l_39_i0 = 0; l_39_i0 < 10; l_39_i0++) {
            result += l_39[l_39_i0];
        }
        int l_40_i0, l_40_i1, l_40_i2;
        for (l_40_i0 = 0; l_40_i0 < 3; l_40_i0++) {
            for (l_40_i1 = 0; l_40_i1 < 10; l_40_i1++) {
                for (l_40_i2 = 0; l_40_i2 < 5; l_40_i2++) {
                    result += l_40[l_40_i0][l_40_i1][l_40_i2];
                }
            }
        }
        result += l_41;
        int l_42_i0, l_42_i1, l_42_i2;
        for (l_42_i0 = 0; l_42_i0 < 9; l_42_i0++) {
            for (l_42_i1 = 0; l_42_i1 < 4; l_42_i1++) {
                for (l_42_i2 = 0; l_42_i2 < 7; l_42_i2++) {
                    result += l_42[l_42_i0][l_42_i1][l_42_i2];
                }
            }
        }
        int l_43_i0;
        for (l_43_i0 = 0; l_43_i0 < 1; l_43_i0++) {
            result += l_43[l_43_i0];
        }
        result += l_44;
        result += l_45;
        result += l_46;
        result += l_47;
        result += l_48;
        atomic_add(&p_1768->l_special_values[0], result);
    }
    else
    { /* block id: 15 */
        (1 + 1);
    }
    l_1260 = func_51(func_55(p_1768->g_comm_values[p_1768->tid], p_1768), p_1768->g_1255, p_1768->g_112[0][6][0], p_1768);
    return l_1261;
}


/* ------------------------------------------ */
/* 
 * reads : p_1768->g_395
 * writes: p_1768->g_395
 */
int32_t * func_51(int8_t * p_52, int32_t * p_53, uint32_t  p_54, struct S2 * p_1768)
{ /* block id: 599 */
    union U0 *l_1258 = &p_1768->g_580;
    for (p_1768->g_395 = 0; (p_1768->g_395 >= 56); p_1768->g_395++)
    { /* block id: 602 */
        union U0 **l_1259 = &l_1258;
        (*l_1259) = l_1258;
    }
    return p_53;
}


/* ------------------------------------------ */
/* 
 * reads : p_1768->g_60 p_1768->g_67 p_1768->g_64 p_1768->g_733 p_1768->g_75 p_1768->g_237 p_1768->g_171 p_1768->g_750 p_1768->g_754 p_1768->g_759 p_1768->g_138 p_1768->g_108 p_1768->g_66 p_1768->g_207 p_1768->g_775 p_1768->g_208 p_1768->g_72 p_1768->g_779 p_1768->g_395 p_1768->g_525 p_1768->g_526 p_1768->g_330 p_1768->g_347 p_1768->g_163 p_1768->g_128 p_1768->l_comm_values p_1768->g_580 p_1768->g_914 p_1768->g_95 p_1768->g_992 p_1768->g_1010 p_1768->g_995 p_1768->g_comm_values p_1768->g_795 p_1768->g_295 p_1768->g_528 p_1768->g_1018 p_1768->g_1028 p_1768->g_527 p_1768->g_150 p_1768->g_213 p_1768->g_796 p_1768->g_140 p_1768->g_1089 p_1768->g_328 p_1768->g_112 p_1768->g_1102 p_1768->g_11 p_1768->g_545 p_1768->g_174 p_1768->g_1209 p_1768->g_1230 p_1768->g_1253
 * writes: p_1768->g_60 p_1768->g_67 p_1768->g_72 p_1768->g_75 p_1768->g_207 p_1768->g_775 p_1768->g_395 p_1768->g_357 p_1768->g_328 p_1768->g_995 p_1768->g_108 p_1768->g_545 p_1768->g_528 p_1768->g_150 p_1768->g_214 p_1768->g_95 p_1768->g_116 p_1768->g_140 p_1768->g_213 p_1768->g_175 p_1768->g_1230 p_1768->g_11
 */
int8_t * func_55(uint16_t  p_56, struct S2 * p_1768)
{ /* block id: 18 */
    int32_t *l_59 = &p_1768->g_60;
    VECTOR(uint64_t, 16) l_1216 = (VECTOR(uint64_t, 16))(0xD3F2FF2BCC5C0ADAL, (VECTOR(uint64_t, 4))(0xD3F2FF2BCC5C0ADAL, (VECTOR(uint64_t, 2))(0xD3F2FF2BCC5C0ADAL, 18446744073709551611UL), 18446744073709551611UL), 18446744073709551611UL, 0xD3F2FF2BCC5C0ADAL, 18446744073709551611UL, (VECTOR(uint64_t, 2))(0xD3F2FF2BCC5C0ADAL, 18446744073709551611UL), (VECTOR(uint64_t, 2))(0xD3F2FF2BCC5C0ADAL, 18446744073709551611UL), 0xD3F2FF2BCC5C0ADAL, 18446744073709551611UL, 0xD3F2FF2BCC5C0ADAL, 18446744073709551611UL);
    int64_t **l_1227[5][5][7] = {{{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]}},{{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]}},{{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]}},{{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]}},{{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]},{&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4],&p_1768->g_214[4]}}};
    int64_t ***l_1228 = &l_1227[1][1][4];
    int64_t ***l_1229 = &p_1768->g_213;
    int64_t l_1237 = 1L;
    uint8_t *l_1238 = (void*)0;
    uint8_t *l_1239 = &p_1768->g_112[0][9][2];
    int16_t *l_1240 = (void*)0;
    int16_t *l_1241 = (void*)0;
    int16_t *l_1242[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_1243 = (-1L);
    uint32_t l_1244 = 1UL;
    int8_t *l_1247 = (void*)0;
    int8_t *l_1248 = &p_1768->g_11[1];
    VECTOR(int8_t, 2) l_1251 = (VECTOR(int8_t, 2))(0x7EL, 0x4AL);
    VECTOR(uint64_t, 8) l_1252 = (VECTOR(uint64_t, 8))(0x83157D82456635B6L, (VECTOR(uint64_t, 4))(0x83157D82456635B6L, (VECTOR(uint64_t, 2))(0x83157D82456635B6L, 0xD4CAFD30DF921736L), 0xD4CAFD30DF921736L), 0xD4CAFD30DF921736L, 0x83157D82456635B6L, 0xD4CAFD30DF921736L);
    int i, j, k;
    (*l_59) = ((func_57(l_59, p_1768) , p_1768->g_1209) , 1L);
    l_1244 &= ((*l_59) = ((safe_div_func_uint32_t_u_u((p_1768->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1768->tid, 9))] , (safe_div_func_uint8_t_u_u((--(*p_1768->g_138)), (((VECTOR(uint64_t, 8))(l_1216.sa4f6d678)).s0 ^ ((((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((p_1768->g_1230.s2 = ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-6L), 0x063FL)), ((VECTOR(int16_t, 2))(0x60A1L, (-5L))), 0x51B8L, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))((0L <= (p_56 && (safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(0x3E2F25A1L, 0x8A282374L)).odd, p_56)))), 1L, ((-9L) > (((*l_1228) = l_1227[1][1][4]) != ((*l_1229) = &p_1768->g_214[4]))), ((VECTOR(int16_t, 8))((-4L), ((VECTOR(int16_t, 2))(p_1768->g_1230.s66)), ((VECTOR(int16_t, 4))((((safe_mul_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(((&l_59 == (p_1768->g_175 = &p_1768->g_95[1][7])) >= (*l_59)), 0x09L)), 9)) , (*p_1768->g_526)) || l_1237), (*l_59))) , l_1238) != l_1239), ((VECTOR(int16_t, 2))(0x3451L)), (-1L))), 0x081DL)), p_56, 0x22A5L, (-1L), (-1L), 0x4F8AL)).s70)).yyyxxxxx, ((VECTOR(int16_t, 8))(2L))))))).s03, ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 2))(3L))))), ((VECTOR(int16_t, 2))(0x437BL))))), 0x761DL, 0x6CBCL, p_56, p_56, ((VECTOR(int16_t, 4))(0x7B49L)), 0x0110L)).sf), p_56)), 2)) , (*l_59)), (*l_59))) ^ 0xB8L) >= (*l_59)) , 0x0D41D7AED0F073D5L))))), 7L)) >= l_1243));
    (*l_59) ^= (*p_1768->g_527);
    l_1243 ^= (safe_mul_func_int8_t_s_s(((*l_1248) = ((*l_59) == (+0xE6L))), (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_1251.xxxyyyxyyxyyxxxx)).s98a3)).z, (((VECTOR(uint64_t, 2))(l_1252.s50)).lo != (((void*)0 == p_1768->g_1253) >= p_1768->g_75))))));
    return &p_1768->g_11[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_1768->g_60 p_1768->g_67 p_1768->g_64 p_1768->g_733 p_1768->g_75 p_1768->g_237 p_1768->g_171 p_1768->g_750 p_1768->g_754 p_1768->g_759 p_1768->g_138 p_1768->g_108 p_1768->g_66 p_1768->g_207 p_1768->g_775 p_1768->g_208 p_1768->g_72 p_1768->g_779 p_1768->g_395 p_1768->g_525 p_1768->g_526 p_1768->g_330 p_1768->g_347 p_1768->g_163 p_1768->g_128 p_1768->l_comm_values p_1768->g_580 p_1768->g_914 p_1768->g_95 p_1768->g_992 p_1768->g_1010 p_1768->g_995 p_1768->g_comm_values p_1768->g_795 p_1768->g_295 p_1768->g_528 p_1768->g_1018 p_1768->g_1028 p_1768->g_527 p_1768->g_150 p_1768->g_213 p_1768->g_796 p_1768->g_140 p_1768->g_1089 p_1768->g_328 p_1768->g_112 p_1768->g_1102 p_1768->g_11 p_1768->g_545 p_1768->g_174
 * writes: p_1768->g_60 p_1768->g_67 p_1768->g_72 p_1768->g_75 p_1768->g_207 p_1768->g_775 p_1768->g_395 p_1768->g_357 p_1768->g_328 p_1768->g_995 p_1768->g_108 p_1768->g_545 p_1768->g_528 p_1768->g_150 p_1768->g_214 p_1768->g_95 p_1768->g_116 p_1768->g_140
 */
union U1  func_57(int32_t * p_58, struct S2 * p_1768)
{ /* block id: 19 */
    uint32_t l_73 = 0xEFFE84F9L;
    int32_t l_76 = 0x28D7FAAEL;
    union U1 *l_730 = &p_1768->g_171;
    VECTOR(int8_t, 4) l_751 = (VECTOR(int8_t, 4))(0x55L, (VECTOR(int8_t, 2))(0x55L, 0x1BL), 0x1BL);
    VECTOR(int8_t, 8) l_752 = (VECTOR(int8_t, 8))(0x36L, (VECTOR(int8_t, 4))(0x36L, (VECTOR(int8_t, 2))(0x36L, 0x19L), 0x19L), 0x19L, 0x36L, 0x19L);
    VECTOR(int8_t, 16) l_753 = (VECTOR(int8_t, 16))(0x05L, (VECTOR(int8_t, 4))(0x05L, (VECTOR(int8_t, 2))(0x05L, 1L), 1L), 1L, 0x05L, 1L, (VECTOR(int8_t, 2))(0x05L, 1L), (VECTOR(int8_t, 2))(0x05L, 1L), 0x05L, 1L, 0x05L, 1L);
    VECTOR(int8_t, 16) l_755 = (VECTOR(int8_t, 16))(0x1AL, (VECTOR(int8_t, 4))(0x1AL, (VECTOR(int8_t, 2))(0x1AL, 0x01L), 0x01L), 0x01L, 0x1AL, 0x01L, (VECTOR(int8_t, 2))(0x1AL, 0x01L), (VECTOR(int8_t, 2))(0x1AL, 0x01L), 0x1AL, 0x01L, 0x1AL, 0x01L);
    VECTOR(int8_t, 16) l_757 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x62L), 0x62L), 0x62L, 0L, 0x62L, (VECTOR(int8_t, 2))(0L, 0x62L), (VECTOR(int8_t, 2))(0L, 0x62L), 0L, 0x62L, 0L, 0x62L);
    VECTOR(int8_t, 4) l_758 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x17L), 0x17L);
    int32_t *l_788 = &p_1768->g_67[0][0][0];
    union U0 *l_812 = &p_1768->g_580;
    uint32_t l_826 = 0x887C86DDL;
    int16_t *l_902 = &p_1768->g_116;
    uint8_t **l_906 = &p_1768->g_138;
    uint8_t ***l_905 = &l_906;
    volatile int32_t *l_917 = (void*)0;
    VECTOR(int32_t, 4) l_991 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1CFDB7BBL), 0x1CFDB7BBL);
    VECTOR(int16_t, 8) l_1002 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x6EDAL), 0x6EDAL), 0x6EDAL, (-1L), 0x6EDAL);
    int64_t *l_1034 = (void*)0;
    VECTOR(int8_t, 4) l_1042 = (VECTOR(int8_t, 4))(0x4DL, (VECTOR(int8_t, 2))(0x4DL, 0x54L), 0x54L);
    uint8_t l_1043[3];
    VECTOR(uint8_t, 16) l_1116 = (VECTOR(uint8_t, 16))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0x95L), 0x95L), 0x95L, 5UL, 0x95L, (VECTOR(uint8_t, 2))(5UL, 0x95L), (VECTOR(uint8_t, 2))(5UL, 0x95L), 5UL, 0x95L, 5UL, 0x95L);
    int32_t l_1145 = 0x153E1030L;
    VECTOR(uint16_t, 8) l_1148 = (VECTOR(uint16_t, 8))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0x110BL), 0x110BL), 0x110BL, 7UL, 0x110BL);
    VECTOR(uint8_t, 16) l_1172 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 254UL), 254UL), 254UL, 0UL, 254UL, (VECTOR(uint8_t, 2))(0UL, 254UL), (VECTOR(uint8_t, 2))(0UL, 254UL), 0UL, 254UL, 0UL, 254UL);
    int32_t l_1199 = 0L;
    int32_t l_1200 = 0x40FA1067L;
    int32_t l_1201[8][6][3] = {{{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L}},{{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L}},{{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L}},{{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L}},{{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L}},{{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L}},{{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L}},{{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L},{0x74707E43L,1L,0x7EB80890L}}};
    int32_t l_1202 = (-9L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1043[i] = 1UL;
    for (p_1768->g_60 = (-17); (p_1768->g_60 > 10); p_1768->g_60++)
    { /* block id: 22 */
        uint8_t l_78 = 255UL;
        int32_t l_84 = (-1L);
        VECTOR(int16_t, 4) l_744 = (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, (-6L)), (-6L));
        int32_t l_783[7] = {0x5A17209CL,0x05941A5AL,0x5A17209CL,0x5A17209CL,0x05941A5AL,0x5A17209CL,0x5A17209CL};
        uint32_t *l_822 = &p_1768->g_395;
        uint64_t *l_827[8];
        int8_t *l_829[10];
        int8_t **l_828 = &l_829[3];
        int i;
        for (i = 0; i < 8; i++)
            l_827[i] = &p_1768->g_283;
        for (i = 0; i < 10; i++)
            l_829[i] = (void*)0;
        for (p_1768->g_67[0][0][2] = 1; (p_1768->g_67[0][0][2] > (-5)); p_1768->g_67[0][0][2] = safe_sub_func_uint32_t_u_u(p_1768->g_67[0][0][2], 9))
        { /* block id: 25 */
            int32_t *l_71 = &p_1768->g_67[0][0][3];
            int32_t **l_70[7];
            uint32_t *l_74[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t l_77 = 4294967290UL;
            int i;
            for (i = 0; i < 7; i++)
                l_70[i] = &l_71;
            p_1768->g_72 = (void*)0;
            l_76 = ((p_1768->g_64 | (~18446744073709551615UL)) || (p_1768->g_75 = l_73));
            l_78 = l_77;
            if (l_76)
                continue;
        }
        for (l_78 = 22; (l_78 <= 60); ++l_78)
        { /* block id: 34 */
            VECTOR(int32_t, 2) l_83 = (VECTOR(int32_t, 2))(0x116CE8D7L, 0x6C899BC1L);
            VECTOR(uint8_t, 16) l_749 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 2UL), 2UL), 2UL, 255UL, 2UL, (VECTOR(uint8_t, 2))(255UL, 2UL), (VECTOR(uint8_t, 2))(255UL, 2UL), 255UL, 2UL, 255UL, 2UL);
            VECTOR(int8_t, 16) l_756 = (VECTOR(int8_t, 16))(0x3EL, (VECTOR(int8_t, 4))(0x3EL, (VECTOR(int8_t, 2))(0x3EL, 1L), 1L), 1L, 0x3EL, 1L, (VECTOR(int8_t, 2))(0x3EL, 1L), (VECTOR(int8_t, 2))(0x3EL, 1L), 0x3EL, 1L, 0x3EL, 1L);
            VECTOR(int32_t, 4) l_762 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x46F73AFBL), 0x46F73AFBL);
            uint16_t *l_765 = &p_1768->g_207[2];
            int32_t *l_766 = (void*)0;
            int32_t *l_767 = &p_1768->g_67[0][0][3];
            union U0 *l_811 = &p_1768->g_580;
            int8_t *l_816 = (void*)0;
            int8_t **l_815 = &l_816;
            int8_t ***l_817 = &l_815;
            uint64_t *l_823 = (void*)0;
            uint64_t *l_824 = &p_1768->g_357;
            uint64_t *l_825 = &p_1768->g_328;
            int i;
            for (l_73 = 24; (l_73 < 3); l_73 = safe_sub_func_int64_t_s_s(l_73, 5))
            { /* block id: 37 */
                int32_t *l_94 = &l_84;
                int32_t **l_93[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                uint8_t *l_102 = (void*)0;
                uint8_t *l_103 = &p_1768->g_104;
                uint8_t *l_107 = &p_1768->g_108;
                int8_t *l_111 = &p_1768->g_11[5];
                union U1 **l_729 = &p_1768->g_174;
                int i;
                if (((VECTOR(int32_t, 2))(l_83.yy)).odd)
                { /* block id: 38 */
                    l_84 = (*p_58);
                }
                else
                { /* block id: 40 */
                    if ((atomic_inc(&p_1768->l_atomic_input[34]) == 5))
                    { /* block id: 42 */
                        int32_t l_85 = 1L;
                        uint16_t l_86 = 1UL;
                        l_86 = l_85;
                        unsigned int result = 0;
                        result += l_85;
                        result += l_86;
                        atomic_add(&p_1768->l_special_values[34], result);
                    }
                    else
                    { /* block id: 44 */
                        (1 + 1);
                    }
                    if ((*p_58))
                        continue;
                }
            }
            (*l_767) |= (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(p_1768->g_733.s5103)).w, (safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_1768->local_2_offset, get_local_id(2), 10), ((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 2))(4UL, 0xA9B4L)).xxxxxxxy, (uint16_t)((*l_765) ^= (GROUP_DIVERGE(0, 1) <= ((safe_mul_func_int8_t_s_s((l_76 && (safe_sub_func_int32_t_s_s((((safe_mul_func_int16_t_s_s(p_1768->g_75, (-3L))) , ((safe_lshift_func_int8_t_s_u(((((VECTOR(int16_t, 8))(l_744.yyywyzyz)).s7 && ((*p_1768->g_237) , ((((safe_mul_func_int8_t_s_s((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x6424AC6CL, 2L)), 0x27E2A1E4L, 0x6F82DA82L)).z > (safe_sub_func_int8_t_s_s(((((l_83.y < ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 4))(l_749.s4ec8)).wyzyxxzx, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1768->g_750.s2527027701625342)))).s42)).yxxyyxyxxxyxxyxx)).s5f)), 0x7AL, 0L)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x39L, 0L)), ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_751.xwxxxyyx)).hi)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(0x4FL, 0x3CL)).yxyx, ((VECTOR(int8_t, 4))(l_83.y, ((VECTOR(int8_t, 2))(l_752.s47)), 7L))))).wwyyxxyw, ((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(l_753.s963e)).zwywzyxzxwwzzzxw, ((VECTOR(int8_t, 2))(p_1768->g_754.yx)).xyyyxyyxxyyxxxyx, ((VECTOR(int8_t, 16))(l_755.sd05e03a012031d92))))).odd))).s12)).xyxy))), 0L, 0L)).even))).xzxzxxwwzzzwwzzx, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(l_756.sfbec16e0b6700ac8)).odd, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_757.se9)), 0L, 0x08L)), ((VECTOR(int8_t, 4))(l_758.yzww))))).lo)).xxxyxyxx))).s3124632571722363)).s2ff4, (int8_t)((~((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x2639L, 65526UL)), ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_1768->g_759.xxyxyyxxyyxyyyxx)).s53)).yyyyxxxx)).odd)), (uint16_t)(safe_mod_func_uint16_t_u_u(((l_76 &= 1UL) | ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(0x1265D46FL, (-1L))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_762.yz)), (-8L), 0x2B93FC64L)).xxxwzyyzyxwzyyzw)))).s8c))), 0x1622DEBDL, 8L)).w), (safe_rshift_func_int16_t_s_u((l_762.x , l_744.w), 4))))))), 0x2FC0L, 1UL)).s1 != l_749.s5) < (*p_1768->g_138))) && l_762.z)))).zzzwzzxxyzzwwwww)).odd)).lo)), l_73, (-1L), 0x46L, 0x20L)).hi, ((VECTOR(int8_t, 4))(0x1CL)), ((VECTOR(int8_t, 4))(0x07L))))).yywzxwzy, (int8_t)l_756.sc))), ((VECTOR(int8_t, 8))(0x25L)), ((VECTOR(int8_t, 8))(0x2AL))))).odd)).even)).yxxy))).yzyxxyywzzzwywzx))).s1203, ((VECTOR(uint8_t, 4))(0xD2L))))).zzxyyyxw))).s1307376025752447)).s0) > 3UL) && GROUP_DIVERGE(0, 1)) , (-1L)), l_756.s9))), l_751.y)) > 3UL) , l_756.se) , p_1768->g_66[0][2]))) || 1UL), 5)) | 0x0BCFD837A2553F01L)) <= (*p_58)), (*p_58)))), 0xA6L)) == l_84)))))).s3))));
            for (l_84 = (-26); (l_84 > 6); l_84 = safe_add_func_uint16_t_u_u(l_84, 1))
            { /* block id: 376 */
                int32_t **l_771 = &l_767;
                int32_t *l_772 = (void*)0;
                int32_t *l_773 = &p_1768->g_67[0][0][2];
                int32_t *l_774[9][7] = {{(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0},{(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0},{(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0},{(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0},{(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0},{(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0},{(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0},{(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0},{(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0,&p_1768->g_67[0][0][2],(void*)0,(void*)0}};
                uint32_t l_785[8][1][1] = {{{0x433E1602L}},{{0x433E1602L}},{{0x433E1602L}},{{0x433E1602L}},{{0x433E1602L}},{{0x433E1602L}},{{0x433E1602L}},{{0x433E1602L}}};
                int64_t *l_810 = (void*)0;
                int i, j, k;
                (*l_771) = p_58;
                ++p_1768->g_775;
                (*p_1768->g_779) = (*p_1768->g_208);
                for (p_1768->g_395 = 0; (p_1768->g_395 < 34); p_1768->g_395++)
                { /* block id: 382 */
                    VECTOR(int8_t, 4) l_794 = (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 2L), 2L);
                    int i;
                    (1 + 1);
                }
            }
            l_76 ^= (safe_rshift_func_int16_t_s_s((((*l_817) = l_815) != ((((safe_mod_func_uint16_t_u_u((((((*l_825) = (safe_rshift_func_int8_t_s_s((((*l_824) = (((void*)0 == l_822) ^ 2UL)) || (-1L)), (*l_788)))) != (((((**p_1768->g_525) , l_826) <= p_1768->g_347.s2) && l_744.x) >= p_1768->g_163.s4)) , (void*)0) == l_827[2]), p_1768->g_128.s1)) < l_783[1]) , 0x792EL) , l_828)), 13));
        }
        if ((*l_788))
            break;
    }
    if ((atomic_inc(&p_1768->l_atomic_input[37]) == 5))
    { /* block id: 405 */
        int32_t l_830 = 0x0C33886EL;
        for (l_830 = (-5); (l_830 < 21); ++l_830)
        { /* block id: 408 */
            VECTOR(int32_t, 8) l_833 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
            int64_t l_834 = 3L;
            VECTOR(int32_t, 8) l_835 = (VECTOR(int32_t, 8))(0x1A54602DL, (VECTOR(int32_t, 4))(0x1A54602DL, (VECTOR(int32_t, 2))(0x1A54602DL, 1L), 1L), 1L, 0x1A54602DL, 1L);
            int16_t l_836 = 1L;
            uint32_t l_899[6][9] = {{0UL,4294967291UL,1UL,0x367A2894L,0xD75063B5L,0x367A2894L,1UL,4294967291UL,0UL},{0UL,4294967291UL,1UL,0x367A2894L,0xD75063B5L,0x367A2894L,1UL,4294967291UL,0UL},{0UL,4294967291UL,1UL,0x367A2894L,0xD75063B5L,0x367A2894L,1UL,4294967291UL,0UL},{0UL,4294967291UL,1UL,0x367A2894L,0xD75063B5L,0x367A2894L,1UL,4294967291UL,0UL},{0UL,4294967291UL,1UL,0x367A2894L,0xD75063B5L,0x367A2894L,1UL,4294967291UL,0UL},{0UL,4294967291UL,1UL,0x367A2894L,0xD75063B5L,0x367A2894L,1UL,4294967291UL,0UL}};
            int i, j;
            l_836 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_833.s3200)).even)), l_834, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_835.s34043520)))).lo)), 0x4BB79F83L)).s6;
            for (l_833.s7 = 0; (l_833.s7 <= 6); l_833.s7 = safe_add_func_uint64_t_u_u(l_833.s7, 7))
            { /* block id: 412 */
                VECTOR(int8_t, 8) l_839 = (VECTOR(int8_t, 8))(0x71L, (VECTOR(int8_t, 4))(0x71L, (VECTOR(int8_t, 2))(0x71L, 0x63L), 0x63L), 0x63L, 0x71L, 0x63L);
                int32_t l_840 = 1L;
                uint16_t l_898 = 7UL;
                int i;
                l_835.s6 = (l_839.s6 , l_840);
                l_835.s3 ^= 0x6C1A98B0L;
                for (l_839.s7 = 0; (l_839.s7 == 0); l_839.s7 = safe_add_func_int8_t_s_s(l_839.s7, 1))
                { /* block id: 417 */
                    VECTOR(int32_t, 2) l_843 = (VECTOR(int32_t, 2))((-1L), 3L);
                    VECTOR(int32_t, 16) l_844 = (VECTOR(int32_t, 16))(0x67CDD088L, (VECTOR(int32_t, 4))(0x67CDD088L, (VECTOR(int32_t, 2))(0x67CDD088L, 1L), 1L), 1L, 0x67CDD088L, 1L, (VECTOR(int32_t, 2))(0x67CDD088L, 1L), (VECTOR(int32_t, 2))(0x67CDD088L, 1L), 0x67CDD088L, 1L, 0x67CDD088L, 1L);
                    VECTOR(int32_t, 2) l_845 = (VECTOR(int32_t, 2))(0x1F11B92EL, 0L);
                    VECTOR(int32_t, 2) l_846 = (VECTOR(int32_t, 2))(0x2D86E949L, 0x688038FCL);
                    VECTOR(int32_t, 4) l_847 = (VECTOR(int32_t, 4))(0x6A497EE3L, (VECTOR(int32_t, 2))(0x6A497EE3L, 0x45037916L), 0x45037916L);
                    VECTOR(int32_t, 4) l_848 = (VECTOR(int32_t, 4))(0x15349EADL, (VECTOR(int32_t, 2))(0x15349EADL, 0x3AD5871DL), 0x3AD5871DL);
                    VECTOR(int32_t, 8) l_849 = (VECTOR(int32_t, 8))(0x60871091L, (VECTOR(int32_t, 4))(0x60871091L, (VECTOR(int32_t, 2))(0x60871091L, 0x65973AD1L), 0x65973AD1L), 0x65973AD1L, 0x60871091L, 0x65973AD1L);
                    union U1 l_850[5] = {{0x8FF78E98L},{0x8FF78E98L},{0x8FF78E98L},{0x8FF78E98L},{0x8FF78E98L}};
                    int32_t l_851 = 8L;
                    VECTOR(int32_t, 8) l_852 = (VECTOR(int32_t, 8))(0x3584CB97L, (VECTOR(int32_t, 4))(0x3584CB97L, (VECTOR(int32_t, 2))(0x3584CB97L, 0L), 0L), 0L, 0x3584CB97L, 0L);
                    VECTOR(uint16_t, 2) l_853 = (VECTOR(uint16_t, 2))(6UL, 0UL);
                    int8_t l_881[8][10] = {{0x06L,0x67L,0x42L,0x35L,0x42L,0x67L,0x06L,0x25L,0L,(-1L)},{0x06L,0x67L,0x42L,0x35L,0x42L,0x67L,0x06L,0x25L,0L,(-1L)},{0x06L,0x67L,0x42L,0x35L,0x42L,0x67L,0x06L,0x25L,0L,(-1L)},{0x06L,0x67L,0x42L,0x35L,0x42L,0x67L,0x06L,0x25L,0L,(-1L)},{0x06L,0x67L,0x42L,0x35L,0x42L,0x67L,0x06L,0x25L,0L,(-1L)},{0x06L,0x67L,0x42L,0x35L,0x42L,0x67L,0x06L,0x25L,0L,(-1L)},{0x06L,0x67L,0x42L,0x35L,0x42L,0x67L,0x06L,0x25L,0L,(-1L)},{0x06L,0x67L,0x42L,0x35L,0x42L,0x67L,0x06L,0x25L,0L,(-1L)}};
                    int i, j;
                    l_840 |= (l_835.s2 = ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(0x5E07BCE3L, 0x1D76F824L)).xxxyyyyy))).s5740452502450063)).s4fc5, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 0x7018DF32L)).yyyyyxyy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_843.xxyyyxxxyxxxxyyy)).s94)).xyxyyxyx)))).odd)).s7021452036733037, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x76F51F39L, 0x14187564L)).yxyyyxxyyyxyxyyx))))))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_844.sc0e2cc0729761ecc)))).sebea)).ywzzwzwzwyyyzwyz))))).s4a3a, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))((-7L), 0x498225DBL)).yyyyxxxy, ((VECTOR(int32_t, 2))(l_845.yy)).xyyyyxxy))), ((VECTOR(int32_t, 8))(l_846.xyyyxxyx)))).s6563))).odd, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x7968DF87L, ((VECTOR(int32_t, 8))(l_847.wwzwywzy)), (-4L), ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(l_848.xzyx)).even))).xxyxyyxxyxyyxxxy, ((VECTOR(int32_t, 4))(l_849.s7175)).wyyxxwzxwyzxxwzz))).s6, (-1L), (-1L), (l_850[4] , l_851), (-6L), (-9L))))).s4f79, ((VECTOR(int32_t, 16))(l_852.s6303030764615135)).s7d79))).lo))).hi);
                    if (l_853.x)
                    { /* block id: 420 */
                        VECTOR(int32_t, 16) l_854 = (VECTOR(int32_t, 16))(0x7509AAD7L, (VECTOR(int32_t, 4))(0x7509AAD7L, (VECTOR(int32_t, 2))(0x7509AAD7L, 1L), 1L), 1L, 0x7509AAD7L, 1L, (VECTOR(int32_t, 2))(0x7509AAD7L, 1L), (VECTOR(int32_t, 2))(0x7509AAD7L, 1L), 0x7509AAD7L, 1L, 0x7509AAD7L, 1L);
                        int i;
                        l_843.y = (l_835.s6 ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_854.sb4ca)))).zzyxyxxzyyzxwwzx)))).sc);
                    }
                    else
                    { /* block id: 423 */
                        uint32_t l_855 = 0xC1B29F37L;
                        int32_t l_856 = 0x2A6A8DDEL;
                        uint8_t l_857[4][6][1] = {{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}};
                        int8_t l_858 = 0x0EL;
                        int16_t l_859[8][10][3] = {{{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L}},{{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L}},{{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L}},{{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L}},{{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L}},{{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L}},{{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L}},{{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L},{0x4CFFL,0x4000L,7L}}};
                        uint16_t l_860 = 0x6F76L;
                        int64_t l_861 = 0x29F16227EDF5A72FL;
                        uint64_t l_864 = 7UL;
                        uint64_t *l_863 = &l_864;
                        uint64_t **l_862 = &l_863;
                        int32_t l_865 = 9L;
                        uint32_t l_866 = 1UL;
                        int8_t l_867 = (-6L);
                        VECTOR(int32_t, 8) l_868 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                        int8_t l_869 = 0L;
                        int32_t l_870 = 0x03D7C074L;
                        int16_t l_871 = 0x373DL;
                        uint64_t l_872[2][1];
                        uint32_t l_873 = 9UL;
                        uint32_t l_874[6][6] = {{9UL,0x12A8E84EL,9UL,9UL,0x12A8E84EL,9UL},{9UL,0x12A8E84EL,9UL,9UL,0x12A8E84EL,9UL},{9UL,0x12A8E84EL,9UL,9UL,0x12A8E84EL,9UL},{9UL,0x12A8E84EL,9UL,9UL,0x12A8E84EL,9UL},{9UL,0x12A8E84EL,9UL,9UL,0x12A8E84EL,9UL},{9UL,0x12A8E84EL,9UL,9UL,0x12A8E84EL,9UL}};
                        uint32_t l_875 = 0UL;
                        int8_t l_876 = 1L;
                        uint64_t l_877 = 18446744073709551609UL;
                        uint8_t l_878 = 255UL;
                        uint32_t l_879 = 1UL;
                        uint64_t l_880 = 1UL;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_872[i][j] = 18446744073709551608UL;
                        }
                        l_852.s2 |= ((l_855 , (l_856 , 1UL)) , ((l_857[2][0][0] , l_858) , l_859[5][6][1]));
                        l_862 = ((l_861 = (l_860 = 0L)) , (void*)0);
                        l_848.z = ((VECTOR(int32_t, 8))(l_865, l_866, 0x41FA82CDL, l_867, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_868.s31667020)), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_869, (((l_870 , (l_871 , l_872[0][0])) , l_873) , l_874[2][1]), l_875, l_876, 0x017B9370L, 0x536DAB86L, l_877, 0x026B8FDEL, l_878, 0x44558B87L, l_879, 0L, 0x5D12FEC9L, (-9L), 1L, (-1L))).sc5)).xyxx, ((VECTOR(int32_t, 4))((-3L)))))).lo, ((VECTOR(int32_t, 2))(0x6F4B6449L)), ((VECTOR(int32_t, 2))(0x24FD029BL))))).xxyxxyyy, ((VECTOR(int32_t, 8))(0x653E5044L))))).s57, ((VECTOR(int32_t, 2))(0x303ED204L))))).lo, l_880, 1L, (-1L))).s1;
                        l_851 = 0x125A19ABL;
                    }
                    if (l_881[7][3])
                    { /* block id: 431 */
                        uint8_t l_882 = 249UL;
                        VECTOR(int32_t, 4) l_883 = (VECTOR(int32_t, 4))(0x3044FCC8L, (VECTOR(int32_t, 2))(0x3044FCC8L, 0x6B5E7EF9L), 0x6B5E7EF9L);
                        union U1 l_885 = {0xAD180769L};/* VOLATILE GLOBAL l_885 */
                        union U1 *l_884 = &l_885;
                        union U1 *l_886 = (void*)0;
                        int i;
                        l_847.z = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(1UL, 0xAE414B00L)))).odd , l_882);
                        l_846.y = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_883.yzzyxyxy)).s12)).lo;
                        l_886 = l_884;
                    }
                    else
                    { /* block id: 435 */
                        uint16_t l_887 = 2UL;
                        int8_t l_888 = 0x44L;
                        union U1 l_889[9] = {{4294967288UL},{0x64BC85B8L},{4294967288UL},{4294967288UL},{0x64BC85B8L},{4294967288UL},{4294967288UL},{0x64BC85B8L},{4294967288UL}};
                        union U0 l_890 = {0x2C4C0BE5L};
                        union U0 l_891 = {4294967295UL};
                        uint8_t l_892[9][10] = {{1UL,4UL,1UL,1UL,4UL,1UL,1UL,4UL,1UL,1UL},{1UL,4UL,1UL,1UL,4UL,1UL,1UL,4UL,1UL,1UL},{1UL,4UL,1UL,1UL,4UL,1UL,1UL,4UL,1UL,1UL},{1UL,4UL,1UL,1UL,4UL,1UL,1UL,4UL,1UL,1UL},{1UL,4UL,1UL,1UL,4UL,1UL,1UL,4UL,1UL,1UL},{1UL,4UL,1UL,1UL,4UL,1UL,1UL,4UL,1UL,1UL},{1UL,4UL,1UL,1UL,4UL,1UL,1UL,4UL,1UL,1UL},{1UL,4UL,1UL,1UL,4UL,1UL,1UL,4UL,1UL,1UL},{1UL,4UL,1UL,1UL,4UL,1UL,1UL,4UL,1UL,1UL}};
                        VECTOR(int8_t, 4) l_893 = (VECTOR(int8_t, 4))(0x24L, (VECTOR(int8_t, 2))(0x24L, (-10L)), (-10L));
                        uint64_t l_894 = 7UL;
                        uint32_t l_895 = 0x0909318AL;
                        int8_t l_896 = (-1L);
                        uint64_t l_897 = 0UL;
                        int i, j;
                        l_851 ^= (l_849.s5 ^= (((l_887 , (l_891 = (l_888 , ((l_889[8] , (-1L)) , l_890)))) , 255UL) , l_892[3][4]));
                        l_844.s4 |= (l_896 = (l_849.s7 = ((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_893.xwywwxxyzyyzwxxw)).sf5)).lo , l_894) , l_895)));
                        l_845.y |= 0x485D361BL;
                        l_840 |= l_897;
                    }
                }
                l_898 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-8L), (-2L))), 1L, 0x5535CDB2L)).x;
            }
            --l_899[4][7];
        }
        unsigned int result = 0;
        result += l_830;
        atomic_add(&p_1768->l_special_values[37], result);
    }
    else
    { /* block id: 450 */
        (1 + 1);
    }
    if (((*p_58) = (*p_58)))
    { /* block id: 454 */
        VECTOR(int32_t, 2) l_909 = (VECTOR(int32_t, 2))(0x712ED9F9L, (-9L));
        int32_t **l_915 = &p_1768->g_95[0][0];
        uint64_t *l_916[1][10] = {{&p_1768->g_328,&p_1768->g_328,&p_1768->g_357,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_357,&p_1768->g_328,&p_1768->g_328}};
        VECTOR(uint16_t, 8) l_988 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xC24FL), 0xC24FL), 0xC24FL, 0UL, 0xC24FL);
        uint16_t *l_994 = &p_1768->g_75;
        uint16_t **l_993[6][9][4] = {{{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994}},{{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994}},{{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994}},{{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994}},{{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994}},{{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994},{&l_994,&l_994,&l_994,&l_994}}};
        union U0 *l_1009 = &p_1768->g_580;
        uint8_t **l_1011 = &p_1768->g_138;
        int32_t *l_1012 = &p_1768->g_528[2];
        int i, j, k;
        atomic_min(&p_1768->g_atomic_reduction[get_linear_group_id()], ((l_902 == (p_1768->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1768->tid, 9))] , (void*)0)) != ((*l_788) = ((safe_mul_func_int8_t_s_s(((*l_788) <= ((void*)0 == l_905)), (!((((VECTOR(uint32_t, 8))(abs(((VECTOR(int32_t, 2))(0x21EDFFE9L, 0x726D9301L)).yyyyyxxy))).s3 | (safe_sub_func_int64_t_s_s((((VECTOR(int32_t, 16))(l_909.yyyxyyxyyxxxxyyy)).sb || FAKE_DIVERGE(p_1768->group_2_offset, get_group_id(2), 10)), ((*l_812) , ((safe_lshift_func_uint16_t_u_s(((((VECTOR(uint8_t, 2))(p_1768->g_914.sa4)).even > ((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((-1L), ((l_915 = &p_1768->g_95[1][7]) != (void*)0), 0x3C680D55803AA0B0L, 0x5AC1236055411853L)).lo)), ((VECTOR(int64_t, 2))(1L)), (**l_915), (**l_915), 0L, 0x75FB076B354D1337L, 0L, (*l_788), ((VECTOR(int64_t, 4))(0x6BC91BBFB5A46DC7L)), (-1L), 0x281B5418435DEDB9L)).sfc)).odd , &p_1768->g_580) != &p_1768->g_580)) & 0x5DL), 9)) != l_909.x))))) , 0x8BL)))) || (**l_915)))));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1768->v_collective += p_1768->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        l_917 = (*p_1768->g_208);
        if ((atomic_inc(&p_1768->g_atomic_input[39 * get_linear_group_id() + 21]) == 1))
        { /* block id: 460 */
            int32_t l_918 = 1L;
            uint8_t l_931 = 0x92L;
            int16_t l_932 = 1L;
            uint16_t l_933 = 0UL;
            VECTOR(int32_t, 16) l_934 = (VECTOR(int32_t, 16))(0x17C6BF74L, (VECTOR(int32_t, 4))(0x17C6BF74L, (VECTOR(int32_t, 2))(0x17C6BF74L, 0x3DA4E083L), 0x3DA4E083L), 0x3DA4E083L, 0x17C6BF74L, 0x3DA4E083L, (VECTOR(int32_t, 2))(0x17C6BF74L, 0x3DA4E083L), (VECTOR(int32_t, 2))(0x17C6BF74L, 0x3DA4E083L), 0x17C6BF74L, 0x3DA4E083L, 0x17C6BF74L, 0x3DA4E083L);
            VECTOR(int32_t, 16) l_935 = (VECTOR(int32_t, 16))(0x0404F5DAL, (VECTOR(int32_t, 4))(0x0404F5DAL, (VECTOR(int32_t, 2))(0x0404F5DAL, 0x0C6C6B6BL), 0x0C6C6B6BL), 0x0C6C6B6BL, 0x0404F5DAL, 0x0C6C6B6BL, (VECTOR(int32_t, 2))(0x0404F5DAL, 0x0C6C6B6BL), (VECTOR(int32_t, 2))(0x0404F5DAL, 0x0C6C6B6BL), 0x0404F5DAL, 0x0C6C6B6BL, 0x0404F5DAL, 0x0C6C6B6BL);
            VECTOR(int32_t, 4) l_936 = (VECTOR(int32_t, 4))(0x6725C9DFL, (VECTOR(int32_t, 2))(0x6725C9DFL, (-4L)), (-4L));
            VECTOR(int32_t, 8) l_937 = (VECTOR(int32_t, 8))(0x1121C842L, (VECTOR(int32_t, 4))(0x1121C842L, (VECTOR(int32_t, 2))(0x1121C842L, 0x11FB9F5CL), 0x11FB9F5CL), 0x11FB9F5CL, 0x1121C842L, 0x11FB9F5CL);
            uint64_t l_938[10] = {18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL,18446744073709551611UL};
            int8_t l_939 = 0x51L;
            int i;
            for (l_918 = 0; (l_918 > (-20)); l_918 = safe_sub_func_uint32_t_u_u(l_918, 3))
            { /* block id: 463 */
                int32_t l_921 = 0x7307F5A2L;
                uint32_t l_927 = 0xAC4228CCL;
                VECTOR(uint32_t, 8) l_928 = (VECTOR(uint32_t, 8))(0x56514931L, (VECTOR(uint32_t, 4))(0x56514931L, (VECTOR(uint32_t, 2))(0x56514931L, 9UL), 9UL), 9UL, 0x56514931L, 9UL);
                int16_t l_929 = (-4L);
                uint16_t l_930 = 0x55CFL;
                int i;
                for (l_921 = 0; (l_921 <= (-2)); l_921 = safe_sub_func_int8_t_s_s(l_921, 9))
                { /* block id: 466 */
                    int16_t l_924 = 0L;
                    int64_t l_925 = 0L;
                    int64_t l_926 = 0x71F7549A2F4EC963L;
                    l_924 ^= 0x69C8D898L;
                    l_926 &= l_925;
                }
                l_930 &= ((l_929 ^= ((l_927 , 0x7D077954L) , ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_928.s3247)))).wyxwyyxy)).s7)) , 0x1D8FC3EEL);
            }
            l_933 = (l_931 , l_932);
            if ((l_939 = (l_938[7] = ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))((-8L), 4L)).xyyy, ((VECTOR(int32_t, 2))(0x0842CC84L, 0L)).yyyy))).zywwxyxzxyxzzyxw)).s42, ((VECTOR(int32_t, 2))(l_934.s88)), ((VECTOR(int32_t, 4))((-3L), ((VECTOR(int32_t, 2))((-5L), 0x4C84E359L)), 5L)).lo))).xxyyxxxyxxyyxxyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_935.s140a)).yyxywwywxywyxxyz)).s03, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x209EF1F2L, 7L)).yyxyxxyxyxyxyxxy)))).s05))).xxyyxyxx)).s47, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(1L, 0x249EF528L)).xxyx, ((VECTOR(int32_t, 16))(l_936.yxwzyzyyxyzxyxxx)).s08db, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_937.s0052257462631177)).even)).s3767642374605253)).s07f2))).odd))), 0x26E751B8L, 0x063E59B4L)).xwyxzwyzxwxyzzwy))).s7)))
            { /* block id: 476 */
                int64_t *l_941 = (void*)0;
                int64_t **l_940 = &l_941;
                int32_t l_942 = (-10L);
                l_940 = (void*)0;
                for (l_942 = 0; (l_942 >= (-17)); l_942--)
                { /* block id: 480 */
                    int32_t l_945 = 0x1C4927B8L;
                    for (l_945 = 0; (l_945 == 21); l_945 = safe_add_func_uint64_t_u_u(l_945, 1))
                    { /* block id: 483 */
                        int32_t l_949 = 7L;
                        int32_t *l_948 = &l_949;
                        int32_t *l_950[1][4] = {{&l_949,&l_949,&l_949,&l_949}};
                        int32_t *l_951 = &l_949;
                        int8_t l_952 = 0x74L;
                        int i, j;
                        l_951 = (l_950[0][1] = l_948);
                        l_918 = l_952;
                    }
                    for (l_945 = 0; (l_945 < (-20)); l_945 = safe_sub_func_int16_t_s_s(l_945, 1))
                    { /* block id: 490 */
                        int32_t l_956 = 0x4C613CB7L;
                        int32_t *l_955 = &l_956;
                        int32_t *l_957 = &l_956;
                        int32_t l_958[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_958[i] = 7L;
                        l_957 = l_955;
                        (*l_957) = l_958[4];
                    }
                }
                for (l_942 = 0; (l_942 < (-17)); --l_942)
                { /* block id: 497 */
                    int32_t l_961 = 0L;
                    for (l_961 = 22; (l_961 == (-6)); --l_961)
                    { /* block id: 500 */
                        l_935.s1 = (-4L);
                    }
                }
            }
            else
            { /* block id: 504 */
                int32_t l_964[8][8] = {{(-1L),0L,0x37B79736L,(-8L),0x4FE3D6B5L,0x4FE3D6B5L,(-8L),0x37B79736L},{(-1L),0L,0x37B79736L,(-8L),0x4FE3D6B5L,0x4FE3D6B5L,(-8L),0x37B79736L},{(-1L),0L,0x37B79736L,(-8L),0x4FE3D6B5L,0x4FE3D6B5L,(-8L),0x37B79736L},{(-1L),0L,0x37B79736L,(-8L),0x4FE3D6B5L,0x4FE3D6B5L,(-8L),0x37B79736L},{(-1L),0L,0x37B79736L,(-8L),0x4FE3D6B5L,0x4FE3D6B5L,(-8L),0x37B79736L},{(-1L),0L,0x37B79736L,(-8L),0x4FE3D6B5L,0x4FE3D6B5L,(-8L),0x37B79736L},{(-1L),0L,0x37B79736L,(-8L),0x4FE3D6B5L,0x4FE3D6B5L,(-8L),0x37B79736L},{(-1L),0L,0x37B79736L,(-8L),0x4FE3D6B5L,0x4FE3D6B5L,(-8L),0x37B79736L}};
                uint8_t l_973[6] = {0x26L,247UL,0x26L,0x26L,247UL,0x26L};
                VECTOR(int32_t, 2) l_974 = (VECTOR(int32_t, 2))(5L, (-1L));
                uint32_t l_975 = 0xF755E5A0L;
                int8_t l_976[5][9] = {{2L,2L,2L,2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L,2L,2L,2L,2L}};
                int32_t l_977 = 9L;
                uint64_t l_978 = 0xE6238F820D8DB6AFL;
                int i, j;
                for (l_964[5][3] = 0; (l_964[5][3] <= (-10)); --l_964[5][3])
                { /* block id: 507 */
                    uint64_t l_967 = 5UL;
                    if (l_967)
                    { /* block id: 508 */
                        int32_t *l_968 = (void*)0;
                        int32_t l_970 = 7L;
                        int32_t *l_969 = &l_970;
                        l_969 = l_968;
                    }
                    else
                    { /* block id: 510 */
                        int64_t l_971 = 0x4F22C3FD12787A66L;
                        int8_t l_972 = (-1L);
                        l_972 = l_971;
                    }
                }
                l_937.s3 |= ((l_964[5][4] ^= (((l_975 ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(0x26A1C854L, (l_973[1] |= (-9L)), 0x43F50D69L, 0x5D7E4BC8L)).odd, ((VECTOR(int32_t, 4))(0x680AE884L, (-1L), 0L, 7L)).even, ((VECTOR(int32_t, 2))(l_974.xx))))), 2L, 0x30E99F7DL)).x) , l_976[4][6]) , l_977)) , l_978);
            }
            for (l_938[5] = 0; (l_938[5] < 31); ++l_938[5])
            { /* block id: 521 */
                VECTOR(int32_t, 8) l_981 = (VECTOR(int32_t, 8))(0x0E063E72L, (VECTOR(int32_t, 4))(0x0E063E72L, (VECTOR(int32_t, 2))(0x0E063E72L, 0x65910003L), 0x65910003L), 0x65910003L, 0x0E063E72L, 0x65910003L);
                int i;
                l_936.x &= l_981.s6;
            }
            unsigned int result = 0;
            result += l_918;
            result += l_931;
            result += l_932;
            result += l_933;
            result += l_934.sf;
            result += l_934.se;
            result += l_934.sd;
            result += l_934.sc;
            result += l_934.sb;
            result += l_934.sa;
            result += l_934.s9;
            result += l_934.s8;
            result += l_934.s7;
            result += l_934.s6;
            result += l_934.s5;
            result += l_934.s4;
            result += l_934.s3;
            result += l_934.s2;
            result += l_934.s1;
            result += l_934.s0;
            result += l_935.sf;
            result += l_935.se;
            result += l_935.sd;
            result += l_935.sc;
            result += l_935.sb;
            result += l_935.sa;
            result += l_935.s9;
            result += l_935.s8;
            result += l_935.s7;
            result += l_935.s6;
            result += l_935.s5;
            result += l_935.s4;
            result += l_935.s3;
            result += l_935.s2;
            result += l_935.s1;
            result += l_935.s0;
            result += l_936.w;
            result += l_936.z;
            result += l_936.y;
            result += l_936.x;
            result += l_937.s7;
            result += l_937.s6;
            result += l_937.s5;
            result += l_937.s4;
            result += l_937.s3;
            result += l_937.s2;
            result += l_937.s1;
            result += l_937.s0;
            int l_938_i0;
            for (l_938_i0 = 0; l_938_i0 < 10; l_938_i0++) {
                result += l_938[l_938_i0];
            }
            result += l_939;
            atomic_add(&p_1768->g_special_values[39 * get_linear_group_id() + 21], result);
        }
        else
        { /* block id: 524 */
            (1 + 1);
        }
        (*l_1012) |= (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((**l_915) , (((safe_div_func_int64_t_s_s((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_988.s65)), 0xA0A4L, 65535UL)).yxzywzxw)))).s2 != ((p_1768->g_545 = ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(((**l_915) = (safe_mod_func_int32_t_s_s(((((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 8))(l_991.xzzyzxyy)).hi, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 16))(0x606D8319L, 4294967287UL, 0x48465C09L, 4294967295UL, ((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 4))(p_1768->g_992.zyyz)).xzxzwxyz))).hi, ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((*l_994) = ((p_1768->g_995 = &p_1768->g_75) == l_902)), 0xBB2EL, 0x897BL, 1UL)).hi)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(0x0D47L, (safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_1768->group_1_offset, get_group_id(1), 10), (((*l_812) , (safe_mul_func_uint8_t_u_u((((VECTOR(uint16_t, 2))(0x0E4CL, 0UL)).lo < (safe_mod_func_uint8_t_u_u((((**l_915) || 0x41L) == (((VECTOR(int16_t, 16))(l_1002.s0077012160254045)).sf <= (((safe_sub_func_int64_t_s_s((safe_mod_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(((***l_905) = ((void*)0 != l_1009)), (**l_915))), p_1768->g_1010)), (*l_788))) >= (*l_788)) <= (**l_915)))), (*l_788)))), (*l_788)))) , (**l_915)))), ((VECTOR(uint16_t, 2))(65529UL)), 0x3930L, 1UL, (*p_1768->g_995), 2UL, ((VECTOR(uint16_t, 2))(0x9EA6L)), 0x733EL, ((VECTOR(uint16_t, 4))(1UL)), 65535UL)).sc2))))).xxxx, ((VECTOR(uint16_t, 4))(0x6D97L)))))))).odd, ((VECTOR(uint32_t, 2))(0UL))))).odd, p_1768->g_comm_values[p_1768->tid], ((VECTOR(uint32_t, 8))(0xB4F71A6CL)), 1UL, 4294967295UL)).s2a))))))).yyxy))).z , (void*)0) == l_1011), (-3L)))), ((VECTOR(int8_t, 2))(0L)), 4L)).wyzywyxwwxwwzzwz, ((VECTOR(int8_t, 16))(0x63L)), ((VECTOR(int8_t, 16))(0x2FL))))).lo)))).s5134405176520600)).s0) | 1L)), l_988.s0)) | l_757.s6) <= p_1768->g_795.y)), p_1768->g_295)), 1UL));
    }
    else
    { /* block id: 533 */
        VECTOR(int32_t, 2) l_1013 = (VECTOR(int32_t, 2))(0x7876F22BL, (-1L));
        VECTOR(int32_t, 2) l_1023 = (VECTOR(int32_t, 2))(5L, (-8L));
        int64_t *l_1074 = (void*)0;
        int32_t l_1203 = 0x0A77CAEFL;
        int i;
        if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1013.xyxx)).wwzyzzzwxxzxywxx)).sc)
        { /* block id: 534 */
            VECTOR(int32_t, 16) l_1029 = (VECTOR(int32_t, 16))(0x6BF7B977L, (VECTOR(int32_t, 4))(0x6BF7B977L, (VECTOR(int32_t, 2))(0x6BF7B977L, 0x092F9594L), 0x092F9594L), 0x092F9594L, 0x6BF7B977L, 0x092F9594L, (VECTOR(int32_t, 2))(0x6BF7B977L, 0x092F9594L), (VECTOR(int32_t, 2))(0x6BF7B977L, 0x092F9594L), 0x6BF7B977L, 0x092F9594L, 0x6BF7B977L, 0x092F9594L);
            VECTOR(uint8_t, 4) l_1066 = (VECTOR(uint8_t, 4))(0x17L, (VECTOR(uint8_t, 2))(0x17L, 0UL), 0UL);
            VECTOR(uint8_t, 8) l_1067 = (VECTOR(uint8_t, 8))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 253UL), 253UL), 253UL, 248UL, 253UL);
            VECTOR(int8_t, 2) l_1096 = (VECTOR(int8_t, 2))(0x24L, (-9L));
            uint32_t ***l_1136 = (void*)0;
            VECTOR(uint64_t, 16) l_1159 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x9CC2B57D8DD95539L), 0x9CC2B57D8DD95539L), 0x9CC2B57D8DD95539L, 18446744073709551615UL, 0x9CC2B57D8DD95539L, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x9CC2B57D8DD95539L), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x9CC2B57D8DD95539L), 18446744073709551615UL, 0x9CC2B57D8DD95539L, 18446744073709551615UL, 0x9CC2B57D8DD95539L);
            VECTOR(uint8_t, 2) l_1171 = (VECTOR(uint8_t, 2))(0UL, 0x1CL);
            int i;
            (*l_788) &= ((VECTOR(int32_t, 16))(((safe_mod_func_int64_t_s_s((((VECTOR(int16_t, 2))(p_1768->g_1018.zz)).hi ^ ((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_1023.xxyyyyyx)).s7276102602254314, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(((*p_58) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(p_1768->g_1028.s0745)).hi, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_1029.sfb)).yxxyxxxxxxyyyxxy)).even, ((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((8L > p_1768->g_128.sc) == (safe_mul_func_uint8_t_u_u(((*p_58) != (*p_58)), (safe_mul_func_int8_t_s_s(l_1029.sb, GROUP_DIVERGE(0, 1)))))), 1L, 1L, 0x4378B278L, 0x798F9C3FL, l_1013.y, (l_1034 == ((+(safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_mod_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((((VECTOR(int8_t, 2))(l_1042.zw)).lo >= (0x70607616L >= 0UL)), 0x55A4A53720A743DDL)), l_1023.y)))), l_1043[0]))) , (void*)0)), 1L, 0x69A1CFC8L, ((VECTOR(int32_t, 4))(0x54158E81L)), ((VECTOR(int32_t, 2))(0x6453F18FL)), 0x37ECC0C2L)).s5f, ((VECTOR(int32_t, 2))(1L))))), (-6L), (-8L), (*p_58), 0x138675ADL, 0x6AA25DDCL))))).s73))), (-1L), 1L)).xxxyyxzywywyxwzz, ((VECTOR(int32_t, 16))(1L))))), ((VECTOR(int32_t, 16))(7L))))), ((VECTOR(int32_t, 16))((-1L)))))).s38, ((VECTOR(int32_t, 2))(1L))))), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 4))(9L)), ((VECTOR(int32_t, 4))(0x7328DC03L)), ((VECTOR(int32_t, 4))(0x6CB7A0C9L)))), ((VECTOR(int32_t, 16))(0x4E7D1720L))))).s43)), (-5L), 0x5B7B738CL)).y), l_1029.s3)) && 1L), l_1029.s7)), ((VECTOR(int32_t, 8))(0x5CA77198L)), (-1L), 0x2C628B28L, ((VECTOR(int32_t, 4))(8L)), 0L)).odd))).s0404105672135011))).s8, l_1029.s5)), l_1013.x)) == l_1029.sf)), FAKE_DIVERGE(p_1768->group_2_offset, get_group_id(2), 10))) , (*p_58)), 1L, l_1029.s7, ((VECTOR(int32_t, 2))((-1L))), 2L, 0x601F4D7FL, 0x7CE5DDC5L, (-8L), ((VECTOR(int32_t, 2))(0x031C5351L)), (*p_1768->g_527), 0x167EED08L, (-1L), 0x4280A6F6L, 1L)).s9;
            for (p_1768->g_150 = 0; (p_1768->g_150 >= (-23)); p_1768->g_150--)
            { /* block id: 539 */
                uint8_t l_1046 = 7UL;
                int32_t l_1138[5];
                uint8_t **l_1160 = &p_1768->g_138;
                int i;
                for (i = 0; i < 5; i++)
                    l_1138[i] = 0x107B9E5AL;
                if (l_1046)
                { /* block id: 540 */
                    int16_t l_1079 = 0x7F02L;
                    if ((*p_1768->g_527))
                    { /* block id: 541 */
                        uint16_t *l_1075 = &p_1768->g_75;
                        uint32_t *l_1078 = &l_73;
                        int32_t l_1080 = 0x48B29B4EL;
                        (*p_58) |= (safe_sub_func_uint8_t_u_u((((*l_788) & ((safe_sub_func_uint8_t_u_u(((**l_906) = (!(safe_mul_func_uint8_t_u_u((safe_div_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((((p_1768->g_207[3] == (safe_unary_minus_func_uint32_t_u(((safe_add_func_uint16_t_u_u(l_1046, (((((((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_1023.x, 15)), ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 8))(l_1066.zwyxywwy)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_1067.s30)).xxyx)).wxzzyzwx))).s2)), (((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((*l_1075) = (((*p_1768->g_213) = l_1034) != l_1074)), (((((safe_rshift_func_uint8_t_u_s((0x3245A66AL > ((*l_1078) = p_1768->g_108)), p_1768->g_796.x)) , 0x23365F53D54665B2L) , l_1079) <= p_1768->g_759.x) >= l_1046))), 10)), l_1023.x)) >= 0x7E7F3787L) && l_1046))) < FAKE_DIVERGE(p_1768->group_0_offset, get_group_id(0), 10)) < GROUP_DIVERGE(2, 1)) & GROUP_DIVERGE(0, 1)) < l_1066.w) <= 0x66040137952A150AL) >= GROUP_DIVERGE(1, 1)))) , l_1067.s3)))) , l_1080) || 1UL), l_1080)) >= (*p_1768->g_138)), p_1768->g_140)), (*p_1768->g_138))))), l_1080)) == 0UL)) | l_1080), 0xACL));
                        return (*p_1768->g_237);
                    }
                    else
                    { /* block id: 548 */
                        uint32_t *l_1082 = &p_1768->g_395;
                        uint32_t **l_1081 = &l_1082;
                        uint32_t ***l_1084 = &l_1081;
                        (*l_1084) = l_1081;
                        (*p_1768->g_1089) = p_58;
                    }
                }
                else
                { /* block id: 552 */
                    uint16_t l_1109 = 65535UL;
                    uint16_t *l_1127 = &p_1768->g_75;
                    int64_t *l_1137 = (void*)0;
                    int32_t l_1146 = 0x6FF1BE8BL;
                    int32_t l_1147 = 0x365E2AE4L;
                    int32_t *l_1189 = &l_1138[1];
                    int32_t *l_1190 = &l_1138[1];
                    int32_t *l_1191 = &l_1146;
                    int32_t *l_1192 = &p_1768->g_67[0][0][2];
                    int32_t *l_1193 = &l_1138[1];
                    int32_t *l_1194 = &l_76;
                    int32_t *l_1195 = (void*)0;
                    int32_t *l_1196 = (void*)0;
                    int32_t *l_1197 = (void*)0;
                    int32_t *l_1198[7][2] = {{&p_1768->g_67[0][0][3],&l_1147},{&p_1768->g_67[0][0][3],&l_1147},{&p_1768->g_67[0][0][3],&l_1147},{&p_1768->g_67[0][0][3],&l_1147},{&p_1768->g_67[0][0][3],&l_1147},{&p_1768->g_67[0][0][3],&l_1147},{&p_1768->g_67[0][0][3],&l_1147}};
                    uint32_t l_1204 = 0xD9DF2E94L;
                    int i, j;
                    for (p_1768->g_328 = 0; (p_1768->g_328 != 22); p_1768->g_328 = safe_add_func_uint64_t_u_u(p_1768->g_328, 1))
                    { /* block id: 555 */
                        int32_t l_1097 = 0x776DDD5CL;
                        uint32_t *l_1101 = (void*)0;
                        uint32_t **l_1100 = &l_1101;
                        (*p_58) = (*p_1768->g_527);
                        if (l_1023.y)
                            continue;
                        (*p_58) |= (safe_sub_func_int64_t_s_s((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))((safe_lshift_func_int16_t_s_u(p_1768->g_112[0][3][1], p_1768->g_759.x)), l_1013.x, ((VECTOR(int8_t, 2))(l_1096.yx)), (-1L), l_1097, (-2L), 0x25L)))).s5 | ((((*l_812) , (safe_add_func_int64_t_s_s((l_1100 == p_1768->g_1102), (safe_mul_func_int16_t_s_s(0x131AL, (((safe_mul_func_uint8_t_u_u(8UL, 0xFFL)) >= l_1023.x) <= l_1109)))))) , (*p_1768->g_138)) ^ p_1768->g_11[1])), (-1L)));
                        if ((*p_58))
                            break;
                    }
                    if ((safe_rshift_func_uint8_t_u_u(0x36L, ((safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 8))(l_1116.sdf29feb5)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(0xF4L, (+((*p_1768->g_138) |= (safe_mul_func_uint8_t_u_u(((0L < (safe_rshift_func_int16_t_s_u((((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(l_1109, (((((*l_1127) = l_1067.s7) , (safe_sub_func_int32_t_s_s((safe_mod_func_int64_t_s_s((((p_1768->g_1028.s4 , ((*p_1768->g_526) <= ((safe_mod_func_int32_t_s_s(0x09E91D1DL, (safe_div_func_uint64_t_u_u(l_1046, (~(l_1013.y = ((l_1136 == (void*)0) | p_1768->g_1010))))))) && p_1768->g_140))) , l_1046) <= l_1023.y), l_1029.s7)), FAKE_DIVERGE(p_1768->local_0_offset, get_local_id(0), 10)))) | l_1066.y) ^ l_1109))), 0x3E02L)), (*l_788))) > l_1046) || l_1067.s3), l_1046))) < l_1096.y), l_1023.x)))), 0UL, ((VECTOR(uint8_t, 4))(2UL)), 1UL)).s5271745123412053)).even))).s3 , 247UL), l_1046)), l_1138[1])) ^ l_1096.x))))
                    { /* block id: 564 */
                        int32_t *l_1139 = &p_1768->g_528[1];
                        int32_t *l_1140 = (void*)0;
                        int32_t *l_1141 = &p_1768->g_60;
                        int32_t *l_1142 = &l_76;
                        int32_t *l_1143 = &l_1138[1];
                        int32_t *l_1144[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1144[i] = &p_1768->g_60;
                        --l_1148.s5;
                    }
                    else
                    { /* block id: 566 */
                        uint8_t l_1173[8][6] = {{0xE9L,0xB8L,255UL,0x2AL,255UL,0xB8L},{0xE9L,0xB8L,255UL,0x2AL,255UL,0xB8L},{0xE9L,0xB8L,255UL,0x2AL,255UL,0xB8L},{0xE9L,0xB8L,255UL,0x2AL,255UL,0xB8L},{0xE9L,0xB8L,255UL,0x2AL,255UL,0xB8L},{0xE9L,0xB8L,255UL,0x2AL,255UL,0xB8L},{0xE9L,0xB8L,255UL,0x2AL,255UL,0xB8L},{0xE9L,0xB8L,255UL,0x2AL,255UL,0xB8L}};
                        int32_t l_1174[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
                        int32_t *l_1175 = (void*)0;
                        int32_t *l_1176 = &l_1174[7];
                        int32_t *l_1177 = &l_1174[1];
                        int32_t *l_1178 = &l_1147;
                        int32_t *l_1179 = (void*)0;
                        int32_t *l_1180 = (void*)0;
                        int32_t *l_1181 = &p_1768->g_528[2];
                        int32_t *l_1182 = &l_1146;
                        int32_t *l_1183 = &p_1768->g_60;
                        int32_t *l_1184 = (void*)0;
                        int32_t *l_1185[9][4] = {{&l_76,&l_76,&l_1138[1],(void*)0},{&l_76,&l_76,&l_1138[1],(void*)0},{&l_76,&l_76,&l_1138[1],(void*)0},{&l_76,&l_76,&l_1138[1],(void*)0},{&l_76,&l_76,&l_1138[1],(void*)0},{&l_76,&l_76,&l_1138[1],(void*)0},{&l_76,&l_76,&l_1138[1],(void*)0},{&l_76,&l_76,&l_1138[1],(void*)0},{&l_76,&l_76,&l_1138[1],(void*)0}};
                        uint32_t l_1186 = 0xC14E4B24L;
                        int i, j;
                        (*l_788) = (safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(l_1147, ((l_1173[3][1] = (((p_1768->g_545 > ((safe_mod_func_int8_t_s_s(((safe_add_func_uint64_t_u_u(((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_1159.s8b7f)))).x , l_1160) == (void*)0), (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((((l_1066.x || (l_1013.x != ((*l_902) = (safe_sub_func_int64_t_s_s(l_1013.y, 0x1A81E4308AECC11CL))))) && ((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 2))(l_1171.yx)).xyxxxyxxxyxxyxxy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_1172.s55)).yxxxyxyxxyxxyxxy))))).seae3)).x, 0x8401L)) < GROUP_DIVERGE(0, 1))) >= 0UL), l_1013.y)), 0)))) >= l_1146), l_1013.y)) || l_1046)) && l_1013.y) & l_1109)) & l_1174[7]))) > l_1138[1]), 4L));
                        l_1186++;
                    }
                    l_1204--;
                    if (l_1138[3])
                        continue;
                }
            }
            for (p_1768->g_140 = 0; (p_1768->g_140 <= (-17)); p_1768->g_140 = safe_sub_func_int32_t_s_s(p_1768->g_140, 7))
            { /* block id: 578 */
                return (*p_1768->g_174);
            }
            (*l_788) = (*p_58);
        }
        else
        { /* block id: 582 */
            atomic_add(&p_1768->l_atomic_reduction[0], 0x12C8758AL);
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1768->v_collective += p_1768->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
    }
    return (*l_730);
}


/* ------------------------------------------ */
/* 
 * reads : p_1768->g_545
 * writes: p_1768->g_545
 */
union U1 * func_87(uint16_t  p_88, int32_t * p_89, union U1 * p_90, uint32_t  p_91, uint32_t * p_92, struct S2 * p_1768)
{ /* block id: 353 */
    uint16_t *l_718[1][4][2];
    uint16_t **l_717 = &l_718[0][0][0];
    int32_t *l_723 = &p_1768->g_60;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
                l_718[i][j][k] = &p_1768->g_75;
        }
    }
    for (p_1768->g_545 = 0; (p_1768->g_545 != 24); p_1768->g_545 = safe_add_func_uint8_t_u_u(p_1768->g_545, 3))
    { /* block id: 356 */
        uint16_t **l_719 = &l_718[0][0][0];
        int32_t *l_721 = (void*)0;
        int32_t l_722 = 6L;
        int32_t **l_724 = &l_723;
        uint32_t l_727 = 0x93E45029L;
        int32_t *l_728 = &l_722;
        l_722 |= (l_717 != l_719);
        p_89 = ((*l_724) = l_723);
        for (p_91 = 19; (p_91 != 18); p_91 = safe_sub_func_int32_t_s_s(p_91, 1))
        { /* block id: 362 */
            return &p_1768->g_171;
        }
        (*l_728) = l_727;
    }
    return &p_1768->g_171;
}


/* ------------------------------------------ */
/* 
 * reads : p_1768->g_116 p_1768->g_128 p_1768->g_11 p_1768->g_112 p_1768->g_140 p_1768->g_60 p_1768->g_150 p_1768->g_67 p_1768->g_163 p_1768->l_comm_values p_1768->g_75 p_1768->g_175 p_1768->g_66 p_1768->g_192 p_1768->g_207 p_1768->g_208 p_1768->g_212 p_1768->g_213 p_1768->g_72 p_1768->g_245 p_1768->g_266 p_1768->g_295 p_1768->g_104 p_1768->g_214 p_1768->g_330 p_1768->g_347 p_1768->g_350 p_1768->g_64 p_1768->g_237 p_1768->g_138 p_1768->g_357 p_1768->g_378 p_1768->g_108 p_1768->g_395 p_1768->g_328 p_1768->g_525 p_1768->g_527 p_1768->g_545 p_1768->g_526 p_1768->g_577 p_1768->g_580 p_1768->g_639
 * writes: p_1768->g_116 p_1768->g_11 p_1768->g_138 p_1768->g_104 p_1768->g_67 p_1768->g_174 p_1768->g_175 p_1768->g_75 p_1768->g_150 p_1768->g_192 p_1768->g_207 p_1768->g_72 p_1768->g_237 p_1768->g_140 p_1768->g_295 p_1768->g_357 p_1768->g_128 p_1768->g_395 p_1768->g_328 p_1768->g_528 p_1768->g_527 p_1768->g_545 p_1768->g_580 p_1768->g_639
 */
union U1 * func_96(uint8_t  p_97, uint32_t  p_98, int32_t  p_99, struct S2 * p_1768)
{ /* block id: 54 */
    int16_t *l_115 = &p_1768->g_116;
    int32_t l_125[2];
    int8_t *l_129 = (void*)0;
    int8_t *l_130 = &p_1768->g_11[5];
    uint8_t *l_136 = &p_1768->g_112[0][3][2];
    uint8_t **l_135 = &l_136;
    uint8_t **l_137 = (void*)0;
    uint32_t l_139 = 0x1DEDA0BEL;
    uint8_t *l_141 = (void*)0;
    int64_t *l_142 = (void*)0;
    int64_t *l_143 = (void*)0;
    int64_t *l_144 = (void*)0;
    int64_t *l_145 = (void*)0;
    int64_t *l_146 = (void*)0;
    int64_t *l_147 = (void*)0;
    int64_t *l_148[10][6][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_149 = 0L;
    int32_t *l_151 = &p_1768->g_67[0][0][0];
    VECTOR(int32_t, 4) l_200 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x6F103696L), 0x6F103696L);
    uint16_t l_231 = 1UL;
    VECTOR(uint16_t, 8) l_275 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 65528UL), 65528UL), 65528UL, 65526UL, 65528UL);
    VECTOR(int8_t, 8) l_296 = (VECTOR(int8_t, 8))(0x7DL, (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, 0x1BL), 0x1BL), 0x1BL, 0x7DL, 0x1BL);
    VECTOR(uint32_t, 8) l_303 = (VECTOR(uint32_t, 8))(3UL, (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 0xC2B95090L), 0xC2B95090L), 0xC2B95090L, 3UL, 0xC2B95090L);
    union U1 **l_353 = &p_1768->g_237;
    VECTOR(uint64_t, 8) l_379 = (VECTOR(uint64_t, 8))(0x4C842035C2B326ABL, (VECTOR(uint64_t, 4))(0x4C842035C2B326ABL, (VECTOR(uint64_t, 2))(0x4C842035C2B326ABL, 0xB747A806710F93FCL), 0xB747A806710F93FCL), 0xB747A806710F93FCL, 0x4C842035C2B326ABL, 0xB747A806710F93FCL);
    uint64_t *l_524 = &p_1768->g_357;
    uint64_t **l_523 = &l_524;
    VECTOR(uint8_t, 4) l_554 = (VECTOR(uint8_t, 4))(0x90L, (VECTOR(uint8_t, 2))(0x90L, 0xE7L), 0xE7L);
    uint32_t l_570 = 4294967287UL;
    VECTOR(int8_t, 4) l_585 = (VECTOR(int8_t, 4))(0x5EL, (VECTOR(int8_t, 2))(0x5EL, 0L), 0L);
    int8_t *l_636 = &p_1768->g_545;
    union U0 l_637 = {0xB24340CFL};
    union U0 *l_638 = &p_1768->g_580;
    int32_t *l_646 = &l_125[1];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_125[i] = 0L;
    if (((*l_151) &= (safe_div_func_int8_t_s_s((((*l_115) &= p_99) <= (GROUP_DIVERGE(2, 1) && ((-3L) || (-2L)))), (safe_lshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_s(((+(l_125[0] , l_125[1])) >= (safe_sub_func_int8_t_s_s(((*l_130) |= ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_1768->g_128.sc714a41b78c417bc)).s72)).even), (safe_rshift_func_uint16_t_u_s(((p_1768->g_112[0][9][2] && (((l_149 = ((((p_1768->g_104 = ((((*l_135) = l_130) == (p_1768->g_138 = (void*)0)) >= (l_139 & p_1768->g_140))) ^ (-9L)) , p_1768->g_128.s9) , p_1768->g_60)) , (void*)0) != (void*)0)) , p_1768->g_150), 14))))), 2)) | p_97) == l_125[0]), 13)), GROUP_DIVERGE(2, 1))), p_98))))))
    { /* block id: 62 */
        int64_t *l_152 = (void*)0;
        int32_t l_164 = 0x673EEE6CL;
        int64_t **l_165 = (void*)0;
        int64_t **l_166 = &l_144;
        int64_t **l_167 = &l_147;
        VECTOR(uint8_t, 8) l_187 = (VECTOR(uint8_t, 8))(0x73L, (VECTOR(uint8_t, 4))(0x73L, (VECTOR(uint8_t, 2))(0x73L, 0x20L), 0x20L), 0x20L, 0x73L, 0x20L);
        uint32_t l_197[8];
        int8_t l_230 = (-9L);
        int32_t l_255 = 4L;
        int32_t l_256 = 1L;
        int32_t l_257 = 0x12D6FB60L;
        int32_t ***l_277 = &p_1768->g_175;
        union U0 l_345 = {0x52101B89L};
        uint8_t **l_349 = &p_1768->g_138;
        VECTOR(uint8_t, 2) l_362 = (VECTOR(uint8_t, 2))(0x87L, 9UL);
        int i;
        for (i = 0; i < 8; i++)
            l_197[i] = 0x09979B65L;
        if ((l_152 != ((*l_167) = ((*l_166) = (((safe_mod_func_int16_t_s_s(((((safe_rshift_func_int16_t_s_s(p_97, ((safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((((*l_151) = (0x10A8C73EL > (p_99 == (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_1768->g_163.s1431)))).lo)).lo, ((void*)0 != l_115)))))) <= (((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x5EL, 0L)).xyyxxyxy)).s3122300312505155, (int8_t)p_98))).s5 >= p_1768->g_112[0][9][2])), p_1768->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1768->tid, 9))])), p_97)) < l_164))) < 0xFBF5L) != p_98) >= p_1768->g_140), p_1768->g_11[0])) > p_1768->g_75) , l_142)))))
        { /* block id: 66 */
            union U1 *l_170 = &p_1768->g_171;
            union U1 *l_173[8] = {(void*)0,&p_1768->g_171,(void*)0,(void*)0,&p_1768->g_171,(void*)0,(void*)0,&p_1768->g_171};
            union U1 **l_172[8][10][3] = {{{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]}},{{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]}},{{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]}},{{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]}},{{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]}},{{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]}},{{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]}},{{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]},{&l_170,(void*)0,&l_173[1]}}};
            int32_t ***l_176[6] = {&p_1768->g_175,&p_1768->g_175,&p_1768->g_175,&p_1768->g_175,&p_1768->g_175,&p_1768->g_175};
            VECTOR(uint8_t, 16) l_186 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x03L), 0x03L), 0x03L, 0UL, 0x03L, (VECTOR(uint8_t, 2))(0UL, 0x03L), (VECTOR(uint8_t, 2))(0UL, 0x03L), 0UL, 0x03L, 0UL, 0x03L);
            VECTOR(int32_t, 4) l_199 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 1L), 1L);
            uint8_t l_209 = 5UL;
            uint32_t l_229 = 8UL;
            int i, j, k;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1768->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 9)), permutations[(safe_mod_func_uint32_t_u_u((((void*)0 != &p_1768->g_138) && (((l_170 == (p_1768->g_174 = (void*)0)) , (p_1768->g_175 = p_1768->g_175)) != (void*)0)), 10))][(safe_mod_func_uint32_t_u_u(p_1768->tid, 9))]));
            for (p_1768->g_75 = 16; (p_1768->g_75 < 42); p_1768->g_75 = safe_add_func_uint64_t_u_u(p_1768->g_75, 2))
            { /* block id: 74 */
                VECTOR(int32_t, 16) l_202 = (VECTOR(int32_t, 16))(0x371CF878L, (VECTOR(int32_t, 4))(0x371CF878L, (VECTOR(int32_t, 2))(0x371CF878L, 0L), 0L), 0L, 0x371CF878L, 0L, (VECTOR(int32_t, 2))(0x371CF878L, 0L), (VECTOR(int32_t, 2))(0x371CF878L, 0L), 0x371CF878L, 0L, 0x371CF878L, 0L);
                int i;
                for (p_1768->g_150 = (-1); (p_1768->g_150 >= 4); p_1768->g_150 = safe_add_func_uint16_t_u_u(p_1768->g_150, 7))
                { /* block id: 77 */
                    int32_t l_181 = 0x3F9F1FBDL;
                    uint64_t *l_190[3];
                    int32_t l_191[4] = {0x63880B99L,0x63880B99L,0x63880B99L,0x63880B99L};
                    VECTOR(int32_t, 4) l_198 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6CA28C0AL), 0x6CA28C0AL);
                    VECTOR(int32_t, 2) l_201 = (VECTOR(int32_t, 2))(0L, 0L);
                    uint16_t *l_205 = (void*)0;
                    uint16_t *l_206 = &p_1768->g_207[4];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_190[i] = (void*)0;
                    (*l_151) = 2L;
                    p_1768->g_67[0][0][2] ^= ((l_181 < ((safe_mod_func_int16_t_s_s((((*l_206) |= (safe_mul_func_uint8_t_u_u((p_1768->g_66[5][2] >= ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 16))(l_186.sc8821c202275d252)).s14, ((VECTOR(uint8_t, 16))(l_187.s4755725656744240)).sf8))).yyxy, ((VECTOR(uint16_t, 4))(0UL, 0x7228L, 0x3068L, 9UL))))).w), ((*l_130) = ((safe_add_func_uint64_t_u_u((p_1768->g_192--), (safe_div_func_uint16_t_u_u(((((l_197[7] = p_1768->g_128.s6) > (l_164 & (((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))((-9L), 0x04491F76L, (-5L), ((VECTOR(int32_t, 2))(l_198.zw)), ((VECTOR(int32_t, 2))(l_199.yw)), (&p_1768->g_72 == &p_1768->g_72), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_200.xwyxyzywzwxzywyz)).s459f)), 0x1EE913CBL, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_201.yx)).yyyxyyyy)).s0111775206261714, ((VECTOR(int32_t, 8))(l_202.se810ff72)).s4353257423377730))).s74, (int32_t)(((p_1768->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1768->tid, 9))] < (safe_div_func_uint64_t_u_u(0x1BA7616D2739A248L, ((VECTOR(int64_t, 2))(0x6AB918B3C7FF32E4L, 0x202B76FD2365CF4BL)).odd))) ^ ((p_1768->g_72 == (void*)0) , (-1L))) ^ l_201.x), (int32_t)p_1768->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1768->tid, 9))]))), 0x0B8525E4L)).s90, ((VECTOR(int32_t, 2))(0x0C8B1AC3L))))), ((VECTOR(int32_t, 2))(0x605E50A6L)), ((VECTOR(int32_t, 2))(0x4D9EE29CL))))).xxyyyxyxyxxyxyyx, ((VECTOR(int32_t, 16))(9L))))).hi)).s7166237400324564, ((VECTOR(int32_t, 16))(0x419EDD3AL)), ((VECTOR(int32_t, 16))(0x2704DB0DL))))).s0 > 0x7E88F4ACL))) , 0x43A5B38CE81F14C9L) <= GROUP_DIVERGE(2, 1)), p_97)))) > 6L))))) || 6UL), p_97)) < l_187.s6)) && p_1768->g_116);
                    (*p_1768->g_208) = &p_1768->g_63[5][0];
                    ++l_209;
                }
            }
            if ((((p_1768->g_212 , p_1768->g_213) == ((safe_sub_func_int64_t_s_s(((p_99 == ((safe_mod_func_int64_t_s_s(((((safe_mod_func_int64_t_s_s(((safe_sub_func_int64_t_s_s((safe_sub_func_int16_t_s_s(p_98, ((((((VECTOR(int64_t, 8))((((0L | (safe_mul_func_int16_t_s_s((p_98 | (((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 2))(1UL, 0x3EBBC57AL)).yxxyxyyyyxxyyyxy, ((VECTOR(uint32_t, 16))((p_98 >= p_98), 0x369C0D2DL, ((VECTOR(uint32_t, 4))(0UL, 4294967286UL, 0xAE39112DL, 9UL)), ((VECTOR(uint32_t, 4))((safe_mul_func_uint16_t_u_u((&p_1768->g_214[0] != (void*)0), p_99)), 0x536D2C72L, 0x9D5E12A2L, 6UL)).w, ((VECTOR(uint32_t, 8))(1UL)), 0x38831052L))))).se > p_1768->g_140)), 0L))) <= l_229) <= p_99), 0x35DE0DADF907BA93L, l_164, ((VECTOR(int64_t, 4))(0x78DD13CF1FF036B2L)), (-1L))).s3 > 0x5BA48F3C6CE5F64FL) || l_230) , p_99) == p_97))), p_98)) && l_187.s6), (*l_151))) & p_1768->g_163.s4) && l_231) == p_1768->g_140), p_1768->g_207[4])) <= (*l_151))) && p_97), (*l_151))) , (void*)0)) ^ (*l_151)))
            { /* block id: 88 */
                return &p_1768->g_171;
            }
            else
            { /* block id: 90 */
                for (p_1768->g_116 = (-6); (p_1768->g_116 >= 21); p_1768->g_116 = safe_add_func_uint8_t_u_u(p_1768->g_116, 2))
                { /* block id: 93 */
                    for (l_139 = 0; (l_139 > 42); l_139 = safe_add_func_uint8_t_u_u(l_139, 3))
                    { /* block id: 96 */
                        uint8_t l_236 = 0xD8L;
                        if (l_236)
                            break;
                        p_1768->g_237 = (p_1768->g_174 = &p_1768->g_171);
                    }
                }
                if ((atomic_inc(&p_1768->l_atomic_input[38]) == 9))
                { /* block id: 103 */
                    int32_t l_239 = 0x50CBDD73L;
                    int32_t *l_238 = &l_239;
                    int8_t l_240 = 0x3BL;
                    int8_t l_241 = (-7L);
                    uint64_t l_242 = 0xE6A23D2193D004A9L;
                    int32_t l_243 = 0x7C71EBCFL;
                    l_238 = (void*)0;
                    l_241 = l_240;
                    l_243 = l_242;
                    unsigned int result = 0;
                    result += l_239;
                    result += l_240;
                    result += l_241;
                    result += l_242;
                    result += l_243;
                    atomic_add(&p_1768->l_special_values[38], result);
                }
                else
                { /* block id: 107 */
                    (1 + 1);
                }
            }
            (*p_1768->g_245) = (*p_1768->g_208);
        }
        else
        { /* block id: 112 */
            uint8_t l_258 = 0x6EL;
            uint16_t *l_262[3];
            union U0 l_284[10] = {{2UL},{0xB0578F1FL},{2UL},{2UL},{0xB0578F1FL},{2UL},{2UL},{0xB0578F1FL},{2UL},{2UL}};
            VECTOR(int16_t, 16) l_301 = (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x3EEEL), 0x3EEEL), 0x3EEEL, 8L, 0x3EEEL, (VECTOR(int16_t, 2))(8L, 0x3EEEL), (VECTOR(int16_t, 2))(8L, 0x3EEEL), 8L, 0x3EEEL, 8L, 0x3EEEL);
            VECTOR(int32_t, 8) l_302 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-1L)), (-1L)), (-1L), 5L, (-1L));
            int32_t l_306 = 0x6CBD6C7DL;
            int32_t **l_312 = (void*)0;
            uint64_t *l_327[9][10] = {{&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328},{&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328},{&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328},{&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328},{&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328},{&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328},{&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328},{&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328},{&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328,&p_1768->g_328}};
            uint64_t l_340[3];
            int32_t *l_354 = &l_255;
            int32_t *l_355 = (void*)0;
            int32_t *l_356[8][6];
            VECTOR(int64_t, 16) l_392 = (VECTOR(int64_t, 16))(0x380A2E98250B9A7CL, (VECTOR(int64_t, 4))(0x380A2E98250B9A7CL, (VECTOR(int64_t, 2))(0x380A2E98250B9A7CL, 0x7D86DE9C2F8F8DFEL), 0x7D86DE9C2F8F8DFEL), 0x7D86DE9C2F8F8DFEL, 0x380A2E98250B9A7CL, 0x7D86DE9C2F8F8DFEL, (VECTOR(int64_t, 2))(0x380A2E98250B9A7CL, 0x7D86DE9C2F8F8DFEL), (VECTOR(int64_t, 2))(0x380A2E98250B9A7CL, 0x7D86DE9C2F8F8DFEL), 0x380A2E98250B9A7CL, 0x7D86DE9C2F8F8DFEL, 0x380A2E98250B9A7CL, 0x7D86DE9C2F8F8DFEL);
            uint32_t l_396 = 0x511230DBL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_262[i] = (void*)0;
            for (i = 0; i < 3; i++)
                l_340[i] = 18446744073709551615UL;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 6; j++)
                    l_356[i][j] = &l_164;
            }
            if ((0x4D1CE3DAL & (*l_151)))
            { /* block id: 113 */
                int32_t *l_246 = &l_125[0];
                int32_t *l_247 = &l_125[0];
                int32_t *l_248 = &l_125[1];
                int32_t *l_249 = &l_125[0];
                int32_t *l_250 = (void*)0;
                int32_t *l_251 = (void*)0;
                int32_t *l_252 = &l_164;
                int32_t *l_253 = (void*)0;
                int32_t *l_254[10];
                uint16_t *l_261[9][1][1];
                uint16_t **l_263 = &l_262[1];
                int32_t ***l_276 = &p_1768->g_175;
                uint32_t *l_294 = &p_1768->g_295;
                int16_t *l_304 = &l_284[9].f2;
                int16_t *l_305 = &p_1768->g_140;
                int i, j, k;
                for (i = 0; i < 10; i++)
                    l_254[i] = &l_125[1];
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_261[i][j][k] = (void*)0;
                    }
                }
                l_258--;
                (*l_248) = (l_261[0][0][0] != ((*l_263) = l_262[1]));
                for (p_1768->g_140 = 0; (p_1768->g_140 >= (-30)); p_1768->g_140--)
                { /* block id: 119 */
                    int8_t **l_280 = &l_130;
                    uint16_t **l_281 = &l_262[0];
                    uint64_t *l_282[4][8] = {{&p_1768->g_283,&p_1768->g_171.f3,&p_1768->g_171.f3,&p_1768->g_283,&p_1768->g_283,&p_1768->g_171.f3,&p_1768->g_171.f3,&p_1768->g_283},{&p_1768->g_283,&p_1768->g_171.f3,&p_1768->g_171.f3,&p_1768->g_283,&p_1768->g_283,&p_1768->g_171.f3,&p_1768->g_171.f3,&p_1768->g_283},{&p_1768->g_283,&p_1768->g_171.f3,&p_1768->g_171.f3,&p_1768->g_283,&p_1768->g_283,&p_1768->g_171.f3,&p_1768->g_171.f3,&p_1768->g_283},{&p_1768->g_283,&p_1768->g_171.f3,&p_1768->g_171.f3,&p_1768->g_283,&p_1768->g_283,&p_1768->g_171.f3,&p_1768->g_171.f3,&p_1768->g_283}};
                    int i, j;
                    (*l_247) |= (0x27FD2305L == ((VECTOR(uint32_t, 2))(p_1768->g_266.zy)).odd);
                    (*l_252) |= (safe_mul_func_uint16_t_u_u((p_1768->g_75 = ((-1L) > (((1L >= 1L) | (safe_div_func_uint8_t_u_u(((((*l_151) = (((safe_div_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s((((p_97 | ((VECTOR(uint16_t, 2))(l_275.s04)).odd) , l_276) != l_277), (safe_add_func_uint64_t_u_u(((((*l_280) = &p_1768->g_11[2]) == &p_1768->g_11[3]) , 0x70C0675523CCB4F8L), (*l_151))))) < p_1768->g_163.s1), 18446744073709551615UL)) , l_281) == &l_262[0])) , l_284[9]) , GROUP_DIVERGE(1, 1)), p_1768->g_11[1]))) && p_99))), p_97));
                    if (l_258)
                        continue;
                }
                (*l_151) = (safe_sub_func_uint32_t_u_u(((safe_unary_minus_func_int32_t_s(0x7F7FB4EBL)) <= (((safe_rshift_func_int16_t_s_u(p_1768->g_266.w, 8)) <= (safe_sub_func_int16_t_s_s((*l_249), (!((safe_add_func_uint64_t_u_u((0x1C89L > ((*l_115) = (-1L))), ((((*l_294) ^= 4294967295UL) , (((*l_305) |= (+(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(l_296.s4243)).wyywzxxxxwzxxxww, ((VECTOR(int8_t, 2))(0x00L, 0x31L)).xxxxyyyyyxyyyxyy, ((VECTOR(int8_t, 2))(0x2DL, 1L)).yxyxyxxxxyyyyxxx))).sf != (safe_div_func_int32_t_s_s((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_301.s265548835cbdd68c)).s78)), ((VECTOR(int16_t, 2))(0x7A71L, 1L)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))((-1L), 1L)))), (-7L), 0x66BDL)).s37)).odd, ((((VECTOR(int32_t, 16))(0L, (-1L), 2L, p_98, ((VECTOR(int32_t, 4))(l_302.s4220)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(6L, (-2L))), 0x75F30463L, (-1L))), ((VECTOR(int32_t, 2))(0x4372EC93L, (-6L))), 0x51B42EB3L, 1L)).s7 >= ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_303.s30050675)))).s0) ^ p_1768->g_66[0][0]))), p_97))))) <= p_1768->g_104)) >= (*l_252)))) , (*l_252)))))) ^ l_306)), 1L));
            }
            else
            { /* block id: 131 */
                VECTOR(int64_t, 16) l_315 = (VECTOR(int64_t, 16))(0x05A0F50867CCE03AL, (VECTOR(int64_t, 4))(0x05A0F50867CCE03AL, (VECTOR(int64_t, 2))(0x05A0F50867CCE03AL, 0x0B6AEAC0E24B2507L), 0x0B6AEAC0E24B2507L), 0x0B6AEAC0E24B2507L, 0x05A0F50867CCE03AL, 0x0B6AEAC0E24B2507L, (VECTOR(int64_t, 2))(0x05A0F50867CCE03AL, 0x0B6AEAC0E24B2507L), (VECTOR(int64_t, 2))(0x05A0F50867CCE03AL, 0x0B6AEAC0E24B2507L), 0x05A0F50867CCE03AL, 0x0B6AEAC0E24B2507L, 0x05A0F50867CCE03AL, 0x0B6AEAC0E24B2507L);
                uint32_t l_322 = 4294967289UL;
                int32_t **l_329 = &l_151;
                int32_t l_336 = 0x5FAAABA1L;
                int32_t l_337 = 0x03015F5AL;
                int32_t l_338 = 0x07088B26L;
                int32_t l_339 = 0L;
                uint8_t **l_348 = &l_136;
                int i;
                for (p_98 = (-1); (p_98 != 56); ++p_98)
                { /* block id: 134 */
                    uint64_t l_309 = 18446744073709551610UL;
                    int32_t l_331 = 0x2E596A58L;
                    int32_t *l_332 = (void*)0;
                    int32_t *l_333 = &l_331;
                    int32_t *l_334 = &l_257;
                    int32_t *l_335[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_335[i] = &l_331;
                    (*l_151) = (l_309 != 0x7BL);
                    l_331 |= (((safe_mul_func_uint8_t_u_u((p_99 <= (((*l_277) = l_312) == (((((safe_rshift_func_uint8_t_u_s(p_97, 5)) ^ ((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(l_315.sc9)), (int64_t)((safe_lshift_func_int8_t_s_s((((safe_sub_func_int16_t_s_s((0xE966B25F4EC57748L ^ (safe_lshift_func_uint16_t_u_u(0UL, l_322))), (0x5A8B76930E477ED7L <= (l_302.s1 = ((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 16))(0x3174L, (safe_mul_func_int8_t_s_s((p_1768->g_214[1] != l_327[4][0]), FAKE_DIVERGE(p_1768->global_0_offset, get_global_id(0), 10))), 0x0735L, (-1L), (-1L), ((VECTOR(int16_t, 8))(0x65E6L)), p_1768->g_116, 0x757BL, 0x7B68L)).s5, 8L)) <= 1L))))) ^ FAKE_DIVERGE(p_1768->global_0_offset, get_global_id(0), 10)) && 0x4BL), p_1768->g_112[0][9][2])) , (-1L))))).yyyxxxyyyyxxxxxx, ((VECTOR(int64_t, 16))(0x241ECF1D65AB089EL))))).sf) , &p_1768->g_214[4]) == &l_146) , l_329))), p_97)) , p_1768->g_330) , 0L);
                    --l_340[0];
                }
                (**l_329) = 0L;
                (*l_151) |= (safe_add_func_int64_t_s_s((p_1768->g_66[1][1] >= ((l_345 , 0x17A58830L) || p_99)), (safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 8))(4294967295UL, 0x191ECFDBL, ((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),uint32_t,((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(p_1768->g_347.s3341343753466125)))).s2df6, (uint32_t)(&p_1768->g_104 != &p_1768->g_108), (uint32_t)((void*)0 == l_348)))), 0x508C173DL, 0xD18D7B6EL)).s7))));
                l_349 = &p_1768->g_138;
            }
            p_1768->g_357 &= ((*l_354) &= (((l_256 = (-8L)) <= ((((VECTOR(uint8_t, 2))(p_1768->g_350.xy)).even && (p_1768->g_64 ^ (((0xD43EE1FDL & (&p_1768->g_174 != ((safe_rshift_func_int8_t_s_u((p_1768->g_237 != (void*)0), (&l_258 == ((*l_349) = (*l_349))))) , l_353))) >= (*l_151)) & p_99))) != 0x7F171D4E75E4C8BFL)) < 18446744073709551612UL));
            (*l_151) = ((((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(p_97, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(248UL, 0x84L, 0x91L, 0x1CL)), (*l_151), ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 2))(l_362.xy)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((safe_lshift_func_uint8_t_u_u(p_1768->g_66[5][1], (safe_lshift_func_int8_t_s_s((((p_1768->g_60 | (safe_unary_minus_func_int16_t_s((safe_div_func_uint8_t_u_u((safe_add_func_int32_t_s_s((p_1768->g_395 &= (((p_1768->g_357--) <= ((safe_sub_func_uint32_t_u_u(4294967295UL, ((VECTOR(int32_t, 4))((-2L), (*l_354), 0x200000DFL, 0x1FE867CBL)).y)) != (safe_rshift_func_uint8_t_u_s(((((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(p_1768->g_378.s30)))).yxxx, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(0x63A098A3ABFD04F1L, ((VECTOR(uint64_t, 8))(0x78593C3BF2DE3A6AL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_379.s71142746)).s6444715705137617)).s560c)), (safe_lshift_func_int8_t_s_u((!(p_99 | (safe_mod_func_int32_t_s_s(p_98, (safe_div_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(((((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((safe_add_func_uint64_t_u_u((((*l_130) = (p_1768->g_128.s6 &= (safe_lshift_func_uint8_t_u_s((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_392.s0a9b)), (safe_div_func_uint64_t_u_u(18446744073709551614UL, 0x74D7C293D29C9424L)), ((VECTOR(int64_t, 8))(1L)), ((VECTOR(int64_t, 2))((-3L))), (-8L))).s2 >= p_99), p_1768->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1768->tid, 9))])))) <= p_1768->g_207[0]), GROUP_DIVERGE(0, 1))) || 0x7F58AC76A57F8FCBL), ((VECTOR(int64_t, 8))(0x705CBE08F61FBEE4L)), (-1L), p_97, ((VECTOR(int64_t, 2))(0L)), 0x61BEF8F1AD1F4B11L, 0x578C17B85E20276EL, 1L)).lo)), ((VECTOR(int64_t, 8))(1L)), ((VECTOR(int64_t, 8))((-10L)))))).lo, ((VECTOR(int64_t, 4))(0x2D4C3D91348EB91CL))))).x & p_99) <= p_99), p_1768->g_378.s7)) , 0xC3L), 255UL)))))), 3)), 18446744073709551606UL, 0UL)), 18446744073709551609UL, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 0xDE1490F189AE7515L, 0UL, 18446744073709551615UL, 18446744073709551614UL)).sda)).yxxx)).lo)).yyyx))).y < p_99) && (-1L)), p_1768->g_108)))) , (*l_151))), p_98)), p_98))))) != p_99) > p_1768->g_116), p_99)))) == p_1768->g_347.s4), 6UL, 0x26L, 0x44L)).yzwyxzwyzyzxwywz)).s16))), 0x2BL)).s2760537114154506)).s1)), p_1768->g_104)) > (*l_354)) & l_396) && p_1768->g_104);
            if ((atomic_inc(&p_1768->l_atomic_input[20]) == 5))
            { /* block id: 155 */
                int32_t l_397 = 0x0DC0A0A9L;
                int32_t *l_432 = (void*)0;
                int32_t *l_433 = (void*)0;
                uint16_t l_434 = 0x07C3L;
                for (l_397 = 0; (l_397 == 21); ++l_397)
                { /* block id: 158 */
                    uint32_t l_400[10][7][3] = {{{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L}},{{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L}},{{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L}},{{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L}},{{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L}},{{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L}},{{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L}},{{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L}},{{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L}},{{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L},{4294967289UL,0xAC11C0F8L,0xAC11C0F8L}}};
                    uint32_t l_401 = 0x65AA2A34L;
                    uint16_t l_402 = 65535UL;
                    VECTOR(uint32_t, 16) l_403 = (VECTOR(uint32_t, 16))(4294967286UL, (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967286UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967286UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967286UL, 4294967295UL), 4294967286UL, 4294967295UL, 4294967286UL, 4294967295UL);
                    uint32_t l_404 = 8UL;
                    VECTOR(uint8_t, 4) l_405 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xAAL), 0xAAL);
                    VECTOR(uint16_t, 4) l_406 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xD890L), 0xD890L);
                    uint8_t l_407 = 0x02L;
                    int32_t l_408[4];
                    uint64_t l_409 = 18446744073709551609UL;
                    VECTOR(int16_t, 8) l_419 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x695CL), 0x695CL), 0x695CL, (-1L), 0x695CL);
                    int32_t l_420 = 0x6803977CL;
                    VECTOR(int16_t, 16) l_421 = (VECTOR(int16_t, 16))(0x24CFL, (VECTOR(int16_t, 4))(0x24CFL, (VECTOR(int16_t, 2))(0x24CFL, (-5L)), (-5L)), (-5L), 0x24CFL, (-5L), (VECTOR(int16_t, 2))(0x24CFL, (-5L)), (VECTOR(int16_t, 2))(0x24CFL, (-5L)), 0x24CFL, (-5L), 0x24CFL, (-5L));
                    VECTOR(uint16_t, 4) l_422 = (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0UL), 0UL);
                    uint16_t l_423 = 0xE7C9L;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_408[i] = 0x53A0B12DL;
                    if ((((l_401 = l_400[0][1][1]) , (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_402, ((l_403.se = 0x88354F02L) , (l_404 , 65535UL)), (((VECTOR(uint8_t, 8))(l_405.yzyxyyyw)).s5 , ((VECTOR(uint16_t, 8))(l_406.wwxzxzwy)).s0), 0x4A8DL, l_407, 7UL, 0x6367L, 0x5283L)).s7201056242237206)))).se , (l_408[3] = 0x2FL))) , l_409))
                    { /* block id: 162 */
                        union U0 *l_410 = (void*)0;
                        union U0 l_412 = {1UL};
                        union U0 *l_411 = &l_412;
                        int16_t l_413[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                        uint8_t l_414 = 0xF9L;
                        int i;
                        l_408[3] = (-1L);
                        l_411 = l_410;
                        l_408[3] ^= l_413[0];
                        l_408[3] |= l_414;
                    }
                    else
                    { /* block id: 167 */
                        uint64_t l_417 = 1UL;
                        uint64_t *l_416 = &l_417;
                        uint64_t **l_415 = &l_416;
                        uint64_t **l_418 = (void*)0;
                        l_408[1] = 0x2C23863AL;
                        l_418 = l_415;
                    }
                    l_408[0] &= 0x769DFE5DL;
                    l_423 = ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(l_419.s5137600604357051)).s0f, (int16_t)((VECTOR(int16_t, 8))(l_420, ((VECTOR(int16_t, 2))((-1L), 1L)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_421.sfd29a65fe579572a)).s9a)), 0L, 9L, 0x2D10L)).s3))).xxxyyxxy)).lo, ((VECTOR(uint16_t, 8))(l_422.yzxyxwyw)).hi))).w;
                }
                for (l_397 = 0; (l_397 > (-17)); l_397 = safe_sub_func_int32_t_s_s(l_397, 7))
                { /* block id: 176 */
                    VECTOR(int32_t, 8) l_427 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L);
                    int32_t *l_426[3][5][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int32_t *l_428 = (void*)0;
                    VECTOR(int32_t, 16) l_429 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 1L), 1L), 1L, (-3L), 1L, (VECTOR(int32_t, 2))((-3L), 1L), (VECTOR(int32_t, 2))((-3L), 1L), (-3L), 1L, (-3L), 1L);
                    VECTOR(int32_t, 2) l_430 = (VECTOR(int32_t, 2))((-1L), 0x7296DA3DL);
                    int32_t l_431 = 0x1629E43EL;
                    int i, j, k;
                    l_428 = l_426[2][4][0];
                    l_431 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_429.s87c2ff62c3f630cd)).hi)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_430.xyxy)))).hi)))).yyyxxxxy)))).s52)).hi;
                }
                l_433 = l_432;
                if (l_434)
                { /* block id: 181 */
                    int32_t l_435 = 0x036BE4FEL;
                    int32_t l_441 = 0x02461E03L;
                    uint32_t l_442 = 0x4F27D06DL;
                    for (l_435 = (-1); (l_435 > 1); ++l_435)
                    { /* block id: 184 */
                        uint32_t l_438[3];
                        int32_t l_440 = 0x22065589L;
                        int32_t *l_439 = &l_440;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_438[i] = 4UL;
                        l_397 |= l_438[1];
                        l_397 = 0x2B735F19L;
                        l_432 = ((l_434 = 0x686BL) , l_439);
                    }
                    l_442++;
                    for (l_435 = 0; (l_435 > (-16)); l_435 = safe_sub_func_int64_t_s_s(l_435, 3))
                    { /* block id: 193 */
                        int32_t l_447 = 0x5AA5F195L;
                        int64_t l_448 = 1L;
                        uint8_t l_449 = 0x9AL;
                        l_448 &= l_447;
                        l_447 = l_449;
                    }
                    for (l_441 = 8; (l_441 >= 25); ++l_441)
                    { /* block id: 199 */
                        union U0 *l_453 = (void*)0;
                        union U0 **l_452 = &l_453;
                        uint8_t l_454 = 4UL;
                        int64_t l_455 = (-10L);
                        int8_t l_456[6][4] = {{0x0AL,(-4L),(-6L),(-4L)},{0x0AL,(-4L),(-6L),(-4L)},{0x0AL,(-4L),(-6L),(-4L)},{0x0AL,(-4L),(-6L),(-4L)},{0x0AL,(-4L),(-6L),(-4L)},{0x0AL,(-4L),(-6L),(-4L)}};
                        int32_t l_457 = 0L;
                        union U1 l_458 = {4294967292UL};/* VOLATILE GLOBAL l_458 */
                        int64_t l_459 = (-2L);
                        int16_t l_460 = 0x2338L;
                        int i, j;
                        l_452 = l_452;
                        l_455 = l_454;
                        l_397 ^= (l_456[4][0] , l_457);
                        l_432 = (((l_458 , l_459) , l_460) , (void*)0);
                    }
                }
                else
                { /* block id: 205 */
                    int32_t l_461 = 0x5987CD94L;
                    uint64_t l_488 = 0xE454BE54B9E97509L;
                    uint32_t l_518 = 0x913C06DFL;
                    uint8_t l_519 = 255UL;
                    int32_t l_520 = 0L;
                    for (l_461 = 0; (l_461 > 19); l_461 = safe_add_func_uint16_t_u_u(l_461, 6))
                    { /* block id: 208 */
                        int64_t l_464 = (-10L);
                        VECTOR(uint8_t, 8) l_465 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x59L), 0x59L), 0x59L, 0UL, 0x59L);
                        int32_t l_466 = (-5L);
                        uint32_t l_467 = 0x04E7DF0CL;
                        uint8_t l_468 = 248UL;
                        int32_t l_469 = (-4L);
                        int16_t l_470 = (-1L);
                        int64_t l_471 = 0x0D37320AE7433D29L;
                        uint64_t l_472 = 0x44F721F8B3B590C1L;
                        uint32_t l_473 = 0xE7EA0EEAL;
                        VECTOR(int64_t, 8) l_474 = (VECTOR(int64_t, 8))(0x4136BE72DEEF42B5L, (VECTOR(int64_t, 4))(0x4136BE72DEEF42B5L, (VECTOR(int64_t, 2))(0x4136BE72DEEF42B5L, (-4L)), (-4L)), (-4L), 0x4136BE72DEEF42B5L, (-4L));
                        int32_t l_475 = 0L;
                        uint32_t l_476[8] = {0x20633D37L,4294967295UL,0x20633D37L,0x20633D37L,4294967295UL,0x20633D37L,0x20633D37L,4294967295UL};
                        uint8_t l_479 = 1UL;
                        uint16_t l_480 = 0xFA8FL;
                        VECTOR(uint8_t, 8) l_481 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
                        VECTOR(uint8_t, 2) l_482 = (VECTOR(uint8_t, 2))(0x2EL, 0x57L);
                        uint32_t l_483 = 0x54176639L;
                        uint64_t l_484 = 0UL;
                        uint8_t l_485 = 247UL;
                        int32_t *l_486 = &l_469;
                        int32_t *l_487 = &l_469;
                        int i;
                        l_468 ^= (l_467 = ((l_464 , l_465.s0) , (l_466 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((-4L), (l_397 = ((VECTOR(int32_t, 4))(0L, 0L, (-1L), 0x5E39B0E5L)).w), 0L, (-6L))).zwwyzyxyxzzxwxxy)).s7)));
                        l_432 = (l_433 = (l_487 = (((GROUP_DIVERGE(2, 1) , l_469) , (l_470 , (l_471 , (l_472 , (l_473 , (l_479 &= (l_476[3]--))))))) , ((l_485 &= ((((l_480 , ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_481.s7741)), ((VECTOR(uint8_t, 4))(l_482.yyxx)))).s51)).xyxxxyyx)).s7) , l_483) , l_484) , 255UL)) , l_486))));
                    }
                    if (l_488)
                    { /* block id: 220 */
                        uint32_t l_489 = 4294967295UL;
                        uint32_t l_492[7] = {0x4CD0D660L,0x4CD0D660L,0x4CD0D660L,0x4CD0D660L,0x4CD0D660L,0x4CD0D660L,0x4CD0D660L};
                        uint16_t l_493 = 65533UL;
                        int32_t l_495 = 0x1186A3FEL;
                        int32_t *l_494 = &l_495;
                        int i;
                        l_397 = 1L;
                        l_493 &= ((l_489++) , l_492[2]);
                        l_432 = l_494;
                    }
                    else
                    { /* block id: 225 */
                        int32_t l_496 = 0L;
                        uint32_t l_497 = 4294967287UL;
                        int32_t l_500 = 0x3B6C830FL;
                        int8_t l_501[4][7] = {{0x24L,0x24L,0x2AL,0x1BL,9L,0x41L,(-3L)},{0x24L,0x24L,0x2AL,0x1BL,9L,0x41L,(-3L)},{0x24L,0x24L,0x2AL,0x1BL,9L,0x41L,(-3L)},{0x24L,0x24L,0x2AL,0x1BL,9L,0x41L,(-3L)}};
                        int16_t l_502 = 0x43F9L;
                        int16_t l_503 = 0x63BAL;
                        int32_t l_504 = (-1L);
                        int16_t l_505[8];
                        int16_t l_506 = 0L;
                        int64_t l_507 = (-2L);
                        int64_t l_508[7] = {(-1L),0x48F27F0D4FA238ACL,(-1L),(-1L),0x48F27F0D4FA238ACL,(-1L),(-1L)};
                        int16_t l_509 = 0x6FF0L;
                        uint64_t l_510[10][7][3] = {{{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L}},{{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L}},{{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L}},{{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L}},{{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L}},{{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L}},{{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L}},{{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L}},{{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L}},{{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L},{0x1277713E27871541L,0x1FA37E4DB66039EAL,0x84B1C78EB67EAEB6L}}};
                        int16_t l_513[2][9][7] = {{{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L}},{{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L},{(-1L),(-1L),7L,(-1L),(-1L),6L,8L}}};
                        uint64_t l_514 = 0xC335CCD274CB321EL;
                        uint64_t l_517 = 0UL;
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_505[i] = 0x1032L;
                        --l_497;
                        ++l_510[4][6][1];
                        ++l_514;
                        l_397 = l_517;
                    }
                    l_519 = l_518;
                    l_397 = l_520;
                }
                unsigned int result = 0;
                result += l_397;
                result += l_434;
                atomic_add(&p_1768->l_special_values[20], result);
            }
            else
            { /* block id: 234 */
                (1 + 1);
            }
        }
        for (p_1768->g_328 = (-4); (p_1768->g_328 != 43); p_1768->g_328++)
        { /* block id: 240 */
            (*l_151) ^= ((l_523 != p_1768->g_525) && p_98);
            (*p_1768->g_527) = ((*l_151) &= (0x6AA2L > ((*l_115) = 0x5E2EL)));
        }
    }
    else
    { /* block id: 246 */
        int32_t ***l_563 = &p_1768->g_175;
        int32_t ***l_591 = &p_1768->g_175;
        for (p_97 = 0; (p_97 != 32); p_97++)
        { /* block id: 249 */
            int32_t l_573 = (-8L);
            int32_t l_592 = 1L;
            if (p_99)
            { /* block id: 250 */
                union U1 **l_562 = &p_1768->g_174;
                uint16_t *l_568[6] = {&p_1768->g_207[4],&p_1768->g_207[4],&p_1768->g_207[4],&p_1768->g_207[4],&p_1768->g_207[4],&p_1768->g_207[4]};
                int32_t l_569 = 0L;
                uint8_t **l_571 = &l_136;
                uint8_t ***l_572 = &l_571;
                int32_t *l_574 = &l_125[0];
                int32_t ****l_590 = &l_563;
                int i;
                for (l_139 = 22; (l_139 < 25); l_139++)
                { /* block id: 253 */
                    union U1 *l_544[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    if ((atomic_inc(&p_1768->g_atomic_input[39 * get_linear_group_id() + 1]) == 1))
                    { /* block id: 255 */
                        uint16_t l_533[8][9] = {{0UL,0xD7ABL,65533UL,0UL,0xB8B3L,65533UL,65533UL,0xB8B3L,0UL},{0UL,0xD7ABL,65533UL,0UL,0xB8B3L,65533UL,65533UL,0xB8B3L,0UL},{0UL,0xD7ABL,65533UL,0UL,0xB8B3L,65533UL,65533UL,0xB8B3L,0UL},{0UL,0xD7ABL,65533UL,0UL,0xB8B3L,65533UL,65533UL,0xB8B3L,0UL},{0UL,0xD7ABL,65533UL,0UL,0xB8B3L,65533UL,65533UL,0xB8B3L,0UL},{0UL,0xD7ABL,65533UL,0UL,0xB8B3L,65533UL,65533UL,0xB8B3L,0UL},{0UL,0xD7ABL,65533UL,0UL,0xB8B3L,65533UL,65533UL,0xB8B3L,0UL},{0UL,0xD7ABL,65533UL,0UL,0xB8B3L,65533UL,65533UL,0xB8B3L,0UL}};
                        int8_t l_536 = 0x07L;
                        uint16_t l_537[1];
                        VECTOR(int32_t, 8) l_538 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x68D4914CL), 0x68D4914CL), 0x68D4914CL, 1L, 0x68D4914CL);
                        uint32_t l_539 = 0xEEF39D40L;
                        uint32_t l_542 = 0x762CF80EL;
                        int8_t l_543 = 0L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_537[i] = 0xD1CEL;
                        l_533[5][4]++;
                        l_537[0] ^= l_536;
                        ++l_539;
                        l_543 = (GROUP_DIVERGE(1, 1) , l_542);
                        unsigned int result = 0;
                        int l_533_i0, l_533_i1;
                        for (l_533_i0 = 0; l_533_i0 < 8; l_533_i0++) {
                            for (l_533_i1 = 0; l_533_i1 < 9; l_533_i1++) {
                                result += l_533[l_533_i0][l_533_i1];
                            }
                        }
                        result += l_536;
                        int l_537_i0;
                        for (l_537_i0 = 0; l_537_i0 < 1; l_537_i0++) {
                            result += l_537[l_537_i0];
                        }
                        result += l_538.s7;
                        result += l_538.s6;
                        result += l_538.s5;
                        result += l_538.s4;
                        result += l_538.s3;
                        result += l_538.s2;
                        result += l_538.s1;
                        result += l_538.s0;
                        result += l_539;
                        result += l_542;
                        result += l_543;
                        atomic_add(&p_1768->g_special_values[39 * get_linear_group_id() + 1], result);
                    }
                    else
                    { /* block id: 260 */
                        (1 + 1);
                    }
                    return l_544[0];
                }
                if (p_1768->g_545)
                    break;
                (*l_574) &= ((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((p_97 & ((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(l_554.xzwyzxwyywyxyxzy)).s7, (((~(((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(p_98, (safe_unary_minus_func_uint8_t_u(((safe_mul_func_int8_t_s_s((((l_562 = l_353) == &p_1768->g_237) , (((0x0226BF88C2959F75L == (((l_563 != (void*)0) , &p_1768->g_138) == ((*l_572) = ((((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s((p_1768->g_207[1] = p_97), l_569)) > p_1768->g_140), 7)) ^ p_98) < l_570) , l_571)))) & p_98) < 0x13C9L)), (*l_151))) , 0x2DL))))), 3)) , l_573) , l_573)) | (*p_1768->g_526)) < p_97))) > 0UL)), 5)), 6)), p_98)) , 1L);
                l_592 &= (safe_mod_func_int32_t_s_s((*l_574), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 8))(0UL, ((VECTOR(uint16_t, 2))(p_1768->g_577.zx)), 1UL, 0UL, (l_573 , (((*l_590) = (((1L < (safe_mod_func_uint16_t_u_u((p_1768->g_580 , p_1768->g_163.s6), (~((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((+p_98), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_585.zzyw)), ((VECTOR(int8_t, 2))(0x76L, 0x44L)), 0x7DL, 0L)).s0)), (safe_mul_func_int16_t_s_s(((*l_151) ^ (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(254UL, 0x78L)).xxxyyyxx)).s4 ^ (safe_div_func_uint64_t_u_u((18446744073709551615UL == (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(65527UL, 65534UL, ((VECTOR(uint16_t, 2))(0xF611L, 0x15B8L)), 0x65E8L, ((*l_574) | p_99), 0xB3E2L, 0x5A76L)).lo)).w , 0x57D62924DAF0A991L)), 18446744073709551615UL)))), p_97)))) && FAKE_DIVERGE(p_1768->global_1_offset, get_global_id(1), 10)))))) || 6UL) , &p_1768->g_175)) == l_591)), 0xB3C4L, 0xDA18L)).s1506522335016403, ((VECTOR(uint16_t, 16))(0x5E7FL))))).s5f17, ((VECTOR(uint32_t, 4))(0x16147285L)), ((VECTOR(uint32_t, 4))(0xEC389FFEL))))))).even)).yyxyxyyyyyxyxyyy)).sd5)).even));
            }
            else
            { /* block id: 272 */
                p_1768->g_527 = &l_125[0];
            }
            if ((atomic_inc(&p_1768->g_atomic_input[39 * get_linear_group_id() + 5]) == 3))
            { /* block id: 276 */
                int32_t l_593 = 8L;
                int32_t l_619 = 0x03207B72L;
                uint16_t l_620 = 65526UL;
                VECTOR(int32_t, 8) l_621 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x452FE0D4L), 0x452FE0D4L), 0x452FE0D4L, 8L, 0x452FE0D4L);
                VECTOR(int16_t, 4) l_622 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-6L)), (-6L));
                int32_t l_623 = 0x3A5A23F0L;
                int32_t l_624 = 0x1560BFD6L;
                uint32_t l_625 = 4294967288UL;
                int16_t l_626[2];
                int32_t *l_627 = &l_593;
                int i;
                for (i = 0; i < 2; i++)
                    l_626[i] = 1L;
                for (l_593 = 27; (l_593 >= (-26)); l_593 = safe_sub_func_int8_t_s_s(l_593, 3))
                { /* block id: 279 */
                    int32_t *l_596[9];
                    int32_t l_598 = 0x4CBF1A61L;
                    int32_t *l_597[1];
                    uint32_t l_599[9][3][2] = {{{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L}},{{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L}},{{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L}},{{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L}},{{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L}},{{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L}},{{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L}},{{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L}},{{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L},{4294967288UL,0xC635A826L}}};
                    int16_t l_600 = 1L;
                    int64_t l_614 = 0x4623FE8689FB88CFL;
                    int8_t l_615[10][2][1] = {{{0x58L},{0x58L}},{{0x58L},{0x58L}},{{0x58L},{0x58L}},{{0x58L},{0x58L}},{{0x58L},{0x58L}},{{0x58L},{0x58L}},{{0x58L},{0x58L}},{{0x58L},{0x58L}},{{0x58L},{0x58L}},{{0x58L},{0x58L}}};
                    uint8_t l_616 = 7UL;
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                        l_596[i] = (void*)0;
                    for (i = 0; i < 1; i++)
                        l_597[i] = &l_598;
                    l_597[0] = l_596[2];
                    l_600 ^= l_599[6][0][1];
                    for (l_600 = 0; (l_600 != 11); ++l_600)
                    { /* block id: 284 */
                        int8_t l_603 = 0x26L;
                        uint32_t l_604 = 1UL;
                        int8_t **l_607 = (void*)0;
                        uint32_t l_608[3];
                        VECTOR(int32_t, 2) l_611 = (VECTOR(int32_t, 2))(0x1508FB88L, 0x5D469E68L);
                        uint8_t l_612 = 0x9DL;
                        int8_t l_613 = 1L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_608[i] = 4294967295UL;
                        ++l_604;
                        l_607 = (void*)0;
                        l_608[2]--;
                        l_613 &= (l_612 |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_611.yyxxyxyxyyxxxyyx)).s3d)).odd);
                    }
                    l_616--;
                }
                l_620 |= l_619;
                l_626[0] = (l_625 ^= ((VECTOR(int32_t, 8))(0x4A439C6DL, 0x6A7D805CL, (-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_621.s7557)).odd)), (l_624 = (l_622.w , l_623)), 0x0369F945L, 0x6C7B048EL)).s2);
                l_627 = l_627;
                unsigned int result = 0;
                result += l_593;
                result += l_619;
                result += l_620;
                result += l_621.s7;
                result += l_621.s6;
                result += l_621.s5;
                result += l_621.s4;
                result += l_621.s3;
                result += l_621.s2;
                result += l_621.s1;
                result += l_621.s0;
                result += l_622.w;
                result += l_622.z;
                result += l_622.y;
                result += l_622.x;
                result += l_623;
                result += l_624;
                result += l_625;
                int l_626_i0;
                for (l_626_i0 = 0; l_626_i0 < 2; l_626_i0++) {
                    result += l_626[l_626_i0];
                }
                atomic_add(&p_1768->g_special_values[39 * get_linear_group_id() + 5], result);
            }
            else
            { /* block id: 298 */
                (1 + 1);
            }
            (*l_151) = ((l_573 = p_97) && p_98);
            return &p_1768->g_171;
        }
    }
    (*l_646) = (safe_sub_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((&l_147 == ((safe_add_func_int16_t_s_s(((*l_151) = 0x3BAAL), (safe_mod_func_int8_t_s_s(((*l_636) = ((*l_130) &= (-1L))), FAKE_DIVERGE(p_1768->group_2_offset, get_group_id(2), 10))))) , &p_1768->g_214[4])), ((((*l_638) = l_637) , (p_97 = l_570)) & (p_1768->g_639.y = ((VECTOR(int8_t, 2))(p_1768->g_639.yz)).hi)))) , (p_99 | (safe_add_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(((p_98 , (safe_rshift_func_uint16_t_u_u(((((**l_523) = (&l_135 != (void*)0)) & p_99) || (*l_151)), (*l_151)))) && 0x3228L), p_97)) || p_99), (*l_151))))), p_98));
    if ((atomic_inc(&p_1768->g_atomic_input[39 * get_linear_group_id() + 11]) == 2))
    { /* block id: 315 */
        int32_t l_647 = 0x2D3E2757L;
        for (l_647 = 14; (l_647 != 18); l_647++)
        { /* block id: 318 */
            int32_t l_650 = 8L;
            for (l_650 = 6; (l_650 < 20); l_650 = safe_add_func_uint8_t_u_u(l_650, 6))
            { /* block id: 321 */
                int32_t l_653 = (-1L);
                int64_t l_673 = (-1L);
                int16_t l_674 = 3L;
                int32_t *l_675 = &l_653;
                int32_t *l_676 = &l_653;
                int32_t *l_677 = &l_653;
                int32_t *l_678 = &l_653;
                int32_t *l_679 = &l_653;
                int32_t *l_680 = &l_653;
                for (l_653 = (-2); (l_653 < 20); ++l_653)
                { /* block id: 324 */
                    uint32_t l_656 = 0x1095A890L;
                    int8_t l_659[7] = {0x27L,0x44L,0x27L,0x27L,0x44L,0x27L,0x27L};
                    int64_t l_660 = (-2L);
                    uint64_t l_661[2][10][7] = {{{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L}},{{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L},{0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L,0xF583B34DD0406534L}}};
                    uint8_t l_662[3][3][8] = {{{0x45L,0xCEL,0xCEL,0x45L,1UL,0xDEL,0xDEL,1UL},{0x45L,0xCEL,0xCEL,0x45L,1UL,0xDEL,0xDEL,1UL},{0x45L,0xCEL,0xCEL,0x45L,1UL,0xDEL,0xDEL,1UL}},{{0x45L,0xCEL,0xCEL,0x45L,1UL,0xDEL,0xDEL,1UL},{0x45L,0xCEL,0xCEL,0x45L,1UL,0xDEL,0xDEL,1UL},{0x45L,0xCEL,0xCEL,0x45L,1UL,0xDEL,0xDEL,1UL}},{{0x45L,0xCEL,0xCEL,0x45L,1UL,0xDEL,0xDEL,1UL},{0x45L,0xCEL,0xCEL,0x45L,1UL,0xDEL,0xDEL,1UL},{0x45L,0xCEL,0xCEL,0x45L,1UL,0xDEL,0xDEL,1UL}}};
                    int16_t l_663 = (-1L);
                    int i, j, k;
                    l_656++;
                    if ((l_663 |= (((l_660 |= l_659[0]) , 0x5AB0049BL) , ((l_661[1][3][6] , l_662[1][1][4]) , 0L))))
                    { /* block id: 328 */
                        int16_t l_664 = (-1L);
                        int16_t l_665 = (-7L);
                        uint16_t l_666 = 0xC24AL;
                        uint32_t l_669 = 0xE96267D3L;
                        uint16_t l_670 = 0xA70AL;
                        l_666++;
                        l_670 |= l_669;
                    }
                    else
                    { /* block id: 331 */
                        int8_t l_671 = 1L;
                        uint16_t l_672 = 1UL;
                        l_672 = l_671;
                    }
                }
                l_677 = (l_676 = ((l_674 = (l_673 , 8L)) , l_675));
                l_680 = (l_679 = l_678);
                for (l_673 = 0; (l_673 <= 22); ++l_673)
                { /* block id: 342 */
                    VECTOR(int32_t, 8) l_683 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0L), 0L), 0L, (-2L), 0L);
                    VECTOR(int32_t, 16) l_684 = (VECTOR(int32_t, 16))(0x51F7035BL, (VECTOR(int32_t, 4))(0x51F7035BL, (VECTOR(int32_t, 2))(0x51F7035BL, 0x3499B8F0L), 0x3499B8F0L), 0x3499B8F0L, 0x51F7035BL, 0x3499B8F0L, (VECTOR(int32_t, 2))(0x51F7035BL, 0x3499B8F0L), (VECTOR(int32_t, 2))(0x51F7035BL, 0x3499B8F0L), 0x51F7035BL, 0x3499B8F0L, 0x51F7035BL, 0x3499B8F0L);
                    uint32_t l_685 = 0x32AB479FL;
                    VECTOR(int32_t, 16) l_686 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0F1AF051L), 0x0F1AF051L), 0x0F1AF051L, (-1L), 0x0F1AF051L, (VECTOR(int32_t, 2))((-1L), 0x0F1AF051L), (VECTOR(int32_t, 2))((-1L), 0x0F1AF051L), (-1L), 0x0F1AF051L, (-1L), 0x0F1AF051L);
                    VECTOR(int32_t, 16) l_687 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                    VECTOR(int32_t, 16) l_688 = (VECTOR(int32_t, 16))(0x7534720BL, (VECTOR(int32_t, 4))(0x7534720BL, (VECTOR(int32_t, 2))(0x7534720BL, 0x0FBDE9DDL), 0x0FBDE9DDL), 0x0FBDE9DDL, 0x7534720BL, 0x0FBDE9DDL, (VECTOR(int32_t, 2))(0x7534720BL, 0x0FBDE9DDL), (VECTOR(int32_t, 2))(0x7534720BL, 0x0FBDE9DDL), 0x7534720BL, 0x0FBDE9DDL, 0x7534720BL, 0x0FBDE9DDL);
                    VECTOR(int32_t, 4) l_689 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, (-1L)), (-1L));
                    VECTOR(int32_t, 2) l_690 = (VECTOR(int32_t, 2))(0x551D13A1L, (-7L));
                    VECTOR(int32_t, 16) l_691 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4153E28CL), 0x4153E28CL), 0x4153E28CL, 0L, 0x4153E28CL, (VECTOR(int32_t, 2))(0L, 0x4153E28CL), (VECTOR(int32_t, 2))(0L, 0x4153E28CL), 0L, 0x4153E28CL, 0L, 0x4153E28CL);
                    VECTOR(int32_t, 8) l_692 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x3E196142L), 0x3E196142L), 0x3E196142L, 1L, 0x3E196142L);
                    uint16_t l_693 = 65531UL;
                    VECTOR(int32_t, 2) l_694 = (VECTOR(int32_t, 2))(6L, (-1L));
                    VECTOR(int32_t, 4) l_695 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L);
                    int16_t l_696[4] = {0x2289L,0x2289L,0x2289L,0x2289L};
                    uint64_t l_697 = 9UL;
                    VECTOR(int32_t, 2) l_698 = (VECTOR(int32_t, 2))(1L, 0L);
                    VECTOR(int32_t, 4) l_699 = (VECTOR(int32_t, 4))(0x6577C61FL, (VECTOR(int32_t, 2))(0x6577C61FL, 0x453C1CD8L), 0x453C1CD8L);
                    VECTOR(int32_t, 8) l_700 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0L), 0L), 0L, (-6L), 0L);
                    VECTOR(int32_t, 8) l_701 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x024416A9L), 0x024416A9L), 0x024416A9L, (-6L), 0x024416A9L);
                    VECTOR(int32_t, 8) l_702 = (VECTOR(int32_t, 8))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 1L), 1L), 1L, (-7L), 1L);
                    uint16_t l_703 = 0UL;
                    VECTOR(int32_t, 8) l_704 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 1L), 1L), 1L, (-2L), 1L);
                    VECTOR(int32_t, 4) l_705 = (VECTOR(int32_t, 4))(0x00E9D7D5L, (VECTOR(int32_t, 2))(0x00E9D7D5L, 0x3D2D8838L), 0x3D2D8838L);
                    VECTOR(int32_t, 4) l_706 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x39BF8FE4L), 0x39BF8FE4L);
                    VECTOR(int32_t, 16) l_707 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int32_t, 2))(1L, (-1L)), (VECTOR(int32_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
                    VECTOR(int32_t, 4) l_708 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 7L), 7L);
                    VECTOR(int64_t, 16) l_709 = (VECTOR(int64_t, 16))(0x2990FE3A6DB89BA5L, (VECTOR(int64_t, 4))(0x2990FE3A6DB89BA5L, (VECTOR(int64_t, 2))(0x2990FE3A6DB89BA5L, 0x2C165B111F798F12L), 0x2C165B111F798F12L), 0x2C165B111F798F12L, 0x2990FE3A6DB89BA5L, 0x2C165B111F798F12L, (VECTOR(int64_t, 2))(0x2990FE3A6DB89BA5L, 0x2C165B111F798F12L), (VECTOR(int64_t, 2))(0x2990FE3A6DB89BA5L, 0x2C165B111F798F12L), 0x2990FE3A6DB89BA5L, 0x2C165B111F798F12L, 0x2990FE3A6DB89BA5L, 0x2C165B111F798F12L);
                    uint32_t l_710 = 2UL;
                    int32_t l_711 = 8L;
                    int32_t l_712 = 0x4590DDAAL;
                    uint32_t l_713 = 0UL;
                    uint8_t l_714 = 0x5DL;
                    int i;
                    l_714 = ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(l_683.s22)), ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(l_684.sfc)).yxyyxxyyxxxyxxxx, ((VECTOR(int32_t, 2))(0x365C9252L, 0x0C9D603EL)).xyxyyxyxyxyyyyyy))).scef8, ((VECTOR(int32_t, 8))(0x3EA57D84L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_685, (-1L), 0x06A1BACAL, 0L)))).odd)), (-1L), 0x7B2FBAF7L, (((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_686.s08127225b9827f73)).sdb, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_687.sdef8277f3863b2ba)).s8, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_688.s75cd51de)).s51)), 9L)).odd, ((VECTOR(int32_t, 16))(l_689.xyywxzzwxzxxxxyy)).s33))).xyxx, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_690.yxyy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(l_691.s5d)).xxyyyxyyyyxxyyyx))).s13, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x3B39B4C6L, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(l_692.s6655136346670750)).sf94e, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_693, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x68C0B2CEL, 0x2E565792L, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(l_694.xxxyyyyxxyxyxxxx)).even, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(l_695.zz)).xyyy, (int32_t)l_696[1]))).lo, (int32_t)(l_684.sd = l_697)))).xxyxxxxy, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(l_698.yyxxxyxy)).s0754521344775527, ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x27ACF520L, 0x45277430L)), 0x23B29138L, 3L)).lo)).xyxyxyxyyyyxxyyx)), ((VECTOR(int32_t, 16))(l_699.xyzyxwzzzwyxwxyz)))))))).s35, ((VECTOR(int32_t, 16))(l_700.s2413003374066260)).s00))).yyxxyyxx)))))), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x0C934FDDL, 0x7266CB8EL)), 0x1DCE8073L, (-9L))), ((VECTOR(int32_t, 2))(l_701.s03)).yxxx))), 1L, 0x33CF847CL)).s358f)).wxxywwwz))), 0L, 0x2E915F63L, (-1L), ((VECTOR(int32_t, 4))(l_702.s2054)))).sc, l_703, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(l_704.s6723)).wwzywzyyzzxxxxwz, ((VECTOR(int32_t, 16))(l_705.xzwzwyzyxwxwzwzw))))).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0x65E6440CL, 1L)).xxxx, ((VECTOR(int32_t, 2))(0x5FCF8119L, 6L)).xxyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_706.yzwyyxyxzzyxyxyx)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x19F8E531L, 3L)), ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(l_707.sa377a8b4)).lo, ((VECTOR(int32_t, 2))(0x2E4C4BF1L, 0x6B986574L)).xxxx))), 1L, (-1L))).s1253432170260605, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(8L, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x05AC19FFL, (-1L))))), ((VECTOR(int32_t, 8))(l_708.xzywzxyz)).s51))), 0L)).xyyyxxywyzzyxzyx))))).even)).odd))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((*l_680) = (((VECTOR(int64_t, 16))(l_709.s045d35f7422ff7d5)).sb , (l_710 , 0x3D8D5639L))), 0x45030938L, 1L, 9L))))))))).s3021511420501261, ((VECTOR(int32_t, 16))(7L))))).sa8)).yyyyyxyxxxyyyxxx, ((VECTOR(int32_t, 16))(0x22BA6DDAL))))).sa9e7, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(1L))))), 0x46B45380L, (-1L))).lo, ((VECTOR(int32_t, 4))(0x14AEBBABL)), ((VECTOR(int32_t, 4))(0x52BF5D88L)))))))).x, 0x76CA4CFFL, 1L)))).odd))).xyyyyxxx)), ((VECTOR(int32_t, 4))((-1L))))).sb9a7, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))((-4L))))))))).ywxwxxwz))).s5 , 0x17B786F0L), 0x2E5AB8D0L, 0x39C3F834L)).odd))), (int32_t)l_711, (int32_t)l_712))).zzywxywz, ((VECTOR(int32_t, 8))((-10L)))))).s35))).xxyyyyxxyyxyyxyy, (int32_t)l_713))).sf;
                }
            }
        }
        unsigned int result = 0;
        result += l_647;
        atomic_add(&p_1768->g_special_values[39 * get_linear_group_id() + 11], result);
    }
    else
    { /* block id: 349 */
        (1 + 1);
    }
    return (*l_353);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[39];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 39; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[39];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 39; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[9];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 9; i++)
            l_comm_values[i] = 1;
    struct S2 c_1769;
    struct S2* p_1768 = &c_1769;
    struct S2 c_1770 = {
        {(-10L),0x4EL,(-10L),(-10L),0x4EL,(-10L)}, // p_1768->g_11
        1L, // p_1768->g_60
        {{0x5F6465DCL,1L,0x6429369BL,0x3D89D4EDL,0x6429369BL,1L},{0x5F6465DCL,1L,0x6429369BL,0x3D89D4EDL,0x6429369BL,1L},{0x5F6465DCL,1L,0x6429369BL,0x3D89D4EDL,0x6429369BL,1L},{0x5F6465DCL,1L,0x6429369BL,0x3D89D4EDL,0x6429369BL,1L},{0x5F6465DCL,1L,0x6429369BL,0x3D89D4EDL,0x6429369BL,1L},{0x5F6465DCL,1L,0x6429369BL,0x3D89D4EDL,0x6429369BL,1L},{0x5F6465DCL,1L,0x6429369BL,0x3D89D4EDL,0x6429369BL,1L},{0x5F6465DCL,1L,0x6429369BL,0x3D89D4EDL,0x6429369BL,1L},{0x5F6465DCL,1L,0x6429369BL,0x3D89D4EDL,0x6429369BL,1L},{0x5F6465DCL,1L,0x6429369BL,0x3D89D4EDL,0x6429369BL,1L}}, // p_1768->g_63
        0L, // p_1768->g_64
        0x5B905804L, // p_1768->g_65
        {{0x58D7FFC9L,0x58D7FFC9L,0x58D7FFC9L},{0x58D7FFC9L,0x58D7FFC9L,0x58D7FFC9L},{0x58D7FFC9L,0x58D7FFC9L,0x58D7FFC9L},{0x58D7FFC9L,0x58D7FFC9L,0x58D7FFC9L},{0x58D7FFC9L,0x58D7FFC9L,0x58D7FFC9L},{0x58D7FFC9L,0x58D7FFC9L,0x58D7FFC9L}}, // p_1768->g_66
        {{{0L,0L,0L,0L,0L}}}, // p_1768->g_67
        (void*)0, // p_1768->g_72
        65526UL, // p_1768->g_75
        {{&p_1768->g_60,&p_1768->g_67[0][0][0],&p_1768->g_67[0][0][0],&p_1768->g_60,&p_1768->g_60,&p_1768->g_67[0][0][0],&p_1768->g_67[0][0][0],&p_1768->g_60,&p_1768->g_60},{&p_1768->g_60,&p_1768->g_67[0][0][0],&p_1768->g_67[0][0][0],&p_1768->g_60,&p_1768->g_60,&p_1768->g_67[0][0][0],&p_1768->g_67[0][0][0],&p_1768->g_60,&p_1768->g_60},{&p_1768->g_60,&p_1768->g_67[0][0][0],&p_1768->g_67[0][0][0],&p_1768->g_60,&p_1768->g_60,&p_1768->g_67[0][0][0],&p_1768->g_67[0][0][0],&p_1768->g_60,&p_1768->g_60}}, // p_1768->g_95
        255UL, // p_1768->g_104
        1UL, // p_1768->g_108
        {{{0UL,0UL,0x63L},{0UL,0UL,0x63L},{0UL,0UL,0x63L},{0UL,0UL,0x63L},{0UL,0UL,0x63L},{0UL,0UL,0x63L},{0UL,0UL,0x63L},{0UL,0UL,0x63L},{0UL,0UL,0x63L},{0UL,0UL,0x63L}}}, // p_1768->g_112
        (-1L), // p_1768->g_116
        (VECTOR(int8_t, 16))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x5EL), 0x5EL), 0x5EL, (-5L), 0x5EL, (VECTOR(int8_t, 2))((-5L), 0x5EL), (VECTOR(int8_t, 2))((-5L), 0x5EL), (-5L), 0x5EL, (-5L), 0x5EL), // p_1768->g_128
        &p_1768->g_108, // p_1768->g_138
        0x5B93L, // p_1768->g_140
        (-3L), // p_1768->g_150
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL), // p_1768->g_163
        {0x4E767B04L}, // p_1768->g_171
        &p_1768->g_171, // p_1768->g_174
        (void*)0, // p_1768->g_175
        5UL, // p_1768->g_192
        {0x26B6L,0x26B6L,0x26B6L,0x26B6L,0x26B6L}, // p_1768->g_207
        &p_1768->g_72, // p_1768->g_208
        {0x92B8C824L}, // p_1768->g_212
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1768->g_214
        &p_1768->g_214[4], // p_1768->g_213
        &p_1768->g_171, // p_1768->g_237
        (void*)0, // p_1768->g_244
        &p_1768->g_72, // p_1768->g_245
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), // p_1768->g_266
        0x817985A66BE07890L, // p_1768->g_283
        0UL, // p_1768->g_295
        8UL, // p_1768->g_328
        0xEE8E4BB47E391415L, // p_1768->g_330
        (VECTOR(uint32_t, 8))(0x2F1986F1L, (VECTOR(uint32_t, 4))(0x2F1986F1L, (VECTOR(uint32_t, 2))(0x2F1986F1L, 0x17DAAB05L), 0x17DAAB05L), 0x17DAAB05L, 0x2F1986F1L, 0x17DAAB05L), // p_1768->g_347
        (VECTOR(uint8_t, 2))(0x50L, 0x42L), // p_1768->g_350
        0x0EE9FE0C1EAA6C85L, // p_1768->g_357
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 18446744073709551615UL, 18446744073709551614UL), // p_1768->g_378
        0x7264B72DL, // p_1768->g_395
        &p_1768->g_330, // p_1768->g_526
        &p_1768->g_526, // p_1768->g_525
        {6L,6L,6L}, // p_1768->g_528
        &p_1768->g_528[2], // p_1768->g_527
        0L, // p_1768->g_545
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 7UL), 7UL), // p_1768->g_577
        {0x31E40757L}, // p_1768->g_580
        (VECTOR(int8_t, 4))(0x4BL, (VECTOR(int8_t, 2))(0x4BL, 1L), 1L), // p_1768->g_639
        (void*)0, // p_1768->g_720
        (VECTOR(uint16_t, 8))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0xC504L), 0xC504L), 0xC504L, 65530UL, 0xC504L), // p_1768->g_733
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x38L), 0x38L), 0x38L, 1L, 0x38L), // p_1768->g_750
        (VECTOR(int8_t, 2))(0x7AL, 8L), // p_1768->g_754
        (VECTOR(uint16_t, 2))(0x636DL, 0xEF30L), // p_1768->g_759
        {&p_1768->g_95[0][2],&p_1768->g_95[0][2],&p_1768->g_95[0][2],&p_1768->g_95[0][2]}, // p_1768->g_770
        0xE0C4L, // p_1768->g_775
        (void*)0, // p_1768->g_778
        &p_1768->g_72, // p_1768->g_779
        (VECTOR(int8_t, 4))(0x01L, (VECTOR(int8_t, 2))(0x01L, 0x68L), 0x68L), // p_1768->g_795
        (VECTOR(int64_t, 4))(0x33BD35512A96B1D8L, (VECTOR(int64_t, 2))(0x33BD35512A96B1D8L, 6L), 6L), // p_1768->g_796
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xC4L), 0xC4L), 0xC4L, 0UL, 0xC4L, (VECTOR(uint8_t, 2))(0UL, 0xC4L), (VECTOR(uint8_t, 2))(0UL, 0xC4L), 0UL, 0xC4L, 0UL, 0xC4L), // p_1768->g_914
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xBBF4L), 0xBBF4L), // p_1768->g_992
        (void*)0, // p_1768->g_995
        0xC6638C01L, // p_1768->g_1010
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x7DCCL), 0x7DCCL), // p_1768->g_1018
        (VECTOR(int32_t, 8))(0x10219946L, (VECTOR(int32_t, 4))(0x10219946L, (VECTOR(int32_t, 2))(0x10219946L, 0x3B298C69L), 0x3B298C69L), 0x3B298C69L, 0x10219946L, 0x3B298C69L), // p_1768->g_1028
        (void*)0, // p_1768->g_1083
        (void*)0, // p_1768->g_1085
        {&p_1768->g_95[2][2],&p_1768->g_95[2][2],&p_1768->g_95[2][2],&p_1768->g_95[2][2],&p_1768->g_95[2][2],&p_1768->g_95[2][2],&p_1768->g_95[2][2],&p_1768->g_95[2][2],&p_1768->g_95[2][2]}, // p_1768->g_1086
        (void*)0, // p_1768->g_1087
        {{{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]}},{{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]}},{{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]}},{{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]},{&p_1768->g_95[1][7]}}}, // p_1768->g_1088
        &p_1768->g_95[1][7], // p_1768->g_1089
        8UL, // p_1768->g_1104
        &p_1768->g_1104, // p_1768->g_1103
        &p_1768->g_1103, // p_1768->g_1102
        {0x1C457CE7L}, // p_1768->g_1209
        (VECTOR(int16_t, 8))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x0E91L), 0x0E91L), 0x0E91L, (-7L), 0x0E91L), // p_1768->g_1230
        &p_1768->g_138, // p_1768->g_1254
        &p_1768->g_1254, // p_1768->g_1253
        (void*)0, // p_1768->g_1255
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1768->g_1264
        {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}, // p_1768->g_1306
        &p_1768->g_1306[2][0], // p_1768->g_1305
        &p_1768->g_1305, // p_1768->g_1304
        {{&p_1768->g_72,&p_1768->g_72,(void*)0,(void*)0,&p_1768->g_72,(void*)0,(void*)0},{&p_1768->g_72,&p_1768->g_72,(void*)0,(void*)0,&p_1768->g_72,(void*)0,(void*)0},{&p_1768->g_72,&p_1768->g_72,(void*)0,(void*)0,&p_1768->g_72,(void*)0,(void*)0},{&p_1768->g_72,&p_1768->g_72,(void*)0,(void*)0,&p_1768->g_72,(void*)0,(void*)0}}, // p_1768->g_1339
        {&p_1768->g_1339[1][5],&p_1768->g_1339[1][5],&p_1768->g_1339[1][5],&p_1768->g_1339[1][5],&p_1768->g_1339[1][5],&p_1768->g_1339[1][5],&p_1768->g_1339[1][5],&p_1768->g_1339[1][5],&p_1768->g_1339[1][5],&p_1768->g_1339[1][5]}, // p_1768->g_1338
        &p_1768->g_1338[7], // p_1768->g_1337
        (-1L), // p_1768->g_1373
        {0xA94268EEL}, // p_1768->g_1378
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), 65535UL, 0UL, 65535UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), (VECTOR(uint16_t, 2))(0UL, 65535UL), 0UL, 65535UL, 0UL, 65535UL), // p_1768->g_1394
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL), // p_1768->g_1395
        (VECTOR(uint32_t, 2))(0UL, 0x0234FDE0L), // p_1768->g_1404
        (VECTOR(uint32_t, 4))(0x6CB657E6L, (VECTOR(uint32_t, 2))(0x6CB657E6L, 0xD1994CB5L), 0xD1994CB5L), // p_1768->g_1405
        &p_1768->g_95[0][4], // p_1768->g_1412
        (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 6L), 6L), // p_1768->g_1414
        (VECTOR(int8_t, 16))(0x0CL, (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, 0x52L), 0x52L), 0x52L, 0x0CL, 0x52L, (VECTOR(int8_t, 2))(0x0CL, 0x52L), (VECTOR(int8_t, 2))(0x0CL, 0x52L), 0x0CL, 0x52L, 0x0CL, 0x52L), // p_1768->g_1415
        (VECTOR(int16_t, 2))((-1L), 1L), // p_1768->g_1431
        (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, 0L), 0L), // p_1768->g_1432
        (VECTOR(int8_t, 2))(1L, 0x48L), // p_1768->g_1433
        (VECTOR(uint32_t, 16))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0x32AD2C70L), 0x32AD2C70L), 0x32AD2C70L, 4UL, 0x32AD2C70L, (VECTOR(uint32_t, 2))(4UL, 0x32AD2C70L), (VECTOR(uint32_t, 2))(4UL, 0x32AD2C70L), 4UL, 0x32AD2C70L, 4UL, 0x32AD2C70L), // p_1768->g_1447
        &p_1768->g_328, // p_1768->g_1459
        &p_1768->g_1459, // p_1768->g_1458
        (VECTOR(int32_t, 2))(0L, 0x24ECABCBL), // p_1768->g_1485
        (VECTOR(int16_t, 4))(0x7F67L, (VECTOR(int16_t, 2))(0x7F67L, 1L), 1L), // p_1768->g_1498
        (VECTOR(uint64_t, 16))(0x4D941615C956AE85L, (VECTOR(uint64_t, 4))(0x4D941615C956AE85L, (VECTOR(uint64_t, 2))(0x4D941615C956AE85L, 0x503494D7B4C2968AL), 0x503494D7B4C2968AL), 0x503494D7B4C2968AL, 0x4D941615C956AE85L, 0x503494D7B4C2968AL, (VECTOR(uint64_t, 2))(0x4D941615C956AE85L, 0x503494D7B4C2968AL), (VECTOR(uint64_t, 2))(0x4D941615C956AE85L, 0x503494D7B4C2968AL), 0x4D941615C956AE85L, 0x503494D7B4C2968AL, 0x4D941615C956AE85L, 0x503494D7B4C2968AL), // p_1768->g_1529
        (VECTOR(uint16_t, 16))(0x68FFL, (VECTOR(uint16_t, 4))(0x68FFL, (VECTOR(uint16_t, 2))(0x68FFL, 0xAF42L), 0xAF42L), 0xAF42L, 0x68FFL, 0xAF42L, (VECTOR(uint16_t, 2))(0x68FFL, 0xAF42L), (VECTOR(uint16_t, 2))(0x68FFL, 0xAF42L), 0x68FFL, 0xAF42L, 0x68FFL, 0xAF42L), // p_1768->g_1559
        (VECTOR(int32_t, 2))(0x033837AEL, 0x6DC17F04L), // p_1768->g_1579
        (void*)0, // p_1768->g_1594
        (VECTOR(uint16_t, 16))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0xFEDBL), 0xFEDBL), 0xFEDBL, 65529UL, 0xFEDBL, (VECTOR(uint16_t, 2))(65529UL, 0xFEDBL), (VECTOR(uint16_t, 2))(65529UL, 0xFEDBL), 65529UL, 0xFEDBL, 65529UL, 0xFEDBL), // p_1768->g_1599
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x19L), 0x19L), 0x19L, (-1L), 0x19L, (VECTOR(int8_t, 2))((-1L), 0x19L), (VECTOR(int8_t, 2))((-1L), 0x19L), (-1L), 0x19L, (-1L), 0x19L), // p_1768->g_1608
        (VECTOR(uint16_t, 2))(65535UL, 1UL), // p_1768->g_1615
        (VECTOR(uint16_t, 2))(5UL, 0UL), // p_1768->g_1617
        (VECTOR(int8_t, 4))(0x78L, (VECTOR(int8_t, 2))(0x78L, 1L), 1L), // p_1768->g_1624
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L)), // p_1768->g_1632
        &p_1768->g_1458, // p_1768->g_1636
        (VECTOR(uint16_t, 2))(1UL, 65530UL), // p_1768->g_1644
        (VECTOR(uint16_t, 2))(0UL, 1UL), // p_1768->g_1645
        (VECTOR(uint64_t, 8))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0UL), 0UL), 0UL, 18446744073709551606UL, 0UL), // p_1768->g_1657
        (VECTOR(uint32_t, 2))(4294967287UL, 0UL), // p_1768->g_1689
        (VECTOR(uint32_t, 2))(0xE27A2ACFL, 4294967295UL), // p_1768->g_1750
        0x5122E7B9L, // p_1768->g_1760
        0, // p_1768->v_collective
        sequence_input[get_global_id(0)], // p_1768->global_0_offset
        sequence_input[get_global_id(1)], // p_1768->global_1_offset
        sequence_input[get_global_id(2)], // p_1768->global_2_offset
        sequence_input[get_local_id(0)], // p_1768->local_0_offset
        sequence_input[get_local_id(1)], // p_1768->local_1_offset
        sequence_input[get_local_id(2)], // p_1768->local_2_offset
        sequence_input[get_group_id(0)], // p_1768->group_0_offset
        sequence_input[get_group_id(1)], // p_1768->group_1_offset
        sequence_input[get_group_id(2)], // p_1768->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 9)), permutations[0][get_linear_local_id()])), // p_1768->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1769 = c_1770;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1768);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1768->g_11[i], "p_1768->g_11[i]", print_hash_value);

    }
    transparent_crc(p_1768->g_60, "p_1768->g_60", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1768->g_63[i][j], "p_1768->g_63[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1768->g_64, "p_1768->g_64", print_hash_value);
    transparent_crc(p_1768->g_65, "p_1768->g_65", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1768->g_66[i][j], "p_1768->g_66[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1768->g_67[i][j][k], "p_1768->g_67[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1768->g_75, "p_1768->g_75", print_hash_value);
    transparent_crc(p_1768->g_104, "p_1768->g_104", print_hash_value);
    transparent_crc(p_1768->g_108, "p_1768->g_108", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1768->g_112[i][j][k], "p_1768->g_112[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1768->g_116, "p_1768->g_116", print_hash_value);
    transparent_crc(p_1768->g_128.s0, "p_1768->g_128.s0", print_hash_value);
    transparent_crc(p_1768->g_128.s1, "p_1768->g_128.s1", print_hash_value);
    transparent_crc(p_1768->g_128.s2, "p_1768->g_128.s2", print_hash_value);
    transparent_crc(p_1768->g_128.s3, "p_1768->g_128.s3", print_hash_value);
    transparent_crc(p_1768->g_128.s4, "p_1768->g_128.s4", print_hash_value);
    transparent_crc(p_1768->g_128.s5, "p_1768->g_128.s5", print_hash_value);
    transparent_crc(p_1768->g_128.s6, "p_1768->g_128.s6", print_hash_value);
    transparent_crc(p_1768->g_128.s7, "p_1768->g_128.s7", print_hash_value);
    transparent_crc(p_1768->g_128.s8, "p_1768->g_128.s8", print_hash_value);
    transparent_crc(p_1768->g_128.s9, "p_1768->g_128.s9", print_hash_value);
    transparent_crc(p_1768->g_128.sa, "p_1768->g_128.sa", print_hash_value);
    transparent_crc(p_1768->g_128.sb, "p_1768->g_128.sb", print_hash_value);
    transparent_crc(p_1768->g_128.sc, "p_1768->g_128.sc", print_hash_value);
    transparent_crc(p_1768->g_128.sd, "p_1768->g_128.sd", print_hash_value);
    transparent_crc(p_1768->g_128.se, "p_1768->g_128.se", print_hash_value);
    transparent_crc(p_1768->g_128.sf, "p_1768->g_128.sf", print_hash_value);
    transparent_crc(p_1768->g_140, "p_1768->g_140", print_hash_value);
    transparent_crc(p_1768->g_150, "p_1768->g_150", print_hash_value);
    transparent_crc(p_1768->g_163.s0, "p_1768->g_163.s0", print_hash_value);
    transparent_crc(p_1768->g_163.s1, "p_1768->g_163.s1", print_hash_value);
    transparent_crc(p_1768->g_163.s2, "p_1768->g_163.s2", print_hash_value);
    transparent_crc(p_1768->g_163.s3, "p_1768->g_163.s3", print_hash_value);
    transparent_crc(p_1768->g_163.s4, "p_1768->g_163.s4", print_hash_value);
    transparent_crc(p_1768->g_163.s5, "p_1768->g_163.s5", print_hash_value);
    transparent_crc(p_1768->g_163.s6, "p_1768->g_163.s6", print_hash_value);
    transparent_crc(p_1768->g_163.s7, "p_1768->g_163.s7", print_hash_value);
    transparent_crc(p_1768->g_171.f0, "p_1768->g_171.f0", print_hash_value);
    transparent_crc(p_1768->g_192, "p_1768->g_192", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1768->g_207[i], "p_1768->g_207[i]", print_hash_value);

    }
    transparent_crc(p_1768->g_212.f0, "p_1768->g_212.f0", print_hash_value);
    transparent_crc(p_1768->g_266.x, "p_1768->g_266.x", print_hash_value);
    transparent_crc(p_1768->g_266.y, "p_1768->g_266.y", print_hash_value);
    transparent_crc(p_1768->g_266.z, "p_1768->g_266.z", print_hash_value);
    transparent_crc(p_1768->g_266.w, "p_1768->g_266.w", print_hash_value);
    transparent_crc(p_1768->g_283, "p_1768->g_283", print_hash_value);
    transparent_crc(p_1768->g_295, "p_1768->g_295", print_hash_value);
    transparent_crc(p_1768->g_328, "p_1768->g_328", print_hash_value);
    transparent_crc(p_1768->g_330, "p_1768->g_330", print_hash_value);
    transparent_crc(p_1768->g_347.s0, "p_1768->g_347.s0", print_hash_value);
    transparent_crc(p_1768->g_347.s1, "p_1768->g_347.s1", print_hash_value);
    transparent_crc(p_1768->g_347.s2, "p_1768->g_347.s2", print_hash_value);
    transparent_crc(p_1768->g_347.s3, "p_1768->g_347.s3", print_hash_value);
    transparent_crc(p_1768->g_347.s4, "p_1768->g_347.s4", print_hash_value);
    transparent_crc(p_1768->g_347.s5, "p_1768->g_347.s5", print_hash_value);
    transparent_crc(p_1768->g_347.s6, "p_1768->g_347.s6", print_hash_value);
    transparent_crc(p_1768->g_347.s7, "p_1768->g_347.s7", print_hash_value);
    transparent_crc(p_1768->g_350.x, "p_1768->g_350.x", print_hash_value);
    transparent_crc(p_1768->g_350.y, "p_1768->g_350.y", print_hash_value);
    transparent_crc(p_1768->g_357, "p_1768->g_357", print_hash_value);
    transparent_crc(p_1768->g_378.s0, "p_1768->g_378.s0", print_hash_value);
    transparent_crc(p_1768->g_378.s1, "p_1768->g_378.s1", print_hash_value);
    transparent_crc(p_1768->g_378.s2, "p_1768->g_378.s2", print_hash_value);
    transparent_crc(p_1768->g_378.s3, "p_1768->g_378.s3", print_hash_value);
    transparent_crc(p_1768->g_378.s4, "p_1768->g_378.s4", print_hash_value);
    transparent_crc(p_1768->g_378.s5, "p_1768->g_378.s5", print_hash_value);
    transparent_crc(p_1768->g_378.s6, "p_1768->g_378.s6", print_hash_value);
    transparent_crc(p_1768->g_378.s7, "p_1768->g_378.s7", print_hash_value);
    transparent_crc(p_1768->g_395, "p_1768->g_395", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1768->g_528[i], "p_1768->g_528[i]", print_hash_value);

    }
    transparent_crc(p_1768->g_545, "p_1768->g_545", print_hash_value);
    transparent_crc(p_1768->g_577.x, "p_1768->g_577.x", print_hash_value);
    transparent_crc(p_1768->g_577.y, "p_1768->g_577.y", print_hash_value);
    transparent_crc(p_1768->g_577.z, "p_1768->g_577.z", print_hash_value);
    transparent_crc(p_1768->g_577.w, "p_1768->g_577.w", print_hash_value);
    transparent_crc(p_1768->g_580.f0, "p_1768->g_580.f0", print_hash_value);
    transparent_crc(p_1768->g_639.x, "p_1768->g_639.x", print_hash_value);
    transparent_crc(p_1768->g_639.y, "p_1768->g_639.y", print_hash_value);
    transparent_crc(p_1768->g_639.z, "p_1768->g_639.z", print_hash_value);
    transparent_crc(p_1768->g_639.w, "p_1768->g_639.w", print_hash_value);
    transparent_crc(p_1768->g_733.s0, "p_1768->g_733.s0", print_hash_value);
    transparent_crc(p_1768->g_733.s1, "p_1768->g_733.s1", print_hash_value);
    transparent_crc(p_1768->g_733.s2, "p_1768->g_733.s2", print_hash_value);
    transparent_crc(p_1768->g_733.s3, "p_1768->g_733.s3", print_hash_value);
    transparent_crc(p_1768->g_733.s4, "p_1768->g_733.s4", print_hash_value);
    transparent_crc(p_1768->g_733.s5, "p_1768->g_733.s5", print_hash_value);
    transparent_crc(p_1768->g_733.s6, "p_1768->g_733.s6", print_hash_value);
    transparent_crc(p_1768->g_733.s7, "p_1768->g_733.s7", print_hash_value);
    transparent_crc(p_1768->g_750.s0, "p_1768->g_750.s0", print_hash_value);
    transparent_crc(p_1768->g_750.s1, "p_1768->g_750.s1", print_hash_value);
    transparent_crc(p_1768->g_750.s2, "p_1768->g_750.s2", print_hash_value);
    transparent_crc(p_1768->g_750.s3, "p_1768->g_750.s3", print_hash_value);
    transparent_crc(p_1768->g_750.s4, "p_1768->g_750.s4", print_hash_value);
    transparent_crc(p_1768->g_750.s5, "p_1768->g_750.s5", print_hash_value);
    transparent_crc(p_1768->g_750.s6, "p_1768->g_750.s6", print_hash_value);
    transparent_crc(p_1768->g_750.s7, "p_1768->g_750.s7", print_hash_value);
    transparent_crc(p_1768->g_754.x, "p_1768->g_754.x", print_hash_value);
    transparent_crc(p_1768->g_754.y, "p_1768->g_754.y", print_hash_value);
    transparent_crc(p_1768->g_759.x, "p_1768->g_759.x", print_hash_value);
    transparent_crc(p_1768->g_759.y, "p_1768->g_759.y", print_hash_value);
    transparent_crc(p_1768->g_775, "p_1768->g_775", print_hash_value);
    transparent_crc(p_1768->g_795.x, "p_1768->g_795.x", print_hash_value);
    transparent_crc(p_1768->g_795.y, "p_1768->g_795.y", print_hash_value);
    transparent_crc(p_1768->g_795.z, "p_1768->g_795.z", print_hash_value);
    transparent_crc(p_1768->g_795.w, "p_1768->g_795.w", print_hash_value);
    transparent_crc(p_1768->g_796.x, "p_1768->g_796.x", print_hash_value);
    transparent_crc(p_1768->g_796.y, "p_1768->g_796.y", print_hash_value);
    transparent_crc(p_1768->g_796.z, "p_1768->g_796.z", print_hash_value);
    transparent_crc(p_1768->g_796.w, "p_1768->g_796.w", print_hash_value);
    transparent_crc(p_1768->g_914.s0, "p_1768->g_914.s0", print_hash_value);
    transparent_crc(p_1768->g_914.s1, "p_1768->g_914.s1", print_hash_value);
    transparent_crc(p_1768->g_914.s2, "p_1768->g_914.s2", print_hash_value);
    transparent_crc(p_1768->g_914.s3, "p_1768->g_914.s3", print_hash_value);
    transparent_crc(p_1768->g_914.s4, "p_1768->g_914.s4", print_hash_value);
    transparent_crc(p_1768->g_914.s5, "p_1768->g_914.s5", print_hash_value);
    transparent_crc(p_1768->g_914.s6, "p_1768->g_914.s6", print_hash_value);
    transparent_crc(p_1768->g_914.s7, "p_1768->g_914.s7", print_hash_value);
    transparent_crc(p_1768->g_914.s8, "p_1768->g_914.s8", print_hash_value);
    transparent_crc(p_1768->g_914.s9, "p_1768->g_914.s9", print_hash_value);
    transparent_crc(p_1768->g_914.sa, "p_1768->g_914.sa", print_hash_value);
    transparent_crc(p_1768->g_914.sb, "p_1768->g_914.sb", print_hash_value);
    transparent_crc(p_1768->g_914.sc, "p_1768->g_914.sc", print_hash_value);
    transparent_crc(p_1768->g_914.sd, "p_1768->g_914.sd", print_hash_value);
    transparent_crc(p_1768->g_914.se, "p_1768->g_914.se", print_hash_value);
    transparent_crc(p_1768->g_914.sf, "p_1768->g_914.sf", print_hash_value);
    transparent_crc(p_1768->g_992.x, "p_1768->g_992.x", print_hash_value);
    transparent_crc(p_1768->g_992.y, "p_1768->g_992.y", print_hash_value);
    transparent_crc(p_1768->g_992.z, "p_1768->g_992.z", print_hash_value);
    transparent_crc(p_1768->g_992.w, "p_1768->g_992.w", print_hash_value);
    transparent_crc(p_1768->g_1010, "p_1768->g_1010", print_hash_value);
    transparent_crc(p_1768->g_1018.x, "p_1768->g_1018.x", print_hash_value);
    transparent_crc(p_1768->g_1018.y, "p_1768->g_1018.y", print_hash_value);
    transparent_crc(p_1768->g_1018.z, "p_1768->g_1018.z", print_hash_value);
    transparent_crc(p_1768->g_1018.w, "p_1768->g_1018.w", print_hash_value);
    transparent_crc(p_1768->g_1028.s0, "p_1768->g_1028.s0", print_hash_value);
    transparent_crc(p_1768->g_1028.s1, "p_1768->g_1028.s1", print_hash_value);
    transparent_crc(p_1768->g_1028.s2, "p_1768->g_1028.s2", print_hash_value);
    transparent_crc(p_1768->g_1028.s3, "p_1768->g_1028.s3", print_hash_value);
    transparent_crc(p_1768->g_1028.s4, "p_1768->g_1028.s4", print_hash_value);
    transparent_crc(p_1768->g_1028.s5, "p_1768->g_1028.s5", print_hash_value);
    transparent_crc(p_1768->g_1028.s6, "p_1768->g_1028.s6", print_hash_value);
    transparent_crc(p_1768->g_1028.s7, "p_1768->g_1028.s7", print_hash_value);
    transparent_crc(p_1768->g_1104, "p_1768->g_1104", print_hash_value);
    transparent_crc(p_1768->g_1209.f0, "p_1768->g_1209.f0", print_hash_value);
    transparent_crc(p_1768->g_1230.s0, "p_1768->g_1230.s0", print_hash_value);
    transparent_crc(p_1768->g_1230.s1, "p_1768->g_1230.s1", print_hash_value);
    transparent_crc(p_1768->g_1230.s2, "p_1768->g_1230.s2", print_hash_value);
    transparent_crc(p_1768->g_1230.s3, "p_1768->g_1230.s3", print_hash_value);
    transparent_crc(p_1768->g_1230.s4, "p_1768->g_1230.s4", print_hash_value);
    transparent_crc(p_1768->g_1230.s5, "p_1768->g_1230.s5", print_hash_value);
    transparent_crc(p_1768->g_1230.s6, "p_1768->g_1230.s6", print_hash_value);
    transparent_crc(p_1768->g_1230.s7, "p_1768->g_1230.s7", print_hash_value);
    transparent_crc(p_1768->g_1373, "p_1768->g_1373", print_hash_value);
    transparent_crc(p_1768->g_1378.f0, "p_1768->g_1378.f0", print_hash_value);
    transparent_crc(p_1768->g_1394.s0, "p_1768->g_1394.s0", print_hash_value);
    transparent_crc(p_1768->g_1394.s1, "p_1768->g_1394.s1", print_hash_value);
    transparent_crc(p_1768->g_1394.s2, "p_1768->g_1394.s2", print_hash_value);
    transparent_crc(p_1768->g_1394.s3, "p_1768->g_1394.s3", print_hash_value);
    transparent_crc(p_1768->g_1394.s4, "p_1768->g_1394.s4", print_hash_value);
    transparent_crc(p_1768->g_1394.s5, "p_1768->g_1394.s5", print_hash_value);
    transparent_crc(p_1768->g_1394.s6, "p_1768->g_1394.s6", print_hash_value);
    transparent_crc(p_1768->g_1394.s7, "p_1768->g_1394.s7", print_hash_value);
    transparent_crc(p_1768->g_1394.s8, "p_1768->g_1394.s8", print_hash_value);
    transparent_crc(p_1768->g_1394.s9, "p_1768->g_1394.s9", print_hash_value);
    transparent_crc(p_1768->g_1394.sa, "p_1768->g_1394.sa", print_hash_value);
    transparent_crc(p_1768->g_1394.sb, "p_1768->g_1394.sb", print_hash_value);
    transparent_crc(p_1768->g_1394.sc, "p_1768->g_1394.sc", print_hash_value);
    transparent_crc(p_1768->g_1394.sd, "p_1768->g_1394.sd", print_hash_value);
    transparent_crc(p_1768->g_1394.se, "p_1768->g_1394.se", print_hash_value);
    transparent_crc(p_1768->g_1394.sf, "p_1768->g_1394.sf", print_hash_value);
    transparent_crc(p_1768->g_1395.s0, "p_1768->g_1395.s0", print_hash_value);
    transparent_crc(p_1768->g_1395.s1, "p_1768->g_1395.s1", print_hash_value);
    transparent_crc(p_1768->g_1395.s2, "p_1768->g_1395.s2", print_hash_value);
    transparent_crc(p_1768->g_1395.s3, "p_1768->g_1395.s3", print_hash_value);
    transparent_crc(p_1768->g_1395.s4, "p_1768->g_1395.s4", print_hash_value);
    transparent_crc(p_1768->g_1395.s5, "p_1768->g_1395.s5", print_hash_value);
    transparent_crc(p_1768->g_1395.s6, "p_1768->g_1395.s6", print_hash_value);
    transparent_crc(p_1768->g_1395.s7, "p_1768->g_1395.s7", print_hash_value);
    transparent_crc(p_1768->g_1404.x, "p_1768->g_1404.x", print_hash_value);
    transparent_crc(p_1768->g_1404.y, "p_1768->g_1404.y", print_hash_value);
    transparent_crc(p_1768->g_1405.x, "p_1768->g_1405.x", print_hash_value);
    transparent_crc(p_1768->g_1405.y, "p_1768->g_1405.y", print_hash_value);
    transparent_crc(p_1768->g_1405.z, "p_1768->g_1405.z", print_hash_value);
    transparent_crc(p_1768->g_1405.w, "p_1768->g_1405.w", print_hash_value);
    transparent_crc(p_1768->g_1414.x, "p_1768->g_1414.x", print_hash_value);
    transparent_crc(p_1768->g_1414.y, "p_1768->g_1414.y", print_hash_value);
    transparent_crc(p_1768->g_1414.z, "p_1768->g_1414.z", print_hash_value);
    transparent_crc(p_1768->g_1414.w, "p_1768->g_1414.w", print_hash_value);
    transparent_crc(p_1768->g_1415.s0, "p_1768->g_1415.s0", print_hash_value);
    transparent_crc(p_1768->g_1415.s1, "p_1768->g_1415.s1", print_hash_value);
    transparent_crc(p_1768->g_1415.s2, "p_1768->g_1415.s2", print_hash_value);
    transparent_crc(p_1768->g_1415.s3, "p_1768->g_1415.s3", print_hash_value);
    transparent_crc(p_1768->g_1415.s4, "p_1768->g_1415.s4", print_hash_value);
    transparent_crc(p_1768->g_1415.s5, "p_1768->g_1415.s5", print_hash_value);
    transparent_crc(p_1768->g_1415.s6, "p_1768->g_1415.s6", print_hash_value);
    transparent_crc(p_1768->g_1415.s7, "p_1768->g_1415.s7", print_hash_value);
    transparent_crc(p_1768->g_1415.s8, "p_1768->g_1415.s8", print_hash_value);
    transparent_crc(p_1768->g_1415.s9, "p_1768->g_1415.s9", print_hash_value);
    transparent_crc(p_1768->g_1415.sa, "p_1768->g_1415.sa", print_hash_value);
    transparent_crc(p_1768->g_1415.sb, "p_1768->g_1415.sb", print_hash_value);
    transparent_crc(p_1768->g_1415.sc, "p_1768->g_1415.sc", print_hash_value);
    transparent_crc(p_1768->g_1415.sd, "p_1768->g_1415.sd", print_hash_value);
    transparent_crc(p_1768->g_1415.se, "p_1768->g_1415.se", print_hash_value);
    transparent_crc(p_1768->g_1415.sf, "p_1768->g_1415.sf", print_hash_value);
    transparent_crc(p_1768->g_1431.x, "p_1768->g_1431.x", print_hash_value);
    transparent_crc(p_1768->g_1431.y, "p_1768->g_1431.y", print_hash_value);
    transparent_crc(p_1768->g_1432.x, "p_1768->g_1432.x", print_hash_value);
    transparent_crc(p_1768->g_1432.y, "p_1768->g_1432.y", print_hash_value);
    transparent_crc(p_1768->g_1432.z, "p_1768->g_1432.z", print_hash_value);
    transparent_crc(p_1768->g_1432.w, "p_1768->g_1432.w", print_hash_value);
    transparent_crc(p_1768->g_1433.x, "p_1768->g_1433.x", print_hash_value);
    transparent_crc(p_1768->g_1433.y, "p_1768->g_1433.y", print_hash_value);
    transparent_crc(p_1768->g_1447.s0, "p_1768->g_1447.s0", print_hash_value);
    transparent_crc(p_1768->g_1447.s1, "p_1768->g_1447.s1", print_hash_value);
    transparent_crc(p_1768->g_1447.s2, "p_1768->g_1447.s2", print_hash_value);
    transparent_crc(p_1768->g_1447.s3, "p_1768->g_1447.s3", print_hash_value);
    transparent_crc(p_1768->g_1447.s4, "p_1768->g_1447.s4", print_hash_value);
    transparent_crc(p_1768->g_1447.s5, "p_1768->g_1447.s5", print_hash_value);
    transparent_crc(p_1768->g_1447.s6, "p_1768->g_1447.s6", print_hash_value);
    transparent_crc(p_1768->g_1447.s7, "p_1768->g_1447.s7", print_hash_value);
    transparent_crc(p_1768->g_1447.s8, "p_1768->g_1447.s8", print_hash_value);
    transparent_crc(p_1768->g_1447.s9, "p_1768->g_1447.s9", print_hash_value);
    transparent_crc(p_1768->g_1447.sa, "p_1768->g_1447.sa", print_hash_value);
    transparent_crc(p_1768->g_1447.sb, "p_1768->g_1447.sb", print_hash_value);
    transparent_crc(p_1768->g_1447.sc, "p_1768->g_1447.sc", print_hash_value);
    transparent_crc(p_1768->g_1447.sd, "p_1768->g_1447.sd", print_hash_value);
    transparent_crc(p_1768->g_1447.se, "p_1768->g_1447.se", print_hash_value);
    transparent_crc(p_1768->g_1447.sf, "p_1768->g_1447.sf", print_hash_value);
    transparent_crc(p_1768->g_1485.x, "p_1768->g_1485.x", print_hash_value);
    transparent_crc(p_1768->g_1485.y, "p_1768->g_1485.y", print_hash_value);
    transparent_crc(p_1768->g_1498.x, "p_1768->g_1498.x", print_hash_value);
    transparent_crc(p_1768->g_1498.y, "p_1768->g_1498.y", print_hash_value);
    transparent_crc(p_1768->g_1498.z, "p_1768->g_1498.z", print_hash_value);
    transparent_crc(p_1768->g_1498.w, "p_1768->g_1498.w", print_hash_value);
    transparent_crc(p_1768->g_1529.s0, "p_1768->g_1529.s0", print_hash_value);
    transparent_crc(p_1768->g_1529.s1, "p_1768->g_1529.s1", print_hash_value);
    transparent_crc(p_1768->g_1529.s2, "p_1768->g_1529.s2", print_hash_value);
    transparent_crc(p_1768->g_1529.s3, "p_1768->g_1529.s3", print_hash_value);
    transparent_crc(p_1768->g_1529.s4, "p_1768->g_1529.s4", print_hash_value);
    transparent_crc(p_1768->g_1529.s5, "p_1768->g_1529.s5", print_hash_value);
    transparent_crc(p_1768->g_1529.s6, "p_1768->g_1529.s6", print_hash_value);
    transparent_crc(p_1768->g_1529.s7, "p_1768->g_1529.s7", print_hash_value);
    transparent_crc(p_1768->g_1529.s8, "p_1768->g_1529.s8", print_hash_value);
    transparent_crc(p_1768->g_1529.s9, "p_1768->g_1529.s9", print_hash_value);
    transparent_crc(p_1768->g_1529.sa, "p_1768->g_1529.sa", print_hash_value);
    transparent_crc(p_1768->g_1529.sb, "p_1768->g_1529.sb", print_hash_value);
    transparent_crc(p_1768->g_1529.sc, "p_1768->g_1529.sc", print_hash_value);
    transparent_crc(p_1768->g_1529.sd, "p_1768->g_1529.sd", print_hash_value);
    transparent_crc(p_1768->g_1529.se, "p_1768->g_1529.se", print_hash_value);
    transparent_crc(p_1768->g_1529.sf, "p_1768->g_1529.sf", print_hash_value);
    transparent_crc(p_1768->g_1559.s0, "p_1768->g_1559.s0", print_hash_value);
    transparent_crc(p_1768->g_1559.s1, "p_1768->g_1559.s1", print_hash_value);
    transparent_crc(p_1768->g_1559.s2, "p_1768->g_1559.s2", print_hash_value);
    transparent_crc(p_1768->g_1559.s3, "p_1768->g_1559.s3", print_hash_value);
    transparent_crc(p_1768->g_1559.s4, "p_1768->g_1559.s4", print_hash_value);
    transparent_crc(p_1768->g_1559.s5, "p_1768->g_1559.s5", print_hash_value);
    transparent_crc(p_1768->g_1559.s6, "p_1768->g_1559.s6", print_hash_value);
    transparent_crc(p_1768->g_1559.s7, "p_1768->g_1559.s7", print_hash_value);
    transparent_crc(p_1768->g_1559.s8, "p_1768->g_1559.s8", print_hash_value);
    transparent_crc(p_1768->g_1559.s9, "p_1768->g_1559.s9", print_hash_value);
    transparent_crc(p_1768->g_1559.sa, "p_1768->g_1559.sa", print_hash_value);
    transparent_crc(p_1768->g_1559.sb, "p_1768->g_1559.sb", print_hash_value);
    transparent_crc(p_1768->g_1559.sc, "p_1768->g_1559.sc", print_hash_value);
    transparent_crc(p_1768->g_1559.sd, "p_1768->g_1559.sd", print_hash_value);
    transparent_crc(p_1768->g_1559.se, "p_1768->g_1559.se", print_hash_value);
    transparent_crc(p_1768->g_1559.sf, "p_1768->g_1559.sf", print_hash_value);
    transparent_crc(p_1768->g_1579.x, "p_1768->g_1579.x", print_hash_value);
    transparent_crc(p_1768->g_1579.y, "p_1768->g_1579.y", print_hash_value);
    transparent_crc(p_1768->g_1599.s0, "p_1768->g_1599.s0", print_hash_value);
    transparent_crc(p_1768->g_1599.s1, "p_1768->g_1599.s1", print_hash_value);
    transparent_crc(p_1768->g_1599.s2, "p_1768->g_1599.s2", print_hash_value);
    transparent_crc(p_1768->g_1599.s3, "p_1768->g_1599.s3", print_hash_value);
    transparent_crc(p_1768->g_1599.s4, "p_1768->g_1599.s4", print_hash_value);
    transparent_crc(p_1768->g_1599.s5, "p_1768->g_1599.s5", print_hash_value);
    transparent_crc(p_1768->g_1599.s6, "p_1768->g_1599.s6", print_hash_value);
    transparent_crc(p_1768->g_1599.s7, "p_1768->g_1599.s7", print_hash_value);
    transparent_crc(p_1768->g_1599.s8, "p_1768->g_1599.s8", print_hash_value);
    transparent_crc(p_1768->g_1599.s9, "p_1768->g_1599.s9", print_hash_value);
    transparent_crc(p_1768->g_1599.sa, "p_1768->g_1599.sa", print_hash_value);
    transparent_crc(p_1768->g_1599.sb, "p_1768->g_1599.sb", print_hash_value);
    transparent_crc(p_1768->g_1599.sc, "p_1768->g_1599.sc", print_hash_value);
    transparent_crc(p_1768->g_1599.sd, "p_1768->g_1599.sd", print_hash_value);
    transparent_crc(p_1768->g_1599.se, "p_1768->g_1599.se", print_hash_value);
    transparent_crc(p_1768->g_1599.sf, "p_1768->g_1599.sf", print_hash_value);
    transparent_crc(p_1768->g_1608.s0, "p_1768->g_1608.s0", print_hash_value);
    transparent_crc(p_1768->g_1608.s1, "p_1768->g_1608.s1", print_hash_value);
    transparent_crc(p_1768->g_1608.s2, "p_1768->g_1608.s2", print_hash_value);
    transparent_crc(p_1768->g_1608.s3, "p_1768->g_1608.s3", print_hash_value);
    transparent_crc(p_1768->g_1608.s4, "p_1768->g_1608.s4", print_hash_value);
    transparent_crc(p_1768->g_1608.s5, "p_1768->g_1608.s5", print_hash_value);
    transparent_crc(p_1768->g_1608.s6, "p_1768->g_1608.s6", print_hash_value);
    transparent_crc(p_1768->g_1608.s7, "p_1768->g_1608.s7", print_hash_value);
    transparent_crc(p_1768->g_1608.s8, "p_1768->g_1608.s8", print_hash_value);
    transparent_crc(p_1768->g_1608.s9, "p_1768->g_1608.s9", print_hash_value);
    transparent_crc(p_1768->g_1608.sa, "p_1768->g_1608.sa", print_hash_value);
    transparent_crc(p_1768->g_1608.sb, "p_1768->g_1608.sb", print_hash_value);
    transparent_crc(p_1768->g_1608.sc, "p_1768->g_1608.sc", print_hash_value);
    transparent_crc(p_1768->g_1608.sd, "p_1768->g_1608.sd", print_hash_value);
    transparent_crc(p_1768->g_1608.se, "p_1768->g_1608.se", print_hash_value);
    transparent_crc(p_1768->g_1608.sf, "p_1768->g_1608.sf", print_hash_value);
    transparent_crc(p_1768->g_1615.x, "p_1768->g_1615.x", print_hash_value);
    transparent_crc(p_1768->g_1615.y, "p_1768->g_1615.y", print_hash_value);
    transparent_crc(p_1768->g_1617.x, "p_1768->g_1617.x", print_hash_value);
    transparent_crc(p_1768->g_1617.y, "p_1768->g_1617.y", print_hash_value);
    transparent_crc(p_1768->g_1624.x, "p_1768->g_1624.x", print_hash_value);
    transparent_crc(p_1768->g_1624.y, "p_1768->g_1624.y", print_hash_value);
    transparent_crc(p_1768->g_1624.z, "p_1768->g_1624.z", print_hash_value);
    transparent_crc(p_1768->g_1624.w, "p_1768->g_1624.w", print_hash_value);
    transparent_crc(p_1768->g_1632.s0, "p_1768->g_1632.s0", print_hash_value);
    transparent_crc(p_1768->g_1632.s1, "p_1768->g_1632.s1", print_hash_value);
    transparent_crc(p_1768->g_1632.s2, "p_1768->g_1632.s2", print_hash_value);
    transparent_crc(p_1768->g_1632.s3, "p_1768->g_1632.s3", print_hash_value);
    transparent_crc(p_1768->g_1632.s4, "p_1768->g_1632.s4", print_hash_value);
    transparent_crc(p_1768->g_1632.s5, "p_1768->g_1632.s5", print_hash_value);
    transparent_crc(p_1768->g_1632.s6, "p_1768->g_1632.s6", print_hash_value);
    transparent_crc(p_1768->g_1632.s7, "p_1768->g_1632.s7", print_hash_value);
    transparent_crc(p_1768->g_1644.x, "p_1768->g_1644.x", print_hash_value);
    transparent_crc(p_1768->g_1644.y, "p_1768->g_1644.y", print_hash_value);
    transparent_crc(p_1768->g_1645.x, "p_1768->g_1645.x", print_hash_value);
    transparent_crc(p_1768->g_1645.y, "p_1768->g_1645.y", print_hash_value);
    transparent_crc(p_1768->g_1657.s0, "p_1768->g_1657.s0", print_hash_value);
    transparent_crc(p_1768->g_1657.s1, "p_1768->g_1657.s1", print_hash_value);
    transparent_crc(p_1768->g_1657.s2, "p_1768->g_1657.s2", print_hash_value);
    transparent_crc(p_1768->g_1657.s3, "p_1768->g_1657.s3", print_hash_value);
    transparent_crc(p_1768->g_1657.s4, "p_1768->g_1657.s4", print_hash_value);
    transparent_crc(p_1768->g_1657.s5, "p_1768->g_1657.s5", print_hash_value);
    transparent_crc(p_1768->g_1657.s6, "p_1768->g_1657.s6", print_hash_value);
    transparent_crc(p_1768->g_1657.s7, "p_1768->g_1657.s7", print_hash_value);
    transparent_crc(p_1768->g_1689.x, "p_1768->g_1689.x", print_hash_value);
    transparent_crc(p_1768->g_1689.y, "p_1768->g_1689.y", print_hash_value);
    transparent_crc(p_1768->g_1750.x, "p_1768->g_1750.x", print_hash_value);
    transparent_crc(p_1768->g_1750.y, "p_1768->g_1750.y", print_hash_value);
    transparent_crc(p_1768->g_1760, "p_1768->g_1760", print_hash_value);
    transparent_crc(p_1768->v_collective, "p_1768->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 39; i++)
            transparent_crc(p_1768->g_special_values[i + 39 * get_linear_group_id()], "p_1768->g_special_values[i + 39 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 39; i++)
            transparent_crc(p_1768->l_special_values[i], "p_1768->l_special_values[i]", print_hash_value);
    transparent_crc(p_1768->l_comm_values[get_linear_local_id()], "p_1768->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1768->g_comm_values[get_linear_group_id() * 9 + get_linear_local_id()], "p_1768->g_comm_values[get_linear_group_id() * 9 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
