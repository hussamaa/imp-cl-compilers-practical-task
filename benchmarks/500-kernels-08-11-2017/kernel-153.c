// --atomics 79 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 51,89,1 -l 51,1,1
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

__constant uint32_t permutations[10][51] = {
{21,46,2,49,5,12,18,10,50,0,28,24,16,6,47,41,34,37,45,32,26,27,3,29,36,25,1,43,22,7,35,11,40,42,15,19,17,33,38,20,30,4,8,23,13,39,48,44,9,31,14}, // permutation 0
{4,40,6,42,8,10,3,35,36,50,43,39,28,45,1,15,31,47,30,18,11,17,44,9,5,19,46,2,37,23,26,27,38,25,16,13,41,7,12,29,32,33,14,22,48,24,20,0,21,49,34}, // permutation 1
{47,42,2,43,30,26,49,16,13,9,45,7,39,1,14,5,19,36,8,33,24,46,44,38,27,29,10,32,41,31,22,23,50,6,17,20,18,37,25,34,40,12,35,15,4,28,3,11,0,21,48}, // permutation 2
{1,8,10,37,11,12,22,19,35,49,38,47,46,31,32,29,42,7,23,40,21,50,45,39,15,13,4,16,17,44,25,5,48,24,2,27,9,26,36,0,18,14,28,34,43,6,33,30,41,20,3}, // permutation 3
{29,35,1,27,24,5,45,7,16,34,17,40,15,3,18,2,49,43,46,25,10,42,4,0,48,21,9,14,31,41,44,33,32,20,8,37,26,6,19,39,30,47,22,50,13,11,23,12,38,36,28}, // permutation 4
{20,37,15,13,5,19,34,36,31,17,14,11,50,42,10,29,33,2,21,28,3,38,6,9,44,22,48,23,40,8,49,1,41,46,27,25,32,0,47,26,12,39,30,35,24,45,18,16,4,7,43}, // permutation 5
{38,8,22,5,24,27,13,45,19,42,6,9,33,30,7,20,46,1,48,0,3,10,16,50,44,28,21,34,12,37,47,11,36,39,43,35,25,41,40,31,26,15,29,4,2,23,14,18,32,49,17}, // permutation 6
{50,5,11,21,27,9,49,26,13,44,15,18,32,16,3,10,19,48,35,42,17,22,36,7,46,25,30,23,41,31,39,14,1,28,43,0,4,24,38,8,6,40,2,47,29,12,34,33,37,20,45}, // permutation 7
{38,15,10,14,40,20,34,36,32,0,37,11,50,16,25,13,9,6,3,39,17,31,35,27,41,5,24,42,1,4,26,12,44,2,43,45,23,47,48,46,22,49,33,30,19,18,21,8,28,7,29}, // permutation 8
{21,36,7,25,3,8,39,32,29,41,34,9,44,16,38,20,4,27,49,5,31,2,28,14,19,24,35,1,26,12,15,47,37,43,40,50,30,48,18,22,6,13,17,45,10,0,23,11,46,42,33} // permutation 9
};

// Seed: 837013624

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_8;
    volatile VECTOR(uint32_t, 2) g_31;
    VECTOR(uint32_t, 16) g_32;
    uint32_t *g_43;
    uint32_t g_48;
    int32_t *g_89;
    int8_t g_101;
    int64_t g_103[3][7];
    int64_t *g_102;
    volatile int32_t g_107;
    uint32_t g_108;
    VECTOR(int64_t, 4) g_129;
    int16_t g_137;
    VECTOR(int32_t, 2) g_140;
    volatile int32_t ** volatile g_143;
    volatile int32_t *g_144;
    int32_t ** volatile g_151;
    int32_t ** volatile g_152[9];
    VECTOR(uint8_t, 16) g_157;
    uint32_t g_165;
    volatile VECTOR(uint64_t, 8) g_191;
    volatile VECTOR(uint64_t, 16) g_193;
    volatile VECTOR(uint32_t, 16) g_194;
    volatile VECTOR(uint32_t, 4) g_199;
    VECTOR(uint32_t, 16) g_201;
    VECTOR(uint64_t, 2) g_208;
    VECTOR(uint64_t, 2) g_210;
    volatile VECTOR(uint8_t, 2) g_213;
    int16_t *g_259;
    int16_t **g_258[4][2];
    uint16_t g_266;
    VECTOR(uint32_t, 4) g_282;
    volatile VECTOR(int16_t, 4) g_294;
    VECTOR(int64_t, 4) g_295;
    int32_t ** volatile g_297;
    uint16_t g_336;
    uint16_t *g_335;
    uint16_t *g_337;
    int8_t g_348[2];
    uint32_t g_350;
    VECTOR(uint8_t, 2) g_372;
    volatile int32_t g_419[8][7][4];
    volatile uint8_t g_490;
    volatile VECTOR(int8_t, 8) g_493;
    VECTOR(int64_t, 2) g_500;
    volatile VECTOR(int64_t, 16) g_501;
    VECTOR(uint32_t, 2) g_557;
    int64_t g_558;
    volatile VECTOR(int16_t, 4) g_574;
    VECTOR(int8_t, 8) g_611;
    volatile VECTOR(int8_t, 4) g_612;
    VECTOR(uint32_t, 4) g_657;
    VECTOR(int32_t, 2) g_658;
    uint16_t *g_669[2];
    volatile uint16_t * volatile * volatile * volatile g_694;
    uint16_t * volatile *g_696[3][6][1];
    uint16_t * volatile * volatile *g_695[5][6];
    volatile VECTOR(uint8_t, 2) g_752;
    volatile VECTOR(int8_t, 8) g_760;
    VECTOR(int8_t, 16) g_761;
    VECTOR(int8_t, 4) g_766;
    int32_t g_799[9];
    VECTOR(int8_t, 2) g_870;
    volatile uint64_t g_897[8][7][3];
    int32_t ** volatile g_915[8][2][2];
    int32_t ** volatile g_916;
    VECTOR(uint64_t, 8) g_927;
    volatile VECTOR(uint64_t, 2) g_928;
    volatile VECTOR(uint64_t, 8) g_929;
    uint16_t **g_945[6][10][4];
    uint16_t ***g_944;
    volatile VECTOR(int8_t, 4) g_978;
    volatile VECTOR(int8_t, 4) g_979;
    volatile VECTOR(int8_t, 4) g_980;
    int32_t ** volatile g_989;
    VECTOR(int64_t, 4) g_1025;
    VECTOR(int64_t, 16) g_1027;
    volatile VECTOR(int64_t, 2) g_1030;
    volatile VECTOR(int64_t, 16) g_1031;
    VECTOR(int32_t, 4) g_1032;
    VECTOR(int16_t, 16) g_1036;
    VECTOR(int32_t, 2) g_1051;
    VECTOR(uint16_t, 2) g_1084;
    volatile VECTOR(int8_t, 4) g_1101;
    volatile VECTOR(int64_t, 4) g_1121;
    volatile VECTOR(int64_t, 4) g_1122;
    volatile VECTOR(int32_t, 4) g_1128;
    VECTOR(int32_t, 16) g_1144;
    VECTOR(int32_t, 2) g_1145;
    volatile uint8_t *g_1179[8][8];
    volatile uint8_t **g_1178;
    volatile VECTOR(uint8_t, 4) g_1191;
    VECTOR(int8_t, 4) g_1192;
    int32_t ** volatile g_1222;
    int64_t g_1228;
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
int16_t  func_1(struct S0 * p_1233);
uint16_t  func_2(int64_t  p_3, uint32_t  p_4, struct S0 * p_1233);
int8_t  func_12(uint16_t  p_13, int64_t * p_14, uint8_t  p_15, uint32_t  p_16, int64_t * p_17, struct S0 * p_1233);
int64_t * func_18(int32_t  p_19, uint32_t  p_20, int64_t  p_21, int64_t * p_22, int64_t * p_23, struct S0 * p_1233);
int32_t  func_35(int32_t  p_36, uint32_t * p_37, uint32_t  p_38, struct S0 * p_1233);
uint32_t * func_39(uint8_t  p_40, uint32_t  p_41, uint64_t  p_42, struct S0 * p_1233);
int8_t  func_53(int32_t  p_54, struct S0 * p_1233);
int16_t  func_59(uint16_t  p_60, uint32_t * p_61, int64_t * p_62, uint32_t * p_63, int64_t * p_64, struct S0 * p_1233);
uint32_t * func_66(int8_t  p_67, int32_t  p_68, int64_t * p_69, int64_t * p_70, struct S0 * p_1233);
int16_t  func_73(int16_t  p_74, int32_t  p_75, struct S0 * p_1233);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1233->g_31 p_1233->g_32 p_1233->g_8 p_1233->g_43 p_1233->g_48 p_1233->g_102 p_1233->g_108 p_1233->g_129 p_1233->g_comm_values p_1233->g_103 p_1233->g_144 p_1233->g_101 p_1233->g_157 p_1233->g_140 p_1233->g_107 p_1233->g_89 p_1233->g_137 p_1233->g_191 p_1233->g_193 p_1233->g_194 p_1233->g_165 p_1233->g_199 p_1233->g_201 p_1233->g_208 p_1233->g_210 p_1233->g_213 p_1233->g_258 p_1233->g_266 p_1233->g_282 p_1233->g_294 p_1233->g_295 p_1233->g_297 p_1233->g_259 p_1233->g_336 p_1233->g_372 p_1233->g_335 p_1233->g_419 p_1233->g_337 p_1233->g_557 p_1233->g_558 p_1233->g_574 p_1233->g_501 p_1233->g_657 p_1233->g_658 p_1233->g_669 permutations p_1233->g_694 p_1233->g_695 p_1233->g_350 p_1233->g_348 p_1233->g_500 p_1233->g_752 p_1233->g_760 p_1233->g_761 p_1233->g_766 p_1233->g_799 p_1233->g_490 p_1233->g_916 p_1233->g_944 p_1233->g_1030 p_1233->g_979 p_1233->g_1084 p_1233->g_1031 p_1233->g_1101 p_1233->g_1032 p_1233->g_1051 p_1233->g_1121 p_1233->g_1122 p_1233->g_1128 p_1233->g_611 p_1233->l_comm_values p_1233->g_1144 p_1233->g_1145 p_1233->g_1025 p_1233->g_1178 p_1233->g_1191 p_1233->g_1192 p_1233->g_1036 p_1233->g_1222
 * writes: p_1233->g_8 p_1233->g_48 p_1233->g_89 p_1233->g_101 p_1233->g_108 p_1233->g_140 p_1233->g_144 p_1233->g_107 p_1233->g_165 p_1233->g_137 p_1233->g_266 p_1233->g_102 p_1233->g_335 p_1233->g_337 p_1233->g_348 p_1233->g_350 p_1233->g_669 permutations p_1233->g_comm_values p_1233->l_comm_values p_1233->g_336 p_1233->g_799 p_1233->g_761 p_1233->g_372 p_1233->g_945 p_1233->g_658 p_1233->g_1051 p_1233->g_157 p_1233->g_129
 */
int16_t  func_1(struct S0 * p_1233)
{ /* block id: 4 */
    VECTOR(int64_t, 8) l_5 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x7963BA20B95AE649L), 0x7963BA20B95AE649L), 0x7963BA20B95AE649L, 1L, 0x7963BA20B95AE649L);
    VECTOR(int64_t, 2) l_6 = (VECTOR(int64_t, 2))(0x4AD38DC5336DE018L, 6L);
    int64_t *l_7[4][6][2];
    int8_t l_9 = 0x4BL;
    int16_t *l_800[2];
    VECTOR(uint64_t, 4) l_809 = (VECTOR(uint64_t, 4))(0xF7651DFE18BF89ACL, (VECTOR(uint64_t, 2))(0xF7651DFE18BF89ACL, 4UL), 4UL);
    int32_t *l_810 = &p_1233->g_799[6];
    int32_t l_846 = 0x7ED08237L;
    uint64_t l_854 = 0UL;
    VECTOR(uint16_t, 2) l_874 = (VECTOR(uint16_t, 2))(65535UL, 0xA795L);
    int8_t l_907 = 0x51L;
    VECTOR(int16_t, 4) l_955 = (VECTOR(int16_t, 4))(0x153FL, (VECTOR(int16_t, 2))(0x153FL, 0x7619L), 0x7619L);
    uint16_t ****l_964 = (void*)0;
    int32_t l_1046 = 1L;
    uint64_t l_1074 = 0xB789084565825BECL;
    VECTOR(int32_t, 4) l_1076 = (VECTOR(int32_t, 4))(0x0C0A9374L, (VECTOR(int32_t, 2))(0x0C0A9374L, 0L), 0L);
    uint32_t l_1092 = 0UL;
    int32_t l_1096[10];
    int32_t l_1098 = 0x5961D04AL;
    VECTOR(uint8_t, 2) l_1102 = (VECTOR(uint8_t, 2))(254UL, 250UL);
    int64_t **l_1115[5][4][5] = {{{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102},{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102},{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102},{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102}},{{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102},{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102},{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102},{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102}},{{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102},{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102},{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102},{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102}},{{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102},{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102},{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102},{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102}},{{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102},{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102},{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102},{&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102,&p_1233->g_102}}};
    int16_t l_1123[7] = {3L,3L,3L,3L,3L,3L,3L};
    int8_t l_1148 = 0x0AL;
    int32_t l_1166 = 0x275AF9A6L;
    uint8_t *l_1181 = (void*)0;
    uint8_t **l_1180 = &l_1181;
    int16_t l_1184 = 8L;
    int32_t l_1188 = 1L;
    uint16_t *l_1215 = (void*)0;
    uint64_t l_1223[3];
    int32_t *l_1226[10] = {&p_1233->g_8,(void*)0,(void*)0,(void*)0,&p_1233->g_8,&p_1233->g_8,(void*)0,(void*)0,(void*)0,&p_1233->g_8};
    int32_t l_1227 = 0L;
    int32_t l_1229 = 0x77415177L;
    uint16_t l_1230 = 0x63DBL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
                l_7[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 2; i++)
        l_800[i] = &p_1233->g_137;
    for (i = 0; i < 10; i++)
        l_1096[i] = 0x67E4C9A9L;
    for (i = 0; i < 3; i++)
        l_1223[i] = 0x470E504131243823L;
    if ((~((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((func_2((p_1233->g_8 = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 16))(l_5.s7654205461637714)).seb4c, ((VECTOR(int64_t, 2))(l_6.xx)).yxyx))))).x), l_9, p_1233) || 1L) || (p_1233->g_761.s9 = (((void*)0 != l_800[0]) || ((safe_mod_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(l_6.y, l_9)) ^ (p_1233->g_32.s2 || (!p_1233->g_490))), 1L)) & 0L)))), 0x1A14D673L, (-4L), 0x4BA8F9B3L)), ((VECTOR(int32_t, 4))(0x47D1315DL)), ((VECTOR(int32_t, 4))(0x0DB212BCL))))).lo, ((VECTOR(int32_t, 2))((-4L))), ((VECTOR(int32_t, 2))(0x3D70D365L))))), ((VECTOR(int32_t, 2))(0x79D6F32EL))))).lo))
    { /* block id: 314 */
        int32_t l_818 = 1L;
        int32_t l_842 = 0x415FB30FL;
        int32_t l_844 = 1L;
        VECTOR(int32_t, 2) l_849 = (VECTOR(int32_t, 2))(0L, 1L);
        uint16_t *l_890[6] = {&p_1233->g_266,&p_1233->g_266,&p_1233->g_266,&p_1233->g_266,&p_1233->g_266,&p_1233->g_266};
        uint8_t *l_956 = (void*)0;
        uint8_t *l_957 = (void*)0;
        VECTOR(int64_t, 4) l_1028 = (VECTOR(int64_t, 4))(0x45D6F3E3920AB6CDL, (VECTOR(int64_t, 2))(0x45D6F3E3920AB6CDL, 8L), 8L);
        VECTOR(int64_t, 2) l_1029 = (VECTOR(int64_t, 2))((-1L), (-4L));
        VECTOR(int16_t, 8) l_1035 = (VECTOR(int16_t, 8))(0x549FL, (VECTOR(int16_t, 4))(0x549FL, (VECTOR(int16_t, 2))(0x549FL, 0x2789L), 0x2789L), 0x2789L, 0x549FL, 0x2789L);
        VECTOR(int16_t, 4) l_1037 = (VECTOR(int16_t, 4))(0x054EL, (VECTOR(int16_t, 2))(0x054EL, 0x3578L), 0x3578L);
        uint8_t *l_1061 = (void*)0;
        uint8_t *l_1062 = (void*)0;
        uint8_t *l_1063 = (void*)0;
        uint8_t *l_1064 = (void*)0;
        uint8_t *l_1065 = (void*)0;
        uint8_t *l_1066 = (void*)0;
        uint8_t *l_1067 = (void*)0;
        VECTOR(uint8_t, 16) l_1075 = (VECTOR(uint8_t, 16))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0xC1L), 0xC1L), 0xC1L, 247UL, 0xC1L, (VECTOR(uint8_t, 2))(247UL, 0xC1L), (VECTOR(uint8_t, 2))(247UL, 0xC1L), 247UL, 0xC1L, 247UL, 0xC1L);
        int32_t *l_1077[2][6] = {{&l_1046,&l_1046,&l_1046,&l_1046,&l_1046,&l_1046},{&l_1046,&l_1046,&l_1046,&l_1046,&l_1046,&l_1046}};
        int i, j;
        for (p_1233->g_48 = 0; (p_1233->g_48 <= 27); ++p_1233->g_48)
        { /* block id: 317 */
            VECTOR(int64_t, 4) l_815 = (VECTOR(int64_t, 4))(0x3B94E94C648A55EAL, (VECTOR(int64_t, 2))(0x3B94E94C648A55EAL, 0x55CE8675B87BFF6FL), 0x55CE8675B87BFF6FL);
            uint32_t **l_816[1];
            int32_t l_843 = 1L;
            int32_t l_845 = 0x57835BB6L;
            int32_t l_847 = 0x7CB59E64L;
            int32_t l_850 = 0x6AAB36CFL;
            int32_t l_852 = (-1L);
            VECTOR(int8_t, 4) l_871 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x55L), 0x55L);
            uint8_t l_887[8] = {0x57L,0x57L,0x57L,0x57L,0x57L,0x57L,0x57L,0x57L};
            int8_t l_900[4][1];
            int32_t l_911 = 0x0FB1C6FCL;
            VECTOR(uint64_t, 4) l_924 = (VECTOR(uint64_t, 4))(0xE4028F95EC3D652BL, (VECTOR(uint64_t, 2))(0xE4028F95EC3D652BL, 0UL), 0UL);
            VECTOR(uint64_t, 16) l_926 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL);
            VECTOR(uint64_t, 16) l_933 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x390E9D3A32478551L), 0x390E9D3A32478551L), 0x390E9D3A32478551L, 18446744073709551615UL, 0x390E9D3A32478551L, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x390E9D3A32478551L), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x390E9D3A32478551L), 18446744073709551615UL, 0x390E9D3A32478551L, 18446744073709551615UL, 0x390E9D3A32478551L);
            VECTOR(int64_t, 2) l_973 = (VECTOR(int64_t, 2))(0x62C7F7A65BFCA25EL, 0L);
            int64_t *l_988 = &p_1233->g_103[0][3];
            VECTOR(int64_t, 16) l_1023 = (VECTOR(int64_t, 16))(0x05C6FB27D9B74561L, (VECTOR(int64_t, 4))(0x05C6FB27D9B74561L, (VECTOR(int64_t, 2))(0x05C6FB27D9B74561L, 1L), 1L), 1L, 0x05C6FB27D9B74561L, 1L, (VECTOR(int64_t, 2))(0x05C6FB27D9B74561L, 1L), (VECTOR(int64_t, 2))(0x05C6FB27D9B74561L, 1L), 0x05C6FB27D9B74561L, 1L, 0x05C6FB27D9B74561L, 1L);
            VECTOR(int64_t, 2) l_1026 = (VECTOR(int64_t, 2))((-9L), 0L);
            int i, j;
            for (i = 0; i < 1; i++)
                l_816[i] = &p_1233->g_43;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_900[i][j] = 2L;
            }
            for (p_1233->g_101 = 0; (p_1233->g_101 != (-28)); p_1233->g_101 = safe_sub_func_int8_t_s_s(p_1233->g_101, 4))
            { /* block id: 320 */
                uint32_t l_813 = 0x8BC8BA56L;
                uint8_t *l_814 = (void*)0;
                int32_t *l_826 = &p_1233->g_8;
                uint64_t l_828[3];
                int32_t l_851 = 0x2D6D601AL;
                uint16_t *l_888[3];
                int32_t l_909 = 0x464D6C8EL;
                int32_t l_910[8];
                int i;
                for (i = 0; i < 3; i++)
                    l_828[i] = 0xE375049B55D0739AL;
                for (i = 0; i < 3; i++)
                    l_888[i] = &p_1233->g_266;
                for (i = 0; i < 8; i++)
                    l_910[i] = (-5L);
                if (((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_809.yz)), 18446744073709551611UL, 0xCBA0DDB0561DEB53L)).zwwzyyww)).s76)).hi && ((l_810 == l_810) || (l_815.y |= (safe_mod_func_int8_t_s_s((((VECTOR(int64_t, 2))(0x08E5A7C462885AC3L, 0x65B6C89FE6F0475BL)).even , p_1233->g_103[1][2]), l_813))))) | ((((l_816[0] != &p_1233->g_43) && (((void*)0 == l_800[0]) , (safe_unary_minus_func_int32_t_s(((((p_1233->g_558 , l_813) && l_818) , 0x34EEL) <= 1L))))) | l_813) ^ l_818)))
                { /* block id: 322 */
                    int8_t l_837[9][8] = {{1L,9L,1L,1L,9L,1L,1L,9L},{1L,9L,1L,1L,9L,1L,1L,9L},{1L,9L,1L,1L,9L,1L,1L,9L},{1L,9L,1L,1L,9L,1L,1L,9L},{1L,9L,1L,1L,9L,1L,1L,9L},{1L,9L,1L,1L,9L,1L,1L,9L},{1L,9L,1L,1L,9L,1L,1L,9L},{1L,9L,1L,1L,9L,1L,1L,9L},{1L,9L,1L,1L,9L,1L,1L,9L}};
                    int32_t l_848 = 0x50D3CFB7L;
                    int32_t l_853 = (-8L);
                    int i, j;
                    if ((atomic_inc(&p_1233->l_atomic_input[28]) == 7))
                    { /* block id: 324 */
                        uint16_t l_819 = 1UL;
                        int16_t l_822 = (-10L);
                        int64_t l_823[3][1];
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_823[i][j] = 0x4F6F5EF862EFE7B6L;
                        }
                        ++l_819;
                        l_823[1][0] = l_822;
                        unsigned int result = 0;
                        result += l_819;
                        result += l_822;
                        int l_823_i0, l_823_i1;
                        for (l_823_i0 = 0; l_823_i0 < 3; l_823_i0++) {
                            for (l_823_i1 = 0; l_823_i1 < 1; l_823_i1++) {
                                result += l_823[l_823_i0][l_823_i1];
                            }
                        }
                        atomic_add(&p_1233->l_special_values[28], result);
                    }
                    else
                    { /* block id: 327 */
                        (1 + 1);
                    }
                    for (l_818 = 0; (l_818 <= 18); l_818 = safe_add_func_uint64_t_u_u(l_818, 7))
                    { /* block id: 332 */
                        int32_t **l_827 = &l_826;
                        (*p_1233->g_144) = (-1L);
                        (*l_827) = l_826;
                    }
                    (*l_826) = l_828[2];
                    for (l_818 = 0; (l_818 != 14); ++l_818)
                    { /* block id: 339 */
                        VECTOR(uint32_t, 8) l_831 = (VECTOR(uint32_t, 8))(0x494C7CBEL, (VECTOR(uint32_t, 4))(0x494C7CBEL, (VECTOR(uint32_t, 2))(0x494C7CBEL, 1UL), 1UL), 1UL, 0x494C7CBEL, 1UL);
                        int32_t **l_838 = &l_826;
                        int32_t l_839 = 0x7DEC1842L;
                        int32_t *l_840 = (void*)0;
                        int32_t *l_841[10][2] = {{(void*)0,&p_1233->g_799[6]},{(void*)0,&p_1233->g_799[6]},{(void*)0,&p_1233->g_799[6]},{(void*)0,&p_1233->g_799[6]},{(void*)0,&p_1233->g_799[6]},{(void*)0,&p_1233->g_799[6]},{(void*)0,&p_1233->g_799[6]},{(void*)0,&p_1233->g_799[6]},{(void*)0,&p_1233->g_799[6]},{(void*)0,&p_1233->g_799[6]}};
                        int i, j;
                        l_831.s2 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x4B2FCB1CL, (-1L))).yyxxxxyyyyxyyxyx)).sc0)).hi;
                        (*l_810) |= (safe_unary_minus_func_uint64_t_u(((safe_mod_func_int8_t_s_s(0L, p_1233->g_501.s0)) >= (safe_rshift_func_int16_t_s_s(l_837[1][5], 12)))));
                        (*l_838) = (void*)0;
                        ++l_854;
                    }
                }
                else
                { /* block id: 345 */
                    return (*p_1233->g_259);
                }
                for (p_1233->g_137 = (-19); (p_1233->g_137 >= 7); p_1233->g_137++)
                { /* block id: 350 */
                    uint64_t l_861 = 0UL;
                    VECTOR(uint32_t, 8) l_882 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL);
                    int64_t *l_898 = &p_1233->g_103[2][2];
                    int32_t l_899 = (-1L);
                    int32_t l_906 = 0x3DD91D58L;
                    int32_t l_908 = 7L;
                    uint32_t l_912 = 0x4A59FEA9L;
                    int i;
                    for (l_852 = 0; (l_852 > 10); l_852 = safe_add_func_int8_t_s_s(l_852, 8))
                    { /* block id: 353 */
                        uint8_t l_877 = 0xA3L;
                        uint16_t **l_889[5] = {&l_888[2],&l_888[2],&l_888[2],&l_888[2],&l_888[2]};
                        uint8_t *l_891 = (void*)0;
                        uint8_t *l_892[1];
                        int32_t l_893 = 0x2B287CF1L;
                        int8_t *l_894 = (void*)0;
                        int8_t *l_895 = (void*)0;
                        int8_t *l_896 = &p_1233->g_348[0];
                        int32_t *l_901 = &l_846;
                        int32_t *l_902 = &l_899;
                        int32_t *l_903 = &p_1233->g_799[6];
                        int32_t *l_904 = &p_1233->g_799[1];
                        int32_t *l_905[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_892[i] = &l_887[0];
                        for (i = 0; i < 1; i++)
                            l_905[i] = &l_893;
                        (*l_810) = l_861;
                        (*p_1233->g_144) = ((0UL ^ ((((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((VECTOR(uint16_t, 16))((safe_rshift_func_int8_t_s_u(((l_899 = ((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(p_1233->g_870.yyxx)).odd, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(l_871.zx)), (int8_t)(safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(0x9D08L, ((VECTOR(uint16_t, 2))(l_874.xy)), 0xB203L)))).w, (&p_1233->g_103[0][5] == ((((*l_896) = (safe_mod_func_uint32_t_u_u((l_877 , (*l_810)), (((l_893 = (((safe_div_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 4))(l_882.s0471)).lo, ((VECTOR(uint32_t, 2))(4294967288UL, 4294967289UL))))).lo ^ ((0UL <= (p_1233->g_372.x = (p_1233->g_157.s2 = (((VECTOR(uint32_t, 16))(1UL, (safe_add_func_uint32_t_u_u(0xFB2FBB53L, (safe_sub_func_uint16_t_u_u(((l_887[0] & (((p_1233->g_335 = (p_1233->g_337 = l_888[2])) == l_890[4]) , p_1233->g_103[1][4])) || l_847), 0x93F6L)))), 7UL, 0xE0498048L, 4294967295UL, 0xB5DAB74DL, 1UL, 0xDA0371D7L, ((VECTOR(uint32_t, 2))(1UL)), 0xCFE1814EL, 1UL, 3UL, l_877, 0x2770E803L, 0xA06110F8L)).s4 , 0UL)))) , 8UL)) & (*l_810)), (*l_810))), l_887[0])) > l_844) && (*p_1233->g_259))) != 0xE99B0DC4L) , l_893)))) <= p_1233->g_897[3][2][0]) , l_898))))))).xxyx))).lo))), 0x43L, 0x64L)).y, 0x21L)) | p_1233->g_295.w)) || 0x5CL), p_1233->g_500.x)), ((VECTOR(uint16_t, 8))(0x13DAL)), (*p_1233->g_335), 1UL, 0x4940L, ((VECTOR(uint16_t, 2))(1UL)), 0x1188L, 65535UL)).s4 , (*p_1233->g_335)), 5)), l_900[3][0])) < 0x2CL) > p_1233->g_282.w) && (*p_1233->g_259))) ^ p_1233->g_208.x);
                        ++l_912;
                    }
                }
                (*p_1233->g_916) = &l_909;
                (*p_1233->g_89) = (*p_1233->g_144);
            }
            (*p_1233->g_144) &= (!(safe_lshift_func_uint16_t_u_s(65535UL, 10)));
            if ((*p_1233->g_144))
                break;
            for (p_1233->g_101 = 0; (p_1233->g_101 != (-30)); --p_1233->g_101)
            { /* block id: 373 */
                uint64_t l_922 = 0x7415C6BE7D3980EFL;
                uint64_t *l_923 = &l_922;
                VECTOR(uint64_t, 8) l_925 = (VECTOR(uint64_t, 8))(0xCD502D607B09B4D8L, (VECTOR(uint64_t, 4))(0xCD502D607B09B4D8L, (VECTOR(uint64_t, 2))(0xCD502D607B09B4D8L, 9UL), 9UL), 9UL, 0xCD502D607B09B4D8L, 9UL);
                uint16_t ***l_947 = &p_1233->g_945[2][7][3];
                VECTOR(int64_t, 8) l_1024 = (VECTOR(int64_t, 8))(0x0ABD50112B8C0DF7L, (VECTOR(int64_t, 4))(0x0ABD50112B8C0DF7L, (VECTOR(int64_t, 2))(0x0ABD50112B8C0DF7L, 0x22BDED6595290E5FL), 0x22BDED6595290E5FL), 0x22BDED6595290E5FL, 0x0ABD50112B8C0DF7L, 0x22BDED6595290E5FL);
                int32_t *l_1052 = (void*)0;
                int32_t *l_1053 = (void*)0;
                int32_t *l_1054 = &p_1233->g_799[3];
                int i, j;
                (1 + 1);
            }
        }
        (*l_810) ^= (safe_lshift_func_int8_t_s_u(((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((+((--p_1233->g_372.y) | ((void*)0 == &p_1233->g_144))) || (safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 16))(((((~l_842) <= (l_842 , (((*p_1233->g_944) = &l_890[4]) != (l_1074 , &l_890[3])))) && (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_1075.s53)).xyyx)))).y >= p_1233->g_1030.y)) && ((l_818 = ((VECTOR(int32_t, 4))(l_1076.wwyz)).y) , (safe_div_func_int32_t_s_s(l_1035.s3, p_1233->g_979.x)))), ((VECTOR(int64_t, 8))(1L)), (-1L), ((VECTOR(int64_t, 4))(0L)), 0x642565D75FDF4F8EL, 0x08BBA3E96DBE6D1BL)).s52, ((VECTOR(int64_t, 2))(1L))))).hi, 0x1B068C334C452C61L)), (-1L)))), l_1035.s5)), p_1233->g_348[0])) >= l_1075.s2), 4));
    }
    else
    { /* block id: 433 */
        VECTOR(int16_t, 8) l_1087 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x2620L), 0x2620L), 0x2620L, 1L, 0x2620L);
        uint64_t *l_1093 = (void*)0;
        uint64_t *l_1094[3][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        VECTOR(uint32_t, 4) l_1095 = (VECTOR(uint32_t, 4))(0x2DFAEE37L, (VECTOR(uint32_t, 2))(0x2DFAEE37L, 1UL), 1UL);
        int32_t l_1097 = 0x57BA0937L;
        uint8_t *l_1103[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t *l_1112[7][9][1] = {{{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8}},{{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8}},{{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8}},{{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8}},{{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8}},{{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8}},{{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8},{&p_1233->g_8}}};
        int64_t **l_1114 = (void*)0;
        int64_t ***l_1113 = &l_1114;
        uint16_t l_1120[2];
        int64_t *l_1146[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        uint16_t l_1158 = 0x8FF4L;
        VECTOR(uint8_t, 8) l_1173 = (VECTOR(uint8_t, 8))(0xFFL, (VECTOR(uint8_t, 4))(0xFFL, (VECTOR(uint8_t, 2))(0xFFL, 4UL), 4UL), 4UL, 0xFFL, 4UL);
        uint8_t l_1221 = 4UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1120[i] = 65535UL;
        p_1233->g_658.y ^= (((*l_810) , (safe_lshift_func_uint16_t_u_s((l_1097 = (((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(p_1233->g_1084.yxyx)).lo)).xyxx)).xzzxyyzwxzxwxzzw)).s8 && (((safe_add_func_uint32_t_u_u(2UL, l_1087.s2)) | 0xB550025A3C3B5AB8L) < (safe_add_func_int32_t_s_s((((safe_mod_func_uint8_t_u_u(((((*l_810) <= 0xEA7E0024L) | (*p_1233->g_259)) <= (l_1092 > ((((l_1095.w = 3UL) <= GROUP_DIVERGE(1, 1)) , l_1087.s2) > (*l_810)))), p_1233->g_1031.sc)) , 3L) || p_1233->g_557.x), 6L)))), (*l_810), 5UL, ((VECTOR(uint32_t, 2))(1UL)), (*l_810), 4294967286UL, 4UL)), ((VECTOR(uint32_t, 8))(0UL))))).s3, (*l_810))) && (*l_810)) >= l_1096[2])), 12))) , l_1098);
        p_1233->g_1051.y &= ((*l_810) < (safe_div_func_uint16_t_u_u((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1233->g_1101.xy)), 1L, (-6L))).w & (l_1096[2] = ((VECTOR(uint8_t, 4))(0xFEL, ((VECTOR(uint8_t, 2))(l_1102.yy)), 0UL)).w)), ((safe_lshift_func_uint16_t_u_u((((*l_810) | (-4L)) | (0x3AC35755689FEBF6L == (safe_mul_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x11E752FE7AD62EF7L, 2L)), (0UL >= p_1233->g_201.s1), 0x2FF8AF45BDDC53FAL, p_1233->g_1032.w, ((*l_810) | (*l_810)), 0x3EACCCBFDBA7BF1CL, (-9L))).s2, l_1097)) <= l_1087.s6), (*l_810))), p_1233->g_282.x)))), 13)) & p_1233->g_157.s5))));
        if (((*l_810) = (+((((*l_1113) = &l_7[3][2][1]) != (l_1115[2][2][2] = &p_1233->g_102)) >= ((safe_rshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(l_1120[0], (*l_810))), 8)) != ((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 16))(p_1233->g_1121.wxxyxzwyywxzzyzw)).hi, ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_1233->g_1122.xz)), 0x454BCAC6E3A8381DL, 9L)).odd))).yyyxxxxx))).s2)))))
        { /* block id: 442 */
            int16_t l_1124 = 0x7C1DL;
            uint32_t l_1125 = 0x8F0D89B7L;
            int32_t **l_1129 = &l_1112[0][3][0];
            uint64_t l_1147 = 0x08CCB1A35FA1BD07L;
            int32_t l_1159 = (-1L);
            int32_t l_1164 = 1L;
            l_1125--;
            if (((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(p_1233->g_1128.wyywyyzw)).hi)).y, 0x413CBB23L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((l_1129 != (((p_1233->g_611.s3 >= (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_1233->global_0_offset, get_global_id(0), 10), ((safe_add_func_int32_t_s_s(2L, ((safe_div_func_uint64_t_u_u((!p_1233->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1233->tid, 51))]), 0x01E1EC3D1A94F14EL)) ^ ((((safe_mul_func_uint8_t_u_u(((((safe_div_func_uint64_t_u_u(p_1233->g_282.w, (safe_add_func_int32_t_s_s(l_1125, ((((((*p_1233->g_337) = ((((safe_mod_func_uint32_t_u_u((*l_810), ((VECTOR(int32_t, 2))(p_1233->g_1144.s41)).even)) && ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1233->g_1145.xx)), 0x54849AA8L, 0x4C0719FDL)).w) , 2UL) && FAKE_DIVERGE(p_1233->local_0_offset, get_local_id(0), 10))) ^ (*l_810)) , &p_1233->g_103[1][4]) == l_1146[0]) , l_1125))))) | l_1147) || (-3L)) , 255UL), p_1233->g_comm_values[p_1233->tid])) == p_1233->g_199.x) == FAKE_DIVERGE(p_1233->group_0_offset, get_group_id(0), 10)) & 0x7E876DFD81109828L)))) <= l_1148)))) <= 1UL) , &p_1233->g_89)), (*l_810), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 8))(1L)), (*l_810), 0x33B3D3D8L, 0x37E2E3F5L, 0x670E6B05L)))), ((VECTOR(int32_t, 16))(0x49E44DB5L))))).s06)), 9L, 0x1F1AD439L, (*p_1233->g_144), (*l_810), (-1L), ((VECTOR(int32_t, 2))((-5L))), 0x382F451DL, 0x4C3F42C2L, ((VECTOR(int32_t, 2))(0x7FE6A867L)), 1L)).hi, ((VECTOR(int32_t, 8))(1L))))).s2)
            { /* block id: 445 */
                uint64_t l_1153 = 0x4412DCA24008D82AL;
                (*l_1113) = (((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x4B0759D0L, 0x1476F383L)).even, 0x53765916L, (!(safe_add_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((&p_1233->g_945[0][1][1] != &p_1233->g_696[2][2][0]), l_1153)) > (((l_1096[2] &= (*l_810)) , (l_1153 || (*l_810))) , (*l_810))), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xC5L, 0x72L)).xyxxxxxyxxxyyxxx)).s0, (l_1159 = (p_1233->g_157.s9 ^= (safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((*p_1233->g_259) = (l_1158 , (*l_810))), 15)) > (*l_810)), p_1233->g_48)))), 0x23L, 0UL, 0xC3L, p_1233->g_979.x, 3UL, 0x22L)))).s3))), 0x261EE45AL, 0x41A3A484L, ((VECTOR(int32_t, 8))(0x40EDE7A9L)), ((VECTOR(int32_t, 2))((-7L))), (-10L))).s1d, ((VECTOR(int32_t, 2))(0x5EDA0DF8L))))), ((VECTOR(int32_t, 2))(7L))))).odd , (void*)0);
                for (l_1125 = 0; (l_1125 < 51); ++l_1125)
                { /* block id: 453 */
                    (*l_810) = ((p_1233->g_102 = &p_1233->g_103[1][4]) != &p_1233->g_103[1][4]);
                }
            }
            else
            { /* block id: 457 */
                for (p_1233->g_101 = 0; (p_1233->g_101 < 5); p_1233->g_101++)
                { /* block id: 460 */
                    uint16_t *l_1165 = &p_1233->g_336;
                    int32_t l_1167[2][2];
                    int64_t *l_1168[8][3][9] = {{{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]}},{{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]}},{{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]}},{{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]}},{{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]}},{{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]}},{{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]}},{{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]},{&p_1233->g_103[1][2],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][1],&p_1233->g_103[2][2],&p_1233->g_103[1][1],&p_1233->g_103[1][4],&p_1233->g_103[1][4],&p_1233->g_103[1][2]}}};
                    int32_t **l_1169 = &p_1233->g_89;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_1167[i][j] = 7L;
                    }
                    (*l_1169) = ((*l_1129) = func_66(p_1233->g_108, l_1164, ((*l_1114) = (p_1233->g_102 = (void*)0)), func_18(p_1233->g_199.x, ((void*)0 != l_1165), l_1166, &p_1233->g_103[1][4], ((l_1167[0][1] = p_1233->g_140.y) , l_1168[4][2][3]), p_1233), p_1233));
                }
                (*l_1129) = &l_1096[2];
                return (*p_1233->g_259);
            }
        }
        else
        { /* block id: 470 */
            int16_t l_1172 = 0x5B77L;
            int64_t *l_1174[7][3][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            VECTOR(int8_t, 4) l_1175 = (VECTOR(int8_t, 4))(0x54L, (VECTOR(int8_t, 2))(0x54L, 0L), 0L);
            int8_t *l_1182[2];
            uint32_t l_1183 = 4294967289UL;
            uint32_t **l_1185 = (void*)0;
            uint32_t *l_1187[6] = {&p_1233->g_350,&p_1233->g_350,&p_1233->g_350,&p_1233->g_350,&p_1233->g_350,&p_1233->g_350};
            uint32_t **l_1186 = &l_1187[1];
            int32_t l_1193[6][10] = {{0x6CDA3D9DL,1L,0x7E456BAEL,0x507FFAB8L,0x53540E04L,0x6CDA3D9DL,0x507FFAB8L,0x0191A444L,0x507FFAB8L,0x6CDA3D9DL},{0x6CDA3D9DL,1L,0x7E456BAEL,0x507FFAB8L,0x53540E04L,0x6CDA3D9DL,0x507FFAB8L,0x0191A444L,0x507FFAB8L,0x6CDA3D9DL},{0x6CDA3D9DL,1L,0x7E456BAEL,0x507FFAB8L,0x53540E04L,0x6CDA3D9DL,0x507FFAB8L,0x0191A444L,0x507FFAB8L,0x6CDA3D9DL},{0x6CDA3D9DL,1L,0x7E456BAEL,0x507FFAB8L,0x53540E04L,0x6CDA3D9DL,0x507FFAB8L,0x0191A444L,0x507FFAB8L,0x6CDA3D9DL},{0x6CDA3D9DL,1L,0x7E456BAEL,0x507FFAB8L,0x53540E04L,0x6CDA3D9DL,0x507FFAB8L,0x0191A444L,0x507FFAB8L,0x6CDA3D9DL},{0x6CDA3D9DL,1L,0x7E456BAEL,0x507FFAB8L,0x53540E04L,0x6CDA3D9DL,0x507FFAB8L,0x0191A444L,0x507FFAB8L,0x6CDA3D9DL}};
            int32_t *l_1198[7][4] = {{(void*)0,&l_1098,(void*)0,(void*)0},{(void*)0,&l_1098,(void*)0,(void*)0},{(void*)0,&l_1098,(void*)0,(void*)0},{(void*)0,&l_1098,(void*)0,(void*)0},{(void*)0,&l_1098,(void*)0,(void*)0},{(void*)0,&l_1098,(void*)0,(void*)0},{(void*)0,&l_1098,(void*)0,(void*)0}};
            uint64_t l_1202[1][9][4] = {{{0x972750000B4CD891L,0x98DD21CC69BCE638L,5UL,18446744073709551615UL},{0x972750000B4CD891L,0x98DD21CC69BCE638L,5UL,18446744073709551615UL},{0x972750000B4CD891L,0x98DD21CC69BCE638L,5UL,18446744073709551615UL},{0x972750000B4CD891L,0x98DD21CC69BCE638L,5UL,18446744073709551615UL},{0x972750000B4CD891L,0x98DD21CC69BCE638L,5UL,18446744073709551615UL},{0x972750000B4CD891L,0x98DD21CC69BCE638L,5UL,18446744073709551615UL},{0x972750000B4CD891L,0x98DD21CC69BCE638L,5UL,18446744073709551615UL},{0x972750000B4CD891L,0x98DD21CC69BCE638L,5UL,18446744073709551615UL},{0x972750000B4CD891L,0x98DD21CC69BCE638L,5UL,18446744073709551615UL}}};
            int32_t l_1205 = 0x0C491A17L;
            uint16_t *l_1214 = (void*)0;
            uint32_t *l_1216 = &p_1233->g_165;
            int16_t l_1219 = 0x7DD5L;
            uint32_t l_1220 = 8UL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1182[i] = &l_907;
            (*p_1233->g_144) = ((((*l_1186) = func_66(p_1233->g_1025.y, (safe_rshift_func_int8_t_s_u((((((((VECTOR(int32_t, 16))(l_1172, (((VECTOR(uint8_t, 16))(l_1173.s1177621604014266)).se || (((((p_1233->g_1051.x & (p_1233->g_129.w = l_1172)) | GROUP_DIVERGE(2, 1)) & ((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(l_1175.yw)).yxyx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(0x01L, (p_1233->g_101 = (+((((safe_lshift_func_uint8_t_u_s((p_1233->g_157.sd = ((p_1233->g_1178 == l_1180) & (*p_1233->g_337))), 6)) >= 0x4EL) & ((((VECTOR(int8_t, 2))((-6L), 0L)).lo , l_1103[3]) == (void*)0)) & p_1233->g_140.x))), 0x3CL, p_1233->g_336, ((VECTOR(int8_t, 2))(0x28L)), (-3L), 0x51L)).s00, ((VECTOR(int8_t, 2))(0x76L))))).yxyy)))), ((VECTOR(int8_t, 4))(1L))))).xwwwxyxyxwwywyxy)).se202, ((VECTOR(int8_t, 4))(0x33L))))))).ywzxzzxw)).s6310725727206363, ((VECTOR(int8_t, 16))(1L))))).sc) <= l_1175.y) && 0x1457L)), l_1175.w, l_1172, (*l_810), l_1183, (-7L), (-8L), ((VECTOR(int32_t, 4))(0x7CEBE154L)), 0x74A94417L, 0x1EBD95FDL, 0x1F1E58E0L, 0x1398D0ECL)).sd != 0x4F5C3A4EL) , 4294967286UL) ^ GROUP_DIVERGE(0, 1)) >= l_1184) , 0x11L), 0)), l_1174[2][2][0], (**l_1113), p_1233)) != l_1112[1][1][0]) <= l_1188);
            l_1193[3][3] |= (safe_mul_func_int8_t_s_s((l_1172 & ((VECTOR(uint8_t, 2))(p_1233->g_1191.zz)).lo), ((VECTOR(int8_t, 4))(p_1233->g_1192.yyyw)).x));
            for (l_9 = 16; (l_9 != 4); l_9 = safe_sub_func_int32_t_s_s(l_9, 4))
            { /* block id: 479 */
                uint8_t l_1201 = 0x94L;
                (*p_1233->g_144) &= ((*l_810) = (safe_add_func_int64_t_s_s(0x7374A0037B7F5206L, ((((l_1198[3][1] != l_1198[3][1]) , (safe_sub_func_uint32_t_u_u(l_1201, (&l_1193[3][3] == &l_1097)))) == (-8L)) || (*l_810)))));
                return l_1202[0][7][0];
            }
            (*p_1233->g_1222) = ((safe_rshift_func_int8_t_s_s(l_1205, ((((!(safe_add_func_int16_t_s_s(0L, (safe_mod_func_int32_t_s_s((2L | GROUP_DIVERGE(0, 1)), ((0xECC5L | (safe_lshift_func_uint8_t_u_s((p_1233->g_157.s3 = (safe_div_func_int64_t_s_s(((l_1215 = l_1214) == &l_1120[1]), (((*l_810) &= (((*l_1216) = 0x9732FAB1L) && 4294967290UL)) & (((((*p_1233->g_259) = ((((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xC3A0L, 0xD1D5L)).xxyx)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(3UL, (((safe_add_func_int16_t_s_s(((l_1102.y <= 18446744073709551609UL) != (*p_1233->g_144)), l_1219)) > p_1233->g_comm_values[p_1233->tid]) > p_1233->g_1036.sd), 0UL, 1UL)))))))).s34)), ((VECTOR(uint16_t, 2))(0x3D74L)), ((VECTOR(uint16_t, 2))(1UL))))).yxxxxyyyyyxxyxyx)).s8 | (*p_1233->g_259)) ^ l_1220) & (*p_1233->g_259)) , (*p_1233->g_259))) , l_1175.w) , p_1233->g_199.z) ^ p_1233->g_1192.x))))), l_1221))) || 0x60176DE032B0384CL)))))) & p_1233->g_1144.s9) >= p_1233->g_1144.s5) > 65527UL))) , &l_1193[1][1]);
        }
        --l_1223[2];
    }
    --l_1230;
    return (*l_810);
}


/* ------------------------------------------ */
/* 
 * reads : p_1233->g_31 p_1233->g_32 p_1233->g_8 p_1233->g_43 p_1233->g_48 p_1233->g_102 p_1233->g_108 p_1233->g_129 p_1233->g_comm_values p_1233->g_103 p_1233->g_144 p_1233->g_101 p_1233->g_157 p_1233->g_140 p_1233->g_107 p_1233->g_89 p_1233->g_137 p_1233->g_191 p_1233->g_193 p_1233->g_194 p_1233->g_165 p_1233->g_199 p_1233->g_201 p_1233->g_208 p_1233->g_210 p_1233->g_213 p_1233->g_258 p_1233->g_266 p_1233->g_282 p_1233->g_294 p_1233->g_295 p_1233->g_297 p_1233->g_259 p_1233->g_336 p_1233->g_372 p_1233->g_335 p_1233->g_419 p_1233->g_337 p_1233->g_557 p_1233->g_558 p_1233->g_574 p_1233->g_501 p_1233->g_657 p_1233->g_658 p_1233->g_669 permutations p_1233->g_694 p_1233->g_695 p_1233->g_350 p_1233->g_348 p_1233->g_500 p_1233->g_752 p_1233->g_760 p_1233->g_761 p_1233->g_766 p_1233->g_799
 * writes: p_1233->g_48 p_1233->g_89 p_1233->g_101 p_1233->g_108 p_1233->g_8 p_1233->g_140 p_1233->g_144 p_1233->g_107 p_1233->g_165 p_1233->g_137 p_1233->g_266 p_1233->g_102 p_1233->g_335 p_1233->g_337 p_1233->g_348 p_1233->g_350 p_1233->g_669 permutations p_1233->g_comm_values p_1233->l_comm_values p_1233->g_336 p_1233->g_799
 */
uint16_t  func_2(int64_t  p_3, uint32_t  p_4, struct S0 * p_1233)
{ /* block id: 6 */
    uint32_t l_24 = 0x8299FA9EL;
    uint32_t *l_33[9][3][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_34 = 0L;
    uint32_t *l_349 = &p_1233->g_350;
    int32_t l_351[4] = {0x2379D7F5L,0x2379D7F5L,0x2379D7F5L,0x2379D7F5L};
    int32_t l_352 = (-1L);
    int32_t *l_797 = (void*)0;
    int32_t *l_798 = &p_1233->g_799[6];
    int i, j, k;
    (*l_798) ^= ((0x41L > (((l_351[1] = ((safe_mul_func_int8_t_s_s(func_12((+FAKE_DIVERGE(p_1233->local_0_offset, get_local_id(0), 10)), func_18(((((l_24 == FAKE_DIVERGE(p_1233->group_1_offset, get_group_id(1), 10)) || ((l_351[1] = (safe_add_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u((((safe_add_func_int64_t_s_s((((*l_349) = ((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_1233->g_31.xy)), 0UL, 0x7A2E255BL)).wywwxyzyxywxyxxz, ((VECTOR(uint32_t, 4))(p_1233->g_32.s08fb)).yzywzxyyyyyzywzy, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))((l_34 = p_1233->g_8), (!((func_35(p_3, func_39((p_1233->g_43 == (l_33[5][0][7] = (void*)0)), l_34, (l_34 && (p_1233->g_48 = (safe_mod_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(l_24, p_3)) < GROUP_DIVERGE(0, 1)), 0x9342L)))), p_1233), p_1233->g_208.x, p_1233) > l_34) , l_34)), 0x59092F26L, 4294967289UL)).lo)).xxxyxyyy)).hi, ((VECTOR(uint32_t, 4))(4294967295UL)))))))).wxzzzxwzxzxzzzww, ((VECTOR(uint32_t, 16))(0xBDFC59D7L))))).hi)).s3312371413633043))).s2) , 0L), p_1233->g_129.x)) && p_1233->g_194.s0) ^ 0x8F14696CL), 3UL)) <= 0x8430A912L), 0x8EED96941FA87196L))) , l_351[1])) || p_4) > p_3), l_24, l_352, &p_1233->g_103[1][4], &p_1233->g_103[2][0], p_1233), l_352, p_1233->g_336, &p_1233->g_103[1][4], p_1233), p_1233->g_558)) < p_4)) & FAKE_DIVERGE(p_1233->global_2_offset, get_global_id(2), 10)) , 0x6CL)) , l_34);
    return (*l_798);
}


/* ------------------------------------------ */
/* 
 * reads : p_1233->g_199 p_1233->g_372 p_1233->g_208 p_1233->g_335 p_1233->g_137 p_1233->g_336 p_1233->g_103 p_1233->g_31 p_1233->g_8 p_1233->g_282 p_1233->g_294 p_1233->g_201 p_1233->g_295 p_1233->g_140 p_1233->g_419 p_1233->g_337 p_1233->g_144 p_1233->g_297 p_1233->g_557 p_1233->g_558 p_1233->g_107 p_1233->g_129 p_1233->g_266 p_1233->g_574 p_1233->g_89 p_1233->g_501 p_1233->g_48 p_1233->g_102 p_1233->g_108 p_1233->g_43 p_1233->g_32 p_1233->g_comm_values p_1233->g_101 p_1233->g_191 p_1233->g_258 p_1233->g_657 p_1233->g_658 p_1233->g_669 permutations p_1233->g_210 p_1233->g_694 p_1233->g_695 p_1233->g_350 p_1233->g_259 p_1233->g_348 p_1233->g_500 p_1233->g_752 p_1233->g_760 p_1233->g_761 p_1233->g_766 p_1233->g_194
 * writes: p_1233->g_102 p_1233->g_8 p_1233->g_165 p_1233->g_348 p_1233->g_101 p_1233->g_107 p_1233->g_89 p_1233->g_266 p_1233->g_108 p_1233->g_140 p_1233->g_144 p_1233->g_137 p_1233->g_337 p_1233->g_669 permutations p_1233->g_comm_values p_1233->l_comm_values p_1233->g_350 p_1233->g_336
 */
int8_t  func_12(uint16_t  p_13, int64_t * p_14, uint8_t  p_15, uint32_t  p_16, int64_t * p_17, struct S0 * p_1233)
{ /* block id: 144 */
    uint32_t l_361 = 0x8DE0973AL;
    VECTOR(uint8_t, 16) l_373 = (VECTOR(uint8_t, 16))(0xF1L, (VECTOR(uint8_t, 4))(0xF1L, (VECTOR(uint8_t, 2))(0xF1L, 0xDFL), 0xDFL), 0xDFL, 0xF1L, 0xDFL, (VECTOR(uint8_t, 2))(0xF1L, 0xDFL), (VECTOR(uint8_t, 2))(0xF1L, 0xDFL), 0xF1L, 0xDFL, 0xF1L, 0xDFL);
    uint8_t *l_374 = (void*)0;
    uint8_t *l_375 = (void*)0;
    uint8_t *l_376 = (void*)0;
    uint8_t *l_377[1][4][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_378 = 0L;
    int64_t **l_383 = (void*)0;
    int64_t **l_384 = &p_1233->g_102;
    uint8_t l_385 = 0x74L;
    int32_t *l_386 = (void*)0;
    int32_t *l_387[1][3][9] = {{{&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8},{&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8},{&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8}}};
    uint32_t l_416 = 0x02EBE50EL;
    uint32_t l_417[2][5] = {{0x55438575L,0x55438575L,0x55438575L,0x55438575L,0x55438575L},{0x55438575L,0x55438575L,0x55438575L,0x55438575L,0x55438575L}};
    VECTOR(int16_t, 8) l_470 = (VECTOR(int16_t, 8))(0x55A1L, (VECTOR(int16_t, 4))(0x55A1L, (VECTOR(int16_t, 2))(0x55A1L, 0x4535L), 0x4535L), 0x4535L, 0x55A1L, 0x4535L);
    int16_t *l_479 = &p_1233->g_137;
    int16_t l_506 = 0x4DCFL;
    int32_t **l_551 = (void*)0;
    int32_t **l_552[10] = {&p_1233->g_89,&l_387[0][2][6],&p_1233->g_89,&p_1233->g_89,&l_387[0][2][6],&p_1233->g_89,&p_1233->g_89,&l_387[0][2][6],&p_1233->g_89,&p_1233->g_89};
    uint16_t *l_561 = &p_1233->g_266;
    int64_t l_564[3][7][8] = {{{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L}},{{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L}},{{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L},{0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L,0x1CB35D7266D39C39L,0x1CB35D7266D39C39L,0x5ABCDE67ADC0F027L}}};
    int8_t l_567 = (-1L);
    int32_t l_568 = 0x26C03F5FL;
    uint32_t l_569 = 0x4F216B85L;
    int32_t l_579 = (-2L);
    VECTOR(uint8_t, 2) l_582 = (VECTOR(uint8_t, 2))(0x75L, 0xBFL);
    uint32_t l_589 = 4294967288UL;
    int32_t *l_592 = &l_579;
    VECTOR(int64_t, 8) l_608 = (VECTOR(int64_t, 8))(0x27CD00665D479F51L, (VECTOR(int64_t, 4))(0x27CD00665D479F51L, (VECTOR(int64_t, 2))(0x27CD00665D479F51L, 0x5707E68052EA3C84L), 0x5707E68052EA3C84L), 0x5707E68052EA3C84L, 0x27CD00665D479F51L, 0x5707E68052EA3C84L);
    int64_t l_711 = 0x1B43351F60DD491EL;
    int32_t l_747 = 1L;
    VECTOR(int8_t, 2) l_763 = (VECTOR(int8_t, 2))(0x7AL, (-2L));
    int8_t l_767 = 1L;
    int8_t l_768[5][9] = {{0x17L,0x58L,0x58L,0x17L,0x7CL,0x0EL,0x0EL,0x7CL,0x17L},{0x17L,0x58L,0x58L,0x17L,0x7CL,0x0EL,0x0EL,0x7CL,0x17L},{0x17L,0x58L,0x58L,0x17L,0x7CL,0x0EL,0x0EL,0x7CL,0x17L},{0x17L,0x58L,0x58L,0x17L,0x7CL,0x0EL,0x0EL,0x7CL,0x17L},{0x17L,0x58L,0x58L,0x17L,0x7CL,0x0EL,0x0EL,0x7CL,0x17L}};
    int8_t l_780 = (-1L);
    int i, j, k;
    p_1233->g_8 &= (((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(65534UL, ((VECTOR(uint16_t, 2))(0x468CL, 0x126DL)), 1UL)).z, 4)) || l_361) , (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))((safe_sub_func_uint64_t_u_u((FAKE_DIVERGE(p_1233->local_1_offset, get_local_id(1), 10) , (((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(p_1233->g_199.x, ((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 16))(p_1233->g_372.yxxyxyxxxyxxxyxx)).even, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 2))(l_373.sb3)).xxxxxxyx, ((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 16))(1UL, (l_378 |= l_373.s2), 255UL, 255UL, (safe_mod_func_uint64_t_u_u((p_1233->g_208.y || (((safe_lshift_func_int8_t_s_u(((((((*l_384) = (void*)0) == p_17) , &p_1233->g_103[2][0]) != (void*)0) > (*p_1233->g_335)), p_15)) ^ 0x9499636517044825L) || l_385)), p_13)), ((VECTOR(uint8_t, 4))(0xB1L)), 255UL, 0x05L, ((VECTOR(uint8_t, 2))(1UL)), ((VECTOR(uint8_t, 2))(255UL)), 0x10L)).s42))).yyyyxxyx)))))).s37)).yxyxyxxy))).s1)) , p_15), 6)) || 65535UL) && p_15)), p_1233->g_103[2][3])), 0x75L, 1UL, p_1233->g_31.x, 0x66L, ((VECTOR(uint8_t, 4))(0x08L)), ((VECTOR(uint8_t, 2))(0xC2L)), 0x4CL, l_361, 0xB9L, 0xA2L, 9UL)).s7, p_16)), p_16)));
    for (l_385 = (-14); (l_385 >= 23); l_385++)
    { /* block id: 150 */
        uint32_t *l_390 = &p_1233->g_165;
        VECTOR(uint64_t, 8) l_393 = (VECTOR(uint64_t, 8))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 5UL, 18446744073709551607UL);
        VECTOR(uint64_t, 2) l_394 = (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x1C86011412468BF4L);
        uint16_t **l_402 = (void*)0;
        uint16_t ***l_401 = &l_402;
        int8_t *l_415 = &p_1233->g_348[0];
        uint16_t **l_418[9] = {&p_1233->g_337,&p_1233->g_337,&p_1233->g_337,&p_1233->g_337,&p_1233->g_337,&p_1233->g_337,&p_1233->g_337,&p_1233->g_337,&p_1233->g_337};
        uint8_t l_420 = 0x21L;
        int32_t l_421[1][7];
        int32_t l_422 = 1L;
        int64_t *l_430[2];
        int32_t l_435 = 4L;
        VECTOR(int32_t, 16) l_439 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-1L)), (-1L)), (-1L), (-4L), (-1L), (VECTOR(int32_t, 2))((-4L), (-1L)), (VECTOR(int32_t, 2))((-4L), (-1L)), (-4L), (-1L), (-4L), (-1L));
        int16_t *l_481 = (void*)0;
        int32_t *l_482 = &l_378;
        VECTOR(int8_t, 4) l_494 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L));
        int8_t l_545 = 0x30L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_421[i][j] = 0x3A8782FEL;
        }
        for (i = 0; i < 2; i++)
            l_430[i] = &p_1233->g_103[0][3];
        (*p_1233->g_144) = (((*l_390) = GROUP_DIVERGE(0, 1)) , (l_422 = (((safe_sub_func_int64_t_s_s((((p_1233->g_282.x == (((VECTOR(uint64_t, 8))(l_393.s41127614)).s4 >= ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 8))(l_394.xxyxyyxy)).even))).hi)).hi)) & ((((((p_15 , &p_1233->g_336) == &p_13) < (safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((((+(safe_sub_func_uint8_t_u_u((((((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(3UL, 0x919B5841L)), ((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 16))(0x0F7B7E65L, (((*l_401) = &p_1233->g_337) == ((safe_mod_func_uint64_t_u_u(((safe_add_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s(p_15, ((((*l_390) = (p_1233->g_294.z > (p_1233->g_101 = (((((1UL && (((*l_415) = (l_394.x == p_15)) | l_393.s5)) > p_1233->g_201.sf) | 1UL) != l_416) , p_1233->g_295.w)))) >= p_1233->g_208.y) & p_16))), 0)), (*p_1233->g_335))) == l_394.y), l_417[0][4])) & p_1233->g_140.x) , l_394.x), 0x7AD8EE91EAF27400L)) , p_13), p_15)) , l_418[5])), p_1233->g_294.z, ((VECTOR(uint32_t, 2))(0xB630BACCL)), ((VECTOR(uint32_t, 4))(0x4E59B238L)), ((VECTOR(uint32_t, 2))(0x036C46F4L)), ((VECTOR(uint32_t, 2))(0x6142985DL)), 8UL, 0UL, 0x6658EF33L)).s68ad, ((VECTOR(uint32_t, 4))(1UL))))), 0UL, 0x53BB1EF1L)).s7 || p_15), 7L, ((VECTOR(int64_t, 8))(1L)), 0x43931D551D55D8CEL, ((VECTOR(int64_t, 4))(0x03DD00050365A202L)), (-1L))).sa0)).yxyy)).y , p_13) >= 0L) , p_1233->g_419[6][1][3]) == 1UL) > (*p_1233->g_337)), 3L))) , (-5L)) , l_420), l_394.y)), p_16))) | p_13) & p_13) || 2UL)) && 0x6A1AFFBAL), 1UL)) < l_421[0][4]) || p_15)));
        for (l_420 = 0; (l_420 == 10); ++l_420)
        { /* block id: 160 */
            int32_t l_429 = 5L;
            int32_t l_433 = (-1L);
            int16_t *l_480 = (void*)0;
            int32_t l_489 = 0x59A90E70L;
            int32_t l_541 = 0x6826602CL;
            int32_t l_542 = 0L;
            int32_t l_543[3][10][5] = {{{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L}},{{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L}},{{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L},{0x007A1300L,0x3EFDEC4AL,(-1L),0x4B7B2A15L,0x4B10C367L}}};
            int8_t l_544 = (-1L);
            VECTOR(uint64_t, 8) l_546 = (VECTOR(uint64_t, 8))(0xA296A0F718AC4AF4L, (VECTOR(uint64_t, 4))(0xA296A0F718AC4AF4L, (VECTOR(uint64_t, 2))(0xA296A0F718AC4AF4L, 0x67F6EFFE4B40DC87L), 0x67F6EFFE4B40DC87L), 0x67F6EFFE4B40DC87L, 0xA296A0F718AC4AF4L, 0x67F6EFFE4B40DC87L);
            int32_t *l_549[4];
            int32_t **l_550 = &l_387[0][2][6];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_549[i] = &l_429;
            (1 + 1);
        }
        if (p_16)
            continue;
    }
    (*p_1233->g_297) = &l_378;
    if ((p_15 , (safe_rshift_func_uint16_t_u_s(((*l_561) ^= (((void*)0 == l_377[0][1][1]) <= ((0x09F0D42DL > 0x9BE81850L) > (safe_mod_func_uint64_t_u_u(((((+(!(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(1UL, 0x6EDC03E679A7821DL)), 18446744073709551612UL, 7UL)).hi, ((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 16))((((VECTOR(uint32_t, 8))(p_1233->g_557.xyyxyxyx)).s4 | 1L), p_1233->g_558, (safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(0x3D9BE6B4L, p_13, (*p_1233->g_144), ((VECTOR(int32_t, 4))(0x1419F506L)), 1L)).s0173153523632170, ((VECTOR(int32_t, 16))((-2L))), ((VECTOR(int32_t, 16))(0L))))).s4, 0xF722AD79L)), p_1233->g_336, ((VECTOR(uint64_t, 8))(1UL)), p_1233->g_129.y, 0UL, 0x14509BBFC57CECDCL, 0xA48DE59715136B24L)), ((VECTOR(uint64_t, 16))(18446744073709551613UL))))).hi)), ((VECTOR(uint64_t, 8))(0xB912AA7ECE69B93BL)), ((VECTOR(uint64_t, 8))(0x348E8FB9D4B3D304L))))).hi))).hi, ((VECTOR(uint64_t, 2))(0x2E20C7A00363AA82L))))).hi && p_16))) <= 5UL) & p_13) != p_15), 18446744073709551613UL))))), p_13))))
    { /* block id: 210 */
        int8_t l_562 = 0L;
        int32_t l_563 = 0x38506318L;
        int32_t l_565 = 0x700D2635L;
        int32_t l_566[7][1][1] = {{{0x22F05360L}},{{0x22F05360L}},{{0x22F05360L}},{{0x22F05360L}},{{0x22F05360L}},{{0x22F05360L}},{{0x22F05360L}}};
        VECTOR(uint8_t, 16) l_607 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
        VECTOR(int8_t, 4) l_609 = (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, (-7L)), (-7L));
        int16_t l_630 = 0x5FA3L;
        VECTOR(uint16_t, 2) l_655 = (VECTOR(uint16_t, 2))(2UL, 65535UL);
        VECTOR(uint8_t, 16) l_663 = (VECTOR(uint8_t, 16))(0xDCL, (VECTOR(uint8_t, 4))(0xDCL, (VECTOR(uint8_t, 2))(0xDCL, 0x8DL), 0x8DL), 0x8DL, 0xDCL, 0x8DL, (VECTOR(uint8_t, 2))(0xDCL, 0x8DL), (VECTOR(uint8_t, 2))(0xDCL, 0x8DL), 0xDCL, 0x8DL, 0xDCL, 0x8DL);
        uint16_t **l_749[8][4][7] = {{{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335}},{{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335}},{{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335}},{{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335}},{{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335}},{{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335}},{{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335}},{{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335},{&p_1233->g_669[0],(void*)0,&p_1233->g_335,&l_561,&p_1233->g_669[0],&p_1233->g_335,&p_1233->g_335}}};
        VECTOR(int8_t, 16) l_759 = (VECTOR(int8_t, 16))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x27L), 0x27L), 0x27L, (-7L), 0x27L, (VECTOR(int8_t, 2))((-7L), 0x27L), (VECTOR(int8_t, 2))((-7L), 0x27L), (-7L), 0x27L, (-7L), 0x27L);
        int32_t *l_769 = &l_563;
        int i, j, k;
        ++l_569;
        for (l_569 = 0; (l_569 == 33); l_569 = safe_add_func_int8_t_s_s(l_569, 2))
        { /* block id: 214 */
            uint32_t *l_583 = &l_417[0][0];
            int32_t l_586 = 0x66F1C623L;
            int8_t *l_587 = (void*)0;
            uint16_t **l_588 = &p_1233->g_335;
            (**p_1233->g_297) = (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))((&l_567 == (void*)0), ((VECTOR(int16_t, 8))(p_1233->g_574.yywyzzzx)), 9L, ((safe_add_func_int64_t_s_s((((safe_add_func_uint64_t_u_u(((*p_1233->g_337) == 0x136EL), l_579)) <= (((*l_583) = (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_582.xyxy)).z, 0L))) == ((((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 8))(0x24E597AFL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((safe_add_func_uint8_t_u_u(l_586, (l_565 = l_562))) , ((void*)0 == l_588)), 0x5BC0EF1FL, 0x63040353L, 0x4FC67A41L)).x, p_13, 6L, 4L)), ((VECTOR(int32_t, 2))(0L)), 0x50C994DBL)).s2354651660213421, (int32_t)0x0A8D014DL, (int32_t)2L))).odd, ((VECTOR(int32_t, 8))(1L))))).s03, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))((-1L)))))), 0x6772218BL, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 2))(0x6B6BE583L)), ((VECTOR(int32_t, 2))(0x35C7FECDL)), 0L, ((VECTOR(int32_t, 2))(0x3D98758BL)), 1L, 0x4E18F864L)).s2464, ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 4))(0x20F14A5CL))))).y & 0x6422127FL) || p_15))) ^ 0x6DDFL), 18446744073709551615UL)) < p_15), ((VECTOR(int16_t, 4))((-1L))), 0x23FBL)).sa7ef, ((VECTOR(int16_t, 4))(0x60FDL))))), ((VECTOR(uint16_t, 4))(3UL))))).xzxwzyww, ((VECTOR(int32_t, 8))(0x0850771DL))))).s62)).odd < l_586);
            return l_589;
        }
        if (p_13)
        { /* block id: 220 */
            VECTOR(uint64_t, 16) l_606 = (VECTOR(uint64_t, 16))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 7UL), 7UL), 7UL, 18446744073709551608UL, 7UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 7UL), (VECTOR(uint64_t, 2))(18446744073709551608UL, 7UL), 18446744073709551608UL, 7UL, 18446744073709551608UL, 7UL);
            uint64_t l_624 = 18446744073709551608UL;
            uint64_t l_625 = 18446744073709551615UL;
            int32_t l_626[6][1][9] = {{{3L,0x2A720A50L,0x1283FFE6L,(-4L),0x1283FFE6L,0x2A720A50L,3L,0x7610E41EL,0x283F9EAFL}},{{3L,0x2A720A50L,0x1283FFE6L,(-4L),0x1283FFE6L,0x2A720A50L,3L,0x7610E41EL,0x283F9EAFL}},{{3L,0x2A720A50L,0x1283FFE6L,(-4L),0x1283FFE6L,0x2A720A50L,3L,0x7610E41EL,0x283F9EAFL}},{{3L,0x2A720A50L,0x1283FFE6L,(-4L),0x1283FFE6L,0x2A720A50L,3L,0x7610E41EL,0x283F9EAFL}},{{3L,0x2A720A50L,0x1283FFE6L,(-4L),0x1283FFE6L,0x2A720A50L,3L,0x7610E41EL,0x283F9EAFL}},{{3L,0x2A720A50L,0x1283FFE6L,(-4L),0x1283FFE6L,0x2A720A50L,3L,0x7610E41EL,0x283F9EAFL}}};
            VECTOR(int16_t, 16) l_654 = (VECTOR(int16_t, 16))(0x7776L, (VECTOR(int16_t, 4))(0x7776L, (VECTOR(int16_t, 2))(0x7776L, (-1L)), (-1L)), (-1L), 0x7776L, (-1L), (VECTOR(int16_t, 2))(0x7776L, (-1L)), (VECTOR(int16_t, 2))(0x7776L, (-1L)), 0x7776L, (-1L), 0x7776L, (-1L));
            uint32_t l_674 = 0UL;
            uint64_t l_690 = 18446744073709551615UL;
            VECTOR(int32_t, 16) l_715 = (VECTOR(int32_t, 16))(0x3D2EB7B7L, (VECTOR(int32_t, 4))(0x3D2EB7B7L, (VECTOR(int32_t, 2))(0x3D2EB7B7L, 1L), 1L), 1L, 0x3D2EB7B7L, 1L, (VECTOR(int32_t, 2))(0x3D2EB7B7L, 1L), (VECTOR(int32_t, 2))(0x3D2EB7B7L, 1L), 0x3D2EB7B7L, 1L, 0x3D2EB7B7L, 1L);
            uint64_t *l_730 = &l_690;
            uint8_t **l_735 = &l_377[0][1][3];
            VECTOR(int32_t, 8) l_738 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x3B009816L), 0x3B009816L), 0x3B009816L, (-6L), 0x3B009816L);
            uint64_t *l_745[3];
            uint16_t l_746 = 9UL;
            int16_t *l_748 = &l_506;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_745[i] = &l_625;
            for (l_361 = 0; (l_361 <= 53); l_361 = safe_add_func_uint64_t_u_u(l_361, 7))
            { /* block id: 223 */
                int32_t *l_593 = &l_579;
                VECTOR(int8_t, 4) l_610 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L));
                int8_t *l_619[2][7];
                int32_t l_631 = 0x30980722L;
                int32_t l_636 = 8L;
                uint32_t l_639 = 0x706120B2L;
                VECTOR(int16_t, 16) l_642 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L), (VECTOR(int16_t, 2))((-1L), (-2L)), (VECTOR(int16_t, 2))((-1L), (-2L)), (-1L), (-2L), (-1L), (-2L));
                int64_t *l_645 = &p_1233->g_103[0][5];
                VECTOR(uint64_t, 8) l_647 = (VECTOR(uint64_t, 8))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0xCC70F92390D4C749L), 0xCC70F92390D4C749L), 0xCC70F92390D4C749L, 18446744073709551609UL, 0xCC70F92390D4C749L);
                uint32_t **l_714[10][4] = {{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43}};
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_619[i][j] = &l_567;
                }
                if (l_566[6][0][0])
                    break;
                l_593 = l_592;
                if ((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 8))((safe_mul_func_uint16_t_u_u(0xEA42L, (safe_sub_func_uint64_t_u_u((p_13 > (l_626[2][0][3] = (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_u((l_625 |= (safe_mul_func_uint8_t_u_u((((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 4))(l_606.s3e21)).even, (uint64_t)(((((VECTOR(uint8_t, 4))(l_607.s4a4a)).w , &p_1233->g_350) == l_593) == GROUP_DIVERGE(2, 1))))).even && ((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 8))(0x1AB2B827E14EB71BL, (-10L), 0x3D519F16C219BC2EL, ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(1L, (-5L))), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_608.s60)))), 0x4ACE48CC8BECB7EBL, (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(l_609.zxywyxwx)).s07, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(l_610.wwwx)).ywyxxzwzwxxywywx, ((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(p_1233->g_611.s3650)).yyxxzwxzywzyzzwx, ((VECTOR(int8_t, 2))(2L, 4L)).xyyyxyyyxyyxxxxx)))))).sceac)).hi))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 4))(p_1233->g_612.wyyz)).ywxzzzywxyyzyywx))).s86))))).xxyxyxyy, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(6L, (safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(l_606.sd, 0)) , ((((p_1233->g_31.y ^ ((p_1233->g_611.s4 = l_606.s2) >= (safe_sub_func_int16_t_s_s(p_15, (((*l_593) = (safe_add_func_int8_t_s_s(((void*)0 != &l_593), p_13))) < l_607.s9))))) > l_606.s5) == 0x56206F9266D98BD9L) , p_16)), l_606.sd)), p_1233->g_295.x)), p_1233->g_165, ((VECTOR(int8_t, 2))(0L)), (-6L), ((VECTOR(int8_t, 2))((-3L))), 1L, l_624, (-2L), (-6L), 2L, 0x7AL, 4L, 0x0FL)).s33db)).odd, ((VECTOR(int8_t, 2))(9L))))).xxxxxxyy))))))).s7 >= p_13), 0x1CCF90A906D1973AL, 0L)).s35, ((VECTOR(int64_t, 2))(1L))))), 0x433BE88E5DCB2E0BL, (-1L), (-1L))).s21, ((VECTOR(int64_t, 2))((-1L)))))).lo), l_607.s1))), 6)) >= 18446744073709551615UL), p_1233->g_32.s7)))), p_1233->g_372.y)))), 9L, 0L, ((VECTOR(int64_t, 4))(0L)), 0x689E6D0B43616AC5L)).s1763720230120675, ((VECTOR(int64_t, 16))(0x321C0D98E6264F1CL))))), ((VECTOR(int64_t, 16))((-1L)))))).s3, p_1233->g_266)))
                { /* block id: 230 */
                    if (p_15)
                        break;
                }
                else
                { /* block id: 232 */
                    int32_t l_632 = 0x1A911B64L;
                    int32_t l_633 = (-8L);
                    int32_t l_635 = (-1L);
                    int32_t l_637 = 1L;
                    int32_t l_638 = 1L;
                    int32_t *l_646 = &l_631;
                    VECTOR(uint32_t, 2) l_656 = (VECTOR(uint32_t, 2))(0xCF4ADB5BL, 0xD8A5AA49L);
                    uint16_t **l_670 = &p_1233->g_337;
                    uint16_t **l_671 = (void*)0;
                    int64_t *l_675 = &p_1233->g_558;
                    int i;
                    for (l_569 = 9; (l_569 != 37); l_569++)
                    { /* block id: 235 */
                        int64_t l_629 = 7L;
                        VECTOR(int32_t, 4) l_634 = (VECTOR(int32_t, 4))(0x1A6E979DL, (VECTOR(int32_t, 2))(0x1A6E979DL, 0L), 0L);
                        int i;
                        (*l_593) = (*l_593);
                        ++l_639;
                        (*p_1233->g_144) |= (p_15 ^ p_16);
                        l_646 = func_39(p_1233->g_501.s7, ((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(3L, 1L, 0x247AL, 1L)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_642.sa054dd19)).even)))))).s7 & (FAKE_DIVERGE(p_1233->group_1_offset, get_group_id(1), 10) != (*p_1233->g_335))) & (safe_lshift_func_int16_t_s_s(((void*)0 == l_645), 15))), (*l_593), p_1233);
                    }
                    (**p_1233->g_297) = l_624;
                    (*p_1233->g_144) = (((VECTOR(uint64_t, 2))(l_647.s66)).even | (safe_div_func_int16_t_s_s(((*l_593) ^= (((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((((VECTOR(int16_t, 4))(l_654.s04cf)).w , ((VECTOR(uint16_t, 16))(l_655.xxyxyxyyxxxxxyyx)).sa), 15)), 2)) , (-9L)) , p_16)), (l_566[6][0][0] &= (((((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_656.yx)).xxyx)).xyzxyxxyyyzwywyx, ((VECTOR(uint32_t, 16))(p_1233->g_657.xzwwzyyyyxzzxxzz))))).sb | ((VECTOR(int32_t, 16))(p_1233->g_658.yyyyxxyyyyyyxxyy)).s5) , ((*l_479) = (safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(0x3ED2L, ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 4))(l_663.s685b)).lo, ((VECTOR(uint8_t, 2))(0x79L, 7UL))))), 0UL)).w, ((((safe_mod_func_int8_t_s_s(((l_626[4][0][5] | (safe_unary_minus_func_uint64_t_u(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 16))((safe_mul_func_int16_t_s_s(((((p_1233->g_669[1] = ((*l_670) = p_1233->g_669[1])) == (((((safe_div_func_uint32_t_u_u(((((p_15 || (((*l_646) ^= (l_606.s1 , (4294967295UL < l_609.w))) >= ((((p_1233->g_comm_values[p_1233->tid] |= l_674) <= l_607.s2) > l_626[2][0][3]) , p_1233->g_501.sa))) , p_16) ^ FAKE_DIVERGE(p_1233->global_0_offset, get_global_id(0), 10)) || l_624), (*p_1233->g_89))) , l_675) != (void*)0) == p_15) , &p_13)) > 0xDC3E39BBFFD1B46BL) | p_16), GROUP_DIVERGE(1, 1))), ((VECTOR(uint64_t, 2))(18446744073709551615UL)), ((VECTOR(uint64_t, 2))(0x6B56F65B104CDDA1L)), p_13, 0x7345E3CAFD65CD20L, GROUP_DIVERGE(1, 1), ((VECTOR(uint64_t, 4))(1UL)), 0xB6666F24FB5669D3L, ((VECTOR(uint64_t, 2))(0xAB21D30FCEB6E135L)), 18446744073709551615UL)).s05, ((VECTOR(uint64_t, 2))(18446744073709551615UL))))).odd))) && p_13), p_15)) & p_13) >= 65532UL) , l_674))), p_15)))) >= 0x5236L)))));
                }
                if ((((l_563 |= p_13) && (~((safe_mod_func_int8_t_s_s(((void*)0 == &l_479), ((safe_lshift_func_int8_t_s_u(((safe_mod_func_int64_t_s_s(((safe_div_func_int32_t_s_s(p_13, (((0UL != (safe_div_func_int32_t_s_s((**p_1233->g_297), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL)).yxxy)).w))) >= (+((*l_479) = (safe_div_func_uint8_t_u_u(0x25L, (safe_div_func_uint32_t_u_u(((p_1233->g_210.y && (((9L == 0UL) , 7L) < 0x188BL)) == (-1L)), p_15))))))) , l_563))) > l_609.z), l_655.y)) < l_663.s3), 4)) , (-8L)))) <= l_690))) | 0x751FL))
                { /* block id: 253 */
                    (*l_593) = (-8L);
                }
                else
                { /* block id: 255 */
                    int64_t *l_705 = &l_564[2][6][3];
                    uint8_t l_710 = 0x38L;
                    uint32_t *l_712 = &p_1233->g_350;
                    uint32_t **l_713[8][7] = {{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43},{&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43,&p_1233->g_43}};
                    int i, j;
                    (*p_1233->g_89) ^= (safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(0, 1), (p_1233->g_694 != p_1233->g_695[2][1])))));
                    if ((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(p_15, ((safe_sub_func_int8_t_s_s(((*l_593) = ((*p_1233->g_144) | ((safe_rshift_func_uint16_t_u_s((*l_593), (((*l_712) |= (((*l_705) = (+p_16)) || (p_1233->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1233->tid, 51))] = ((safe_add_func_int16_t_s_s((safe_div_func_uint32_t_u_u((((p_16 && (((void*)0 != &p_1233->g_669[1]) | l_710)) && l_711) >= 1UL), (*p_1233->g_89))), 2L)) || 8L)))) , p_15))) , p_13))), 0xABL)) ^ l_710))), l_710)))
                    { /* block id: 261 */
                        l_714[8][2] = l_713[0][0];
                        (*l_593) ^= ((VECTOR(int32_t, 2))(l_715.s63)).hi;
                    }
                    else
                    { /* block id: 264 */
                        (*p_1233->g_89) = l_565;
                    }
                    if ((atomic_inc(&p_1233->g_atomic_input[79 * get_linear_group_id() + 43]) == 0))
                    { /* block id: 268 */
                        int32_t l_717 = 0x3DC2C885L;
                        int32_t *l_716[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_716[i] = &l_717;
                        l_716[0] = (void*)0;
                        unsigned int result = 0;
                        result += l_717;
                        atomic_add(&p_1233->g_special_values[79 * get_linear_group_id() + 43], result);
                    }
                    else
                    { /* block id: 270 */
                        (1 + 1);
                    }
                    if (l_624)
                        break;
                }
            }
            (*l_592) &= (*p_1233->g_89);
            atomic_and(&p_1233->g_atomic_reduction[get_linear_group_id()], (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((((((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((p_13 , ((*l_748) ^= ((FAKE_DIVERGE(p_1233->local_2_offset, get_local_id(2), 10) , ((*l_730)++)) ^ ((p_16 != (safe_sub_func_int16_t_s_s((l_626[2][0][3] ^= (&l_385 == ((*l_735) = &p_15))), (safe_add_func_uint16_t_u_u(((((((VECTOR(int32_t, 4))(l_738.s1226)).y || (0L & ((((safe_add_func_uint32_t_u_u((l_566[2][0][0] |= ((VECTOR(uint32_t, 4))(0xA27C9EC4L, 4294967295UL, 0xC71DE867L, 0UL)).z), l_738.s6)) , ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(l_663.sc, 9)), (((l_746 = ((((void*)0 == (*p_1233->g_297)) || 0xEA6AL) | GROUP_DIVERGE(2, 1))) != p_1233->g_48) ^ l_655.x))) ^ 1UL)) & 0x13L) <= p_15))) ^ l_747) || p_1233->g_103[1][4]) , (*p_1233->g_335)), (*p_1233->g_259)))))) == 0x7D6D4AAE5C15244EL)))), p_16)), p_15)) & 255UL) , 0x725A0126L) , l_749[5][0][2]) != (void*)0), p_15)), p_1233->g_348[1])), p_1233->g_500.y)), p_13)));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1233->v_collective += p_1233->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        else
        { /* block id: 284 */
            VECTOR(int8_t, 4) l_762 = (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), (-10L)), (-10L));
            int32_t l_770 = 0x20C96FCBL;
            int32_t l_771 = 0x2B6B2EF6L;
            int i;
            (*l_592) ^= ((safe_sub_func_uint8_t_u_u((p_15 = ((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 4))(p_1233->g_752.xxyx)).yyzyxzyyzwwzxwyz, ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 4))(l_609.x, 1UL, 249UL, 248UL)).wwzxzxxy, (uint8_t)(safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((4294967295UL < (safe_rshift_func_uint16_t_u_s(((*p_1233->g_335) = 0xD5C4L), 1))), ((((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(l_759.sb95e812a2d2457b3)).sb5e5, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 2))(p_1233->g_760.s45)).xyyyyxxyxxxyxxxy, ((VECTOR(int8_t, 2))(9L, 0L)).xxyxyxyxxxxxyxyy))).even, ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x2DL, 1L)))).yxyxyyyyyxyyxyxx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1233->g_761.s0a91ddaf52b51a1a)))).sf583)).yyxzzwxw)).s01, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(0x73L, 0x0DL, 0x7EL, 0L)).even, ((VECTOR(int8_t, 4))(l_762.yzxw)).even, ((VECTOR(int8_t, 8))(l_763.xxxyyyxy)).s04)))))), (-1L), (-1L))).zwwwwxxzwyyzyzzy))).s66a3, ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(p_16, ((l_769 = func_66(((safe_rshift_func_uint8_t_u_s(((-1L) && 5UL), p_15)) , ((VECTOR(int8_t, 2))(p_1233->g_766.ww)).hi), l_767, func_18((l_768[0][0] != 5UL), p_15, l_762.z, p_17, &p_1233->g_103[0][1], p_1233), &p_1233->g_103[1][4], p_1233)) == (void*)0), p_15, 0x58L, p_1233->g_194.sf, 0x2CL, (-4L), 0x15L)).s60, ((VECTOR(int8_t, 2))(0x5FL)), ((VECTOR(int8_t, 2))(0x4CL))))).xyxy))).wzxxwzyw))).odd))).x <= 0x58L) | (*p_1233->g_89)))), 6))))).s0706113217774504, ((VECTOR(uint8_t, 16))(255UL))))).s5), p_13)) <= l_609.x);
            l_771 = (l_770 = (*p_1233->g_144));
            (*p_1233->g_144) = (-1L);
        }
    }
    else
    { /* block id: 293 */
        VECTOR(uint64_t, 8) l_776 = (VECTOR(uint64_t, 8))(0xDCBDE1E71881CDC9L, (VECTOR(uint64_t, 4))(0xDCBDE1E71881CDC9L, (VECTOR(uint64_t, 2))(0xDCBDE1E71881CDC9L, 0xE298C3188F1D3F71L), 0xE298C3188F1D3F71L), 0xE298C3188F1D3F71L, 0xDCBDE1E71881CDC9L, 0xE298C3188F1D3F71L);
        uint64_t *l_777 = (void*)0;
        uint64_t *l_778 = (void*)0;
        uint64_t *l_779[4][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
        int32_t l_781 = 7L;
        int8_t *l_786 = (void*)0;
        int8_t *l_787 = &p_1233->g_101;
        int32_t l_788 = 0x44CFC0D6L;
        int64_t *l_789 = &l_564[1][6][0];
        int32_t *l_790 = &l_579;
        int32_t l_794 = 0L;
        int i, j;
        (*p_1233->g_89) ^= ((((safe_add_func_uint64_t_u_u((l_781 |= (l_780 = ((VECTOR(uint64_t, 16))(l_776.s7431111314137554)).s4)), p_16)) >= ((p_15 &= FAKE_DIVERGE(p_1233->global_1_offset, get_global_id(1), 10)) , (((0x5D0D28EA97670FF2L > (safe_add_func_uint64_t_u_u((p_13 , (safe_add_func_int8_t_s_s(((*l_787) = 2L), (l_788 = FAKE_DIVERGE(p_1233->global_0_offset, get_global_id(0), 10))))), ((*l_789) = (l_776.s3 ^ 7L))))) > (l_790 != ((((safe_mul_func_uint8_t_u_u((l_794 ^= ((safe_unary_minus_func_uint64_t_u((FAKE_DIVERGE(p_1233->local_2_offset, get_local_id(2), 10) != ((p_15 && (*l_790)) || 1L)))) <= 0x7D1C1945L)), FAKE_DIVERGE(p_1233->group_1_offset, get_group_id(1), 10))) && p_1233->g_199.w) | 0x7A27L) , &l_794))) < p_16))) == 7L) | 5L);
        for (l_711 = (-19); (l_711 > (-2)); l_711++)
        { /* block id: 304 */
            l_790 = (*p_1233->g_297);
        }
        (*p_1233->g_144) ^= ((void*)0 == &p_1233->g_490);
    }
    return p_1233->g_419[6][1][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1233->g_144 p_1233->g_107 p_1233->g_8
 * writes: p_1233->g_107 p_1233->g_8
 */
int64_t * func_18(int32_t  p_19, uint32_t  p_20, int64_t  p_21, int64_t * p_22, int64_t * p_23, struct S0 * p_1233)
{ /* block id: 134 */
    VECTOR(uint32_t, 2) l_353 = (VECTOR(uint32_t, 2))(6UL, 0xD2C072C9L);
    int i;
    (*p_1233->g_144) = (*p_1233->g_144);
    (*p_1233->g_144) = ((void*)0 == &p_1233->g_266);
    l_353.y++;
    for (p_1233->g_8 = (-10); (p_1233->g_8 < (-30)); p_1233->g_8 = safe_sub_func_int16_t_s_s(p_1233->g_8, 3))
    { /* block id: 140 */
        int64_t *l_358 = &p_1233->g_103[1][1];
        return l_358;
    }
    return &p_1233->g_103[0][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1233->g_282 p_1233->g_294 p_1233->g_295 p_1233->g_8 p_1233->g_89 p_1233->g_comm_values p_1233->g_208 p_1233->g_297 p_1233->g_101 p_1233->g_144 p_1233->g_259 p_1233->g_137
 * writes: p_1233->g_102 p_1233->g_89 p_1233->g_101 p_1233->g_165 p_1233->g_107 p_1233->g_266 p_1233->g_335 p_1233->g_337 p_1233->g_137 p_1233->g_348
 */
int32_t  func_35(int32_t  p_36, uint32_t * p_37, uint32_t  p_38, struct S0 * p_1233)
{ /* block id: 104 */
    VECTOR(int32_t, 4) l_280 = (VECTOR(int32_t, 4))(0x59515032L, (VECTOR(int32_t, 2))(0x59515032L, 0x7886292DL), 0x7886292DL);
    int32_t l_281[9] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
    VECTOR(uint32_t, 2) l_283 = (VECTOR(uint32_t, 2))(4294967295UL, 0x580E44C2L);
    VECTOR(uint64_t, 4) l_284 = (VECTOR(uint64_t, 4))(0x42F22EB9DF43732FL, (VECTOR(uint64_t, 2))(0x42F22EB9DF43732FL, 18446744073709551615UL), 18446744073709551615UL);
    uint64_t *l_287 = (void*)0;
    int64_t **l_288 = (void*)0;
    int64_t **l_289 = &p_1233->g_102;
    int64_t *l_291 = &p_1233->g_103[1][4];
    int64_t **l_290 = &l_291;
    int64_t *l_296 = (void*)0;
    VECTOR(int32_t, 4) l_310 = (VECTOR(int32_t, 4))(0x5C84DC25L, (VECTOR(int32_t, 2))(0x5C84DC25L, 0x14AA813AL), 0x14AA813AL);
    uint16_t l_313 = 6UL;
    uint32_t l_324 = 4294967295UL;
    VECTOR(uint64_t, 8) l_332 = (VECTOR(uint64_t, 8))(0x26074DED6C069431L, (VECTOR(uint64_t, 4))(0x26074DED6C069431L, (VECTOR(uint64_t, 2))(0x26074DED6C069431L, 0UL), 0UL), 0UL, 0x26074DED6C069431L, 0UL);
    uint16_t *l_338 = &l_313;
    uint16_t *l_346[4];
    int i;
    for (i = 0; i < 4; i++)
        l_346[i] = &l_313;
    l_281[6] |= (!((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_280.wxzw)).odd)).xxxxxyyxyyxxyxyx)).sd);
    (*p_1233->g_297) = ((p_36 ^ (&p_1233->g_103[1][4] == (((l_280.w = (((VECTOR(uint64_t, 8))(safe_clamp_func(VECTOR(uint64_t, 8),VECTOR(uint64_t, 8),((VECTOR(uint64_t, 2))(0xBB0617D8716D3989L, 18446744073709551610UL)).xyyyxxyy, ((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 4))(p_1233->g_282.zyyw)).even, ((VECTOR(uint32_t, 8))(l_283.yyyxxyxx)).s17))).xyyyxxyy, ((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 8))(l_284.yzwzxyxy)).lo, ((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 16))(((!(safe_div_func_int64_t_s_s((l_287 == (((((*l_290) = ((*l_289) = &p_1233->g_103[2][1])) != &p_1233->g_103[1][4]) ^ ((safe_mod_func_uint8_t_u_u(2UL, (((~l_283.x) | ((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(p_1233->g_294.zz)).xyyyyyxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((6UL >= (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(p_1233->g_295.zwyyxywx)).s14)).odd & l_281[5])) >= p_38), 0x4580L, 1L, p_36, ((VECTOR(int16_t, 4))(0L)), ((VECTOR(int16_t, 4))(0L)), 0x669CL, 0x5627L, 0x20BBL, 0x5E78L)))).lo))).s6) | p_1233->g_8))) && (*p_1233->g_89))) , l_291)), l_280.z))) | 0L), 0UL, 0x6EF3A2CEB77BD81FL, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 18446744073709551606UL, ((VECTOR(uint64_t, 4))(0x03617F2254E2F47AL)), GROUP_DIVERGE(2, 1), FAKE_DIVERGE(p_1233->global_0_offset, get_global_id(0), 10), p_1233->g_comm_values[p_1233->tid], 4UL, 0x53C2F0F649D557D1L)).sde01))), ((VECTOR(uint64_t, 4))(0xF9A5ECCFE28A8602L))))).hi)).xxxx)).wzwzxxwy, ((VECTOR(uint64_t, 8))(1UL)))))))).s4 | 1UL)) != p_1233->g_208.x) , &p_1233->g_103[1][4]))) , &l_281[6]);
    for (p_1233->g_101 = 0; (p_1233->g_101 <= 17); p_1233->g_101++)
    { /* block id: 112 */
        uint64_t l_307 = 18446744073709551615UL;
        int32_t l_311[3];
        int32_t *l_316 = (void*)0;
        int32_t *l_317 = (void*)0;
        int32_t *l_318 = (void*)0;
        int32_t *l_319 = &l_311[2];
        int32_t *l_320 = &p_1233->g_8;
        int32_t *l_321 = &l_281[6];
        int32_t *l_322 = &p_1233->g_8;
        int32_t *l_323[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint16_t *l_329 = (void*)0;
        uint16_t *l_334 = &l_313;
        uint16_t **l_333[1][8][3];
        int8_t *l_347 = &p_1233->g_348[0];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_311[i] = 0L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 8; j++)
            {
                for (k = 0; k < 3; k++)
                    l_333[i][j][k] = &l_334;
            }
        }
        for (p_1233->g_165 = (-8); (p_1233->g_165 > 20); p_1233->g_165++)
        { /* block id: 115 */
            int32_t *l_302 = (void*)0;
            int32_t *l_303 = (void*)0;
            int32_t *l_304 = &p_1233->g_8;
            int32_t *l_305 = &l_281[2];
            int32_t *l_306 = &p_1233->g_8;
            int32_t *l_312[7][4] = {{(void*)0,&p_1233->g_8,&l_281[5],&l_311[2]},{(void*)0,&p_1233->g_8,&l_281[5],&l_311[2]},{(void*)0,&p_1233->g_8,&l_281[5],&l_311[2]},{(void*)0,&p_1233->g_8,&l_281[5],&l_311[2]},{(void*)0,&p_1233->g_8,&l_281[5],&l_311[2]},{(void*)0,&p_1233->g_8,&l_281[5],&l_311[2]},{(void*)0,&p_1233->g_8,&l_281[5],&l_311[2]}};
            int i, j;
            ++l_307;
            (*p_1233->g_144) = ((VECTOR(int32_t, 2))(l_310.yw)).even;
            l_313--;
        }
        l_324++;
        l_280.y = (((*l_347) = (((FAKE_DIVERGE(p_1233->local_2_offset, get_local_id(2), 10) && (&p_1233->g_266 != l_329)) <= ((p_1233->g_266 = (safe_div_func_int8_t_s_s((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_332.s07637324)).s1667423270206616)).sd ^ 0x069618F63C8FB82FL), p_1233->g_282.w))) ^ ((*l_321) = ((l_338 = (p_1233->g_337 = (p_1233->g_335 = p_1233->g_259))) != (void*)0)))) & (safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((p_38 != ((safe_mod_func_int16_t_s_s(((*p_1233->g_259) &= (safe_unary_minus_func_uint32_t_u(((l_346[2] = &l_313) != (void*)0)))), p_38)) & (*l_319))), p_1233->g_208.x)) > p_36), 4)))) == 9UL);
    }
    return p_38;
}


/* ------------------------------------------ */
/* 
 * reads : p_1233->g_48 p_1233->g_102 p_1233->g_108 p_1233->g_43 p_1233->g_32 p_1233->g_129 p_1233->g_8 p_1233->g_comm_values p_1233->g_103 p_1233->g_144 p_1233->g_101 p_1233->g_157 p_1233->g_140 p_1233->g_107 p_1233->g_89 p_1233->g_137 p_1233->g_191 p_1233->g_193 p_1233->g_194 p_1233->g_165 p_1233->g_199 p_1233->g_201 p_1233->g_208 p_1233->g_210 p_1233->g_213 p_1233->g_258 p_1233->g_266
 * writes: p_1233->g_89 p_1233->g_101 p_1233->g_108 p_1233->g_8 p_1233->g_140 p_1233->g_144 p_1233->g_107 p_1233->g_165 p_1233->g_137 p_1233->g_266
 */
uint32_t * func_39(uint8_t  p_40, uint32_t  p_41, uint64_t  p_42, struct S0 * p_1233)
{ /* block id: 10 */
    int16_t l_65 = 0x3D0BL;
    VECTOR(int16_t, 4) l_77 = (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x6FEAL), 0x6FEAL);
    int8_t *l_100 = &p_1233->g_101;
    int64_t *l_104 = (void*)0;
    int32_t *l_249[1];
    int64_t l_250 = 0x7A5C55A6DB96E405L;
    VECTOR(uint32_t, 4) l_262 = (VECTOR(uint32_t, 4))(0xE3DAA532L, (VECTOR(uint32_t, 2))(0xE3DAA532L, 1UL), 1UL);
    uint32_t l_264 = 0x428539D0L;
    uint32_t *l_279 = &permutations[(safe_mod_func_uint32_t_u_u(p_1233->g_32.s1, 10))][(safe_mod_func_uint32_t_u_u(p_1233->tid, 51))];
    int i, j;
    for (i = 0; i < 1; i++)
        l_249[i] = (void*)0;
    l_250 = (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((8UL & func_53(((((safe_lshift_func_int16_t_s_s(p_42, 15)) , (safe_rshift_func_int16_t_s_s(func_59(l_65, func_66(((*l_100) = ((safe_mul_func_int16_t_s_s(func_73((safe_unary_minus_func_uint64_t_u((p_40 >= ((VECTOR(int16_t, 4))(0x6130L, ((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(l_77.yyzwwyzz)).s4266646773263071))).sa, 3L, (-10L))).w))), (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(0UL, 0x5BB4L)).odd, 12)), p_1233), 0x0C38L)) , (FAKE_DIVERGE(p_1233->global_2_offset, get_global_id(2), 10) >= (safe_rshift_func_uint16_t_u_s(65533UL, (safe_mod_func_int16_t_s_s(((0x7EBA289590F8BFC2L != (safe_div_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(p_41, 0x2A3AB4843688B2ADL)), p_1233->g_48)) , p_41), FAKE_DIVERGE(p_1233->local_1_offset, get_local_id(1), 10)))) == GROUP_DIVERGE(2, 1)), 0x6619L))))))), p_42, p_1233->g_102, l_104, p_1233), &p_1233->g_103[0][4], p_1233->g_43, l_104, p_1233), 7))) || l_77.x) == l_65), p_1233)), l_77.y)) & 0xDA20L), l_77.y));
    if ((+1L))
    { /* block id: 89 */
        int16_t *l_255 = &l_65;
        int16_t *l_257 = &l_65;
        int16_t **l_256 = &l_257;
        int32_t l_263 = 0x6E28B10FL;
        (*p_1233->g_89) = (safe_div_func_int16_t_s_s(((*l_255) = (safe_add_func_int8_t_s_s((+(~(((p_40 , l_255) != ((*l_256) = l_255)) <= 0x18L))), p_1233->g_191.s7))), (((+(p_1233->g_258[1][1] == ((safe_mod_func_int8_t_s_s((((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),uint32_t,((VECTOR(uint32_t, 4))(l_262.wyww)), (uint32_t)l_263, (uint32_t)(0x75A8L >= (p_41 >= 0x33E3FD7AL))))).w , p_1233->g_48), p_40)) , (void*)0))) || 8UL) && 0x242BAB7D97D985EBL)));
    }
    else
    { /* block id: 93 */
        uint16_t *l_265 = &p_1233->g_266;
        uint32_t l_269 = 4294967295UL;
        int16_t **l_270 = &p_1233->g_259;
        int32_t l_271 = 0x0F645FABL;
        int32_t l_272 = 0x7427DB5CL;
        int32_t l_273 = 5L;
        int32_t l_274 = 7L;
        int32_t l_275 = 0x529A4E53L;
        uint16_t l_276 = 0x53E9L;
        l_270 = ((l_269 ^= ((*p_1233->g_89) = (l_264 <= (--(*l_265))))) , &p_1233->g_259);
        l_276++;
    }
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1233->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 51)), permutations[(safe_mod_func_uint32_t_u_u(p_1233->g_32.s1, 10))][(safe_mod_func_uint32_t_u_u(p_1233->tid, 51))]));
    return l_279;
}


/* ------------------------------------------ */
/* 
 * reads : p_1233->g_8 p_1233->g_144 p_1233->g_101 p_1233->g_157 p_1233->g_140 p_1233->g_107 p_1233->g_89 p_1233->g_129 p_1233->g_103 p_1233->g_137 p_1233->g_191 p_1233->g_193 p_1233->g_194 p_1233->g_165 p_1233->g_199 p_1233->g_201 p_1233->g_208 p_1233->g_210 p_1233->g_213 p_1233->g_102
 * writes: p_1233->g_8 p_1233->g_107 p_1233->g_165 p_1233->g_101 p_1233->g_137
 */
int8_t  func_53(int32_t  p_54, struct S0 * p_1233)
{ /* block id: 44 */
    int8_t l_162 = 0L;
    int32_t l_182 = 0x14E27A1FL;
    VECTOR(uint32_t, 2) l_202 = (VECTOR(uint32_t, 2))(0x7DDD2FD3L, 0xE52D0761L);
    VECTOR(uint64_t, 8) l_203 = (VECTOR(uint64_t, 8))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0xF79DBF3E37CBACDEL), 0xF79DBF3E37CBACDEL), 0xF79DBF3E37CBACDEL, 18446744073709551608UL, 0xF79DBF3E37CBACDEL);
    int32_t l_236 = 0x09C6021FL;
    int i;
    for (p_1233->g_8 = 0; (p_1233->g_8 > (-1)); --p_1233->g_8)
    { /* block id: 47 */
        uint32_t l_181 = 0x8D31A1BCL;
        (*p_1233->g_144) = (-5L);
        for (p_54 = 0; (p_54 >= (-24)); p_54--)
        { /* block id: 51 */
            int32_t *l_150 = &p_1233->g_8;
            VECTOR(uint64_t, 2) l_158 = (VECTOR(uint64_t, 2))(0xB06FB9F2B8033DE5L, 0x1DF1B9022DA0C809L);
            VECTOR(uint64_t, 8) l_159 = (VECTOR(uint64_t, 8))(0x9B6CC735A5136129L, (VECTOR(uint64_t, 4))(0x9B6CC735A5136129L, (VECTOR(uint64_t, 2))(0x9B6CC735A5136129L, 0xA0D023A199CE5FD4L), 0xA0D023A199CE5FD4L), 0xA0D023A199CE5FD4L, 0x9B6CC735A5136129L, 0xA0D023A199CE5FD4L);
            int i;
            l_150 = l_150;
            l_182 |= ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))((safe_sub_func_int32_t_s_s((p_1233->g_101 , ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(p_1233->g_157.s63f86758)).s4, p_1233->g_140.x)) || p_54)), ((((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 4))(l_158.xyyx)).yzyyyzywwwzwwwyy, ((VECTOR(uint64_t, 16))(l_159.s7164551115216743))))))).s2 , (safe_sub_func_int8_t_s_s(p_1233->g_157.se, l_162))) >= ((((safe_rshift_func_int16_t_s_u((((p_1233->g_165 = (p_1233->g_101 || FAKE_DIVERGE(p_1233->group_1_offset, get_group_id(1), 10))) ^ ((safe_rshift_func_uint16_t_u_u(((-1L) ^ (safe_div_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1233->global_2_offset, get_global_id(2), 10), 1)), (((safe_unary_minus_func_uint16_t_u(((((((((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(p_1233->g_107, ((!(1L ^ (*p_1233->g_89))) != p_1233->g_129.x), 0UL, 0x2F48L)).zywwywyw, ((VECTOR(uint16_t, 8))(0UL))))).s6, (-10L))), 7L)) != 0x4013L) || (*l_150)) , 0xC717972EL) <= p_54) && p_1233->g_129.x) < (*l_150)) | 0x3CL))) , (-1L)) , p_1233->g_129.x))) || 18446744073709551611UL), (*l_150))) && l_181), p_1233->g_103[1][4]))), p_54)) != l_162)) >= p_1233->g_157.s6), 12)) < 0x3D819F3F1462849AL) , (*l_150)) | p_1233->g_140.y)) <= l_162) > 0x45L))), p_54, 0x380A167AL, 0x61962AD8L)).wzywzwwy, ((VECTOR(int32_t, 8))(0x0E18812CL))))).s0;
            for (l_182 = (-15); (l_182 == (-18)); l_182 = safe_sub_func_int32_t_s_s(l_182, 1))
            { /* block id: 57 */
                return p_1233->g_101;
            }
        }
    }
    for (p_1233->g_101 = (-18); (p_1233->g_101 <= (-24)); --p_1233->g_101)
    { /* block id: 64 */
        VECTOR(uint32_t, 8) l_200 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 8UL), 8UL), 8UL, 0UL, 8UL);
        VECTOR(uint64_t, 8) l_209 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x89A831BD17697576L), 0x89A831BD17697576L), 0x89A831BD17697576L, 0UL, 0x89A831BD17697576L);
        int32_t l_220 = 1L;
        int32_t l_234 = (-1L);
        int32_t l_235[5];
        int i;
        for (i = 0; i < 5; i++)
            l_235[i] = (-3L);
        for (p_1233->g_137 = (-22); (p_1233->g_137 > (-16)); p_1233->g_137 = safe_add_func_int16_t_s_s(p_1233->g_137, 8))
        { /* block id: 67 */
            VECTOR(uint64_t, 4) l_192 = (VECTOR(uint64_t, 4))(0x0DBB3CFD91DCD4F5L, (VECTOR(uint64_t, 2))(0x0DBB3CFD91DCD4F5L, 0xB14C57F72F92A1E7L), 0xB14C57F72F92A1E7L);
            uint32_t *l_195 = &p_1233->g_165;
            VECTOR(uint32_t, 8) l_198 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 9UL), 9UL), 9UL, 4294967295UL, 9UL);
            uint64_t *l_204 = (void*)0;
            uint64_t *l_205 = (void*)0;
            uint64_t *l_206[7];
            int32_t l_207 = 0L;
            int32_t *l_218 = (void*)0;
            int32_t *l_219 = (void*)0;
            int32_t *l_221 = &l_220;
            int32_t *l_222 = (void*)0;
            int32_t *l_223 = &l_182;
            int32_t *l_224 = &l_207;
            int32_t *l_225 = &l_220;
            int32_t *l_226 = &l_207;
            int32_t *l_227 = &l_220;
            int32_t *l_228 = &p_1233->g_8;
            int32_t *l_229 = &l_182;
            int32_t *l_230 = &l_220;
            int32_t *l_231 = &l_220;
            int32_t *l_232 = &l_182;
            int32_t *l_233[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t l_237 = 0x2EEEA668L;
            int i;
            for (i = 0; i < 7; i++)
                l_206[i] = (void*)0;
            l_220 ^= ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(p_1233->g_191.s70)).xyxyyyyxxyyyxyyx)).odd)).s5755162463410550, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 2))(l_192.yw)).yyxyxxxyyyyxyxyy, ((VECTOR(uint64_t, 16))(p_1233->g_193.sad3a7c03d4c3e8a8))))).s2f, ((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))((l_192.w , (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_1233->g_194.sd4bd)).xzwwxzwy)).s3140701277356131)).s1 < (++(*l_195)))), 0x6975CEA956860F10L, 18446744073709551615UL, 1UL)).zwxzzxwxzxyzywwy)).hi, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 4))(6UL, 0UL, 0x0980935E24448C1BL, 0x881EC2600E6A5700L)).yyzxxxxx, ((VECTOR(uint64_t, 8))(GROUP_DIVERGE(2, 1), 6UL, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 16))(0x458D0A81A918C557L, 1UL, ((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_198.s23504117)))).s51, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(0x430AAFB5L, ((VECTOR(uint32_t, 8))(p_1233->g_199.wwwzzxww)).s3, ((VECTOR(uint32_t, 8))(l_200.s57570037)).s0, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(p_1233->g_201.sc599f4a2)).s5353071355716452)).even, ((VECTOR(uint32_t, 4))(0UL, ((VECTOR(uint32_t, 2))(l_202.yy)), 0xFE618443L)).yzzyywwy))).s66)), ((VECTOR(uint32_t, 2))(0x076AC924L, 0x90D0EAF7L)), 0UL)).s30))))), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_203.s2755)), (GROUP_DIVERGE(0, 1) , (l_207 = FAKE_DIVERGE(p_1233->local_0_offset, get_local_id(0), 10))), ((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x74FC59C9FE5A3418L, 4L)).yyyyyxxyyxxxxyyx)).sdb))).yyyxyyxxxyyxxyxy, ((VECTOR(uint64_t, 16))(p_1233->g_208.yyxxxyyyyxyyxyyx))))).sa9))))), 0xBC99AC3B9206231FL)).s43, ((VECTOR(uint64_t, 4))(l_209.s7626)).lo))).xxxyyyxy, ((VECTOR(uint64_t, 8))(p_1233->g_210.xyxxxyyx))))), 1UL, 0UL, ((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_1233->g_213.xxxy)).hi)).even, 0x3EL)) == ((*l_195) = p_1233->g_201.sb)), ((((l_192.w , p_1233->g_102) == (GROUP_DIVERGE(0, 1) , p_1233->g_102)) , (*p_1233->g_102)) , (safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(p_54, 3)), 0x1AD3L))), 0x61BC6A5EF5CE96DDL, 0x4845BDF1AA62D46DL)).s31, ((VECTOR(uint64_t, 2))(4UL)), ((VECTOR(uint64_t, 2))(0x71815FD38649A409L))))))), 0x3462242444259CD4L, 1UL, 0xB604AA25C52C26C8L))))).odd)).ywwzzzzxwzyywzyy)).odd))).lo))).odd, ((VECTOR(uint64_t, 2))(0xB34DE86E1F5E1482L))))), ((VECTOR(uint64_t, 2))(1UL))))), 18446744073709551610UL, 0x01D3A4CB9A50B5D9L)).xwwxyxwwwxyyyzzx))))).odd)).s0, l_198.s1)) <= (*p_1233->g_89));
            --l_237;
        }
    }
    if ((atomic_inc(&p_1233->g_atomic_input[79 * get_linear_group_id() + 63]) == 8))
    { /* block id: 76 */
        int32_t l_241 = 0x7B00D799L;
        int32_t *l_240 = &l_241;
        l_240 = l_240;
        for (l_241 = 0; (l_241 != (-22)); l_241--)
        { /* block id: 80 */
            VECTOR(int32_t, 4) l_244 = (VECTOR(int32_t, 4))(0x5C5EBCC9L, (VECTOR(int32_t, 2))(0x5C5EBCC9L, (-7L)), (-7L));
            VECTOR(int32_t, 2) l_245 = (VECTOR(int32_t, 2))(1L, 0x26F94548L);
            uint64_t l_246[9] = {3UL,0x06B8AFC5FDFF8A22L,3UL,3UL,0x06B8AFC5FDFF8A22L,3UL,3UL,0x06B8AFC5FDFF8A22L,3UL};
            int32_t l_247 = 0x3D0EAAE5L;
            VECTOR(uint32_t, 4) l_248 = (VECTOR(uint32_t, 4))(0x9A3CBAA0L, (VECTOR(uint32_t, 2))(0x9A3CBAA0L, 0x0CEC7D19L), 0x0CEC7D19L);
            int i;
            l_246[5] = (((VECTOR(int8_t, 2))(0L, 1L)).even , (((VECTOR(int32_t, 2))(l_244.xy)).hi , ((VECTOR(int32_t, 16))(l_245.yyyxyyxyyxxyxyyx)).sf));
            l_248.w = l_247;
        }
        unsigned int result = 0;
        result += l_241;
        atomic_add(&p_1233->g_special_values[79 * get_linear_group_id() + 63], result);
    }
    else
    { /* block id: 84 */
        (1 + 1);
    }
    return p_1233->g_201.sf;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1233->g_89 p_1233->g_144
 */
int16_t  func_59(uint16_t  p_60, uint32_t * p_61, int64_t * p_62, uint32_t * p_63, int64_t * p_64, struct S0 * p_1233)
{ /* block id: 40 */
    uint32_t l_145 = 1UL;
    p_1233->g_89 = &p_1233->g_8;
    p_1233->g_144 = &p_1233->g_107;
    return l_145;
}


/* ------------------------------------------ */
/* 
 * reads : p_1233->g_108 p_1233->g_43 p_1233->g_32 p_1233->g_129 p_1233->g_8 p_1233->g_comm_values p_1233->g_103 p_1233->g_48
 * writes: p_1233->g_108 p_1233->g_8 p_1233->g_140
 */
uint32_t * func_66(int8_t  p_67, int32_t  p_68, int64_t * p_69, int64_t * p_70, struct S0 * p_1233)
{ /* block id: 28 */
    VECTOR(int32_t, 16) l_105 = (VECTOR(int32_t, 16))(0x390C49C4L, (VECTOR(int32_t, 4))(0x390C49C4L, (VECTOR(int32_t, 2))(0x390C49C4L, 7L), 7L), 7L, 0x390C49C4L, 7L, (VECTOR(int32_t, 2))(0x390C49C4L, 7L), (VECTOR(int32_t, 2))(0x390C49C4L, 7L), 0x390C49C4L, 7L, 0x390C49C4L, 7L);
    VECTOR(uint64_t, 4) l_115 = (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 1UL), 1UL);
    VECTOR(uint32_t, 2) l_127 = (VECTOR(uint32_t, 2))(0x57027B00L, 0x6FDA0F33L);
    VECTOR(uint32_t, 8) l_128 = (VECTOR(uint32_t, 8))(0x5443C598L, (VECTOR(uint32_t, 4))(0x5443C598L, (VECTOR(uint32_t, 2))(0x5443C598L, 0x9582D88AL), 0x9582D88AL), 0x9582D88AL, 0x5443C598L, 0x9582D88AL);
    int32_t l_138[2][2];
    uint32_t *l_142 = (void*)0;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_138[i][j] = 0x26C6404DL;
    }
    if (((VECTOR(int32_t, 8))(l_105.s2a46f7bb)).s6)
    { /* block id: 29 */
        int32_t *l_106[6][9] = {{&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8},{&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8},{&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8},{&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8},{&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8},{&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8,&p_1233->g_8}};
        int i, j;
        ++p_1233->g_108;
        return p_1233->g_43;
    }
    else
    { /* block id: 32 */
        VECTOR(uint64_t, 8) l_116 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xE3592EE31D69C6CBL), 0xE3592EE31D69C6CBL), 0xE3592EE31D69C6CBL, 1UL, 0xE3592EE31D69C6CBL);
        int32_t *l_117 = &p_1233->g_8;
        VECTOR(int32_t, 4) l_126 = (VECTOR(int32_t, 4))(0x71057C5AL, (VECTOR(int32_t, 2))(0x71057C5AL, 0x7C68CCC0L), 0x7C68CCC0L);
        uint64_t l_132 = 0x953446F389892B93L;
        int64_t *l_133 = (void*)0;
        int64_t *l_134[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_135 = 0x8B289E97L;
        int16_t *l_136[1];
        int32_t *l_139[7][3][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
        int8_t l_141[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_136[i] = &p_1233->g_137;
        for (i = 0; i < 1; i++)
            l_141[i] = 0L;
        l_141[0] &= (p_1233->g_140.y = ((safe_div_func_int8_t_s_s((+(safe_lshift_func_uint16_t_u_s((0xAB3331872FA3325BL > ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_115.zwwz)))).zxxxzyxz, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_116.s6705)).odd)), 0x7FDBCA6F5D40A597L, 0xDC2514DC0AA95C4CL)).wxxxywzz))).s3), (((VECTOR(int32_t, 8))(((*l_117) = l_116.s1), 0L, (-1L), (-10L), p_68, 0x0C49FD6BL, (-5L), 0x7262FDF4L)).s3 || ((255UL >= (safe_lshift_func_int16_t_s_u((l_138[0][1] = (safe_mul_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(((void*)0 != &p_67), (~(p_67 >= p_1233->g_32.s3)))) , ((l_105.s3 = (!(safe_sub_func_uint32_t_u_u((((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 16))(l_126.xwwxwwxxxwxxwwyw)), ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 2))(l_127.xx)).xyyy, ((VECTOR(uint32_t, 4))(l_128.s4765))))).zyxywywxxzywyyzw))).s2 , ((((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 8))(p_1233->g_129.wzwywyyy)).s7362073320125002))).s2d, ((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 4))(((safe_sub_func_int8_t_s_s(l_132, p_68)) , (*l_117)), 0x26E25E85E3D3FF89L, 0x54D7D783D8B82488L, (-1L))).zzyyxywwxyyzxzww, ((VECTOR(int64_t, 16))(0L))))).se8))).yyxxxyxx, (int64_t)p_1233->g_108))).s5 | p_1233->g_comm_values[p_1233->tid]) , l_105.s9)), 1L)))) == p_67)) && l_135), p_1233->g_103[1][4]))), 2))) != p_1233->g_48))))), p_67)) | p_68));
    }
    return l_142;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1233->g_89
 */
int16_t  func_73(int16_t  p_74, int32_t  p_75, struct S0 * p_1233)
{ /* block id: 11 */
    if ((atomic_inc(&p_1233->g_atomic_input[79 * get_linear_group_id() + 22]) == 8))
    { /* block id: 13 */
        int8_t l_80 = 0x31L;
        VECTOR(int16_t, 2) l_81 = (VECTOR(int16_t, 2))(0x4AB7L, (-1L));
        int64_t l_82 = 0x112365208590E404L;
        int i;
        l_82 = (l_81.y = l_80);
        for (l_81.y = 11; (l_81.y < (-11)); l_81.y--)
        { /* block id: 18 */
            int32_t *l_85 = (void*)0;
            int32_t l_87 = 0x1A7C6434L;
            int32_t *l_86 = &l_87;
            int32_t *l_88 = &l_87;
            l_86 = l_85;
            l_88 = l_88;
        }
        unsigned int result = 0;
        result += l_80;
        result += l_81.y;
        result += l_81.x;
        result += l_82;
        atomic_add(&p_1233->g_special_values[79 * get_linear_group_id() + 22], result);
    }
    else
    { /* block id: 22 */
        (1 + 1);
    }
    p_1233->g_89 = (p_74 , &p_75);
    return p_75;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[79];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 79; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[79];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 79; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[51];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 51; i++)
            l_comm_values[i] = 1;
    struct S0 c_1234;
    struct S0* p_1233 = &c_1234;
    struct S0 c_1235 = {
        0L, // p_1233->g_8
        (VECTOR(uint32_t, 2))(0x8C245E32L, 7UL), // p_1233->g_31
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x21B78CD9L), 0x21B78CD9L), 0x21B78CD9L, 4294967295UL, 0x21B78CD9L, (VECTOR(uint32_t, 2))(4294967295UL, 0x21B78CD9L), (VECTOR(uint32_t, 2))(4294967295UL, 0x21B78CD9L), 4294967295UL, 0x21B78CD9L, 4294967295UL, 0x21B78CD9L), // p_1233->g_32
        (void*)0, // p_1233->g_43
        0x3E0D8C1BL, // p_1233->g_48
        &p_1233->g_8, // p_1233->g_89
        0x74L, // p_1233->g_101
        {{(-1L),0x02C9C021E97B7270L,0x02C9C021E97B7270L,(-1L),(-1L),0x02C9C021E97B7270L,0x02C9C021E97B7270L},{(-1L),0x02C9C021E97B7270L,0x02C9C021E97B7270L,(-1L),(-1L),0x02C9C021E97B7270L,0x02C9C021E97B7270L},{(-1L),0x02C9C021E97B7270L,0x02C9C021E97B7270L,(-1L),(-1L),0x02C9C021E97B7270L,0x02C9C021E97B7270L}}, // p_1233->g_103
        &p_1233->g_103[1][4], // p_1233->g_102
        0x2EAE63DAL, // p_1233->g_107
        4294967292UL, // p_1233->g_108
        (VECTOR(int64_t, 4))(0x0A3BB3813AB97BF4L, (VECTOR(int64_t, 2))(0x0A3BB3813AB97BF4L, 0x77D6962B2ED70B56L), 0x77D6962B2ED70B56L), // p_1233->g_129
        (-1L), // p_1233->g_137
        (VECTOR(int32_t, 2))((-1L), (-6L)), // p_1233->g_140
        (void*)0, // p_1233->g_143
        &p_1233->g_107, // p_1233->g_144
        (void*)0, // p_1233->g_151
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1233->g_152
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 5UL), 5UL), 5UL, 255UL, 5UL, (VECTOR(uint8_t, 2))(255UL, 5UL), (VECTOR(uint8_t, 2))(255UL, 5UL), 255UL, 5UL, 255UL, 5UL), // p_1233->g_157
        0UL, // p_1233->g_165
        (VECTOR(uint64_t, 8))(0xB535A2EF250DD05DL, (VECTOR(uint64_t, 4))(0xB535A2EF250DD05DL, (VECTOR(uint64_t, 2))(0xB535A2EF250DD05DL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xB535A2EF250DD05DL, 18446744073709551615UL), // p_1233->g_191
        (VECTOR(uint64_t, 16))(0x7A7D87469C53B778L, (VECTOR(uint64_t, 4))(0x7A7D87469C53B778L, (VECTOR(uint64_t, 2))(0x7A7D87469C53B778L, 0xCC9B7E9D353CF452L), 0xCC9B7E9D353CF452L), 0xCC9B7E9D353CF452L, 0x7A7D87469C53B778L, 0xCC9B7E9D353CF452L, (VECTOR(uint64_t, 2))(0x7A7D87469C53B778L, 0xCC9B7E9D353CF452L), (VECTOR(uint64_t, 2))(0x7A7D87469C53B778L, 0xCC9B7E9D353CF452L), 0x7A7D87469C53B778L, 0xCC9B7E9D353CF452L, 0x7A7D87469C53B778L, 0xCC9B7E9D353CF452L), // p_1233->g_193
        (VECTOR(uint32_t, 16))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0x27C71321L), 0x27C71321L), 0x27C71321L, 5UL, 0x27C71321L, (VECTOR(uint32_t, 2))(5UL, 0x27C71321L), (VECTOR(uint32_t, 2))(5UL, 0x27C71321L), 5UL, 0x27C71321L, 5UL, 0x27C71321L), // p_1233->g_194
        (VECTOR(uint32_t, 4))(0xD675C657L, (VECTOR(uint32_t, 2))(0xD675C657L, 0x371F8D49L), 0x371F8D49L), // p_1233->g_199
        (VECTOR(uint32_t, 16))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0UL), 0UL), 0UL, 4294967293UL, 0UL, (VECTOR(uint32_t, 2))(4294967293UL, 0UL), (VECTOR(uint32_t, 2))(4294967293UL, 0UL), 4294967293UL, 0UL, 4294967293UL, 0UL), // p_1233->g_201
        (VECTOR(uint64_t, 2))(0UL, 0x5F733A1D27760F31L), // p_1233->g_208
        (VECTOR(uint64_t, 2))(0xF5C7FB6934789D02L, 0UL), // p_1233->g_210
        (VECTOR(uint8_t, 2))(0x7BL, 0xE8L), // p_1233->g_213
        &p_1233->g_137, // p_1233->g_259
        {{&p_1233->g_259,&p_1233->g_259},{&p_1233->g_259,&p_1233->g_259},{&p_1233->g_259,&p_1233->g_259},{&p_1233->g_259,&p_1233->g_259}}, // p_1233->g_258
        65535UL, // p_1233->g_266
        (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967287UL), 4294967287UL), // p_1233->g_282
        (VECTOR(int16_t, 4))(0x2730L, (VECTOR(int16_t, 2))(0x2730L, 0L), 0L), // p_1233->g_294
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0L), 0L), // p_1233->g_295
        &p_1233->g_89, // p_1233->g_297
        1UL, // p_1233->g_336
        &p_1233->g_336, // p_1233->g_335
        &p_1233->g_336, // p_1233->g_337
        {0L,0L}, // p_1233->g_348
        4UL, // p_1233->g_350
        (VECTOR(uint8_t, 2))(251UL, 0xF2L), // p_1233->g_372
        {{{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L}},{{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L}},{{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L}},{{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L}},{{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L}},{{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L}},{{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L}},{{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L},{0x3037B6E0L,0L,0x2FD5020EL,0x3037B6E0L}}}, // p_1233->g_419
        1UL, // p_1233->g_490
        (VECTOR(int8_t, 8))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x19L), 0x19L), 0x19L, (-10L), 0x19L), // p_1233->g_493
        (VECTOR(int64_t, 2))(1L, 6L), // p_1233->g_500
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x21F29BAD15243FB3L), 0x21F29BAD15243FB3L), 0x21F29BAD15243FB3L, 0L, 0x21F29BAD15243FB3L, (VECTOR(int64_t, 2))(0L, 0x21F29BAD15243FB3L), (VECTOR(int64_t, 2))(0L, 0x21F29BAD15243FB3L), 0L, 0x21F29BAD15243FB3L, 0L, 0x21F29BAD15243FB3L), // p_1233->g_501
        (VECTOR(uint32_t, 2))(0UL, 1UL), // p_1233->g_557
        0x7B91AD969EAED7A3L, // p_1233->g_558
        (VECTOR(int16_t, 4))(0x51B1L, (VECTOR(int16_t, 2))(0x51B1L, (-10L)), (-10L)), // p_1233->g_574
        (VECTOR(int8_t, 8))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 5L), 5L), 5L, 2L, 5L), // p_1233->g_611
        (VECTOR(int8_t, 4))(0x5AL, (VECTOR(int8_t, 2))(0x5AL, 0x7AL), 0x7AL), // p_1233->g_612
        (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 1UL), 1UL), // p_1233->g_657
        (VECTOR(int32_t, 2))(0x6460FF30L, 8L), // p_1233->g_658
        {&p_1233->g_336,&p_1233->g_336}, // p_1233->g_669
        (void*)0, // p_1233->g_694
        {{{&p_1233->g_669[1]},{&p_1233->g_669[1]},{&p_1233->g_669[1]},{&p_1233->g_669[1]},{&p_1233->g_669[1]},{&p_1233->g_669[1]}},{{&p_1233->g_669[1]},{&p_1233->g_669[1]},{&p_1233->g_669[1]},{&p_1233->g_669[1]},{&p_1233->g_669[1]},{&p_1233->g_669[1]}},{{&p_1233->g_669[1]},{&p_1233->g_669[1]},{&p_1233->g_669[1]},{&p_1233->g_669[1]},{&p_1233->g_669[1]},{&p_1233->g_669[1]}}}, // p_1233->g_696
        {{&p_1233->g_696[2][3][0],&p_1233->g_696[2][5][0],&p_1233->g_696[0][1][0],&p_1233->g_696[2][5][0],&p_1233->g_696[2][3][0],&p_1233->g_696[2][3][0]},{&p_1233->g_696[2][3][0],&p_1233->g_696[2][5][0],&p_1233->g_696[0][1][0],&p_1233->g_696[2][5][0],&p_1233->g_696[2][3][0],&p_1233->g_696[2][3][0]},{&p_1233->g_696[2][3][0],&p_1233->g_696[2][5][0],&p_1233->g_696[0][1][0],&p_1233->g_696[2][5][0],&p_1233->g_696[2][3][0],&p_1233->g_696[2][3][0]},{&p_1233->g_696[2][3][0],&p_1233->g_696[2][5][0],&p_1233->g_696[0][1][0],&p_1233->g_696[2][5][0],&p_1233->g_696[2][3][0],&p_1233->g_696[2][3][0]},{&p_1233->g_696[2][3][0],&p_1233->g_696[2][5][0],&p_1233->g_696[0][1][0],&p_1233->g_696[2][5][0],&p_1233->g_696[2][3][0],&p_1233->g_696[2][3][0]}}, // p_1233->g_695
        (VECTOR(uint8_t, 2))(253UL, 0x64L), // p_1233->g_752
        (VECTOR(int8_t, 8))(0x7DL, (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, 0L), 0L), 0L, 0x7DL, 0L), // p_1233->g_760
        (VECTOR(int8_t, 16))(0x7BL, (VECTOR(int8_t, 4))(0x7BL, (VECTOR(int8_t, 2))(0x7BL, 0x4CL), 0x4CL), 0x4CL, 0x7BL, 0x4CL, (VECTOR(int8_t, 2))(0x7BL, 0x4CL), (VECTOR(int8_t, 2))(0x7BL, 0x4CL), 0x7BL, 0x4CL, 0x7BL, 0x4CL), // p_1233->g_761
        (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0x3EL), 0x3EL), // p_1233->g_766
        {0x468D5158L,0x468D5158L,0x468D5158L,0x468D5158L,0x468D5158L,0x468D5158L,0x468D5158L,0x468D5158L,0x468D5158L}, // p_1233->g_799
        (VECTOR(int8_t, 2))(0x40L, (-1L)), // p_1233->g_870
        {{{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL}},{{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL}},{{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL}},{{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL}},{{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL}},{{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL}},{{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL}},{{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL},{1UL,0UL,1UL}}}, // p_1233->g_897
        {{{&p_1233->g_89,&p_1233->g_89},{&p_1233->g_89,&p_1233->g_89}},{{&p_1233->g_89,&p_1233->g_89},{&p_1233->g_89,&p_1233->g_89}},{{&p_1233->g_89,&p_1233->g_89},{&p_1233->g_89,&p_1233->g_89}},{{&p_1233->g_89,&p_1233->g_89},{&p_1233->g_89,&p_1233->g_89}},{{&p_1233->g_89,&p_1233->g_89},{&p_1233->g_89,&p_1233->g_89}},{{&p_1233->g_89,&p_1233->g_89},{&p_1233->g_89,&p_1233->g_89}},{{&p_1233->g_89,&p_1233->g_89},{&p_1233->g_89,&p_1233->g_89}},{{&p_1233->g_89,&p_1233->g_89},{&p_1233->g_89,&p_1233->g_89}}}, // p_1233->g_915
        &p_1233->g_89, // p_1233->g_916
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xA3AC81F6FAADF773L), 0xA3AC81F6FAADF773L), 0xA3AC81F6FAADF773L, 18446744073709551615UL, 0xA3AC81F6FAADF773L), // p_1233->g_927
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x350D1F8E960F7488L), // p_1233->g_928
        (VECTOR(uint64_t, 8))(0xD841AF515DA2E501L, (VECTOR(uint64_t, 4))(0xD841AF515DA2E501L, (VECTOR(uint64_t, 2))(0xD841AF515DA2E501L, 5UL), 5UL), 5UL, 0xD841AF515DA2E501L, 5UL), // p_1233->g_929
        {{{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335}},{{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335}},{{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335}},{{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335}},{{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335}},{{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335},{&p_1233->g_335,&p_1233->g_335,&p_1233->g_335,&p_1233->g_335}}}, // p_1233->g_945
        &p_1233->g_945[3][0][3], // p_1233->g_944
        (VECTOR(int8_t, 4))(0x5BL, (VECTOR(int8_t, 2))(0x5BL, 0L), 0L), // p_1233->g_978
        (VECTOR(int8_t, 4))(0x4CL, (VECTOR(int8_t, 2))(0x4CL, 0x60L), 0x60L), // p_1233->g_979
        (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), (-10L)), (-10L)), // p_1233->g_980
        &p_1233->g_89, // p_1233->g_989
        (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), 1L), 1L), // p_1233->g_1025
        (VECTOR(int64_t, 16))(0x4AE349CFE9135F14L, (VECTOR(int64_t, 4))(0x4AE349CFE9135F14L, (VECTOR(int64_t, 2))(0x4AE349CFE9135F14L, 1L), 1L), 1L, 0x4AE349CFE9135F14L, 1L, (VECTOR(int64_t, 2))(0x4AE349CFE9135F14L, 1L), (VECTOR(int64_t, 2))(0x4AE349CFE9135F14L, 1L), 0x4AE349CFE9135F14L, 1L, 0x4AE349CFE9135F14L, 1L), // p_1233->g_1027
        (VECTOR(int64_t, 2))((-4L), 0x1F1469451217EEBEL), // p_1233->g_1030
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int64_t, 2))(0L, (-1L)), (VECTOR(int64_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L)), // p_1233->g_1031
        (VECTOR(int32_t, 4))(0x34E2FAE6L, (VECTOR(int32_t, 2))(0x34E2FAE6L, 0x46206FB8L), 0x46206FB8L), // p_1233->g_1032
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int16_t, 2))(0L, 1L), (VECTOR(int16_t, 2))(0L, 1L), 0L, 1L, 0L, 1L), // p_1233->g_1036
        (VECTOR(int32_t, 2))(0x6FF0C6EBL, 0x31DFF8BFL), // p_1233->g_1051
        (VECTOR(uint16_t, 2))(6UL, 65531UL), // p_1233->g_1084
        (VECTOR(int8_t, 4))(0x38L, (VECTOR(int8_t, 2))(0x38L, 0x0DL), 0x0DL), // p_1233->g_1101
        (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), (-4L)), (-4L)), // p_1233->g_1121
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x2C632E3706333F0BL), 0x2C632E3706333F0BL), // p_1233->g_1122
        (VECTOR(int32_t, 4))(0x6535FFC4L, (VECTOR(int32_t, 2))(0x6535FFC4L, 0L), 0L), // p_1233->g_1128
        (VECTOR(int32_t, 16))(0x1B53B57FL, (VECTOR(int32_t, 4))(0x1B53B57FL, (VECTOR(int32_t, 2))(0x1B53B57FL, 6L), 6L), 6L, 0x1B53B57FL, 6L, (VECTOR(int32_t, 2))(0x1B53B57FL, 6L), (VECTOR(int32_t, 2))(0x1B53B57FL, 6L), 0x1B53B57FL, 6L, 0x1B53B57FL, 6L), // p_1233->g_1144
        (VECTOR(int32_t, 2))(0x0E56AFADL, 0x64F0C2FAL), // p_1233->g_1145
        {{(void*)0,(void*)0,(void*)0,&p_1233->g_490,&p_1233->g_490,(void*)0,(void*)0,&p_1233->g_490},{(void*)0,(void*)0,(void*)0,&p_1233->g_490,&p_1233->g_490,(void*)0,(void*)0,&p_1233->g_490},{(void*)0,(void*)0,(void*)0,&p_1233->g_490,&p_1233->g_490,(void*)0,(void*)0,&p_1233->g_490},{(void*)0,(void*)0,(void*)0,&p_1233->g_490,&p_1233->g_490,(void*)0,(void*)0,&p_1233->g_490},{(void*)0,(void*)0,(void*)0,&p_1233->g_490,&p_1233->g_490,(void*)0,(void*)0,&p_1233->g_490},{(void*)0,(void*)0,(void*)0,&p_1233->g_490,&p_1233->g_490,(void*)0,(void*)0,&p_1233->g_490},{(void*)0,(void*)0,(void*)0,&p_1233->g_490,&p_1233->g_490,(void*)0,(void*)0,&p_1233->g_490},{(void*)0,(void*)0,(void*)0,&p_1233->g_490,&p_1233->g_490,(void*)0,(void*)0,&p_1233->g_490}}, // p_1233->g_1179
        &p_1233->g_1179[6][7], // p_1233->g_1178
        (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0UL), 0UL), // p_1233->g_1191
        (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), // p_1233->g_1192
        &p_1233->g_89, // p_1233->g_1222
        (-7L), // p_1233->g_1228
        0, // p_1233->v_collective
        sequence_input[get_global_id(0)], // p_1233->global_0_offset
        sequence_input[get_global_id(1)], // p_1233->global_1_offset
        sequence_input[get_global_id(2)], // p_1233->global_2_offset
        sequence_input[get_local_id(0)], // p_1233->local_0_offset
        sequence_input[get_local_id(1)], // p_1233->local_1_offset
        sequence_input[get_local_id(2)], // p_1233->local_2_offset
        sequence_input[get_group_id(0)], // p_1233->group_0_offset
        sequence_input[get_group_id(1)], // p_1233->group_1_offset
        sequence_input[get_group_id(2)], // p_1233->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 51)), permutations[0][get_linear_local_id()])), // p_1233->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1234 = c_1235;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1233);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1233->g_8, "p_1233->g_8", print_hash_value);
    transparent_crc(p_1233->g_31.x, "p_1233->g_31.x", print_hash_value);
    transparent_crc(p_1233->g_31.y, "p_1233->g_31.y", print_hash_value);
    transparent_crc(p_1233->g_32.s0, "p_1233->g_32.s0", print_hash_value);
    transparent_crc(p_1233->g_32.s1, "p_1233->g_32.s1", print_hash_value);
    transparent_crc(p_1233->g_32.s2, "p_1233->g_32.s2", print_hash_value);
    transparent_crc(p_1233->g_32.s3, "p_1233->g_32.s3", print_hash_value);
    transparent_crc(p_1233->g_32.s4, "p_1233->g_32.s4", print_hash_value);
    transparent_crc(p_1233->g_32.s5, "p_1233->g_32.s5", print_hash_value);
    transparent_crc(p_1233->g_32.s6, "p_1233->g_32.s6", print_hash_value);
    transparent_crc(p_1233->g_32.s7, "p_1233->g_32.s7", print_hash_value);
    transparent_crc(p_1233->g_32.s8, "p_1233->g_32.s8", print_hash_value);
    transparent_crc(p_1233->g_32.s9, "p_1233->g_32.s9", print_hash_value);
    transparent_crc(p_1233->g_32.sa, "p_1233->g_32.sa", print_hash_value);
    transparent_crc(p_1233->g_32.sb, "p_1233->g_32.sb", print_hash_value);
    transparent_crc(p_1233->g_32.sc, "p_1233->g_32.sc", print_hash_value);
    transparent_crc(p_1233->g_32.sd, "p_1233->g_32.sd", print_hash_value);
    transparent_crc(p_1233->g_32.se, "p_1233->g_32.se", print_hash_value);
    transparent_crc(p_1233->g_32.sf, "p_1233->g_32.sf", print_hash_value);
    transparent_crc(p_1233->g_48, "p_1233->g_48", print_hash_value);
    transparent_crc(p_1233->g_101, "p_1233->g_101", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1233->g_103[i][j], "p_1233->g_103[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1233->g_107, "p_1233->g_107", print_hash_value);
    transparent_crc(p_1233->g_108, "p_1233->g_108", print_hash_value);
    transparent_crc(p_1233->g_129.x, "p_1233->g_129.x", print_hash_value);
    transparent_crc(p_1233->g_129.y, "p_1233->g_129.y", print_hash_value);
    transparent_crc(p_1233->g_129.z, "p_1233->g_129.z", print_hash_value);
    transparent_crc(p_1233->g_129.w, "p_1233->g_129.w", print_hash_value);
    transparent_crc(p_1233->g_137, "p_1233->g_137", print_hash_value);
    transparent_crc(p_1233->g_140.x, "p_1233->g_140.x", print_hash_value);
    transparent_crc(p_1233->g_140.y, "p_1233->g_140.y", print_hash_value);
    transparent_crc(p_1233->g_157.s0, "p_1233->g_157.s0", print_hash_value);
    transparent_crc(p_1233->g_157.s1, "p_1233->g_157.s1", print_hash_value);
    transparent_crc(p_1233->g_157.s2, "p_1233->g_157.s2", print_hash_value);
    transparent_crc(p_1233->g_157.s3, "p_1233->g_157.s3", print_hash_value);
    transparent_crc(p_1233->g_157.s4, "p_1233->g_157.s4", print_hash_value);
    transparent_crc(p_1233->g_157.s5, "p_1233->g_157.s5", print_hash_value);
    transparent_crc(p_1233->g_157.s6, "p_1233->g_157.s6", print_hash_value);
    transparent_crc(p_1233->g_157.s7, "p_1233->g_157.s7", print_hash_value);
    transparent_crc(p_1233->g_157.s8, "p_1233->g_157.s8", print_hash_value);
    transparent_crc(p_1233->g_157.s9, "p_1233->g_157.s9", print_hash_value);
    transparent_crc(p_1233->g_157.sa, "p_1233->g_157.sa", print_hash_value);
    transparent_crc(p_1233->g_157.sb, "p_1233->g_157.sb", print_hash_value);
    transparent_crc(p_1233->g_157.sc, "p_1233->g_157.sc", print_hash_value);
    transparent_crc(p_1233->g_157.sd, "p_1233->g_157.sd", print_hash_value);
    transparent_crc(p_1233->g_157.se, "p_1233->g_157.se", print_hash_value);
    transparent_crc(p_1233->g_157.sf, "p_1233->g_157.sf", print_hash_value);
    transparent_crc(p_1233->g_165, "p_1233->g_165", print_hash_value);
    transparent_crc(p_1233->g_191.s0, "p_1233->g_191.s0", print_hash_value);
    transparent_crc(p_1233->g_191.s1, "p_1233->g_191.s1", print_hash_value);
    transparent_crc(p_1233->g_191.s2, "p_1233->g_191.s2", print_hash_value);
    transparent_crc(p_1233->g_191.s3, "p_1233->g_191.s3", print_hash_value);
    transparent_crc(p_1233->g_191.s4, "p_1233->g_191.s4", print_hash_value);
    transparent_crc(p_1233->g_191.s5, "p_1233->g_191.s5", print_hash_value);
    transparent_crc(p_1233->g_191.s6, "p_1233->g_191.s6", print_hash_value);
    transparent_crc(p_1233->g_191.s7, "p_1233->g_191.s7", print_hash_value);
    transparent_crc(p_1233->g_193.s0, "p_1233->g_193.s0", print_hash_value);
    transparent_crc(p_1233->g_193.s1, "p_1233->g_193.s1", print_hash_value);
    transparent_crc(p_1233->g_193.s2, "p_1233->g_193.s2", print_hash_value);
    transparent_crc(p_1233->g_193.s3, "p_1233->g_193.s3", print_hash_value);
    transparent_crc(p_1233->g_193.s4, "p_1233->g_193.s4", print_hash_value);
    transparent_crc(p_1233->g_193.s5, "p_1233->g_193.s5", print_hash_value);
    transparent_crc(p_1233->g_193.s6, "p_1233->g_193.s6", print_hash_value);
    transparent_crc(p_1233->g_193.s7, "p_1233->g_193.s7", print_hash_value);
    transparent_crc(p_1233->g_193.s8, "p_1233->g_193.s8", print_hash_value);
    transparent_crc(p_1233->g_193.s9, "p_1233->g_193.s9", print_hash_value);
    transparent_crc(p_1233->g_193.sa, "p_1233->g_193.sa", print_hash_value);
    transparent_crc(p_1233->g_193.sb, "p_1233->g_193.sb", print_hash_value);
    transparent_crc(p_1233->g_193.sc, "p_1233->g_193.sc", print_hash_value);
    transparent_crc(p_1233->g_193.sd, "p_1233->g_193.sd", print_hash_value);
    transparent_crc(p_1233->g_193.se, "p_1233->g_193.se", print_hash_value);
    transparent_crc(p_1233->g_193.sf, "p_1233->g_193.sf", print_hash_value);
    transparent_crc(p_1233->g_194.s0, "p_1233->g_194.s0", print_hash_value);
    transparent_crc(p_1233->g_194.s1, "p_1233->g_194.s1", print_hash_value);
    transparent_crc(p_1233->g_194.s2, "p_1233->g_194.s2", print_hash_value);
    transparent_crc(p_1233->g_194.s3, "p_1233->g_194.s3", print_hash_value);
    transparent_crc(p_1233->g_194.s4, "p_1233->g_194.s4", print_hash_value);
    transparent_crc(p_1233->g_194.s5, "p_1233->g_194.s5", print_hash_value);
    transparent_crc(p_1233->g_194.s6, "p_1233->g_194.s6", print_hash_value);
    transparent_crc(p_1233->g_194.s7, "p_1233->g_194.s7", print_hash_value);
    transparent_crc(p_1233->g_194.s8, "p_1233->g_194.s8", print_hash_value);
    transparent_crc(p_1233->g_194.s9, "p_1233->g_194.s9", print_hash_value);
    transparent_crc(p_1233->g_194.sa, "p_1233->g_194.sa", print_hash_value);
    transparent_crc(p_1233->g_194.sb, "p_1233->g_194.sb", print_hash_value);
    transparent_crc(p_1233->g_194.sc, "p_1233->g_194.sc", print_hash_value);
    transparent_crc(p_1233->g_194.sd, "p_1233->g_194.sd", print_hash_value);
    transparent_crc(p_1233->g_194.se, "p_1233->g_194.se", print_hash_value);
    transparent_crc(p_1233->g_194.sf, "p_1233->g_194.sf", print_hash_value);
    transparent_crc(p_1233->g_199.x, "p_1233->g_199.x", print_hash_value);
    transparent_crc(p_1233->g_199.y, "p_1233->g_199.y", print_hash_value);
    transparent_crc(p_1233->g_199.z, "p_1233->g_199.z", print_hash_value);
    transparent_crc(p_1233->g_199.w, "p_1233->g_199.w", print_hash_value);
    transparent_crc(p_1233->g_201.s0, "p_1233->g_201.s0", print_hash_value);
    transparent_crc(p_1233->g_201.s1, "p_1233->g_201.s1", print_hash_value);
    transparent_crc(p_1233->g_201.s2, "p_1233->g_201.s2", print_hash_value);
    transparent_crc(p_1233->g_201.s3, "p_1233->g_201.s3", print_hash_value);
    transparent_crc(p_1233->g_201.s4, "p_1233->g_201.s4", print_hash_value);
    transparent_crc(p_1233->g_201.s5, "p_1233->g_201.s5", print_hash_value);
    transparent_crc(p_1233->g_201.s6, "p_1233->g_201.s6", print_hash_value);
    transparent_crc(p_1233->g_201.s7, "p_1233->g_201.s7", print_hash_value);
    transparent_crc(p_1233->g_201.s8, "p_1233->g_201.s8", print_hash_value);
    transparent_crc(p_1233->g_201.s9, "p_1233->g_201.s9", print_hash_value);
    transparent_crc(p_1233->g_201.sa, "p_1233->g_201.sa", print_hash_value);
    transparent_crc(p_1233->g_201.sb, "p_1233->g_201.sb", print_hash_value);
    transparent_crc(p_1233->g_201.sc, "p_1233->g_201.sc", print_hash_value);
    transparent_crc(p_1233->g_201.sd, "p_1233->g_201.sd", print_hash_value);
    transparent_crc(p_1233->g_201.se, "p_1233->g_201.se", print_hash_value);
    transparent_crc(p_1233->g_201.sf, "p_1233->g_201.sf", print_hash_value);
    transparent_crc(p_1233->g_208.x, "p_1233->g_208.x", print_hash_value);
    transparent_crc(p_1233->g_208.y, "p_1233->g_208.y", print_hash_value);
    transparent_crc(p_1233->g_210.x, "p_1233->g_210.x", print_hash_value);
    transparent_crc(p_1233->g_210.y, "p_1233->g_210.y", print_hash_value);
    transparent_crc(p_1233->g_213.x, "p_1233->g_213.x", print_hash_value);
    transparent_crc(p_1233->g_213.y, "p_1233->g_213.y", print_hash_value);
    transparent_crc(p_1233->g_266, "p_1233->g_266", print_hash_value);
    transparent_crc(p_1233->g_282.x, "p_1233->g_282.x", print_hash_value);
    transparent_crc(p_1233->g_282.y, "p_1233->g_282.y", print_hash_value);
    transparent_crc(p_1233->g_282.z, "p_1233->g_282.z", print_hash_value);
    transparent_crc(p_1233->g_282.w, "p_1233->g_282.w", print_hash_value);
    transparent_crc(p_1233->g_294.x, "p_1233->g_294.x", print_hash_value);
    transparent_crc(p_1233->g_294.y, "p_1233->g_294.y", print_hash_value);
    transparent_crc(p_1233->g_294.z, "p_1233->g_294.z", print_hash_value);
    transparent_crc(p_1233->g_294.w, "p_1233->g_294.w", print_hash_value);
    transparent_crc(p_1233->g_295.x, "p_1233->g_295.x", print_hash_value);
    transparent_crc(p_1233->g_295.y, "p_1233->g_295.y", print_hash_value);
    transparent_crc(p_1233->g_295.z, "p_1233->g_295.z", print_hash_value);
    transparent_crc(p_1233->g_295.w, "p_1233->g_295.w", print_hash_value);
    transparent_crc(p_1233->g_336, "p_1233->g_336", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1233->g_348[i], "p_1233->g_348[i]", print_hash_value);

    }
    transparent_crc(p_1233->g_350, "p_1233->g_350", print_hash_value);
    transparent_crc(p_1233->g_372.x, "p_1233->g_372.x", print_hash_value);
    transparent_crc(p_1233->g_372.y, "p_1233->g_372.y", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1233->g_419[i][j][k], "p_1233->g_419[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1233->g_490, "p_1233->g_490", print_hash_value);
    transparent_crc(p_1233->g_493.s0, "p_1233->g_493.s0", print_hash_value);
    transparent_crc(p_1233->g_493.s1, "p_1233->g_493.s1", print_hash_value);
    transparent_crc(p_1233->g_493.s2, "p_1233->g_493.s2", print_hash_value);
    transparent_crc(p_1233->g_493.s3, "p_1233->g_493.s3", print_hash_value);
    transparent_crc(p_1233->g_493.s4, "p_1233->g_493.s4", print_hash_value);
    transparent_crc(p_1233->g_493.s5, "p_1233->g_493.s5", print_hash_value);
    transparent_crc(p_1233->g_493.s6, "p_1233->g_493.s6", print_hash_value);
    transparent_crc(p_1233->g_493.s7, "p_1233->g_493.s7", print_hash_value);
    transparent_crc(p_1233->g_500.x, "p_1233->g_500.x", print_hash_value);
    transparent_crc(p_1233->g_500.y, "p_1233->g_500.y", print_hash_value);
    transparent_crc(p_1233->g_501.s0, "p_1233->g_501.s0", print_hash_value);
    transparent_crc(p_1233->g_501.s1, "p_1233->g_501.s1", print_hash_value);
    transparent_crc(p_1233->g_501.s2, "p_1233->g_501.s2", print_hash_value);
    transparent_crc(p_1233->g_501.s3, "p_1233->g_501.s3", print_hash_value);
    transparent_crc(p_1233->g_501.s4, "p_1233->g_501.s4", print_hash_value);
    transparent_crc(p_1233->g_501.s5, "p_1233->g_501.s5", print_hash_value);
    transparent_crc(p_1233->g_501.s6, "p_1233->g_501.s6", print_hash_value);
    transparent_crc(p_1233->g_501.s7, "p_1233->g_501.s7", print_hash_value);
    transparent_crc(p_1233->g_501.s8, "p_1233->g_501.s8", print_hash_value);
    transparent_crc(p_1233->g_501.s9, "p_1233->g_501.s9", print_hash_value);
    transparent_crc(p_1233->g_501.sa, "p_1233->g_501.sa", print_hash_value);
    transparent_crc(p_1233->g_501.sb, "p_1233->g_501.sb", print_hash_value);
    transparent_crc(p_1233->g_501.sc, "p_1233->g_501.sc", print_hash_value);
    transparent_crc(p_1233->g_501.sd, "p_1233->g_501.sd", print_hash_value);
    transparent_crc(p_1233->g_501.se, "p_1233->g_501.se", print_hash_value);
    transparent_crc(p_1233->g_501.sf, "p_1233->g_501.sf", print_hash_value);
    transparent_crc(p_1233->g_557.x, "p_1233->g_557.x", print_hash_value);
    transparent_crc(p_1233->g_557.y, "p_1233->g_557.y", print_hash_value);
    transparent_crc(p_1233->g_558, "p_1233->g_558", print_hash_value);
    transparent_crc(p_1233->g_574.x, "p_1233->g_574.x", print_hash_value);
    transparent_crc(p_1233->g_574.y, "p_1233->g_574.y", print_hash_value);
    transparent_crc(p_1233->g_574.z, "p_1233->g_574.z", print_hash_value);
    transparent_crc(p_1233->g_574.w, "p_1233->g_574.w", print_hash_value);
    transparent_crc(p_1233->g_611.s0, "p_1233->g_611.s0", print_hash_value);
    transparent_crc(p_1233->g_611.s1, "p_1233->g_611.s1", print_hash_value);
    transparent_crc(p_1233->g_611.s2, "p_1233->g_611.s2", print_hash_value);
    transparent_crc(p_1233->g_611.s3, "p_1233->g_611.s3", print_hash_value);
    transparent_crc(p_1233->g_611.s4, "p_1233->g_611.s4", print_hash_value);
    transparent_crc(p_1233->g_611.s5, "p_1233->g_611.s5", print_hash_value);
    transparent_crc(p_1233->g_611.s6, "p_1233->g_611.s6", print_hash_value);
    transparent_crc(p_1233->g_611.s7, "p_1233->g_611.s7", print_hash_value);
    transparent_crc(p_1233->g_612.x, "p_1233->g_612.x", print_hash_value);
    transparent_crc(p_1233->g_612.y, "p_1233->g_612.y", print_hash_value);
    transparent_crc(p_1233->g_612.z, "p_1233->g_612.z", print_hash_value);
    transparent_crc(p_1233->g_612.w, "p_1233->g_612.w", print_hash_value);
    transparent_crc(p_1233->g_657.x, "p_1233->g_657.x", print_hash_value);
    transparent_crc(p_1233->g_657.y, "p_1233->g_657.y", print_hash_value);
    transparent_crc(p_1233->g_657.z, "p_1233->g_657.z", print_hash_value);
    transparent_crc(p_1233->g_657.w, "p_1233->g_657.w", print_hash_value);
    transparent_crc(p_1233->g_658.x, "p_1233->g_658.x", print_hash_value);
    transparent_crc(p_1233->g_658.y, "p_1233->g_658.y", print_hash_value);
    transparent_crc(p_1233->g_752.x, "p_1233->g_752.x", print_hash_value);
    transparent_crc(p_1233->g_752.y, "p_1233->g_752.y", print_hash_value);
    transparent_crc(p_1233->g_760.s0, "p_1233->g_760.s0", print_hash_value);
    transparent_crc(p_1233->g_760.s1, "p_1233->g_760.s1", print_hash_value);
    transparent_crc(p_1233->g_760.s2, "p_1233->g_760.s2", print_hash_value);
    transparent_crc(p_1233->g_760.s3, "p_1233->g_760.s3", print_hash_value);
    transparent_crc(p_1233->g_760.s4, "p_1233->g_760.s4", print_hash_value);
    transparent_crc(p_1233->g_760.s5, "p_1233->g_760.s5", print_hash_value);
    transparent_crc(p_1233->g_760.s6, "p_1233->g_760.s6", print_hash_value);
    transparent_crc(p_1233->g_760.s7, "p_1233->g_760.s7", print_hash_value);
    transparent_crc(p_1233->g_761.s0, "p_1233->g_761.s0", print_hash_value);
    transparent_crc(p_1233->g_761.s1, "p_1233->g_761.s1", print_hash_value);
    transparent_crc(p_1233->g_761.s2, "p_1233->g_761.s2", print_hash_value);
    transparent_crc(p_1233->g_761.s3, "p_1233->g_761.s3", print_hash_value);
    transparent_crc(p_1233->g_761.s4, "p_1233->g_761.s4", print_hash_value);
    transparent_crc(p_1233->g_761.s5, "p_1233->g_761.s5", print_hash_value);
    transparent_crc(p_1233->g_761.s6, "p_1233->g_761.s6", print_hash_value);
    transparent_crc(p_1233->g_761.s7, "p_1233->g_761.s7", print_hash_value);
    transparent_crc(p_1233->g_761.s8, "p_1233->g_761.s8", print_hash_value);
    transparent_crc(p_1233->g_761.s9, "p_1233->g_761.s9", print_hash_value);
    transparent_crc(p_1233->g_761.sa, "p_1233->g_761.sa", print_hash_value);
    transparent_crc(p_1233->g_761.sb, "p_1233->g_761.sb", print_hash_value);
    transparent_crc(p_1233->g_761.sc, "p_1233->g_761.sc", print_hash_value);
    transparent_crc(p_1233->g_761.sd, "p_1233->g_761.sd", print_hash_value);
    transparent_crc(p_1233->g_761.se, "p_1233->g_761.se", print_hash_value);
    transparent_crc(p_1233->g_761.sf, "p_1233->g_761.sf", print_hash_value);
    transparent_crc(p_1233->g_766.x, "p_1233->g_766.x", print_hash_value);
    transparent_crc(p_1233->g_766.y, "p_1233->g_766.y", print_hash_value);
    transparent_crc(p_1233->g_766.z, "p_1233->g_766.z", print_hash_value);
    transparent_crc(p_1233->g_766.w, "p_1233->g_766.w", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1233->g_799[i], "p_1233->g_799[i]", print_hash_value);

    }
    transparent_crc(p_1233->g_870.x, "p_1233->g_870.x", print_hash_value);
    transparent_crc(p_1233->g_870.y, "p_1233->g_870.y", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1233->g_897[i][j][k], "p_1233->g_897[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1233->g_927.s0, "p_1233->g_927.s0", print_hash_value);
    transparent_crc(p_1233->g_927.s1, "p_1233->g_927.s1", print_hash_value);
    transparent_crc(p_1233->g_927.s2, "p_1233->g_927.s2", print_hash_value);
    transparent_crc(p_1233->g_927.s3, "p_1233->g_927.s3", print_hash_value);
    transparent_crc(p_1233->g_927.s4, "p_1233->g_927.s4", print_hash_value);
    transparent_crc(p_1233->g_927.s5, "p_1233->g_927.s5", print_hash_value);
    transparent_crc(p_1233->g_927.s6, "p_1233->g_927.s6", print_hash_value);
    transparent_crc(p_1233->g_927.s7, "p_1233->g_927.s7", print_hash_value);
    transparent_crc(p_1233->g_928.x, "p_1233->g_928.x", print_hash_value);
    transparent_crc(p_1233->g_928.y, "p_1233->g_928.y", print_hash_value);
    transparent_crc(p_1233->g_929.s0, "p_1233->g_929.s0", print_hash_value);
    transparent_crc(p_1233->g_929.s1, "p_1233->g_929.s1", print_hash_value);
    transparent_crc(p_1233->g_929.s2, "p_1233->g_929.s2", print_hash_value);
    transparent_crc(p_1233->g_929.s3, "p_1233->g_929.s3", print_hash_value);
    transparent_crc(p_1233->g_929.s4, "p_1233->g_929.s4", print_hash_value);
    transparent_crc(p_1233->g_929.s5, "p_1233->g_929.s5", print_hash_value);
    transparent_crc(p_1233->g_929.s6, "p_1233->g_929.s6", print_hash_value);
    transparent_crc(p_1233->g_929.s7, "p_1233->g_929.s7", print_hash_value);
    transparent_crc(p_1233->g_978.x, "p_1233->g_978.x", print_hash_value);
    transparent_crc(p_1233->g_978.y, "p_1233->g_978.y", print_hash_value);
    transparent_crc(p_1233->g_978.z, "p_1233->g_978.z", print_hash_value);
    transparent_crc(p_1233->g_978.w, "p_1233->g_978.w", print_hash_value);
    transparent_crc(p_1233->g_979.x, "p_1233->g_979.x", print_hash_value);
    transparent_crc(p_1233->g_979.y, "p_1233->g_979.y", print_hash_value);
    transparent_crc(p_1233->g_979.z, "p_1233->g_979.z", print_hash_value);
    transparent_crc(p_1233->g_979.w, "p_1233->g_979.w", print_hash_value);
    transparent_crc(p_1233->g_980.x, "p_1233->g_980.x", print_hash_value);
    transparent_crc(p_1233->g_980.y, "p_1233->g_980.y", print_hash_value);
    transparent_crc(p_1233->g_980.z, "p_1233->g_980.z", print_hash_value);
    transparent_crc(p_1233->g_980.w, "p_1233->g_980.w", print_hash_value);
    transparent_crc(p_1233->g_1025.x, "p_1233->g_1025.x", print_hash_value);
    transparent_crc(p_1233->g_1025.y, "p_1233->g_1025.y", print_hash_value);
    transparent_crc(p_1233->g_1025.z, "p_1233->g_1025.z", print_hash_value);
    transparent_crc(p_1233->g_1025.w, "p_1233->g_1025.w", print_hash_value);
    transparent_crc(p_1233->g_1027.s0, "p_1233->g_1027.s0", print_hash_value);
    transparent_crc(p_1233->g_1027.s1, "p_1233->g_1027.s1", print_hash_value);
    transparent_crc(p_1233->g_1027.s2, "p_1233->g_1027.s2", print_hash_value);
    transparent_crc(p_1233->g_1027.s3, "p_1233->g_1027.s3", print_hash_value);
    transparent_crc(p_1233->g_1027.s4, "p_1233->g_1027.s4", print_hash_value);
    transparent_crc(p_1233->g_1027.s5, "p_1233->g_1027.s5", print_hash_value);
    transparent_crc(p_1233->g_1027.s6, "p_1233->g_1027.s6", print_hash_value);
    transparent_crc(p_1233->g_1027.s7, "p_1233->g_1027.s7", print_hash_value);
    transparent_crc(p_1233->g_1027.s8, "p_1233->g_1027.s8", print_hash_value);
    transparent_crc(p_1233->g_1027.s9, "p_1233->g_1027.s9", print_hash_value);
    transparent_crc(p_1233->g_1027.sa, "p_1233->g_1027.sa", print_hash_value);
    transparent_crc(p_1233->g_1027.sb, "p_1233->g_1027.sb", print_hash_value);
    transparent_crc(p_1233->g_1027.sc, "p_1233->g_1027.sc", print_hash_value);
    transparent_crc(p_1233->g_1027.sd, "p_1233->g_1027.sd", print_hash_value);
    transparent_crc(p_1233->g_1027.se, "p_1233->g_1027.se", print_hash_value);
    transparent_crc(p_1233->g_1027.sf, "p_1233->g_1027.sf", print_hash_value);
    transparent_crc(p_1233->g_1030.x, "p_1233->g_1030.x", print_hash_value);
    transparent_crc(p_1233->g_1030.y, "p_1233->g_1030.y", print_hash_value);
    transparent_crc(p_1233->g_1031.s0, "p_1233->g_1031.s0", print_hash_value);
    transparent_crc(p_1233->g_1031.s1, "p_1233->g_1031.s1", print_hash_value);
    transparent_crc(p_1233->g_1031.s2, "p_1233->g_1031.s2", print_hash_value);
    transparent_crc(p_1233->g_1031.s3, "p_1233->g_1031.s3", print_hash_value);
    transparent_crc(p_1233->g_1031.s4, "p_1233->g_1031.s4", print_hash_value);
    transparent_crc(p_1233->g_1031.s5, "p_1233->g_1031.s5", print_hash_value);
    transparent_crc(p_1233->g_1031.s6, "p_1233->g_1031.s6", print_hash_value);
    transparent_crc(p_1233->g_1031.s7, "p_1233->g_1031.s7", print_hash_value);
    transparent_crc(p_1233->g_1031.s8, "p_1233->g_1031.s8", print_hash_value);
    transparent_crc(p_1233->g_1031.s9, "p_1233->g_1031.s9", print_hash_value);
    transparent_crc(p_1233->g_1031.sa, "p_1233->g_1031.sa", print_hash_value);
    transparent_crc(p_1233->g_1031.sb, "p_1233->g_1031.sb", print_hash_value);
    transparent_crc(p_1233->g_1031.sc, "p_1233->g_1031.sc", print_hash_value);
    transparent_crc(p_1233->g_1031.sd, "p_1233->g_1031.sd", print_hash_value);
    transparent_crc(p_1233->g_1031.se, "p_1233->g_1031.se", print_hash_value);
    transparent_crc(p_1233->g_1031.sf, "p_1233->g_1031.sf", print_hash_value);
    transparent_crc(p_1233->g_1032.x, "p_1233->g_1032.x", print_hash_value);
    transparent_crc(p_1233->g_1032.y, "p_1233->g_1032.y", print_hash_value);
    transparent_crc(p_1233->g_1032.z, "p_1233->g_1032.z", print_hash_value);
    transparent_crc(p_1233->g_1032.w, "p_1233->g_1032.w", print_hash_value);
    transparent_crc(p_1233->g_1036.s0, "p_1233->g_1036.s0", print_hash_value);
    transparent_crc(p_1233->g_1036.s1, "p_1233->g_1036.s1", print_hash_value);
    transparent_crc(p_1233->g_1036.s2, "p_1233->g_1036.s2", print_hash_value);
    transparent_crc(p_1233->g_1036.s3, "p_1233->g_1036.s3", print_hash_value);
    transparent_crc(p_1233->g_1036.s4, "p_1233->g_1036.s4", print_hash_value);
    transparent_crc(p_1233->g_1036.s5, "p_1233->g_1036.s5", print_hash_value);
    transparent_crc(p_1233->g_1036.s6, "p_1233->g_1036.s6", print_hash_value);
    transparent_crc(p_1233->g_1036.s7, "p_1233->g_1036.s7", print_hash_value);
    transparent_crc(p_1233->g_1036.s8, "p_1233->g_1036.s8", print_hash_value);
    transparent_crc(p_1233->g_1036.s9, "p_1233->g_1036.s9", print_hash_value);
    transparent_crc(p_1233->g_1036.sa, "p_1233->g_1036.sa", print_hash_value);
    transparent_crc(p_1233->g_1036.sb, "p_1233->g_1036.sb", print_hash_value);
    transparent_crc(p_1233->g_1036.sc, "p_1233->g_1036.sc", print_hash_value);
    transparent_crc(p_1233->g_1036.sd, "p_1233->g_1036.sd", print_hash_value);
    transparent_crc(p_1233->g_1036.se, "p_1233->g_1036.se", print_hash_value);
    transparent_crc(p_1233->g_1036.sf, "p_1233->g_1036.sf", print_hash_value);
    transparent_crc(p_1233->g_1051.x, "p_1233->g_1051.x", print_hash_value);
    transparent_crc(p_1233->g_1051.y, "p_1233->g_1051.y", print_hash_value);
    transparent_crc(p_1233->g_1084.x, "p_1233->g_1084.x", print_hash_value);
    transparent_crc(p_1233->g_1084.y, "p_1233->g_1084.y", print_hash_value);
    transparent_crc(p_1233->g_1101.x, "p_1233->g_1101.x", print_hash_value);
    transparent_crc(p_1233->g_1101.y, "p_1233->g_1101.y", print_hash_value);
    transparent_crc(p_1233->g_1101.z, "p_1233->g_1101.z", print_hash_value);
    transparent_crc(p_1233->g_1101.w, "p_1233->g_1101.w", print_hash_value);
    transparent_crc(p_1233->g_1121.x, "p_1233->g_1121.x", print_hash_value);
    transparent_crc(p_1233->g_1121.y, "p_1233->g_1121.y", print_hash_value);
    transparent_crc(p_1233->g_1121.z, "p_1233->g_1121.z", print_hash_value);
    transparent_crc(p_1233->g_1121.w, "p_1233->g_1121.w", print_hash_value);
    transparent_crc(p_1233->g_1122.x, "p_1233->g_1122.x", print_hash_value);
    transparent_crc(p_1233->g_1122.y, "p_1233->g_1122.y", print_hash_value);
    transparent_crc(p_1233->g_1122.z, "p_1233->g_1122.z", print_hash_value);
    transparent_crc(p_1233->g_1122.w, "p_1233->g_1122.w", print_hash_value);
    transparent_crc(p_1233->g_1128.x, "p_1233->g_1128.x", print_hash_value);
    transparent_crc(p_1233->g_1128.y, "p_1233->g_1128.y", print_hash_value);
    transparent_crc(p_1233->g_1128.z, "p_1233->g_1128.z", print_hash_value);
    transparent_crc(p_1233->g_1128.w, "p_1233->g_1128.w", print_hash_value);
    transparent_crc(p_1233->g_1144.s0, "p_1233->g_1144.s0", print_hash_value);
    transparent_crc(p_1233->g_1144.s1, "p_1233->g_1144.s1", print_hash_value);
    transparent_crc(p_1233->g_1144.s2, "p_1233->g_1144.s2", print_hash_value);
    transparent_crc(p_1233->g_1144.s3, "p_1233->g_1144.s3", print_hash_value);
    transparent_crc(p_1233->g_1144.s4, "p_1233->g_1144.s4", print_hash_value);
    transparent_crc(p_1233->g_1144.s5, "p_1233->g_1144.s5", print_hash_value);
    transparent_crc(p_1233->g_1144.s6, "p_1233->g_1144.s6", print_hash_value);
    transparent_crc(p_1233->g_1144.s7, "p_1233->g_1144.s7", print_hash_value);
    transparent_crc(p_1233->g_1144.s8, "p_1233->g_1144.s8", print_hash_value);
    transparent_crc(p_1233->g_1144.s9, "p_1233->g_1144.s9", print_hash_value);
    transparent_crc(p_1233->g_1144.sa, "p_1233->g_1144.sa", print_hash_value);
    transparent_crc(p_1233->g_1144.sb, "p_1233->g_1144.sb", print_hash_value);
    transparent_crc(p_1233->g_1144.sc, "p_1233->g_1144.sc", print_hash_value);
    transparent_crc(p_1233->g_1144.sd, "p_1233->g_1144.sd", print_hash_value);
    transparent_crc(p_1233->g_1144.se, "p_1233->g_1144.se", print_hash_value);
    transparent_crc(p_1233->g_1144.sf, "p_1233->g_1144.sf", print_hash_value);
    transparent_crc(p_1233->g_1145.x, "p_1233->g_1145.x", print_hash_value);
    transparent_crc(p_1233->g_1145.y, "p_1233->g_1145.y", print_hash_value);
    transparent_crc(p_1233->g_1191.x, "p_1233->g_1191.x", print_hash_value);
    transparent_crc(p_1233->g_1191.y, "p_1233->g_1191.y", print_hash_value);
    transparent_crc(p_1233->g_1191.z, "p_1233->g_1191.z", print_hash_value);
    transparent_crc(p_1233->g_1191.w, "p_1233->g_1191.w", print_hash_value);
    transparent_crc(p_1233->g_1192.x, "p_1233->g_1192.x", print_hash_value);
    transparent_crc(p_1233->g_1192.y, "p_1233->g_1192.y", print_hash_value);
    transparent_crc(p_1233->g_1192.z, "p_1233->g_1192.z", print_hash_value);
    transparent_crc(p_1233->g_1192.w, "p_1233->g_1192.w", print_hash_value);
    transparent_crc(p_1233->g_1228, "p_1233->g_1228", print_hash_value);
    transparent_crc(p_1233->v_collective, "p_1233->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 79; i++)
            transparent_crc(p_1233->g_special_values[i + 79 * get_linear_group_id()], "p_1233->g_special_values[i + 79 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 79; i++)
            transparent_crc(p_1233->l_special_values[i], "p_1233->l_special_values[i]", print_hash_value);
    transparent_crc(p_1233->l_comm_values[get_linear_local_id()], "p_1233->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1233->g_comm_values[get_linear_group_id() * 51 + get_linear_local_id()], "p_1233->g_comm_values[get_linear_group_id() * 51 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
