// -g 91,25,3 -l 91,1,1
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


// Seed: 3616657400

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
    int32_t *g_2;
    int8_t g_7;
    int8_t g_10;
    int32_t * volatile g_13;
    int32_t g_51;
    int32_t g_53;
    volatile int64_t g_61;
    uint8_t g_62;
    int32_t g_86;
    int32_t g_103;
    int32_t *g_102;
    int32_t ** volatile g_108;
    int16_t g_155;
    uint32_t g_179;
    uint8_t g_182;
    uint16_t g_221;
    int16_t g_222;
    uint8_t g_229;
    int32_t g_240;
    int32_t ** volatile g_243[7];
    int32_t *g_261;
    int16_t g_268[5];
    int16_t g_273;
    int32_t * volatile * volatile *g_281;
    int8_t g_283;
    int64_t g_307;
    int32_t ** volatile g_310;
    int32_t g_337;
    uint32_t g_338;
    uint64_t g_376;
    int32_t ** volatile g_403;
    int32_t ** volatile g_434[4];
    int16_t g_466;
    int32_t ** volatile g_468;
    int32_t ** volatile g_472;
    uint8_t g_483;
    uint64_t g_489;
    uint64_t g_568;
    uint64_t *g_573;
    uint64_t *g_575;
    int8_t *g_619[6][6];
    int32_t *g_672;
    int32_t ** volatile g_671;
    int8_t g_684;
    int8_t g_686;
    int8_t g_696[4][5];
    uint32_t g_752;
    uint16_t *g_816;
    uint16_t **g_815;
    int32_t *g_845;
    int32_t * volatile * volatile g_844;
    uint8_t g_864;
    int16_t *g_898[4][2];
    volatile uint64_t *g_910;
    volatile uint64_t * volatile *g_909;
    volatile uint64_t * volatile ** volatile g_908;
    volatile int32_t g_954;
    uint16_t g_989;
    uint32_t g_994;
    uint64_t *** volatile g_997;
    uint64_t *g_1000;
    uint64_t **g_999;
    uint64_t *** volatile g_998;
    uint8_t * volatile g_1013;
    uint8_t * volatile *g_1012[3][10][6];
    int32_t g_1116;
    uint32_t g_1126[10];
    uint32_t *g_1146;
    int32_t * volatile g_1150[10][7];
    int32_t * volatile g_1151;
    int64_t * volatile g_1154;
    int64_t * volatile * volatile g_1153[10];
    uint16_t g_1172;
    int32_t ** volatile g_1173;
    volatile int64_t g_1308;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S0 * p_1314);
uint16_t  func_23(int32_t  p_24, int32_t * p_25, int8_t * p_26, uint32_t  p_27, struct S0 * p_1314);
uint8_t  func_29(uint32_t  p_30, uint32_t  p_31, int64_t  p_32, struct S0 * p_1314);
uint64_t  func_39(int8_t * p_40, uint32_t  p_41, uint64_t  p_42, int32_t  p_43, int8_t  p_44, struct S0 * p_1314);
uint64_t  func_48(int32_t  p_49, struct S0 * p_1314);
uint32_t  func_67(int32_t * p_68, int32_t * p_69, struct S0 * p_1314);
int32_t * func_70(int32_t * p_71, int32_t  p_72, int32_t * p_73, struct S0 * p_1314);
int32_t  func_88(int32_t * p_89, uint64_t  p_90, int8_t * p_91, int32_t * p_92, int64_t  p_93, struct S0 * p_1314);
int32_t * func_94(int32_t * p_95, int32_t * p_96, struct S0 * p_1314);
int32_t * func_97(int32_t * p_98, int32_t * p_99, int32_t * p_100, int8_t * p_101, struct S0 * p_1314);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1314->g_10 p_1314->g_13 p_1314->g_7
 * writes: p_1314->g_2 p_1314->g_7 p_1314->g_10 p_1314->g_3
 */
uint32_t  func_1(struct S0 * p_1314)
{ /* block id: 4 */
    int8_t *l_6 = &p_1314->g_7;
    int8_t *l_8 = (void*)0;
    int8_t *l_9[2][3][9] = {{{&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10},{&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10},{&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10}},{{&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10},{&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10},{&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10,&p_1314->g_10}}};
    int32_t l_11[3];
    int32_t l_12 = 0x065C2DD7L;
    uint16_t l_1134 = 0x1571L;
    int64_t *l_1177 = (void*)0;
    int16_t l_1202 = 0x04FEL;
    int32_t l_1216 = 0x01262078L;
    uint32_t l_1218 = 4294967290UL;
    int16_t l_1250 = 4L;
    int8_t l_1264 = 0x24L;
    uint8_t l_1313[2][3] = {{0UL,0xFDL,0UL},{0UL,0xFDL,0UL}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_11[i] = 0x45336DE0L;
    p_1314->g_2 = (void*)0;
    (*p_1314->g_13) = (safe_mod_func_int8_t_s_s((l_11[0] = (p_1314->g_10 |= ((*l_6) = 8L))), l_12));
    for (l_12 = (-12); (l_12 <= 4); ++l_12)
    { /* block id: 12 */
        int8_t l_1140 = 1L;
        int32_t l_1142 = 0L;
        uint32_t *l_1147 = &p_1314->g_994;
        uint64_t ***l_1159 = (void*)0;
        int32_t *l_1174 = &l_1142;
        int16_t **l_1196 = &p_1314->g_898[1][1];
        int16_t l_1219 = 0x54E8L;
        int64_t *l_1253[10][4] = {{&p_1314->g_307,(void*)0,(void*)0,&p_1314->g_307},{&p_1314->g_307,(void*)0,(void*)0,&p_1314->g_307},{&p_1314->g_307,(void*)0,(void*)0,&p_1314->g_307},{&p_1314->g_307,(void*)0,(void*)0,&p_1314->g_307},{&p_1314->g_307,(void*)0,(void*)0,&p_1314->g_307},{&p_1314->g_307,(void*)0,(void*)0,&p_1314->g_307},{&p_1314->g_307,(void*)0,(void*)0,&p_1314->g_307},{&p_1314->g_307,(void*)0,(void*)0,&p_1314->g_307},{&p_1314->g_307,(void*)0,(void*)0,&p_1314->g_307},{&p_1314->g_307,(void*)0,(void*)0,&p_1314->g_307}};
        uint16_t l_1265 = 6UL;
        int32_t l_1266 = 0x42B5CEB0L;
        int64_t l_1287 = 0x1973D8E5822B3944L;
        int32_t l_1288 = 0x0B1AE5ECL;
        int32_t l_1289[10][5];
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 5; j++)
                l_1289[i][j] = 0L;
        }
        for (p_1314->g_10 = 0; (p_1314->g_10 != (-9)); --p_1314->g_10)
        { /* block id: 15 */
            int8_t *l_28 = &p_1314->g_7;
            int32_t l_1137[3];
            uint8_t l_1141 = 0UL;
            uint32_t l_1148 = 0x8D1136EAL;
            int32_t l_1170 = 0x35CC6F73L;
            uint16_t l_1171 = 0xC85EL;
            int32_t *l_1187 = &p_1314->g_337;
            uint32_t l_1290 = 0xB6C89FE6L;
            int i;
            for (i = 0; i < 3; i++)
                l_1137[i] = 0L;
            for (p_1314->g_7 = 0; (p_1314->g_7 == (-15)); p_1314->g_7 = safe_sub_func_int64_t_s_s(p_1314->g_7, 8))
            { /* block id: 18 */
                uint32_t *l_1124 = (void*)0;
                uint32_t *l_1125[5];
                int32_t l_1139 = 0x167345E3L;
                int32_t l_1149 = 0x69CF1995L;
                int32_t l_1217 = 0x7C261142L;
                int i;
                for (i = 0; i < 5; i++)
                    l_1125[i] = &p_1314->g_1126[5];
                (1 + 1);
            }
            return l_12;
        }
    }
    return l_1313[0][1];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_23(int32_t  p_24, int32_t * p_25, int8_t * p_26, uint32_t  p_27, struct S0 * p_1314)
{ /* block id: 503 */
    int32_t *l_1127 = &p_1314->g_53;
    int32_t *l_1128 = &p_1314->g_86;
    int32_t *l_1129 = &p_1314->g_337;
    int32_t *l_1130[6][3][9] = {{{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0},{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0},{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0}},{{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0},{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0},{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0}},{{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0},{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0},{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0}},{{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0},{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0},{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0}},{{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0},{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0},{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0}},{{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0},{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0},{(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_86,&p_1314->g_86,(void*)0,(void*)0}}};
    uint16_t l_1131 = 0xDB16L;
    int i, j, k;
    l_1131++;
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_1314->g_3 p_1314->g_62 p_1314->g_53 p_1314->g_51 p_1314->g_13 p_1314->g_86 p_1314->g_108 p_1314->g_61 p_1314->g_10 p_1314->g_2 p_1314->g_103 p_1314->g_155 p_1314->g_102 p_1314->g_7 p_1314->g_182 p_1314->g_179 p_1314->g_222 p_1314->g_229 p_1314->g_240 p_1314->g_261 p_1314->g_273 p_1314->g_281 p_1314->g_283 p_1314->g_268 p_1314->g_221 p_1314->g_337 p_1314->g_338 p_1314->g_307 p_1314->g_403 p_1314->g_376 p_1314->g_466 p_1314->g_468 p_1314->g_671 p_1314->g_696 p_1314->g_672 p_1314->g_752 p_1314->g_568 p_1314->g_684 p_1314->g_815 p_1314->g_816 p_1314->g_844 p_1314->g_864 p_1314->g_908 p_1314->g_954 p_1314->g_989 p_1314->g_998 p_1314->g_999 p_1314->g_489 p_1314->g_1012 p_1314->g_686 p_1314->g_1000 p_1314->g_1116
 * writes: p_1314->g_51 p_1314->g_62 p_1314->g_86 p_1314->g_102 p_1314->g_2 p_1314->g_103 p_1314->g_155 p_1314->g_179 p_1314->g_182 p_1314->g_221 p_1314->g_222 p_1314->g_229 p_1314->g_268 p_1314->g_273 p_1314->g_283 p_1314->g_243 p_1314->g_307 p_1314->g_337 p_1314->g_338 p_1314->g_376 p_1314->g_261 p_1314->g_672 p_1314->g_684 p_1314->g_686 p_1314->g_696 p_1314->g_466 p_1314->g_752 p_1314->g_489 p_1314->g_53 p_1314->g_568 p_1314->g_864 p_1314->g_898 p_1314->g_816 p_1314->g_994 p_1314->g_999 p_1314->g_1116
 */
uint8_t  func_29(uint32_t  p_30, uint32_t  p_31, int64_t  p_32, struct S0 * p_1314)
{ /* block id: 19 */
    uint32_t l_47 = 0x17B4D2C2L;
    int32_t *l_50[8] = {&p_1314->g_51,&p_1314->g_51,&p_1314->g_51,&p_1314->g_51,&p_1314->g_51,&p_1314->g_51,&p_1314->g_51,&p_1314->g_51};
    uint64_t l_822 = 0x006E267A2D06242EL;
    int16_t *l_823 = &p_1314->g_466;
    int32_t *l_834 = &p_1314->g_337;
    int32_t *l_835 = &p_1314->g_86;
    uint64_t l_836 = 1UL;
    int32_t *l_1115 = &p_1314->g_1116;
    int32_t *l_1117 = &p_1314->g_1116;
    int32_t l_1118 = 0x10ED6A0BL;
    int32_t *l_1119[1][3][5];
    uint8_t l_1120[9] = {0xF7L,0x91L,0xF7L,0xF7L,0x91L,0xF7L,0xF7L,0x91L,0xF7L};
    int32_t l_1123[5][4][4] = {{{0L,(-4L),2L,0L},{0L,(-4L),2L,0L},{0L,(-4L),2L,0L},{0L,(-4L),2L,0L}},{{0L,(-4L),2L,0L},{0L,(-4L),2L,0L},{0L,(-4L),2L,0L},{0L,(-4L),2L,0L}},{{0L,(-4L),2L,0L},{0L,(-4L),2L,0L},{0L,(-4L),2L,0L},{0L,(-4L),2L,0L}},{{0L,(-4L),2L,0L},{0L,(-4L),2L,0L},{0L,(-4L),2L,0L},{0L,(-4L),2L,0L}},{{0L,(-4L),2L,0L},{0L,(-4L),2L,0L},{0L,(-4L),2L,0L},{0L,(-4L),2L,0L}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
                l_1119[i][j][k] = &p_1314->g_1116;
        }
    }
    (*l_1115) ^= (safe_mul_func_int16_t_s_s((p_30 | ((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(p_30, (func_39(((safe_add_func_int32_t_s_s(((*l_835) = ((*l_834) = ((l_47 == func_48((p_1314->g_51 = p_1314->g_3), p_1314)) , ((safe_lshift_func_int16_t_s_u(((*l_823) = l_822), (--(**p_1314->g_815)))) , (~((safe_lshift_func_int16_t_s_u((!(((-1L) > (safe_div_func_int8_t_s_s(p_32, (safe_sub_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u(p_1314->g_376, 0x71L)) , p_1314->g_182) > l_822) , p_32), p_30))))) && 0xECD66CCEL)), (*p_1314->g_816))) && 0L)))))), p_32)) , (void*)0), p_1314->g_3, l_836, p_1314->g_240, p_30, p_1314) & p_30))), p_1314->g_240)) , (*l_834))), p_32));
    --l_1120[6];
    return l_1123[0][1][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1314->g_816 p_1314->g_844 p_1314->g_672 p_1314->g_103 p_1314->g_51 p_1314->g_337 p_1314->g_864 p_1314->g_307 p_1314->g_268 p_1314->g_221 p_1314->g_908 p_1314->g_752 p_1314->g_671 p_1314->g_815 p_1314->g_954 p_1314->g_182 p_1314->g_684 p_1314->g_989 p_1314->g_338 p_1314->g_998 p_1314->g_999 p_1314->g_489 p_1314->g_1012 p_1314->g_10 p_1314->g_686 p_1314->g_13 p_1314->g_3 p_1314->g_155 p_1314->g_53 p_1314->g_86 p_1314->g_62 p_1314->g_261 p_1314->g_108 p_1314->g_61 p_1314->g_2 p_1314->g_102 p_1314->g_7 p_1314->g_179 p_1314->g_222 p_1314->g_229 p_1314->g_240 p_1314->g_466 p_1314->g_273 p_1314->g_281 p_1314->g_283 p_1314->g_403 p_1314->g_376 p_1314->g_468 p_1314->g_696 p_1314->g_568 p_1314->g_1000
 * writes: p_1314->g_568 p_1314->g_221 p_1314->g_103 p_1314->g_51 p_1314->g_337 p_1314->g_864 p_1314->g_62 p_1314->g_898 p_1314->g_307 p_1314->g_672 p_1314->g_376 p_1314->g_816 p_1314->g_994 p_1314->g_999 p_1314->g_222 p_1314->g_489 p_1314->g_752 p_1314->g_2 p_1314->g_155 p_1314->g_86 p_1314->g_179 p_1314->g_182 p_1314->g_229 p_1314->g_102 p_1314->g_268 p_1314->g_273 p_1314->g_283 p_1314->g_243 p_1314->g_338 p_1314->g_261 p_1314->g_684 p_1314->g_686 p_1314->g_696 p_1314->g_466
 */
uint64_t  func_39(int8_t * p_40, uint32_t  p_41, uint64_t  p_42, int32_t  p_43, int8_t  p_44, struct S0 * p_1314)
{ /* block id: 372 */
    uint32_t *l_841 = &p_1314->g_752;
    int32_t l_850 = 1L;
    int32_t l_859 = 0x0BE5ABF3L;
    int32_t l_860 = 0x6E01247CL;
    int32_t l_861 = 0L;
    int32_t l_862[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int64_t l_871 = 0L;
    int32_t *l_915 = &p_1314->g_103;
    int8_t *l_917 = &p_1314->g_7;
    int32_t l_920 = 0x6459B2D8L;
    uint8_t *l_972[5][6][3] = {{{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182}},{{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182}},{{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182}},{{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182}},{{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182},{(void*)0,&p_1314->g_483,&p_1314->g_182}}};
    uint64_t *l_996 = &p_1314->g_489;
    uint64_t **l_995 = &l_996;
    int32_t *l_1024 = &l_862[8];
    uint32_t l_1040 = 0x5A20846BL;
    int32_t *l_1054 = (void*)0;
    int i, j, k;
lbl_1114:
    for (p_1314->g_568 = 0; (p_1314->g_568 <= 3); p_1314->g_568 += 1)
    { /* block id: 375 */
        int32_t **l_846[7] = {&p_1314->g_845,&p_1314->g_845,&p_1314->g_845,&p_1314->g_845,&p_1314->g_845,&p_1314->g_845,&p_1314->g_845};
        int32_t ***l_847 = &l_846[4];
        int32_t l_851[6] = {0x3ED3CDFEL,(-1L),0x3ED3CDFEL,0x3ED3CDFEL,(-1L),0x3ED3CDFEL};
        int32_t ***l_852 = (void*)0;
        int32_t **l_854 = (void*)0;
        int32_t ***l_853 = &l_854;
        int32_t **l_856[1][4] = {{&p_1314->g_2,&p_1314->g_2,&p_1314->g_2,&p_1314->g_2}};
        int32_t ***l_855 = &l_856[0][3];
        uint64_t **l_893 = &p_1314->g_573;
        uint64_t ***l_892[6] = {&l_893,&l_893,&l_893,&l_893,&l_893,&l_893};
        uint64_t ****l_891 = &l_892[5];
        uint8_t l_895 = 8UL;
        int16_t *l_896 = (void*)0;
        int32_t l_906 = (-2L);
        int32_t *l_914[10] = {&p_1314->g_103,(void*)0,&p_1314->g_103,(void*)0,&p_1314->g_103,&p_1314->g_103,(void*)0,&p_1314->g_103,(void*)0,&p_1314->g_103};
        int64_t *l_927 = &l_871;
        int64_t l_1052 = 0x713DA5BC73A084B9L;
        int i, j;
        l_851[2] |= ((safe_lshift_func_int16_t_s_u(p_43, 15)) , (safe_add_func_uint64_t_u_u((((((*p_1314->g_816) = (&p_1314->g_338 != l_841)) > p_42) && (p_42 != 0UL)) , ((p_1314->g_844 != ((*l_847) = l_846[4])) , (safe_div_func_uint8_t_u_u((((+0x2C574D2395928928L) || 0x227DB659AD61918BL) , l_850), 0xF9L)))), 0x4408F1A3540E25F4L)));
        (*p_1314->g_672) &= p_44;
        if ((1UL <= (((*l_855) = ((*l_853) = (void*)0)) != &p_1314->g_2)))
        { /* block id: 382 */
            int32_t l_857 = 0x133FE3D5L;
            int32_t l_858 = (-7L);
            int32_t l_863[4];
            int16_t *l_878 = (void*)0;
            uint8_t *l_885 = &p_1314->g_62;
            uint32_t l_890[4][2] = {{4294967295UL,4294967295UL},{4294967295UL,4294967295UL},{4294967295UL,4294967295UL},{4294967295UL,4294967295UL}};
            int8_t *l_894[6][10] = {{&p_1314->g_684,&p_1314->g_283,&p_1314->g_283,&p_1314->g_684,&p_1314->g_696[0][1],&p_1314->g_283,&p_1314->g_7,(void*)0,&p_1314->g_696[2][1],&p_1314->g_684},{&p_1314->g_684,&p_1314->g_283,&p_1314->g_283,&p_1314->g_684,&p_1314->g_696[0][1],&p_1314->g_283,&p_1314->g_7,(void*)0,&p_1314->g_696[2][1],&p_1314->g_684},{&p_1314->g_684,&p_1314->g_283,&p_1314->g_283,&p_1314->g_684,&p_1314->g_696[0][1],&p_1314->g_283,&p_1314->g_7,(void*)0,&p_1314->g_696[2][1],&p_1314->g_684},{&p_1314->g_684,&p_1314->g_283,&p_1314->g_283,&p_1314->g_684,&p_1314->g_696[0][1],&p_1314->g_283,&p_1314->g_7,(void*)0,&p_1314->g_696[2][1],&p_1314->g_684},{&p_1314->g_684,&p_1314->g_283,&p_1314->g_283,&p_1314->g_684,&p_1314->g_696[0][1],&p_1314->g_283,&p_1314->g_7,(void*)0,&p_1314->g_696[2][1],&p_1314->g_684},{&p_1314->g_684,&p_1314->g_283,&p_1314->g_283,&p_1314->g_684,&p_1314->g_696[0][1],&p_1314->g_283,&p_1314->g_7,(void*)0,&p_1314->g_696[2][1],&p_1314->g_684}};
            int16_t **l_897 = (void*)0;
            int32_t *l_916 = (void*)0;
            int32_t *l_919 = &p_1314->g_86;
            int16_t l_921 = (-1L);
            int64_t *l_928 = &p_1314->g_307;
            int16_t *l_958 = &p_1314->g_222;
            int64_t l_983 = 0L;
            int i, j;
            for (i = 0; i < 4; i++)
                l_863[i] = 8L;
            --p_1314->g_864;
            if (((*p_1314->g_672) = (safe_mul_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_871 = 0x747C1EE3L), (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((l_878 == (p_1314->g_898[3][1] = (((safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((((safe_mod_func_uint8_t_u_u(((*l_885) = l_861), (l_895 = (l_850 = (safe_sub_func_uint8_t_u_u(p_1314->g_307, (l_890[0][0] <= ((p_44 , p_1314->g_268[3]) <= (l_891 != (void*)0))))))))) == (-2L)) | (-10L)) >= 0x59969E15L), p_42)), p_41)) == p_41) , l_896))), (*p_1314->g_816))), p_41)), 2UL)))), p_44))))
            { /* block id: 390 */
                uint8_t l_899 = 0UL;
                int64_t *l_907 = (void*)0;
                (*p_1314->g_672) = ((((p_43 == 1L) && l_899) && 0x9CE6CEC0CD670A49L) || (((((p_1314->g_307 &= ((safe_rshift_func_int8_t_s_s(p_43, 0)) | ((safe_add_func_uint8_t_u_u(0x5CL, l_862[7])) & (safe_mul_func_int8_t_s_s(l_862[8], ((l_906 &= p_41) | p_41)))))) == p_44) , 3L) , p_1314->g_908) == (*l_891)));
                (*p_1314->g_672) |= (safe_rshift_func_int8_t_s_s(l_899, 7));
                return p_1314->g_752;
            }
            else
            { /* block id: 396 */
                int32_t *l_913 = (void*)0;
                int32_t *l_918 = &l_850;
                (*p_1314->g_671) = &l_860;
                l_919 = l_918;
            }
            (*p_1314->g_672) = (l_920 , l_862[6]);
            if (p_43)
            { /* block id: 402 */
                uint32_t l_922[2][6] = {{4294967295UL,1UL,4294967295UL,1UL,4294967295UL,4294967295UL},{4294967295UL,1UL,4294967295UL,1UL,4294967295UL,4294967295UL}};
                int i, j;
                ++l_922[0][4];
                if (p_41)
                    break;
            }
            else
            { /* block id: 405 */
                int32_t ***l_935 = &l_846[4];
                uint8_t l_937 = 0xB1L;
                uint32_t l_938 = 0UL;
                uint16_t *l_944 = &p_1314->g_221;
                if ((**p_1314->g_671))
                { /* block id: 406 */
                    int64_t **l_929 = (void*)0;
                    int64_t **l_930 = &l_928;
                    uint64_t *l_936 = &p_1314->g_376;
                    uint32_t l_951 = 4294967295UL;
                    int32_t l_955 = (-1L);
                    int32_t *l_984 = &l_955;
                    if ((safe_sub_func_uint64_t_u_u(((l_860 , l_927) == ((*l_930) = l_928)), (l_937 = (((*p_1314->g_816) & (safe_rshift_func_int8_t_s_s((((+0UL) | ((*l_936) = (safe_add_func_uint64_t_u_u(((void*)0 != l_935), 0x58F8693902CB7C98L)))) >= (l_927 != &p_1314->g_61)), 3))) ^ p_41)))))
                    { /* block id: 410 */
                        uint16_t *l_943 = &p_1314->g_221;
                        int32_t l_948 = 0x4AF38060L;
                        ++l_938;
                        if (p_42)
                            continue;
                        l_955 ^= (p_42 || (l_861 = (0xC6726A8BL != (safe_mod_func_int64_t_s_s(((*l_927) = (p_41 & (+((((*p_1314->g_815) = l_943) == l_944) , ((safe_unary_minus_func_uint32_t_u(p_42)) , (((safe_mod_func_uint64_t_u_u(l_948, (((*l_943)++) || (l_951 <= (safe_lshift_func_int16_t_s_s(0x2FECL, p_1314->g_954)))))) , 0x12DAFD02L) , (*p_1314->g_672))))))), p_41)))));
                        if (l_948)
                            break;
                    }
                    else
                    { /* block id: 419 */
                        l_862[3] ^= ((*l_919) = (0L & ((*p_1314->g_672) , (safe_sub_func_int32_t_s_s((&p_1314->g_268[3] != l_958), 0x58523C93L)))));
                    }
                    for (p_1314->g_221 = 0; (p_1314->g_221 == 2); p_1314->g_221 = safe_add_func_int8_t_s_s(p_1314->g_221, 9))
                    { /* block id: 425 */
                        uint8_t **l_971 = (void*)0;
                        int32_t l_982 = 0x046EA9CBL;
                        (*l_919) = ((*p_1314->g_816) || (safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((l_862[6] = ((((((safe_div_func_uint16_t_u_u((((p_1314->g_307 != 5L) ^ (0UL | (((l_972[1][4][0] = p_40) != &p_1314->g_483) || ((p_43 & (((safe_add_func_int32_t_s_s(((*p_1314->g_816) ^ ((safe_lshift_func_uint8_t_u_u((+(safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((0x101F3953L >= p_44))), l_937))), p_41)) <= l_982)), p_43)) > (-1L)) <= p_1314->g_182)) == 0xCECDC1DA48DE5971L)))) <= l_983), 0xB93BL)) & p_42) , p_1314->g_684) < 0UL) <= l_951) != 1L)) > p_42), l_937)), l_951)) != l_938) > p_43) <= l_938), p_41)), p_1314->g_337)));
                        l_984 = (void*)0;
                        p_1314->g_994 = ((((safe_lshift_func_int8_t_s_u((3L & (((((*p_1314->g_671) != ((safe_mul_func_uint16_t_u_u(p_42, (p_1314->g_989 == (safe_add_func_int8_t_s_s((safe_div_func_int32_t_s_s(((((((l_860 | ((void*)0 == &l_982)) <= (+65528UL)) , (l_982 | p_44)) ^ p_44) , p_43) < 0xDFL), (*p_1314->g_672))), 7L))))) , (void*)0)) , 5UL) == p_43) | p_42)), p_1314->g_338)) , (**p_1314->g_815)) != l_938) ^ p_42);
                        l_984 = &l_955;
                    }
                    (*p_1314->g_998) = l_995;
                    for (l_871 = 28; (l_871 < (-21)); l_871--)
                    { /* block id: 436 */
                        return (**p_1314->g_999);
                    }
                }
                else
                { /* block id: 439 */
                    uint32_t l_1003 = 1UL;
                    int32_t l_1023 = 0x4BA446DBL;
                    for (l_860 = 3; (l_860 >= 0); l_860 -= 1)
                    { /* block id: 442 */
                        int64_t l_1022 = 0x1D51E20A818D4930L;
                        int i;
                        if ((*l_919))
                            break;
                        --l_1003;
                        l_1023 = ((*l_919) = ((((((l_861 = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((!(safe_sub_func_int8_t_s_s(p_42, 0x70L))), 11)), (((((void*)0 != p_1314->g_1012[1][4][0]) > (l_920 & (p_44 = (safe_lshift_func_int8_t_s_u(((((((((*l_958) = (safe_mul_func_uint8_t_u_u((l_958 == l_878), ((p_44 & ((((((safe_lshift_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(p_1314->g_10, p_43)), p_42)) >= l_1003) || p_41) , p_1314->g_686) , l_920) > p_44)) ^ p_44)))) , (-1L)) < (*p_1314->g_816)) > 0xAB62EF84A09C70FCL) <= 255UL) <= (-3L)) , l_937), p_44))))) == l_938) || 1UL))) ^ l_850)) >= p_42) < l_1022) & l_1003) != 0xDDF9E0E3L) , (-3L)));
                        if (l_1023)
                            break;
                    }
                    (*l_919) = (p_43 <= 1UL);
                }
                if ((*p_1314->g_13))
                    break;
            }
        }
        else
        { /* block id: 456 */
            uint64_t l_1037 = 0x71A34ECE891A842DL;
            int32_t l_1051 = 0x61DC6568L;
            uint64_t *l_1053 = &p_1314->g_376;
            l_1024 = &l_850;
            (*p_1314->g_468) = func_70((l_1054 = func_94((l_914[9] = &p_1314->g_103), ((safe_rshift_func_uint16_t_u_s((((safe_sub_func_uint64_t_u_u((--(**l_995)), (p_43 , (((safe_rshift_func_int8_t_s_u(((((&p_44 != (((safe_mod_func_uint32_t_u_u(4294967295UL, (safe_sub_func_uint32_t_u_u(((l_1037++) , (*l_1024)), (l_1040 , 0x3537DAFBL))))) | (((safe_mod_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((*l_1053) = (safe_sub_func_uint64_t_u_u((~(((safe_div_func_uint32_t_u_u((((((*l_841) = (p_1314->g_268[1] < (((*p_1314->g_672) = l_1051) < 0x2CEB9E17L))) != 4294967295UL) , (*l_1024)) < 0xB91B7184L), p_43)) & p_41) ^ l_1052)), p_1314->g_686))) <= (*l_1024)), (*l_1024))), (*l_1024))) != p_44), 0x72L)) && p_44) , p_42)) , (void*)0)) ^ 1UL) != 8L) || (*l_1024)), (*l_1024))) > p_42) , p_1314->g_268[3])))) , p_42) || (*p_1314->g_816)), 12)) , &p_1314->g_103), p_1314)), p_1314->g_466, l_915, p_1314);
        }
    }
    for (p_41 = (-4); (p_41 > 53); p_41 = safe_add_func_uint64_t_u_u(p_41, 3))
    { /* block id: 470 */
        int64_t l_1090 = 0x1D269B40E7049B62L;
        for (l_1040 = (-7); (l_1040 == 26); l_1040 = safe_add_func_int32_t_s_s(l_1040, 4))
        { /* block id: 473 */
            (*l_1024) = p_41;
        }
        for (p_1314->g_221 = 0; (p_1314->g_221 <= 1); p_1314->g_221 = safe_add_func_int32_t_s_s(p_1314->g_221, 7))
        { /* block id: 478 */
            uint8_t l_1075[2][5];
            int8_t l_1109 = 0x22L;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1075[i][j] = 0x8EL;
            }
            for (p_1314->g_155 = 0; (p_1314->g_155 <= 2); p_1314->g_155 += 1)
            { /* block id: 481 */
                int32_t l_1076 = 0x7BD20961L;
                int32_t l_1089 = (-2L);
                uint16_t **l_1091 = (void*)0;
                int32_t *l_1092[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1092[i] = &l_1089;
                l_861 = (safe_mod_func_int32_t_s_s((safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(65526UL, (((((*l_1024) = ((p_43 <= (safe_div_func_uint16_t_u_u(p_42, ((l_1076 = (safe_lshift_func_uint8_t_u_u((l_1075[0][1] && (&l_972[0][5][2] == &l_972[3][4][1])), p_43))) | (safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(0x9C48L, 7)) < (safe_lshift_func_int16_t_s_u((((safe_div_func_uint8_t_u_u(((((*p_1314->g_672) ^= ((safe_mod_func_uint16_t_u_u(l_1075[0][1], (*l_1024))) , l_1089)) | 0UL) ^ p_41), 0xA2L)) == 0L) == 1UL), p_42))), 0x53D7FAB9L)), l_1090)))))) >= 1L)) < p_1314->g_568) , l_1091) == (void*)0))), 0x42D5L)), p_44)), 0x45E274D4L));
                (*p_1314->g_672) |= ((void*)0 == &l_915);
                if (l_1090)
                    continue;
            }
            (*p_1314->g_672) = ((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(p_43, (p_44 = (safe_mul_func_uint8_t_u_u((!(p_41 ^ (*l_1024))), ((safe_sub_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u(((0L | ((((safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u(((((*l_841) &= 0x2E102D06L) && (((safe_mul_func_uint16_t_u_u(((*l_1024) >= (l_1109 , (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(l_1090, 5)), 0x0D66L)))), 0x8BA2L)) == (*l_1024)) > p_1314->g_337)) , 0x78L), l_1090)), (*p_1314->g_13))) , l_1090) != p_42) , p_44)) && (**p_1314->g_815)), (-2L))) ^ (*p_1314->g_816)), p_1314->g_103)) > (-1L))))))), p_42)) && 0x5B52628EC4B7EAECL);
            (*p_1314->g_672) &= ((((*l_1024) |= p_44) < ((void*)0 == l_996)) | p_42);
        }
        if (p_1314->g_337)
            goto lbl_1114;
        return p_41;
    }
    return (*p_1314->g_1000);
}


/* ------------------------------------------ */
/* 
 * reads : p_1314->g_62 p_1314->g_53 p_1314->g_51 p_1314->g_13 p_1314->g_3 p_1314->g_86 p_1314->g_108 p_1314->g_61 p_1314->g_10 p_1314->g_2 p_1314->g_103 p_1314->g_155 p_1314->g_102 p_1314->g_7 p_1314->g_182 p_1314->g_179 p_1314->g_222 p_1314->g_229 p_1314->g_240 p_1314->g_261 p_1314->g_273 p_1314->g_281 p_1314->g_283 p_1314->g_268 p_1314->g_221 p_1314->g_337 p_1314->g_338 p_1314->g_307 p_1314->g_403 p_1314->g_376 p_1314->g_466 p_1314->g_468 p_1314->g_671 p_1314->g_696 p_1314->g_672 p_1314->g_752 p_1314->g_568 p_1314->g_684 p_1314->g_815
 * writes: p_1314->g_62 p_1314->g_51 p_1314->g_86 p_1314->g_102 p_1314->g_2 p_1314->g_103 p_1314->g_155 p_1314->g_179 p_1314->g_182 p_1314->g_221 p_1314->g_222 p_1314->g_229 p_1314->g_268 p_1314->g_273 p_1314->g_283 p_1314->g_243 p_1314->g_307 p_1314->g_337 p_1314->g_338 p_1314->g_376 p_1314->g_261 p_1314->g_672 p_1314->g_684 p_1314->g_686 p_1314->g_696 p_1314->g_466 p_1314->g_752 p_1314->g_489 p_1314->g_53
 */
uint64_t  func_48(int32_t  p_49, struct S0 * p_1314)
{ /* block id: 21 */
    int32_t *l_52 = &p_1314->g_53;
    int32_t *l_54 = (void*)0;
    int32_t *l_55 = &p_1314->g_53;
    int32_t *l_56 = &p_1314->g_53;
    int32_t *l_57 = &p_1314->g_53;
    int32_t l_58 = (-1L);
    int32_t *l_59[3][2] = {{&l_58,&l_58},{&l_58,&l_58},{&l_58,&l_58}};
    int8_t l_60 = 0x54L;
    int32_t *l_80[9][9] = {{(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,&p_1314->g_51},{(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,&p_1314->g_51},{(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,&p_1314->g_51},{(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,&p_1314->g_51},{(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,&p_1314->g_51},{(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,&p_1314->g_51},{(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,&p_1314->g_51},{(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,&p_1314->g_51},{(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,(void*)0,&p_1314->g_51,&p_1314->g_51}};
    uint8_t *l_751 = &p_1314->g_229;
    uint16_t **l_770 = (void*)0;
    uint16_t l_787[3];
    uint64_t **l_813 = &p_1314->g_573;
    uint64_t ***l_812 = &l_813;
    int i, j;
    for (i = 0; i < 3; i++)
        l_787[i] = 0x95B8L;
    p_1314->g_62--;
    if ((p_1314->g_752 |= (p_1314->g_53 > ((*l_751) = (safe_sub_func_uint32_t_u_u(func_67(l_52, (p_49 , func_70(&p_1314->g_53, (p_1314->g_51 = (safe_sub_func_int8_t_s_s(p_1314->g_62, (safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(8L, ((&l_60 == &l_60) , 0x01CA9286L))), p_49))))), l_59[1][0], p_1314)), p_1314), (-3L)))))))
    { /* block id: 350 */
        uint32_t l_771 = 0x3B670D85L;
        int32_t **l_782 = (void*)0;
        int32_t *l_783 = &p_1314->g_240;
        uint64_t *l_784 = &p_1314->g_489;
        uint32_t l_785 = 4294967295UL;
        int32_t l_786 = 0x44BAA014L;
        uint64_t *l_788[3][3][3] = {{{&p_1314->g_376,&p_1314->g_376,&p_1314->g_376},{&p_1314->g_376,&p_1314->g_376,&p_1314->g_376},{&p_1314->g_376,&p_1314->g_376,&p_1314->g_376}},{{&p_1314->g_376,&p_1314->g_376,&p_1314->g_376},{&p_1314->g_376,&p_1314->g_376,&p_1314->g_376},{&p_1314->g_376,&p_1314->g_376,&p_1314->g_376}},{{&p_1314->g_376,&p_1314->g_376,&p_1314->g_376},{&p_1314->g_376,&p_1314->g_376,&p_1314->g_376},{&p_1314->g_376,&p_1314->g_376,&p_1314->g_376}}};
        int32_t l_789 = 0x1C7A112FL;
        int16_t *l_790 = &p_1314->g_273;
        int32_t l_791 = 0x32BBC797L;
        int i, j, k;
        l_791 |= (safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(((*l_790) = ((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((((l_789 = ((safe_mod_func_uint64_t_u_u(((l_786 ^= ((safe_unary_minus_func_uint8_t_u((safe_mul_func_int16_t_s_s(0x07C1L, (safe_div_func_int64_t_s_s((((p_1314->g_268[3] , l_770) == l_770) >= ((p_1314->g_51 & ((l_771 & p_49) || (safe_rshift_func_int8_t_s_u((((safe_div_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((((*l_784) = (safe_mul_func_uint8_t_u_u(((l_783 = (void*)0) != &p_1314->g_240), p_49))) ^ p_1314->g_10), p_49)), l_771)) , p_1314->g_752) | (-1L)), 0xE00DDE8BL)) <= 1UL) || p_49), 3)))) | l_771)), l_785)))))) , (*l_56))) & p_49), p_1314->g_222)) != l_787[1])) == p_1314->g_86) <= p_49), p_49)) == (*l_57)), 1UL)), p_1314->g_568)) != p_1314->g_684)), 0UL)), l_771));
        return p_1314->g_86;
    }
    else
    { /* block id: 358 */
        int32_t l_792 = 0x43458578L;
        int32_t l_793 = 0x5D3BD49DL;
        int32_t l_794 = (-7L);
        int32_t l_795 = (-1L);
        int32_t l_796 = 7L;
        int32_t l_797[10][5] = {{(-10L),(-10L),0x133C4892L,0x78A58AFEL,0x109C94F7L},{(-10L),(-10L),0x133C4892L,0x78A58AFEL,0x109C94F7L},{(-10L),(-10L),0x133C4892L,0x78A58AFEL,0x109C94F7L},{(-10L),(-10L),0x133C4892L,0x78A58AFEL,0x109C94F7L},{(-10L),(-10L),0x133C4892L,0x78A58AFEL,0x109C94F7L},{(-10L),(-10L),0x133C4892L,0x78A58AFEL,0x109C94F7L},{(-10L),(-10L),0x133C4892L,0x78A58AFEL,0x109C94F7L},{(-10L),(-10L),0x133C4892L,0x78A58AFEL,0x109C94F7L},{(-10L),(-10L),0x133C4892L,0x78A58AFEL,0x109C94F7L},{(-10L),(-10L),0x133C4892L,0x78A58AFEL,0x109C94F7L}};
        uint32_t l_798[3];
        uint64_t **l_810 = &p_1314->g_573;
        uint64_t ***l_809[7][10][3] = {{{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0}},{{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0}},{{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0}},{{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0}},{{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0}},{{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0}},{{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0},{&l_810,&l_810,(void*)0}}};
        uint64_t ****l_811 = &l_809[3][4][1];
        uint64_t ****l_814[8] = {&l_812,&l_812,&l_812,&l_812,&l_812,&l_812,&l_812,&l_812};
        int32_t **l_817 = &l_80[4][7];
        int32_t *l_818 = &p_1314->g_103;
        int32_t **l_819 = &l_54;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_798[i] = 4294967286UL;
        l_792 |= 0x0F6E59A1L;
        l_798[0]--;
        (*l_56) = ((safe_add_func_uint16_t_u_u((4294967295UL || (6L && l_793)), (safe_sub_func_int8_t_s_s((!((~18446744073709551614UL) , l_794)), ((safe_lshift_func_int8_t_s_s((*l_57), ((safe_sub_func_uint32_t_u_u((((((((*l_811) = l_809[6][6][0]) == (l_812 = l_812)) <= (*l_57)) > l_798[0]) == 0x61EDL) || l_792), p_49)) || l_797[6][2]))) , 1L))))) <= p_1314->g_155);
        (*l_819) = func_70(&l_58, (l_770 != p_1314->g_815), func_97(&p_1314->g_51, ((*l_817) = &p_49), l_818, &l_60, p_1314), p_1314);
    }
    return p_49;
}


/* ------------------------------------------ */
/* 
 * reads : p_1314->g_283 p_1314->g_672 p_1314->g_103 p_1314->g_51 p_1314->g_337 p_1314->g_62 p_1314->g_179
 * writes: p_1314->g_283 p_1314->g_103 p_1314->g_51 p_1314->g_337 p_1314->g_155 p_1314->g_2 p_1314->g_62 p_1314->g_179
 */
uint32_t  func_67(int32_t * p_68, int32_t * p_69, struct S0 * p_1314)
{ /* block id: 314 */
    int32_t *l_706[2];
    int32_t l_747 = (-1L);
    uint8_t l_748 = 7UL;
    int i;
    for (i = 0; i < 2; i++)
        l_706[i] = &p_1314->g_53;
    for (p_1314->g_283 = 5; (p_1314->g_283 >= 0); p_1314->g_283 -= 1)
    { /* block id: 317 */
        int8_t l_705 = 0x7CL;
        int32_t l_742 = 1L;
        (*p_1314->g_672) ^= l_705;
        for (p_1314->g_155 = 0; (p_1314->g_155 <= 5); p_1314->g_155 += 1)
        { /* block id: 321 */
            int32_t **l_707 = &p_1314->g_2;
            int32_t **l_708 = &l_706[0];
            int32_t *l_735 = &p_1314->g_51;
            int32_t **l_736 = &l_735;
            uint8_t l_741 = 0x5AL;
            uint8_t l_743 = 0x8FL;
            int32_t *l_744 = &p_1314->g_240;
            uint16_t *l_745 = (void*)0;
            int i, j;
            (*l_708) = ((*l_707) = l_706[0]);
        }
    }
    for (p_1314->g_62 = 0; (p_1314->g_62 <= 1); p_1314->g_62 += 1)
    { /* block id: 339 */
        for (p_1314->g_179 = 0; (p_1314->g_179 <= 1); p_1314->g_179 += 1)
        { /* block id: 342 */
            uint8_t l_746 = 0xABL;
            return l_746;
        }
    }
    l_748++;
    return p_1314->g_103;
}


/* ------------------------------------------ */
/* 
 * reads : p_1314->g_53 p_1314->g_51 p_1314->g_13 p_1314->g_3 p_1314->g_86 p_1314->g_108 p_1314->g_61 p_1314->g_10 p_1314->g_2 p_1314->g_103 p_1314->g_155 p_1314->g_62 p_1314->g_102 p_1314->g_7 p_1314->g_182 p_1314->g_179 p_1314->g_222 p_1314->g_229 p_1314->g_240 p_1314->g_261 p_1314->g_273 p_1314->g_281 p_1314->g_283 p_1314->g_268 p_1314->g_221 p_1314->g_337 p_1314->g_338 p_1314->g_307 p_1314->g_403 p_1314->g_376 p_1314->g_466 p_1314->g_468 p_1314->g_671 p_1314->g_696
 * writes: p_1314->g_51 p_1314->g_62 p_1314->g_86 p_1314->g_102 p_1314->g_2 p_1314->g_103 p_1314->g_155 p_1314->g_179 p_1314->g_182 p_1314->g_221 p_1314->g_222 p_1314->g_229 p_1314->g_268 p_1314->g_273 p_1314->g_283 p_1314->g_243 p_1314->g_307 p_1314->g_337 p_1314->g_338 p_1314->g_376 p_1314->g_261 p_1314->g_672 p_1314->g_684 p_1314->g_686 p_1314->g_696 p_1314->g_466
 */
int32_t * func_70(int32_t * p_71, int32_t  p_72, int32_t * p_73, struct S0 * p_1314)
{ /* block id: 24 */
    int64_t l_276 = 1L;
    int32_t l_365 = 0x08BE3FEFL;
    uint16_t *l_366[7][9] = {{&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,(void*)0,&p_1314->g_221,&p_1314->g_221,(void*)0},{&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,(void*)0,&p_1314->g_221,&p_1314->g_221,(void*)0},{&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,(void*)0,&p_1314->g_221,&p_1314->g_221,(void*)0},{&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,(void*)0,&p_1314->g_221,&p_1314->g_221,(void*)0},{&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,(void*)0,&p_1314->g_221,&p_1314->g_221,(void*)0},{&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,(void*)0,&p_1314->g_221,&p_1314->g_221,(void*)0},{&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,&p_1314->g_221,(void*)0,&p_1314->g_221,&p_1314->g_221,(void*)0}};
    int32_t *l_400 = &p_1314->g_51;
    int32_t *l_433[5] = {&l_365,&l_365,&l_365,&l_365,&l_365};
    uint32_t l_440 = 0xC6CD710AL;
    uint64_t *l_448 = &p_1314->g_376;
    int8_t *l_479 = &p_1314->g_283;
    uint32_t l_566 = 0x6CA7FEBFL;
    int32_t **l_603 = &l_400;
    int32_t ***l_602[8] = {&l_603,&l_603,&l_603,&l_603,&l_603,&l_603,&l_603,&l_603};
    int32_t l_651 = 0x34AD9BC3L;
    int8_t *l_683 = &p_1314->g_684;
    int8_t *l_685 = &p_1314->g_686;
    uint8_t l_693 = 0UL;
    int8_t *l_694 = (void*)0;
    int8_t *l_695 = &p_1314->g_696[0][1];
    uint16_t l_697 = 65535UL;
    int32_t l_698 = 0x627BA878L;
    uint8_t l_699 = 0x79L;
    uint8_t l_700 = 0UL;
    int i, j;
    if ((*p_71))
    { /* block id: 25 */
        int16_t l_271 = 0x6F88L;
        uint8_t *l_379[10] = {&p_1314->g_62,&p_1314->g_229,&p_1314->g_62,&p_1314->g_229,&p_1314->g_62,&p_1314->g_62,&p_1314->g_229,&p_1314->g_62,&p_1314->g_229,&p_1314->g_62};
        int32_t *l_432 = (void*)0;
        int32_t **l_435 = &l_432;
        int i;
        for (p_1314->g_51 = 0; (p_1314->g_51 < 7); p_1314->g_51 = safe_add_func_uint64_t_u_u(p_1314->g_51, 3))
        { /* block id: 28 */
            int8_t *l_275 = &p_1314->g_10;
            int32_t l_364 = 0x3CC9911BL;
            int32_t l_399[6];
            uint16_t **l_417 = &l_366[6][8];
            int i;
            for (i = 0; i < 6; i++)
                l_399[i] = 1L;
            for (p_1314->g_62 = 25; (p_1314->g_62 <= 18); p_1314->g_62 = safe_sub_func_int16_t_s_s(p_1314->g_62, 7))
            { /* block id: 31 */
                int32_t *l_85 = &p_1314->g_86;
                int8_t *l_107 = &p_1314->g_10;
                int32_t l_418 = 0x4820B1F8L;
                if (((*l_85) &= (*p_1314->g_13)))
                { /* block id: 33 */
                    uint16_t l_87[8][5][5] = {{{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L}},{{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L}},{{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L}},{{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L}},{{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L}},{{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L}},{{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L}},{{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L},{0xCFCBL,1UL,0xC8B8L,0x4B98L,0x4B74L}}};
                    int i, j, k;
                    for (p_72 = 0; (p_72 <= 4); p_72 += 1)
                    { /* block id: 36 */
                        int32_t **l_104 = (void*)0;
                        int32_t *l_106[5];
                        int32_t **l_105 = &l_106[0];
                        int32_t **l_264[1][8] = {{&l_85,&l_85,&l_85,&l_85,&l_85,&l_85,&l_85,&l_85}};
                        int16_t *l_267 = &p_1314->g_268[3];
                        int16_t *l_272 = &p_1314->g_273;
                        int32_t l_274 = 0x2DCF4C4EL;
                        uint32_t *l_341[2][2];
                        uint8_t *l_360 = &p_1314->g_182;
                        int64_t *l_361 = &l_276;
                        uint16_t *l_363 = &l_87[6][0][3];
                        uint16_t **l_362 = &l_363;
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_106[i] = &p_1314->g_51;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_341[i][j] = (void*)0;
                        }
                        p_1314->g_338 &= func_88((p_71 = func_94(&p_1314->g_51, func_97(l_85, &p_72, ((*l_105) = (p_1314->g_102 = &p_1314->g_51)), l_107, p_1314), p_1314)), ((l_274 = ((*l_272) |= (safe_lshift_func_uint16_t_u_u((((((*l_267) = l_87[p_72][p_72][p_72]) <= (((((safe_mod_func_uint8_t_u_u((((((l_87[p_72][p_72][p_72] >= p_72) <= 0x463CA252AE98F465L) >= p_72) ^ l_271) , p_1314->g_3), p_1314->g_51)) <= 0x5A53A13BL) ^ p_1314->g_51) , 0x08B88E97L) & 1UL)) & p_1314->g_3) < p_72), p_72)))) , p_72), l_275, &p_1314->g_53, l_276, p_1314);
                        l_365 = (((*l_267) = ((((+((*l_85) |= (safe_add_func_int16_t_s_s(((*l_272) = p_1314->g_62), 0L)))) , (((-8L) & (!(safe_mod_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(((*l_85) = (0x26209F7CL | ((((safe_rshift_func_uint16_t_u_s(65527UL, ((((p_72 <= ((*l_361) = ((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(p_1314->g_229, ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((*l_360) = (p_72 , p_72)), 0)), 4294967295UL)) , p_72))), p_1314->g_338)), p_72)) >= p_1314->g_155))) | p_1314->g_221) , 0x4BA04C1C445802C0L) , (-8L)))) , (-3L)) , l_362) != (void*)0))), 0x5E05E415L)), 0x7F4EC64AD36B8790L)))) & p_1314->g_155)) < p_1314->g_103) >= l_364)) , (*p_1314->g_2));
                        (*l_85) = (l_366[0][7] != (void*)0);
                        (*l_85) = (*p_71);
                    }
                }
                else
                { /* block id: 153 */
                    uint32_t l_373 = 4UL;
                    int32_t l_396[1];
                    int32_t *l_402 = &p_1314->g_103;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_396[i] = 0x1158F80DL;
                    for (p_1314->g_283 = 0; (p_1314->g_283 >= (-8)); p_1314->g_283 = safe_sub_func_uint64_t_u_u(p_1314->g_283, 8))
                    { /* block id: 156 */
                        uint64_t *l_374 = (void*)0;
                        uint64_t *l_375 = &p_1314->g_376;
                        uint32_t *l_397 = (void*)0;
                        uint32_t *l_398 = &p_1314->g_338;
                        int8_t *l_401 = &p_1314->g_283;
                        (*l_85) = ((safe_rshift_func_uint16_t_u_u(p_1314->g_240, ((((*l_375) = (safe_rshift_func_int8_t_s_s((l_373 |= 0x5FL), 1))) <= ((*p_71) > ((safe_mod_func_int32_t_s_s((-10L), ((((void*)0 == l_379[8]) >= 4294967295UL) && (safe_rshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((((p_1314->g_229 != (((*l_398) = (safe_mod_func_int64_t_s_s((((safe_add_func_int64_t_s_s((safe_mod_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(l_396[0], 5)), 1L)), 0x3D20L)), (-1L))) >= p_1314->g_103) , l_276), p_72))) == p_1314->g_61)) && l_396[0]) , p_72) ^ 1L) ^ p_1314->g_86), 9)), p_1314->g_307)) , (*l_85)), 11))))) != 0x0AL))) >= p_1314->g_229))) >= p_72);
                        (*p_1314->g_403) = (p_71 = func_94((p_1314->g_3 , func_94(l_402, &p_1314->g_103, p_1314)), &p_1314->g_51, p_1314));
                        (*p_71) = (safe_div_func_int8_t_s_s((*l_85), p_1314->g_86));
                    }
                    if ((*l_85))
                        break;
                }
                for (l_271 = 0; (l_271 < 22); l_271 = safe_add_func_int64_t_s_s(l_271, 7))
                { /* block id: 169 */
                    uint16_t **l_416 = &l_366[0][7];
                    int32_t **l_419 = &l_85;
                    (1 + 1);
                }
                l_365 = (p_1314->g_179 | ((((safe_rshift_func_uint8_t_u_u(((p_1314->g_103 , (safe_add_func_int64_t_s_s(((*l_85) < ((((+((*l_85) , (safe_rshift_func_int8_t_s_s(((((0x0C5AL ^ 1L) , (safe_mul_func_uint8_t_u_u(l_365, ((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((3L > (p_72 , p_1314->g_7)) >= (-3L)) < 0x32B89AA06428539DL), 0x87L)), p_1314->g_376)) , (*l_85))))) , (void*)0) != (void*)0), p_1314->g_3)))) && l_271) > 0L) == (*p_71))), p_72))) && p_1314->g_3), 3)) != p_1314->g_268[3]) , 0L) , p_72));
                return p_73;
            }
            if (l_276)
                continue;
        }
        (*l_435) = (l_433[4] = l_432);
    }
    else
    { /* block id: 182 */
        uint32_t l_436 = 0x99982131L;
        uint8_t *l_439[4][2][8];
        int32_t l_443[5][3] = {{0x6292D70AL,0x6292D70AL,0x6292D70AL},{0x6292D70AL,0x6292D70AL,0x6292D70AL},{0x6292D70AL,0x6292D70AL,0x6292D70AL},{0x6292D70AL,0x6292D70AL,0x6292D70AL},{0x6292D70AL,0x6292D70AL,0x6292D70AL}};
        int32_t *l_477 = &p_1314->g_103;
        int64_t l_484 = (-8L);
        uint32_t l_524 = 4294967288UL;
        int32_t l_528 = 0x06CD2A6AL;
        uint64_t **l_607 = &p_1314->g_575;
        int64_t *l_664[7];
        uint32_t l_667 = 1UL;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 8; k++)
                    l_439[i][j][k] = &p_1314->g_229;
            }
        }
        for (i = 0; i < 7; i++)
            l_664[i] = (void*)0;
lbl_444:
        ++l_436;
        if ((l_443[1][0] |= (247UL & (++l_440))))
        { /* block id: 186 */
            if (p_1314->g_62)
                goto lbl_444;
        }
        else
        { /* block id: 188 */
            uint64_t *l_447 = &p_1314->g_376;
            int32_t l_449 = 0x21A031D1L;
            int32_t l_450 = (-2L);
            int32_t l_467 = 8L;
            int32_t *l_476[9] = {&p_1314->g_103,&p_1314->g_103,&p_1314->g_103,&p_1314->g_103,&p_1314->g_103,&p_1314->g_103,&p_1314->g_103,&p_1314->g_103,&p_1314->g_103};
            uint64_t **l_606 = (void*)0;
            int32_t **l_670 = &p_1314->g_2;
            int i;
            if ((0x0BA3940CL | (safe_mod_func_int32_t_s_s(((((p_72 > (65535UL != (l_447 != l_448))) ^ (l_450 = (l_449 &= 0x5D6356D9L))) != (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_int64_t_s((p_1314->g_273 == ((p_72 > (safe_div_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((((((safe_rshift_func_uint8_t_u_u(((((safe_div_func_uint8_t_u_u((254UL <= p_1314->g_337), 0x17L)) , p_1314->g_155) || 0x51D7L) > p_1314->g_466), 1)) < p_72) & 0x21L) <= l_436) , (void*)0) == (void*)0), l_467)), p_72)), p_1314->g_86))) | p_72)))), 12)), p_72))) < p_1314->g_283), l_467))))
            { /* block id: 191 */
                for (p_1314->g_376 = 0; (p_1314->g_376 <= 4); p_1314->g_376 += 1)
                { /* block id: 194 */
                    return p_73;
                }
                (*p_1314->g_468) = &l_450;
                for (p_1314->g_86 = 0; (p_1314->g_86 != 9); ++p_1314->g_86)
                { /* block id: 200 */
                    int32_t **l_471 = &l_433[4];
                    (*l_471) = p_73;
                }
            }
            else
            { /* block id: 203 */
                int32_t **l_473 = &l_433[3];
                int32_t **l_474[5][2] = {{&p_1314->g_261,&p_1314->g_261},{&p_1314->g_261,&p_1314->g_261},{&p_1314->g_261,&p_1314->g_261},{&p_1314->g_261,&p_1314->g_261},{&p_1314->g_261,&p_1314->g_261}};
                int16_t l_475 = 0x0F94L;
                int8_t *l_478 = &p_1314->g_283;
                uint32_t l_503[7][4][6] = {{{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L}},{{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L}},{{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L}},{{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L}},{{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L}},{{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L}},{{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L},{0x551804D6L,0x4FC28B50L,0x551804D6L,0x551804D6L,0x4FC28B50L,0x551804D6L}}};
                int32_t l_562 = (-1L);
                uint32_t l_580 = 4294967288UL;
                uint64_t **l_609 = &p_1314->g_573;
                int8_t l_649 = 0x51L;
                int i, j, k;
                (*l_473) = &l_443[4][1];
                (*l_473) = func_94(&p_1314->g_51, func_97(&p_1314->g_103, (p_1314->g_261 = &p_1314->g_51), &p_1314->g_103, ((p_71 != ((1UL ^ l_475) , (void*)0)) , (l_479 = (((l_476[0] == l_477) && p_1314->g_7) , l_478))), p_1314), p_1314);
                for (l_475 = 3; (l_475 >= 0); l_475 -= 1)
                { /* block id: 210 */
                    int32_t l_490 = 0L;
                    int32_t *l_506 = &p_1314->g_103;
                    int32_t l_525 = (-1L);
                    uint64_t *l_576 = (void*)0;
                    int i;
                    (1 + 1);
                }
                for (l_450 = 0; (l_450 != 7); l_450 = safe_add_func_uint16_t_u_u(l_450, 9))
                { /* block id: 250 */
                    int32_t ***l_601 = &l_474[2][0];
                    int8_t *l_618 = &p_1314->g_7;
                    int32_t l_630 = (-5L);
                    int32_t l_650 = 1L;
                    if ((*p_1314->g_2))
                        break;
                }
            }
            for (l_667 = 0; (l_667 >= 1); l_667 = safe_add_func_int16_t_s_s(l_667, 4))
            { /* block id: 291 */
                return p_73;
            }
            (*p_1314->g_671) = ((*l_670) = func_97(&p_1314->g_103, ((*l_603) = &p_72), &p_1314->g_103, l_479, p_1314));
            (**l_670) = (*p_71);
        }
    }
    l_699 |= (safe_add_func_int8_t_s_s(((((((*l_685) = ((*l_683) = ((*l_479) = ((safe_add_func_uint16_t_u_u(p_1314->g_86, p_72)) != (safe_div_func_uint16_t_u_u(p_1314->g_103, ((p_1314->g_221 = (safe_rshift_func_int16_t_s_s(((void*)0 == &p_1314->g_10), 5))) , (--p_1314->g_221)))))))) >= ((((safe_rshift_func_int16_t_s_u(((((0x0C44B3C485E78482L && p_1314->g_10) || (((*l_695) ^= (safe_sub_func_int8_t_s_s(p_72, (safe_rshift_func_int16_t_s_s(l_693, 5))))) ^ 0x36L)) == 0x1AD4L) != 1UL), 1)) , (*p_71)) < l_697) <= p_72)) >= 0x1EA1D85BL) >= 0x77E0L) > 0x7FBAL), l_698));
    l_700--;
    for (p_1314->g_466 = 0; (p_1314->g_466 != 6); p_1314->g_466++)
    { /* block id: 310 */
        for (p_1314->g_179 = 0; p_1314->g_179 < 5; p_1314->g_179 += 1)
        {
            p_1314->g_268[p_1314->g_179] = 0x42F4L;
        }
    }
    return (*p_1314->g_108);
}


/* ------------------------------------------ */
/* 
 * reads : p_1314->g_103 p_1314->g_281 p_1314->g_53 p_1314->g_108 p_1314->g_2 p_1314->g_51 p_1314->g_283 p_1314->g_268 p_1314->g_222 p_1314->g_10 p_1314->g_273 p_1314->g_221 p_1314->g_155 p_1314->g_86 p_1314->g_62 p_1314->g_261 p_1314->g_61 p_1314->g_3 p_1314->g_102 p_1314->g_7 p_1314->g_182 p_1314->g_179 p_1314->g_13 p_1314->g_229 p_1314->g_240 p_1314->g_337
 * writes: p_1314->g_103 p_1314->g_283 p_1314->g_179 p_1314->g_243 p_1314->g_86 p_1314->g_307 p_1314->g_2 p_1314->g_155 p_1314->g_182 p_1314->g_221 p_1314->g_222 p_1314->g_229 p_1314->g_337
 */
int32_t  func_88(int32_t * p_89, uint64_t  p_90, int8_t * p_91, int32_t * p_92, int64_t  p_93, struct S0 * p_1314)
{ /* block id: 116 */
    uint16_t l_287[9][2][8] = {{{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL},{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL}},{{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL},{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL}},{{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL},{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL}},{{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL},{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL}},{{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL},{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL}},{{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL},{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL}},{{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL},{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL}},{{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL},{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL}},{{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL},{65535UL,0x12C0L,0x27C9L,65535UL,0x2EF2L,65535UL,0x2AD8L,0xED3AL}}};
    uint8_t l_305 = 0UL;
    int32_t *l_308[7] = {&p_1314->g_103,&p_1314->g_103,&p_1314->g_103,&p_1314->g_103,&p_1314->g_103,&p_1314->g_103,&p_1314->g_103};
    int8_t l_321 = 0x34L;
    int32_t l_334 = 8L;
    int32_t *l_335 = &p_1314->g_86;
    int32_t *l_336 = &p_1314->g_337;
    int i, j, k;
    for (p_1314->g_103 = 2; (p_1314->g_103 <= 0); p_1314->g_103 = safe_sub_func_int32_t_s_s(p_1314->g_103, 6))
    { /* block id: 119 */
        int8_t *l_282[3][7] = {{&p_1314->g_7,&p_1314->g_10,&p_1314->g_7,&p_1314->g_7,&p_1314->g_10,&p_1314->g_7,&p_1314->g_7},{&p_1314->g_7,&p_1314->g_10,&p_1314->g_7,&p_1314->g_7,&p_1314->g_10,&p_1314->g_7,&p_1314->g_7},{&p_1314->g_7,&p_1314->g_10,&p_1314->g_7,&p_1314->g_7,&p_1314->g_10,&p_1314->g_7,&p_1314->g_7}};
        int32_t l_284[2];
        int32_t l_288 = 0x78C1057DL;
        int32_t **l_294[3][2] = {{&p_1314->g_2,&p_1314->g_2},{&p_1314->g_2,&p_1314->g_2},{&p_1314->g_2,&p_1314->g_2}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_284[i] = 0x1462849AL;
        if ((safe_sub_func_int8_t_s_s(((l_284[1] = ((void*)0 == p_1314->g_281)) < 0x14L), (safe_rshift_func_uint16_t_u_s((l_287[6][0][5] >= l_288), 14)))))
        { /* block id: 121 */
            return (*p_92);
        }
        else
        { /* block id: 123 */
            uint64_t l_293[2];
            int i;
            for (i = 0; i < 2; i++)
                l_293[i] = 18446744073709551606UL;
            l_293[1] ^= (safe_add_func_int32_t_s_s((4UL && 0L), (safe_add_func_int32_t_s_s((**p_1314->g_108), l_284[1]))));
        }
        p_89 = (void*)0;
    }
    for (p_1314->g_283 = 0; (p_1314->g_283 <= 4); p_1314->g_283 += 1)
    { /* block id: 130 */
        int32_t l_301 = 0L;
        uint16_t *l_302 = &p_1314->g_221;
        int32_t *l_303 = (void*)0;
        int32_t *l_304[1][3][8] = {{{&p_1314->g_3,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1314->g_3,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_1314->g_3,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int64_t *l_306 = &p_1314->g_307;
        int32_t **l_309 = &l_308[2];
        int32_t **l_311 = (void*)0;
        int32_t **l_312 = &l_303;
        int i, j, k;
        for (p_1314->g_179 = 0; p_1314->g_179 < 7; p_1314->g_179 += 1)
        {
            p_1314->g_243[p_1314->g_179] = &p_1314->g_2;
        }
        (*l_312) = func_97(func_94(((*l_309) = func_94((((*l_306) = ((18446744073709551615UL == ((safe_lshift_func_int16_t_s_s(((p_1314->g_268[p_1314->g_283] , (safe_div_func_int32_t_s_s((**p_1314->g_108), ((((p_1314->g_268[p_1314->g_283] , ((((((l_301 = (safe_lshift_func_int16_t_s_u(p_1314->g_222, 3))) , l_302) == (p_90 , &p_1314->g_221)) , (p_1314->g_86 = (((*p_91) < p_90) && p_90))) & 0x23D675C6L) ^ p_1314->g_273)) && 0x37B7L) | l_287[6][0][5]) | (-5L))))) & p_1314->g_221), l_305)) ^ 0L)) ^ (*p_92))) , &p_1314->g_103), l_308[2], p_1314)), p_92, p_1314), &p_1314->g_51, &p_1314->g_51, p_91, p_1314);
    }
    (*l_336) ^= (((safe_sub_func_uint64_t_u_u(((0x43478844L > ((*l_335) = ((!l_305) != (safe_rshift_func_int8_t_s_s((((safe_div_func_uint8_t_u_u(0x68L, (safe_sub_func_uint8_t_u_u((l_334 = ((2UL || (l_321 == (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((~(safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u(((void*)0 != p_1314->g_281), (safe_sub_func_uint32_t_u_u(p_93, (safe_div_func_uint32_t_u_u((((*p_92) < p_90) != l_321), 0x6EA95927L)))))) ^ p_93), p_93))), (*p_91))), 7L)))) == p_90)), 0x2BL)))) , p_89) != (void*)0), p_1314->g_221))))) == p_90), p_1314->g_61)) , (*l_335)) != 0x1FC920DFC0DDB33CL);
    return (*l_336);
}


/* ------------------------------------------ */
/* 
 * reads : p_1314->g_155 p_1314->g_53 p_1314->g_86 p_1314->g_51 p_1314->g_62 p_1314->g_261 p_1314->g_108 p_1314->g_61 p_1314->g_10 p_1314->g_2 p_1314->g_103 p_1314->g_3 p_1314->g_102 p_1314->g_7 p_1314->g_182 p_1314->g_179 p_1314->g_13 p_1314->g_222 p_1314->g_229 p_1314->g_240 p_1314->g_337
 * writes: p_1314->g_2 p_1314->g_103 p_1314->g_155 p_1314->g_86 p_1314->g_179 p_1314->g_182 p_1314->g_221 p_1314->g_222 p_1314->g_229
 */
int32_t * func_94(int32_t * p_95, int32_t * p_96, struct S0 * p_1314)
{ /* block id: 106 */
    int32_t l_248 = (-1L);
    int32_t l_249[4][6] = {{0x29273612L,0x29273612L,0x29273612L,0x29273612L,0x29273612L,0x29273612L},{0x29273612L,0x29273612L,0x29273612L,0x29273612L,0x29273612L,0x29273612L},{0x29273612L,0x29273612L,0x29273612L,0x29273612L,0x29273612L,0x29273612L},{0x29273612L,0x29273612L,0x29273612L,0x29273612L,0x29273612L,0x29273612L}};
    int32_t *l_250 = &p_1314->g_103;
    uint16_t *l_255 = &p_1314->g_221;
    uint16_t **l_256 = &l_255;
    uint16_t *l_258 = &p_1314->g_221;
    uint16_t **l_257 = &l_258;
    int8_t *l_262 = &p_1314->g_10;
    int32_t **l_263 = &p_1314->g_2;
    int i, j;
    l_249[2][1] ^= l_248;
    (*l_263) = func_97(l_250, func_97(l_250, func_97(func_97(&p_1314->g_103, ((0x30L && ((safe_rshift_func_int8_t_s_u(((safe_add_func_int16_t_s_s(l_248, (((*l_257) = ((*l_256) = l_255)) != &p_1314->g_221))) < (~((safe_rshift_func_uint16_t_u_s(((1UL != (p_1314->g_155 == l_248)) ^ p_1314->g_53), p_1314->g_86)) , p_1314->g_51))), p_1314->g_62)) ^ 0x874153CCL)) , p_1314->g_261), &p_1314->g_103, l_262, p_1314), p_95, l_250, l_262, p_1314), &p_1314->g_51, l_262, p_1314), l_250, &p_1314->g_10, p_1314);
    return p_95;
}


/* ------------------------------------------ */
/* 
 * reads : p_1314->g_108 p_1314->g_61 p_1314->g_10 p_1314->g_2 p_1314->g_51 p_1314->g_103 p_1314->g_53 p_1314->g_86 p_1314->g_155 p_1314->g_62 p_1314->g_3 p_1314->g_102 p_1314->g_7 p_1314->g_182 p_1314->g_179 p_1314->g_13 p_1314->g_222 p_1314->g_229 p_1314->g_240 p_1314->g_283 p_72 p_1314->g_684 p_1314->g_337
 * writes: p_1314->g_2 p_1314->g_103 p_1314->g_155 p_1314->g_86 p_1314->g_179 p_1314->g_182 p_1314->g_221 p_1314->g_222 p_1314->g_229
 */
int32_t * func_97(int32_t * p_98, int32_t * p_99, int32_t * p_100, int8_t * p_101, struct S0 * p_1314)
{ /* block id: 39 */
    uint8_t l_121 = 9UL;
    int32_t **l_204 = (void*)0;
    int32_t l_205 = 6L;
    uint32_t l_245 = 0x1641BD3BL;
    int32_t *l_247 = &p_1314->g_86;
lbl_183:
    (*p_1314->g_108) = p_100;
lbl_246:
    for (p_1314->g_103 = (-23); (p_1314->g_103 > 2); ++p_1314->g_103)
    { /* block id: 43 */
        int32_t *l_111 = &p_1314->g_86;
        int32_t *l_112 = &p_1314->g_86;
        int32_t *l_113 = (void*)0;
        int32_t *l_114 = &p_1314->g_86;
        int32_t *l_115 = &p_1314->g_86;
        int32_t *l_116 = &p_1314->g_86;
        int32_t *l_117 = &p_1314->g_86;
        int32_t *l_118 = &p_1314->g_86;
        int32_t *l_119 = &p_1314->g_86;
        int32_t *l_120[1][8][9] = {{{&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86},{&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86},{&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86},{&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86},{&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86},{&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86},{&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86},{&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86,&p_1314->g_86}}};
        int32_t **l_174 = &p_1314->g_102;
        int32_t **l_244 = &l_117;
        int i, j, k;
        l_121--;
        if ((l_121 , ((p_98 != p_98) , ((p_1314->g_61 > (safe_unary_minus_func_int8_t_s((*p_101)))) ^ ((*p_1314->g_2) & l_121)))))
        { /* block id: 45 */
            uint32_t l_144 = 0UL;
            int32_t l_167 = 0L;
            uint32_t l_180 = 0x75E7F418L;
            int32_t **l_203 = (void*)0;
            for (l_121 = 0; (l_121 > 42); l_121++)
            { /* block id: 48 */
                int8_t l_143 = 0x21L;
                int16_t *l_154[1][3][1];
                int32_t l_156 = 0x6A4DFBEFL;
                int32_t **l_173[1][6][4] = {{{&p_1314->g_102,&p_1314->g_102,&p_1314->g_102,&p_1314->g_102},{&p_1314->g_102,&p_1314->g_102,&p_1314->g_102,&p_1314->g_102},{&p_1314->g_102,&p_1314->g_102,&p_1314->g_102,&p_1314->g_102},{&p_1314->g_102,&p_1314->g_102,&p_1314->g_102,&p_1314->g_102},{&p_1314->g_102,&p_1314->g_102,&p_1314->g_102,&p_1314->g_102},{&p_1314->g_102,&p_1314->g_102,&p_1314->g_102,&p_1314->g_102}}};
                int32_t ***l_172 = &l_173[0][1][0];
                uint8_t *l_181 = &p_1314->g_182;
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_154[i][j][k] = &p_1314->g_155;
                    }
                }
                l_156 = ((((*p_1314->g_2) >= (safe_add_func_int8_t_s_s((((*l_118) = (safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((0x0BACEAEEF4A51DBEL > (safe_lshift_func_int8_t_s_u((((p_1314->g_61 == (safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((p_1314->g_51 == (safe_mod_func_int16_t_s_s(p_1314->g_103, ((safe_rshift_func_int16_t_s_s(l_143, l_144)) || (safe_mod_func_int32_t_s_s((safe_unary_minus_func_int16_t_s((safe_div_func_int64_t_s_s((l_144 > (p_1314->g_155 |= (safe_rshift_func_int16_t_s_s((!(((safe_sub_func_int64_t_s_s((p_1314->g_53 >= p_1314->g_10), (*l_119))) , 0x4D50EE726552C197L) == p_1314->g_51)), 14)))), p_1314->g_103)))), 0x14DF77CBL)))))), l_144)), p_1314->g_62))) != p_1314->g_10) ^ l_143), 2))), 1)) || 0xDB76206065F2B768L), p_1314->g_53))) ^ 0x6CBD83D7L), 6L))) ^ p_1314->g_3) , (-1L));
                (*l_118) = (safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(((*l_112) ^ (l_156 >= (safe_mul_func_uint8_t_u_u(1UL, (((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((l_167 = (**p_1314->g_108)) > ((((*l_181) &= (safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(1L, ((*l_117) <= (((((*l_172) = &p_99) == (l_174 = &p_98)) || (safe_mul_func_int8_t_s_s((((!((+((((safe_lshift_func_uint16_t_u_u((((p_1314->g_179 = ((*p_1314->g_102) , l_121)) <= p_1314->g_155) > 0x64F81135C14CCD6CL), 14)) , p_1314->g_7) == 0UL) , (*l_115))) != p_1314->g_10)) <= l_180) != (*p_101)), 5UL))) < l_180)))), 1UL))) | 0x6DL) , (*p_1314->g_2))), p_1314->g_155)), 0x3F02L)) > l_144) <= 0x5AD851819CC9C010L))))), 1)), p_1314->g_62));
                return &p_1314->g_51;
            }
            l_167 |= (*l_111);
            if ((*l_117))
            { /* block id: 61 */
                uint64_t l_184 = 18446744073709551614UL;
                if (p_1314->g_53)
                    goto lbl_183;
                (*l_119) = (!((l_167 | (*l_115)) > l_184));
                (*l_112) = l_144;
            }
            else
            { /* block id: 65 */
                uint32_t l_200 = 4294967290UL;
                int32_t l_201[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_201[i] = 0x4A6FDA0FL;
                for (l_180 = 0; (l_180 <= 0); l_180 += 1)
                { /* block id: 68 */
                    uint32_t l_218 = 4294967295UL;
                    uint8_t l_230 = 0x58L;
                    uint8_t l_237 = 4UL;
                    for (p_1314->g_179 = 0; (p_1314->g_179 <= 0); p_1314->g_179 += 1)
                    { /* block id: 71 */
                        int i, j, k;
                        (*l_117) = 1L;
                    }
                    for (l_121 = 0; (l_121 <= 0); l_121 += 1)
                    { /* block id: 76 */
                        int32_t l_191 = 0L;
                        int16_t *l_202 = &p_1314->g_155;
                        uint8_t *l_219 = &p_1314->g_182;
                        uint16_t *l_220 = &p_1314->g_221;
                        int i, j, k;
                        l_205 &= ((((l_180 , 0xC02D86D1A421FDF7L) , (safe_mod_func_uint64_t_u_u(0xEE31D69C6CBE70D6L, ((safe_mul_func_uint16_t_u_u((&p_1314->g_7 != &p_1314->g_7), ((*l_202) = (safe_sub_func_uint16_t_u_u(l_191, (safe_lshift_func_int16_t_s_s((l_201[0] = (((p_1314->g_179 && (((safe_mod_func_uint16_t_u_u((*l_114), (safe_sub_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((((p_1314->g_182 , 0x4EL) || l_121) >= (*p_1314->g_13)) && p_1314->g_61), 0x38L)) == p_1314->g_51), 0L)))) == l_200) >= (*l_119))) < 4294967286UL) != (*p_101))), 15))))))) | 0x582D88ACL)))) , l_203) == l_204);
                        l_191 = (p_1314->g_222 ^= (safe_lshift_func_int8_t_s_u(((((*l_220) = (((*l_111) = ((0x78L || p_1314->g_61) & ((safe_div_func_uint8_t_u_u(((*l_219) = ((0xB934L >= ((void*)0 == &p_1314->g_182)) , (safe_rshift_func_int8_t_s_u((0x54L > ((((((safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((((*l_202) |= p_1314->g_103) <= l_201[0]), (*p_101))), 0x6BE12579L)) , l_205) ^ 0L) | p_1314->g_182) < (*l_115)) != l_218)), l_201[0])))), p_1314->g_7)) <= (-1L)))) | l_218)) > l_205) >= 0x4EBA6C6404DC0F1CL), 3)));
                        l_201[0] &= ((safe_mod_func_uint8_t_u_u(249UL, ((safe_rshift_func_int8_t_s_s(((8UL < (((p_1314->g_10 > (safe_add_func_uint8_t_u_u(((*l_219) = ((((p_1314->g_229 ^= (*p_101)) <= l_230) , ((((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u((p_1314->g_179 <= l_237), (safe_lshift_func_int8_t_s_s(0x4FL, 6)))), (!p_1314->g_229))), 1UL)) || l_205) == l_200) , 0xCFL)) > (*p_101))), (-1L)))) , p_1314->g_240) >= p_1314->g_53)) ^ 0x09L), 6)) , (*l_112)))) < 1UL);
                    }
                    for (l_237 = 2; (l_237 < 15); ++l_237)
                    { /* block id: 92 */
                        (*l_112) = 0x30C1B5C8L;
                    }
                }
            }
        }
        else
        { /* block id: 97 */
            (*p_1314->g_108) = p_99;
        }
        (*l_244) = (void*)0;
        if (p_1314->g_182)
            goto lbl_246;
        if (l_245)
            continue;
    }
    (*l_247) |= 0x05F3529BL;
    return &p_1314->g_103;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_1315;
    struct S0* p_1314 = &c_1315;
    struct S0 c_1316 = {
        0x0ADE2167L, // p_1314->g_3
        &p_1314->g_3, // p_1314->g_2
        1L, // p_1314->g_7
        (-7L), // p_1314->g_10
        &p_1314->g_3, // p_1314->g_13
        4L, // p_1314->g_51
        (-1L), // p_1314->g_53
        0x471010F1939EFD91L, // p_1314->g_61
        0x7DL, // p_1314->g_62
        5L, // p_1314->g_86
        (-1L), // p_1314->g_103
        &p_1314->g_103, // p_1314->g_102
        &p_1314->g_2, // p_1314->g_108
        (-9L), // p_1314->g_155
        0xCD2B34E3L, // p_1314->g_179
        0xE2L, // p_1314->g_182
        0UL, // p_1314->g_221
        0L, // p_1314->g_222
        254UL, // p_1314->g_229
        0x699366D9L, // p_1314->g_240
        {&p_1314->g_2,(void*)0,&p_1314->g_2,&p_1314->g_2,(void*)0,&p_1314->g_2,&p_1314->g_2}, // p_1314->g_243
        &p_1314->g_51, // p_1314->g_261
        {(-5L),(-5L),(-5L),(-5L),(-5L)}, // p_1314->g_268
        0x7F3DL, // p_1314->g_273
        (void*)0, // p_1314->g_281
        0x26L, // p_1314->g_283
        0x47DDD2FD38EE52D0L, // p_1314->g_307
        (void*)0, // p_1314->g_310
        (-5L), // p_1314->g_337
        1UL, // p_1314->g_338
        18446744073709551615UL, // p_1314->g_376
        &p_1314->g_2, // p_1314->g_403
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_1314->g_434
        0x0AB1L, // p_1314->g_466
        &p_1314->g_2, // p_1314->g_468
        (void*)0, // p_1314->g_472
        6UL, // p_1314->g_483
        0UL, // p_1314->g_489
        0xCDF4BE7A1B7E4629L, // p_1314->g_568
        &p_1314->g_568, // p_1314->g_573
        &p_1314->g_568, // p_1314->g_575
        {{&p_1314->g_283,&p_1314->g_283,(void*)0,&p_1314->g_283,(void*)0,&p_1314->g_283},{&p_1314->g_283,&p_1314->g_283,(void*)0,&p_1314->g_283,(void*)0,&p_1314->g_283},{&p_1314->g_283,&p_1314->g_283,(void*)0,&p_1314->g_283,(void*)0,&p_1314->g_283},{&p_1314->g_283,&p_1314->g_283,(void*)0,&p_1314->g_283,(void*)0,&p_1314->g_283},{&p_1314->g_283,&p_1314->g_283,(void*)0,&p_1314->g_283,(void*)0,&p_1314->g_283},{&p_1314->g_283,&p_1314->g_283,(void*)0,&p_1314->g_283,(void*)0,&p_1314->g_283}}, // p_1314->g_619
        &p_1314->g_337, // p_1314->g_672
        &p_1314->g_672, // p_1314->g_671
        0x6DL, // p_1314->g_684
        (-4L), // p_1314->g_686
        {{3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L},{3L,3L,3L,3L,3L}}, // p_1314->g_696
        0xF505A122L, // p_1314->g_752
        &p_1314->g_221, // p_1314->g_816
        &p_1314->g_816, // p_1314->g_815
        &p_1314->g_240, // p_1314->g_845
        &p_1314->g_845, // p_1314->g_844
        6UL, // p_1314->g_864
        {{&p_1314->g_268[3],&p_1314->g_268[3]},{&p_1314->g_268[3],&p_1314->g_268[3]},{&p_1314->g_268[3],&p_1314->g_268[3]},{&p_1314->g_268[3],&p_1314->g_268[3]}}, // p_1314->g_898
        (void*)0, // p_1314->g_910
        &p_1314->g_910, // p_1314->g_909
        &p_1314->g_909, // p_1314->g_908
        0x6C370BAAL, // p_1314->g_954
        65535UL, // p_1314->g_989
        4294967295UL, // p_1314->g_994
        (void*)0, // p_1314->g_997
        &p_1314->g_489, // p_1314->g_1000
        &p_1314->g_1000, // p_1314->g_999
        &p_1314->g_999, // p_1314->g_998
        &p_1314->g_182, // p_1314->g_1013
        {{{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013}},{{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013}},{{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013},{(void*)0,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013,&p_1314->g_1013}}}, // p_1314->g_1012
        0x2F1FFA57L, // p_1314->g_1116
        {0xEA848A58L,0xEA848A58L,0xEA848A58L,0xEA848A58L,0xEA848A58L,0xEA848A58L,0xEA848A58L,0xEA848A58L,0xEA848A58L,0xEA848A58L}, // p_1314->g_1126
        &p_1314->g_179, // p_1314->g_1146
        {{&p_1314->g_53,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_3,(void*)0,(void*)0},{&p_1314->g_53,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_3,(void*)0,(void*)0},{&p_1314->g_53,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_3,(void*)0,(void*)0},{&p_1314->g_53,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_3,(void*)0,(void*)0},{&p_1314->g_53,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_3,(void*)0,(void*)0},{&p_1314->g_53,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_3,(void*)0,(void*)0},{&p_1314->g_53,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_3,(void*)0,(void*)0},{&p_1314->g_53,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_3,(void*)0,(void*)0},{&p_1314->g_53,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_3,(void*)0,(void*)0},{&p_1314->g_53,&p_1314->g_86,(void*)0,(void*)0,&p_1314->g_3,(void*)0,(void*)0}}, // p_1314->g_1150
        &p_1314->g_86, // p_1314->g_1151
        (void*)0, // p_1314->g_1154
        {&p_1314->g_1154,&p_1314->g_1154,&p_1314->g_1154,&p_1314->g_1154,&p_1314->g_1154,&p_1314->g_1154,&p_1314->g_1154,&p_1314->g_1154,&p_1314->g_1154,&p_1314->g_1154}, // p_1314->g_1153
        0UL, // p_1314->g_1172
        (void*)0, // p_1314->g_1173
        0x56B0F33C66717966L, // p_1314->g_1308
    };
    c_1315 = c_1316;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1314);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1314->g_3, "p_1314->g_3", print_hash_value);
    transparent_crc(p_1314->g_7, "p_1314->g_7", print_hash_value);
    transparent_crc(p_1314->g_10, "p_1314->g_10", print_hash_value);
    transparent_crc(p_1314->g_51, "p_1314->g_51", print_hash_value);
    transparent_crc(p_1314->g_53, "p_1314->g_53", print_hash_value);
    transparent_crc(p_1314->g_61, "p_1314->g_61", print_hash_value);
    transparent_crc(p_1314->g_62, "p_1314->g_62", print_hash_value);
    transparent_crc(p_1314->g_86, "p_1314->g_86", print_hash_value);
    transparent_crc(p_1314->g_103, "p_1314->g_103", print_hash_value);
    transparent_crc(p_1314->g_155, "p_1314->g_155", print_hash_value);
    transparent_crc(p_1314->g_179, "p_1314->g_179", print_hash_value);
    transparent_crc(p_1314->g_182, "p_1314->g_182", print_hash_value);
    transparent_crc(p_1314->g_221, "p_1314->g_221", print_hash_value);
    transparent_crc(p_1314->g_222, "p_1314->g_222", print_hash_value);
    transparent_crc(p_1314->g_229, "p_1314->g_229", print_hash_value);
    transparent_crc(p_1314->g_240, "p_1314->g_240", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1314->g_268[i], "p_1314->g_268[i]", print_hash_value);

    }
    transparent_crc(p_1314->g_273, "p_1314->g_273", print_hash_value);
    transparent_crc(p_1314->g_283, "p_1314->g_283", print_hash_value);
    transparent_crc(p_1314->g_307, "p_1314->g_307", print_hash_value);
    transparent_crc(p_1314->g_337, "p_1314->g_337", print_hash_value);
    transparent_crc(p_1314->g_338, "p_1314->g_338", print_hash_value);
    transparent_crc(p_1314->g_376, "p_1314->g_376", print_hash_value);
    transparent_crc(p_1314->g_466, "p_1314->g_466", print_hash_value);
    transparent_crc(p_1314->g_483, "p_1314->g_483", print_hash_value);
    transparent_crc(p_1314->g_489, "p_1314->g_489", print_hash_value);
    transparent_crc(p_1314->g_568, "p_1314->g_568", print_hash_value);
    transparent_crc(p_1314->g_684, "p_1314->g_684", print_hash_value);
    transparent_crc(p_1314->g_686, "p_1314->g_686", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1314->g_696[i][j], "p_1314->g_696[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1314->g_752, "p_1314->g_752", print_hash_value);
    transparent_crc(p_1314->g_864, "p_1314->g_864", print_hash_value);
    transparent_crc(p_1314->g_954, "p_1314->g_954", print_hash_value);
    transparent_crc(p_1314->g_989, "p_1314->g_989", print_hash_value);
    transparent_crc(p_1314->g_994, "p_1314->g_994", print_hash_value);
    transparent_crc(p_1314->g_1116, "p_1314->g_1116", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1314->g_1126[i], "p_1314->g_1126[i]", print_hash_value);

    }
    transparent_crc(p_1314->g_1172, "p_1314->g_1172", print_hash_value);
    transparent_crc(p_1314->g_1308, "p_1314->g_1308", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
