// --atomics 66 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 99,61,1 -l 33,1,1
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

__constant uint32_t permutations[10][33] = {
{23,29,11,16,17,6,26,32,24,2,7,28,21,25,12,19,27,14,10,20,18,30,4,22,15,5,3,9,1,31,13,8,0}, // permutation 0
{4,0,26,10,14,15,3,24,7,12,20,2,5,6,30,27,29,25,9,13,17,19,16,31,28,21,18,8,23,22,32,1,11}, // permutation 1
{22,11,26,32,27,8,0,1,12,6,2,5,14,20,4,31,25,10,24,30,29,15,17,19,7,16,18,9,13,3,23,28,21}, // permutation 2
{24,13,16,11,15,10,21,9,20,18,27,7,0,28,3,22,31,5,1,32,14,2,30,17,6,26,25,4,29,12,23,19,8}, // permutation 3
{13,20,14,8,30,0,29,26,21,32,16,11,27,19,1,25,15,10,7,31,28,17,23,6,2,9,3,4,5,22,12,18,24}, // permutation 4
{12,4,15,20,27,10,2,24,11,13,3,14,5,0,8,23,19,18,1,26,6,29,16,31,17,32,30,9,7,22,28,21,25}, // permutation 5
{4,0,19,1,11,26,29,25,31,17,20,10,23,9,12,13,16,30,7,32,21,22,24,6,5,2,14,27,28,18,3,8,15}, // permutation 6
{1,8,13,17,20,9,19,11,23,25,30,3,28,6,27,15,26,18,5,0,12,14,29,32,24,16,22,2,31,4,7,21,10}, // permutation 7
{18,13,29,7,15,27,25,16,6,32,11,31,4,14,24,9,0,23,21,2,10,17,22,1,8,12,20,26,28,3,5,19,30}, // permutation 8
{12,10,15,29,17,0,22,23,8,4,32,7,6,1,13,24,9,20,31,5,3,25,26,11,19,21,14,18,28,30,2,27,16} // permutation 9
};

// Seed: 2656644320

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int32_t  f0;
   uint8_t  f1;
   uint32_t  f2;
};

struct S1 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4;
    int32_t g_5;
    volatile uint16_t g_140;
    int32_t *g_145;
    int32_t ** volatile g_144;
    int32_t **g_149;
    int32_t g_150;
    VECTOR(int32_t, 4) g_155;
    int32_t * volatile **g_174;
    int16_t g_182;
    int16_t g_184[9][5][5];
    int16_t g_185;
    volatile VECTOR(int8_t, 16) g_214;
    int8_t g_220[8][7][4];
    int32_t g_234;
    volatile int64_t g_259;
    volatile int64_t *g_258;
    uint16_t g_261;
    uint16_t g_335;
    VECTOR(int32_t, 2) g_364;
    VECTOR(uint8_t, 8) g_389;
    int64_t g_396;
    volatile VECTOR(int16_t, 4) g_417;
    uint32_t g_426[4][8][5];
    uint16_t g_428;
    int64_t g_430;
    int64_t g_432;
    union U0 g_438;
    union U0 *g_440[5];
    union U0 ** volatile g_439[1][8];
    volatile VECTOR(uint8_t, 16) g_455;
    volatile VECTOR(uint8_t, 4) g_459;
    volatile VECTOR(uint8_t, 16) g_461;
    VECTOR(uint8_t, 4) g_462;
    volatile int32_t g_465;
    VECTOR(int32_t, 16) g_484;
    VECTOR(uint8_t, 8) g_500;
    VECTOR(uint8_t, 2) g_501;
    VECTOR(uint8_t, 8) g_502;
    VECTOR(uint8_t, 16) g_504;
    VECTOR(uint64_t, 16) g_528;
    VECTOR(int64_t, 8) g_535;
    int32_t g_541;
    int32_t * volatile g_547;
    VECTOR(uint16_t, 8) g_556;
    int8_t g_616;
    VECTOR(int8_t, 8) g_621;
    volatile VECTOR(int64_t, 4) g_625;
    VECTOR(uint32_t, 8) g_647;
    volatile VECTOR(uint32_t, 8) g_680;
    VECTOR(int16_t, 4) g_682;
    VECTOR(int16_t, 4) g_683;
    VECTOR(uint64_t, 8) g_693;
    VECTOR(int64_t, 8) g_698;
    VECTOR(int64_t, 8) g_699;
    VECTOR(int64_t, 2) g_700;
    VECTOR(int64_t, 16) g_701;
    volatile int32_t g_748;
    int64_t **g_872;
    int64_t *** volatile g_871[8];
    int32_t *g_892[5];
    VECTOR(int16_t, 4) g_893;
    VECTOR(int16_t, 16) g_894;
    volatile uint32_t g_896;
    volatile VECTOR(int32_t, 16) g_922;
    VECTOR(uint32_t, 4) g_965;
    VECTOR(uint8_t, 4) g_968;
    VECTOR(uint64_t, 8) g_973;
    int32_t ****g_978;
    int32_t g_1024;
    VECTOR(int64_t, 4) g_1039;
    uint8_t *g_1041;
    VECTOR(int32_t, 4) g_1068;
    uint32_t g_1084[5][7];
    int32_t ** volatile g_1086[9][7][4];
    VECTOR(int32_t, 8) g_1093;
    volatile VECTOR(int32_t, 16) g_1094;
    VECTOR(int32_t, 4) g_1122;
    VECTOR(int32_t, 16) g_1123;
    VECTOR(int32_t, 8) g_1124;
    volatile VECTOR(int32_t, 2) g_1128;
    volatile VECTOR(int32_t, 2) g_1130;
    volatile VECTOR(int32_t, 4) g_1131;
    volatile VECTOR(int32_t, 16) g_1134;
    VECTOR(int32_t, 8) g_1136;
    volatile VECTOR(uint16_t, 2) g_1140;
    VECTOR(uint32_t, 2) g_1163;
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
uint32_t  func_1(struct S1 * p_1171);
int32_t * func_8(int32_t * p_9, struct S1 * p_1171);
int32_t * func_11(uint32_t  p_12, struct S1 * p_1171);
int32_t * func_14(int8_t  p_15, struct S1 * p_1171);
uint64_t  func_19(uint32_t  p_20, int32_t * p_21, struct S1 * p_1171);
int32_t * func_120(int32_t * p_121, uint32_t  p_122, struct S1 * p_1171);
int32_t * func_123(uint32_t  p_124, int64_t  p_125, int32_t * p_126, uint8_t  p_127, struct S1 * p_1171);
int8_t  func_128(uint32_t  p_129, uint32_t  p_130, struct S1 * p_1171);
int32_t * func_132(int32_t * p_133, struct S1 * p_1171);
int8_t  func_146(int32_t ** p_147, struct S1 * p_1171);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1171->g_5 p_1171->g_4 p_1171->g_3 p_1171->g_140 p_1171->g_144 p_1171->g_149 p_1171->g_150 p_1171->g_comm_values p_1171->g_174 p_1171->g_155 p_1171->l_comm_values p_1171->g_185 p_1171->g_184 p_1171->g_220 p_1171->g_234 p_1171->g_182 p_1171->g_258 p_1171->g_145 p_1171->g_214 p_1171->g_261 p_1171->g_364 p_1171->g_426 p_1171->g_428 p_1171->g_430 p_1171->g_432 p_1171->g_259 p_1171->g_389 p_1171->g_484 p_1171->g_438.f0 p_1171->g_455 p_1171->g_535 p_1171->g_502 p_1171->g_417 p_1171->g_621 p_1171->g_504 p_1171->g_682 p_1171->g_528 p_1171->g_2 p_1171->g_748 p_1171->g_896 p_1171->g_647 p_1171->g_922 p_1171->g_462 p_1171->g_700 p_1171->g_1024 p_1171->g_556 p_1171->g_1039 p_1171->g_1041 p_1171->g_965 p_1171->g_1068 p_1171->g_1084 p_1171->g_683 p_1171->g_501 p_1171->g_1093 p_1171->g_1094 p_1171->g_396 p_1171->g_698 p_1171->g_1140 p_1171->g_1124 p_1171->g_1163 p_1171->g_973 p_1171->g_701 p_1171->g_500 p_1171->g_1123 p_1171->g_693 p_1171->g_699 p_1171->g_968
 * writes: p_1171->g_5 p_1171->g_140 p_1171->g_145 p_1171->g_150 p_1171->g_155 p_1171->g_149 p_1171->g_182 p_1171->g_184 p_1171->g_185 p_1171->g_220 p_1171->g_261 p_1171->g_234 p_1171->g_335 p_1171->g_426 p_1171->g_428 p_1171->g_430 p_1171->g_432 p_1171->g_440 p_1171->g_396 p_1171->g_438.f0 p_1171->g_616 p_1171->g_621 p_1171->g_528 p_1171->g_892 p_1171->g_364 p_1171->g_896 p_1171->g_541 p_1171->g_389 p_1171->g_1024 p_1171->g_535 p_1171->g_965 p_1171->g_1084 p_1171->g_698
 */
uint32_t  func_1(struct S1 * p_1171)
{ /* block id: 4 */
    int32_t *l_10 = &p_1171->g_5;
    uint64_t *l_1099 = (void*)0;
    uint64_t *l_1100 = (void*)0;
    uint64_t *l_1101 = (void*)0;
    uint64_t *l_1102[4];
    uint32_t l_1117 = 0xBAFBAFFEL;
    VECTOR(int32_t, 16) l_1125 = (VECTOR(int32_t, 16))(0x51C43398L, (VECTOR(int32_t, 4))(0x51C43398L, (VECTOR(int32_t, 2))(0x51C43398L, 0x75E29207L), 0x75E29207L), 0x75E29207L, 0x51C43398L, 0x75E29207L, (VECTOR(int32_t, 2))(0x51C43398L, 0x75E29207L), (VECTOR(int32_t, 2))(0x51C43398L, 0x75E29207L), 0x51C43398L, 0x75E29207L, 0x51C43398L, 0x75E29207L);
    VECTOR(int32_t, 16) l_1126 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
    VECTOR(int32_t, 4) l_1127 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2EBAF350L), 0x2EBAF350L);
    VECTOR(int32_t, 16) l_1129 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x3DC98F95L), 0x3DC98F95L), 0x3DC98F95L, 9L, 0x3DC98F95L, (VECTOR(int32_t, 2))(9L, 0x3DC98F95L), (VECTOR(int32_t, 2))(9L, 0x3DC98F95L), 9L, 0x3DC98F95L, 9L, 0x3DC98F95L);
    VECTOR(int32_t, 16) l_1132 = (VECTOR(int32_t, 16))(0x611A177CL, (VECTOR(int32_t, 4))(0x611A177CL, (VECTOR(int32_t, 2))(0x611A177CL, 0L), 0L), 0L, 0x611A177CL, 0L, (VECTOR(int32_t, 2))(0x611A177CL, 0L), (VECTOR(int32_t, 2))(0x611A177CL, 0L), 0x611A177CL, 0L, 0x611A177CL, 0L);
    VECTOR(int32_t, 8) l_1133 = (VECTOR(int32_t, 8))(0x3E1EC600L, (VECTOR(int32_t, 4))(0x3E1EC600L, (VECTOR(int32_t, 2))(0x3E1EC600L, 0L), 0L), 0L, 0x3E1EC600L, 0L);
    VECTOR(int32_t, 2) l_1135 = (VECTOR(int32_t, 2))(0x7B99C786L, 2L);
    int32_t *l_1137 = (void*)0;
    VECTOR(uint8_t, 4) l_1162 = (VECTOR(uint8_t, 4))(0x64L, (VECTOR(uint8_t, 2))(0x64L, 0x1AL), 0x1AL);
    VECTOR(int8_t, 2) l_1166 = (VECTOR(int8_t, 2))(0x32L, 0L);
    uint8_t *l_1167 = (void*)0;
    uint8_t *l_1168 = &p_1171->g_438.f1;
    int16_t l_1169 = 4L;
    int8_t l_1170 = 0L;
    int i;
    for (i = 0; i < 4; i++)
        l_1102[i] = (void*)0;
    for (p_1171->g_5 = 21; (p_1171->g_5 <= 24); ++p_1171->g_5)
    { /* block id: 7 */
        if (p_1171->g_4)
            break;
    }
    l_10 = func_8(l_10, p_1171);
    l_1137 = l_10;
    l_1137 = func_14((((((safe_sub_func_int64_t_s_s((((VECTOR(uint16_t, 16))(65534UL, ((VECTOR(uint16_t, 2))(p_1171->g_1140.xy)), 0xC6F9L, 65535UL, 0xEDABL, p_1171->g_1124.s3, 0UL, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(1UL, 0UL, 65535UL, (safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(p_1171->g_1140.y, (safe_rshift_func_uint16_t_u_s((((safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 4))((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((p_1171->g_389.s2 ^= ((safe_mod_func_int64_t_s_s(((((safe_mod_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((-1L) ^ ((((((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 8))(l_1162.zxyzxxxx))))).s5 > (((VECTOR(uint32_t, 8))(4294967291UL, 1UL, 0UL, ((VECTOR(uint32_t, 4))(p_1171->g_1163.xyxx)).z, (((((*l_10) , (((*l_10) = (safe_sub_func_int8_t_s_s(((3L <= p_1171->g_973.s2) , (((*l_1137) , (*l_1137)) , 0x43L)), p_1171->g_701.sc))) , p_1171->g_1039.w)) , p_1171->g_500.s3) || (*l_1137)) > p_1171->g_965.w), 0x656518FBL, 0x4245549FL, 0xD91A8FF3L)).s5 && p_1171->g_364.x)) && (*l_10)) , (void*)0) == &l_1099)), l_1135.y)), 0x62A61CC7A9E1924CL)) | 0x51L) | l_1166.y) == p_1171->g_1123.s6), p_1171->g_973.s3)) == p_1171->g_430)), p_1171->g_182)), l_1169)) != p_1171->g_693.s3) | l_1162.w))), p_1171->g_699.s4)), ((VECTOR(int16_t, 2))(0L)), 0x624CL)).w, p_1171->g_150)) ^ p_1171->g_968.x) && p_1171->g_502.s7), 12)))), p_1171->g_462.x)), 1UL, 0UL, GROUP_DIVERGE(1, 1), ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 4))(0UL)), 5UL, 0UL, 0UL)).odd)))).sd <= 0L), p_1171->g_484.sc)) == p_1171->g_502.s7) && 0x3449015AFE289B36L) <= p_1171->g_501.y) && p_1171->g_185), p_1171);
    return l_1170;
}


/* ------------------------------------------ */
/* 
 * reads : p_1171->g_3 p_1171->g_140 p_1171->g_144 p_1171->g_5 p_1171->g_149 p_1171->g_150 p_1171->g_comm_values p_1171->g_174 p_1171->g_155 p_1171->l_comm_values p_1171->g_185 p_1171->g_184 p_1171->g_220 p_1171->g_234 p_1171->g_182 p_1171->g_258 p_1171->g_145 p_1171->g_214 p_1171->g_261 p_1171->g_364 p_1171->g_426 p_1171->g_428 p_1171->g_430 p_1171->g_432 p_1171->g_259 p_1171->g_389 p_1171->g_484 p_1171->g_438.f0 p_1171->g_455 p_1171->g_535 p_1171->g_502 p_1171->g_417 p_1171->g_621 p_1171->g_504 p_1171->g_682 p_1171->g_528 p_1171->g_2 p_1171->g_748 p_1171->g_896 p_1171->g_647 p_1171->g_922 p_1171->g_462 p_1171->g_700 p_1171->g_1024 p_1171->g_556 p_1171->g_1039 p_1171->g_1041 p_1171->g_965 p_1171->g_1068 p_1171->g_1084 p_1171->g_683 p_1171->g_501 p_1171->g_1093 p_1171->g_1094 p_1171->g_396 p_1171->g_698
 * writes: p_1171->g_5 p_1171->g_140 p_1171->g_145 p_1171->g_150 p_1171->g_155 p_1171->g_149 p_1171->g_182 p_1171->g_184 p_1171->g_185 p_1171->g_220 p_1171->g_261 p_1171->g_234 p_1171->g_335 p_1171->g_426 p_1171->g_428 p_1171->g_430 p_1171->g_432 p_1171->g_440 p_1171->g_396 p_1171->g_438.f0 p_1171->g_616 p_1171->g_621 p_1171->g_528 p_1171->g_892 p_1171->g_364 p_1171->g_896 p_1171->g_541 p_1171->g_389 p_1171->g_1024 p_1171->g_535 p_1171->g_965 p_1171->g_1084 p_1171->g_698
 */
int32_t * func_8(int32_t * p_9, struct S1 * p_1171)
{ /* block id: 10 */
    uint16_t l_13 = 65526UL;
    int32_t **l_1087 = &p_1171->g_145;
    int64_t *l_1092 = &p_1171->g_432;
    int32_t **l_1095[6] = {&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145};
    int32_t **l_1096 = &p_1171->g_145;
    int i;
    (*l_1087) = func_11(l_13, p_1171);
    p_1171->g_155.x |= (((~(safe_div_func_uint64_t_u_u((((safe_rshift_func_uint16_t_u_u(p_1171->g_comm_values[p_1171->tid], 15)) , l_1092) == l_1092), (l_13 , (p_1171->g_698.s6 ^= (((*p_9) > (((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_1171->g_1093.s07051665)).s66)), ((VECTOR(int32_t, 16))(p_1171->g_1094.sf719568265e757cc)).s3c))).yyyyyyyx)).s5 <= (p_1171->g_484.s3 , (l_1095[0] != (p_1171->g_438.f0 , l_1096)))) , p_1171->g_396) | FAKE_DIVERGE(p_1171->local_2_offset, get_local_id(2), 10))) <= p_1171->g_1093.s0)))))) , (*p_1171->g_258)) <= 0x36F6414050B87636L);
    return p_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_1171->g_3 p_1171->g_140 p_1171->g_144 p_1171->g_5 p_1171->g_149 p_1171->g_150 p_1171->g_comm_values p_1171->g_174 p_1171->g_155 p_1171->l_comm_values p_1171->g_185 p_1171->g_184 p_1171->g_220 p_1171->g_234 p_1171->g_182 p_1171->g_258 p_1171->g_145 p_1171->g_214 p_1171->g_261 p_1171->g_364 p_1171->g_426 p_1171->g_428 p_1171->g_430 p_1171->g_432 p_1171->g_259 p_1171->g_389 p_1171->g_484 p_1171->g_438.f0 p_1171->g_455 p_1171->g_535 p_1171->g_502 p_1171->g_417 p_1171->g_621 p_1171->g_504 p_1171->g_682 p_1171->g_528 p_1171->g_2 p_1171->g_748 p_1171->g_896 p_1171->g_647 p_1171->g_922 p_1171->g_462 p_1171->g_700 p_1171->g_1024 p_1171->g_556 p_1171->g_1039 p_1171->g_1041 p_1171->g_965 p_1171->g_1068 p_1171->g_1084 p_1171->g_683 p_1171->g_501
 * writes: p_1171->g_5 p_1171->g_140 p_1171->g_145 p_1171->g_150 p_1171->g_155 p_1171->g_149 p_1171->g_182 p_1171->g_184 p_1171->g_185 p_1171->g_220 p_1171->g_261 p_1171->g_234 p_1171->g_335 p_1171->g_426 p_1171->g_428 p_1171->g_430 p_1171->g_432 p_1171->g_440 p_1171->g_396 p_1171->g_438.f0 p_1171->g_616 p_1171->g_621 p_1171->g_528 p_1171->g_892 p_1171->g_364 p_1171->g_896 p_1171->g_541 p_1171->g_389 p_1171->g_1024 p_1171->g_535 p_1171->g_965 p_1171->g_1084
 */
int32_t * func_11(uint32_t  p_12, struct S1 * p_1171)
{ /* block id: 11 */
    int32_t *l_1027[6][9] = {{(void*)0,&p_1171->g_5,(void*)0,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,(void*)0,&p_1171->g_5,(void*)0},{(void*)0,&p_1171->g_5,(void*)0,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,(void*)0,&p_1171->g_5,(void*)0},{(void*)0,&p_1171->g_5,(void*)0,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,(void*)0,&p_1171->g_5,(void*)0},{(void*)0,&p_1171->g_5,(void*)0,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,(void*)0,&p_1171->g_5,(void*)0},{(void*)0,&p_1171->g_5,(void*)0,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,(void*)0,&p_1171->g_5,(void*)0},{(void*)0,&p_1171->g_5,(void*)0,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,(void*)0,&p_1171->g_5,(void*)0}};
    uint64_t *l_1034 = (void*)0;
    int8_t *l_1045 = (void*)0;
    union U0 **l_1080 = (void*)0;
    int i, j;
    if ((1L != ((void*)0 == &p_1171->g_5)))
    { /* block id: 12 */
        int64_t l_16[1];
        int32_t **l_1025 = (void*)0;
        int32_t **l_1026[3][10][2] = {{{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145}},{{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145}},{{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145}}};
        VECTOR(int64_t, 8) l_1040 = (VECTOR(int64_t, 8))(0x6C11C5D8B55BE8B1L, (VECTOR(int64_t, 4))(0x6C11C5D8B55BE8B1L, (VECTOR(int64_t, 2))(0x6C11C5D8B55BE8B1L, 4L), 4L), 4L, 0x6C11C5D8B55BE8B1L, 4L);
        int32_t *l_1052[4][4][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_16[i] = (-7L);
        l_1027[1][3] = func_14(l_16[0], p_1171);
        for (p_1171->g_182 = 0; (p_1171->g_182 < (-2)); p_1171->g_182--)
        { /* block id: 511 */
            int32_t *l_1030 = &p_1171->g_1024;
            int32_t *l_1031 = &p_1171->g_150;
            uint8_t *l_1042[8][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            uint8_t *l_1044 = (void*)0;
            uint8_t **l_1043 = &l_1044;
            int8_t *l_1046 = &p_1171->g_220[7][5][0];
            int64_t *l_1047 = (void*)0;
            int64_t *l_1048[10][6] = {{(void*)0,(void*)0,(void*)0,&p_1171->g_396,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1171->g_396,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1171->g_396,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1171->g_396,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1171->g_396,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1171->g_396,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1171->g_396,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1171->g_396,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1171->g_396,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&p_1171->g_396,(void*)0,(void*)0}};
            uint32_t *l_1049 = (void*)0;
            int i, j;
            l_1031 = l_1030;
            (*l_1031) = (safe_sub_func_int32_t_s_s((~(p_1171->g_3 , p_12)), ((l_1034 == (void*)0) ^ (p_1171->g_556.s0 | (safe_add_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((((p_1171->g_535.s4 = ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 4))(p_1171->g_1039.zxyz)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 4))(l_1040.s6210)), ((VECTOR(int64_t, 4))(0x02331D04BDB05A56L, 1L, 0x2B80C87B3B8701D8L, 0x36549EEE7669BB63L))))), ((((p_1171->g_1041 == ((*l_1043) = (l_1042[4][3] = p_1171->g_1041))) < 9L) , l_1045) == l_1046), p_1171->g_364.y, 1L, 0x451CBE561DF5DC86L, 0x3829E9315AF21EBAL, ((VECTOR(int64_t, 2))(4L)), 0x79E585CCE262305CL, 0x728BFFA05578BD18L, 0x28CE7A556D0AD9A3L, 0x4F5E2768101180FDL, 0x61D8F7749B23760EL)).s449e))).w) , p_12) != 0xE454641EL), 0x6DBB947BE076404EL)) != p_1171->g_700.y), 0x5605L))))));
            l_1027[1][3] = func_120(func_132(l_1030, p_1171), (++p_1171->g_965.x), p_1171);
        }
        l_1052[3][0][2] = func_14(p_12, p_1171);
    }
    else
    { /* block id: 521 */
        uint32_t *l_1061 = &p_1171->g_426[2][1][4];
        union U0 ***l_1077 = (void*)0;
        union U0 ***l_1078 = (void*)0;
        union U0 **l_1079 = &p_1171->g_440[4];
        int32_t l_1081 = 4L;
        int16_t *l_1082 = &p_1171->g_185;
        uint32_t *l_1083[2];
        int32_t l_1085 = (-1L);
        int i;
        for (i = 0; i < 2; i++)
            l_1083[i] = &p_1171->g_1084[0][5];
        (*p_1171->g_145) |= (safe_mod_func_int32_t_s_s(5L, (safe_rshift_func_int16_t_s_s((p_1171->g_621.s2 <= (((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((((*l_1061) &= p_1171->g_comm_values[p_1171->tid]) , ((((safe_sub_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((((void*)0 == l_1034) >= GROUP_DIVERGE(1, 1)), (safe_div_func_int16_t_s_s((p_12 > ((VECTOR(int32_t, 4))(p_1171->g_1068.yywz)).z), (safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((p_1171->g_1084[0][5] ^= ((*l_1061) = (0x516EE6FAL & (safe_mul_func_int16_t_s_s(((*l_1082) = (l_1081 = (safe_div_func_uint8_t_u_u(((p_1171->g_455.s7 , (l_1079 = &p_1171->g_440[4])) != l_1080), p_12)))), (-6L)))))) , 0x08L), 3)), p_1171->g_683.w)))))), p_12)) , (void*)0) != (void*)0) | p_1171->g_501.y)), 1L)), p_12)) ^ p_1171->g_621.s5) < GROUP_DIVERGE(2, 1))), l_1085))));
    }
    return l_1027[1][3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1171->g_3 p_1171->g_140 p_1171->g_144 p_1171->g_5 p_1171->g_149 p_1171->g_150 p_1171->g_comm_values p_1171->g_174 p_1171->g_155 p_1171->l_comm_values p_1171->g_185 p_1171->g_184 p_1171->g_220 p_1171->g_234 p_1171->g_182 p_1171->g_258 p_1171->g_145 p_1171->g_214 p_1171->g_261 p_1171->g_364 p_1171->g_426 p_1171->g_428 p_1171->g_430 p_1171->g_432 p_1171->g_259 p_1171->g_389 p_1171->g_484 p_1171->g_438.f0 p_1171->g_455 p_1171->g_535 p_1171->g_502 p_1171->g_417 p_1171->g_621 p_1171->g_504 p_1171->g_682 p_1171->g_528 p_1171->g_2 p_1171->g_748 p_1171->g_896 p_1171->g_647 p_1171->g_922 p_1171->g_462 p_1171->g_700 p_1171->g_1024
 * writes: p_1171->g_5 p_1171->g_140 p_1171->g_145 p_1171->g_150 p_1171->g_155 p_1171->g_149 p_1171->g_182 p_1171->g_184 p_1171->g_185 p_1171->g_220 p_1171->g_261 p_1171->g_234 p_1171->g_335 p_1171->g_426 p_1171->g_428 p_1171->g_430 p_1171->g_432 p_1171->g_440 p_1171->g_396 p_1171->g_438.f0 p_1171->g_616 p_1171->g_621 p_1171->g_528 p_1171->g_892 p_1171->g_364 p_1171->g_896 p_1171->g_541 p_1171->g_389 p_1171->g_1024
 */
int32_t * func_14(int8_t  p_15, struct S1 * p_1171)
{ /* block id: 13 */
    int32_t *l_22 = (void*)0;
    int32_t *l_1023 = &p_1171->g_1024;
    (*l_1023) |= (safe_sub_func_int64_t_s_s((-1L), func_19(p_15, l_22, p_1171)));
    return l_1023;
}


/* ------------------------------------------ */
/* 
 * reads : p_1171->g_3 p_1171->g_140 p_1171->g_144 p_1171->g_5 p_1171->g_149 p_1171->g_150 p_1171->g_comm_values p_1171->g_174 p_1171->g_155 p_1171->l_comm_values p_1171->g_185 p_1171->g_184 p_1171->g_220 p_1171->g_234 p_1171->g_182 p_1171->g_258 p_1171->g_145 p_1171->g_214 p_1171->g_261 p_1171->g_364 p_1171->g_426 p_1171->g_428 p_1171->g_430 p_1171->g_432 p_1171->g_259 p_1171->g_389 p_1171->g_484 p_1171->g_438.f0 p_1171->g_455 p_1171->g_535 p_1171->g_502 p_1171->g_417 p_1171->g_621 p_1171->g_504 p_1171->g_682 p_1171->g_528 p_1171->g_2 p_1171->g_748 p_1171->g_896 p_1171->g_647 p_1171->g_922 p_1171->g_462 p_1171->g_700
 * writes: p_1171->g_5 p_1171->g_140 p_1171->g_145 p_1171->g_150 p_1171->g_155 p_1171->g_149 p_1171->g_182 p_1171->g_184 p_1171->g_185 p_1171->g_220 p_1171->g_261 p_1171->g_234 p_1171->g_335 p_1171->g_426 p_1171->g_428 p_1171->g_430 p_1171->g_432 p_1171->g_440 p_1171->g_396 p_1171->g_438.f0 p_1171->g_616 p_1171->g_621 p_1171->g_528 p_1171->g_892 p_1171->g_364 p_1171->g_896 p_1171->g_541 p_1171->g_389
 */
uint64_t  func_19(uint32_t  p_20, int32_t * p_21, struct S1 * p_1171)
{ /* block id: 14 */
    uint64_t l_131 = 18446744073709551610UL;
    union U0 l_148 = {0x0430C375L};
    int32_t ***l_188 = &p_1171->g_149;
    int32_t *l_610 = &p_1171->g_5;
    int32_t l_668 = (-1L);
    int64_t *l_735 = (void*)0;
    int32_t l_745[6] = {1L,1L,1L,1L,1L,1L};
    VECTOR(int8_t, 8) l_750 = (VECTOR(int8_t, 8))(0x7CL, (VECTOR(int8_t, 4))(0x7CL, (VECTOR(int8_t, 2))(0x7CL, (-1L)), (-1L)), (-1L), 0x7CL, (-1L));
    VECTOR(int16_t, 4) l_814 = (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x70A8L), 0x70A8L);
    int64_t *l_870 = &p_1171->g_430;
    int64_t **l_869 = &l_870;
    uint64_t l_928 = 0xD4A3A22D6A360AA4L;
    int32_t l_935 = (-1L);
    int16_t *l_977 = &p_1171->g_184[2][0][3];
    int32_t *****l_997 = &p_1171->g_978;
    int32_t ******l_996[1];
    int i;
    for (i = 0; i < 1; i++)
        l_996[i] = &l_997;
    for (p_20 = 27; (p_20 == 44); ++p_20)
    { /* block id: 17 */
        int16_t l_187 = 0L;
        int32_t l_189 = 0x2E987CD8L;
        int32_t *l_190[2][7] = {{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5}};
        union U0 l_612 = {0x48CF484DL};
        int8_t *l_613 = &p_1171->g_220[4][3][3];
        int8_t *l_614 = (void*)0;
        int8_t *l_615 = &p_1171->g_616;
        int8_t *l_622[6][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        VECTOR(int16_t, 2) l_632 = (VECTOR(int16_t, 2))(4L, (-1L));
        VECTOR(int16_t, 2) l_635 = (VECTOR(int16_t, 2))(2L, 7L);
        int64_t l_649[7][7] = {{0L,0x550612FEEED04222L,(-7L),0x0417E4B5A4EA8607L,0x550612FEEED04222L,0x0417E4B5A4EA8607L,(-7L)},{0L,0x550612FEEED04222L,(-7L),0x0417E4B5A4EA8607L,0x550612FEEED04222L,0x0417E4B5A4EA8607L,(-7L)},{0L,0x550612FEEED04222L,(-7L),0x0417E4B5A4EA8607L,0x550612FEEED04222L,0x0417E4B5A4EA8607L,(-7L)},{0L,0x550612FEEED04222L,(-7L),0x0417E4B5A4EA8607L,0x550612FEEED04222L,0x0417E4B5A4EA8607L,(-7L)},{0L,0x550612FEEED04222L,(-7L),0x0417E4B5A4EA8607L,0x550612FEEED04222L,0x0417E4B5A4EA8607L,(-7L)},{0L,0x550612FEEED04222L,(-7L),0x0417E4B5A4EA8607L,0x550612FEEED04222L,0x0417E4B5A4EA8607L,(-7L)},{0L,0x550612FEEED04222L,(-7L),0x0417E4B5A4EA8607L,0x550612FEEED04222L,0x0417E4B5A4EA8607L,(-7L)}};
        VECTOR(int64_t, 8) l_702 = (VECTOR(int64_t, 8))(0x17EBFECFFF69514CL, (VECTOR(int64_t, 4))(0x17EBFECFFF69514CL, (VECTOR(int64_t, 2))(0x17EBFECFFF69514CL, 0L), 0L), 0L, 0x17EBFECFFF69514CL, 0L);
        int64_t l_739 = 0x76C42C930FD06723L;
        int32_t l_742 = (-9L);
        int32_t l_746[6][6] = {{0L,(-7L),0x09E2BC05L,0x4494B25EL,0x09E2BC05L,(-7L)},{0L,(-7L),0x09E2BC05L,0x4494B25EL,0x09E2BC05L,(-7L)},{0L,(-7L),0x09E2BC05L,0x4494B25EL,0x09E2BC05L,(-7L)},{0L,(-7L),0x09E2BC05L,0x4494B25EL,0x09E2BC05L,(-7L)},{0L,(-7L),0x09E2BC05L,0x4494B25EL,0x09E2BC05L,(-7L)},{0L,(-7L),0x09E2BC05L,0x4494B25EL,0x09E2BC05L,(-7L)}};
        int8_t l_751 = (-6L);
        int64_t l_752 = 0x0BD43A7A08A33A8DL;
        int32_t ***l_810 = &p_1171->g_149;
        int32_t ****l_825 = &l_810;
        int32_t *****l_824[3];
        uint8_t l_879 = 0x5DL;
        int32_t *****l_887 = &l_825;
        VECTOR(int32_t, 8) l_921 = (VECTOR(int32_t, 8))(0x4EBD676EL, (VECTOR(int32_t, 4))(0x4EBD676EL, (VECTOR(int32_t, 2))(0x4EBD676EL, 1L), 1L), 1L, 0x4EBD676EL, 1L);
        uint64_t l_947[2];
        union U0 *l_1010 = &l_612;
        union U0 **l_1011 = (void*)0;
        union U0 **l_1012 = &p_1171->g_440[0];
        VECTOR(int32_t, 4) l_1015 = (VECTOR(int32_t, 4))(0x1100ECC5L, (VECTOR(int32_t, 2))(0x1100ECC5L, 4L), 4L);
        int64_t *l_1018 = (void*)0;
        int64_t *l_1019 = (void*)0;
        int64_t *l_1020 = (void*)0;
        int64_t *l_1021 = &l_752;
        int8_t l_1022 = 1L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_824[i] = &l_825;
        for (i = 0; i < 2; i++)
            l_947[i] = 8UL;
        for (p_1171->g_5 = 0; (p_1171->g_5 < 26); p_1171->g_5++)
        { /* block id: 20 */
            if ((atomic_inc(&p_1171->l_atomic_input[3]) == 3))
            { /* block id: 22 */
                int64_t l_27 = (-4L);
                int64_t l_28 = 1L;
                uint8_t l_29[7][4] = {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}};
                int16_t l_30 = 0x3B8CL;
                int16_t l_31 = 7L;
                VECTOR(int32_t, 4) l_118 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0L), 0L);
                uint32_t l_119[2][5] = {{6UL,6UL,6UL,6UL,6UL},{6UL,6UL,6UL,6UL,6UL}};
                int i, j;
                if ((l_31 = (l_27 , (FAKE_DIVERGE(p_1171->group_0_offset, get_group_id(0), 10) , ((l_29[1][1] = l_28) , l_30)))))
                { /* block id: 25 */
                    VECTOR(int32_t, 4) l_32 = (VECTOR(int32_t, 4))(0x5D3ED23CL, (VECTOR(int32_t, 2))(0x5D3ED23CL, 0x5058BBE5L), 0x5058BBE5L);
                    VECTOR(int32_t, 4) l_33 = (VECTOR(int32_t, 4))(0x4D71B36CL, (VECTOR(int32_t, 2))(0x4D71B36CL, (-2L)), (-2L));
                    uint8_t l_34 = 0x15L;
                    VECTOR(int32_t, 16) l_35 = (VECTOR(int32_t, 16))(0x085A1EC8L, (VECTOR(int32_t, 4))(0x085A1EC8L, (VECTOR(int32_t, 2))(0x085A1EC8L, 3L), 3L), 3L, 0x085A1EC8L, 3L, (VECTOR(int32_t, 2))(0x085A1EC8L, 3L), (VECTOR(int32_t, 2))(0x085A1EC8L, 3L), 0x085A1EC8L, 3L, 0x085A1EC8L, 3L);
                    int64_t l_36 = 0x2F520A048C84060AL;
                    uint32_t l_37 = 4294967286UL;
                    union U0 l_38 = {0x122E7DFEL};
                    union U0 l_39 = {0x7E942FAFL};
                    union U0 l_40 = {-4L};
                    union U0 l_41 = {-1L};
                    VECTOR(int16_t, 16) l_42 = (VECTOR(int16_t, 16))(0x435DL, (VECTOR(int16_t, 4))(0x435DL, (VECTOR(int16_t, 2))(0x435DL, 0x231DL), 0x231DL), 0x231DL, 0x435DL, 0x231DL, (VECTOR(int16_t, 2))(0x435DL, 0x231DL), (VECTOR(int16_t, 2))(0x435DL, 0x231DL), 0x435DL, 0x231DL, 0x435DL, 0x231DL);
                    VECTOR(uint16_t, 8) l_43 = (VECTOR(uint16_t, 8))(0xD5DDL, (VECTOR(uint16_t, 4))(0xD5DDL, (VECTOR(uint16_t, 2))(0xD5DDL, 65535UL), 65535UL), 65535UL, 0xD5DDL, 65535UL);
                    VECTOR(uint16_t, 16) l_44 = (VECTOR(uint16_t, 16))(0xE934L, (VECTOR(uint16_t, 4))(0xE934L, (VECTOR(uint16_t, 2))(0xE934L, 0x64A0L), 0x64A0L), 0x64A0L, 0xE934L, 0x64A0L, (VECTOR(uint16_t, 2))(0xE934L, 0x64A0L), (VECTOR(uint16_t, 2))(0xE934L, 0x64A0L), 0xE934L, 0x64A0L, 0xE934L, 0x64A0L);
                    uint64_t l_45 = 0xEC7E1EFC39FA237FL;
                    VECTOR(int32_t, 8) l_46 = (VECTOR(int32_t, 8))(0x77C19C50L, (VECTOR(int32_t, 4))(0x77C19C50L, (VECTOR(int32_t, 2))(0x77C19C50L, 2L), 2L), 2L, 0x77C19C50L, 2L);
                    int16_t l_47 = 0x6AD9L;
                    int8_t l_48 = 0x6BL;
                    uint32_t l_49 = 0x2E3BD65BL;
                    VECTOR(int32_t, 4) l_50 = (VECTOR(int32_t, 4))(0x627DBD1BL, (VECTOR(int32_t, 2))(0x627DBD1BL, 6L), 6L);
                    int64_t l_51[1][2];
                    uint32_t l_52 = 0xB8AAA841L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_51[i][j] = 0x53F58F29ADBE56F6L;
                    }
                    l_52 = ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(l_32.xz)).yxyyxyxyyyyyxxyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(l_33.zwzzwwyw)).s3303137537016065, ((VECTOR(int32_t, 2))(0x12764969L, (-1L))).yyyyyxxxxyyyyyyy)))))).s8d)), (-9L), 0L)).xzywyywz)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((l_29[1][1] = l_34) , ((VECTOR(int32_t, 16))(l_35.s1450187e526954eb)).s8), l_36, (l_37 , ((l_41 = (l_40 = (l_39 = l_38))) , ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(l_42.s57)), ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_43.s54)).yxyy)).xzxzzzyzwxyyxxzx)).s33))))))).xxxxxxyx, ((VECTOR(uint16_t, 8))(l_44.sf0c0ed6d))))).s23))).hi)), 0L, 0L, 0x0E5EFB48L, ((VECTOR(int32_t, 2))(1L, 0L)).even, (l_45 , ((VECTOR(int32_t, 4))(l_46.s2130)).y), (l_49 ^= (l_48 &= l_47)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_50.yyyyxxyx)).s75)))).xxxy)), l_51[0][0], 0L, (-4L))).sf4)).yyxxxxyy))))).s0316071531724664))).s3;
                }
                else
                { /* block id: 33 */
                    int8_t l_53[1];
                    uint32_t l_82 = 0UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_53[i] = 0L;
                    if (l_53[0])
                    { /* block id: 34 */
                        int32_t l_55 = 0x26181089L;
                        int32_t *l_54[2];
                        int32_t *l_56 = &l_55;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_54[i] = &l_55;
                        l_54[0] = (l_56 = l_54[1]);
                    }
                    else
                    { /* block id: 37 */
                        int32_t l_57 = 4L;
                        union U0 l_58 = {-1L};
                        VECTOR(uint8_t, 16) l_59 = (VECTOR(uint8_t, 16))(0xD3L, (VECTOR(uint8_t, 4))(0xD3L, (VECTOR(uint8_t, 2))(0xD3L, 0xCCL), 0xCCL), 0xCCL, 0xD3L, 0xCCL, (VECTOR(uint8_t, 2))(0xD3L, 0xCCL), (VECTOR(uint8_t, 2))(0xD3L, 0xCCL), 0xD3L, 0xCCL, 0xD3L, 0xCCL);
                        VECTOR(uint8_t, 4) l_60 = (VECTOR(uint8_t, 4))(0xA5L, (VECTOR(uint8_t, 2))(0xA5L, 1UL), 1UL);
                        VECTOR(uint8_t, 4) l_61 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0UL), 0UL);
                        VECTOR(uint8_t, 4) l_62 = (VECTOR(uint8_t, 4))(0xD5L, (VECTOR(uint8_t, 2))(0xD5L, 0xD8L), 0xD8L);
                        VECTOR(uint8_t, 4) l_63 = (VECTOR(uint8_t, 4))(0x55L, (VECTOR(uint8_t, 2))(0x55L, 254UL), 254UL);
                        VECTOR(uint8_t, 2) l_64 = (VECTOR(uint8_t, 2))(0x93L, 0x0BL);
                        uint16_t l_65 = 65532UL;
                        VECTOR(uint8_t, 8) l_66 = (VECTOR(uint8_t, 8))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 252UL), 252UL), 252UL, 6UL, 252UL);
                        int64_t l_67 = 0L;
                        uint32_t l_68 = 1UL;
                        VECTOR(uint8_t, 16) l_69 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x8BL), 0x8BL), 0x8BL, 0UL, 0x8BL, (VECTOR(uint8_t, 2))(0UL, 0x8BL), (VECTOR(uint8_t, 2))(0UL, 0x8BL), 0UL, 0x8BL, 0UL, 0x8BL);
                        uint8_t l_70 = 1UL;
                        VECTOR(uint8_t, 16) l_71 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 4UL), 4UL), 4UL, 255UL, 4UL, (VECTOR(uint8_t, 2))(255UL, 4UL), (VECTOR(uint8_t, 2))(255UL, 4UL), 255UL, 4UL, 255UL, 4UL);
                        uint64_t l_74 = 0x766B1C03A75F9311L;
                        int8_t l_75[4][4][2] = {{{0x54L,0x15L},{0x54L,0x15L},{0x54L,0x15L},{0x54L,0x15L}},{{0x54L,0x15L},{0x54L,0x15L},{0x54L,0x15L},{0x54L,0x15L}},{{0x54L,0x15L},{0x54L,0x15L},{0x54L,0x15L},{0x54L,0x15L}},{{0x54L,0x15L},{0x54L,0x15L},{0x54L,0x15L},{0x54L,0x15L}}};
                        int64_t l_76 = 5L;
                        int32_t l_77[1][7] = {{0L,(-1L),0L,0L,(-1L),0L,0L}};
                        int32_t l_78 = 0x2FB16363L;
                        uint32_t l_79 = 0x68C91577L;
                        VECTOR(int32_t, 8) l_80 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L);
                        uint32_t l_81 = 1UL;
                        int i, j, k;
                        l_79 &= ((l_57 , l_58) , ((((VECTOR(uint8_t, 8))(255UL, 0x5BL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(l_59.s827221bd)).s30, ((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 2))(0x34L, 0xFCL)).xyxxxxxxxyyxxxyy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_60.zwwzzwwx)), 4UL, ((VECTOR(uint8_t, 2))(0x6AL, 0xD3L)), ((VECTOR(uint8_t, 2))(l_61.wy)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_62.ww)).xyyxxyyy)).s70)), 0UL)), ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_63.wz)), 0xF4L, 0x01L)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_64.yyxyyyxyyyyxxyyx)).sca)).yxxy, ((VECTOR(uint8_t, 4))(GROUP_DIVERGE(1, 1), (l_65 , 0UL), 0x54L, 0x11L))))).zxzxxxyxxwyyxwyx, ((VECTOR(uint8_t, 8))(l_66.s55727777)).s3577106547714756)))))).lo)).s1412031255611623, (uint8_t)((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_67, 2UL, 0xBAL, l_68, 0x62L, 2UL, 249UL, 0xB7L)).s56)), ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x5AL, 0xC9L)).xyxyyyyx)).s7326333674613264))).se2c6, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(253UL, 1UL)), ((VECTOR(uint8_t, 16))(l_69.sac2835e52a12e219)).s83))), 1UL, 253UL))))), ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(254UL, 246UL)), 0UL, 0xC8L)).wyxwzzxx, (uint8_t)l_70))).hi, ((VECTOR(uint8_t, 8))(l_71.s86fcafa2)).even))).even))).xxxxyyyxxyxxyyyx, ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 4))((l_29[3][3]++), ((l_76 |= (l_75[0][2][1] = l_74)) , l_77[0][1]), 0x8CL, 3UL)).odd, ((VECTOR(uint8_t, 2))(0x3EL))))).xxyxxxyx, ((VECTOR(uint8_t, 8))(0xFCL))))).s4462711252344306))).even)).s53)).yyyxxxxxyyxyyxyy)).sd, (uint8_t)l_78))).s16))).xxxyxxyx)).s5, 6UL, ((VECTOR(uint8_t, 2))(247UL)), 1UL, 0x5BL)).s7 , FAKE_DIVERGE(p_1171->local_0_offset, get_local_id(0), 10)) , 0x2BD61F34L));
                        l_81 &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_80.s71043217)).s2661565201142236)).sa;
                    }
                    if (l_82)
                    { /* block id: 44 */
                        int8_t l_83 = 0x37L;
                        l_83 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x48F33B60L, 0L)).xyyyyxyyyyxyyyyx)).s8;
                    }
                    else
                    { /* block id: 46 */
                        VECTOR(int32_t, 16) l_84 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2C331A2DL), 0x2C331A2DL), 0x2C331A2DL, (-1L), 0x2C331A2DL, (VECTOR(int32_t, 2))((-1L), 0x2C331A2DL), (VECTOR(int32_t, 2))((-1L), 0x2C331A2DL), (-1L), 0x2C331A2DL, (-1L), 0x2C331A2DL);
                        VECTOR(int32_t, 8) l_85 = (VECTOR(int32_t, 8))(0x20F1C71BL, (VECTOR(int32_t, 4))(0x20F1C71BL, (VECTOR(int32_t, 2))(0x20F1C71BL, 0x2A555199L), 0x2A555199L), 0x2A555199L, 0x20F1C71BL, 0x2A555199L);
                        VECTOR(int32_t, 4) l_86 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5416565EL), 0x5416565EL);
                        VECTOR(int32_t, 8) l_87 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, (-1L)), (-1L)), (-1L), 7L, (-1L));
                        VECTOR(int32_t, 16) l_88 = (VECTOR(int32_t, 16))(0x586B4661L, (VECTOR(int32_t, 4))(0x586B4661L, (VECTOR(int32_t, 2))(0x586B4661L, 0x50B285FAL), 0x50B285FAL), 0x50B285FAL, 0x586B4661L, 0x50B285FAL, (VECTOR(int32_t, 2))(0x586B4661L, 0x50B285FAL), (VECTOR(int32_t, 2))(0x586B4661L, 0x50B285FAL), 0x586B4661L, 0x50B285FAL, 0x586B4661L, 0x50B285FAL);
                        int32_t l_89 = 0L;
                        int32_t l_90 = 0x50B6939AL;
                        uint32_t l_91 = 0xDAB5352CL;
                        int32_t l_92 = 0L;
                        union U0 l_93 = {0x7D8232EDL};
                        int32_t l_94 = 8L;
                        uint32_t l_95 = 0xB37EAFC3L;
                        int i;
                        l_92 = (l_84.s4 = (l_91 = (l_90 ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(4L, ((VECTOR(int32_t, 8))(l_84.s7867e7c5)), 0x41C05FA5L, ((VECTOR(int32_t, 4))(l_85.s5465)), 0x6E60EB54L, 5L)), (int32_t)((VECTOR(int32_t, 8))(l_86.xwzxwzwy)).s7))).seb66, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(l_87.s3466)).zzxywwzw, ((VECTOR(int32_t, 4))(l_88.s8931)).wzxwxyyx))).odd))).xzwxxxzw, ((VECTOR(int32_t, 4))(0x3EE32CE8L, l_89, 6L, 0x11EE9290L)).wxxyyyxz))).odd)).w)));
                        l_95 |= (l_93 , l_94);
                    }
                }
                for (l_29[3][1] = 23; (l_29[3][1] < 7); l_29[3][1] = safe_sub_func_uint16_t_u_u(l_29[3][1], 2))
                { /* block id: 56 */
                    int8_t l_98 = 0L;
                    int64_t l_115 = 0x45D7662A5DBB92B3L;
                    int64_t l_116[9] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
                    int64_t l_117 = 0x39C2E694C051F803L;
                    int i;
                    if (l_98)
                    { /* block id: 57 */
                        uint16_t l_99 = 65535UL;
                        l_99--;
                    }
                    else
                    { /* block id: 59 */
                        uint8_t l_102 = 0UL;
                        uint32_t l_103 = 4294967295UL;
                        uint8_t l_104 = 0x2CL;
                        uint32_t l_105 = 0x3C26F71AL;
                        l_105 = (l_104 = ((l_102 = ((VECTOR(int32_t, 2))(0L, 0L)).even) , (l_103 , 1L)));
                    }
                    for (l_98 = 23; (l_98 < 15); l_98 = safe_sub_func_int32_t_s_s(l_98, 4))
                    { /* block id: 66 */
                        int8_t l_108[10][10][2] = {{{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L}},{{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L}},{{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L}},{{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L}},{{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L}},{{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L}},{{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L}},{{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L}},{{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L}},{{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L},{(-8L),1L}}};
                        int16_t l_109 = 4L;
                        int16_t l_110 = 0x0A83L;
                        int32_t l_112 = 0x6E7EF8C8L;
                        int32_t *l_111 = &l_112;
                        uint8_t l_113 = 0x58L;
                        int32_t l_114 = 0x715932AAL;
                        int i, j, k;
                        l_110 ^= (l_109 ^= l_108[6][7][1]);
                        l_111 = (void*)0;
                        l_114 |= l_113;
                    }
                    l_117 ^= (l_116[6] = l_115);
                }
                l_119[1][2] |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_118.yxyxxyyy)).s3151152154472364)).sf;
                unsigned int result = 0;
                result += l_27;
                result += l_28;
                int l_29_i0, l_29_i1;
                for (l_29_i0 = 0; l_29_i0 < 7; l_29_i0++) {
                    for (l_29_i1 = 0; l_29_i1 < 4; l_29_i1++) {
                        result += l_29[l_29_i0][l_29_i1];
                    }
                }
                result += l_30;
                result += l_31;
                result += l_118.w;
                result += l_118.z;
                result += l_118.y;
                result += l_118.x;
                int l_119_i0, l_119_i1;
                for (l_119_i0 = 0; l_119_i0 < 2; l_119_i0++) {
                    for (l_119_i1 = 0; l_119_i1 < 5; l_119_i1++) {
                        result += l_119[l_119_i0][l_119_i1];
                    }
                }
                atomic_add(&p_1171->l_special_values[3], result);
            }
            else
            { /* block id: 76 */
                (1 + 1);
            }
            if (p_1171->g_3)
                continue;
        }
        l_190[0][1] = (p_21 = func_120(func_123(((((l_189 = ((func_128(l_131, (+l_131), p_1171) & func_146((l_148 , p_1171->g_149), p_1171)) && ((p_20 , &p_1171->g_149) == ((((p_20 == p_1171->g_184[8][2][0]) != l_187) , p_1171->g_3) , l_188)))) | l_187) , 0x1AD2L) | p_1171->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]), p_20, l_190[0][1], p_20, p_1171), p_1171->g_364.y, p_1171));
        if ((((((safe_mod_func_int64_t_s_s((((safe_unary_minus_func_int16_t_s(((l_610 != (void*)0) != ((&p_1171->g_428 == &p_1171->g_335) ^ ((safe_unary_minus_func_int8_t_s((l_612 , ((*l_613) ^= p_1171->g_535.s6)))) || ((*l_615) = ((VECTOR(int8_t, 8))(p_20, p_1171->g_502.s5, 0x19L, 0x16L, (-1L), ((*l_613) = ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))((-2L), 0x32L)).yyyy, ((VECTOR(int8_t, 2))(1L, 0x0DL)).yyxy))).z), 0x79L, 0x3EL)).s7)))))) >= (safe_add_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(((*l_610) = ((VECTOR(int8_t, 16))(p_1171->g_621.s5242431337556131)).s1), (251UL != 5L))) | 0x1BL), p_20))) ^ p_20), p_1171->g_455.s1)) & p_1171->g_234) | p_20) | p_20) <= p_20))
        { /* block id: 314 */
            union U0 l_645 = {0x4939368FL};
            int32_t l_648 = 0x2D3B74D0L;
            int32_t l_653 = 0x09707FE5L;
            VECTOR(uint16_t, 16) l_660 = (VECTOR(uint16_t, 16))(0x0E36L, (VECTOR(uint16_t, 4))(0x0E36L, (VECTOR(uint16_t, 2))(0x0E36L, 5UL), 5UL), 5UL, 0x0E36L, 5UL, (VECTOR(uint16_t, 2))(0x0E36L, 5UL), (VECTOR(uint16_t, 2))(0x0E36L, 5UL), 0x0E36L, 5UL, 0x0E36L, 5UL);
            int16_t *l_667 = &p_1171->g_184[2][0][3];
            VECTOR(uint8_t, 4) l_669 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x30L), 0x30L);
            int64_t *l_670 = (void*)0;
            int64_t *l_671 = &l_649[3][5];
            int64_t l_672 = (-1L);
            int i;
            for (l_187 = 0; (l_187 > (-4)); --l_187)
            { /* block id: 317 */
                int16_t *l_636 = (void*)0;
                int16_t *l_637 = &p_1171->g_184[2][0][3];
                VECTOR(int8_t, 4) l_638 = (VECTOR(int8_t, 4))(0x00L, (VECTOR(int8_t, 2))(0x00L, 0x25L), 0x25L);
                uint32_t *l_646 = (void*)0;
                int32_t l_650 = 0x3D4E5F5EL;
                uint32_t *l_651 = &p_1171->g_426[3][3][3];
                int16_t *l_652 = &p_1171->g_182;
                int i;
                l_653 ^= ((0x06B0L <= ((*l_652) = (((VECTOR(int64_t, 4))(p_1171->g_625.xywy)).x != (((((*l_651) = (safe_add_func_int16_t_s_s((~(l_650 = (safe_rshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_632.yxxxxyyy)).s7330434357045514)).s60, ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))((-1L), p_20, 0x4E70L, (-2L), (safe_lshift_func_uint8_t_u_s((p_20 , FAKE_DIVERGE(p_1171->group_1_offset, get_group_id(1), 10)), 0)), 0x7764L, ((VECTOR(int16_t, 2))(l_635.xy)), 0L, 0x0BDEL, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(0x495BL, 0x647AL)), (int16_t)(GROUP_DIVERGE(1, 1) || ((*l_637) = 0x2E63L))))))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_638.wxzy)), (safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((p_1171->g_501.x ^ (safe_mod_func_int64_t_s_s(((l_638.w ^ (+(l_645 , (l_648 &= p_1171->g_535.s2)))) && p_1171->g_426[0][6][2]), p_1171->g_438.f0))), 9)), p_1171->g_428)), (-1L), 0x69L, 0x04L)).s0 <= 1L), (-9L), (-1L), 1L)).hi)), 7L, 0x5640L)).s6b4a)), ((VECTOR(int16_t, 4))(0x1894L))))).odd))).xxxx)))).lo)).xxxy, ((VECTOR(uint16_t, 4))(0x83C3L)))))))), ((VECTOR(int32_t, 4))((-2L)))))), (int32_t)p_1171->g_150))).yxxxwzyy, ((VECTOR(uint32_t, 8))(4294967295UL))))).even, ((VECTOR(int64_t, 4))(0L))))).z, p_1171->g_502.s7)), l_649[3][5])))), p_20))) , p_1171->g_182) > 4L) & 0x03F2L)))) , (*p_21));
                if ((*p_21))
                    break;
            }
            (*p_21) = ((((*l_671) ^= ((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(p_1171->g_417.z, l_648)), (safe_mul_func_uint8_t_u_u((((((VECTOR(uint16_t, 2))(l_660.s6c)).even > p_20) <= (safe_add_func_uint8_t_u_u((((VECTOR(uint8_t, 4))(((safe_add_func_uint32_t_u_u(p_20, (l_668 = (p_1171->g_647.s2 ^= (safe_mul_func_int16_t_s_s(0x301DL, (p_20 <= ((*l_667) = p_20)))))))) && p_20), ((VECTOR(uint8_t, 2))(l_669.yw)), 6UL)).y || ((0xEBL < p_20) ^ 0x9CF1L)), FAKE_DIVERGE(p_1171->group_0_offset, get_group_id(0), 10)))) || p_20), p_20)))) >= (*p_21))) | l_672) | GROUP_DIVERGE(2, 1));
            for (l_148.f0 = 0; (l_148.f0 != (-25)); l_148.f0 = safe_sub_func_int16_t_s_s(l_148.f0, 6))
            { /* block id: 333 */
                int64_t l_677 = 0x6E54605D30FE7295L;
                VECTOR(int16_t, 8) l_681 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x0B83L), 0x0B83L), 0x0B83L, 0L, 0x0B83L);
                uint8_t *l_692[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                union U0 *l_710 = &l_612;
                union U0 **l_711 = &p_1171->g_440[2];
                int i;
                (*p_21) = (l_677 | (!((((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(p_1171->g_680.s05)).even, ((((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_681.s7210)), 0x4131L, 0x1A79L, (-1L), 0x7894L)).s6053404030550137)).even, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_1171->g_682.yx)))).xxxxxxyy, ((VECTOR(int16_t, 2))(p_1171->g_683.zz)).yxxyyxyy))).s7 < (safe_add_func_uint32_t_u_u((((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))((-3L), (l_669.w , (safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((*l_667) = l_681.s6), (safe_sub_func_int32_t_s_s(((((p_1171->g_504.s9 = GROUP_DIVERGE(2, 1)) <= (((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 2))(p_1171->g_693.s72)).yyxyyyxxxxxyyxyy, (uint64_t)(safe_div_func_int32_t_s_s((((!(((safe_rshift_func_int8_t_s_u(p_1171->g_428, 4)) , ((*l_615) = (p_1171->g_150 == ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 8))(p_1171->g_698.s47347775)), ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(p_1171->g_699.s5455)), ((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 2))(p_1171->g_700.xy)).yxyxxxyxxyxxyyyy, ((VECTOR(int64_t, 4))(2L, ((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(p_1171->g_701.sc38fae6c7625be92)))).sf2, ((VECTOR(int64_t, 4))(l_702.s5070)).odd))), 0x77E6F597F3835EDBL)).zwyywywxyxxywyxw))).hi))), ((VECTOR(int64_t, 2))(1L, 0x212C2A58ECDCBC6BL)), 0x67388B5604585A08L, 0x27091E7B634E986FL)).s8e9f, ((VECTOR(int64_t, 16))((safe_sub_func_int16_t_s_s(((p_1171->g_comm_values[p_1171->tid] || (safe_sub_func_int64_t_s_s(((safe_mul_func_int16_t_s_s(l_681.s6, ((safe_unary_minus_func_int16_t_s((((&p_1171->g_438 == ((*l_711) = l_710)) || p_1171->g_528.s9) == p_20))) | 0L))) || 7L), l_660.s5))) | (-1L)), p_1171->g_699.s0)), 1L, ((VECTOR(int64_t, 8))(0x7690C1FEA86431EFL)), 0x40BE31001334943EL, (-9L), 0x09CB54C99A131E43L, ((VECTOR(int64_t, 2))(0x314284E976A629B8L)), 1L)).s9142, ((VECTOR(int64_t, 4))(0x197BFEF5D744FBF7L))))).zxzzxzwx))).s43)).odd))) <= p_20)) & (*l_610)) , 1L), 0x07B01EA4L))))).sa == 1L)) | p_1171->g_698.s0) && p_1171->g_700.y), 0xEBB4AFAEL)))), p_1171->g_693.s0))), p_1171->g_261, (-1L), ((VECTOR(int16_t, 8))(0x6EAAL)), ((VECTOR(int16_t, 4))(0x066BL)))).sf2)).xxyy, ((VECTOR(int16_t, 4))(0x14E1L)), ((VECTOR(int16_t, 4))(0x3ADCL))))).z && p_20), p_1171->g_621.s1))) , 0x0C817106L))) , 0x5154L) ^ p_20) >= 18446744073709551615UL)));
            }
        }
        else
        { /* block id: 340 */
            uint32_t *l_714[3][10][3] = {{{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]}},{{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]}},{{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]},{&p_1171->g_426[3][3][3],(void*)0,&p_1171->g_426[2][4][4]}}};
            int16_t *l_732 = (void*)0;
            int16_t *l_733 = &p_1171->g_184[2][0][3];
            int32_t l_734[4][1][2];
            int64_t **l_736 = &l_735;
            uint8_t *l_737 = (void*)0;
            int32_t l_738 = 0L;
            int32_t ****l_813 = &l_188;
            int32_t *****l_827[2];
            uint64_t *l_925 = &l_131;
            uint64_t *l_927 = (void*)0;
            uint64_t **l_926 = &l_927;
            uint8_t *l_929 = (void*)0;
            int8_t l_941 = 8L;
            VECTOR(int64_t, 16) l_980 = (VECTOR(int64_t, 16))(0x0011E56923930DFDL, (VECTOR(int64_t, 4))(0x0011E56923930DFDL, (VECTOR(int64_t, 2))(0x0011E56923930DFDL, (-9L)), (-9L)), (-9L), 0x0011E56923930DFDL, (-9L), (VECTOR(int64_t, 2))(0x0011E56923930DFDL, (-9L)), (VECTOR(int64_t, 2))(0x0011E56923930DFDL, (-9L)), 0x0011E56923930DFDL, (-9L), 0x0011E56923930DFDL, (-9L));
            int32_t ******l_995 = &l_824[0];
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_734[i][j][k] = 2L;
                }
            }
            for (i = 0; i < 2; i++)
                l_827[i] = &l_825;
            if (((*p_21) = (safe_rshift_func_int8_t_s_u(((l_612 , (p_1171->g_426[2][5][2]--)) , (safe_lshift_func_int8_t_s_s((p_1171->g_621.s4 = ((*l_613) = (safe_rshift_func_int8_t_s_s(0x74L, 2)))), (safe_sub_func_uint32_t_u_u(FAKE_DIVERGE(p_1171->group_0_offset, get_group_id(0), 10), ((safe_unary_minus_func_int8_t_s(0x09L)) , ((safe_mod_func_uint32_t_u_u((safe_add_func_int64_t_s_s((((VECTOR(uint16_t, 2))(0x44F3L, 0xA765L)).hi & (((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((*l_733) = p_1171->g_504.s8), (l_734[3][0][1] &= 65535UL))), p_1171->g_682.z)) , (l_734[3][0][1] = ((l_148 , ((*l_736) = l_735)) != &l_649[3][5]))) <= p_1171->g_182)), l_738)), 0xDBE835C4L)) | 65529UL))))))), 1))))
            { /* block id: 349 */
                int16_t l_740 = (-1L);
                int32_t l_741 = 0x607FA9D1L;
                int32_t l_743 = 0x116F52D6L;
                int32_t l_744[6];
                int8_t l_747 = (-1L);
                int16_t l_749 = 0x08EFL;
                uint32_t l_753 = 0xF7174850L;
                int32_t ***l_808 = &p_1171->g_149;
                uint8_t l_815 = 0xFDL;
                int i;
                for (i = 0; i < 6; i++)
                    l_744[i] = 0x6DB568CEL;
                ++l_753;
                for (p_1171->g_396 = (-27); (p_1171->g_396 == 12); p_1171->g_396++)
                { /* block id: 353 */
                    uint32_t l_773 = 0x0F791B6AL;
                    int32_t l_776 = 0x3F93535FL;
                    int32_t *l_784 = &p_1171->g_150;
                    uint64_t *l_800 = (void*)0;
                    uint64_t *l_801 = &l_131;
                    int32_t ****l_809 = &l_808;
                    if ((atomic_inc(&p_1171->g_atomic_input[66 * get_linear_group_id() + 39]) == 3))
                    { /* block id: 355 */
                        int32_t l_758 = (-4L);
                        uint64_t l_759 = 1UL;
                        uint64_t l_760 = 0x5A3D0C8A7DC41BA2L;
                        int64_t l_763 = (-10L);
                        int32_t l_764 = 0L;
                        int16_t l_765 = 0x6E57L;
                        uint32_t l_766 = 7UL;
                        uint8_t l_767 = 0xD7L;
                        int32_t *l_768[9] = {&l_758,&l_758,&l_758,&l_758,&l_758,&l_758,&l_758,&l_758,&l_758};
                        int64_t l_769 = 0x4244FDA825871966L;
                        int64_t l_770 = (-4L);
                        int i;
                        l_759 = l_758;
                        l_760++;
                        l_768[4] = (((l_763 , l_764) , (l_767 |= (l_765 , l_766))) , l_768[4]);
                        l_770 = l_769;
                        unsigned int result = 0;
                        result += l_758;
                        result += l_759;
                        result += l_760;
                        result += l_763;
                        result += l_764;
                        result += l_765;
                        result += l_766;
                        result += l_767;
                        result += l_769;
                        result += l_770;
                        atomic_add(&p_1171->g_special_values[66 * get_linear_group_id() + 39], result);
                    }
                    else
                    { /* block id: 361 */
                        (1 + 1);
                    }
                    for (l_612.f2 = (-11); (l_612.f2 < 31); ++l_612.f2)
                    { /* block id: 366 */
                        int64_t *l_777 = &p_1171->g_430;
                        uint64_t *l_780[1];
                        int32_t *l_783 = &p_1171->g_541;
                        int32_t **l_785[2][3][5] = {{{&p_1171->g_145,&p_1171->g_145,(void*)0,(void*)0,&l_784},{&p_1171->g_145,&p_1171->g_145,(void*)0,(void*)0,&l_784},{&p_1171->g_145,&p_1171->g_145,(void*)0,(void*)0,&l_784}},{{&p_1171->g_145,&p_1171->g_145,(void*)0,(void*)0,&l_784},{&p_1171->g_145,&p_1171->g_145,(void*)0,(void*)0,&l_784},{&p_1171->g_145,&p_1171->g_145,(void*)0,(void*)0,&l_784}}};
                        uint32_t *l_790 = (void*)0;
                        uint32_t *l_791 = &l_753;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_780[i] = &l_131;
                        ++l_773;
                        l_784 = l_784;
                        if ((*p_21))
                            break;
                        l_745[1] |= ((p_1171->g_528.s6 &= ((((((VECTOR(uint64_t, 16))(0x9CC387AD42A5D46EL, ((VECTOR(uint64_t, 2))(0UL, 3UL)), (3UL && (safe_add_func_uint16_t_u_u(p_1171->g_2, (safe_sub_func_uint32_t_u_u((4294967292UL < ((*p_21) ^= ((&p_20 == (void*)0) | (&p_1171->g_149 == &p_1171->g_149)))), (++(*l_791))))))), p_20, ((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 2))((-3L), 0x0455CD33D2075FC0L)).xyxyyyxy, ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(0L, (-8L), (safe_sub_func_int32_t_s_s(((p_20 >= GROUP_DIVERGE(2, 1)) != (*p_21)), p_1171->g_680.s1)), 0x06988E91A044608BL, 0x1088B49FCCD606E7L, (-1L), (*p_1171->g_258), 5L, ((VECTOR(int64_t, 2))(0L)), (*p_1171->g_258), 0x367AC3B0E2E9BDA6L, 0x40701764576F749DL, 0x2544808F680AFEC4L, 0x01C523BE91FB16CFL, 1L)).s05, ((VECTOR(int64_t, 2))(1L))))).xyyxyyxy))), ((VECTOR(uint64_t, 2))(18446744073709551610UL)), 18446744073709551615UL)).s2 , 0L) && l_738) > p_1171->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]) <= 0xC1D08EFD9F1DE2E3L)) & p_20);
                    }
                    (*p_21) = (safe_lshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((*l_801)--), (((safe_add_func_int32_t_s_s((-1L), l_749)) >= ((((*l_809) = l_808) == (l_810 = l_810)) >= (&p_20 == l_190[1][4]))) , (safe_sub_func_uint8_t_u_u(((l_813 == &p_1171->g_174) ^ (((VECTOR(int16_t, 8))(l_814.xzwzyzzw)).s6 >= (p_1171->g_417.x <= 1L))), 0x17L))))), 5));
                }
                (*l_610) |= 0x26BE49BCL;
                --l_815;
            }
            else
            { /* block id: 384 */
                int32_t ***l_867[9][8] = {{&p_1171->g_149,&p_1171->g_149,(void*)0,(void*)0,(void*)0,&p_1171->g_149,&p_1171->g_149,(void*)0},{&p_1171->g_149,&p_1171->g_149,(void*)0,(void*)0,(void*)0,&p_1171->g_149,&p_1171->g_149,(void*)0},{&p_1171->g_149,&p_1171->g_149,(void*)0,(void*)0,(void*)0,&p_1171->g_149,&p_1171->g_149,(void*)0},{&p_1171->g_149,&p_1171->g_149,(void*)0,(void*)0,(void*)0,&p_1171->g_149,&p_1171->g_149,(void*)0},{&p_1171->g_149,&p_1171->g_149,(void*)0,(void*)0,(void*)0,&p_1171->g_149,&p_1171->g_149,(void*)0},{&p_1171->g_149,&p_1171->g_149,(void*)0,(void*)0,(void*)0,&p_1171->g_149,&p_1171->g_149,(void*)0},{&p_1171->g_149,&p_1171->g_149,(void*)0,(void*)0,(void*)0,&p_1171->g_149,&p_1171->g_149,(void*)0},{&p_1171->g_149,&p_1171->g_149,(void*)0,(void*)0,(void*)0,&p_1171->g_149,&p_1171->g_149,(void*)0},{&p_1171->g_149,&p_1171->g_149,(void*)0,(void*)0,(void*)0,&p_1171->g_149,&p_1171->g_149,(void*)0}};
                uint8_t l_882[2][1];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_882[i][j] = 0x97L;
                }
                for (l_131 = 29; (l_131 < 1); l_131--)
                { /* block id: 387 */
                    int32_t ******l_826 = &l_824[1];
                    p_21 = (((*l_733) = (safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((*l_826) = l_824[0]) != (l_827[0] = (void*)0)), (~p_20))), 0x4AL))) , func_132(&p_1171->g_5, p_1171));
                    for (p_1171->g_616 = 0; (p_1171->g_616 <= 11); p_1171->g_616 = safe_add_func_int32_t_s_s(p_1171->g_616, 1))
                    { /* block id: 394 */
                        if ((*p_21))
                            break;
                    }
                    (*l_610) = (safe_sub_func_int32_t_s_s((*p_21), (0x581CL || (((VECTOR(uint32_t, 2))(0x8A1F79C8L, 4294967295UL)).hi < (safe_sub_func_uint32_t_u_u(5UL, (*p_21)))))));
                }
                for (p_1171->g_261 = 0; (p_1171->g_261 >= 29); p_1171->g_261++)
                { /* block id: 401 */
                    uint8_t *l_868 = &l_148.f1;
                    int32_t l_874 = 0x25C78D5EL;
                    int32_t l_876 = 0x55825997L;
                    int32_t l_877 = 5L;
                    if ((atomic_inc(&p_1171->l_atomic_input[16]) == 7))
                    { /* block id: 403 */
                        uint32_t l_836 = 0xD3D16EB8L;
                        uint32_t l_839 = 0x36A2BFB5L;
                        uint16_t l_842 = 8UL;
                        int8_t l_845 = 1L;
                        int8_t l_846[10] = {0x34L,0x34L,0x34L,0x34L,0x34L,0x34L,0x34L,0x34L,0x34L,0x34L};
                        uint16_t l_847 = 65529UL;
                        int8_t l_848 = (-1L);
                        VECTOR(int32_t, 2) l_849 = (VECTOR(int32_t, 2))(2L, 0x725B5697L);
                        uint8_t l_850[7][4][1] = {{{251UL},{251UL},{251UL},{251UL}},{{251UL},{251UL},{251UL},{251UL}},{{251UL},{251UL},{251UL},{251UL}},{{251UL},{251UL},{251UL},{251UL}},{{251UL},{251UL},{251UL},{251UL}},{{251UL},{251UL},{251UL},{251UL}},{{251UL},{251UL},{251UL},{251UL}}};
                        VECTOR(int32_t, 4) l_851 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x73CBBAB1L), 0x73CBBAB1L);
                        uint32_t l_852 = 4294967294UL;
                        int16_t l_853 = (-5L);
                        int32_t l_854 = 8L;
                        int16_t l_855 = 1L;
                        int32_t l_856 = 1L;
                        union U0 l_857[6] = {{-1L},{0x10A9AC4FL},{-1L},{-1L},{0x10A9AC4FL},{-1L}};
                        uint16_t l_858 = 0xB5D4L;
                        uint8_t l_859 = 0x0CL;
                        int32_t l_860 = 0x7B5C8B9BL;
                        uint32_t l_861 = 0x19ED2C80L;
                        uint32_t l_862 = 0UL;
                        int64_t l_863 = 0x39E7DD34B2DCFB7BL;
                        uint32_t l_864 = 0xFD118E34L;
                        int i, j, k;
                        --l_836;
                        l_839++;
                        l_842++;
                        l_864 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-1L), 0x166E77F1L)), l_845, 0x5B72F2DCL, (l_847 = l_846[8]), 0x6B3932B1L, 6L, ((VECTOR(int32_t, 8))(0x0B15C2E0L, (l_848 &= 3L), ((VECTOR(int32_t, 2))(0x20239F35L, 0x4113CCE0L)), ((VECTOR(int32_t, 4))(l_849.xyyx)).y, 0x33B5E782L, 3L, 0x4861EC58L)).s0, (l_854 = ((l_850[4][3][0] , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_851.xz)).xxxyxyxyxxyxyyxx)).s1) , (l_852 , l_853))), ((((l_856 = l_855) , l_857[4]) , (l_861 = ((l_859 = l_858) , l_860))) , 7L), l_862, 0x4BB571E9L, l_863, 0L, 0x7647F4E2L, 8L)).sf797)).y;
                        unsigned int result = 0;
                        result += l_836;
                        result += l_839;
                        result += l_842;
                        result += l_845;
                        int l_846_i0;
                        for (l_846_i0 = 0; l_846_i0 < 10; l_846_i0++) {
                            result += l_846[l_846_i0];
                        }
                        result += l_847;
                        result += l_848;
                        result += l_849.y;
                        result += l_849.x;
                        int l_850_i0, l_850_i1, l_850_i2;
                        for (l_850_i0 = 0; l_850_i0 < 7; l_850_i0++) {
                            for (l_850_i1 = 0; l_850_i1 < 4; l_850_i1++) {
                                for (l_850_i2 = 0; l_850_i2 < 1; l_850_i2++) {
                                    result += l_850[l_850_i0][l_850_i1][l_850_i2];
                                }
                            }
                        }
                        result += l_851.w;
                        result += l_851.z;
                        result += l_851.y;
                        result += l_851.x;
                        result += l_852;
                        result += l_853;
                        result += l_854;
                        result += l_855;
                        result += l_856;
                        int l_857_i0;
                        for (l_857_i0 = 0; l_857_i0 < 6; l_857_i0++) {
                            result += l_857[l_857_i0].f0;
                            result += l_857[l_857_i0].f1;
                            result += l_857[l_857_i0].f2;
                        }
                        result += l_858;
                        result += l_859;
                        result += l_860;
                        result += l_861;
                        result += l_862;
                        result += l_863;
                        result += l_864;
                        atomic_add(&p_1171->l_special_values[16], result);
                    }
                    else
                    { /* block id: 414 */
                        (1 + 1);
                    }
                    if ((((*l_868) = (p_1171->g_182 < (l_867[5][7] == (void*)0))) > (!p_1171->g_535.s6)))
                    { /* block id: 418 */
                        int64_t ***l_873 = &l_869;
                        int32_t l_875 = 0x50805DD4L;
                        int32_t l_878[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_878[i] = 0L;
                        (*l_873) = l_869;
                        (*l_610) = (*p_21);
                        p_21 = func_132(p_21, p_1171);
                        --l_879;
                    }
                    else
                    { /* block id: 423 */
                        uint64_t l_895 = 8UL;
                        (*p_21) = l_882[0][0];
                        p_1171->g_364.y |= ((((p_1171->g_528.sb | (((((((p_1171->g_2 == (safe_add_func_int8_t_s_s(0x61L, (safe_sub_func_uint32_t_u_u((((void*)0 != l_887) || p_20), ((((VECTOR(uint32_t, 2))(0xB3EFD4F7L, 1UL)).lo < ((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u((l_610 != (p_1171->g_892[1] = &p_1171->g_541)), ((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_1171->g_893.xyxy)))).even, ((VECTOR(int16_t, 16))(p_1171->g_894.s57a86fbdc0758a74)).sdb, ((VECTOR(int16_t, 2))(0x10D1L, (-6L)))))), 0x3273L, 0x218BL)))).z <= ((p_20 > p_20) , 0x2E28L)) >= l_895))), 0x77L)) | p_1171->g_184[0][4][1])) > p_1171->g_682.w)))))) && (*l_610)) , l_895) , (-1L)) , p_1171->g_426[0][6][1]) == (*l_610)) , p_1171->g_748)) | (-9L)) , p_1171->g_184[2][0][3]) , (*p_21));
                    }
                    --p_1171->g_896;
                    if ((*p_21))
                        continue;
                }
            }
            if ((atomic_inc(&p_1171->l_atomic_input[58]) == 6))
            { /* block id: 433 */
                int16_t l_899 = 0x5BE3L;
                uint16_t l_900 = 0x3542L;
                uint32_t l_901 = 0xCB861F04L;
                VECTOR(int64_t, 8) l_902 = (VECTOR(int64_t, 8))((-10L), (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), 0x6AE12D24481EDE06L), 0x6AE12D24481EDE06L), 0x6AE12D24481EDE06L, (-10L), 0x6AE12D24481EDE06L);
                uint32_t l_903 = 0xFB089EAEL;
                int64_t l_904 = 6L;
                uint16_t l_905[10][6] = {{65529UL,0x4A92L,65535UL,0UL,0xF45FL,0xF45FL},{65529UL,0x4A92L,65535UL,0UL,0xF45FL,0xF45FL},{65529UL,0x4A92L,65535UL,0UL,0xF45FL,0xF45FL},{65529UL,0x4A92L,65535UL,0UL,0xF45FL,0xF45FL},{65529UL,0x4A92L,65535UL,0UL,0xF45FL,0xF45FL},{65529UL,0x4A92L,65535UL,0UL,0xF45FL,0xF45FL},{65529UL,0x4A92L,65535UL,0UL,0xF45FL,0xF45FL},{65529UL,0x4A92L,65535UL,0UL,0xF45FL,0xF45FL},{65529UL,0x4A92L,65535UL,0UL,0xF45FL,0xF45FL},{65529UL,0x4A92L,65535UL,0UL,0xF45FL,0xF45FL}};
                int64_t l_906 = (-4L);
                int64_t l_907 = (-1L);
                VECTOR(int16_t, 2) l_908 = (VECTOR(int16_t, 2))(0x0440L, (-1L));
                VECTOR(int16_t, 4) l_909 = (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 3L), 3L);
                VECTOR(int16_t, 4) l_910 = (VECTOR(int16_t, 4))(0x3151L, (VECTOR(int16_t, 2))(0x3151L, 1L), 1L);
                VECTOR(int16_t, 16) l_911 = (VECTOR(int16_t, 16))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x51A6L), 0x51A6L), 0x51A6L, 2L, 0x51A6L, (VECTOR(int16_t, 2))(2L, 0x51A6L), (VECTOR(int16_t, 2))(2L, 0x51A6L), 2L, 0x51A6L, 2L, 0x51A6L);
                VECTOR(int16_t, 16) l_912 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x601AL), 0x601AL), 0x601AL, 0L, 0x601AL, (VECTOR(int16_t, 2))(0L, 0x601AL), (VECTOR(int16_t, 2))(0L, 0x601AL), 0L, 0x601AL, 0L, 0x601AL);
                VECTOR(int16_t, 2) l_913 = (VECTOR(int16_t, 2))((-1L), 0x6252L);
                int16_t l_914 = 0x3110L;
                uint64_t l_915 = 0xE7D9B6A352ADF0DEL;
                VECTOR(int16_t, 4) l_916 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L));
                uint32_t l_917 = 4294967288UL;
                uint16_t l_918 = 65535UL;
                uint64_t l_919[9];
                uint64_t l_920 = 18446744073709551609UL;
                int i, j;
                for (i = 0; i < 9; i++)
                    l_919[i] = 7UL;
                l_920 &= ((l_918 = ((((l_901 = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))((l_900 &= l_899), ((VECTOR(int64_t, 2))((-1L), 0x66846E2A9062A350L)), 0x70218B4992FF7A07L)).yyzxzyzxwwyywzxz)).s5) , (l_915 = (((VECTOR(int16_t, 8))(l_902.s3, 0x140DL, (-1L), ((l_903 , l_904) , ((VECTOR(int16_t, 16))((l_906 &= l_905[0][0]), 1L, 0x1286L, 0x6B39L, l_907, ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(l_908.yyyyyyyy)).s01, ((VECTOR(int16_t, 8))(l_909.xxzwzwzz)).s73, ((VECTOR(int16_t, 16))(l_910.wxzwwwzwzwzzxwyy)).sa1))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(l_911.sa4ba6780842be279)), ((VECTOR(int16_t, 16))(l_912.s3efc91dacb30e068)), ((VECTOR(int16_t, 4))(l_913.yyyy)).yyxzzyzyzyzyxyxx))).sb018)), l_914, 0x7D8BL, 0L, (-2L), 2L)).s0), ((VECTOR(int16_t, 4))(0x7B39L, 0x0C26L, 9L, (-1L))))).s1 , (GROUP_DIVERGE(1, 1) , 0x19L)))) , l_916.x) , l_917)) , l_919[2]);
                unsigned int result = 0;
                result += l_899;
                result += l_900;
                result += l_901;
                result += l_902.s7;
                result += l_902.s6;
                result += l_902.s5;
                result += l_902.s4;
                result += l_902.s3;
                result += l_902.s2;
                result += l_902.s1;
                result += l_902.s0;
                result += l_903;
                result += l_904;
                int l_905_i0, l_905_i1;
                for (l_905_i0 = 0; l_905_i0 < 10; l_905_i0++) {
                    for (l_905_i1 = 0; l_905_i1 < 6; l_905_i1++) {
                        result += l_905[l_905_i0][l_905_i1];
                    }
                }
                result += l_906;
                result += l_907;
                result += l_908.y;
                result += l_908.x;
                result += l_909.w;
                result += l_909.z;
                result += l_909.y;
                result += l_909.x;
                result += l_910.w;
                result += l_910.z;
                result += l_910.y;
                result += l_910.x;
                result += l_911.sf;
                result += l_911.se;
                result += l_911.sd;
                result += l_911.sc;
                result += l_911.sb;
                result += l_911.sa;
                result += l_911.s9;
                result += l_911.s8;
                result += l_911.s7;
                result += l_911.s6;
                result += l_911.s5;
                result += l_911.s4;
                result += l_911.s3;
                result += l_911.s2;
                result += l_911.s1;
                result += l_911.s0;
                result += l_912.sf;
                result += l_912.se;
                result += l_912.sd;
                result += l_912.sc;
                result += l_912.sb;
                result += l_912.sa;
                result += l_912.s9;
                result += l_912.s8;
                result += l_912.s7;
                result += l_912.s6;
                result += l_912.s5;
                result += l_912.s4;
                result += l_912.s3;
                result += l_912.s2;
                result += l_912.s1;
                result += l_912.s0;
                result += l_913.y;
                result += l_913.x;
                result += l_914;
                result += l_915;
                result += l_916.w;
                result += l_916.z;
                result += l_916.y;
                result += l_916.x;
                result += l_917;
                result += l_918;
                int l_919_i0;
                for (l_919_i0 = 0; l_919_i0 < 9; l_919_i0++) {
                    result += l_919[l_919_i0];
                }
                result += l_920;
                atomic_add(&p_1171->l_special_values[58], result);
            }
            else
            { /* block id: 440 */
                (1 + 1);
            }
            if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(l_921.s4752731130663305)).s8e8e, ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(p_1171->g_922.s326abdef)).s6746325027357544, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((p_20 & (((*l_610) ^= (p_20 && (safe_mod_func_uint16_t_u_u((l_925 != ((*l_926) = l_925)), l_928)))) != (((l_148 , &p_1171->g_174) == &p_1171->g_174) ^ (safe_lshift_func_int16_t_s_u(((l_935 &= (l_745[4] = ((FAKE_DIVERGE(p_1171->group_0_offset, get_group_id(0), 10) > FAKE_DIVERGE(p_1171->local_2_offset, get_local_id(2), 10)) < (safe_unary_minus_func_uint32_t_u((safe_mod_func_uint8_t_u_u(p_20, 0xE5L))))))) & p_1171->g_364.x), 4))))) , 0x13CA87AFL), ((VECTOR(int32_t, 8))((-6L))), ((VECTOR(int32_t, 2))(1L)), 0x2B091ACBL, ((VECTOR(int32_t, 2))((-7L))), 0L, 0x5C7604E0L)).s03)).xyyxxxyyxyxyxyyy, ((VECTOR(int32_t, 16))(4L))))).s3271))).xwwwywxw)).s5)
            { /* block id: 447 */
                int8_t l_936[8][3][1] = {{{3L},{3L},{3L}},{{3L},{3L},{3L}},{{3L},{3L},{3L}},{{3L},{3L},{3L}},{{3L},{3L},{3L}},{{3L},{3L},{3L}},{{3L},{3L},{3L}},{{3L},{3L},{3L}}};
                int32_t l_937[4][8][1] = {{{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L}},{{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L}},{{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L}},{{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L},{0x224C8F15L}}};
                uint8_t l_938 = 0x1DL;
                uint16_t l_942 = 5UL;
                int i, j, k;
                --l_938;
                l_942--;
                for (p_1171->g_396 = 0; (p_1171->g_396 <= (-10)); p_1171->g_396 = safe_sub_func_int16_t_s_s(p_1171->g_396, 1))
                { /* block id: 452 */
                    atomic_sub(&p_1171->l_atomic_reduction[0], (*l_610));
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if (get_linear_local_id() == 0)
                        p_1171->v_collective += p_1171->l_atomic_reduction[0];
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    if ((*p_21))
                        break;
                    ++l_947[0];
                    p_21 = p_21;
                }
                for (l_148.f2 = (-13); (l_148.f2 >= 23); l_148.f2 = safe_add_func_int32_t_s_s(l_148.f2, 6))
                { /* block id: 460 */
                    if (l_938)
                        break;
                }
            }
            else
            { /* block id: 463 */
                union U0 *l_955 = &p_1171->g_438;
                int64_t *l_956 = &p_1171->g_396;
                int32_t l_960 = 0x6910B3C1L;
                int16_t *l_976 = (void*)0;
                VECTOR(uint16_t, 2) l_992 = (VECTOR(uint16_t, 2))(0x5D79L, 0x14E3L);
                int32_t ******l_993 = &l_827[1];
                int i;
                for (p_1171->g_541 = 0; (p_1171->g_541 == 3); p_1171->g_541 = safe_add_func_int64_t_s_s(p_1171->g_541, 1))
                { /* block id: 466 */
                    uint32_t l_954 = 4294967292UL;
                    if (l_954)
                        break;
                    if ((*p_21))
                        continue;
                    if ((*p_21))
                        break;
                }
                l_960 = (((((l_955 != l_955) < ((*l_956) = (*p_1171->g_258))) < (safe_unary_minus_func_int8_t_s(((*l_613) = (safe_rshift_func_int8_t_s_s(1L, 5)))))) ^ ((l_960 && (safe_sub_func_uint8_t_u_u(((p_1171->g_389.s7 && (safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(p_1171->g_965.yxxz)).w, ((*p_21) ^= ((void*)0 == &p_1171->g_174))))) & (safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(p_1171->g_968.zw)).hi, p_20))), GROUP_DIVERGE(0, 1)))) < l_960)) | 0x75FEL);
                for (l_742 = 1; (l_742 > (-25)); l_742--)
                { /* block id: 477 */
                    int32_t ****l_979 = &l_188;
                    if (((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-7L), 1L)).xxxxyxyxyyxyxyxx)))).s07)).odd, (1L || ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))((((VECTOR(uint64_t, 16))(p_1171->g_973.s6671473051357613)).s8 ^ (((*l_925) = l_960) , ((VECTOR(int64_t, 2))(0x5E58D5861C85C8D7L, 3L)).hi)), ((((p_20 <= (p_20 == (&p_1171->g_182 == (l_977 = l_976)))) , (0x5CL & ((p_1171->g_978 = p_1171->g_978) == l_979))) && p_20) && l_980.s2), (-3L), 0x1016L)))).xxzwzxzz)).s0202572222360371)).saa, ((VECTOR(int16_t, 2))(1L))))).even))) , (*l_610)))
                    { /* block id: 481 */
                        uint32_t l_981 = 4294967295UL;
                        l_981--;
                        if ((*l_610))
                            break;
                        l_960 = ((*l_610) = (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(0x7907L, p_1171->g_647.s5)), (((safe_rshift_func_uint16_t_u_u((~(FAKE_DIVERGE(p_1171->local_1_offset, get_local_id(1), 10) <= (p_20 && (p_20 == (((p_1171->g_389.s5 |= (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_992.xx)))).hi >= (p_20 >= p_1171->g_535.s7))) != 0x58L) , ((*l_733) = (((p_1171->g_647.s5 >= (&l_824[1] == l_993)) & 0L) <= p_20))))))), p_1171->g_922.s5)) > p_20) < p_1171->g_504.s6))), p_1171->g_621.s7)));
                        if ((*p_21))
                            break;
                    }
                    else
                    { /* block id: 489 */
                        VECTOR(int32_t, 8) l_994 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x4EEF2B71L), 0x4EEF2B71L), 0x4EEF2B71L, (-4L), 0x4EEF2B71L);
                        int i;
                        l_960 = ((*l_610) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_994.s5536223356403277)).s537a)).x);
                    }
                    p_21 = p_21;
                }
                l_960 |= ((*p_21) = ((l_995 = (void*)0) != l_996[0]));
            }
        }
        l_1022 = (0x05F6E1997D41F04EL & (safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((((*p_1171->g_258) ^ (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(p_1171->g_502.s0, ((((safe_sub_func_int32_t_s_s((((l_1010 = &l_612) == ((*l_1012) = &p_1171->g_438)) != ((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x21994148L, 1L)))), ((VECTOR(int32_t, 4))(l_1015.wyzw)).odd, ((VECTOR(int32_t, 2))((-1L), (-4L)))))), 0x5C2DB238L, 0x0954FE9EL)).lo)).lo, (safe_lshift_func_int8_t_s_u((((*l_1021) = ((9UL || (((p_20 >= ((8UL < (0x5AL ^ (-1L))) < p_20)) < p_20) | (*p_21))) > p_1171->g_528.s8)) | p_1171->g_184[2][0][3]), p_1171->g_682.x)))) | p_1171->g_528.s7)), p_20)) != p_1171->g_462.w) , (void*)0) == &l_649[3][5]))), p_1171->g_389.s3))) <= p_1171->g_700.y) > p_20), (-8L))), 0x51L)), p_1171->g_621.s7)));
    }
    return (*l_610);
}


/* ------------------------------------------ */
/* 
 * reads : p_1171->g_234 p_1171->g_150 p_1171->g_5 p_1171->g_220 p_1171->g_426 p_1171->g_428 p_1171->g_430 p_1171->g_432 p_1171->g_258 p_1171->g_259 p_1171->g_140 p_1171->g_144 p_1171->g_455 p_1171->g_459 p_1171->g_461 p_1171->g_462 p_1171->g_465 p_1171->g_155 p_1171->g_389 p_1171->g_145 p_1171->g_484 p_1171->g_214 p_1171->g_185 p_1171->g_438.f0 p_1171->g_500 p_1171->g_501 p_1171->g_502 p_1171->g_504 p_1171->g_528 p_1171->g_535 p_1171->g_541 p_1171->g_184 p_1171->g_261 p_1171->g_556 p_1171->g_1024
 * writes: p_1171->g_234 p_1171->g_335 p_1171->g_396 p_1171->g_220 p_1171->g_426 p_1171->g_428 p_1171->g_430 p_1171->g_432 p_1171->g_140 p_1171->g_145 p_1171->g_5 p_1171->g_440 p_1171->g_150 p_1171->g_438.f0 p_1171->l_comm_values p_1171->g_541 p_1171->g_389 p_1171->g_184 p_1171->g_261
 */
int32_t * func_120(int32_t * p_121, uint32_t  p_122, struct S1 * p_1171)
{ /* block id: 195 */
    VECTOR(int16_t, 2) l_418 = (VECTOR(int16_t, 2))(0x4D87L, (-5L));
    int32_t *l_443 = (void*)0;
    VECTOR(uint8_t, 16) l_457 = (VECTOR(uint8_t, 16))(0xDDL, (VECTOR(uint8_t, 4))(0xDDL, (VECTOR(uint8_t, 2))(0xDDL, 0x38L), 0x38L), 0x38L, 0xDDL, 0x38L, (VECTOR(uint8_t, 2))(0xDDL, 0x38L), (VECTOR(uint8_t, 2))(0xDDL, 0x38L), 0xDDL, 0x38L, 0xDDL, 0x38L);
    VECTOR(uint8_t, 2) l_460 = (VECTOR(uint8_t, 2))(0x1DL, 0xF7L);
    uint32_t l_469 = 0xF3808327L;
    int32_t l_471[6];
    VECTOR(uint16_t, 4) l_511 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 5UL), 5UL);
    VECTOR(uint8_t, 16) l_534 = (VECTOR(uint8_t, 16))(0x72L, (VECTOR(uint8_t, 4))(0x72L, (VECTOR(uint8_t, 2))(0x72L, 0UL), 0UL), 0UL, 0x72L, 0UL, (VECTOR(uint8_t, 2))(0x72L, 0UL), (VECTOR(uint8_t, 2))(0x72L, 0UL), 0x72L, 0UL, 0x72L, 0UL);
    int i;
    for (i = 0; i < 6; i++)
        l_471[i] = 0x3776CAAFL;
    for (p_1171->g_234 = 28; (p_1171->g_234 == 26); --p_1171->g_234)
    { /* block id: 198 */
        uint16_t l_399 = 0xE947L;
        int32_t l_407 = 2L;
        int32_t ***l_421 = &p_1171->g_149;
        int32_t ****l_420 = &l_421;
        int8_t l_434 = (-1L);
        VECTOR(uint8_t, 2) l_454 = (VECTOR(uint8_t, 2))(246UL, 0xB7L);
        uint8_t *l_493 = (void*)0;
        int i;
        for (p_1171->g_335 = (-7); (p_1171->g_335 > 8); p_1171->g_335 = safe_add_func_uint32_t_u_u(p_1171->g_335, 7))
        { /* block id: 201 */
            VECTOR(uint32_t, 16) l_394 = (VECTOR(uint32_t, 16))(0xA5C3A70CL, (VECTOR(uint32_t, 4))(0xA5C3A70CL, (VECTOR(uint32_t, 2))(0xA5C3A70CL, 0xC633036BL), 0xC633036BL), 0xC633036BL, 0xA5C3A70CL, 0xC633036BL, (VECTOR(uint32_t, 2))(0xA5C3A70CL, 0xC633036BL), (VECTOR(uint32_t, 2))(0xA5C3A70CL, 0xC633036BL), 0xA5C3A70CL, 0xC633036BL, 0xA5C3A70CL, 0xC633036BL);
            uint32_t *l_395 = (void*)0;
            int64_t *l_406[9];
            int8_t *l_419 = &p_1171->g_220[3][1][3];
            int32_t ****l_422[3][7][4] = {{{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421}},{{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421}},{{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421},{&l_421,&l_421,(void*)0,&l_421}}};
            int32_t *****l_423 = &l_422[0][3][0];
            uint16_t *l_427 = &p_1171->g_428;
            int64_t *l_429 = &p_1171->g_430;
            int64_t *l_431 = &p_1171->g_432;
            int16_t *l_433[1][1][4];
            union U0 *l_437 = &p_1171->g_438;
            uint8_t l_470 = 0x86L;
            VECTOR(uint16_t, 2) l_495 = (VECTOR(uint16_t, 2))(5UL, 0UL);
            VECTOR(uint8_t, 8) l_498 = (VECTOR(uint8_t, 8))(246UL, (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 0x77L), 0x77L), 0x77L, 246UL, 0x77L);
            VECTOR(uint8_t, 8) l_499 = (VECTOR(uint8_t, 8))(0x26L, (VECTOR(uint8_t, 4))(0x26L, (VECTOR(uint8_t, 2))(0x26L, 0x8FL), 0x8FL), 0x8FL, 0x26L, 0x8FL);
            VECTOR(uint8_t, 2) l_503 = (VECTOR(uint8_t, 2))(254UL, 0xAAL);
            VECTOR(int16_t, 4) l_518 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L));
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_406[i] = (void*)0;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_433[i][j][k] = (void*)0;
                }
            }
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1171->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 33)), permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]));
            if ((*p_121))
                break;
            (*p_1171->g_144) = func_132((((safe_add_func_uint16_t_u_u((--l_399), (l_434 = ((safe_div_func_int64_t_s_s((l_407 = (safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_1171->group_2_offset, get_group_id(2), 10), 7))), ((+((*l_431) ^= ((*l_429) |= (((safe_unary_minus_func_int64_t_s(((safe_add_func_int32_t_s_s(0x4E70388BL, (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_1171->g_417.zxzwzxzw)).s32)), ((VECTOR(int16_t, 4))(l_418.yxyx)), 0x5FB2L, (-1L))).s3, FAKE_DIVERGE(p_1171->local_0_offset, get_local_id(0), 10))), 1UL)))) <= 0L))) > (((*l_419) &= l_418.x) || ((l_420 == ((*l_423) = l_422[0][3][0])) ^ (0xA7F4L <= ((*l_427) ^= (p_1171->g_426[3][3][3] &= ((VECTOR(uint16_t, 8))(0x8387L, p_1171->g_261, (((((+(safe_rshift_func_int8_t_s_u(1L, 6))) , p_122) & p_1171->g_184[2][0][3]) ^ p_122) < (-1L)), p_1171->g_389.s4, p_122, ((VECTOR(uint16_t, 2))(0xD15DL)), 65535UL)).s4)))))) <= l_418.y)))) , (*p_1171->g_258)))) , 0x2688L)))) , 255UL) , (void*)0), p_1171);
            for (p_1171->g_5 = 0; (p_1171->g_5 == 9); p_1171->g_5 = safe_add_func_int32_t_s_s(p_1171->g_5, 4))
            { /* block id: 219 */
                union U0 **l_441 = &p_1171->g_440[0];
                int32_t l_442 = 0x222FA051L;
                VECTOR(uint8_t, 4) l_456 = (VECTOR(uint8_t, 4))(0x25L, (VECTOR(uint8_t, 2))(0x25L, 0x15L), 0x15L);
                VECTOR(uint8_t, 4) l_458 = (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0xDDL), 0xDDL);
                uint32_t *l_468[5][1][7] = {{{(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]}},{{(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]}},{{(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]}},{{(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]}},{{(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]}}};
                uint32_t l_472[4][2] = {{0UL,4294967295UL},{0UL,4294967295UL},{0UL,4294967295UL},{0UL,4294967295UL}};
                int i, j, k;
                (*l_441) = l_437;
                l_442 = (-1L);
                if ((((l_443 == (void*)0) , (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((*l_427) = ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 16))(l_454.yxxxyyxyxyxyxxyx)).hi, (uint8_t)p_122))).s05)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 16))(p_1171->g_455.sf420649131df7b16)).s79ea, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_456.xzzxxwxx)).s22)), 0x64L, p_122, 0xB6L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(l_457.s86)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_458.zwzyywxxxxzywyww)).s0c)).yyxyxxxyyxyxxyyy)).s34, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_1171->g_459.xwyy)).zyxzwyxxzywyyzzy)).s67))), ((VECTOR(uint8_t, 4))(l_460.xyyy)), 0UL, 0x02L)).hi)), GROUP_DIVERGE(1, 1), ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 4))(p_1171->g_461.s3cc6)).xxywyzwxzzxyzwxw, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_1171->g_462.zyxx)).xzzwzwxxzzxxzxzx)).s0d)).xxxxxyyx)).odd)).yyzzzywwwwzwwxzz))).s8d5d, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(246UL, (((*l_419) = (safe_rshift_func_int16_t_s_u((l_470 = (p_1171->g_465 , (((safe_rshift_func_int16_t_s_u(((*p_121) , (((p_122 | (!(l_468[3][0][1] != l_395))) ^ p_122) != 1UL)), p_1171->g_155.y)) , l_469) , p_122))), GROUP_DIVERGE(2, 1)))) <= p_1171->g_432), p_1171->g_461.s1, ((VECTOR(uint8_t, 2))(1UL)), FAKE_DIVERGE(p_1171->global_2_offset, get_global_id(2), 10), 1UL, 0x13L)).s5117242550264702)).s7620, ((VECTOR(uint8_t, 4))(0xA5L))))).zxzxzzyzzyyzzxzx, ((VECTOR(uint8_t, 16))(3UL))))), ((VECTOR(uint8_t, 16))(254UL))))).sd, ((VECTOR(uint8_t, 2))(5UL)), ((VECTOR(uint8_t, 2))(255UL)), 0x00L)).s9611))).xyyzwzwzyxzwzyxx)).s1f))).yxyy)).odd)).xyxx, ((VECTOR(uint16_t, 4))(0xA29EL))))).x), p_1171->g_389.s1)), p_122)), p_1171->g_5)), (*p_121))), (*p_121)))) == 0x2287B434L))
                { /* block id: 225 */
                    l_443 = (*p_1171->g_144);
                    ++l_472[1][1];
                }
                else
                { /* block id: 228 */
                    uint8_t l_475 = 0xDDL;
                    int32_t *****l_482 = (void*)0;
                    uint32_t *l_490[2];
                    int32_t l_519 = 0x3BA4B0EAL;
                    VECTOR(uint64_t, 8) l_529 = (VECTOR(uint64_t, 8))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0UL), 0UL), 0UL, 18446744073709551606UL, 0UL);
                    int32_t *l_540 = &p_1171->g_541;
                    uint8_t *l_542[6];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_490[i] = &l_469;
                    for (i = 0; i < 6; i++)
                        l_542[i] = (void*)0;
                    l_471[5] = (*p_121);
                    l_475 = l_458.w;
                    for (p_1171->g_430 = (-4); (p_1171->g_430 != 26); ++p_1171->g_430)
                    { /* block id: 233 */
                        int32_t ******l_483 = &l_482;
                        uint32_t *l_489[9][6] = {{&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&l_472[0][1],&l_472[0][0],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&l_472[0][1],&l_472[0][0],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&l_472[0][1],&l_472[0][0],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&l_472[0][1],&l_472[0][0],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&l_472[0][1],&l_472[0][0],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&l_472[0][1],&l_472[0][0],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&l_472[0][1],&l_472[0][0],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&l_472[0][1],&l_472[0][0],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]},{&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&l_472[0][1],&l_472[0][0],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))],&permutations[(safe_mod_func_uint32_t_u_u((p_1171->g_396 = ((VECTOR(uint32_t, 8))(l_394.s0db3f942)).s1), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]}};
                        int32_t *l_491 = (void*)0;
                        int32_t *l_492 = &p_1171->g_438.f0;
                        uint32_t l_494 = 0xC86DA9E9L;
                        int i, j;
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1171->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 33)), permutations[(safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((*l_483) = l_482) == (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_1171->g_484.s25e155df4e0d470b)).s3d5b)).y , &l_420)), 5)), ((safe_sub_func_uint8_t_u_u((l_472[2][0] != GROUP_DIVERGE(1, 1)), ((safe_add_func_uint16_t_u_u(p_1171->g_155.y, ((l_494 = (((((((*l_492) ^= (((l_489[2][3] != l_490[1]) , (p_1171->g_150 = (&l_422[2][6][1] != (void*)0))) > ((p_1171->g_214.sf >= p_1171->g_185) , 0L))) , l_493) == &l_470) < 0x1713C13EL) , p_1171->g_455.s5) | p_1171->g_432)) <= 0x1F50EDBBL))) == p_122))) <= l_475))), 10))][(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]));
                        return p_121;
                    }
                    l_471[1] = ((((VECTOR(uint16_t, 16))(l_495.yxyxxyxxyxyxyyyy)).s8 ^ (safe_mod_func_int8_t_s_s((p_1171->g_455.s1 <= 0xCEL), ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_498.s1600150145517601)).sf8)).yxxyyxxx, ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 8))(l_499.s51732154)).s65, ((VECTOR(uint8_t, 16))(p_1171->g_500.s7672452453425735)).s36, ((VECTOR(uint8_t, 16))(p_1171->g_501.xyxxxyyyyyxyyyyx)).s43))).yxyxxxxx, ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 2))(p_1171->g_502.s61)).xxxyyxxy, ((VECTOR(uint8_t, 4))(l_503.yyxy)).wzxyxxzx)))))).s52, ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(p_1171->g_504.sa0)), (uint8_t)(safe_add_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u(((*l_427) = ((p_1171->g_184[3][3][1] |= (((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_511.yxxz)).hi)), 0x19C7L, (safe_rshift_func_uint8_t_u_s((p_1171->g_389.s7 &= (safe_mod_func_int64_t_s_s((p_1171->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))] = (l_519 |= (safe_mul_func_uint16_t_u_u((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_518.yyzwwwxwwwyzyzyy)))))).s9 , 0x2409L), p_122)))), ((-1L) | (safe_sub_func_int8_t_s_s(p_122, (safe_rshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((((*l_540) |= ((((((safe_rshift_func_uint8_t_u_s(p_122, 2)) || ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 8))(p_1171->g_528.s60b8c290)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_529.s4700757004254432)).s2a)).xxxyxxxy))).s5) || (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(0x02L, ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_534.s5e9ce7cfc94d5a3e)).sf7)), ((VECTOR(uint8_t, 2))(0UL, 9UL))))), 0x2CL)).z, 0x78L)), ((!((VECTOR(int64_t, 4))(p_1171->g_535.s6254)).w) | (safe_add_func_uint64_t_u_u((safe_add_func_int8_t_s_s((p_1171->g_484.s6 || (-9L)), 8L)), p_1171->g_535.s4)))))) , p_1171->g_502.s5) , p_122) == p_122)) , p_121) != (void*)0), 0xEFB9E7C4L)) > p_122), 3)))))))), 3)), p_1171->g_502.s5, 0x1E18L, 1UL, 0xB0FEL)).odd, ((VECTOR(uint16_t, 4))(0x6430L))))).x >= p_1171->g_502.s5)) != p_1171->g_5)), l_458.z)) == p_122), 0UL)), (*p_121))))))))).lo))) & p_122);
                }
            }
        }
    }
    for (p_1171->g_261 = 0; (p_1171->g_261 > 55); p_1171->g_261++)
    { /* block id: 256 */
        uint64_t l_558 = 0xEA332C744E37CAB8L;
        int32_t l_561 = (-7L);
        int32_t *l_568 = &l_471[1];
        int32_t l_570 = (-1L);
        for (p_1171->g_5 = (-8); (p_1171->g_5 != 2); p_1171->g_5 = safe_add_func_uint8_t_u_u(p_1171->g_5, 3))
        { /* block id: 259 */
            int32_t *l_548 = (void*)0;
            int32_t *l_549 = &l_471[1];
            uint16_t *l_557 = &p_1171->g_335;
            uint64_t *l_559 = &l_558;
            int16_t *l_560[1];
            int8_t *l_563 = &p_1171->g_220[3][4][3];
            union U0 l_567[1] = {{0x56631C7BL}};
            uint8_t *l_569[8];
            int i;
            for (i = 0; i < 1; i++)
                l_560[i] = &p_1171->g_184[2][0][3];
            for (i = 0; i < 8; i++)
                l_569[i] = (void*)0;
            (*l_549) = (*p_121);
            l_570 = ((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 8))(((l_561 = ((safe_rshift_func_int16_t_s_s((+(+(safe_lshift_func_int8_t_s_s((((*l_557) = ((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 8))(p_1171->g_556.s30335470))))).s0) == p_1171->g_461.sf), 6)))), l_558)) || ((*l_559) = ((VECTOR(uint64_t, 2))(0x134B82B11FB36724L, 18446744073709551615UL)).lo))) > (safe_unary_minus_func_int8_t_s(((((l_563 == (void*)0) ^ (l_471[1] = ((safe_mul_func_uint8_t_u_u((~(safe_unary_minus_func_int32_t_s(((((6UL | (l_567[0] , 0x93694FDFL)) & (((l_548 != l_568) > 4294967295UL) & p_1171->g_5)) || (-1L)) == p_122)))), (*l_549))) != (*l_549)))) | p_122) || p_1171->g_501.x)))), (-1L), 0x09012020L, ((VECTOR(int32_t, 4))(0x316A49FBL)), (-1L))).s0, (-1L))) >= 0L);
            if ((atomic_inc(&p_1171->g_atomic_input[66 * get_linear_group_id() + 22]) == 2))
            { /* block id: 267 */
                int32_t l_571 = 0x17182AC6L;
                union U0 l_580 = {2L};
                uint8_t l_587 = 0UL;
                for (l_571 = 0; (l_571 > 5); l_571 = safe_add_func_uint64_t_u_u(l_571, 7))
                { /* block id: 270 */
                    int32_t l_575 = 0x41C25D0FL;
                    int32_t *l_574 = &l_575;
                    int32_t *l_576 = &l_575;
                    int32_t *l_577 = &l_575;
                    union U0 l_579 = {0x5C86EF94L};
                    union U0 *l_578[10] = {&l_579,&l_579,&l_579,&l_579,&l_579,&l_579,&l_579,&l_579,&l_579,&l_579};
                    int i;
                    l_574 = (void*)0;
                    l_577 = l_576;
                    l_578[4] = (void*)0;
                    (*l_576) ^= (-1L);
                }
                if ((l_580 , 0x06D8F189L))
                { /* block id: 276 */
                    uint32_t l_581[10] = {0x5152C81AL,0x5152C81AL,0x5152C81AL,0x5152C81AL,0x5152C81AL,0x5152C81AL,0x5152C81AL,0x5152C81AL,0x5152C81AL,0x5152C81AL};
                    int32_t l_583 = 0x64F17B23L;
                    int32_t *l_582 = &l_583;
                    int32_t *l_584 = &l_583;
                    int16_t l_585 = 0x16AAL;
                    uint16_t l_586 = 1UL;
                    int i;
                    l_584 = (l_582 = (l_581[5] , l_582));
                    l_571 |= l_585;
                    l_571 = l_586;
                }
                else
                { /* block id: 281 */
                    l_571 = 0x32FA3450L;
                }
                if (l_587)
                { /* block id: 284 */
                    uint16_t l_588 = 0xCC3FL;
                    ++l_588;
                    for (l_588 = 0; (l_588 > 3); l_588 = safe_add_func_uint8_t_u_u(l_588, 1))
                    { /* block id: 288 */
                        int64_t l_595 = 0x05B55EA16113010BL;
                        int64_t *l_594 = &l_595;
                        int64_t **l_593[3];
                        int64_t **l_596 = &l_594;
                        int64_t **l_597[7];
                        uint16_t l_598[9];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_593[i] = &l_594;
                        for (i = 0; i < 7; i++)
                            l_597[i] = &l_594;
                        for (i = 0; i < 9; i++)
                            l_598[i] = 0x03F2L;
                        l_597[1] = (l_596 = l_593[0]);
                        l_598[0]++;
                    }
                    for (l_588 = 0; (l_588 != 54); l_588 = safe_add_func_uint32_t_u_u(l_588, 4))
                    { /* block id: 295 */
                        int32_t l_604 = 0x5762057EL;
                        int32_t *l_603 = &l_604;
                        int32_t *l_605 = (void*)0;
                        l_605 = (l_603 = (void*)0);
                    }
                }
                else
                { /* block id: 299 */
                    uint8_t l_606 = 9UL;
                    l_571 = l_606;
                }
                unsigned int result = 0;
                result += l_571;
                result += l_580.f0;
                result += l_580.f1;
                result += l_580.f2;
                result += l_587;
                atomic_add(&p_1171->g_special_values[66 * get_linear_group_id() + 22], result);
            }
            else
            { /* block id: 302 */
                (1 + 1);
            }
        }
    }
    return p_121;
}


/* ------------------------------------------ */
/* 
 * reads : p_1171->g_214 p_1171->g_184 p_1171->g_5 p_1171->g_150 p_1171->g_220 p_1171->g_234 p_1171->g_155 p_1171->g_3 p_1171->g_182 p_1171->g_258 p_1171->g_144 p_1171->g_145 p_1171->g_261 p_1171->g_4 p_1171->g_140 p_1171->g_335 p_1171->g_185 p_1171->g_364 p_1171->g_389
 * writes: p_1171->g_220 p_1171->g_182 p_1171->g_5 p_1171->g_261 p_1171->g_140 p_1171->g_145 p_1171->g_150 p_1171->g_335 p_1171->g_184
 */
int32_t * func_123(uint32_t  p_124, int64_t  p_125, int32_t * p_126, uint8_t  p_127, struct S1 * p_1171)
{ /* block id: 112 */
    VECTOR(uint8_t, 8) l_206 = (VECTOR(uint8_t, 8))(0x6DL, (VECTOR(uint8_t, 4))(0x6DL, (VECTOR(uint8_t, 2))(0x6DL, 0x14L), 0x14L), 0x14L, 0x6DL, 0x14L);
    VECTOR(uint32_t, 4) l_222 = (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 1UL), 1UL);
    int64_t *l_236 = (void*)0;
    int32_t l_237 = 0L;
    union U0 l_253 = {1L};
    int32_t l_257 = 0L;
    uint32_t l_264 = 0UL;
    int32_t *l_314 = &l_237;
    int8_t *l_323[3][10][1] = {{{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]}},{{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]}},{{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]},{&p_1171->g_220[0][0][3]}}};
    VECTOR(int32_t, 2) l_326 = (VECTOR(int32_t, 2))(0x07BB3D11L, 0x5DDC6575L);
    uint8_t *l_329 = &l_253.f1;
    uint8_t *l_330 = (void*)0;
    uint8_t *l_331 = (void*)0;
    uint8_t *l_332 = &l_253.f1;
    uint8_t *l_333 = &l_253.f1;
    uint8_t *l_334 = &l_253.f1;
    uint16_t *l_340[5] = {&p_1171->g_261,&p_1171->g_261,&p_1171->g_261,&p_1171->g_261,&p_1171->g_261};
    int32_t *l_347 = &l_257;
    uint8_t l_350 = 246UL;
    int32_t l_382 = (-10L);
    int16_t l_383 = 0x376DL;
    int8_t l_384 = 0x32L;
    uint64_t l_385 = 6UL;
    VECTOR(uint8_t, 8) l_388 = (VECTOR(uint8_t, 8))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 0x4BL), 0x4BL), 0x4BL, 249UL, 0x4BL);
    int i, j, k;
    for (p_124 = 0; (p_124 < 16); p_124 = safe_add_func_uint64_t_u_u(p_124, 1))
    { /* block id: 115 */
        int32_t *l_197 = &p_1171->g_150;
        int32_t ***l_211[6] = {&p_1171->g_149,&p_1171->g_149,&p_1171->g_149,&p_1171->g_149,&p_1171->g_149,&p_1171->g_149};
        int16_t *l_213 = &p_1171->g_182;
        int8_t *l_219 = &p_1171->g_220[3][1][3];
        uint32_t l_221[6];
        uint32_t *l_254 = (void*)0;
        int64_t *l_255 = (void*)0;
        int64_t *l_256 = (void*)0;
        uint16_t *l_260[9] = {&p_1171->g_261,&p_1171->g_261,&p_1171->g_261,&p_1171->g_261,&p_1171->g_261,&p_1171->g_261,&p_1171->g_261,&p_1171->g_261,&p_1171->g_261};
        uint16_t l_287 = 4UL;
        int i;
        for (i = 0; i < 6; i++)
            l_221[i] = 0x4E382529L;
        (*p_126) = (safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((p_126 == (l_197 = p_126)), ((safe_add_func_uint64_t_u_u((~((-7L) & (safe_div_func_int64_t_s_s(((((*l_213) = ((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(1UL, ((VECTOR(uint8_t, 4))(l_206.s6765)), 255UL, 255UL, 0x20L)).odd)).y, (safe_mul_func_int8_t_s_s((~((*l_219) = (safe_div_func_int64_t_s_s((l_211[2] == (((safe_unary_minus_func_int32_t_s((((void*)0 != l_213) <= ((VECTOR(int8_t, 16))(p_1171->g_214.se575a53cb9e1fed7)).s9))) && (safe_rshift_func_int8_t_s_s(((0x342FL | ((l_213 == &p_1171->g_184[2][0][3]) != 8L)) , p_125), 0))) , (void*)0)), 18446744073709551611UL)))), p_127)))) >= 0x0106815FF81F1C5DL), p_127)) & p_1171->g_184[8][3][3])) || l_221[4]) , p_1171->g_5), FAKE_DIVERGE(p_1171->group_1_offset, get_group_id(1), 10))))), 0xEF71F425CC5604E1L)) ^ l_206.s6))) == (*p_126)), p_1171->g_150));
        if (((+(0x434B96E32C8324DFL ^ p_125)) != ((VECTOR(uint32_t, 8))(l_222.ywyzzzwz)).s1))
        { /* block id: 120 */
            int64_t *l_225 = (void*)0;
            int64_t *l_226[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_233 = 1L;
            int32_t l_235 = (-1L);
            int i;
            l_237 = (p_1171->g_220[3][1][3] | (((((((((p_125 , ((safe_mod_func_int64_t_s_s(((*l_197) = (-9L)), 18446744073709551609UL)) <= 251UL)) , (safe_rshift_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((l_226[1] == ((((safe_sub_func_int16_t_s_s(l_233, l_233)) < (l_235 ^= p_1171->g_234)) | 0xEDL) , l_236)), p_124)) < p_1171->g_234) == p_125), p_1171->g_184[3][2][1]))) , 0x05FBL) > 1L) , p_125) ^ 0xC048L) , p_1171->g_184[6][1][0]) , GROUP_DIVERGE(2, 1)) , 247UL));
        }
        else
        { /* block id: 124 */
            VECTOR(int16_t, 4) l_238 = (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 1L), 1L);
            VECTOR(uint16_t, 16) l_239 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), (VECTOR(uint16_t, 2))(65535UL, 1UL), 65535UL, 1UL, 65535UL, 1UL);
            int i;
            (*l_197) = (~((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(l_238.wyywwywxyxywwwzz)), ((VECTOR(uint16_t, 2))(l_239.s41)).xyxxyyyyxxyyxxxy))).odd)).s2);
        }
        if ((((*l_197) = (p_1171->g_155.w != ((((safe_rshift_func_int16_t_s_u(((p_1171->g_3 & p_125) ^ (l_257 = (safe_rshift_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(p_1171->g_234, (safe_add_func_uint64_t_u_u(0x727B0FE0126B19A0L, GROUP_DIVERGE(1, 1))))), GROUP_DIVERGE(0, 1))) , ((*l_213) |= 2L)), (safe_lshift_func_uint8_t_u_u((!(safe_unary_minus_func_uint16_t_u((l_253 , (((l_237 = (p_1171->g_155.w || (((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((l_222.y , p_124) , 9L), ((VECTOR(int16_t, 4))(0x5D8EL)), ((VECTOR(int16_t, 2))(0x116EL)), 0x004AL)).s73)).xyyyyyxyyxxxyyxx, ((VECTOR(int16_t, 16))((-1L)))))).s3 <= 0x7F4EL))) & (*l_197)) && p_1171->g_184[2][0][3]))))), (*l_197))))))), l_253.f0)) | p_127) , p_1171->g_258) == p_1171->g_258))) , (*p_126)))
        { /* block id: 131 */
            int32_t l_269 = 0x7F8C89F1L;
            uint32_t *l_270 = &l_264;
            int64_t *l_275 = (void*)0;
            int64_t *l_276 = (void*)0;
            int32_t l_277 = 1L;
            int32_t l_280 = 1L;
            VECTOR(int32_t, 16) l_288 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x68DC023EL), 0x68DC023EL), 0x68DC023EL, 1L, 0x68DC023EL, (VECTOR(int32_t, 2))(1L, 0x68DC023EL), (VECTOR(int32_t, 2))(1L, 0x68DC023EL), 1L, 0x68DC023EL, 1L, 0x68DC023EL);
            int32_t *l_315[3];
            int i;
            for (i = 0; i < 3; i++)
                l_315[i] = &p_1171->g_150;
            if ((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 16))((0x0F1C35C8L >= l_264), ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((safe_div_func_uint16_t_u_u(((((VECTOR(int16_t, 16))(((safe_div_func_uint32_t_u_u(((*l_270) = l_269), ((VECTOR(uint32_t, 8))(0x4566B5C5L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((((safe_mul_func_uint8_t_u_u(p_1171->g_150, (((**p_1171->g_144) || ((((l_277 = (l_237 = l_269)) || (safe_add_func_uint16_t_u_u((p_1171->g_261++), (safe_div_func_int16_t_s_s(0x31F1L, (safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(1, 1), 0))))))) && (l_269 != l_287)) <= 7UL)) || l_222.w))) && p_127) || p_127) != FAKE_DIVERGE(p_1171->group_2_offset, get_group_id(2), 10)), 0xF0E83303L, 0xF7BD04F5L, 4294967286UL, FAKE_DIVERGE(p_1171->local_1_offset, get_local_id(1), 10), 4294967294UL, 0x0402DF22L, ((VECTOR(uint32_t, 8))(0xFBCA2AA5L)), 8UL)).s51eb)), ((VECTOR(uint32_t, 2))(4294967291UL)), 4294967293UL)).s7)) < l_288.sa), p_125, 0x43ADL, ((VECTOR(int16_t, 8))(2L)), p_1171->g_4, 1L, p_1171->g_184[2][0][3], (-3L), 0x5D12L)).s4 != p_1171->g_184[2][3][0]) , p_124), p_1171->g_155.x)), 0x70L, (-1L), 0x45L)).yxwwwwwzzwxyzzwy)))).hi))), ((VECTOR(int8_t, 2))(0x33L)), 0x1BL, ((VECTOR(int8_t, 4))(6L)))).sf, p_1171->g_5)))
            { /* block id: 136 */
                int32_t *l_297 = &l_257;
                int32_t l_299 = 0L;
                uint64_t l_300[8][3][9] = {{{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL}},{{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL}},{{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL}},{{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL}},{{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL}},{{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL}},{{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL}},{{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL},{0xF3F6BD6B748E914FL,0xF3F6BD6B748E914FL,0x5A6EB08D93545C00L,1UL,0x0BBF694970F5AB09L,0xEE5804FEDB642029L,0x45D16D59C3A3E59FL,0x4651075F8E6D0F4AL,0x45D16D59C3A3E59FL}}};
                int i, j, k;
                (*p_126) = (*p_126);
                for (p_1171->g_182 = 0; (p_1171->g_182 >= 23); p_1171->g_182 = safe_add_func_uint8_t_u_u(p_1171->g_182, 5))
                { /* block id: 140 */
                    uint8_t l_296 = 0x5EL;
                    int32_t *l_298 = &l_277;
                    if (((*p_1171->g_145) = (l_253.f0 <= GROUP_DIVERGE(2, 1))))
                    { /* block id: 142 */
                        int32_t *l_291 = &l_269;
                        l_291 = func_132((*p_1171->g_144), p_1171);
                        (*p_1171->g_145) = (safe_mul_func_uint16_t_u_u(((*l_291) | ((**p_1171->g_144) <= (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_1171->g_184[2][0][3], 0x29L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-10L), 4L)))), 1L, p_127, ((VECTOR(int8_t, 8))(0x58L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))((-5L), ((*l_197) , (p_1171->g_261 , (&p_126 != &p_126))), l_296, (-1L), ((VECTOR(int8_t, 4))((-5L))))).odd)), 4L, 0x6AL, 1L)), 0x1AL, 3L)).se9a5)).w, p_1171->g_184[2][0][3])))), l_280));
                        if ((*l_197))
                            continue;
                    }
                    else
                    { /* block id: 146 */
                        (*p_1171->g_144) = func_132((*p_1171->g_144), p_1171);
                        return p_126;
                    }
                }
                --l_300[6][2][1];
            }
            else
            { /* block id: 152 */
                int64_t l_303 = (-1L);
                int32_t l_304 = 0x3261DA18L;
                int32_t l_305 = 0x64F53CB6L;
                uint32_t l_306 = 9UL;
                --l_306;
                for (p_1171->g_150 = (-22); (p_1171->g_150 >= (-5)); p_1171->g_150 = safe_add_func_uint8_t_u_u(p_1171->g_150, 1))
                { /* block id: 156 */
                    for (p_125 = (-11); (p_125 < (-26)); p_125--)
                    { /* block id: 159 */
                        int32_t *l_313 = &l_304;
                        l_314 = ((*p_1171->g_144) = func_132(l_313, p_1171));
                        l_313 = (p_126 = (*p_1171->g_144));
                    }
                }
            }
            return l_315[2];
        }
        else
        { /* block id: 168 */
            uint32_t l_318 = 6UL;
            for (p_1171->g_5 = (-18); (p_1171->g_5 >= 19); p_1171->g_5 = safe_add_func_int16_t_s_s(p_1171->g_5, 8))
            { /* block id: 171 */
                --l_318;
            }
        }
    }
    if ((((safe_rshift_func_uint8_t_u_u((p_127 = p_1171->g_214.sa), 4)) != (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x7352L, 0L)), 0x5EE6L, 4L)).z < (((*p_126) ^= ((GROUP_DIVERGE(2, 1) , l_323[1][4][0]) != (void*)0)) < ((safe_mod_func_uint16_t_u_u((((((*l_347) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_326.yyxy)).lo)), 8L)), ((VECTOR(int32_t, 8))((*l_314), 0x682977ADL, (safe_sub_func_uint8_t_u_u((p_1171->g_335++), (((safe_sub_func_int8_t_s_s(((0UL >= p_124) < (p_1171->g_261--)), (safe_lshift_func_int8_t_s_s(0x1EL, ((*l_314) = ((((safe_mod_func_int8_t_s_s(((0x17L | ((*l_314) , p_125)) , (-2L)), 247UL)) != p_124) , p_125) || p_124)))))) <= (-1L)) & p_124))), 0x71FE5527L, 0x3CC50A40L, (-10L), (-5L), 0x2B8D369AL)), ((VECTOR(int32_t, 2))(0x4998A925L)), 0L, 0x13886E89L)).s8332, ((VECTOR(int32_t, 4))(0x3BA066C9L))))).xxwwzzwz, (int32_t)(*l_314)))).s34)).yxyyyxyx)).hi)).even, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(0x5F0BA095L))))))), (-2L), (-2L))), 0x329C4F5BL, ((VECTOR(int32_t, 2))(0x0534BFD1L)), 0x6223D8DAL)).s0) | p_1171->g_184[2][0][3]) >= (-4L)) < 0x585FL), 9UL)) | p_125)))) != 9UL))
    { /* block id: 182 */
        int32_t l_348 = 1L;
        int32_t *l_349[3][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        l_350++;
    }
    else
    { /* block id: 184 */
        int32_t l_363 = 1L;
        int16_t *l_367 = &p_1171->g_184[2][0][3];
        int32_t *l_368 = &p_1171->g_150;
        int32_t *l_369 = &l_257;
        int32_t *l_370 = &l_257;
        int32_t *l_371 = &l_237;
        int32_t *l_372 = &l_363;
        int32_t l_373[9] = {0x19503C98L,0x19503C98L,0x19503C98L,0x19503C98L,0x19503C98L,0x19503C98L,0x19503C98L,0x19503C98L,0x19503C98L};
        int32_t *l_374 = (void*)0;
        int32_t *l_375 = &p_1171->g_150;
        int32_t *l_376 = (void*)0;
        int32_t *l_377 = (void*)0;
        int32_t *l_378 = &l_257;
        int32_t *l_379 = &l_363;
        int32_t *l_380[9] = {&p_1171->g_150,(void*)0,&p_1171->g_150,&p_1171->g_150,(void*)0,&p_1171->g_150,&p_1171->g_150,(void*)0,&p_1171->g_150};
        int64_t l_381 = 0x43832213771A649FL;
        int i;
        (*p_126) = ((safe_rshift_func_uint16_t_u_s(p_1171->g_185, p_1171->g_234)) , (*l_314));
        (*l_347) = (safe_add_func_int16_t_s_s((((*l_314) = ((*p_1171->g_145) || ((!p_125) , ((*p_1171->g_145) |= (safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((p_1171->g_261 |= 0x2F4FL), (((safe_sub_func_int32_t_s_s(4L, (l_363 ^ ((FAKE_DIVERGE(p_1171->global_0_offset, get_global_id(0), 10) || 4UL) , 0L)))) , (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_1171->g_364.yxxxyyyy)))).s7 & (~0xA6DC8848L))) ^ ((*l_367) = (safe_mod_func_uint16_t_u_u(0x56FAL, l_363)))))), 0x5CB03915L)))))) , p_1171->g_214.s6), 0xD46CL));
        l_385--;
    }
    (*l_347) = (((((*l_314) , ((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(l_388.s54)).xxyy, ((VECTOR(uint8_t, 8))(p_1171->g_389.s21114433)).lo))).x) , ((void*)0 == l_340[0])) , p_1171->g_145) == p_1171->g_145);
    return p_126;
}


/* ------------------------------------------ */
/* 
 * reads : p_1171->g_140 p_1171->g_144 p_1171->g_5
 * writes: p_1171->g_140 p_1171->g_145
 */
int8_t  func_128(uint32_t  p_129, uint32_t  p_130, struct S1 * p_1171)
{ /* block id: 81 */
    int32_t *l_134 = &p_1171->g_5;
    int32_t **l_143 = (void*)0;
    (*p_1171->g_144) = func_132(l_134, p_1171);
    return (*l_134);
}


/* ------------------------------------------ */
/* 
 * reads : p_1171->g_140
 * writes: p_1171->g_140
 */
int32_t * func_132(int32_t * p_133, struct S1 * p_1171)
{ /* block id: 82 */
    int32_t *l_135 = &p_1171->g_5;
    int32_t *l_136 = (void*)0;
    int32_t *l_137 = (void*)0;
    int32_t *l_138 = &p_1171->g_5;
    int32_t *l_139[8][6][5] = {{{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5}},{{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5}},{{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5}},{{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5}},{{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5}},{{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5}},{{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5}},{{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5},{&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5,&p_1171->g_5}}};
    int i, j, k;
    ++p_1171->g_140;
    return p_133;
}


/* ------------------------------------------ */
/* 
 * reads : p_1171->g_150 p_1171->g_155 p_1171->g_comm_values p_1171->g_174 p_1171->g_5 p_1171->l_comm_values p_1171->g_185
 * writes: p_1171->g_150 p_1171->g_155 p_1171->g_149 p_1171->g_182 p_1171->g_184 p_1171->g_185
 */
int8_t  func_146(int32_t ** p_147, struct S1 * p_1171)
{ /* block id: 87 */
    int32_t *l_160[4];
    int32_t ***l_161 = &p_1171->g_149;
    int32_t **l_162 = &l_160[3];
    VECTOR(uint32_t, 2) l_173 = (VECTOR(uint32_t, 2))(0x35A1D51EL, 5UL);
    int32_t ***l_176[2][4][10] = {{{&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162},{&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162},{&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162},{&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162}},{{&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162},{&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162},{&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162},{&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162,&l_162}}};
    int32_t ****l_175 = &l_176[0][0][5];
    int16_t *l_181 = &p_1171->g_182;
    int16_t *l_183[3];
    uint64_t l_186 = 0xD4D54A4C857A1910L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_160[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_183[i] = &p_1171->g_184[2][0][3];
    for (p_1171->g_150 = 0; (p_1171->g_150 > (-30)); p_1171->g_150 = safe_sub_func_uint64_t_u_u(p_1171->g_150, 8))
    { /* block id: 90 */
        return p_1171->g_150;
    }
    for (p_1171->g_150 = 0; (p_1171->g_150 <= 15); ++p_1171->g_150)
    { /* block id: 95 */
        for (p_1171->g_155.x = 0; (p_1171->g_155.x < (-12)); p_1171->g_155.x--)
        { /* block id: 98 */
            int32_t *l_159 = (void*)0;
            int32_t **l_158 = &l_159;
            (*l_158) = &p_1171->g_5;
            l_160[3] = (*l_158);
            return p_1171->g_comm_values[p_1171->tid];
        }
    }
    p_1171->g_185 |= (p_1171->g_150 = ((((((*l_161) = (void*)0) != p_147) ^ ((!((void*)0 != l_162)) && ((safe_mul_func_int16_t_s_s((((-7L) > ((0x789DL < ((safe_mod_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s((p_1171->g_184[7][2][4] = (((((*l_181) = (((((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_173.yxxxxyxxxyyyxyxy)))).s9 , p_1171->g_174) == ((*l_175) = &p_147)) == (safe_mod_func_uint8_t_u_u(((((VECTOR(int64_t, 8))((safe_mul_func_uint8_t_u_u(p_1171->g_5, p_1171->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))])), p_1171->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))], 0x05D245C51EAD67A6L, ((VECTOR(int64_t, 4))(0L)), 1L)).s5 | p_1171->g_155.y) < p_1171->g_comm_values[p_1171->tid]), 0xD3L))) == 0xBE37L) == p_1171->g_5)) <= 0x1EB4L) <= 1UL) , p_1171->g_5)), 0x6AFBL)), 6)), 0L)), p_1171->g_5)) | p_1171->g_150)) != p_1171->g_155.x)) >= 0UL), p_1171->g_comm_values[p_1171->tid])) || 0x2BF4L))) >= p_1171->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1171->tid, 33))]) != 0x80D330B0L));
    return l_186;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[66];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 66; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[66];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 66; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[33];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 33; i++)
            l_comm_values[i] = 1;
    struct S1 c_1172;
    struct S1* p_1171 = &c_1172;
    struct S1 c_1173 = {
        1L, // p_1171->g_2
        0L, // p_1171->g_3
        0x10A624CDL, // p_1171->g_4
        0x2AAEB9AEL, // p_1171->g_5
        0x7CBAL, // p_1171->g_140
        &p_1171->g_5, // p_1171->g_145
        &p_1171->g_145, // p_1171->g_144
        (void*)0, // p_1171->g_149
        0x209B46BFL, // p_1171->g_150
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), // p_1171->g_155
        (void*)0, // p_1171->g_174
        (-8L), // p_1171->g_182
        {{{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL}},{{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL}},{{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL}},{{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL}},{{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL}},{{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL}},{{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL}},{{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL}},{{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL},{0x201CL,0x201CL,0x201CL,0x201CL,0x201CL}}}, // p_1171->g_184
        0x5FB0L, // p_1171->g_185
        (VECTOR(int8_t, 16))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x12L), 0x12L), 0x12L, 6L, 0x12L, (VECTOR(int8_t, 2))(6L, 0x12L), (VECTOR(int8_t, 2))(6L, 0x12L), 6L, 0x12L, 6L, 0x12L), // p_1171->g_214
        {{{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L}},{{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L}},{{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L}},{{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L}},{{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L}},{{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L}},{{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L}},{{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L},{0x11L,0L,0x05L,0L}}}, // p_1171->g_220
        0L, // p_1171->g_234
        0x4A49926629D0FCF4L, // p_1171->g_259
        &p_1171->g_259, // p_1171->g_258
        0UL, // p_1171->g_261
        65530UL, // p_1171->g_335
        (VECTOR(int32_t, 2))(1L, 1L), // p_1171->g_364
        (VECTOR(uint8_t, 8))(0xB1L, (VECTOR(uint8_t, 4))(0xB1L, (VECTOR(uint8_t, 2))(0xB1L, 0x79L), 0x79L), 0x79L, 0xB1L, 0x79L), // p_1171->g_389
        (-10L), // p_1171->g_396
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x1E2BL), 0x1E2BL), // p_1171->g_417
        {{{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL}},{{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL}},{{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL}},{{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL},{0x616ADC4BL,4294967295UL,0x0CCE68ACL,0UL,9UL}}}, // p_1171->g_426
        0UL, // p_1171->g_428
        0x254E828D17BC6A34L, // p_1171->g_430
        0x5B7E220D12E5B7DDL, // p_1171->g_432
        {0x68962453L}, // p_1171->g_438
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1171->g_440
        {{&p_1171->g_440[4],&p_1171->g_440[4],&p_1171->g_440[4],&p_1171->g_440[4],&p_1171->g_440[4],&p_1171->g_440[4],&p_1171->g_440[4],&p_1171->g_440[4]}}, // p_1171->g_439
        (VECTOR(uint8_t, 16))(0x8DL, (VECTOR(uint8_t, 4))(0x8DL, (VECTOR(uint8_t, 2))(0x8DL, 0xE2L), 0xE2L), 0xE2L, 0x8DL, 0xE2L, (VECTOR(uint8_t, 2))(0x8DL, 0xE2L), (VECTOR(uint8_t, 2))(0x8DL, 0xE2L), 0x8DL, 0xE2L, 0x8DL, 0xE2L), // p_1171->g_455
        (VECTOR(uint8_t, 4))(0xC4L, (VECTOR(uint8_t, 2))(0xC4L, 1UL), 1UL), // p_1171->g_459
        (VECTOR(uint8_t, 16))(0x8AL, (VECTOR(uint8_t, 4))(0x8AL, (VECTOR(uint8_t, 2))(0x8AL, 0x7CL), 0x7CL), 0x7CL, 0x8AL, 0x7CL, (VECTOR(uint8_t, 2))(0x8AL, 0x7CL), (VECTOR(uint8_t, 2))(0x8AL, 0x7CL), 0x8AL, 0x7CL, 0x8AL, 0x7CL), // p_1171->g_461
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 247UL), 247UL), // p_1171->g_462
        0x27E62C02L, // p_1171->g_465
        (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x1BA1CD3EL), 0x1BA1CD3EL), 0x1BA1CD3EL, (-7L), 0x1BA1CD3EL, (VECTOR(int32_t, 2))((-7L), 0x1BA1CD3EL), (VECTOR(int32_t, 2))((-7L), 0x1BA1CD3EL), (-7L), 0x1BA1CD3EL, (-7L), 0x1BA1CD3EL), // p_1171->g_484
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 8UL), 8UL), 8UL, 1UL, 8UL), // p_1171->g_500
        (VECTOR(uint8_t, 2))(0x81L, 0x6FL), // p_1171->g_501
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 250UL), 250UL), 250UL, 255UL, 250UL), // p_1171->g_502
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xDCL), 0xDCL), 0xDCL, 0UL, 0xDCL, (VECTOR(uint8_t, 2))(0UL, 0xDCL), (VECTOR(uint8_t, 2))(0UL, 0xDCL), 0UL, 0xDCL, 0UL, 0xDCL), // p_1171->g_504
        (VECTOR(uint64_t, 16))(4UL, (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0xC9E6231781D955CBL), 0xC9E6231781D955CBL), 0xC9E6231781D955CBL, 4UL, 0xC9E6231781D955CBL, (VECTOR(uint64_t, 2))(4UL, 0xC9E6231781D955CBL), (VECTOR(uint64_t, 2))(4UL, 0xC9E6231781D955CBL), 4UL, 0xC9E6231781D955CBL, 4UL, 0xC9E6231781D955CBL), // p_1171->g_528
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x1DEA2AB2EE0FBDE8L), 0x1DEA2AB2EE0FBDE8L), 0x1DEA2AB2EE0FBDE8L, 0L, 0x1DEA2AB2EE0FBDE8L), // p_1171->g_535
        3L, // p_1171->g_541
        (void*)0, // p_1171->g_547
        (VECTOR(uint16_t, 8))(0x850EL, (VECTOR(uint16_t, 4))(0x850EL, (VECTOR(uint16_t, 2))(0x850EL, 8UL), 8UL), 8UL, 0x850EL, 8UL), // p_1171->g_556
        (-1L), // p_1171->g_616
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x33L), 0x33L), 0x33L, (-1L), 0x33L), // p_1171->g_621
        (VECTOR(int64_t, 4))(0x1B015BA3EF8DCEE0L, (VECTOR(int64_t, 2))(0x1B015BA3EF8DCEE0L, 0x2B7DCA739C862332L), 0x2B7DCA739C862332L), // p_1171->g_625
        (VECTOR(uint32_t, 8))(0x15264404L, (VECTOR(uint32_t, 4))(0x15264404L, (VECTOR(uint32_t, 2))(0x15264404L, 0UL), 0UL), 0UL, 0x15264404L, 0UL), // p_1171->g_647
        (VECTOR(uint32_t, 8))(0xBFB397A6L, (VECTOR(uint32_t, 4))(0xBFB397A6L, (VECTOR(uint32_t, 2))(0xBFB397A6L, 0xB9BFCA65L), 0xB9BFCA65L), 0xB9BFCA65L, 0xBFB397A6L, 0xB9BFCA65L), // p_1171->g_680
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-6L)), (-6L)), // p_1171->g_682
        (VECTOR(int16_t, 4))(0x6465L, (VECTOR(int16_t, 2))(0x6465L, (-10L)), (-10L)), // p_1171->g_683
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 18446744073709551615UL, 18446744073709551614UL), // p_1171->g_693
        (VECTOR(int64_t, 8))((-4L), (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L), // p_1171->g_698
        (VECTOR(int64_t, 8))(0x10E979624AE1FCBEL, (VECTOR(int64_t, 4))(0x10E979624AE1FCBEL, (VECTOR(int64_t, 2))(0x10E979624AE1FCBEL, 5L), 5L), 5L, 0x10E979624AE1FCBEL, 5L), // p_1171->g_699
        (VECTOR(int64_t, 2))(0x5911483B5B881603L, 0x6855E7C0B120A014L), // p_1171->g_700
        (VECTOR(int64_t, 16))(0x65F5CFF77811052FL, (VECTOR(int64_t, 4))(0x65F5CFF77811052FL, (VECTOR(int64_t, 2))(0x65F5CFF77811052FL, 0x37CF9292E2B7606BL), 0x37CF9292E2B7606BL), 0x37CF9292E2B7606BL, 0x65F5CFF77811052FL, 0x37CF9292E2B7606BL, (VECTOR(int64_t, 2))(0x65F5CFF77811052FL, 0x37CF9292E2B7606BL), (VECTOR(int64_t, 2))(0x65F5CFF77811052FL, 0x37CF9292E2B7606BL), 0x65F5CFF77811052FL, 0x37CF9292E2B7606BL, 0x65F5CFF77811052FL, 0x37CF9292E2B7606BL), // p_1171->g_701
        0x73399F2CL, // p_1171->g_748
        (void*)0, // p_1171->g_872
        {&p_1171->g_872,&p_1171->g_872,&p_1171->g_872,&p_1171->g_872,&p_1171->g_872,&p_1171->g_872,&p_1171->g_872,&p_1171->g_872}, // p_1171->g_871
        {&p_1171->g_541,&p_1171->g_541,&p_1171->g_541,&p_1171->g_541,&p_1171->g_541}, // p_1171->g_892
        (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x126BL), 0x126BL), // p_1171->g_893
        (VECTOR(int16_t, 16))(0x3663L, (VECTOR(int16_t, 4))(0x3663L, (VECTOR(int16_t, 2))(0x3663L, 0x7E2AL), 0x7E2AL), 0x7E2AL, 0x3663L, 0x7E2AL, (VECTOR(int16_t, 2))(0x3663L, 0x7E2AL), (VECTOR(int16_t, 2))(0x3663L, 0x7E2AL), 0x3663L, 0x7E2AL, 0x3663L, 0x7E2AL), // p_1171->g_894
        1UL, // p_1171->g_896
        (VECTOR(int32_t, 16))(0x06E5D670L, (VECTOR(int32_t, 4))(0x06E5D670L, (VECTOR(int32_t, 2))(0x06E5D670L, (-10L)), (-10L)), (-10L), 0x06E5D670L, (-10L), (VECTOR(int32_t, 2))(0x06E5D670L, (-10L)), (VECTOR(int32_t, 2))(0x06E5D670L, (-10L)), 0x06E5D670L, (-10L), 0x06E5D670L, (-10L)), // p_1171->g_922
        (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xABF5B722L), 0xABF5B722L), // p_1171->g_965
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), // p_1171->g_968
        (VECTOR(uint64_t, 8))(0x9077132B1B0276E8L, (VECTOR(uint64_t, 4))(0x9077132B1B0276E8L, (VECTOR(uint64_t, 2))(0x9077132B1B0276E8L, 0x9B9ED144C887BB1DL), 0x9B9ED144C887BB1DL), 0x9B9ED144C887BB1DL, 0x9077132B1B0276E8L, 0x9B9ED144C887BB1DL), // p_1171->g_973
        (void*)0, // p_1171->g_978
        0x18FC5FC2L, // p_1171->g_1024
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), // p_1171->g_1039
        (void*)0, // p_1171->g_1041
        (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 5L), 5L), // p_1171->g_1068
        {{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL,1UL}}, // p_1171->g_1084
        {{{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145}},{{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145}},{{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145}},{{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145}},{{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145}},{{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145}},{{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145}},{{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145}},{{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145},{&p_1171->g_145,&p_1171->g_145,&p_1171->g_145,&p_1171->g_145}}}, // p_1171->g_1086
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L), // p_1171->g_1093
        (VECTOR(int32_t, 16))(0x5886F902L, (VECTOR(int32_t, 4))(0x5886F902L, (VECTOR(int32_t, 2))(0x5886F902L, 0x4DF5C2ECL), 0x4DF5C2ECL), 0x4DF5C2ECL, 0x5886F902L, 0x4DF5C2ECL, (VECTOR(int32_t, 2))(0x5886F902L, 0x4DF5C2ECL), (VECTOR(int32_t, 2))(0x5886F902L, 0x4DF5C2ECL), 0x5886F902L, 0x4DF5C2ECL, 0x5886F902L, 0x4DF5C2ECL), // p_1171->g_1094
        (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x37626D9FL), 0x37626D9FL), // p_1171->g_1122
        (VECTOR(int32_t, 16))(0x757B5335L, (VECTOR(int32_t, 4))(0x757B5335L, (VECTOR(int32_t, 2))(0x757B5335L, 0L), 0L), 0L, 0x757B5335L, 0L, (VECTOR(int32_t, 2))(0x757B5335L, 0L), (VECTOR(int32_t, 2))(0x757B5335L, 0L), 0x757B5335L, 0L, 0x757B5335L, 0L), // p_1171->g_1123
        (VECTOR(int32_t, 8))(0x7E411F49L, (VECTOR(int32_t, 4))(0x7E411F49L, (VECTOR(int32_t, 2))(0x7E411F49L, 0x12F97E7FL), 0x12F97E7FL), 0x12F97E7FL, 0x7E411F49L, 0x12F97E7FL), // p_1171->g_1124
        (VECTOR(int32_t, 2))(0x70CFE9ADL, (-1L)), // p_1171->g_1128
        (VECTOR(int32_t, 2))(0x636C486AL, (-7L)), // p_1171->g_1130
        (VECTOR(int32_t, 4))(0x28DF587DL, (VECTOR(int32_t, 2))(0x28DF587DL, 0x678C83F4L), 0x678C83F4L), // p_1171->g_1131
        (VECTOR(int32_t, 16))(0x1D5E48A1L, (VECTOR(int32_t, 4))(0x1D5E48A1L, (VECTOR(int32_t, 2))(0x1D5E48A1L, 0x0F27B948L), 0x0F27B948L), 0x0F27B948L, 0x1D5E48A1L, 0x0F27B948L, (VECTOR(int32_t, 2))(0x1D5E48A1L, 0x0F27B948L), (VECTOR(int32_t, 2))(0x1D5E48A1L, 0x0F27B948L), 0x1D5E48A1L, 0x0F27B948L, 0x1D5E48A1L, 0x0F27B948L), // p_1171->g_1134
        (VECTOR(int32_t, 8))(0x0F630F50L, (VECTOR(int32_t, 4))(0x0F630F50L, (VECTOR(int32_t, 2))(0x0F630F50L, 8L), 8L), 8L, 0x0F630F50L, 8L), // p_1171->g_1136
        (VECTOR(uint16_t, 2))(1UL, 9UL), // p_1171->g_1140
        (VECTOR(uint32_t, 2))(4294967295UL, 0x72055839L), // p_1171->g_1163
        0, // p_1171->v_collective
        sequence_input[get_global_id(0)], // p_1171->global_0_offset
        sequence_input[get_global_id(1)], // p_1171->global_1_offset
        sequence_input[get_global_id(2)], // p_1171->global_2_offset
        sequence_input[get_local_id(0)], // p_1171->local_0_offset
        sequence_input[get_local_id(1)], // p_1171->local_1_offset
        sequence_input[get_local_id(2)], // p_1171->local_2_offset
        sequence_input[get_group_id(0)], // p_1171->group_0_offset
        sequence_input[get_group_id(1)], // p_1171->group_1_offset
        sequence_input[get_group_id(2)], // p_1171->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 33)), permutations[0][get_linear_local_id()])), // p_1171->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1172 = c_1173;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1171);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1171->g_2, "p_1171->g_2", print_hash_value);
    transparent_crc(p_1171->g_3, "p_1171->g_3", print_hash_value);
    transparent_crc(p_1171->g_4, "p_1171->g_4", print_hash_value);
    transparent_crc(p_1171->g_5, "p_1171->g_5", print_hash_value);
    transparent_crc(p_1171->g_140, "p_1171->g_140", print_hash_value);
    transparent_crc(p_1171->g_150, "p_1171->g_150", print_hash_value);
    transparent_crc(p_1171->g_155.x, "p_1171->g_155.x", print_hash_value);
    transparent_crc(p_1171->g_155.y, "p_1171->g_155.y", print_hash_value);
    transparent_crc(p_1171->g_155.z, "p_1171->g_155.z", print_hash_value);
    transparent_crc(p_1171->g_155.w, "p_1171->g_155.w", print_hash_value);
    transparent_crc(p_1171->g_182, "p_1171->g_182", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1171->g_184[i][j][k], "p_1171->g_184[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1171->g_185, "p_1171->g_185", print_hash_value);
    transparent_crc(p_1171->g_214.s0, "p_1171->g_214.s0", print_hash_value);
    transparent_crc(p_1171->g_214.s1, "p_1171->g_214.s1", print_hash_value);
    transparent_crc(p_1171->g_214.s2, "p_1171->g_214.s2", print_hash_value);
    transparent_crc(p_1171->g_214.s3, "p_1171->g_214.s3", print_hash_value);
    transparent_crc(p_1171->g_214.s4, "p_1171->g_214.s4", print_hash_value);
    transparent_crc(p_1171->g_214.s5, "p_1171->g_214.s5", print_hash_value);
    transparent_crc(p_1171->g_214.s6, "p_1171->g_214.s6", print_hash_value);
    transparent_crc(p_1171->g_214.s7, "p_1171->g_214.s7", print_hash_value);
    transparent_crc(p_1171->g_214.s8, "p_1171->g_214.s8", print_hash_value);
    transparent_crc(p_1171->g_214.s9, "p_1171->g_214.s9", print_hash_value);
    transparent_crc(p_1171->g_214.sa, "p_1171->g_214.sa", print_hash_value);
    transparent_crc(p_1171->g_214.sb, "p_1171->g_214.sb", print_hash_value);
    transparent_crc(p_1171->g_214.sc, "p_1171->g_214.sc", print_hash_value);
    transparent_crc(p_1171->g_214.sd, "p_1171->g_214.sd", print_hash_value);
    transparent_crc(p_1171->g_214.se, "p_1171->g_214.se", print_hash_value);
    transparent_crc(p_1171->g_214.sf, "p_1171->g_214.sf", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1171->g_220[i][j][k], "p_1171->g_220[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1171->g_234, "p_1171->g_234", print_hash_value);
    transparent_crc(p_1171->g_259, "p_1171->g_259", print_hash_value);
    transparent_crc(p_1171->g_261, "p_1171->g_261", print_hash_value);
    transparent_crc(p_1171->g_335, "p_1171->g_335", print_hash_value);
    transparent_crc(p_1171->g_364.x, "p_1171->g_364.x", print_hash_value);
    transparent_crc(p_1171->g_364.y, "p_1171->g_364.y", print_hash_value);
    transparent_crc(p_1171->g_389.s0, "p_1171->g_389.s0", print_hash_value);
    transparent_crc(p_1171->g_389.s1, "p_1171->g_389.s1", print_hash_value);
    transparent_crc(p_1171->g_389.s2, "p_1171->g_389.s2", print_hash_value);
    transparent_crc(p_1171->g_389.s3, "p_1171->g_389.s3", print_hash_value);
    transparent_crc(p_1171->g_389.s4, "p_1171->g_389.s4", print_hash_value);
    transparent_crc(p_1171->g_389.s5, "p_1171->g_389.s5", print_hash_value);
    transparent_crc(p_1171->g_389.s6, "p_1171->g_389.s6", print_hash_value);
    transparent_crc(p_1171->g_389.s7, "p_1171->g_389.s7", print_hash_value);
    transparent_crc(p_1171->g_396, "p_1171->g_396", print_hash_value);
    transparent_crc(p_1171->g_417.x, "p_1171->g_417.x", print_hash_value);
    transparent_crc(p_1171->g_417.y, "p_1171->g_417.y", print_hash_value);
    transparent_crc(p_1171->g_417.z, "p_1171->g_417.z", print_hash_value);
    transparent_crc(p_1171->g_417.w, "p_1171->g_417.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1171->g_426[i][j][k], "p_1171->g_426[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1171->g_428, "p_1171->g_428", print_hash_value);
    transparent_crc(p_1171->g_430, "p_1171->g_430", print_hash_value);
    transparent_crc(p_1171->g_432, "p_1171->g_432", print_hash_value);
    transparent_crc(p_1171->g_438.f0, "p_1171->g_438.f0", print_hash_value);
    transparent_crc(p_1171->g_455.s0, "p_1171->g_455.s0", print_hash_value);
    transparent_crc(p_1171->g_455.s1, "p_1171->g_455.s1", print_hash_value);
    transparent_crc(p_1171->g_455.s2, "p_1171->g_455.s2", print_hash_value);
    transparent_crc(p_1171->g_455.s3, "p_1171->g_455.s3", print_hash_value);
    transparent_crc(p_1171->g_455.s4, "p_1171->g_455.s4", print_hash_value);
    transparent_crc(p_1171->g_455.s5, "p_1171->g_455.s5", print_hash_value);
    transparent_crc(p_1171->g_455.s6, "p_1171->g_455.s6", print_hash_value);
    transparent_crc(p_1171->g_455.s7, "p_1171->g_455.s7", print_hash_value);
    transparent_crc(p_1171->g_455.s8, "p_1171->g_455.s8", print_hash_value);
    transparent_crc(p_1171->g_455.s9, "p_1171->g_455.s9", print_hash_value);
    transparent_crc(p_1171->g_455.sa, "p_1171->g_455.sa", print_hash_value);
    transparent_crc(p_1171->g_455.sb, "p_1171->g_455.sb", print_hash_value);
    transparent_crc(p_1171->g_455.sc, "p_1171->g_455.sc", print_hash_value);
    transparent_crc(p_1171->g_455.sd, "p_1171->g_455.sd", print_hash_value);
    transparent_crc(p_1171->g_455.se, "p_1171->g_455.se", print_hash_value);
    transparent_crc(p_1171->g_455.sf, "p_1171->g_455.sf", print_hash_value);
    transparent_crc(p_1171->g_459.x, "p_1171->g_459.x", print_hash_value);
    transparent_crc(p_1171->g_459.y, "p_1171->g_459.y", print_hash_value);
    transparent_crc(p_1171->g_459.z, "p_1171->g_459.z", print_hash_value);
    transparent_crc(p_1171->g_459.w, "p_1171->g_459.w", print_hash_value);
    transparent_crc(p_1171->g_461.s0, "p_1171->g_461.s0", print_hash_value);
    transparent_crc(p_1171->g_461.s1, "p_1171->g_461.s1", print_hash_value);
    transparent_crc(p_1171->g_461.s2, "p_1171->g_461.s2", print_hash_value);
    transparent_crc(p_1171->g_461.s3, "p_1171->g_461.s3", print_hash_value);
    transparent_crc(p_1171->g_461.s4, "p_1171->g_461.s4", print_hash_value);
    transparent_crc(p_1171->g_461.s5, "p_1171->g_461.s5", print_hash_value);
    transparent_crc(p_1171->g_461.s6, "p_1171->g_461.s6", print_hash_value);
    transparent_crc(p_1171->g_461.s7, "p_1171->g_461.s7", print_hash_value);
    transparent_crc(p_1171->g_461.s8, "p_1171->g_461.s8", print_hash_value);
    transparent_crc(p_1171->g_461.s9, "p_1171->g_461.s9", print_hash_value);
    transparent_crc(p_1171->g_461.sa, "p_1171->g_461.sa", print_hash_value);
    transparent_crc(p_1171->g_461.sb, "p_1171->g_461.sb", print_hash_value);
    transparent_crc(p_1171->g_461.sc, "p_1171->g_461.sc", print_hash_value);
    transparent_crc(p_1171->g_461.sd, "p_1171->g_461.sd", print_hash_value);
    transparent_crc(p_1171->g_461.se, "p_1171->g_461.se", print_hash_value);
    transparent_crc(p_1171->g_461.sf, "p_1171->g_461.sf", print_hash_value);
    transparent_crc(p_1171->g_462.x, "p_1171->g_462.x", print_hash_value);
    transparent_crc(p_1171->g_462.y, "p_1171->g_462.y", print_hash_value);
    transparent_crc(p_1171->g_462.z, "p_1171->g_462.z", print_hash_value);
    transparent_crc(p_1171->g_462.w, "p_1171->g_462.w", print_hash_value);
    transparent_crc(p_1171->g_465, "p_1171->g_465", print_hash_value);
    transparent_crc(p_1171->g_484.s0, "p_1171->g_484.s0", print_hash_value);
    transparent_crc(p_1171->g_484.s1, "p_1171->g_484.s1", print_hash_value);
    transparent_crc(p_1171->g_484.s2, "p_1171->g_484.s2", print_hash_value);
    transparent_crc(p_1171->g_484.s3, "p_1171->g_484.s3", print_hash_value);
    transparent_crc(p_1171->g_484.s4, "p_1171->g_484.s4", print_hash_value);
    transparent_crc(p_1171->g_484.s5, "p_1171->g_484.s5", print_hash_value);
    transparent_crc(p_1171->g_484.s6, "p_1171->g_484.s6", print_hash_value);
    transparent_crc(p_1171->g_484.s7, "p_1171->g_484.s7", print_hash_value);
    transparent_crc(p_1171->g_484.s8, "p_1171->g_484.s8", print_hash_value);
    transparent_crc(p_1171->g_484.s9, "p_1171->g_484.s9", print_hash_value);
    transparent_crc(p_1171->g_484.sa, "p_1171->g_484.sa", print_hash_value);
    transparent_crc(p_1171->g_484.sb, "p_1171->g_484.sb", print_hash_value);
    transparent_crc(p_1171->g_484.sc, "p_1171->g_484.sc", print_hash_value);
    transparent_crc(p_1171->g_484.sd, "p_1171->g_484.sd", print_hash_value);
    transparent_crc(p_1171->g_484.se, "p_1171->g_484.se", print_hash_value);
    transparent_crc(p_1171->g_484.sf, "p_1171->g_484.sf", print_hash_value);
    transparent_crc(p_1171->g_500.s0, "p_1171->g_500.s0", print_hash_value);
    transparent_crc(p_1171->g_500.s1, "p_1171->g_500.s1", print_hash_value);
    transparent_crc(p_1171->g_500.s2, "p_1171->g_500.s2", print_hash_value);
    transparent_crc(p_1171->g_500.s3, "p_1171->g_500.s3", print_hash_value);
    transparent_crc(p_1171->g_500.s4, "p_1171->g_500.s4", print_hash_value);
    transparent_crc(p_1171->g_500.s5, "p_1171->g_500.s5", print_hash_value);
    transparent_crc(p_1171->g_500.s6, "p_1171->g_500.s6", print_hash_value);
    transparent_crc(p_1171->g_500.s7, "p_1171->g_500.s7", print_hash_value);
    transparent_crc(p_1171->g_501.x, "p_1171->g_501.x", print_hash_value);
    transparent_crc(p_1171->g_501.y, "p_1171->g_501.y", print_hash_value);
    transparent_crc(p_1171->g_502.s0, "p_1171->g_502.s0", print_hash_value);
    transparent_crc(p_1171->g_502.s1, "p_1171->g_502.s1", print_hash_value);
    transparent_crc(p_1171->g_502.s2, "p_1171->g_502.s2", print_hash_value);
    transparent_crc(p_1171->g_502.s3, "p_1171->g_502.s3", print_hash_value);
    transparent_crc(p_1171->g_502.s4, "p_1171->g_502.s4", print_hash_value);
    transparent_crc(p_1171->g_502.s5, "p_1171->g_502.s5", print_hash_value);
    transparent_crc(p_1171->g_502.s6, "p_1171->g_502.s6", print_hash_value);
    transparent_crc(p_1171->g_502.s7, "p_1171->g_502.s7", print_hash_value);
    transparent_crc(p_1171->g_504.s0, "p_1171->g_504.s0", print_hash_value);
    transparent_crc(p_1171->g_504.s1, "p_1171->g_504.s1", print_hash_value);
    transparent_crc(p_1171->g_504.s2, "p_1171->g_504.s2", print_hash_value);
    transparent_crc(p_1171->g_504.s3, "p_1171->g_504.s3", print_hash_value);
    transparent_crc(p_1171->g_504.s4, "p_1171->g_504.s4", print_hash_value);
    transparent_crc(p_1171->g_504.s5, "p_1171->g_504.s5", print_hash_value);
    transparent_crc(p_1171->g_504.s6, "p_1171->g_504.s6", print_hash_value);
    transparent_crc(p_1171->g_504.s7, "p_1171->g_504.s7", print_hash_value);
    transparent_crc(p_1171->g_504.s8, "p_1171->g_504.s8", print_hash_value);
    transparent_crc(p_1171->g_504.s9, "p_1171->g_504.s9", print_hash_value);
    transparent_crc(p_1171->g_504.sa, "p_1171->g_504.sa", print_hash_value);
    transparent_crc(p_1171->g_504.sb, "p_1171->g_504.sb", print_hash_value);
    transparent_crc(p_1171->g_504.sc, "p_1171->g_504.sc", print_hash_value);
    transparent_crc(p_1171->g_504.sd, "p_1171->g_504.sd", print_hash_value);
    transparent_crc(p_1171->g_504.se, "p_1171->g_504.se", print_hash_value);
    transparent_crc(p_1171->g_504.sf, "p_1171->g_504.sf", print_hash_value);
    transparent_crc(p_1171->g_528.s0, "p_1171->g_528.s0", print_hash_value);
    transparent_crc(p_1171->g_528.s1, "p_1171->g_528.s1", print_hash_value);
    transparent_crc(p_1171->g_528.s2, "p_1171->g_528.s2", print_hash_value);
    transparent_crc(p_1171->g_528.s3, "p_1171->g_528.s3", print_hash_value);
    transparent_crc(p_1171->g_528.s4, "p_1171->g_528.s4", print_hash_value);
    transparent_crc(p_1171->g_528.s5, "p_1171->g_528.s5", print_hash_value);
    transparent_crc(p_1171->g_528.s6, "p_1171->g_528.s6", print_hash_value);
    transparent_crc(p_1171->g_528.s7, "p_1171->g_528.s7", print_hash_value);
    transparent_crc(p_1171->g_528.s8, "p_1171->g_528.s8", print_hash_value);
    transparent_crc(p_1171->g_528.s9, "p_1171->g_528.s9", print_hash_value);
    transparent_crc(p_1171->g_528.sa, "p_1171->g_528.sa", print_hash_value);
    transparent_crc(p_1171->g_528.sb, "p_1171->g_528.sb", print_hash_value);
    transparent_crc(p_1171->g_528.sc, "p_1171->g_528.sc", print_hash_value);
    transparent_crc(p_1171->g_528.sd, "p_1171->g_528.sd", print_hash_value);
    transparent_crc(p_1171->g_528.se, "p_1171->g_528.se", print_hash_value);
    transparent_crc(p_1171->g_528.sf, "p_1171->g_528.sf", print_hash_value);
    transparent_crc(p_1171->g_535.s0, "p_1171->g_535.s0", print_hash_value);
    transparent_crc(p_1171->g_535.s1, "p_1171->g_535.s1", print_hash_value);
    transparent_crc(p_1171->g_535.s2, "p_1171->g_535.s2", print_hash_value);
    transparent_crc(p_1171->g_535.s3, "p_1171->g_535.s3", print_hash_value);
    transparent_crc(p_1171->g_535.s4, "p_1171->g_535.s4", print_hash_value);
    transparent_crc(p_1171->g_535.s5, "p_1171->g_535.s5", print_hash_value);
    transparent_crc(p_1171->g_535.s6, "p_1171->g_535.s6", print_hash_value);
    transparent_crc(p_1171->g_535.s7, "p_1171->g_535.s7", print_hash_value);
    transparent_crc(p_1171->g_541, "p_1171->g_541", print_hash_value);
    transparent_crc(p_1171->g_556.s0, "p_1171->g_556.s0", print_hash_value);
    transparent_crc(p_1171->g_556.s1, "p_1171->g_556.s1", print_hash_value);
    transparent_crc(p_1171->g_556.s2, "p_1171->g_556.s2", print_hash_value);
    transparent_crc(p_1171->g_556.s3, "p_1171->g_556.s3", print_hash_value);
    transparent_crc(p_1171->g_556.s4, "p_1171->g_556.s4", print_hash_value);
    transparent_crc(p_1171->g_556.s5, "p_1171->g_556.s5", print_hash_value);
    transparent_crc(p_1171->g_556.s6, "p_1171->g_556.s6", print_hash_value);
    transparent_crc(p_1171->g_556.s7, "p_1171->g_556.s7", print_hash_value);
    transparent_crc(p_1171->g_616, "p_1171->g_616", print_hash_value);
    transparent_crc(p_1171->g_621.s0, "p_1171->g_621.s0", print_hash_value);
    transparent_crc(p_1171->g_621.s1, "p_1171->g_621.s1", print_hash_value);
    transparent_crc(p_1171->g_621.s2, "p_1171->g_621.s2", print_hash_value);
    transparent_crc(p_1171->g_621.s3, "p_1171->g_621.s3", print_hash_value);
    transparent_crc(p_1171->g_621.s4, "p_1171->g_621.s4", print_hash_value);
    transparent_crc(p_1171->g_621.s5, "p_1171->g_621.s5", print_hash_value);
    transparent_crc(p_1171->g_621.s6, "p_1171->g_621.s6", print_hash_value);
    transparent_crc(p_1171->g_621.s7, "p_1171->g_621.s7", print_hash_value);
    transparent_crc(p_1171->g_625.x, "p_1171->g_625.x", print_hash_value);
    transparent_crc(p_1171->g_625.y, "p_1171->g_625.y", print_hash_value);
    transparent_crc(p_1171->g_625.z, "p_1171->g_625.z", print_hash_value);
    transparent_crc(p_1171->g_625.w, "p_1171->g_625.w", print_hash_value);
    transparent_crc(p_1171->g_647.s0, "p_1171->g_647.s0", print_hash_value);
    transparent_crc(p_1171->g_647.s1, "p_1171->g_647.s1", print_hash_value);
    transparent_crc(p_1171->g_647.s2, "p_1171->g_647.s2", print_hash_value);
    transparent_crc(p_1171->g_647.s3, "p_1171->g_647.s3", print_hash_value);
    transparent_crc(p_1171->g_647.s4, "p_1171->g_647.s4", print_hash_value);
    transparent_crc(p_1171->g_647.s5, "p_1171->g_647.s5", print_hash_value);
    transparent_crc(p_1171->g_647.s6, "p_1171->g_647.s6", print_hash_value);
    transparent_crc(p_1171->g_647.s7, "p_1171->g_647.s7", print_hash_value);
    transparent_crc(p_1171->g_680.s0, "p_1171->g_680.s0", print_hash_value);
    transparent_crc(p_1171->g_680.s1, "p_1171->g_680.s1", print_hash_value);
    transparent_crc(p_1171->g_680.s2, "p_1171->g_680.s2", print_hash_value);
    transparent_crc(p_1171->g_680.s3, "p_1171->g_680.s3", print_hash_value);
    transparent_crc(p_1171->g_680.s4, "p_1171->g_680.s4", print_hash_value);
    transparent_crc(p_1171->g_680.s5, "p_1171->g_680.s5", print_hash_value);
    transparent_crc(p_1171->g_680.s6, "p_1171->g_680.s6", print_hash_value);
    transparent_crc(p_1171->g_680.s7, "p_1171->g_680.s7", print_hash_value);
    transparent_crc(p_1171->g_682.x, "p_1171->g_682.x", print_hash_value);
    transparent_crc(p_1171->g_682.y, "p_1171->g_682.y", print_hash_value);
    transparent_crc(p_1171->g_682.z, "p_1171->g_682.z", print_hash_value);
    transparent_crc(p_1171->g_682.w, "p_1171->g_682.w", print_hash_value);
    transparent_crc(p_1171->g_683.x, "p_1171->g_683.x", print_hash_value);
    transparent_crc(p_1171->g_683.y, "p_1171->g_683.y", print_hash_value);
    transparent_crc(p_1171->g_683.z, "p_1171->g_683.z", print_hash_value);
    transparent_crc(p_1171->g_683.w, "p_1171->g_683.w", print_hash_value);
    transparent_crc(p_1171->g_693.s0, "p_1171->g_693.s0", print_hash_value);
    transparent_crc(p_1171->g_693.s1, "p_1171->g_693.s1", print_hash_value);
    transparent_crc(p_1171->g_693.s2, "p_1171->g_693.s2", print_hash_value);
    transparent_crc(p_1171->g_693.s3, "p_1171->g_693.s3", print_hash_value);
    transparent_crc(p_1171->g_693.s4, "p_1171->g_693.s4", print_hash_value);
    transparent_crc(p_1171->g_693.s5, "p_1171->g_693.s5", print_hash_value);
    transparent_crc(p_1171->g_693.s6, "p_1171->g_693.s6", print_hash_value);
    transparent_crc(p_1171->g_693.s7, "p_1171->g_693.s7", print_hash_value);
    transparent_crc(p_1171->g_698.s0, "p_1171->g_698.s0", print_hash_value);
    transparent_crc(p_1171->g_698.s1, "p_1171->g_698.s1", print_hash_value);
    transparent_crc(p_1171->g_698.s2, "p_1171->g_698.s2", print_hash_value);
    transparent_crc(p_1171->g_698.s3, "p_1171->g_698.s3", print_hash_value);
    transparent_crc(p_1171->g_698.s4, "p_1171->g_698.s4", print_hash_value);
    transparent_crc(p_1171->g_698.s5, "p_1171->g_698.s5", print_hash_value);
    transparent_crc(p_1171->g_698.s6, "p_1171->g_698.s6", print_hash_value);
    transparent_crc(p_1171->g_698.s7, "p_1171->g_698.s7", print_hash_value);
    transparent_crc(p_1171->g_699.s0, "p_1171->g_699.s0", print_hash_value);
    transparent_crc(p_1171->g_699.s1, "p_1171->g_699.s1", print_hash_value);
    transparent_crc(p_1171->g_699.s2, "p_1171->g_699.s2", print_hash_value);
    transparent_crc(p_1171->g_699.s3, "p_1171->g_699.s3", print_hash_value);
    transparent_crc(p_1171->g_699.s4, "p_1171->g_699.s4", print_hash_value);
    transparent_crc(p_1171->g_699.s5, "p_1171->g_699.s5", print_hash_value);
    transparent_crc(p_1171->g_699.s6, "p_1171->g_699.s6", print_hash_value);
    transparent_crc(p_1171->g_699.s7, "p_1171->g_699.s7", print_hash_value);
    transparent_crc(p_1171->g_700.x, "p_1171->g_700.x", print_hash_value);
    transparent_crc(p_1171->g_700.y, "p_1171->g_700.y", print_hash_value);
    transparent_crc(p_1171->g_701.s0, "p_1171->g_701.s0", print_hash_value);
    transparent_crc(p_1171->g_701.s1, "p_1171->g_701.s1", print_hash_value);
    transparent_crc(p_1171->g_701.s2, "p_1171->g_701.s2", print_hash_value);
    transparent_crc(p_1171->g_701.s3, "p_1171->g_701.s3", print_hash_value);
    transparent_crc(p_1171->g_701.s4, "p_1171->g_701.s4", print_hash_value);
    transparent_crc(p_1171->g_701.s5, "p_1171->g_701.s5", print_hash_value);
    transparent_crc(p_1171->g_701.s6, "p_1171->g_701.s6", print_hash_value);
    transparent_crc(p_1171->g_701.s7, "p_1171->g_701.s7", print_hash_value);
    transparent_crc(p_1171->g_701.s8, "p_1171->g_701.s8", print_hash_value);
    transparent_crc(p_1171->g_701.s9, "p_1171->g_701.s9", print_hash_value);
    transparent_crc(p_1171->g_701.sa, "p_1171->g_701.sa", print_hash_value);
    transparent_crc(p_1171->g_701.sb, "p_1171->g_701.sb", print_hash_value);
    transparent_crc(p_1171->g_701.sc, "p_1171->g_701.sc", print_hash_value);
    transparent_crc(p_1171->g_701.sd, "p_1171->g_701.sd", print_hash_value);
    transparent_crc(p_1171->g_701.se, "p_1171->g_701.se", print_hash_value);
    transparent_crc(p_1171->g_701.sf, "p_1171->g_701.sf", print_hash_value);
    transparent_crc(p_1171->g_748, "p_1171->g_748", print_hash_value);
    transparent_crc(p_1171->g_893.x, "p_1171->g_893.x", print_hash_value);
    transparent_crc(p_1171->g_893.y, "p_1171->g_893.y", print_hash_value);
    transparent_crc(p_1171->g_893.z, "p_1171->g_893.z", print_hash_value);
    transparent_crc(p_1171->g_893.w, "p_1171->g_893.w", print_hash_value);
    transparent_crc(p_1171->g_894.s0, "p_1171->g_894.s0", print_hash_value);
    transparent_crc(p_1171->g_894.s1, "p_1171->g_894.s1", print_hash_value);
    transparent_crc(p_1171->g_894.s2, "p_1171->g_894.s2", print_hash_value);
    transparent_crc(p_1171->g_894.s3, "p_1171->g_894.s3", print_hash_value);
    transparent_crc(p_1171->g_894.s4, "p_1171->g_894.s4", print_hash_value);
    transparent_crc(p_1171->g_894.s5, "p_1171->g_894.s5", print_hash_value);
    transparent_crc(p_1171->g_894.s6, "p_1171->g_894.s6", print_hash_value);
    transparent_crc(p_1171->g_894.s7, "p_1171->g_894.s7", print_hash_value);
    transparent_crc(p_1171->g_894.s8, "p_1171->g_894.s8", print_hash_value);
    transparent_crc(p_1171->g_894.s9, "p_1171->g_894.s9", print_hash_value);
    transparent_crc(p_1171->g_894.sa, "p_1171->g_894.sa", print_hash_value);
    transparent_crc(p_1171->g_894.sb, "p_1171->g_894.sb", print_hash_value);
    transparent_crc(p_1171->g_894.sc, "p_1171->g_894.sc", print_hash_value);
    transparent_crc(p_1171->g_894.sd, "p_1171->g_894.sd", print_hash_value);
    transparent_crc(p_1171->g_894.se, "p_1171->g_894.se", print_hash_value);
    transparent_crc(p_1171->g_894.sf, "p_1171->g_894.sf", print_hash_value);
    transparent_crc(p_1171->g_896, "p_1171->g_896", print_hash_value);
    transparent_crc(p_1171->g_922.s0, "p_1171->g_922.s0", print_hash_value);
    transparent_crc(p_1171->g_922.s1, "p_1171->g_922.s1", print_hash_value);
    transparent_crc(p_1171->g_922.s2, "p_1171->g_922.s2", print_hash_value);
    transparent_crc(p_1171->g_922.s3, "p_1171->g_922.s3", print_hash_value);
    transparent_crc(p_1171->g_922.s4, "p_1171->g_922.s4", print_hash_value);
    transparent_crc(p_1171->g_922.s5, "p_1171->g_922.s5", print_hash_value);
    transparent_crc(p_1171->g_922.s6, "p_1171->g_922.s6", print_hash_value);
    transparent_crc(p_1171->g_922.s7, "p_1171->g_922.s7", print_hash_value);
    transparent_crc(p_1171->g_922.s8, "p_1171->g_922.s8", print_hash_value);
    transparent_crc(p_1171->g_922.s9, "p_1171->g_922.s9", print_hash_value);
    transparent_crc(p_1171->g_922.sa, "p_1171->g_922.sa", print_hash_value);
    transparent_crc(p_1171->g_922.sb, "p_1171->g_922.sb", print_hash_value);
    transparent_crc(p_1171->g_922.sc, "p_1171->g_922.sc", print_hash_value);
    transparent_crc(p_1171->g_922.sd, "p_1171->g_922.sd", print_hash_value);
    transparent_crc(p_1171->g_922.se, "p_1171->g_922.se", print_hash_value);
    transparent_crc(p_1171->g_922.sf, "p_1171->g_922.sf", print_hash_value);
    transparent_crc(p_1171->g_965.x, "p_1171->g_965.x", print_hash_value);
    transparent_crc(p_1171->g_965.y, "p_1171->g_965.y", print_hash_value);
    transparent_crc(p_1171->g_965.z, "p_1171->g_965.z", print_hash_value);
    transparent_crc(p_1171->g_965.w, "p_1171->g_965.w", print_hash_value);
    transparent_crc(p_1171->g_968.x, "p_1171->g_968.x", print_hash_value);
    transparent_crc(p_1171->g_968.y, "p_1171->g_968.y", print_hash_value);
    transparent_crc(p_1171->g_968.z, "p_1171->g_968.z", print_hash_value);
    transparent_crc(p_1171->g_968.w, "p_1171->g_968.w", print_hash_value);
    transparent_crc(p_1171->g_973.s0, "p_1171->g_973.s0", print_hash_value);
    transparent_crc(p_1171->g_973.s1, "p_1171->g_973.s1", print_hash_value);
    transparent_crc(p_1171->g_973.s2, "p_1171->g_973.s2", print_hash_value);
    transparent_crc(p_1171->g_973.s3, "p_1171->g_973.s3", print_hash_value);
    transparent_crc(p_1171->g_973.s4, "p_1171->g_973.s4", print_hash_value);
    transparent_crc(p_1171->g_973.s5, "p_1171->g_973.s5", print_hash_value);
    transparent_crc(p_1171->g_973.s6, "p_1171->g_973.s6", print_hash_value);
    transparent_crc(p_1171->g_973.s7, "p_1171->g_973.s7", print_hash_value);
    transparent_crc(p_1171->g_1024, "p_1171->g_1024", print_hash_value);
    transparent_crc(p_1171->g_1039.x, "p_1171->g_1039.x", print_hash_value);
    transparent_crc(p_1171->g_1039.y, "p_1171->g_1039.y", print_hash_value);
    transparent_crc(p_1171->g_1039.z, "p_1171->g_1039.z", print_hash_value);
    transparent_crc(p_1171->g_1039.w, "p_1171->g_1039.w", print_hash_value);
    transparent_crc(p_1171->g_1068.x, "p_1171->g_1068.x", print_hash_value);
    transparent_crc(p_1171->g_1068.y, "p_1171->g_1068.y", print_hash_value);
    transparent_crc(p_1171->g_1068.z, "p_1171->g_1068.z", print_hash_value);
    transparent_crc(p_1171->g_1068.w, "p_1171->g_1068.w", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1171->g_1084[i][j], "p_1171->g_1084[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1171->g_1093.s0, "p_1171->g_1093.s0", print_hash_value);
    transparent_crc(p_1171->g_1093.s1, "p_1171->g_1093.s1", print_hash_value);
    transparent_crc(p_1171->g_1093.s2, "p_1171->g_1093.s2", print_hash_value);
    transparent_crc(p_1171->g_1093.s3, "p_1171->g_1093.s3", print_hash_value);
    transparent_crc(p_1171->g_1093.s4, "p_1171->g_1093.s4", print_hash_value);
    transparent_crc(p_1171->g_1093.s5, "p_1171->g_1093.s5", print_hash_value);
    transparent_crc(p_1171->g_1093.s6, "p_1171->g_1093.s6", print_hash_value);
    transparent_crc(p_1171->g_1093.s7, "p_1171->g_1093.s7", print_hash_value);
    transparent_crc(p_1171->g_1094.s0, "p_1171->g_1094.s0", print_hash_value);
    transparent_crc(p_1171->g_1094.s1, "p_1171->g_1094.s1", print_hash_value);
    transparent_crc(p_1171->g_1094.s2, "p_1171->g_1094.s2", print_hash_value);
    transparent_crc(p_1171->g_1094.s3, "p_1171->g_1094.s3", print_hash_value);
    transparent_crc(p_1171->g_1094.s4, "p_1171->g_1094.s4", print_hash_value);
    transparent_crc(p_1171->g_1094.s5, "p_1171->g_1094.s5", print_hash_value);
    transparent_crc(p_1171->g_1094.s6, "p_1171->g_1094.s6", print_hash_value);
    transparent_crc(p_1171->g_1094.s7, "p_1171->g_1094.s7", print_hash_value);
    transparent_crc(p_1171->g_1094.s8, "p_1171->g_1094.s8", print_hash_value);
    transparent_crc(p_1171->g_1094.s9, "p_1171->g_1094.s9", print_hash_value);
    transparent_crc(p_1171->g_1094.sa, "p_1171->g_1094.sa", print_hash_value);
    transparent_crc(p_1171->g_1094.sb, "p_1171->g_1094.sb", print_hash_value);
    transparent_crc(p_1171->g_1094.sc, "p_1171->g_1094.sc", print_hash_value);
    transparent_crc(p_1171->g_1094.sd, "p_1171->g_1094.sd", print_hash_value);
    transparent_crc(p_1171->g_1094.se, "p_1171->g_1094.se", print_hash_value);
    transparent_crc(p_1171->g_1094.sf, "p_1171->g_1094.sf", print_hash_value);
    transparent_crc(p_1171->g_1122.x, "p_1171->g_1122.x", print_hash_value);
    transparent_crc(p_1171->g_1122.y, "p_1171->g_1122.y", print_hash_value);
    transparent_crc(p_1171->g_1122.z, "p_1171->g_1122.z", print_hash_value);
    transparent_crc(p_1171->g_1122.w, "p_1171->g_1122.w", print_hash_value);
    transparent_crc(p_1171->g_1123.s0, "p_1171->g_1123.s0", print_hash_value);
    transparent_crc(p_1171->g_1123.s1, "p_1171->g_1123.s1", print_hash_value);
    transparent_crc(p_1171->g_1123.s2, "p_1171->g_1123.s2", print_hash_value);
    transparent_crc(p_1171->g_1123.s3, "p_1171->g_1123.s3", print_hash_value);
    transparent_crc(p_1171->g_1123.s4, "p_1171->g_1123.s4", print_hash_value);
    transparent_crc(p_1171->g_1123.s5, "p_1171->g_1123.s5", print_hash_value);
    transparent_crc(p_1171->g_1123.s6, "p_1171->g_1123.s6", print_hash_value);
    transparent_crc(p_1171->g_1123.s7, "p_1171->g_1123.s7", print_hash_value);
    transparent_crc(p_1171->g_1123.s8, "p_1171->g_1123.s8", print_hash_value);
    transparent_crc(p_1171->g_1123.s9, "p_1171->g_1123.s9", print_hash_value);
    transparent_crc(p_1171->g_1123.sa, "p_1171->g_1123.sa", print_hash_value);
    transparent_crc(p_1171->g_1123.sb, "p_1171->g_1123.sb", print_hash_value);
    transparent_crc(p_1171->g_1123.sc, "p_1171->g_1123.sc", print_hash_value);
    transparent_crc(p_1171->g_1123.sd, "p_1171->g_1123.sd", print_hash_value);
    transparent_crc(p_1171->g_1123.se, "p_1171->g_1123.se", print_hash_value);
    transparent_crc(p_1171->g_1123.sf, "p_1171->g_1123.sf", print_hash_value);
    transparent_crc(p_1171->g_1124.s0, "p_1171->g_1124.s0", print_hash_value);
    transparent_crc(p_1171->g_1124.s1, "p_1171->g_1124.s1", print_hash_value);
    transparent_crc(p_1171->g_1124.s2, "p_1171->g_1124.s2", print_hash_value);
    transparent_crc(p_1171->g_1124.s3, "p_1171->g_1124.s3", print_hash_value);
    transparent_crc(p_1171->g_1124.s4, "p_1171->g_1124.s4", print_hash_value);
    transparent_crc(p_1171->g_1124.s5, "p_1171->g_1124.s5", print_hash_value);
    transparent_crc(p_1171->g_1124.s6, "p_1171->g_1124.s6", print_hash_value);
    transparent_crc(p_1171->g_1124.s7, "p_1171->g_1124.s7", print_hash_value);
    transparent_crc(p_1171->g_1128.x, "p_1171->g_1128.x", print_hash_value);
    transparent_crc(p_1171->g_1128.y, "p_1171->g_1128.y", print_hash_value);
    transparent_crc(p_1171->g_1130.x, "p_1171->g_1130.x", print_hash_value);
    transparent_crc(p_1171->g_1130.y, "p_1171->g_1130.y", print_hash_value);
    transparent_crc(p_1171->g_1131.x, "p_1171->g_1131.x", print_hash_value);
    transparent_crc(p_1171->g_1131.y, "p_1171->g_1131.y", print_hash_value);
    transparent_crc(p_1171->g_1131.z, "p_1171->g_1131.z", print_hash_value);
    transparent_crc(p_1171->g_1131.w, "p_1171->g_1131.w", print_hash_value);
    transparent_crc(p_1171->g_1134.s0, "p_1171->g_1134.s0", print_hash_value);
    transparent_crc(p_1171->g_1134.s1, "p_1171->g_1134.s1", print_hash_value);
    transparent_crc(p_1171->g_1134.s2, "p_1171->g_1134.s2", print_hash_value);
    transparent_crc(p_1171->g_1134.s3, "p_1171->g_1134.s3", print_hash_value);
    transparent_crc(p_1171->g_1134.s4, "p_1171->g_1134.s4", print_hash_value);
    transparent_crc(p_1171->g_1134.s5, "p_1171->g_1134.s5", print_hash_value);
    transparent_crc(p_1171->g_1134.s6, "p_1171->g_1134.s6", print_hash_value);
    transparent_crc(p_1171->g_1134.s7, "p_1171->g_1134.s7", print_hash_value);
    transparent_crc(p_1171->g_1134.s8, "p_1171->g_1134.s8", print_hash_value);
    transparent_crc(p_1171->g_1134.s9, "p_1171->g_1134.s9", print_hash_value);
    transparent_crc(p_1171->g_1134.sa, "p_1171->g_1134.sa", print_hash_value);
    transparent_crc(p_1171->g_1134.sb, "p_1171->g_1134.sb", print_hash_value);
    transparent_crc(p_1171->g_1134.sc, "p_1171->g_1134.sc", print_hash_value);
    transparent_crc(p_1171->g_1134.sd, "p_1171->g_1134.sd", print_hash_value);
    transparent_crc(p_1171->g_1134.se, "p_1171->g_1134.se", print_hash_value);
    transparent_crc(p_1171->g_1134.sf, "p_1171->g_1134.sf", print_hash_value);
    transparent_crc(p_1171->g_1136.s0, "p_1171->g_1136.s0", print_hash_value);
    transparent_crc(p_1171->g_1136.s1, "p_1171->g_1136.s1", print_hash_value);
    transparent_crc(p_1171->g_1136.s2, "p_1171->g_1136.s2", print_hash_value);
    transparent_crc(p_1171->g_1136.s3, "p_1171->g_1136.s3", print_hash_value);
    transparent_crc(p_1171->g_1136.s4, "p_1171->g_1136.s4", print_hash_value);
    transparent_crc(p_1171->g_1136.s5, "p_1171->g_1136.s5", print_hash_value);
    transparent_crc(p_1171->g_1136.s6, "p_1171->g_1136.s6", print_hash_value);
    transparent_crc(p_1171->g_1136.s7, "p_1171->g_1136.s7", print_hash_value);
    transparent_crc(p_1171->g_1140.x, "p_1171->g_1140.x", print_hash_value);
    transparent_crc(p_1171->g_1140.y, "p_1171->g_1140.y", print_hash_value);
    transparent_crc(p_1171->g_1163.x, "p_1171->g_1163.x", print_hash_value);
    transparent_crc(p_1171->g_1163.y, "p_1171->g_1163.y", print_hash_value);
    transparent_crc(p_1171->v_collective, "p_1171->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 66; i++)
            transparent_crc(p_1171->g_special_values[i + 66 * get_linear_group_id()], "p_1171->g_special_values[i + 66 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 66; i++)
            transparent_crc(p_1171->l_special_values[i], "p_1171->l_special_values[i]", print_hash_value);
    transparent_crc(p_1171->l_comm_values[get_linear_local_id()], "p_1171->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1171->g_comm_values[get_linear_group_id() * 33 + get_linear_local_id()], "p_1171->g_comm_values[get_linear_group_id() * 33 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
