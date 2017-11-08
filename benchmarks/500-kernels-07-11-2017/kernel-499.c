// -g 29,67,2 -l 29,1,1
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


// Seed: 1258645836

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   int32_t  f1;
};

union U1 {
   int8_t * volatile  f0;
   int32_t  f1;
   int32_t  f2;
   volatile struct S0  f3;
};

struct S2 {
    volatile int32_t g_2[1];
    volatile int32_t g_3[1];
    volatile int32_t g_4;
    int32_t g_5;
    volatile int32_t g_8;
    int32_t g_9;
    int32_t g_16[8];
    uint8_t g_23;
    int16_t g_48;
    int32_t g_51;
    int8_t g_83[9];
    int8_t *g_84;
    int16_t g_92;
    uint16_t g_100;
    int32_t g_104;
    int32_t g_107;
    uint64_t g_128;
    union U1 g_133;
    int64_t g_154;
    uint32_t g_156;
    int64_t g_158;
    volatile uint16_t g_214;
    uint8_t g_219;
    struct S0 g_228;
    struct S0 * volatile g_227;
    int32_t *g_234;
    struct S0 *g_247;
    struct S0 **g_246;
    volatile union U1 g_272;
    volatile int32_t ** volatile g_298;
    uint16_t *g_306;
    int8_t **g_312;
    int32_t ** volatile g_360;
    volatile union U1 g_376;
    uint8_t g_384;
    volatile uint64_t g_436;
    int32_t ** volatile g_446;
    int16_t g_485;
    int32_t g_491;
    int64_t *g_514;
    int32_t ** volatile g_522;
    int32_t *g_538;
    int32_t ** volatile g_543[1];
    int32_t ** volatile g_544;
    volatile union U1 g_563[2][8];
    struct S0 g_569;
    struct S0 * volatile g_568;
    int8_t g_656;
    uint16_t g_742[10];
    int16_t *g_851;
    int16_t * volatile *g_850[4][8];
    int16_t * volatile ** volatile g_852;
    uint32_t g_881;
    uint8_t *g_887;
    uint8_t **g_886;
    struct S0 * volatile g_927;
    volatile int16_t g_956;
    union U1 g_1004;
    struct S0 * volatile g_1015[6][6];
    struct S0 * volatile g_1018;
    struct S0 * volatile g_1019;
    int8_t * volatile *g_1039;
    int8_t * volatile * volatile *g_1038;
    int32_t ** volatile g_1040;
    struct S0 * volatile g_1078[2];
    int32_t *g_1139;
    int32_t ** volatile g_1140;
    volatile uint32_t g_1162;
    volatile uint32_t * volatile g_1161;
    volatile uint32_t * volatile * volatile g_1160;
    uint8_t g_1171[5][6][7];
    volatile int8_t g_1253;
};


/* --- FORWARD DECLARATIONS --- */
uint8_t  func_1(struct S2 * p_1271);
int32_t * func_10(int32_t  p_11, int32_t * p_12, uint32_t  p_13, int32_t  p_14, struct S2 * p_1271);
int32_t * func_17(int32_t  p_18, int8_t * p_19, uint32_t  p_20, int32_t  p_21, int64_t  p_22, struct S2 * p_1271);
int8_t * func_24(int8_t * p_25, uint64_t  p_26, struct S2 * p_1271);
uint16_t  func_32(uint32_t  p_33, int32_t * p_34, uint16_t  p_35, int32_t * p_36, struct S2 * p_1271);
int32_t * func_38(int32_t * p_39, uint64_t  p_40, int8_t * p_41, int32_t  p_42, int8_t * p_43, struct S2 * p_1271);
int32_t * func_44(int16_t  p_45, uint32_t  p_46, struct S2 * p_1271);
int32_t * func_58(int32_t  p_59, struct S2 * p_1271);
uint64_t  func_64(int64_t  p_65, int8_t * p_66, struct S2 * p_1271);
uint32_t  func_87(uint32_t  p_88, uint32_t  p_89, int16_t * p_90, uint8_t  p_91, struct S2 * p_1271);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1271->g_9 p_1271->g_23 p_1271->g_104 p_1271->g_2 p_1271->g_514 p_1271->g_158 p_1271->g_1139 p_1271->g_5 p_1271->g_16 p_1271->g_886 p_1271->g_887
 * writes: p_1271->g_5 p_1271->g_9 p_1271->g_23 p_1271->g_104 p_1271->g_16 p_1271->g_234
 */
uint8_t  func_1(struct S2 * p_1271)
{ /* block id: 4 */
    int32_t l_819 = 0L;
    int64_t l_1153[7];
    uint16_t **l_1157[7] = {&p_1271->g_306,&p_1271->g_306,&p_1271->g_306,&p_1271->g_306,&p_1271->g_306,&p_1271->g_306,&p_1271->g_306};
    uint16_t ***l_1156 = &l_1157[4];
    int16_t *l_1190 = (void*)0;
    uint16_t l_1199 = 65535UL;
    int32_t l_1252[4] = {0x6155CA69L,0x6155CA69L,0x6155CA69L,0x6155CA69L};
    int32_t **l_1270 = &p_1271->g_234;
    int i;
    for (i = 0; i < 7; i++)
        l_1153[i] = 0x2D998C4DD86142D2L;
    for (p_1271->g_5 = 0; (p_1271->g_5 <= 13); ++p_1271->g_5)
    { /* block id: 7 */
        int32_t l_31 = 0x281C1D99L;
        int64_t *l_1167 = &l_1153[6];
        for (p_1271->g_9 = 0; (p_1271->g_9 >= 0); p_1271->g_9 -= 1)
        { /* block id: 10 */
            int32_t *l_15 = &p_1271->g_16[6];
            uint16_t **l_1155 = (void*)0;
            uint16_t ***l_1154 = &l_1155;
            uint32_t *l_1164[6][2][9] = {{{&p_1271->g_881,(void*)0,&p_1271->g_881,&p_1271->g_156,&p_1271->g_881,(void*)0,&p_1271->g_881,(void*)0,&p_1271->g_881},{&p_1271->g_881,(void*)0,&p_1271->g_881,&p_1271->g_156,&p_1271->g_881,(void*)0,&p_1271->g_881,(void*)0,&p_1271->g_881}},{{&p_1271->g_881,(void*)0,&p_1271->g_881,&p_1271->g_156,&p_1271->g_881,(void*)0,&p_1271->g_881,(void*)0,&p_1271->g_881},{&p_1271->g_881,(void*)0,&p_1271->g_881,&p_1271->g_156,&p_1271->g_881,(void*)0,&p_1271->g_881,(void*)0,&p_1271->g_881}},{{&p_1271->g_881,(void*)0,&p_1271->g_881,&p_1271->g_156,&p_1271->g_881,(void*)0,&p_1271->g_881,(void*)0,&p_1271->g_881},{&p_1271->g_881,(void*)0,&p_1271->g_881,&p_1271->g_156,&p_1271->g_881,(void*)0,&p_1271->g_881,(void*)0,&p_1271->g_881}},{{&p_1271->g_881,(void*)0,&p_1271->g_881,&p_1271->g_156,&p_1271->g_881,(void*)0,&p_1271->g_881,(void*)0,&p_1271->g_881},{&p_1271->g_881,(void*)0,&p_1271->g_881,&p_1271->g_156,&p_1271->g_881,(void*)0,&p_1271->g_881,(void*)0,&p_1271->g_881}},{{&p_1271->g_881,(void*)0,&p_1271->g_881,&p_1271->g_156,&p_1271->g_881,(void*)0,&p_1271->g_881,(void*)0,&p_1271->g_881},{&p_1271->g_881,(void*)0,&p_1271->g_881,&p_1271->g_156,&p_1271->g_881,(void*)0,&p_1271->g_881,(void*)0,&p_1271->g_881}},{{&p_1271->g_881,(void*)0,&p_1271->g_881,&p_1271->g_156,&p_1271->g_881,(void*)0,&p_1271->g_881,(void*)0,&p_1271->g_881},{&p_1271->g_881,(void*)0,&p_1271->g_881,&p_1271->g_156,&p_1271->g_881,(void*)0,&p_1271->g_881,(void*)0,&p_1271->g_881}}};
            uint32_t **l_1163[6][7][2] = {{{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]}},{{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]}},{{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]}},{{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]}},{{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]}},{{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]},{&l_1164[4][1][0],&l_1164[4][1][0]}}};
            struct S0 **l_1168 = (void*)0;
            int i, j, k;
            (1 + 1);
        }
    }
    for (p_1271->g_23 = 0; (p_1271->g_23 > 2); p_1271->g_23 = safe_add_func_int8_t_s_s(p_1271->g_23, 1))
    { /* block id: 602 */
        int64_t l_1181 = 0x54C3C18EE87FF809L;
        int32_t l_1185 = 0x1D2CD103L;
        uint16_t l_1205 = 65527UL;
        int32_t l_1223 = 0L;
        int16_t l_1249 = 0x7F58L;
        uint32_t l_1254 = 0x96C2D26EL;
        struct S0 l_1264 = {2L,-1L};
        int16_t l_1269 = 0x02F4L;
        for (p_1271->g_104 = 0; (p_1271->g_104 <= 0); p_1271->g_104 += 1)
        { /* block id: 605 */
            int32_t l_1180 = (-1L);
            int32_t *l_1182 = &p_1271->g_16[0];
            int i;
            (*l_1182) |= ((safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(p_1271->g_2[p_1271->g_104], (safe_mod_func_uint8_t_u_u((&p_1271->g_491 == &p_1271->g_491), l_819)))), ((+((((((((void*)0 != &p_1271->g_1139) || 0x007C830EDBA3F97DL) | ((l_1180 , ((*p_1271->g_514) || l_1181)) || 3UL)) , &p_1271->g_83[6]) != (void*)0) , (*p_1271->g_1139)) , l_1181)) , 5L))) , l_1181);
        }
        if (l_1181)
            break;
    }
    (*p_1271->g_1139) &= (&p_1271->g_227 == &p_1271->g_1018);
    (*l_1270) = (void*)0;
    return (**p_1271->g_886);
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_1019 p_1271->g_306 p_1271->g_100 p_1271->g_436 p_1271->g_51 p_1271->g_569.f0 p_1271->g_1038 p_1271->g_514 p_1271->g_154 p_1271->g_158 p_1271->g_16 p_1271->g_1040 p_1271->g_228.f1 p_1271->g_563 p_1271->g_133.f1 p_1271->g_228 p_1271->g_48 p_1271->g_92 p_1271->g_485 p_1271->g_1039 p_1271->g_84 p_1271->g_219 p_1271->g_568 p_1271->g_569 p_1271->g_1139
 * writes: p_1271->g_228 p_1271->g_51 p_1271->g_234 p_1271->g_100 p_1271->g_569.f0 p_1271->g_48 p_1271->g_92 p_1271->g_16 p_1271->g_83 p_1271->g_219
 */
int32_t * func_10(int32_t  p_11, int32_t * p_12, uint32_t  p_13, int32_t  p_14, struct S2 * p_1271)
{ /* block id: 540 */
    struct S0 l_1017 = {1L,0x7EB80344L};
    int32_t *l_1036 = &p_1271->g_51;
    int32_t l_1037 = 9L;
    int8_t **l_1043 = &p_1271->g_84;
    int32_t l_1045[6][8] = {{2L,1L,(-1L),2L,0x2DBC85C6L,(-1L),(-1L),0x2DBC85C6L},{2L,1L,(-1L),2L,0x2DBC85C6L,(-1L),(-1L),0x2DBC85C6L},{2L,1L,(-1L),2L,0x2DBC85C6L,(-1L),(-1L),0x2DBC85C6L},{2L,1L,(-1L),2L,0x2DBC85C6L,(-1L),(-1L),0x2DBC85C6L},{2L,1L,(-1L),2L,0x2DBC85C6L,(-1L),(-1L),0x2DBC85C6L},{2L,1L,(-1L),2L,0x2DBC85C6L,(-1L),(-1L),0x2DBC85C6L}};
    int16_t l_1076 = (-1L);
    int32_t l_1122 = 0L;
    int8_t l_1124 = (-10L);
    int32_t l_1125 = 0x42AFC657L;
    int32_t l_1126 = (-5L);
    int32_t l_1127 = 0L;
    int32_t l_1128 = 0x0B92B615L;
    int32_t l_1129 = 0x5EDB532CL;
    int32_t l_1130 = (-7L);
    int32_t l_1131 = 8L;
    int32_t l_1132 = 0L;
    int32_t l_1133 = 0x1F26D839L;
    int32_t l_1135[10];
    int i, j;
    for (i = 0; i < 10; i++)
        l_1135[i] = 0L;
    (*p_1271->g_1019) = l_1017;
    if ((safe_add_func_int64_t_s_s(((!(*p_1271->g_306)) , p_11), ((safe_mod_func_uint64_t_u_u(p_1271->g_436, (((((+(safe_rshift_func_uint16_t_u_u(((((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((*p_1271->g_306), (safe_add_func_uint16_t_u_u((((p_13 > p_14) , (((l_1037 = (((l_1017.f1 , (((((*l_1036) = (safe_rshift_func_uint16_t_u_s((*p_1271->g_306), (&p_1271->g_234 != (void*)0)))) >= 4294967292UL) > p_13) > 1L)) , (*l_1036)) == 0xE56F36C614B2FC4CL)) >= p_14) > p_14)) <= p_11), 0UL)))), 0UL)), p_11)) && (*l_1036)) | p_14) , (*p_1271->g_306)), 11))) ^ p_1271->g_569.f0) , &p_1271->g_312) != p_1271->g_1038) , (*p_1271->g_514)))) != p_1271->g_16[6]))))
    { /* block id: 544 */
        int32_t **l_1041 = (void*)0;
        int32_t **l_1042 = &p_1271->g_234;
        (*p_1271->g_1040) = &p_11;
        (*l_1042) = (p_1271->g_228.f1 , &p_11);
    }
    else
    { /* block id: 547 */
        uint16_t l_1044[3];
        int32_t l_1050 = 9L;
        int i;
        for (i = 0; i < 3; i++)
            l_1044[i] = 1UL;
        (*l_1036) = (((l_1043 != (void*)0) , ((l_1044[1] <= l_1044[1]) && (*p_1271->g_306))) && (l_1045[1][5] & (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((((((((l_1050 = p_11) > p_14) > (p_1271->g_563[1][6] , l_1044[1])) ^ p_1271->g_133.f1) != (*p_1271->g_306)) != l_1044[2]) <= (*l_1036)), 4)), (-1L)))));
    }
    if ((*l_1036))
    { /* block id: 551 */
        uint32_t *l_1057[4] = {&p_1271->g_881,&p_1271->g_881,&p_1271->g_881,&p_1271->g_881};
        uint8_t l_1062 = 0x6FL;
        uint16_t *l_1067 = &p_1271->g_742[5];
        int32_t *l_1074 = &p_1271->g_16[6];
        int8_t *l_1075 = &p_1271->g_656;
        int32_t **l_1077 = &l_1036;
        int i;
        (*l_1077) = &p_11;
    }
    else
    { /* block id: 557 */
        struct S0 *l_1079[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t *l_1088 = (void*)0;
        int32_t l_1118 = 0x02FF3FACL;
        int32_t l_1123[9][4] = {{1L,(-8L),(-8L),1L},{1L,(-8L),(-8L),1L},{1L,(-8L),(-8L),1L},{1L,(-8L),(-8L),1L},{1L,(-8L),(-8L),1L},{1L,(-8L),(-8L),1L},{1L,(-8L),(-8L),1L},{1L,(-8L),(-8L),1L},{1L,(-8L),(-8L),1L}};
        int16_t l_1134 = 0L;
        int i, j;
lbl_1089:
        l_1017 = (*p_1271->g_1019);
        if ((4294967291UL != ((safe_sub_func_uint16_t_u_u((1UL > 0xB7E3L), (safe_lshift_func_uint16_t_u_s(((*p_1271->g_306) |= 3UL), (((safe_sub_func_uint16_t_u_u(0x4D9BL, p_13)) , ((p_1271->g_16[2] , &p_1271->g_156) == (p_13 , l_1088))) > 0x01L))))) < 0x6313B386EC46C440L)))
        { /* block id: 560 */
            int8_t l_1094 = 0L;
            struct S0 **l_1106 = &l_1079[9];
            if (p_1271->g_133.f1)
                goto lbl_1089;
            for (p_1271->g_569.f0 = 0; (p_1271->g_569.f0 == (-7)); p_1271->g_569.f0 = safe_sub_func_uint32_t_u_u(p_1271->g_569.f0, 1))
            { /* block id: 564 */
                int16_t l_1110 = 0x37FFL;
                for (p_1271->g_48 = (-5); (p_1271->g_48 < 9); p_1271->g_48++)
                { /* block id: 567 */
                    for (p_1271->g_92 = 7; (p_1271->g_92 >= 1); p_1271->g_92 -= 1)
                    { /* block id: 570 */
                        int16_t *l_1107 = &l_1076;
                        int i;
                        p_1271->g_16[p_1271->g_92] ^= l_1094;
                        l_1110 &= (safe_unary_minus_func_uint16_t_u((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((p_14 & ((p_1271->g_16[p_1271->g_92] < (p_13 == p_1271->g_485)) == (l_1106 == &p_1271->g_1078[0]))), ((*l_1107) = p_11))), 7)) , ((**p_1271->g_1039) = ((((p_14 >= (((safe_sub_func_uint8_t_u_u((1UL & 0xAFCA8C39L), l_1094)) , (-1L)) == p_14)) != p_14) > 0L) & l_1094))), 0x78L)), 0x05L))));
                    }
                }
                (*l_1036) = p_14;
            }
        }
        else
        { /* block id: 579 */
            int32_t *l_1119 = &p_1271->g_1004.f2;
            int32_t *l_1120 = &p_1271->g_133.f1;
            int32_t *l_1121[6] = {&p_1271->g_16[5],&p_1271->g_133.f1,&p_1271->g_16[5],&p_1271->g_16[5],&p_1271->g_133.f1,&p_1271->g_16[5]};
            uint64_t l_1136 = 0xEB505029DFA10C72L;
            int i;
            for (p_1271->g_219 = 11; (p_1271->g_219 != 3); --p_1271->g_219)
            { /* block id: 582 */
                int32_t l_1117[7][6][5] = {{{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL}},{{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL}},{{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL}},{{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL}},{{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL}},{{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL}},{{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL},{(-1L),(-4L),0x192E31DCL,0L,0x3C684BCDL}}};
                int i, j, k;
                (*l_1036) = (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(l_1117[6][0][3], l_1118)), 8));
                return l_1088;
            }
            --l_1136;
        }
        l_1017 = (*p_1271->g_568);
        l_1017 = (*p_1271->g_568);
    }
    return p_1271->g_1139;
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_491 p_1271->g_107 p_1271->g_446 p_1271->g_234 p_1271->g_306 p_1271->g_100 p_1271->g_83 p_1271->g_104 p_1271->g_51 p_1271->g_133.f1 p_1271->g_742 p_1271->g_158 p_1271->g_850 p_1271->g_852 p_1271->g_227 p_1271->g_228 p_1271->g_84 p_1271->g_219 p_1271->g_3 p_1271->g_128 p_1271->g_881 p_1271->g_851 p_1271->g_92 p_1271->g_485 p_1271->g_886 p_1271->g_544 p_1271->g_887 p_1271->g_23 p_1271->g_514 p_1271->g_154 p_1271->g_522 p_1271->g_927 p_1271->g_214 p_1271->g_956 p_1271->g_133 p_1271->g_656 p_1271->g_1004 p_1271->g_5 p_1271->g_360
 * writes: p_1271->g_491 p_1271->g_107 p_1271->g_158 p_1271->g_850 p_1271->g_133.f1 p_1271->g_83 p_1271->g_104 p_1271->g_234 p_1271->g_485 p_1271->g_886 p_1271->g_569.f1 p_1271->g_51 p_1271->g_228 p_1271->g_156 p_1271->g_92 p_1271->g_881 p_1271->g_154 p_1271->g_100
 */
int32_t * func_17(int32_t  p_18, int8_t * p_19, uint32_t  p_20, int32_t  p_21, int64_t  p_22, struct S2 * p_1271)
{ /* block id: 415 */
    int64_t l_822 = 0x76983742B8366073L;
    uint16_t l_846 = 9UL;
    int32_t l_847 = (-3L);
    int32_t l_883[4] = {0x762834A4L,0x762834A4L,0x762834A4L,0x762834A4L};
    int32_t *l_884 = &p_1271->g_104;
    int32_t **l_885[9] = {&l_884,&p_1271->g_234,&l_884,&l_884,&p_1271->g_234,&l_884,&l_884,&p_1271->g_234,&l_884};
    uint8_t l_899 = 0x0AL;
    struct S0 l_926[7][3][7] = {{{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}},{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}},{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}}},{{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}},{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}},{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}}},{{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}},{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}},{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}}},{{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}},{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}},{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}}},{{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}},{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}},{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}}},{{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}},{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}},{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}}},{{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}},{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}},{{0L,0x0628B25DL},{-3L,1L},{-3L,0x488B1B7DL},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,1L},{0x401196395CA1EDDCL,0x0CBFD70EL},{-3L,0x488B1B7DL}}}};
    int32_t *l_939 = (void*)0;
    int32_t *l_957 = (void*)0;
    struct S0 *l_1014 = (void*)0;
    struct S0 l_1016[5][2][10] = {{{{0x6A277DEA6460F174L,0x066679CDL},{0x28456FAA21DF9ADFL,-1L},{0L,0x0113587FL},{-1L,0x5A785954L},{5L,-1L},{0x07BECE8A9C5FC059L,-9L},{0x19E2053674DD298EL,0x3A25F208L},{0L,0x0113587FL},{-5L,0x7BDDE72CL},{1L,0L}},{{0x6A277DEA6460F174L,0x066679CDL},{0x28456FAA21DF9ADFL,-1L},{0L,0x0113587FL},{-1L,0x5A785954L},{5L,-1L},{0x07BECE8A9C5FC059L,-9L},{0x19E2053674DD298EL,0x3A25F208L},{0L,0x0113587FL},{-5L,0x7BDDE72CL},{1L,0L}}},{{{0x6A277DEA6460F174L,0x066679CDL},{0x28456FAA21DF9ADFL,-1L},{0L,0x0113587FL},{-1L,0x5A785954L},{5L,-1L},{0x07BECE8A9C5FC059L,-9L},{0x19E2053674DD298EL,0x3A25F208L},{0L,0x0113587FL},{-5L,0x7BDDE72CL},{1L,0L}},{{0x6A277DEA6460F174L,0x066679CDL},{0x28456FAA21DF9ADFL,-1L},{0L,0x0113587FL},{-1L,0x5A785954L},{5L,-1L},{0x07BECE8A9C5FC059L,-9L},{0x19E2053674DD298EL,0x3A25F208L},{0L,0x0113587FL},{-5L,0x7BDDE72CL},{1L,0L}}},{{{0x6A277DEA6460F174L,0x066679CDL},{0x28456FAA21DF9ADFL,-1L},{0L,0x0113587FL},{-1L,0x5A785954L},{5L,-1L},{0x07BECE8A9C5FC059L,-9L},{0x19E2053674DD298EL,0x3A25F208L},{0L,0x0113587FL},{-5L,0x7BDDE72CL},{1L,0L}},{{0x6A277DEA6460F174L,0x066679CDL},{0x28456FAA21DF9ADFL,-1L},{0L,0x0113587FL},{-1L,0x5A785954L},{5L,-1L},{0x07BECE8A9C5FC059L,-9L},{0x19E2053674DD298EL,0x3A25F208L},{0L,0x0113587FL},{-5L,0x7BDDE72CL},{1L,0L}}},{{{0x6A277DEA6460F174L,0x066679CDL},{0x28456FAA21DF9ADFL,-1L},{0L,0x0113587FL},{-1L,0x5A785954L},{5L,-1L},{0x07BECE8A9C5FC059L,-9L},{0x19E2053674DD298EL,0x3A25F208L},{0L,0x0113587FL},{-5L,0x7BDDE72CL},{1L,0L}},{{0x6A277DEA6460F174L,0x066679CDL},{0x28456FAA21DF9ADFL,-1L},{0L,0x0113587FL},{-1L,0x5A785954L},{5L,-1L},{0x07BECE8A9C5FC059L,-9L},{0x19E2053674DD298EL,0x3A25F208L},{0L,0x0113587FL},{-5L,0x7BDDE72CL},{1L,0L}}},{{{0x6A277DEA6460F174L,0x066679CDL},{0x28456FAA21DF9ADFL,-1L},{0L,0x0113587FL},{-1L,0x5A785954L},{5L,-1L},{0x07BECE8A9C5FC059L,-9L},{0x19E2053674DD298EL,0x3A25F208L},{0L,0x0113587FL},{-5L,0x7BDDE72CL},{1L,0L}},{{0x6A277DEA6460F174L,0x066679CDL},{0x28456FAA21DF9ADFL,-1L},{0L,0x0113587FL},{-1L,0x5A785954L},{5L,-1L},{0x07BECE8A9C5FC059L,-9L},{0x19E2053674DD298EL,0x3A25F208L},{0L,0x0113587FL},{-5L,0x7BDDE72CL},{1L,0L}}}};
    int i, j, k;
    for (p_1271->g_491 = 25; (p_1271->g_491 < 18); p_1271->g_491 = safe_sub_func_int32_t_s_s(p_1271->g_491, 9))
    { /* block id: 418 */
        int32_t *l_823 = &p_1271->g_133.f2;
        int32_t *l_824 = &p_1271->g_133.f1;
        int32_t *l_825 = &p_1271->g_104;
        int32_t *l_826[5] = {&p_1271->g_133.f1,&p_1271->g_133.f1,&p_1271->g_133.f1,&p_1271->g_133.f1,&p_1271->g_133.f1};
        uint16_t l_827 = 0xA908L;
        uint16_t **l_869 = (void*)0;
        uint16_t l_880 = 0x51FAL;
        int16_t l_882 = 0x103BL;
        int i;
        l_827--;
        for (p_1271->g_107 = 10; (p_1271->g_107 > 20); p_1271->g_107 = safe_add_func_int8_t_s_s(p_1271->g_107, 3))
        { /* block id: 422 */
            return (*p_1271->g_446);
        }
        l_847 ^= ((((safe_lshift_func_int16_t_s_u(((l_822 & ((((p_21 , 0x2DD3L) <= (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(0UL, (!(*p_1271->g_306)))), (((*p_19) | (0x3BEFL != (0x4356435505966FC0L <= (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u((*p_19), p_20)) || p_21), p_21)), l_822))))) == (*l_825)))), 15))) & p_22) || p_1271->g_51)) && p_22), l_846)) <= p_1271->g_133.f1) , 0xC7L) | p_1271->g_742[8]);
        for (p_21 = 0; (p_21 != 15); ++p_21)
        { /* block id: 428 */
            uint16_t **l_868 = &p_1271->g_306;
            uint16_t ***l_867 = &l_868;
            int32_t l_879 = 0L;
            for (p_1271->g_158 = 0; (p_1271->g_158 <= 4); p_1271->g_158 += 1)
            { /* block id: 431 */
                int i;
                (*p_1271->g_852) = p_1271->g_850[1][3];
                return l_826[p_1271->g_158];
            }
            if (p_18)
                continue;
            (*l_824) = ((*p_1271->g_227) , p_21);
            l_883[1] ^= ((*l_824) = ((l_822 && (safe_mod_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(((p_1271->g_107 , ((safe_lshift_func_int8_t_s_u(((*p_1271->g_84) = l_822), 3)) >= (safe_lshift_func_int16_t_s_s((((*l_867) = &p_1271->g_306) == l_869), ((((((((safe_add_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((p_1271->g_219 | (p_21 <= ((*l_825) |= (safe_unary_minus_func_int32_t_s(((((safe_add_func_uint8_t_u_u((l_879 , l_880), p_1271->g_3[0])) , p_18) , l_847) == p_22)))))), 5)) == l_822), l_846)), p_1271->g_228.f0)) ^ p_1271->g_107) , l_879) || (-4L)) || 3UL) >= l_879) >= p_1271->g_128) , p_22))))) <= p_1271->g_881), 10)), (*p_1271->g_851))) > p_21) >= l_882), 7)), p_22)), p_1271->g_491))) > 0x1DBAL));
        }
    }
    (*p_1271->g_446) = l_884;
    for (p_1271->g_107 = 3; (p_1271->g_107 >= 0); p_1271->g_107 -= 1)
    { /* block id: 447 */
        uint8_t **l_889 = &p_1271->g_887;
        int32_t l_891 = (-5L);
        uint32_t *l_918 = &p_1271->g_156;
        uint32_t **l_917 = &l_918;
        uint16_t *l_919 = (void*)0;
        int32_t *l_958 = &p_1271->g_51;
        int32_t *l_959 = &p_1271->g_104;
        struct S0 l_962 = {0x0AACFCF133E89183L,0x37288660L};
        int16_t **l_994 = &p_1271->g_851;
        for (p_1271->g_485 = 0; (p_1271->g_485 <= 3); p_1271->g_485 += 1)
        { /* block id: 450 */
            uint8_t ***l_888 = &p_1271->g_886;
            int64_t *l_890[6];
            int32_t l_896 = 0x502617ABL;
            int32_t *l_925[3];
            int i;
            for (i = 0; i < 6; i++)
                l_890[i] = &l_822;
            for (i = 0; i < 3; i++)
                l_925[i] = (void*)0;
            l_889 = ((*l_888) = p_1271->g_886);
            if (((l_890[3] == (p_20 , &l_822)) < (l_891 || (safe_sub_func_int32_t_s_s(p_22, ((!((safe_sub_func_uint8_t_u_u(l_896, (safe_div_func_int32_t_s_s((0x65B5L == 0xC805L), (l_883[p_1271->g_485] = (-2L)))))) >= p_22)) && (*l_884)))))))
            { /* block id: 454 */
                uint32_t l_903 = 4294967287UL;
                (*p_1271->g_234) = l_899;
                for (l_822 = (-23); (l_822 > 28); ++l_822)
                { /* block id: 458 */
                    int64_t l_902 = 0x2F56E39F9888285AL;
                    for (p_1271->g_569.f1 = 0; (p_1271->g_569.f1 >= 0); p_1271->g_569.f1 -= 1)
                    { /* block id: 461 */
                        return (*p_1271->g_544);
                    }
                    l_903++;
                    for (p_22 = (-8); (p_22 > 22); p_22++)
                    { /* block id: 467 */
                        uint64_t l_922[7][9] = {{0x45DC21E52E8B4229L,0x45DC21E52E8B4229L,0x719E0A6CF6CC39FEL,18446744073709551607UL,18446744073709551614UL,0x891557CAB9E1E1AEL,0xC5181B09E90EBB5DL,1UL,0xC5181B09E90EBB5DL},{0x45DC21E52E8B4229L,0x45DC21E52E8B4229L,0x719E0A6CF6CC39FEL,18446744073709551607UL,18446744073709551614UL,0x891557CAB9E1E1AEL,0xC5181B09E90EBB5DL,1UL,0xC5181B09E90EBB5DL},{0x45DC21E52E8B4229L,0x45DC21E52E8B4229L,0x719E0A6CF6CC39FEL,18446744073709551607UL,18446744073709551614UL,0x891557CAB9E1E1AEL,0xC5181B09E90EBB5DL,1UL,0xC5181B09E90EBB5DL},{0x45DC21E52E8B4229L,0x45DC21E52E8B4229L,0x719E0A6CF6CC39FEL,18446744073709551607UL,18446744073709551614UL,0x891557CAB9E1E1AEL,0xC5181B09E90EBB5DL,1UL,0xC5181B09E90EBB5DL},{0x45DC21E52E8B4229L,0x45DC21E52E8B4229L,0x719E0A6CF6CC39FEL,18446744073709551607UL,18446744073709551614UL,0x891557CAB9E1E1AEL,0xC5181B09E90EBB5DL,1UL,0xC5181B09E90EBB5DL},{0x45DC21E52E8B4229L,0x45DC21E52E8B4229L,0x719E0A6CF6CC39FEL,18446744073709551607UL,18446744073709551614UL,0x891557CAB9E1E1AEL,0xC5181B09E90EBB5DL,1UL,0xC5181B09E90EBB5DL},{0x45DC21E52E8B4229L,0x45DC21E52E8B4229L,0x719E0A6CF6CC39FEL,18446744073709551607UL,18446744073709551614UL,0x891557CAB9E1E1AEL,0xC5181B09E90EBB5DL,1UL,0xC5181B09E90EBB5DL}};
                        uint32_t **l_924 = &l_918;
                        uint32_t ***l_923 = &l_924;
                        int i, j;
                        if (p_21)
                            break;
                        p_1271->g_51 &= ((0x07BCF6BCF73DC3D0L & ((safe_sub_func_uint64_t_u_u((((**p_1271->g_446) < l_902) >= (safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_int16_t_s(l_883[p_1271->g_485])) , (safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((l_917 != ((*l_923) = ((&p_1271->g_742[2] == l_919) , ((~(p_1271->g_228.f1 >= ((safe_mul_func_int8_t_s_s((((*p_1271->g_306) < l_922[5][6]) | (*p_1271->g_234)), (*p_1271->g_887))) ^ p_18))) , (void*)0)))), p_20)), (*p_1271->g_306)))), l_902))), (*p_1271->g_514))) < 0x2214L)) , (*l_884));
                        l_891 = p_21;
                        l_925[2] = (*p_1271->g_522);
                    }
                    if (p_22)
                        continue;
                }
                (*p_1271->g_927) = l_926[6][0][5];
                if ((*l_884))
                    break;
            }
            else
            { /* block id: 478 */
                int64_t l_938 = (-1L);
                (*p_1271->g_544) = func_58(p_21, p_1271);
                l_938 ^= ((249UL | (((safe_sub_func_int8_t_s_s((p_21 & 1UL), (safe_mul_func_int16_t_s_s((l_891 != 1UL), 4L)))) == (safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((p_1271->g_491 > 1L), p_20)), (*p_1271->g_306))), p_1271->g_214))) || 1L)) , (**p_1271->g_522));
            }
            (*p_1271->g_446) = &l_896;
            return l_939;
        }
        if ((((((3UL < (safe_sub_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_22, (safe_sub_func_int8_t_s_s(((((**l_917) = p_1271->g_83[1]) < ((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((safe_add_func_int16_t_s_s(((*p_1271->g_851) = (safe_rshift_func_uint8_t_u_s((((p_22 != (p_1271->g_956 & (((*p_19) , 5UL) == l_891))) ^ p_20) == l_891), 1))), (-1L))) & (*p_1271->g_514)), 15)) & p_22), 5)) , (**p_1271->g_544))) | p_21), p_22)))), l_891)), l_891))) || l_891) > 0x42L) >= (-1L)) & p_21))
        { /* block id: 487 */
            l_959 = (l_958 = l_957);
        }
        else
        { /* block id: 490 */
            uint32_t *l_967 = &p_1271->g_156;
            int32_t l_968 = 0x47B957C0L;
            int32_t l_969 = 1L;
            int16_t **l_992 = &p_1271->g_851;
            int32_t *l_1010 = &p_1271->g_5;
            for (p_1271->g_881 = 0; (p_1271->g_881 > 18); p_1271->g_881++)
            { /* block id: 493 */
                int32_t *l_983 = &l_891;
                uint8_t ***l_1006 = &l_889;
                if (((*p_1271->g_927) , ((*l_884) = (((l_962 , (*l_959)) >= 0x787BD366F5DD572EL) & (p_1271->g_133 , (((safe_div_func_int8_t_s_s((*p_19), (safe_sub_func_uint32_t_u_u((((l_968 |= (p_20 & ((((((*l_917) = (void*)0) == l_967) , p_20) , p_1271->g_100) && 1L))) == 0xB5A4873AL) && (*p_1271->g_514)), p_21)))) != p_20) || l_969))))))
                { /* block id: 497 */
                    int32_t *l_970 = (void*)0;
                    return l_970;
                }
                else
                { /* block id: 499 */
                    struct S0 *l_971 = &p_1271->g_228;
                    int32_t l_982 = 0x41B42F35L;
                    int16_t **l_990 = &p_1271->g_851;
                    int32_t ***l_1009 = &l_885[4];
                    (*l_971) = (*p_1271->g_227);
                    if ((safe_lshift_func_int8_t_s_u(0x6DL, (safe_add_func_uint64_t_u_u(((((safe_sub_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((*l_958) | ((void*)0 != (*p_1271->g_852))), (l_982 = (p_1271->g_100 | ((safe_mul_func_uint16_t_u_u(0x39BCL, (*l_884))) | 0x32L))))), ((*p_1271->g_514) & 0x04BD99AE4557776CL))) , p_20) == p_20) >= (*p_1271->g_234)), l_969)))))
                    { /* block id: 502 */
                        l_983 = (*p_1271->g_446);
                    }
                    else
                    { /* block id: 504 */
                        int16_t ***l_991 = &l_990;
                        int16_t ***l_993[1][4] = {{&l_992,&l_992,&l_992,&l_992}};
                        int32_t l_1001 = 0x0FE10354L;
                        int32_t l_1005 = 7L;
                        int i, j;
                        (*l_983) &= (safe_lshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((((*p_1271->g_514) = (((~((*p_19) = (safe_lshift_func_int8_t_s_s(((~p_1271->g_228.f0) < (((((+p_1271->g_656) , l_968) & (((*l_991) = l_990) == (l_994 = l_992))) || (safe_mul_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(((safe_mod_func_uint16_t_u_u(((((*p_1271->g_306) <= l_1001) , ((((safe_div_func_uint64_t_u_u(p_1271->g_228.f0, (p_1271->g_1004 , p_22))) | 1UL) && p_22) | p_22)) != p_22), 0xF77AL)) <= (*p_1271->g_84)), p_1271->g_485)) | l_1001), l_1005))) & (-1L))), 5)))) & (*l_958)) != 0x3322L)) , l_1001), 0xA5C3L)) , (*p_1271->g_306)), 11));
                        (*l_983) ^= ((*l_959) = p_20);
                        if (p_22)
                            break;
                    }
                    l_983 = func_44(((((*l_967) = p_1271->g_5) | p_22) , 0x1D99L), (&p_1271->g_886 == l_1006), p_1271);
                    if ((safe_rshift_func_int8_t_s_u((((*l_1009) = &p_1271->g_234) == &p_1271->g_234), (p_18 | (-1L)))))
                    { /* block id: 517 */
                        if (p_22)
                            break;
                        if ((***l_1009))
                            break;
                    }
                    else
                    { /* block id: 520 */
                        (**l_1009) = l_983;
                        if (l_968)
                            continue;
                    }
                }
                (*l_884) = (+(**p_1271->g_544));
            }
            return l_1010;
        }
        for (p_1271->g_92 = 0; (p_1271->g_92 <= 0); p_1271->g_92 += 1)
        { /* block id: 531 */
            int32_t l_1013[8][5] = {{0x4CFDDA86L,0x4CFDDA86L,0x7A2EA8A2L,0x6E81B40FL,0x524F7A15L},{0x4CFDDA86L,0x4CFDDA86L,0x7A2EA8A2L,0x6E81B40FL,0x524F7A15L},{0x4CFDDA86L,0x4CFDDA86L,0x7A2EA8A2L,0x6E81B40FL,0x524F7A15L},{0x4CFDDA86L,0x4CFDDA86L,0x7A2EA8A2L,0x6E81B40FL,0x524F7A15L},{0x4CFDDA86L,0x4CFDDA86L,0x7A2EA8A2L,0x6E81B40FL,0x524F7A15L},{0x4CFDDA86L,0x4CFDDA86L,0x7A2EA8A2L,0x6E81B40FL,0x524F7A15L},{0x4CFDDA86L,0x4CFDDA86L,0x7A2EA8A2L,0x6E81B40FL,0x524F7A15L},{0x4CFDDA86L,0x4CFDDA86L,0x7A2EA8A2L,0x6E81B40FL,0x524F7A15L}};
            int i, j;
            (*l_884) ^= (l_1013[0][0] |= (5UL | ((*p_1271->g_306) = (0x79510461L != (+p_1271->g_83[p_1271->g_107])))));
        }
    }
    l_1016[2][0][1] = (l_926[0][1][6] = l_926[1][2][0]);
    return (*p_1271->g_360);
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_360 p_1271->g_234 p_1271->g_514 p_1271->g_158 p_1271->g_154 p_1271->g_384 p_1271->g_5 p_1271->g_228.f1 p_1271->g_306 p_1271->g_100 p_1271->g_247 p_1271->g_83 p_1271->g_3 p_1271->g_656 p_1271->g_104 p_1271->g_246 p_1271->g_569.f1 p_1271->g_563 p_1271->g_214 p_1271->g_84 p_1271->g_23 p_1271->g_491 p_1271->g_568 p_1271->g_569 p_1271->g_133.f1 p_1271->g_485 p_1271->g_107 p_1271->g_156 p_1271->g_446
 * writes: p_1271->g_158 p_1271->g_154 p_1271->g_384 p_1271->g_514 p_1271->g_569.f0 p_1271->g_228.f0 p_1271->g_228 p_1271->g_3 p_1271->g_234 p_1271->g_100 p_1271->g_128 p_1271->g_104 p_1271->g_247 p_1271->g_569.f1 p_1271->g_133.f1 p_1271->g_83 p_1271->g_156 p_1271->g_107 p_1271->g_246
 */
int8_t * func_24(int8_t * p_25, uint64_t  p_26, struct S2 * p_1271)
{ /* block id: 12 */
    uint8_t l_37 = 0x91L;
    int16_t *l_47[9] = {&p_1271->g_48,&p_1271->g_48,&p_1271->g_48,&p_1271->g_48,&p_1271->g_48,&p_1271->g_48,&p_1271->g_48,&p_1271->g_48,&p_1271->g_48};
    int32_t l_49 = 0x67DCC359L;
    int64_t *l_622 = &p_1271->g_154;
    int64_t l_623 = 0x34B1C93B9FDA726FL;
    int32_t l_624 = 0x28776AE4L;
    uint32_t *l_629[1];
    uint32_t **l_628 = &l_629[0];
    uint32_t ***l_627 = &l_628;
    int8_t *l_630 = &p_1271->g_83[2];
    int32_t *l_817 = &p_1271->g_51;
    int32_t *l_818 = &p_1271->g_133.f1;
    int i;
    for (i = 0; i < 1; i++)
        l_629[i] = &p_1271->g_156;
    l_817 = ((func_32(l_37, func_38(func_44((l_49 = l_37), p_26, p_1271), p_26, p_25, ((((((*l_622) |= ((*p_1271->g_514) = (*p_1271->g_514))) & (l_624 = l_623)) ^ (safe_mod_func_int64_t_s_s((((*l_627) = (void*)0) == &l_629[0]), l_37))) , l_37) , p_26), l_630, p_1271), l_37, l_629[0], p_1271) | p_26) , (void*)0);
    (*l_818) = (-1L);
    return l_630;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1271->g_234
 */
uint16_t  func_32(uint32_t  p_33, int32_t * p_34, uint16_t  p_35, int32_t * p_36, struct S2 * p_1271)
{ /* block id: 408 */
    int32_t **l_815 = &p_1271->g_234;
    int32_t *l_816[2];
    int i;
    for (i = 0; i < 2; i++)
        l_816[i] = &p_1271->g_104;
    l_816[0] = ((*l_815) = (void*)0);
    return p_35;
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_384 p_1271->g_514 p_1271->g_154 p_1271->g_5 p_1271->g_228.f1 p_1271->g_306 p_1271->g_100 p_1271->g_247 p_1271->g_83 p_1271->g_3 p_1271->g_656 p_1271->g_104 p_1271->g_246 p_1271->g_569.f1 p_1271->g_563 p_1271->g_214 p_1271->g_158 p_1271->g_84 p_1271->g_23 p_1271->g_491 p_1271->g_568 p_1271->g_569 p_1271->g_133.f1 p_1271->g_485 p_1271->g_107 p_1271->g_156 p_1271->g_446 p_1271->g_234
 * writes: p_1271->g_384 p_1271->g_514 p_1271->g_569.f0 p_1271->g_228.f0 p_1271->g_228 p_1271->g_3 p_1271->g_234 p_1271->g_100 p_1271->g_128 p_1271->g_104 p_1271->g_247 p_1271->g_569.f1 p_1271->g_133.f1 p_1271->g_83 p_1271->g_156 p_1271->g_107 p_1271->g_154 p_1271->g_246
 */
int32_t * func_38(int32_t * p_39, uint64_t  p_40, int8_t * p_41, int32_t  p_42, int8_t * p_43, struct S2 * p_1271)
{ /* block id: 294 */
    int64_t *l_634 = &p_1271->g_158;
    int32_t l_650 = 1L;
    uint64_t l_658 = 0x15592C592F4CDA51L;
    int32_t l_667[8][8][3] = {{{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L}},{{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L}},{{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L}},{{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L}},{{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L}},{{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L}},{{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L}},{{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L},{(-1L),0x22EA5225L,1L}}};
    struct S0 l_686 = {7L,0x1DB7E15BL};
    uint64_t l_728 = 1UL;
    int8_t l_735 = (-5L);
    int16_t *l_785[2][2] = {{&p_1271->g_92,&p_1271->g_92},{&p_1271->g_92,&p_1271->g_92}};
    struct S0 **l_799 = &p_1271->g_247;
    int32_t *l_814 = &p_1271->g_5;
    int i, j, k;
    for (p_1271->g_384 = 0; (p_1271->g_384 <= 0); p_1271->g_384 += 1)
    { /* block id: 297 */
        int64_t **l_635 = &p_1271->g_514;
        struct S0 l_641 = {0x0487169AF5FFA0E7L,-1L};
        int32_t *l_646 = &p_1271->g_5;
        int32_t l_652 = 0x0AA18723L;
        int32_t l_653 = 1L;
        int32_t l_655[3][4][1] = {{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L}}};
        int8_t l_668 = 1L;
        union U1 *l_748 = &p_1271->g_133;
        union U1 **l_747 = &l_748;
        int8_t l_778 = (-1L);
        int8_t **l_810 = (void*)0;
        int i, j, k;
        if ((safe_unary_minus_func_uint16_t_u(((((&p_1271->g_436 == (void*)0) > 18446744073709551615UL) , (l_634 = ((safe_lshift_func_int16_t_s_u(4L, 15)) , (void*)0))) != ((*l_635) = &p_1271->g_154)))))
        { /* block id: 300 */
            uint16_t l_638 = 4UL;
            int32_t l_645 = 0x6633EFD7L;
            int32_t *l_662 = &p_1271->g_104;
            int32_t *l_663 = &p_1271->g_133.f2;
            int32_t *l_664 = &l_645;
            int32_t *l_665 = &p_1271->g_51;
            int32_t *l_666[9] = {&p_1271->g_51,&p_1271->g_51,&p_1271->g_51,&p_1271->g_51,&p_1271->g_51,&p_1271->g_51,&p_1271->g_51,&p_1271->g_51,&p_1271->g_51};
            uint32_t l_669 = 1UL;
            int64_t *l_676[4][4] = {{&p_1271->g_158,&p_1271->g_158,&p_1271->g_158,&p_1271->g_158},{&p_1271->g_158,&p_1271->g_158,&p_1271->g_158,&p_1271->g_158},{&p_1271->g_158,&p_1271->g_158,&p_1271->g_158,&p_1271->g_158},{&p_1271->g_158,&p_1271->g_158,&p_1271->g_158,&p_1271->g_158}};
            int64_t **l_677 = &l_634;
            uint32_t l_682 = 1UL;
            int32_t *l_685 = &l_641.f1;
            int i, j;
            for (p_1271->g_569.f0 = 0; (p_1271->g_569.f0 <= 1); p_1271->g_569.f0 += 1)
            { /* block id: 303 */
                int32_t *l_636 = &p_1271->g_133.f2;
                int32_t *l_637[2][2][6] = {{{(void*)0,(void*)0,&p_1271->g_51,&p_1271->g_51,&p_1271->g_51,&p_1271->g_51},{(void*)0,(void*)0,&p_1271->g_51,&p_1271->g_51,&p_1271->g_51,&p_1271->g_51}},{{(void*)0,(void*)0,&p_1271->g_51,&p_1271->g_51,&p_1271->g_51,&p_1271->g_51},{(void*)0,(void*)0,&p_1271->g_51,&p_1271->g_51,&p_1271->g_51,&p_1271->g_51}}};
                int i, j, k;
                ++l_638;
                for (p_1271->g_228.f0 = 1; (p_1271->g_228.f0 >= 0); p_1271->g_228.f0 -= 1)
                { /* block id: 307 */
                    uint32_t *l_649 = &p_1271->g_156;
                    uint32_t **l_648 = &l_649;
                    int32_t l_651[5][2] = {{0x59F5C67DL,(-1L)},{0x59F5C67DL,(-1L)},{0x59F5C67DL,(-1L)},{0x59F5C67DL,(-1L)},{0x59F5C67DL,(-1L)}};
                    int i, j;
                    (1 + 1);
                }
            }
            l_650 |= 0x3EBA0AFCL;
            l_669--;
            (*p_1271->g_247) = ((safe_sub_func_int64_t_s_s((*p_1271->g_514), (p_42 || (safe_mod_func_int32_t_s_s(((l_676[2][2] != ((*l_677) = (void*)0)) < (safe_add_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((*l_646), l_682)), p_1271->g_228.f1))), (safe_mul_func_int8_t_s_s(((((*l_685) = 0L) , ((*p_1271->g_306) ^ (*p_1271->g_306))) < 0xFE19CB51C29C0E85L), 9L))))))) , l_686);
        }
        else
        { /* block id: 333 */
            int8_t **l_704 = &p_1271->g_84;
            int32_t l_705 = 0x37F98729L;
            for (p_42 = 1; (p_42 >= 0); p_42 -= 1)
            { /* block id: 336 */
                uint32_t l_692[3];
                int32_t l_702 = 3L;
                int16_t *l_706 = &p_1271->g_92;
                int i;
                for (i = 0; i < 3; i++)
                    l_692[i] = 4294967286UL;
                for (l_686.f1 = 1; (l_686.f1 >= 0); l_686.f1 -= 1)
                { /* block id: 339 */
                    int32_t *l_688 = (void*)0;
                    int32_t l_689 = 0L;
                    int32_t *l_690 = &p_1271->g_104;
                    int32_t *l_691[6][8] = {{&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0]},{&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0]},{&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0]},{&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0]},{&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0]},{&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0],&l_655[1][1][0]}};
                    int8_t **l_699[5];
                    uint64_t *l_703 = &p_1271->g_128;
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_699[i] = &p_1271->g_84;
                    p_1271->g_3[p_1271->g_384] = 1L;
                    for (p_40 = 0; (p_40 <= 0); p_40 += 1)
                    { /* block id: 343 */
                        int32_t **l_687 = &p_1271->g_234;
                        (*l_687) = (void*)0;
                    }
                    ++l_692[1];
                    (*l_690) &= ((safe_div_func_uint16_t_u_u(65533UL, (safe_lshift_func_int16_t_s_u(((p_1271->g_83[(p_1271->g_384 + 2)] & (((p_1271->g_3[p_1271->g_384] && (0x3B2F99A27405F6D3L || ((((void*)0 != l_699[1]) || (((l_702 |= ((*p_1271->g_306)++)) != (((0x1599F2F6EA77BCE3L < ((*l_703) = p_42)) > ((l_704 == (void*)0) , p_1271->g_656)) , l_705)) ^ l_705)) && (*p_1271->g_306)))) , (void*)0) == l_706)) > (*l_646)), 8)))) ^ 0x5016C179L);
                }
            }
        }
        (*p_1271->g_246) = &l_686;
        for (p_1271->g_100 = 0; (p_1271->g_100 <= 1); p_1271->g_100 += 1)
        { /* block id: 357 */
            uint8_t l_723 = 0x86L;
            int32_t l_746 = 5L;
            union U1 **l_749 = &l_748;
            struct S0 **l_801[1];
            int64_t l_813[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
            int i;
            for (i = 0; i < 1; i++)
                l_801[i] = &p_1271->g_247;
            for (p_1271->g_569.f1 = 0; (p_1271->g_569.f1 <= 1); p_1271->g_569.f1 += 1)
            { /* block id: 360 */
                int32_t l_731[5] = {0x47C2912BL,0x47C2912BL,0x47C2912BL,0x47C2912BL,0x47C2912BL};
                int32_t *l_734 = &p_1271->g_133.f1;
                uint32_t *l_740 = &p_1271->g_156;
                uint32_t **l_739[9] = {&l_740,&l_740,&l_740,&l_740,&l_740,&l_740,&l_740,&l_740,&l_740};
                uint16_t l_797 = 65535UL;
                int i, j;
                if ((safe_sub_func_uint16_t_u_u((*l_646), (((((safe_sub_func_int64_t_s_s((safe_mod_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s((safe_mod_func_int16_t_s_s((p_1271->g_563[p_1271->g_569.f1][(p_1271->g_569.f1 + 3)] , (safe_lshift_func_uint16_t_u_s(p_40, 1))), l_723)), 3)) || (~(((*p_1271->g_84) = (+(safe_mul_func_uint8_t_u_u(0x75L, (safe_add_func_uint32_t_u_u(l_728, ((*l_734) = (safe_add_func_uint64_t_u_u((p_1271->g_214 , (l_731[3] , (!((((safe_mul_func_uint16_t_u_u((*p_1271->g_306), 0L)) || l_728) != p_1271->g_158) > l_667[2][7][1])))), l_731[0]))))))))) , p_42))), 255UL)) > 8UL), p_40)), 18446744073709551609UL)), p_1271->g_23)) , p_40) != (*p_1271->g_306)) && 247UL) == l_735))))
                { /* block id: 363 */
                    uint8_t l_738[1];
                    uint16_t *l_741[1];
                    int32_t *l_745[3][5] = {{&l_667[4][7][2],&p_1271->g_5,&l_667[4][7][2],&l_667[4][7][2],&p_1271->g_5},{&l_667[4][7][2],&p_1271->g_5,&l_667[4][7][2],&l_667[4][7][2],&p_1271->g_5},{&l_667[4][7][2],&p_1271->g_5,&l_667[4][7][2],&l_667[4][7][2],&p_1271->g_5}};
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_738[i] = 0xAEL;
                    for (i = 0; i < 1; i++)
                        l_741[i] = &p_1271->g_742[3];
                    (*l_734) = ((*p_43) <= 0xE1L);
                    l_746 &= (((*l_734) = (p_40 || (~(safe_lshift_func_uint8_t_u_u((l_738[0] ^ (*l_646)), ((void*)0 != l_739[5])))))) > (((((*p_43) ^= ((safe_unary_minus_func_int32_t_s(0L)) == 0x4754C8AE15C4BAD4L)) || ((((((safe_unary_minus_func_int32_t_s(l_723)) <= ((*p_43) <= (*l_646))) != l_738[0]) & p_40) , l_650) , 1L)) >= p_1271->g_491) || p_42));
                    if ((~(l_747 == l_749)))
                    { /* block id: 368 */
                        if (l_723)
                            break;
                    }
                    else
                    { /* block id: 370 */
                        p_1271->g_107 &= ((*p_1271->g_306) ^ ((safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((*l_646) | ((*p_1271->g_568) , ((*l_740) = (safe_div_func_uint16_t_u_u((l_723 , (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((((safe_mod_func_uint32_t_u_u((((*l_734) > ((void*)0 == &p_1271->g_234)) ^ ((*p_1271->g_306) ^ (*p_1271->g_306))), (*l_734))) && 1L) & 0x2A3CL) ^ p_42), p_40)), 6L))), (*p_1271->g_306)))))), 8)), p_42)), 0xADA0L)) <= p_1271->g_485));
                        if (p_40)
                            break;
                    }
                }
                else
                { /* block id: 375 */
                    int8_t l_779 = (-2L);
                    int16_t *l_786 = &p_1271->g_485;
                    int32_t l_798[5] = {0x45C88B50L,0x45C88B50L,0x45C88B50L,0x45C88B50L,0x45C88B50L};
                    struct S0 ***l_800 = &p_1271->g_246;
                    int i;
                    for (p_1271->g_156 = 0; (p_1271->g_156 <= 1); p_1271->g_156 += 1)
                    { /* block id: 378 */
                        uint64_t *l_784 = (void*)0;
                        int16_t **l_787[6][9][4] = {{{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]}},{{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]}},{{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]}},{{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]}},{{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]}},{{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]},{&l_785[1][1],&l_786,&l_785[1][1],&l_785[1][1]}}};
                        int16_t *l_788 = &p_1271->g_92;
                        int8_t *l_795[4][3];
                        int32_t l_796 = 0x7DF114D3L;
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_795[i][j] = &l_778;
                        }
                        l_652 = (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(0x219BL, 7)) || (safe_div_func_int32_t_s_s(l_667[(p_1271->g_156 + 6)][(p_1271->g_156 + 2)][(p_1271->g_100 + 1)], (safe_mod_func_int16_t_s_s(((((safe_div_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((l_667[(p_1271->g_100 + 2)][(p_1271->g_156 + 2)][(p_1271->g_384 + 1)] || (*p_1271->g_306)) >= ((((((*p_1271->g_306) || (0x2C4199C4L <= p_1271->g_656)) | (*l_646)) , ((safe_div_func_int32_t_s_s((((0xD714L && (*l_646)) & p_40) , 8L), l_667[(p_1271->g_100 + 2)][(p_1271->g_156 + 2)][(p_1271->g_384 + 1)])) ^ 0x5C87L)) < 0UL) & (*l_646))), 0L)), l_778)) <= (-1L)) | l_746) ^ (*p_1271->g_514)), l_779))))), (-1L)));
                        l_798[3] = (((safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(0x71L, ((((*l_734) = p_42) && ((*p_1271->g_514) = ((!p_42) >= 0x5D49A82DL))) ^ ((l_785[0][1] != (l_788 = l_786)) || 0UL)))) ^ (safe_mod_func_uint8_t_u_u(((((safe_mul_func_int16_t_s_s((l_779 , (l_796 = (((safe_lshift_func_int8_t_s_u((l_667[4][7][2] ^= (((*l_646) , 0x194A2430309B3D10L) <= p_1271->g_83[0])), 5)) & p_42) == l_779))), 0x03FCL)) | 0x63D04BBDL) , p_42) || l_723), l_797))), l_779)) , p_40) | 0x36A4C1F36F0C9EFEL);
                    }
                    (*p_1271->g_246) = &l_686;
                    if (p_42)
                        continue;
                    l_650 &= ((((*l_800) = l_799) == l_801[0]) & 0x930AL);
                }
                for (l_668 = 8; (l_668 >= 0); l_668 -= 1)
                { /* block id: 394 */
                    return p_39;
                }
            }
            if ((safe_lshift_func_int16_t_s_u((l_667[4][7][2] = (safe_mul_func_int8_t_s_s((((safe_sub_func_int16_t_s_s(p_42, 3UL)) | 0x2CL) < ((safe_mul_func_uint8_t_u_u(p_1271->g_23, (((l_746 , l_810) == (void*)0) | (((safe_rshift_func_uint16_t_u_s(0x339DL, p_42)) | (*l_646)) , 0x7A0B84F8BA8590E4L)))) ^ 0x80A570FB96343A67L)), 0L))), l_735)))
            { /* block id: 399 */
                (**p_1271->g_246) = (**l_799);
                if (l_813[4])
                    break;
            }
            else
            { /* block id: 402 */
                return (*p_1271->g_446);
            }
        }
    }
    return l_814;
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_360 p_1271->g_234
 * writes:
 */
int32_t * func_44(int16_t  p_45, uint32_t  p_46, struct S2 * p_1271)
{ /* block id: 14 */
    int32_t *l_50 = &p_1271->g_51;
    int32_t *l_52[6] = {(void*)0,&p_1271->g_51,(void*)0,(void*)0,&p_1271->g_51,(void*)0};
    uint16_t l_53 = 65535UL;
    int8_t *l_130 = &p_1271->g_83[1];
    int32_t l_237 = 4L;
    int32_t l_295 = 0x691DC7A7L;
    int32_t l_314[8][5][6] = {{{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL}},{{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL}},{{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL}},{{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL}},{{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL}},{{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL}},{{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL}},{{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL},{(-3L),0x1D01273CL,0x23264663L,2L,0x13F768B3L,0x1D01273CL}}};
    int64_t *l_329 = &p_1271->g_154;
    struct S0 l_333 = {-3L,0x7C104E4EL};
    uint64_t l_355 = 0UL;
    uint8_t *l_381 = &p_1271->g_219;
    uint8_t *l_382 = (void*)0;
    uint8_t *l_383 = &p_1271->g_384;
    uint16_t **l_416 = (void*)0;
    int32_t l_516 = 0x1D5785A7L;
    int i, j, k;
    --l_53;
    return (*p_1271->g_360);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_58(int32_t  p_59, struct S2 * p_1271)
{ /* block id: 76 */
    int32_t *l_233[6] = {&p_1271->g_104,&p_1271->g_104,&p_1271->g_104,&p_1271->g_104,&p_1271->g_104,&p_1271->g_104};
    int i;
    return l_233[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_133 p_1271->g_83 p_1271->g_92 p_1271->g_2 p_1271->g_48 p_1271->g_158 p_1271->g_104 p_1271->g_214 p_1271->g_156 p_1271->g_154 p_1271->g_51 p_1271->g_133.f2 p_1271->g_227
 * writes: p_1271->g_48 p_1271->g_154 p_1271->g_156 p_1271->g_158 p_1271->g_133.f2 p_1271->g_214 p_1271->g_219 p_1271->g_228
 */
uint64_t  func_64(int64_t  p_65, int8_t * p_66, struct S2 * p_1271)
{ /* block id: 46 */
    uint16_t l_140 = 0x7A08L;
    int32_t l_151 = (-4L);
    int16_t *l_152 = &p_1271->g_48;
    int64_t *l_153 = &p_1271->g_154;
    uint64_t l_155 = 0xC6D51E7DF7C47876L;
    int64_t *l_157 = &p_1271->g_158;
    uint8_t *l_159[10] = {&p_1271->g_23,&p_1271->g_23,&p_1271->g_23,&p_1271->g_23,&p_1271->g_23,&p_1271->g_23,&p_1271->g_23,&p_1271->g_23,&p_1271->g_23,&p_1271->g_23};
    int32_t l_160 = 0x6C01D75DL;
    int32_t *l_161 = &p_1271->g_133.f2;
    int32_t l_178 = 1L;
    int32_t l_181 = 6L;
    int32_t l_182 = (-5L);
    int32_t l_184[7];
    int64_t l_203 = 7L;
    int16_t l_208 = 0x1823L;
    struct S0 l_226[10][3][2] = {{{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}}},{{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}}},{{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}}},{{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}}},{{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}}},{{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}}},{{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}}},{{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}}},{{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}}},{{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}},{{-1L,0x7115DCBFL},{1L,1L}}}};
    volatile int32_t *l_230[9] = {&p_1271->g_2[0],&p_1271->g_2[0],&p_1271->g_2[0],&p_1271->g_2[0],&p_1271->g_2[0],&p_1271->g_2[0],&p_1271->g_2[0],&p_1271->g_2[0],&p_1271->g_2[0]};
    int32_t l_231 = 1L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_184[i] = (-2L);
    (*l_161) = (safe_lshift_func_uint16_t_u_u(((p_1271->g_133 , (l_160 = (((safe_div_func_int8_t_s_s((*p_66), ((safe_div_func_uint8_t_u_u(((p_65 , ((safe_lshift_func_uint8_t_u_u((p_65 == l_140), 4)) , 0L)) <= ((*l_157) |= (p_1271->g_156 = (((safe_rshift_func_uint16_t_u_s(((((*l_153) = (safe_add_func_int16_t_s_s(1L, (((*l_152) ^= (safe_lshift_func_int16_t_s_u(((safe_div_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u((((l_151 = p_1271->g_92) < (l_140 && l_140)) <= p_65), 0x6C13L)), p_1271->g_2[0])) < 0x189FD49C48DCB9C1L), p_65))) , p_65)))) >= 0x6986BD06F175425EL) & 0x2896L), 2)) <= l_155) & p_65)))), 0x32L)) ^ l_140))) , 0x04B385D388640006L) <= p_1271->g_83[1]))) == (*p_66)), p_1271->g_104));
    for (p_1271->g_158 = 0; (p_1271->g_158 <= 20); p_1271->g_158 = safe_add_func_int16_t_s_s(p_1271->g_158, 3))
    { /* block id: 56 */
        int32_t l_169 = 0x029DE2F3L;
        int32_t l_170 = 0L;
        int32_t l_173 = 0x66A16A95L;
        int32_t l_174 = (-4L);
        int32_t l_175 = 0L;
        int32_t l_179 = 0x53771584L;
        int32_t l_183 = 0x140D45DDL;
        int32_t l_185 = 1L;
        int32_t l_187 = 0x507749A3L;
        int32_t l_189 = 0x509527E5L;
        int32_t l_190 = 0x0BF7B596L;
        int32_t l_191 = 0L;
        int32_t l_194 = (-5L);
        int32_t l_195 = 1L;
        int32_t l_197 = (-1L);
        int32_t l_198 = 0x17EA6B48L;
        int32_t l_199 = 0x74403A96L;
        int32_t l_202[2];
        volatile int32_t **l_229 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_202[i] = 1L;
        for (p_65 = 8; (p_65 >= 0); p_65 -= 1)
        { /* block id: 59 */
            int32_t l_171 = 0x5CC771BEL;
            int32_t l_176 = 0x7247A2C6L;
            int32_t l_177 = 0x6CA5C417L;
            int16_t l_180[4][8][5] = {{{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L}},{{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L}},{{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L}},{{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L},{1L,0x016EL,0x7AB7L,0L,0x6A24L}}};
            int32_t l_186 = 0x2B2746C7L;
            int32_t l_188 = 0x61C0A839L;
            int32_t l_192 = 0x62882719L;
            int32_t l_193 = 0x7D9DDA32L;
            int32_t l_196 = 0x31CD22D5L;
            int32_t l_200 = 0x0B1A90E2L;
            int32_t l_201 = 7L;
            int32_t l_204 = 3L;
            int32_t l_205 = 0x624F099CL;
            int32_t l_206 = 0L;
            int32_t l_207 = 2L;
            int32_t l_209 = 0L;
            int32_t l_210 = 0x2D04161DL;
            int32_t l_211 = 0x598B75F5L;
            int32_t l_212 = 5L;
            int32_t l_213[5];
            int64_t *l_220 = &l_203;
            int64_t **l_221 = &l_153;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_213[i] = 0x75CC839FL;
            for (l_160 = 0; (l_160 <= 9); l_160 += 1)
            { /* block id: 62 */
                int32_t **l_164 = &l_161;
                int32_t *l_165 = (void*)0;
                int32_t *l_166 = &p_1271->g_51;
                int32_t *l_167 = &p_1271->g_51;
                int32_t *l_168[6] = {&p_1271->g_51,(void*)0,&p_1271->g_51,&p_1271->g_51,(void*)0,&p_1271->g_51};
                int64_t l_172[9][8][3] = {{{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)}},{{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)}},{{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)}},{{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)}},{{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)}},{{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)}},{{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)}},{{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)}},{{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)},{1L,0x5D2935077A8CD555L,(-1L)}}};
                int i, j, k;
                (*l_164) = &p_1271->g_51;
                if (p_65)
                    continue;
                --p_1271->g_214;
            }
            if (p_1271->g_156)
                break;
            (*p_1271->g_227) = (((safe_lshift_func_uint8_t_u_s((p_1271->g_219 = ((p_65 , &p_66) == (void*)0)), 3)) == (0L <= ((l_220 != ((*l_221) = (void*)0)) ^ (l_175 , (((l_191 != ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_65, p_65)), l_202[1])) , p_1271->g_154)) == (*l_161)) && 1UL))))) , l_226[1][1][1]);
        }
        l_230[5] = &p_1271->g_3[0];
    }
    return l_231;
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_51 p_1271->g_9 p_1271->g_104 p_1271->g_92 p_1271->g_107 p_1271->g_48 p_1271->g_83
 * writes: p_1271->g_51 p_1271->g_100 p_1271->g_104 p_1271->g_92 p_1271->g_107 p_1271->g_48 p_1271->g_128
 */
uint32_t  func_87(uint32_t  p_88, uint32_t  p_89, int16_t * p_90, uint8_t  p_91, struct S2 * p_1271)
{ /* block id: 19 */
    uint16_t l_97[9] = {0xBAF7L,0xBAF7L,0xBAF7L,0xBAF7L,0xBAF7L,0xBAF7L,0xBAF7L,0xBAF7L,0xBAF7L};
    int32_t *l_108 = &p_1271->g_51;
    int32_t **l_109 = &l_108;
    uint16_t *l_116 = (void*)0;
    uint16_t *l_117 = (void*)0;
    uint16_t *l_118 = &l_97[7];
    uint64_t *l_127 = &p_1271->g_128;
    int i;
    for (p_91 = 0; (p_91 > 14); p_91++)
    { /* block id: 22 */
        int32_t *l_96[3][7] = {{&p_1271->g_5,&p_1271->g_9,&p_1271->g_9,&p_1271->g_9,&p_1271->g_5,&p_1271->g_5,&p_1271->g_9},{&p_1271->g_5,&p_1271->g_9,&p_1271->g_9,&p_1271->g_9,&p_1271->g_5,&p_1271->g_5,&p_1271->g_9},{&p_1271->g_5,&p_1271->g_9,&p_1271->g_9,&p_1271->g_9,&p_1271->g_5,&p_1271->g_5,&p_1271->g_9}};
        int i, j;
        --l_97[4];
    }
    for (p_1271->g_51 = 3; (p_1271->g_51 <= 8); p_1271->g_51 += 1)
    { /* block id: 27 */
        int32_t *l_103 = &p_1271->g_104;
        int i;
        p_1271->g_100 = 0x4AF0E761L;
        (*l_103) |= (safe_sub_func_uint8_t_u_u(l_97[p_1271->g_51], p_1271->g_9));
        for (p_1271->g_92 = 8; (p_1271->g_92 >= 0); p_1271->g_92 -= 1)
        { /* block id: 32 */
            int32_t l_105 = (-2L);
            int32_t *l_106 = &p_1271->g_107;
            int i;
            (*l_106) &= ((*l_103) = (l_105 = l_97[p_1271->g_51]));
            return p_1271->g_48;
        }
    }
    (*l_109) = l_108;
    p_1271->g_104 = ((((*l_127) = (p_1271->g_48 , (safe_mod_func_int64_t_s_s((safe_mod_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u(((((((*l_118)--) & ((((safe_rshift_func_int16_t_s_s(0x4743L, 15)) , (**l_109)) == (safe_add_func_int16_t_s_s(0x0C11L, (p_1271->g_100 = (safe_mod_func_int8_t_s_s((9L ^ ((p_1271->g_48 = (p_1271->g_51 >= (*l_108))) != 0x6971L)), (p_88 | p_89))))))) , (*l_108))) == p_91) < (**l_109)) > 0x06L), 5)) >= (*l_108)), (**l_109))), p_1271->g_83[1])))) || (-1L)) == p_89);
    return (**l_109);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1272;
    struct S2* p_1271 = &c_1272;
    struct S2 c_1273 = {
        {0L}, // p_1271->g_2
        {(-1L)}, // p_1271->g_3
        0x11F07B4BL, // p_1271->g_4
        (-1L), // p_1271->g_5
        0x2D374006L, // p_1271->g_8
        (-8L), // p_1271->g_9
        {0x59D08905L,0x59D08905L,0x59D08905L,0x59D08905L,0x59D08905L,0x59D08905L,0x59D08905L,0x59D08905L}, // p_1271->g_16
        1UL, // p_1271->g_23
        5L, // p_1271->g_48
        0x6B7BFBC3L, // p_1271->g_51
        {0x2CL,3L,0x2CL,0x2CL,3L,0x2CL,0x2CL,3L,0x2CL}, // p_1271->g_83
        &p_1271->g_83[4], // p_1271->g_84
        5L, // p_1271->g_92
        0xB3FDL, // p_1271->g_100
        1L, // p_1271->g_104
        (-1L), // p_1271->g_107
        0xAD213B74EAE5124AL, // p_1271->g_128
        {0}, // p_1271->g_133
        6L, // p_1271->g_154
        9UL, // p_1271->g_156
        0x70BCD743813938A0L, // p_1271->g_158
        0x1160L, // p_1271->g_214
        250UL, // p_1271->g_219
        {0x331674906479404DL,0x112FE5A6L}, // p_1271->g_228
        &p_1271->g_228, // p_1271->g_227
        (void*)0, // p_1271->g_234
        &p_1271->g_228, // p_1271->g_247
        &p_1271->g_247, // p_1271->g_246
        {0}, // p_1271->g_272
        (void*)0, // p_1271->g_298
        &p_1271->g_100, // p_1271->g_306
        (void*)0, // p_1271->g_312
        &p_1271->g_234, // p_1271->g_360
        {0}, // p_1271->g_376
        0UL, // p_1271->g_384
        0UL, // p_1271->g_436
        &p_1271->g_234, // p_1271->g_446
        0x42FDL, // p_1271->g_485
        0x39E36C06L, // p_1271->g_491
        &p_1271->g_158, // p_1271->g_514
        &p_1271->g_234, // p_1271->g_522
        (void*)0, // p_1271->g_538
        {&p_1271->g_234}, // p_1271->g_543
        &p_1271->g_234, // p_1271->g_544
        {{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}}}, // p_1271->g_563
        {-1L,1L}, // p_1271->g_569
        &p_1271->g_569, // p_1271->g_568
        0x71L, // p_1271->g_656
        {0x7503L,5UL,0xC22BL,5UL,0x7503L,0x7503L,5UL,0xC22BL,5UL,0x7503L}, // p_1271->g_742
        &p_1271->g_92, // p_1271->g_851
        {{&p_1271->g_851,&p_1271->g_851,(void*)0,&p_1271->g_851,&p_1271->g_851,&p_1271->g_851,(void*)0,&p_1271->g_851},{&p_1271->g_851,&p_1271->g_851,(void*)0,&p_1271->g_851,&p_1271->g_851,&p_1271->g_851,(void*)0,&p_1271->g_851},{&p_1271->g_851,&p_1271->g_851,(void*)0,&p_1271->g_851,&p_1271->g_851,&p_1271->g_851,(void*)0,&p_1271->g_851},{&p_1271->g_851,&p_1271->g_851,(void*)0,&p_1271->g_851,&p_1271->g_851,&p_1271->g_851,(void*)0,&p_1271->g_851}}, // p_1271->g_850
        &p_1271->g_850[1][3], // p_1271->g_852
        1UL, // p_1271->g_881
        &p_1271->g_23, // p_1271->g_887
        &p_1271->g_887, // p_1271->g_886
        &p_1271->g_228, // p_1271->g_927
        0L, // p_1271->g_956
        {0}, // p_1271->g_1004
        {{(void*)0,&p_1271->g_569,&p_1271->g_228,&p_1271->g_569,&p_1271->g_228,&p_1271->g_569},{(void*)0,&p_1271->g_569,&p_1271->g_228,&p_1271->g_569,&p_1271->g_228,&p_1271->g_569},{(void*)0,&p_1271->g_569,&p_1271->g_228,&p_1271->g_569,&p_1271->g_228,&p_1271->g_569},{(void*)0,&p_1271->g_569,&p_1271->g_228,&p_1271->g_569,&p_1271->g_228,&p_1271->g_569},{(void*)0,&p_1271->g_569,&p_1271->g_228,&p_1271->g_569,&p_1271->g_228,&p_1271->g_569},{(void*)0,&p_1271->g_569,&p_1271->g_228,&p_1271->g_569,&p_1271->g_228,&p_1271->g_569}}, // p_1271->g_1015
        (void*)0, // p_1271->g_1018
        &p_1271->g_228, // p_1271->g_1019
        &p_1271->g_84, // p_1271->g_1039
        &p_1271->g_1039, // p_1271->g_1038
        &p_1271->g_234, // p_1271->g_1040
        {&p_1271->g_228,&p_1271->g_228}, // p_1271->g_1078
        &p_1271->g_5, // p_1271->g_1139
        &p_1271->g_1139, // p_1271->g_1140
        0xB913273DL, // p_1271->g_1162
        &p_1271->g_1162, // p_1271->g_1161
        &p_1271->g_1161, // p_1271->g_1160
        {{{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L}},{{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L}},{{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L}},{{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L}},{{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L},{0x6EL,254UL,0x8BL,255UL,254UL,0x90L,0xB8L}}}, // p_1271->g_1171
        0x5EL, // p_1271->g_1253
    };
    c_1272 = c_1273;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1271);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1271->g_2[i], "p_1271->g_2[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1271->g_3[i], "p_1271->g_3[i]", print_hash_value);

    }
    transparent_crc(p_1271->g_4, "p_1271->g_4", print_hash_value);
    transparent_crc(p_1271->g_5, "p_1271->g_5", print_hash_value);
    transparent_crc(p_1271->g_8, "p_1271->g_8", print_hash_value);
    transparent_crc(p_1271->g_9, "p_1271->g_9", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1271->g_16[i], "p_1271->g_16[i]", print_hash_value);

    }
    transparent_crc(p_1271->g_23, "p_1271->g_23", print_hash_value);
    transparent_crc(p_1271->g_48, "p_1271->g_48", print_hash_value);
    transparent_crc(p_1271->g_51, "p_1271->g_51", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1271->g_83[i], "p_1271->g_83[i]", print_hash_value);

    }
    transparent_crc(p_1271->g_92, "p_1271->g_92", print_hash_value);
    transparent_crc(p_1271->g_100, "p_1271->g_100", print_hash_value);
    transparent_crc(p_1271->g_104, "p_1271->g_104", print_hash_value);
    transparent_crc(p_1271->g_107, "p_1271->g_107", print_hash_value);
    transparent_crc(p_1271->g_128, "p_1271->g_128", print_hash_value);
    transparent_crc(p_1271->g_154, "p_1271->g_154", print_hash_value);
    transparent_crc(p_1271->g_156, "p_1271->g_156", print_hash_value);
    transparent_crc(p_1271->g_158, "p_1271->g_158", print_hash_value);
    transparent_crc(p_1271->g_214, "p_1271->g_214", print_hash_value);
    transparent_crc(p_1271->g_219, "p_1271->g_219", print_hash_value);
    transparent_crc(p_1271->g_228.f0, "p_1271->g_228.f0", print_hash_value);
    transparent_crc(p_1271->g_228.f1, "p_1271->g_228.f1", print_hash_value);
    transparent_crc(p_1271->g_384, "p_1271->g_384", print_hash_value);
    transparent_crc(p_1271->g_436, "p_1271->g_436", print_hash_value);
    transparent_crc(p_1271->g_485, "p_1271->g_485", print_hash_value);
    transparent_crc(p_1271->g_491, "p_1271->g_491", print_hash_value);
    transparent_crc(p_1271->g_569.f0, "p_1271->g_569.f0", print_hash_value);
    transparent_crc(p_1271->g_569.f1, "p_1271->g_569.f1", print_hash_value);
    transparent_crc(p_1271->g_656, "p_1271->g_656", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1271->g_742[i], "p_1271->g_742[i]", print_hash_value);

    }
    transparent_crc(p_1271->g_881, "p_1271->g_881", print_hash_value);
    transparent_crc(p_1271->g_956, "p_1271->g_956", print_hash_value);
    transparent_crc(p_1271->g_1162, "p_1271->g_1162", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1271->g_1171[i][j][k], "p_1271->g_1171[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1271->g_1253, "p_1271->g_1253", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
