// --atomics 97 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 38,100,2 -l 1,2,2
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

__constant uint32_t permutations[10][4] = {
{1,3,0,2}, // permutation 0
{2,0,1,3}, // permutation 1
{3,0,1,2}, // permutation 2
{2,0,1,3}, // permutation 3
{3,0,2,1}, // permutation 4
{2,0,1,3}, // permutation 5
{3,2,0,1}, // permutation 6
{1,3,2,0}, // permutation 7
{1,3,0,2}, // permutation 8
{3,0,2,1} // permutation 9
};

// Seed: 3049444174

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int32_t  f0;
   int8_t  f1;
   uint32_t  f2;
};

struct S1 {
    uint64_t g_17[6];
    uint64_t g_40;
    uint64_t *g_39;
    VECTOR(int8_t, 16) g_51;
    volatile VECTOR(uint32_t, 2) g_52;
    VECTOR(int64_t, 4) g_58;
    VECTOR(int64_t, 2) g_60;
    uint8_t g_79[6];
    int16_t g_80[8][3][8];
    uint64_t g_84;
    VECTOR(int32_t, 4) g_91;
    int8_t g_94;
    uint64_t *g_98;
    uint64_t **g_97;
    int64_t g_110[1];
    uint64_t *g_126;
    uint64_t g_139;
    int32_t *g_160;
    int32_t **g_159;
    volatile uint64_t g_170;
    volatile uint64_t * volatile g_169;
    volatile uint64_t * volatile *g_168;
    volatile uint64_t * volatile **g_167;
    uint32_t g_203;
    VECTOR(int32_t, 2) g_293;
    uint32_t g_337[7][4][3];
    int32_t g_399;
    volatile VECTOR(uint32_t, 2) g_408;
    volatile union U0 g_410[10];
    uint64_t g_422;
    uint64_t *** volatile g_423;
    volatile int8_t g_541;
    volatile int8_t *g_540;
    volatile int8_t ** volatile g_539[1];
    uint32_t g_549;
    union U0 g_550;
    int16_t g_612;
    int16_t g_616;
    int32_t * volatile g_617;
    uint16_t g_621;
    volatile VECTOR(int8_t, 2) g_647;
    uint32_t g_651;
    int32_t g_653;
    VECTOR(uint8_t, 4) g_664;
    int32_t g_803[1][8];
    volatile int8_t g_851;
    VECTOR(uint8_t, 16) g_852;
    union U0 g_853;
    VECTOR(int16_t, 16) g_860;
    VECTOR(uint8_t, 2) g_865;
    VECTOR(int64_t, 16) g_872;
    union U0 g_931;
    uint64_t *g_932;
    int64_t g_945[2];
    volatile VECTOR(uint32_t, 8) g_953;
    VECTOR(int32_t, 8) g_978;
    volatile VECTOR(uint16_t, 4) g_985;
    VECTOR(uint16_t, 4) g_986;
    int32_t g_993;
    union U0 g_1024[9];
    int16_t *g_1034;
    int16_t **g_1033;
    int32_t * volatile g_1042[4][9][3];
    VECTOR(uint8_t, 16) g_1070;
    VECTOR(uint32_t, 16) g_1072;
    VECTOR(uint16_t, 8) g_1077;
    VECTOR(uint8_t, 16) g_1096;
    uint32_t *g_1130;
    uint32_t **g_1129;
    volatile VECTOR(int32_t, 16) g_1149;
    volatile VECTOR(uint16_t, 8) g_1168;
    VECTOR(uint32_t, 2) g_1169;
    VECTOR(int8_t, 2) g_1175;
    union U0 g_1181;
    union U0 *g_1180;
    union U0 g_1187;
    uint8_t g_1214;
    int8_t **g_1225;
    int8_t *** volatile g_1224;
    VECTOR(int64_t, 8) g_1236;
    uint16_t g_1245;
    volatile uint32_t g_1264;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S1 * p_1272);
union U0  func_7(uint32_t  p_8, struct S1 * p_1272);
int32_t  func_10(uint64_t  p_11, int32_t  p_12, struct S1 * p_1272);
uint64_t  func_13(int32_t  p_14, int32_t  p_15, struct S1 * p_1272);
int32_t  func_23(uint64_t * p_24, uint32_t  p_25, uint8_t  p_26, int32_t  p_27, struct S1 * p_1272);
uint64_t * func_28(uint64_t * p_29, int32_t  p_30, uint64_t  p_31, struct S1 * p_1272);
int32_t  func_32(int16_t  p_33, uint64_t * p_34, int8_t  p_35, struct S1 * p_1272);
union U0  func_42(uint64_t  p_43, struct S1 * p_1272);
uint16_t  func_44(int8_t  p_45, uint32_t  p_46, int32_t  p_47, struct S1 * p_1272);
int16_t  func_65(uint64_t ** p_66, int64_t  p_67, struct S1 * p_1272);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1272->g_17 p_1272->g_39 p_1272->l_comm_values p_1272->g_51 p_1272->g_52 p_1272->g_58 p_1272->g_60 p_1272->g_40 p_1272->g_79 p_1272->g_80 p_1272->g_84 p_1272->g_97 p_1272->g_94 p_1272->g_110 p_1272->g_139 p_1272->g_98 p_1272->g_159 p_1272->g_203 p_1272->g_91 p_1272->g_comm_values p_1272->g_399 p_1272->g_408 p_1272->g_410 p_1272->g_422 p_1272->g_423 p_1272->g_539 p_1272->g_293 p_1272->g_549 p_1272->g_550 p_1272->g_410.f0 p_1272->g_540 p_1272->g_541 p_1272->g_337 p_1272->g_616 p_1272->g_617 p_1272->g_550.f1 p_1272->g_647 p_1272->g_664 p_1272->g_550.f0 p_1272->g_653 p_1272->g_851 p_1272->g_853 p_1272->g_126 p_1272->g_931 p_1272->g_160 p_1272->g_167 p_1272->g_168 p_1272->g_169 p_1272->g_945 p_1272->g_853.f2 p_1272->g_1024 p_1272->g_621 p_1272->g_612 p_1272->g_931.f1 p_1272->g_1070 p_1272->g_1072 p_1272->g_1034 p_1272->g_1077 p_1272->g_1033 p_1272->g_986 p_1272->g_1096 p_1272->g_985 p_1272->g_853.f1 p_1272->g_865 p_1272->g_1129 p_1272->g_1130 p_1272->g_1149 p_1272->g_1168 p_1272->g_1169 p_1272->g_1175 p_1272->g_1180 p_1272->g_1187 p_1272->g_1214 p_1272->g_803 p_1272->g_1224 p_1272->g_651 p_1272->g_1236 p_1272->g_1264
 * writes: p_1272->g_17 p_1272->g_39 p_1272->g_40 p_1272->g_79 p_1272->g_80 p_1272->g_84 p_1272->g_94 p_1272->g_126 p_1272->g_139 p_1272->g_110 p_1272->g_160 p_1272->g_91 p_1272->g_58 p_1272->g_293 p_1272->g_422 p_1272->g_97 p_1272->g_51 p_1272->g_549 p_1272->g_399 p_1272->g_612 p_1272->g_550.f1 p_1272->g_98 p_1272->g_621 p_1272->g_653 p_1272->g_651 p_1272->g_853.f2 p_1272->g_1033 p_1272->g_931.f1 p_1272->g_986 p_1272->g_853.f1 p_1272->g_865 p_1272->g_1129 p_1272->g_60 p_1272->g_comm_values p_1272->g_1077 p_1272->g_1225 p_1272->g_1245 p_1272->g_1264
 */
int16_t  func_1(struct S1 * p_1272)
{ /* block id: 4 */
    int32_t l_9[7][4] = {{0x28FDEB77L,0x14F934F5L,0L,0x14F934F5L},{0x28FDEB77L,0x14F934F5L,0L,0x14F934F5L},{0x28FDEB77L,0x14F934F5L,0L,0x14F934F5L},{0x28FDEB77L,0x14F934F5L,0L,0x14F934F5L},{0x28FDEB77L,0x14F934F5L,0L,0x14F934F5L},{0x28FDEB77L,0x14F934F5L,0L,0x14F934F5L},{0x28FDEB77L,0x14F934F5L,0L,0x14F934F5L}};
    VECTOR(int32_t, 4) l_1045 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-8L)), (-8L));
    int32_t l_1063 = 0x5A4E8B79L;
    int16_t l_1080 = 0x46C9L;
    VECTOR(uint8_t, 2) l_1094 = (VECTOR(uint8_t, 2))(255UL, 7UL);
    uint16_t l_1106 = 0x1BC8L;
    uint16_t l_1110[4][4][5] = {{{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L},{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L},{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L},{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L}},{{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L},{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L},{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L},{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L}},{{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L},{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L},{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L},{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L}},{{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L},{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L},{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L},{0x986EL,0x1282L,0x986EL,0x986EL,0x1282L}}};
    uint32_t *l_1118 = &p_1272->g_549;
    uint8_t *l_1119 = (void*)0;
    uint8_t *l_1120[4][9][4] = {{{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]}},{{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]}},{{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]}},{{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]},{(void*)0,(void*)0,&p_1272->g_79[0],&p_1272->g_79[4]}}};
    VECTOR(int16_t, 2) l_1135 = (VECTOR(int16_t, 2))(2L, (-1L));
    VECTOR(int32_t, 16) l_1148 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), (-1L)), (-1L)), (-1L), (-9L), (-1L), (VECTOR(int32_t, 2))((-9L), (-1L)), (VECTOR(int32_t, 2))((-9L), (-1L)), (-9L), (-1L), (-9L), (-1L));
    uint8_t l_1154[5] = {0x2CL,0x2CL,0x2CL,0x2CL,0x2CL};
    int64_t l_1159 = 7L;
    int32_t l_1160 = (-1L);
    int32_t ***l_1172[6][3][9] = {{{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0},{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0},{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0}},{{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0},{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0},{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0}},{{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0},{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0},{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0}},{{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0},{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0},{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0}},{{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0},{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0},{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0}},{{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0},{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0},{&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0,&p_1272->g_159,&p_1272->g_159,(void*)0,&p_1272->g_159,(void*)0}}};
    VECTOR(int32_t, 8) l_1200 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x1F840898L), 0x1F840898L), 0x1F840898L, (-6L), 0x1F840898L);
    int32_t l_1217 = 0x156E115AL;
    int32_t *l_1218 = (void*)0;
    int8_t *l_1223 = (void*)0;
    int8_t **l_1222 = &l_1223;
    uint16_t l_1269[10] = {0x8061L,0x0D4BL,0x8061L,0x8061L,0x0D4BL,0x8061L,0x8061L,0x0D4BL,0x8061L,0x8061L};
    uint64_t ***l_1270 = &p_1272->g_97;
    int i, j, k;
    if ((safe_unary_minus_func_int8_t_s((safe_sub_func_int64_t_s_s((!(safe_rshift_func_uint16_t_u_s((+(func_7(l_9[6][3], p_1272) , l_9[0][1])), 1))), (safe_lshift_func_uint16_t_u_u(p_1272->g_616, 13)))))))
    { /* block id: 426 */
        int16_t l_1027 = 0x4908L;
        return l_1027;
    }
    else
    { /* block id: 428 */
        int16_t *l_1031 = &p_1272->g_612;
        int16_t **l_1030[9][2];
        int32_t l_1046 = 0x0974C1E7L;
        int32_t l_1059 = (-1L);
        VECTOR(uint8_t, 16) l_1069 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x44L), 0x44L), 0x44L, 1UL, 0x44L, (VECTOR(uint8_t, 2))(1UL, 0x44L), (VECTOR(uint8_t, 2))(1UL, 0x44L), 1UL, 0x44L, 1UL, 0x44L);
        uint64_t l_1073 = 18446744073709551615UL;
        VECTOR(uint16_t, 4) l_1078 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL);
        VECTOR(int16_t, 8) l_1079 = (VECTOR(int16_t, 8))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 9L), 9L), 9L, 4L, 9L);
        int32_t *l_1098 = &p_1272->g_653;
        int i, j;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 2; j++)
                l_1030[i][j] = &l_1031;
        }
        for (p_1272->g_84 = (-3); (p_1272->g_84 >= 39); p_1272->g_84 = safe_add_func_uint32_t_u_u(p_1272->g_84, 7))
        { /* block id: 431 */
            int16_t ***l_1032 = (void*)0;
            uint16_t *l_1037[8];
            int32_t l_1038 = (-6L);
            int32_t l_1039 = 0x215F0312L;
            uint64_t **l_1047 = &p_1272->g_932;
            VECTOR(uint16_t, 16) l_1052 = (VECTOR(uint16_t, 16))(0xE49AL, (VECTOR(uint16_t, 4))(0xE49AL, (VECTOR(uint16_t, 2))(0xE49AL, 0UL), 0UL), 0UL, 0xE49AL, 0UL, (VECTOR(uint16_t, 2))(0xE49AL, 0UL), (VECTOR(uint16_t, 2))(0xE49AL, 0UL), 0xE49AL, 0UL, 0xE49AL, 0UL);
            int i;
            for (i = 0; i < 8; i++)
                l_1037[i] = &p_1272->g_621;
            p_1272->g_1033 = l_1030[8][0];
            (*p_1272->g_617) |= (safe_rshift_func_uint16_t_u_s((++p_1272->g_621), 12));
            for (p_1272->g_612 = (-5); (p_1272->g_612 < (-11)); --p_1272->g_612)
            { /* block id: 437 */
                uint64_t l_1055 = 1UL;
                VECTOR(uint64_t, 8) l_1056 = (VECTOR(uint64_t, 8))(7UL, (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 0x15ABE50471082558L), 0x15ABE50471082558L), 0x15ABE50471082558L, 7UL, 0x15ABE50471082558L);
                int32_t *l_1060[8] = {&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399};
                int i;
                l_1038 &= (((~(l_1046 = (l_9[6][3] <= ((VECTOR(int32_t, 2))(l_1045.wy)).even))) != ((l_1039 , &p_1272->g_39) == l_1047)) <= (safe_rshift_func_uint8_t_u_u((((safe_div_func_uint32_t_u_u((((VECTOR(uint16_t, 16))(l_1052.s40a426945fa7bdcb)).s1 && p_1272->g_91.x), (safe_add_func_uint32_t_u_u(l_1055, l_1056.s0)))) == ((*p_1272->g_540) != (safe_add_func_uint32_t_u_u(p_1272->g_621, (-3L))))) <= 0x040EL), l_1059)));
                (*p_1272->g_617) ^= ((l_1063 &= l_1046) != ((p_1272->g_945[1] , l_1060[0]) == &p_1272->g_549));
            }
        }
        for (p_1272->g_931.f1 = (-17); (p_1272->g_931.f1 != (-4)); p_1272->g_931.f1 = safe_add_func_uint16_t_u_u(p_1272->g_931.f1, 1))
        { /* block id: 446 */
            int32_t *l_1066[2][2][5];
            VECTOR(uint8_t, 2) l_1095 = (VECTOR(uint8_t, 2))(4UL, 0xCBL);
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_1066[i][j][k] = (void*)0;
                }
            }
            (*p_1272->g_159) = l_1066[1][0][4];
            for (l_1046 = 0; (l_1046 > (-16)); l_1046 = safe_sub_func_int8_t_s_s(l_1046, 3))
            { /* block id: 450 */
                uint32_t l_1071 = 0x4DAF52DCL;
                uint16_t *l_1076 = &p_1272->g_621;
                (*p_1272->g_159) = (*p_1272->g_159);
                l_1045.w = (((l_1046 <= ((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 16))(l_1069.s659c8bd4bb660436)).even, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_1272->g_1070.s41)), 0x86L, 5UL)).yxzwyxxw))).s7) | ((l_1071 ^ ((*p_1272->g_617) = (l_9[3][2] = (+l_1059)))) >= 1UL)) > (((((VECTOR(uint32_t, 16))(p_1272->g_1072.sb54ff2ccd459bcd2)).s8 > (((l_1073 | ((VECTOR(uint16_t, 8))(8UL, ((*p_1272->g_1034) | (safe_div_func_uint8_t_u_u((0x165CL <= ((*l_1076) &= GROUP_DIVERGE(2, 1))), FAKE_DIVERGE(p_1272->global_1_offset, get_global_id(1), 10)))), ((*l_1076) = ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_1272->g_1077.s47)).yxxxyxyy)).hi)).odd, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 4))(l_1078.yzyy)).yywzyzyy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 4))(l_1079.s4740)).yxxywyyx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(7L, 2L, l_1080, (*p_1272->g_1034), (**p_1272->g_1033), (**p_1272->g_1033), (-1L), 1L)).s40, (int16_t)l_1045.x))))).yxxyxxxx))).s2310700616101173, ((VECTOR(int16_t, 16))((-2L)))))).s6987, ((VECTOR(uint16_t, 4))(0x73F6L))))).zzzxwyww))))).s11, ((VECTOR(uint16_t, 2))(0x4813L)))))))))).lo), p_1272->g_664.y, ((VECTOR(uint16_t, 4))(0x1416L)))).s6) & l_1045.z) > (**p_1272->g_1033))) ^ 0x59L) , p_1272->g_986.x));
                for (p_1272->g_139 = 15; (p_1272->g_139 >= 36); p_1272->g_139 = safe_add_func_int64_t_s_s(p_1272->g_139, 5))
                { /* block id: 459 */
                    uint32_t l_1089 = 0x36213EECL;
                    VECTOR(int8_t, 2) l_1097 = (VECTOR(int8_t, 2))(0x78L, 0L);
                    int64_t *l_1105[7] = {&p_1272->g_110[0],(void*)0,&p_1272->g_110[0],&p_1272->g_110[0],(void*)0,&p_1272->g_110[0],&p_1272->g_110[0]};
                    int32_t l_1107 = (-1L);
                    int i;
                    l_1107 = (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 8))(((safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(FAKE_DIVERGE(p_1272->group_0_offset, get_group_id(0), 10), l_1089)) > ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 8))((-10L), ((VECTOR(int8_t, 4))((safe_sub_func_int16_t_s_s((**p_1272->g_1033), l_9[0][0])), 0x5BL, 0x54L, 1L)).x, 7L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(l_1094.yyxxxyyx)).lo, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_1095.yx)), p_1272->g_51.s6, FAKE_DIVERGE(p_1272->local_0_offset, get_local_id(0), 10), 0x21L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(1UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(p_1272->g_1096.sd36e910e7bdeb863)).lo)).s26)).lo, 0xE7L, ((VECTOR(uint8_t, 2))(0x50L, 0x0AL)), 0x70L, 255UL, 9UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(0x2AL, 0x25L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_1097.yyyyxyyx)).s52)), (((void*)0 != l_1098) <= ((p_1272->g_58.x = (safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(((*p_1272->g_39) |= 0x9137F7046BA94E1AL), 0x9B09AC22E3E95837L)) < (**p_1272->g_1033)), 255UL)), l_1089))) , l_1094.y)), (-1L), 0x2DL, (-1L))).s51, ((VECTOR(int8_t, 2))(0x2CL))))), 1L, (-1L))), ((VECTOR(int8_t, 4))(0x2AL))))), p_1272->g_664.x, p_1272->g_612, 2UL, 0xB4L)))).sd5)), 1UL)).hi))).w, 0x47L)), ((VECTOR(int8_t, 2))(1L)), 0x12L)))).even)))), 0x5EL, 0L, 0L)), ((VECTOR(uint8_t, 8))(0x3AL))))).s62)).yyyyxxyy, ((VECTOR(int16_t, 8))(0x7343L))))).lo, ((VECTOR(int16_t, 4))(0x74F6L))))).wwwzwwwy, ((VECTOR(int16_t, 8))(0x30D7L))))).odd)).zxxxyywwyxywyxwy, ((VECTOR(uint16_t, 16))(0xAB5EL))))).s6), 7)) <= l_1106), 247UL, ((VECTOR(uint8_t, 4))(0UL)), 250UL, 1UL)), ((VECTOR(uint8_t, 8))(0x5FL))))).s0, l_1097.y));
                    l_1107 ^= ((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0UL, 0xC419L)), 1UL, 3UL)).x, l_1071)) ^ (p_1272->g_986.y &= (l_1089 , p_1272->g_985.y)));
                    l_1110[1][3][3] = (0x5F30L && (*p_1272->g_1034));
                    for (l_1107 = (-30); (l_1107 != (-2)); l_1107++)
                    { /* block id: 468 */
                        return (**p_1272->g_1033);
                    }
                }
            }
        }
    }
    for (p_1272->g_853.f1 = 0; (p_1272->g_853.f1 >= 9); p_1272->g_853.f1 = safe_add_func_int16_t_s_s(p_1272->g_853.f1, 3))
    { /* block id: 477 */
        int32_t *l_1115 = (void*)0;
        (*p_1272->g_159) = l_1115;
    }
    if (((0x0379L & l_1045.y) | (safe_mul_func_uint8_t_u_u((p_1272->g_865.y |= (65528UL | (&p_1272->g_653 != ((l_1094.y <= ((*l_1118) &= l_1110[1][3][3])) , l_1118)))), (*p_1272->g_540)))))
    { /* block id: 482 */
        uint32_t l_1121 = 1UL;
        uint32_t **l_1128 = &l_1118;
        uint32_t ***l_1131[8];
        uint32_t **l_1132 = &p_1272->g_1130;
        int32_t l_1138 = (-4L);
        uint32_t l_1142[8];
        uint8_t l_1143[2];
        int32_t *l_1144[6][10][4] = {{{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0}},{{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0}},{{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0}},{{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0}},{{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0}},{{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0},{&p_1272->g_399,&l_9[6][3],&l_1063,(void*)0}}};
        VECTOR(int32_t, 2) l_1147 = (VECTOR(int32_t, 2))(0x42E524C3L, (-6L));
        uint64_t l_1152 = 0x6370318DA8E345F3L;
        uint8_t l_1153 = 255UL;
        int32_t l_1157 = 0x3EA7BE0AL;
        int8_t *l_1158 = (void*)0;
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_1131[i] = &p_1272->g_1129;
        for (i = 0; i < 8; i++)
            l_1142[i] = 4294967295UL;
        for (i = 0; i < 2; i++)
            l_1143[i] = 0xD3L;
        (*p_1272->g_617) = (((l_1121 ^= l_1045.w) & (safe_sub_func_int64_t_s_s(p_1272->g_60.x, (safe_mod_func_int32_t_s_s(((((((safe_rshift_func_uint8_t_u_u((((l_1128 == (p_1272->g_1129 = (l_1132 = p_1272->g_1129))) == ((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(l_1135.xxxyxyyyyxyxyxxx)).s2, 7)) , l_1106)) | (((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(0xFED7C2DD852DA601L, 0x55867A4D9AA5A5D2L, 0xB8B2CA17444255A1L, 0xC7522D600667C106L, 0x898404037FC2FBC5L, ((VECTOR(uint64_t, 2))(0xD7AE05EF01004BA3L, 0xA2F0DE1C932EA932L)), 0x197BB1181FD18C9BL)).s2, l_1138)) & (*p_1272->g_617)) | (((safe_unary_minus_func_int16_t_s((((safe_mul_func_int8_t_s_s(p_1272->g_110[0], (l_1142[6] | (-7L)))) , l_1143[1]) < 3L))) , 0x9FA4L) , l_1138))), FAKE_DIVERGE(p_1272->local_2_offset, get_local_id(2), 10))) ^ (*p_1272->g_1130)) <= p_1272->g_1070.s9) < p_1272->g_1072.sc) && 255UL) ^ p_1272->g_1070.se), l_1080))))) >= 5UL);
        l_1160 = (safe_add_func_uint64_t_u_u(l_1110[0][1][4], ((l_1135.y | ((((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x4BA979C7L, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(l_1147.xyxyxxxyyxxxyyxx)).s475f))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(3L, 0x5A4D36F7L)), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(l_1148.s7b709ea0)).s64, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(6L, (-9L))).xyxy)).hi)))))).xxyx)), ((VECTOR(int32_t, 8))(p_1272->g_1149.sab4c3daa)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 8))((safe_rshift_func_int8_t_s_s(l_1152, 0)), 0x28B4L, ((l_1153 & ((l_1154[1] != (p_1272->g_865.y & (*p_1272->g_540))) || (((l_9[6][3] = (safe_rshift_func_uint8_t_u_s(((void*)0 != &p_1272->g_168), l_1157))) <= l_1154[1]) | l_1148.s3))) , 0x6AE2L), ((VECTOR(int16_t, 4))((-1L))), (-1L))).s7564554340456132, ((VECTOR(int16_t, 16))(0x00D7L))))).sb12e, ((VECTOR(uint16_t, 4))(9UL))))))))).s08, ((VECTOR(int32_t, 2))(0L))))).yyxx)), ((VECTOR(int32_t, 4))(3L))))).ywwyyyyz)).lo))), 0x792A56E0L, 0x208A054BL, 0x702EEFF6L, 0x72610DCCL)).lo, ((VECTOR(int32_t, 4))(0x2884D392L))))), ((VECTOR(int32_t, 2))((-4L))), (-2L))).s3333127525775072)).s9 > (*p_1272->g_1130)) <= 0xAA7DFC38L) , l_1120[3][0][0]) != l_1158)) != l_1159)));
        return l_1045.y;
    }
    else
    { /* block id: 490 */
        VECTOR(uint16_t, 2) l_1167 = (VECTOR(uint16_t, 2))(65533UL, 65530UL);
        int32_t ***l_1170 = (void*)0;
        int32_t ****l_1171[7][6][6] = {{{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170}},{{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170}},{{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170}},{{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170}},{{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170}},{{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170}},{{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170},{&l_1170,&l_1170,&l_1170,(void*)0,&l_1170,&l_1170}}};
        int8_t *l_1176 = (void*)0;
        int8_t *l_1177 = &p_1272->g_931.f1;
        uint16_t *l_1178[6][3] = {{&l_1110[1][3][3],&p_1272->g_621,&l_1110[1][3][3]},{&l_1110[1][3][3],&p_1272->g_621,&l_1110[1][3][3]},{&l_1110[1][3][3],&p_1272->g_621,&l_1110[1][3][3]},{&l_1110[1][3][3],&p_1272->g_621,&l_1110[1][3][3]},{&l_1110[1][3][3],&p_1272->g_621,&l_1110[1][3][3]},{&l_1110[1][3][3],&p_1272->g_621,&l_1110[1][3][3]}};
        VECTOR(uint16_t, 16) l_1179 = (VECTOR(uint16_t, 16))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0x2696L), 0x2696L), 0x2696L, 65528UL, 0x2696L, (VECTOR(uint16_t, 2))(65528UL, 0x2696L), (VECTOR(uint16_t, 2))(65528UL, 0x2696L), 65528UL, 0x2696L, 65528UL, 0x2696L);
        VECTOR(int64_t, 8) l_1207 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-7L)), (-7L)), (-7L), 1L, (-7L));
        int32_t *l_1219 = (void*)0;
        uint64_t *l_1261 = &p_1272->g_139;
        int i, j, k;
        l_9[3][1] = ((--(*p_1272->g_39)) | (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_1167.xxyx)).z, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_1272->g_1168.s24)), ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(p_1272->g_1169.yxyxxxxyyyyyxyxx)).s23c1)).w >= ((*p_1272->g_617) = (&p_1272->g_159 != (l_1172[4][0][2] = l_1170)))) , ((safe_rshift_func_int8_t_s_s(((*l_1177) = ((VECTOR(int8_t, 8))(p_1272->g_1175.yxxxyyxy)).s0), 5)) , ((void*)0 == l_1178[2][1]))), 0xFD2DL, ((VECTOR(uint16_t, 2))(0x86CEL, 0x3A5FL)), 0xD0CAL, ((VECTOR(uint16_t, 4))(l_1179.s5450)), ((-9L) != 1L), 65532UL, 1UL, 0xD86FL, 0x726BL)).s7)), (((void*)0 != p_1272->g_1180) ^ p_1272->g_865.x))));
        for (l_1063 = 0; (l_1063 < 4); l_1063++)
        { /* block id: 498 */
            uint8_t l_1186 = 1UL;
            uint16_t l_1212 = 0x3804L;
            int8_t *l_1213[4][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int64_t *l_1215 = (void*)0;
            int64_t *l_1216 = (void*)0;
            int i, j;
            l_1217 = (0x6486L > (safe_sub_func_int32_t_s_s((l_1186 && (p_1272->g_1187 , (safe_div_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int64_t_s_s((((safe_div_func_uint16_t_u_u((p_1272->g_1077.s6 = (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((((*p_1272->g_1130) < ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(0x6600272AL, 0x0344845EL)).xxxxxxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 2))(l_1200.s15)).yxyy, (int32_t)l_1186, (int32_t)((p_1272->g_comm_values[p_1272->tid] = (p_1272->g_60.x ^= (safe_lshift_func_uint8_t_u_u(((*p_1272->g_540) != (((p_1272->g_51.sd = ((*l_1177) |= ((safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_1272->global_2_offset, get_global_id(2), 10), (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_1207.s1465411664632007)).sde)).xxxy)).z, (safe_add_func_uint32_t_u_u(0x7B486524L, 0UL)))))) , ((safe_rshift_func_int16_t_s_s(l_1212, 10)) ^ (-1L))))) <= p_1272->g_1214) , p_1272->g_986.w)), 6)))) != p_1272->g_293.x)))).wxwxxxxw, ((VECTOR(int32_t, 8))((-7L))))))))))).s7) , (**p_1272->g_1129)) < (**p_1272->g_1129)), 2)) && l_1212), 2))), l_1186)) , GROUP_DIVERGE(2, 1)) || 0xB14FDC88L), 18446744073709551615UL)), (-2L))), p_1272->g_803[0][6])))), 0x69CE9A03L)));
            l_1219 = l_1218;
        }
        for (p_1272->g_94 = (-15); (p_1272->g_94 < (-20)); p_1272->g_94 = safe_sub_func_uint8_t_u_u(p_1272->g_94, 4))
        { /* block id: 509 */
            uint64_t l_1233[1][10] = {{0xFF6FCE53444469F2L,0x58EBC0E545EB7702L,0xFF6FCE53444469F2L,0xFF6FCE53444469F2L,0x58EBC0E545EB7702L,0xFF6FCE53444469F2L,0xFF6FCE53444469F2L,0x58EBC0E545EB7702L,0xFF6FCE53444469F2L,0xFF6FCE53444469F2L}};
            uint32_t l_1262 = 0xC32C9F9AL;
            VECTOR(int32_t, 16) l_1263 = (VECTOR(int32_t, 16))(0x56C13B74L, (VECTOR(int32_t, 4))(0x56C13B74L, (VECTOR(int32_t, 2))(0x56C13B74L, 0x3BF2C96CL), 0x3BF2C96CL), 0x3BF2C96CL, 0x56C13B74L, 0x3BF2C96CL, (VECTOR(int32_t, 2))(0x56C13B74L, 0x3BF2C96CL), (VECTOR(int32_t, 2))(0x56C13B74L, 0x3BF2C96CL), 0x56C13B74L, 0x3BF2C96CL, 0x56C13B74L, 0x3BF2C96CL);
            int i, j;
            (*p_1272->g_1224) = l_1222;
            for (p_1272->g_651 = 12; (p_1272->g_651 >= 27); ++p_1272->g_651)
            { /* block id: 513 */
                uint64_t l_1228 = 0xA2767FB3CB01305DL;
                uint64_t ***l_1241 = &p_1272->g_97;
                uint64_t *l_1242 = &p_1272->g_17[2];
                int32_t l_1254 = (-4L);
                if (l_1228)
                    break;
                p_1272->g_91.z |= (p_1272->g_1245 = (((safe_sub_func_uint32_t_u_u((--(*p_1272->g_1130)), ((l_1233[0][6] &= 0x7250AED9L) && (*p_1272->g_617)))) > l_1228) | (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 8))(p_1272->g_1236.s70640007)).s2, (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((p_1272->g_945[1] >= (((*p_1272->g_39) = ((void*)0 != l_1241)) > (++(*l_1242)))), FAKE_DIVERGE(p_1272->group_2_offset, get_group_id(2), 10))), 6))))));
                l_1263.sa |= (0x20D7L <= ((((safe_lshift_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s((((!(safe_rshift_func_int8_t_s_s((((safe_div_func_int32_t_s_s((l_1254 = (*p_1272->g_617)), (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 2))(0x21L, 0x60L)).yxyy))).xzyxyxxwyzxzxxxx)).s7, (((((0x3704L && ((0x0236C7AA3CD1C301L != (((*l_1177) = (&p_1272->g_139 == l_1261)) <= (((**p_1272->g_1129) ^ (**p_1272->g_1129)) != (-1L)))) >= 0x1EL)) , (*p_1272->g_1034)) | l_1233[0][6]) >= l_1228) || (*p_1272->g_1034)))))) && 0x6104B8D5L) == p_1272->g_986.w), p_1272->g_1236.s7))) > l_1233[0][6]) , 252UL), l_1262)) != l_1228) , 0UL), l_1262)) <= 5UL) , l_1233[0][6]) >= l_1233[0][6]));
            }
            --p_1272->g_1264;
            for (p_1272->g_853.f1 = 0; (p_1272->g_853.f1 <= (-22)); p_1272->g_853.f1--)
            { /* block id: 528 */
                int32_t *l_1271 = (void*)0;
                l_1263.s1 = (((l_1269[1] ^ 18446744073709551615UL) , l_1270) == &p_1272->g_97);
                (*p_1272->g_159) = l_1271;
                (*p_1272->g_159) = (*p_1272->g_159);
                if ((*p_1272->g_617))
                    continue;
            }
        }
    }
    return (*p_1272->g_1034);
}


/* ------------------------------------------ */
/* 
 * reads : p_1272->g_17 p_1272->g_39 p_1272->l_comm_values p_1272->g_51 p_1272->g_52 p_1272->g_58 p_1272->g_60 p_1272->g_40 p_1272->g_79 p_1272->g_80 p_1272->g_84 p_1272->g_97 p_1272->g_94 p_1272->g_110 p_1272->g_139 p_1272->g_98 p_1272->g_159 p_1272->g_203 p_1272->g_91 p_1272->g_comm_values p_1272->g_399 p_1272->g_408 p_1272->g_410 p_1272->g_422 p_1272->g_423 p_1272->g_539 p_1272->g_293 p_1272->g_549 p_1272->g_550 p_1272->g_410.f0 p_1272->g_540 p_1272->g_541 p_1272->g_337 p_1272->g_616 p_1272->g_617 p_1272->g_550.f1 p_1272->g_647 p_1272->g_664 p_1272->g_550.f0 p_1272->g_653 p_1272->g_851 p_1272->g_853 p_1272->g_126 p_1272->g_931 p_1272->g_160 p_1272->g_167 p_1272->g_168 p_1272->g_169 p_1272->g_945 p_1272->g_853.f2 p_1272->g_1024
 * writes: p_1272->g_17 p_1272->g_39 p_1272->g_40 p_1272->g_79 p_1272->g_80 p_1272->g_84 p_1272->g_94 p_1272->g_126 p_1272->g_139 p_1272->g_110 p_1272->g_160 p_1272->g_91 p_1272->g_58 p_1272->g_293 p_1272->g_422 p_1272->g_97 p_1272->g_51 p_1272->g_549 p_1272->g_399 p_1272->g_612 p_1272->g_550.f1 p_1272->g_98 p_1272->g_621 p_1272->g_653 p_1272->g_651 p_1272->g_853.f2
 */
union U0  func_7(uint32_t  p_8, struct S1 * p_1272)
{ /* block id: 5 */
    uint64_t *l_16 = &p_1272->g_17[2];
    int32_t l_22 = 9L;
    VECTOR(uint64_t, 2) l_36 = (VECTOR(uint64_t, 2))(1UL, 0xC761B8CE22955D48L);
    VECTOR(uint64_t, 4) l_37 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x866B3883FAA058A1L), 0x866B3883FAA058A1L);
    VECTOR(int8_t, 2) l_38 = (VECTOR(int8_t, 2))(0x36L, 0x48L);
    uint64_t **l_41[1];
    int i;
    for (i = 0; i < 1; i++)
        l_41[i] = &p_1272->g_39;
    (*p_1272->g_617) = func_10(func_13(((++(*l_16)) , p_1272->g_17[3]), (((((((safe_lshift_func_int8_t_s_s(l_22, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x7BL, 0x44L)).yyxyyyxxxyyxxyyy)).lo)).s6)) || (func_23((p_1272->g_98 = func_28(l_16, func_32(p_8, (((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(6UL, 18446744073709551615UL, 0x0E77DA19AE86A676L, 2UL)).zzwxywyx)))), ((VECTOR(uint64_t, 16))(l_36.xxxxxyxyxyxxyxyy)).even, ((VECTOR(uint64_t, 2))(l_37.wx)).xxxxyxxy))).s4 , (((VECTOR(int8_t, 2))(l_38.yx)).lo , (l_22 , (p_1272->g_39 = p_1272->g_39)))), (func_42(p_1272->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1272->tid, 4))], p_1272) , ((safe_mod_func_uint8_t_u_u(p_1272->g_410[0].f0, l_38.y)) == 0x46FEL)), p_1272), p_8, p_1272)), l_37.x, l_38.x, l_36.x, p_1272) & 0L)) != p_8) || l_38.y) , p_8) ^ p_1272->g_664.z) != p_8), p_1272), p_1272->g_664.x, p_1272);
    return p_1272->g_1024[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_1272->g_126 p_1272->g_17 p_1272->g_84 p_1272->g_399 p_1272->g_203 p_1272->g_97 p_1272->g_98 p_1272->g_40 p_1272->g_408 p_1272->g_410 p_1272->g_422 p_1272->g_423 p_1272->g_539 p_1272->g_293 p_1272->g_549 p_1272->l_comm_values p_1272->g_91 p_1272->g_550 p_1272->g_79 p_1272->g_39 p_1272->g_94 p_1272->g_617 p_1272->g_159 p_1272->g_931 p_1272->g_110 p_1272->g_60 p_1272->g_160 p_1272->g_167 p_1272->g_168 p_1272->g_169 p_1272->g_337 p_1272->g_945 p_1272->g_540 p_1272->g_541 p_1272->g_853.f2
 * writes: p_1272->g_94 p_1272->g_79 p_1272->g_422 p_1272->g_97 p_1272->g_549 p_1272->g_91 p_1272->g_40 p_1272->g_651 p_1272->g_399 p_1272->g_160 p_1272->g_126 p_1272->g_853.f2
 */
int32_t  func_10(uint64_t  p_11, int32_t  p_12, struct S1 * p_1272)
{ /* block id: 349 */
    int32_t l_887 = 1L;
    int8_t *l_890 = &p_1272->g_94;
    uint64_t **l_895[1][2][6] = {{{&p_1272->g_98,(void*)0,&p_1272->g_98,&p_1272->g_98,(void*)0,&p_1272->g_98},{&p_1272->g_98,(void*)0,&p_1272->g_98,&p_1272->g_98,(void*)0,&p_1272->g_98}}};
    uint8_t *l_897 = (void*)0;
    uint8_t *l_898 = (void*)0;
    uint8_t *l_899 = (void*)0;
    uint8_t *l_900 = (void*)0;
    uint8_t *l_901[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int32_t l_902 = 0x33DBC648L;
    uint8_t l_929 = 0xFEL;
    VECTOR(int32_t, 2) l_970 = (VECTOR(int32_t, 2))((-7L), 6L);
    int32_t l_976 = 1L;
    VECTOR(uint32_t, 4) l_987 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 7UL), 7UL);
    VECTOR(int64_t, 8) l_988 = (VECTOR(int64_t, 8))(0x7D721255DBCB8F37L, (VECTOR(int64_t, 4))(0x7D721255DBCB8F37L, (VECTOR(int64_t, 2))(0x7D721255DBCB8F37L, 0x26905E0EF6ACF5DEL), 0x26905E0EF6ACF5DEL), 0x26905E0EF6ACF5DEL, 0x7D721255DBCB8F37L, 0x26905E0EF6ACF5DEL);
    union U0 *l_1021 = (void*)0;
    int32_t *l_1023 = &p_1272->g_399;
    int i, j, k;
    if ((((safe_lshift_func_int8_t_s_u(l_887, FAKE_DIVERGE(p_1272->group_2_offset, get_group_id(2), 10))) || ((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 4))((func_42((*p_1272->g_126), p_1272) , 0xB49BF54379F8A236L), (safe_rshift_func_int16_t_s_u(((void*)0 == l_890), (safe_sub_func_uint8_t_u_u(p_1272->g_79[5], (safe_mul_func_int16_t_s_s((l_895[0][0][5] == (((*p_1272->g_39) = ((l_902 = ((((safe_unary_minus_func_int16_t_s((+(p_11 && l_887)))) >= p_12) , l_887) == p_11)) | FAKE_DIVERGE(p_1272->local_2_offset, get_local_id(2), 10))) , (void*)0)), GROUP_DIVERGE(2, 1))))))), 0UL, 0x8BC14D503B683728L)).xzzzxzwzxxxxzxwx, ((VECTOR(uint64_t, 16))(18446744073709551606UL))))).s4) ^ 1UL))
    { /* block id: 352 */
        int32_t *l_903 = (void*)0;
        int32_t *l_904[4];
        uint32_t l_905 = 0x58B36FC3L;
        int8_t l_947 = 0x33L;
        uint64_t *l_949 = (void*)0;
        VECTOR(uint32_t, 4) l_973 = (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 4294967291UL), 4294967291UL);
        VECTOR(uint8_t, 16) l_997 = (VECTOR(uint8_t, 16))(0x96L, (VECTOR(uint8_t, 4))(0x96L, (VECTOR(uint8_t, 2))(0x96L, 255UL), 255UL), 255UL, 0x96L, 255UL, (VECTOR(uint8_t, 2))(0x96L, 255UL), (VECTOR(uint8_t, 2))(0x96L, 255UL), 0x96L, 255UL, 0x96L, 255UL);
        int i;
        for (i = 0; i < 4; i++)
            l_904[i] = &p_1272->g_399;
        --l_905;
        for (p_1272->g_94 = (-8); (p_1272->g_94 == 5); p_1272->g_94 = safe_add_func_int64_t_s_s(p_1272->g_94, 5))
        { /* block id: 356 */
            int32_t *l_913[2][1][4] = {{{&l_902,(void*)0,&l_902,&l_902}},{{&l_902,(void*)0,&l_902,&l_902}}};
            int32_t ***l_946 = (void*)0;
            int16_t l_996 = 5L;
            uint8_t l_1015 = 0x4EL;
            int i, j, k;
            for (p_1272->g_651 = (-15); (p_1272->g_651 != 2); p_1272->g_651++)
            { /* block id: 359 */
                uint8_t l_912 = 0x98L;
                int32_t l_915 = 0x07F8C64AL;
                int32_t **l_979[9];
                VECTOR(int16_t, 16) l_1000 = (VECTOR(int16_t, 16))(0x62F1L, (VECTOR(int16_t, 4))(0x62F1L, (VECTOR(int16_t, 2))(0x62F1L, 0x2975L), 0x2975L), 0x2975L, 0x62F1L, 0x2975L, (VECTOR(int16_t, 2))(0x62F1L, 0x2975L), (VECTOR(int16_t, 2))(0x62F1L, 0x2975L), 0x62F1L, 0x2975L, 0x62F1L, 0x2975L);
                int i;
                for (i = 0; i < 9; i++)
                    l_979[i] = &l_913[1][0][1];
                (*p_1272->g_617) = p_11;
                l_912 |= (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(6UL, 0UL)).yxxyxxyx)).s5 & ((VECTOR(int16_t, 8))(0x3887L, 0x254FL, 0x4535L, 1L, 0x635AL, 0x610CL, 0x469EL, 8L)).s0);
                if (p_11)
                { /* block id: 362 */
                    uint16_t l_914[1][3];
                    VECTOR(uint32_t, 8) l_916 = (VECTOR(uint32_t, 8))(0x03545ACBL, (VECTOR(uint32_t, 4))(0x03545ACBL, (VECTOR(uint32_t, 2))(0x03545ACBL, 7UL), 7UL), 7UL, 0x03545ACBL, 7UL);
                    int64_t *l_930 = &p_1272->g_110[0];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_914[i][j] = 5UL;
                    }
                    (*p_1272->g_159) = l_913[1][0][1];
                    l_915 = (l_914[0][2] ^= 0x01207CE7L);
                    l_902 |= (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_916.s62)))).xxxxyxyy)).s6 < (((((((safe_div_func_int16_t_s_s((0xEC2FL >= l_915), p_12)) & ((VECTOR(uint8_t, 4))(((safe_add_func_int64_t_s_s(l_916.s4, ((*l_930) |= ((((void*)0 == l_913[1][0][1]) < (p_1272->g_852.s7 = (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((!p_1272->g_621) & (safe_sub_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((-1L) | p_1272->g_852.s3), (*p_1272->g_540))) == l_929), p_1272->g_60.y))), p_11)), GROUP_DIVERGE(0, 1))))) , p_1272->g_865.x)))) , l_915), 1UL, 0x32L, 0UL)).x) , (void*)0) != &p_1272->g_94) | p_11) , p_11) , 0x15D250AEL));
                }
                else
                { /* block id: 369 */
                    uint64_t **l_933 = &p_1272->g_126;
                    uint32_t *l_936 = &l_905;
                    VECTOR(uint16_t, 2) l_943 = (VECTOR(uint16_t, 2))(0xE144L, 0xD4F6L);
                    int64_t *l_944 = &p_1272->g_945[1];
                    int32_t l_948 = 0x21CD4825L;
                    int i;
                    if ((*p_1272->g_617))
                        break;
                    (*p_1272->g_159) = &l_915;
                    (*p_1272->g_617) = (((p_1272->g_931 , ((*l_933) = &p_1272->g_84)) == (p_12 , &p_1272->g_422)) , (safe_rshift_func_int8_t_s_u((((*l_936) = p_1272->g_110[0]) | ((VECTOR(uint32_t, 16))(p_12, p_12, ((VECTOR(uint32_t, 2))(0xB9FDCC6DL)), ((VECTOR(uint32_t, 4))(0xA6A5924AL)), p_12, ((VECTOR(uint32_t, 4))(0UL)), ((VECTOR(uint32_t, 2))(4294967286UL)), 0x62AEF48FL)).s1), 0)));
                    l_948 ^= (safe_rshift_func_uint8_t_u_u(((l_915 == l_912) || (p_11 == ((*p_1272->g_160) = ((((*p_1272->g_617) , (((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 8))((safe_add_func_int8_t_s_s(l_912, ((*p_1272->g_540) > p_12))), ((VECTOR(uint16_t, 2))(l_943.xy)), ((p_1272->g_399 > ((((+((*l_944) ^= (-8L))) , &p_1272->g_159) != l_946) | (*p_1272->g_160))) | 4294967295UL), ((VECTOR(uint16_t, 4))(65535UL)))).s0, l_947)) | p_1272->g_60.y) < 0x7DC0DD60L)) <= 1UL) , (*p_1272->g_160))))), 3));
                }
                if ((l_949 != (**p_1272->g_167)))
                { /* block id: 379 */
                    uint8_t l_950 = 0UL;
                    uint32_t l_965 = 0x39565CDFL;
                    VECTOR(uint32_t, 4) l_971 = (VECTOR(uint32_t, 4))(0x17BD62CEL, (VECTOR(uint32_t, 2))(0x17BD62CEL, 0x4381F710L), 0x4381F710L);
                    VECTOR(int32_t, 8) l_972 = (VECTOR(int32_t, 8))(0x7841A36EL, (VECTOR(int32_t, 4))(0x7841A36EL, (VECTOR(int32_t, 2))(0x7841A36EL, 0L), 0L), 0L, 0x7841A36EL, 0L);
                    VECTOR(int32_t, 8) l_977 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 4L), 4L), 4L, (-4L), 4L);
                    int i;
                    ++l_950;
                    if (((((VECTOR(uint32_t, 2))(p_1272->g_953.s24)).hi > ((safe_unary_minus_func_uint16_t_u((safe_sub_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((l_915 = ((safe_mod_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u(p_1272->g_337[4][1][2], p_12)) <= ((p_11 , (p_1272->g_945[1] | (safe_sub_func_uint16_t_u_u((!(l_965 | (GROUP_DIVERGE(1, 1) <= (safe_lshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u((((p_12 <= ((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_970.xyxyyyxyyxxxxxyx)).odd)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 4))(l_971.zxxy)).zywwxwwz))).hi, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(0L, 0x60FF2902L)), ((VECTOR(int32_t, 16))(l_972.s6464517117033225)).s8f))).xyyyyxxx))))).s30))).xyyyxxyxxyyxyxxx)).hi)).odd))).zyxxzyywyxzwzxyy)).even, ((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 8))(6UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_973.zzwzyyxxzyyxyzxz)).scd03)), ((*p_1272->g_39) ^ (1UL < (l_976 = (l_902 = (safe_mod_func_uint16_t_u_u(p_11, 0xB4A1L)))))), 4294967295UL, 4294967290UL)).lo))).zywwzyxx))).s63)).xxxxyxxx))).s6523657117401011, ((VECTOR(int64_t, 16))(0x241BFD17B8028F17L))))).s2) ^ p_12) > (-1L)), 0x0DA1E5DBFDE9AC20L)), 5))))), FAKE_DIVERGE(p_1272->group_0_offset, get_group_id(0), 10))))) && l_915)) || (-3L)), l_929)) != 0x0A36143C14E8E402L)) || p_1272->g_203), p_11)), FAKE_DIVERGE(p_1272->local_2_offset, get_local_id(2), 10))))) ^ (-1L))) & 251UL))
                    { /* block id: 384 */
                        int64_t l_984 = (-1L);
                        int16_t *l_994 = &p_1272->g_612;
                        uint16_t *l_995 = (void*)0;
                        l_902 = (!((VECTOR(int32_t, 8))(0x4270FEF7L, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(l_977.s5344)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(0x7FB0E2A9L, 0x28943F37L)).xxxyyyyy, ((VECTOR(int32_t, 2))(p_1272->g_978.s12)).xyxxyxxx))), (l_979[2] != (void*)0), (safe_div_func_uint64_t_u_u(0xE05D85F7F32361D5L, (((l_976 = (safe_mul_func_int16_t_s_s(l_984, ((*l_994) |= (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_1272->g_985.zwyy)), ((VECTOR(uint16_t, 4))(p_1272->g_986.wyyw)).x, 0x209CL, (l_984 == (((*p_1272->g_617) = p_12) == (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_987.yy)))).yxyxyyyxxyxyxyyx)).s1 > (+((((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 2))(l_988.s72)).xxyxyxyyyxxyxxxx))).s7 >= (GROUP_DIVERGE(1, 1) > (0x8B4EB688413E2A07L < (safe_div_func_int16_t_s_s((((((safe_add_func_int32_t_s_s(l_887, p_12)) , p_12) , l_977.s0) >= p_12) , l_977.s0), p_1272->g_865.y))))) & p_1272->g_993))))), l_984, p_1272->g_422, ((VECTOR(uint16_t, 2))(65535UL)), p_12, ((VECTOR(uint16_t, 4))(0xA13EL)))).s7 | (-7L)))))) || p_1272->g_853.f0) | 5L))), 1L, (*p_1272->g_617), 0x495F0FFEL, (-7L), 0x09B2CE35L, 0x6BB7D113L)).s93af, ((VECTOR(int32_t, 4))(1L))))).lo)), ((VECTOR(int32_t, 2))(0x4F234905L))))), 1L, (*p_1272->g_617), 0x566A8A65L, 3L, 0L)).s0);
                        (*p_1272->g_159) = l_903;
                    }
                    else
                    { /* block id: 390 */
                        return l_996;
                    }
                }
                else
                { /* block id: 393 */
                    int16_t *l_1011 = &p_1272->g_80[7][0][5];
                    int32_t l_1012 = 7L;
                    (*p_1272->g_617) = (((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 16))(p_1272->g_110[0], 0x2BL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0UL, 247UL)).yyxxyyxx)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 8))(l_997.s1fa87f2b)), (uint8_t)((l_913[0][0][1] = &l_976) != l_903), (uint8_t)(safe_div_func_int8_t_s_s((l_970.x > ((p_12 >= (((void*)0 == &p_1272->g_97) , ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_1000.sf9)), 8L, 2L)).y)) != (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((l_1012 = (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int64_t_s_s((((*l_1011) &= p_11) || p_11), 0L)) , p_1272->g_91.z), 6)), 0))), 7)), 4)))), p_1272->g_945[1]))))).s42)), ((VECTOR(uint8_t, 4))(255UL)))).s8918, ((VECTOR(uint8_t, 4))(248UL))))).hi)).yxxxxxyy, ((VECTOR(uint8_t, 8))(255UL)), ((VECTOR(uint8_t, 8))(0UL))))).s7705016136764456)).odd, ((VECTOR(uint8_t, 8))(0x48L)), ((VECTOR(uint8_t, 8))(1UL))))).s3 && (*p_1272->g_540));
                    for (l_915 = (-20); (l_915 < (-25)); l_915--)
                    { /* block id: 400 */
                        (*p_1272->g_159) = (void*)0;
                        if (p_11)
                            continue;
                        if (l_1015)
                            continue;
                    }
                }
            }
            l_902 |= 0x218BA0D1L;
            (*p_1272->g_159) = &l_976;
            (*p_1272->g_160) = p_11;
        }
        (*p_1272->g_617) = (-2L);
        l_976 = 6L;
    }
    else
    { /* block id: 413 */
        uint64_t l_1016 = 1UL;
        ++l_1016;
        return p_11;
    }
    for (p_1272->g_853.f2 = (-30); (p_1272->g_853.f2 == 21); p_1272->g_853.f2 = safe_add_func_int8_t_s_s(p_1272->g_853.f2, 5))
    { /* block id: 419 */
        union U0 **l_1022 = &l_1021;
        (*l_1022) = l_1021;
    }
    l_1023 = &l_902;
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_1272->g_422 p_1272->g_159
 * writes: p_1272->g_422 p_1272->g_160
 */
uint64_t  func_13(int32_t  p_14, int32_t  p_15, struct S1 * p_1272)
{ /* block id: 341 */
    int32_t *l_884 = (void*)0;
    for (p_1272->g_422 = 0; (p_1272->g_422 <= 32); p_1272->g_422 = safe_add_func_int32_t_s_s(p_1272->g_422, 7))
    { /* block id: 344 */
        uint16_t l_883 = 0x609FL;
        return l_883;
    }
    (*p_1272->g_159) = l_884;
    return p_14;
}


/* ------------------------------------------ */
/* 
 * reads : p_1272->g_550.f0 p_1272->g_39 p_1272->g_40 p_1272->g_94 p_1272->g_653 p_1272->g_91 p_1272->g_617 p_1272->g_399 p_1272->g_851 p_1272->g_616 p_1272->g_853
 * writes: p_1272->g_621 p_1272->g_80 p_1272->g_40 p_1272->g_653 p_1272->g_399
 */
int32_t  func_23(uint64_t * p_24, uint32_t  p_25, uint8_t  p_26, int32_t  p_27, struct S1 * p_1272)
{ /* block id: 310 */
    int32_t *l_796[8] = {&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399};
    VECTOR(int64_t, 16) l_797 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int64_t, 2))(1L, 1L), (VECTOR(int64_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
    uint32_t l_798 = 4294967295UL;
    int64_t l_801 = 0x513C566C6A2A057CL;
    int16_t l_802 = 0L;
    uint32_t l_804 = 0UL;
    int16_t *l_816 = &p_1272->g_80[6][1][3];
    uint16_t l_831[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
    VECTOR(uint8_t, 16) l_855 = (VECTOR(uint8_t, 16))(0xDEL, (VECTOR(uint8_t, 4))(0xDEL, (VECTOR(uint8_t, 2))(0xDEL, 0x47L), 0x47L), 0x47L, 0xDEL, 0x47L, (VECTOR(uint8_t, 2))(0xDEL, 0x47L), (VECTOR(uint8_t, 2))(0xDEL, 0x47L), 0xDEL, 0x47L, 0xDEL, 0x47L);
    VECTOR(int16_t, 2) l_858 = (VECTOR(int16_t, 2))(0x1070L, 0x5309L);
    int8_t *l_880 = (void*)0;
    int i;
    --l_798;
    ++l_804;
    p_27 = (~(safe_div_func_int64_t_s_s(((safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(((p_1272->g_621 = p_1272->g_550.f0) <= ((safe_div_func_uint64_t_u_u(((-1L) < (safe_unary_minus_func_int16_t_s(((*l_816) = p_27)))), ((*p_1272->g_39) |= (safe_rshift_func_int8_t_s_s((-1L), 1))))) == ((safe_rshift_func_uint16_t_u_s(((((((void*)0 == &l_798) & (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(0UL, 7)), 6))) < ((safe_sub_func_int64_t_s_s(p_1272->g_94, (l_796[3] == (void*)0))) == p_26)) , (void*)0) != &p_1272->g_39), 13)) == p_27))), p_26)), p_1272->g_653)) , 0L), p_1272->g_91.x)));
    for (p_1272->g_653 = 5; (p_1272->g_653 <= (-28)); p_1272->g_653--)
    { /* block id: 319 */
        uint64_t *l_835[4];
        int8_t *l_838 = &p_1272->g_94;
        int32_t l_846 = 0x60DA1B01L;
        int32_t l_848 = 0L;
        int32_t l_854 = 3L;
        VECTOR(int16_t, 2) l_859 = (VECTOR(int16_t, 2))((-7L), 6L);
        int32_t **l_868 = &p_1272->g_160;
        int32_t **l_869 = &p_1272->g_160;
        int32_t **l_870 = &l_796[2];
        VECTOR(uint64_t, 16) l_871 = (VECTOR(uint64_t, 16))(0x4AFBD897DD04EE9EL, (VECTOR(uint64_t, 4))(0x4AFBD897DD04EE9EL, (VECTOR(uint64_t, 2))(0x4AFBD897DD04EE9EL, 0xA624A8B97C7F38FCL), 0xA624A8B97C7F38FCL), 0xA624A8B97C7F38FCL, 0x4AFBD897DD04EE9EL, 0xA624A8B97C7F38FCL, (VECTOR(uint64_t, 2))(0x4AFBD897DD04EE9EL, 0xA624A8B97C7F38FCL), (VECTOR(uint64_t, 2))(0x4AFBD897DD04EE9EL, 0xA624A8B97C7F38FCL), 0x4AFBD897DD04EE9EL, 0xA624A8B97C7F38FCL, 0x4AFBD897DD04EE9EL, 0xA624A8B97C7F38FCL);
        int8_t *l_875 = &p_1272->g_550.f1;
        int i;
        for (i = 0; i < 4; i++)
            l_835[i] = &p_1272->g_40;
        atomic_or(&p_1272->l_atomic_reduction[0], l_831[2]);
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1272->v_collective += p_1272->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        for (l_804 = 7; (l_804 < 47); l_804++)
        { /* block id: 323 */
            VECTOR(uint32_t, 8) l_834 = (VECTOR(uint32_t, 8))(0xF512018DL, (VECTOR(uint32_t, 4))(0xF512018DL, (VECTOR(uint32_t, 2))(0xF512018DL, 0x9B0646DEL), 0x9B0646DEL), 0x9B0646DEL, 0xF512018DL, 0x9B0646DEL);
            uint32_t *l_836 = &p_1272->g_203;
            int8_t *l_837[1][5][1] = {{{&p_1272->g_94},{&p_1272->g_94},{&p_1272->g_94},{&p_1272->g_94},{&p_1272->g_94}}};
            uint16_t *l_839 = &l_831[2];
            int32_t l_847 = 3L;
            int i, j, k;
            p_27 = (*p_1272->g_617);
            atomic_sub(&p_1272->l_atomic_reduction[0], ((*p_1272->g_617) |= (((~((VECTOR(uint32_t, 4))(l_834.s2226)).x) >= ((void*)0 == l_835[1])) & (+((VECTOR(uint32_t, 2))(0x3E85BE7DL, 0x81255839L)).even))));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1272->v_collective += p_1272->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_27 = (l_848 |= (l_847 = ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(8L, 0x4BF6663AL, 0x4491E7DFL, (-1L))).hi)).xyxyyxyyyxyyyxyy)).lo)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((p_27 & GROUP_DIVERGE(2, 1)) , (((((VECTOR(int16_t, 4))(((((*l_836) &= p_25) , l_837[0][1][0]) != l_838), ((VECTOR(int16_t, 2))((-1L), 0L)), (-6L))).y || p_1272->g_337[4][0][1]) , ((*l_839) = 0x8F3BL)) && 0x7010L)), 0L, (-1L), 0L)), 0x04366538L, (safe_mul_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(((((safe_mod_func_uint8_t_u_u(l_834.s7, p_1272->g_80[0][1][0])) | p_1272->g_52.x) , l_846) != l_834.s4), p_1272->g_337[5][2][1])) < l_846) , p_27), p_26)), 5L, 0x6C2FECCAL, 0L, ((VECTOR(int32_t, 4))((-1L))), 0x15D9CCB5L, (-8L), 0x45566EEEL)).s6951))).z));
            l_854 = ((+(((safe_mul_func_uint8_t_u_u((+(FAKE_DIVERGE(p_1272->local_1_offset, get_local_id(1), 10) != (l_847 &= (p_1272->g_851 >= ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 2))((-2L), 0x48360F2A337D7C60L)).xyxxyxxx, (int64_t)p_1272->g_40, (int64_t)(l_848 ^ ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-1L), 0x4FL)).yyxyxyxxxyyxxxyx)).lo))).hi, ((VECTOR(uint8_t, 8))(0x2EL, ((VECTOR(uint8_t, 2))(p_1272->g_852.scd)), 0xABL, ((VECTOR(uint8_t, 2))(0UL, 0x47L)), 0x49L, 0x8BL)).even))).x)))).hi)))).wzwxxwxz)).s7)))), p_1272->g_616)) <= l_848) == 9L)) , (p_1272->g_853 , (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(1UL, (l_854 , ((VECTOR(uint8_t, 4))(l_855.saaac)).z), 251UL, 1UL)).wzxywxxwyyyzzyyy)).s5e)).odd > l_847)));
        }
        l_854 = (p_26 ^ (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_858.xx)), 0x2DBBL, (-10L))).odd)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_859.xx)).yyxy)), 1L, 0x1CA7L)).odd, ((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 2))(p_1272->g_860.s7f)).xyxyyxxx, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))((((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(p_1272->g_865.yyyxyxxyyyyxxxxy)).sfa)).lo, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x14L, 4L)))).lo)), (safe_rshift_func_uint8_t_u_u(((((*l_870) = &p_27) == (((0x06D2CCB6L != (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_871.sb2)).yxyx)).xyzzzzzx)).s6 >= ((VECTOR(int64_t, 8))(0x25DD0E91C8D9CFF6L, ((VECTOR(int64_t, 2))(p_1272->g_872.sdf)), ((void*)0 == &p_1272->g_79[2]), ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 16))((((*l_838) = ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-8L), 0x18L)))).hi) & (safe_add_func_int8_t_s_s(((*l_875) = (*p_1272->g_540)), p_27))), (0xA1C10060CFF1E1A3L == ((safe_mul_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(p_1272->g_410[0].f0, 0xAED704AFL)) & 0x29B396DC05075CC1L), 0UL)) <= p_27)), 0x7BE0F55443EAEF8EL, ((VECTOR(int64_t, 4))((-1L))), 0x709670F0EFE29D6CL, ((VECTOR(int64_t, 2))(1L)), p_1272->g_51.s5, ((VECTOR(int64_t, 2))((-1L))), 0L, 9L, 0x3BE8BE00D5B4A83DL)).odd, ((VECTOR(int64_t, 8))(0x2FB96B35855AA0AAL))))).odd)), ((VECTOR(int64_t, 4))(0L))))))).s2)) & p_26) , &p_27)) , 4UL), 1)))) < 1L) == p_1272->g_803[0][6]) , l_838) != l_880), 0x36E2L, p_1272->g_337[2][2][1], ((VECTOR(int16_t, 2))(2L)), p_27, 1L, ((VECTOR(int16_t, 4))(0x4B2BL)), ((VECTOR(int16_t, 2))(1L)), p_25, 0x08CDL, 4L)).lo))))).even))), ((VECTOR(int16_t, 4))(3L)), ((VECTOR(int16_t, 4))(0x4BA0L))))).hi)), 0x5A76L, ((VECTOR(int16_t, 2))(0x3146L)), p_26, (-1L), 0L)).s5, p_27)));
    }
    return (*p_1272->g_617);
}


/* ------------------------------------------ */
/* 
 * reads : p_1272->g_616 p_1272->g_617 p_1272->g_550.f1 p_1272->g_40 p_1272->g_647 p_1272->g_399 p_1272->g_159 p_1272->g_664
 * writes: p_1272->g_399 p_1272->g_550.f1 p_1272->g_160
 */
uint64_t * func_28(uint64_t * p_29, int32_t  p_30, uint64_t  p_31, struct S1 * p_1272)
{ /* block id: 248 */
    uint16_t l_654[4][7] = {{0xE6A4L,65535UL,0x511CL,65535UL,0xE6A4L,0xE6A4L,65535UL},{0xE6A4L,65535UL,0x511CL,65535UL,0xE6A4L,0xE6A4L,65535UL},{0xE6A4L,65535UL,0x511CL,65535UL,0xE6A4L,0xE6A4L,65535UL},{0xE6A4L,65535UL,0x511CL,65535UL,0xE6A4L,0xE6A4L,65535UL}};
    int32_t l_669 = 0x0D8AA0B0L;
    int32_t l_670 = 0x7B1E2DF8L;
    int32_t l_672[7] = {0x4C292D3FL,0x4C292D3FL,0x4C292D3FL,0x4C292D3FL,0x4C292D3FL,0x4C292D3FL,0x4C292D3FL};
    int16_t l_673[3];
    uint64_t l_674 = 0UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_673[i] = 0x695AL;
    (*p_1272->g_617) = p_1272->g_616;
    for (p_1272->g_550.f1 = 7; (p_1272->g_550.f1 > 17); p_1272->g_550.f1 = safe_add_func_int32_t_s_s(p_1272->g_550.f1, 5))
    { /* block id: 252 */
        uint16_t *l_620 = &p_1272->g_621;
        int32_t l_628 = (-5L);
        uint64_t **l_641 = (void*)0;
        int16_t *l_644 = &p_1272->g_80[2][0][6];
        uint32_t *l_650[10][2] = {{&p_1272->g_651,&p_1272->g_651},{&p_1272->g_651,&p_1272->g_651},{&p_1272->g_651,&p_1272->g_651},{&p_1272->g_651,&p_1272->g_651},{&p_1272->g_651,&p_1272->g_651},{&p_1272->g_651,&p_1272->g_651},{&p_1272->g_651,&p_1272->g_651},{&p_1272->g_651,&p_1272->g_651},{&p_1272->g_651,&p_1272->g_651},{&p_1272->g_651,&p_1272->g_651}};
        int32_t *l_652[9][1] = {{&p_1272->g_653},{&p_1272->g_653},{&p_1272->g_653},{&p_1272->g_653},{&p_1272->g_653},{&p_1272->g_653},{&p_1272->g_653},{&p_1272->g_653},{&p_1272->g_653}};
        int32_t l_655 = 0x3ECD3C08L;
        int32_t *l_658 = (void*)0;
        int32_t *l_659 = &p_1272->g_399;
        int i, j;
        (*p_1272->g_617) = ((l_620 == ((safe_sub_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((l_628 , ((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 8))(246UL, (safe_rshift_func_int8_t_s_s(p_30, 1)), (safe_mod_func_uint32_t_u_u(0UL, (((safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((*l_644) &= (((p_1272->g_126 = p_29) != p_29) <= ((+p_1272->g_84) & (((VECTOR(int64_t, 2))(1L, 0x6BA9D119FC5DAF70L)).hi != 0x71A006B1284C4506L)))), (((l_628 = (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(p_1272->g_647.xxyyxyxy)).s6, (safe_rshift_func_int16_t_s_u((((p_1272->g_651 = p_31) , (*p_1272->g_98)) > (-3L)), p_1272->g_60.x))))) , l_654[0][2]) , p_31))), p_1272->g_60.y)) == 0x1B84D786L), 255UL)), 0x61L)) && 0x1DF02992L) & p_30))), GROUP_DIVERGE(1, 1), p_1272->g_550.f0, GROUP_DIVERGE(2, 1), 0x16L, 0x26L)), ((VECTOR(uint8_t, 8))(0xFAL)), ((VECTOR(uint8_t, 8))(252UL))))).s4) >= p_1272->g_40), 5UL)), p_31)), FAKE_DIVERGE(p_1272->group_1_offset, get_group_id(1), 10))) , (void*)0)) > l_655);
        if (l_654[0][2])
            break;
        (*l_659) |= (safe_mul_func_uint8_t_u_u(p_1272->g_647.y, l_628));
        (*p_1272->g_159) = &p_30;
    }
    if ((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(0x5F3FL, 8)), ((VECTOR(uint8_t, 8))(p_1272->g_664.xwzyyzzx)).s3)))
    { /* block id: 262 */
        int32_t *l_665 = (void*)0;
        int32_t *l_666 = &p_1272->g_399;
        int32_t *l_667 = (void*)0;
        int32_t *l_668[5][8] = {{(void*)0,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,(void*)0,(void*)0},{(void*)0,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,(void*)0,(void*)0},{(void*)0,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,(void*)0,(void*)0},{(void*)0,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,(void*)0,(void*)0},{(void*)0,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,&p_1272->g_399,(void*)0,(void*)0}};
        int32_t l_671 = 0x2E674A39L;
        uint64_t *l_795 = (void*)0;
        int i, j;
        ++l_674;
        if ((atomic_inc(&p_1272->l_atomic_input[26]) == 0))
        { /* block id: 265 */
            int64_t l_677[6][10] = {{(-1L),1L,0x4E8FA42B4DC5C50BL,1L,(-1L),(-1L),1L,0x4E8FA42B4DC5C50BL,1L,(-1L)},{(-1L),1L,0x4E8FA42B4DC5C50BL,1L,(-1L),(-1L),1L,0x4E8FA42B4DC5C50BL,1L,(-1L)},{(-1L),1L,0x4E8FA42B4DC5C50BL,1L,(-1L),(-1L),1L,0x4E8FA42B4DC5C50BL,1L,(-1L)},{(-1L),1L,0x4E8FA42B4DC5C50BL,1L,(-1L),(-1L),1L,0x4E8FA42B4DC5C50BL,1L,(-1L)},{(-1L),1L,0x4E8FA42B4DC5C50BL,1L,(-1L),(-1L),1L,0x4E8FA42B4DC5C50BL,1L,(-1L)},{(-1L),1L,0x4E8FA42B4DC5C50BL,1L,(-1L),(-1L),1L,0x4E8FA42B4DC5C50BL,1L,(-1L)}};
            int32_t l_678 = 0x277A7FD4L;
            int16_t l_679 = 0x18BBL;
            int32_t l_680 = 0x495A18B3L;
            int64_t l_681 = 0x3E686CA8E6A28C82L;
            VECTOR(uint8_t, 2) l_682 = (VECTOR(uint8_t, 2))(0x6CL, 0xACL);
            uint8_t l_685 = 0x69L;
            uint16_t l_686 = 0UL;
            VECTOR(int32_t, 2) l_687 = (VECTOR(int32_t, 2))(1L, 0x5342290DL);
            VECTOR(int32_t, 2) l_688 = (VECTOR(int32_t, 2))((-1L), 0x6EE74790L);
            VECTOR(int32_t, 16) l_689 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 2L), 2L), 2L, 6L, 2L, (VECTOR(int32_t, 2))(6L, 2L), (VECTOR(int32_t, 2))(6L, 2L), 6L, 2L, 6L, 2L);
            VECTOR(int32_t, 2) l_690 = (VECTOR(int32_t, 2))((-9L), 0x0D556BE3L);
            uint32_t l_691 = 0UL;
            int32_t l_692 = 0x3973AC54L;
            uint32_t l_693 = 4294967295UL;
            int8_t l_694[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_694[i] = 0x1AL;
            if ((((VECTOR(uint32_t, 4))((l_685 = (--l_682.y)), (l_686 = ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(4UL, 4294967295UL, 0x419E8F39L, 0xD491048BL)).xzzwwxyyzxwzxxxx)).s4), 0xDE3CE53BL, 0x712EB4A2L)).z , (l_694[0] ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(0x7322A8ACL, 0x492C55FDL, ((VECTOR(int32_t, 2))(0L, 0x4E81BE10L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_687.xy)).xxxyyxxx)), ((VECTOR(int32_t, 4))(l_688.xxyx)).ywwwzzxw))).s00)), ((VECTOR(int32_t, 16))(l_689.sc7d955f10dd34c06)).s1c))).yxxxxyxxyyxyxyyy)).sfd)), 0x77ED5434L, ((VECTOR(int32_t, 8))(1L, 0L, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(0x70A112C4L, (-1L), ((VECTOR(int32_t, 4))(0x3DE0E191L, ((VECTOR(int32_t, 2))((-1L), 0x53EF86D0L)), 1L)), (-4L), 0x7F89D26EL)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_690.yxxy))))))).even))), 0x3E0EF734L, 4L, 2L, (-1L))), 0x0A281D8AL)).sdf, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-5L), 0x211D566CL)).xxyyxyxy)).s24))), (-1L))), (-1L), (l_693 = (l_691 , l_692)), (-10L), 1L)).s6)))
            { /* block id: 271 */
                int32_t l_696 = 0x1FD79DE0L;
                int32_t *l_695 = &l_696;
                int32_t *l_697 = &l_696;
                VECTOR(int32_t, 16) l_766 = (VECTOR(int32_t, 16))(0x6A9D0B2EL, (VECTOR(int32_t, 4))(0x6A9D0B2EL, (VECTOR(int32_t, 2))(0x6A9D0B2EL, 0x0CC761A9L), 0x0CC761A9L), 0x0CC761A9L, 0x6A9D0B2EL, 0x0CC761A9L, (VECTOR(int32_t, 2))(0x6A9D0B2EL, 0x0CC761A9L), (VECTOR(int32_t, 2))(0x6A9D0B2EL, 0x0CC761A9L), 0x6A9D0B2EL, 0x0CC761A9L, 0x6A9D0B2EL, 0x0CC761A9L);
                VECTOR(int32_t, 16) l_767 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3F2A88BEL), 0x3F2A88BEL), 0x3F2A88BEL, 0L, 0x3F2A88BEL, (VECTOR(int32_t, 2))(0L, 0x3F2A88BEL), (VECTOR(int32_t, 2))(0L, 0x3F2A88BEL), 0L, 0x3F2A88BEL, 0L, 0x3F2A88BEL);
                VECTOR(int32_t, 4) l_768 = (VECTOR(int32_t, 4))(0x06A8C1BDL, (VECTOR(int32_t, 2))(0x06A8C1BDL, 1L), 1L);
                VECTOR(int32_t, 8) l_769 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x54E18951L), 0x54E18951L), 0x54E18951L, 6L, 0x54E18951L);
                int64_t l_770[7] = {0x5BE041C39BE5C6ABL,0x5BE041C39BE5C6ABL,0x5BE041C39BE5C6ABL,0x5BE041C39BE5C6ABL,0x5BE041C39BE5C6ABL,0x5BE041C39BE5C6ABL,0x5BE041C39BE5C6ABL};
                VECTOR(int32_t, 2) l_771 = (VECTOR(int32_t, 2))(0x03154DC9L, 9L);
                VECTOR(int32_t, 16) l_772 = (VECTOR(int32_t, 16))(0x47EC243AL, (VECTOR(int32_t, 4))(0x47EC243AL, (VECTOR(int32_t, 2))(0x47EC243AL, (-1L)), (-1L)), (-1L), 0x47EC243AL, (-1L), (VECTOR(int32_t, 2))(0x47EC243AL, (-1L)), (VECTOR(int32_t, 2))(0x47EC243AL, (-1L)), 0x47EC243AL, (-1L), 0x47EC243AL, (-1L));
                int32_t l_773[1];
                VECTOR(int32_t, 8) l_774 = (VECTOR(int32_t, 8))(0x3D140B28L, (VECTOR(int32_t, 4))(0x3D140B28L, (VECTOR(int32_t, 2))(0x3D140B28L, 0L), 0L), 0L, 0x3D140B28L, 0L);
                VECTOR(int32_t, 16) l_775 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x76DF22DEL), 0x76DF22DEL), 0x76DF22DEL, 1L, 0x76DF22DEL, (VECTOR(int32_t, 2))(1L, 0x76DF22DEL), (VECTOR(int32_t, 2))(1L, 0x76DF22DEL), 1L, 0x76DF22DEL, 1L, 0x76DF22DEL);
                VECTOR(int32_t, 2) l_776 = (VECTOR(int32_t, 2))(0L, 0x5A1B8EC3L);
                VECTOR(int32_t, 4) l_777 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-8L)), (-8L));
                VECTOR(int32_t, 8) l_778 = (VECTOR(int32_t, 8))(0x692BF4A4L, (VECTOR(int32_t, 4))(0x692BF4A4L, (VECTOR(int32_t, 2))(0x692BF4A4L, 1L), 1L), 1L, 0x692BF4A4L, 1L);
                VECTOR(int32_t, 2) l_779 = (VECTOR(int32_t, 2))(0x502FC490L, 0x7797949CL);
                uint64_t l_780 = 0xC44F12B0E7ACE104L;
                VECTOR(int32_t, 8) l_781 = (VECTOR(int32_t, 8))(0x36F8378DL, (VECTOR(int32_t, 4))(0x36F8378DL, (VECTOR(int32_t, 2))(0x36F8378DL, 0x49D56E83L), 0x49D56E83L), 0x49D56E83L, 0x36F8378DL, 0x49D56E83L);
                VECTOR(int32_t, 4) l_782 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, (-2L)), (-2L));
                uint8_t l_783[9] = {0xAEL,0xAEL,0xAEL,0xAEL,0xAEL,0xAEL,0xAEL,0xAEL,0xAEL};
                VECTOR(int32_t, 16) l_784 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x2F2DC86AL), 0x2F2DC86AL), 0x2F2DC86AL, 3L, 0x2F2DC86AL, (VECTOR(int32_t, 2))(3L, 0x2F2DC86AL), (VECTOR(int32_t, 2))(3L, 0x2F2DC86AL), 3L, 0x2F2DC86AL, 3L, 0x2F2DC86AL);
                VECTOR(int16_t, 16) l_785 = (VECTOR(int16_t, 16))(0x417AL, (VECTOR(int16_t, 4))(0x417AL, (VECTOR(int16_t, 2))(0x417AL, 0x72EAL), 0x72EAL), 0x72EAL, 0x417AL, 0x72EAL, (VECTOR(int16_t, 2))(0x417AL, 0x72EAL), (VECTOR(int16_t, 2))(0x417AL, 0x72EAL), 0x417AL, 0x72EAL, 0x417AL, 0x72EAL);
                VECTOR(uint16_t, 8) l_786 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0x33ACL), 0x33ACL), 0x33ACL, 65526UL, 0x33ACL);
                VECTOR(int32_t, 2) l_787 = (VECTOR(int32_t, 2))(0x2EA1F3D8L, 0x255BA589L);
                int32_t l_788 = 0x2AA59E27L;
                VECTOR(int32_t, 16) l_789 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x1C3B5577L), 0x1C3B5577L), 0x1C3B5577L, (-5L), 0x1C3B5577L, (VECTOR(int32_t, 2))((-5L), 0x1C3B5577L), (VECTOR(int32_t, 2))((-5L), 0x1C3B5577L), (-5L), 0x1C3B5577L, (-5L), 0x1C3B5577L);
                VECTOR(int32_t, 2) l_790 = (VECTOR(int32_t, 2))(6L, 0x6D944103L);
                int i;
                for (i = 0; i < 1; i++)
                    l_773[i] = 4L;
                l_697 = (l_695 = l_695);
                for (l_696 = 3; (l_696 < (-30)); l_696 = safe_sub_func_int32_t_s_s(l_696, 9))
                { /* block id: 276 */
                    int32_t l_701[9];
                    int32_t *l_700 = &l_701[6];
                    int32_t *l_702 = &l_701[7];
                    uint16_t l_703 = 3UL;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_701[i] = (-1L);
                    l_695 = l_700;
                    l_695 = l_702;
                    l_703++;
                    for (l_701[6] = 0; (l_701[6] >= 11); ++l_701[6])
                    { /* block id: 282 */
                        int32_t *l_708[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                        int16_t l_709 = (-4L);
                        int8_t l_710 = 0x64L;
                        uint64_t l_711 = 0x82454B6711E79942L;
                        VECTOR(int32_t, 8) l_714 = (VECTOR(int32_t, 8))(0x676C50E3L, (VECTOR(int32_t, 4))(0x676C50E3L, (VECTOR(int32_t, 2))(0x676C50E3L, (-9L)), (-9L)), (-9L), 0x676C50E3L, (-9L));
                        VECTOR(int32_t, 2) l_715 = (VECTOR(int32_t, 2))((-3L), 0L);
                        VECTOR(int32_t, 16) l_716 = (VECTOR(int32_t, 16))(0x55A771B8L, (VECTOR(int32_t, 4))(0x55A771B8L, (VECTOR(int32_t, 2))(0x55A771B8L, 0x3EFC62EBL), 0x3EFC62EBL), 0x3EFC62EBL, 0x55A771B8L, 0x3EFC62EBL, (VECTOR(int32_t, 2))(0x55A771B8L, 0x3EFC62EBL), (VECTOR(int32_t, 2))(0x55A771B8L, 0x3EFC62EBL), 0x55A771B8L, 0x3EFC62EBL, 0x55A771B8L, 0x3EFC62EBL);
                        VECTOR(int32_t, 8) l_717 = (VECTOR(int32_t, 8))(0x21451E9AL, (VECTOR(int32_t, 4))(0x21451E9AL, (VECTOR(int32_t, 2))(0x21451E9AL, 0x735E2115L), 0x735E2115L), 0x735E2115L, 0x21451E9AL, 0x735E2115L);
                        int32_t l_718[3][8][1] = {{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}}};
                        VECTOR(int32_t, 16) l_719 = (VECTOR(int32_t, 16))(0x60182D19L, (VECTOR(int32_t, 4))(0x60182D19L, (VECTOR(int32_t, 2))(0x60182D19L, 0x669D0BADL), 0x669D0BADL), 0x669D0BADL, 0x60182D19L, 0x669D0BADL, (VECTOR(int32_t, 2))(0x60182D19L, 0x669D0BADL), (VECTOR(int32_t, 2))(0x60182D19L, 0x669D0BADL), 0x60182D19L, 0x669D0BADL, 0x60182D19L, 0x669D0BADL);
                        union U0 l_720 = {0x727D8D42L};/* VOLATILE GLOBAL l_720 */
                        uint32_t l_721 = 0x7CC88913L;
                        VECTOR(uint8_t, 16) l_722 = (VECTOR(uint8_t, 16))(0x40L, (VECTOR(uint8_t, 4))(0x40L, (VECTOR(uint8_t, 2))(0x40L, 1UL), 1UL), 1UL, 0x40L, 1UL, (VECTOR(uint8_t, 2))(0x40L, 1UL), (VECTOR(uint8_t, 2))(0x40L, 1UL), 0x40L, 1UL, 0x40L, 1UL);
                        uint64_t l_723 = 18446744073709551608UL;
                        int16_t l_724[1];
                        int8_t l_725 = 0x4EL;
                        VECTOR(uint32_t, 4) l_726 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL);
                        VECTOR(uint32_t, 8) l_727 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xD297130CL), 0xD297130CL), 0xD297130CL, 0UL, 0xD297130CL);
                        VECTOR(uint32_t, 4) l_728 = (VECTOR(uint32_t, 4))(0x67091002L, (VECTOR(uint32_t, 2))(0x67091002L, 0x1952AA88L), 0x1952AA88L);
                        VECTOR(uint32_t, 4) l_729 = (VECTOR(uint32_t, 4))(0x48244850L, (VECTOR(uint32_t, 2))(0x48244850L, 0x2D945952L), 0x2D945952L);
                        VECTOR(int32_t, 2) l_730 = (VECTOR(int32_t, 2))(0x0221298BL, 0x1E49191AL);
                        int64_t l_731 = (-1L);
                        VECTOR(int32_t, 16) l_732 = (VECTOR(int32_t, 16))(0x290A8D46L, (VECTOR(int32_t, 4))(0x290A8D46L, (VECTOR(int32_t, 2))(0x290A8D46L, 0x07089A62L), 0x07089A62L), 0x07089A62L, 0x290A8D46L, 0x07089A62L, (VECTOR(int32_t, 2))(0x290A8D46L, 0x07089A62L), (VECTOR(int32_t, 2))(0x290A8D46L, 0x07089A62L), 0x290A8D46L, 0x07089A62L, 0x290A8D46L, 0x07089A62L);
                        uint32_t l_733 = 4294967286UL;
                        VECTOR(int32_t, 2) l_734 = (VECTOR(int32_t, 2))(0x61F0ECE6L, 0x2A616934L);
                        VECTOR(int16_t, 2) l_735 = (VECTOR(int16_t, 2))(7L, 0x0B97L);
                        VECTOR(int16_t, 8) l_736 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                        VECTOR(uint16_t, 16) l_737 = (VECTOR(uint16_t, 16))(0xFAE9L, (VECTOR(uint16_t, 4))(0xFAE9L, (VECTOR(uint16_t, 2))(0xFAE9L, 0x84ECL), 0x84ECL), 0x84ECL, 0xFAE9L, 0x84ECL, (VECTOR(uint16_t, 2))(0xFAE9L, 0x84ECL), (VECTOR(uint16_t, 2))(0xFAE9L, 0x84ECL), 0xFAE9L, 0x84ECL, 0xFAE9L, 0x84ECL);
                        VECTOR(int32_t, 2) l_738 = (VECTOR(int32_t, 2))(0x6FB28A46L, 0x5695E17BL);
                        uint64_t l_739[7][4] = {{9UL,0x33F1BD605447E04AL,0x833AC28F252B409CL,0x4A17264A89827661L},{9UL,0x33F1BD605447E04AL,0x833AC28F252B409CL,0x4A17264A89827661L},{9UL,0x33F1BD605447E04AL,0x833AC28F252B409CL,0x4A17264A89827661L},{9UL,0x33F1BD605447E04AL,0x833AC28F252B409CL,0x4A17264A89827661L},{9UL,0x33F1BD605447E04AL,0x833AC28F252B409CL,0x4A17264A89827661L},{9UL,0x33F1BD605447E04AL,0x833AC28F252B409CL,0x4A17264A89827661L},{9UL,0x33F1BD605447E04AL,0x833AC28F252B409CL,0x4A17264A89827661L}};
                        int8_t l_740 = (-1L);
                        int8_t l_741 = (-1L);
                        int16_t l_742 = 0x4A97L;
                        uint32_t l_743 = 0x70D6A0CCL;
                        uint64_t l_744[7];
                        VECTOR(int8_t, 4) l_745 = (VECTOR(int8_t, 4))(0x6BL, (VECTOR(int8_t, 2))(0x6BL, 1L), 1L);
                        int8_t l_746 = (-1L);
                        VECTOR(int32_t, 2) l_747 = (VECTOR(int32_t, 2))(0x0A9C86E9L, 0x33DAE249L);
                        VECTOR(uint32_t, 2) l_748 = (VECTOR(uint32_t, 2))(7UL, 0x2E1044C8L);
                        uint8_t l_749 = 254UL;
                        VECTOR(uint8_t, 4) l_750 = (VECTOR(uint8_t, 4))(0xBFL, (VECTOR(uint8_t, 2))(0xBFL, 0x10L), 0x10L);
                        VECTOR(uint8_t, 4) l_751 = (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 251UL), 251UL);
                        VECTOR(uint8_t, 16) l_752 = (VECTOR(uint8_t, 16))(0x01L, (VECTOR(uint8_t, 4))(0x01L, (VECTOR(uint8_t, 2))(0x01L, 246UL), 246UL), 246UL, 0x01L, 246UL, (VECTOR(uint8_t, 2))(0x01L, 246UL), (VECTOR(uint8_t, 2))(0x01L, 246UL), 0x01L, 246UL, 0x01L, 246UL);
                        VECTOR(uint8_t, 2) l_753 = (VECTOR(uint8_t, 2))(0x86L, 0x72L);
                        int16_t l_754 = 0x5674L;
                        VECTOR(uint64_t, 2) l_755 = (VECTOR(uint64_t, 2))(0UL, 0xC3F4BAD664214F61L);
                        VECTOR(uint8_t, 2) l_756 = (VECTOR(uint8_t, 2))(0UL, 0xC7L);
                        int64_t l_757[10][1][8] = {{{2L,2L,0x0B5EE1BDAEF2A6EAL,0x62FE3EE4A4022AA3L,0x344DD47DC3DA93B8L,0x53C23D89277CA44AL,0L,3L}},{{2L,2L,0x0B5EE1BDAEF2A6EAL,0x62FE3EE4A4022AA3L,0x344DD47DC3DA93B8L,0x53C23D89277CA44AL,0L,3L}},{{2L,2L,0x0B5EE1BDAEF2A6EAL,0x62FE3EE4A4022AA3L,0x344DD47DC3DA93B8L,0x53C23D89277CA44AL,0L,3L}},{{2L,2L,0x0B5EE1BDAEF2A6EAL,0x62FE3EE4A4022AA3L,0x344DD47DC3DA93B8L,0x53C23D89277CA44AL,0L,3L}},{{2L,2L,0x0B5EE1BDAEF2A6EAL,0x62FE3EE4A4022AA3L,0x344DD47DC3DA93B8L,0x53C23D89277CA44AL,0L,3L}},{{2L,2L,0x0B5EE1BDAEF2A6EAL,0x62FE3EE4A4022AA3L,0x344DD47DC3DA93B8L,0x53C23D89277CA44AL,0L,3L}},{{2L,2L,0x0B5EE1BDAEF2A6EAL,0x62FE3EE4A4022AA3L,0x344DD47DC3DA93B8L,0x53C23D89277CA44AL,0L,3L}},{{2L,2L,0x0B5EE1BDAEF2A6EAL,0x62FE3EE4A4022AA3L,0x344DD47DC3DA93B8L,0x53C23D89277CA44AL,0L,3L}},{{2L,2L,0x0B5EE1BDAEF2A6EAL,0x62FE3EE4A4022AA3L,0x344DD47DC3DA93B8L,0x53C23D89277CA44AL,0L,3L}},{{2L,2L,0x0B5EE1BDAEF2A6EAL,0x62FE3EE4A4022AA3L,0x344DD47DC3DA93B8L,0x53C23D89277CA44AL,0L,3L}}};
                        uint64_t l_758 = 0x329C5EF0D0EFCC73L;
                        uint32_t l_759[9] = {0xD23C2950L,0x2D44D7C5L,0xD23C2950L,0xD23C2950L,0x2D44D7C5L,0xD23C2950L,0xD23C2950L,0x2D44D7C5L,0xD23C2950L};
                        int16_t l_760 = (-6L);
                        int32_t l_761 = 8L;
                        int64_t l_762[8][3] = {{1L,0x75824D31C46D6BAEL,0L},{1L,0x75824D31C46D6BAEL,0L},{1L,0x75824D31C46D6BAEL,0L},{1L,0x75824D31C46D6BAEL,0L},{1L,0x75824D31C46D6BAEL,0L},{1L,0x75824D31C46D6BAEL,0L},{1L,0x75824D31C46D6BAEL,0L},{1L,0x75824D31C46D6BAEL,0L}};
                        uint8_t l_763[8] = {6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL};
                        uint32_t l_764 = 4294967295UL;
                        uint8_t l_765 = 0x75L;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_724[i] = (-1L);
                        for (i = 0; i < 7; i++)
                            l_744[i] = 0x855BC90C3180461DL;
                        l_708[3] = (void*)0;
                        ++l_711;
                        l_689.s2 = ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_714.s4627)))).zwzzwxyz, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_715.xxxx)))).yzwxwywxywxzzzww, ((VECTOR(int32_t, 8))(l_716.sc489fc28)).s7642310434641521))).lo, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(l_717.s5714051374302102)).s4d, ((VECTOR(int32_t, 16))(l_718[1][5][0], 0x140E235DL, ((VECTOR(int32_t, 4))(l_719.s1ec3)), ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((((l_720 , (l_703 = l_721)) , (l_682.y = ((VECTOR(uint8_t, 4))(0x2BL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_722.s3548ec5b)))).s56)), 0x99L)).w)) , ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_723, 4294967295UL, l_724[0], l_725, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_726.xyzy)))).even, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(0x628FF64CL, ((VECTOR(uint32_t, 2))(0x96923206L, 1UL)).hi, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_727.s27)).yyyxyyxxyxxxxxyy)).s9603)), ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_728.wwzz)).even)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 2))(l_729.zz)).xxxy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 8))(l_730.xyxxyxyx)), ((VECTOR(int32_t, 16))(0x428833F1L, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(l_731, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x7FA8FAFEL, 0x4E0707EDL)), 0x20DC26DFL, 0L)).even)).xxyyxxxy)), ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(0L, ((VECTOR(int32_t, 4))(l_732.s0daf)), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_733, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_734.xxxx)))), ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_735.yxxy)), ((VECTOR(int16_t, 4))(l_736.s5316)))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_737.s732b)))).zwyzyxxx))), ((VECTOR(int32_t, 16))(l_738.yyxyxxxxxxyxyyyy)).hi))), (-4L), 0x41227873L, 0x43673714L)).sd, 0x3D21E0EDL, (-1L), l_739[4][2], (-6L), l_740, ((VECTOR(int32_t, 2))((-1L))), 0x2F5AC129L, ((VECTOR(int32_t, 4))(0x3157D3A6L)), ((VECTOR(int32_t, 2))(0x23B32D86L)), 2L)).sed, ((VECTOR(int32_t, 2))(0x1EA960A7L)), ((VECTOR(int32_t, 2))(1L))))), ((VECTOR(int32_t, 2))(0x40B9B40BL))))), (-1L))).s4136120637101557, ((VECTOR(int32_t, 16))(0x65B085B9L)), ((VECTOR(int32_t, 16))(0L))))).odd))), ((VECTOR(int32_t, 8))((-6L))), ((VECTOR(int32_t, 8))(1L))))).s01)).yxxyyxyx)).s31)), (-1L))), ((VECTOR(int32_t, 4))(0L))))), l_741, l_742, ((VECTOR(int32_t, 4))(2L)), 3L, ((VECTOR(int32_t, 4))(0L)))).odd))).lo))))), ((VECTOR(uint32_t, 4))(0x0CCB5142L))))))).lo, ((VECTOR(uint32_t, 2))(1UL))))), l_743, 4294967291UL, 0xD50E2FA4L, ((VECTOR(uint32_t, 2))(0UL)), 7UL, 0xE0C1FF4BL, 0xC8C7AD2FL)).odd)).s42, ((VECTOR(uint32_t, 2))(0x31562067L))))).xyyy)))).s7075233411775417)).even, ((VECTOR(uint32_t, 8))(3UL))))).s7) , l_744[6]), 0x404BL, l_745.x, l_746, 0x4BB5L, 0x437CL, 0x0CEFL, ((VECTOR(int16_t, 4))(0x60AFL)), ((VECTOR(int16_t, 2))(0x47DEL)), ((VECTOR(int16_t, 2))(5L)), 7L)).s3f)).xyyxyxyy, ((VECTOR(uint16_t, 8))(0x10EBL))))), 0x130FBD8BL, (-1L))).sb3))), (int32_t)0x4E9A7B45L))).yyxyxyxx))).s5;
                        l_765 ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, 0L)), ((VECTOR(int32_t, 4))(l_747.xyxx)), 0x4E3D00C7L, (-1L), 0x26D68662L, (l_749 = l_748.x), ((l_763[4] = ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_750.yzxxzzyy)).hi)).yzxxyyzx)))).s6004656444467410, ((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 8))(l_751.yyyxwxwz)).s6443604125352137, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_752.s58)).yxxyyyyyxyyxxyxx)).s42)).xyxxyxxx)).s5111706607544554, ((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 2))(l_753.xy)).yxyxxxxx))).s2655111102670011))).s79f0)).wxzyywzzyzxxzxyz)).lo, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(252UL, 246UL)), FAKE_DIVERGE(p_1272->global_1_offset, get_global_id(1), 10), ((VECTOR(uint8_t, 16))(0x2CL, 251UL, 0xFCL, 1UL, ((VECTOR(uint8_t, 8))(0x9DL, (l_755.x = l_754), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_756.xxxyyyxx)).s7211137562446025)).hi, ((VECTOR(uint8_t, 4))(255UL, l_757[4][0][1], 0x6FL, 0x03L)).wxwxywyy))).s76)), ((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-9L), (-4L))).yyyyyyyy)).even)).zxzyyzzx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(5L, l_758, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))(0x278EL, ((VECTOR(int16_t, 2))((-9L), (-1L))), 1L)), ((VECTOR(int16_t, 2))((-2L), 1L)).yxyy))).even, ((VECTOR(uint16_t, 4))(0xA7B4L, 0UL, 0x5977L, 0x44CAL)).even))), 0x28911B57L, (-9L), 9L, 1L)).s1257536353216220)).lo))).s66)).odd , l_759[1]) , l_760), 249UL, 255UL, 0xEEL)), (l_761 , 0x85L), ((VECTOR(uint8_t, 2))(252UL)), 255UL)).se, l_762[5][2], 255UL, 1UL, 1UL)), ((VECTOR(uint8_t, 8))(1UL))))).s0263671027716465))).sf) , l_764), ((VECTOR(int32_t, 4))(0x149F929AL)), (-6L))).s0;
                    }
                }
                (*l_697) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x307F7226L, 0x187E314BL, 1L, ((VECTOR(int32_t, 4))(l_766.s294b)), 0x69B0AEF9L, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(l_767.s07e8fc7f13183ebd)).odd, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(l_768.zx)).xxyx, ((VECTOR(int32_t, 16))(l_769.s7733341406642060)).sfcd5))).xyyzyxzxxwwyzyzy, ((VECTOR(int32_t, 4))(1L, (l_692 = (l_689.sa |= l_770[4])), 0x3F85A353L, 0L)).zwxxxywzzwywywxy))).sef8e, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_771.xyyxyxyy)).even, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_772.s8f)), 0x13F7F317L, 0x273BAA60L)).even, ((VECTOR(int32_t, 2))(0x56BC69C2L, 0x06285D95L))))), ((VECTOR(int32_t, 4))(0x64BB9997L, ((VECTOR(int32_t, 2))(0x3960065DL, 0x1D4AF05EL)).hi, 0x46BCFCC0L, 0x5DA8C81FL)), (-1L), 1L)).hi, ((VECTOR(int32_t, 4))(0x2B51FF27L, 1L, 0L, 1L))))).yzywyzyx)).s42)).yyxy))).wzyyxwxw))))).sb128)), ((VECTOR(int32_t, 2))(0x510BAC5EL, 4L)), 0x126F071FL, 0x5ED763FAL)), 0x140D2F2BL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0L, l_773[0], (-1L), 4L)))), 1L, 0x79BA30EFL, (-1L))).hi)).even)).lo, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(l_774.s5427)).zyywwxyyyzwwwywz, ((VECTOR(int32_t, 8))(l_775.sa5f6a49c)).s7161510552175171, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(l_776.xy)), ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(0L, ((VECTOR(int32_t, 2))(l_777.zw)), ((VECTOR(int32_t, 2))(l_778.s23)), 0x45C62FDCL, 0L, 0x0073D671L)).s4250152333243714, ((VECTOR(int32_t, 2))((-6L), 0L)).yxxyyyyyyyyyyyxx))).s01))).xxyyyyxyxyxyxxxy))), ((VECTOR(int32_t, 2))(l_779.yx)).xyyxxyxyxxyyxxyy))).sed, ((VECTOR(int32_t, 2))(1L, 0x1DD83A55L))))), 6L, l_780, ((VECTOR(int32_t, 2))(l_781.s67)), 1L, 0x1035003BL)).even)).x;
                (*l_697) ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(l_782.yxxwwywzxxwwwxyy)), ((VECTOR(int32_t, 8))(0x388B0276L, ((VECTOR(int32_t, 4))(l_783[2], 0x6CC82748L, 0x6C1C7CB7L, (-2L))), 0x4150CF63L, 0L, 8L)).s0551447644447061))).sb3, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_784.sfd72)))).zxzyywwz)).s71))), 0x6E6E620EL, 0x7292452AL)).w, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(l_785.s8454bcfe)).s17, ((VECTOR(uint16_t, 16))(l_786.s3074722653161207)).sa2))))), ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x261ACD88L, 6L)), 0x20B9C71CL, 0L)).yyyxyzxw, ((VECTOR(int32_t, 2))(l_787.xx)).yyyyxxyx))), ((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, (-2L))))), 1L, l_788, 1L, 0x13B46378L, 1L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_789.sf54b849c)))).s5633417351412606)).sd758)).yxwwxwxw))).s75, ((VECTOR(int32_t, 4))(l_790.xyxx)).even))), 0L)).y;
            }
            else
            { /* block id: 298 */
                uint8_t l_791 = 249UL;
                int32_t l_794[7][2][3] = {{{(-9L),1L,(-2L)},{(-9L),1L,(-2L)}},{{(-9L),1L,(-2L)},{(-9L),1L,(-2L)}},{{(-9L),1L,(-2L)},{(-9L),1L,(-2L)}},{{(-9L),1L,(-2L)},{(-9L),1L,(-2L)}},{{(-9L),1L,(-2L)},{(-9L),1L,(-2L)}},{{(-9L),1L,(-2L)},{(-9L),1L,(-2L)}},{{(-9L),1L,(-2L)},{(-9L),1L,(-2L)}}};
                int i, j, k;
                l_791++;
                l_689.s7 ^= l_794[4][1][1];
            }
            unsigned int result = 0;
            int l_677_i0, l_677_i1;
            for (l_677_i0 = 0; l_677_i0 < 6; l_677_i0++) {
                for (l_677_i1 = 0; l_677_i1 < 10; l_677_i1++) {
                    result += l_677[l_677_i0][l_677_i1];
                }
            }
            result += l_678;
            result += l_679;
            result += l_680;
            result += l_681;
            result += l_682.y;
            result += l_682.x;
            result += l_685;
            result += l_686;
            result += l_687.y;
            result += l_687.x;
            result += l_688.y;
            result += l_688.x;
            result += l_689.sf;
            result += l_689.se;
            result += l_689.sd;
            result += l_689.sc;
            result += l_689.sb;
            result += l_689.sa;
            result += l_689.s9;
            result += l_689.s8;
            result += l_689.s7;
            result += l_689.s6;
            result += l_689.s5;
            result += l_689.s4;
            result += l_689.s3;
            result += l_689.s2;
            result += l_689.s1;
            result += l_689.s0;
            result += l_690.y;
            result += l_690.x;
            result += l_691;
            result += l_692;
            result += l_693;
            int l_694_i0;
            for (l_694_i0 = 0; l_694_i0 < 1; l_694_i0++) {
                result += l_694[l_694_i0];
            }
            atomic_add(&p_1272->l_special_values[26], result);
        }
        else
        { /* block id: 302 */
            (1 + 1);
        }
        return l_795;
    }
    else
    { /* block id: 306 */
        return &p_1272->g_139;
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_1272->g_203 p_1272->g_408 p_1272->g_110 p_1272->g_60 p_1272->g_84 p_1272->g_293 p_1272->g_399 p_1272->g_80 p_1272->g_540 p_1272->g_541 p_1272->g_79 p_1272->g_40 p_1272->g_39 p_1272->g_337 p_1272->g_58 p_1272->g_comm_values p_1272->g_159
 * writes: p_1272->g_40 p_1272->g_399 p_1272->g_549 p_1272->g_80 p_1272->g_79 p_1272->g_612 p_1272->g_110 p_1272->g_160
 */
int32_t  func_32(int16_t  p_33, uint64_t * p_34, int8_t  p_35, struct S1 * p_1272)
{ /* block id: 229 */
    uint32_t *l_561 = &p_1272->g_549;
    int32_t l_568 = 0x1F9D918BL;
    int8_t l_573 = 7L;
    int8_t l_574 = 0x27L;
    int32_t *l_575 = &p_1272->g_399;
    int64_t *l_576 = (void*)0;
    int64_t *l_577 = (void*)0;
    int64_t *l_578 = (void*)0;
    int64_t l_600 = 0x65B347665C5FBD0BL;
    int16_t l_608 = 0x1908L;
    if (((safe_rshift_func_uint8_t_u_s(246UL, ((l_568 = (((*l_575) = (safe_sub_func_int32_t_s_s(((((((safe_lshift_func_int16_t_s_u((((l_561 != (void*)0) == (((-8L) | (p_1272->g_203 , (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u(((l_568 && ((*p_34) = (l_568 , (p_1272->g_408.x ^ ((((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s(l_568, p_1272->g_203)), p_1272->g_110[0])) == p_33) || l_573) && 0x6C31872D47193AA5L))))) > 246UL), 0x7774ECF9L)) , p_35), l_573)), p_35)))) && p_1272->g_60.x)) >= p_1272->g_84), 4)) || l_574) , 9UL) >= l_568) , 0xDA78L) ^ l_574), 2L))) & 0L)) <= (-7L)))) == p_35))
    { /* block id: 233 */
        VECTOR(int64_t, 4) l_605 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-1L)), (-1L));
        uint8_t *l_609 = (void*)0;
        uint8_t *l_610 = &p_1272->g_79[4];
        uint8_t *l_611 = (void*)0;
        int64_t *l_613 = (void*)0;
        int64_t *l_614 = &l_600;
        int32_t l_615 = 1L;
        int i;
        (*l_575) = (p_33 <= ((safe_sub_func_int64_t_s_s(((9L | (((0x6BA7D6B8L <= (safe_unary_minus_func_int16_t_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u(((l_615 = ((*p_1272->g_39) = (safe_sub_func_int16_t_s_s(((p_1272->g_110[0] = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 8))(((*l_614) = (safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((p_1272->g_612 = ((p_33 & ((*l_610) &= (((safe_rshift_func_uint8_t_u_u((l_600 , ((p_1272->g_80[3][0][2] &= ((+(0xD0CBDC186C0376D9L ^ 18446744073709551615UL)) == (safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s((((*l_561) = (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_605.wz)).xyyx)).y , (((+(safe_add_func_int8_t_s_s(l_608, 0x35L))) && p_35) == p_1272->g_293.x))) <= (*l_575)), l_605.w)), 0x661D80A2477C5AD4L)))) >= p_33)), 3)) , (*p_1272->g_540)) != 0x71L))) | (*p_34))), 0)), 4)), 0x541529E0573DE586L))), ((VECTOR(int64_t, 2))(1L)), p_35, (*l_575), l_605.z, 9L, (-8L))).s37, ((VECTOR(int64_t, 2))(0x74B4F1781BFF25EBL)), ((VECTOR(int64_t, 2))(0x1402E375F6F67DF1L))))).yxxx)).x) | (*p_34)), l_605.x)))) != 0x65FDA9F823F7436CL), p_1272->g_337[5][2][1])) , p_1272->g_58.y) , l_605.x), 0x5A0DDBA5L)), p_1272->g_comm_values[p_1272->tid])), p_33))))) <= 6L) >= (-1L))) == 0xF7EDL), (-4L))) & 0x734A3BFBL));
        return p_35;
    }
    else
    { /* block id: 244 */
        (*p_1272->g_159) = &l_568;
    }
    return (*l_575);
}


/* ------------------------------------------ */
/* 
 * reads : p_1272->g_51 p_1272->g_52 p_1272->g_58 p_1272->g_60 p_1272->g_40 p_1272->g_79 p_1272->g_80 p_1272->g_84 p_1272->g_97 p_1272->g_94 p_1272->g_110 p_1272->g_139 p_1272->g_98 p_1272->g_159 p_1272->g_203 p_1272->g_91 p_1272->g_comm_values p_1272->g_399 p_1272->g_408 p_1272->g_410 p_1272->g_422 p_1272->g_423 p_1272->g_539 p_1272->g_293 p_1272->g_549 p_1272->l_comm_values p_1272->g_550
 * writes: p_1272->g_40 p_1272->g_79 p_1272->g_80 p_1272->g_84 p_1272->g_94 p_1272->g_126 p_1272->g_139 p_1272->g_110 p_1272->g_160 p_1272->g_91 p_1272->g_58 p_1272->g_293 p_1272->g_422 p_1272->g_97 p_1272->g_51 p_1272->g_549
 */
union U0  func_42(uint64_t  p_43, struct S1 * p_1272)
{ /* block id: 8 */
    uint16_t l_48 = 0x8F49L;
    int32_t l_49 = (-1L);
    VECTOR(int8_t, 16) l_50 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x25L), 0x25L), 0x25L, 0L, 0x25L, (VECTOR(int8_t, 2))(0L, 0x25L), (VECTOR(int8_t, 2))(0L, 0x25L), 0L, 0x25L, 0L, 0x25L);
    VECTOR(int8_t, 2) l_55 = (VECTOR(int8_t, 2))(0x22L, 1L);
    VECTOR(int64_t, 2) l_59 = (VECTOR(int64_t, 2))(4L, (-10L));
    uint64_t *l_69 = &p_1272->g_40;
    uint64_t **l_68 = &l_69;
    int32_t *l_398 = &p_1272->g_399;
    int32_t **l_397 = &l_398;
    int32_t ***l_400 = &l_397;
    int8_t *l_538 = (void*)0;
    int8_t **l_537[5];
    uint8_t l_547 = 0x44L;
    uint32_t *l_548[9][10] = {{&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549},{&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549},{&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549},{&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549},{&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549},{&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549},{&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549},{&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549},{&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549,&p_1272->g_549}};
    int i, j;
    for (i = 0; i < 5; i++)
        l_537[i] = &l_538;
    (*p_1272->g_423) = (func_44(l_48, (((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))(0x55L, ((VECTOR(int8_t, 2))(1L, 0x78L)), 0L)), ((VECTOR(int8_t, 2))((-2L), (-1L))).yyyy))).hi, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(5L, l_49, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_50.sa1)))).yyxxxxxxyyxyxxyy))))).even, ((VECTOR(int8_t, 4))(p_1272->g_51.sa3c3)).zxwyyywz, ((VECTOR(int8_t, 2))(0L, (-1L))).xxyyxxxx))).hi)), 8L, 0x62L)).s34))))).xyxyyxyy, ((VECTOR(int8_t, 4))(4L, ((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(p_1272->g_52.xxxyxxxxxyyyxyxx)).s3f)).lo == (safe_rshift_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), 4))) >= GROUP_DIVERGE(2, 1)), (-1L), 6L)).yxzwxzxx))).s6607214102141612, ((VECTOR(int8_t, 4))(l_55.yxyx)).xyyywzxwzxywzxxz))).s8 <= (safe_lshift_func_uint16_t_u_u((((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 16))(p_1272->g_58.ywzxywyzxxxxyyxw)).s8b7c, ((VECTOR(int64_t, 16))(l_59.yyxyxxyxxxyxxxyy)).sc796))).odd, ((VECTOR(int64_t, 8))(p_1272->g_60.yyyxxyxx)).s11, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 16))(0L, 0x202B236EDAE8E356L, 5L, 0L, ((-1L) | (((safe_lshift_func_int16_t_s_s(func_65(l_68, l_59.y, p_1272), 3)) ^ (((*l_400) = l_397) == p_1272->g_159)) , p_1272->g_79[2])), 9L, ((VECTOR(int64_t, 2))(0x73E8637718B7A595L)), ((VECTOR(int64_t, 4))(0x4D970CB769CC3C14L)), (***l_400), (***l_400), 1L, 2L)).odd, ((VECTOR(int64_t, 8))((-9L)))))).hi, ((VECTOR(int64_t, 4))(0L))))), 1L, 0x0965A6F82BD5820EL, 0x53DA042791AE0E9EL, (-1L))), 0L, ((VECTOR(int64_t, 2))(1L)), p_43, 1L, p_43, 4L, 0x13D7B2C9D11ACFE8L)).s9d))).lo , (**l_397)), 13))), p_1272->g_203, p_1272) , &l_69);
    if ((atomic_inc(&p_1272->l_atomic_input[94]) == 6))
    { /* block id: 168 */
        int32_t l_424 = 0x6EE126B1L;
        union U0 l_532 = {1L};/* VOLATILE GLOBAL l_532 */
        int32_t *l_533 = (void*)0;
        int32_t *l_534 = &l_424;
        int32_t *l_535 = &l_424;
        int32_t *l_536 = &l_424;
        for (l_424 = (-8); (l_424 == (-21)); --l_424)
        { /* block id: 171 */
            int32_t l_428 = (-4L);
            int32_t *l_427 = &l_428;
            int32_t *l_429[4][9][7] = {{{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428}},{{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428}},{{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428}},{{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,(void*)0,&l_428,&l_428,&l_428,&l_428,&l_428}}};
            uint16_t l_430 = 0xECF6L;
            uint64_t l_431 = 5UL;
            VECTOR(int64_t, 16) l_432 = (VECTOR(int64_t, 16))(0x2B89483BFCE706B6L, (VECTOR(int64_t, 4))(0x2B89483BFCE706B6L, (VECTOR(int64_t, 2))(0x2B89483BFCE706B6L, 0x2C022E5A9F17F60AL), 0x2C022E5A9F17F60AL), 0x2C022E5A9F17F60AL, 0x2B89483BFCE706B6L, 0x2C022E5A9F17F60AL, (VECTOR(int64_t, 2))(0x2B89483BFCE706B6L, 0x2C022E5A9F17F60AL), (VECTOR(int64_t, 2))(0x2B89483BFCE706B6L, 0x2C022E5A9F17F60AL), 0x2B89483BFCE706B6L, 0x2C022E5A9F17F60AL, 0x2B89483BFCE706B6L, 0x2C022E5A9F17F60AL);
            VECTOR(int64_t, 4) l_433 = (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0x2CD0FF8C5E6A300CL), 0x2CD0FF8C5E6A300CL);
            VECTOR(int64_t, 4) l_434 = (VECTOR(int64_t, 4))(0x6D125DB383F4DC86L, (VECTOR(int64_t, 2))(0x6D125DB383F4DC86L, 0x5E5BD73ED2B4FD69L), 0x5E5BD73ED2B4FD69L);
            int16_t l_435 = 0x77CCL;
            uint64_t l_436 = 5UL;
            uint16_t l_437 = 65535UL;
            uint32_t l_438[6][5][7] = {{{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL}},{{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL}},{{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL}},{{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL}},{{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL}},{{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL},{4294967288UL,4294967295UL,0UL,0UL,4UL,4294967295UL,4294967295UL}}};
            int64_t l_439 = 0x420A3100D9AD3249L;
            VECTOR(uint16_t, 4) l_440 = (VECTOR(uint16_t, 4))(0xF792L, (VECTOR(uint16_t, 2))(0xF792L, 0xD288L), 0xD288L);
            VECTOR(uint16_t, 2) l_441 = (VECTOR(uint16_t, 2))(9UL, 65526UL);
            VECTOR(uint16_t, 4) l_442 = (VECTOR(uint16_t, 4))(0xC801L, (VECTOR(uint16_t, 2))(0xC801L, 1UL), 1UL);
            VECTOR(uint16_t, 2) l_443 = (VECTOR(uint16_t, 2))(8UL, 1UL);
            VECTOR(uint16_t, 8) l_444 = (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0xF53FL), 0xF53FL), 0xF53FL, 2UL, 0xF53FL);
            int64_t l_445 = 5L;
            VECTOR(uint16_t, 2) l_446 = (VECTOR(uint16_t, 2))(3UL, 4UL);
            VECTOR(uint8_t, 16) l_447 = (VECTOR(uint8_t, 16))(0x63L, (VECTOR(uint8_t, 4))(0x63L, (VECTOR(uint8_t, 2))(0x63L, 0x48L), 0x48L), 0x48L, 0x63L, 0x48L, (VECTOR(uint8_t, 2))(0x63L, 0x48L), (VECTOR(uint8_t, 2))(0x63L, 0x48L), 0x63L, 0x48L, 0x63L, 0x48L);
            VECTOR(uint16_t, 2) l_448 = (VECTOR(uint16_t, 2))(0xB91FL, 1UL);
            VECTOR(uint16_t, 8) l_449 = (VECTOR(uint16_t, 8))(0x72C9L, (VECTOR(uint16_t, 4))(0x72C9L, (VECTOR(uint16_t, 2))(0x72C9L, 0UL), 0UL), 0UL, 0x72C9L, 0UL);
            int64_t l_450 = 0x06F564DADF54893FL;
            uint8_t l_451 = 8UL;
            VECTOR(uint16_t, 8) l_454 = (VECTOR(uint16_t, 8))(0x96A9L, (VECTOR(uint16_t, 4))(0x96A9L, (VECTOR(uint16_t, 2))(0x96A9L, 0x33B2L), 0x33B2L), 0x33B2L, 0x96A9L, 0x33B2L);
            VECTOR(int8_t, 8) l_455 = (VECTOR(int8_t, 8))(0x16L, (VECTOR(int8_t, 4))(0x16L, (VECTOR(int8_t, 2))(0x16L, 0x71L), 0x71L), 0x71L, 0x16L, 0x71L);
            int8_t l_456[7];
            int8_t l_457 = 0x49L;
            uint32_t l_458 = 2UL;
            uint64_t l_459[2];
            int32_t l_460 = 1L;
            int64_t l_461 = 2L;
            int16_t l_462 = (-1L);
            VECTOR(int32_t, 8) l_463 = (VECTOR(int32_t, 8))(0x3355AE17L, (VECTOR(int32_t, 4))(0x3355AE17L, (VECTOR(int32_t, 2))(0x3355AE17L, 4L), 4L), 4L, 0x3355AE17L, 4L);
            int64_t l_464 = 0x48BF81D0E2BF8747L;
            uint64_t l_465 = 18446744073709551610UL;
            uint64_t l_466 = 0x9E4CE6AB363ECAF7L;
            int32_t l_467 = 3L;
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_456[i] = 0x69L;
            for (i = 0; i < 2; i++)
                l_459[i] = 0x76F1219227DC3925L;
            l_429[2][7][5] = l_427;
            l_431 = (l_430 = 1L);
            l_467 = (((l_464 &= (((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 4))(l_432.scd37)).ywwxxwywyzxxyyyx, ((VECTOR(int64_t, 16))(l_433.xwywyzzzwxzwwzzz)), ((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 2))(0x08FD666DD0E0FFEDL, 9L)).yxxxyyyyxyyyyxxy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_434.xzzxwzxyyzwwyzzz)))))))))).sa , ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(0UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(4294967287UL, ((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 4))(0x76EBL, (((l_436 = l_435) , 0xDC1D63B0C1AF16ECL) , l_437), 0xFA33L, 0x3C99L)).wwwxwyzywwzwxyxz, ((VECTOR(uint16_t, 8))(((l_439 ^= l_438[0][3][3]) , FAKE_DIVERGE(p_1272->group_2_offset, get_group_id(2), 10)), 65535UL, 65529UL, 1UL, ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_440.xyww)).xyyxxywy)).s52)).xyyx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_441.yxyxyxyy)).s2, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_442.zz)).xxxyxyxyyyyyyxxy)).sa0)))).yyyxyxxxyxxxyxyx)).s3877)).even)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(l_443.xyxxxyxyyyxxyyyy)).s6, ((VECTOR(uint16_t, 4))(l_444.s0557)), 0UL, 0xD43AL, 0x9E83L)), 0x24BBL, 0x4855L, l_445, 65535UL, 0UL)).s7d9f))), ((VECTOR(uint16_t, 16))(l_446.xyxyyyyyyxxxxxyx)).se3fd, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0UL, 246UL)).yyyyxxyyxxyxxxyy)).hi, ((VECTOR(uint8_t, 2))(l_447.s59)).xyxyyxxy))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 8))(l_448.yxyyyxxx)).odd, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_449.s74751064)).s26)))))), 0x98CCL, 1UL)).yyxxxwxz, ((VECTOR(uint16_t, 16))(0UL, l_450, (--l_451), 0x6962L, ((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0x5157L, 0UL)).yxyyyyyy)), ((VECTOR(uint16_t, 16))(l_454.s3330247372634171)).hi))), ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 2))(65535UL, 0x7432L)).yxyy, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 2))(1UL, 0x13L)).yxyx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 16))(0xC4L, 3UL, 0xA6L, 0x6FL, 0x46L, 248UL, 0x20L, ((((VECTOR(int8_t, 16))(l_455.s7427751641575655)).s7 , l_456[2]) , l_457), l_458, 255UL, GROUP_DIVERGE(2, 1), l_459[1], ((VECTOR(uint8_t, 4))(0xCCL)))).lo, ((VECTOR(uint8_t, 8))(251UL)), ((VECTOR(uint8_t, 8))(255UL))))).s7462433202112762)).sc2c9))).yxwxwxwzzwxxxwwx, ((VECTOR(uint8_t, 16))(0UL))))).s4263)).wwxywwzxwywyyxyw)).s83)).yxxxxxyx, (uint16_t)65533UL))).s26)), l_460, l_461, l_462, 65533UL, 1UL, 65526UL)).odd, ((VECTOR(uint16_t, 4))(1UL))))))).hi))), ((VECTOR(uint16_t, 8))(1UL))))).s60)).yyxx, ((VECTOR(uint16_t, 4))(65535UL))))).even)).yxxx))))).yxxzwzzz, ((VECTOR(uint16_t, 8))(65527UL))))), ((VECTOR(uint16_t, 8))(0UL))))).s6366200410341726)).s2475))))))).s5624177013115162))).s4, 0x7C86767FL, ((VECTOR(uint32_t, 8))(0xE6EECF25L)), 0UL, 0x0ADA9EB4L, l_463.s0, 1UL, 0xA7EC6EE8L)).s0984)).odd)).xxyy)), 0x71683842L, 1UL, 0xCBAE7ED7L)).s7362207053741465)).s0)) , l_465) , l_466);
        }
        for (l_424 = (-23); (l_424 == 0); ++l_424)
        { /* block id: 183 */
            int32_t l_470 = 1L;
            for (l_470 = 18; (l_470 >= 22); l_470 = safe_add_func_uint32_t_u_u(l_470, 3))
            { /* block id: 186 */
                union U0 l_474[5] = {{1L},{1L},{1L},{1L},{1L}};
                union U0 *l_473 = &l_474[3];
                int32_t l_476 = 1L;
                int32_t *l_475 = &l_476;
                VECTOR(int32_t, 4) l_477 = (VECTOR(int32_t, 4))(0x0FB2D226L, (VECTOR(int32_t, 2))(0x0FB2D226L, (-1L)), (-1L));
                VECTOR(int32_t, 2) l_478 = (VECTOR(int32_t, 2))(0x2EEA107BL, 0L);
                VECTOR(int32_t, 4) l_479 = (VECTOR(int32_t, 4))(0x323E8E01L, (VECTOR(int32_t, 2))(0x323E8E01L, 0L), 0L);
                uint16_t l_480 = 0x2C69L;
                int32_t l_481 = 0x50C5F6C1L;
                uint16_t l_482 = 0x85C6L;
                VECTOR(int32_t, 2) l_483 = (VECTOR(int32_t, 2))((-1L), 0L);
                uint8_t l_484 = 0xC8L;
                VECTOR(int32_t, 2) l_485 = (VECTOR(int32_t, 2))((-1L), 6L);
                int16_t l_486 = (-3L);
                VECTOR(int32_t, 2) l_487 = (VECTOR(int32_t, 2))(0x3BD55907L, 0x10BD93AAL);
                VECTOR(int16_t, 16) l_488 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int16_t, 2))((-1L), 1L), (VECTOR(int16_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
                VECTOR(uint16_t, 4) l_489 = (VECTOR(uint16_t, 4))(0xF9B0L, (VECTOR(uint16_t, 2))(0xF9B0L, 0xBF56L), 0xBF56L);
                VECTOR(uint16_t, 4) l_490 = (VECTOR(uint16_t, 4))(0xD26AL, (VECTOR(uint16_t, 2))(0xD26AL, 0x6467L), 0x6467L);
                VECTOR(uint16_t, 8) l_491 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 1UL), 1UL), 1UL, 65526UL, 1UL);
                VECTOR(uint16_t, 8) l_492 = (VECTOR(uint16_t, 8))(0x23E0L, (VECTOR(uint16_t, 4))(0x23E0L, (VECTOR(uint16_t, 2))(0x23E0L, 0xA486L), 0xA486L), 0xA486L, 0x23E0L, 0xA486L);
                VECTOR(uint16_t, 16) l_493 = (VECTOR(uint16_t, 16))(0x2460L, (VECTOR(uint16_t, 4))(0x2460L, (VECTOR(uint16_t, 2))(0x2460L, 0x50E4L), 0x50E4L), 0x50E4L, 0x2460L, 0x50E4L, (VECTOR(uint16_t, 2))(0x2460L, 0x50E4L), (VECTOR(uint16_t, 2))(0x2460L, 0x50E4L), 0x2460L, 0x50E4L, 0x2460L, 0x50E4L);
                uint32_t l_494 = 0xFFB0B362L;
                VECTOR(int32_t, 16) l_495 = (VECTOR(int32_t, 16))(0x7B1C3F01L, (VECTOR(int32_t, 4))(0x7B1C3F01L, (VECTOR(int32_t, 2))(0x7B1C3F01L, 0L), 0L), 0L, 0x7B1C3F01L, 0L, (VECTOR(int32_t, 2))(0x7B1C3F01L, 0L), (VECTOR(int32_t, 2))(0x7B1C3F01L, 0L), 0x7B1C3F01L, 0L, 0x7B1C3F01L, 0L);
                VECTOR(int32_t, 8) l_496 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x0E58193AL), 0x0E58193AL), 0x0E58193AL, 6L, 0x0E58193AL);
                uint32_t l_497 = 0x3FFB6C96L;
                int16_t l_498 = 1L;
                VECTOR(int16_t, 4) l_499 = (VECTOR(int16_t, 4))(0x7C25L, (VECTOR(int16_t, 2))(0x7C25L, 0x4543L), 0x4543L);
                VECTOR(uint16_t, 8) l_500 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x6CAAL), 0x6CAAL), 0x6CAAL, 65535UL, 0x6CAAL);
                uint32_t l_501 = 0xDB40ABE1L;
                int32_t l_502 = (-4L);
                int i;
                l_473 = (void*)0;
                l_475 = l_475;
                l_502 = ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(l_477.zzyy)), (int32_t)0L, (int32_t)((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(l_478.xyyx)).wyzwxxyxyyywxxwz, (int32_t)(l_480 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_479.xw)).yxyy)).z)))).s52, ((VECTOR(int32_t, 2))(0x6DD6B6D4L, (-2L)))))).xyxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0L, 0x397D64D1L, (l_481 , l_482), ((VECTOR(int32_t, 2))(l_483.xx)), l_484, 0x7BDB95EFL, 6L)).s6, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), 0L)).yxxy)), ((VECTOR(int32_t, 2))(l_485.xy)).yyyy))), 0x203C4133L, 0L, 6L)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_486 , 0x1B0CA743L), ((VECTOR(int32_t, 8))(l_487.xxxxxxxy)).s6, 0x0117C742L, 0x10D4B8B4L)).xwyzzzzy)).s4237273511165107, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(6L, (-4L))), 0x21CD3BECL, 0L)).xxwxzxzzzzxzxxyx, ((VECTOR(int32_t, 16))(0x022965BFL, ((VECTOR(int32_t, 8))(0x57375974L, 0x41360A8FL, ((VECTOR(int32_t, 2))(0x5B80A985L, 1L)), ((VECTOR(int32_t, 2))(0x5C1259D0L, 0x159CCA3BL)), 0L, 0x45311353L)), (-1L), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 16))(l_488.sb2b764fd860dd310)).odd))).s41, ((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 8))(l_489.xyzywzxw)), ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 8))(l_490.wzywzyxx)).lo))).zxzzwyyx, ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(l_491.s5034)).wwzxyzxw, ((VECTOR(uint16_t, 8))(l_492.s14271162))))).s4204573404624543, ((VECTOR(uint16_t, 4))(65535UL, ((VECTOR(uint16_t, 8))(l_493.sb97d2860)).s6, 9UL, 0xFCF2L)).yxyzyxyzxyxzyxzy))).lo))).s00))), (l_494 = 0x03A771A0L), ((VECTOR(int32_t, 2))(l_495.scd)), 0x78137657L))))).s70c7))))).x))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(0x39DC8054L, ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(l_496.s4101)).hi, ((VECTOR(int32_t, 2))(0x64AEF8A8L, 0x74AB8160L))))).xxyyxyyy, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 2))(0x560214C1L, 2L)).xyxxxyyyyyyyyxyx, (int32_t)(l_498 = l_497)))).lo))).s7, (-1L), (-1L))), ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_499.zwzzwzzw)))).s45, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_500.s40)), 65535UL, 0xB449L, l_501, 65534UL, ((VECTOR(uint16_t, 8))(65535UL)), 1UL, 0xD2ABL)).sc6))), ((VECTOR(int32_t, 2))(0x390E3A9CL)), ((VECTOR(int32_t, 2))(0x1D9A97CFL))))).yyxx))).hi, ((VECTOR(int32_t, 2))((-8L)))))).xxxyyyxxxxxyyyxy)))).s8cbd))).z;
            }
            for (l_470 = 0; (l_470 != 9); l_470 = safe_add_func_int32_t_s_s(l_470, 3))
            { /* block id: 196 */
                int32_t l_505 = 0x0A52F676L;
                int32_t *l_517 = &l_505;
                for (l_505 = (-21); (l_505 >= 22); l_505 = safe_add_func_int8_t_s_s(l_505, 7))
                { /* block id: 199 */
                    uint32_t l_508 = 9UL;
                    int8_t l_511 = (-3L);
                    int8_t *l_510 = &l_511;
                    int8_t **l_509 = &l_510;
                    int64_t l_512[4];
                    int32_t l_513 = 0x6DDAA5C4L;
                    uint8_t l_514 = 255UL;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_512[i] = (-4L);
                    l_509 = (l_508 , l_509);
                    --l_514;
                }
                l_517 = (void*)0;
            }
            for (l_470 = (-23); (l_470 != 29); l_470 = safe_add_func_uint8_t_u_u(l_470, 5))
            { /* block id: 207 */
                uint32_t l_520[8];
                uint8_t l_521 = 0xCEL;
                int i;
                for (i = 0; i < 8; i++)
                    l_520[i] = 0x67C93CD0L;
                l_520[1] |= (-1L);
                l_521 = 0x3B513B81L;
            }
            for (l_470 = 24; (l_470 == 25); l_470 = safe_add_func_uint32_t_u_u(l_470, 8))
            { /* block id: 213 */
                VECTOR(int32_t, 2) l_524 = (VECTOR(int32_t, 2))(0x1A832CBFL, 0x58636D3EL);
                uint32_t l_525[5];
                int64_t l_526 = 1L;
                int8_t l_527[1];
                int32_t l_528 = 0L;
                VECTOR(uint32_t, 4) l_529 = (VECTOR(uint32_t, 4))(0x97CED318L, (VECTOR(uint32_t, 2))(0x97CED318L, 0x5CFCBD75L), 0x5CFCBD75L);
                int i;
                for (i = 0; i < 5; i++)
                    l_525[i] = 0x816E68AFL;
                for (i = 0; i < 1; i++)
                    l_527[i] = (-1L);
                l_526 ^= (l_525[3] = ((VECTOR(int32_t, 8))(l_524.yyyxyyyx)).s2);
                --l_529.w;
            }
        }
        l_534 = (l_532 , (l_533 = (void*)0));
        l_536 = l_535;
        unsigned int result = 0;
        result += l_424;
        result += l_532.f0;
        result += l_532.f1;
        result += l_532.f2;
        atomic_add(&p_1272->l_special_values[94], result);
    }
    else
    { /* block id: 222 */
        (1 + 1);
    }
    p_1272->g_91.w ^= ((l_537[3] == p_1272->g_539[0]) != ((***l_400) < ((((void*)0 != l_538) & (safe_unary_minus_func_uint32_t_u((p_1272->g_549 |= ((safe_mod_func_uint32_t_u_u((**l_397), 1UL)) || (safe_lshift_func_int16_t_s_u(((!((VECTOR(uint8_t, 4))((l_547 <= ((p_1272->g_51.sd = (&p_1272->g_94 != &p_1272->g_94)) || 1UL)), (**l_397), 0UL, 0x3BL)).y) , p_1272->g_293.y), 12))))))) , p_1272->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1272->tid, 4))])));
    return p_1272->g_550;
}


/* ------------------------------------------ */
/* 
 * reads : p_1272->g_97 p_1272->g_98 p_1272->g_40 p_1272->g_408 p_1272->g_410 p_1272->g_84 p_1272->g_422
 * writes: p_1272->g_94 p_1272->g_79 p_1272->g_422
 */
uint16_t  func_44(int8_t  p_45, uint32_t  p_46, int32_t  p_47, struct S1 * p_1272)
{ /* block id: 158 */
    int64_t l_407 = 0x22E481E56AA47EA0L;
    VECTOR(uint32_t, 16) l_409 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x17A73779L), 0x17A73779L), 0x17A73779L, 1UL, 0x17A73779L, (VECTOR(uint32_t, 2))(1UL, 0x17A73779L), (VECTOR(uint32_t, 2))(1UL, 0x17A73779L), 1UL, 0x17A73779L, 1UL, 0x17A73779L);
    int32_t *l_415 = (void*)0;
    int8_t *l_418 = &p_1272->g_94;
    uint8_t *l_419 = &p_1272->g_79[1];
    uint32_t l_420 = 0xB65B423DL;
    uint64_t *l_421 = &p_1272->g_422;
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1272->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 4)), permutations[(safe_mod_func_uint32_t_u_u((((*l_421) &= (safe_div_func_uint64_t_u_u(((**p_1272->g_97) ^ ((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((l_407 >= ((((((VECTOR(uint32_t, 8))(1UL, 0x923C077DL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(p_1272->g_408.xy)))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_409.sd5330c97)).hi)))).s6 , 2L) , p_1272->g_410[0]) , (!(((safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), 0xFEF6L)), (l_415 != l_415))) ^ GROUP_DIVERGE(0, 1)) == (safe_lshift_func_int8_t_s_u(((*l_418) = 4L), ((*l_419) = ((((l_418 != (void*)0) , p_45) , l_418) != l_418))))))) > l_407)), FAKE_DIVERGE(p_1272->local_2_offset, get_local_id(2), 10))) & p_1272->g_84), 0x5D7AL)) != l_420)), FAKE_DIVERGE(p_1272->group_2_offset, get_group_id(2), 10)))) , p_45), 10))][(safe_mod_func_uint32_t_u_u(p_1272->tid, 4))]));
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_1272->g_40 p_1272->g_79 p_1272->g_80 p_1272->g_84 p_1272->g_58 p_1272->g_97 p_1272->g_94 p_1272->g_110 p_1272->g_51 p_1272->g_139 p_1272->g_98 p_1272->g_159 p_1272->g_60 p_1272->g_203 p_1272->g_91 p_1272->g_comm_values
 * writes: p_1272->g_40 p_1272->g_79 p_1272->g_80 p_1272->g_84 p_1272->g_94 p_1272->g_126 p_1272->g_139 p_1272->g_110 p_1272->g_160 p_1272->g_91 p_1272->g_58 p_1272->g_293
 */
int16_t  func_65(uint64_t ** p_66, int64_t  p_67, struct S1 * p_1272)
{ /* block id: 9 */
    int64_t l_74[3][2] = {{0x2D792BF48DF11712L,2L},{0x2D792BF48DF11712L,2L},{0x2D792BF48DF11712L,2L}};
    VECTOR(uint8_t, 2) l_81 = (VECTOR(uint8_t, 2))(0xC0L, 255UL);
    int32_t l_92 = 9L;
    int32_t l_103[7][5][7] = {{{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)}},{{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)}},{{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)}},{{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)}},{{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)}},{{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)}},{{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)},{0x62F553DEL,0x62F553DEL,(-10L),0x4D93D51DL,0L,0x4D93D51DL,(-10L)}}};
    uint32_t l_113 = 0UL;
    uint64_t **l_172 = &p_1272->g_126;
    uint64_t ***l_171[8];
    VECTOR(int32_t, 2) l_296 = (VECTOR(int32_t, 2))(0L, 0x6A8B6C98L);
    int32_t l_325 = 0x79BE1641L;
    uint64_t l_329 = 18446744073709551615UL;
    VECTOR(int8_t, 16) l_338 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L), (VECTOR(int8_t, 2))(0L, (-5L)), (VECTOR(int8_t, 2))(0L, (-5L)), 0L, (-5L), 0L, (-5L));
    VECTOR(int8_t, 2) l_340 = (VECTOR(int8_t, 2))(7L, 0L);
    uint32_t l_391 = 0x292C7715L;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_171[i] = &l_172;
    for (p_67 = 23; (p_67 == 28); p_67 = safe_add_func_uint64_t_u_u(p_67, 6))
    { /* block id: 12 */
        VECTOR(uint8_t, 16) l_82 = (VECTOR(uint8_t, 16))(0x0FL, (VECTOR(uint8_t, 4))(0x0FL, (VECTOR(uint8_t, 2))(0x0FL, 0x9AL), 0x9AL), 0x9AL, 0x0FL, 0x9AL, (VECTOR(uint8_t, 2))(0x0FL, 0x9AL), (VECTOR(uint8_t, 2))(0x0FL, 0x9AL), 0x0FL, 0x9AL, 0x0FL, 0x9AL);
        VECTOR(uint16_t, 8) l_88 = (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0x15A6L), 0x15A6L), 0x15A6L, 2UL, 0x15A6L);
        int32_t *l_95 = (void*)0;
        int32_t l_106 = (-9L);
        int32_t l_107 = (-9L);
        int32_t l_109 = 0x5D9846ACL;
        VECTOR(int32_t, 8) l_111 = (VECTOR(int32_t, 8))(0x22687B70L, (VECTOR(int32_t, 4))(0x22687B70L, (VECTOR(int32_t, 2))(0x22687B70L, 0x6E185A6AL), 0x6E185A6AL), 0x6E185A6AL, 0x22687B70L, 0x6E185A6AL);
        uint32_t l_131[9][10][2];
        VECTOR(uint8_t, 4) l_199 = (VECTOR(uint8_t, 4))(0xD1L, (VECTOR(uint8_t, 2))(0xD1L, 1UL), 1UL);
        VECTOR(uint8_t, 4) l_200 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL);
        int32_t l_212 = 0x47FB3402L;
        VECTOR(int8_t, 2) l_232 = (VECTOR(int8_t, 2))(0L, 0x0AL);
        uint32_t **l_235 = (void*)0;
        uint64_t l_249[3][1];
        uint32_t l_252 = 0x5B26937EL;
        uint64_t *l_260 = (void*)0;
        VECTOR(int32_t, 8) l_263 = (VECTOR(int32_t, 8))(0x3A711357L, (VECTOR(int32_t, 4))(0x3A711357L, (VECTOR(int32_t, 2))(0x3A711357L, (-1L)), (-1L)), (-1L), 0x3A711357L, (-1L));
        int64_t l_270 = (-2L);
        VECTOR(int8_t, 4) l_339 = (VECTOR(int8_t, 4))(0x1BL, (VECTOR(int8_t, 2))(0x1BL, 1L), 1L);
        int i, j, k;
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 10; j++)
            {
                for (k = 0; k < 2; k++)
                    l_131[i][j][k] = 0x27A455B6L;
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_249[i][j] = 7UL;
        }
        for (p_1272->g_40 = 0; (p_1272->g_40 > 42); p_1272->g_40 = safe_add_func_int32_t_s_s(p_1272->g_40, 2))
        { /* block id: 15 */
            int32_t l_75 = 0x5B2349D5L;
            uint8_t *l_78 = &p_1272->g_79[2];
            uint64_t *l_83 = &p_1272->g_84;
            VECTOR(int16_t, 4) l_87 = (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0L), 0L);
            int8_t *l_93 = &p_1272->g_94;
            VECTOR(int32_t, 4) l_102 = (VECTOR(int32_t, 4))(0x1D697DB5L, (VECTOR(int32_t, 2))(0x1D697DB5L, 0x31BBB9F2L), 0x31BBB9F2L);
            int8_t l_112 = 0x3CL;
            VECTOR(uint16_t, 4) l_134 = (VECTOR(uint16_t, 4))(0xA0F4L, (VECTOR(uint16_t, 2))(0xA0F4L, 0x1989L), 0x1989L);
            int32_t l_184[4][5] = {{(-1L),0x36964168L,(-1L),(-1L),0x36964168L},{(-1L),0x36964168L,(-1L),(-1L),0x36964168L},{(-1L),0x36964168L,(-1L),(-1L),0x36964168L},{(-1L),0x36964168L,(-1L),(-1L),0x36964168L}};
            VECTOR(int16_t, 2) l_185 = (VECTOR(int16_t, 2))((-1L), 0x2F36L);
            VECTOR(uint32_t, 2) l_194 = (VECTOR(uint32_t, 2))(8UL, 4294967293UL);
            VECTOR(int32_t, 8) l_197 = (VECTOR(int32_t, 8))(0x578C674DL, (VECTOR(int32_t, 4))(0x578C674DL, (VECTOR(int32_t, 2))(0x578C674DL, (-1L)), (-1L)), (-1L), 0x578C674DL, (-1L));
            int32_t l_214 = 1L;
            int32_t l_328 = 0x1C26EA1EL;
            uint16_t *l_336 = (void*)0;
            uint8_t l_379 = 0xBBL;
            uint32_t *l_392[3][4];
            int32_t l_396 = 7L;
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                    l_392[i][j] = &l_131[4][5][1];
            }
            if ((((l_74[2][0] < (l_75 && ((*l_93) = ((((((safe_add_func_uint8_t_u_u((p_1272->g_80[2][0][6] ^= ((*l_78) ^= p_67)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 8))(l_81.yxxyyyxy)).s2624427207663307, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_82.sca86)).hi)))).xxyxyxyy)))).s2200623003253111))).sd2b5)).x)) <= l_74[2][0]) ^ ((--(*l_83)) , l_74[2][0])) ^ l_74[2][0]) && (l_92 ^= (((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_87.zx)))).yyyyyxxy)).lo)).zyxxxyxxxwzyxzyz)).s6 > ((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_88.s67)))).xxxxyxxxyxyxyyyx, (uint16_t)(((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1272->g_91.wzyx)).zyyyxxyx)))).s1, l_82.s1)) > l_74[2][0]) < (-4L)), (uint16_t)GROUP_DIVERGE(2, 1)))).s5d, ((VECTOR(uint16_t, 2))(0x1A8FL))))).xyyyyyyy, ((VECTOR(uint16_t, 8))(0xC6DFL))))).s6) || p_1272->g_58.z) && p_67))) , 9L)))) || l_81.x) > 0x7AL))
            { /* block id: 21 */
                int32_t **l_96 = &l_95;
                int16_t l_101 = (-1L);
                int32_t l_104 = (-9L);
                int32_t l_105 = 8L;
                int32_t l_108[1];
                uint64_t *l_127 = (void*)0;
                uint16_t l_180 = 0x8453L;
                int8_t l_188 = 1L;
                VECTOR(uint32_t, 16) l_193 = (VECTOR(uint32_t, 16))(9UL, (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 4294967295UL), 4294967295UL), 4294967295UL, 9UL, 4294967295UL, (VECTOR(uint32_t, 2))(9UL, 4294967295UL), (VECTOR(uint32_t, 2))(9UL, 4294967295UL), 9UL, 4294967295UL, 9UL, 4294967295UL);
                int16_t *l_198 = &l_101;
                uint32_t *l_201[8] = {&l_113,&l_113,&l_113,&l_113,&l_113,&l_113,&l_113,&l_113};
                int16_t l_213 = 0L;
                int32_t l_215 = 0L;
                uint64_t l_216[9][3] = {{0x6CE1C01A14A0E6AFL,0x19587D9670A18DE7L,18446744073709551615UL},{0x6CE1C01A14A0E6AFL,0x19587D9670A18DE7L,18446744073709551615UL},{0x6CE1C01A14A0E6AFL,0x19587D9670A18DE7L,18446744073709551615UL},{0x6CE1C01A14A0E6AFL,0x19587D9670A18DE7L,18446744073709551615UL},{0x6CE1C01A14A0E6AFL,0x19587D9670A18DE7L,18446744073709551615UL},{0x6CE1C01A14A0E6AFL,0x19587D9670A18DE7L,18446744073709551615UL},{0x6CE1C01A14A0E6AFL,0x19587D9670A18DE7L,18446744073709551615UL},{0x6CE1C01A14A0E6AFL,0x19587D9670A18DE7L,18446744073709551615UL},{0x6CE1C01A14A0E6AFL,0x19587D9670A18DE7L,18446744073709551615UL}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_108[i] = 5L;
                (*l_96) = l_95;
                if (((void*)0 != p_1272->g_97))
                { /* block id: 23 */
                    int32_t *l_99 = &l_92;
                    int32_t *l_100[8][6] = {{&l_75,&l_75,(void*)0,(void*)0,&l_75,(void*)0},{&l_75,&l_75,(void*)0,(void*)0,&l_75,(void*)0},{&l_75,&l_75,(void*)0,(void*)0,&l_75,(void*)0},{&l_75,&l_75,(void*)0,(void*)0,&l_75,(void*)0},{&l_75,&l_75,(void*)0,(void*)0,&l_75,(void*)0},{&l_75,&l_75,(void*)0,(void*)0,&l_75,(void*)0},{&l_75,&l_75,(void*)0,(void*)0,&l_75,(void*)0},{&l_75,&l_75,(void*)0,(void*)0,&l_75,(void*)0}};
                    VECTOR(uint32_t, 8) l_118 = (VECTOR(uint32_t, 8))(0x5CBF6C0BL, (VECTOR(uint32_t, 4))(0x5CBF6C0BL, (VECTOR(uint32_t, 2))(0x5CBF6C0BL, 0x7C546D17L), 0x7C546D17L), 0x7C546D17L, 0x5CBF6C0BL, 0x7C546D17L);
                    int i, j;
                    l_113--;
                    for (l_107 = 0; (l_107 <= 17); ++l_107)
                    { /* block id: 27 */
                        int8_t *l_123 = &l_112;
                        uint64_t **l_125[3];
                        int32_t *l_128 = &l_109;
                        int32_t l_129 = 0x515C62BBL;
                        int16_t l_130 = 0x1115L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_125[i] = &l_83;
                        l_106 |= (((((!((1L & ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_118.s5065)).hi)).yyyx)).y) , p_67)) < (safe_div_func_int64_t_s_s((((safe_mod_func_uint8_t_u_u((((*l_93) &= p_67) | ((*l_123) = p_1272->g_110[0])), (safe_unary_minus_func_uint8_t_u(((p_1272->g_126 = &p_1272->g_84) == l_127))))) , (p_67 , p_1272->g_51.s5)) >= (&l_75 == l_128)), 18446744073709551609UL))) != 0x6AL) <= 1L) & p_67);
                        ++l_131[3][2][1];
                        if (p_1272->g_51.sb)
                            break;
                    }
                }
                else
                { /* block id: 35 */
                    VECTOR(uint8_t, 4) l_135 = (VECTOR(uint8_t, 4))(0x52L, (VECTOR(uint8_t, 2))(0x52L, 9UL), 9UL);
                    uint32_t *l_138[3][2] = {{&l_131[3][2][1],&l_131[3][2][1]},{&l_131[3][2][1],&l_131[3][2][1]},{&l_131[3][2][1],&l_131[3][2][1]}};
                    uint8_t *l_142 = (void*)0;
                    uint8_t *l_143 = (void*)0;
                    uint8_t *l_144 = (void*)0;
                    uint8_t *l_145 = (void*)0;
                    uint8_t *l_146 = (void*)0;
                    uint8_t *l_147 = (void*)0;
                    uint8_t *l_148 = (void*)0;
                    uint8_t *l_149[1][8][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                    int32_t l_150 = 0L;
                    uint64_t **l_151 = (void*)0;
                    int16_t *l_158 = &l_101;
                    uint64_t **l_162 = (void*)0;
                    uint64_t ***l_161 = &l_162;
                    VECTOR(uint8_t, 4) l_177 = (VECTOR(uint8_t, 4))(0x32L, (VECTOR(uint8_t, 2))(0x32L, 0UL), 0UL);
                    uint32_t **l_202 = &l_138[1][0];
                    int32_t l_210 = 1L;
                    int32_t l_211[3][1][9] = {{{0x76A2D43CL,0x6014EA22L,(-1L),(-4L),(-1L),0x6014EA22L,0x76A2D43CL,1L,4L}},{{0x76A2D43CL,0x6014EA22L,(-1L),(-4L),(-1L),0x6014EA22L,0x76A2D43CL,1L,4L}},{{0x76A2D43CL,0x6014EA22L,(-1L),(-4L),(-1L),0x6014EA22L,0x76A2D43CL,1L,4L}}};
                    int i, j, k;
                    if ((l_103[4][0][5] ^= (((l_102.z = ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(l_134.wxxxxzxw)).hi, ((VECTOR(uint16_t, 4))((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_135.yy)).xxxxyyyxxxxyyyyx)).sb > p_1272->g_79[4]), ((VECTOR(uint16_t, 2))(7UL, 0UL)), 2UL))))).wwwxzwwz)).s5) & p_1272->g_79[2]) | (safe_mul_func_uint8_t_u_u((l_150 = (((6L == 0x72C2B522L) >= (p_1272->g_139--)) & FAKE_DIVERGE(p_1272->group_2_offset, get_group_id(2), 10))), (l_151 == ((*l_161) = ((((&l_95 == (((safe_sub_func_int16_t_s_s((((safe_mod_func_int64_t_s_s((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))((safe_rshift_func_uint8_t_u_s(((((*l_158) = p_1272->g_comm_values[p_1272->tid]) < (p_1272->g_80[2][0][6] && (*p_1272->g_98))) || 0x65L), 5)), p_67, 0x220BC5C362547E73L, 8L, p_1272->g_79[4], ((VECTOR(int64_t, 2))(0x7702E61DC0C74532L)), 0x0D4AEB905F6503A9L)).odd)).x , p_67), l_81.y)) && (*p_1272->g_98)) >= (**p_1272->g_97)), p_67)) & 0x7EE75AF26B099175L) , p_1272->g_159)) , p_67) == p_67) , l_151))))))))
                    { /* block id: 42 */
                        uint8_t l_178 = 0x4FL;
                        int64_t *l_179 = &p_1272->g_110[0];
                        int32_t *l_181 = &l_105;
                        (*l_181) ^= ((safe_sub_func_int64_t_s_s(((*l_179) = (p_1272->g_80[2][0][6] && (l_75 |= ((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x5D6DL, (((((safe_div_func_uint16_t_u_u(1UL, p_67)) ^ ((((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((-10L), ((p_1272->g_167 != l_171[3]) < (safe_add_func_int16_t_s_s(p_1272->g_79[1], (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))((safe_sub_func_uint8_t_u_u(255UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 4))(6UL, p_1272->g_60.y, 4UL, 255UL)), ((VECTOR(uint8_t, 16))(l_177.xwzwyxwxzzzzwzww)).s78ee))).yxxzxzwz)).s7)), l_178, (-7L), 0x1AL, 0x65L, 0x55L, 0L, 0x1AL)))).s1 == p_67)))), 3L, 0L)).yxxyxxxxxzzwyzwz)).s8e14, ((VECTOR(int32_t, 4))(0x7A07D2E3L))))).hi)), ((VECTOR(int32_t, 2))(0x0ACB36B8L))))).even >= 4294967295UL) ^ 1L)) & 18446744073709551608UL) >= FAKE_DIVERGE(p_1272->global_1_offset, get_global_id(1), 10)) || p_67), 1L, 0x3EF9L)).wxyxzzxz)).s64)).xxyyyxxyyxyxxxxy, ((VECTOR(int16_t, 16))(0x7CFBL))))), ((VECTOR(int16_t, 16))(0x6C91L))))).even))).s3))), l_180)) != p_1272->g_51.s7);
                        (*p_1272->g_159) = (*l_96);
                        (*l_96) = &l_150;
                        return p_1272->g_60.y;
                    }
                    else
                    { /* block id: 49 */
                        int32_t *l_186 = (void*)0;
                        int32_t *l_187[7][7] = {{(void*)0,&l_104,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_104,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_104,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_104,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_104,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_104,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_104,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int i, j;
                        l_92 &= (l_150 = (p_1272->g_91.x = (l_105 = (safe_mul_func_uint16_t_u_u(l_184[2][1], ((VECTOR(int16_t, 16))(l_185.yxyxyyxxxxyyxxyy)).sb)))));
                        (*l_96) = &l_92;
                        (*l_95) ^= (l_188 , 0x41B2535BL);
                        if ((*l_95))
                            continue;
                    }
                    if (((safe_lshift_func_uint16_t_u_u(((p_1272->g_139 |= ((+((safe_mul_func_uint16_t_u_u(((l_103[4][0][5] = ((((1L <= ((((((*p_1272->g_97) != (void*)0) , &l_83) != (void*)0) , (((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 2))(0L, 0L)).xxxy, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 16))(l_193.s8bf7227bf970419d)).even, ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 16))(l_194.yyyyxyyyxxxxyyyy)).s13, (uint32_t)(((safe_lshift_func_uint8_t_u_s(((((VECTOR(int32_t, 8))(l_197.s42111622)).s6 , &p_1272->g_80[3][0][0]) != (l_198 = &p_1272->g_80[3][2][4])), 0)) >= (l_75 = (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0UL, ((VECTOR(uint8_t, 2))(l_199.yx)), 255UL)))).even))), 0x0BL, 0xE0L)).even, ((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(l_200.xwwz)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(255UL, 254UL)), 255UL, 1UL)).hi, ((VECTOR(uint8_t, 2))(0x8CL, 0x25L)), ((VECTOR(uint8_t, 8))(0xDBL, 1UL, (((((VECTOR(int32_t, 2))(0x08362FC7L, 0x6704019FL)).lo , l_201[7]) != ((*l_202) = l_201[7])) == l_177.z), ((VECTOR(uint8_t, 2))(0UL)), 3UL, 0UL, 247UL)).s05))), ((VECTOR(uint8_t, 4))(0UL)), l_150, 0UL, p_1272->g_203, ((VECTOR(uint8_t, 4))(0xB4L)), 0x86L, 253UL, 0xB6L)).s6e6b))))).odd)).xyxxyxxyxxxxxxxy)).s66)).yxyyxxyyxyyyxyyx, ((VECTOR(uint8_t, 16))(0x28L)), ((VECTOR(uint8_t, 16))(251UL))))).s9e))).xxyxyyyxyyxyxyyx)).se == FAKE_DIVERGE(p_1272->global_1_offset, get_global_id(1), 10)))) , p_67), (uint32_t)l_194.x))).xyxxyyyy))))).even))), ((VECTOR(int64_t, 4))(0x400EDCAE9CAECE9FL))))).z , (void*)0)) != (void*)0)) <= l_81.x) , (void*)0) == (void*)0)) < l_177.x), p_1272->g_110[0])) > 0xFBL)) <= p_1272->g_58.y)) == 0x5A99FCA559DDD172L), 4)) & 1UL))
                    { /* block id: 63 */
                        uint16_t l_206 = 6UL;
                        (**l_96) = (safe_sub_func_uint64_t_u_u(l_206, l_135.w));
                        if (l_206)
                            continue;
                        if (l_112)
                            break;
                    }
                    else
                    { /* block id: 67 */
                        int32_t *l_207 = &l_103[6][3][5];
                        int32_t *l_208 = (void*)0;
                        int32_t *l_209[8][8] = {{&l_108[0],&l_105,(void*)0,(void*)0,&l_106,(void*)0,(void*)0,&l_105},{&l_108[0],&l_105,(void*)0,(void*)0,&l_106,(void*)0,(void*)0,&l_105},{&l_108[0],&l_105,(void*)0,(void*)0,&l_106,(void*)0,(void*)0,&l_105},{&l_108[0],&l_105,(void*)0,(void*)0,&l_106,(void*)0,(void*)0,&l_105},{&l_108[0],&l_105,(void*)0,(void*)0,&l_106,(void*)0,(void*)0,&l_105},{&l_108[0],&l_105,(void*)0,(void*)0,&l_106,(void*)0,(void*)0,&l_105},{&l_108[0],&l_105,(void*)0,(void*)0,&l_106,(void*)0,(void*)0,&l_105},{&l_108[0],&l_105,(void*)0,(void*)0,&l_106,(void*)0,(void*)0,&l_105}};
                        int32_t *l_219 = (void*)0;
                        int i, j;
                        (*l_95) = (&p_1272->g_84 == (void*)0);
                        --l_216[0][2];
                        (*p_1272->g_159) = l_219;
                    }
                }
            }
            else
            { /* block id: 73 */
                uint32_t *l_224 = &l_131[7][4][0];
                int32_t l_248[2];
                VECTOR(uint16_t, 8) l_255 = (VECTOR(uint16_t, 8))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0x832AL), 0x832AL), 0x832AL, 7UL, 0x832AL);
                VECTOR(int64_t, 16) l_295 = (VECTOR(int64_t, 16))(6L, (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 0L), 0L), 0L, 6L, 0L, (VECTOR(int64_t, 2))(6L, 0L), (VECTOR(int64_t, 2))(6L, 0L), 6L, 0L, 6L, 0L);
                uint64_t ***l_311 = &l_172;
                int64_t l_326 = (-10L);
                uint32_t *l_394 = &l_252;
                int i;
                for (i = 0; i < 2; i++)
                    l_248[i] = 0x4A65F817L;
                for (l_75 = 0; (l_75 < (-25)); --l_75)
                { /* block id: 76 */
                    uint32_t **l_225 = &l_224;
                    int16_t *l_236 = &p_1272->g_80[4][2][0];
                    int32_t l_239 = 0x2C78C2EEL;
                    int32_t *l_240 = &l_214;
                    int32_t *l_241 = &l_212;
                    int32_t *l_242 = (void*)0;
                    int32_t *l_243 = &l_103[1][4][6];
                    int32_t *l_244 = &l_109;
                    int32_t *l_245 = &l_212;
                    int32_t *l_246[3];
                    int32_t l_247 = (-1L);
                    int i;
                    for (i = 0; i < 3; i++)
                        l_246[i] = (void*)0;
                    l_103[4][0][5] = 0x34C694B7L;
                    l_111.s7 = (((safe_mul_func_int16_t_s_s(((*l_236) &= ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((((*l_225) = l_224) != &l_113), ((p_67 < ((+(safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_232.xxyx)).yzxyyzxy)).s5, 0x29L, 8L, (-10L)))))).z, 6)), 1))) > (safe_div_func_int16_t_s_s(p_1272->g_139, 0x30A5L)))) && (&l_224 == l_235)), (-1L), (-5L))).zwxxyyzz)).s1), 0x5689L)) == ((((safe_mul_func_int16_t_s_s((-9L), 0L)) , l_239) != p_67) , p_1272->g_58.x)) | p_1272->g_110[0]);
                    l_249[2][0]++;
                    l_252++;
                }
                if (((4L | (l_75 = ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 2))(l_255.s01)).yyxx, (uint16_t)0x3A94L, (uint16_t)((safe_lshift_func_uint16_t_u_s(l_185.y, 12)) && (safe_sub_func_uint64_t_u_u(((void*)0 == l_260), (safe_rshift_func_uint16_t_u_s((((VECTOR(int32_t, 4))(l_263.s4234)).w , l_248[0]), 13)))))))).zyzzzwxy)).s6)) <= (((safe_mod_func_uint16_t_u_u((((~p_67) == (p_1272->g_60.x ^ (safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s(l_102.x, l_270)), p_1272->g_110[0])))) || p_67), p_1272->g_58.x)) , FAKE_DIVERGE(p_1272->global_0_offset, get_global_id(0), 10)) > 0xCA62L)))
                { /* block id: 85 */
                    VECTOR(int64_t, 16) l_281 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x5C47853A623CBA5BL), 0x5C47853A623CBA5BL), 0x5C47853A623CBA5BL, 1L, 0x5C47853A623CBA5BL, (VECTOR(int64_t, 2))(1L, 0x5C47853A623CBA5BL), (VECTOR(int64_t, 2))(1L, 0x5C47853A623CBA5BL), 1L, 0x5C47853A623CBA5BL, 1L, 0x5C47853A623CBA5BL);
                    int8_t *l_294[7];
                    int32_t l_307[2][1][10] = {{{0x031C1602L,0x031C1602L,0x353F60F2L,0x48437A68L,0x53EFC141L,0x48437A68L,0x353F60F2L,0x031C1602L,0x031C1602L,0x353F60F2L}},{{0x031C1602L,0x031C1602L,0x353F60F2L,0x48437A68L,0x53EFC141L,0x48437A68L,0x353F60F2L,0x031C1602L,0x031C1602L,0x353F60F2L}}};
                    VECTOR(int8_t, 2) l_308 = (VECTOR(int8_t, 2))(0x5BL, 1L);
                    int64_t l_327[2][10] = {{0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL},{0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL,0x6D27BCE3AB0F523EL}};
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_294[i] = &l_112;
                    for (l_112 = 0; (l_112 >= 17); l_112++)
                    { /* block id: 88 */
                        int32_t l_297 = 1L;
                        uint16_t *l_306 = (void*)0;
                        int16_t *l_314 = &p_1272->g_80[6][0][2];
                        int64_t *l_315 = (void*)0;
                        int64_t *l_316[5][2] = {{&p_1272->g_110[0],&p_1272->g_110[0]},{&p_1272->g_110[0],&p_1272->g_110[0]},{&p_1272->g_110[0],&p_1272->g_110[0]},{&p_1272->g_110[0],&p_1272->g_110[0]},{&p_1272->g_110[0],&p_1272->g_110[0]}};
                        int32_t *l_317[3][4][5] = {{{&l_214,&l_214,&l_214,&l_214,&l_214},{&l_214,&l_214,&l_214,&l_214,&l_214},{&l_214,&l_214,&l_214,&l_214,&l_214},{&l_214,&l_214,&l_214,&l_214,&l_214}},{{&l_214,&l_214,&l_214,&l_214,&l_214},{&l_214,&l_214,&l_214,&l_214,&l_214},{&l_214,&l_214,&l_214,&l_214,&l_214},{&l_214,&l_214,&l_214,&l_214,&l_214}},{{&l_214,&l_214,&l_214,&l_214,&l_214},{&l_214,&l_214,&l_214,&l_214,&l_214},{&l_214,&l_214,&l_214,&l_214,&l_214},{&l_214,&l_214,&l_214,&l_214,&l_214}}};
                        int i, j, k;
                        l_248[0] ^= (l_75 |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))((p_1272->g_58.z > ((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(l_281.sb667)).hi))).even, p_67)), (safe_add_func_uint16_t_u_u(0x0DBDL, (((p_67 || (safe_sub_func_int16_t_s_s(((((((safe_unary_minus_func_int32_t_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((p_66 == &p_1272->g_98), 10)), (safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 4))(p_1272->g_293.yyxy)).z, ((void*)0 != l_294[6]))))))) < ((VECTOR(int64_t, 8))(l_295.s465c546c)).s4) , (((VECTOR(int32_t, 8))(l_296.xxxyxxxx)).s5 , 0x1C69L)) != p_1272->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1272->tid, 4))]) & 0x00L) > (-7L)), p_1272->g_comm_values[p_1272->tid]))) > 0x13CF23E1934669E6L) , l_297))))), p_67)), (-3L))) , (**p_66))), (-8L), 0x52DCL, (-2L), ((VECTOR(int16_t, 2))((-3L))), (-1L), (-6L))).s75)), l_197.s3, 0L, p_1272->g_110[0], 0x54D5L, 9L, ((VECTOR(int16_t, 8))((-1L))), 0x4DAFL)).odd, ((VECTOR(uint16_t, 8))(0x9DCCL))))).s24)), ((VECTOR(int32_t, 2))((-1L)))))).yxyyxxyxxxxxyyxy)).s68)).even);
                        l_317[0][2][1] = ((((p_1272->g_58.x = (safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((l_81.y ^ (l_307[1][0][7] = ((safe_mod_func_int16_t_s_s(l_297, p_67)) != (safe_sub_func_int64_t_s_s(l_281.s1, (&p_1272->g_168 != (void*)0)))))) > (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_308.yy)), 9L, 0x1DL)).x , (((*l_78) = ((safe_mul_func_uint8_t_u_u(1UL, (l_311 != ((safe_mul_func_int16_t_s_s(((*l_314) ^= ((p_1272->g_91.z && p_67) <= 65530UL)), (-7L))) , (void*)0)))) > l_102.y)) == l_308.y))), p_1272->g_91.z)) >= l_255.s5), GROUP_DIVERGE(0, 1)))) != p_67) ^ 7UL) , l_317[0][2][3]);
                    }
                    for (p_1272->g_94 = 0; (p_1272->g_94 >= 21); p_1272->g_94++)
                    { /* block id: 99 */
                        int32_t *l_320 = (void*)0;
                        int32_t *l_321 = (void*)0;
                        int32_t *l_322 = &l_107;
                        int32_t *l_323 = &l_103[3][3][2];
                        int32_t *l_324[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_324[i] = &l_75;
                        l_263.s4 = (0x3CD0CEE6L <= 0UL);
                        --l_329;
                        return p_1272->g_comm_values[p_1272->tid];
                    }
                }
                else
                { /* block id: 104 */
                    uint32_t l_343 = 4294967295UL;
                    l_103[4][0][5] ^= ((safe_mod_func_uint32_t_u_u((((p_1272->g_79[5] == ((*l_93) ^= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 8))((((void*)0 == l_336) >= (p_1272->g_337[5][2][1] = 65531UL)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_338.sb9)).xyyy)), 0x05L, 1L, 1L)), ((VECTOR(int8_t, 4))(0x34L, p_67, (-3L), 0x56L)).zyxyxwzx))).s4176171670752120, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 2))(0x14L, 0x04L)).xxxxxyyy))).s4075576312557210, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_339.xz)).yyxx)))))).wyzzxxyzwxxwwxyx))).lo, ((VECTOR(int8_t, 16))(l_340.yxyyxxxyxxxyxyyx)).lo))), (int8_t)p_1272->g_337[5][2][1], (int8_t)0L))).s14)), ((safe_mod_func_int16_t_s_s(((l_325 & p_1272->g_80[2][0][6]) < p_1272->g_51.s4), p_1272->g_84)) || GROUP_DIVERGE(1, 1)), 1L, p_67, 0L, 0L, p_1272->g_58.w, 0x6EL, p_67, p_67, 0L, ((VECTOR(int8_t, 2))(0x39L)), 1L, 1L))))).odd)).s6)) , l_343) && 0L), p_67)) >= l_92);
                }
                if ((atomic_inc(&p_1272->l_atomic_input[32]) == 7))
                { /* block id: 110 */
                    uint64_t l_344 = 0xB51A79EF8D67716BL;
                    VECTOR(int32_t, 8) l_374 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x17B992FFL), 0x17B992FFL), 0x17B992FFL, (-9L), 0x17B992FFL);
                    int8_t l_375 = 0L;
                    int i;
                    if (l_344)
                    { /* block id: 111 */
                        int32_t l_345 = 0x6857B20CL;
                        uint64_t l_346 = 0xB83A7A2216A7398BL;
                        int32_t l_347[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
                        int i;
                        l_346 |= l_345;
                        l_347[1] = 0L;
                    }
                    else
                    { /* block id: 114 */
                        int8_t l_348 = 0x67L;
                        uint64_t l_349[6][2][8] = {{{0x5B26D6A9EB457653L,0x26FF2E95A49290F9L,0xB6160E2454DDDBC5L,0x2C3F5467F9B9FBF0L,1UL,0x2C3F5467F9B9FBF0L,0xB6160E2454DDDBC5L,0x26FF2E95A49290F9L},{0x5B26D6A9EB457653L,0x26FF2E95A49290F9L,0xB6160E2454DDDBC5L,0x2C3F5467F9B9FBF0L,1UL,0x2C3F5467F9B9FBF0L,0xB6160E2454DDDBC5L,0x26FF2E95A49290F9L}},{{0x5B26D6A9EB457653L,0x26FF2E95A49290F9L,0xB6160E2454DDDBC5L,0x2C3F5467F9B9FBF0L,1UL,0x2C3F5467F9B9FBF0L,0xB6160E2454DDDBC5L,0x26FF2E95A49290F9L},{0x5B26D6A9EB457653L,0x26FF2E95A49290F9L,0xB6160E2454DDDBC5L,0x2C3F5467F9B9FBF0L,1UL,0x2C3F5467F9B9FBF0L,0xB6160E2454DDDBC5L,0x26FF2E95A49290F9L}},{{0x5B26D6A9EB457653L,0x26FF2E95A49290F9L,0xB6160E2454DDDBC5L,0x2C3F5467F9B9FBF0L,1UL,0x2C3F5467F9B9FBF0L,0xB6160E2454DDDBC5L,0x26FF2E95A49290F9L},{0x5B26D6A9EB457653L,0x26FF2E95A49290F9L,0xB6160E2454DDDBC5L,0x2C3F5467F9B9FBF0L,1UL,0x2C3F5467F9B9FBF0L,0xB6160E2454DDDBC5L,0x26FF2E95A49290F9L}},{{0x5B26D6A9EB457653L,0x26FF2E95A49290F9L,0xB6160E2454DDDBC5L,0x2C3F5467F9B9FBF0L,1UL,0x2C3F5467F9B9FBF0L,0xB6160E2454DDDBC5L,0x26FF2E95A49290F9L},{0x5B26D6A9EB457653L,0x26FF2E95A49290F9L,0xB6160E2454DDDBC5L,0x2C3F5467F9B9FBF0L,1UL,0x2C3F5467F9B9FBF0L,0xB6160E2454DDDBC5L,0x26FF2E95A49290F9L}},{{0x5B26D6A9EB457653L,0x26FF2E95A49290F9L,0xB6160E2454DDDBC5L,0x2C3F5467F9B9FBF0L,1UL,0x2C3F5467F9B9FBF0L,0xB6160E2454DDDBC5L,0x26FF2E95A49290F9L},{0x5B26D6A9EB457653L,0x26FF2E95A49290F9L,0xB6160E2454DDDBC5L,0x2C3F5467F9B9FBF0L,1UL,0x2C3F5467F9B9FBF0L,0xB6160E2454DDDBC5L,0x26FF2E95A49290F9L}},{{0x5B26D6A9EB457653L,0x26FF2E95A49290F9L,0xB6160E2454DDDBC5L,0x2C3F5467F9B9FBF0L,1UL,0x2C3F5467F9B9FBF0L,0xB6160E2454DDDBC5L,0x26FF2E95A49290F9L},{0x5B26D6A9EB457653L,0x26FF2E95A49290F9L,0xB6160E2454DDDBC5L,0x2C3F5467F9B9FBF0L,1UL,0x2C3F5467F9B9FBF0L,0xB6160E2454DDDBC5L,0x26FF2E95A49290F9L}}};
                        uint8_t l_350 = 0UL;
                        uint16_t l_351 = 65535UL;
                        uint64_t l_352 = 18446744073709551613UL;
                        uint16_t l_355 = 0x0C2BL;
                        uint64_t l_356[5][7][7] = {{{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL}},{{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL}},{{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL}},{{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL}},{{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL},{0x93EDB204BF3CB29CL,6UL,18446744073709551613UL,6UL,0x93EDB204BF3CB29CL,0x93EDB204BF3CB29CL,6UL}}};
                        int32_t l_358 = 0x04FAF802L;
                        int32_t *l_357 = &l_358;
                        int32_t *l_359[2][7][10] = {{{&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358},{&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358},{&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358},{&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358},{&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358},{&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358},{&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358}},{{&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358},{&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358},{&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358},{&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358},{&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358},{&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358},{&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358,&l_358}}};
                        int32_t *l_360 = &l_358;
                        int i, j, k;
                        l_351 = (l_350 |= (l_349[2][1][4] ^= l_348));
                        l_352--;
                        l_360 = (l_359[1][0][6] = ((l_355 , l_356[0][4][5]) , l_357));
                    }
                    for (l_344 = 6; (l_344 < 28); l_344 = safe_add_func_int8_t_s_s(l_344, 9))
                    { /* block id: 124 */
                        int64_t l_363 = (-3L);
                        int32_t l_364 = 0x2F449240L;
                        union U0 l_366 = {0x14CA1E85L};/* VOLATILE GLOBAL l_366 */
                        union U0 *l_365 = &l_366;
                        union U0 l_368[7] = {{0x6ADAC044L},{0x772B57E3L},{0x6ADAC044L},{0x6ADAC044L},{0x772B57E3L},{0x6ADAC044L},{0x6ADAC044L}};
                        union U0 *l_367 = &l_368[4];
                        union U0 l_370[8][9] = {{{-2L},{0x0EF949D4L},{0x794EC2F8L},{-4L},{1L},{-2L},{-4L},{0x7DEC612CL},{-4L}},{{-2L},{0x0EF949D4L},{0x794EC2F8L},{-4L},{1L},{-2L},{-4L},{0x7DEC612CL},{-4L}},{{-2L},{0x0EF949D4L},{0x794EC2F8L},{-4L},{1L},{-2L},{-4L},{0x7DEC612CL},{-4L}},{{-2L},{0x0EF949D4L},{0x794EC2F8L},{-4L},{1L},{-2L},{-4L},{0x7DEC612CL},{-4L}},{{-2L},{0x0EF949D4L},{0x794EC2F8L},{-4L},{1L},{-2L},{-4L},{0x7DEC612CL},{-4L}},{{-2L},{0x0EF949D4L},{0x794EC2F8L},{-4L},{1L},{-2L},{-4L},{0x7DEC612CL},{-4L}},{{-2L},{0x0EF949D4L},{0x794EC2F8L},{-4L},{1L},{-2L},{-4L},{0x7DEC612CL},{-4L}},{{-2L},{0x0EF949D4L},{0x794EC2F8L},{-4L},{1L},{-2L},{-4L},{0x7DEC612CL},{-4L}}};
                        union U0 *l_369 = &l_370[5][2];
                        int16_t l_371 = 0x79F7L;
                        uint8_t l_372 = 7UL;
                        uint64_t l_373 = 3UL;
                        int i, j;
                        l_364 = (l_363 = 0x7BA36C1BL);
                        l_369 = (l_367 = l_365);
                        l_373 = (l_372 = l_371);
                    }
                    l_375 &= ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(l_374.s11))))).lo;
                    unsigned int result = 0;
                    result += l_344;
                    result += l_374.s7;
                    result += l_374.s6;
                    result += l_374.s5;
                    result += l_374.s4;
                    result += l_374.s3;
                    result += l_374.s2;
                    result += l_374.s1;
                    result += l_374.s0;
                    result += l_375;
                    atomic_add(&p_1272->l_special_values[32], result);
                }
                else
                { /* block id: 133 */
                    (1 + 1);
                }
                for (l_252 = 3; (l_252 >= 56); ++l_252)
                { /* block id: 138 */
                    int32_t *l_378[7] = {&l_109,&l_248[1],&l_109,&l_109,&l_248[1],&l_109,&l_109};
                    int i;
                    l_379++;
                    for (l_379 = 11; (l_379 >= 23); l_379++)
                    { /* block id: 142 */
                        int64_t l_390 = 3L;
                        uint32_t **l_393 = &l_224;
                        int8_t *l_395 = &l_112;
                        l_214 = (p_1272->g_293.x = (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))((-1L), ((VECTOR(int16_t, 4))(0x7CB3L, (-1L), 0x639BL, 0x0391L)), p_67, 0L, 0x47D8L)), ((((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(p_67, (safe_rshift_func_int8_t_s_s(p_1272->g_203, ((*l_93) ^= ((**p_66) && (!l_390))))))), (FAKE_DIVERGE(p_1272->global_0_offset, get_global_id(0), 10) <= ((((4UL > ((((p_1272->g_293.y & ((*l_395) = (((*l_393) = (l_391 , l_392[0][3])) == l_394))) , p_67) && p_1272->g_293.x) , p_1272->g_51.s5)) && 0x3AL) >= p_1272->g_60.x) > (-1L))))) == p_1272->g_293.y) && p_67) , 0x253EL), 8L, 8L, 0x17E1L, (-1L), l_103[2][3][5], (-1L), 0x228AL)).hi, (int16_t)p_67))).s5222676744576707)).s8 , p_1272->g_110[0]));
                        l_102.w = l_396;
                    }
                    if (p_67)
                        continue;
                }
            }
            l_396 |= p_67;
        }
    }
    return p_67;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[97];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 97; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[97];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 97; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[4];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 4; i++)
            l_comm_values[i] = 1;
    struct S1 c_1273;
    struct S1* p_1272 = &c_1273;
    struct S1 c_1274 = {
        {0xEF4A0426A7609FA8L,18446744073709551615UL,0xEF4A0426A7609FA8L,0xEF4A0426A7609FA8L,18446744073709551615UL,0xEF4A0426A7609FA8L}, // p_1272->g_17
        0x082ADE89B93B3BBBL, // p_1272->g_40
        &p_1272->g_40, // p_1272->g_39
        (VECTOR(int8_t, 16))(0x04L, (VECTOR(int8_t, 4))(0x04L, (VECTOR(int8_t, 2))(0x04L, 9L), 9L), 9L, 0x04L, 9L, (VECTOR(int8_t, 2))(0x04L, 9L), (VECTOR(int8_t, 2))(0x04L, 9L), 0x04L, 9L, 0x04L, 9L), // p_1272->g_51
        (VECTOR(uint32_t, 2))(0UL, 4294967295UL), // p_1272->g_52
        (VECTOR(int64_t, 4))(0x6A37A54743E03EB4L, (VECTOR(int64_t, 2))(0x6A37A54743E03EB4L, 1L), 1L), // p_1272->g_58
        (VECTOR(int64_t, 2))(0x2BB11FE8BE9C2C51L, 0x0F86AEFBDD559FE4L), // p_1272->g_60
        {1UL,1UL,1UL,1UL,1UL,1UL}, // p_1272->g_79
        {{{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L}},{{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L}},{{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L}},{{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L}},{{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L}},{{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L}},{{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L}},{{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L},{0x2FCEL,0L,0x7C65L,7L,1L,0x2264L,(-1L),2L}}}, // p_1272->g_80
        0x1A2B65289450AD34L, // p_1272->g_84
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x09A04A83L), 0x09A04A83L), // p_1272->g_91
        1L, // p_1272->g_94
        &p_1272->g_40, // p_1272->g_98
        &p_1272->g_98, // p_1272->g_97
        {0x5F0F64EF15C959C0L}, // p_1272->g_110
        &p_1272->g_84, // p_1272->g_126
        18446744073709551615UL, // p_1272->g_139
        (void*)0, // p_1272->g_160
        &p_1272->g_160, // p_1272->g_159
        2UL, // p_1272->g_170
        &p_1272->g_170, // p_1272->g_169
        &p_1272->g_169, // p_1272->g_168
        &p_1272->g_168, // p_1272->g_167
        4294967295UL, // p_1272->g_203
        (VECTOR(int32_t, 2))(5L, 0x0192BD44L), // p_1272->g_293
        {{{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL}},{{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL}},{{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL}},{{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL}},{{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL}},{{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL}},{{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL},{0x939D6A1BL,0x939D6A1BL,1UL}}}, // p_1272->g_337
        1L, // p_1272->g_399
        (VECTOR(uint32_t, 2))(0xE44163DDL, 0x646B36B9L), // p_1272->g_408
        {{0x3747141DL},{0x3747141DL},{0x3747141DL},{0x3747141DL},{0x3747141DL},{0x3747141DL},{0x3747141DL},{0x3747141DL},{0x3747141DL},{0x3747141DL}}, // p_1272->g_410
        0x8A68623BAE886F88L, // p_1272->g_422
        &p_1272->g_97, // p_1272->g_423
        0x41L, // p_1272->g_541
        &p_1272->g_541, // p_1272->g_540
        {&p_1272->g_540}, // p_1272->g_539
        1UL, // p_1272->g_549
        {8L}, // p_1272->g_550
        (-3L), // p_1272->g_612
        1L, // p_1272->g_616
        &p_1272->g_399, // p_1272->g_617
        1UL, // p_1272->g_621
        (VECTOR(int8_t, 2))(0L, 0x58L), // p_1272->g_647
        0x683F989BL, // p_1272->g_651
        (-1L), // p_1272->g_653
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x83L), 0x83L), // p_1272->g_664
        {{0x4627FD81L,0x7CC1DF30L,0x4627FD81L,0x4627FD81L,0x7CC1DF30L,0x4627FD81L,0x4627FD81L,0x7CC1DF30L}}, // p_1272->g_803
        0x6AL, // p_1272->g_851
        (VECTOR(uint8_t, 16))(0x59L, (VECTOR(uint8_t, 4))(0x59L, (VECTOR(uint8_t, 2))(0x59L, 248UL), 248UL), 248UL, 0x59L, 248UL, (VECTOR(uint8_t, 2))(0x59L, 248UL), (VECTOR(uint8_t, 2))(0x59L, 248UL), 0x59L, 248UL, 0x59L, 248UL), // p_1272->g_852
        {3L}, // p_1272->g_853
        (VECTOR(int16_t, 16))(0x229AL, (VECTOR(int16_t, 4))(0x229AL, (VECTOR(int16_t, 2))(0x229AL, 0x58C7L), 0x58C7L), 0x58C7L, 0x229AL, 0x58C7L, (VECTOR(int16_t, 2))(0x229AL, 0x58C7L), (VECTOR(int16_t, 2))(0x229AL, 0x58C7L), 0x229AL, 0x58C7L, 0x229AL, 0x58C7L), // p_1272->g_860
        (VECTOR(uint8_t, 2))(1UL, 0x4FL), // p_1272->g_865
        (VECTOR(int64_t, 16))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0x357883D2D412C052L), 0x357883D2D412C052L), 0x357883D2D412C052L, 9L, 0x357883D2D412C052L, (VECTOR(int64_t, 2))(9L, 0x357883D2D412C052L), (VECTOR(int64_t, 2))(9L, 0x357883D2D412C052L), 9L, 0x357883D2D412C052L, 9L, 0x357883D2D412C052L), // p_1272->g_872
        {0x331ECFB4L}, // p_1272->g_931
        (void*)0, // p_1272->g_932
        {0x7A28FB8350CB6F17L,0x7A28FB8350CB6F17L}, // p_1272->g_945
        (VECTOR(uint32_t, 8))(0x69D7824DL, (VECTOR(uint32_t, 4))(0x69D7824DL, (VECTOR(uint32_t, 2))(0x69D7824DL, 4294967295UL), 4294967295UL), 4294967295UL, 0x69D7824DL, 4294967295UL), // p_1272->g_953
        (VECTOR(int32_t, 8))(0x7C16FF34L, (VECTOR(int32_t, 4))(0x7C16FF34L, (VECTOR(int32_t, 2))(0x7C16FF34L, 0x6828737BL), 0x6828737BL), 0x6828737BL, 0x7C16FF34L, 0x6828737BL), // p_1272->g_978
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x3FF8L), 0x3FF8L), // p_1272->g_985
        (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0x8C16L), 0x8C16L), // p_1272->g_986
        (-1L), // p_1272->g_993
        {{0x56B317C0L},{0x56B317C0L},{0x56B317C0L},{0x56B317C0L},{0x56B317C0L},{0x56B317C0L},{0x56B317C0L},{0x56B317C0L},{0x56B317C0L}}, // p_1272->g_1024
        &p_1272->g_80[5][1][1], // p_1272->g_1034
        &p_1272->g_1034, // p_1272->g_1033
        {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}}, // p_1272->g_1042
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint8_t, 2))(1UL, 0UL), (VECTOR(uint8_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL), // p_1272->g_1070
        (VECTOR(uint32_t, 16))(0x1E53D0A6L, (VECTOR(uint32_t, 4))(0x1E53D0A6L, (VECTOR(uint32_t, 2))(0x1E53D0A6L, 4294967295UL), 4294967295UL), 4294967295UL, 0x1E53D0A6L, 4294967295UL, (VECTOR(uint32_t, 2))(0x1E53D0A6L, 4294967295UL), (VECTOR(uint32_t, 2))(0x1E53D0A6L, 4294967295UL), 0x1E53D0A6L, 4294967295UL, 0x1E53D0A6L, 4294967295UL), // p_1272->g_1072
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x6A1AL), 0x6A1AL), 0x6A1AL, 65535UL, 0x6A1AL), // p_1272->g_1077
        (VECTOR(uint8_t, 16))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0xB2L), 0xB2L), 0xB2L, 9UL, 0xB2L, (VECTOR(uint8_t, 2))(9UL, 0xB2L), (VECTOR(uint8_t, 2))(9UL, 0xB2L), 9UL, 0xB2L, 9UL, 0xB2L), // p_1272->g_1096
        &p_1272->g_549, // p_1272->g_1130
        &p_1272->g_1130, // p_1272->g_1129
        (VECTOR(int32_t, 16))(0x34EFE3B2L, (VECTOR(int32_t, 4))(0x34EFE3B2L, (VECTOR(int32_t, 2))(0x34EFE3B2L, 0L), 0L), 0L, 0x34EFE3B2L, 0L, (VECTOR(int32_t, 2))(0x34EFE3B2L, 0L), (VECTOR(int32_t, 2))(0x34EFE3B2L, 0L), 0x34EFE3B2L, 0L, 0x34EFE3B2L, 0L), // p_1272->g_1149
        (VECTOR(uint16_t, 8))(0xF090L, (VECTOR(uint16_t, 4))(0xF090L, (VECTOR(uint16_t, 2))(0xF090L, 0x838DL), 0x838DL), 0x838DL, 0xF090L, 0x838DL), // p_1272->g_1168
        (VECTOR(uint32_t, 2))(0x81D8553DL, 0UL), // p_1272->g_1169
        (VECTOR(int8_t, 2))(1L, 0x3BL), // p_1272->g_1175
        {2L}, // p_1272->g_1181
        &p_1272->g_1181, // p_1272->g_1180
        {0x2F916989L}, // p_1272->g_1187
        0UL, // p_1272->g_1214
        (void*)0, // p_1272->g_1225
        &p_1272->g_1225, // p_1272->g_1224
        (VECTOR(int64_t, 8))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 5L), 5L), 5L, (-2L), 5L), // p_1272->g_1236
        0x58D8L, // p_1272->g_1245
        4294967286UL, // p_1272->g_1264
        0, // p_1272->v_collective
        sequence_input[get_global_id(0)], // p_1272->global_0_offset
        sequence_input[get_global_id(1)], // p_1272->global_1_offset
        sequence_input[get_global_id(2)], // p_1272->global_2_offset
        sequence_input[get_local_id(0)], // p_1272->local_0_offset
        sequence_input[get_local_id(1)], // p_1272->local_1_offset
        sequence_input[get_local_id(2)], // p_1272->local_2_offset
        sequence_input[get_group_id(0)], // p_1272->group_0_offset
        sequence_input[get_group_id(1)], // p_1272->group_1_offset
        sequence_input[get_group_id(2)], // p_1272->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 4)), permutations[0][get_linear_local_id()])), // p_1272->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1273 = c_1274;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1272);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1272->g_17[i], "p_1272->g_17[i]", print_hash_value);

    }
    transparent_crc(p_1272->g_40, "p_1272->g_40", print_hash_value);
    transparent_crc(p_1272->g_51.s0, "p_1272->g_51.s0", print_hash_value);
    transparent_crc(p_1272->g_51.s1, "p_1272->g_51.s1", print_hash_value);
    transparent_crc(p_1272->g_51.s2, "p_1272->g_51.s2", print_hash_value);
    transparent_crc(p_1272->g_51.s3, "p_1272->g_51.s3", print_hash_value);
    transparent_crc(p_1272->g_51.s4, "p_1272->g_51.s4", print_hash_value);
    transparent_crc(p_1272->g_51.s5, "p_1272->g_51.s5", print_hash_value);
    transparent_crc(p_1272->g_51.s6, "p_1272->g_51.s6", print_hash_value);
    transparent_crc(p_1272->g_51.s7, "p_1272->g_51.s7", print_hash_value);
    transparent_crc(p_1272->g_51.s8, "p_1272->g_51.s8", print_hash_value);
    transparent_crc(p_1272->g_51.s9, "p_1272->g_51.s9", print_hash_value);
    transparent_crc(p_1272->g_51.sa, "p_1272->g_51.sa", print_hash_value);
    transparent_crc(p_1272->g_51.sb, "p_1272->g_51.sb", print_hash_value);
    transparent_crc(p_1272->g_51.sc, "p_1272->g_51.sc", print_hash_value);
    transparent_crc(p_1272->g_51.sd, "p_1272->g_51.sd", print_hash_value);
    transparent_crc(p_1272->g_51.se, "p_1272->g_51.se", print_hash_value);
    transparent_crc(p_1272->g_51.sf, "p_1272->g_51.sf", print_hash_value);
    transparent_crc(p_1272->g_52.x, "p_1272->g_52.x", print_hash_value);
    transparent_crc(p_1272->g_52.y, "p_1272->g_52.y", print_hash_value);
    transparent_crc(p_1272->g_58.x, "p_1272->g_58.x", print_hash_value);
    transparent_crc(p_1272->g_58.y, "p_1272->g_58.y", print_hash_value);
    transparent_crc(p_1272->g_58.z, "p_1272->g_58.z", print_hash_value);
    transparent_crc(p_1272->g_58.w, "p_1272->g_58.w", print_hash_value);
    transparent_crc(p_1272->g_60.x, "p_1272->g_60.x", print_hash_value);
    transparent_crc(p_1272->g_60.y, "p_1272->g_60.y", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1272->g_79[i], "p_1272->g_79[i]", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1272->g_80[i][j][k], "p_1272->g_80[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1272->g_84, "p_1272->g_84", print_hash_value);
    transparent_crc(p_1272->g_91.x, "p_1272->g_91.x", print_hash_value);
    transparent_crc(p_1272->g_91.y, "p_1272->g_91.y", print_hash_value);
    transparent_crc(p_1272->g_91.z, "p_1272->g_91.z", print_hash_value);
    transparent_crc(p_1272->g_91.w, "p_1272->g_91.w", print_hash_value);
    transparent_crc(p_1272->g_94, "p_1272->g_94", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1272->g_110[i], "p_1272->g_110[i]", print_hash_value);

    }
    transparent_crc(p_1272->g_139, "p_1272->g_139", print_hash_value);
    transparent_crc(p_1272->g_170, "p_1272->g_170", print_hash_value);
    transparent_crc(p_1272->g_203, "p_1272->g_203", print_hash_value);
    transparent_crc(p_1272->g_293.x, "p_1272->g_293.x", print_hash_value);
    transparent_crc(p_1272->g_293.y, "p_1272->g_293.y", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1272->g_337[i][j][k], "p_1272->g_337[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1272->g_399, "p_1272->g_399", print_hash_value);
    transparent_crc(p_1272->g_408.x, "p_1272->g_408.x", print_hash_value);
    transparent_crc(p_1272->g_408.y, "p_1272->g_408.y", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1272->g_410[i].f0, "p_1272->g_410[i].f0", print_hash_value);

    }
    transparent_crc(p_1272->g_422, "p_1272->g_422", print_hash_value);
    transparent_crc(p_1272->g_541, "p_1272->g_541", print_hash_value);
    transparent_crc(p_1272->g_549, "p_1272->g_549", print_hash_value);
    transparent_crc(p_1272->g_612, "p_1272->g_612", print_hash_value);
    transparent_crc(p_1272->g_616, "p_1272->g_616", print_hash_value);
    transparent_crc(p_1272->g_621, "p_1272->g_621", print_hash_value);
    transparent_crc(p_1272->g_647.x, "p_1272->g_647.x", print_hash_value);
    transparent_crc(p_1272->g_647.y, "p_1272->g_647.y", print_hash_value);
    transparent_crc(p_1272->g_651, "p_1272->g_651", print_hash_value);
    transparent_crc(p_1272->g_653, "p_1272->g_653", print_hash_value);
    transparent_crc(p_1272->g_664.x, "p_1272->g_664.x", print_hash_value);
    transparent_crc(p_1272->g_664.y, "p_1272->g_664.y", print_hash_value);
    transparent_crc(p_1272->g_664.z, "p_1272->g_664.z", print_hash_value);
    transparent_crc(p_1272->g_664.w, "p_1272->g_664.w", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1272->g_803[i][j], "p_1272->g_803[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1272->g_851, "p_1272->g_851", print_hash_value);
    transparent_crc(p_1272->g_852.s0, "p_1272->g_852.s0", print_hash_value);
    transparent_crc(p_1272->g_852.s1, "p_1272->g_852.s1", print_hash_value);
    transparent_crc(p_1272->g_852.s2, "p_1272->g_852.s2", print_hash_value);
    transparent_crc(p_1272->g_852.s3, "p_1272->g_852.s3", print_hash_value);
    transparent_crc(p_1272->g_852.s4, "p_1272->g_852.s4", print_hash_value);
    transparent_crc(p_1272->g_852.s5, "p_1272->g_852.s5", print_hash_value);
    transparent_crc(p_1272->g_852.s6, "p_1272->g_852.s6", print_hash_value);
    transparent_crc(p_1272->g_852.s7, "p_1272->g_852.s7", print_hash_value);
    transparent_crc(p_1272->g_852.s8, "p_1272->g_852.s8", print_hash_value);
    transparent_crc(p_1272->g_852.s9, "p_1272->g_852.s9", print_hash_value);
    transparent_crc(p_1272->g_852.sa, "p_1272->g_852.sa", print_hash_value);
    transparent_crc(p_1272->g_852.sb, "p_1272->g_852.sb", print_hash_value);
    transparent_crc(p_1272->g_852.sc, "p_1272->g_852.sc", print_hash_value);
    transparent_crc(p_1272->g_852.sd, "p_1272->g_852.sd", print_hash_value);
    transparent_crc(p_1272->g_852.se, "p_1272->g_852.se", print_hash_value);
    transparent_crc(p_1272->g_852.sf, "p_1272->g_852.sf", print_hash_value);
    transparent_crc(p_1272->g_853.f0, "p_1272->g_853.f0", print_hash_value);
    transparent_crc(p_1272->g_860.s0, "p_1272->g_860.s0", print_hash_value);
    transparent_crc(p_1272->g_860.s1, "p_1272->g_860.s1", print_hash_value);
    transparent_crc(p_1272->g_860.s2, "p_1272->g_860.s2", print_hash_value);
    transparent_crc(p_1272->g_860.s3, "p_1272->g_860.s3", print_hash_value);
    transparent_crc(p_1272->g_860.s4, "p_1272->g_860.s4", print_hash_value);
    transparent_crc(p_1272->g_860.s5, "p_1272->g_860.s5", print_hash_value);
    transparent_crc(p_1272->g_860.s6, "p_1272->g_860.s6", print_hash_value);
    transparent_crc(p_1272->g_860.s7, "p_1272->g_860.s7", print_hash_value);
    transparent_crc(p_1272->g_860.s8, "p_1272->g_860.s8", print_hash_value);
    transparent_crc(p_1272->g_860.s9, "p_1272->g_860.s9", print_hash_value);
    transparent_crc(p_1272->g_860.sa, "p_1272->g_860.sa", print_hash_value);
    transparent_crc(p_1272->g_860.sb, "p_1272->g_860.sb", print_hash_value);
    transparent_crc(p_1272->g_860.sc, "p_1272->g_860.sc", print_hash_value);
    transparent_crc(p_1272->g_860.sd, "p_1272->g_860.sd", print_hash_value);
    transparent_crc(p_1272->g_860.se, "p_1272->g_860.se", print_hash_value);
    transparent_crc(p_1272->g_860.sf, "p_1272->g_860.sf", print_hash_value);
    transparent_crc(p_1272->g_865.x, "p_1272->g_865.x", print_hash_value);
    transparent_crc(p_1272->g_865.y, "p_1272->g_865.y", print_hash_value);
    transparent_crc(p_1272->g_872.s0, "p_1272->g_872.s0", print_hash_value);
    transparent_crc(p_1272->g_872.s1, "p_1272->g_872.s1", print_hash_value);
    transparent_crc(p_1272->g_872.s2, "p_1272->g_872.s2", print_hash_value);
    transparent_crc(p_1272->g_872.s3, "p_1272->g_872.s3", print_hash_value);
    transparent_crc(p_1272->g_872.s4, "p_1272->g_872.s4", print_hash_value);
    transparent_crc(p_1272->g_872.s5, "p_1272->g_872.s5", print_hash_value);
    transparent_crc(p_1272->g_872.s6, "p_1272->g_872.s6", print_hash_value);
    transparent_crc(p_1272->g_872.s7, "p_1272->g_872.s7", print_hash_value);
    transparent_crc(p_1272->g_872.s8, "p_1272->g_872.s8", print_hash_value);
    transparent_crc(p_1272->g_872.s9, "p_1272->g_872.s9", print_hash_value);
    transparent_crc(p_1272->g_872.sa, "p_1272->g_872.sa", print_hash_value);
    transparent_crc(p_1272->g_872.sb, "p_1272->g_872.sb", print_hash_value);
    transparent_crc(p_1272->g_872.sc, "p_1272->g_872.sc", print_hash_value);
    transparent_crc(p_1272->g_872.sd, "p_1272->g_872.sd", print_hash_value);
    transparent_crc(p_1272->g_872.se, "p_1272->g_872.se", print_hash_value);
    transparent_crc(p_1272->g_872.sf, "p_1272->g_872.sf", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1272->g_945[i], "p_1272->g_945[i]", print_hash_value);

    }
    transparent_crc(p_1272->g_953.s0, "p_1272->g_953.s0", print_hash_value);
    transparent_crc(p_1272->g_953.s1, "p_1272->g_953.s1", print_hash_value);
    transparent_crc(p_1272->g_953.s2, "p_1272->g_953.s2", print_hash_value);
    transparent_crc(p_1272->g_953.s3, "p_1272->g_953.s3", print_hash_value);
    transparent_crc(p_1272->g_953.s4, "p_1272->g_953.s4", print_hash_value);
    transparent_crc(p_1272->g_953.s5, "p_1272->g_953.s5", print_hash_value);
    transparent_crc(p_1272->g_953.s6, "p_1272->g_953.s6", print_hash_value);
    transparent_crc(p_1272->g_953.s7, "p_1272->g_953.s7", print_hash_value);
    transparent_crc(p_1272->g_978.s0, "p_1272->g_978.s0", print_hash_value);
    transparent_crc(p_1272->g_978.s1, "p_1272->g_978.s1", print_hash_value);
    transparent_crc(p_1272->g_978.s2, "p_1272->g_978.s2", print_hash_value);
    transparent_crc(p_1272->g_978.s3, "p_1272->g_978.s3", print_hash_value);
    transparent_crc(p_1272->g_978.s4, "p_1272->g_978.s4", print_hash_value);
    transparent_crc(p_1272->g_978.s5, "p_1272->g_978.s5", print_hash_value);
    transparent_crc(p_1272->g_978.s6, "p_1272->g_978.s6", print_hash_value);
    transparent_crc(p_1272->g_978.s7, "p_1272->g_978.s7", print_hash_value);
    transparent_crc(p_1272->g_985.x, "p_1272->g_985.x", print_hash_value);
    transparent_crc(p_1272->g_985.y, "p_1272->g_985.y", print_hash_value);
    transparent_crc(p_1272->g_985.z, "p_1272->g_985.z", print_hash_value);
    transparent_crc(p_1272->g_985.w, "p_1272->g_985.w", print_hash_value);
    transparent_crc(p_1272->g_986.x, "p_1272->g_986.x", print_hash_value);
    transparent_crc(p_1272->g_986.y, "p_1272->g_986.y", print_hash_value);
    transparent_crc(p_1272->g_986.z, "p_1272->g_986.z", print_hash_value);
    transparent_crc(p_1272->g_986.w, "p_1272->g_986.w", print_hash_value);
    transparent_crc(p_1272->g_993, "p_1272->g_993", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1272->g_1024[i].f0, "p_1272->g_1024[i].f0", print_hash_value);

    }
    transparent_crc(p_1272->g_1070.s0, "p_1272->g_1070.s0", print_hash_value);
    transparent_crc(p_1272->g_1070.s1, "p_1272->g_1070.s1", print_hash_value);
    transparent_crc(p_1272->g_1070.s2, "p_1272->g_1070.s2", print_hash_value);
    transparent_crc(p_1272->g_1070.s3, "p_1272->g_1070.s3", print_hash_value);
    transparent_crc(p_1272->g_1070.s4, "p_1272->g_1070.s4", print_hash_value);
    transparent_crc(p_1272->g_1070.s5, "p_1272->g_1070.s5", print_hash_value);
    transparent_crc(p_1272->g_1070.s6, "p_1272->g_1070.s6", print_hash_value);
    transparent_crc(p_1272->g_1070.s7, "p_1272->g_1070.s7", print_hash_value);
    transparent_crc(p_1272->g_1070.s8, "p_1272->g_1070.s8", print_hash_value);
    transparent_crc(p_1272->g_1070.s9, "p_1272->g_1070.s9", print_hash_value);
    transparent_crc(p_1272->g_1070.sa, "p_1272->g_1070.sa", print_hash_value);
    transparent_crc(p_1272->g_1070.sb, "p_1272->g_1070.sb", print_hash_value);
    transparent_crc(p_1272->g_1070.sc, "p_1272->g_1070.sc", print_hash_value);
    transparent_crc(p_1272->g_1070.sd, "p_1272->g_1070.sd", print_hash_value);
    transparent_crc(p_1272->g_1070.se, "p_1272->g_1070.se", print_hash_value);
    transparent_crc(p_1272->g_1070.sf, "p_1272->g_1070.sf", print_hash_value);
    transparent_crc(p_1272->g_1072.s0, "p_1272->g_1072.s0", print_hash_value);
    transparent_crc(p_1272->g_1072.s1, "p_1272->g_1072.s1", print_hash_value);
    transparent_crc(p_1272->g_1072.s2, "p_1272->g_1072.s2", print_hash_value);
    transparent_crc(p_1272->g_1072.s3, "p_1272->g_1072.s3", print_hash_value);
    transparent_crc(p_1272->g_1072.s4, "p_1272->g_1072.s4", print_hash_value);
    transparent_crc(p_1272->g_1072.s5, "p_1272->g_1072.s5", print_hash_value);
    transparent_crc(p_1272->g_1072.s6, "p_1272->g_1072.s6", print_hash_value);
    transparent_crc(p_1272->g_1072.s7, "p_1272->g_1072.s7", print_hash_value);
    transparent_crc(p_1272->g_1072.s8, "p_1272->g_1072.s8", print_hash_value);
    transparent_crc(p_1272->g_1072.s9, "p_1272->g_1072.s9", print_hash_value);
    transparent_crc(p_1272->g_1072.sa, "p_1272->g_1072.sa", print_hash_value);
    transparent_crc(p_1272->g_1072.sb, "p_1272->g_1072.sb", print_hash_value);
    transparent_crc(p_1272->g_1072.sc, "p_1272->g_1072.sc", print_hash_value);
    transparent_crc(p_1272->g_1072.sd, "p_1272->g_1072.sd", print_hash_value);
    transparent_crc(p_1272->g_1072.se, "p_1272->g_1072.se", print_hash_value);
    transparent_crc(p_1272->g_1072.sf, "p_1272->g_1072.sf", print_hash_value);
    transparent_crc(p_1272->g_1077.s0, "p_1272->g_1077.s0", print_hash_value);
    transparent_crc(p_1272->g_1077.s1, "p_1272->g_1077.s1", print_hash_value);
    transparent_crc(p_1272->g_1077.s2, "p_1272->g_1077.s2", print_hash_value);
    transparent_crc(p_1272->g_1077.s3, "p_1272->g_1077.s3", print_hash_value);
    transparent_crc(p_1272->g_1077.s4, "p_1272->g_1077.s4", print_hash_value);
    transparent_crc(p_1272->g_1077.s5, "p_1272->g_1077.s5", print_hash_value);
    transparent_crc(p_1272->g_1077.s6, "p_1272->g_1077.s6", print_hash_value);
    transparent_crc(p_1272->g_1077.s7, "p_1272->g_1077.s7", print_hash_value);
    transparent_crc(p_1272->g_1096.s0, "p_1272->g_1096.s0", print_hash_value);
    transparent_crc(p_1272->g_1096.s1, "p_1272->g_1096.s1", print_hash_value);
    transparent_crc(p_1272->g_1096.s2, "p_1272->g_1096.s2", print_hash_value);
    transparent_crc(p_1272->g_1096.s3, "p_1272->g_1096.s3", print_hash_value);
    transparent_crc(p_1272->g_1096.s4, "p_1272->g_1096.s4", print_hash_value);
    transparent_crc(p_1272->g_1096.s5, "p_1272->g_1096.s5", print_hash_value);
    transparent_crc(p_1272->g_1096.s6, "p_1272->g_1096.s6", print_hash_value);
    transparent_crc(p_1272->g_1096.s7, "p_1272->g_1096.s7", print_hash_value);
    transparent_crc(p_1272->g_1096.s8, "p_1272->g_1096.s8", print_hash_value);
    transparent_crc(p_1272->g_1096.s9, "p_1272->g_1096.s9", print_hash_value);
    transparent_crc(p_1272->g_1096.sa, "p_1272->g_1096.sa", print_hash_value);
    transparent_crc(p_1272->g_1096.sb, "p_1272->g_1096.sb", print_hash_value);
    transparent_crc(p_1272->g_1096.sc, "p_1272->g_1096.sc", print_hash_value);
    transparent_crc(p_1272->g_1096.sd, "p_1272->g_1096.sd", print_hash_value);
    transparent_crc(p_1272->g_1096.se, "p_1272->g_1096.se", print_hash_value);
    transparent_crc(p_1272->g_1096.sf, "p_1272->g_1096.sf", print_hash_value);
    transparent_crc(p_1272->g_1149.s0, "p_1272->g_1149.s0", print_hash_value);
    transparent_crc(p_1272->g_1149.s1, "p_1272->g_1149.s1", print_hash_value);
    transparent_crc(p_1272->g_1149.s2, "p_1272->g_1149.s2", print_hash_value);
    transparent_crc(p_1272->g_1149.s3, "p_1272->g_1149.s3", print_hash_value);
    transparent_crc(p_1272->g_1149.s4, "p_1272->g_1149.s4", print_hash_value);
    transparent_crc(p_1272->g_1149.s5, "p_1272->g_1149.s5", print_hash_value);
    transparent_crc(p_1272->g_1149.s6, "p_1272->g_1149.s6", print_hash_value);
    transparent_crc(p_1272->g_1149.s7, "p_1272->g_1149.s7", print_hash_value);
    transparent_crc(p_1272->g_1149.s8, "p_1272->g_1149.s8", print_hash_value);
    transparent_crc(p_1272->g_1149.s9, "p_1272->g_1149.s9", print_hash_value);
    transparent_crc(p_1272->g_1149.sa, "p_1272->g_1149.sa", print_hash_value);
    transparent_crc(p_1272->g_1149.sb, "p_1272->g_1149.sb", print_hash_value);
    transparent_crc(p_1272->g_1149.sc, "p_1272->g_1149.sc", print_hash_value);
    transparent_crc(p_1272->g_1149.sd, "p_1272->g_1149.sd", print_hash_value);
    transparent_crc(p_1272->g_1149.se, "p_1272->g_1149.se", print_hash_value);
    transparent_crc(p_1272->g_1149.sf, "p_1272->g_1149.sf", print_hash_value);
    transparent_crc(p_1272->g_1168.s0, "p_1272->g_1168.s0", print_hash_value);
    transparent_crc(p_1272->g_1168.s1, "p_1272->g_1168.s1", print_hash_value);
    transparent_crc(p_1272->g_1168.s2, "p_1272->g_1168.s2", print_hash_value);
    transparent_crc(p_1272->g_1168.s3, "p_1272->g_1168.s3", print_hash_value);
    transparent_crc(p_1272->g_1168.s4, "p_1272->g_1168.s4", print_hash_value);
    transparent_crc(p_1272->g_1168.s5, "p_1272->g_1168.s5", print_hash_value);
    transparent_crc(p_1272->g_1168.s6, "p_1272->g_1168.s6", print_hash_value);
    transparent_crc(p_1272->g_1168.s7, "p_1272->g_1168.s7", print_hash_value);
    transparent_crc(p_1272->g_1169.x, "p_1272->g_1169.x", print_hash_value);
    transparent_crc(p_1272->g_1169.y, "p_1272->g_1169.y", print_hash_value);
    transparent_crc(p_1272->g_1175.x, "p_1272->g_1175.x", print_hash_value);
    transparent_crc(p_1272->g_1175.y, "p_1272->g_1175.y", print_hash_value);
    transparent_crc(p_1272->g_1181.f0, "p_1272->g_1181.f0", print_hash_value);
    transparent_crc(p_1272->g_1187.f0, "p_1272->g_1187.f0", print_hash_value);
    transparent_crc(p_1272->g_1214, "p_1272->g_1214", print_hash_value);
    transparent_crc(p_1272->g_1236.s0, "p_1272->g_1236.s0", print_hash_value);
    transparent_crc(p_1272->g_1236.s1, "p_1272->g_1236.s1", print_hash_value);
    transparent_crc(p_1272->g_1236.s2, "p_1272->g_1236.s2", print_hash_value);
    transparent_crc(p_1272->g_1236.s3, "p_1272->g_1236.s3", print_hash_value);
    transparent_crc(p_1272->g_1236.s4, "p_1272->g_1236.s4", print_hash_value);
    transparent_crc(p_1272->g_1236.s5, "p_1272->g_1236.s5", print_hash_value);
    transparent_crc(p_1272->g_1236.s6, "p_1272->g_1236.s6", print_hash_value);
    transparent_crc(p_1272->g_1236.s7, "p_1272->g_1236.s7", print_hash_value);
    transparent_crc(p_1272->g_1245, "p_1272->g_1245", print_hash_value);
    transparent_crc(p_1272->g_1264, "p_1272->g_1264", print_hash_value);
    transparent_crc(p_1272->v_collective, "p_1272->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 97; i++)
            transparent_crc(p_1272->l_special_values[i], "p_1272->l_special_values[i]", print_hash_value);
    transparent_crc(p_1272->l_comm_values[get_linear_local_id()], "p_1272->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1272->g_comm_values[get_linear_group_id() * 4 + get_linear_local_id()], "p_1272->g_comm_values[get_linear_group_id() * 4 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
