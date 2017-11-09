// --atomics 3 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 89,59,1 -l 89,1,1
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

__constant uint32_t permutations[10][89] = {
{51,31,53,46,65,63,30,33,2,57,14,60,11,69,9,83,80,20,50,64,39,47,5,73,40,75,42,82,84,68,29,26,72,17,55,44,56,32,87,70,74,28,25,76,35,10,66,49,36,86,22,13,27,21,4,23,81,85,16,71,0,19,59,24,6,12,34,62,77,52,48,58,38,67,7,61,8,18,88,41,1,43,15,3,37,78,79,45,54}, // permutation 0
{72,32,15,60,39,29,4,56,55,41,54,36,28,79,26,17,50,12,88,33,62,10,86,67,13,48,23,44,16,42,58,1,11,73,9,65,25,61,81,43,18,64,82,6,14,3,78,49,70,34,27,35,57,19,0,84,21,45,46,87,37,80,31,52,24,75,38,71,47,20,83,59,63,8,30,68,53,51,74,69,85,22,2,5,77,76,40,66,7}, // permutation 1
{32,83,22,54,28,78,20,62,39,53,57,67,5,47,4,43,11,33,42,49,29,85,45,50,51,21,81,13,17,88,19,68,63,7,48,74,56,23,24,75,38,70,31,76,34,16,61,46,66,87,64,14,84,80,8,27,65,18,71,58,9,35,86,60,1,10,59,6,52,30,69,79,0,72,41,3,26,44,73,77,25,40,15,2,37,36,82,55,12}, // permutation 2
{3,29,30,84,11,76,2,38,58,68,8,4,50,25,33,64,59,16,63,13,41,44,0,87,82,12,10,49,70,61,40,27,45,52,37,54,5,73,55,78,79,75,85,83,21,74,31,65,43,36,88,56,77,15,39,57,35,72,14,24,46,69,51,66,7,48,53,26,19,86,80,17,18,67,9,20,34,60,47,22,6,1,42,71,81,28,62,23,32}, // permutation 3
{4,84,58,28,9,88,21,67,35,17,0,22,27,39,3,14,15,75,44,29,48,25,13,60,34,20,57,40,49,8,64,12,42,70,51,53,59,16,50,81,54,47,31,80,6,77,38,52,11,43,46,61,66,32,24,18,26,76,69,45,19,2,62,83,79,82,55,1,23,30,33,65,63,68,56,72,85,10,5,78,74,7,86,87,73,36,41,71,37}, // permutation 4
{31,43,47,26,25,76,19,39,88,16,59,7,58,84,10,44,48,24,72,14,49,82,15,64,67,18,45,74,23,41,75,63,54,0,28,57,4,42,55,30,66,9,1,71,69,22,56,12,20,27,52,38,77,5,65,6,46,37,35,61,80,50,40,79,17,32,86,70,60,36,21,13,85,53,73,2,3,87,78,51,81,34,11,68,8,33,62,83,29}, // permutation 5
{43,81,84,15,13,24,2,31,37,51,6,73,32,66,85,83,86,60,4,11,28,7,46,75,40,29,16,47,9,71,56,68,79,8,54,12,14,49,27,55,77,58,62,35,0,67,64,30,33,53,38,17,23,70,48,59,82,25,39,65,3,22,41,57,36,20,5,87,74,50,19,42,34,18,26,80,63,10,52,1,44,72,21,45,88,76,61,78,69}, // permutation 6
{46,22,28,76,19,4,86,25,66,88,74,21,37,43,13,41,81,47,78,87,20,63,57,64,65,27,56,23,52,24,36,12,8,67,35,69,26,48,3,75,77,44,18,73,31,34,82,30,83,49,45,5,58,54,9,39,72,32,6,15,51,10,79,38,11,85,70,7,14,2,84,40,29,55,42,16,60,50,71,62,1,61,59,53,0,33,17,68,80}, // permutation 7
{59,69,25,20,14,26,5,42,60,6,64,58,47,45,85,53,19,73,1,65,55,80,77,52,79,71,2,82,40,7,81,72,63,15,41,21,35,75,67,70,78,12,9,50,48,8,61,0,39,37,18,30,86,76,29,49,38,24,32,13,4,16,31,36,51,3,88,23,87,28,17,54,56,74,44,84,43,46,10,33,66,34,22,57,83,68,62,27,11}, // permutation 8
{35,7,12,52,4,31,42,3,66,1,53,64,27,20,29,43,36,21,28,44,56,73,82,57,45,68,25,88,51,15,24,49,19,60,85,55,38,81,80,16,77,9,39,10,13,47,23,75,59,22,72,67,37,34,54,86,79,62,33,32,70,69,18,61,74,71,8,0,76,50,17,5,30,78,11,87,65,46,63,84,48,40,83,6,41,2,14,58,26} // permutation 9
};

// Seed: 2140422108

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   uint8_t  f1;
   volatile int64_t  f2;
   volatile uint64_t  f3;
   int8_t  f4;
   volatile uint64_t  f5;
   int32_t  f6;
   int64_t  f7;
   uint32_t  f8;
};

struct S1 {
   volatile uint64_t  f0;
   int16_t  f1;
   int64_t  f2;
};

struct S2 {
    volatile int32_t g_2;
    int32_t g_3;
    int32_t g_29;
    int32_t **g_52;
    int32_t g_113;
    int32_t *g_112;
    int32_t g_114;
    int8_t g_116[8][7];
    int32_t ** volatile g_121;
    int32_t ** volatile g_122;
    int32_t ** volatile g_123;
    int32_t ** volatile g_124[1];
    int32_t ** volatile g_125;
    int16_t g_149;
    struct S0 g_166;
    struct S0 *g_165;
    struct S0 ** volatile g_167;
    struct S0 g_182;
    struct S0 * volatile g_181;
    struct S1 g_211;
    struct S1 * volatile g_212;
    volatile VECTOR(int64_t, 4) g_237;
    volatile struct S0 g_238;
    uint16_t g_248;
    VECTOR(int8_t, 2) g_274;
    volatile VECTOR(int8_t, 4) g_276;
    VECTOR(int8_t, 16) g_277;
    uint64_t g_284;
    struct S0 **g_311[5][6];
    struct S0 ***g_310;
    VECTOR(uint64_t, 4) g_340;
    VECTOR(int64_t, 8) g_341;
    VECTOR(uint64_t, 16) g_347;
    VECTOR(uint64_t, 2) g_349;
    VECTOR(uint32_t, 2) g_350;
    VECTOR(uint32_t, 4) g_354;
    uint8_t *g_376;
    VECTOR(int32_t, 16) g_400;
    volatile struct S0 g_408;
    volatile VECTOR(int8_t, 8) g_418;
    VECTOR(int8_t, 8) g_419;
    VECTOR(int8_t, 8) g_432;
    volatile struct S0 g_439[3];
    int8_t *g_440[3][10][4];
    volatile VECTOR(uint32_t, 16) g_459;
    struct S1 g_496;
    volatile int64_t *g_503;
    volatile VECTOR(int16_t, 4) g_509;
    struct S0 ****g_527;
    struct S0 g_529;
    VECTOR(int8_t, 16) g_546;
    VECTOR(int32_t, 8) g_548;
    uint32_t g_580;
    struct S1 g_584[10][4][2];
    struct S0 **g_593;
    VECTOR(int64_t, 8) g_605;
    int32_t **g_611;
    volatile struct S1 g_617[2];
    volatile struct S1 g_618;
    VECTOR(int32_t, 16) g_633;
    volatile VECTOR(int16_t, 8) g_691;
    volatile VECTOR(int64_t, 8) g_705;
    volatile VECTOR(int64_t, 2) g_709;
    volatile struct S1 g_713[8];
    volatile VECTOR(uint16_t, 2) g_716;
    VECTOR(uint16_t, 16) g_717;
    volatile VECTOR(uint16_t, 4) g_718;
    VECTOR(uint16_t, 8) g_719;
    VECTOR(int16_t, 2) g_747;
    uint32_t g_789[4];
    int16_t g_790;
    int8_t g_791;
    VECTOR(int32_t, 16) g_805;
    struct S1 g_845;
    struct S1 * volatile g_846;
    VECTOR(int32_t, 8) g_873;
    VECTOR(int32_t, 8) g_887;
    struct S1 g_898;
    volatile int16_t g_911;
    int64_t g_918;
    volatile VECTOR(uint8_t, 8) g_928;
    VECTOR(int8_t, 4) g_943;
    VECTOR(int8_t, 2) g_945;
    int16_t g_974;
    volatile VECTOR(int32_t, 2) g_999;
    VECTOR(uint8_t, 2) g_1020;
    struct S1 * volatile g_1037;
    int32_t ***g_1041;
    VECTOR(int32_t, 2) g_1045;
    VECTOR(int32_t, 2) g_1046;
    VECTOR(uint16_t, 8) g_1054;
    struct S1 g_1073;
    struct S0 g_1088;
    struct S1 g_1097;
    VECTOR(uint64_t, 8) g_1104;
    struct S0 g_1115;
    int32_t *g_1144;
    struct S0 g_1145;
    struct S0 g_1146;
    int32_t ** volatile g_1169[2][9];
    VECTOR(uint8_t, 8) g_1191;
    int32_t *g_1215;
    int32_t *g_1224;
    VECTOR(int32_t, 8) g_1246;
    VECTOR(int32_t, 16) g_1248;
    VECTOR(uint32_t, 4) g_1259;
    VECTOR(uint32_t, 16) g_1260;
    volatile struct S0 g_1265;
    VECTOR(int16_t, 4) g_1271;
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
uint8_t  func_1(struct S2 * p_1284);
int32_t * func_9(uint32_t  p_10, int32_t * p_11, int64_t  p_12, int32_t  p_13, int32_t  p_14, struct S2 * p_1284);
int32_t * func_16(uint32_t  p_17, int64_t  p_18, int16_t  p_19, int16_t  p_20, struct S2 * p_1284);
int32_t  func_30(int32_t ** p_31, int32_t * p_32, int64_t  p_33, struct S2 * p_1284);
int32_t ** func_34(uint32_t  p_35, int16_t  p_36, uint16_t  p_37, int32_t * p_38, struct S2 * p_1284);
int32_t * func_59(int32_t ** p_60, int32_t  p_61, int16_t  p_62, int32_t  p_63, struct S2 * p_1284);
uint32_t  func_76(uint16_t  p_77, int32_t ** p_78, uint16_t  p_79, uint32_t  p_80, struct S2 * p_1284);
int32_t  func_81(uint8_t  p_82, int32_t ** p_83, uint32_t  p_84, int32_t  p_85, uint16_t  p_86, struct S2 * p_1284);
uint32_t  func_95(int32_t ** p_96, int16_t  p_97, int16_t  p_98, struct S2 * p_1284);
int32_t ** func_99(int8_t  p_100, int16_t  p_101, int32_t ** p_102, int32_t ** p_103, uint32_t  p_104, struct S2 * p_1284);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1284->g_3 p_1284->g_29 p_1284->g_2 p_1284->g_52 p_1284->g_611 p_1284->g_709 p_1284->g_432 p_1284->g_529.f1 p_1284->g_887 p_1284->g_440 p_1284->g_439.f8 p_1284->g_376 p_1284->g_166.f1 p_1284->g_503 p_1284->g_238.f2 p_1284->g_548 p_1284->g_284 p_1284->g_113 p_1284->g_121 p_1284->g_873 p_1284->g_418 p_1284->g_943 p_1284->g_527 p_1284->g_310 p_1284->g_349 p_1284->g_846 p_1284->g_584 p_1284->g_1037 p_1284->g_529.f6 p_1284->g_400 p_1284->g_1045 p_1284->g_1046 p_1284->g_1054 p_1284->g_248 p_1284->g_845.f1 p_1284->g_1088 p_1284->g_182.f6 p_1284->g_419 p_1284->g_1097 p_1284->g_277 p_1284->g_1104 p_1284->g_1041 p_1284->g_182.f1 p_1284->g_112 p_1284->g_1115 p_1284->g_618.f2 p_1284->g_1144 p_1284->g_1145 p_1284->g_238.f7 p_1284->g_717 p_1284->g_439.f2 p_1284->g_182.f7 p_1284->g_1191 p_1284->g_408.f8 p_1284->g_1020 p_1284->g_166.f4 p_1284->g_1215 p_1284->g_1224 p_1284->g_274 p_1284->g_791 p_1284->g_1259 p_1284->g_1260 p_1284->g_166.f7 p_1284->g_805 p_1284->g_1265 p_1284->g_1271 p_1284->g_529.f0 p_1284->g_1073.f2
 * writes: p_1284->g_3 p_1284->g_29 p_1284->g_529.f8 p_1284->g_112 p_1284->g_529.f7 p_1284->g_113 p_1284->g_791 p_1284->g_182.f4 p_1284->g_873 p_1284->g_584 p_1284->g_1041 p_1284->g_248 p_1284->g_845.f1 p_1284->g_1073 p_1284->g_52 p_1284->g_182.f6 p_1284->g_182.f1 p_1284->g_1097.f1 p_1284->g_166.f1 p_1284->g_1146 p_1284->g_527 p_1284->g_1097.f2 p_1284->g_1088.f8 p_1284->g_116 p_1284->g_349 p_1284->g_1115.f7 p_1284->g_1115.f4 p_1284->g_166.f4 p_1284->g_496.f1
 */
uint8_t  func_1(struct S2 * p_1284)
{ /* block id: 4 */
    int32_t *l_15 = &p_1284->g_3;
    int32_t *l_28[10] = {&p_1284->g_29,&p_1284->g_29,&p_1284->g_29,&p_1284->g_29,&p_1284->g_29,&p_1284->g_29,&p_1284->g_29,&p_1284->g_29,&p_1284->g_29,&p_1284->g_29};
    VECTOR(int32_t, 4) l_1247 = (VECTOR(int32_t, 4))(0x7D5C0F90L, (VECTOR(int32_t, 2))(0x7D5C0F90L, 0x61B1E83DL), 0x61B1E83DL);
    uint16_t l_1266 = 65533UL;
    int8_t l_1278[4][10] = {{0x16L,0x06L,0x12L,0x06L,0x16L,0x16L,0x06L,0x12L,0x06L,0x16L},{0x16L,0x06L,0x12L,0x06L,0x16L,0x16L,0x06L,0x12L,0x06L,0x16L},{0x16L,0x06L,0x12L,0x06L,0x16L,0x16L,0x06L,0x12L,0x06L,0x16L},{0x16L,0x06L,0x12L,0x06L,0x16L,0x16L,0x06L,0x12L,0x06L,0x16L}};
    int32_t l_1283 = 5L;
    int i, j;
    for (p_1284->g_3 = 25; (p_1284->g_3 <= (-22)); p_1284->g_3 = safe_sub_func_int32_t_s_s(p_1284->g_3, 1))
    { /* block id: 7 */
        VECTOR(uint16_t, 8) l_25 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65535UL), 65535UL), 65535UL, 65535UL, 65535UL);
        int32_t *l_26 = &p_1284->g_3;
        int32_t **l_27[5];
        uint64_t l_1258 = 0x393D14CE1CF4778CL;
        int32_t l_1272 = 1L;
        int64_t *l_1273 = (void*)0;
        int16_t *l_1276 = &p_1284->g_496.f1;
        uint32_t l_1277 = 7UL;
        int i;
        for (i = 0; i < 5; i++)
            l_27[i] = &l_26;
        if ((atomic_inc(&p_1284->g_atomic_input[3 * get_linear_group_id() + 2]) == 0))
        { /* block id: 9 */
            int16_t l_6 = 0x425BL;
            int32_t l_7 = 1L;
            struct S0 l_8[6] = {{0xAB56411DL,0xFEL,0x6215169FF4CAA5D7L,0UL,4L,9UL,1L,0x52AE857B1A094951L,0UL},{0UL,0x85L,-1L,18446744073709551614UL,0x40L,18446744073709551615UL,1L,-7L,4294967294UL},{0xAB56411DL,0xFEL,0x6215169FF4CAA5D7L,0UL,4L,9UL,1L,0x52AE857B1A094951L,0UL},{0xAB56411DL,0xFEL,0x6215169FF4CAA5D7L,0UL,4L,9UL,1L,0x52AE857B1A094951L,0UL},{0UL,0x85L,-1L,18446744073709551614UL,0x40L,18446744073709551615UL,1L,-7L,4294967294UL},{0xAB56411DL,0xFEL,0x6215169FF4CAA5D7L,0UL,4L,9UL,1L,0x52AE857B1A094951L,0UL}};
            int i;
            l_7 = l_6;
            l_8[5] = l_8[5];
            unsigned int result = 0;
            result += l_6;
            result += l_7;
            int l_8_i0;
            for (l_8_i0 = 0; l_8_i0 < 6; l_8_i0++) {
                result += l_8[l_8_i0].f0;
                result += l_8[l_8_i0].f1;
                result += l_8[l_8_i0].f2;
                result += l_8[l_8_i0].f3;
                result += l_8[l_8_i0].f4;
                result += l_8[l_8_i0].f5;
                result += l_8[l_8_i0].f6;
                result += l_8[l_8_i0].f7;
                result += l_8[l_8_i0].f8;
            }
            atomic_add(&p_1284->g_special_values[3 * get_linear_group_id() + 2], result);
        }
        else
        { /* block id: 12 */
            (1 + 1);
        }
        (*p_1284->g_611) = func_9((l_15 == ((*l_15) , (l_28[4] = ((*p_1284->g_611) = func_16(p_1284->g_3, (((((safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(l_25.s0, l_25.s2)), GROUP_DIVERGE(1, 1))) || (l_15 == (l_28[4] = l_26))) && func_30(func_34(p_1284->g_29, p_1284->g_2, p_1284->g_29, l_28[4], p_1284), l_28[4], p_1284->g_349.x, p_1284)) >= p_1284->g_529.f6) , (-7L)), p_1284->g_166.f1, p_1284->g_400.s7, p_1284))))), &p_1284->g_3, (*l_15), p_1284->g_548.s6, (*l_15), p_1284);
        for (p_1284->g_1097.f2 = 0; (p_1284->g_1097.f2 < 2); p_1284->g_1097.f2 = safe_add_func_int16_t_s_s(p_1284->g_1097.f2, 1))
        { /* block id: 559 */
            int32_t l_1229[2][7] = {{9L,9L,9L,9L,9L,9L,9L},{9L,9L,9L,9L,9L,9L,9L}};
            VECTOR(int8_t, 8) l_1242 = (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x49L), 0x49L), 0x49L, 8L, 0x49L);
            int32_t *l_1257 = &p_1284->g_29;
            int i, j;
            for (p_1284->g_845.f1 = (-5); (p_1284->g_845.f1 >= (-23)); p_1284->g_845.f1 = safe_sub_func_int32_t_s_s(p_1284->g_845.f1, 9))
            { /* block id: 562 */
                uint64_t l_1230 = 8UL;
                int64_t *l_1231 = (void*)0;
                int64_t *l_1232[8][3][10] = {{{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2}},{{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2}},{{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2}},{{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2}},{{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2}},{{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2}},{{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2}},{{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2},{&p_1284->g_1097.f2,&p_1284->g_182.f7,&p_1284->g_898.f2,&p_1284->g_211.f2,&p_1284->g_918,&p_1284->g_1073.f2,&p_1284->g_529.f7,&p_1284->g_898.f2,&p_1284->g_845.f2,&p_1284->g_584[0][3][1].f2}}};
                int32_t l_1233 = (-1L);
                int8_t *l_1243 = &p_1284->g_1115.f4;
                uint16_t l_1245 = 65526UL;
                int8_t *l_1255 = &p_1284->g_791;
                int8_t *l_1256 = &p_1284->g_166.f4;
                int i, j, k;
                (*p_1284->g_1224) = l_1229[0][5];
                if ((*p_1284->g_1144))
                    break;
                l_1230 = l_1229[1][2];
                l_1257 = ((*p_1284->g_611) = func_16((*l_15), (*p_1284->g_503), p_1284->g_845.f1, ((l_1233 ^= (((VECTOR(uint32_t, 2))(0x66C579AFL, 0x3741261BL)).odd , ((*p_1284->g_1144) != (*p_1284->g_1224)))) != (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((*l_1243) = ((VECTOR(int8_t, 4))(l_1242.s1605)).w), (safe_unary_minus_func_uint64_t_u((l_1245 | ((p_1284->g_274.x && ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(p_1284->g_1246.s47)), ((VECTOR(int32_t, 16))(l_1247.wzzwxwzxzxyyywyw)).s2c, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(p_1284->g_1248.s54cb9029a3ea9037)))).s15))).yyxxyyxyxyxxyyxx, ((VECTOR(int32_t, 2))(0x077A2640L, (-1L))).yxyxyyyxyyyyyyxy))).s9) | (safe_lshift_func_uint8_t_u_s(l_1230, ((*l_1256) |= ((*l_1255) |= (((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((*l_26), (*l_26))), 1)) != (*p_1284->g_376)) == p_1284->g_1054.s7))))))))))), 0xE690L)), l_1230)), l_1245))), p_1284));
            }
            (*p_1284->g_1224) = 0x3C553CF9L;
            p_1284->g_873.s2 |= (l_1258 , (((((*l_1257) | ((VECTOR(uint32_t, 8))(0x1C121D57L, ((VECTOR(uint32_t, 2))(p_1284->g_1259.ww)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(p_1284->g_1260.s7b37)))), 0x0E9670E3L)).s3) && 0xBF8A8C09L) >= ((safe_div_func_int8_t_s_s(((0x3CL >= ((*l_1257) | p_1284->g_166.f7)) ^ ((p_1284->g_805.sb , (*p_1284->g_376)) == (safe_div_func_int32_t_s_s((p_1284->g_1265 , (*l_1257)), FAKE_DIVERGE(p_1284->local_1_offset, get_local_id(1), 10))))), 0x2AL)) , l_1266)) , (*l_1257)));
            return (*p_1284->g_376);
        }
        if (((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((-1L), (safe_div_func_int8_t_s_s(((p_1284->g_1115.f2 == (safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 16))(p_1284->g_1271.yyxyzyywzxwxyxyx)).sb, ((((((l_1272 , 0x7ED7L) , l_1273) == &p_1284->g_918) == 1L) || (*l_26)) , p_1284->g_529.f0)))) || (safe_sub_func_int16_t_s_s(((*l_1276) = p_1284->g_1073.f2), 0x0015L))), l_1277)), ((VECTOR(int32_t, 4))(0L)), 0x30450797L, (*p_1284->g_1224), 1L, (*p_1284->g_1144), ((VECTOR(int32_t, 2))(0x7B4E8491L)), ((VECTOR(int32_t, 4))(5L)))))), ((VECTOR(int32_t, 16))(0x20CFA83EL))))).sb)
        { /* block id: 578 */
            int8_t l_1279 = 1L;
            uint32_t l_1280[2][4] = {{0x0E3C0696L,0x12FADB03L,0x0E3C0696L,0x0E3C0696L},{0x0E3C0696L,0x12FADB03L,0x0E3C0696L,0x0E3C0696L}};
            int i, j;
            l_1280[0][3]++;
        }
        else
        { /* block id: 580 */
            return (*p_1284->g_376);
        }
    }
    return l_1283;
}


/* ------------------------------------------ */
/* 
 * reads : p_1284->g_1045 p_1284->g_1046 p_1284->g_29 p_1284->g_1037 p_1284->g_584 p_1284->g_1054 p_1284->g_248 p_1284->g_3 p_1284->g_503 p_1284->g_238.f2 p_1284->g_400 p_1284->g_611 p_1284->g_845.f1 p_1284->g_846 p_1284->g_1088 p_1284->g_548 p_1284->g_182.f6 p_1284->g_419 p_1284->g_1097 p_1284->g_277 p_1284->g_1104 p_1284->g_1041 p_1284->g_52 p_1284->g_182.f1 p_1284->g_112 p_1284->g_1115 p_1284->g_618.f2 p_1284->g_376 p_1284->g_166.f1 p_1284->g_1144 p_1284->g_1145 p_1284->g_238.f7 p_1284->g_717 p_1284->g_943 p_1284->g_439.f2 p_1284->g_349 p_1284->g_310 p_1284->g_182.f7 p_1284->g_1191 p_1284->g_408.f8 p_1284->g_1020 p_1284->g_166.f4 p_1284->g_1215 p_1284->g_1224
 * writes: p_1284->g_1041 p_1284->g_29 p_1284->g_248 p_1284->g_112 p_1284->g_845.f1 p_1284->g_1073 p_1284->g_52 p_1284->g_182.f6 p_1284->g_182.f1 p_1284->g_1097.f1 p_1284->g_166.f1 p_1284->g_1146 p_1284->g_527 p_1284->g_1097.f2 p_1284->g_1088.f8 p_1284->g_116 p_1284->g_349 p_1284->g_113 p_1284->g_1115.f7
 */
int32_t * func_9(uint32_t  p_10, int32_t * p_11, int64_t  p_12, int32_t  p_13, int32_t  p_14, struct S2 * p_1284)
{ /* block id: 455 */
    int32_t ***l_1040 = &p_1284->g_52;
    int32_t ***l_1042 = &p_1284->g_52;
    int32_t ****l_1043 = &l_1042;
    VECTOR(int32_t, 2) l_1044 = (VECTOR(int32_t, 2))((-1L), 0x03B2CCF5L);
    VECTOR(int32_t, 2) l_1047 = (VECTOR(int32_t, 2))(0L, 0x358EC2D7L);
    int32_t *l_1048 = (void*)0;
    int32_t *l_1049 = (void*)0;
    int32_t *l_1050 = (void*)0;
    int32_t *l_1051 = (void*)0;
    int32_t *l_1052 = &p_1284->g_29;
    VECTOR(uint32_t, 8) l_1053 = (VECTOR(uint32_t, 8))(4294967287UL, (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 4294967290UL), 4294967290UL), 4294967290UL, 4294967287UL, 4294967290UL);
    VECTOR(uint16_t, 4) l_1055 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xB037L), 0xB037L);
    uint16_t *l_1056 = &p_1284->g_248;
    int8_t **l_1061 = &p_1284->g_440[1][1][0];
    struct S0 ****l_1063 = &p_1284->g_310;
    int16_t l_1081 = 1L;
    int32_t l_1082[5][1];
    VECTOR(int8_t, 2) l_1128 = (VECTOR(int8_t, 2))(0x66L, 0x07L);
    struct S0 *****l_1187 = &p_1284->g_527;
    uint64_t l_1210 = 0x13CC8200D372E299L;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_1082[i][j] = 0x5FB370E4L;
    }
    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x23D628B6L, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x2C932196L, (-1L))), ((p_1284->g_1041 = (l_1040 = l_1040)) == ((*l_1043) = l_1042)), ((VECTOR(int32_t, 4))(l_1044.xxxy)), (-1L))).s41, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0L, 0L, 0L, (-1L))).zwxxzwyzyzxwzzxx)).odd)).s75, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(0L, 0L)), ((VECTOR(int32_t, 4))(p_1284->g_1045.xyyy)).hi)))))).xyxx, ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(p_1284->g_1046.xyxxxyxyyxyxyyxy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1047.yyxy)), ((((((*l_1052) &= 0L) <= (p_14 , 0x1BE465EAL)) | (((*p_1284->g_1037) , ((((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 16))(l_1053.s1240652161021363)).s46ae, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1284->g_1054.s3724)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_1055.ww)).yyyy)))))).odd))), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((*l_1056) ^= p_12), 0UL, ((VECTOR(uint16_t, 8))(0UL, 0xEACEL, (++(*l_1056)), ((VECTOR(uint16_t, 4))((safe_add_func_int16_t_s_s(0x3C00L, 0L)), ((VECTOR(uint16_t, 2))(65533UL)), 0x1C49L)), 0x7A59L)), 0x23CFL, 0x8C69L, 65535UL, ((VECTOR(uint16_t, 2))(0x5560L)), 65531UL)).sfc37)), 1UL, 0UL, 0x544AL, 0x424AL)).lo))).zwywzyxw)).odd))).zwwxwzww, ((VECTOR(uint64_t, 8))(0xEE58E40431E32782L))))).s7 , l_1061) != &p_1284->g_440[2][9][1])) & p_13)) >= 0x101AL) ^ p_10), (*p_11), 0x3C6EA174L, ((VECTOR(int32_t, 4))((-1L))), (*p_11), 0L, (*l_1052), 0x197090E8L, 0x6DF92DCFL))))).s7e19))).xyyxwwyyxxwxzzzw)).even)).s40, ((VECTOR(int32_t, 2))(0x0CCC5B7AL))))), 0x545308B3L)).xzzwxzxw)).s2221277371666055)).s1)
    { /* block id: 462 */
        uint32_t l_1062[5];
        int32_t ***l_1066 = &p_1284->g_52;
        int8_t l_1074 = 0L;
        int32_t l_1079 = 0x03D0E84AL;
        int32_t l_1083 = (-3L);
        int32_t l_1084 = (-6L);
        uint32_t *l_1103 = (void*)0;
        int i;
        for (i = 0; i < 5; i++)
            l_1062[i] = 0xC8F17D2AL;
        (*p_1284->g_611) = func_16(((void*)0 != &p_1284->g_212), (*p_1284->g_503), p_10, (((l_1062[3] ^ p_13) && ((l_1063 == (void*)0) != (((safe_lshift_func_uint16_t_u_u(p_1284->g_400.sa, 0)) , l_1066) != (void*)0))) , 0x0450L), p_1284);
        for (p_1284->g_845.f1 = 0; (p_1284->g_845.f1 > 17); ++p_1284->g_845.f1)
        { /* block id: 466 */
            int8_t ***l_1070[1];
            int8_t ****l_1069 = &l_1070[0];
            int8_t ***l_1072 = &l_1061;
            int8_t ****l_1071 = &l_1072;
            int32_t l_1076 = 0x6CF224A1L;
            int32_t l_1080 = 0x4B7D6A0DL;
            int i;
            for (i = 0; i < 1; i++)
                l_1070[i] = &l_1061;
            (*p_1284->g_611) = &p_14;
            if ((((*l_1069) = (void*)0) == ((*l_1071) = &l_1061)))
            { /* block id: 470 */
                int32_t l_1075[1];
                int32_t *l_1077 = &l_1075[0];
                int32_t *l_1078[4][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                uint32_t l_1085 = 4294967295UL;
                VECTOR(int16_t, 16) l_1098 = (VECTOR(int16_t, 16))(0x2566L, (VECTOR(int16_t, 4))(0x2566L, (VECTOR(int16_t, 2))(0x2566L, 0x3BDDL), 0x3BDDL), 0x3BDDL, 0x2566L, 0x3BDDL, (VECTOR(int16_t, 2))(0x2566L, 0x3BDDL), (VECTOR(int16_t, 2))(0x2566L, 0x3BDDL), 0x2566L, 0x3BDDL, 0x2566L, 0x3BDDL);
                int i, j;
                for (i = 0; i < 1; i++)
                    l_1075[i] = 0x7A0EEBB4L;
                p_1284->g_1073 = (*p_1284->g_846);
                --l_1085;
                p_11 = func_16(p_1284->g_29, (&p_1284->g_1041 != ((p_1284->g_1088 , p_1284->g_548.s5) , (void*)0)), p_1284->g_584[0][3][1].f1, (((safe_div_func_uint8_t_u_u(((p_13 != (p_1284->g_182.f6 ^ ((safe_mod_func_int8_t_s_s((p_10 ^ p_10), 0x1FL)) ^ p_13))) , (*l_1077)), 255UL)) < 0L) , p_1284->g_419.s4), p_1284);
                (*l_1077) = (((safe_div_func_uint64_t_u_u(p_13, (l_1076 = ((p_1284->g_1097 , ((VECTOR(int16_t, 4))(l_1098.see57)).x) && p_13)))) ^ ((~(*p_11)) >= (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((l_1103 != l_1103) >= (((p_1284->g_277.sc || ((VECTOR(uint64_t, 4))(18446744073709551613UL, ((VECTOR(uint64_t, 2))(p_1284->g_1104.s31)), 0x06EF6B88B6254C8CL)).y) , &p_11) != ((*l_1066) = (*p_1284->g_1041)))), p_13)), 0x14L)))) > (*p_11));
            }
            else
            { /* block id: 477 */
                for (p_1284->g_182.f6 = 0; (p_1284->g_182.f6 != (-19)); p_1284->g_182.f6 = safe_sub_func_int8_t_s_s(p_1284->g_182.f6, 3))
                { /* block id: 480 */
                    int32_t *l_1107 = (void*)0;
                    return l_1107;
                }
            }
        }
    }
    else
    { /* block id: 485 */
        int32_t l_1129 = 0x6E84A847L;
        VECTOR(int64_t, 16) l_1138 = (VECTOR(int64_t, 16))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), 0x75F0E34AEA4510FEL), 0x75F0E34AEA4510FEL), 0x75F0E34AEA4510FEL, (-5L), 0x75F0E34AEA4510FEL, (VECTOR(int64_t, 2))((-5L), 0x75F0E34AEA4510FEL), (VECTOR(int64_t, 2))((-5L), 0x75F0E34AEA4510FEL), (-5L), 0x75F0E34AEA4510FEL, (-5L), 0x75F0E34AEA4510FEL);
        int32_t *l_1143 = &l_1082[3][0];
        struct S0 ****l_1147[7] = {&p_1284->g_310,&p_1284->g_310,&p_1284->g_310,&p_1284->g_310,&p_1284->g_310,&p_1284->g_310,&p_1284->g_310};
        struct S0 *****l_1148 = &l_1147[6];
        struct S0 *****l_1149 = (void*)0;
        uint64_t l_1209[6] = {0x5AB3D15F40403958L,0x8CDE005F4FD3F261L,0x5AB3D15F40403958L,0x5AB3D15F40403958L,0x8CDE005F4FD3F261L,0x5AB3D15F40403958L};
        int i;
        for (p_1284->g_182.f1 = 0; (p_1284->g_182.f1 == 6); p_1284->g_182.f1++)
        { /* block id: 488 */
            int32_t l_1114 = 0L;
            int64_t *l_1124 = (void*)0;
            int64_t *l_1125[6][8][2] = {{{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7}},{{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7}},{{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7}},{{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7}},{{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7}},{{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7},{&p_1284->g_211.f2,&p_1284->g_166.f7}}};
            int16_t *l_1141 = (void*)0;
            int16_t *l_1142 = &p_1284->g_1097.f1;
            int i, j, k;
            (*l_1052) ^= (**p_1284->g_611);
            if (((~(safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((l_1114 , p_1284->g_1115) , (safe_mod_func_uint64_t_u_u(0xBDCB8D0FAD54E1C5L, ((safe_div_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(253UL, (safe_div_func_uint32_t_u_u(p_1284->g_618.f2, ((((p_12 = 0x3792EE285DC93013L) || (((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_1128.yxyx)).wzzxxwxw)).s0, l_1129)) <= ((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 16))(((*p_1284->g_376) ^= (((*l_1142) = (safe_sub_func_int8_t_s_s(p_10, (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 2))(l_1138.sfd)).even, (safe_lshift_func_int16_t_s_u(l_1114, 9)))), p_12)), l_1114))))) && GROUP_DIVERGE(1, 1))), 7UL, 0xBCL, (*p_1284->g_376), 8UL, 255UL, GROUP_DIVERGE(2, 1), (*p_1284->g_376), 248UL, GROUP_DIVERGE(2, 1), ((VECTOR(uint8_t, 2))(0xB5L)), (*p_1284->g_376), ((VECTOR(uint8_t, 2))(0x0AL)), 1UL)).odd, ((VECTOR(uint8_t, 8))(0x27L))))).s6114110377166750, ((VECTOR(uint8_t, 16))(0xAFL))))).s1) < 0UL)) < (-1L)) , l_1138.sf))))), 0xB49E26B4FB3E8E41L)) ^ 65535UL)))), 3)), GROUP_DIVERGE(1, 1)))) == FAKE_DIVERGE(p_1284->local_1_offset, get_local_id(1), 10)))
            { /* block id: 493 */
                return p_1284->g_1144;
            }
            else
            { /* block id: 495 */
                p_1284->g_1146 = p_1284->g_1145;
            }
        }
        (*l_1143) = ((l_1063 = (p_1284->g_527 = ((*l_1148) = l_1147[6]))) == &p_1284->g_310);
        for (p_1284->g_1097.f2 = 0; (p_1284->g_1097.f2 < 18); ++p_1284->g_1097.f2)
        { /* block id: 505 */
            int8_t l_1154 = 9L;
            VECTOR(int8_t, 16) l_1165 = (VECTOR(int8_t, 16))(0x7DL, (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, 0x60L), 0x60L), 0x60L, 0x7DL, 0x60L, (VECTOR(int8_t, 2))(0x7DL, 0x60L), (VECTOR(int8_t, 2))(0x7DL, 0x60L), 0x7DL, 0x60L, 0x7DL, 0x60L);
            uint32_t l_1171 = 0x85E35943L;
            int32_t *l_1177 = &l_1082[0][0];
            int8_t **l_1190 = &p_1284->g_440[2][9][1];
            VECTOR(uint32_t, 16) l_1192 = (VECTOR(uint32_t, 16))(0xA2D82889L, (VECTOR(uint32_t, 4))(0xA2D82889L, (VECTOR(uint32_t, 2))(0xA2D82889L, 0x5D9208EDL), 0x5D9208EDL), 0x5D9208EDL, 0xA2D82889L, 0x5D9208EDL, (VECTOR(uint32_t, 2))(0xA2D82889L, 0x5D9208EDL), (VECTOR(uint32_t, 2))(0xA2D82889L, 0x5D9208EDL), 0xA2D82889L, 0x5D9208EDL, 0xA2D82889L, 0x5D9208EDL);
            int32_t l_1211 = (-1L);
            int32_t l_1212 = 0x104D2899L;
            int i;
            for (p_1284->g_1088.f8 = (-15); (p_1284->g_1088.f8 <= 45); p_1284->g_1088.f8++)
            { /* block id: 508 */
                VECTOR(uint32_t, 16) l_1166 = (VECTOR(uint32_t, 16))(0x7F3980D6L, (VECTOR(uint32_t, 4))(0x7F3980D6L, (VECTOR(uint32_t, 2))(0x7F3980D6L, 0x9C89C3D7L), 0x9C89C3D7L), 0x9C89C3D7L, 0x7F3980D6L, 0x9C89C3D7L, (VECTOR(uint32_t, 2))(0x7F3980D6L, 0x9C89C3D7L), (VECTOR(uint32_t, 2))(0x7F3980D6L, 0x9C89C3D7L), 0x7F3980D6L, 0x9C89C3D7L, 0x7F3980D6L, 0x9C89C3D7L);
                int8_t *l_1167 = (void*)0;
                int8_t *l_1168 = &p_1284->g_116[7][5];
                int32_t **l_1170[9];
                VECTOR(int16_t, 8) l_1179 = (VECTOR(int16_t, 8))(0x0AE9L, (VECTOR(int16_t, 4))(0x0AE9L, (VECTOR(int16_t, 2))(0x0AE9L, 4L), 4L), 4L, 0x0AE9L, 4L);
                int i;
                for (i = 0; i < 9; i++)
                    l_1170[i] = &p_1284->g_1144;
                p_11 = ((*p_1284->g_611) = func_16(l_1154, (safe_add_func_uint64_t_u_u(((void*)0 != &p_1284->g_116[2][4]), (safe_mul_func_uint16_t_u_u(((*l_1056) |= ((((p_12 , ((+(safe_div_func_int64_t_s_s(((safe_add_func_int64_t_s_s((p_1284->g_238.f7 & ((((((((*l_1168) = ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 4))(0x46L, ((VECTOR(int8_t, 2))((-9L), 0x6AL)), 0x70L)).yxxzxwwx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))((safe_add_func_int16_t_s_s((p_1284->g_1145.f4 && p_12), 65535UL)), (-8L), ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 16))(l_1165.s558cc9721a6f8f7f)).s0c, (int8_t)l_1166.s4, (int8_t)(-9L)))).xxxx, ((VECTOR(int8_t, 4))(1L))))).zywyzywwzxywwzyx, ((VECTOR(int8_t, 16))(0x74L))))).even, ((VECTOR(int8_t, 8))((-1L)))))), ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 4))(0x52L)))))).lo))).s34, ((VECTOR(int8_t, 2))(0x5DL)), ((VECTOR(int8_t, 2))(0x73L))))).hi) >= (*p_1284->g_376)) , p_10) && 0xC8L) , p_1284->g_400.s2) , p_13) != FAKE_DIVERGE(p_1284->local_2_offset, get_local_id(2), 10))), 0xC1E295F55C08D649L)) > 6L), p_1284->g_29))) ^ p_10)) == 7L) >= p_1284->g_717.sa) || (*l_1143))), p_12)))), p_10, (*l_1143), p_1284));
                l_1171 |= (p_1284->g_943.w | (*p_1284->g_503));
                for (p_14 = 28; (p_14 != (-1)); --p_14)
                { /* block id: 516 */
                    struct S0 ***l_1176[5][5][10] = {{{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593}},{{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593}},{{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593}},{{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593}},{{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593},{&p_1284->g_593,(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_311[0][2],(void*)0,&p_1284->g_593,(void*)0,&p_1284->g_593,&p_1284->g_593}}};
                    int32_t *l_1178 = &p_1284->g_113;
                    VECTOR(int16_t, 8) l_1180 = (VECTOR(int16_t, 8))(0x79EEL, (VECTOR(int16_t, 4))(0x79EEL, (VECTOR(int16_t, 2))(0x79EEL, (-1L)), (-1L)), (-1L), 0x79EEL, (-1L));
                    int i, j, k;
                    if (((safe_sub_func_uint16_t_u_u(FAKE_DIVERGE(p_1284->global_1_offset, get_global_id(1), 10), p_12)) >= (((p_1284->g_349.y &= (p_1284->g_439[1].f2 || ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0L, 0x44A3L)).yxxx)).z)) , (*l_1063)) == l_1176[0][3][5])))
                    { /* block id: 518 */
                        if ((*p_11))
                            break;
                        (*p_1284->g_611) = (void*)0;
                    }
                    else
                    { /* block id: 521 */
                        return l_1178;
                    }
                    (*l_1177) &= ((*l_1178) = (p_13 == (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_1179.s4506)), 9L, 0x77F8L, 0L, 0x71E4L, 4L, 0L, ((VECTOR(int16_t, 2))((-9L), 0x4087L)), (-5L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_1180.s30131745)).s46)), 0x78D5L)).s3 >= p_1284->g_182.f7)));
                }
            }
            l_1212 &= (((safe_add_func_int8_t_s_s(((*p_11) <= ((safe_mod_func_uint16_t_u_u((*l_1052), (safe_sub_func_int8_t_s_s((((void*)0 != l_1187) == (((safe_mod_func_int16_t_s_s((((*l_1143) < (&p_1284->g_440[2][9][1] != l_1190)) < (l_1211 = (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_1284->g_1191.s6366)), ((((VECTOR(uint32_t, 16))(l_1192.s22d64382e15ed33f)).s3 , (safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s((p_14 ^= (((((safe_rshift_func_uint8_t_u_s((*l_1177), 1)) & ((safe_rshift_func_uint16_t_u_u((((((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s((-1L), (*l_1143))), l_1209[3])) , (*p_1284->g_376)) != 7L) , (*p_11)) <= p_1284->g_408.f8), p_13)) , p_10)) != p_1284->g_182.f1) , &p_1284->g_527) == &p_1284->g_527)), (*l_1143))), p_1284->g_1088.f7)), 0x08EC4899L)), (*p_11)))) , l_1210), ((VECTOR(uint8_t, 2))(0xBDL)), (*l_1143), ((VECTOR(uint8_t, 8))(4UL)))).s656f)).w | (*l_1177)))), p_10)) & p_1284->g_1020.y) == p_1284->g_166.f4)), (*p_1284->g_376))))) , (*l_1177))), p_13)) | 1UL) & (*l_1177));
            for (p_14 = (-28); (p_14 > (-18)); p_14 = safe_add_func_int8_t_s_s(p_14, 1))
            { /* block id: 533 */
                return p_1284->g_1215;
            }
        }
        for (p_1284->g_1115.f7 = 0; (p_1284->g_1115.f7 <= 29); ++p_1284->g_1115.f7)
        { /* block id: 539 */
            int32_t *l_1220 = (void*)0;
            for (p_1284->g_1097.f1 = 0; (p_1284->g_1097.f1 < (-8)); p_1284->g_1097.f1--)
            { /* block id: 542 */
                return l_1220;
            }
            for (p_10 = 18; (p_10 == 15); p_10 = safe_sub_func_int16_t_s_s(p_10, 1))
            { /* block id: 547 */
                int16_t l_1223 = 0x4786L;
                (*l_1052) |= l_1223;
            }
        }
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1284->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 89)), permutations[(safe_mod_func_uint32_t_u_u(p_14, 10))][(safe_mod_func_uint32_t_u_u(p_1284->tid, 89))]));
    return p_1284->g_1224;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_16(uint32_t  p_17, int64_t  p_18, int16_t  p_19, int16_t  p_20, struct S2 * p_1284)
{ /* block id: 451 */
    int32_t *l_1039 = &p_1284->g_3;
    return l_1039;
}


/* ------------------------------------------ */
/* 
 * reads : p_1284->g_846 p_1284->g_584 p_1284->g_1037
 * writes: p_1284->g_584
 */
int32_t  func_30(int32_t ** p_31, int32_t * p_32, int64_t  p_33, struct S2 * p_1284)
{ /* block id: 448 */
    int64_t l_1038 = (-6L);
    (*p_1284->g_1037) = (*p_1284->g_846);
    return l_1038;
}


/* ------------------------------------------ */
/* 
 * reads : p_1284->g_3 p_1284->g_29 p_1284->g_52 p_1284->g_611 p_1284->g_709 p_1284->g_432 p_1284->g_529.f1 p_1284->g_887 p_1284->g_440 p_1284->g_439.f8 p_1284->g_376 p_1284->g_166.f1 p_1284->g_503 p_1284->g_238.f2 p_1284->g_548 p_1284->g_284 p_1284->g_113 p_1284->g_121 p_1284->g_873 p_1284->g_418 p_1284->g_943 p_1284->g_527 p_1284->g_310
 * writes: p_1284->g_29 p_1284->g_529.f8 p_1284->g_112 p_1284->g_529.f7 p_1284->g_113 p_1284->g_791 p_1284->g_182.f4 p_1284->g_873
 */
int32_t ** func_34(uint32_t  p_35, int16_t  p_36, uint16_t  p_37, int32_t * p_38, struct S2 * p_1284)
{ /* block id: 16 */
    uint32_t l_49 = 0x2DF20086L;
    VECTOR(int32_t, 8) l_56 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
    uint64_t l_87 = 0x870D1841160C006EL;
    int32_t ***l_965 = &p_1284->g_52;
    int8_t **l_1014 = &p_1284->g_440[2][9][1];
    int i;
    if ((*p_38))
    { /* block id: 17 */
        int32_t *l_39 = &p_1284->g_29;
        int32_t *l_40 = &p_1284->g_29;
        int32_t *l_41 = &p_1284->g_29;
        int32_t *l_42 = &p_1284->g_29;
        int32_t *l_43 = (void*)0;
        int32_t *l_44 = &p_1284->g_29;
        int32_t l_45 = 1L;
        int32_t *l_46 = &l_45;
        int32_t *l_47 = &l_45;
        int32_t l_48 = 0x0FEFE6B3L;
        l_49--;
        return p_1284->g_52;
    }
    else
    { /* block id: 20 */
        uint64_t l_879 = 0xD9895EC6D2EF779DL;
        int32_t l_968 = 1L;
        int32_t l_971 = 9L;
        int8_t l_972[10][8][3] = {{{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL}},{{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL}},{{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL}},{{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL}},{{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL}},{{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL}},{{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL}},{{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL}},{{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL}},{{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL},{(-1L),0L,0x0AL}}};
        int32_t l_973[8][7][4] = {{{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L}},{{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L}},{{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L}},{{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L}},{{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L}},{{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L}},{{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L}},{{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L},{0L,0x38B086BAL,(-7L),1L}}};
        int64_t l_986 = 0x21A0518397EA597BL;
        VECTOR(int16_t, 16) l_1025 = (VECTOR(int16_t, 16))(0x537DL, (VECTOR(int16_t, 4))(0x537DL, (VECTOR(int16_t, 2))(0x537DL, (-2L)), (-2L)), (-2L), 0x537DL, (-2L), (VECTOR(int16_t, 2))(0x537DL, (-2L)), (VECTOR(int16_t, 2))(0x537DL, (-2L)), 0x537DL, (-2L), 0x537DL, (-2L));
        int32_t **l_1028 = &p_1284->g_112;
        int64_t *l_1030[10];
        int64_t **l_1029[1][3];
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_1030[i] = &p_1284->g_182.f7;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1029[i][j] = &l_1030[6];
        }
        for (p_36 = 0; (p_36 == 11); p_36++)
        { /* block id: 23 */
            int32_t *l_55 = &p_1284->g_29;
            int32_t l_880 = (-1L);
            int32_t l_967 = 0x16FB0B38L;
            int32_t l_970 = 9L;
            int32_t l_975 = 1L;
            int32_t l_978 = 1L;
            int32_t l_981 = (-9L);
            int32_t l_982 = 0x24DC362FL;
            int32_t l_983 = 0x44C1D480L;
            int32_t l_984 = 1L;
            int32_t l_985 = 0x6BE7C23CL;
            int32_t l_987 = 0x64F201E2L;
            int32_t l_988 = 8L;
            int32_t l_989 = (-8L);
            struct S0 ***l_1036 = &p_1284->g_311[1][4];
            l_55 = (p_38 = (void*)0);
            if (((VECTOR(int32_t, 8))(l_56.s40372000)).s4)
            { /* block id: 26 */
                int16_t l_64 = 0L;
                int32_t l_969 = 1L;
                int32_t l_976 = 5L;
                int32_t l_977 = 0x6BBA50AEL;
                int32_t l_979 = 0L;
                int32_t l_980[6][2] = {{0x5844DD16L,(-1L)},{0x5844DD16L,(-1L)},{0x5844DD16L,(-1L)},{0x5844DD16L,(-1L)},{0x5844DD16L,(-1L)},{0x5844DD16L,(-1L)}};
                uint32_t l_990 = 0x4570279AL;
                int i, j;
                for (p_1284->g_29 = 14; (p_1284->g_29 < (-18)); --p_1284->g_29)
                { /* block id: 29 */
                    VECTOR(int16_t, 8) l_73 = (VECTOR(int16_t, 8))(0x30CFL, (VECTOR(int16_t, 4))(0x30CFL, (VECTOR(int16_t, 2))(0x30CFL, 8L), 8L), 8L, 0x30CFL, 8L);
                    uint32_t *l_878 = &p_1284->g_182.f0;
                    int32_t ***l_963 = &p_1284->g_52;
                    int32_t ****l_964 = &l_963;
                    int32_t *l_966[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_966[i] = &p_1284->g_113;
                    (*p_1284->g_121) = func_59(p_1284->g_52, l_64, (p_37 || (safe_sub_func_uint64_t_u_u(0x293E9FC65F31FD02L, ((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0x7891L, (-1L), ((VECTOR(int16_t, 2))(l_73.s72)), (((((safe_add_func_uint32_t_u_u(((*l_878) = func_76(p_36, p_1284->g_52, l_73.s3, (func_81(l_73.s2, (l_73.s5 , (void*)0), l_87, p_1284->g_2, p_1284->g_29, p_1284) == p_37), p_1284)), l_879)) < FAKE_DIVERGE(p_1284->local_2_offset, get_local_id(2), 10)) ^ l_64) == p_1284->g_349.x) == p_1284->g_354.x), ((VECTOR(int16_t, 2))(0x6FD1L)), 0x33E3L, ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 2))(5L)), 2L, (-3L))).even)).s3440456722761120))).sb789)).z, p_37)), p_37)) != 0UL)))), l_880, p_1284);
                    l_967 ^= (l_880 = (((*l_964) = l_963) != l_965));
                    l_990++;
                }
                for (l_975 = 0; (l_975 != (-3)); l_975--)
                { /* block id: 426 */
                    int8_t **l_996 = (void*)0;
                    int8_t ***l_995 = &l_996;
                    (*l_995) = &p_1284->g_440[2][4][2];
                    return &p_1284->g_112;
                }
            }
            else
            { /* block id: 430 */
                VECTOR(int32_t, 16) l_1000 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                VECTOR(int16_t, 8) l_1023 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x5BBAL), 0x5BBAL), 0x5BBAL, (-1L), 0x5BBAL);
                int8_t *l_1033 = (void*)0;
                int8_t *l_1034 = (void*)0;
                int8_t *l_1035 = &p_1284->g_791;
                int i;
                for (l_988 = 0; (l_988 == (-25)); --l_988)
                { /* block id: 433 */
                    int8_t **l_1015 = &p_1284->g_440[1][8][1];
                    int8_t *l_1016 = (void*)0;
                    int8_t *l_1017 = (void*)0;
                    int8_t *l_1018 = (void*)0;
                    int32_t l_1019 = 7L;
                    VECTOR(int16_t, 2) l_1024 = (VECTOR(int16_t, 2))(0x70ACL, 0x4852L);
                    int32_t *l_1026[6];
                    int32_t **l_1027 = &p_1284->g_112;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1026[i] = &l_880;
                    p_1284->g_873.s3 ^= ((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(p_1284->g_999.yyxy)), ((VECTOR(int32_t, 16))(l_1000.s09d63d2dfd1cd10d)).s7d65))).odd)).even , (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 16))((safe_sub_func_uint16_t_u_u((((*p_1284->g_112) = (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((*p_1284->g_376) = ((p_36 , (+((safe_rshift_func_int8_t_s_u(((((((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint16_t_u_s((l_1014 == (l_1015 = (p_1284->g_113 , &p_1284->g_440[0][5][2]))), 14)))) , GROUP_DIVERGE(2, 1)) >= (l_1019 = p_35)) || (((VECTOR(uint8_t, 8))(p_1284->g_1020.xxyyxyyy)).s0 < (safe_mod_func_int16_t_s_s((0xE596L != 4L), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(l_1023.s01)).xxxy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(l_1024.xyyx)).odd))), 0x044FL, 0x14F7L))))).zyzzzwxywwxyxyyw)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(l_1025.s24e6)).odd, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(p_1284->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1284->tid, 89))], ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0L, 0x75E3L)).xxxy)).x, p_35, 0x034DL, 0x4D22L)), ((VECTOR(int16_t, 8))(0x723CL)), ((VECTOR(int16_t, 2))(0x14C7L)), 0x484AL)).sa10e, (int16_t)2L))).odd))), 0L, (-1L))).ywyywyyyywzzwyzx))))).odd)).s6204737072070414)).sf)))) | l_1023.s4) < (*p_1284->g_503)), l_1023.s1)) == 0L))) != l_1025.sd)), 5)), p_1284->g_3))) == p_36), p_36)), ((VECTOR(int32_t, 2))(8L)), 0x5941BDB1L, ((VECTOR(int32_t, 2))(0x7D55A15FL)), 0x78EAAB9EL, p_35, ((VECTOR(int32_t, 8))((-8L))))).s8, FAKE_DIVERGE(p_1284->global_1_offset, get_global_id(1), 10)))) & l_973[3][3][1]);
                    return l_1027;
                }
                (*p_1284->g_611) = func_59(l_1028, p_36, p_1284->g_418.s2, (((((&p_1284->g_503 != l_1029[0][2]) & p_1284->g_943.x) & (safe_sub_func_uint32_t_u_u(p_35, (((VECTOR(uint8_t, 16))(0x42L, 6UL, 248UL, 248UL, 1UL, 0x87L, ((VECTOR(uint8_t, 8))((((*l_1035) = p_36) > l_1023.s2), ((VECTOR(uint8_t, 2))(0xD1L)), ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 2))(255UL)), 0x28L)), 6UL, 1UL)).s2 , 1L)))) , l_1036) == (*p_1284->g_527)), p_1284);
            }
        }
        (*l_1028) = p_38;
        return &p_1284->g_112;
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_1284->g_529.f8 p_1284->g_709 p_1284->g_432 p_1284->g_529.f1 p_1284->g_887 p_1284->g_611 p_1284->g_440 p_1284->g_439.f8 p_1284->g_376 p_1284->g_166.f1 p_1284->g_503 p_1284->g_238.f2 p_1284->g_548 p_1284->g_928 p_1284->g_943 p_1284->g_945 p_1284->g_211.f1 p_1284->g_284 p_1284->g_113 p_1284->g_182.f4
 * writes: p_1284->g_529.f8 p_1284->g_112 p_1284->g_529.f7 p_1284->g_113 p_1284->g_791 p_1284->g_182.f4
 */
int32_t * func_59(int32_t ** p_60, int32_t  p_61, int16_t  p_62, int32_t  p_63, struct S2 * p_1284)
{ /* block id: 390 */
    VECTOR(uint64_t, 2) l_888 = (VECTOR(uint64_t, 2))(0x88E4744ABBCE7D13L, 18446744073709551615UL);
    int16_t l_889 = 0x3F07L;
    struct S1 *l_897 = &p_1284->g_898;
    struct S1 **l_896 = &l_897;
    int32_t l_912 = 0x624AA32CL;
    int32_t l_913 = 0L;
    int32_t l_914 = 0x3503665FL;
    int32_t l_915 = (-5L);
    int32_t l_916 = 0x73FF4232L;
    int32_t l_917 = (-1L);
    int32_t l_919 = 0x32650F6EL;
    int32_t l_920[5] = {(-4L),(-4L),(-4L),(-4L),(-4L)};
    int8_t l_921 = (-5L);
    uint32_t l_923[2];
    VECTOR(int32_t, 8) l_935 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3A805304L), 0x3A805304L), 0x3A805304L, (-1L), 0x3A805304L);
    VECTOR(int8_t, 8) l_938 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x74L), 0x74L), 0x74L, 1L, 0x74L);
    VECTOR(int8_t, 8) l_944 = (VECTOR(int8_t, 8))(0x51L, (VECTOR(int8_t, 4))(0x51L, (VECTOR(int8_t, 2))(0x51L, 1L), 1L), 1L, 0x51L, 1L);
    VECTOR(int8_t, 8) l_946 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-7L)), (-7L)), (-7L), 0L, (-7L));
    VECTOR(int8_t, 16) l_947 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 5L), 5L), 5L, 1L, 5L, (VECTOR(int8_t, 2))(1L, 5L), (VECTOR(int8_t, 2))(1L, 5L), 1L, 5L, 1L, 5L);
    int32_t ***l_948 = &p_1284->g_611;
    int32_t *l_951 = &l_916;
    int32_t *l_952 = (void*)0;
    int32_t l_957[3][4][1] = {{{(-2L)},{(-2L)},{(-2L)},{(-2L)}},{{(-2L)},{(-2L)},{(-2L)},{(-2L)}},{{(-2L)},{(-2L)},{(-2L)},{(-2L)}}};
    int32_t *l_962 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_923[i] = 0x66273D43L;
    for (p_1284->g_529.f8 = 0; (p_1284->g_529.f8 != 59); p_1284->g_529.f8++)
    { /* block id: 393 */
        int32_t l_883 = (-8L);
        VECTOR(int32_t, 4) l_886 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-7L)), (-7L));
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1284->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 89)), permutations[(safe_mod_func_uint32_t_u_u((((p_63 ^ l_883) >= p_1284->g_709.y) == ((p_1284->g_432.s1 , (safe_sub_func_uint32_t_u_u(4294967286UL, (p_1284->g_529.f1 == ((VECTOR(int32_t, 16))(l_886.yzxzzzywzwwyzxwx)).sa)))) <= (((VECTOR(int32_t, 2))(p_1284->g_887.s47)).lo , ((VECTOR(uint64_t, 4))(l_888.yxyy)).z))), 10))][(safe_mod_func_uint32_t_u_u(p_1284->tid, 89))]));
        (*p_1284->g_611) = &p_61;
        if (l_886.x)
            break;
    }
    if (l_889)
    { /* block id: 400 */
        uint8_t l_905[2][1][1];
        int64_t *l_906 = &p_1284->g_529.f7;
        int32_t *l_907 = (void*)0;
        int32_t *l_908 = &p_1284->g_113;
        int32_t *l_909 = (void*)0;
        int32_t *l_910[3];
        int8_t l_922 = (-1L);
        VECTOR(int8_t, 16) l_939 = (VECTOR(int8_t, 16))(0x77L, (VECTOR(int8_t, 4))(0x77L, (VECTOR(int8_t, 2))(0x77L, (-1L)), (-1L)), (-1L), 0x77L, (-1L), (VECTOR(int8_t, 2))(0x77L, (-1L)), (VECTOR(int8_t, 2))(0x77L, (-1L)), 0x77L, (-1L), 0x77L, (-1L));
        VECTOR(int8_t, 4) l_940 = (VECTOR(int8_t, 4))(0x62L, (VECTOR(int8_t, 2))(0x62L, 0x41L), 0x41L);
        VECTOR(int8_t, 16) l_941 = (VECTOR(int8_t, 16))(0x66L, (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 0L), 0L), 0L, 0x66L, 0L, (VECTOR(int8_t, 2))(0x66L, 0L), (VECTOR(int8_t, 2))(0x66L, 0L), 0x66L, 0L, 0x66L, 0L);
        VECTOR(int8_t, 16) l_942 = (VECTOR(int8_t, 16))(0x44L, (VECTOR(int8_t, 4))(0x44L, (VECTOR(int8_t, 2))(0x44L, 0L), 0L), 0L, 0x44L, 0L, (VECTOR(int8_t, 2))(0x44L, 0L), (VECTOR(int8_t, 2))(0x44L, 0L), 0x44L, 0L, 0x44L, 0L);
        int32_t ****l_949 = &l_948;
        int8_t *l_950 = &p_1284->g_791;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_905[i][j][k] = 2UL;
            }
        }
        for (i = 0; i < 3; i++)
            l_910[i] = (void*)0;
        (*l_908) = (p_1284->g_440[2][9][1] != (((safe_div_func_int64_t_s_s((((p_1284->g_439[1].f8 <= (p_63 > ((*l_906) = (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_1284->global_0_offset, get_global_id(0), 10), (GROUP_DIVERGE(0, 1) != (safe_sub_func_int16_t_s_s(0x7489L, ((l_896 == &l_897) | (((p_1284->g_432.s7 | l_888.y) == (((GROUP_DIVERGE(1, 1) && ((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-8L), 6L)), 0x00L, (-1L))).wxzwzwwx)).s7, 4)) , (safe_lshift_func_int8_t_s_s(((safe_div_func_uint64_t_u_u((l_888.y ^ p_1284->g_529.f1), (-1L))) , l_905[1][0][0]), 6)))) , 0UL) & p_63)) & (*p_1284->g_376))))))))))) , (*p_1284->g_503)) < p_1284->g_548.s3), 6L)) && p_63) , &l_905[1][0][0]));
        --l_923[0];
        (*l_908) = ((*p_1284->g_503) , ((~(safe_lshift_func_uint16_t_u_s(((l_889 ^ ((VECTOR(uint8_t, 8))(p_1284->g_928.s32731016)).s0) != (safe_add_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(0xC87BB9E4L, (p_61 = (l_888.y | (+0x5EDCL))))), (((VECTOR(int32_t, 4))(l_935.s1771)).y | ((~((safe_lshift_func_int8_t_s_s(((*l_950) = ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_938.s6101)).odd)).xxyxxyyyyyxyyyxy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_939.s0bc92b172770b315)))), ((VECTOR(int8_t, 4))(l_940.wyzw)).wzxyyzxxxywzzyyy))).hi)), ((VECTOR(int8_t, 2))(l_941.s30)).xxxxyxyy, ((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x2FL, 0x24L)))).yyxyyxyx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_942.s81ce62ee3b8563ad)).lo))))).s1225461346230643, ((VECTOR(int8_t, 4))(p_1284->g_943.xzxw)).wyywzzxwzwwwzzww, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(0x19L, 0L)), ((VECTOR(int8_t, 4))(0x49L, 0x16L, (-1L), 0x3FL)).hi, ((VECTOR(int8_t, 8))(l_944.s25306600)).s42))).yxxyyxyyxyxxyxxy, ((VECTOR(int8_t, 4))(0x2FL, 0x43L, 0L, (-1L))).zwzwxxwyxwwzxzxy))), ((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(p_1284->g_945.yx)).yyxxyyyyyyyxyxyy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_946.s0766160347555502)).se90b)).wwzzxywxxwzwwwxy))), ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 4))(l_947.sd640)).xzzxxxxy, ((VECTOR(int8_t, 8))((&p_60 != ((*l_949) = l_948)), (p_1284->g_211.f1 < 0xFFDBEA6A41A454A6L), p_62, p_63, 0x30L, p_62, 0x7FL, 0x53L))))).s0106160126756635)).s0d)), ((VECTOR(int8_t, 2))(1L))))).xyxxxxyxyxyyxxyy))).even)).s5500103260341170))).even))))).s4263316467355350))))).s2b01, ((VECTOR(int8_t, 4))(0x26L))))).x), 5)) != p_1284->g_284)) != 0x67L)))), p_62))), 8))) , (*l_908)));
        return l_952;
    }
    else
    { /* block id: 409 */
        int8_t *l_955 = (void*)0;
        int32_t l_956 = 0x11AD7BC0L;
        VECTOR(int32_t, 4) l_958 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 2L), 2L);
        int32_t *l_961 = &p_1284->g_29;
        int i;
        l_958.x = (safe_mod_func_int64_t_s_s((0x25L | (l_955 == (l_956 , &p_1284->g_116[2][4]))), l_957[0][3][0]));
        for (p_1284->g_182.f4 = 0; (p_1284->g_182.f4 == (-12)); p_1284->g_182.f4 = safe_sub_func_int32_t_s_s(p_1284->g_182.f4, 7))
        { /* block id: 413 */
            (**l_948) = l_961;
        }
    }
    return l_962;
}


/* ------------------------------------------ */
/* 
 * reads : p_1284->g_580 p_1284->g_212 p_1284->g_211 p_1284->g_611 p_1284->g_845 p_1284->g_846 p_1284->g_113 p_1284->g_238.f7 p_1284->g_873 p_1284->g_284 p_1284->g_182.f7 p_1284->g_529.f0 p_1284->g_112
 * writes: p_1284->g_113 p_1284->g_580 p_1284->g_791 p_1284->g_496 p_1284->g_182.f7 p_1284->g_166.f6 p_1284->g_112 p_1284->g_584 p_1284->g_248
 */
uint32_t  func_76(uint16_t  p_77, int32_t ** p_78, uint16_t  p_79, uint32_t  p_80, struct S2 * p_1284)
{ /* block id: 346 */
    int32_t *l_800 = &p_1284->g_113;
    int32_t l_837 = 0x65866642L;
    int32_t l_838 = (-7L);
    int32_t l_840 = 0x6F944B88L;
    VECTOR(int8_t, 2) l_859 = (VECTOR(int8_t, 2))(0x7BL, 0x4AL);
    VECTOR(int8_t, 16) l_860 = (VECTOR(int8_t, 16))(0x7BL, (VECTOR(int8_t, 4))(0x7BL, (VECTOR(int8_t, 2))(0x7BL, 0x2AL), 0x2AL), 0x2AL, 0x7BL, 0x2AL, (VECTOR(int8_t, 2))(0x7BL, 0x2AL), (VECTOR(int8_t, 2))(0x7BL, 0x2AL), 0x7BL, 0x2AL, 0x7BL, 0x2AL);
    VECTOR(int16_t, 8) l_863 = (VECTOR(int16_t, 8))(0x12E0L, (VECTOR(int16_t, 4))(0x12E0L, (VECTOR(int16_t, 2))(0x12E0L, 1L), 1L), 1L, 0x12E0L, 1L);
    int16_t *l_864[4];
    uint16_t *l_865 = &p_1284->g_248;
    VECTOR(uint16_t, 16) l_872 = (VECTOR(uint16_t, 16))(0x68B3L, (VECTOR(uint16_t, 4))(0x68B3L, (VECTOR(uint16_t, 2))(0x68B3L, 0x914AL), 0x914AL), 0x914AL, 0x68B3L, 0x914AL, (VECTOR(uint16_t, 2))(0x68B3L, 0x914AL), (VECTOR(uint16_t, 2))(0x68B3L, 0x914AL), 0x68B3L, 0x914AL, 0x68B3L, 0x914AL);
    VECTOR(int32_t, 4) l_874 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5471C785L), 0x5471C785L);
    int32_t ***l_877[4];
    int i;
    for (i = 0; i < 4; i++)
        l_864[i] = &p_1284->g_211.f1;
    for (i = 0; i < 4; i++)
        l_877[i] = &p_1284->g_611;
    (*l_800) = 0x6EB516CEL;
    for (p_1284->g_580 = (-2); (p_1284->g_580 > 28); p_1284->g_580++)
    { /* block id: 350 */
        int32_t l_815 = 0x1513FDA1L;
        int32_t l_816 = 0L;
        int32_t l_817[7] = {0x1816B74BL,0x1816B74BL,0x1816B74BL,0x1816B74BL,0x1816B74BL,0x1816B74BL,0x1816B74BL};
        int32_t *l_826 = &p_1284->g_113;
        uint16_t *l_827 = (void*)0;
        uint32_t l_841 = 0xCA1E937CL;
        int i;
        for (p_1284->g_791 = 0; (p_1284->g_791 >= (-13)); p_1284->g_791 = safe_sub_func_int16_t_s_s(p_1284->g_791, 6))
        { /* block id: 353 */
            uint8_t l_819 = 0UL;
            uint32_t l_828 = 4294967288UL;
            if (((VECTOR(int32_t, 8))(p_1284->g_805.s4904027a)).s3)
            { /* block id: 354 */
                struct S1 *l_806 = &p_1284->g_496;
                int32_t l_813 = (-8L);
                int32_t l_818 = 0x2C54A590L;
                int32_t l_839 = 1L;
                (*l_806) = (*p_1284->g_212);
                for (p_1284->g_182.f7 = 0; (p_1284->g_182.f7 >= (-6)); p_1284->g_182.f7--)
                { /* block id: 358 */
                    int8_t l_809 = 0x3CL;
                    int32_t *l_810 = (void*)0;
                    int32_t *l_811 = (void*)0;
                    int32_t *l_812 = &p_1284->g_113;
                    int32_t *l_814[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_814[i] = &l_813;
                    l_819--;
                }
                for (p_1284->g_166.f6 = 3; (p_1284->g_166.f6 > (-18)); p_1284->g_166.f6 = safe_sub_func_int8_t_s_s(p_1284->g_166.f6, 5))
                { /* block id: 363 */
                    int32_t *l_829 = &l_817[3];
                    int32_t *l_830 = &l_818;
                    int32_t *l_831 = &l_817[6];
                    int32_t *l_832 = &l_817[3];
                    int32_t *l_833 = &l_818;
                    int32_t l_834[10][4][6] = {{{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}}};
                    int32_t *l_835 = (void*)0;
                    int32_t *l_836[7] = {&l_834[1][0][1],(void*)0,&l_834[1][0][1],&l_834[1][0][1],(void*)0,&l_834[1][0][1],&l_834[1][0][1]};
                    int i, j, k;
                    for (p_1284->g_182.f7 = 0; (p_1284->g_182.f7 == 23); p_1284->g_182.f7 = safe_add_func_uint32_t_u_u(p_1284->g_182.f7, 7))
                    { /* block id: 366 */
                        l_826 = l_800;
                        (*l_800) = ((void*)0 == l_827);
                    }
                    if (l_828)
                        continue;
                    if (l_813)
                        break;
                    ++l_841;
                }
            }
            else
            { /* block id: 374 */
                uint32_t l_844 = 1UL;
                (*l_800) = (l_844 != p_80);
            }
            (*p_1284->g_611) = &l_817[3];
            (*p_1284->g_846) = p_1284->g_845;
        }
        (*l_826) = 1L;
        (*p_1284->g_611) = &l_840;
    }
    (*p_1284->g_611) = &l_838;
    (**p_1284->g_611) ^= (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((!0x578EL), ((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(l_859.xyxyxxxyxxyyxxxy)).sbfee, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))((-1L), 0L)).xxxy))).wwzwxzzw, ((VECTOR(int8_t, 8))(l_860.sf3fbe0c9))))))).lo)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))((((*l_800) ^ (safe_mul_func_int16_t_s_s((l_837 = (~(p_79 || ((VECTOR(int16_t, 8))(l_863.s77351441)).s7))), ((*l_865) = p_77)))) != (p_79 && (safe_sub_func_uint32_t_u_u(FAKE_DIVERGE(p_1284->global_2_offset, get_global_id(2), 10), (0UL && (*l_800)))))), (-9L), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(0x4CL, ((*l_800) = (safe_div_func_int64_t_s_s((safe_add_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), (p_1284->g_238.f7 < ((VECTOR(uint16_t, 2))(l_872.s44)).odd))), ((((VECTOR(int32_t, 16))(0x2A4AF8DBL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(p_1284->g_873.s47216273)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(l_874.yxzy)).yzxxwywwwwwwzwyw, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((safe_add_func_int32_t_s_s((l_877[1] != (void*)0), GROUP_DIVERGE(2, 1))), 3L, 0x2364L, (-2L))), ((VECTOR(int16_t, 2))(0x363CL)), 0x14C5L, 0x7599L)).even, ((VECTOR(uint16_t, 4))(0xC0AFL))))).odd, ((VECTOR(int32_t, 2))(0x7F2BFFF6L))))).xxxyxyxxyyxxxyyy))).lo))))))).hi)), 1L, 0x3FB43239L, ((VECTOR(int32_t, 8))((-5L))), 9L)).s8 && (*l_800)) | p_1284->g_284)))), 0L, 0x74L, ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 8))(9L)), 0x70L, 0x5CL)).lo)), 0x49L, 0L, 1L, ((VECTOR(int8_t, 2))(0x71L)), 0x74L)))).lo)).odd))).z, FAKE_DIVERGE(p_1284->local_0_offset, get_local_id(0), 10))) | p_1284->g_182.f7))), 6)), 7)) < 1UL), p_1284->g_529.f0)), 0x318CL));
    return p_77;
}


/* ------------------------------------------ */
/* 
 * reads : p_1284->l_comm_values p_1284->g_3 p_1284->g_29 p_1284->g_52 p_1284->g_121 p_1284->g_149 p_1284->g_113 p_1284->g_114 p_1284->g_165 p_1284->g_167 p_1284->g_112 p_1284->g_166 p_1284->g_181 p_1284->g_182.f3 p_1284->g_116 p_1284->g_182.f7 p_1284->g_211 p_1284->g_212 p_1284->g_182 p_1284->g_248 p_1284->g_284 p_1284->g_310 p_1284->g_340 p_1284->g_341 p_1284->g_347 p_1284->g_349 p_1284->g_350 p_1284->g_354 p_1284->g_376 p_1284->g_2 p_1284->g_238.f5 p_1284->g_400 p_1284->g_408 p_1284->g_418 p_1284->g_419 p_1284->g_432 p_1284->g_238.f8 p_1284->g_277 p_1284->g_439 p_1284->g_459 p_1284->g_238.f6 p_1284->g_238.f1 p_1284->g_comm_values p_1284->g_440 p_1284->g_496 p_1284->g_503 p_1284->g_509 p_1284->g_529 p_1284->g_546 p_1284->g_548 p_1284->g_238.f2 p_1284->g_584 p_1284->g_311 p_1284->g_605 p_1284->g_617 p_1284->g_611 p_1284->g_789 p_1284->g_790 p_1284->g_791
 * writes: p_1284->g_112 p_1284->g_114 p_1284->g_116 p_1284->g_149 p_1284->g_165 p_1284->g_113 p_1284->g_166.f0 p_1284->g_182 p_1284->g_166.f4 p_1284->g_211 p_1284->g_166.f1 p_1284->g_310 p_1284->g_277 p_1284->g_166.f7 p_1284->g_248 p_1284->g_440 p_1284->g_350 p_1284->g_527 p_1284->g_580 p_1284->g_311 p_1284->g_593 p_1284->g_611 p_1284->g_618 p_1284->g_166.f8 p_1284->g_789 p_1284->g_790 p_1284->g_791
 */
int32_t  func_81(uint8_t  p_82, int32_t ** p_83, uint32_t  p_84, int32_t  p_85, uint16_t  p_86, struct S2 * p_1284)
{ /* block id: 30 */
    uint8_t l_94 = 0UL;
    int32_t *l_110 = &p_1284->g_3;
    VECTOR(uint16_t, 8) l_117 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 7UL), 7UL), 7UL, 0UL, 7UL);
    int32_t l_792 = 5L;
    int32_t l_793[5];
    int16_t l_799 = (-6L);
    int i;
    for (i = 0; i < 5; i++)
        l_793[i] = 7L;
    for (p_82 = 0; (p_82 >= 37); p_82++)
    { /* block id: 33 */
        VECTOR(int32_t, 8) l_90 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3849B7D6L), 0x3849B7D6L), 0x3849B7D6L, (-1L), 0x3849B7D6L);
        int32_t *l_91 = (void*)0;
        int32_t *l_92 = (void*)0;
        int32_t *l_93[4];
        int32_t **l_107 = &l_93[3];
        int32_t **l_111[8][5] = {{&l_92,&l_91,(void*)0,&l_91,(void*)0},{&l_92,&l_91,(void*)0,&l_91,(void*)0},{&l_92,&l_91,(void*)0,&l_91,(void*)0},{&l_92,&l_91,(void*)0,&l_91,(void*)0},{&l_92,&l_91,(void*)0,&l_91,(void*)0},{&l_92,&l_91,(void*)0,&l_91,(void*)0},{&l_92,&l_91,(void*)0,&l_91,(void*)0},{&l_92,&l_91,(void*)0,&l_91,(void*)0}};
        int8_t *l_115[4] = {&p_1284->g_116[2][4],&p_1284->g_116[2][4],&p_1284->g_116[2][4],&p_1284->g_116[2][4]};
        uint32_t l_118 = 0UL;
        uint32_t l_119 = 0xC20F6EBCL;
        uint32_t *l_788[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_794 = 0x687D5650L;
        int32_t l_795 = 0L;
        uint32_t l_796 = 0x1FD9F528L;
        int i, j;
        for (i = 0; i < 4; i++)
            l_93[i] = (void*)0;
        l_94 = ((VECTOR(int32_t, 16))(l_90.s5520546427067615)).sb;
        p_85 = ((p_1284->g_791 |= (p_1284->g_790 &= (p_1284->g_789[0] ^= func_95(func_99((l_118 = ((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(0xD91310E3L, 0x29090F62L)).odd, ((p_1284->g_114 = (((*l_107) = &p_1284->g_29) != (p_1284->g_112 = ((((void*)0 != &p_85) == (l_94 == (safe_sub_func_int8_t_s_s((-9L), p_1284->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1284->tid, 89))])))) , l_110)))) > ((p_1284->g_116[2][4] = (*l_110)) & (((VECTOR(uint16_t, 4))(l_117.s3531)).x >= (p_1284->g_29 <= (*l_110))))))) || p_82)), l_119, p_83, p_1284->g_52, p_84, p_1284), p_1284->g_248, p_1284->g_284, p_1284)))) < p_1284->g_529.f0);
        l_796++;
    }
    return l_799;
}


/* ------------------------------------------ */
/* 
 * reads : p_1284->g_114 p_1284->g_182.f0 p_1284->g_112 p_1284->g_113 p_1284->g_166.f1 p_1284->g_310 p_1284->g_182.f2 p_1284->g_340 p_1284->g_341 p_1284->g_347 p_1284->g_182.f7 p_1284->g_349 p_1284->g_350 p_1284->g_354 p_1284->g_3 p_1284->g_212 p_1284->g_211 p_1284->g_284 p_1284->g_376 p_1284->g_166.f4 p_1284->g_2 p_1284->g_238.f5 p_1284->g_400 p_1284->l_comm_values p_1284->g_408 p_1284->g_182.f6 p_1284->g_418 p_1284->g_419 p_1284->g_432 p_1284->g_238.f8 p_1284->g_277 p_1284->g_248 p_1284->g_439 p_1284->g_116 p_1284->g_182.f1 p_1284->g_459 p_1284->g_149 p_1284->g_238.f6 p_1284->g_238.f1 p_1284->g_166.f5 p_1284->g_comm_values p_1284->g_182.f4 p_1284->g_440 p_1284->g_496 p_1284->g_503 p_1284->g_509 p_1284->g_529 p_1284->g_546 p_1284->g_548 p_1284->g_166.f7 p_1284->g_238.f2 p_1284->g_121 p_1284->g_584 p_1284->g_311 p_1284->g_605 p_1284->g_617 p_1284->g_611 p_1284->g_166.f8
 * writes: p_1284->g_114 p_1284->g_182.f0 p_1284->g_113 p_1284->g_166.f1 p_1284->g_310 p_1284->g_277 p_1284->g_166.f4 p_1284->g_166.f7 p_1284->g_149 p_1284->g_248 p_1284->g_440 p_1284->g_116 p_1284->g_112 p_1284->g_350 p_1284->g_527 p_1284->g_580 p_1284->g_311 p_1284->g_593 p_1284->g_182.f1 p_1284->g_611 p_1284->g_618 p_1284->g_166.f8
 */
uint32_t  func_95(int32_t ** p_96, int16_t  p_97, int16_t  p_98, struct S2 * p_1284)
{ /* block id: 140 */
    uint32_t l_313 = 0x67078620L;
    VECTOR(int32_t, 4) l_326 = (VECTOR(int32_t, 4))(0x073B2CDEL, (VECTOR(int32_t, 2))(0x073B2CDEL, 0x69704641L), 0x69704641L);
    int32_t ***l_332 = &p_1284->g_52;
    int32_t ****l_331 = &l_332;
    VECTOR(uint16_t, 2) l_333 = (VECTOR(uint16_t, 2))(0xB2A5L, 0xF172L);
    VECTOR(int64_t, 4) l_342 = (VECTOR(int64_t, 4))(0x3DC31E78DDC98A29L, (VECTOR(int64_t, 2))(0x3DC31E78DDC98A29L, 0x2C6206D4DF05AFE7L), 0x2C6206D4DF05AFE7L);
    VECTOR(uint64_t, 8) l_343 = (VECTOR(uint64_t, 8))(18446744073709551612UL, (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 0UL), 0UL), 0UL, 18446744073709551612UL, 0UL);
    VECTOR(uint64_t, 16) l_344 = (VECTOR(uint64_t, 16))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 0x14E6BDEFF4A30A70L), 0x14E6BDEFF4A30A70L), 0x14E6BDEFF4A30A70L, 2UL, 0x14E6BDEFF4A30A70L, (VECTOR(uint64_t, 2))(2UL, 0x14E6BDEFF4A30A70L), (VECTOR(uint64_t, 2))(2UL, 0x14E6BDEFF4A30A70L), 2UL, 0x14E6BDEFF4A30A70L, 2UL, 0x14E6BDEFF4A30A70L);
    VECTOR(uint64_t, 2) l_345 = (VECTOR(uint64_t, 2))(1UL, 0xEAC8E63D487A47EEL);
    VECTOR(uint64_t, 8) l_346 = (VECTOR(uint64_t, 8))(0xEF0D5D5DC21CE7C0L, (VECTOR(uint64_t, 4))(0xEF0D5D5DC21CE7C0L, (VECTOR(uint64_t, 2))(0xEF0D5D5DC21CE7C0L, 1UL), 1UL), 1UL, 0xEF0D5D5DC21CE7C0L, 1UL);
    uint8_t l_348 = 0x35L;
    VECTOR(int32_t, 4) l_351 = (VECTOR(int32_t, 4))(0x30E710EBL, (VECTOR(int32_t, 2))(0x30E710EBL, 0L), 0L);
    VECTOR(int32_t, 4) l_352 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0L), 0L);
    VECTOR(uint32_t, 16) l_353 = (VECTOR(uint32_t, 16))(0x91E6CDAAL, (VECTOR(uint32_t, 4))(0x91E6CDAAL, (VECTOR(uint32_t, 2))(0x91E6CDAAL, 0x7E1E3E61L), 0x7E1E3E61L), 0x7E1E3E61L, 0x91E6CDAAL, 0x7E1E3E61L, (VECTOR(uint32_t, 2))(0x91E6CDAAL, 0x7E1E3E61L), (VECTOR(uint32_t, 2))(0x91E6CDAAL, 0x7E1E3E61L), 0x91E6CDAAL, 0x7E1E3E61L, 0x91E6CDAAL, 0x7E1E3E61L);
    VECTOR(uint32_t, 2) l_355 = (VECTOR(uint32_t, 2))(0xCB5370C7L, 0x190B672CL);
    VECTOR(uint32_t, 8) l_356 = (VECTOR(uint32_t, 8))(0x65212ACEL, (VECTOR(uint32_t, 4))(0x65212ACEL, (VECTOR(uint32_t, 2))(0x65212ACEL, 0xDB45E4C6L), 0xDB45E4C6L), 0xDB45E4C6L, 0x65212ACEL, 0xDB45E4C6L);
    VECTOR(uint32_t, 4) l_357 = (VECTOR(uint32_t, 4))(0x7CCCB5D9L, (VECTOR(uint32_t, 2))(0x7CCCB5D9L, 1UL), 1UL);
    VECTOR(uint8_t, 16) l_364 = (VECTOR(uint8_t, 16))(0x3EL, (VECTOR(uint8_t, 4))(0x3EL, (VECTOR(uint8_t, 2))(0x3EL, 0x60L), 0x60L), 0x60L, 0x3EL, 0x60L, (VECTOR(uint8_t, 2))(0x3EL, 0x60L), (VECTOR(uint8_t, 2))(0x3EL, 0x60L), 0x3EL, 0x60L, 0x3EL, 0x60L);
    VECTOR(uint8_t, 8) l_365 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x44L), 0x44L), 0x44L, 0UL, 0x44L);
    VECTOR(uint8_t, 4) l_366 = (VECTOR(uint8_t, 4))(0xE0L, (VECTOR(uint8_t, 2))(0xE0L, 0x8EL), 0x8EL);
    int16_t l_377 = 0x444DL;
    uint32_t l_378 = 0x1A48D87AL;
    VECTOR(int32_t, 8) l_401 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0L), 0L), 0L, 9L, 0L);
    VECTOR(uint64_t, 8) l_424 = (VECTOR(uint64_t, 8))(0xE47F47725139CB02L, (VECTOR(uint64_t, 4))(0xE47F47725139CB02L, (VECTOR(uint64_t, 2))(0xE47F47725139CB02L, 5UL), 5UL), 5UL, 0xE47F47725139CB02L, 5UL);
    uint64_t l_443[2][2];
    int16_t l_445 = 1L;
    VECTOR(int32_t, 4) l_539 = (VECTOR(int32_t, 4))(0x2F16D3ECL, (VECTOR(int32_t, 2))(0x2F16D3ECL, 0x1C150D61L), 0x1C150D61L);
    uint16_t l_555 = 0x1AC3L;
    int32_t l_579 = (-1L);
    struct S1 *l_616[1][2];
    VECTOR(uint32_t, 4) l_651 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xC72D6062L), 0xC72D6062L);
    uint8_t l_677 = 252UL;
    int32_t *l_712 = (void*)0;
    VECTOR(uint16_t, 8) l_720 = (VECTOR(uint16_t, 8))(0x200CL, (VECTOR(uint16_t, 4))(0x200CL, (VECTOR(uint16_t, 2))(0x200CL, 65535UL), 65535UL), 65535UL, 0x200CL, 65535UL);
    VECTOR(int32_t, 8) l_784 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5B51391BL), 0x5B51391BL), 0x5B51391BL, 1L, 0x5B51391BL);
    uint8_t l_785 = 0xC8L;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_443[i][j] = 0xB58F5887BD62D508L;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_616[i][j] = &p_1284->g_584[3][2][1];
    }
    for (p_1284->g_114 = 0; (p_1284->g_114 <= 19); p_1284->g_114 = safe_add_func_int32_t_s_s(p_1284->g_114, 7))
    { /* block id: 143 */
        uint32_t l_301 = 1UL;
        for (p_1284->g_182.f0 = 0; (p_1284->g_182.f0 > 32); p_1284->g_182.f0++)
        { /* block id: 146 */
            uint32_t l_296 = 0x4CF5338BL;
            if (l_296)
                break;
            (**p_96) |= ((void*)0 == p_96);
            (*p_1284->g_112) ^= ((FAKE_DIVERGE(p_1284->global_0_offset, get_global_id(0), 10) && (l_301 ^= (safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(l_296, 1)), 0x1AAB1D15E5AC90B9L)))) | 65531UL);
        }
    }
    for (p_1284->g_114 = 18; (p_1284->g_114 > 4); --p_1284->g_114)
    { /* block id: 155 */
        struct S0 **l_309 = &p_1284->g_165;
        struct S0 ***l_308 = &l_309;
        int32_t l_320 = 6L;
        int64_t l_325 = 0x6BA50CA5D7600B4DL;
        for (p_1284->g_166.f1 = 0; (p_1284->g_166.f1 <= 55); p_1284->g_166.f1 = safe_add_func_uint32_t_u_u(p_1284->g_166.f1, 3))
        { /* block id: 158 */
            struct S0 ****l_312[8][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
            int i, j;
            (*p_1284->g_112) = (p_98 , ((safe_add_func_int8_t_s_s((l_308 == (p_1284->g_310 = p_1284->g_310)), 0x3EL)) >= (l_313 ^ (safe_mul_func_uint16_t_u_u(65531UL, (0x924208B8L & ((safe_rshift_func_uint8_t_u_s((0x7A0F7134A23CE95BL <= (safe_mul_func_int8_t_s_s((+l_320), 8L))), l_313)) <= p_98)))))));
        }
        if ((atomic_inc(&p_1284->l_atomic_input[0]) == 3))
        { /* block id: 163 */
            int32_t l_322 = 7L;
            int32_t *l_321 = &l_322;
            int32_t *l_323 = &l_322;
            int32_t *l_324 = (void*)0;
            l_321 = (void*)0;
            l_324 = l_323;
            unsigned int result = 0;
            result += l_322;
            atomic_add(&p_1284->l_special_values[0], result);
        }
        else
        { /* block id: 166 */
            (1 + 1);
        }
        if (l_325)
            break;
        (**p_96) = (l_320 , ((VECTOR(int32_t, 2))(l_326.wz)).even);
    }
    (**p_96) = ((safe_lshift_func_int8_t_s_s(p_1284->g_182.f2, 0)) <= (safe_lshift_func_int8_t_s_s((((*l_331) = (void*)0) != &p_96), (((((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 16))(l_333.xyxxyxyxyyyxxxyx)).odd, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0UL, 65530UL)), ((VECTOR(uint16_t, 2))(0UL, 65530UL)), ((VECTOR(uint16_t, 2))(7UL, 0x5248L)), 0UL, 65534UL))))).s0 == ((safe_add_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(0xBA304D36L, 0xD34E7B4CL)).hi, ((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(p_1284->g_340.xzyzxwxz)), 0x7B0BE39C29BB03DCL, 0xC51B7997A3995F67L, 0UL, ((VECTOR(uint64_t, 4))(18446744073709551607UL, ((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(int64_t, 2))(p_1284->g_341.s34)).yxxyxxyyyxxyxyxx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_342.wxzz)).yxzwyyyy)).s1126275022531704))))).sad64, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL)).yxyxxyxx)).odd, ((VECTOR(uint64_t, 16))(l_343.s4523401174130733)).s20ba))))))), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_344.sab)), ((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0xE0EB751AC8924899L, 0xB9DC806B7043153BL)))), 18446744073709551614UL, 1UL)), ((VECTOR(uint64_t, 16))(l_345.xyyxyyyyxxxyyxyy)).scf66))), 0x70661C48542CEA0BL, 0x481AF57CA1BD2F9DL)).s52)), 18446744073709551615UL, 0x06BB92D8DC2E478CL, ((VECTOR(uint64_t, 4))(l_346.s4025)))).hi, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 4))(p_1284->g_347.sf914)).hi, (uint64_t)((p_1284->g_182.f7 & p_98) & l_348)))).yyyxyxxx)).lo))).hi, ((VECTOR(uint64_t, 2))(p_1284->g_349.xy))))), 0x4D81C507E00B3EDBL)), 0UL)).s1 <= (((VECTOR(uint32_t, 8))(p_1284->g_350.xxxxyyxy)).s0 && ((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(l_351.yywyywwzwyyxxyzx)).sec2f, ((VECTOR(int32_t, 16))(l_352.ywxwwxzzyyxyxwwz)).s73e8)))))))).xzzyzzxx)).s7242076735055142, ((VECTOR(uint32_t, 8))(0xE2896A3AL, ((VECTOR(uint32_t, 2))(l_353.s36)), 0x0507B9A6L, ((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 4))(4294967292UL, (GROUP_DIVERGE(0, 1) , 8UL), 4294967287UL, 0UL)).even, ((VECTOR(uint32_t, 4))(p_1284->g_354.ywwx)).lo, ((VECTOR(uint32_t, 8))(l_355.yyxxyyxy)).s37))), 0xF00260E3L, 0UL)).s0721075253145663, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_356.s7456)))).ywzxyzxyzwywwxyw))).s4)) , (*p_1284->g_112)))), (((((VECTOR(uint32_t, 8))(l_357.zxxzwwwy)).s2 < (-6L)) , 0x3AD27DAFL) && p_97))), p_98)) , p_1284->g_350.y)) != p_1284->g_3) >= p_97))));
    if ((0L >= (**p_96)))
    { /* block id: 174 */
        int64_t l_371 = 3L;
        int64_t l_379 = 0x2890B461E487A11EL;
        int32_t *l_380 = (void*)0;
        int32_t *l_381 = (void*)0;
        int32_t *l_382 = (void*)0;
        int32_t *l_383 = (void*)0;
        int32_t *l_384 = &p_1284->g_113;
        int32_t *l_385 = (void*)0;
        int32_t *l_386[2];
        uint16_t l_387 = 0xAED8L;
        int i;
        for (i = 0; i < 2; i++)
            l_386[i] = (void*)0;
        (*p_1284->g_112) = (((safe_mod_func_int64_t_s_s(p_97, p_98)) < ((safe_sub_func_uint8_t_u_u((((p_1284->g_340.y == (safe_lshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1284->group_2_offset, get_group_id(2), 10), (l_378 = ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x04L, 1UL)), ((VECTOR(uint8_t, 4))(0xEFL, 0x83L, 0x68L, 0xBBL)), ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 4))(l_364.sa51e)).odd, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_365.s12521662)).s17)))).yxyxyxyy)).s3302075177137750, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_366.yxwxzxzxxwxxwwxx)).even)).s0624750233601533, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))((safe_sub_func_uint32_t_u_u((p_1284->g_341.s5 , ((safe_mod_func_uint8_t_u_u((l_371 >= (((*p_1284->g_212) , ((p_1284->g_284 < ((safe_div_func_uint8_t_u_u(0x87L, (safe_lshift_func_uint16_t_u_s((p_1284->g_341.s3 & 0x40L), p_97)))) > p_97)) , p_1284->g_376)) == &l_348)), p_1284->g_166.f4)) < (*p_1284->g_112))), 0xC7B5ED49L)), 0xF7L, 0x36L, ((VECTOR(uint8_t, 4))(0xD6L)), FAKE_DIVERGE(p_1284->group_2_offset, get_group_id(2), 10), (*p_1284->g_376), 0x4BL, l_377, 0xC9L, ((VECTOR(uint8_t, 2))(0x52L)), 0xA8L, 255UL)).lo, ((VECTOR(uint8_t, 8))(250UL))))), ((VECTOR(uint8_t, 8))(0x26L)), ((VECTOR(uint8_t, 8))(4UL))))).s04)).yxyyyxxyxyxxyyxx))), ((VECTOR(uint8_t, 16))(0xDFL))))))).sf289)).hi)).xyxyxyyy)).s01, ((VECTOR(uint8_t, 2))(4UL))))), ((VECTOR(uint8_t, 8))(0x8FL)))).s7)))) , l_379) > l_379), 255UL)) || p_97)) && p_1284->g_211.f0);
        --l_387;
    }
    else
    { /* block id: 178 */
        int8_t *l_402 = (void*)0;
        int8_t *l_403[2];
        uint32_t l_404 = 4294967286UL;
        int16_t *l_405 = &l_377;
        int32_t l_417 = 0x11EF28A8L;
        VECTOR(int16_t, 2) l_425 = (VECTOR(int16_t, 2))(0x2707L, 0x1B70L);
        int32_t *l_426[8][5][3] = {{{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113}},{{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113}},{{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113}},{{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113}},{{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113}},{{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113}},{{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113}},{{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113},{(void*)0,&l_417,&p_1284->g_113}}};
        VECTOR(int16_t, 8) l_508 = (VECTOR(int16_t, 8))(0x38E6L, (VECTOR(int16_t, 4))(0x38E6L, (VECTOR(int16_t, 2))(0x38E6L, 0x6D8DL), 0x6D8DL), 0x6D8DL, 0x38E6L, 0x6D8DL);
        uint16_t l_520 = 0x4EBEL;
        struct S0 ****l_528 = &p_1284->g_310;
        int32_t ***l_530 = &p_1284->g_52;
        VECTOR(int8_t, 2) l_547 = (VECTOR(int8_t, 2))(0x30L, 0x23L);
        int32_t **l_606[4][4] = {{&p_1284->g_112,&p_1284->g_112,&p_1284->g_112,&p_1284->g_112},{&p_1284->g_112,&p_1284->g_112,&p_1284->g_112,&p_1284->g_112},{&p_1284->g_112,&p_1284->g_112,&p_1284->g_112,&p_1284->g_112},{&p_1284->g_112,&p_1284->g_112,&p_1284->g_112,&p_1284->g_112}};
        int32_t l_620 = 0L;
        struct S1 *l_646 = &p_1284->g_584[8][0][0];
        int64_t l_675[7][4][9] = {{{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L}},{{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L}},{{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L}},{{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L}},{{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L}},{{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L}},{{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L},{0L,0L,0L,0x687C9BBCE4BEB03EL,6L,4L,(-1L),0x75BA6C7C21863A10L,0L}}};
        int16_t *l_697 = &p_1284->g_149;
        uint8_t l_738 = 0x3DL;
        struct S1 *l_764 = (void*)0;
        uint64_t *l_777[6][10][4] = {{{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0}},{{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0}},{{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0}},{{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0}},{{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0}},{{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0},{&p_1284->g_284,(void*)0,&l_443[0][1],(void*)0}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_403[i] = (void*)0;
        (*p_1284->g_112) = ((p_1284->g_2 , ((safe_mul_func_uint16_t_u_u(p_1284->g_238.f5, p_1284->g_341.s6)) <= 0x43AFF5C54809BAD0L)) != ((*l_405) = ((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(0L, ((p_1284->g_277.sd = (((safe_sub_func_int64_t_s_s((safe_div_func_uint32_t_u_u(1UL, (((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_1284->g_400.sf1d8e1ab5888ff18)).odd)).s16)), 1L, (-1L))).wyzwwzzw, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_401.s3201334652147412)).s5c)).yyyxxxyy))))).s2 , p_1284->g_349.x))), p_1284->g_182.f7)) > (((((-5L) == 65527UL) , p_1284->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1284->tid, 89))]) && p_98) | p_1284->g_340.y)) > (**p_96))) < l_404))), l_404)) & l_404)));
        l_417 ^= (!((safe_sub_func_int16_t_s_s((p_1284->g_408 , p_1284->g_400.s2), (((*p_1284->g_376) || (((0xF7F2L ^ ((p_1284->g_166.f4 = (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_1284->g_182.f6, ((*l_405) = (safe_mul_func_int8_t_s_s(p_1284->g_284, ((((**p_96) ^ (&p_97 == (void*)0)) & (**p_96)) || (*p_1284->g_112))))))), 14))) >= p_1284->g_350.y)) != 0x05L) , 1UL)) != p_97))) & p_1284->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1284->tid, 89))]));
        if (((l_417 = ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(p_1284->g_418.s0136)), ((VECTOR(int8_t, 4))(p_1284->g_419.s4246))))).x) || p_1284->g_349.x))
        { /* block id: 186 */
            int64_t *l_422 = (void*)0;
            int64_t *l_423 = &p_1284->g_166.f7;
            VECTOR(int8_t, 4) l_431 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x62L), 0x62L);
            int32_t l_444 = 0x6A2778DEL;
            int32_t l_450 = 0x780B7CE4L;
            int32_t l_453 = 0L;
            int32_t l_454 = 0L;
            int32_t l_470 = (-3L);
            VECTOR(int32_t, 4) l_538 = (VECTOR(int32_t, 4))(0x625CB76EL, (VECTOR(int32_t, 2))(0x625CB76EL, 1L), 1L);
            int32_t *l_583 = (void*)0;
            int8_t l_598 = 3L;
            uint8_t *l_602 = &p_1284->g_182.f1;
            int32_t l_619 = 0x6AF082DFL;
            uint64_t l_625 = 1UL;
            int32_t *l_628 = (void*)0;
            int i;
            if ((+(safe_mul_func_uint8_t_u_u((((*l_423) = (~p_1284->g_211.f0)) >= ((VECTOR(uint64_t, 16))(l_424.s7306064161657600)).se), (l_417 = (((VECTOR(int16_t, 16))(l_425.yyyxyyyyxyxyyyxy)).sf || p_98))))))
            { /* block id: 189 */
                VECTOR(int8_t, 2) l_433 = (VECTOR(int8_t, 2))(0x0AL, 0x3BL);
                uint16_t *l_438 = &p_1284->g_248;
                int8_t **l_441 = &l_403[1];
                int8_t **l_442 = &l_402;
                int32_t l_448 = (-10L);
                int32_t l_452 = 1L;
                uint32_t l_455 = 0xCB41EF5FL;
                VECTOR(uint32_t, 16) l_460 = (VECTOR(uint32_t, 16))(0x6BE11ABBL, (VECTOR(uint32_t, 4))(0x6BE11ABBL, (VECTOR(uint32_t, 2))(0x6BE11ABBL, 0x67035BD5L), 0x67035BD5L), 0x67035BD5L, 0x6BE11ABBL, 0x67035BD5L, (VECTOR(uint32_t, 2))(0x6BE11ABBL, 0x67035BD5L), (VECTOR(uint32_t, 2))(0x6BE11ABBL, 0x67035BD5L), 0x6BE11ABBL, 0x67035BD5L, 0x6BE11ABBL, 0x67035BD5L);
                uint32_t l_478 = 4294967295UL;
                uint8_t *l_495 = &p_1284->g_182.f1;
                VECTOR(int32_t, 8) l_541 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                int32_t l_553 = 0x29309792L;
                int i;
                l_426[3][2][1] = (*p_96);
                if (((((((safe_mul_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(FAKE_DIVERGE(p_1284->local_0_offset, get_local_id(0), 10), ((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 8))((-4L), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_431.xwzzyxxxxzxwxxzw)).hi)), ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1284->g_432.s7236025536351643)))).even, (int8_t)((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 8))(0x2BL, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_433.yx)).xxyyyyxy)).s1136464373704445)).s7b48)).hi)).lo, 0x4CL, 0x1BL, (p_1284->g_116[2][4] |= (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((p_1284->g_238.f8 || (((p_1284->g_149 = l_431.w) || ((((((-10L) && ((*l_438) ^= p_1284->g_277.sb)) , (p_98 , ((*l_442) = ((*l_441) = (p_1284->g_439[1] , (p_1284->g_440[2][9][1] = (void*)0)))))) == (void*)0) > (((-7L) > GROUP_DIVERGE(0, 1)) < l_443[0][1])) >= l_444)) , 0x41L)), p_97)), 0xF164E26BL))), l_433.x, 0x28L, 0x4FL)), ((VECTOR(int8_t, 8))(0x3DL))))), ((VECTOR(int8_t, 4))(0x27L)), 0x52L, ((VECTOR(int8_t, 2))(0x25L)), 0L)).sd002, ((VECTOR(int8_t, 4))(4L)), ((VECTOR(int8_t, 4))(0x6BL))))).w, (int8_t)p_97))), ((VECTOR(int8_t, 8))(0x50L))))).s17)).odd, 0x6FL, 0x7DL, 9L, p_98, (-1L), (-1L))), ((VECTOR(int8_t, 8))(0x59L))))).s3335055425015731, (int8_t)l_433.x))).s6)) <= p_1284->g_114), p_1284->g_182.f1)) , GROUP_DIVERGE(2, 1)) == p_98) ^ 0x14D0A0A61FD382A0L) | l_445) , (**p_96)))
                { /* block id: 197 */
                    int32_t l_446 = (-6L);
                    int32_t l_447 = 1L;
                    int32_t l_449 = 0x1FDDA03AL;
                    int32_t l_451 = 1L;
                    VECTOR(uint32_t, 4) l_458 = (VECTOR(uint32_t, 4))(0x82821F11L, (VECTOR(uint32_t, 2))(0x82821F11L, 0UL), 0UL);
                    uint32_t l_471 = 0x02701F4CL;
                    int64_t *l_501[9][5] = {{&p_1284->g_182.f7,(void*)0,(void*)0,&p_1284->g_182.f7,&p_1284->g_182.f7},{&p_1284->g_182.f7,(void*)0,(void*)0,&p_1284->g_182.f7,&p_1284->g_182.f7},{&p_1284->g_182.f7,(void*)0,(void*)0,&p_1284->g_182.f7,&p_1284->g_182.f7},{&p_1284->g_182.f7,(void*)0,(void*)0,&p_1284->g_182.f7,&p_1284->g_182.f7},{&p_1284->g_182.f7,(void*)0,(void*)0,&p_1284->g_182.f7,&p_1284->g_182.f7},{&p_1284->g_182.f7,(void*)0,(void*)0,&p_1284->g_182.f7,&p_1284->g_182.f7},{&p_1284->g_182.f7,(void*)0,(void*)0,&p_1284->g_182.f7,&p_1284->g_182.f7},{&p_1284->g_182.f7,(void*)0,(void*)0,&p_1284->g_182.f7,&p_1284->g_182.f7},{&p_1284->g_182.f7,(void*)0,(void*)0,&p_1284->g_182.f7,&p_1284->g_182.f7}};
                    int i, j;
                    l_455++;
                    if ((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(0x9328AB56L, 0x08E850C2L, p_1284->g_341.s6, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_458.wyww)))).zwxyywxw)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_1284->g_459.s2185e1e49c8592cf)).sa4)), 0x3FE9A9ADL, 0x3538AB42L)), 0x17A61394L)).s05)).xyyy, ((VECTOR(uint32_t, 4))(l_460.s662b))))).lo, (uint32_t)(0UL < (((safe_mod_func_int16_t_s_s(p_1284->g_149, 0x46DBL)) == p_1284->g_238.f6) > p_1284->g_432.s6))))).yxxyyyxxyyyyyyyy)))).s3 | (safe_div_func_uint64_t_u_u((p_1284->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1284->tid, 89))] ^ ((void*)0 != &p_97)), 0x79A59931891D9A1DL))))
                    { /* block id: 199 */
                        int16_t l_467[7][5][7] = {{{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL}},{{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL}},{{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL}},{{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL}},{{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL}},{{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL}},{{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL},{0x548AL,0x0555L,0x135EL,0x564EL,(-2L),0x2D35L,0x564EL}}};
                        int32_t l_468 = 0x6CE00D26L;
                        int32_t l_469 = 0x2FBC2641L;
                        int i, j, k;
                        (*p_1284->g_112) ^= (safe_mul_func_uint16_t_u_u(l_451, p_1284->g_238.f1));
                        --l_471;
                    }
                    else
                    { /* block id: 202 */
                        int64_t l_474 = 0x61337C848D930756L;
                        uint32_t *l_479 = &l_471;
                        uint32_t *l_486 = (void*)0;
                        uint32_t *l_487 = (void*)0;
                        int64_t **l_502 = &l_501[1][4];
                        (*p_96) = &l_451;
                        (**p_96) |= (l_474 | l_455);
                        (**p_96) &= (p_1284->g_166.f5 ^ (safe_mul_func_uint8_t_u_u((((((((*p_1284->g_376) = (safe_unary_minus_func_int64_t_s((l_478 & ((--(*l_479)) <= (safe_sub_func_uint16_t_u_u(0xDFDDL, (~p_1284->g_182.f1)))))))) & (safe_mul_func_uint16_t_u_u(((p_98 && p_1284->g_comm_values[p_1284->tid]) , ((GROUP_DIVERGE(1, 1) , ((p_1284->g_350.x &= p_1284->g_432.s4) || l_474)) , (p_97 && l_450))), 7UL))) , p_1284->g_182.f4) , 0x04BEL) , p_98) < 0UL), 0x45L)));
                        (**p_96) = (safe_mul_func_uint8_t_u_u((((p_1284->g_340.y ^ 1UL) != (0UL && (safe_add_func_int16_t_s_s(0x3F30L, (safe_unary_minus_func_int8_t_s((safe_sub_func_uint16_t_u_u(((l_495 != p_1284->g_440[2][9][1]) >= ((*l_405) = (p_1284->g_496 , ((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((((*l_502) = l_501[1][4]) == p_1284->g_503) , p_98), 6)) >= l_447), 1L)) & 0x2B4E964EL)))), p_98)))))))) >= p_1284->g_432.s3), (*p_1284->g_376)));
                    }
                }
                else
                { /* block id: 213 */
                    uint32_t *l_524 = (void*)0;
                    int32_t l_531 = (-3L);
                    int32_t l_532 = 0x63DB1E01L;
                    struct S0 ****l_536 = &p_1284->g_310;
                    if ((((*l_405) |= (((p_97 , ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(1UL, (safe_mul_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))((-5L), 0x748CL)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(l_508.s7517)).lo, ((VECTOR(int16_t, 16))(0L, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-1L), 1L)).yxxxyyxx)).s4121650442540314)).s7, 0x074DL, ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_1284->g_509.zy)), 0x3755L, 0x53F5L)).even)).yxyy, (int16_t)((l_531 = (safe_lshift_func_int8_t_s_u(((((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(((((((safe_mul_func_uint8_t_u_u((p_97 , (l_520 && ((safe_div_func_uint32_t_u_u((((((*l_331) = &p_1284->g_52) != ((safe_unary_minus_func_uint32_t_u((((p_1284->g_182.f0++) ^ (((p_1284->g_527 = (p_97 , &p_1284->g_310)) == l_528) != ((!((((p_1284->g_529 , p_98) && 3UL) == FAKE_DIVERGE(p_1284->global_1_offset, get_global_id(1), 10)) && 1UL)) != l_431.w))) > 0x89E0L))) , l_530)) ^ l_364.s5) , p_1284->g_439[1].f4), (-1L))) <= 0x183D74373A461B1EL))), l_448)) >= (*p_1284->g_112)) && 0x27L) | p_98) , (**p_96)) ^ 0x6B97D359L), p_97)), 0)) & (**p_96)) == p_97) != 0x0BL) != 0UL) || 0x44L), l_460.sa))) == 9L)))), 4L, ((VECTOR(int16_t, 8))(0x79B4L)))).s37))), 0x3383L, (-10L))).hi, ((VECTOR(int16_t, 2))(0x1200L))))), 0x290FL, 0x5D71L)).yxyxzwwwywyzwwwz)).sa5, ((VECTOR(int16_t, 2))((-1L)))))).lo, p_97)) < p_1284->g_529.f0), 0xFBL)), 0x13FAL, 1UL, 0x7DAEL, 0xB492L, ((VECTOR(uint16_t, 4))(0xADE8L)), ((VECTOR(uint16_t, 2))(0x9148L)), 0xA59EL, p_1284->g_529.f8, 0x7EC7L, 0UL)).sdd)).even) || 0x3641L) ^ l_532)) != (-4L)))
                    { /* block id: 219 */
                        uint32_t l_533 = 0xED1DB994L;
                        struct S0 ****l_537 = &p_1284->g_310;
                        int32_t l_554 = 0x24370817L;
                        l_533++;
                        (**p_96) = (l_536 != l_537);
                        l_554 &= ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_538.yzxw)))).zxxwwzxwxwywwzzy, ((VECTOR(int32_t, 2))(0x4DA33946L, 0x221CB5A2L)).xxxyyyyyyyyxxxxx))).hi)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_539.zxyyzxxy)).s45)), ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(4L, ((**p_96) || (safe_unary_minus_func_int64_t_s(0x558FB76AF5EB7EDBL))), 0L, 0x6B0EADBEL)), ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(l_541.s0301)).wzwyxzzzxwyxywzz, (int32_t)((**p_96) = ((safe_rshift_func_int16_t_s_s((FAKE_DIVERGE(p_1284->global_2_offset, get_global_id(2), 10) == (((*l_423) &= ((((*p_1284->g_212) , 0L) ^ (((VECTOR(int8_t, 8))(0x26L, (-1L), (-7L), ((VECTOR(int8_t, 2))(p_1284->g_546.sff)).hi, 0x4EL, ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 2))(l_547.yy))))), (-5L))).s4 < 0x51L)) && (1L <= ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(p_1284->g_548.s1616)))).xzxxyyyw)).s5 , &p_97) == (void*)0)))) == (safe_mod_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((p_1284->g_113 > l_553) , (*p_1284->g_376)), 0x0AL)), l_533)))), 4)) != p_1284->g_349.y)), (int32_t)l_531))).sba5c, ((VECTOR(int32_t, 4))(9L))))).ywwxzwxxxwxxxywx))).s46, ((VECTOR(int32_t, 2))(0x0DF89C2FL))))).xxxyyyxy))))).s4107150132376561)), ((VECTOR(int32_t, 16))(0x218562D0L))))).hi)).s00)).yyyy, ((VECTOR(int32_t, 4))((-1L)))))).x;
                        return p_97;
                    }
                    else
                    { /* block id: 226 */
                        l_454 &= (*p_1284->g_112);
                        (**p_96) ^= ((void*)0 == &l_403[1]);
                        (**p_96) ^= 1L;
                        return p_1284->g_418.s4;
                    }
                }
                ++l_555;
            }
            else
            { /* block id: 234 */
                uint16_t *l_574 = &l_555;
                int32_t l_581 = (-1L);
                int32_t l_582 = 1L;
                VECTOR(uint16_t, 8) l_591 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x5AB4L), 0x5AB4L), 0x5AB4L, 65535UL, 0x5AB4L);
                uint8_t l_601 = 248UL;
                int32_t l_621 = 0x1E3D9906L;
                int32_t l_622 = 0x0784252BL;
                int32_t l_623 = 0x4889368CL;
                int32_t l_624 = (-4L);
                int i;
                if ((l_582 ^= ((VECTOR(int32_t, 8))(0x05173D13L, (safe_add_func_uint16_t_u_u((p_1284->g_248 = (safe_unary_minus_func_uint32_t_u(((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(4294967295UL, (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((p_1284->g_580 = (safe_sub_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((p_98 & ((((((GROUP_DIVERGE(0, 1) && (safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1284->local_0_offset, get_local_id(0), 10), p_98))) == (*p_1284->g_376)) && (p_97 ^ (*p_1284->g_376))) == ((VECTOR(int64_t, 2))(0x26172E3E7AB5D9EFL, 0x06F637CEA70FB13FL)).lo) == (safe_add_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((!(((*l_574) = (p_1284->g_529.f6 ^ GROUP_DIVERGE(2, 1))) , 0x7AC5A212FA9B3783L)) < (0UL >= ((((safe_mod_func_int16_t_s_s((safe_add_func_uint64_t_u_u(p_1284->g_354.y, (*p_1284->g_503))), 1UL)) == FAKE_DIVERGE(p_1284->group_2_offset, get_group_id(2), 10)) && p_1284->g_182.f7) < p_1284->g_400.s3))), p_98)), l_579))) != p_97)), p_98)), (-9L)))))), l_581)), ((VECTOR(uint32_t, 4))(4294967294UL)), ((VECTOR(uint32_t, 8))(0xE70094F6L)), 4294967290UL, 0x51793571L)).sd51b)))).w && (**p_1284->g_121)) > p_1284->g_113)))), 0xF4FCL)), ((VECTOR(int32_t, 4))(0x453E6065L)), 0x403B3A71L, 0x2FC8D7E5L)).s3))
                { /* block id: 239 */
                    struct S0 **l_592 = &p_1284->g_165;
                    int32_t l_599 = 0x1BFE2286L;
                    int32_t l_600 = 0x7D5A12D4L;
                    l_583 = (void*)0;
                    l_351.w = ((**p_96) = ((p_1284->g_584[0][3][1] , ((p_98 , (void*)0) != (void*)0)) <= p_1284->g_284));
                    (*p_1284->g_112) = (safe_rshift_func_uint16_t_u_u(((p_97 != ((*l_405) = (safe_rshift_func_int8_t_s_s((l_601 = ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))((safe_lshift_func_uint16_t_u_u(((((((p_1284->g_529.f0 == ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 16))(l_591.s6315200057543776))))).s2a, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((-1L), 0x02CCL, p_97, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 2))(4L, 1L)).xxxy, (int16_t)((GROUP_DIVERGE(0, 1) > (((((p_1284->g_182.f1 |= ((((((**l_528) = (**l_528)) == (p_1284->g_593 = l_592)) >= (0x40L == (l_599 = ((((safe_mod_func_uint8_t_u_u(l_598, (*p_1284->g_376))) == ((*p_1284->g_376) >= p_97)) && l_599) | FAKE_DIVERGE(p_1284->global_1_offset, get_global_id(1), 10))))) <= p_97) , FAKE_DIVERGE(p_1284->global_2_offset, get_global_id(2), 10))) < (-1L)) >= l_600) == p_1284->g_340.z) == p_97)) , p_1284->g_182.f2)))).hi, ((VECTOR(int16_t, 2))((-1L)))))), ((VECTOR(int16_t, 4))(0L)), ((VECTOR(int16_t, 4))(0x5542L)), 0x1ED6L, 0x43BBL, 0x3489L)))).see, ((VECTOR(int16_t, 2))(0x397DL)))))))).lo) || GROUP_DIVERGE(1, 1)) , GROUP_DIVERGE(1, 1)) , p_97) & (*p_1284->g_376)) ^ 1UL), 14)), ((VECTOR(int8_t, 2))(0L)), 0x07L)))), (-8L), p_97, (-10L), 0x53L, ((VECTOR(int8_t, 8))(0x4AL)))).sd4)).lo), 2)))) <= 0x5B3DEA95B50A913DL), 4));
                }
                else
                { /* block id: 250 */
                    int32_t **l_608[8][10] = {{&l_583,(void*)0,&l_426[3][2][1],&p_1284->g_112,&p_1284->g_112,&p_1284->g_112,(void*)0,&p_1284->g_112,(void*)0,(void*)0},{&l_583,(void*)0,&l_426[3][2][1],&p_1284->g_112,&p_1284->g_112,&p_1284->g_112,(void*)0,&p_1284->g_112,(void*)0,(void*)0},{&l_583,(void*)0,&l_426[3][2][1],&p_1284->g_112,&p_1284->g_112,&p_1284->g_112,(void*)0,&p_1284->g_112,(void*)0,(void*)0},{&l_583,(void*)0,&l_426[3][2][1],&p_1284->g_112,&p_1284->g_112,&p_1284->g_112,(void*)0,&p_1284->g_112,(void*)0,(void*)0},{&l_583,(void*)0,&l_426[3][2][1],&p_1284->g_112,&p_1284->g_112,&p_1284->g_112,(void*)0,&p_1284->g_112,(void*)0,(void*)0},{&l_583,(void*)0,&l_426[3][2][1],&p_1284->g_112,&p_1284->g_112,&p_1284->g_112,(void*)0,&p_1284->g_112,(void*)0,(void*)0},{&l_583,(void*)0,&l_426[3][2][1],&p_1284->g_112,&p_1284->g_112,&p_1284->g_112,(void*)0,&p_1284->g_112,(void*)0,(void*)0},{&l_583,(void*)0,&l_426[3][2][1],&p_1284->g_112,&p_1284->g_112,&p_1284->g_112,(void*)0,&p_1284->g_112,(void*)0,(void*)0}};
                    int32_t ***l_607 = &l_608[2][7];
                    int32_t **l_610 = &l_426[3][2][1];
                    int32_t ***l_609[9][1] = {{&l_610},{&l_610},{&l_610},{&l_610},{&l_610},{&l_610},{&l_610},{&l_610},{&l_610}};
                    int i, j;
                    l_454 |= (((void*)0 != l_602) , ((((8UL > (safe_add_func_uint16_t_u_u(((p_1284->g_611 = ((*l_607) = (l_606[2][3] = ((((*l_423) &= ((*p_1284->g_503) ^ p_1284->g_349.x)) <= ((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))((-1L), 4L, 6L, (-4L))))).even)).yyxyyxyyyxyxyyxx, ((VECTOR(int64_t, 8))(p_1284->g_605.s31374327)).s7101577364435255))).s7) , &p_1284->g_112)))) == p_96), ((((safe_rshift_func_int16_t_s_u(0x5FE8L, ((safe_lshift_func_int16_t_s_s(((*p_1284->g_376) , p_1284->g_546.s3), 6)) , p_1284->g_113))) > p_97) < p_1284->g_277.sf) , p_1284->g_605.s4)))) <= (**p_96)) ^ p_97) >= 1UL));
                    l_616[0][0] = &p_1284->g_584[0][3][1];
                    p_1284->g_618 = ((FAKE_DIVERGE(p_1284->local_1_offset, get_local_id(1), 10) ^ 4294967291UL) , p_1284->g_617[0]);
                    l_625--;
                }
                (*p_1284->g_611) = l_628;
                l_624 &= p_98;
            }
        }
        else
        { /* block id: 263 */
            int64_t l_629 = 0x7D5A2AF219BF0402L;
            VECTOR(uint64_t, 2) l_650 = (VECTOR(uint64_t, 2))(0UL, 0x871E6BFAD23B26FBL);
            uint32_t l_662 = 0UL;
            int32_t l_665 = 0L;
            int32_t l_676 = 0x591E3613L;
            VECTOR(int16_t, 4) l_692 = (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0L), 0L);
            VECTOR(int64_t, 8) l_704 = (VECTOR(int64_t, 8))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 0L), 0L), 0L, 4L, 0L);
            VECTOR(int64_t, 2) l_710 = (VECTOR(int64_t, 2))((-6L), 7L);
            struct S1 **l_763 = &l_646;
            uint64_t *l_765 = &l_443[0][1];
            VECTOR(uint32_t, 2) l_770 = (VECTOR(uint32_t, 2))(4294967295UL, 0x44585481L);
            struct S0 **l_771[9][2] = {{&p_1284->g_165,&p_1284->g_165},{&p_1284->g_165,&p_1284->g_165},{&p_1284->g_165,&p_1284->g_165},{&p_1284->g_165,&p_1284->g_165},{&p_1284->g_165,&p_1284->g_165},{&p_1284->g_165,&p_1284->g_165},{&p_1284->g_165,&p_1284->g_165},{&p_1284->g_165,&p_1284->g_165},{&p_1284->g_165,&p_1284->g_165}};
            uint16_t *l_772 = &p_1284->g_248;
            int i, j;
            l_629 &= ((**p_96) = (**p_1284->g_611));
            for (p_1284->g_166.f8 = (-8); (p_1284->g_166.f8 != 5); p_1284->g_166.f8++)
            { /* block id: 268 */
                struct S1 **l_632 = &l_616[0][0];
                uint16_t *l_642 = &l_520;
                VECTOR(int32_t, 2) l_645 = (VECTOR(int32_t, 2))(6L, 0x3D648520L);
                VECTOR(uint64_t, 16) l_647 = (VECTOR(uint64_t, 16))(0x8803401CE08A8F84L, (VECTOR(uint64_t, 4))(0x8803401CE08A8F84L, (VECTOR(uint64_t, 2))(0x8803401CE08A8F84L, 7UL), 7UL), 7UL, 0x8803401CE08A8F84L, 7UL, (VECTOR(uint64_t, 2))(0x8803401CE08A8F84L, 7UL), (VECTOR(uint64_t, 2))(0x8803401CE08A8F84L, 7UL), 0x8803401CE08A8F84L, 7UL, 0x8803401CE08A8F84L, 7UL);
                VECTOR(uint64_t, 16) l_648 = (VECTOR(uint64_t, 16))(0x21BA5D9725990BD6L, (VECTOR(uint64_t, 4))(0x21BA5D9725990BD6L, (VECTOR(uint64_t, 2))(0x21BA5D9725990BD6L, 0x8F9D5A3D3AE810DAL), 0x8F9D5A3D3AE810DAL), 0x8F9D5A3D3AE810DAL, 0x21BA5D9725990BD6L, 0x8F9D5A3D3AE810DAL, (VECTOR(uint64_t, 2))(0x21BA5D9725990BD6L, 0x8F9D5A3D3AE810DAL), (VECTOR(uint64_t, 2))(0x21BA5D9725990BD6L, 0x8F9D5A3D3AE810DAL), 0x21BA5D9725990BD6L, 0x8F9D5A3D3AE810DAL, 0x21BA5D9725990BD6L, 0x8F9D5A3D3AE810DAL);
                VECTOR(uint64_t, 2) l_649 = (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x69D87A3FAA85A8F1L);
                VECTOR(int32_t, 8) l_668 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x19D2D17DL), 0x19D2D17DL), 0x19D2D17DL, 8L, 0x19D2D17DL);
                VECTOR(int16_t, 16) l_725 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x37ECL), 0x37ECL), 0x37ECL, (-1L), 0x37ECL, (VECTOR(int16_t, 2))((-1L), 0x37ECL), (VECTOR(int16_t, 2))((-1L), 0x37ECL), (-1L), 0x37ECL, (-1L), 0x37ECL);
                VECTOR(int16_t, 2) l_745 = (VECTOR(int16_t, 2))(1L, 0L);
                VECTOR(int16_t, 16) l_749 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x5524L), 0x5524L), 0x5524L, (-1L), 0x5524L, (VECTOR(int16_t, 2))((-1L), 0x5524L), (VECTOR(int16_t, 2))((-1L), 0x5524L), (-1L), 0x5524L, (-1L), 0x5524L);
                int i;
                (*l_632) = (p_98 , &p_1284->g_584[4][0][0]);
            }
            if ((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(0x12L, p_97)), ((*l_772) = ((*p_1284->g_212) , (safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (l_665 = ((safe_add_func_uint64_t_u_u(0UL, (l_676 = (((*l_765) = (((*l_763) = l_616[0][0]) != l_764)) | (safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_770.xyxyyyyx)).s17)), 0x162BD56FL, 0UL)).z, ((l_771[5][0] != (void*)0) ^ p_98))), p_98)))))) > (*p_1284->g_503))))), p_97)), p_97)))))))
            { /* block id: 321 */
                uint32_t l_773 = 0x46C9D185L;
                int32_t l_774 = 1L;
                (**p_96) &= 0L;
                l_773 = ((**p_96) &= l_710.y);
                l_774 &= (**p_96);
            }
            else
            { /* block id: 326 */
                for (p_1284->g_166.f4 = (-20); (p_1284->g_166.f4 <= 21); p_1284->g_166.f4 = safe_add_func_uint64_t_u_u(p_1284->g_166.f4, 9))
                { /* block id: 329 */
                    return p_97;
                }
                (*p_96) = (*p_96);
            }
            (*p_1284->g_112) = ((l_777[4][1][1] == l_777[3][4][0]) , ((((safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(FAKE_DIVERGE(p_1284->group_0_offset, get_group_id(0), 10), ((void*)0 != &p_1284->g_149))), ((0L && (GROUP_DIVERGE(2, 1) & p_98)) > ((VECTOR(int32_t, 16))(l_784.s5703463415766600)).s7))) ^ p_1284->g_529.f5), (p_98 , (*p_1284->g_376)))) || 0x5CAF7DA7037057DCL) <= l_785) != 0xADBCL));
        }
        l_539.w &= ((safe_rshift_func_uint16_t_u_u((p_98 >= 2L), FAKE_DIVERGE(p_1284->group_1_offset, get_group_id(1), 10))) == GROUP_DIVERGE(2, 1));
    }
    return p_97;
}


/* ------------------------------------------ */
/* 
 * reads : p_1284->g_121 p_1284->g_114 p_1284->g_149 p_1284->g_113 p_1284->g_165 p_1284->g_167 p_1284->g_112 p_1284->g_166 p_1284->g_181 p_1284->g_182.f3 p_1284->g_116 p_1284->g_182.f7 p_1284->g_211 p_1284->g_212 p_1284->g_182 p_1284->g_29 p_1284->g_274 p_1284->g_3 p_1284->g_276 p_1284->g_277 p_1284->g_238.f4 p_1284->l_comm_values p_1284->g_284
 * writes: p_1284->g_112 p_1284->g_114 p_1284->g_149 p_1284->g_165 p_1284->g_113 p_1284->g_166.f0 p_1284->g_182 p_1284->g_166.f4 p_1284->g_211
 */
int32_t ** func_99(int8_t  p_100, int16_t  p_101, int32_t ** p_102, int32_t ** p_103, uint32_t  p_104, struct S2 * p_1284)
{ /* block id: 40 */
    int32_t *l_120 = &p_1284->g_113;
    int32_t l_131 = 7L;
    int32_t l_137 = 0x0794590AL;
    int32_t l_145[4][10] = {{0x22289B71L,(-10L),0x22289B71L,0x22289B71L,(-10L),0x22289B71L,0x22289B71L,(-10L),0x22289B71L,0x22289B71L},{0x22289B71L,(-10L),0x22289B71L,0x22289B71L,(-10L),0x22289B71L,0x22289B71L,(-10L),0x22289B71L,0x22289B71L},{0x22289B71L,(-10L),0x22289B71L,0x22289B71L,(-10L),0x22289B71L,0x22289B71L,(-10L),0x22289B71L,0x22289B71L},{0x22289B71L,(-10L),0x22289B71L,0x22289B71L,(-10L),0x22289B71L,0x22289B71L,(-10L),0x22289B71L,0x22289B71L}};
    int64_t l_156 = 0x0523DCADDED1B2F9L;
    uint32_t l_158[2];
    VECTOR(int32_t, 4) l_195 = (VECTOR(int32_t, 4))(0x21115CFEL, (VECTOR(int32_t, 2))(0x21115CFEL, (-1L)), (-1L));
    VECTOR(int8_t, 8) l_224 = (VECTOR(int8_t, 8))(0x5FL, (VECTOR(int8_t, 4))(0x5FL, (VECTOR(int8_t, 2))(0x5FL, 0x51L), 0x51L), 0x51L, 0x5FL, 0x51L);
    VECTOR(int8_t, 16) l_225 = (VECTOR(int8_t, 16))(0x6CL, (VECTOR(int8_t, 4))(0x6CL, (VECTOR(int8_t, 2))(0x6CL, 0x6FL), 0x6FL), 0x6FL, 0x6CL, 0x6FL, (VECTOR(int8_t, 2))(0x6CL, 0x6FL), (VECTOR(int8_t, 2))(0x6CL, 0x6FL), 0x6CL, 0x6FL, 0x6CL, 0x6FL);
    uint32_t l_262 = 0x3A14165BL;
    int8_t l_287 = 0x18L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_158[i] = 4294967295UL;
    (*p_1284->g_121) = l_120;
    l_120 = l_120;
    (*p_1284->g_121) = l_120;
    for (p_101 = 13; (p_101 != 16); p_101 = safe_add_func_uint64_t_u_u(p_101, 2))
    { /* block id: 46 */
        int64_t l_143 = (-1L);
        int32_t l_144 = 0x3F41FD33L;
        int32_t l_146 = 0x4F63262DL;
        int32_t l_147 = 0x61C82C1CL;
        int32_t l_148[7][5] = {{2L,(-7L),0x1BE5FB79L,(-7L),2L},{2L,(-7L),0x1BE5FB79L,(-7L),2L},{2L,(-7L),0x1BE5FB79L,(-7L),2L},{2L,(-7L),0x1BE5FB79L,(-7L),2L},{2L,(-7L),0x1BE5FB79L,(-7L),2L},{2L,(-7L),0x1BE5FB79L,(-7L),2L},{2L,(-7L),0x1BE5FB79L,(-7L),2L}};
        VECTOR(int64_t, 4) l_213 = (VECTOR(int64_t, 4))(0x0A512BFDCEE5B47AL, (VECTOR(int64_t, 2))(0x0A512BFDCEE5B47AL, 0x73299ABA915A7FF4L), 0x73299ABA915A7FF4L);
        VECTOR(int8_t, 4) l_221 = (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0L), 0L);
        struct S0 **l_231[7] = {&p_1284->g_165,(void*)0,&p_1284->g_165,&p_1284->g_165,(void*)0,&p_1284->g_165,&p_1284->g_165};
        VECTOR(int8_t, 4) l_275 = (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x28L), 0x28L);
        int32_t l_288 = (-7L);
        int i, j;
        for (p_1284->g_114 = 0; (p_1284->g_114 < 12); ++p_1284->g_114)
        { /* block id: 49 */
            int32_t l_130 = 0L;
            int32_t *l_132 = &l_131;
            int32_t *l_133 = (void*)0;
            int32_t *l_134 = &p_1284->g_113;
            int32_t *l_135 = &l_131;
            int32_t *l_136 = &l_131;
            int32_t *l_138 = &l_137;
            int32_t *l_139 = &l_131;
            int32_t *l_140 = &p_1284->g_113;
            int32_t *l_141 = &l_137;
            int32_t *l_142[8][2][8] = {{{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0},{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0}},{{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0},{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0}},{{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0},{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0}},{{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0},{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0}},{{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0},{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0}},{{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0},{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0}},{{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0},{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0}},{{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0},{&l_131,&l_137,&p_1284->g_3,&l_131,(void*)0,&p_1284->g_3,&p_1284->g_3,(void*)0}}};
            uint64_t l_150 = 0xF138F814AE1D9C25L;
            int i, j, k;
            --l_150;
            for (p_1284->g_149 = 25; (p_1284->g_149 == 14); p_1284->g_149 = safe_sub_func_int16_t_s_s(p_1284->g_149, 7))
            { /* block id: 53 */
                int8_t l_155 = 5L;
                int32_t l_157[2][1][1];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_157[i][j][k] = 0x67619783L;
                    }
                }
                ++l_158[1];
                (*l_132) |= (safe_add_func_uint32_t_u_u(p_1284->g_149, (*l_120)));
            }
        }
        for (l_131 = 0; (l_131 <= 10); ++l_131)
        { /* block id: 60 */
            int32_t *l_172 = &p_1284->g_29;
            struct S0 *l_188 = &p_1284->g_182;
            int32_t l_197 = 7L;
            struct S1 *l_246[8][5] = {{(void*)0,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211},{(void*)0,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211},{(void*)0,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211},{(void*)0,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211},{(void*)0,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211},{(void*)0,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211},{(void*)0,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211},{(void*)0,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211,&p_1284->g_211}};
            int32_t l_258 = 0x412A1E54L;
            int32_t l_259 = 0x454E6242L;
            int32_t l_260 = 0L;
            int32_t l_261 = 0L;
            int32_t *l_285 = &l_137;
            int32_t *l_286[7][8][4] = {{{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131}},{{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131}},{{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131}},{{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131}},{{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131}},{{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131}},{{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131},{&l_197,&l_145[2][5],&l_147,&l_131}}};
            VECTOR(uint32_t, 16) l_289 = (VECTOR(uint32_t, 16))(0x4E0BCB37L, (VECTOR(uint32_t, 4))(0x4E0BCB37L, (VECTOR(uint32_t, 2))(0x4E0BCB37L, 0xD30234B2L), 0xD30234B2L), 0xD30234B2L, 0x4E0BCB37L, 0xD30234B2L, (VECTOR(uint32_t, 2))(0x4E0BCB37L, 0xD30234B2L), (VECTOR(uint32_t, 2))(0x4E0BCB37L, 0xD30234B2L), 0x4E0BCB37L, 0xD30234B2L, 0x4E0BCB37L, 0xD30234B2L);
            int i, j, k;
            if ((p_1284->g_114 < p_104))
            { /* block id: 61 */
                struct S0 **l_210 = &l_188;
                int32_t l_228[5] = {0x39829F15L,0x39829F15L,0x39829F15L,0x39829F15L,0x39829F15L};
                int32_t l_241 = 0x056B5D0FL;
                uint16_t *l_249 = &p_1284->g_248;
                int32_t *l_250 = &l_148[4][4];
                int i;
                (*p_1284->g_167) = p_1284->g_165;
                for (p_1284->g_149 = 0; (p_1284->g_149 <= 2); p_1284->g_149++)
                { /* block id: 65 */
                    (*p_1284->g_112) &= (-3L);
                    for (p_100 = (-27); (p_100 >= 11); ++p_100)
                    { /* block id: 69 */
                        int32_t **l_173[7] = {&p_1284->g_112,&l_120,&p_1284->g_112,&p_1284->g_112,&l_120,&p_1284->g_112,&p_1284->g_112};
                        int i;
                        l_172 = l_172;
                    }
                    if ((atomic_inc(&p_1284->l_atomic_input[1]) == 6))
                    { /* block id: 73 */
                        int32_t *l_174 = (void*)0;
                        int32_t l_176 = 1L;
                        int32_t *l_175[8][6] = {{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176},{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176},{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176},{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176},{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176},{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176},{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176},{&l_176,&l_176,&l_176,&l_176,&l_176,&l_176}};
                        int i, j;
                        l_175[6][2] = l_174;
                        unsigned int result = 0;
                        result += l_176;
                        atomic_add(&p_1284->l_special_values[1], result);
                    }
                    else
                    { /* block id: 75 */
                        (1 + 1);
                    }
                }
                for (l_143 = (-11); (l_143 >= 25); l_143 = safe_add_func_uint16_t_u_u(l_143, 2))
                { /* block id: 81 */
                    uint32_t l_183 = 0x6841CB19L;
                    int32_t **l_196 = &l_172;
                    for (p_1284->g_166.f0 = 24; (p_1284->g_166.f0 <= 51); p_1284->g_166.f0++)
                    { /* block id: 84 */
                        int i, j;
                        (*p_1284->g_181) = (**p_1284->g_167);
                        if (l_183)
                            continue;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1284->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 89)), permutations[(safe_mod_func_uint32_t_u_u(p_1284->g_166.f6, 10))][(safe_mod_func_uint32_t_u_u(p_1284->tid, 89))]));
                    }
                    if (((((void*)0 != p_102) , (safe_rshift_func_int16_t_s_u((0L ^ (safe_div_func_int64_t_s_s((*l_120), GROUP_DIVERGE(0, 1)))), 2))) == (((void*)0 == l_188) ^ ((safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(GROUP_DIVERGE(0, 1), (((0x37E7697FL > ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(0x41344389L, ((VECTOR(int32_t, 2))(l_195.wz)), ((p_1284->g_114 | ((((*l_196) = l_172) == (void*)0) != l_197)) | (*l_120)), 0x7B73719AL, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 2))(0L)), (-10L), 0x23499DF8L, l_148[5][1], 0x7D440B17L, (-7L))), ((VECTOR(int32_t, 16))(0x028A1B20L))))).sb) == p_1284->g_182.f3) == 1L))), p_100)), 0xF37CDAB2235F0C6EL)) >= 0x1B2AB06402A00CF9L))))
                    { /* block id: 92 */
                        (*l_120) = 0x64F363A3L;
                        return &p_1284->g_112;
                    }
                    else
                    { /* block id: 95 */
                        int32_t *l_202 = (void*)0;
                        int16_t *l_203 = &p_1284->g_149;
                        (*p_1284->g_112) &= 0x09B306FAL;
                        (*p_1284->g_112) = (((safe_rshift_func_int16_t_s_s(((*l_203) = (safe_mod_func_uint16_t_u_u((l_202 == (void*)0), p_1284->g_116[2][4]))), (p_104 == p_1284->g_116[3][1]))) & ((p_1284->g_166.f4 = ((((safe_lshift_func_uint8_t_u_s(((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 8))(0x2697F749FDA80F47L, (((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 4))((GROUP_DIVERGE(0, 1) & ((!(p_100 |= 0x79L)) & (safe_rshift_func_uint16_t_u_s(((void*)0 == l_210), 1)))), ((&p_1284->g_116[3][3] != (void*)0) | (*l_172)), 0x8734B30178618A0AL, 0x989D8AF96AB8CA2FL)).even, (uint64_t)p_100))).xxyy)), ((VECTOR(uint64_t, 8))(18446744073709551612UL)), p_1284->g_114, 0x47BB7FCCB76EA8D9L, 0x55D181BC6CD9A6DEL, 0xF0A175524799D543L)).s7 < 0x0295BB7E847FF5A7L) , (void*)0) == (void*)0), (**l_196), ((VECTOR(int64_t, 2))(1L)), ((VECTOR(int64_t, 2))(0x5FB90B1718184048L)), 0x37341C2686B1FE11L)), ((VECTOR(int64_t, 8))(0L))))))).s5612372466226322)).se, p_1284->g_182.f7)) ^ p_104), 1)) && 0x88E8F4C4L) == (*l_120)) >= p_104)) | 1L)) || FAKE_DIVERGE(p_1284->group_1_offset, get_group_id(1), 10));
                        (*p_1284->g_212) = p_1284->g_211;
                    }
                    if (((*l_188) , p_101))
                    { /* block id: 103 */
                        uint64_t l_220 = 0UL;
                        uint8_t *l_229 = &p_1284->g_182.f1;
                        int32_t l_230 = 0x2D859095L;
                        struct S0 ***l_232[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_230 ^= (p_1284->g_166.f1 ^ ((((*p_1284->g_212) , 1UL) , ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))(((((VECTOR(uint32_t, 2))(4294967295UL, 0xF4640E20L)).odd | (((*l_120) >= (((VECTOR(int64_t, 8))(l_213.xzzzzzzw)).s7 & (safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((l_220 >= ((p_100 = ((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_221.ww)), 0x45L, (safe_sub_func_int16_t_s_s(l_220, p_104)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_224.s75772152)).lo)), ((VECTOR(int8_t, 2))(l_225.s19)), (-2L), 0L)), (((safe_mul_func_uint8_t_u_u(((*l_229) = ((65535UL & (*l_120)) , l_228[1])), l_228[0])) >= (*l_120)) ^ l_228[1]), ((VECTOR(int8_t, 2))(0x00L)), 3L)).s3837, ((VECTOR(int8_t, 4))(0x13L))))).x) < 0x2AL)) & l_228[1]), p_1284->g_114)), p_101)))) & FAKE_DIVERGE(p_1284->group_1_offset, get_group_id(1), 10))) , (**p_1284->g_121)), 0x0A786B73L, ((VECTOR(int32_t, 4))(0x2B11E068L)), 0x750D2932L, 0x75422587L)).lo, (int32_t)(*l_120), (int32_t)l_221.y))).y) | l_228[2]));
                        if ((*l_120))
                            continue;
                        l_210 = l_231[6];
                        if (l_144)
                            break;
                    }
                    else
                    { /* block id: 110 */
                        return &p_1284->g_112;
                    }
                    for (l_146 = 0; (l_146 > 29); l_146 = safe_add_func_int8_t_s_s(l_146, 2))
                    { /* block id: 115 */
                        int8_t *l_244 = (void*)0;
                        int8_t *l_245 = &p_1284->g_166.f4;
                        uint16_t *l_247 = &p_1284->g_248;
                        (*p_1284->g_112) |= (safe_mul_func_int16_t_s_s((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 4))(0x269671310D6146A2L, 0x51204B87F05BAAB0L, 0x4A99A04B6D0C135CL, 1L)).xzwzwzzzzzyyxxxw, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(p_1284->g_237.zwxwxzxy)).hi)), ((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 16))((-8L), 0x1F36ABCF7D55AAA7L, ((p_1284->g_238 , (((l_241 , ((safe_mul_func_int8_t_s_s(((*l_245) = 8L), FAKE_DIVERGE(p_1284->global_2_offset, get_global_id(2), 10))) , &p_1284->g_211)) == l_246[0][4]) >= ((void*)0 == &l_210))) != (((*l_247) = p_1284->g_182.f7) , 0x37L)), p_100, ((VECTOR(int64_t, 2))(0x43E520555534BD24L)), ((VECTOR(int64_t, 2))(0L)), ((VECTOR(int64_t, 4))(0L)), p_1284->g_166.f8, (-1L), 7L, 0x170D4772450F0D24L)).s16, ((VECTOR(int64_t, 2))((-9L)))))), 1L, (-2L))).s76)), 0x4726A68CAE07E1C3L, 0L)).yxywzyzwxwzzxzyw))))).sf ^ l_228[1]), p_104));
                        if ((*l_172))
                            continue;
                        (*l_196) = &l_197;
                        if (l_228[1])
                            continue;
                    }
                }
                (*l_250) = ((*l_120) &= ((l_249 == &p_1284->g_248) ^ 0L));
            }
            else
            { /* block id: 126 */
                int32_t ***l_251 = (void*)0;
                int32_t **l_253 = (void*)0;
                int32_t ***l_252 = &l_253;
                int32_t *l_254 = (void*)0;
                int32_t *l_255 = &l_146;
                int32_t *l_256 = &l_137;
                int32_t *l_257[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_257[i] = &l_145[2][5];
                (*l_252) = &p_1284->g_112;
                --l_262;
            }
            for (p_1284->g_182.f8 = 0; (p_1284->g_182.f8 >= 30); p_1284->g_182.f8++)
            { /* block id: 132 */
                VECTOR(int8_t, 2) l_273 = (VECTOR(int8_t, 2))(0L, 0x10L);
                int i;
                (*l_120) = (((safe_lshift_func_int8_t_s_s((*l_172), 5)) | ((safe_rshift_func_uint16_t_u_u(((!(safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1284->global_2_offset, get_global_id(2), 10), FAKE_DIVERGE(p_1284->group_0_offset, get_group_id(0), 10)))) == ((VECTOR(int8_t, 16))(0x2FL, ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_273.yyyy)).lo)).xxyxyxxy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_1284->g_274.xxyy)), ((VECTOR(int8_t, 4))(((*l_120) > ((*p_1284->g_212) , (((VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551607UL)).odd && (p_1284->g_3 , (1UL > p_1284->g_166.f6))))), ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(0x5CL, 0L)), ((VECTOR(int8_t, 16))(l_275.xwyxwwxzyzxywwxw)).sc2))), 0L)))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_1284->g_276.wyyx)), ((VECTOR(int8_t, 2))(p_1284->g_277.s29)), 0x13L, 6L)).lo, (int8_t)(safe_div_func_uint32_t_u_u(p_1284->g_276.w, (-2L))), (int8_t)(((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(p_1284->g_238.f4, p_1284->g_274.x)), (-3L))) && 4294967295UL) == 5UL)))))).wwzzxwyx))), p_1284->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1284->tid, 89))], p_1284->g_284, 0x64L, p_101, ((VECTOR(int8_t, 2))((-1L))), 0x17L)).s3), 11)) == 0L)) | (*l_172));
            }
            --l_289.s5;
            if (l_148[4][4])
                continue;
        }
    }
    return &p_1284->g_112;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[89];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 89; i++)
            l_comm_values[i] = 1;
    struct S2 c_1285;
    struct S2* p_1284 = &c_1285;
    struct S2 c_1286 = {
        (-1L), // p_1284->g_2
        (-9L), // p_1284->g_3
        1L, // p_1284->g_29
        (void*)0, // p_1284->g_52
        0x17BD6D72L, // p_1284->g_113
        &p_1284->g_113, // p_1284->g_112
        (-5L), // p_1284->g_114
        {{(-2L),(-2L),0x00L,0L,0x60L,0L,0x00L},{(-2L),(-2L),0x00L,0L,0x60L,0L,0x00L},{(-2L),(-2L),0x00L,0L,0x60L,0L,0x00L},{(-2L),(-2L),0x00L,0L,0x60L,0L,0x00L},{(-2L),(-2L),0x00L,0L,0x60L,0L,0x00L},{(-2L),(-2L),0x00L,0L,0x60L,0L,0x00L},{(-2L),(-2L),0x00L,0L,0x60L,0L,0x00L},{(-2L),(-2L),0x00L,0L,0x60L,0L,0x00L}}, // p_1284->g_116
        &p_1284->g_112, // p_1284->g_121
        (void*)0, // p_1284->g_122
        (void*)0, // p_1284->g_123
        {&p_1284->g_112}, // p_1284->g_124
        (void*)0, // p_1284->g_125
        0x3CCEL, // p_1284->g_149
        {4294967287UL,248UL,0x304CF6092038D5A9L,0xF62E3C097C9C5F0FL,0x24L,0UL,0x063550A7L,0x0F617F48A4DBD085L,0UL}, // p_1284->g_166
        &p_1284->g_166, // p_1284->g_165
        &p_1284->g_165, // p_1284->g_167
        {1UL,255UL,-1L,18446744073709551611UL,0x36L,1UL,-10L,0x5D7BFDBE93F33EA3L,0UL}, // p_1284->g_182
        &p_1284->g_182, // p_1284->g_181
        {6UL,0x599AL,0x6D2E7ABA4B16BC27L}, // p_1284->g_211
        &p_1284->g_211, // p_1284->g_212
        (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 8L), 8L), // p_1284->g_237
        {2UL,0x19L,0x6A67B4F66C186E48L,0xC597BF8886F47031L,0x7CL,0UL,0x68996C2EL,0L,0xA85F2594L}, // p_1284->g_238
        0x7852L, // p_1284->g_248
        (VECTOR(int8_t, 2))(0x3CL, 0x06L), // p_1284->g_274
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x3EL), 0x3EL), // p_1284->g_276
        (VECTOR(int8_t, 16))(0x3AL, (VECTOR(int8_t, 4))(0x3AL, (VECTOR(int8_t, 2))(0x3AL, (-8L)), (-8L)), (-8L), 0x3AL, (-8L), (VECTOR(int8_t, 2))(0x3AL, (-8L)), (VECTOR(int8_t, 2))(0x3AL, (-8L)), 0x3AL, (-8L), 0x3AL, (-8L)), // p_1284->g_277
        18446744073709551615UL, // p_1284->g_284
        {{&p_1284->g_165,(void*)0,&p_1284->g_165,&p_1284->g_165,(void*)0,&p_1284->g_165},{&p_1284->g_165,(void*)0,&p_1284->g_165,&p_1284->g_165,(void*)0,&p_1284->g_165},{&p_1284->g_165,(void*)0,&p_1284->g_165,&p_1284->g_165,(void*)0,&p_1284->g_165},{&p_1284->g_165,(void*)0,&p_1284->g_165,&p_1284->g_165,(void*)0,&p_1284->g_165},{&p_1284->g_165,(void*)0,&p_1284->g_165,&p_1284->g_165,(void*)0,&p_1284->g_165}}, // p_1284->g_311
        &p_1284->g_311[1][4], // p_1284->g_310
        (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xCA3626D24BB4AE4EL), 0xCA3626D24BB4AE4EL), // p_1284->g_340
        (VECTOR(int64_t, 8))(0x6970707D56BF6B11L, (VECTOR(int64_t, 4))(0x6970707D56BF6B11L, (VECTOR(int64_t, 2))(0x6970707D56BF6B11L, 1L), 1L), 1L, 0x6970707D56BF6B11L, 1L), // p_1284->g_341
        (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xB4415FABF194AE8BL), 0xB4415FABF194AE8BL), 0xB4415FABF194AE8BL, 1UL, 0xB4415FABF194AE8BL, (VECTOR(uint64_t, 2))(1UL, 0xB4415FABF194AE8BL), (VECTOR(uint64_t, 2))(1UL, 0xB4415FABF194AE8BL), 1UL, 0xB4415FABF194AE8BL, 1UL, 0xB4415FABF194AE8BL), // p_1284->g_347
        (VECTOR(uint64_t, 2))(0xEE46C749F3FEC6A3L, 18446744073709551607UL), // p_1284->g_349
        (VECTOR(uint32_t, 2))(4294967295UL, 0x2A3A6CAAL), // p_1284->g_350
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), // p_1284->g_354
        &p_1284->g_166.f1, // p_1284->g_376
        (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x7765EB7DL), 0x7765EB7DL), 0x7765EB7DL, 6L, 0x7765EB7DL, (VECTOR(int32_t, 2))(6L, 0x7765EB7DL), (VECTOR(int32_t, 2))(6L, 0x7765EB7DL), 6L, 0x7765EB7DL, 6L, 0x7765EB7DL), // p_1284->g_400
        {1UL,0x14L,9L,9UL,1L,0x6E29DB6BAC62F9ABL,-1L,0x5D871527BE34FE1BL,0xF102CE77L}, // p_1284->g_408
        (VECTOR(int8_t, 8))(0x1BL, (VECTOR(int8_t, 4))(0x1BL, (VECTOR(int8_t, 2))(0x1BL, 0x50L), 0x50L), 0x50L, 0x1BL, 0x50L), // p_1284->g_418
        (VECTOR(int8_t, 8))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x06L), 0x06L), 0x06L, (-6L), 0x06L), // p_1284->g_419
        (VECTOR(int8_t, 8))(0x22L, (VECTOR(int8_t, 4))(0x22L, (VECTOR(int8_t, 2))(0x22L, 0x77L), 0x77L), 0x77L, 0x22L, 0x77L), // p_1284->g_432
        {{4294967295UL,0x28L,0x27FAE8F163207761L,0xF09A8C351392E5E0L,0x6BL,0UL,0x5077A532L,4L,4294967295UL},{4294967295UL,0x28L,0x27FAE8F163207761L,0xF09A8C351392E5E0L,0x6BL,0UL,0x5077A532L,4L,4294967295UL},{4294967295UL,0x28L,0x27FAE8F163207761L,0xF09A8C351392E5E0L,0x6BL,0UL,0x5077A532L,4L,4294967295UL}}, // p_1284->g_439
        {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}}, // p_1284->g_440
        (VECTOR(uint32_t, 16))(0xC8F00AE4L, (VECTOR(uint32_t, 4))(0xC8F00AE4L, (VECTOR(uint32_t, 2))(0xC8F00AE4L, 1UL), 1UL), 1UL, 0xC8F00AE4L, 1UL, (VECTOR(uint32_t, 2))(0xC8F00AE4L, 1UL), (VECTOR(uint32_t, 2))(0xC8F00AE4L, 1UL), 0xC8F00AE4L, 1UL, 0xC8F00AE4L, 1UL), // p_1284->g_459
        {0xCEF478C46701947DL,0L,-3L}, // p_1284->g_496
        &p_1284->g_238.f2, // p_1284->g_503
        (VECTOR(int16_t, 4))(0x722CL, (VECTOR(int16_t, 2))(0x722CL, 1L), 1L), // p_1284->g_509
        &p_1284->g_310, // p_1284->g_527
        {0xF7D95C53L,0x5AL,0x59558E84E05E2190L,0xB91D17BB413306ADL,6L,0x55582B3F6B756E56L,1L,0L,0xB820884FL}, // p_1284->g_529
        (VECTOR(int8_t, 16))(0x54L, (VECTOR(int8_t, 4))(0x54L, (VECTOR(int8_t, 2))(0x54L, (-6L)), (-6L)), (-6L), 0x54L, (-6L), (VECTOR(int8_t, 2))(0x54L, (-6L)), (VECTOR(int8_t, 2))(0x54L, (-6L)), 0x54L, (-6L), 0x54L, (-6L)), // p_1284->g_546
        (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 4L), 4L), 4L, (-9L), 4L), // p_1284->g_548
        0xA02D1579L, // p_1284->g_580
        {{{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}}},{{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}}},{{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}}},{{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}}},{{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}}},{{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}}},{{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}}},{{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}}},{{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}}},{{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}},{{18446744073709551615UL,0x3C06L,0x5395C71141001147L},{5UL,-1L,0L}}}}, // p_1284->g_584
        &p_1284->g_165, // p_1284->g_593
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x7E3965C5F9CE718AL), 0x7E3965C5F9CE718AL), 0x7E3965C5F9CE718AL, 0L, 0x7E3965C5F9CE718AL), // p_1284->g_605
        &p_1284->g_112, // p_1284->g_611
        {{0UL,0x7B39L,-3L},{0UL,0x7B39L,-3L}}, // p_1284->g_617
        {0xF1D3827B307C7960L,0x44F4L,7L}, // p_1284->g_618
        (VECTOR(int32_t, 16))(0x7FEA8492L, (VECTOR(int32_t, 4))(0x7FEA8492L, (VECTOR(int32_t, 2))(0x7FEA8492L, 0x43D3FF11L), 0x43D3FF11L), 0x43D3FF11L, 0x7FEA8492L, 0x43D3FF11L, (VECTOR(int32_t, 2))(0x7FEA8492L, 0x43D3FF11L), (VECTOR(int32_t, 2))(0x7FEA8492L, 0x43D3FF11L), 0x7FEA8492L, 0x43D3FF11L, 0x7FEA8492L, 0x43D3FF11L), // p_1284->g_633
        (VECTOR(int16_t, 8))(0x0F65L, (VECTOR(int16_t, 4))(0x0F65L, (VECTOR(int16_t, 2))(0x0F65L, 0x1493L), 0x1493L), 0x1493L, 0x0F65L, 0x1493L), // p_1284->g_691
        (VECTOR(int64_t, 8))(0x0C32CF868E74C279L, (VECTOR(int64_t, 4))(0x0C32CF868E74C279L, (VECTOR(int64_t, 2))(0x0C32CF868E74C279L, 1L), 1L), 1L, 0x0C32CF868E74C279L, 1L), // p_1284->g_705
        (VECTOR(int64_t, 2))(9L, 0x52C21248AD8F0494L), // p_1284->g_709
        {{0x7ECE2AFF562ECE87L,6L,-8L},{0xEF1457AFEB4C2463L,0x65F7L,1L},{0x7ECE2AFF562ECE87L,6L,-8L},{0x7ECE2AFF562ECE87L,6L,-8L},{0xEF1457AFEB4C2463L,0x65F7L,1L},{0x7ECE2AFF562ECE87L,6L,-8L},{0x7ECE2AFF562ECE87L,6L,-8L},{0xEF1457AFEB4C2463L,0x65F7L,1L}}, // p_1284->g_713
        (VECTOR(uint16_t, 2))(65533UL, 1UL), // p_1284->g_716
        (VECTOR(uint16_t, 16))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0x9C99L), 0x9C99L), 0x9C99L, 65526UL, 0x9C99L, (VECTOR(uint16_t, 2))(65526UL, 0x9C99L), (VECTOR(uint16_t, 2))(65526UL, 0x9C99L), 65526UL, 0x9C99L, 65526UL, 0x9C99L), // p_1284->g_717
        (VECTOR(uint16_t, 4))(0x635AL, (VECTOR(uint16_t, 2))(0x635AL, 0x388CL), 0x388CL), // p_1284->g_718
        (VECTOR(uint16_t, 8))(0xB8EEL, (VECTOR(uint16_t, 4))(0xB8EEL, (VECTOR(uint16_t, 2))(0xB8EEL, 9UL), 9UL), 9UL, 0xB8EEL, 9UL), // p_1284->g_719
        (VECTOR(int16_t, 2))((-2L), 0x6923L), // p_1284->g_747
        {0x989B27EDL,0x989B27EDL,0x989B27EDL,0x989B27EDL}, // p_1284->g_789
        0x2425L, // p_1284->g_790
        (-6L), // p_1284->g_791
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x6D9A2421L), 0x6D9A2421L), 0x6D9A2421L, 1L, 0x6D9A2421L, (VECTOR(int32_t, 2))(1L, 0x6D9A2421L), (VECTOR(int32_t, 2))(1L, 0x6D9A2421L), 1L, 0x6D9A2421L, 1L, 0x6D9A2421L), // p_1284->g_805
        {1UL,1L,0x05718820D3A9B3B3L}, // p_1284->g_845
        &p_1284->g_584[0][3][1], // p_1284->g_846
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L), // p_1284->g_873
        (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x3F58077EL), 0x3F58077EL), 0x3F58077EL, 2L, 0x3F58077EL), // p_1284->g_887
        {1UL,-1L,5L}, // p_1284->g_898
        0x7EFBL, // p_1284->g_911
        0x38DFD51631C3F925L, // p_1284->g_918
        (VECTOR(uint8_t, 8))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 255UL), 255UL), 255UL, 4UL, 255UL), // p_1284->g_928
        (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x3FL), 0x3FL), // p_1284->g_943
        (VECTOR(int8_t, 2))(1L, 0x63L), // p_1284->g_945
        0L, // p_1284->g_974
        (VECTOR(int32_t, 2))(0x33C61F57L, 0x2E2F60BAL), // p_1284->g_999
        (VECTOR(uint8_t, 2))(0UL, 0x4EL), // p_1284->g_1020
        &p_1284->g_584[0][0][1], // p_1284->g_1037
        &p_1284->g_52, // p_1284->g_1041
        (VECTOR(int32_t, 2))(0x62E28F89L, 0x0CBA13A4L), // p_1284->g_1045
        (VECTOR(int32_t, 2))(0x7F8A1DD4L, (-4L)), // p_1284->g_1046
        (VECTOR(uint16_t, 8))(0xC83FL, (VECTOR(uint16_t, 4))(0xC83FL, (VECTOR(uint16_t, 2))(0xC83FL, 1UL), 1UL), 1UL, 0xC83FL, 1UL), // p_1284->g_1054
        {0xFF2CD3F71CD7954CL,3L,0x2F110E018EDEDC61L}, // p_1284->g_1073
        {0xE282EEABL,1UL,0x7756FA8A16A502E6L,0x809E5BDBD748C23CL,0x29L,0x14D2AC07191E9CF0L,0x59DF21CDL,0x033130C1221517CAL,0UL}, // p_1284->g_1088
        {8UL,2L,0x2055D89BD2B873F3L}, // p_1284->g_1097
        (VECTOR(uint64_t, 8))(0xE9A2990AAE8015C0L, (VECTOR(uint64_t, 4))(0xE9A2990AAE8015C0L, (VECTOR(uint64_t, 2))(0xE9A2990AAE8015C0L, 6UL), 6UL), 6UL, 0xE9A2990AAE8015C0L, 6UL), // p_1284->g_1104
        {1UL,0xA8L,0x3F16307B29152175L,0x7410B63C62176542L,0x67L,1UL,-5L,0x039F34FB3535EFCBL,8UL}, // p_1284->g_1115
        &p_1284->g_3, // p_1284->g_1144
        {0x51466546L,0x50L,-10L,0UL,-1L,0x29BE0787FF36C5E0L,0x2C61287AL,3L,4294967295UL}, // p_1284->g_1145
        {0x82E0CDB1L,255UL,0x723B3521C360BFCEL,18446744073709551613UL,0L,3UL,9L,-1L,4294967295UL}, // p_1284->g_1146
        {{&p_1284->g_1144,&p_1284->g_1144,&p_1284->g_1144,&p_1284->g_1144,&p_1284->g_1144,&p_1284->g_1144,&p_1284->g_1144,&p_1284->g_1144,&p_1284->g_1144},{&p_1284->g_1144,&p_1284->g_1144,&p_1284->g_1144,&p_1284->g_1144,&p_1284->g_1144,&p_1284->g_1144,&p_1284->g_1144,&p_1284->g_1144,&p_1284->g_1144}}, // p_1284->g_1169
        (VECTOR(uint8_t, 8))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0x82L), 0x82L), 0x82L, 247UL, 0x82L), // p_1284->g_1191
        (void*)0, // p_1284->g_1215
        &p_1284->g_29, // p_1284->g_1224
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 3L), 3L), 3L, 0L, 3L), // p_1284->g_1246
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L), // p_1284->g_1248
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x667AAF23L), 0x667AAF23L), // p_1284->g_1259
        (VECTOR(uint32_t, 16))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0xA087B5A8L), 0xA087B5A8L), 0xA087B5A8L, 4294967291UL, 0xA087B5A8L, (VECTOR(uint32_t, 2))(4294967291UL, 0xA087B5A8L), (VECTOR(uint32_t, 2))(4294967291UL, 0xA087B5A8L), 4294967291UL, 0xA087B5A8L, 4294967291UL, 0xA087B5A8L), // p_1284->g_1260
        {1UL,8UL,0x5C532A8E9025F0FBL,0xFBD59A41527336EEL,0L,0xDBFC5AA4A7F13C32L,0x09D1F1CFL,6L,0UL}, // p_1284->g_1265
        (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x2C0CL), 0x2C0CL), // p_1284->g_1271
        0, // p_1284->v_collective
        sequence_input[get_global_id(0)], // p_1284->global_0_offset
        sequence_input[get_global_id(1)], // p_1284->global_1_offset
        sequence_input[get_global_id(2)], // p_1284->global_2_offset
        sequence_input[get_local_id(0)], // p_1284->local_0_offset
        sequence_input[get_local_id(1)], // p_1284->local_1_offset
        sequence_input[get_local_id(2)], // p_1284->local_2_offset
        sequence_input[get_group_id(0)], // p_1284->group_0_offset
        sequence_input[get_group_id(1)], // p_1284->group_1_offset
        sequence_input[get_group_id(2)], // p_1284->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 89)), permutations[0][get_linear_local_id()])), // p_1284->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1285 = c_1286;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1284);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1284->g_2, "p_1284->g_2", print_hash_value);
    transparent_crc(p_1284->g_3, "p_1284->g_3", print_hash_value);
    transparent_crc(p_1284->g_29, "p_1284->g_29", print_hash_value);
    transparent_crc(p_1284->g_113, "p_1284->g_113", print_hash_value);
    transparent_crc(p_1284->g_114, "p_1284->g_114", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1284->g_116[i][j], "p_1284->g_116[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1284->g_149, "p_1284->g_149", print_hash_value);
    transparent_crc(p_1284->g_166.f0, "p_1284->g_166.f0", print_hash_value);
    transparent_crc(p_1284->g_166.f1, "p_1284->g_166.f1", print_hash_value);
    transparent_crc(p_1284->g_166.f2, "p_1284->g_166.f2", print_hash_value);
    transparent_crc(p_1284->g_166.f3, "p_1284->g_166.f3", print_hash_value);
    transparent_crc(p_1284->g_166.f4, "p_1284->g_166.f4", print_hash_value);
    transparent_crc(p_1284->g_166.f5, "p_1284->g_166.f5", print_hash_value);
    transparent_crc(p_1284->g_166.f6, "p_1284->g_166.f6", print_hash_value);
    transparent_crc(p_1284->g_166.f7, "p_1284->g_166.f7", print_hash_value);
    transparent_crc(p_1284->g_166.f8, "p_1284->g_166.f8", print_hash_value);
    transparent_crc(p_1284->g_182.f0, "p_1284->g_182.f0", print_hash_value);
    transparent_crc(p_1284->g_182.f1, "p_1284->g_182.f1", print_hash_value);
    transparent_crc(p_1284->g_182.f2, "p_1284->g_182.f2", print_hash_value);
    transparent_crc(p_1284->g_182.f3, "p_1284->g_182.f3", print_hash_value);
    transparent_crc(p_1284->g_182.f4, "p_1284->g_182.f4", print_hash_value);
    transparent_crc(p_1284->g_182.f5, "p_1284->g_182.f5", print_hash_value);
    transparent_crc(p_1284->g_182.f6, "p_1284->g_182.f6", print_hash_value);
    transparent_crc(p_1284->g_182.f7, "p_1284->g_182.f7", print_hash_value);
    transparent_crc(p_1284->g_182.f8, "p_1284->g_182.f8", print_hash_value);
    transparent_crc(p_1284->g_211.f0, "p_1284->g_211.f0", print_hash_value);
    transparent_crc(p_1284->g_211.f1, "p_1284->g_211.f1", print_hash_value);
    transparent_crc(p_1284->g_211.f2, "p_1284->g_211.f2", print_hash_value);
    transparent_crc(p_1284->g_237.x, "p_1284->g_237.x", print_hash_value);
    transparent_crc(p_1284->g_237.y, "p_1284->g_237.y", print_hash_value);
    transparent_crc(p_1284->g_237.z, "p_1284->g_237.z", print_hash_value);
    transparent_crc(p_1284->g_237.w, "p_1284->g_237.w", print_hash_value);
    transparent_crc(p_1284->g_238.f0, "p_1284->g_238.f0", print_hash_value);
    transparent_crc(p_1284->g_238.f1, "p_1284->g_238.f1", print_hash_value);
    transparent_crc(p_1284->g_238.f2, "p_1284->g_238.f2", print_hash_value);
    transparent_crc(p_1284->g_238.f3, "p_1284->g_238.f3", print_hash_value);
    transparent_crc(p_1284->g_238.f4, "p_1284->g_238.f4", print_hash_value);
    transparent_crc(p_1284->g_238.f5, "p_1284->g_238.f5", print_hash_value);
    transparent_crc(p_1284->g_238.f6, "p_1284->g_238.f6", print_hash_value);
    transparent_crc(p_1284->g_238.f7, "p_1284->g_238.f7", print_hash_value);
    transparent_crc(p_1284->g_238.f8, "p_1284->g_238.f8", print_hash_value);
    transparent_crc(p_1284->g_248, "p_1284->g_248", print_hash_value);
    transparent_crc(p_1284->g_274.x, "p_1284->g_274.x", print_hash_value);
    transparent_crc(p_1284->g_274.y, "p_1284->g_274.y", print_hash_value);
    transparent_crc(p_1284->g_276.x, "p_1284->g_276.x", print_hash_value);
    transparent_crc(p_1284->g_276.y, "p_1284->g_276.y", print_hash_value);
    transparent_crc(p_1284->g_276.z, "p_1284->g_276.z", print_hash_value);
    transparent_crc(p_1284->g_276.w, "p_1284->g_276.w", print_hash_value);
    transparent_crc(p_1284->g_277.s0, "p_1284->g_277.s0", print_hash_value);
    transparent_crc(p_1284->g_277.s1, "p_1284->g_277.s1", print_hash_value);
    transparent_crc(p_1284->g_277.s2, "p_1284->g_277.s2", print_hash_value);
    transparent_crc(p_1284->g_277.s3, "p_1284->g_277.s3", print_hash_value);
    transparent_crc(p_1284->g_277.s4, "p_1284->g_277.s4", print_hash_value);
    transparent_crc(p_1284->g_277.s5, "p_1284->g_277.s5", print_hash_value);
    transparent_crc(p_1284->g_277.s6, "p_1284->g_277.s6", print_hash_value);
    transparent_crc(p_1284->g_277.s7, "p_1284->g_277.s7", print_hash_value);
    transparent_crc(p_1284->g_277.s8, "p_1284->g_277.s8", print_hash_value);
    transparent_crc(p_1284->g_277.s9, "p_1284->g_277.s9", print_hash_value);
    transparent_crc(p_1284->g_277.sa, "p_1284->g_277.sa", print_hash_value);
    transparent_crc(p_1284->g_277.sb, "p_1284->g_277.sb", print_hash_value);
    transparent_crc(p_1284->g_277.sc, "p_1284->g_277.sc", print_hash_value);
    transparent_crc(p_1284->g_277.sd, "p_1284->g_277.sd", print_hash_value);
    transparent_crc(p_1284->g_277.se, "p_1284->g_277.se", print_hash_value);
    transparent_crc(p_1284->g_277.sf, "p_1284->g_277.sf", print_hash_value);
    transparent_crc(p_1284->g_284, "p_1284->g_284", print_hash_value);
    transparent_crc(p_1284->g_340.x, "p_1284->g_340.x", print_hash_value);
    transparent_crc(p_1284->g_340.y, "p_1284->g_340.y", print_hash_value);
    transparent_crc(p_1284->g_340.z, "p_1284->g_340.z", print_hash_value);
    transparent_crc(p_1284->g_340.w, "p_1284->g_340.w", print_hash_value);
    transparent_crc(p_1284->g_341.s0, "p_1284->g_341.s0", print_hash_value);
    transparent_crc(p_1284->g_341.s1, "p_1284->g_341.s1", print_hash_value);
    transparent_crc(p_1284->g_341.s2, "p_1284->g_341.s2", print_hash_value);
    transparent_crc(p_1284->g_341.s3, "p_1284->g_341.s3", print_hash_value);
    transparent_crc(p_1284->g_341.s4, "p_1284->g_341.s4", print_hash_value);
    transparent_crc(p_1284->g_341.s5, "p_1284->g_341.s5", print_hash_value);
    transparent_crc(p_1284->g_341.s6, "p_1284->g_341.s6", print_hash_value);
    transparent_crc(p_1284->g_341.s7, "p_1284->g_341.s7", print_hash_value);
    transparent_crc(p_1284->g_347.s0, "p_1284->g_347.s0", print_hash_value);
    transparent_crc(p_1284->g_347.s1, "p_1284->g_347.s1", print_hash_value);
    transparent_crc(p_1284->g_347.s2, "p_1284->g_347.s2", print_hash_value);
    transparent_crc(p_1284->g_347.s3, "p_1284->g_347.s3", print_hash_value);
    transparent_crc(p_1284->g_347.s4, "p_1284->g_347.s4", print_hash_value);
    transparent_crc(p_1284->g_347.s5, "p_1284->g_347.s5", print_hash_value);
    transparent_crc(p_1284->g_347.s6, "p_1284->g_347.s6", print_hash_value);
    transparent_crc(p_1284->g_347.s7, "p_1284->g_347.s7", print_hash_value);
    transparent_crc(p_1284->g_347.s8, "p_1284->g_347.s8", print_hash_value);
    transparent_crc(p_1284->g_347.s9, "p_1284->g_347.s9", print_hash_value);
    transparent_crc(p_1284->g_347.sa, "p_1284->g_347.sa", print_hash_value);
    transparent_crc(p_1284->g_347.sb, "p_1284->g_347.sb", print_hash_value);
    transparent_crc(p_1284->g_347.sc, "p_1284->g_347.sc", print_hash_value);
    transparent_crc(p_1284->g_347.sd, "p_1284->g_347.sd", print_hash_value);
    transparent_crc(p_1284->g_347.se, "p_1284->g_347.se", print_hash_value);
    transparent_crc(p_1284->g_347.sf, "p_1284->g_347.sf", print_hash_value);
    transparent_crc(p_1284->g_349.x, "p_1284->g_349.x", print_hash_value);
    transparent_crc(p_1284->g_349.y, "p_1284->g_349.y", print_hash_value);
    transparent_crc(p_1284->g_350.x, "p_1284->g_350.x", print_hash_value);
    transparent_crc(p_1284->g_350.y, "p_1284->g_350.y", print_hash_value);
    transparent_crc(p_1284->g_354.x, "p_1284->g_354.x", print_hash_value);
    transparent_crc(p_1284->g_354.y, "p_1284->g_354.y", print_hash_value);
    transparent_crc(p_1284->g_354.z, "p_1284->g_354.z", print_hash_value);
    transparent_crc(p_1284->g_354.w, "p_1284->g_354.w", print_hash_value);
    transparent_crc(p_1284->g_400.s0, "p_1284->g_400.s0", print_hash_value);
    transparent_crc(p_1284->g_400.s1, "p_1284->g_400.s1", print_hash_value);
    transparent_crc(p_1284->g_400.s2, "p_1284->g_400.s2", print_hash_value);
    transparent_crc(p_1284->g_400.s3, "p_1284->g_400.s3", print_hash_value);
    transparent_crc(p_1284->g_400.s4, "p_1284->g_400.s4", print_hash_value);
    transparent_crc(p_1284->g_400.s5, "p_1284->g_400.s5", print_hash_value);
    transparent_crc(p_1284->g_400.s6, "p_1284->g_400.s6", print_hash_value);
    transparent_crc(p_1284->g_400.s7, "p_1284->g_400.s7", print_hash_value);
    transparent_crc(p_1284->g_400.s8, "p_1284->g_400.s8", print_hash_value);
    transparent_crc(p_1284->g_400.s9, "p_1284->g_400.s9", print_hash_value);
    transparent_crc(p_1284->g_400.sa, "p_1284->g_400.sa", print_hash_value);
    transparent_crc(p_1284->g_400.sb, "p_1284->g_400.sb", print_hash_value);
    transparent_crc(p_1284->g_400.sc, "p_1284->g_400.sc", print_hash_value);
    transparent_crc(p_1284->g_400.sd, "p_1284->g_400.sd", print_hash_value);
    transparent_crc(p_1284->g_400.se, "p_1284->g_400.se", print_hash_value);
    transparent_crc(p_1284->g_400.sf, "p_1284->g_400.sf", print_hash_value);
    transparent_crc(p_1284->g_408.f0, "p_1284->g_408.f0", print_hash_value);
    transparent_crc(p_1284->g_408.f1, "p_1284->g_408.f1", print_hash_value);
    transparent_crc(p_1284->g_408.f2, "p_1284->g_408.f2", print_hash_value);
    transparent_crc(p_1284->g_408.f3, "p_1284->g_408.f3", print_hash_value);
    transparent_crc(p_1284->g_408.f4, "p_1284->g_408.f4", print_hash_value);
    transparent_crc(p_1284->g_408.f5, "p_1284->g_408.f5", print_hash_value);
    transparent_crc(p_1284->g_408.f6, "p_1284->g_408.f6", print_hash_value);
    transparent_crc(p_1284->g_408.f7, "p_1284->g_408.f7", print_hash_value);
    transparent_crc(p_1284->g_408.f8, "p_1284->g_408.f8", print_hash_value);
    transparent_crc(p_1284->g_418.s0, "p_1284->g_418.s0", print_hash_value);
    transparent_crc(p_1284->g_418.s1, "p_1284->g_418.s1", print_hash_value);
    transparent_crc(p_1284->g_418.s2, "p_1284->g_418.s2", print_hash_value);
    transparent_crc(p_1284->g_418.s3, "p_1284->g_418.s3", print_hash_value);
    transparent_crc(p_1284->g_418.s4, "p_1284->g_418.s4", print_hash_value);
    transparent_crc(p_1284->g_418.s5, "p_1284->g_418.s5", print_hash_value);
    transparent_crc(p_1284->g_418.s6, "p_1284->g_418.s6", print_hash_value);
    transparent_crc(p_1284->g_418.s7, "p_1284->g_418.s7", print_hash_value);
    transparent_crc(p_1284->g_419.s0, "p_1284->g_419.s0", print_hash_value);
    transparent_crc(p_1284->g_419.s1, "p_1284->g_419.s1", print_hash_value);
    transparent_crc(p_1284->g_419.s2, "p_1284->g_419.s2", print_hash_value);
    transparent_crc(p_1284->g_419.s3, "p_1284->g_419.s3", print_hash_value);
    transparent_crc(p_1284->g_419.s4, "p_1284->g_419.s4", print_hash_value);
    transparent_crc(p_1284->g_419.s5, "p_1284->g_419.s5", print_hash_value);
    transparent_crc(p_1284->g_419.s6, "p_1284->g_419.s6", print_hash_value);
    transparent_crc(p_1284->g_419.s7, "p_1284->g_419.s7", print_hash_value);
    transparent_crc(p_1284->g_432.s0, "p_1284->g_432.s0", print_hash_value);
    transparent_crc(p_1284->g_432.s1, "p_1284->g_432.s1", print_hash_value);
    transparent_crc(p_1284->g_432.s2, "p_1284->g_432.s2", print_hash_value);
    transparent_crc(p_1284->g_432.s3, "p_1284->g_432.s3", print_hash_value);
    transparent_crc(p_1284->g_432.s4, "p_1284->g_432.s4", print_hash_value);
    transparent_crc(p_1284->g_432.s5, "p_1284->g_432.s5", print_hash_value);
    transparent_crc(p_1284->g_432.s6, "p_1284->g_432.s6", print_hash_value);
    transparent_crc(p_1284->g_432.s7, "p_1284->g_432.s7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1284->g_439[i].f0, "p_1284->g_439[i].f0", print_hash_value);
        transparent_crc(p_1284->g_439[i].f1, "p_1284->g_439[i].f1", print_hash_value);
        transparent_crc(p_1284->g_439[i].f2, "p_1284->g_439[i].f2", print_hash_value);
        transparent_crc(p_1284->g_439[i].f3, "p_1284->g_439[i].f3", print_hash_value);
        transparent_crc(p_1284->g_439[i].f4, "p_1284->g_439[i].f4", print_hash_value);
        transparent_crc(p_1284->g_439[i].f5, "p_1284->g_439[i].f5", print_hash_value);
        transparent_crc(p_1284->g_439[i].f6, "p_1284->g_439[i].f6", print_hash_value);
        transparent_crc(p_1284->g_439[i].f7, "p_1284->g_439[i].f7", print_hash_value);
        transparent_crc(p_1284->g_439[i].f8, "p_1284->g_439[i].f8", print_hash_value);

    }
    transparent_crc(p_1284->g_459.s0, "p_1284->g_459.s0", print_hash_value);
    transparent_crc(p_1284->g_459.s1, "p_1284->g_459.s1", print_hash_value);
    transparent_crc(p_1284->g_459.s2, "p_1284->g_459.s2", print_hash_value);
    transparent_crc(p_1284->g_459.s3, "p_1284->g_459.s3", print_hash_value);
    transparent_crc(p_1284->g_459.s4, "p_1284->g_459.s4", print_hash_value);
    transparent_crc(p_1284->g_459.s5, "p_1284->g_459.s5", print_hash_value);
    transparent_crc(p_1284->g_459.s6, "p_1284->g_459.s6", print_hash_value);
    transparent_crc(p_1284->g_459.s7, "p_1284->g_459.s7", print_hash_value);
    transparent_crc(p_1284->g_459.s8, "p_1284->g_459.s8", print_hash_value);
    transparent_crc(p_1284->g_459.s9, "p_1284->g_459.s9", print_hash_value);
    transparent_crc(p_1284->g_459.sa, "p_1284->g_459.sa", print_hash_value);
    transparent_crc(p_1284->g_459.sb, "p_1284->g_459.sb", print_hash_value);
    transparent_crc(p_1284->g_459.sc, "p_1284->g_459.sc", print_hash_value);
    transparent_crc(p_1284->g_459.sd, "p_1284->g_459.sd", print_hash_value);
    transparent_crc(p_1284->g_459.se, "p_1284->g_459.se", print_hash_value);
    transparent_crc(p_1284->g_459.sf, "p_1284->g_459.sf", print_hash_value);
    transparent_crc(p_1284->g_496.f0, "p_1284->g_496.f0", print_hash_value);
    transparent_crc(p_1284->g_496.f1, "p_1284->g_496.f1", print_hash_value);
    transparent_crc(p_1284->g_496.f2, "p_1284->g_496.f2", print_hash_value);
    transparent_crc(p_1284->g_509.x, "p_1284->g_509.x", print_hash_value);
    transparent_crc(p_1284->g_509.y, "p_1284->g_509.y", print_hash_value);
    transparent_crc(p_1284->g_509.z, "p_1284->g_509.z", print_hash_value);
    transparent_crc(p_1284->g_509.w, "p_1284->g_509.w", print_hash_value);
    transparent_crc(p_1284->g_529.f0, "p_1284->g_529.f0", print_hash_value);
    transparent_crc(p_1284->g_529.f1, "p_1284->g_529.f1", print_hash_value);
    transparent_crc(p_1284->g_529.f2, "p_1284->g_529.f2", print_hash_value);
    transparent_crc(p_1284->g_529.f3, "p_1284->g_529.f3", print_hash_value);
    transparent_crc(p_1284->g_529.f4, "p_1284->g_529.f4", print_hash_value);
    transparent_crc(p_1284->g_529.f5, "p_1284->g_529.f5", print_hash_value);
    transparent_crc(p_1284->g_529.f6, "p_1284->g_529.f6", print_hash_value);
    transparent_crc(p_1284->g_529.f7, "p_1284->g_529.f7", print_hash_value);
    transparent_crc(p_1284->g_529.f8, "p_1284->g_529.f8", print_hash_value);
    transparent_crc(p_1284->g_546.s0, "p_1284->g_546.s0", print_hash_value);
    transparent_crc(p_1284->g_546.s1, "p_1284->g_546.s1", print_hash_value);
    transparent_crc(p_1284->g_546.s2, "p_1284->g_546.s2", print_hash_value);
    transparent_crc(p_1284->g_546.s3, "p_1284->g_546.s3", print_hash_value);
    transparent_crc(p_1284->g_546.s4, "p_1284->g_546.s4", print_hash_value);
    transparent_crc(p_1284->g_546.s5, "p_1284->g_546.s5", print_hash_value);
    transparent_crc(p_1284->g_546.s6, "p_1284->g_546.s6", print_hash_value);
    transparent_crc(p_1284->g_546.s7, "p_1284->g_546.s7", print_hash_value);
    transparent_crc(p_1284->g_546.s8, "p_1284->g_546.s8", print_hash_value);
    transparent_crc(p_1284->g_546.s9, "p_1284->g_546.s9", print_hash_value);
    transparent_crc(p_1284->g_546.sa, "p_1284->g_546.sa", print_hash_value);
    transparent_crc(p_1284->g_546.sb, "p_1284->g_546.sb", print_hash_value);
    transparent_crc(p_1284->g_546.sc, "p_1284->g_546.sc", print_hash_value);
    transparent_crc(p_1284->g_546.sd, "p_1284->g_546.sd", print_hash_value);
    transparent_crc(p_1284->g_546.se, "p_1284->g_546.se", print_hash_value);
    transparent_crc(p_1284->g_546.sf, "p_1284->g_546.sf", print_hash_value);
    transparent_crc(p_1284->g_548.s0, "p_1284->g_548.s0", print_hash_value);
    transparent_crc(p_1284->g_548.s1, "p_1284->g_548.s1", print_hash_value);
    transparent_crc(p_1284->g_548.s2, "p_1284->g_548.s2", print_hash_value);
    transparent_crc(p_1284->g_548.s3, "p_1284->g_548.s3", print_hash_value);
    transparent_crc(p_1284->g_548.s4, "p_1284->g_548.s4", print_hash_value);
    transparent_crc(p_1284->g_548.s5, "p_1284->g_548.s5", print_hash_value);
    transparent_crc(p_1284->g_548.s6, "p_1284->g_548.s6", print_hash_value);
    transparent_crc(p_1284->g_548.s7, "p_1284->g_548.s7", print_hash_value);
    transparent_crc(p_1284->g_580, "p_1284->g_580", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1284->g_584[i][j][k].f0, "p_1284->g_584[i][j][k].f0", print_hash_value);
                transparent_crc(p_1284->g_584[i][j][k].f1, "p_1284->g_584[i][j][k].f1", print_hash_value);
                transparent_crc(p_1284->g_584[i][j][k].f2, "p_1284->g_584[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(p_1284->g_605.s0, "p_1284->g_605.s0", print_hash_value);
    transparent_crc(p_1284->g_605.s1, "p_1284->g_605.s1", print_hash_value);
    transparent_crc(p_1284->g_605.s2, "p_1284->g_605.s2", print_hash_value);
    transparent_crc(p_1284->g_605.s3, "p_1284->g_605.s3", print_hash_value);
    transparent_crc(p_1284->g_605.s4, "p_1284->g_605.s4", print_hash_value);
    transparent_crc(p_1284->g_605.s5, "p_1284->g_605.s5", print_hash_value);
    transparent_crc(p_1284->g_605.s6, "p_1284->g_605.s6", print_hash_value);
    transparent_crc(p_1284->g_605.s7, "p_1284->g_605.s7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1284->g_617[i].f0, "p_1284->g_617[i].f0", print_hash_value);
        transparent_crc(p_1284->g_617[i].f1, "p_1284->g_617[i].f1", print_hash_value);
        transparent_crc(p_1284->g_617[i].f2, "p_1284->g_617[i].f2", print_hash_value);

    }
    transparent_crc(p_1284->g_618.f0, "p_1284->g_618.f0", print_hash_value);
    transparent_crc(p_1284->g_618.f1, "p_1284->g_618.f1", print_hash_value);
    transparent_crc(p_1284->g_618.f2, "p_1284->g_618.f2", print_hash_value);
    transparent_crc(p_1284->g_633.s0, "p_1284->g_633.s0", print_hash_value);
    transparent_crc(p_1284->g_633.s1, "p_1284->g_633.s1", print_hash_value);
    transparent_crc(p_1284->g_633.s2, "p_1284->g_633.s2", print_hash_value);
    transparent_crc(p_1284->g_633.s3, "p_1284->g_633.s3", print_hash_value);
    transparent_crc(p_1284->g_633.s4, "p_1284->g_633.s4", print_hash_value);
    transparent_crc(p_1284->g_633.s5, "p_1284->g_633.s5", print_hash_value);
    transparent_crc(p_1284->g_633.s6, "p_1284->g_633.s6", print_hash_value);
    transparent_crc(p_1284->g_633.s7, "p_1284->g_633.s7", print_hash_value);
    transparent_crc(p_1284->g_633.s8, "p_1284->g_633.s8", print_hash_value);
    transparent_crc(p_1284->g_633.s9, "p_1284->g_633.s9", print_hash_value);
    transparent_crc(p_1284->g_633.sa, "p_1284->g_633.sa", print_hash_value);
    transparent_crc(p_1284->g_633.sb, "p_1284->g_633.sb", print_hash_value);
    transparent_crc(p_1284->g_633.sc, "p_1284->g_633.sc", print_hash_value);
    transparent_crc(p_1284->g_633.sd, "p_1284->g_633.sd", print_hash_value);
    transparent_crc(p_1284->g_633.se, "p_1284->g_633.se", print_hash_value);
    transparent_crc(p_1284->g_633.sf, "p_1284->g_633.sf", print_hash_value);
    transparent_crc(p_1284->g_691.s0, "p_1284->g_691.s0", print_hash_value);
    transparent_crc(p_1284->g_691.s1, "p_1284->g_691.s1", print_hash_value);
    transparent_crc(p_1284->g_691.s2, "p_1284->g_691.s2", print_hash_value);
    transparent_crc(p_1284->g_691.s3, "p_1284->g_691.s3", print_hash_value);
    transparent_crc(p_1284->g_691.s4, "p_1284->g_691.s4", print_hash_value);
    transparent_crc(p_1284->g_691.s5, "p_1284->g_691.s5", print_hash_value);
    transparent_crc(p_1284->g_691.s6, "p_1284->g_691.s6", print_hash_value);
    transparent_crc(p_1284->g_691.s7, "p_1284->g_691.s7", print_hash_value);
    transparent_crc(p_1284->g_705.s0, "p_1284->g_705.s0", print_hash_value);
    transparent_crc(p_1284->g_705.s1, "p_1284->g_705.s1", print_hash_value);
    transparent_crc(p_1284->g_705.s2, "p_1284->g_705.s2", print_hash_value);
    transparent_crc(p_1284->g_705.s3, "p_1284->g_705.s3", print_hash_value);
    transparent_crc(p_1284->g_705.s4, "p_1284->g_705.s4", print_hash_value);
    transparent_crc(p_1284->g_705.s5, "p_1284->g_705.s5", print_hash_value);
    transparent_crc(p_1284->g_705.s6, "p_1284->g_705.s6", print_hash_value);
    transparent_crc(p_1284->g_705.s7, "p_1284->g_705.s7", print_hash_value);
    transparent_crc(p_1284->g_709.x, "p_1284->g_709.x", print_hash_value);
    transparent_crc(p_1284->g_709.y, "p_1284->g_709.y", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1284->g_713[i].f0, "p_1284->g_713[i].f0", print_hash_value);
        transparent_crc(p_1284->g_713[i].f1, "p_1284->g_713[i].f1", print_hash_value);
        transparent_crc(p_1284->g_713[i].f2, "p_1284->g_713[i].f2", print_hash_value);

    }
    transparent_crc(p_1284->g_716.x, "p_1284->g_716.x", print_hash_value);
    transparent_crc(p_1284->g_716.y, "p_1284->g_716.y", print_hash_value);
    transparent_crc(p_1284->g_717.s0, "p_1284->g_717.s0", print_hash_value);
    transparent_crc(p_1284->g_717.s1, "p_1284->g_717.s1", print_hash_value);
    transparent_crc(p_1284->g_717.s2, "p_1284->g_717.s2", print_hash_value);
    transparent_crc(p_1284->g_717.s3, "p_1284->g_717.s3", print_hash_value);
    transparent_crc(p_1284->g_717.s4, "p_1284->g_717.s4", print_hash_value);
    transparent_crc(p_1284->g_717.s5, "p_1284->g_717.s5", print_hash_value);
    transparent_crc(p_1284->g_717.s6, "p_1284->g_717.s6", print_hash_value);
    transparent_crc(p_1284->g_717.s7, "p_1284->g_717.s7", print_hash_value);
    transparent_crc(p_1284->g_717.s8, "p_1284->g_717.s8", print_hash_value);
    transparent_crc(p_1284->g_717.s9, "p_1284->g_717.s9", print_hash_value);
    transparent_crc(p_1284->g_717.sa, "p_1284->g_717.sa", print_hash_value);
    transparent_crc(p_1284->g_717.sb, "p_1284->g_717.sb", print_hash_value);
    transparent_crc(p_1284->g_717.sc, "p_1284->g_717.sc", print_hash_value);
    transparent_crc(p_1284->g_717.sd, "p_1284->g_717.sd", print_hash_value);
    transparent_crc(p_1284->g_717.se, "p_1284->g_717.se", print_hash_value);
    transparent_crc(p_1284->g_717.sf, "p_1284->g_717.sf", print_hash_value);
    transparent_crc(p_1284->g_718.x, "p_1284->g_718.x", print_hash_value);
    transparent_crc(p_1284->g_718.y, "p_1284->g_718.y", print_hash_value);
    transparent_crc(p_1284->g_718.z, "p_1284->g_718.z", print_hash_value);
    transparent_crc(p_1284->g_718.w, "p_1284->g_718.w", print_hash_value);
    transparent_crc(p_1284->g_719.s0, "p_1284->g_719.s0", print_hash_value);
    transparent_crc(p_1284->g_719.s1, "p_1284->g_719.s1", print_hash_value);
    transparent_crc(p_1284->g_719.s2, "p_1284->g_719.s2", print_hash_value);
    transparent_crc(p_1284->g_719.s3, "p_1284->g_719.s3", print_hash_value);
    transparent_crc(p_1284->g_719.s4, "p_1284->g_719.s4", print_hash_value);
    transparent_crc(p_1284->g_719.s5, "p_1284->g_719.s5", print_hash_value);
    transparent_crc(p_1284->g_719.s6, "p_1284->g_719.s6", print_hash_value);
    transparent_crc(p_1284->g_719.s7, "p_1284->g_719.s7", print_hash_value);
    transparent_crc(p_1284->g_747.x, "p_1284->g_747.x", print_hash_value);
    transparent_crc(p_1284->g_747.y, "p_1284->g_747.y", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1284->g_789[i], "p_1284->g_789[i]", print_hash_value);

    }
    transparent_crc(p_1284->g_790, "p_1284->g_790", print_hash_value);
    transparent_crc(p_1284->g_791, "p_1284->g_791", print_hash_value);
    transparent_crc(p_1284->g_805.s0, "p_1284->g_805.s0", print_hash_value);
    transparent_crc(p_1284->g_805.s1, "p_1284->g_805.s1", print_hash_value);
    transparent_crc(p_1284->g_805.s2, "p_1284->g_805.s2", print_hash_value);
    transparent_crc(p_1284->g_805.s3, "p_1284->g_805.s3", print_hash_value);
    transparent_crc(p_1284->g_805.s4, "p_1284->g_805.s4", print_hash_value);
    transparent_crc(p_1284->g_805.s5, "p_1284->g_805.s5", print_hash_value);
    transparent_crc(p_1284->g_805.s6, "p_1284->g_805.s6", print_hash_value);
    transparent_crc(p_1284->g_805.s7, "p_1284->g_805.s7", print_hash_value);
    transparent_crc(p_1284->g_805.s8, "p_1284->g_805.s8", print_hash_value);
    transparent_crc(p_1284->g_805.s9, "p_1284->g_805.s9", print_hash_value);
    transparent_crc(p_1284->g_805.sa, "p_1284->g_805.sa", print_hash_value);
    transparent_crc(p_1284->g_805.sb, "p_1284->g_805.sb", print_hash_value);
    transparent_crc(p_1284->g_805.sc, "p_1284->g_805.sc", print_hash_value);
    transparent_crc(p_1284->g_805.sd, "p_1284->g_805.sd", print_hash_value);
    transparent_crc(p_1284->g_805.se, "p_1284->g_805.se", print_hash_value);
    transparent_crc(p_1284->g_805.sf, "p_1284->g_805.sf", print_hash_value);
    transparent_crc(p_1284->g_845.f0, "p_1284->g_845.f0", print_hash_value);
    transparent_crc(p_1284->g_845.f1, "p_1284->g_845.f1", print_hash_value);
    transparent_crc(p_1284->g_845.f2, "p_1284->g_845.f2", print_hash_value);
    transparent_crc(p_1284->g_873.s0, "p_1284->g_873.s0", print_hash_value);
    transparent_crc(p_1284->g_873.s1, "p_1284->g_873.s1", print_hash_value);
    transparent_crc(p_1284->g_873.s2, "p_1284->g_873.s2", print_hash_value);
    transparent_crc(p_1284->g_873.s3, "p_1284->g_873.s3", print_hash_value);
    transparent_crc(p_1284->g_873.s4, "p_1284->g_873.s4", print_hash_value);
    transparent_crc(p_1284->g_873.s5, "p_1284->g_873.s5", print_hash_value);
    transparent_crc(p_1284->g_873.s6, "p_1284->g_873.s6", print_hash_value);
    transparent_crc(p_1284->g_873.s7, "p_1284->g_873.s7", print_hash_value);
    transparent_crc(p_1284->g_887.s0, "p_1284->g_887.s0", print_hash_value);
    transparent_crc(p_1284->g_887.s1, "p_1284->g_887.s1", print_hash_value);
    transparent_crc(p_1284->g_887.s2, "p_1284->g_887.s2", print_hash_value);
    transparent_crc(p_1284->g_887.s3, "p_1284->g_887.s3", print_hash_value);
    transparent_crc(p_1284->g_887.s4, "p_1284->g_887.s4", print_hash_value);
    transparent_crc(p_1284->g_887.s5, "p_1284->g_887.s5", print_hash_value);
    transparent_crc(p_1284->g_887.s6, "p_1284->g_887.s6", print_hash_value);
    transparent_crc(p_1284->g_887.s7, "p_1284->g_887.s7", print_hash_value);
    transparent_crc(p_1284->g_898.f0, "p_1284->g_898.f0", print_hash_value);
    transparent_crc(p_1284->g_898.f1, "p_1284->g_898.f1", print_hash_value);
    transparent_crc(p_1284->g_898.f2, "p_1284->g_898.f2", print_hash_value);
    transparent_crc(p_1284->g_911, "p_1284->g_911", print_hash_value);
    transparent_crc(p_1284->g_918, "p_1284->g_918", print_hash_value);
    transparent_crc(p_1284->g_928.s0, "p_1284->g_928.s0", print_hash_value);
    transparent_crc(p_1284->g_928.s1, "p_1284->g_928.s1", print_hash_value);
    transparent_crc(p_1284->g_928.s2, "p_1284->g_928.s2", print_hash_value);
    transparent_crc(p_1284->g_928.s3, "p_1284->g_928.s3", print_hash_value);
    transparent_crc(p_1284->g_928.s4, "p_1284->g_928.s4", print_hash_value);
    transparent_crc(p_1284->g_928.s5, "p_1284->g_928.s5", print_hash_value);
    transparent_crc(p_1284->g_928.s6, "p_1284->g_928.s6", print_hash_value);
    transparent_crc(p_1284->g_928.s7, "p_1284->g_928.s7", print_hash_value);
    transparent_crc(p_1284->g_943.x, "p_1284->g_943.x", print_hash_value);
    transparent_crc(p_1284->g_943.y, "p_1284->g_943.y", print_hash_value);
    transparent_crc(p_1284->g_943.z, "p_1284->g_943.z", print_hash_value);
    transparent_crc(p_1284->g_943.w, "p_1284->g_943.w", print_hash_value);
    transparent_crc(p_1284->g_945.x, "p_1284->g_945.x", print_hash_value);
    transparent_crc(p_1284->g_945.y, "p_1284->g_945.y", print_hash_value);
    transparent_crc(p_1284->g_974, "p_1284->g_974", print_hash_value);
    transparent_crc(p_1284->g_999.x, "p_1284->g_999.x", print_hash_value);
    transparent_crc(p_1284->g_999.y, "p_1284->g_999.y", print_hash_value);
    transparent_crc(p_1284->g_1020.x, "p_1284->g_1020.x", print_hash_value);
    transparent_crc(p_1284->g_1020.y, "p_1284->g_1020.y", print_hash_value);
    transparent_crc(p_1284->g_1045.x, "p_1284->g_1045.x", print_hash_value);
    transparent_crc(p_1284->g_1045.y, "p_1284->g_1045.y", print_hash_value);
    transparent_crc(p_1284->g_1046.x, "p_1284->g_1046.x", print_hash_value);
    transparent_crc(p_1284->g_1046.y, "p_1284->g_1046.y", print_hash_value);
    transparent_crc(p_1284->g_1054.s0, "p_1284->g_1054.s0", print_hash_value);
    transparent_crc(p_1284->g_1054.s1, "p_1284->g_1054.s1", print_hash_value);
    transparent_crc(p_1284->g_1054.s2, "p_1284->g_1054.s2", print_hash_value);
    transparent_crc(p_1284->g_1054.s3, "p_1284->g_1054.s3", print_hash_value);
    transparent_crc(p_1284->g_1054.s4, "p_1284->g_1054.s4", print_hash_value);
    transparent_crc(p_1284->g_1054.s5, "p_1284->g_1054.s5", print_hash_value);
    transparent_crc(p_1284->g_1054.s6, "p_1284->g_1054.s6", print_hash_value);
    transparent_crc(p_1284->g_1054.s7, "p_1284->g_1054.s7", print_hash_value);
    transparent_crc(p_1284->g_1073.f0, "p_1284->g_1073.f0", print_hash_value);
    transparent_crc(p_1284->g_1073.f1, "p_1284->g_1073.f1", print_hash_value);
    transparent_crc(p_1284->g_1073.f2, "p_1284->g_1073.f2", print_hash_value);
    transparent_crc(p_1284->g_1088.f0, "p_1284->g_1088.f0", print_hash_value);
    transparent_crc(p_1284->g_1088.f1, "p_1284->g_1088.f1", print_hash_value);
    transparent_crc(p_1284->g_1088.f2, "p_1284->g_1088.f2", print_hash_value);
    transparent_crc(p_1284->g_1088.f3, "p_1284->g_1088.f3", print_hash_value);
    transparent_crc(p_1284->g_1088.f4, "p_1284->g_1088.f4", print_hash_value);
    transparent_crc(p_1284->g_1088.f5, "p_1284->g_1088.f5", print_hash_value);
    transparent_crc(p_1284->g_1088.f6, "p_1284->g_1088.f6", print_hash_value);
    transparent_crc(p_1284->g_1088.f7, "p_1284->g_1088.f7", print_hash_value);
    transparent_crc(p_1284->g_1088.f8, "p_1284->g_1088.f8", print_hash_value);
    transparent_crc(p_1284->g_1097.f0, "p_1284->g_1097.f0", print_hash_value);
    transparent_crc(p_1284->g_1097.f1, "p_1284->g_1097.f1", print_hash_value);
    transparent_crc(p_1284->g_1097.f2, "p_1284->g_1097.f2", print_hash_value);
    transparent_crc(p_1284->g_1104.s0, "p_1284->g_1104.s0", print_hash_value);
    transparent_crc(p_1284->g_1104.s1, "p_1284->g_1104.s1", print_hash_value);
    transparent_crc(p_1284->g_1104.s2, "p_1284->g_1104.s2", print_hash_value);
    transparent_crc(p_1284->g_1104.s3, "p_1284->g_1104.s3", print_hash_value);
    transparent_crc(p_1284->g_1104.s4, "p_1284->g_1104.s4", print_hash_value);
    transparent_crc(p_1284->g_1104.s5, "p_1284->g_1104.s5", print_hash_value);
    transparent_crc(p_1284->g_1104.s6, "p_1284->g_1104.s6", print_hash_value);
    transparent_crc(p_1284->g_1104.s7, "p_1284->g_1104.s7", print_hash_value);
    transparent_crc(p_1284->g_1115.f0, "p_1284->g_1115.f0", print_hash_value);
    transparent_crc(p_1284->g_1115.f1, "p_1284->g_1115.f1", print_hash_value);
    transparent_crc(p_1284->g_1115.f2, "p_1284->g_1115.f2", print_hash_value);
    transparent_crc(p_1284->g_1115.f3, "p_1284->g_1115.f3", print_hash_value);
    transparent_crc(p_1284->g_1115.f4, "p_1284->g_1115.f4", print_hash_value);
    transparent_crc(p_1284->g_1115.f5, "p_1284->g_1115.f5", print_hash_value);
    transparent_crc(p_1284->g_1115.f6, "p_1284->g_1115.f6", print_hash_value);
    transparent_crc(p_1284->g_1115.f7, "p_1284->g_1115.f7", print_hash_value);
    transparent_crc(p_1284->g_1115.f8, "p_1284->g_1115.f8", print_hash_value);
    transparent_crc(p_1284->g_1145.f0, "p_1284->g_1145.f0", print_hash_value);
    transparent_crc(p_1284->g_1145.f1, "p_1284->g_1145.f1", print_hash_value);
    transparent_crc(p_1284->g_1145.f2, "p_1284->g_1145.f2", print_hash_value);
    transparent_crc(p_1284->g_1145.f3, "p_1284->g_1145.f3", print_hash_value);
    transparent_crc(p_1284->g_1145.f4, "p_1284->g_1145.f4", print_hash_value);
    transparent_crc(p_1284->g_1145.f5, "p_1284->g_1145.f5", print_hash_value);
    transparent_crc(p_1284->g_1145.f6, "p_1284->g_1145.f6", print_hash_value);
    transparent_crc(p_1284->g_1145.f7, "p_1284->g_1145.f7", print_hash_value);
    transparent_crc(p_1284->g_1145.f8, "p_1284->g_1145.f8", print_hash_value);
    transparent_crc(p_1284->g_1146.f0, "p_1284->g_1146.f0", print_hash_value);
    transparent_crc(p_1284->g_1146.f1, "p_1284->g_1146.f1", print_hash_value);
    transparent_crc(p_1284->g_1146.f2, "p_1284->g_1146.f2", print_hash_value);
    transparent_crc(p_1284->g_1146.f3, "p_1284->g_1146.f3", print_hash_value);
    transparent_crc(p_1284->g_1146.f4, "p_1284->g_1146.f4", print_hash_value);
    transparent_crc(p_1284->g_1146.f5, "p_1284->g_1146.f5", print_hash_value);
    transparent_crc(p_1284->g_1146.f6, "p_1284->g_1146.f6", print_hash_value);
    transparent_crc(p_1284->g_1146.f7, "p_1284->g_1146.f7", print_hash_value);
    transparent_crc(p_1284->g_1146.f8, "p_1284->g_1146.f8", print_hash_value);
    transparent_crc(p_1284->g_1191.s0, "p_1284->g_1191.s0", print_hash_value);
    transparent_crc(p_1284->g_1191.s1, "p_1284->g_1191.s1", print_hash_value);
    transparent_crc(p_1284->g_1191.s2, "p_1284->g_1191.s2", print_hash_value);
    transparent_crc(p_1284->g_1191.s3, "p_1284->g_1191.s3", print_hash_value);
    transparent_crc(p_1284->g_1191.s4, "p_1284->g_1191.s4", print_hash_value);
    transparent_crc(p_1284->g_1191.s5, "p_1284->g_1191.s5", print_hash_value);
    transparent_crc(p_1284->g_1191.s6, "p_1284->g_1191.s6", print_hash_value);
    transparent_crc(p_1284->g_1191.s7, "p_1284->g_1191.s7", print_hash_value);
    transparent_crc(p_1284->g_1246.s0, "p_1284->g_1246.s0", print_hash_value);
    transparent_crc(p_1284->g_1246.s1, "p_1284->g_1246.s1", print_hash_value);
    transparent_crc(p_1284->g_1246.s2, "p_1284->g_1246.s2", print_hash_value);
    transparent_crc(p_1284->g_1246.s3, "p_1284->g_1246.s3", print_hash_value);
    transparent_crc(p_1284->g_1246.s4, "p_1284->g_1246.s4", print_hash_value);
    transparent_crc(p_1284->g_1246.s5, "p_1284->g_1246.s5", print_hash_value);
    transparent_crc(p_1284->g_1246.s6, "p_1284->g_1246.s6", print_hash_value);
    transparent_crc(p_1284->g_1246.s7, "p_1284->g_1246.s7", print_hash_value);
    transparent_crc(p_1284->g_1248.s0, "p_1284->g_1248.s0", print_hash_value);
    transparent_crc(p_1284->g_1248.s1, "p_1284->g_1248.s1", print_hash_value);
    transparent_crc(p_1284->g_1248.s2, "p_1284->g_1248.s2", print_hash_value);
    transparent_crc(p_1284->g_1248.s3, "p_1284->g_1248.s3", print_hash_value);
    transparent_crc(p_1284->g_1248.s4, "p_1284->g_1248.s4", print_hash_value);
    transparent_crc(p_1284->g_1248.s5, "p_1284->g_1248.s5", print_hash_value);
    transparent_crc(p_1284->g_1248.s6, "p_1284->g_1248.s6", print_hash_value);
    transparent_crc(p_1284->g_1248.s7, "p_1284->g_1248.s7", print_hash_value);
    transparent_crc(p_1284->g_1248.s8, "p_1284->g_1248.s8", print_hash_value);
    transparent_crc(p_1284->g_1248.s9, "p_1284->g_1248.s9", print_hash_value);
    transparent_crc(p_1284->g_1248.sa, "p_1284->g_1248.sa", print_hash_value);
    transparent_crc(p_1284->g_1248.sb, "p_1284->g_1248.sb", print_hash_value);
    transparent_crc(p_1284->g_1248.sc, "p_1284->g_1248.sc", print_hash_value);
    transparent_crc(p_1284->g_1248.sd, "p_1284->g_1248.sd", print_hash_value);
    transparent_crc(p_1284->g_1248.se, "p_1284->g_1248.se", print_hash_value);
    transparent_crc(p_1284->g_1248.sf, "p_1284->g_1248.sf", print_hash_value);
    transparent_crc(p_1284->g_1259.x, "p_1284->g_1259.x", print_hash_value);
    transparent_crc(p_1284->g_1259.y, "p_1284->g_1259.y", print_hash_value);
    transparent_crc(p_1284->g_1259.z, "p_1284->g_1259.z", print_hash_value);
    transparent_crc(p_1284->g_1259.w, "p_1284->g_1259.w", print_hash_value);
    transparent_crc(p_1284->g_1260.s0, "p_1284->g_1260.s0", print_hash_value);
    transparent_crc(p_1284->g_1260.s1, "p_1284->g_1260.s1", print_hash_value);
    transparent_crc(p_1284->g_1260.s2, "p_1284->g_1260.s2", print_hash_value);
    transparent_crc(p_1284->g_1260.s3, "p_1284->g_1260.s3", print_hash_value);
    transparent_crc(p_1284->g_1260.s4, "p_1284->g_1260.s4", print_hash_value);
    transparent_crc(p_1284->g_1260.s5, "p_1284->g_1260.s5", print_hash_value);
    transparent_crc(p_1284->g_1260.s6, "p_1284->g_1260.s6", print_hash_value);
    transparent_crc(p_1284->g_1260.s7, "p_1284->g_1260.s7", print_hash_value);
    transparent_crc(p_1284->g_1260.s8, "p_1284->g_1260.s8", print_hash_value);
    transparent_crc(p_1284->g_1260.s9, "p_1284->g_1260.s9", print_hash_value);
    transparent_crc(p_1284->g_1260.sa, "p_1284->g_1260.sa", print_hash_value);
    transparent_crc(p_1284->g_1260.sb, "p_1284->g_1260.sb", print_hash_value);
    transparent_crc(p_1284->g_1260.sc, "p_1284->g_1260.sc", print_hash_value);
    transparent_crc(p_1284->g_1260.sd, "p_1284->g_1260.sd", print_hash_value);
    transparent_crc(p_1284->g_1260.se, "p_1284->g_1260.se", print_hash_value);
    transparent_crc(p_1284->g_1260.sf, "p_1284->g_1260.sf", print_hash_value);
    transparent_crc(p_1284->g_1265.f0, "p_1284->g_1265.f0", print_hash_value);
    transparent_crc(p_1284->g_1265.f1, "p_1284->g_1265.f1", print_hash_value);
    transparent_crc(p_1284->g_1265.f2, "p_1284->g_1265.f2", print_hash_value);
    transparent_crc(p_1284->g_1265.f3, "p_1284->g_1265.f3", print_hash_value);
    transparent_crc(p_1284->g_1265.f4, "p_1284->g_1265.f4", print_hash_value);
    transparent_crc(p_1284->g_1265.f5, "p_1284->g_1265.f5", print_hash_value);
    transparent_crc(p_1284->g_1265.f6, "p_1284->g_1265.f6", print_hash_value);
    transparent_crc(p_1284->g_1265.f7, "p_1284->g_1265.f7", print_hash_value);
    transparent_crc(p_1284->g_1265.f8, "p_1284->g_1265.f8", print_hash_value);
    transparent_crc(p_1284->g_1271.x, "p_1284->g_1271.x", print_hash_value);
    transparent_crc(p_1284->g_1271.y, "p_1284->g_1271.y", print_hash_value);
    transparent_crc(p_1284->g_1271.z, "p_1284->g_1271.z", print_hash_value);
    transparent_crc(p_1284->g_1271.w, "p_1284->g_1271.w", print_hash_value);
    transparent_crc(p_1284->v_collective, "p_1284->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 3; i++)
            transparent_crc(p_1284->g_special_values[i + 3 * get_linear_group_id()], "p_1284->g_special_values[i + 3 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 3; i++)
            transparent_crc(p_1284->l_special_values[i], "p_1284->l_special_values[i]", print_hash_value);
    transparent_crc(p_1284->l_comm_values[get_linear_local_id()], "p_1284->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1284->g_comm_values[get_linear_group_id() * 89 + get_linear_local_id()], "p_1284->g_comm_values[get_linear_group_id() * 89 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
