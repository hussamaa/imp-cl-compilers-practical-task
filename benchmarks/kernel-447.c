// --atomics 83 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 55,89,1 -l 55,1,1
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

__constant uint32_t permutations[10][55] = {
{43,38,35,40,21,13,54,50,12,23,0,47,41,32,49,10,7,46,31,18,39,36,22,44,5,27,30,1,14,34,16,26,3,4,25,11,2,6,33,29,45,53,19,9,28,24,17,42,8,52,15,20,48,37,51}, // permutation 0
{1,30,16,8,12,23,34,21,25,42,19,51,43,49,47,10,32,3,22,48,4,13,18,2,44,15,38,17,0,11,24,20,27,36,41,6,9,7,28,46,26,53,29,52,37,40,33,14,5,54,39,31,45,50,35}, // permutation 1
{43,22,5,45,3,11,46,15,29,21,52,33,20,7,28,1,51,39,0,49,38,2,14,50,53,30,26,18,4,17,41,36,13,44,40,31,10,48,23,6,34,19,35,47,37,8,16,32,42,9,24,25,54,27,12}, // permutation 2
{4,25,44,5,26,54,34,43,3,6,23,50,35,38,11,37,19,24,46,39,0,28,33,10,30,22,42,21,15,29,8,49,27,47,48,32,31,51,2,45,9,20,1,7,12,18,52,14,53,40,36,16,41,13,17}, // permutation 3
{40,45,15,38,18,3,27,0,20,49,37,28,22,4,17,9,34,48,47,13,36,50,46,2,30,25,26,6,7,10,31,1,44,53,43,33,42,16,24,35,23,41,29,51,54,8,14,21,5,19,39,11,52,32,12}, // permutation 4
{43,9,45,28,32,46,41,53,21,27,2,12,0,22,13,31,26,4,50,5,18,20,35,17,14,29,51,24,36,23,48,49,34,15,52,38,30,47,42,39,3,19,37,16,1,10,33,11,54,40,8,6,7,25,44}, // permutation 5
{8,11,47,7,25,31,48,21,46,39,14,32,28,15,18,30,38,4,50,20,26,12,22,44,54,37,52,34,49,19,40,5,0,23,1,51,36,6,17,24,43,13,41,9,3,29,10,33,42,16,2,35,45,53,27}, // permutation 6
{6,9,34,42,41,1,43,32,45,47,24,7,51,26,14,46,30,8,38,12,15,48,52,17,23,4,21,5,29,0,33,22,28,36,44,27,39,16,40,13,20,50,49,2,54,25,31,3,19,11,53,37,10,35,18}, // permutation 7
{22,10,14,40,16,19,3,11,15,24,50,25,45,13,37,38,5,41,17,2,36,52,30,32,49,51,44,27,31,7,39,12,1,26,29,48,34,20,43,21,46,0,28,4,42,54,35,53,18,47,9,6,33,8,23}, // permutation 8
{50,45,22,21,3,41,46,37,36,12,14,5,16,54,0,48,18,43,20,38,49,6,24,47,4,19,8,28,53,40,34,51,26,39,1,17,42,11,15,27,13,35,32,10,33,31,30,25,23,44,2,9,7,29,52} // permutation 9
};

// Seed: 2687581712

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint64_t  f0;
   uint64_t  f1;
   uint8_t  f2;
   uint32_t  f3;
   volatile int64_t  f4;
};

union U1 {
   int32_t  f0;
   uint64_t  f1;
   int32_t  f2;
   volatile int32_t  f3;
   volatile int32_t  f4;
};

union U2 {
   int32_t  f0;
   int32_t  f1;
};

struct S3 {
    volatile int32_t g_3;
    volatile int32_t * volatile g_2[9][6][3];
    volatile int32_t g_5;
    volatile int32_t g_6;
    volatile int32_t g_7[1][8][5];
    int32_t g_8;
    int32_t g_12;
    int32_t g_15;
    int32_t g_36;
    int32_t g_67;
    int32_t g_75;
    VECTOR(uint8_t, 4) g_110;
    int32_t g_111[10][8][3];
    volatile VECTOR(uint8_t, 2) g_120;
    int32_t * volatile g_180[9];
    volatile union U2 g_194;
    volatile union U2 * volatile g_193;
    union U2 g_196;
    union U2 *g_205;
    union U2 *g_206;
    union U2 *g_207[5][6];
    uint16_t g_213[10];
    int32_t *g_222;
    int16_t g_395;
    VECTOR(uint16_t, 8) g_399;
    volatile VECTOR(uint16_t, 4) g_400;
    volatile union U1 g_402;
    uint64_t g_404;
    int8_t g_407;
    VECTOR(int16_t, 4) g_422;
    VECTOR(int8_t, 16) g_429;
    volatile union U1 *g_481;
    volatile union U1 ** volatile g_480[9];
    uint64_t *g_505;
    volatile union U0 g_509;
    VECTOR(int32_t, 8) g_512;
    volatile VECTOR(uint16_t, 8) g_520;
    uint32_t g_531;
    int32_t * volatile g_579[2][1][4];
    VECTOR(uint32_t, 4) g_590;
    VECTOR(uint16_t, 16) g_608;
    VECTOR(uint8_t, 2) g_616;
    volatile VECTOR(int16_t, 8) g_630;
    union U1 g_643;
    union U1 *g_647[4];
    volatile int64_t g_689;
    volatile int64_t * volatile g_688;
    VECTOR(uint16_t, 2) g_699;
    VECTOR(int8_t, 8) g_705;
    VECTOR(int8_t, 8) g_708;
    volatile VECTOR(int8_t, 16) g_710;
    VECTOR(int8_t, 16) g_711;
    VECTOR(int8_t, 16) g_713;
    volatile int32_t *g_746;
    volatile int32_t ** volatile g_745;
    volatile int32_t ** volatile g_758[8][8];
    volatile VECTOR(int8_t, 2) g_775;
    uint32_t *g_812;
    uint32_t **g_811;
    uint64_t g_815;
    volatile int32_t ** volatile g_885;
    VECTOR(int32_t, 8) g_887;
    VECTOR(int32_t, 4) g_889;
    volatile int8_t g_897;
    int32_t **g_902;
    volatile int64_t * volatile *g_939;
    volatile int64_t * volatile ** volatile g_938[10];
    VECTOR(int8_t, 2) g_953;
    volatile VECTOR(int8_t, 8) g_955;
    volatile VECTOR(uint16_t, 4) g_968;
    int32_t g_970;
    union U1 g_1000[4][4];
    volatile VECTOR(int64_t, 8) g_1005;
    volatile VECTOR(int64_t, 16) g_1008;
    volatile VECTOR(int16_t, 4) g_1018;
    VECTOR(uint64_t, 4) g_1032;
    int64_t *g_1070;
    int64_t **g_1069;
    volatile int32_t * volatile *g_1087;
    volatile int32_t * volatile ** volatile g_1086;
    volatile VECTOR(uint16_t, 2) g_1093;
    uint8_t *g_1099;
    uint8_t *g_1100;
    volatile VECTOR(uint8_t, 16) g_1101;
    VECTOR(uint8_t, 2) g_1102;
    VECTOR(uint8_t, 4) g_1103;
    VECTOR(int32_t, 4) g_1106;
    VECTOR(int32_t, 8) g_1145;
    int32_t *g_1175[9];
    volatile union U0 g_1183;
    int16_t *g_1191;
    union U1 g_1193;
    uint16_t *g_1203[8][9];
    uint16_t **g_1202;
    volatile VECTOR(int8_t, 16) g_1207;
    VECTOR(int8_t, 2) g_1208;
    VECTOR(int8_t, 8) g_1213;
    volatile VECTOR(int8_t, 4) g_1263;
    volatile VECTOR(uint64_t, 8) g_1277;
    VECTOR(int64_t, 2) g_1286;
    VECTOR(uint8_t, 8) g_1331;
    volatile VECTOR(int64_t, 16) g_1337;
    VECTOR(int64_t, 8) g_1338;
    int16_t g_1341;
    VECTOR(int16_t, 2) g_1349;
    VECTOR(int16_t, 2) g_1350;
    VECTOR(int16_t, 16) g_1351;
    union U1 g_1394;
    uint8_t **g_1409;
    VECTOR(uint8_t, 8) g_1418;
    VECTOR(int8_t, 8) g_1419;
    VECTOR(int16_t, 8) g_1433;
    int16_t **g_1445;
    int16_t *** volatile g_1444;
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
union U0  func_1(struct S3 * p_1449);
int32_t * func_20(int32_t ** p_21, int32_t ** p_22, uint64_t  p_23, int32_t  p_24, uint32_t  p_25, struct S3 * p_1449);
int32_t ** func_27(uint32_t  p_28, int32_t  p_29, uint64_t  p_30, int64_t  p_31, int32_t  p_32, struct S3 * p_1449);
uint8_t  func_46(int32_t  p_47, int64_t  p_48, int32_t ** p_49, struct S3 * p_1449);
uint32_t  func_64(int32_t * p_65, struct S3 * p_1449);
int32_t * func_85(int32_t * p_86, struct S3 * p_1449);
int32_t * func_87(int32_t ** p_88, struct S3 * p_1449);
int32_t ** func_89(int32_t  p_90, int32_t  p_91, int32_t * p_92, struct S3 * p_1449);
int64_t  func_93(uint8_t  p_94, uint64_t  p_95, int32_t * p_96, struct S3 * p_1449);
int32_t * func_98(int16_t  p_99, struct S3 * p_1449);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1449->g_2 p_1449->g_8 p_1449->g_1183
 * writes: p_1449->g_2 p_1449->g_8 p_1449->g_12 p_1449->g_15
 */
union U0  func_1(struct S3 * p_1449)
{ /* block id: 4 */
    volatile int32_t * volatile *l_4 = &p_1449->g_2[8][4][1];
    int32_t *l_18 = &p_1449->g_8;
    int32_t l_54 = 0x3E4A9FF1L;
    int32_t *l_56 = &l_54;
    int32_t **l_55 = &l_56;
    int32_t l_1407 = 0x38BFB1A9L;
    VECTOR(int16_t, 2) l_1430 = (VECTOR(int16_t, 2))(3L, (-1L));
    VECTOR(int16_t, 4) l_1431 = (VECTOR(int16_t, 4))(0x12A9L, (VECTOR(int16_t, 2))(0x12A9L, (-9L)), (-9L));
    int32_t l_1442 = (-10L);
    VECTOR(int32_t, 2) l_1446 = (VECTOR(int32_t, 2))(0x4478E524L, 0x7075D1D2L);
    union U1 *l_1447 = &p_1449->g_1193;
    union U1 **l_1448 = &l_1447;
    int i;
    (*l_4) = p_1449->g_2[8][4][1];
    for (p_1449->g_8 = 0; (p_1449->g_8 >= (-10)); --p_1449->g_8)
    { /* block id: 8 */
        int32_t *l_11 = &p_1449->g_12;
        int32_t **l_19 = &l_18;
        int32_t **l_26 = &l_11;
        VECTOR(int32_t, 4) l_33 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-8L)), (-8L));
        int32_t *l_34 = (void*)0;
        int32_t *l_35[3][10][8] = {{{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36}},{{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36}},{{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36},{&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36,&p_1449->g_36}}};
        int64_t l_37 = 0x28C040C8E82B3F54L;
        int16_t *l_814 = (void*)0;
        int32_t ***l_903 = (void*)0;
        union U2 *l_1426 = (void*)0;
        VECTOR(int16_t, 8) l_1432 = (VECTOR(int16_t, 8))(0x2020L, (VECTOR(int16_t, 4))(0x2020L, (VECTOR(int16_t, 2))(0x2020L, 0x0DA7L), 0x0DA7L), 0x0DA7L, 0x2020L, 0x0DA7L);
        int32_t l_1439 = 1L;
        int i, j, k;
        (*l_11) = 0x01C77DCDL;
        for (p_1449->g_12 = 0; (p_1449->g_12 != (-7)); p_1449->g_12 = safe_sub_func_int8_t_s_s(p_1449->g_12, 6))
        { /* block id: 12 */
            for (p_1449->g_15 = 14; (p_1449->g_15 < 18); p_1449->g_15 = safe_add_func_uint32_t_u_u(p_1449->g_15, 3))
            { /* block id: 15 */
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1449->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 55)), permutations[(safe_mod_func_uint32_t_u_u(0x4F4CC511L, 10))][(safe_mod_func_uint32_t_u_u(p_1449->tid, 55))]));
            }
        }
    }
    (*l_1448) = l_1447;
    return p_1449->g_1183;
}


/* ------------------------------------------ */
/* 
 * reads : p_1449->g_885 p_1449->g_746 p_1449->g_643.f1 p_1449->g_902 p_1449->g_745 p_1449->l_comm_values p_1449->g_590 p_1449->g_5 p_1449->g_509 p_1449->g_404 p_1449->g_1069 p_1449->g_705 p_1449->g_1086 p_1449->g_1093 p_1449->g_1101 p_1449->g_1102 p_1449->g_1103 p_1449->g_75 p_1449->g_1106 p_1449->g_222 p_1449->g_402.f0 p_1449->g_1145 p_1449->g_608 p_1449->g_713 p_1449->g_15 p_1449->g_110 p_1449->g_213 p_1449->g_953 p_1449->g_512 p_1449->g_897 p_1449->g_1183 p_1449->g_481 p_1449->g_402 p_1449->g_1193 p_1449->g_1202 p_1449->g_688 p_1449->g_689 p_1449->g_1207 p_1449->g_1208 p_1449->g_1213 p_1449->g_643.f0 p_1449->g_1203 p_1449->g_531 p_1449->g_616 p_1449->g_710 p_1449->g_1263 p_1449->g_395 p_1449->g_1032 p_1449->g_1277 p_1449->g_1286 p_1449->g_1331 p_1449->g_1337 p_1449->g_1338 p_1449->g_1341 p_1449->g_1349 p_1449->g_1350 p_1449->g_1351 p_1449->g_699 p_1449->g_815 p_1449->g_111 p_1449->g_1193.f1 p_1449->g_67 p_1449->g_36 p_1449->g_1394
 * writes: p_1449->g_5 p_1449->g_643.f1 p_1449->g_36 p_1449->g_815 p_1449->g_222 p_1449->g_939 p_1449->g_196.f1 p_1449->g_699 p_1449->g_205 p_1449->g_746 p_1449->g_comm_values p_1449->g_1087 p_1449->g_1099 p_1449->g_1100 p_1449->g_75 p_1449->g_213 p_1449->g_404 p_1449->g_110 p_1449->g_616 p_1449->g_111 p_1449->g_902 p_1449->g_1175 p_1449->g_1191 p_1449->g_1032 p_1449->g_407 p_1449->g_1286 p_1449->g_2 p_1449->g_1193.f1 p_1449->g_67
 */
int32_t * func_20(int32_t ** p_21, int32_t ** p_22, uint64_t  p_23, int32_t  p_24, uint32_t  p_25, struct S3 * p_1449)
{ /* block id: 461 */
    uint32_t l_916 = 0x3E1FC6B7L;
    int32_t *l_936 = (void*)0;
    int32_t l_1001[4][6] = {{0x1E71D6D6L,0x14F198AEL,0x1E71D6D6L,0x1E71D6D6L,0x14F198AEL,0x1E71D6D6L},{0x1E71D6D6L,0x14F198AEL,0x1E71D6D6L,0x1E71D6D6L,0x14F198AEL,0x1E71D6D6L},{0x1E71D6D6L,0x14F198AEL,0x1E71D6D6L,0x1E71D6D6L,0x14F198AEL,0x1E71D6D6L},{0x1E71D6D6L,0x14F198AEL,0x1E71D6D6L,0x1E71D6D6L,0x14F198AEL,0x1E71D6D6L}};
    uint16_t *l_1035 = (void*)0;
    uint16_t **l_1034 = &l_1035;
    uint16_t ***l_1033 = &l_1034;
    int64_t *l_1068[10][9][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int64_t **l_1067 = &l_1068[1][6][0];
    int64_t **l_1071 = &l_1068[5][0][1];
    VECTOR(uint8_t, 16) l_1076 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xA2L), 0xA2L), 0xA2L, 0UL, 0xA2L, (VECTOR(uint8_t, 2))(0UL, 0xA2L), (VECTOR(uint8_t, 2))(0UL, 0xA2L), 0UL, 0xA2L, 0UL, 0xA2L);
    uint32_t l_1083 = 0x02B49622L;
    VECTOR(uint16_t, 2) l_1090 = (VECTOR(uint16_t, 2))(0x54C0L, 65535UL);
    VECTOR(uint16_t, 8) l_1092 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x55CEL), 0x55CEL), 0x55CEL, 1UL, 0x55CEL);
    uint8_t *l_1097 = (void*)0;
    VECTOR(uint8_t, 4) l_1136 = (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 250UL), 250UL);
    VECTOR(int32_t, 16) l_1144 = (VECTOR(int32_t, 16))(0x53364419L, (VECTOR(int32_t, 4))(0x53364419L, (VECTOR(int32_t, 2))(0x53364419L, 0x017F9074L), 0x017F9074L), 0x017F9074L, 0x53364419L, 0x017F9074L, (VECTOR(int32_t, 2))(0x53364419L, 0x017F9074L), (VECTOR(int32_t, 2))(0x53364419L, 0x017F9074L), 0x53364419L, 0x017F9074L, 0x53364419L, 0x017F9074L);
    VECTOR(uint8_t, 4) l_1153 = (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 0xBCL), 0xBCL);
    VECTOR(int8_t, 2) l_1159 = (VECTOR(int8_t, 2))((-9L), 0x5CL);
    uint32_t l_1162[9][1] = {{0x3591C16AL},{0x3591C16AL},{0x3591C16AL},{0x3591C16AL},{0x3591C16AL},{0x3591C16AL},{0x3591C16AL},{0x3591C16AL},{0x3591C16AL}};
    union U2 l_1199 = {0x77B6A761L};
    VECTOR(int8_t, 16) l_1209 = (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x79L), 0x79L), 0x79L, (-9L), 0x79L, (VECTOR(int8_t, 2))((-9L), 0x79L), (VECTOR(int8_t, 2))((-9L), 0x79L), (-9L), 0x79L, (-9L), 0x79L);
    VECTOR(uint32_t, 16) l_1219 = (VECTOR(uint32_t, 16))(0x007F1733L, (VECTOR(uint32_t, 4))(0x007F1733L, (VECTOR(uint32_t, 2))(0x007F1733L, 8UL), 8UL), 8UL, 0x007F1733L, 8UL, (VECTOR(uint32_t, 2))(0x007F1733L, 8UL), (VECTOR(uint32_t, 2))(0x007F1733L, 8UL), 0x007F1733L, 8UL, 0x007F1733L, 8UL);
    int32_t l_1237[9] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
    VECTOR(int8_t, 2) l_1261 = (VECTOR(int8_t, 2))(0L, 0x51L);
    VECTOR(int8_t, 8) l_1262 = (VECTOR(int8_t, 8))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, (-1L)), (-1L)), (-1L), 0x15L, (-1L));
    int8_t l_1311 = 1L;
    VECTOR(int16_t, 8) l_1339 = (VECTOR(int16_t, 8))(0x5650L, (VECTOR(int16_t, 4))(0x5650L, (VECTOR(int16_t, 2))(0x5650L, (-10L)), (-10L)), (-10L), 0x5650L, (-10L));
    VECTOR(int16_t, 8) l_1352 = (VECTOR(int16_t, 8))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 1L), 1L), 1L, 8L, 1L);
    VECTOR(int16_t, 4) l_1353 = (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 7L), 7L);
    int32_t l_1366 = 0x71EB6C7BL;
    uint32_t l_1370[2];
    int32_t *l_1395 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1370[i] = 4294967290UL;
    if ((atomic_inc(&p_1449->g_atomic_input[83 * get_linear_group_id() + 11]) == 2))
    { /* block id: 463 */
        VECTOR(int8_t, 16) l_904 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 9L), 9L), 9L, (-1L), 9L, (VECTOR(int8_t, 2))((-1L), 9L), (VECTOR(int8_t, 2))((-1L), 9L), (-1L), 9L, (-1L), 9L);
        VECTOR(int32_t, 4) l_905 = (VECTOR(int32_t, 4))(0x25B306D0L, (VECTOR(int32_t, 2))(0x25B306D0L, 0x5D0F9F6EL), 0x5D0F9F6EL);
        uint32_t l_906 = 4294967295UL;
        VECTOR(int32_t, 8) l_907 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0F214FFEL), 0x0F214FFEL), 0x0F214FFEL, (-1L), 0x0F214FFEL);
        VECTOR(int32_t, 2) l_908 = (VECTOR(int32_t, 2))(0x3D18A0B9L, 9L);
        uint32_t l_909 = 0x21F40D06L;
        uint16_t l_910 = 0xE3EDL;
        uint16_t l_911 = 0UL;
        uint64_t l_912 = 0x33A4C31027224E6EL;
        uint16_t l_913 = 0x964BL;
        uint16_t l_914 = 0UL;
        int64_t l_915 = 0L;
        int i;
        l_909 = (l_904.s5 , ((VECTOR(int32_t, 8))((l_906 = ((VECTOR(int32_t, 4))(l_905.yyyw)).z), ((VECTOR(int32_t, 4))(0x5B195C96L, ((VECTOR(int32_t, 2))(l_907.s36)), (-6L))), ((VECTOR(int32_t, 2))(l_908.yx)), 0L)).s0);
        l_912 ^= (l_911 = (l_910 = 0x0587EA5CL));
        l_908.x = (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x3449530F09378088L, 0x26F7E44FD7800895L)).xyyyyxyy)).s67)).xxxxxyxy)).s7 , (l_914 = l_913));
        l_915 ^= 0L;
        unsigned int result = 0;
        result += l_904.sf;
        result += l_904.se;
        result += l_904.sd;
        result += l_904.sc;
        result += l_904.sb;
        result += l_904.sa;
        result += l_904.s9;
        result += l_904.s8;
        result += l_904.s7;
        result += l_904.s6;
        result += l_904.s5;
        result += l_904.s4;
        result += l_904.s3;
        result += l_904.s2;
        result += l_904.s1;
        result += l_904.s0;
        result += l_905.w;
        result += l_905.z;
        result += l_905.y;
        result += l_905.x;
        result += l_906;
        result += l_907.s7;
        result += l_907.s6;
        result += l_907.s5;
        result += l_907.s4;
        result += l_907.s3;
        result += l_907.s2;
        result += l_907.s1;
        result += l_907.s0;
        result += l_908.y;
        result += l_908.x;
        result += l_909;
        result += l_910;
        result += l_911;
        result += l_912;
        result += l_913;
        result += l_914;
        result += l_915;
        atomic_add(&p_1449->g_special_values[83 * get_linear_group_id() + 11], result);
    }
    else
    { /* block id: 472 */
        (1 + 1);
    }
    (**p_1449->g_885) = (l_916 && 0x07L);
    if (((&p_1449->g_213[0] == &p_1449->g_213[2]) , ((void*)0 != &p_1449->g_213[1])))
    { /* block id: 476 */
        int64_t l_919 = 0x151FACE575A48593L;
        int32_t l_943 = 1L;
        int32_t l_944 = 0x3B9D7027L;
        uint32_t l_949 = 0x57ADD079L;
        union U2 l_969 = {0x268CC9ECL};
        int64_t ***l_987[9][7];
        uint32_t l_1002 = 4294967290UL;
        VECTOR(int16_t, 4) l_1017 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x70EBL), 0x70EBL);
        int32_t l_1050 = 0x78869D47L;
        VECTOR(uint16_t, 8) l_1091 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 4UL), 4UL), 4UL, 1UL, 4UL);
        uint8_t *l_1096 = (void*)0;
        VECTOR(uint8_t, 8) l_1137 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x17L), 0x17L), 0x17L, 255UL, 0x17L);
        VECTOR(int32_t, 4) l_1146 = (VECTOR(int32_t, 4))(0x03ACBF6AL, (VECTOR(int32_t, 2))(0x03ACBF6AL, (-6L)), (-6L));
        int16_t l_1167 = (-9L);
        int32_t ***l_1169 = &p_1449->g_902;
        int32_t **l_1170 = &p_1449->g_222;
        int32_t ***l_1171 = &l_1170;
        VECTOR(uint16_t, 2) l_1200 = (VECTOR(uint16_t, 2))(0xA421L, 65533UL);
        uint16_t **l_1201 = &l_1035;
        VECTOR(int8_t, 16) l_1212 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L, (VECTOR(int8_t, 2))((-1L), 3L), (VECTOR(int8_t, 2))((-1L), 3L), (-1L), 3L, (-1L), 3L);
        int32_t l_1314 = 0x32FDD62AL;
        int8_t l_1319 = 0x03L;
        VECTOR(uint8_t, 8) l_1330 = (VECTOR(uint8_t, 8))(0x27L, (VECTOR(uint8_t, 4))(0x27L, (VECTOR(uint8_t, 2))(0x27L, 252UL), 252UL), 252UL, 0x27L, 252UL);
        VECTOR(int16_t, 2) l_1354 = (VECTOR(int16_t, 2))(0x4C3CL, 0L);
        VECTOR(int16_t, 16) l_1355 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x060DL), 0x060DL), 0x060DL, (-1L), 0x060DL, (VECTOR(int16_t, 2))((-1L), 0x060DL), (VECTOR(int16_t, 2))((-1L), 0x060DL), (-1L), 0x060DL, (-1L), 0x060DL);
        int32_t l_1362[1][2];
        int i, j;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 7; j++)
                l_987[i][j] = (void*)0;
        }
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_1362[i][j] = (-9L);
        }
        for (p_1449->g_643.f1 = 0; (p_1449->g_643.f1 < 59); p_1449->g_643.f1 = safe_add_func_uint8_t_u_u(p_1449->g_643.f1, 4))
        { /* block id: 479 */
            uint64_t *l_926 = &p_1449->g_404;
            int32_t l_927[7][10] = {{7L,0x25CC60F4L,3L,0x1F92705BL,0L,0x5EB575C3L,9L,(-4L),(-1L),6L},{7L,0x25CC60F4L,3L,0x1F92705BL,0L,0x5EB575C3L,9L,(-4L),(-1L),6L},{7L,0x25CC60F4L,3L,0x1F92705BL,0L,0x5EB575C3L,9L,(-4L),(-1L),6L},{7L,0x25CC60F4L,3L,0x1F92705BL,0L,0x5EB575C3L,9L,(-4L),(-1L),6L},{7L,0x25CC60F4L,3L,0x1F92705BL,0L,0x5EB575C3L,9L,(-4L),(-1L),6L},{7L,0x25CC60F4L,3L,0x1F92705BL,0L,0x5EB575C3L,9L,(-4L),(-1L),6L},{7L,0x25CC60F4L,3L,0x1F92705BL,0L,0x5EB575C3L,9L,(-4L),(-1L),6L}};
            volatile int32_t *l_952[5][9][5] = {{{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0}},{{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0}},{{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0}},{{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0}},{{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0},{(void*)0,&p_1449->g_5,(void*)0,&p_1449->g_402.f0,(void*)0}}};
            VECTOR(int8_t, 8) l_954 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-2L)), (-2L)), (-2L), 0L, (-2L));
            uint32_t l_974 = 4294967292UL;
            int32_t *l_975 = &l_944;
            VECTOR(int8_t, 4) l_988 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x1DL), 0x1DL);
            union U1 *l_999 = &p_1449->g_1000[3][2];
            uint16_t *l_1028 = &p_1449->g_213[2];
            uint16_t **l_1027 = &l_1028;
            uint16_t ***l_1026[8];
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_1026[i] = &l_1027;
            if (((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(0x504EC152L, (l_919 ^ 0x0DL), 0x4BE0368EL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((safe_lshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((((p_25 , (FAKE_DIVERGE(p_1449->group_1_offset, get_group_id(1), 10) | ((safe_add_func_int8_t_s_s(0x3FL, (((((((*l_926) = l_919) != GROUP_DIVERGE(0, 1)) , &p_1449->g_689) == &p_1449->g_689) < p_23) > ((((p_1449->g_711.s5 == (-7L)) & l_916) & (*p_1449->g_688)) < 0x3046L)))) , l_919))) <= l_927[4][5]) && l_919), p_23)) == 0x4B3590C1C29AB91EL), 3)), ((VECTOR(int32_t, 4))(0x7D49B5E8L)), ((VECTOR(int32_t, 2))(0x5A20BA2DL)), 1L)))).even)))).odd)), ((VECTOR(int32_t, 2))(0x540AFCFDL)), 0x4836D68AL)), (int32_t)(*p_1449->g_746), (int32_t)p_25))).s70, ((VECTOR(int32_t, 2))(0x7494E95BL))))).hi)
            { /* block id: 481 */
                uint32_t l_928 = 4294967295UL;
                int32_t *l_937[2][4];
                int8_t l_947 = 0x7CL;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_937[i][j] = (void*)0;
                }
                (*p_1449->g_746) = l_928;
                for (p_23 = 0; (p_23 > 34); p_23++)
                { /* block id: 485 */
                    int32_t l_942 = 0x59CC400FL;
                    int32_t l_946[6][9] = {{0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L},{0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L},{0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L},{0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L},{0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L},{0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L,0x5E1AB1B8L}};
                    int i, j;
                    for (p_1449->g_36 = (-26); (p_1449->g_36 > 27); ++p_1449->g_36)
                    { /* block id: 488 */
                        int32_t *l_933 = &p_1449->g_12;
                        return l_933;
                    }
                    for (p_1449->g_815 = (-30); (p_1449->g_815 == 3); p_1449->g_815 = safe_add_func_uint64_t_u_u(p_1449->g_815, 1))
                    { /* block id: 493 */
                        volatile int64_t * volatile **l_940 = &p_1449->g_939;
                        int8_t l_941 = (-10L);
                        int32_t l_945 = 0L;
                        int32_t l_948 = 0x2029E07DL;
                        l_937[1][3] = ((*p_1449->g_902) = l_936);
                        (*l_940) = &p_1449->g_688;
                        l_949++;
                    }
                    l_952[0][0][3] = (*p_1449->g_745);
                }
            }
            else
            { /* block id: 501 */
                uint32_t *l_962 = &l_916;
                int32_t l_965 = 0x448C2CCFL;
                uint8_t *l_971 = (void*)0;
                uint8_t *l_972 = (void*)0;
                uint8_t *l_973[2][10][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                (*p_1449->g_746) = ((+((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_1449->g_953.yyyyyxxxxyyxyxyx)).s2013)).ywzwwwwwywzyyyzy, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(l_954.s3253)), ((VECTOR(int8_t, 4))(0x5FL, 0x43L, (-3L), 0x03L))))).hi, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_1449->g_955.s26013410)).s72)).xxxxxyyyyxxyyyyy)).s79f8, (int8_t)(safe_lshift_func_int8_t_s_u(p_24, 2)), (int8_t)((safe_div_func_uint64_t_u_u((0x126F464B4EA4F21AL > (((VECTOR(uint64_t, 16))(0x30EDE89D3AEA8675L, ((VECTOR(uint64_t, 8))((4L >= (p_1449->g_616.x = (((*l_962) = (p_24 & (safe_add_func_int8_t_s_s(p_1449->g_708.s3, p_1449->g_407)))) || (((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))((safe_sub_func_uint32_t_u_u((((((FAKE_DIVERGE(p_1449->local_1_offset, get_local_id(1), 10) , l_965) == (l_927[1][0] = ((safe_div_func_uint16_t_u_u(0x72CDL, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1449->g_968.wwxy)).zzwzzzxw)).s7)) & ((((l_969 = l_969) , p_23) , 1L) & GROUP_DIVERGE(1, 1))))) != 65535UL) <= 0x616307D943E320C7L) == 0x53329BA32AC26F89L), p_1449->g_970)), ((VECTOR(int8_t, 4))(2L)), 0x1CL, p_24, 5L, 0x1BL, ((VECTOR(int8_t, 2))(9L)), 0x2FL, p_1449->g_422.w, 0L, (-1L), 0L))))).sf , 0x8E844197L)))), ((VECTOR(uint64_t, 2))(0x2F7269F1BED39A02L)), l_944, ((VECTOR(uint64_t, 4))(0xEB8C543FB93DD7E2L)))), 0x80F92099C6A2BFAEL, 18446744073709551612UL, l_944, 0xB6319CA4134342CEL, ((VECTOR(uint64_t, 2))(0xC617B9FA626D0F64L)), 0xEC0A7BFEA93625B6L)).sc , 0xF258D10609E3355BL)), p_1449->g_713.s8)) , p_24)))).wxyzyywy, ((VECTOR(int8_t, 8))(0x05L))))).s66, ((VECTOR(int8_t, 2))((-1L)))))))), l_974, ((VECTOR(int8_t, 4))(0x04L)), 0x21L)).s26, ((VECTOR(int8_t, 2))((-7L)))))).yxxyyyyyxxyxxxyy))).hi, (int8_t)p_1449->g_616.y, (int8_t)p_1449->g_815))).s2114564163623712, (int8_t)l_965))).se4)).yyxyyxyyyyxxyyxy)).s06)), l_919, 1L, l_965, (-1L), 0x66L, 8L, 0L, ((VECTOR(int8_t, 2))((-6L))), p_1449->g_3, p_25, ((VECTOR(int8_t, 2))(0x7BL)), (-1L))).s38, ((VECTOR(int8_t, 2))(0x4DL))))), 0x39L, 0x72L)).ywwzxzzxzxwyzyyz))))).sc) >= p_1449->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1449->tid, 55))]);
            }
            l_975 = &l_944;
            for (p_1449->g_196.f1 = 0; (p_1449->g_196.f1 <= (-19)); p_1449->g_196.f1--)
            { /* block id: 511 */
                int64_t *l_984 = &l_919;
                int64_t **l_983 = &l_984;
                int64_t ***l_982 = &l_983;
                int64_t ****l_985 = (void*)0;
                int64_t ****l_986[9] = {&l_982,&l_982,&l_982,&l_982,&l_982,&l_982,&l_982,&l_982,&l_982};
                int16_t *l_989 = (void*)0;
                int16_t *l_990 = (void*)0;
                int16_t *l_991[3][7][2] = {{{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395}},{{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395}},{{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395},{&p_1449->g_395,&p_1449->g_395}}};
                int32_t **l_992 = &l_936;
                int32_t l_1019 = 7L;
                union U2 *l_1038 = &p_1449->g_196;
                int32_t l_1041 = 1L;
                int32_t l_1042 = 0L;
                int32_t l_1043 = (-9L);
                int32_t l_1044 = 0x3284AC99L;
                int32_t l_1045 = 0x085EEC42L;
                int32_t l_1046 = (-7L);
                int32_t l_1047 = (-1L);
                int32_t l_1048 = (-7L);
                int32_t l_1049 = 0x0AC88A41L;
                uint8_t l_1051 = 0xDDL;
                int i, j, k;
                if (((247UL || (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(1L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))((0UL & ((l_987[8][2] = l_982) == &p_1449->g_939)), 0x55L, ((VECTOR(int8_t, 8))(l_988.zwzyzwzz)), ((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((((*p_22) = func_98(((*l_975) = l_919), p_1449)) != ((*l_992) = &l_943)) | (((l_1001[3][4] = ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((l_999 != p_1449->g_481), 1L)), 6)), p_25)) >= l_954.s6)) | GROUP_DIVERGE(0, 1)) , (-3L))), p_23, 0x31CFL, ((VECTOR(uint16_t, 2))(0xFEC8L)), ((VECTOR(uint16_t, 2))(0x5529L)), 0x257DL)), 65535UL, ((VECTOR(uint16_t, 2))(9UL)), 0UL, p_1449->g_705.s5, ((VECTOR(uint16_t, 2))(0x4D6EL)), 0UL)).s0b, ((VECTOR(uint16_t, 2))(0x7448L)), ((VECTOR(uint16_t, 2))(65533UL))))).yxxyyyxxyxxxyxxy)).sf1, ((VECTOR(uint16_t, 2))(7UL))))))).lo <= 0x7DA38168L) & p_1449->g_429.s7), 0x7DL, (-1L), l_1002, 0x14L, 4L)).s3c)), 0x70L)), 0x38L, p_1449->g_comm_values[p_1449->tid], (**l_992), 0x37L, ((VECTOR(int8_t, 2))(9L)), ((VECTOR(int8_t, 4))(0x56L)), 0x25L, 0x36L)).sd5, ((VECTOR(int8_t, 2))(0x23L)), ((VECTOR(int8_t, 2))(0x34L))))).yxxyyxyx, ((VECTOR(int8_t, 8))(1L)), ((VECTOR(int8_t, 8))(0x6DL)))))))))))).s2, (-2L))), p_1449->g_590.y))) <= 0L))
                { /* block id: 517 */
                    uint16_t ****l_1022 = (void*)0;
                    uint16_t ****l_1023 = (void*)0;
                    uint16_t ***l_1025 = (void*)0;
                    uint16_t ****l_1024 = &l_1025;
                    int32_t l_1031 = 0x688681D2L;
                    (*p_1449->g_746) = l_949;
                    if ((((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 8))(p_1449->g_1005.s00036332)), ((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))((-1L), 0L)), 9L, (-5L))).lo, (int64_t)(l_1031 ^= (p_1449->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1449->tid, 55))] = (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(p_1449->g_1008.sef3d97a2f026f761)).s40)).xxyx)).xxwzxxxwxzxxyzwx, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(p_23, (p_1449->g_comm_values[p_1449->tid] = ((safe_add_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(((safe_div_func_int16_t_s_s((((((**l_983) &= (((VECTOR(int16_t, 16))(0x4524L, 0x33EFL, ((VECTOR(int16_t, 4))((-2L), ((VECTOR(int16_t, 2))(l_1017.zx)).hi, 0x40F4L, 0L)), 0x4FC5L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(7L, (-9L))).yxxxyxyxxyxxyxyy)), ((VECTOR(int16_t, 4))(p_1449->g_1018.yxxx)).xxxxzwxyyzyxwyyx))).lo)), (-6L))).s6 >= (p_1449->g_110.z < (0x1BC7E91019E5288FL & l_1019)))) ^ ((+(safe_sub_func_int16_t_s_s((-9L), (((((*l_1024) = (void*)0) == l_1026[3]) || (~(safe_mod_func_uint16_t_u_u((6L | 0x64L), p_1449->g_110.y)))) <= p_24)))) > p_24)) == p_1449->g_889.w) & GROUP_DIVERGE(0, 1)), p_1449->g_110.y)) && 1UL), p_1449->g_889.w)) && 0x58CF2874L), 0x77L)) , p_23), 2UL)) > 0x79L)), 0x26D3E8E5E5EFDD51L, 0x5E7AA3DA45FEF66DL, 0x0E24F2AAAB5870D1L, (-1L), 0x37986D00E718A7CCL, 9L, (-5L), ((VECTOR(int64_t, 2))(7L)), (*p_1449->g_688), 0L, ((VECTOR(int64_t, 2))(0x0D90B8ADCBC5E613L)), 0x2B9F53D948B59E2AL)).sd7)), (-7L), 0x22050B7A39A22037L)).even)).xyxyxyyy, ((VECTOR(int64_t, 8))((-1L)))))), ((VECTOR(int64_t, 8))(1L))))), ((VECTOR(int64_t, 4))(0x63E49D7C19FC687DL)), ((VECTOR(int64_t, 2))((-1L))), 0x1E3A40EB6C40341BL, 0x10AB0064833485BFL)), ((VECTOR(int64_t, 16))((-7L)))))).s3, l_969.f0)))), (int64_t)0x4CE555433C494FE5L))).xxyyyxxy, ((VECTOR(int64_t, 8))(0x6B9763919A605E5BL)), ((VECTOR(int64_t, 8))(0L))))).s73))).xxyy, ((VECTOR(int64_t, 4))(0x5A1AAEFE5BB79B51L))))).odd, ((VECTOR(int64_t, 2))(1L))))).xxyyyyxx, ((VECTOR(int64_t, 8))(0x5F8F9030176B4A0BL))))).s6, p_25)) , p_24) >= p_23))
                    { /* block id: 524 */
                        (*l_975) |= (((VECTOR(uint64_t, 2))(p_1449->g_1032.xw)).lo < (((*l_1024) = l_1033) == (void*)0));
                    }
                    else
                    { /* block id: 527 */
                        l_1031 = (*p_1449->g_746);
                        (*p_1449->g_746) = (safe_rshift_func_uint16_t_u_u(((p_24 , p_1449->g_509) , 1UL), (p_1449->g_699.x = FAKE_DIVERGE(p_1449->group_1_offset, get_group_id(1), 10))));
                    }
                }
                else
                { /* block id: 532 */
                    union U2 **l_1039 = &p_1449->g_205;
                    union U2 **l_1040 = &l_1038;
                    (*l_1040) = ((*l_1039) = l_1038);
                    (*p_1449->g_745) = (*p_1449->g_885);
                }
                if (l_1019)
                    break;
                ++l_1051;
            }
        }
        if (((+((((safe_sub_func_int64_t_s_s((p_1449->g_comm_values[p_1449->tid] = (((safe_div_func_uint64_t_u_u(((safe_add_func_int16_t_s_s(p_1449->g_404, ((l_1067 == (l_1071 = p_1449->g_1069)) , (+(safe_rshift_func_uint8_t_u_u((GROUP_DIVERGE(0, 1) < (l_1001[3][4] = ((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(1L, 1L)))).yyxxxyxy))).s4)), 5)))))) < (6UL <= (!(+((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_1076.s76fed2aa)).s4420764364302420)).s5, (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((*l_1033) == (void*)0) || (safe_mul_func_int16_t_s_s(p_25, p_24))), l_944)), 65529UL)))) >= 0x4CL))))), p_23)) <= 0x00D4L) == p_25)), (-1L))) <= p_24) , p_1449->g_705.s7) != 0x12L)) >= p_23))
        { /* block id: 550 */
            (*p_1449->g_746) = (**p_1449->g_745);
            l_1083++;
            (*p_1449->g_1086) = &p_1449->g_2[6][2][1];
        }
        else
        { /* block id: 554 */
            uint8_t **l_1098[6][7][6] = {{{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096}},{{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096}},{{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096}},{{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096}},{{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096}},{{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096},{&l_1096,(void*)0,&l_1096,&l_1096,&l_1096,&l_1096}}};
            VECTOR(uint8_t, 16) l_1135 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
            int8_t *l_1138 = (void*)0;
            int8_t *l_1139 = (void*)0;
            int8_t *l_1140[3];
            int64_t ***l_1143 = &l_1067;
            VECTOR(int32_t, 4) l_1147 = (VECTOR(int32_t, 4))(0x7F305BEDL, (VECTOR(int32_t, 2))(0x7F305BEDL, 0x4F0D5222L), 0x4F0D5222L);
            VECTOR(uint8_t, 4) l_1154 = (VECTOR(uint8_t, 4))(0xA7L, (VECTOR(uint8_t, 2))(0xA7L, 0UL), 0UL);
            int16_t *l_1163[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint16_t *l_1164 = &p_1449->g_213[2];
            uint64_t *l_1165 = (void*)0;
            uint64_t *l_1166 = &p_1449->g_404;
            int32_t *l_1168 = &p_1449->g_111[9][6][2];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1140[i] = (void*)0;
            l_944 |= ((((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(l_1090.yyyy)).yyzwwxyw, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 16))(l_1091.s1622320325450235)).sf496, ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x7F2EL, 0xCA4CL)).yxxxxxyy)).s4340116405540165, ((VECTOR(uint16_t, 8))(l_1092.s01214456)).s5045226761424642))).s1c81))).wyxwxwzxyzyzyzyw, ((VECTOR(uint16_t, 8))(p_1449->g_1093.xyxxxxyx)).s5447627723053213))).saf)).xxxyyxxy))).s1 ^ (!(safe_sub_func_int16_t_s_s(l_1050, 0xD139L)))) < ((p_1449->g_1099 = (l_1097 = l_1096)) != (p_1449->g_1100 = (void*)0)));
            if ((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_1449->g_1101.sdd441d15)).s02)).xyyx)).w <= ((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(p_1449->g_1102.xyyx)).xxxzwxzw))).hi, ((VECTOR(uint8_t, 2))(p_1449->g_1103.ww)).yyyx))).z))
            { /* block id: 559 */
                for (p_1449->g_75 = 7; (p_1449->g_75 != 6); p_1449->g_75 = safe_sub_func_int64_t_s_s(p_1449->g_75, 8))
                { /* block id: 562 */
                    (**p_1449->g_885) = l_919;
                }
                (*p_1449->g_746) = ((VECTOR(int32_t, 16))(p_1449->g_1106.xwzzwyzyyzxxyxwx)).sf;
                return (*p_1449->g_902);
            }
            else
            { /* block id: 567 */
                if ((atomic_inc(&p_1449->l_atomic_input[24]) == 8))
                { /* block id: 569 */
                    VECTOR(int32_t, 8) l_1107 = (VECTOR(int32_t, 8))(0x2166291CL, (VECTOR(int32_t, 4))(0x2166291CL, (VECTOR(int32_t, 2))(0x2166291CL, (-10L)), (-10L)), (-10L), 0x2166291CL, (-10L));
                    VECTOR(int32_t, 4) l_1108 = (VECTOR(int32_t, 4))(0x129A784CL, (VECTOR(int32_t, 2))(0x129A784CL, 9L), 9L);
                    VECTOR(int32_t, 16) l_1109 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x020A551CL), 0x020A551CL), 0x020A551CL, (-10L), 0x020A551CL, (VECTOR(int32_t, 2))((-10L), 0x020A551CL), (VECTOR(int32_t, 2))((-10L), 0x020A551CL), (-10L), 0x020A551CL, (-10L), 0x020A551CL);
                    VECTOR(int32_t, 4) l_1110 = (VECTOR(int32_t, 4))(0x1DACC464L, (VECTOR(int32_t, 2))(0x1DACC464L, 0x757D2081L), 0x757D2081L);
                    VECTOR(int32_t, 16) l_1111 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x24338A21L), 0x24338A21L), 0x24338A21L, (-8L), 0x24338A21L, (VECTOR(int32_t, 2))((-8L), 0x24338A21L), (VECTOR(int32_t, 2))((-8L), 0x24338A21L), (-8L), 0x24338A21L, (-8L), 0x24338A21L);
                    VECTOR(int32_t, 2) l_1112 = (VECTOR(int32_t, 2))(5L, (-5L));
                    VECTOR(int32_t, 16) l_1113 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x07415E9AL), 0x07415E9AL), 0x07415E9AL, (-10L), 0x07415E9AL, (VECTOR(int32_t, 2))((-10L), 0x07415E9AL), (VECTOR(int32_t, 2))((-10L), 0x07415E9AL), (-10L), 0x07415E9AL, (-10L), 0x07415E9AL);
                    uint8_t l_1114 = 253UL;
                    int64_t l_1115 = (-5L);
                    int32_t l_1116 = 0x3ED9D7A8L;
                    uint32_t l_1117 = 0x4A2339B8L;
                    uint16_t l_1118 = 65535UL;
                    VECTOR(int32_t, 8) l_1119 = (VECTOR(int32_t, 8))(0x7122B164L, (VECTOR(int32_t, 4))(0x7122B164L, (VECTOR(int32_t, 2))(0x7122B164L, (-10L)), (-10L)), (-10L), 0x7122B164L, (-10L));
                    uint32_t l_1120 = 0UL;
                    VECTOR(int32_t, 8) l_1121 = (VECTOR(int32_t, 8))(0x45B978E7L, (VECTOR(int32_t, 4))(0x45B978E7L, (VECTOR(int32_t, 2))(0x45B978E7L, (-7L)), (-7L)), (-7L), 0x45B978E7L, (-7L));
                    VECTOR(int32_t, 4) l_1122 = (VECTOR(int32_t, 4))(0x42D1A30DL, (VECTOR(int32_t, 2))(0x42D1A30DL, (-7L)), (-7L));
                    VECTOR(int32_t, 8) l_1123 = (VECTOR(int32_t, 8))(0x3FF313BBL, (VECTOR(int32_t, 4))(0x3FF313BBL, (VECTOR(int32_t, 2))(0x3FF313BBL, 0x70AF5AF6L), 0x70AF5AF6L), 0x70AF5AF6L, 0x3FF313BBL, 0x70AF5AF6L);
                    VECTOR(int32_t, 16) l_1124 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7D891CE9L), 0x7D891CE9L), 0x7D891CE9L, (-1L), 0x7D891CE9L, (VECTOR(int32_t, 2))((-1L), 0x7D891CE9L), (VECTOR(int32_t, 2))((-1L), 0x7D891CE9L), (-1L), 0x7D891CE9L, (-1L), 0x7D891CE9L);
                    VECTOR(int32_t, 16) l_1125 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7CB70F9DL), 0x7CB70F9DL), 0x7CB70F9DL, 0L, 0x7CB70F9DL, (VECTOR(int32_t, 2))(0L, 0x7CB70F9DL), (VECTOR(int32_t, 2))(0L, 0x7CB70F9DL), 0L, 0x7CB70F9DL, 0L, 0x7CB70F9DL);
                    VECTOR(int32_t, 16) l_1126 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2910E140L), 0x2910E140L), 0x2910E140L, (-1L), 0x2910E140L, (VECTOR(int32_t, 2))((-1L), 0x2910E140L), (VECTOR(int32_t, 2))((-1L), 0x2910E140L), (-1L), 0x2910E140L, (-1L), 0x2910E140L);
                    VECTOR(int32_t, 2) l_1127 = (VECTOR(int32_t, 2))(0x4E93C6D1L, 0x0D1AE6D2L);
                    int32_t l_1128 = 0x56B1D196L;
                    int8_t l_1129 = 1L;
                    uint32_t l_1130 = 0xF2C217FCL;
                    int32_t l_1131 = 0x4F7EF096L;
                    int32_t l_1132 = (-1L);
                    int32_t l_1133 = (-3L);
                    int16_t l_1134 = 1L;
                    int i;
                    l_1112.y = ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1107.s03476756)).even)).yyxzzzyy, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_1108.zzwzzxyx)).hi, ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_1109.s33ece688e2d19157)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1110.xzzxxyxxyyxzyxwx)).sc1d8)))).xxwyyxwxyywwyxwz, ((VECTOR(int32_t, 16))(l_1111.sf995d9145f96a3b0))))).sb81e, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(l_1112.xxxy)).odd, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1113.sac)).yyyx)), 1L, 0x0E3F82D2L, l_1114, 0x173B8562L, 0x0911CD91L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-1L), (-1L))))), ((l_1117 |= (l_1116 = l_1115)) , (-6L)), 1L, 0x11650209L, 1L, 0x492327E7L))))).s39, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(l_1118, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0x54B7D82BL, 0x77354F5EL)).yyyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x20BBAAB8L, ((VECTOR(int32_t, 8))(0x615BA659L, ((VECTOR(int32_t, 4))(l_1119.s0775)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(0x1AAF3A37L, 0x0991B7BAL, ((VECTOR(int32_t, 4))(l_1120, (-1L), 0x6461BAAEL, 0x18FBED59L)).x, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(l_1121.s72)).yyxy, ((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(l_1122.zw)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_1123.s5262046435120712)).s1e)).yyxx)))).hi))), 0L))))), 0x5DCCE8A6L)).hi, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_1124.s2c37c57094e6f3d2)))).sf614, ((VECTOR(int32_t, 16))(l_1125.sbb606a4465e76f68)).s4db2))).lo)), 0x1B33F52CL)), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(0L, 0x4B304462L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1126.s73)).yyxy)).even))).xxxxyxxx, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_1127.yxyy)).xzzwzxyx, ((VECTOR(int32_t, 8))(0x2D2BCE7EL, l_1128, ((VECTOR(int32_t, 2))(0x2EBBC074L, 0x7DAE3A16L)), l_1129, l_1130, (-10L), 6L)), ((VECTOR(int32_t, 8))(0L))))).s2522052355042032))).s21b6, (int32_t)l_1131))).zwxwwyyx))).s1327777733012136)).s74, ((VECTOR(int32_t, 2))(0x107D3A81L))))), 0x1C9F38E5L, 0x6725DA3AL, ((VECTOR(int32_t, 2))(0x50DC2AB5L)), (-3L))).even)).hi))).even)), l_1132, l_1133, 0x5CA59F6FL, 0L, 0x587AFB17L))))).s27, ((VECTOR(int32_t, 2))(0L))))).lo, l_1134, 0x63EA78EFL, 1L)).odd, ((VECTOR(int32_t, 2))((-6L)))))).yyxxxxxx)).s63)))))).yyyx)))))).xyxyyzyy))).s6;
                    unsigned int result = 0;
                    result += l_1107.s7;
                    result += l_1107.s6;
                    result += l_1107.s5;
                    result += l_1107.s4;
                    result += l_1107.s3;
                    result += l_1107.s2;
                    result += l_1107.s1;
                    result += l_1107.s0;
                    result += l_1108.w;
                    result += l_1108.z;
                    result += l_1108.y;
                    result += l_1108.x;
                    result += l_1109.sf;
                    result += l_1109.se;
                    result += l_1109.sd;
                    result += l_1109.sc;
                    result += l_1109.sb;
                    result += l_1109.sa;
                    result += l_1109.s9;
                    result += l_1109.s8;
                    result += l_1109.s7;
                    result += l_1109.s6;
                    result += l_1109.s5;
                    result += l_1109.s4;
                    result += l_1109.s3;
                    result += l_1109.s2;
                    result += l_1109.s1;
                    result += l_1109.s0;
                    result += l_1110.w;
                    result += l_1110.z;
                    result += l_1110.y;
                    result += l_1110.x;
                    result += l_1111.sf;
                    result += l_1111.se;
                    result += l_1111.sd;
                    result += l_1111.sc;
                    result += l_1111.sb;
                    result += l_1111.sa;
                    result += l_1111.s9;
                    result += l_1111.s8;
                    result += l_1111.s7;
                    result += l_1111.s6;
                    result += l_1111.s5;
                    result += l_1111.s4;
                    result += l_1111.s3;
                    result += l_1111.s2;
                    result += l_1111.s1;
                    result += l_1111.s0;
                    result += l_1112.y;
                    result += l_1112.x;
                    result += l_1113.sf;
                    result += l_1113.se;
                    result += l_1113.sd;
                    result += l_1113.sc;
                    result += l_1113.sb;
                    result += l_1113.sa;
                    result += l_1113.s9;
                    result += l_1113.s8;
                    result += l_1113.s7;
                    result += l_1113.s6;
                    result += l_1113.s5;
                    result += l_1113.s4;
                    result += l_1113.s3;
                    result += l_1113.s2;
                    result += l_1113.s1;
                    result += l_1113.s0;
                    result += l_1114;
                    result += l_1115;
                    result += l_1116;
                    result += l_1117;
                    result += l_1118;
                    result += l_1119.s7;
                    result += l_1119.s6;
                    result += l_1119.s5;
                    result += l_1119.s4;
                    result += l_1119.s3;
                    result += l_1119.s2;
                    result += l_1119.s1;
                    result += l_1119.s0;
                    result += l_1120;
                    result += l_1121.s7;
                    result += l_1121.s6;
                    result += l_1121.s5;
                    result += l_1121.s4;
                    result += l_1121.s3;
                    result += l_1121.s2;
                    result += l_1121.s1;
                    result += l_1121.s0;
                    result += l_1122.w;
                    result += l_1122.z;
                    result += l_1122.y;
                    result += l_1122.x;
                    result += l_1123.s7;
                    result += l_1123.s6;
                    result += l_1123.s5;
                    result += l_1123.s4;
                    result += l_1123.s3;
                    result += l_1123.s2;
                    result += l_1123.s1;
                    result += l_1123.s0;
                    result += l_1124.sf;
                    result += l_1124.se;
                    result += l_1124.sd;
                    result += l_1124.sc;
                    result += l_1124.sb;
                    result += l_1124.sa;
                    result += l_1124.s9;
                    result += l_1124.s8;
                    result += l_1124.s7;
                    result += l_1124.s6;
                    result += l_1124.s5;
                    result += l_1124.s4;
                    result += l_1124.s3;
                    result += l_1124.s2;
                    result += l_1124.s1;
                    result += l_1124.s0;
                    result += l_1125.sf;
                    result += l_1125.se;
                    result += l_1125.sd;
                    result += l_1125.sc;
                    result += l_1125.sb;
                    result += l_1125.sa;
                    result += l_1125.s9;
                    result += l_1125.s8;
                    result += l_1125.s7;
                    result += l_1125.s6;
                    result += l_1125.s5;
                    result += l_1125.s4;
                    result += l_1125.s3;
                    result += l_1125.s2;
                    result += l_1125.s1;
                    result += l_1125.s0;
                    result += l_1126.sf;
                    result += l_1126.se;
                    result += l_1126.sd;
                    result += l_1126.sc;
                    result += l_1126.sb;
                    result += l_1126.sa;
                    result += l_1126.s9;
                    result += l_1126.s8;
                    result += l_1126.s7;
                    result += l_1126.s6;
                    result += l_1126.s5;
                    result += l_1126.s4;
                    result += l_1126.s3;
                    result += l_1126.s2;
                    result += l_1126.s1;
                    result += l_1126.s0;
                    result += l_1127.y;
                    result += l_1127.x;
                    result += l_1128;
                    result += l_1129;
                    result += l_1130;
                    result += l_1131;
                    result += l_1132;
                    result += l_1133;
                    result += l_1134;
                    atomic_add(&p_1449->l_special_values[24], result);
                }
                else
                { /* block id: 573 */
                    (1 + 1);
                }
                (*p_1449->g_746) |= (p_25 >= (1UL < p_25));
            }
            l_944 = ((*l_1168) = (255UL == (p_1449->g_616.y = (((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xE1D5L, 0xFD6FL)), 0x5F46L, 0x1D76L)).odd, ((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_1135.s20)), 255UL, 254UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(4UL, 0x3EL)), 9UL, 3UL)))).s52)).xxxyxyyy)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 4))(l_1136.zyxw)).odd, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 2))(l_1137.s02)).xxyxxyyx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(6UL, 0xBDL)).yyxyyyxy))))).s10)).yyyyxxxxxxyyyyxx)).s4d))), 251UL, 255UL, 255UL, ((p_1449->g_110.z = ((((l_1050 = p_1449->g_402.f0) >= ((((safe_div_func_uint32_t_u_u(((void*)0 != l_1143), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(l_1144.s27)).yyxyyyxyyyyxxyxx, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(p_1449->g_1145.s36)).xxyxxxyx, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(l_1146.zwxywxxwwzyywxyz)).sa9, ((VECTOR(int32_t, 4))(l_1147.wyzz)).odd))).yyyxyyyxyyyxxxyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((safe_unary_minus_func_uint32_t_u((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(5L, 0L)).yxxxyxyx)).s0 & (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(p_1449->g_608.s6, (FAKE_DIVERGE(p_1449->global_2_offset, get_global_id(2), 10) || ((*l_1166) = (((*l_1164) |= (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_1153.wzyw)), 0UL, 0x80L, 0x78L, 0xF2L)).even, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_1154.xwzz)), 1UL, 1UL, 0x45L, 0x28L)).lo))), (p_25 ^ ((safe_add_func_uint32_t_u_u(((((p_1449->g_713.sf , (safe_div_func_int16_t_s_s((((VECTOR(int8_t, 16))(l_1159.yyxyxxxyyyyyxyxy)).s5 != (p_25 & (l_943 = (safe_rshift_func_uint8_t_u_s(l_1162[4][0], p_1449->g_15))))), l_1135.s4))) , (-5L)) >= 0x42D8E530L) < 5UL), p_23)) >= l_1091.s1)), 0UL, 3UL, 0x6EL, 0x0DL, l_1137.s6, ((VECTOR(uint8_t, 2))(255UL)), l_1154.y, ((VECTOR(uint8_t, 2))(0UL)), 0UL)))).sa | p_1449->g_110.y)) , 9UL))))), l_944))))) , l_1167), p_1449->g_953.x, 0x3ED1EF84L, (-6L))).wwwwxyzxxxzyzyxx))))).scbf4)).lo, ((VECTOR(int32_t, 2))(0x7D9BA408L)), ((VECTOR(int32_t, 2))((-5L)))))).xyyx, ((VECTOR(int32_t, 4))(0x50A79F21L))))).xwxwzyww, ((VECTOR(int32_t, 8))((-1L)))))).lo, ((VECTOR(int32_t, 4))(0L))))).wxxzyyxzxyyxwwyz))))).s14)).hi)) , 3L) & 0x41C238C8L) & p_1449->g_110.w)) > p_1449->g_512.s2) > p_24)) , 0x6CL), 0xACL, 1UL))))).s27))).hi != 0x0365L))));
        }
        if (((((*l_1169) = &p_1449->g_222) != ((*l_1171) = l_1170)) != 0x6153L))
        { /* block id: 589 */
            int32_t **l_1172 = (void*)0;
            int32_t *l_1174 = &p_1449->g_36;
            int32_t **l_1173[7];
            int32_t l_1179 = 0x6543D5B4L;
            uint64_t l_1238 = 0xBF6564186D6770A7L;
            int32_t l_1241 = (-1L);
            int32_t l_1243 = 6L;
            VECTOR(int8_t, 2) l_1258 = (VECTOR(int8_t, 2))((-5L), 0x56L);
            VECTOR(int8_t, 2) l_1259 = (VECTOR(int8_t, 2))((-1L), 0x29L);
            VECTOR(int64_t, 8) l_1285 = (VECTOR(int64_t, 8))(0x37FEF51FD54EC688L, (VECTOR(int64_t, 4))(0x37FEF51FD54EC688L, (VECTOR(int64_t, 2))(0x37FEF51FD54EC688L, 0x23DD58E45F2477AAL), 0x23DD58E45F2477AAL), 0x23DD58E45F2477AAL, 0x37FEF51FD54EC688L, 0x23DD58E45F2477AAL);
            union U1 *l_1288 = &p_1449->g_643;
            VECTOR(uint16_t, 2) l_1299 = (VECTOR(uint16_t, 2))(65529UL, 0x4887L);
            int32_t l_1307 = 0x25CEB358L;
            int32_t l_1308 = 0x43BBD7B3L;
            int32_t l_1309 = 6L;
            int16_t l_1310[2][3] = {{(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L)}};
            int32_t l_1312 = 0x5146316BL;
            int32_t l_1313 = 1L;
            int32_t l_1315 = (-2L);
            int32_t l_1316 = 0x5674D00FL;
            int32_t l_1317 = 0x430F9BCFL;
            int32_t l_1318[3][3][8] = {{{1L,(-9L),1L,1L,(-9L),1L,1L,(-9L)},{1L,(-9L),1L,1L,(-9L),1L,1L,(-9L)},{1L,(-9L),1L,1L,(-9L),1L,1L,(-9L)}},{{1L,(-9L),1L,1L,(-9L),1L,1L,(-9L)},{1L,(-9L),1L,1L,(-9L),1L,1L,(-9L)},{1L,(-9L),1L,1L,(-9L),1L,1L,(-9L)}},{{1L,(-9L),1L,1L,(-9L),1L,1L,(-9L)},{1L,(-9L),1L,1L,(-9L),1L,1L,(-9L)},{1L,(-9L),1L,1L,(-9L),1L,1L,(-9L)}}};
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_1173[i] = &l_1174;
            if (((((((p_1449->g_1175[0] = l_936) == &p_24) , (safe_rshift_func_int16_t_s_u(p_25, 9))) < (p_25 ^ p_1449->g_1106.x)) || p_1449->g_897) >= ((VECTOR(int64_t, 2))(0L, 0L)).hi))
            { /* block id: 591 */
                int32_t *l_1178 = &l_1050;
                l_1179 &= ((*l_1178) |= ((VECTOR(int32_t, 2))(0x7602A5CCL, 0x52F6C46DL)).hi);
            }
            else
            { /* block id: 594 */
                int32_t *l_1180 = (void*)0;
                uint8_t **l_1182 = &l_1097;
                uint8_t ***l_1181 = &l_1182;
                int32_t l_1187[10] = {(-7L),0x4BB9AFC9L,(-5L),0x4BB9AFC9L,(-7L),(-7L),0x4BB9AFC9L,(-5L),0x4BB9AFC9L,(-7L)};
                uint16_t l_1249 = 65535UL;
                VECTOR(int8_t, 8) l_1260 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x0FL), 0x0FL), 0x0FL, 0L, 0x0FL);
                VECTOR(int8_t, 2) l_1266 = (VECTOR(int8_t, 2))((-1L), 0x29L);
                int i;
                (*p_22) = l_1180;
                (*p_1449->g_746) ^= (((*l_1181) = &l_1096) == (void*)0);
                if ((p_23 , ((~(p_1449->g_1183 , 0UL)) , (0x68C41499L > (p_1449->g_1102.y & ((*p_1449->g_481) , 0x803AL))))))
                { /* block id: 598 */
                    int64_t l_1184[2];
                    int32_t *l_1185 = (void*)0;
                    int32_t *l_1186[6];
                    VECTOR(int32_t, 16) l_1204 = (VECTOR(int32_t, 16))(0x152B2416L, (VECTOR(int32_t, 4))(0x152B2416L, (VECTOR(int32_t, 2))(0x152B2416L, 0x003414BEL), 0x003414BEL), 0x003414BEL, 0x152B2416L, 0x003414BEL, (VECTOR(int32_t, 2))(0x152B2416L, 0x003414BEL), (VECTOR(int32_t, 2))(0x152B2416L, 0x003414BEL), 0x152B2416L, 0x003414BEL, 0x152B2416L, 0x003414BEL);
                    int32_t **l_1216 = (void*)0;
                    uint64_t *l_1236 = &p_1449->g_815;
                    int16_t *l_1239 = (void*)0;
                    int16_t *l_1240 = &l_1167;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1184[i] = 9L;
                    for (i = 0; i < 6; i++)
                        l_1186[i] = &p_1449->g_111[1][1][2];
                    (*p_1449->g_746) = (l_1187[2] = l_1184[1]);
                    if ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(0x17L, 0x53L, 1L, (-1L))).yzzwywwzzxzwyyxy)).sd | 0x8CL))
                    { /* block id: 601 */
                        int32_t l_1190 = 0x5F804D61L;
                        int16_t *l_1192 = &l_1167;
                        VECTOR(uint32_t, 2) l_1198 = (VECTOR(uint32_t, 2))(8UL, 0UL);
                        int i;
                        (*p_1449->g_746) = ((p_1449->g_699.x = 7UL) < (safe_add_func_uint32_t_u_u(l_1190, (((0xD46AC39AL >= ((p_1449->g_1191 = &p_1449->g_395) != l_1192)) ^ (-10L)) || (p_1449->g_1193 , (p_25 | 1L))))));
                        (*p_1449->g_746) = (1L != ((VECTOR(int64_t, 8))(((((p_1449->g_1102.y ^ (safe_lshift_func_uint8_t_u_u(((**p_1449->g_745) <= (safe_add_func_int64_t_s_s((FAKE_DIVERGE(p_1449->local_1_offset, get_local_id(1), 10) && ((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 2))(l_1198.xx)).yxxy, ((VECTOR(uint32_t, 2))(0x230AAC87L, 4294967293UL)).yxxx))).z), ((-1L) | p_23)))), p_24))) == (l_1199 , ((VECTOR(uint16_t, 16))(0x7F73L, p_23, ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 4))(l_1200.yyyy)).xxzzwxxyxzzwyzzw, ((VECTOR(uint16_t, 4))(1UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(0x125BL, ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))((l_1204.s5 ^= (l_1201 != p_1449->g_1202)), ((VECTOR(uint8_t, 2))(246UL)), 0x98L)).yxyzzywzyyxzxzwy)), ((VECTOR(uint8_t, 16))(5UL))))).sfe, ((VECTOR(uint8_t, 2))(6UL))))), ((VECTOR(uint16_t, 4))(0x6A05L)), 0UL)).odd)).hi)), 0xB971L)).wzyxyywyyxzzxxyw, ((VECTOR(uint16_t, 16))(65534UL))))).s9218, ((VECTOR(uint16_t, 4))(0x3025L))))), ((VECTOR(uint16_t, 2))(0xFFFAL)), ((VECTOR(uint16_t, 8))(0xAD59L)))).s4)) | l_1179) & p_23), ((VECTOR(int64_t, 2))(0x4EB35A059A65849FL)), (*p_1449->g_688), 1L, (*p_1449->g_688), 0x1A58C08DB3FC8BDFL, 0L)).s1);
                    }
                    else
                    { /* block id: 607 */
                        uint64_t l_1217 = 0xDB74B5AF453794E3L;
                        uint32_t *l_1218 = &l_916;
                        atomic_min(&p_1449->l_atomic_reduction[0], (safe_rshift_func_uint8_t_u_s((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(p_1449->g_1207.s1a)).yyxxxyxyxyyxyyxx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x30L, (-1L))), 0x2DL, ((VECTOR(int8_t, 4))(p_1449->g_1208.yyyy)), p_24, ((VECTOR(int8_t, 4))(l_1209.sa0ab)), (safe_rshift_func_uint16_t_u_u((&p_1449->g_745 == (p_25 , &p_1449->g_885)), 5)), ((VECTOR(int8_t, 2))((-7L), 0x2AL)), 0x57L)).sd9)), 0x47L, (-1L))).zzwxwxywxyzywwyx, ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(l_1212.sdd5a292e)).s06, (int8_t)p_25))), 0x1BL, (-1L))), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_1449->g_1213.s1566)).zzxzxwxwxwxzyzwy)).s6d05)), p_1449->g_643.f0, 0x6BL, 0x1EL, 0x46L)).hi, ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))((((*l_1218) = ((((safe_mul_func_int16_t_s_s(((((((void*)0 == (*p_1449->g_1202)) < (l_1216 != (void*)0)) , p_1449->g_531) && 4294967291UL) == l_1217), l_1179)) != 0x18L) & 0x03L) >= 0x41C1D180414921BDL)) , p_25), ((VECTOR(int8_t, 2))(0x57L)), 6L)).even, ((VECTOR(int8_t, 2))((-1L)))))).yxxyyxxy))).hi))).zyyzxwyzxxxyzwww))))).sc ^ 0x24L), 6)) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1449->v_collective += p_1449->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                    (*p_1449->g_746) &= (-1L);
                    if ((((p_25 | p_1449->g_616.x) && (((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 16))(l_1219.sfe35389dadda283d)), (uint32_t)(6UL <= (p_23 <= (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(p_23, (((safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s(0x680BL, (!((*l_1240) = ((VECTOR(int16_t, 16))(p_25, 0x7F08L, (-2L), (-1L), (-4L), 8L, (-5L), ((l_1001[3][4] = (safe_add_func_int16_t_s_s(((((safe_sub_func_int32_t_s_s(p_24, ((safe_div_func_int32_t_s_s(((((*l_1236) = ((safe_lshift_func_int8_t_s_u(((p_1449->g_710.s9 < p_25) , p_1449->g_1145.s2), p_23)) , FAKE_DIVERGE(p_1449->global_0_offset, get_global_id(0), 10))) , l_1237[5]) == l_1179), l_1179)) , l_1238))) || (-1L)) & p_24) , 6L), p_23))) , 0x3E01L), p_25, 0x313BL, (-8L), ((VECTOR(int16_t, 2))(0x6E51L)), 0L, 0x2F00L, 0x32B4L)).se)))), p_23)) & 0UL) ^ p_1449->g_512.s3))), 2))))))).s2 , 254UL)) , l_1241))
                    { /* block id: 615 */
                        int32_t l_1242 = (-7L);
                        int32_t l_1244 = 0x79E3063AL;
                        int32_t l_1245 = 1L;
                        int32_t l_1246 = 0x67FB8FEBL;
                        int32_t l_1247 = 0L;
                        VECTOR(int32_t, 4) l_1248 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-3L)), (-3L));
                        int i;
                        l_1001[3][4] &= (*p_1449->g_746);
                        ++l_1249;
                    }
                    else
                    { /* block id: 618 */
                        return (*p_22);
                    }
                }
                else
                { /* block id: 621 */
                    uint64_t *l_1275 = (void*)0;
                    uint64_t *l_1276 = &l_1238;
                    uint16_t **l_1282 = &p_1449->g_1203[1][7];
                    if (((safe_mul_func_int8_t_s_s(p_24, (-5L))) , (safe_sub_func_uint64_t_u_u((0UL && p_25), (p_1449->g_1032.w ^= (safe_add_func_uint64_t_u_u(((*l_1276) = (((((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 8))(l_1258.yyyyxxxx)), ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_1259.xxxyyxxyyyyxyxyy)))).odd, ((VECTOR(int8_t, 8))(l_1260.s67433206))))).s23, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((-1L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_1261.yyxxyyxy)).s7055725270041755)).sd5)).hi, 1L, 0L)).even)).xyyx, ((VECTOR(int8_t, 4))(l_1262.s5325))))).xxywyyyy, ((VECTOR(int8_t, 2))(p_1449->g_1263.zy)).xxyxxyxx))).s41)).xxyxxyxxxxxyxxxx)).s6e, ((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(0L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x14L, 0x15L)), 0x22L, 0L)), (((VECTOR(uint8_t, 8))((((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(252UL, 0x4DL, ((VECTOR(uint8_t, 2))(7UL, 254UL)), 248UL, 1UL, 1UL, 255UL)).s1, p_23)) ^ ((VECTOR(int8_t, 8))(l_1266.yxyyxyyy)).s1) && (safe_div_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u((0x6FL != ((safe_div_func_uint16_t_u_u(((0L <= p_23) && (safe_add_func_uint32_t_u_u(((l_1258.y & l_1259.y) , 0UL), l_1238))), 0xBD48L)) || p_25)), l_1162[7][0])) || 0L), 18446744073709551606UL))), ((VECTOR(uint8_t, 4))(0xA3L)), ((VECTOR(uint8_t, 2))(1UL)), 0UL)).s4 | FAKE_DIVERGE(p_1449->global_1_offset, get_global_id(1), 10)), 0x6DL, (-2L))).s5172003043310211))).sc2))).xxyxxyxx))).s76)).odd && 5UL) > p_1449->g_616.x) , p_24) || l_1241) , p_1449->g_395)), p_24)))))))
                    { /* block id: 624 */
                        int8_t *l_1280[4];
                        VECTOR(int32_t, 16) l_1281 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x718738DAL), 0x718738DAL), 0x718738DAL, 1L, 0x718738DAL, (VECTOR(int32_t, 2))(1L, 0x718738DAL), (VECTOR(int32_t, 2))(1L, 0x718738DAL), 1L, 0x718738DAL, 1L, 0x718738DAL);
                        int32_t l_1287 = 0x7D24221BL;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1280[i] = (void*)0;
                        (*l_1033) = ((((0x0D288264621DDA36L <= ((VECTOR(uint64_t, 16))(p_1449->g_1277.s1063175111026427)).s5) , (safe_lshift_func_int8_t_s_u((p_1449->g_407 = (!(l_1281.sa &= 0L))), p_24))) != l_1259.x) , l_1282);
                        (*p_1449->g_746) = (-9L);
                        (*p_1449->g_746) = (l_1287 |= (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 2))(l_1285.s56)).yyxy, ((VECTOR(int64_t, 16))(p_1449->g_1286.xyxyxxxyyyxyxyyy)).s6fc4))).w, p_25)));
                    }
                    else
                    { /* block id: 631 */
                        union U1 **l_1289 = &l_1288;
                        (*l_1289) = l_1288;
                    }
                }
            }
            for (l_944 = 0; (l_944 > (-28)); l_944 = safe_sub_func_int32_t_s_s(l_944, 1))
            { /* block id: 638 */
                uint16_t *l_1304[4];
                int32_t l_1305 = 0x352AFE59L;
                int32_t l_1306[9][1][3] = {{{0x6423CB67L,0x6423CB67L,0x6423CB67L}},{{0x6423CB67L,0x6423CB67L,0x6423CB67L}},{{0x6423CB67L,0x6423CB67L,0x6423CB67L}},{{0x6423CB67L,0x6423CB67L,0x6423CB67L}},{{0x6423CB67L,0x6423CB67L,0x6423CB67L}},{{0x6423CB67L,0x6423CB67L,0x6423CB67L}},{{0x6423CB67L,0x6423CB67L,0x6423CB67L}},{{0x6423CB67L,0x6423CB67L,0x6423CB67L}},{{0x6423CB67L,0x6423CB67L,0x6423CB67L}}};
                uint8_t l_1320 = 0UL;
                union U2 l_1327 = {0x006B6DCAL};
                int64_t ***l_1334 = &l_1071;
                uint32_t *l_1335 = &l_916;
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1304[i] = (void*)0;
                if ((atomic_inc(&p_1449->g_atomic_input[83 * get_linear_group_id() + 57]) == 8))
                { /* block id: 640 */
                    uint8_t l_1292 = 1UL;
                    int16_t l_1293[1][7];
                    uint8_t l_1294 = 0x87L;
                    int32_t l_1297[4];
                    VECTOR(uint8_t, 8) l_1298 = (VECTOR(uint8_t, 8))(0x45L, (VECTOR(uint8_t, 4))(0x45L, (VECTOR(uint8_t, 2))(0x45L, 0x3EL), 0x3EL), 0x3EL, 0x45L, 0x3EL);
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                            l_1293[i][j] = 0L;
                    }
                    for (i = 0; i < 4; i++)
                        l_1297[i] = 0x16F2022AL;
                    l_1293[0][5] = l_1292;
                    ++l_1294;
                    l_1298.s0 |= l_1297[0];
                    unsigned int result = 0;
                    result += l_1292;
                    int l_1293_i0, l_1293_i1;
                    for (l_1293_i0 = 0; l_1293_i0 < 1; l_1293_i0++) {
                        for (l_1293_i1 = 0; l_1293_i1 < 7; l_1293_i1++) {
                            result += l_1293[l_1293_i0][l_1293_i1];
                        }
                    }
                    result += l_1294;
                    int l_1297_i0;
                    for (l_1297_i0 = 0; l_1297_i0 < 4; l_1297_i0++) {
                        result += l_1297[l_1297_i0];
                    }
                    result += l_1298.s7;
                    result += l_1298.s6;
                    result += l_1298.s5;
                    result += l_1298.s4;
                    result += l_1298.s3;
                    result += l_1298.s2;
                    result += l_1298.s1;
                    result += l_1298.s0;
                    atomic_add(&p_1449->g_special_values[83 * get_linear_group_id() + 57], result);
                }
                else
                { /* block id: 644 */
                    (1 + 1);
                }
                (*p_1449->g_746) = (((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))(0UL, p_24, 0xA521L, 0xFCB7L)), ((VECTOR(uint16_t, 4))(l_1299.yxyy))))).lo, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 8))(((*l_1335) &= (1L == (safe_sub_func_uint8_t_u_u(p_25, (safe_div_func_int64_t_s_s((p_1449->g_1286.y &= ((--l_1320) ^ (safe_mul_func_int8_t_s_s(1L, 0UL)))), (safe_sub_func_uint32_t_u_u(l_1258.y, (((0x01L | ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 2))(0xBAL, 0x7BL)).yxyy, ((VECTOR(uint8_t, 16))(0x5BL, (l_1327 , (safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_1330.s6727562361001702)))).s2223, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_1449->g_1331.s7537)), ((VECTOR(uint8_t, 8))(FAKE_DIVERGE(p_1449->local_2_offset, get_local_id(2), 10), (safe_add_func_uint64_t_u_u((p_25 != 18446744073709551615UL), l_1258.x)), 255UL, ((VECTOR(uint8_t, 4))(0x1CL)), 4UL)), p_24, 251UL, 1UL, 0x0EL)).s781a))).x, p_24))), p_25, 0UL, 5UL, 247UL, 5UL, 255UL, 0x54L, 0xB8L, GROUP_DIVERGE(0, 1), 0xDEL, ((VECTOR(uint8_t, 4))(0UL)))).s2bc7, ((VECTOR(uint8_t, 4))(0xB2L))))).xywwxzww)).s7) , &p_1449->g_1069) != l_1334))))))))), ((VECTOR(uint32_t, 2))(0x7185C256L)), ((VECTOR(uint32_t, 4))(0x91FB9D07L)), 0xDA279157L)).even, ((VECTOR(uint32_t, 4))(0xE9D193EFL))))))), ((VECTOR(uint32_t, 8))(4294967290UL)), 0x575E9E47L, ((VECTOR(uint32_t, 2))(0x34B412CDL)), 9UL)).lo)).s20))), ((VECTOR(uint32_t, 2))(9UL))))).odd , l_1310[1][1]);
                (*p_1449->g_746) = l_1001[0][0];
            }
        }
        else
        { /* block id: 653 */
            uint16_t *l_1336 = (void*)0;
            VECTOR(int16_t, 2) l_1340 = (VECTOR(int16_t, 2))(0L, 0x4C9EL);
            VECTOR(int16_t, 2) l_1348 = (VECTOR(int16_t, 2))((-3L), (-9L));
            int16_t *l_1356 = (void*)0;
            VECTOR(int32_t, 16) l_1357 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x7AA65C25L), 0x7AA65C25L), 0x7AA65C25L, 4L, 0x7AA65C25L, (VECTOR(int32_t, 2))(4L, 0x7AA65C25L), (VECTOR(int32_t, 2))(4L, 0x7AA65C25L), 4L, 0x7AA65C25L, 4L, 0x7AA65C25L);
            int32_t l_1365 = 0x23D71853L;
            uint8_t l_1367 = 0x71L;
            int i;
            (*p_1449->g_746) = (((((void*)0 == l_1336) < 0UL) , (((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(p_1449->g_1337.sc20020a07a486737)).even)).s3 != ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_1449->g_1338.s31)), 3L, 0x2FEE52A0AD46F689L)).z) >= (((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(l_1339.s04304272)).s32, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(l_1340.xyyyyyyyyxyyxxyy)).s76, ((VECTOR(int16_t, 4))(p_25, (p_1449->g_1341 | ((safe_lshift_func_int16_t_s_u((safe_div_func_int64_t_s_s((((l_1365 = (((safe_div_func_uint32_t_u_u(((void*)0 != &l_1071), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(l_1348.xy)), ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(p_1449->g_1349.xxyxyyxyxxyxyxyx)).hi, ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_1449->g_1350.xy)), 0x4972L, 0x4354L)), ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 8))(p_1449->g_1351.sd2e06220)), ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_1352.s21710252)).s7703443324402237)).s62, ((VECTOR(int16_t, 2))(9L, (-2L)))))).xyxyxxyx))), ((VECTOR(int16_t, 2))(l_1353.yz)).yyyyxyyy))).lo))).zxxwzzyw, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_1354.xyyyyxyx)).s2576107512203375)).s2fb8, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x3F16L, 0x1000L)), 0x1AADL, 5L))))), 0L, (l_1357.s5 = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x1A81L, ((VECTOR(int16_t, 2))(l_1355.s24)), 0L)).xzzxyxwx)))).s2), 3L, ((safe_div_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_1362[0][1], ((safe_mod_func_int64_t_s_s(l_1340.y, p_1449->g_699.x)) | GROUP_DIVERGE(0, 1)))), 0x30L)) , 0L), ((VECTOR(int16_t, 8))((-1L))))).lo))), ((VECTOR(int16_t, 8))(0x7852L))))).s73)))).xxyx, ((VECTOR(int16_t, 4))(0L))))).lo))).even)) , p_1449->g_815) == p_24)) == p_24) & FAKE_DIVERGE(p_1449->global_2_offset, get_global_id(2), 10)), p_23)), 9)) <= l_1340.y)), (-4L), 0x4345L)).odd)))))).lo , l_1366)) & l_1367)) || p_25);
            return (*p_1449->g_902);
        }
        (*p_1449->g_746) |= p_25;
    }
    else
    { /* block id: 660 */
        int16_t l_1368 = 0x089AL;
        int32_t *l_1369[10] = {&p_1449->g_111[2][2][2],(void*)0,&p_1449->g_111[2][2][2],&p_1449->g_111[2][2][2],(void*)0,&p_1449->g_111[2][2][2],&p_1449->g_111[2][2][2],(void*)0,&p_1449->g_111[2][2][2],&p_1449->g_111[2][2][2]};
        int i;
        --l_1370[1];
        (*p_22) = func_98(p_24, p_1449);
        for (p_1449->g_1193.f1 = 0; (p_1449->g_1193.f1 >= 22); p_1449->g_1193.f1 = safe_add_func_int16_t_s_s(p_1449->g_1193.f1, 4))
        { /* block id: 665 */
            for (p_1449->g_67 = 0; (p_1449->g_67 > (-1)); p_1449->g_67 = safe_sub_func_uint32_t_u_u(p_1449->g_67, 3))
            { /* block id: 668 */
                (*p_1449->g_222) = 1L;
            }
            if ((atomic_inc(&p_1449->g_atomic_input[83 * get_linear_group_id() + 47]) == 1))
            { /* block id: 672 */
                int32_t l_1377 = 0x19DEB840L;
                for (l_1377 = (-28); (l_1377 >= 23); ++l_1377)
                { /* block id: 675 */
                    int32_t l_1380 = 0x7D73A007L;
                    int32_t *l_1393 = &l_1380;
                    for (l_1380 = (-13); (l_1380 != (-23)); l_1380 = safe_sub_func_int16_t_s_s(l_1380, 4))
                    { /* block id: 678 */
                        VECTOR(int32_t, 16) l_1383 = (VECTOR(int32_t, 16))(0x2D2FDAA2L, (VECTOR(int32_t, 4))(0x2D2FDAA2L, (VECTOR(int32_t, 2))(0x2D2FDAA2L, (-1L)), (-1L)), (-1L), 0x2D2FDAA2L, (-1L), (VECTOR(int32_t, 2))(0x2D2FDAA2L, (-1L)), (VECTOR(int32_t, 2))(0x2D2FDAA2L, (-1L)), 0x2D2FDAA2L, (-1L), 0x2D2FDAA2L, (-1L));
                        int16_t l_1384 = 0x3E80L;
                        uint8_t l_1385 = 0xEFL;
                        int32_t l_1386[2][1];
                        int32_t *l_1387 = (void*)0;
                        int32_t *l_1388 = (void*)0;
                        int32_t *l_1389 = &l_1386[1][0];
                        union U0 l_1391 = {0UL};/* VOLATILE GLOBAL l_1391 */
                        union U0 *l_1390[9][2][1];
                        union U0 *l_1392 = &l_1391;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1386[i][j] = 0x603CA1C0L;
                        }
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 2; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_1390[i][j][k] = &l_1391;
                            }
                        }
                        l_1384 = ((VECTOR(int32_t, 4))(l_1383.se1d5)).y;
                        l_1387 = ((l_1386[1][0] = l_1385) , (void*)0);
                        l_1389 = l_1388;
                        l_1392 = l_1390[8][0][0];
                    }
                    l_1393 = (void*)0;
                }
                unsigned int result = 0;
                result += l_1377;
                atomic_add(&p_1449->g_special_values[83 * get_linear_group_id() + 47], result);
            }
            else
            { /* block id: 687 */
                (1 + 1);
            }
            if ((**p_22))
                break;
            (*p_1449->g_902) = (p_1449->g_1394 , (*p_22));
        }
    }
    (*p_22) = &l_1001[1][5];
    return l_1395;
}


/* ------------------------------------------ */
/* 
 * reads : p_1449->g_15 p_1449->g_36 p_1449->g_710 p_1449->g_75 p_1449->g_688 p_1449->g_689 p_1449->g_745 p_1449->g_746 p_1449->g_5 p_1449->g_643.f0 p_1449->g_422 p_1449->g_67 p_1449->g_708 p_1449->g_590 p_1449->g_885 p_1449->g_12 p_1449->g_404 p_1449->g_395 p_1449->g_531 p_1449->g_196.f0 p_1449->g_902
 * writes: p_1449->g_15 p_1449->g_36 p_1449->g_422 p_1449->g_643.f0 p_1449->g_67 p_1449->g_746 p_1449->g_12 p_1449->g_75 p_1449->g_481 p_1449->g_407 p_1449->g_404 p_1449->g_531 p_1449->g_395 p_1449->g_196.f0 p_1449->g_579
 */
int32_t ** func_27(uint32_t  p_28, int32_t  p_29, uint64_t  p_30, int64_t  p_31, int32_t  p_32, struct S3 * p_1449)
{ /* block id: 421 */
    int32_t *l_816 = &p_1449->g_643.f0;
    int32_t *l_817 = &p_1449->g_643.f0;
    int32_t *l_818 = &p_1449->g_15;
    int32_t *l_819 = &p_1449->g_67;
    int32_t *l_820 = &p_1449->g_643.f0;
    int32_t *l_821 = &p_1449->g_12;
    int32_t *l_822 = (void*)0;
    int32_t *l_823 = (void*)0;
    int32_t *l_824 = &p_1449->g_75;
    int32_t *l_825[8][5] = {{&p_1449->g_67,(void*)0,&p_1449->g_111[9][6][0],&p_1449->g_12,&p_1449->g_111[9][6][0]},{&p_1449->g_67,(void*)0,&p_1449->g_111[9][6][0],&p_1449->g_12,&p_1449->g_111[9][6][0]},{&p_1449->g_67,(void*)0,&p_1449->g_111[9][6][0],&p_1449->g_12,&p_1449->g_111[9][6][0]},{&p_1449->g_67,(void*)0,&p_1449->g_111[9][6][0],&p_1449->g_12,&p_1449->g_111[9][6][0]},{&p_1449->g_67,(void*)0,&p_1449->g_111[9][6][0],&p_1449->g_12,&p_1449->g_111[9][6][0]},{&p_1449->g_67,(void*)0,&p_1449->g_111[9][6][0],&p_1449->g_12,&p_1449->g_111[9][6][0]},{&p_1449->g_67,(void*)0,&p_1449->g_111[9][6][0],&p_1449->g_12,&p_1449->g_111[9][6][0]},{&p_1449->g_67,(void*)0,&p_1449->g_111[9][6][0],&p_1449->g_12,&p_1449->g_111[9][6][0]}};
    uint32_t l_826 = 8UL;
    uint16_t *l_839 = (void*)0;
    VECTOR(uint32_t, 16) l_844 = (VECTOR(uint32_t, 16))(0xD8ED3ED5L, (VECTOR(uint32_t, 4))(0xD8ED3ED5L, (VECTOR(uint32_t, 2))(0xD8ED3ED5L, 0UL), 0UL), 0UL, 0xD8ED3ED5L, 0UL, (VECTOR(uint32_t, 2))(0xD8ED3ED5L, 0UL), (VECTOR(uint32_t, 2))(0xD8ED3ED5L, 0UL), 0xD8ED3ED5L, 0UL, 0xD8ED3ED5L, 0UL);
    uint64_t *l_883[10];
    int i, j;
    for (i = 0; i < 10; i++)
        l_883[i] = &p_1449->g_815;
    l_826++;
    for (p_1449->g_15 = 0; (p_1449->g_15 >= 15); ++p_1449->g_15)
    { /* block id: 425 */
        if (p_30)
            break;
    }
    for (p_1449->g_36 = 14; (p_1449->g_36 != (-25)); p_1449->g_36--)
    { /* block id: 430 */
        uint32_t l_842 = 8UL;
        int16_t *l_845 = (void*)0;
        int16_t *l_846 = (void*)0;
        int16_t *l_847[4][1][10] = {{{&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395}},{{&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395}},{{&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395}},{{&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395}}};
        int32_t l_850 = 0x7FFA26ACL;
        int32_t l_851[9][9][3] = {{{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L}},{{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L}},{{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L}},{{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L}},{{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L}},{{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L}},{{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L}},{{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L}},{{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L},{1L,9L,0L}}};
        uint16_t **l_854 = &l_839;
        VECTOR(int32_t, 2) l_886 = (VECTOR(int32_t, 2))((-4L), 1L);
        VECTOR(uint16_t, 16) l_898 = (VECTOR(uint16_t, 16))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 0x0ABAL), 0x0ABAL), 0x0ABAL, 5UL, 0x0ABAL, (VECTOR(uint16_t, 2))(5UL, 0x0ABAL), (VECTOR(uint16_t, 2))(5UL, 0x0ABAL), 5UL, 0x0ABAL, 5UL, 0x0ABAL);
        uint64_t l_899 = 2UL;
        int i, j, k;
        (*l_817) = ((*l_818) = (~(safe_div_func_int64_t_s_s(p_28, ((l_851[5][5][2] ^= ((safe_lshift_func_int8_t_s_s(((safe_div_func_uint16_t_u_u(((l_839 != l_839) && 0xCFL), (l_850 = (safe_mul_func_uint8_t_u_u(((l_842 , ((p_1449->g_422.x = (safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 8))(l_844.s804a3331)).s2))) | (safe_lshift_func_uint8_t_u_u(253UL, 7)))) == ((p_1449->g_710.s6 && ((p_1449->g_75 && (-1L)) && (*p_1449->g_688))) && 0xC2L)), p_30))))) , 0x02L), 1)) < 0x4A3CL)) && (*p_1449->g_688))))));
        for (p_1449->g_67 = (-3); (p_1449->g_67 != 3); ++p_1449->g_67)
        { /* block id: 438 */
            VECTOR(uint8_t, 8) l_869 = (VECTOR(uint8_t, 8))(0xEAL, (VECTOR(uint8_t, 4))(0xEAL, (VECTOR(uint8_t, 2))(0xEAL, 0xD8L), 0xD8L), 0xD8L, 0xEAL, 0xD8L);
            int8_t *l_884 = &p_1449->g_407;
            VECTOR(int32_t, 8) l_888 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4A420B09L), 0x4A420B09L), 0x4A420B09L, (-1L), 0x4A420B09L);
            int64_t *l_890 = (void*)0;
            int64_t *l_891 = (void*)0;
            int64_t *l_892 = (void*)0;
            int32_t **l_895 = &l_823;
            int32_t ***l_896 = &l_895;
            int i;
            if (((*l_820) = l_851[5][5][2]))
            { /* block id: 440 */
                uint16_t ***l_855 = &l_854;
                VECTOR(uint64_t, 4) l_864 = (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 0x508A9D3F85E504C1L), 0x508A9D3F85E504C1L);
                int i;
                if ((**p_1449->g_745))
                    break;
                (*p_1449->g_885) = (((((VECTOR(uint16_t, 2))(65533UL, 0x2F24L)).lo <= ((*l_818) && ((((*l_855) = l_854) != (void*)0) , (safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_1449->group_2_offset, get_group_id(2), 10), 2)), ((*l_816) , (safe_sub_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_864.zy)), 9UL, 0x02538894A31017BAL)).yxyzzzyw))).s72)), 0xC322C6B82E040F26L, 9UL)).zzxxyzwy)).s3, (((safe_div_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_869.s26)).yxxyxyxy)).s12)).odd, (((p_1449->g_422.x |= (safe_unary_minus_func_int64_t_s(((VECTOR(int64_t, 2))(0x0CABDBE42FC0CF1FL, (-1L))).odd))) && (safe_sub_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((1L || (FAKE_DIVERGE(p_1449->group_1_offset, get_group_id(1), 10) , ((safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((p_1449->g_67 > ((safe_add_func_int16_t_s_s(((~0x5D90B272L) <= ((((+(p_1449->g_710.s9 == (((((safe_add_func_int16_t_s_s(((p_31 <= 0L) ^ 0x96E6L), 65535UL)) , 0xA1AE7ADBL) < 0x7B3AF2D3L) , l_883[3]) != (void*)0))) , &p_1449->g_407) == l_884) , p_28)), l_851[5][5][2])) > FAKE_DIVERGE(p_1449->global_2_offset, get_global_id(2), 10))), l_869.s5)), l_842)) < p_30))), l_864.z)) > l_869.s1), 0x5034L))) > p_32))) == p_31), p_30)) & 0xD193BD6A2ABA334AL) == p_1449->g_75))) | p_32), p_1449->g_708.s0)))))))) != p_1449->g_590.w) , (*p_1449->g_745));
                (*l_821) ^= (-1L);
            }
            else
            { /* block id: 446 */
                (*l_821) &= ((*l_817) &= p_29);
            }
            l_898.sf = (((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_886.yx)).xyxx, ((VECTOR(int32_t, 16))(0L, 5L, ((VECTOR(int32_t, 2))(p_1449->g_887.s27)), 7L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_888.s3015)).odd)), (-8L), 0x4B2431DEL)), ((VECTOR(int32_t, 16))(p_1449->g_889.wxwzzxxyzzzwxxxz)).scfb0))).even)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-7L), 0x7F6CFF56L)))))), 0x2AA5E2BEL, (!(((p_29 , ((-1L) && l_869.s3)) & ((((((p_1449->g_705.s0 < (l_888.s6 = p_29)) ^ (safe_rshift_func_uint8_t_u_s(((((*p_1449->g_811) = func_87(((*l_896) = l_895), p_1449)) != (void*)0) && l_886.x), 6))) ^ p_1449->g_897) > 65535UL) || 0xF4900DE3F9AAEBF5L) == p_1449->g_404)) >= 0xDD5B4F169CF02049L)), 0x3E9C1E59L, p_29, 1L, (-1L), (-9L))).sb1b4, ((VECTOR(int32_t, 4))(0x3DBAFFD5L))))).lo)), ((VECTOR(int32_t, 2))(0x74943D91L)), 0x111E356DL, 0x6A122910L, 0x4012EC2BL, 0x22954795L, 1L, p_32, ((VECTOR(int32_t, 2))((-1L))), 0x7828F753L, (-2L), 0x646737BFL, 0x3420F275L)).s2 < p_32) < 1UL) , l_842);
            p_1449->g_579[1][0][3] = func_85(&l_851[5][5][2], p_1449);
        }
        l_899--;
        if (p_32)
            break;
    }
    return p_1449->g_902;
}


/* ------------------------------------------ */
/* 
 * reads : p_1449->g_36 p_1449->g_5 p_1449->g_111 p_1449->g_75 p_1449->l_comm_values p_1449->g_12 p_1449->g_213 p_1449->g_110 p_1449->g_8 p_1449->g_395 p_1449->g_7 p_1449->g_407 p_1449->g_196.f0 p_1449->g_404 p_1449->g_422 p_1449->g_531 p_1449->g_67 p_1449->g_608 p_1449->g_616 p_1449->g_402.f0 p_1449->g_630 p_1449->g_643.f0 p_1449->g_689
 * writes: p_1449->g_36 p_1449->g_67 p_1449->g_75 p_1449->g_111 p_1449->g_2 p_1449->g_213 p_1449->g_222 p_1449->g_395 p_1449->g_407 p_1449->g_404 p_1449->g_196.f0 p_1449->g_481 p_1449->g_531 p_1449->g_505 p_1449->g_647
 */
uint8_t  func_46(int32_t  p_47, int64_t  p_48, int32_t ** p_49, struct S3 * p_1449)
{ /* block id: 24 */
    uint8_t l_59 = 255UL;
    int32_t *l_66[4][7] = {{&p_1449->g_36,(void*)0,&p_1449->g_36,(void*)0,&p_1449->g_36,&p_1449->g_36,(void*)0},{&p_1449->g_36,(void*)0,&p_1449->g_36,(void*)0,&p_1449->g_36,&p_1449->g_36,(void*)0},{&p_1449->g_36,(void*)0,&p_1449->g_36,(void*)0,&p_1449->g_36,&p_1449->g_36,(void*)0},{&p_1449->g_36,(void*)0,&p_1449->g_36,(void*)0,&p_1449->g_36,&p_1449->g_36,(void*)0}};
    int32_t l_595 = 0x568F7FDCL;
    int32_t l_597 = (-1L);
    int32_t l_599 = 0x738D0083L;
    int64_t l_622 = 0x4797A891B4D899D8L;
    VECTOR(int8_t, 16) l_636 = (VECTOR(int8_t, 16))(0x1EL, (VECTOR(int8_t, 4))(0x1EL, (VECTOR(int8_t, 2))(0x1EL, 0x15L), 0x15L), 0x15L, 0x1EL, 0x15L, (VECTOR(int8_t, 2))(0x1EL, 0x15L), (VECTOR(int8_t, 2))(0x1EL, 0x15L), 0x1EL, 0x15L, 0x1EL, 0x15L);
    VECTOR(int8_t, 16) l_638 = (VECTOR(int8_t, 16))(0x56L, (VECTOR(int8_t, 4))(0x56L, (VECTOR(int8_t, 2))(0x56L, (-2L)), (-2L)), (-2L), 0x56L, (-2L), (VECTOR(int8_t, 2))(0x56L, (-2L)), (VECTOR(int8_t, 2))(0x56L, (-2L)), 0x56L, (-2L), 0x56L, (-2L));
    VECTOR(uint16_t, 8) l_654 = (VECTOR(uint16_t, 8))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 2UL), 2UL), 2UL, 65531UL, 2UL);
    int16_t *l_660 = (void*)0;
    int16_t **l_659 = &l_660;
    int32_t l_739[4][8] = {{1L,1L,(-3L),0x18D96049L,0x375907F9L,0x18D96049L,(-3L),1L},{1L,1L,(-3L),0x18D96049L,0x375907F9L,0x18D96049L,(-3L),1L},{1L,1L,(-3L),0x18D96049L,0x375907F9L,0x18D96049L,(-3L),1L},{1L,1L,(-3L),0x18D96049L,0x375907F9L,0x18D96049L,(-3L),1L}};
    VECTOR(int16_t, 16) l_805 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x274CL), 0x274CL), 0x274CL, 0L, 0x274CL, (VECTOR(int16_t, 2))(0L, 0x274CL), (VECTOR(int16_t, 2))(0L, 0x274CL), 0L, 0x274CL, 0L, 0x274CL);
    int i, j;
    for (p_1449->g_36 = 0; (p_1449->g_36 >= 13); p_1449->g_36++)
    { /* block id: 27 */
        int16_t *l_594 = &p_1449->g_395;
        int16_t **l_593[8][4][8] = {{{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0}},{{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0}},{{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0}},{{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0}},{{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0}},{{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0}},{{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0}},{{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0},{&l_594,&l_594,&l_594,&l_594,&l_594,&l_594,(void*)0,(void*)0}}};
        int32_t l_598 = 0x5DCC16EDL;
        union U2 **l_614 = &p_1449->g_207[2][0];
        VECTOR(int32_t, 8) l_627 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
        VECTOR(int32_t, 16) l_628 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x6D410439L), 0x6D410439L), 0x6D410439L, 6L, 0x6D410439L, (VECTOR(int32_t, 2))(6L, 0x6D410439L), (VECTOR(int32_t, 2))(6L, 0x6D410439L), 6L, 0x6D410439L, 6L, 0x6D410439L);
        VECTOR(int32_t, 4) l_629 = (VECTOR(int32_t, 4))(0x78EA331BL, (VECTOR(int32_t, 2))(0x78EA331BL, (-2L)), (-2L));
        uint8_t *l_633 = &l_59;
        VECTOR(int8_t, 2) l_637 = (VECTOR(int8_t, 2))(0x2EL, 0x6BL);
        VECTOR(int8_t, 16) l_639 = (VECTOR(int8_t, 16))(5L, (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0x3EL), 0x3EL), 0x3EL, 5L, 0x3EL, (VECTOR(int8_t, 2))(5L, 0x3EL), (VECTOR(int8_t, 2))(5L, 0x3EL), 5L, 0x3EL, 5L, 0x3EL);
        union U1 *l_642 = &p_1449->g_643;
        union U1 **l_644 = (void*)0;
        union U1 **l_645 = (void*)0;
        union U1 **l_646 = &l_642;
        int64_t *l_655 = &l_622;
        uint8_t *l_656 = (void*)0;
        uint32_t *l_657[2][5][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        uint64_t l_658 = 0xA88838F2F17B16D7L;
        VECTOR(int32_t, 16) l_677 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-6L)), (-6L)), (-6L), 1L, (-6L), (VECTOR(int32_t, 2))(1L, (-6L)), (VECTOR(int32_t, 2))(1L, (-6L)), 1L, (-6L), 1L, (-6L));
        VECTOR(int64_t, 8) l_682 = (VECTOR(int64_t, 8))(0x532533AD5B7BF98EL, (VECTOR(int64_t, 4))(0x532533AD5B7BF98EL, (VECTOR(int64_t, 2))(0x532533AD5B7BF98EL, 0x74C770D3975FB435L), 0x74C770D3975FB435L), 0x74C770D3975FB435L, 0x532533AD5B7BF98EL, 0x74C770D3975FB435L);
        VECTOR(int16_t, 8) l_702 = (VECTOR(int16_t, 8))(0x58EFL, (VECTOR(int16_t, 4))(0x58EFL, (VECTOR(int16_t, 2))(0x58EFL, 0x6B7AL), 0x6B7AL), 0x6B7AL, 0x58EFL, 0x6B7AL);
        VECTOR(int16_t, 2) l_703 = (VECTOR(int16_t, 2))(0x1F05L, 0x0CF5L);
        VECTOR(int8_t, 8) l_709 = (VECTOR(int8_t, 8))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), (-1L)), (-1L)), (-1L), (-10L), (-1L));
        int16_t l_777 = 0L;
        VECTOR(int16_t, 8) l_804 = (VECTOR(int16_t, 8))(0x1D66L, (VECTOR(int16_t, 4))(0x1D66L, (VECTOR(int16_t, 2))(0x1D66L, (-7L)), (-7L)), (-7L), 0x1D66L, (-7L));
        int i, j, k;
        (**p_49) ^= l_59;
        for (p_48 = 9; (p_48 < 29); p_48 = safe_add_func_uint8_t_u_u(p_48, 3))
        { /* block id: 31 */
            uint16_t l_581 = 65535UL;
            int8_t *l_596[3][5][2] = {{{(void*)0,&p_1449->g_407},{(void*)0,&p_1449->g_407},{(void*)0,&p_1449->g_407},{(void*)0,&p_1449->g_407},{(void*)0,&p_1449->g_407}},{{(void*)0,&p_1449->g_407},{(void*)0,&p_1449->g_407},{(void*)0,&p_1449->g_407},{(void*)0,&p_1449->g_407},{(void*)0,&p_1449->g_407}},{{(void*)0,&p_1449->g_407},{(void*)0,&p_1449->g_407},{(void*)0,&p_1449->g_407},{(void*)0,&p_1449->g_407},{(void*)0,&p_1449->g_407}}};
            uint16_t *l_609 = &l_581;
            uint64_t **l_615 = &p_1449->g_505;
            int32_t l_621[4][4];
            int32_t l_623[6][5] = {{8L,0x78FAD69CL,(-1L),0x78FAD69CL,8L},{8L,0x78FAD69CL,(-1L),0x78FAD69CL,8L},{8L,0x78FAD69CL,(-1L),0x78FAD69CL,8L},{8L,0x78FAD69CL,(-1L),0x78FAD69CL,8L},{8L,0x78FAD69CL,(-1L),0x78FAD69CL,8L},{8L,0x78FAD69CL,(-1L),0x78FAD69CL,8L}};
            uint8_t *l_624[1];
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 4; j++)
                    l_621[i][j] = (-8L);
            }
            for (i = 0; i < 1; i++)
                l_624[i] = (void*)0;
            (*p_49) = (((safe_add_func_uint32_t_u_u(func_64(l_66[3][4], p_1449), l_581)) , l_581) , (*p_49));
            l_599 &= (safe_rshift_func_int16_t_s_u(0x4B69L, (safe_lshift_func_int16_t_s_u((((void*)0 != &p_1449->g_36) && p_1449->g_110.x), (((safe_mod_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(p_1449->g_590.wwwyzxzxwywwwyyz)).s9, ((l_59 && (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x2783863EL, 0UL)), ((VECTOR(uint32_t, 4))((p_1449->g_509 , ((l_597 = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 4))(4294967295UL, 7UL, 0x12D75FF8L, 0x5EC8790AL)).xzzyzxyx, ((VECTOR(uint32_t, 8))(((void*)0 == l_593[4][1][3]), ((p_1449->g_505 = &p_1449->g_404) == (void*)0), 4294967295UL, GROUP_DIVERGE(0, 1), 0xE593CFB3L, l_595, 4294967293UL, 0x049ECEA2L)), ((VECTOR(uint32_t, 8))(0xB319E10EL))))).odd)).xyywxwxxzzwwwwwy, ((VECTOR(uint32_t, 16))(0xFE0A1389L)), ((VECTOR(uint32_t, 16))(4294967288UL))))).sb6)).hi > p_1449->g_429.s7)) && l_598)), ((VECTOR(uint32_t, 2))(0xC1C54CAFL)), 0x022B91FEL)), 0UL, 8UL)).s4, p_1449->g_67))) && p_47))), p_48)) , l_59) , p_47)))));
            (**p_49) &= (safe_rshift_func_uint8_t_u_s((l_598 = (safe_div_func_int64_t_s_s((safe_add_func_uint32_t_u_u((p_1449->g_395 && (safe_add_func_int32_t_s_s((((*l_609) = ((VECTOR(uint16_t, 16))(p_1449->g_608.s3a36dba307122d5b)).sb) < (((p_1449->g_407 = (safe_sub_func_uint32_t_u_u((0x3AE52DC7L > ((((l_599 <= (((void*)0 != l_614) , (((*l_615) = &p_1449->g_404) == (void*)0))) , ((VECTOR(uint8_t, 8))(p_1449->g_616.xxyxxxyy)).s3) || (safe_div_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((4L ^ (l_622 ^= (l_621[0][0] = (p_47 | l_598)))) < 0UL), l_623[1][4])), 0x4C2AE236E9C2E0EAL))) > (-1L))), p_48))) < p_47) > 0x7564L)), l_598))), 0x7895D8E9L)), l_599))), p_1449->g_402.f0));
        }
        (**p_49) = ((safe_rshift_func_int16_t_s_s(((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_627.s26717407)).odd)).even)).yxyy, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_628.se7)), ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(l_629.xyyywwyzyxzyxzyz)).s8003))), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 8))(p_1449->g_630.s15160737)).s7206367047643061, ((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x018CL, 0x0074L)), (-6L), (-6L))).yzxyzwyz)).s6241644720411010, ((VECTOR(int16_t, 16))(5L, (safe_div_func_uint8_t_u_u((++(*l_633)), ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 4))(l_636.se45e)).xxxxwxyzwzzwywzy, ((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_637.xy)).xyyy)).wyyzwzww)).hi, ((VECTOR(int8_t, 16))(l_638.sae1b049357667deb)).s141f))).ywwzywxywzzzyzyx))).s34, ((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(l_639.s51b8793fd550eed6)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((+0xE8D5B876FA1D66A0L) , (l_637.y && (safe_add_func_uint16_t_u_u((((*l_646) = l_642) != (p_1449->g_647[1] = &p_1449->g_643)), (((((l_658 = (p_48 || (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((((safe_sub_func_uint16_t_u_u(p_1449->g_643.f0, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_654.s02)).xxyyyxxy)).s6575014601612660)).s12)), 0xE97FL, 0x745EL)).x)) , l_655) != &p_48), (l_598 = p_1449->g_36))), 0x08L)))) , (-1L)) != l_639.s1) , l_659) == &l_594))))), p_48, (-1L), 0x44L)).zwwzyxwx)))).s3517766751773035, ((VECTOR(int8_t, 16))((-7L)))))).s6b))), (-1L), 0L)).hi, (int8_t)p_1449->g_196.f0, (int8_t)7L))), 0x24L, ((VECTOR(int8_t, 2))(0x06L)), 0x43L, 0x31L, 0x7BL)).odd)).xwyzxxyx, ((VECTOR(int8_t, 8))((-2L))), ((VECTOR(int8_t, 8))(0x04L))))).s2)), ((VECTOR(int16_t, 2))(0x16F3L)), ((VECTOR(int16_t, 8))((-1L))), p_48, (-7L), 0x5E55L, (-7L)))))).s2773)).zxzxzzyyxxxyyxxz, ((VECTOR(int16_t, 16))(0x7623L)))))))).sfbcf, ((VECTOR(int16_t, 4))(0x4C67L))))).wwyzxzwyzxyyzwxx)), ((VECTOR(int16_t, 16))(0x5E05L))))))))).s07)), 2L, 0L)).xyzywyyxzwxxzyxy, ((VECTOR(int16_t, 16))(2L))))).s2616)).zwzxywzwyzwxxxyz, ((VECTOR(uint16_t, 16))(0x9C48L))))).scf70, ((VECTOR(int32_t, 4))(0x2D56E7B4L))))))).s26, ((VECTOR(int32_t, 2))(8L))))), ((VECTOR(int32_t, 4))(0x75F8198AL)))).s0452364170241035)).s7d, ((VECTOR(int32_t, 2))(3L))))).xyxyyxxx, ((VECTOR(int32_t, 8))(0x3180E4EAL))))), (**p_49), l_654.s6, 1L, 0x67934836L, 0x089BBC1CL, ((VECTOR(int32_t, 2))((-5L))), (-10L))).s14, ((VECTOR(int32_t, 2))(6L))))).xyyx, ((VECTOR(int32_t, 4))(0x396CB15FL))))).wyxzxxzy)).s7 & p_1449->g_196.f0) | p_48), 7)) != FAKE_DIVERGE(p_1449->group_2_offset, get_group_id(2), 10));
        for (p_1449->g_407 = 0; (p_1449->g_407 > 17); ++p_1449->g_407)
        { /* block id: 363 */
            uint16_t l_687[2][2] = {{0UL,0UL},{0UL,0UL}};
            int32_t l_725 = 0x53843BCAL;
            uint32_t l_740 = 0UL;
            uint8_t *l_793 = &l_59;
            uint32_t **l_813 = &l_657[1][3][1];
            int i, j;
            (1 + 1);
        }
    }
    return p_1449->g_689;
}


/* ------------------------------------------ */
/* 
 * reads : p_1449->g_67 p_1449->g_5 p_1449->g_111 p_1449->g_75 p_1449->l_comm_values p_1449->g_12 p_1449->g_213 p_1449->g_110 p_1449->g_36 p_1449->g_8 p_1449->g_395 p_1449->g_7 p_1449->g_407 p_1449->g_196.f0 p_1449->g_404 p_1449->g_422 p_1449->g_531
 * writes: p_1449->g_67 p_1449->g_75 p_1449->g_111 p_1449->g_2 p_1449->g_213 p_1449->g_222 p_1449->g_395 p_1449->g_407 p_1449->g_404 p_1449->g_196.f0 p_1449->g_481 p_1449->g_531
 */
uint32_t  func_64(int32_t * p_65, struct S3 * p_1449)
{ /* block id: 32 */
    int16_t l_73 = 0x0375L;
    int32_t l_78[1];
    uint32_t l_101 = 1UL;
    int i;
    for (i = 0; i < 1; i++)
        l_78[i] = 0x0679DD5AL;
    for (p_1449->g_67 = (-13); (p_1449->g_67 < (-1)); p_1449->g_67++)
    { /* block id: 35 */
        int32_t *l_70 = (void*)0;
        int32_t *l_71 = (void*)0;
        int32_t *l_72 = (void*)0;
        int32_t *l_74 = &p_1449->g_75;
        int32_t *l_76 = &p_1449->g_75;
        int32_t *l_77[9][6] = {{&p_1449->g_12,&p_1449->g_12,&p_1449->g_75,(void*)0,&p_1449->g_8,&p_1449->g_67},{&p_1449->g_12,&p_1449->g_12,&p_1449->g_75,(void*)0,&p_1449->g_8,&p_1449->g_67},{&p_1449->g_12,&p_1449->g_12,&p_1449->g_75,(void*)0,&p_1449->g_8,&p_1449->g_67},{&p_1449->g_12,&p_1449->g_12,&p_1449->g_75,(void*)0,&p_1449->g_8,&p_1449->g_67},{&p_1449->g_12,&p_1449->g_12,&p_1449->g_75,(void*)0,&p_1449->g_8,&p_1449->g_67},{&p_1449->g_12,&p_1449->g_12,&p_1449->g_75,(void*)0,&p_1449->g_8,&p_1449->g_67},{&p_1449->g_12,&p_1449->g_12,&p_1449->g_75,(void*)0,&p_1449->g_8,&p_1449->g_67},{&p_1449->g_12,&p_1449->g_12,&p_1449->g_75,(void*)0,&p_1449->g_8,&p_1449->g_67},{&p_1449->g_12,&p_1449->g_12,&p_1449->g_75,(void*)0,&p_1449->g_8,&p_1449->g_67}};
        uint8_t l_79 = 0x01L;
        uint64_t l_97 = 18446744073709551615UL;
        int i, j;
        l_79--;
        for (l_79 = (-4); (l_79 != 23); ++l_79)
        { /* block id: 39 */
            VECTOR(uint64_t, 16) l_100 = (VECTOR(uint64_t, 16))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x9EBF7ADE520ED3B4L), 0x9EBF7ADE520ED3B4L), 0x9EBF7ADE520ED3B4L, 18446744073709551614UL, 0x9EBF7ADE520ED3B4L, (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x9EBF7ADE520ED3B4L), (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x9EBF7ADE520ED3B4L), 18446744073709551614UL, 0x9EBF7ADE520ED3B4L, 18446744073709551614UL, 0x9EBF7ADE520ED3B4L);
            int64_t *l_118 = (void*)0;
            int32_t l_119 = 0x1E949441L;
            int32_t **l_580 = (void*)0;
            int i;
            if ((atomic_inc(&p_1449->g_atomic_input[83 * get_linear_group_id() + 44]) == 3))
            { /* block id: 41 */
                int32_t *l_84 = (void*)0;
                l_84 = l_84;
                unsigned int result = 0;
                atomic_add(&p_1449->g_special_values[83 * get_linear_group_id() + 44], result);
            }
            else
            { /* block id: 43 */
                (1 + 1);
            }
            l_72 = func_85(func_87(func_89((func_93(l_97, l_78[0], func_98(((l_100.s2 < l_78[0]) != (l_101 = ((VECTOR(int8_t, 2))(0x7FL, 0x3CL)).even)), p_1449), p_1449) , 0x55331A3BL), ((l_119 |= ((safe_unary_minus_func_int16_t_s((&p_1449->g_67 != &p_1449->g_15))) < GROUP_DIVERGE(0, 1))) <= l_73), p_65, p_1449), p_1449), p_1449);
        }
    }
    return l_78[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1449->g_75 p_1449->g_196.f0 p_1449->g_12 p_1449->g_404 p_1449->g_395 p_1449->g_422 p_1449->g_531
 * writes: p_1449->g_75 p_1449->g_481 p_1449->g_407 p_1449->g_404 p_1449->g_531 p_1449->g_395 p_1449->g_196.f0
 */
int32_t * func_85(int32_t * p_86, struct S3 * p_1449)
{ /* block id: 276 */
    uint64_t l_479 = 18446744073709551614UL;
    int32_t l_493 = (-4L);
    int32_t l_494 = 0x0A445D62L;
    VECTOR(int32_t, 16) l_495 = (VECTOR(int32_t, 16))(0x64DE1DA6L, (VECTOR(int32_t, 4))(0x64DE1DA6L, (VECTOR(int32_t, 2))(0x64DE1DA6L, 0x5D57140DL), 0x5D57140DL), 0x5D57140DL, 0x64DE1DA6L, 0x5D57140DL, (VECTOR(int32_t, 2))(0x64DE1DA6L, 0x5D57140DL), (VECTOR(int32_t, 2))(0x64DE1DA6L, 0x5D57140DL), 0x64DE1DA6L, 0x5D57140DL, 0x64DE1DA6L, 0x5D57140DL);
    union U2 *l_510[5];
    VECTOR(int32_t, 8) l_514 = (VECTOR(int32_t, 8))(0x30B87182L, (VECTOR(int32_t, 4))(0x30B87182L, (VECTOR(int32_t, 2))(0x30B87182L, 0x7E38BC9CL), 0x7E38BC9CL), 0x7E38BC9CL, 0x30B87182L, 0x7E38BC9CL);
    VECTOR(int8_t, 4) l_523 = (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 1L), 1L);
    int8_t *l_566 = &p_1449->g_407;
    VECTOR(uint16_t, 16) l_578 = (VECTOR(uint16_t, 16))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 6UL), 6UL), 6UL, 65533UL, 6UL, (VECTOR(uint16_t, 2))(65533UL, 6UL), (VECTOR(uint16_t, 2))(65533UL, 6UL), 65533UL, 6UL, 65533UL, 6UL);
    int i;
    for (i = 0; i < 5; i++)
        l_510[i] = &p_1449->g_196;
    for (p_1449->g_75 = 19; (p_1449->g_75 <= 22); ++p_1449->g_75)
    { /* block id: 279 */
        int32_t *l_477[10][1][9] = {{{&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0]}},{{&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0]}},{{&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0]}},{{&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0]}},{{&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0]}},{{&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0]}},{{&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0]}},{{&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0]}},{{&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0]}},{{&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0],&p_1449->g_111[9][6][0],&p_1449->g_111[7][1][1],&p_1449->g_111[9][6][0]}}};
        int8_t l_478[8] = {0x07L,0x07L,0x07L,0x07L,0x07L,0x07L,0x07L,0x07L};
        volatile union U1 **l_482 = &p_1449->g_481;
        VECTOR(uint32_t, 2) l_496 = (VECTOR(uint32_t, 2))(0x45BC19C8L, 0xE6182E7BL);
        uint64_t *l_503 = (void*)0;
        int32_t l_506 = 0x4C6270C2L;
        uint64_t *l_507[1][10][10] = {{{&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479},{&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479,&l_479}}};
        int16_t *l_562 = &p_1449->g_395;
        int i, j, k;
        l_479 |= (l_478[4] = (*p_86));
        (*l_482) = &p_1449->g_402;
        for (p_1449->g_407 = 0; (p_1449->g_407 <= (-2)); p_1449->g_407 = safe_sub_func_int16_t_s_s(p_1449->g_407, 4))
        { /* block id: 285 */
            int32_t l_491[9] = {0x446E08E0L,0x446E08E0L,0x446E08E0L,0x446E08E0L,0x446E08E0L,0x446E08E0L,0x446E08E0L,0x446E08E0L,0x446E08E0L};
            int32_t l_492 = 0x1D4FC97CL;
            uint64_t **l_504[7] = {&l_503,&l_503,&l_503,&l_503,&l_503,&l_503,&l_503};
            VECTOR(int32_t, 4) l_513 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6A87B755L), 0x6A87B755L);
            uint32_t l_541[9][5][5];
            int16_t **l_567 = &l_562;
            int i, j, k;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_541[i][j][k] = 4294967295UL;
                }
            }
            for (l_479 = 0; (l_479 <= 6); l_479 = safe_add_func_uint64_t_u_u(l_479, 3))
            { /* block id: 288 */
                uint64_t *l_487 = &p_1449->g_404;
                int32_t l_490 = 0x25067DC0L;
                l_492 |= (l_491[8] = (((*l_487)--) >= l_490));
            }
            l_496.x++;
            l_493 = 0x355E8F43L;
            if (((((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))((p_1449->g_15 > p_1449->g_111[5][4][0]), (safe_div_func_uint8_t_u_u(255UL, ((l_492 = (-1L)) , (l_493 ^ (((p_1449->g_505 = l_503) != (l_506 , l_507[0][0][7])) && ((((safe_unary_minus_func_int64_t_s(((void*)0 != p_86))) != FAKE_DIVERGE(p_1449->group_1_offset, get_group_id(1), 10)) , p_1449->g_509) , p_1449->g_75)))))), ((VECTOR(int16_t, 4))(8L)), (-1L), 0x6009L)).s5014551760170140)).lo, ((VECTOR(int16_t, 8))(4L)), ((VECTOR(int16_t, 8))((-1L)))))).s0, FAKE_DIVERGE(p_1449->group_2_offset, get_group_id(2), 10))) | p_1449->g_395) && 65535UL) >= p_1449->g_422.z))
            { /* block id: 297 */
                VECTOR(int32_t, 16) l_511 = (VECTOR(int32_t, 16))(0x0F223503L, (VECTOR(int32_t, 4))(0x0F223503L, (VECTOR(int32_t, 2))(0x0F223503L, 0x41C0E452L), 0x41C0E452L), 0x41C0E452L, 0x0F223503L, 0x41C0E452L, (VECTOR(int32_t, 2))(0x0F223503L, 0x41C0E452L), (VECTOR(int32_t, 2))(0x0F223503L, 0x41C0E452L), 0x0F223503L, 0x41C0E452L, 0x0F223503L, 0x41C0E452L);
                VECTOR(int32_t, 2) l_515 = (VECTOR(int32_t, 2))((-1L), (-8L));
                int16_t *l_528 = (void*)0;
                int16_t *l_529 = &p_1449->g_395;
                int32_t *l_530 = &p_1449->g_196.f0;
                int32_t l_537 = 0x53384BC5L;
                int i;
                p_1449->g_531 ^= (l_510[4] == (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_511.s86ce0e6c)).s4253154200256463)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1449->g_512.s54)))))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_513.wxwy)))), 0x591D2207L, 2L)).s0664565747100611))).se914, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(l_514.s0015)), (-5L), 1L, 0x1A9E73D1L)).s2733033352561514, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_515.xxyxyxyx)).lo)).even)))).xyxyxxxy, ((VECTOR(int32_t, 16))(p_1449->g_404, (safe_sub_func_uint32_t_u_u((((FAKE_DIVERGE(p_1449->group_1_offset, get_group_id(1), 10) , (((VECTOR(uint16_t, 16))(p_1449->g_520.s5050471475205447)).sc <= ((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 2))(l_523.yz)).lo, (0x8BE4L < 1L))) < p_1449->g_111[9][6][0]))) ^ ((safe_mul_func_uint16_t_u_u(l_491[8], (safe_rshift_func_uint8_t_u_u(p_1449->g_15, 1)))) & (p_86 == ((((*l_529) = ((&p_1449->g_481 == (void*)0) > 0x75L)) > l_494) , l_530)))) >= 0UL), l_493)), ((VECTOR(int32_t, 8))(0x1D1A6E6FL)), ((VECTOR(int32_t, 4))(0x2A23A668L)), (-1L), 0x2D434328L)).even, ((VECTOR(int32_t, 8))(0x47D66627L))))).s5475226253536263))))).s77b8))).zywzwwww, ((VECTOR(uint32_t, 8))(1UL)), ((VECTOR(uint32_t, 8))(0UL))))).odd)).z , &p_1449->g_194));
                for (p_1449->g_531 = 0; (p_1449->g_531 == 46); ++p_1449->g_531)
                { /* block id: 302 */
                    l_494 |= 0x1C8A9305L;
                    p_86 = l_530;
                }
                for (p_1449->g_395 = 0; (p_1449->g_395 < (-24)); p_1449->g_395 = safe_sub_func_int32_t_s_s(p_1449->g_395, 4))
                { /* block id: 308 */
                    VECTOR(uint32_t, 2) l_536 = (VECTOR(uint32_t, 2))(0x87673ECBL, 0x1BE74A69L);
                    int i;
                    l_536.x &= (0x098ED6EB20BF55FCL < (-9L));
                }
                l_537 &= 0x5FDC7472L;
            }
            else
            { /* block id: 312 */
                int64_t l_538 = 5L;
                int32_t l_539 = 0x63D063B4L;
                VECTOR(int32_t, 4) l_540 = (VECTOR(int32_t, 4))(0x734993F6L, (VECTOR(int32_t, 2))(0x734993F6L, 0x29CA20CEL), 0x29CA20CEL);
                int i;
                ++l_541[5][2][0];
                if (l_513.y)
                    continue;
                for (p_1449->g_395 = 12; (p_1449->g_395 <= (-24)); p_1449->g_395 = safe_sub_func_uint32_t_u_u(p_1449->g_395, 4))
                { /* block id: 317 */
                    int32_t **l_546 = &l_477[2][0][1];
                    int16_t *l_560[10] = {&p_1449->g_395,(void*)0,&p_1449->g_395,(void*)0,&p_1449->g_395,&p_1449->g_395,(void*)0,&p_1449->g_395,(void*)0,&p_1449->g_395};
                    int16_t **l_561 = &l_560[3];
                    int16_t **l_563 = &l_562;
                    int32_t l_568 = 0x41264B4BL;
                    int8_t l_569 = 0x21L;
                    int i;
                    (*l_546) = func_87(&p_1449->g_222, p_1449);
                    l_569 = ((l_492 >= ((safe_div_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(0xBCCCL, (safe_unary_minus_func_uint32_t_u(l_540.x)))), (safe_sub_func_uint64_t_u_u((l_491[7] < ((VECTOR(uint16_t, 8))((safe_mul_func_uint8_t_u_u(((((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(((((*l_561) = l_560[4]) != ((*l_563) = l_562)) , (safe_lshift_func_int8_t_s_s((((l_566 != &p_1449->g_407) >= (((void*)0 == l_567) || l_568)) , 0x72L), l_513.y))), p_1449->g_120.x)), 7L)) && l_513.z) || 0x8B7A7EACA2C57DBDL) <= l_514.s7), l_491[8])), 0xDB26L, ((VECTOR(uint16_t, 4))(0x55FEL)), 65535UL, 0xA704L)).s4), 18446744073709551615UL)))) , l_513.y)) > 8UL);
                    if ((atomic_inc(&p_1449->l_atomic_input[18]) == 1))
                    { /* block id: 323 */
                        int8_t l_570 = 0L;
                        uint16_t l_571 = 0xD2BAL;
                        --l_571;
                        unsigned int result = 0;
                        result += l_570;
                        result += l_571;
                        atomic_add(&p_1449->l_special_values[18], result);
                    }
                    else
                    { /* block id: 325 */
                        (1 + 1);
                    }
                }
            }
        }
        for (p_1449->g_531 = (-30); (p_1449->g_531 <= 21); p_1449->g_531 = safe_add_func_int32_t_s_s(p_1449->g_531, 1))
        { /* block id: 333 */
            return l_477[2][0][1];
        }
    }
    l_493 = (l_493 < (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_578.s40)).xyxxxyyy)).s0, 0)));
    return p_86;
}


/* ------------------------------------------ */
/* 
 * reads : p_1449->g_196.f0
 * writes: p_1449->g_196.f0
 */
int32_t * func_87(int32_t ** p_88, struct S3 * p_1449)
{ /* block id: 268 */
    int32_t *l_455 = &p_1449->g_75;
    int32_t *l_456 = &p_1449->g_111[9][6][0];
    int32_t *l_457 = &p_1449->g_111[9][6][0];
    int32_t *l_458 = &p_1449->g_75;
    int32_t *l_459 = &p_1449->g_111[9][6][0];
    int32_t *l_460 = &p_1449->g_111[9][6][0];
    int32_t *l_461 = &p_1449->g_75;
    int32_t *l_462 = (void*)0;
    int32_t *l_463 = &p_1449->g_111[9][6][0];
    int32_t *l_464 = &p_1449->g_111[3][4][0];
    int32_t l_465 = 0x00AA86F4L;
    int32_t l_466[5][7] = {{4L,8L,0x6133E00DL,7L,0x6133E00DL,8L,4L},{4L,8L,0x6133E00DL,7L,0x6133E00DL,8L,4L},{4L,8L,0x6133E00DL,7L,0x6133E00DL,8L,4L},{4L,8L,0x6133E00DL,7L,0x6133E00DL,8L,4L},{4L,8L,0x6133E00DL,7L,0x6133E00DL,8L,4L}};
    int32_t *l_467 = &l_466[4][1];
    int32_t *l_468 = (void*)0;
    int32_t *l_469 = &l_466[0][6];
    int32_t *l_470 = &p_1449->g_75;
    int32_t *l_471[4][5] = {{&l_465,&p_1449->g_8,(void*)0,&p_1449->g_8,&l_465},{&l_465,&p_1449->g_8,(void*)0,&p_1449->g_8,&l_465},{&l_465,&p_1449->g_8,(void*)0,&p_1449->g_8,&l_465},{&l_465,&p_1449->g_8,(void*)0,&p_1449->g_8,&l_465}};
    uint64_t l_472 = 18446744073709551615UL;
    int i, j;
    for (p_1449->g_196.f0 = (-12); (p_1449->g_196.f0 == 11); p_1449->g_196.f0 = safe_add_func_int16_t_s_s(p_1449->g_196.f0, 1))
    { /* block id: 271 */
        return &p_1449->g_75;
    }
    l_472--;
    return &p_1449->g_12;
}


/* ------------------------------------------ */
/* 
 * reads : p_1449->g_120 p_1449->g_6 p_1449->l_comm_values p_1449->g_12 p_1449->g_5 p_1449->g_111 p_1449->g_75 p_1449->g_213 p_1449->g_110 p_1449->g_36 p_1449->g_399 p_1449->g_400 p_1449->g_402 p_1449->g_8 p_1449->g_395 p_1449->g_7 p_1449->g_407 p_1449->g_422 p_1449->g_429 p_1449->g_196.f0 p_1449->g_404
 * writes: p_1449->g_75 p_1449->g_111 p_1449->g_2 p_1449->g_213 p_1449->g_222 p_1449->g_395 p_1449->g_407 p_1449->g_404
 */
int32_t ** func_89(int32_t  p_90, int32_t  p_91, int32_t * p_92, struct S3 * p_1449)
{ /* block id: 70 */
    int64_t *l_125 = (void*)0;
    int64_t *l_126 = (void*)0;
    int64_t *l_127 = (void*)0;
    int64_t *l_128 = (void*)0;
    int32_t l_129 = 0x229FBB94L;
    VECTOR(int16_t, 4) l_138 = (VECTOR(int16_t, 4))(0x69DEL, (VECTOR(int16_t, 2))(0x69DEL, 0x5EACL), 0x5EACL);
    union U2 l_141 = {0x36AC6256L};
    int32_t l_142 = 0x3DC13816L;
    int32_t *l_144 = &p_1449->g_12;
    int32_t **l_143 = &l_144;
    int32_t l_223 = (-1L);
    int32_t *l_230 = &l_129;
    int32_t *l_231 = &p_1449->g_111[8][0][1];
    int32_t *l_232 = (void*)0;
    int32_t *l_233[6] = {&p_1449->g_75,&p_1449->g_111[9][6][0],&p_1449->g_75,&p_1449->g_75,&p_1449->g_111[9][6][0],&p_1449->g_75};
    int32_t l_234 = 0x6207B4A4L;
    uint32_t l_235 = 0xF03459CEL;
    VECTOR(uint16_t, 8) l_401 = (VECTOR(uint16_t, 8))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0x333DL), 0x333DL), 0x333DL, 7UL, 0x333DL);
    int32_t l_444 = 0x2DF26830L;
    int i;
    (*l_143) = (((((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1449->g_120.xyxxyxyy)).s1104562554445414)), (uint8_t)((safe_div_func_uint16_t_u_u(((safe_div_func_int64_t_s_s((l_129 = (0x44ECL < 0UL)), (safe_div_func_uint64_t_u_u((p_1449->g_6 > (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 2))(0x429DL, 65527UL)).yyyyxxyyxxxyyyxx, (uint16_t)(l_127 == l_126), (uint16_t)(0x61L ^ (safe_mul_func_int16_t_s_s(0x0F80L, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_138.yywyywxy)).s0067504622260575)).lo)).s0716436573400531)).s2)))))).lo)).lo, ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x9B0FL, 8UL)), ((safe_lshift_func_int16_t_s_s(l_138.w, 9)) >= (l_141 , p_90)), ((VECTOR(uint16_t, 4))(0x6B08L)), 0x7727L)).odd, ((VECTOR(uint16_t, 4))(1UL)))))))).xwzwwxzw)).s0, l_141.f0)), p_90))), 0x1C3D107391EF432EL)))) <= l_142), l_138.w)) && p_91), (uint8_t)p_1449->g_120.y))).sc > p_1449->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1449->tid, 55))]) < p_91) , p_92);
    for (l_142 = 10; (l_142 > (-22)); l_142 = safe_sub_func_int8_t_s_s(l_142, 1))
    { /* block id: 75 */
        int16_t l_199 = (-1L);
        int32_t l_214[1][8][4] = {{{0L,(-9L),(-9L),0L},{0L,(-9L),(-9L),0L},{0L,(-9L),(-9L),0L},{0L,(-9L),(-9L),0L},{0L,(-9L),(-9L),0L},{0L,(-9L),(-9L),0L},{0L,(-9L),(-9L),0L},{0L,(-9L),(-9L),0L}}};
        union U2 **l_215 = (void*)0;
        int32_t **l_229[1][7][7] = {{{&l_144,(void*)0,&l_144,&p_1449->g_222,(void*)0,&p_1449->g_222,&l_144},{&l_144,(void*)0,&l_144,&p_1449->g_222,(void*)0,&p_1449->g_222,&l_144},{&l_144,(void*)0,&l_144,&p_1449->g_222,(void*)0,&p_1449->g_222,&l_144},{&l_144,(void*)0,&l_144,&p_1449->g_222,(void*)0,&p_1449->g_222,&l_144},{&l_144,(void*)0,&l_144,&p_1449->g_222,(void*)0,&p_1449->g_222,&l_144},{&l_144,(void*)0,&l_144,&p_1449->g_222,(void*)0,&p_1449->g_222,&l_144},{&l_144,(void*)0,&l_144,&p_1449->g_222,(void*)0,&p_1449->g_222,&l_144}}};
        int i, j, k;
        for (l_141.f1 = 9; (l_141.f1 > (-16)); l_141.f1 = safe_sub_func_uint16_t_u_u(l_141.f1, 1))
        { /* block id: 78 */
            int32_t l_171 = 1L;
            VECTOR(int32_t, 16) l_182 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x1163CD05L), 0x1163CD05L), 0x1163CD05L, (-8L), 0x1163CD05L, (VECTOR(int32_t, 2))((-8L), 0x1163CD05L), (VECTOR(int32_t, 2))((-8L), 0x1163CD05L), (-8L), 0x1163CD05L, (-8L), 0x1163CD05L);
            VECTOR(uint32_t, 2) l_192 = (VECTOR(uint32_t, 2))(0x14B1BB3EL, 4294967295UL);
            union U2 *l_203 = (void*)0;
            int8_t l_209 = (-1L);
            int i;
            for (p_90 = 0; (p_90 > 16); ++p_90)
            { /* block id: 81 */
                uint32_t l_174 = 5UL;
                VECTOR(uint32_t, 4) l_185 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xCD5EB8BAL), 0xCD5EB8BAL);
                VECTOR(int16_t, 2) l_188 = (VECTOR(int16_t, 2))(0x2060L, 1L);
                int32_t **l_198 = (void*)0;
                int32_t *l_201 = &p_1449->g_75;
                union U2 **l_204[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                VECTOR(uint16_t, 16) l_208 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
                uint16_t *l_212 = &p_1449->g_213[2];
                int i;
                if ((atomic_inc(&p_1449->g_atomic_input[83 * get_linear_group_id() + 60]) == 9))
                { /* block id: 83 */
                    VECTOR(int32_t, 4) l_151 = (VECTOR(int32_t, 4))(0x3C712B6BL, (VECTOR(int32_t, 2))(0x3C712B6BL, 0x519B726CL), 0x519B726CL);
                    uint8_t l_152 = 0x95L;
                    uint8_t l_153 = 249UL;
                    VECTOR(int32_t, 8) l_154 = (VECTOR(int32_t, 8))(0x6044EFE0L, (VECTOR(int32_t, 4))(0x6044EFE0L, (VECTOR(int32_t, 2))(0x6044EFE0L, 0x59C9FF01L), 0x59C9FF01L), 0x59C9FF01L, 0x6044EFE0L, 0x59C9FF01L);
                    uint32_t l_155 = 8UL;
                    int64_t l_156 = 8L;
                    uint64_t l_157 = 0UL;
                    int32_t *l_160 = (void*)0;
                    int32_t *l_161 = (void*)0;
                    int i;
                    l_155 = ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_151.ww)), (l_152 , 0x77A056DCL), ((VECTOR(int32_t, 4))(l_153, 7L, 0x5F00DBD5L, 0x1B4AE9B5L)), 0x762AE1A4L)).s1271733456310131, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_154.s5242775752473260))))))).sf;
                    l_157++;
                    l_161 = l_160;
                    for (l_151.y = 10; (l_151.y == (-13)); l_151.y--)
                    { /* block id: 89 */
                        union U2 l_165 = {0x295D964BL};
                        union U2 *l_164 = &l_165;
                        uint8_t l_166 = 1UL;
                        uint64_t l_169 = 0xDA9EB16AD88BDD47L;
                        int8_t l_170 = 0x4DL;
                        l_164 = (void*)0;
                        l_166++;
                        l_154.s6 = l_169;
                        l_154.s0 = l_170;
                    }
                    unsigned int result = 0;
                    result += l_151.w;
                    result += l_151.z;
                    result += l_151.y;
                    result += l_151.x;
                    result += l_152;
                    result += l_153;
                    result += l_154.s7;
                    result += l_154.s6;
                    result += l_154.s5;
                    result += l_154.s4;
                    result += l_154.s3;
                    result += l_154.s2;
                    result += l_154.s1;
                    result += l_154.s0;
                    result += l_155;
                    result += l_156;
                    result += l_157;
                    atomic_add(&p_1449->g_special_values[83 * get_linear_group_id() + 60], result);
                }
                else
                { /* block id: 95 */
                    (1 + 1);
                }
                if (l_171)
                    break;
                if ((safe_mul_func_uint16_t_u_u((&p_1449->g_2[8][4][1] == &p_1449->g_2[8][4][1]), p_1449->g_12)))
                { /* block id: 99 */
                    uint32_t l_179 = 1UL;
                    ++l_174;
                    for (l_171 = 0; (l_171 >= 21); l_171++)
                    { /* block id: 103 */
                        int32_t *l_181[6] = {&l_129,&l_129,&l_129,&l_129,&l_129,&l_129};
                        int i;
                        l_182.s8 = l_179;
                        l_182.sa = 0x0FD093CFL;
                    }
                }
                else
                { /* block id: 107 */
                    VECTOR(int32_t, 4) l_191 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x041E669FL), 0x041E669FL);
                    union U2 *l_195 = &l_141;
                    VECTOR(int8_t, 2) l_197 = (VECTOR(int8_t, 2))((-3L), 2L);
                    uint32_t *l_200 = &l_174;
                    int i;
                    l_201 = ((*l_143) = func_98((safe_mod_func_int64_t_s_s(((((*l_200) = ((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 8))(l_185.xzyyyyyw)).s5751370624361746, ((VECTOR(uint32_t, 16))((((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 2))((-10L), 0x1D12L)).xxxxyxyy, ((VECTOR(int16_t, 8))(l_188.xyxyxyyy))))).s2215107062533503, ((VECTOR(int16_t, 2))(0L, 0x6DE1L)).yxyyyxyyyyxyxxxx))))).sc, GROUP_DIVERGE(0, 1))) != ((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_191.wx)).xyyy)))), ((VECTOR(int32_t, 2))(0x49BB6F5CL, (-8L))).xxyx))), ((VECTOR(uint32_t, 8))(l_192.xyxyxyyy)).odd))).z, ((&p_1449->g_36 == &p_90) == (p_1449->g_193 == l_195)))) | ((((p_91 > (p_1449->g_196 , ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 16))(l_197.yyyyxyyxxxxxxxxx)).lo, (int8_t)p_1449->g_110.w, (int8_t)(((l_198 != &p_92) , (void*)0) != (void*)0)))).s7)) | 0x5BE7L) & l_191.w) && l_199))) != p_1449->g_15), ((VECTOR(uint32_t, 2))(9UL)), p_1449->g_194.f0, 9UL, 0x83F161DFL, 4294967295UL, FAKE_DIVERGE(p_1449->global_0_offset, get_global_id(0), 10), l_199, 0UL, l_199, ((VECTOR(uint32_t, 2))(0x7BB388EDL)), 0xFA7B2E72L, 2UL, 0x4E311F92L))))).s5) != 0x882ED2A0L) , l_171), l_199)), p_1449));
                }
                l_214[0][3][0] = (safe_unary_minus_func_int8_t_s((p_90 && (9L != ((*l_212) |= ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((p_1449->g_110.y != ((p_1449->g_205 = l_203) != (p_1449->g_207[0][1] = (p_1449->g_206 = l_203)))) == ((((VECTOR(uint16_t, 2))(l_208.sf8)).odd > (((+(~((((~l_199) , (-4L)) || l_209) && (safe_sub_func_int64_t_s_s(p_1449->g_3, 0xC6678C4744A534BAL))))) , p_90) < l_171)) == 1L)), 0UL, 0xBF90L, 0x587FL)), p_1449->g_196.f0, 0xE991L, 65535UL, 1UL, ((VECTOR(uint16_t, 8))(0x3C69L)))).lo, ((VECTOR(uint16_t, 8))(65532UL))))), 0UL, 0xB259L, FAKE_DIVERGE(p_1449->local_1_offset, get_local_id(1), 10), 0x6D78L, ((VECTOR(uint16_t, 2))(0xD993L)), 65535UL, 65535UL)).s3)))));
            }
        }
        if (((void*)0 != l_215))
        { /* block id: 119 */
            int64_t *l_216 = (void*)0;
            int64_t *l_217 = (void*)0;
            int64_t *l_218 = (void*)0;
            int64_t *l_219[4][7][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
            int32_t *l_221 = &p_1449->g_67;
            int32_t **l_220[4] = {&l_221,&l_221,&l_221,&l_221};
            union U2 **l_228 = (void*)0;
            int i, j, k;
            l_223 = (l_129 = (((((void*)0 == &p_1449->g_194) , ((l_214[0][3][0] |= p_90) >= (9L | 0x0885L))) || ((*l_143) != (p_1449->g_222 = p_92))) != 0xF0A75605L));
            (*l_143) = func_98((safe_mul_func_uint16_t_u_u((p_1449->g_110.x | p_91), ((safe_lshift_func_uint16_t_u_u(0xA1F9L, ((((void*)0 != l_228) | (((~(0x5EL ^ 1UL)) > p_1449->g_36) | 0x62L)) > 0x1F78L))) != l_199))), p_1449);
            if (p_90)
                continue;
        }
        else
        { /* block id: 126 */
            return &p_1449->g_222;
        }
    }
    l_235++;
    for (l_234 = (-25); (l_234 == 10); l_234 = safe_add_func_uint16_t_u_u(l_234, 1))
    { /* block id: 133 */
        VECTOR(int32_t, 8) l_398 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x650422A7L), 0x650422A7L), 0x650422A7L, 0L, 0x650422A7L);
        uint64_t *l_403[4][10][6] = {{{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0}},{{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0}},{{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0}},{{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0},{(void*)0,(void*)0,&p_1449->g_404,(void*)0,&p_1449->g_404,(void*)0}}};
        int32_t l_405 = (-6L);
        int8_t *l_406 = &p_1449->g_407;
        uint16_t l_408 = 1UL;
        int32_t l_436 = (-9L);
        VECTOR(int32_t, 2) l_443 = (VECTOR(int32_t, 2))(0L, (-1L));
        uint32_t l_450 = 4294967295UL;
        int i, j, k;
        if ((atomic_inc(&p_1449->g_atomic_input[83 * get_linear_group_id() + 23]) == 1))
        { /* block id: 135 */
            int16_t l_240 = 2L;
            if (l_240)
            { /* block id: 136 */
                int32_t l_241[9][7] = {{1L,1L,0L,0x67737C8AL,(-1L),0x67737C8AL,0L},{1L,1L,0L,0x67737C8AL,(-1L),0x67737C8AL,0L},{1L,1L,0L,0x67737C8AL,(-1L),0x67737C8AL,0L},{1L,1L,0L,0x67737C8AL,(-1L),0x67737C8AL,0L},{1L,1L,0L,0x67737C8AL,(-1L),0x67737C8AL,0L},{1L,1L,0L,0x67737C8AL,(-1L),0x67737C8AL,0L},{1L,1L,0L,0x67737C8AL,(-1L),0x67737C8AL,0L},{1L,1L,0L,0x67737C8AL,(-1L),0x67737C8AL,0L},{1L,1L,0L,0x67737C8AL,(-1L),0x67737C8AL,0L}};
                int8_t l_246 = 0x7FL;
                int8_t l_247[4];
                int64_t l_248 = (-1L);
                int64_t l_249[7] = {0L,0L,0L,0L,0L,0L,0L};
                int8_t l_250 = 0x5CL;
                int16_t l_251 = 0x7420L;
                uint32_t l_252 = 4294967295UL;
                uint32_t l_255 = 4294967294UL;
                int i, j;
                for (i = 0; i < 4; i++)
                    l_247[i] = 0x07L;
                for (l_241[8][6] = 0; (l_241[8][6] < (-30)); l_241[8][6] = safe_sub_func_uint32_t_u_u(l_241[8][6], 9))
                { /* block id: 139 */
                    int32_t l_244 = 0x0FC01C5CL;
                    int16_t l_245 = 1L;
                    l_245 = l_244;
                }
                l_252++;
                if (l_255)
                { /* block id: 143 */
                    int32_t l_256[4];
                    int32_t l_265 = (-7L);
                    VECTOR(int32_t, 4) l_278 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6C4FA195L), 0x6C4FA195L);
                    int i;
                    for (i = 0; i < 4; i++)
                        l_256[i] = (-8L);
                    for (l_256[1] = 0; (l_256[1] < 22); ++l_256[1])
                    { /* block id: 146 */
                        int64_t l_259 = 0x05CBB0ED48654136L;
                        uint64_t l_260[4];
                        union U2 l_262 = {0x767A6DE4L};
                        union U2 *l_261[7] = {&l_262,&l_262,&l_262,&l_262,&l_262,&l_262,&l_262};
                        int8_t l_263 = 0x4FL;
                        uint16_t l_264 = 65530UL;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_260[i] = 18446744073709551611UL;
                        l_241[8][6] ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x767F09A4L, 0x5B1AD04EL)), (-10L), 5L)).w;
                        l_261[6] = ((l_259 , l_260[3]) , l_261[3]);
                        l_264 = (l_263 , (l_241[8][6] = 5L));
                    }
                    if (l_265)
                    { /* block id: 152 */
                        int16_t l_266 = 8L;
                        uint32_t l_267 = 0x8A8C29DDL;
                        uint32_t l_270 = 0xC1B076C0L;
                        uint8_t l_271 = 0x8AL;
                        int32_t l_272 = 1L;
                        union U2 **l_273 = (void*)0;
                        l_267--;
                        l_271 = (l_256[0] &= (l_241[8][6] = (l_270 ^= 0x0C7D6108L)));
                        l_241[4][2] = (l_272 , 0x5F5B507FL);
                        l_273 = (void*)0;
                    }
                    else
                    { /* block id: 160 */
                        int8_t l_274[8] = {0x32L,0L,0x32L,0x32L,0L,0x32L,0x32L,0L};
                        uint32_t l_275[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_275[i] = 1UL;
                        --l_275[0];
                    }
                    l_241[4][1] = ((VECTOR(int32_t, 16))(l_278.wywxywwxzxwzyxyz)).s7;
                }
                else
                { /* block id: 164 */
                    int32_t l_279 = 0x033FBF26L;
                    for (l_279 = 0; (l_279 <= (-22)); l_279--)
                    { /* block id: 167 */
                        union U0 l_282 = {18446744073709551615UL};/* VOLATILE GLOBAL l_282 */
                        VECTOR(uint16_t, 2) l_283 = (VECTOR(uint16_t, 2))(0xEF98L, 0x746BL);
                        int8_t l_284 = 7L;
                        int32_t l_286 = 0x0332F5C8L;
                        int32_t *l_285[7] = {&l_286,&l_286,&l_286,&l_286,&l_286,&l_286,&l_286};
                        int32_t *l_287 = &l_286;
                        int32_t *l_288 = &l_286;
                        uint32_t l_289 = 4294967295UL;
                        int i;
                        l_241[8][6] = (l_282 , (((VECTOR(uint16_t, 8))(l_283.xyyyyyxx)).s6 , l_284));
                        l_241[8][6] = 0x21822A15L;
                        l_288 = (l_287 = l_285[5]);
                        ++l_289;
                    }
                    for (l_279 = 0; (l_279 > 21); l_279 = safe_add_func_int8_t_s_s(l_279, 2))
                    { /* block id: 176 */
                        uint16_t l_294 = 0x6449L;
                        uint64_t l_295 = 0x71829D1AC3D0BC41L;
                        uint64_t l_296[3];
                        int64_t l_299 = 0x535162C1F02B3864L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_296[i] = 4UL;
                        l_295 = l_294;
                        l_296[2]--;
                        l_241[5][1] = l_299;
                    }
                }
            }
            else
            { /* block id: 182 */
                uint32_t l_300 = 5UL;
                int16_t l_301 = 0L;
                int64_t l_302[2][7][6] = {{{1L,0x7E7C0EF8D422A021L,0x415FA3F534664D1FL,0x7E7C0EF8D422A021L,1L,1L},{1L,0x7E7C0EF8D422A021L,0x415FA3F534664D1FL,0x7E7C0EF8D422A021L,1L,1L},{1L,0x7E7C0EF8D422A021L,0x415FA3F534664D1FL,0x7E7C0EF8D422A021L,1L,1L},{1L,0x7E7C0EF8D422A021L,0x415FA3F534664D1FL,0x7E7C0EF8D422A021L,1L,1L},{1L,0x7E7C0EF8D422A021L,0x415FA3F534664D1FL,0x7E7C0EF8D422A021L,1L,1L},{1L,0x7E7C0EF8D422A021L,0x415FA3F534664D1FL,0x7E7C0EF8D422A021L,1L,1L},{1L,0x7E7C0EF8D422A021L,0x415FA3F534664D1FL,0x7E7C0EF8D422A021L,1L,1L}},{{1L,0x7E7C0EF8D422A021L,0x415FA3F534664D1FL,0x7E7C0EF8D422A021L,1L,1L},{1L,0x7E7C0EF8D422A021L,0x415FA3F534664D1FL,0x7E7C0EF8D422A021L,1L,1L},{1L,0x7E7C0EF8D422A021L,0x415FA3F534664D1FL,0x7E7C0EF8D422A021L,1L,1L},{1L,0x7E7C0EF8D422A021L,0x415FA3F534664D1FL,0x7E7C0EF8D422A021L,1L,1L},{1L,0x7E7C0EF8D422A021L,0x415FA3F534664D1FL,0x7E7C0EF8D422A021L,1L,1L},{1L,0x7E7C0EF8D422A021L,0x415FA3F534664D1FL,0x7E7C0EF8D422A021L,1L,1L},{1L,0x7E7C0EF8D422A021L,0x415FA3F534664D1FL,0x7E7C0EF8D422A021L,1L,1L}}};
                uint32_t l_303 = 6UL;
                int32_t l_304 = 0x12C0D943L;
                int i, j, k;
                if ((l_304 ^= (l_300 , (l_303 = (l_302[0][3][5] &= l_301)))))
                { /* block id: 186 */
                    VECTOR(int16_t, 16) l_305 = (VECTOR(int16_t, 16))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0x137CL), 0x137CL), 0x137CL, 3L, 0x137CL, (VECTOR(int16_t, 2))(3L, 0x137CL), (VECTOR(int16_t, 2))(3L, 0x137CL), 3L, 0x137CL, 3L, 0x137CL);
                    VECTOR(uint16_t, 16) l_306 = (VECTOR(uint16_t, 16))(0x6833L, (VECTOR(uint16_t, 4))(0x6833L, (VECTOR(uint16_t, 2))(0x6833L, 65535UL), 65535UL), 65535UL, 0x6833L, 65535UL, (VECTOR(uint16_t, 2))(0x6833L, 65535UL), (VECTOR(uint16_t, 2))(0x6833L, 65535UL), 0x6833L, 65535UL, 0x6833L, 65535UL);
                    uint32_t l_330 = 0xFA9EE565L;
                    int16_t l_331 = 0x407BL;
                    int16_t l_332 = 4L;
                    int32_t l_334 = 1L;
                    int32_t *l_333 = &l_334;
                    int i;
                    if (((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(0x566D08C7L, 0x3ECA8A1AL)).xyxyxyyy, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(l_305.sed98fd706e587c2f)).odd, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_306.s1f87)).yzwxyxxxyzwyzyww)).lo)))))).s3)
                    { /* block id: 187 */
                        int32_t *l_307 = (void*)0;
                        int32_t l_309 = (-2L);
                        int32_t *l_308 = &l_309;
                        int64_t l_310 = 0x47113E96B69F79CDL;
                        int16_t l_311 = 0x14B2L;
                        union U2 l_312 = {1L};
                        union U2 l_313 = {-1L};
                        union U2 l_314 = {0x38051BDCL};
                        int32_t *l_315 = (void*)0;
                        int32_t *l_316[6][3] = {{(void*)0,(void*)0,&l_309},{(void*)0,(void*)0,&l_309},{(void*)0,(void*)0,&l_309},{(void*)0,(void*)0,&l_309},{(void*)0,(void*)0,&l_309},{(void*)0,(void*)0,&l_309}};
                        int i, j;
                        l_308 = l_307;
                        l_316[5][0] = (((l_311 = l_310) , (l_314 = (l_313 = l_312))) , l_315);
                    }
                    else
                    { /* block id: 193 */
                        uint8_t l_317 = 0xD7L;
                        int32_t l_318 = (-7L);
                        int16_t l_319[7];
                        int32_t l_320 = 0x4FBB8765L;
                        uint8_t l_321 = 1UL;
                        int8_t l_324[10] = {(-3L),0x11L,0x03L,0x11L,(-3L),(-3L),0x11L,0x03L,0x11L,(-3L)};
                        VECTOR(int32_t, 2) l_325 = (VECTOR(int32_t, 2))(0L, 1L);
                        int32_t l_326[9] = {0x7604BCCBL,0x7604BCCBL,0x7604BCCBL,0x7604BCCBL,0x7604BCCBL,0x7604BCCBL,0x7604BCCBL,0x7604BCCBL,0x7604BCCBL};
                        int32_t l_327 = 0x6E09CF0BL;
                        uint8_t l_328[9][4] = {{247UL,0x0DL,0x5DL,0x83L},{247UL,0x0DL,0x5DL,0x83L},{247UL,0x0DL,0x5DL,0x83L},{247UL,0x0DL,0x5DL,0x83L},{247UL,0x0DL,0x5DL,0x83L},{247UL,0x0DL,0x5DL,0x83L},{247UL,0x0DL,0x5DL,0x83L},{247UL,0x0DL,0x5DL,0x83L},{247UL,0x0DL,0x5DL,0x83L}};
                        uint32_t l_329 = 4UL;
                        int i, j;
                        for (i = 0; i < 7; i++)
                            l_319[i] = 0x59B8L;
                        l_317 &= 0x615C79E4L;
                        --l_321;
                        l_324[0] = 0L;
                        l_329 |= (l_328[8][0] |= ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(l_325.yxyy)).wzyywzzy, (int32_t)(l_327 = l_326[0])))).s5);
                    }
                    l_331 = l_330;
                    l_332 &= 0x091B6409L;
                    l_333 = (void*)0;
                }
                else
                { /* block id: 204 */
                    int64_t l_335 = 0x7CF93BFC38B602A2L;
                    uint16_t l_347 = 0xD656L;
                    uint16_t l_348[3][3] = {{0UL,0UL,0UL},{0UL,0UL,0UL},{0UL,0UL,0UL}};
                    VECTOR(uint32_t, 4) l_349 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL);
                    VECTOR(uint32_t, 16) l_350 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x93D730E3L), 0x93D730E3L), 0x93D730E3L, 1UL, 0x93D730E3L, (VECTOR(uint32_t, 2))(1UL, 0x93D730E3L), (VECTOR(uint32_t, 2))(1UL, 0x93D730E3L), 1UL, 0x93D730E3L, 1UL, 0x93D730E3L);
                    int32_t l_351 = 0L;
                    uint32_t l_352 = 4294967295UL;
                    VECTOR(uint32_t, 16) l_355 = (VECTOR(uint32_t, 16))(0xCD2E3A9FL, (VECTOR(uint32_t, 4))(0xCD2E3A9FL, (VECTOR(uint32_t, 2))(0xCD2E3A9FL, 4294967289UL), 4294967289UL), 4294967289UL, 0xCD2E3A9FL, 4294967289UL, (VECTOR(uint32_t, 2))(0xCD2E3A9FL, 4294967289UL), (VECTOR(uint32_t, 2))(0xCD2E3A9FL, 4294967289UL), 0xCD2E3A9FL, 4294967289UL, 0xCD2E3A9FL, 4294967289UL);
                    VECTOR(uint32_t, 2) l_356 = (VECTOR(uint32_t, 2))(4UL, 0xA089E560L);
                    int32_t l_357[5];
                    VECTOR(uint32_t, 16) l_358 = (VECTOR(uint32_t, 16))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0x31EC76F5L), 0x31EC76F5L), 0x31EC76F5L, 4294967294UL, 0x31EC76F5L, (VECTOR(uint32_t, 2))(4294967294UL, 0x31EC76F5L), (VECTOR(uint32_t, 2))(4294967294UL, 0x31EC76F5L), 4294967294UL, 0x31EC76F5L, 4294967294UL, 0x31EC76F5L);
                    VECTOR(uint32_t, 8) l_359 = (VECTOR(uint32_t, 8))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 0x6E447777L), 0x6E447777L), 0x6E447777L, 4294967290UL, 0x6E447777L);
                    VECTOR(uint32_t, 2) l_360 = (VECTOR(uint32_t, 2))(0x8E1B90CFL, 0xDB4FB30EL);
                    VECTOR(uint32_t, 4) l_361 = (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0UL), 0UL);
                    VECTOR(uint32_t, 8) l_362 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967291UL), 4294967291UL), 4294967291UL, 1UL, 4294967291UL);
                    VECTOR(uint32_t, 4) l_363 = (VECTOR(uint32_t, 4))(0xB4E3A92FL, (VECTOR(uint32_t, 2))(0xB4E3A92FL, 0x8C842EB5L), 0x8C842EB5L);
                    int32_t l_364 = 0x01E7EB0DL;
                    int16_t l_365[4] = {7L,7L,7L,7L};
                    int32_t l_366 = 2L;
                    int16_t l_367 = 0x1D93L;
                    VECTOR(int16_t, 16) l_368 = (VECTOR(int16_t, 16))(0x50D7L, (VECTOR(int16_t, 4))(0x50D7L, (VECTOR(int16_t, 2))(0x50D7L, 0L), 0L), 0L, 0x50D7L, 0L, (VECTOR(int16_t, 2))(0x50D7L, 0L), (VECTOR(int16_t, 2))(0x50D7L, 0L), 0x50D7L, 0L, 0x50D7L, 0L);
                    union U2 l_369 = {-5L};
                    uint32_t l_370 = 1UL;
                    int32_t l_371 = 0L;
                    int32_t l_372 = (-1L);
                    int32_t l_373 = 0x75C6A7C0L;
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_357[i] = 0x596C50F0L;
                    l_335 = 1L;
                    for (l_335 = 13; (l_335 <= 16); l_335 = safe_add_func_uint32_t_u_u(l_335, 2))
                    { /* block id: 208 */
                        int8_t l_338 = (-1L);
                        int32_t l_339 = (-1L);
                        uint8_t l_340 = 3UL;
                        uint32_t l_341 = 0x1843F403L;
                        int16_t l_342 = (-1L);
                        int32_t l_343 = (-1L);
                        int32_t l_344 = 6L;
                        uint64_t l_345 = 4UL;
                        int16_t l_346[6][4][1] = {{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}}};
                        int i, j, k;
                        l_340 = (l_339 ^= l_338);
                        l_342 = l_341;
                        l_344 = l_343;
                        l_346[5][1][0] = (l_345 , (-7L));
                    }
                    if (((l_373 = ((l_356.x = ((VECTOR(uint32_t, 16))(0xBDB857C0L, 1UL, l_347, ((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(4294967295UL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 16))(l_348[1][0], 0xB6764243L, ((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 8))(l_349.wzxzwxzy)).hi, ((VECTOR(uint32_t, 4))(l_350.s9718))))), 4294967290UL, (--l_352), ((VECTOR(uint32_t, 4))(l_355.sc9de)), 0UL, 0xD851CD8FL, 0xB5990A55L, 0xEDFD152FL)).sd2fe, ((VECTOR(uint32_t, 8))(l_356.xyyyxyyy)).even))), ((VECTOR(uint32_t, 2))(0x5839F482L, 0x3DC6341FL)), 0x13736988L, 1UL)).s6, 0x93FE0352L, 0xCFE56B44L, 0x5E93C6BAL, l_357[1], 4294967286UL, 1UL)), ((VECTOR(uint32_t, 2))(l_358.s0c)).xxyxxyxy, ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0UL, 0xB3F138F6L)).yyxyyxyyyxyxxyxy)).see, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_359.s42)), 0x943D29F5L, 4294967294UL)).zxxywwzxywxywywx)).s81))))), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 2))(l_360.yy)), ((VECTOR(uint32_t, 8))(l_361.zyywxzwx)).s63)))))))))).xxxy, ((VECTOR(uint32_t, 4))(l_362.s4456))))), ((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_363.xywy)))).wzyyzwzywywwwxxy))).s82c8)))))))), 2UL, ((VECTOR(uint32_t, 2))(0x2A305BE1L, 0UL)), 0UL)).s21, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(0x849B00E6L, 0x0BBA5B32L, ((VECTOR(uint32_t, 2))(0x843362B2L, 0x3F98E299L)), (l_365[1] = l_364), (l_371 = (l_366 , (l_367 , ((l_369 = (l_368.s4 , l_369)) , l_370)))), 0x3CF38F01L, 5UL)))).s65))).yyyyyxxy))), l_372, 4294967291UL, 0x51FFD2F6L, 0x2E31E6C7L, 0x69A3492DL)).s3) , 7L)) , (-5L)))
                    { /* block id: 221 */
                        union U1 *l_374 = (void*)0;
                        union U1 l_376 = {0x68A73379L};/* VOLATILE GLOBAL l_376 */
                        union U1 *l_375 = &l_376;
                        int16_t l_377 = 0x3992L;
                        uint16_t l_378 = 1UL;
                        uint8_t l_381 = 255UL;
                        l_375 = (l_374 = (void*)0);
                        l_351 |= l_377;
                        l_378--;
                        --l_381;
                    }
                    else
                    { /* block id: 227 */
                        int32_t l_385 = (-1L);
                        int32_t *l_384 = &l_385;
                        int32_t *l_386 = &l_385;
                        int32_t *l_387 = &l_385;
                        int32_t *l_388 = &l_385;
                        l_386 = l_384;
                        l_388 = l_387;
                    }
                }
            }
            unsigned int result = 0;
            result += l_240;
            atomic_add(&p_1449->g_special_values[83 * get_linear_group_id() + 23], result);
        }
        else
        { /* block id: 233 */
            (1 + 1);
        }
        if ((safe_div_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((p_91 == ((((safe_div_func_uint16_t_u_u(0xB19DL, (p_1449->g_395 = (*l_231)))) == ((*l_406) = ((safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_1449->group_1_offset, get_group_id(1), 10), (((*l_230) = l_398.s2) , (((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 2))(p_1449->g_399.s22)), ((VECTOR(uint16_t, 8))(p_1449->g_400.xzyyzyxz)).s64))))), 7UL, 0UL)).ywwzxyzxxzzzywwy)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_401.s6506034201243464)).scdab)).xxyzxwyzxzwyywyx)).odd)).s6431707156773506, ((VECTOR(uint16_t, 8))((((&p_1449->g_194 != (void*)0) < 0UL) || p_1449->g_75), ((VECTOR(uint16_t, 8))(((l_405 &= (p_1449->g_402 , 0xDFBD16688CF68369L)) <= p_91), 0x81F5L, ((VECTOR(uint16_t, 4))(65532UL)), 6UL, 0x658DL)).s5, GROUP_DIVERGE(2, 1), 0UL, 0x5CE5L, ((VECTOR(uint16_t, 2))(7UL)), 65531UL)).s2664224612027553))).lo, ((VECTOR(uint16_t, 8))(0xAD40L))))).s3 | 0x447DL)))) ^ 0L))) , (*l_231)) <= p_1449->g_8)), l_398.s3)) >= (*l_231)), l_398.s4)))
        { /* block id: 240 */
            (*l_231) = l_408;
        }
        else
        { /* block id: 242 */
            uint32_t l_432 = 0x9760A137L;
            int32_t l_435[9] = {0x530713DAL,0x530713DAL,0x530713DAL,0x530713DAL,0x530713DAL,0x530713DAL,0x530713DAL,0x530713DAL,0x530713DAL};
            int64_t l_445 = 0x0DF8CB7659A85CF2L;
            int i;
            for (p_1449->g_75 = (-1); (p_1449->g_75 >= (-24)); p_1449->g_75--)
            { /* block id: 245 */
                int16_t *l_417[4] = {&p_1449->g_395,&p_1449->g_395,&p_1449->g_395,&p_1449->g_395};
                int32_t l_418 = 1L;
                uint32_t *l_419 = &l_235;
                uint16_t *l_425 = (void*)0;
                uint16_t *l_426 = &p_1449->g_213[2];
                int64_t *l_430[6][5][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
                int32_t l_431 = 5L;
                int32_t l_446 = 0x4F661B9CL;
                int32_t l_447 = 0L;
                int32_t l_448 = (-1L);
                int32_t l_449 = 0x4E9E4AA9L;
                int i, j, k;
                (*l_231) ^= (safe_mul_func_uint8_t_u_u((p_1449->g_75 > (safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((!(((*l_406) ^= ((((p_1449->g_395 ^= (l_418 &= 0x42B0L)) == 0L) | (((*l_419) = (p_92 == (p_1449->g_222 = p_92))) == (+0x88B0B058L))) & p_1449->g_7[0][3][3])) ^ (safe_mul_func_uint16_t_u_u(((((VECTOR(int16_t, 2))(p_1449->g_422.zx)).even & ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))((p_1449->g_399.s1 > ((*l_426)++)), 0L, ((VECTOR(int8_t, 2))(0x0FL, 0x40L)), ((VECTOR(int8_t, 8))(p_1449->g_429.s32becf8e)), ((void*)0 == l_430[5][4][2]), p_90, (-1L), 0x2CL)).sf, (-10L))) < GROUP_DIVERGE(1, 1))) && FAKE_DIVERGE(p_1449->group_0_offset, get_group_id(0), 10)), l_431)))), p_1449->g_196.f0)), l_432))), 0x1DL));
                if (l_432)
                    break;
                for (p_1449->g_404 = (-29); (p_1449->g_404 >= 53); p_1449->g_404 = safe_add_func_int32_t_s_s(p_1449->g_404, 3))
                { /* block id: 256 */
                    uint16_t l_437 = 0UL;
                    l_437--;
                }
                for (p_1449->g_404 = 0; (p_1449->g_404 < 36); p_1449->g_404 = safe_add_func_uint32_t_u_u(p_1449->g_404, 8))
                { /* block id: 261 */
                    int32_t l_442[7][4][5] = {{{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L}},{{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L}},{{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L}},{{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L}},{{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L}},{{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L}},{{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L},{0x52BCF8AAL,0x73D00703L,0L,0x6A5D783FL,0x73D00703L}}};
                    int i, j, k;
                    --l_450;
                }
            }
        }
    }
    return &p_1449->g_222;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_93(uint8_t  p_94, uint64_t  p_95, int32_t * p_96, struct S3 * p_1449)
{ /* block id: 67 */
    int32_t l_116 = 0L;
    return l_116;
}


/* ------------------------------------------ */
/* 
 * reads : p_1449->g_110 p_1449->g_5 p_1449->g_111 p_1449->g_75
 * writes: p_1449->g_75 p_1449->g_111 p_1449->g_2
 */
int32_t * func_98(int16_t  p_99, struct S3 * p_1449)
{ /* block id: 47 */
    int32_t *l_102 = &p_1449->g_75;
    int32_t *l_103[8][2] = {{&p_1449->g_67,&p_1449->g_67},{&p_1449->g_67,&p_1449->g_67},{&p_1449->g_67,&p_1449->g_67},{&p_1449->g_67,&p_1449->g_67},{&p_1449->g_67,&p_1449->g_67},{&p_1449->g_67,&p_1449->g_67},{&p_1449->g_67,&p_1449->g_67},{&p_1449->g_67,&p_1449->g_67}};
    uint32_t l_104[8] = {0x23DBDA42L,0x3C5D46ADL,0x23DBDA42L,0x23DBDA42L,0x3C5D46ADL,0x23DBDA42L,0x23DBDA42L,0x3C5D46ADL};
    int32_t **l_114 = (void*)0;
    int32_t **l_115[6] = {(void*)0,&l_102,(void*)0,(void*)0,&l_102,(void*)0};
    int i, j;
    l_104[7]--;
    for (p_99 = 29; (p_99 < (-28)); --p_99)
    { /* block id: 51 */
        int8_t l_109 = 1L;
        p_1449->g_111[9][6][0] &= (((*l_102) = l_109) > (((VECTOR(uint8_t, 16))(p_1449->g_110.xzzwwywwxzzxzwyy)).s0 <= p_1449->g_5));
        (*l_102) &= 0x2DCD2DC6L;
        for (p_1449->g_75 = 0; (p_1449->g_75 >= (-4)); p_1449->g_75 = safe_sub_func_int16_t_s_s(p_1449->g_75, 3))
        { /* block id: 57 */
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1449->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 55)), permutations[(safe_mod_func_uint32_t_u_u(2UL, 10))][(safe_mod_func_uint32_t_u_u(p_1449->tid, 55))]));
            return l_102;
        }
    }
    p_1449->g_2[4][4][2] = (void*)0;
    (*l_102) = p_99;
    return &p_1449->g_36;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[83];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 83; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[83];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 83; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_comm_values[i] = 1;
    struct S3 c_1450;
    struct S3* p_1449 = &c_1450;
    struct S3 c_1451 = {
        (-5L), // p_1449->g_3
        {{{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3}},{{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3}},{{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3}},{{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3}},{{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3}},{{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3}},{{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3}},{{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3}},{{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3},{(void*)0,&p_1449->g_3,&p_1449->g_3}}}, // p_1449->g_2
        0x7084BC9CL, // p_1449->g_5
        0x69F4981FL, // p_1449->g_6
        {{{0x7770B168L,0x7770B168L,0x58331C58L,0x6F66B17BL,0x128D9BA5L},{0x7770B168L,0x7770B168L,0x58331C58L,0x6F66B17BL,0x128D9BA5L},{0x7770B168L,0x7770B168L,0x58331C58L,0x6F66B17BL,0x128D9BA5L},{0x7770B168L,0x7770B168L,0x58331C58L,0x6F66B17BL,0x128D9BA5L},{0x7770B168L,0x7770B168L,0x58331C58L,0x6F66B17BL,0x128D9BA5L},{0x7770B168L,0x7770B168L,0x58331C58L,0x6F66B17BL,0x128D9BA5L},{0x7770B168L,0x7770B168L,0x58331C58L,0x6F66B17BL,0x128D9BA5L},{0x7770B168L,0x7770B168L,0x58331C58L,0x6F66B17BL,0x128D9BA5L}}}, // p_1449->g_7
        (-1L), // p_1449->g_8
        (-1L), // p_1449->g_12
        (-1L), // p_1449->g_15
        0x705618D7L, // p_1449->g_36
        0x59351789L, // p_1449->g_67
        0x6E2CBD03L, // p_1449->g_75
        (VECTOR(uint8_t, 4))(0xD1L, (VECTOR(uint8_t, 2))(0xD1L, 0x51L), 0x51L), // p_1449->g_110
        {{{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L}},{{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L}},{{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L}},{{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L}},{{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L}},{{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L}},{{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L}},{{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L}},{{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L}},{{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L},{1L,0L,0x344CA3D1L}}}, // p_1449->g_111
        (VECTOR(uint8_t, 2))(1UL, 0x58L), // p_1449->g_120
        {&p_1449->g_8,&p_1449->g_15,&p_1449->g_8,&p_1449->g_8,&p_1449->g_15,&p_1449->g_8,&p_1449->g_8,&p_1449->g_15,&p_1449->g_8}, // p_1449->g_180
        {0x2610F450L}, // p_1449->g_194
        &p_1449->g_194, // p_1449->g_193
        {0x2558EA93L}, // p_1449->g_196
        &p_1449->g_196, // p_1449->g_205
        (void*)0, // p_1449->g_206
        {{&p_1449->g_196,&p_1449->g_196,&p_1449->g_196,&p_1449->g_196,&p_1449->g_196,&p_1449->g_196},{&p_1449->g_196,&p_1449->g_196,&p_1449->g_196,&p_1449->g_196,&p_1449->g_196,&p_1449->g_196},{&p_1449->g_196,&p_1449->g_196,&p_1449->g_196,&p_1449->g_196,&p_1449->g_196,&p_1449->g_196},{&p_1449->g_196,&p_1449->g_196,&p_1449->g_196,&p_1449->g_196,&p_1449->g_196,&p_1449->g_196},{&p_1449->g_196,&p_1449->g_196,&p_1449->g_196,&p_1449->g_196,&p_1449->g_196,&p_1449->g_196}}, // p_1449->g_207
        {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}, // p_1449->g_213
        &p_1449->g_111[9][6][0], // p_1449->g_222
        6L, // p_1449->g_395
        (VECTOR(uint16_t, 8))(0xD9CEL, (VECTOR(uint16_t, 4))(0xD9CEL, (VECTOR(uint16_t, 2))(0xD9CEL, 7UL), 7UL), 7UL, 0xD9CEL, 7UL), // p_1449->g_399
        (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0x8409L), 0x8409L), // p_1449->g_400
        {7L}, // p_1449->g_402
        0xCFA8DEDEB5C68F9EL, // p_1449->g_404
        0x75L, // p_1449->g_407
        (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x3F16L), 0x3F16L), // p_1449->g_422
        (VECTOR(int8_t, 16))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, 1L), 1L), 1L, 0x15L, 1L, (VECTOR(int8_t, 2))(0x15L, 1L), (VECTOR(int8_t, 2))(0x15L, 1L), 0x15L, 1L, 0x15L, 1L), // p_1449->g_429
        &p_1449->g_402, // p_1449->g_481
        {&p_1449->g_481,&p_1449->g_481,&p_1449->g_481,&p_1449->g_481,&p_1449->g_481,&p_1449->g_481,&p_1449->g_481,&p_1449->g_481,&p_1449->g_481}, // p_1449->g_480
        (void*)0, // p_1449->g_505
        {0UL}, // p_1449->g_509
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L), // p_1449->g_512
        (VECTOR(uint16_t, 8))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 65530UL), 65530UL), 65530UL, 3UL, 65530UL), // p_1449->g_520
        1UL, // p_1449->g_531
        {{{&p_1449->g_15,&p_1449->g_111[9][6][0],&p_1449->g_15,&p_1449->g_15}},{{&p_1449->g_15,&p_1449->g_111[9][6][0],&p_1449->g_15,&p_1449->g_15}}}, // p_1449->g_579
        (VECTOR(uint32_t, 4))(0x18880333L, (VECTOR(uint32_t, 2))(0x18880333L, 4294967295UL), 4294967295UL), // p_1449->g_590
        (VECTOR(uint16_t, 16))(0xA6EBL, (VECTOR(uint16_t, 4))(0xA6EBL, (VECTOR(uint16_t, 2))(0xA6EBL, 65535UL), 65535UL), 65535UL, 0xA6EBL, 65535UL, (VECTOR(uint16_t, 2))(0xA6EBL, 65535UL), (VECTOR(uint16_t, 2))(0xA6EBL, 65535UL), 0xA6EBL, 65535UL, 0xA6EBL, 65535UL), // p_1449->g_608
        (VECTOR(uint8_t, 2))(1UL, 0x84L), // p_1449->g_616
        (VECTOR(int16_t, 8))(0x16DBL, (VECTOR(int16_t, 4))(0x16DBL, (VECTOR(int16_t, 2))(0x16DBL, 0L), 0L), 0L, 0x16DBL, 0L), // p_1449->g_630
        {0x6D8DD86BL}, // p_1449->g_643
        {&p_1449->g_643,&p_1449->g_643,&p_1449->g_643,&p_1449->g_643}, // p_1449->g_647
        0x43F0DFC97C8A7DEBL, // p_1449->g_689
        &p_1449->g_689, // p_1449->g_688
        (VECTOR(uint16_t, 2))(65535UL, 0x5360L), // p_1449->g_699
        (VECTOR(int8_t, 8))(0x45L, (VECTOR(int8_t, 4))(0x45L, (VECTOR(int8_t, 2))(0x45L, (-1L)), (-1L)), (-1L), 0x45L, (-1L)), // p_1449->g_705
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L), // p_1449->g_708
        (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 6L), 6L), 6L, 7L, 6L, (VECTOR(int8_t, 2))(7L, 6L), (VECTOR(int8_t, 2))(7L, 6L), 7L, 6L, 7L, 6L), // p_1449->g_710
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L)), // p_1449->g_711
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L, (VECTOR(int8_t, 2))((-1L), 3L), (VECTOR(int8_t, 2))((-1L), 3L), (-1L), 3L, (-1L), 3L), // p_1449->g_713
        &p_1449->g_5, // p_1449->g_746
        &p_1449->g_746, // p_1449->g_745
        {{&p_1449->g_746,(void*)0,&p_1449->g_746,(void*)0,&p_1449->g_746,&p_1449->g_746,(void*)0,&p_1449->g_746},{&p_1449->g_746,(void*)0,&p_1449->g_746,(void*)0,&p_1449->g_746,&p_1449->g_746,(void*)0,&p_1449->g_746},{&p_1449->g_746,(void*)0,&p_1449->g_746,(void*)0,&p_1449->g_746,&p_1449->g_746,(void*)0,&p_1449->g_746},{&p_1449->g_746,(void*)0,&p_1449->g_746,(void*)0,&p_1449->g_746,&p_1449->g_746,(void*)0,&p_1449->g_746},{&p_1449->g_746,(void*)0,&p_1449->g_746,(void*)0,&p_1449->g_746,&p_1449->g_746,(void*)0,&p_1449->g_746},{&p_1449->g_746,(void*)0,&p_1449->g_746,(void*)0,&p_1449->g_746,&p_1449->g_746,(void*)0,&p_1449->g_746},{&p_1449->g_746,(void*)0,&p_1449->g_746,(void*)0,&p_1449->g_746,&p_1449->g_746,(void*)0,&p_1449->g_746},{&p_1449->g_746,(void*)0,&p_1449->g_746,(void*)0,&p_1449->g_746,&p_1449->g_746,(void*)0,&p_1449->g_746}}, // p_1449->g_758
        (VECTOR(int8_t, 2))(9L, 0x70L), // p_1449->g_775
        (void*)0, // p_1449->g_812
        &p_1449->g_812, // p_1449->g_811
        0x7717743CFE89BF2AL, // p_1449->g_815
        &p_1449->g_746, // p_1449->g_885
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x674E3AD0L), 0x674E3AD0L), 0x674E3AD0L, 1L, 0x674E3AD0L), // p_1449->g_887
        (VECTOR(int32_t, 4))(0x219035B1L, (VECTOR(int32_t, 2))(0x219035B1L, (-1L)), (-1L)), // p_1449->g_889
        0x06L, // p_1449->g_897
        &p_1449->g_222, // p_1449->g_902
        (void*)0, // p_1449->g_939
        {&p_1449->g_939,&p_1449->g_939,&p_1449->g_939,&p_1449->g_939,&p_1449->g_939,&p_1449->g_939,&p_1449->g_939,&p_1449->g_939,&p_1449->g_939,&p_1449->g_939}, // p_1449->g_938
        (VECTOR(int8_t, 2))(0x5EL, 4L), // p_1449->g_953
        (VECTOR(int8_t, 8))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x63L), 0x63L), 0x63L, (-7L), 0x63L), // p_1449->g_955
        (VECTOR(uint16_t, 4))(0xDB2CL, (VECTOR(uint16_t, 2))(0xDB2CL, 0x05DAL), 0x05DAL), // p_1449->g_968
        1L, // p_1449->g_970
        {{{0x66E9E013L},{0x66E9E013L},{0x66E9E013L},{0x66E9E013L}},{{0x66E9E013L},{0x66E9E013L},{0x66E9E013L},{0x66E9E013L}},{{0x66E9E013L},{0x66E9E013L},{0x66E9E013L},{0x66E9E013L}},{{0x66E9E013L},{0x66E9E013L},{0x66E9E013L},{0x66E9E013L}}}, // p_1449->g_1000
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 1L), 1L), 1L, 0L, 1L), // p_1449->g_1005
        (VECTOR(int64_t, 16))(0x35764E6B44955547L, (VECTOR(int64_t, 4))(0x35764E6B44955547L, (VECTOR(int64_t, 2))(0x35764E6B44955547L, (-1L)), (-1L)), (-1L), 0x35764E6B44955547L, (-1L), (VECTOR(int64_t, 2))(0x35764E6B44955547L, (-1L)), (VECTOR(int64_t, 2))(0x35764E6B44955547L, (-1L)), 0x35764E6B44955547L, (-1L), 0x35764E6B44955547L, (-1L)), // p_1449->g_1008
        (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x506DL), 0x506DL), // p_1449->g_1018
        (VECTOR(uint64_t, 4))(0xB8842620FD7650FFL, (VECTOR(uint64_t, 2))(0xB8842620FD7650FFL, 0xEF3DA27085F332E9L), 0xEF3DA27085F332E9L), // p_1449->g_1032
        (void*)0, // p_1449->g_1070
        &p_1449->g_1070, // p_1449->g_1069
        (void*)0, // p_1449->g_1087
        &p_1449->g_1087, // p_1449->g_1086
        (VECTOR(uint16_t, 2))(65527UL, 0x069DL), // p_1449->g_1093
        (void*)0, // p_1449->g_1099
        (void*)0, // p_1449->g_1100
        (VECTOR(uint8_t, 16))(0x48L, (VECTOR(uint8_t, 4))(0x48L, (VECTOR(uint8_t, 2))(0x48L, 255UL), 255UL), 255UL, 0x48L, 255UL, (VECTOR(uint8_t, 2))(0x48L, 255UL), (VECTOR(uint8_t, 2))(0x48L, 255UL), 0x48L, 255UL, 0x48L, 255UL), // p_1449->g_1101
        (VECTOR(uint8_t, 2))(255UL, 0x30L), // p_1449->g_1102
        (VECTOR(uint8_t, 4))(0x01L, (VECTOR(uint8_t, 2))(0x01L, 255UL), 255UL), // p_1449->g_1103
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 2L), 2L), // p_1449->g_1106
        (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-4L)), (-4L)), (-4L), 8L, (-4L)), // p_1449->g_1145
        {(void*)0,&p_1449->g_36,(void*)0,(void*)0,&p_1449->g_36,(void*)0,(void*)0,&p_1449->g_36,(void*)0}, // p_1449->g_1175
        {18446744073709551607UL}, // p_1449->g_1183
        (void*)0, // p_1449->g_1191
        {-1L}, // p_1449->g_1193
        {{(void*)0,&p_1449->g_213[2],&p_1449->g_213[2],&p_1449->g_213[8],&p_1449->g_213[2],&p_1449->g_213[7],(void*)0,&p_1449->g_213[9],&p_1449->g_213[2]},{(void*)0,&p_1449->g_213[2],&p_1449->g_213[2],&p_1449->g_213[8],&p_1449->g_213[2],&p_1449->g_213[7],(void*)0,&p_1449->g_213[9],&p_1449->g_213[2]},{(void*)0,&p_1449->g_213[2],&p_1449->g_213[2],&p_1449->g_213[8],&p_1449->g_213[2],&p_1449->g_213[7],(void*)0,&p_1449->g_213[9],&p_1449->g_213[2]},{(void*)0,&p_1449->g_213[2],&p_1449->g_213[2],&p_1449->g_213[8],&p_1449->g_213[2],&p_1449->g_213[7],(void*)0,&p_1449->g_213[9],&p_1449->g_213[2]},{(void*)0,&p_1449->g_213[2],&p_1449->g_213[2],&p_1449->g_213[8],&p_1449->g_213[2],&p_1449->g_213[7],(void*)0,&p_1449->g_213[9],&p_1449->g_213[2]},{(void*)0,&p_1449->g_213[2],&p_1449->g_213[2],&p_1449->g_213[8],&p_1449->g_213[2],&p_1449->g_213[7],(void*)0,&p_1449->g_213[9],&p_1449->g_213[2]},{(void*)0,&p_1449->g_213[2],&p_1449->g_213[2],&p_1449->g_213[8],&p_1449->g_213[2],&p_1449->g_213[7],(void*)0,&p_1449->g_213[9],&p_1449->g_213[2]},{(void*)0,&p_1449->g_213[2],&p_1449->g_213[2],&p_1449->g_213[8],&p_1449->g_213[2],&p_1449->g_213[7],(void*)0,&p_1449->g_213[9],&p_1449->g_213[2]}}, // p_1449->g_1203
        &p_1449->g_1203[1][7], // p_1449->g_1202
        (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x14L), 0x14L), 0x14L, 7L, 0x14L, (VECTOR(int8_t, 2))(7L, 0x14L), (VECTOR(int8_t, 2))(7L, 0x14L), 7L, 0x14L, 7L, 0x14L), // p_1449->g_1207
        (VECTOR(int8_t, 2))(0L, 0x11L), // p_1449->g_1208
        (VECTOR(int8_t, 8))(0x00L, (VECTOR(int8_t, 4))(0x00L, (VECTOR(int8_t, 2))(0x00L, 1L), 1L), 1L, 0x00L, 1L), // p_1449->g_1213
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x70L), 0x70L), // p_1449->g_1263
        (VECTOR(uint64_t, 8))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 5UL, 18446744073709551615UL), // p_1449->g_1277
        (VECTOR(int64_t, 2))(9L, (-1L)), // p_1449->g_1286
        (VECTOR(uint8_t, 8))(0x9EL, (VECTOR(uint8_t, 4))(0x9EL, (VECTOR(uint8_t, 2))(0x9EL, 1UL), 1UL), 1UL, 0x9EL, 1UL), // p_1449->g_1331
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int64_t, 2))(0L, (-1L)), (VECTOR(int64_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L)), // p_1449->g_1337
        (VECTOR(int64_t, 8))(0x1A366E3BE8992B51L, (VECTOR(int64_t, 4))(0x1A366E3BE8992B51L, (VECTOR(int64_t, 2))(0x1A366E3BE8992B51L, (-4L)), (-4L)), (-4L), 0x1A366E3BE8992B51L, (-4L)), // p_1449->g_1338
        0L, // p_1449->g_1341
        (VECTOR(int16_t, 2))(3L, 0x2578L), // p_1449->g_1349
        (VECTOR(int16_t, 2))((-10L), (-5L)), // p_1449->g_1350
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int16_t, 2))(0L, 0L), (VECTOR(int16_t, 2))(0L, 0L), 0L, 0L, 0L, 0L), // p_1449->g_1351
        {4L}, // p_1449->g_1394
        &p_1449->g_1099, // p_1449->g_1409
        (VECTOR(uint8_t, 8))(0x6DL, (VECTOR(uint8_t, 4))(0x6DL, (VECTOR(uint8_t, 2))(0x6DL, 0x0CL), 0x0CL), 0x0CL, 0x6DL, 0x0CL), // p_1449->g_1418
        (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), (-6L)), (-6L)), (-6L), (-4L), (-6L)), // p_1449->g_1419
        (VECTOR(int16_t, 8))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 1L), 1L), 1L, (-7L), 1L), // p_1449->g_1433
        (void*)0, // p_1449->g_1445
        &p_1449->g_1445, // p_1449->g_1444
        0, // p_1449->v_collective
        sequence_input[get_global_id(0)], // p_1449->global_0_offset
        sequence_input[get_global_id(1)], // p_1449->global_1_offset
        sequence_input[get_global_id(2)], // p_1449->global_2_offset
        sequence_input[get_local_id(0)], // p_1449->local_0_offset
        sequence_input[get_local_id(1)], // p_1449->local_1_offset
        sequence_input[get_local_id(2)], // p_1449->local_2_offset
        sequence_input[get_group_id(0)], // p_1449->group_0_offset
        sequence_input[get_group_id(1)], // p_1449->group_1_offset
        sequence_input[get_group_id(2)], // p_1449->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 55)), permutations[0][get_linear_local_id()])), // p_1449->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1450 = c_1451;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1449);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1449->g_3, "p_1449->g_3", print_hash_value);
    transparent_crc(p_1449->g_5, "p_1449->g_5", print_hash_value);
    transparent_crc(p_1449->g_6, "p_1449->g_6", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1449->g_7[i][j][k], "p_1449->g_7[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1449->g_8, "p_1449->g_8", print_hash_value);
    transparent_crc(p_1449->g_12, "p_1449->g_12", print_hash_value);
    transparent_crc(p_1449->g_15, "p_1449->g_15", print_hash_value);
    transparent_crc(p_1449->g_36, "p_1449->g_36", print_hash_value);
    transparent_crc(p_1449->g_67, "p_1449->g_67", print_hash_value);
    transparent_crc(p_1449->g_75, "p_1449->g_75", print_hash_value);
    transparent_crc(p_1449->g_110.x, "p_1449->g_110.x", print_hash_value);
    transparent_crc(p_1449->g_110.y, "p_1449->g_110.y", print_hash_value);
    transparent_crc(p_1449->g_110.z, "p_1449->g_110.z", print_hash_value);
    transparent_crc(p_1449->g_110.w, "p_1449->g_110.w", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1449->g_111[i][j][k], "p_1449->g_111[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1449->g_120.x, "p_1449->g_120.x", print_hash_value);
    transparent_crc(p_1449->g_120.y, "p_1449->g_120.y", print_hash_value);
    transparent_crc(p_1449->g_194.f0, "p_1449->g_194.f0", print_hash_value);
    transparent_crc(p_1449->g_196.f0, "p_1449->g_196.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1449->g_213[i], "p_1449->g_213[i]", print_hash_value);

    }
    transparent_crc(p_1449->g_395, "p_1449->g_395", print_hash_value);
    transparent_crc(p_1449->g_399.s0, "p_1449->g_399.s0", print_hash_value);
    transparent_crc(p_1449->g_399.s1, "p_1449->g_399.s1", print_hash_value);
    transparent_crc(p_1449->g_399.s2, "p_1449->g_399.s2", print_hash_value);
    transparent_crc(p_1449->g_399.s3, "p_1449->g_399.s3", print_hash_value);
    transparent_crc(p_1449->g_399.s4, "p_1449->g_399.s4", print_hash_value);
    transparent_crc(p_1449->g_399.s5, "p_1449->g_399.s5", print_hash_value);
    transparent_crc(p_1449->g_399.s6, "p_1449->g_399.s6", print_hash_value);
    transparent_crc(p_1449->g_399.s7, "p_1449->g_399.s7", print_hash_value);
    transparent_crc(p_1449->g_400.x, "p_1449->g_400.x", print_hash_value);
    transparent_crc(p_1449->g_400.y, "p_1449->g_400.y", print_hash_value);
    transparent_crc(p_1449->g_400.z, "p_1449->g_400.z", print_hash_value);
    transparent_crc(p_1449->g_400.w, "p_1449->g_400.w", print_hash_value);
    transparent_crc(p_1449->g_402.f0, "p_1449->g_402.f0", print_hash_value);
    transparent_crc(p_1449->g_404, "p_1449->g_404", print_hash_value);
    transparent_crc(p_1449->g_407, "p_1449->g_407", print_hash_value);
    transparent_crc(p_1449->g_422.x, "p_1449->g_422.x", print_hash_value);
    transparent_crc(p_1449->g_422.y, "p_1449->g_422.y", print_hash_value);
    transparent_crc(p_1449->g_422.z, "p_1449->g_422.z", print_hash_value);
    transparent_crc(p_1449->g_422.w, "p_1449->g_422.w", print_hash_value);
    transparent_crc(p_1449->g_429.s0, "p_1449->g_429.s0", print_hash_value);
    transparent_crc(p_1449->g_429.s1, "p_1449->g_429.s1", print_hash_value);
    transparent_crc(p_1449->g_429.s2, "p_1449->g_429.s2", print_hash_value);
    transparent_crc(p_1449->g_429.s3, "p_1449->g_429.s3", print_hash_value);
    transparent_crc(p_1449->g_429.s4, "p_1449->g_429.s4", print_hash_value);
    transparent_crc(p_1449->g_429.s5, "p_1449->g_429.s5", print_hash_value);
    transparent_crc(p_1449->g_429.s6, "p_1449->g_429.s6", print_hash_value);
    transparent_crc(p_1449->g_429.s7, "p_1449->g_429.s7", print_hash_value);
    transparent_crc(p_1449->g_429.s8, "p_1449->g_429.s8", print_hash_value);
    transparent_crc(p_1449->g_429.s9, "p_1449->g_429.s9", print_hash_value);
    transparent_crc(p_1449->g_429.sa, "p_1449->g_429.sa", print_hash_value);
    transparent_crc(p_1449->g_429.sb, "p_1449->g_429.sb", print_hash_value);
    transparent_crc(p_1449->g_429.sc, "p_1449->g_429.sc", print_hash_value);
    transparent_crc(p_1449->g_429.sd, "p_1449->g_429.sd", print_hash_value);
    transparent_crc(p_1449->g_429.se, "p_1449->g_429.se", print_hash_value);
    transparent_crc(p_1449->g_429.sf, "p_1449->g_429.sf", print_hash_value);
    transparent_crc(p_1449->g_509.f0, "p_1449->g_509.f0", print_hash_value);
    transparent_crc(p_1449->g_512.s0, "p_1449->g_512.s0", print_hash_value);
    transparent_crc(p_1449->g_512.s1, "p_1449->g_512.s1", print_hash_value);
    transparent_crc(p_1449->g_512.s2, "p_1449->g_512.s2", print_hash_value);
    transparent_crc(p_1449->g_512.s3, "p_1449->g_512.s3", print_hash_value);
    transparent_crc(p_1449->g_512.s4, "p_1449->g_512.s4", print_hash_value);
    transparent_crc(p_1449->g_512.s5, "p_1449->g_512.s5", print_hash_value);
    transparent_crc(p_1449->g_512.s6, "p_1449->g_512.s6", print_hash_value);
    transparent_crc(p_1449->g_512.s7, "p_1449->g_512.s7", print_hash_value);
    transparent_crc(p_1449->g_520.s0, "p_1449->g_520.s0", print_hash_value);
    transparent_crc(p_1449->g_520.s1, "p_1449->g_520.s1", print_hash_value);
    transparent_crc(p_1449->g_520.s2, "p_1449->g_520.s2", print_hash_value);
    transparent_crc(p_1449->g_520.s3, "p_1449->g_520.s3", print_hash_value);
    transparent_crc(p_1449->g_520.s4, "p_1449->g_520.s4", print_hash_value);
    transparent_crc(p_1449->g_520.s5, "p_1449->g_520.s5", print_hash_value);
    transparent_crc(p_1449->g_520.s6, "p_1449->g_520.s6", print_hash_value);
    transparent_crc(p_1449->g_520.s7, "p_1449->g_520.s7", print_hash_value);
    transparent_crc(p_1449->g_531, "p_1449->g_531", print_hash_value);
    transparent_crc(p_1449->g_590.x, "p_1449->g_590.x", print_hash_value);
    transparent_crc(p_1449->g_590.y, "p_1449->g_590.y", print_hash_value);
    transparent_crc(p_1449->g_590.z, "p_1449->g_590.z", print_hash_value);
    transparent_crc(p_1449->g_590.w, "p_1449->g_590.w", print_hash_value);
    transparent_crc(p_1449->g_608.s0, "p_1449->g_608.s0", print_hash_value);
    transparent_crc(p_1449->g_608.s1, "p_1449->g_608.s1", print_hash_value);
    transparent_crc(p_1449->g_608.s2, "p_1449->g_608.s2", print_hash_value);
    transparent_crc(p_1449->g_608.s3, "p_1449->g_608.s3", print_hash_value);
    transparent_crc(p_1449->g_608.s4, "p_1449->g_608.s4", print_hash_value);
    transparent_crc(p_1449->g_608.s5, "p_1449->g_608.s5", print_hash_value);
    transparent_crc(p_1449->g_608.s6, "p_1449->g_608.s6", print_hash_value);
    transparent_crc(p_1449->g_608.s7, "p_1449->g_608.s7", print_hash_value);
    transparent_crc(p_1449->g_608.s8, "p_1449->g_608.s8", print_hash_value);
    transparent_crc(p_1449->g_608.s9, "p_1449->g_608.s9", print_hash_value);
    transparent_crc(p_1449->g_608.sa, "p_1449->g_608.sa", print_hash_value);
    transparent_crc(p_1449->g_608.sb, "p_1449->g_608.sb", print_hash_value);
    transparent_crc(p_1449->g_608.sc, "p_1449->g_608.sc", print_hash_value);
    transparent_crc(p_1449->g_608.sd, "p_1449->g_608.sd", print_hash_value);
    transparent_crc(p_1449->g_608.se, "p_1449->g_608.se", print_hash_value);
    transparent_crc(p_1449->g_608.sf, "p_1449->g_608.sf", print_hash_value);
    transparent_crc(p_1449->g_616.x, "p_1449->g_616.x", print_hash_value);
    transparent_crc(p_1449->g_616.y, "p_1449->g_616.y", print_hash_value);
    transparent_crc(p_1449->g_630.s0, "p_1449->g_630.s0", print_hash_value);
    transparent_crc(p_1449->g_630.s1, "p_1449->g_630.s1", print_hash_value);
    transparent_crc(p_1449->g_630.s2, "p_1449->g_630.s2", print_hash_value);
    transparent_crc(p_1449->g_630.s3, "p_1449->g_630.s3", print_hash_value);
    transparent_crc(p_1449->g_630.s4, "p_1449->g_630.s4", print_hash_value);
    transparent_crc(p_1449->g_630.s5, "p_1449->g_630.s5", print_hash_value);
    transparent_crc(p_1449->g_630.s6, "p_1449->g_630.s6", print_hash_value);
    transparent_crc(p_1449->g_630.s7, "p_1449->g_630.s7", print_hash_value);
    transparent_crc(p_1449->g_643.f0, "p_1449->g_643.f0", print_hash_value);
    transparent_crc(p_1449->g_689, "p_1449->g_689", print_hash_value);
    transparent_crc(p_1449->g_699.x, "p_1449->g_699.x", print_hash_value);
    transparent_crc(p_1449->g_699.y, "p_1449->g_699.y", print_hash_value);
    transparent_crc(p_1449->g_705.s0, "p_1449->g_705.s0", print_hash_value);
    transparent_crc(p_1449->g_705.s1, "p_1449->g_705.s1", print_hash_value);
    transparent_crc(p_1449->g_705.s2, "p_1449->g_705.s2", print_hash_value);
    transparent_crc(p_1449->g_705.s3, "p_1449->g_705.s3", print_hash_value);
    transparent_crc(p_1449->g_705.s4, "p_1449->g_705.s4", print_hash_value);
    transparent_crc(p_1449->g_705.s5, "p_1449->g_705.s5", print_hash_value);
    transparent_crc(p_1449->g_705.s6, "p_1449->g_705.s6", print_hash_value);
    transparent_crc(p_1449->g_705.s7, "p_1449->g_705.s7", print_hash_value);
    transparent_crc(p_1449->g_708.s0, "p_1449->g_708.s0", print_hash_value);
    transparent_crc(p_1449->g_708.s1, "p_1449->g_708.s1", print_hash_value);
    transparent_crc(p_1449->g_708.s2, "p_1449->g_708.s2", print_hash_value);
    transparent_crc(p_1449->g_708.s3, "p_1449->g_708.s3", print_hash_value);
    transparent_crc(p_1449->g_708.s4, "p_1449->g_708.s4", print_hash_value);
    transparent_crc(p_1449->g_708.s5, "p_1449->g_708.s5", print_hash_value);
    transparent_crc(p_1449->g_708.s6, "p_1449->g_708.s6", print_hash_value);
    transparent_crc(p_1449->g_708.s7, "p_1449->g_708.s7", print_hash_value);
    transparent_crc(p_1449->g_710.s0, "p_1449->g_710.s0", print_hash_value);
    transparent_crc(p_1449->g_710.s1, "p_1449->g_710.s1", print_hash_value);
    transparent_crc(p_1449->g_710.s2, "p_1449->g_710.s2", print_hash_value);
    transparent_crc(p_1449->g_710.s3, "p_1449->g_710.s3", print_hash_value);
    transparent_crc(p_1449->g_710.s4, "p_1449->g_710.s4", print_hash_value);
    transparent_crc(p_1449->g_710.s5, "p_1449->g_710.s5", print_hash_value);
    transparent_crc(p_1449->g_710.s6, "p_1449->g_710.s6", print_hash_value);
    transparent_crc(p_1449->g_710.s7, "p_1449->g_710.s7", print_hash_value);
    transparent_crc(p_1449->g_710.s8, "p_1449->g_710.s8", print_hash_value);
    transparent_crc(p_1449->g_710.s9, "p_1449->g_710.s9", print_hash_value);
    transparent_crc(p_1449->g_710.sa, "p_1449->g_710.sa", print_hash_value);
    transparent_crc(p_1449->g_710.sb, "p_1449->g_710.sb", print_hash_value);
    transparent_crc(p_1449->g_710.sc, "p_1449->g_710.sc", print_hash_value);
    transparent_crc(p_1449->g_710.sd, "p_1449->g_710.sd", print_hash_value);
    transparent_crc(p_1449->g_710.se, "p_1449->g_710.se", print_hash_value);
    transparent_crc(p_1449->g_710.sf, "p_1449->g_710.sf", print_hash_value);
    transparent_crc(p_1449->g_711.s0, "p_1449->g_711.s0", print_hash_value);
    transparent_crc(p_1449->g_711.s1, "p_1449->g_711.s1", print_hash_value);
    transparent_crc(p_1449->g_711.s2, "p_1449->g_711.s2", print_hash_value);
    transparent_crc(p_1449->g_711.s3, "p_1449->g_711.s3", print_hash_value);
    transparent_crc(p_1449->g_711.s4, "p_1449->g_711.s4", print_hash_value);
    transparent_crc(p_1449->g_711.s5, "p_1449->g_711.s5", print_hash_value);
    transparent_crc(p_1449->g_711.s6, "p_1449->g_711.s6", print_hash_value);
    transparent_crc(p_1449->g_711.s7, "p_1449->g_711.s7", print_hash_value);
    transparent_crc(p_1449->g_711.s8, "p_1449->g_711.s8", print_hash_value);
    transparent_crc(p_1449->g_711.s9, "p_1449->g_711.s9", print_hash_value);
    transparent_crc(p_1449->g_711.sa, "p_1449->g_711.sa", print_hash_value);
    transparent_crc(p_1449->g_711.sb, "p_1449->g_711.sb", print_hash_value);
    transparent_crc(p_1449->g_711.sc, "p_1449->g_711.sc", print_hash_value);
    transparent_crc(p_1449->g_711.sd, "p_1449->g_711.sd", print_hash_value);
    transparent_crc(p_1449->g_711.se, "p_1449->g_711.se", print_hash_value);
    transparent_crc(p_1449->g_711.sf, "p_1449->g_711.sf", print_hash_value);
    transparent_crc(p_1449->g_713.s0, "p_1449->g_713.s0", print_hash_value);
    transparent_crc(p_1449->g_713.s1, "p_1449->g_713.s1", print_hash_value);
    transparent_crc(p_1449->g_713.s2, "p_1449->g_713.s2", print_hash_value);
    transparent_crc(p_1449->g_713.s3, "p_1449->g_713.s3", print_hash_value);
    transparent_crc(p_1449->g_713.s4, "p_1449->g_713.s4", print_hash_value);
    transparent_crc(p_1449->g_713.s5, "p_1449->g_713.s5", print_hash_value);
    transparent_crc(p_1449->g_713.s6, "p_1449->g_713.s6", print_hash_value);
    transparent_crc(p_1449->g_713.s7, "p_1449->g_713.s7", print_hash_value);
    transparent_crc(p_1449->g_713.s8, "p_1449->g_713.s8", print_hash_value);
    transparent_crc(p_1449->g_713.s9, "p_1449->g_713.s9", print_hash_value);
    transparent_crc(p_1449->g_713.sa, "p_1449->g_713.sa", print_hash_value);
    transparent_crc(p_1449->g_713.sb, "p_1449->g_713.sb", print_hash_value);
    transparent_crc(p_1449->g_713.sc, "p_1449->g_713.sc", print_hash_value);
    transparent_crc(p_1449->g_713.sd, "p_1449->g_713.sd", print_hash_value);
    transparent_crc(p_1449->g_713.se, "p_1449->g_713.se", print_hash_value);
    transparent_crc(p_1449->g_713.sf, "p_1449->g_713.sf", print_hash_value);
    transparent_crc(p_1449->g_775.x, "p_1449->g_775.x", print_hash_value);
    transparent_crc(p_1449->g_775.y, "p_1449->g_775.y", print_hash_value);
    transparent_crc(p_1449->g_815, "p_1449->g_815", print_hash_value);
    transparent_crc(p_1449->g_887.s0, "p_1449->g_887.s0", print_hash_value);
    transparent_crc(p_1449->g_887.s1, "p_1449->g_887.s1", print_hash_value);
    transparent_crc(p_1449->g_887.s2, "p_1449->g_887.s2", print_hash_value);
    transparent_crc(p_1449->g_887.s3, "p_1449->g_887.s3", print_hash_value);
    transparent_crc(p_1449->g_887.s4, "p_1449->g_887.s4", print_hash_value);
    transparent_crc(p_1449->g_887.s5, "p_1449->g_887.s5", print_hash_value);
    transparent_crc(p_1449->g_887.s6, "p_1449->g_887.s6", print_hash_value);
    transparent_crc(p_1449->g_887.s7, "p_1449->g_887.s7", print_hash_value);
    transparent_crc(p_1449->g_889.x, "p_1449->g_889.x", print_hash_value);
    transparent_crc(p_1449->g_889.y, "p_1449->g_889.y", print_hash_value);
    transparent_crc(p_1449->g_889.z, "p_1449->g_889.z", print_hash_value);
    transparent_crc(p_1449->g_889.w, "p_1449->g_889.w", print_hash_value);
    transparent_crc(p_1449->g_897, "p_1449->g_897", print_hash_value);
    transparent_crc(p_1449->g_953.x, "p_1449->g_953.x", print_hash_value);
    transparent_crc(p_1449->g_953.y, "p_1449->g_953.y", print_hash_value);
    transparent_crc(p_1449->g_955.s0, "p_1449->g_955.s0", print_hash_value);
    transparent_crc(p_1449->g_955.s1, "p_1449->g_955.s1", print_hash_value);
    transparent_crc(p_1449->g_955.s2, "p_1449->g_955.s2", print_hash_value);
    transparent_crc(p_1449->g_955.s3, "p_1449->g_955.s3", print_hash_value);
    transparent_crc(p_1449->g_955.s4, "p_1449->g_955.s4", print_hash_value);
    transparent_crc(p_1449->g_955.s5, "p_1449->g_955.s5", print_hash_value);
    transparent_crc(p_1449->g_955.s6, "p_1449->g_955.s6", print_hash_value);
    transparent_crc(p_1449->g_955.s7, "p_1449->g_955.s7", print_hash_value);
    transparent_crc(p_1449->g_968.x, "p_1449->g_968.x", print_hash_value);
    transparent_crc(p_1449->g_968.y, "p_1449->g_968.y", print_hash_value);
    transparent_crc(p_1449->g_968.z, "p_1449->g_968.z", print_hash_value);
    transparent_crc(p_1449->g_968.w, "p_1449->g_968.w", print_hash_value);
    transparent_crc(p_1449->g_970, "p_1449->g_970", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1449->g_1000[i][j].f0, "p_1449->g_1000[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1449->g_1005.s0, "p_1449->g_1005.s0", print_hash_value);
    transparent_crc(p_1449->g_1005.s1, "p_1449->g_1005.s1", print_hash_value);
    transparent_crc(p_1449->g_1005.s2, "p_1449->g_1005.s2", print_hash_value);
    transparent_crc(p_1449->g_1005.s3, "p_1449->g_1005.s3", print_hash_value);
    transparent_crc(p_1449->g_1005.s4, "p_1449->g_1005.s4", print_hash_value);
    transparent_crc(p_1449->g_1005.s5, "p_1449->g_1005.s5", print_hash_value);
    transparent_crc(p_1449->g_1005.s6, "p_1449->g_1005.s6", print_hash_value);
    transparent_crc(p_1449->g_1005.s7, "p_1449->g_1005.s7", print_hash_value);
    transparent_crc(p_1449->g_1008.s0, "p_1449->g_1008.s0", print_hash_value);
    transparent_crc(p_1449->g_1008.s1, "p_1449->g_1008.s1", print_hash_value);
    transparent_crc(p_1449->g_1008.s2, "p_1449->g_1008.s2", print_hash_value);
    transparent_crc(p_1449->g_1008.s3, "p_1449->g_1008.s3", print_hash_value);
    transparent_crc(p_1449->g_1008.s4, "p_1449->g_1008.s4", print_hash_value);
    transparent_crc(p_1449->g_1008.s5, "p_1449->g_1008.s5", print_hash_value);
    transparent_crc(p_1449->g_1008.s6, "p_1449->g_1008.s6", print_hash_value);
    transparent_crc(p_1449->g_1008.s7, "p_1449->g_1008.s7", print_hash_value);
    transparent_crc(p_1449->g_1008.s8, "p_1449->g_1008.s8", print_hash_value);
    transparent_crc(p_1449->g_1008.s9, "p_1449->g_1008.s9", print_hash_value);
    transparent_crc(p_1449->g_1008.sa, "p_1449->g_1008.sa", print_hash_value);
    transparent_crc(p_1449->g_1008.sb, "p_1449->g_1008.sb", print_hash_value);
    transparent_crc(p_1449->g_1008.sc, "p_1449->g_1008.sc", print_hash_value);
    transparent_crc(p_1449->g_1008.sd, "p_1449->g_1008.sd", print_hash_value);
    transparent_crc(p_1449->g_1008.se, "p_1449->g_1008.se", print_hash_value);
    transparent_crc(p_1449->g_1008.sf, "p_1449->g_1008.sf", print_hash_value);
    transparent_crc(p_1449->g_1018.x, "p_1449->g_1018.x", print_hash_value);
    transparent_crc(p_1449->g_1018.y, "p_1449->g_1018.y", print_hash_value);
    transparent_crc(p_1449->g_1018.z, "p_1449->g_1018.z", print_hash_value);
    transparent_crc(p_1449->g_1018.w, "p_1449->g_1018.w", print_hash_value);
    transparent_crc(p_1449->g_1032.x, "p_1449->g_1032.x", print_hash_value);
    transparent_crc(p_1449->g_1032.y, "p_1449->g_1032.y", print_hash_value);
    transparent_crc(p_1449->g_1032.z, "p_1449->g_1032.z", print_hash_value);
    transparent_crc(p_1449->g_1032.w, "p_1449->g_1032.w", print_hash_value);
    transparent_crc(p_1449->g_1093.x, "p_1449->g_1093.x", print_hash_value);
    transparent_crc(p_1449->g_1093.y, "p_1449->g_1093.y", print_hash_value);
    transparent_crc(p_1449->g_1101.s0, "p_1449->g_1101.s0", print_hash_value);
    transparent_crc(p_1449->g_1101.s1, "p_1449->g_1101.s1", print_hash_value);
    transparent_crc(p_1449->g_1101.s2, "p_1449->g_1101.s2", print_hash_value);
    transparent_crc(p_1449->g_1101.s3, "p_1449->g_1101.s3", print_hash_value);
    transparent_crc(p_1449->g_1101.s4, "p_1449->g_1101.s4", print_hash_value);
    transparent_crc(p_1449->g_1101.s5, "p_1449->g_1101.s5", print_hash_value);
    transparent_crc(p_1449->g_1101.s6, "p_1449->g_1101.s6", print_hash_value);
    transparent_crc(p_1449->g_1101.s7, "p_1449->g_1101.s7", print_hash_value);
    transparent_crc(p_1449->g_1101.s8, "p_1449->g_1101.s8", print_hash_value);
    transparent_crc(p_1449->g_1101.s9, "p_1449->g_1101.s9", print_hash_value);
    transparent_crc(p_1449->g_1101.sa, "p_1449->g_1101.sa", print_hash_value);
    transparent_crc(p_1449->g_1101.sb, "p_1449->g_1101.sb", print_hash_value);
    transparent_crc(p_1449->g_1101.sc, "p_1449->g_1101.sc", print_hash_value);
    transparent_crc(p_1449->g_1101.sd, "p_1449->g_1101.sd", print_hash_value);
    transparent_crc(p_1449->g_1101.se, "p_1449->g_1101.se", print_hash_value);
    transparent_crc(p_1449->g_1101.sf, "p_1449->g_1101.sf", print_hash_value);
    transparent_crc(p_1449->g_1102.x, "p_1449->g_1102.x", print_hash_value);
    transparent_crc(p_1449->g_1102.y, "p_1449->g_1102.y", print_hash_value);
    transparent_crc(p_1449->g_1103.x, "p_1449->g_1103.x", print_hash_value);
    transparent_crc(p_1449->g_1103.y, "p_1449->g_1103.y", print_hash_value);
    transparent_crc(p_1449->g_1103.z, "p_1449->g_1103.z", print_hash_value);
    transparent_crc(p_1449->g_1103.w, "p_1449->g_1103.w", print_hash_value);
    transparent_crc(p_1449->g_1106.x, "p_1449->g_1106.x", print_hash_value);
    transparent_crc(p_1449->g_1106.y, "p_1449->g_1106.y", print_hash_value);
    transparent_crc(p_1449->g_1106.z, "p_1449->g_1106.z", print_hash_value);
    transparent_crc(p_1449->g_1106.w, "p_1449->g_1106.w", print_hash_value);
    transparent_crc(p_1449->g_1145.s0, "p_1449->g_1145.s0", print_hash_value);
    transparent_crc(p_1449->g_1145.s1, "p_1449->g_1145.s1", print_hash_value);
    transparent_crc(p_1449->g_1145.s2, "p_1449->g_1145.s2", print_hash_value);
    transparent_crc(p_1449->g_1145.s3, "p_1449->g_1145.s3", print_hash_value);
    transparent_crc(p_1449->g_1145.s4, "p_1449->g_1145.s4", print_hash_value);
    transparent_crc(p_1449->g_1145.s5, "p_1449->g_1145.s5", print_hash_value);
    transparent_crc(p_1449->g_1145.s6, "p_1449->g_1145.s6", print_hash_value);
    transparent_crc(p_1449->g_1145.s7, "p_1449->g_1145.s7", print_hash_value);
    transparent_crc(p_1449->g_1183.f0, "p_1449->g_1183.f0", print_hash_value);
    transparent_crc(p_1449->g_1193.f0, "p_1449->g_1193.f0", print_hash_value);
    transparent_crc(p_1449->g_1207.s0, "p_1449->g_1207.s0", print_hash_value);
    transparent_crc(p_1449->g_1207.s1, "p_1449->g_1207.s1", print_hash_value);
    transparent_crc(p_1449->g_1207.s2, "p_1449->g_1207.s2", print_hash_value);
    transparent_crc(p_1449->g_1207.s3, "p_1449->g_1207.s3", print_hash_value);
    transparent_crc(p_1449->g_1207.s4, "p_1449->g_1207.s4", print_hash_value);
    transparent_crc(p_1449->g_1207.s5, "p_1449->g_1207.s5", print_hash_value);
    transparent_crc(p_1449->g_1207.s6, "p_1449->g_1207.s6", print_hash_value);
    transparent_crc(p_1449->g_1207.s7, "p_1449->g_1207.s7", print_hash_value);
    transparent_crc(p_1449->g_1207.s8, "p_1449->g_1207.s8", print_hash_value);
    transparent_crc(p_1449->g_1207.s9, "p_1449->g_1207.s9", print_hash_value);
    transparent_crc(p_1449->g_1207.sa, "p_1449->g_1207.sa", print_hash_value);
    transparent_crc(p_1449->g_1207.sb, "p_1449->g_1207.sb", print_hash_value);
    transparent_crc(p_1449->g_1207.sc, "p_1449->g_1207.sc", print_hash_value);
    transparent_crc(p_1449->g_1207.sd, "p_1449->g_1207.sd", print_hash_value);
    transparent_crc(p_1449->g_1207.se, "p_1449->g_1207.se", print_hash_value);
    transparent_crc(p_1449->g_1207.sf, "p_1449->g_1207.sf", print_hash_value);
    transparent_crc(p_1449->g_1208.x, "p_1449->g_1208.x", print_hash_value);
    transparent_crc(p_1449->g_1208.y, "p_1449->g_1208.y", print_hash_value);
    transparent_crc(p_1449->g_1213.s0, "p_1449->g_1213.s0", print_hash_value);
    transparent_crc(p_1449->g_1213.s1, "p_1449->g_1213.s1", print_hash_value);
    transparent_crc(p_1449->g_1213.s2, "p_1449->g_1213.s2", print_hash_value);
    transparent_crc(p_1449->g_1213.s3, "p_1449->g_1213.s3", print_hash_value);
    transparent_crc(p_1449->g_1213.s4, "p_1449->g_1213.s4", print_hash_value);
    transparent_crc(p_1449->g_1213.s5, "p_1449->g_1213.s5", print_hash_value);
    transparent_crc(p_1449->g_1213.s6, "p_1449->g_1213.s6", print_hash_value);
    transparent_crc(p_1449->g_1213.s7, "p_1449->g_1213.s7", print_hash_value);
    transparent_crc(p_1449->g_1263.x, "p_1449->g_1263.x", print_hash_value);
    transparent_crc(p_1449->g_1263.y, "p_1449->g_1263.y", print_hash_value);
    transparent_crc(p_1449->g_1263.z, "p_1449->g_1263.z", print_hash_value);
    transparent_crc(p_1449->g_1263.w, "p_1449->g_1263.w", print_hash_value);
    transparent_crc(p_1449->g_1277.s0, "p_1449->g_1277.s0", print_hash_value);
    transparent_crc(p_1449->g_1277.s1, "p_1449->g_1277.s1", print_hash_value);
    transparent_crc(p_1449->g_1277.s2, "p_1449->g_1277.s2", print_hash_value);
    transparent_crc(p_1449->g_1277.s3, "p_1449->g_1277.s3", print_hash_value);
    transparent_crc(p_1449->g_1277.s4, "p_1449->g_1277.s4", print_hash_value);
    transparent_crc(p_1449->g_1277.s5, "p_1449->g_1277.s5", print_hash_value);
    transparent_crc(p_1449->g_1277.s6, "p_1449->g_1277.s6", print_hash_value);
    transparent_crc(p_1449->g_1277.s7, "p_1449->g_1277.s7", print_hash_value);
    transparent_crc(p_1449->g_1286.x, "p_1449->g_1286.x", print_hash_value);
    transparent_crc(p_1449->g_1286.y, "p_1449->g_1286.y", print_hash_value);
    transparent_crc(p_1449->g_1331.s0, "p_1449->g_1331.s0", print_hash_value);
    transparent_crc(p_1449->g_1331.s1, "p_1449->g_1331.s1", print_hash_value);
    transparent_crc(p_1449->g_1331.s2, "p_1449->g_1331.s2", print_hash_value);
    transparent_crc(p_1449->g_1331.s3, "p_1449->g_1331.s3", print_hash_value);
    transparent_crc(p_1449->g_1331.s4, "p_1449->g_1331.s4", print_hash_value);
    transparent_crc(p_1449->g_1331.s5, "p_1449->g_1331.s5", print_hash_value);
    transparent_crc(p_1449->g_1331.s6, "p_1449->g_1331.s6", print_hash_value);
    transparent_crc(p_1449->g_1331.s7, "p_1449->g_1331.s7", print_hash_value);
    transparent_crc(p_1449->g_1337.s0, "p_1449->g_1337.s0", print_hash_value);
    transparent_crc(p_1449->g_1337.s1, "p_1449->g_1337.s1", print_hash_value);
    transparent_crc(p_1449->g_1337.s2, "p_1449->g_1337.s2", print_hash_value);
    transparent_crc(p_1449->g_1337.s3, "p_1449->g_1337.s3", print_hash_value);
    transparent_crc(p_1449->g_1337.s4, "p_1449->g_1337.s4", print_hash_value);
    transparent_crc(p_1449->g_1337.s5, "p_1449->g_1337.s5", print_hash_value);
    transparent_crc(p_1449->g_1337.s6, "p_1449->g_1337.s6", print_hash_value);
    transparent_crc(p_1449->g_1337.s7, "p_1449->g_1337.s7", print_hash_value);
    transparent_crc(p_1449->g_1337.s8, "p_1449->g_1337.s8", print_hash_value);
    transparent_crc(p_1449->g_1337.s9, "p_1449->g_1337.s9", print_hash_value);
    transparent_crc(p_1449->g_1337.sa, "p_1449->g_1337.sa", print_hash_value);
    transparent_crc(p_1449->g_1337.sb, "p_1449->g_1337.sb", print_hash_value);
    transparent_crc(p_1449->g_1337.sc, "p_1449->g_1337.sc", print_hash_value);
    transparent_crc(p_1449->g_1337.sd, "p_1449->g_1337.sd", print_hash_value);
    transparent_crc(p_1449->g_1337.se, "p_1449->g_1337.se", print_hash_value);
    transparent_crc(p_1449->g_1337.sf, "p_1449->g_1337.sf", print_hash_value);
    transparent_crc(p_1449->g_1338.s0, "p_1449->g_1338.s0", print_hash_value);
    transparent_crc(p_1449->g_1338.s1, "p_1449->g_1338.s1", print_hash_value);
    transparent_crc(p_1449->g_1338.s2, "p_1449->g_1338.s2", print_hash_value);
    transparent_crc(p_1449->g_1338.s3, "p_1449->g_1338.s3", print_hash_value);
    transparent_crc(p_1449->g_1338.s4, "p_1449->g_1338.s4", print_hash_value);
    transparent_crc(p_1449->g_1338.s5, "p_1449->g_1338.s5", print_hash_value);
    transparent_crc(p_1449->g_1338.s6, "p_1449->g_1338.s6", print_hash_value);
    transparent_crc(p_1449->g_1338.s7, "p_1449->g_1338.s7", print_hash_value);
    transparent_crc(p_1449->g_1341, "p_1449->g_1341", print_hash_value);
    transparent_crc(p_1449->g_1349.x, "p_1449->g_1349.x", print_hash_value);
    transparent_crc(p_1449->g_1349.y, "p_1449->g_1349.y", print_hash_value);
    transparent_crc(p_1449->g_1350.x, "p_1449->g_1350.x", print_hash_value);
    transparent_crc(p_1449->g_1350.y, "p_1449->g_1350.y", print_hash_value);
    transparent_crc(p_1449->g_1351.s0, "p_1449->g_1351.s0", print_hash_value);
    transparent_crc(p_1449->g_1351.s1, "p_1449->g_1351.s1", print_hash_value);
    transparent_crc(p_1449->g_1351.s2, "p_1449->g_1351.s2", print_hash_value);
    transparent_crc(p_1449->g_1351.s3, "p_1449->g_1351.s3", print_hash_value);
    transparent_crc(p_1449->g_1351.s4, "p_1449->g_1351.s4", print_hash_value);
    transparent_crc(p_1449->g_1351.s5, "p_1449->g_1351.s5", print_hash_value);
    transparent_crc(p_1449->g_1351.s6, "p_1449->g_1351.s6", print_hash_value);
    transparent_crc(p_1449->g_1351.s7, "p_1449->g_1351.s7", print_hash_value);
    transparent_crc(p_1449->g_1351.s8, "p_1449->g_1351.s8", print_hash_value);
    transparent_crc(p_1449->g_1351.s9, "p_1449->g_1351.s9", print_hash_value);
    transparent_crc(p_1449->g_1351.sa, "p_1449->g_1351.sa", print_hash_value);
    transparent_crc(p_1449->g_1351.sb, "p_1449->g_1351.sb", print_hash_value);
    transparent_crc(p_1449->g_1351.sc, "p_1449->g_1351.sc", print_hash_value);
    transparent_crc(p_1449->g_1351.sd, "p_1449->g_1351.sd", print_hash_value);
    transparent_crc(p_1449->g_1351.se, "p_1449->g_1351.se", print_hash_value);
    transparent_crc(p_1449->g_1351.sf, "p_1449->g_1351.sf", print_hash_value);
    transparent_crc(p_1449->g_1394.f0, "p_1449->g_1394.f0", print_hash_value);
    transparent_crc(p_1449->g_1418.s0, "p_1449->g_1418.s0", print_hash_value);
    transparent_crc(p_1449->g_1418.s1, "p_1449->g_1418.s1", print_hash_value);
    transparent_crc(p_1449->g_1418.s2, "p_1449->g_1418.s2", print_hash_value);
    transparent_crc(p_1449->g_1418.s3, "p_1449->g_1418.s3", print_hash_value);
    transparent_crc(p_1449->g_1418.s4, "p_1449->g_1418.s4", print_hash_value);
    transparent_crc(p_1449->g_1418.s5, "p_1449->g_1418.s5", print_hash_value);
    transparent_crc(p_1449->g_1418.s6, "p_1449->g_1418.s6", print_hash_value);
    transparent_crc(p_1449->g_1418.s7, "p_1449->g_1418.s7", print_hash_value);
    transparent_crc(p_1449->g_1419.s0, "p_1449->g_1419.s0", print_hash_value);
    transparent_crc(p_1449->g_1419.s1, "p_1449->g_1419.s1", print_hash_value);
    transparent_crc(p_1449->g_1419.s2, "p_1449->g_1419.s2", print_hash_value);
    transparent_crc(p_1449->g_1419.s3, "p_1449->g_1419.s3", print_hash_value);
    transparent_crc(p_1449->g_1419.s4, "p_1449->g_1419.s4", print_hash_value);
    transparent_crc(p_1449->g_1419.s5, "p_1449->g_1419.s5", print_hash_value);
    transparent_crc(p_1449->g_1419.s6, "p_1449->g_1419.s6", print_hash_value);
    transparent_crc(p_1449->g_1419.s7, "p_1449->g_1419.s7", print_hash_value);
    transparent_crc(p_1449->g_1433.s0, "p_1449->g_1433.s0", print_hash_value);
    transparent_crc(p_1449->g_1433.s1, "p_1449->g_1433.s1", print_hash_value);
    transparent_crc(p_1449->g_1433.s2, "p_1449->g_1433.s2", print_hash_value);
    transparent_crc(p_1449->g_1433.s3, "p_1449->g_1433.s3", print_hash_value);
    transparent_crc(p_1449->g_1433.s4, "p_1449->g_1433.s4", print_hash_value);
    transparent_crc(p_1449->g_1433.s5, "p_1449->g_1433.s5", print_hash_value);
    transparent_crc(p_1449->g_1433.s6, "p_1449->g_1433.s6", print_hash_value);
    transparent_crc(p_1449->g_1433.s7, "p_1449->g_1433.s7", print_hash_value);
    transparent_crc(p_1449->v_collective, "p_1449->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 83; i++)
            transparent_crc(p_1449->g_special_values[i + 83 * get_linear_group_id()], "p_1449->g_special_values[i + 83 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 83; i++)
            transparent_crc(p_1449->l_special_values[i], "p_1449->l_special_values[i]", print_hash_value);
    transparent_crc(p_1449->l_comm_values[get_linear_local_id()], "p_1449->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1449->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()], "p_1449->g_comm_values[get_linear_group_id() * 55 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
