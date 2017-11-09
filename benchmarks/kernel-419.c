// --atomics 69 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 74,20,4 -l 1,10,4
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

__constant uint32_t permutations[10][40] = {
{9,29,36,2,8,19,21,18,4,6,20,31,32,33,17,34,27,37,25,30,13,15,38,3,24,10,1,7,35,39,23,11,0,14,26,28,5,12,16,22}, // permutation 0
{27,37,38,26,5,10,11,24,22,33,19,35,25,30,6,34,23,13,39,31,3,29,0,32,1,12,21,2,8,18,9,20,36,7,16,14,17,28,15,4}, // permutation 1
{23,28,31,36,21,33,37,26,0,5,18,12,27,34,35,13,38,19,25,4,22,2,7,9,29,24,11,20,8,30,10,32,16,39,6,17,1,14,15,3}, // permutation 2
{37,0,22,10,28,35,14,12,15,27,18,6,32,19,39,34,5,4,38,23,33,11,1,20,36,26,8,2,3,9,29,24,30,13,21,16,25,7,31,17}, // permutation 3
{27,4,33,11,13,0,16,32,10,19,1,14,17,25,39,15,22,7,18,8,9,37,28,36,3,24,5,29,23,6,26,2,20,38,12,21,34,30,31,35}, // permutation 4
{39,16,29,1,25,20,3,27,22,8,36,31,9,32,37,38,33,23,14,35,30,10,24,0,4,21,28,11,17,15,7,6,18,26,2,19,12,5,13,34}, // permutation 5
{31,4,30,32,16,39,29,12,21,0,34,37,10,3,20,36,8,6,11,27,38,14,9,7,26,25,23,17,22,13,35,1,33,15,28,19,2,18,5,24}, // permutation 6
{24,14,18,4,27,6,7,35,12,29,21,39,28,23,16,36,37,1,15,13,10,26,8,34,9,25,32,5,38,30,17,31,33,3,11,0,20,2,22,19}, // permutation 7
{19,37,27,4,35,22,12,7,1,25,17,16,39,32,28,3,11,6,29,30,10,24,9,26,36,13,21,31,38,5,33,0,18,8,15,2,20,14,34,23}, // permutation 8
{24,14,30,5,26,17,22,8,35,10,18,28,37,27,15,12,16,21,38,29,34,23,7,3,20,25,4,31,33,1,36,11,9,13,19,39,32,2,0,6} // permutation 9
};

// Seed: 3521994526

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   int8_t * f1;
};

union U1 {
   uint16_t  f0;
};

struct S2 {
    volatile int32_t g_2;
    int32_t g_3;
    int8_t g_12[7];
    int8_t *g_31[7];
    int8_t **g_30;
    int32_t g_32;
    volatile int32_t g_35;
    volatile int32_t g_36[8][3];
    volatile int32_t g_37;
    volatile int32_t g_38;
    int32_t g_39[1];
    union U1 g_51;
    int16_t g_61;
    int32_t g_77;
    uint32_t g_82;
    volatile VECTOR(int8_t, 4) g_93;
    uint32_t g_97;
    volatile VECTOR(int32_t, 8) g_103;
    VECTOR(int32_t, 4) g_106;
    int8_t g_122;
    int32_t * volatile g_128;
    int32_t *g_130;
    int32_t ** volatile g_129;
    int32_t g_152;
    int16_t *g_170[8][9];
    int16_t *g_171;
    uint32_t g_177;
    int32_t ** volatile g_255;
    volatile int8_t g_271;
    union U0 g_278;
    int64_t g_328;
    int64_t g_330;
    volatile int32_t g_347;
    volatile uint64_t g_348;
    VECTOR(int32_t, 2) g_351;
    int32_t g_355;
    VECTOR(int32_t, 8) g_357;
    VECTOR(int32_t, 4) g_358;
    int64_t * volatile g_397;
    int32_t g_425[9][6][4];
    volatile VECTOR(uint16_t, 16) g_429;
    VECTOR(uint16_t, 2) g_439;
    VECTOR(uint16_t, 16) g_440;
    VECTOR(uint64_t, 8) g_441;
    VECTOR(uint32_t, 16) g_460;
    VECTOR(uint8_t, 16) g_484;
    uint8_t g_487;
    volatile int16_t g_500;
    volatile VECTOR(int8_t, 8) g_518;
    int32_t ** volatile g_533;
    volatile int32_t *g_541;
    volatile int32_t **g_540;
    volatile VECTOR(int16_t, 2) g_558;
    int32_t ** volatile g_612;
    int32_t ** volatile g_620;
    int32_t ** volatile g_621[5][7][7];
    volatile VECTOR(int32_t, 16) g_627;
    volatile VECTOR(uint64_t, 4) g_631;
    volatile VECTOR(uint16_t, 4) g_642;
    VECTOR(int32_t, 2) g_654;
    volatile VECTOR(uint32_t, 2) g_661;
    volatile VECTOR(uint8_t, 16) g_665;
    int32_t g_666[5];
    int32_t ** volatile g_667;
    int32_t ** volatile g_668;
    int8_t g_689;
    int8_t *** volatile g_708;
    VECTOR(uint8_t, 16) g_709;
    volatile VECTOR(uint16_t, 4) g_737;
    VECTOR(uint16_t, 16) g_740;
    volatile VECTOR(int16_t, 2) g_758;
    int16_t g_783;
    int32_t * volatile g_788;
    volatile VECTOR(uint8_t, 8) g_805;
    VECTOR(int16_t, 8) g_820;
    VECTOR(uint64_t, 4) g_844;
    int32_t ** volatile g_853;
    int32_t ** volatile g_854[10];
    int32_t ** volatile g_855;
    uint64_t *g_858;
    int64_t g_903;
    int32_t ** volatile g_912;
    int32_t ** volatile g_913[9];
    volatile int32_t g_915;
    uint8_t *g_955;
    VECTOR(uint32_t, 2) g_964;
    volatile VECTOR(uint32_t, 4) g_965;
    VECTOR(uint64_t, 16) g_967;
    int8_t *g_1041;
    int16_t g_1051;
    union U1 g_1113[3];
    VECTOR(int32_t, 16) g_1119;
    VECTOR(int32_t, 4) g_1122;
    volatile VECTOR(int16_t, 2) g_1136;
    VECTOR(uint16_t, 8) g_1139;
    union U1 *g_1155;
    union U1 ** volatile g_1154[6];
    volatile VECTOR(int8_t, 16) g_1173;
    uint8_t g_1232;
    int16_t **g_1300;
    int16_t **g_1301[6][7];
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
uint16_t  func_1(struct S2 * p_1338);
int32_t  func_6(uint32_t  p_7, uint32_t  p_8, int8_t * p_9, struct S2 * p_1338);
int8_t  func_15(uint64_t  p_16, uint32_t  p_17, struct S2 * p_1338);
uint32_t  func_19(int8_t * p_20, int8_t * p_21, struct S2 * p_1338);
int8_t * func_22(uint64_t  p_23, struct S2 * p_1338);
int8_t ** func_24(int64_t  p_25, struct S2 * p_1338);
int64_t  func_26(int8_t ** p_27, struct S2 * p_1338);
union U0  func_45(uint32_t  p_46, int64_t  p_47, union U0  p_48, int32_t  p_49, uint64_t  p_50, struct S2 * p_1338);
union U0  func_52(uint16_t  p_53, int8_t ** p_54, struct S2 * p_1338);
uint16_t  func_68(int8_t * p_69, struct S2 * p_1338);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1338->g_3 p_1338->l_comm_values p_1338->g_32 p_1338->g_12 p_1338->g_51 p_1338->g_51.f0 p_1338->g_82 p_1338->g_39 p_1338->g_77 p_1338->g_93 p_1338->g_comm_values p_1338->g_103 p_1338->g_106 p_1338->g_122 p_1338->g_97 p_1338->g_128 p_1338->g_129 p_1338->g_61 p_1338->g_130 p_1338->g_177 p_1338->g_255 p_1338->g_278 p_1338->g_171 p_1338->g_330 p_1338->g_348 p_1338->g_351 p_1338->g_357 p_1338->g_358 p_1338->g_38 p_1338->g_328 p_1338->g_397 p_1338->g_441 p_1338->g_347 p_1338->g_484 p_1338->g_487 p_1338->g_35 p_1338->g_533 p_1338->g_540 p_1338->g_278.f0 p_1338->g_152 p_1338->g_31 p_1338->g_708 p_1338->g_709 p_1338->g_518 p_1338->g_30 p_1338->g_737 p_1338->g_740 p_1338->g_758 p_1338->g_170 p_1338->g_844 p_1338->g_855 p_1338->g_36 p_1338->g_858 p_1338->g_558 p_1338->g_654 p_1338->g_440 p_1338->g_541 p_1338->g_820 p_1338->g_460 p_1338->g_783 p_1338->g_612 p_1338->g_668 p_1338->g_631 p_1338->g_355 p_1338->g_964 p_1338->g_965 p_1338->g_967 p_1338->g_666 p_1338->g_1139 p_1338->g_1173 p_1338->g_429 p_1338->g_1122 p_1338->g_1232 p_1338->g_1113.f0 p_1338->g_903 p_1338->g_2 p_1338->g_1119
 * writes: p_1338->g_3 p_1338->g_30 p_1338->g_32 p_1338->g_39 p_1338->g_51.f0 p_1338->g_82 p_1338->g_77 p_1338->g_97 p_1338->g_130 p_1338->g_61 p_1338->g_comm_values p_1338->g_170 p_1338->g_171 p_1338->g_177 p_1338->g_122 p_1338->g_328 p_1338->g_330 p_1338->g_348 p_1338->g_425 p_1338->g_441 p_1338->g_487 p_1338->g_484 p_1338->g_355 p_1338->g_152 p_1338->g_12 p_1338->g_740 p_1338->g_783 p_1338->g_858 p_1338->g_903 p_1338->g_955 p_1338->g_709 p_1338->g_689 p_1338->g_666 p_1338->g_31 p_1338->g_1041 p_1338->g_1051 p_1338->g_51 p_1338->g_1113 p_1338->g_1155 p_1338->g_1139 p_1338->g_1232 p_1338->g_1119 p_1338->g_1300 p_1338->g_1301
 */
uint16_t  func_1(struct S2 * p_1338)
{ /* block id: 4 */
    int32_t l_10[10][1] = {{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}};
    uint32_t l_1294 = 0xCD0C9374L;
    uint32_t *l_1296 = &p_1338->g_97;
    uint32_t **l_1295 = &l_1296;
    int32_t *l_1297 = &p_1338->g_152;
    int16_t **l_1302 = &p_1338->g_170[3][3];
    uint64_t *l_1303 = (void*)0;
    uint64_t *l_1304 = (void*)0;
    uint64_t *l_1305[10][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int i, j;
    for (p_1338->g_3 = 0; (p_1338->g_3 < 21); ++p_1338->g_3)
    { /* block id: 7 */
        int8_t *l_11[4][6][9] = {{{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]}},{{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]}},{{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]}},{{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]},{&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[4],&p_1338->g_12[1],(void*)0,(void*)0,&p_1338->g_12[1]}}};
        int32_t *l_1291 = (void*)0;
        int32_t *l_1292 = (void*)0;
        int32_t *l_1293[1][4][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        l_1294 = (p_1338->g_1119.se ^= func_6(p_1338->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1338->tid, 40))], l_10[8][0], ((!(-8L)) , l_11[1][5][0]), p_1338));
        return p_1338->g_429.s5;
    }
    (*l_1297) = ((void*)0 != l_1295);
    (*l_1297) = ((*l_1297) != ((*p_1338->g_171) = ((safe_add_func_uint64_t_u_u((((p_1338->g_1301[5][1] = (p_1338->g_1300 = &p_1338->g_170[4][0])) != ((!(*l_1297)) , l_1302)) > (+(*l_1297))), (p_1338->g_441.s5 |= 0x759FA9A4FA18ED65L))) < (*l_1297))));
    if ((atomic_inc(&p_1338->l_atomic_input[13]) == 2))
    { /* block id: 611 */
        int32_t l_1307 = 1L;
        int32_t *l_1306[4][10] = {{&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307},{&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307},{&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307},{&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307,&l_1307}};
        int32_t *l_1308 = &l_1307;
        int32_t *l_1309 = &l_1307;
        uint32_t l_1310 = 0x829C56CCL;
        int i, j;
        l_1309 = (l_1308 = (l_1306[3][3] = l_1306[0][5]));
        --l_1310;
        for (l_1307 = 0; (l_1307 > (-30)); l_1307 = safe_sub_func_uint8_t_u_u(l_1307, 3))
        { /* block id: 618 */
            int8_t l_1315 = (-7L);
            uint64_t l_1316 = 0xD95619A8F548B934L;
            int32_t l_1329 = (-1L);
            l_1316 ^= l_1315;
            for (l_1316 = 0; (l_1316 >= 56); l_1316 = safe_add_func_uint32_t_u_u(l_1316, 5))
            { /* block id: 622 */
                uint16_t l_1319 = 0x0514L;
                int8_t l_1320 = 0x1EL;
                l_1308 = (l_1319 , (l_1306[0][5] = (void*)0));
                l_1320 &= 5L;
                l_1308 = (void*)0;
                for (l_1319 = 0; (l_1319 == 36); l_1319 = safe_add_func_int16_t_s_s(l_1319, 6))
                { /* block id: 629 */
                    uint32_t l_1323 = 0xB5C5F6A5L;
                    VECTOR(int32_t, 16) l_1324 = (VECTOR(int32_t, 16))(0x3BD3B7FCL, (VECTOR(int32_t, 4))(0x3BD3B7FCL, (VECTOR(int32_t, 2))(0x3BD3B7FCL, 0L), 0L), 0L, 0x3BD3B7FCL, 0L, (VECTOR(int32_t, 2))(0x3BD3B7FCL, 0L), (VECTOR(int32_t, 2))(0x3BD3B7FCL, 0L), 0x3BD3B7FCL, 0L, 0x3BD3B7FCL, 0L);
                    VECTOR(int16_t, 8) l_1325 = (VECTOR(int16_t, 8))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 2L), 2L), 2L, 9L, 2L);
                    VECTOR(uint16_t, 8) l_1326 = (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 65529UL), 65529UL), 65529UL, 8UL, 65529UL);
                    VECTOR(uint16_t, 2) l_1327 = (VECTOR(uint16_t, 2))(0x8488L, 0xAFF1L);
                    int8_t l_1328 = 8L;
                    int i;
                    l_1323 = 0x64AC981BL;
                    l_1328 &= ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(l_1324.s40))))))).xyxyyyxy, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(l_1325.s6455574107262167)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_1326.s2162104645563722)).hi)).lo, ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 8))(65535UL, 65532UL, ((VECTOR(uint16_t, 4))(l_1327.yyxy)), 0x9813L, 65531UL)).even)))))).zwxwyxxzxzwwxzwx))))).odd))).s2;
                }
            }
            if (l_1329)
            { /* block id: 634 */
                l_1306[0][9] = (void*)0;
            }
            else
            { /* block id: 636 */
                int32_t *l_1330 = (void*)0;
                VECTOR(uint32_t, 4) l_1331 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xF901B33EL), 0xF901B33EL);
                int32_t l_1332 = 0x3C512EA0L;
                int32_t l_1333[3][6][7] = {{{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L},{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L},{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L},{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L},{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L},{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L}},{{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L},{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L},{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L},{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L},{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L},{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L}},{{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L},{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L},{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L},{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L},{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L},{0L,0x394B6B6DL,0L,2L,0L,0x394B6B6DL,0L}}};
                VECTOR(uint32_t, 2) l_1334 = (VECTOR(uint32_t, 2))(4294967295UL, 1UL);
                uint32_t l_1335 = 4294967289UL;
                VECTOR(int64_t, 4) l_1336 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L);
                int32_t *l_1337 = (void*)0;
                int i, j, k;
                l_1309 = l_1330;
                l_1333[2][0][0] = (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_1331.wwyz)).hi)), 4294967295UL, 0xDFD5F1EAL)).z , l_1332);
                l_1306[0][5] = (((((VECTOR(uint32_t, 8))(l_1334.xyyyxxyx)).s2 , 4294967287UL) , l_1335) , (l_1336.z , l_1337));
            }
        }
        unsigned int result = 0;
        result += l_1307;
        result += l_1310;
        atomic_add(&p_1338->l_special_values[13], result);
    }
    else
    { /* block id: 642 */
        (1 + 1);
    }
    return (*l_1297);
}


/* ------------------------------------------ */
/* 
 * reads : p_1338->g_32 p_1338->g_12 p_1338->l_comm_values p_1338->g_51 p_1338->g_51.f0 p_1338->g_82 p_1338->g_39 p_1338->g_77 p_1338->g_93 p_1338->g_comm_values p_1338->g_103 p_1338->g_106 p_1338->g_122 p_1338->g_97 p_1338->g_128 p_1338->g_129 p_1338->g_61 p_1338->g_130 p_1338->g_177 p_1338->g_255 p_1338->g_278 p_1338->g_171 p_1338->g_330 p_1338->g_348 p_1338->g_351 p_1338->g_357 p_1338->g_358 p_1338->g_38 p_1338->g_328 p_1338->g_397 p_1338->g_441 p_1338->g_347 p_1338->g_484 p_1338->g_487 p_1338->g_35 p_1338->g_533 p_1338->g_540 p_1338->g_278.f0 p_1338->g_152 p_1338->g_31 p_1338->g_708 p_1338->g_709 p_1338->g_518 p_1338->g_30 p_1338->g_737 p_1338->g_740 p_1338->g_3 p_1338->g_758 p_1338->g_170 p_1338->g_844 p_1338->g_855 p_1338->g_36 p_1338->g_858 p_1338->g_558 p_1338->g_654 p_1338->g_440 p_1338->g_541 p_1338->g_820 p_1338->g_460 p_1338->g_783 p_1338->g_612 p_1338->g_668 p_1338->g_631 p_1338->g_355 p_1338->g_964 p_1338->g_965 p_1338->g_967 p_1338->g_666 p_1338->g_1139 p_1338->g_1173 p_1338->g_429 p_1338->g_1122 p_1338->g_1232 p_1338->g_1113.f0 p_1338->g_903 p_1338->g_2
 * writes: p_1338->g_30 p_1338->g_32 p_1338->g_39 p_1338->g_51.f0 p_1338->g_82 p_1338->g_77 p_1338->g_97 p_1338->g_130 p_1338->g_61 p_1338->g_comm_values p_1338->g_170 p_1338->g_171 p_1338->g_177 p_1338->g_122 p_1338->g_328 p_1338->g_330 p_1338->g_348 p_1338->g_425 p_1338->g_441 p_1338->g_487 p_1338->g_484 p_1338->g_355 p_1338->g_152 p_1338->g_12 p_1338->g_740 p_1338->g_783 p_1338->g_858 p_1338->g_903 p_1338->g_955 p_1338->g_709 p_1338->g_689 p_1338->g_666 p_1338->g_31 p_1338->g_1041 p_1338->g_1051 p_1338->g_51 p_1338->g_1113 p_1338->g_1155 p_1338->g_1139 p_1338->g_1232
 */
int32_t  func_6(uint32_t  p_7, uint32_t  p_8, int8_t * p_9, struct S2 * p_1338)
{ /* block id: 8 */
    uint64_t l_18 = 1UL;
    int32_t l_1188 = 6L;
    int32_t l_1226[4][3] = {{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}};
    VECTOR(int32_t, 8) l_1268 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x68F14E4BL), 0x68F14E4BL), 0x68F14E4BL, (-1L), 0x68F14E4BL);
    VECTOR(int32_t, 4) l_1273 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-9L)), (-9L));
    VECTOR(uint64_t, 8) l_1276 = (VECTOR(uint64_t, 8))(18446744073709551613UL, (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 0xC8900FF11BE9AC0DL), 0xC8900FF11BE9AC0DL), 0xC8900FF11BE9AC0DL, 18446744073709551613UL, 0xC8900FF11BE9AC0DL);
    uint16_t l_1283 = 0x11FCL;
    int64_t *l_1284 = &p_1338->g_903;
    int8_t *l_1289 = &p_1338->g_12[1];
    uint32_t *l_1290 = &p_1338->g_82;
    int i, j;
    if ((safe_lshift_func_int8_t_s_s(func_15(l_18, func_19(p_9, func_22(l_18, p_1338), p_1338), p_1338), 4)))
    { /* block id: 540 */
        return p_7;
    }
    else
    { /* block id: 542 */
        VECTOR(uint16_t, 8) l_1182 = (VECTOR(uint16_t, 8))(0x397AL, (VECTOR(uint16_t, 4))(0x397AL, (VECTOR(uint16_t, 2))(0x397AL, 0xC7FAL), 0xC7FAL), 0xC7FAL, 0x397AL, 0xC7FAL);
        uint32_t l_1183 = 1UL;
        uint64_t *l_1189 = &l_18;
        int32_t **l_1196 = &p_1338->g_130;
        int32_t l_1225 = 0x0ADA0B32L;
        int32_t l_1228 = 0L;
        int32_t l_1229 = 2L;
        int32_t l_1230 = 0L;
        int32_t l_1231 = (-1L);
        int i;
        for (p_7 = 0; (p_7 < 9); p_7 = safe_add_func_uint32_t_u_u(p_7, 4))
        { /* block id: 545 */
            uint8_t l_1184 = 255UL;
            int32_t *l_1185 = &p_1338->g_77;
            int32_t l_1227[6][1];
            uint16_t *l_1261 = (void*)0;
            uint16_t *l_1262 = (void*)0;
            uint64_t *l_1265[2][1][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1227[i][j] = 1L;
            }
            if (p_7)
                break;
            (*l_1185) = (safe_mul_func_uint8_t_u_u((p_1338->g_967.s2 , ((0x2B28840F941EEEFCL <= p_8) && p_8)), (safe_mul_func_uint16_t_u_u((p_1338->g_740.sd = (l_1183 = ((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 4))(l_1182.s2620))))).x)), l_1184))));
            if ((p_1338->g_278 , ((safe_div_func_uint32_t_u_u(p_1338->g_429.s1, (l_1188 = p_1338->g_1122.y))) != ((void*)0 == l_1189))))
            { /* block id: 551 */
                for (p_1338->g_97 = 0; (p_1338->g_97 > 24); p_1338->g_97++)
                { /* block id: 554 */
                    return l_1183;
                }
            }
            else
            { /* block id: 557 */
                int16_t l_1197[7];
                int8_t *l_1214[10] = {&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1]};
                uint32_t *l_1215[2];
                int32_t l_1216 = 0x592DFE74L;
                int32_t l_1217[3];
                uint32_t *l_1253 = (void*)0;
                uint32_t *l_1254 = (void*)0;
                int i, j;
                for (i = 0; i < 7; i++)
                    l_1197[i] = 0x5062L;
                for (i = 0; i < 2; i++)
                    l_1215[i] = (void*)0;
                for (i = 0; i < 3; i++)
                    l_1217[i] = 0L;
                l_1217[0] &= (safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((l_1197[3] ^= (l_1196 == &p_1338->g_128)) , ((l_1216 |= (safe_mul_func_int16_t_s_s((((safe_sub_func_int8_t_s_s(((*l_1185) = (safe_sub_func_int16_t_s_s((&p_1338->g_858 != (void*)0), ((VECTOR(int16_t, 16))((safe_mod_func_int16_t_s_s(((*p_1338->g_171) ^= (255UL == l_18)), (safe_rshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s(((l_1197[3] >= (safe_rshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((((((((p_8 != ((*l_1185) < 4294967288UL)) < 0x46L) >= p_1338->g_709.sd) < p_7) , FAKE_DIVERGE(p_1338->group_0_offset, get_group_id(0), 10)) , 0UL) > p_7), p_8)), 12))) != 0L), (-1L))) , l_1197[3]), 2)))), ((VECTOR(int16_t, 4))(0x3D98L)), ((VECTOR(int16_t, 2))(0x7F0EL)), (*p_1338->g_171), ((VECTOR(int16_t, 4))(0x6C6FL)), ((VECTOR(int16_t, 2))(0x63D4L)), 5L, (-1L))).sb))), p_7)) && l_18) , 0L), p_8))) , l_1197[5])) & p_7), 65530UL)), 6L));
                for (l_1216 = 24; (l_1216 == (-26)); l_1216 = safe_sub_func_int16_t_s_s(l_1216, 5))
                { /* block id: 565 */
                    int32_t *l_1220 = (void*)0;
                    int32_t *l_1221 = (void*)0;
                    int32_t *l_1222 = (void*)0;
                    int32_t *l_1223 = &p_1338->g_666[0];
                    int32_t *l_1224[4][4][5] = {{{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]},{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]},{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]},{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]}},{{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]},{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]},{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]},{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]}},{{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]},{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]},{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]},{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]}},{{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]},{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]},{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]},{&p_1338->g_666[0],&l_1217[0],&p_1338->g_666[0],&p_1338->g_666[0],&l_1217[0]}}};
                    int i, j, k;
                    ++p_1338->g_1232;
                    if ((atomic_inc(&p_1338->l_atomic_input[61]) == 3))
                    { /* block id: 568 */
                        int16_t l_1235 = 1L;
                        int32_t l_1236 = 0x6A67AA05L;
                        int32_t l_1237 = (-6L);
                        uint64_t l_1238 = 18446744073709551612UL;
                        uint64_t l_1239 = 0UL;
                        VECTOR(uint16_t, 2) l_1240 = (VECTOR(uint16_t, 2))(65535UL, 0x74B1L);
                        uint8_t l_1241 = 0x25L;
                        int64_t l_1242[5][5] = {{(-1L),0x18360D7D5A11A9B7L,0x1BFCECB5FFAE51CEL,0x129FDB5D18322074L,0x18360D7D5A11A9B7L},{(-1L),0x18360D7D5A11A9B7L,0x1BFCECB5FFAE51CEL,0x129FDB5D18322074L,0x18360D7D5A11A9B7L},{(-1L),0x18360D7D5A11A9B7L,0x1BFCECB5FFAE51CEL,0x129FDB5D18322074L,0x18360D7D5A11A9B7L},{(-1L),0x18360D7D5A11A9B7L,0x1BFCECB5FFAE51CEL,0x129FDB5D18322074L,0x18360D7D5A11A9B7L},{(-1L),0x18360D7D5A11A9B7L,0x1BFCECB5FFAE51CEL,0x129FDB5D18322074L,0x18360D7D5A11A9B7L}};
                        VECTOR(uint16_t, 2) l_1243 = (VECTOR(uint16_t, 2))(0xEBF5L, 1UL);
                        VECTOR(uint16_t, 16) l_1244 = (VECTOR(uint16_t, 16))(0x695DL, (VECTOR(uint16_t, 4))(0x695DL, (VECTOR(uint16_t, 2))(0x695DL, 0UL), 0UL), 0UL, 0x695DL, 0UL, (VECTOR(uint16_t, 2))(0x695DL, 0UL), (VECTOR(uint16_t, 2))(0x695DL, 0UL), 0x695DL, 0UL, 0x695DL, 0UL);
                        VECTOR(uint16_t, 16) l_1245 = (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x543AL), 0x543AL), 0x543AL, 6UL, 0x543AL, (VECTOR(uint16_t, 2))(6UL, 0x543AL), (VECTOR(uint16_t, 2))(6UL, 0x543AL), 6UL, 0x543AL, 6UL, 0x543AL);
                        VECTOR(uint16_t, 2) l_1246 = (VECTOR(uint16_t, 2))(1UL, 0x58F0L);
                        int8_t l_1247 = 0x20L;
                        uint64_t l_1248 = 1UL;
                        VECTOR(uint16_t, 4) l_1249 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL);
                        int64_t l_1250 = 0x34F7F95EB286F8D1L;
                        VECTOR(uint16_t, 2) l_1251 = (VECTOR(uint16_t, 2))(0xF6C0L, 2UL);
                        int32_t l_1252 = 0x2E17B917L;
                        int i, j;
                        l_1237 |= (l_1236 |= l_1235);
                        l_1252 = (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 2))(0x79F2L, 0x684DL)), ((VECTOR(uint16_t, 4))(l_1238, 0x1F2EL, 0xC4ACL, 65528UL)).even, ((VECTOR(uint16_t, 16))((l_1247 = (l_1240.y = ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 8))(l_1239, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_1240.yxyx)))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_1241, l_1242[0][2], ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_1243.yy)).xyxxxyyy)).s5, 65526UL, 65532UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_1244.s65ac)).even)), 0xDCA9L)).s15)), 5UL, 0xFCE3L)).w, 4UL, 0x5F97L)).hi, ((VECTOR(uint16_t, 16))(l_1245.sda2bae19ce69c409)).s6905))).yxwwywzx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_1246.xx)).yxyyxxyxyyyyyyxy)).odd))).s0)), 65535UL, l_1248, ((VECTOR(uint16_t, 8))(l_1249.ywwwwxwy)), l_1250, 0UL, ((VECTOR(uint16_t, 2))(l_1251.xy)), 0x3AA5L)).s7a))))).yxxxyyxx)))).s7 , 0x372171D9L);
                        unsigned int result = 0;
                        result += l_1235;
                        result += l_1236;
                        result += l_1237;
                        result += l_1238;
                        result += l_1239;
                        result += l_1240.y;
                        result += l_1240.x;
                        result += l_1241;
                        int l_1242_i0, l_1242_i1;
                        for (l_1242_i0 = 0; l_1242_i0 < 5; l_1242_i0++) {
                            for (l_1242_i1 = 0; l_1242_i1 < 5; l_1242_i1++) {
                                result += l_1242[l_1242_i0][l_1242_i1];
                            }
                        }
                        result += l_1243.y;
                        result += l_1243.x;
                        result += l_1244.sf;
                        result += l_1244.se;
                        result += l_1244.sd;
                        result += l_1244.sc;
                        result += l_1244.sb;
                        result += l_1244.sa;
                        result += l_1244.s9;
                        result += l_1244.s8;
                        result += l_1244.s7;
                        result += l_1244.s6;
                        result += l_1244.s5;
                        result += l_1244.s4;
                        result += l_1244.s3;
                        result += l_1244.s2;
                        result += l_1244.s1;
                        result += l_1244.s0;
                        result += l_1245.sf;
                        result += l_1245.se;
                        result += l_1245.sd;
                        result += l_1245.sc;
                        result += l_1245.sb;
                        result += l_1245.sa;
                        result += l_1245.s9;
                        result += l_1245.s8;
                        result += l_1245.s7;
                        result += l_1245.s6;
                        result += l_1245.s5;
                        result += l_1245.s4;
                        result += l_1245.s3;
                        result += l_1245.s2;
                        result += l_1245.s1;
                        result += l_1245.s0;
                        result += l_1246.y;
                        result += l_1246.x;
                        result += l_1247;
                        result += l_1248;
                        result += l_1249.w;
                        result += l_1249.z;
                        result += l_1249.y;
                        result += l_1249.x;
                        result += l_1250;
                        result += l_1251.y;
                        result += l_1251.x;
                        result += l_1252;
                        atomic_add(&p_1338->l_special_values[61], result);
                    }
                    else
                    { /* block id: 574 */
                        (1 + 1);
                    }
                    return p_8;
                }
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1338->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 40)), permutations[(safe_mod_func_uint32_t_u_u((l_1217[0] = FAKE_DIVERGE(p_1338->local_0_offset, get_local_id(0), 10)), 10))][(safe_mod_func_uint32_t_u_u(p_1338->tid, 40))]));
            }
            (*l_1185) = ((*l_1185) , (p_7 != (((safe_add_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(p_7, ((safe_rshift_func_uint8_t_u_u((GROUP_DIVERGE(0, 1) >= 0UL), 4)) != ((((p_1338->g_1113[2].f0 ^= ((FAKE_DIVERGE(p_1338->local_1_offset, get_local_id(1), 10) || p_8) , ((VECTOR(uint16_t, 2))(0x1A3EL, 0UL)).lo)) < ((safe_lshift_func_int16_t_s_u(((p_8 , &p_1338->g_348) == l_1265[1][0][3]), 12)) >= (p_7 || 0x08CCL))) != 0xCE30857EL) == p_7)))), 0L)) || l_1226[2][0]) && p_8)));
        }
        for (p_1338->g_355 = 13; (p_1338->g_355 == (-9)); p_1338->g_355--)
        { /* block id: 589 */
            (*l_1196) = (*l_1196);
        }
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1338->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 40)), permutations[(safe_mod_func_uint32_t_u_u(((((VECTOR(int32_t, 2))(0x6CBDB6B3L, 0x4D50F67EL)).odd ^ (((VECTOR(int32_t, 2))(l_1268.s03)).hi ^ ((safe_div_func_uint32_t_u_u(((*l_1290) &= (0L || (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x44B124D6L, 0x1FAC2D45L, (-1L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_1273.xxyz)).zzzwxyyx)).s51)), (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(l_1276.s5165)).w, ((safe_sub_func_int16_t_s_s(p_8, ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((((p_8 ^ FAKE_DIVERGE(p_1338->group_2_offset, get_group_id(2), 10)) , (p_1338->g_1139.s4 <= ((*l_1284) ^= l_1283))) > (safe_sub_func_int8_t_s_s((((safe_add_func_uint32_t_u_u(4UL, l_1226[2][0])) ^ l_1276.s7) | GROUP_DIVERGE(0, 1)), ((*l_1289) = (((void*)0 != &l_1226[2][0]) || 0xAC54BD3CL))))), l_1273.x)) & p_1338->g_2), p_7)) , 0x7195L))) | p_7))), 0L, 0x017143FBL, ((VECTOR(int32_t, 2))(0L)), 0x737D6A22L)), ((VECTOR(int32_t, 2))(8L)), ((VECTOR(int32_t, 2))(0x36BF73C7L)), 0x35FAF001L)).sd3)), ((VECTOR(int32_t, 2))((-8L))), ((VECTOR(int32_t, 2))(2L))))).lo, p_8)))), p_7)) ^ l_1273.w))) && 18446744073709551615UL), 10))][(safe_mod_func_uint32_t_u_u(p_1338->tid, 40))]));
    return l_1276.s2;
}


/* ------------------------------------------ */
/* 
 * reads : p_1338->g_82 p_1338->g_631 p_1338->g_171 p_1338->g_61 p_1338->g_30 p_1338->g_31 p_1338->g_12 p_1338->g_355 p_1338->g_740 p_1338->g_32 p_1338->g_106 p_1338->g_964 p_1338->g_965 p_1338->g_357 p_1338->g_967 p_1338->g_654 p_1338->g_39 p_1338->g_122 p_1338->g_128 p_1338->g_77 p_1338->g_844 p_1338->g_177 p_1338->g_347 p_1338->g_783 p_1338->g_540 p_1338->g_541 p_1338->g_397 p_1338->g_666 p_1338->g_440 p_1338->g_487 p_1338->g_129 p_1338->g_130 p_1338->g_708 p_1338->g_51 p_1338->g_1139 p_1338->g_1173
 * writes: p_1338->g_82 p_1338->g_903 p_1338->g_955 p_1338->g_32 p_1338->g_130 p_1338->g_709 p_1338->g_39 p_1338->g_122 p_1338->g_689 p_1338->g_666 p_1338->g_31 p_1338->g_1041 p_1338->g_1051 p_1338->g_77 p_1338->g_51 p_1338->g_1113 p_1338->g_1155 p_1338->g_1139
 */
int8_t  func_15(uint64_t  p_16, uint32_t  p_17, struct S2 * p_1338)
{ /* block id: 426 */
    uint64_t l_927[2];
    union U0 *l_929 = (void*)0;
    union U0 **l_928 = &l_929;
    uint8_t *l_953 = (void*)0;
    int32_t l_957 = 1L;
    int32_t l_959 = 1L;
    int64_t *l_960 = (void*)0;
    VECTOR(int32_t, 2) l_961 = (VECTOR(int32_t, 2))(0x7E23F0EEL, (-1L));
    int32_t **l_962 = &p_1338->g_130;
    uint16_t l_963[5][7][4] = {{{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL}},{{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL}},{{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL}},{{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL}},{{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL},{6UL,6UL,65535UL,0xAB2CL}}};
    VECTOR(uint8_t, 4) l_966 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xCBL), 0xCBL);
    VECTOR(uint8_t, 8) l_968 = (VECTOR(uint8_t, 8))(0x25L, (VECTOR(uint8_t, 4))(0x25L, (VECTOR(uint8_t, 2))(0x25L, 0xCBL), 0xCBL), 0xCBL, 0x25L, 0xCBL);
    VECTOR(uint8_t, 16) l_969 = (VECTOR(uint8_t, 16))(0xE0L, (VECTOR(uint8_t, 4))(0xE0L, (VECTOR(uint8_t, 2))(0xE0L, 253UL), 253UL), 253UL, 0xE0L, 253UL, (VECTOR(uint8_t, 2))(0xE0L, 253UL), (VECTOR(uint8_t, 2))(0xE0L, 253UL), 0xE0L, 253UL, 0xE0L, 253UL);
    VECTOR(uint8_t, 8) l_970 = (VECTOR(uint8_t, 8))(0x2AL, (VECTOR(uint8_t, 4))(0x2AL, (VECTOR(uint8_t, 2))(0x2AL, 250UL), 250UL), 250UL, 0x2AL, 250UL);
    VECTOR(uint8_t, 2) l_979 = (VECTOR(uint8_t, 2))(0xE1L, 250UL);
    int64_t *l_980 = &p_1338->g_903;
    int32_t *l_981[4][10][3] = {{{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0}},{{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0}},{{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0}},{{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0},{(void*)0,&p_1338->g_77,(void*)0}}};
    uint64_t l_1017 = 0UL;
    union U1 *l_1108 = &p_1338->g_51;
    union U1 l_1110[1][4] = {{{0xEEB3L},{0xEEB3L},{0xEEB3L},{0xEEB3L}}};
    VECTOR(int32_t, 16) l_1114 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 2L), 2L), 2L, 9L, 2L, (VECTOR(int32_t, 2))(9L, 2L), (VECTOR(int32_t, 2))(9L, 2L), 9L, 2L, 9L, 2L);
    VECTOR(int32_t, 16) l_1123 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x333466B9L), 0x333466B9L), 0x333466B9L, 1L, 0x333466B9L, (VECTOR(int32_t, 2))(1L, 0x333466B9L), (VECTOR(int32_t, 2))(1L, 0x333466B9L), 1L, 0x333466B9L, 1L, 0x333466B9L);
    VECTOR(uint8_t, 2) l_1141 = (VECTOR(uint8_t, 2))(0xA4L, 0x1DL);
    VECTOR(uint8_t, 16) l_1142 = (VECTOR(uint8_t, 16))(0x97L, (VECTOR(uint8_t, 4))(0x97L, (VECTOR(uint8_t, 2))(0x97L, 0x47L), 0x47L), 0x47L, 0x97L, 0x47L, (VECTOR(uint8_t, 2))(0x97L, 0x47L), (VECTOR(uint8_t, 2))(0x97L, 0x47L), 0x97L, 0x47L, 0x97L, 0x47L);
    VECTOR(int8_t, 4) l_1161 = (VECTOR(int8_t, 4))(0x49L, (VECTOR(int8_t, 2))(0x49L, 9L), 9L);
    VECTOR(int8_t, 16) l_1171 = (VECTOR(int8_t, 16))(0x26L, (VECTOR(int8_t, 4))(0x26L, (VECTOR(int8_t, 2))(0x26L, 0x65L), 0x65L), 0x65L, 0x26L, 0x65L, (VECTOR(int8_t, 2))(0x26L, 0x65L), (VECTOR(int8_t, 2))(0x26L, 0x65L), 0x26L, 0x65L, 0x26L, 0x65L);
    uint64_t **l_1175 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_927[i] = 0xEBD208875531C80EL;
    for (p_1338->g_82 = 0; (p_1338->g_82 > 16); p_1338->g_82++)
    { /* block id: 429 */
        VECTOR(uint8_t, 16) l_926 = (VECTOR(uint8_t, 16))(0x73L, (VECTOR(uint8_t, 4))(0x73L, (VECTOR(uint8_t, 2))(0x73L, 0x15L), 0x15L), 0x15L, 0x73L, 0x15L, (VECTOR(uint8_t, 2))(0x73L, 0x15L), (VECTOR(uint8_t, 2))(0x73L, 0x15L), 0x73L, 0x15L, 0x73L, 0x15L);
        union U1 l_932 = {1UL};
        int64_t *l_948 = &p_1338->g_903;
        uint8_t **l_954[3][8][9] = {{{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0}},{{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0}},{{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0},{&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,&l_953,(void*)0}}};
        int32_t *l_956 = &p_1338->g_32;
        uint32_t l_958 = 5UL;
        int i, j, k;
        atomic_max(&p_1338->g_atomic_reduction[get_linear_group_id()], (p_17 | (p_1338->g_631.w != (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))((((l_959 &= (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 2))(l_926.sa6)).xxyxyyxx, ((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 2))(0x89L, 255UL)).yxxxyxyxxyyxyxyy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0xCCL, 3UL)).yyxy)).hi)).xyxyyyyy)).s2715637523067243, ((VECTOR(uint8_t, 2))(1UL, 0x17L)).xxxyxxxyyxxxxxyx))).hi))).s5254306504316663, ((VECTOR(uint8_t, 8))(0xE3L, l_927[0], ((~(l_957 |= ((l_928 == (((safe_mul_func_uint16_t_u_u((l_932 , ((safe_div_func_int16_t_s_s((((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x4AL, 0x59L)).xyyxxxxyxxxxxyxx)).even)).s4, ((~FAKE_DIVERGE(p_1338->group_2_offset, get_group_id(2), 10)) == ((*l_956) |= ((((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 8))(((safe_mul_func_uint8_t_u_u(249UL, (safe_mul_func_int16_t_s_s((-1L), (((safe_unary_minus_func_int16_t_s((safe_add_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(1L, 1L)).even, ((*l_948) = ((VECTOR(int64_t, 2))(0x4FB25697230179E2L, 2L)).even))) || (safe_mul_func_int16_t_s_s((*p_1338->g_171), (safe_div_func_int64_t_s_s(((p_1338->g_955 = l_953) != (void*)0), p_17))))), p_17)))) & p_17) && (**p_1338->g_30)))))) < p_1338->g_355), p_17, 0x7BC3L, ((VECTOR(int16_t, 2))((-5L))), l_926.s7, 0x61AEL, 6L)).s4, p_17)) && p_1338->g_740.sb) == p_16) ^ l_932.f0))))) , (*l_956)), p_16, (*l_956), ((VECTOR(int16_t, 4))((-10L))), ((VECTOR(int16_t, 4))((-3L))), (*p_1338->g_171), ((VECTOR(int16_t, 4))(0x5243L)))))).s67)).xyxxxxxxyxyyxxyx, ((VECTOR(int16_t, 16))((-3L)))))).sb, 0x3C99L, (-7L), 0x2220L, 7L, 0x18F8L, 0x54ECL, (-1L))).even, ((VECTOR(int16_t, 4))(0x2C3EL))))).wzwyywwz)).lo)).zwzzwxwwzywywyyy, ((VECTOR(int16_t, 16))(0x3026L))))).s391c, ((VECTOR(int16_t, 4))((-3L)))))).even)).xyxyxxxxxxyxyxyy)).s6 == p_17) , &l_956) == &l_956), p_16)) ^ p_17)), p_16)) , GROUP_DIVERGE(0, 1)) , (void*)0)) >= FAKE_DIVERGE(p_1338->group_0_offset, get_group_id(0), 10)))) ^ 0x00L), ((VECTOR(uint8_t, 2))(0UL)), p_16, 0UL, 0x1FL)).s7121377634210475))).sa, 253UL, 0xE3L, 4UL, 0UL, p_1338->g_106.w, ((VECTOR(uint8_t, 4))(0x65L)), (*l_956), 0xEAL, l_958, p_17, 0x69L, 0UL)).sa && l_927[1])) , l_948) == l_960), 0x041DL, 0x2720L, (-2L))).z, p_16)))));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1338->v_collective += p_1338->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        (*l_956) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_961.yx)), 1L, 1L)).wyzwwwyyywzxzyxw)).s2;
    }
    (*l_962) = (void*)0;
    p_1338->g_39[0] ^= ((-9L) | ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(8L, 7L)), ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))((-5L), ((l_963[1][5][1] || (((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 4))(p_1338->g_964.yyyx)).zxzzxzzx, ((VECTOR(uint32_t, 8))(p_1338->g_965.yyxwwxwz))))).s2 | ((p_1338->g_357.s0 , ((l_957 & ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_966.wzzxwzwz)).s05)))), 0x57L, 1UL)).w) ^ (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(p_1338->g_967.s56fb)), ((((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(l_968.s3650500621402763)).sb254, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 16))(246UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(l_969.s757f5485)).s56, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 4))(l_970.s7036)).xxxyywwyzwyxzyxy, ((VECTOR(uint8_t, 2))(247UL, 1UL)).yxyyyyxyyyyxyyxy))).sf9))))))).xyyxyyyy)), (!(safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((p_1338->g_709.s5 = (safe_div_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_979.xyyy)).z, 3)), p_1338->g_654.y))), 4UL)) ^ ((*l_980) = (p_17 | p_1338->g_355))), p_16))), FAKE_DIVERGE(p_1338->local_2_offset, get_local_id(2), 10), p_16, p_16, 0xFBL, 0xBBL, 0UL))))).se691)), ((VECTOR(uint8_t, 4))(0xA5L))))).z >= (**p_1338->g_30)) == (**p_1338->g_30)), 0xF602310ADC2CCD9EL, p_17, ((VECTOR(uint64_t, 8))(0xD4575371C75370EDL)), 0x02F6738B38DC8D4BL)).hi, ((VECTOR(uint64_t, 8))(18446744073709551615UL))))).s3314627212243342, ((VECTOR(uint64_t, 16))(0x40722C1DC3F4E072L))))))).s8 , p_16))) < p_17))) <= 8L), 0L, ((VECTOR(int16_t, 4))(0x49F3L)), 0x246DL)).s64, ((VECTOR(int16_t, 2))(0x097FL))))), ((VECTOR(int16_t, 2))((-10L))), 0x5BB4L, 0x67A1L)), p_16, 0x0464L, 0x7B1FL, 0x12BEL, p_16, 0x6D58L, 0x2842L, 0x0025L)))).sd);
    for (p_1338->g_122 = (-16); (p_1338->g_122 <= 27); p_1338->g_122++)
    { /* block id: 444 */
        uint16_t l_986 = 0x6124L;
        uint8_t *l_998 = (void*)0;
        VECTOR(int64_t, 2) l_1010 = (VECTOR(int64_t, 2))(0x721CD93C678264F0L, 1L);
        uint32_t l_1025 = 7UL;
        VECTOR(int8_t, 2) l_1049 = (VECTOR(int8_t, 2))(0x74L, 0x66L);
        int32_t l_1121 = (-4L);
        VECTOR(uint8_t, 8) l_1140 = (VECTOR(uint8_t, 8))(0x75L, (VECTOR(uint8_t, 4))(0x75L, (VECTOR(uint8_t, 2))(0x75L, 3UL), 3UL), 3UL, 0x75L, 3UL);
        int32_t l_1166 = (-7L);
        uint16_t *l_1167[6][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t *l_1170 = &p_1338->g_355;
        VECTOR(int8_t, 8) l_1172 = (VECTOR(int8_t, 8))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x6EL), 0x6EL), 0x6EL, 6L, 0x6EL);
        VECTOR(int8_t, 16) l_1174 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x03L), 0x03L), 0x03L, 0L, 0x03L, (VECTOR(int8_t, 2))(0L, 0x03L), (VECTOR(int8_t, 2))(0L, 0x03L), 0L, 0x03L, 0L, 0x03L);
        int i, j;
        for (p_1338->g_689 = (-1); (p_1338->g_689 > (-5)); p_1338->g_689 = safe_sub_func_int8_t_s_s(p_1338->g_689, 7))
        { /* block id: 447 */
            VECTOR(uint8_t, 8) l_993 = (VECTOR(uint8_t, 8))(0xEFL, (VECTOR(uint8_t, 4))(0xEFL, (VECTOR(uint8_t, 2))(0xEFL, 7UL), 7UL), 7UL, 0xEFL, 7UL);
            int32_t *l_1009 = (void*)0;
            int32_t l_1052 = (-1L);
            int i;
            if ((*p_1338->g_128))
            { /* block id: 448 */
                int32_t *l_996 = (void*)0;
                uint64_t l_1033 = 0UL;
                int8_t *l_1038 = (void*)0;
                int32_t l_1057[9][10] = {{0x0DCC82CAL,(-3L),1L,0x22CB9679L,1L,1L,0x22CB9679L,1L,(-3L),0x0DCC82CAL},{0x0DCC82CAL,(-3L),1L,0x22CB9679L,1L,1L,0x22CB9679L,1L,(-3L),0x0DCC82CAL},{0x0DCC82CAL,(-3L),1L,0x22CB9679L,1L,1L,0x22CB9679L,1L,(-3L),0x0DCC82CAL},{0x0DCC82CAL,(-3L),1L,0x22CB9679L,1L,1L,0x22CB9679L,1L,(-3L),0x0DCC82CAL},{0x0DCC82CAL,(-3L),1L,0x22CB9679L,1L,1L,0x22CB9679L,1L,(-3L),0x0DCC82CAL},{0x0DCC82CAL,(-3L),1L,0x22CB9679L,1L,1L,0x22CB9679L,1L,(-3L),0x0DCC82CAL},{0x0DCC82CAL,(-3L),1L,0x22CB9679L,1L,1L,0x22CB9679L,1L,(-3L),0x0DCC82CAL},{0x0DCC82CAL,(-3L),1L,0x22CB9679L,1L,1L,0x22CB9679L,1L,(-3L),0x0DCC82CAL},{0x0DCC82CAL,(-3L),1L,0x22CB9679L,1L,1L,0x22CB9679L,1L,(-3L),0x0DCC82CAL}};
                int i, j;
                --l_986;
                for (p_1338->g_32 = 15; (p_1338->g_32 != 4); p_1338->g_32 = safe_sub_func_uint32_t_u_u(p_1338->g_32, 5))
                { /* block id: 452 */
                    int32_t *l_997 = &p_1338->g_39[0];
                    int i, j;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1338->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 40)), permutations[(safe_mod_func_uint32_t_u_u((safe_div_func_int16_t_s_s((((p_16 , p_1338->g_965.z) == 0x0A8FL) > ((VECTOR(int64_t, 4))(0x24A3522944431EC3L, ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 8))(((*l_980) = (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_993.s57)))).hi ^ ((safe_mod_func_int64_t_s_s((((((*l_962) = l_996) == l_997) , (l_998 == (void*)0)) & (safe_div_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((GROUP_DIVERGE(0, 1) || p_17), 252UL)), p_1338->g_844.y))), 0xBE95D81F4382EFF2L)) , (*l_997)))), l_993.s7, p_16, p_16, l_986, ((VECTOR(int64_t, 2))(0x5B0DBEADDD049E39L)), 1L)).s62, ((VECTOR(int64_t, 2))(2L))))), 8L)).x), p_1338->g_177)), 10))][(safe_mod_func_uint32_t_u_u(p_1338->tid, 40))]));
                }
                for (l_959 = 0; (l_959 < 23); ++l_959)
                { /* block id: 461 */
                    int16_t l_1011 = 0L;
                    uint64_t *l_1016 = &l_927[0];
                    int32_t l_1018 = 0x5EE3D7E3L;
                    VECTOR(int8_t, 16) l_1050 = (VECTOR(int8_t, 16))(0x2CL, (VECTOR(int8_t, 4))(0x2CL, (VECTOR(int8_t, 2))(0x2CL, (-5L)), (-5L)), (-5L), 0x2CL, (-5L), (VECTOR(int8_t, 2))(0x2CL, (-5L)), (VECTOR(int8_t, 2))(0x2CL, (-5L)), 0x2CL, (-5L), 0x2CL, (-5L));
                    int i;
                    l_1018 = ((safe_div_func_int64_t_s_s(p_1338->g_347, ((*l_1016) ^= ((l_993.s5 < (safe_lshift_func_uint16_t_u_u((l_1009 != ((((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(7L, 0x307BF62AE18D6867L, (-1L), ((VECTOR(int64_t, 4))(l_1010.xxyy)), 6L)).even)).wzzwzwywxxwxzwzx, ((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))((((l_1011 , (((safe_mul_func_uint8_t_u_u(255UL, (**p_1338->g_30))) < (p_1338->g_460.sa = (p_1338->g_484.s9 ^ (safe_div_func_uint32_t_u_u(((void*)0 == (*p_1338->g_30)), 0x6F09A007L))))) , 65532UL)) != p_1338->g_355) , 0L), ((VECTOR(int64_t, 4))(0x5857F674CB935767L)), 0x1425A6670EB51ADAL, 0x1597BDF25F29B6F5L, 0x78B397B44690AE33L)))).s05, ((VECTOR(int64_t, 2))(0x03A534361457E37EL))))).yyxxyyyxyxxyyxxy))).s9 >= p_1338->g_783) , (*p_1338->g_540))), p_17))) || p_1338->g_106.y)))) > l_1017);
                    if (((safe_lshift_func_uint8_t_u_u(p_16, (p_17 <= ((p_17 | p_16) < (~0x7C87L))))) && 0xE47FC59CL))
                    { /* block id: 465 */
                        p_1338->g_666[3] ^= ((safe_lshift_func_uint8_t_u_s(p_17, (safe_add_func_int16_t_s_s((l_1025 && ((l_1010.x | ((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x7D199A001CA7AF17L, 7UL)).xxxx)).y , ((safe_lshift_func_uint8_t_u_u((&p_1338->g_348 == &p_1338->g_348), 2)) ^ ((safe_div_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s(((*l_980) = (+l_1025)))), (safe_lshift_func_int16_t_s_s(l_1033, 7)))) != (safe_div_func_uint64_t_u_u((((((0x74A8L && ((p_1338->g_397 == (void*)0) > p_17)) && p_16) ^ p_17) == GROUP_DIVERGE(2, 1)) || l_1011), p_16))))) == (-1L))) , p_16)), GROUP_DIVERGE(1, 1))))) < p_17);
                        if (p_16)
                            break;
                    }
                    else
                    { /* block id: 469 */
                        int8_t **l_1039 = &l_1038;
                        int8_t **l_1040[2];
                        uint64_t *l_1046 = &l_1017;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1040[i] = (void*)0;
                        l_1052 = (safe_add_func_uint64_t_u_u(((*l_1016) = ((((*p_1338->g_30) = (void*)0) == (p_1338->g_1041 = ((*l_1039) = l_1038))) & (-1L))), ((((safe_mul_func_uint16_t_u_u(((p_1338->g_1051 = (((*l_1046) &= (safe_lshift_func_int8_t_s_u(0x3EL, FAKE_DIVERGE(p_1338->global_1_offset, get_global_id(1), 10)))) == ((FAKE_DIVERGE(p_1338->local_0_offset, get_local_id(0), 10) >= l_986) == (((p_1338->g_844.z && (0x72EE438C5B46AC06L >= (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_1049.yy)), 3L, ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(l_1050.s33f6d964)).hi, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 8))(p_17, ((VECTOR(int8_t, 2))((-8L))), 0x14L, 0x58L, 0x02L, 0x40L, 1L)).s0137050203577701, ((VECTOR(int8_t, 16))(0x59L)), ((VECTOR(int8_t, 16))(0x40L))))))).sf1, ((VECTOR(int8_t, 2))(1L))))).yxyx))), (-1L))).s4007115400525016, ((VECTOR(int8_t, 16))(0x41L)), ((VECTOR(int8_t, 16))(0x12L))))).s7, p_1338->g_440.s9)))) <= 0x2282L) == 4294967293UL)))) | p_1338->g_487), p_16)) < 5L) || (-9L)) != FAKE_DIVERGE(p_1338->local_1_offset, get_local_id(1), 10))));
                        l_1057[8][7] = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(p_16, ((VECTOR(uint8_t, 2))(0UL, 0xBDL)).odd)), 11));
                    }
                }
            }
            else
            { /* block id: 480 */
                uint32_t l_1058 = 0x424A8AD3L;
                (*l_962) = (p_16 , (*p_1338->g_129));
                if (l_1058)
                    break;
                if ((atomic_inc(&p_1338->l_atomic_input[67]) == 4))
                { /* block id: 484 */
                    VECTOR(int32_t, 16) l_1059 = (VECTOR(int32_t, 16))(0x610C8431L, (VECTOR(int32_t, 4))(0x610C8431L, (VECTOR(int32_t, 2))(0x610C8431L, (-1L)), (-1L)), (-1L), 0x610C8431L, (-1L), (VECTOR(int32_t, 2))(0x610C8431L, (-1L)), (VECTOR(int32_t, 2))(0x610C8431L, (-1L)), 0x610C8431L, (-1L), 0x610C8431L, (-1L));
                    VECTOR(int32_t, 4) l_1060 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x07C48599L), 0x07C48599L);
                    VECTOR(int32_t, 8) l_1061 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), (-1L)), (-1L)), (-1L), (-5L), (-1L));
                    int8_t l_1062 = (-1L);
                    uint16_t l_1063 = 0x453EL;
                    VECTOR(uint64_t, 16) l_1064 = (VECTOR(uint64_t, 16))(0x90C0E16AF542FD80L, (VECTOR(uint64_t, 4))(0x90C0E16AF542FD80L, (VECTOR(uint64_t, 2))(0x90C0E16AF542FD80L, 0xBC4195096DE0B1DEL), 0xBC4195096DE0B1DEL), 0xBC4195096DE0B1DEL, 0x90C0E16AF542FD80L, 0xBC4195096DE0B1DEL, (VECTOR(uint64_t, 2))(0x90C0E16AF542FD80L, 0xBC4195096DE0B1DEL), (VECTOR(uint64_t, 2))(0x90C0E16AF542FD80L, 0xBC4195096DE0B1DEL), 0x90C0E16AF542FD80L, 0xBC4195096DE0B1DEL, 0x90C0E16AF542FD80L, 0xBC4195096DE0B1DEL);
                    uint8_t l_1065 = 252UL;
                    int8_t l_1066 = 0x39L;
                    uint32_t l_1067 = 0x3DF61586L;
                    uint16_t l_1068 = 0xEFC1L;
                    VECTOR(int32_t, 8) l_1069 = (VECTOR(int32_t, 8))(0x3000CBC6L, (VECTOR(int32_t, 4))(0x3000CBC6L, (VECTOR(int32_t, 2))(0x3000CBC6L, 2L), 2L), 2L, 0x3000CBC6L, 2L);
                    VECTOR(int32_t, 16) l_1070 = (VECTOR(int32_t, 16))(0x5DFEDCEDL, (VECTOR(int32_t, 4))(0x5DFEDCEDL, (VECTOR(int32_t, 2))(0x5DFEDCEDL, (-2L)), (-2L)), (-2L), 0x5DFEDCEDL, (-2L), (VECTOR(int32_t, 2))(0x5DFEDCEDL, (-2L)), (VECTOR(int32_t, 2))(0x5DFEDCEDL, (-2L)), 0x5DFEDCEDL, (-2L), 0x5DFEDCEDL, (-2L));
                    VECTOR(int32_t, 4) l_1071 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), (-1L)), (-1L));
                    int8_t l_1072 = 0x1DL;
                    uint64_t l_1097 = 1UL;
                    uint8_t l_1100 = 1UL;
                    int64_t l_1101 = 0x02BF4951FC13CED9L;
                    int i;
                    if (((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(l_1059.s31)).xyxyxxyx, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((-1L), 4L, (-2L), 0L)).odd)).yxxyxyxx, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(l_1060.yzwx)).hi, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(l_1061.s75652460)).s3716325322660626, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-3L), 2L)).xyyxxyxy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((-4L), 0x08CF397DL, 0x67EB5485L, 0x52CB0CB1L)).xywzzwxz))))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 0L)).even, 0x6F22F208L, l_1062, 1L, l_1063, 0x0235B732L, (l_1059.se = ((((l_1065 = (((VECTOR(uint64_t, 16))(l_1064.s178f907a5c527da5)).s4 , ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x5E880CD994389126L, 0x6F776891A509A43FL)).xyxx)).y)) , (l_1066 , 0x582EF0FE3DC77A44L)) , l_1067) , (GROUP_DIVERGE(0, 1) , l_1068))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1069.s1616540161300434)).lo)), 0L)).even, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_1070.sda)).yxxyxxyyxxxyxyyx)).s78, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(0x15F79655L, 0x7656556BL)).yxxyyyxy, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(0x1DDEEAC9L, 1L, 0x005F15C8L, (-1L)))))).yzywyzyz, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(0L, 0x488CE419L)).yxxx, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(l_1071.zwxwyzxxwwyxxxzw)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(5L, 0L)).xyxyyyyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(1UL, 0xE4B1L, ((VECTOR(uint16_t, 4))(0x96C0L)), 65535UL, 0x0897L)).odd)).ywyzyxyz))).s6107445557272021, ((VECTOR(int32_t, 16))((-1L))), ((VECTOR(int32_t, 16))((-2L)))))).s0b)).yxyyyyyx, ((VECTOR(int32_t, 8))(0x7F987AF6L))))), ((VECTOR(int32_t, 8))((-9L))))).lo))).even, ((VECTOR(int32_t, 4))(0x3E4C868DL))))), ((VECTOR(int32_t, 4))(0x1FC6B951L))))), ((VECTOR(int32_t, 4))(1L)))).s7173747437564265)).se8, (int32_t)l_1072))).yyxxxxyy))))), ((VECTOR(int32_t, 8))(0x457DC5FAL))))).s13, ((VECTOR(int32_t, 2))(0x1B7C7DFFL)), ((VECTOR(int32_t, 2))(0x7E0D6CA4L)))))))).xxyyxxxyyxyxyxxy, ((VECTOR(int32_t, 16))(0x789074E4L)), ((VECTOR(int32_t, 16))(0x3F54A979L))))).hi))).lo)).xzyxwwzxwyxywzzy))).sab))).xxyxxyyx, ((VECTOR(int32_t, 8))(0x4C9FD209L))))), ((VECTOR(int32_t, 8))(8L))))).s5)
                    { /* block id: 487 */
                        int64_t l_1073[8][9] = {{6L,0L,0L,(-1L),0L,6L,(-1L),6L,(-1L)},{6L,0L,0L,(-1L),0L,6L,(-1L),6L,(-1L)},{6L,0L,0L,(-1L),0L,6L,(-1L),6L,(-1L)},{6L,0L,0L,(-1L),0L,6L,(-1L),6L,(-1L)},{6L,0L,0L,(-1L),0L,6L,(-1L),6L,(-1L)},{6L,0L,0L,(-1L),0L,6L,(-1L),6L,(-1L)},{6L,0L,0L,(-1L),0L,6L,(-1L),6L,(-1L)},{6L,0L,0L,(-1L),0L,6L,(-1L),6L,(-1L)}};
                        int i, j;
                        l_1070.se = (l_1061.s2 = l_1073[3][2]);
                        l_1059.s2 ^= 0x133BB077L;
                    }
                    else
                    { /* block id: 491 */
                        VECTOR(int32_t, 8) l_1074 = (VECTOR(int32_t, 8))(0x4FFA1CF3L, (VECTOR(int32_t, 4))(0x4FFA1CF3L, (VECTOR(int32_t, 2))(0x4FFA1CF3L, 1L), 1L), 1L, 0x4FFA1CF3L, 1L);
                        int16_t l_1075 = 6L;
                        int32_t l_1076 = (-4L);
                        union U0 l_1077 = {0xB79DAF03L};
                        int64_t l_1078 = 7L;
                        VECTOR(int32_t, 8) l_1079 = (VECTOR(int32_t, 8))(0x0BF67AAEL, (VECTOR(int32_t, 4))(0x0BF67AAEL, (VECTOR(int32_t, 2))(0x0BF67AAEL, 0L), 0L), 0L, 0x0BF67AAEL, 0L);
                        VECTOR(uint8_t, 16) l_1080 = (VECTOR(uint8_t, 16))(0x61L, (VECTOR(uint8_t, 4))(0x61L, (VECTOR(uint8_t, 2))(0x61L, 0x1CL), 0x1CL), 0x1CL, 0x61L, 0x1CL, (VECTOR(uint8_t, 2))(0x61L, 0x1CL), (VECTOR(uint8_t, 2))(0x61L, 0x1CL), 0x61L, 0x1CL, 0x61L, 0x1CL);
                        VECTOR(int32_t, 2) l_1081 = (VECTOR(int32_t, 2))(0x4A4A0843L, 0x52BDF677L);
                        VECTOR(int16_t, 16) l_1082 = (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x6C4CL), 0x6C4CL), 0x6C4CL, (-9L), 0x6C4CL, (VECTOR(int16_t, 2))((-9L), 0x6C4CL), (VECTOR(int16_t, 2))((-9L), 0x6C4CL), (-9L), 0x6C4CL, (-9L), 0x6C4CL);
                        VECTOR(int16_t, 16) l_1083 = (VECTOR(int16_t, 16))(0x7313L, (VECTOR(int16_t, 4))(0x7313L, (VECTOR(int16_t, 2))(0x7313L, 0L), 0L), 0L, 0x7313L, 0L, (VECTOR(int16_t, 2))(0x7313L, 0L), (VECTOR(int16_t, 2))(0x7313L, 0L), 0x7313L, 0L, 0x7313L, 0L);
                        VECTOR(uint16_t, 2) l_1084 = (VECTOR(uint16_t, 2))(0xFAACL, 65535UL);
                        int64_t l_1085[1];
                        VECTOR(uint64_t, 16) l_1086 = (VECTOR(uint64_t, 16))(0x952C968F55A1D331L, (VECTOR(uint64_t, 4))(0x952C968F55A1D331L, (VECTOR(uint64_t, 2))(0x952C968F55A1D331L, 1UL), 1UL), 1UL, 0x952C968F55A1D331L, 1UL, (VECTOR(uint64_t, 2))(0x952C968F55A1D331L, 1UL), (VECTOR(uint64_t, 2))(0x952C968F55A1D331L, 1UL), 0x952C968F55A1D331L, 1UL, 0x952C968F55A1D331L, 1UL);
                        int16_t l_1087 = 0x02E8L;
                        int64_t l_1088 = 0x7F61DF266EB89737L;
                        int16_t l_1089[7] = {0x1A0AL,(-7L),0x1A0AL,0x1A0AL,(-7L),0x1A0AL,0x1A0AL};
                        uint32_t l_1090 = 0xBDCCBD70L;
                        union U1 l_1091 = {9UL};
                        union U1 l_1092 = {0UL};
                        union U1 l_1093 = {0UL};
                        union U1 l_1094 = {0x7015L};
                        int32_t *l_1095 = (void*)0;
                        int32_t *l_1096[3][7][10] = {{{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0}},{{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0}},{{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0},{&l_1076,(void*)0,(void*)0,&l_1076,(void*)0,&l_1076,&l_1076,&l_1076,&l_1076,(void*)0}}};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_1085[i] = 0L;
                        l_1061.s7 |= ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_1074.s6157)).xxwzzyzy, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))((l_1075 , (l_1071.w |= (l_1074.s1 = l_1076))), (l_1077 , ((l_1078 |= 6UL) , (l_1060.w = 0x05C93ADFL))), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))((-3L), 0x5B85C631L)), 0L)).odd, (int32_t)((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1079.s6620277715574562)).even)).s0, (int32_t)l_1080.sc))), ((VECTOR(int32_t, 2))(0L, 0x5513A40EL)), 0x0539EA22L, (-1L))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1081.yyxyyxxyyyyxxyyx)).even)).s67, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, (-2L))), 0L, 9L)).odd))))).xxyyyyxxyyyyyxyx)).even))), ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_1082.sd5bbd893dcb5023d)).s6, 0x726AL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_1083.sd554c568b5b43934)).s0415)), (-5L), (-1L))).s4042512570537745, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_1084.yyyy)).wxzzxxwyzwzzwzxy))))).hi))).s6;
                        l_1059.sc = (l_1085[0] , (l_1086.sa , l_1087));
                        l_1059.sd ^= l_1088;
                        l_1096[0][2][9] = (l_1089[2] , (l_1090 , ((l_1094 = (l_1093 = (l_1092 = l_1091))) , l_1095)));
                    }
                    ++l_1097;
                    l_1101 = l_1100;
                    unsigned int result = 0;
                    result += l_1059.sf;
                    result += l_1059.se;
                    result += l_1059.sd;
                    result += l_1059.sc;
                    result += l_1059.sb;
                    result += l_1059.sa;
                    result += l_1059.s9;
                    result += l_1059.s8;
                    result += l_1059.s7;
                    result += l_1059.s6;
                    result += l_1059.s5;
                    result += l_1059.s4;
                    result += l_1059.s3;
                    result += l_1059.s2;
                    result += l_1059.s1;
                    result += l_1059.s0;
                    result += l_1060.w;
                    result += l_1060.z;
                    result += l_1060.y;
                    result += l_1060.x;
                    result += l_1061.s7;
                    result += l_1061.s6;
                    result += l_1061.s5;
                    result += l_1061.s4;
                    result += l_1061.s3;
                    result += l_1061.s2;
                    result += l_1061.s1;
                    result += l_1061.s0;
                    result += l_1062;
                    result += l_1063;
                    result += l_1064.sf;
                    result += l_1064.se;
                    result += l_1064.sd;
                    result += l_1064.sc;
                    result += l_1064.sb;
                    result += l_1064.sa;
                    result += l_1064.s9;
                    result += l_1064.s8;
                    result += l_1064.s7;
                    result += l_1064.s6;
                    result += l_1064.s5;
                    result += l_1064.s4;
                    result += l_1064.s3;
                    result += l_1064.s2;
                    result += l_1064.s1;
                    result += l_1064.s0;
                    result += l_1065;
                    result += l_1066;
                    result += l_1067;
                    result += l_1068;
                    result += l_1069.s7;
                    result += l_1069.s6;
                    result += l_1069.s5;
                    result += l_1069.s4;
                    result += l_1069.s3;
                    result += l_1069.s2;
                    result += l_1069.s1;
                    result += l_1069.s0;
                    result += l_1070.sf;
                    result += l_1070.se;
                    result += l_1070.sd;
                    result += l_1070.sc;
                    result += l_1070.sb;
                    result += l_1070.sa;
                    result += l_1070.s9;
                    result += l_1070.s8;
                    result += l_1070.s7;
                    result += l_1070.s6;
                    result += l_1070.s5;
                    result += l_1070.s4;
                    result += l_1070.s3;
                    result += l_1070.s2;
                    result += l_1070.s1;
                    result += l_1070.s0;
                    result += l_1071.w;
                    result += l_1071.z;
                    result += l_1071.y;
                    result += l_1071.x;
                    result += l_1072;
                    result += l_1097;
                    result += l_1100;
                    result += l_1101;
                    atomic_add(&p_1338->l_special_values[67], result);
                }
                else
                { /* block id: 506 */
                    (1 + 1);
                }
            }
        }
        for (p_1338->g_77 = 0; (p_1338->g_77 <= (-14)); p_1338->g_77 = safe_sub_func_int64_t_s_s(p_1338->g_77, 1))
        { /* block id: 513 */
            uint16_t l_1118[2][1];
            VECTOR(int32_t, 4) l_1120 = (VECTOR(int32_t, 4))(0x3D688B24L, (VECTOR(int32_t, 2))(0x3D688B24L, 0x252C5BE7L), 0x252C5BE7L);
            int16_t *l_1149 = (void*)0;
            int16_t *l_1150 = &p_1338->g_783;
            uint64_t *l_1151 = (void*)0;
            uint64_t *l_1152 = &l_927[0];
            union U1 **l_1153 = &l_1108;
            union U1 **l_1156 = &p_1338->g_1155;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1118[i][j] = 0xB59AL;
            }
            for (p_1338->g_32 = (-22); (p_1338->g_32 <= (-7)); p_1338->g_32 = safe_add_func_uint64_t_u_u(p_1338->g_32, 7))
            { /* block id: 516 */
                union U1 **l_1109 = &l_1108;
                union U1 *l_1111 = &p_1338->g_51;
                union U1 *l_1112 = &p_1338->g_1113[2];
                uint32_t l_1117[5][6][2] = {{{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL}},{{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL}},{{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL}},{{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL}},{{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL},{0x9DFDE3E0L,1UL}}};
                int i, j, k;
                l_1118[0][0] &= (safe_mul_func_uint16_t_u_u((((*l_1109) = l_1108) == &p_1338->g_51), (((void*)0 != (*p_1338->g_708)) && (l_1117[4][2][0] ^= ((((((&p_1338->g_348 == (void*)0) , ((*l_1112) = ((*l_1111) = (l_1110[0][1] = p_1338->g_51)))) , ((VECTOR(int32_t, 16))(l_1114.s4ad8ade6fbeebd17)).s7) < (safe_rshift_func_int16_t_s_s(p_16, 12))) <= (*p_1338->g_171)) , (-2L))))));
                l_1121 = (l_1120.z = ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(p_1338->g_1119.sfd56)).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1120.wxxx)).zzwxxxyxxywxwxww)).sf8)).yxxx)).even, ((VECTOR(int32_t, 2))(1L, (-3L)))))).hi);
            }
            l_1120.x = ((((*l_980) = 0L) || p_16) , p_16);
            p_1338->g_32 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 16))(0x27032BEBL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x210CAE6CL, 0x5F94466CL)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(p_1338->g_1122.yzzxxxzzzwzyzyyz)).s8a)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1123.s37ba4dfb9dd785dc)).odd)).s10))).xyxyyxyy)), ((p_16 & ((*l_1152) = ((((((-2L) & (safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((l_1120.w = (safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s(((safe_div_func_uint32_t_u_u(p_16, ((VECTOR(uint32_t, 4))(0x719D37D1L, 0xEF13F1A2L, 4294967290UL, 7UL)).z)) , 0x0DC3B3F8L), 4294967295UL)) ^ ((VECTOR(int16_t, 8))(p_1338->g_1136.xyyyxyxy)).s1), ((*l_1150) = ((*p_1338->g_171) = (safe_mul_func_uint16_t_u_u((p_1338->g_967.s6 , ((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_1338->g_1139.s74)), 65535UL, 1UL)).ywxyywxzwywxzzzw, ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0x4EE7L, 0UL)))), 0UL, 0xE9BAL)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_1140.s74)).yxyxxyyxxyxxyyxy)).s4f)).yyxyxxxy, ((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 2))(0x30L, 6UL)).xyyxyxxy, ((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_1141.xy)))).xyxxyxyx)).s6203052436746075, ((VECTOR(uint8_t, 4))(l_1142.sc040)).yyxyywyxyyzyxwzx))).hi)))))).s6735554766234137)).s25bf))).ywwwxxyyyywywzwz))).even, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((safe_add_func_uint8_t_u_u(p_1338->g_1113[2].f0, (((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x6DD2L, 1L)).lo, 13)), p_17)) && p_1338->g_61) , l_1049.x))) & l_1118[0][0]), 0x8CD1L, ((VECTOR(uint16_t, 2))(0xBEB6L)), ((VECTOR(uint16_t, 4))(65535UL)), ((VECTOR(uint16_t, 2))(0x4EA7L)), ((VECTOR(uint16_t, 4))(65535UL)), 0x29B7L, 3UL)).s0b)), ((VECTOR(uint16_t, 4))(7UL)), 65534UL, 65528UL)).lo)), 0UL, ((VECTOR(uint16_t, 2))(65528UL)), p_16, ((VECTOR(uint16_t, 2))(0x1A38L)), ((VECTOR(uint16_t, 2))(65531UL)), ((VECTOR(uint16_t, 2))(0x3442L)), 9UL, 0xE4FDL)).s2e)), 0x76DFL, 65533UL)).hi, ((VECTOR(uint16_t, 2))(0xB655L))))), ((VECTOR(uint16_t, 4))(65535UL)), 0x083FL, 0UL)).lo, ((VECTOR(uint16_t, 4))(1UL))))).xxzxwyyy)), ((VECTOR(uint16_t, 8))(0x8FF6L))))).s0), 0xAAF4L)))))), l_1049.y))), l_1118[0][0])), (-6L)))) | 0x49D2964E16A88B31L) < p_17) , p_17) >= (-1L)))) , (-1L)), 0x664ABBDBL, 0x422DC9F0L, 0x67575A51L, 3L, 1L)).sa1, ((VECTOR(int32_t, 2))((-9L)))))), ((VECTOR(int32_t, 4))(0x5842424AL)), 0x796EF3AEL, 0L)), ((VECTOR(int32_t, 2))((-1L))), 0x6CDECD4EL, ((VECTOR(int32_t, 4))(0L)))).s6c09, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(0L))))), ((VECTOR(int32_t, 2))(0x50E717FAL)), 0x7B01FDC3L, (-10L))).s1;
            (*l_1156) = ((*l_1153) = &l_1110[0][3]);
        }
        p_1338->g_77 &= ((safe_sub_func_int16_t_s_s((p_16 , (((safe_lshift_func_int16_t_s_u((p_16 , p_17), 1)) <= l_1121) ^ (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_1161.zyywwzyx)).s05)).odd , ((*p_1338->g_171) && (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(7UL, (p_1338->g_1139.s1++))), 7)))))), ((((((void*)0 != l_1170) | ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(l_1171.see39689c97f1b22e)).s16, ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 16))(l_1172.s2505503321023250)), ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(p_1338->g_1173.s60bcc0cd6442ee01)).hi)).s25, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_1174.s0e7970c8)))).s01, ((VECTOR(int8_t, 2))(5L, 0x77L))))).yyxyxxxxyyyyyyyx))).s0d)).xxyxyyyx)).s32)).yyxx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x56L, (&p_1338->g_858 != l_1175), 0x24L, ((VECTOR(int8_t, 2))(0x6BL)), ((VECTOR(int8_t, 2))(7L)), 0x3BL, l_1049.x, 7L, p_16, 0L, (-1L), 0L, 0x2CL, 0x0EL)))).s54f4))).even, ((VECTOR(int8_t, 2))((-4L)))))).hi) == 0x59B08CF2499509E8L) ^ l_1010.y) > 0xE53C3837L))) == p_17);
    }
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_1338->g_737 p_1338->g_740 p_1338->g_97 p_1338->g_106 p_1338->g_3 p_1338->g_278.f0 p_1338->g_330 p_1338->g_758 p_1338->g_171 p_1338->g_61 p_1338->g_130 p_1338->g_39 p_1338->g_32 p_1338->g_709 p_1338->g_170 p_1338->g_328 p_1338->g_82 p_1338->g_487 p_1338->g_51.f0 p_1338->g_12 p_1338->g_255 p_1338->g_129 p_1338->g_844 p_1338->g_51 p_1338->g_855 p_1338->g_36 p_1338->g_858 p_1338->g_30 p_1338->g_31 p_1338->g_558 p_1338->g_654 p_1338->g_440 p_1338->g_540 p_1338->g_541 p_1338->g_347 p_1338->g_708 p_1338->g_820 p_1338->g_460 p_1338->g_783 p_1338->g_612 p_1338->g_668 p_1338->g_152
 * writes: p_1338->g_82 p_1338->g_61 p_1338->g_39 p_1338->g_12 p_1338->g_comm_values p_1338->g_328 p_1338->g_487 p_1338->g_51.f0 p_1338->g_740 p_1338->g_783 p_1338->g_130 p_1338->g_858 p_1338->g_32
 */
uint32_t  func_19(int8_t * p_20, int8_t * p_21, struct S2 * p_1338)
{ /* block id: 335 */
    uint32_t l_721[2];
    VECTOR(uint16_t, 8) l_726 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0xBB16L), 0xBB16L), 0xBB16L, 65526UL, 0xBB16L);
    VECTOR(int8_t, 2) l_749 = (VECTOR(int8_t, 2))(1L, 3L);
    VECTOR(uint32_t, 4) l_826 = (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 4294967295UL), 4294967295UL);
    int8_t ***l_827 = (void*)0;
    int32_t *l_852[6];
    union U0 *l_856 = &p_1338->g_278;
    union U1 l_881 = {65535UL};
    int16_t l_919 = 0x3038L;
    int32_t l_920 = 0x7B14F172L;
    int16_t **l_921[5][8][4] = {{{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171}},{{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171}},{{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171}},{{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171}},{{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171},{&p_1338->g_171,&p_1338->g_171,&p_1338->g_171,&p_1338->g_171}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_721[i] = 0x61D10D52L;
    for (i = 0; i < 6; i++)
        l_852[i] = &p_1338->g_39[0];
    if (l_721[1])
    { /* block id: 336 */
        VECTOR(uint8_t, 8) l_727 = (VECTOR(uint8_t, 8))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0x75L), 0x75L), 0x75L, 250UL, 0x75L);
        uint64_t l_734 = 0UL;
        union U1 *l_779 = &p_1338->g_51;
        int16_t *l_782 = &p_1338->g_783;
        int32_t l_787 = 1L;
        uint16_t l_792 = 65533UL;
        VECTOR(uint8_t, 16) l_817 = (VECTOR(uint8_t, 16))(0xAEL, (VECTOR(uint8_t, 4))(0xAEL, (VECTOR(uint8_t, 2))(0xAEL, 1UL), 1UL), 1UL, 0xAEL, 1UL, (VECTOR(uint8_t, 2))(0xAEL, 1UL), (VECTOR(uint8_t, 2))(0xAEL, 1UL), 0xAEL, 1UL, 0xAEL, 1UL);
        int32_t *l_830 = &p_1338->g_355;
        uint32_t *l_850 = &p_1338->g_97;
        uint32_t **l_849[10] = {&l_850,&l_850,&l_850,&l_850,&l_850,&l_850,&l_850,&l_850,&l_850,&l_850};
        int8_t *l_863 = &p_1338->g_12[5];
        int i;
        if ((+(safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 2))(l_726.s12)), ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_727.s43221430)))))).s0735671425015233, ((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 2))(0UL, 0UL)).xyxxyyyyyyyyyyyx, (uint8_t)(safe_rshift_func_uint16_t_u_s((~((safe_mul_func_int16_t_s_s(((l_727.s1 , 1L) == (l_734 < ((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(0UL, ((VECTOR(uint16_t, 16))(p_1338->g_737.zwzxzyxxyxxwwxwz)).s7, 0xF05EL, 65535UL)).y, (((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(0x40A7L, 0x5C3AL, l_726.s0, 0xEDC3L, ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 16))(p_1338->g_740.s1130038afe8764a4)).s2fc6, ((VECTOR(uint16_t, 2))(1UL, 0x9812L)).yxyx))))).s4, 0)) && (safe_add_func_int8_t_s_s(l_726.s7, l_721[1]))) & p_1338->g_97))) , p_1338->g_106.y))), l_727.s4)) , GROUP_DIVERGE(2, 1))), l_727.s7)), (uint8_t)l_727.s0)))))).se2, ((VECTOR(uint16_t, 2))(65535UL))))).xxxxyyyy, (uint16_t)0xE6EAL))).s06)).yyyxyxxy, ((VECTOR(uint16_t, 8))(0x2BBBL))))).s4, l_734)), l_727.s6))))
        { /* block id: 337 */
            int32_t *l_743 = &p_1338->g_3;
            int32_t **l_744 = &l_743;
            uint32_t *l_753 = &p_1338->g_82;
            int32_t l_780 = (-1L);
            uint32_t l_781 = 0x55AFC50EL;
            int64_t *l_784 = (void*)0;
            int64_t *l_785 = (void*)0;
            int64_t *l_786[3][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
            int32_t *l_789 = &l_780;
            int i, j;
            (*l_744) = l_743;
            (*l_789) = (safe_add_func_int32_t_s_s((l_787 |= ((safe_mod_func_uint32_t_u_u((l_721[1] < (((**l_744) != ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_749.yxxyxxxyxxyxxxxx)).sc8)).hi) & (safe_mod_func_int32_t_s_s((**l_744), l_726.s2)))), (safe_unary_minus_func_uint32_t_u(((*l_753) = p_1338->g_278.f0))))) & (safe_rshift_func_int16_t_s_u(((*p_1338->g_171) &= (safe_mod_func_uint16_t_u_u(p_1338->g_330, ((VECTOR(int16_t, 4))(p_1338->g_758.xyyx)).y))), (l_734 , (safe_div_func_int64_t_s_s((p_1338->g_comm_values[p_1338->tid] = ((safe_rshift_func_int16_t_s_s(((((safe_sub_func_int16_t_s_s(1L, (safe_div_func_int32_t_s_s((((((safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((((*p_21) = (safe_mod_func_int32_t_s_s(((*p_1338->g_130) ^= (0xC5L ^ (*l_743))), p_1338->g_32))) < 0x16L), 15)), 0UL)), l_727.s2)), l_721[1])) , &p_1338->g_51) == l_779) || l_780) != l_781), p_1338->g_709.sf)))) == l_726.s7) , p_1338->g_170[5][3]) != l_782), l_727.s4)) | 0UL)), l_721[1]))))))), 0UL));
            for (p_1338->g_328 = 19; (p_1338->g_328 >= 25); ++p_1338->g_328)
            { /* block id: 348 */
                (*p_1338->g_130) |= l_792;
                for (p_1338->g_82 = 0; (p_1338->g_82 >= 54); p_1338->g_82 = safe_add_func_uint64_t_u_u(p_1338->g_82, 3))
                { /* block id: 352 */
                    return (*l_743);
                }
                for (p_1338->g_487 = (-5); (p_1338->g_487 == 41); ++p_1338->g_487)
                { /* block id: 357 */
                    if (l_727.s4)
                        break;
                }
            }
        }
        else
        { /* block id: 361 */
            VECTOR(int16_t, 2) l_819 = (VECTOR(int16_t, 2))(0x7A92L, 0x51AEL);
            VECTOR(int16_t, 8) l_821 = (VECTOR(int16_t, 8))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x7D82L), 0x7D82L), 0x7D82L, 2L, 0x7D82L);
            int32_t *l_837 = (void*)0;
            int32_t l_867 = (-6L);
            int i;
            for (l_792 = 15; (l_792 > 19); l_792 = safe_add_func_int8_t_s_s(l_792, 9))
            { /* block id: 364 */
                (*p_1338->g_130) = l_721[1];
            }
            for (p_1338->g_51.f0 = 0; (p_1338->g_51.f0 >= 36); p_1338->g_51.f0 = safe_add_func_int16_t_s_s(p_1338->g_51.f0, 7))
            { /* block id: 369 */
                uint16_t *l_812[3][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_818 = 0L;
                VECTOR(int64_t, 4) l_828 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x7487389CE778F93EL), 0x7487389CE778F93EL);
                int32_t *l_829[5][3][1] = {{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}}};
                int8_t l_831[8] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
                int32_t l_832 = 0L;
                int i, j, k;
                l_832 = (safe_add_func_int32_t_s_s(((**p_1338->g_255) = (safe_lshift_func_uint16_t_u_u((((VECTOR(uint8_t, 4))(p_1338->g_805.s7676)).x <= (((void*)0 != &l_792) <= (safe_sub_func_int16_t_s_s(((*l_782) = (safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((p_1338->g_740.se = p_1338->g_12[1]) != (safe_mod_func_uint16_t_u_u(((l_830 = ((((l_818 |= (safe_rshift_func_int8_t_s_u((-1L), ((VECTOR(uint8_t, 4))(l_817.sd7a3)).z))) <= ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 8))(l_819.xyxyyyyy)), ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(0x4574L, 0L)).xyyy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_1338->g_820.s46761234)).even))))).yzywzxzy))).odd, ((VECTOR(int16_t, 16))(l_821.s1250373520013747)).sc57b, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x0438L, 0x3E1BL)).xxxxyxxx)).even))).y) && (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 2))(l_826.xz)).yyxy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x3DADACB4L, 0x44F01DDCL)).yxxy))))).x, ((void*)0 == l_827))), l_828.y))) , l_829[4][0][0])) != (void*)0), 0x28A4L))), l_726.s1)), 0x1DL))), l_831[4])))), 10))), l_817.s2));
                for (p_1338->g_328 = 1; (p_1338->g_328 < 10); p_1338->g_328 = safe_add_func_uint16_t_u_u(p_1338->g_328, 6))
                { /* block id: 378 */
                    if (l_727.s4)
                        break;
                    if ((**p_1338->g_129))
                        continue;
                }
                if ((**p_1338->g_255))
                    break;
            }
            if (l_819.y)
            { /* block id: 384 */
                uint8_t l_841 = 255UL;
                uint32_t *l_847 = (void*)0;
                uint32_t *l_848 = &l_721[1];
                union U1 *l_851 = (void*)0;
                for (p_1338->g_82 = 26; (p_1338->g_82 > 4); p_1338->g_82--)
                { /* block id: 387 */
                    int32_t **l_838[8] = {&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130};
                    int i;
                    (*p_1338->g_255) = l_837;
                    return l_819.y;
                }
                if (((4294967295UL & ((*p_21) , FAKE_DIVERGE(p_1338->local_0_offset, get_local_id(0), 10))) && (safe_sub_func_int32_t_s_s(l_841, (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 16))(l_792, p_1338->g_709.se, ((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 16))(0x2D6CF01DBE5B29F9L, 18446744073709551606UL, (!18446744073709551615UL), ((VECTOR(uint64_t, 4))(p_1338->g_844.wxxw)), 0x075CA9EE07091C4DL, 0x501461EC0D788B6BL, 0x8D4A5B0F8CF2AFFBL, (((safe_add_func_int32_t_s_s((+l_727.s4), ((*l_848) = 0xA7A85A4FL))) || ((p_1338->g_51 , l_849[1]) == (void*)0)) >= 4294967292UL), 1UL, ((VECTOR(uint64_t, 4))(0x55B4211CE898A1A0L)))).even, ((VECTOR(uint64_t, 8))(1UL))))).odd, ((VECTOR(uint64_t, 4))(0xA390D6955627C00DL))))), 18446744073709551615UL, ((VECTOR(uint64_t, 4))(18446744073709551608UL)), 0xB0B2B5CEC6BB4398L, 1UL, FAKE_DIVERGE(p_1338->global_0_offset, get_global_id(0), 10), 0x7F0849A8E0B6F5B7L, 18446744073709551615UL)).sa8, ((VECTOR(uint64_t, 2))(18446744073709551615UL))))).xxyxxxxy)).odd, ((VECTOR(uint64_t, 4))(1UL))))).y, p_1338->g_12[4]))))))
                { /* block id: 392 */
                    l_851 = (void*)0;
                    (*p_1338->g_130) &= l_841;
                    (*p_1338->g_855) = l_852[0];
                }
                else
                { /* block id: 396 */
                    union U0 **l_857 = &l_856;
                    (*l_857) = l_856;
                }
                return p_1338->g_36[7][2];
            }
            else
            { /* block id: 400 */
                uint64_t **l_859 = (void*)0;
                uint64_t **l_860 = &p_1338->g_858;
                uint64_t *l_864 = (void*)0;
                uint64_t *l_865 = &l_734;
                int16_t l_866 = 0x2E88L;
                l_867 &= (!((((((*l_860) = p_1338->g_858) == (void*)0) , (*p_1338->g_171)) , ((void*)0 == l_837)) & ((safe_sub_func_int8_t_s_s(((((*l_865) = ((l_863 != (((**p_1338->g_30) = (*p_21)) , p_20)) < ((GROUP_DIVERGE(2, 1) == p_1338->g_558.y) <= p_1338->g_654.x))) >= l_727.s7) != p_1338->g_440.sa), l_819.y)) < l_866)));
            }
        }
        return p_1338->g_740.s1;
    }
    else
    { /* block id: 408 */
        int32_t l_872 = 0x1CDD0E62L;
        union U0 **l_892 = &l_856;
        int32_t l_897[10][7][2] = {{{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)}},{{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)}},{{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)}},{{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)}},{{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)}},{{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)}},{{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)}},{{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)}},{{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)}},{{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)},{1L,(-5L)}}};
        int32_t l_907 = 0x709D1E15L;
        int i, j, k;
        if ((safe_div_func_uint32_t_u_u(((((safe_sub_func_uint16_t_u_u((((l_872 , (**p_1338->g_540)) , (safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s((*p_1338->g_171), (((l_881 , (safe_mod_func_uint8_t_u_u(((l_872 | (safe_sub_func_uint32_t_u_u(0x00E2D649L, (safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((!(l_872 && (~((*p_1338->g_130) = (safe_sub_func_uint16_t_u_u(((((void*)0 == l_892) || 0xE5FD22C7L) | (***p_1338->g_708)), 65535UL)))))), 0x39L)), p_1338->g_820.s3))))) || p_1338->g_460.se), FAKE_DIVERGE(p_1338->local_1_offset, get_local_id(1), 10)))) > l_872) <= 0x40A5L))) , (-1L)), 6)), 0x22C6L)), l_872))) || l_872), 0x1F4AL)) | (-1L)) >= p_1338->g_783) && 0x4AB1D5D2C1591FE0L), 0xE03C48E5L)))
        { /* block id: 410 */
            int32_t l_895 = 0L;
            VECTOR(int32_t, 16) l_896 = (VECTOR(int32_t, 16))(0x37A22F31L, (VECTOR(int32_t, 4))(0x37A22F31L, (VECTOR(int32_t, 2))(0x37A22F31L, 0L), 0L), 0L, 0x37A22F31L, 0L, (VECTOR(int32_t, 2))(0x37A22F31L, 0L), (VECTOR(int32_t, 2))(0x37A22F31L, 0L), 0x37A22F31L, 0L, 0x37A22F31L, 0L);
            int64_t l_908 = 0x67DB8E5A443ED4EAL;
            int32_t **l_914[5][4][9] = {{{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0},{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0},{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0},{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0}},{{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0},{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0},{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0},{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0}},{{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0},{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0},{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0},{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0}},{{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0},{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0},{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0},{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0}},{{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0},{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0},{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0},{&l_852[0],(void*)0,&l_852[1],&l_852[1],&p_1338->g_130,&l_852[0],(void*)0,&l_852[0],(void*)0}}};
            int i, j, k;
            for (p_1338->g_328 = (-30); (p_1338->g_328 < (-15)); p_1338->g_328++)
            { /* block id: 413 */
                int32_t l_898 = (-5L);
                int32_t l_899 = 1L;
                int32_t l_900 = 0x4514DF23L;
                int32_t l_901 = 1L;
                int32_t l_902 = (-10L);
                int32_t l_904 = 0L;
                int32_t l_905 = 5L;
                int32_t l_906[5][10][5] = {{{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL}},{{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL}},{{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL}},{{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL}},{{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL},{(-1L),0x640BE87AL,1L,0x47DA30AAL,0x49C5CA2EL}}};
                uint16_t l_909 = 0x501FL;
                int i, j, k;
                l_909++;
            }
            l_852[0] = &l_897[4][4][1];
        }
        else
        { /* block id: 417 */
            uint32_t l_916[5];
            int i;
            for (i = 0; i < 5; i++)
                l_916[i] = 0x8E7A13B1L;
            ++l_916[1];
        }
    }
    (*p_1338->g_130) = l_919;
    (*p_1338->g_130) = (p_1338->g_32 ^= (**p_1338->g_612));
    (**p_1338->g_668) = ((&p_1338->g_170[4][1] == (l_920 , l_921[4][1][3])) == 0L);
    return p_1338->g_152;
}


/* ------------------------------------------ */
/* 
 * reads : p_1338->g_32 p_1338->g_12 p_1338->l_comm_values p_1338->g_51 p_1338->g_51.f0 p_1338->g_82 p_1338->g_39 p_1338->g_77 p_1338->g_93 p_1338->g_comm_values p_1338->g_103 p_1338->g_106 p_1338->g_122 p_1338->g_97 p_1338->g_128 p_1338->g_129 p_1338->g_61 p_1338->g_130 p_1338->g_177 p_1338->g_255 p_1338->g_278 p_1338->g_171 p_1338->g_330 p_1338->g_348 p_1338->g_351 p_1338->g_357 p_1338->g_358 p_1338->g_38 p_1338->g_328 p_1338->g_397 p_1338->g_441 p_1338->g_347 p_1338->g_484 p_1338->g_487 p_1338->g_35 p_1338->g_533 p_1338->g_540 p_1338->g_278.f0 p_1338->g_152 p_1338->g_31 p_1338->g_708 p_1338->g_709 p_1338->g_518 p_1338->g_30
 * writes: p_1338->g_30 p_1338->g_32 p_1338->g_39 p_1338->g_51.f0 p_1338->g_82 p_1338->g_77 p_1338->g_97 p_1338->g_130 p_1338->g_61 p_1338->g_comm_values p_1338->g_170 p_1338->g_171 p_1338->g_177 p_1338->g_122 p_1338->g_328 p_1338->g_330 p_1338->g_348 p_1338->g_425 p_1338->g_441 p_1338->g_487 p_1338->g_484 p_1338->g_355 p_1338->g_152 p_1338->g_12
 */
int8_t * func_22(uint64_t  p_23, struct S2 * p_1338)
{ /* block id: 9 */
    int8_t *l_29[3][3][9] = {{{&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[4],(void*)0},{&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[4],(void*)0},{&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[4],(void*)0}},{{&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[4],(void*)0},{&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[4],(void*)0},{&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[4],(void*)0}},{{&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[4],(void*)0},{&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[4],(void*)0},{&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[1],&p_1338->g_12[4],(void*)0}}};
    int8_t **l_28[7][7] = {{&l_29[1][1][1],(void*)0,&l_29[1][0][5],(void*)0,&l_29[1][1][1],&l_29[1][1][1],(void*)0},{&l_29[1][1][1],(void*)0,&l_29[1][0][5],(void*)0,&l_29[1][1][1],&l_29[1][1][1],(void*)0},{&l_29[1][1][1],(void*)0,&l_29[1][0][5],(void*)0,&l_29[1][1][1],&l_29[1][1][1],(void*)0},{&l_29[1][1][1],(void*)0,&l_29[1][0][5],(void*)0,&l_29[1][1][1],&l_29[1][1][1],(void*)0},{&l_29[1][1][1],(void*)0,&l_29[1][0][5],(void*)0,&l_29[1][1][1],&l_29[1][1][1],(void*)0},{&l_29[1][1][1],(void*)0,&l_29[1][0][5],(void*)0,&l_29[1][1][1],&l_29[1][1][1],(void*)0},{&l_29[1][1][1],(void*)0,&l_29[1][0][5],(void*)0,&l_29[1][1][1],&l_29[1][1][1],(void*)0}};
    int64_t *l_327 = &p_1338->g_328;
    int64_t *l_329 = &p_1338->g_330;
    int32_t l_710[4][4][5] = {{{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L},{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L},{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L},{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L}},{{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L},{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L},{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L},{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L}},{{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L},{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L},{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L},{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L}},{{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L},{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L},{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L},{0x39C7EB48L,0x6D79AB33L,(-9L),0x6D79AB33L,0x39C7EB48L}}};
    uint64_t *l_715 = (void*)0;
    uint64_t *l_716[9][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_717[9] = {0x0168CF64L,0x4B27E860L,0x0168CF64L,0x0168CF64L,0x4B27E860L,0x0168CF64L,0x0168CF64L,0x4B27E860L,0x0168CF64L};
    union U0 l_720 = {1UL};
    int i, j, k;
    (*p_1338->g_708) = func_24(((*l_329) &= ((*l_327) = func_26((p_1338->g_30 = l_28[2][0]), p_1338))), p_1338);
    (*p_1338->g_130) &= ((((VECTOR(uint8_t, 2))(p_1338->g_709.sf7)).lo == 0x45L) || l_710[0][2][4]);
    (*p_1338->g_130) = ((l_710[0][2][4] && (((((p_1338->g_518.s7 , p_23) < (l_710[1][0][3] | 0xE215L)) != (((safe_lshift_func_uint8_t_u_u(p_1338->g_357.s4, 0)) , (safe_mod_func_uint64_t_u_u((l_717[4] |= 0x6E07B3B7A200368FL), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))((+(0xACL && (((safe_sub_func_uint64_t_u_u(p_23, (-1L))) , l_720) , l_710[0][1][3]))), 0x24E3474480ED5204L, 1L, ((VECTOR(int64_t, 4))(0x4CDB912FC23D977AL)), 8L, (-1L), 0x13596DFDA9CCA914L, 0L, ((VECTOR(int64_t, 2))(0x4739A0D251559832L)), ((VECTOR(int64_t, 2))(0x604ABD1AE78F9716L)), 0x5FEB72B51C85A7A3L)).odd)).s7611164161675610)).sfd, ((VECTOR(int64_t, 2))(0x6CA47B746EC884E4L))))), 1L, 0x355E71F132B867C4L)).y))) , 1UL)) >= p_1338->g_77) <= (-2L))) || 0x2D9FB45552FFF53AL);
    return (**p_1338->g_708);
}


/* ------------------------------------------ */
/* 
 * reads : p_1338->g_255 p_1338->g_122 p_1338->g_130 p_1338->g_39 p_1338->g_348 p_1338->g_351 p_1338->g_357 p_1338->g_358 p_1338->g_61 p_1338->g_93 p_1338->l_comm_values p_1338->g_97 p_1338->g_38 p_1338->g_328 p_1338->g_397 p_1338->g_51.f0 p_1338->g_171 p_1338->g_441 p_1338->g_347 p_1338->g_484 p_1338->g_487 p_1338->g_35 p_1338->g_106 p_1338->g_129 p_1338->g_533 p_1338->g_540 p_1338->g_278.f0 p_1338->g_128 p_1338->g_152 p_1338->g_31 p_1338->g_77
 * writes: p_1338->g_130 p_1338->g_122 p_1338->g_348 p_1338->g_39 p_1338->g_328 p_1338->g_32 p_1338->g_425 p_1338->g_61 p_1338->g_51.f0 p_1338->g_441 p_1338->g_30 p_1338->g_487 p_1338->g_484 p_1338->g_355 p_1338->g_97 p_1338->g_77 p_1338->g_152 p_1338->g_12
 */
int8_t ** func_24(int64_t  p_25, struct S2 * p_1338)
{ /* block id: 162 */
    int32_t *l_331[9];
    uint16_t l_341[9] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
    int64_t l_344 = 0L;
    int32_t **l_352 = (void*)0;
    int32_t *l_354[5][6] = {{&p_1338->g_355,&p_1338->g_355,&p_1338->g_355,&p_1338->g_355,&p_1338->g_355,&p_1338->g_355},{&p_1338->g_355,&p_1338->g_355,&p_1338->g_355,&p_1338->g_355,&p_1338->g_355,&p_1338->g_355},{&p_1338->g_355,&p_1338->g_355,&p_1338->g_355,&p_1338->g_355,&p_1338->g_355,&p_1338->g_355},{&p_1338->g_355,&p_1338->g_355,&p_1338->g_355,&p_1338->g_355,&p_1338->g_355,&p_1338->g_355},{&p_1338->g_355,&p_1338->g_355,&p_1338->g_355,&p_1338->g_355,&p_1338->g_355,&p_1338->g_355}};
    int32_t **l_353[8][9][3] = {{{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]}},{{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]}},{{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]}},{{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]}},{{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]}},{{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]}},{{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]}},{{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]},{&l_354[2][2],&l_354[2][2],&l_354[2][2]}}};
    int32_t *l_356 = &p_1338->g_355;
    VECTOR(int32_t, 4) l_359 = (VECTOR(int32_t, 4))(0x76FB2B99L, (VECTOR(int32_t, 2))(0x76FB2B99L, 0x65B9B159L), 0x65B9B159L);
    VECTOR(int32_t, 16) l_360 = (VECTOR(int32_t, 16))(0x3099E0FEL, (VECTOR(int32_t, 4))(0x3099E0FEL, (VECTOR(int32_t, 2))(0x3099E0FEL, 0x49F449D4L), 0x49F449D4L), 0x49F449D4L, 0x3099E0FEL, 0x49F449D4L, (VECTOR(int32_t, 2))(0x3099E0FEL, 0x49F449D4L), (VECTOR(int32_t, 2))(0x3099E0FEL, 0x49F449D4L), 0x3099E0FEL, 0x49F449D4L, 0x3099E0FEL, 0x49F449D4L);
    int16_t **l_402[1][6][7] = {{{&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3]},{&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3]},{&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3]},{&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3]},{&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3]},{&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_170[3][3]}}};
    int8_t **l_474 = &p_1338->g_31[2];
    int64_t l_499 = 3L;
    VECTOR(int8_t, 4) l_519 = (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, 0x2CL), 0x2CL);
    int32_t l_528[3];
    VECTOR(int16_t, 2) l_557 = (VECTOR(int16_t, 2))((-2L), 0x7095L);
    VECTOR(int32_t, 2) l_588 = (VECTOR(int32_t, 2))(0x2ACFFFC6L, 0x1EB54B67L);
    VECTOR(int32_t, 4) l_589 = (VECTOR(int32_t, 4))(0x620C5490L, (VECTOR(int32_t, 2))(0x620C5490L, 0x6D443762L), 0x6D443762L);
    uint8_t l_606 = 251UL;
    int32_t *l_638[7] = {&p_1338->g_39[0],&p_1338->g_39[0],&p_1338->g_39[0],&p_1338->g_39[0],&p_1338->g_39[0],&p_1338->g_39[0],&p_1338->g_39[0]};
    VECTOR(int32_t, 16) l_641 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 1L), 1L), 1L, (-7L), 1L, (VECTOR(int32_t, 2))((-7L), 1L), (VECTOR(int32_t, 2))((-7L), 1L), (-7L), 1L, (-7L), 1L);
    VECTOR(uint32_t, 8) l_662 = (VECTOR(uint32_t, 8))(0xE1D29886L, (VECTOR(uint32_t, 4))(0xE1D29886L, (VECTOR(uint32_t, 2))(0xE1D29886L, 0UL), 0UL), 0UL, 0xE1D29886L, 0UL);
    uint64_t l_686 = 0xFDEA4252CFDE7482L;
    uint16_t l_699 = 0x4820L;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_331[i] = &p_1338->g_39[0];
    for (i = 0; i < 3; i++)
        l_528[i] = 0x0ECA6BB1L;
    (*p_1338->g_255) = l_331[1];
    for (p_1338->g_122 = (-19); (p_1338->g_122 <= (-3)); ++p_1338->g_122)
    { /* block id: 166 */
        uint8_t l_334 = 255UL;
        int32_t l_335 = 6L;
        int32_t l_336 = 0x4D342EA1L;
        int16_t l_337 = 0x5BB7L;
        int32_t l_338 = (-8L);
        int32_t l_339 = 0x415CF07EL;
        int32_t l_340 = 0x4DD9F696L;
        int32_t l_345 = 0x47AB691BL;
        int32_t l_346[1][2];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_346[i][j] = 0x3FC53D65L;
        }
        if (l_334)
            break;
        l_341[1]++;
        if ((**p_1338->g_255))
            continue;
        ++p_1338->g_348;
    }
    if (((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 16))(p_1338->g_351.xyyxxyyyyyyyxxyx)), (int32_t)((l_356 = l_331[6]) == (void*)0), (int32_t)(0xE939946FL > p_1338->g_348)))), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(p_1338->g_357.s7773450466605037)).s61, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_1338->g_358.wy)).xyyxxyxxyxyxyyyy)).s9635)), ((VECTOR(int32_t, 16))(l_359.zzzzxzwxxxzxzzxy)).s2a87, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(l_360.sb9347f5f3e4b1893)).s73df, (int32_t)((p_25 == (safe_rshift_func_uint16_t_u_u(p_1338->g_61, (safe_lshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(p_1338->g_93.z, 0x058DL)), ((safe_div_func_uint16_t_u_u(p_1338->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1338->tid, 40))], p_25)) & p_25))), GROUP_DIVERGE(2, 1))), p_1338->g_97))))) & p_25), (int32_t)p_25))).odd)).yyyx))).even))).yxyyyyxxxxyxyyxy))).s7)
    { /* block id: 173 */
        union U1 *l_373 = &p_1338->g_51;
        VECTOR(uint16_t, 2) l_381 = (VECTOR(uint16_t, 2))(0x94EEL, 65535UL);
        int32_t *l_382 = &p_1338->g_355;
        int32_t l_384[2][8] = {{0x653899F4L,0L,0L,0x653899F4L,0x653899F4L,0L,0L,0x653899F4L},{0x653899F4L,0L,0L,0x653899F4L,0x653899F4L,0L,0L,0x653899F4L}};
        VECTOR(int16_t, 8) l_416 = (VECTOR(int16_t, 8))(0x174DL, (VECTOR(int16_t, 4))(0x174DL, (VECTOR(int16_t, 2))(0x174DL, 0x60B9L), 0x60B9L), 0x60B9L, 0x174DL, 0x60B9L);
        int64_t *l_420 = (void*)0;
        VECTOR(uint16_t, 4) l_446 = (VECTOR(uint16_t, 4))(0xFFF1L, (VECTOR(uint16_t, 2))(0xFFF1L, 65526UL), 65526UL);
        int8_t **l_475 = &p_1338->g_31[5];
        VECTOR(uint8_t, 16) l_489 = (VECTOR(uint8_t, 16))(0x64L, (VECTOR(uint8_t, 4))(0x64L, (VECTOR(uint8_t, 2))(0x64L, 0x45L), 0x45L), 0x45L, 0x64L, 0x45L, (VECTOR(uint8_t, 2))(0x64L, 0x45L), (VECTOR(uint8_t, 2))(0x64L, 0x45L), 0x64L, 0x45L, 0x64L, 0x45L);
        uint32_t l_529 = 4294967287UL;
        int8_t l_542 = 7L;
        uint16_t l_574[4][9] = {{65530UL,65530UL,0x5A6DL,0x82DEL,0x2E95L,0x82DEL,0x5A6DL,65530UL,65530UL},{65530UL,65530UL,0x5A6DL,0x82DEL,0x2E95L,0x82DEL,0x5A6DL,65530UL,65530UL},{65530UL,65530UL,0x5A6DL,0x82DEL,0x2E95L,0x82DEL,0x5A6DL,65530UL,65530UL},{65530UL,65530UL,0x5A6DL,0x82DEL,0x2E95L,0x82DEL,0x5A6DL,65530UL,65530UL}};
        VECTOR(int32_t, 4) l_587 = (VECTOR(int32_t, 4))(0x4F91B22DL, (VECTOR(int32_t, 2))(0x4F91B22DL, (-1L)), (-1L));
        uint8_t *l_603 = &p_1338->g_487;
        VECTOR(int32_t, 16) l_626 = (VECTOR(int32_t, 16))(0x7A6E3C0DL, (VECTOR(int32_t, 4))(0x7A6E3C0DL, (VECTOR(int32_t, 2))(0x7A6E3C0DL, 1L), 1L), 1L, 0x7A6E3C0DL, 1L, (VECTOR(int32_t, 2))(0x7A6E3C0DL, 1L), (VECTOR(int32_t, 2))(0x7A6E3C0DL, 1L), 0x7A6E3C0DL, 1L, 0x7A6E3C0DL, 1L);
        int16_t l_674 = 0x257CL;
        int64_t l_690 = 6L;
        int i, j;
        l_373 = (void*)0;
        if ((safe_mod_func_int64_t_s_s(0x337D9F5B39C491C5L, (safe_lshift_func_int8_t_s_s((p_25 >= ((safe_unary_minus_func_int16_t_s((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(0x5682L, ((VECTOR(uint16_t, 2))(l_381.xy)), 1UL)).x, ((l_382 != l_382) , 0UL))))) || p_1338->g_38)), 5)))))
        { /* block id: 175 */
            int32_t l_383 = (-4L);
            (*p_1338->g_130) = l_383;
            (*p_1338->g_130) = (l_384[1][7] = l_383);
        }
        else
        { /* block id: 179 */
            uint16_t l_415 = 7UL;
            uint16_t l_450 = 0x4C40L;
            int32_t l_454 = 0x317FB293L;
            int32_t l_455[9] = {0x0E1CB0A9L,7L,0x0E1CB0A9L,0x0E1CB0A9L,7L,0x0E1CB0A9L,0x0E1CB0A9L,7L,0x0E1CB0A9L};
            union U0 *l_482 = &p_1338->g_278;
            VECTOR(uint8_t, 16) l_490 = (VECTOR(uint8_t, 16))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x08L), 0x08L), 0x08L, 253UL, 0x08L, (VECTOR(uint8_t, 2))(253UL, 0x08L), (VECTOR(uint8_t, 2))(253UL, 0x08L), 253UL, 0x08L, 253UL, 0x08L);
            VECTOR(int8_t, 4) l_497 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x62L), 0x62L);
            int i;
            (*p_1338->g_130) = l_381.x;
            for (p_1338->g_328 = 0; (p_1338->g_328 >= (-21)); --p_1338->g_328)
            { /* block id: 183 */
                uint32_t l_449[4][2];
                int32_t l_453[1];
                union U0 *l_481 = &p_1338->g_278;
                uint64_t l_520 = 0UL;
                int32_t *l_532 = (void*)0;
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_449[i][j] = 1UL;
                }
                for (i = 0; i < 1; i++)
                    l_453[i] = 0x19D77180L;
                for (p_1338->g_32 = 0; (p_1338->g_32 <= (-8)); --p_1338->g_32)
                { /* block id: 186 */
                    if ((atomic_inc(&p_1338->l_atomic_input[54]) == 6))
                    { /* block id: 188 */
                        uint8_t l_389 = 0xD9L;
                        int16_t l_392 = 1L;
                        uint16_t l_393 = 0x067AL;
                        int16_t l_394 = 0x68DCL;
                        uint64_t l_395 = 18446744073709551615UL;
                        int32_t l_396 = 0x7A8FC2CBL;
                        ++l_389;
                        l_393 = l_392;
                        l_396 &= (l_395 = l_394);
                        unsigned int result = 0;
                        result += l_389;
                        result += l_392;
                        result += l_393;
                        result += l_394;
                        result += l_395;
                        result += l_396;
                        atomic_add(&p_1338->l_special_values[54], result);
                    }
                    else
                    { /* block id: 193 */
                        (1 + 1);
                    }
                }
                if ((&l_344 != p_1338->g_397))
                { /* block id: 197 */
                    uint32_t *l_413[4][9][7] = {{{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82}},{{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82}},{{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82}},{{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82},{&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82,&p_1338->g_82}}};
                    int32_t l_414[10] = {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L};
                    int64_t *l_421 = &l_344;
                    int32_t l_422 = (-1L);
                    int32_t *l_423 = (void*)0;
                    int32_t *l_424 = &p_1338->g_425[0][0][0];
                    int16_t **l_426[7];
                    int64_t l_456 = 0x0ED9584251EF09D8L;
                    int8_t ***l_476 = &p_1338->g_30;
                    uint64_t l_501 = 0x7704D6E2B8844F93L;
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_426[i] = &p_1338->g_170[7][3];
                    if ((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((l_402[0][0][0] == (((*l_424) = ((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_422 |= (safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(p_25, ((p_25 <= (~((*p_1338->g_130) >= (l_414[6] |= p_25)))) | ((l_415 < (((VECTOR(int16_t, 2))(l_416.s63)).odd & p_1338->g_61)) > (safe_sub_func_int32_t_s_s((~p_25), ((safe_unary_minus_func_uint64_t_u((l_420 != l_421))) , (*p_1338->g_130)))))))), p_25))), p_25)), p_1338->g_51.f0)) ^ p_25)) , l_426[2])), GROUP_DIVERGE(1, 1))), p_25)))
                    { /* block id: 201 */
                        uint32_t l_438 = 0xE5ED362AL;
                        uint16_t *l_451 = (void*)0;
                        uint16_t *l_452 = &p_1338->g_51.f0;
                        (*p_1338->g_130) = ((*p_1338->g_130) ^ (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(p_1338->g_429.sa9f4)).x, ((+(safe_mul_func_uint16_t_u_u(((*l_452) = (safe_add_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((-1L), (safe_mod_func_uint8_t_u_u(l_438, (((*p_1338->g_171) = (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1338->g_439.xxyy)), ((VECTOR(uint16_t, 2))(p_1338->g_440.s58)), 0x8633L, 1UL)).s6 == l_384[1][7])) && (((VECTOR(uint64_t, 2))(p_1338->g_441.s65)).even >= (safe_lshift_func_uint8_t_u_s(l_414[6], l_438)))))))) < (+(safe_lshift_func_int8_t_s_s(((p_25 & ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(6UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_446.xy)).xyyx)).lo)), 65529UL)))).y) > (l_446.w != (l_450 &= (safe_div_func_int16_t_s_s((l_449[3][0] = l_384[1][7]), p_25))))), 5)))), p_25))), p_25))) != 1L))));
                    }
                    else
                    { /* block id: 207 */
                        uint16_t l_457 = 0x6B67L;
                        uint64_t *l_461[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        --l_457;
                        l_453[0] = (l_457 ^ (((((VECTOR(uint32_t, 16))(p_1338->g_460.s22bccbc90ba02ca5)).s3 > (+((p_1338->g_441.s0--) || (((void*)0 != &p_1338->g_51) | 0x3F44L)))) >= (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((p_25 < ((-6L) && (((safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((((l_455[8] , (0x09BDF26C5374C387L > (safe_div_func_int32_t_s_s((((p_25 <= 0x5FL) | 0xAD29L) || p_25), 0x43BDAF81L)))) && p_1338->g_347) <= l_446.y), 5)), 7UL)) || l_381.x) , 4294967292UL))), 11)), 9L))) & p_25));
                    }
                    if ((l_474 != ((*l_476) = l_475)))
                    { /* block id: 213 */
                        return &p_1338->g_31[5];
                    }
                    else
                    { /* block id: 215 */
                        union U0 *l_478 = (void*)0;
                        union U0 **l_477 = &l_478;
                        union U0 *l_480 = &p_1338->g_278;
                        union U0 **l_479[2];
                        int64_t *l_483[10] = {&p_1338->g_328,&p_1338->g_328,&p_1338->g_328,&p_1338->g_328,&p_1338->g_328,&p_1338->g_328,&p_1338->g_328,&p_1338->g_328,&p_1338->g_328,&p_1338->g_328};
                        uint8_t *l_485 = (void*)0;
                        uint8_t *l_486 = &p_1338->g_487;
                        uint8_t *l_488 = (void*)0;
                        int8_t l_498[4];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_479[i] = &l_480;
                        for (i = 0; i < 4; i++)
                            l_498[i] = 0x05L;
                        l_481 = ((*l_477) = &p_1338->g_278);
                        (*l_477) = l_482;
                        l_498[0] = ((l_483[7] == (l_453[0] , l_483[4])) < ((l_455[8] = ((*l_486) ^= ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1338->g_484.sadb6f11a)).s6056051761546324)).s0)) && (p_1338->g_484.se = ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_489.s70)), 0x5EL, 1UL, 255UL, 0x5EL, ((VECTOR(uint8_t, 2))(l_490.s61)).hi, p_25, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 2))(0x6DL, 0x2EL)).yxxxyyxyxxyxyyyy, ((VECTOR(uint8_t, 16))(0x54L, (p_1338->g_35 | l_489.s4), ((safe_mod_func_int32_t_s_s((+l_414[6]), (safe_rshift_func_uint8_t_u_s(((~(safe_lshift_func_uint16_t_u_s((GROUP_DIVERGE(2, 1) == ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_497.xwxzzwyxxzyzyxyx)).s54)), 0x67L, 1L)).xxyzyzzwxzwyyxzx)).s6), 11))) ^ (((*l_477) = &p_1338->g_278) == (void*)0)), p_25)))) != p_1338->g_106.x), 0x11L, ((VECTOR(uint8_t, 2))(0xBEL)), 0x15L, ((VECTOR(uint8_t, 4))(0xE4L)), ((VECTOR(uint8_t, 4))(0UL)), 9UL))))).lo)))).s8)));
                    }
                    l_414[7] |= ((VECTOR(int32_t, 2))(0L, 0x59AC9F51L)).odd;
                    --l_501;
                }
                else
                { /* block id: 227 */
                    uint64_t *l_508 = (void*)0;
                    uint64_t *l_509 = (void*)0;
                    uint64_t *l_510[10][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                    int32_t l_511 = (-4L);
                    int64_t *l_521 = (void*)0;
                    int64_t *l_522 = (void*)0;
                    int64_t *l_523 = &l_499;
                    int32_t l_530 = 7L;
                    int32_t **l_531 = (void*)0;
                    int i, j, k;
                    (*p_1338->g_130) = ((safe_lshift_func_uint16_t_u_u((~(safe_sub_func_uint32_t_u_u((((p_1338->g_441.s6++) <= (safe_lshift_func_int16_t_s_u(p_25, 7))) == (safe_mul_func_uint16_t_u_u((l_529 &= ((~(((*l_523) = (l_455[8] = (((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 8))(p_1338->g_518.s53635013)).s6046475370557272, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_519.ww)), 0x40L, 0x01L)), (l_520 | p_1338->g_357.s5), 0x1CL, (-4L), 0x55L)).s35)).yyxxxxxy)))).s4637555342522352))).sd == l_497.w))) , ((VECTOR(int16_t, 4))(((safe_rshift_func_uint8_t_u_s(l_511, (p_1338->g_39[0] , 0x7AL))) , (((safe_rshift_func_int8_t_s_u((p_25 > (l_528[2] > (*p_1338->g_128))), p_25)) && l_511) , l_520)), 0x636EL, 1L, 0x3A26L)).x)) || (-3L))), l_530))), 0x3A3BB8ACL))), 11)) , l_511);
                    l_532 = (void*)0;
                    (*p_1338->g_130) |= 1L;
                }
                (*p_1338->g_533) = (*p_1338->g_129);
                if (p_25)
                    break;
            }
        }
        for (p_1338->g_61 = 0; (p_1338->g_61 < (-26)); p_1338->g_61--)
        { /* block id: 242 */
            uint64_t *l_543 = (void*)0;
            uint64_t *l_544 = (void*)0;
            uint64_t *l_545 = (void*)0;
            uint64_t *l_546 = (void*)0;
            uint64_t *l_547 = (void*)0;
            int32_t l_548 = 0x530B5C88L;
            int32_t *l_551 = (void*)0;
            VECTOR(int16_t, 8) l_555 = (VECTOR(int16_t, 8))(0x4247L, (VECTOR(int16_t, 4))(0x4247L, (VECTOR(int16_t, 2))(0x4247L, 0L), 0L), 0L, 0x4247L, 0L);
            VECTOR(int16_t, 16) l_556 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x228FL), 0x228FL), 0x228FL, 0L, 0x228FL, (VECTOR(int16_t, 2))(0L, 0x228FL), (VECTOR(int16_t, 2))(0L, 0x228FL), 0L, 0x228FL, 0L, 0x228FL);
            int32_t l_569 = 0L;
            int32_t l_570 = (-3L);
            int32_t l_571 = 1L;
            int32_t l_572[5];
            int i;
            for (i = 0; i < 5; i++)
                l_572[i] = (-5L);
            (**p_1338->g_129) ^= (((safe_rshift_func_int16_t_s_s((p_1338->g_540 == &p_1338->g_541), 3)) >= (((void*)0 != l_354[2][2]) < (p_1338->g_278.f0 | l_542))) ^ (l_548 = p_25));
            for (p_1338->g_355 = 0; (p_1338->g_355 > (-10)); --p_1338->g_355)
            { /* block id: 247 */
                uint16_t *l_552[4];
                VECTOR(int16_t, 8) l_559 = (VECTOR(int16_t, 8))(0x2ACEL, (VECTOR(int16_t, 4))(0x2ACEL, (VECTOR(int16_t, 2))(0x2ACEL, 0x5C6CL), 0x5C6CL), 0x5C6CL, 0x2ACEL, 0x5C6CL);
                int64_t *l_562[9][6][4] = {{{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328}},{{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328}},{{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328}},{{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328}},{{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328}},{{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328}},{{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328}},{{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328}},{{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328},{(void*)0,(void*)0,&p_1338->g_330,&p_1338->g_328}}};
                uint32_t l_563 = 0x7E228B4CL;
                int32_t l_567 = (-5L);
                int32_t l_568[1][3][1];
                int8_t l_573 = (-6L);
                uint8_t *l_579[10][10] = {{&p_1338->g_487,&p_1338->g_487,&p_1338->g_487,(void*)0,&p_1338->g_487,(void*)0,(void*)0,&p_1338->g_487,(void*)0,(void*)0},{&p_1338->g_487,&p_1338->g_487,&p_1338->g_487,(void*)0,&p_1338->g_487,(void*)0,(void*)0,&p_1338->g_487,(void*)0,(void*)0},{&p_1338->g_487,&p_1338->g_487,&p_1338->g_487,(void*)0,&p_1338->g_487,(void*)0,(void*)0,&p_1338->g_487,(void*)0,(void*)0},{&p_1338->g_487,&p_1338->g_487,&p_1338->g_487,(void*)0,&p_1338->g_487,(void*)0,(void*)0,&p_1338->g_487,(void*)0,(void*)0},{&p_1338->g_487,&p_1338->g_487,&p_1338->g_487,(void*)0,&p_1338->g_487,(void*)0,(void*)0,&p_1338->g_487,(void*)0,(void*)0},{&p_1338->g_487,&p_1338->g_487,&p_1338->g_487,(void*)0,&p_1338->g_487,(void*)0,(void*)0,&p_1338->g_487,(void*)0,(void*)0},{&p_1338->g_487,&p_1338->g_487,&p_1338->g_487,(void*)0,&p_1338->g_487,(void*)0,(void*)0,&p_1338->g_487,(void*)0,(void*)0},{&p_1338->g_487,&p_1338->g_487,&p_1338->g_487,(void*)0,&p_1338->g_487,(void*)0,(void*)0,&p_1338->g_487,(void*)0,(void*)0},{&p_1338->g_487,&p_1338->g_487,&p_1338->g_487,(void*)0,&p_1338->g_487,(void*)0,(void*)0,&p_1338->g_487,(void*)0,(void*)0},{&p_1338->g_487,&p_1338->g_487,&p_1338->g_487,(void*)0,&p_1338->g_487,(void*)0,(void*)0,&p_1338->g_487,(void*)0,(void*)0}};
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_552[i] = (void*)0;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_568[i][j][k] = 0x11C4EC54L;
                    }
                }
                (*p_1338->g_130) = (((l_563 = ((((void*)0 != l_551) | (((0x7E85L && (++p_1338->g_51.f0)) < (((((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 2))(3L, 0x3082L)).yxyxyxyy, ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_555.s7520276466600104)).hi)).s2051737160304266))).sa3fd, ((VECTOR(int16_t, 2))(l_556.s8d)).yyxy))), ((VECTOR(int16_t, 2))(l_557.xx)).xyyx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_1338->g_558.yx)).hi, 0L, 0x6427L, ((VECTOR(int16_t, 4))(l_559.s3376)), (-1L), 0x383BL, ((void*)0 != &p_1338->g_278), 0x466FL, 0L, l_559.s6, (((*p_1338->g_130) || (safe_add_func_int64_t_s_s(p_25, p_25))) > 7UL), 0x18C3L, 0x3A5AL)).sae, ((VECTOR(int16_t, 2))((-9L)))))), 0x2117L, (-1L), p_25, p_25, ((VECTOR(int16_t, 8))(0x14D5L)), 0L, 5L)))).s3cb9))).xzwyxwyz))).s3 , &p_1338->g_128) != (void*)0) | 0x689D0A38L)) , p_25)) <= 65535UL)) , (*p_1338->g_171)) & 0x71A5L);
                for (p_1338->g_97 = 0; (p_1338->g_97 == 23); ++p_1338->g_97)
                { /* block id: 253 */
                    int32_t **l_566 = &l_331[0];
                    (*l_566) = &l_384[0][2];
                }
                --l_574[2][1];
                (*p_1338->g_128) = (safe_mod_func_uint8_t_u_u((p_1338->g_484.s8 = FAKE_DIVERGE(p_1338->global_1_offset, get_global_id(1), 10)), (+(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(1UL, 0x9111L)).xxyxyxxx)).s43)).yyxxxxxyxxxxyyxx)).sa6)).even >= (&l_341[2] != (void*)0)))));
            }
        }
        for (p_1338->g_152 = (-21); (p_1338->g_152 >= (-11)); ++p_1338->g_152)
        { /* block id: 263 */
            VECTOR(int32_t, 2) l_586 = (VECTOR(int32_t, 2))(0L, 0x57A5DAB9L);
            int32_t *l_600 = &p_1338->g_39[0];
            VECTOR(uint64_t, 8) l_628 = (VECTOR(uint64_t, 8))(0x9DD79DFA1BAB22E0L, (VECTOR(uint64_t, 4))(0x9DD79DFA1BAB22E0L, (VECTOR(uint64_t, 2))(0x9DD79DFA1BAB22E0L, 1UL), 1UL), 1UL, 0x9DD79DFA1BAB22E0L, 1UL);
            int32_t l_636 = 0x6A8B3CE5L;
            VECTOR(uint16_t, 4) l_643 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL);
            int i;
            (*p_1338->g_128) ^= ((safe_lshift_func_int8_t_s_u(((**l_475) = (p_25 < ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x2B3F63CAL, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))((safe_rshift_func_uint16_t_u_u(p_1338->g_106.x, 9)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x79219ACFL, (-8L))), 0x1806183BL, 0x7B07F95AL)), ((VECTOR(int32_t, 2))(l_586.yy)), 0x7AC715E6L)).s51, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(l_587.ww)).xxxy, ((VECTOR(int32_t, 16))(l_588.yyyxxxyxxxyxxxyy)).sb28a))).even))), ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x5FBC76B8L, (-1L))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x2203D1D2L, 0x62F0A468L)))), 0L, 0x21BD9E7BL)), 0x1E5B1F2FL, 0x5D252F02L)).s02, ((VECTOR(int32_t, 16))(l_589.xxyzxwwxwyyywzyx)).s66))), (-10L), 0x2930A2FEL)), ((VECTOR(int32_t, 8))(((*p_1338->g_130) |= (safe_lshift_func_uint8_t_u_u(p_1338->g_460.sc, (safe_mod_func_uint64_t_u_u(((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((((l_600 = l_600) == (void*)0) < ((l_606 |= (safe_mul_func_uint16_t_u_u(((~p_25) || (l_603 == (void*)0)), (safe_div_func_int16_t_s_s(p_25, GROUP_DIVERGE(2, 1)))))) < l_574[0][2])), p_25)), 1UL)), 7L)) | 0L), p_25))))), 0x43AF183EL, ((VECTOR(int32_t, 4))((-2L))), 9L, 0x3436CC86L)).lo))).lo))), 0x7EED4D73L)).yxwxxywyxwyxwwzy)).s6)), 3)) != p_25);
        }
    }
    else
    { /* block id: 314 */
        if ((atomic_inc(&p_1338->g_atomic_input[69 * get_linear_group_id() + 11]) == 5))
        { /* block id: 316 */
            int32_t l_702 = 0L;
            int32_t l_703 = 0x66AF8709L;
            uint32_t l_704[9] = {0x5AB4A1D8L,1UL,0x5AB4A1D8L,0x5AB4A1D8L,1UL,0x5AB4A1D8L,0x5AB4A1D8L,1UL,0x5AB4A1D8L};
            uint32_t l_705 = 0x0F73C50BL;
            int i;
            l_704[0] |= (l_703 = l_702);
            l_705 = (-10L);
            unsigned int result = 0;
            result += l_702;
            result += l_703;
            int l_704_i0;
            for (l_704_i0 = 0; l_704_i0 < 9; l_704_i0++) {
                result += l_704[l_704_i0];
            }
            result += l_705;
            atomic_add(&p_1338->g_special_values[69 * get_linear_group_id() + 11], result);
        }
        else
        { /* block id: 320 */
            (1 + 1);
        }
        for (p_1338->g_487 = (-7); (p_1338->g_487 <= 44); ++p_1338->g_487)
        { /* block id: 325 */
            (*p_1338->g_130) ^= 0L;
        }
    }
    return l_474;
}


/* ------------------------------------------ */
/* 
 * reads : p_1338->g_32 p_1338->g_12 p_1338->l_comm_values p_1338->g_51 p_1338->g_51.f0 p_1338->g_82 p_1338->g_39 p_1338->g_77 p_1338->g_93 p_1338->g_comm_values p_1338->g_103 p_1338->g_106 p_1338->g_122 p_1338->g_97 p_1338->g_128 p_1338->g_129 p_1338->g_61 p_1338->g_130 p_1338->g_177 p_1338->g_255 p_1338->g_278 p_1338->g_171
 * writes: p_1338->g_32 p_1338->g_39 p_1338->g_51.f0 p_1338->g_82 p_1338->g_77 p_1338->g_97 p_1338->g_130 p_1338->g_61 p_1338->g_comm_values p_1338->g_170 p_1338->g_171 p_1338->g_177 p_1338->g_122
 */
int64_t  func_26(int8_t ** p_27, struct S2 * p_1338)
{ /* block id: 11 */
    uint16_t l_42 = 0x7003L;
    VECTOR(int32_t, 8) l_120 = (VECTOR(int32_t, 8))(0x40744711L, (VECTOR(int32_t, 4))(0x40744711L, (VECTOR(int32_t, 2))(0x40744711L, (-8L)), (-8L)), (-8L), 0x40744711L, (-8L));
    int32_t l_125 = 0x6BD07DBCL;
    uint32_t *l_321 = &p_1338->g_97;
    int64_t l_322 = (-5L);
    int32_t **l_324 = (void*)0;
    int32_t **l_325 = &p_1338->g_130;
    uint8_t l_326 = 8UL;
    int i;
    for (p_1338->g_32 = 22; (p_1338->g_32 <= (-13)); p_1338->g_32--)
    { /* block id: 14 */
        VECTOR(uint16_t, 8) l_67 = (VECTOR(uint16_t, 8))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0x374FL), 0x374FL), 0x374FL, 65528UL, 0x374FL);
        VECTOR(int64_t, 16) l_318 = (VECTOR(int64_t, 16))(0x31D8BF52172798D1L, (VECTOR(int64_t, 4))(0x31D8BF52172798D1L, (VECTOR(int64_t, 2))(0x31D8BF52172798D1L, 0x489FE4952E4AD3AEL), 0x489FE4952E4AD3AEL), 0x489FE4952E4AD3AEL, 0x31D8BF52172798D1L, 0x489FE4952E4AD3AEL, (VECTOR(int64_t, 2))(0x31D8BF52172798D1L, 0x489FE4952E4AD3AEL), (VECTOR(int64_t, 2))(0x31D8BF52172798D1L, 0x489FE4952E4AD3AEL), 0x31D8BF52172798D1L, 0x489FE4952E4AD3AEL, 0x31D8BF52172798D1L, 0x489FE4952E4AD3AEL);
        int8_t *l_319 = &p_1338->g_122;
        uint32_t *l_320 = (void*)0;
        int32_t *l_323 = &p_1338->g_39[0];
        int i;
        for (p_1338->g_39[0] = (-11); (p_1338->g_39[0] >= 1); p_1338->g_39[0] = safe_add_func_uint8_t_u_u(p_1338->g_39[0], 8))
        { /* block id: 17 */
            int16_t l_57 = 1L;
            int16_t *l_60[5];
            int32_t l_62 = (-6L);
            int32_t l_63[7] = {0x7732ACAFL,0x7732ACAFL,0x7732ACAFL,0x7732ACAFL,0x7732ACAFL,0x7732ACAFL,0x7732ACAFL};
            VECTOR(int16_t, 16) l_64 = (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), (-7L)), (-7L)), (-7L), (-9L), (-7L), (VECTOR(int16_t, 2))((-9L), (-7L)), (VECTOR(int16_t, 2))((-9L), (-7L)), (-9L), (-7L), (-9L), (-7L));
            int8_t *l_70 = &p_1338->g_12[4];
            uint16_t *l_111 = &l_42;
            int32_t l_121 = 9L;
            int32_t *l_123 = &p_1338->g_77;
            int32_t *l_124[10][9][2] = {{{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]}},{{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]}},{{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]}},{{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]}},{{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]}},{{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]}},{{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]}},{{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]}},{{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]}},{{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]},{&p_1338->g_39[0],&p_1338->g_39[0]}}};
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_60[i] = &p_1338->g_61;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1338->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 40)), permutations[(safe_mod_func_uint32_t_u_u((l_42 , ((safe_rshift_func_uint8_t_u_s((func_45(p_1338->g_12[1], p_1338->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1338->tid, 40))], (p_1338->g_51 , func_52(((((l_120.s2 = ((*l_123) = ((((safe_div_func_uint64_t_u_u(l_57, (safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 8))((l_63[1] = (l_62 |= 1L)), ((VECTOR(int16_t, 4))(l_64.seb6b)), 0x6F59L, 2L, (-9L))).s6, 7)))) & ((((l_121 = (((safe_add_func_int16_t_s_s((((VECTOR(uint16_t, 4))(l_67.s1656)).w | func_68(l_70, p_1338)), (((((VECTOR(int32_t, 4))(p_1338->g_106.wzzz)).w , ((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s((++(*l_111)), ((safe_mod_func_int16_t_s_s((((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((-4L) | l_67.s7), l_120.s7)), l_120.s4)) & p_1338->g_12[1]) & 0x1760249FL), 0xA145L)) & FAKE_DIVERGE(p_1338->group_0_offset, get_group_id(0), 10)))), 0x69BDCB58CEABDB12L)) | l_67.s6)) , 18446744073709551610UL) == p_1338->g_39[0]))) & l_67.s3) , l_64.sd)) != p_1338->g_39[0]) || (-1L)) , 0x042B3FC87B302CBCL)) > p_1338->g_122) || p_1338->g_39[0]))) > l_125) , p_1338->g_51.f0) , FAKE_DIVERGE(p_1338->local_2_offset, get_local_id(2), 10)), p_27, p_1338)), p_1338->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1338->tid, 40))], l_125, p_1338) , 0x8CL), l_125)) ^ 6L)), 10))][(safe_mod_func_uint32_t_u_u(p_1338->tid, 40))]));
        }
        (*l_323) ^= (l_120.s2 | (safe_lshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((-2L) & ((*p_1338->g_171) = ((safe_mul_func_int8_t_s_s(l_67.s5, p_1338->g_12[1])) && ((safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u((0x01D57BBE8912F01AL <= ((((*l_319) = l_318.s1) > ((l_320 = &p_1338->g_97) != l_321)) & l_42)), l_120.s3)), l_322)) , l_318.s0)))), (-9L))), (-8L))), 11)));
    }
    (*l_325) = (*p_1338->g_255);
    return l_326;
}


/* ------------------------------------------ */
/* 
 * reads : p_1338->g_32 p_1338->g_177 p_1338->g_255 p_1338->g_82 p_1338->g_77 p_1338->g_278 p_1338->g_122 p_1338->g_129 p_1338->g_130 p_1338->g_39 p_1338->l_comm_values p_1338->g_93 p_1338->g_97
 * writes: p_1338->g_comm_values p_1338->g_77 p_1338->g_170 p_1338->g_171 p_1338->g_82 p_1338->g_177 p_1338->g_130 p_1338->g_122
 */
union U0  func_45(uint32_t  p_46, int64_t  p_47, union U0  p_48, int32_t  p_49, uint64_t  p_50, struct S2 * p_1338)
{ /* block id: 48 */
    int32_t *l_135 = &p_1338->g_77;
    int32_t *l_136 = &p_1338->g_77;
    int32_t *l_137 = &p_1338->g_77;
    int32_t *l_138 = &p_1338->g_77;
    int32_t *l_139 = &p_1338->g_77;
    int32_t *l_140 = &p_1338->g_77;
    int32_t *l_141 = (void*)0;
    int32_t *l_142 = &p_1338->g_77;
    int32_t l_143[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
    int32_t *l_144 = (void*)0;
    int32_t *l_145 = (void*)0;
    int32_t *l_146 = &l_143[0];
    int32_t *l_147 = &p_1338->g_77;
    int32_t *l_148 = &p_1338->g_77;
    int32_t *l_149[7];
    int32_t l_150 = 0x39E76076L;
    int8_t l_151 = (-1L);
    int32_t l_153 = 0x058EA000L;
    uint32_t l_154 = 0xD83069D1L;
    int64_t *l_165 = (void*)0;
    int64_t *l_166 = (void*)0;
    int64_t *l_167[7][3][1] = {{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0}}};
    int16_t *l_169[6] = {&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61};
    int16_t **l_168[5];
    VECTOR(uint32_t, 16) l_172 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x62254FA0L), 0x62254FA0L), 0x62254FA0L, 4294967295UL, 0x62254FA0L, (VECTOR(uint32_t, 2))(4294967295UL, 0x62254FA0L), (VECTOR(uint32_t, 2))(4294967295UL, 0x62254FA0L), 4294967295UL, 0x62254FA0L, 4294967295UL, 0x62254FA0L);
    union U1 l_173[5] = {{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}};
    union U1 *l_174 = &l_173[1];
    uint32_t *l_175 = (void*)0;
    uint32_t *l_176 = &p_1338->g_82;
    uint32_t *l_178 = &p_1338->g_97;
    int64_t l_183 = 6L;
    VECTOR(int64_t, 16) l_291 = (VECTOR(int64_t, 16))(0x7A541254BD4C1ED8L, (VECTOR(int64_t, 4))(0x7A541254BD4C1ED8L, (VECTOR(int64_t, 2))(0x7A541254BD4C1ED8L, 5L), 5L), 5L, 0x7A541254BD4C1ED8L, 5L, (VECTOR(int64_t, 2))(0x7A541254BD4C1ED8L, 5L), (VECTOR(int64_t, 2))(0x7A541254BD4C1ED8L, 5L), 0x7A541254BD4C1ED8L, 5L, 0x7A541254BD4C1ED8L, 5L);
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_149[i] = &l_143[0];
    for (i = 0; i < 5; i++)
        l_168[i] = &l_169[2];
    l_154++;
    if ((((&p_1338->g_61 == ((safe_lshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(p_1338->g_32, 0x2BL)) || ((*l_135) = (p_1338->g_comm_values[p_1338->tid] = ((VECTOR(int64_t, 2))(0x57F9CDE626CCDBE3L, (-9L))).odd))), 7)), 65535UL)), 5)) , (p_1338->g_171 = (p_1338->g_170[3][3] = &p_1338->g_61)))) == ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_172.s224bade5)).s60)).odd) != (p_49 && (((*l_174) = l_173[1]) , ((p_1338->g_177 |= ((*l_176) = 0xDD866749L)) == (((l_178 = l_138) != (void*)0) || 0x0DL))))))
    { /* block id: 58 */
        int32_t l_179 = (-1L);
        int32_t l_180 = (-3L);
        int32_t l_181 = 0x01E74730L;
        VECTOR(int32_t, 8) l_182 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-3L)), (-3L)), (-3L), (-2L), (-3L));
        uint32_t l_184 = 0x04882251L;
        int i;
        --l_184;
    }
    else
    { /* block id: 60 */
        int32_t *l_254 = &p_1338->g_39[0];
        int32_t l_269[2];
        int8_t l_274[9] = {9L,0x63L,9L,9L,0x63L,9L,9L,0x63L,9L};
        VECTOR(int64_t, 4) l_287 = (VECTOR(int64_t, 4))(0x2AB0935991800EE5L, (VECTOR(int64_t, 2))(0x2AB0935991800EE5L, 0x7AA04FEC6CF75A4EL), 0x7AA04FEC6CF75A4EL);
        VECTOR(int16_t, 8) l_301 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
        int i;
        for (i = 0; i < 2; i++)
            l_269[i] = 0x74458C41L;
        if ((atomic_inc(&p_1338->l_atomic_input[48]) == 6))
        { /* block id: 62 */
            int16_t l_187 = 0x7AD5L;
            if (l_187)
            { /* block id: 63 */
                int16_t l_188 = 0x57D0L;
                uint32_t l_189 = 0x862802A2L;
                int32_t l_190 = 0x617C192CL;
                l_188 = 1L;
                l_190 ^= l_189;
                for (l_188 = 21; (l_188 <= 19); l_188 = safe_sub_func_int64_t_s_s(l_188, 7))
                { /* block id: 68 */
                    int32_t l_193 = 0x77B8EFAEL;
                    int32_t *l_198 = &l_193;
                    for (l_193 = 12; (l_193 != 27); ++l_193)
                    { /* block id: 71 */
                        uint64_t l_196 = 18446744073709551615UL;
                        uint64_t l_197 = 0x61EE534A33099370L;
                        l_197 = (l_196 ^= (l_190 = 0x7D80D04DL));
                    }
                    l_190 = 0L;
                    l_198 = (void*)0;
                }
                for (l_188 = 13; (l_188 >= 10); --l_188)
                { /* block id: 81 */
                    VECTOR(int32_t, 8) l_201 = (VECTOR(int32_t, 8))(0x4C5E2536L, (VECTOR(int32_t, 4))(0x4C5E2536L, (VECTOR(int32_t, 2))(0x4C5E2536L, (-2L)), (-2L)), (-2L), 0x4C5E2536L, (-2L));
                    VECTOR(int32_t, 4) l_202 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2CEF2413L), 0x2CEF2413L);
                    VECTOR(int32_t, 2) l_203 = (VECTOR(int32_t, 2))(0x3ACA0825L, (-4L));
                    VECTOR(int32_t, 16) l_204 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5F02C762L), 0x5F02C762L), 0x5F02C762L, 0L, 0x5F02C762L, (VECTOR(int32_t, 2))(0L, 0x5F02C762L), (VECTOR(int32_t, 2))(0L, 0x5F02C762L), 0L, 0x5F02C762L, 0L, 0x5F02C762L);
                    VECTOR(int32_t, 16) l_205 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x4F5F04EFL), 0x4F5F04EFL), 0x4F5F04EFL, (-2L), 0x4F5F04EFL, (VECTOR(int32_t, 2))((-2L), 0x4F5F04EFL), (VECTOR(int32_t, 2))((-2L), 0x4F5F04EFL), (-2L), 0x4F5F04EFL, (-2L), 0x4F5F04EFL);
                    VECTOR(int32_t, 2) l_206 = (VECTOR(int32_t, 2))(0x2EB4F23BL, 0x47D02341L);
                    VECTOR(int32_t, 16) l_207 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7C6C2859L), 0x7C6C2859L), 0x7C6C2859L, (-1L), 0x7C6C2859L, (VECTOR(int32_t, 2))((-1L), 0x7C6C2859L), (VECTOR(int32_t, 2))((-1L), 0x7C6C2859L), (-1L), 0x7C6C2859L, (-1L), 0x7C6C2859L);
                    VECTOR(int32_t, 4) l_208 = (VECTOR(int32_t, 4))(0x3819E399L, (VECTOR(int32_t, 2))(0x3819E399L, 0x5BF35C4BL), 0x5BF35C4BL);
                    VECTOR(int32_t, 8) l_209 = (VECTOR(int32_t, 8))(0x0EA519D7L, (VECTOR(int32_t, 4))(0x0EA519D7L, (VECTOR(int32_t, 2))(0x0EA519D7L, 0x40A50456L), 0x40A50456L), 0x40A50456L, 0x0EA519D7L, 0x40A50456L);
                    VECTOR(int32_t, 4) l_210 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x7F1478E5L), 0x7F1478E5L);
                    uint16_t l_211 = 0xFBCFL;
                    VECTOR(int32_t, 4) l_212 = (VECTOR(int32_t, 4))(0x5492CE9EL, (VECTOR(int32_t, 2))(0x5492CE9EL, 0x05F3FDA1L), 0x05F3FDA1L);
                    VECTOR(int32_t, 4) l_213 = (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x30C2D3A3L), 0x30C2D3A3L);
                    VECTOR(int32_t, 2) l_214 = (VECTOR(int32_t, 2))(1L, 1L);
                    VECTOR(int32_t, 16) l_215 = (VECTOR(int32_t, 16))(0x43BA4103L, (VECTOR(int32_t, 4))(0x43BA4103L, (VECTOR(int32_t, 2))(0x43BA4103L, (-7L)), (-7L)), (-7L), 0x43BA4103L, (-7L), (VECTOR(int32_t, 2))(0x43BA4103L, (-7L)), (VECTOR(int32_t, 2))(0x43BA4103L, (-7L)), 0x43BA4103L, (-7L), 0x43BA4103L, (-7L));
                    VECTOR(int32_t, 16) l_216 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 5L), 5L), 5L, 1L, 5L, (VECTOR(int32_t, 2))(1L, 5L), (VECTOR(int32_t, 2))(1L, 5L), 1L, 5L, 1L, 5L);
                    uint32_t l_217[6];
                    VECTOR(int32_t, 16) l_218 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), (-4L)), (-4L)), (-4L), (-9L), (-4L), (VECTOR(int32_t, 2))((-9L), (-4L)), (VECTOR(int32_t, 2))((-9L), (-4L)), (-9L), (-4L), (-9L), (-4L));
                    VECTOR(int32_t, 2) l_219 = (VECTOR(int32_t, 2))(0x54FC9AF3L, 0x486F4876L);
                    int8_t l_220 = 0x6FL;
                    uint32_t l_221 = 0x96369D72L;
                    uint16_t l_222[7][4];
                    int32_t l_223 = 7L;
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_217[i] = 0xD211742DL;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_222[i][j] = 65535UL;
                    }
                    l_223 ^= (l_222[4][3] = ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x2417AC62L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_201.s75540467)).s06)), 2L, ((VECTOR(int32_t, 2))(l_202.zw)), ((VECTOR(int32_t, 4))(l_203.yxyy)).y, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_204.s2186)).wzwxxwyw)), 0x77037FAAL)).sf371)), 0L, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(0x1459DAEEL, ((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))((-8L), (-1L))).yyxxyyyy, ((VECTOR(int32_t, 8))(l_205.sc569b542)), ((VECTOR(int32_t, 4))(l_206.yxxy)).wxxzzzwy))))).s3, (-10L), 0x3F5C90A4L)), 0L, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_207.s9983)).hi)).xxxy)).xyyzxwxx, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 4))(l_208.xwwz)).yywyzyww, (int32_t)(l_190 = ((VECTOR(int32_t, 16))(l_209.s2526305351024107)).s7), (int32_t)0x76EB00A5L)))))), 2L, 0x76400BEAL)).s74, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, (-1L))))).odd, ((VECTOR(int32_t, 2))(l_210.zw)), l_211, (-1L), (l_190 &= ((VECTOR(int32_t, 4))(l_212.xzww)).z), ((VECTOR(int32_t, 2))(l_213.xz)), 0x64AEF053L, (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_214.xxxy)))), 0x72BB2E11L, 0x358BB86AL)).s01))).yyyx, ((VECTOR(int32_t, 2))(0x33F0FD0DL, 0x3C6D1B6CL)).yxxy))), ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(4L, 0x0B442124L, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0x4264617AL, 1L)), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_215.sa0b42b69)).s3370737437533310)).se590, ((VECTOR(int32_t, 2))(0x3D9598FAL, 0x4CDEC9CAL)).xxxy))).odd, ((VECTOR(int32_t, 8))(l_216.s1f58a265)).s45))).yxxx, (int32_t)l_217[5]))).ywzyxzyw, ((VECTOR(int32_t, 8))((-3L), 0x650D5279L, 0x0C49F85FL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_218.sd6)).yxxyxxxx)).hi)).lo)), 1L, 6L, 0L)), ((VECTOR(int32_t, 8))(l_219.xxxxyyxy))))), (-8L), ((VECTOR(int32_t, 8))((l_202.w |= l_220), 0x4BE1CA60L, (-1L), (-7L), 0x67D67424L, 0x31D1E02FL, (-1L), 1L)).s6, l_221, 0L, 0x680CA302L, 4L)).even)).s60)))).yyxy, ((VECTOR(int32_t, 4))((-1L)))))).zyzwzyww, ((VECTOR(int32_t, 8))(0x40663DD0L)), ((VECTOR(int32_t, 8))((-2L)))))).even))), ((VECTOR(int32_t, 2))(6L)), ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0x5D07A912L)), 0x179949B4L)).sf0)).yyyyyxxy, ((VECTOR(int32_t, 8))(0x54250EAFL))))).s5);
                    l_216.sb ^= 0L;
                }
            }
            else
            { /* block id: 89 */
                uint64_t l_224 = 18446744073709551614UL;
                int32_t l_225 = 0L;
                VECTOR(int32_t, 4) l_226 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x1D2613B3L), 0x1D2613B3L);
                int32_t l_227 = 0x7113D22CL;
                uint32_t l_228 = 4294967291UL;
                VECTOR(int32_t, 8) l_244 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x1B900C28L), 0x1B900C28L), 0x1B900C28L, (-6L), 0x1B900C28L);
                int8_t l_245 = 0x40L;
                VECTOR(int32_t, 4) l_246 = (VECTOR(int32_t, 4))(0x447242F9L, (VECTOR(int32_t, 2))(0x447242F9L, 0x7A3DEA62L), 0x7A3DEA62L);
                VECTOR(int32_t, 2) l_247 = (VECTOR(int32_t, 2))(0x09E747BBL, 0x689C62AAL);
                uint16_t l_248 = 0UL;
                VECTOR(int32_t, 8) l_249 = (VECTOR(int32_t, 8))(0x2101A90AL, (VECTOR(int32_t, 4))(0x2101A90AL, (VECTOR(int32_t, 2))(0x2101A90AL, (-1L)), (-1L)), (-1L), 0x2101A90AL, (-1L));
                uint32_t l_250 = 0xE47C7F3CL;
                uint8_t l_251[9];
                int8_t l_252[3][8][6] = {{{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)}},{{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)}},{{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)},{0x6BL,0x23L,0x3AL,(-10L),0x23L,(-10L)}}};
                int8_t l_253[10][1][3] = {{{9L,9L,1L}},{{9L,9L,1L}},{{9L,9L,1L}},{{9L,9L,1L}},{{9L,9L,1L}},{{9L,9L,1L}},{{9L,9L,1L}},{{9L,9L,1L}},{{9L,9L,1L}},{{9L,9L,1L}}};
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_251[i] = 248UL;
                l_225 = l_224;
                l_227 |= ((VECTOR(int32_t, 4))(l_226.xxyx)).w;
                if (l_228)
                { /* block id: 92 */
                    uint8_t l_231 = 255UL;
                    uint32_t l_232 = 1UL;
                    int8_t l_237 = 0x64L;
                    int8_t *l_236 = &l_237;
                    int8_t **l_235 = &l_236;
                    l_226.y |= ((++l_224) , l_231);
                    l_235 = ((++l_232) , (void*)0);
                }
                else
                { /* block id: 97 */
                    int32_t l_239 = 0x3D1D7D04L;
                    int32_t *l_238 = &l_239;
                    uint32_t l_240 = 0UL;
                    int32_t l_243 = 0x3D86BD46L;
                    l_238 = (void*)0;
                    ++l_240;
                    l_226.w ^= l_243;
                }
                l_253[6][0][1] ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_244.s73772154)), ((VECTOR(int32_t, 4))((l_245 &= 0L), 0x146579B1L, 1L, 0x786ED6AAL)).yyxxxxzx, ((VECTOR(int32_t, 2))(l_246.xy)).xxyyyxxx))).s54))), ((VECTOR(int32_t, 16))(l_247.xyxyxxyyxyxyxyyx)).s35))), l_248, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x7DD7758BL, (-9L))).xyyx)), 0x0FEFC58FL, ((VECTOR(int32_t, 2))(l_249.s44)), 0L, (l_251[4] = (l_250 = 0L)), l_252[1][3][4], 0x725888DAL, 1L, 0x22DE3F50L)).s9;
            }
            unsigned int result = 0;
            result += l_187;
            atomic_add(&p_1338->l_special_values[48], result);
        }
        else
        { /* block id: 107 */
            (1 + 1);
        }
        (*p_1338->g_255) = l_254;
        for (p_1338->g_82 = 21; (p_1338->g_82 > 28); ++p_1338->g_82)
        { /* block id: 113 */
            int32_t *l_260 = &l_143[0];
            int32_t l_263 = (-4L);
            int32_t l_268[10][3] = {{0x3B5BA0EBL,0x3B5BA0EBL,0x3B5BA0EBL},{0x3B5BA0EBL,0x3B5BA0EBL,0x3B5BA0EBL},{0x3B5BA0EBL,0x3B5BA0EBL,0x3B5BA0EBL},{0x3B5BA0EBL,0x3B5BA0EBL,0x3B5BA0EBL},{0x3B5BA0EBL,0x3B5BA0EBL,0x3B5BA0EBL},{0x3B5BA0EBL,0x3B5BA0EBL,0x3B5BA0EBL},{0x3B5BA0EBL,0x3B5BA0EBL,0x3B5BA0EBL},{0x3B5BA0EBL,0x3B5BA0EBL,0x3B5BA0EBL},{0x3B5BA0EBL,0x3B5BA0EBL,0x3B5BA0EBL},{0x3B5BA0EBL,0x3B5BA0EBL,0x3B5BA0EBL}};
            int32_t l_272 = 2L;
            int16_t l_273 = 0x3378L;
            int i, j;
            for (p_1338->g_177 = (-15); (p_1338->g_177 >= 8); p_1338->g_177 = safe_add_func_int64_t_s_s(p_1338->g_177, 2))
            { /* block id: 116 */
                int16_t l_267 = 0L;
                int32_t l_270[5][7] = {{0L,3L,0x5EBCA2F6L,0x2A01F83AL,0x5EBCA2F6L,3L,0L},{0L,3L,0x5EBCA2F6L,0x2A01F83AL,0x5EBCA2F6L,3L,0L},{0L,3L,0x5EBCA2F6L,0x2A01F83AL,0x5EBCA2F6L,3L,0L},{0L,3L,0x5EBCA2F6L,0x2A01F83AL,0x5EBCA2F6L,3L,0L},{0L,3L,0x5EBCA2F6L,0x2A01F83AL,0x5EBCA2F6L,3L,0L}};
                uint32_t l_275 = 0x30E46948L;
                int i, j;
                l_260 = l_260;
                for (p_1338->g_77 = 25; (p_1338->g_77 != (-3)); --p_1338->g_77)
                { /* block id: 120 */
                    uint64_t l_264 = 0xFD6F986E3EFCD1EFL;
                    --l_264;
                }
                --l_275;
            }
            return p_1338->g_278;
        }
        for (l_154 = 0; (l_154 >= 56); l_154++)
        { /* block id: 129 */
            VECTOR(int16_t, 16) l_300 = (VECTOR(int16_t, 16))(0x4395L, (VECTOR(int16_t, 4))(0x4395L, (VECTOR(int16_t, 2))(0x4395L, (-4L)), (-4L)), (-4L), 0x4395L, (-4L), (VECTOR(int16_t, 2))(0x4395L, (-4L)), (VECTOR(int16_t, 2))(0x4395L, (-4L)), 0x4395L, (-4L), 0x4395L, (-4L));
            VECTOR(uint16_t, 16) l_302 = (VECTOR(uint16_t, 16))(0xFB30L, (VECTOR(uint16_t, 4))(0xFB30L, (VECTOR(uint16_t, 2))(0xFB30L, 0x8A4CL), 0x8A4CL), 0x8A4CL, 0xFB30L, 0x8A4CL, (VECTOR(uint16_t, 2))(0xFB30L, 0x8A4CL), (VECTOR(uint16_t, 2))(0xFB30L, 0x8A4CL), 0xFB30L, 0x8A4CL, 0xFB30L, 0x8A4CL);
            int i;
            for (p_1338->g_122 = 0; (p_1338->g_122 > (-9)); p_1338->g_122--)
            { /* block id: 132 */
                int16_t l_288 = 0x5949L;
                VECTOR(int64_t, 4) l_290 = (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0L), 0L);
                int32_t l_303 = (-9L);
                int i;
                for (p_1338->g_77 = 29; (p_1338->g_77 <= 13); --p_1338->g_77)
                { /* block id: 135 */
                    VECTOR(int32_t, 2) l_289 = (VECTOR(int32_t, 2))(0L, 0x66200026L);
                    int i;
                    for (p_49 = 0; (p_49 <= 20); p_49 = safe_add_func_uint32_t_u_u(p_49, 5))
                    { /* block id: 138 */
                        VECTOR(int64_t, 8) l_292 = (VECTOR(int64_t, 8))(0x6C202C7D74502A24L, (VECTOR(int64_t, 4))(0x6C202C7D74502A24L, (VECTOR(int64_t, 2))(0x6C202C7D74502A24L, 0x33517161496DCF6CL), 0x33517161496DCF6CL), 0x33517161496DCF6CL, 0x6C202C7D74502A24L, 0x33517161496DCF6CL);
                        int32_t *l_297 = &l_150;
                        int i;
                        (*l_146) = (**p_1338->g_129);
                        l_303 |= (((1UL && (((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 16))(l_287.xzyyzwxzxwxzyzyw)).sf7e6, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 8))((l_288 , (0x0FBC69C0L || ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_289.xyxy)).zxyyzxyywzzyyxyz)).sf8)).yxxxxyyy, (int32_t)0L))).s1)), ((VECTOR(int64_t, 4))(0x036B82D73AC75DE7L, ((VECTOR(int64_t, 2))(l_290.zy)), 0x3DA31DF79AB40D9EL)), 0x5B1226E4302D5DE0L, 1L, 2L)).s6604123131123261, ((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 2))(0x10319A3A14F01B35L, 0x324F04A6633254CCL)).xxxyxxxxyyxyxyyx, ((VECTOR(int64_t, 2))(0x4449F41A8DC9BF69L, 0x135395F9D7A9E933L)).xxxxyyyxxxxxyxyy)))))))))), (int64_t)(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 16))(l_291.sf293081e0be7e84c)).se5, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 8))((-3L), ((VECTOR(int64_t, 4))(l_292.s3572)), 0L, 0x18DD72A36789D094L, 3L)).s5651105633471617, (int64_t)((safe_rshift_func_int8_t_s_s(((((*l_297) = (safe_rshift_func_uint16_t_u_s(0x869BL, 4))) , (safe_sub_func_int16_t_s_s(((((-1L) == ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(8L, 1L)).xxxxyxyyyxyyyxyy)).odd, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 4))(l_300.sbec4)), ((VECTOR(int16_t, 4))(1L, 1L, 7L, 0x59E9L))))).ywwwxwwyxxywzxyy)).hi)).s4430517330603411, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_301.s70)))).yxyxyyxxxxyxxxyx))))).lo))).s4) , p_1338->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1338->tid, 40))]) && (0xEB450046D7A7EDF8L == 0x3EC56A0ECFCCA987L)), p_1338->g_93.z))) | (*l_254)), p_49)) > l_302.sc)))).hi)))).s15, ((VECTOR(int64_t, 2))(0x0238058F8437671BL))))), 0x71F5BB7B7C7D884CL, 0x007CDD1351F54939L)).z , p_1338->g_97), (int64_t)0x094B7E856943158BL))))).s2c43, ((VECTOR(int64_t, 4))(0x1A4592A39A75B88AL))))).z || l_300.s1)) < FAKE_DIVERGE(p_1338->group_2_offset, get_group_id(2), 10)) ^ (*l_254));
                    }
                    return p_1338->g_278;
                }
            }
        }
    }
    return p_48;
}


/* ------------------------------------------ */
/* 
 * reads : p_1338->g_97 p_1338->g_128 p_1338->g_77 p_1338->g_129 p_1338->g_61 p_1338->g_130
 * writes: p_1338->g_77 p_1338->g_130 p_1338->g_61
 */
union U0  func_52(uint16_t  p_53, int8_t ** p_54, struct S2 * p_1338)
{ /* block id: 39 */
    int8_t l_126 = 0x34L;
    int8_t **l_127 = &p_1338->g_31[5];
    union U0 l_134 = {4294967294UL};
    (*p_1338->g_128) &= (((p_1338->g_97 & l_126) , p_54) == l_127);
    (*p_1338->g_129) = &p_1338->g_39[0];
    for (p_1338->g_61 = 25; (p_1338->g_61 == (-2)); p_1338->g_61 = safe_sub_func_uint8_t_u_u(p_1338->g_61, 3))
    { /* block id: 44 */
        int32_t **l_133 = &p_1338->g_130;
        (*l_133) = (*p_1338->g_129);
    }
    return l_134;
}


/* ------------------------------------------ */
/* 
 * reads : p_1338->g_51.f0 p_1338->g_82 p_1338->g_39 p_1338->g_77 p_1338->g_93 p_1338->g_12 p_1338->g_comm_values p_1338->g_103
 * writes: p_1338->g_51.f0 p_1338->g_82 p_1338->g_77 p_1338->g_97
 */
uint16_t  func_68(int8_t * p_69, struct S2 * p_1338)
{ /* block id: 20 */
    int32_t *l_71 = &p_1338->g_39[0];
    int32_t **l_72 = &l_71;
    int32_t l_79 = (-8L);
    int32_t l_80 = (-4L);
    int32_t l_81 = (-10L);
    VECTOR(int8_t, 4) l_94 = (VECTOR(int8_t, 4))(0x52L, (VECTOR(int8_t, 2))(0x52L, (-1L)), (-1L));
    int8_t *l_95 = (void*)0;
    int32_t *l_104[1];
    uint64_t l_105 = 0x1A7D10A60FE93421L;
    int i;
    for (i = 0; i < 1; i++)
        l_104[i] = &l_80;
    (*l_72) = l_71;
    for (p_1338->g_51.f0 = 14; (p_1338->g_51.f0 >= 50); ++p_1338->g_51.f0)
    { /* block id: 24 */
        int32_t *l_75 = (void*)0;
        int32_t *l_76 = &p_1338->g_77;
        int32_t *l_78[10][6][4] = {{{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]}},{{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]}},{{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]}},{{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]}},{{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]}},{{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]}},{{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]}},{{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]}},{{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]}},{{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]},{&p_1338->g_77,&p_1338->g_77,&p_1338->g_32,&p_1338->g_39[0]}}};
        VECTOR(uint16_t, 4) l_87 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x972AL), 0x972AL);
        union U1 l_90 = {0xE87FL};
        uint32_t *l_96 = &p_1338->g_97;
        int8_t *l_98 = (void*)0;
        int8_t *l_99 = (void*)0;
        int8_t *l_100 = (void*)0;
        int8_t *l_101 = (void*)0;
        int8_t *l_102[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_102[i] = (void*)0;
        p_1338->g_82--;
        (*l_76) ^= (*l_71);
        if ((*l_71))
            break;
        (*l_76) = (((-2L) >= (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(l_87.zw)).odd, (*l_76)))) != (((VECTOR(uint32_t, 16))((safe_div_func_int32_t_s_s((l_90 , (safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(9L, ((VECTOR(int8_t, 4))(p_1338->g_93.zyyy)), ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(1L, 4L, 0x4DL, 0x5BL)).even, ((VECTOR(int8_t, 16))(l_94.zzyyyyzxwwwxyzxz)).s46, ((VECTOR(int8_t, 4))((*p_69), ((VECTOR(int8_t, 2))(0x7BL, 0x5EL)), 0L)).even))), 0x36L)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((-2L), (l_79 = ((p_1338->g_comm_values[p_1338->tid] , ((*l_96) = ((l_95 == p_69) >= (1UL != (*l_71))))) , (*l_71))), 0x30L, 1L)).zzxxywxwzwyzzxzx)).lo))).s1215343264247421)))).s72d9)).y, FAKE_DIVERGE(p_1338->global_1_offset, get_global_id(1), 10)))), (*l_71))), ((VECTOR(uint32_t, 2))(0xE0CEE113L)), ((VECTOR(uint32_t, 8))(0x86DAAD3EL)), ((VECTOR(uint32_t, 2))(0xDCAF161EL)), 3UL, 0xF70EDC5EL, 4294967293UL)).sd , GROUP_DIVERGE(0, 1)));
    }
    l_80 |= ((VECTOR(int32_t, 2))(p_1338->g_103.s03)).odd;
    l_105 ^= (*l_71);
    return (*l_71);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[69];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 69; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[69];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 69; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[40];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 40; i++)
            l_comm_values[i] = 1;
    struct S2 c_1339;
    struct S2* p_1338 = &c_1339;
    struct S2 c_1340 = {
        0x09EA9831L, // p_1338->g_2
        2L, // p_1338->g_3
        {0x7BL,0x7BL,0x7BL,0x7BL,0x7BL,0x7BL,0x7BL}, // p_1338->g_12
        {&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3],&p_1338->g_12[3]}, // p_1338->g_31
        &p_1338->g_31[5], // p_1338->g_30
        0x1F3A4B44L, // p_1338->g_32
        (-3L), // p_1338->g_35
        {{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L},{0L,(-1L),0L}}, // p_1338->g_36
        (-1L), // p_1338->g_37
        0x4406997BL, // p_1338->g_38
        {(-5L)}, // p_1338->g_39
        {1UL}, // p_1338->g_51
        0x6C42L, // p_1338->g_61
        0x5E5E333AL, // p_1338->g_77
        2UL, // p_1338->g_82
        (VECTOR(int8_t, 4))(0x23L, (VECTOR(int8_t, 2))(0x23L, 0x4CL), 0x4CL), // p_1338->g_93
        4294967295UL, // p_1338->g_97
        (VECTOR(int32_t, 8))(0x5591EAE9L, (VECTOR(int32_t, 4))(0x5591EAE9L, (VECTOR(int32_t, 2))(0x5591EAE9L, 8L), 8L), 8L, 0x5591EAE9L, 8L), // p_1338->g_103
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x14393331L), 0x14393331L), // p_1338->g_106
        0x4DL, // p_1338->g_122
        &p_1338->g_77, // p_1338->g_128
        (void*)0, // p_1338->g_130
        &p_1338->g_130, // p_1338->g_129
        0x7D27AE38L, // p_1338->g_152
        {{&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61},{&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61},{&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61},{&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61},{&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61},{&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61},{&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61},{&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61,&p_1338->g_61}}, // p_1338->g_170
        &p_1338->g_61, // p_1338->g_171
        4294967295UL, // p_1338->g_177
        &p_1338->g_130, // p_1338->g_255
        1L, // p_1338->g_271
        {0xE27B8753L}, // p_1338->g_278
        (-7L), // p_1338->g_328
        0x065947FD5EED8720L, // p_1338->g_330
        1L, // p_1338->g_347
        1UL, // p_1338->g_348
        (VECTOR(int32_t, 2))(1L, (-1L)), // p_1338->g_351
        0x7875A409L, // p_1338->g_355
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-8L)), (-8L)), (-8L), 0L, (-8L)), // p_1338->g_357
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), // p_1338->g_358
        (void*)0, // p_1338->g_397
        {{{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)}},{{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)}},{{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)}},{{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)}},{{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)}},{{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)}},{{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)}},{{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)}},{{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)},{2L,0L,0x7325EE1CL,(-1L)}}}, // p_1338->g_425
        (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65534UL), 65534UL), 65534UL, 65535UL, 65534UL, (VECTOR(uint16_t, 2))(65535UL, 65534UL), (VECTOR(uint16_t, 2))(65535UL, 65534UL), 65535UL, 65534UL, 65535UL, 65534UL), // p_1338->g_429
        (VECTOR(uint16_t, 2))(1UL, 0x1F9DL), // p_1338->g_439
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), 65535UL, 1UL, 65535UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), (VECTOR(uint16_t, 2))(1UL, 65535UL), 1UL, 65535UL, 1UL, 65535UL), // p_1338->g_440
        (VECTOR(uint64_t, 8))(0xB24948243ABB773EL, (VECTOR(uint64_t, 4))(0xB24948243ABB773EL, (VECTOR(uint64_t, 2))(0xB24948243ABB773EL, 0x31E688197EBCE1CEL), 0x31E688197EBCE1CEL), 0x31E688197EBCE1CEL, 0xB24948243ABB773EL, 0x31E688197EBCE1CEL), // p_1338->g_441
        (VECTOR(uint32_t, 16))(0xF0B9F706L, (VECTOR(uint32_t, 4))(0xF0B9F706L, (VECTOR(uint32_t, 2))(0xF0B9F706L, 0x3DBCEA1CL), 0x3DBCEA1CL), 0x3DBCEA1CL, 0xF0B9F706L, 0x3DBCEA1CL, (VECTOR(uint32_t, 2))(0xF0B9F706L, 0x3DBCEA1CL), (VECTOR(uint32_t, 2))(0xF0B9F706L, 0x3DBCEA1CL), 0xF0B9F706L, 0x3DBCEA1CL, 0xF0B9F706L, 0x3DBCEA1CL), // p_1338->g_460
        (VECTOR(uint8_t, 16))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0xAEL), 0xAEL), 0xAEL, 9UL, 0xAEL, (VECTOR(uint8_t, 2))(9UL, 0xAEL), (VECTOR(uint8_t, 2))(9UL, 0xAEL), 9UL, 0xAEL, 9UL, 0xAEL), // p_1338->g_484
        1UL, // p_1338->g_487
        (-1L), // p_1338->g_500
        (VECTOR(int8_t, 8))(0x7BL, (VECTOR(int8_t, 4))(0x7BL, (VECTOR(int8_t, 2))(0x7BL, 0x31L), 0x31L), 0x31L, 0x7BL, 0x31L), // p_1338->g_518
        &p_1338->g_130, // p_1338->g_533
        &p_1338->g_347, // p_1338->g_541
        &p_1338->g_541, // p_1338->g_540
        (VECTOR(int16_t, 2))((-1L), (-3L)), // p_1338->g_558
        &p_1338->g_130, // p_1338->g_612
        &p_1338->g_130, // p_1338->g_620
        {{{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130}},{{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130}},{{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130}},{{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130}},{{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130},{&p_1338->g_130,(void*)0,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130}}}, // p_1338->g_621
        (VECTOR(int32_t, 16))(0x1F95F5ECL, (VECTOR(int32_t, 4))(0x1F95F5ECL, (VECTOR(int32_t, 2))(0x1F95F5ECL, 5L), 5L), 5L, 0x1F95F5ECL, 5L, (VECTOR(int32_t, 2))(0x1F95F5ECL, 5L), (VECTOR(int32_t, 2))(0x1F95F5ECL, 5L), 0x1F95F5ECL, 5L, 0x1F95F5ECL, 5L), // p_1338->g_627
        (VECTOR(uint64_t, 4))(0xA402B8664A632159L, (VECTOR(uint64_t, 2))(0xA402B8664A632159L, 18446744073709551606UL), 18446744073709551606UL), // p_1338->g_631
        (VECTOR(uint16_t, 4))(0x8EECL, (VECTOR(uint16_t, 2))(0x8EECL, 0xD23AL), 0xD23AL), // p_1338->g_642
        (VECTOR(int32_t, 2))(0x42B138B4L, 0x3B494CECL), // p_1338->g_654
        (VECTOR(uint32_t, 2))(4294967294UL, 0UL), // p_1338->g_661
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), 255UL, 0UL, 255UL, (VECTOR(uint8_t, 2))(0UL, 255UL), (VECTOR(uint8_t, 2))(0UL, 255UL), 0UL, 255UL, 0UL, 255UL), // p_1338->g_665
        {0L,0L,0L,0L,0L}, // p_1338->g_666
        (void*)0, // p_1338->g_667
        &p_1338->g_130, // p_1338->g_668
        0x65L, // p_1338->g_689
        &p_1338->g_30, // p_1338->g_708
        (VECTOR(uint8_t, 16))(0x05L, (VECTOR(uint8_t, 4))(0x05L, (VECTOR(uint8_t, 2))(0x05L, 0x63L), 0x63L), 0x63L, 0x05L, 0x63L, (VECTOR(uint8_t, 2))(0x05L, 0x63L), (VECTOR(uint8_t, 2))(0x05L, 0x63L), 0x05L, 0x63L, 0x05L, 0x63L), // p_1338->g_709
        (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 65526UL), 65526UL), // p_1338->g_737
        (VECTOR(uint16_t, 16))(0x88FFL, (VECTOR(uint16_t, 4))(0x88FFL, (VECTOR(uint16_t, 2))(0x88FFL, 0x9DA4L), 0x9DA4L), 0x9DA4L, 0x88FFL, 0x9DA4L, (VECTOR(uint16_t, 2))(0x88FFL, 0x9DA4L), (VECTOR(uint16_t, 2))(0x88FFL, 0x9DA4L), 0x88FFL, 0x9DA4L, 0x88FFL, 0x9DA4L), // p_1338->g_740
        (VECTOR(int16_t, 2))(0L, (-1L)), // p_1338->g_758
        (-2L), // p_1338->g_783
        (void*)0, // p_1338->g_788
        (VECTOR(uint8_t, 8))(0xBAL, (VECTOR(uint8_t, 4))(0xBAL, (VECTOR(uint8_t, 2))(0xBAL, 255UL), 255UL), 255UL, 0xBAL, 255UL), // p_1338->g_805
        (VECTOR(int16_t, 8))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x3120L), 0x3120L), 0x3120L, (-6L), 0x3120L), // p_1338->g_820
        (VECTOR(uint64_t, 4))(0x47480CEA8D0E1F40L, (VECTOR(uint64_t, 2))(0x47480CEA8D0E1F40L, 18446744073709551615UL), 18446744073709551615UL), // p_1338->g_844
        (void*)0, // p_1338->g_853
        {&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130}, // p_1338->g_854
        &p_1338->g_130, // p_1338->g_855
        (void*)0, // p_1338->g_858
        (-6L), // p_1338->g_903
        (void*)0, // p_1338->g_912
        {&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130,&p_1338->g_130}, // p_1338->g_913
        0x57B32452L, // p_1338->g_915
        (void*)0, // p_1338->g_955
        (VECTOR(uint32_t, 2))(0UL, 0x1C3152E8L), // p_1338->g_964
        (VECTOR(uint32_t, 4))(0xC12A0B73L, (VECTOR(uint32_t, 2))(0xC12A0B73L, 0UL), 0UL), // p_1338->g_965
        (VECTOR(uint64_t, 16))(0x3429BC3B629632C6L, (VECTOR(uint64_t, 4))(0x3429BC3B629632C6L, (VECTOR(uint64_t, 2))(0x3429BC3B629632C6L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x3429BC3B629632C6L, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0x3429BC3B629632C6L, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0x3429BC3B629632C6L, 18446744073709551615UL), 0x3429BC3B629632C6L, 18446744073709551615UL, 0x3429BC3B629632C6L, 18446744073709551615UL), // p_1338->g_967
        &p_1338->g_12[1], // p_1338->g_1041
        0x7265L, // p_1338->g_1051
        {{1UL},{1UL},{1UL}}, // p_1338->g_1113
        (VECTOR(int32_t, 16))(0x0A8D16CCL, (VECTOR(int32_t, 4))(0x0A8D16CCL, (VECTOR(int32_t, 2))(0x0A8D16CCL, 0L), 0L), 0L, 0x0A8D16CCL, 0L, (VECTOR(int32_t, 2))(0x0A8D16CCL, 0L), (VECTOR(int32_t, 2))(0x0A8D16CCL, 0L), 0x0A8D16CCL, 0L, 0x0A8D16CCL, 0L), // p_1338->g_1119
        (VECTOR(int32_t, 4))(0x43A8BD52L, (VECTOR(int32_t, 2))(0x43A8BD52L, 0L), 0L), // p_1338->g_1122
        (VECTOR(int16_t, 2))(0L, 0x0A00L), // p_1338->g_1136
        (VECTOR(uint16_t, 8))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0UL), 0UL), 0UL, 65531UL, 0UL), // p_1338->g_1139
        &p_1338->g_1113[1], // p_1338->g_1155
        {&p_1338->g_1155,&p_1338->g_1155,&p_1338->g_1155,&p_1338->g_1155,&p_1338->g_1155,&p_1338->g_1155}, // p_1338->g_1154
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int8_t, 2))(0L, 1L), (VECTOR(int8_t, 2))(0L, 1L), 0L, 1L, 0L, 1L), // p_1338->g_1173
        0x53L, // p_1338->g_1232
        &p_1338->g_171, // p_1338->g_1300
        {{&p_1338->g_170[3][3],&p_1338->g_171,&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_171,&p_1338->g_170[3][3],&p_1338->g_170[3][3]},{&p_1338->g_170[3][3],&p_1338->g_171,&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_171,&p_1338->g_170[3][3],&p_1338->g_170[3][3]},{&p_1338->g_170[3][3],&p_1338->g_171,&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_171,&p_1338->g_170[3][3],&p_1338->g_170[3][3]},{&p_1338->g_170[3][3],&p_1338->g_171,&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_171,&p_1338->g_170[3][3],&p_1338->g_170[3][3]},{&p_1338->g_170[3][3],&p_1338->g_171,&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_171,&p_1338->g_170[3][3],&p_1338->g_170[3][3]},{&p_1338->g_170[3][3],&p_1338->g_171,&p_1338->g_170[3][3],&p_1338->g_170[3][3],&p_1338->g_171,&p_1338->g_170[3][3],&p_1338->g_170[3][3]}}, // p_1338->g_1301
        0, // p_1338->v_collective
        sequence_input[get_global_id(0)], // p_1338->global_0_offset
        sequence_input[get_global_id(1)], // p_1338->global_1_offset
        sequence_input[get_global_id(2)], // p_1338->global_2_offset
        sequence_input[get_local_id(0)], // p_1338->local_0_offset
        sequence_input[get_local_id(1)], // p_1338->local_1_offset
        sequence_input[get_local_id(2)], // p_1338->local_2_offset
        sequence_input[get_group_id(0)], // p_1338->group_0_offset
        sequence_input[get_group_id(1)], // p_1338->group_1_offset
        sequence_input[get_group_id(2)], // p_1338->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 40)), permutations[0][get_linear_local_id()])), // p_1338->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1339 = c_1340;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1338);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1338->g_2, "p_1338->g_2", print_hash_value);
    transparent_crc(p_1338->g_3, "p_1338->g_3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1338->g_12[i], "p_1338->g_12[i]", print_hash_value);

    }
    transparent_crc(p_1338->g_32, "p_1338->g_32", print_hash_value);
    transparent_crc(p_1338->g_35, "p_1338->g_35", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1338->g_36[i][j], "p_1338->g_36[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1338->g_37, "p_1338->g_37", print_hash_value);
    transparent_crc(p_1338->g_38, "p_1338->g_38", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1338->g_39[i], "p_1338->g_39[i]", print_hash_value);

    }
    transparent_crc(p_1338->g_51.f0, "p_1338->g_51.f0", print_hash_value);
    transparent_crc(p_1338->g_61, "p_1338->g_61", print_hash_value);
    transparent_crc(p_1338->g_77, "p_1338->g_77", print_hash_value);
    transparent_crc(p_1338->g_82, "p_1338->g_82", print_hash_value);
    transparent_crc(p_1338->g_93.x, "p_1338->g_93.x", print_hash_value);
    transparent_crc(p_1338->g_93.y, "p_1338->g_93.y", print_hash_value);
    transparent_crc(p_1338->g_93.z, "p_1338->g_93.z", print_hash_value);
    transparent_crc(p_1338->g_93.w, "p_1338->g_93.w", print_hash_value);
    transparent_crc(p_1338->g_97, "p_1338->g_97", print_hash_value);
    transparent_crc(p_1338->g_103.s0, "p_1338->g_103.s0", print_hash_value);
    transparent_crc(p_1338->g_103.s1, "p_1338->g_103.s1", print_hash_value);
    transparent_crc(p_1338->g_103.s2, "p_1338->g_103.s2", print_hash_value);
    transparent_crc(p_1338->g_103.s3, "p_1338->g_103.s3", print_hash_value);
    transparent_crc(p_1338->g_103.s4, "p_1338->g_103.s4", print_hash_value);
    transparent_crc(p_1338->g_103.s5, "p_1338->g_103.s5", print_hash_value);
    transparent_crc(p_1338->g_103.s6, "p_1338->g_103.s6", print_hash_value);
    transparent_crc(p_1338->g_103.s7, "p_1338->g_103.s7", print_hash_value);
    transparent_crc(p_1338->g_106.x, "p_1338->g_106.x", print_hash_value);
    transparent_crc(p_1338->g_106.y, "p_1338->g_106.y", print_hash_value);
    transparent_crc(p_1338->g_106.z, "p_1338->g_106.z", print_hash_value);
    transparent_crc(p_1338->g_106.w, "p_1338->g_106.w", print_hash_value);
    transparent_crc(p_1338->g_122, "p_1338->g_122", print_hash_value);
    transparent_crc(p_1338->g_152, "p_1338->g_152", print_hash_value);
    transparent_crc(p_1338->g_177, "p_1338->g_177", print_hash_value);
    transparent_crc(p_1338->g_271, "p_1338->g_271", print_hash_value);
    transparent_crc(p_1338->g_278.f0, "p_1338->g_278.f0", print_hash_value);
    transparent_crc(p_1338->g_328, "p_1338->g_328", print_hash_value);
    transparent_crc(p_1338->g_330, "p_1338->g_330", print_hash_value);
    transparent_crc(p_1338->g_347, "p_1338->g_347", print_hash_value);
    transparent_crc(p_1338->g_348, "p_1338->g_348", print_hash_value);
    transparent_crc(p_1338->g_351.x, "p_1338->g_351.x", print_hash_value);
    transparent_crc(p_1338->g_351.y, "p_1338->g_351.y", print_hash_value);
    transparent_crc(p_1338->g_355, "p_1338->g_355", print_hash_value);
    transparent_crc(p_1338->g_357.s0, "p_1338->g_357.s0", print_hash_value);
    transparent_crc(p_1338->g_357.s1, "p_1338->g_357.s1", print_hash_value);
    transparent_crc(p_1338->g_357.s2, "p_1338->g_357.s2", print_hash_value);
    transparent_crc(p_1338->g_357.s3, "p_1338->g_357.s3", print_hash_value);
    transparent_crc(p_1338->g_357.s4, "p_1338->g_357.s4", print_hash_value);
    transparent_crc(p_1338->g_357.s5, "p_1338->g_357.s5", print_hash_value);
    transparent_crc(p_1338->g_357.s6, "p_1338->g_357.s6", print_hash_value);
    transparent_crc(p_1338->g_357.s7, "p_1338->g_357.s7", print_hash_value);
    transparent_crc(p_1338->g_358.x, "p_1338->g_358.x", print_hash_value);
    transparent_crc(p_1338->g_358.y, "p_1338->g_358.y", print_hash_value);
    transparent_crc(p_1338->g_358.z, "p_1338->g_358.z", print_hash_value);
    transparent_crc(p_1338->g_358.w, "p_1338->g_358.w", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1338->g_425[i][j][k], "p_1338->g_425[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1338->g_429.s0, "p_1338->g_429.s0", print_hash_value);
    transparent_crc(p_1338->g_429.s1, "p_1338->g_429.s1", print_hash_value);
    transparent_crc(p_1338->g_429.s2, "p_1338->g_429.s2", print_hash_value);
    transparent_crc(p_1338->g_429.s3, "p_1338->g_429.s3", print_hash_value);
    transparent_crc(p_1338->g_429.s4, "p_1338->g_429.s4", print_hash_value);
    transparent_crc(p_1338->g_429.s5, "p_1338->g_429.s5", print_hash_value);
    transparent_crc(p_1338->g_429.s6, "p_1338->g_429.s6", print_hash_value);
    transparent_crc(p_1338->g_429.s7, "p_1338->g_429.s7", print_hash_value);
    transparent_crc(p_1338->g_429.s8, "p_1338->g_429.s8", print_hash_value);
    transparent_crc(p_1338->g_429.s9, "p_1338->g_429.s9", print_hash_value);
    transparent_crc(p_1338->g_429.sa, "p_1338->g_429.sa", print_hash_value);
    transparent_crc(p_1338->g_429.sb, "p_1338->g_429.sb", print_hash_value);
    transparent_crc(p_1338->g_429.sc, "p_1338->g_429.sc", print_hash_value);
    transparent_crc(p_1338->g_429.sd, "p_1338->g_429.sd", print_hash_value);
    transparent_crc(p_1338->g_429.se, "p_1338->g_429.se", print_hash_value);
    transparent_crc(p_1338->g_429.sf, "p_1338->g_429.sf", print_hash_value);
    transparent_crc(p_1338->g_439.x, "p_1338->g_439.x", print_hash_value);
    transparent_crc(p_1338->g_439.y, "p_1338->g_439.y", print_hash_value);
    transparent_crc(p_1338->g_440.s0, "p_1338->g_440.s0", print_hash_value);
    transparent_crc(p_1338->g_440.s1, "p_1338->g_440.s1", print_hash_value);
    transparent_crc(p_1338->g_440.s2, "p_1338->g_440.s2", print_hash_value);
    transparent_crc(p_1338->g_440.s3, "p_1338->g_440.s3", print_hash_value);
    transparent_crc(p_1338->g_440.s4, "p_1338->g_440.s4", print_hash_value);
    transparent_crc(p_1338->g_440.s5, "p_1338->g_440.s5", print_hash_value);
    transparent_crc(p_1338->g_440.s6, "p_1338->g_440.s6", print_hash_value);
    transparent_crc(p_1338->g_440.s7, "p_1338->g_440.s7", print_hash_value);
    transparent_crc(p_1338->g_440.s8, "p_1338->g_440.s8", print_hash_value);
    transparent_crc(p_1338->g_440.s9, "p_1338->g_440.s9", print_hash_value);
    transparent_crc(p_1338->g_440.sa, "p_1338->g_440.sa", print_hash_value);
    transparent_crc(p_1338->g_440.sb, "p_1338->g_440.sb", print_hash_value);
    transparent_crc(p_1338->g_440.sc, "p_1338->g_440.sc", print_hash_value);
    transparent_crc(p_1338->g_440.sd, "p_1338->g_440.sd", print_hash_value);
    transparent_crc(p_1338->g_440.se, "p_1338->g_440.se", print_hash_value);
    transparent_crc(p_1338->g_440.sf, "p_1338->g_440.sf", print_hash_value);
    transparent_crc(p_1338->g_441.s0, "p_1338->g_441.s0", print_hash_value);
    transparent_crc(p_1338->g_441.s1, "p_1338->g_441.s1", print_hash_value);
    transparent_crc(p_1338->g_441.s2, "p_1338->g_441.s2", print_hash_value);
    transparent_crc(p_1338->g_441.s3, "p_1338->g_441.s3", print_hash_value);
    transparent_crc(p_1338->g_441.s4, "p_1338->g_441.s4", print_hash_value);
    transparent_crc(p_1338->g_441.s5, "p_1338->g_441.s5", print_hash_value);
    transparent_crc(p_1338->g_441.s6, "p_1338->g_441.s6", print_hash_value);
    transparent_crc(p_1338->g_441.s7, "p_1338->g_441.s7", print_hash_value);
    transparent_crc(p_1338->g_460.s0, "p_1338->g_460.s0", print_hash_value);
    transparent_crc(p_1338->g_460.s1, "p_1338->g_460.s1", print_hash_value);
    transparent_crc(p_1338->g_460.s2, "p_1338->g_460.s2", print_hash_value);
    transparent_crc(p_1338->g_460.s3, "p_1338->g_460.s3", print_hash_value);
    transparent_crc(p_1338->g_460.s4, "p_1338->g_460.s4", print_hash_value);
    transparent_crc(p_1338->g_460.s5, "p_1338->g_460.s5", print_hash_value);
    transparent_crc(p_1338->g_460.s6, "p_1338->g_460.s6", print_hash_value);
    transparent_crc(p_1338->g_460.s7, "p_1338->g_460.s7", print_hash_value);
    transparent_crc(p_1338->g_460.s8, "p_1338->g_460.s8", print_hash_value);
    transparent_crc(p_1338->g_460.s9, "p_1338->g_460.s9", print_hash_value);
    transparent_crc(p_1338->g_460.sa, "p_1338->g_460.sa", print_hash_value);
    transparent_crc(p_1338->g_460.sb, "p_1338->g_460.sb", print_hash_value);
    transparent_crc(p_1338->g_460.sc, "p_1338->g_460.sc", print_hash_value);
    transparent_crc(p_1338->g_460.sd, "p_1338->g_460.sd", print_hash_value);
    transparent_crc(p_1338->g_460.se, "p_1338->g_460.se", print_hash_value);
    transparent_crc(p_1338->g_460.sf, "p_1338->g_460.sf", print_hash_value);
    transparent_crc(p_1338->g_484.s0, "p_1338->g_484.s0", print_hash_value);
    transparent_crc(p_1338->g_484.s1, "p_1338->g_484.s1", print_hash_value);
    transparent_crc(p_1338->g_484.s2, "p_1338->g_484.s2", print_hash_value);
    transparent_crc(p_1338->g_484.s3, "p_1338->g_484.s3", print_hash_value);
    transparent_crc(p_1338->g_484.s4, "p_1338->g_484.s4", print_hash_value);
    transparent_crc(p_1338->g_484.s5, "p_1338->g_484.s5", print_hash_value);
    transparent_crc(p_1338->g_484.s6, "p_1338->g_484.s6", print_hash_value);
    transparent_crc(p_1338->g_484.s7, "p_1338->g_484.s7", print_hash_value);
    transparent_crc(p_1338->g_484.s8, "p_1338->g_484.s8", print_hash_value);
    transparent_crc(p_1338->g_484.s9, "p_1338->g_484.s9", print_hash_value);
    transparent_crc(p_1338->g_484.sa, "p_1338->g_484.sa", print_hash_value);
    transparent_crc(p_1338->g_484.sb, "p_1338->g_484.sb", print_hash_value);
    transparent_crc(p_1338->g_484.sc, "p_1338->g_484.sc", print_hash_value);
    transparent_crc(p_1338->g_484.sd, "p_1338->g_484.sd", print_hash_value);
    transparent_crc(p_1338->g_484.se, "p_1338->g_484.se", print_hash_value);
    transparent_crc(p_1338->g_484.sf, "p_1338->g_484.sf", print_hash_value);
    transparent_crc(p_1338->g_487, "p_1338->g_487", print_hash_value);
    transparent_crc(p_1338->g_500, "p_1338->g_500", print_hash_value);
    transparent_crc(p_1338->g_518.s0, "p_1338->g_518.s0", print_hash_value);
    transparent_crc(p_1338->g_518.s1, "p_1338->g_518.s1", print_hash_value);
    transparent_crc(p_1338->g_518.s2, "p_1338->g_518.s2", print_hash_value);
    transparent_crc(p_1338->g_518.s3, "p_1338->g_518.s3", print_hash_value);
    transparent_crc(p_1338->g_518.s4, "p_1338->g_518.s4", print_hash_value);
    transparent_crc(p_1338->g_518.s5, "p_1338->g_518.s5", print_hash_value);
    transparent_crc(p_1338->g_518.s6, "p_1338->g_518.s6", print_hash_value);
    transparent_crc(p_1338->g_518.s7, "p_1338->g_518.s7", print_hash_value);
    transparent_crc(p_1338->g_558.x, "p_1338->g_558.x", print_hash_value);
    transparent_crc(p_1338->g_558.y, "p_1338->g_558.y", print_hash_value);
    transparent_crc(p_1338->g_627.s0, "p_1338->g_627.s0", print_hash_value);
    transparent_crc(p_1338->g_627.s1, "p_1338->g_627.s1", print_hash_value);
    transparent_crc(p_1338->g_627.s2, "p_1338->g_627.s2", print_hash_value);
    transparent_crc(p_1338->g_627.s3, "p_1338->g_627.s3", print_hash_value);
    transparent_crc(p_1338->g_627.s4, "p_1338->g_627.s4", print_hash_value);
    transparent_crc(p_1338->g_627.s5, "p_1338->g_627.s5", print_hash_value);
    transparent_crc(p_1338->g_627.s6, "p_1338->g_627.s6", print_hash_value);
    transparent_crc(p_1338->g_627.s7, "p_1338->g_627.s7", print_hash_value);
    transparent_crc(p_1338->g_627.s8, "p_1338->g_627.s8", print_hash_value);
    transparent_crc(p_1338->g_627.s9, "p_1338->g_627.s9", print_hash_value);
    transparent_crc(p_1338->g_627.sa, "p_1338->g_627.sa", print_hash_value);
    transparent_crc(p_1338->g_627.sb, "p_1338->g_627.sb", print_hash_value);
    transparent_crc(p_1338->g_627.sc, "p_1338->g_627.sc", print_hash_value);
    transparent_crc(p_1338->g_627.sd, "p_1338->g_627.sd", print_hash_value);
    transparent_crc(p_1338->g_627.se, "p_1338->g_627.se", print_hash_value);
    transparent_crc(p_1338->g_627.sf, "p_1338->g_627.sf", print_hash_value);
    transparent_crc(p_1338->g_631.x, "p_1338->g_631.x", print_hash_value);
    transparent_crc(p_1338->g_631.y, "p_1338->g_631.y", print_hash_value);
    transparent_crc(p_1338->g_631.z, "p_1338->g_631.z", print_hash_value);
    transparent_crc(p_1338->g_631.w, "p_1338->g_631.w", print_hash_value);
    transparent_crc(p_1338->g_642.x, "p_1338->g_642.x", print_hash_value);
    transparent_crc(p_1338->g_642.y, "p_1338->g_642.y", print_hash_value);
    transparent_crc(p_1338->g_642.z, "p_1338->g_642.z", print_hash_value);
    transparent_crc(p_1338->g_642.w, "p_1338->g_642.w", print_hash_value);
    transparent_crc(p_1338->g_654.x, "p_1338->g_654.x", print_hash_value);
    transparent_crc(p_1338->g_654.y, "p_1338->g_654.y", print_hash_value);
    transparent_crc(p_1338->g_661.x, "p_1338->g_661.x", print_hash_value);
    transparent_crc(p_1338->g_661.y, "p_1338->g_661.y", print_hash_value);
    transparent_crc(p_1338->g_665.s0, "p_1338->g_665.s0", print_hash_value);
    transparent_crc(p_1338->g_665.s1, "p_1338->g_665.s1", print_hash_value);
    transparent_crc(p_1338->g_665.s2, "p_1338->g_665.s2", print_hash_value);
    transparent_crc(p_1338->g_665.s3, "p_1338->g_665.s3", print_hash_value);
    transparent_crc(p_1338->g_665.s4, "p_1338->g_665.s4", print_hash_value);
    transparent_crc(p_1338->g_665.s5, "p_1338->g_665.s5", print_hash_value);
    transparent_crc(p_1338->g_665.s6, "p_1338->g_665.s6", print_hash_value);
    transparent_crc(p_1338->g_665.s7, "p_1338->g_665.s7", print_hash_value);
    transparent_crc(p_1338->g_665.s8, "p_1338->g_665.s8", print_hash_value);
    transparent_crc(p_1338->g_665.s9, "p_1338->g_665.s9", print_hash_value);
    transparent_crc(p_1338->g_665.sa, "p_1338->g_665.sa", print_hash_value);
    transparent_crc(p_1338->g_665.sb, "p_1338->g_665.sb", print_hash_value);
    transparent_crc(p_1338->g_665.sc, "p_1338->g_665.sc", print_hash_value);
    transparent_crc(p_1338->g_665.sd, "p_1338->g_665.sd", print_hash_value);
    transparent_crc(p_1338->g_665.se, "p_1338->g_665.se", print_hash_value);
    transparent_crc(p_1338->g_665.sf, "p_1338->g_665.sf", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1338->g_666[i], "p_1338->g_666[i]", print_hash_value);

    }
    transparent_crc(p_1338->g_689, "p_1338->g_689", print_hash_value);
    transparent_crc(p_1338->g_709.s0, "p_1338->g_709.s0", print_hash_value);
    transparent_crc(p_1338->g_709.s1, "p_1338->g_709.s1", print_hash_value);
    transparent_crc(p_1338->g_709.s2, "p_1338->g_709.s2", print_hash_value);
    transparent_crc(p_1338->g_709.s3, "p_1338->g_709.s3", print_hash_value);
    transparent_crc(p_1338->g_709.s4, "p_1338->g_709.s4", print_hash_value);
    transparent_crc(p_1338->g_709.s5, "p_1338->g_709.s5", print_hash_value);
    transparent_crc(p_1338->g_709.s6, "p_1338->g_709.s6", print_hash_value);
    transparent_crc(p_1338->g_709.s7, "p_1338->g_709.s7", print_hash_value);
    transparent_crc(p_1338->g_709.s8, "p_1338->g_709.s8", print_hash_value);
    transparent_crc(p_1338->g_709.s9, "p_1338->g_709.s9", print_hash_value);
    transparent_crc(p_1338->g_709.sa, "p_1338->g_709.sa", print_hash_value);
    transparent_crc(p_1338->g_709.sb, "p_1338->g_709.sb", print_hash_value);
    transparent_crc(p_1338->g_709.sc, "p_1338->g_709.sc", print_hash_value);
    transparent_crc(p_1338->g_709.sd, "p_1338->g_709.sd", print_hash_value);
    transparent_crc(p_1338->g_709.se, "p_1338->g_709.se", print_hash_value);
    transparent_crc(p_1338->g_709.sf, "p_1338->g_709.sf", print_hash_value);
    transparent_crc(p_1338->g_737.x, "p_1338->g_737.x", print_hash_value);
    transparent_crc(p_1338->g_737.y, "p_1338->g_737.y", print_hash_value);
    transparent_crc(p_1338->g_737.z, "p_1338->g_737.z", print_hash_value);
    transparent_crc(p_1338->g_737.w, "p_1338->g_737.w", print_hash_value);
    transparent_crc(p_1338->g_740.s0, "p_1338->g_740.s0", print_hash_value);
    transparent_crc(p_1338->g_740.s1, "p_1338->g_740.s1", print_hash_value);
    transparent_crc(p_1338->g_740.s2, "p_1338->g_740.s2", print_hash_value);
    transparent_crc(p_1338->g_740.s3, "p_1338->g_740.s3", print_hash_value);
    transparent_crc(p_1338->g_740.s4, "p_1338->g_740.s4", print_hash_value);
    transparent_crc(p_1338->g_740.s5, "p_1338->g_740.s5", print_hash_value);
    transparent_crc(p_1338->g_740.s6, "p_1338->g_740.s6", print_hash_value);
    transparent_crc(p_1338->g_740.s7, "p_1338->g_740.s7", print_hash_value);
    transparent_crc(p_1338->g_740.s8, "p_1338->g_740.s8", print_hash_value);
    transparent_crc(p_1338->g_740.s9, "p_1338->g_740.s9", print_hash_value);
    transparent_crc(p_1338->g_740.sa, "p_1338->g_740.sa", print_hash_value);
    transparent_crc(p_1338->g_740.sb, "p_1338->g_740.sb", print_hash_value);
    transparent_crc(p_1338->g_740.sc, "p_1338->g_740.sc", print_hash_value);
    transparent_crc(p_1338->g_740.sd, "p_1338->g_740.sd", print_hash_value);
    transparent_crc(p_1338->g_740.se, "p_1338->g_740.se", print_hash_value);
    transparent_crc(p_1338->g_740.sf, "p_1338->g_740.sf", print_hash_value);
    transparent_crc(p_1338->g_758.x, "p_1338->g_758.x", print_hash_value);
    transparent_crc(p_1338->g_758.y, "p_1338->g_758.y", print_hash_value);
    transparent_crc(p_1338->g_783, "p_1338->g_783", print_hash_value);
    transparent_crc(p_1338->g_805.s0, "p_1338->g_805.s0", print_hash_value);
    transparent_crc(p_1338->g_805.s1, "p_1338->g_805.s1", print_hash_value);
    transparent_crc(p_1338->g_805.s2, "p_1338->g_805.s2", print_hash_value);
    transparent_crc(p_1338->g_805.s3, "p_1338->g_805.s3", print_hash_value);
    transparent_crc(p_1338->g_805.s4, "p_1338->g_805.s4", print_hash_value);
    transparent_crc(p_1338->g_805.s5, "p_1338->g_805.s5", print_hash_value);
    transparent_crc(p_1338->g_805.s6, "p_1338->g_805.s6", print_hash_value);
    transparent_crc(p_1338->g_805.s7, "p_1338->g_805.s7", print_hash_value);
    transparent_crc(p_1338->g_820.s0, "p_1338->g_820.s0", print_hash_value);
    transparent_crc(p_1338->g_820.s1, "p_1338->g_820.s1", print_hash_value);
    transparent_crc(p_1338->g_820.s2, "p_1338->g_820.s2", print_hash_value);
    transparent_crc(p_1338->g_820.s3, "p_1338->g_820.s3", print_hash_value);
    transparent_crc(p_1338->g_820.s4, "p_1338->g_820.s4", print_hash_value);
    transparent_crc(p_1338->g_820.s5, "p_1338->g_820.s5", print_hash_value);
    transparent_crc(p_1338->g_820.s6, "p_1338->g_820.s6", print_hash_value);
    transparent_crc(p_1338->g_820.s7, "p_1338->g_820.s7", print_hash_value);
    transparent_crc(p_1338->g_844.x, "p_1338->g_844.x", print_hash_value);
    transparent_crc(p_1338->g_844.y, "p_1338->g_844.y", print_hash_value);
    transparent_crc(p_1338->g_844.z, "p_1338->g_844.z", print_hash_value);
    transparent_crc(p_1338->g_844.w, "p_1338->g_844.w", print_hash_value);
    transparent_crc(p_1338->g_903, "p_1338->g_903", print_hash_value);
    transparent_crc(p_1338->g_915, "p_1338->g_915", print_hash_value);
    transparent_crc(p_1338->g_964.x, "p_1338->g_964.x", print_hash_value);
    transparent_crc(p_1338->g_964.y, "p_1338->g_964.y", print_hash_value);
    transparent_crc(p_1338->g_965.x, "p_1338->g_965.x", print_hash_value);
    transparent_crc(p_1338->g_965.y, "p_1338->g_965.y", print_hash_value);
    transparent_crc(p_1338->g_965.z, "p_1338->g_965.z", print_hash_value);
    transparent_crc(p_1338->g_965.w, "p_1338->g_965.w", print_hash_value);
    transparent_crc(p_1338->g_967.s0, "p_1338->g_967.s0", print_hash_value);
    transparent_crc(p_1338->g_967.s1, "p_1338->g_967.s1", print_hash_value);
    transparent_crc(p_1338->g_967.s2, "p_1338->g_967.s2", print_hash_value);
    transparent_crc(p_1338->g_967.s3, "p_1338->g_967.s3", print_hash_value);
    transparent_crc(p_1338->g_967.s4, "p_1338->g_967.s4", print_hash_value);
    transparent_crc(p_1338->g_967.s5, "p_1338->g_967.s5", print_hash_value);
    transparent_crc(p_1338->g_967.s6, "p_1338->g_967.s6", print_hash_value);
    transparent_crc(p_1338->g_967.s7, "p_1338->g_967.s7", print_hash_value);
    transparent_crc(p_1338->g_967.s8, "p_1338->g_967.s8", print_hash_value);
    transparent_crc(p_1338->g_967.s9, "p_1338->g_967.s9", print_hash_value);
    transparent_crc(p_1338->g_967.sa, "p_1338->g_967.sa", print_hash_value);
    transparent_crc(p_1338->g_967.sb, "p_1338->g_967.sb", print_hash_value);
    transparent_crc(p_1338->g_967.sc, "p_1338->g_967.sc", print_hash_value);
    transparent_crc(p_1338->g_967.sd, "p_1338->g_967.sd", print_hash_value);
    transparent_crc(p_1338->g_967.se, "p_1338->g_967.se", print_hash_value);
    transparent_crc(p_1338->g_967.sf, "p_1338->g_967.sf", print_hash_value);
    transparent_crc(p_1338->g_1051, "p_1338->g_1051", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1338->g_1113[i].f0, "p_1338->g_1113[i].f0", print_hash_value);

    }
    transparent_crc(p_1338->g_1119.s0, "p_1338->g_1119.s0", print_hash_value);
    transparent_crc(p_1338->g_1119.s1, "p_1338->g_1119.s1", print_hash_value);
    transparent_crc(p_1338->g_1119.s2, "p_1338->g_1119.s2", print_hash_value);
    transparent_crc(p_1338->g_1119.s3, "p_1338->g_1119.s3", print_hash_value);
    transparent_crc(p_1338->g_1119.s4, "p_1338->g_1119.s4", print_hash_value);
    transparent_crc(p_1338->g_1119.s5, "p_1338->g_1119.s5", print_hash_value);
    transparent_crc(p_1338->g_1119.s6, "p_1338->g_1119.s6", print_hash_value);
    transparent_crc(p_1338->g_1119.s7, "p_1338->g_1119.s7", print_hash_value);
    transparent_crc(p_1338->g_1119.s8, "p_1338->g_1119.s8", print_hash_value);
    transparent_crc(p_1338->g_1119.s9, "p_1338->g_1119.s9", print_hash_value);
    transparent_crc(p_1338->g_1119.sa, "p_1338->g_1119.sa", print_hash_value);
    transparent_crc(p_1338->g_1119.sb, "p_1338->g_1119.sb", print_hash_value);
    transparent_crc(p_1338->g_1119.sc, "p_1338->g_1119.sc", print_hash_value);
    transparent_crc(p_1338->g_1119.sd, "p_1338->g_1119.sd", print_hash_value);
    transparent_crc(p_1338->g_1119.se, "p_1338->g_1119.se", print_hash_value);
    transparent_crc(p_1338->g_1119.sf, "p_1338->g_1119.sf", print_hash_value);
    transparent_crc(p_1338->g_1122.x, "p_1338->g_1122.x", print_hash_value);
    transparent_crc(p_1338->g_1122.y, "p_1338->g_1122.y", print_hash_value);
    transparent_crc(p_1338->g_1122.z, "p_1338->g_1122.z", print_hash_value);
    transparent_crc(p_1338->g_1122.w, "p_1338->g_1122.w", print_hash_value);
    transparent_crc(p_1338->g_1136.x, "p_1338->g_1136.x", print_hash_value);
    transparent_crc(p_1338->g_1136.y, "p_1338->g_1136.y", print_hash_value);
    transparent_crc(p_1338->g_1139.s0, "p_1338->g_1139.s0", print_hash_value);
    transparent_crc(p_1338->g_1139.s1, "p_1338->g_1139.s1", print_hash_value);
    transparent_crc(p_1338->g_1139.s2, "p_1338->g_1139.s2", print_hash_value);
    transparent_crc(p_1338->g_1139.s3, "p_1338->g_1139.s3", print_hash_value);
    transparent_crc(p_1338->g_1139.s4, "p_1338->g_1139.s4", print_hash_value);
    transparent_crc(p_1338->g_1139.s5, "p_1338->g_1139.s5", print_hash_value);
    transparent_crc(p_1338->g_1139.s6, "p_1338->g_1139.s6", print_hash_value);
    transparent_crc(p_1338->g_1139.s7, "p_1338->g_1139.s7", print_hash_value);
    transparent_crc(p_1338->g_1173.s0, "p_1338->g_1173.s0", print_hash_value);
    transparent_crc(p_1338->g_1173.s1, "p_1338->g_1173.s1", print_hash_value);
    transparent_crc(p_1338->g_1173.s2, "p_1338->g_1173.s2", print_hash_value);
    transparent_crc(p_1338->g_1173.s3, "p_1338->g_1173.s3", print_hash_value);
    transparent_crc(p_1338->g_1173.s4, "p_1338->g_1173.s4", print_hash_value);
    transparent_crc(p_1338->g_1173.s5, "p_1338->g_1173.s5", print_hash_value);
    transparent_crc(p_1338->g_1173.s6, "p_1338->g_1173.s6", print_hash_value);
    transparent_crc(p_1338->g_1173.s7, "p_1338->g_1173.s7", print_hash_value);
    transparent_crc(p_1338->g_1173.s8, "p_1338->g_1173.s8", print_hash_value);
    transparent_crc(p_1338->g_1173.s9, "p_1338->g_1173.s9", print_hash_value);
    transparent_crc(p_1338->g_1173.sa, "p_1338->g_1173.sa", print_hash_value);
    transparent_crc(p_1338->g_1173.sb, "p_1338->g_1173.sb", print_hash_value);
    transparent_crc(p_1338->g_1173.sc, "p_1338->g_1173.sc", print_hash_value);
    transparent_crc(p_1338->g_1173.sd, "p_1338->g_1173.sd", print_hash_value);
    transparent_crc(p_1338->g_1173.se, "p_1338->g_1173.se", print_hash_value);
    transparent_crc(p_1338->g_1173.sf, "p_1338->g_1173.sf", print_hash_value);
    transparent_crc(p_1338->g_1232, "p_1338->g_1232", print_hash_value);
    transparent_crc(p_1338->v_collective, "p_1338->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 69; i++)
            transparent_crc(p_1338->g_special_values[i + 69 * get_linear_group_id()], "p_1338->g_special_values[i + 69 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 69; i++)
            transparent_crc(p_1338->l_special_values[i], "p_1338->l_special_values[i]", print_hash_value);
    transparent_crc(p_1338->l_comm_values[get_linear_local_id()], "p_1338->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1338->g_comm_values[get_linear_group_id() * 40 + get_linear_local_id()], "p_1338->g_comm_values[get_linear_group_id() * 40 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
