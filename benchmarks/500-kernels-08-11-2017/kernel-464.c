// --atomics 15 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 68,82,1 -l 2,82,1
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
{162,3,54,55,82,77,121,160,8,40,7,86,81,88,101,12,80,147,157,15,25,5,56,63,128,83,152,31,93,79,137,51,125,104,99,21,145,158,92,46,106,159,75,134,24,150,124,95,133,90,153,141,64,142,18,148,68,156,100,70,89,105,97,30,17,127,4,154,113,65,34,43,52,87,35,112,67,107,143,151,144,126,94,108,29,96,26,38,114,39,74,73,98,111,42,53,66,85,109,146,110,0,10,47,118,122,49,120,138,117,149,123,23,6,155,62,1,32,14,135,27,161,76,2,22,163,140,37,132,131,71,41,139,103,91,119,44,33,57,136,28,84,48,60,102,36,116,59,129,50,9,72,13,16,69,11,58,78,19,61,130,115,20,45}, // permutation 0
{127,133,97,53,67,143,154,118,108,37,68,119,134,80,43,102,63,74,40,17,55,141,151,12,150,83,135,121,129,3,146,109,50,138,105,142,120,38,87,0,75,47,125,162,57,31,66,110,128,10,54,153,29,39,95,157,159,117,20,34,91,8,158,27,30,1,71,52,103,7,14,59,104,106,136,156,23,19,145,115,89,148,130,100,122,131,44,28,78,163,123,126,112,69,64,33,6,56,4,61,85,132,96,79,152,58,15,92,22,32,113,41,51,60,94,160,49,84,48,140,137,11,21,101,46,73,76,147,2,88,114,13,16,124,86,62,81,70,45,107,9,139,155,26,18,5,25,24,72,90,161,36,82,77,144,149,42,93,111,98,65,116,35,99}, // permutation 1
{8,39,58,82,77,155,159,28,100,9,108,72,85,136,7,17,36,105,26,91,51,95,86,92,152,139,61,21,35,154,3,25,49,45,160,134,64,148,116,48,118,0,140,158,124,146,38,66,107,122,22,93,90,88,13,46,23,127,56,52,120,10,70,99,87,96,15,6,141,37,145,106,44,89,161,27,80,69,125,42,32,84,121,41,59,63,112,147,54,31,143,135,111,156,43,103,75,130,74,109,12,104,81,128,19,162,126,79,67,73,2,151,65,117,18,33,142,132,153,24,30,101,60,131,113,129,5,55,62,71,102,157,149,78,20,47,11,119,97,68,133,138,53,137,83,163,115,94,150,57,144,123,1,98,114,40,4,76,34,14,29,50,16,110}, // permutation 2
{140,139,44,127,24,63,123,97,86,54,90,84,18,124,52,118,153,46,159,91,114,48,53,49,51,152,98,88,78,2,145,137,73,87,143,16,42,85,13,107,60,99,22,19,21,17,132,144,27,39,113,136,161,102,20,28,50,148,58,134,66,29,151,57,115,103,135,147,141,74,120,10,109,72,55,25,101,69,80,149,156,35,81,3,1,122,89,8,117,95,30,12,146,36,15,106,61,79,0,41,129,23,154,133,92,34,65,155,83,75,94,150,32,121,93,130,163,5,26,77,105,131,7,59,43,70,6,116,37,14,71,126,82,162,119,76,111,47,100,125,112,4,110,62,68,40,56,11,67,9,31,142,160,158,138,33,108,45,157,64,96,104,38,128}, // permutation 3
{109,17,51,114,8,56,67,7,157,82,43,161,73,159,16,88,130,19,1,3,98,99,162,26,75,153,58,77,65,158,124,155,52,135,101,80,112,156,85,133,89,27,144,13,140,62,9,55,142,110,115,12,95,84,38,113,11,79,119,87,94,60,105,154,83,15,31,121,68,102,28,59,50,104,64,125,78,132,47,103,4,48,5,150,71,42,141,86,120,90,131,23,163,40,61,41,145,46,139,118,92,54,122,81,30,160,108,91,96,44,35,143,149,107,29,148,147,20,137,37,136,106,97,123,93,129,127,74,152,32,66,111,22,63,100,2,36,18,57,138,128,34,69,10,151,45,33,21,126,14,25,24,53,134,76,70,39,116,0,117,49,72,146,6}, // permutation 4
{80,135,36,119,6,45,22,68,11,126,100,60,31,55,95,43,35,10,137,113,89,78,41,150,131,23,116,74,12,29,125,19,82,123,18,145,94,110,97,154,33,117,7,63,85,155,98,151,83,157,128,2,153,129,8,9,87,143,121,114,5,53,66,75,52,65,15,124,42,76,156,25,120,103,17,134,91,44,142,139,127,50,14,92,34,21,58,102,118,46,122,32,112,159,71,38,81,152,93,146,136,3,141,86,24,73,67,20,49,161,51,56,130,61,101,57,158,26,144,147,69,62,47,0,160,27,148,96,79,111,138,30,13,70,64,77,54,115,59,104,40,16,105,109,107,140,88,108,39,132,99,37,1,28,90,48,162,106,149,72,133,84,4,163}, // permutation 5
{137,33,9,144,68,85,117,145,159,139,162,109,143,0,93,122,95,134,140,90,53,73,94,3,74,124,31,36,82,38,1,4,147,154,112,76,101,107,27,17,14,37,49,156,20,66,63,91,21,120,118,87,111,106,105,16,50,99,148,7,45,25,72,34,78,104,81,13,129,55,10,89,102,79,163,54,116,128,150,110,84,2,133,23,92,39,119,77,59,65,44,51,32,28,151,57,19,136,48,52,96,83,47,141,8,6,18,35,86,161,135,26,24,153,61,158,113,75,115,40,146,155,125,130,29,142,43,121,60,123,30,103,15,5,132,160,41,62,131,58,56,114,97,69,108,42,127,157,64,46,88,67,70,71,126,100,152,11,12,80,138,149,98,22}, // permutation 6
{116,50,69,126,150,94,32,15,133,12,128,90,113,33,98,57,144,47,143,14,5,31,72,48,158,147,151,162,115,118,123,102,54,56,138,153,111,130,140,0,60,163,85,59,58,103,30,146,91,148,3,156,49,112,122,41,62,142,21,83,117,125,29,26,27,141,93,53,6,79,52,8,20,77,39,101,114,71,160,23,157,24,75,109,106,28,34,136,131,121,11,100,51,68,1,137,155,37,81,134,17,92,66,63,97,108,22,78,127,145,38,65,18,2,89,99,36,104,25,9,95,61,80,13,82,4,74,16,67,46,76,64,124,152,139,87,44,149,19,105,161,55,107,129,70,135,110,73,154,120,45,132,84,96,88,42,35,40,10,7,119,43,159,86}, // permutation 7
{90,143,48,15,106,159,145,26,105,117,102,4,99,46,110,153,147,71,9,122,86,139,151,28,82,59,52,111,7,114,149,3,23,77,58,100,148,69,129,144,136,104,119,140,41,124,30,1,133,17,54,162,18,0,109,83,80,62,75,14,42,93,141,158,101,31,78,142,64,116,137,146,16,35,20,88,160,113,120,44,24,128,27,156,57,10,154,138,132,49,127,47,121,40,12,70,81,32,33,130,65,55,157,131,115,2,60,74,123,37,11,150,19,152,76,66,22,96,6,126,8,95,43,53,73,34,21,97,89,108,13,84,68,161,36,61,87,29,134,118,163,107,103,39,38,56,155,5,92,45,79,112,135,67,50,25,85,98,91,94,72,51,63,125}, // permutation 8
{137,70,132,17,156,57,60,98,3,76,115,85,93,51,140,5,58,109,149,141,28,68,83,105,90,1,102,19,96,80,29,81,15,35,150,123,127,49,153,129,21,116,72,124,112,84,16,11,65,8,25,77,160,36,53,157,10,113,148,99,119,34,159,40,63,163,144,128,66,67,136,125,39,26,54,56,135,103,31,147,152,52,44,37,82,9,47,0,104,73,50,55,33,146,161,92,126,86,22,100,48,118,143,106,91,4,151,94,74,154,2,139,14,38,23,142,6,24,13,27,114,130,71,89,87,120,12,7,111,138,158,75,155,95,20,131,62,117,110,108,134,79,145,64,45,88,121,97,46,41,133,32,101,30,122,43,162,61,59,107,18,42,78,69} // permutation 9
};

// Seed: 1247333506

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   int32_t  f1;
   volatile int32_t  f2;
   int8_t  f3;
   int64_t  f4;
   uint8_t  f5;
};

union U1 {
   uint64_t  f0;
   volatile uint32_t  f1;
   int64_t  f2;
   int8_t * volatile  f3;
};

struct S2 {
    int32_t g_3[3];
    int8_t g_27;
    int8_t *g_62;
    int8_t **g_61;
    uint16_t g_111;
    volatile struct S0 g_112;
    volatile struct S0 * volatile g_114;
    int32_t **g_115;
    int32_t *** volatile g_116;
    int32_t *** volatile g_117;
    volatile VECTOR(int8_t, 2) g_132;
    uint8_t g_147;
    VECTOR(int16_t, 2) g_169;
    VECTOR(int16_t, 8) g_172;
    VECTOR(uint8_t, 8) g_187;
    volatile VECTOR(int16_t, 2) g_188;
    volatile VECTOR(int16_t, 2) g_189;
    VECTOR(int16_t, 2) g_191;
    volatile VECTOR(int16_t, 4) g_198;
    volatile VECTOR(uint16_t, 4) g_199;
    VECTOR(int16_t, 4) g_226;
    volatile VECTOR(int16_t, 16) g_229;
    VECTOR(int16_t, 2) g_232;
    VECTOR(int16_t, 16) g_233;
    VECTOR(int16_t, 4) g_234;
    VECTOR(int16_t, 8) g_236;
    VECTOR(int16_t, 8) g_237;
    uint32_t g_247;
    VECTOR(int32_t, 8) g_253;
    union U1 g_268;
    union U1 *g_267;
    uint8_t *g_283;
    struct S0 g_290;
    struct S0 *g_289;
    struct S0 ** volatile g_288;
    volatile uint8_t g_291;
    union U1 **g_298;
    union U1 *** volatile g_297;
    uint16_t g_300;
    VECTOR(int8_t, 4) g_312;
    uint32_t g_315[4];
    VECTOR(int8_t, 16) g_319;
    uint32_t g_378;
    struct S0 g_391[7][9][4];
    VECTOR(uint32_t, 2) g_396;
    volatile VECTOR(uint32_t, 4) g_398;
    int32_t * volatile g_399;
    volatile struct S0 g_403;
    uint16_t g_406;
    int8_t g_408;
    int32_t * volatile g_415;
    union U1 g_418;
    volatile VECTOR(uint16_t, 2) g_453;
    uint32_t *g_458;
    VECTOR(int8_t, 2) g_463;
    volatile uint32_t *g_478;
    volatile uint32_t ** volatile g_477;
    int32_t * volatile g_485[1];
    int32_t * volatile g_487[6];
    int32_t * volatile g_488;
    int32_t * volatile g_489;
    volatile struct S0 g_529;
    volatile VECTOR(int8_t, 2) g_546;
    VECTOR(uint64_t, 4) g_556;
    VECTOR(uint64_t, 16) g_566;
    uint64_t *g_576;
    uint8_t **g_581;
    uint8_t *** volatile g_580;
    int64_t g_590;
    volatile VECTOR(uint16_t, 16) g_600;
    struct S0 ** volatile g_606;
    VECTOR(int16_t, 8) g_641;
    int32_t * volatile g_655[1];
    int32_t ***g_678[10];
    VECTOR(uint32_t, 8) g_681;
    uint32_t g_708;
    VECTOR(uint64_t, 4) g_729;
    volatile VECTOR(uint64_t, 2) g_730;
    volatile VECTOR(int8_t, 8) g_757;
    volatile VECTOR(int8_t, 2) g_758;
    VECTOR(uint64_t, 8) g_770;
    union U1 g_778;
    VECTOR(uint64_t, 2) g_794;
    volatile struct S0 g_798;
    VECTOR(uint8_t, 4) g_799;
    VECTOR(uint8_t, 16) g_800;
    VECTOR(uint8_t, 16) g_804;
    volatile VECTOR(int64_t, 8) g_807;
    VECTOR(uint64_t, 8) g_808;
    VECTOR(uint8_t, 16) g_810;
    volatile VECTOR(uint8_t, 4) g_812;
    volatile struct S0 g_814[6];
    VECTOR(uint16_t, 4) g_833;
    uint32_t **g_843;
    int64_t g_845;
    VECTOR(int32_t, 16) g_854;
    struct S0 g_870;
    volatile VECTOR(int32_t, 8) g_907;
    volatile VECTOR(uint32_t, 8) g_915;
    union U1 g_918;
    uint64_t g_925[10];
    union U1 g_930;
    union U1 g_944;
    union U1 g_945[10][8];
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
union U1  func_1(struct S2 * p_946);
union U1  func_30(int8_t ** p_31, int32_t  p_32, int8_t  p_33, struct S2 * p_946);
int8_t ** func_34(uint32_t  p_35, int8_t ** p_36, int8_t * p_37, uint16_t  p_38, int8_t ** p_39, struct S2 * p_946);
int8_t ** func_40(int8_t ** p_41, int32_t  p_42, int32_t  p_43, struct S2 * p_946);
union U1  func_44(int32_t  p_45, int8_t ** p_46, int32_t  p_47, uint8_t  p_48, struct S2 * p_946);
uint16_t  func_55(uint32_t  p_56, int8_t ** p_57, uint32_t  p_58, int8_t * p_59, uint64_t  p_60, struct S2 * p_946);
uint64_t  func_71(int8_t * p_72, uint64_t  p_73, int64_t  p_74, int32_t * p_75, struct S2 * p_946);
uint16_t  func_76(uint64_t  p_77, int32_t * p_78, int8_t * p_79, int8_t * p_80, struct S2 * p_946);
int32_t ** func_84(int32_t * p_85, uint64_t  p_86, int32_t  p_87, int32_t  p_88, int32_t * p_89, struct S2 * p_946);
int32_t  func_91(int64_t  p_92, int8_t * p_93, struct S2 * p_946);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_946->g_3 p_946->g_27 p_946->g_61 p_946->g_62 p_946->g_comm_values p_946->l_comm_values p_946->g_112 p_946->g_114 p_946->g_115 p_946->g_117 p_946->g_233 p_946->g_232 p_946->g_253 p_946->g_172 p_946->g_291 p_946->g_297 p_946->g_300 p_946->g_247 p_946->g_312 p_946->g_319 p_946->g_237 p_946->g_283 p_946->g_147 p_946->g_289 p_946->g_290.f4 p_946->g_391 p_946->g_226 p_946->g_290.f5 p_946->g_396 p_946->g_398 p_946->g_290.f1 p_946->g_403 p_946->g_406 p_946->g_408 p_946->g_418 p_946->g_290.f0 p_946->g_378 p_946->g_453 p_946->g_463 p_946->g_477 p_946->g_488 p_946->g_189 p_946->g_458 p_946->g_290.f3 p_946->g_529 p_946->g_187 p_946->g_580 p_946->g_581 p_946->g_641 p_946->g_234 p_946->g_708 p_946->g_566 p_946->g_778 p_946->g_808 p_946->g_814 p_946->g_812 p_946->g_845 p_946->g_799 p_946->g_870 p_946->g_907 p_946->g_915 p_946->g_918 p_946->g_236 p_946->g_925 p_946->g_930 p_946->g_298 p_946->g_267 p_946->g_132 p_946->g_944 p_946->g_800 p_946->g_854 p_946->g_945
 * writes: p_946->g_111 p_946->g_112 p_946->g_115 p_946->g_267 p_946->g_253 p_946->g_288 p_946->g_291 p_946->g_298 p_946->g_300 p_946->g_247 p_946->g_315 p_946->g_147 p_946->g_378 p_946->g_290 p_946->g_406 p_946->g_408 p_946->g_396 p_946->g_169 p_946->g_458 p_946->g_3 p_946->g_529 p_946->g_391 p_946->g_187 p_946->g_641 p_946->g_678 p_946->g_708 p_946->g_770 p_946->g_566 p_946->g_268.f0 p_946->g_27 p_946->g_925 p_946->g_870.f1 p_946->g_854
 */
union U1  func_1(struct S2 * p_946)
{ /* block id: 4 */
    int32_t *l_2 = &p_946->g_3[0];
    int32_t *l_4 = &p_946->g_3[0];
    int32_t *l_5 = &p_946->g_3[0];
    int32_t *l_6 = &p_946->g_3[0];
    int32_t *l_7 = &p_946->g_3[0];
    int32_t *l_8 = &p_946->g_3[0];
    int32_t *l_9 = &p_946->g_3[0];
    int32_t *l_10 = &p_946->g_3[1];
    int32_t *l_11 = &p_946->g_3[0];
    int32_t *l_12 = &p_946->g_3[1];
    int32_t *l_13 = (void*)0;
    int32_t *l_14 = (void*)0;
    int32_t *l_15 = &p_946->g_3[0];
    int32_t *l_16 = &p_946->g_3[0];
    int32_t *l_17 = &p_946->g_3[1];
    int32_t *l_18 = &p_946->g_3[1];
    int32_t *l_19 = &p_946->g_3[0];
    int32_t *l_20 = &p_946->g_3[1];
    int32_t *l_21 = &p_946->g_3[2];
    int32_t *l_22[7][4] = {{&p_946->g_3[0],(void*)0,&p_946->g_3[0],(void*)0},{&p_946->g_3[0],(void*)0,&p_946->g_3[0],(void*)0},{&p_946->g_3[0],(void*)0,&p_946->g_3[0],(void*)0},{&p_946->g_3[0],(void*)0,&p_946->g_3[0],(void*)0},{&p_946->g_3[0],(void*)0,&p_946->g_3[0],(void*)0},{&p_946->g_3[0],(void*)0,&p_946->g_3[0],(void*)0},{&p_946->g_3[0],(void*)0,&p_946->g_3[0],(void*)0}};
    uint8_t l_23 = 0xBEL;
    int8_t *l_26 = &p_946->g_27;
    int8_t **l_28 = (void*)0;
    int8_t **l_29 = &l_26;
    int8_t *l_81 = &p_946->g_27;
    uint16_t *l_299 = &p_946->g_300;
    uint16_t *l_405 = &p_946->g_406;
    int8_t *l_407 = &p_946->g_408;
    int8_t **l_409 = (void*)0;
    int i, j;
    l_23++;
    p_946->g_854.sf ^= (((((*l_29) = l_26) == &p_946->g_27) >= (func_30(func_34(p_946->g_3[0], func_40((func_44((safe_add_func_int8_t_s_s(((*l_407) &= ((safe_sub_func_int32_t_s_s(p_946->g_27, (((safe_div_func_uint16_t_u_u(((*l_405) &= func_55((*l_6), p_946->g_61, (safe_div_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s((((safe_add_func_uint64_t_u_u(func_71((*p_946->g_61), (((*l_299) |= (p_946->g_27 != func_76((p_946->g_3[0] <= (*l_15)), l_6, l_81, (*p_946->g_61), p_946))) & (*l_6)), (*l_5), &p_946->g_3[0], p_946), p_946->g_233.s2)) || (*l_12)) < 0x7D2AL), 12)) || 0x6D2FL), p_946->g_232.x)) <= 0x6B3C6EF0L) , 0x58L), 0x2EL)), (*p_946->g_61), (*l_16), p_946)), p_946->g_391[6][7][2].f0)) , (*p_946->g_61)) != (*p_946->g_61)))) > FAKE_DIVERGE(p_946->local_1_offset, get_local_id(1), 10))), (*p_946->g_62))), l_409, p_946->g_comm_values[p_946->tid], p_946->g_391[6][7][2].f5, p_946) , (void*)0), (*l_11), p_946->g_27, p_946), (*p_946->g_61), p_946->g_226.w, &p_946->g_62, p_946), p_946->g_187.s6, (**p_946->g_61), p_946) , (*l_7))) < p_946->g_800.s3);
    return p_946->g_945[5][5];
}


/* ------------------------------------------ */
/* 
 * reads : p_946->g_187 p_946->g_408 p_946->g_61 p_946->g_62 p_946->g_27 p_946->g_580 p_946->g_581 p_946->g_641 p_946->g_391.f0 p_946->g_234 p_946->g_418 p_946->g_708 p_946->g_566 p_946->g_319 p_946->g_237 p_946->g_172 p_946->g_778 p_946->g_808 p_946->g_814 p_946->g_289 p_946->g_812 p_946->g_300 p_946->g_845 p_946->g_226 p_946->g_799 p_946->g_870 p_946->g_147 p_946->g_3 p_946->g_403.f5 p_946->g_391.f1 p_946->g_907 p_946->g_915 p_946->g_918 p_946->g_236 p_946->g_925 p_946->g_930 p_946->g_297 p_946->g_298 p_946->g_267 p_946->g_132 p_946->g_944
 * writes: p_946->g_187 p_946->g_408 p_946->g_641 p_946->g_678 p_946->g_708 p_946->g_290.f0 p_946->g_770 p_946->g_566 p_946->g_290 p_946->g_268.f0 p_946->g_300 p_946->g_27 p_946->g_391.f3 p_946->g_3 p_946->g_925 p_946->g_267 p_946->g_870.f1
 */
union U1  func_30(int8_t ** p_31, int32_t  p_32, int8_t  p_33, struct S2 * p_946)
{ /* block id: 218 */
    int16_t l_646 = 0x67DFL;
    int32_t l_647 = 0x4FEECCCAL;
    uint8_t *l_648 = (void*)0;
    uint8_t *l_649[8][10] = {{&p_946->g_147,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,&p_946->g_147,(void*)0,(void*)0,&p_946->g_290.f5},{&p_946->g_147,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,&p_946->g_147,(void*)0,(void*)0,&p_946->g_290.f5},{&p_946->g_147,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,&p_946->g_147,(void*)0,(void*)0,&p_946->g_290.f5},{&p_946->g_147,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,&p_946->g_147,(void*)0,(void*)0,&p_946->g_290.f5},{&p_946->g_147,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,&p_946->g_147,(void*)0,(void*)0,&p_946->g_290.f5},{&p_946->g_147,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,&p_946->g_147,(void*)0,(void*)0,&p_946->g_290.f5},{&p_946->g_147,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,&p_946->g_147,(void*)0,(void*)0,&p_946->g_290.f5},{&p_946->g_147,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,(void*)0,&p_946->g_391[6][7][2].f5,&p_946->g_147,(void*)0,(void*)0,&p_946->g_290.f5}};
    int32_t l_650 = 0x308CA5FAL;
    int32_t l_651 = 0x4034AD46L;
    uint8_t ***l_654 = &p_946->g_581;
    int32_t *l_656 = (void*)0;
    VECTOR(int16_t, 8) l_661 = (VECTOR(int16_t, 8))(0x7DC5L, (VECTOR(int16_t, 4))(0x7DC5L, (VECTOR(int16_t, 2))(0x7DC5L, 0L), 0L), 0L, 0x7DC5L, 0L);
    int32_t ***l_676 = &p_946->g_115;
    uint64_t *l_740 = (void*)0;
    union U1 **l_759 = &p_946->g_267;
    uint32_t l_774 = 4294967292UL;
    int32_t l_780[10][1];
    VECTOR(uint64_t, 4) l_809 = (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 18446744073709551615UL), 18446744073709551615UL);
    VECTOR(uint16_t, 2) l_832 = (VECTOR(uint16_t, 2))(0xB5AEL, 0UL);
    uint32_t **l_842 = &p_946->g_458;
    int16_t l_878 = 0x3BB7L;
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
            l_780[i][j] = 2L;
    }
    l_650 = (l_647 = ((p_946->g_187.s0++) , (l_654 == (void*)0)));
    for (p_946->g_408 = 0; (p_946->g_408 == (-2)); --p_946->g_408)
    { /* block id: 224 */
        VECTOR(int16_t, 8) l_660 = (VECTOR(int16_t, 8))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), (-9L)), (-9L)), (-9L), (-5L), (-9L));
        uint8_t **l_670 = &p_946->g_283;
        int32_t l_673 = 0L;
        int16_t *l_696 = (void*)0;
        int16_t l_697 = 0L;
        uint8_t l_705 = 251UL;
        uint8_t l_721 = 0x4FL;
        int32_t l_782 = 0x31F4B79AL;
        int32_t l_785 = 0x3D98703FL;
        VECTOR(uint8_t, 4) l_852 = (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0x2EL), 0x2EL);
        int32_t l_873 = 0x3B991CBBL;
        int32_t l_877 = (-7L);
        int32_t l_879 = (-1L);
        VECTOR(uint32_t, 4) l_905 = (VECTOR(uint32_t, 4))(0xC16632ECL, (VECTOR(uint32_t, 2))(0xC16632ECL, 0x39363EBEL), 0x39363EBEL);
        VECTOR(uint32_t, 4) l_906 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xED7BF7ADL), 0xED7BF7ADL);
        VECTOR(int32_t, 8) l_908 = (VECTOR(int32_t, 8))(0x0ECE49E0L, (VECTOR(int32_t, 4))(0x0ECE49E0L, (VECTOR(int32_t, 2))(0x0ECE49E0L, 0L), 0L), 0L, 0x0ECE49E0L, 0L);
        VECTOR(int16_t, 2) l_914 = (VECTOR(int16_t, 2))(0x1BDBL, 0x0004L);
        VECTOR(uint32_t, 2) l_916 = (VECTOR(uint32_t, 2))(0xCB1DF261L, 0UL);
        uint32_t l_933 = 0x9593012DL;
        uint64_t l_941 = 0x6B9EDA4C7A95C1C2L;
        int i;
        if (p_32)
        { /* block id: 225 */
            int32_t **l_659 = &l_656;
            (*l_659) = &l_651;
            (**l_659) |= ((p_946->g_641.s4 = ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 8))(l_660.s34226211)), ((VECTOR(int16_t, 2))(l_661.s63)).xyyxxyyy))).s1) , 9L);
            if (p_32)
                break;
        }
        else
        { /* block id: 230 */
            uint8_t ***l_671 = &l_670;
            int32_t l_672 = 0x0CCD4272L;
            int32_t ***l_674 = &p_946->g_115;
            int32_t ****l_675 = &l_674;
            int32_t ****l_677[1][8] = {{&l_676,&l_676,&l_676,&l_676,&l_676,&l_676,&l_676,&l_676}};
            int8_t **l_706 = &p_946->g_62;
            VECTOR(uint32_t, 8) l_768 = (VECTOR(uint32_t, 8))(0x394CD61FL, (VECTOR(uint32_t, 4))(0x394CD61FL, (VECTOR(uint32_t, 2))(0x394CD61FL, 4294967291UL), 4294967291UL), 4294967291UL, 0x394CD61FL, 4294967291UL);
            uint32_t l_787 = 0x87628294L;
            VECTOR(int8_t, 16) l_841 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int8_t, 2))(0L, 1L), (VECTOR(int8_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
            int32_t *l_868 = &p_946->g_3[0];
            uint32_t l_892 = 0x85B02A8FL;
            VECTOR(uint32_t, 2) l_917 = (VECTOR(uint32_t, 2))(0x6DA23556L, 0x1A4ECF37L);
            int i, j;
            l_673 |= (safe_lshift_func_int16_t_s_u((!(safe_mul_func_uint16_t_u_u((+((safe_mul_func_int8_t_s_s((**p_946->g_61), 255UL)) != (safe_div_func_int8_t_s_s(((*p_946->g_580) == ((*l_671) = l_670)), 0xAAL)))), l_672))), 11));
            if (((((*l_675) = l_674) != (p_946->g_678[2] = l_676)) < ((((safe_mod_func_uint16_t_u_u((((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_946->g_681.s3522)).yzwzxzzy)).s7 , p_946->g_641.s2) , p_946->g_391[6][7][2].f0) , ((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_33, 65535UL, 0UL, 1UL)), (safe_sub_func_int32_t_s_s((l_650 = ((safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_946->global_2_offset, get_global_id(2), 10), (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_946->global_0_offset, get_global_id(0), 10), ((safe_mul_func_uint16_t_u_u(((l_660.s5 , &l_646) == l_696), FAKE_DIVERGE(p_946->group_1_offset, get_group_id(1), 10))) >= (-1L)))), 3)), p_946->g_290.f4)), p_946->g_27)))) && p_32)), l_660.s7)), 0x2DC4L, FAKE_DIVERGE(p_946->local_1_offset, get_local_id(1), 10), ((VECTOR(uint16_t, 4))(65527UL)), 65535UL, ((VECTOR(uint16_t, 2))(65535UL)), 3UL, 0x3471L)), ((VECTOR(uint16_t, 16))(0xF4B2L)), ((VECTOR(uint16_t, 16))(1UL))))).sd), p_946->g_234.y)) | p_33) , l_697) | p_32)))
            { /* block id: 236 */
                for (l_697 = 0; (l_697 <= (-25)); l_697--)
                { /* block id: 239 */
                    if ((atomic_inc(&p_946->l_atomic_input[0]) == 6))
                    { /* block id: 241 */
                        int16_t l_700 = 0x1CFEL;
                        uint16_t l_701 = 65530UL;
                        union U1 l_703 = {0xFCC619168E9B057EL};/* VOLATILE GLOBAL l_703 */
                        union U1 *l_702 = &l_703;
                        union U1 *l_704 = &l_703;
                        l_701 = l_700;
                        l_704 = l_702;
                        unsigned int result = 0;
                        result += l_700;
                        result += l_701;
                        result += l_703.f0;
                        result += l_703.f1;
                        result += l_703.f2;
                        result += l_703.f3;
                        atomic_add(&p_946->l_special_values[0], result);
                    }
                    else
                    { /* block id: 244 */
                        (1 + 1);
                    }
                    l_705 = p_32;
                }
                if (p_32)
                    continue;
            }
            else
            { /* block id: 250 */
                uint32_t *l_707 = &p_946->g_708;
                uint16_t l_722 = 0xAED9L;
                VECTOR(uint64_t, 4) l_731 = (VECTOR(uint64_t, 4))(0x13E6BBDFCF15F5E4L, (VECTOR(uint64_t, 2))(0x13E6BBDFCF15F5E4L, 1UL), 1UL);
                int32_t l_739 = 2L;
                int32_t l_779 = 0x3ED0FFF1L;
                int32_t l_783 = 1L;
                int32_t l_784 = 3L;
                int8_t **l_795 = (void*)0;
                VECTOR(int16_t, 8) l_803 = (VECTOR(int16_t, 8))(0x05DAL, (VECTOR(int16_t, 4))(0x05DAL, (VECTOR(int16_t, 2))(0x05DAL, 0x684AL), 0x684AL), 0x684AL, 0x05DAL, 0x684AL);
                VECTOR(uint8_t, 16) l_811 = (VECTOR(uint8_t, 16))(0xD2L, (VECTOR(uint8_t, 4))(0xD2L, (VECTOR(uint8_t, 2))(0xD2L, 0xCBL), 0xCBL), 0xCBL, 0xD2L, 0xCBL, (VECTOR(uint8_t, 2))(0xD2L, 0xCBL), (VECTOR(uint8_t, 2))(0xD2L, 0xCBL), 0xD2L, 0xCBL, 0xD2L, 0xCBL);
                uint32_t l_813 = 4294967288UL;
                VECTOR(uint16_t, 2) l_834 = (VECTOR(uint16_t, 2))(0x37CCL, 0x291CL);
                uint32_t *l_844[2];
                uint64_t *l_846 = (void*)0;
                uint64_t *l_847 = &p_946->g_268.f0;
                VECTOR(uint16_t, 2) l_857 = (VECTOR(uint16_t, 2))(0xC186L, 0UL);
                int32_t l_872 = 0L;
                int32_t l_874 = 1L;
                int32_t l_875 = 0L;
                int32_t l_876[1][5] = {{0x2F536798L,0x2F536798L,0x2F536798L,0x2F536798L,0x2F536798L}};
                int32_t l_880 = 0x26E7504DL;
                uint8_t l_881 = 1UL;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_844[i] = (void*)0;
                l_722 ^= (func_44(l_705, l_706, p_32, l_673, p_946) , ((l_673 = (++(*l_707))) , (safe_lshift_func_int16_t_s_u(((((((!p_33) <= (*p_946->g_62)) > ((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s(l_721, (p_32 <= p_32))) & 0L), p_946->g_566.s8)) || l_721), 0x48L)) >= (-10L))) <= p_32) == l_697) <= p_946->g_319.s8), GROUP_DIVERGE(0, 1)))));
                for (p_946->g_290.f0 = 0; (p_946->g_290.f0 >= 11); ++p_946->g_290.f0)
                { /* block id: 256 */
                    VECTOR(int16_t, 16) l_741 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int16_t, 2))(1L, (-1L)), (VECTOR(int16_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
                    int32_t l_742 = (-1L);
                    uint64_t *l_769 = (void*)0;
                    uint64_t *l_771 = (void*)0;
                    uint64_t *l_772 = (void*)0;
                    uint64_t *l_773 = (void*)0;
                    int32_t l_775 = 0x33DD4A61L;
                    int32_t l_781 = 0x5CD4C4D0L;
                    int32_t l_786 = (-1L);
                    int i;
                    for (l_672 = 7; (l_672 != (-29)); --l_672)
                    { /* block id: 259 */
                        l_742 ^= ((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 8))(p_946->g_729.yxxxyxzy)).s2654132504562272, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(18446744073709551609UL, 0x9D72526F572D7291L, 1UL, 0xD385D4F22510C1A4L)).ywzywwzzywzwzxzz)).sd9, ((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 2))(p_946->g_730.xx)))))))), ((VECTOR(uint64_t, 4))(l_731.wxwx)), 0x4341097C4573CFCAL, 1UL)).s64)), 8UL, 18446744073709551615UL)).yzyzyyxzxwwzzzyy))).sc, ((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((l_739 = (safe_unary_minus_func_int64_t_s((safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_946->local_0_offset, get_local_id(0), 10), (p_33 && 2L)))))), (((((void*)0 == l_740) | p_33) < p_32) , p_32))), (((VECTOR(int16_t, 4))(l_741.se3f4)).w > 65531UL))) <= 65530UL))) < 0x13D70B9CL);
                    }
                    l_775 ^= ((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x64B9F8F33E8845A4L, 1L)), 0x6311F93C51A9EDE1L, 0x235194F056B6A485L)).y && (safe_rshift_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s(((safe_mul_func_int16_t_s_s(((5L <= 1L) ^ (safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((l_742 = ((safe_rshift_func_int16_t_s_s((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_946->g_757.s42775470)))).s63, ((VECTOR(int8_t, 2))(p_946->g_758.yx))))).yxxxyxxy)).s2 <= (p_946->g_187.s4 , (l_759 == &p_946->g_267))), (((((p_946->g_770.s2 = (p_946->g_566.s6 < ((safe_mod_func_uint16_t_u_u(p_946->g_391[6][7][2].f0, p_946->g_237.s0)) == ((VECTOR(uint8_t, 8))(0xB8L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(5UL, 0x97L)), 250UL, 0x00L)), (safe_rshift_func_int8_t_s_u(((((((*p_946->g_62) = ((safe_mul_func_int16_t_s_s((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(l_768.s2235)).y, 0x29D81453L)), p_33)) || p_946->g_406)) ^ 0x21L) , (-8L)) , GROUP_DIVERGE(0, 1)) && l_741.sd), p_946->g_729.x)), 8UL, 249UL)).s0))) , 2L) <= 0UL) , p_33) || GROUP_DIVERGE(2, 1)))) > l_673)) > p_32), p_946->g_187.s0)), GROUP_DIVERGE(0, 1)))), (-1L))) , 0x50E80825L), p_946->g_172.s4)), l_774)), p_32))) , (-3L));
                    for (l_774 = 24; (l_774 <= 33); l_774++)
                    { /* block id: 269 */
                        return p_946->g_778;
                    }
                    l_787--;
                }
                (*p_946->g_289) = (((safe_sub_func_uint8_t_u_u((+(((p_946->g_566.sd--) >= ((VECTOR(uint64_t, 4))(0x86C200CCA6ACB8D1L, ((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(p_946->g_794.xxyxyxxy)).s30)), ((VECTOR(uint64_t, 8))((l_795 != p_31), (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))((((safe_mod_func_int8_t_s_s((p_946->g_798 , ((*p_946->g_62) = ((4UL && ((((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(FAKE_DIVERGE(p_946->global_0_offset, get_global_id(0), 10), ((VECTOR(uint8_t, 2))(p_946->g_799.zx)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(p_946->g_800.s8e)))).yyxyyxyxxyxxxyyy))).s1944)).zyyzwwxx)).odd)), (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_803.s3502)).x, p_32)), 2UL, ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(p_946->g_804.s770866e55a16bcea)).s6, 0UL, (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 16))(p_946->g_807.s7615762711531546)).sf, (((VECTOR(uint64_t, 4))(hadd(((VECTOR(uint64_t, 8))(p_946->g_808.s34574356)).hi, ((VECTOR(uint64_t, 2))(l_809.ww)).xxxy))).y , 0x782357A89E768C9CL))), ((VECTOR(uint8_t, 2))(p_946->g_810.s3b)), ((void*)0 != (*p_946->g_477)), 4UL, 255UL))))).s14)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 16))(l_811.s2608abdcbecf9a76)).sf940, ((VECTOR(uint8_t, 4))(0UL, 255UL, 249UL, 0x3EL))))).yxxyxyxwyyxzzzxw)).s71, ((VECTOR(uint8_t, 16))(p_946->g_812.yxyywxyzzyywxzzx)).sa2))), (uint8_t)p_32))), 0x2BL, 0x43L, p_32, 0UL, 0xF6L)).s3b)).yxxxxxyx))).s0 ^ (*p_946->g_62)) ^ (-4L))) > l_784))), l_673)) == l_813) , p_946->g_391[6][7][2].f0), 0x5A3EL, (-6L), ((VECTOR(int16_t, 2))(0x24B1L)), ((VECTOR(int16_t, 4))(0x1CBBL)), (-7L), (-7L), p_946->g_798.f4, ((VECTOR(int16_t, 4))((-10L))))).sd5bc)).z & (-6L)), 18446744073709551615UL, p_32, 0xC39BC9F81526076AL, 0UL, 0x539EF9E8CCD94330L, 0x749135A90509E048L)).s56))), 0xB9ECA106CDBAE5E0L)).z) | p_946->g_808.s2)), 0x73L)) == l_813) , p_946->g_814[2]);
                if ((safe_add_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((GROUP_DIVERGE(1, 1) > p_946->g_812.w), 0x45FB70E8L)), (p_946->g_300 ^ ((l_782 = 18446744073709551611UL) , ((safe_div_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(((*l_847) = ((safe_rshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((safe_unary_minus_func_uint8_t_u((((safe_mul_func_int16_t_s_s((0UL <= p_33), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 2))(l_832.yx)).yyxxyxxx, ((VECTOR(uint16_t, 8))(p_946->g_833.xzzwwxyx))))), ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 16))(l_834.xxyyyyyyxyxxxyyx)).sea, (uint16_t)(safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((l_779 = ((((VECTOR(int8_t, 16))(l_841.s481403c9c1cf86ca)).s2 || p_33) ^ ((p_946->g_843 = l_842) == ((l_783 = ((&p_946->g_678[2] == &p_946->g_678[5]) > 0x4324A760L)) , &p_946->g_458)))), 4)), 2UL))))).yxyyxxxy))).s32, ((VECTOR(uint16_t, 2))(0x25B1L))))), 0x292DL, 0x1C83L)).x)) && p_946->g_845) , p_32))), p_946->g_226.x)), 0x0B955F03A486E29EL)), 3)) , 7UL)), p_33)), p_946->g_799.w)) <= (**p_31)))))))
                { /* block id: 282 */
                    uint32_t l_853[9][1][9] = {{{1UL,4294967291UL,0x91875227L,0x91875227L,4294967291UL,1UL,9UL,0x48602F0CL,5UL}},{{1UL,4294967291UL,0x91875227L,0x91875227L,4294967291UL,1UL,9UL,0x48602F0CL,5UL}},{{1UL,4294967291UL,0x91875227L,0x91875227L,4294967291UL,1UL,9UL,0x48602F0CL,5UL}},{{1UL,4294967291UL,0x91875227L,0x91875227L,4294967291UL,1UL,9UL,0x48602F0CL,5UL}},{{1UL,4294967291UL,0x91875227L,0x91875227L,4294967291UL,1UL,9UL,0x48602F0CL,5UL}},{{1UL,4294967291UL,0x91875227L,0x91875227L,4294967291UL,1UL,9UL,0x48602F0CL,5UL}},{{1UL,4294967291UL,0x91875227L,0x91875227L,4294967291UL,1UL,9UL,0x48602F0CL,5UL}},{{1UL,4294967291UL,0x91875227L,0x91875227L,4294967291UL,1UL,9UL,0x48602F0CL,5UL}},{{1UL,4294967291UL,0x91875227L,0x91875227L,4294967291UL,1UL,9UL,0x48602F0CL,5UL}}};
                    uint16_t *l_858 = &p_946->g_300;
                    int32_t l_860 = 1L;
                    int32_t l_862 = 0x06A8B99FL;
                    int32_t l_864[2][5] = {{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L}};
                    uint16_t l_865[3][6][5] = {{{4UL,0x709EL,5UL,4UL,1UL},{4UL,0x709EL,5UL,4UL,1UL},{4UL,0x709EL,5UL,4UL,1UL},{4UL,0x709EL,5UL,4UL,1UL},{4UL,0x709EL,5UL,4UL,1UL},{4UL,0x709EL,5UL,4UL,1UL}},{{4UL,0x709EL,5UL,4UL,1UL},{4UL,0x709EL,5UL,4UL,1UL},{4UL,0x709EL,5UL,4UL,1UL},{4UL,0x709EL,5UL,4UL,1UL},{4UL,0x709EL,5UL,4UL,1UL},{4UL,0x709EL,5UL,4UL,1UL}},{{4UL,0x709EL,5UL,4UL,1UL},{4UL,0x709EL,5UL,4UL,1UL},{4UL,0x709EL,5UL,4UL,1UL},{4UL,0x709EL,5UL,4UL,1UL},{4UL,0x709EL,5UL,4UL,1UL},{4UL,0x709EL,5UL,4UL,1UL}}};
                    int32_t *l_869 = &p_946->g_3[2];
                    int32_t l_871 = 0x6D1FAAC4L;
                    VECTOR(uint32_t, 4) l_904 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xB9F5002BL), 0xB9F5002BL);
                    VECTOR(uint32_t, 8) l_909 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xBEB7AE98L), 0xBEB7AE98L), 0xBEB7AE98L, 0UL, 0xBEB7AE98L);
                    uint16_t l_920[7][9][2] = {{{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L}},{{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L}},{{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L}},{{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L}},{{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L}},{{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L}},{{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L},{65534UL,0xBCF7L}}};
                    int i, j, k;
                    if ((safe_lshift_func_int8_t_s_s(((**l_706) = ((0x2382L ^ ((safe_mul_func_int8_t_s_s((*p_946->g_62), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_852.xyyx)))).xzxwyxxz)).s4)) , (l_853[2][0][2] == ((VECTOR(uint64_t, 4))(0x0B864B1EC7DACAA3L, ((*p_946->g_488) && ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_946->g_854.s0c)).xxxx)).x), 0x1CFE1856AFDFCA8BL, 0x7A0C146823153E2AL)).w))) , (safe_rshift_func_uint16_t_u_u(((*l_858) = ((VECTOR(uint16_t, 8))(l_857.yxxxxyxy)).s7), 14)))), 1)))
                    { /* block id: 285 */
                        int32_t l_859 = 1L;
                        int32_t l_861 = 0x0B9A02E0L;
                        int32_t l_863[4][9] = {{0x572AE17EL,6L,0x572AE17EL,0x572AE17EL,6L,0x572AE17EL,0x572AE17EL,6L,0x572AE17EL},{0x572AE17EL,6L,0x572AE17EL,0x572AE17EL,6L,0x572AE17EL,0x572AE17EL,6L,0x572AE17EL},{0x572AE17EL,6L,0x572AE17EL,0x572AE17EL,6L,0x572AE17EL,0x572AE17EL,6L,0x572AE17EL},{0x572AE17EL,6L,0x572AE17EL,0x572AE17EL,6L,0x572AE17EL,0x572AE17EL,6L,0x572AE17EL}};
                        int i, j;
                        l_865[2][3][4]--;
                        l_869 = l_868;
                        (*p_946->g_289) = p_946->g_870;
                        --l_881;
                    }
                    else
                    { /* block id: 290 */
                        int8_t *l_897 = &p_946->g_391[6][7][2].f3;
                        int32_t l_919 = 0L;
                        int16_t *l_921 = (void*)0;
                        int16_t *l_922 = (void*)0;
                        int16_t *l_923 = (void*)0;
                        int16_t *l_924 = &l_878;
                        (*l_869) = (safe_rshift_func_int8_t_s_s(((**p_31) &= ((GROUP_DIVERGE(1, 1) , p_946->g_147) , (safe_rshift_func_uint16_t_u_s(0x11D3L, 5)))), ((*l_897) = ((safe_mod_func_uint32_t_u_u(p_32, ((safe_div_func_int64_t_s_s(l_892, p_946->g_814[2].f2)) || (safe_add_func_uint8_t_u_u(((*l_869) , (!(l_876[0][4] &= (((safe_div_func_int8_t_s_s(((0x36B103BEL && (l_722 != 249UL)) < l_873), 247UL)) & FAKE_DIVERGE(p_946->group_0_offset, get_group_id(0), 10)) & p_946->g_403.f5)))), p_32))))) | 0x79B6A857F01393D4L))));
                        (*l_869) = (p_946->g_391[6][7][2].f1 || (*l_869));
                        atomic_xor(&p_946->l_atomic_reduction[0], (safe_rshift_func_int16_t_s_s(((*l_924) |= ((p_32 & ((safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_946->local_2_offset, get_local_id(2), 10), (*l_869))) < ((((VECTOR(uint32_t, 16))(((void*)0 != p_31), 1UL, (p_33 > ((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 8))(l_904.zxyyywzw)).lo, ((VECTOR(uint32_t, 4))(1UL, ((VECTOR(uint32_t, 2))(l_905.xy)), 0xA909EA5DL)), ((VECTOR(uint32_t, 8))(l_906.xwwzywzy)).hi))).lo, ((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_946->g_907.s1270)).xzwwwxxz)), (-1L), (-3L), 0x25F2A55FL, 9L, 0x4BE8FA6AL, ((VECTOR(int32_t, 2))(0x6541F99AL, (-7L))), 0x0F656F22L)).s5db9)).xzzyyyzwwxzwwyzz, ((VECTOR(int32_t, 4))(l_908.s0260)).wzwxyzyxzzzxyzzz))).s78))), ((VECTOR(uint32_t, 4))(l_909.s5116)), 0x57C27736L, 0UL)).s66, ((VECTOR(uint32_t, 8))((safe_mod_func_int32_t_s_s(0x31F1EC1CL, (safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(l_914.xxyyyxyx)).s6, 12)))), 0x5DE42EE9L, ((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 16))(p_946->g_915.s6144075303421440)).s60, ((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 4))((*l_868), 0UL, 4294967295UL, 0xEE2C47FBL)).hi))).yxxy, ((VECTOR(uint32_t, 8))(l_916.xyxyxxyy)).odd, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0UL, 0xDE62ACE2L)).xxyxyxxxxyxxxyyx)).sd1f7))).hi))), ((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 16))(l_917.yyxyxxyxxyyyyyxy)).s57f9, (uint32_t)4294967295UL))).even))), 0x670DD6B1L, 4UL)).wxxzxwyw))).s27, ((VECTOR(uint32_t, 8))(8UL, 0x7B4D9892L, (p_946->g_918 , 2UL), p_33, l_811.sd, ((VECTOR(uint32_t, 2))(0x6FE1F908L)), 0x78B8FC20L)).s62))), 0x4B8DDFFBL, ((VECTOR(uint32_t, 2))(0xB2937492L)), 0UL)).s34, ((VECTOR(uint32_t, 2))(4294967293UL))))), 0xE35C40BFL, 0xB039AE4AL)).x, 1UL, ((VECTOR(uint32_t, 2))(4294967288UL)), p_33, 1UL, 4294967295UL, 0x46EDFDEFL)).s2044432176166411, (uint32_t)6UL))).sf), ((VECTOR(uint32_t, 2))(2UL)), 0x365C1CB2L, 0x34C3DB89L, 4294967295UL, 0x7B33D429L, 0x002B7795L, ((VECTOR(uint32_t, 2))(0x989FE35AL)), 0x90A03BA5L, l_919, 0x85E67DD7L, 0x9CC7081BL)).s0 && l_920[5][8][1]) > p_33))) >= 0x5D920C5B993A5F3EL)), p_946->g_236.s4)) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_946->v_collective += p_946->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                    p_946->g_925[4]--;
                    if ((*l_868))
                        break;
                }
                else
                { /* block id: 301 */
                    for (p_946->g_290.f3 = (-2); (p_946->g_290.f3 == (-10)); --p_946->g_290.f3)
                    { /* block id: 304 */
                        return p_946->g_930;
                    }
                    l_933 |= (safe_lshift_func_uint8_t_u_u(p_32, 1));
                    (*l_759) = (**p_946->g_297);
                    for (p_946->g_870.f1 = 0; (p_946->g_870.f1 > (-29)); p_946->g_870.f1 = safe_sub_func_uint8_t_u_u(p_946->g_870.f1, 2))
                    { /* block id: 311 */
                        int32_t l_938 = 0x5B6E716EL;
                        l_875 ^= (p_946->g_132.y || (safe_mul_func_int8_t_s_s(((6UL & ((((((*l_868) = l_938) ^ ((&p_946->g_62 == &p_946->g_62) != ((VECTOR(int64_t, 4))((safe_mod_func_int16_t_s_s((p_32 || (0x852B952EL ^ ((0x7F7A5DFAL && (((**p_946->g_61) <= 0x3EL) != p_946->g_463.y)) > 0x3F7EL))), p_946->g_800.s4)), 0x433A6548820A4225L, 0L, 0x4087C07C9EA152B6L)).x)) && p_946->g_3[0]) & (*p_946->g_62)) > l_938)) > 4294967287UL), 0x8BL)));
                        (*l_868) = l_938;
                    }
                }
            }
            l_941--;
        }
    }
    return p_946->g_944;
}


/* ------------------------------------------ */
/* 
 * reads : p_946->g_453 p_946->g_463 p_946->g_477 p_946->g_226 p_946->g_488 p_946->g_3 p_946->g_391.f3 p_946->g_189 p_946->g_458 p_946->g_378 p_946->g_290.f3 p_946->g_529 p_946->g_391
 * writes: p_946->g_458 p_946->g_3 p_946->g_267 p_946->g_378 p_946->g_290.f3 p_946->g_529 p_946->g_298 p_946->g_391
 */
int8_t ** func_34(uint32_t  p_35, int8_t ** p_36, int8_t * p_37, uint16_t  p_38, int8_t ** p_39, struct S2 * p_946)
{ /* block id: 142 */
    int16_t l_452 = 1L;
    uint32_t *l_457 = &p_946->g_315[1];
    uint32_t **l_456[2];
    union U1 **l_464[5] = {&p_946->g_267,&p_946->g_267,&p_946->g_267,&p_946->g_267,&p_946->g_267};
    union U1 ***l_465 = &p_946->g_298;
    union U1 ***l_466 = &p_946->g_298;
    union U1 ***l_467 = &p_946->g_298;
    union U1 ***l_468 = (void*)0;
    union U1 **l_469 = &p_946->g_267;
    union U1 **l_470[5];
    union U1 ***l_471 = &l_470[2];
    VECTOR(int32_t, 16) l_472 = (VECTOR(int32_t, 16))(0x14E31E63L, (VECTOR(int32_t, 4))(0x14E31E63L, (VECTOR(int32_t, 2))(0x14E31E63L, 0x535E9979L), 0x535E9979L), 0x535E9979L, 0x14E31E63L, 0x535E9979L, (VECTOR(int32_t, 2))(0x14E31E63L, 0x535E9979L), (VECTOR(int32_t, 2))(0x14E31E63L, 0x535E9979L), 0x14E31E63L, 0x535E9979L, 0x14E31E63L, 0x535E9979L);
    VECTOR(uint32_t, 16) l_473 = (VECTOR(uint32_t, 16))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0xF545B235L), 0xF545B235L), 0xF545B235L, 4294967291UL, 0xF545B235L, (VECTOR(uint32_t, 2))(4294967291UL, 0xF545B235L), (VECTOR(uint32_t, 2))(4294967291UL, 0xF545B235L), 4294967291UL, 0xF545B235L, 4294967291UL, 0xF545B235L);
    VECTOR(uint32_t, 4) l_474 = (VECTOR(uint32_t, 4))(0x9BDA8989L, (VECTOR(uint32_t, 2))(0x9BDA8989L, 4294967295UL), 4294967295UL);
    VECTOR(uint32_t, 2) l_475 = (VECTOR(uint32_t, 2))(0x1B016338L, 0xF867AAE9L);
    VECTOR(uint32_t, 8) l_476 = (VECTOR(uint32_t, 8))(0xDEB9E803L, (VECTOR(uint32_t, 4))(0xDEB9E803L, (VECTOR(uint32_t, 2))(0xDEB9E803L, 0x44380F61L), 0x44380F61L), 0x44380F61L, 0xDEB9E803L, 0x44380F61L);
    uint64_t *l_479 = (void*)0;
    int32_t l_480 = 0L;
    uint8_t *l_513 = &p_946->g_391[6][7][2].f5;
    uint8_t l_534 = 255UL;
    VECTOR(int32_t, 16) l_604 = (VECTOR(int32_t, 16))(0x4C9F64ACL, (VECTOR(int32_t, 4))(0x4C9F64ACL, (VECTOR(int32_t, 2))(0x4C9F64ACL, 0x27B4FD4EL), 0x27B4FD4EL), 0x27B4FD4EL, 0x4C9F64ACL, 0x27B4FD4EL, (VECTOR(int32_t, 2))(0x4C9F64ACL, 0x27B4FD4EL), (VECTOR(int32_t, 2))(0x4C9F64ACL, 0x27B4FD4EL), 0x4C9F64ACL, 0x27B4FD4EL, 0x4C9F64ACL, 0x27B4FD4EL);
    struct S0 *l_605 = &p_946->g_391[2][2][0];
    uint32_t l_626 = 0x7AB53E44L;
    uint16_t l_644 = 65528UL;
    int8_t **l_645 = &p_946->g_62;
    int i;
    for (i = 0; i < 2; i++)
        l_456[i] = &l_457;
    for (i = 0; i < 5; i++)
        l_470[i] = &p_946->g_267;
    if (((l_480 ^= (safe_sub_func_int64_t_s_s(p_35, (safe_add_func_uint32_t_u_u((!l_452), (((((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(1UL, 0x3318L)).yxyyxxyy)).s1, 0xD0E7L, 1UL, 3UL, ((VECTOR(uint16_t, 2))(p_946->g_453.xy)), 0xF10CL, 0UL)).s63)).xxxxyxxx, (uint16_t)(~(((safe_div_func_uint32_t_u_u((&p_946->g_247 == (p_946->g_458 = &p_35)), ((safe_rshift_func_int16_t_s_u((!((((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 4))(p_946->g_463.yyyx)).w, ((~((l_469 = (l_464[2] = l_464[4])) == ((*l_471) = l_470[2]))) || ((VECTOR(int32_t, 8))(l_472.s586532bd)).s1))) == ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 16))(rotate(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 4))(l_473.s73e6)).wzyzxwyx, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(4294967295UL, ((VECTOR(uint32_t, 2))(0UL, 7UL)), 5UL)).even)).yxyyyxxx, ((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0UL, 0xEB6FD9C0L)))).yxxyxyxx)).even)).yzzyzxxywyzzwzww, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_474.wz)).xyxy)).xxwxwyyx)).s0453113503063456))).hi)))))).s6231143124044405)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(4294967294UL, ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0UL, 4294967295UL)).yyxxxxyxyyxyyyxx)).s27, ((VECTOR(uint32_t, 16))(l_475.yxyyyyyyyyyyyxxy)).s36, ((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_476.s75)), 0x66885BB0L, 2UL)).lo)).yxxxxyyyyxxyyxxx, ((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 8))((p_35 , ((p_946->g_477 == &p_946->g_478) | p_946->g_226.y)), 8UL, 0x543CF993L, ((VECTOR(uint32_t, 4))(4294967292UL)), 1UL)), ((VECTOR(uint32_t, 8))(0x3D27840CL))))).s0350752331606331, ((VECTOR(uint32_t, 16))(4294967291UL))))).sb3))), ((VECTOR(uint32_t, 4))(0x0B43FCBEL)), 0x7BC4216EL)).odd)).xwyywzzxxwwyxwww))).s444c, ((VECTOR(uint32_t, 4))(0xDF3F8F12L))))).z) > 0xE6L) , p_35)), 11)) , l_476.s5))) <= 0x3E20L) && 6L)), (uint16_t)1UL))).s2 | l_474.z) , 1L) > l_473.s1)))))) & p_38))
    { /* block id: 148 */
        int32_t *l_490 = &l_480;
        for (l_480 = 20; (l_480 < 1); --l_480)
        { /* block id: 151 */
            int32_t *l_486 = (void*)0;
            (*p_946->g_488) |= (safe_lshift_func_uint8_t_u_s(p_35, 6));
        }
        (*l_490) = p_38;
    }
    else
    { /* block id: 155 */
        int32_t *l_491 = (void*)0;
        int32_t *l_492 = (void*)0;
        int32_t *l_493 = &p_946->g_3[1];
        int32_t *l_494 = &l_480;
        int32_t *l_495 = &l_480;
        int32_t *l_496 = &l_480;
        int32_t *l_497 = &p_946->g_3[0];
        int32_t *l_498[2];
        uint8_t l_499[10] = {0xD9L,0xD5L,0xD9L,0xD9L,0xD5L,0xD9L,0xD9L,0xD5L,0xD9L,0xD9L};
        union U1 *l_506 = &p_946->g_418;
        int i;
        for (i = 0; i < 2; i++)
            l_498[i] = &l_480;
        ++l_499[8];
        atomic_sub(&p_946->l_atomic_reduction[0], (safe_mod_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(p_946->g_391[6][7][2].f3, ((p_946->g_267 = (void*)0) == l_506))), (safe_rshift_func_int16_t_s_s((((-2L) && p_35) > (!(p_946->g_189.y & ((FAKE_DIVERGE(p_946->local_2_offset, get_local_id(2), 10) , ((*l_495) = (safe_div_func_int32_t_s_s(((void*)0 != l_479), (safe_rshift_func_int8_t_s_u((l_472.s9 = ((l_475.y , l_513) != (void*)0)), 7)))))) | (*p_946->g_458))))), 13)))) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_946->v_collective += p_946->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    for (p_946->g_378 = 0; (p_946->g_378 < 6); p_946->g_378 = safe_add_func_uint64_t_u_u(p_946->g_378, 7))
    { /* block id: 164 */
        int32_t *l_516 = &p_946->g_3[0];
        int32_t *l_517 = (void*)0;
        int32_t *l_518 = &p_946->g_3[0];
        int32_t l_519[9] = {4L,0x6075F629L,4L,4L,0x6075F629L,4L,4L,0x6075F629L,4L};
        int32_t *l_520 = &l_519[6];
        int32_t *l_521 = (void*)0;
        int32_t *l_522 = (void*)0;
        int32_t *l_523[2];
        uint64_t l_524 = 18446744073709551610UL;
        VECTOR(int8_t, 4) l_560 = (VECTOR(int8_t, 4))(0x46L, (VECTOR(int8_t, 2))(0x46L, (-3L)), (-3L));
        VECTOR(int16_t, 8) l_643 = (VECTOR(int16_t, 8))(0x44F5L, (VECTOR(int16_t, 4))(0x44F5L, (VECTOR(int16_t, 2))(0x44F5L, 0x632EL), 0x632EL), 0x632EL, 0x44F5L, 0x632EL);
        int i;
        for (i = 0; i < 2; i++)
            l_523[i] = (void*)0;
        if (p_38)
            break;
        --l_524;
        for (p_946->g_290.f3 = (-24); (p_946->g_290.f3 == (-4)); ++p_946->g_290.f3)
        { /* block id: 169 */
            volatile struct S0 *l_530 = &p_946->g_529;
            int32_t l_531 = 8L;
            int32_t l_532 = 0L;
            int32_t l_533 = (-1L);
            VECTOR(uint64_t, 8) l_551 = (VECTOR(uint64_t, 8))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551611UL, 18446744073709551615UL);
            uint64_t *l_557 = &l_524;
            uint64_t *l_565 = &p_946->g_391[6][7][2].f0;
            VECTOR(int32_t, 4) l_571 = (VECTOR(int32_t, 4))(0x790121A1L, (VECTOR(int32_t, 2))(0x790121A1L, 0L), 0L);
            VECTOR(int32_t, 8) l_577 = (VECTOR(int32_t, 8))(0x38B3FD80L, (VECTOR(int32_t, 4))(0x38B3FD80L, (VECTOR(int32_t, 2))(0x38B3FD80L, 5L), 5L), 5L, 0x38B3FD80L, 5L);
            uint8_t l_615 = 0x4AL;
            VECTOR(uint8_t, 2) l_638 = (VECTOR(uint8_t, 2))(0UL, 247UL);
            int i;
            (*l_530) = p_946->g_529;
            l_534--;
        }
    }
    (*l_471) = ((*l_465) = (*l_471));
    (*l_605) = (*l_605);
    return l_645;
}


/* ------------------------------------------ */
/* 
 * reads : p_946->g_396 p_946->g_290.f5 p_946->g_290.f0 p_946->g_418 p_946->g_378 p_946->g_61 p_946->g_62 p_946->g_27 p_946->g_300 p_946->g_253
 * writes: p_946->g_396 p_946->g_169 p_946->g_253
 */
int8_t ** func_40(int8_t ** p_41, int32_t  p_42, int32_t  p_43, struct S2 * p_946)
{ /* block id: 136 */
    uint32_t *l_425 = (void*)0;
    uint32_t *l_426[7][6][6] = {{{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]}},{{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]}},{{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]}},{{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]}},{{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]}},{{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]}},{{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]},{&p_946->g_315[1],(void*)0,&p_946->g_247,&p_946->g_247,&p_946->g_247,&p_946->g_315[3]}}};
    int32_t l_427[2];
    int32_t *l_443[6] = {&p_946->g_391[6][7][2].f1,&p_946->g_391[6][7][2].f1,&p_946->g_391[6][7][2].f1,&p_946->g_391[6][7][2].f1,&p_946->g_391[6][7][2].f1,&p_946->g_391[6][7][2].f1};
    int32_t l_444 = 0L;
    int16_t l_445[4][7][6] = {{{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L}},{{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L}},{{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L}},{{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L},{(-9L),2L,0x7BCEL,(-1L),0x7BCEL,2L}}};
    int32_t *l_447[1][7] = {{&p_946->g_3[0],&p_946->g_3[2],&p_946->g_3[0],&p_946->g_3[0],&p_946->g_3[2],&p_946->g_3[0],&p_946->g_3[0]}};
    int32_t **l_446 = &l_447[0][6];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_427[i] = 0L;
    p_946->g_253.s3 &= (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((((((safe_div_func_int64_t_s_s((p_42 , ((((((void*)0 != &p_946->g_116) & (--p_946->g_396.y)) != l_427[0]) > (p_946->g_169.x = ((safe_div_func_int32_t_s_s((((safe_lshift_func_int16_t_s_u(p_946->g_290.f5, 9)) != l_427[0]) & ((+(func_44(l_427[0], p_41, (l_444 = ((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s((safe_lshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(p_42, l_427[1])), l_427[0])) || l_427[0]), p_946->g_290.f0)))), 0x7EL)) <= l_427[1])), l_427[0], p_946) , p_43)) <= p_42)), l_427[1])) <= p_42))) > p_946->g_378)), p_43)) != p_43) > (**p_946->g_61)) ^ p_946->g_300) & l_445[3][0][0]) , l_446) == &l_447[0][1]), 3)), 5));
    return &p_946->g_62;
}


/* ------------------------------------------ */
/* 
 * reads : p_946->g_418
 * writes:
 */
union U1  func_44(int32_t  p_45, int8_t ** p_46, int32_t  p_47, uint8_t  p_48, struct S2 * p_946)
{ /* block id: 133 */
    int32_t *l_412 = (void*)0;
    int32_t *l_413 = (void*)0;
    int32_t *l_414 = (void*)0;
    int32_t *l_416 = (void*)0;
    int32_t l_417 = 6L;
    l_417 |= (safe_sub_func_int32_t_s_s((-1L), p_47));
    return p_946->g_418;
}


/* ------------------------------------------ */
/* 
 * reads : p_946->g_403 p_946->g_289
 * writes: p_946->g_290
 */
uint16_t  func_55(uint32_t  p_56, int8_t ** p_57, uint32_t  p_58, int8_t * p_59, uint64_t  p_60, struct S2 * p_946)
{ /* block id: 123 */
    uint64_t l_404[4];
    int i;
    for (i = 0; i < 4; i++)
        l_404[i] = 1UL;
    for (p_60 = (-19); (p_60 < 22); p_60 = safe_add_func_uint32_t_u_u(p_60, 4))
    { /* block id: 126 */
        (*p_946->g_289) = p_946->g_403;
        return l_404[1];
    }
    return l_404[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_946->g_247 p_946->g_312 p_946->g_3 p_946->g_61 p_946->g_62 p_946->g_27 p_946->g_319 p_946->g_117 p_946->g_115 p_946->g_237 p_946->g_283 p_946->g_112.f1 p_946->g_147 p_946->g_114 p_946->g_112 p_946->g_289 p_946->g_290.f4 p_946->g_300 p_946->g_391 p_946->g_226 p_946->g_290.f5 p_946->g_396 p_946->g_398 p_946->g_290.f1
 * writes: p_946->g_247 p_946->g_315 p_946->g_147 p_946->g_378 p_946->g_290
 */
uint64_t  func_71(int8_t * p_72, uint64_t  p_73, int64_t  p_74, int32_t * p_75, struct S2 * p_946)
{ /* block id: 85 */
    uint32_t l_301 = 4294967295UL;
    int32_t *l_302 = &p_946->g_3[0];
    uint16_t l_325 = 1UL;
    int32_t l_326[5][1][5] = {{{1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L}}};
    union U1 *l_329 = (void*)0;
    uint32_t l_332 = 0UL;
    int8_t l_335 = 0x5DL;
    VECTOR(uint8_t, 2) l_340 = (VECTOR(uint8_t, 2))(1UL, 0UL);
    VECTOR(int8_t, 8) l_363 = (VECTOR(int8_t, 8))(0x38L, (VECTOR(int8_t, 4))(0x38L, (VECTOR(int8_t, 2))(0x38L, 0x7EL), 0x7EL), 0x7EL, 0x38L, 0x7EL);
    int32_t l_379 = (-1L);
    VECTOR(uint32_t, 4) l_397 = (VECTOR(uint32_t, 4))(0x16BEE284L, (VECTOR(uint32_t, 2))(0x16BEE284L, 0xB86F9420L), 0xB86F9420L);
    int32_t *l_400 = (void*)0;
    int i, j, k;
    if (l_301)
    { /* block id: 86 */
        int32_t **l_303[8][9][3] = {{{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302}},{{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302}},{{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302}},{{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302}},{{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302}},{{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302}},{{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302}},{{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302},{&l_302,&l_302,&l_302}}};
        VECTOR(int8_t, 8) l_322 = (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x07L), 0x07L), 0x07L, (-5L), 0x07L);
        int i, j, k;
        l_302 = l_302;
        for (p_946->g_247 = 0; (p_946->g_247 >= 38); p_946->g_247 = safe_add_func_int64_t_s_s(p_946->g_247, 1))
        { /* block id: 90 */
            int32_t l_313 = (-5L);
            uint32_t *l_314 = &p_946->g_315[3];
            l_326[4][0][3] = (((*p_946->g_283) = (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(7L, 7L)), (-9L), (-6L))).z ^ (safe_mod_func_int16_t_s_s((p_74 , p_73), (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((((VECTOR(uint8_t, 16))(abs(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 16))(0x1FL, ((VECTOR(int8_t, 2))(p_946->g_312.wy)), (-8L), (((*l_314) = l_313) > (*p_75)), (**p_946->g_61), (safe_sub_func_int64_t_s_s(((safe_unary_minus_func_int16_t_s((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_946->g_319.sa3a7e0e67f560db0)).s45f9)).y ^ ((safe_rshift_func_int8_t_s_u(l_313, (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_322.s47)).xyyxyyxx)).hi)).x == ((safe_div_func_uint32_t_u_u((((*p_946->g_117) != (void*)0) , 0UL), p_946->g_237.s4)) < GROUP_DIVERGE(1, 1))))) | l_313)))) , (*l_302)), 0xF4CE853F9EE8935BL)), 0x64L, ((VECTOR(int8_t, 2))((-1L))), 0x7EL, (*p_946->g_62), 0x60L, 9L, 0x35L, 0x6AL)), ((VECTOR(int8_t, 16))(4L))))))).s5990, (int8_t)l_313))).wyzwxyzx, ((VECTOR(int8_t, 8))((-10L))), ((VECTOR(int8_t, 8))(0x43L))))).s3222242644536614))).s6 < 0x3EL) , 0x76DE8D8AB89E95D2L) | p_73), l_325)), l_313)))))) || (**p_946->g_61));
        }
        l_335 |= (safe_rshift_func_int16_t_s_s((((((l_329 == &p_946->g_268) , (*p_72)) || (safe_rshift_func_int8_t_s_s(l_332, ((((p_946->g_112.f1 < ((*p_946->g_283) | ((*p_946->g_61) == (void*)0))) >= (safe_lshift_func_int8_t_s_u((0UL != 0xDD6A417CL), 5))) == (*l_302)) || 0x47L)))) == (*p_946->g_62)) < 0x70L), 5));
        for (l_325 = 23; (l_325 >= 21); l_325 = safe_sub_func_int8_t_s_s(l_325, 8))
        { /* block id: 98 */
            int8_t l_373 = 1L;
            int32_t l_374 = 0L;
            int32_t l_375 = 0x481B2CB0L;
            uint8_t l_376 = 0xD9L;
            uint32_t *l_377 = &p_946->g_378;
            int32_t l_380 = (-8L);
            l_380 ^= ((((*l_377) = (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 16))(l_340.yyxyyxxxyyxxyyxy)).s53, ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(0xBCL, (((((~(l_376 = (safe_rshift_func_int16_t_s_s((-7L), (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((l_375 = ((safe_lshift_func_uint16_t_u_s(7UL, 8)) != ((safe_div_func_uint8_t_u_u(((safe_add_func_int64_t_s_s((safe_div_func_uint32_t_u_u((safe_div_func_uint8_t_u_u((+(safe_mod_func_uint8_t_u_u(p_74, (safe_rshift_func_int16_t_s_u(((p_946->g_283 = (void*)0) == (void*)0), 10))))), (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_363.s3503520747131470)).even)).s7734704165600313)).s0, 0x2AL)))), p_946->g_290.f0)), ((*p_946->g_62) , (safe_unary_minus_func_int32_t_s(((((safe_add_func_int16_t_s_s(((l_374 = (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s(((*l_302) || l_373), (*p_75))) ^ l_373), 0x2D3C92CBL)), (-1L)))) ^ (-10L)), 0x156CL)) & GROUP_DIVERGE(2, 1)) , p_946->g_237.s2) , (*p_75))))))) <= p_946->g_319.sf), 1L)) & p_946->g_315[1]))) != (*l_302)) , 0x38L), (*p_72))), p_946->g_312.y)))))) < (*l_302)) == (*l_302)) <= l_373) != 0x29F5DD55L), 253UL, 1UL)).xyzxwzwxyxyzzywz)).sfef3, (uint8_t)FAKE_DIVERGE(p_946->global_1_offset, get_global_id(1), 10), (uint8_t)p_73))).lo))).xxyxxxyyyyyxyyxx, ((VECTOR(uint8_t, 16))(0xF4L)), ((VECTOR(uint8_t, 16))(0x9BL))))), ((VECTOR(uint8_t, 16))(255UL))))).s57, ((VECTOR(uint8_t, 2))(0xA6L))))).even, p_74))) , l_379) | FAKE_DIVERGE(p_946->global_2_offset, get_global_id(2), 10));
            if ((*p_75))
                break;
        }
    }
    else
    { /* block id: 107 */
        for (p_73 = 0; (p_73 != 50); p_73 = safe_add_func_int8_t_s_s(p_73, 8))
        { /* block id: 110 */
            int8_t l_383 = 0x22L;
            l_326[4][0][3] |= (p_72 != (*p_946->g_61));
            return l_383;
        }
        (*p_946->g_289) = (*p_946->g_114);
    }
    for (p_946->g_290.f4 = (-25); (p_946->g_290.f4 < (-22)); p_946->g_290.f4 = safe_add_func_uint32_t_u_u(p_946->g_290.f4, 1))
    { /* block id: 118 */
        int16_t l_392 = 0x411FL;
        int32_t l_393 = 0x128CA52EL;
        l_393 ^= (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(0x1155L, GROUP_DIVERGE(1, 1))) <= (((p_946->g_300 >= (0x7770A3C3L != (safe_unary_minus_func_int8_t_s((p_946->g_391[6][7][2] , (((*p_946->g_114) , (((0x30L == (p_946->g_226.z < ((void*)0 == &l_332))) || p_946->g_290.f5) ^ l_392)) , (*l_302))))))) <= (-1L)) <= 1UL)), (*p_72)));
    }
    l_326[3][0][4] = (safe_mod_func_uint16_t_u_u((((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 8))(p_946->g_396.yxxyxxxx)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_397.yx)).yxyyyyyx)))), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(p_946->g_398.yyzx)).zzzwwwzz))))).s4 >= 0x72126D90L), ((*l_302) , (*l_302))));
    return p_946->g_290.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_946->g_3 p_946->g_27 p_946->g_comm_values p_946->l_comm_values p_946->g_112 p_946->g_114 p_946->g_115 p_946->g_117 p_946->g_233 p_946->g_232 p_946->g_61 p_946->g_62 p_946->g_253 p_946->g_172 p_946->g_291 p_946->g_297
 * writes: p_946->g_111 p_946->g_112 p_946->g_115 p_946->g_267 p_946->g_253 p_946->g_288 p_946->g_291 p_946->g_298
 */
uint16_t  func_76(uint64_t  p_77, int32_t * p_78, int8_t * p_79, int8_t * p_80, struct S2 * p_946)
{ /* block id: 7 */
    int64_t l_94 = (-1L);
    int8_t *l_141 = &p_946->g_27;
    int32_t *l_149[5];
    uint16_t *l_155 = (void*)0;
    VECTOR(int16_t, 16) l_164 = (VECTOR(int16_t, 16))(0x50CFL, (VECTOR(int16_t, 4))(0x50CFL, (VECTOR(int16_t, 2))(0x50CFL, 0x38C8L), 0x38C8L), 0x38C8L, 0x50CFL, 0x38C8L, (VECTOR(int16_t, 2))(0x50CFL, 0x38C8L), (VECTOR(int16_t, 2))(0x50CFL, 0x38C8L), 0x50CFL, 0x38C8L, 0x50CFL, 0x38C8L);
    uint32_t l_178[10] = {4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL};
    VECTOR(int16_t, 8) l_185 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3534L), 0x3534L), 0x3534L, 1L, 0x3534L);
    int32_t ***l_214 = &p_946->g_115;
    VECTOR(int16_t, 16) l_231 = (VECTOR(int16_t, 16))(0x3FF7L, (VECTOR(int16_t, 4))(0x3FF7L, (VECTOR(int16_t, 2))(0x3FF7L, (-1L)), (-1L)), (-1L), 0x3FF7L, (-1L), (VECTOR(int16_t, 2))(0x3FF7L, (-1L)), (VECTOR(int16_t, 2))(0x3FF7L, (-1L)), 0x3FF7L, (-1L), 0x3FF7L, (-1L));
    uint16_t l_284 = 0UL;
    int i;
    for (i = 0; i < 5; i++)
        l_149[i] = (void*)0;
    for (p_77 = 0; (p_77 < 7); p_77 = safe_add_func_int32_t_s_s(p_77, 3))
    { /* block id: 10 */
        int32_t *l_90 = (void*)0;
        uint16_t *l_110 = &p_946->g_111;
        VECTOR(uint16_t, 2) l_118 = (VECTOR(uint16_t, 2))(0x9AC8L, 0xB8C7L);
        int8_t *l_142 = &p_946->g_27;
        int32_t l_180 = 0x1645DA59L;
        VECTOR(int16_t, 16) l_190 = (VECTOR(int16_t, 16))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L, (VECTOR(int16_t, 2))((-5L), 0L), (VECTOR(int16_t, 2))((-5L), 0L), (-5L), 0L, (-5L), 0L);
        VECTOR(int32_t, 2) l_252 = (VECTOR(int32_t, 2))((-2L), 0x7EAE16F5L);
        union U1 *l_276[2][3];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_276[i][j] = (void*)0;
        }
        (*p_946->g_117) = func_84(l_90, (func_91(l_94, (p_80 = (void*)0), p_946) , ((safe_div_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((safe_div_func_int16_t_s_s(p_946->g_27, l_94)) || 0x422EL), (-1L))), ((*l_110) = (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((+FAKE_DIVERGE(p_946->global_0_offset, get_global_id(0), 10)), (((p_946->g_3[0] ^ p_946->g_comm_values[p_946->tid]) || 0x70L) == l_94))), p_946->g_3[0])), 5))))) == 0L)), p_946->l_comm_values[(safe_mod_func_uint32_t_u_u(p_946->tid, 164))], p_77, p_78, p_946);
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_946->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 164)), permutations[(safe_mod_func_uint32_t_u_u(((((VECTOR(uint16_t, 2))(l_118.yy)).odd == (0x7365AED0E34927B9L ^ 0x1C7DC5EB77D2D86EL)) | p_946->g_3[0]), 10))][(safe_mod_func_uint32_t_u_u(p_946->tid, 164))]));
        for (l_94 = 0; (l_94 > 24); l_94 = safe_add_func_int16_t_s_s(l_94, 6))
        { /* block id: 25 */
            uint32_t l_148 = 0xD68548FAL;
            VECTOR(uint16_t, 16) l_173 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xC6F3L), 0xC6F3L), 0xC6F3L, 0UL, 0xC6F3L, (VECTOR(uint16_t, 2))(0UL, 0xC6F3L), (VECTOR(uint16_t, 2))(0UL, 0xC6F3L), 0UL, 0xC6F3L, 0UL, 0xC6F3L);
            int32_t l_177[7] = {0x5B42F057L,0x5B42F057L,0x5B42F057L,0x5B42F057L,0x5B42F057L,0x5B42F057L,0x5B42F057L};
            uint16_t l_181 = 0xE086L;
            VECTOR(int16_t, 8) l_184 = (VECTOR(int16_t, 8))(0x2959L, (VECTOR(int16_t, 4))(0x2959L, (VECTOR(int16_t, 2))(0x2959L, 0x0780L), 0x0780L), 0x0780L, 0x2959L, 0x0780L);
            uint8_t *l_215 = (void*)0;
            VECTOR(int32_t, 2) l_254 = (VECTOR(int32_t, 2))(8L, 0x4E5F5F17L);
            VECTOR(int64_t, 2) l_270 = (VECTOR(int64_t, 2))((-5L), 0x53547FC097C60415L);
            VECTOR(uint16_t, 2) l_275 = (VECTOR(uint16_t, 2))(0UL, 9UL);
            int i;
            for (p_946->g_111 = 26; (p_946->g_111 > 4); p_946->g_111 = safe_sub_func_uint16_t_u_u(p_946->g_111, 1))
            { /* block id: 28 */
                VECTOR(uint16_t, 16) l_125 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x420BL), 0x420BL), 0x420BL, 1UL, 0x420BL, (VECTOR(uint16_t, 2))(1UL, 0x420BL), (VECTOR(uint16_t, 2))(1UL, 0x420BL), 1UL, 0x420BL, 1UL, 0x420BL);
                VECTOR(int32_t, 8) l_143 = (VECTOR(int32_t, 8))(0x02CDD4D0L, (VECTOR(int32_t, 4))(0x02CDD4D0L, (VECTOR(int32_t, 2))(0x02CDD4D0L, (-1L)), (-1L)), (-1L), 0x02CDD4D0L, (-1L));
                uint8_t *l_146 = &p_946->g_147;
                VECTOR(int16_t, 16) l_197 = (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 6L), 6L), 6L, (-4L), 6L, (VECTOR(int16_t, 2))((-4L), 6L), (VECTOR(int16_t, 2))((-4L), 6L), (-4L), 6L, (-4L), 6L);
                int32_t ***l_224 = &p_946->g_115;
                VECTOR(int16_t, 4) l_227 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x1C3AL), 0x1C3AL);
                VECTOR(int16_t, 16) l_228 = (VECTOR(int16_t, 16))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 0x7EA1L), 0x7EA1L), 0x7EA1L, (-7L), 0x7EA1L, (VECTOR(int16_t, 2))((-7L), 0x7EA1L), (VECTOR(int16_t, 2))((-7L), 0x7EA1L), (-7L), 0x7EA1L, (-7L), 0x7EA1L);
                VECTOR(int16_t, 8) l_239 = (VECTOR(int16_t, 8))(0x606BL, (VECTOR(int16_t, 4))(0x606BL, (VECTOR(int16_t, 2))(0x606BL, (-8L)), (-8L)), (-8L), 0x606BL, (-8L));
                VECTOR(int32_t, 16) l_255 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6647A815L), 0x6647A815L), 0x6647A815L, (-1L), 0x6647A815L, (VECTOR(int32_t, 2))((-1L), 0x6647A815L), (VECTOR(int32_t, 2))((-1L), 0x6647A815L), (-1L), 0x6647A815L, (-1L), 0x6647A815L);
                union U1 *l_266 = (void*)0;
                int32_t **l_269[9] = {&l_90,&l_90,&l_90,&l_90,&l_90,&l_90,&l_90,&l_90,&l_90};
                int i;
                if ((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_125.s167ac4cb)).even)).x, ((VECTOR(uint16_t, 4))(0x21CCL, (safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s((((p_946->g_112.f3 , (p_77 != (safe_add_func_int32_t_s_s(((((VECTOR(int8_t, 2))(p_946->g_132.xy)).hi ^ (0x5681L && ((VECTOR(int16_t, 4))((safe_mul_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((l_125.s2 >= ((safe_mod_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((((FAKE_DIVERGE(p_946->group_0_offset, get_group_id(0), 10) , l_141) != l_142) , ((VECTOR(int32_t, 4))(l_143.s1114)).x) != 0x2D4046E4L), (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x3FD0B78AL, l_94, 0x282E8BC9L, 0x7CC220CDL)).zzyxwywwwwxywzzz)).s0 & (safe_lshift_func_int16_t_s_s((((*l_146) = p_946->l_comm_values[(safe_mod_func_uint32_t_u_u(p_946->tid, 164))]) != 0x74L), 0))))) == 0UL), p_77)) | l_143.s0)), l_94)) != p_77), l_148)), 0x7AE6L, 0x728FL, 0x2B43L)).x)) == FAKE_DIVERGE(p_946->group_1_offset, get_group_id(1), 10)), p_946->g_111)))) , l_149[2]) != p_78), p_946->g_3[0])), 6)), 0x11AEL, 0UL)).z)))
                { /* block id: 30 */
                    uint32_t l_176 = 0x9B8081AEL;
                    int32_t l_179 = (-1L);
                    if ((*p_78))
                    { /* block id: 31 */
                        int32_t **l_161 = &l_149[4];
                        int32_t ***l_160 = &l_161;
                        l_179 = ((((safe_sub_func_int16_t_s_s(0x72E7L, ((safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_uint8_t_u((((void*)0 != l_155) , ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0UL, 0UL)).xyyyxyxx))))).s64, ((VECTOR(uint8_t, 8))(((((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((*p_946->g_117) == ((*l_160) = &l_149[2])), 7)), (safe_rshift_func_int16_t_s_s(l_148, ((VECTOR(int16_t, 4))(l_164.sb0f6)).x)))) >= (FAKE_DIVERGE(p_946->global_1_offset, get_global_id(1), 10) || ((safe_mul_func_uint8_t_u_u((((((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((l_177[5] = ((((VECTOR(int16_t, 16))(p_946->g_169.yxyxyyxxxyyxxyxx)).s6 || p_77) & ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(p_946->g_172.s04)).lo, ((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_173.s57)), 0xF9FCL, 65535UL)).xyxzwzzw))).s2)) && (safe_mul_func_int16_t_s_s((((p_946->g_27 || 0xECC4D8AA34682653L) & l_176) , p_77), p_946->g_169.y))))), 1L, 1L, 0x617C72CAL)))), ((VECTOR(int32_t, 4))(0x27E9AD55L)), ((VECTOR(int32_t, 4))(0x11A66257L))))).odd, ((VECTOR(int32_t, 2))(0x4DCBB970L))))), 0x25B65589L, 0x27E1DD48L)).z ^ (*p_78)) <= 1UL) | 0xB1C4L) ^ (-1L)) > l_178[5]), 4L)) > p_77))) , 65535UL) > p_946->g_169.x), ((VECTOR(uint8_t, 4))(0x3AL)), ((VECTOR(uint8_t, 2))(0xE3L)), 0xD6L)).s17, ((VECTOR(uint8_t, 2))(0xF8L))))).hi))) > 6L), p_946->g_comm_values[p_946->tid])) != 0xBAL))) ^ 0xE8D107E3L) < 0UL) , 0x477A9A3AL);
                        (**l_160) = (void*)0;
                    }
                    else
                    { /* block id: 36 */
                        l_180 &= (l_143.s7 = (+(*p_78)));
                        return p_77;
                    }
                }
                else
                { /* block id: 41 */
                    VECTOR(int8_t, 4) l_186 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L));
                    VECTOR(uint16_t, 4) l_196 = (VECTOR(uint16_t, 4))(0xD509L, (VECTOR(uint16_t, 2))(0xD509L, 8UL), 8UL);
                    int32_t l_216 = 0x2FAA1E91L;
                    VECTOR(int16_t, 2) l_230 = (VECTOR(int16_t, 2))(0x5192L, 0L);
                    VECTOR(int16_t, 2) l_238 = (VECTOR(int16_t, 2))(1L, 0x4F3CL);
                    int i;
                    ++l_181;
                    if (((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 4))(l_184.s3274)).xxxzyxwx, ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 2))(0x02EAL, 0x3EA8L)).yyxyyxyxxyyyyyyx))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_185.s2277)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_186.xyxzywzz)).s16)).yyyy)).lo, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_946->g_187.s76)), 0UL, 0xB9L)).hi)).xxxx)).xyzyywxz)).s55))).yyyyyyxxxxyxxyyx, ((VECTOR(int16_t, 16))(p_946->g_188.yxyxyyxyyyxxxyxx))))).lo, ((VECTOR(int16_t, 16))(0x322FL, 0x2481L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(p_946->g_189.xxxxyxyyxyxxyyyy)).s76)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_190.s340ca8d4fccdb890)).s21)))), 1L, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(p_946->g_191.xxyxyxyy)).odd, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(5L, 0x1ECFL)))).yxxy))))), (safe_mod_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_196.xzzy)).y, FAKE_DIVERGE(p_946->global_1_offset, get_global_id(1), 10))), 1L)), ((VECTOR(int16_t, 2))(l_197.s89)), (-8L), 4L)).hi, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_946->g_198.xwzwzyzx)).s64)).yyyx)))).xzzwxwyy))))).s25)), 0L, 0x023FL)).odd)).wyyzyyxwwwwyyxzy))).even))).even)).lo, ((VECTOR(int16_t, 2))(5L, 6L))))).xyxy, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(0UL, ((VECTOR(uint16_t, 2))(p_946->g_199.zw)).hi, l_148, (safe_mod_func_int8_t_s_s(1L, (((((safe_mul_func_int8_t_s_s(1L, ((((0x5BL <= (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((l_148 , ((((void*)0 == p_79) != (safe_sub_func_int16_t_s_s(((((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((void*)0 == l_214), p_77)) || p_946->g_172.s1), 0xA2L)) , (-8L)) , l_215) != (void*)0), 0x266FL))) , 0x5B4FL)), (-1L))), 7))) , 0x609D877CL) , (**p_946->g_61)) && p_946->g_comm_values[p_946->tid]))) ^ p_946->g_112.f3) != l_181) <= 0x6F76L) && p_77))), 65529UL, ((VECTOR(uint16_t, 4))(65527UL)), 0x961CL, 0UL, 0xBBE4L, 0xE73DL, ((VECTOR(uint16_t, 2))(0xE256L)), 65535UL)).s69)).yyxxyyyy, ((VECTOR(uint16_t, 8))(0x185BL)), ((VECTOR(uint16_t, 8))(1UL))))).s10)).yxxy))).y)
                    { /* block id: 43 */
                        uint16_t l_217[9][8];
                        int32_t ****l_225 = &l_214;
                        VECTOR(int16_t, 4) l_235 = (VECTOR(int16_t, 4))(0x319AL, (VECTOR(int16_t, 2))(0x319AL, (-1L)), (-1L));
                        uint32_t *l_242 = &permutations[(safe_mod_func_uint32_t_u_u(((((VECTOR(uint16_t, 2))(l_118.yy)).odd == (0x7365AED0E34927B9L ^ 0x1C7DC5EB77D2D86EL)) | p_946->g_3[0]), 10))][(safe_mod_func_uint32_t_u_u(p_946->tid, 164))];
                        uint32_t *l_245 = (void*)0;
                        uint32_t *l_246[9][3] = {{&p_946->g_247,&p_946->g_247,&p_946->g_247},{&p_946->g_247,&p_946->g_247,&p_946->g_247},{&p_946->g_247,&p_946->g_247,&p_946->g_247},{&p_946->g_247,&p_946->g_247,&p_946->g_247},{&p_946->g_247,&p_946->g_247,&p_946->g_247},{&p_946->g_247,&p_946->g_247,&p_946->g_247},{&p_946->g_247,&p_946->g_247,&p_946->g_247},{&p_946->g_247,&p_946->g_247,&p_946->g_247},{&p_946->g_247,&p_946->g_247,&p_946->g_247}};
                        int i, j;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 8; j++)
                                l_217[i][j] = 0UL;
                        }
                        l_217[2][4]++;
                        l_180 = (safe_add_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((l_216 = (l_125.sa <= (((*l_225) = l_224) == (((((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_946->g_226.zz)))).xyyyyyxy, ((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_227.zxwwzzzy)), 0x684AL, ((VECTOR(int16_t, 2))(l_228.s8c)), ((VECTOR(int16_t, 4))(p_946->g_229.s1728)), 0x6C85L)).lo, (int16_t)(&p_946->g_111 != (void*)0)))), ((VECTOR(int16_t, 2))(l_230.xy)).yxyyyxxx))).s5 <= ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_231.sb3)).yxyyyxyx)).s2040716671432104, ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(p_946->g_232.xyxxyyyyyxxxyyyx)).s28f2, ((VECTOR(int16_t, 16))(p_946->g_233.s80f63046c214296b)).sabb2))).odd)))).yxxxxxxy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0L, 0L)), p_77, ((VECTOR(int16_t, 2))(p_946->g_234.xw)), l_216, 0x75C5L, (-8L)))))).s02, ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(l_235.xyyx)).wxxywxzy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(p_946->g_236.s1246043164765457)).even)).s0301025631464574)).s4e0f)).xyyxxzwz, ((VECTOR(int16_t, 4))(1L, ((VECTOR(int16_t, 2))(5L, 0x59E7L)), 0x32BAL)).zzwzxxxw))).s04))).xxxxyyyy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(p_946->g_237.s1747262172025423)).sda, ((VECTOR(int16_t, 8))(l_238.xxxxyyyx)).s46))).xyxx)).wwxwxwyy, ((VECTOR(int16_t, 16))(l_239.s5610145660517723)).even))).even)).wxyyzxxw))).s6276266113115752))).s25, (int16_t)(safe_div_func_int32_t_s_s(((((--(*l_242)) | 0xE42A8C77L) , (+0x2730L)) || p_946->g_236.s3), (*p_78)))))).hi) && 0x22L) , &p_946->g_115)))) , (-1L)), p_946->g_233.s0)) ^ p_946->g_232.y), l_186.z));
                    }
                    else
                    { /* block id: 49 */
                        int8_t **l_260 = &l_141;
                        int32_t l_265 = 0x340C9BAAL;
                        l_265 = ((safe_mod_func_int32_t_s_s((&p_946->g_62 == &p_946->g_62), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967295UL, 0UL)), 0x02E8F972L, 4294967286UL)).odd, ((VECTOR(uint32_t, 2))(4294967295UL, 1UL))))).hi, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_252.xx)).yxyx)).xxywzwyxwzyxwwzx)).s32)).xxxx, ((VECTOR(int32_t, 4))(p_946->g_253.s3536)), ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))((-10L), 0x0DAB3317L, 1L, 0x1E9B9EE4L)).xyzxzyzz, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x719A7204L, (-1L))))).xyxxxxxy))).s52, ((VECTOR(int32_t, 2))(l_254.xy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_255.sbefcb443)))), 0x77BA14FAL, (safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(0UL, 6)) , (((*l_260) = (*p_946->g_61)) == p_80)) && 0x6F88C86E7D8582BFL), ((safe_div_func_int64_t_s_s(0x4998A2E6060EF3B8L, 1UL)) || (safe_add_func_uint8_t_u_u(p_77, (*p_946->g_62)))))), (-1L), ((VECTOR(int32_t, 2))(3L)), 0L, 0x65476D4BL, 2L)).sca))).yxxxyyxyyyyyyxxx, ((VECTOR(int32_t, 16))(1L))))).sa26e))))).yzyxzzyxzyyzxxxw, ((VECTOR(int32_t, 16))((-1L)))))).sbe)).yxxxxxyx, ((VECTOR(int32_t, 8))(3L))))).s4)), p_946->g_234.x, 8UL, 4294967290UL)).odd)), 1UL, 0xA9E8C40DL, ((VECTOR(uint32_t, 4))(0x1A803AACL)))).s2)) , (*p_78));
                        l_149[3] = &l_177[0];
                        p_946->g_267 = l_266;
                        if ((*p_78))
                            break;
                    }
                    l_216 = l_216;
                    l_177[5] = ((void*)0 != (*p_946->g_61));
                }
                l_149[2] = p_78;
                p_946->g_253.s0 |= (((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 2))(5L, 0L)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_270.xxyyxyxx)).s60)), (-1L), 0x014A8628671E70E9L)).even))).xyyyxyyy)))).s55, (int64_t)((~(safe_rshift_func_int8_t_s_u(1L, 1))) != (safe_mul_func_uint8_t_u_u((((p_77 , ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_275.yx)).lo, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(65535UL, 0x82EDL, 0x9851L, 0xA814L)).xzxwwwyx)).s41)), ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0UL, 0xAAFAL)).xyxxyyxyyyyxyxyx)).s0f)).yxxy, (uint16_t)(((void*)0 == l_276[1][0]) && (safe_mod_func_int16_t_s_s((((safe_add_func_uint8_t_u_u(0xFDL, ((safe_mul_func_uint8_t_u_u(p_946->g_189.x, (FAKE_DIVERGE(p_946->local_1_offset, get_local_id(1), 10) , p_77))) | (((+((l_142 == (p_946->g_283 = ((*p_78) , &p_946->g_147))) ^ (*p_946->g_62))) & (*p_78)) || 0x49L)))) < (-1L)) < 1L), p_946->g_233.s7)))))), p_77, 0x53D3L, 0UL, 0x0F88L))))).s66, ((VECTOR(uint16_t, 2))(65531UL))))), 0x428AL, p_77, ((VECTOR(uint16_t, 4))(0x0D86L)), 65535UL, p_946->g_3[0], ((VECTOR(uint16_t, 2))(0x8448L)), 65535UL)).s5529, ((VECTOR(uint16_t, 4))(9UL))))).hi, ((VECTOR(uint16_t, 2))(0xD6B5L))))), 1UL, 1UL)).x) ^ p_946->g_226.w) & (*p_79)), (**p_946->g_61))))))).yxyxxxxy, ((VECTOR(int64_t, 8))(1L))))).s0 <= p_946->g_3[1]);
                if ((*p_78))
                { /* block id: 62 */
                    int32_t *l_287 = &l_177[5];
                    --l_284;
                    if ((l_252.x = (p_946->g_172.s2 && 0x1C89L)))
                    { /* block id: 65 */
                        l_287 = p_78;
                    }
                    else
                    { /* block id: 67 */
                        l_149[1] = &l_177[1];
                        return l_184.s1;
                    }
                    p_946->g_288 = (void*)0;
                }
                else
                { /* block id: 72 */
                    --p_946->g_291;
                }
            }
        }
        for (l_284 = 9; (l_284 != 56); l_284 = safe_add_func_int64_t_s_s(l_284, 4))
        { /* block id: 79 */
            union U1 **l_296 = &l_276[1][0];
            (*p_946->g_297) = l_296;
        }
    }
    return p_77;
}


/* ------------------------------------------ */
/* 
 * reads : p_946->g_112 p_946->g_114 p_946->g_115
 * writes: p_946->g_112
 */
int32_t ** func_84(int32_t * p_85, uint64_t  p_86, int32_t  p_87, int32_t  p_88, int32_t * p_89, struct S2 * p_946)
{ /* block id: 16 */
    volatile struct S0 *l_113 = (void*)0;
    (*p_946->g_114) = p_946->g_112;
    return p_946->g_115;
}


/* ------------------------------------------ */
/* 
 * reads : p_946->g_3
 * writes:
 */
int32_t  func_91(int64_t  p_92, int8_t * p_93, struct S2 * p_946)
{ /* block id: 12 */
    int32_t *l_96 = &p_946->g_3[0];
    int32_t **l_95 = &l_96;
    int32_t **l_97 = &l_96;
    l_97 = l_95;
    return p_946->g_3[0];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[164];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 164; i++)
            l_comm_values[i] = 1;
    struct S2 c_947;
    struct S2* p_946 = &c_947;
    struct S2 c_948 = {
        {1L,1L,1L}, // p_946->g_3
        (-7L), // p_946->g_27
        &p_946->g_27, // p_946->g_62
        &p_946->g_62, // p_946->g_61
        0xD54DL, // p_946->g_111
        {0UL,-1L,0x1EF177DAL,0L,8L,255UL}, // p_946->g_112
        &p_946->g_112, // p_946->g_114
        (void*)0, // p_946->g_115
        (void*)0, // p_946->g_116
        &p_946->g_115, // p_946->g_117
        (VECTOR(int8_t, 2))(0x33L, 5L), // p_946->g_132
        0UL, // p_946->g_147
        (VECTOR(int16_t, 2))(0L, 0x23F6L), // p_946->g_169
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x1CDEL), 0x1CDEL), 0x1CDEL, 1L, 0x1CDEL), // p_946->g_172
        (VECTOR(uint8_t, 8))(0xFEL, (VECTOR(uint8_t, 4))(0xFEL, (VECTOR(uint8_t, 2))(0xFEL, 2UL), 2UL), 2UL, 0xFEL, 2UL), // p_946->g_187
        (VECTOR(int16_t, 2))(8L, 2L), // p_946->g_188
        (VECTOR(int16_t, 2))((-2L), (-7L)), // p_946->g_189
        (VECTOR(int16_t, 2))(0x00A1L, 0x2580L), // p_946->g_191
        (VECTOR(int16_t, 4))(0x65B2L, (VECTOR(int16_t, 2))(0x65B2L, (-1L)), (-1L)), // p_946->g_198
        (VECTOR(uint16_t, 4))(0x08FFL, (VECTOR(uint16_t, 2))(0x08FFL, 0x40BDL), 0x40BDL), // p_946->g_199
        (VECTOR(int16_t, 4))(0x001AL, (VECTOR(int16_t, 2))(0x001AL, 0x5D6FL), 0x5D6FL), // p_946->g_226
        (VECTOR(int16_t, 16))(0x215FL, (VECTOR(int16_t, 4))(0x215FL, (VECTOR(int16_t, 2))(0x215FL, 0L), 0L), 0L, 0x215FL, 0L, (VECTOR(int16_t, 2))(0x215FL, 0L), (VECTOR(int16_t, 2))(0x215FL, 0L), 0x215FL, 0L, 0x215FL, 0L), // p_946->g_229
        (VECTOR(int16_t, 2))(0x3EDEL, 0x2BECL), // p_946->g_232
        (VECTOR(int16_t, 16))(0x1E57L, (VECTOR(int16_t, 4))(0x1E57L, (VECTOR(int16_t, 2))(0x1E57L, 0x1F27L), 0x1F27L), 0x1F27L, 0x1E57L, 0x1F27L, (VECTOR(int16_t, 2))(0x1E57L, 0x1F27L), (VECTOR(int16_t, 2))(0x1E57L, 0x1F27L), 0x1E57L, 0x1F27L, 0x1E57L, 0x1F27L), // p_946->g_233
        (VECTOR(int16_t, 4))(0x432EL, (VECTOR(int16_t, 2))(0x432EL, 0x7288L), 0x7288L), // p_946->g_234
        (VECTOR(int16_t, 8))(0x26CEL, (VECTOR(int16_t, 4))(0x26CEL, (VECTOR(int16_t, 2))(0x26CEL, 0x2223L), 0x2223L), 0x2223L, 0x26CEL, 0x2223L), // p_946->g_236
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x2792L), 0x2792L), 0x2792L, (-1L), 0x2792L), // p_946->g_237
        4294967295UL, // p_946->g_247
        (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x1BF8E628L), 0x1BF8E628L), 0x1BF8E628L, 9L, 0x1BF8E628L), // p_946->g_253
        {8UL}, // p_946->g_268
        &p_946->g_268, // p_946->g_267
        &p_946->g_147, // p_946->g_283
        {4UL,6L,0x5929FAF4L,-4L,0x7BD0E14EDC627800L,0x5EL}, // p_946->g_290
        &p_946->g_290, // p_946->g_289
        &p_946->g_289, // p_946->g_288
        255UL, // p_946->g_291
        (void*)0, // p_946->g_298
        &p_946->g_298, // p_946->g_297
        0UL, // p_946->g_300
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), // p_946->g_312
        {0x848159A6L,0x848159A6L,0x848159A6L,0x848159A6L}, // p_946->g_315
        (VECTOR(int8_t, 16))(0x66L, (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 7L), 7L), 7L, 0x66L, 7L, (VECTOR(int8_t, 2))(0x66L, 7L), (VECTOR(int8_t, 2))(0x66L, 7L), 0x66L, 7L, 0x66L, 7L), // p_946->g_319
        0UL, // p_946->g_378
        {{{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}}},{{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}}},{{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}}},{{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}}},{{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}}},{{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}}},{{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}},{{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0xA6466EB96BC2F6B5L,-7L,0x5B5F5379L,-1L,0x38BD5CAA2F1588C4L,2UL},{0x99435AAB0AD898AEL,0x070CC951L,0L,0x0AL,0x12557BF378EC2CE1L,4UL},{1UL,-10L,2L,0x73L,0x533CDCB692BDD7A7L,255UL}}}}, // p_946->g_391
        (VECTOR(uint32_t, 2))(0x10712FA7L, 0UL), // p_946->g_396
        (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 4294967295UL), 4294967295UL), // p_946->g_398
        (void*)0, // p_946->g_399
        {0xC29167D51CBB78CDL,0x082659F8L,0L,0L,0x32FFAFC6703545E3L,248UL}, // p_946->g_403
        0UL, // p_946->g_406
        9L, // p_946->g_408
        (void*)0, // p_946->g_415
        {0x25EAA3A3CF75FD00L}, // p_946->g_418
        (VECTOR(uint16_t, 2))(2UL, 0xEEB5L), // p_946->g_453
        (void*)0, // p_946->g_458
        (VECTOR(int8_t, 2))(0x30L, 1L), // p_946->g_463
        (void*)0, // p_946->g_478
        &p_946->g_478, // p_946->g_477
        {&p_946->g_3[1]}, // p_946->g_485
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_946->g_487
        &p_946->g_3[0], // p_946->g_488
        (void*)0, // p_946->g_489
        {18446744073709551610UL,0x2ED5A10BL,0x69F7CCFAL,-1L,-5L,248UL}, // p_946->g_529
        (VECTOR(int8_t, 2))(0x5BL, 0x23L), // p_946->g_546
        (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0x352BD7975F351B24L), 0x352BD7975F351B24L), // p_946->g_556
        (VECTOR(uint64_t, 16))(0x06C4D9F563EF4C22L, (VECTOR(uint64_t, 4))(0x06C4D9F563EF4C22L, (VECTOR(uint64_t, 2))(0x06C4D9F563EF4C22L, 0x0C5484A3AF666502L), 0x0C5484A3AF666502L), 0x0C5484A3AF666502L, 0x06C4D9F563EF4C22L, 0x0C5484A3AF666502L, (VECTOR(uint64_t, 2))(0x06C4D9F563EF4C22L, 0x0C5484A3AF666502L), (VECTOR(uint64_t, 2))(0x06C4D9F563EF4C22L, 0x0C5484A3AF666502L), 0x06C4D9F563EF4C22L, 0x0C5484A3AF666502L, 0x06C4D9F563EF4C22L, 0x0C5484A3AF666502L), // p_946->g_566
        (void*)0, // p_946->g_576
        &p_946->g_283, // p_946->g_581
        &p_946->g_581, // p_946->g_580
        0x20F4DF76F852E86CL, // p_946->g_590
        (VECTOR(uint16_t, 16))(0x5360L, (VECTOR(uint16_t, 4))(0x5360L, (VECTOR(uint16_t, 2))(0x5360L, 0x05CDL), 0x05CDL), 0x05CDL, 0x5360L, 0x05CDL, (VECTOR(uint16_t, 2))(0x5360L, 0x05CDL), (VECTOR(uint16_t, 2))(0x5360L, 0x05CDL), 0x5360L, 0x05CDL, 0x5360L, 0x05CDL), // p_946->g_600
        &p_946->g_289, // p_946->g_606
        (VECTOR(int16_t, 8))(0x4D18L, (VECTOR(int16_t, 4))(0x4D18L, (VECTOR(int16_t, 2))(0x4D18L, 0x7A02L), 0x7A02L), 0x7A02L, 0x4D18L, 0x7A02L), // p_946->g_641
        {&p_946->g_3[0]}, // p_946->g_655
        {&p_946->g_115,&p_946->g_115,&p_946->g_115,&p_946->g_115,&p_946->g_115,&p_946->g_115,&p_946->g_115,&p_946->g_115,&p_946->g_115,&p_946->g_115}, // p_946->g_678
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xDE58E1E1L), 0xDE58E1E1L), 0xDE58E1E1L, 1UL, 0xDE58E1E1L), // p_946->g_681
        0x50E3CBD7L, // p_946->g_708
        (VECTOR(uint64_t, 4))(0x14CCE043B75BB7DBL, (VECTOR(uint64_t, 2))(0x14CCE043B75BB7DBL, 0x417CA7E9C5005317L), 0x417CA7E9C5005317L), // p_946->g_729
        (VECTOR(uint64_t, 2))(1UL, 0x1587A81DDB504462L), // p_946->g_730
        (VECTOR(int8_t, 8))(0x7FL, (VECTOR(int8_t, 4))(0x7FL, (VECTOR(int8_t, 2))(0x7FL, 0x7FL), 0x7FL), 0x7FL, 0x7FL, 0x7FL), // p_946->g_757
        (VECTOR(int8_t, 2))(1L, 0x3AL), // p_946->g_758
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL), // p_946->g_770
        {1UL}, // p_946->g_778
        (VECTOR(uint64_t, 2))(0UL, 0x750897261FF28D94L), // p_946->g_794
        {0xCC2C66663467F17FL,0x34E20636L,0x2350B2C0L,1L,0x256F40804E561DDEL,249UL}, // p_946->g_798
        (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 7UL), 7UL), // p_946->g_799
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x23L), 0x23L), 0x23L, 255UL, 0x23L, (VECTOR(uint8_t, 2))(255UL, 0x23L), (VECTOR(uint8_t, 2))(255UL, 0x23L), 255UL, 0x23L, 255UL, 0x23L), // p_946->g_800
        (VECTOR(uint8_t, 16))(0xBDL, (VECTOR(uint8_t, 4))(0xBDL, (VECTOR(uint8_t, 2))(0xBDL, 255UL), 255UL), 255UL, 0xBDL, 255UL, (VECTOR(uint8_t, 2))(0xBDL, 255UL), (VECTOR(uint8_t, 2))(0xBDL, 255UL), 0xBDL, 255UL, 0xBDL, 255UL), // p_946->g_804
        (VECTOR(int64_t, 8))(5L, (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 7L), 7L), 7L, 5L, 7L), // p_946->g_807
        (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 0UL, 18446744073709551606UL), // p_946->g_808
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 252UL), 252UL), 252UL, 1UL, 252UL, (VECTOR(uint8_t, 2))(1UL, 252UL), (VECTOR(uint8_t, 2))(1UL, 252UL), 1UL, 252UL, 1UL, 252UL), // p_946->g_810
        (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 255UL), 255UL), // p_946->g_812
        {{0x2C671D5A99EF7BABL,-6L,8L,0x5AL,-1L,255UL},{0x2C671D5A99EF7BABL,-6L,8L,0x5AL,-1L,255UL},{0x2C671D5A99EF7BABL,-6L,8L,0x5AL,-1L,255UL},{0x2C671D5A99EF7BABL,-6L,8L,0x5AL,-1L,255UL},{0x2C671D5A99EF7BABL,-6L,8L,0x5AL,-1L,255UL},{0x2C671D5A99EF7BABL,-6L,8L,0x5AL,-1L,255UL}}, // p_946->g_814
        (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 65535UL), 65535UL), // p_946->g_833
        &p_946->g_458, // p_946->g_843
        0x3AD3C9C8BD6268E1L, // p_946->g_845
        (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x0F9689AFL), 0x0F9689AFL), 0x0F9689AFL, (-5L), 0x0F9689AFL, (VECTOR(int32_t, 2))((-5L), 0x0F9689AFL), (VECTOR(int32_t, 2))((-5L), 0x0F9689AFL), (-5L), 0x0F9689AFL, (-5L), 0x0F9689AFL), // p_946->g_854
        {0xF121C4A7F20FDEC5L,0L,0x196CE64FL,1L,-1L,0x8FL}, // p_946->g_870
        (VECTOR(int32_t, 8))(0x1C60B2EFL, (VECTOR(int32_t, 4))(0x1C60B2EFL, (VECTOR(int32_t, 2))(0x1C60B2EFL, 0x19E50125L), 0x19E50125L), 0x19E50125L, 0x1C60B2EFL, 0x19E50125L), // p_946->g_907
        (VECTOR(uint32_t, 8))(0x399FD98BL, (VECTOR(uint32_t, 4))(0x399FD98BL, (VECTOR(uint32_t, 2))(0x399FD98BL, 0x7D54E5A1L), 0x7D54E5A1L), 0x7D54E5A1L, 0x399FD98BL, 0x7D54E5A1L), // p_946->g_915
        {18446744073709551610UL}, // p_946->g_918
        {18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL,18446744073709551612UL}, // p_946->g_925
        {1UL}, // p_946->g_930
        {0x9ABF16E01606EAE7L}, // p_946->g_944
        {{{0x6716992263C20AD0L},{18446744073709551609UL},{0xEBF95A10E7614B67L},{0x0685DE53AB7DEC91L},{0x7752C9617E2D48DEL},{0UL},{0x7BD1FB4E64EEA883L},{0xEBF95A10E7614B67L}},{{0x6716992263C20AD0L},{18446744073709551609UL},{0xEBF95A10E7614B67L},{0x0685DE53AB7DEC91L},{0x7752C9617E2D48DEL},{0UL},{0x7BD1FB4E64EEA883L},{0xEBF95A10E7614B67L}},{{0x6716992263C20AD0L},{18446744073709551609UL},{0xEBF95A10E7614B67L},{0x0685DE53AB7DEC91L},{0x7752C9617E2D48DEL},{0UL},{0x7BD1FB4E64EEA883L},{0xEBF95A10E7614B67L}},{{0x6716992263C20AD0L},{18446744073709551609UL},{0xEBF95A10E7614B67L},{0x0685DE53AB7DEC91L},{0x7752C9617E2D48DEL},{0UL},{0x7BD1FB4E64EEA883L},{0xEBF95A10E7614B67L}},{{0x6716992263C20AD0L},{18446744073709551609UL},{0xEBF95A10E7614B67L},{0x0685DE53AB7DEC91L},{0x7752C9617E2D48DEL},{0UL},{0x7BD1FB4E64EEA883L},{0xEBF95A10E7614B67L}},{{0x6716992263C20AD0L},{18446744073709551609UL},{0xEBF95A10E7614B67L},{0x0685DE53AB7DEC91L},{0x7752C9617E2D48DEL},{0UL},{0x7BD1FB4E64EEA883L},{0xEBF95A10E7614B67L}},{{0x6716992263C20AD0L},{18446744073709551609UL},{0xEBF95A10E7614B67L},{0x0685DE53AB7DEC91L},{0x7752C9617E2D48DEL},{0UL},{0x7BD1FB4E64EEA883L},{0xEBF95A10E7614B67L}},{{0x6716992263C20AD0L},{18446744073709551609UL},{0xEBF95A10E7614B67L},{0x0685DE53AB7DEC91L},{0x7752C9617E2D48DEL},{0UL},{0x7BD1FB4E64EEA883L},{0xEBF95A10E7614B67L}},{{0x6716992263C20AD0L},{18446744073709551609UL},{0xEBF95A10E7614B67L},{0x0685DE53AB7DEC91L},{0x7752C9617E2D48DEL},{0UL},{0x7BD1FB4E64EEA883L},{0xEBF95A10E7614B67L}},{{0x6716992263C20AD0L},{18446744073709551609UL},{0xEBF95A10E7614B67L},{0x0685DE53AB7DEC91L},{0x7752C9617E2D48DEL},{0UL},{0x7BD1FB4E64EEA883L},{0xEBF95A10E7614B67L}}}, // p_946->g_945
        0, // p_946->v_collective
        sequence_input[get_global_id(0)], // p_946->global_0_offset
        sequence_input[get_global_id(1)], // p_946->global_1_offset
        sequence_input[get_global_id(2)], // p_946->global_2_offset
        sequence_input[get_local_id(0)], // p_946->local_0_offset
        sequence_input[get_local_id(1)], // p_946->local_1_offset
        sequence_input[get_local_id(2)], // p_946->local_2_offset
        sequence_input[get_group_id(0)], // p_946->group_0_offset
        sequence_input[get_group_id(1)], // p_946->group_1_offset
        sequence_input[get_group_id(2)], // p_946->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 164)), permutations[0][get_linear_local_id()])), // p_946->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_947 = c_948;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_946);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_946->g_3[i], "p_946->g_3[i]", print_hash_value);

    }
    transparent_crc(p_946->g_27, "p_946->g_27", print_hash_value);
    transparent_crc(p_946->g_111, "p_946->g_111", print_hash_value);
    transparent_crc(p_946->g_112.f0, "p_946->g_112.f0", print_hash_value);
    transparent_crc(p_946->g_112.f1, "p_946->g_112.f1", print_hash_value);
    transparent_crc(p_946->g_112.f2, "p_946->g_112.f2", print_hash_value);
    transparent_crc(p_946->g_112.f3, "p_946->g_112.f3", print_hash_value);
    transparent_crc(p_946->g_112.f4, "p_946->g_112.f4", print_hash_value);
    transparent_crc(p_946->g_112.f5, "p_946->g_112.f5", print_hash_value);
    transparent_crc(p_946->g_132.x, "p_946->g_132.x", print_hash_value);
    transparent_crc(p_946->g_132.y, "p_946->g_132.y", print_hash_value);
    transparent_crc(p_946->g_147, "p_946->g_147", print_hash_value);
    transparent_crc(p_946->g_169.x, "p_946->g_169.x", print_hash_value);
    transparent_crc(p_946->g_169.y, "p_946->g_169.y", print_hash_value);
    transparent_crc(p_946->g_172.s0, "p_946->g_172.s0", print_hash_value);
    transparent_crc(p_946->g_172.s1, "p_946->g_172.s1", print_hash_value);
    transparent_crc(p_946->g_172.s2, "p_946->g_172.s2", print_hash_value);
    transparent_crc(p_946->g_172.s3, "p_946->g_172.s3", print_hash_value);
    transparent_crc(p_946->g_172.s4, "p_946->g_172.s4", print_hash_value);
    transparent_crc(p_946->g_172.s5, "p_946->g_172.s5", print_hash_value);
    transparent_crc(p_946->g_172.s6, "p_946->g_172.s6", print_hash_value);
    transparent_crc(p_946->g_172.s7, "p_946->g_172.s7", print_hash_value);
    transparent_crc(p_946->g_187.s0, "p_946->g_187.s0", print_hash_value);
    transparent_crc(p_946->g_187.s1, "p_946->g_187.s1", print_hash_value);
    transparent_crc(p_946->g_187.s2, "p_946->g_187.s2", print_hash_value);
    transparent_crc(p_946->g_187.s3, "p_946->g_187.s3", print_hash_value);
    transparent_crc(p_946->g_187.s4, "p_946->g_187.s4", print_hash_value);
    transparent_crc(p_946->g_187.s5, "p_946->g_187.s5", print_hash_value);
    transparent_crc(p_946->g_187.s6, "p_946->g_187.s6", print_hash_value);
    transparent_crc(p_946->g_187.s7, "p_946->g_187.s7", print_hash_value);
    transparent_crc(p_946->g_188.x, "p_946->g_188.x", print_hash_value);
    transparent_crc(p_946->g_188.y, "p_946->g_188.y", print_hash_value);
    transparent_crc(p_946->g_189.x, "p_946->g_189.x", print_hash_value);
    transparent_crc(p_946->g_189.y, "p_946->g_189.y", print_hash_value);
    transparent_crc(p_946->g_191.x, "p_946->g_191.x", print_hash_value);
    transparent_crc(p_946->g_191.y, "p_946->g_191.y", print_hash_value);
    transparent_crc(p_946->g_198.x, "p_946->g_198.x", print_hash_value);
    transparent_crc(p_946->g_198.y, "p_946->g_198.y", print_hash_value);
    transparent_crc(p_946->g_198.z, "p_946->g_198.z", print_hash_value);
    transparent_crc(p_946->g_198.w, "p_946->g_198.w", print_hash_value);
    transparent_crc(p_946->g_199.x, "p_946->g_199.x", print_hash_value);
    transparent_crc(p_946->g_199.y, "p_946->g_199.y", print_hash_value);
    transparent_crc(p_946->g_199.z, "p_946->g_199.z", print_hash_value);
    transparent_crc(p_946->g_199.w, "p_946->g_199.w", print_hash_value);
    transparent_crc(p_946->g_226.x, "p_946->g_226.x", print_hash_value);
    transparent_crc(p_946->g_226.y, "p_946->g_226.y", print_hash_value);
    transparent_crc(p_946->g_226.z, "p_946->g_226.z", print_hash_value);
    transparent_crc(p_946->g_226.w, "p_946->g_226.w", print_hash_value);
    transparent_crc(p_946->g_229.s0, "p_946->g_229.s0", print_hash_value);
    transparent_crc(p_946->g_229.s1, "p_946->g_229.s1", print_hash_value);
    transparent_crc(p_946->g_229.s2, "p_946->g_229.s2", print_hash_value);
    transparent_crc(p_946->g_229.s3, "p_946->g_229.s3", print_hash_value);
    transparent_crc(p_946->g_229.s4, "p_946->g_229.s4", print_hash_value);
    transparent_crc(p_946->g_229.s5, "p_946->g_229.s5", print_hash_value);
    transparent_crc(p_946->g_229.s6, "p_946->g_229.s6", print_hash_value);
    transparent_crc(p_946->g_229.s7, "p_946->g_229.s7", print_hash_value);
    transparent_crc(p_946->g_229.s8, "p_946->g_229.s8", print_hash_value);
    transparent_crc(p_946->g_229.s9, "p_946->g_229.s9", print_hash_value);
    transparent_crc(p_946->g_229.sa, "p_946->g_229.sa", print_hash_value);
    transparent_crc(p_946->g_229.sb, "p_946->g_229.sb", print_hash_value);
    transparent_crc(p_946->g_229.sc, "p_946->g_229.sc", print_hash_value);
    transparent_crc(p_946->g_229.sd, "p_946->g_229.sd", print_hash_value);
    transparent_crc(p_946->g_229.se, "p_946->g_229.se", print_hash_value);
    transparent_crc(p_946->g_229.sf, "p_946->g_229.sf", print_hash_value);
    transparent_crc(p_946->g_232.x, "p_946->g_232.x", print_hash_value);
    transparent_crc(p_946->g_232.y, "p_946->g_232.y", print_hash_value);
    transparent_crc(p_946->g_233.s0, "p_946->g_233.s0", print_hash_value);
    transparent_crc(p_946->g_233.s1, "p_946->g_233.s1", print_hash_value);
    transparent_crc(p_946->g_233.s2, "p_946->g_233.s2", print_hash_value);
    transparent_crc(p_946->g_233.s3, "p_946->g_233.s3", print_hash_value);
    transparent_crc(p_946->g_233.s4, "p_946->g_233.s4", print_hash_value);
    transparent_crc(p_946->g_233.s5, "p_946->g_233.s5", print_hash_value);
    transparent_crc(p_946->g_233.s6, "p_946->g_233.s6", print_hash_value);
    transparent_crc(p_946->g_233.s7, "p_946->g_233.s7", print_hash_value);
    transparent_crc(p_946->g_233.s8, "p_946->g_233.s8", print_hash_value);
    transparent_crc(p_946->g_233.s9, "p_946->g_233.s9", print_hash_value);
    transparent_crc(p_946->g_233.sa, "p_946->g_233.sa", print_hash_value);
    transparent_crc(p_946->g_233.sb, "p_946->g_233.sb", print_hash_value);
    transparent_crc(p_946->g_233.sc, "p_946->g_233.sc", print_hash_value);
    transparent_crc(p_946->g_233.sd, "p_946->g_233.sd", print_hash_value);
    transparent_crc(p_946->g_233.se, "p_946->g_233.se", print_hash_value);
    transparent_crc(p_946->g_233.sf, "p_946->g_233.sf", print_hash_value);
    transparent_crc(p_946->g_234.x, "p_946->g_234.x", print_hash_value);
    transparent_crc(p_946->g_234.y, "p_946->g_234.y", print_hash_value);
    transparent_crc(p_946->g_234.z, "p_946->g_234.z", print_hash_value);
    transparent_crc(p_946->g_234.w, "p_946->g_234.w", print_hash_value);
    transparent_crc(p_946->g_236.s0, "p_946->g_236.s0", print_hash_value);
    transparent_crc(p_946->g_236.s1, "p_946->g_236.s1", print_hash_value);
    transparent_crc(p_946->g_236.s2, "p_946->g_236.s2", print_hash_value);
    transparent_crc(p_946->g_236.s3, "p_946->g_236.s3", print_hash_value);
    transparent_crc(p_946->g_236.s4, "p_946->g_236.s4", print_hash_value);
    transparent_crc(p_946->g_236.s5, "p_946->g_236.s5", print_hash_value);
    transparent_crc(p_946->g_236.s6, "p_946->g_236.s6", print_hash_value);
    transparent_crc(p_946->g_236.s7, "p_946->g_236.s7", print_hash_value);
    transparent_crc(p_946->g_237.s0, "p_946->g_237.s0", print_hash_value);
    transparent_crc(p_946->g_237.s1, "p_946->g_237.s1", print_hash_value);
    transparent_crc(p_946->g_237.s2, "p_946->g_237.s2", print_hash_value);
    transparent_crc(p_946->g_237.s3, "p_946->g_237.s3", print_hash_value);
    transparent_crc(p_946->g_237.s4, "p_946->g_237.s4", print_hash_value);
    transparent_crc(p_946->g_237.s5, "p_946->g_237.s5", print_hash_value);
    transparent_crc(p_946->g_237.s6, "p_946->g_237.s6", print_hash_value);
    transparent_crc(p_946->g_237.s7, "p_946->g_237.s7", print_hash_value);
    transparent_crc(p_946->g_247, "p_946->g_247", print_hash_value);
    transparent_crc(p_946->g_253.s0, "p_946->g_253.s0", print_hash_value);
    transparent_crc(p_946->g_253.s1, "p_946->g_253.s1", print_hash_value);
    transparent_crc(p_946->g_253.s2, "p_946->g_253.s2", print_hash_value);
    transparent_crc(p_946->g_253.s3, "p_946->g_253.s3", print_hash_value);
    transparent_crc(p_946->g_253.s4, "p_946->g_253.s4", print_hash_value);
    transparent_crc(p_946->g_253.s5, "p_946->g_253.s5", print_hash_value);
    transparent_crc(p_946->g_253.s6, "p_946->g_253.s6", print_hash_value);
    transparent_crc(p_946->g_253.s7, "p_946->g_253.s7", print_hash_value);
    transparent_crc(p_946->g_268.f0, "p_946->g_268.f0", print_hash_value);
    transparent_crc(p_946->g_290.f0, "p_946->g_290.f0", print_hash_value);
    transparent_crc(p_946->g_290.f1, "p_946->g_290.f1", print_hash_value);
    transparent_crc(p_946->g_290.f2, "p_946->g_290.f2", print_hash_value);
    transparent_crc(p_946->g_290.f3, "p_946->g_290.f3", print_hash_value);
    transparent_crc(p_946->g_290.f4, "p_946->g_290.f4", print_hash_value);
    transparent_crc(p_946->g_290.f5, "p_946->g_290.f5", print_hash_value);
    transparent_crc(p_946->g_291, "p_946->g_291", print_hash_value);
    transparent_crc(p_946->g_300, "p_946->g_300", print_hash_value);
    transparent_crc(p_946->g_312.x, "p_946->g_312.x", print_hash_value);
    transparent_crc(p_946->g_312.y, "p_946->g_312.y", print_hash_value);
    transparent_crc(p_946->g_312.z, "p_946->g_312.z", print_hash_value);
    transparent_crc(p_946->g_312.w, "p_946->g_312.w", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_946->g_315[i], "p_946->g_315[i]", print_hash_value);

    }
    transparent_crc(p_946->g_319.s0, "p_946->g_319.s0", print_hash_value);
    transparent_crc(p_946->g_319.s1, "p_946->g_319.s1", print_hash_value);
    transparent_crc(p_946->g_319.s2, "p_946->g_319.s2", print_hash_value);
    transparent_crc(p_946->g_319.s3, "p_946->g_319.s3", print_hash_value);
    transparent_crc(p_946->g_319.s4, "p_946->g_319.s4", print_hash_value);
    transparent_crc(p_946->g_319.s5, "p_946->g_319.s5", print_hash_value);
    transparent_crc(p_946->g_319.s6, "p_946->g_319.s6", print_hash_value);
    transparent_crc(p_946->g_319.s7, "p_946->g_319.s7", print_hash_value);
    transparent_crc(p_946->g_319.s8, "p_946->g_319.s8", print_hash_value);
    transparent_crc(p_946->g_319.s9, "p_946->g_319.s9", print_hash_value);
    transparent_crc(p_946->g_319.sa, "p_946->g_319.sa", print_hash_value);
    transparent_crc(p_946->g_319.sb, "p_946->g_319.sb", print_hash_value);
    transparent_crc(p_946->g_319.sc, "p_946->g_319.sc", print_hash_value);
    transparent_crc(p_946->g_319.sd, "p_946->g_319.sd", print_hash_value);
    transparent_crc(p_946->g_319.se, "p_946->g_319.se", print_hash_value);
    transparent_crc(p_946->g_319.sf, "p_946->g_319.sf", print_hash_value);
    transparent_crc(p_946->g_378, "p_946->g_378", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_946->g_391[i][j][k].f0, "p_946->g_391[i][j][k].f0", print_hash_value);
                transparent_crc(p_946->g_391[i][j][k].f1, "p_946->g_391[i][j][k].f1", print_hash_value);
                transparent_crc(p_946->g_391[i][j][k].f2, "p_946->g_391[i][j][k].f2", print_hash_value);
                transparent_crc(p_946->g_391[i][j][k].f3, "p_946->g_391[i][j][k].f3", print_hash_value);
                transparent_crc(p_946->g_391[i][j][k].f4, "p_946->g_391[i][j][k].f4", print_hash_value);
                transparent_crc(p_946->g_391[i][j][k].f5, "p_946->g_391[i][j][k].f5", print_hash_value);

            }
        }
    }
    transparent_crc(p_946->g_396.x, "p_946->g_396.x", print_hash_value);
    transparent_crc(p_946->g_396.y, "p_946->g_396.y", print_hash_value);
    transparent_crc(p_946->g_398.x, "p_946->g_398.x", print_hash_value);
    transparent_crc(p_946->g_398.y, "p_946->g_398.y", print_hash_value);
    transparent_crc(p_946->g_398.z, "p_946->g_398.z", print_hash_value);
    transparent_crc(p_946->g_398.w, "p_946->g_398.w", print_hash_value);
    transparent_crc(p_946->g_403.f0, "p_946->g_403.f0", print_hash_value);
    transparent_crc(p_946->g_403.f1, "p_946->g_403.f1", print_hash_value);
    transparent_crc(p_946->g_403.f2, "p_946->g_403.f2", print_hash_value);
    transparent_crc(p_946->g_403.f3, "p_946->g_403.f3", print_hash_value);
    transparent_crc(p_946->g_403.f4, "p_946->g_403.f4", print_hash_value);
    transparent_crc(p_946->g_403.f5, "p_946->g_403.f5", print_hash_value);
    transparent_crc(p_946->g_406, "p_946->g_406", print_hash_value);
    transparent_crc(p_946->g_408, "p_946->g_408", print_hash_value);
    transparent_crc(p_946->g_418.f0, "p_946->g_418.f0", print_hash_value);
    transparent_crc(p_946->g_453.x, "p_946->g_453.x", print_hash_value);
    transparent_crc(p_946->g_453.y, "p_946->g_453.y", print_hash_value);
    transparent_crc(p_946->g_463.x, "p_946->g_463.x", print_hash_value);
    transparent_crc(p_946->g_463.y, "p_946->g_463.y", print_hash_value);
    transparent_crc(p_946->g_529.f0, "p_946->g_529.f0", print_hash_value);
    transparent_crc(p_946->g_529.f1, "p_946->g_529.f1", print_hash_value);
    transparent_crc(p_946->g_529.f2, "p_946->g_529.f2", print_hash_value);
    transparent_crc(p_946->g_529.f3, "p_946->g_529.f3", print_hash_value);
    transparent_crc(p_946->g_529.f4, "p_946->g_529.f4", print_hash_value);
    transparent_crc(p_946->g_529.f5, "p_946->g_529.f5", print_hash_value);
    transparent_crc(p_946->g_546.x, "p_946->g_546.x", print_hash_value);
    transparent_crc(p_946->g_546.y, "p_946->g_546.y", print_hash_value);
    transparent_crc(p_946->g_556.x, "p_946->g_556.x", print_hash_value);
    transparent_crc(p_946->g_556.y, "p_946->g_556.y", print_hash_value);
    transparent_crc(p_946->g_556.z, "p_946->g_556.z", print_hash_value);
    transparent_crc(p_946->g_556.w, "p_946->g_556.w", print_hash_value);
    transparent_crc(p_946->g_566.s0, "p_946->g_566.s0", print_hash_value);
    transparent_crc(p_946->g_566.s1, "p_946->g_566.s1", print_hash_value);
    transparent_crc(p_946->g_566.s2, "p_946->g_566.s2", print_hash_value);
    transparent_crc(p_946->g_566.s3, "p_946->g_566.s3", print_hash_value);
    transparent_crc(p_946->g_566.s4, "p_946->g_566.s4", print_hash_value);
    transparent_crc(p_946->g_566.s5, "p_946->g_566.s5", print_hash_value);
    transparent_crc(p_946->g_566.s6, "p_946->g_566.s6", print_hash_value);
    transparent_crc(p_946->g_566.s7, "p_946->g_566.s7", print_hash_value);
    transparent_crc(p_946->g_566.s8, "p_946->g_566.s8", print_hash_value);
    transparent_crc(p_946->g_566.s9, "p_946->g_566.s9", print_hash_value);
    transparent_crc(p_946->g_566.sa, "p_946->g_566.sa", print_hash_value);
    transparent_crc(p_946->g_566.sb, "p_946->g_566.sb", print_hash_value);
    transparent_crc(p_946->g_566.sc, "p_946->g_566.sc", print_hash_value);
    transparent_crc(p_946->g_566.sd, "p_946->g_566.sd", print_hash_value);
    transparent_crc(p_946->g_566.se, "p_946->g_566.se", print_hash_value);
    transparent_crc(p_946->g_566.sf, "p_946->g_566.sf", print_hash_value);
    transparent_crc(p_946->g_590, "p_946->g_590", print_hash_value);
    transparent_crc(p_946->g_600.s0, "p_946->g_600.s0", print_hash_value);
    transparent_crc(p_946->g_600.s1, "p_946->g_600.s1", print_hash_value);
    transparent_crc(p_946->g_600.s2, "p_946->g_600.s2", print_hash_value);
    transparent_crc(p_946->g_600.s3, "p_946->g_600.s3", print_hash_value);
    transparent_crc(p_946->g_600.s4, "p_946->g_600.s4", print_hash_value);
    transparent_crc(p_946->g_600.s5, "p_946->g_600.s5", print_hash_value);
    transparent_crc(p_946->g_600.s6, "p_946->g_600.s6", print_hash_value);
    transparent_crc(p_946->g_600.s7, "p_946->g_600.s7", print_hash_value);
    transparent_crc(p_946->g_600.s8, "p_946->g_600.s8", print_hash_value);
    transparent_crc(p_946->g_600.s9, "p_946->g_600.s9", print_hash_value);
    transparent_crc(p_946->g_600.sa, "p_946->g_600.sa", print_hash_value);
    transparent_crc(p_946->g_600.sb, "p_946->g_600.sb", print_hash_value);
    transparent_crc(p_946->g_600.sc, "p_946->g_600.sc", print_hash_value);
    transparent_crc(p_946->g_600.sd, "p_946->g_600.sd", print_hash_value);
    transparent_crc(p_946->g_600.se, "p_946->g_600.se", print_hash_value);
    transparent_crc(p_946->g_600.sf, "p_946->g_600.sf", print_hash_value);
    transparent_crc(p_946->g_641.s0, "p_946->g_641.s0", print_hash_value);
    transparent_crc(p_946->g_641.s1, "p_946->g_641.s1", print_hash_value);
    transparent_crc(p_946->g_641.s2, "p_946->g_641.s2", print_hash_value);
    transparent_crc(p_946->g_641.s3, "p_946->g_641.s3", print_hash_value);
    transparent_crc(p_946->g_641.s4, "p_946->g_641.s4", print_hash_value);
    transparent_crc(p_946->g_641.s5, "p_946->g_641.s5", print_hash_value);
    transparent_crc(p_946->g_641.s6, "p_946->g_641.s6", print_hash_value);
    transparent_crc(p_946->g_641.s7, "p_946->g_641.s7", print_hash_value);
    transparent_crc(p_946->g_681.s0, "p_946->g_681.s0", print_hash_value);
    transparent_crc(p_946->g_681.s1, "p_946->g_681.s1", print_hash_value);
    transparent_crc(p_946->g_681.s2, "p_946->g_681.s2", print_hash_value);
    transparent_crc(p_946->g_681.s3, "p_946->g_681.s3", print_hash_value);
    transparent_crc(p_946->g_681.s4, "p_946->g_681.s4", print_hash_value);
    transparent_crc(p_946->g_681.s5, "p_946->g_681.s5", print_hash_value);
    transparent_crc(p_946->g_681.s6, "p_946->g_681.s6", print_hash_value);
    transparent_crc(p_946->g_681.s7, "p_946->g_681.s7", print_hash_value);
    transparent_crc(p_946->g_708, "p_946->g_708", print_hash_value);
    transparent_crc(p_946->g_729.x, "p_946->g_729.x", print_hash_value);
    transparent_crc(p_946->g_729.y, "p_946->g_729.y", print_hash_value);
    transparent_crc(p_946->g_729.z, "p_946->g_729.z", print_hash_value);
    transparent_crc(p_946->g_729.w, "p_946->g_729.w", print_hash_value);
    transparent_crc(p_946->g_730.x, "p_946->g_730.x", print_hash_value);
    transparent_crc(p_946->g_730.y, "p_946->g_730.y", print_hash_value);
    transparent_crc(p_946->g_757.s0, "p_946->g_757.s0", print_hash_value);
    transparent_crc(p_946->g_757.s1, "p_946->g_757.s1", print_hash_value);
    transparent_crc(p_946->g_757.s2, "p_946->g_757.s2", print_hash_value);
    transparent_crc(p_946->g_757.s3, "p_946->g_757.s3", print_hash_value);
    transparent_crc(p_946->g_757.s4, "p_946->g_757.s4", print_hash_value);
    transparent_crc(p_946->g_757.s5, "p_946->g_757.s5", print_hash_value);
    transparent_crc(p_946->g_757.s6, "p_946->g_757.s6", print_hash_value);
    transparent_crc(p_946->g_757.s7, "p_946->g_757.s7", print_hash_value);
    transparent_crc(p_946->g_758.x, "p_946->g_758.x", print_hash_value);
    transparent_crc(p_946->g_758.y, "p_946->g_758.y", print_hash_value);
    transparent_crc(p_946->g_770.s0, "p_946->g_770.s0", print_hash_value);
    transparent_crc(p_946->g_770.s1, "p_946->g_770.s1", print_hash_value);
    transparent_crc(p_946->g_770.s2, "p_946->g_770.s2", print_hash_value);
    transparent_crc(p_946->g_770.s3, "p_946->g_770.s3", print_hash_value);
    transparent_crc(p_946->g_770.s4, "p_946->g_770.s4", print_hash_value);
    transparent_crc(p_946->g_770.s5, "p_946->g_770.s5", print_hash_value);
    transparent_crc(p_946->g_770.s6, "p_946->g_770.s6", print_hash_value);
    transparent_crc(p_946->g_770.s7, "p_946->g_770.s7", print_hash_value);
    transparent_crc(p_946->g_778.f0, "p_946->g_778.f0", print_hash_value);
    transparent_crc(p_946->g_794.x, "p_946->g_794.x", print_hash_value);
    transparent_crc(p_946->g_794.y, "p_946->g_794.y", print_hash_value);
    transparent_crc(p_946->g_798.f0, "p_946->g_798.f0", print_hash_value);
    transparent_crc(p_946->g_798.f1, "p_946->g_798.f1", print_hash_value);
    transparent_crc(p_946->g_798.f2, "p_946->g_798.f2", print_hash_value);
    transparent_crc(p_946->g_798.f3, "p_946->g_798.f3", print_hash_value);
    transparent_crc(p_946->g_798.f4, "p_946->g_798.f4", print_hash_value);
    transparent_crc(p_946->g_798.f5, "p_946->g_798.f5", print_hash_value);
    transparent_crc(p_946->g_799.x, "p_946->g_799.x", print_hash_value);
    transparent_crc(p_946->g_799.y, "p_946->g_799.y", print_hash_value);
    transparent_crc(p_946->g_799.z, "p_946->g_799.z", print_hash_value);
    transparent_crc(p_946->g_799.w, "p_946->g_799.w", print_hash_value);
    transparent_crc(p_946->g_800.s0, "p_946->g_800.s0", print_hash_value);
    transparent_crc(p_946->g_800.s1, "p_946->g_800.s1", print_hash_value);
    transparent_crc(p_946->g_800.s2, "p_946->g_800.s2", print_hash_value);
    transparent_crc(p_946->g_800.s3, "p_946->g_800.s3", print_hash_value);
    transparent_crc(p_946->g_800.s4, "p_946->g_800.s4", print_hash_value);
    transparent_crc(p_946->g_800.s5, "p_946->g_800.s5", print_hash_value);
    transparent_crc(p_946->g_800.s6, "p_946->g_800.s6", print_hash_value);
    transparent_crc(p_946->g_800.s7, "p_946->g_800.s7", print_hash_value);
    transparent_crc(p_946->g_800.s8, "p_946->g_800.s8", print_hash_value);
    transparent_crc(p_946->g_800.s9, "p_946->g_800.s9", print_hash_value);
    transparent_crc(p_946->g_800.sa, "p_946->g_800.sa", print_hash_value);
    transparent_crc(p_946->g_800.sb, "p_946->g_800.sb", print_hash_value);
    transparent_crc(p_946->g_800.sc, "p_946->g_800.sc", print_hash_value);
    transparent_crc(p_946->g_800.sd, "p_946->g_800.sd", print_hash_value);
    transparent_crc(p_946->g_800.se, "p_946->g_800.se", print_hash_value);
    transparent_crc(p_946->g_800.sf, "p_946->g_800.sf", print_hash_value);
    transparent_crc(p_946->g_804.s0, "p_946->g_804.s0", print_hash_value);
    transparent_crc(p_946->g_804.s1, "p_946->g_804.s1", print_hash_value);
    transparent_crc(p_946->g_804.s2, "p_946->g_804.s2", print_hash_value);
    transparent_crc(p_946->g_804.s3, "p_946->g_804.s3", print_hash_value);
    transparent_crc(p_946->g_804.s4, "p_946->g_804.s4", print_hash_value);
    transparent_crc(p_946->g_804.s5, "p_946->g_804.s5", print_hash_value);
    transparent_crc(p_946->g_804.s6, "p_946->g_804.s6", print_hash_value);
    transparent_crc(p_946->g_804.s7, "p_946->g_804.s7", print_hash_value);
    transparent_crc(p_946->g_804.s8, "p_946->g_804.s8", print_hash_value);
    transparent_crc(p_946->g_804.s9, "p_946->g_804.s9", print_hash_value);
    transparent_crc(p_946->g_804.sa, "p_946->g_804.sa", print_hash_value);
    transparent_crc(p_946->g_804.sb, "p_946->g_804.sb", print_hash_value);
    transparent_crc(p_946->g_804.sc, "p_946->g_804.sc", print_hash_value);
    transparent_crc(p_946->g_804.sd, "p_946->g_804.sd", print_hash_value);
    transparent_crc(p_946->g_804.se, "p_946->g_804.se", print_hash_value);
    transparent_crc(p_946->g_804.sf, "p_946->g_804.sf", print_hash_value);
    transparent_crc(p_946->g_807.s0, "p_946->g_807.s0", print_hash_value);
    transparent_crc(p_946->g_807.s1, "p_946->g_807.s1", print_hash_value);
    transparent_crc(p_946->g_807.s2, "p_946->g_807.s2", print_hash_value);
    transparent_crc(p_946->g_807.s3, "p_946->g_807.s3", print_hash_value);
    transparent_crc(p_946->g_807.s4, "p_946->g_807.s4", print_hash_value);
    transparent_crc(p_946->g_807.s5, "p_946->g_807.s5", print_hash_value);
    transparent_crc(p_946->g_807.s6, "p_946->g_807.s6", print_hash_value);
    transparent_crc(p_946->g_807.s7, "p_946->g_807.s7", print_hash_value);
    transparent_crc(p_946->g_808.s0, "p_946->g_808.s0", print_hash_value);
    transparent_crc(p_946->g_808.s1, "p_946->g_808.s1", print_hash_value);
    transparent_crc(p_946->g_808.s2, "p_946->g_808.s2", print_hash_value);
    transparent_crc(p_946->g_808.s3, "p_946->g_808.s3", print_hash_value);
    transparent_crc(p_946->g_808.s4, "p_946->g_808.s4", print_hash_value);
    transparent_crc(p_946->g_808.s5, "p_946->g_808.s5", print_hash_value);
    transparent_crc(p_946->g_808.s6, "p_946->g_808.s6", print_hash_value);
    transparent_crc(p_946->g_808.s7, "p_946->g_808.s7", print_hash_value);
    transparent_crc(p_946->g_810.s0, "p_946->g_810.s0", print_hash_value);
    transparent_crc(p_946->g_810.s1, "p_946->g_810.s1", print_hash_value);
    transparent_crc(p_946->g_810.s2, "p_946->g_810.s2", print_hash_value);
    transparent_crc(p_946->g_810.s3, "p_946->g_810.s3", print_hash_value);
    transparent_crc(p_946->g_810.s4, "p_946->g_810.s4", print_hash_value);
    transparent_crc(p_946->g_810.s5, "p_946->g_810.s5", print_hash_value);
    transparent_crc(p_946->g_810.s6, "p_946->g_810.s6", print_hash_value);
    transparent_crc(p_946->g_810.s7, "p_946->g_810.s7", print_hash_value);
    transparent_crc(p_946->g_810.s8, "p_946->g_810.s8", print_hash_value);
    transparent_crc(p_946->g_810.s9, "p_946->g_810.s9", print_hash_value);
    transparent_crc(p_946->g_810.sa, "p_946->g_810.sa", print_hash_value);
    transparent_crc(p_946->g_810.sb, "p_946->g_810.sb", print_hash_value);
    transparent_crc(p_946->g_810.sc, "p_946->g_810.sc", print_hash_value);
    transparent_crc(p_946->g_810.sd, "p_946->g_810.sd", print_hash_value);
    transparent_crc(p_946->g_810.se, "p_946->g_810.se", print_hash_value);
    transparent_crc(p_946->g_810.sf, "p_946->g_810.sf", print_hash_value);
    transparent_crc(p_946->g_812.x, "p_946->g_812.x", print_hash_value);
    transparent_crc(p_946->g_812.y, "p_946->g_812.y", print_hash_value);
    transparent_crc(p_946->g_812.z, "p_946->g_812.z", print_hash_value);
    transparent_crc(p_946->g_812.w, "p_946->g_812.w", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_946->g_814[i].f0, "p_946->g_814[i].f0", print_hash_value);
        transparent_crc(p_946->g_814[i].f1, "p_946->g_814[i].f1", print_hash_value);
        transparent_crc(p_946->g_814[i].f2, "p_946->g_814[i].f2", print_hash_value);
        transparent_crc(p_946->g_814[i].f3, "p_946->g_814[i].f3", print_hash_value);
        transparent_crc(p_946->g_814[i].f4, "p_946->g_814[i].f4", print_hash_value);
        transparent_crc(p_946->g_814[i].f5, "p_946->g_814[i].f5", print_hash_value);

    }
    transparent_crc(p_946->g_833.x, "p_946->g_833.x", print_hash_value);
    transparent_crc(p_946->g_833.y, "p_946->g_833.y", print_hash_value);
    transparent_crc(p_946->g_833.z, "p_946->g_833.z", print_hash_value);
    transparent_crc(p_946->g_833.w, "p_946->g_833.w", print_hash_value);
    transparent_crc(p_946->g_845, "p_946->g_845", print_hash_value);
    transparent_crc(p_946->g_854.s0, "p_946->g_854.s0", print_hash_value);
    transparent_crc(p_946->g_854.s1, "p_946->g_854.s1", print_hash_value);
    transparent_crc(p_946->g_854.s2, "p_946->g_854.s2", print_hash_value);
    transparent_crc(p_946->g_854.s3, "p_946->g_854.s3", print_hash_value);
    transparent_crc(p_946->g_854.s4, "p_946->g_854.s4", print_hash_value);
    transparent_crc(p_946->g_854.s5, "p_946->g_854.s5", print_hash_value);
    transparent_crc(p_946->g_854.s6, "p_946->g_854.s6", print_hash_value);
    transparent_crc(p_946->g_854.s7, "p_946->g_854.s7", print_hash_value);
    transparent_crc(p_946->g_854.s8, "p_946->g_854.s8", print_hash_value);
    transparent_crc(p_946->g_854.s9, "p_946->g_854.s9", print_hash_value);
    transparent_crc(p_946->g_854.sa, "p_946->g_854.sa", print_hash_value);
    transparent_crc(p_946->g_854.sb, "p_946->g_854.sb", print_hash_value);
    transparent_crc(p_946->g_854.sc, "p_946->g_854.sc", print_hash_value);
    transparent_crc(p_946->g_854.sd, "p_946->g_854.sd", print_hash_value);
    transparent_crc(p_946->g_854.se, "p_946->g_854.se", print_hash_value);
    transparent_crc(p_946->g_854.sf, "p_946->g_854.sf", print_hash_value);
    transparent_crc(p_946->g_870.f0, "p_946->g_870.f0", print_hash_value);
    transparent_crc(p_946->g_870.f1, "p_946->g_870.f1", print_hash_value);
    transparent_crc(p_946->g_870.f2, "p_946->g_870.f2", print_hash_value);
    transparent_crc(p_946->g_870.f3, "p_946->g_870.f3", print_hash_value);
    transparent_crc(p_946->g_870.f4, "p_946->g_870.f4", print_hash_value);
    transparent_crc(p_946->g_870.f5, "p_946->g_870.f5", print_hash_value);
    transparent_crc(p_946->g_907.s0, "p_946->g_907.s0", print_hash_value);
    transparent_crc(p_946->g_907.s1, "p_946->g_907.s1", print_hash_value);
    transparent_crc(p_946->g_907.s2, "p_946->g_907.s2", print_hash_value);
    transparent_crc(p_946->g_907.s3, "p_946->g_907.s3", print_hash_value);
    transparent_crc(p_946->g_907.s4, "p_946->g_907.s4", print_hash_value);
    transparent_crc(p_946->g_907.s5, "p_946->g_907.s5", print_hash_value);
    transparent_crc(p_946->g_907.s6, "p_946->g_907.s6", print_hash_value);
    transparent_crc(p_946->g_907.s7, "p_946->g_907.s7", print_hash_value);
    transparent_crc(p_946->g_915.s0, "p_946->g_915.s0", print_hash_value);
    transparent_crc(p_946->g_915.s1, "p_946->g_915.s1", print_hash_value);
    transparent_crc(p_946->g_915.s2, "p_946->g_915.s2", print_hash_value);
    transparent_crc(p_946->g_915.s3, "p_946->g_915.s3", print_hash_value);
    transparent_crc(p_946->g_915.s4, "p_946->g_915.s4", print_hash_value);
    transparent_crc(p_946->g_915.s5, "p_946->g_915.s5", print_hash_value);
    transparent_crc(p_946->g_915.s6, "p_946->g_915.s6", print_hash_value);
    transparent_crc(p_946->g_915.s7, "p_946->g_915.s7", print_hash_value);
    transparent_crc(p_946->g_918.f0, "p_946->g_918.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_946->g_925[i], "p_946->g_925[i]", print_hash_value);

    }
    transparent_crc(p_946->g_930.f0, "p_946->g_930.f0", print_hash_value);
    transparent_crc(p_946->g_944.f0, "p_946->g_944.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_946->g_945[i][j].f0, "p_946->g_945[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_946->v_collective, "p_946->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 15; i++)
            transparent_crc(p_946->l_special_values[i], "p_946->l_special_values[i]", print_hash_value);
    transparent_crc(p_946->l_comm_values[get_linear_local_id()], "p_946->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_946->g_comm_values[get_linear_group_id() * 164 + get_linear_local_id()], "p_946->g_comm_values[get_linear_group_id() * 164 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
