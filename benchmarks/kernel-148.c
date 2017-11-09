// --atomics 77 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 56,82,2 -l 1,82,2
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

__constant uint32_t permutations[10][164] = {
{10,100,24,116,72,136,67,11,101,135,52,66,103,123,34,81,82,99,107,49,117,37,13,21,42,114,7,128,126,54,134,163,157,155,60,55,76,51,124,17,63,57,97,14,70,53,145,62,90,144,83,96,141,28,151,50,162,121,125,45,85,161,94,69,38,154,98,74,0,156,4,33,112,9,109,111,22,127,25,137,113,64,16,73,58,118,87,3,75,6,92,143,8,148,41,30,12,108,149,47,78,150,79,88,68,104,122,158,115,93,5,106,71,77,29,80,139,133,140,147,46,110,20,39,146,61,31,142,153,56,95,23,40,19,1,27,86,36,84,89,44,26,105,160,43,119,35,138,131,132,18,32,15,129,59,2,65,102,152,91,159,130,48,120}, // permutation 0
{71,114,92,21,17,66,33,151,144,47,80,93,11,103,131,138,156,12,117,75,60,22,62,52,51,162,48,111,109,44,49,70,72,87,54,150,41,73,154,77,112,136,55,141,50,23,157,149,89,25,128,4,121,81,68,158,20,13,107,42,40,105,106,34,159,0,38,59,95,36,46,163,148,145,86,29,146,155,113,142,28,100,56,74,79,1,27,102,19,110,83,67,139,10,143,30,91,124,147,26,76,85,39,8,82,115,37,104,127,57,61,63,14,6,45,3,5,137,94,126,120,129,43,119,99,84,152,32,96,160,140,2,133,97,53,7,134,90,135,108,31,116,69,35,58,122,153,98,18,101,88,64,118,130,78,24,123,16,125,161,65,132,9,15}, // permutation 1
{46,19,40,38,87,67,21,4,110,51,1,108,39,77,95,33,26,96,91,65,0,127,119,102,118,17,149,9,113,61,88,59,11,101,68,126,92,78,58,52,6,66,131,43,3,129,158,97,50,103,76,86,27,34,121,29,10,12,62,125,162,99,130,115,120,137,134,15,23,85,153,32,145,155,42,93,83,90,64,35,133,122,84,24,160,105,141,73,57,109,25,94,124,53,135,139,138,63,55,60,49,112,152,123,142,136,31,117,163,8,37,98,116,157,82,28,144,161,128,69,54,22,154,30,47,156,111,104,48,2,20,72,74,79,89,13,44,81,159,41,100,36,107,70,150,16,18,7,5,75,143,14,132,106,146,71,80,45,56,148,114,151,147,140}, // permutation 2
{18,153,118,6,30,41,149,77,13,142,68,86,52,51,75,156,121,76,39,155,107,109,14,94,56,152,136,133,16,138,89,132,123,92,116,29,4,70,23,27,158,105,63,101,98,145,7,47,60,73,157,106,99,62,141,108,0,85,55,19,93,50,11,22,143,147,151,65,110,2,90,66,12,33,135,131,103,10,36,79,72,59,102,162,3,127,81,37,5,144,48,64,54,34,46,43,1,20,15,160,67,122,53,44,57,9,58,61,97,117,112,49,8,80,146,26,100,28,134,124,150,126,140,45,95,83,137,82,32,40,91,139,24,84,129,115,114,88,21,163,130,148,111,128,74,104,125,71,31,96,78,17,69,120,42,154,25,159,38,161,87,113,35,119}, // permutation 3
{158,124,24,88,141,51,15,87,36,123,72,35,25,27,76,30,55,70,6,111,54,43,159,52,67,31,104,162,78,132,154,135,44,7,13,151,22,133,130,90,60,94,39,108,134,45,146,110,10,16,95,85,92,152,120,105,113,138,114,155,18,81,34,148,79,91,160,125,68,3,40,46,102,98,71,65,93,109,41,12,163,103,136,48,153,50,26,28,107,84,4,118,137,5,121,2,131,53,143,128,127,32,74,49,144,75,20,150,64,23,66,19,117,86,9,83,21,147,122,57,11,149,8,126,129,97,38,145,140,99,37,101,29,47,1,0,63,73,161,82,33,100,89,80,115,77,62,59,142,42,119,56,58,69,14,96,17,116,139,61,156,106,112,157}, // permutation 4
{125,3,106,152,40,116,135,121,122,136,39,75,82,105,153,35,140,110,63,114,18,143,73,120,7,1,112,52,2,133,5,36,57,83,29,19,49,87,126,115,145,61,60,132,108,101,68,162,113,55,77,25,129,139,103,66,56,163,86,6,150,54,95,104,84,99,9,44,62,144,17,0,138,158,148,65,124,151,43,154,42,149,88,21,141,118,71,24,91,131,8,78,20,64,59,117,102,16,33,38,155,13,37,123,70,67,26,130,27,45,32,50,97,134,80,34,94,98,107,4,47,11,28,48,160,72,22,161,58,142,14,119,31,46,74,93,127,76,109,69,79,128,51,23,100,41,156,146,53,12,96,92,85,15,137,111,30,89,159,90,147,81,10,157}, // permutation 5
{66,120,79,149,41,156,89,111,8,154,65,162,1,159,122,92,11,131,142,19,113,129,29,26,125,67,124,10,14,38,51,160,152,39,32,52,33,56,4,138,116,128,151,100,132,157,153,117,139,64,2,59,97,57,91,78,107,119,68,0,40,49,121,114,87,31,3,69,15,95,104,85,47,106,70,46,13,134,143,88,102,61,42,155,103,73,37,141,34,54,147,82,80,115,146,44,86,22,7,158,58,28,84,43,135,81,118,50,136,30,137,145,35,45,126,27,105,25,127,77,130,163,60,133,93,161,36,72,17,150,5,99,48,62,23,98,21,101,20,6,74,75,140,63,112,110,24,71,9,83,144,55,109,12,108,90,96,94,53,16,76,18,148,123}, // permutation 6
{27,20,114,139,151,38,136,119,53,50,43,12,108,55,155,157,130,92,107,59,33,152,71,11,109,117,39,137,28,24,26,29,9,89,143,118,25,66,150,65,96,34,68,52,3,146,120,90,153,154,127,32,115,162,69,57,141,47,78,111,75,4,40,14,104,51,72,93,36,64,23,13,46,122,129,86,147,7,67,134,91,76,110,142,58,156,45,2,112,19,74,48,131,84,87,100,0,16,35,15,54,116,101,37,1,149,97,63,106,145,62,121,73,10,135,102,99,105,144,159,42,31,41,161,125,21,95,60,70,77,103,5,83,140,128,79,8,44,30,80,82,123,158,18,163,132,133,94,6,98,81,160,49,148,113,138,124,17,22,85,61,56,126,88}, // permutation 7
{63,113,112,125,124,149,10,26,42,56,103,47,37,16,158,9,5,30,8,19,55,46,36,69,57,98,154,79,15,105,120,108,161,60,159,39,31,43,29,41,77,134,54,152,115,51,74,145,24,117,81,64,150,76,132,136,0,44,146,162,38,99,91,82,2,129,90,139,127,95,17,75,156,143,18,135,106,68,84,107,114,32,25,71,148,126,141,109,163,89,104,97,144,121,1,83,94,35,11,147,48,72,131,23,52,66,12,88,137,62,138,151,13,153,85,140,142,28,27,118,101,160,123,21,130,86,70,34,50,20,119,78,96,40,61,73,45,67,128,92,58,4,80,111,53,100,110,3,49,133,33,116,22,102,155,6,14,122,157,93,87,7,59,65}, // permutation 8
{91,67,12,79,50,65,11,32,8,15,44,77,42,84,128,107,17,90,89,51,48,139,126,131,30,156,80,45,28,71,88,162,135,99,105,5,142,68,112,58,18,96,2,143,110,132,23,81,153,53,25,9,26,21,129,40,64,133,83,33,136,55,57,158,10,137,146,157,59,152,19,54,61,52,38,78,148,94,130,127,95,122,66,7,147,111,119,74,124,70,150,159,106,6,39,14,149,46,145,1,16,113,125,98,103,87,92,3,69,109,101,163,144,24,85,49,114,123,134,82,140,118,4,100,104,36,47,43,97,0,63,115,160,86,37,154,76,20,151,75,41,161,102,60,35,141,120,138,31,62,29,117,73,27,116,22,108,13,121,155,34,72,56,93} // permutation 9
};

// Seed: 4187354834

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_2;
    volatile VECTOR(uint64_t, 8) g_26;
    VECTOR(uint8_t, 4) g_33;
    int32_t g_47;
    int16_t g_48;
    int32_t g_49;
    int64_t g_50;
    int32_t g_51;
    int8_t g_52;
    uint64_t g_53;
    uint8_t g_57;
    volatile int32_t g_61;
    volatile int8_t g_62;
    volatile int32_t g_63;
    volatile VECTOR(int32_t, 8) g_64;
    volatile VECTOR(int16_t, 2) g_127;
    uint32_t g_143;
    uint32_t *g_151;
    int32_t g_154;
    int32_t *g_179;
    int32_t ** volatile g_180;
    VECTOR(uint16_t, 2) g_229;
    uint32_t g_260;
    uint8_t g_265;
    uint8_t *g_264;
    int16_t *g_270;
    int16_t **g_269[6];
    VECTOR(int16_t, 16) g_275;
    int8_t *g_295;
    volatile VECTOR(uint64_t, 16) g_306;
    volatile VECTOR(int16_t, 8) g_312;
    int32_t * volatile g_321;
    int32_t g_329;
    uint32_t g_330;
    int32_t **g_338[9][1];
    VECTOR(int32_t, 8) g_378;
    volatile VECTOR(uint16_t, 2) g_391;
    VECTOR(int16_t, 4) g_392;
    int32_t ***g_434[1];
    uint64_t g_452;
    VECTOR(int8_t, 4) g_464;
    uint32_t g_467[2];
    volatile int64_t g_470[8][9];
    volatile int64_t *g_469;
    volatile int64_t * volatile *g_468[6];
    volatile uint16_t ** volatile g_474;
    volatile uint16_t g_477;
    volatile uint16_t *g_476[3];
    volatile uint16_t **g_475;
    VECTOR(int8_t, 16) g_480;
    VECTOR(int64_t, 4) g_518;
    volatile VECTOR(int16_t, 4) g_548;
    volatile VECTOR(uint64_t, 8) g_604;
    VECTOR(uint8_t, 16) g_629;
    VECTOR(uint8_t, 2) g_630;
    VECTOR(uint16_t, 8) g_658;
    int16_t ***g_941;
    volatile uint64_t *g_963[6];
    volatile uint64_t ** volatile g_962;
    VECTOR(uint64_t, 4) g_966;
    int32_t * volatile g_982;
    VECTOR(int16_t, 8) g_1014;
    uint16_t * volatile g_1018;
    VECTOR(uint16_t, 4) g_1023;
    int64_t g_1050;
    VECTOR(int64_t, 8) g_1062;
    VECTOR(int64_t, 4) g_1173;
    VECTOR(int64_t, 2) g_1175;
    VECTOR(uint32_t, 2) g_1184;
    VECTOR(uint32_t, 2) g_1185;
    VECTOR(uint32_t, 4) g_1186;
    int32_t ** volatile g_1190;
    VECTOR(uint64_t, 16) g_1197;
    VECTOR(uint8_t, 4) g_1198;
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
int64_t  func_1(struct S0 * p_1203);
int32_t  func_5(uint32_t  p_6, int64_t  p_7, uint64_t  p_8, uint8_t  p_9, int8_t  p_10, struct S0 * p_1203);
uint32_t  func_18(uint32_t  p_19, int16_t  p_20, uint32_t  p_21, int32_t  p_22, int64_t  p_23, struct S0 * p_1203);
uint32_t  func_24(int32_t  p_25, struct S0 * p_1203);
int16_t  func_34(int32_t  p_35, struct S0 * p_1203);
int16_t  func_38(int32_t  p_39, int8_t  p_40, uint8_t  p_41, struct S0 * p_1203);
int32_t  func_42(int8_t  p_43, int64_t  p_44, struct S0 * p_1203);
int8_t  func_112(uint8_t * p_113, uint8_t * p_114, struct S0 * p_1203);
uint8_t * func_115(int32_t * p_116, uint8_t * p_117, uint8_t * p_118, uint8_t * p_119, int32_t * p_120, struct S0 * p_1203);
int32_t * func_121(uint32_t  p_122, uint32_t  p_123, struct S0 * p_1203);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1203->g_2 p_1203->g_comm_values p_1203->g_33 p_1203->g_179 p_1203->g_47 p_1203->g_264 p_1203->g_265 p_1203->g_48 p_1203->g_295 p_1203->g_52 p_1203->g_53 p_1203->g_61 p_1203->g_391 p_1203->g_475 p_1203->g_476 p_1203->g_477 p_1203->g_330 p_1203->g_480 p_1203->g_392 p_1203->g_464 p_1203->g_275 p_1203->g_982 p_1203->g_270 p_1203->g_321 p_1203->g_49 p_1203->g_452 p_1203->g_962 p_1203->g_963 p_1203->g_1173 p_1203->g_1175 p_1203->g_1184 p_1203->g_1185 p_1203->g_1186 p_1203->l_comm_values p_1203->g_966 p_1203->g_518 p_1203->g_467 p_1203->g_180 p_1203->g_1190 p_1203->g_1197 p_1203->g_1198 p_1203->g_26 p_1203->g_329 p_1203->g_127
 * writes: p_1203->g_2 p_1203->g_49 p_1203->g_48 p_1203->g_47 p_1203->g_269 p_1203->g_265 p_1203->g_51 p_1203->g_53 p_1203->g_452 p_1203->g_179 p_1203->g_658 p_1203->g_329 p_1203->g_52 p_1203->g_1023
 */
int64_t  func_1(struct S0 * p_1203)
{ /* block id: 4 */
    uint32_t l_45[4][10] = {{9UL,4294967295UL,4294967295UL,9UL,9UL,4294967295UL,4294967295UL,9UL,9UL,4294967295UL},{9UL,4294967295UL,4294967295UL,9UL,9UL,4294967295UL,4294967295UL,9UL,9UL,4294967295UL},{9UL,4294967295UL,4294967295UL,9UL,9UL,4294967295UL,4294967295UL,9UL,9UL,4294967295UL},{9UL,4294967295UL,4294967295UL,9UL,9UL,4294967295UL,4294967295UL,9UL,9UL,4294967295UL}};
    int32_t l_1156 = 0x4C1B435FL;
    int32_t ***l_1165 = (void*)0;
    int32_t l_1191[1][4];
    int32_t **l_1196 = &p_1203->g_179;
    VECTOR(uint8_t, 4) l_1199 = (VECTOR(uint8_t, 4))(0x31L, (VECTOR(uint8_t, 2))(0x31L, 0x8CL), 0x8CL);
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_1191[i][j] = 3L;
    }
    for (p_1203->g_2 = 21; (p_1203->g_2 != (-4)); p_1203->g_2 = safe_sub_func_uint16_t_u_u(p_1203->g_2, 6))
    { /* block id: 7 */
        int16_t l_17 = (-9L);
        uint8_t *l_56 = &p_1203->g_57;
        int32_t *l_1139 = &p_1203->g_329;
        uint32_t l_1157 = 4294967295UL;
        int32_t ***l_1169[3][4] = {{&p_1203->g_338[0][0],&p_1203->g_338[1][0],&p_1203->g_338[0][0],&p_1203->g_338[0][0]},{&p_1203->g_338[0][0],&p_1203->g_338[1][0],&p_1203->g_338[0][0],&p_1203->g_338[0][0]},{&p_1203->g_338[0][0],&p_1203->g_338[1][0],&p_1203->g_338[0][0],&p_1203->g_338[0][0]}};
        VECTOR(uint64_t, 2) l_1187 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 6UL);
        uint16_t l_1193 = 65535UL;
        int i, j;
        (*l_1139) = func_5(p_1203->g_2, p_1203->g_2, (((safe_div_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u((((((((safe_div_func_int64_t_s_s(l_17, (func_18(func_24((p_1203->g_comm_values[p_1203->tid] , (((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0x2F1E5C8A52B4B5A9L, 1UL)).xyxxxxxyyyyyxyyy)).hi))), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(p_1203->g_26.s51522671)).s24)))).yyyy, (uint64_t)((safe_mod_func_int64_t_s_s(p_1203->g_26.s4, (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(p_1203->g_33.xzwxwxzxxxywzzwz)).s7, 4)), func_34(((((*l_56) ^= (((safe_mul_func_int16_t_s_s(func_38(func_42(p_1203->g_33.x, l_45[3][0], p_1203), p_1203->g_2, l_17, p_1203), p_1203->g_47)) || 251UL) , p_1203->g_47)) & l_17) , p_1203->g_53), p_1203))))) | l_45[0][2])))).yywwwwwy, ((VECTOR(uint64_t, 8))(18446744073709551615UL))))).s57)), 0UL, 0x3967BE2D7E08CD91L)).wxwwzxzx))))).s5 , p_1203->g_33.y)), p_1203), l_17, l_17, l_45[2][8], p_1203->g_2, p_1203) , p_1203->g_391.x))) , (**p_1203->g_475)) & l_45[3][0]) > p_1203->g_330) ^ p_1203->g_480.sf) < p_1203->g_392.w) <= 0xC57E5D155A330531L), 9)) == p_1203->g_330), p_1203->g_464.x)) == (*p_1203->g_295)) < l_17), p_1203->g_275.s5, l_17, p_1203);
        for (p_1203->g_52 = 0; (p_1203->g_52 < 1); p_1203->g_52++)
        { /* block id: 586 */
            uint64_t *l_1162 = (void*)0;
            int32_t ****l_1166 = (void*)0;
            int32_t ****l_1167 = (void*)0;
            int32_t ****l_1168 = (void*)0;
            uint16_t *l_1170 = (void*)0;
            uint16_t *l_1171 = (void*)0;
            uint16_t *l_1172[3];
            int64_t l_1192[4];
            int i;
            for (i = 0; i < 3; i++)
                l_1172[i] = (void*)0;
            for (i = 0; i < 4; i++)
                l_1192[i] = 0x4F553EB72B99AFC0L;
            for (p_1203->g_452 = (-16); (p_1203->g_452 > 32); ++p_1203->g_452)
            { /* block id: 589 */
                int32_t *l_1144 = &p_1203->g_49;
                int32_t *l_1145 = &p_1203->g_49;
                int32_t *l_1146 = (void*)0;
                int32_t *l_1147 = &p_1203->g_51;
                int32_t *l_1148 = (void*)0;
                int32_t *l_1149 = (void*)0;
                int32_t *l_1150 = &p_1203->g_47;
                int32_t *l_1151 = &p_1203->g_47;
                int32_t *l_1152 = (void*)0;
                int32_t *l_1153 = &p_1203->g_47;
                int32_t *l_1154 = &p_1203->g_49;
                int32_t *l_1155[3][1];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1155[i][j] = &p_1203->g_329;
                }
                l_1157--;
                if ((*p_1203->g_982))
                    break;
            }
            (*p_1203->g_1190) = ((((safe_div_func_uint32_t_u_u((((((((*p_1203->g_962) == l_1162) > (p_1203->g_1023.z = (safe_lshift_func_int8_t_s_u(((l_1169[1][0] = l_1165) == &p_1203->g_338[7][0]), 1)))) , 0L) > ((VECTOR(int64_t, 2))(p_1203->g_1173.zz)).hi) & ((safe_unary_minus_func_int16_t_s(((*l_1139) = 0x2458L))) <= ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_1203->g_1175.xxyx)).hi)).odd)) > (safe_sub_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u(p_1203->g_comm_values[p_1203->tid], ((p_1203->g_658.s5 = (((((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_1203->g_1184.xx)).yxxyxyyxyyyxyxxy)).s4dba)), (uint32_t)((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 8))(p_1203->g_1185.yxxxyyyx)).s4041424371210074, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 2))(p_1203->g_1186.zx)).yyxxyxyyxyyxxxyx, ((VECTOR(uint32_t, 8))(p_1203->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1203->tid, 164))], (((VECTOR(uint64_t, 4))(l_1187.yxxy)).w || (((*p_1203->g_264) = ((FAKE_DIVERGE(p_1203->local_1_offset, get_local_id(1), 10) == ((((safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), 9)) < (0xC7A1L > (-3L))) >= (*p_1203->g_264)) | p_1203->g_comm_values[p_1203->tid])) <= p_1203->g_966.z)) > GROUP_DIVERGE(1, 1))), ((VECTOR(uint32_t, 4))(0xF1031E2AL)), 1UL, 7UL)).s7130155306156257))).odd)).s1045120021227030))).s7a94, ((VECTOR(uint32_t, 4))(0x45F81D5FL)), ((VECTOR(uint32_t, 4))(4294967295UL))))).x))).z , (*p_1203->g_295)) > 255UL) >= GROUP_DIVERGE(0, 1))) >= p_1203->g_464.w))) >= 0x409621B028E06D4BL), p_1203->g_518.w)) < p_1203->g_480.s9), p_1203->g_467[0])) , (*p_1203->g_295)) < (*p_1203->g_295)), 246UL))), l_1187.x)) , &l_1165) != &l_1165) , (*p_1203->g_180));
            --l_1193;
        }
    }
    (*l_1196) = &l_1191[0][0];
    (*l_1196) = (void*)0;
    if (((((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 4))(18446744073709551606UL, 18446744073709551615UL, 0UL, 9UL)).wxyxzxzywwxwzwyw, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(p_1203->g_1197.s498152dda7e2feda)).sae35)).ywzxxyxwxxzyyzxz))).s6 & (+(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(p_1203->g_1198.yxyyzzxzzyxxzyxy)).s21cf)).lo, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_1199.zx)), 0x6DL, 0x11L)).lo))).lo && GROUP_DIVERGE(2, 1)))) | ((*p_1203->g_295) = (*p_1203->g_295))))
    { /* block id: 605 */
        (*l_1196) = (void*)0;
        return p_1203->g_26.s1;
    }
    else
    { /* block id: 608 */
        for (p_1203->g_329 = 0; (p_1203->g_329 <= 13); p_1203->g_329++)
        { /* block id: 611 */
            uint32_t l_1202 = 9UL;
            (*p_1203->g_982) &= l_1202;
        }
    }
    return p_1203->g_127.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1203->g_452 p_1203->g_982 p_1203->g_47 p_1203->g_179 p_1203->g_270 p_1203->g_264 p_1203->g_321 p_1203->g_49
 * writes: p_1203->g_452 p_1203->g_179 p_1203->g_47 p_1203->g_48 p_1203->g_265 p_1203->g_658 p_1203->g_49
 */
int32_t  func_5(uint32_t  p_6, int64_t  p_7, uint64_t  p_8, uint8_t  p_9, int8_t  p_10, struct S0 * p_1203)
{ /* block id: 226 */
    int16_t l_495 = (-2L);
    int32_t l_496 = (-4L);
    VECTOR(int16_t, 8) l_547 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L));
    uint16_t **l_553 = (void*)0;
    VECTOR(int16_t, 8) l_613 = (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, (-1L)), (-1L)), (-1L), 6L, (-1L));
    uint32_t **l_638 = &p_1203->g_151;
    VECTOR(uint8_t, 4) l_651 = (VECTOR(uint8_t, 4))(0x82L, (VECTOR(uint8_t, 2))(0x82L, 0x59L), 0x59L);
    int32_t l_931 = 2L;
    int64_t l_937 = 0x4657F25BC0A50AA2L;
    int16_t ***l_940 = (void*)0;
    uint64_t *l_965 = &p_1203->g_53;
    uint64_t **l_964 = &l_965;
    int8_t *l_976 = (void*)0;
    int8_t **l_975 = &l_976;
    int32_t **l_1001 = &p_1203->g_179;
    VECTOR(int32_t, 16) l_1067 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x13A47456L), 0x13A47456L), 0x13A47456L, (-3L), 0x13A47456L, (VECTOR(int32_t, 2))((-3L), 0x13A47456L), (VECTOR(int32_t, 2))((-3L), 0x13A47456L), (-3L), 0x13A47456L, (-3L), 0x13A47456L);
    uint64_t l_1068 = 0x4B867F800800BF3CL;
    int64_t *l_1136 = (void*)0;
    int i;
    for (p_1203->g_452 = 28; (p_1203->g_452 == 55); p_1203->g_452++)
    { /* block id: 229 */
        uint16_t l_500 = 0x0033L;
        int32_t *l_505 = &p_1203->g_49;
        VECTOR(int16_t, 8) l_544 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x338DL), 0x338DL), 0x338DL, (-1L), 0x338DL);
        int16_t l_561 = (-4L);
        int32_t l_577 = 0x6C2A7901L;
        int64_t ***l_581 = (void*)0;
        uint16_t l_660 = 0x849AL;
        VECTOR(uint64_t, 16) l_967 = (VECTOR(uint64_t, 16))(0x9D0BD82C8DE8E3F7L, (VECTOR(uint64_t, 4))(0x9D0BD82C8DE8E3F7L, (VECTOR(uint64_t, 2))(0x9D0BD82C8DE8E3F7L, 0xF2D5727240768C57L), 0xF2D5727240768C57L), 0xF2D5727240768C57L, 0x9D0BD82C8DE8E3F7L, 0xF2D5727240768C57L, (VECTOR(uint64_t, 2))(0x9D0BD82C8DE8E3F7L, 0xF2D5727240768C57L), (VECTOR(uint64_t, 2))(0x9D0BD82C8DE8E3F7L, 0xF2D5727240768C57L), 0x9D0BD82C8DE8E3F7L, 0xF2D5727240768C57L, 0x9D0BD82C8DE8E3F7L, 0xF2D5727240768C57L);
        int8_t **l_974 = &p_1203->g_295;
        int8_t **l_978[6] = {&l_976,&l_976,&l_976,&l_976,&l_976,&l_976};
        VECTOR(int16_t, 16) l_1007 = (VECTOR(int16_t, 16))(0x37E5L, (VECTOR(int16_t, 4))(0x37E5L, (VECTOR(int16_t, 2))(0x37E5L, 0x0AC4L), 0x0AC4L), 0x0AC4L, 0x37E5L, 0x0AC4L, (VECTOR(int16_t, 2))(0x37E5L, 0x0AC4L), (VECTOR(int16_t, 2))(0x37E5L, 0x0AC4L), 0x37E5L, 0x0AC4L, 0x37E5L, 0x0AC4L);
        int32_t l_1052 = (-7L);
        int i;
        (1 + 1);
    }
    for (l_931 = 0; (l_931 <= (-3)); l_931 = safe_sub_func_int16_t_s_s(l_931, 3))
    { /* block id: 515 */
        uint32_t l_1064 = 0xB5E86B50L;
        int32_t l_1070 = 2L;
        int32_t *l_1071 = &p_1203->g_51;
        for (p_8 = 0; (p_8 < 31); p_8 = safe_add_func_int32_t_s_s(p_8, 2))
        { /* block id: 518 */
            int32_t l_1061 = 0x02242517L;
            int32_t l_1063 = 0L;
            int64_t *l_1069[4][5] = {{&p_1203->g_50,(void*)0,(void*)0,(void*)0,&p_1203->g_50},{&p_1203->g_50,(void*)0,(void*)0,(void*)0,&p_1203->g_50},{&p_1203->g_50,(void*)0,(void*)0,(void*)0,&p_1203->g_50},{&p_1203->g_50,(void*)0,(void*)0,(void*)0,&p_1203->g_50}};
            int i, j;
            (1 + 1);
        }
        return (*p_1203->g_982);
    }
    (*l_1001) = (*l_1001);
    for (p_7 = 0; (p_7 == 23); ++p_7)
    { /* block id: 565 */
        uint64_t l_1127 = 0x1187A9331B493F8DL;
        uint16_t *l_1137 = (void*)0;
        int32_t *l_1138[8][5] = {{(void*)0,(void*)0,&p_1203->g_329,&p_1203->g_329,(void*)0},{(void*)0,(void*)0,&p_1203->g_329,&p_1203->g_329,(void*)0},{(void*)0,(void*)0,&p_1203->g_329,&p_1203->g_329,(void*)0},{(void*)0,(void*)0,&p_1203->g_329,&p_1203->g_329,(void*)0},{(void*)0,(void*)0,&p_1203->g_329,&p_1203->g_329,(void*)0},{(void*)0,(void*)0,&p_1203->g_329,&p_1203->g_329,(void*)0},{(void*)0,(void*)0,&p_1203->g_329,&p_1203->g_329,(void*)0},{(void*)0,(void*)0,&p_1203->g_329,&p_1203->g_329,(void*)0}};
        int i, j;
        if ((atomic_inc(&p_1203->g_atomic_input[77 * get_linear_group_id() + 42]) == 8))
        { /* block id: 567 */
            VECTOR(int32_t, 4) l_1113 = (VECTOR(int32_t, 4))(0x5984C441L, (VECTOR(int32_t, 2))(0x5984C441L, (-1L)), (-1L));
            int32_t *l_1112[1][5];
            int32_t *l_1114 = (void*)0;
            int32_t l_1115 = 6L;
            uint64_t l_1116[5];
            uint8_t l_1119 = 255UL;
            int32_t *l_1120 = &l_1115;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1112[i][j] = (void*)0;
            }
            for (i = 0; i < 5; i++)
                l_1116[i] = 0xD0B5DD38A6F219FEL;
            l_1114 = l_1112[0][0];
            ++l_1116[2];
            l_1112[0][0] = (l_1119 , l_1120);
            unsigned int result = 0;
            result += l_1113.w;
            result += l_1113.z;
            result += l_1113.y;
            result += l_1113.x;
            result += l_1115;
            int l_1116_i0;
            for (l_1116_i0 = 0; l_1116_i0 < 5; l_1116_i0++) {
                result += l_1116[l_1116_i0];
            }
            result += l_1119;
            atomic_add(&p_1203->g_special_values[77 * get_linear_group_id() + 42], result);
        }
        else
        { /* block id: 571 */
            (1 + 1);
        }
        (*p_1203->g_179) |= 0x309014D9L;
        (*p_1203->g_321) &= (((safe_div_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(p_7, (**l_1001))) , (**l_1001)), ((safe_lshift_func_int16_t_s_u(((*p_1203->g_270) = l_1127), (p_1203->g_658.s2 = (p_8 > (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(((*p_1203->g_264) = ((0xAA055B4A082D1341L < ((l_1136 = &l_937) != (void*)0)) & l_1127)), 0xBBL)), 0L)), (**l_1001))), 1UL)))))) ^ 0x2757L))) , l_1137) == l_1137);
        if (p_7)
            continue;
    }
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_1203->g_179 p_1203->g_47 p_1203->g_264 p_1203->g_265 p_1203->g_51 p_1203->g_49 p_1203->g_378 p_1203->g_48 p_1203->g_295 p_1203->g_52 p_1203->g_33 p_1203->g_53 p_1203->g_61
 * writes: p_1203->g_48 p_1203->g_47 p_1203->g_269 p_1203->g_265 p_1203->g_51 p_1203->g_49 p_1203->g_53
 */
uint32_t  func_18(uint32_t  p_19, int16_t  p_20, uint32_t  p_21, int32_t  p_22, int64_t  p_23, struct S0 * p_1203)
{ /* block id: 41 */
    int8_t l_108 = 0x25L;
    int32_t l_110 = 0x77C8C0EFL;
    int32_t l_111 = 1L;
    uint8_t *l_266[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t **l_336 = &p_1203->g_179;
    VECTOR(int32_t, 2) l_343 = (VECTOR(int32_t, 2))((-1L), 0L);
    VECTOR(int64_t, 2) l_345 = (VECTOR(int64_t, 2))(0x7B7AAC522FA9AE51L, 0x354A1B1FD5959697L);
    uint32_t l_346 = 0xAF836D3FL;
    int32_t *l_358 = &l_110;
    int32_t *l_359 = &l_111;
    int32_t *l_360 = &l_110;
    int32_t *l_361 = &p_1203->g_47;
    int32_t *l_362 = (void*)0;
    int32_t *l_363 = &p_1203->g_49;
    int32_t *l_364 = &p_1203->g_51;
    int32_t *l_365 = &l_111;
    int32_t *l_366 = &l_110;
    int32_t *l_367 = &p_1203->g_47;
    int32_t *l_368 = (void*)0;
    int32_t *l_369[10][8] = {{&l_111,&l_111,(void*)0,&p_1203->g_49,&l_110,&p_1203->g_49,(void*)0,&l_111},{&l_111,&l_111,(void*)0,&p_1203->g_49,&l_110,&p_1203->g_49,(void*)0,&l_111},{&l_111,&l_111,(void*)0,&p_1203->g_49,&l_110,&p_1203->g_49,(void*)0,&l_111},{&l_111,&l_111,(void*)0,&p_1203->g_49,&l_110,&p_1203->g_49,(void*)0,&l_111},{&l_111,&l_111,(void*)0,&p_1203->g_49,&l_110,&p_1203->g_49,(void*)0,&l_111},{&l_111,&l_111,(void*)0,&p_1203->g_49,&l_110,&p_1203->g_49,(void*)0,&l_111},{&l_111,&l_111,(void*)0,&p_1203->g_49,&l_110,&p_1203->g_49,(void*)0,&l_111},{&l_111,&l_111,(void*)0,&p_1203->g_49,&l_110,&p_1203->g_49,(void*)0,&l_111},{&l_111,&l_111,(void*)0,&p_1203->g_49,&l_110,&p_1203->g_49,(void*)0,&l_111},{&l_111,&l_111,(void*)0,&p_1203->g_49,&l_110,&p_1203->g_49,(void*)0,&l_111}};
    int32_t l_370 = 6L;
    uint32_t l_371 = 0UL;
    VECTOR(uint8_t, 8) l_399 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
    VECTOR(uint8_t, 4) l_408 = (VECTOR(uint8_t, 4))(0x7AL, (VECTOR(uint8_t, 2))(0x7AL, 0x03L), 0x03L);
    int32_t l_412 = (-1L);
    VECTOR(int64_t, 4) l_485 = (VECTOR(int64_t, 4))(0x3E524BBAFEEAECD3L, (VECTOR(int64_t, 2))(0x3E524BBAFEEAECD3L, 0x5C18C2686D8A0A26L), 0x5C18C2686D8A0A26L);
    int i, j;
    for (p_19 = (-28); (p_19 <= 45); p_19++)
    { /* block id: 44 */
        uint8_t l_125 = 0xC9L;
        VECTOR(int32_t, 4) l_331 = (VECTOR(int32_t, 4))(0x06DF1423L, (VECTOR(int32_t, 2))(0x06DF1423L, 0x0532F79CL), 0x0532F79CL);
        uint32_t l_348[4];
        int i;
        for (i = 0; i < 4; i++)
            l_348[i] = 1UL;
        for (p_1203->g_48 = (-9); (p_1203->g_48 < 23); p_1203->g_48 = safe_add_func_uint8_t_u_u(p_1203->g_48, 3))
        { /* block id: 47 */
            uint8_t *l_109[5] = {&p_1203->g_57,&p_1203->g_57,&p_1203->g_57,&p_1203->g_57,&p_1203->g_57};
            int32_t l_126 = 6L;
            int32_t **l_263[2];
            int32_t *l_340 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_263[i] = &p_1203->g_179;
            (1 + 1);
        }
        if ((l_125 <= l_346))
        { /* block id: 159 */
            int32_t *l_347[5][4] = {{&l_110,&p_1203->g_329,(void*)0,&l_110},{&l_110,&p_1203->g_329,(void*)0,&l_110},{&l_110,&p_1203->g_329,(void*)0,&l_110},{&l_110,&p_1203->g_329,(void*)0,&l_110},{&l_110,&p_1203->g_329,(void*)0,&l_110}};
            int i, j;
            (*p_1203->g_179) |= 0x1BCE7344L;
            --l_348[1];
            for (p_1203->g_48 = (-27); (p_1203->g_48 < (-2)); p_1203->g_48++)
            { /* block id: 164 */
                int16_t ***l_353 = &p_1203->g_269[4];
                (*l_353) = (void*)0;
            }
        }
        else
        { /* block id: 167 */
            (*p_1203->g_179) &= (safe_rshift_func_uint8_t_u_s(((*p_1203->g_264)++), 4));
        }
    }
    l_371++;
    for (p_1203->g_51 = 0; (p_1203->g_51 > (-15)); p_1203->g_51--)
    { /* block id: 175 */
        VECTOR(uint32_t, 4) l_417 = (VECTOR(uint32_t, 4))(0x6BF8DA13L, (VECTOR(uint32_t, 2))(0x6BF8DA13L, 0x01015F64L), 0x01015F64L);
        uint64_t *l_426 = &p_1203->g_53;
        uint16_t *l_429 = (void*)0;
        int32_t ***l_432[10][3] = {{&l_336,&l_336,&l_336},{&l_336,&l_336,&l_336},{&l_336,&l_336,&l_336},{&l_336,&l_336,&l_336},{&l_336,&l_336,&l_336},{&l_336,&l_336,&l_336},{&l_336,&l_336,&l_336},{&l_336,&l_336,&l_336},{&l_336,&l_336,&l_336},{&l_336,&l_336,&l_336}};
        int32_t ***l_435 = &l_336;
        VECTOR(int16_t, 8) l_478 = (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 6L), 6L), 6L, 6L, 6L);
        VECTOR(int64_t, 16) l_486 = (VECTOR(int64_t, 16))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 1L), 1L), 1L, (-2L), 1L, (VECTOR(int64_t, 2))((-2L), 1L), (VECTOR(int64_t, 2))((-2L), 1L), (-2L), 1L, (-2L), 1L);
        uint32_t **l_487 = (void*)0;
        int i, j;
        for (p_1203->g_49 = 0; (p_1203->g_49 == 19); p_1203->g_49 = safe_add_func_uint64_t_u_u(p_1203->g_49, 3))
        { /* block id: 178 */
            VECTOR(int32_t, 16) l_379 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 8L), 8L), 8L, 1L, 8L, (VECTOR(int32_t, 2))(1L, 8L), (VECTOR(int32_t, 2))(1L, 8L), 1L, 8L, 1L, 8L);
            VECTOR(uint8_t, 8) l_409 = (VECTOR(uint8_t, 8))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0xE5L), 0xE5L), 0xE5L, 9UL, 0xE5L);
            int32_t l_414 = 0x21E8CCA5L;
            uint16_t *l_428 = (void*)0;
            uint16_t *l_431 = (void*)0;
            VECTOR(int64_t, 4) l_450 = (VECTOR(int64_t, 4))(0x1DE8545062FE5746L, (VECTOR(int64_t, 2))(0x1DE8545062FE5746L, 0x3ECE6332B884FED2L), 0x3ECE6332B884FED2L);
            int64_t l_490 = 0L;
            int i;
            (*p_1203->g_179) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_1203->g_378.s02450550)).s6142006514102603)), (int32_t)((VECTOR(int32_t, 8))(l_379.s9d8b5a05)).s1))).se880)).x;
            for (p_19 = 29; (p_19 > 39); p_19 = safe_add_func_uint16_t_u_u(p_19, 1))
            { /* block id: 182 */
                VECTOR(uint64_t, 2) l_382 = (VECTOR(uint64_t, 2))(18446744073709551613UL, 0xF214C5D950EF71F2L);
                uint64_t *l_402 = &p_1203->g_53;
                int8_t *l_413 = &l_108;
                uint64_t **l_427 = &l_426;
                uint16_t **l_430[3];
                int32_t ****l_433[9] = {&l_432[6][2],&l_432[6][2],&l_432[6][2],&l_432[6][2],&l_432[6][2],&l_432[6][2],&l_432[6][2],&l_432[6][2],&l_432[6][2]};
                int64_t *l_472[10][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                int64_t **l_471 = &l_472[5][0];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_430[i] = &l_429;
                (*l_367) = (((((((VECTOR(uint64_t, 4))(l_382.yyyy)).x ^ ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 2))(0x23929FCE235A545EL, 18446744073709551615UL))))), 0x8E1B7A8F95EF3463L, 18446744073709551613UL)).z) | (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(65531UL, 2UL)).even, p_1203->g_48))) , (safe_mul_func_int16_t_s_s((0x73L <= (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(p_1203->g_391.yxyy)).x, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(p_1203->g_392.wzyxwxyyxxywxxyx)).s34, ((VECTOR(int16_t, 4))((*p_1203->g_270), ((VECTOR(int16_t, 2))(0x3D9EL, (-2L))), 0x7B29L)).odd))))).odd)), p_21))), 7UL))) || (*p_1203->g_295)) & p_1203->g_33.w);
                l_414 &= (safe_mul_func_uint16_t_u_u((((l_379.s8 = ((*p_1203->g_264) = (8UL <= p_20))) == 0x45L) | (safe_mod_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((((VECTOR(uint8_t, 8))(l_399.s57117722)).s6 > ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x63L, 0x34L)))).odd), (safe_add_func_int64_t_s_s((((*l_402)++) , (l_382.y < ((*p_1203->g_295) | ((*l_413) |= (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))((safe_unary_minus_func_uint32_t_u(p_1203->g_61)), ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_408.wzxzywxy)).lo)).even, ((VECTOR(uint8_t, 16))(l_409.s7611461225270775)).s93))), ((**p_1203->g_180) <= ((0UL || ((p_1203->g_50 = p_21) <= p_1203->g_comm_values[p_1203->tid])) && l_412)), ((VECTOR(uint8_t, 4))(0x5BL)))).s56, ((VECTOR(uint8_t, 2))(0x1FL)), ((VECTOR(uint8_t, 2))(0UL))))).even, p_22)))))), FAKE_DIVERGE(p_1203->local_2_offset, get_local_id(2), 10))))) <= p_19), l_409.s5))), 0x071CL));
            }
            if (p_21)
                continue;
        }
        if (p_21)
            break;
    }
    return p_1203->g_61;
}


/* ------------------------------------------ */
/* 
 * reads : p_1203->g_49 p_1203->g_2
 * writes: p_1203->g_49
 */
uint32_t  func_24(int32_t  p_25, struct S0 * p_1203)
{ /* block id: 16 */
    int32_t *l_58[5];
    int16_t l_59 = 0x7BA8L;
    int32_t l_60 = (-1L);
    uint8_t l_65[1];
    int i;
    for (i = 0; i < 5; i++)
        l_58[i] = &p_1203->g_49;
    for (i = 0; i < 1; i++)
        l_65[i] = 7UL;
    l_65[0]--;
    for (p_1203->g_49 = (-21); (p_1203->g_49 >= 22); ++p_1203->g_49)
    { /* block id: 20 */
        if ((atomic_inc(&p_1203->l_atomic_input[20]) == 4))
        { /* block id: 22 */
            uint8_t l_70 = 0x6EL;
            VECTOR(int32_t, 8) l_71 = (VECTOR(int32_t, 8))(0x2BE7AC75L, (VECTOR(int32_t, 4))(0x2BE7AC75L, (VECTOR(int32_t, 2))(0x2BE7AC75L, 0x209EFF97L), 0x209EFF97L), 0x209EFF97L, 0x2BE7AC75L, 0x209EFF97L);
            VECTOR(uint32_t, 4) l_72 = (VECTOR(uint32_t, 4))(0x59363F81L, (VECTOR(uint32_t, 2))(0x59363F81L, 0xF862FE7CL), 0xF862FE7CL);
            VECTOR(int32_t, 16) l_73 = (VECTOR(int32_t, 16))(0x3F5E0DC0L, (VECTOR(int32_t, 4))(0x3F5E0DC0L, (VECTOR(int32_t, 2))(0x3F5E0DC0L, 0x62726E94L), 0x62726E94L), 0x62726E94L, 0x3F5E0DC0L, 0x62726E94L, (VECTOR(int32_t, 2))(0x3F5E0DC0L, 0x62726E94L), (VECTOR(int32_t, 2))(0x3F5E0DC0L, 0x62726E94L), 0x3F5E0DC0L, 0x62726E94L, 0x3F5E0DC0L, 0x62726E94L);
            uint64_t l_74[9][4][3] = {{{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL}},{{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL}},{{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL}},{{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL}},{{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL}},{{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL}},{{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL}},{{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL}},{{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL},{0x111E2934973AC029L,0UL,0x623CC279608170AEL}}};
            uint8_t l_75[2][5] = {{0x47L,0x47L,0x47L,0x47L,0x47L},{0x47L,0x47L,0x47L,0x47L,0x47L}};
            uint64_t l_101 = 0xA4EC0DFEC3DBCAAFL;
            int i, j, k;
            l_75[0][2] = (l_70 , (l_74[7][0][2] = ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_71.s47)).yxxxxyyyyxxyyyxy)), (int32_t)l_72.y, (int32_t)((VECTOR(int32_t, 2))(l_73.sfa)).odd))).s7));
            for (l_74[7][0][2] = 22; (l_74[7][0][2] <= 4); l_74[7][0][2]--)
            { /* block id: 27 */
                VECTOR(int64_t, 8) l_78 = (VECTOR(int64_t, 8))(0x076CEBAF4236FC2CL, (VECTOR(int64_t, 4))(0x076CEBAF4236FC2CL, (VECTOR(int64_t, 2))(0x076CEBAF4236FC2CL, 0x13CC16ADBBA81456L), 0x13CC16ADBBA81456L), 0x13CC16ADBBA81456L, 0x076CEBAF4236FC2CL, 0x13CC16ADBBA81456L);
                VECTOR(int64_t, 16) l_79 = (VECTOR(int64_t, 16))(0x74F72E784E7BDFF3L, (VECTOR(int64_t, 4))(0x74F72E784E7BDFF3L, (VECTOR(int64_t, 2))(0x74F72E784E7BDFF3L, (-1L)), (-1L)), (-1L), 0x74F72E784E7BDFF3L, (-1L), (VECTOR(int64_t, 2))(0x74F72E784E7BDFF3L, (-1L)), (VECTOR(int64_t, 2))(0x74F72E784E7BDFF3L, (-1L)), 0x74F72E784E7BDFF3L, (-1L), 0x74F72E784E7BDFF3L, (-1L));
                uint32_t l_80 = 5UL;
                int32_t l_81 = (-1L);
                int64_t l_82 = (-1L);
                VECTOR(int64_t, 4) l_83 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x1B7E967E9F4FA422L), 0x1B7E967E9F4FA422L);
                uint8_t l_84 = 252UL;
                uint16_t l_85 = 0UL;
                uint32_t l_86 = 4294967295UL;
                VECTOR(int64_t, 2) l_87 = (VECTOR(int64_t, 2))(0x7B260C6B045E1727L, 0x7B85FA97D6553E7EL);
                uint16_t l_88 = 0xA1D6L;
                int16_t l_91 = (-10L);
                uint32_t l_92 = 0UL;
                int32_t l_93 = 0x1A90B212L;
                int16_t l_94 = 1L;
                int32_t l_95 = 0x3F9ECD52L;
                int16_t l_96 = 0x16A6L;
                int32_t l_97 = 0x440A1D12L;
                int16_t l_98[3][1];
                uint32_t l_99 = 4294967295UL;
                uint64_t l_100 = 18446744073709551614UL;
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_98[i][j] = (-1L);
                }
                l_71.s3 = (((l_96 = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_78.s04)), (l_80 = ((VECTOR(int64_t, 2))(l_79.s88)).lo), ((VECTOR(int64_t, 2))((-9L), (-1L))), l_81, 9L, 0x0E0C1F7DF86215D6L)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x6DB7B902C6311308L, 0L)).xxyyxxxx)).odd, ((VECTOR(int64_t, 2))(0x1D66935DD90515F4L, 5L)).xxxy))).even)), ((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 16))(l_82, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_83.zwzyzyyy)).lo)), 0x2EEADF95454331F8L, 0x2D3EDD010A2F6955L, ((VECTOR(int64_t, 2))(0x2E4559E2955A46D6L, 0L)), 0x280F67D394C19A24L, l_84, 0x49881355238C9F0AL, (l_86 = l_85), 0L, 0L, 0x3F474991CB9547BAL)).seca1, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(1L, 0x0373B84CAB455570L, 0L, ((VECTOR(int64_t, 8))(l_87.xxxyxyyy)).s1, 0x78424657F329DDE6L, (((l_88++) , l_91) , l_92), 0x115659CF5E37DB04L, 1L)).hi)).wwzwzyzzyzzyyzyy)).s610a))).lo)), ((VECTOR(int64_t, 8))(l_93, 0x35E818B1E2C77FF3L, 1L, l_94, 0x5D9F9298E093FE37L, l_95, (-1L), 1L)).s57))), 1L, ((VECTOR(int64_t, 2))(0x7A74B5D444B5CFA6L)), (-1L))).s5) , l_97) , l_98[0][0]);
                l_100 = l_99;
            }
            l_101++;
            unsigned int result = 0;
            result += l_70;
            result += l_71.s7;
            result += l_71.s6;
            result += l_71.s5;
            result += l_71.s4;
            result += l_71.s3;
            result += l_71.s2;
            result += l_71.s1;
            result += l_71.s0;
            result += l_72.w;
            result += l_72.z;
            result += l_72.y;
            result += l_72.x;
            result += l_73.sf;
            result += l_73.se;
            result += l_73.sd;
            result += l_73.sc;
            result += l_73.sb;
            result += l_73.sa;
            result += l_73.s9;
            result += l_73.s8;
            result += l_73.s7;
            result += l_73.s6;
            result += l_73.s5;
            result += l_73.s4;
            result += l_73.s3;
            result += l_73.s2;
            result += l_73.s1;
            result += l_73.s0;
            int l_74_i0, l_74_i1, l_74_i2;
            for (l_74_i0 = 0; l_74_i0 < 9; l_74_i0++) {
                for (l_74_i1 = 0; l_74_i1 < 4; l_74_i1++) {
                    for (l_74_i2 = 0; l_74_i2 < 3; l_74_i2++) {
                        result += l_74[l_74_i0][l_74_i1][l_74_i2];
                    }
                }
            }
            int l_75_i0, l_75_i1;
            for (l_75_i0 = 0; l_75_i0 < 2; l_75_i0++) {
                for (l_75_i1 = 0; l_75_i1 < 5; l_75_i1++) {
                    result += l_75[l_75_i0][l_75_i1];
                }
            }
            result += l_101;
            atomic_add(&p_1203->l_special_values[20], result);
        }
        else
        { /* block id: 36 */
            (1 + 1);
        }
    }
    return p_1203->g_2;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_34(int32_t  p_35, struct S0 * p_1203)
{ /* block id: 14 */
    return p_35;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_38(int32_t  p_39, int8_t  p_40, uint8_t  p_41, struct S0 * p_1203)
{ /* block id: 11 */
    return p_40;
}


/* ------------------------------------------ */
/* 
 * reads : p_1203->g_53
 * writes: p_1203->g_53
 */
int32_t  func_42(int8_t  p_43, int64_t  p_44, struct S0 * p_1203)
{ /* block id: 8 */
    int32_t *l_46[1][2][10] = {{{&p_1203->g_2,(void*)0,&p_1203->g_2,&p_1203->g_2,(void*)0,&p_1203->g_2,&p_1203->g_2,(void*)0,&p_1203->g_2,&p_1203->g_2},{&p_1203->g_2,(void*)0,&p_1203->g_2,&p_1203->g_2,(void*)0,&p_1203->g_2,&p_1203->g_2,(void*)0,&p_1203->g_2,&p_1203->g_2}}};
    int i, j, k;
    ++p_1203->g_53;
    return p_43;
}


/* ------------------------------------------ */
/* 
 * reads : p_1203->g_57 p_1203->g_270 p_1203->g_48 p_1203->g_179 p_1203->g_51 p_1203->g_306 p_1203->g_312 p_1203->g_33 p_1203->g_265 p_1203->g_229 p_1203->g_275 p_1203->g_180 p_1203->g_50 p_1203->g_321 p_1203->g_295 p_1203->g_52 p_1203->g_49
 * writes: p_1203->g_295 p_1203->g_47 p_1203->g_51 p_1203->g_260 p_1203->g_49 p_1203->g_179 p_1203->g_53
 */
int8_t  func_112(uint8_t * p_113, uint8_t * p_114, struct S0 * p_1203)
{ /* block id: 115 */
    VECTOR(uint32_t, 2) l_292 = (VECTOR(uint32_t, 2))(0x50880342L, 4294967295UL);
    int8_t *l_293 = &p_1203->g_52;
    int8_t **l_294[9][5] = {{&l_293,(void*)0,&l_293,&l_293,(void*)0},{&l_293,(void*)0,&l_293,&l_293,(void*)0},{&l_293,(void*)0,&l_293,&l_293,(void*)0},{&l_293,(void*)0,&l_293,&l_293,(void*)0},{&l_293,(void*)0,&l_293,&l_293,(void*)0},{&l_293,(void*)0,&l_293,&l_293,(void*)0},{&l_293,(void*)0,&l_293,&l_293,(void*)0},{&l_293,(void*)0,&l_293,&l_293,(void*)0},{&l_293,(void*)0,&l_293,&l_293,(void*)0}};
    int32_t *l_304 = &p_1203->g_51;
    int32_t l_305 = 0x46D517F5L;
    VECTOR(int16_t, 2) l_313 = (VECTOR(int16_t, 2))(1L, (-1L));
    int16_t *l_314[3];
    uint32_t l_315 = 4294967295UL;
    uint16_t *l_316 = (void*)0;
    uint16_t *l_317 = (void*)0;
    uint16_t *l_318 = (void*)0;
    uint16_t *l_319[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_320 = 0L;
    VECTOR(int16_t, 8) l_324 = (VECTOR(int16_t, 8))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 1L), 1L), 1L, 4L, 1L);
    uint64_t *l_327 = (void*)0;
    uint64_t *l_328 = &p_1203->g_53;
    int i, j;
    for (i = 0; i < 3; i++)
        l_314[i] = (void*)0;
    (*p_1203->g_321) = (safe_div_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((((l_320 = ((((safe_div_func_int16_t_s_s(((l_292.y || (((((p_1203->g_295 = l_293) != p_113) , ((((+(((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(0x9864FAA0L, 0xA2BE1988L, 2UL, ((VECTOR(uint32_t, 4))(((*p_113) != (((safe_lshift_func_uint16_t_u_u(((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((safe_add_func_uint32_t_u_u((((*p_1203->g_270) , (((*l_304) ^= ((*p_1203->g_179) = l_292.y)) != (l_305 = l_292.y))) && ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(p_1203->g_306.s66098e48)), 0x454B1F371A874F33L, 0x61C34D0A55AF744EL, ((*l_304) = (safe_unary_minus_func_uint16_t_u((safe_mul_func_uint8_t_u_u((((p_1203->g_260 = ((safe_rshift_func_int8_t_s_u((((VECTOR(int16_t, 16))(0x0316L, ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(0L, ((VECTOR(int16_t, 2))(1L, 0x575FL)), ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 2))(p_1203->g_312.s66)), ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(l_313.xxxyxyxy)).s3571356022172441))).s61)).yxxyxyxyyxyyxyxx, (int16_t)((*l_304) | ((((0xF97BL > p_1203->g_33.y) , l_314[2]) != l_314[2]) != (*l_304)))))).sb4))).odd, (*l_304), 0x252BL, (*l_304), (*l_304), (-1L), ((VECTOR(int16_t, 4))(0x0E43L)), ((VECTOR(int16_t, 2))(0x4F62L)), 0x4121L)).s7c96, ((VECTOR(int16_t, 4))((-2L)))))), 0x088FL, 0L, (*l_304), 0L, ((VECTOR(int16_t, 2))(0x53A6L)), (*l_304), ((VECTOR(int16_t, 2))(9L)), 0x7E94L, 0x4BD1L)).se >= (*l_304)), 7)) , 1UL)) != (*l_304)) <= (*p_114)), (*l_304)))))), 0xFDCA33B9B0AA2AA1L, 0xEBC1D7F27E49F0B1L, 1UL, 18446744073709551615UL, 0xD29416D9D7DCA90DL)).s6), GROUP_DIVERGE(1, 1))), ((VECTOR(int32_t, 2))((-6L))), 1L)).odd)).odd , (*p_1203->g_270)) == l_313.y), p_1203->g_229.x)) <= l_313.x) && 0L)), ((VECTOR(uint32_t, 2))(0UL)), 0xA431C954L)), 0xF9BF1DC8L)).s4, p_1203->g_275.s6)) < l_313.y) < (-4L))) , (*l_304)) , (*p_1203->g_180)) != &p_1203->g_49)) , l_315) ^ 0UL)) || 0UL), p_1203->g_229.x)) < p_1203->g_50) || (*l_304)) != l_313.x)) , 1L) | 5UL), 0x7CL)), l_292.y));
    (*p_1203->g_180) = &l_305;
    (*l_304) = (safe_mul_func_int16_t_s_s((((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_324.s70144261)).s06)).xxyyyxxxxxyyxyxx)).lo)).s5647431110051537)).s21, ((VECTOR(int16_t, 16))(0x0CC7L, (-1L), ((*l_304) != ((*l_328) = (((safe_add_func_int16_t_s_s((((*p_1203->g_179) = ((((*p_1203->g_295) == 247UL) , 4L) , (*p_1203->g_179))) ^ 0x962BB8B3L), (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(0x9DC69FF8L, 0xDD778A3AL, 4294967286UL, 4294967289UL)))).z , 9L))) >= (*l_304)) , 0x886D2CFFF82B4B9AL))), ((VECTOR(int16_t, 2))((-5L))), (-1L), (-5L), ((VECTOR(int16_t, 8))(0x40FBL)), 0x3B45L)).s43))).xyxyyyyxyyxxyxxx, ((VECTOR(int16_t, 16))(0x0D5CL))))).hi, ((VECTOR(int16_t, 8))(0L))))).s46, (int16_t)(*p_1203->g_270)))), (int16_t)(*l_304), (int16_t)0x5BF1L))).odd == (*p_1203->g_270)), 65532UL));
    (*p_1203->g_321) &= (*l_304);
    return (*l_304);
}


/* ------------------------------------------ */
/* 
 * reads : p_1203->g_275 p_1203->g_180 p_1203->g_179 p_1203->g_47 p_1203->g_127 p_1203->g_26 p_1203->g_143 p_1203->g_57 p_1203->g_151 p_1203->g_51 p_1203->g_154 p_1203->g_48 p_1203->g_2
 * writes: p_1203->g_269 p_1203->g_229 p_1203->g_64 p_1203->g_143 p_1203->g_57 p_1203->g_33 p_1203->g_154 p_1203->g_51 p_1203->g_47 p_1203->g_50 p_1203->g_179 p_1203->g_53
 */
uint8_t * func_115(int32_t * p_116, uint8_t * p_117, uint8_t * p_118, uint8_t * p_119, int32_t * p_120, struct S0 * p_1203)
{ /* block id: 107 */
    int16_t **l_267 = (void*)0;
    int16_t ***l_268[5][1];
    int16_t **l_271 = &p_1203->g_270;
    int32_t l_274 = 1L;
    int32_t l_276 = (-1L);
    int64_t *l_282[8][2] = {{&p_1203->g_50,&p_1203->g_50},{&p_1203->g_50,&p_1203->g_50},{&p_1203->g_50,&p_1203->g_50},{&p_1203->g_50,&p_1203->g_50},{&p_1203->g_50,&p_1203->g_50},{&p_1203->g_50,&p_1203->g_50},{&p_1203->g_50,&p_1203->g_50},{&p_1203->g_50,&p_1203->g_50}};
    int64_t **l_281 = &l_282[0][1];
    uint16_t *l_283 = (void*)0;
    uint16_t *l_284[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t **l_285 = &p_1203->g_179;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_268[i][j] = &l_267;
    }
    l_271 = (p_1203->g_269[4] = l_267);
    (*l_285) = func_121((safe_lshift_func_uint16_t_u_u(0x9D19L, (l_274 | ((0x5366L > (l_276 &= ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_1203->g_275.sc09d)).hi)).lo)) > (p_1203->g_229.y = ((**p_1203->g_180) , (((l_274 , (safe_mul_func_int16_t_s_s(((((((safe_mul_func_int8_t_s_s(0x37L, (((*l_281) = &p_1203->g_50) != &p_1203->g_50))) < l_274) , l_274) & l_274) != l_274) < l_274), 8UL))) , l_274) != 18446744073709551614UL))))))), l_274, p_1203);
    return &p_1203->g_57;
}


/* ------------------------------------------ */
/* 
 * reads : p_1203->g_127 p_1203->g_26 p_1203->g_143 p_1203->g_57 p_1203->g_151 p_1203->g_51 p_1203->g_61 p_1203->g_comm_values p_1203->g_62 p_1203->g_154 p_1203->g_47 p_1203->g_179 p_1203->g_180 p_1203->g_53 p_1203->g_48 p_1203->g_49 p_1203->g_63 p_1203->g_2 p_1203->g_229 p_1203->g_52
 * writes: p_1203->g_64 p_1203->g_143 p_1203->g_57 p_1203->g_33 p_1203->g_154 p_1203->g_51 p_1203->g_47 p_1203->g_comm_values p_1203->g_50 p_1203->g_179 p_1203->g_53 p_1203->g_260 p_1203->g_52
 */
int32_t * func_121(uint32_t  p_122, uint32_t  p_123, struct S0 * p_1203)
{ /* block id: 50 */
    VECTOR(uint32_t, 2) l_134 = (VECTOR(uint32_t, 2))(0xADD7983FL, 0xB7DFDD69L);
    VECTOR(int16_t, 8) l_137 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
    int32_t l_138 = 2L;
    uint32_t l_139 = 0xD83BFFE3L;
    VECTOR(int8_t, 2) l_140 = (VECTOR(int8_t, 2))(0x16L, 0L);
    int32_t *l_141[5][4] = {{&p_1203->g_2,&p_1203->g_49,&p_1203->g_49,&p_1203->g_2},{&p_1203->g_2,&p_1203->g_49,&p_1203->g_49,&p_1203->g_2},{&p_1203->g_2,&p_1203->g_49,&p_1203->g_49,&p_1203->g_2},{&p_1203->g_2,&p_1203->g_49,&p_1203->g_49,&p_1203->g_2},{&p_1203->g_2,&p_1203->g_49,&p_1203->g_49,&p_1203->g_2}};
    uint32_t *l_142 = &p_1203->g_143;
    uint8_t *l_146 = &p_1203->g_57;
    uint8_t *l_147 = (void*)0;
    uint8_t *l_148 = (void*)0;
    uint8_t *l_149 = (void*)0;
    uint8_t *l_150[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t *l_153 = (void*)0;
    uint32_t **l_152 = &l_153;
    VECTOR(int16_t, 8) l_206 = (VECTOR(int16_t, 8))(0x5BCDL, (VECTOR(int16_t, 4))(0x5BCDL, (VECTOR(int16_t, 2))(0x5BCDL, (-4L)), (-4L)), (-4L), 0x5BCDL, (-4L));
    VECTOR(int8_t, 4) l_208 = (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, 1L), 1L);
    VECTOR(int16_t, 16) l_225 = (VECTOR(int16_t, 16))(0x4CD8L, (VECTOR(int16_t, 4))(0x4CD8L, (VECTOR(int16_t, 2))(0x4CD8L, (-1L)), (-1L)), (-1L), 0x4CD8L, (-1L), (VECTOR(int16_t, 2))(0x4CD8L, (-1L)), (VECTOR(int16_t, 2))(0x4CD8L, (-1L)), 0x4CD8L, (-1L), 0x4CD8L, (-1L));
    int i, j;
    p_1203->g_64.s0 = (p_1203->g_127.x >= (((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(p_123, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 8))(l_134.yxyyyyyy)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 2))(0UL, 0x8889E10CL)).xyxy))).lo)).xyyxxyxx))).s3)), 15)), ((l_138 = (safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_1203->local_2_offset, get_local_id(2), 10), (0L <= ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_137.s17)), 1L, 0x7C6CL)).y)))) < l_139))) , p_122) && ((VECTOR(int8_t, 2))(l_140.xx)).lo));
    p_1203->g_51 |= (p_1203->g_154 = (p_1203->g_26.s1 | ((p_1203->g_33.x = ((*l_146) = ((--(*l_142)) , p_1203->g_57))) < (p_1203->g_151 == ((*l_152) = l_142)))));
    for (l_139 = 0; (l_139 <= 49); ++l_139)
    { /* block id: 61 */
        uint32_t l_157 = 0x0D05ABF9L;
        int32_t l_172 = 0L;
        int64_t *l_173[10][2][2] = {{{(void*)0,&p_1203->g_50},{(void*)0,&p_1203->g_50}},{{(void*)0,&p_1203->g_50},{(void*)0,&p_1203->g_50}},{{(void*)0,&p_1203->g_50},{(void*)0,&p_1203->g_50}},{{(void*)0,&p_1203->g_50},{(void*)0,&p_1203->g_50}},{{(void*)0,&p_1203->g_50},{(void*)0,&p_1203->g_50}},{{(void*)0,&p_1203->g_50},{(void*)0,&p_1203->g_50}},{{(void*)0,&p_1203->g_50},{(void*)0,&p_1203->g_50}},{{(void*)0,&p_1203->g_50},{(void*)0,&p_1203->g_50}},{{(void*)0,&p_1203->g_50},{(void*)0,&p_1203->g_50}},{{(void*)0,&p_1203->g_50},{(void*)0,&p_1203->g_50}}};
        VECTOR(int32_t, 16) l_183 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 4L), 4L), 4L, 0L, 4L, (VECTOR(int32_t, 2))(0L, 4L), (VECTOR(int32_t, 2))(0L, 4L), 0L, 4L, 0L, 4L);
        VECTOR(int16_t, 4) l_197 = (VECTOR(int16_t, 4))(0x107AL, (VECTOR(int16_t, 2))(0x107AL, 0x37A8L), 0x37A8L);
        VECTOR(uint8_t, 8) l_209 = (VECTOR(uint8_t, 8))(0xE2L, (VECTOR(uint8_t, 4))(0xE2L, (VECTOR(uint8_t, 2))(0xE2L, 255UL), 255UL), 255UL, 0xE2L, 255UL);
        VECTOR(int16_t, 16) l_210 = (VECTOR(int16_t, 16))(0x4B4AL, (VECTOR(int16_t, 4))(0x4B4AL, (VECTOR(int16_t, 2))(0x4B4AL, (-1L)), (-1L)), (-1L), 0x4B4AL, (-1L), (VECTOR(int16_t, 2))(0x4B4AL, (-1L)), (VECTOR(int16_t, 2))(0x4B4AL, (-1L)), 0x4B4AL, (-1L), 0x4B4AL, (-1L));
        int32_t **l_219 = &l_141[2][0];
        VECTOR(int16_t, 2) l_248 = (VECTOR(int16_t, 2))(0x6972L, 1L);
        int32_t l_261 = 7L;
        int i, j, k;
        p_1203->g_47 = 1L;
        if ((((l_157 || (((p_1203->g_143 , (p_1203->g_50 = (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((void*)0 == &p_1203->g_143), 11)) | ((l_157 ^ ((p_122 ^ p_1203->g_57) , (!(safe_add_func_int32_t_s_s((p_1203->g_47 &= ((safe_sub_func_uint64_t_u_u((((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 16))((safe_mod_func_int64_t_s_s((p_1203->g_comm_values[p_1203->tid] ^= (l_172 = (safe_sub_func_int64_t_s_s(((((safe_sub_func_uint32_t_u_u(0xA96F2688L, p_122)) , p_1203->g_61) != p_122) | 1L), 0L)))), p_122)), p_1203->g_62, ((VECTOR(uint32_t, 8))(1UL)), 0x4BD90867L, ((VECTOR(uint32_t, 2))(0x3A7AF2F1L)), l_157, 4294967295UL, 0xADC2B526L)).s6a66))).w || p_1203->g_154), p_122)) != 1L)), (-3L)))))) ^ 0L)), 0x72L)))) != 0x564F156DC989A7F2L) & GROUP_DIVERGE(1, 1))) ^ p_1203->g_154) >= p_122))
        { /* block id: 67 */
            uint32_t l_176[7];
            int i;
            for (i = 0; i < 7; i++)
                l_176[i] = 0x277CD82FL;
            for (p_1203->g_47 = (-29); (p_1203->g_47 < 17); p_1203->g_47++)
            { /* block id: 70 */
                if (p_122)
                    break;
                l_176[6]++;
            }
            (*p_1203->g_180) = p_1203->g_179;
        }
        else
        { /* block id: 75 */
            uint32_t l_186[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
            int32_t *l_187 = &l_138;
            VECTOR(int16_t, 2) l_247 = (VECTOR(int16_t, 2))(1L, 5L);
            uint8_t *l_262[6][2];
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 2; j++)
                    l_262[i][j] = (void*)0;
            }
            if ((*p_1203->g_179))
                break;
            for (l_172 = (-20); (l_172 != (-23)); l_172 = safe_sub_func_int8_t_s_s(l_172, 1))
            { /* block id: 79 */
                uint64_t l_190 = 0UL;
                VECTOR(int16_t, 4) l_207 = (VECTOR(int16_t, 4))(0x1183L, (VECTOR(int16_t, 2))(0x1183L, 0x402EL), 0x402EL);
                int32_t l_220 = 0L;
                VECTOR(uint16_t, 4) l_226 = (VECTOR(uint16_t, 4))(0x7CC0L, (VECTOR(uint16_t, 2))(0x7CC0L, 0UL), 0UL);
                VECTOR(uint16_t, 16) l_232 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), (VECTOR(uint16_t, 2))(65535UL, 0UL), 65535UL, 0UL, 65535UL, 0UL);
                int16_t *l_233 = (void*)0;
                int16_t *l_234 = (void*)0;
                int16_t *l_235 = (void*)0;
                int16_t *l_236 = (void*)0;
                int16_t *l_237 = (void*)0;
                int16_t *l_238 = (void*)0;
                int16_t *l_239 = (void*)0;
                VECTOR(int16_t, 8) l_246 = (VECTOR(int16_t, 8))(0x0700L, (VECTOR(int16_t, 4))(0x0700L, (VECTOR(int16_t, 2))(0x0700L, (-2L)), (-2L)), (-2L), 0x0700L, (-2L));
                uint64_t l_257 = 0x6BA99FDA0DB31005L;
                uint32_t l_258 = 0x8B87F2F1L;
                int8_t *l_259[6][4][3] = {{{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52}},{{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52}},{{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52}},{{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52}},{{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52}},{{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52},{&p_1203->g_52,&p_1203->g_52,&p_1203->g_52}}};
                int i, j, k;
                if (((VECTOR(int32_t, 8))(l_183.s02a2dc1f)).s3)
                { /* block id: 80 */
                    int32_t *l_189 = &l_138;
                    for (p_1203->g_53 = 0; (p_1203->g_53 < 15); p_1203->g_53 = safe_add_func_int64_t_s_s(p_1203->g_53, 7))
                    { /* block id: 83 */
                        int32_t **l_188 = &l_187;
                        int i, j;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1203->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 164)), permutations[(safe_mod_func_uint32_t_u_u((l_186[3] = p_123), 10))][(safe_mod_func_uint32_t_u_u(p_1203->tid, 164))]));
                        (*l_188) = l_187;
                        return (*p_1203->g_180);
                    }
                }
                else
                { /* block id: 91 */
                    ++l_190;
                }
                l_220 &= (safe_mod_func_int8_t_s_s(0x67L, (safe_add_func_uint8_t_u_u(p_1203->g_48, (((p_1203->g_48 < ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x7626L, (-5L))).xxyx)))).even, ((VECTOR(int16_t, 8))(l_197.wzzxzzyy)).s41))).xxxy)).z) , (safe_add_func_uint32_t_u_u((((VECTOR(uint32_t, 4))(0x64E29DA9L, ((VECTOR(uint32_t, 2))(0x1C8523BBL, 6UL)), 4294967295UL)).y , (safe_add_func_uint8_t_u_u((l_190 && ((safe_rshift_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s(p_1203->g_51, 10)) , ((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0L, 0x6399L)).yxyxxyyxyyyxyxxx)).s68, ((VECTOR(int16_t, 2))(0x4BD2L, (-1L))), ((VECTOR(int16_t, 8))(l_206.s77251675)).s57))).odd, 1L, 6L, (-1L), ((VECTOR(int16_t, 2))(l_207.ww)), ((VECTOR(int16_t, 2))(0L, 1L)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(l_208.xzyxyyzyzxzxwyzx)).odd, ((VECTOR(uint8_t, 4))(l_209.s7056)).yzzyxwzy))))))), ((VECTOR(int16_t, 2))(0x5442L, 0x2475L)).xyyyyyyxxxxyxxxx))).s61)), ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(l_210.s42)).xxxyxyyy))).s4, (((safe_lshift_func_int16_t_s_s((+(-1L)), (safe_rshift_func_uint8_t_u_s((((safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((p_123 & ((*p_1203->g_179) = ((void*)0 == l_219))), FAKE_DIVERGE(p_1203->global_1_offset, get_global_id(1), 10))), (*l_187))) != 0x1984L) == 9L), p_1203->g_49)))) <= 2L) , (-8L)), ((VECTOR(int16_t, 4))(0x494AL)), 0x389EL, (-9L), p_1203->g_63, ((VECTOR(int16_t, 4))(1L)), 0x26F5L)).s9 , 0x79160525L) <= (-3L))) != 0x3DL) , p_122), p_122)) | p_1203->g_2)), p_123))), p_123))) , 0x67L)))));
                (*p_1203->g_179) ^= (0UL >= (safe_add_func_uint16_t_u_u((~(&p_123 != &p_1203->g_143)), ((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(9UL, ((VECTOR(uint16_t, 2))(0xB4DFL, 0xAAD1L)), ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 2))(l_225.sbc)).xxyyyyyxyyyxxxyy, ((VECTOR(int16_t, 2))((-5L), 0x09C8L)).xxyyyyxxyyyyxxyx))).s456b, ((VECTOR(uint16_t, 8))(l_226.ywzzwzzw)).lo))), 65530UL)).s7, (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(p_1203->g_229.yxxx)).y, 11)))) < (((*l_187) = (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(l_232.s5113ccda)).s4, 4))) && ((*l_187) == (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(((l_220 &= (safe_rshift_func_int16_t_s_u((-1L), 15))) & ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))(l_246.s1704202751445771)).s850e, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_247.xyyyxxyy)).lo)))))))).even, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_248.yxxyyxxx)).s04))))))).odd), p_123)), ((VECTOR(int8_t, 8))(0x2CL, ((safe_sub_func_int32_t_s_s((safe_div_func_int8_t_s_s((p_1203->g_52 |= (p_1203->g_260 = ((safe_sub_func_int8_t_s_s(((((((p_123 | (safe_lshift_func_uint8_t_u_u(((p_122 <= l_257) , (*l_187)), p_1203->g_48))) && (*l_187)) | p_1203->g_61) && 65535UL) , p_122) , l_190), p_122)) & l_258))), l_261)), 0UL)) | 4294967288UL), p_1203->g_61, 0x53L, (-2L), p_122, (-10L), 0L)).s4))))))));
                (*p_1203->g_179) ^= ((void*)0 != l_262[4][1]);
            }
        }
    }
    return (*p_1203->g_180);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[77];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 77; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[77];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 77; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[164];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 164; i++)
            l_comm_values[i] = 1;
    struct S0 c_1204;
    struct S0* p_1203 = &c_1204;
    struct S0 c_1205 = {
        0x4E9D05BAL, // p_1203->g_2
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 6UL), 6UL), 6UL, 18446744073709551615UL, 6UL), // p_1203->g_26
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x21L), 0x21L), // p_1203->g_33
        (-1L), // p_1203->g_47
        0x4926L, // p_1203->g_48
        (-1L), // p_1203->g_49
        0x5251A6545545654AL, // p_1203->g_50
        0x1103153DL, // p_1203->g_51
        0L, // p_1203->g_52
        0x515B8451CF616D0AL, // p_1203->g_53
        255UL, // p_1203->g_57
        (-1L), // p_1203->g_61
        0x16L, // p_1203->g_62
        0x4CA839EFL, // p_1203->g_63
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-6L)), (-6L)), (-6L), 1L, (-6L)), // p_1203->g_64
        (VECTOR(int16_t, 2))(9L, 7L), // p_1203->g_127
        0UL, // p_1203->g_143
        (void*)0, // p_1203->g_151
        (-1L), // p_1203->g_154
        &p_1203->g_47, // p_1203->g_179
        &p_1203->g_179, // p_1203->g_180
        (VECTOR(uint16_t, 2))(0x9ACDL, 0xD9E7L), // p_1203->g_229
        0xB6CE06D0L, // p_1203->g_260
        253UL, // p_1203->g_265
        &p_1203->g_265, // p_1203->g_264
        &p_1203->g_48, // p_1203->g_270
        {&p_1203->g_270,&p_1203->g_270,&p_1203->g_270,&p_1203->g_270,&p_1203->g_270,&p_1203->g_270}, // p_1203->g_269
        (VECTOR(int16_t, 16))(0x219EL, (VECTOR(int16_t, 4))(0x219EL, (VECTOR(int16_t, 2))(0x219EL, (-1L)), (-1L)), (-1L), 0x219EL, (-1L), (VECTOR(int16_t, 2))(0x219EL, (-1L)), (VECTOR(int16_t, 2))(0x219EL, (-1L)), 0x219EL, (-1L), 0x219EL, (-1L)), // p_1203->g_275
        &p_1203->g_52, // p_1203->g_295
        (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x816B979334A3F60BL), 0x816B979334A3F60BL), 0x816B979334A3F60BL, 18446744073709551615UL, 0x816B979334A3F60BL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x816B979334A3F60BL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x816B979334A3F60BL), 18446744073709551615UL, 0x816B979334A3F60BL, 18446744073709551615UL, 0x816B979334A3F60BL), // p_1203->g_306
        (VECTOR(int16_t, 8))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x08B9L), 0x08B9L), 0x08B9L, (-6L), 0x08B9L), // p_1203->g_312
        &p_1203->g_49, // p_1203->g_321
        0x737BF064L, // p_1203->g_329
        0x44E4C5D7L, // p_1203->g_330
        {{&p_1203->g_179},{&p_1203->g_179},{&p_1203->g_179},{&p_1203->g_179},{&p_1203->g_179},{&p_1203->g_179},{&p_1203->g_179},{&p_1203->g_179},{&p_1203->g_179}}, // p_1203->g_338
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L), // p_1203->g_378
        (VECTOR(uint16_t, 2))(0x4D8BL, 9UL), // p_1203->g_391
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 4L), 4L), // p_1203->g_392
        {&p_1203->g_338[5][0]}, // p_1203->g_434
        18446744073709551615UL, // p_1203->g_452
        (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, (-10L)), (-10L)), // p_1203->g_464
        {4294967295UL,4294967295UL}, // p_1203->g_467
        {{0L,0x6439B70E39FE4C7AL,0x43BF350050D2A1CCL,0L,0x6439B70E39FE4C7AL,0L,0x43BF350050D2A1CCL,0x6439B70E39FE4C7AL,0L},{0L,0x6439B70E39FE4C7AL,0x43BF350050D2A1CCL,0L,0x6439B70E39FE4C7AL,0L,0x43BF350050D2A1CCL,0x6439B70E39FE4C7AL,0L},{0L,0x6439B70E39FE4C7AL,0x43BF350050D2A1CCL,0L,0x6439B70E39FE4C7AL,0L,0x43BF350050D2A1CCL,0x6439B70E39FE4C7AL,0L},{0L,0x6439B70E39FE4C7AL,0x43BF350050D2A1CCL,0L,0x6439B70E39FE4C7AL,0L,0x43BF350050D2A1CCL,0x6439B70E39FE4C7AL,0L},{0L,0x6439B70E39FE4C7AL,0x43BF350050D2A1CCL,0L,0x6439B70E39FE4C7AL,0L,0x43BF350050D2A1CCL,0x6439B70E39FE4C7AL,0L},{0L,0x6439B70E39FE4C7AL,0x43BF350050D2A1CCL,0L,0x6439B70E39FE4C7AL,0L,0x43BF350050D2A1CCL,0x6439B70E39FE4C7AL,0L},{0L,0x6439B70E39FE4C7AL,0x43BF350050D2A1CCL,0L,0x6439B70E39FE4C7AL,0L,0x43BF350050D2A1CCL,0x6439B70E39FE4C7AL,0L},{0L,0x6439B70E39FE4C7AL,0x43BF350050D2A1CCL,0L,0x6439B70E39FE4C7AL,0L,0x43BF350050D2A1CCL,0x6439B70E39FE4C7AL,0L}}, // p_1203->g_470
        &p_1203->g_470[5][8], // p_1203->g_469
        {&p_1203->g_469,&p_1203->g_469,&p_1203->g_469,&p_1203->g_469,&p_1203->g_469,&p_1203->g_469}, // p_1203->g_468
        (void*)0, // p_1203->g_474
        65535UL, // p_1203->g_477
        {&p_1203->g_477,&p_1203->g_477,&p_1203->g_477}, // p_1203->g_476
        &p_1203->g_476[2], // p_1203->g_475
        (VECTOR(int8_t, 16))(0x4DL, (VECTOR(int8_t, 4))(0x4DL, (VECTOR(int8_t, 2))(0x4DL, 0x29L), 0x29L), 0x29L, 0x4DL, 0x29L, (VECTOR(int8_t, 2))(0x4DL, 0x29L), (VECTOR(int8_t, 2))(0x4DL, 0x29L), 0x4DL, 0x29L, 0x4DL, 0x29L), // p_1203->g_480
        (VECTOR(int64_t, 4))(0x522DCD16136CC264L, (VECTOR(int64_t, 2))(0x522DCD16136CC264L, 0x5EF379ED2561E494L), 0x5EF379ED2561E494L), // p_1203->g_518
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-7L)), (-7L)), // p_1203->g_548
        (VECTOR(uint64_t, 8))(0xFEE1058D4E66CE7DL, (VECTOR(uint64_t, 4))(0xFEE1058D4E66CE7DL, (VECTOR(uint64_t, 2))(0xFEE1058D4E66CE7DL, 0x1E8C6DDC2CBB4904L), 0x1E8C6DDC2CBB4904L), 0x1E8C6DDC2CBB4904L, 0xFEE1058D4E66CE7DL, 0x1E8C6DDC2CBB4904L), // p_1203->g_604
        (VECTOR(uint8_t, 16))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0UL), 0UL), 0UL, 5UL, 0UL, (VECTOR(uint8_t, 2))(5UL, 0UL), (VECTOR(uint8_t, 2))(5UL, 0UL), 5UL, 0UL, 5UL, 0UL), // p_1203->g_629
        (VECTOR(uint8_t, 2))(0xCBL, 0x78L), // p_1203->g_630
        (VECTOR(uint16_t, 8))(0xCEF4L, (VECTOR(uint16_t, 4))(0xCEF4L, (VECTOR(uint16_t, 2))(0xCEF4L, 65532UL), 65532UL), 65532UL, 0xCEF4L, 65532UL), // p_1203->g_658
        &p_1203->g_269[2], // p_1203->g_941
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1203->g_963
        &p_1203->g_963[4], // p_1203->g_962
        (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 0x243CF259D7CA23D9L), 0x243CF259D7CA23D9L), // p_1203->g_966
        &p_1203->g_47, // p_1203->g_982
        (VECTOR(int16_t, 8))(0x4670L, (VECTOR(int16_t, 4))(0x4670L, (VECTOR(int16_t, 2))(0x4670L, 0x693AL), 0x693AL), 0x693AL, 0x4670L, 0x693AL), // p_1203->g_1014
        (void*)0, // p_1203->g_1018
        (VECTOR(uint16_t, 4))(0xC2AEL, (VECTOR(uint16_t, 2))(0xC2AEL, 0UL), 0UL), // p_1203->g_1023
        0x657A56F702257ECBL, // p_1203->g_1050
        (VECTOR(int64_t, 8))(0x29DB863367DC8A2DL, (VECTOR(int64_t, 4))(0x29DB863367DC8A2DL, (VECTOR(int64_t, 2))(0x29DB863367DC8A2DL, (-2L)), (-2L)), (-2L), 0x29DB863367DC8A2DL, (-2L)), // p_1203->g_1062
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), // p_1203->g_1173
        (VECTOR(int64_t, 2))(0x6E58844C2998794DL, 0x3212407E06803DFBL), // p_1203->g_1175
        (VECTOR(uint32_t, 2))(0x75BB6B0AL, 0x58D8E640L), // p_1203->g_1184
        (VECTOR(uint32_t, 2))(1UL, 4294967295UL), // p_1203->g_1185
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0UL), 0UL), // p_1203->g_1186
        &p_1203->g_179, // p_1203->g_1190
        (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL), // p_1203->g_1197
        (VECTOR(uint8_t, 4))(0x62L, (VECTOR(uint8_t, 2))(0x62L, 1UL), 1UL), // p_1203->g_1198
        0, // p_1203->v_collective
        sequence_input[get_global_id(0)], // p_1203->global_0_offset
        sequence_input[get_global_id(1)], // p_1203->global_1_offset
        sequence_input[get_global_id(2)], // p_1203->global_2_offset
        sequence_input[get_local_id(0)], // p_1203->local_0_offset
        sequence_input[get_local_id(1)], // p_1203->local_1_offset
        sequence_input[get_local_id(2)], // p_1203->local_2_offset
        sequence_input[get_group_id(0)], // p_1203->group_0_offset
        sequence_input[get_group_id(1)], // p_1203->group_1_offset
        sequence_input[get_group_id(2)], // p_1203->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 164)), permutations[0][get_linear_local_id()])), // p_1203->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1204 = c_1205;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1203);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1203->g_2, "p_1203->g_2", print_hash_value);
    transparent_crc(p_1203->g_26.s0, "p_1203->g_26.s0", print_hash_value);
    transparent_crc(p_1203->g_26.s1, "p_1203->g_26.s1", print_hash_value);
    transparent_crc(p_1203->g_26.s2, "p_1203->g_26.s2", print_hash_value);
    transparent_crc(p_1203->g_26.s3, "p_1203->g_26.s3", print_hash_value);
    transparent_crc(p_1203->g_26.s4, "p_1203->g_26.s4", print_hash_value);
    transparent_crc(p_1203->g_26.s5, "p_1203->g_26.s5", print_hash_value);
    transparent_crc(p_1203->g_26.s6, "p_1203->g_26.s6", print_hash_value);
    transparent_crc(p_1203->g_26.s7, "p_1203->g_26.s7", print_hash_value);
    transparent_crc(p_1203->g_33.x, "p_1203->g_33.x", print_hash_value);
    transparent_crc(p_1203->g_33.y, "p_1203->g_33.y", print_hash_value);
    transparent_crc(p_1203->g_33.z, "p_1203->g_33.z", print_hash_value);
    transparent_crc(p_1203->g_33.w, "p_1203->g_33.w", print_hash_value);
    transparent_crc(p_1203->g_47, "p_1203->g_47", print_hash_value);
    transparent_crc(p_1203->g_48, "p_1203->g_48", print_hash_value);
    transparent_crc(p_1203->g_49, "p_1203->g_49", print_hash_value);
    transparent_crc(p_1203->g_50, "p_1203->g_50", print_hash_value);
    transparent_crc(p_1203->g_51, "p_1203->g_51", print_hash_value);
    transparent_crc(p_1203->g_52, "p_1203->g_52", print_hash_value);
    transparent_crc(p_1203->g_53, "p_1203->g_53", print_hash_value);
    transparent_crc(p_1203->g_57, "p_1203->g_57", print_hash_value);
    transparent_crc(p_1203->g_61, "p_1203->g_61", print_hash_value);
    transparent_crc(p_1203->g_62, "p_1203->g_62", print_hash_value);
    transparent_crc(p_1203->g_63, "p_1203->g_63", print_hash_value);
    transparent_crc(p_1203->g_64.s0, "p_1203->g_64.s0", print_hash_value);
    transparent_crc(p_1203->g_64.s1, "p_1203->g_64.s1", print_hash_value);
    transparent_crc(p_1203->g_64.s2, "p_1203->g_64.s2", print_hash_value);
    transparent_crc(p_1203->g_64.s3, "p_1203->g_64.s3", print_hash_value);
    transparent_crc(p_1203->g_64.s4, "p_1203->g_64.s4", print_hash_value);
    transparent_crc(p_1203->g_64.s5, "p_1203->g_64.s5", print_hash_value);
    transparent_crc(p_1203->g_64.s6, "p_1203->g_64.s6", print_hash_value);
    transparent_crc(p_1203->g_64.s7, "p_1203->g_64.s7", print_hash_value);
    transparent_crc(p_1203->g_127.x, "p_1203->g_127.x", print_hash_value);
    transparent_crc(p_1203->g_127.y, "p_1203->g_127.y", print_hash_value);
    transparent_crc(p_1203->g_143, "p_1203->g_143", print_hash_value);
    transparent_crc(p_1203->g_154, "p_1203->g_154", print_hash_value);
    transparent_crc(p_1203->g_229.x, "p_1203->g_229.x", print_hash_value);
    transparent_crc(p_1203->g_229.y, "p_1203->g_229.y", print_hash_value);
    transparent_crc(p_1203->g_260, "p_1203->g_260", print_hash_value);
    transparent_crc(p_1203->g_265, "p_1203->g_265", print_hash_value);
    transparent_crc(p_1203->g_275.s0, "p_1203->g_275.s0", print_hash_value);
    transparent_crc(p_1203->g_275.s1, "p_1203->g_275.s1", print_hash_value);
    transparent_crc(p_1203->g_275.s2, "p_1203->g_275.s2", print_hash_value);
    transparent_crc(p_1203->g_275.s3, "p_1203->g_275.s3", print_hash_value);
    transparent_crc(p_1203->g_275.s4, "p_1203->g_275.s4", print_hash_value);
    transparent_crc(p_1203->g_275.s5, "p_1203->g_275.s5", print_hash_value);
    transparent_crc(p_1203->g_275.s6, "p_1203->g_275.s6", print_hash_value);
    transparent_crc(p_1203->g_275.s7, "p_1203->g_275.s7", print_hash_value);
    transparent_crc(p_1203->g_275.s8, "p_1203->g_275.s8", print_hash_value);
    transparent_crc(p_1203->g_275.s9, "p_1203->g_275.s9", print_hash_value);
    transparent_crc(p_1203->g_275.sa, "p_1203->g_275.sa", print_hash_value);
    transparent_crc(p_1203->g_275.sb, "p_1203->g_275.sb", print_hash_value);
    transparent_crc(p_1203->g_275.sc, "p_1203->g_275.sc", print_hash_value);
    transparent_crc(p_1203->g_275.sd, "p_1203->g_275.sd", print_hash_value);
    transparent_crc(p_1203->g_275.se, "p_1203->g_275.se", print_hash_value);
    transparent_crc(p_1203->g_275.sf, "p_1203->g_275.sf", print_hash_value);
    transparent_crc(p_1203->g_306.s0, "p_1203->g_306.s0", print_hash_value);
    transparent_crc(p_1203->g_306.s1, "p_1203->g_306.s1", print_hash_value);
    transparent_crc(p_1203->g_306.s2, "p_1203->g_306.s2", print_hash_value);
    transparent_crc(p_1203->g_306.s3, "p_1203->g_306.s3", print_hash_value);
    transparent_crc(p_1203->g_306.s4, "p_1203->g_306.s4", print_hash_value);
    transparent_crc(p_1203->g_306.s5, "p_1203->g_306.s5", print_hash_value);
    transparent_crc(p_1203->g_306.s6, "p_1203->g_306.s6", print_hash_value);
    transparent_crc(p_1203->g_306.s7, "p_1203->g_306.s7", print_hash_value);
    transparent_crc(p_1203->g_306.s8, "p_1203->g_306.s8", print_hash_value);
    transparent_crc(p_1203->g_306.s9, "p_1203->g_306.s9", print_hash_value);
    transparent_crc(p_1203->g_306.sa, "p_1203->g_306.sa", print_hash_value);
    transparent_crc(p_1203->g_306.sb, "p_1203->g_306.sb", print_hash_value);
    transparent_crc(p_1203->g_306.sc, "p_1203->g_306.sc", print_hash_value);
    transparent_crc(p_1203->g_306.sd, "p_1203->g_306.sd", print_hash_value);
    transparent_crc(p_1203->g_306.se, "p_1203->g_306.se", print_hash_value);
    transparent_crc(p_1203->g_306.sf, "p_1203->g_306.sf", print_hash_value);
    transparent_crc(p_1203->g_312.s0, "p_1203->g_312.s0", print_hash_value);
    transparent_crc(p_1203->g_312.s1, "p_1203->g_312.s1", print_hash_value);
    transparent_crc(p_1203->g_312.s2, "p_1203->g_312.s2", print_hash_value);
    transparent_crc(p_1203->g_312.s3, "p_1203->g_312.s3", print_hash_value);
    transparent_crc(p_1203->g_312.s4, "p_1203->g_312.s4", print_hash_value);
    transparent_crc(p_1203->g_312.s5, "p_1203->g_312.s5", print_hash_value);
    transparent_crc(p_1203->g_312.s6, "p_1203->g_312.s6", print_hash_value);
    transparent_crc(p_1203->g_312.s7, "p_1203->g_312.s7", print_hash_value);
    transparent_crc(p_1203->g_329, "p_1203->g_329", print_hash_value);
    transparent_crc(p_1203->g_330, "p_1203->g_330", print_hash_value);
    transparent_crc(p_1203->g_378.s0, "p_1203->g_378.s0", print_hash_value);
    transparent_crc(p_1203->g_378.s1, "p_1203->g_378.s1", print_hash_value);
    transparent_crc(p_1203->g_378.s2, "p_1203->g_378.s2", print_hash_value);
    transparent_crc(p_1203->g_378.s3, "p_1203->g_378.s3", print_hash_value);
    transparent_crc(p_1203->g_378.s4, "p_1203->g_378.s4", print_hash_value);
    transparent_crc(p_1203->g_378.s5, "p_1203->g_378.s5", print_hash_value);
    transparent_crc(p_1203->g_378.s6, "p_1203->g_378.s6", print_hash_value);
    transparent_crc(p_1203->g_378.s7, "p_1203->g_378.s7", print_hash_value);
    transparent_crc(p_1203->g_391.x, "p_1203->g_391.x", print_hash_value);
    transparent_crc(p_1203->g_391.y, "p_1203->g_391.y", print_hash_value);
    transparent_crc(p_1203->g_392.x, "p_1203->g_392.x", print_hash_value);
    transparent_crc(p_1203->g_392.y, "p_1203->g_392.y", print_hash_value);
    transparent_crc(p_1203->g_392.z, "p_1203->g_392.z", print_hash_value);
    transparent_crc(p_1203->g_392.w, "p_1203->g_392.w", print_hash_value);
    transparent_crc(p_1203->g_452, "p_1203->g_452", print_hash_value);
    transparent_crc(p_1203->g_464.x, "p_1203->g_464.x", print_hash_value);
    transparent_crc(p_1203->g_464.y, "p_1203->g_464.y", print_hash_value);
    transparent_crc(p_1203->g_464.z, "p_1203->g_464.z", print_hash_value);
    transparent_crc(p_1203->g_464.w, "p_1203->g_464.w", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1203->g_467[i], "p_1203->g_467[i]", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1203->g_470[i][j], "p_1203->g_470[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1203->g_477, "p_1203->g_477", print_hash_value);
    transparent_crc(p_1203->g_480.s0, "p_1203->g_480.s0", print_hash_value);
    transparent_crc(p_1203->g_480.s1, "p_1203->g_480.s1", print_hash_value);
    transparent_crc(p_1203->g_480.s2, "p_1203->g_480.s2", print_hash_value);
    transparent_crc(p_1203->g_480.s3, "p_1203->g_480.s3", print_hash_value);
    transparent_crc(p_1203->g_480.s4, "p_1203->g_480.s4", print_hash_value);
    transparent_crc(p_1203->g_480.s5, "p_1203->g_480.s5", print_hash_value);
    transparent_crc(p_1203->g_480.s6, "p_1203->g_480.s6", print_hash_value);
    transparent_crc(p_1203->g_480.s7, "p_1203->g_480.s7", print_hash_value);
    transparent_crc(p_1203->g_480.s8, "p_1203->g_480.s8", print_hash_value);
    transparent_crc(p_1203->g_480.s9, "p_1203->g_480.s9", print_hash_value);
    transparent_crc(p_1203->g_480.sa, "p_1203->g_480.sa", print_hash_value);
    transparent_crc(p_1203->g_480.sb, "p_1203->g_480.sb", print_hash_value);
    transparent_crc(p_1203->g_480.sc, "p_1203->g_480.sc", print_hash_value);
    transparent_crc(p_1203->g_480.sd, "p_1203->g_480.sd", print_hash_value);
    transparent_crc(p_1203->g_480.se, "p_1203->g_480.se", print_hash_value);
    transparent_crc(p_1203->g_480.sf, "p_1203->g_480.sf", print_hash_value);
    transparent_crc(p_1203->g_518.x, "p_1203->g_518.x", print_hash_value);
    transparent_crc(p_1203->g_518.y, "p_1203->g_518.y", print_hash_value);
    transparent_crc(p_1203->g_518.z, "p_1203->g_518.z", print_hash_value);
    transparent_crc(p_1203->g_518.w, "p_1203->g_518.w", print_hash_value);
    transparent_crc(p_1203->g_548.x, "p_1203->g_548.x", print_hash_value);
    transparent_crc(p_1203->g_548.y, "p_1203->g_548.y", print_hash_value);
    transparent_crc(p_1203->g_548.z, "p_1203->g_548.z", print_hash_value);
    transparent_crc(p_1203->g_548.w, "p_1203->g_548.w", print_hash_value);
    transparent_crc(p_1203->g_604.s0, "p_1203->g_604.s0", print_hash_value);
    transparent_crc(p_1203->g_604.s1, "p_1203->g_604.s1", print_hash_value);
    transparent_crc(p_1203->g_604.s2, "p_1203->g_604.s2", print_hash_value);
    transparent_crc(p_1203->g_604.s3, "p_1203->g_604.s3", print_hash_value);
    transparent_crc(p_1203->g_604.s4, "p_1203->g_604.s4", print_hash_value);
    transparent_crc(p_1203->g_604.s5, "p_1203->g_604.s5", print_hash_value);
    transparent_crc(p_1203->g_604.s6, "p_1203->g_604.s6", print_hash_value);
    transparent_crc(p_1203->g_604.s7, "p_1203->g_604.s7", print_hash_value);
    transparent_crc(p_1203->g_629.s0, "p_1203->g_629.s0", print_hash_value);
    transparent_crc(p_1203->g_629.s1, "p_1203->g_629.s1", print_hash_value);
    transparent_crc(p_1203->g_629.s2, "p_1203->g_629.s2", print_hash_value);
    transparent_crc(p_1203->g_629.s3, "p_1203->g_629.s3", print_hash_value);
    transparent_crc(p_1203->g_629.s4, "p_1203->g_629.s4", print_hash_value);
    transparent_crc(p_1203->g_629.s5, "p_1203->g_629.s5", print_hash_value);
    transparent_crc(p_1203->g_629.s6, "p_1203->g_629.s6", print_hash_value);
    transparent_crc(p_1203->g_629.s7, "p_1203->g_629.s7", print_hash_value);
    transparent_crc(p_1203->g_629.s8, "p_1203->g_629.s8", print_hash_value);
    transparent_crc(p_1203->g_629.s9, "p_1203->g_629.s9", print_hash_value);
    transparent_crc(p_1203->g_629.sa, "p_1203->g_629.sa", print_hash_value);
    transparent_crc(p_1203->g_629.sb, "p_1203->g_629.sb", print_hash_value);
    transparent_crc(p_1203->g_629.sc, "p_1203->g_629.sc", print_hash_value);
    transparent_crc(p_1203->g_629.sd, "p_1203->g_629.sd", print_hash_value);
    transparent_crc(p_1203->g_629.se, "p_1203->g_629.se", print_hash_value);
    transparent_crc(p_1203->g_629.sf, "p_1203->g_629.sf", print_hash_value);
    transparent_crc(p_1203->g_630.x, "p_1203->g_630.x", print_hash_value);
    transparent_crc(p_1203->g_630.y, "p_1203->g_630.y", print_hash_value);
    transparent_crc(p_1203->g_658.s0, "p_1203->g_658.s0", print_hash_value);
    transparent_crc(p_1203->g_658.s1, "p_1203->g_658.s1", print_hash_value);
    transparent_crc(p_1203->g_658.s2, "p_1203->g_658.s2", print_hash_value);
    transparent_crc(p_1203->g_658.s3, "p_1203->g_658.s3", print_hash_value);
    transparent_crc(p_1203->g_658.s4, "p_1203->g_658.s4", print_hash_value);
    transparent_crc(p_1203->g_658.s5, "p_1203->g_658.s5", print_hash_value);
    transparent_crc(p_1203->g_658.s6, "p_1203->g_658.s6", print_hash_value);
    transparent_crc(p_1203->g_658.s7, "p_1203->g_658.s7", print_hash_value);
    transparent_crc(p_1203->g_966.x, "p_1203->g_966.x", print_hash_value);
    transparent_crc(p_1203->g_966.y, "p_1203->g_966.y", print_hash_value);
    transparent_crc(p_1203->g_966.z, "p_1203->g_966.z", print_hash_value);
    transparent_crc(p_1203->g_966.w, "p_1203->g_966.w", print_hash_value);
    transparent_crc(p_1203->g_1014.s0, "p_1203->g_1014.s0", print_hash_value);
    transparent_crc(p_1203->g_1014.s1, "p_1203->g_1014.s1", print_hash_value);
    transparent_crc(p_1203->g_1014.s2, "p_1203->g_1014.s2", print_hash_value);
    transparent_crc(p_1203->g_1014.s3, "p_1203->g_1014.s3", print_hash_value);
    transparent_crc(p_1203->g_1014.s4, "p_1203->g_1014.s4", print_hash_value);
    transparent_crc(p_1203->g_1014.s5, "p_1203->g_1014.s5", print_hash_value);
    transparent_crc(p_1203->g_1014.s6, "p_1203->g_1014.s6", print_hash_value);
    transparent_crc(p_1203->g_1014.s7, "p_1203->g_1014.s7", print_hash_value);
    transparent_crc(p_1203->g_1023.x, "p_1203->g_1023.x", print_hash_value);
    transparent_crc(p_1203->g_1023.y, "p_1203->g_1023.y", print_hash_value);
    transparent_crc(p_1203->g_1023.z, "p_1203->g_1023.z", print_hash_value);
    transparent_crc(p_1203->g_1023.w, "p_1203->g_1023.w", print_hash_value);
    transparent_crc(p_1203->g_1050, "p_1203->g_1050", print_hash_value);
    transparent_crc(p_1203->g_1062.s0, "p_1203->g_1062.s0", print_hash_value);
    transparent_crc(p_1203->g_1062.s1, "p_1203->g_1062.s1", print_hash_value);
    transparent_crc(p_1203->g_1062.s2, "p_1203->g_1062.s2", print_hash_value);
    transparent_crc(p_1203->g_1062.s3, "p_1203->g_1062.s3", print_hash_value);
    transparent_crc(p_1203->g_1062.s4, "p_1203->g_1062.s4", print_hash_value);
    transparent_crc(p_1203->g_1062.s5, "p_1203->g_1062.s5", print_hash_value);
    transparent_crc(p_1203->g_1062.s6, "p_1203->g_1062.s6", print_hash_value);
    transparent_crc(p_1203->g_1062.s7, "p_1203->g_1062.s7", print_hash_value);
    transparent_crc(p_1203->g_1173.x, "p_1203->g_1173.x", print_hash_value);
    transparent_crc(p_1203->g_1173.y, "p_1203->g_1173.y", print_hash_value);
    transparent_crc(p_1203->g_1173.z, "p_1203->g_1173.z", print_hash_value);
    transparent_crc(p_1203->g_1173.w, "p_1203->g_1173.w", print_hash_value);
    transparent_crc(p_1203->g_1175.x, "p_1203->g_1175.x", print_hash_value);
    transparent_crc(p_1203->g_1175.y, "p_1203->g_1175.y", print_hash_value);
    transparent_crc(p_1203->g_1184.x, "p_1203->g_1184.x", print_hash_value);
    transparent_crc(p_1203->g_1184.y, "p_1203->g_1184.y", print_hash_value);
    transparent_crc(p_1203->g_1185.x, "p_1203->g_1185.x", print_hash_value);
    transparent_crc(p_1203->g_1185.y, "p_1203->g_1185.y", print_hash_value);
    transparent_crc(p_1203->g_1186.x, "p_1203->g_1186.x", print_hash_value);
    transparent_crc(p_1203->g_1186.y, "p_1203->g_1186.y", print_hash_value);
    transparent_crc(p_1203->g_1186.z, "p_1203->g_1186.z", print_hash_value);
    transparent_crc(p_1203->g_1186.w, "p_1203->g_1186.w", print_hash_value);
    transparent_crc(p_1203->g_1197.s0, "p_1203->g_1197.s0", print_hash_value);
    transparent_crc(p_1203->g_1197.s1, "p_1203->g_1197.s1", print_hash_value);
    transparent_crc(p_1203->g_1197.s2, "p_1203->g_1197.s2", print_hash_value);
    transparent_crc(p_1203->g_1197.s3, "p_1203->g_1197.s3", print_hash_value);
    transparent_crc(p_1203->g_1197.s4, "p_1203->g_1197.s4", print_hash_value);
    transparent_crc(p_1203->g_1197.s5, "p_1203->g_1197.s5", print_hash_value);
    transparent_crc(p_1203->g_1197.s6, "p_1203->g_1197.s6", print_hash_value);
    transparent_crc(p_1203->g_1197.s7, "p_1203->g_1197.s7", print_hash_value);
    transparent_crc(p_1203->g_1197.s8, "p_1203->g_1197.s8", print_hash_value);
    transparent_crc(p_1203->g_1197.s9, "p_1203->g_1197.s9", print_hash_value);
    transparent_crc(p_1203->g_1197.sa, "p_1203->g_1197.sa", print_hash_value);
    transparent_crc(p_1203->g_1197.sb, "p_1203->g_1197.sb", print_hash_value);
    transparent_crc(p_1203->g_1197.sc, "p_1203->g_1197.sc", print_hash_value);
    transparent_crc(p_1203->g_1197.sd, "p_1203->g_1197.sd", print_hash_value);
    transparent_crc(p_1203->g_1197.se, "p_1203->g_1197.se", print_hash_value);
    transparent_crc(p_1203->g_1197.sf, "p_1203->g_1197.sf", print_hash_value);
    transparent_crc(p_1203->g_1198.x, "p_1203->g_1198.x", print_hash_value);
    transparent_crc(p_1203->g_1198.y, "p_1203->g_1198.y", print_hash_value);
    transparent_crc(p_1203->g_1198.z, "p_1203->g_1198.z", print_hash_value);
    transparent_crc(p_1203->g_1198.w, "p_1203->g_1198.w", print_hash_value);
    transparent_crc(p_1203->v_collective, "p_1203->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 77; i++)
            transparent_crc(p_1203->g_special_values[i + 77 * get_linear_group_id()], "p_1203->g_special_values[i + 77 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 77; i++)
            transparent_crc(p_1203->l_special_values[i], "p_1203->l_special_values[i]", print_hash_value);
    transparent_crc(p_1203->l_comm_values[get_linear_local_id()], "p_1203->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1203->g_comm_values[get_linear_group_id() * 164 + get_linear_local_id()], "p_1203->g_comm_values[get_linear_group_id() * 164 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
