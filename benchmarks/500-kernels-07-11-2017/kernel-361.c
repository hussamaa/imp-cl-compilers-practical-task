// -g 82,92,1 -l 1,23,1
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


// Seed: 2658731750

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    int32_t g_4;
    uint64_t g_9;
    int64_t g_16;
    int8_t g_57[5][5][5];
    uint16_t g_64;
    uint32_t g_83;
    int16_t g_86[5];
    uint64_t g_92;
    uint16_t g_94;
    int32_t g_98;
    uint16_t g_101;
    uint32_t g_136;
    volatile int32_t *g_147;
    volatile int32_t * volatile * volatile g_146;
    volatile int32_t * volatile * volatile * volatile g_148;
    volatile uint64_t g_166;
    uint8_t g_190;
    int8_t g_196;
    int64_t g_198;
    volatile int32_t **g_241[10];
    volatile int32_t ***g_240;
    uint16_t g_335;
    volatile uint16_t g_340[1][8][5];
    volatile uint16_t *g_339;
    volatile uint16_t ** volatile g_338;
    int16_t g_353;
    int32_t g_361;
    volatile int32_t * volatile * volatile g_389[2];
    int32_t *g_391[4];
    int64_t g_533;
    uint32_t g_535;
    uint16_t *g_556;
    uint16_t ** volatile g_555;
    uint16_t ** volatile *g_554;
    volatile int32_t *g_558;
    volatile int8_t g_580;
    volatile int8_t *g_579;
    volatile int8_t * volatile *g_578[5];
    volatile uint8_t g_594;
    volatile uint8_t *g_593;
    volatile uint8_t * volatile * volatile g_592[3][2];
    int32_t **g_655;
    int32_t ***g_654[5];
    volatile int8_t g_656;
    int64_t *g_681;
    volatile uint8_t * volatile * volatile * volatile g_700;
    volatile uint8_t * volatile * volatile * volatile *g_699;
    uint16_t g_747[1];
    int32_t * volatile g_816;
    uint16_t g_818;
    uint64_t g_821;
    uint64_t *g_820;
    int32_t g_845;
    int16_t g_856;
    int64_t g_881;
    int32_t g_1006;
    volatile int32_t * volatile * volatile g_1039;
    volatile int64_t g_1062[7][2][1];
    volatile int64_t * volatile g_1061;
    volatile int64_t * volatile *g_1060;
    int32_t g_1070;
    int32_t * volatile g_1072[6];
    int8_t * volatile * volatile **g_1105;
    int16_t *g_1146;
    uint64_t g_1159;
    volatile int32_t g_1168;
    volatile int32_t *g_1167;
    volatile int32_t ** volatile g_1166;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S0 * p_1241);
int32_t  func_10(int32_t  p_11, int64_t  p_12, struct S0 * p_1241);
int32_t * func_17(int64_t  p_18, int64_t * p_19, uint32_t  p_20, uint64_t * p_21, struct S0 * p_1241);
int16_t  func_22(int32_t * p_23, int32_t  p_24, uint64_t * p_25, struct S0 * p_1241);
int32_t * func_26(int32_t * p_27, uint64_t  p_28, uint64_t * p_29, int64_t  p_30, struct S0 * p_1241);
uint64_t * func_32(uint64_t * p_33, struct S0 * p_1241);
uint64_t * func_34(int64_t  p_35, int32_t  p_36, int64_t * p_37, uint32_t  p_38, struct S0 * p_1241);
int64_t  func_39(uint64_t  p_40, int32_t  p_41, struct S0 * p_1241);
int8_t  func_44(uint32_t  p_45, int32_t * p_46, struct S0 * p_1241);
uint64_t  func_47(uint64_t * p_48, uint64_t  p_49, int8_t  p_50, uint64_t * p_51, struct S0 * p_1241);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1241->g_4
 * writes: p_1241->g_4
 */
uint64_t  func_1(struct S0 * p_1241)
{ /* block id: 4 */
    int16_t *l_1053 = &p_1241->g_353;
    int32_t l_1067[2];
    uint32_t l_1071 = 3UL;
    int64_t l_1153 = 0x41DC13CE7153D700L;
    int8_t *l_1183 = &p_1241->g_57[0][3][4];
    uint8_t l_1239 = 0x38L;
    int i;
    for (i = 0; i < 2; i++)
        l_1067[i] = (-1L);
    for (p_1241->g_4 = 0; (p_1241->g_4 <= (-15)); p_1241->g_4 = safe_sub_func_int16_t_s_s(p_1241->g_4, 7))
    { /* block id: 7 */
        int64_t l_7[7];
        uint64_t *l_8 = &p_1241->g_9;
        int64_t *l_15 = &p_1241->g_16;
        int16_t *l_1052[9][4] = {{&p_1241->g_86[1],&p_1241->g_86[2],&p_1241->g_86[2],&p_1241->g_86[1]},{&p_1241->g_86[1],&p_1241->g_86[2],&p_1241->g_86[2],&p_1241->g_86[1]},{&p_1241->g_86[1],&p_1241->g_86[2],&p_1241->g_86[2],&p_1241->g_86[1]},{&p_1241->g_86[1],&p_1241->g_86[2],&p_1241->g_86[2],&p_1241->g_86[1]},{&p_1241->g_86[1],&p_1241->g_86[2],&p_1241->g_86[2],&p_1241->g_86[1]},{&p_1241->g_86[1],&p_1241->g_86[2],&p_1241->g_86[2],&p_1241->g_86[1]},{&p_1241->g_86[1],&p_1241->g_86[2],&p_1241->g_86[2],&p_1241->g_86[1]},{&p_1241->g_86[1],&p_1241->g_86[2],&p_1241->g_86[2],&p_1241->g_86[1]},{&p_1241->g_86[1],&p_1241->g_86[2],&p_1241->g_86[2],&p_1241->g_86[1]}};
        int32_t **l_1064 = (void*)0;
        int32_t l_1068 = (-1L);
        int32_t l_1078 = (-1L);
        int32_t l_1080 = 0x37E63955L;
        int32_t l_1081 = 7L;
        int32_t l_1084 = 0x25E1EDF9L;
        uint32_t l_1085[3][9] = {{0UL,0x943CB1A3L,0x9B4CDAE6L,4UL,0x943CB1A3L,4UL,0x9B4CDAE6L,0x943CB1A3L,0UL},{0UL,0x943CB1A3L,0x9B4CDAE6L,4UL,0x943CB1A3L,4UL,0x9B4CDAE6L,0x943CB1A3L,0UL},{0UL,0x943CB1A3L,0x9B4CDAE6L,4UL,0x943CB1A3L,4UL,0x9B4CDAE6L,0x943CB1A3L,0UL}};
        int64_t l_1106 = 0x7865502CDCE5E410L;
        int8_t *l_1107[5][6] = {{&p_1241->g_57[0][3][4],&p_1241->g_57[0][3][4],&p_1241->g_196,&p_1241->g_196,&p_1241->g_196,&p_1241->g_196},{&p_1241->g_57[0][3][4],&p_1241->g_57[0][3][4],&p_1241->g_196,&p_1241->g_196,&p_1241->g_196,&p_1241->g_196},{&p_1241->g_57[0][3][4],&p_1241->g_57[0][3][4],&p_1241->g_196,&p_1241->g_196,&p_1241->g_196,&p_1241->g_196},{&p_1241->g_57[0][3][4],&p_1241->g_57[0][3][4],&p_1241->g_196,&p_1241->g_196,&p_1241->g_196,&p_1241->g_196},{&p_1241->g_57[0][3][4],&p_1241->g_57[0][3][4],&p_1241->g_196,&p_1241->g_196,&p_1241->g_196,&p_1241->g_196}};
        uint16_t l_1131 = 0x9251L;
        uint32_t *l_1152 = (void*)0;
        int i, j;
        for (i = 0; i < 7; i++)
            l_7[i] = 8L;
        (1 + 1);
    }
    return l_1067[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1241->g_3 p_1241->g_9 p_1241->g_16 p_1241->g_64 p_1241->g_57 p_1241->g_4 p_1241->g_83 p_1241->g_86 p_1241->g_94 p_1241->g_101 p_1241->g_98 p_1241->g_146 p_1241->g_148 p_1241->g_147 p_1241->g_166 p_1241->g_136 p_1241->g_198 p_1241->g_240 p_1241->g_92 p_1241->g_190 p_1241->g_2 p_1241->g_196 p_1241->g_335 p_1241->g_338 p_1241->g_339 p_1241->g_340 p_1241->g_353 p_1241->g_361 p_1241->g_241 p_1241->g_391 p_1241->g_554 p_1241->g_558 p_1241->g_556 p_1241->g_578 p_1241->g_592 p_1241->g_535 p_1241->g_593 p_1241->g_594 p_1241->g_580 p_1241->g_656 p_1241->g_816 p_1241->g_820 p_1241->g_747 p_1241->g_700 p_1241->g_856 p_1241->g_579 p_1241->g_881 p_1241->g_845 p_1241->g_821 p_1241->g_655 p_1241->g_555 p_1241->g_1039
 * writes: p_1241->g_57 p_1241->g_64 p_1241->g_83 p_1241->g_92 p_1241->g_94 p_1241->g_101 p_1241->g_136 p_1241->g_98 p_1241->g_146 p_1241->g_166 p_1241->g_190 p_1241->g_196 p_1241->g_198 p_1241->g_16 p_1241->g_3 p_1241->g_86 p_1241->g_9 p_1241->g_335 p_1241->g_361 p_1241->g_147 p_1241->g_391 p_1241->g_533 p_1241->g_654 p_1241->g_681 p_1241->g_353 p_1241->g_818 p_1241->g_856 p_1241->g_535 p_1241->g_845 p_1241->g_821 p_1241->g_655 p_1241->g_881 p_1241->g_1006
 */
int32_t  func_10(int32_t  p_11, int64_t  p_12, struct S0 * p_1241)
{ /* block id: 10 */
    int32_t *l_31 = &p_1241->g_4;
    int16_t l_84 = 1L;
    int16_t *l_85[2][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0}};
    uint32_t l_87 = 0UL;
    int32_t l_90 = 0x48B64E3CL;
    uint64_t *l_91 = &p_1241->g_92;
    uint16_t *l_93 = &p_1241->g_94;
    uint32_t l_140 = 0UL;
    int32_t l_817 = (-6L);
    uint8_t l_819 = 0x00L;
    int32_t **l_1042 = &p_1241->g_391[3];
    int32_t **l_1043 = &l_31;
    int64_t *l_1044[2];
    uint64_t *l_1045 = &p_1241->g_821;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1044[i] = &p_1241->g_16;
    (*l_1043) = ((*l_1042) = func_17(((p_1241->g_818 = (p_1241->g_86[1] = (l_817 &= func_22(func_26(l_31, p_1241->g_3, func_32(func_34(func_39((((*l_93) &= (safe_mul_func_int8_t_s_s(func_44(p_1241->g_9, l_31, p_1241), ((l_87 = (l_84 = (*l_31))) , (safe_rshift_func_uint8_t_u_s(((((*l_91) = (p_12 | ((l_90 = 0L) >= p_1241->g_86[2]))) , (*l_31)) == 0x7EL), (*l_31))))))) <= (-10L)), p_12, p_1241), p_11, &p_1241->g_16, p_12, p_1241), p_1241), l_140, p_1241), p_11, l_91, p_1241)))) , 0x669E8423766EA9B1L), l_91, l_819, p_1241->g_820, p_1241));
    (*l_1042) = func_17((p_12 = (-1L)), &p_1241->g_16, p_1241->g_535, l_1045, p_1241);
    return p_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_1241->g_747 p_1241->g_700 p_1241->g_592 p_1241->g_593 p_1241->g_594 p_1241->g_86 p_1241->g_856 p_1241->g_101 p_1241->g_579 p_1241->g_580 p_1241->g_339 p_1241->g_340 p_1241->g_881 p_1241->g_198 p_1241->g_83 p_1241->g_556 p_1241->g_94 p_1241->g_535 p_1241->g_64 p_1241->g_845 p_1241->g_820 p_1241->g_821 p_1241->g_57 p_1241->g_190 p_1241->g_655 p_1241->g_98 p_1241->g_16 p_1241->g_338 p_1241->g_92 p_1241->g_361 p_1241->g_9 p_1241->g_353 p_1241->g_335 p_1241->g_554 p_1241->g_555 p_1241->g_240 p_1241->g_241 p_1241->g_136 p_1241->g_146 p_1241->g_147 p_1241->g_1039 p_1241->g_196
 * writes: p_1241->g_196 p_1241->g_353 p_1241->g_856 p_1241->g_535 p_1241->g_845 p_1241->g_391 p_1241->g_136 p_1241->g_57 p_1241->g_821 p_1241->g_655 p_1241->g_94 p_1241->g_98 p_1241->g_86 p_1241->g_881 p_1241->g_147 p_1241->g_190 p_1241->g_1006
 */
int32_t * func_17(int64_t  p_18, int64_t * p_19, uint32_t  p_20, uint64_t * p_21, struct S0 * p_1241)
{ /* block id: 339 */
    int8_t l_822 = 0x7AL;
    int32_t l_823 = 0L;
    int32_t l_824 = (-1L);
    int32_t l_825 = (-4L);
    int32_t *l_826 = &l_824;
    int32_t *l_827 = &l_823;
    int32_t *l_828[9][3] = {{&l_824,&l_824,&l_825},{&l_824,&l_824,&l_825},{&l_824,&l_824,&l_825},{&l_824,&l_824,&l_825},{&l_824,&l_824,&l_825},{&l_824,&l_824,&l_825},{&l_824,&l_824,&l_825},{&l_824,&l_824,&l_825},{&l_824,&l_824,&l_825}};
    uint32_t l_829[8][10][3] = {{{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL}},{{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL}},{{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL}},{{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL}},{{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL}},{{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL}},{{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL}},{{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL},{4294967295UL,0x7C0AF8F0L,0UL}}};
    int8_t l_857 = (-5L);
    int32_t *l_883[10] = {&p_1241->g_98,&l_824,&p_1241->g_98,&p_1241->g_98,&l_824,&p_1241->g_98,&p_1241->g_98,&l_824,&p_1241->g_98,&p_1241->g_98};
    int16_t *l_894 = &p_1241->g_856;
    uint16_t **l_900 = &p_1241->g_556;
    int32_t l_905 = 4L;
    uint8_t l_912 = 252UL;
    int32_t *l_920[6] = {&l_823,&l_825,&l_823,&l_823,&l_825,&l_823};
    int32_t l_939 = 0x3ED48700L;
    int64_t *l_953 = &p_1241->g_881;
    int32_t *l_975 = &l_825;
    int32_t *l_976[4];
    int32_t l_1002 = (-1L);
    int8_t *l_1030 = &p_1241->g_196;
    int8_t **l_1029[5][2][7] = {{{&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,(void*)0},{&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,(void*)0}},{{&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,(void*)0},{&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,(void*)0}},{{&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,(void*)0},{&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,(void*)0}},{{&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,(void*)0},{&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,(void*)0}},{{&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,(void*)0},{&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,&l_1030,(void*)0}}};
    int8_t ***l_1028[8] = {&l_1029[4][1][4],&l_1029[4][1][4],&l_1029[4][1][4],&l_1029[4][1][4],&l_1029[4][1][4],&l_1029[4][1][4],&l_1029[4][1][4],&l_1029[4][1][4]};
    uint8_t *l_1038 = &l_912;
    uint8_t **l_1037 = &l_1038;
    uint8_t ***l_1036 = &l_1037;
    int32_t *l_1040 = &l_825;
    int32_t *l_1041 = &p_1241->g_98;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_976[i] = &p_1241->g_98;
lbl_864:
    l_829[6][2][1]--;
    for (p_1241->g_196 = 18; (p_1241->g_196 > (-21)); p_1241->g_196 = safe_sub_func_uint16_t_u_u(p_1241->g_196, 9))
    { /* block id: 343 */
        uint64_t l_836 = 18446744073709551615UL;
        int32_t l_843 = 0L;
        int32_t *l_844[8][2] = {{&p_1241->g_845,&p_1241->g_845},{&p_1241->g_845,&p_1241->g_845},{&p_1241->g_845,&p_1241->g_845},{&p_1241->g_845,&p_1241->g_845},{&p_1241->g_845,&p_1241->g_845},{&p_1241->g_845,&p_1241->g_845},{&p_1241->g_845,&p_1241->g_845},{&p_1241->g_845,&p_1241->g_845}};
        int32_t **l_852 = &p_1241->g_391[2];
        int64_t l_858 = 0x73B7E47933D33253L;
        int32_t l_868 = 0x5DF6999AL;
        int32_t *l_884 = &l_843;
        int32_t *l_885 = (void*)0;
        int32_t l_887 = 0L;
        int8_t *l_906 = &p_1241->g_196;
        int32_t l_963 = 5L;
        int32_t l_964 = 1L;
        int32_t l_965 = 9L;
        uint64_t l_967[7][5][5] = {{{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL}},{{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL}},{{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL}},{{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL}},{{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL}},{{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL}},{{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL},{1UL,0x724B12302BDB1CF0L,0x90819063352F7065L,0x724B12302BDB1CF0L,1UL}}};
        int64_t l_1001[1][4][1];
        int8_t ***l_1026 = (void*)0;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 1; k++)
                    l_1001[i][j][k] = (-9L);
            }
        }
        for (l_825 = 1; (l_825 <= 4); l_825 += 1)
        { /* block id: 346 */
            uint32_t *l_842[10] = {&p_1241->g_136,&p_1241->g_136,&p_1241->g_136,&p_1241->g_136,&p_1241->g_136,&p_1241->g_136,&p_1241->g_136,&p_1241->g_136,&p_1241->g_136,&p_1241->g_136};
            int32_t **l_846 = &l_844[7][1];
            int16_t *l_849 = &p_1241->g_353;
            int32_t **l_853[9][6] = {{&l_828[8][2],&l_828[8][2],(void*)0,&l_828[8][2],&p_1241->g_391[3],&l_826},{&l_828[8][2],&l_828[8][2],(void*)0,&l_828[8][2],&p_1241->g_391[3],&l_826},{&l_828[8][2],&l_828[8][2],(void*)0,&l_828[8][2],&p_1241->g_391[3],&l_826},{&l_828[8][2],&l_828[8][2],(void*)0,&l_828[8][2],&p_1241->g_391[3],&l_826},{&l_828[8][2],&l_828[8][2],(void*)0,&l_828[8][2],&p_1241->g_391[3],&l_826},{&l_828[8][2],&l_828[8][2],(void*)0,&l_828[8][2],&p_1241->g_391[3],&l_826},{&l_828[8][2],&l_828[8][2],(void*)0,&l_828[8][2],&p_1241->g_391[3],&l_826},{&l_828[8][2],&l_828[8][2],(void*)0,&l_828[8][2],&p_1241->g_391[3],&l_826},{&l_828[8][2],&l_828[8][2],(void*)0,&l_828[8][2],&p_1241->g_391[3],&l_826}};
            uint16_t l_854 = 0x25CCL;
            int16_t *l_855 = &p_1241->g_856;
            int16_t l_888[7][5][4] = {{{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L}},{{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L}},{{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L}},{{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L}},{{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L}},{{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L}},{{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L},{0x19F0L,0x4D9CL,0x1976L,0x19F0L}}};
            uint16_t **l_899 = &p_1241->g_556;
            uint32_t l_913[7][8][2] = {{{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL}},{{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL}},{{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL}},{{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL}},{{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL}},{{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL}},{{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL},{0x14123436L,0UL}}};
            int8_t **l_914 = &l_906;
            int32_t *l_921 = (void*)0;
            int64_t *l_952[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint64_t l_1017 = 0xA8B481FB9BF55B97L;
            int i, j, k;
            (*l_826) = (safe_sub_func_uint16_t_u_u(0xAAF5L, l_836));
            (*l_826) = ((safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_int64_t_s(((9L | ((*l_855) &= ((p_18 >= (((((((l_843 = p_1241->g_747[0]) , ((*l_846) = l_844[1][0])) == &p_1241->g_845) || 0xCB99715C56551F1BL) || (safe_mul_func_int16_t_s_s(((*l_849) = 0x3E77L), (safe_mul_func_int8_t_s_s((l_852 != l_853[1][4]), (***p_1241->g_700)))))) | p_20) != l_854)) >= p_1241->g_86[4]))) < l_857))) < 0L), 1)) ^ p_1241->g_101);
            if (l_858)
            { /* block id: 353 */
                uint64_t l_859[3][9] = {{4UL,1UL,18446744073709551611UL,1UL,4UL,4UL,1UL,18446744073709551611UL,1UL},{4UL,1UL,18446744073709551611UL,1UL,4UL,4UL,1UL,18446744073709551611UL,1UL},{4UL,1UL,18446744073709551611UL,1UL,4UL,4UL,1UL,18446744073709551611UL,1UL}};
                int32_t *l_862 = &l_825;
                int32_t *l_867 = &p_1241->g_4;
                int32_t l_882[2][2] = {{0x0193C0F5L,0x0193C0F5L},{0x0193C0F5L,0x0193C0F5L}};
                int i, j;
                if (p_18)
                    break;
                for (p_1241->g_535 = 0; (p_1241->g_535 <= 4); p_1241->g_535 += 1)
                { /* block id: 357 */
                    int32_t *l_863 = &l_823;
                    int32_t *l_865 = &l_825;
                    for (p_1241->g_845 = 0; (p_1241->g_845 <= 2); p_1241->g_845 += 1)
                    { /* block id: 360 */
                        int i, j;
                        l_859[2][3]++;
                        (*l_852) = l_862;
                        l_863 = l_862;
                        if (l_854)
                            goto lbl_864;
                    }
                    for (p_1241->g_136 = 0; (p_1241->g_136 <= 4); p_1241->g_136 += 1)
                    { /* block id: 368 */
                        int32_t *l_866 = &l_824;
                        (*l_827) = ((*p_1241->g_579) != 0L);
                        return l_867;
                    }
                    for (p_1241->g_353 = 0; (p_1241->g_353 <= 4); p_1241->g_353 += 1)
                    { /* block id: 374 */
                        if (l_868)
                            break;
                        l_882[0][1] = ((((((safe_mul_func_int16_t_s_s(((&p_1241->g_655 == (void*)0) & ((*p_1241->g_339) >= ((-3L) ^ p_18))), ((safe_lshift_func_int8_t_s_s((((!(((safe_rshift_func_int16_t_s_u((((safe_mod_func_uint8_t_u_u(((p_1241->g_57[0][3][4] = (((-4L) > 0x2AL) >= (safe_add_func_uint8_t_u_u((0x31L <= ((((void*)0 != &p_1241->g_699) < p_1241->g_881) != 0UL)), p_18)))) , p_20), p_1241->g_198)) == p_1241->g_83) ^ 0x9193AC87L), (*p_1241->g_556))) , (*p_1241->g_556)) >= p_20)) , p_1241->g_535) > p_1241->g_64), p_1241->g_845)) && 65530UL))) & 0x9FL) && p_18) != p_20) & (*p_1241->g_820)) < p_18);
                    }
                    return l_885;
                }
            }
            else
            { /* block id: 381 */
                int32_t l_886[10][5][5] = {{{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L}},{{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L}},{{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L}},{{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L}},{{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L}},{{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L}},{{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L}},{{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L}},{{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L}},{{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L},{0x32006D92L,0x718A14F4L,0x1C63D47AL,0x4490784EL,0x57CF8897L}}};
                uint32_t l_889[10] = {0xDFACAB3FL,0xDFACAB3FL,0xDFACAB3FL,0xDFACAB3FL,0xDFACAB3FL,0xDFACAB3FL,0xDFACAB3FL,0xDFACAB3FL,0xDFACAB3FL,0xDFACAB3FL};
                int i, j, k;
                ++l_889[6];
            }
            if ((safe_div_func_int64_t_s_s(((*l_884) == ((l_894 = &l_888[0][0][2]) == (void*)0)), (((*l_884) != p_18) | (safe_mod_func_uint32_t_u_u((p_20 == 6L), (safe_lshift_func_uint16_t_u_u((((l_899 = (void*)0) == l_900) , p_20), (*p_1241->g_556)))))))))
            { /* block id: 386 */
                if (p_20)
                    goto lbl_864;
            }
            else
            { /* block id: 388 */
                int32_t l_907 = (-1L);
                int32_t **l_910 = &l_828[8][2];
                int32_t ***l_911 = &p_1241->g_655;
                int32_t *l_919 = &l_823;
                int32_t *l_956 = &l_939;
                int32_t l_960[7][1][6] = {{{(-1L),0x7D3B127CL,4L,(-3L),0x11F3CB1EL,0x11F3CB1EL}},{{(-1L),0x7D3B127CL,4L,(-3L),0x11F3CB1EL,0x11F3CB1EL}},{{(-1L),0x7D3B127CL,4L,(-3L),0x11F3CB1EL,0x11F3CB1EL}},{{(-1L),0x7D3B127CL,4L,(-3L),0x11F3CB1EL,0x11F3CB1EL}},{{(-1L),0x7D3B127CL,4L,(-3L),0x11F3CB1EL,0x11F3CB1EL}},{{(-1L),0x7D3B127CL,4L,(-3L),0x11F3CB1EL,0x11F3CB1EL}},{{(-1L),0x7D3B127CL,4L,(-3L),0x11F3CB1EL,0x11F3CB1EL}}};
                int64_t l_970 = (-1L);
                uint16_t l_986 = 0xC6ABL;
                int i, j, k;
                if ((safe_div_func_int64_t_s_s((safe_add_func_uint16_t_u_u(((l_905 ^ (((*p_1241->g_820) ^= (l_906 == (void*)0)) == p_1241->g_57[4][0][1])) && l_907), ((safe_lshift_func_int16_t_s_u(((((*p_1241->g_556) ^= (((*l_911) = l_910) == (void*)0)) , (((((p_18 | (l_912 = ((l_842[2] != l_842[3]) < 9L))) , p_18) > l_913[0][2][1]) & p_1241->g_86[4]) | (***p_1241->g_700))) & 0x7FC3L), p_18)) < p_1241->g_190))), 0x6B746893C1D0CAEFL)))
                { /* block id: 393 */
                    int8_t ***l_915 = &l_914;
                    int8_t **l_917[2][9] = {{&l_906,&l_906,&l_906,&l_906,&l_906,&l_906,&l_906,&l_906,&l_906},{&l_906,&l_906,&l_906,&l_906,&l_906,&l_906,&l_906,&l_906,&l_906}};
                    int8_t ***l_916 = &l_917[0][6];
                    int32_t *l_918 = &l_843;
                    int i, j;
                    (*l_916) = ((*l_915) = l_914);
                    return l_921;
                }
                else
                { /* block id: 397 */
                    int32_t *l_922 = &p_1241->g_98;
                    uint16_t l_954 = 0UL;
                    int32_t l_957 = 0x50E76A88L;
                    int32_t l_958 = 1L;
                    int32_t l_959 = 1L;
                    int32_t l_966[9] = {0x6292422EL,0x6292422EL,0x6292422EL,0x6292422EL,0x6292422EL,0x6292422EL,0x6292422EL,0x6292422EL,0x6292422EL};
                    int32_t *l_973 = &l_824;
                    int32_t *l_974 = &l_824;
                    int i;
                    (*p_1241->g_655) = l_922;
                    (*l_922) &= ((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((p_20 , 0L) == p_1241->g_86[4]), p_20)), (safe_mod_func_int16_t_s_s(0x23C5L, (safe_mod_func_uint16_t_u_u(0x4433L, (((safe_rshift_func_uint8_t_u_s((((((safe_rshift_func_int16_t_s_u((((void*)0 != &l_906) & (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_s((p_18 && p_1241->g_57[0][3][4]), 5)), (*p_1241->g_579)))), p_20)) < l_939) < 0x3CL) , p_18) && p_20), 0)) == (*l_884)) , 0x8078L))))))) & 8UL);
                    if ((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(0x5CL, ((((*l_849) = (safe_div_func_uint64_t_u_u((p_20 & (safe_add_func_uint64_t_u_u((~0UL), ((p_1241->g_16 & (safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((l_953 = l_952[3]) != (void*)0) != (*p_1241->g_820)), (((*p_1241->g_820) != (((((void*)0 != (*p_1241->g_338)) & p_20) , (*p_19)) , (*l_922))) != p_1241->g_57[3][2][4]))) > (*l_922)), 0x66L))) && 0x58269EA02C1AE507L)))), l_954))) , 9L) ^ p_1241->g_361))), p_1241->g_9)))
                    { /* block id: 402 */
                        int32_t *l_955 = (void*)0;
                        return l_955;
                    }
                    else
                    { /* block id: 404 */
                        (*p_1241->g_655) = l_956;
                        (*l_922) ^= p_20;
                    }
                    for (p_1241->g_353 = 2; (p_1241->g_353 >= 0); p_1241->g_353 -= 1)
                    { /* block id: 410 */
                        int32_t l_961 = 0x04652976L;
                        int32_t l_962[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_962[i] = 0L;
                        l_967[3][4][3]++;
                        (*l_919) |= (((l_829[(l_825 + 3)][(p_1241->g_353 + 6)][p_1241->g_353] ^ (l_970 ^= (((*p_1241->g_593) , 0xD2L) , (l_842[(p_1241->g_353 + 1)] != l_919)))) <= ((p_1241->g_881 |= ((p_1241->g_86[3] = (safe_mul_func_int8_t_s_s((*l_922), p_1241->g_335))) , p_20)) || (*p_1241->g_820))) || (*l_956));
                        return l_976[1];
                    }
                }
                (*l_827) ^= (safe_mod_func_int16_t_s_s(((safe_unary_minus_func_int64_t_s((-6L))) , 0x7739L), ((((***p_1241->g_554) != p_20) <= ((safe_mod_func_uint32_t_u_u((((p_1241->g_747[0] , (((((p_1241->g_881 = ((((((p_1241->g_198 & ((4L > ((safe_lshift_func_uint8_t_u_s(p_18, (safe_lshift_func_uint16_t_u_s(p_20, 12)))) || 0L)) & p_18)) < p_20) > p_20) | p_1241->g_747[0]) , p_20) < p_20)) | p_18) <= l_986) , (*l_956)) | p_1241->g_86[4])) , (void*)0) == &p_1241->g_83), p_18)) && 1L)) , p_1241->g_340[0][4][1])));
            }
            for (p_1241->g_136 = 0; (p_1241->g_136 <= 2); p_1241->g_136 += 1)
            { /* block id: 424 */
                int32_t l_995 = 0x151696AFL;
                uint16_t l_1003 = 1UL;
                int32_t l_1018 = 0x5F08F1D9L;
                (**p_1241->g_240) = (void*)0;
                if ((&p_1241->g_578[4] == &p_1241->g_578[2]))
                { /* block id: 426 */
                    uint8_t *l_998 = &l_912;
                    int32_t l_1004 = 0x15E2BC3DL;
                    uint8_t *l_1005 = (void*)0;
                    int i, j, k;
                    (*l_827) = (l_829[(l_825 + 1)][(l_825 + 3)][p_1241->g_136] <= ((safe_rshift_func_uint8_t_u_s((p_1241->g_1006 = (safe_sub_func_uint8_t_u_u((l_1004 = (p_1241->g_190 = (safe_sub_func_int8_t_s_s((((*l_826) = ((l_829[l_825][(l_825 + 1)][p_1241->g_136] == l_829[(l_825 + 2)][(p_1241->g_136 + 7)][p_1241->g_136]) , (((*l_998) = ((&p_1241->g_578[0] != &l_914) || (safe_div_func_int32_t_s_s(l_995, (safe_lshift_func_int16_t_s_s(l_829[(l_825 + 2)][(p_1241->g_136 + 7)][p_1241->g_136], 15)))))) >= (safe_lshift_func_uint16_t_u_s((((*l_884) = 0x0C42L) < l_1001[0][1][0]), 11))))) == l_1002), l_1003)))), p_20))), p_20)) | (*p_1241->g_339)));
                    l_1018 &= (safe_add_func_int8_t_s_s(((((safe_sub_func_uint64_t_u_u((p_18 & (((safe_mod_func_uint32_t_u_u(((((*p_1241->g_820)++) == p_20) <= l_995), p_20)) == (0x4EL >= p_18)) | (safe_div_func_int64_t_s_s(p_18, (*l_884))))), (p_20 , l_1017))) && (-8L)) , p_20) ^ p_20), l_1004));
                }
                else
                { /* block id: 436 */
                    uint32_t l_1033 = 6UL;
                    for (p_1241->g_881 = 0; (p_1241->g_881 >= 0); p_1241->g_881 -= 1)
                    { /* block id: 439 */
                        int8_t *l_1021 = &l_857;
                        int8_t ****l_1027 = &l_1026;
                        int i, j, k;
                        l_1033 = (safe_rshift_func_int16_t_s_u(((((*l_1021) = 8L) > (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((-10L), (p_1241->g_340[p_1241->g_881][(p_1241->g_881 + 3)][l_825] == ((((*l_1027) = l_1026) == l_1028[5]) | 255UL)))), (~(safe_div_func_int16_t_s_s((((p_18 , ((void*)0 == p_1241->g_554)) ^ p_18) == p_20), 0xD367L)))))) , p_1241->g_594), 0));
                    }
                    if (p_1241->g_821)
                        goto lbl_864;
                }
                (*l_827) = ((safe_add_func_uint32_t_u_u(((void*)0 == l_1036), p_20)) <= p_20);
            }
        }
    }
    (*p_1241->g_1039) = (*p_1241->g_146);
    return l_1041;
}


/* ------------------------------------------ */
/* 
 * reads : p_1241->g_92 p_1241->g_83 p_1241->g_86 p_1241->g_198 p_1241->g_4 p_1241->g_338 p_1241->g_339 p_1241->g_340 p_1241->g_2 p_1241->g_391 p_1241->g_98 p_1241->g_136 p_1241->g_554 p_1241->g_240 p_1241->g_241 p_1241->g_147 p_1241->g_558 p_1241->g_146 p_1241->g_3 p_1241->g_556 p_1241->g_94 p_1241->g_57 p_1241->g_578 p_1241->g_16 p_1241->g_9 p_1241->g_592 p_1241->g_535 p_1241->g_190 p_1241->g_196 p_1241->g_335 p_1241->g_593 p_1241->g_594 p_1241->g_64 p_1241->g_580 p_1241->g_656 p_1241->g_101 p_1241->g_148 p_1241->g_166 p_1241->g_353 p_1241->g_361 p_1241->g_816
 * writes: p_1241->g_92 p_1241->g_533 p_1241->g_3 p_1241->g_9 p_1241->g_391 p_1241->g_83 p_1241->g_94 p_1241->g_136 p_1241->g_335 p_1241->g_196 p_1241->g_654 p_1241->g_16 p_1241->g_98 p_1241->g_64 p_1241->g_146 p_1241->g_166 p_1241->g_57 p_1241->g_190 p_1241->g_198 p_1241->g_101 p_1241->g_86 p_1241->g_361 p_1241->g_147 p_1241->g_681 p_1241->g_353
 */
int16_t  func_22(int32_t * p_23, int32_t  p_24, uint64_t * p_25, struct S0 * p_1241)
{ /* block id: 145 */
    uint16_t l_409[5][7][4] = {{{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL}},{{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL}},{{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL}},{{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL}},{{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL},{65529UL,0xD5F6L,65529UL,0xB82EL}}};
    uint8_t *l_417 = &p_1241->g_190;
    uint8_t **l_416 = &l_417;
    uint8_t ***l_418 = (void*)0;
    uint8_t **l_420 = &l_417;
    uint8_t ***l_419 = &l_420;
    uint8_t *l_427 = &p_1241->g_190;
    int32_t l_451 = 0L;
    int32_t l_452 = (-1L);
    int32_t l_453 = 0L;
    int32_t l_456 = 0x64446AC5L;
    int32_t **l_513 = &p_1241->g_391[3];
    int32_t ***l_512 = &l_513;
    int8_t *l_582[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t **l_581 = &l_582[5];
    int32_t *l_604 = &p_1241->g_361;
    uint32_t l_612[2];
    uint16_t l_663 = 0UL;
    int16_t **l_708 = (void*)0;
    int64_t l_729[1];
    uint64_t *l_738 = &p_1241->g_92;
    int32_t l_795 = 0x37BA3E56L;
    int16_t *l_796 = &p_1241->g_353;
    uint32_t *l_807 = (void*)0;
    uint32_t *l_808 = &l_612[0];
    int16_t *l_812 = &p_1241->g_86[4];
    int16_t **l_811 = &l_812;
    int16_t *l_813 = &p_1241->g_86[4];
    uint16_t *l_814 = &p_1241->g_101;
    uint64_t *l_815[3];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_612[i] = 0UL;
    for (i = 0; i < 1; i++)
        l_729[i] = (-1L);
    for (i = 0; i < 3; i++)
        l_815[i] = &p_1241->g_9;
    ++l_409[1][4][0];
    if ((safe_div_func_uint64_t_u_u((*p_25), (safe_mul_func_int8_t_s_s(p_1241->g_83, (((((l_416 != (((p_24 || p_1241->g_86[4]) , p_1241->g_198) , ((*l_419) = &l_417))) && (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u((((*p_23) & 0x176E453CL) | (*p_23)), 0x1D3B25957CC49EFCL)) != 0x0EL) & 0x10DF2DF4L), (**p_1241->g_338))) , 0x70L), p_24))) || p_1241->g_2) , (**l_419)) != l_427))))))
    { /* block id: 148 */
        uint32_t l_457 = 0xC7AFC61BL;
        int8_t *l_466 = &p_1241->g_57[3][1][2];
        int32_t l_502[6][5][6] = {{{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L}},{{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L}},{{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L}},{{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L}},{{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L}},{{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L},{0x532E6564L,0x5C150330L,(-8L),(-8L),0x5C150330L,0x532E6564L}}};
        int i, j, k;
        for (p_1241->g_92 = 16; (p_1241->g_92 < 40); p_1241->g_92 = safe_add_func_uint8_t_u_u(p_1241->g_92, 5))
        { /* block id: 151 */
            volatile int32_t * volatile *l_430 = &p_1241->g_147;
            int32_t l_454 = (-5L);
            int32_t l_455 = 0x2F6E727CL;
            uint64_t *l_462 = (void*)0;
            uint64_t *l_463 = &p_1241->g_9;
            int8_t *l_468 = &p_1241->g_57[3][4][0];
            int8_t **l_467 = &l_468;
            uint16_t l_503[6][4][8] = {{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}},{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}}};
            int32_t ***l_514 = &l_513;
            int64_t l_534 = 1L;
            int i, j, k;
            (1 + 1);
        }
    }
    else
    { /* block id: 196 */
        int64_t *l_550[6][7][6] = {{{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533}},{{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533}},{{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533}},{{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533}},{{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533}},{{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533},{&p_1241->g_533,(void*)0,(void*)0,&p_1241->g_198,&p_1241->g_198,&p_1241->g_533}}};
        uint16_t *l_553 = &l_409[4][6][0];
        uint16_t **l_552 = &l_553;
        uint16_t ***l_551 = &l_552;
        int32_t l_557 = 0L;
        int32_t l_589 = (-6L);
        int64_t l_633 = 0x5B1079478469E99DL;
        int32_t l_636 = 0x4D1C0B6FL;
        uint8_t *l_649 = (void*)0;
        int32_t ***l_652 = &l_513;
        int32_t l_659 = (-1L);
        int32_t l_660 = 0x5890EECDL;
        int64_t l_661 = 0x0B7E74861F397ABBL;
        int32_t l_662 = 0x03A6C5AAL;
        int16_t l_785 = 0x5E66L;
        int i, j, k;
        (***p_1241->g_240) = ((((-1L) >= (((safe_sub_func_int32_t_s_s(((safe_mod_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(0x58801B10F0F18336L, (((safe_mul_func_uint16_t_u_u((safe_div_func_int64_t_s_s((**l_513), (p_1241->g_533 = p_24))), p_1241->g_2)) < (0x357AD20DL >= 0xB04DB3EDL)) == (p_24 , (0x5DFE3D36590D3998L || (*p_25)))))), 0x1955L)) & (*p_23)), 0x52681281C403D4F7L)) > p_24), p_1241->g_136)) , l_551) == p_1241->g_554)) , (*p_1241->g_339)) | l_557);
        if (((void*)0 == p_1241->g_558))
        { /* block id: 199 */
            int32_t ***l_559 = (void*)0;
            uint16_t *l_608 = &p_1241->g_101;
            int32_t l_646 = 0x75E5127CL;
            uint16_t ***l_651 = &l_552;
            (**p_1241->g_146) = (l_559 == (void*)0);
            if ((**p_1241->g_146))
            { /* block id: 201 */
                uint32_t l_572[3][1];
                uint64_t *l_587 = &p_1241->g_9;
                uint64_t *l_588[8][3] = {{(void*)0,&p_1241->g_9,&p_1241->g_9},{(void*)0,&p_1241->g_9,&p_1241->g_9},{(void*)0,&p_1241->g_9,&p_1241->g_9},{(void*)0,&p_1241->g_9,&p_1241->g_9},{(void*)0,&p_1241->g_9,&p_1241->g_9},{(void*)0,&p_1241->g_9,&p_1241->g_9},{(void*)0,&p_1241->g_9,&p_1241->g_9},{(void*)0,&p_1241->g_9,&p_1241->g_9}};
                uint32_t *l_599 = &p_1241->g_83;
                int32_t *l_601 = (void*)0;
                int32_t **l_600 = &l_601;
                int32_t *l_603 = (void*)0;
                int32_t **l_602[2];
                int8_t **l_607 = &l_582[3];
                int32_t *l_609 = &l_452;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_572[i][j] = 4294967287UL;
                }
                for (i = 0; i < 2; i++)
                    l_602[i] = &l_603;
                l_589 &= (((safe_mul_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u((*p_1241->g_556), (safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_mod_func_int64_t_s_s((l_572[2][0] | ((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_int8_t_s(((((((safe_add_func_uint8_t_u_u(p_1241->g_57[4][2][1], (p_23 == p_23))) || ((((*p_25) = 0UL) != ((p_1241->g_578[0] == l_581) <= (safe_add_func_int16_t_s_s(((((safe_lshift_func_int8_t_s_u(((((p_24 && p_1241->g_340[0][4][1]) , &p_1241->g_579) != &l_582[5]) >= 3UL), 4)) , l_587) != l_588[6][1]) , p_24), p_1241->g_16)))) && l_557)) == 0xB24FL) || 0xC8920506A090BFB9L) || l_572[2][0]) == p_24))), p_1241->g_57[0][3][4])) | (**l_513))), l_557)), p_1241->g_9)), p_24)))) | 0x04ACL) && l_557), p_24)), 1UL)) , l_572[2][0]) != p_1241->g_83);
                (*l_609) ^= ((--(*l_587)) >= ((p_1241->g_391[3] = ((p_1241->g_592[1][1] != (*l_419)) , &p_1241->g_98)) != ((((((l_572[2][0] <= ((safe_mul_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(((*l_599) = p_24), (((*l_553) |= (l_599 == (l_604 = ((*l_600) = &p_1241->g_361)))) < ((safe_lshift_func_uint16_t_u_s(((*p_1241->g_556) = (l_607 != &p_1241->g_579)), p_1241->g_535)) <= l_589)))) , p_1241->g_98) || p_1241->g_190), l_572[2][0])) <= p_1241->g_196)) , p_24) , l_608) != l_608) > 0x7573AF0072AAE1BDL) , (**p_1241->g_240))));
                for (p_1241->g_136 = 6; (p_1241->g_136 > 48); p_1241->g_136++)
                { /* block id: 214 */
                    l_612[0]--;
                    for (p_1241->g_335 = 29; (p_1241->g_335 > 54); p_1241->g_335 = safe_add_func_uint16_t_u_u(p_1241->g_335, 9))
                    { /* block id: 218 */
                        (***p_1241->g_240) &= ((void*)0 != &l_608);
                        return p_1241->g_86[3];
                    }
                }
            }
            else
            { /* block id: 223 */
                uint32_t *l_627 = &l_612[0];
                int32_t *l_632[10][4][1];
                int32_t *l_634 = (void*)0;
                int32_t *l_635[8][4] = {{&l_452,&l_456,&l_452,&l_452},{&l_452,&l_456,&l_452,&l_452},{&l_452,&l_456,&l_452,&l_452},{&l_452,&l_456,&l_452,&l_452},{&l_452,&l_456,&l_452,&l_452},{&l_452,&l_456,&l_452,&l_452},{&l_452,&l_456,&l_452,&l_452},{&l_452,&l_456,&l_452,&l_452}};
                int i, j, k;
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_632[i][j][k] = (void*)0;
                    }
                }
                if (((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_u((p_1241->g_196 = (safe_add_func_int64_t_s_s((safe_div_func_uint16_t_u_u(((((!(0x62L && (((p_1241->g_198 , ((0x65CBL < (0x03F1E7E7L | ((*l_627) = p_24))) >= ((*p_25) = (~(p_24 || (l_636 &= ((safe_div_func_uint8_t_u_u((*p_1241->g_593), ((l_633 = ((safe_lshift_func_uint16_t_u_s(l_557, 1)) >= 9UL)) , p_1241->g_94))) > (***l_512)))))))) > p_24) <= 1UL))) , p_24) || p_24) < (*p_23)), 8L)), p_1241->g_57[0][3][4]))), p_24)) > 0x24L), (***l_512))), p_1241->g_198)) != 1UL))
                { /* block id: 229 */
                    int16_t l_637 = 0L;
                    (*p_1241->g_147) = (l_637 = 0x6D9FFBFAL);
                    return p_24;
                }
                else
                { /* block id: 233 */
                    int64_t l_638 = 0x1198B583E42BE890L;
                    uint32_t l_639 = 0UL;
                    for (p_1241->g_9 = 0; (p_1241->g_9 <= 0); p_1241->g_9 += 1)
                    { /* block id: 236 */
                        int i;
                        l_639++;
                        if (p_1241->g_86[(p_1241->g_9 + 2)])
                            break;
                        (*p_1241->g_147) ^= 6L;
                    }
                }
            }
            for (p_1241->g_83 = 0; (p_1241->g_83 <= 59); p_1241->g_83 = safe_add_func_int64_t_s_s(p_1241->g_83, 2))
            { /* block id: 245 */
                if ((**p_1241->g_146))
                    break;
            }
            if ((((void*)0 != &p_1241->g_148) , (p_1241->g_94 < (((safe_sub_func_int16_t_s_s(((l_646 ^= 3L) != ((-1L) == 0x38094B89L)), (safe_mul_func_int16_t_s_s(((((((l_649 != l_649) && (-4L)) , p_1241->g_94) >= p_1241->g_64) , p_24) < (-2L)), p_24)))) , p_1241->g_535) <= p_1241->g_580))))
            { /* block id: 249 */
                int32_t *l_650[1][7] = {{&l_456,&l_456,&l_456,&l_456,&l_456,&l_456,&l_456}};
                int32_t ****l_653[8] = {&l_652,(void*)0,&l_652,&l_652,(void*)0,&l_652,&l_652,(void*)0};
                int64_t *l_657 = (void*)0;
                int64_t *l_658[10][2][8] = {{{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16},{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16}},{{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16},{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16}},{{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16},{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16}},{{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16},{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16}},{{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16},{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16}},{{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16},{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16}},{{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16},{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16}},{{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16},{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16}},{{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16},{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16}},{{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16},{(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16,&p_1241->g_16,(void*)0,&p_1241->g_16}}};
                int64_t *l_672 = (void*)0;
                uint64_t l_684[8][7][4] = {{{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL}},{{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL}},{{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL}},{{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL}},{{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL}},{{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL}},{{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL}},{{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL},{0x8CEEA165BD3B2C68L,0x842360533EDA1051L,0x26FCC883D79E6638L,0xBFD4BDF50217A76FL}}};
                int i, j, k;
                p_23 = func_26(((*l_513) = l_650[0][4]), ((l_651 != l_651) >= p_1241->g_335), p_25, (p_1241->g_16 = ((p_1241->g_196 = (&p_1241->g_389[1] != (p_1241->g_654[0] = l_652))) | p_1241->g_656)), p_1241);
lbl_686:
                --l_663;
                for (l_660 = (-24); (l_660 < 29); l_660 = safe_add_func_uint32_t_u_u(l_660, 2))
                { /* block id: 258 */
                    int64_t **l_668 = (void*)0;
                    int64_t **l_669 = &l_550[4][5][4];
                    int64_t *l_671 = (void*)0;
                    int64_t **l_670[10][9][2] = {{{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671}},{{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671}},{{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671}},{{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671}},{{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671}},{{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671}},{{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671}},{{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671}},{{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671}},{{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671},{&l_671,&l_671}}};
                    int32_t l_685 = 0x6C6FDCC9L;
                    int i, j, k;
                    (*p_1241->g_147) &= (&p_1241->g_533 == (l_672 = ((*l_669) = p_25)));
                    l_685 |= ((safe_unary_minus_func_int16_t_s((((safe_lshift_func_uint16_t_u_s(p_24, 7)) != (p_1241->g_196 = (((0x32A2L == p_24) && ((*p_1241->g_593) | (((+(p_1241->g_190 ^= (safe_unary_minus_func_int16_t_s((p_1241->g_86[3] &= (***l_652)))))) && ((+((safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((~((p_1241->g_681 = func_32(&p_1241->g_9, p_1241)) == (void*)0)), ((((**l_420) = (safe_lshift_func_int8_t_s_s(((0x8B2FBC4CL ^ l_684[3][1][0]) , p_1241->g_57[0][3][4]), p_24))) < p_1241->g_86[4]) || (*p_23)))), p_24)) >= (*p_25))) , 0L)) == (*p_23)))) | p_1241->g_92))) < p_24))) & p_1241->g_335);
                    if (p_1241->g_16)
                        goto lbl_686;
                }
            }
            else
            { /* block id: 270 */
                int32_t *l_687 = &l_452;
                p_23 = l_687;
                return p_24;
            }
        }
        else
        { /* block id: 274 */
            uint8_t ***l_695 = &l_416;
            int32_t l_709 = 0x0B15420EL;
            int32_t l_737 = 0x7D3E91CDL;
            int16_t l_772[10] = {0x6936L,0x6936L,0x6936L,0x6936L,0x6936L,0x6936L,0x6936L,0x6936L,0x6936L,0x6936L};
            int i;
            for (l_659 = 0; (l_659 > (-1)); l_659 = safe_sub_func_int64_t_s_s(l_659, 3))
            { /* block id: 277 */
                uint8_t ****l_696 = &l_419;
                int16_t *l_703 = &p_1241->g_86[4];
                uint8_t ****l_711 = &l_695;
                uint8_t *****l_710 = &l_711;
                int32_t l_718 = 1L;
                uint32_t *l_730 = &p_1241->g_535;
                uint64_t *l_731 = (void*)0;
                int32_t *l_741 = (void*)0;
                (*l_513) = (void*)0;
            }
        }
    }
    (**p_1241->g_240) = (p_1241->g_535 , (void*)0);
    (*p_1241->g_816) = (((p_1241->g_9 = ((*p_25) = (((((((**l_416) ^= (safe_div_func_int16_t_s_s(((*l_796) = l_795), (p_1241->g_16 , p_24)))) == ((safe_add_func_uint64_t_u_u(((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((p_24 <= (((p_24 < ((*l_808)--)) ^ (((*l_811) = l_796) != l_813)) > ((p_24 | ((*l_814) |= (*p_1241->g_556))) != 0x22531F59L))), p_24)), 1L)) , (*p_25)), p_24)) && 0x7A83835FL)) ^ 1L) ^ p_1241->g_136) || (*p_23)) > p_1241->g_83))) && p_24) , (*p_23));
    return p_1241->g_136;
}


/* ------------------------------------------ */
/* 
 * reads : p_1241->g_101 p_1241->g_98 p_1241->g_64 p_1241->g_4 p_1241->g_146 p_1241->g_148 p_1241->g_147 p_1241->g_3 p_1241->g_166 p_1241->g_9 p_1241->g_57 p_1241->g_83 p_1241->g_16 p_1241->g_136 p_1241->g_198 p_1241->g_94 p_1241->g_240 p_1241->g_86 p_1241->g_92 p_1241->g_190 p_1241->g_2 p_1241->g_196 p_1241->g_335 p_1241->g_338 p_1241->g_339 p_1241->g_340 p_1241->g_353 p_1241->g_361 p_1241->g_241
 * writes: p_1241->g_98 p_1241->g_64 p_1241->g_146 p_1241->g_166 p_1241->g_57 p_1241->g_190 p_1241->g_92 p_1241->g_196 p_1241->g_198 p_1241->g_16 p_1241->g_101 p_1241->g_3 p_1241->g_136 p_1241->g_86 p_1241->g_94 p_1241->g_9 p_1241->g_335 p_1241->g_361 p_1241->g_83 p_1241->g_147 p_1241->g_391
 */
int32_t * func_26(int32_t * p_27, uint64_t  p_28, uint64_t * p_29, int64_t  p_30, struct S0 * p_1241)
{ /* block id: 42 */
    int32_t l_164[8] = {0x0AEB11F9L,(-1L),0x0AEB11F9L,0x0AEB11F9L,(-1L),0x0AEB11F9L,0x0AEB11F9L,(-1L)};
    int16_t *l_170 = &p_1241->g_86[0];
    int8_t l_242 = 0x60L;
    uint8_t l_259 = 254UL;
    uint32_t l_388 = 0x211AE282L;
    uint16_t *l_398 = (void*)0;
    uint16_t **l_397[1][3];
    int8_t l_400 = 0L;
    int32_t *l_401 = &p_1241->g_98;
    uint64_t *l_406[10][7][3] = {{{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9}},{{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9}},{{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9}},{{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9}},{{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9}},{{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9}},{{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9}},{{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9}},{{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9}},{{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9},{&p_1241->g_9,&p_1241->g_9,&p_1241->g_9}}};
    int32_t l_407 = 4L;
    int32_t *l_408 = &p_1241->g_98;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_397[i][j] = &l_398;
    }
    p_1241->g_98 &= ((((void*)0 != p_27) , p_1241->g_101) && 65532UL);
lbl_399:
    for (p_1241->g_64 = (-11); (p_1241->g_64 < 19); p_1241->g_64++)
    { /* block id: 46 */
        int32_t l_145 = 0x0E35A52BL;
        int32_t l_165[2];
        int16_t *l_220 = &p_1241->g_86[4];
        uint8_t l_225[2];
        int32_t *l_264 = &l_165[0];
        int32_t **l_378[10];
        int32_t ***l_377 = &l_378[2];
        uint8_t **l_394 = (void*)0;
        uint8_t *l_396 = &p_1241->g_190;
        uint8_t **l_395 = &l_396;
        int i;
        for (i = 0; i < 2; i++)
            l_165[i] = (-10L);
        for (i = 0; i < 2; i++)
            l_225[i] = 255UL;
        for (i = 0; i < 10; i++)
            l_378[i] = &l_264;
        if ((safe_lshift_func_int8_t_s_s(p_1241->g_4, 3)))
        { /* block id: 47 */
            int16_t l_158 = 0x3E2AL;
            int32_t l_163 = 1L;
            int16_t *l_223[4][10] = {{&p_1241->g_86[4],&p_1241->g_86[4],&l_158,&l_158,&p_1241->g_86[4],&p_1241->g_86[4],&l_158,&l_158,&p_1241->g_86[4],&p_1241->g_86[4]},{&p_1241->g_86[4],&p_1241->g_86[4],&l_158,&l_158,&p_1241->g_86[4],&p_1241->g_86[4],&l_158,&l_158,&p_1241->g_86[4],&p_1241->g_86[4]},{&p_1241->g_86[4],&p_1241->g_86[4],&l_158,&l_158,&p_1241->g_86[4],&p_1241->g_86[4],&l_158,&l_158,&p_1241->g_86[4],&p_1241->g_86[4]},{&p_1241->g_86[4],&p_1241->g_86[4],&l_158,&l_158,&p_1241->g_86[4],&p_1241->g_86[4],&l_158,&l_158,&p_1241->g_86[4],&p_1241->g_86[4]}};
            int16_t l_243 = (-1L);
            int32_t l_257 = 0x6C7795BCL;
            int32_t l_258 = 0x4F445BDCL;
            int i, j;
            if ((0UL >= l_145))
            { /* block id: 48 */
                uint8_t l_159 = 5UL;
                if ((0x3CL <= (p_30 || 2UL)))
                { /* block id: 49 */
                    (*p_1241->g_148) = p_1241->g_146;
                }
                else
                { /* block id: 51 */
                    int32_t *l_149 = &p_1241->g_98;
                    int32_t *l_150 = &p_1241->g_98;
                    int32_t *l_151 = (void*)0;
                    int32_t *l_152 = &p_1241->g_98;
                    int32_t *l_153 = &l_145;
                    int32_t *l_154 = &p_1241->g_98;
                    int32_t *l_155 = &p_1241->g_98;
                    int32_t *l_156 = &l_145;
                    int32_t *l_157[7][3][2] = {{{&p_1241->g_98,&p_1241->g_98},{&p_1241->g_98,&p_1241->g_98},{&p_1241->g_98,&p_1241->g_98}},{{&p_1241->g_98,&p_1241->g_98},{&p_1241->g_98,&p_1241->g_98},{&p_1241->g_98,&p_1241->g_98}},{{&p_1241->g_98,&p_1241->g_98},{&p_1241->g_98,&p_1241->g_98},{&p_1241->g_98,&p_1241->g_98}},{{&p_1241->g_98,&p_1241->g_98},{&p_1241->g_98,&p_1241->g_98},{&p_1241->g_98,&p_1241->g_98}},{{&p_1241->g_98,&p_1241->g_98},{&p_1241->g_98,&p_1241->g_98},{&p_1241->g_98,&p_1241->g_98}},{{&p_1241->g_98,&p_1241->g_98},{&p_1241->g_98,&p_1241->g_98},{&p_1241->g_98,&p_1241->g_98}},{{&p_1241->g_98,&p_1241->g_98},{&p_1241->g_98,&p_1241->g_98},{&p_1241->g_98,&p_1241->g_98}}};
                    int i, j, k;
                    --l_159;
                    if ((*p_1241->g_147))
                        break;
                }
            }
            else
            { /* block id: 55 */
                int32_t *l_162[10][7] = {{&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4},{&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4},{&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4},{&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4},{&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4},{&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4},{&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4},{&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4},{&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4},{&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4,&l_145,&p_1241->g_4,&p_1241->g_4}};
                int16_t *l_169[7] = {&p_1241->g_86[4],&p_1241->g_86[4],&p_1241->g_86[4],&p_1241->g_86[4],&p_1241->g_86[4],&p_1241->g_86[4],&p_1241->g_86[4]};
                int16_t **l_171 = &l_170;
                int8_t *l_181 = &p_1241->g_57[2][1][1];
                uint8_t *l_188 = (void*)0;
                uint8_t *l_189[10];
                int8_t *l_195 = &p_1241->g_196;
                int64_t *l_197 = &p_1241->g_198;
                int64_t *l_199[6][10] = {{&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16},{&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16},{&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16},{&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16},{&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16},{&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16,&p_1241->g_16}};
                int i, j;
                for (i = 0; i < 10; i++)
                    l_189[i] = &p_1241->g_190;
                --p_1241->g_166;
                l_145 = (!((((((((p_1241->g_9 , ((l_169[3] != ((*l_171) = l_170)) , (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int32_t_s(((+(safe_mul_func_int16_t_s_s(((p_1241->g_16 ^= (safe_mul_func_int16_t_s_s((((safe_div_func_int8_t_s_s(((*l_181) &= (l_163 , 0x1DL)), p_28)) != ((*l_197) = (safe_mul_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((*p_29) = (safe_sub_func_uint8_t_u_u((p_1241->g_190 = p_28), 255UL))), (safe_mul_func_uint8_t_u_u((safe_div_func_int64_t_s_s((((*l_195) = (((+p_28) == p_1241->g_64) == p_30)) >= l_164[7]), p_30)), p_1241->g_83)))), p_28)))) == l_145), 0xB9BCL))) , p_1241->g_9), l_158))) , (*p_27)))), p_1241->g_83)))) < 0x2DL) , (void*)0) != &p_1241->g_86[2]) , 3L) || 0x5DFB3987L) && 4294967295UL) , (*p_1241->g_147)));
            }
            for (l_145 = 22; (l_145 != (-3)); l_145--)
            { /* block id: 68 */
                uint8_t l_204 = 255UL;
                uint16_t **l_207 = (void*)0;
                uint16_t *l_209 = &p_1241->g_64;
                uint16_t **l_208 = &l_209;
                uint16_t *l_210 = &p_1241->g_94;
                int16_t **l_219[5];
                int8_t *l_224 = &p_1241->g_196;
                uint16_t *l_226 = (void*)0;
                uint16_t *l_227 = &p_1241->g_101;
                int8_t *l_239 = &p_1241->g_57[0][3][4];
                int32_t *l_244 = (void*)0;
                int32_t *l_245 = &p_1241->g_98;
                int32_t *l_246 = &l_164[6];
                int32_t *l_247 = &l_164[3];
                int32_t *l_248 = &l_165[1];
                int32_t *l_249 = &l_165[1];
                int32_t *l_250 = (void*)0;
                int32_t *l_251 = (void*)0;
                int32_t *l_252 = (void*)0;
                int32_t *l_253 = (void*)0;
                int32_t *l_254 = (void*)0;
                int32_t *l_255 = &l_164[3];
                int32_t *l_256[7][8] = {{&l_145,(void*)0,&l_165[0],&l_165[1],&l_164[3],&l_145,&l_165[1],&p_1241->g_98},{&l_145,(void*)0,&l_165[0],&l_165[1],&l_164[3],&l_145,&l_165[1],&p_1241->g_98},{&l_145,(void*)0,&l_165[0],&l_165[1],&l_164[3],&l_145,&l_165[1],&p_1241->g_98},{&l_145,(void*)0,&l_165[0],&l_165[1],&l_164[3],&l_145,&l_165[1],&p_1241->g_98},{&l_145,(void*)0,&l_165[0],&l_165[1],&l_164[3],&l_145,&l_165[1],&p_1241->g_98},{&l_145,(void*)0,&l_165[0],&l_165[1],&l_164[3],&l_145,&l_165[1],&p_1241->g_98},{&l_145,(void*)0,&l_165[0],&l_165[1],&l_164[3],&l_145,&l_165[1],&p_1241->g_98}};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_219[i] = &l_170;
                (*p_1241->g_147) ^= (safe_rshift_func_int16_t_s_u(l_204, ((*l_227) = ((safe_add_func_uint8_t_u_u((((*l_208) = &p_1241->g_101) == (l_210 = (void*)0)), (safe_div_func_int64_t_s_s((safe_add_func_int32_t_s_s((((*l_224) = ((((((safe_sub_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(l_145, (-1L))) , p_28), (((l_220 = &l_158) != l_170) < (safe_sub_func_int16_t_s_s(0L, l_165[1]))))) , p_1241->g_136) , p_1241->g_198) , &l_158) == l_223[1][9]) , l_164[3])) <= p_30), l_164[2])), 1UL)))) > l_225[1]))));
                l_165[1] |= ((((-4L) < (safe_lshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u(2UL, (((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u(((((p_1241->g_16 & ((((*l_239) = ((*l_224) = (safe_unary_minus_func_int8_t_s(l_164[3])))) ^ ((p_1241->g_166 , (((void*)0 != (**p_1241->g_148)) >= ((((0x2308FB7BL >= 0xF68CC088L) || p_1241->g_98) != l_164[3]) > l_204))) <= 0x39CAL)) , p_1241->g_94)) , (void*)0) != p_1241->g_240) | p_30), p_1241->g_86[3])), 1L)) || 1UL), 0x3485L)) || p_28) , l_163))), l_242))) && p_30) < (*p_29));
                l_259--;
            }
        }
        else
        { /* block id: 80 */
            int32_t *l_263 = (void*)0;
            int32_t **l_262[7][7][5] = {{{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263}},{{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263}},{{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263}},{{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263}},{{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263}},{{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263}},{{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263},{(void*)0,&l_263,&l_263,&l_263,&l_263}}};
            int32_t ***l_379 = (void*)0;
            int i, j, k;
            p_27 = (l_264 = &p_1241->g_4);
            for (p_1241->g_136 = 0; (p_1241->g_136 <= 4); p_1241->g_136 += 1)
            { /* block id: 85 */
                uint32_t l_280 = 0x69338E5FL;
                int32_t l_333 = (-6L);
                int32_t l_334[10];
                uint16_t **l_341 = (void*)0;
                int i;
                for (i = 0; i < 10; i++)
                    l_334[i] = 1L;
                for (p_1241->g_16 = 4; (p_1241->g_16 >= 0); p_1241->g_16 -= 1)
                { /* block id: 88 */
                    volatile int32_t * volatile l_265 = (void*)0;/* VOLATILE GLOBAL l_265 */
                    uint16_t *l_274 = &p_1241->g_101;
                    int32_t l_298 = 3L;
                    int32_t l_299[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int32_t l_332 = 0L;
                    int i, j, k;
                    l_265 = (**p_1241->g_148);
                    if ((safe_sub_func_int32_t_s_s((((safe_add_func_int8_t_s_s((-4L), p_1241->g_86[p_1241->g_136])) || (~((safe_lshift_func_uint16_t_u_s((p_1241->g_94 = ((safe_lshift_func_uint16_t_u_u(((*l_274) = 0x950CL), (safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_uint8_t_u(p_1241->g_3)) & (*p_29)), 6)))) & (p_1241->g_86[p_1241->g_16] &= ((p_1241->g_136 != (((void*)0 == &p_1241->g_198) || (safe_div_func_uint8_t_u_u((p_1241->g_190 , 1UL), p_1241->g_198)))) || 0xE6F43D2FL)))), 3)) & 0x23L))) >= p_1241->g_198), p_1241->g_92)))
                    { /* block id: 93 */
                        int i, j, k;
                        (*p_1241->g_147) &= (-6L);
                        if (l_280)
                            continue;
                    }
                    else
                    { /* block id: 96 */
                        uint16_t l_281 = 1UL;
                        l_281--;
                        if ((*p_27))
                            continue;
                    }
                    if ((*p_27))
                    { /* block id: 100 */
                        uint16_t l_286 = 0UL;
                        int8_t *l_297 = &p_1241->g_196;
                        (*p_1241->g_147) = (p_1241->g_57[3][4][1] < (safe_add_func_uint64_t_u_u((l_286 , (((safe_add_func_uint64_t_u_u(((((*l_170) = p_1241->g_2) | (0x6EL >= ((*l_297) = (((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((p_1241->g_196 , l_242), ((((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_1241->g_9, (0x10L != 1L))), p_1241->g_98)) , p_1241->g_57[4][0][3]) | p_30) != 65534UL))), 0xDBL)) < 0x85L) != 0x20281DD2L)))) | p_1241->g_92), 0x5DB9A783487E90FEL)) & p_28) == p_30)), p_1241->g_57[0][3][4])));
                        return p_27;
                    }
                    else
                    { /* block id: 105 */
                        uint32_t l_300[1][10][2] = {{{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL},{4294967295UL,4294967293UL}}};
                        int32_t l_331 = (-4L);
                        uint16_t ***l_342 = &l_341;
                        int i, j, k;
                        ++l_300[0][4][0];
                        l_332 = ((safe_rshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s((((safe_div_func_int64_t_s_s((((0x07L ^ (safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(0x7DBB700DL, (((safe_mod_func_uint8_t_u_u((*l_264), (((-1L) <= ((*p_29) = (safe_add_func_int32_t_s_s((p_28 <= ((*l_220) = ((safe_mod_func_int32_t_s_s((*p_27), (l_331 |= (p_30 && (((safe_mul_func_uint8_t_u_u(1UL, (((safe_mod_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u((((!(safe_mod_func_uint64_t_u_u((p_1241->g_9 |= ((safe_mul_func_uint8_t_u_u(p_30, p_1241->g_86[1])) , 0xB05D60C1BF1FC371L)), 0x327BBFC23E28ED99L))) <= 4294967295UL) & p_1241->g_16), p_1241->g_57[1][2][0])) == p_1241->g_196), p_28)) != l_300[0][4][0]) < p_1241->g_4))) , p_30) != (*l_264)))))) > l_280))), p_1241->g_198)))) ^ p_28))) > (-1L)) ^ p_28))), (-1L)))) > (-1L)) < 0x665CAF6B08F53773L), 0x7B53C0D5994C367EL)) && (*l_264)) , 0x33L), p_28)) > (*l_265)), 0)) | p_1241->g_16);
                        p_1241->g_335--;
                        p_1241->g_98 |= (!(p_1241->g_338 != ((*l_342) = l_341)));
                    }
                }
                if ((l_165[1] = (safe_rshift_func_int8_t_s_s((*l_264), 5))))
                { /* block id: 118 */
                    uint16_t *l_354 = &p_1241->g_335;
                    int32_t l_357 = (-1L);
                    int32_t *l_360 = &p_1241->g_361;
                    if (((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_1241->g_57[3][0][3], (*p_1241->g_339))), ((p_1241->g_353 && (((*l_354) = p_28) , (p_28 ^ ((safe_div_func_int16_t_s_s((l_357 & (&p_1241->g_241[2] == (((*l_360) |= ((*l_264) <= ((safe_add_func_int32_t_s_s(((*p_29) != 2UL), p_28)) | l_164[6]))) , &l_262[5][2][4]))), p_1241->g_190)) <= p_1241->g_198)))) , (*l_264)))), p_1241->g_16)), 0x0EL)) & p_1241->g_83))
                    { /* block id: 121 */
                        (*p_1241->g_147) = (**p_1241->g_146);
                        if (p_1241->g_196)
                            goto lbl_399;
                    }
                    else
                    { /* block id: 123 */
                        int8_t *l_362 = &p_1241->g_57[0][3][4];
                        uint32_t *l_370 = (void*)0;
                        uint32_t *l_371 = (void*)0;
                        uint32_t *l_372 = &p_1241->g_83;
                        volatile int32_t * volatile *l_390[2][6][7] = {{{&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147},{&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147},{&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147},{&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147},{&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147},{&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147}},{{&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147},{&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147},{&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147},{&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147},{&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147},{&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147}}};
                        int i, j, k;
                        l_388 &= ((((*l_362) = 0x6EL) >= ((safe_add_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(((l_242 == 1L) != ((((-1L) == (--p_1241->g_92)) < (++(*l_372))) < (***p_1241->g_148))))), ((safe_sub_func_int16_t_s_s((l_377 != l_379), ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(p_1241->g_101, (((safe_mod_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(l_259, 0L)), p_1241->g_136)) > 1UL) | l_164[3]))), p_30)) | 3UL))) & (*p_27)))) || l_164[2]) && 65529UL), l_242)) | l_357)) | 0xD6L);
                        (*p_1241->g_146) = (*p_1241->g_146);
                    }
                }
                else
                { /* block id: 130 */
                    p_1241->g_391[3] = p_27;
                }
                return p_27;
            }
        }
        (***p_1241->g_240) ^= (p_28 | (safe_add_func_uint8_t_u_u(p_1241->g_86[1], ((((*l_395) = &l_225[1]) == &l_259) , (l_397[0][2] == &p_1241->g_339)))));
    }
    (*l_408) |= ((((l_401 = ((l_400 && p_28) , ((***p_1241->g_148) , &p_1241->g_4))) == (**p_1241->g_240)) & (((0x8BA01716409956FBL & (safe_div_func_int64_t_s_s((((--(*p_29)) || l_164[2]) < 1L), (l_407 = (((l_388 , p_1241->g_335) || l_259) , p_1241->g_198))))) >= p_30) , 0x2AL)) && 0xA44ECC76L);
    return &p_1241->g_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_1241->g_98 p_1241->g_57 p_1241->g_86 p_1241->g_4 p_1241->g_9
 * writes: p_1241->g_83 p_1241->g_94 p_1241->g_101 p_1241->g_136 p_1241->g_98
 */
uint64_t * func_32(uint64_t * p_33, struct S0 * p_1241)
{ /* block id: 34 */
    int8_t l_118 = 0x7DL;
    uint8_t l_127 = 246UL;
    uint32_t *l_128 = (void*)0;
    uint32_t *l_129 = &p_1241->g_83;
    uint16_t *l_132 = &p_1241->g_94;
    uint16_t *l_133 = &p_1241->g_101;
    int32_t l_134 = 0x1DF947B4L;
    uint32_t *l_135 = &p_1241->g_136;
    int32_t *l_137 = (void*)0;
    int32_t *l_138 = &p_1241->g_98;
    uint64_t *l_139 = &p_1241->g_92;
    (*l_138) = (safe_mod_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((((0L & 1L) & (((*l_135) = (safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(p_1241->g_98, (safe_lshift_func_int16_t_s_s(l_118, (l_134 = ((((safe_mod_func_uint16_t_u_u(((*l_133) = ((*l_132) = ((safe_div_func_int64_t_s_s(((safe_add_func_int32_t_s_s((((*l_129) = (safe_mod_func_int32_t_s_s(l_127, p_1241->g_57[0][0][4]))) && (safe_mod_func_int16_t_s_s(((void*)0 != &p_1241->g_98), p_1241->g_86[4]))), p_1241->g_4)) , l_127), p_1241->g_57[1][3][0])) & 0xF78960E8A9312FBDL))), l_127)) || 0x70AF6214L) == (*p_33)) ^ l_118)))))) & 6L), 4)), 0xE62905013582EBD2L))) , l_118)) , l_127), 2)) > p_1241->g_98), l_118)) > 0x7A50L) < p_1241->g_57[0][1][3]), l_118));
    return l_139;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t * func_34(int64_t  p_35, int32_t  p_36, int64_t * p_37, uint32_t  p_38, struct S0 * p_1241)
{ /* block id: 32 */
    return &p_1241->g_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_1241->g_101 p_1241->g_94
 * writes: p_1241->g_101
 */
int64_t  func_39(uint64_t  p_40, int32_t  p_41, struct S0 * p_1241)
{ /* block id: 24 */
    int32_t *l_97 = &p_1241->g_98;
    int32_t *l_99 = &p_1241->g_98;
    int32_t *l_100[5];
    int i;
    for (i = 0; i < 5; i++)
        l_100[i] = &p_1241->g_98;
    for (p_41 = (-14); (p_41 == 26); p_41 = safe_add_func_int32_t_s_s(p_41, 6))
    { /* block id: 27 */
        if (p_40)
            break;
    }
    p_1241->g_101++;
    return p_1241->g_94;
}


/* ------------------------------------------ */
/* 
 * reads : p_1241->g_9 p_1241->g_16 p_1241->g_64 p_1241->g_57 p_1241->g_4 p_1241->g_83
 * writes: p_1241->g_57 p_1241->g_64 p_1241->g_83
 */
int8_t  func_44(uint32_t  p_45, int32_t * p_46, struct S0 * p_1241)
{ /* block id: 11 */
    uint64_t *l_52 = &p_1241->g_9;
    int16_t l_53 = (-1L);
    int8_t *l_54 = (void*)0;
    int8_t *l_55 = (void*)0;
    int8_t *l_56 = &p_1241->g_57[0][3][4];
    uint16_t *l_63 = &p_1241->g_64;
    int32_t *l_81 = &p_1241->g_4;
    int32_t l_82 = 0x7A00A4EDL;
    p_1241->g_83 = (func_47(l_52, p_45, ((*l_56) = l_53), l_52, p_1241) , ((safe_add_func_int32_t_s_s(((++(*l_63)) == ((safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((((((0x0C09L ^ (safe_sub_func_int8_t_s_s((((((1L | (((safe_mod_func_int8_t_s_s(1L, (safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((p_1241->g_57[0][3][4] , p_1241->g_16), p_1241->g_4)), 0)))) , p_45) , 0x67029BB2L)) , l_81) == (void*)0) ^ p_1241->g_9) , p_1241->g_9), (-1L)))) > p_1241->g_57[0][3][4]) & 7UL) , (void*)0) != &p_1241->g_57[3][4][2]), l_82)) == (*l_81)) , (*l_81)), 1L)), 0x4FL)) >= p_1241->g_4)), (-10L))) == 4294967294UL));
    return p_1241->g_83;
}


/* ------------------------------------------ */
/* 
 * reads : p_1241->g_9 p_1241->g_16
 * writes:
 */
uint64_t  func_47(uint64_t * p_48, uint64_t  p_49, int8_t  p_50, uint64_t * p_51, struct S0 * p_1241)
{ /* block id: 13 */
    int32_t *l_58 = (void*)0;
    int32_t *l_59 = (void*)0;
    uint32_t l_60 = 0x77771FDAL;
    l_60 &= p_1241->g_9;
    return p_1241->g_16;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_1242;
    struct S0* p_1241 = &c_1242;
    struct S0 c_1243 = {
        8L, // p_1241->g_2
        0x2B57E8B7L, // p_1241->g_3
        0x4914D2EDL, // p_1241->g_4
        18446744073709551609UL, // p_1241->g_9
        5L, // p_1241->g_16
        {{{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L}},{{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L}},{{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L}},{{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L}},{{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L},{0x00L,0x14L,0x14L,0x3FL,5L}}}, // p_1241->g_57
        65535UL, // p_1241->g_64
        0x7092E0EEL, // p_1241->g_83
        {0x7A58L,0x7A58L,0x7A58L,0x7A58L,0x7A58L}, // p_1241->g_86
        0xB049BDD3DE950740L, // p_1241->g_92
        8UL, // p_1241->g_94
        0x0F05760DL, // p_1241->g_98
        1UL, // p_1241->g_101
        4294967295UL, // p_1241->g_136
        &p_1241->g_3, // p_1241->g_147
        &p_1241->g_147, // p_1241->g_146
        &p_1241->g_146, // p_1241->g_148
        18446744073709551615UL, // p_1241->g_166
        0x41L, // p_1241->g_190
        4L, // p_1241->g_196
        0x0CE1991DECDD1267L, // p_1241->g_198
        {&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147,&p_1241->g_147}, // p_1241->g_241
        &p_1241->g_241[6], // p_1241->g_240
        0xD3A2L, // p_1241->g_335
        {{{0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL},{0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL},{0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL},{0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL},{0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL},{0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL},{0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL},{0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL,0xBB3FL}}}, // p_1241->g_340
        &p_1241->g_340[0][4][1], // p_1241->g_339
        &p_1241->g_339, // p_1241->g_338
        (-1L), // p_1241->g_353
        0x6B77408FL, // p_1241->g_361
        {&p_1241->g_147,&p_1241->g_147}, // p_1241->g_389
        {&p_1241->g_98,&p_1241->g_98,&p_1241->g_98,&p_1241->g_98}, // p_1241->g_391
        5L, // p_1241->g_533
        2UL, // p_1241->g_535
        &p_1241->g_94, // p_1241->g_556
        &p_1241->g_556, // p_1241->g_555
        &p_1241->g_555, // p_1241->g_554
        (void*)0, // p_1241->g_558
        0L, // p_1241->g_580
        &p_1241->g_580, // p_1241->g_579
        {&p_1241->g_579,&p_1241->g_579,&p_1241->g_579,&p_1241->g_579,&p_1241->g_579}, // p_1241->g_578
        0xC3L, // p_1241->g_594
        &p_1241->g_594, // p_1241->g_593
        {{&p_1241->g_593,&p_1241->g_593},{&p_1241->g_593,&p_1241->g_593},{&p_1241->g_593,&p_1241->g_593}}, // p_1241->g_592
        (void*)0, // p_1241->g_655
        {&p_1241->g_655,&p_1241->g_655,&p_1241->g_655,&p_1241->g_655,&p_1241->g_655}, // p_1241->g_654
        1L, // p_1241->g_656
        (void*)0, // p_1241->g_681
        &p_1241->g_592[2][1], // p_1241->g_700
        &p_1241->g_700, // p_1241->g_699
        {0x60CAL}, // p_1241->g_747
        &p_1241->g_98, // p_1241->g_816
        0x46C8L, // p_1241->g_818
        5UL, // p_1241->g_821
        &p_1241->g_821, // p_1241->g_820
        (-1L), // p_1241->g_845
        (-3L), // p_1241->g_856
        0x52FBC3C5C9BD6EFAL, // p_1241->g_881
        (-9L), // p_1241->g_1006
        &p_1241->g_147, // p_1241->g_1039
        {{{4L},{4L}},{{4L},{4L}},{{4L},{4L}},{{4L},{4L}},{{4L},{4L}},{{4L},{4L}},{{4L},{4L}}}, // p_1241->g_1062
        &p_1241->g_1062[1][0][0], // p_1241->g_1061
        &p_1241->g_1061, // p_1241->g_1060
        0x3DCF1D02L, // p_1241->g_1070
        {&p_1241->g_98,&p_1241->g_98,&p_1241->g_98,&p_1241->g_98,&p_1241->g_98,&p_1241->g_98}, // p_1241->g_1072
        (void*)0, // p_1241->g_1105
        &p_1241->g_86[3], // p_1241->g_1146
        0xB707773A16212E84L, // p_1241->g_1159
        0x3A4DE114L, // p_1241->g_1168
        &p_1241->g_1168, // p_1241->g_1167
        &p_1241->g_1167, // p_1241->g_1166
    };
    c_1242 = c_1243;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1241);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1241->g_2, "p_1241->g_2", print_hash_value);
    transparent_crc(p_1241->g_3, "p_1241->g_3", print_hash_value);
    transparent_crc(p_1241->g_4, "p_1241->g_4", print_hash_value);
    transparent_crc(p_1241->g_9, "p_1241->g_9", print_hash_value);
    transparent_crc(p_1241->g_16, "p_1241->g_16", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1241->g_57[i][j][k], "p_1241->g_57[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1241->g_64, "p_1241->g_64", print_hash_value);
    transparent_crc(p_1241->g_83, "p_1241->g_83", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1241->g_86[i], "p_1241->g_86[i]", print_hash_value);

    }
    transparent_crc(p_1241->g_92, "p_1241->g_92", print_hash_value);
    transparent_crc(p_1241->g_94, "p_1241->g_94", print_hash_value);
    transparent_crc(p_1241->g_98, "p_1241->g_98", print_hash_value);
    transparent_crc(p_1241->g_101, "p_1241->g_101", print_hash_value);
    transparent_crc(p_1241->g_136, "p_1241->g_136", print_hash_value);
    transparent_crc(p_1241->g_166, "p_1241->g_166", print_hash_value);
    transparent_crc(p_1241->g_190, "p_1241->g_190", print_hash_value);
    transparent_crc(p_1241->g_196, "p_1241->g_196", print_hash_value);
    transparent_crc(p_1241->g_198, "p_1241->g_198", print_hash_value);
    transparent_crc(p_1241->g_335, "p_1241->g_335", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1241->g_340[i][j][k], "p_1241->g_340[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1241->g_353, "p_1241->g_353", print_hash_value);
    transparent_crc(p_1241->g_361, "p_1241->g_361", print_hash_value);
    transparent_crc(p_1241->g_533, "p_1241->g_533", print_hash_value);
    transparent_crc(p_1241->g_535, "p_1241->g_535", print_hash_value);
    transparent_crc(p_1241->g_580, "p_1241->g_580", print_hash_value);
    transparent_crc(p_1241->g_594, "p_1241->g_594", print_hash_value);
    transparent_crc(p_1241->g_656, "p_1241->g_656", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1241->g_747[i], "p_1241->g_747[i]", print_hash_value);

    }
    transparent_crc(p_1241->g_818, "p_1241->g_818", print_hash_value);
    transparent_crc(p_1241->g_821, "p_1241->g_821", print_hash_value);
    transparent_crc(p_1241->g_845, "p_1241->g_845", print_hash_value);
    transparent_crc(p_1241->g_856, "p_1241->g_856", print_hash_value);
    transparent_crc(p_1241->g_881, "p_1241->g_881", print_hash_value);
    transparent_crc(p_1241->g_1006, "p_1241->g_1006", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1241->g_1062[i][j][k], "p_1241->g_1062[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1241->g_1070, "p_1241->g_1070", print_hash_value);
    transparent_crc(p_1241->g_1159, "p_1241->g_1159", print_hash_value);
    transparent_crc(p_1241->g_1168, "p_1241->g_1168", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
