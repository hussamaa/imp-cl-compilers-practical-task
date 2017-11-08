// -g 52,26,4 -l 4,26,1
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


// Seed: 976609842

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint8_t  f0;
   volatile int8_t  f1;
   volatile int16_t  f2;
   uint32_t  f3;
   int32_t  f4;
   uint32_t  f5;
   int32_t  f6;
   uint64_t  f7;
   int64_t  f8;
};

union U1 {
   uint32_t  f0;
   int32_t  f1;
};

struct S2 {
    uint16_t g_20;
    int8_t g_53;
    int32_t * volatile g_55;
    int32_t g_57;
    int32_t * volatile g_56[10][4];
    struct S0 g_81;
    struct S0 * volatile g_82;
    struct S0 g_89;
    int64_t g_96[1][10][2];
    uint8_t *g_103;
    uint8_t **g_102;
    uint8_t **g_106[6][1][9];
    uint8_t *** volatile g_105;
    struct S0 g_109;
    int32_t *g_140[7][2];
    int32_t ** volatile g_139;
    int16_t g_175;
    union U1 g_178;
    uint32_t g_181;
    struct S0 g_184;
    int16_t *g_204;
    int32_t ** volatile g_232;
    int16_t **g_239;
    struct S0 g_258[1][5][4];
    struct S0 g_261;
    uint16_t g_268;
    struct S0 g_285;
    uint8_t g_305[2];
    uint8_t g_306;
    int32_t g_342;
    uint64_t g_357;
    volatile struct S0 g_368[1][10];
    volatile union U1 **g_388;
    uint8_t ****g_433;
    uint8_t *****g_432;
    int32_t * volatile g_467;
    int8_t *g_510;
    int8_t **g_509;
    uint32_t g_511;
    int8_t *** volatile g_537;
    int64_t g_559;
    int32_t *g_607[9];
    int32_t **g_606;
    int32_t *** volatile g_605;
    struct S0 g_650;
    int32_t * volatile g_655;
    int32_t ** volatile g_675;
    volatile uint64_t g_689;
    uint8_t ******g_718;
    uint32_t *** volatile g_814;
    volatile struct S0 g_823;
    int32_t * volatile g_827;
    int32_t * volatile g_843;
    volatile struct S0 g_873[3][1];
    volatile struct S0 g_890;
    int16_t g_907[6][5][8];
    uint64_t g_923;
    uint64_t g_926;
    int32_t g_927;
    uint64_t g_993;
    volatile uint32_t *g_1004;
    volatile uint32_t * volatile * volatile g_1003;
    int32_t ** volatile g_1011[6];
    int32_t ** volatile g_1050;
    int32_t ** volatile g_1110;
    volatile int64_t g_1141;
    volatile int64_t *g_1140;
    volatile int64_t **g_1139;
    int32_t ** volatile g_1151;
    int32_t ** volatile g_1152[7][7];
    int32_t ** volatile g_1153[2];
    struct S0 g_1162;
    struct S0 g_1165;
    struct S0 *g_1164;
    int32_t ** volatile g_1180[3];
    int64_t g_1216[4][3][9];
    uint32_t *g_1226;
    uint32_t **g_1225;
    uint32_t ***g_1224;
    int32_t * volatile g_1229;
    struct S0 g_1248;
    int32_t ** volatile g_1275[1][1];
    uint32_t g_1314;
    volatile int64_t g_1316;
    int32_t ** volatile g_1317;
    int16_t g_1328;
    volatile int64_t g_1329;
    int64_t g_1376;
    int64_t *g_1414;
    int64_t **g_1413;
    int64_t ***g_1412[4][4][7];
    int32_t ** volatile g_1433;
};


/* --- FORWARD DECLARATIONS --- */
int8_t  func_1(struct S2 * p_1436);
int32_t  func_2(uint32_t  p_3, int32_t  p_4, int32_t  p_5, int16_t  p_6, struct S2 * p_1436);
int32_t  func_10(uint32_t  p_11, int16_t  p_12, uint64_t  p_13, struct S2 * p_1436);
uint32_t  func_14(uint16_t  p_15, uint32_t  p_16, uint64_t  p_17, int32_t  p_18, int64_t  p_19, struct S2 * p_1436);
uint32_t  func_29(int64_t  p_30, uint64_t  p_31, uint32_t  p_32, uint8_t  p_33, struct S2 * p_1436);
int64_t  func_34(int8_t  p_35, int32_t  p_36, struct S2 * p_1436);
uint64_t  func_37(int32_t  p_38, union U1  p_39, int8_t  p_40, uint32_t  p_41, struct S2 * p_1436);
union U1  func_42(int32_t  p_43, struct S2 * p_1436);
uint16_t  func_70(union U1  p_71, int8_t * p_72, int32_t * p_73, int8_t * p_74, struct S2 * p_1436);
int8_t * func_75(int8_t * p_76, int32_t * p_77, int16_t  p_78, int8_t * p_79, struct S2 * p_1436);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1436->g_1162.f4
 * writes:
 */
int8_t  func_1(struct S2 * p_1436)
{ /* block id: 4 */
    uint64_t l_7[5] = {9UL,9UL,9UL,9UL,9UL};
    int8_t *l_52 = &p_1436->g_53;
    uint32_t l_441 = 0x36105BC8L;
    int32_t l_808 = 0x10F8B717L;
    int32_t l_1179 = (-1L);
    int32_t *l_1181 = &l_1179;
    uint8_t l_1218 = 0x89L;
    int32_t l_1221[6][6][3] = {{{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L}},{{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L}},{{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L}},{{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L}},{{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L}},{{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L},{7L,1L,0x7CE305F7L}}};
    int32_t *l_1331 = &p_1436->g_1162.f4;
    union U1 *l_1351 = &p_1436->g_178;
    int64_t ***l_1421[5];
    int64_t ****l_1420 = &l_1421[3];
    int32_t l_1430 = 0x2D1E7DA2L;
    int32_t *l_1434 = &l_1221[4][0][1];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1421[i] = &p_1436->g_1413;
    return (*l_1331);
}


/* ------------------------------------------ */
/* 
 * reads : p_1436->g_232 p_1436->g_140 p_1436->g_258.f1 p_1436->g_261.f5 p_1436->g_1164 p_1436->g_89.f6 p_1436->g_285.f8 p_1436->g_89.f4 p_1436->g_57 p_1436->g_109.f4 p_1436->g_655 p_1436->g_285.f4
 * writes: p_1436->g_140 p_1436->g_1164 p_1436->g_1162.f8 p_1436->g_89.f4 p_1436->g_57 p_1436->g_109.f4
 */
int32_t  func_2(uint32_t  p_3, int32_t  p_4, int32_t  p_5, int16_t  p_6, struct S2 * p_1436)
{ /* block id: 526 */
    int32_t **l_1154 = &p_1436->g_140[2][1];
    struct S0 *l_1161 = &p_1436->g_1162;
    struct S0 **l_1163 = &l_1161;
    struct S0 **l_1166 = &p_1436->g_1164;
    int64_t *l_1169 = (void*)0;
    int64_t *l_1170 = &p_1436->g_1162.f8;
    int16_t l_1173 = 1L;
    int32_t *l_1174 = &p_1436->g_258[0][2][2].f4;
    int32_t *l_1175[3];
    uint32_t l_1176 = 0x40BC819CL;
    int i;
    for (i = 0; i < 3; i++)
        l_1175[i] = &p_1436->g_1165.f4;
    (*l_1154) = (*p_1436->g_232);
    p_4 &= 0x739DA118L;
    (**l_1154) = ((safe_add_func_int32_t_s_s(((((p_1436->g_258[0][2][2].f1 == (0x0DL != ((p_1436->g_261.f5 ^ ((safe_mul_func_int16_t_s_s(((safe_div_func_uint64_t_u_u(((((*l_1163) = l_1161) != ((*l_1166) = p_1436->g_1164)) >= (safe_lshift_func_int16_t_s_s((p_1436->g_89.f6 & ((*l_1170) = 0x3CB7EBE942FE7C25L)), p_3))), (((((safe_mod_func_int16_t_s_s(0x314DL, 0x50D0L)) , 2UL) , 65535UL) || 1L) , 7UL))) , l_1173), p_1436->g_285.f8)) < (**l_1154))) , 0x46L))) , (void*)0) == &p_1436->g_559) | (**l_1154)), (**l_1154))) ^ 2UL);
    l_1176++;
    return (*p_1436->g_655);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_10(uint32_t  p_11, int16_t  p_12, uint64_t  p_13, struct S2 * p_1436)
{ /* block id: 524 */
    return p_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_1436->g_89.f7
 * writes: p_1436->g_239 p_1436->g_89.f7
 */
uint32_t  func_14(uint16_t  p_15, uint32_t  p_16, uint64_t  p_17, int32_t  p_18, int64_t  p_19, struct S2 * p_1436)
{ /* block id: 342 */
    int16_t **l_809 = (void*)0;
    int16_t ***l_810 = (void*)0;
    int16_t ***l_811 = &p_1436->g_239;
    uint32_t *l_813 = &p_1436->g_261.f5;
    uint32_t **l_812 = &l_813;
    uint32_t ***l_815 = (void*)0;
    uint32_t ***l_816 = &l_812;
    int32_t l_830 = (-1L);
    int32_t l_885[5];
    uint32_t l_951 = 0xA8E903BAL;
    int32_t l_963 = (-3L);
    uint8_t *l_970 = (void*)0;
    uint32_t l_1009 = 1UL;
    union U1 *l_1024[7][9] = {{(void*)0,&p_1436->g_178,&p_1436->g_178,(void*)0,&p_1436->g_178,(void*)0,&p_1436->g_178,&p_1436->g_178,(void*)0},{(void*)0,&p_1436->g_178,&p_1436->g_178,(void*)0,&p_1436->g_178,(void*)0,&p_1436->g_178,&p_1436->g_178,(void*)0},{(void*)0,&p_1436->g_178,&p_1436->g_178,(void*)0,&p_1436->g_178,(void*)0,&p_1436->g_178,&p_1436->g_178,(void*)0},{(void*)0,&p_1436->g_178,&p_1436->g_178,(void*)0,&p_1436->g_178,(void*)0,&p_1436->g_178,&p_1436->g_178,(void*)0},{(void*)0,&p_1436->g_178,&p_1436->g_178,(void*)0,&p_1436->g_178,(void*)0,&p_1436->g_178,&p_1436->g_178,(void*)0},{(void*)0,&p_1436->g_178,&p_1436->g_178,(void*)0,&p_1436->g_178,(void*)0,&p_1436->g_178,&p_1436->g_178,(void*)0},{(void*)0,&p_1436->g_178,&p_1436->g_178,(void*)0,&p_1436->g_178,(void*)0,&p_1436->g_178,&p_1436->g_178,(void*)0}};
    union U1 **l_1023 = &l_1024[4][7];
    uint16_t l_1069 = 0xE243L;
    uint16_t l_1148 = 0xE36BL;
    int i, j;
    for (i = 0; i < 5; i++)
        l_885[i] = 1L;
    (*l_811) = l_809;
    (*l_816) = l_812;
    for (p_1436->g_89.f7 = 26; (p_1436->g_89.f7 == 31); p_1436->g_89.f7 = safe_add_func_int64_t_s_s(p_1436->g_89.f7, 3))
    { /* block id: 347 */
        int16_t ***l_824 = &l_809;
        int32_t l_835 = 1L;
        uint16_t l_881 = 9UL;
        int32_t l_882 = 0x08BD19C6L;
        int32_t l_883 = 0x04FC0E8AL;
        int32_t l_884[6][9] = {{0x51323FF1L,0x51323FF1L,0x0C073A59L,0x50AE9EB5L,2L,0x50AE9EB5L,0x0C073A59L,0x51323FF1L,0x51323FF1L},{0x51323FF1L,0x51323FF1L,0x0C073A59L,0x50AE9EB5L,2L,0x50AE9EB5L,0x0C073A59L,0x51323FF1L,0x51323FF1L},{0x51323FF1L,0x51323FF1L,0x0C073A59L,0x50AE9EB5L,2L,0x50AE9EB5L,0x0C073A59L,0x51323FF1L,0x51323FF1L},{0x51323FF1L,0x51323FF1L,0x0C073A59L,0x50AE9EB5L,2L,0x50AE9EB5L,0x0C073A59L,0x51323FF1L,0x51323FF1L},{0x51323FF1L,0x51323FF1L,0x0C073A59L,0x50AE9EB5L,2L,0x50AE9EB5L,0x0C073A59L,0x51323FF1L,0x51323FF1L},{0x51323FF1L,0x51323FF1L,0x0C073A59L,0x50AE9EB5L,2L,0x50AE9EB5L,0x0C073A59L,0x51323FF1L,0x51323FF1L}};
        uint32_t l_897 = 0x401AA331L;
        int32_t *l_930 = &l_835;
        uint32_t l_952[4][6][4] = {{{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL}},{{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL}},{{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL}},{{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL},{0x66A04277L,0xD4C02625L,0x73401A9BL,0x717C3E6CL}}};
        uint32_t l_1010 = 0xCC13A718L;
        int64_t **l_1034 = (void*)0;
        int16_t l_1045 = 0x2472L;
        struct S0 *l_1101 = (void*)0;
        uint16_t l_1108 = 0UL;
        int i, j, k;
        (1 + 1);
    }
    return l_1009;
}


/* ------------------------------------------ */
/* 
 * reads : p_1436->g_258.f4 p_1436->g_105 p_1436->g_106 p_1436->g_285.f4 p_1436->g_89.f7 p_1436->g_81.f8 p_1436->g_139 p_1436->g_140 p_1436->g_261.f7 p_1436->g_89.f4 p_1436->g_689 p_1436->g_511 p_1436->g_258 p_1436->g_20 p_1436->g_57 p_1436->g_109.f4 p_1436->g_285.f2 p_1436->g_261.f1 p_1436->g_285.f0 p_1436->g_268 p_1436->g_239 p_1436->g_109.f3 p_1436->g_232 p_1436->g_655 p_1436->g_89.f3 p_1436->g_184.f4 p_1436->g_559 p_1436->g_81.f4 p_1436->g_184.f6 p_1436->g_368.f0 p_1436->g_650.f4 p_1436->g_184.f3 p_1436->g_103 p_1436->g_81.f2
 * writes: p_1436->g_258.f4 p_1436->g_285.f4 p_1436->g_261.f7 p_1436->g_89.f4 p_1436->g_511 p_1436->g_109.f3 p_1436->g_268 p_1436->g_718 p_1436->g_285.f3 p_1436->g_204 p_1436->g_140 p_1436->g_559 p_1436->g_184.f4 p_1436->g_184.f3 p_1436->g_239 p_1436->g_81.f0 p_1436->g_184.f0
 */
uint32_t  func_29(int64_t  p_30, uint64_t  p_31, uint32_t  p_32, uint8_t  p_33, struct S2 * p_1436)
{ /* block id: 258 */
    int32_t *l_670 = &p_1436->g_81.f6;
    int32_t *l_671 = &p_1436->g_258[0][2][2].f4;
    uint8_t **l_672 = &p_1436->g_103;
    uint8_t ******l_695[3][1][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t l_745 = 1L;
    int32_t l_747 = 0x586B435FL;
    int32_t l_748 = 0x51E533F9L;
    int32_t l_749[1];
    uint32_t l_785 = 0xB3446B2BL;
    int32_t l_788 = 1L;
    union U1 l_792 = {4294967292UL};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_749[i] = 0x586E2875L;
    (*l_671) &= ((void*)0 == l_670);
    (*l_671) ^= (l_672 == (*p_1436->g_105));
    for (p_1436->g_285.f4 = 0; (p_1436->g_285.f4 > 24); p_1436->g_285.f4 = safe_add_func_uint64_t_u_u(p_1436->g_285.f4, 4))
    { /* block id: 263 */
        l_671 = l_671;
    }
    if ((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((((*l_671) , 0L) ^ p_1436->g_89.f7), p_1436->g_81.f8)), 0xB32DB1B8L)))
    { /* block id: 266 */
        int32_t *l_680[6] = {&p_1436->g_109.f4,&p_1436->g_285.f4,&p_1436->g_109.f4,&p_1436->g_109.f4,&p_1436->g_285.f4,&p_1436->g_109.f4};
        int32_t **l_681[2][10] = {{&l_671,&l_671,&l_671,&l_671,&l_671,&l_671,&l_671,&l_671,&l_671,&l_671},{&l_671,&l_671,&l_671,&l_671,&l_671,&l_671,&l_671,&l_671,&l_671,&l_671}};
        int32_t *l_682 = &p_1436->g_109.f4;
        int8_t l_715 = 5L;
        int16_t *l_731 = &p_1436->g_175;
        int i, j;
        l_680[2] = (*p_1436->g_139);
lbl_685:
        l_682 = l_680[2];
        for (p_1436->g_261.f7 = 0; (p_1436->g_261.f7 <= 14); p_1436->g_261.f7++)
        { /* block id: 271 */
            uint32_t l_688 = 0x477A3A5CL;
            uint32_t l_721 = 0x235BA34DL;
            int16_t *l_730 = &p_1436->g_175;
            for (p_1436->g_285.f4 = 0; (p_1436->g_285.f4 <= 0); p_1436->g_285.f4 += 1)
            { /* block id: 274 */
                int64_t l_698[2];
                int32_t l_701 = 0x020F849AL;
                uint32_t *l_702 = &p_1436->g_109.f3;
                uint16_t *l_714 = &p_1436->g_268;
                int32_t *l_734[2][3][9] = {{{(void*)0,(void*)0,&p_1436->g_285.f4,&l_701,(void*)0,&l_701,&p_1436->g_285.f4,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1436->g_285.f4,&l_701,(void*)0,&l_701,&p_1436->g_285.f4,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1436->g_285.f4,&l_701,(void*)0,&l_701,&p_1436->g_285.f4,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1436->g_285.f4,&l_701,(void*)0,&l_701,&p_1436->g_285.f4,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1436->g_285.f4,&l_701,(void*)0,&l_701,&p_1436->g_285.f4,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1436->g_285.f4,&l_701,(void*)0,&l_701,&p_1436->g_285.f4,(void*)0,(void*)0}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_698[i] = 9L;
                for (p_1436->g_89.f4 = 1; (p_1436->g_89.f4 >= 0); p_1436->g_89.f4 -= 1)
                { /* block id: 277 */
                    int32_t l_694 = 0x0C8C7ECDL;
                    if (p_1436->g_89.f7)
                        goto lbl_685;
                    (*l_671) ^= (safe_mul_func_int16_t_s_s(l_688, p_1436->g_689));
                    for (p_1436->g_511 = 0; (p_1436->g_511 <= 0); p_1436->g_511 += 1)
                    { /* block id: 282 */
                        int i, j, k;
                        (*l_671) = ((p_1436->g_258[p_1436->g_511][(p_1436->g_89.f4 + 1)][(p_1436->g_511 + 1)] , (((safe_div_func_int64_t_s_s((((0x61550BEAA04542CBL > (safe_sub_func_uint32_t_u_u(0x21C05D77L, ((p_1436->g_20 && l_688) , ((l_694 , ((l_695[0][0][6] == &p_1436->g_432) ^ (safe_mod_func_uint64_t_u_u((*l_682), (*l_671))))) ^ p_1436->g_285.f2))))) == l_698[1]) || p_31), p_33)) == (*l_682)) ^ l_694)) | p_31);
                        (*l_671) = l_688;
                    }
                }
                if ((safe_lshift_func_uint8_t_u_u((p_1436->g_261.f1 && ((p_32 || ((4294967295UL || l_688) & (((4294967295UL == (((l_701 = 0L) ^ ((*l_702) = 4294967294UL)) & ((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint64_t_u((safe_sub_func_uint16_t_u_u(p_1436->g_285.f0, ((*l_714) &= ((safe_mul_func_uint16_t_u_u(((void*)0 != &p_1436->g_509), p_31)) >= l_698[0])))))), (*l_671))), (-5L))), p_30)) && l_715))) , (void*)0) != (void*)0))) & 0xCD19D0E386193328L)), l_688)))
                { /* block id: 290 */
                    int8_t *l_719[1];
                    int32_t l_720 = (-2L);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_719[i] = &l_715;
                    if (((safe_div_func_uint8_t_u_u(((l_721 = (l_720 &= ((p_1436->g_718 = &p_1436->g_432) == (void*)0))) & p_30), (safe_rshift_func_uint8_t_u_u(l_688, (p_30 , ((safe_mod_func_int32_t_s_s(((((safe_div_func_uint32_t_u_u((p_1436->g_285.f3 = 4294967291UL), (((p_1436->g_109.f4 , (safe_rshift_func_uint8_t_u_u(((!(p_33 || (((*p_1436->g_239) = l_730) == l_731))) < p_31), l_698[1]))) | 0x862BC9A74E384A70L) & l_688))) || p_31) , l_688) > (-1L)), 0x5C11D04AL)) ^ (*l_671))))))) , (-1L)))
                    { /* block id: 296 */
                        union U1 *l_733 = &p_1436->g_178;
                        union U1 **l_732 = &l_733;
                        (*l_732) = (void*)0;
                    }
                    else
                    { /* block id: 298 */
                        l_734[1][2][8] = (*p_1436->g_139);
                        l_734[0][0][1] = (*p_1436->g_139);
                    }
                    if (p_32)
                        continue;
                }
                else
                { /* block id: 303 */
                    for (p_1436->g_109.f3 = 0; (p_1436->g_109.f3 <= 1); p_1436->g_109.f3 += 1)
                    { /* block id: 306 */
                        (*l_671) = (safe_lshift_func_uint8_t_u_s((*l_671), 1));
                        return p_31;
                    }
                }
            }
            (*p_1436->g_232) = (*p_1436->g_139);
            if ((*p_1436->g_655))
                break;
        }
    }
    else
    { /* block id: 315 */
        int32_t *l_737 = (void*)0;
        int32_t *l_738 = &p_1436->g_258[0][2][2].f4;
        int32_t *l_739 = &p_1436->g_184.f4;
        int32_t *l_740 = &p_1436->g_109.f4;
        int32_t *l_741 = &p_1436->g_184.f4;
        int32_t *l_742 = &p_1436->g_258[0][2][2].f4;
        int32_t *l_743 = &p_1436->g_89.f4;
        int32_t *l_744[7][3][6] = {{{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4},{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4},{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4}},{{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4},{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4},{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4}},{{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4},{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4},{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4}},{{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4},{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4},{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4}},{{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4},{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4},{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4}},{{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4},{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4},{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4}},{{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4},{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4},{&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4,&p_1436->g_285.f4,&p_1436->g_650.f4,&p_1436->g_285.f4}}};
        int64_t l_746[6][8][3] = {{{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L}},{{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L}},{{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L}},{{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L}},{{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L}},{{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L},{0x122495051265ACAAL,0L,0x1B4EF5EA3C158275L}}};
        uint32_t l_750 = 0x69488562L;
        int i, j, k;
        l_750--;
        (*l_743) |= ((safe_sub_func_uint64_t_u_u(0x07D40E72777A1F17L, (safe_mul_func_uint16_t_u_u((&l_749[0] == (*p_1436->g_139)), (((safe_div_func_uint8_t_u_u((((0x22BDD880L < 0x09CDB8C8L) || (safe_unary_minus_func_uint8_t_u((p_1436->g_285.f0 , (safe_mod_func_int32_t_s_s((+((p_30 != p_31) , ((safe_div_func_uint32_t_u_u(((0x51DDDCD1L < (-9L)) == 0x4BL), p_1436->g_89.f3)) , 0x5C3FB331L))), p_32)))))) <= p_32), (*l_741))) , (void*)0) != (void*)0))))) || 0UL);
        for (p_1436->g_559 = 0; (p_1436->g_559 != (-20)); --p_1436->g_559)
        { /* block id: 320 */
            uint16_t l_768 = 0UL;
            uint32_t *l_789 = &p_1436->g_109.f3;
            int16_t **l_800 = &p_1436->g_204;
            int32_t **l_807 = &l_671;
            (*l_739) &= ((safe_sub_func_int64_t_s_s((l_768 & 0x63E61E17L), (safe_div_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u((-9L), 1)) != (0x4D46L > (((*l_671) , (safe_add_func_int16_t_s_s((((safe_add_func_int64_t_s_s((safe_div_func_int64_t_s_s((safe_mod_func_int16_t_s_s(((((*l_789) ^= ((0x35AEL < 0x0CB8L) >= (safe_add_func_uint64_t_u_u(((l_785 <= ((((((safe_mul_func_uint16_t_u_u((0x1FE4436E0E97CE2BL & (*l_671)), 9UL)) , p_31) > (-9L)) < p_1436->g_258[0][2][2].f4) , p_1436->g_81.f4) != 0UL)) < l_788), p_30)))) ^ p_31) || (*l_740)), l_768)), (*l_671))), p_1436->g_184.f6)) | p_33) & p_32), p_30))) || p_1436->g_368[0][3].f0))), p_1436->g_650.f4)))) ^ (*l_671));
            for (p_1436->g_184.f3 = 0; (p_1436->g_184.f3 >= 50); p_1436->g_184.f3 = safe_add_func_int16_t_s_s(p_1436->g_184.f3, 1))
            { /* block id: 325 */
                int16_t ***l_797 = &p_1436->g_239;
                int16_t **l_799 = &p_1436->g_204;
                int16_t ***l_798[1][6];
                int32_t l_801 = 0x6CC6AFE6L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 6; j++)
                        l_798[i][j] = &l_799;
                }
                (*l_743) |= (l_792 , (safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(((*p_1436->g_103) = (((l_800 = (l_792 , ((*l_797) = &p_1436->g_204))) != &p_1436->g_204) < ((*l_671) >= p_33))), (p_30 == ((p_1436->g_81.f2 , ((255UL ^ l_801) || l_768)) == p_31)))), (*l_671))));
                for (p_1436->g_184.f0 = 0; (p_1436->g_184.f0 >= 17); p_1436->g_184.f0 = safe_add_func_int16_t_s_s(p_1436->g_184.f0, 4))
                { /* block id: 332 */
                    uint8_t l_804 = 8UL;
                    l_804++;
                }
                l_738 = l_744[0][0][2];
            }
            (*l_807) = l_789;
            return (*l_742);
        }
    }
    return p_32;
}


/* ------------------------------------------ */
/* 
 * reads : p_1436->g_109.f4 p_1436->g_258.f5 p_1436->g_285.f8 p_1436->g_89.f4 p_1436->g_261.f2 p_1436->g_53 p_1436->g_89.f5 p_1436->g_258.f6 p_1436->g_285.f2 p_1436->g_109.f6 p_1436->g_258.f4 p_1436->g_261.f3 p_1436->g_140 p_1436->g_285.f0 p_1436->g_109.f3 p_1436->g_96 p_1436->g_368.f7 p_1436->g_102 p_1436->g_103 p_1436->g_81.f0 p_1436->g_81.f7 p_1436->g_56 p_1436->g_511 p_1436->g_81.f3 p_1436->g_306 p_1436->g_139 p_1436->g_232 p_1436->g_57 p_1436->g_89.f7 p_1436->g_89.f3 p_1436->g_368 p_1436->g_82 p_1436->g_305 p_1436->g_342 p_1436->g_175 p_1436->g_109.f1 p_1436->g_81.f5 p_1436->g_239 p_1436->g_605 p_1436->g_184.f7 p_1436->g_357 p_1436->g_81.f1 p_1436->g_650 p_1436->g_655
 * writes: p_1436->g_285.f0 p_1436->g_261.f6 p_1436->g_258.f4 p_1436->g_89.f4 p_1436->g_109.f3 p_1436->g_53 p_1436->g_261.f8 p_1436->g_261.f3 p_1436->g_140 p_1436->g_509 p_1436->g_511 p_1436->g_268 p_1436->g_57 p_1436->g_181 p_1436->g_81 p_1436->g_285.f3 p_1436->g_89.f3 p_1436->g_89.f0 p_1436->g_175 p_1436->g_559 p_1436->g_285.f6 p_1436->g_178.f1 p_1436->g_204 p_1436->g_606 p_1436->g_184.f7 p_1436->g_357 p_1436->g_285.f4 p_1436->g_650.f4
 */
int64_t  func_34(int8_t  p_35, int32_t  p_36, struct S2 * p_1436)
{ /* block id: 141 */
    uint64_t l_442 = 0x00C2D0E3AA609C20L;
    int32_t l_557 = 3L;
    int16_t *l_603 = &p_1436->g_175;
    int32_t l_629 = 7L;
    int32_t l_631 = 0x1F317445L;
    uint32_t l_638 = 0x8CF2D900L;
    uint32_t l_654[10][10] = {{0UL,4294967295UL,0xDD5A4E1DL,0x160E8BC3L,0x11CF3663L,0x160E8BC3L,0xDD5A4E1DL,4294967295UL,0UL,0xDD5A4E1DL},{0UL,4294967295UL,0xDD5A4E1DL,0x160E8BC3L,0x11CF3663L,0x160E8BC3L,0xDD5A4E1DL,4294967295UL,0UL,0xDD5A4E1DL},{0UL,4294967295UL,0xDD5A4E1DL,0x160E8BC3L,0x11CF3663L,0x160E8BC3L,0xDD5A4E1DL,4294967295UL,0UL,0xDD5A4E1DL},{0UL,4294967295UL,0xDD5A4E1DL,0x160E8BC3L,0x11CF3663L,0x160E8BC3L,0xDD5A4E1DL,4294967295UL,0UL,0xDD5A4E1DL},{0UL,4294967295UL,0xDD5A4E1DL,0x160E8BC3L,0x11CF3663L,0x160E8BC3L,0xDD5A4E1DL,4294967295UL,0UL,0xDD5A4E1DL},{0UL,4294967295UL,0xDD5A4E1DL,0x160E8BC3L,0x11CF3663L,0x160E8BC3L,0xDD5A4E1DL,4294967295UL,0UL,0xDD5A4E1DL},{0UL,4294967295UL,0xDD5A4E1DL,0x160E8BC3L,0x11CF3663L,0x160E8BC3L,0xDD5A4E1DL,4294967295UL,0UL,0xDD5A4E1DL},{0UL,4294967295UL,0xDD5A4E1DL,0x160E8BC3L,0x11CF3663L,0x160E8BC3L,0xDD5A4E1DL,4294967295UL,0UL,0xDD5A4E1DL},{0UL,4294967295UL,0xDD5A4E1DL,0x160E8BC3L,0x11CF3663L,0x160E8BC3L,0xDD5A4E1DL,4294967295UL,0UL,0xDD5A4E1DL},{0UL,4294967295UL,0xDD5A4E1DL,0x160E8BC3L,0x11CF3663L,0x160E8BC3L,0xDD5A4E1DL,4294967295UL,0UL,0xDD5A4E1DL}};
    int8_t *l_666 = &p_1436->g_53;
    int32_t *l_669 = &p_1436->g_650.f4;
    int i, j;
lbl_651:
    for (p_1436->g_285.f0 = 0; (p_1436->g_285.f0 <= 0); p_1436->g_285.f0 += 1)
    { /* block id: 144 */
        uint8_t ***l_449 = &p_1436->g_106[5][0][6];
        int32_t *l_454 = &p_1436->g_261.f6;
        int32_t l_463 = 0L;
        int32_t l_464 = 0x1E788609L;
        int32_t *l_465 = &p_1436->g_258[0][2][2].f4;
        int32_t l_466 = 0x3CC4756FL;
        int32_t *l_468 = &p_1436->g_89.f4;
        int64_t *l_555 = &p_1436->g_96[0][1][1];
        (*l_468) &= (p_35 , (((l_442 && (safe_div_func_int32_t_s_s(((*l_465) = ((((0UL ^ (((((safe_lshift_func_int16_t_s_u(((void*)0 == l_449), 8)) , (((((0x6FCF6E17L && (((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(((l_464 &= (((*l_454) = l_442) , (safe_div_func_int64_t_s_s((safe_mul_func_int16_t_s_s(0x7E6CL, (safe_mul_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(p_35, 7)) , p_1436->g_109.f4), l_463)))), l_442)))) | p_36), 3)), p_35)) , p_1436->g_258[0][2][2].f5) , p_35)) , p_1436->g_285.f8) , 0L) | l_463) | 0L)) | 0x795EL) < 0x6AE5L) <= l_442)) , p_35) , l_464) , p_36)), p_36))) >= p_36) >= l_466));
        for (p_1436->g_109.f3 = 0; (p_1436->g_109.f3 <= 0); p_1436->g_109.f3 += 1)
        { /* block id: 151 */
            int8_t *l_473 = &p_1436->g_53;
            int64_t *l_482 = &p_1436->g_261.f8;
            int32_t l_497 = 0x1128AF7BL;
            int32_t l_513 = 0x403C7669L;
            if ((0x0D61L >= (safe_rshift_func_int16_t_s_u((p_1436->g_261.f2 , (safe_sub_func_int8_t_s_s(((*l_473) &= 0x43L), (((((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int16_t_s_u(((((*l_482) = p_36) >= p_1436->g_89.f5) != p_1436->g_258[0][2][2].f6), 7)) , (void*)0) != &p_1436->g_204), 7)), ((((p_1436->g_285.f2 >= 7UL) < p_35) & 0xEDL) || p_1436->g_109.f6))), 0x7260L)) || p_36) & l_442) , (*l_465)) & 0x25AF8775938D7134L)))), 4))))
            { /* block id: 154 */
                uint64_t l_488 = 18446744073709551610UL;
                int8_t **l_508 = &l_473;
                (*l_465) = (safe_lshift_func_int16_t_s_u(l_442, (safe_unary_minus_func_uint32_t_u((safe_add_func_uint8_t_u_u(l_488, 8L))))));
                for (p_1436->g_261.f3 = 0; (p_1436->g_261.f3 <= 1); p_1436->g_261.f3 += 1)
                { /* block id: 158 */
                    int i, j, k;
                    p_1436->g_140[(p_1436->g_285.f0 + 3)][p_1436->g_109.f3] = p_1436->g_140[(p_1436->g_261.f3 + 3)][p_1436->g_261.f3];
                    (*l_468) |= (safe_lshift_func_uint16_t_u_s(((safe_div_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(p_1436->g_96[p_1436->g_109.f3][(p_1436->g_261.f3 + 1)][p_1436->g_261.f3], p_1436->g_96[p_1436->g_285.f0][(p_1436->g_109.f3 + 9)][p_1436->g_261.f3])) ^ (p_35 > ((p_35 >= (((((-9L) && ((((void*)0 != &p_35) , (p_1436->g_368[0][3].f7 | 2L)) ^ p_36)) | (**p_1436->g_102)) | 4UL) >= l_497)) == 4294967286UL))), p_35)), p_36)) > 0x31608BE7CCB087E9L), 5));
                }
                (*l_468) &= ((-7L) & (((safe_sub_func_uint64_t_u_u(((1UL > (safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u(((9UL | (*l_465)) ^ p_1436->g_81.f7), 4)) , p_36) > (((p_1436->g_511 |= (safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((p_1436->g_56[7][0] != (void*)0), (((p_1436->g_509 = l_508) == &p_1436->g_510) , l_488))), p_35))) >= p_35) | p_1436->g_81.f3)), p_35))) < p_1436->g_306), p_1436->g_89.f5)) ^ 0x295B4CC5L) <= (*l_465)));
            }
            else
            { /* block id: 165 */
                int32_t **l_512 = &p_1436->g_140[5][0];
                (*l_468) ^= (*l_465);
                (*l_512) = (*p_1436->g_139);
                (*l_468) = (**p_1436->g_232);
            }
            return l_513;
        }
        for (p_1436->g_53 = 0; (p_1436->g_53 >= 0); p_1436->g_53 -= 1)
        { /* block id: 174 */
            uint64_t l_541 = 18446744073709551614UL;
            int32_t l_567[1][8] = {{0x22626DDBL,0x22626DDBL,0x22626DDBL,0x22626DDBL,0x22626DDBL,0x22626DDBL,0x22626DDBL,0x22626DDBL}};
            uint8_t ***l_584 = &p_1436->g_106[4][0][2];
            int32_t l_587 = 1L;
            uint16_t *l_600[5] = {&p_1436->g_20,&p_1436->g_20,&p_1436->g_20,&p_1436->g_20,&p_1436->g_20};
            int32_t **l_604 = &l_454;
            int i, j;
            for (p_1436->g_89.f4 = 0; (p_1436->g_89.f4 >= 0); p_1436->g_89.f4 -= 1)
            { /* block id: 177 */
                int16_t *l_519[9][10][2] = {{{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175}},{{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175}},{{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175}},{{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175}},{{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175}},{{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175}},{{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175}},{{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175}},{{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175},{&p_1436->g_175,&p_1436->g_175}}};
                int32_t l_520 = 0x251D5DA4L;
                int32_t l_525 = 0x06BEA933L;
                uint64_t l_534 = 0xC599C64521CD60EAL;
                int32_t *l_535 = &p_1436->g_57;
                int i, j, k;
                (*l_535) ^= (((*l_465) = (safe_mod_func_int64_t_s_s((safe_unary_minus_func_uint64_t_u((safe_add_func_int64_t_s_s((((l_520 ^= (p_35 > l_442)) <= p_1436->g_89.f7) || p_35), p_1436->g_96[0][4][0])))), (safe_add_func_int16_t_s_s((((((safe_rshift_func_int8_t_s_u(l_525, p_36)) < (safe_sub_func_int64_t_s_s(0x1728ED00CE9F888EL, (((safe_lshift_func_uint16_t_u_s((p_1436->g_268 = (safe_div_func_int64_t_s_s((safe_div_func_uint64_t_u_u((p_35 > p_1436->g_109.f3), 7UL)), p_35))), p_35)) , p_1436->g_89.f3) & 4294967295UL)))) < 0x27F2L) <= l_442) , 0x3EFEL), 0x031BL))))) && l_534);
                for (p_1436->g_181 = 0; (p_1436->g_181 <= 0); p_1436->g_181 += 1)
                { /* block id: 184 */
                    volatile struct S0 *l_536[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_536[i] = &p_1436->g_368[0][7];
                    (*p_1436->g_82) = p_1436->g_368[p_1436->g_53][p_1436->g_89.f4];
                    for (p_1436->g_285.f3 = 0; (p_1436->g_285.f3 <= 0); p_1436->g_285.f3 += 1)
                    { /* block id: 188 */
                        int8_t ***l_538 = &p_1436->g_509;
                        int32_t *l_539 = &l_463;
                        int32_t *l_540 = &p_1436->g_261.f4;
                        (*l_538) = &p_1436->g_510;
                        ++l_541;
                        return p_35;
                    }
                }
            }
            for (p_1436->g_89.f3 = 0; (p_1436->g_89.f3 <= 0); p_1436->g_89.f3 += 1)
            { /* block id: 197 */
                (*l_468) &= p_35;
            }
            for (p_1436->g_89.f0 = 0; (p_1436->g_89.f0 <= 0); p_1436->g_89.f0 += 1)
            { /* block id: 202 */
                uint64_t *l_554 = &l_442;
                int64_t *l_556 = &p_1436->g_96[0][6][1];
                int16_t *l_558 = &p_1436->g_175;
                int64_t l_566 = (-10L);
                int i, j, k;
                (*l_465) &= ((safe_div_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((((+((safe_div_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(253UL, (p_1436->g_305[p_1436->g_285.f0] ^ (p_1436->g_559 = ((*l_558) |= (safe_mul_func_int16_t_s_s(((((*l_554) ^= (*l_468)) & p_1436->g_261.f2) >= ((l_555 != (l_556 = (void*)0)) > l_557)), p_1436->g_342))))))), (safe_mul_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((l_567[0][1] = ((~(((safe_mod_func_int64_t_s_s(0x5F2D6A4FCF730690L, p_36)) > p_35) && l_566)) == p_1436->g_305[0])), 0x67B5L)) , l_541), p_35)))) && 247UL)) != 0x37E1L) | p_36), p_35)), l_541)) || 0x69847B15956AC036L);
            }
            for (p_1436->g_285.f6 = 0; (p_1436->g_285.f6 <= 0); p_1436->g_285.f6 += 1)
            { /* block id: 212 */
                uint16_t l_572 = 65535UL;
                int32_t l_608 = 0x6B6AFDD1L;
                int32_t l_611 = 0x639D8F10L;
                int32_t l_612 = (-5L);
                if ((((safe_rshift_func_int16_t_s_s(((~(l_557 & (safe_mul_func_int8_t_s_s((0x62805C59L != p_36), (l_572 = 0x0DL))))) < (safe_rshift_func_uint8_t_u_u(255UL, 2))), 2)) > ((*l_465) >= l_557)) ^ (+0x5BL)))
                { /* block id: 214 */
                    int32_t *l_575 = &p_1436->g_258[0][2][2].f6;
                    uint16_t *l_583 = &l_572;
                    l_587 |= ((((void*)0 != l_575) < (p_1436->g_109.f1 == (safe_rshift_func_uint16_t_u_u(((*l_583) = (safe_unary_minus_func_int32_t_s((safe_lshift_func_uint16_t_u_u(0UL, 14))))), ((l_584 == &p_1436->g_102) && (p_35 || (safe_mul_func_uint16_t_u_u(((~l_567[0][1]) >= 0xE281L), 0xD155L)))))))) > 255UL);
                    (*l_468) |= (((safe_rshift_func_uint8_t_u_u(((*p_1436->g_103) = (~(safe_sub_func_int64_t_s_s(p_35, (~((((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(0xEE90L, (((func_42((safe_add_func_uint16_t_u_u(p_36, 0xC9C4L)), p_1436) , &l_572) == ((~(p_1436->g_178.f1 = (&p_1436->g_509 != ((((*l_583) &= (safe_rshift_func_uint8_t_u_u((4L < ((p_35 , p_36) || 0UL)), (*l_465)))) > l_442) , (void*)0)))) , l_600[0])) ^ 65535UL))) != (*l_465)), 0x04L)) & p_1436->g_81.f5) | (*l_465)) < p_1436->g_368[0][3].f4)))))), p_36)) != p_35) >= p_36);
                }
                else
                { /* block id: 221 */
                    uint32_t l_613 = 4294967295UL;
                    if ((safe_lshift_func_int16_t_s_u((0x318EA7C9L != 0x3489E2C5L), 14)))
                    { /* block id: 222 */
                        (*l_465) |= (((*p_1436->g_239) = l_603) != &p_1436->g_175);
                        (*p_1436->g_605) = l_604;
                    }
                    else
                    { /* block id: 226 */
                        int32_t *l_609 = &l_464;
                        int32_t *l_610[9][9][3] = {{{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466}},{{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466}},{{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466}},{{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466}},{{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466}},{{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466}},{{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466}},{{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466}},{{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466},{&l_567[0][1],&p_1436->g_81.f4,&l_466}}};
                        int i, j, k;
                        (*l_465) |= l_572;
                        l_613--;
                        if (l_587)
                            continue;
                    }
                    return l_612;
                }
            }
        }
    }
    for (p_1436->g_184.f7 = 0; (p_1436->g_184.f7 <= 1); p_1436->g_184.f7 += 1)
    { /* block id: 238 */
        int8_t l_616 = 0x7BL;
        uint64_t *l_625[3][10] = {{(void*)0,&l_442,&p_1436->g_357,&p_1436->g_357,&l_442,&p_1436->g_357,&p_1436->g_357,&l_442,(void*)0,(void*)0},{(void*)0,&l_442,&p_1436->g_357,&p_1436->g_357,&l_442,&p_1436->g_357,&p_1436->g_357,&l_442,(void*)0,(void*)0},{(void*)0,&l_442,&p_1436->g_357,&p_1436->g_357,&l_442,&p_1436->g_357,&p_1436->g_357,&l_442,(void*)0,(void*)0}};
        int32_t l_626 = 0x55AA947EL;
        int32_t l_627 = 0x0017699DL;
        int32_t l_628 = 0x273BD8F0L;
        int8_t l_630 = 0x7BL;
        int32_t l_647 = 0x4A0E5441L;
        int64_t l_648 = 0x57AB58260E1F59A7L;
        int32_t **l_649 = &p_1436->g_140[4][1];
        int i, j;
        if (p_1436->g_305[p_1436->g_184.f7])
            break;
        (*l_649) = ((l_616 && ((~((p_1436->g_258[0][2][2].f4 <= (p_36 && (safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((l_616 >= 0x12L), 12)) >= (safe_div_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((((--p_1436->g_357) ^ (safe_add_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u(l_638, 2)) , (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s((((safe_div_func_int64_t_s_s((safe_add_func_int16_t_s_s(l_647, ((((l_629 |= (((l_626 , func_42(p_1436->g_81.f1, p_1436)) , p_36) ^ p_35)) && p_1436->g_81.f5) >= 0xEB5CACCFL) <= l_557))), 0x3875BD31AE3CA537L)) >= 0xC385L) >= p_36), 6)), 9))), l_648))) <= p_1436->g_305[p_1436->g_184.f7]) != 0x04L), 0x6D5E0627F23A64DAL)), l_630))), 10)))) , p_36)) >= l_627)) , (*p_1436->g_232));
        (*p_1436->g_82) = p_1436->g_650;
        for (p_1436->g_89.f4 = 0; (p_1436->g_89.f4 <= 3); p_1436->g_89.f4 += 1)
        { /* block id: 246 */
            if (p_1436->g_342)
                goto lbl_651;
            return l_629;
        }
    }
    (*p_1436->g_655) = ((safe_rshift_func_uint8_t_u_s(p_36, 0)) & l_654[4][1]);
    (*l_669) = (safe_add_func_int32_t_s_s(((((safe_rshift_func_uint16_t_u_u((((0x46BBL | p_35) <= p_35) != (safe_rshift_func_uint8_t_u_u((l_629 = (l_631 = (**p_1436->g_102))), 2))), 14)) , (((*l_666) = (safe_mod_func_uint16_t_u_u((!65528UL), (safe_rshift_func_uint8_t_u_s(p_35, l_654[4][0]))))) ^ (++(*p_1436->g_103)))) <= p_35) > ((**p_1436->g_232) < l_654[4][5])), 0UL));
    return (*l_669);
}


/* ------------------------------------------ */
/* 
 * reads : p_1436->g_57 p_1436->g_81 p_1436->g_82 p_1436->g_89 p_1436->g_53 p_1436->g_102 p_1436->g_105 p_1436->g_109 p_1436->g_106 p_1436->g_139 p_1436->g_140 p_1436->g_96 p_1436->g_103 p_1436->g_175 p_1436->g_181 p_1436->g_184.f4 p_1436->g_184.f3 p_1436->g_184.f7 p_1436->g_20 p_1436->g_232 p_1436->g_258 p_1436->g_261 p_1436->g_204 p_1436->g_184.f6 p_1436->g_285 p_1436->g_305 p_1436->g_306 p_1436->g_178.f0 p_1436->g_184.f0 p_1436->g_368 p_1436->g_357 p_1436->g_388 p_1436->g_184.f2 p_1436->g_432
 * writes: p_1436->g_81 p_1436->g_89.f0 p_1436->g_102 p_1436->g_106 p_1436->g_53 p_1436->g_140 p_1436->g_175 p_1436->g_178 p_1436->g_57 p_1436->g_109.f4 p_1436->g_204 p_1436->g_239 p_1436->g_268 p_1436->g_261.f5 p_1436->g_342 p_1436->g_89.f7 p_1436->g_357
 */
uint64_t  func_37(int32_t  p_38, union U1  p_39, int8_t  p_40, uint32_t  p_41, struct S2 * p_1436)
{ /* block id: 10 */
    int32_t *l_80 = &p_1436->g_57;
    int8_t l_132 = 2L;
    uint32_t l_150 = 0xDCF1EF60L;
    int8_t **l_307 = (void*)0;
    int8_t l_323 = 1L;
    uint8_t ***l_423 = &p_1436->g_106[4][0][5];
    uint8_t ****l_422 = &l_423;
    uint8_t *****l_438[2];
    int i;
    for (i = 0; i < 2; i++)
        l_438[i] = &p_1436->g_433;
    if ((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(func_70(p_39, func_75((p_39 , &p_40), l_80, (*l_80), &p_40, p_1436), l_80, &p_40, p_1436), p_1436->g_89.f8)), 7)))
    { /* block id: 22 */
        return p_1436->g_89.f2;
    }
    else
    { /* block id: 24 */
        uint8_t **l_134[1][6] = {{&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103}};
        int32_t l_137[1];
        int16_t l_179 = (-10L);
        uint8_t ***l_251[7];
        int i, j;
        for (i = 0; i < 1; i++)
            l_137[i] = 0x5B9036F6L;
        for (i = 0; i < 7; i++)
            l_251[i] = &p_1436->g_106[5][0][5];
        for (p_1436->g_81.f0 = 0; (p_1436->g_81.f0 <= 10); p_1436->g_81.f0 = safe_add_func_int64_t_s_s(p_1436->g_81.f0, 1))
        { /* block id: 27 */
            uint16_t l_135 = 0x2D08L;
            int32_t l_136 = 0L;
            int32_t l_138 = 0x1B40A8A3L;
            struct S0 *l_183 = &p_1436->g_184;
            uint8_t ***l_252 = &p_1436->g_106[4][0][8];
            int64_t l_304 = (-2L);
            int16_t ***l_385 = &p_1436->g_239;
            int32_t l_407 = (-1L);
            uint8_t ******l_434 = (void*)0;
            uint8_t ******l_435 = (void*)0;
            uint8_t *****l_437 = &p_1436->g_433;
            uint8_t ******l_436[3];
            int i;
            for (i = 0; i < 3; i++)
                l_436[i] = &l_437;
            if ((0L < 0L))
            { /* block id: 28 */
                int8_t *l_122 = &p_1436->g_53;
                int32_t l_127[3][9] = {{0x59C151ECL,(-1L),0x59C151ECL,0x59C151ECL,(-1L),0x59C151ECL,0x59C151ECL,(-1L),0x59C151ECL},{0x59C151ECL,(-1L),0x59C151ECL,0x59C151ECL,(-1L),0x59C151ECL,0x59C151ECL,(-1L),0x59C151ECL},{0x59C151ECL,(-1L),0x59C151ECL,0x59C151ECL,(-1L),0x59C151ECL,0x59C151ECL,(-1L),0x59C151ECL}};
                int i, j;
                (*p_1436->g_139) = ((p_1436->g_109 , ((safe_mul_func_uint8_t_u_u((l_138 &= (((safe_mod_func_int64_t_s_s((safe_div_func_uint64_t_u_u((((safe_lshift_func_int16_t_s_u(p_1436->g_89.f7, 13)) && (safe_rshift_func_int16_t_s_s((p_38 && (((((((((safe_mul_func_uint8_t_u_u((*l_80), ((*l_122) = (*l_80)))) < (safe_rshift_func_uint16_t_u_s((!((safe_sub_func_uint8_t_u_u((l_136 = (l_135 = (l_127[2][7] || ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((l_132 > ((safe_unary_minus_func_uint64_t_u((l_134[0][5] == (*p_1436->g_105)))) < p_41)), 8)), (*l_80))) < 0x3984BC84205C7445L)))), 0x66L)) == l_137[0])), 4))) < l_137[0]) , p_41) > p_39.f0) , p_1436->g_81.f2) || l_135) & (*l_80)) <= p_39.f0)), p_1436->g_81.f5))) || p_39.f0), p_1436->g_81.f5)), p_41)) && p_40) > p_1436->g_89.f8)), l_137[0])) && 0x07ACA667L)) , &p_1436->g_57);
            }
            else
            { /* block id: 34 */
                for (p_1436->g_81.f5 = 0; (p_1436->g_81.f5 == 2); p_1436->g_81.f5++)
                { /* block id: 37 */
                    int32_t *l_146 = (void*)0;
                    int32_t *l_147 = &l_138;
                    int32_t *l_148 = &p_1436->g_81.f4;
                    int32_t *l_149 = &p_1436->g_89.f4;
                    for (p_1436->g_81.f7 = (-5); (p_1436->g_81.f7 < 50); p_1436->g_81.f7 = safe_add_func_int64_t_s_s(p_1436->g_81.f7, 2))
                    { /* block id: 40 */
                        uint64_t l_145 = 0x03686D0EF2AE6F9CL;
                        l_145 |= p_38;
                        if ((**p_1436->g_139))
                            break;
                        if ((**p_1436->g_139))
                            continue;
                    }
                    l_150--;
                    if ((*l_80))
                        continue;
                }
            }
            for (l_150 = (-15); (l_150 >= 46); l_150 = safe_add_func_int16_t_s_s(l_150, 7))
            { /* block id: 51 */
                int8_t *l_158 = (void*)0;
                int8_t **l_157 = &l_158;
                int8_t *l_163 = &l_132;
                int16_t *l_174[9] = {&p_1436->g_175,&p_1436->g_175,&p_1436->g_175,&p_1436->g_175,&p_1436->g_175,&p_1436->g_175,&p_1436->g_175,&p_1436->g_175,&p_1436->g_175};
                int32_t l_176 = 0x0A2640D8L;
                union U1 *l_177 = &p_1436->g_178;
                int8_t *l_180 = &p_1436->g_53;
                int32_t *l_182 = &l_176;
                int32_t *l_185 = (void*)0;
                int32_t *l_186 = (void*)0;
                int32_t *l_187 = &p_1436->g_109.f4;
                int32_t *l_188 = &l_136;
                uint8_t ***l_253 = &l_134[0][5];
                int8_t l_255[5];
                uint16_t *l_340 = &p_1436->g_268;
                int32_t *l_341 = &p_1436->g_342;
                int16_t ***l_384 = &p_1436->g_239;
                uint64_t *l_413 = &p_1436->g_357;
                int i;
                for (i = 0; i < 5; i++)
                    l_255[i] = 0x54L;
                if (((*l_188) = (safe_sub_func_uint16_t_u_u(((((*l_157) = &p_40) == &p_40) & ((((*l_187) = (safe_sub_func_uint64_t_u_u((((((0xFD08L != (safe_sub_func_uint16_t_u_u((p_1436->g_81.f4 == ((*l_163) = p_1436->g_109.f2)), (((1UL == ((*l_182) = ((*l_80) = (safe_mod_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(((*l_180) &= (safe_sub_func_uint64_t_u_u((((((*l_177) = func_42(((((p_1436->g_175 |= ((p_39.f0 || (safe_mod_func_uint8_t_u_u(((p_1436->g_96[0][1][1] > (safe_div_func_uint16_t_u_u((&p_1436->g_96[0][4][1] == &p_1436->g_96[0][5][1]), p_40))) , (*p_1436->g_103)), 6UL))) ^ 4UL)) & l_176) , (-4L)) != p_1436->g_109.f3), p_1436)) , 0x438AL) && p_1436->g_109.f5) <= p_1436->g_81.f5), l_179))), 4)) & p_39.f0), p_1436->g_181))))) , l_183) != (void*)0)))) ^ l_137[0]) ^ p_41) || l_137[0]) > p_1436->g_109.f5), (-1L)))) > p_39.f0) <= p_1436->g_184.f4)), 0xA609L))))
                { /* block id: 61 */
                    uint32_t l_191 = 0xA66F2389L;
                    int16_t *l_203 = &p_1436->g_175;
                    int16_t **l_202[2][7] = {{&l_203,&l_203,&l_203,&l_203,&l_203,&l_203,&l_203},{&l_203,&l_203,&l_203,&l_203,&l_203,&l_203,&l_203}};
                    uint8_t ***l_205 = &p_1436->g_106[4][0][2];
                    int i, j;
                    (*l_187) = (safe_rshift_func_uint8_t_u_s(l_191, (safe_add_func_int16_t_s_s((254UL < (l_191 || (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(0x3797L, 9)), 6)))), (!(safe_rshift_func_int16_t_s_u(p_1436->g_109.f0, (safe_lshift_func_int8_t_s_s((((l_174[3] == (p_1436->g_204 = l_174[0])) > ((*l_203) ^= 0x5D93L)) == (((*l_205) = (*p_1436->g_105)) != (void*)0)), p_1436->g_184.f3)))))))));
                    for (p_1436->g_81.f8 = 0; (p_1436->g_81.f8 == (-29)); p_1436->g_81.f8--)
                    { /* block id: 68 */
                        int16_t *l_228 = (void*)0;
                        int32_t l_229 = 2L;
                        int32_t **l_230 = (void*)0;
                        int32_t **l_231 = (void*)0;
                        (*l_182) = (safe_mod_func_int32_t_s_s((((p_39.f0 , p_1436->g_81.f1) < p_1436->g_184.f7) > l_135), (safe_mod_func_int32_t_s_s((0xC0L > (safe_sub_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((((&p_1436->g_175 != &p_1436->g_175) | ((+((safe_sub_func_uint8_t_u_u(((l_137[0] = (+(safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(0x1A48L, (safe_add_func_int8_t_s_s(((safe_add_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(((((~8UL) , p_1436->g_89.f5) , l_228) == &p_1436->g_175), p_1436->g_184.f7)) , (-5L)), p_1436->g_20)) & l_229), (*l_80))))), p_1436->g_81.f0)))) && p_38), p_40)) <= 0x4BBAL)) && p_40)) != 4294967294UL) , l_179), l_229)), (*l_80)))), p_39.f0))));
                        (*p_1436->g_232) = (*p_1436->g_139);
                    }
                    return p_1436->g_89.f2;
                }
                else
                { /* block id: 74 */
                    union U1 **l_240 = (void*)0;
                    union U1 *l_241 = &p_1436->g_178;
                    uint8_t ***l_247 = &p_1436->g_106[0][0][1];
                    uint8_t ****l_246 = &l_247;
                    uint8_t ***l_249 = &p_1436->g_102;
                    uint8_t ****l_248 = &l_249;
                    uint8_t ****l_250[2];
                    int32_t l_254 = 0x1DE6B234L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_250[i] = (void*)0;
                    (*l_182) &= (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(p_1436->g_109.f5, (((p_1436->g_239 = &p_1436->g_204) != (void*)0) < (&p_1436->g_178 == (l_241 = &p_1436->g_178))))), 12)) != ((((safe_add_func_uint8_t_u_u(255UL, (safe_mod_func_int32_t_s_s((((p_1436->g_89.f3 == (((((l_251[3] = ((*l_248) = ((*l_246) = &p_1436->g_102))) != (l_253 = (l_252 = &p_1436->g_102))) <= (*l_80)) >= p_40) || p_41)) && l_137[0]) & l_254), (*l_187))))) != p_38) < p_38) , 0x3D83L)), l_255[1]));
                }
                for (p_1436->g_89.f0 = (-22); (p_1436->g_89.f0 == 18); ++p_1436->g_89.f0)
                { /* block id: 86 */
                    int16_t ***l_264 = &p_1436->g_239;
                    uint16_t *l_265 = &l_135;
                    int32_t l_266 = 1L;
                    uint16_t *l_267 = &p_1436->g_268;
                    (*l_182) &= ((((p_1436->g_258[0][2][2] , ((*l_267) = ((0x228245F9A7D5ABB8L ^ ((((*l_265) = ((((((safe_rshift_func_int8_t_s_u(0L, ((((p_1436->g_261 , (safe_rshift_func_uint16_t_u_u(((p_40 , (((*l_264) = &p_1436->g_204) != (void*)0)) > ((&p_40 != &p_40) , 0x27C7D687L)), p_41))) != 0x5E6CL) | p_40) | (*p_1436->g_204)))) , (*l_80)) , 0x0655CE3A59341425L) < 0UL) > 0x7DD5L) > (-8L))) == p_40) > l_266)) ^ l_137[0]))) < p_39.f0) & p_1436->g_184.f6) | l_138);
                    for (p_1436->g_261.f5 = 0; (p_1436->g_261.f5 <= 1); p_1436->g_261.f5 += 1)
                    { /* block id: 93 */
                        (*l_188) = (safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((((safe_mod_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u(((((safe_mul_func_int8_t_s_s((p_1436->g_175 , (safe_mod_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((((((((p_1436->g_285 , (safe_lshift_func_int16_t_s_s((l_137[0] , (safe_add_func_uint16_t_u_u((safe_div_func_int64_t_s_s((0xE277B47BBFC8B555L < ((safe_unary_minus_func_int8_t_s(((safe_mul_func_uint16_t_u_u(p_39.f0, ((*l_265) = (safe_mod_func_int64_t_s_s((safe_add_func_int8_t_s_s(p_40, (safe_rshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(l_135)), ((((3L > p_40) != l_304) || l_137[0]) , 0L))), p_1436->g_89.f0)))), p_1436->g_81.f5))))) ^ (*l_182)))) == p_41)), p_40)), l_138))), l_138))) != 0L) , l_266) == p_1436->g_305[0]) < l_266) , p_1436->g_261.f6) == p_1436->g_306), p_38)) & l_137[0]), (*p_1436->g_204)))), 1L)) >= p_1436->g_178.f0) < p_41) < p_40), (*l_188))) | (*p_1436->g_204)), l_266)) < 0x2EEF2665L) || 0x1D6186FDFC267F3CL), p_41)) , l_307) != (void*)0), (*l_188))), l_138));
                    }
                }
                l_323 = ((*l_188) ^= (safe_div_func_int8_t_s_s(0x05L, (safe_lshift_func_int8_t_s_u((0x5CL && ((**p_1436->g_102) , ((((((9L > p_1436->g_81.f1) | ((((((18446744073709551615UL || (safe_rshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((((safe_add_func_uint64_t_u_u(18446744073709551615UL, (+((((0x17L && (safe_unary_minus_func_uint8_t_u((safe_mul_func_uint16_t_u_u(0x16B9L, 0L))))) | (*l_80)) > p_1436->g_96[0][1][1]) || p_40)))) < (*l_80)) >= p_1436->g_258[0][2][2].f8), p_1436->g_109.f7)) <= 0x4AL), p_41)) < 65533UL), 7))) ^ 1L) || l_135) == 0x70697DDFL) , (void*)0) != l_80)) != 0UL) || 0x15L) ^ p_1436->g_184.f0) == 0x68AAL))), (*l_80))))));
                if ((((p_1436->g_258[0][2][2].f4 , (*l_182)) , (((*l_341) = (safe_lshift_func_uint16_t_u_s(((safe_div_func_int32_t_s_s(p_38, 0x6AF6B503L)) != (~((*l_180) = ((((0x06C4L ^ (!0UL)) <= l_135) && (safe_mul_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u(((+(safe_lshift_func_uint16_t_u_u(((*l_340) = ((safe_mod_func_uint32_t_u_u(1UL, (((safe_div_func_uint64_t_u_u((safe_div_func_int32_t_s_s(1L, p_39.f0)), 0x3FA880FE9571D875L)) < l_137[0]) || p_1436->g_285.f3))) , 0UL)), p_1436->g_175))) == p_1436->g_89.f8), (-3L))) & p_40), 0xA8L))) == p_39.f0)))), 14))) , (void*)0)) != (void*)0))
                { /* block id: 103 */
                    uint64_t *l_356 = &p_1436->g_357;
                    int64_t *l_358[5] = {&p_1436->g_96[0][1][1],&p_1436->g_96[0][1][1],&p_1436->g_96[0][1][1],&p_1436->g_96[0][1][1],&p_1436->g_96[0][1][1]};
                    int64_t **l_359 = &l_358[1];
                    int64_t *l_361[9] = {&p_1436->g_96[0][1][1],&p_1436->g_96[0][1][1],&p_1436->g_96[0][1][1],&p_1436->g_96[0][1][1],&p_1436->g_96[0][1][1],&p_1436->g_96[0][1][1],&p_1436->g_96[0][1][1],&p_1436->g_96[0][1][1],&p_1436->g_96[0][1][1]};
                    int64_t **l_360 = &l_361[8];
                    int32_t l_369 = 1L;
                    int i;
                    for (p_1436->g_89.f7 = (-25); (p_1436->g_89.f7 <= 34); p_1436->g_89.f7 = safe_add_func_uint8_t_u_u(p_1436->g_89.f7, 9))
                    { /* block id: 106 */
                        uint64_t l_345 = 3UL;
                        if ((*l_80))
                            break;
                        if (l_345)
                            continue;
                    }
                    if (p_40)
                        continue;
                    (*l_187) &= ((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((*l_158) = (safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((((*l_356) = p_41) , ((p_39.f0 < p_1436->g_184.f4) | (((*l_360) = ((*l_359) = l_358[1])) != (void*)0))), (((0L != (p_39.f0 == (~((*l_188) = ((safe_mul_func_uint8_t_u_u(p_41, (safe_mul_func_uint8_t_u_u(((*l_80) = (safe_mod_func_uint64_t_u_u(((p_1436->g_368[0][3] , p_39.f0) < l_369), l_369))), 0L)))) , 0x55F2F5C6L))))) == p_41) && (*p_1436->g_204)))), 0x31E34A7EL)), l_138))), (**p_1436->g_102))), l_369)) < l_137[0]);
                    for (p_1436->g_261.f5 = 0; (p_1436->g_261.f5 <= 0); p_1436->g_261.f5 += 1)
                    { /* block id: 120 */
                        int32_t l_376 = (-1L);
                        int64_t *l_381 = &l_304;
                        uint8_t *****l_410 = (void*)0;
                        uint8_t ****l_412 = &l_251[2];
                        uint8_t *****l_411 = &l_412;
                        int i, j, k;
                        l_137[0] = (safe_div_func_int16_t_s_s(0L, (safe_sub_func_uint8_t_u_u((((*l_188) |= ((-1L) & (((safe_mul_func_int64_t_s_s((((((*l_163) = p_38) & l_376) , (+p_40)) != 0UL), ((*l_381) = (((*l_182) = (**p_1436->g_139)) < (safe_sub_func_uint64_t_u_u(((*l_356)--), ((p_39.f0 && (((*p_1436->g_204) = l_376) >= p_1436->g_305[0])) ^ l_304))))))) ^ 0x93L) != p_40))) >= p_1436->g_285.f7), p_41))));
                        (*l_188) = (+(((l_384 == l_385) != ((safe_add_func_int16_t_s_s(l_369, ((void*)0 != p_1436->g_388))) <= (((safe_div_func_uint8_t_u_u((+(safe_mod_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0xB9L, (p_1436->g_258[0][2][2].f1 ^ (safe_sub_func_int32_t_s_s(5L, (((((((safe_sub_func_uint32_t_u_u(p_1436->g_89.f3, p_41)) ^ 0xFA5466D1BCE73445L) , p_1436->g_89.f6) == 0x65A7285CL) ^ (*l_80)) == l_369) != l_376)))))), l_376)), 0x52E2A7245C095C3BL)), (*l_182)))), 0x2EL)) | 0x7A3A77274EF8BDCDL) || p_1436->g_81.f0))) && p_38));
                        (*l_182) |= (safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((l_407 , ((((((*l_411) = &l_251[3]) == (p_1436->g_285.f2 , &l_252)) || (*p_1436->g_204)) != ((void*)0 != l_413)) && (((safe_div_func_int32_t_s_s(((safe_unary_minus_func_uint64_t_u(((safe_mod_func_uint8_t_u_u((**p_1436->g_102), p_41)) == p_1436->g_258[0][2][2].f4))) && l_376), 0xC58DDADEL)) ^ p_38) > 0xECL))), (*l_80))), 0x6FL));
                    }
                }
                else
                { /* block id: 132 */
                    uint32_t l_419 = 0xA86C76ADL;
                    return l_419;
                }
            }
            l_136 ^= (safe_mul_func_int16_t_s_s((p_41 , ((p_1436->g_184.f2 | ((void*)0 == l_422)) == (~(safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((p_1436->g_432 != (l_438[1] = &p_1436->g_433)) == l_135), (*l_80))), ((safe_add_func_int16_t_s_s(l_138, (*l_80))) == (*l_80)))) && l_138), p_38)), 7))))), 65535UL));
        }
    }
    return (*l_80);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
union U1  func_42(int32_t  p_43, struct S2 * p_1436)
{ /* block id: 6 */
    uint8_t l_54 = 0xE8L;
    int32_t *l_58[5];
    int16_t l_59 = (-5L);
    int32_t l_60 = 0L;
    int16_t l_61 = 1L;
    uint16_t l_62[4][7][2] = {{{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL}},{{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL}},{{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL}},{{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL},{0x0493L,1UL}}};
    union U1 l_65 = {0x8D0E3497L};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_58[i] = &p_1436->g_57;
    l_59 ^= l_54;
    --l_62[1][1][0];
    return l_65;
}


/* ------------------------------------------ */
/* 
 * reads : p_1436->g_89.f8
 * writes:
 */
uint16_t  func_70(union U1  p_71, int8_t * p_72, int32_t * p_73, int8_t * p_74, struct S2 * p_1436)
{ /* block id: 20 */
    return p_1436->g_89.f8;
}


/* ------------------------------------------ */
/* 
 * reads : p_1436->g_81 p_1436->g_82 p_1436->g_89 p_1436->g_57 p_1436->g_53 p_1436->g_102 p_1436->g_105
 * writes: p_1436->g_81 p_1436->g_89.f0 p_1436->g_102 p_1436->g_106
 */
int8_t * func_75(int8_t * p_76, int32_t * p_77, int16_t  p_78, int8_t * p_79, struct S2 * p_1436)
{ /* block id: 11 */
    uint8_t l_94[10];
    int64_t *l_95[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int32_t l_97 = (-1L);
    uint8_t *l_98[5] = {&p_1436->g_89.f0,&p_1436->g_89.f0,&p_1436->g_89.f0,&p_1436->g_89.f0,&p_1436->g_89.f0};
    int32_t l_101 = 0L;
    uint8_t ***l_104 = &p_1436->g_102;
    int i, j;
    for (i = 0; i < 10; i++)
        l_94[i] = 0xE0L;
    (*p_1436->g_82) = p_1436->g_81;
    p_1436->g_81.f4 &= (safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((((((l_101 = (~(safe_mul_func_int16_t_s_s((p_1436->g_89 , (safe_rshift_func_uint16_t_u_u((((*p_77) != (safe_mul_func_int16_t_s_s(((l_94[9] , ((l_97 = l_94[1]) , l_94[3])) , l_97), p_1436->g_81.f0))) ^ (p_1436->g_89.f0++)), 0))), ((-1L) <= p_78))))) != 1UL) , 4294967290UL) , (-7L)) != 0xE87E310A61F905A6L), 2)), p_1436->g_53));
    (*p_1436->g_105) = ((*l_104) = p_1436->g_102);
    return &p_1436->g_53;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1437;
    struct S2* p_1436 = &c_1437;
    struct S2 c_1438 = {
        3UL, // p_1436->g_20
        0x24L, // p_1436->g_53
        (void*)0, // p_1436->g_55
        0x42FA43DEL, // p_1436->g_57
        {{&p_1436->g_57,&p_1436->g_57,&p_1436->g_57,&p_1436->g_57},{&p_1436->g_57,&p_1436->g_57,&p_1436->g_57,&p_1436->g_57},{&p_1436->g_57,&p_1436->g_57,&p_1436->g_57,&p_1436->g_57},{&p_1436->g_57,&p_1436->g_57,&p_1436->g_57,&p_1436->g_57},{&p_1436->g_57,&p_1436->g_57,&p_1436->g_57,&p_1436->g_57},{&p_1436->g_57,&p_1436->g_57,&p_1436->g_57,&p_1436->g_57},{&p_1436->g_57,&p_1436->g_57,&p_1436->g_57,&p_1436->g_57},{&p_1436->g_57,&p_1436->g_57,&p_1436->g_57,&p_1436->g_57},{&p_1436->g_57,&p_1436->g_57,&p_1436->g_57,&p_1436->g_57},{&p_1436->g_57,&p_1436->g_57,&p_1436->g_57,&p_1436->g_57}}, // p_1436->g_56
        {1UL,0x60L,0x170AL,6UL,-1L,1UL,0x07C4FD0CL,18446744073709551613UL,3L}, // p_1436->g_81
        &p_1436->g_81, // p_1436->g_82
        {0xDEL,0x16L,-6L,4294967287UL,0x4A90243FL,0xB1F57036L,0x3D5D31C8L,0x96062B7E3690D562L,0x5700720EA9076CEBL}, // p_1436->g_89
        {{{2L,0L},{2L,0L},{2L,0L},{2L,0L},{2L,0L},{2L,0L},{2L,0L},{2L,0L},{2L,0L},{2L,0L}}}, // p_1436->g_96
        &p_1436->g_81.f0, // p_1436->g_103
        &p_1436->g_103, // p_1436->g_102
        {{{(void*)0,(void*)0,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,&p_1436->g_103,(void*)0,(void*)0}}}, // p_1436->g_106
        &p_1436->g_106[0][0][1], // p_1436->g_105
        {0x93L,0x4AL,0x706CL,0xF212B29AL,0x56AACE6EL,4294967289UL,0x69DCB871L,7UL,1L}, // p_1436->g_109
        {{&p_1436->g_109.f4,&p_1436->g_109.f4},{&p_1436->g_109.f4,&p_1436->g_109.f4},{&p_1436->g_109.f4,&p_1436->g_109.f4},{&p_1436->g_109.f4,&p_1436->g_109.f4},{&p_1436->g_109.f4,&p_1436->g_109.f4},{&p_1436->g_109.f4,&p_1436->g_109.f4},{&p_1436->g_109.f4,&p_1436->g_109.f4}}, // p_1436->g_140
        &p_1436->g_140[5][0], // p_1436->g_139
        0x7FE0L, // p_1436->g_175
        {0x5E7B768CL}, // p_1436->g_178
        4294967288UL, // p_1436->g_181
        {0xD8L,0x6DL,0x7017L,0xF087EB8CL,-1L,1UL,0x63233A39L,4UL,0x4A96F2688045252AL}, // p_1436->g_184
        &p_1436->g_175, // p_1436->g_204
        &p_1436->g_140[6][0], // p_1436->g_232
        &p_1436->g_204, // p_1436->g_239
        {{{{0x4DL,0x21L,0x47ABL,4294967295UL,-8L,0xB2AEEABFL,0L,0x13CCDA484C74275FL,7L},{0x0AL,-9L,0L,0x91D209C8L,5L,0x71449B13L,5L,18446744073709551615UL,0x329B314F7CC056BAL},{0xF4L,-3L,0x36FBL,6UL,1L,0x7DB5B27BL,0x6E87006EL,7UL,0x0CA02759C4D77185L},{0x0AL,-9L,0L,0x91D209C8L,5L,0x71449B13L,5L,18446744073709551615UL,0x329B314F7CC056BAL}},{{0x4DL,0x21L,0x47ABL,4294967295UL,-8L,0xB2AEEABFL,0L,0x13CCDA484C74275FL,7L},{0x0AL,-9L,0L,0x91D209C8L,5L,0x71449B13L,5L,18446744073709551615UL,0x329B314F7CC056BAL},{0xF4L,-3L,0x36FBL,6UL,1L,0x7DB5B27BL,0x6E87006EL,7UL,0x0CA02759C4D77185L},{0x0AL,-9L,0L,0x91D209C8L,5L,0x71449B13L,5L,18446744073709551615UL,0x329B314F7CC056BAL}},{{0x4DL,0x21L,0x47ABL,4294967295UL,-8L,0xB2AEEABFL,0L,0x13CCDA484C74275FL,7L},{0x0AL,-9L,0L,0x91D209C8L,5L,0x71449B13L,5L,18446744073709551615UL,0x329B314F7CC056BAL},{0xF4L,-3L,0x36FBL,6UL,1L,0x7DB5B27BL,0x6E87006EL,7UL,0x0CA02759C4D77185L},{0x0AL,-9L,0L,0x91D209C8L,5L,0x71449B13L,5L,18446744073709551615UL,0x329B314F7CC056BAL}},{{0x4DL,0x21L,0x47ABL,4294967295UL,-8L,0xB2AEEABFL,0L,0x13CCDA484C74275FL,7L},{0x0AL,-9L,0L,0x91D209C8L,5L,0x71449B13L,5L,18446744073709551615UL,0x329B314F7CC056BAL},{0xF4L,-3L,0x36FBL,6UL,1L,0x7DB5B27BL,0x6E87006EL,7UL,0x0CA02759C4D77185L},{0x0AL,-9L,0L,0x91D209C8L,5L,0x71449B13L,5L,18446744073709551615UL,0x329B314F7CC056BAL}},{{0x4DL,0x21L,0x47ABL,4294967295UL,-8L,0xB2AEEABFL,0L,0x13CCDA484C74275FL,7L},{0x0AL,-9L,0L,0x91D209C8L,5L,0x71449B13L,5L,18446744073709551615UL,0x329B314F7CC056BAL},{0xF4L,-3L,0x36FBL,6UL,1L,0x7DB5B27BL,0x6E87006EL,7UL,0x0CA02759C4D77185L},{0x0AL,-9L,0L,0x91D209C8L,5L,0x71449B13L,5L,18446744073709551615UL,0x329B314F7CC056BAL}}}}, // p_1436->g_258
        {0xE1L,0x08L,4L,1UL,0x19115227L,4294967295UL,2L,0xB6993E920F85839FL,0x0B5B68615E9AC747L}, // p_1436->g_261
        0xB1FAL, // p_1436->g_268
        {1UL,0x02L,0x6CD2L,4294967291UL,0x4F8AD5CDL,0x068BC98FL,0x596208DFL,0x236270AD16F2BF9CL,0x5F721C33C2831B36L}, // p_1436->g_285
        {0xDBL,0xDBL}, // p_1436->g_305
        5UL, // p_1436->g_306
        (-4L), // p_1436->g_342
        7UL, // p_1436->g_357
        {{{0xBEL,0L,4L,0x54458521L,1L,1UL,2L,0xB9685FBB2A4EBFBAL,-2L},{1UL,-1L,-2L,0x427F0A37L,0L,4294967288UL,1L,0x7E0A073962BB8B37L,0x66250D2479DC69FFL},{0xBEL,0L,4L,0x54458521L,1L,1UL,2L,0xB9685FBB2A4EBFBAL,-2L},{0xBEL,0L,4L,0x54458521L,1L,1UL,2L,0xB9685FBB2A4EBFBAL,-2L},{1UL,-1L,-2L,0x427F0A37L,0L,4294967288UL,1L,0x7E0A073962BB8B37L,0x66250D2479DC69FFL},{0xBEL,0L,4L,0x54458521L,1L,1UL,2L,0xB9685FBB2A4EBFBAL,-2L},{0xBEL,0L,4L,0x54458521L,1L,1UL,2L,0xB9685FBB2A4EBFBAL,-2L},{1UL,-1L,-2L,0x427F0A37L,0L,4294967288UL,1L,0x7E0A073962BB8B37L,0x66250D2479DC69FFL},{0xBEL,0L,4L,0x54458521L,1L,1UL,2L,0xB9685FBB2A4EBFBAL,-2L},{0xBEL,0L,4L,0x54458521L,1L,1UL,2L,0xB9685FBB2A4EBFBAL,-2L}}}, // p_1436->g_368
        (void*)0, // p_1436->g_388
        (void*)0, // p_1436->g_433
        &p_1436->g_433, // p_1436->g_432
        (void*)0, // p_1436->g_467
        (void*)0, // p_1436->g_510
        &p_1436->g_510, // p_1436->g_509
        0x30FCB617L, // p_1436->g_511
        (void*)0, // p_1436->g_537
        5L, // p_1436->g_559
        {&p_1436->g_89.f6,&p_1436->g_89.f6,&p_1436->g_89.f6,&p_1436->g_89.f6,&p_1436->g_89.f6,&p_1436->g_89.f6,&p_1436->g_89.f6,&p_1436->g_89.f6,&p_1436->g_89.f6}, // p_1436->g_607
        &p_1436->g_607[0], // p_1436->g_606
        &p_1436->g_606, // p_1436->g_605
        {249UL,0x76L,0L,0UL,0x360F2E4FL,8UL,-1L,0x8DD96273494D920FL,0L}, // p_1436->g_650
        &p_1436->g_285.f4, // p_1436->g_655
        (void*)0, // p_1436->g_675
        6UL, // p_1436->g_689
        &p_1436->g_432, // p_1436->g_718
        (void*)0, // p_1436->g_814
        {0x0AL,0x64L,0L,0UL,-10L,4294967287UL,8L,0UL,0x63F19D0F0BFD801FL}, // p_1436->g_823
        &p_1436->g_285.f4, // p_1436->g_827
        &p_1436->g_81.f4, // p_1436->g_843
        {{{0UL,1L,8L,0x6DB0F197L,0x3CFD0B1DL,0UL,-9L,0x066FC0EBD63834D4L,-7L}},{{0UL,1L,8L,0x6DB0F197L,0x3CFD0B1DL,0UL,-9L,0x066FC0EBD63834D4L,-7L}},{{0UL,1L,8L,0x6DB0F197L,0x3CFD0B1DL,0UL,-9L,0x066FC0EBD63834D4L,-7L}}}, // p_1436->g_873
        {7UL,-6L,0L,0xC5B704A8L,0x277D9A1FL,4294967295UL,1L,0x1F639755B9970DA8L,4L}, // p_1436->g_890
        {{{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L}},{{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L}},{{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L}},{{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L}},{{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L}},{{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L},{0x1867L,0x6073L,6L,(-4L),0x7E6DL,8L,(-4L),0x3915L}}}, // p_1436->g_907
        0x408C861B6BBD452DL, // p_1436->g_923
        18446744073709551615UL, // p_1436->g_926
        6L, // p_1436->g_927
        0x3483A0D99C34A0F3L, // p_1436->g_993
        &p_1436->g_890.f5, // p_1436->g_1004
        &p_1436->g_1004, // p_1436->g_1003
        {(void*)0,&p_1436->g_140[5][0],(void*)0,(void*)0,&p_1436->g_140[5][0],(void*)0}, // p_1436->g_1011
        &p_1436->g_140[5][0], // p_1436->g_1050
        (void*)0, // p_1436->g_1110
        0L, // p_1436->g_1141
        &p_1436->g_1141, // p_1436->g_1140
        &p_1436->g_1140, // p_1436->g_1139
        &p_1436->g_140[2][0], // p_1436->g_1151
        {{&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[0][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0]},{&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[0][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0]},{&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[0][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0]},{&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[0][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0]},{&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[0][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0]},{&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[0][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0]},{&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0],&p_1436->g_140[0][0],&p_1436->g_140[5][0],&p_1436->g_140[5][0]}}, // p_1436->g_1152
        {&p_1436->g_140[5][0],&p_1436->g_140[5][0]}, // p_1436->g_1153
        {7UL,0x57L,1L,0xBB8C6A6FL,3L,4294967295UL,0x72134B53L,0x8549CB1ABFB2AAA7L,0L}, // p_1436->g_1162
        {0xB6L,0x6CL,9L,4294967295UL,0x662E98C4L,0UL,0x0E60F3C9L,6UL,0x3219FD83D9031DDCL}, // p_1436->g_1165
        &p_1436->g_1165, // p_1436->g_1164
        {&p_1436->g_140[4][0],&p_1436->g_140[4][0],&p_1436->g_140[4][0]}, // p_1436->g_1180
        {{{(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL,(-1L),(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL},{(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL,(-1L),(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL},{(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL,(-1L),(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL}},{{(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL,(-1L),(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL},{(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL,(-1L),(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL},{(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL,(-1L),(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL}},{{(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL,(-1L),(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL},{(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL,(-1L),(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL},{(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL,(-1L),(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL}},{{(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL,(-1L),(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL},{(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL,(-1L),(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL},{(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL,(-1L),(-1L),0x516A4C29BED3F48AL,0L,0x516A4C29BED3F48AL}}}, // p_1436->g_1216
        &p_1436->g_81.f5, // p_1436->g_1226
        &p_1436->g_1226, // p_1436->g_1225
        &p_1436->g_1225, // p_1436->g_1224
        &p_1436->g_184.f4, // p_1436->g_1229
        {255UL,0x75L,0x64ECL,4294967286UL,0L,0x6D38ED78L,-3L,0UL,0L}, // p_1436->g_1248
        {{(void*)0}}, // p_1436->g_1275
        4294967291UL, // p_1436->g_1314
        (-1L), // p_1436->g_1316
        &p_1436->g_140[5][0], // p_1436->g_1317
        0x6663L, // p_1436->g_1328
        0x20947C9843985E58L, // p_1436->g_1329
        1L, // p_1436->g_1376
        &p_1436->g_96[0][1][1], // p_1436->g_1414
        &p_1436->g_1414, // p_1436->g_1413
        {{{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413},{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413},{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413},{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413}},{{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413},{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413},{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413},{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413}},{{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413},{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413},{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413},{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413}},{{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413},{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413},{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413},{(void*)0,&p_1436->g_1413,(void*)0,&p_1436->g_1413,(void*)0,(void*)0,&p_1436->g_1413}}}, // p_1436->g_1412
        &p_1436->g_140[5][0], // p_1436->g_1433
    };
    c_1437 = c_1438;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1436);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1436->g_20, "p_1436->g_20", print_hash_value);
    transparent_crc(p_1436->g_53, "p_1436->g_53", print_hash_value);
    transparent_crc(p_1436->g_57, "p_1436->g_57", print_hash_value);
    transparent_crc(p_1436->g_81.f0, "p_1436->g_81.f0", print_hash_value);
    transparent_crc(p_1436->g_81.f1, "p_1436->g_81.f1", print_hash_value);
    transparent_crc(p_1436->g_81.f2, "p_1436->g_81.f2", print_hash_value);
    transparent_crc(p_1436->g_81.f3, "p_1436->g_81.f3", print_hash_value);
    transparent_crc(p_1436->g_81.f4, "p_1436->g_81.f4", print_hash_value);
    transparent_crc(p_1436->g_81.f5, "p_1436->g_81.f5", print_hash_value);
    transparent_crc(p_1436->g_81.f6, "p_1436->g_81.f6", print_hash_value);
    transparent_crc(p_1436->g_81.f7, "p_1436->g_81.f7", print_hash_value);
    transparent_crc(p_1436->g_81.f8, "p_1436->g_81.f8", print_hash_value);
    transparent_crc(p_1436->g_89.f0, "p_1436->g_89.f0", print_hash_value);
    transparent_crc(p_1436->g_89.f1, "p_1436->g_89.f1", print_hash_value);
    transparent_crc(p_1436->g_89.f2, "p_1436->g_89.f2", print_hash_value);
    transparent_crc(p_1436->g_89.f3, "p_1436->g_89.f3", print_hash_value);
    transparent_crc(p_1436->g_89.f4, "p_1436->g_89.f4", print_hash_value);
    transparent_crc(p_1436->g_89.f5, "p_1436->g_89.f5", print_hash_value);
    transparent_crc(p_1436->g_89.f6, "p_1436->g_89.f6", print_hash_value);
    transparent_crc(p_1436->g_89.f7, "p_1436->g_89.f7", print_hash_value);
    transparent_crc(p_1436->g_89.f8, "p_1436->g_89.f8", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1436->g_96[i][j][k], "p_1436->g_96[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1436->g_109.f0, "p_1436->g_109.f0", print_hash_value);
    transparent_crc(p_1436->g_109.f1, "p_1436->g_109.f1", print_hash_value);
    transparent_crc(p_1436->g_109.f2, "p_1436->g_109.f2", print_hash_value);
    transparent_crc(p_1436->g_109.f3, "p_1436->g_109.f3", print_hash_value);
    transparent_crc(p_1436->g_109.f4, "p_1436->g_109.f4", print_hash_value);
    transparent_crc(p_1436->g_109.f5, "p_1436->g_109.f5", print_hash_value);
    transparent_crc(p_1436->g_109.f6, "p_1436->g_109.f6", print_hash_value);
    transparent_crc(p_1436->g_109.f7, "p_1436->g_109.f7", print_hash_value);
    transparent_crc(p_1436->g_109.f8, "p_1436->g_109.f8", print_hash_value);
    transparent_crc(p_1436->g_175, "p_1436->g_175", print_hash_value);
    transparent_crc(p_1436->g_178.f0, "p_1436->g_178.f0", print_hash_value);
    transparent_crc(p_1436->g_181, "p_1436->g_181", print_hash_value);
    transparent_crc(p_1436->g_184.f0, "p_1436->g_184.f0", print_hash_value);
    transparent_crc(p_1436->g_184.f1, "p_1436->g_184.f1", print_hash_value);
    transparent_crc(p_1436->g_184.f2, "p_1436->g_184.f2", print_hash_value);
    transparent_crc(p_1436->g_184.f3, "p_1436->g_184.f3", print_hash_value);
    transparent_crc(p_1436->g_184.f4, "p_1436->g_184.f4", print_hash_value);
    transparent_crc(p_1436->g_184.f5, "p_1436->g_184.f5", print_hash_value);
    transparent_crc(p_1436->g_184.f6, "p_1436->g_184.f6", print_hash_value);
    transparent_crc(p_1436->g_184.f7, "p_1436->g_184.f7", print_hash_value);
    transparent_crc(p_1436->g_184.f8, "p_1436->g_184.f8", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1436->g_258[i][j][k].f0, "p_1436->g_258[i][j][k].f0", print_hash_value);
                transparent_crc(p_1436->g_258[i][j][k].f1, "p_1436->g_258[i][j][k].f1", print_hash_value);
                transparent_crc(p_1436->g_258[i][j][k].f2, "p_1436->g_258[i][j][k].f2", print_hash_value);
                transparent_crc(p_1436->g_258[i][j][k].f3, "p_1436->g_258[i][j][k].f3", print_hash_value);
                transparent_crc(p_1436->g_258[i][j][k].f4, "p_1436->g_258[i][j][k].f4", print_hash_value);
                transparent_crc(p_1436->g_258[i][j][k].f5, "p_1436->g_258[i][j][k].f5", print_hash_value);
                transparent_crc(p_1436->g_258[i][j][k].f6, "p_1436->g_258[i][j][k].f6", print_hash_value);
                transparent_crc(p_1436->g_258[i][j][k].f7, "p_1436->g_258[i][j][k].f7", print_hash_value);
                transparent_crc(p_1436->g_258[i][j][k].f8, "p_1436->g_258[i][j][k].f8", print_hash_value);

            }
        }
    }
    transparent_crc(p_1436->g_261.f0, "p_1436->g_261.f0", print_hash_value);
    transparent_crc(p_1436->g_261.f1, "p_1436->g_261.f1", print_hash_value);
    transparent_crc(p_1436->g_261.f2, "p_1436->g_261.f2", print_hash_value);
    transparent_crc(p_1436->g_261.f3, "p_1436->g_261.f3", print_hash_value);
    transparent_crc(p_1436->g_261.f4, "p_1436->g_261.f4", print_hash_value);
    transparent_crc(p_1436->g_261.f5, "p_1436->g_261.f5", print_hash_value);
    transparent_crc(p_1436->g_261.f6, "p_1436->g_261.f6", print_hash_value);
    transparent_crc(p_1436->g_261.f7, "p_1436->g_261.f7", print_hash_value);
    transparent_crc(p_1436->g_261.f8, "p_1436->g_261.f8", print_hash_value);
    transparent_crc(p_1436->g_268, "p_1436->g_268", print_hash_value);
    transparent_crc(p_1436->g_285.f0, "p_1436->g_285.f0", print_hash_value);
    transparent_crc(p_1436->g_285.f1, "p_1436->g_285.f1", print_hash_value);
    transparent_crc(p_1436->g_285.f2, "p_1436->g_285.f2", print_hash_value);
    transparent_crc(p_1436->g_285.f3, "p_1436->g_285.f3", print_hash_value);
    transparent_crc(p_1436->g_285.f4, "p_1436->g_285.f4", print_hash_value);
    transparent_crc(p_1436->g_285.f5, "p_1436->g_285.f5", print_hash_value);
    transparent_crc(p_1436->g_285.f6, "p_1436->g_285.f6", print_hash_value);
    transparent_crc(p_1436->g_285.f7, "p_1436->g_285.f7", print_hash_value);
    transparent_crc(p_1436->g_285.f8, "p_1436->g_285.f8", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1436->g_305[i], "p_1436->g_305[i]", print_hash_value);

    }
    transparent_crc(p_1436->g_306, "p_1436->g_306", print_hash_value);
    transparent_crc(p_1436->g_342, "p_1436->g_342", print_hash_value);
    transparent_crc(p_1436->g_357, "p_1436->g_357", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1436->g_368[i][j].f0, "p_1436->g_368[i][j].f0", print_hash_value);
            transparent_crc(p_1436->g_368[i][j].f1, "p_1436->g_368[i][j].f1", print_hash_value);
            transparent_crc(p_1436->g_368[i][j].f2, "p_1436->g_368[i][j].f2", print_hash_value);
            transparent_crc(p_1436->g_368[i][j].f3, "p_1436->g_368[i][j].f3", print_hash_value);
            transparent_crc(p_1436->g_368[i][j].f4, "p_1436->g_368[i][j].f4", print_hash_value);
            transparent_crc(p_1436->g_368[i][j].f5, "p_1436->g_368[i][j].f5", print_hash_value);
            transparent_crc(p_1436->g_368[i][j].f6, "p_1436->g_368[i][j].f6", print_hash_value);
            transparent_crc(p_1436->g_368[i][j].f7, "p_1436->g_368[i][j].f7", print_hash_value);
            transparent_crc(p_1436->g_368[i][j].f8, "p_1436->g_368[i][j].f8", print_hash_value);

        }
    }
    transparent_crc(p_1436->g_511, "p_1436->g_511", print_hash_value);
    transparent_crc(p_1436->g_559, "p_1436->g_559", print_hash_value);
    transparent_crc(p_1436->g_650.f0, "p_1436->g_650.f0", print_hash_value);
    transparent_crc(p_1436->g_650.f1, "p_1436->g_650.f1", print_hash_value);
    transparent_crc(p_1436->g_650.f2, "p_1436->g_650.f2", print_hash_value);
    transparent_crc(p_1436->g_650.f3, "p_1436->g_650.f3", print_hash_value);
    transparent_crc(p_1436->g_650.f4, "p_1436->g_650.f4", print_hash_value);
    transparent_crc(p_1436->g_650.f5, "p_1436->g_650.f5", print_hash_value);
    transparent_crc(p_1436->g_650.f6, "p_1436->g_650.f6", print_hash_value);
    transparent_crc(p_1436->g_650.f7, "p_1436->g_650.f7", print_hash_value);
    transparent_crc(p_1436->g_650.f8, "p_1436->g_650.f8", print_hash_value);
    transparent_crc(p_1436->g_689, "p_1436->g_689", print_hash_value);
    transparent_crc(p_1436->g_823.f0, "p_1436->g_823.f0", print_hash_value);
    transparent_crc(p_1436->g_823.f1, "p_1436->g_823.f1", print_hash_value);
    transparent_crc(p_1436->g_823.f2, "p_1436->g_823.f2", print_hash_value);
    transparent_crc(p_1436->g_823.f3, "p_1436->g_823.f3", print_hash_value);
    transparent_crc(p_1436->g_823.f4, "p_1436->g_823.f4", print_hash_value);
    transparent_crc(p_1436->g_823.f5, "p_1436->g_823.f5", print_hash_value);
    transparent_crc(p_1436->g_823.f6, "p_1436->g_823.f6", print_hash_value);
    transparent_crc(p_1436->g_823.f7, "p_1436->g_823.f7", print_hash_value);
    transparent_crc(p_1436->g_823.f8, "p_1436->g_823.f8", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1436->g_873[i][j].f0, "p_1436->g_873[i][j].f0", print_hash_value);
            transparent_crc(p_1436->g_873[i][j].f1, "p_1436->g_873[i][j].f1", print_hash_value);
            transparent_crc(p_1436->g_873[i][j].f2, "p_1436->g_873[i][j].f2", print_hash_value);
            transparent_crc(p_1436->g_873[i][j].f3, "p_1436->g_873[i][j].f3", print_hash_value);
            transparent_crc(p_1436->g_873[i][j].f4, "p_1436->g_873[i][j].f4", print_hash_value);
            transparent_crc(p_1436->g_873[i][j].f5, "p_1436->g_873[i][j].f5", print_hash_value);
            transparent_crc(p_1436->g_873[i][j].f6, "p_1436->g_873[i][j].f6", print_hash_value);
            transparent_crc(p_1436->g_873[i][j].f7, "p_1436->g_873[i][j].f7", print_hash_value);
            transparent_crc(p_1436->g_873[i][j].f8, "p_1436->g_873[i][j].f8", print_hash_value);

        }
    }
    transparent_crc(p_1436->g_890.f0, "p_1436->g_890.f0", print_hash_value);
    transparent_crc(p_1436->g_890.f1, "p_1436->g_890.f1", print_hash_value);
    transparent_crc(p_1436->g_890.f2, "p_1436->g_890.f2", print_hash_value);
    transparent_crc(p_1436->g_890.f3, "p_1436->g_890.f3", print_hash_value);
    transparent_crc(p_1436->g_890.f4, "p_1436->g_890.f4", print_hash_value);
    transparent_crc(p_1436->g_890.f5, "p_1436->g_890.f5", print_hash_value);
    transparent_crc(p_1436->g_890.f6, "p_1436->g_890.f6", print_hash_value);
    transparent_crc(p_1436->g_890.f7, "p_1436->g_890.f7", print_hash_value);
    transparent_crc(p_1436->g_890.f8, "p_1436->g_890.f8", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1436->g_907[i][j][k], "p_1436->g_907[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1436->g_923, "p_1436->g_923", print_hash_value);
    transparent_crc(p_1436->g_926, "p_1436->g_926", print_hash_value);
    transparent_crc(p_1436->g_927, "p_1436->g_927", print_hash_value);
    transparent_crc(p_1436->g_993, "p_1436->g_993", print_hash_value);
    transparent_crc(p_1436->g_1141, "p_1436->g_1141", print_hash_value);
    transparent_crc(p_1436->g_1162.f0, "p_1436->g_1162.f0", print_hash_value);
    transparent_crc(p_1436->g_1162.f1, "p_1436->g_1162.f1", print_hash_value);
    transparent_crc(p_1436->g_1162.f2, "p_1436->g_1162.f2", print_hash_value);
    transparent_crc(p_1436->g_1162.f3, "p_1436->g_1162.f3", print_hash_value);
    transparent_crc(p_1436->g_1162.f4, "p_1436->g_1162.f4", print_hash_value);
    transparent_crc(p_1436->g_1162.f5, "p_1436->g_1162.f5", print_hash_value);
    transparent_crc(p_1436->g_1162.f6, "p_1436->g_1162.f6", print_hash_value);
    transparent_crc(p_1436->g_1162.f7, "p_1436->g_1162.f7", print_hash_value);
    transparent_crc(p_1436->g_1162.f8, "p_1436->g_1162.f8", print_hash_value);
    transparent_crc(p_1436->g_1165.f0, "p_1436->g_1165.f0", print_hash_value);
    transparent_crc(p_1436->g_1165.f1, "p_1436->g_1165.f1", print_hash_value);
    transparent_crc(p_1436->g_1165.f2, "p_1436->g_1165.f2", print_hash_value);
    transparent_crc(p_1436->g_1165.f3, "p_1436->g_1165.f3", print_hash_value);
    transparent_crc(p_1436->g_1165.f4, "p_1436->g_1165.f4", print_hash_value);
    transparent_crc(p_1436->g_1165.f5, "p_1436->g_1165.f5", print_hash_value);
    transparent_crc(p_1436->g_1165.f6, "p_1436->g_1165.f6", print_hash_value);
    transparent_crc(p_1436->g_1165.f7, "p_1436->g_1165.f7", print_hash_value);
    transparent_crc(p_1436->g_1165.f8, "p_1436->g_1165.f8", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1436->g_1216[i][j][k], "p_1436->g_1216[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1436->g_1248.f0, "p_1436->g_1248.f0", print_hash_value);
    transparent_crc(p_1436->g_1248.f1, "p_1436->g_1248.f1", print_hash_value);
    transparent_crc(p_1436->g_1248.f2, "p_1436->g_1248.f2", print_hash_value);
    transparent_crc(p_1436->g_1248.f3, "p_1436->g_1248.f3", print_hash_value);
    transparent_crc(p_1436->g_1248.f4, "p_1436->g_1248.f4", print_hash_value);
    transparent_crc(p_1436->g_1248.f5, "p_1436->g_1248.f5", print_hash_value);
    transparent_crc(p_1436->g_1248.f6, "p_1436->g_1248.f6", print_hash_value);
    transparent_crc(p_1436->g_1248.f7, "p_1436->g_1248.f7", print_hash_value);
    transparent_crc(p_1436->g_1248.f8, "p_1436->g_1248.f8", print_hash_value);
    transparent_crc(p_1436->g_1314, "p_1436->g_1314", print_hash_value);
    transparent_crc(p_1436->g_1316, "p_1436->g_1316", print_hash_value);
    transparent_crc(p_1436->g_1328, "p_1436->g_1328", print_hash_value);
    transparent_crc(p_1436->g_1329, "p_1436->g_1329", print_hash_value);
    transparent_crc(p_1436->g_1376, "p_1436->g_1376", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
