// -g 12,98,4 -l 1,98,2
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


// Seed: 2296012778

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile int64_t  f0;
   volatile int8_t * f1;
   uint32_t  f2;
   volatile uint8_t  f3;
   uint16_t  f4;
};

union U1 {
   int32_t  f0;
};

union U2 {
   int8_t * volatile  f0;
   int16_t  f1;
};

union U3 {
   int64_t  f0;
   uint16_t  f1;
   volatile int32_t  f2;
};

union U4 {
   volatile uint8_t  f0;
   uint32_t  f1;
   int8_t  f2;
};

union U5 {
   volatile int32_t  f0;
   volatile int32_t  f1;
   int32_t  f2;
};

union U6 {
   uint16_t  f0;
};

struct S7 {
    volatile int32_t g_3;
    int32_t g_4;
    int8_t g_22;
    uint64_t g_34;
    uint32_t g_59;
    uint32_t *g_58;
    int32_t g_74[2];
    int32_t *g_80;
    int32_t ** volatile g_79[7];
    uint16_t g_96[8];
    int16_t g_120;
    volatile union U4 g_129[9][4][7];
    union U0 g_144;
    uint8_t g_148;
    uint8_t g_158[8][6];
    uint8_t *g_157[1][2];
    union U2 g_163;
    int8_t g_165[8][10][3];
    int8_t g_168;
    union U5 g_185[1][9][3];
    uint8_t g_188;
    union U4 g_201;
    volatile uint64_t g_225;
    volatile uint64_t *g_224;
    union U6 g_247;
    int32_t g_252;
    volatile union U6 *g_261;
    volatile union U6 **g_260[3][7][1];
    volatile union U0 g_264;
    uint16_t g_266[7];
    uint64_t *g_310;
    uint64_t g_314;
    uint64_t *g_313;
    uint64_t *g_317;
    volatile union U3 g_321[2];
    union U1 g_343[4][3];
    volatile union U2 g_351;
    int16_t g_377;
    volatile union U2 g_381;
    union U2 g_425;
    volatile union U0 g_430[2][4];
    volatile union U4 g_485[10][3];
    int32_t *g_486;
    uint64_t **g_488[5];
    union U0 *g_489;
    union U4 g_530[9][10][2];
    volatile union U2 *g_534;
    volatile union U2 ** volatile g_533;
    volatile union U3 ** volatile g_536;
    volatile union U3 *g_538;
    volatile union U3 ** volatile g_537;
    union U0 g_541[7][10][1];
    volatile union U1 g_546;
    volatile union U1 *g_545;
    volatile union U1 **g_544;
    uint32_t g_549;
    union U2 g_561;
    uint8_t g_574;
    union U3 g_581;
    int16_t g_587;
    uint8_t g_608;
    volatile union U0 g_611[1];
    volatile union U5 g_633[6][2];
    uint32_t g_651;
    union U3 g_652;
    union U1 *g_660;
    union U1 **g_659[5];
    volatile union U5 g_665[3];
    volatile union U2 g_699;
    volatile union U5 g_705;
    union U4 g_724;
    union U0 * volatile *g_735;
    union U0 * volatile **g_734;
    volatile union U4 g_777[5];
    union U2 g_792[7];
    int32_t * volatile g_797;
    int32_t * volatile g_800[4][1][6];
    union U4 g_833;
    union U2 g_852[9][9];
    uint32_t ***g_853;
    union U6 * volatile g_866[10][3];
    union U6 * volatile *g_865;
    uint32_t g_880;
    uint64_t g_968;
    int32_t g_983;
    volatile union U3 g_1012[3];
    int64_t g_1019;
    volatile union U5 g_1038;
    volatile int32_t g_1073;
    volatile union U0 g_1097[7][9][4];
    union U2 g_1100;
    union U3 g_1108;
    union U3 *g_1107;
    union U3 **g_1106;
    union U2 g_1132;
    union U4 g_1145;
    volatile int64_t **g_1147;
    int32_t * volatile g_1184;
    int16_t g_1198;
    uint8_t g_1200[10][1];
    int32_t ** volatile g_1203;
    uint32_t g_1212[7][3];
    union U5 g_1228;
    int32_t g_1243;
    int32_t * volatile g_1242[2];
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S7 * p_1269);
int8_t  func_18(int8_t * p_19, int8_t * p_20, struct S7 * p_1269);
int8_t * func_23(int32_t  p_24, int32_t  p_25, int8_t * p_26, struct S7 * p_1269);
uint64_t  func_27(int64_t  p_28, uint32_t  p_29, int16_t  p_30, struct S7 * p_1269);
union U6  func_36(uint32_t * p_37, union U1  p_38, int32_t  p_39, uint32_t  p_40, uint32_t  p_41, struct S7 * p_1269);
uint32_t * func_42(union U6  p_43, uint32_t * p_44, int8_t * p_45, uint32_t  p_46, uint32_t * p_47, struct S7 * p_1269);
union U6  func_48(int64_t  p_49, uint32_t * p_50, int8_t  p_51, struct S7 * p_1269);
union U1  func_63(uint64_t  p_64, int32_t  p_65, union U6  p_66, struct S7 * p_1269);
uint64_t  func_67(int64_t  p_68, uint32_t * p_69, int32_t  p_70, struct S7 * p_1269);
uint8_t  func_71(int8_t * p_72, struct S7 * p_1269);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1269->g_4 p_1269->g_80 p_1269->g_74 p_1269->g_96 p_1269->g_266 p_1269->g_1012.f0 p_1269->g_168 p_1269->g_58 p_1269->g_59 p_1269->g_968 p_1269->g_1203 p_1269->g_486 p_1269->g_252
 * writes: p_1269->g_4 p_1269->g_74 p_1269->g_541.f4 p_1269->g_80
 */
int32_t  func_1(struct S7 * p_1269)
{ /* block id: 4 */
    union U6 l_2[2] = {{0xBC40L},{0xBC40L}};
    int32_t l_11[9][8][3] = {{{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L}},{{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L}},{{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L}},{{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L}},{{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L}},{{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L}},{{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L}},{{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L}},{{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L},{0x778B15B4L,0L,1L}}};
    uint32_t *l_879 = &p_1269->g_880;
    int8_t *l_1150 = &p_1269->g_22;
    int32_t l_1245 = 0x507EAE80L;
    int32_t **l_1250[3];
    uint16_t *l_1267 = &p_1269->g_541[5][0][0].f4;
    int32_t **l_1268 = &p_1269->g_80;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1250[i] = &p_1269->g_486;
    for (p_1269->g_4 = 0; (p_1269->g_4 <= 1); p_1269->g_4 += 1)
    { /* block id: 7 */
        int8_t *l_21[1][1][8] = {{{&p_1269->g_22,&p_1269->g_22,&p_1269->g_22,&p_1269->g_22,&p_1269->g_22,&p_1269->g_22,&p_1269->g_22,&p_1269->g_22}}};
        uint32_t *l_33 = (void*)0;
        int32_t l_35 = 1L;
        int8_t *l_881 = &p_1269->g_22;
        int32_t *l_1246 = &l_11[1][7][2];
        int i, j, k;
        (1 + 1);
    }
    (*p_1269->g_80) ^= 0x6865FD0FL;
    l_11[3][0][1] = (((safe_unary_minus_func_int32_t_s(0x38A34EB0L)) <= (safe_sub_func_int8_t_s_s(((((void*)0 != l_1250[2]) && (safe_mod_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_11[8][4][2] >= (18446744073709551607UL >= (((safe_rshift_func_int16_t_s_s(0x3C49L, 12)) , p_1269->g_96[0]) > (safe_sub_func_uint8_t_u_u((((l_11[4][1][2] != (((((((((safe_mul_func_uint16_t_u_u(((*l_1267) = ((l_1245 , (void*)0) != (void*)0)), l_11[4][6][1])) | p_1269->g_266[6]) | p_1269->g_1012[1].f0) || l_11[4][6][1]) && l_1245) | p_1269->g_168) , &p_1269->g_188) != &p_1269->g_158[0][1]) > (*p_1269->g_58))) >= 0UL) <= p_1269->g_968), 0x88L))))), l_11[5][7][1])), l_1245)) > 0x679B2843L) < l_11[4][6][1]), 0x5F70A7C1L))) , l_11[5][6][2]), 6UL))) == l_11[7][4][2]);
    (*l_1268) = (*p_1269->g_1203);
    return (*p_1269->g_486);
}


/* ------------------------------------------ */
/* 
 * reads : p_1269->g_74 p_1269->g_1243
 * writes: p_1269->g_74 p_1269->g_1243
 */
int8_t  func_18(int8_t * p_19, int8_t * p_20, struct S7 * p_1269)
{ /* block id: 605 */
    int32_t *l_1241 = &p_1269->g_74[1];
    int32_t *l_1244 = &p_1269->g_1243;
    (*l_1241) = (!3L);
    (*l_1244) |= (*l_1241);
    return (*l_1241);
}


/* ------------------------------------------ */
/* 
 * reads : p_1269->g_22 p_1269->g_317 p_1269->g_314 p_1269->g_224 p_1269->g_225 p_1269->g_158 p_1269->g_1019 p_1269->g_983 p_1269->g_343 p_1269->g_611.f0 p_1269->g_58 p_1269->g_59 p_1269->g_1184 p_1269->g_1200 p_1269->g_185.f0 p_1269->g_549 p_1269->g_74 p_1269->g_1203 p_1269->g_343.f0 p_1269->g_1212 p_1269->g_852 p_1269->g_651 p_1269->g_1198 p_1269->g_544 p_1269->g_545 p_1269->g_546 p_1269->g_1228 p_1269->g_168
 * writes: p_1269->g_313 p_1269->g_1108.f1 p_1269->g_74 p_1269->g_581.f0 p_1269->g_1200 p_1269->g_724.f1 p_1269->g_80 p_1269->g_1198 p_1269->g_1212 p_1269->g_651 p_1269->g_59 p_1269->g_120 p_1269->g_852.f1 p_1269->g_168
 */
int8_t * func_23(int32_t  p_24, int32_t  p_25, int8_t * p_26, struct S7 * p_1269)
{ /* block id: 542 */
    uint32_t l_1155[8][8] = {{0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL},{0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL},{0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL},{0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL},{0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL},{0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL},{0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL},{0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL,0x9B1AC2EAL}};
    uint64_t *l_1166 = &p_1269->g_34;
    uint64_t **l_1167 = &p_1269->g_313;
    int8_t *l_1168 = &p_1269->g_165[6][0][1];
    union U1 *l_1175 = &p_1269->g_343[2][0];
    union U6 l_1204 = {0xB09DL};
    int32_t *l_1206 = &p_1269->g_74[1];
    int32_t l_1207[5] = {0x022611A4L,0x022611A4L,0x022611A4L,0x022611A4L,0x022611A4L};
    int32_t *l_1239 = &l_1207[1];
    int8_t *l_1240[7] = {&p_1269->g_165[7][2][1],&p_1269->g_165[7][2][1],&p_1269->g_165[7][2][1],&p_1269->g_165[7][2][1],&p_1269->g_165[7][2][1],&p_1269->g_165[7][2][1],&p_1269->g_165[7][2][1]};
    int i, j;
    if (((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(l_1155[3][7], (safe_mul_func_int8_t_s_s((*p_26), (safe_add_func_uint64_t_u_u((*p_1269->g_317), (safe_add_func_uint8_t_u_u((l_1155[6][2] ^ ((((*l_1167) = l_1166) != l_1166) < (l_1155[3][7] >= 0x4EL))), l_1155[3][7])))))))), l_1155[2][6])) && 0L))
    { /* block id: 544 */
        return l_1168;
    }
    else
    { /* block id: 546 */
        uint64_t l_1176[7][6] = {{0x4E55624A80B3CCA6L,1UL,0x4E55624A80B3CCA6L,0x4E55624A80B3CCA6L,1UL,0x4E55624A80B3CCA6L},{0x4E55624A80B3CCA6L,1UL,0x4E55624A80B3CCA6L,0x4E55624A80B3CCA6L,1UL,0x4E55624A80B3CCA6L},{0x4E55624A80B3CCA6L,1UL,0x4E55624A80B3CCA6L,0x4E55624A80B3CCA6L,1UL,0x4E55624A80B3CCA6L},{0x4E55624A80B3CCA6L,1UL,0x4E55624A80B3CCA6L,0x4E55624A80B3CCA6L,1UL,0x4E55624A80B3CCA6L},{0x4E55624A80B3CCA6L,1UL,0x4E55624A80B3CCA6L,0x4E55624A80B3CCA6L,1UL,0x4E55624A80B3CCA6L},{0x4E55624A80B3CCA6L,1UL,0x4E55624A80B3CCA6L,0x4E55624A80B3CCA6L,1UL,0x4E55624A80B3CCA6L},{0x4E55624A80B3CCA6L,1UL,0x4E55624A80B3CCA6L,0x4E55624A80B3CCA6L,1UL,0x4E55624A80B3CCA6L}};
        int32_t l_1185 = 0x37ECE774L;
        int32_t l_1208 = 0x1FB046D9L;
        int32_t l_1209 = 0x4F7EDD2DL;
        int32_t l_1210 = (-1L);
        int32_t l_1211 = 0x74902495L;
        int32_t **l_1238[9] = {&p_1269->g_80,(void*)0,&p_1269->g_80,&p_1269->g_80,(void*)0,&p_1269->g_80,&p_1269->g_80,(void*)0,&p_1269->g_80};
        int i, j;
        for (p_24 = 0; (p_24 <= 1); p_24 += 1)
        { /* block id: 549 */
            int32_t *l_1192[1][2];
            union U6 l_1193 = {0x928FL};
            int32_t **l_1205 = &l_1192[0][0];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1192[i][j] = &l_1185;
            }
            for (p_1269->g_1108.f1 = 0; (p_1269->g_1108.f1 <= 8); p_1269->g_1108.f1 += 1)
            { /* block id: 552 */
                uint8_t l_1188 = 0x2FL;
                uint32_t *l_1196 = (void*)0;
                int32_t l_1199 = 0L;
                if (p_24)
                { /* block id: 553 */
                    int32_t l_1183 = 0L;
                    int8_t *l_1191 = &p_1269->g_22;
                    (*p_1269->g_1184) = ((safe_mul_func_int16_t_s_s(((((safe_add_func_int32_t_s_s((((0L | 0x5921L) | (((safe_mul_func_uint16_t_u_u((((void*)0 != l_1175) > (*p_1269->g_224)), (l_1176[2][5] > (safe_lshift_func_uint8_t_u_s(((safe_add_func_int8_t_s_s(p_1269->g_158[4][2], (safe_lshift_func_int8_t_s_s(0x19L, (*p_26))))) & 2UL), p_1269->g_1019))))) ^ p_1269->g_983) && l_1183)) , (-3L)), 1L)) , (*l_1175)) , 0x0861L) , p_1269->g_611[0].f0), 0UL)) <= (*p_1269->g_58));
                    for (p_1269->g_581.f0 = 3; (p_1269->g_581.f0 <= 8); p_1269->g_581.f0 += 1)
                    { /* block id: 557 */
                        int32_t *l_1186 = &l_1185;
                        int32_t *l_1187 = (void*)0;
                        --l_1188;
                        return l_1191;
                    }
                    l_1192[0][0] = &p_24;
                }
                else
                { /* block id: 562 */
                    union U6 *l_1194 = (void*)0;
                    union U6 *l_1195 = &l_1193;
                    uint32_t *l_1197[10][7][3] = {{{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]}},{{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]}},{{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]}},{{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]}},{{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]}},{{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]}},{{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]}},{{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]}},{{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]}},{{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]},{&l_1155[0][5],(void*)0,&l_1155[3][0]}}};
                    int i, j, k;
                    (*p_1269->g_1203) = func_42(((*l_1195) = l_1193), l_1196, p_26, (p_1269->g_1200[8][0]--), l_1192[0][0], p_1269);
                }
            }
            l_1206 = ((p_24 | p_25) , ((*l_1205) = func_42(l_1204, l_1192[0][0], p_26, p_1269->g_343[2][2].f0, l_1192[0][0], p_1269)));
            for (p_1269->g_1198 = 0; (p_1269->g_1198 <= 2); p_1269->g_1198 += 1)
            { /* block id: 572 */
                return p_26;
            }
            ++p_1269->g_1212[6][2];
            for (p_25 = 6; (p_25 >= 0); p_25 -= 1)
            { /* block id: 578 */
                int64_t l_1217 = 0x253930AC5000CF4AL;
                int i, j;
                (*l_1206) &= (p_1269->g_852[(p_24 + 7)][(p_25 + 1)] , p_25);
                (*l_1206) = (safe_div_func_uint16_t_u_u(l_1217, p_24));
                for (p_1269->g_59 = 0; (p_1269->g_59 <= 8); p_1269->g_59 += 1)
                { /* block id: 583 */
                    uint16_t l_1218 = 65534UL;
                    for (l_1209 = 0; (l_1209 >= 0); l_1209 -= 1)
                    { /* block id: 586 */
                        union U1 *l_1221 = (void*)0;
                        int16_t *l_1222 = &p_1269->g_120;
                        int16_t *l_1223 = &p_1269->g_852[(p_24 + 7)][(p_25 + 1)].f1;
                        int64_t l_1229 = 3L;
                        int i;
                        if (p_24)
                            break;
                        l_1218++;
                        l_1221 = l_1221;
                        (*l_1206) &= (((*l_1223) = ((*l_1222) = 0L)) == (p_24 >= ((~(safe_rshift_func_int16_t_s_u((((p_1269->g_1198 >= (safe_lshift_func_int8_t_s_s((((**p_1269->g_544) , p_1269->g_1228) , l_1229), (p_1269->g_168 &= (*p_26))))) , (safe_mul_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_1209 | (p_25 <= p_1269->g_185[0][4][0].f0)), 0xD8L)), l_1218)), l_1218)) != (-7L)) & 0x0C82C46AL), 6UL))) , l_1217), 5))) ^ (*p_26))));
                    }
                    if (l_1218)
                        break;
                }
            }
        }
        (*l_1206) &= p_24;
        l_1239 = (l_1206 = &l_1207[1]);
    }
    (*l_1206) = 0x67797AD9L;
    return l_1240[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1269->g_581.f1 p_1269->g_58 p_1269->g_59 p_1269->g_317 p_1269->g_538 p_1269->g_321 p_1269->g_581.f0 p_1269->g_777 p_1269->g_314 p_1269->g_34 p_1269->g_968 p_1269->g_313 p_1269->g_724.f1 p_1269->g_96 p_1269->g_185.f0 p_1269->g_549 p_1269->g_224 p_1269->g_225 p_1269->g_74 p_1269->g_983 p_1269->g_574 p_1269->g_611.f0 p_1269->g_608 p_1269->g_1012 p_1269->g_310 p_1269->g_1038 p_1269->g_4 p_1269->g_724 p_1269->g_705.f0 p_1269->g_252 p_1269->g_797 p_1269->g_1097 p_1269->g_1100 p_1269->g_1106 p_1269->g_343.f0 p_1269->g_1132 p_1269->g_833.f2 p_1269->g_1019 p_1269->g_1145 p_1269->g_1147
 * writes: p_1269->g_581.f1 p_1269->g_574 p_1269->g_587 p_1269->g_188 p_1269->g_314 p_1269->g_968 p_1269->g_724.f1 p_1269->g_74 p_1269->g_983 p_1269->g_59 p_1269->g_377 p_1269->g_96 p_1269->g_34 p_1269->g_80 p_1269->g_252 p_1269->g_1106 p_1269->g_486 p_1269->g_833.f2 p_1269->g_1019
 */
uint64_t  func_27(int64_t  p_28, uint32_t  p_29, int16_t  p_30, struct S7 * p_1269)
{ /* block id: 433 */
    uint64_t l_962 = 4UL;
    uint32_t *l_975 = &p_1269->g_651;
    union U1 l_979[3] = {{0x492AB11BL},{0x492AB11BL},{0x492AB11BL}};
    int64_t *l_1018 = &p_1269->g_1019;
    int32_t l_1053 = 0x32CF736BL;
    uint16_t l_1061 = 2UL;
    uint16_t l_1068 = 0xE6ADL;
    uint64_t **l_1113 = &p_1269->g_313;
    union U3 **l_1114 = &p_1269->g_1107;
    int32_t l_1118 = 0L;
    int i;
    for (p_1269->g_581.f1 = 6; (p_1269->g_581.f1 < 46); p_1269->g_581.f1 = safe_add_func_uint16_t_u_u(p_1269->g_581.f1, 3))
    { /* block id: 436 */
        int32_t *l_932[7] = {&p_1269->g_252,&p_1269->g_252,&p_1269->g_252,&p_1269->g_252,&p_1269->g_252,&p_1269->g_252,&p_1269->g_252};
        uint8_t **l_935 = &p_1269->g_157[0][1];
        int32_t l_971 = 0x33C1EC6BL;
        int64_t l_1005 = 1L;
        int32_t *l_1088[7];
        int i;
        for (i = 0; i < 7; i++)
            l_1088[i] = &p_1269->g_74[0];
        for (p_1269->g_574 = 0; (p_1269->g_574 == 43); ++p_1269->g_574)
        { /* block id: 439 */
            uint64_t l_927[8] = {0x999CFD82A7896513L,0xAE10E02A33A058BFL,0x999CFD82A7896513L,0x999CFD82A7896513L,0xAE10E02A33A058BFL,0x999CFD82A7896513L,0x999CFD82A7896513L,0xAE10E02A33A058BFL};
            uint8_t **l_934 = &p_1269->g_157[0][1];
            uint32_t *l_973 = &p_1269->g_724.f1;
            int32_t l_987 = 0x7F03B283L;
            int32_t l_1071 = 0x72461152L;
            int32_t l_1072[1][10][7] = {{{0x5D7079BFL,1L,0x7B874AB2L,1L,0x69468EE2L,0x5D7079BFL,1L},{0x5D7079BFL,1L,0x7B874AB2L,1L,0x69468EE2L,0x5D7079BFL,1L},{0x5D7079BFL,1L,0x7B874AB2L,1L,0x69468EE2L,0x5D7079BFL,1L},{0x5D7079BFL,1L,0x7B874AB2L,1L,0x69468EE2L,0x5D7079BFL,1L},{0x5D7079BFL,1L,0x7B874AB2L,1L,0x69468EE2L,0x5D7079BFL,1L},{0x5D7079BFL,1L,0x7B874AB2L,1L,0x69468EE2L,0x5D7079BFL,1L},{0x5D7079BFL,1L,0x7B874AB2L,1L,0x69468EE2L,0x5D7079BFL,1L},{0x5D7079BFL,1L,0x7B874AB2L,1L,0x69468EE2L,0x5D7079BFL,1L},{0x5D7079BFL,1L,0x7B874AB2L,1L,0x69468EE2L,0x5D7079BFL,1L},{0x5D7079BFL,1L,0x7B874AB2L,1L,0x69468EE2L,0x5D7079BFL,1L}}};
            union U3 *l_1081 = (void*)0;
            union U3 **l_1080 = &l_1081;
            int i, j, k;
            for (p_1269->g_587 = 11; (p_1269->g_587 <= (-1)); p_1269->g_587 = safe_sub_func_int16_t_s_s(p_1269->g_587, 7))
            { /* block id: 442 */
                uint16_t l_919[5];
                uint8_t *l_926 = &p_1269->g_188;
                int32_t l_936 = 0L;
                union U6 l_957[5][5] = {{{65535UL},{0UL},{5UL},{0x16AFL},{5UL}},{{65535UL},{0UL},{5UL},{0x16AFL},{5UL}},{{65535UL},{0UL},{5UL},{0x16AFL},{5UL}},{{65535UL},{0UL},{5UL},{0x16AFL},{5UL}},{{65535UL},{0UL},{5UL},{0x16AFL},{5UL}}};
                int16_t l_965 = 0L;
                int32_t l_969 = 0x57B8D6DEL;
                uint32_t *l_978 = (void*)0;
                uint64_t l_988 = 18446744073709551610UL;
                uint16_t l_1020[1][4][10] = {{{65535UL,65535UL,0x9D99L,0x659FL,0x1828L,0x659FL,0x9D99L,65535UL,65535UL,0x9D99L},{65535UL,65535UL,0x9D99L,0x659FL,0x1828L,0x659FL,0x9D99L,65535UL,65535UL,0x9D99L},{65535UL,65535UL,0x9D99L,0x659FL,0x1828L,0x659FL,0x9D99L,65535UL,65535UL,0x9D99L},{65535UL,65535UL,0x9D99L,0x659FL,0x1828L,0x659FL,0x9D99L,65535UL,65535UL,0x9D99L}}};
                int32_t l_1074[6][7] = {{0x254899CCL,(-8L),0x254899CCL,0x254899CCL,(-8L),0x254899CCL,0x254899CCL},{0x254899CCL,(-8L),0x254899CCL,0x254899CCL,(-8L),0x254899CCL,0x254899CCL},{0x254899CCL,(-8L),0x254899CCL,0x254899CCL,(-8L),0x254899CCL,0x254899CCL},{0x254899CCL,(-8L),0x254899CCL,0x254899CCL,(-8L),0x254899CCL,0x254899CCL},{0x254899CCL,(-8L),0x254899CCL,0x254899CCL,(-8L),0x254899CCL,0x254899CCL},{0x254899CCL,(-8L),0x254899CCL,0x254899CCL,(-8L),0x254899CCL,0x254899CCL}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_919[i] = 65534UL;
                if (l_919[2])
                    break;
                if ((l_927[5] |= (p_28 , (safe_mul_func_uint16_t_u_u(((safe_add_func_int64_t_s_s(0x20D634F68241A5A2L, (p_29 | p_29))) <= (9L && (0xD38FA28FFAF547F2L <= p_30))), (((safe_sub_func_int8_t_s_s((0x9BL ^ ((*l_926) = p_30)), p_29)) <= 0x15L) < 1UL))))))
                { /* block id: 446 */
                    int64_t l_964 = 4L;
                    uint32_t *l_974[5][4] = {{&p_1269->g_651,&p_1269->g_724.f1,&p_1269->g_880,&p_1269->g_724.f1},{&p_1269->g_651,&p_1269->g_724.f1,&p_1269->g_880,&p_1269->g_724.f1},{&p_1269->g_651,&p_1269->g_724.f1,&p_1269->g_880,&p_1269->g_724.f1},{&p_1269->g_651,&p_1269->g_724.f1,&p_1269->g_880,&p_1269->g_724.f1},{&p_1269->g_651,&p_1269->g_724.f1,&p_1269->g_880,&p_1269->g_724.f1}};
                    uint32_t *l_984 = (void*)0;
                    int32_t *l_986[1][10] = {{&l_936,&l_969,&l_971,&l_969,&l_936,&l_936,&l_969,&l_971,&l_969,&l_936}};
                    int i, j;
                    if (((((safe_mul_func_int8_t_s_s((~(((*p_1269->g_317) = (safe_add_func_int32_t_s_s(((void*)0 != l_932[2]), (l_936 ^= (safe_unary_minus_func_int64_t_s((((l_934 != l_935) | ((void*)0 != &p_1269->g_58)) >= (*p_1269->g_58)))))))) == ((safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(0L, ((*p_1269->g_538) , 0xEEF3C3ECL))), p_29)) | 0x329F6519L))), l_919[4])) && p_1269->g_581.f0) , p_28) > 0x4A733CCE1CD797B7L))
                    { /* block id: 449 */
                        union U2 *l_960 = (void*)0;
                        int32_t l_961 = 0x5136A503L;
                        int32_t *l_963 = &l_936;
                        uint64_t *l_966 = (void*)0;
                        uint64_t *l_967[3];
                        int32_t *l_970[7];
                        union U6 l_972 = {0x0F67L};
                        uint32_t **l_976 = &l_974[1][1];
                        uint32_t **l_977[1];
                        int32_t *l_982 = &p_1269->g_983;
                        int8_t *l_985 = &p_1269->g_22;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_967[i] = &p_1269->g_968;
                        for (i = 0; i < 7; i++)
                            l_970[i] = &p_1269->g_74[0];
                        for (i = 0; i < 1; i++)
                            l_977[i] = (void*)0;
                        l_971 &= ((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(p_30, (p_1269->g_777[3] , (safe_div_func_uint64_t_u_u(((l_969 = (p_1269->g_968 |= ((safe_rshift_func_int8_t_s_u(p_30, (((*l_963) = ((-1L) | (safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((p_30 >= (l_961 = ((l_957[0][3] , ((((*p_1269->g_317) = (*p_1269->g_317)) >= (safe_mul_func_int8_t_s_s(((18446744073709551609UL ^ (((void*)0 != l_960) != l_961)) , 0x3BL), l_962))) > p_29)) & p_1269->g_34))), 0xA1E6799A495E8203L)), 0x3AL)), p_28)))) & l_964))) || l_965))) , (*p_1269->g_313)), p_30))))) == p_30), p_1269->g_724.f1)), p_1269->g_96[4])) ^ l_957[0][3].f0);
                        l_986[0][9] = func_42(func_36((l_978 = ((*l_976) = func_42(l_972, l_973, l_926, p_1269->g_59, (l_975 = l_974[1][1]), p_1269))), l_979[2], ((*l_982) |= (+(safe_lshift_func_int8_t_s_u(l_979[2].f0, 5)))), (0x3887L && 0x3A9DL), p_30, p_1269), l_984, l_985, p_1269->g_549, l_973, p_1269);
                    }
                    else
                    { /* block id: 461 */
                        uint64_t l_991 = 4UL;
                        union U1 **l_1004 = &p_1269->g_660;
                        ++l_988;
                        l_991 ^= l_927[0];
                        l_987 = (~(0x06L >= (safe_lshift_func_int16_t_s_u((p_1269->g_574 , ((((((p_28 & 18446744073709551615UL) && (safe_div_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u((65534UL >= p_1269->g_611[0].f0), (p_28 , (safe_mul_func_int16_t_s_s(p_1269->g_608, (safe_mod_func_uint32_t_u_u((((&p_1269->g_545 == l_1004) && 0xD253L) == 255UL), 1L))))))), p_30)) , l_1005), 0x1725L))) > 0xC3L) < p_28) && l_991) > p_30)), l_971))));
                        if (p_30)
                            continue;
                    }
                    if (l_979[2].f0)
                        continue;
                }
                else
                { /* block id: 468 */
                    uint64_t **l_1013 = (void*)0;
                    uint64_t **l_1014 = (void*)0;
                    uint64_t *l_1016 = &p_1269->g_968;
                    uint64_t **l_1015 = &l_1016;
                    int32_t l_1017 = 1L;
                    int32_t l_1067[4] = {(-2L),(-2L),(-2L),(-2L)};
                    uint64_t l_1075 = 0x348A443DBF8E763CL;
                    int i;
                    if (((p_28 == (((*p_1269->g_58) = ((*l_973) ^= l_979[2].f0)) && ((!(p_29 | (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u((&p_1269->g_968 != ((*l_1015) = (p_1269->g_1012[1] , &p_1269->g_968))), p_29)), ((((((((l_1017 || 0L) , p_1269->g_310) != l_1018) || 0UL) > l_919[2]) ^ 0x61F0L) < l_1020[0][1][3]) >= (-10L)))), l_979[2].f0)))) < 253UL))) != (-1L)))
                    { /* block id: 472 */
                        union U1 l_1037 = {0L};
                        int16_t *l_1039[8][3][1] = {{{&p_1269->g_377},{&p_1269->g_377},{&p_1269->g_377}},{{&p_1269->g_377},{&p_1269->g_377},{&p_1269->g_377}},{{&p_1269->g_377},{&p_1269->g_377},{&p_1269->g_377}},{{&p_1269->g_377},{&p_1269->g_377},{&p_1269->g_377}},{{&p_1269->g_377},{&p_1269->g_377},{&p_1269->g_377}},{{&p_1269->g_377},{&p_1269->g_377},{&p_1269->g_377}},{{&p_1269->g_377},{&p_1269->g_377},{&p_1269->g_377}},{{&p_1269->g_377},{&p_1269->g_377},{&p_1269->g_377}}};
                        int64_t **l_1041[6][2] = {{&l_1018,(void*)0},{&l_1018,(void*)0},{&l_1018,(void*)0},{&l_1018,(void*)0},{&l_1018,(void*)0},{&l_1018,(void*)0}};
                        int64_t ***l_1040 = &l_1041[1][1];
                        uint32_t *l_1050 = &p_1269->g_651;
                        uint32_t l_1051 = 3UL;
                        int8_t *l_1052[10][2] = {{&p_1269->g_833.f2,&p_1269->g_833.f2},{&p_1269->g_833.f2,&p_1269->g_833.f2},{&p_1269->g_833.f2,&p_1269->g_833.f2},{&p_1269->g_833.f2,&p_1269->g_833.f2},{&p_1269->g_833.f2,&p_1269->g_833.f2},{&p_1269->g_833.f2,&p_1269->g_833.f2},{&p_1269->g_833.f2,&p_1269->g_833.f2},{&p_1269->g_833.f2,&p_1269->g_833.f2},{&p_1269->g_833.f2,&p_1269->g_833.f2},{&p_1269->g_833.f2,&p_1269->g_833.f2}};
                        uint16_t *l_1056 = (void*)0;
                        uint16_t *l_1057 = &p_1269->g_96[1];
                        int32_t *l_1058 = &l_1017;
                        int i, j, k;
                        l_971 ^= ((p_1269->g_377 = (safe_div_func_int64_t_s_s((((safe_add_func_int8_t_s_s(p_28, l_1017)) ^ (safe_div_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((((*p_1269->g_317) = (&p_1269->g_968 != (void*)0)) == ((((safe_mod_func_uint8_t_u_u(((*l_926) = l_1005), 0x60L)) || (safe_lshift_func_int8_t_s_u(((safe_div_func_int64_t_s_s((safe_div_func_int32_t_s_s((p_1269->g_74[1] ^= ((l_1037 , p_1269->g_1038) , ((0x38536FA47C2E35E6L || 0L) || 0x1E562D88L))), l_987)), 6UL)) & 7UL), 5))) >= (-1L)) > p_1269->g_4)), p_28)) & p_28), p_28))) , 4L), 0xE4F6250484F40FB5L))) ^ (-8L));
                        (*l_1040) = (void*)0;
                        (*l_1058) &= (0x064E1453L != (safe_lshift_func_int16_t_s_u(0x3222L, (p_1269->g_724 , ((*l_1057) = (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((l_1050 != (void*)0), (((l_936 = (l_1053 &= l_1051)) , 0x1B09A17EL) && (safe_lshift_func_uint16_t_u_s(1UL, 6))))), p_1269->g_705.f0)), p_30)))))));
                        if (l_987)
                            continue;
                    }
                    else
                    { /* block id: 484 */
                        int32_t *l_1059 = &l_1017;
                        int32_t *l_1060[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1060[i] = (void*)0;
                        l_1061--;
                        l_936 = (+((*l_1059) = l_979[2].f0));
                    }
                    for (l_988 = (-14); (l_988 <= 27); l_988 = safe_add_func_uint64_t_u_u(l_988, 3))
                    { /* block id: 491 */
                        int32_t *l_1066[9][2] = {{&l_971,&l_987},{&l_971,&l_987},{&l_971,&l_987},{&l_971,&l_987},{&l_971,&l_987},{&l_971,&l_987},{&l_971,&l_987},{&l_971,&l_987},{&l_971,&l_987}};
                        int i, j;
                        l_1068++;
                        ++l_1075;
                        return (*p_1269->g_224);
                    }
                }
            }
            if (p_28)
                continue;
            for (p_1269->g_34 = (-3); (p_1269->g_34 > 3); p_1269->g_34 = safe_add_func_uint16_t_u_u(p_1269->g_34, 5))
            { /* block id: 501 */
                union U3 ***l_1082 = &l_1080;
                union U3 **l_1084 = &l_1081;
                union U3 ***l_1083 = &l_1084;
                int32_t **l_1085 = &p_1269->g_80;
                int32_t *l_1087 = &l_987;
                int32_t **l_1086 = &l_1087;
                (*l_1083) = ((*l_1082) = l_1080);
                l_1088[3] = ((*l_1086) = ((*l_1085) = &l_1072[0][8][1]));
                if (p_30)
                    break;
            }
        }
        for (p_1269->g_252 = (-25); (p_1269->g_252 < 1); p_1269->g_252++)
        { /* block id: 512 */
            return p_29;
        }
        (*p_1269->g_797) = (safe_add_func_uint8_t_u_u(p_30, 0x27L));
        if ((*p_1269->g_797))
            continue;
    }
    for (l_1068 = 0; (l_1068 != 18); l_1068 = safe_add_func_uint64_t_u_u(l_1068, 4))
    { /* block id: 520 */
        union U1 **l_1101 = (void*)0;
        int32_t l_1115 = 0x4620F69EL;
        int32_t **l_1116 = (void*)0;
        int32_t **l_1117 = &p_1269->g_486;
        uint32_t *l_1121[8][2] = {{&p_1269->g_549,(void*)0},{&p_1269->g_549,(void*)0},{&p_1269->g_549,(void*)0},{&p_1269->g_549,(void*)0},{&p_1269->g_549,(void*)0},{&p_1269->g_549,(void*)0},{&p_1269->g_549,(void*)0},{&p_1269->g_549,(void*)0}};
        uint16_t *l_1127 = &p_1269->g_581.f1;
        int32_t *l_1135 = &l_1053;
        int i, j;
        l_1118 = (p_29 > (l_1053 ^= (((safe_add_func_uint64_t_u_u((p_1269->g_1097[4][1][3] , ((((safe_rshift_func_uint16_t_u_u((p_1269->g_1100 , p_29), 13)) , l_1101) != (((l_975 == ((*l_1117) = ((((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((((p_1269->g_1106 = p_1269->g_1106) == ((safe_sub_func_int64_t_s_s((safe_div_func_int32_t_s_s(((((((((*p_1269->g_317) = ((((void*)0 == l_1113) , p_28) < l_1068)) ^ 0x0EF21AD9777FC569L) , l_979[2]) , p_29) && p_29) & l_962) != p_29), 0x229C0C56L)), 3L)) , l_1114)) & l_1115) <= p_29), 1)), p_28)) > 0x02L) , p_29) , &p_1269->g_252))) > p_30) , &p_1269->g_545)) ^ l_1115)), 0x8D2C488CD6FB3A38L)) , l_962) != p_30)));
        (*l_1135) = (safe_sub_func_uint8_t_u_u(((void*)0 != l_1121[7][0]), (safe_sub_func_uint16_t_u_u(((-4L) < (((safe_unary_minus_func_uint64_t_u((safe_mul_func_uint16_t_u_u(((*l_1127) = p_1269->g_96[4]), p_1269->g_343[2][2].f0)))) != (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((p_1269->g_1132 , (safe_div_func_int8_t_s_s(l_979[2].f0, ((((p_1269->g_1038 , (!p_30)) ^ l_1115) > l_1118) ^ l_1115)))), 3)), l_1115))) & p_29)), 0xD705L))));
        for (p_30 = 5; (p_30 >= 0); p_30 -= 1)
        { /* block id: 530 */
            for (p_1269->g_833.f2 = 0; (p_1269->g_833.f2 <= 5); p_1269->g_833.f2 += 1)
            { /* block id: 533 */
                int32_t l_1142 = 0x78940459L;
                int32_t *l_1148 = (void*)0;
                int32_t *l_1149 = &p_1269->g_74[1];
                int i, j;
                (*l_1149) ^= (((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((((*l_1018) ^= (safe_sub_func_int8_t_s_s((-5L), l_1142))) , (l_1121[1][1] == (void*)0)) == ((safe_lshift_func_int16_t_s_u((p_1269->g_1145 , 0x6663L), 3)) & p_29)), 0x70L)), (safe_unary_minus_func_int64_t_s((p_1269->g_1147 == p_1269->g_1147))))) >= p_30) < (*l_1135));
                (*l_1135) |= p_29;
                (*l_1135) ^= 0x378D9A2EL;
            }
        }
    }
    return l_1118;
}


/* ------------------------------------------ */
/* 
 * reads : p_1269->g_185.f0 p_1269->g_549 p_1269->g_224 p_1269->g_225 p_1269->g_74
 * writes: p_1269->g_724.f1 p_1269->g_74
 */
union U6  func_36(uint32_t * p_37, union U1  p_38, int32_t  p_39, uint32_t  p_40, uint32_t  p_41, struct S7 * p_1269)
{ /* block id: 428 */
    uint32_t *l_898 = &p_1269->g_651;
    int32_t l_899 = 0L;
    union U6 l_900[7][8][4] = {{{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}}},{{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}}},{{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}}},{{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}}},{{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}}},{{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}}},{{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}},{{0x1C41L},{1UL},{0x3EE0L},{9UL}}}};
    int8_t *l_901 = &p_1269->g_165[0][9][2];
    int8_t **l_902 = (void*)0;
    int8_t **l_903 = &l_901;
    int32_t **l_910[6];
    int32_t *l_911[3];
    int32_t *l_912[2];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_910[i] = &p_1269->g_80;
    for (i = 0; i < 3; i++)
        l_911[i] = &p_1269->g_74[0];
    for (i = 0; i < 2; i++)
        l_912[i] = &p_1269->g_74[0];
    l_912[1] = (l_911[2] = func_42(l_900[1][4][2], &p_1269->g_880, ((*l_903) = l_901), (safe_lshift_func_int8_t_s_s((0x43A8EB99L | ((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(l_899, 14)), 0x7D5377B69B37CA17L)) ^ l_900[1][4][2].f0)), 0)), &p_1269->g_880, p_1269));
    return l_900[1][4][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1269->g_724.f1 p_1269->g_185.f0 p_1269->g_549 p_1269->g_224 p_1269->g_225 p_1269->g_74
 * writes: p_1269->g_724.f1 p_1269->g_74
 */
uint32_t * func_42(union U6  p_43, uint32_t * p_44, int8_t * p_45, uint32_t  p_46, uint32_t * p_47, struct S7 * p_1269)
{ /* block id: 419 */
    uint32_t ****l_891 = &p_1269->g_853;
    int32_t l_892 = (-1L);
    int8_t l_896 = 0x55L;
    int32_t *l_897 = &p_1269->g_74[0];
    for (p_1269->g_724.f1 = 0; (p_1269->g_724.f1 <= 6); p_1269->g_724.f1 += 1)
    { /* block id: 422 */
        uint32_t l_888 = 0xC0BA29BDL;
        uint16_t *l_893 = (void*)0;
        uint16_t *l_894[10][7][3] = {{{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]}},{{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]}},{{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]}},{{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]}},{{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]}},{{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]}},{{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]}},{{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]}},{{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]}},{{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]},{&p_1269->g_96[4],&p_1269->g_96[4],&p_1269->g_96[0]}}};
        int32_t *l_895[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_895[i] = (void*)0;
        l_896 |= (safe_lshift_func_uint16_t_u_s((p_43.f0 = (safe_add_func_int64_t_s_s((((0x8CE9L == (safe_sub_func_int16_t_s_s(p_1269->g_185[0][4][0].f0, p_1269->g_549))) || ((((l_888 | (safe_sub_func_uint8_t_u_u((&p_1269->g_853 != l_891), l_888))) , (*p_1269->g_224)) , 18446744073709551613UL) <= l_892)) || 0x7AACDE361169EB93L), 0UL))), 10));
    }
    (*l_897) &= p_43.f0;
    return &p_1269->g_651;
}


/* ------------------------------------------ */
/* 
 * reads : p_1269->g_74 p_1269->g_58 p_1269->g_59 p_1269->g_80 p_1269->g_4 p_1269->g_120 p_1269->g_129 p_1269->g_144 p_1269->g_148 p_1269->g_157 p_1269->g_163 p_1269->g_158 p_1269->g_185 p_1269->g_168 p_1269->g_188 p_1269->g_129.f0 p_1269->g_201 p_1269->g_224 p_1269->g_260 p_1269->g_264 p_1269->g_225 p_1269->g_381 p_1269->g_266 p_1269->g_313 p_1269->g_377 p_1269->g_314 p_1269->g_343 p_1269->g_425 p_1269->g_343.f0 p_1269->g_430 p_1269->g_3 p_1269->g_165 p_1269->g_247.f0 p_1269->g_777 p_1269->g_792 p_1269->g_574 p_1269->g_144.f0 p_1269->g_608 p_1269->g_587 p_1269->g_797 p_1269->g_486 p_1269->g_252 p_1269->g_96 p_1269->g_833 p_1269->g_833.f2 p_1269->g_545 p_1269->g_546 p_1269->g_852 p_1269->g_853 p_1269->g_544 p_1269->g_546.f0 p_1269->g_865 p_1269->g_317 p_1269->g_651
 * writes: p_1269->g_96 p_1269->g_74 p_1269->g_120 p_1269->g_148 p_1269->g_157 p_1269->g_59 p_1269->g_165 p_1269->g_168 p_1269->g_188 p_1269->g_158 p_1269->g_266 p_1269->g_314 p_1269->g_80 p_1269->g_377 p_1269->g_144.f4 p_1269->g_724.f2 p_1269->g_530.f2 p_1269->g_587 p_1269->g_833.f2 p_1269->g_853 p_1269->g_561.f1 p_1269->g_651
 */
union U6  func_48(int64_t  p_49, uint32_t * p_50, int8_t  p_51, struct S7 * p_1269)
{ /* block id: 9 */
    uint16_t l_62[1][5];
    int32_t *l_85[3][10] = {{&p_1269->g_74[0],&p_1269->g_74[0],(void*)0,(void*)0,&p_1269->g_74[0],(void*)0,(void*)0,&p_1269->g_74[0],&p_1269->g_74[0],(void*)0},{&p_1269->g_74[0],&p_1269->g_74[0],(void*)0,(void*)0,&p_1269->g_74[0],(void*)0,(void*)0,&p_1269->g_74[0],&p_1269->g_74[0],(void*)0},{&p_1269->g_74[0],&p_1269->g_74[0],(void*)0,(void*)0,&p_1269->g_74[0],(void*)0,(void*)0,&p_1269->g_74[0],&p_1269->g_74[0],(void*)0}};
    uint32_t l_86 = 0x7A4BBF6EL;
    uint16_t l_87 = 65535UL;
    union U6 l_836 = {0xC7D6L};
    int16_t l_860 = 0L;
    uint8_t l_861[4][2] = {{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}};
    union U6 l_864[3] = {{0x0AA8L},{0x0AA8L},{0x0AA8L}};
    union U1 l_871 = {0x36E25B26L};
    int32_t l_878 = 0x071B0861L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_62[i][j] = 7UL;
    }
    (*p_1269->g_797) = ((safe_sub_func_int8_t_s_s(l_62[0][1], (p_51 >= ((func_63(l_62[0][3], (l_62[0][1] | func_67(((func_71(&p_1269->g_22, p_1269) <= ((safe_add_func_uint64_t_u_u(((l_87 = (l_86 = (~l_62[0][1]))) != 7UL), ((safe_unary_minus_func_uint8_t_u(p_49)) , p_51))) , 0xA2L)) ^ (*p_1269->g_58)), l_85[1][8], p_49, p_1269)), l_836, p_1269) , (-10L)) || p_1269->g_546.f0)))) == 0L);
    l_861[3][0]--;
    for (p_1269->g_314 = 0; (p_1269->g_314 <= 6); p_1269->g_314 += 1)
    { /* block id: 404 */
        return l_864[2];
    }
    if (((-1L) < ((((void*)0 != p_1269->g_865) , ((safe_sub_func_int8_t_s_s(((((p_1269->g_561.f1 = (safe_add_func_uint64_t_u_u((*p_1269->g_317), ((((void*)0 == &l_861[0][0]) == (l_871 , (p_49 != ((((safe_mod_func_int8_t_s_s(p_49, 0x4CL)) || (*p_50)) <= 0UL) < 0x7864L)))) & 0x422AL)))) <= p_51) , 0L) < p_1269->g_74[0]), p_49)) , &l_860)) != &l_860)))
    { /* block id: 408 */
        for (p_1269->g_651 = 0; (p_1269->g_651 < 2); ++p_1269->g_651)
        { /* block id: 411 */
            l_878 &= p_49;
        }
        return l_864[2];
    }
    else
    { /* block id: 415 */
        (*p_1269->g_797) = (p_49 && ((*p_50) != (1L & 0xCEL)));
    }
    return l_864[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_1269->g_587 p_1269->g_833.f2 p_1269->g_545 p_1269->g_546 p_1269->g_852 p_1269->g_853 p_1269->g_314 p_1269->g_74 p_1269->g_544
 * writes: p_1269->g_587 p_1269->g_833.f2 p_1269->g_853 p_1269->g_74
 */
union U1  func_63(uint64_t  p_64, int32_t  p_65, union U6  p_66, struct S7 * p_1269)
{ /* block id: 383 */
    int32_t l_856 = 0x051AEF2EL;
    int32_t l_858 = (-1L);
    for (p_1269->g_587 = 0; (p_1269->g_587 <= (-24)); --p_1269->g_587)
    { /* block id: 386 */
        uint32_t ***l_846 = (void*)0;
        uint32_t **l_848 = (void*)0;
        uint32_t ***l_847 = &l_848;
        int32_t l_849[7][9] = {{(-1L),0x0790B5A0L,(-1L),0x20FD0C20L,(-1L),0x0790B5A0L,(-1L),0x09AEFAB1L,0x506ADC7BL},{(-1L),0x0790B5A0L,(-1L),0x20FD0C20L,(-1L),0x0790B5A0L,(-1L),0x09AEFAB1L,0x506ADC7BL},{(-1L),0x0790B5A0L,(-1L),0x20FD0C20L,(-1L),0x0790B5A0L,(-1L),0x09AEFAB1L,0x506ADC7BL},{(-1L),0x0790B5A0L,(-1L),0x20FD0C20L,(-1L),0x0790B5A0L,(-1L),0x09AEFAB1L,0x506ADC7BL},{(-1L),0x0790B5A0L,(-1L),0x20FD0C20L,(-1L),0x0790B5A0L,(-1L),0x09AEFAB1L,0x506ADC7BL},{(-1L),0x0790B5A0L,(-1L),0x20FD0C20L,(-1L),0x0790B5A0L,(-1L),0x09AEFAB1L,0x506ADC7BL},{(-1L),0x0790B5A0L,(-1L),0x20FD0C20L,(-1L),0x0790B5A0L,(-1L),0x09AEFAB1L,0x506ADC7BL}};
        uint32_t ****l_854 = &p_1269->g_853;
        uint32_t ***l_855 = (void*)0;
        int8_t *l_857[6] = {&p_1269->g_165[0][8][2],&p_1269->g_165[0][8][2],&p_1269->g_165[0][8][2],&p_1269->g_165[0][8][2],&p_1269->g_165[0][8][2],&p_1269->g_165[0][8][2]};
        int32_t *l_859 = &p_1269->g_74[0];
        int i, j;
        for (p_1269->g_833.f2 = (-10); (p_1269->g_833.f2 > 2); p_1269->g_833.f2 = safe_add_func_uint32_t_u_u(p_1269->g_833.f2, 8))
        { /* block id: 389 */
            union U1 l_841 = {0x75726D61L};
            return l_841;
        }
        (*l_859) ^= ((safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((((*l_847) = (void*)0) != ((*p_1269->g_545) , (((((p_65 & (l_849[0][0] & (safe_lshift_func_int8_t_s_s((l_856 = (l_849[5][0] | ((p_1269->g_852[8][5] , ((*l_854) = p_1269->g_853)) != l_855))), 7)))) == (l_858 &= p_1269->g_314)) ^ p_64) , p_64) , (void*)0))), 0xEDL)) & l_849[0][0]), 1UL)) || l_849[0][0]);
        return (**p_1269->g_544);
    }
    return (**p_1269->g_544);
}


/* ------------------------------------------ */
/* 
 * reads : p_1269->g_59 p_1269->g_58 p_1269->g_80 p_1269->g_4 p_1269->g_120 p_1269->g_74 p_1269->g_129 p_1269->g_144 p_1269->g_148 p_1269->g_157 p_1269->g_163 p_1269->g_158 p_1269->g_185 p_1269->g_168 p_1269->g_188 p_1269->g_129.f0 p_1269->g_201 p_1269->g_224 p_1269->g_260 p_1269->g_264 p_1269->g_225 p_1269->g_381 p_1269->g_266 p_1269->g_313 p_1269->g_377 p_1269->g_314 p_1269->g_343 p_1269->g_425 p_1269->g_343.f0 p_1269->g_430 p_1269->g_3 p_1269->g_165 p_1269->g_247.f0 p_1269->g_777 p_1269->g_792 p_1269->g_574 p_1269->g_144.f0 p_1269->g_608 p_1269->g_587 p_1269->g_797 p_1269->g_486 p_1269->g_252 p_1269->g_96 p_1269->g_833
 * writes: p_1269->g_96 p_1269->g_74 p_1269->g_120 p_1269->g_148 p_1269->g_157 p_1269->g_59 p_1269->g_165 p_1269->g_168 p_1269->g_188 p_1269->g_158 p_1269->g_266 p_1269->g_314 p_1269->g_80 p_1269->g_377 p_1269->g_144.f4 p_1269->g_724.f2 p_1269->g_530.f2
 */
uint64_t  func_67(int64_t  p_68, uint32_t * p_69, int32_t  p_70, struct S7 * p_1269)
{ /* block id: 18 */
    uint16_t *l_95 = &p_1269->g_96[4];
    uint32_t *l_109 = &p_1269->g_59;
    int32_t l_114 = 0x00CB0D77L;
    int32_t **l_115 = &p_1269->g_80;
    uint32_t l_118[4] = {0UL,0UL,0UL,0UL};
    int16_t *l_119 = &p_1269->g_120;
    int64_t l_121 = 0x7F9DDB29366B1B60L;
    int32_t l_178 = 0x1B733BB6L;
    union U0 *l_182 = (void*)0;
    uint64_t l_189[6][10] = {{0xD129854563BEC67EL,0UL,18446744073709551614UL,0x8DB74E30DE83DB49L,2UL,0xD129854563BEC67EL,0x8DB74E30DE83DB49L,4UL,0x8DB74E30DE83DB49L,0xD129854563BEC67EL},{0xD129854563BEC67EL,0UL,18446744073709551614UL,0x8DB74E30DE83DB49L,2UL,0xD129854563BEC67EL,0x8DB74E30DE83DB49L,4UL,0x8DB74E30DE83DB49L,0xD129854563BEC67EL},{0xD129854563BEC67EL,0UL,18446744073709551614UL,0x8DB74E30DE83DB49L,2UL,0xD129854563BEC67EL,0x8DB74E30DE83DB49L,4UL,0x8DB74E30DE83DB49L,0xD129854563BEC67EL},{0xD129854563BEC67EL,0UL,18446744073709551614UL,0x8DB74E30DE83DB49L,2UL,0xD129854563BEC67EL,0x8DB74E30DE83DB49L,4UL,0x8DB74E30DE83DB49L,0xD129854563BEC67EL},{0xD129854563BEC67EL,0UL,18446744073709551614UL,0x8DB74E30DE83DB49L,2UL,0xD129854563BEC67EL,0x8DB74E30DE83DB49L,4UL,0x8DB74E30DE83DB49L,0xD129854563BEC67EL},{0xD129854563BEC67EL,0UL,18446744073709551614UL,0x8DB74E30DE83DB49L,2UL,0xD129854563BEC67EL,0x8DB74E30DE83DB49L,4UL,0x8DB74E30DE83DB49L,0xD129854563BEC67EL}};
    int8_t l_216 = 0L;
    int32_t l_231 = 1L;
    int16_t l_233[4][5][3] = {{{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL}},{{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL}},{{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL}},{{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL},{(-7L),0x1B94L,0x750AL}}};
    int32_t l_234 = 0x348F3E24L;
    int32_t l_236 = 0x0076C985L;
    int32_t l_238 = (-5L);
    uint32_t l_243 = 0UL;
    union U6 *l_246[7][3][9] = {{{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247}},{{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247}},{{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247}},{{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247}},{{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247}},{{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247}},{{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247}}};
    uint8_t *l_354[7];
    uint64_t **l_412[7][3] = {{&p_1269->g_317,&p_1269->g_313,&p_1269->g_317},{&p_1269->g_317,&p_1269->g_313,&p_1269->g_317},{&p_1269->g_317,&p_1269->g_313,&p_1269->g_317},{&p_1269->g_317,&p_1269->g_313,&p_1269->g_317},{&p_1269->g_317,&p_1269->g_313,&p_1269->g_317},{&p_1269->g_317,&p_1269->g_313,&p_1269->g_317},{&p_1269->g_317,&p_1269->g_313,&p_1269->g_317}};
    int16_t l_468 = 6L;
    union U1 *l_472 = &p_1269->g_343[2][2];
    int32_t l_612 = 9L;
    int32_t l_636 = 0L;
    union U3 **l_750 = (void*)0;
    uint16_t l_802 = 0UL;
    int16_t l_810 = 0x2F24L;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_354[i] = &p_1269->g_158[0][1];
    if ((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((((((((*l_95) = p_1269->g_59) && ((*l_119) ^= (safe_add_func_uint8_t_u_u(((*p_1269->g_58) == ((((~(safe_div_func_int16_t_s_s(((((*p_1269->g_80) = (safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(((*l_95) = ((((l_109 != (void*)0) ^ 65528UL) | (safe_lshift_func_uint16_t_u_s((!(safe_mul_func_int16_t_s_s((&p_1269->g_80 != (l_114 , l_115)), (((safe_lshift_func_int16_t_s_s(0x4D47L, 10)) || 0x3F8EL) < 8UL)))), 11))) && p_70)), p_70)), l_118[1])), p_70)), 0x1E36L))) && p_68) , p_1269->g_4), p_68))) | p_1269->g_4) & p_70) || p_68)), (-6L))))) & p_68) > l_121) || 0x70A2L) < 0x87C1AF18L), p_70)), p_70)), 11)) || (-5L)) ^ p_68))
    { /* block id: 23 */
        uint16_t l_122 = 1UL;
        int32_t l_123 = 0L;
        uint8_t *l_160 = &p_1269->g_158[4][5];
        int32_t l_235 = 0x571DA718L;
        int32_t l_237[10][8] = {{5L,0x33665098L,5L,5L,0x33665098L,5L,5L,0x33665098L},{5L,0x33665098L,5L,5L,0x33665098L,5L,5L,0x33665098L},{5L,0x33665098L,5L,5L,0x33665098L,5L,5L,0x33665098L},{5L,0x33665098L,5L,5L,0x33665098L,5L,5L,0x33665098L},{5L,0x33665098L,5L,5L,0x33665098L,5L,5L,0x33665098L},{5L,0x33665098L,5L,5L,0x33665098L,5L,5L,0x33665098L},{5L,0x33665098L,5L,5L,0x33665098L,5L,5L,0x33665098L},{5L,0x33665098L,5L,5L,0x33665098L,5L,5L,0x33665098L},{5L,0x33665098L,5L,5L,0x33665098L,5L,5L,0x33665098L},{5L,0x33665098L,5L,5L,0x33665098L,5L,5L,0x33665098L}};
        int32_t l_251 = 0L;
        uint32_t l_271 = 1UL;
        union U6 *l_290[6][3][5] = {{{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247}},{{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247}},{{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247}},{{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247}},{{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247}},{{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247},{&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247,&p_1269->g_247}}};
        int32_t **l_349 = (void*)0;
        int64_t l_382 = 1L;
        uint32_t l_398 = 4294967295UL;
        uint16_t l_421 = 1UL;
        int32_t l_429 = 1L;
        union U1 *l_471 = &p_1269->g_343[0][2];
        int32_t l_478 = 0x647FDA70L;
        union U0 **l_484 = &l_182;
        union U3 *l_619[5][1][9] = {{{&p_1269->g_581,(void*)0,(void*)0,&p_1269->g_581,&p_1269->g_581,(void*)0,(void*)0,&p_1269->g_581,&p_1269->g_581}},{{&p_1269->g_581,(void*)0,(void*)0,&p_1269->g_581,&p_1269->g_581,(void*)0,(void*)0,&p_1269->g_581,&p_1269->g_581}},{{&p_1269->g_581,(void*)0,(void*)0,&p_1269->g_581,&p_1269->g_581,(void*)0,(void*)0,&p_1269->g_581,&p_1269->g_581}},{{&p_1269->g_581,(void*)0,(void*)0,&p_1269->g_581,&p_1269->g_581,(void*)0,(void*)0,&p_1269->g_581,&p_1269->g_581}},{{&p_1269->g_581,(void*)0,(void*)0,&p_1269->g_581,&p_1269->g_581,(void*)0,(void*)0,&p_1269->g_581,&p_1269->g_581}}};
        union U3 *l_620 = &p_1269->g_581;
        uint32_t l_621 = 4294967288UL;
        int32_t *l_798 = &l_237[9][0];
        union U1 ***l_799[8][6][5] = {{{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]}},{{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]}},{{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]}},{{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]}},{{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]}},{{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]}},{{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]}},{{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]},{&p_1269->g_659[2],&p_1269->g_659[0],&p_1269->g_659[0],&p_1269->g_659[2],&p_1269->g_659[0]}}};
        int32_t *l_801[7][8] = {{&l_178,&l_236,&l_178,&l_178,&l_236,&l_178,&l_178,&l_236},{&l_178,&l_236,&l_178,&l_178,&l_236,&l_178,&l_178,&l_236},{&l_178,&l_236,&l_178,&l_178,&l_236,&l_178,&l_178,&l_236},{&l_178,&l_236,&l_178,&l_178,&l_236,&l_178,&l_178,&l_236},{&l_178,&l_236,&l_178,&l_178,&l_236,&l_178,&l_178,&l_236},{&l_178,&l_236,&l_178,&l_178,&l_236,&l_178,&l_178,&l_236},{&l_178,&l_236,&l_178,&l_178,&l_236,&l_178,&l_178,&l_236}};
        union U3 **l_805 = &l_619[3][0][3];
        int i, j, k;
        if ((((l_123 = l_122) == 1L) | (&p_1269->g_96[4] == l_119)))
        { /* block id: 25 */
            uint32_t l_126 = 1UL;
            uint8_t *l_147 = &p_1269->g_148;
            uint8_t **l_159 = &p_1269->g_157[0][1];
            int8_t *l_164 = &p_1269->g_165[0][8][2];
            int64_t *l_166 = &l_121;
            int8_t *l_167 = &p_1269->g_168;
            int32_t l_230 = 0x1C9236B7L;
            int32_t l_232 = (-10L);
            int32_t l_239 = (-4L);
            int32_t l_240 = 0x63F069EEL;
            int32_t l_241 = 0x1A568303L;
            int32_t l_242 = 0x1BF3F658L;
            uint32_t l_253 = 5UL;
            union U6 l_258[3] = {{0xCAC3L},{0xCAC3L},{0xCAC3L}};
            union U6 **l_259[6];
            uint64_t l_318 = 0x28F2AB9857CA6B27L;
            int32_t **l_350[4] = {&p_1269->g_80,&p_1269->g_80,&p_1269->g_80,&p_1269->g_80};
            int16_t *l_388 = (void*)0;
            union U1 *l_426 = &p_1269->g_343[0][1];
            int i;
            for (i = 0; i < 6; i++)
                l_259[i] = &l_246[3][2][1];
            (**l_115) |= p_68;
lbl_275:
            if (((safe_mod_func_int32_t_s_s((l_126 & (safe_div_func_int32_t_s_s((p_1269->g_129[1][3][4] , (safe_add_func_uint16_t_u_u(65535UL, (safe_mod_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((*l_167) = ((safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_div_func_int64_t_s_s((p_1269->g_144 , ((*l_166) |= (safe_add_func_uint8_t_u_u(((*l_147)--), (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((*l_119) = ((((safe_add_func_int8_t_s_s((((*l_159) = p_1269->g_157[0][1]) == l_160), ((*l_164) = (((*l_109)++) >= (+(((p_1269->g_163 , p_68) <= p_70) || 0x44BBL)))))) | l_126) > l_122) <= p_1269->g_158[2][3])), (-1L))), 1)))))), (**l_115))), p_70)), p_1269->g_74[0])), p_1269->g_74[0])) < 0x64E466CC9BB9CBACL)), l_126)), p_1269->g_74[0]))))), l_126))), 0x11A3A22FL)) && 0x07EBBFD0L))
            { /* block id: 34 */
                uint8_t l_179 = 1UL;
                uint64_t *l_226 = &l_189[0][1];
                int32_t *l_229[2][6] = {{&l_114,&l_114,&l_114,&l_114,&l_114,&l_114},{&l_114,&l_114,&l_114,&l_114,&l_114,&l_114}};
                union U6 **l_248 = &l_246[3][2][1];
                union U6 *l_250 = (void*)0;
                union U6 **l_249 = &l_250;
                int i, j;
                for (l_126 = 23; (l_126 > 47); ++l_126)
                { /* block id: 37 */
                    int32_t *l_171 = &l_123;
                    int32_t *l_172 = (void*)0;
                    int32_t *l_173 = (void*)0;
                    int32_t *l_174 = (void*)0;
                    int32_t *l_175 = &p_1269->g_74[0];
                    int32_t *l_176 = (void*)0;
                    int32_t *l_177[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_177[i] = &l_114;
                    l_179--;
                    if (p_68)
                    { /* block id: 39 */
                        if ((*p_1269->g_80))
                            break;
                        l_182 = &p_1269->g_144;
                    }
                    else
                    { /* block id: 42 */
                        uint8_t l_194 = 255UL;
                        uint64_t *l_197 = &l_189[0][4];
                        p_1269->g_188 |= ((safe_rshift_func_int8_t_s_u((p_1269->g_185[0][4][0] , p_70), ((safe_sub_func_int16_t_s_s(7L, (+(((*p_1269->g_80) | (*p_1269->g_80)) || (((*l_167) ^= (p_68 > (((*l_171) , p_1269->g_74[0]) & ((3UL < p_68) || p_68)))) > 0xA2L))))) || p_68))) , 0x036A6536L);
                        (*p_1269->g_80) = (((*l_197) = ((0x17AD34EA4AFEE0E1L >= (**l_115)) ^ ((l_189[4][8] <= ((p_68 <= ((*l_167) = 0x68L)) == ((**l_159) = (safe_lshift_func_uint8_t_u_u(((0x36L | l_126) == (((l_194 && (((safe_sub_func_int8_t_s_s(0x47L, l_122)) || p_1269->g_129[1][3][4].f0) == 0xF9L)) >= p_70) >= p_1269->g_188)), 5))))) == p_68))) != 0x86E68A10EE6A9968L);
                        if (p_70)
                            break;
                        (*l_171) = p_68;
                    }
                    for (p_1269->g_59 = 0; (p_1269->g_59 != 11); p_1269->g_59 = safe_add_func_uint8_t_u_u(p_1269->g_59, 3))
                    { /* block id: 54 */
                        int64_t l_219[7][9] = {{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L,1L}};
                        int i, j;
                        p_70 = ((*l_175) = (!(((safe_unary_minus_func_int64_t_s((p_1269->g_201 , (safe_rshift_func_int8_t_s_s((9UL >= ((safe_rshift_func_uint16_t_u_s((((safe_div_func_uint64_t_u_u(p_70, (safe_rshift_func_int8_t_s_s(((*l_164) = (safe_add_func_int32_t_s_s((safe_div_func_int32_t_s_s(((*l_171) = ((safe_rshift_func_uint16_t_u_u(((l_216 || (safe_mul_func_int8_t_s_s(l_219[4][2], ((p_68 & 0xDCL) & (safe_add_func_uint8_t_u_u(p_68, ((*l_167) = ((safe_add_func_uint64_t_u_u(0UL, p_70)) < (**l_115))))))))) != (-1L)), 7)) <= (-2L))), (*p_1269->g_58))), l_126))), p_68)))) < l_122) == 0x5FDEL), 2)) <= l_122)), (**l_115)))))) , p_1269->g_224) == l_226)));
                        p_70 = ((*l_175) = (0x1AD13062L > l_219[4][2]));
                    }
                    for (l_121 = 0; (l_121 >= (-1)); l_121 = safe_sub_func_uint32_t_u_u(l_121, 4))
                    { /* block id: 65 */
                        return (**l_115);
                    }
                }
                l_243--;
                (*l_249) = ((*l_248) = l_246[3][2][1]);
                l_253++;
            }
            else
            { /* block id: 73 */
                for (p_70 = (-11); (p_70 <= (-19)); p_70 = safe_sub_func_int16_t_s_s(p_70, 1))
                { /* block id: 76 */
                    uint32_t l_272[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_272[i] = 0x5D55B35DL;
                    (*p_1269->g_80) = ((((((l_258[0] , l_259[4]) != p_1269->g_260[2][0][0]) & (safe_mod_func_uint16_t_u_u(((p_1269->g_264 , (safe_unary_minus_func_int32_t_s((p_1269->g_129[1][3][4].f0 ^ (p_68 || (0x37A9L > ((p_1269->g_266[1] = l_258[0].f0) , ((safe_mod_func_uint8_t_u_u((!((safe_lshift_func_uint8_t_u_s((l_271 , p_70), p_68)) != (**l_115))), l_271)) , l_272[0])))))))) | 0UL), p_1269->g_148))) < 0x29L) , p_1269->g_225) && 1L);
                    (*p_1269->g_80) = l_272[0];
                }
                return p_70;
            }
            for (l_235 = 23; (l_235 == 24); l_235 = safe_add_func_int32_t_s_s(l_235, 1))
            { /* block id: 85 */
                int32_t l_291 = 0x0A55AE19L;
                uint64_t *l_312 = &l_189[4][8];
                uint32_t *l_326 = &p_1269->g_59;
                if (l_243)
                    goto lbl_275;
            }
            if ((safe_add_func_int8_t_s_s((p_1269->g_381 , l_382), 246UL)))
            { /* block id: 136 */
                union U0 **l_385 = &l_182;
                int32_t l_393 = (-10L);
                int32_t l_394 = 0x65E9DA91L;
                int32_t l_395[4][5][2] = {{{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL}},{{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL}},{{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL}},{{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL},{0x7857443DL,0x695EBB0EL}}};
                int32_t l_396[8];
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_396[i] = 0x7B9F8CB3L;
                if (((+(p_70 != p_1269->g_266[1])) ^ (((*p_1269->g_313) = (0x538FD0D7EB7A5D26L > p_1269->g_266[4])) < ((((*l_119) = (((*l_385) = (void*)0) != (void*)0)) != ((safe_add_func_int8_t_s_s(((void*)0 != l_388), p_70)) != p_1269->g_225)) && 8UL))))
                { /* block id: 140 */
                    (*l_115) = &p_70;
                    for (p_1269->g_377 = 0; (p_1269->g_377 <= (-25)); p_1269->g_377 = safe_sub_func_uint16_t_u_u(p_1269->g_377, 1))
                    { /* block id: 144 */
                        union U1 *l_392 = &p_1269->g_343[2][2];
                        union U1 **l_391 = &l_392;
                        int32_t l_397 = 0x20038D4DL;
                        (*l_391) = &p_1269->g_343[0][1];
                        l_398--;
                        if ((*p_1269->g_80))
                            continue;
                    }
                }
                else
                { /* block id: 149 */
                    int8_t l_404 = (-4L);
                    int32_t *l_413 = &p_1269->g_74[0];
                    int32_t l_414 = 0x01957549L;
                    int32_t l_416[5] = {0x02CCF61EL,0x02CCF61EL,0x02CCF61EL,0x02CCF61EL,0x02CCF61EL};
                    int i;
                    for (l_122 = 3; (l_122 == 18); l_122 = safe_add_func_uint16_t_u_u(l_122, 1))
                    { /* block id: 152 */
                        int16_t l_403 = 0x4812L;
                        uint32_t l_405 = 0UL;
                        ++l_405;
                        if (l_404)
                            continue;
                    }
                    if (p_68)
                    { /* block id: 156 */
                        union U6 **l_408 = &l_246[3][2][1];
                        (*p_1269->g_80) &= ((void*)0 == l_408);
                    }
                    else
                    { /* block id: 158 */
                        return (*p_1269->g_313);
                    }
                    (**l_115) |= p_70;
                    if ((*p_1269->g_80))
                    { /* block id: 162 */
                        uint64_t ***l_411 = (void*)0;
                        (*p_1269->g_80) |= (p_1269->g_120 || ((l_412[3][0] = &p_1269->g_313) == (p_1269->g_343[2][1] , (void*)0)));
                    }
                    else
                    { /* block id: 165 */
                        int32_t l_415 = (-1L);
                        int32_t l_417 = 1L;
                        int32_t l_418 = 1L;
                        int32_t l_419 = 0x5849F8BFL;
                        int32_t l_420[6][4] = {{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L}};
                        int i, j;
                        l_413 = &p_70;
                        if (l_382)
                            goto lbl_424;
lbl_424:
                        --l_421;
                        l_420[5][1] &= ((((p_1269->g_425 , (p_1269->g_144.f4 = p_70)) != (p_1269->g_343[2][2].f0 , (((*l_109) = ((void*)0 != l_426)) < (0x5463L && (((*p_1269->g_80) = (*p_1269->g_80)) || ((**l_115) = (((*l_413) ^ (safe_lshift_func_int8_t_s_s(p_70, 1))) , 0x474AF81AL))))))) ^ l_429) > l_418);
                    }
                }
                l_231 = (p_1269->g_343[0][2] , (((p_70 = ((p_1269->g_430[0][1] , (-1L)) , (safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((+(safe_add_func_int16_t_s_s(((*l_119) = 0x4D2FL), (((&p_70 != ((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u(((-2L) | ((safe_add_func_uint64_t_u_u((1UL | 0x27EBL), (safe_sub_func_uint8_t_u_u(((*l_160) = (safe_add_func_uint16_t_u_u((~(**l_115)), p_1269->g_3))), l_394)))) || 0UL)), 18446744073709551615UL)), p_70)) , &p_70)) || p_68) <= 0x5758ED20296A351DL)))), 5)), p_68)))) || p_70) == p_68));
            }
            else
            { /* block id: 180 */
                return p_70;
            }
        }
        else
        { /* block id: 183 */
            int64_t l_465 = 0x27B1979271B03E50L;
            int32_t l_473 = (-3L);
            union U1 *l_550 = &p_1269->g_343[2][2];
            union U6 l_568 = {65528UL};
            uint16_t *l_708[6][7][2] = {{{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]}},{{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]}},{{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]}},{{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]}},{{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]}},{{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]},{&l_568.f0,&p_1269->g_266[4]}}};
            union U0 **l_730 = &p_1269->g_489;
            union U3 **l_739 = &l_619[4][0][7];
            uint64_t *l_761[5][10] = {{(void*)0,&l_189[2][5],&l_189[5][8],&l_189[4][8],&p_1269->g_314,&p_1269->g_314,&l_189[4][8],&l_189[5][8],&l_189[2][5],(void*)0},{(void*)0,&l_189[2][5],&l_189[5][8],&l_189[4][8],&p_1269->g_314,&p_1269->g_314,&l_189[4][8],&l_189[5][8],&l_189[2][5],(void*)0},{(void*)0,&l_189[2][5],&l_189[5][8],&l_189[4][8],&p_1269->g_314,&p_1269->g_314,&l_189[4][8],&l_189[5][8],&l_189[2][5],(void*)0},{(void*)0,&l_189[2][5],&l_189[5][8],&l_189[4][8],&p_1269->g_314,&p_1269->g_314,&l_189[4][8],&l_189[5][8],&l_189[2][5],(void*)0},{(void*)0,&l_189[2][5],&l_189[5][8],&l_189[4][8],&p_1269->g_314,&p_1269->g_314,&l_189[4][8],&l_189[5][8],&l_189[2][5],(void*)0}};
            int32_t *l_796[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_796[i] = (void*)0;
            for (p_1269->g_188 = 0; (p_1269->g_188 <= 2); p_1269->g_188 += 1)
            { /* block id: 186 */
                int8_t l_513 = 0x53L;
                union U1 **l_542 = (void*)0;
                int32_t l_552 = 0x05FF0C6CL;
                uint8_t l_565 = 0xC3L;
                int64_t *l_573[3][9][8] = {{{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465}},{{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465}},{{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465},{(void*)0,&l_382,&l_121,&l_465,&l_465,&l_382,&l_382,&l_465}}};
                uint8_t l_610 = 0x0BL;
                union U1 *l_677 = (void*)0;
                uint8_t l_692 = 0x76L;
                uint32_t l_716 = 4294967290UL;
                int i, j, k;
                (**l_115) = (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((*p_1269->g_58) ^= (safe_lshift_func_int16_t_s_s(p_1269->g_343[2][2].f0, 4))), (safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((safe_sub_func_int64_t_s_s(p_1269->g_74[0], ((safe_mod_func_int8_t_s_s(0L, ((!(l_465 &= ((*l_160) |= 7UL))) & ((void*)0 != &l_216)))) && ((safe_sub_func_int64_t_s_s((l_468 && p_1269->g_165[0][8][2]), (safe_div_func_int64_t_s_s((l_471 == l_472), p_68)))) | p_70)))) , (void*)0) == (void*)0), l_473)), 7UL)), p_1269->g_247.f0)))), p_70));
            }
            for (p_1269->g_59 = (-15); (p_1269->g_59 > 23); p_1269->g_59 = safe_add_func_uint32_t_u_u(p_1269->g_59, 1))
            { /* block id: 335 */
                uint64_t *l_762 = (void*)0;
                int8_t *l_793 = &p_1269->g_724.f2;
                int32_t l_794[7] = {(-1L),0x6F927516L,(-1L),(-1L),0x6F927516L,(-1L),(-1L)};
                int32_t *l_795 = &l_237[1][1];
                int i;
                for (p_1269->g_377 = 0; (p_1269->g_377 <= 9); ++p_1269->g_377)
                { /* block id: 338 */
                    int16_t l_769 = 0L;
                    int32_t *l_771 = (void*)0;
                    volatile union U2 **l_772 = (void*)0;
                    (1 + 1);
                }
                for (l_238 = (-27); (l_238 < (-15)); l_238 = safe_add_func_uint64_t_u_u(l_238, 8))
                { /* block id: 355 */
                    if (p_68)
                        break;
                }
                (*l_795) |= (safe_rshift_func_int8_t_s_u(((p_70 || (((*l_119) = (p_1269->g_777[3] , (safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(p_68, ((safe_lshift_func_uint16_t_u_u(((*l_95) = 65535UL), (safe_mod_func_int8_t_s_s(p_68, (~((safe_sub_func_int16_t_s_s(((safe_div_func_int64_t_s_s((((safe_lshift_func_uint16_t_u_s(((l_465 <= ((*l_793) = (p_70 , (p_1269->g_792[3] , ((((**l_115) = (p_1269->g_574 ^ p_1269->g_144.f0)) & p_70) >= p_1269->g_608))))) && (**l_115)), 10)) > p_70) && p_70), 5UL)) <= (-9L)), l_794[4])) < p_1269->g_587)))))) > p_1269->g_377))), 0x1EFAEB0AL)))) || p_70)) < (-6L)), 2));
            }
            (*l_115) = l_796[1];
        }
        (*p_1269->g_797) = (&p_1269->g_488[4] != (void*)0);
        p_70 = (((*l_798) = p_68) <= (((*p_1269->g_486) , l_799[5][0][3]) == l_799[1][4][4]));
        (*l_798) = ((p_1269->g_59 != l_802) > (((*l_119) = (((p_70 ^ ((p_68 ^ (safe_lshift_func_int8_t_s_u(p_70, 0))) != ((((l_620 != ((*l_805) = (void*)0)) <= 1L) >= 0x4F3E998FL) , p_68))) == l_234) >= p_1269->g_188)) == p_1269->g_314));
    }
    else
    { /* block id: 372 */
        int32_t *l_806 = &l_234;
        int32_t *l_807 = &p_1269->g_74[0];
        int32_t *l_808[1][1][8];
        int64_t l_809 = 3L;
        int64_t l_811[7][4][7] = {{{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L}},{{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L}},{{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L}},{{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L}},{{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L}},{{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L}},{{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L},{0L,(-1L),0x6C6D8CAE4BB7ACEDL,0L,0L,0x55A7D180060AAAA7L,0x55A7D180060AAAA7L}}};
        uint64_t l_812[3][5][3] = {{{18446744073709551615UL,0x7D5C4FB690B7C212L,18446744073709551615UL},{18446744073709551615UL,0x7D5C4FB690B7C212L,18446744073709551615UL},{18446744073709551615UL,0x7D5C4FB690B7C212L,18446744073709551615UL},{18446744073709551615UL,0x7D5C4FB690B7C212L,18446744073709551615UL},{18446744073709551615UL,0x7D5C4FB690B7C212L,18446744073709551615UL}},{{18446744073709551615UL,0x7D5C4FB690B7C212L,18446744073709551615UL},{18446744073709551615UL,0x7D5C4FB690B7C212L,18446744073709551615UL},{18446744073709551615UL,0x7D5C4FB690B7C212L,18446744073709551615UL},{18446744073709551615UL,0x7D5C4FB690B7C212L,18446744073709551615UL},{18446744073709551615UL,0x7D5C4FB690B7C212L,18446744073709551615UL}},{{18446744073709551615UL,0x7D5C4FB690B7C212L,18446744073709551615UL},{18446744073709551615UL,0x7D5C4FB690B7C212L,18446744073709551615UL},{18446744073709551615UL,0x7D5C4FB690B7C212L,18446744073709551615UL},{18446744073709551615UL,0x7D5C4FB690B7C212L,18446744073709551615UL},{18446744073709551615UL,0x7D5C4FB690B7C212L,18446744073709551615UL}}};
        uint16_t *l_819 = &p_1269->g_266[4];
        int32_t l_826 = (-1L);
        union U0 *l_834 = (void*)0;
        int8_t *l_835 = &p_1269->g_530[2][2][1].f2;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 8; k++)
                    l_808[i][j][k] = &p_1269->g_74[0];
            }
        }
        l_812[0][1][2]++;
        (*l_807) = (65535UL < ((safe_add_func_int32_t_s_s(0x169ADE4DL, (safe_rshift_func_uint8_t_u_s((((*l_819) = ((*l_95) ^= ((p_68 <= ((*l_119) = p_1269->g_188)) >= (**l_115)))) & ((safe_rshift_func_int8_t_s_s(((*l_835) = (safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((((*l_109)--) , (safe_mod_func_int32_t_s_s(((((*l_806) = (p_70 , (((safe_mod_func_uint32_t_u_u(0xF17CE9BBL, ((p_1269->g_833 , (&l_812[2][2][2] != &l_812[2][1][0])) && p_70))) , (void*)0) != l_834))) >= 0x45A68F84L) > 0x6CL), (*p_1269->g_58)))), (**l_115))), p_70))), (**l_115))) & (*p_1269->g_313))), 1)))) == (**l_115)));
    }
    return (*p_1269->g_224);
}


/* ------------------------------------------ */
/* 
 * reads : p_1269->g_74
 * writes:
 */
uint8_t  func_71(int8_t * p_72, struct S7 * p_1269)
{ /* block id: 10 */
    int32_t *l_73 = &p_1269->g_74[0];
    int32_t *l_75[1][3];
    uint16_t l_76 = 0x1181L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_75[i][j] = &p_1269->g_74[0];
    }
    l_76--;
lbl_82:
    if (l_76)
        goto lbl_81;
lbl_81:
    l_73 = l_75[0][2];
    if (l_76)
        goto lbl_82;
    return (*l_73);
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S7 c_1270;
    struct S7* p_1269 = &c_1270;
    struct S7 c_1271 = {
        0x658EDFE0L, // p_1269->g_3
        0x2C87A752L, // p_1269->g_4
        (-1L), // p_1269->g_22
        0xAEC7F5175D1B3002L, // p_1269->g_34
        0x18828597L, // p_1269->g_59
        &p_1269->g_59, // p_1269->g_58
        {0x2C4895D3L,0x2C4895D3L}, // p_1269->g_74
        &p_1269->g_74[0], // p_1269->g_80
        {(void*)0,&p_1269->g_80,(void*)0,(void*)0,&p_1269->g_80,(void*)0,(void*)0}, // p_1269->g_79
        {0x0544L,0x0544L,0x0544L,0x0544L,0x0544L,0x0544L,0x0544L,0x0544L}, // p_1269->g_96
        0x0C17L, // p_1269->g_120
        {{{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}}},{{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}}},{{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}}},{{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}}},{{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}}},{{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}}},{{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}}},{{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}}},{{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}},{{0xB9L},{0xDDL},{0x89L},{2UL},{0x19L},{255UL},{0UL}}}}, // p_1269->g_129
        {0x02D28A0D4A109FDDL}, // p_1269->g_144
        246UL, // p_1269->g_148
        {{0UL,0xB5L,255UL,0xABL,255UL,0xB5L},{0UL,0xB5L,255UL,0xABL,255UL,0xB5L},{0UL,0xB5L,255UL,0xABL,255UL,0xB5L},{0UL,0xB5L,255UL,0xABL,255UL,0xB5L},{0UL,0xB5L,255UL,0xABL,255UL,0xB5L},{0UL,0xB5L,255UL,0xABL,255UL,0xB5L},{0UL,0xB5L,255UL,0xABL,255UL,0xB5L},{0UL,0xB5L,255UL,0xABL,255UL,0xB5L}}, // p_1269->g_158
        {{&p_1269->g_158[0][1],&p_1269->g_158[0][1]}}, // p_1269->g_157
        {0}, // p_1269->g_163
        {{{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L}},{{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L}},{{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L}},{{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L}},{{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L}},{{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L}},{{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L}},{{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L},{(-6L),(-6L),0x31L}}}, // p_1269->g_165
        0x11L, // p_1269->g_168
        {{{{4L},{0x2FEFF6F5L},{0x2FEFF6F5L}},{{4L},{0x2FEFF6F5L},{0x2FEFF6F5L}},{{4L},{0x2FEFF6F5L},{0x2FEFF6F5L}},{{4L},{0x2FEFF6F5L},{0x2FEFF6F5L}},{{4L},{0x2FEFF6F5L},{0x2FEFF6F5L}},{{4L},{0x2FEFF6F5L},{0x2FEFF6F5L}},{{4L},{0x2FEFF6F5L},{0x2FEFF6F5L}},{{4L},{0x2FEFF6F5L},{0x2FEFF6F5L}},{{4L},{0x2FEFF6F5L},{0x2FEFF6F5L}}}}, // p_1269->g_185
        248UL, // p_1269->g_188
        {0xBBL}, // p_1269->g_201
        6UL, // p_1269->g_225
        &p_1269->g_225, // p_1269->g_224
        {0x1A0EL}, // p_1269->g_247
        3L, // p_1269->g_252
        (void*)0, // p_1269->g_261
        {{{&p_1269->g_261},{&p_1269->g_261},{&p_1269->g_261},{&p_1269->g_261},{&p_1269->g_261},{&p_1269->g_261},{&p_1269->g_261}},{{&p_1269->g_261},{&p_1269->g_261},{&p_1269->g_261},{&p_1269->g_261},{&p_1269->g_261},{&p_1269->g_261},{&p_1269->g_261}},{{&p_1269->g_261},{&p_1269->g_261},{&p_1269->g_261},{&p_1269->g_261},{&p_1269->g_261},{&p_1269->g_261},{&p_1269->g_261}}}, // p_1269->g_260
        {0x3566C3802C973D22L}, // p_1269->g_264
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_1269->g_266
        (void*)0, // p_1269->g_310
        18446744073709551613UL, // p_1269->g_314
        &p_1269->g_314, // p_1269->g_313
        &p_1269->g_314, // p_1269->g_317
        {{0x57C66E66DC7A78D9L},{0x57C66E66DC7A78D9L}}, // p_1269->g_321
        {{{0x1ED1AC72L},{0x2ED37A76L},{0x322C1001L}},{{0x1ED1AC72L},{0x2ED37A76L},{0x322C1001L}},{{0x1ED1AC72L},{0x2ED37A76L},{0x322C1001L}},{{0x1ED1AC72L},{0x2ED37A76L},{0x322C1001L}}}, // p_1269->g_343
        {0}, // p_1269->g_351
        0x2F1BL, // p_1269->g_377
        {0}, // p_1269->g_381
        {0}, // p_1269->g_425
        {{{0x4C9FF417F483C680L},{0x4C9FF417F483C680L},{0x4C9FF417F483C680L},{0x4C9FF417F483C680L}},{{0x4C9FF417F483C680L},{0x4C9FF417F483C680L},{0x4C9FF417F483C680L},{0x4C9FF417F483C680L}}}, // p_1269->g_430
        {{{8UL},{8UL},{8UL}},{{8UL},{8UL},{8UL}},{{8UL},{8UL},{8UL}},{{8UL},{8UL},{8UL}},{{8UL},{8UL},{8UL}},{{8UL},{8UL},{8UL}},{{8UL},{8UL},{8UL}},{{8UL},{8UL},{8UL}},{{8UL},{8UL},{8UL}},{{8UL},{8UL},{8UL}}}, // p_1269->g_485
        &p_1269->g_252, // p_1269->g_486
        {&p_1269->g_310,&p_1269->g_310,&p_1269->g_310,&p_1269->g_310,&p_1269->g_310}, // p_1269->g_488
        &p_1269->g_144, // p_1269->g_489
        {{{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}}},{{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}}},{{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}}},{{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}}},{{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}}},{{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}}},{{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}}},{{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}}},{{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}},{{0x2AL},{0x77L}}}}, // p_1269->g_530
        (void*)0, // p_1269->g_534
        &p_1269->g_534, // p_1269->g_533
        (void*)0, // p_1269->g_536
        &p_1269->g_321[1], // p_1269->g_538
        &p_1269->g_538, // p_1269->g_537
        {{{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}}},{{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}}},{{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}}},{{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}}},{{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}}},{{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}}},{{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}},{{0x04DC5AA3D4565E55L}}}}, // p_1269->g_541
        {0L}, // p_1269->g_546
        &p_1269->g_546, // p_1269->g_545
        &p_1269->g_545, // p_1269->g_544
        0x7FC685A2L, // p_1269->g_549
        {0}, // p_1269->g_561
        0x7EL, // p_1269->g_574
        {0L}, // p_1269->g_581
        (-1L), // p_1269->g_587
        0x8FL, // p_1269->g_608
        {{0x17DEAB10A91AC2E3L}}, // p_1269->g_611
        {{{0x305ED182L},{0x305ED182L}},{{0x305ED182L},{0x305ED182L}},{{0x305ED182L},{0x305ED182L}},{{0x305ED182L},{0x305ED182L}},{{0x305ED182L},{0x305ED182L}},{{0x305ED182L},{0x305ED182L}}}, // p_1269->g_633
        0UL, // p_1269->g_651
        {0x7BA76E2F633A3E4BL}, // p_1269->g_652
        &p_1269->g_343[2][2], // p_1269->g_660
        {&p_1269->g_660,&p_1269->g_660,&p_1269->g_660,&p_1269->g_660,&p_1269->g_660}, // p_1269->g_659
        {{0x1DB46FC7L},{0x1DB46FC7L},{0x1DB46FC7L}}, // p_1269->g_665
        {0}, // p_1269->g_699
        {6L}, // p_1269->g_705
        {0x49L}, // p_1269->g_724
        &p_1269->g_489, // p_1269->g_735
        &p_1269->g_735, // p_1269->g_734
        {{0x33L},{0x33L},{0x33L},{0x33L},{0x33L}}, // p_1269->g_777
        {{0},{0},{0},{0},{0},{0},{0}}, // p_1269->g_792
        &p_1269->g_74[0], // p_1269->g_797
        {{{&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0]}},{{&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0]}},{{&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0]}},{{&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0],&p_1269->g_74[0]}}}, // p_1269->g_800
        {2UL}, // p_1269->g_833
        {{{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0}}}, // p_1269->g_852
        (void*)0, // p_1269->g_853
        {{&p_1269->g_247,&p_1269->g_247,(void*)0},{&p_1269->g_247,&p_1269->g_247,(void*)0},{&p_1269->g_247,&p_1269->g_247,(void*)0},{&p_1269->g_247,&p_1269->g_247,(void*)0},{&p_1269->g_247,&p_1269->g_247,(void*)0},{&p_1269->g_247,&p_1269->g_247,(void*)0},{&p_1269->g_247,&p_1269->g_247,(void*)0},{&p_1269->g_247,&p_1269->g_247,(void*)0},{&p_1269->g_247,&p_1269->g_247,(void*)0},{&p_1269->g_247,&p_1269->g_247,(void*)0}}, // p_1269->g_866
        &p_1269->g_866[3][0], // p_1269->g_865
        0xB991248AL, // p_1269->g_880
        0xAA8B64B668074F86L, // p_1269->g_968
        (-1L), // p_1269->g_983
        {{0x2FB3B3BE913E3E0CL},{0x2FB3B3BE913E3E0CL},{0x2FB3B3BE913E3E0CL}}, // p_1269->g_1012
        (-1L), // p_1269->g_1019
        {0x26762D12L}, // p_1269->g_1038
        0x6724A2A5L, // p_1269->g_1073
        {{{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}}},{{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}}},{{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}}},{{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}}},{{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}}},{{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}}},{{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}},{{-1L},{0x0C525389E08F249DL},{-1L},{-2L}}}}, // p_1269->g_1097
        {0}, // p_1269->g_1100
        {-7L}, // p_1269->g_1108
        &p_1269->g_1108, // p_1269->g_1107
        &p_1269->g_1107, // p_1269->g_1106
        {0}, // p_1269->g_1132
        {0x67L}, // p_1269->g_1145
        (void*)0, // p_1269->g_1147
        &p_1269->g_74[0], // p_1269->g_1184
        0x2E93L, // p_1269->g_1198
        {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}, // p_1269->g_1200
        &p_1269->g_80, // p_1269->g_1203
        {{0x8E1FAC35L,0x8E1FAC35L,0x8E1FAC35L},{0x8E1FAC35L,0x8E1FAC35L,0x8E1FAC35L},{0x8E1FAC35L,0x8E1FAC35L,0x8E1FAC35L},{0x8E1FAC35L,0x8E1FAC35L,0x8E1FAC35L},{0x8E1FAC35L,0x8E1FAC35L,0x8E1FAC35L},{0x8E1FAC35L,0x8E1FAC35L,0x8E1FAC35L},{0x8E1FAC35L,0x8E1FAC35L,0x8E1FAC35L}}, // p_1269->g_1212
        {8L}, // p_1269->g_1228
        0x22804D89L, // p_1269->g_1243
        {&p_1269->g_1243,&p_1269->g_1243}, // p_1269->g_1242
    };
    c_1270 = c_1271;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1269);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1269->g_3, "p_1269->g_3", print_hash_value);
    transparent_crc(p_1269->g_4, "p_1269->g_4", print_hash_value);
    transparent_crc(p_1269->g_22, "p_1269->g_22", print_hash_value);
    transparent_crc(p_1269->g_34, "p_1269->g_34", print_hash_value);
    transparent_crc(p_1269->g_59, "p_1269->g_59", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1269->g_74[i], "p_1269->g_74[i]", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1269->g_96[i], "p_1269->g_96[i]", print_hash_value);

    }
    transparent_crc(p_1269->g_120, "p_1269->g_120", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1269->g_129[i][j][k].f0, "p_1269->g_129[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1269->g_144.f0, "p_1269->g_144.f0", print_hash_value);
    transparent_crc(p_1269->g_148, "p_1269->g_148", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1269->g_158[i][j], "p_1269->g_158[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1269->g_165[i][j][k], "p_1269->g_165[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1269->g_168, "p_1269->g_168", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1269->g_185[i][j][k].f0, "p_1269->g_185[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1269->g_188, "p_1269->g_188", print_hash_value);
    transparent_crc(p_1269->g_201.f0, "p_1269->g_201.f0", print_hash_value);
    transparent_crc(p_1269->g_225, "p_1269->g_225", print_hash_value);
    transparent_crc(p_1269->g_247.f0, "p_1269->g_247.f0", print_hash_value);
    transparent_crc(p_1269->g_252, "p_1269->g_252", print_hash_value);
    transparent_crc(p_1269->g_264.f0, "p_1269->g_264.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1269->g_266[i], "p_1269->g_266[i]", print_hash_value);

    }
    transparent_crc(p_1269->g_314, "p_1269->g_314", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1269->g_321[i].f0, "p_1269->g_321[i].f0", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1269->g_343[i][j].f0, "p_1269->g_343[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1269->g_377, "p_1269->g_377", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1269->g_430[i][j].f0, "p_1269->g_430[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1269->g_485[i][j].f0, "p_1269->g_485[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1269->g_530[i][j][k].f0, "p_1269->g_530[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1269->g_546.f0, "p_1269->g_546.f0", print_hash_value);
    transparent_crc(p_1269->g_549, "p_1269->g_549", print_hash_value);
    transparent_crc(p_1269->g_574, "p_1269->g_574", print_hash_value);
    transparent_crc(p_1269->g_581.f0, "p_1269->g_581.f0", print_hash_value);
    transparent_crc(p_1269->g_587, "p_1269->g_587", print_hash_value);
    transparent_crc(p_1269->g_608, "p_1269->g_608", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1269->g_611[i].f0, "p_1269->g_611[i].f0", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1269->g_633[i][j].f0, "p_1269->g_633[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_1269->g_651, "p_1269->g_651", print_hash_value);
    transparent_crc(p_1269->g_652.f0, "p_1269->g_652.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1269->g_665[i].f0, "p_1269->g_665[i].f0", print_hash_value);

    }
    transparent_crc(p_1269->g_705.f0, "p_1269->g_705.f0", print_hash_value);
    transparent_crc(p_1269->g_724.f0, "p_1269->g_724.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1269->g_777[i].f0, "p_1269->g_777[i].f0", print_hash_value);

    }
    transparent_crc(p_1269->g_833.f0, "p_1269->g_833.f0", print_hash_value);
    transparent_crc(p_1269->g_880, "p_1269->g_880", print_hash_value);
    transparent_crc(p_1269->g_968, "p_1269->g_968", print_hash_value);
    transparent_crc(p_1269->g_983, "p_1269->g_983", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1269->g_1012[i].f0, "p_1269->g_1012[i].f0", print_hash_value);

    }
    transparent_crc(p_1269->g_1019, "p_1269->g_1019", print_hash_value);
    transparent_crc(p_1269->g_1038.f0, "p_1269->g_1038.f0", print_hash_value);
    transparent_crc(p_1269->g_1073, "p_1269->g_1073", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1269->g_1097[i][j][k].f0, "p_1269->g_1097[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1269->g_1108.f0, "p_1269->g_1108.f0", print_hash_value);
    transparent_crc(p_1269->g_1145.f0, "p_1269->g_1145.f0", print_hash_value);
    transparent_crc(p_1269->g_1198, "p_1269->g_1198", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1269->g_1200[i][j], "p_1269->g_1200[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1269->g_1212[i][j], "p_1269->g_1212[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1269->g_1228.f0, "p_1269->g_1228.f0", print_hash_value);
    transparent_crc(p_1269->g_1243, "p_1269->g_1243", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
