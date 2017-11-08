// -g 14,76,1 -l 1,38,1
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


// Seed: 2981542686

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile uint16_t g_11;
    uint8_t g_12;
    int32_t g_21;
    int32_t g_45;
    int32_t g_49;
    uint64_t g_65[5][3][2];
    uint32_t g_71;
    volatile int32_t *g_80;
    volatile int32_t **g_79;
    int32_t **g_84;
    int8_t g_102;
    uint16_t g_104;
    int8_t g_139;
    uint32_t g_161;
    uint8_t g_167;
    uint16_t g_174;
    uint64_t g_178;
    int32_t *g_202;
    int32_t *g_203;
    uint8_t g_226;
    volatile int32_t g_232;
    int16_t g_243;
    uint16_t g_299[5][2];
    int16_t *g_311[2][7];
    int32_t g_313;
    int8_t g_387;
    uint8_t g_390;
    uint64_t g_398[6];
    int8_t g_457;
    uint16_t *g_468;
    uint16_t **g_467[7][1];
    uint64_t *g_522;
    uint64_t **g_521;
    volatile int32_t g_649[7][7];
    uint64_t g_706;
    int8_t g_709;
    int32_t g_711;
    int64_t g_752;
    int32_t g_753;
    uint16_t g_767;
    uint16_t **g_775;
    int64_t g_786[8][9];
    volatile uint8_t g_814;
    volatile uint8_t *g_813;
    volatile uint8_t **g_812;
    int16_t g_818;
    uint16_t g_829;
    int8_t g_870;
    uint8_t **g_921;
    uint8_t g_951;
    int64_t *g_955;
    int64_t **g_954;
    volatile uint64_t *g_967;
    volatile uint64_t **g_966;
    volatile int8_t g_999;
    volatile int8_t *g_998;
    volatile int8_t **g_997;
    uint32_t g_1000;
    int32_t g_1051;
    int32_t g_1053;
    int8_t g_1054;
    uint8_t g_1055;
    uint32_t g_1079;
    uint16_t * volatile *g_1118[7][4][9];
    int32_t g_1124;
    int32_t ** volatile g_1146;
    volatile uint16_t *g_1214;
    volatile uint16_t * volatile *g_1213;
    volatile uint16_t * volatile ** volatile g_1212;
    volatile uint16_t * volatile ** volatile * volatile g_1211[6];
    int32_t g_1234;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_1244);
uint32_t  func_3(int16_t  p_4, int32_t  p_5, int64_t  p_6, struct S0 * p_1244);
int64_t  func_15(uint16_t  p_16, struct S0 * p_1244);
int32_t  func_25(int32_t * p_26, int32_t  p_27, struct S0 * p_1244);
int32_t * func_28(int32_t * p_29, uint32_t  p_30, int32_t * p_31, int32_t * p_32, struct S0 * p_1244);
int32_t * func_33(int32_t * p_34, struct S0 * p_1244);
int32_t * func_35(int32_t * p_36, int32_t  p_37, uint64_t  p_38, struct S0 * p_1244);
int32_t * func_39(uint8_t  p_40, int32_t * p_41, struct S0 * p_1244);
int32_t  func_75(uint64_t  p_76, int32_t * p_77, int32_t ** p_78, struct S0 * p_1244);
int32_t * func_81(uint8_t  p_82, int32_t ** p_83, struct S0 * p_1244);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1244->g_11 p_1244->g_12 p_1244->g_21 p_1244->g_202 p_1244->g_49 p_1244->g_468 p_1244->g_299 p_1244->g_711 p_1244->g_398 p_1244->g_775 p_1244->g_1055 p_1244->g_45 p_1244->g_786 p_1244->g_1051 p_1244->g_767 p_1244->g_1079 p_1244->g_752 p_1244->g_818 p_1244->g_951 p_1244->g_1211 p_1244->g_139 p_1244->g_457 p_1244->g_649 p_1244->g_313
 * writes: p_1244->g_12 p_1244->g_21 p_1244->g_299 p_1244->g_711 p_1244->g_468 p_1244->g_767 p_1244->g_1055 p_1244->g_45 p_1244->g_1051 p_1244->g_49 p_1244->g_1079 p_1244->g_752 p_1244->g_818 p_1244->g_139 p_1244->g_202 p_1244->g_951 p_1244->g_174 p_1244->g_775 p_1244->g_243 p_1244->g_457 p_1244->g_313
 */
int32_t  func_1(struct S0 * p_1244)
{ /* block id: 4 */
    int16_t l_2 = 0x105DL;
    int16_t *l_1139[3][10] = {{(void*)0,(void*)0,&p_1244->g_818,&p_1244->g_818,&p_1244->g_818,&p_1244->g_818,&p_1244->g_818,&p_1244->g_243,&p_1244->g_818,&p_1244->g_818},{(void*)0,(void*)0,&p_1244->g_818,&p_1244->g_818,&p_1244->g_818,&p_1244->g_818,&p_1244->g_818,&p_1244->g_243,&p_1244->g_818,&p_1244->g_818},{(void*)0,(void*)0,&p_1244->g_818,&p_1244->g_818,&p_1244->g_818,&p_1244->g_818,&p_1244->g_818,&p_1244->g_243,&p_1244->g_818,&p_1244->g_818}};
    uint32_t l_1140 = 0x14E69107L;
    int32_t *l_1243[7] = {&p_1244->g_1234,&p_1244->g_753,&p_1244->g_1234,&p_1244->g_1234,&p_1244->g_753,&p_1244->g_1234,&p_1244->g_1234};
    int i, j;
    p_1244->g_313 |= (l_2 || func_3((safe_lshift_func_uint16_t_u_u((+(safe_sub_func_uint8_t_u_u(l_2, (0x5625L > (l_1140 = ((p_1244->g_11 | (p_1244->g_12 , ((safe_sub_func_int64_t_s_s(func_15(p_1244->g_12, p_1244), (65535UL > l_2))) , 8UL))) & 0x61L)))))), l_2)), l_2, l_2, p_1244));
    return p_1244->g_786[6][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_45 p_1244->g_1211 p_1244->g_139 p_1244->g_457 p_1244->g_649 p_1244->g_818 p_1244->g_951
 * writes: p_1244->g_818 p_1244->g_21 p_1244->g_139 p_1244->g_202 p_1244->g_951 p_1244->g_45 p_1244->g_174 p_1244->g_775 p_1244->g_243 p_1244->g_457
 */
uint32_t  func_3(int16_t  p_4, int32_t  p_5, int64_t  p_6, struct S0 * p_1244)
{ /* block id: 580 */
    int64_t l_1153[6] = {0x64A764429631F39CL,0x679D51443DB1FA9EL,0x64A764429631F39CL,0x64A764429631F39CL,0x679D51443DB1FA9EL,0x64A764429631F39CL};
    int32_t l_1154 = (-1L);
    int32_t l_1155[3][10][1] = {{{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL}},{{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL}},{{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL},{0x687A2BBFL}}};
    int64_t l_1156 = 0x44F867224511A4A7L;
    int32_t *l_1171 = (void*)0;
    int32_t *l_1172 = &p_1244->g_21;
    int32_t *l_1173 = (void*)0;
    int32_t *l_1174 = (void*)0;
    int32_t *l_1175[1][5][6] = {{{(void*)0,&p_1244->g_753,(void*)0,(void*)0,&p_1244->g_753,(void*)0},{(void*)0,&p_1244->g_753,(void*)0,(void*)0,&p_1244->g_753,(void*)0},{(void*)0,&p_1244->g_753,(void*)0,(void*)0,&p_1244->g_753,(void*)0},{(void*)0,&p_1244->g_753,(void*)0,(void*)0,&p_1244->g_753,(void*)0},{(void*)0,&p_1244->g_753,(void*)0,(void*)0,&p_1244->g_753,(void*)0}}};
    uint32_t l_1176 = 4294967295UL;
    uint64_t ***l_1187 = &p_1244->g_521;
    uint8_t *l_1199 = &p_1244->g_951;
    int16_t l_1201[2][4][2] = {{{1L,0x584FL},{1L,0x584FL},{1L,0x584FL},{1L,0x584FL}},{{1L,0x584FL},{1L,0x584FL},{1L,0x584FL},{1L,0x584FL}}};
    uint16_t ***l_1210 = &p_1244->g_467[2][0];
    uint16_t ****l_1209 = &l_1210;
    int i, j, k;
lbl_1216:
    for (p_1244->g_818 = 0; (p_1244->g_818 > (-19)); p_1244->g_818--)
    { /* block id: 583 */
        int32_t *l_1145 = (void*)0;
        int32_t l_1149 = 0x68A72C9CL;
        int32_t *l_1150 = (void*)0;
        int32_t *l_1151 = &p_1244->g_45;
        int32_t *l_1152[4][7][4] = {{{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0}},{{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0}},{{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0}},{{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0},{&p_1244->g_49,(void*)0,(void*)0,(void*)0}}};
        uint8_t l_1157 = 0xBDL;
        int i, j, k;
        for (p_1244->g_21 = (-23); (p_1244->g_21 != (-17)); p_1244->g_21++)
        { /* block id: 586 */
            uint8_t l_1148 = 0x08L;
            for (p_1244->g_139 = 0; (p_1244->g_139 <= 1); p_1244->g_139 += 1)
            { /* block id: 589 */
                int32_t **l_1147 = &p_1244->g_202;
                (*l_1147) = l_1145;
            }
            if (l_1148)
                continue;
        }
        --l_1157;
    }
    for (p_1244->g_951 = (-14); (p_1244->g_951 == 55); p_1244->g_951++)
    { /* block id: 598 */
        int32_t *l_1162 = &l_1155[0][3][0];
        int32_t *l_1163 = &p_1244->g_21;
        int32_t *l_1164 = &l_1155[0][1][0];
        int32_t *l_1165 = &p_1244->g_49;
        int32_t *l_1166 = (void*)0;
        int32_t *l_1167[4] = {&p_1244->g_45,&p_1244->g_45,&p_1244->g_45,&p_1244->g_45};
        uint8_t l_1168 = 0xD4L;
        int i;
        l_1155[1][2][0] = p_6;
        --l_1168;
        return l_1153[0];
    }
    l_1176--;
    for (p_1244->g_45 = 1; (p_1244->g_45 >= 0); p_1244->g_45 -= 1)
    { /* block id: 606 */
        int8_t l_1190 = 0x5EL;
        uint64_t *l_1197[10][1] = {{&p_1244->g_178},{&p_1244->g_178},{&p_1244->g_178},{&p_1244->g_178},{&p_1244->g_178},{&p_1244->g_178},{&p_1244->g_178},{&p_1244->g_178},{&p_1244->g_178},{&p_1244->g_178}};
        int32_t l_1198 = (-1L);
        int32_t **l_1200 = &l_1175[0][2][0];
        int32_t *l_1202 = &p_1244->g_45;
        int32_t **l_1203 = &l_1173;
        uint64_t ***l_1206[1];
        int32_t l_1228 = 0x67F1A0A3L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1206[i] = &p_1244->g_521;
        (*l_1203) = ((*l_1200) = func_28(func_81(p_4, &l_1174, p_1244), p_5, &l_1155[0][7][0], &l_1155[0][1][0], p_1244));
        (*l_1203) = (*l_1200);
        (*l_1200) = func_28(((*l_1200) = (((safe_lshift_func_int8_t_s_u(((&p_1244->g_521 != l_1206[0]) >= p_5), 4)) & (safe_add_func_int64_t_s_s(((0x12L == p_5) == (*l_1202)), (l_1209 != p_1244->g_1211[3])))) , (void*)0)), (*l_1202), &l_1155[2][6][0], &l_1154, p_1244);
        for (p_1244->g_139 = 0; (p_1244->g_139 <= 1); p_1244->g_139 += 1)
        { /* block id: 617 */
            int16_t l_1215 = 0x71C7L;
            int32_t l_1217 = 0x4E0728FBL;
            int32_t l_1218 = 0x63576FB4L;
            int32_t l_1219 = 0x6C249B4FL;
            int32_t l_1222 = 0x06C8A8F7L;
            int32_t l_1225 = (-2L);
            int32_t l_1226[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1226[i] = (-6L);
            l_1215 = p_6;
            if (p_1244->g_45)
                goto lbl_1216;
            for (l_1215 = 1; (l_1215 >= 0); l_1215 -= 1)
            { /* block id: 622 */
                int32_t l_1223[3];
                int32_t l_1227 = 5L;
                int32_t l_1229 = 0x11850DB0L;
                int32_t l_1230 = 0x3EDF788EL;
                int32_t l_1231 = 1L;
                int32_t l_1235 = 0L;
                int32_t l_1237 = 1L;
                int32_t l_1239 = 0L;
                int i;
                for (i = 0; i < 3; i++)
                    l_1223[i] = 5L;
                for (p_1244->g_457 = 0; (p_1244->g_457 <= 1); p_1244->g_457 += 1)
                { /* block id: 625 */
                    int64_t l_1220[4][8] = {{0L,(-1L),1L,4L,1L,(-1L),0L,0x0866E392BB0CF8E3L},{0L,(-1L),1L,4L,1L,(-1L),0L,0x0866E392BB0CF8E3L},{0L,(-1L),1L,4L,1L,(-1L),0L,0x0866E392BB0CF8E3L},{0L,(-1L),1L,4L,1L,(-1L),0L,0x0866E392BB0CF8E3L}};
                    int32_t l_1221 = 0x759F308AL;
                    int32_t l_1224 = 0x10201CB7L;
                    int32_t l_1232 = (-4L);
                    int32_t l_1233 = 7L;
                    int32_t l_1236 = 0x10C9FB12L;
                    int32_t l_1238 = 0x373DD857L;
                    uint32_t l_1240[10][7] = {{0x8D9A37BCL,4294967295UL,0UL,4294967295UL,0UL,4294967295UL,0x8D9A37BCL},{0x8D9A37BCL,4294967295UL,0UL,4294967295UL,0UL,4294967295UL,0x8D9A37BCL},{0x8D9A37BCL,4294967295UL,0UL,4294967295UL,0UL,4294967295UL,0x8D9A37BCL},{0x8D9A37BCL,4294967295UL,0UL,4294967295UL,0UL,4294967295UL,0x8D9A37BCL},{0x8D9A37BCL,4294967295UL,0UL,4294967295UL,0UL,4294967295UL,0x8D9A37BCL},{0x8D9A37BCL,4294967295UL,0UL,4294967295UL,0UL,4294967295UL,0x8D9A37BCL},{0x8D9A37BCL,4294967295UL,0UL,4294967295UL,0UL,4294967295UL,0x8D9A37BCL},{0x8D9A37BCL,4294967295UL,0UL,4294967295UL,0UL,4294967295UL,0x8D9A37BCL},{0x8D9A37BCL,4294967295UL,0UL,4294967295UL,0UL,4294967295UL,0x8D9A37BCL},{0x8D9A37BCL,4294967295UL,0UL,4294967295UL,0UL,4294967295UL,0x8D9A37BCL}};
                    int i, j;
                    --l_1240[2][0];
                    l_1173 = (*l_1200);
                }
            }
        }
    }
    return p_1244->g_649[0][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_12 p_1244->g_202 p_1244->g_49 p_1244->g_468 p_1244->g_767 p_1244->g_299 p_1244->g_711 p_1244->g_398 p_1244->g_775 p_1244->g_1055 p_1244->g_45 p_1244->g_21 p_1244->g_786 p_1244->g_1051 p_1244->g_1079 p_1244->g_752
 * writes: p_1244->g_12 p_1244->g_21 p_1244->g_767 p_1244->g_299 p_1244->g_711 p_1244->g_468 p_1244->g_1055 p_1244->g_45 p_1244->g_1051 p_1244->g_49 p_1244->g_1079 p_1244->g_752
 */
int64_t  func_15(uint16_t  p_16, struct S0 * p_1244)
{ /* block id: 5 */
    uint64_t l_17 = 0xAA9DADE661FBC9FAL;
    int32_t l_22 = 5L;
    int32_t *l_42 = &l_22;
    int32_t *l_777 = &p_1244->g_711;
    uint64_t l_1023 = 0xBFAFB322E8483B5DL;
    uint16_t *l_1039 = &p_1244->g_767;
    int32_t l_1044 = 0x0BB161A3L;
    int32_t l_1046 = 0x4A581DABL;
    int32_t l_1047 = (-1L);
    int32_t l_1048 = 0x494A3788L;
    int32_t l_1050 = 0x24113003L;
    int32_t l_1052 = 0x494F43F4L;
    uint64_t ***l_1070 = &p_1244->g_521;
    uint64_t ****l_1069 = &l_1070;
    int32_t l_1077 = 1L;
    int32_t l_1078[5] = {1L,1L,1L,1L,1L};
    int32_t l_1108 = 2L;
    int64_t **l_1126 = &p_1244->g_955;
    int64_t **l_1127 = &p_1244->g_955;
    uint16_t l_1138[6] = {0x1F0BL,0x1F0BL,0x1F0BL,0x1F0BL,0x1F0BL,0x1F0BL};
    int i;
    l_17 = p_16;
lbl_1072:
    for (p_1244->g_12 = (-14); (p_1244->g_12 > 31); p_1244->g_12++)
    { /* block id: 9 */
        int32_t *l_20[8][4] = {{&p_1244->g_21,&p_1244->g_21,&p_1244->g_21,&p_1244->g_21},{&p_1244->g_21,&p_1244->g_21,&p_1244->g_21,&p_1244->g_21},{&p_1244->g_21,&p_1244->g_21,&p_1244->g_21,&p_1244->g_21},{&p_1244->g_21,&p_1244->g_21,&p_1244->g_21,&p_1244->g_21},{&p_1244->g_21,&p_1244->g_21,&p_1244->g_21,&p_1244->g_21},{&p_1244->g_21,&p_1244->g_21,&p_1244->g_21,&p_1244->g_21},{&p_1244->g_21,&p_1244->g_21,&p_1244->g_21,&p_1244->g_21},{&p_1244->g_21,&p_1244->g_21,&p_1244->g_21,&p_1244->g_21}};
        int i, j;
        l_22 = p_1244->g_12;
        for (p_1244->g_21 = 0; (p_1244->g_21 > 8); ++p_1244->g_21)
        { /* block id: 13 */
            int32_t **l_74 = &l_20[6][3];
            (1 + 1);
        }
        (*l_777) |= ((*p_1244->g_202) , (safe_add_func_uint16_t_u_u(((*p_1244->g_468)--), p_16)));
    }
    if ((((safe_lshift_func_uint16_t_u_s(65533UL, ((safe_rshift_func_int16_t_s_u(0L, (p_1244->g_398[5] < 0UL))) >= ((void*)0 == &l_17)))) && p_16) & ((*l_1039) = (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((&p_16 != ((*p_1244->g_775) = l_1039)) >= p_16), 14)), (*l_777))))))
    { /* block id: 493 */
        int8_t l_1045[1];
        int32_t l_1049 = 0x6DC3CD80L;
        int16_t l_1064[4] = {0L,0L,0L,0L};
        uint32_t l_1068 = 0xD831A68BL;
        int i;
        for (i = 0; i < 1; i++)
            l_1045[i] = (-10L);
        for (p_1244->g_12 = 0; (p_1244->g_12 <= 0); p_1244->g_12 += 1)
        { /* block id: 496 */
            int32_t *l_1040 = &p_1244->g_45;
            int32_t *l_1041 = &p_1244->g_45;
            int32_t *l_1042 = (void*)0;
            int32_t *l_1043[8] = {&p_1244->g_49,(void*)0,&p_1244->g_49,&p_1244->g_49,(void*)0,&p_1244->g_49,&p_1244->g_49,(void*)0};
            uint8_t l_1065 = 0xA6L;
            uint64_t ****l_1071 = &l_1070;
            int i;
            if (p_16)
                break;
            --p_1244->g_1055;
            if ((*l_1040))
                break;
            for (l_1048 = 0; (l_1048 <= 0); l_1048 += 1)
            { /* block id: 502 */
                uint32_t l_1060 = 0x89A4655CL;
                int32_t l_1063 = 0x7F4DDEB0L;
                for (l_17 = 0; (l_17 <= 7); l_17 += 1)
                { /* block id: 505 */
                    int32_t l_1058 = (-1L);
                    int32_t l_1059[10][8][3] = {{{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L}},{{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L}},{{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L}},{{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L}},{{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L}},{{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L}},{{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L}},{{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L}},{{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L}},{{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L},{1L,0x414DE3BCL,0x22EDB9E1L}}};
                    int i, j, k;
                    ++l_1060;
                    for (p_1244->g_21 = 0; (p_1244->g_21 <= 7); p_1244->g_21 += 1)
                    { /* block id: 509 */
                        int i, j;
                        if (p_1244->g_786[(l_1048 + 5)][(p_1244->g_12 + 5)])
                            break;
                        return p_1244->g_786[p_1244->g_21][p_1244->g_21];
                    }
                    ++l_1065;
                }
                (*l_777) ^= ((*l_1040) = (((*l_42) = 0x2117F01DL) ^ p_16));
            }
            for (p_1244->g_1051 = 0; (p_1244->g_1051 >= 0); p_1244->g_1051 -= 1)
            { /* block id: 521 */
                for (p_1244->g_45 = 6; (p_1244->g_45 >= 2); p_1244->g_45 -= 1)
                { /* block id: 524 */
                    uint64_t l_1073 = 0xAB55B5C6D2CA2025L;
                    if (l_1068)
                        break;
                    (*p_1244->g_202) |= (l_1069 == l_1071);
                    if (p_1244->g_1055)
                        goto lbl_1072;
                    ++l_1073;
                }
            }
        }
    }
    else
    { /* block id: 532 */
        int32_t *l_1076[8][3] = {{(void*)0,&l_22,(void*)0},{(void*)0,&l_22,(void*)0},{(void*)0,&l_22,(void*)0},{(void*)0,&l_22,(void*)0},{(void*)0,&l_22,(void*)0},{(void*)0,&l_22,(void*)0},{(void*)0,&l_22,(void*)0},{(void*)0,&l_22,(void*)0}};
        int32_t l_1099 = 0x74090473L;
        int i, j;
        --p_1244->g_1079;
        for (p_1244->g_752 = 5; (p_1244->g_752 >= 1); p_1244->g_752 -= 1)
        { /* block id: 536 */
            int32_t l_1086 = 0x2BF229F2L;
            uint16_t *l_1100[4];
            uint32_t *l_1101[8] = {&p_1244->g_1000,&p_1244->g_1000,&p_1244->g_1000,&p_1244->g_1000,&p_1244->g_1000,&p_1244->g_1000,&p_1244->g_1000,&p_1244->g_1000};
            uint64_t *l_1115 = &p_1244->g_398[2];
            uint64_t **l_1114 = &l_1115;
            uint64_t ***l_1113 = &l_1114;
            int16_t *l_1132 = &p_1244->g_243;
            int i;
            for (i = 0; i < 4; i++)
                l_1100[i] = &p_1244->g_104;
            (1 + 1);
        }
    }
    return l_1138[4];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_25(int32_t * p_26, int32_t  p_27, struct S0 * p_1244)
{ /* block id: 482 */
    uint8_t l_1022 = 0x79L;
    return l_1022;
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_174 p_1244->g_711 p_1244->g_243
 * writes: p_1244->g_174 p_1244->g_711 p_1244->g_775 p_1244->g_243
 */
int32_t * func_28(int32_t * p_29, uint32_t  p_30, int32_t * p_31, int32_t * p_32, struct S0 * p_1244)
{ /* block id: 340 */
    uint16_t l_780 = 65535UL;
    int32_t l_782[2][4][2] = {{{0x4DF376FAL,0x7CDDD675L},{0x4DF376FAL,0x7CDDD675L},{0x4DF376FAL,0x7CDDD675L},{0x4DF376FAL,0x7CDDD675L}},{{0x4DF376FAL,0x7CDDD675L},{0x4DF376FAL,0x7CDDD675L},{0x4DF376FAL,0x7CDDD675L},{0x4DF376FAL,0x7CDDD675L}}};
    uint32_t l_787[8][6][5] = {{{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L}},{{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L}},{{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L}},{{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L}},{{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L}},{{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L}},{{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L}},{{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L},{1UL,0x07A8B78CL,1UL,4294967294UL,0x3689E427L}}};
    int32_t *l_790 = (void*)0;
    uint64_t ***l_793 = &p_1244->g_521;
    uint64_t *l_806 = &p_1244->g_398[2];
    uint64_t **l_805[10] = {&l_806,&l_806,&l_806,&l_806,&l_806,&l_806,&l_806,&l_806,&l_806,&l_806};
    uint8_t l_810 = 0UL;
    int32_t *l_831[10][2] = {{&l_782[0][3][1],&l_782[0][3][1]},{&l_782[0][3][1],&l_782[0][3][1]},{&l_782[0][3][1],&l_782[0][3][1]},{&l_782[0][3][1],&l_782[0][3][1]},{&l_782[0][3][1],&l_782[0][3][1]},{&l_782[0][3][1],&l_782[0][3][1]},{&l_782[0][3][1],&l_782[0][3][1]},{&l_782[0][3][1],&l_782[0][3][1]},{&l_782[0][3][1],&l_782[0][3][1]},{&l_782[0][3][1],&l_782[0][3][1]}};
    uint8_t *l_841 = &p_1244->g_12;
    uint8_t **l_840 = &l_841;
    uint8_t ***l_839 = &l_840;
    int32_t ***l_901 = &p_1244->g_84;
    int16_t **l_912 = &p_1244->g_311[0][6];
    int16_t ***l_911 = &l_912;
    uint64_t l_1001 = 0xFBCCC42C43FF4820L;
    uint64_t l_1019 = 5UL;
    int32_t *l_1021 = &p_1244->g_711;
    int i, j, k;
    for (p_1244->g_174 = (-21); (p_1244->g_174 >= 11); p_1244->g_174 = safe_add_func_int16_t_s_s(p_1244->g_174, 2))
    { /* block id: 343 */
        uint16_t ***l_781 = &p_1244->g_775;
        int32_t *l_783 = &p_1244->g_313;
        int32_t *l_784 = &p_1244->g_45;
        int32_t *l_785[8] = {&p_1244->g_313,&p_1244->g_313,&p_1244->g_313,&p_1244->g_313,&p_1244->g_313,&p_1244->g_313,&p_1244->g_313,&p_1244->g_313};
        int i;
        (*p_32) |= 0x5DB5A8B8L;
        if (l_780)
            break;
        (*l_781) = &p_1244->g_468;
        l_787[0][4][1]--;
    }
    l_790 = (void*)0;
    for (p_1244->g_243 = 1; (p_1244->g_243 >= 0); p_1244->g_243 -= 1)
    { /* block id: 352 */
        uint64_t ***l_795 = &p_1244->g_521;
        uint64_t ****l_794[6][4][3] = {{{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0}},{{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0}},{{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0}},{{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0}},{{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0}},{{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0},{&l_795,&l_795,(void*)0}}};
        uint64_t ***l_796 = &p_1244->g_521;
        int32_t l_807[5][10] = {{1L,0L,0x3B9CB714L,0L,0L,0L,0x3B9CB714L,0L,1L,1L},{1L,0L,0x3B9CB714L,0L,0L,0L,0x3B9CB714L,0L,1L,1L},{1L,0L,0x3B9CB714L,0L,0L,0L,0x3B9CB714L,0L,1L,1L},{1L,0L,0x3B9CB714L,0L,0L,0L,0x3B9CB714L,0L,1L,1L},{1L,0L,0x3B9CB714L,0L,0L,0L,0x3B9CB714L,0L,1L,1L}};
        int32_t l_811 = 6L;
        uint8_t ***l_863 = &l_840;
        int32_t **l_866 = &l_831[2][1];
        int32_t l_914 = 0x2F521F92L;
        int64_t *l_943[6][7][6] = {{{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752}},{{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752}},{{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752}},{{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752}},{{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752}},{{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752},{&p_1244->g_786[3][8],&p_1244->g_786[1][8],&p_1244->g_786[7][5],(void*)0,&p_1244->g_786[3][8],&p_1244->g_752}}};
        int64_t *l_945 = &p_1244->g_786[3][8];
        uint64_t **l_949[2];
        int8_t l_965 = 0L;
        int64_t l_975[1][8][8] = {{{5L,5L,0L,0x46FC1063235D4BD0L,1L,0x46FC1063235D4BD0L,0L,5L},{5L,5L,0L,0x46FC1063235D4BD0L,1L,0x46FC1063235D4BD0L,0L,5L},{5L,5L,0L,0x46FC1063235D4BD0L,1L,0x46FC1063235D4BD0L,0L,5L},{5L,5L,0L,0x46FC1063235D4BD0L,1L,0x46FC1063235D4BD0L,0L,5L},{5L,5L,0L,0x46FC1063235D4BD0L,1L,0x46FC1063235D4BD0L,0L,5L},{5L,5L,0L,0x46FC1063235D4BD0L,1L,0x46FC1063235D4BD0L,0L,5L},{5L,5L,0L,0x46FC1063235D4BD0L,1L,0x46FC1063235D4BD0L,0L,5L},{5L,5L,0L,0x46FC1063235D4BD0L,1L,0x46FC1063235D4BD0L,0L,5L}}};
        int16_t *l_984 = &p_1244->g_818;
        uint64_t l_1002[7] = {3UL,3UL,3UL,3UL,3UL,3UL,3UL};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_949[i] = &l_806;
        (1 + 1);
    }
    return l_1021;
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_202 p_1244->g_45 p_1244->g_49 p_1244->g_65 p_1244->g_167 p_1244->g_313 p_1244->g_21 p_1244->g_243 p_1244->g_299 p_1244->g_71 p_1244->g_104 p_1244->g_161 p_1244->g_390 p_1244->g_174 p_1244->g_226 p_1244->g_139 p_1244->g_398 p_1244->g_178 p_1244->g_102 p_1244->g_12 p_1244->g_457 p_1244->g_387 p_1244->g_79 p_1244->g_467 p_1244->g_468 p_1244->g_521 p_1244->g_522 p_1244->g_80 p_1244->g_706 p_1244->g_752 p_1244->g_753 p_1244->g_767
 * writes: p_1244->g_161 p_1244->g_45 p_1244->g_49 p_1244->g_71 p_1244->g_167 p_1244->g_313 p_1244->g_104 p_1244->g_203 p_1244->g_387 p_1244->g_398 p_1244->g_65 p_1244->g_178 p_1244->g_139 p_1244->g_80 p_1244->g_202 p_1244->g_390 p_1244->g_226 p_1244->g_243 p_1244->g_299 p_1244->g_706 p_1244->g_467 p_1244->g_775 p_1244->g_753 p_1244->g_767
 */
int32_t * func_33(int32_t * p_34, struct S0 * p_1244)
{ /* block id: 150 */
    int64_t l_315 = (-1L);
    int8_t *l_337 = &p_1244->g_139;
    uint32_t *l_338 = &p_1244->g_71;
    uint8_t *l_339[1][10][3] = {{{&p_1244->g_12,&p_1244->g_12,&p_1244->g_226},{&p_1244->g_12,&p_1244->g_12,&p_1244->g_226},{&p_1244->g_12,&p_1244->g_12,&p_1244->g_226},{&p_1244->g_12,&p_1244->g_12,&p_1244->g_226},{&p_1244->g_12,&p_1244->g_12,&p_1244->g_226},{&p_1244->g_12,&p_1244->g_12,&p_1244->g_226},{&p_1244->g_12,&p_1244->g_12,&p_1244->g_226},{&p_1244->g_12,&p_1244->g_12,&p_1244->g_226},{&p_1244->g_12,&p_1244->g_12,&p_1244->g_226},{&p_1244->g_12,&p_1244->g_12,&p_1244->g_226}}};
    int32_t l_340 = 0x6B61EE53L;
    int16_t l_341 = 4L;
    int32_t *l_346[8] = {&p_1244->g_49,&p_1244->g_49,&p_1244->g_49,&p_1244->g_49,&p_1244->g_49,&p_1244->g_49,&p_1244->g_49,&p_1244->g_49};
    int8_t l_360 = 0L;
    int16_t l_405 = 0x48BBL;
    uint64_t *l_512 = &p_1244->g_65[3][2][1];
    uint32_t l_520[9][2][5] = {{{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L},{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L}},{{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L},{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L}},{{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L},{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L}},{{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L},{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L}},{{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L},{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L}},{{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L},{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L}},{{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L},{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L}},{{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L},{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L}},{{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L},{0x083D2658L,0xDE5F415CL,0xF7CDD9F6L,0xDE5F415CL,0x083D2658L}}};
    uint64_t **l_523 = &l_512;
    uint32_t l_639 = 0UL;
    uint16_t l_659[7] = {0x9F37L,1UL,0x9F37L,0x9F37L,1UL,0x9F37L,0x9F37L};
    uint16_t l_679 = 3UL;
    int64_t l_701 = 1L;
    int64_t l_705[10] = {0x5648E7DEC5257DC0L,0x5648E7DEC5257DC0L,0x5648E7DEC5257DC0L,0x5648E7DEC5257DC0L,0x5648E7DEC5257DC0L,0x5648E7DEC5257DC0L,0x5648E7DEC5257DC0L,0x5648E7DEC5257DC0L,0x5648E7DEC5257DC0L,0x5648E7DEC5257DC0L};
    uint8_t l_725 = 0x80L;
    int32_t l_744[1][10] = {{0L,0x0862B28AL,0L,0L,0x0862B28AL,0L,0L,0x0862B28AL,0L,0L}};
    uint32_t l_754 = 4294967295UL;
    uint16_t **l_757 = (void*)0;
    uint64_t l_758 = 0x121F47B3089A22E8L;
    uint16_t ***l_772 = (void*)0;
    uint16_t ***l_773 = &l_757;
    uint16_t ***l_774[1];
    int16_t *l_776 = &p_1244->g_243;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_774[i] = &p_1244->g_467[2][0];
    if ((l_341 = ((l_315 & (safe_add_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((((l_340 = (safe_lshift_func_uint16_t_u_s(l_315, (safe_unary_minus_func_int64_t_s((((*l_338) = (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((&l_315 != &l_315), (safe_div_func_uint32_t_u_u((p_1244->g_161 = l_315), (safe_sub_func_int16_t_s_s(1L, (safe_sub_func_uint32_t_u_u((((((*p_1244->g_202) = (*p_1244->g_202)) , (((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((l_337 == (void*)0), 0x0A3DL)), l_315)) > l_315) == 0x0BC355EAF38123D7L)) & l_315) != p_1244->g_65[0][0][0]), 0UL)))))))), 13))) >= l_315)))))) >= (-4L)) | 4UL) ^ l_315), l_315)), 0x16BCL))) >= l_315)))
    { /* block id: 156 */
        uint16_t l_357 = 0x9851L;
        uint64_t *l_365 = (void*)0;
        uint64_t **l_364 = &l_365;
        uint64_t ***l_363 = &l_364;
        int32_t l_368[8][10][2] = {{{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL}},{{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL}},{{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL}},{{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL}},{{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL}},{{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL}},{{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL}},{{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL},{0x3D1D4FCDL,0x3D1D4FCDL}}};
        uint32_t l_371 = 0x9E5505F3L;
        uint16_t *l_400 = &p_1244->g_104;
        uint16_t **l_399 = &l_400;
        int32_t l_465[10];
        int16_t *l_549 = (void*)0;
        volatile int32_t **l_554 = &p_1244->g_80;
        int32_t l_584 = (-10L);
        int8_t *l_604 = &p_1244->g_102;
        uint32_t l_620[9][4] = {{0x946935AFL,0x946935AFL,1UL,6UL},{0x946935AFL,0x946935AFL,1UL,6UL},{0x946935AFL,0x946935AFL,1UL,6UL},{0x946935AFL,0x946935AFL,1UL,6UL},{0x946935AFL,0x946935AFL,1UL,6UL},{0x946935AFL,0x946935AFL,1UL,6UL},{0x946935AFL,0x946935AFL,1UL,6UL},{0x946935AFL,0x946935AFL,1UL,6UL},{0x946935AFL,0x946935AFL,1UL,6UL}};
        uint64_t l_671 = 1UL;
        int i, j, k;
        for (i = 0; i < 10; i++)
            l_465[i] = (-1L);
        p_34 = (void*)0;
        for (p_1244->g_49 = 0; (p_1244->g_49 == (-4)); --p_1244->g_49)
        { /* block id: 160 */
            for (p_1244->g_167 = 0; (p_1244->g_167 == 59); p_1244->g_167 = safe_add_func_int16_t_s_s(p_1244->g_167, 3))
            { /* block id: 163 */
                int32_t *l_347 = &l_340;
                return &p_1244->g_49;
            }
            p_1244->g_313 &= 0x5ACEF241L;
        }
        if (((*p_1244->g_202) = (safe_sub_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s(p_1244->g_45, (safe_unary_minus_func_uint8_t_u((safe_sub_func_uint8_t_u_u((l_357--), p_1244->g_21)))))), (((!l_360) , (l_368[4][7][1] = (safe_div_func_uint16_t_u_u(((void*)0 == l_363), ((safe_add_func_int16_t_s_s(l_368[5][1][1], ((3L <= (safe_lshift_func_uint16_t_u_u(((((((((p_1244->g_243 , (&p_1244->g_65[2][1][0] != (void*)0)) >= l_371) & p_1244->g_299[3][0]) & (*p_1244->g_202)) >= l_371) , 0UL) , 249UL) , 65533UL), p_1244->g_71))) < l_368[5][1][1]))) , l_368[7][7][1]))))) , l_368[7][0][0]))) & l_371), 4294967292UL))))
        { /* block id: 171 */
            int64_t l_393 = 0x51C496369D72CE77L;
            uint64_t *l_396 = (void*)0;
            uint64_t *l_397 = &p_1244->g_398[5];
            uint64_t l_409 = 18446744073709551610UL;
            int32_t l_414 = 8L;
            uint16_t **l_466 = &l_400;
            int8_t *l_492[8];
            int64_t l_515 = 0x5947FD5EED87206CL;
            int16_t *l_548[1][6][8] = {{{&l_341,&l_341,&l_341,&p_1244->g_243,&l_341,&l_341,&l_341,&l_405},{&l_341,&l_341,&l_341,&p_1244->g_243,&l_341,&l_341,&l_341,&l_405},{&l_341,&l_341,&l_341,&p_1244->g_243,&l_341,&l_341,&l_341,&l_405},{&l_341,&l_341,&l_341,&p_1244->g_243,&l_341,&l_341,&l_341,&l_405},{&l_341,&l_341,&l_341,&p_1244->g_243,&l_341,&l_341,&l_341,&l_405},{&l_341,&l_341,&l_341,&p_1244->g_243,&l_341,&l_341,&l_341,&l_405}}};
            uint8_t l_637 = 0x61L;
            uint64_t l_655[1][4] = {{0UL,0UL,0UL,0UL}};
            uint8_t **l_660[5][4][7] = {{{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]},{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]},{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]},{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]}},{{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]},{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]},{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]},{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]}},{{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]},{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]},{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]},{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]}},{{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]},{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]},{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]},{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]}},{{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]},{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]},{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]},{&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][9][2],&l_339[0][3][2],&l_339[0][3][2],&l_339[0][3][2]}}};
            int32_t *l_681 = &l_368[5][1][1];
            uint16_t l_686[9][4][7] = {{{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL}},{{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL}},{{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL}},{{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL}},{{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL}},{{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL}},{{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL}},{{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL}},{{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL},{0x9BC6L,65535UL,1UL,0x9BC6L,0xF2DCL,0UL,65526UL}}};
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_492[i] = &l_360;
lbl_662:
            for (p_1244->g_104 = 0; (p_1244->g_104 > 36); ++p_1244->g_104)
            { /* block id: 174 */
                int32_t **l_374 = &p_1244->g_203;
                (*l_374) = p_34;
                if (l_368[5][1][1])
                    break;
            }
            if (((safe_rshift_func_int8_t_s_s(((((((**l_399) |= (safe_mod_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((((safe_add_func_int8_t_s_s((l_368[5][1][1] ^ p_1244->g_161), (!(((p_1244->g_387 = ((*l_338) = 0xECB03B6AL)) < (safe_div_func_int64_t_s_s(((((*l_397) = (p_1244->g_390 , (safe_sub_func_int8_t_s_s(p_1244->g_174, ((l_393 | (18446744073709551615UL <= p_1244->g_390)) != (safe_rshift_func_uint16_t_u_s((&l_357 == (void*)0), 15))))))) , (void*)0) != (void*)0), p_1244->g_390))) && p_1244->g_21)))) , p_1244->g_226) , l_399) == &l_400), l_368[2][0][1])), 1L)), 15)) , p_1244->g_65[3][2][0]), l_371))) == p_1244->g_167) > p_1244->g_45) < 0x6D2EL) < 0x1B3C0463L), l_357)) < l_357))
            { /* block id: 182 */
                uint8_t l_406 = 255UL;
                uint64_t *l_412 = (void*)0;
                uint64_t *l_413[3];
                int32_t l_415 = 1L;
                int16_t *l_424 = &l_341;
                int8_t l_425[2];
                int64_t l_460 = (-1L);
                uint32_t l_607 = 0x6F068E2AL;
                int i;
                for (i = 0; i < 3; i++)
                    l_413[i] = &p_1244->g_65[2][0][0];
                for (i = 0; i < 2; i++)
                    l_425[i] = 0x2DL;
                if ((((safe_rshift_func_uint16_t_u_s(((safe_add_func_int64_t_s_s(((((!l_405) || (l_406 | (safe_mul_func_int16_t_s_s(l_409, ((*l_424) = (((safe_lshift_func_int8_t_s_u(((p_1244->g_139 && (++p_1244->g_65[1][0][1])) ^ ((((~((safe_add_func_uint64_t_u_u((l_406 , (l_368[0][4][1] = (p_1244->g_178 ^= p_1244->g_398[4]))), ((+(safe_div_func_int8_t_s_s((l_406 <= (safe_mul_func_uint16_t_u_u(l_414, l_371))), l_414))) , p_1244->g_167))) , l_409)) && p_1244->g_313) > 0UL) > p_1244->g_102)), p_1244->g_398[4])) > l_357) , 2L)))))) != p_1244->g_139) & l_371), 0x0A883288FD659FC3L)) && 0x4F73L), 12)) , l_425[1]) , (*p_1244->g_202)))
                { /* block id: 187 */
                    for (p_1244->g_104 = 0; (p_1244->g_104 > 53); ++p_1244->g_104)
                    { /* block id: 190 */
                        int32_t *l_428 = &l_368[2][0][1];
                        return &p_1244->g_313;
                    }
                    (*p_1244->g_202) = l_425[1];
                }
                else
                { /* block id: 194 */
                    uint32_t l_429 = 0xD9578E5AL;
                    (*p_1244->g_202) = (l_429 , (*p_1244->g_202));
                    for (l_409 = (-10); (l_409 != 56); l_409++)
                    { /* block id: 198 */
                        uint16_t *l_454 = &l_357;
                        int64_t *l_455 = &l_315;
                        int32_t l_456 = 5L;
                        int8_t *l_458 = &l_360;
                        int8_t *l_459[7][7][5] = {{{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457}},{{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457}},{{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457}},{{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457}},{{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457}},{{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457}},{{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457},{&l_425[1],&p_1244->g_387,&p_1244->g_387,&p_1244->g_387,&p_1244->g_457}}};
                        int32_t **l_461[10][1][3] = {{{&p_1244->g_203,&p_1244->g_203,&p_1244->g_203}},{{&p_1244->g_203,&p_1244->g_203,&p_1244->g_203}},{{&p_1244->g_203,&p_1244->g_203,&p_1244->g_203}},{{&p_1244->g_203,&p_1244->g_203,&p_1244->g_203}},{{&p_1244->g_203,&p_1244->g_203,&p_1244->g_203}},{{&p_1244->g_203,&p_1244->g_203,&p_1244->g_203}},{{&p_1244->g_203,&p_1244->g_203,&p_1244->g_203}},{{&p_1244->g_203,&p_1244->g_203,&p_1244->g_203}},{{&p_1244->g_203,&p_1244->g_203,&p_1244->g_203}},{{&p_1244->g_203,&p_1244->g_203,&p_1244->g_203}}};
                        int i, j, k;
                        l_368[0][0][0] = (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((l_460 &= ((p_1244->g_49 , (p_1244->g_313 >= (+(((*l_458) = (((((*l_337) = (safe_rshift_func_int16_t_s_u(0x7445L, p_1244->g_226))) | (((((((safe_lshift_func_int8_t_s_s((&p_1244->g_311[0][4] == (void*)0), l_425[0])) <= ((l_425[1] >= (((safe_mul_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((((((*l_455) &= (((l_415 ^ p_1244->g_174) , (void*)0) != l_454)) != l_429) <= l_368[4][8][0]) , p_1244->g_398[5]) > p_1244->g_49) , p_1244->g_174), 5UL)), 0x6A8BA9689BADA433L)) , l_456) > l_456), p_1244->g_12)), l_368[5][1][1])), l_357)) | p_1244->g_161), 0x5F3AE26F982CBEC5L)) >= p_1244->g_226), 0x61L)) <= l_429) ^ p_1244->g_174)) > 65535UL)) <= 0x23A8BB8FBD7B7186L) == (*p_1244->g_202)) != 8UL) & p_1244->g_457) >= 0x2DL)) , p_1244->g_390) , 0x0FL)) | 0x14L)))) || l_368[2][0][1])) || p_1244->g_387), p_1244->g_71)), 5));
                        (*p_1244->g_79) = (void*)0;
                        p_1244->g_202 = &l_340;
                    }
                }
                if ((l_414 &= (-8L)))
                { /* block id: 209 */
                    uint32_t l_464[2];
                    uint8_t l_484 = 0xA7L;
                    int32_t *l_491[5][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                    uint16_t l_516[8] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_464[i] = 1UL;
                    if (l_368[5][1][1])
                    { /* block id: 210 */
                        int16_t l_483 = (-1L);
                        int32_t **l_493 = (void*)0;
                        int32_t **l_494 = &p_1244->g_202;
                        int64_t *l_517 = &l_515;
                        int16_t l_518 = 0L;
                        uint8_t l_519 = 9UL;
                        l_415 |= ((safe_lshift_func_int16_t_s_s((((((*l_337) = l_368[5][2][0]) , (p_1244->g_45 && p_1244->g_139)) || l_464[1]) | ((((l_465[0] &= p_1244->g_457) & (l_466 == p_1244->g_467[2][0])) && (((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u((!(safe_sub_func_int16_t_s_s(((*l_424) = (safe_add_func_uint16_t_u_u((safe_div_func_int32_t_s_s((0UL <= (p_1244->g_65[3][2][0] |= ((safe_add_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(l_483, 4)) != p_1244->g_457) == (-4L)), 65535UL)) != l_464[1]))), (*p_1244->g_202))), 0x319CL))), l_368[7][0][1]))), l_483)) , (-1L)), 4)) ^ l_484) ^ 0UL)) != 1UL)), 1)) & 0x6439L);
                        if (p_1244->g_174)
                            goto lbl_524;
                        (*l_494) = p_34;
lbl_524:
                        l_414 = ((l_523 = ((safe_div_func_uint32_t_u_u((safe_div_func_int32_t_s_s(((((safe_add_func_uint64_t_u_u(l_409, (((*l_512) = (((((safe_sub_func_int32_t_s_s((((l_406 | p_1244->g_104) & 9UL) < ((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((0L == (safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_int32_t_s((((*l_517) = ((safe_lshift_func_uint16_t_u_u(((+(((l_465[0] > ((p_1244->g_313 ^= ((void*)0 != l_512)) > ((safe_sub_func_uint32_t_u_u(l_515, l_516[2])) != l_465[7]))) & 1L) , p_1244->g_299[0][0])) < 0x5753612F3D4EFF09L), 9)) < (*p_1244->g_468))) , 0x6A1EFF7FL))) , l_425[1]), l_406))) < 0x64L), 246UL)), l_371)) && l_425[0])), l_518)) != l_519) , l_460) != l_520[2][0][4]) , l_357)) < p_1244->g_398[5]))) || l_393) ^ p_1244->g_71) ^ l_465[0]), p_1244->g_398[2])), p_1244->g_398[2])) , p_1244->g_521)) == &p_1244->g_522);
                        l_415 ^= (((+((p_1244->g_390++) <= ((*l_337) = p_1244->g_457))) || (((*p_1244->g_522) == 1L) & (((&p_1244->g_521 != &p_1244->g_521) | (((((void*)0 != &l_364) , (((safe_mod_func_int8_t_s_s(l_515, (safe_mul_func_int8_t_s_s(((((((l_465[5] ^= (safe_add_func_uint8_t_u_u((4294967294UL && l_371), l_393))) && l_414) ^ l_393) >= l_357) && p_1244->g_104) == 0x669C49BCL), 0x39L)))) ^ p_1244->g_226) == p_1244->g_12)) | (-7L)) < 0x71ACBB774B55E0C4L)) != 0x570CF7D08B4D5217L))) , 0x7857436FL);
                        if (l_360)
                            goto lbl_545;
                    }
                    else
                    { /* block id: 229 */
                        int64_t *l_543 = &l_393;
                        int32_t **l_544 = &l_491[2][0];
                        (*p_1244->g_202) = ((safe_lshift_func_uint8_t_u_s((((safe_div_func_int32_t_s_s((*p_1244->g_202), p_1244->g_398[1])) , ((safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((p_1244->g_65[3][2][0] ^ ((p_1244->g_45 > (p_1244->g_457 < (p_1244->g_226 = ((safe_mul_func_uint8_t_u_u(p_1244->g_243, (((*l_543) = l_425[1]) <= (l_544 == &p_34)))) > (*p_1244->g_522))))) & (-10L))), 0x6F6FBDC2L)), l_465[0])) , 65535UL)) > l_465[0]), l_409)) <= (-1L));
                    }
                    l_414 = 0x1E7491E2L;
lbl_545:
                    l_368[5][1][1] |= 0x339C491CL;
                    for (l_371 = 0; (l_371 > 56); ++l_371)
                    { /* block id: 239 */
                        int16_t *l_550 = &p_1244->g_243;
                        (*p_1244->g_79) = (*p_1244->g_79);
                        l_414 |= 0x06623FBDL;
                        l_465[5] &= (l_414 &= ((l_549 = l_548[0][0][4]) != l_550));
                    }
                }
                else
                { /* block id: 246 */
                    int64_t l_555[8] = {0x125C4F4C391BBABFL,0x14B13D8B80ED6A21L,0x125C4F4C391BBABFL,0x125C4F4C391BBABFL,0x14B13D8B80ED6A21L,0x125C4F4C391BBABFL,0x125C4F4C391BBABFL,0x14B13D8B80ED6A21L};
                    uint64_t l_583 = 18446744073709551610UL;
                    uint16_t **l_606 = &l_400;
                    uint8_t **l_630 = (void*)0;
                    uint8_t **l_631 = &l_339[0][3][2];
                    uint8_t *l_636 = &l_406;
                    uint32_t *l_638 = &p_1244->g_161;
                    int i;
                    for (l_371 = (-2); (l_371 >= 60); ++l_371)
                    { /* block id: 249 */
                        volatile int32_t ***l_553[8] = {&p_1244->g_79,&p_1244->g_79,&p_1244->g_79,&p_1244->g_79,&p_1244->g_79,&p_1244->g_79,&p_1244->g_79,&p_1244->g_79};
                        int i;
                        l_554 = &p_1244->g_80;
                    }
lbl_621:
                    for (l_515 = 0; (l_515 <= 1); l_515 += 1)
                    { /* block id: 254 */
                        uint16_t l_556 = 65535UL;
                        int8_t **l_603[4] = {&l_337,&l_337,&l_337,&l_337};
                        uint16_t ***l_605[7] = {&p_1244->g_467[3][0],&l_466,&p_1244->g_467[3][0],&p_1244->g_467[3][0],&l_466,&p_1244->g_467[3][0],&p_1244->g_467[3][0]};
                        int16_t **l_608 = &l_424;
                        int64_t *l_618[7][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                        int16_t l_619 = 0L;
                        int i, j;
                        ++l_556;
                        l_584 ^= (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((p_1244->g_65[3][2][0] , (safe_rshift_func_int16_t_s_u(((*l_424) = (safe_rshift_func_int16_t_s_s((~(((safe_sub_func_uint32_t_u_u(4294967286UL, l_556)) == ((p_1244->g_226 |= (((safe_div_func_int64_t_s_s((+(l_425[1] == ((safe_mod_func_int8_t_s_s((l_425[0] > 0xA7B9770A496BD174L), (safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((l_465[0] &= ((safe_add_func_int64_t_s_s(((p_1244->g_243 < l_555[3]) | ((safe_lshift_func_int16_t_s_s(((&p_1244->g_522 == &p_1244->g_522) == l_555[3]), 1)) ^ l_393)), l_368[5][1][1])) && (-1L))), 12)), l_371)), l_371)))) , l_414))), l_393)) , 0xAD1B15E2L) > 0x505825EEL)) , l_583)) , 1L)), 15))), 10))), l_425[1])), l_357));
                        (*p_1244->g_202) = (!(safe_mod_func_int64_t_s_s((((*l_608) = (((safe_add_func_int64_t_s_s((((*l_338) |= (((*l_337) = 0x10L) , (((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((l_556 , (safe_sub_func_uint64_t_u_u((((l_583 & 0UL) == (((safe_mul_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((&p_1244->g_102 != (l_604 = &p_1244->g_102)), 6)), 0)) && (-1L)), (+(((l_606 = &p_1244->g_468) == l_466) >= 0x3C1DL)))) , l_607) > 4L)) | p_1244->g_390), 0x2E1FA4B0035A4B7DL))), l_406)), (*p_1244->g_468))), 2L)) < l_406) > l_555[2]))) >= (*p_1244->g_202)), l_409)) <= 0UL) , &p_1244->g_243)) != l_549), (**p_1244->g_521))));
                        l_368[2][6][1] = (0L < ((*l_338) = (0x293FL >= (safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u((((((safe_rshift_func_int16_t_s_u(((l_406 >= 0x84L) != (safe_rshift_func_int16_t_s_u(l_584, ((*p_1244->g_468) <= (safe_lshift_func_uint8_t_u_u(((void*)0 != &p_1244->g_468), 6)))))), ((p_1244->g_522 == l_618[0][1]) , l_619))) != l_620[0][3]) || 0UL) <= l_619) && 0x60D6F371L))) & 0x50B9L), l_368[5][1][1])))));
                        if (l_607)
                            goto lbl_621;
                    }
                    (*p_1244->g_202) = ((safe_add_func_uint64_t_u_u(((((((*p_1244->g_522) = 0x9A4AC59E105EADD3L) >= ((safe_div_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(((*l_638) = ((*l_338) = ((((*l_631) = &l_406) == (((((safe_rshift_func_int16_t_s_s(1L, 10)) , (((safe_add_func_int8_t_s_s(0x60L, ((*l_636) ^= 0UL))) ^ l_357) < 0x1EE539BF445D0519L)) <= 0x27569AED1C048714L) >= l_637) , l_337)) | 0UL))), l_460)), l_607)) , p_1244->g_45)) == 65533UL) && 0x374C387488A5B82FL) != 0x818B1910724C6E1CL), l_583)) ^ l_639);
                }
            }
            else
            { /* block id: 277 */
                uint32_t l_640 = 8UL;
                int32_t *l_643 = &p_1244->g_49;
                int32_t **l_644 = (void*)0;
                int32_t **l_645[2][10][7] = {{{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0}},{{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0},{&l_346[0],&p_1244->g_203,(void*)0,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,(void*)0}}};
                int8_t *l_658 = &l_360;
                int i, j, k;
                ++l_640;
                l_346[0] = l_643;
                for (l_340 = 1; (l_340 > 23); l_340 = safe_add_func_uint64_t_u_u(l_340, 1))
                { /* block id: 282 */
                    volatile int32_t *l_648 = &p_1244->g_649[0][0];
                    int32_t l_650 = 0x699D1D09L;
                    l_648 = (*p_1244->g_79);
                    if ((l_650 >= ((safe_div_func_uint8_t_u_u(((safe_div_func_int64_t_s_s(((l_655[0][3] = l_637) < l_393), ((+(l_368[5][1][1] = p_1244->g_174)) | 251UL))) , (((((65535UL != 1L) & (l_658 == l_604)) , (*p_1244->g_522)) == 0x66A23586DEE66476L) != 0x4431L)), l_650)) <= l_659[5])))
                    { /* block id: 286 */
                        if ((*p_1244->g_202))
                            break;
                    }
                    else
                    { /* block id: 288 */
                        uint8_t ***l_661[8][7][4] = {{{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]}},{{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]}},{{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]}},{{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]}},{{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]}},{{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]}},{{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]}},{{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]},{&l_660[4][3][4],&l_660[3][2][4],&l_660[3][1][5],&l_660[3][3][6]}}};
                        int i, j, k;
                        l_660[4][0][2] = l_660[3][2][4];
                    }
                    if (p_1244->g_21)
                        goto lbl_662;
                }
                for (l_360 = 0; (l_360 <= 9); l_360 += 1)
                { /* block id: 295 */
                    uint64_t **l_678 = &l_397;
                    int i;
                    (*l_643) |= (((*p_1244->g_468) = (l_465[l_360] == (l_584 |= (((0x31300BD5L || ((safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(l_671, 2)), (l_465[l_360] <= (safe_rshift_func_int8_t_s_u((l_368[3][4][0] < ((p_34 = &l_340) == (*p_1244->g_79))), l_465[l_360]))))), ((0x0FCC14648AAF20EBL == 0x04A926932966C4EFL) || l_655[0][3]))), (*p_1244->g_468))) , l_409)) | 0x6F31A2BD2301C0B3L) & p_1244->g_65[3][2][0])))) > l_465[0]);
                    if ((((*l_337) = ((((*l_678) = (((65528UL || ((p_34 == (void*)0) >= (safe_sub_func_uint16_t_u_u(0UL, 0x2B3CL)))) != (l_393 > 0x535FB65A3C75E10AL)) , (void*)0)) == (void*)0) , l_679)) >= l_465[l_360]))
                    { /* block id: 302 */
                        int32_t *l_680 = &l_340;
                        return &p_1244->g_21;
                    }
                    else
                    { /* block id: 304 */
                        uint8_t l_702 = 0x29L;
                        int8_t l_703 = 7L;
                        int32_t l_704[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_704[i] = (-1L);
                        (*l_643) = (safe_lshift_func_int16_t_s_u((-1L), ((*l_400) &= (safe_div_func_uint8_t_u_u((l_704[0] = (((+(**p_1244->g_521)) & l_686[2][3][5]) & (safe_mod_func_int64_t_s_s(((safe_sub_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u((((*l_681) = (((p_1244->g_167++) == p_1244->g_390) >= 18446744073709551615UL)) == (l_620[7][3] > (1UL || (safe_lshift_func_int8_t_s_u((l_702 = (safe_add_func_int64_t_s_s(((safe_sub_func_int64_t_s_s(((void*)0 == l_658), l_465[l_360])) < l_371), l_701))), p_1244->g_49))))), 0x1B229A55BD974A46L)) , l_703), 1UL)) ^ 0x7157CE91CE504255L), (*p_1244->g_522))))), 247UL)))));
                        return &p_1244->g_21;
                    }
                }
            }
            ++p_1244->g_706;
            (*l_554) = (*p_1244->g_79);
        }
        else
        { /* block id: 317 */
            int8_t l_710 = (-6L);
            uint32_t l_712 = 0x3B202912L;
            --l_712;
        }
    }
    else
    { /* block id: 320 */
        int32_t l_723 = (-6L);
        uint32_t l_724 = 4294967293UL;
        int32_t l_726 = 0x205984E2L;
        int32_t **l_727 = (void*)0;
        int32_t **l_728 = (void*)0;
        int32_t **l_729[4] = {&p_1244->g_203,&p_1244->g_203,&p_1244->g_203,&p_1244->g_203};
        uint16_t l_745 = 2UL;
        uint8_t l_750 = 0x6BL;
        int16_t *l_751 = &p_1244->g_243;
        int i;
        l_346[6] = func_39(p_1244->g_65[1][2][0], func_81((l_726 = ((&p_1244->g_467[0][0] == &p_1244->g_467[6][0]) > (((-10L) || ((*l_337) = (+(safe_mod_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_div_func_int8_t_s_s(((p_1244->g_398[1] ^ ((((*l_338) = (p_1244->g_390 != ((p_1244->g_313 , ((*p_34) = (((0x3DL && (l_724 = (((safe_add_func_int64_t_s_s((+((0x46DAA479AA4BBDD2L || p_1244->g_706) , 7L)), p_1244->g_313)) , l_723) , 1UL))) > p_1244->g_65[3][2][0]) || l_725))) & l_723))) & 0UL) > (-1L))) < l_723), l_723)), l_723)), l_723))))) , l_723))), &p_1244->g_203, p_1244), p_1244);
        (*p_34) = ((safe_lshift_func_uint8_t_u_s((((((((void*)0 != (*p_1244->g_521)) == ((((*l_338) = (safe_sub_func_uint64_t_u_u((((((*l_751) = (safe_div_func_int8_t_s_s((((**l_523) ^= (*p_1244->g_522)) || ((safe_sub_func_int64_t_s_s(((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((l_744[0][5] , l_745), (**p_1244->g_521))), (p_1244->g_71 < (((((safe_add_func_uint8_t_u_u(251UL, ((safe_mod_func_int64_t_s_s(p_1244->g_139, (*p_1244->g_522))) | p_1244->g_457))) == (*p_1244->g_522)) || p_1244->g_65[3][2][0]) < (*p_1244->g_522)) & 5UL)))), (*p_1244->g_468))) || l_750), (**p_1244->g_521))) , 0x483A0E67D18B0B2AL)), p_1244->g_313))) != (*p_1244->g_468)) , p_1244->g_752) , (**p_1244->g_521)), 1UL))) ^ p_1244->g_753) & p_1244->g_398[1])) , p_1244->g_753) >= p_1244->g_457) == 0UL) & 3L), 5)) <= (**p_1244->g_521));
        return &p_1244->g_753;
    }
    p_1244->g_753 ^= ((l_754 != (safe_mul_func_int16_t_s_s((l_757 == (void*)0), l_758))) && ((safe_mod_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u((--(*l_338)), (safe_div_func_int8_t_s_s(p_1244->g_767, (safe_add_func_int8_t_s_s((p_1244->g_299[3][0] , ((safe_div_func_int16_t_s_s(((*l_776) |= ((p_1244->g_467[5][0] = ((*l_773) = l_757)) != (p_1244->g_775 = &p_1244->g_468))), 0x0BD0L)) & p_1244->g_45)), 0L)))))) ^ 0L) != (**p_1244->g_521)), p_1244->g_226)) <= 0x7465B906L));
    return p_34;
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_79 p_1244->g_84 p_1244->g_104 p_1244->g_65 p_1244->g_139 p_1244->g_12 p_1244->g_45 p_1244->g_49 p_1244->g_21 p_1244->g_71 p_1244->g_102 p_1244->g_167 p_1244->g_174 p_1244->g_178 p_1244->g_202 p_1244->g_161 p_1244->g_226 p_1244->g_80 p_1244->g_243 p_1244->g_299 p_1244->g_313
 * writes: p_1244->g_102 p_1244->g_104 p_1244->g_139 p_1244->g_65 p_1244->g_45 p_1244->g_49 p_1244->g_80 p_1244->g_161 p_1244->g_167 p_1244->g_174 p_1244->g_178 p_1244->g_202 p_1244->g_203 p_1244->g_226 p_1244->g_71 p_1244->g_243 p_1244->g_299 p_1244->g_311 p_1244->g_313
 */
int32_t * func_35(int32_t * p_36, int32_t  p_37, uint64_t  p_38, struct S0 * p_1244)
{ /* block id: 33 */
    uint16_t *l_303 = &p_1244->g_104;
    int16_t *l_310 = &p_1244->g_243;
    int32_t l_314[8] = {(-9L),0L,(-9L),(-9L),0L,(-9L),(-9L),0L};
    int i;
    if (func_75((p_1244->g_79 != (void*)0), func_81(p_38, p_1244->g_84, p_1244), p_1244->g_84, p_1244))
    { /* block id: 135 */
        uint16_t *l_305[3];
        uint16_t **l_304 = &l_305[0];
        int16_t *l_307 = &p_1244->g_243;
        int16_t **l_306 = &l_307;
        int16_t *l_309 = &p_1244->g_243;
        int16_t **l_308[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t *l_312 = &p_1244->g_313;
        int i;
        for (i = 0; i < 3; i++)
            l_305[i] = &p_1244->g_174;
        (*l_312) ^= ((1L < (l_303 != ((*l_304) = &p_1244->g_174))) & ((((*p_1244->g_202) == ((((*l_306) = &p_1244->g_243) == (p_1244->g_311[1][0] = (l_310 = &p_1244->g_243))) , 0x10828A7EL)) < (&p_37 != (p_1244->g_203 = &p_37))) < 0x9E31L));
        (*p_36) = ((*l_312) |= l_314[1]);
        (*p_36) ^= ((*l_312) = (-6L));
    }
    else
    { /* block id: 146 */
        (*p_36) = (*p_36);
    }
    return &p_1244->g_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_45 p_1244->g_65 p_1244->g_71
 * writes: p_1244->g_45 p_1244->g_49 p_1244->g_65 p_1244->g_71
 */
int32_t * func_39(uint8_t  p_40, int32_t * p_41, struct S0 * p_1244)
{ /* block id: 14 */
    uint32_t l_48[3];
    int32_t l_70 = 4L;
    int i;
    for (i = 0; i < 3; i++)
        l_48[i] = 0UL;
    for (p_40 = (-10); (p_40 > 20); p_40++)
    { /* block id: 17 */
        int32_t *l_68 = (void*)0;
        int32_t *l_69[5] = {&p_1244->g_49,&p_1244->g_49,&p_1244->g_49,&p_1244->g_49,&p_1244->g_49};
        int i;
        (*p_41) = (3L ^ 0x659CDE30ECA6D786L);
        for (p_1244->g_45 = 12; (p_1244->g_45 > 10); --p_1244->g_45)
        { /* block id: 21 */
            for (p_1244->g_49 = 0; p_1244->g_49 < 3; p_1244->g_49 += 1)
            {
                l_48[p_1244->g_49] = 0UL;
            }
        }
        for (p_1244->g_45 = (-26); (p_1244->g_45 > 21); p_1244->g_45 = safe_add_func_uint8_t_u_u(p_1244->g_45, 9))
        { /* block id: 26 */
            int32_t l_52 = 0x6E3B00B7L;
            int32_t *l_53 = &p_1244->g_49;
            int32_t *l_54 = &p_1244->g_49;
            int32_t *l_55 = (void*)0;
            int32_t *l_56 = &p_1244->g_49;
            int32_t *l_57 = &p_1244->g_49;
            int32_t *l_58 = &p_1244->g_49;
            int32_t *l_59 = &p_1244->g_49;
            int32_t *l_60 = &p_1244->g_49;
            int32_t *l_61 = (void*)0;
            int32_t *l_62 = &p_1244->g_49;
            int32_t *l_63 = &p_1244->g_49;
            int32_t *l_64[2][2] = {{&p_1244->g_49,&p_1244->g_49},{&p_1244->g_49,&p_1244->g_49}};
            int i, j;
            --p_1244->g_65[3][2][0];
        }
        p_1244->g_71++;
    }
    return &p_1244->g_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_1244->g_104 p_1244->g_65 p_1244->g_139 p_1244->g_12 p_1244->g_45 p_1244->g_49 p_1244->g_79 p_1244->g_21 p_1244->g_71 p_1244->g_102 p_1244->g_167 p_1244->g_174 p_1244->g_178 p_1244->g_202 p_1244->g_161 p_1244->g_226 p_1244->g_80 p_1244->g_243 p_1244->g_299
 * writes: p_1244->g_102 p_1244->g_104 p_1244->g_139 p_1244->g_65 p_1244->g_45 p_1244->g_49 p_1244->g_80 p_1244->g_161 p_1244->g_167 p_1244->g_174 p_1244->g_178 p_1244->g_202 p_1244->g_203 p_1244->g_226 p_1244->g_71 p_1244->g_243 p_1244->g_299
 */
int32_t  func_75(uint64_t  p_76, int32_t * p_77, int32_t ** p_78, struct S0 * p_1244)
{ /* block id: 41 */
    int64_t l_127 = 7L;
    int32_t l_164 = 0L;
    int32_t *l_199 = (void*)0;
    uint64_t *l_200 = (void*)0;
    int16_t *l_297 = &p_1244->g_243;
    int32_t *l_298[7] = {&p_1244->g_45,&l_164,&p_1244->g_45,&p_1244->g_45,&l_164,&p_1244->g_45,&p_1244->g_45};
    int8_t l_300 = 0x6CL;
    int i;
    for (p_76 = 0; (p_76 > 19); p_76++)
    { /* block id: 44 */
        int8_t *l_124 = &p_1244->g_102;
        int32_t l_159 = (-1L);
        int32_t l_160 = (-1L);
        uint64_t *l_204 = &p_1244->g_65[2][0][1];
        int32_t *l_271 = &l_160;
        for (p_1244->g_102 = (-21); (p_1244->g_102 < (-1)); p_1244->g_102 = safe_add_func_int32_t_s_s(p_1244->g_102, 1))
        { /* block id: 47 */
            uint16_t *l_132[10] = {&p_1244->g_104,&p_1244->g_104,&p_1244->g_104,&p_1244->g_104,&p_1244->g_104,&p_1244->g_104,&p_1244->g_104,&p_1244->g_104,&p_1244->g_104,&p_1244->g_104};
            int8_t *l_137 = (void*)0;
            int8_t *l_138 = &p_1244->g_139;
            uint64_t *l_140 = (void*)0;
            uint64_t *l_141 = (void*)0;
            uint64_t *l_142 = &p_1244->g_65[4][0][1];
            int32_t l_145 = (-1L);
            uint8_t l_146 = 1UL;
            int32_t *l_147 = &p_1244->g_49;
            int i;
            (*l_147) ^= ((safe_div_func_int64_t_s_s((((&p_1244->g_102 == l_124) >= (safe_rshift_func_uint8_t_u_u((((l_127 | (safe_div_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((--p_1244->g_104), (p_1244->g_65[3][2][0] , (((*p_77) = (((-1L) > ((safe_sub_func_int8_t_s_s(((*l_138) |= p_76), (((((*l_142) = 2UL) | ((l_127 < (safe_mul_func_uint16_t_u_u(p_1244->g_12, p_1244->g_45))) & p_76)) != 0x0B36L) == p_76))) || 0xB8L)) != l_127)) ^ l_145)))), p_76))) < 1UL) == p_76), p_76))) > 0x72AC0DF8BE3DAACAL), l_145)) , l_146);
            (*p_1244->g_79) = (void*)0;
            for (l_145 = (-9); (l_145 < 4); ++l_145)
            { /* block id: 56 */
                (*l_147) = p_1244->g_65[3][0][0];
            }
        }
        for (p_1244->g_139 = 0; (p_1244->g_139 <= 1); p_1244->g_139 += 1)
        { /* block id: 62 */
            uint64_t l_150 = 0x50A9A04092CE2759L;
            int32_t **l_201[1][10] = {{(void*)0,&l_199,&l_199,&l_199,(void*)0,(void*)0,&l_199,&l_199,&l_199,(void*)0}};
            int i, j;
            if (((((l_150 , (&p_1244->g_65[4][0][1] != ((((l_150 , (safe_lshift_func_int16_t_s_u(((((l_150 <= (((safe_rshift_func_int16_t_s_u((p_1244->g_161 = (0L ^ ((safe_mod_func_uint32_t_u_u(4294967290UL, p_76)) != (safe_sub_func_uint16_t_u_u((l_160 |= l_159), (~((((p_76 != 0x6C07L) || p_1244->g_21) >= 0L) , l_127))))))), 11)) , 2UL) == 0xDB128D63D52EC9A0L)) ^ 0x39F1547C5475258AL) , 65535UL) > l_127), p_76))) ^ l_127) , l_159) , &p_1244->g_65[3][2][0]))) && p_1244->g_71) <= p_1244->g_102) , (*p_77)))
            { /* block id: 65 */
                int32_t *l_162 = &l_160;
                int32_t *l_163 = &l_160;
                int32_t *l_165 = &l_160;
                int32_t *l_166[1];
                int16_t l_170 = 0L;
                int i;
                for (i = 0; i < 1; i++)
                    l_166[i] = &p_1244->g_45;
                p_1244->g_167--;
                if (l_170)
                { /* block id: 67 */
                    uint32_t l_193[4][7] = {{4294967286UL,0xEDC4901CL,0xDAE8D4C1L,4294967288UL,0xEDC4901CL,4294967288UL,0xDAE8D4C1L},{4294967286UL,0xEDC4901CL,0xDAE8D4C1L,4294967288UL,0xEDC4901CL,4294967288UL,0xDAE8D4C1L},{4294967286UL,0xEDC4901CL,0xDAE8D4C1L,4294967288UL,0xEDC4901CL,4294967288UL,0xDAE8D4C1L},{4294967286UL,0xEDC4901CL,0xDAE8D4C1L,4294967288UL,0xEDC4901CL,4294967288UL,0xDAE8D4C1L}};
                    int32_t l_194 = 0x568E7AC0L;
                    int i, j;
                    for (p_1244->g_49 = 1; (p_1244->g_49 >= 0); p_1244->g_49 -= 1)
                    { /* block id: 70 */
                        uint16_t l_171 = 0xDD16L;
                        ++l_171;
                    }
                    if ((*p_77))
                    { /* block id: 73 */
                        int64_t l_177 = 0x07698F8DB1BCEFE9L;
                        --p_1244->g_174;
                        --p_1244->g_178;
                        p_1244->g_203 = (p_1244->g_202 = func_81(((safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s(p_1244->g_65[3][2][0], (p_1244->g_102 , (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((((safe_div_func_uint16_t_u_u(p_1244->g_104, (safe_add_func_int64_t_s_s((l_193[0][2] & (((!4L) != (l_194 = p_76)) > (l_193[0][2] != ((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((((((l_162 != (l_166[0] = l_199)) <= l_150) | 0x2B814523L) , &l_150) == l_200) && 0x4A7DL), p_1244->g_178)), p_76)) & p_1244->g_71)))), 0xF39FE9454B42CA7FL)))) | p_76) > p_1244->g_49), 11)), p_1244->g_102))))), 0x7DA6L)) >= 0x7C7E2C90L), l_201[0][8], p_1244));
                    }
                    else
                    { /* block id: 80 */
                        (*p_1244->g_202) = ((void*)0 == l_204);
                    }
                }
                else
                { /* block id: 83 */
                    uint16_t l_207 = 1UL;
                    for (p_1244->g_161 = 0; (p_1244->g_161 <= 1); p_1244->g_161 += 1)
                    { /* block id: 86 */
                        uint64_t *l_214 = &p_1244->g_178;
                        uint16_t l_225 = 0xC6B7L;
                        int i, j, k;
                        l_225 &= (((*l_204) = (safe_add_func_uint32_t_u_u(p_1244->g_65[(p_1244->g_139 + 3)][(p_1244->g_139 + 1)][p_1244->g_161], (p_1244->g_65[p_1244->g_161][p_1244->g_139][p_1244->g_161] && (l_207 || (p_1244->g_65[p_1244->g_161][p_1244->g_139][p_1244->g_161] | ((safe_add_func_int32_t_s_s(((((safe_div_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((((*l_214)++) && (((*l_124) |= (+(((safe_lshift_func_int8_t_s_u(p_76, p_1244->g_174)) <= (safe_rshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((void*)0 != l_200), 0)), ((p_76 ^ p_76) ^ p_76))), p_1244->g_139))) , p_76))) && (-1L))), (*l_163))), p_1244->g_65[(p_1244->g_139 + 3)][(p_1244->g_139 + 1)][p_1244->g_161])) && p_76) > (*p_1244->g_202)) , 0x4F25E2EDL), (*p_1244->g_202))) <= p_1244->g_49))))))) , l_160);
                    }
                }
                --p_1244->g_226;
                return (*p_77);
            }
            else
            { /* block id: 95 */
                int8_t l_241 = 8L;
                if ((*p_1244->g_202))
                    break;
                for (p_1244->g_71 = 0; (p_1244->g_71 > 34); p_1244->g_71 = safe_add_func_int16_t_s_s(p_1244->g_71, 4))
                { /* block id: 99 */
                    volatile int32_t *l_231 = &p_1244->g_232;
                    uint64_t **l_237 = &l_200;
                    int64_t *l_238 = &l_127;
                    int16_t *l_242 = &p_1244->g_243;
                    (*p_77) = ((void*)0 != p_77);
                    for (l_127 = 0; (l_127 >= 0); l_127 -= 1)
                    { /* block id: 103 */
                        int i, j, k;
                        l_231 = (*p_1244->g_79);
                        if (p_1244->g_65[(l_127 + 3)][l_127][p_1244->g_139])
                            continue;
                    }
                    (*p_77) = (safe_rshift_func_int16_t_s_u(((*l_242) = (((safe_div_func_int64_t_s_s(((((*l_237) = &p_76) != &p_1244->g_178) , p_1244->g_12), (((*l_238) = ((p_1244->g_45 != p_76) , 0x698FBD53C5758688L)) || 0x54488EE7CE54AC66L))) <= (+p_1244->g_102)) , (!(((((*l_124) = ((((safe_add_func_int16_t_s_s((p_1244->g_174 | l_241), p_1244->g_226)) != l_241) > p_76) , l_241)) ^ p_76) != p_76) == 0x7CD8L)))), p_76));
                    return (*p_77);
                }
                for (p_1244->g_226 = 0; (p_1244->g_226 <= 0); p_1244->g_226 += 1)
                { /* block id: 116 */
                    int16_t *l_254 = &p_1244->g_243;
                    int16_t *l_255 = &p_1244->g_243;
                    int16_t **l_256 = (void*)0;
                    int16_t **l_257 = (void*)0;
                    int16_t **l_258 = &l_255;
                    int i, j;
                    p_1244->g_202 = func_39((safe_div_func_uint16_t_u_u((~(safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(p_1244->g_65[3][2][0], (safe_mul_func_int8_t_s_s(l_241, ((~0x8EL) || p_76))))), ((l_254 == ((*l_258) = l_255)) != ((--p_1244->g_178) <= (safe_sub_func_uint8_t_u_u(0xF0L, (safe_mul_func_uint16_t_u_u(p_1244->g_65[3][2][0], (((safe_add_func_uint64_t_u_u((p_76 & (*p_1244->g_202)), 0x3C7EF234CEBFDD09L)) == 0x05C0CC7FL) < p_1244->g_226)))))))))), l_241)), &l_164, p_1244);
                }
                for (p_1244->g_226 = 0; (p_1244->g_226 >= 12); p_1244->g_226 = safe_add_func_uint16_t_u_u(p_1244->g_226, 3))
                { /* block id: 123 */
                    uint64_t **l_270 = &l_200;
                    uint64_t ***l_269 = &l_270;
                    (*l_269) = (void*)0;
                }
            }
            l_271 = p_77;
        }
        (*p_1244->g_79) = (void*)0;
    }
    p_1244->g_299[3][0] |= (safe_mod_func_int8_t_s_s(p_1244->g_104, (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(p_76, 3)) , (safe_add_func_uint32_t_u_u((0x1D5472B14F8C334BL | ((safe_mul_func_int16_t_s_s(((*l_297) ^= ((safe_mul_func_int8_t_s_s(p_76, (safe_mod_func_int64_t_s_s((+(safe_rshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((p_76 > ((safe_mod_func_int64_t_s_s((safe_unary_minus_func_int32_t_s((*p_77))), 0x034D4BEADCF6FB75L)) == p_1244->g_49)), (p_76 >= p_76))), p_76)), 6))), p_1244->g_226)))) ^ 0x80L)), 1L)) , 7UL)), 0xFD27AE38L))), 1)), p_1244->g_174))));
    (*p_1244->g_202) ^= 0x41F75C9EL;
    return l_300;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_81(uint8_t  p_82, int32_t ** p_83, struct S0 * p_1244)
{ /* block id: 34 */
    uint16_t l_85 = 0UL;
    int32_t *l_92 = (void*)0;
    uint64_t *l_99[9][7][4] = {{{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0}},{{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0}},{{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0}},{{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0}},{{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0}},{{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0}},{{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0}},{{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0}},{{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0},{&p_1244->g_65[2][2][1],&p_1244->g_65[3][2][0],&p_1244->g_65[2][2][1],(void*)0}}};
    int32_t l_100 = 1L;
    int8_t *l_101[8];
    int32_t l_103 = 0x53ABC15DL;
    int32_t *l_105 = (void*)0;
    int32_t *l_106 = &l_100;
    int32_t *l_107 = (void*)0;
    int32_t *l_108 = &p_1244->g_49;
    int32_t *l_109 = (void*)0;
    int32_t *l_110 = &p_1244->g_45;
    int32_t *l_111 = &l_100;
    int32_t *l_112 = &p_1244->g_45;
    int32_t *l_113 = &p_1244->g_45;
    int32_t *l_114 = (void*)0;
    uint8_t l_115 = 0UL;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_101[i] = &p_1244->g_102;
    l_105 = (p_82 , &l_100);
    l_115--;
    return &p_1244->g_45;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_1245;
    struct S0* p_1244 = &c_1245;
    struct S0 c_1246 = {
        1UL, // p_1244->g_11
        0x74L, // p_1244->g_12
        0x006986D6L, // p_1244->g_21
        0x11260E2EL, // p_1244->g_45
        0x21DD5C0AL, // p_1244->g_49
        {{{0x9A53AA4807C1F4B9L,0x22CFB64730E92F9EL},{0x9A53AA4807C1F4B9L,0x22CFB64730E92F9EL},{0x9A53AA4807C1F4B9L,0x22CFB64730E92F9EL}},{{0x9A53AA4807C1F4B9L,0x22CFB64730E92F9EL},{0x9A53AA4807C1F4B9L,0x22CFB64730E92F9EL},{0x9A53AA4807C1F4B9L,0x22CFB64730E92F9EL}},{{0x9A53AA4807C1F4B9L,0x22CFB64730E92F9EL},{0x9A53AA4807C1F4B9L,0x22CFB64730E92F9EL},{0x9A53AA4807C1F4B9L,0x22CFB64730E92F9EL}},{{0x9A53AA4807C1F4B9L,0x22CFB64730E92F9EL},{0x9A53AA4807C1F4B9L,0x22CFB64730E92F9EL},{0x9A53AA4807C1F4B9L,0x22CFB64730E92F9EL}},{{0x9A53AA4807C1F4B9L,0x22CFB64730E92F9EL},{0x9A53AA4807C1F4B9L,0x22CFB64730E92F9EL},{0x9A53AA4807C1F4B9L,0x22CFB64730E92F9EL}}}, // p_1244->g_65
        0xD293D0AEL, // p_1244->g_71
        (void*)0, // p_1244->g_80
        &p_1244->g_80, // p_1244->g_79
        (void*)0, // p_1244->g_84
        0L, // p_1244->g_102
        1UL, // p_1244->g_104
        0x40L, // p_1244->g_139
        0x7933BFEBL, // p_1244->g_161
        2UL, // p_1244->g_167
        0x3FA5L, // p_1244->g_174
        18446744073709551613UL, // p_1244->g_178
        &p_1244->g_49, // p_1244->g_202
        (void*)0, // p_1244->g_203
        0x8FL, // p_1244->g_226
        0L, // p_1244->g_232
        (-1L), // p_1244->g_243
        {{65528UL,0UL},{65528UL,0UL},{65528UL,0UL},{65528UL,0UL},{65528UL,0UL}}, // p_1244->g_299
        {{&p_1244->g_243,&p_1244->g_243,&p_1244->g_243,&p_1244->g_243,&p_1244->g_243,&p_1244->g_243,&p_1244->g_243},{&p_1244->g_243,&p_1244->g_243,&p_1244->g_243,&p_1244->g_243,&p_1244->g_243,&p_1244->g_243,&p_1244->g_243}}, // p_1244->g_311
        (-2L), // p_1244->g_313
        1L, // p_1244->g_387
        1UL, // p_1244->g_390
        {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}, // p_1244->g_398
        (-2L), // p_1244->g_457
        &p_1244->g_299[3][0], // p_1244->g_468
        {{&p_1244->g_468},{&p_1244->g_468},{&p_1244->g_468},{&p_1244->g_468},{&p_1244->g_468},{&p_1244->g_468},{&p_1244->g_468}}, // p_1244->g_467
        &p_1244->g_178, // p_1244->g_522
        &p_1244->g_522, // p_1244->g_521
        {{0x6F7F2A02L,1L,0x56051F69L,9L,0x56051F69L,1L,0x6F7F2A02L},{0x6F7F2A02L,1L,0x56051F69L,9L,0x56051F69L,1L,0x6F7F2A02L},{0x6F7F2A02L,1L,0x56051F69L,9L,0x56051F69L,1L,0x6F7F2A02L},{0x6F7F2A02L,1L,0x56051F69L,9L,0x56051F69L,1L,0x6F7F2A02L},{0x6F7F2A02L,1L,0x56051F69L,9L,0x56051F69L,1L,0x6F7F2A02L},{0x6F7F2A02L,1L,0x56051F69L,9L,0x56051F69L,1L,0x6F7F2A02L},{0x6F7F2A02L,1L,0x56051F69L,9L,0x56051F69L,1L,0x6F7F2A02L}}, // p_1244->g_649
        0xBC6F05A37115FCBAL, // p_1244->g_706
        0x1AL, // p_1244->g_709
        0x63244CA4L, // p_1244->g_711
        7L, // p_1244->g_752
        8L, // p_1244->g_753
        0xD346L, // p_1244->g_767
        &p_1244->g_468, // p_1244->g_775
        {{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L,0L},{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L,0L},{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L,0L},{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L,0L},{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L,0L},{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L,0L},{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L,0L},{0L,(-1L),(-1L),0L,0L,(-1L),(-1L),0L,0L}}, // p_1244->g_786
        246UL, // p_1244->g_814
        &p_1244->g_814, // p_1244->g_813
        &p_1244->g_813, // p_1244->g_812
        0x67EFL, // p_1244->g_818
        0x60CDL, // p_1244->g_829
        (-8L), // p_1244->g_870
        (void*)0, // p_1244->g_921
        253UL, // p_1244->g_951
        (void*)0, // p_1244->g_955
        &p_1244->g_955, // p_1244->g_954
        (void*)0, // p_1244->g_967
        &p_1244->g_967, // p_1244->g_966
        0x48L, // p_1244->g_999
        &p_1244->g_999, // p_1244->g_998
        &p_1244->g_998, // p_1244->g_997
        0x9834AF06L, // p_1244->g_1000
        0x436440AFL, // p_1244->g_1051
        (-7L), // p_1244->g_1053
        0x5FL, // p_1244->g_1054
        1UL, // p_1244->g_1055
        1UL, // p_1244->g_1079
        {{{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0}},{{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0}},{{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0}},{{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0}},{{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0}},{{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0}},{{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0},{(void*)0,&p_1244->g_468,(void*)0,&p_1244->g_468,&p_1244->g_468,&p_1244->g_468,(void*)0,&p_1244->g_468,(void*)0}}}, // p_1244->g_1118
        (-1L), // p_1244->g_1124
        (void*)0, // p_1244->g_1146
        (void*)0, // p_1244->g_1214
        &p_1244->g_1214, // p_1244->g_1213
        &p_1244->g_1213, // p_1244->g_1212
        {&p_1244->g_1212,&p_1244->g_1212,&p_1244->g_1212,&p_1244->g_1212,&p_1244->g_1212,&p_1244->g_1212}, // p_1244->g_1211
        1L, // p_1244->g_1234
    };
    c_1245 = c_1246;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1244);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1244->g_11, "p_1244->g_11", print_hash_value);
    transparent_crc(p_1244->g_12, "p_1244->g_12", print_hash_value);
    transparent_crc(p_1244->g_21, "p_1244->g_21", print_hash_value);
    transparent_crc(p_1244->g_45, "p_1244->g_45", print_hash_value);
    transparent_crc(p_1244->g_49, "p_1244->g_49", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_1244->g_65[i][j][k], "p_1244->g_65[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1244->g_71, "p_1244->g_71", print_hash_value);
    transparent_crc(p_1244->g_102, "p_1244->g_102", print_hash_value);
    transparent_crc(p_1244->g_104, "p_1244->g_104", print_hash_value);
    transparent_crc(p_1244->g_139, "p_1244->g_139", print_hash_value);
    transparent_crc(p_1244->g_161, "p_1244->g_161", print_hash_value);
    transparent_crc(p_1244->g_167, "p_1244->g_167", print_hash_value);
    transparent_crc(p_1244->g_174, "p_1244->g_174", print_hash_value);
    transparent_crc(p_1244->g_178, "p_1244->g_178", print_hash_value);
    transparent_crc(p_1244->g_226, "p_1244->g_226", print_hash_value);
    transparent_crc(p_1244->g_232, "p_1244->g_232", print_hash_value);
    transparent_crc(p_1244->g_243, "p_1244->g_243", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1244->g_299[i][j], "p_1244->g_299[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1244->g_313, "p_1244->g_313", print_hash_value);
    transparent_crc(p_1244->g_387, "p_1244->g_387", print_hash_value);
    transparent_crc(p_1244->g_390, "p_1244->g_390", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1244->g_398[i], "p_1244->g_398[i]", print_hash_value);

    }
    transparent_crc(p_1244->g_457, "p_1244->g_457", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1244->g_649[i][j], "p_1244->g_649[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1244->g_706, "p_1244->g_706", print_hash_value);
    transparent_crc(p_1244->g_709, "p_1244->g_709", print_hash_value);
    transparent_crc(p_1244->g_711, "p_1244->g_711", print_hash_value);
    transparent_crc(p_1244->g_752, "p_1244->g_752", print_hash_value);
    transparent_crc(p_1244->g_753, "p_1244->g_753", print_hash_value);
    transparent_crc(p_1244->g_767, "p_1244->g_767", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1244->g_786[i][j], "p_1244->g_786[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1244->g_814, "p_1244->g_814", print_hash_value);
    transparent_crc(p_1244->g_818, "p_1244->g_818", print_hash_value);
    transparent_crc(p_1244->g_829, "p_1244->g_829", print_hash_value);
    transparent_crc(p_1244->g_870, "p_1244->g_870", print_hash_value);
    transparent_crc(p_1244->g_951, "p_1244->g_951", print_hash_value);
    transparent_crc(p_1244->g_999, "p_1244->g_999", print_hash_value);
    transparent_crc(p_1244->g_1000, "p_1244->g_1000", print_hash_value);
    transparent_crc(p_1244->g_1051, "p_1244->g_1051", print_hash_value);
    transparent_crc(p_1244->g_1053, "p_1244->g_1053", print_hash_value);
    transparent_crc(p_1244->g_1054, "p_1244->g_1054", print_hash_value);
    transparent_crc(p_1244->g_1055, "p_1244->g_1055", print_hash_value);
    transparent_crc(p_1244->g_1079, "p_1244->g_1079", print_hash_value);
    transparent_crc(p_1244->g_1124, "p_1244->g_1124", print_hash_value);
    transparent_crc(p_1244->g_1234, "p_1244->g_1234", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
