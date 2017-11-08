// --atomics 51 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 35,73,1 -l 35,1,1
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

__constant uint32_t permutations[10][35] = {
{5,2,0,23,1,34,29,30,24,6,19,17,33,16,15,21,31,32,27,9,14,28,8,4,20,7,13,22,26,11,12,10,3,18,25}, // permutation 0
{6,27,25,15,9,0,30,33,13,32,21,11,22,24,19,4,28,14,34,1,18,3,16,31,20,10,29,5,26,7,17,23,8,12,2}, // permutation 1
{24,33,3,32,26,21,8,31,11,13,6,2,10,9,34,27,19,14,15,22,7,0,28,30,16,20,5,25,29,17,23,4,18,12,1}, // permutation 2
{29,32,13,7,15,18,20,21,23,19,28,6,27,25,3,8,10,0,33,1,22,24,14,2,5,4,17,34,11,16,26,30,31,12,9}, // permutation 3
{20,27,24,31,10,23,8,28,22,15,34,7,5,4,30,26,11,21,16,14,18,9,6,19,25,29,2,13,3,33,12,17,0,1,32}, // permutation 4
{30,17,29,14,19,24,8,5,0,21,26,25,1,16,27,32,23,31,10,7,4,15,9,33,22,6,2,20,12,11,28,34,13,18,3}, // permutation 5
{19,11,7,29,14,23,8,3,33,9,31,5,1,22,20,10,17,25,21,18,0,12,30,16,28,24,32,4,27,15,6,26,13,34,2}, // permutation 6
{2,4,1,0,14,19,10,13,3,31,29,17,11,12,18,27,23,7,34,5,24,6,9,22,8,25,20,32,33,28,21,15,30,26,16}, // permutation 7
{13,26,27,7,23,8,9,10,22,0,30,19,2,3,34,25,31,21,17,11,14,32,20,28,15,16,5,29,33,12,1,4,6,24,18}, // permutation 8
{32,24,29,30,13,25,17,8,0,7,3,10,22,6,12,4,9,20,11,28,31,33,14,34,27,5,26,18,16,15,19,23,2,1,21} // permutation 9
};

// Seed: 3680454496

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2;
    int32_t g_3;
    int32_t g_9;
    volatile VECTOR(uint32_t, 4) g_25;
    int32_t g_34;
    VECTOR(int32_t, 2) g_40;
    VECTOR(uint64_t, 8) g_80;
    uint16_t g_82;
    uint64_t g_84;
    int16_t g_86;
    int16_t *g_85;
    uint32_t g_91;
    VECTOR(uint16_t, 2) g_104;
    VECTOR(int16_t, 4) g_109;
    VECTOR(uint32_t, 16) g_134;
    int32_t * volatile g_140;
    int32_t *g_141[10][2][7];
    int32_t * volatile *g_139[9];
    int64_t *g_142;
    volatile int64_t g_144;
    volatile int64_t *g_143;
    VECTOR(uint16_t, 16) g_164;
    VECTOR(int64_t, 8) g_167;
    VECTOR(int64_t, 16) g_170;
    uint8_t g_193;
    VECTOR(int32_t, 16) g_219;
    VECTOR(int16_t, 16) g_220;
    VECTOR(int64_t, 16) g_242;
    uint32_t g_267;
    VECTOR(uint16_t, 4) g_288;
    VECTOR(uint16_t, 4) g_290;
    VECTOR(uint16_t, 4) g_291;
    VECTOR(uint16_t, 2) g_301;
    uint32_t g_302;
    VECTOR(int16_t, 4) g_303;
    VECTOR(uint16_t, 8) g_327;
    int8_t g_333[7][7][5];
    uint8_t g_335;
    int32_t g_357[8];
    VECTOR(uint16_t, 4) g_369;
    VECTOR(int32_t, 4) g_377;
    int8_t g_421[4][2];
    VECTOR(int32_t, 8) g_440;
    VECTOR(int8_t, 2) g_469;
    volatile int16_t * volatile **g_546;
    VECTOR(int16_t, 2) g_562;
    VECTOR(int8_t, 4) g_571;
    uint32_t *g_588;
    uint32_t ** volatile g_587[10][9];
    uint32_t ** volatile *g_586;
    VECTOR(int8_t, 8) g_643;
    VECTOR(int8_t, 16) g_646;
    int16_t g_673;
    VECTOR(int64_t, 4) g_712;
    VECTOR(int64_t, 8) g_720;
    VECTOR(int8_t, 16) g_721;
    VECTOR(int8_t, 2) g_724;
    VECTOR(uint16_t, 8) g_760;
    uint32_t *g_764;
    uint16_t g_820;
    VECTOR(uint64_t, 2) g_987;
    VECTOR(int16_t, 8) g_1023;
    uint32_t g_1029;
    VECTOR(uint64_t, 4) g_1090;
    VECTOR(uint8_t, 2) g_1117;
    VECTOR(int16_t, 16) g_1124;
    VECTOR(int16_t, 2) g_1129;
    int32_t *g_1146;
    uint32_t g_1154;
    VECTOR(int32_t, 4) g_1161;
    VECTOR(uint16_t, 8) g_1189;
    VECTOR(uint16_t, 16) g_1190;
    volatile VECTOR(int64_t, 16) g_1193;
    uint8_t *g_1210;
    uint8_t **g_1209;
    uint8_t *** volatile g_1208;
    volatile VECTOR(uint16_t, 8) g_1211;
    VECTOR(uint16_t, 16) g_1212;
    volatile VECTOR(uint16_t, 2) g_1213;
    volatile uint32_t g_1270;
    volatile VECTOR(uint16_t, 16) g_1279;
    VECTOR(uint32_t, 16) g_1308;
    VECTOR(uint32_t, 2) g_1309;
    VECTOR(int32_t, 8) g_1317;
    volatile VECTOR(int32_t, 2) g_1327;
    volatile uint32_t g_1349;
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
int64_t  func_1(struct S0 * p_1353);
int32_t * func_14(int32_t * p_15, struct S0 * p_1353);
int32_t * func_16(int64_t  p_17, uint32_t  p_18, int32_t * p_19, struct S0 * p_1353);
uint32_t  func_26(uint8_t  p_27, int64_t  p_28, int32_t * p_29, uint64_t  p_30, int32_t * p_31, struct S0 * p_1353);
uint16_t  func_32(int32_t * p_33, struct S0 * p_1353);
int32_t  func_42(int16_t  p_43, int32_t * p_44, uint64_t  p_45, int32_t  p_46, struct S0 * p_1353);
int16_t  func_47(uint32_t  p_48, int32_t  p_49, int32_t * p_50, uint32_t  p_51, struct S0 * p_1353);
int8_t  func_63(uint16_t  p_64, uint32_t  p_65, int32_t * p_66, int32_t  p_67, struct S0 * p_1353);
int8_t  func_72(int32_t * p_73, struct S0 * p_1353);
int32_t  func_74(int32_t * p_75, int32_t * p_76, uint64_t  p_77, int16_t * p_78, struct S0 * p_1353);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1353->g_3 p_1353->g_302 p_1353->g_85 p_1353->g_86 p_1353->g_9 p_1353->g_1210 p_1353->g_193 p_1353->g_1270 p_1353->g_1146 p_1353->g_357 p_1353->g_335 p_1353->g_820 p_1353->g_143 p_1353->g_144 p_1353->g_1117 p_1353->g_91 p_1353->g_288 p_1353->g_140 p_1353->g_588 p_1353->l_comm_values p_1353->g_1308 p_1353->g_1309 p_1353->g_1317 p_1353->g_1327 p_1353->g_1349
 * writes: p_1353->g_3 p_1353->g_302 p_1353->g_290 p_1353->g_219 p_1353->g_82 p_1353->g_333 p_1353->g_335 p_1353->g_764 p_1353->g_1090 p_1353->g_84 p_1353->l_comm_values p_1353->g_1349
 */
int64_t  func_1(struct S0 * p_1353)
{ /* block id: 4 */
    uint64_t l_11[8] = {0x9E2A8D3A18E418A5L,0x9E2A8D3A18E418A5L,0x9E2A8D3A18E418A5L,0x9E2A8D3A18E418A5L,0x9E2A8D3A18E418A5L,0x9E2A8D3A18E418A5L,0x9E2A8D3A18E418A5L,0x9E2A8D3A18E418A5L};
    int32_t *l_24 = &p_1353->g_9;
    int64_t l_1147 = 0x197988184B423A05L;
    VECTOR(int32_t, 8) l_1281 = (VECTOR(int32_t, 8))(0x021AC6E8L, (VECTOR(int32_t, 4))(0x021AC6E8L, (VECTOR(int32_t, 2))(0x021AC6E8L, 0x7C85762DL), 0x7C85762DL), 0x7C85762DL, 0x021AC6E8L, 0x7C85762DL);
    uint8_t **l_1311 = &p_1353->g_1210;
    uint32_t l_1316[5] = {4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL};
    VECTOR(uint32_t, 8) l_1318 = (VECTOR(uint32_t, 8))(0xCC892BD3L, (VECTOR(uint32_t, 4))(0xCC892BD3L, (VECTOR(uint32_t, 2))(0xCC892BD3L, 0x1DEFC588L), 0x1DEFC588L), 0x1DEFC588L, 0xCC892BD3L, 0x1DEFC588L);
    int i;
    for (p_1353->g_3 = 2; (p_1353->g_3 <= (-12)); --p_1353->g_3)
    { /* block id: 7 */
        int32_t *l_8 = &p_1353->g_9;
        int32_t *l_10 = &p_1353->g_9;
        int32_t *l_1162 = &p_1353->g_3;
        int32_t **l_1180 = &l_24;
        if ((atomic_inc(&p_1353->g_atomic_input[51 * get_linear_group_id() + 23]) == 5))
        { /* block id: 9 */
            int32_t l_7 = 0x6D680444L;
            int32_t *l_6 = &l_7;
            l_6 = (void*)0;
            unsigned int result = 0;
            result += l_7;
            atomic_add(&p_1353->g_special_values[51 * get_linear_group_id() + 23], result);
        }
        else
        { /* block id: 11 */
            (1 + 1);
        }
        l_11[7]++;
    }
    for (p_1353->g_3 = 0; (p_1353->g_3 <= 0); p_1353->g_3 = safe_add_func_uint8_t_u_u(p_1353->g_3, 5))
    { /* block id: 451 */
        int64_t l_1242[4];
        VECTOR(uint32_t, 2) l_1307 = (VECTOR(uint32_t, 2))(0x8D23540DL, 0xA61E8327L);
        uint8_t **l_1314 = &p_1353->g_1210;
        int i;
        for (i = 0; i < 4; i++)
            l_1242[i] = (-4L);
        if (l_1242[3])
        { /* block id: 452 */
            uint16_t *l_1245 = &p_1353->g_82;
            uint16_t **l_1244 = &l_1245;
            uint16_t ***l_1243 = &l_1244;
            int32_t *l_1258 = (void*)0;
            int32_t l_1284 = 0x74CF6114L;
            int32_t l_1287 = (-4L);
            uint16_t l_1298[6][3][4] = {{{0xD64CL,0xD64CL,0x8680L,0x32AEL},{0xD64CL,0xD64CL,0x8680L,0x32AEL},{0xD64CL,0xD64CL,0x8680L,0x32AEL}},{{0xD64CL,0xD64CL,0x8680L,0x32AEL},{0xD64CL,0xD64CL,0x8680L,0x32AEL},{0xD64CL,0xD64CL,0x8680L,0x32AEL}},{{0xD64CL,0xD64CL,0x8680L,0x32AEL},{0xD64CL,0xD64CL,0x8680L,0x32AEL},{0xD64CL,0xD64CL,0x8680L,0x32AEL}},{{0xD64CL,0xD64CL,0x8680L,0x32AEL},{0xD64CL,0xD64CL,0x8680L,0x32AEL},{0xD64CL,0xD64CL,0x8680L,0x32AEL}},{{0xD64CL,0xD64CL,0x8680L,0x32AEL},{0xD64CL,0xD64CL,0x8680L,0x32AEL},{0xD64CL,0xD64CL,0x8680L,0x32AEL}},{{0xD64CL,0xD64CL,0x8680L,0x32AEL},{0xD64CL,0xD64CL,0x8680L,0x32AEL},{0xD64CL,0xD64CL,0x8680L,0x32AEL}}};
            VECTOR(uint16_t, 8) l_1306 = (VECTOR(uint16_t, 8))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 9UL), 9UL), 9UL, 65534UL, 9UL);
            uint64_t l_1315 = 0UL;
            int i, j, k;
            (*l_1243) = (void*)0;
            for (p_1353->g_302 = 26; (p_1353->g_302 == 31); p_1353->g_302++)
            { /* block id: 456 */
                int64_t l_1261 = (-9L);
                int32_t *l_1262 = (void*)0;
                int32_t *l_1263 = (void*)0;
                int32_t *l_1264 = (void*)0;
                int32_t *l_1265[5];
                int8_t *l_1271 = &p_1353->g_333[4][3][0];
                VECTOR(int32_t, 4) l_1277 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x19297933L), 0x19297933L);
                uint32_t **l_1286 = &p_1353->g_588;
                uint32_t ***l_1285 = &l_1286;
                uint8_t **l_1310[6][10] = {{&p_1353->g_1210,&p_1353->g_1210,(void*)0,(void*)0,(void*)0,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210},{&p_1353->g_1210,&p_1353->g_1210,(void*)0,(void*)0,(void*)0,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210},{&p_1353->g_1210,&p_1353->g_1210,(void*)0,(void*)0,(void*)0,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210},{&p_1353->g_1210,&p_1353->g_1210,(void*)0,(void*)0,(void*)0,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210},{&p_1353->g_1210,&p_1353->g_1210,(void*)0,(void*)0,(void*)0,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210},{&p_1353->g_1210,&p_1353->g_1210,(void*)0,(void*)0,(void*)0,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210,&p_1353->g_1210}};
                int i, j;
                for (i = 0; i < 5; i++)
                    l_1265[i] = (void*)0;
                if (((safe_div_func_uint16_t_u_u(5UL, (*p_1353->g_85))) < (safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 16))(((*l_1271) = (safe_lshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((((*l_1245) = (((((void*)0 != l_1258) & (p_1353->g_290.x = (*l_24))) || 0xF8L) <= (safe_sub_func_uint64_t_u_u(((((p_1353->g_219.s1 = (~l_1261)) , (safe_mul_func_uint8_t_u_u((~(*p_1353->g_1210)), (safe_lshift_func_uint16_t_u_s(p_1353->g_1270, (*p_1353->g_85)))))) , (*p_1353->g_1146)) || 0xCB13FEE2L), 0x7143721292E7F3D4L)))) <= 1UL), l_1261)), 1))), ((VECTOR(int8_t, 2))(0x56L)), (-3L), p_1353->g_9, ((VECTOR(int8_t, 8))(9L)), 0x5CL, (-7L), 9L)).s92))).yyxy)).w >= 0L) | (*p_1353->g_1146)) > 0x30L), p_1353->g_3)), 1))))
                { /* block id: 461 */
                    int32_t *l_1288[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1288[i] = &p_1353->g_9;
                    for (p_1353->g_335 = 0; (p_1353->g_335 > 10); p_1353->g_335 = safe_add_func_uint64_t_u_u(p_1353->g_335, 7))
                    { /* block id: 464 */
                        uint8_t ***l_1276 = (void*)0;
                        int32_t l_1278 = 4L;
                        VECTOR(int32_t, 8) l_1280 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x20715ED8L), 0x20715ED8L), 0x20715ED8L, 0L, 0x20715ED8L);
                        int32_t **l_1289[5][3][3] = {{{&p_1353->g_141[2][1][5],&p_1353->g_141[2][1][5],&l_1288[0]},{&p_1353->g_141[2][1][5],&p_1353->g_141[2][1][5],&l_1288[0]},{&p_1353->g_141[2][1][5],&p_1353->g_141[2][1][5],&l_1288[0]}},{{&p_1353->g_141[2][1][5],&p_1353->g_141[2][1][5],&l_1288[0]},{&p_1353->g_141[2][1][5],&p_1353->g_141[2][1][5],&l_1288[0]},{&p_1353->g_141[2][1][5],&p_1353->g_141[2][1][5],&l_1288[0]}},{{&p_1353->g_141[2][1][5],&p_1353->g_141[2][1][5],&l_1288[0]},{&p_1353->g_141[2][1][5],&p_1353->g_141[2][1][5],&l_1288[0]},{&p_1353->g_141[2][1][5],&p_1353->g_141[2][1][5],&l_1288[0]}},{{&p_1353->g_141[2][1][5],&p_1353->g_141[2][1][5],&l_1288[0]},{&p_1353->g_141[2][1][5],&p_1353->g_141[2][1][5],&l_1288[0]},{&p_1353->g_141[2][1][5],&p_1353->g_141[2][1][5],&l_1288[0]}},{{&p_1353->g_141[2][1][5],&p_1353->g_141[2][1][5],&l_1288[0]},{&p_1353->g_141[2][1][5],&p_1353->g_141[2][1][5],&l_1288[0]},{&p_1353->g_141[2][1][5],&p_1353->g_141[2][1][5],&l_1288[0]}}};
                        uint64_t *l_1299 = (void*)0;
                        uint64_t *l_1300 = &p_1353->g_84;
                        int64_t *l_1301 = (void*)0;
                        int64_t *l_1302 = (void*)0;
                        int64_t *l_1303[3][6] = {{&l_1242[3],(void*)0,&l_1242[3],&l_1242[3],(void*)0,&l_1242[3]},{&l_1242[3],(void*)0,&l_1242[3],&l_1242[3],(void*)0,&l_1242[3]},{&l_1242[3],(void*)0,&l_1242[3],&l_1242[3],(void*)0,&l_1242[3]}};
                        uint8_t ***l_1312 = (void*)0;
                        uint8_t ***l_1313[3][10] = {{&p_1353->g_1209,&p_1353->g_1209,&l_1311,&l_1310[1][2],&l_1310[2][6],&l_1310[1][5],&l_1310[1][2],(void*)0,&l_1310[1][2],&l_1310[1][5]},{&p_1353->g_1209,&p_1353->g_1209,&l_1311,&l_1310[1][2],&l_1310[2][6],&l_1310[1][5],&l_1310[1][2],(void*)0,&l_1310[1][2],&l_1310[1][5]},{&p_1353->g_1209,&p_1353->g_1209,&l_1311,&l_1310[1][2],&l_1310[2][6],&l_1310[1][5],&l_1310[1][2],(void*)0,&l_1310[1][2],&l_1310[1][5]}};
                        int i, j, k;
                        l_1288[0] = func_16((safe_sub_func_int64_t_s_s((l_1276 == (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(l_1277.xxywzwwyywyyzwxy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x67F8BFB3L, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x23677802L, l_1278, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(3L, (-7L))), ((VECTOR(int32_t, 2))(0x1261725EL, 0L))))), ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x00E3L, (-6L))).xxxxyxxx)).hi)).yyxyyzyz)), ((VECTOR(uint16_t, 2))(p_1353->g_1279.sed)).xyyyxxxx))).even)))), ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(l_1280.s35)).xxyxyxxxyyxxyyyx))).s23cc))))).s61)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(l_1281.s7266)).ywwwzyyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((l_1277.x = ((~(l_1277.y , (-8L))) != ((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))(p_1353->g_193, ((l_1284 , l_1285) != (void*)0), 0x75L, 0x2AL, ((VECTOR(int8_t, 4))(0x42L)))), ((VECTOR(int8_t, 8))((-2L)))))).s5, p_1353->g_164.s5)) < 0x2E3EL))), 0x18C8DEECL, 0x004B5D31L, 0x4FB183E5L)).hi)).yyxxxyxyyxyxxxxy)).even))).s2616463377773167)).sa8, ((VECTOR(int32_t, 2))(0x22D6FC85L))))).xxxxyyxyyxxyxxxy)).s4, (*p_1353->g_140), ((VECTOR(int32_t, 2))((-5L))), 1L, ((VECTOR(int32_t, 2))(0x36BD7DB2L)), ((VECTOR(int32_t, 2))(0x7F743F12L)), 0x28C4D304L, (-7L), 8L, (*p_1353->g_140), 1L, 0x5C60F7BEL)).s9d)).yyyy)).ywzxwzywyxyyxyxz))).sca)).hi , (void*)0)), 18446744073709551613UL)), l_1287, l_1288[0], p_1353);
                        l_1316[1] ^= (safe_mod_func_int64_t_s_s(l_1284, ((((safe_mul_func_int8_t_s_s((((*l_1300) = ((safe_mul_func_int8_t_s_s(((*l_1271) = 0x63L), (safe_rshift_func_uint16_t_u_s((l_1298[2][0][2] , 1UL), 9)))) == (*p_1353->g_588))) != (p_1353->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1353->tid, 35))] &= 0x6DC4A839431F82DEL)), ((safe_mod_func_int32_t_s_s((0x7B8FFE00L != (((VECTOR(uint32_t, 2))(4294967295UL, 0x2BDCA84DL)).lo != ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(0x81B2BEC5L, 0xCA584D1BL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_1306.s17)).yxyyyyyx)))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xD58AL, 0UL)).yyyy)).zyzwyyyx))), ((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(l_1307.xyyx)).odd, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(p_1353->g_1308.se25c01b4885a689b)).even)).s74, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_1353->g_1309.xxxx)).yzwzyzzy)), (uint32_t)(l_1310[1][2] == (l_1314 = l_1311))))).s12)), l_1242[3], (*p_1353->g_588), ((VECTOR(uint32_t, 2))(0x463BD022L)), 0xCC653FE9L, 5UL)).s35))).yyyy))), ((VECTOR(uint32_t, 4))(1UL)))).lo, ((VECTOR(uint32_t, 8))(0x894CBC6AL))))).even, ((VECTOR(uint32_t, 4))(0xAAC994C3L))))).xyzzxwyz, ((VECTOR(uint32_t, 8))(4294967286UL))))).s33)).yxxxyxxx, ((VECTOR(uint32_t, 8))(0x96A1CFCFL)), ((VECTOR(uint32_t, 8))(4294967295UL))))).even)), l_1284, ((VECTOR(uint32_t, 2))(1UL)), 0xA9F14546L, 0UL, ((VECTOR(uint32_t, 4))(4294967295UL)), ((VECTOR(uint32_t, 2))(0x628F4B03L)), 0x350D60C8L)).s88fd)).odd)), (*l_24), ((VECTOR(uint32_t, 2))(0x5906DBD9L)), ((VECTOR(uint32_t, 4))(0x9E3DEAC3L)), 4294967291UL, 1UL, 0xE0413E5DL, 1UL, 4294967288UL)).s7bff)).xyzzyzzw)).s6)), l_1298[4][1][2])) >= 0UL))) <= 6L) & l_1242[3]) , l_1315)));
                    }
                }
                else
                { /* block id: 473 */
                    uint64_t l_1328[3][6] = {{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}};
                    int16_t *l_1333 = (void*)0;
                    int16_t *l_1334[4];
                    int32_t l_1335 = 0x2B9AF873L;
                    int32_t l_1336 = 0x68B114F6L;
                    int32_t *l_1337 = &l_1284;
                    int32_t *l_1338 = (void*)0;
                    int32_t *l_1339 = (void*)0;
                    int32_t *l_1340 = &p_1353->g_357[7];
                    int32_t *l_1341 = &l_1287;
                    int32_t *l_1342 = (void*)0;
                    int32_t *l_1343 = (void*)0;
                    int32_t *l_1344 = &p_1353->g_357[3];
                    int32_t *l_1345 = &p_1353->g_357[3];
                    int32_t *l_1346 = (void*)0;
                    int32_t *l_1347 = (void*)0;
                    int32_t *l_1348[10] = {&p_1353->g_9,&p_1353->g_9,&p_1353->g_9,&p_1353->g_9,&p_1353->g_9,&p_1353->g_9,&p_1353->g_9,&p_1353->g_9,&p_1353->g_9,&p_1353->g_9};
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_1334[i] = (void*)0;
                    l_1336 = (((((VECTOR(int32_t, 2))(p_1353->g_1317.s56)).lo , (((VECTOR(uint32_t, 2))(l_1318.s76)).lo , (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(0x4CE9ABA3L, 4L)).xyxxyyyx, ((VECTOR(int32_t, 2))(0x35371ADEL, 0x43161424L)).yyxxyyyx))))).s6 , ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(0x47EAL, ((safe_div_func_int16_t_s_s((safe_add_func_uint64_t_u_u((safe_add_func_uint64_t_u_u(l_1277.x, (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(0x2DDA40D2L, 2L, 0x3491D138L, 9L)).wwwzywxw, ((VECTOR(int32_t, 16))(p_1353->g_1327.yxyyxxxxyyyyxxxx)).odd))).s0, l_1328[2][4])))), ((void*)0 == &p_1353->g_673))), (safe_rshift_func_int16_t_s_s((l_1335 |= ((safe_mod_func_uint32_t_u_u(4294967295UL, (*p_1353->g_1146))) , ((l_1307.x > (*p_1353->g_85)) , l_1328[2][4]))), 9)))) && l_1298[3][1][1]), 1UL, ((VECTOR(uint16_t, 4))(0UL)), 3UL)).s3521362712661146)).sf))) ^ 0x611FL) || l_1298[2][0][2]);
                    ++p_1353->g_1349;
                }
            }
        }
        else
        { /* block id: 479 */
            uint32_t l_1352 = 0x0B7BEF6DL;
            return l_1352;
        }
        if ((*p_1353->g_140))
            continue;
    }
    return (*l_24);
}


/* ------------------------------------------ */
/* 
 * reads : p_1353->g_1189 p_1353->g_1190 p_1353->g_588 p_1353->g_1193 p_1353->g_369 p_1353->g_357 p_1353->g_85 p_1353->g_86 p_1353->g_1124 p_1353->g_333 p_1353->g_643 p_1353->g_9 p_1353->g_1208 p_1353->g_1211 p_1353->g_1212 p_1353->g_1213 p_1353->g_1209 p_1353->g_335 p_1353->g_193 p_1353->g_291 p_1353->g_109 p_1353->g_562 p_1353->g_303 p_1353->g_302 p_1353->g_571 p_1353->g_646 p_1353->g_987
 * writes: p_1353->g_302 p_1353->g_369 p_1353->g_9 p_1353->g_1209 p_1353->g_219 p_1353->g_86 p_1353->g_673 p_1353->g_303
 */
int32_t * func_14(int32_t * p_15, struct S0 * p_1353)
{ /* block id: 433 */
    uint8_t l_1183 = 0x77L;
    VECTOR(uint16_t, 16) l_1186 = (VECTOR(uint16_t, 16))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0x28D1L), 0x28D1L), 0x28D1L, 65529UL, 0x28D1L, (VECTOR(uint16_t, 2))(65529UL, 0x28D1L), (VECTOR(uint16_t, 2))(65529UL, 0x28D1L), 65529UL, 0x28D1L, 65529UL, 0x28D1L);
    VECTOR(uint32_t, 16) l_1198 = (VECTOR(uint32_t, 16))(0xBE4AE169L, (VECTOR(uint32_t, 4))(0xBE4AE169L, (VECTOR(uint32_t, 2))(0xBE4AE169L, 0x75A5604CL), 0x75A5604CL), 0x75A5604CL, 0xBE4AE169L, 0x75A5604CL, (VECTOR(uint32_t, 2))(0xBE4AE169L, 0x75A5604CL), (VECTOR(uint32_t, 2))(0xBE4AE169L, 0x75A5604CL), 0xBE4AE169L, 0x75A5604CL, 0xBE4AE169L, 0x75A5604CL);
    VECTOR(uint32_t, 8) l_1199 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xC3356876L), 0xC3356876L), 0xC3356876L, 1UL, 0xC3356876L);
    uint8_t l_1200 = 0x85L;
    uint16_t *l_1201 = (void*)0;
    int32_t l_1202 = 2L;
    uint64_t *l_1203[4][1][3] = {{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}}};
    int32_t *l_1204 = (void*)0;
    int32_t *l_1205 = &p_1353->g_9;
    uint8_t *l_1207[1][5] = {{&p_1353->g_193,&p_1353->g_193,&p_1353->g_193,&p_1353->g_193,&p_1353->g_193}};
    uint8_t **l_1206 = &l_1207[0][1];
    uint32_t **l_1216[3][8] = {{&p_1353->g_764,(void*)0,&p_1353->g_764,&p_1353->g_764,&p_1353->g_764,(void*)0,&p_1353->g_764,&p_1353->g_764},{&p_1353->g_764,(void*)0,&p_1353->g_764,&p_1353->g_764,&p_1353->g_764,(void*)0,&p_1353->g_764,&p_1353->g_764},{&p_1353->g_764,(void*)0,&p_1353->g_764,&p_1353->g_764,&p_1353->g_764,(void*)0,&p_1353->g_764,&p_1353->g_764}};
    uint32_t **l_1226 = &p_1353->g_588;
    uint32_t ***l_1225 = &l_1226;
    VECTOR(uint8_t, 8) l_1229 = (VECTOR(uint8_t, 8))(0x00L, (VECTOR(uint8_t, 4))(0x00L, (VECTOR(uint8_t, 2))(0x00L, 247UL), 247UL), 247UL, 0x00L, 247UL);
    int32_t *l_1230 = &l_1202;
    int32_t *l_1231 = (void*)0;
    int32_t *l_1232 = (void*)0;
    int32_t *l_1233[1];
    int16_t *l_1234 = (void*)0;
    int16_t *l_1235 = (void*)0;
    int16_t *l_1236 = (void*)0;
    int32_t *l_1237[6] = {&p_1353->g_34,&p_1353->g_34,&p_1353->g_34,&p_1353->g_34,&p_1353->g_34,&p_1353->g_34};
    int16_t l_1238 = (-4L);
    int32_t *l_1239[10] = {&p_1353->g_357[1],&l_1202,(void*)0,&l_1202,&p_1353->g_357[1],&p_1353->g_357[1],&l_1202,(void*)0,&l_1202,&p_1353->g_357[1]};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1233[i] = (void*)0;
    (*l_1205) ^= (safe_mul_func_uint8_t_u_u(((((((l_1183 ^ ((safe_mod_func_uint16_t_u_u(l_1183, ((VECTOR(uint16_t, 16))(l_1186.s2ed0c178e2244662)).s6)) >= (((!((((((((VECTOR(int16_t, 2))(9L, 0x7648L)).lo , (void*)0) == ((safe_lshift_func_int16_t_s_s((l_1183 || (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 16))(p_1353->g_1189.s5203173000711157)).lo))).hi, ((VECTOR(uint16_t, 16))(p_1353->g_1190.s7271282344281a3c)).sdbce, ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 16))(0x25C8L, 65533UL, 0x2364L, (l_1186.sc < (safe_add_func_uint32_t_u_u(l_1186.s3, (l_1186.sf ^ ((*p_1353->g_588) = l_1186.s3))))), 9UL, 0x2E26L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65531UL, 0xD2A1L)), 65535UL, 65535UL)), (((VECTOR(int64_t, 2))(p_1353->g_1193.sea)).odd , (p_1353->g_369.x++)), (l_1202 ^= ((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_1198.s47)), 4294967295UL, ((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 2))(l_1199.s53)).yyyy, (uint32_t)(~(l_1200 , GROUP_DIVERGE(1, 1)))))), 4294967295UL)).s5, (*p_15))) , l_1198.s2)), 65535UL, ((VECTOR(uint16_t, 2))(65535UL)), 65531UL)), ((VECTOR(uint16_t, 16))(0x9092L))))).se32c))).xyyzyyww)).even)).x == 9L)), 3)) , l_1203[3][0][1])) & (*p_1353->g_85)) <= 0x3EA06AC9L) | p_1353->g_1124.sc) && FAKE_DIVERGE(p_1353->group_0_offset, get_group_id(0), 10))) , l_1199.s0) != p_1353->g_333[0][6][4]))) & (*p_1353->g_85)) < (-9L)) ^ 0x6F3F473C28ACD61BL) ^ FAKE_DIVERGE(p_1353->group_0_offset, get_group_id(0), 10)) & 18446744073709551609UL), p_1353->g_643.s3));
    (*p_1353->g_1208) = l_1206;
    l_1238 |= ((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_1353->g_1211.s22)), 0UL, 0x1FF2L, ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 4))(0xB931L, ((VECTOR(uint16_t, 2))(p_1353->g_1212.sa1)), 0xA15FL)).odd, ((VECTOR(uint16_t, 8))(p_1353->g_1213.xxxyyyyx)).s30))), 6UL, ((safe_mod_func_int16_t_s_s((((l_1216[1][7] != &p_1353->g_764) > ((((((((p_1353->g_303.z |= ((((+(((!((safe_rshift_func_uint8_t_u_u((**p_1353->g_1209), 1)) , (p_1353->g_673 = ((*p_1353->g_85) = (safe_mul_func_uint8_t_u_u((*l_1205), ((((p_1353->g_219.s7 = ((((safe_div_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u((l_1225 == &l_1226), ((safe_sub_func_uint32_t_u_u((p_1353->g_291.z != ((VECTOR(uint8_t, 8))(l_1229.s17770336)).s3), ((*l_1230) ^= ((1L > (*p_15)) , (*p_15))))) , p_1353->g_109.w))), (*l_1205))) <= 0x7CA4L) <= 0UL) || (*l_1230))) , (*l_1205)) > (**p_1353->g_1209)) == FAKE_DIVERGE(p_1353->group_0_offset, get_group_id(0), 10)))))))) >= p_1353->g_562.x) <= (*l_1205))) , l_1207[0][2]) != l_1207[0][4]) > (*l_1205))) ^ 1L) , (*l_1205)) && (*l_1230)) < p_1353->g_302) >= (*l_1205)) , p_1353->g_571.w) , (*l_1205))) > 65535UL), p_1353->g_646.sb)) , 0xD72DL), ((VECTOR(uint16_t, 2))(0x1832L)), p_1353->g_987.x, (*l_1205), ((VECTOR(uint16_t, 2))(65532UL)), 0x9B05L, 1UL)))).s1e)))).lo <= 2UL) < (*l_1205));
    l_1205 = l_1239[9];
    return p_15;
}


/* ------------------------------------------ */
/* 
 * reads : p_1353->g_820 p_1353->g_143 p_1353->g_144 p_1353->g_1117 p_1353->g_91 p_1353->g_288 p_1353->g_140 p_1353->g_9
 * writes: p_1353->g_764 p_1353->g_1090
 */
int32_t * func_16(int64_t  p_17, uint32_t  p_18, int32_t * p_19, struct S0 * p_1353)
{ /* block id: 425 */
    uint32_t *l_1167 = &p_1353->g_267;
    uint32_t **l_1168[9][2] = {{&p_1353->g_764,&l_1167},{&p_1353->g_764,&l_1167},{&p_1353->g_764,&l_1167},{&p_1353->g_764,&l_1167},{&p_1353->g_764,&l_1167},{&p_1353->g_764,&l_1167},{&p_1353->g_764,&l_1167},{&p_1353->g_764,&l_1167},{&p_1353->g_764,&l_1167}};
    int32_t l_1169[10];
    int32_t l_1172 = 1L;
    VECTOR(uint8_t, 8) l_1178 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL);
    int32_t *l_1179 = &l_1169[9];
    int i, j;
    for (i = 0; i < 10; i++)
        l_1169[i] = 1L;
    l_1172 = (((safe_add_func_int16_t_s_s(((safe_mod_func_int8_t_s_s((&p_1353->g_141[7][1][4] != (((l_1169[3] ^= ((p_1353->g_764 = l_1167) != (void*)0)) > (safe_rshift_func_int16_t_s_s(((l_1172 | (((p_1353->g_1090.w = (((VECTOR(int64_t, 4))(l_1172, ((VECTOR(int64_t, 2))(0x0D23BD79A9DF9199L, 0x3AD6BCDB9C91255BL)), 0L)).w | p_1353->g_820)) , 3L) && (((l_1172 != (safe_div_func_uint32_t_u_u(((safe_add_func_int64_t_s_s((safe_unary_minus_func_uint8_t_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_1178.s66)), 0x98L, 6UL)).x)), (*p_1353->g_143))) && p_1353->g_1117.y), 0x835604D2L))) < p_18) , p_17))) && 255UL), 11))) , (void*)0)), p_1353->g_91)) | l_1178.s0), 0UL)) , p_1353->g_288.x) , (*p_1353->g_140));
    l_1179 = p_19;
    return &p_1353->g_357[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1353->g_1154 p_1353->g_1161 p_1353->g_34
 * writes: p_1353->g_1154
 */
uint32_t  func_26(uint8_t  p_27, int64_t  p_28, int32_t * p_29, uint64_t  p_30, int32_t * p_31, struct S0 * p_1353)
{ /* block id: 419 */
    int32_t *l_1148 = &p_1353->g_34;
    int32_t l_1149 = 0x6D3B6FD1L;
    int32_t *l_1150 = &p_1353->g_357[3];
    int32_t *l_1151 = (void*)0;
    int32_t *l_1152 = &l_1149;
    int32_t *l_1153[5][6][3] = {{{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3}},{{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3}},{{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3}},{{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3}},{{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3},{&l_1149,&p_1353->g_34,&p_1353->g_3}}};
    uint32_t **l_1157 = &p_1353->g_588;
    uint16_t l_1158[7][6][6] = {{{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL}},{{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL}},{{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL}},{{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL}},{{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL}},{{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL}},{{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL},{0x6E81L,9UL,0x6E81L,0xF121L,0UL,4UL}}};
    int i, j, k;
    p_1353->g_1154--;
    (*l_1152) = (l_1157 == (void*)0);
    ++l_1158[3][2][5];
    (*l_1152) = ((VECTOR(int32_t, 2))(p_1353->g_1161.wz)).even;
    return (*l_1148);
}


/* ------------------------------------------ */
/* 
 * reads : p_1353->g_34 p_1353->g_721 p_1353->g_357 p_1353->g_1117 p_1353->g_142 p_1353->g_1124 p_1353->g_1129 p_1353->g_85 p_1353->g_86 p_1353->g_80 p_1353->g_9 p_1353->g_141
 * writes: p_1353->g_34 p_1353->g_142 p_1353->g_82 p_1353->g_141 p_1353->g_357 p_1353->g_1146
 */
uint16_t  func_32(int32_t * p_33, struct S0 * p_1353)
{ /* block id: 15 */
    int32_t l_37 = 0x658ED0BDL;
    VECTOR(uint16_t, 2) l_38 = (VECTOR(uint16_t, 2))(1UL, 0UL);
    VECTOR(int32_t, 8) l_39 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
    int32_t *l_1053 = &p_1353->g_357[3];
    int64_t l_1086 = 2L;
    VECTOR(uint64_t, 16) l_1091 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 1UL, 18446744073709551610UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551610UL), (VECTOR(uint64_t, 2))(1UL, 18446744073709551610UL), 1UL, 18446744073709551610UL, 1UL, 18446744073709551610UL);
    int32_t *l_1104 = &p_1353->g_357[0];
    uint32_t **l_1112 = &p_1353->g_764;
    int64_t *l_1119[4][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int64_t **l_1118 = &l_1119[3][5];
    VECTOR(int16_t, 16) l_1125 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L), (VECTOR(int16_t, 2))((-1L), (-2L)), (VECTOR(int16_t, 2))((-1L), (-2L)), (-1L), (-2L), (-1L), (-2L));
    VECTOR(int16_t, 16) l_1126 = (VECTOR(int16_t, 16))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, (-9L)), (-9L)), (-9L), 4L, (-9L), (VECTOR(int16_t, 2))(4L, (-9L)), (VECTOR(int16_t, 2))(4L, (-9L)), 4L, (-9L), 4L, (-9L));
    VECTOR(int16_t, 8) l_1127 = (VECTOR(int16_t, 8))(0x2330L, (VECTOR(int16_t, 4))(0x2330L, (VECTOR(int16_t, 2))(0x2330L, 1L), 1L), 1L, 0x2330L, 1L);
    VECTOR(int16_t, 4) l_1128 = (VECTOR(int16_t, 4))(0x0C8CL, (VECTOR(int16_t, 2))(0x0C8CL, 0x6FD2L), 0x6FD2L);
    VECTOR(int16_t, 4) l_1130 = (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 1L), 1L);
    uint32_t l_1135 = 0x2F2F6903L;
    int32_t l_1136[10][6] = {{0x67D6FD02L,0x24A6FEFEL,0x24A6FEFEL,0x67D6FD02L,0x0374BD26L,0x26FC55F5L},{0x67D6FD02L,0x24A6FEFEL,0x24A6FEFEL,0x67D6FD02L,0x0374BD26L,0x26FC55F5L},{0x67D6FD02L,0x24A6FEFEL,0x24A6FEFEL,0x67D6FD02L,0x0374BD26L,0x26FC55F5L},{0x67D6FD02L,0x24A6FEFEL,0x24A6FEFEL,0x67D6FD02L,0x0374BD26L,0x26FC55F5L},{0x67D6FD02L,0x24A6FEFEL,0x24A6FEFEL,0x67D6FD02L,0x0374BD26L,0x26FC55F5L},{0x67D6FD02L,0x24A6FEFEL,0x24A6FEFEL,0x67D6FD02L,0x0374BD26L,0x26FC55F5L},{0x67D6FD02L,0x24A6FEFEL,0x24A6FEFEL,0x67D6FD02L,0x0374BD26L,0x26FC55F5L},{0x67D6FD02L,0x24A6FEFEL,0x24A6FEFEL,0x67D6FD02L,0x0374BD26L,0x26FC55F5L},{0x67D6FD02L,0x24A6FEFEL,0x24A6FEFEL,0x67D6FD02L,0x0374BD26L,0x26FC55F5L},{0x67D6FD02L,0x24A6FEFEL,0x24A6FEFEL,0x67D6FD02L,0x0374BD26L,0x26FC55F5L}};
    uint16_t *l_1137 = &p_1353->g_82;
    int32_t **l_1138 = &p_1353->g_141[2][1][5];
    int i, j;
    for (p_1353->g_34 = 10; (p_1353->g_34 > (-14)); p_1353->g_34 = safe_sub_func_uint32_t_u_u(p_1353->g_34, 6))
    { /* block id: 18 */
        uint8_t l_41 = 255UL;
        int32_t l_60 = 0x4FB11589L;
        int64_t *l_701 = (void*)0;
        int64_t **l_700 = &l_701;
        int32_t l_1047[5];
        VECTOR(int16_t, 16) l_1067 = (VECTOR(int16_t, 16))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0L), 0L), 0L, 4L, 0L, (VECTOR(int16_t, 2))(4L, 0L), (VECTOR(int16_t, 2))(4L, 0L), 4L, 0L, 4L, 0L);
        VECTOR(uint16_t, 8) l_1087 = (VECTOR(uint16_t, 8))(0x094AL, (VECTOR(uint16_t, 4))(0x094AL, (VECTOR(uint16_t, 2))(0x094AL, 3UL), 3UL), 3UL, 0x094AL, 3UL);
        uint32_t *l_1100 = &p_1353->g_267;
        int32_t *l_1105 = &p_1353->g_357[3];
        int i;
        for (i = 0; i < 5; i++)
            l_1047[i] = 0x5C3DDDDEL;
        if (l_37)
            break;
    }
    (*l_1138) = (((3UL > ((void*)0 != &p_1353->g_335)) & (!((VECTOR(int16_t, 8))(0x6CC9L, 0x089FL, ((VECTOR(int16_t, 4))(((safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(p_1353->g_721.s9, (*l_1053))), (*l_1053))) ^ (((VECTOR(uint8_t, 4))(p_1353->g_1117.yxxx)).x == (((p_1353->g_142 = p_1353->g_142) != ((*l_1118) = &l_1086)) , ((((*l_1137) = (safe_rshift_func_int16_t_s_u((((((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(p_1353->g_1124.sf5872617)).s3375173352526371, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(l_1125.s8ab2)).even, ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(l_1126.s7086)).even, ((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 2))(l_1127.s27)).yyyyxyxxyxxyyyyx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_1128.wxwwxxyz)).s71)).yxxy)).zxyzywxzzzywwyxw))).sf6, ((VECTOR(int16_t, 2))(p_1353->g_1129.yx))))).xyyyyyyxxxxxxxyx, ((VECTOR(int16_t, 16))(1L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_1130.yz)).yxyy)).y, (safe_lshift_func_uint8_t_u_s(((safe_mod_func_uint32_t_u_u((&p_1353->g_267 != &p_1353->g_267), (*l_1104))) > l_1135), 3)), 0x7CFFL, ((VECTOR(int16_t, 4))(8L)), 2L, 0x4D47L, (-3L), ((VECTOR(int16_t, 2))(1L)), (*p_1353->g_85), 0x2E0CL, 0x64A5L))))).s06, ((VECTOR(int16_t, 2))(0x38E3L))))).yxxyyyxxyxyyxyxx)), ((VECTOR(int16_t, 16))((-1L)))))).s6, (*p_1353->g_85))) > (*l_1053)) > p_1353->g_80.s3) , l_1136[0][3]) || (*l_1053)), 9))) > (*l_1104)) , 1UL)))), ((VECTOR(int16_t, 2))(1L)), (-1L))), 1L, (-1L))).s7)) , &p_1353->g_34);
    for (p_1353->g_34 = 0; (p_1353->g_34 < 20); p_1353->g_34++)
    { /* block id: 413 */
        uint8_t l_1143 = 0x79L;
        int32_t **l_1144 = (void*)0;
        int32_t **l_1145[6][9] = {{&l_1104,&l_1053,&l_1104,&l_1104,&l_1053,&l_1104,&l_1104,&l_1053,&l_1104},{&l_1104,&l_1053,&l_1104,&l_1104,&l_1053,&l_1104,&l_1104,&l_1053,&l_1104},{&l_1104,&l_1053,&l_1104,&l_1104,&l_1053,&l_1104,&l_1104,&l_1053,&l_1104},{&l_1104,&l_1053,&l_1104,&l_1104,&l_1053,&l_1104,&l_1104,&l_1053,&l_1104},{&l_1104,&l_1053,&l_1104,&l_1104,&l_1053,&l_1104,&l_1104,&l_1053,&l_1104},{&l_1104,&l_1053,&l_1104,&l_1104,&l_1053,&l_1104,&l_1104,&l_1053,&l_1104}};
        int i, j;
        (*l_1104) = ((safe_add_func_uint16_t_u_u(65535UL, (l_1143 | 0x3DL))) > (*p_33));
        p_1353->g_1146 = ((*l_1138) = (*l_1138));
    }
    return (*l_1104);
}


/* ------------------------------------------ */
/* 
 * reads : p_1353->g_546 p_1353->g_170 p_1353->g_377 p_1353->g_301 p_1353->g_40 p_1353->g_820 p_1353->g_302 p_1353->g_9 p_1353->g_142 p_1353->g_134 p_1353->g_85 p_1353->g_82 p_1353->g_86 p_1353->g_357 p_1353->g_724 p_1353->l_comm_values p_1353->g_987 p_1353->g_109 p_1353->g_588 p_1353->g_335 p_1353->g_167 p_1353->g_562 p_1353->g_369 p_1353->g_193 p_1353->g_1023 p_1353->g_34 p_1353->g_220 p_1353->g_643
 * writes: p_1353->g_820 p_1353->g_141 p_1353->g_302 p_1353->g_80 p_1353->g_357 p_1353->g_335 p_1353->g_193 p_1353->g_142 p_1353->g_421
 */
int32_t  func_42(int16_t  p_43, int32_t * p_44, uint64_t  p_45, int32_t  p_46, struct S0 * p_1353)
{ /* block id: 282 */
    int32_t l_804 = 1L;
    VECTOR(uint64_t, 8) l_809 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x60078B0EB0501F0FL), 0x60078B0EB0501F0FL), 0x60078B0EB0501F0FL, 1UL, 0x60078B0EB0501F0FL);
    int8_t l_810 = 0x1DL;
    int32_t l_816 = (-4L);
    int32_t l_817 = 9L;
    int32_t l_818 = 0x7CE6AEF5L;
    int32_t l_819[4][1];
    uint16_t l_840 = 3UL;
    int32_t **l_849 = &p_1353->g_141[2][1][5];
    int32_t **l_850 = &p_1353->g_141[2][1][5];
    int32_t **l_851 = &p_1353->g_141[2][1][5];
    int32_t **l_852 = &p_1353->g_141[6][0][3];
    uint64_t *l_853 = (void*)0;
    uint64_t *l_854 = (void*)0;
    uint64_t *l_857 = (void*)0;
    uint64_t *l_858 = (void*)0;
    uint64_t *l_859 = (void*)0;
    uint64_t l_864 = 18446744073709551615UL;
    VECTOR(int32_t, 2) l_865 = (VECTOR(int32_t, 2))((-1L), (-7L));
    int32_t l_868 = (-1L);
    VECTOR(uint16_t, 4) l_873 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65534UL), 65534UL);
    uint64_t **l_880 = &l_854;
    uint64_t **l_884 = &l_853;
    uint16_t l_976 = 0xBD9DL;
    VECTOR(uint64_t, 8) l_991 = (VECTOR(uint64_t, 8))(0x084064A417B99C78L, (VECTOR(uint64_t, 4))(0x084064A417B99C78L, (VECTOR(uint64_t, 2))(0x084064A417B99C78L, 1UL), 1UL), 1UL, 0x084064A417B99C78L, 1UL);
    VECTOR(int32_t, 8) l_1005 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-7L)), (-7L)), (-7L), (-1L), (-7L));
    VECTOR(int16_t, 2) l_1021 = (VECTOR(int16_t, 2))((-3L), 1L);
    VECTOR(int16_t, 8) l_1035 = (VECTOR(int16_t, 8))(0x70C4L, (VECTOR(int16_t, 4))(0x70C4L, (VECTOR(int16_t, 2))(0x70C4L, 0x2028L), 0x2028L), 0x2028L, 0x70C4L, 0x2028L);
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_819[i][j] = 0x57A2E411L;
    }
    if (((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))((safe_mod_func_uint16_t_u_u(0x25C8L, (~(GROUP_DIVERGE(0, 1) != 0x0903L)))), (+((safe_lshift_func_int8_t_s_s((!p_46), l_804)) > (p_1353->g_546 == ((safe_div_func_uint32_t_u_u(l_804, p_43)) , (((2UL ^ (safe_div_func_int16_t_s_s(((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_809.s3567477373625751)).hi)).s1 || 1UL) ^ p_46), p_1353->g_170.s7))) && l_804) , p_1353->g_546))))), p_1353->g_377.z, ((VECTOR(int8_t, 4))(0L)), (-1L))).odd)).even, ((VECTOR(int8_t, 2))(0x13L)), ((VECTOR(int8_t, 2))(0L))))), (-1L), 1L)).x, p_1353->g_301.x)) , GROUP_DIVERGE(2, 1)) != 0x4D5538652ED7B3C8L), 0x1186L)) != FAKE_DIVERGE(p_1353->global_1_offset, get_global_id(1), 10)), p_1353->g_40.y)), p_43)) != l_809.s4), p_1353->g_377.z)) != l_810))
    { /* block id: 283 */
        uint8_t l_811[7][8] = {{5UL,5UL,255UL,1UL,0x54L,7UL,2UL,251UL},{5UL,5UL,255UL,1UL,0x54L,7UL,2UL,251UL},{5UL,5UL,255UL,1UL,0x54L,7UL,2UL,251UL},{5UL,5UL,255UL,1UL,0x54L,7UL,2UL,251UL},{5UL,5UL,255UL,1UL,0x54L,7UL,2UL,251UL},{5UL,5UL,255UL,1UL,0x54L,7UL,2UL,251UL},{5UL,5UL,255UL,1UL,0x54L,7UL,2UL,251UL}};
        int32_t *l_812 = (void*)0;
        int32_t l_813 = 1L;
        int32_t *l_814 = &l_813;
        int32_t *l_815[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int i, j;
        l_813 = l_811[0][0];
        p_1353->g_820--;
    }
    else
    { /* block id: 286 */
        int32_t **l_823 = &p_1353->g_141[2][1][5];
        int32_t *l_826 = &l_819[1][0];
        int32_t *l_827 = &p_1353->g_357[6];
        int32_t *l_828 = (void*)0;
        int32_t *l_829 = &l_819[0][0];
        int32_t *l_830 = &l_816;
        int32_t *l_831 = &p_1353->g_357[3];
        int32_t *l_832 = (void*)0;
        int32_t *l_833 = &l_817;
        int32_t *l_834 = (void*)0;
        int32_t *l_835 = &p_1353->g_357[3];
        int32_t *l_836 = &l_816;
        int32_t *l_837 = (void*)0;
        int32_t *l_838 = &l_816;
        int32_t *l_839[6];
        int i;
        for (i = 0; i < 6; i++)
            l_839[i] = (void*)0;
        (*l_823) = &p_1353->g_357[3];
        (*l_823) = p_44;
        for (p_1353->g_302 = 0; (p_1353->g_302 < 42); p_1353->g_302 = safe_add_func_int8_t_s_s(p_1353->g_302, 5))
        { /* block id: 291 */
            return (*p_44);
        }
        --l_840;
    }
    if ((safe_mul_func_uint8_t_u_u(((&p_1353->g_9 == &l_819[3][0]) >= (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((((p_44 = &l_816) == (void*)0) , (p_1353->g_80.s6 = (p_45++))) > (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((((void*)0 != p_1353->g_142) , (l_864 != (((VECTOR(int32_t, 16))(l_865.yyxyyxxxyyyxyyxy)).sa >= (p_1353->g_134.sc , (safe_rshift_func_int16_t_s_u((((l_868 != p_43) <= p_46) & p_46), p_43)))))) , (*p_1353->g_85)), 0xF8C0L)), p_43))), p_43)), (*p_1353->g_85)))), p_46)))
    { /* block id: 299 */
        uint32_t ***l_869 = (void*)0;
        int32_t l_872 = 0x3D2B3D72L;
        uint16_t *l_874 = (void*)0;
        uint16_t *l_875 = (void*)0;
        uint16_t *l_876 = (void*)0;
        uint16_t *l_877 = (void*)0;
        uint16_t *l_878 = (void*)0;
        uint16_t *l_879 = &p_1353->g_820;
        uint64_t ***l_881 = (void*)0;
        uint64_t **l_883 = (void*)0;
        uint64_t ***l_882[1][5][9] = {{{(void*)0,(void*)0,&l_883,&l_883,&l_883,&l_880,&l_880,&l_883,&l_880},{(void*)0,(void*)0,&l_883,&l_883,&l_883,&l_880,&l_880,&l_883,&l_880},{(void*)0,(void*)0,&l_883,&l_883,&l_883,&l_880,&l_880,&l_883,&l_880},{(void*)0,(void*)0,&l_883,&l_883,&l_883,&l_880,&l_880,&l_883,&l_880},{(void*)0,(void*)0,&l_883,&l_883,&l_883,&l_880,&l_880,&l_883,&l_880}}};
        VECTOR(uint8_t, 8) l_887 = (VECTOR(uint8_t, 8))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0UL), 0UL), 0UL, 4UL, 0UL);
        uint32_t l_892 = 0UL;
        int32_t l_931 = 0x2A78AE7FL;
        VECTOR(int32_t, 16) l_932 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), (-9L)), (-9L)), (-9L), (-6L), (-9L), (VECTOR(int32_t, 2))((-6L), (-9L)), (VECTOR(int32_t, 2))((-6L), (-9L)), (-6L), (-9L), (-6L), (-9L));
        int i, j, k;
        if ((l_869 == ((((((VECTOR(uint16_t, 8))(p_1353->g_301.y, 0xAB32L, 0x565AL, 65535UL, ((safe_lshift_func_uint16_t_u_s(0xD87BL, l_872)) , ((*l_879) = ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 2))(0xA58BL, 0x3207L)).xyxx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_873.xwyy)).zyxxwzyywwxyxzzy)).s22c2)).zwyzyxwx)).lo)).lo)).xxyyyxxy)).even))).yzyzzzyx)).odd)).y)), 7UL, 65535UL, 0UL)).s4 <= 0UL) , &p_45) != ((l_880 == (l_884 = &l_857)) , &p_1353->g_84)) , (void*)0)))
        { /* block id: 302 */
            (*l_852) = &l_872;
        }
        else
        { /* block id: 304 */
            int32_t *l_888 = &p_1353->g_357[3];
            int32_t *l_889 = (void*)0;
            int32_t *l_890 = &l_819[0][0];
            int32_t *l_891[8][8][4] = {{{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]}},{{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]}},{{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]}},{{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]}},{{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]}},{{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]}},{{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]}},{{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]},{&l_817,&p_1353->g_3,(void*)0,&p_1353->g_357[2]}}};
            int i, j, k;
            (*l_888) &= ((*p_44) |= (safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(l_887.s4670372505106016)).sb, 5)));
            --l_892;
            for (p_1353->g_820 = 25; (p_1353->g_820 >= 45); p_1353->g_820 = safe_add_func_int8_t_s_s(p_1353->g_820, 2))
            { /* block id: 310 */
                int32_t l_928 = 0x150F5B25L;
                int32_t l_929 = 1L;
                int32_t l_930 = 0x2CE9C265L;
                int32_t l_933 = 1L;
                int32_t l_934 = (-1L);
                int32_t l_935 = 0x17E91B95L;
                int32_t l_936 = 7L;
                int32_t l_937 = (-1L);
                int32_t l_938[3][2][3] = {{{0x6149FFA5L,0L,0x6149FFA5L},{0x6149FFA5L,0L,0x6149FFA5L}},{{0x6149FFA5L,0L,0x6149FFA5L},{0x6149FFA5L,0L,0x6149FFA5L}},{{0x6149FFA5L,0L,0x6149FFA5L},{0x6149FFA5L,0L,0x6149FFA5L}}};
                uint8_t l_939 = 255UL;
                int i, j, k;
                if ((atomic_inc(&p_1353->g_atomic_input[51 * get_linear_group_id() + 25]) == 9))
                { /* block id: 312 */
                    int32_t l_897 = 0x706F95E6L;
                    uint32_t l_910 = 0x4398751AL;
                    int16_t l_916 = (-3L);
                    uint8_t l_917 = 0xA9L;
                    int8_t l_918 = 0x41L;
                    int32_t l_919 = 0x7A418970L;
                    int32_t l_920 = 0x6454641EL;
                    int64_t l_921[7] = {0L,0L,0L,0L,0L,0L,0L};
                    int8_t l_922 = 0L;
                    int16_t l_923 = 0x48A3L;
                    int32_t l_924 = 0L;
                    uint32_t l_925[10];
                    int i;
                    for (i = 0; i < 10; i++)
                        l_925[i] = 0UL;
                    for (l_897 = (-24); (l_897 >= 18); l_897 = safe_add_func_uint16_t_u_u(l_897, 2))
                    { /* block id: 315 */
                        int32_t l_900 = (-4L);
                        int64_t l_901 = 0x757589A04C51CBE5L;
                        int32_t *l_902 = &l_900;
                        int32_t *l_903[10][6][3] = {{{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900}},{{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900}},{{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900}},{{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900}},{{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900}},{{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900}},{{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900}},{{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900}},{{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900}},{{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900},{&l_900,(void*)0,&l_900}}};
                        int32_t *l_904[6] = {&l_900,&l_900,&l_900,&l_900,&l_900,&l_900};
                        int32_t *l_905 = &l_900;
                        VECTOR(int32_t, 4) l_906 = (VECTOR(int32_t, 4))(0x4F5E2768L, (VECTOR(int32_t, 2))(0x4F5E2768L, 0x1180FD8AL), 0x1180FD8AL);
                        uint8_t l_907 = 252UL;
                        VECTOR(int32_t, 16) l_908 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                        int32_t l_909 = 0x27972DD6L;
                        int i, j, k;
                        l_903[8][1][2] = (((l_901 = l_900) , (-1L)) , l_902);
                        l_905 = l_904[0];
                        l_909 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_906.zy)), (-7L), 0L, l_907, ((VECTOR(int32_t, 2))(l_908.sbd)), (-1L))).s1;
                    }
                    if (l_910)
                    { /* block id: 321 */
                        VECTOR(uint16_t, 8) l_911 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), 65535UL, 0UL, 65535UL);
                        int i;
                        ++l_911.s6;
                        l_897 &= 0x2DF326BFL;
                        l_897 = ((VECTOR(int32_t, 2))((-3L), 0x16B2DF0FL)).even;
                    }
                    else
                    { /* block id: 325 */
                        uint8_t l_914 = 254UL;
                        uint32_t l_915[2][6][9] = {{{4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L,4294967289UL,4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L},{4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L,4294967289UL,4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L},{4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L,4294967289UL,4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L},{4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L,4294967289UL,4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L},{4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L,4294967289UL,4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L},{4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L,4294967289UL,4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L}},{{4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L,4294967289UL,4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L},{4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L,4294967289UL,4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L},{4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L,4294967289UL,4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L},{4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L,4294967289UL,4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L},{4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L,4294967289UL,4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L},{4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L,4294967289UL,4294967289UL,0x6FE76EE0L,0x5C661876L,0x6FE76EE0L}}};
                        int i, j, k;
                        l_915[1][0][5] = (l_897 = l_914);
                    }
                    l_917 &= ((l_916 = 0x7BF004ED511E396FL) , 0x11026F83L);
                    l_925[6]++;
                    unsigned int result = 0;
                    result += l_897;
                    result += l_910;
                    result += l_916;
                    result += l_917;
                    result += l_918;
                    result += l_919;
                    result += l_920;
                    int l_921_i0;
                    for (l_921_i0 = 0; l_921_i0 < 7; l_921_i0++) {
                        result += l_921[l_921_i0];
                    }
                    result += l_922;
                    result += l_923;
                    result += l_924;
                    int l_925_i0;
                    for (l_925_i0 = 0; l_925_i0 < 10; l_925_i0++) {
                        result += l_925[l_925_i0];
                    }
                    atomic_add(&p_1353->g_special_values[51 * get_linear_group_id() + 25], result);
                }
                else
                { /* block id: 332 */
                    (1 + 1);
                }
                (*l_851) = &l_872;
                l_939++;
            }
            if ((atomic_inc(&p_1353->g_atomic_input[51 * get_linear_group_id() + 36]) == 6))
            { /* block id: 339 */
                int32_t l_942[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_942[i] = (-6L);
                for (l_942[2] = (-9); (l_942[2] <= (-30)); --l_942[2])
                { /* block id: 342 */
                    uint32_t l_945 = 2UL;
                    uint64_t l_946 = 0x2ECF719568265E75L;
                    int32_t l_947 = 7L;
                    VECTOR(uint64_t, 4) l_948 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL);
                    VECTOR(uint64_t, 16) l_949 = (VECTOR(uint64_t, 16))(18446744073709551612UL, (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x2AA8BF727870D331L), 0x2AA8BF727870D331L), 0x2AA8BF727870D331L, 18446744073709551612UL, 0x2AA8BF727870D331L, (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x2AA8BF727870D331L), (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x2AA8BF727870D331L), 18446744073709551612UL, 0x2AA8BF727870D331L, 18446744073709551612UL, 0x2AA8BF727870D331L);
                    VECTOR(uint64_t, 4) l_950 = (VECTOR(uint64_t, 4))(0x49174E0F58EF58BFL, (VECTOR(uint64_t, 2))(0x49174E0F58EF58BFL, 1UL), 1UL);
                    uint8_t l_951 = 255UL;
                    VECTOR(int32_t, 8) l_952 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x14050B87L), 0x14050B87L), 0x14050B87L, 1L, 0x14050B87L);
                    int32_t l_967 = 0x65665248L;
                    int32_t *l_968 = (void*)0;
                    int32_t *l_969 = &l_947;
                    int i;
                    l_946 = l_945;
                    if (((l_951 = (l_947 , ((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_948.yyxx)).wyyzzzyw)).s77)).xyyy, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_949.sfa)).xyyxyxxy)).odd, ((VECTOR(uint64_t, 2))(l_950.xx)).xyxx))).xxwxywzyyxzwxxzx))).s0)) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(l_952.s63)), 4L)).lo)).hi))
                    { /* block id: 345 */
                        uint16_t l_953 = 65535UL;
                        l_953--;
                        l_947 = (-5L);
                    }
                    else
                    { /* block id: 348 */
                        int64_t l_956 = 2L;
                        int32_t l_957 = (-4L);
                        VECTOR(uint16_t, 4) l_958 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL);
                        VECTOR(uint16_t, 16) l_959 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xBAFBL), 0xBAFBL), 0xBAFBL, 0UL, 0xBAFBL, (VECTOR(uint16_t, 2))(0UL, 0xBAFBL), (VECTOR(uint16_t, 2))(0UL, 0xBAFBL), 0UL, 0xBAFBL, 0UL, 0xBAFBL);
                        uint32_t l_960 = 0x2085AD1EL;
                        int8_t l_961 = (-1L);
                        uint32_t l_962[1][7][10] = {{{0UL,0UL,9UL,0xF3CDE010L,0UL,0xB28F1B41L,1UL,1UL,1UL,0xB28F1B41L},{0UL,0UL,9UL,0xF3CDE010L,0UL,0xB28F1B41L,1UL,1UL,1UL,0xB28F1B41L},{0UL,0UL,9UL,0xF3CDE010L,0UL,0xB28F1B41L,1UL,1UL,1UL,0xB28F1B41L},{0UL,0UL,9UL,0xF3CDE010L,0UL,0xB28F1B41L,1UL,1UL,1UL,0xB28F1B41L},{0UL,0UL,9UL,0xF3CDE010L,0UL,0xB28F1B41L,1UL,1UL,1UL,0xB28F1B41L},{0UL,0UL,9UL,0xF3CDE010L,0UL,0xB28F1B41L,1UL,1UL,1UL,0xB28F1B41L},{0UL,0UL,9UL,0xF3CDE010L,0UL,0xB28F1B41L,1UL,1UL,1UL,0xB28F1B41L}}};
                        uint64_t l_963 = 0UL;
                        int32_t l_964 = (-1L);
                        VECTOR(uint16_t, 2) l_965 = (VECTOR(uint16_t, 2))(1UL, 0x46E0L);
                        int32_t *l_966 = &l_957;
                        int i, j, k;
                        l_957 ^= l_956;
                        l_966 = (((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xB89FL, 0UL)).xyxx)).wzxyyyxz)).even, ((VECTOR(uint16_t, 4))(0UL, 0xB884L, 0x108DL, 0UL)), ((VECTOR(uint16_t, 2))(1UL, 65526UL)).yyxy))).even, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(65526UL, 0xA875L)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_958.zxwy)).odd)).yxxxyxxy)), 6UL, 0xE0A5L, 65535UL, ((VECTOR(uint16_t, 4))(l_959.saffe)), 65535UL)).odd)).odd)).zzzyyzxwwwwxyyxz)).s7, l_960, l_961, l_962[0][5][3], (l_963 = FAKE_DIVERGE(p_1353->global_0_offset, get_global_id(0), 10)), l_964, 0x2920L, 65526UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_965.yx)), 0x470CL, 65534UL)), 0UL, 0x3C7DL)).s3cc2)).yzwxxzzxxyzxwyxz)).s9f))).lo , (void*)0);
                        l_952.s3 |= 0x50C3E5EDL;
                    }
                    l_967 ^= 0x0CFE9AD4L;
                    l_969 = l_968;
                }
                unsigned int result = 0;
                int l_942_i0;
                for (l_942_i0 = 0; l_942_i0 < 5; l_942_i0++) {
                    result += l_942[l_942_i0];
                }
                atomic_add(&p_1353->g_special_values[51 * get_linear_group_id() + 36], result);
            }
            else
            { /* block id: 357 */
                (1 + 1);
            }
        }
    }
    else
    { /* block id: 361 */
        int64_t l_988 = 3L;
        int32_t l_996 = 6L;
        uint16_t *l_1006 = &p_1353->g_820;
        int32_t *l_1007 = &l_818;
        int64_t **l_1008 = &p_1353->g_142;
        VECTOR(int16_t, 2) l_1022 = (VECTOR(int16_t, 2))(1L, (-9L));
        uint32_t *l_1028[5];
        int32_t *l_1030 = (void*)0;
        int32_t *l_1031 = &l_996;
        int32_t *l_1032 = &l_817;
        uint32_t *l_1040 = (void*)0;
        uint16_t l_1041 = 65535UL;
        int i;
        for (i = 0; i < 5; i++)
            l_1028[i] = &p_1353->g_1029;
        (*l_1007) &= (p_46 ^ (safe_add_func_uint8_t_u_u((!(p_1353->g_193 |= ((safe_add_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(l_976, ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 8))((-1L), p_1353->g_724.x, 0x47E898A5BCD03F55L, ((safe_mod_func_int64_t_s_s(((((safe_add_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(((p_1353->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1353->tid, 35))] > (((((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((*p_1353->g_588) = ((l_988 |= ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(p_1353->g_987.xxyxyxxx)).s00)).lo) <= (p_1353->g_109.x , 0x12589D5E48A1FF8FL))) < (safe_div_func_uint16_t_u_u(((((VECTOR(uint64_t, 4))(l_991.s4113)).y , ((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(p_46, l_996)), 10)) >= (p_1353->g_335++))) , ((((safe_div_func_int8_t_s_s(((((+(safe_mod_func_int64_t_s_s((((((((*l_1006) = ((safe_div_func_int8_t_s_s(((((VECTOR(int32_t, 2))(l_1005.s53)).odd , p_44) != p_44), 8L)) & FAKE_DIVERGE(p_1353->local_0_offset, get_local_id(0), 10))) || p_43) ^ p_1353->g_82) > GROUP_DIVERGE(1, 1)) | p_46) <= l_996), p_1353->g_167.s1))) & p_1353->g_167.s5) < (-1L)) <= p_43), p_1353->g_335)) >= (-10L)) < 0x360D3057A7A43F9CL) ^ 0xBE2CC63AL)), (*p_1353->g_85)))), p_1353->g_167.s7)), l_996)) ^ 0x6AL) , (void*)0) == (void*)0) | 0x5387ED8DED39BD53L)) && 0x455757CAL), (*p_1353->g_85))) , p_1353->g_142) == (void*)0), l_996)) > p_1353->g_562.x) > (*p_44)) && p_1353->g_369.y), 8L)) < 0x7D14077FL), ((VECTOR(int64_t, 4))(0x6051F9D67504635DL)))).even, ((VECTOR(int64_t, 4))(1L))))).x)) < 0x102E0C98L), 0x50L)) > 0x09478B4CL))), l_996)));
        (*p_44) = (p_1353->g_987.x & ((p_1353->g_193 = (l_854 != ((*l_1008) = (FAKE_DIVERGE(p_1353->group_2_offset, get_group_id(2), 10) , l_859)))) < p_45));
        (*p_44) = (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((((*l_1006) ^= ((safe_sub_func_int32_t_s_s((*p_44), (l_1041 &= (safe_sub_func_int32_t_s_s((*p_44), (safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s(((((VECTOR(int16_t, 16))(6L, ((VECTOR(int16_t, 2))(l_1021.xy)), ((VECTOR(int16_t, 2))(0L, 0x6BA6L)), ((VECTOR(int16_t, 2))(1L, 0L)), 0L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_1022.xx)).xyyxyyyyxyyyyxyy)).s4a)).even, ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(2L, 3L)), ((VECTOR(uint8_t, 2))(0xFDL, 246UL))))), (p_46 >= (p_1353->g_421[3][0] = ((VECTOR(int8_t, 2))(0x6AL, 0x28L)).lo)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(1L, 0L)), 0x449DL, ((VECTOR(int16_t, 8))(p_1353->g_1023.s62261447)), ((VECTOR(int16_t, 4))((-1L), ((safe_lshift_func_int16_t_s_s(((*p_1353->g_588) > ((*l_1032) &= (((*l_1007) = 0x64732F75L) , ((*l_1031) = ((*l_1007) ^= (*p_44)))))), 12)) != (safe_lshift_func_int8_t_s_s(0L, 5))), 0x3C5EL, (-2L))), 0L)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 4))(l_1035.s3461)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 8))(2L, 0x5C4EL, 1L, (safe_sub_func_uint64_t_u_u(((((((p_46 ^ (((safe_div_func_uint32_t_u_u(((l_1040 = p_44) != &p_1353->g_267), 3L)) & p_46) >= 1UL)) || 0x01EE69F1L) , (*p_44)) && (*p_1353->g_588)) >= (*l_1032)) , 0x3A3B0F7D8A3C1EAAL), 0x7A0806C8E6554FCEL)), 0x6BD9L, ((VECTOR(int16_t, 2))(0x0F0EL)), 0x6B67L)).s5732065540240544, ((VECTOR(int16_t, 16))((-1L)))))).sbb)), 0x1F91L, 0x3813L))))).lo)).yyyyyxxyyyyyxyyy))).hi, ((VECTOR(int16_t, 8))((-1L)))))).s16)), (-1L), (-5L))).sc != 1L) ^ p_1353->g_34), p_1353->g_220.s4)), (-5L)))))))) & p_1353->g_643.s5)) || (*p_1353->g_85)), 11)), p_45));
    }
    for (l_840 = 0; (l_840 <= 59); l_840 = safe_add_func_int64_t_s_s(l_840, 1))
    { /* block id: 383 */
        int32_t *l_1044 = &p_1353->g_357[1];
        (*l_849) = l_1044;
        return (*l_1044);
    }
    return l_819[1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1353->g_82 p_1353->g_85 p_1353->g_86 p_1353->g_91 p_1353->g_143 p_1353->g_333 p_1353->g_303 p_1353->g_267 p_1353->g_3 p_1353->g_80 p_1353->g_760 p_1353->g_290 p_1353->g_421
 * writes: p_1353->g_82 p_1353->g_357 p_1353->g_302 p_1353->g_86 p_1353->g_80 p_1353->g_764
 */
int16_t  func_47(uint32_t  p_48, int32_t  p_49, int32_t * p_50, uint32_t  p_51, struct S0 * p_1353)
{ /* block id: 255 */
    int16_t l_715 = 0L;
    VECTOR(int8_t, 2) l_722 = (VECTOR(int8_t, 2))(1L, 0L);
    VECTOR(int8_t, 4) l_723 = (VECTOR(int8_t, 4))(0x54L, (VECTOR(int8_t, 2))(0x54L, 0x24L), 0x24L);
    VECTOR(int8_t, 8) l_725 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
    VECTOR(int8_t, 2) l_726 = (VECTOR(int8_t, 2))(0x61L, 1L);
    VECTOR(uint64_t, 2) l_731 = (VECTOR(uint64_t, 2))(4UL, 18446744073709551609UL);
    uint32_t **l_733 = &p_1353->g_588;
    uint32_t ***l_732 = &l_733;
    int32_t *l_737 = (void*)0;
    VECTOR(int32_t, 16) l_738 = (VECTOR(int32_t, 16))(0x55B9F7D5L, (VECTOR(int32_t, 4))(0x55B9F7D5L, (VECTOR(int32_t, 2))(0x55B9F7D5L, (-8L)), (-8L)), (-8L), 0x55B9F7D5L, (-8L), (VECTOR(int32_t, 2))(0x55B9F7D5L, (-8L)), (VECTOR(int32_t, 2))(0x55B9F7D5L, (-8L)), 0x55B9F7D5L, (-8L), 0x55B9F7D5L, (-8L));
    uint16_t l_740 = 65533UL;
    int8_t l_747[2][5][2] = {{{(-9L),1L},{(-9L),1L},{(-9L),1L},{(-9L),1L},{(-9L),1L}},{{(-9L),1L},{(-9L),1L},{(-9L),1L},{(-9L),1L},{(-9L),1L}}};
    int64_t l_756 = (-1L);
    int8_t l_762 = (-2L);
    uint16_t l_768 = 0x248FL;
    int64_t l_781[2];
    int32_t l_783 = 0x5ADF6A3BL;
    VECTOR(int16_t, 16) l_784 = (VECTOR(int16_t, 16))(0x0E58L, (VECTOR(int16_t, 4))(0x0E58L, (VECTOR(int16_t, 2))(0x0E58L, 1L), 1L), 1L, 0x0E58L, 1L, (VECTOR(int16_t, 2))(0x0E58L, 1L), (VECTOR(int16_t, 2))(0x0E58L, 1L), 0x0E58L, 1L, 0x0E58L, 1L);
    int32_t l_785 = 0x18AFAAC6L;
    int64_t l_786[2][2][4] = {{{0L,0x39E79361B0D8C649L,0x39E79361B0D8C649L,0L},{0L,0x39E79361B0D8C649L,0x39E79361B0D8C649L,0L}},{{0L,0x39E79361B0D8C649L,0x39E79361B0D8C649L,0L},{0L,0x39E79361B0D8C649L,0x39E79361B0D8C649L,0L}}};
    uint8_t l_787 = 255UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_781[i] = (-3L);
    for (p_1353->g_82 = 0; (p_1353->g_82 < 46); ++p_1353->g_82)
    { /* block id: 258 */
        int8_t l_711 = (-2L);
        int8_t *l_717[7] = {&p_1353->g_333[0][4][0],&p_1353->g_333[0][4][0],&p_1353->g_333[0][4][0],&p_1353->g_333[0][4][0],&p_1353->g_333[0][4][0],&p_1353->g_333[0][4][0],&p_1353->g_333[0][4][0]};
        int8_t **l_716 = &l_717[6];
        int32_t *l_734 = &p_1353->g_357[3];
        int32_t *l_739[7] = {(void*)0,&p_1353->g_357[5],(void*)0,(void*)0,&p_1353->g_357[5],(void*)0,(void*)0};
        int i;
        (*l_734) = ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((((*p_1353->g_85) ^ (((l_711 , ((~(((VECTOR(int64_t, 16))(p_1353->g_712.wywxxyxzzzzxxwzx)).s4 >= ((safe_mul_func_uint16_t_u_u(l_715, (l_716 != (void*)0))) <= (-1L)))) | (safe_add_func_int64_t_s_s(p_51, ((VECTOR(int64_t, 4))(p_1353->g_720.s2554)).x)))) | 0x9AL) < (((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(p_1353->g_721.sff62942d74a6540c)).odd, ((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(l_722.yyyxxxxxyyxxxyxy)).s1966, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(l_723.xyyxzxwy)).hi, ((VECTOR(int8_t, 16))(p_1353->g_724.xyyyyxyyyyxyyyyy)).s6aa1))).even)).yxyy))).wxyzyzyz)))))).s5 <= ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(l_725.s04)).yxyx, ((VECTOR(int8_t, 16))(l_726.xyxyyyyyyyyyyyyy)).sd367, ((VECTOR(int8_t, 2))(0L, 0x12L)).xxxx))).wzwzzxwwxzyyxzzy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x61L, 0x12L)).xyyxxxxyxyxxyyyx))))).s13)).even))) ^ (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 2))(l_731.yy)).yyyyyxyyxxxxxyxy, ((VECTOR(uint64_t, 4))((l_732 == (void*)0), ((VECTOR(uint64_t, 2))(1UL)), 0xB2E35DEAE839E1BBL)).wwxyxzyywzwzxxxw))).odd, ((VECTOR(uint64_t, 8))(0UL))))).s14, ((VECTOR(uint64_t, 2))(2UL))))), 0UL, 0x5D46E62861A68599L)).wzyxwwww)).lo, ((VECTOR(uint64_t, 4))(0xDA218F24882580CFL)), ((VECTOR(uint64_t, 4))(18446744073709551615UL))))).x & p_48) && 0L), 8)), 3))), p_1353->g_91)), 0)) >= (*p_1353->g_85));
        for (p_1353->g_302 = 0; (p_1353->g_302 < 16); p_1353->g_302 = safe_add_func_uint16_t_u_u(p_1353->g_302, 1))
        { /* block id: 262 */
            l_737 = &p_1353->g_357[3];
        }
        (*l_734) = 3L;
        l_740--;
    }
    if (((((*p_1353->g_85) = (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(l_747[1][4][0], (((-2L) < (!(safe_lshift_func_uint8_t_u_s(((void*)0 == p_1353->g_143), ((p_1353->g_333[4][4][0] >= 0L) ^ (p_49 ^ (-1L))))))) , (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((void*)0 == &l_740), ((VECTOR(uint64_t, 4))(0xBE04F95D7E642BD5L)), GROUP_DIVERGE(2, 1), 0xF0027C1D08EFD9F1L, 0x2E31CB09E4AC68B1L)).even)).z == p_1353->g_303.z)))), 0x25L))) <= p_1353->g_267) == (*p_50)))
    { /* block id: 269 */
        int16_t *l_752 = (void*)0;
        int16_t *l_753 = (void*)0;
        int16_t *l_754 = (void*)0;
        int16_t *l_755[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t *l_757[2];
        int32_t l_763 = 0x7D8DF908L;
        int8_t l_765 = 1L;
        int32_t l_766 = 1L;
        int32_t *l_767[2];
        uint8_t l_771 = 0x0BL;
        int i;
        for (i = 0; i < 2; i++)
            l_757[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_767[i] = (void*)0;
        p_49 = ((((safe_lshift_func_int16_t_s_s((l_756 = ((*p_1353->g_85) &= 0L)), 3)) == (-2L)) > (l_766 ^= ((((FAKE_DIVERGE(p_1353->group_1_offset, get_group_id(1), 10) , &p_1353->g_267) == (p_1353->g_764 = ((((VECTOR(int32_t, 16))(7L, 5L, (*p_50), 0x16813503L, ((p_1353->g_80.s6++) ^ (l_757[1] == (void*)0)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x25A26BE4L, 0x4DC57784L)).yxyxyyxx)), 4L, 1L, 9L)).sc & (((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 8))(p_1353->g_760.s66714154)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((0xDBAC7E491B8F029AL ^ p_1353->g_290.w) >= ((VECTOR(int64_t, 8))(((safe_unary_minus_func_uint8_t_u(((2UL != l_747[0][4][0]) == p_48))) & l_762), 0x4CD80222E1CB4B5EL, ((VECTOR(int64_t, 4))(0x483D97F2454912AAL)), 0x1CE7A0CE5AF68FE8L, 0x1F79C8B5967F1285L)).s6), l_763, 0x211BL, p_1353->g_421[3][0], 0xB227L, ((VECTOR(uint16_t, 8))(0xD95BL)), ((VECTOR(uint16_t, 2))(65527UL)), 7UL)).lo)).even)).yzzwxwwx))).s5 > 1UL)) , (void*)0))) | l_765) , p_48))) ^ p_51);
        l_768--;
        --l_771;
    }
    else
    { /* block id: 278 */
        int32_t l_774 = (-1L);
        int32_t *l_775 = &p_1353->g_357[1];
        int32_t *l_776 = (void*)0;
        int32_t *l_777 = (void*)0;
        int32_t *l_778[10][10] = {{(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0},{(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0},{(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0},{(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0},{(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0},{(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0},{(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0},{(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0},{(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0},{(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0,&p_1353->g_9,(void*)0,(void*)0}};
        int64_t l_779[8][4] = {{1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),1L}};
        int64_t l_780 = 0x66DAB489425AE12DL;
        int64_t l_782 = 0x30144AA918BD3952L;
        int i, j;
        l_787--;
    }
    return (*p_1353->g_85);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_63(uint16_t  p_64, uint32_t  p_65, int32_t * p_66, int32_t  p_67, struct S0 * p_1353)
{ /* block id: 253 */
    int16_t l_702 = 1L;
    return l_702;
}


/* ------------------------------------------ */
/* 
 * reads : p_1353->g_80 p_1353->g_84 p_1353->g_85 p_1353->g_86 p_1353->g_91 p_1353->g_104 p_1353->g_82 p_1353->g_109 p_1353->g_comm_values p_1353->g_34 p_1353->g_134 p_1353->g_139 p_1353->g_143 p_1353->g_3 p_1353->g_40 p_1353->g_167 p_1353->g_142 p_1353->g_242 p_1353->g_170 p_1353->g_9 p_1353->g_267 p_1353->g_288 p_1353->g_290 p_1353->g_291 p_1353->g_164 p_1353->l_comm_values p_1353->g_301 p_1353->g_303 p_1353->g_193 p_1353->g_327 p_1353->g_302 p_1353->g_357 p_1353->g_335 p_1353->g_219 p_1353->g_220 p_1353->g_546 p_1353->g_421 p_1353->g_562 p_1353->g_571 p_1353->g_586 p_1353->g_588 p_1353->g_369 p_1353->g_469 p_1353->g_643 p_1353->g_646
 * writes: p_1353->g_82 p_1353->g_84 p_1353->g_86 p_1353->g_40 p_1353->g_91 p_1353->g_142 p_1353->g_141 p_1353->g_267 p_1353->g_220 p_1353->g_193 p_1353->g_302 p_1353->g_333 p_1353->g_335 p_1353->g_288 p_1353->g_357 p_1353->g_85 p_1353->g_421 p_1353->g_170 p_1353->g_242 p_1353->g_167
 */
int8_t  func_72(int32_t * p_73, struct S0 * p_1353)
{ /* block id: 23 */
    int32_t *l_79 = (void*)0;
    uint16_t *l_81 = &p_1353->g_82;
    uint64_t *l_83 = &p_1353->g_84;
    int32_t *l_356 = &p_1353->g_357[3];
    VECTOR(uint16_t, 2) l_368 = (VECTOR(uint16_t, 2))(65535UL, 0x9236L);
    VECTOR(int32_t, 16) l_375 = (VECTOR(int32_t, 16))(0x74BAE41FL, (VECTOR(int32_t, 4))(0x74BAE41FL, (VECTOR(int32_t, 2))(0x74BAE41FL, 0x3FE3105CL), 0x3FE3105CL), 0x3FE3105CL, 0x74BAE41FL, 0x3FE3105CL, (VECTOR(int32_t, 2))(0x74BAE41FL, 0x3FE3105CL), (VECTOR(int32_t, 2))(0x74BAE41FL, 0x3FE3105CL), 0x74BAE41FL, 0x3FE3105CL, 0x74BAE41FL, 0x3FE3105CL);
    VECTOR(int32_t, 16) l_376 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
    int32_t l_401 = 6L;
    int32_t l_422[2];
    VECTOR(int32_t, 16) l_428 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x08327329L), 0x08327329L), 0x08327329L, (-3L), 0x08327329L, (VECTOR(int32_t, 2))((-3L), 0x08327329L), (VECTOR(int32_t, 2))((-3L), 0x08327329L), (-3L), 0x08327329L, (-3L), 0x08327329L);
    uint32_t *l_433 = &p_1353->g_302;
    uint32_t **l_432[8][3][2] = {{{&l_433,&l_433},{&l_433,&l_433},{&l_433,&l_433}},{{&l_433,&l_433},{&l_433,&l_433},{&l_433,&l_433}},{{&l_433,&l_433},{&l_433,&l_433},{&l_433,&l_433}},{{&l_433,&l_433},{&l_433,&l_433},{&l_433,&l_433}},{{&l_433,&l_433},{&l_433,&l_433},{&l_433,&l_433}},{{&l_433,&l_433},{&l_433,&l_433},{&l_433,&l_433}},{{&l_433,&l_433},{&l_433,&l_433},{&l_433,&l_433}},{{&l_433,&l_433},{&l_433,&l_433},{&l_433,&l_433}}};
    uint32_t ***l_431[1];
    VECTOR(int8_t, 8) l_467 = (VECTOR(int8_t, 8))(0x3CL, (VECTOR(int8_t, 4))(0x3CL, (VECTOR(int8_t, 2))(0x3CL, 0x4AL), 0x4AL), 0x4AL, 0x3CL, 0x4AL);
    VECTOR(int8_t, 2) l_468 = (VECTOR(int8_t, 2))(0x08L, (-7L));
    VECTOR(int8_t, 16) l_470 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int8_t, 2))(0L, 1L), (VECTOR(int8_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
    int16_t **l_544 = &p_1353->g_85;
    VECTOR(uint64_t, 16) l_551 = (VECTOR(uint64_t, 16))(18446744073709551607UL, (VECTOR(uint64_t, 4))(18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 0xFA9A253E111AB3EAL), 0xFA9A253E111AB3EAL), 0xFA9A253E111AB3EAL, 18446744073709551607UL, 0xFA9A253E111AB3EAL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 0xFA9A253E111AB3EAL), (VECTOR(uint64_t, 2))(18446744073709551607UL, 0xFA9A253E111AB3EAL), 18446744073709551607UL, 0xFA9A253E111AB3EAL, 18446744073709551607UL, 0xFA9A253E111AB3EAL);
    VECTOR(uint8_t, 8) l_570 = (VECTOR(uint8_t, 8))(0x86L, (VECTOR(uint8_t, 4))(0x86L, (VECTOR(uint8_t, 2))(0x86L, 0x32L), 0x32L), 0x32L, 0x86L, 0x32L);
    uint32_t ***l_585 = (void*)0;
    int8_t *l_633 = &p_1353->g_421[0][1];
    VECTOR(int8_t, 16) l_648 = (VECTOR(int8_t, 16))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), (-1L)), (-1L)), (-1L), (-7L), (-1L), (VECTOR(int8_t, 2))((-7L), (-1L)), (VECTOR(int8_t, 2))((-7L), (-1L)), (-7L), (-1L), (-7L), (-1L));
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_422[i] = 0x0B0D003DL;
    for (i = 0; i < 1; i++)
        l_431[i] = &l_432[6][2][1];
    (*l_356) |= func_74(&p_1353->g_34, l_79, ((*l_83) |= ((1UL > ((VECTOR(uint64_t, 2))(p_1353->g_80.s35)).hi) > ((*l_81) = 0x19C5L))), p_1353->g_85, p_1353);
    for (p_1353->g_335 = 0; (p_1353->g_335 > 3); p_1353->g_335++)
    { /* block id: 145 */
        int32_t l_360 = (-3L);
        (*l_356) = l_360;
    }
    for (p_1353->g_335 = 0; (p_1353->g_335 != 19); ++p_1353->g_335)
    { /* block id: 150 */
        int32_t **l_363 = &l_356;
        VECTOR(int32_t, 2) l_374 = (VECTOR(int32_t, 2))(0L, 0x058D355FL);
        uint64_t *l_404 = &p_1353->g_84;
        uint32_t l_442 = 0x0520B606L;
        uint32_t **l_445[5][2][6];
        uint32_t **l_446[9][7][1] = {{{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433}},{{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433}},{{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433}},{{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433}},{{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433}},{{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433}},{{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433}},{{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433}},{{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433},{&l_433}}};
        int8_t *l_454 = &p_1353->g_421[3][0];
        int16_t ***l_545 = &l_544;
        VECTOR(int64_t, 2) l_554 = (VECTOR(int64_t, 2))(1L, 0x4DB90087F0568EACL);
        uint32_t *l_574 = &p_1353->g_267;
        uint16_t *l_580[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        uint32_t l_650 = 1UL;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 6; k++)
                    l_445[i][j][k] = &l_433;
            }
        }
        (*l_363) = &p_1353->g_357[3];
        if ((**l_363))
        { /* block id: 152 */
            int32_t l_398 = 0x62B68E3AL;
            int32_t l_426 = 0x1728E7C0L;
            uint16_t l_427 = 1UL;
            int32_t *l_441[7] = {&l_426,&p_1353->g_9,&l_426,&l_426,&p_1353->g_9,&l_426,&l_426};
            int16_t l_443 = 1L;
            uint8_t *l_444 = &p_1353->g_193;
            int i;
            for (p_1353->g_86 = 0; (p_1353->g_86 > (-6)); p_1353->g_86 = safe_sub_func_uint8_t_u_u(p_1353->g_86, 2))
            { /* block id: 155 */
                VECTOR(uint64_t, 2) l_370 = (VECTOR(uint64_t, 2))(1UL, 18446744073709551609UL);
                int32_t *l_390 = (void*)0;
                int32_t *l_391 = (void*)0;
                int32_t *l_392 = (void*)0;
                int32_t *l_393 = (void*)0;
                int32_t *l_394 = (void*)0;
                int32_t *l_395 = (void*)0;
                int32_t *l_396[2];
                uint16_t l_397 = 65533UL;
                int16_t *l_399 = (void*)0;
                int16_t *l_400 = (void*)0;
                uint64_t **l_405 = &l_404;
                int8_t *l_414 = &p_1353->g_333[4][3][0];
                int8_t *l_419 = (void*)0;
                int8_t *l_420[8][4] = {{&p_1353->g_421[3][0],(void*)0,(void*)0,&p_1353->g_421[3][0]},{&p_1353->g_421[3][0],(void*)0,(void*)0,&p_1353->g_421[3][0]},{&p_1353->g_421[3][0],(void*)0,(void*)0,&p_1353->g_421[3][0]},{&p_1353->g_421[3][0],(void*)0,(void*)0,&p_1353->g_421[3][0]},{&p_1353->g_421[3][0],(void*)0,(void*)0,&p_1353->g_421[3][0]},{&p_1353->g_421[3][0],(void*)0,(void*)0,&p_1353->g_421[3][0]},{&p_1353->g_421[3][0],(void*)0,(void*)0,&p_1353->g_421[3][0]},{&p_1353->g_421[3][0],(void*)0,(void*)0,&p_1353->g_421[3][0]}};
                int64_t *l_423 = (void*)0;
                int64_t *l_424 = (void*)0;
                int64_t *l_425[2][6][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_396[i] = (void*)0;
                l_401 ^= (safe_add_func_int16_t_s_s(((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(l_368.yxxyyxxxxyxyxxxy)).sfc85, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(p_1353->g_369.wwwzwxxx)))))).hi))).xwzzxzxxxzzxzwwz)))).se , ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_370.xy)), 0xD24994364CBF2352L, 0x5DCD7DFA84A016EAL, 0x44D6DA284B80001AL, ((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(0x0E4EE1541A47F749L, (*l_356), 0x016A3F41C0306E1BL, 0xE86082F289225414L, 0x90677216BDAA4CE2L, 0x29CE98F5385C01EAL, 0x76F20157C3972083L, 5UL)))).s77))), 1UL)).lo)).xwxzwwxwywzwzyyz)).sc) <= (((**l_363) <= ((**l_363) != (safe_unary_minus_func_uint32_t_u((p_1353->g_86 > ((*l_83) = ((((((safe_sub_func_uint32_t_u_u((FAKE_DIVERGE(p_1353->global_2_offset, get_global_id(2), 10) ^ (**l_363)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_374.xxxyxyyxyyxyyyyx)).hi)).s55)))).yxyyxxxyyxyxxyxx, ((VECTOR(int32_t, 2))(l_375.sda)).xxxyxyxxxxyxyyyy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_376.sbb0cc247009e8e3e)).sdc70)).yzwzyyxzyywwxxxw))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(0x46213D6BL, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(p_1353->g_377.yy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))((p_1353->g_220.s6 = (safe_add_func_uint16_t_u_u((((safe_div_func_uint64_t_u_u((((*p_1353->g_85) != (safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((((safe_div_func_uint8_t_u_u((*l_356), (safe_sub_func_uint64_t_u_u(((l_397 = (-6L)) , (p_1353->g_91 ^ p_1353->g_170.sb)), (*l_356))))) == l_398) != p_1353->g_302), p_1353->g_86)), (**l_363)))) == l_398), l_398)) >= p_1353->g_104.y) ^ 6L), (-1L)))), ((VECTOR(int16_t, 2))((-8L))), 0x3BF1L)).hi, ((VECTOR(int16_t, 2))(0L)), ((VECTOR(int16_t, 2))(0x3D77L))))).yxyyyxyy)), ((VECTOR(uint16_t, 8))(1UL))))))).s40, ((VECTOR(int32_t, 2))(0x6B3D5CD2L))))), 0x583875E0L)).yyzzyxzxyxxzxxwy, ((VECTOR(int32_t, 16))((-1L))))))))))).sa008)).z)) == l_398) , (-1L)) != (**l_363)) & 8L) <= (*p_73)))))))) || p_1353->g_301.y)), 65533UL));
                l_375.sd = (safe_mod_func_int64_t_s_s((((((*l_405) = l_404) == &p_1353->g_84) || (((((((+(-9L)) && ((l_398 = ((l_422[1] = (safe_add_func_int8_t_s_s((((safe_sub_func_int32_t_s_s((l_398 | ((safe_mod_func_uint32_t_u_u((p_1353->g_242.s0 == ((**l_363) = ((*l_414) = ((*p_73) || (!(((VECTOR(int64_t, 2))(0x74C4260FA85D347AL, 0x40E92E7584166A81L)).even && 18446744073709551612UL)))))), ((safe_mod_func_uint64_t_u_u(((safe_add_func_uint64_t_u_u(0x02D9BB628FA6E7BFL, ((&l_400 != (void*)0) , p_1353->g_167.s1))) == p_1353->g_109.z), 0x0A2558F561113FE2L)) & p_1353->g_34))) , p_1353->g_219.sd)), l_398)) >= l_398) && 0x03C4DA013A05FC92L), p_1353->g_220.s2))) == p_1353->g_219.sc)) || (**l_363))) <= l_426) & p_1353->g_40.x) , p_1353->g_291.w) , p_1353->g_80.s0) > l_427)) | p_1353->g_34), p_1353->g_9));
                return (*l_356);
            }
            (*l_356) |= ((VECTOR(int32_t, 4))(l_428.se1c7)).y;
            l_446[2][3][0] = (l_445[2][1][0] = ((safe_div_func_uint8_t_u_u(249UL, ((*l_444) = (((void*)0 == l_431[0]) && ((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(0x1611L, ((VECTOR(int16_t, 2))(1L, (-4L))), 0x1481L)).wyxyywxwxxyzzyzx)).s5 == ((*l_356) != ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 8))(GROUP_DIVERGE(2, 1), 1UL, ((safe_rshift_func_int8_t_s_s(((((((*l_433) = (((safe_mod_func_int32_t_s_s((*p_73), 0x44BB04E7L)) <= (0x53L <= 0x75L)) || (l_376.sa = ((((VECTOR(int32_t, 2))(p_1353->g_440.s34)).hi , p_1353->g_333[0][1][2]) | (**l_363))))) && (**l_363)) , (void*)0) == &p_1353->g_85) != 252UL), (**l_363))) , 0xD4L), (**l_363), 255UL, l_442, 249UL, 0xB9L)).lo, (uint8_t)(*l_356)))).w)) || l_443))))) , (void*)0));
            return (*l_356);
        }
        else
        { /* block id: 175 */
            int16_t **l_449 = &p_1353->g_85;
            int8_t **l_455 = &l_454;
            VECTOR(int8_t, 4) l_466 = (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 0x29L), 0x29L);
            uint8_t *l_471 = &p_1353->g_193;
            int i;
            (**l_363) = (*l_356);
            (*l_356) &= (*p_73);
            l_374.y &= ((safe_div_func_int32_t_s_s((+(((*l_449) = l_81) != (void*)0)), (safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_1353->global_0_offset, get_global_id(0), 10), (safe_mul_func_int16_t_s_s(((*l_356) , ((*l_356) || (&p_1353->g_333[4][3][0] == ((*l_455) = l_454)))), (safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_1353->local_0_offset, get_local_id(0), 10), (safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((*l_471) = (safe_sub_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(0x97L, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(l_466.yxwxywxy)).odd, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_467.s35560743)).s61)).xyxyxyyy)).lo, ((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(l_468.yx)).yyxyyxxx, ((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 2))(p_1353->g_469.yx)).xyyyxyyxyyyxxxxy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 2))(l_470.s88)).xxyxyxyx, (int8_t)(((*l_404) = 0x407C2034747BFA24L) & (p_1353->g_comm_values[p_1353->tid] , (-8L)))))).s25, ((VECTOR(int8_t, 2))(0x54L))))).yyyyxyxx)))).s5132004202730170))).hi))).odd, ((VECTOR(int8_t, 4))(0x3DL))))).lo)).xyyy))).odd)), ((VECTOR(int8_t, 4))(0x2DL)), ((VECTOR(int8_t, 8))(0x26L)), 0x11L, 1L)).sa)), (**l_363)))), 0xC5L)), (*l_356))))))))))) & GROUP_DIVERGE(1, 1));
            if ((atomic_inc(&p_1353->l_atomic_input[3]) == 3))
            { /* block id: 184 */
                uint16_t l_472 = 0x5C35L;
                uint8_t l_473 = 252UL;
                VECTOR(int16_t, 16) l_474 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x7FAAL), 0x7FAAL), 0x7FAAL, 0L, 0x7FAAL, (VECTOR(int16_t, 2))(0L, 0x7FAAL), (VECTOR(int16_t, 2))(0L, 0x7FAAL), 0L, 0x7FAAL, 0L, 0x7FAAL);
                uint16_t l_475[8][7] = {{6UL,6UL,0x3CE0L,5UL,2UL,5UL,0x3CE0L},{6UL,6UL,0x3CE0L,5UL,2UL,5UL,0x3CE0L},{6UL,6UL,0x3CE0L,5UL,2UL,5UL,0x3CE0L},{6UL,6UL,0x3CE0L,5UL,2UL,5UL,0x3CE0L},{6UL,6UL,0x3CE0L,5UL,2UL,5UL,0x3CE0L},{6UL,6UL,0x3CE0L,5UL,2UL,5UL,0x3CE0L},{6UL,6UL,0x3CE0L,5UL,2UL,5UL,0x3CE0L},{6UL,6UL,0x3CE0L,5UL,2UL,5UL,0x3CE0L}};
                int32_t l_476 = 0x1ECA8779L;
                uint64_t l_477[5] = {18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL};
                VECTOR(int16_t, 4) l_478 = (VECTOR(int16_t, 4))(0x6383L, (VECTOR(int16_t, 2))(0x6383L, 0x6E56L), 0x6E56L);
                VECTOR(int16_t, 16) l_479 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x487AL), 0x487AL), 0x487AL, 0L, 0x487AL, (VECTOR(int16_t, 2))(0L, 0x487AL), (VECTOR(int16_t, 2))(0L, 0x487AL), 0L, 0x487AL, 0L, 0x487AL);
                VECTOR(int8_t, 2) l_480 = (VECTOR(int8_t, 2))((-4L), 1L);
                VECTOR(uint8_t, 2) l_481 = (VECTOR(uint8_t, 2))(0x48L, 1UL);
                VECTOR(int16_t, 16) l_482 = (VECTOR(int16_t, 16))(0x620FL, (VECTOR(int16_t, 4))(0x620FL, (VECTOR(int16_t, 2))(0x620FL, (-1L)), (-1L)), (-1L), 0x620FL, (-1L), (VECTOR(int16_t, 2))(0x620FL, (-1L)), (VECTOR(int16_t, 2))(0x620FL, (-1L)), 0x620FL, (-1L), 0x620FL, (-1L));
                uint32_t l_483[10][4] = {{0x9C7B53E5L,0xC02451D2L,0x9C7B53E5L,0x9C7B53E5L},{0x9C7B53E5L,0xC02451D2L,0x9C7B53E5L,0x9C7B53E5L},{0x9C7B53E5L,0xC02451D2L,0x9C7B53E5L,0x9C7B53E5L},{0x9C7B53E5L,0xC02451D2L,0x9C7B53E5L,0x9C7B53E5L},{0x9C7B53E5L,0xC02451D2L,0x9C7B53E5L,0x9C7B53E5L},{0x9C7B53E5L,0xC02451D2L,0x9C7B53E5L,0x9C7B53E5L},{0x9C7B53E5L,0xC02451D2L,0x9C7B53E5L,0x9C7B53E5L},{0x9C7B53E5L,0xC02451D2L,0x9C7B53E5L,0x9C7B53E5L},{0x9C7B53E5L,0xC02451D2L,0x9C7B53E5L,0x9C7B53E5L},{0x9C7B53E5L,0xC02451D2L,0x9C7B53E5L,0x9C7B53E5L}};
                uint16_t l_484 = 65530UL;
                VECTOR(int16_t, 4) l_485 = (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0L), 0L);
                VECTOR(int16_t, 2) l_486 = (VECTOR(int16_t, 2))(0x52A2L, 0x4D49L);
                VECTOR(int16_t, 16) l_487 = (VECTOR(int16_t, 16))(0x12A4L, (VECTOR(int16_t, 4))(0x12A4L, (VECTOR(int16_t, 2))(0x12A4L, (-9L)), (-9L)), (-9L), 0x12A4L, (-9L), (VECTOR(int16_t, 2))(0x12A4L, (-9L)), (VECTOR(int16_t, 2))(0x12A4L, (-9L)), 0x12A4L, (-9L), 0x12A4L, (-9L));
                int32_t l_488 = 0x309DA838L;
                VECTOR(int16_t, 4) l_489 = (VECTOR(int16_t, 4))(0x71C7L, (VECTOR(int16_t, 2))(0x71C7L, 0x05C4L), 0x05C4L);
                VECTOR(int16_t, 16) l_490 = (VECTOR(int16_t, 16))(0x665AL, (VECTOR(int16_t, 4))(0x665AL, (VECTOR(int16_t, 2))(0x665AL, 0x36B8L), 0x36B8L), 0x36B8L, 0x665AL, 0x36B8L, (VECTOR(int16_t, 2))(0x665AL, 0x36B8L), (VECTOR(int16_t, 2))(0x665AL, 0x36B8L), 0x665AL, 0x36B8L, 0x665AL, 0x36B8L);
                VECTOR(int16_t, 8) l_491 = (VECTOR(int16_t, 8))(0x54CCL, (VECTOR(int16_t, 4))(0x54CCL, (VECTOR(int16_t, 2))(0x54CCL, 0x3556L), 0x3556L), 0x3556L, 0x54CCL, 0x3556L);
                VECTOR(int16_t, 2) l_492 = (VECTOR(int16_t, 2))(0L, 0x1232L);
                uint64_t l_493 = 0x22A6021E605D80BAL;
                int16_t l_494 = 0L;
                int32_t l_495 = 0L;
                uint8_t l_496 = 0x4DL;
                uint32_t l_497 = 0xF7C17CAEL;
                uint16_t l_498 = 0xD7EFL;
                int8_t l_499 = 0L;
                int8_t l_500[4] = {0L,0L,0L,0L};
                uint16_t l_501 = 65535UL;
                int32_t l_502[1][8][3];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 8; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_502[i][j][k] = 0x7C4BCEF9L;
                    }
                }
                if ((((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_472, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x29E9L, 0x52E5L)).yxyyyxxy)).s3, (l_476 = (l_475[4][0] = (l_473 , ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_474.s1111c21c)).s4517326247603411)).s0))), 0x0158L, ((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(0x5C22L, 1L, 0x6102L, 6L)).wyywwzyyxzywzzxy)), ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_477[0], (FAKE_DIVERGE(p_1353->global_1_offset, get_global_id(1), 10) , ((VECTOR(int16_t, 8))(l_478.zwxzyxxx)).s7), ((VECTOR(int16_t, 16))(l_479.sabd8bfe49486cda0)).se, ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(l_480.xxxy)).odd, ((VECTOR(uint8_t, 8))(l_481.yyyyxxxy)).s57))).yxyyxyxy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_482.s34)))).yyxyyyyy))))), (-1L), l_483[4][2], 0L, 3L, (-1L))).sf6)).yxyxyxxxyyyxyyyy, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 16))((-1L), l_484, ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(l_485.wwyy)), ((VECTOR(int16_t, 16))(l_486.xyyxyxyxxxyyyxxy)).s0eaf, ((VECTOR(int16_t, 16))(l_487.sf8b11587393f1274)).s8cbf))), (-1L), 9L, l_488, ((VECTOR(int16_t, 2))(l_489.wx)), ((VECTOR(int16_t, 4))(l_490.s0c1c)), 0x0088L)).s99d7, ((VECTOR(int16_t, 8))(l_491.s70364277)).even, ((VECTOR(int16_t, 4))(l_492.xxxx))))))).odd, ((VECTOR(int16_t, 4))(0x43ABL, 0x6DECL, 0x41A7L, 0x1E62L)).lo))).yyxyyyyyxyxxyxxx))), ((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 16))((-1L), (l_493 , l_494), (l_480.y = (l_497 = (l_495 , l_496))), (-10L), l_498, (-6L), 0x66L, l_499, l_500[2], ((VECTOR(int8_t, 4))(1L)), (-4L), 0x5BL, 1L)).even, ((VECTOR(int8_t, 8))((-6L))), ((VECTOR(int8_t, 8))(1L))))).s27)).yyyy, ((VECTOR(uint8_t, 4))(0x78L))))).yzyzwxxyyxzzxyxw))).se, l_501, 0x13F9L, 0x08ABL)))).s00, ((VECTOR(int16_t, 2))((-10L))), ((VECTOR(int16_t, 2))(0x7C55L))))).yxxx, ((VECTOR(int16_t, 4))(0x4B84L)), ((VECTOR(int16_t, 4))(0x5573L))))).w , l_502[0][0][1]))
                { /* block id: 189 */
                    VECTOR(uint16_t, 4) l_503 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL);
                    uint16_t l_504 = 65535UL;
                    VECTOR(uint8_t, 2) l_505 = (VECTOR(uint8_t, 2))(0x75L, 0xCFL);
                    VECTOR(uint8_t, 8) l_506 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 3UL), 3UL), 3UL, 255UL, 3UL);
                    uint32_t l_507 = 0x3C57ED45L;
                    uint16_t l_508 = 0UL;
                    VECTOR(uint8_t, 8) l_509 = (VECTOR(uint8_t, 8))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x72L), 0x72L), 0x72L, 253UL, 0x72L);
                    VECTOR(uint8_t, 2) l_510 = (VECTOR(uint8_t, 2))(0UL, 1UL);
                    VECTOR(int32_t, 2) l_511 = (VECTOR(int32_t, 2))(0x3F072493L, 1L);
                    VECTOR(uint64_t, 4) l_512 = (VECTOR(uint64_t, 4))(0xFF86416DFC5B847CL, (VECTOR(uint64_t, 2))(0xFF86416DFC5B847CL, 0xF72A45D010D599FBL), 0xF72A45D010D599FBL);
                    int16_t l_534 = (-1L);
                    int64_t l_535 = 6L;
                    int32_t l_536 = 0x04CCA586L;
                    uint8_t l_537[8][3] = {{0xCEL,0xCEL,0x32L},{0xCEL,0xCEL,0x32L},{0xCEL,0xCEL,0x32L},{0xCEL,0xCEL,0x32L},{0xCEL,0xCEL,0x32L},{0xCEL,0xCEL,0x32L},{0xCEL,0xCEL,0x32L},{0xCEL,0xCEL,0x32L}};
                    int i, j;
                    l_495 ^= (((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(0xD4L, ((VECTOR(uint8_t, 4))(FAKE_DIVERGE(p_1353->global_1_offset, get_global_id(1), 10), ((VECTOR(uint8_t, 2))(1UL, 0x87L)), 0UL)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 16))((l_503.z , 0UL), 255UL, 255UL, ((VECTOR(uint8_t, 8))((l_504 &= 0xB6L), 1UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_505.xyxx)).wwxzyzwyyxxwyzyx)).s1b31)), 0xB4L, 1UL)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_506.s2751570325016121)).s3f)), 2UL, 247UL, 255UL)).scf, (uint8_t)l_507, (uint8_t)l_508))), ((VECTOR(uint8_t, 2))(l_509.s21))))), ((VECTOR(uint8_t, 4))(0xF2L, 5UL, 5UL, 0x0CL)), 0UL, 0x14L)).s3044112700246451)).s0, 255UL, 0UL)).lo, ((VECTOR(uint8_t, 4))(l_510.xyyx))))).x , ((VECTOR(int32_t, 16))(l_511.xyxxxxyyxyxyyyyy)).sf);
                    if ((((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_512.wzwwxzxw))))))).s2 , ((VECTOR(int32_t, 2))(0x17FFED99L, 0x467BE9A0L)).lo))
                    { /* block id: 192 */
                        uint64_t l_513 = 0xA9711FBCB5F8A5F3L;
                        int8_t l_516 = 0x00L;
                        VECTOR(int64_t, 2) l_517 = (VECTOR(int64_t, 2))(0x516EEA332C744E37L, 0x381E55C0097C134BL);
                        int32_t l_518 = 2L;
                        uint16_t l_519 = 0x55AFL;
                        int16_t l_520 = 0x3B7CL;
                        uint8_t l_521 = 0x76L;
                        VECTOR(int32_t, 8) l_522 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2C67BC11L), 0x2C67BC11L), 0x2C67BC11L, 1L, 0x2C67BC11L);
                        VECTOR(int32_t, 8) l_523 = (VECTOR(int32_t, 8))(0x6903009DL, (VECTOR(int32_t, 4))(0x6903009DL, (VECTOR(int32_t, 2))(0x6903009DL, (-9L)), (-9L)), (-9L), 0x6903009DL, (-9L));
                        uint8_t l_524 = 0x95L;
                        VECTOR(int32_t, 4) l_525 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-1L)), (-1L));
                        int64_t l_526 = 0x0CB202890120204DL;
                        int8_t l_527 = 0L;
                        int32_t l_528 = (-1L);
                        int8_t l_529 = 0x5CL;
                        uint16_t l_530 = 1UL;
                        int i;
                        l_513--;
                        l_529 = ((VECTOR(int32_t, 16))(((l_516 , (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_517.xx)), 0x1FB36724248B1752L, (-6L))).xyyxzxzw)).odd)).y , l_518)) , l_519), ((VECTOR(int32_t, 2))(0L, 8L)), l_520, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x65FD84FAL, 0x4C8FBD24L)), 0L, (-9L))), 0L, l_521, 0x72428072L, 0x54E32D33L)).s54, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_522.s37)), ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_523.s47346153)), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(5L, l_524, 0x1640A174L, ((VECTOR(int32_t, 4))(0x4019AF0EL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_525.zxxy)).lo)))), 0x4F78D624L)), 6L)).s23, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-5L), 8L)).xyyxyxyy)).s13))).xyyxxxyx))).s72, ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(0x3DC3FD44L, (-1L), 0L, 0L, l_526, ((VECTOR(int32_t, 2))(0x6A49FB0AL)), l_527, ((VECTOR(int32_t, 8))(0x3DF37A85L)))).sb394, ((VECTOR(int32_t, 4))(0L))))).lo))), l_528, 0x60FE221FL, (-10L), 1L)).s7307103761573147, ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))(0x7E5D712FL))))).s37, ((VECTOR(int32_t, 2))(0x1AFC1C25L))))), 0x77E544F3L, 0x3C634441L, ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(0x712CF408L)))).sa;
                        l_530++;
                    }
                    else
                    { /* block id: 196 */
                        int32_t *l_533 = (void*)0;
                        l_533 = (void*)0;
                    }
                    l_537[1][0]--;
                }
                else
                { /* block id: 200 */
                    VECTOR(int16_t, 4) l_540 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L);
                    int32_t *l_541 = (void*)0;
                    int32_t l_543 = 1L;
                    int32_t *l_542 = &l_543;
                    int i;
                    l_495 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_540.xwzyxyzxwywwzwxy)))).s92, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x6F9DL, 0x6AAFL)).yyyy)).lo))))), 0x5E7AC6C6L, 0x563546EDL)).x;
                    l_541 = (l_542 = l_541);
                }
                unsigned int result = 0;
                result += l_472;
                result += l_473;
                result += l_474.sf;
                result += l_474.se;
                result += l_474.sd;
                result += l_474.sc;
                result += l_474.sb;
                result += l_474.sa;
                result += l_474.s9;
                result += l_474.s8;
                result += l_474.s7;
                result += l_474.s6;
                result += l_474.s5;
                result += l_474.s4;
                result += l_474.s3;
                result += l_474.s2;
                result += l_474.s1;
                result += l_474.s0;
                int l_475_i0, l_475_i1;
                for (l_475_i0 = 0; l_475_i0 < 8; l_475_i0++) {
                    for (l_475_i1 = 0; l_475_i1 < 7; l_475_i1++) {
                        result += l_475[l_475_i0][l_475_i1];
                    }
                }
                result += l_476;
                int l_477_i0;
                for (l_477_i0 = 0; l_477_i0 < 5; l_477_i0++) {
                    result += l_477[l_477_i0];
                }
                result += l_478.w;
                result += l_478.z;
                result += l_478.y;
                result += l_478.x;
                result += l_479.sf;
                result += l_479.se;
                result += l_479.sd;
                result += l_479.sc;
                result += l_479.sb;
                result += l_479.sa;
                result += l_479.s9;
                result += l_479.s8;
                result += l_479.s7;
                result += l_479.s6;
                result += l_479.s5;
                result += l_479.s4;
                result += l_479.s3;
                result += l_479.s2;
                result += l_479.s1;
                result += l_479.s0;
                result += l_480.y;
                result += l_480.x;
                result += l_481.y;
                result += l_481.x;
                result += l_482.sf;
                result += l_482.se;
                result += l_482.sd;
                result += l_482.sc;
                result += l_482.sb;
                result += l_482.sa;
                result += l_482.s9;
                result += l_482.s8;
                result += l_482.s7;
                result += l_482.s6;
                result += l_482.s5;
                result += l_482.s4;
                result += l_482.s3;
                result += l_482.s2;
                result += l_482.s1;
                result += l_482.s0;
                int l_483_i0, l_483_i1;
                for (l_483_i0 = 0; l_483_i0 < 10; l_483_i0++) {
                    for (l_483_i1 = 0; l_483_i1 < 4; l_483_i1++) {
                        result += l_483[l_483_i0][l_483_i1];
                    }
                }
                result += l_484;
                result += l_485.w;
                result += l_485.z;
                result += l_485.y;
                result += l_485.x;
                result += l_486.y;
                result += l_486.x;
                result += l_487.sf;
                result += l_487.se;
                result += l_487.sd;
                result += l_487.sc;
                result += l_487.sb;
                result += l_487.sa;
                result += l_487.s9;
                result += l_487.s8;
                result += l_487.s7;
                result += l_487.s6;
                result += l_487.s5;
                result += l_487.s4;
                result += l_487.s3;
                result += l_487.s2;
                result += l_487.s1;
                result += l_487.s0;
                result += l_488;
                result += l_489.w;
                result += l_489.z;
                result += l_489.y;
                result += l_489.x;
                result += l_490.sf;
                result += l_490.se;
                result += l_490.sd;
                result += l_490.sc;
                result += l_490.sb;
                result += l_490.sa;
                result += l_490.s9;
                result += l_490.s8;
                result += l_490.s7;
                result += l_490.s6;
                result += l_490.s5;
                result += l_490.s4;
                result += l_490.s3;
                result += l_490.s2;
                result += l_490.s1;
                result += l_490.s0;
                result += l_491.s7;
                result += l_491.s6;
                result += l_491.s5;
                result += l_491.s4;
                result += l_491.s3;
                result += l_491.s2;
                result += l_491.s1;
                result += l_491.s0;
                result += l_492.y;
                result += l_492.x;
                result += l_493;
                result += l_494;
                result += l_495;
                result += l_496;
                result += l_497;
                result += l_498;
                result += l_499;
                int l_500_i0;
                for (l_500_i0 = 0; l_500_i0 < 4; l_500_i0++) {
                    result += l_500[l_500_i0];
                }
                result += l_501;
                int l_502_i0, l_502_i1, l_502_i2;
                for (l_502_i0 = 0; l_502_i0 < 1; l_502_i0++) {
                    for (l_502_i1 = 0; l_502_i1 < 8; l_502_i1++) {
                        for (l_502_i2 = 0; l_502_i2 < 3; l_502_i2++) {
                            result += l_502[l_502_i0][l_502_i1][l_502_i2];
                        }
                    }
                }
                atomic_add(&p_1353->l_special_values[3], result);
            }
            else
            { /* block id: 205 */
                (1 + 1);
            }
        }
        (*l_545) = l_544;
        if ((!((*l_356) = (GROUP_DIVERGE(1, 1) , ((void*)0 != p_1353->g_546)))))
        { /* block id: 211 */
            VECTOR(uint64_t, 4) l_552 = (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 18446744073709551608UL), 18446744073709551608UL);
            VECTOR(uint64_t, 4) l_553 = (VECTOR(uint64_t, 4))(0x30A9C3ABB189D0BEL, (VECTOR(uint64_t, 2))(0x30A9C3ABB189D0BEL, 0x63CC6B557CEB5A32L), 0x63CC6B557CEB5A32L);
            int32_t l_555 = 0x474188F6L;
            VECTOR(int64_t, 16) l_556 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x19D743E117F18D19L), 0x19D743E117F18D19L), 0x19D743E117F18D19L, 0L, 0x19D743E117F18D19L, (VECTOR(int64_t, 2))(0L, 0x19D743E117F18D19L), (VECTOR(int64_t, 2))(0L, 0x19D743E117F18D19L), 0L, 0x19D743E117F18D19L, 0L, 0x19D743E117F18D19L);
            uint32_t l_561[10][8] = {{0x009A5FD7L,9UL,4294967295UL,9UL,0x009A5FD7L,0x009A5FD7L,9UL,4294967295UL},{0x009A5FD7L,9UL,4294967295UL,9UL,0x009A5FD7L,0x009A5FD7L,9UL,4294967295UL},{0x009A5FD7L,9UL,4294967295UL,9UL,0x009A5FD7L,0x009A5FD7L,9UL,4294967295UL},{0x009A5FD7L,9UL,4294967295UL,9UL,0x009A5FD7L,0x009A5FD7L,9UL,4294967295UL},{0x009A5FD7L,9UL,4294967295UL,9UL,0x009A5FD7L,0x009A5FD7L,9UL,4294967295UL},{0x009A5FD7L,9UL,4294967295UL,9UL,0x009A5FD7L,0x009A5FD7L,9UL,4294967295UL},{0x009A5FD7L,9UL,4294967295UL,9UL,0x009A5FD7L,0x009A5FD7L,9UL,4294967295UL},{0x009A5FD7L,9UL,4294967295UL,9UL,0x009A5FD7L,0x009A5FD7L,9UL,4294967295UL},{0x009A5FD7L,9UL,4294967295UL,9UL,0x009A5FD7L,0x009A5FD7L,9UL,4294967295UL},{0x009A5FD7L,9UL,4294967295UL,9UL,0x009A5FD7L,0x009A5FD7L,9UL,4294967295UL}};
            uint32_t l_567 = 0x3CBF79DDL;
            int i, j;
            (*l_356) &= (((*l_454) |= p_1353->g_40.x) >= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x2CL, (-4L))).xyyxyxxx)).s2);
            (*l_356) = (((p_1353->g_302 = ((p_1353->g_267 | (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(p_1353->g_242.s6, (p_1353->g_134.se < ((((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 8))(l_551.sec3927d9)).s74, ((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 4))(l_552.xxyz)), ((VECTOR(uint64_t, 8))(l_553.xzyyzxxy)).even))).even))).even != ((VECTOR(int64_t, 2))(0x0933B4376F7FA703L, 0x5E0AA220582EE520L)).odd) <= ((VECTOR(int64_t, 8))((l_555 = ((VECTOR(int64_t, 8))(l_554.xyyxyxyx)).s0), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 4))(0x43A29DE594B63A88L, ((VECTOR(int64_t, 2))(l_556.se5)), 0x09797E3E754714E0L)).lo, ((VECTOR(int64_t, 2))(0L, 1L))))))), 0x6E5AEF35CA4DF84EL, 0x122027AECE590008L)), 0x35BAA3335ACAC393L, 0x5561B91C12F7165EL, (-1L))).s7)))), (safe_sub_func_int32_t_s_s((*p_73), (safe_rshift_func_int8_t_s_u((((l_561[5][1] <= 255UL) != ((VECTOR(int16_t, 4))(p_1353->g_562.yyyx)).x) >= (safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((~((((void*)0 == &p_73) , l_553.x) ^ p_1353->g_242.s5)), (**l_363))), 6))), p_1353->g_291.z))))))) && (**l_363))) || l_567) , (*p_73));
        }
        else
        { /* block id: 217 */
            uint8_t *l_575 = (void*)0;
            uint8_t *l_576 = &p_1353->g_193;
            int32_t l_581 = 0x19C5803AL;
            int64_t *l_582 = (void*)0;
            int64_t *l_583 = (void*)0;
            int64_t *l_584[3];
            uint16_t l_589 = 65532UL;
            int32_t l_590 = (-4L);
            int32_t **l_612 = &p_1353->g_141[2][1][5];
            VECTOR(int8_t, 16) l_647 = (VECTOR(int8_t, 16))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), (-4L)), (-4L)), (-4L), (-2L), (-4L), (VECTOR(int8_t, 2))((-2L), (-4L)), (VECTOR(int8_t, 2))((-2L), (-4L)), (-2L), (-4L), (-2L), (-4L));
            int32_t l_651[7];
            uint64_t l_682 = 0x7D61E3146B534456L;
            int i;
            for (i = 0; i < 3; i++)
                l_584[i] = (void*)0;
            for (i = 0; i < 7; i++)
                l_651[i] = 3L;
            (*l_356) = (*p_73);
            l_590 |= (((safe_lshift_func_int16_t_s_u(((*p_1353->g_85) &= ((((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 2))(l_570.s45)).yyxyyyyx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 4))(p_1353->g_571.yzzx))))).xxzwyxyy))))).s3 < (((**l_363) , ((*l_576) ^= (safe_add_func_uint16_t_u_u(p_1353->g_267, ((**l_363) | (l_574 != (void*)0)))))) & (((safe_unary_minus_func_int32_t_s(((safe_add_func_int64_t_s_s(((void*)0 == l_580[3][1]), (p_1353->g_170.s4 = l_581))) >= (FAKE_DIVERGE(p_1353->global_1_offset, get_global_id(1), 10) , (p_73 != (void*)0))))) , l_585) == p_1353->g_586))) | 0x2CEED1E72B69B5D0L)), (*l_356))) & l_589) | 0xC6A84773549D6406L);
            for (l_589 = 0; (l_589 > 43); l_589 = safe_add_func_int64_t_s_s(l_589, 2))
            { /* block id: 225 */
                uint16_t l_609 = 65535UL;
                int32_t l_634 = (-1L);
                int32_t l_660 = 0x4E3A89E7L;
                int32_t l_661[3][9][3] = {{{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L}},{{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L}},{{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L},{(-10L),0x52EBB4AFL,0x4E157E18L}}};
                int i, j, k;
                for (p_1353->g_84 = 0; (p_1353->g_84 < 50); ++p_1353->g_84)
                { /* block id: 228 */
                    int32_t l_623 = (-9L);
                    int32_t l_657 = 0x15AC22AEL;
                    int32_t l_666 = (-1L);
                    int32_t l_667 = 0x2A4601BCL;
                    int32_t l_668 = 1L;
                    int32_t l_669 = 0x5F3B4320L;
                    int32_t l_671 = 0L;
                    int32_t l_672 = (-1L);
                    (**l_363) = ((VECTOR(int32_t, 2))(0x4501150BL, 0x770CAEAAL)).hi;
                    if (((safe_mul_func_int8_t_s_s(((p_1353->g_357[3] <= ((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(0x62L, 0x3DL)).xyxyyyyxyxxxyyxy, (int8_t)(((safe_lshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 2))(8UL, 248UL)).xxyx, (uint8_t)((((**l_544) = 0x2860L) , ((safe_lshift_func_int8_t_s_u(((*l_454) ^= (+(!(safe_add_func_uint16_t_u_u(p_1353->g_562.x, (-5L)))))), 4)) ^ l_609)) | (safe_div_func_int32_t_s_s((l_612 != (((VECTOR(uint64_t, 2))(0x7601E5E1189707FEL, 0x98CB16F903DE8A74L)).hi , &p_73)), (safe_mul_func_uint8_t_u_u((FAKE_DIVERGE(p_1353->local_2_offset, get_local_id(2), 10) , (safe_div_func_uint64_t_u_u((FAKE_DIVERGE(p_1353->local_2_offset, get_local_id(2), 10) , ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((safe_div_func_uint32_t_u_u(((*p_1353->g_588) = ((*l_356) == (**l_363))), p_1353->g_220.s0)) | (*l_356)), 12)), p_1353->g_80.s7)) ^ (**l_363))), l_609))), (*l_356)))))), (uint8_t)FAKE_DIVERGE(p_1353->group_2_offset, get_group_id(2), 10)))).zzzxzyxzxzzyyyzy, (uint8_t)0UL, (uint8_t)FAKE_DIVERGE(p_1353->global_2_offset, get_global_id(2), 10)))).s0, 0x33L)), 4L)) != 8UL) != 18446744073709551615UL), 3UL)), 6)) , l_623) <= l_623)))).hi, ((VECTOR(int8_t, 8))(0x2FL))))).s23)).yxyyxxxxyyxyyxxx, ((VECTOR(uint8_t, 16))(0x93L))))).s8) <= p_1353->g_369.w), p_1353->g_219.s8)) | p_1353->g_290.y))
                    { /* block id: 233 */
                        uint16_t l_624 = 65535UL;
                        return l_624;
                    }
                    else
                    { /* block id: 235 */
                        int64_t l_649 = 0x44EF3FDA063160DDL;
                        int32_t *l_652 = &l_651[2];
                        int32_t *l_653 = &l_651[4];
                        int32_t *l_654 = &l_651[3];
                        int32_t *l_655 = (void*)0;
                        int32_t *l_656 = &l_651[6];
                        int32_t *l_658 = (void*)0;
                        int32_t *l_659 = &l_651[3];
                        int32_t *l_662 = &l_651[6];
                        int32_t *l_663 = (void*)0;
                        int32_t *l_664[9] = {&l_651[6],&l_651[6],&l_651[6],&l_651[6],&l_651[6],&l_651[6],&l_651[6],&l_651[6],&l_651[6]};
                        int64_t l_665 = 0x3CBD636CA2388302L;
                        int32_t l_670[6][6] = {{1L,0x6AE09E2BL,(-1L),(-5L),0x6AE09E2BL,(-5L)},{1L,0x6AE09E2BL,(-1L),(-5L),0x6AE09E2BL,(-5L)},{1L,0x6AE09E2BL,(-1L),(-5L),0x6AE09E2BL,(-5L)},{1L,0x6AE09E2BL,(-1L),(-5L),0x6AE09E2BL,(-5L)},{1L,0x6AE09E2BL,(-1L),(-5L),0x6AE09E2BL,(-5L)},{1L,0x6AE09E2BL,(-1L),(-5L),0x6AE09E2BL,(-5L)}};
                        uint16_t l_674 = 0x4E97L;
                        int i, j;
                        (**l_363) |= (safe_add_func_uint32_t_u_u((*p_1353->g_588), l_609));
                        (**l_363) = (((*p_1353->g_588) | ((((l_651[6] ^= ((*p_73) , ((((safe_mul_func_int16_t_s_s((safe_add_func_uint32_t_u_u((l_634 = ((p_1353->g_469.y , l_633) == &p_1353->g_333[4][4][2])), FAKE_DIVERGE(p_1353->local_0_offset, get_local_id(0), 10))), ((safe_lshift_func_int8_t_s_u(((&p_1353->g_588 == &p_1353->g_588) <= (safe_mul_func_int16_t_s_s((safe_div_func_int64_t_s_s((FAKE_DIVERGE(p_1353->group_0_offset, get_group_id(0), 10) , (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_1353->g_643.s2434055355270567)).sd6ff))))).y, ((((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x13CBL, 0x7228L)).yxxx)).w ^ ((((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(p_1353->g_646.s9b60)).odd, ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(1L, ((VECTOR(int8_t, 2))(l_647.s24)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(l_648.s56145ab9)).s5062270247347775, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x2FL, 0x10L)), (-9L), (-4L))).zywxwzzxzwyxyyxy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0x54L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(0x38L, 0x60L)).yxyx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0x62L, 0x0AL, (p_1353->g_302 && FAKE_DIVERGE(p_1353->local_1_offset, get_local_id(1), 10)), p_1353->g_571.y, 0x33L, l_609, ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 8))(0x2EL)))).s6c)))).yxxyyxyx, ((VECTOR(int8_t, 8))(0L))))).s6757617637647776)).s9514, (int8_t)l_609, (int8_t)(*l_356)))).even)).yyyy))).odd)), ((VECTOR(int8_t, 4))(0x1BL)), 0L, ((VECTOR(int8_t, 8))((-1L))))).sc8)).xyxyxxxxyxxxyxyx))))).s6, 0x3EL, ((VECTOR(int8_t, 4))(1L)), (-2L), 8L)).s0004270116736346)).s98)), 0x0EL, 5L, 0x78L)).s05, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 2))(0x76L))))).yxyy, ((VECTOR(int8_t, 4))(0x24L))))).lo, ((VECTOR(int8_t, 2))((-8L)))))), (-10L), 0x58L)).x, l_649)) & 65527UL) ^ p_1353->g_219.se) < p_1353->g_104.x)) , p_1353->g_288.y) == GROUP_DIVERGE(1, 1)) , l_623)))), (**l_363))), (**l_363)))), p_1353->g_109.x)) ^ FAKE_DIVERGE(p_1353->group_2_offset, get_group_id(2), 10)))) | 0x552FB3502038B052L) && l_650) == 0L))) == 0x19A131E4L) <= p_1353->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1353->tid, 35))]) && p_1353->g_303.z)) ^ 8UL);
                        ++l_674;
                        (*l_652) = ((safe_mod_func_uint32_t_u_u((((p_1353->g_242.sd = (((safe_mul_func_uint8_t_u_u((l_657 || (safe_unary_minus_func_int64_t_s(l_609))), (*l_654))) | ((l_682 <= ((++(*p_1353->g_588)) == 9L)) >= (**l_363))) , (**l_363))) != ((l_374.x &= ((p_1353->g_167.s2 = (safe_mul_func_int8_t_s_s((safe_div_func_int16_t_s_s(((***l_545) = l_634), (**l_363))), p_1353->g_109.w))) ^ 18446744073709551610UL)) >= 0x10ABD4D4L)) != l_634), (**l_363))) || (*p_73));
                    }
                }
            }
        }
    }
    return p_1353->g_303.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1353->g_86 p_1353->g_91 p_1353->g_85 p_1353->g_104 p_1353->g_82 p_1353->g_109 p_1353->g_comm_values p_1353->g_84 p_1353->g_80 p_1353->g_34 p_1353->g_134 p_1353->g_139 p_1353->g_143 p_1353->g_3 p_1353->g_40 p_1353->g_167 p_1353->g_142 p_1353->g_242 p_1353->g_170 p_1353->g_9 p_1353->g_267 p_1353->g_288 p_1353->g_290 p_1353->g_291 p_1353->g_164 p_1353->l_comm_values p_1353->g_301 p_1353->g_303 p_1353->g_193 p_1353->g_327 p_1353->g_302
 * writes: p_1353->g_86 p_1353->g_40 p_1353->g_84 p_1353->g_91 p_1353->g_142 p_1353->g_141 p_1353->g_82 p_1353->g_267 p_1353->g_220 p_1353->g_193 p_1353->g_302 p_1353->g_333 p_1353->g_335 p_1353->g_288
 */
int32_t  func_74(int32_t * p_75, int32_t * p_76, uint64_t  p_77, int16_t * p_78, struct S0 * p_1353)
{ /* block id: 26 */
    VECTOR(uint32_t, 4) l_92 = (VECTOR(uint32_t, 4))(0x841158A3L, (VECTOR(uint32_t, 2))(0x841158A3L, 0UL), 0UL);
    int32_t l_107 = 0x529FB7A8L;
    VECTOR(int16_t, 2) l_108 = (VECTOR(int16_t, 2))(0x26C4L, 0x2A3EL);
    int64_t *l_114 = (void*)0;
    int64_t *l_115 = (void*)0;
    int16_t *l_128 = (void*)0;
    VECTOR(uint32_t, 8) l_135 = (VECTOR(uint32_t, 8))(0x2A20AB37L, (VECTOR(uint32_t, 4))(0x2A20AB37L, (VECTOR(uint32_t, 2))(0x2A20AB37L, 4294967294UL), 4294967294UL), 4294967294UL, 0x2A20AB37L, 4294967294UL);
    int32_t l_152 = 0x1016036AL;
    int32_t l_153[6] = {(-1L),0x6DA30AC0L,(-1L),(-1L),0x6DA30AC0L,(-1L)};
    VECTOR(uint32_t, 2) l_169 = (VECTOR(uint32_t, 2))(4294967295UL, 0xEC65FD91L);
    uint32_t l_204 = 0x63B712D7L;
    uint8_t l_226 = 1UL;
    VECTOR(uint16_t, 16) l_292 = (VECTOR(uint16_t, 16))(0xFED1L, (VECTOR(uint16_t, 4))(0xFED1L, (VECTOR(uint16_t, 2))(0xFED1L, 65531UL), 65531UL), 65531UL, 0xFED1L, 65531UL, (VECTOR(uint16_t, 2))(0xFED1L, 65531UL), (VECTOR(uint16_t, 2))(0xFED1L, 65531UL), 0xFED1L, 65531UL, 0xFED1L, 65531UL);
    int16_t **l_293 = &l_128;
    uint32_t *l_308[3];
    uint32_t **l_307 = &l_308[1];
    VECTOR(uint32_t, 2) l_330 = (VECTOR(uint32_t, 2))(0UL, 8UL);
    int32_t l_331 = 0x755AF597L;
    VECTOR(uint16_t, 2) l_341 = (VECTOR(uint16_t, 2))(8UL, 65535UL);
    int i;
    for (i = 0; i < 3; i++)
        l_308[i] = (void*)0;
    for (p_1353->g_86 = 0; (p_1353->g_86 <= (-24)); --p_1353->g_86)
    { /* block id: 29 */
        VECTOR(uint32_t, 16) l_93 = (VECTOR(uint32_t, 16))(0x8FDC3C1AL, (VECTOR(uint32_t, 4))(0x8FDC3C1AL, (VECTOR(uint32_t, 2))(0x8FDC3C1AL, 0UL), 0UL), 0UL, 0x8FDC3C1AL, 0UL, (VECTOR(uint32_t, 2))(0x8FDC3C1AL, 0UL), (VECTOR(uint32_t, 2))(0x8FDC3C1AL, 0UL), 0x8FDC3C1AL, 0UL, 0x8FDC3C1AL, 0UL);
        int16_t *l_96 = (void*)0;
        int32_t *l_97[3][5][8] = {{{&p_1353->g_9,&p_1353->g_34,&p_1353->g_9,&p_1353->g_3,&p_1353->g_3,&p_1353->g_3,&p_1353->g_9,&p_1353->g_34},{&p_1353->g_9,&p_1353->g_34,&p_1353->g_9,&p_1353->g_3,&p_1353->g_3,&p_1353->g_3,&p_1353->g_9,&p_1353->g_34},{&p_1353->g_9,&p_1353->g_34,&p_1353->g_9,&p_1353->g_3,&p_1353->g_3,&p_1353->g_3,&p_1353->g_9,&p_1353->g_34},{&p_1353->g_9,&p_1353->g_34,&p_1353->g_9,&p_1353->g_3,&p_1353->g_3,&p_1353->g_3,&p_1353->g_9,&p_1353->g_34},{&p_1353->g_9,&p_1353->g_34,&p_1353->g_9,&p_1353->g_3,&p_1353->g_3,&p_1353->g_3,&p_1353->g_9,&p_1353->g_34}},{{&p_1353->g_9,&p_1353->g_34,&p_1353->g_9,&p_1353->g_3,&p_1353->g_3,&p_1353->g_3,&p_1353->g_9,&p_1353->g_34},{&p_1353->g_9,&p_1353->g_34,&p_1353->g_9,&p_1353->g_3,&p_1353->g_3,&p_1353->g_3,&p_1353->g_9,&p_1353->g_34},{&p_1353->g_9,&p_1353->g_34,&p_1353->g_9,&p_1353->g_3,&p_1353->g_3,&p_1353->g_3,&p_1353->g_9,&p_1353->g_34},{&p_1353->g_9,&p_1353->g_34,&p_1353->g_9,&p_1353->g_3,&p_1353->g_3,&p_1353->g_3,&p_1353->g_9,&p_1353->g_34},{&p_1353->g_9,&p_1353->g_34,&p_1353->g_9,&p_1353->g_3,&p_1353->g_3,&p_1353->g_3,&p_1353->g_9,&p_1353->g_34}},{{&p_1353->g_9,&p_1353->g_34,&p_1353->g_9,&p_1353->g_3,&p_1353->g_3,&p_1353->g_3,&p_1353->g_9,&p_1353->g_34},{&p_1353->g_9,&p_1353->g_34,&p_1353->g_9,&p_1353->g_3,&p_1353->g_3,&p_1353->g_3,&p_1353->g_9,&p_1353->g_34},{&p_1353->g_9,&p_1353->g_34,&p_1353->g_9,&p_1353->g_3,&p_1353->g_3,&p_1353->g_3,&p_1353->g_9,&p_1353->g_34},{&p_1353->g_9,&p_1353->g_34,&p_1353->g_9,&p_1353->g_3,&p_1353->g_3,&p_1353->g_3,&p_1353->g_9,&p_1353->g_34},{&p_1353->g_9,&p_1353->g_34,&p_1353->g_9,&p_1353->g_3,&p_1353->g_3,&p_1353->g_3,&p_1353->g_9,&p_1353->g_34}}};
        int i, j, k;
        p_1353->g_40.x = (safe_rshift_func_uint16_t_u_u((p_77 , (((void*)0 == &p_1353->g_86) && (&p_77 != &p_1353->g_84))), (p_1353->g_91 ^ ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_92.xz)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_93.s8f)))), ((safe_sub_func_uint16_t_u_u(((p_77 , l_96) != (void*)0), l_92.y)) == 0x5594L), p_77, ((VECTOR(uint32_t, 4))(0UL)), ((VECTOR(uint32_t, 4))(0UL)), 0x495AE89EL, 2UL)).lo, (uint32_t)p_1353->g_91))).s0736775706363404, (uint32_t)l_92.x))))).sc)));
    }
    if ((atomic_inc(&p_1353->g_atomic_input[51 * get_linear_group_id() + 35]) == 1))
    { /* block id: 33 */
        int32_t l_98 = (-4L);
        int8_t l_99 = 0x07L;
        l_99 ^= l_98;
        unsigned int result = 0;
        result += l_98;
        result += l_99;
        atomic_add(&p_1353->g_special_values[51 * get_linear_group_id() + 35], result);
    }
    else
    { /* block id: 35 */
        (1 + 1);
    }
    if (((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((*p_1353->g_85) = (*p_1353->g_85)), ((VECTOR(uint16_t, 2))(p_1353->g_104.yx)).even)), (safe_lshift_func_int16_t_s_s(((l_107 = ((p_1353->g_82 != l_107) , ((p_1353->g_91 && ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_108.yyyyxyyyyxyyyyyy)).s76)).yxyxyxxy))).s22, ((VECTOR(int16_t, 4))(p_1353->g_109.zzww)).hi))), 0x469BL, 0x4E2CL)).odd)), 0x4174L, (((!(safe_add_func_uint8_t_u_u(((((safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_1353->group_0_offset, get_group_id(0), 10), p_77)) | ((~(+((void*)0 != &p_1353->g_82))) != ((p_77 , 0UL) && 249UL))) && p_77) < GROUP_DIVERGE(2, 1)), p_77))) , &p_1353->g_84) == &p_1353->g_84), ((VECTOR(int16_t, 4))(0x1D78L)))).s7) != 0x34L))) || p_77), p_77)))) < p_1353->g_82))
    { /* block id: 40 */
        int32_t *l_118 = &p_1353->g_34;
        int32_t **l_119 = &l_118;
        uint32_t *l_126 = (void*)0;
        uint32_t *l_127 = (void*)0;
        uint64_t *l_129 = &p_1353->g_84;
        VECTOR(uint32_t, 16) l_136 = (VECTOR(uint32_t, 16))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0UL), 0UL), 0UL, 4294967288UL, 0UL, (VECTOR(uint32_t, 2))(4294967288UL, 0UL), (VECTOR(uint32_t, 2))(4294967288UL, 0UL), 4294967288UL, 0UL, 4294967288UL, 0UL);
        int32_t l_151[3];
        uint64_t l_155 = 0x0A848104350C7B6AL;
        VECTOR(int64_t, 4) l_168 = (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), 5L), 5L);
        VECTOR(uint32_t, 4) l_183 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xAFD50193L), 0xAFD50193L);
        VECTOR(uint16_t, 2) l_221 = (VECTOR(uint16_t, 2))(0x0CE0L, 0xC829L);
        int i;
        for (i = 0; i < 3; i++)
            l_151[i] = 0L;
        if (((((p_1353->g_comm_values[p_1353->tid] | ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((p_1353->g_86 != (safe_sub_func_int8_t_s_s(((-1L) <= (&p_1353->g_9 != ((*l_119) = l_118))), (((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((18446744073709551615UL >= ((*l_129) = (p_77 == ((p_77 , ((((((l_107 = 0xDA819422L) , l_128) == p_78) , p_1353->g_84) && 4UL) >= 0UL)) && l_92.w)))), GROUP_DIVERGE(1, 1))), p_77)) , p_77) >= 0UL)))) , p_77), ((VECTOR(int8_t, 4))(0x2EL)), (-1L), 0L, 1L)))).s1) <= l_108.x) , p_1353->g_80.s5) > l_108.x))
        { /* block id: 44 */
            uint32_t l_133 = 0xEE32CE8EL;
            VECTOR(uint32_t, 4) l_137 = (VECTOR(uint32_t, 4))(0x8AA24F53L, (VECTOR(uint32_t, 2))(0x8AA24F53L, 0x48EFB741L), 0x48EFB741L);
            int16_t **l_138[10] = {(void*)0,&l_128,&p_1353->g_85,&l_128,(void*)0,(void*)0,&l_128,&p_1353->g_85,&l_128,(void*)0};
            int32_t *l_145 = &l_107;
            int i;
            for (p_1353->g_91 = 29; (p_1353->g_91 >= 39); p_1353->g_91 = safe_add_func_int64_t_s_s(p_1353->g_91, 8))
            { /* block id: 47 */
                int32_t *l_132 = &l_107;
                (*l_132) ^= (**l_119);
            }
            l_107 = l_133;
            (*l_145) ^= (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 4))(p_1353->g_134.sdd0b)), ((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(0xAB5352CAL, ((VECTOR(uint32_t, 2))(4294967295UL, 0x74B05BB3L)), 1UL)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 16))(l_135.s3561525264475746)).s1da5, ((VECTOR(uint32_t, 4))(l_136.sf8a6))))).xzwyyxxxywwwxwyy, ((VECTOR(uint32_t, 8))(l_137.yywxzyyy)).s5672164415420400))).s3cc4, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 2))(4294967295UL, 0x742CEBDEL)).yxxx, ((VECTOR(uint32_t, 16))(0x791DEB0AL, 4294967295UL, 4294967291UL, 4294967287UL, (l_133 , (&p_75 != ((l_92.y , ((p_78 = &p_1353->g_86) != &p_1353->g_86)) , p_1353->g_139[6]))), ((((*l_129) = 0x694C051F803E9268L) | (((p_1353->g_142 = l_129) != p_1353->g_143) , 1UL)) ^ (-2L)), ((VECTOR(uint32_t, 8))(4294967287UL)), 0xCCDC14FEL, 1UL)).sce41))).odd)), 0xE891FE2EL, 0x71EAA774L)).wxyxywzz)).odd))).xzzywyzx)).s44)), 0UL, 0xFCAAD6EEL)), ((VECTOR(uint32_t, 8))(0xD9E1A7EAL)), ((VECTOR(uint32_t, 8))(4294967295UL))))).hi, ((VECTOR(uint32_t, 4))(0UL))))).xxzxzwzzxzxxyzyw)).s5 , (**l_119));
        }
        else
        { /* block id: 55 */
            (*l_119) = &p_1353->g_34;
        }
        for (l_107 = 0; (l_107 > 21); l_107 = safe_add_func_int64_t_s_s(l_107, 5))
        { /* block id: 60 */
            int32_t *l_148 = (void*)0;
            int32_t *l_149 = (void*)0;
            int32_t *l_150[9];
            int32_t l_154 = 0x1B652CE7L;
            VECTOR(int8_t, 2) l_184 = (VECTOR(int8_t, 2))(1L, 0L);
            VECTOR(int8_t, 4) l_185 = (VECTOR(int8_t, 4))(0x44L, (VECTOR(int8_t, 2))(0x44L, (-5L)), (-5L));
            VECTOR(int8_t, 4) l_186 = (VECTOR(int8_t, 4))(0x1EL, (VECTOR(int8_t, 2))(0x1EL, 1L), 1L);
            VECTOR(uint16_t, 16) l_191 = (VECTOR(uint16_t, 16))(0x6B99L, (VECTOR(uint16_t, 4))(0x6B99L, (VECTOR(uint16_t, 2))(0x6B99L, 0xAD17L), 0xAD17L), 0xAD17L, 0x6B99L, 0xAD17L, (VECTOR(uint16_t, 2))(0x6B99L, 0xAD17L), (VECTOR(uint16_t, 2))(0x6B99L, 0xAD17L), 0x6B99L, 0xAD17L, 0x6B99L, 0xAD17L);
            uint8_t *l_192[4] = {&p_1353->g_193,&p_1353->g_193,&p_1353->g_193,&p_1353->g_193};
            VECTOR(uint32_t, 4) l_203 = (VECTOR(uint32_t, 4))(0x0BC0549BL, (VECTOR(uint32_t, 2))(0x0BC0549BL, 0x201F38D1L), 0x201F38D1L);
            int16_t *l_216 = (void*)0;
            int64_t l_241[5][8][3] = {{{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)}},{{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)}},{{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)}},{{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)}},{{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)},{0x78C7E578F9897B1FL,(-8L),(-1L)}}};
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_150[i] = (void*)0;
            l_155++;
            if ((((((safe_rshift_func_uint16_t_u_u((((void*)0 == &l_150[5]) | ((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_1353->g_164.s0b7d1905)).s2, (safe_mod_func_int64_t_s_s(((p_77 & ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x49E869F92A7757BEL, 4L)), 0x51CEF0AC7219EB45L, 0x0565945407581B47L)).xzxxwzwzwzxyxwyz, ((VECTOR(int64_t, 2))(p_1353->g_167.s27)).xxyyyxxyyxyxyxxx, ((VECTOR(int64_t, 4))(l_168.xzzx)).wzywxzwzywwwyxxx))), ((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 2))(0x7CEA1EC8D3978347L, 0x7410F041E959A60EL)).xyxy))).wzyzzzxwzxzxxyww))).s0b07)).even, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(0L, ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 2))(0x4D2A8265L, 0x14F7FA5DL)), ((VECTOR(uint32_t, 4))(l_169.yyxy)).hi))), 0x11DFB01F2DFD3FBDL)).lo)), 0x4A4C857A1910C96EL, 0x7F405F90CA24133EL)).odd))).yxxxxxxxyxxxxxyx)).sa) , (p_1353->g_3 , ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_1353->g_170.sdf)).yxyy)).lo)).lo)), 0x5DDA62993E52E987L)))) , (!(safe_sub_func_uint64_t_u_u((~(safe_lshift_func_uint16_t_u_s(((safe_div_func_uint32_t_u_u(FAKE_DIVERGE(p_1353->global_0_offset, get_global_id(0), 10), (((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(((*p_78) &= 0x1E85L), 2)), (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_183.yy)), ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(0UL, ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(l_184.yyxy)).xxwwyzyxyyywywyx, ((VECTOR(int8_t, 8))(l_185.zyzyyyzy)).s7736777553064047))).even, ((VECTOR(int8_t, 16))(l_186.yzyzyzxyxzwzyyyx)).even))).s13, ((VECTOR(uint8_t, 4))(0x20L, ((safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_1353->local_0_offset, get_local_id(0), 10), (safe_add_func_int16_t_s_s(0x3A6FL, ((VECTOR(uint16_t, 8))(l_191.s905cfcb8)).s5)))) , GROUP_DIVERGE(1, 1)), 1UL, 0xABL)).lo))), ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 4))(0x2488L, (((l_152 = (p_77 < 0UL)) <= p_77) | GROUP_DIVERGE(1, 1)), 0UL, 0UL)).wwxxxwzz, ((VECTOR(uint16_t, 8))(7UL))))), ((VECTOR(uint16_t, 8))(0UL))))).lo))), 0xE7CBL)), 2UL, ((VECTOR(uint16_t, 2))(0xDA66L)), p_77, 0xCE65L, 0UL, 65528UL, 65532UL)).s10)), ((VECTOR(uint16_t, 2))(0x11EAL))))), ((VECTOR(uint32_t, 4))(0xD7227813L)), ((VECTOR(uint32_t, 8))(0x03CEEFD6L)))).s78, ((VECTOR(uint32_t, 2))(0xBA8A70E6L))))).yxxxyxyxxyxyyxxy)).s43, ((VECTOR(uint32_t, 2))(0xCCA17B01L)), ((VECTOR(uint32_t, 2))(0x23CCA663L))))), ((VECTOR(uint32_t, 2))(0UL))))).odd, l_92.x)))) || 0xB79E97E5L) , 0x519DB94EL))) ^ p_1353->g_40.x), p_77))), 0L))))), l_108.y)) && (*p_1353->g_85)) | p_1353->g_167.s0) < p_1353->g_109.x) > p_1353->g_80.s3))
            { /* block id: 64 */
                int32_t l_195 = 9L;
                int64_t *l_196 = (void*)0;
                int64_t **l_197 = &l_196;
                int64_t **l_198 = &l_114;
                int32_t l_205 = 0L;
                int8_t l_232 = 0L;
                if ((*p_75))
                    break;
                p_1353->g_141[2][1][5] = &l_154;
                l_205 = ((((*l_129) = ((VECTOR(uint64_t, 16))((safe_unary_minus_func_int64_t_s(p_77)), 0x4ABB9B91C458B7C6L, 0x7789EAE0A9FA5618L, 0x6815FF81F1C5D373L, ((VECTOR(uint64_t, 8))(p_77, 0xF79517D8BD1D58CDL, l_195, 0x60E4E38252909BAAL, ((VECTOR(uint64_t, 4))(p_1353->g_80.s5, 0xC4E5ABEBF25DA6E1L, 18446744073709551615UL, 0xF71F425CC5604E1AL)))), ((((*l_197) = l_196) == ((*l_198) = l_114)) & ((safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((+((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_203.xw)).yyyy)))).yzzxzwxy, (uint32_t)(((((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x03994F5809B3B63DL, 0L)), p_77, 0x643B3FE90797314FL, 0x6B1CB8AD097FBBC7L, 1L, p_1353->g_164.s0, ((VECTOR(int64_t, 2))((-6L))), 4L, ((VECTOR(int64_t, 2))((-1L))), ((VECTOR(int64_t, 2))(0x0B6152E5FB812E36L)), 1L, 1L)).sa || 0x69DA9D15133C6B0BL) , 1UL) , l_204) | GROUP_DIVERGE(2, 1)) , p_77)))).lo)).hi, ((VECTOR(uint32_t, 2))(0x2ED9ACA4L))))), 0x4AD2E39DL, 0x3C6ECB8EL)).x), l_205)) || 0x088C05FBDCC5206AL), p_1353->g_193)) == 0x5DL)), 0x40970185C4AB55A8L, 1UL, 0x5ED5C099B40CF0C4L)).s7) , 7UL) >= p_1353->g_167.s7);
                l_232 |= (safe_mod_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((&p_1353->g_86 == l_216), (((--(*l_129)) , ((l_108.x && (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(p_1353->g_219.s6b)).yyxx, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(0L, 0x0130779BL)).xxxxyyxx, (int32_t)((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), 0L)), 0x6F3B4925L, (-1L))).z))).s55)), ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(p_1353->g_220.s9b0c5a6c)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_221.xyxyxyyx)), 65535UL, p_77, 0xD8E9L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 4))((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((l_226 == ((safe_unary_minus_func_uint8_t_u((l_205 = (((((*p_75) , ((void*)0 != p_76)) && (safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((p_77 >= (-9L)), l_195)), p_1353->g_170.sd))) | p_1353->g_104.y) >= 0x61A2151F2F3D9938L)))) >= p_1353->g_40.x)), 5)), p_77)), ((VECTOR(uint16_t, 2))(65535UL)), 65535UL))))))), 0x1874L)))).s89)).xyxxyyxy))).s64))).yyxx))).hi, ((VECTOR(uint32_t, 2))(0xF7702C50L))))))), (-1L), 0L)).z < p_1353->g_82)) , 4294967290UL)) , (*p_1353->g_85)))), GROUP_DIVERGE(2, 1))) ^ p_77), 0x17CA8DE84D2678A6L)), 0UL)) != p_77), p_1353->g_80.s0));
            }
            else
            { /* block id: 74 */
                uint8_t *l_244 = &l_226;
                int32_t l_250 = (-4L);
                atomic_min(&p_1353->g_atomic_reduction[get_linear_group_id()], (safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((((safe_sub_func_int64_t_s_s(((safe_div_func_uint64_t_u_u(0x68FEC65BDC4105BAL, 0x356A64D3B09A29ADL)) <= l_241[3][5][0]), (((0x0A2F051051B63102L & GROUP_DIVERGE(0, 1)) >= (((l_152 = (((&p_1353->g_141[0][0][1] == ((p_1353->g_142 != ((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(p_1353->g_242.sac5f6222eaac3adb)))).sa , (safe_unary_minus_func_int64_t_s(0x72926F0E8B8BF441L))) , (void*)0)) , &p_75)) <= (**l_119)) <= GROUP_DIVERGE(2, 1))) , l_244) != &p_1353->g_193)) , p_77))) < 0x5FL) < 0UL) ^ p_1353->g_170.s9) <= (*p_1353->g_85)), 0UL)), FAKE_DIVERGE(p_1353->global_1_offset, get_global_id(1), 10))));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1353->v_collective += p_1353->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                for (l_155 = 28; (l_155 < 10); l_155 = safe_sub_func_int64_t_s_s(l_155, 8))
                { /* block id: 79 */
                    for (l_152 = 0; (l_152 >= 23); l_152 = safe_add_func_uint8_t_u_u(l_152, 6))
                    { /* block id: 82 */
                        VECTOR(int32_t, 8) l_249 = (VECTOR(int32_t, 8))(0x42EE290AL, (VECTOR(int32_t, 4))(0x42EE290AL, (VECTOR(int32_t, 2))(0x42EE290AL, 0x5E70FEE4L), 0x5E70FEE4L), 0x5E70FEE4L, 0x42EE290AL, 0x5E70FEE4L);
                        int i;
                        return l_249.s3;
                    }
                }
                l_250 = 3L;
            }
        }
    }
    else
    { /* block id: 89 */
        uint32_t l_300 = 0xA76652DCL;
        int32_t **l_337 = &p_1353->g_141[2][1][5];
        for (p_1353->g_82 = 0; (p_1353->g_82 == 1); p_1353->g_82++)
        { /* block id: 92 */
            uint32_t l_261[1][2][8] = {{{0xFBF128C1L,0xFBF128C1L,0xADE7CE8AL,4UL,0xBEFE16E3L,4UL,0xADE7CE8AL,0xFBF128C1L},{0xFBF128C1L,0xFBF128C1L,0xADE7CE8AL,4UL,0xBEFE16E3L,4UL,0xADE7CE8AL,0xFBF128C1L}}};
            VECTOR(uint16_t, 4) l_289 = (VECTOR(uint16_t, 4))(0x1303L, (VECTOR(uint16_t, 2))(0x1303L, 0UL), 0UL);
            int i, j, k;
            for (l_226 = 0; (l_226 < 35); l_226 = safe_add_func_int8_t_s_s(l_226, 1))
            { /* block id: 95 */
                int32_t *l_259 = (void*)0;
                int32_t *l_260 = &l_153[0];
                uint32_t *l_266 = &p_1353->g_267;
                VECTOR(uint32_t, 4) l_286 = (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 7UL), 7UL);
                VECTOR(uint16_t, 16) l_287 = (VECTOR(uint16_t, 16))(0x5130L, (VECTOR(uint16_t, 4))(0x5130L, (VECTOR(uint16_t, 2))(0x5130L, 1UL), 1UL), 1UL, 0x5130L, 1UL, (VECTOR(uint16_t, 2))(0x5130L, 1UL), (VECTOR(uint16_t, 2))(0x5130L, 1UL), 0x5130L, 1UL, 0x5130L, 1UL);
                uint64_t *l_296 = &p_1353->g_84;
                VECTOR(uint16_t, 4) l_297 = (VECTOR(uint16_t, 4))(0xBFC9L, (VECTOR(uint16_t, 2))(0xBFC9L, 3UL), 3UL);
                int16_t *l_298[9];
                uint8_t *l_299 = &p_1353->g_193;
                int i;
                for (i = 0; i < 9; i++)
                    l_298[i] = (void*)0;
                l_261[0][0][5] &= ((0x034C931DL && (safe_div_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u(p_1353->g_3, 5)), p_77))) | ((p_1353->g_9 , ((*l_260) = (*p_75))) >= 0x25BD9EA4L));
                if (((8L <= (*p_1353->g_85)) >= ((safe_add_func_int16_t_s_s((((*l_266)--) , (safe_rshift_func_uint8_t_u_u(((*l_299) = (safe_div_func_uint8_t_u_u(((((safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u((((safe_div_func_uint8_t_u_u((p_77 <= (((0x78E6L != (5L || ((p_1353->g_220.s2 = (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(1L, (-1L))), 0x4E9850E9C8482E40L, ((~((((VECTOR(uint32_t, 16))(l_286.yyxwzwzyywwywwyx)).s7 > ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),uint32_t,((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 4))(l_287.s3f3f)).hi, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(p_1353->g_288.wxzyyxwy)).s6425543576177747)).s87, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_289.ywyzwxww)).s30))))).yxyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 16))(p_1353->g_290.xwwyxyywzwxwzyyz)).s0be3, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 4))(7UL, ((VECTOR(uint16_t, 2))(p_1353->g_291.wx)), 0UL)), ((VECTOR(uint16_t, 2))(l_292.sda)).yxxy))).wzyzwxxwxwzxxwxx)).s3746))).wzxxxzxywyywyyxw, ((VECTOR(uint16_t, 4))(l_261[0][0][7], ((l_293 != (void*)0) || ((*l_296) = (((VECTOR(uint32_t, 8))((safe_mod_func_uint32_t_u_u(p_1353->g_164.s8, 0x17FD844EL)), 1UL, ((VECTOR(uint32_t, 4))(1UL)), 1UL, 0xEE74D68AL)).s0 && 0x69765974L))), 0xE8A2L, 5UL)).zwzzzxwyxwzwxwyx))).s81a6))))), ((VECTOR(uint16_t, 4))(0xB9ECL))))).odd)).yxxyxxxx)).hi, (uint32_t)4294967295UL, (uint32_t)(*l_260)))).yywyywyx)).s0163104374036362, (uint32_t)l_135.s0, (uint32_t)0x2C06835FL))).s8686)).w) > (-1L))) == p_1353->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1353->tid, 35))]), (*l_260), 0x08090F0A78AF1776L, 0L, 0L)).s6 >= l_297.z), l_226)), l_92.x))) | p_1353->g_40.x))) , GROUP_DIVERGE(0, 1)) >= 0L)), 0x59L)) ^ FAKE_DIVERGE(p_1353->local_1_offset, get_local_id(1), 10)) != 0xB86B1F90L), (*p_78))), 2)) > FAKE_DIVERGE(p_1353->global_1_offset, get_global_id(1), 10)), GROUP_DIVERGE(2, 1))) ^ (-1L)) != GROUP_DIVERGE(1, 1)) , p_77), FAKE_DIVERGE(p_1353->group_0_offset, get_group_id(0), 10)))), 4))), l_107)) < l_300)))
                { /* block id: 102 */
                    int8_t l_306 = 0x31L;
                    (*l_260) = (*p_75);
                    if ((251UL && (((((0x5E3CL | ((VECTOR(uint16_t, 8))(p_1353->g_301.xyyxyyxx)).s5) >= (p_1353->g_302 = ((void*)0 == p_1353->g_142))) != (((l_300 , &p_1353->g_267) == (void*)0) & ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_1353->g_303.xwxxzxzz)).s4477774253143521)).s7)) ^ ((*l_260) |= ((safe_sub_func_int16_t_s_s((l_306 = ((*p_78) = 9L)), (p_1353->g_301.x ^ GROUP_DIVERGE(1, 1)))) , 0x063662FDL))) == p_77)))
                    { /* block id: 108 */
                        (*l_260) = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x1E3C6B21L, 0x5E040CA6L)))).lo;
                    }
                    else
                    { /* block id: 110 */
                        uint32_t ***l_309 = &l_307;
                        if ((*p_75))
                            break;
                        (*l_309) = l_307;
                    }
                    if (l_289.w)
                        continue;
                }
                else
                { /* block id: 115 */
                    int8_t l_310 = 0x5BL;
                    int8_t *l_332 = &p_1353->g_333[4][3][0];
                    uint8_t *l_334 = &p_1353->g_335;
                    int32_t **l_336[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_336[i] = &p_1353->g_141[2][1][5];
                    if (l_300)
                        break;
                    (*l_260) = (!((((((l_310 , (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(p_77, 5)), (*l_260)))) >= (safe_mod_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(l_300, (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((*l_334) = (((*l_332) = ((safe_lshift_func_uint16_t_u_u(((((((++(*l_299)) != p_1353->g_134.s4) , (p_1353->g_40.x & ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(p_1353->g_327.s6316647726123412)))).s5)) == (safe_mod_func_uint16_t_u_u(((((VECTOR(uint32_t, 16))(l_330.yyxyxxyyyyxxyxxy)).s8 || ((void*)0 == &p_1353->g_267)) || (l_108.x >= GROUP_DIVERGE(2, 1))), p_77))) , (*l_260)) || (*l_260)), l_331)) , p_1353->g_301.y)) , p_77)), 7)) , l_289.y), p_77)))), p_1353->g_288.z))) && 0L) <= p_77) || 1UL) >= l_310));
                    p_1353->g_141[4][1][6] = &p_1353->g_3;
                }
            }
            if (l_300)
                break;
        }
        (*l_337) = p_75;
    }
    for (p_1353->g_86 = 0; (p_1353->g_86 == 5); ++p_1353->g_86)
    { /* block id: 130 */
        uint8_t l_340 = 255UL;
        uint64_t *l_342[3][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_349 = (-10L);
        int32_t *l_350 = &l_153[0];
        int32_t *l_351 = (void*)0;
        int32_t *l_352 = (void*)0;
        int32_t *l_353 = (void*)0;
        int32_t *l_354[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t **l_355 = &l_350;
        int i, j;
        l_349 = ((l_152 = ((p_77 |= (l_340 || (((VECTOR(uint16_t, 16))(l_341.xxxyxxyyyyxyyyxy)).sa >= p_1353->g_167.s2))) < l_204)) < (l_340 && (((p_1353->g_288.z = (l_331 ^ (l_153[5] = (safe_sub_func_uint32_t_u_u(l_340, (--p_1353->g_302)))))) | ((void*)0 == &p_1353->g_333[4][0][0])) || (&p_1353->g_193 != &l_340))));
        l_107 = ((*l_350) |= (-4L));
        (*l_355) = (p_77 , &l_349);
    }
    return (*p_75);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[51];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 51; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[51];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 51; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[35];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 35; i++)
            l_comm_values[i] = 1;
    struct S0 c_1354;
    struct S0* p_1353 = &c_1354;
    struct S0 c_1355 = {
        (-7L), // p_1353->g_2
        0x30647DC4L, // p_1353->g_3
        3L, // p_1353->g_9
        (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0xB11F3813L), 0xB11F3813L), // p_1353->g_25
        0x31EA0627L, // p_1353->g_34
        (VECTOR(int32_t, 2))(0x5E905F4DL, 0x653DDB20L), // p_1353->g_40
        (VECTOR(uint64_t, 8))(0xB047C1471C2AA0BDL, (VECTOR(uint64_t, 4))(0xB047C1471C2AA0BDL, (VECTOR(uint64_t, 2))(0xB047C1471C2AA0BDL, 0x7E1EFC39FA237FF9L), 0x7E1EFC39FA237FF9L), 0x7E1EFC39FA237FF9L, 0xB047C1471C2AA0BDL, 0x7E1EFC39FA237FF9L), // p_1353->g_80
        0xA138L, // p_1353->g_82
        0xB24CEC8E4446CA37L, // p_1353->g_84
        0x26B1L, // p_1353->g_86
        &p_1353->g_86, // p_1353->g_85
        0x358B9E07L, // p_1353->g_91
        (VECTOR(uint16_t, 2))(0UL, 0xB518L), // p_1353->g_104
        (VECTOR(int16_t, 4))(0x0977L, (VECTOR(int16_t, 2))(0x0977L, (-7L)), (-7L)), // p_1353->g_109
        (VECTOR(uint32_t, 16))(0xC8DDD0EBL, (VECTOR(uint32_t, 4))(0xC8DDD0EBL, (VECTOR(uint32_t, 2))(0xC8DDD0EBL, 5UL), 5UL), 5UL, 0xC8DDD0EBL, 5UL, (VECTOR(uint32_t, 2))(0xC8DDD0EBL, 5UL), (VECTOR(uint32_t, 2))(0xC8DDD0EBL, 5UL), 0xC8DDD0EBL, 5UL, 0xC8DDD0EBL, 5UL), // p_1353->g_134
        &p_1353->g_9, // p_1353->g_140
        {{{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0}},{{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0},{(void*)0,(void*)0,&p_1353->g_34,&p_1353->g_9,&p_1353->g_34,(void*)0,(void*)0}}}, // p_1353->g_141
        {&p_1353->g_140,&p_1353->g_140,&p_1353->g_140,&p_1353->g_140,&p_1353->g_140,&p_1353->g_140,&p_1353->g_140,&p_1353->g_140,&p_1353->g_140}, // p_1353->g_139
        (void*)0, // p_1353->g_142
        0L, // p_1353->g_144
        &p_1353->g_144, // p_1353->g_143
        (VECTOR(uint16_t, 16))(0x1AE5L, (VECTOR(uint16_t, 4))(0x1AE5L, (VECTOR(uint16_t, 2))(0x1AE5L, 0x0522L), 0x0522L), 0x0522L, 0x1AE5L, 0x0522L, (VECTOR(uint16_t, 2))(0x1AE5L, 0x0522L), (VECTOR(uint16_t, 2))(0x1AE5L, 0x0522L), 0x1AE5L, 0x0522L, 0x1AE5L, 0x0522L), // p_1353->g_164
        (VECTOR(int64_t, 8))(0x1C927E87AF14CE29L, (VECTOR(int64_t, 4))(0x1C927E87AF14CE29L, (VECTOR(int64_t, 2))(0x1C927E87AF14CE29L, 0x266AF2F86AFBF693L), 0x266AF2F86AFBF693L), 0x266AF2F86AFBF693L, 0x1C927E87AF14CE29L, 0x266AF2F86AFBF693L), // p_1353->g_167
        (VECTOR(int64_t, 16))(0x771B67568F5A85F1L, (VECTOR(int64_t, 4))(0x771B67568F5A85F1L, (VECTOR(int64_t, 2))(0x771B67568F5A85F1L, 0x0F52E07C21493796L), 0x0F52E07C21493796L), 0x0F52E07C21493796L, 0x771B67568F5A85F1L, 0x0F52E07C21493796L, (VECTOR(int64_t, 2))(0x771B67568F5A85F1L, 0x0F52E07C21493796L), (VECTOR(int64_t, 2))(0x771B67568F5A85F1L, 0x0F52E07C21493796L), 0x771B67568F5A85F1L, 0x0F52E07C21493796L, 0x771B67568F5A85F1L, 0x0F52E07C21493796L), // p_1353->g_170
        0x1FL, // p_1353->g_193
        (VECTOR(int32_t, 16))(0x293BD1F3L, (VECTOR(int32_t, 4))(0x293BD1F3L, (VECTOR(int32_t, 2))(0x293BD1F3L, 0x7B0FE012L), 0x7B0FE012L), 0x7B0FE012L, 0x293BD1F3L, 0x7B0FE012L, (VECTOR(int32_t, 2))(0x293BD1F3L, 0x7B0FE012L), (VECTOR(int32_t, 2))(0x293BD1F3L, 0x7B0FE012L), 0x293BD1F3L, 0x7B0FE012L, 0x293BD1F3L, 0x7B0FE012L), // p_1353->g_219
        (VECTOR(int16_t, 16))(0x2CBCL, (VECTOR(int16_t, 4))(0x2CBCL, (VECTOR(int16_t, 2))(0x2CBCL, 0x3F2CL), 0x3F2CL), 0x3F2CL, 0x2CBCL, 0x3F2CL, (VECTOR(int16_t, 2))(0x2CBCL, 0x3F2CL), (VECTOR(int16_t, 2))(0x2CBCL, 0x3F2CL), 0x2CBCL, 0x3F2CL, 0x2CBCL, 0x3F2CL), // p_1353->g_220
        (VECTOR(int64_t, 16))(0x00C5D144D0A46537L, (VECTOR(int64_t, 4))(0x00C5D144D0A46537L, (VECTOR(int64_t, 2))(0x00C5D144D0A46537L, 0x5A2DBFFCE8DC023EL), 0x5A2DBFFCE8DC023EL), 0x5A2DBFFCE8DC023EL, 0x00C5D144D0A46537L, 0x5A2DBFFCE8DC023EL, (VECTOR(int64_t, 2))(0x00C5D144D0A46537L, 0x5A2DBFFCE8DC023EL), (VECTOR(int64_t, 2))(0x00C5D144D0A46537L, 0x5A2DBFFCE8DC023EL), 0x00C5D144D0A46537L, 0x5A2DBFFCE8DC023EL, 0x00C5D144D0A46537L, 0x5A2DBFFCE8DC023EL), // p_1353->g_242
        0xDFFA1354L, // p_1353->g_267
        (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 65535UL), 65535UL), // p_1353->g_288
        (VECTOR(uint16_t, 4))(0x6D2EL, (VECTOR(uint16_t, 2))(0x6D2EL, 1UL), 1UL), // p_1353->g_290
        (VECTOR(uint16_t, 4))(0xA284L, (VECTOR(uint16_t, 2))(0xA284L, 1UL), 1UL), // p_1353->g_291
        (VECTOR(uint16_t, 2))(0x4E32L, 0UL), // p_1353->g_301
        0x7D8400D4L, // p_1353->g_302
        (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x60F0L), 0x60F0L), // p_1353->g_303
        (VECTOR(uint16_t, 8))(0x75A7L, (VECTOR(uint16_t, 4))(0x75A7L, (VECTOR(uint16_t, 2))(0x75A7L, 0UL), 0UL), 0UL, 0x75A7L, 0UL), // p_1353->g_327
        {{{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL}},{{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL}},{{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL}},{{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL}},{{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL}},{{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL}},{{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL},{(-4L),6L,(-1L),0x33L,0x6DL}}}, // p_1353->g_333
        0xCBL, // p_1353->g_335
        {0x1FA05B87L,0x1FA05B87L,0x1FA05B87L,0x1FA05B87L,0x1FA05B87L,0x1FA05B87L,0x1FA05B87L,0x1FA05B87L}, // p_1353->g_357
        (VECTOR(uint16_t, 4))(0x64AAL, (VECTOR(uint16_t, 2))(0x64AAL, 0x1E0DL), 0x1E0DL), // p_1353->g_369
        (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x0134EE97L), 0x0134EE97L), // p_1353->g_377
        {{(-1L),9L},{(-1L),9L},{(-1L),9L},{(-1L),9L}}, // p_1353->g_421
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L)), // p_1353->g_440
        (VECTOR(int8_t, 2))((-5L), 1L), // p_1353->g_469
        (void*)0, // p_1353->g_546
        (VECTOR(int16_t, 2))(0x019FL, (-1L)), // p_1353->g_562
        (VECTOR(int8_t, 4))(0x1EL, (VECTOR(int8_t, 2))(0x1EL, 0x1FL), 0x1FL), // p_1353->g_571
        &p_1353->g_302, // p_1353->g_588
        {{&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588},{&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588},{&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588},{&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588},{&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588},{&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588},{&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588},{&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588},{&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588},{&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588,&p_1353->g_588}}, // p_1353->g_587
        &p_1353->g_587[5][3], // p_1353->g_586
        (VECTOR(int8_t, 8))(0x4AL, (VECTOR(int8_t, 4))(0x4AL, (VECTOR(int8_t, 2))(0x4AL, 0L), 0L), 0L, 0x4AL, 0L), // p_1353->g_643
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x46L), 0x46L), 0x46L, 0L, 0x46L, (VECTOR(int8_t, 2))(0L, 0x46L), (VECTOR(int8_t, 2))(0L, 0x46L), 0L, 0x46L, 0L, 0x46L), // p_1353->g_646
        3L, // p_1353->g_673
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L), // p_1353->g_712
        (VECTOR(int64_t, 8))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 0L), 0L), 0L, 8L, 0L), // p_1353->g_720
        (VECTOR(int8_t, 16))(0x7DL, (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, 0x39L), 0x39L), 0x39L, 0x7DL, 0x39L, (VECTOR(int8_t, 2))(0x7DL, 0x39L), (VECTOR(int8_t, 2))(0x7DL, 0x39L), 0x7DL, 0x39L, 0x7DL, 0x39L), // p_1353->g_721
        (VECTOR(int8_t, 2))(6L, 0x71L), // p_1353->g_724
        (VECTOR(uint16_t, 8))(4UL, (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 0UL), 0UL), 0UL, 4UL, 0UL), // p_1353->g_760
        &p_1353->g_267, // p_1353->g_764
        1UL, // p_1353->g_820
        (VECTOR(uint64_t, 2))(1UL, 0xD32DF51E6707DF5CL), // p_1353->g_987
        (VECTOR(int16_t, 8))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x1C2CL), 0x1C2CL), 0x1C2CL, 2L, 0x1C2CL), // p_1353->g_1023
        1UL, // p_1353->g_1029
        (VECTOR(uint64_t, 4))(0xBB02A9711D519CD7L, (VECTOR(uint64_t, 2))(0xBB02A9711D519CD7L, 0UL), 0UL), // p_1353->g_1090
        (VECTOR(uint8_t, 2))(0xE8L, 0x15L), // p_1353->g_1117
        (VECTOR(int16_t, 16))(0x19CFL, (VECTOR(int16_t, 4))(0x19CFL, (VECTOR(int16_t, 2))(0x19CFL, 0L), 0L), 0L, 0x19CFL, 0L, (VECTOR(int16_t, 2))(0x19CFL, 0L), (VECTOR(int16_t, 2))(0x19CFL, 0L), 0x19CFL, 0L, 0x19CFL, 0L), // p_1353->g_1124
        (VECTOR(int16_t, 2))(0x5CCFL, 1L), // p_1353->g_1129
        &p_1353->g_357[3], // p_1353->g_1146
        5UL, // p_1353->g_1154
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 7L), 7L), // p_1353->g_1161
        (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 1UL), 1UL), 1UL, 8UL, 1UL), // p_1353->g_1189
        (VECTOR(uint16_t, 16))(0x3C01L, (VECTOR(uint16_t, 4))(0x3C01L, (VECTOR(uint16_t, 2))(0x3C01L, 0UL), 0UL), 0UL, 0x3C01L, 0UL, (VECTOR(uint16_t, 2))(0x3C01L, 0UL), (VECTOR(uint16_t, 2))(0x3C01L, 0UL), 0x3C01L, 0UL, 0x3C01L, 0UL), // p_1353->g_1190
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x49A8076886C0C156L), 0x49A8076886C0C156L), 0x49A8076886C0C156L, 0L, 0x49A8076886C0C156L, (VECTOR(int64_t, 2))(0L, 0x49A8076886C0C156L), (VECTOR(int64_t, 2))(0L, 0x49A8076886C0C156L), 0L, 0x49A8076886C0C156L, 0L, 0x49A8076886C0C156L), // p_1353->g_1193
        &p_1353->g_193, // p_1353->g_1210
        &p_1353->g_1210, // p_1353->g_1209
        &p_1353->g_1209, // p_1353->g_1208
        (VECTOR(uint16_t, 8))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 1UL), 1UL), 1UL, 65530UL, 1UL), // p_1353->g_1211
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xE72DL), 0xE72DL), 0xE72DL, 0UL, 0xE72DL, (VECTOR(uint16_t, 2))(0UL, 0xE72DL), (VECTOR(uint16_t, 2))(0UL, 0xE72DL), 0UL, 0xE72DL, 0UL, 0xE72DL), // p_1353->g_1212
        (VECTOR(uint16_t, 2))(0xC2E0L, 7UL), // p_1353->g_1213
        0x27B40CE3L, // p_1353->g_1270
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xF25FL), 0xF25FL), 0xF25FL, 1UL, 0xF25FL, (VECTOR(uint16_t, 2))(1UL, 0xF25FL), (VECTOR(uint16_t, 2))(1UL, 0xF25FL), 1UL, 0xF25FL, 1UL, 0xF25FL), // p_1353->g_1279
        (VECTOR(uint32_t, 16))(0x1A36B07DL, (VECTOR(uint32_t, 4))(0x1A36B07DL, (VECTOR(uint32_t, 2))(0x1A36B07DL, 0x78AC860DL), 0x78AC860DL), 0x78AC860DL, 0x1A36B07DL, 0x78AC860DL, (VECTOR(uint32_t, 2))(0x1A36B07DL, 0x78AC860DL), (VECTOR(uint32_t, 2))(0x1A36B07DL, 0x78AC860DL), 0x1A36B07DL, 0x78AC860DL, 0x1A36B07DL, 0x78AC860DL), // p_1353->g_1308
        (VECTOR(uint32_t, 2))(0UL, 0xE7E8C8B0L), // p_1353->g_1309
        (VECTOR(int32_t, 8))(0x58C82A98L, (VECTOR(int32_t, 4))(0x58C82A98L, (VECTOR(int32_t, 2))(0x58C82A98L, 7L), 7L), 7L, 0x58C82A98L, 7L), // p_1353->g_1317
        (VECTOR(int32_t, 2))(0x08D4F442L, 0x0D96E011L), // p_1353->g_1327
        0xD6F5D18AL, // p_1353->g_1349
        0, // p_1353->v_collective
        sequence_input[get_global_id(0)], // p_1353->global_0_offset
        sequence_input[get_global_id(1)], // p_1353->global_1_offset
        sequence_input[get_global_id(2)], // p_1353->global_2_offset
        sequence_input[get_local_id(0)], // p_1353->local_0_offset
        sequence_input[get_local_id(1)], // p_1353->local_1_offset
        sequence_input[get_local_id(2)], // p_1353->local_2_offset
        sequence_input[get_group_id(0)], // p_1353->group_0_offset
        sequence_input[get_group_id(1)], // p_1353->group_1_offset
        sequence_input[get_group_id(2)], // p_1353->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 35)), permutations[0][get_linear_local_id()])), // p_1353->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1354 = c_1355;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1353);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1353->g_2, "p_1353->g_2", print_hash_value);
    transparent_crc(p_1353->g_3, "p_1353->g_3", print_hash_value);
    transparent_crc(p_1353->g_9, "p_1353->g_9", print_hash_value);
    transparent_crc(p_1353->g_25.x, "p_1353->g_25.x", print_hash_value);
    transparent_crc(p_1353->g_25.y, "p_1353->g_25.y", print_hash_value);
    transparent_crc(p_1353->g_25.z, "p_1353->g_25.z", print_hash_value);
    transparent_crc(p_1353->g_25.w, "p_1353->g_25.w", print_hash_value);
    transparent_crc(p_1353->g_34, "p_1353->g_34", print_hash_value);
    transparent_crc(p_1353->g_40.x, "p_1353->g_40.x", print_hash_value);
    transparent_crc(p_1353->g_40.y, "p_1353->g_40.y", print_hash_value);
    transparent_crc(p_1353->g_80.s0, "p_1353->g_80.s0", print_hash_value);
    transparent_crc(p_1353->g_80.s1, "p_1353->g_80.s1", print_hash_value);
    transparent_crc(p_1353->g_80.s2, "p_1353->g_80.s2", print_hash_value);
    transparent_crc(p_1353->g_80.s3, "p_1353->g_80.s3", print_hash_value);
    transparent_crc(p_1353->g_80.s4, "p_1353->g_80.s4", print_hash_value);
    transparent_crc(p_1353->g_80.s5, "p_1353->g_80.s5", print_hash_value);
    transparent_crc(p_1353->g_80.s6, "p_1353->g_80.s6", print_hash_value);
    transparent_crc(p_1353->g_80.s7, "p_1353->g_80.s7", print_hash_value);
    transparent_crc(p_1353->g_82, "p_1353->g_82", print_hash_value);
    transparent_crc(p_1353->g_84, "p_1353->g_84", print_hash_value);
    transparent_crc(p_1353->g_86, "p_1353->g_86", print_hash_value);
    transparent_crc(p_1353->g_91, "p_1353->g_91", print_hash_value);
    transparent_crc(p_1353->g_104.x, "p_1353->g_104.x", print_hash_value);
    transparent_crc(p_1353->g_104.y, "p_1353->g_104.y", print_hash_value);
    transparent_crc(p_1353->g_109.x, "p_1353->g_109.x", print_hash_value);
    transparent_crc(p_1353->g_109.y, "p_1353->g_109.y", print_hash_value);
    transparent_crc(p_1353->g_109.z, "p_1353->g_109.z", print_hash_value);
    transparent_crc(p_1353->g_109.w, "p_1353->g_109.w", print_hash_value);
    transparent_crc(p_1353->g_134.s0, "p_1353->g_134.s0", print_hash_value);
    transparent_crc(p_1353->g_134.s1, "p_1353->g_134.s1", print_hash_value);
    transparent_crc(p_1353->g_134.s2, "p_1353->g_134.s2", print_hash_value);
    transparent_crc(p_1353->g_134.s3, "p_1353->g_134.s3", print_hash_value);
    transparent_crc(p_1353->g_134.s4, "p_1353->g_134.s4", print_hash_value);
    transparent_crc(p_1353->g_134.s5, "p_1353->g_134.s5", print_hash_value);
    transparent_crc(p_1353->g_134.s6, "p_1353->g_134.s6", print_hash_value);
    transparent_crc(p_1353->g_134.s7, "p_1353->g_134.s7", print_hash_value);
    transparent_crc(p_1353->g_134.s8, "p_1353->g_134.s8", print_hash_value);
    transparent_crc(p_1353->g_134.s9, "p_1353->g_134.s9", print_hash_value);
    transparent_crc(p_1353->g_134.sa, "p_1353->g_134.sa", print_hash_value);
    transparent_crc(p_1353->g_134.sb, "p_1353->g_134.sb", print_hash_value);
    transparent_crc(p_1353->g_134.sc, "p_1353->g_134.sc", print_hash_value);
    transparent_crc(p_1353->g_134.sd, "p_1353->g_134.sd", print_hash_value);
    transparent_crc(p_1353->g_134.se, "p_1353->g_134.se", print_hash_value);
    transparent_crc(p_1353->g_134.sf, "p_1353->g_134.sf", print_hash_value);
    transparent_crc(p_1353->g_144, "p_1353->g_144", print_hash_value);
    transparent_crc(p_1353->g_164.s0, "p_1353->g_164.s0", print_hash_value);
    transparent_crc(p_1353->g_164.s1, "p_1353->g_164.s1", print_hash_value);
    transparent_crc(p_1353->g_164.s2, "p_1353->g_164.s2", print_hash_value);
    transparent_crc(p_1353->g_164.s3, "p_1353->g_164.s3", print_hash_value);
    transparent_crc(p_1353->g_164.s4, "p_1353->g_164.s4", print_hash_value);
    transparent_crc(p_1353->g_164.s5, "p_1353->g_164.s5", print_hash_value);
    transparent_crc(p_1353->g_164.s6, "p_1353->g_164.s6", print_hash_value);
    transparent_crc(p_1353->g_164.s7, "p_1353->g_164.s7", print_hash_value);
    transparent_crc(p_1353->g_164.s8, "p_1353->g_164.s8", print_hash_value);
    transparent_crc(p_1353->g_164.s9, "p_1353->g_164.s9", print_hash_value);
    transparent_crc(p_1353->g_164.sa, "p_1353->g_164.sa", print_hash_value);
    transparent_crc(p_1353->g_164.sb, "p_1353->g_164.sb", print_hash_value);
    transparent_crc(p_1353->g_164.sc, "p_1353->g_164.sc", print_hash_value);
    transparent_crc(p_1353->g_164.sd, "p_1353->g_164.sd", print_hash_value);
    transparent_crc(p_1353->g_164.se, "p_1353->g_164.se", print_hash_value);
    transparent_crc(p_1353->g_164.sf, "p_1353->g_164.sf", print_hash_value);
    transparent_crc(p_1353->g_167.s0, "p_1353->g_167.s0", print_hash_value);
    transparent_crc(p_1353->g_167.s1, "p_1353->g_167.s1", print_hash_value);
    transparent_crc(p_1353->g_167.s2, "p_1353->g_167.s2", print_hash_value);
    transparent_crc(p_1353->g_167.s3, "p_1353->g_167.s3", print_hash_value);
    transparent_crc(p_1353->g_167.s4, "p_1353->g_167.s4", print_hash_value);
    transparent_crc(p_1353->g_167.s5, "p_1353->g_167.s5", print_hash_value);
    transparent_crc(p_1353->g_167.s6, "p_1353->g_167.s6", print_hash_value);
    transparent_crc(p_1353->g_167.s7, "p_1353->g_167.s7", print_hash_value);
    transparent_crc(p_1353->g_170.s0, "p_1353->g_170.s0", print_hash_value);
    transparent_crc(p_1353->g_170.s1, "p_1353->g_170.s1", print_hash_value);
    transparent_crc(p_1353->g_170.s2, "p_1353->g_170.s2", print_hash_value);
    transparent_crc(p_1353->g_170.s3, "p_1353->g_170.s3", print_hash_value);
    transparent_crc(p_1353->g_170.s4, "p_1353->g_170.s4", print_hash_value);
    transparent_crc(p_1353->g_170.s5, "p_1353->g_170.s5", print_hash_value);
    transparent_crc(p_1353->g_170.s6, "p_1353->g_170.s6", print_hash_value);
    transparent_crc(p_1353->g_170.s7, "p_1353->g_170.s7", print_hash_value);
    transparent_crc(p_1353->g_170.s8, "p_1353->g_170.s8", print_hash_value);
    transparent_crc(p_1353->g_170.s9, "p_1353->g_170.s9", print_hash_value);
    transparent_crc(p_1353->g_170.sa, "p_1353->g_170.sa", print_hash_value);
    transparent_crc(p_1353->g_170.sb, "p_1353->g_170.sb", print_hash_value);
    transparent_crc(p_1353->g_170.sc, "p_1353->g_170.sc", print_hash_value);
    transparent_crc(p_1353->g_170.sd, "p_1353->g_170.sd", print_hash_value);
    transparent_crc(p_1353->g_170.se, "p_1353->g_170.se", print_hash_value);
    transparent_crc(p_1353->g_170.sf, "p_1353->g_170.sf", print_hash_value);
    transparent_crc(p_1353->g_193, "p_1353->g_193", print_hash_value);
    transparent_crc(p_1353->g_219.s0, "p_1353->g_219.s0", print_hash_value);
    transparent_crc(p_1353->g_219.s1, "p_1353->g_219.s1", print_hash_value);
    transparent_crc(p_1353->g_219.s2, "p_1353->g_219.s2", print_hash_value);
    transparent_crc(p_1353->g_219.s3, "p_1353->g_219.s3", print_hash_value);
    transparent_crc(p_1353->g_219.s4, "p_1353->g_219.s4", print_hash_value);
    transparent_crc(p_1353->g_219.s5, "p_1353->g_219.s5", print_hash_value);
    transparent_crc(p_1353->g_219.s6, "p_1353->g_219.s6", print_hash_value);
    transparent_crc(p_1353->g_219.s7, "p_1353->g_219.s7", print_hash_value);
    transparent_crc(p_1353->g_219.s8, "p_1353->g_219.s8", print_hash_value);
    transparent_crc(p_1353->g_219.s9, "p_1353->g_219.s9", print_hash_value);
    transparent_crc(p_1353->g_219.sa, "p_1353->g_219.sa", print_hash_value);
    transparent_crc(p_1353->g_219.sb, "p_1353->g_219.sb", print_hash_value);
    transparent_crc(p_1353->g_219.sc, "p_1353->g_219.sc", print_hash_value);
    transparent_crc(p_1353->g_219.sd, "p_1353->g_219.sd", print_hash_value);
    transparent_crc(p_1353->g_219.se, "p_1353->g_219.se", print_hash_value);
    transparent_crc(p_1353->g_219.sf, "p_1353->g_219.sf", print_hash_value);
    transparent_crc(p_1353->g_220.s0, "p_1353->g_220.s0", print_hash_value);
    transparent_crc(p_1353->g_220.s1, "p_1353->g_220.s1", print_hash_value);
    transparent_crc(p_1353->g_220.s2, "p_1353->g_220.s2", print_hash_value);
    transparent_crc(p_1353->g_220.s3, "p_1353->g_220.s3", print_hash_value);
    transparent_crc(p_1353->g_220.s4, "p_1353->g_220.s4", print_hash_value);
    transparent_crc(p_1353->g_220.s5, "p_1353->g_220.s5", print_hash_value);
    transparent_crc(p_1353->g_220.s6, "p_1353->g_220.s6", print_hash_value);
    transparent_crc(p_1353->g_220.s7, "p_1353->g_220.s7", print_hash_value);
    transparent_crc(p_1353->g_220.s8, "p_1353->g_220.s8", print_hash_value);
    transparent_crc(p_1353->g_220.s9, "p_1353->g_220.s9", print_hash_value);
    transparent_crc(p_1353->g_220.sa, "p_1353->g_220.sa", print_hash_value);
    transparent_crc(p_1353->g_220.sb, "p_1353->g_220.sb", print_hash_value);
    transparent_crc(p_1353->g_220.sc, "p_1353->g_220.sc", print_hash_value);
    transparent_crc(p_1353->g_220.sd, "p_1353->g_220.sd", print_hash_value);
    transparent_crc(p_1353->g_220.se, "p_1353->g_220.se", print_hash_value);
    transparent_crc(p_1353->g_220.sf, "p_1353->g_220.sf", print_hash_value);
    transparent_crc(p_1353->g_242.s0, "p_1353->g_242.s0", print_hash_value);
    transparent_crc(p_1353->g_242.s1, "p_1353->g_242.s1", print_hash_value);
    transparent_crc(p_1353->g_242.s2, "p_1353->g_242.s2", print_hash_value);
    transparent_crc(p_1353->g_242.s3, "p_1353->g_242.s3", print_hash_value);
    transparent_crc(p_1353->g_242.s4, "p_1353->g_242.s4", print_hash_value);
    transparent_crc(p_1353->g_242.s5, "p_1353->g_242.s5", print_hash_value);
    transparent_crc(p_1353->g_242.s6, "p_1353->g_242.s6", print_hash_value);
    transparent_crc(p_1353->g_242.s7, "p_1353->g_242.s7", print_hash_value);
    transparent_crc(p_1353->g_242.s8, "p_1353->g_242.s8", print_hash_value);
    transparent_crc(p_1353->g_242.s9, "p_1353->g_242.s9", print_hash_value);
    transparent_crc(p_1353->g_242.sa, "p_1353->g_242.sa", print_hash_value);
    transparent_crc(p_1353->g_242.sb, "p_1353->g_242.sb", print_hash_value);
    transparent_crc(p_1353->g_242.sc, "p_1353->g_242.sc", print_hash_value);
    transparent_crc(p_1353->g_242.sd, "p_1353->g_242.sd", print_hash_value);
    transparent_crc(p_1353->g_242.se, "p_1353->g_242.se", print_hash_value);
    transparent_crc(p_1353->g_242.sf, "p_1353->g_242.sf", print_hash_value);
    transparent_crc(p_1353->g_267, "p_1353->g_267", print_hash_value);
    transparent_crc(p_1353->g_288.x, "p_1353->g_288.x", print_hash_value);
    transparent_crc(p_1353->g_288.y, "p_1353->g_288.y", print_hash_value);
    transparent_crc(p_1353->g_288.z, "p_1353->g_288.z", print_hash_value);
    transparent_crc(p_1353->g_288.w, "p_1353->g_288.w", print_hash_value);
    transparent_crc(p_1353->g_290.x, "p_1353->g_290.x", print_hash_value);
    transparent_crc(p_1353->g_290.y, "p_1353->g_290.y", print_hash_value);
    transparent_crc(p_1353->g_290.z, "p_1353->g_290.z", print_hash_value);
    transparent_crc(p_1353->g_290.w, "p_1353->g_290.w", print_hash_value);
    transparent_crc(p_1353->g_291.x, "p_1353->g_291.x", print_hash_value);
    transparent_crc(p_1353->g_291.y, "p_1353->g_291.y", print_hash_value);
    transparent_crc(p_1353->g_291.z, "p_1353->g_291.z", print_hash_value);
    transparent_crc(p_1353->g_291.w, "p_1353->g_291.w", print_hash_value);
    transparent_crc(p_1353->g_301.x, "p_1353->g_301.x", print_hash_value);
    transparent_crc(p_1353->g_301.y, "p_1353->g_301.y", print_hash_value);
    transparent_crc(p_1353->g_302, "p_1353->g_302", print_hash_value);
    transparent_crc(p_1353->g_303.x, "p_1353->g_303.x", print_hash_value);
    transparent_crc(p_1353->g_303.y, "p_1353->g_303.y", print_hash_value);
    transparent_crc(p_1353->g_303.z, "p_1353->g_303.z", print_hash_value);
    transparent_crc(p_1353->g_303.w, "p_1353->g_303.w", print_hash_value);
    transparent_crc(p_1353->g_327.s0, "p_1353->g_327.s0", print_hash_value);
    transparent_crc(p_1353->g_327.s1, "p_1353->g_327.s1", print_hash_value);
    transparent_crc(p_1353->g_327.s2, "p_1353->g_327.s2", print_hash_value);
    transparent_crc(p_1353->g_327.s3, "p_1353->g_327.s3", print_hash_value);
    transparent_crc(p_1353->g_327.s4, "p_1353->g_327.s4", print_hash_value);
    transparent_crc(p_1353->g_327.s5, "p_1353->g_327.s5", print_hash_value);
    transparent_crc(p_1353->g_327.s6, "p_1353->g_327.s6", print_hash_value);
    transparent_crc(p_1353->g_327.s7, "p_1353->g_327.s7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1353->g_333[i][j][k], "p_1353->g_333[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1353->g_335, "p_1353->g_335", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1353->g_357[i], "p_1353->g_357[i]", print_hash_value);

    }
    transparent_crc(p_1353->g_369.x, "p_1353->g_369.x", print_hash_value);
    transparent_crc(p_1353->g_369.y, "p_1353->g_369.y", print_hash_value);
    transparent_crc(p_1353->g_369.z, "p_1353->g_369.z", print_hash_value);
    transparent_crc(p_1353->g_369.w, "p_1353->g_369.w", print_hash_value);
    transparent_crc(p_1353->g_377.x, "p_1353->g_377.x", print_hash_value);
    transparent_crc(p_1353->g_377.y, "p_1353->g_377.y", print_hash_value);
    transparent_crc(p_1353->g_377.z, "p_1353->g_377.z", print_hash_value);
    transparent_crc(p_1353->g_377.w, "p_1353->g_377.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1353->g_421[i][j], "p_1353->g_421[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1353->g_440.s0, "p_1353->g_440.s0", print_hash_value);
    transparent_crc(p_1353->g_440.s1, "p_1353->g_440.s1", print_hash_value);
    transparent_crc(p_1353->g_440.s2, "p_1353->g_440.s2", print_hash_value);
    transparent_crc(p_1353->g_440.s3, "p_1353->g_440.s3", print_hash_value);
    transparent_crc(p_1353->g_440.s4, "p_1353->g_440.s4", print_hash_value);
    transparent_crc(p_1353->g_440.s5, "p_1353->g_440.s5", print_hash_value);
    transparent_crc(p_1353->g_440.s6, "p_1353->g_440.s6", print_hash_value);
    transparent_crc(p_1353->g_440.s7, "p_1353->g_440.s7", print_hash_value);
    transparent_crc(p_1353->g_469.x, "p_1353->g_469.x", print_hash_value);
    transparent_crc(p_1353->g_469.y, "p_1353->g_469.y", print_hash_value);
    transparent_crc(p_1353->g_562.x, "p_1353->g_562.x", print_hash_value);
    transparent_crc(p_1353->g_562.y, "p_1353->g_562.y", print_hash_value);
    transparent_crc(p_1353->g_571.x, "p_1353->g_571.x", print_hash_value);
    transparent_crc(p_1353->g_571.y, "p_1353->g_571.y", print_hash_value);
    transparent_crc(p_1353->g_571.z, "p_1353->g_571.z", print_hash_value);
    transparent_crc(p_1353->g_571.w, "p_1353->g_571.w", print_hash_value);
    transparent_crc(p_1353->g_643.s0, "p_1353->g_643.s0", print_hash_value);
    transparent_crc(p_1353->g_643.s1, "p_1353->g_643.s1", print_hash_value);
    transparent_crc(p_1353->g_643.s2, "p_1353->g_643.s2", print_hash_value);
    transparent_crc(p_1353->g_643.s3, "p_1353->g_643.s3", print_hash_value);
    transparent_crc(p_1353->g_643.s4, "p_1353->g_643.s4", print_hash_value);
    transparent_crc(p_1353->g_643.s5, "p_1353->g_643.s5", print_hash_value);
    transparent_crc(p_1353->g_643.s6, "p_1353->g_643.s6", print_hash_value);
    transparent_crc(p_1353->g_643.s7, "p_1353->g_643.s7", print_hash_value);
    transparent_crc(p_1353->g_646.s0, "p_1353->g_646.s0", print_hash_value);
    transparent_crc(p_1353->g_646.s1, "p_1353->g_646.s1", print_hash_value);
    transparent_crc(p_1353->g_646.s2, "p_1353->g_646.s2", print_hash_value);
    transparent_crc(p_1353->g_646.s3, "p_1353->g_646.s3", print_hash_value);
    transparent_crc(p_1353->g_646.s4, "p_1353->g_646.s4", print_hash_value);
    transparent_crc(p_1353->g_646.s5, "p_1353->g_646.s5", print_hash_value);
    transparent_crc(p_1353->g_646.s6, "p_1353->g_646.s6", print_hash_value);
    transparent_crc(p_1353->g_646.s7, "p_1353->g_646.s7", print_hash_value);
    transparent_crc(p_1353->g_646.s8, "p_1353->g_646.s8", print_hash_value);
    transparent_crc(p_1353->g_646.s9, "p_1353->g_646.s9", print_hash_value);
    transparent_crc(p_1353->g_646.sa, "p_1353->g_646.sa", print_hash_value);
    transparent_crc(p_1353->g_646.sb, "p_1353->g_646.sb", print_hash_value);
    transparent_crc(p_1353->g_646.sc, "p_1353->g_646.sc", print_hash_value);
    transparent_crc(p_1353->g_646.sd, "p_1353->g_646.sd", print_hash_value);
    transparent_crc(p_1353->g_646.se, "p_1353->g_646.se", print_hash_value);
    transparent_crc(p_1353->g_646.sf, "p_1353->g_646.sf", print_hash_value);
    transparent_crc(p_1353->g_673, "p_1353->g_673", print_hash_value);
    transparent_crc(p_1353->g_712.x, "p_1353->g_712.x", print_hash_value);
    transparent_crc(p_1353->g_712.y, "p_1353->g_712.y", print_hash_value);
    transparent_crc(p_1353->g_712.z, "p_1353->g_712.z", print_hash_value);
    transparent_crc(p_1353->g_712.w, "p_1353->g_712.w", print_hash_value);
    transparent_crc(p_1353->g_720.s0, "p_1353->g_720.s0", print_hash_value);
    transparent_crc(p_1353->g_720.s1, "p_1353->g_720.s1", print_hash_value);
    transparent_crc(p_1353->g_720.s2, "p_1353->g_720.s2", print_hash_value);
    transparent_crc(p_1353->g_720.s3, "p_1353->g_720.s3", print_hash_value);
    transparent_crc(p_1353->g_720.s4, "p_1353->g_720.s4", print_hash_value);
    transparent_crc(p_1353->g_720.s5, "p_1353->g_720.s5", print_hash_value);
    transparent_crc(p_1353->g_720.s6, "p_1353->g_720.s6", print_hash_value);
    transparent_crc(p_1353->g_720.s7, "p_1353->g_720.s7", print_hash_value);
    transparent_crc(p_1353->g_721.s0, "p_1353->g_721.s0", print_hash_value);
    transparent_crc(p_1353->g_721.s1, "p_1353->g_721.s1", print_hash_value);
    transparent_crc(p_1353->g_721.s2, "p_1353->g_721.s2", print_hash_value);
    transparent_crc(p_1353->g_721.s3, "p_1353->g_721.s3", print_hash_value);
    transparent_crc(p_1353->g_721.s4, "p_1353->g_721.s4", print_hash_value);
    transparent_crc(p_1353->g_721.s5, "p_1353->g_721.s5", print_hash_value);
    transparent_crc(p_1353->g_721.s6, "p_1353->g_721.s6", print_hash_value);
    transparent_crc(p_1353->g_721.s7, "p_1353->g_721.s7", print_hash_value);
    transparent_crc(p_1353->g_721.s8, "p_1353->g_721.s8", print_hash_value);
    transparent_crc(p_1353->g_721.s9, "p_1353->g_721.s9", print_hash_value);
    transparent_crc(p_1353->g_721.sa, "p_1353->g_721.sa", print_hash_value);
    transparent_crc(p_1353->g_721.sb, "p_1353->g_721.sb", print_hash_value);
    transparent_crc(p_1353->g_721.sc, "p_1353->g_721.sc", print_hash_value);
    transparent_crc(p_1353->g_721.sd, "p_1353->g_721.sd", print_hash_value);
    transparent_crc(p_1353->g_721.se, "p_1353->g_721.se", print_hash_value);
    transparent_crc(p_1353->g_721.sf, "p_1353->g_721.sf", print_hash_value);
    transparent_crc(p_1353->g_724.x, "p_1353->g_724.x", print_hash_value);
    transparent_crc(p_1353->g_724.y, "p_1353->g_724.y", print_hash_value);
    transparent_crc(p_1353->g_760.s0, "p_1353->g_760.s0", print_hash_value);
    transparent_crc(p_1353->g_760.s1, "p_1353->g_760.s1", print_hash_value);
    transparent_crc(p_1353->g_760.s2, "p_1353->g_760.s2", print_hash_value);
    transparent_crc(p_1353->g_760.s3, "p_1353->g_760.s3", print_hash_value);
    transparent_crc(p_1353->g_760.s4, "p_1353->g_760.s4", print_hash_value);
    transparent_crc(p_1353->g_760.s5, "p_1353->g_760.s5", print_hash_value);
    transparent_crc(p_1353->g_760.s6, "p_1353->g_760.s6", print_hash_value);
    transparent_crc(p_1353->g_760.s7, "p_1353->g_760.s7", print_hash_value);
    transparent_crc(p_1353->g_820, "p_1353->g_820", print_hash_value);
    transparent_crc(p_1353->g_987.x, "p_1353->g_987.x", print_hash_value);
    transparent_crc(p_1353->g_987.y, "p_1353->g_987.y", print_hash_value);
    transparent_crc(p_1353->g_1023.s0, "p_1353->g_1023.s0", print_hash_value);
    transparent_crc(p_1353->g_1023.s1, "p_1353->g_1023.s1", print_hash_value);
    transparent_crc(p_1353->g_1023.s2, "p_1353->g_1023.s2", print_hash_value);
    transparent_crc(p_1353->g_1023.s3, "p_1353->g_1023.s3", print_hash_value);
    transparent_crc(p_1353->g_1023.s4, "p_1353->g_1023.s4", print_hash_value);
    transparent_crc(p_1353->g_1023.s5, "p_1353->g_1023.s5", print_hash_value);
    transparent_crc(p_1353->g_1023.s6, "p_1353->g_1023.s6", print_hash_value);
    transparent_crc(p_1353->g_1023.s7, "p_1353->g_1023.s7", print_hash_value);
    transparent_crc(p_1353->g_1029, "p_1353->g_1029", print_hash_value);
    transparent_crc(p_1353->g_1090.x, "p_1353->g_1090.x", print_hash_value);
    transparent_crc(p_1353->g_1090.y, "p_1353->g_1090.y", print_hash_value);
    transparent_crc(p_1353->g_1090.z, "p_1353->g_1090.z", print_hash_value);
    transparent_crc(p_1353->g_1090.w, "p_1353->g_1090.w", print_hash_value);
    transparent_crc(p_1353->g_1117.x, "p_1353->g_1117.x", print_hash_value);
    transparent_crc(p_1353->g_1117.y, "p_1353->g_1117.y", print_hash_value);
    transparent_crc(p_1353->g_1124.s0, "p_1353->g_1124.s0", print_hash_value);
    transparent_crc(p_1353->g_1124.s1, "p_1353->g_1124.s1", print_hash_value);
    transparent_crc(p_1353->g_1124.s2, "p_1353->g_1124.s2", print_hash_value);
    transparent_crc(p_1353->g_1124.s3, "p_1353->g_1124.s3", print_hash_value);
    transparent_crc(p_1353->g_1124.s4, "p_1353->g_1124.s4", print_hash_value);
    transparent_crc(p_1353->g_1124.s5, "p_1353->g_1124.s5", print_hash_value);
    transparent_crc(p_1353->g_1124.s6, "p_1353->g_1124.s6", print_hash_value);
    transparent_crc(p_1353->g_1124.s7, "p_1353->g_1124.s7", print_hash_value);
    transparent_crc(p_1353->g_1124.s8, "p_1353->g_1124.s8", print_hash_value);
    transparent_crc(p_1353->g_1124.s9, "p_1353->g_1124.s9", print_hash_value);
    transparent_crc(p_1353->g_1124.sa, "p_1353->g_1124.sa", print_hash_value);
    transparent_crc(p_1353->g_1124.sb, "p_1353->g_1124.sb", print_hash_value);
    transparent_crc(p_1353->g_1124.sc, "p_1353->g_1124.sc", print_hash_value);
    transparent_crc(p_1353->g_1124.sd, "p_1353->g_1124.sd", print_hash_value);
    transparent_crc(p_1353->g_1124.se, "p_1353->g_1124.se", print_hash_value);
    transparent_crc(p_1353->g_1124.sf, "p_1353->g_1124.sf", print_hash_value);
    transparent_crc(p_1353->g_1129.x, "p_1353->g_1129.x", print_hash_value);
    transparent_crc(p_1353->g_1129.y, "p_1353->g_1129.y", print_hash_value);
    transparent_crc(p_1353->g_1154, "p_1353->g_1154", print_hash_value);
    transparent_crc(p_1353->g_1161.x, "p_1353->g_1161.x", print_hash_value);
    transparent_crc(p_1353->g_1161.y, "p_1353->g_1161.y", print_hash_value);
    transparent_crc(p_1353->g_1161.z, "p_1353->g_1161.z", print_hash_value);
    transparent_crc(p_1353->g_1161.w, "p_1353->g_1161.w", print_hash_value);
    transparent_crc(p_1353->g_1189.s0, "p_1353->g_1189.s0", print_hash_value);
    transparent_crc(p_1353->g_1189.s1, "p_1353->g_1189.s1", print_hash_value);
    transparent_crc(p_1353->g_1189.s2, "p_1353->g_1189.s2", print_hash_value);
    transparent_crc(p_1353->g_1189.s3, "p_1353->g_1189.s3", print_hash_value);
    transparent_crc(p_1353->g_1189.s4, "p_1353->g_1189.s4", print_hash_value);
    transparent_crc(p_1353->g_1189.s5, "p_1353->g_1189.s5", print_hash_value);
    transparent_crc(p_1353->g_1189.s6, "p_1353->g_1189.s6", print_hash_value);
    transparent_crc(p_1353->g_1189.s7, "p_1353->g_1189.s7", print_hash_value);
    transparent_crc(p_1353->g_1190.s0, "p_1353->g_1190.s0", print_hash_value);
    transparent_crc(p_1353->g_1190.s1, "p_1353->g_1190.s1", print_hash_value);
    transparent_crc(p_1353->g_1190.s2, "p_1353->g_1190.s2", print_hash_value);
    transparent_crc(p_1353->g_1190.s3, "p_1353->g_1190.s3", print_hash_value);
    transparent_crc(p_1353->g_1190.s4, "p_1353->g_1190.s4", print_hash_value);
    transparent_crc(p_1353->g_1190.s5, "p_1353->g_1190.s5", print_hash_value);
    transparent_crc(p_1353->g_1190.s6, "p_1353->g_1190.s6", print_hash_value);
    transparent_crc(p_1353->g_1190.s7, "p_1353->g_1190.s7", print_hash_value);
    transparent_crc(p_1353->g_1190.s8, "p_1353->g_1190.s8", print_hash_value);
    transparent_crc(p_1353->g_1190.s9, "p_1353->g_1190.s9", print_hash_value);
    transparent_crc(p_1353->g_1190.sa, "p_1353->g_1190.sa", print_hash_value);
    transparent_crc(p_1353->g_1190.sb, "p_1353->g_1190.sb", print_hash_value);
    transparent_crc(p_1353->g_1190.sc, "p_1353->g_1190.sc", print_hash_value);
    transparent_crc(p_1353->g_1190.sd, "p_1353->g_1190.sd", print_hash_value);
    transparent_crc(p_1353->g_1190.se, "p_1353->g_1190.se", print_hash_value);
    transparent_crc(p_1353->g_1190.sf, "p_1353->g_1190.sf", print_hash_value);
    transparent_crc(p_1353->g_1193.s0, "p_1353->g_1193.s0", print_hash_value);
    transparent_crc(p_1353->g_1193.s1, "p_1353->g_1193.s1", print_hash_value);
    transparent_crc(p_1353->g_1193.s2, "p_1353->g_1193.s2", print_hash_value);
    transparent_crc(p_1353->g_1193.s3, "p_1353->g_1193.s3", print_hash_value);
    transparent_crc(p_1353->g_1193.s4, "p_1353->g_1193.s4", print_hash_value);
    transparent_crc(p_1353->g_1193.s5, "p_1353->g_1193.s5", print_hash_value);
    transparent_crc(p_1353->g_1193.s6, "p_1353->g_1193.s6", print_hash_value);
    transparent_crc(p_1353->g_1193.s7, "p_1353->g_1193.s7", print_hash_value);
    transparent_crc(p_1353->g_1193.s8, "p_1353->g_1193.s8", print_hash_value);
    transparent_crc(p_1353->g_1193.s9, "p_1353->g_1193.s9", print_hash_value);
    transparent_crc(p_1353->g_1193.sa, "p_1353->g_1193.sa", print_hash_value);
    transparent_crc(p_1353->g_1193.sb, "p_1353->g_1193.sb", print_hash_value);
    transparent_crc(p_1353->g_1193.sc, "p_1353->g_1193.sc", print_hash_value);
    transparent_crc(p_1353->g_1193.sd, "p_1353->g_1193.sd", print_hash_value);
    transparent_crc(p_1353->g_1193.se, "p_1353->g_1193.se", print_hash_value);
    transparent_crc(p_1353->g_1193.sf, "p_1353->g_1193.sf", print_hash_value);
    transparent_crc(p_1353->g_1211.s0, "p_1353->g_1211.s0", print_hash_value);
    transparent_crc(p_1353->g_1211.s1, "p_1353->g_1211.s1", print_hash_value);
    transparent_crc(p_1353->g_1211.s2, "p_1353->g_1211.s2", print_hash_value);
    transparent_crc(p_1353->g_1211.s3, "p_1353->g_1211.s3", print_hash_value);
    transparent_crc(p_1353->g_1211.s4, "p_1353->g_1211.s4", print_hash_value);
    transparent_crc(p_1353->g_1211.s5, "p_1353->g_1211.s5", print_hash_value);
    transparent_crc(p_1353->g_1211.s6, "p_1353->g_1211.s6", print_hash_value);
    transparent_crc(p_1353->g_1211.s7, "p_1353->g_1211.s7", print_hash_value);
    transparent_crc(p_1353->g_1212.s0, "p_1353->g_1212.s0", print_hash_value);
    transparent_crc(p_1353->g_1212.s1, "p_1353->g_1212.s1", print_hash_value);
    transparent_crc(p_1353->g_1212.s2, "p_1353->g_1212.s2", print_hash_value);
    transparent_crc(p_1353->g_1212.s3, "p_1353->g_1212.s3", print_hash_value);
    transparent_crc(p_1353->g_1212.s4, "p_1353->g_1212.s4", print_hash_value);
    transparent_crc(p_1353->g_1212.s5, "p_1353->g_1212.s5", print_hash_value);
    transparent_crc(p_1353->g_1212.s6, "p_1353->g_1212.s6", print_hash_value);
    transparent_crc(p_1353->g_1212.s7, "p_1353->g_1212.s7", print_hash_value);
    transparent_crc(p_1353->g_1212.s8, "p_1353->g_1212.s8", print_hash_value);
    transparent_crc(p_1353->g_1212.s9, "p_1353->g_1212.s9", print_hash_value);
    transparent_crc(p_1353->g_1212.sa, "p_1353->g_1212.sa", print_hash_value);
    transparent_crc(p_1353->g_1212.sb, "p_1353->g_1212.sb", print_hash_value);
    transparent_crc(p_1353->g_1212.sc, "p_1353->g_1212.sc", print_hash_value);
    transparent_crc(p_1353->g_1212.sd, "p_1353->g_1212.sd", print_hash_value);
    transparent_crc(p_1353->g_1212.se, "p_1353->g_1212.se", print_hash_value);
    transparent_crc(p_1353->g_1212.sf, "p_1353->g_1212.sf", print_hash_value);
    transparent_crc(p_1353->g_1213.x, "p_1353->g_1213.x", print_hash_value);
    transparent_crc(p_1353->g_1213.y, "p_1353->g_1213.y", print_hash_value);
    transparent_crc(p_1353->g_1270, "p_1353->g_1270", print_hash_value);
    transparent_crc(p_1353->g_1279.s0, "p_1353->g_1279.s0", print_hash_value);
    transparent_crc(p_1353->g_1279.s1, "p_1353->g_1279.s1", print_hash_value);
    transparent_crc(p_1353->g_1279.s2, "p_1353->g_1279.s2", print_hash_value);
    transparent_crc(p_1353->g_1279.s3, "p_1353->g_1279.s3", print_hash_value);
    transparent_crc(p_1353->g_1279.s4, "p_1353->g_1279.s4", print_hash_value);
    transparent_crc(p_1353->g_1279.s5, "p_1353->g_1279.s5", print_hash_value);
    transparent_crc(p_1353->g_1279.s6, "p_1353->g_1279.s6", print_hash_value);
    transparent_crc(p_1353->g_1279.s7, "p_1353->g_1279.s7", print_hash_value);
    transparent_crc(p_1353->g_1279.s8, "p_1353->g_1279.s8", print_hash_value);
    transparent_crc(p_1353->g_1279.s9, "p_1353->g_1279.s9", print_hash_value);
    transparent_crc(p_1353->g_1279.sa, "p_1353->g_1279.sa", print_hash_value);
    transparent_crc(p_1353->g_1279.sb, "p_1353->g_1279.sb", print_hash_value);
    transparent_crc(p_1353->g_1279.sc, "p_1353->g_1279.sc", print_hash_value);
    transparent_crc(p_1353->g_1279.sd, "p_1353->g_1279.sd", print_hash_value);
    transparent_crc(p_1353->g_1279.se, "p_1353->g_1279.se", print_hash_value);
    transparent_crc(p_1353->g_1279.sf, "p_1353->g_1279.sf", print_hash_value);
    transparent_crc(p_1353->g_1308.s0, "p_1353->g_1308.s0", print_hash_value);
    transparent_crc(p_1353->g_1308.s1, "p_1353->g_1308.s1", print_hash_value);
    transparent_crc(p_1353->g_1308.s2, "p_1353->g_1308.s2", print_hash_value);
    transparent_crc(p_1353->g_1308.s3, "p_1353->g_1308.s3", print_hash_value);
    transparent_crc(p_1353->g_1308.s4, "p_1353->g_1308.s4", print_hash_value);
    transparent_crc(p_1353->g_1308.s5, "p_1353->g_1308.s5", print_hash_value);
    transparent_crc(p_1353->g_1308.s6, "p_1353->g_1308.s6", print_hash_value);
    transparent_crc(p_1353->g_1308.s7, "p_1353->g_1308.s7", print_hash_value);
    transparent_crc(p_1353->g_1308.s8, "p_1353->g_1308.s8", print_hash_value);
    transparent_crc(p_1353->g_1308.s9, "p_1353->g_1308.s9", print_hash_value);
    transparent_crc(p_1353->g_1308.sa, "p_1353->g_1308.sa", print_hash_value);
    transparent_crc(p_1353->g_1308.sb, "p_1353->g_1308.sb", print_hash_value);
    transparent_crc(p_1353->g_1308.sc, "p_1353->g_1308.sc", print_hash_value);
    transparent_crc(p_1353->g_1308.sd, "p_1353->g_1308.sd", print_hash_value);
    transparent_crc(p_1353->g_1308.se, "p_1353->g_1308.se", print_hash_value);
    transparent_crc(p_1353->g_1308.sf, "p_1353->g_1308.sf", print_hash_value);
    transparent_crc(p_1353->g_1309.x, "p_1353->g_1309.x", print_hash_value);
    transparent_crc(p_1353->g_1309.y, "p_1353->g_1309.y", print_hash_value);
    transparent_crc(p_1353->g_1317.s0, "p_1353->g_1317.s0", print_hash_value);
    transparent_crc(p_1353->g_1317.s1, "p_1353->g_1317.s1", print_hash_value);
    transparent_crc(p_1353->g_1317.s2, "p_1353->g_1317.s2", print_hash_value);
    transparent_crc(p_1353->g_1317.s3, "p_1353->g_1317.s3", print_hash_value);
    transparent_crc(p_1353->g_1317.s4, "p_1353->g_1317.s4", print_hash_value);
    transparent_crc(p_1353->g_1317.s5, "p_1353->g_1317.s5", print_hash_value);
    transparent_crc(p_1353->g_1317.s6, "p_1353->g_1317.s6", print_hash_value);
    transparent_crc(p_1353->g_1317.s7, "p_1353->g_1317.s7", print_hash_value);
    transparent_crc(p_1353->g_1327.x, "p_1353->g_1327.x", print_hash_value);
    transparent_crc(p_1353->g_1327.y, "p_1353->g_1327.y", print_hash_value);
    transparent_crc(p_1353->g_1349, "p_1353->g_1349", print_hash_value);
    transparent_crc(p_1353->v_collective, "p_1353->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 51; i++)
            transparent_crc(p_1353->g_special_values[i + 51 * get_linear_group_id()], "p_1353->g_special_values[i + 51 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 51; i++)
            transparent_crc(p_1353->l_special_values[i], "p_1353->l_special_values[i]", print_hash_value);
    transparent_crc(p_1353->l_comm_values[get_linear_local_id()], "p_1353->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1353->g_comm_values[get_linear_group_id() * 35 + get_linear_local_id()], "p_1353->g_comm_values[get_linear_group_id() * 35 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
