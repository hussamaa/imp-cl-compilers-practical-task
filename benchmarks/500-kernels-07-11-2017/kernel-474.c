// -g 65,19,1 -l 13,1,1
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


// Seed: 1839543532

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int8_t g_17;
    int32_t g_37;
    int32_t *g_40;
    int32_t ** volatile g_39;
    int32_t g_41[2][7][7];
    volatile uint32_t g_45[4];
    int32_t **g_65;
    uint8_t g_99[4][5];
    int32_t g_105;
    int8_t g_140;
    volatile int16_t g_146;
    volatile int64_t g_148;
    int32_t g_156;
    volatile int32_t g_157;
    volatile uint32_t g_158;
    int32_t g_173;
    uint16_t g_175;
    int16_t g_183[7][8];
    uint16_t g_185;
    volatile int16_t ** volatile g_248;
    uint8_t *g_271;
    uint8_t * volatile * volatile g_270;
    int16_t g_293;
    int64_t g_295[6];
    int64_t *g_294;
    uint32_t g_322;
    volatile uint16_t g_324;
    uint16_t g_327;
    int32_t * volatile g_334;
    int8_t g_341[8];
    int16_t *g_352[5][1][9];
    int16_t * volatile *g_351[6][2][4];
    volatile uint32_t g_369;
    volatile int8_t g_391;
    volatile int8_t * volatile g_390;
    volatile int8_t * volatile *g_389;
    int64_t * volatile *g_433;
    uint32_t g_477;
    volatile uint32_t g_491;
    uint8_t **g_508;
    uint8_t ***g_507[2];
    uint32_t g_523;
    uint8_t ****g_526[8];
    int8_t g_544;
    int32_t * volatile g_549;
    int32_t *g_594[8];
    int64_t g_613;
    uint64_t g_615;
    uint32_t g_620;
    uint64_t g_638;
    uint32_t g_671;
    uint32_t g_699;
    uint16_t *g_776;
    uint16_t ** volatile g_775;
    uint8_t g_794;
    uint32_t g_811;
    uint8_t * volatile *g_868;
    uint8_t * volatile **g_867;
    uint8_t * volatile ***g_866;
    uint32_t *g_889;
    int32_t *g_895;
    uint32_t g_899;
    uint8_t g_914;
    volatile int64_t g_923[10][1];
    uint64_t g_944[7];
    volatile uint16_t g_960;
    int32_t ***g_990;
    uint64_t g_1001;
    uint16_t g_1071[1][9][4];
    int32_t ** volatile g_1105;
    volatile uint32_t *g_1122[6];
    volatile uint32_t ** volatile g_1121;
    volatile uint32_t ** volatile *g_1120;
    volatile int16_t * volatile g_1141;
    volatile int16_t * volatile *g_1140;
    volatile int16_t * volatile **g_1139;
    volatile int16_t * volatile ***g_1138[9][2][6];
    uint32_t g_1205[2][4];
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_1216);
int64_t  func_5(int16_t  p_6, uint32_t  p_7, struct S0 * p_1216);
uint32_t  func_9(int8_t  p_10, struct S0 * p_1216);
int8_t  func_11(int16_t  p_12, uint16_t  p_13, uint64_t  p_14, int16_t  p_15, uint64_t  p_16, struct S0 * p_1216);
int64_t  func_28(uint64_t  p_29, uint16_t  p_30, uint32_t  p_31, int32_t  p_32, int32_t  p_33, struct S0 * p_1216);
uint16_t  func_54(int32_t * p_55, uint16_t  p_56, uint16_t  p_57, struct S0 * p_1216);
int32_t  func_73(int32_t * p_74, int64_t  p_75, int16_t  p_76, int32_t *** p_77, struct S0 * p_1216);
int32_t * func_78(int32_t  p_79, int32_t  p_80, struct S0 * p_1216);
int32_t * func_81(uint32_t  p_82, struct S0 * p_1216);
uint32_t  func_83(uint32_t  p_84, int32_t ** p_85, int32_t ** p_86, int32_t * p_87, int32_t * p_88, struct S0 * p_1216);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1216->g_17 p_1216->g_39 p_1216->g_45 p_1216->g_37 p_1216->g_41 p_1216->g_40 p_1216->g_334 p_1216->g_105 p_1216->g_294 p_1216->g_295 p_1216->g_248 p_1216->g_351 p_1216->g_183 p_1216->g_173 p_1216->g_369 p_1216->g_549 p_1216->g_322 p_1216->g_433 p_1216->g_508 p_1216->g_271 p_1216->g_99 p_1216->g_620 p_1216->g_775 p_1216->g_776 p_1216->g_175 p_1216->g_866 p_1216->g_148 p_1216->g_140 p_1216->g_158 p_1216->g_895 p_1216->g_699 p_1216->g_899 p_1216->g_867 p_1216->g_868 p_1216->g_889 p_1216->g_523 p_1216->g_390 p_1216->g_391 p_1216->g_944 p_1216->g_960 p_1216->g_185 p_1216->g_270 p_1216->g_327 p_1216->g_389 p_1216->g_1001 p_1216->g_671 p_1216->g_293 p_1216->g_638 p_1216->g_1071 p_1216->g_544 p_1216->g_1105 p_1216->g_1120 p_1216->g_341
 * writes: p_1216->g_37 p_1216->g_40 p_1216->g_45 p_1216->g_17 p_1216->g_65 p_1216->g_99 p_1216->g_105 p_1216->g_322 p_1216->g_341 p_1216->g_173 p_1216->g_369 p_1216->g_140 p_1216->g_526 p_1216->g_185 p_1216->g_544 p_1216->g_523 p_1216->g_156 p_1216->g_620 p_1216->g_594 p_1216->g_638 p_1216->g_889 p_1216->g_899 p_1216->g_671 p_1216->g_293 p_1216->g_615 p_1216->g_794 p_1216->g_914 p_1216->g_175 p_1216->g_327 p_1216->g_990 p_1216->g_1001 p_1216->g_944 p_1216->g_352 p_1216->g_699 p_1216->g_295 p_1216->g_1071 p_1216->g_895 p_1216->g_811
 */
int32_t  func_1(struct S0 * p_1216)
{ /* block id: 4 */
    int32_t l_4[7];
    uint16_t l_8 = 9UL;
    uint64_t l_1054 = 0x75E2F2CFC463D6A2L;
    int32_t l_1066 = 0x70AFD5A2L;
    uint8_t l_1081 = 0UL;
    int64_t *l_1089 = &p_1216->g_613;
    int16_t l_1093 = 9L;
    int32_t l_1117 = 8L;
    int8_t *l_1123 = &p_1216->g_341[0];
    uint8_t ****l_1124 = &p_1216->g_507[0];
    uint32_t l_1153 = 4294967289UL;
    uint8_t l_1155 = 0x36L;
    int8_t *l_1185 = &p_1216->g_17;
    int i;
    for (i = 0; i < 7; i++)
        l_4[i] = 0x7BEDEDB5L;
    if ((safe_lshift_func_int16_t_s_s(((((((****p_1216->g_866) = (l_4[2] == ((**p_1216->g_433) = func_5(l_8, func_9(func_11(p_1216->g_17, p_1216->g_17, p_1216->g_17, ((safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(p_1216->g_17, (l_8 == ((safe_div_func_int64_t_s_s(func_28(l_4[2], (((safe_rshift_func_uint16_t_u_s(3UL, 7)) ^ p_1216->g_17) > p_1216->g_17), l_8, l_8, p_1216->g_17, p_1216), p_1216->g_17)) & p_1216->g_17)))), l_4[2])), l_4[2])), p_1216->g_17)) >= p_1216->g_17), l_4[4], p_1216), p_1216), p_1216)))) | 8UL) ^ l_4[5]) , 4294967294UL) & 0xE7F34495L), l_1054)))
    { /* block id: 583 */
        int16_t l_1058 = 0x7288L;
        int32_t l_1067 = 0x1580BAE0L;
        int32_t l_1068 = 0x5EB56CD2L;
        int32_t l_1069 = 1L;
        int32_t l_1070 = (-9L);
        int32_t l_1075 = 0x0E8B5808L;
        int32_t l_1076 = (-7L);
        int32_t l_1077 = (-1L);
        int32_t l_1078 = 0x6DFA18EBL;
        int32_t l_1079[8][10][3] = {{{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L}},{{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L}},{{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L}},{{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L}},{{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L}},{{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L}},{{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L}},{{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L},{0L,(-2L),0L}}};
        uint32_t *l_1092 = &p_1216->g_671;
        uint32_t **l_1091 = &l_1092;
        int i, j, k;
        for (p_1216->g_175 = 10; (p_1216->g_175 >= 59); p_1216->g_175 = safe_add_func_uint16_t_u_u(p_1216->g_175, 8))
        { /* block id: 586 */
            int64_t l_1057 = 7L;
            int32_t *l_1059 = &p_1216->g_173;
            int32_t *l_1060 = &p_1216->g_173;
            int32_t *l_1061 = (void*)0;
            int32_t *l_1062 = (void*)0;
            int32_t *l_1063 = (void*)0;
            int32_t *l_1064 = &l_4[5];
            int32_t *l_1065[10] = {&p_1216->g_37,&p_1216->g_37,&p_1216->g_37,&p_1216->g_37,&p_1216->g_37,&p_1216->g_37,&p_1216->g_37,&p_1216->g_37,&p_1216->g_37,&p_1216->g_37};
            int16_t l_1074 = 0x4E21L;
            int8_t l_1080[9];
            int8_t *l_1090[6] = {&p_1216->g_341[0],&p_1216->g_341[0],&p_1216->g_341[0],&p_1216->g_341[0],&p_1216->g_341[0],&p_1216->g_341[0]};
            int i;
            for (i = 0; i < 9; i++)
                l_1080[i] = 1L;
            p_1216->g_1071[0][0][0]++;
            --l_1081;
            l_1093 |= ((*p_1216->g_895) = ((safe_rshift_func_int8_t_s_s((p_1216->g_544 &= (safe_mul_func_int16_t_s_s((((**p_1216->g_868) = 0xCCL) < (*l_1060)), (safe_unary_minus_func_uint8_t_u(((void*)0 == l_1089)))))), 1)) != (l_1091 == (void*)0)));
            for (p_1216->g_699 = 1; (p_1216->g_699 <= 9); p_1216->g_699 += 1)
            { /* block id: 595 */
                int32_t l_1094[5][10][1] = {{{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L}},{{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L}},{{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L}},{{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L}},{{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L},{0x159D9000L}}};
                int i, j, k;
                l_1094[3][6][0] = l_1079[1][2][1];
            }
        }
        return l_4[2];
    }
    else
    { /* block id: 600 */
        int32_t *l_1095[1];
        int64_t l_1096 = 1L;
        int16_t l_1097[10][6][4] = {{{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL}},{{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL}},{{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL}},{{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL}},{{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL}},{{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL}},{{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL}},{{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL}},{{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL}},{{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL},{0x271AL,2L,1L,0x584FL}}};
        uint32_t l_1098 = 4294967295UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1095[i] = &l_4[2];
        l_1098--;
        for (p_1216->g_523 = 14; (p_1216->g_523 > 6); p_1216->g_523--)
        { /* block id: 604 */
            uint32_t l_1109 = 0UL;
            int32_t l_1114 = 0x1D969C69L;
            for (l_1054 = (-17); (l_1054 != 6); l_1054++)
            { /* block id: 607 */
                uint16_t l_1108 = 1UL;
                (*p_1216->g_1105) = l_1095[0];
                for (p_1216->g_811 = (-6); (p_1216->g_811 <= 11); ++p_1216->g_811)
                { /* block id: 611 */
                    return l_1108;
                }
                (*p_1216->g_895) = l_1109;
                for (l_1093 = 0; (l_1093 > (-28)); --l_1093)
                { /* block id: 617 */
                    if (l_1109)
                        break;
                    if ((*p_1216->g_334))
                        continue;
                    for (p_1216->g_914 = 0; (p_1216->g_914 != 3); p_1216->g_914 = safe_add_func_uint32_t_u_u(p_1216->g_914, 1))
                    { /* block id: 622 */
                        (*p_1216->g_39) = (*p_1216->g_1105);
                    }
                }
            }
            l_1114 ^= l_4[5];
            (*p_1216->g_895) = (*p_1216->g_334);
            l_1117 |= (safe_add_func_uint32_t_u_u(4294967295UL, ((*p_1216->g_895) = l_1109)));
        }
    }
    if ((l_1081 != (l_4[4] && (safe_sub_func_int64_t_s_s(7L, (((((*l_1123) ^= ((void*)0 == p_1216->g_1120)) == ((void*)0 != l_1124)) >= (0x7ABCL >= (**p_1216->g_775))) | l_1054))))))
    { /* block id: 634 */
        uint16_t l_1135 = 0xF365L;
        int16_t ***l_1137 = (void*)0;
        int16_t ****l_1136 = &l_1137;
        uint8_t l_1151[5][10][5] = {{{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L}},{{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L}},{{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L}},{{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L}},{{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L},{0xACL,0x2DL,255UL,0x41L,0xF6L}}};
        int32_t *l_1187 = &p_1216->g_105;
        int8_t l_1188 = 0x22L;
        uint8_t *l_1212 = &l_1151[4][0][3];
        uint32_t l_1213 = 0xBF21CC9CL;
        int i, j, k;
        for (p_1216->g_37 = (-22); (p_1216->g_37 != 13); p_1216->g_37 = safe_add_func_uint16_t_u_u(p_1216->g_37, 5))
        { /* block id: 637 */
            int16_t *l_1152 = &p_1216->g_293;
            int32_t l_1154 = (-3L);
            int32_t *l_1156 = &p_1216->g_105;
            int32_t l_1162 = 0x3A559DF4L;
            uint8_t *l_1181 = &p_1216->g_99[3][4];
            (1 + 1);
        }
        return (*l_1187);
    }
    else
    { /* block id: 665 */
        uint32_t l_1215 = 0x96C16E28L;
        return l_1215;
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_1216->g_1001 p_1216->g_270 p_1216->g_271 p_1216->g_99 p_1216->g_638 p_1216->g_433 p_1216->g_294 p_1216->g_295 p_1216->g_776 p_1216->g_175 p_1216->g_895 p_1216->g_173
 * writes: p_1216->g_1001 p_1216->g_638 p_1216->g_990 p_1216->g_544
 */
int64_t  func_5(int16_t  p_6, uint32_t  p_7, struct S0 * p_1216)
{ /* block id: 569 */
    int32_t l_1048 = (-6L);
    for (p_1216->g_1001 = 0; (p_1216->g_1001 <= 17); p_1216->g_1001 = safe_add_func_uint64_t_u_u(p_1216->g_1001, 1))
    { /* block id: 572 */
        uint64_t *l_1037 = (void*)0;
        uint64_t *l_1038 = &p_1216->g_638;
        uint64_t *l_1042[3];
        uint64_t **l_1041 = &l_1042[0];
        uint64_t **l_1044 = &l_1042[2];
        uint64_t ***l_1043 = &l_1044;
        int32_t l_1051 = (-9L);
        int8_t *l_1052 = &p_1216->g_544;
        int32_t l_1053 = (-4L);
        int i;
        for (i = 0; i < 3; i++)
            l_1042[i] = &p_1216->g_615;
        l_1053 &= ((**p_1216->g_270) != (+((*l_1052) = (safe_sub_func_uint32_t_u_u((((((*l_1038)--) , (**p_1216->g_433)) == (l_1041 != ((*l_1043) = &l_1042[0]))) || (&p_1216->g_65 != (p_1216->g_990 = &p_1216->g_65))), (((safe_unary_minus_func_uint8_t_u((safe_mul_func_int8_t_s_s(l_1048, (((*p_1216->g_776) && (safe_add_func_int16_t_s_s((((l_1051 && l_1051) != (-1L)) > 0x73BBL), p_6))) , l_1051))))) != (-2L)) , (*p_1216->g_895)))))));
        return l_1053;
    }
    return p_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_1216->g_37 p_1216->g_45 p_1216->g_41 p_1216->g_39 p_1216->g_40 p_1216->g_334 p_1216->g_105 p_1216->g_17 p_1216->g_294 p_1216->g_295 p_1216->g_248 p_1216->g_351 p_1216->g_183 p_1216->g_173 p_1216->g_369 p_1216->g_549 p_1216->g_322 p_1216->g_433 p_1216->g_508 p_1216->g_271 p_1216->g_99 p_1216->g_620 p_1216->g_775 p_1216->g_776 p_1216->g_175 p_1216->g_866 p_1216->g_148 p_1216->g_140 p_1216->g_158 p_1216->g_895 p_1216->g_699 p_1216->g_899 p_1216->g_867 p_1216->g_868 p_1216->g_889 p_1216->g_523 p_1216->g_390 p_1216->g_391 p_1216->g_944 p_1216->g_960 p_1216->g_185 p_1216->g_270 p_1216->g_327 p_1216->g_389 p_1216->g_1001 p_1216->g_671 p_1216->g_293
 * writes: p_1216->g_17 p_1216->g_37 p_1216->g_65 p_1216->g_99 p_1216->g_105 p_1216->g_322 p_1216->g_341 p_1216->g_173 p_1216->g_369 p_1216->g_140 p_1216->g_526 p_1216->g_185 p_1216->g_544 p_1216->g_523 p_1216->g_156 p_1216->g_620 p_1216->g_594 p_1216->g_40 p_1216->g_638 p_1216->g_889 p_1216->g_899 p_1216->g_671 p_1216->g_293 p_1216->g_615 p_1216->g_794 p_1216->g_914 p_1216->g_175 p_1216->g_327 p_1216->g_990 p_1216->g_1001 p_1216->g_944 p_1216->g_352 p_1216->g_699 p_1216->g_295
 */
uint32_t  func_9(int8_t  p_10, struct S0 * p_1216)
{ /* block id: 12 */
    int32_t *l_58[9][3][1] = {{{&p_1216->g_37},{&p_1216->g_37},{&p_1216->g_37}},{{&p_1216->g_37},{&p_1216->g_37},{&p_1216->g_37}},{{&p_1216->g_37},{&p_1216->g_37},{&p_1216->g_37}},{{&p_1216->g_37},{&p_1216->g_37},{&p_1216->g_37}},{{&p_1216->g_37},{&p_1216->g_37},{&p_1216->g_37}},{{&p_1216->g_37},{&p_1216->g_37},{&p_1216->g_37}},{{&p_1216->g_37},{&p_1216->g_37},{&p_1216->g_37}},{{&p_1216->g_37},{&p_1216->g_37},{&p_1216->g_37}},{{&p_1216->g_37},{&p_1216->g_37},{&p_1216->g_37}}};
    uint8_t *****l_1004 = &p_1216->g_526[2];
    int16_t l_1005 = 2L;
    int32_t ****l_1026 = &p_1216->g_990;
    int16_t **l_1028[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1028[i] = &p_1216->g_352[3][0][8];
    for (p_10 = 3; (p_10 >= 0); p_10 -= 1)
    { /* block id: 15 */
        int16_t l_1000 = (-1L);
        for (p_1216->g_17 = 0; (p_1216->g_17 <= 1); p_1216->g_17 += 1)
        { /* block id: 18 */
            int32_t *l_48 = (void*)0;
            int32_t *l_49[6][8] = {{(void*)0,&p_1216->g_37,(void*)0,(void*)0,&p_1216->g_37,(void*)0,(void*)0,&p_1216->g_37},{(void*)0,&p_1216->g_37,(void*)0,(void*)0,&p_1216->g_37,(void*)0,(void*)0,&p_1216->g_37},{(void*)0,&p_1216->g_37,(void*)0,(void*)0,&p_1216->g_37,(void*)0,(void*)0,&p_1216->g_37},{(void*)0,&p_1216->g_37,(void*)0,(void*)0,&p_1216->g_37,(void*)0,(void*)0,&p_1216->g_37},{(void*)0,&p_1216->g_37,(void*)0,(void*)0,&p_1216->g_37,(void*)0,(void*)0,&p_1216->g_37},{(void*)0,&p_1216->g_37,(void*)0,(void*)0,&p_1216->g_37,(void*)0,(void*)0,&p_1216->g_37}};
            int i, j;
            p_1216->g_37 = (-1L);
            for (p_1216->g_37 = 0; (p_1216->g_37 <= 3); p_1216->g_37 += 1)
            { /* block id: 22 */
                uint64_t *l_1002 = &p_1216->g_944[5];
                int i;
                p_1216->g_1001 |= ((((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(func_54(l_58[4][1][0], p_1216->g_45[p_1216->g_37], (safe_lshift_func_int8_t_s_s(8L, 0)), p_1216), p_10)), (l_1000 , (!p_10)))) , func_81(p_10, p_1216)) == (void*)0) , (*p_1216->g_895));
                if (((*p_1216->g_895) = (((void*)0 == &p_1216->g_507[0]) & ((*l_1002) ^= l_1000))))
                { /* block id: 531 */
                    if (p_10)
                        break;
                    for (p_1216->g_544 = 3; (p_1216->g_544 >= 0); p_1216->g_544 -= 1)
                    { /* block id: 535 */
                        return p_10;
                    }
                    for (p_1216->g_523 = 0; p_1216->g_523 < 5; p_1216->g_523 += 1)
                    {
                        for (p_1216->g_638 = 0; p_1216->g_638 < 1; p_1216->g_638 += 1)
                        {
                            for (p_1216->g_175 = 0; p_1216->g_175 < 9; p_1216->g_175 += 1)
                            {
                                p_1216->g_352[p_1216->g_523][p_1216->g_638][p_1216->g_175] = &p_1216->g_293;
                            }
                        }
                    }
                    if (p_10)
                        continue;
                }
                else
                { /* block id: 540 */
                    uint32_t l_1003 = 0xC39FE1E1L;
                    return l_1003;
                }
            }
        }
        if (p_10)
            break;
        for (p_1216->g_671 = 0; (p_1216->g_671 <= 3); p_1216->g_671 += 1)
        { /* block id: 548 */
            for (p_1216->g_699 = 0; (p_1216->g_699 <= 3); p_1216->g_699 += 1)
            { /* block id: 551 */
                (*p_1216->g_895) ^= 0x78C0B513L;
            }
            return p_1216->g_295[3];
        }
    }
    if ((l_1004 == (p_1216->g_140 , &p_1216->g_866)))
    { /* block id: 557 */
        uint8_t **l_1010 = &p_1216->g_271;
        uint8_t *l_1012 = &p_1216->g_99[0][0];
        uint8_t **l_1011 = &l_1012;
        int32_t l_1013 = 0L;
        int16_t **l_1021 = (void*)0;
        int16_t ***l_1020 = &l_1021;
        int16_t **l_1027 = (void*)0;
        int64_t *l_1029[3];
        int32_t l_1030[6];
        int32_t l_1031 = 0x25BD66EEL;
        int32_t l_1032 = 0L;
        int i;
        for (i = 0; i < 3; i++)
            l_1029[i] = &p_1216->g_613;
        for (i = 0; i < 6; i++)
            l_1030[i] = 1L;
        l_1032 |= ((((l_1005 , ((safe_rshift_func_uint8_t_u_u((**p_1216->g_868), (l_1031 &= ((safe_add_func_int64_t_s_s((l_1010 != (l_1011 = l_1010)), (((l_1013 < (~1UL)) , ((~(l_1013 = ((*p_1216->g_294) = (safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((((((*l_1020) = &p_1216->g_352[3][0][2]) == (l_1028[1] = ((((safe_add_func_int16_t_s_s((((safe_div_func_int8_t_s_s(((void*)0 == l_1026), p_10)) > l_1013) && 0x78FDL), l_1013)) , l_1013) , p_10) , l_1027))) != (**p_1216->g_433)) != 0xB611D3D3L) != (-6L)), (*p_1216->g_895))), p_10)), l_1013))))) >= l_1030[1])) | 0x22F39E5EL))) > p_10)))) , (*p_1216->g_889))) , (void*)0) != (void*)0) >= p_10);
    }
    else
    { /* block id: 565 */
        return p_1216->g_944[2];
    }
    return p_1216->g_293;
}


/* ------------------------------------------ */
/* 
 * reads : p_1216->g_39 p_1216->g_45 p_1216->g_17
 * writes: p_1216->g_40 p_1216->g_45
 */
int8_t  func_11(int16_t  p_12, uint16_t  p_13, uint64_t  p_14, int16_t  p_15, uint64_t  p_16, struct S0 * p_1216)
{ /* block id: 8 */
    int32_t *l_38 = (void*)0;
    int32_t *l_42 = &p_1216->g_37;
    int32_t l_43[3];
    int32_t *l_44[3][10][8] = {{{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]}},{{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]}},{{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]},{&l_43[0],&l_43[0],&l_43[1],&l_43[0],&p_1216->g_37,&l_43[0],&l_43[1],&l_43[0]}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_43[i] = 0x41209775L;
    (*p_1216->g_39) = l_38;
    p_1216->g_45[0]++;
    return p_1216->g_17;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_1216->g_37
 */
int64_t  func_28(uint64_t  p_29, uint16_t  p_30, uint32_t  p_31, int32_t  p_32, int32_t  p_33, struct S0 * p_1216)
{ /* block id: 5 */
    int32_t *l_36 = &p_1216->g_37;
    (*l_36) = 8L;
    return p_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_1216->g_41 p_1216->g_39 p_1216->g_40 p_1216->g_37 p_1216->g_45 p_1216->g_334 p_1216->g_105 p_1216->g_17 p_1216->g_294 p_1216->g_295 p_1216->g_248 p_1216->g_351 p_1216->g_183 p_1216->g_173 p_1216->g_369 p_1216->g_549 p_1216->g_140 p_1216->g_322 p_1216->g_185 p_1216->g_433 p_1216->g_508 p_1216->g_271 p_1216->g_99 p_1216->g_156 p_1216->g_620 p_1216->g_775 p_1216->g_776 p_1216->g_175 p_1216->g_866 p_1216->g_638 p_1216->g_148 p_1216->g_158 p_1216->g_895 p_1216->g_699 p_1216->g_899 p_1216->g_671 p_1216->g_867 p_1216->g_293 p_1216->g_868 p_1216->g_889 p_1216->g_523 p_1216->g_390 p_1216->g_391 p_1216->g_944 p_1216->g_960 p_1216->g_270 p_1216->g_327 p_1216->g_389
 * writes: p_1216->g_65 p_1216->g_99 p_1216->g_105 p_1216->g_322 p_1216->g_341 p_1216->g_173 p_1216->g_369 p_1216->g_140 p_1216->g_526 p_1216->g_185 p_1216->g_544 p_1216->g_523 p_1216->g_156 p_1216->g_620 p_1216->g_594 p_1216->g_40 p_1216->g_638 p_1216->g_889 p_1216->g_899 p_1216->g_671 p_1216->g_293 p_1216->g_615 p_1216->g_794 p_1216->g_914 p_1216->g_175 p_1216->g_327 p_1216->g_990
 */
uint16_t  func_54(int32_t * p_55, uint16_t  p_56, uint16_t  p_57, struct S0 * p_1216)
{ /* block id: 23 */
    int32_t l_61[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t **l_62 = &p_1216->g_40;
    int32_t **l_64 = &p_1216->g_40;
    int32_t ***l_63[5];
    uint8_t *l_896 = &p_1216->g_794;
    int32_t *l_901[3][1];
    uint64_t l_920 = 0xD71D24C113D2F0CEL;
    uint32_t l_953 = 4294967295UL;
    int32_t l_975 = 0x3418B9FDL;
    uint16_t *l_982 = &p_1216->g_327;
    uint64_t l_983[4][9] = {{0xD20798FCCD2EAD3EL,0x4B123F83B5EA0287L,0xE4F43E94D73C7520L,0x96E3725AB3AE7300L,0x4B123F83B5EA0287L,0x96E3725AB3AE7300L,0xE4F43E94D73C7520L,0x4B123F83B5EA0287L,0xD20798FCCD2EAD3EL},{0xD20798FCCD2EAD3EL,0x4B123F83B5EA0287L,0xE4F43E94D73C7520L,0x96E3725AB3AE7300L,0x4B123F83B5EA0287L,0x96E3725AB3AE7300L,0xE4F43E94D73C7520L,0x4B123F83B5EA0287L,0xD20798FCCD2EAD3EL},{0xD20798FCCD2EAD3EL,0x4B123F83B5EA0287L,0xE4F43E94D73C7520L,0x96E3725AB3AE7300L,0x4B123F83B5EA0287L,0x96E3725AB3AE7300L,0xE4F43E94D73C7520L,0x4B123F83B5EA0287L,0xD20798FCCD2EAD3EL},{0xD20798FCCD2EAD3EL,0x4B123F83B5EA0287L,0xE4F43E94D73C7520L,0x96E3725AB3AE7300L,0x4B123F83B5EA0287L,0x96E3725AB3AE7300L,0xE4F43E94D73C7520L,0x4B123F83B5EA0287L,0xD20798FCCD2EAD3EL}};
    int32_t ****l_989 = (void*)0;
    int8_t l_991 = 0x4FL;
    int i, j;
    for (i = 0; i < 5; i++)
        l_63[i] = &l_64;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_901[i][j] = &p_1216->g_173;
    }
    if (((l_61[1] >= (l_62 == (p_1216->g_65 = (void*)0))) > (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((safe_mod_func_int64_t_s_s(p_1216->g_41[1][2][5], (0x7EC3L | 0xF25BL))), 8)), 2))))
    { /* block id: 25 */
        int32_t l_72 = 0x47436F42L;
        int32_t ***l_897[3];
        int i;
        for (i = 0; i < 3; i++)
            l_897[i] = &l_62;
        l_72 = ((&p_1216->g_40 == &p_55) , ((*p_1216->g_39) != (void*)0));
        p_1216->g_899 &= func_73(func_78(p_56, l_72, p_1216), ((!(0x17L || p_1216->g_699)) < (l_896 == l_896)), l_72, l_897[0], p_1216);
        for (p_1216->g_671 = 0; (p_1216->g_671 <= 6); p_1216->g_671 += 1)
        { /* block id: 473 */
            uint8_t ***l_900[1][9];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 9; j++)
                    l_900[i][j] = &p_1216->g_508;
            }
            (*p_1216->g_334) &= ((*p_1216->g_866) == (l_900[0][5] = l_900[0][5]));
            return p_57;
        }
        p_55 = l_901[2][0];
    }
    else
    { /* block id: 479 */
        uint64_t l_915 = 18446744073709551608UL;
        int32_t l_916 = (-3L);
        int32_t l_917[5][3][3] = {{{0x5CAF13D5L,0x6357D97CL,4L},{0x5CAF13D5L,0x6357D97CL,4L},{0x5CAF13D5L,0x6357D97CL,4L}},{{0x5CAF13D5L,0x6357D97CL,4L},{0x5CAF13D5L,0x6357D97CL,4L},{0x5CAF13D5L,0x6357D97CL,4L}},{{0x5CAF13D5L,0x6357D97CL,4L},{0x5CAF13D5L,0x6357D97CL,4L},{0x5CAF13D5L,0x6357D97CL,4L}},{{0x5CAF13D5L,0x6357D97CL,4L},{0x5CAF13D5L,0x6357D97CL,4L},{0x5CAF13D5L,0x6357D97CL,4L}},{{0x5CAF13D5L,0x6357D97CL,4L},{0x5CAF13D5L,0x6357D97CL,4L},{0x5CAF13D5L,0x6357D97CL,4L}}};
        uint8_t l_928[6] = {0x67L,247UL,0x67L,0x67L,247UL,0x67L};
        int i, j, k;
        for (p_1216->g_293 = 0; (p_1216->g_293 <= 1); p_1216->g_293 += 1)
        { /* block id: 482 */
            uint8_t *****l_910 = &p_1216->g_526[2];
            uint64_t *l_911 = &p_1216->g_615;
            int32_t l_912 = 0x07C445DDL;
            uint8_t *l_913 = &p_1216->g_914;
            int32_t l_918 = 0x24A4605BL;
            int32_t l_919[7] = {0L,0L,0L,0L,0L,0L,0L};
            int16_t **l_950 = (void*)0;
            int i;
            l_915 |= (safe_sub_func_uint8_t_u_u((***p_1216->g_867), (p_57 >= ((*l_913) = ((*l_896) = (safe_sub_func_int8_t_s_s(0x4FL, (((*p_1216->g_776) | ((p_56 ^ (p_56 , (*p_1216->g_889))) || (((*l_911) = ((((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((l_910 != &p_1216->g_526[6]), (-9L))) != (*p_1216->g_549)), 0x4D8AL)) , p_56) == (*p_1216->g_776)) < (*p_1216->g_776))) , p_57))) > l_912))))))));
            ++l_920;
            if (l_917[0][0][1])
                break;
            (*p_1216->g_895) = l_919[4];
            for (p_1216->g_899 = 0; (p_1216->g_899 <= 1); p_1216->g_899 += 1)
            { /* block id: 492 */
                int64_t l_925 = (-9L);
                int32_t l_927[8] = {0x1B3D10CFL,0x1B3D10CFL,0x1B3D10CFL,0x1B3D10CFL,0x1B3D10CFL,0x1B3D10CFL,0x1B3D10CFL,0x1B3D10CFL};
                uint32_t *l_943 = &p_1216->g_671;
                int32_t l_961 = 0x1378C8A9L;
                int i;
                for (p_1216->g_638 = 0; (p_1216->g_638 <= 1); p_1216->g_638 += 1)
                { /* block id: 495 */
                    int16_t l_924 = 0L;
                    int32_t l_926[7] = {1L,1L,1L,1L,1L,1L,1L};
                    uint32_t *l_934[4][7] = {{&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671},{&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671},{&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671},{&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671,&p_1216->g_671}};
                    uint32_t **l_933 = &l_934[0][4];
                    int32_t l_945[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_945[i] = 2L;
                    ++l_928[4];
                    l_945[0] |= (safe_lshift_func_int8_t_s_s(p_1216->g_41[p_1216->g_899][(p_1216->g_899 + 4)][(p_1216->g_899 + 2)], ((((((*l_933) = &p_1216->g_671) != (l_943 = func_81(((((*p_1216->g_390) | ((((safe_add_func_int32_t_s_s((((0x5961L ^ (safe_sub_func_uint32_t_u_u(l_916, (safe_add_func_uint32_t_u_u((*p_1216->g_889), (safe_lshift_func_int16_t_s_s((((l_926[6] , p_56) <= p_56) >= p_1216->g_175), p_56))))))) , p_57) ^ 0x55L), 0x46F70A91L)) & 1L) , 65533UL) ^ (*p_1216->g_776))) , l_925) ^ l_917[4][0][0]), p_1216))) == l_919[2]) > l_912) > p_1216->g_944[6])));
                }
                l_961 &= (((p_56 , ((0UL <= ((safe_sub_func_int32_t_s_s((l_927[7] = ((*p_1216->g_895) = (safe_sub_func_int8_t_s_s((l_950 == l_950), ((**p_1216->g_868) = (((safe_lshift_func_int8_t_s_u((l_953 = 1L), 2)) | (((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u(p_56, 2)), p_57)) , p_56) >= (safe_mul_func_uint8_t_u_u((((*p_1216->g_334) | (-4L)) > l_916), 0x25L)))) != p_56)))))), 0xC7CCC62AL)) , 0x0F71D7135BEF40F0L)) , p_1216->g_960)) && 0x70E65245L) , l_917[1][1][1]);
                return (**p_1216->g_775);
            }
        }
    }
    (*p_1216->g_334) = ((*p_1216->g_895) = ((safe_mod_func_int16_t_s_s((((*p_1216->g_889) = (safe_mod_func_int64_t_s_s((safe_rshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s(p_56, (safe_sub_func_uint16_t_u_u(((((*l_982) ^= ((*p_1216->g_776) = (((safe_unary_minus_func_int64_t_s((l_975 &= (safe_div_func_int16_t_s_s((p_55 != ((*l_64) = func_81(p_1216->g_99[2][1], p_1216))), 0xF9C8L))))) , (((safe_rshift_func_uint16_t_u_u(((p_56 || (p_57 > (safe_rshift_func_int8_t_s_s((p_1216->g_185 || (safe_mod_func_uint8_t_u_u(((*p_1216->g_294) , (**p_1216->g_270)), p_56))), p_56)))) != 2UL), (*p_1216->g_776))) , p_57) ^ p_57)) <= p_56))) < p_56) && 4294967295UL), 0x2D51L)))) , (**p_1216->g_389)), 3)), 0xB5B2609852A3DB52L))) == l_983[0][4]), p_56)) != p_1216->g_699));
    if ((p_56 > ((*p_1216->g_776) |= ((*l_982) = (((*p_1216->g_294) & (+(safe_sub_func_int32_t_s_s(p_56, (safe_mod_func_uint16_t_u_u(((void*)0 == p_55), p_57)))))) >= ((((safe_unary_minus_func_int32_t_s(((p_56 == (&l_62 != (p_1216->g_990 = (void*)0))) ^ p_57))) & 65528UL) , l_991) | 18446744073709551615UL))))))
    { /* block id: 520 */
        (*p_1216->g_334) |= ((*p_1216->g_895) ^= 0x388FA4C9L);
        (*l_62) = p_55;
    }
    else
    { /* block id: 524 */
        int32_t l_996 = 0x7B562B8CL;
        int16_t l_999[7][1] = {{0x5E50L},{0x5E50L},{0x5E50L},{0x5E50L},{0x5E50L},{0x5E50L},{0x5E50L}};
        int i, j;
        l_996 = ((*p_1216->g_390) > (safe_div_func_int8_t_s_s(p_1216->g_327, (safe_mul_func_int16_t_s_s(l_996, (safe_mod_func_int16_t_s_s(l_999[0][0], (p_56 | p_1216->g_295[5]))))))));
    }
    return p_56;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_73(int32_t * p_74, int64_t  p_75, int16_t  p_76, int32_t *** p_77, struct S0 * p_1216)
{ /* block id: 468 */
    uint32_t l_898[5][8][6] = {{{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L}},{{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L}},{{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L}},{{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L}},{{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L},{0xA339C775L,0UL,0xA339C775L,0xA339C775L,0UL,0xA339C775L}}};
    int i, j, k;
    return l_898[1][6][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1216->g_39 p_1216->g_40 p_1216->g_37 p_1216->g_45 p_1216->g_334 p_1216->g_105 p_1216->g_17 p_1216->g_294 p_1216->g_295 p_1216->g_41 p_1216->g_248 p_1216->g_351 p_1216->g_183 p_1216->g_173 p_1216->g_369 p_1216->g_549 p_1216->g_140 p_1216->g_322 p_1216->g_185 p_1216->g_433 p_1216->g_508 p_1216->g_271 p_1216->g_99 p_1216->g_156 p_1216->g_620 p_1216->g_775 p_1216->g_776 p_1216->g_175 p_1216->g_866 p_1216->g_638 p_1216->g_148 p_1216->g_158 p_1216->g_895
 * writes: p_1216->g_99 p_1216->g_105 p_1216->g_322 p_1216->g_341 p_1216->g_173 p_1216->g_369 p_1216->g_140 p_1216->g_526 p_1216->g_185 p_1216->g_544 p_1216->g_523 p_1216->g_156 p_1216->g_620 p_1216->g_594 p_1216->g_40 p_1216->g_638 p_1216->g_889
 */
int32_t * func_78(int32_t  p_79, int32_t  p_80, struct S0 * p_1216)
{ /* block id: 27 */
    uint32_t l_89 = 0xED91AC48L;
    int32_t *l_92 = &p_1216->g_37;
    uint8_t *l_98 = &p_1216->g_99[3][4];
    uint32_t l_100 = 5UL;
    int32_t **l_870 = &p_1216->g_594[7];
    int32_t l_881 = 4L;
    int32_t l_882 = 0x5B7690F6L;
    (*p_1216->g_39) = ((*l_870) = func_81(func_83(((0xCD285881L > l_89) < (p_79 != ((((safe_sub_func_int16_t_s_s(0x2DC1L, (((((*p_1216->g_39) == l_92) | (*l_92)) || ((*l_98) = ((((((safe_div_func_int8_t_s_s((*l_92), (((safe_unary_minus_func_int32_t_s((((safe_sub_func_uint16_t_u_u(p_1216->g_45[0], (*l_92))) < p_79) , 0x4949FC4AL))) && 0xE3L) ^ 9L))) & 1L) , l_92) == &p_80) , 7L) , (*l_92)))) != (*l_92)))) , p_80) & l_100) , (*l_92)))), &l_92, &l_92, l_92, l_92, p_1216), p_1216));
    (*p_1216->g_334) &= 0x2C33A40FL;
    for (p_1216->g_638 = 0; (p_1216->g_638 <= 33); p_1216->g_638 = safe_add_func_uint8_t_u_u(p_1216->g_638, 1))
    { /* block id: 449 */
        uint64_t l_883 = 0x7C4D5170F42D34E4L;
        for (p_1216->g_185 = 0; (p_1216->g_185 >= 27); p_1216->g_185 = safe_add_func_uint64_t_u_u(p_1216->g_185, 3))
        { /* block id: 452 */
            int32_t *l_875 = (void*)0;
            int32_t *l_876 = &p_1216->g_105;
            int32_t *l_877 = &p_1216->g_173;
            int32_t *l_878 = &p_1216->g_105;
            int32_t *l_879 = &p_1216->g_105;
            int32_t *l_880[4][2][4] = {{{&p_1216->g_173,&p_1216->g_173,&p_1216->g_173,&p_1216->g_173},{&p_1216->g_173,&p_1216->g_173,&p_1216->g_173,&p_1216->g_173}},{{&p_1216->g_173,&p_1216->g_173,&p_1216->g_173,&p_1216->g_173},{&p_1216->g_173,&p_1216->g_173,&p_1216->g_173,&p_1216->g_173}},{{&p_1216->g_173,&p_1216->g_173,&p_1216->g_173,&p_1216->g_173},{&p_1216->g_173,&p_1216->g_173,&p_1216->g_173,&p_1216->g_173}},{{&p_1216->g_173,&p_1216->g_173,&p_1216->g_173,&p_1216->g_173},{&p_1216->g_173,&p_1216->g_173,&p_1216->g_173,&p_1216->g_173}}};
            uint32_t l_886 = 4294967295UL;
            int i, j, k;
            --l_883;
            (*l_870) = &p_80;
            if (l_886)
                continue;
        }
    }
    for (l_100 = (-13); (l_100 != 23); l_100++)
    { /* block id: 460 */
        uint32_t l_892 = 0UL;
        int8_t *l_893 = &p_1216->g_140;
        int32_t *l_894 = &l_881;
        l_881 |= ((((p_80 , (void*)0) == &p_80) <= (*p_1216->g_271)) > ((*l_893) &= (((p_1216->g_889 = &p_1216->g_523) != ((((0x5B8015D8242805B8L ^ (((((!(((safe_rshift_func_uint16_t_u_u((0xF23811CFL >= p_80), (*p_1216->g_776))) == p_79) != l_892)) , (*p_1216->g_776)) < (**p_1216->g_775)) <= 0x2A6D6E85L) || p_1216->g_148)) ^ 1UL) | 0xCA82L) , (void*)0)) < 0xF99C9889L)));
        l_894 = ((*l_870) = func_81(p_1216->g_158, p_1216));
    }
    return p_1216->g_895;
}


/* ------------------------------------------ */
/* 
 * reads : p_1216->g_549 p_1216->g_173 p_1216->g_140 p_1216->g_17 p_1216->g_105 p_1216->g_322 p_1216->g_185 p_1216->g_433 p_1216->g_294 p_1216->g_295 p_1216->g_334 p_1216->g_183 p_1216->g_508 p_1216->g_271 p_1216->g_99 p_1216->g_156 p_1216->g_620 p_1216->g_775 p_1216->g_776 p_1216->g_175 p_1216->g_866 p_1216->g_39 p_1216->g_40
 * writes: p_1216->g_105 p_1216->g_173 p_1216->g_140 p_1216->g_526 p_1216->g_322 p_1216->g_185 p_1216->g_544 p_1216->g_341 p_1216->g_523 p_1216->g_156 p_1216->g_620
 */
int32_t * func_81(uint32_t  p_82, struct S0 * p_1216)
{ /* block id: 261 */
    uint8_t **l_547 = &p_1216->g_271;
    int32_t *l_548 = &p_1216->g_105;
    uint8_t **l_557 = &p_1216->g_271;
    int32_t l_564 = 0x3C00098CL;
    uint8_t ****l_565 = &p_1216->g_507[1];
    uint32_t *l_643 = &p_1216->g_620;
    int16_t *l_658 = &p_1216->g_293;
    uint64_t *l_695 = &p_1216->g_615;
    int16_t l_705 = (-6L);
    uint64_t l_716 = 0x8946DD6F2C6B126AL;
    int16_t ***l_734 = (void*)0;
    int64_t l_738 = 2L;
    uint16_t *l_766 = (void*)0;
    int32_t l_856 = 0x2BFF4F37L;
    int32_t l_858 = 0x59003597L;
    int32_t l_859 = 0L;
    uint32_t l_860 = 1UL;
    (*p_1216->g_549) |= ((*l_548) = ((void*)0 != l_547));
    for (p_1216->g_140 = 20; (p_1216->g_140 > (-25)); p_1216->g_140--)
    { /* block id: 266 */
        uint8_t ***l_556[3];
        uint8_t **l_560 = &p_1216->g_271;
        int32_t l_561 = 7L;
        uint8_t *****l_566 = &p_1216->g_526[5];
        uint8_t ****l_568 = &l_556[2];
        uint8_t *****l_567 = &l_568;
        int32_t *l_569 = &p_1216->g_173;
        int i;
        for (i = 0; i < 3; i++)
            l_556[i] = &p_1216->g_508;
        (*l_548) = (safe_add_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((p_82 != ((l_547 != (l_557 = l_547)) || (((safe_rshift_func_uint8_t_u_s(p_82, (0x29CE1620FE6A10C1L == (l_560 != (void*)0)))) || p_1216->g_17) ^ (*l_548)))) , 0x34EAL), 2)) != p_1216->g_322), l_561));
        (*l_569) |= ((*l_548) = ((l_548 == &l_561) ^ ((safe_add_func_int8_t_s_s(l_564, (l_565 == ((*l_566) = l_565)))) > (((*l_567) = l_565) != (void*)0))));
    }
    for (p_1216->g_322 = 13; (p_1216->g_322 == 34); p_1216->g_322++)
    { /* block id: 276 */
        uint64_t l_582[8][6] = {{18446744073709551607UL,0UL,0x42FD4012CE8C83D0L,0xB8C8D204B47DB5DEL,0x42FD4012CE8C83D0L,0UL},{18446744073709551607UL,0UL,0x42FD4012CE8C83D0L,0xB8C8D204B47DB5DEL,0x42FD4012CE8C83D0L,0UL},{18446744073709551607UL,0UL,0x42FD4012CE8C83D0L,0xB8C8D204B47DB5DEL,0x42FD4012CE8C83D0L,0UL},{18446744073709551607UL,0UL,0x42FD4012CE8C83D0L,0xB8C8D204B47DB5DEL,0x42FD4012CE8C83D0L,0UL},{18446744073709551607UL,0UL,0x42FD4012CE8C83D0L,0xB8C8D204B47DB5DEL,0x42FD4012CE8C83D0L,0UL},{18446744073709551607UL,0UL,0x42FD4012CE8C83D0L,0xB8C8D204B47DB5DEL,0x42FD4012CE8C83D0L,0UL},{18446744073709551607UL,0UL,0x42FD4012CE8C83D0L,0xB8C8D204B47DB5DEL,0x42FD4012CE8C83D0L,0UL},{18446744073709551607UL,0UL,0x42FD4012CE8C83D0L,0xB8C8D204B47DB5DEL,0x42FD4012CE8C83D0L,0UL}};
        int32_t l_590 = 0x5A71A9E0L;
        uint8_t ***l_609 = &l_547;
        int16_t *l_669 = &p_1216->g_293;
        uint32_t l_732 = 4294967289UL;
        int32_t l_759 = 0x3A814736L;
        uint64_t **l_834[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t l_841 = 18446744073709551611UL;
        int32_t l_857[3][9][1] = {{{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L}},{{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L}},{{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L},{0x3B042600L}}};
        int i, j, k;
        for (p_1216->g_185 = 1; (p_1216->g_185 > 60); p_1216->g_185++)
        { /* block id: 279 */
            int16_t *l_578 = &p_1216->g_183[3][4];
            int8_t *l_583 = (void*)0;
            int8_t *l_584 = &p_1216->g_544;
            int32_t l_585 = (-1L);
            int8_t *l_586 = (void*)0;
            int8_t *l_587 = &p_1216->g_341[0];
            uint32_t *l_588 = &p_1216->g_523;
            int32_t *l_589 = &p_1216->g_173;
            int32_t ***l_603 = &p_1216->g_65;
            uint64_t *l_654 = (void*)0;
            (*l_589) |= (((*l_588) = ((p_82 , (safe_sub_func_uint64_t_u_u(0x79EBA8FFE9378120L, (**p_1216->g_433)))) , (7L && ((((safe_sub_func_int32_t_s_s(((*p_1216->g_334) <= (((*l_587) = ((l_578 == (((safe_unary_minus_func_int32_t_s(((p_82 && (safe_mul_func_int8_t_s_s(p_1216->g_183[6][6], ((*l_584) = l_582[0][2])))) <= p_1216->g_322))) || l_582[7][3]) , &p_1216->g_183[6][6])) && l_585)) <= 0x1AL)), p_82)) < 0L) ^ (**p_1216->g_508)) , 0x061CL)))) <= 5UL);
            (*l_589) ^= (*l_548);
            l_590 |= p_82;
            for (p_1216->g_156 = 7; (p_1216->g_156 >= 0); p_1216->g_156 -= 1)
            { /* block id: 288 */
                uint8_t ***l_608[6] = {&l_547,&l_547,&l_547,&l_547,&l_547,&l_547};
                int32_t l_610[7][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                int64_t *l_611 = (void*)0;
                int64_t *l_612[4] = {&p_1216->g_613,&p_1216->g_613,&p_1216->g_613,&p_1216->g_613};
                uint64_t *l_614[1];
                uint32_t *l_616 = (void*)0;
                uint32_t *l_617 = (void*)0;
                uint32_t *l_618 = (void*)0;
                uint32_t *l_619 = &p_1216->g_620;
                uint16_t *l_621 = &p_1216->g_175;
                int32_t l_622 = 1L;
                int64_t *l_623 = (void*)0;
                int16_t **l_633 = (void*)0;
                uint32_t **l_678 = (void*)0;
                uint32_t *l_680 = (void*)0;
                uint32_t **l_679 = &l_680;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_614[i] = &p_1216->g_615;
                for (p_1216->g_173 = 5; (p_1216->g_173 >= 2); p_1216->g_173 -= 1)
                { /* block id: 291 */
                    uint64_t l_591[3][6][1] = {{{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL}},{{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL}},{{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL},{18446744073709551609UL}}};
                    int i, j, k;
                    --l_591[1][3][0];
                }
            }
        }
        (*l_548) = p_82;
        for (l_590 = 0; (l_590 < 19); l_590 = safe_add_func_int64_t_s_s(l_590, 3))
        { /* block id: 378 */
            int32_t *l_758 = &p_1216->g_105;
            uint16_t l_767 = 65531UL;
            int32_t l_785 = 1L;
            for (l_716 = 0; (l_716 >= 2); l_716 = safe_add_func_uint64_t_u_u(l_716, 4))
            { /* block id: 381 */
                int8_t l_757 = 8L;
                if (l_757)
                    break;
                if (p_82)
                    continue;
            }
            l_758 = &l_590;
            l_759 ^= (*p_1216->g_334);
        }
        if ((l_590 = (((((0xDF4FL && (l_834[8] != l_834[8])) , 5UL) <= (p_82 != ((safe_add_func_int16_t_s_s((((*l_643) ^= (!2UL)) <= ((safe_mod_func_int16_t_s_s(p_82, p_82)) , (safe_sub_func_uint64_t_u_u(((l_841 < (*p_1216->g_294)) , l_590), p_82)))), (**p_1216->g_775))) ^ p_82))) || l_759) != l_590)))
        { /* block id: 434 */
            int32_t *l_842 = &l_590;
            int32_t *l_843 = &l_590;
            int32_t *l_844 = &l_564;
            int32_t *l_845 = (void*)0;
            int32_t *l_846 = &l_590;
            int32_t *l_847 = &p_1216->g_173;
            int32_t l_848 = 0x398DC99CL;
            int32_t *l_849 = &l_759;
            int32_t *l_850 = (void*)0;
            int32_t *l_851 = &p_1216->g_173;
            int32_t *l_852 = &l_848;
            int32_t *l_853 = &l_759;
            int32_t *l_854 = &p_1216->g_105;
            int32_t *l_855[2];
            int32_t **l_863 = &l_855[0];
            int i;
            for (i = 0; i < 2; i++)
                l_855[i] = (void*)0;
            ++l_860;
            (*l_863) = (void*)0;
        }
        else
        { /* block id: 437 */
            uint16_t l_869 = 0x7EA1L;
            l_857[0][1][0] ^= (safe_add_func_uint32_t_u_u((&p_1216->g_507[0] == p_1216->g_866), (-1L)));
            (*l_548) = (p_82 , l_869);
        }
    }
    l_548 = &l_859;
    return (*p_1216->g_39);
}


/* ------------------------------------------ */
/* 
 * reads : p_1216->g_334 p_1216->g_105 p_1216->g_37 p_1216->g_17 p_1216->g_294 p_1216->g_295 p_1216->g_41 p_1216->g_248 p_1216->g_351 p_1216->g_183 p_1216->g_173 p_1216->g_369
 * writes: p_1216->g_105 p_1216->g_322 p_1216->g_341 p_1216->g_173 p_1216->g_369
 */
uint32_t  func_83(uint32_t  p_84, int32_t ** p_85, int32_t ** p_86, int32_t * p_87, int32_t * p_88, struct S0 * p_1216)
{ /* block id: 29 */
    int8_t l_106 = 0x12L;
    int32_t l_132[2];
    uint64_t l_151 = 18446744073709551615UL;
    int32_t *l_154 = (void*)0;
    int16_t *l_201 = &p_1216->g_183[1][4];
    int64_t l_203 = 0L;
    int16_t *l_209[6][10] = {{&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[4][0],(void*)0,&p_1216->g_183[4][0],(void*)0,&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_183[6][6]},{&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[4][0],(void*)0,&p_1216->g_183[4][0],(void*)0,&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_183[6][6]},{&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[4][0],(void*)0,&p_1216->g_183[4][0],(void*)0,&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_183[6][6]},{&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[4][0],(void*)0,&p_1216->g_183[4][0],(void*)0,&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_183[6][6]},{&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[4][0],(void*)0,&p_1216->g_183[4][0],(void*)0,&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_183[6][6]},{&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[4][0],(void*)0,&p_1216->g_183[4][0],(void*)0,&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_183[6][6]}};
    int64_t l_239[3][10] = {{0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL},{0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL},{0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL,0x61F7FC1752087CFAL}};
    int8_t l_330 = 0x53L;
    int8_t *l_331 = &l_106;
    int8_t *l_333[5][8][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    int8_t **l_332 = &l_333[1][3][0];
    uint32_t *l_339 = (void*)0;
    uint32_t *l_340[7][9][4] = {{{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322}},{{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322}},{{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322}},{{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322}},{{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322}},{{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322}},{{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322},{&p_1216->g_322,&p_1216->g_322,&p_1216->g_322,&p_1216->g_322}}};
    int32_t l_350 = 1L;
    int32_t *l_353[5];
    int32_t l_488[6] = {0x7A1E393BL,0L,0x7A1E393BL,0x7A1E393BL,0L,0x7A1E393BL};
    uint64_t l_520 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_132[i] = 0x3D04F644L;
    for (i = 0; i < 5; i++)
        l_353[i] = &p_1216->g_173;
    for (p_84 = 0; (p_84 != 23); p_84 = safe_add_func_int16_t_s_s(p_84, 2))
    { /* block id: 32 */
        int8_t l_103[10][4][6] = {{{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L}},{{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L}},{{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L}},{{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L}},{{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L}},{{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L}},{{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L}},{{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L}},{{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L}},{{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L},{0x4EL,(-1L),(-9L),0L,6L,0x47L}}};
        int32_t *l_104[7] = {&p_1216->g_105,&p_1216->g_105,&p_1216->g_105,&p_1216->g_105,&p_1216->g_105,&p_1216->g_105,&p_1216->g_105};
        uint8_t *l_107 = &p_1216->g_99[3][4];
        uint8_t **l_108 = &l_107;
        int32_t ***l_142 = &p_1216->g_65;
        int32_t l_149 = (-1L);
        uint8_t l_164 = 5UL;
        uint32_t l_238 = 0x6F493AA1L;
        int64_t *l_274[10] = {&l_239[0][4],&l_239[0][3],&l_239[0][4],&l_239[0][4],&l_239[0][3],&l_239[0][4],&l_239[0][4],&l_239[0][3],&l_239[0][4],&l_239[0][4]};
        uint16_t l_296 = 0x41BCL;
        int i, j, k;
        (1 + 1);
    }
lbl_358:
    (*p_1216->g_334) |= ((l_330 , &l_330) != ((*l_332) = (l_331 = &p_1216->g_140)));
    p_1216->g_173 &= (((((safe_mul_func_uint8_t_u_u((((((safe_sub_func_uint8_t_u_u(((*p_88) == ((p_1216->g_341[0] = (p_1216->g_322 = (p_84 = p_84))) > (+0x6D675422L))), ((safe_lshift_func_uint8_t_u_u(255UL, 0)) <= ((((((0x42C8DAD5CA50311CL == (((safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u((((l_350 >= (!1UL)) > ((void*)0 != &p_87)) , 0xD450L), 0x0CB2L)), p_1216->g_17)) <= (*p_1216->g_294)) != l_239[0][3])) && 0UL) < l_132[0]) , l_333[1][3][0]) == l_333[1][3][0]) <= 0xD359E288L)))) & (-1L)) != l_203) >= l_239[2][4]) , l_106), p_1216->g_41[1][1][0])) < 0x1BC9D707L) , p_1216->g_248) != p_1216->g_351[2][0][3]) | p_1216->g_183[6][6]);
    for (l_106 = 20; (l_106 == (-17)); --l_106)
    { /* block id: 177 */
        int32_t l_366 = (-1L);
        int32_t l_368 = 0x15946995L;
        uint8_t l_415 = 1UL;
        uint64_t l_424 = 1UL;
        int32_t l_451 = 0x21338B54L;
        int32_t l_506[5][6] = {{0L,0x510A0183L,0x510A0183L,0L,0L,0x510A0183L},{0L,0x510A0183L,0x510A0183L,0L,0L,0x510A0183L},{0L,0x510A0183L,0x510A0183L,0L,0L,0x510A0183L},{0L,0x510A0183L,0x510A0183L,0L,0L,0x510A0183L},{0L,0x510A0183L,0x510A0183L,0L,0L,0x510A0183L}};
        uint32_t l_522 = 0x6EC383ADL;
        uint8_t l_546 = 0UL;
        int i, j;
        (*p_85) = &l_132[0];
        for (p_84 = 0; (p_84 <= 13); p_84++)
        { /* block id: 181 */
            int16_t l_361 = 0x35DAL;
            int32_t l_362 = (-8L);
            int32_t l_365[2][1];
            uint32_t *l_450[1][7];
            int32_t *l_455 = &l_451;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_365[i][j] = 0x77E3BC60L;
            }
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 7; j++)
                    l_450[i][j] = &p_1216->g_322;
            }
            if (l_203)
                goto lbl_358;
            for (l_350 = 6; (l_350 != (-8)); l_350 = safe_sub_func_int64_t_s_s(l_350, 8))
            { /* block id: 185 */
                int64_t l_363 = 0x7A38C4A002CF8605L;
                int32_t l_364 = 0L;
                int32_t l_367 = 0x34078174L;
                uint32_t l_382 = 0xC86CE5E3L;
                uint8_t *l_412 = (void*)0;
                uint16_t *l_413 = (void*)0;
                uint16_t *l_414[5];
                int8_t l_418 = 0x50L;
                int8_t l_452 = 0x31L;
                int16_t **l_487 = &p_1216->g_352[4][0][6];
                uint8_t ****l_524 = &p_1216->g_507[0];
                uint8_t *l_543[5][9] = {{&l_415,&l_415,(void*)0,&l_415,&l_415,&l_415,(void*)0,&l_415,&l_415},{&l_415,&l_415,(void*)0,&l_415,&l_415,&l_415,(void*)0,&l_415,&l_415},{&l_415,&l_415,(void*)0,&l_415,&l_415,&l_415,(void*)0,&l_415,&l_415},{&l_415,&l_415,(void*)0,&l_415,&l_415,&l_415,(void*)0,&l_415,&l_415},{&l_415,&l_415,(void*)0,&l_415,&l_415,&l_415,(void*)0,&l_415,&l_415}};
                int32_t l_545 = 0L;
                int i, j;
                for (i = 0; i < 5; i++)
                    l_414[i] = (void*)0;
                p_1216->g_369++;
            }
            for (p_1216->g_105 = 0; (p_1216->g_105 <= 0); p_1216->g_105 += 1)
            { /* block id: 255 */
                return p_84;
            }
        }
    }
    return p_84;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_1217;
    struct S0* p_1216 = &c_1217;
    struct S0 c_1218 = {
        4L, // p_1216->g_17
        0L, // p_1216->g_37
        &p_1216->g_37, // p_1216->g_40
        &p_1216->g_40, // p_1216->g_39
        {{{0x34763523L,0L,0L,0L,0x34763523L,0x34763523L,0L},{0x34763523L,0L,0L,0L,0x34763523L,0x34763523L,0L},{0x34763523L,0L,0L,0L,0x34763523L,0x34763523L,0L},{0x34763523L,0L,0L,0L,0x34763523L,0x34763523L,0L},{0x34763523L,0L,0L,0L,0x34763523L,0x34763523L,0L},{0x34763523L,0L,0L,0L,0x34763523L,0x34763523L,0L},{0x34763523L,0L,0L,0L,0x34763523L,0x34763523L,0L}},{{0x34763523L,0L,0L,0L,0x34763523L,0x34763523L,0L},{0x34763523L,0L,0L,0L,0x34763523L,0x34763523L,0L},{0x34763523L,0L,0L,0L,0x34763523L,0x34763523L,0L},{0x34763523L,0L,0L,0L,0x34763523L,0x34763523L,0L},{0x34763523L,0L,0L,0L,0x34763523L,0x34763523L,0L},{0x34763523L,0L,0L,0L,0x34763523L,0x34763523L,0L},{0x34763523L,0L,0L,0L,0x34763523L,0x34763523L,0L}}}, // p_1216->g_41
        {5UL,5UL,5UL,5UL}, // p_1216->g_45
        (void*)0, // p_1216->g_65
        {{0UL,0xB7L,0x1BL,0x38L,0xB7L},{0UL,0xB7L,0x1BL,0x38L,0xB7L},{0UL,0xB7L,0x1BL,0x38L,0xB7L},{0UL,0xB7L,0x1BL,0x38L,0xB7L}}, // p_1216->g_99
        0x286A6E12L, // p_1216->g_105
        0x21L, // p_1216->g_140
        0L, // p_1216->g_146
        0x3BC23E960850B4F9L, // p_1216->g_148
        (-1L), // p_1216->g_156
        0x5B51C376L, // p_1216->g_157
        0x749A3EB6L, // p_1216->g_158
        0x07F1438CL, // p_1216->g_173
        0x648DL, // p_1216->g_175
        {{0x5570L,0x34BDL,0x34BDL,0x5570L,0x339EL,0x50E6L,0x0383L,5L},{0x5570L,0x34BDL,0x34BDL,0x5570L,0x339EL,0x50E6L,0x0383L,5L},{0x5570L,0x34BDL,0x34BDL,0x5570L,0x339EL,0x50E6L,0x0383L,5L},{0x5570L,0x34BDL,0x34BDL,0x5570L,0x339EL,0x50E6L,0x0383L,5L},{0x5570L,0x34BDL,0x34BDL,0x5570L,0x339EL,0x50E6L,0x0383L,5L},{0x5570L,0x34BDL,0x34BDL,0x5570L,0x339EL,0x50E6L,0x0383L,5L},{0x5570L,0x34BDL,0x34BDL,0x5570L,0x339EL,0x50E6L,0x0383L,5L}}, // p_1216->g_183
        65530UL, // p_1216->g_185
        (void*)0, // p_1216->g_248
        &p_1216->g_99[2][0], // p_1216->g_271
        &p_1216->g_271, // p_1216->g_270
        0x4D87L, // p_1216->g_293
        {0x10143FD5F5532DAAL,7L,0x10143FD5F5532DAAL,0x10143FD5F5532DAAL,7L,0x10143FD5F5532DAAL}, // p_1216->g_295
        &p_1216->g_295[3], // p_1216->g_294
        0xC69356C6L, // p_1216->g_322
        0x113FL, // p_1216->g_324
        0UL, // p_1216->g_327
        &p_1216->g_105, // p_1216->g_334
        {4L,4L,4L,4L,4L,4L,4L,4L}, // p_1216->g_341
        {{{&p_1216->g_183[6][6],&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_293,&p_1216->g_183[6][6]}},{{&p_1216->g_183[6][6],&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_293,&p_1216->g_183[6][6]}},{{&p_1216->g_183[6][6],&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_293,&p_1216->g_183[6][6]}},{{&p_1216->g_183[6][6],&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_293,&p_1216->g_183[6][6]}},{{&p_1216->g_183[6][6],&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[6][6],(void*)0,&p_1216->g_183[6][6],&p_1216->g_183[6][6],&p_1216->g_293,&p_1216->g_183[6][6]}}}, // p_1216->g_352
        {{{&p_1216->g_352[2][0][3],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2]},{&p_1216->g_352[2][0][3],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2]}},{{&p_1216->g_352[2][0][3],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2]},{&p_1216->g_352[2][0][3],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2]}},{{&p_1216->g_352[2][0][3],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2]},{&p_1216->g_352[2][0][3],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2]}},{{&p_1216->g_352[2][0][3],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2]},{&p_1216->g_352[2][0][3],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2]}},{{&p_1216->g_352[2][0][3],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2]},{&p_1216->g_352[2][0][3],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2]}},{{&p_1216->g_352[2][0][3],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2]},{&p_1216->g_352[2][0][3],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2],&p_1216->g_352[3][0][2]}}}, // p_1216->g_351
        0x748E4E23L, // p_1216->g_369
        0x41L, // p_1216->g_391
        &p_1216->g_391, // p_1216->g_390
        &p_1216->g_390, // p_1216->g_389
        &p_1216->g_294, // p_1216->g_433
        0x5787FA0CL, // p_1216->g_477
        0x5B43B9F2L, // p_1216->g_491
        &p_1216->g_271, // p_1216->g_508
        {&p_1216->g_508,&p_1216->g_508}, // p_1216->g_507
        1UL, // p_1216->g_523
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1216->g_526
        0x42L, // p_1216->g_544
        &p_1216->g_173, // p_1216->g_549
        {&p_1216->g_105,&p_1216->g_37,&p_1216->g_105,&p_1216->g_105,&p_1216->g_37,&p_1216->g_105,&p_1216->g_105,&p_1216->g_37}, // p_1216->g_594
        1L, // p_1216->g_613
        8UL, // p_1216->g_615
        0x2602F746L, // p_1216->g_620
        0UL, // p_1216->g_638
        5UL, // p_1216->g_671
        0x474D7CB1L, // p_1216->g_699
        &p_1216->g_175, // p_1216->g_776
        &p_1216->g_776, // p_1216->g_775
        0UL, // p_1216->g_794
        0x79956EDAL, // p_1216->g_811
        &p_1216->g_271, // p_1216->g_868
        &p_1216->g_868, // p_1216->g_867
        &p_1216->g_867, // p_1216->g_866
        &p_1216->g_523, // p_1216->g_889
        &p_1216->g_173, // p_1216->g_895
        0x61352C77L, // p_1216->g_899
        3UL, // p_1216->g_914
        {{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}, // p_1216->g_923
        {18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL}, // p_1216->g_944
        0UL, // p_1216->g_960
        &p_1216->g_65, // p_1216->g_990
        9UL, // p_1216->g_1001
        {{{0x26BBL,0UL,0x26BBL,0x26BBL},{0x26BBL,0UL,0x26BBL,0x26BBL},{0x26BBL,0UL,0x26BBL,0x26BBL},{0x26BBL,0UL,0x26BBL,0x26BBL},{0x26BBL,0UL,0x26BBL,0x26BBL},{0x26BBL,0UL,0x26BBL,0x26BBL},{0x26BBL,0UL,0x26BBL,0x26BBL},{0x26BBL,0UL,0x26BBL,0x26BBL},{0x26BBL,0UL,0x26BBL,0x26BBL}}}, // p_1216->g_1071
        &p_1216->g_895, // p_1216->g_1105
        {&p_1216->g_491,&p_1216->g_491,&p_1216->g_491,&p_1216->g_491,&p_1216->g_491,&p_1216->g_491}, // p_1216->g_1122
        &p_1216->g_1122[2], // p_1216->g_1121
        &p_1216->g_1121, // p_1216->g_1120
        (void*)0, // p_1216->g_1141
        &p_1216->g_1141, // p_1216->g_1140
        &p_1216->g_1140, // p_1216->g_1139
        {{{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139},{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139}},{{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139},{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139}},{{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139},{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139}},{{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139},{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139}},{{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139},{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139}},{{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139},{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139}},{{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139},{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139}},{{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139},{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139}},{{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139},{&p_1216->g_1139,&p_1216->g_1139,(void*)0,&p_1216->g_1139,&p_1216->g_1139,&p_1216->g_1139}}}, // p_1216->g_1138
        {{4UL,0x3DBA8C2DL,4UL,4UL},{4UL,0x3DBA8C2DL,4UL,4UL}}, // p_1216->g_1205
    };
    c_1217 = c_1218;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1216);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1216->g_17, "p_1216->g_17", print_hash_value);
    transparent_crc(p_1216->g_37, "p_1216->g_37", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_1216->g_41[i][j][k], "p_1216->g_41[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_1216->g_45[i], "p_1216->g_45[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1216->g_99[i][j], "p_1216->g_99[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1216->g_105, "p_1216->g_105", print_hash_value);
    transparent_crc(p_1216->g_140, "p_1216->g_140", print_hash_value);
    transparent_crc(p_1216->g_146, "p_1216->g_146", print_hash_value);
    transparent_crc(p_1216->g_148, "p_1216->g_148", print_hash_value);
    transparent_crc(p_1216->g_156, "p_1216->g_156", print_hash_value);
    transparent_crc(p_1216->g_157, "p_1216->g_157", print_hash_value);
    transparent_crc(p_1216->g_158, "p_1216->g_158", print_hash_value);
    transparent_crc(p_1216->g_173, "p_1216->g_173", print_hash_value);
    transparent_crc(p_1216->g_175, "p_1216->g_175", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_1216->g_183[i][j], "p_1216->g_183[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1216->g_185, "p_1216->g_185", print_hash_value);
    transparent_crc(p_1216->g_293, "p_1216->g_293", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1216->g_295[i], "p_1216->g_295[i]", print_hash_value);

    }
    transparent_crc(p_1216->g_322, "p_1216->g_322", print_hash_value);
    transparent_crc(p_1216->g_324, "p_1216->g_324", print_hash_value);
    transparent_crc(p_1216->g_327, "p_1216->g_327", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1216->g_341[i], "p_1216->g_341[i]", print_hash_value);

    }
    transparent_crc(p_1216->g_369, "p_1216->g_369", print_hash_value);
    transparent_crc(p_1216->g_391, "p_1216->g_391", print_hash_value);
    transparent_crc(p_1216->g_477, "p_1216->g_477", print_hash_value);
    transparent_crc(p_1216->g_491, "p_1216->g_491", print_hash_value);
    transparent_crc(p_1216->g_523, "p_1216->g_523", print_hash_value);
    transparent_crc(p_1216->g_544, "p_1216->g_544", print_hash_value);
    transparent_crc(p_1216->g_613, "p_1216->g_613", print_hash_value);
    transparent_crc(p_1216->g_615, "p_1216->g_615", print_hash_value);
    transparent_crc(p_1216->g_620, "p_1216->g_620", print_hash_value);
    transparent_crc(p_1216->g_638, "p_1216->g_638", print_hash_value);
    transparent_crc(p_1216->g_671, "p_1216->g_671", print_hash_value);
    transparent_crc(p_1216->g_699, "p_1216->g_699", print_hash_value);
    transparent_crc(p_1216->g_794, "p_1216->g_794", print_hash_value);
    transparent_crc(p_1216->g_811, "p_1216->g_811", print_hash_value);
    transparent_crc(p_1216->g_899, "p_1216->g_899", print_hash_value);
    transparent_crc(p_1216->g_914, "p_1216->g_914", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1216->g_923[i][j], "p_1216->g_923[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1216->g_944[i], "p_1216->g_944[i]", print_hash_value);

    }
    transparent_crc(p_1216->g_960, "p_1216->g_960", print_hash_value);
    transparent_crc(p_1216->g_1001, "p_1216->g_1001", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1216->g_1071[i][j][k], "p_1216->g_1071[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_1216->g_1205[i][j], "p_1216->g_1205[i][j]", print_hash_value);

        }
    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
