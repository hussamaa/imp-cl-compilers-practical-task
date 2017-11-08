// -g 20,89,1 -l 4,1,1
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


// Seed: 3346891775

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   int32_t  f1;
   int32_t  f2;
};

union U1 {
   uint32_t  f0;
};

union U2 {
   struct S0  f0;
   int8_t * f1;
   volatile int32_t  f2;
   volatile struct S0  f3;
};

struct S3 {
    volatile int32_t g_3;
    int32_t g_4;
    volatile int32_t g_5;
    volatile int32_t g_6;
    volatile int32_t g_7;
    int32_t g_8;
    volatile int32_t g_9;
    volatile int32_t g_10;
    volatile int32_t g_11[10][1][9];
    volatile int32_t g_12[10][1][3];
    int32_t g_13;
    int32_t g_15;
    int8_t g_31;
    int32_t * volatile g_48;
    int8_t *g_52;
    int8_t **g_51;
    int32_t g_81;
    int32_t g_84;
    int32_t * volatile g_91;
    int32_t * volatile *g_90;
    uint64_t g_96;
    volatile uint64_t g_98;
    volatile uint64_t g_99;
    volatile uint64_t g_100;
    volatile uint64_t g_101;
    volatile uint64_t *g_97[10];
    uint32_t g_113;
    uint16_t g_128;
    uint64_t g_133;
    struct S0 g_138;
    int8_t g_150[7];
    int64_t g_195;
    int16_t g_198;
    int16_t g_207;
    uint8_t g_212;
    union U2 g_218[6];
    int32_t *g_220[2];
    int32_t **g_219;
    int64_t g_232;
    uint32_t g_253;
    union U1 g_316;
    uint32_t *g_383;
    uint32_t **g_382;
    int64_t **g_468;
    struct S0 * volatile g_492;
    union U2 *g_515;
    union U2 ** volatile g_514;
    struct S0 * volatile g_550[6];
    uint8_t *g_567[3][10][6];
    uint8_t * volatile *g_566;
    union U1 *g_591[8];
    union U1 ** volatile g_590;
    int32_t g_626[6];
    int32_t * volatile g_654;
    union U2 g_712[8];
    volatile int64_t g_724;
    volatile int64_t *g_723[6][1][4];
    volatile int64_t **g_722;
    union U2 ** volatile g_758[2];
    union U2 ** volatile g_759;
    uint32_t g_770[5];
    uint32_t g_785;
    int8_t g_798;
    uint16_t *g_816;
    uint16_t **g_815;
    volatile int64_t * volatile * volatile * volatile * volatile g_822;
    union U2 g_895;
    union U2 g_920;
    int32_t g_1021;
    struct S0 * volatile g_1030;
    uint8_t g_1031;
    uint16_t g_1066;
    struct S0 * volatile g_1070;
    volatile union U2 g_1116[6][2][7];
    struct S0 * volatile g_1144[10];
    struct S0 * volatile g_1145;
    struct S0 * volatile g_1154;
    struct S0 * volatile g_1155;
    volatile union U2 g_1222;
    volatile uint32_t * volatile ***g_1297;
    volatile union U2 g_1311;
    int8_t g_1331;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S3 * p_1332);
int32_t * func_24(int8_t * p_25, int32_t * p_26, int8_t * p_27, int8_t * p_28, int32_t * p_29, struct S3 * p_1332);
int8_t ** func_32(int32_t  p_33, int8_t  p_34, int32_t * p_35, struct S3 * p_1332);
uint16_t  func_37(int32_t * p_38, int8_t * p_39, int8_t ** p_40, int32_t * p_41, struct S3 * p_1332);
int32_t * func_42(int32_t  p_43, int8_t ** p_44, int64_t  p_45, struct S3 * p_1332);
int8_t ** func_46(int32_t  p_47, struct S3 * p_1332);
int32_t * func_54(struct S0  p_55, uint32_t  p_56, uint16_t  p_57, struct S3 * p_1332);
struct S0  func_58(uint32_t  p_59, int32_t * p_60, struct S0  p_61, struct S3 * p_1332);
int32_t * func_62(int32_t  p_63, uint32_t  p_64, int8_t ** p_65, int8_t * p_66, int8_t ** p_67, struct S3 * p_1332);
int8_t * func_68(int8_t * p_69, struct S3 * p_1332);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1332->g_4 p_1332->g_8 p_1332->g_722 p_1332->g_723 p_1332->g_724 p_1332->g_895.f0.f1 p_1332->g_15 p_1332->g_51 p_1332->g_52 p_1332->g_31 p_1332->g_383 p_1332->g_316.f0 p_1332->g_219 p_1332->g_220 p_1332->g_13 p_1332->g_815 p_1332->g_816 p_1332->g_128 p_1332->g_590 p_1332->g_591 p_1332->g_253
 * writes: p_1332->g_4 p_1332->g_8 p_1332->g_13 p_1332->g_207
 */
uint32_t  func_1(struct S3 * p_1332)
{ /* block id: 4 */
    uint64_t l_2[4][7] = {{0xDCDF5EF889A278C0L,0x7A8CF1D65F4E26C1L,2UL,6UL,2UL,0x7A8CF1D65F4E26C1L,0xDCDF5EF889A278C0L},{0xDCDF5EF889A278C0L,0x7A8CF1D65F4E26C1L,2UL,6UL,2UL,0x7A8CF1D65F4E26C1L,0xDCDF5EF889A278C0L},{0xDCDF5EF889A278C0L,0x7A8CF1D65F4E26C1L,2UL,6UL,2UL,0x7A8CF1D65F4E26C1L,0xDCDF5EF889A278C0L},{0xDCDF5EF889A278C0L,0x7A8CF1D65F4E26C1L,2UL,6UL,2UL,0x7A8CF1D65F4E26C1L,0xDCDF5EF889A278C0L}};
    int32_t l_20 = 0x5D0685B9L;
    uint32_t l_21 = 0x21365D5AL;
    uint16_t *l_1237 = &p_1332->g_1066;
    int32_t l_1275[5] = {9L,9L,9L,9L,9L};
    union U1 *l_1288 = (void*)0;
    int i, j;
    for (p_1332->g_4 = 3; (p_1332->g_4 >= 0); p_1332->g_4 -= 1)
    { /* block id: 7 */
        int64_t l_19 = (-1L);
        uint8_t l_1263 = 0x22L;
        int32_t l_1274 = (-1L);
        int32_t l_1276 = 0x3DE8A23FL;
        union U1 *l_1289 = &p_1332->g_316;
        struct S0 l_1321 = {1UL,0L,0x1B71630FL};
        for (p_1332->g_8 = 0; (p_1332->g_8 <= 3); p_1332->g_8 += 1)
        { /* block id: 10 */
            int8_t *l_30 = &p_1332->g_31;
            uint16_t l_1246 = 0xA59BL;
            union U1 *l_1253 = &p_1332->g_316;
            union U1 **l_1254 = &l_1253;
            int16_t *l_1255 = (void*)0;
            int16_t *l_1256 = (void*)0;
            int16_t *l_1257 = &p_1332->g_207;
            uint64_t *l_1264 = &l_2[p_1332->g_4][(p_1332->g_8 + 2)];
            int32_t l_1273[10] = {0x4AAD969CL,0x4AAD969CL,0x4AAD969CL,0x4AAD969CL,0x4AAD969CL,0x4AAD969CL,0x4AAD969CL,0x4AAD969CL,0x4AAD969CL,0x4AAD969CL};
            uint8_t l_1278 = 0UL;
            int32_t * volatile l_1283[6][4] = {{&p_1332->g_84,(void*)0,&p_1332->g_84,&p_1332->g_84},{&p_1332->g_84,(void*)0,&p_1332->g_84,&p_1332->g_84},{&p_1332->g_84,(void*)0,&p_1332->g_84,&p_1332->g_84},{&p_1332->g_84,(void*)0,&p_1332->g_84,&p_1332->g_84},{&p_1332->g_84,(void*)0,&p_1332->g_84,&p_1332->g_84},{&p_1332->g_84,(void*)0,&p_1332->g_84,&p_1332->g_84}};
            uint64_t l_1285 = 0xB46DD9218AB0A9A3L;
            uint64_t l_1302 = 0xDFCCDA083776624EL;
            int i, j;
            for (p_1332->g_13 = 0; (p_1332->g_13 <= 3); p_1332->g_13 += 1)
            { /* block id: 13 */
                int32_t *l_14 = &p_1332->g_15;
                int32_t *l_16 = &p_1332->g_15;
                int32_t *l_17[6][3][4] = {{{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0},{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0},{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0}},{{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0},{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0},{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0}},{{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0},{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0},{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0}},{{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0},{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0},{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0}},{{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0},{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0},{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0}},{{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0},{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0},{&p_1332->g_13,&p_1332->g_4,(void*)0,(void*)0}}};
                int64_t l_18 = 1L;
                int i, j, k;
                l_21++;
            }
            (**p_1332->g_219) |= ((safe_add_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((((void*)0 == l_1237) , (safe_mul_func_uint8_t_u_u(6UL, (safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((l_2[p_1332->g_4][(p_1332->g_8 + 2)] || (~(safe_lshift_func_int8_t_s_s(l_21, 4)))), ((l_1246 & (((safe_rshift_func_int8_t_s_u((-1L), (0x20L < ((**p_1332->g_722) && l_21)))) >= p_1332->g_895.f0.f1) == p_1332->g_15)) ^ l_2[0][3]))), l_19))))), (**p_1332->g_51))), l_19)), (*p_1332->g_383))) != 0L), l_1246)) , 1L);
            (**p_1332->g_219) = ((safe_rshift_func_uint8_t_u_u((((((l_21 == ((safe_rshift_func_uint16_t_u_s((**p_1332->g_815), ((*l_1257) = ((*p_1332->g_816) && (((*l_1254) = l_1253) != (*p_1332->g_590)))))) > ((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((l_19 , (safe_unary_minus_func_uint64_t_u((((**p_1332->g_51) < (~(((**p_1332->g_219) > (0x98L <= l_19)) == l_1263))) , l_21)))), (*p_1332->g_52))), l_2[p_1332->g_4][(p_1332->g_8 + 2)])) & 0x2B0A9BA6L))) < 0UL) == l_2[p_1332->g_4][(p_1332->g_8 + 2)]) && 0x64L) >= p_1332->g_253), 4)) >= l_2[3][2]);
        }
    }
    return l_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_1332->g_48 p_1332->g_15 p_1332->g_51 p_1332->g_4 p_1332->g_31 p_1332->g_52 p_1332->g_81 p_1332->g_84 p_1332->g_90 p_1332->g_97 p_1332->g_128 p_1332->g_96 p_1332->g_113 p_1332->g_13 p_1332->g_91 p_1332->g_138 p_1332->g_100 p_1332->g_150 p_1332->g_9 p_1332->g_6 p_1332->g_198 p_1332->g_3 p_1332->g_207 p_1332->g_212 p_1332->g_12 p_1332->g_218 p_1332->g_219 p_1332->g_218.f0.f0 p_1332->g_220 p_1332->g_195 p_1332->g_316 p_1332->g_232 p_1332->g_218.f0 p_1332->g_11 p_1332->g_8 p_1332->g_383 p_1332->g_316.f0 p_1332->g_133 p_1332->g_654 p_1332->g_10 p_1332->g_712 p_1332->g_722 p_1332->g_723 p_1332->g_724 p_1332->g_382 p_1332->g_626 p_1332->g_514 p_1332->g_515 p_1332->g_759 p_1332->g_770 p_1332->g_712.f0.f1 p_1332->g_785 p_1332->g_815 p_1332->g_822 p_1332->g_798 p_1332->g_816 p_1332->g_712.f0.f2 p_1332->g_920 p_1332->g_1030 p_1332->g_1031 p_1332->g_920.f0 p_1332->g_1070 p_1332->g_895.f0.f1 p_1332->g_1116 p_1332->g_1155 p_1332->g_590 p_1332->g_591 p_1332->g_1066
 * writes: p_1332->g_15 p_1332->g_31 p_1332->g_81 p_1332->g_84 p_1332->g_96 p_1332->g_91 p_1332->g_113 p_1332->g_128 p_1332->g_138.f1 p_1332->g_195 p_1332->g_198 p_1332->g_207 p_1332->g_212 p_1332->g_150 p_1332->g_232 p_1332->g_253 p_1332->g_52 p_1332->g_220 p_1332->g_316.f0 p_1332->g_138.f0 p_1332->g_218 p_1332->g_133 p_1332->g_12 p_1332->g_138.f2 p_1332->g_567 p_1332->g_468 p_1332->g_515 p_1332->g_770 p_1332->g_815 p_1332->g_798 p_1332->g_626 p_1332->g_712.f0.f2 p_1332->g_712.f0.f1 p_1332->g_1021 p_1332->g_920.f0 p_1332->g_1066 p_1332->g_785 p_1332->g_138 p_1332->g_566 p_1332->g_895.f0
 */
int32_t * func_24(int8_t * p_25, int32_t * p_26, int8_t * p_27, int8_t * p_28, int32_t * p_29, struct S3 * p_1332)
{ /* block id: 15 */
    uint8_t l_36 = 5UL;
    struct S0 l_796[8][2][5] = {{{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}},{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}}},{{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}},{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}}},{{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}},{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}}},{{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}},{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}}},{{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}},{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}}},{{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}},{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}}},{{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}},{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}}},{{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}},{{0UL,0x0339A96FL,-1L},{0UL,0x0339A96FL,-1L},{0x1CC167F5L,-8L,0L},{0UL,1L,0x057A7E75L},{0xDBE69254L,1L,9L}}}};
    int8_t *l_797[6] = {&p_1332->g_798,&p_1332->g_798,&p_1332->g_798,&p_1332->g_798,&p_1332->g_798,&p_1332->g_798};
    int32_t *l_799[2];
    int32_t l_1205 = 0x3DB84ED0L;
    int8_t **l_1228 = &p_1332->g_52;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_799[i] = &p_1332->g_626[3];
    l_1228 = func_32((!(((((*p_25) = (l_36 , (func_37(func_42(l_36, func_46(l_36, p_1332), p_1332->g_4, p_1332), (l_796[1][0][0] , l_797[2]), &l_797[5], l_799[1], p_1332) != p_1332->g_1031))) >= 255UL) != 18446744073709551615UL) > p_1332->g_1031)), l_1205, l_799[1], p_1332);
    return l_799[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1332->g_219 p_1332->g_90
 * writes: p_1332->g_626 p_1332->g_220 p_1332->g_91
 */
int8_t ** func_32(int32_t  p_33, int8_t  p_34, int32_t * p_35, struct S3 * p_1332)
{ /* block id: 673 */
    int32_t *l_1206 = &p_1332->g_4;
    struct S0 l_1207 = {4294967295UL,0x4265B40EL,7L};
    uint64_t *l_1223 = &p_1332->g_96;
    int64_t *l_1224 = &p_1332->g_195;
    int64_t *l_1225 = &p_1332->g_232;
    uint32_t *l_1226 = &p_1332->g_113;
    int8_t **l_1227[3];
    int i;
    for (i = 0; i < 3; i++)
        l_1227[i] = (void*)0;
    (*p_35) = ((void*)0 != l_1206);
    (*p_1332->g_90) = ((*p_1332->g_219) = p_35);
    return l_1227[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1332->g_198 p_1332->g_382 p_1332->g_383 p_1332->g_316.f0 p_1332->g_815 p_1332->g_822 p_1332->g_798 p_1332->g_212 p_1332->g_51 p_1332->g_52 p_1332->g_31 p_1332->g_218.f0.f2 p_1332->g_48 p_1332->g_15 p_1332->g_113 p_1332->g_219 p_1332->g_626 p_1332->g_195 p_1332->g_81 p_1332->g_759 p_1332->g_515 p_1332->g_816 p_1332->g_128 p_1332->g_712.f0.f2 p_1332->g_920 p_1332->g_84 p_1332->g_96 p_1332->g_654 p_1332->g_770 p_1332->g_9 p_1332->g_90 p_1332->g_1030 p_1332->g_1031 p_1332->g_150 p_1332->g_920.f0 p_1332->g_785 p_1332->g_1070 p_1332->g_895.f0.f1 p_1332->g_133 p_1332->g_722 p_1332->g_723 p_1332->g_724 p_1332->g_1116 p_1332->g_1155 p_1332->g_590 p_1332->g_591 p_1332->g_316 p_1332->g_207 p_1332->g_1066
 * writes: p_1332->g_198 p_1332->g_113 p_1332->g_815 p_1332->g_798 p_1332->g_207 p_1332->g_626 p_1332->g_15 p_1332->g_232 p_1332->g_316.f0 p_1332->g_220 p_1332->g_31 p_1332->g_195 p_1332->g_712.f0.f2 p_1332->g_515 p_1332->g_712.f0.f1 p_1332->g_128 p_1332->g_81 p_1332->g_84 p_1332->g_96 p_1332->g_770 p_1332->g_1021 p_1332->g_91 p_1332->g_920.f0 p_1332->g_150 p_1332->g_138.f2 p_1332->g_1066 p_1332->g_785 p_1332->g_138 p_1332->g_566 p_1332->g_133 p_1332->g_895.f0 p_1332->g_212
 */
uint16_t  func_37(int32_t * p_38, int8_t * p_39, int8_t ** p_40, int32_t * p_41, struct S3 * p_1332)
{ /* block id: 445 */
    uint32_t l_812 = 1UL;
    int64_t ***l_824 = &p_1332->g_468;
    int64_t ****l_823[2][8] = {{&l_824,&l_824,&l_824,&l_824,&l_824,&l_824,&l_824,&l_824},{&l_824,&l_824,&l_824,&l_824,&l_824,&l_824,&l_824,&l_824}};
    uint32_t l_827 = 0x2F976A37L;
    int16_t l_853 = 0x087AL;
    union U2 *l_894 = &p_1332->g_895;
    uint64_t *l_903 = &p_1332->g_96;
    uint32_t **l_950 = &p_1332->g_383;
    int32_t l_958 = 0x4511A24CL;
    int32_t l_977 = 1L;
    int32_t l_978 = 0x490AA350L;
    int32_t l_982[2];
    uint16_t l_990 = 1UL;
    union U1 l_998 = {0xDE2E9120L};
    uint16_t ***l_1020 = &p_1332->g_815;
    uint32_t l_1115 = 0xC8A95180L;
    struct S0 l_1120 = {0UL,-1L,-1L};
    int64_t l_1147 = 0x4E8941EE11F67145L;
    uint64_t l_1163 = 0xA8C2B64CAA5FDE43L;
    uint8_t *l_1166 = (void*)0;
    uint8_t *l_1167 = &p_1332->g_212;
    int8_t l_1168[4];
    int8_t l_1169 = (-10L);
    int i, j;
    for (i = 0; i < 2; i++)
        l_982[i] = 0x2FDEE589L;
    for (i = 0; i < 4; i++)
        l_1168[i] = 0x5CL;
    for (p_1332->g_198 = 0; (p_1332->g_198 >= 5); p_1332->g_198++)
    { /* block id: 448 */
        uint8_t l_808[5];
        uint32_t *l_811 = &p_1332->g_113;
        uint16_t ***l_817 = &p_1332->g_815;
        int16_t *l_825 = (void*)0;
        int16_t *l_826 = &p_1332->g_207;
        uint64_t *l_831 = &p_1332->g_133;
        uint64_t **l_830[7][6] = {{&l_831,&l_831,&l_831,&l_831,&l_831,&l_831},{&l_831,&l_831,&l_831,&l_831,&l_831,&l_831},{&l_831,&l_831,&l_831,&l_831,&l_831,&l_831},{&l_831,&l_831,&l_831,&l_831,&l_831,&l_831},{&l_831,&l_831,&l_831,&l_831,&l_831,&l_831},{&l_831,&l_831,&l_831,&l_831,&l_831,&l_831},{&l_831,&l_831,&l_831,&l_831,&l_831,&l_831}};
        uint32_t l_855[10] = {3UL,0x9D56A405L,3UL,3UL,0x9D56A405L,3UL,3UL,0x9D56A405L,3UL,3UL};
        int32_t l_856[5];
        int32_t *l_857 = (void*)0;
        struct S0 l_873 = {0x7903921AL,0x56697D9DL,0x301F0A74L};
        union U1 l_937 = {0x2C1319ACL};
        int32_t l_984 = 0x46958CF0L;
        int32_t l_989 = 1L;
        union U1 l_1003 = {1UL};
        int32_t l_1043 = 0x2AD51809L;
        uint8_t **l_1072 = &p_1332->g_567[0][0][0];
        union U1 **l_1143 = &p_1332->g_591[0];
        uint32_t **l_1150 = &p_1332->g_383;
        int i, j;
        for (i = 0; i < 5; i++)
            l_808[i] = 0x12L;
        for (i = 0; i < 5; i++)
            l_856[i] = 0L;
        if ((((safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_s(l_808[0], (safe_mul_func_int16_t_s_s(((l_808[0] , (((*l_811) = (**p_1332->g_382)) || (l_812 & l_808[0]))) < (l_808[0] >= (((safe_mul_func_uint8_t_u_u((((*l_817) = p_1332->g_815) == (void*)0), ((((safe_div_func_int16_t_s_s(((*l_826) = ((((*p_39) ^= (safe_div_func_uint16_t_u_u(((p_1332->g_822 == l_823[1][0]) == 0x22C33AFEL), l_808[0]))) >= l_812) ^ 0x5BL)), l_808[0])) != l_812) && 1UL) && l_812))) | 1UL) < p_1332->g_212))), l_827)))) != l_808[1]) <= (**p_1332->g_382)), l_808[0])), 1)) && 0x50579B4D1CACCD2EL) < l_812))
        { /* block id: 453 */
            uint64_t l_852 = 0x8323E7120841B4FFL;
            int32_t l_854 = (-1L);
            struct S0 l_885 = {0xE2BC38A9L,0x5E574FD6L,-1L};
            uint32_t l_897 = 4294967295UL;
            if (l_827)
                break;
            l_857 = func_62((safe_add_func_uint8_t_u_u(((65535UL && (((((&p_1332->g_97[8] != (l_830[1][0] = l_830[1][0])) , ((safe_rshift_func_uint16_t_u_u((0x3CL ^ (**p_1332->g_51)), 4)) ^ ((safe_mod_func_int8_t_s_s((*p_39), ((l_808[0] & (((l_854 = ((safe_div_func_uint64_t_u_u(((((safe_sub_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((-7L) >= (safe_add_func_int64_t_s_s((safe_sub_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((((*p_41) = (((l_852 |= (((safe_add_func_uint64_t_u_u((((((!(-3L)) && (-10L)) != 0UL) <= l_808[2]) , l_812), l_827)) , p_1332->g_218[0].f0.f2) , l_808[0])) >= (-1L)) ^ l_827)) == l_853), 9)), l_854)) && 0L), 254UL)), l_855[7]))), l_855[7])), 65535UL)) & 1L) , (**p_1332->g_51)) || l_853), l_855[1])) != l_812)) & 0L) < l_827)) || l_852))) ^ 0x36L))) > (*p_1332->g_48)) == (**p_1332->g_51)) , 7L)) || l_856[1]), (**p_1332->g_51))), p_1332->g_113, &p_1332->g_52, (*p_1332->g_51), &p_1332->g_52, p_1332);
            for (p_1332->g_15 = 0; (p_1332->g_15 <= (-30)); p_1332->g_15 = safe_sub_func_uint64_t_u_u(p_1332->g_15, 4))
            { /* block id: 462 */
                uint32_t ***l_865 = (void*)0;
                uint16_t ***l_870 = &p_1332->g_815;
                struct S0 l_882 = {1UL,5L,0x2589263EL};
                for (p_1332->g_232 = 1; (p_1332->g_232 >= 0); p_1332->g_232 -= 1)
                { /* block id: 465 */
                    uint32_t ***l_866[5][2][6] = {{{(void*)0,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,(void*)0},{(void*)0,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,(void*)0}},{{(void*)0,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,(void*)0},{(void*)0,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,(void*)0}},{{(void*)0,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,(void*)0},{(void*)0,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,(void*)0}},{{(void*)0,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,(void*)0},{(void*)0,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,(void*)0}},{{(void*)0,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,(void*)0},{(void*)0,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,&p_1332->g_382,(void*)0}}};
                    uint32_t ****l_867 = &l_866[2][0][3];
                    int32_t l_868 = 0x5C346F57L;
                    uint16_t ***l_869 = &p_1332->g_815;
                    struct S0 *l_883 = (void*)0;
                    struct S0 *l_884 = (void*)0;
                    int16_t **l_886[1][4][4] = {{{&l_826,&l_826,&l_825,&l_826},{&l_826,&l_826,&l_825,&l_826},{&l_826,&l_826,&l_825,&l_826},{&l_826,&l_826,&l_825,&l_826}}};
                    int32_t *l_892[3];
                    union U2 **l_893[1];
                    int16_t l_896 = 4L;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_892[i] = (void*)0;
                    for (i = 0; i < 1; i++)
                        l_893[i] = &p_1332->g_515;
                    for (p_1332->g_316.f0 = 0; (p_1332->g_316.f0 <= 7); p_1332->g_316.f0 += 1)
                    { /* block id: 468 */
                        uint64_t l_860 = 2UL;
                        (*p_1332->g_219) = &l_854;
                        l_860--;
                    }
                    (*p_41) &= ((safe_mul_func_uint8_t_u_u(((l_865 == ((*l_867) = l_866[2][1][1])) & l_868), l_827)) || (l_869 != l_870));
                    (*p_41) = ((((*p_1332->g_52) = (safe_lshift_func_int8_t_s_s((*p_1332->g_52), 0))) , l_873) , (safe_rshift_func_uint16_t_u_s(((((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((((*p_1332->g_759) = (((((l_885 = l_882) , l_886[0][3][2]) == (((p_1332->g_195 ^= l_853) && (((0x299CC10211C45268L > ((safe_unary_minus_func_uint16_t_u(0xFFC0L)) && (((safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((p_1332->g_712[7].f0.f2 = l_882.f2) , ((((*l_857) | l_882.f0) , l_868) <= (*l_857))), l_852)), 1)) || 0x1CA13B9BL) & (-10L)))) <= l_868) || l_882.f0)) , (void*)0)) > l_812) , (*p_1332->g_759))) == l_894), (*l_857))), l_853)), 254UL)) || 65535UL) ^ l_896) < 0xD035L), 15)));
                }
            }
            if (l_897)
                break;
        }
        else
        { /* block id: 483 */
            uint32_t l_900[7];
            int32_t *l_904 = &p_1332->g_81;
            int i;
            for (i = 0; i < 7; i++)
                l_900[i] = 0x61B0DA21L;
            (*l_904) &= (safe_div_func_int64_t_s_s(((((p_1332->g_712[7].f0.f1 = l_853) , (l_900[6] >= 0x7BE6FD7DL)) > l_900[6]) | ((*p_41) = (((***l_817) = l_827) >= (safe_sub_func_int8_t_s_s((l_903 == (void*)0), (**p_40)))))), 0x41AE86A40ADED793L));
        }
        for (p_1332->g_316.f0 = 0; (p_1332->g_316.f0 == 4); ++p_1332->g_316.f0)
        { /* block id: 491 */
            int16_t l_917 = 0L;
            int32_t l_975 = 0x134C740CL;
            int32_t l_988[1][3];
            union U1 *l_999 = &p_1332->g_316;
            struct S0 l_1016 = {0UL,0x634A1F9CL,1L};
            union U2 *l_1055[2];
            int64_t **l_1058 = (void*)0;
            uint32_t l_1071 = 0x5539938CL;
            struct S0 *l_1119[10][5] = {{(void*)0,&p_1332->g_895.f0,&p_1332->g_138,(void*)0,&p_1332->g_218[0].f0},{(void*)0,&p_1332->g_895.f0,&p_1332->g_138,(void*)0,&p_1332->g_218[0].f0},{(void*)0,&p_1332->g_895.f0,&p_1332->g_138,(void*)0,&p_1332->g_218[0].f0},{(void*)0,&p_1332->g_895.f0,&p_1332->g_138,(void*)0,&p_1332->g_218[0].f0},{(void*)0,&p_1332->g_895.f0,&p_1332->g_138,(void*)0,&p_1332->g_218[0].f0},{(void*)0,&p_1332->g_895.f0,&p_1332->g_138,(void*)0,&p_1332->g_218[0].f0},{(void*)0,&p_1332->g_895.f0,&p_1332->g_138,(void*)0,&p_1332->g_218[0].f0},{(void*)0,&p_1332->g_895.f0,&p_1332->g_138,(void*)0,&p_1332->g_218[0].f0},{(void*)0,&p_1332->g_895.f0,&p_1332->g_138,(void*)0,&p_1332->g_218[0].f0},{(void*)0,&p_1332->g_895.f0,&p_1332->g_138,(void*)0,&p_1332->g_218[0].f0}};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_988[i][j] = 8L;
            }
            for (i = 0; i < 2; i++)
                l_1055[i] = &p_1332->g_712[7];
            if ((~(((((**p_40) = ((**p_1332->g_51) |= (safe_div_func_int32_t_s_s((*p_41), (safe_sub_func_int64_t_s_s((l_812 | (safe_add_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(7L, ((((safe_mod_func_uint16_t_u_u((**p_1332->g_815), l_917)) && (0x46BEC74FL && (*p_41))) & ((((0x96L | (((safe_mod_func_int8_t_s_s((l_812 == (*p_39)), 247UL)) || l_812) & 0x28D0L)) , &l_857) == &l_857) == p_1332->g_712[7].f0.f2)) == l_917))) <= l_827), (-1L)))), 1L)))))) == 1L) < l_917) < l_873.f2)))
            { /* block id: 494 */
                uint16_t l_927 = 0UL;
                int64_t l_936[3];
                uint64_t l_938[8][3][10] = {{{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL}},{{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL}},{{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL}},{{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL}},{{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL}},{{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL}},{{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL}},{{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL},{0x48D1B89CB82018B9L,0xA333E941BC3028EDL,18446744073709551615UL,0x74FD0F830836AAB9L,18446744073709551615UL,18446744073709551613UL,18446744073709551614UL,0x2ADD828AF83468D2L,0x0780555B64C1FFB6L,1UL}}};
                int32_t *l_939 = &p_1332->g_84;
                int32_t l_985 = 0L;
                uint32_t l_993 = 5UL;
                int8_t l_1000[2][1][5];
                struct S0 l_1019 = {4294967295UL,0x3DF00847L,0x557C3054L};
                uint64_t *l_1047 = &l_938[1][0][4];
                uint16_t **l_1048 = &p_1332->g_816;
                union U2 *l_1053[5][3][9] = {{{&p_1332->g_218[0],&p_1332->g_712[7],&p_1332->g_712[7],&p_1332->g_712[4],(void*)0,(void*)0,&p_1332->g_712[4],&p_1332->g_712[7],&p_1332->g_712[0]},{&p_1332->g_218[0],&p_1332->g_712[7],&p_1332->g_712[7],&p_1332->g_712[4],(void*)0,(void*)0,&p_1332->g_712[4],&p_1332->g_712[7],&p_1332->g_712[0]},{&p_1332->g_218[0],&p_1332->g_712[7],&p_1332->g_712[7],&p_1332->g_712[4],(void*)0,(void*)0,&p_1332->g_712[4],&p_1332->g_712[7],&p_1332->g_712[0]}},{{&p_1332->g_218[0],&p_1332->g_712[7],&p_1332->g_712[7],&p_1332->g_712[4],(void*)0,(void*)0,&p_1332->g_712[4],&p_1332->g_712[7],&p_1332->g_712[0]},{&p_1332->g_218[0],&p_1332->g_712[7],&p_1332->g_712[7],&p_1332->g_712[4],(void*)0,(void*)0,&p_1332->g_712[4],&p_1332->g_712[7],&p_1332->g_712[0]},{&p_1332->g_218[0],&p_1332->g_712[7],&p_1332->g_712[7],&p_1332->g_712[4],(void*)0,(void*)0,&p_1332->g_712[4],&p_1332->g_712[7],&p_1332->g_712[0]}},{{&p_1332->g_218[0],&p_1332->g_712[7],&p_1332->g_712[7],&p_1332->g_712[4],(void*)0,(void*)0,&p_1332->g_712[4],&p_1332->g_712[7],&p_1332->g_712[0]},{&p_1332->g_218[0],&p_1332->g_712[7],&p_1332->g_712[7],&p_1332->g_712[4],(void*)0,(void*)0,&p_1332->g_712[4],&p_1332->g_712[7],&p_1332->g_712[0]},{&p_1332->g_218[0],&p_1332->g_712[7],&p_1332->g_712[7],&p_1332->g_712[4],(void*)0,(void*)0,&p_1332->g_712[4],&p_1332->g_712[7],&p_1332->g_712[0]}},{{&p_1332->g_218[0],&p_1332->g_712[7],&p_1332->g_712[7],&p_1332->g_712[4],(void*)0,(void*)0,&p_1332->g_712[4],&p_1332->g_712[7],&p_1332->g_712[0]},{&p_1332->g_218[0],&p_1332->g_712[7],&p_1332->g_712[7],&p_1332->g_712[4],(void*)0,(void*)0,&p_1332->g_712[4],&p_1332->g_712[7],&p_1332->g_712[0]},{&p_1332->g_218[0],&p_1332->g_712[7],&p_1332->g_712[7],&p_1332->g_712[4],(void*)0,(void*)0,&p_1332->g_712[4],&p_1332->g_712[7],&p_1332->g_712[0]}},{{&p_1332->g_218[0],&p_1332->g_712[7],&p_1332->g_712[7],&p_1332->g_712[4],(void*)0,(void*)0,&p_1332->g_712[4],&p_1332->g_712[7],&p_1332->g_712[0]},{&p_1332->g_218[0],&p_1332->g_712[7],&p_1332->g_712[7],&p_1332->g_712[4],(void*)0,(void*)0,&p_1332->g_712[4],&p_1332->g_712[7],&p_1332->g_712[0]},{&p_1332->g_218[0],&p_1332->g_712[7],&p_1332->g_712[7],&p_1332->g_712[4],(void*)0,(void*)0,&p_1332->g_712[4],&p_1332->g_712[7],&p_1332->g_712[0]}}};
                union U2 **l_1054 = &l_1053[2][2][5];
                int64_t *l_1057 = &l_936[2];
                int64_t **l_1056 = &l_1057;
                uint8_t ***l_1073[5][3][6] = {{{&l_1072,&l_1072,&l_1072,&l_1072,&l_1072,&l_1072},{&l_1072,&l_1072,&l_1072,&l_1072,&l_1072,&l_1072},{&l_1072,&l_1072,&l_1072,&l_1072,&l_1072,&l_1072}},{{&l_1072,&l_1072,&l_1072,&l_1072,&l_1072,&l_1072},{&l_1072,&l_1072,&l_1072,&l_1072,&l_1072,&l_1072},{&l_1072,&l_1072,&l_1072,&l_1072,&l_1072,&l_1072}},{{&l_1072,&l_1072,&l_1072,&l_1072,&l_1072,&l_1072},{&l_1072,&l_1072,&l_1072,&l_1072,&l_1072,&l_1072},{&l_1072,&l_1072,&l_1072,&l_1072,&l_1072,&l_1072}},{{&l_1072,&l_1072,&l_1072,&l_1072,&l_1072,&l_1072},{&l_1072,&l_1072,&l_1072,&l_1072,&l_1072,&l_1072},{&l_1072,&l_1072,&l_1072,&l_1072,&l_1072,&l_1072}},{{&l_1072,&l_1072,&l_1072,&l_1072,&l_1072,&l_1072},{&l_1072,&l_1072,&l_1072,&l_1072,&l_1072,&l_1072},{&l_1072,&l_1072,&l_1072,&l_1072,&l_1072,&l_1072}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_936[i] = 0x3D87979485699AE6L;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_1000[i][j][k] = (-1L);
                    }
                }
                if ((p_1332->g_920 , (safe_lshift_func_int8_t_s_s(((*p_1332->g_52) = ((**p_1332->g_382) > ((*l_939) ^= (safe_div_func_int64_t_s_s(((((safe_rshift_func_uint8_t_u_s(0UL, ((l_927 , ((l_927 ^ 0x6AL) , (safe_mul_func_int16_t_s_s(((+((((~((-1L) == ((safe_add_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(l_927, (safe_sub_func_int8_t_s_s((**p_1332->g_51), l_936[2])))) > l_936[0]), l_853)) || 1UL))) , l_937) , (**p_1332->g_382)) ^ (*p_41))) != l_938[2][1][3]), l_812)))) | 4294967295UL))) <= (**p_1332->g_51)) | 18446744073709551610UL) | 1UL), l_827))))), (**p_40)))))
                { /* block id: 497 */
                    int64_t l_959[2];
                    int32_t l_979 = 0x3611CBC5L;
                    int32_t l_986 = 3L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_959[i] = 0L;
                    l_939 = (void*)0;
                    for (p_1332->g_15 = 28; (p_1332->g_15 != 0); p_1332->g_15--)
                    { /* block id: 501 */
                        int8_t l_953 = 2L;
                        uint16_t ***l_954 = &p_1332->g_815;
                        if ((*p_1332->g_48))
                            break;
                        l_959[1] |= (((safe_sub_func_int32_t_s_s(((l_958 = ((safe_mod_func_int64_t_s_s((+((safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u((((*p_1332->g_48) , l_950) != (((((+(0x7AF8659CC67B1C4AL && (safe_rshift_func_uint16_t_u_u((+0xF8FBL), l_953)))) , l_954) == &p_1332->g_815) != (safe_add_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u((+(l_917 , 0xD0753FEDL)))) || 65535UL), (*p_1332->g_52)))) , (void*)0)), (**p_1332->g_382))), l_917)) & p_1332->g_96)), 0x366ED10AA4C47CBBL)) || (*p_1332->g_816))) == 0xC4L), (*p_1332->g_383))) , (*p_41)) , l_953);
                    }
                    for (l_927 = 0; (l_927 <= 42); l_927++)
                    { /* block id: 508 */
                        (*p_1332->g_48) &= (-2L);
                    }
                    for (l_873.f0 = 0; (l_873.f0 <= 1); l_873.f0 += 1)
                    { /* block id: 513 */
                        int64_t l_974 = 0x72884733C72CD2AFL;
                        uint8_t *l_976[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t l_980 = 0x666EF843L;
                        int32_t l_981 = 0L;
                        int32_t l_983 = 0x3F45997FL;
                        int32_t l_987 = 0x2C2B777BL;
                        int i;
                        (*p_41) = (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((-1L), ((0x080A568EDEC19361L != (((safe_mod_func_uint64_t_u_u(((**p_1332->g_382) <= ((*p_1332->g_654) = (safe_sub_func_uint64_t_u_u((l_958 | (!l_808[3])), (p_1332->g_96++))))), (safe_sub_func_uint8_t_u_u(l_958, (l_990++))))) ^ l_873.f1) , (!(l_974 ^ ((p_1332->g_770[4] &= (l_959[1] || 0x72A77085L)) & 0x6CB9DED6L))))) ^ 1UL))), (**p_1332->g_815)));
                        if ((*p_41))
                            continue;
                    }
                }
                else
                { /* block id: 521 */
                    uint64_t l_1015 = 18446744073709551615UL;
                    int32_t l_1022 = 0L;
                    uint8_t l_1026 = 1UL;
                    int32_t *l_1032 = &l_988[0][1];
                    union U1 l_1038 = {4294967295UL};
                    if (((l_812 > ((l_808[2] && (l_993 | ((**p_1332->g_51) < ((*p_39) = ((*l_939) = (safe_sub_func_int64_t_s_s((safe_mod_func_int32_t_s_s(((l_998 , (l_999 != (void*)0)) || (((**p_1332->g_815) == ((*p_1332->g_52) | (*l_939))) <= (*p_41))), l_917)), l_1000[0][0][1]))))))) && 0x4D4C7F89DD21A76BL)) != l_975))
                    { /* block id: 524 */
                        uint32_t ***l_1008 = (void*)0;
                        int32_t l_1023 = 0L;
                        (*p_41) |= (safe_lshift_func_uint8_t_u_u(((l_1003 , 0x63C66FCE44AF6D7AL) > (*l_939)), (l_917 <= (safe_rshift_func_int16_t_s_u(((l_1008 != (void*)0) > ((safe_lshift_func_int16_t_s_s(p_1332->g_9, 0)) < 247UL)), 6)))));
                        (*p_1332->g_219) = p_41;
                        (*p_41) = (l_975 = (((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((*p_1332->g_383), (((l_1022 ^= (p_1332->g_232 = (l_1015 && (((l_1016 , p_1332->g_822) != (void*)0) && ((((safe_div_func_int64_t_s_s(l_856[1], (0x51L && ((p_1332->g_1021 = (&p_1332->g_815 == (l_1019 , l_1020))) < l_1015)))) != l_853) , 0UL) , 0xB28E71592EC6E3ABL))))) < 18446744073709551609UL) , l_1022))), l_1023)) >= l_1016.f2) < (*l_939)));
                        (*l_939) = 0x17CDB8BCL;
                    }
                    else
                    { /* block id: 533 */
                        (*p_1332->g_90) = p_41;
                        if (l_1022)
                            break;
                    }
                    if ((safe_add_func_uint8_t_u_u((*l_939), (0x157EL ^ (l_1026 ^ ((safe_mod_func_uint32_t_u_u(l_1026, (*p_41))) <= (((l_975 , (**p_1332->g_51)) >= (l_1026 <= l_958)) <= l_1015)))))))
                    { /* block id: 537 */
                        struct S0 l_1029 = {4294967292UL,1L,0x4CA1530AL};
                        (*p_1332->g_1030) = l_1029;
                        if (p_1332->g_1031)
                            break;
                        (*p_1332->g_219) = l_1032;
                        (*p_1332->g_219) = p_38;
                    }
                    else
                    { /* block id: 542 */
                        uint32_t ***l_1035 = &l_950;
                        union U1 l_1039 = {0x148FEAC2L};
                        int8_t *l_1042 = &p_1332->g_150[3];
                        (*l_939) ^= (l_812 > ((safe_lshift_func_uint16_t_u_s(((((*l_1035) = &p_1332->g_383) != &p_1332->g_383) & (l_978 |= (*l_1032))), (safe_lshift_func_int8_t_s_s(((*l_1042) &= (l_982[1] = (l_1038 , (((l_1039 , 0xB784E517L) < ((*p_1332->g_816) ^ (safe_lshift_func_int8_t_s_u(((**p_1332->g_51) |= (**p_40)), l_1016.f2)))) , 0x10L)))), (*p_39))))) | l_1043));
                        return (**p_1332->g_815);
                    }
                }
                (*p_41) = (safe_unary_minus_func_uint16_t_u((safe_sub_func_int64_t_s_s((l_1047 != (l_903 = &p_1332->g_96)), (l_998 , (((((*l_817) = l_1048) != (((safe_div_func_int32_t_s_s((*p_41), (safe_lshift_func_uint16_t_u_u(1UL, (0x24C2L == (((*l_1054) = l_1053[1][1][4]) != l_1055[1])))))) & l_1016.f1) , l_1048)) , l_827) <= (**p_1332->g_51)))))));
                if (((((*p_1332->g_1030) , l_1056) != l_1058) | l_1019.f2))
                { /* block id: 556 */
                    int32_t *l_1061 = &l_982[0];
                    for (p_1332->g_138.f2 = 25; (p_1332->g_138.f2 > 10); p_1332->g_138.f2 = safe_sub_func_int8_t_s_s(p_1332->g_138.f2, 8))
                    { /* block id: 559 */
                        if ((*p_1332->g_48))
                            break;
                        (*p_1332->g_90) = l_1061;
                        (*p_41) |= (safe_mul_func_uint8_t_u_u((*l_1061), l_917));
                        if (l_998.f0)
                            break;
                    }
                    p_1332->g_1066 = (safe_mod_func_int16_t_s_s((-1L), 0xF693L));
                    (*l_1054) = l_894;
                }
                else
                { /* block id: 567 */
                    uint64_t l_1067 = 0xD6729027C1B9DB6BL;
                    for (p_1332->g_785 = 1; (p_1332->g_785 <= 4); p_1332->g_785 += 1)
                    { /* block id: 570 */
                        int i;
                        --l_1067;
                        if (l_808[p_1332->g_785])
                            continue;
                        (*p_1332->g_1070) = l_1019;
                        if (l_808[p_1332->g_785])
                            break;
                    }
                    if (l_1071)
                        break;
                }
                p_1332->g_566 = l_1072;
            }
            else
            { /* block id: 579 */
                uint8_t l_1079 = 0x63L;
                uint8_t *l_1088 = (void*)0;
                int16_t *l_1089 = &l_853;
                int64_t *l_1109[2];
                int64_t *l_1110 = &p_1332->g_232;
                int32_t l_1111 = 5L;
                uint16_t **l_1113 = &p_1332->g_816;
                int i;
                for (i = 0; i < 2; i++)
                    l_1109[i] = &p_1332->g_232;
                (*p_41) |= ((l_988[0][2] , &p_1332->g_816) != &p_1332->g_816);
                if ((((l_975 = (safe_unary_minus_func_uint8_t_u((safe_rshift_func_int16_t_s_u(l_958, 6))))) < (*p_1332->g_48)) | ((((*l_826) = 0x6D7EL) <= ((void*)0 == &p_1332->g_382)) == (((l_977 = ((*l_1089) = (safe_add_func_int8_t_s_s(((l_1079 = l_988[0][2]) , ((*p_1332->g_52) = (0xE725L < ((safe_add_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_s((!(safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((***l_817) &= ((((((&p_1332->g_1031 == (l_1088 = (void*)0)) , (void*)0) == &p_1332->g_566) , p_1332->g_895.f0.f1) == 65535UL) || l_978)), p_1332->g_218[0].f0.f2)) & (*p_39)), l_1079))), 10)) > l_988[0][1]) < 1UL) , l_1079), l_808[4])) ^ (*p_39))))), 0x1BL)))) < l_917) <= l_988[0][2]))))
                { /* block id: 589 */
                    int32_t l_1106 = 0x7AD27B09L;
                    int8_t l_1112 = 0x68L;
                    int32_t l_1114 = 1L;
                    l_1114 &= (l_978 |= ((safe_rshift_func_int16_t_s_u(((*l_826) = ((safe_add_func_int8_t_s_s(((((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((((((safe_rshift_func_uint16_t_u_u(((((*l_831)++) | (**p_1332->g_722)) ^ ((((safe_add_func_int16_t_s_s(l_937.f0, (safe_add_func_uint32_t_u_u(l_1106, 0x1E915E89L)))) >= ((safe_div_func_int16_t_s_s(((+(((**p_1332->g_51) && (**p_1332->g_51)) <= (l_1111 = ((*p_41) = (l_827 & (0x5D56EC05L | (((((p_1332->g_770[4] , l_1109[1]) != l_1110) < l_977) , &l_1072) == (void*)0))))))) , l_1111), l_1016.f2)) , l_1112)) , l_1079) || 6UL)), l_1079)) && l_982[0]) | l_827) , l_1113) != (void*)0), l_855[6])) != (-1L)), (*p_1332->g_816))) & 0x1F33E22EL) || (*p_1332->g_816)) < l_1079), 0x6AL)) ^ l_1112)), 7)) , (*p_41)));
                    if (l_1115)
                        break;
                }
                else
                { /* block id: 597 */
                    l_978 = (l_977 = (p_1332->g_1116[2][0][5] , (safe_lshift_func_int8_t_s_u(l_977, 5))));
                }
            }
            (*p_41) = (*p_41);
            l_1120 = l_873;
        }
        (*p_1332->g_219) = &l_1043;
        for (l_1043 = 1; (l_1043 <= 9); l_1043 += 1)
        { /* block id: 608 */
            int32_t l_1121 = 3L;
            uint16_t *l_1128 = &p_1332->g_128;
            union U1 **l_1141 = &p_1332->g_591[4];
            for (l_989 = 9; (l_989 >= 0); l_989 -= 1)
            { /* block id: 611 */
                uint16_t ***l_1137 = &p_1332->g_815;
                uint16_t ****l_1138 = &l_817;
                uint16_t ***l_1140 = (void*)0;
                uint16_t ****l_1139 = &l_1140;
                int32_t *l_1149 = (void*)0;
                struct S0 l_1153 = {0x12891859L,-1L,0x32043DD4L};
                (*p_41) = l_1121;
                if (((safe_lshift_func_uint8_t_u_s(l_990, ((**p_1332->g_815) || (((*l_826) = (safe_mod_func_uint32_t_u_u((((l_1121 >= (safe_mod_func_uint64_t_u_u(((0UL == (l_1128 == (**l_1020))) >= (l_1121 || (((safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((((*l_1138) = l_1137) == ((*l_1139) = (void*)0)), (*p_1332->g_52))), l_1121)), l_1121)), (**p_1332->g_815))) | 0L) | 0x4DFB7AEC35F522B7L))), 0x219515C303A1C351L))) , l_1121) >= 0x0E52F153L), 0xE37CD330L))) && 65535UL)))) <= (**p_1332->g_382)))
                { /* block id: 616 */
                    union U1 ***l_1142[7];
                    struct S0 *l_1146 = &l_1120;
                    int32_t *l_1148[1][4][9] = {{{&p_1332->g_4,&p_1332->g_626[3],&p_1332->g_84,&p_1332->g_81,&p_1332->g_626[3],&p_1332->g_81,&p_1332->g_84,&p_1332->g_626[3],&p_1332->g_4},{&p_1332->g_4,&p_1332->g_626[3],&p_1332->g_84,&p_1332->g_81,&p_1332->g_626[3],&p_1332->g_81,&p_1332->g_84,&p_1332->g_626[3],&p_1332->g_4},{&p_1332->g_4,&p_1332->g_626[3],&p_1332->g_84,&p_1332->g_81,&p_1332->g_626[3],&p_1332->g_81,&p_1332->g_84,&p_1332->g_626[3],&p_1332->g_4},{&p_1332->g_4,&p_1332->g_626[3],&p_1332->g_84,&p_1332->g_81,&p_1332->g_626[3],&p_1332->g_81,&p_1332->g_84,&p_1332->g_626[3],&p_1332->g_4}}};
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_1142[i] = &l_1141;
                    (*p_41) &= ((l_1141 = (l_1143 = l_1141)) != &p_1332->g_591[5]);
                    (*l_1146) = l_873;
                    if ((l_1147 != ((void*)0 == &l_1141)))
                    { /* block id: 621 */
                        l_1149 = l_1148[0][0][6];
                        l_1150 = (void*)0;
                        l_977 = (safe_rshift_func_int8_t_s_s(0x39L, 2));
                    }
                    else
                    { /* block id: 625 */
                        if (l_998.f0)
                            break;
                        return l_827;
                    }
                }
                else
                { /* block id: 629 */
                    (*p_1332->g_1155) = l_1153;
                }
            }
            return (**p_1332->g_815);
        }
    }
    for (l_958 = 0; l_958 < 5; l_958 += 1)
    {
        p_1332->g_770[l_958] = 0UL;
    }
    if (((((safe_unary_minus_func_uint32_t_u(((**l_950) = (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint8_t_u_u(((**p_1332->g_590) , 0UL), (safe_lshift_func_int16_t_s_s(((l_1163 <= (((0x70L & (l_1115 > (safe_sub_func_uint8_t_u_u(((*l_1167) = l_977), (l_1163 , ((*p_41) , (l_1168[1] | 5UL))))))) < l_1169) & (*p_1332->g_816))) < (-6L)), l_982[0])))) != 0x0BL), l_998.f0))))) ^ (-4L)) || l_812) <= (**p_1332->g_51)))
    { /* block id: 639 */
        uint64_t l_1170 = 18446744073709551613UL;
        int32_t *l_1178 = &p_1332->g_920.f0.f2;
        int64_t *l_1179 = &p_1332->g_195;
        int64_t l_1200[10][10] = {{0L,(-1L),0x6FC7E7E515C256C8L,3L,0L,1L,(-1L),0L,3L,1L},{0L,(-1L),0x6FC7E7E515C256C8L,3L,0L,1L,(-1L),0L,3L,1L},{0L,(-1L),0x6FC7E7E515C256C8L,3L,0L,1L,(-1L),0L,3L,1L},{0L,(-1L),0x6FC7E7E515C256C8L,3L,0L,1L,(-1L),0L,3L,1L},{0L,(-1L),0x6FC7E7E515C256C8L,3L,0L,1L,(-1L),0L,3L,1L},{0L,(-1L),0x6FC7E7E515C256C8L,3L,0L,1L,(-1L),0L,3L,1L},{0L,(-1L),0x6FC7E7E515C256C8L,3L,0L,1L,(-1L),0L,3L,1L},{0L,(-1L),0x6FC7E7E515C256C8L,3L,0L,1L,(-1L),0L,3L,1L},{0L,(-1L),0x6FC7E7E515C256C8L,3L,0L,1L,(-1L),0L,3L,1L},{0L,(-1L),0x6FC7E7E515C256C8L,3L,0L,1L,(-1L),0L,3L,1L}};
        int i, j;
        if (l_1170)
        { /* block id: 640 */
            int32_t l_1177 = 0x5CA86065L;
            int64_t *l_1180 = &l_1147;
            uint16_t l_1181 = 0xC3B3L;
            int16_t *l_1194 = (void*)0;
            int16_t *l_1195 = &p_1332->g_207;
            int32_t l_1196 = 0x622C5EAAL;
            (*p_41) = (l_982[1] ^= (safe_add_func_int32_t_s_s((*p_41), (65535UL <= (l_958 = (0L ^ ((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((0x0720F7C924AD8C44L && (((l_1177 >= (l_1178 == p_41)) >= ((((l_1166 != (((l_1179 == l_1180) & (*p_1332->g_816)) , p_39)) > l_1170) > (*p_39)) ^ l_1181)) , (**p_1332->g_722))), 14)), 0x2DA4L)) != 0x79L)))))));
            l_1196 |= (safe_mul_func_int8_t_s_s(((l_1115 > (safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s((((safe_add_func_uint64_t_u_u(l_1177, (((*l_1195) &= ((safe_lshift_func_uint8_t_u_u((((**p_1332->g_815) || l_1177) , ((safe_sub_func_int8_t_s_s(((+6UL) >= l_1177), ((l_1181 | 65532UL) < 4L))) && 0x37B4E44CL)), l_1120.f0)) <= 0L)) || p_1332->g_626[2]))) || (*p_1332->g_654)) && l_1177), 0UL)), 0xCE6CC13D41A26903L))) && l_1170), (**p_1332->g_51)));
            return l_827;
        }
        else
        { /* block id: 647 */
            uint16_t ****l_1197[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1197[i] = (void*)0;
            for (l_1147 = 1; (l_1147 >= 0); l_1147 -= 1)
            { /* block id: 650 */
                return (**p_1332->g_815);
            }
            l_958 ^= (&p_1332->g_815 != (l_1020 = &p_1332->g_815));
            for (p_1332->g_798 = (-5); (p_1332->g_798 == (-19)); p_1332->g_798--)
            { /* block id: 657 */
                if (l_1200[3][6])
                    break;
            }
        }
    }
    else
    { /* block id: 661 */
        int32_t *l_1201[2];
        int8_t **l_1204 = &p_1332->g_52;
        int i;
        for (i = 0; i < 2; i++)
            l_1201[i] = (void*)0;
        (*p_41) |= 0x72D39B36L;
        (*p_1332->g_90) = l_1201[0];
        for (p_1332->g_1066 = (-8); (p_1332->g_1066 >= 38); p_1332->g_1066++)
        { /* block id: 666 */
            return (**p_1332->g_815);
        }
        (*p_1332->g_219) = p_38;
    }
    return (*p_1332->g_816);
}


/* ------------------------------------------ */
/* 
 * reads : p_1332->g_31 p_1332->g_51 p_1332->g_52 p_1332->g_15 p_1332->g_81 p_1332->g_84 p_1332->g_48 p_1332->g_90 p_1332->g_4 p_1332->g_97 p_1332->g_128 p_1332->g_96 p_1332->g_113 p_1332->g_13 p_1332->g_91 p_1332->g_138 p_1332->g_100 p_1332->g_150 p_1332->g_9 p_1332->g_6 p_1332->g_198 p_1332->g_3 p_1332->g_207 p_1332->g_212 p_1332->g_12 p_1332->g_218 p_1332->g_219 p_1332->g_218.f0.f0 p_1332->g_220 p_1332->g_195 p_1332->g_316 p_1332->g_232 p_1332->g_218.f0 p_1332->g_11 p_1332->g_8 p_1332->g_383 p_1332->g_316.f0 p_1332->g_133 p_1332->g_654 p_1332->g_10 p_1332->g_712 p_1332->g_722 p_1332->g_723 p_1332->g_724 p_1332->g_382 p_1332->g_626 p_1332->g_514 p_1332->g_515 p_1332->g_759 p_1332->g_770 p_1332->g_712.f0.f1 p_1332->g_785
 * writes: p_1332->g_31 p_1332->g_15 p_1332->g_81 p_1332->g_84 p_1332->g_96 p_1332->g_91 p_1332->g_113 p_1332->g_128 p_1332->g_138.f1 p_1332->g_195 p_1332->g_198 p_1332->g_207 p_1332->g_212 p_1332->g_150 p_1332->g_232 p_1332->g_253 p_1332->g_52 p_1332->g_220 p_1332->g_316.f0 p_1332->g_138.f0 p_1332->g_218 p_1332->g_133 p_1332->g_12 p_1332->g_138.f2 p_1332->g_567 p_1332->g_468 p_1332->g_515 p_1332->g_770
 */
int32_t * func_42(int32_t  p_43, int8_t ** p_44, int64_t  p_45, struct S3 * p_1332)
{ /* block id: 19 */
    int8_t **l_85 = (void*)0;
    struct S0 l_86 = {0xAE8C6C5AL,7L,1L};
    int32_t *l_656 = (void*)0;
    int32_t l_661 = 9L;
    int32_t l_663[10] = {0x5D41BF98L,0x5D41BF98L,0x5D41BF98L,0x5D41BF98L,0x5D41BF98L,0x5D41BF98L,0x5D41BF98L,0x5D41BF98L,0x5D41BF98L,0x5D41BF98L};
    uint8_t l_666 = 255UL;
    union U1 l_713 = {9UL};
    uint64_t l_740[10] = {0xF0C5CAB8012C022BL,0xAB374CFD36119EE9L,0xF0C5CAB8012C022BL,0xF0C5CAB8012C022BL,0xAB374CFD36119EE9L,0xF0C5CAB8012C022BL,0xF0C5CAB8012C022BL,0xAB374CFD36119EE9L,0xF0C5CAB8012C022BL,0xF0C5CAB8012C022BL};
    uint32_t l_748 = 0xC0FECD16L;
    int32_t *l_794[3];
    int32_t *l_795 = &p_1332->g_626[4];
    int i;
    for (i = 0; i < 3; i++)
        l_794[i] = &l_663[4];
    for (p_1332->g_31 = 0; (p_1332->g_31 <= 0); p_1332->g_31 += 1)
    { /* block id: 22 */
        int16_t l_53 = 1L;
        int32_t l_333 = 1L;
        int32_t *l_657 = &p_1332->g_84;
        (*l_657) = ((l_53 , func_54(func_58(l_53, func_62(p_43, p_45, p_44, func_68((*p_1332->g_51), p_1332), l_85, p_1332), l_86, p_1332), l_333, p_43, p_1332)) != l_656);
        for (p_1332->g_138.f0 = 0; p_1332->g_138.f0 < 6; p_1332->g_138.f0 += 1)
        {
            union U2 tmp = {{{8UL,-1L,1L}}};
            p_1332->g_218[p_1332->g_138.f0] = tmp;
        }
        return (*p_1332->g_219);
    }
    for (p_1332->g_15 = 0; (p_1332->g_15 <= 0); p_1332->g_15 += 1)
    { /* block id: 367 */
        int32_t l_659[10];
        int32_t l_660 = 0x0689A678L;
        int32_t l_662 = 0L;
        int32_t l_664 = 2L;
        int32_t l_665[8][5][6] = {{{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)}},{{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)}},{{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)}},{{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)}},{{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)}},{{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)}},{{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)}},{{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)},{(-3L),0L,(-3L),(-3L),0L,(-3L)}}};
        uint16_t *l_711 = &p_1332->g_128;
        uint16_t **l_710 = &l_711;
        int64_t *l_719[1][8][10] = {{{&p_1332->g_232,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_232,&p_1332->g_195},{&p_1332->g_232,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_232,&p_1332->g_195},{&p_1332->g_232,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_232,&p_1332->g_195},{&p_1332->g_232,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_232,&p_1332->g_195},{&p_1332->g_232,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_232,&p_1332->g_195},{&p_1332->g_232,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_232,&p_1332->g_195},{&p_1332->g_232,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_232,&p_1332->g_195},{&p_1332->g_232,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_195,&p_1332->g_232,&p_1332->g_232,&p_1332->g_195}}};
        int64_t **l_718[2][8][5] = {{{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]},{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]},{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]},{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]},{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]},{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]},{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]},{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]}},{{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]},{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]},{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]},{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]},{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]},{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]},{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]},{&l_719[0][5][8],&l_719[0][5][8],&l_719[0][6][5],&l_719[0][1][3],&l_719[0][1][3]}}};
        uint32_t l_749[3][2];
        int8_t **l_752 = &p_1332->g_52;
        int32_t *l_789 = &l_665[7][3][4];
        int32_t *l_790[5];
        int32_t *l_793 = &p_1332->g_4;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_659[i] = 5L;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_749[i][j] = 1UL;
        }
        for (i = 0; i < 5; i++)
            l_790[i] = &l_665[7][1][0];
        if (p_45)
            break;
        for (p_1332->g_138.f0 = 0; (p_1332->g_138.f0 <= 0); p_1332->g_138.f0 += 1)
        { /* block id: 371 */
            int32_t *l_658[6];
            int32_t l_677 = 0x5808589DL;
            volatile int32_t *l_678 = &p_1332->g_10;
            int i;
            for (i = 0; i < 6; i++)
                l_658[i] = (void*)0;
            l_666--;
            for (p_1332->g_133 = 0; (p_1332->g_133 <= 0); p_1332->g_133 += 1)
            { /* block id: 375 */
                int64_t ***l_671 = &p_1332->g_468;
                int64_t ****l_672 = &l_671;
                int i, j, k;
                p_1332->g_12[(p_1332->g_133 + 8)][p_1332->g_138.f0][(p_1332->g_15 + 1)] ^= ((safe_div_func_int8_t_s_s((((((*l_672) = l_671) == &p_1332->g_468) ^ (safe_add_func_int8_t_s_s(l_662, (((p_43 < 0x0303D0C3F3F5DF5DL) > ((safe_mul_func_int16_t_s_s(0L, p_43)) ^ p_43)) >= l_677)))) && (*p_1332->g_52)), (**p_44))) & l_665[7][1][0]);
                l_678 = &p_1332->g_12[(p_1332->g_133 + 8)][p_1332->g_138.f0][(p_1332->g_15 + 1)];
            }
        }
        for (p_1332->g_212 = 0; (p_1332->g_212 == 2); p_1332->g_212 = safe_add_func_int8_t_s_s(p_1332->g_212, 8))
        { /* block id: 383 */
            int32_t *l_681 = &l_661;
            int32_t *l_682 = &p_1332->g_4;
            if ((*p_1332->g_91))
                break;
            return l_682;
        }
        for (p_1332->g_128 = 0; (p_1332->g_128 <= 53); p_1332->g_128 = safe_add_func_uint16_t_u_u(p_1332->g_128, 7))
        { /* block id: 389 */
            int32_t l_702[5] = {0x79E21D5EL,0x79E21D5EL,0x79E21D5EL,0x79E21D5EL,0x79E21D5EL};
            int8_t *l_708 = &p_1332->g_150[2];
            int64_t ***l_720 = (void*)0;
            int64_t ***l_721 = &p_1332->g_468;
            uint8_t *l_725 = &l_666;
            uint32_t *l_756 = &p_1332->g_113;
            int32_t *l_792[8] = {&l_702[2],&l_702[2],&l_702[2],&l_702[2],&l_702[2],&l_702[2],&l_702[2],&l_702[2]};
            int i;
            (*p_1332->g_219) = &l_663[4];
            for (l_666 = 0; (l_666 <= 0); l_666 += 1)
            { /* block id: 393 */
                uint8_t l_688 = 249UL;
                int32_t *l_709[8] = {&l_665[5][0][3],&l_665[5][0][3],&l_665[5][0][3],&l_665[5][0][3],&l_665[5][0][3],&l_665[5][0][3],&l_665[5][0][3],&l_665[5][0][3]};
                int i;
                for (p_1332->g_138.f2 = 0; (p_1332->g_138.f2 <= 0); p_1332->g_138.f2 += 1)
                { /* block id: 396 */
                    int32_t *l_685 = &l_663[0];
                    int32_t *l_686 = &p_1332->g_626[2];
                    int32_t *l_687[8] = {&p_1332->g_15,&l_662,&p_1332->g_15,&p_1332->g_15,&l_662,&p_1332->g_15,&p_1332->g_15,&l_662};
                    int i, j, k;
                    l_688--;
                }
                (*p_1332->g_90) = &l_663[1];
                for (l_86.f2 = 1; (l_86.f2 <= 5); l_86.f2 += 1)
                { /* block id: 402 */
                    int8_t l_691 = (-8L);
                    uint8_t **l_698 = &p_1332->g_567[0][5][2];
                    uint8_t **l_699 = (void*)0;
                    uint8_t *l_701 = &l_688;
                    uint8_t **l_700 = &l_701;
                    int64_t *l_706[2][9] = {{&p_1332->g_195,&p_1332->g_195,&p_1332->g_195,&p_1332->g_232,&p_1332->g_232,&p_1332->g_232,&p_1332->g_195,&p_1332->g_195,&p_1332->g_195},{&p_1332->g_195,&p_1332->g_195,&p_1332->g_195,&p_1332->g_232,&p_1332->g_232,&p_1332->g_232,&p_1332->g_195,&p_1332->g_195,&p_1332->g_195}};
                    int8_t **l_707 = &p_1332->g_52;
                    int i, j;
                    p_1332->g_220[l_666] = func_62(l_691, (((safe_add_func_int64_t_s_s((p_1332->g_232 = (safe_add_func_int16_t_s_s((((((safe_lshift_func_uint16_t_u_u(l_691, 4)) <= (((*l_698) = &l_688) != ((*l_700) = &p_1332->g_212))) >= p_1332->g_10) , (+l_702[2])) & 5UL), ((safe_rshift_func_int8_t_s_u((p_43 && (safe_unary_minus_func_uint8_t_u(0x0FL))), 6)) == (-6L))))), l_688)) || p_43) , p_45), l_707, l_708, &p_1332->g_52, p_1332);
                }
                (*p_1332->g_90) = l_709[4];
            }
            if (((((void*)0 != l_710) , ((p_1332->g_712[7] , l_664) >= (l_713 , (safe_rshift_func_uint16_t_u_u(((((0x33L <= ((l_659[6] & ((*l_725) = (((*l_721) = l_718[0][4][0]) == (p_1332->g_138.f1 , p_1332->g_722)))) == 0x650BE32EA61A38ACL)) <= 0x162387E6848F38D2L) <= (-10L)) & p_43), p_1332->g_31))))) | 0x8CBDL))
            { /* block id: 412 */
                int8_t l_741[9];
                int32_t l_750 = 0L;
                int32_t *l_751 = &l_665[7][1][0];
                uint32_t **l_753 = (void*)0;
                uint32_t *l_755 = (void*)0;
                uint32_t **l_754[10][2] = {{&p_1332->g_383,&p_1332->g_383},{&p_1332->g_383,&p_1332->g_383},{&p_1332->g_383,&p_1332->g_383},{&p_1332->g_383,&p_1332->g_383},{&p_1332->g_383,&p_1332->g_383},{&p_1332->g_383,&p_1332->g_383},{&p_1332->g_383,&p_1332->g_383},{&p_1332->g_383,&p_1332->g_383},{&p_1332->g_383,&p_1332->g_383},{&p_1332->g_383,&p_1332->g_383}};
                uint64_t l_757 = 1UL;
                struct S0 l_786[7][1][5] = {{{{0x386F6B05L,-1L,0x750C33BBL},{6UL,-5L,1L},{6UL,-5L,1L},{0x386F6B05L,-1L,0x750C33BBL},{0x386F6B05L,-1L,0x750C33BBL}}},{{{0x386F6B05L,-1L,0x750C33BBL},{6UL,-5L,1L},{6UL,-5L,1L},{0x386F6B05L,-1L,0x750C33BBL},{0x386F6B05L,-1L,0x750C33BBL}}},{{{0x386F6B05L,-1L,0x750C33BBL},{6UL,-5L,1L},{6UL,-5L,1L},{0x386F6B05L,-1L,0x750C33BBL},{0x386F6B05L,-1L,0x750C33BBL}}},{{{0x386F6B05L,-1L,0x750C33BBL},{6UL,-5L,1L},{6UL,-5L,1L},{0x386F6B05L,-1L,0x750C33BBL},{0x386F6B05L,-1L,0x750C33BBL}}},{{{0x386F6B05L,-1L,0x750C33BBL},{6UL,-5L,1L},{6UL,-5L,1L},{0x386F6B05L,-1L,0x750C33BBL},{0x386F6B05L,-1L,0x750C33BBL}}},{{{0x386F6B05L,-1L,0x750C33BBL},{6UL,-5L,1L},{6UL,-5L,1L},{0x386F6B05L,-1L,0x750C33BBL},{0x386F6B05L,-1L,0x750C33BBL}}},{{{0x386F6B05L,-1L,0x750C33BBL},{6UL,-5L,1L},{6UL,-5L,1L},{0x386F6B05L,-1L,0x750C33BBL},{0x386F6B05L,-1L,0x750C33BBL}}}};
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_741[i] = 0x79L;
                (*p_1332->g_90) = ((*p_1332->g_219) = (*p_1332->g_219));
                if ((*p_1332->g_91))
                    break;
                if ((safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(l_740[4], (p_45 && (l_757 = (p_1332->g_232 = (l_741[5] == (((*l_725)++) , (safe_sub_func_uint64_t_u_u((&p_1332->g_722 != ((~(**p_1332->g_722)) , &l_718[0][4][0])), (((*p_1332->g_382) != (l_756 = func_62(((*l_751) = (((((**p_1332->g_51) = (safe_sub_func_uint8_t_u_u(2UL, ((((l_748 && l_749[2][1]) , l_750) || p_45) <= p_43)))) != 0x7EL) >= (-1L)) | p_43)), p_1332->g_8, p_44, (*p_44), l_752, p_1332))) || l_702[2])))))))))), p_1332->g_626[5])), (*p_1332->g_383))), p_43)), 0x78BEEA0CL)) < p_43), p_43)), l_702[2])))
                { /* block id: 422 */
                    uint64_t *l_764 = &p_1332->g_133;
                    int32_t *l_765[6][3];
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_765[i][j] = &p_1332->g_13;
                    }
                    (*p_1332->g_759) = (*p_1332->g_514);
                    (*l_751) = (safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s((**p_1332->g_722), ((*l_764) = l_748))), 5));
                    return l_765[4][2];
                }
                else
                { /* block id: 427 */
                    int32_t *l_766 = (void*)0;
                    int32_t *l_767 = (void*)0;
                    int32_t *l_768 = &l_663[4];
                    int32_t *l_769[5];
                    uint64_t *l_787 = &p_1332->g_96;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_769[i] = &l_662;
                    ++p_1332->g_770[2];
                    if ((((p_1332->g_4 && ((+((safe_mul_func_int8_t_s_s(((*p_1332->g_91) == (p_1332->g_712[7].f0.f1 == 0x366BL)), p_45)) , ((*l_787) |= (safe_add_func_uint32_t_u_u((*p_1332->g_383), (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(5L, p_43)), ((((safe_div_func_uint8_t_u_u((p_43 < p_45), p_1332->g_785)) , l_786[6][0][0]) , (*l_751)) , p_43)))))))) <= p_43)) & (**p_44)) != 0x282BEE5D912A2BD4L))
                    { /* block id: 430 */
                        return l_766;
                    }
                    else
                    { /* block id: 432 */
                        (*p_1332->g_90) = (*p_1332->g_90);
                        l_660 |= (**p_1332->g_90);
                        (*l_768) = 0x55A480E0L;
                        return l_766;
                    }
                }
            }
            else
            { /* block id: 439 */
                int32_t *l_788[6] = {&l_662,&p_1332->g_15,&l_662,&l_662,&p_1332->g_15,&l_662};
                int32_t *l_791[6] = {&l_702[2],&l_702[2],&l_702[2],&l_702[2],&l_702[2],&l_702[2]};
                int i;
                return l_793;
            }
        }
    }
    return l_795;
}


/* ------------------------------------------ */
/* 
 * reads : p_1332->g_48 p_1332->g_15 p_1332->g_51
 * writes: p_1332->g_15
 */
int8_t ** func_46(int32_t  p_47, struct S3 * p_1332)
{ /* block id: 16 */
    int8_t *l_50 = &p_1332->g_31;
    int8_t **l_49 = &l_50;
    (*p_1332->g_48) |= p_47;
    return p_1332->g_51;
}


/* ------------------------------------------ */
/* 
 * reads : p_1332->g_113 p_1332->g_11 p_1332->g_198 p_1332->g_51 p_1332->g_52 p_1332->g_31 p_1332->g_195 p_1332->g_84 p_1332->g_8 p_1332->g_212 p_1332->g_383 p_1332->g_316.f0 p_1332->g_219 p_1332->g_220 p_1332->g_81 p_1332->g_13 p_1332->g_133 p_1332->g_654
 * writes: p_1332->g_113 p_1332->g_198 p_1332->g_150 p_1332->g_212 p_1332->g_316.f0 p_1332->g_84
 */
int32_t * func_54(struct S0  p_55, uint32_t  p_56, uint16_t  p_57, struct S3 * p_1332)
{ /* block id: 194 */
    uint32_t l_334 = 1UL;
    uint16_t l_337[9] = {0xCB31L,0xE9B5L,0xCB31L,0xCB31L,0xE9B5L,0xCB31L,0xCB31L,0xE9B5L,0xCB31L};
    uint32_t *l_345[7][3][10] = {{{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0},{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0},{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0}},{{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0},{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0},{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0}},{{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0},{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0},{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0}},{{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0},{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0},{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0}},{{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0},{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0},{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0}},{{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0},{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0},{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0}},{{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0},{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0},{&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0,&p_1332->g_316.f0,&p_1332->g_113,&p_1332->g_316.f0}}};
    int64_t *l_354 = &p_1332->g_232;
    int32_t l_363[8][10] = {{0L,0L,1L,0x2BAE7923L,0x5DFC6C01L,0x7653254BL,0L,0x074419A5L,0L,0x7653254BL},{0L,0L,1L,0x2BAE7923L,0x5DFC6C01L,0x7653254BL,0L,0x074419A5L,0L,0x7653254BL},{0L,0L,1L,0x2BAE7923L,0x5DFC6C01L,0x7653254BL,0L,0x074419A5L,0L,0x7653254BL},{0L,0L,1L,0x2BAE7923L,0x5DFC6C01L,0x7653254BL,0L,0x074419A5L,0L,0x7653254BL},{0L,0L,1L,0x2BAE7923L,0x5DFC6C01L,0x7653254BL,0L,0x074419A5L,0L,0x7653254BL},{0L,0L,1L,0x2BAE7923L,0x5DFC6C01L,0x7653254BL,0L,0x074419A5L,0L,0x7653254BL},{0L,0L,1L,0x2BAE7923L,0x5DFC6C01L,0x7653254BL,0L,0x074419A5L,0L,0x7653254BL},{0L,0L,1L,0x2BAE7923L,0x5DFC6C01L,0x7653254BL,0L,0x074419A5L,0L,0x7653254BL}};
    int16_t *l_364[2][4][9] = {{{&p_1332->g_198,&p_1332->g_207,&p_1332->g_207,&p_1332->g_198,(void*)0,&p_1332->g_198,&p_1332->g_198,(void*)0,&p_1332->g_198},{&p_1332->g_198,&p_1332->g_207,&p_1332->g_207,&p_1332->g_198,(void*)0,&p_1332->g_198,&p_1332->g_198,(void*)0,&p_1332->g_198},{&p_1332->g_198,&p_1332->g_207,&p_1332->g_207,&p_1332->g_198,(void*)0,&p_1332->g_198,&p_1332->g_198,(void*)0,&p_1332->g_198},{&p_1332->g_198,&p_1332->g_207,&p_1332->g_207,&p_1332->g_198,(void*)0,&p_1332->g_198,&p_1332->g_198,(void*)0,&p_1332->g_198}},{{&p_1332->g_198,&p_1332->g_207,&p_1332->g_207,&p_1332->g_198,(void*)0,&p_1332->g_198,&p_1332->g_198,(void*)0,&p_1332->g_198},{&p_1332->g_198,&p_1332->g_207,&p_1332->g_207,&p_1332->g_198,(void*)0,&p_1332->g_198,&p_1332->g_198,(void*)0,&p_1332->g_198},{&p_1332->g_198,&p_1332->g_207,&p_1332->g_207,&p_1332->g_198,(void*)0,&p_1332->g_198,&p_1332->g_198,(void*)0,&p_1332->g_198},{&p_1332->g_198,&p_1332->g_207,&p_1332->g_207,&p_1332->g_198,(void*)0,&p_1332->g_198,&p_1332->g_198,(void*)0,&p_1332->g_198}}};
    int32_t l_365 = 1L;
    int8_t *l_366 = &p_1332->g_150[2];
    int8_t l_367 = 0x49L;
    int32_t l_368 = (-1L);
    int64_t l_369 = 1L;
    uint16_t l_377[1][6] = {{0x58EEL,0x58EEL,0x58EEL,0x58EEL,0x58EEL,0x58EEL}};
    uint32_t **l_393 = &l_345[2][0][7];
    uint8_t l_394[7] = {246UL,0xA7L,246UL,246UL,0xA7L,246UL,246UL};
    int64_t **l_470 = &l_354;
    int64_t **l_474 = &l_354;
    int16_t l_491 = 0L;
    struct S0 l_560 = {0xA79FE0B9L,0x5FCAD4F3L,3L};
    int32_t l_577[3];
    int16_t l_578[3];
    int32_t l_579 = (-1L);
    uint16_t *l_587 = &p_1332->g_128;
    uint8_t l_652 = 0x8FL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_577[i] = (-1L);
    for (i = 0; i < 3; i++)
        l_578[i] = (-6L);
    --l_334;
    l_369 = ((l_367 = (l_337[7] >= (safe_mod_func_int32_t_s_s(((((safe_unary_minus_func_int32_t_s(((((-1L) || l_337[8]) , (((l_334 | ((safe_div_func_int16_t_s_s((((safe_mul_func_int8_t_s_s((((*l_366) = ((p_1332->g_113--) != (safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s(((safe_add_func_uint32_t_u_u(p_1332->g_11[9][0][3], ((l_354 = &p_1332->g_232) == (void*)0))) && (p_1332->g_198 |= (safe_sub_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((l_365 = (safe_add_func_uint64_t_u_u(3UL, ((l_363[3][3] = (0x705B3227757332DAL >= (-5L))) > p_57)))), p_55.f1)), 0x23L)), p_56)))), l_334)), 7)))) || (**p_1332->g_51)), 0x74L)) < p_56) == p_55.f2), p_1332->g_195)) == l_337[7])) >= p_55.f2) <= (-5L))) & p_1332->g_84))) , l_334) ^ p_1332->g_8) || 8UL), p_57)))) == l_368);
    for (l_368 = 0; (l_368 <= 1); l_368 += 1)
    { /* block id: 206 */
        int32_t *l_370 = &l_363[3][4];
        int32_t *l_371 = &p_1332->g_15;
        int32_t *l_372 = (void*)0;
        int32_t *l_373 = (void*)0;
        int32_t *l_374 = &l_365;
        int32_t *l_375 = &l_365;
        int32_t *l_376[7] = {&l_365,&l_365,&l_365,&l_365,&l_365,&l_365,&l_365};
        uint32_t **l_391 = &l_345[6][0][8];
        uint64_t *l_413 = &p_1332->g_133;
        uint64_t **l_412 = &l_413;
        int8_t **l_460 = &l_366;
        int64_t **l_471 = &l_354;
        struct S0 l_540[6][7] = {{{0x44049D20L,0x040CD484L,-3L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL},{0UL,0x37EA68D2L,-9L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL},{0x44049D20L,0x040CD484L,-3L},{0x44049D20L,0x040CD484L,-3L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL}},{{0x44049D20L,0x040CD484L,-3L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL},{0UL,0x37EA68D2L,-9L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL},{0x44049D20L,0x040CD484L,-3L},{0x44049D20L,0x040CD484L,-3L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL}},{{0x44049D20L,0x040CD484L,-3L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL},{0UL,0x37EA68D2L,-9L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL},{0x44049D20L,0x040CD484L,-3L},{0x44049D20L,0x040CD484L,-3L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL}},{{0x44049D20L,0x040CD484L,-3L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL},{0UL,0x37EA68D2L,-9L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL},{0x44049D20L,0x040CD484L,-3L},{0x44049D20L,0x040CD484L,-3L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL}},{{0x44049D20L,0x040CD484L,-3L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL},{0UL,0x37EA68D2L,-9L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL},{0x44049D20L,0x040CD484L,-3L},{0x44049D20L,0x040CD484L,-3L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL}},{{0x44049D20L,0x040CD484L,-3L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL},{0UL,0x37EA68D2L,-9L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL},{0x44049D20L,0x040CD484L,-3L},{0x44049D20L,0x040CD484L,-3L},{4294967289UL,0x0F9C53B6L,0x514BBF4AL}}};
        uint16_t **l_640 = (void*)0;
        int i, j;
        --l_377[0][1];
    }
    for (p_1332->g_212 = 0; (p_1332->g_212 > 55); p_1332->g_212 = safe_add_func_int16_t_s_s(p_1332->g_212, 3))
    { /* block id: 354 */
        uint64_t l_651 = 18446744073709551606UL;
        uint16_t l_653 = 0xAA9AL;
        int32_t *l_655 = (void*)0;
        (*p_1332->g_654) ^= ((safe_mod_func_int16_t_s_s(0x1622L, (safe_add_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((((0xE61E4A37L & (--(*p_1332->g_383))) != l_651) > ((**p_1332->g_219) & ((((l_337[6] ^ l_652) | (!((0x7F66L >= (l_394[3] > 2UL)) == p_57))) | l_651) | (-1L)))), p_1332->g_212)) & l_653) && p_1332->g_133), 0x9AE5L)))) || p_55.f2);
        l_577[2] |= p_56;
        return l_655;
    }
    return (*p_1332->g_219);
}


/* ------------------------------------------ */
/* 
 * reads : p_1332->g_48 p_1332->g_15 p_1332->g_90 p_1332->g_4 p_1332->g_97 p_1332->g_81 p_1332->g_128 p_1332->g_96 p_1332->g_113 p_1332->g_13 p_1332->g_84 p_1332->g_91 p_1332->g_138 p_1332->g_51 p_1332->g_52 p_1332->g_100 p_1332->g_150 p_1332->g_9 p_1332->g_31 p_1332->g_6 p_1332->g_198 p_1332->g_3 p_1332->g_207 p_1332->g_212 p_1332->g_12 p_1332->g_218 p_1332->g_219 p_1332->g_218.f0.f0 p_1332->g_220 p_1332->g_195 p_1332->g_316 p_1332->g_232 p_1332->g_218.f0
 * writes: p_1332->g_96 p_1332->g_91 p_1332->g_81 p_1332->g_113 p_1332->g_128 p_1332->g_84 p_1332->g_15 p_1332->g_138.f1 p_1332->g_195 p_1332->g_198 p_1332->g_207 p_1332->g_212 p_1332->g_150 p_1332->g_232 p_1332->g_253 p_1332->g_52 p_1332->g_220 p_1332->g_13
 */
struct S0  func_58(uint32_t  p_59, int32_t * p_60, struct S0  p_61, struct S3 * p_1332)
{ /* block id: 41 */
    uint32_t l_89[10] = {1UL,4294967295UL,4294967292UL,4294967295UL,1UL,1UL,4294967295UL,4294967292UL,4294967295UL,1UL};
    int8_t *l_94[9][3] = {{&p_1332->g_31,&p_1332->g_31,&p_1332->g_31},{&p_1332->g_31,&p_1332->g_31,&p_1332->g_31},{&p_1332->g_31,&p_1332->g_31,&p_1332->g_31},{&p_1332->g_31,&p_1332->g_31,&p_1332->g_31},{&p_1332->g_31,&p_1332->g_31,&p_1332->g_31},{&p_1332->g_31,&p_1332->g_31,&p_1332->g_31},{&p_1332->g_31,&p_1332->g_31,&p_1332->g_31},{&p_1332->g_31,&p_1332->g_31,&p_1332->g_31},{&p_1332->g_31,&p_1332->g_31,&p_1332->g_31}};
    uint64_t *l_95 = &p_1332->g_96;
    int32_t l_108 = 0x6A07D533L;
    int32_t l_142 = 0x163C95D7L;
    int32_t l_144[8] = {0x55F070ADL,1L,0x55F070ADL,0x55F070ADL,1L,0x55F070ADL,0x55F070ADL,1L};
    int i, j;
    (*p_1332->g_90) = func_62((*p_1332->g_48), (((safe_add_func_uint64_t_u_u((l_89[2] <= ((void*)0 != p_1332->g_90)), (safe_sub_func_int64_t_s_s(p_1332->g_4, ((*l_95) = ((void*)0 == l_94[8][0])))))) >= (l_95 == p_1332->g_97[8])) >= l_89[1]), &p_1332->g_52, l_94[8][0], &p_1332->g_52, p_1332);
    for (p_1332->g_81 = 7; (p_1332->g_81 > (-25)); --p_1332->g_81)
    { /* block id: 46 */
        int32_t *l_104 = &p_1332->g_15;
        int32_t l_105 = 0x6A0CFD0EL;
        int32_t *l_106 = &l_105;
        int32_t *l_107[9][7][4] = {{{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8}},{{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8}},{{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8}},{{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8}},{{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8}},{{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8}},{{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8}},{{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8}},{{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8},{&p_1332->g_81,&l_105,&p_1332->g_13,&p_1332->g_8}}};
        uint8_t l_109 = 255UL;
        uint32_t *l_112 = &p_1332->g_113;
        uint64_t *l_131 = &p_1332->g_96;
        int64_t l_151 = 0x15DE3CFF6BEFEFA7L;
        int i, j, k;
        l_109--;
        if ((((*l_112) = 6UL) , (*l_104)))
        { /* block id: 49 */
            uint8_t l_114 = 1UL;
            int32_t l_134 = 3L;
            if (l_89[5])
                break;
            l_114++;
            for (l_109 = 0; (l_109 < 32); l_109 = safe_add_func_uint8_t_u_u(l_109, 9))
            { /* block id: 54 */
                uint16_t *l_127 = &p_1332->g_128;
                uint64_t *l_132[8] = {&p_1332->g_133,&p_1332->g_133,&p_1332->g_133,&p_1332->g_133,&p_1332->g_133,&p_1332->g_133,&p_1332->g_133,&p_1332->g_133};
                uint64_t **l_135 = &l_132[5];
                int32_t l_136[2][3][4] = {{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}}};
                int32_t * volatile l_137 = &l_136[0][1][0];/* VOLATILE GLOBAL l_137 */
                int i, j, k;
                (*l_104) = (safe_mod_func_int32_t_s_s(0x6692E2E7L, (p_1332->g_84 &= (((*l_106) |= (*p_1332->g_48)) >= ((safe_sub_func_uint16_t_u_u(9UL, (safe_sub_func_int32_t_s_s((((safe_add_func_uint64_t_u_u((l_134 = ((*l_95) ^= (l_108 == ((--(*l_127)) , ((void*)0 == l_131))))), (l_136[0][1][0] = (((*l_135) = l_132[3]) != (void*)0)))) > p_1332->g_113) == 0x35188A0EL), 0xC7C79251L)))) , p_1332->g_13)))));
                for (p_59 = 0; (p_59 <= 2); p_59 += 1)
                { /* block id: 65 */
                    l_137 = (*p_1332->g_90);
                }
                return p_1332->g_138;
            }
        }
        else
        { /* block id: 70 */
            int64_t l_139 = 0L;
            int32_t l_140 = 5L;
            int32_t l_141 = 0x162409C1L;
            int32_t l_143 = (-1L);
            int32_t l_145[4][9][2] = {{{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL}},{{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL}},{{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL}},{{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL},{0x028DA7E5L,0x49C74A2BL}}};
            int8_t l_146 = 2L;
            uint8_t l_147 = 0xA2L;
            int64_t l_152 = 0x03DD02602C7639DAL;
            uint16_t l_153 = 0xBD5CL;
            int i, j, k;
            l_147++;
            --l_153;
            for (l_108 = 0; (l_108 <= 13); l_108 = safe_add_func_int16_t_s_s(l_108, 8))
            { /* block id: 75 */
                if ((*p_60))
                    break;
                for (p_1332->g_138.f1 = (-16); (p_1332->g_138.f1 <= (-10)); ++p_1332->g_138.f1)
                { /* block id: 79 */
                    for (p_61.f1 = 8; (p_61.f1 >= 3); p_61.f1 -= 1)
                    { /* block id: 82 */
                        int32_t l_160 = 0x32BF8D36L;
                        int i;
                        (*l_104) = (l_89[p_61.f1] >= ((l_160 &= ((void*)0 != (*p_1332->g_51))) , ((*l_131) = 18446744073709551611UL)));
                    }
                    return p_61;
                }
                (*p_1332->g_90) = p_60;
            }
            return p_1332->g_138;
        }
        (*l_104) = (*l_106);
    }
    if ((safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((p_1332->g_100 , (safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((((((l_89[4] && p_1332->g_150[5]) && ((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((((p_1332->g_9 >= (*p_1332->g_52)) >= 0L) && (safe_unary_minus_func_uint32_t_u(l_142))), 1)), (*p_1332->g_52))) <= ((((p_1332->g_138.f0 && p_1332->g_81) && l_142) | 0xD3L) , p_1332->g_15))) || 0x7CL) == p_1332->g_150[2]) , (*p_1332->g_52)), p_59)), p_1332->g_4)), (**p_1332->g_51))), l_108))), l_89[2])), p_59)), l_142)))
    { /* block id: 95 */
        uint64_t **l_186 = &l_95;
        int8_t *l_193 = &p_1332->g_31;
        int64_t *l_194 = &p_1332->g_195;
        int32_t l_196 = 7L;
        int16_t *l_197 = &p_1332->g_198;
        (*p_60) = (~(safe_mod_func_uint32_t_u_u((((((*l_197) = (((p_1332->g_6 > p_1332->g_138.f0) , ((((safe_mul_func_int8_t_s_s((safe_mod_func_int64_t_s_s((!p_61.f2), 0x9892BBAF6A02321DL)), ((void*)0 == l_186))) || (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u((-1L), 2)), (safe_div_func_int64_t_s_s(7L, (+((*l_194) = ((l_193 == l_193) > 4UL)))))))) < (-5L)) , l_196)) < 0x78L)) == (-1L)) < p_1332->g_138.f2) >= p_61.f0), l_196)));
        (*p_1332->g_90) = (*p_1332->g_90);
        for (l_142 = 0; (l_142 <= 7); l_142 += 1)
        { /* block id: 102 */
            for (p_1332->g_198 = 1; (p_1332->g_198 <= 7); p_1332->g_198 += 1)
            { /* block id: 105 */
                int i;
                (*p_60) = l_144[p_1332->g_198];
            }
        }
    }
    else
    { /* block id: 109 */
        int32_t l_208 = 0x68D2A354L;
        int32_t l_213 = 0x044B6E03L;
        int32_t **l_221 = &p_1332->g_220[0];
        int32_t l_278[5];
        int32_t *l_291 = &l_144[4];
        int32_t *l_292 = &l_278[2];
        int32_t *l_293[6][1][7] = {{{&p_1332->g_4,(void*)0,(void*)0,&p_1332->g_4,&p_1332->g_4,(void*)0,(void*)0}},{{&p_1332->g_4,(void*)0,(void*)0,&p_1332->g_4,&p_1332->g_4,(void*)0,(void*)0}},{{&p_1332->g_4,(void*)0,(void*)0,&p_1332->g_4,&p_1332->g_4,(void*)0,(void*)0}},{{&p_1332->g_4,(void*)0,(void*)0,&p_1332->g_4,&p_1332->g_4,(void*)0,(void*)0}},{{&p_1332->g_4,(void*)0,(void*)0,&p_1332->g_4,&p_1332->g_4,(void*)0,(void*)0}},{{&p_1332->g_4,(void*)0,(void*)0,&p_1332->g_4,&p_1332->g_4,(void*)0,(void*)0}}};
        uint32_t l_294 = 4294967295UL;
        uint16_t l_313 = 1UL;
        int8_t **l_330 = &l_94[6][2];
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_278[i] = 0x76AE4E40L;
        for (p_1332->g_96 = 0; (p_1332->g_96 <= 4); p_1332->g_96 = safe_add_func_int32_t_s_s(p_1332->g_96, 2))
        { /* block id: 112 */
            int16_t *l_205 = &p_1332->g_198;
            int16_t *l_206 = &p_1332->g_207;
            int8_t **l_209 = &l_94[8][0];
            int32_t *l_210 = (void*)0;
            uint8_t *l_211[9] = {(void*)0,&p_1332->g_212,(void*)0,(void*)0,&p_1332->g_212,(void*)0,(void*)0,&p_1332->g_212,(void*)0};
            int i;
            (*p_1332->g_90) = p_60;
            (*p_1332->g_90) = (*p_1332->g_90);
            l_213 = (safe_rshift_func_uint8_t_u_u((p_1332->g_212 |= (((p_1332->g_13 < (safe_add_func_int16_t_s_s((l_142 = (l_208 = ((*l_206) ^= ((*l_205) &= p_1332->g_3)))), p_1332->g_15))) , func_62((((p_59 <= p_59) >= 4294967289UL) != ((-1L) > ((p_61.f1 <= (!(!p_61.f0))) == 1L))), p_59, l_209, l_94[8][0], &p_1332->g_52, p_1332)) == l_210)), 5));
        }
        for (l_142 = 0; (l_142 >= (-11)); l_142 = safe_sub_func_int16_t_s_s(l_142, 1))
        { /* block id: 124 */
            int64_t *l_231 = &p_1332->g_232;
            int32_t l_254 = 0x3C11497FL;
            uint32_t l_272[9] = {4294967287UL,1UL,4294967287UL,4294967287UL,1UL,4294967287UL,4294967287UL,1UL,4294967287UL};
            int32_t l_283 = (-1L);
            int32_t l_287 = (-1L);
            int i;
            (*p_1332->g_90) = p_60;
            (*p_60) &= (safe_sub_func_int8_t_s_s((p_1332->g_12[6][0][2] <= p_61.f1), (p_1332->g_150[2] = 0x75L)));
            if (((*p_60) = ((*p_1332->g_48) = (((0x032A9964395A0857L <= ((p_1332->g_3 , (((((p_1332->g_218[0] , (void*)0) == (l_221 = p_1332->g_219)) ^ (p_61.f1 <= (safe_unary_minus_func_int64_t_s((((safe_sub_func_int64_t_s_s(((*l_231) = (p_1332->g_195 = (((&l_144[4] == (void*)0) == ((safe_div_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_u(((((safe_mul_func_int16_t_s_s((-1L), p_1332->g_207)) || p_59) < 0x5B87L) & p_61.f1), 4)) >= (**p_1332->g_51)) & p_61.f0), l_89[0])) & p_61.f1)) != p_61.f2))), p_1332->g_138.f0)) >= p_61.f2) , (-1L)))))) != p_61.f1) > 4294967289UL)) < 0x283E0B29770BCB46L)) != p_1332->g_218[0].f0.f0) || p_61.f0))))
            { /* block id: 133 */
                if ((*p_60))
                    break;
            }
            else
            { /* block id: 135 */
                int8_t *l_265 = &p_1332->g_31;
                int32_t l_277[8][7] = {{0x0749B269L,(-3L),0x7A74D587L,0x26FEAA3BL,0x7A74D587L,(-3L),0x0749B269L},{0x0749B269L,(-3L),0x7A74D587L,0x26FEAA3BL,0x7A74D587L,(-3L),0x0749B269L},{0x0749B269L,(-3L),0x7A74D587L,0x26FEAA3BL,0x7A74D587L,(-3L),0x0749B269L},{0x0749B269L,(-3L),0x7A74D587L,0x26FEAA3BL,0x7A74D587L,(-3L),0x0749B269L},{0x0749B269L,(-3L),0x7A74D587L,0x26FEAA3BL,0x7A74D587L,(-3L),0x0749B269L},{0x0749B269L,(-3L),0x7A74D587L,0x26FEAA3BL,0x7A74D587L,(-3L),0x0749B269L},{0x0749B269L,(-3L),0x7A74D587L,0x26FEAA3BL,0x7A74D587L,(-3L),0x0749B269L},{0x0749B269L,(-3L),0x7A74D587L,0x26FEAA3BL,0x7A74D587L,(-3L),0x0749B269L}};
                int i, j;
                for (p_1332->g_15 = 0; (p_1332->g_15 == 14); p_1332->g_15++)
                { /* block id: 138 */
                    int64_t *l_270 = &p_1332->g_195;
                    uint64_t l_271[8] = {8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL};
                    int32_t l_279 = 0x78D56A65L;
                    int32_t l_280 = 0L;
                    int32_t l_281 = 0x063262B0L;
                    int32_t l_284 = (-10L);
                    int32_t l_285 = 0x75D53E3EL;
                    int32_t l_286 = 0x4DEC152AL;
                    int i;
                    for (p_1332->g_138.f1 = 29; (p_1332->g_138.f1 < (-5)); p_1332->g_138.f1 = safe_sub_func_int8_t_s_s(p_1332->g_138.f1, 9))
                    { /* block id: 141 */
                        uint32_t *l_238 = (void*)0;
                        uint32_t **l_237 = &l_238;
                        uint32_t *l_240[6] = {&p_1332->g_113,&p_1332->g_113,&p_1332->g_113,&p_1332->g_113,&p_1332->g_113,&p_1332->g_113};
                        uint32_t **l_239 = &l_240[0];
                        int32_t l_249 = 0L;
                        uint8_t *l_250 = &p_1332->g_212;
                        uint16_t *l_273[9][7] = {{&p_1332->g_128,&p_1332->g_128,(void*)0,&p_1332->g_128,(void*)0,&p_1332->g_128,&p_1332->g_128},{&p_1332->g_128,&p_1332->g_128,(void*)0,&p_1332->g_128,(void*)0,&p_1332->g_128,&p_1332->g_128},{&p_1332->g_128,&p_1332->g_128,(void*)0,&p_1332->g_128,(void*)0,&p_1332->g_128,&p_1332->g_128},{&p_1332->g_128,&p_1332->g_128,(void*)0,&p_1332->g_128,(void*)0,&p_1332->g_128,&p_1332->g_128},{&p_1332->g_128,&p_1332->g_128,(void*)0,&p_1332->g_128,(void*)0,&p_1332->g_128,&p_1332->g_128},{&p_1332->g_128,&p_1332->g_128,(void*)0,&p_1332->g_128,(void*)0,&p_1332->g_128,&p_1332->g_128},{&p_1332->g_128,&p_1332->g_128,(void*)0,&p_1332->g_128,(void*)0,&p_1332->g_128,&p_1332->g_128},{&p_1332->g_128,&p_1332->g_128,(void*)0,&p_1332->g_128,(void*)0,&p_1332->g_128,&p_1332->g_128},{&p_1332->g_128,&p_1332->g_128,(void*)0,&p_1332->g_128,(void*)0,&p_1332->g_128,&p_1332->g_128}};
                        int32_t l_274 = 3L;
                        int32_t *l_275 = (void*)0;
                        int32_t *l_276[5][1][2];
                        int32_t l_282 = 0x5E37D020L;
                        uint16_t l_288[8] = {0x7AEFL,0x7AEFL,0x7AEFL,0x7AEFL,0x7AEFL,0x7AEFL,0x7AEFL,0x7AEFL};
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 2; k++)
                                    l_276[i][j][k] = &l_144[1];
                            }
                        }
                        l_274 ^= ((((*l_237) = &p_1332->g_113) == ((*l_239) = &p_59)) == (safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s(((((l_254 = (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(0x0AL, (l_249 ^= (**p_1332->g_51)))), (p_1332->g_253 = ((*l_250)++))))) == p_61.f0) , (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((**p_1332->g_90), (l_254 = (safe_mul_func_int8_t_s_s((((((*p_1332->g_51) = l_265) != l_250) , ((l_108 = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((((l_270 != &p_1332->g_195) && l_271[0]) , p_1332->g_198), l_272[5])), p_61.f1)) && 0x3CCBD10398B69F1DL)) <= (**l_221))) ^ 9L), p_61.f0))))), 0L)), l_271[0])), 0x54L))) == 0x13L), p_59)), 1)));
                        l_288[6]--;
                    }
                }
                if (l_277[3][1])
                    continue;
                return p_1332->g_138;
            }
        }
        l_294--;
        for (p_61.f0 = 0; (p_61.f0 >= 46); p_61.f0++)
        { /* block id: 162 */
            union U1 l_305 = {0x68DF9AE7L};
            int32_t l_311 = 1L;
            int16_t l_312[5] = {(-5L),(-5L),(-5L),(-5L),(-5L)};
            int i;
            if (((l_95 != (void*)0) <= (0x59L | ((safe_div_func_int32_t_s_s(((p_61.f2 ^ (((+0x6BL) == ((3L ^ 0UL) && (safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s(l_142, ((l_305 , l_305.f0) , 0x4BL))), p_61.f1)))) ^ 4294967295UL)) == p_61.f2), (*p_60))) , (*p_1332->g_52)))))
            { /* block id: 163 */
                uint8_t *l_308 = &p_1332->g_212;
                uint32_t *l_309 = &l_305.f0;
                int16_t l_310 = 0L;
                for (l_213 = 4; (l_213 != (-11)); l_213 = safe_sub_func_int8_t_s_s(l_213, 2))
                { /* block id: 166 */
                    (*l_291) = (-6L);
                    (*l_291) &= ((l_308 == (void*)0) < (-1L));
                }
                (*l_291) |= (((4294967291UL & p_1332->g_195) , ((*l_309) = 0x38A77FD8L)) <= ((p_61.f0 == 0x11B97CB8DA8DD452L) >= 0xE2B7761DL));
                l_313++;
            }
            else
            { /* block id: 173 */
                uint16_t *l_325 = &l_313;
                (*p_1332->g_90) = ((*p_1332->g_219) = func_62(((!(p_1332->g_316 , (safe_add_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((65526UL != (((safe_add_func_int16_t_s_s(((void*)0 != &p_1332->g_52), p_1332->g_232)) , (safe_sub_func_uint16_t_u_u(((*l_325)++), 0xCA4DL))) > (*p_1332->g_52))), (safe_mul_func_uint16_t_u_u((p_61 , (((*p_1332->g_91) = (*p_60)) < l_312[0])), p_61.f0)))) & p_59), p_1332->g_84)))) || (**l_221)), l_311, l_330, l_94[4][1], &l_94[8][0], p_1332));
                for (p_1332->g_15 = (-30); (p_1332->g_15 < (-20)); p_1332->g_15 = safe_add_func_uint64_t_u_u(p_1332->g_15, 5))
                { /* block id: 180 */
                    for (p_1332->g_113 = 0; (p_1332->g_113 <= 7); p_1332->g_113 += 1)
                    { /* block id: 183 */
                        int i;
                        (*p_1332->g_90) = &l_144[p_1332->g_113];
                        (*l_292) &= 0x0E48DCC6L;
                        return p_1332->g_218[0].f0;
                    }
                }
            }
            return p_1332->g_138;
        }
    }
    return p_61;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_62(int32_t  p_63, uint32_t  p_64, int8_t ** p_65, int8_t * p_66, int8_t ** p_67, struct S3 * p_1332)
{ /* block id: 39 */
    return &p_1332->g_81;
}


/* ------------------------------------------ */
/* 
 * reads : p_1332->g_15 p_1332->g_81 p_1332->g_84
 * writes: p_1332->g_15 p_1332->g_81 p_1332->g_84
 */
int8_t * func_68(int8_t * p_69, struct S3 * p_1332)
{ /* block id: 23 */
    uint64_t l_70 = 0UL;
    ++l_70;
    for (p_1332->g_15 = 0; (p_1332->g_15 <= 15); p_1332->g_15 = safe_add_func_int16_t_s_s(p_1332->g_15, 2))
    { /* block id: 27 */
        int32_t *l_75 = &p_1332->g_13;
        int32_t **l_76 = &l_75;
        int32_t *l_82 = &p_1332->g_81;
        int32_t *l_83 = &p_1332->g_84;
        (*l_76) = l_75;
        for (l_70 = 16; (l_70 != 15); l_70--)
        { /* block id: 31 */
            int32_t *l_79 = (void*)0;
            int32_t *l_80 = &p_1332->g_81;
            (*l_80) ^= (-1L);
        }
        (*l_83) |= ((*l_82) = l_70);
        if (l_70)
            continue;
    }
    return p_69;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S3 c_1333;
    struct S3* p_1332 = &c_1333;
    struct S3 c_1334 = {
        0L, // p_1332->g_3
        (-2L), // p_1332->g_4
        0x1DD2EB2FL, // p_1332->g_5
        (-4L), // p_1332->g_6
        0x5664087AL, // p_1332->g_7
        0x67550730L, // p_1332->g_8
        0x6C415051L, // p_1332->g_9
        9L, // p_1332->g_10
        {{{0x65DC64F6L,0x3ED85728L,1L,0x2D1532D4L,0x1543F36FL,0x65DC64F6L,0x2D1532D4L,0L,0x2D1532D4L}},{{0x65DC64F6L,0x3ED85728L,1L,0x2D1532D4L,0x1543F36FL,0x65DC64F6L,0x2D1532D4L,0L,0x2D1532D4L}},{{0x65DC64F6L,0x3ED85728L,1L,0x2D1532D4L,0x1543F36FL,0x65DC64F6L,0x2D1532D4L,0L,0x2D1532D4L}},{{0x65DC64F6L,0x3ED85728L,1L,0x2D1532D4L,0x1543F36FL,0x65DC64F6L,0x2D1532D4L,0L,0x2D1532D4L}},{{0x65DC64F6L,0x3ED85728L,1L,0x2D1532D4L,0x1543F36FL,0x65DC64F6L,0x2D1532D4L,0L,0x2D1532D4L}},{{0x65DC64F6L,0x3ED85728L,1L,0x2D1532D4L,0x1543F36FL,0x65DC64F6L,0x2D1532D4L,0L,0x2D1532D4L}},{{0x65DC64F6L,0x3ED85728L,1L,0x2D1532D4L,0x1543F36FL,0x65DC64F6L,0x2D1532D4L,0L,0x2D1532D4L}},{{0x65DC64F6L,0x3ED85728L,1L,0x2D1532D4L,0x1543F36FL,0x65DC64F6L,0x2D1532D4L,0L,0x2D1532D4L}},{{0x65DC64F6L,0x3ED85728L,1L,0x2D1532D4L,0x1543F36FL,0x65DC64F6L,0x2D1532D4L,0L,0x2D1532D4L}},{{0x65DC64F6L,0x3ED85728L,1L,0x2D1532D4L,0x1543F36FL,0x65DC64F6L,0x2D1532D4L,0L,0x2D1532D4L}}}, // p_1332->g_11
        {{{0x5FE1602AL,(-1L),0x5FE1602AL}},{{0x5FE1602AL,(-1L),0x5FE1602AL}},{{0x5FE1602AL,(-1L),0x5FE1602AL}},{{0x5FE1602AL,(-1L),0x5FE1602AL}},{{0x5FE1602AL,(-1L),0x5FE1602AL}},{{0x5FE1602AL,(-1L),0x5FE1602AL}},{{0x5FE1602AL,(-1L),0x5FE1602AL}},{{0x5FE1602AL,(-1L),0x5FE1602AL}},{{0x5FE1602AL,(-1L),0x5FE1602AL}},{{0x5FE1602AL,(-1L),0x5FE1602AL}}}, // p_1332->g_12
        (-1L), // p_1332->g_13
        0x2760E068L, // p_1332->g_15
        (-6L), // p_1332->g_31
        &p_1332->g_15, // p_1332->g_48
        &p_1332->g_31, // p_1332->g_52
        &p_1332->g_52, // p_1332->g_51
        0x6F3B0A6BL, // p_1332->g_81
        6L, // p_1332->g_84
        &p_1332->g_15, // p_1332->g_91
        &p_1332->g_91, // p_1332->g_90
        1UL, // p_1332->g_96
        1UL, // p_1332->g_98
        0xD1337A3F171379FBL, // p_1332->g_99
        1UL, // p_1332->g_100
        18446744073709551606UL, // p_1332->g_101
        {&p_1332->g_98,&p_1332->g_98,&p_1332->g_98,&p_1332->g_98,&p_1332->g_98,&p_1332->g_98,&p_1332->g_98,&p_1332->g_98,&p_1332->g_98,&p_1332->g_98}, // p_1332->g_97
        0x00A11419L, // p_1332->g_113
        2UL, // p_1332->g_128
        0xD128F2DF7396B2AAL, // p_1332->g_133
        {1UL,-6L,0x69DD6738L}, // p_1332->g_138
        {0x72L,0x72L,0x72L,0x72L,0x72L,0x72L,0x72L}, // p_1332->g_150
        0x245B532A7CD9CA31L, // p_1332->g_195
        6L, // p_1332->g_198
        0L, // p_1332->g_207
        255UL, // p_1332->g_212
        {{{0xB6B8FFD3L,0L,-1L}},{{0xB6B8FFD3L,0L,-1L}},{{0xB6B8FFD3L,0L,-1L}},{{0xB6B8FFD3L,0L,-1L}},{{0xB6B8FFD3L,0L,-1L}},{{0xB6B8FFD3L,0L,-1L}}}, // p_1332->g_218
        {&p_1332->g_13,&p_1332->g_13}, // p_1332->g_220
        &p_1332->g_220[0], // p_1332->g_219
        (-1L), // p_1332->g_232
        0UL, // p_1332->g_253
        {0UL}, // p_1332->g_316
        &p_1332->g_316.f0, // p_1332->g_383
        &p_1332->g_383, // p_1332->g_382
        (void*)0, // p_1332->g_468
        (void*)0, // p_1332->g_492
        (void*)0, // p_1332->g_515
        &p_1332->g_515, // p_1332->g_514
        {&p_1332->g_218[0].f0,&p_1332->g_218[0].f0,&p_1332->g_218[0].f0,&p_1332->g_218[0].f0,&p_1332->g_218[0].f0,&p_1332->g_218[0].f0}, // p_1332->g_550
        {{{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212}},{{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212}},{{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212},{&p_1332->g_212,(void*)0,&p_1332->g_212,(void*)0,&p_1332->g_212,&p_1332->g_212}}}, // p_1332->g_567
        &p_1332->g_567[2][6][3], // p_1332->g_566
        {&p_1332->g_316,&p_1332->g_316,&p_1332->g_316,&p_1332->g_316,&p_1332->g_316,&p_1332->g_316,&p_1332->g_316,&p_1332->g_316}, // p_1332->g_591
        &p_1332->g_591[0], // p_1332->g_590
        {1L,1L,1L,1L,1L,1L}, // p_1332->g_626
        &p_1332->g_84, // p_1332->g_654
        {{{4294967293UL,0x287FB57BL,0x27514FFAL}},{{4294967293UL,0x287FB57BL,0x27514FFAL}},{{4294967293UL,0x287FB57BL,0x27514FFAL}},{{4294967293UL,0x287FB57BL,0x27514FFAL}},{{4294967293UL,0x287FB57BL,0x27514FFAL}},{{4294967293UL,0x287FB57BL,0x27514FFAL}},{{4294967293UL,0x287FB57BL,0x27514FFAL}},{{4294967293UL,0x287FB57BL,0x27514FFAL}}}, // p_1332->g_712
        7L, // p_1332->g_724
        {{{&p_1332->g_724,&p_1332->g_724,&p_1332->g_724,&p_1332->g_724}},{{&p_1332->g_724,&p_1332->g_724,&p_1332->g_724,&p_1332->g_724}},{{&p_1332->g_724,&p_1332->g_724,&p_1332->g_724,&p_1332->g_724}},{{&p_1332->g_724,&p_1332->g_724,&p_1332->g_724,&p_1332->g_724}},{{&p_1332->g_724,&p_1332->g_724,&p_1332->g_724,&p_1332->g_724}},{{&p_1332->g_724,&p_1332->g_724,&p_1332->g_724,&p_1332->g_724}}}, // p_1332->g_723
        &p_1332->g_723[1][0][0], // p_1332->g_722
        {&p_1332->g_515,&p_1332->g_515}, // p_1332->g_758
        &p_1332->g_515, // p_1332->g_759
        {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}, // p_1332->g_770
        0x0F712778L, // p_1332->g_785
        8L, // p_1332->g_798
        &p_1332->g_128, // p_1332->g_816
        &p_1332->g_816, // p_1332->g_815
        (void*)0, // p_1332->g_822
        {{0x54C0724DL,0x3F69B245L,1L}}, // p_1332->g_895
        {{0x43CCDF3EL,0x4229DD52L,0L}}, // p_1332->g_920
        (-1L), // p_1332->g_1021
        &p_1332->g_920.f0, // p_1332->g_1030
        255UL, // p_1332->g_1031
        0x151AL, // p_1332->g_1066
        &p_1332->g_138, // p_1332->g_1070
        {{{{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0xF9E2B83BL,-9L,0x07D8CBC9L}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}}},{{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0xF9E2B83BL,-9L,0x07D8CBC9L}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}}}},{{{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0xF9E2B83BL,-9L,0x07D8CBC9L}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}}},{{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0xF9E2B83BL,-9L,0x07D8CBC9L}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}}}},{{{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0xF9E2B83BL,-9L,0x07D8CBC9L}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}}},{{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0xF9E2B83BL,-9L,0x07D8CBC9L}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}}}},{{{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0xF9E2B83BL,-9L,0x07D8CBC9L}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}}},{{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0xF9E2B83BL,-9L,0x07D8CBC9L}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}}}},{{{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0xF9E2B83BL,-9L,0x07D8CBC9L}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}}},{{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0xF9E2B83BL,-9L,0x07D8CBC9L}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}}}},{{{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0xF9E2B83BL,-9L,0x07D8CBC9L}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}}},{{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{4294967286UL,0x540B5436L,0x0DB8D90CL}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0xF9E2B83BL,-9L,0x07D8CBC9L}},{{0x16FAFBB0L,0x05AB52D9L,1L}},{{0x7C3A286AL,0x77DC222DL,0x604436FDL}}}}}, // p_1332->g_1116
        {&p_1332->g_138,&p_1332->g_712[7].f0,&p_1332->g_218[0].f0,&p_1332->g_712[7].f0,&p_1332->g_138,&p_1332->g_138,&p_1332->g_712[7].f0,&p_1332->g_218[0].f0,&p_1332->g_712[7].f0,&p_1332->g_138}, // p_1332->g_1144
        (void*)0, // p_1332->g_1145
        (void*)0, // p_1332->g_1154
        &p_1332->g_895.f0, // p_1332->g_1155
        {{0x2330897FL,0x315F7774L,0x115788F0L}}, // p_1332->g_1222
        (void*)0, // p_1332->g_1297
        {{1UL,6L,0L}}, // p_1332->g_1311
        0x1EL, // p_1332->g_1331
    };
    c_1333 = c_1334;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1332);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1332->g_3, "p_1332->g_3", print_hash_value);
    transparent_crc(p_1332->g_4, "p_1332->g_4", print_hash_value);
    transparent_crc(p_1332->g_5, "p_1332->g_5", print_hash_value);
    transparent_crc(p_1332->g_6, "p_1332->g_6", print_hash_value);
    transparent_crc(p_1332->g_7, "p_1332->g_7", print_hash_value);
    transparent_crc(p_1332->g_8, "p_1332->g_8", print_hash_value);
    transparent_crc(p_1332->g_9, "p_1332->g_9", print_hash_value);
    transparent_crc(p_1332->g_10, "p_1332->g_10", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(p_1332->g_11[i][j][k], "p_1332->g_11[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1332->g_12[i][j][k], "p_1332->g_12[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1332->g_13, "p_1332->g_13", print_hash_value);
    transparent_crc(p_1332->g_15, "p_1332->g_15", print_hash_value);
    transparent_crc(p_1332->g_31, "p_1332->g_31", print_hash_value);
    transparent_crc(p_1332->g_81, "p_1332->g_81", print_hash_value);
    transparent_crc(p_1332->g_84, "p_1332->g_84", print_hash_value);
    transparent_crc(p_1332->g_96, "p_1332->g_96", print_hash_value);
    transparent_crc(p_1332->g_98, "p_1332->g_98", print_hash_value);
    transparent_crc(p_1332->g_99, "p_1332->g_99", print_hash_value);
    transparent_crc(p_1332->g_100, "p_1332->g_100", print_hash_value);
    transparent_crc(p_1332->g_101, "p_1332->g_101", print_hash_value);
    transparent_crc(p_1332->g_113, "p_1332->g_113", print_hash_value);
    transparent_crc(p_1332->g_128, "p_1332->g_128", print_hash_value);
    transparent_crc(p_1332->g_133, "p_1332->g_133", print_hash_value);
    transparent_crc(p_1332->g_138.f0, "p_1332->g_138.f0", print_hash_value);
    transparent_crc(p_1332->g_138.f1, "p_1332->g_138.f1", print_hash_value);
    transparent_crc(p_1332->g_138.f2, "p_1332->g_138.f2", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1332->g_150[i], "p_1332->g_150[i]", print_hash_value);

    }
    transparent_crc(p_1332->g_195, "p_1332->g_195", print_hash_value);
    transparent_crc(p_1332->g_198, "p_1332->g_198", print_hash_value);
    transparent_crc(p_1332->g_207, "p_1332->g_207", print_hash_value);
    transparent_crc(p_1332->g_212, "p_1332->g_212", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1332->g_218[i].f0.f0, "p_1332->g_218[i].f0.f0", print_hash_value);
        transparent_crc(p_1332->g_218[i].f0.f1, "p_1332->g_218[i].f0.f1", print_hash_value);
        transparent_crc(p_1332->g_218[i].f0.f2, "p_1332->g_218[i].f0.f2", print_hash_value);

    }
    transparent_crc(p_1332->g_232, "p_1332->g_232", print_hash_value);
    transparent_crc(p_1332->g_253, "p_1332->g_253", print_hash_value);
    transparent_crc(p_1332->g_316.f0, "p_1332->g_316.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1332->g_626[i], "p_1332->g_626[i]", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1332->g_712[i].f0.f0, "p_1332->g_712[i].f0.f0", print_hash_value);
        transparent_crc(p_1332->g_712[i].f0.f1, "p_1332->g_712[i].f0.f1", print_hash_value);
        transparent_crc(p_1332->g_712[i].f0.f2, "p_1332->g_712[i].f0.f2", print_hash_value);

    }
    transparent_crc(p_1332->g_724, "p_1332->g_724", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1332->g_770[i], "p_1332->g_770[i]", print_hash_value);

    }
    transparent_crc(p_1332->g_785, "p_1332->g_785", print_hash_value);
    transparent_crc(p_1332->g_798, "p_1332->g_798", print_hash_value);
    transparent_crc(p_1332->g_895.f0.f0, "p_1332->g_895.f0.f0", print_hash_value);
    transparent_crc(p_1332->g_895.f0.f1, "p_1332->g_895.f0.f1", print_hash_value);
    transparent_crc(p_1332->g_895.f0.f2, "p_1332->g_895.f0.f2", print_hash_value);
    transparent_crc(p_1332->g_920.f0.f0, "p_1332->g_920.f0.f0", print_hash_value);
    transparent_crc(p_1332->g_920.f0.f1, "p_1332->g_920.f0.f1", print_hash_value);
    transparent_crc(p_1332->g_920.f0.f2, "p_1332->g_920.f0.f2", print_hash_value);
    transparent_crc(p_1332->g_1021, "p_1332->g_1021", print_hash_value);
    transparent_crc(p_1332->g_1031, "p_1332->g_1031", print_hash_value);
    transparent_crc(p_1332->g_1066, "p_1332->g_1066", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1332->g_1116[i][j][k].f0.f0, "p_1332->g_1116[i][j][k].f0.f0", print_hash_value);
                transparent_crc(p_1332->g_1116[i][j][k].f0.f1, "p_1332->g_1116[i][j][k].f0.f1", print_hash_value);
                transparent_crc(p_1332->g_1116[i][j][k].f0.f2, "p_1332->g_1116[i][j][k].f0.f2", print_hash_value);

            }
        }
    }
    transparent_crc(p_1332->g_1222.f0.f0, "p_1332->g_1222.f0.f0", print_hash_value);
    transparent_crc(p_1332->g_1222.f0.f1, "p_1332->g_1222.f0.f1", print_hash_value);
    transparent_crc(p_1332->g_1222.f0.f2, "p_1332->g_1222.f0.f2", print_hash_value);
    transparent_crc(p_1332->g_1311.f0.f0, "p_1332->g_1311.f0.f0", print_hash_value);
    transparent_crc(p_1332->g_1311.f0.f1, "p_1332->g_1311.f0.f1", print_hash_value);
    transparent_crc(p_1332->g_1311.f0.f2, "p_1332->g_1311.f0.f2", print_hash_value);
    transparent_crc(p_1332->g_1331, "p_1332->g_1331", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
