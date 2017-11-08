// --atomics 43 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 84,46,2 -l 2,46,2
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

__constant uint32_t permutations[10][184] = {
{42,59,11,16,126,25,161,56,57,69,157,32,146,145,36,175,46,141,172,51,152,102,84,50,139,75,85,160,33,48,3,134,41,144,76,35,171,87,55,100,110,138,137,147,26,112,153,81,178,44,158,150,2,9,78,38,123,64,183,130,165,29,164,18,143,173,66,71,58,108,19,140,127,7,45,109,73,52,149,34,86,124,99,24,156,125,22,67,132,83,88,4,117,90,43,131,116,103,174,61,177,60,113,169,151,155,163,5,20,115,13,133,63,179,121,162,129,98,65,159,94,53,119,136,96,37,107,105,166,167,49,10,54,82,0,106,91,23,180,15,27,47,1,31,6,93,74,181,80,17,118,122,111,89,12,97,170,39,142,92,8,72,128,114,14,77,70,104,28,148,135,79,21,176,154,62,168,182,95,68,30,40,120,101}, // permutation 0
{149,69,76,73,71,47,136,18,163,169,158,182,123,119,14,24,159,89,102,0,93,25,53,41,23,161,110,55,26,106,3,146,37,77,2,111,128,34,91,27,16,45,61,1,180,155,181,103,162,38,145,94,42,144,112,172,127,74,107,115,173,54,75,64,86,39,97,139,113,50,101,140,49,65,78,10,125,118,48,175,79,46,135,121,120,32,68,176,92,151,147,81,62,179,183,58,99,13,133,129,153,105,29,152,138,51,165,7,80,36,160,19,21,12,33,17,108,28,142,100,174,6,56,57,82,66,67,156,4,170,35,22,131,126,166,96,60,84,87,83,8,104,116,30,178,171,148,132,11,157,114,150,20,137,40,122,88,98,31,167,59,9,164,43,95,141,52,109,130,85,168,15,177,5,70,117,44,90,63,154,124,143,134,72}, // permutation 1
{47,90,125,91,25,0,79,51,74,17,92,154,170,76,103,86,27,40,162,118,129,169,112,82,87,8,4,155,97,49,83,174,149,147,120,144,21,135,114,139,39,173,146,45,178,128,50,11,42,75,94,2,181,119,73,13,115,161,29,130,3,122,52,9,31,58,69,43,145,44,152,67,32,168,102,111,16,171,53,176,148,34,179,28,163,156,46,117,57,133,96,55,160,109,132,78,101,56,153,166,116,182,105,1,18,6,24,167,113,137,12,48,35,41,123,65,85,22,20,172,177,70,72,77,68,183,14,93,88,23,134,66,62,84,124,63,38,5,150,33,7,158,80,138,110,127,95,59,60,26,151,64,157,165,107,100,71,141,54,98,89,121,61,142,175,164,81,126,180,136,131,159,19,104,106,10,15,37,140,99,108,30,143,36}, // permutation 2
{127,67,71,126,155,120,80,64,6,96,45,161,30,38,105,164,50,137,61,72,93,24,81,82,17,135,175,9,2,117,14,149,112,130,62,178,41,54,11,78,1,4,125,160,53,18,37,13,88,69,147,42,171,165,23,84,177,153,40,118,110,57,7,174,134,20,0,115,97,136,103,169,183,73,181,28,151,101,58,34,68,3,146,100,116,76,92,163,44,94,150,91,167,47,83,10,99,139,8,65,182,85,90,77,79,170,22,162,119,159,87,55,131,121,27,15,179,66,113,46,138,106,12,166,156,140,48,123,59,157,128,180,173,141,102,31,143,5,154,60,35,49,104,95,29,152,63,51,32,39,52,56,168,148,109,142,19,144,129,74,108,33,124,43,107,133,86,114,98,70,111,176,145,89,132,36,25,122,158,26,75,21,16,172}, // permutation 3
{121,73,32,144,154,147,114,140,41,67,4,157,21,124,50,117,156,60,109,141,155,126,53,72,181,119,104,97,105,45,81,6,36,59,96,65,150,92,142,15,77,103,178,5,133,148,137,132,84,0,175,20,71,173,83,101,182,49,179,135,24,58,115,129,34,61,145,11,82,28,113,163,151,76,139,66,172,170,54,180,134,23,30,29,78,64,112,69,74,91,146,93,42,9,100,177,35,152,107,106,7,12,33,44,161,37,143,10,86,80,8,169,171,136,183,120,149,85,162,68,79,17,57,138,153,62,95,108,98,25,111,56,40,70,165,167,118,116,158,16,90,31,75,48,127,27,94,176,160,102,164,46,55,1,166,26,122,174,123,125,130,159,110,22,2,63,19,47,87,168,88,128,3,51,18,43,14,89,13,38,131,99,39,52}, // permutation 4
{147,78,153,50,87,32,96,157,79,114,33,100,82,143,168,46,99,182,57,160,159,111,70,108,180,181,132,118,151,58,22,1,102,162,34,121,89,115,88,19,48,31,10,116,171,81,21,54,120,94,129,37,29,144,5,177,44,77,152,126,101,59,28,16,12,174,148,86,63,176,122,8,134,139,25,38,161,128,85,18,3,61,60,51,43,84,83,17,179,110,105,64,104,124,172,155,145,76,142,40,62,30,146,175,135,149,35,74,73,36,113,66,24,170,137,42,127,52,67,123,56,133,112,167,27,130,4,68,71,9,0,178,14,13,26,183,138,119,90,20,49,158,141,109,131,163,7,23,156,98,80,45,165,6,169,2,136,65,150,106,39,72,166,95,107,53,117,140,154,92,97,75,93,55,41,15,11,125,69,173,91,164,47,103}, // permutation 5
{33,154,96,39,121,50,153,109,169,20,86,0,82,29,136,156,181,117,160,40,66,14,58,4,10,174,81,73,34,59,65,135,149,24,168,42,116,161,9,124,52,87,90,23,172,125,41,80,92,129,97,49,139,60,110,71,131,85,19,183,88,175,163,119,112,127,113,5,146,108,118,46,48,157,141,103,47,126,11,138,158,51,114,130,102,176,150,123,99,98,15,104,7,89,166,145,27,79,72,18,101,95,56,133,142,6,67,2,13,44,3,105,28,165,74,35,37,179,64,61,38,32,68,22,122,76,115,152,55,57,171,132,100,17,144,137,93,25,178,84,151,69,155,75,91,53,31,148,120,106,167,177,1,43,78,143,26,164,8,70,180,162,63,36,77,62,140,83,128,173,16,182,54,21,94,30,147,134,159,107,12,111,45,170}, // permutation 6
{12,93,63,102,162,101,88,166,40,16,158,164,4,141,124,104,7,160,89,20,100,146,171,183,91,110,182,142,24,47,144,42,170,121,32,95,51,136,30,38,176,113,119,10,44,123,5,52,172,131,154,61,31,159,84,36,14,74,114,178,80,86,174,106,117,34,103,98,132,39,76,70,107,15,9,60,169,134,33,27,165,45,108,22,135,69,65,96,111,50,163,29,41,87,54,53,118,72,67,167,28,109,149,97,125,82,145,181,133,168,13,71,23,156,122,120,147,157,0,148,112,8,155,57,151,152,17,130,173,83,55,1,137,180,75,49,85,139,153,81,94,3,177,161,64,150,92,126,105,66,58,129,175,21,79,115,128,59,116,68,127,62,179,43,140,11,25,90,46,2,37,19,56,73,78,143,99,6,35,18,48,77,138,26}, // permutation 7
{65,116,13,136,173,3,150,0,146,98,164,46,70,181,103,141,159,8,144,14,32,157,162,92,45,127,171,110,115,100,15,79,39,2,85,170,91,121,38,59,80,58,71,7,31,86,84,83,147,125,139,55,105,126,142,53,135,168,10,63,36,21,11,90,69,156,179,102,52,94,151,29,41,40,111,61,174,88,50,152,82,30,132,17,60,73,109,167,72,143,158,120,5,4,16,183,108,49,160,124,43,76,78,95,23,101,51,87,104,133,77,161,123,18,28,75,6,26,154,42,138,128,20,54,25,155,56,27,118,67,113,169,48,163,33,140,131,177,165,74,1,134,166,153,9,81,57,129,19,112,145,176,89,182,93,180,97,99,37,137,172,47,35,62,44,64,66,106,22,175,34,130,148,117,119,96,24,122,68,107,149,114,178,12}, // permutation 8
{166,45,168,141,47,41,117,181,153,114,21,16,100,29,150,61,24,176,152,106,158,90,161,28,53,125,10,170,13,59,77,1,37,136,96,147,107,85,144,65,110,128,74,149,69,56,2,30,145,79,169,50,101,33,109,82,14,151,126,183,31,143,138,105,99,63,154,25,89,3,87,134,58,49,55,23,27,78,156,18,155,7,6,51,36,54,178,83,40,34,81,112,4,115,44,80,133,162,140,171,139,159,64,165,72,86,93,68,177,167,42,179,60,123,163,98,120,142,119,122,73,111,103,9,17,12,160,116,130,70,62,135,148,91,182,88,20,22,97,175,113,131,94,67,8,15,71,38,174,32,172,66,39,124,157,95,164,46,146,57,48,121,19,180,0,43,35,92,108,104,132,11,102,173,76,26,52,137,127,75,129,5,118,84} // permutation 9
};

// Seed: 3933358354

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   volatile int64_t  f1;
   int64_t  f2;
   int32_t  f3;
   uint32_t  f4;
   int16_t  f5;
   int32_t  f6;
   volatile int32_t  f7;
   uint64_t  f8;
   uint16_t  f9;
};

struct S1 {
   int64_t  f0;
   int64_t  f1;
};

struct S2 {
   int8_t  f0;
};

struct S3 {
    struct S1 g_28[5][10][5];
    uint8_t g_34;
    int8_t g_35;
    uint64_t g_62;
    uint64_t g_64;
    volatile uint64_t g_68[8][9];
    volatile uint64_t * volatile g_67;
    int32_t g_74;
    uint64_t g_85;
    uint64_t *g_84;
    int16_t g_94;
    int32_t g_97;
    int16_t g_103;
    uint16_t g_115;
    VECTOR(uint16_t, 8) g_131;
    uint64_t **g_144;
    VECTOR(int16_t, 4) g_157;
    VECTOR(int16_t, 4) g_158;
    struct S2 g_164;
    struct S2 *g_163;
    int32_t g_175;
    int32_t *g_174;
    struct S1 g_184;
    uint16_t g_191;
    struct S1 *g_195[1][10];
    struct S1 *g_196;
    VECTOR(int64_t, 16) g_197;
    VECTOR(int64_t, 16) g_198;
    volatile struct S0 g_201;
    uint8_t g_221;
    volatile VECTOR(int32_t, 4) g_242;
    struct S0 *g_244;
    int32_t g_287;
    VECTOR(uint8_t, 8) g_292;
    VECTOR(uint8_t, 2) g_295;
    VECTOR(uint8_t, 2) g_297;
    VECTOR(uint16_t, 8) g_299;
    VECTOR(uint16_t, 4) g_300;
    VECTOR(uint16_t, 2) g_302;
    struct S0 g_320;
    int16_t g_405;
    volatile struct S0 g_421;
    int32_t *g_423;
    int32_t ** volatile g_422;
    int32_t ** volatile g_427[8][6][3];
    int32_t ** volatile g_428;
    struct S0 g_439[5];
    int32_t ** volatile g_472;
    struct S0 ** volatile g_474;
    struct S0 ** volatile g_475;
    volatile uint16_t * volatile g_510;
    volatile uint16_t * volatile *g_509[7][4][4];
    volatile struct S0 g_516;
    VECTOR(int8_t, 4) g_525;
    volatile VECTOR(int8_t, 16) g_528;
    volatile VECTOR(uint8_t, 16) g_556;
    volatile VECTOR(uint8_t, 8) g_561;
    uint16_t *g_728;
    uint16_t g_729;
    uint32_t g_768;
    struct S0 g_776;
    struct S0 g_777;
    int32_t g_796;
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
int8_t  func_1(struct S3 * p_802);
int32_t  func_2(uint32_t  p_3, int32_t  p_4, uint32_t  p_5, struct S3 * p_802);
uint32_t  func_8(uint64_t  p_9, int16_t  p_10, int16_t  p_11, uint64_t  p_12, uint32_t  p_13, struct S3 * p_802);
uint16_t  func_22(uint32_t  p_23, int16_t  p_24, int64_t  p_25, int32_t  p_26, struct S1  p_27, struct S3 * p_802);
int32_t * func_31(int32_t  p_32, struct S3 * p_802);
int32_t  func_39(int16_t  p_40, int32_t * p_41, uint8_t  p_42, struct S2  p_43, uint32_t  p_44, struct S3 * p_802);
int32_t * func_45(struct S2  p_46, int32_t  p_47, uint8_t * p_48, int32_t  p_49, int32_t * p_50, struct S3 * p_802);
struct S2  func_51(int32_t  p_52, uint8_t * p_53, struct S3 * p_802);
int8_t  func_54(uint32_t  p_55, struct S3 * p_802);
uint16_t  func_77(int32_t * p_78, struct S3 * p_802);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_802->l_comm_values p_802->g_comm_values p_802->g_28 p_802->g_34 p_802->g_35 p_802->g_157 p_802->g_405 p_802->g_175 p_802->g_297 p_802->g_74 p_802->g_197 p_802->g_421 p_802->g_422 p_802->g_320.f5 p_802->g_428 p_802->g_62 p_802->g_439 p_802->g_84 p_802->g_85 p_802->g_472 p_802->g_475 p_802->g_320.f6 p_802->g_423 p_802->g_320.f3 p_802->g_509 p_802->g_158 p_802->g_516 p_802->g_196 p_802->g_525 p_802->g_528 p_802->g_556 p_802->g_561 p_802->g_287 p_802->g_97 p_802->g_174 p_802->g_302 p_802->g_729 p_802->g_300 p_802->g_295 p_802->g_201.f9 p_802->g_320.f2 p_802->g_768 p_802->g_184.f0 p_802->g_776 p_802->g_777.f4 p_802->g_796 p_802->g_198
 * writes: p_802->g_34 p_802->g_35 p_802->g_405 p_802->g_175 p_802->g_64 p_802->g_174 p_802->g_74 p_802->g_244 p_802->g_320.f3 p_802->g_195 p_802->g_439.f6 p_802->g_439.f5 p_802->g_85 p_802->g_320.f6 p_802->g_287 p_802->g_97 p_802->g_728 p_802->g_320.f5 p_802->g_525 p_802->g_184.f0 p_802->g_777 p_802->g_796
 */
int8_t  func_1(struct S3 * p_802)
{ /* block id: 4 */
    uint16_t l_6 = 7UL;
    int32_t l_480 = (-2L);
    int32_t *l_794[9][6] = {{&p_802->g_320.f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_320.f6,&p_802->g_320.f6,&p_802->g_439[0].f6},{&p_802->g_320.f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_320.f6,&p_802->g_320.f6,&p_802->g_439[0].f6},{&p_802->g_320.f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_320.f6,&p_802->g_320.f6,&p_802->g_439[0].f6},{&p_802->g_320.f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_320.f6,&p_802->g_320.f6,&p_802->g_439[0].f6},{&p_802->g_320.f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_320.f6,&p_802->g_320.f6,&p_802->g_439[0].f6},{&p_802->g_320.f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_320.f6,&p_802->g_320.f6,&p_802->g_439[0].f6},{&p_802->g_320.f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_320.f6,&p_802->g_320.f6,&p_802->g_439[0].f6},{&p_802->g_320.f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_320.f6,&p_802->g_320.f6,&p_802->g_439[0].f6},{&p_802->g_320.f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_320.f6,&p_802->g_320.f6,&p_802->g_439[0].f6}};
    int64_t l_795 = 0x566CC1FA153E1B9CL;
    uint8_t l_799[1][3][8] = {{{0x72L,0x38L,0x72L,0x72L,0x38L,0x72L,0x72L,0x38L},{0x72L,0x38L,0x72L,0x72L,0x38L,0x72L,0x72L,0x38L},{0x72L,0x38L,0x72L,0x72L,0x38L,0x72L,0x72L,0x38L}}};
    int i, j, k;
    p_802->g_796 &= (l_795 = func_2(l_6, ((*p_802->g_423) &= ((~l_6) , (((l_480 ^= ((safe_unary_minus_func_uint16_t_u(0UL)) || func_8(((FAKE_DIVERGE(p_802->global_0_offset, get_global_id(0), 10) & (safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), (safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s(0x5EL, 0x5EL)), func_22(l_6, (p_802->l_comm_values[(safe_mod_func_uint32_t_u_u(p_802->tid, 184))] & ((-9L) || 7L)), p_802->g_comm_values[p_802->tid], l_6, p_802->g_28[4][9][1], p_802))), 4294967295UL))))) != l_6), l_6, p_802->g_320.f6, (*p_802->g_84), l_6, p_802))) && l_6) | l_6))), p_802->g_439[0].f9, p_802));
    for (p_802->g_85 = (-20); (p_802->g_85 == 18); p_802->g_85 = safe_add_func_uint32_t_u_u(p_802->g_85, 6))
    { /* block id: 375 */
        return p_802->g_776.f0;
    }
    l_799[0][0][3]--;
    return p_802->g_198.s8;
}


/* ------------------------------------------ */
/* 
 * reads : p_802->g_320.f6 p_802->g_439.f6 p_802->g_509 p_802->g_439.f3 p_802->g_158 p_802->g_439.f1 p_802->g_428 p_802->g_516 p_802->g_439.f9 p_802->g_196 p_802->g_28 p_802->g_421.f6 p_802->g_525 p_802->g_528 p_802->g_197 p_802->g_comm_values p_802->g_84 p_802->g_85 p_802->g_439.f5 p_802->g_556 p_802->g_561 p_802->l_comm_values p_802->g_175 p_802->g_287 p_802->g_97 p_802->g_174 p_802->g_421.f3 p_802->g_302 p_802->g_729 p_802->g_300 p_802->g_320.f3 p_802->g_157 p_802->g_295 p_802->g_201.f9 p_802->g_34 p_802->g_320.f2 p_802->g_768 p_802->g_184.f0 p_802->g_776 p_802->g_777.f4
 * writes: p_802->g_174 p_802->g_195 p_802->g_439.f6 p_802->g_439.f5 p_802->g_85 p_802->g_320.f6 p_802->g_287 p_802->g_97 p_802->g_175 p_802->g_728 p_802->g_320.f5 p_802->g_525 p_802->g_184.f0 p_802->g_777
 */
int32_t  func_2(uint32_t  p_3, int32_t  p_4, uint32_t  p_5, struct S3 * p_802)
{ /* block id: 242 */
    int32_t *l_481 = &p_802->g_175;
    int32_t *l_482 = &p_802->g_320.f6;
    int32_t *l_483 = &p_802->g_320.f6;
    int32_t *l_484 = &p_802->g_175;
    int32_t *l_485 = &p_802->g_320.f6;
    int32_t *l_486 = &p_802->g_439[0].f6;
    int32_t *l_487 = (void*)0;
    int32_t *l_488[4][1][5] = {{{&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6}},{{&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6}},{{&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6}},{{&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6,&p_802->g_439[0].f6}}};
    int16_t l_489[7][2];
    int16_t l_490 = (-2L);
    VECTOR(uint8_t, 2) l_491 = (VECTOR(uint8_t, 2))(246UL, 255UL);
    struct S0 **l_507[1];
    struct S0 ***l_506 = &l_507[0];
    struct S0 **l_508 = &p_802->g_244;
    uint16_t *l_512 = (void*)0;
    uint16_t **l_511 = &l_512;
    uint16_t l_519[5];
    VECTOR(int8_t, 2) l_526 = (VECTOR(int8_t, 2))((-1L), 0x57L);
    VECTOR(int8_t, 2) l_527 = (VECTOR(int8_t, 2))(0x6AL, (-1L));
    VECTOR(int8_t, 2) l_530 = (VECTOR(int8_t, 2))((-4L), 0L);
    struct S1 *l_536 = &p_802->g_28[4][9][1];
    struct S0 ****l_544 = &l_506;
    VECTOR(uint8_t, 4) l_562 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xC6L), 0xC6L);
    VECTOR(int16_t, 8) l_707 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x7CBDL), 0x7CBDL), 0x7CBDL, 1L, 0x7CBDL);
    VECTOR(int16_t, 16) l_760 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x4C06L), 0x4C06L), 0x4C06L, (-1L), 0x4C06L, (VECTOR(int16_t, 2))((-1L), 0x4C06L), (VECTOR(int16_t, 2))((-1L), 0x4C06L), (-1L), 0x4C06L, (-1L), 0x4C06L);
    int8_t l_790 = (-1L);
    int i, j, k;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
            l_489[i][j] = 0L;
    }
    for (i = 0; i < 1; i++)
        l_507[i] = (void*)0;
    for (i = 0; i < 5; i++)
        l_519[i] = 1UL;
    l_491.x--;
    if (((*l_483) <= (safe_lshift_func_int8_t_s_u(((6UL || (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((*l_486) <= (safe_div_func_int8_t_s_s((((((*l_506) = (void*)0) == l_508) ^ 0x61B057E000D84156L) , (p_802->g_509[1][1][3] != (l_511 = (void*)0))), 1UL))), p_3)) == p_5), p_802->g_439[0].f3)), p_5)), p_4))) == p_802->g_158.y), p_802->g_439[0].f1))))
    { /* block id: 246 */
        int32_t *l_513 = &p_802->g_320.f6;
        struct S0 ****l_524 = &l_506;
        VECTOR(int8_t, 8) l_529 = (VECTOR(int8_t, 8))(0x6EL, (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, 1L), 1L), 1L, 0x6EL, 1L);
        struct S1 **l_535 = &p_802->g_195[0][9];
        struct S0 *****l_541 = &l_524;
        struct S0 ****l_542 = &l_506;
        struct S0 ****l_543 = (void*)0;
        int16_t *l_545 = (void*)0;
        int16_t *l_546 = &p_802->g_439[0].f5;
        int32_t **l_554 = &l_481;
        VECTOR(uint64_t, 16) l_555 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL);
        VECTOR(uint8_t, 2) l_557 = (VECTOR(uint8_t, 2))(0x2DL, 0x3AL);
        VECTOR(uint8_t, 2) l_558 = (VECTOR(uint8_t, 2))(255UL, 3UL);
        VECTOR(uint8_t, 16) l_559 = (VECTOR(uint8_t, 16))(0x4AL, (VECTOR(uint8_t, 4))(0x4AL, (VECTOR(uint8_t, 2))(0x4AL, 1UL), 1UL), 1UL, 0x4AL, 1UL, (VECTOR(uint8_t, 2))(0x4AL, 1UL), (VECTOR(uint8_t, 2))(0x4AL, 1UL), 0x4AL, 1UL, 0x4AL, 1UL);
        VECTOR(uint8_t, 16) l_560 = (VECTOR(uint8_t, 16))(0x6FL, (VECTOR(uint8_t, 4))(0x6FL, (VECTOR(uint8_t, 2))(0x6FL, 1UL), 1UL), 1UL, 0x6FL, 1UL, (VECTOR(uint8_t, 2))(0x6FL, 1UL), (VECTOR(uint8_t, 2))(0x6FL, 1UL), 0x6FL, 1UL, 0x6FL, 1UL);
        int i;
        (*p_802->g_428) = l_513;
        (*l_486) = (safe_div_func_int64_t_s_s((p_802->g_516 , (((((((safe_add_func_int8_t_s_s(p_802->g_439[0].f9, (FAKE_DIVERGE(p_802->local_2_offset, get_local_id(2), 10) && ((l_519[3] , (*p_802->g_196)) , (safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((((*l_524) = &l_507[0]) != (void*)0), (p_802->g_421.f6 , ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_802->g_525.yw)).xxxy)))).zxzwzzzywyxzxyww, ((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))(l_526.xyyy)).zyxyzxxy, ((VECTOR(int8_t, 8))(l_527.xyyyyxyy)), ((VECTOR(int8_t, 2))(0x46L, 1L)).yxxyxyyy))).s3015453075314116))).s7fc7, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(0L, 0x0CL)).xxyxyxyx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(0x6EL, ((VECTOR(int8_t, 2))(p_802->g_528.s28)), 0x09L)).zyyxwyzx)).s41)).xxxxyyxx))).s44)).yyyy))), ((VECTOR(int8_t, 8))(l_529.s22757413)).even))).wyyxwzyz)).even, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_530.xx)))).xyyx))).y))), (safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((((((*l_535) = &p_802->g_28[2][6][1]) == l_536) != (*l_482)) || p_802->g_197.s8), FAKE_DIVERGE(p_802->group_2_offset, get_group_id(2), 10))), p_802->g_comm_values[p_802->tid])))))))) || 0xA8L) , p_3) <= p_3) & (-2L)) == 0x96C9L) < (*p_802->g_84))), FAKE_DIVERGE(p_802->global_1_offset, get_global_id(1), 10)));
        p_802->g_287 &= (safe_div_func_uint16_t_u_u((!((safe_lshift_func_uint16_t_u_u((((*l_546) &= ((l_542 = ((*l_541) = &l_506)) == (l_544 = l_543))) , ((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int64_t_s((safe_sub_func_uint16_t_u_u((!(((*l_482) = (+((*p_802->g_84) = ((l_554 = &l_486) == (void*)0)))) > ((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_555.sa355)).xzyzyxxx)).even)).w , ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(p_802->g_556.sfecfc25d19f7277a)))).hi, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 4))(l_557.xxxx)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(p_802->g_439[0].f3, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(8UL, 0x45L, 0x58L, 0x62L, ((VECTOR(uint8_t, 4))(l_558.yyxy)))))).s20)), 251UL, ((VECTOR(uint8_t, 4))(l_559.sf966)), 0x63L, p_5, 0UL, ((VECTOR(uint8_t, 4))(l_560.s6c31)), 249UL)).sb600, ((VECTOR(uint8_t, 2))(p_802->g_561.s11)).yyyx))).even)).yxyx))))).even)).xyyyxyyy))).s14)).odd) != 0UL))), l_529.s1)))), l_562.z)) > p_802->l_comm_values[(safe_mod_func_uint32_t_u_u(p_802->tid, 184))]), p_802->g_439[0].f6)) >= 0x3BL)), 2)) , (*l_481))), FAKE_DIVERGE(p_802->group_0_offset, get_group_id(0), 10)));
        for (p_802->g_97 = 15; (p_802->g_97 == 12); p_802->g_97 = safe_sub_func_uint64_t_u_u(p_802->g_97, 9))
        { /* block id: 261 */
            if (((**l_554) = p_5))
            { /* block id: 263 */
                (*l_484) = (*p_802->g_174);
            }
            else
            { /* block id: 265 */
                if ((atomic_inc(&p_802->g_atomic_input[43 * get_linear_group_id() + 30]) == 8))
                { /* block id: 267 */
                    uint32_t l_565 = 0xFE372694L;
                    int32_t *l_589 = (void*)0;
                    int32_t l_591 = (-1L);
                    int32_t *l_590 = &l_591;
                    int32_t l_592 = 0x7361E831L;
                    uint8_t l_605 = 250UL;
                    if (l_565)
                    { /* block id: 268 */
                        uint64_t l_566[10] = {0UL,0x88566552EA0A0449L,0x892CCB4C53B5B137L,0x88566552EA0A0449L,0UL,0UL,0x88566552EA0A0449L,0x892CCB4C53B5B137L,0x88566552EA0A0449L,0UL};
                        int i;
                        l_566[2] &= 0x68AE70DDL;
                    }
                    else
                    { /* block id: 270 */
                        int8_t l_567 = 0L;
                        VECTOR(int16_t, 4) l_568 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x36E9L), 0x36E9L);
                        VECTOR(int16_t, 2) l_569 = (VECTOR(int16_t, 2))(0x23DCL, 0x2BA1L);
                        uint16_t l_570 = 0xB331L;
                        VECTOR(int16_t, 16) l_571 = (VECTOR(int16_t, 16))(0x7204L, (VECTOR(int16_t, 4))(0x7204L, (VECTOR(int16_t, 2))(0x7204L, 0x2B7AL), 0x2B7AL), 0x2B7AL, 0x7204L, 0x2B7AL, (VECTOR(int16_t, 2))(0x7204L, 0x2B7AL), (VECTOR(int16_t, 2))(0x7204L, 0x2B7AL), 0x7204L, 0x2B7AL, 0x7204L, 0x2B7AL);
                        uint8_t l_572 = 0xB2L;
                        int8_t l_573 = 1L;
                        VECTOR(uint32_t, 4) l_574 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL);
                        int32_t l_575 = 7L;
                        struct S0 l_576[7][6] = {{{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL}},{{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL}},{{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL}},{{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL}},{{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL}},{{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL}},{{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL},{0x732ABDC153E4F775L,0x700CEACB13D7889DL,-1L,0x77B362A9L,1UL,0x1CB3L,0x79516E3FL,0x4B335AEFL,0xA0CB82B12676F83DL,65534UL}}};
                        uint32_t l_577[1];
                        uint8_t l_578 = 0x41L;
                        struct S1 l_579 = {1L,0L};
                        struct S1 l_580 = {0L,0x7EFC652901869470L};
                        int64_t l_581 = 0x4593697F98E64378L;
                        int16_t l_582 = 2L;
                        uint64_t l_583 = 18446744073709551606UL;
                        struct S1 l_584 = {0x4B2A0C56E1206901L,-1L};
                        struct S1 l_585 = {-1L,2L};
                        uint8_t l_586 = 0x14L;
                        int64_t l_587 = 0x0828A4E0CF7A1B28L;
                        VECTOR(int16_t, 8) l_588 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L));
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_577[i] = 0x25E50F54L;
                        l_585 = (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 2))(0x1C45L, (-8L))), ((VECTOR(int16_t, 8))(9L, 0x0802L, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 4))(l_567, (-1L), 0x4324L, (-9L))).zxxxyxwywyxxwzxz, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(l_568.zxyyyyyxyyxxxyzz)).se378, ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_569.xxxx)), l_570, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(l_571.scc)), ((VECTOR(int16_t, 2))(0x473DL, (-1L)))))).xxxxxxyxyxyyxxxy, ((VECTOR(int16_t, 8))(l_572, 0x43FDL, (l_573 , 7L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))((((((VECTOR(uint32_t, 8))(0x04FA37CCL, ((VECTOR(uint32_t, 4))((l_575 = ((VECTOR(uint32_t, 16))(l_574.yyxxzywzxyyzzxww)).sb), (l_576[2][0] , l_577[0]), 4294967295UL, 5UL)), 1UL, 0xC9CF6F9DL, 4294967287UL)).s2 , (l_578 = 0x0453L)) , (l_580 = l_579)) , l_581), (-4L), 2L, 0L, 0x7CBCL, 0x4132L, l_582, ((VECTOR(int16_t, 4))(0x266AL)), (-10L), l_583, 0x756DL, 1L, 0x5A16L)).s4009)), 1L)).s5256675563660666))).hi, ((VECTOR(int16_t, 8))(5L)), ((VECTOR(int16_t, 8))(0L))))).s46)).odd, 0x27B7L, 0x5BFEL)).even)))).odd, ((VECTOR(int16_t, 2))(0x0E0DL)), ((VECTOR(int16_t, 2))((-5L)))))), 0x2AD0L, (-5L))))), ((VECTOR(int16_t, 4))(7L)), ((VECTOR(int16_t, 4))(5L)))))))).hi, ((VECTOR(int16_t, 2))((-1L)))))))).yyyxyxyyyyyyxyxy))).s1a8a, ((VECTOR(int16_t, 4))(0x7C51L))))), 3L, 0x66BAL)).s03))).xxxyyxxy)).s60)).lo , l_584);
                        l_588.s7 = (l_587 ^= l_586);
                    }
                    l_590 = l_589;
                    if (l_592)
                    { /* block id: 279 */
                        struct S2 l_593[9][5][5] = {{{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}}},{{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}}},{{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}}},{{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}}},{{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}}},{{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}}},{{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}}},{{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}}},{{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}},{{-1L},{0x6CL},{6L},{1L},{0x71L}}}};
                        struct S2 l_594 = {0x0DL};
                        VECTOR(int32_t, 4) l_595 = (VECTOR(int32_t, 4))(0x0AEC9169L, (VECTOR(int32_t, 2))(0x0AEC9169L, (-1L)), (-1L));
                        uint32_t l_596[6];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_596[i] = 0UL;
                        l_594 = l_593[6][3][4];
                        l_596[4]--;
                    }
                    else
                    { /* block id: 282 */
                        VECTOR(int32_t, 2) l_599 = (VECTOR(int32_t, 2))((-7L), (-1L));
                        uint32_t l_600 = 4294967295UL;
                        struct S0 l_602[6] = {{0xCCABF2C71832B2F1L,5L,0x3BFF80EE6DD29E34L,-1L,0x0F566F8AL,1L,0L,0x44683F3AL,7UL,65535UL},{0x7E2799539DC67E15L,-1L,3L,-1L,0x7B0EAEA8L,1L,0x435EFCC5L,4L,3UL,65532UL},{0xCCABF2C71832B2F1L,5L,0x3BFF80EE6DD29E34L,-1L,0x0F566F8AL,1L,0L,0x44683F3AL,7UL,65535UL},{0xCCABF2C71832B2F1L,5L,0x3BFF80EE6DD29E34L,-1L,0x0F566F8AL,1L,0L,0x44683F3AL,7UL,65535UL},{0x7E2799539DC67E15L,-1L,3L,-1L,0x7B0EAEA8L,1L,0x435EFCC5L,4L,3UL,65532UL},{0xCCABF2C71832B2F1L,5L,0x3BFF80EE6DD29E34L,-1L,0x0F566F8AL,1L,0L,0x44683F3AL,7UL,65535UL}};
                        struct S0 *l_601[1];
                        struct S0 *l_603 = (void*)0;
                        struct S0 *l_604 = &l_602[0];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_601[i] = &l_602[5];
                        l_600 &= ((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(1L, 1L)), ((VECTOR(int32_t, 2))(0L, 0x1556A27DL))))), ((VECTOR(int32_t, 8))(l_599.yyyxxyxx)).s0, ((VECTOR(int32_t, 2))((-1L), (-2L))), 0x59C4A92AL, 1L)).s4;
                        l_604 = (l_603 = l_601[0]);
                    }
                    if ((l_605 = 0x6D130A24L))
                    { /* block id: 288 */
                        struct S0 l_607 = {18446744073709551609UL,0x31923E05137EB3D4L,-1L,-8L,0UL,-7L,0x4B236E42L,0x3BFAC232L,0x07D6EF31A4184C12L,65534UL};/* VOLATILE GLOBAL l_607 */
                        struct S0 *l_606[5][10][5] = {{{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607}},{{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607}},{{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607}},{{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607}},{{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607},{&l_607,&l_607,(void*)0,&l_607,&l_607}}};
                        struct S0 *l_608 = &l_607;
                        struct S0 *l_609 = &l_607;
                        int32_t l_610 = 0x19BD218DL;
                        int i, j, k;
                        l_609 = (l_608 = l_606[2][4][0]);
                        l_589 = (void*)0;
                        l_591 ^= l_610;
                    }
                    else
                    { /* block id: 293 */
                        int32_t l_611[4][7][4] = {{{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L}},{{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L}},{{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L}},{{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L},{0x3779BEA7L,0x45326D68L,0x45326D68L,0x3779BEA7L}}};
                        VECTOR(int64_t, 16) l_612 = (VECTOR(int64_t, 16))(0x377879A852D20C91L, (VECTOR(int64_t, 4))(0x377879A852D20C91L, (VECTOR(int64_t, 2))(0x377879A852D20C91L, 2L), 2L), 2L, 0x377879A852D20C91L, 2L, (VECTOR(int64_t, 2))(0x377879A852D20C91L, 2L), (VECTOR(int64_t, 2))(0x377879A852D20C91L, 2L), 0x377879A852D20C91L, 2L, 0x377879A852D20C91L, 2L);
                        uint16_t l_613 = 3UL;
                        int64_t l_616 = (-3L);
                        int i, j, k;
                        --l_613;
                        l_591 ^= l_616;
                    }
                    unsigned int result = 0;
                    result += l_565;
                    result += l_591;
                    result += l_592;
                    result += l_605;
                    atomic_add(&p_802->g_special_values[43 * get_linear_group_id() + 30], result);
                }
                else
                { /* block id: 297 */
                    (1 + 1);
                }
            }
        }
    }
    else
    { /* block id: 302 */
        uint32_t l_617 = 0UL;
        struct S1 l_704[10] = {{0x31B5CD281EE3E5A3L,-5L},{0x31B5CD281EE3E5A3L,-5L},{0x31B5CD281EE3E5A3L,-5L},{0x31B5CD281EE3E5A3L,-5L},{0x31B5CD281EE3E5A3L,-5L},{0x31B5CD281EE3E5A3L,-5L},{0x31B5CD281EE3E5A3L,-5L},{0x31B5CD281EE3E5A3L,-5L},{0x31B5CD281EE3E5A3L,-5L},{0x31B5CD281EE3E5A3L,-5L}};
        struct S2 l_720 = {0x47L};
        uint16_t *l_721 = (void*)0;
        uint16_t *l_726 = (void*)0;
        int32_t l_727 = 0x291963F4L;
        uint32_t *l_730 = &l_617;
        int32_t l_783 = 0x5D66CF0EL;
        int32_t l_785 = 0x60D56DB2L;
        int32_t l_786 = (-1L);
        int32_t l_787[10][2][9] = {{{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L},{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L}},{{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L},{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L}},{{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L},{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L}},{{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L},{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L}},{{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L},{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L}},{{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L},{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L}},{{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L},{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L}},{{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L},{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L}},{{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L},{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L}},{{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L},{5L,0x13AD0C20L,1L,0x3B0845E5L,0x1E10755FL,(-7L),0x278DE041L,0x36F7288CL,0x594E6A90L}}};
        uint32_t l_791 = 4294967295UL;
        int i, j, k;
        (*l_482) = (l_617 <= 0x1027181EL);
        if ((atomic_inc(&p_802->g_atomic_input[43 * get_linear_group_id() + 40]) == 8))
        { /* block id: 305 */
            VECTOR(int32_t, 16) l_618 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-6L)), (-6L)), (-6L), 0L, (-6L), (VECTOR(int32_t, 2))(0L, (-6L)), (VECTOR(int32_t, 2))(0L, (-6L)), 0L, (-6L), 0L, (-6L));
            int32_t *l_698 = (void*)0;
            int32_t *l_699 = (void*)0;
            int i;
            for (l_618.sc = 24; (l_618.sc != 9); --l_618.sc)
            { /* block id: 308 */
                int32_t l_622 = (-1L);
                int32_t *l_621 = &l_622;
                int8_t l_623 = (-4L);
                uint32_t l_624 = 4294967294UL;
                int64_t l_627 = 0L;
                l_621 = l_621;
                --l_624;
                if (l_627)
                { /* block id: 311 */
                    VECTOR(int8_t, 4) l_628 = (VECTOR(int8_t, 4))(0x16L, (VECTOR(int8_t, 2))(0x16L, 0x0FL), 0x0FL);
                    uint32_t l_629 = 0xDBE8CA91L;
                    VECTOR(int8_t, 2) l_630 = (VECTOR(int8_t, 2))(0L, 1L);
                    VECTOR(int8_t, 4) l_631 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x52L), 0x52L);
                    VECTOR(int8_t, 16) l_632 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-2L)), (-2L)), (-2L), (-1L), (-2L), (VECTOR(int8_t, 2))((-1L), (-2L)), (VECTOR(int8_t, 2))((-1L), (-2L)), (-1L), (-2L), (-1L), (-2L));
                    VECTOR(int8_t, 4) l_633 = (VECTOR(int8_t, 4))(0x21L, (VECTOR(int8_t, 2))(0x21L, 1L), 1L);
                    VECTOR(int8_t, 16) l_634 = (VECTOR(int8_t, 16))(0x47L, (VECTOR(int8_t, 4))(0x47L, (VECTOR(int8_t, 2))(0x47L, 9L), 9L), 9L, 0x47L, 9L, (VECTOR(int8_t, 2))(0x47L, 9L), (VECTOR(int8_t, 2))(0x47L, 9L), 0x47L, 9L, 0x47L, 9L);
                    VECTOR(int8_t, 8) l_635 = (VECTOR(int8_t, 8))(0x0FL, (VECTOR(int8_t, 4))(0x0FL, (VECTOR(int8_t, 2))(0x0FL, 8L), 8L), 8L, 0x0FL, 8L);
                    uint32_t l_636 = 0xE0F9A649L;
                    int32_t l_637 = 0L;
                    int64_t l_638 = 6L;
                    int16_t l_639 = (-1L);
                    uint32_t l_640 = 4294967287UL;
                    VECTOR(int8_t, 8) l_641 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x21L), 0x21L), 0x21L, 1L, 0x21L);
                    VECTOR(int8_t, 16) l_642 = (VECTOR(int8_t, 16))(0x45L, (VECTOR(int8_t, 4))(0x45L, (VECTOR(int8_t, 2))(0x45L, 0L), 0L), 0L, 0x45L, 0L, (VECTOR(int8_t, 2))(0x45L, 0L), (VECTOR(int8_t, 2))(0x45L, 0L), 0x45L, 0L, 0x45L, 0L);
                    VECTOR(int8_t, 2) l_643 = (VECTOR(int8_t, 2))(0x1FL, 0x32L);
                    VECTOR(int8_t, 2) l_644 = (VECTOR(int8_t, 2))(0x1CL, 0x30L);
                    VECTOR(int8_t, 4) l_645 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x46L), 0x46L);
                    VECTOR(int8_t, 2) l_646 = (VECTOR(int8_t, 2))((-7L), 0x60L);
                    VECTOR(int8_t, 4) l_647 = (VECTOR(int8_t, 4))(0x4FL, (VECTOR(int8_t, 2))(0x4FL, 0x4DL), 0x4DL);
                    VECTOR(int8_t, 4) l_648 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 4L), 4L);
                    VECTOR(int8_t, 8) l_649 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
                    VECTOR(int8_t, 16) l_650 = (VECTOR(int8_t, 16))(0x10L, (VECTOR(int8_t, 4))(0x10L, (VECTOR(int8_t, 2))(0x10L, 0x2AL), 0x2AL), 0x2AL, 0x10L, 0x2AL, (VECTOR(int8_t, 2))(0x10L, 0x2AL), (VECTOR(int8_t, 2))(0x10L, 0x2AL), 0x10L, 0x2AL, 0x10L, 0x2AL);
                    VECTOR(int8_t, 4) l_651 = (VECTOR(int8_t, 4))(0x1EL, (VECTOR(int8_t, 2))(0x1EL, 0x40L), 0x40L);
                    uint32_t l_652 = 1UL;
                    int32_t l_653[8][8] = {{5L,0x639755B9L,0L,0L,0x639755B9L,5L,1L,0x7690DE27L},{5L,0x639755B9L,0L,0L,0x639755B9L,5L,1L,0x7690DE27L},{5L,0x639755B9L,0L,0L,0x639755B9L,5L,1L,0x7690DE27L},{5L,0x639755B9L,0L,0L,0x639755B9L,5L,1L,0x7690DE27L},{5L,0x639755B9L,0L,0L,0x639755B9L,5L,1L,0x7690DE27L},{5L,0x639755B9L,0L,0L,0x639755B9L,5L,1L,0x7690DE27L},{5L,0x639755B9L,0L,0L,0x639755B9L,5L,1L,0x7690DE27L},{5L,0x639755B9L,0L,0L,0x639755B9L,5L,1L,0x7690DE27L}};
                    uint32_t l_654 = 4294967295UL;
                    int32_t l_655 = (-7L);
                    uint32_t l_656 = 0UL;
                    int32_t l_657 = 0x0070E0DFL;
                    int8_t l_658 = 0x6AL;
                    int8_t l_659 = (-1L);
                    int i, j;
                    if (((l_658 = (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_628.yy)), l_629, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(l_630.xyyxxyxx)).s25, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_631.zx)).yyyyxyyx)).s43)).xxxx)).hi))), 2L, (-7L), 4L)).s73))), ((VECTOR(int8_t, 2))(l_632.s3c))))).even, ((VECTOR(int8_t, 4))(l_633.wwww)), ((VECTOR(int8_t, 2))(0L, 0L)), ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(l_634.s7c8ca267)).lo, ((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(0x2EL, ((VECTOR(int8_t, 2))(8L, 0x0BL)), 1L)).wwxxyxxwxyxyxwxz, (int8_t)(l_656 = ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))((-2L), 0x01L, 0x66L, (-9L), 0x03L, (-6L), 3L, ((VECTOR(int8_t, 2))(l_635.s76)), l_636, ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))((l_631.x = l_637), 6L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x5DL, 0x71L)), 2L, 0L)), 0x23L, 0x6EL)).hi, (int8_t)(l_623 = l_638)))), 0x2BL, 0x0BL)).s83, ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-10L), 0x0DL)).xyyxxxyy)).lo, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_639, l_640, (-2L), 0x5EL)).hi)).xxxy))).even))).xyxyyxyxxxyyxyyx)).s15, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_641.s67)), 0x3AL, 0x2CL)), (-7L), (-8L), 0x15L, ((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(l_642.s28f2)).wzzywzwy, ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_643.xyyxyyxxxyxyxyxy)))).s4ae1, ((VECTOR(int8_t, 2))(l_644.xx)).xxxy))).yxzxzyxw))), 0L)).lo, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(l_645.xwyxxzxz)).s32, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(l_646.yxyx)).even, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_647.wwzxxwxx)).s60)), ((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(l_648.wx)).yxyxyyyyyyxxyyxx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_649.s6236253562502616)).lo)).s50, ((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(l_650.sfd3f0c07)).even, ((VECTOR(int8_t, 8))((-1L), ((VECTOR(int8_t, 2))(l_651.wx)), (l_623 = (l_652 , 1L)), 0x42L, l_653[6][7], 8L, 0x7FL)).hi, ((VECTOR(int8_t, 4))(0x2CL))))).wxwyxzzxxzzyywzx, ((VECTOR(int8_t, 16))((-6L)))))).s02, ((VECTOR(int8_t, 2))((-2L)))))).yxxyyxxyxxxyyyyx)).sac98)))).xxzywxxxwxywyxwy))).hi, ((VECTOR(int8_t, 8))((-7L)))))).s07, ((VECTOR(int8_t, 2))((-1L)))))), ((VECTOR(int8_t, 2))((-4L)))))))), ((VECTOR(int8_t, 2))(1L))))).yyyx, (int8_t)l_654, (int8_t)l_655))))).xyzyxxwz))))))).s14, ((VECTOR(int8_t, 2))(0x24L))))), ((VECTOR(int8_t, 2))(0x23L))))).even)))).s088e, ((VECTOR(int8_t, 4))(0x03L))))), 0x7EL, 1L, ((VECTOR(int8_t, 2))(0x6DL)), 0x43L)).se2, ((VECTOR(int8_t, 2))(1L))))))).lo , l_657)) , l_659))
                    { /* block id: 317 */
                        l_621 = (void*)0;
                    }
                    else
                    { /* block id: 319 */
                        VECTOR(uint64_t, 8) l_660 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xAB8EA8033A346A7BL), 0xAB8EA8033A346A7BL), 0xAB8EA8033A346A7BL, 18446744073709551615UL, 0xAB8EA8033A346A7BL);
                        int i;
                        l_621 = (void*)0;
                        l_657 = 0x6C37149AL;
                        l_622 ^= (l_655 &= l_660.s4);
                    }
                    l_621 = (void*)0;
                }
                else
                { /* block id: 326 */
                    struct S1 l_661 = {8L,4L};
                    VECTOR(int32_t, 4) l_662 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 6L), 6L);
                    VECTOR(int32_t, 4) l_663 = (VECTOR(int32_t, 4))(0x2401AA33L, (VECTOR(int32_t, 2))(0x2401AA33L, 0x121A4BB9L), 0x121A4BB9L);
                    VECTOR(int16_t, 4) l_664 = (VECTOR(int16_t, 4))(0x1692L, (VECTOR(int16_t, 2))(0x1692L, 0x138BL), 0x138BL);
                    VECTOR(int16_t, 8) l_665 = (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 2L), 2L), 2L, (-2L), 2L);
                    VECTOR(int16_t, 8) l_666 = (VECTOR(int16_t, 8))(0x2E14L, (VECTOR(int16_t, 4))(0x2E14L, (VECTOR(int16_t, 2))(0x2E14L, 0x7D38L), 0x7D38L), 0x7D38L, 0x2E14L, 0x7D38L);
                    VECTOR(int16_t, 16) l_667 = (VECTOR(int16_t, 16))(0x60A4L, (VECTOR(int16_t, 4))(0x60A4L, (VECTOR(int16_t, 2))(0x60A4L, 0x34D1L), 0x34D1L), 0x34D1L, 0x60A4L, 0x34D1L, (VECTOR(int16_t, 2))(0x60A4L, 0x34D1L), (VECTOR(int16_t, 2))(0x60A4L, 0x34D1L), 0x60A4L, 0x34D1L, 0x60A4L, 0x34D1L);
                    VECTOR(int16_t, 4) l_668 = (VECTOR(int16_t, 4))(0x22E6L, (VECTOR(int16_t, 2))(0x22E6L, 5L), 5L);
                    VECTOR(int16_t, 4) l_669 = (VECTOR(int16_t, 4))(0x079AL, (VECTOR(int16_t, 2))(0x079AL, 0x42F7L), 0x42F7L);
                    VECTOR(int16_t, 16) l_670 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-8L)), (-8L)), (-8L), (-1L), (-8L), (VECTOR(int16_t, 2))((-1L), (-8L)), (VECTOR(int16_t, 2))((-1L), (-8L)), (-1L), (-8L), (-1L), (-8L));
                    VECTOR(uint16_t, 2) l_671 = (VECTOR(uint16_t, 2))(0x93CCL, 0x730CL);
                    VECTOR(uint16_t, 2) l_672 = (VECTOR(uint16_t, 2))(0x6C30L, 0xE6DFL);
                    VECTOR(uint16_t, 16) l_673 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x7499L), 0x7499L), 0x7499L, 0UL, 0x7499L, (VECTOR(uint16_t, 2))(0UL, 0x7499L), (VECTOR(uint16_t, 2))(0UL, 0x7499L), 0UL, 0x7499L, 0UL, 0x7499L);
                    VECTOR(uint16_t, 16) l_674 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65529UL), 65529UL), 65529UL, 65535UL, 65529UL, (VECTOR(uint16_t, 2))(65535UL, 65529UL), (VECTOR(uint16_t, 2))(65535UL, 65529UL), 65535UL, 65529UL, 65535UL, 65529UL);
                    VECTOR(uint16_t, 2) l_675 = (VECTOR(uint16_t, 2))(65535UL, 2UL);
                    uint16_t l_676 = 65534UL;
                    VECTOR(int32_t, 2) l_677 = (VECTOR(int32_t, 2))(0x43044A40L, (-8L));
                    VECTOR(int32_t, 2) l_678 = (VECTOR(int32_t, 2))((-8L), (-1L));
                    VECTOR(int32_t, 16) l_679 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x19DEF255L), 0x19DEF255L), 0x19DEF255L, 4L, 0x19DEF255L, (VECTOR(int32_t, 2))(4L, 0x19DEF255L), (VECTOR(int32_t, 2))(4L, 0x19DEF255L), 4L, 0x19DEF255L, 4L, 0x19DEF255L);
                    VECTOR(int32_t, 8) l_680 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                    VECTOR(int32_t, 4) l_681 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-6L)), (-6L));
                    VECTOR(int32_t, 2) l_682 = (VECTOR(int32_t, 2))(0L, 0L);
                    int32_t l_683 = (-10L);
                    uint8_t l_684 = 0x27L;
                    VECTOR(int32_t, 8) l_685 = (VECTOR(int32_t, 8))(0x1B2C9930L, (VECTOR(int32_t, 4))(0x1B2C9930L, (VECTOR(int32_t, 2))(0x1B2C9930L, (-5L)), (-5L)), (-5L), 0x1B2C9930L, (-5L));
                    VECTOR(int32_t, 8) l_686 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x15EA2C98L), 0x15EA2C98L), 0x15EA2C98L, (-1L), 0x15EA2C98L);
                    VECTOR(int32_t, 16) l_687 = (VECTOR(int32_t, 16))(0x2160B8E9L, (VECTOR(int32_t, 4))(0x2160B8E9L, (VECTOR(int32_t, 2))(0x2160B8E9L, 0x23FDBE49L), 0x23FDBE49L), 0x23FDBE49L, 0x2160B8E9L, 0x23FDBE49L, (VECTOR(int32_t, 2))(0x2160B8E9L, 0x23FDBE49L), (VECTOR(int32_t, 2))(0x2160B8E9L, 0x23FDBE49L), 0x2160B8E9L, 0x23FDBE49L, 0x2160B8E9L, 0x23FDBE49L);
                    VECTOR(int32_t, 16) l_688 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-9L)), (-9L)), (-9L), 0L, (-9L), (VECTOR(int32_t, 2))(0L, (-9L)), (VECTOR(int32_t, 2))(0L, (-9L)), 0L, (-9L), 0L, (-9L));
                    VECTOR(int32_t, 8) l_689 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-2L)), (-2L)), (-2L), 0L, (-2L));
                    uint32_t l_690 = 4294967295UL;
                    VECTOR(uint64_t, 4) l_691 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x7684D95E584A27FFL), 0x7684D95E584A27FFL);
                    int64_t l_692 = 8L;
                    uint32_t l_693 = 4294967295UL;
                    uint16_t l_694 = 0UL;
                    uint8_t l_695 = 4UL;
                    int32_t l_696 = (-1L);
                    uint32_t l_697 = 0xAD4EF08AL;
                    int i;
                    l_696 ^= (l_661 , (l_695 &= (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(l_662.wwzzxzwyxxwyxwzx)), ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(l_663.xxwxzzxzwxzxwwxy)).s3a, ((VECTOR(int32_t, 8))(0x7EDFDFC5L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(l_664.xwwx)).hi, ((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 8))(l_665.s21701601)).s3172566265165470, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(0x578BL, ((VECTOR(int16_t, 2))(l_666.s41)), 1L)).hi, ((VECTOR(int16_t, 4))(l_667.s0efd)).even))), ((VECTOR(int16_t, 4))(l_668.yzzw)).hi))))).yxyxxyxxyyyyyyyx, ((VECTOR(int16_t, 2))(l_669.zx)).yyxxyyxyxyyxxxxx))).s7f, ((VECTOR(int16_t, 8))(l_670.see0b4497)).s51))).yyyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_671.xxxxxxyyxyyxyxxy)))).s76, ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 16))(l_672.yxyyyyxyxxyyxyxy)).sb1e0, ((VECTOR(uint16_t, 2))(0x0864L, 0x4CC4L)).yxxy, ((VECTOR(uint16_t, 16))(l_673.s6d767763adf0835f)).s4094))), ((VECTOR(uint16_t, 2))(9UL, 65532UL)).yyyx))).lo))), ((VECTOR(uint16_t, 16))(4UL, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_674.s784e)).xwwwxxyz)), 0x7832L, 0x63DFL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_675.yyxxxyyxxyyxyyyx)).s89)))), 9UL, 2UL, 8UL)).sf0))).yxyx))))).lo)), ((l_676 = 0L) , ((((((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 4))(0xF832C73915E6EE46L, (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 16))(0x44EFB4F9L, ((VECTOR(int32_t, 4))(l_677.yxyy)), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_678.yx)), (-8L), 0x76EF1EFEL)).lo))))), ((VECTOR(int32_t, 2))(l_679.s08)), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_680.s6007)).odd)).xyxy, ((VECTOR(int32_t, 16))(l_681.wwxwyxwwyyzwxzxx)).s7ec2))).wyyxyyyy)).even, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_682.xyyx)), ((*l_621) = l_683), l_684, ((VECTOR(int32_t, 8))((-1L), (-9L), (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(l_685.s34555424)).s25, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(l_686.s3377763231552363)).s1343, ((VECTOR(int32_t, 2))(l_687.sbe)).xxyx))).lo))), 0L, 0x717121EDL)), 0x114C8BF3L)), 0x0D3EDC3EL, 0x328C30C3L)).odd, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(8L, 0x34BCBED4L)).xyxxxyxx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x36B4DD5FL, ((VECTOR(int32_t, 2))(3L, 0x4A2D8210L)), 0L, ((VECTOR(int32_t, 4))(l_688.s7131)))).s3435065761204263)).odd))), ((VECTOR(int32_t, 16))(l_689.s1463242447603237)).odd))).hi))), 0x556BEA88L, 2L, (-3L))).sf277))).xwzxzzyywxwxwwxx)).s8 , l_690), 18446744073709551610UL, 1UL)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_691.yx)).yyxyyyyyxyyxxxxy)).s59)).xyxy))).w , (l_669.z = 1L)) , 1UL) , l_692) , l_693)), (-7L), (-1L), (-1L), 0x1995B9D9L)).s41))).yyxxxxxx))).s5577056036466204))).s27, ((VECTOR(uint32_t, 2))(0xBFC7C857L))))).yxxyyyyy)).s1366162550530220, ((VECTOR(int64_t, 16))(0x7CA37641A783AC68L)), ((VECTOR(int64_t, 16))((-5L)))))).se6, ((VECTOR(int64_t, 2))(0x28FF4A6AB19D90E6L))))).yyyy, ((VECTOR(int64_t, 4))(0x1EC57B194120C757L))))).odd)))).even , l_694)));
                    (*l_621) = l_697;
                }
            }
            l_699 = l_698;
            unsigned int result = 0;
            result += l_618.sf;
            result += l_618.se;
            result += l_618.sd;
            result += l_618.sc;
            result += l_618.sb;
            result += l_618.sa;
            result += l_618.s9;
            result += l_618.s8;
            result += l_618.s7;
            result += l_618.s6;
            result += l_618.s5;
            result += l_618.s4;
            result += l_618.s3;
            result += l_618.s2;
            result += l_618.s1;
            result += l_618.s0;
            atomic_add(&p_802->g_special_values[43 * get_linear_group_id() + 40], result);
        }
        else
        { /* block id: 336 */
            (1 + 1);
        }
        if ((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_704[5] , ((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 16))(l_707.s2065011425400210)).s0, (((*l_730) &= ((*l_481) >= (safe_mod_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(p_802->g_421.f3, (safe_sub_func_int32_t_s_s(p_4, (safe_rshift_func_uint16_t_u_u((((((safe_lshift_func_int8_t_s_u(p_5, 6)) && ((p_3 | ((l_720 , l_721) == (p_802->g_728 = (((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((l_727 = ((p_802->g_302.x > (*l_482)) == 65527UL)), p_3)), (*l_485))) > p_3) , l_721)))) | p_802->g_729)) , (*l_482)) != 0UL) == 1UL), 10)))))), p_802->g_300.z)) <= p_802->g_320.f3), p_802->g_157.z)))) != p_802->g_295.x))) , 0x5AL)), p_802->g_302.y)), l_704[5].f1)))
        { /* block id: 342 */
            return p_5;
        }
        else
        { /* block id: 344 */
            VECTOR(int16_t, 8) l_741 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x0E7FL), 0x0E7FL), 0x0E7FL, 0L, 0x0E7FL);
            int16_t *l_742[10][1][3] = {{{&l_490,&l_490,&l_490}},{{&l_490,&l_490,&l_490}},{{&l_490,&l_490,&l_490}},{{&l_490,&l_490,&l_490}},{{&l_490,&l_490,&l_490}},{{&l_490,&l_490,&l_490}},{{&l_490,&l_490,&l_490}},{{&l_490,&l_490,&l_490}},{{&l_490,&l_490,&l_490}},{{&l_490,&l_490,&l_490}}};
            VECTOR(int16_t, 8) l_761 = (VECTOR(int16_t, 8))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x1684L), 0x1684L), 0x1684L, 5L, 0x1684L);
            int32_t l_766 = 1L;
            VECTOR(uint32_t, 2) l_767 = (VECTOR(uint32_t, 2))(8UL, 4294967295UL);
            int8_t *l_769[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j, k;
            (*l_481) = (safe_mul_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((((safe_sub_func_int64_t_s_s(p_802->g_201.f9, p_802->g_320.f6)) & ((safe_mul_func_uint8_t_u_u(((*l_481) <= p_3), (((p_802->g_525.z &= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(0L, ((VECTOR(int8_t, 2))(0x00L, (-4L))), (safe_div_func_int16_t_s_s((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(4L, ((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(l_741.s1136557711176526)).even, (int16_t)(p_802->g_320.f5 = p_802->g_34)))).s5, 0x6769L, 0x0067L, 0x3074L, ((l_720.f0 == (l_766 &= ((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(0x4A30408B0C53DCE6L, (safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(((safe_div_func_uint8_t_u_u((safe_unary_minus_func_uint64_t_u(p_4)), (p_802->g_300.w , (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 16))((-4L), ((VECTOR(int64_t, 4))(0x64FA11A2DF3BB5CAL, 0x288A3FF1D3801017L, 0x52981828B32DBC9CL, (-1L))), (safe_div_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(l_760.sf1)).xxyx, ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x66FCL, (-1L))).xyyy)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_761.s4544606723116735)).s0c)).xxxy)))))).wxzzywxwwzzzzywz)).sa, (safe_lshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s(p_5, 0x2B347F6C7709E665L)), 3)))), p_5, (-7L), p_4, (-1L), 0L, ((VECTOR(int64_t, 4))((-8L))), 0x5311B2D7B60AD45CL)).sb, l_704[5].f0))))) < p_4), 4294967293UL)), p_5)), ((VECTOR(uint64_t, 2))(0x66AF7FECC2EAA25AL)), FAKE_DIVERGE(p_802->local_0_offset, get_local_id(0), 10), p_5, 0xA6A5FA1AE62BEAF2L, 0xF1913EB97CE742EEL)).s3, (*p_802->g_84))), p_802->g_439[0].f6)), p_4)) < 8L))) >= l_767.x), 3L, 0x1336L)))).s5 | p_802->g_320.f2), p_802->g_28[4][9][1].f0)), ((VECTOR(int8_t, 4))(9L)))).lo, ((VECTOR(int8_t, 4))(0x7DL))))).xwxzyyyw)))).s23)), (-3L), ((VECTOR(int8_t, 2))(0L)), p_802->g_768, 0x51L, 0x51L)).s3) >= (*l_484)) & p_802->g_97))) != (*l_482))) > 0L), 0x0DL)), p_4));
            l_766 |= p_3;
            for (p_5 = 0; (p_5 == 15); ++p_5)
            { /* block id: 352 */
                int64_t l_775 = 0L;
                for (p_802->g_184.f0 = 0; (p_802->g_184.f0 != (-10)); --p_802->g_184.f0)
                { /* block id: 355 */
                    uint64_t l_774 = 18446744073709551615UL;
                    if (l_774)
                        break;
                    return l_775;
                }
            }
            p_802->g_777 = p_802->g_776;
        }
        for (p_802->g_777.f4 = 0; (p_802->g_777.f4 < 30); ++p_802->g_777.f4)
        { /* block id: 364 */
            uint32_t l_780 = 0x6BCC13A7L;
            int32_t l_784 = 0x1B4978F4L;
            int32_t l_788 = (-8L);
            VECTOR(int32_t, 4) l_789 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x34BDF3D3L), 0x34BDF3D3L);
            int i;
            --l_780;
            if (p_5)
                continue;
            l_791++;
        }
    }
    return (*l_486);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_8(uint64_t  p_9, int16_t  p_10, int16_t  p_11, uint64_t  p_12, uint32_t  p_13, struct S3 * p_802)
{ /* block id: 238 */
    uint16_t l_479 = 8UL;
    return l_479;
}


/* ------------------------------------------ */
/* 
 * reads : p_802->g_34 p_802->g_35 p_802->g_157 p_802->g_405 p_802->g_175 p_802->g_297 p_802->g_74 p_802->g_197 p_802->g_421 p_802->g_422 p_802->g_320.f5 p_802->g_428 p_802->g_62 p_802->g_439 p_802->g_84 p_802->g_85 p_802->g_472 p_802->g_475
 * writes: p_802->g_34 p_802->g_35 p_802->g_405 p_802->g_175 p_802->g_64 p_802->g_174 p_802->g_74 p_802->g_244
 */
uint16_t  func_22(uint32_t  p_23, int16_t  p_24, int64_t  p_25, int32_t  p_26, struct S1  p_27, struct S3 * p_802)
{ /* block id: 5 */
    struct S0 *l_473 = &p_802->g_439[3];
    VECTOR(int32_t, 2) l_476 = (VECTOR(int32_t, 2))((-1L), 0x7ECE2254L);
    int32_t *l_477 = &p_802->g_74;
    uint16_t l_478[8] = {0x9E98L,1UL,0x9E98L,0x9E98L,1UL,0x9E98L,0x9E98L,1UL};
    int i;
    for (p_25 = 0; (p_25 <= (-29)); p_25 = safe_sub_func_uint8_t_u_u(p_25, 6))
    { /* block id: 8 */
        uint8_t *l_33 = &p_802->g_34;
        (*p_802->g_472) = func_31((p_802->g_35 |= (((*l_33) |= p_23) || (FAKE_DIVERGE(p_802->global_2_offset, get_global_id(2), 10) || 255UL))), p_802);
    }
    (*p_802->g_475) = l_473;
    (*l_477) |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_476.yyyxxxyyyyyyxyyx)))).s4;
    (*l_477) = p_23;
    return l_478[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_802->g_28.f1 p_802->g_67 p_802->g_35 p_802->g_74 p_802->g_62 p_802->l_comm_values p_802->g_28.f0 p_802->g_84 p_802->g_85 p_802->g_97 p_802->g_115 p_802->g_28 p_802->g_131 p_802->g_34 p_802->g_103 p_802->g_163 p_802->g_157 p_802->g_174 p_802->g_164.f0 p_802->g_175 p_802->g_191 p_802->g_184 p_802->g_197 p_802->g_198 p_802->g_164 p_802->g_201 p_802->g_68 p_802->g_196 p_802->g_242 p_802->g_244 p_802->g_94 p_802->g_287 p_802->g_292 p_802->g_295 p_802->g_297 p_802->g_299 p_802->g_300 p_802->g_302 p_802->g_320 p_802->g_405 p_802->g_64 p_802->g_421 p_802->g_422 p_802->g_428 p_802->g_439
 * writes: p_802->g_62 p_802->g_64 p_802->g_74 p_802->g_84 p_802->g_94 p_802->g_97 p_802->g_115 p_802->g_144 p_802->g_103 p_802->g_164 p_802->g_174 p_802->g_85 p_802->g_184 p_802->g_191 p_802->g_195 p_802->g_196 p_802->g_201 p_802->g_34 p_802->g_28 p_802->g_244 p_802->g_175 p_802->g_320.f2 p_802->g_320.f9 p_802->g_320.f6 p_802->g_131 p_802->g_405
 */
int32_t * func_31(int32_t  p_32, struct S3 * p_802)
{ /* block id: 11 */
    VECTOR(int32_t, 4) l_38 = (VECTOR(int32_t, 4))(0x3A62AEAAL, (VECTOR(int32_t, 2))(0x3A62AEAAL, 0x66A3F393L), 0x66A3F393L);
    int32_t *l_79 = (void*)0;
    uint16_t *l_190[1];
    uint8_t *l_192 = &p_802->g_34;
    int32_t l_200 = 1L;
    struct S2 l_390[9][9][3] = {{{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}}},{{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}}},{{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}}},{{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}}},{{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}}},{{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}}},{{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}}},{{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}}},{{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}},{{1L},{9L},{-1L}}}};
    int32_t *l_408 = &p_802->g_175;
    VECTOR(int8_t, 2) l_414 = (VECTOR(int8_t, 2))(0x55L, 0x29L);
    uint64_t **l_425[4][5] = {{&p_802->g_84,(void*)0,&p_802->g_84,(void*)0,&p_802->g_84},{&p_802->g_84,(void*)0,&p_802->g_84,(void*)0,&p_802->g_84},{&p_802->g_84,(void*)0,&p_802->g_84,(void*)0,&p_802->g_84},{&p_802->g_84,(void*)0,&p_802->g_84,(void*)0,&p_802->g_84}};
    struct S1 **l_454 = &p_802->g_196;
    int32_t l_468 = (-1L);
    uint64_t l_469 = 18446744073709551611UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_190[i] = &p_802->g_191;
    p_802->g_405 ^= ((safe_lshift_func_int8_t_s_s((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(l_38.xzyw)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x6FA727D4L)))), ((VECTOR(int32_t, 16))(0L, func_39(l_38.y, func_45(func_51((((!func_54(p_802->g_28[4][9][1].f1, p_802)) || (p_802->l_comm_values[(safe_mod_func_uint32_t_u_u(p_802->tid, 184))] >= (p_32 >= p_802->l_comm_values[(safe_mod_func_uint32_t_u_u(p_802->tid, 184))]))) <= (p_802->g_191 ^= (~(func_77(l_79, p_802) | (safe_mul_func_int8_t_s_s(p_32, p_802->g_175)))))), l_192, p_802), l_38.w, &p_802->g_34, l_200, &p_802->g_175, p_802), p_802->g_157.z, l_390[2][5][2], p_32, p_802), p_32, 0L, l_390[2][5][2].f0, 0x49BAD742L, 0x1CD8FEF0L, ((VECTOR(int32_t, 8))(0x48EB3D8EL)), 0x47B15956L)).sac, ((VECTOR(int32_t, 2))(8L))))), 0L, 0L)), ((VECTOR(int32_t, 4))(0x5CD86355L))))).lo, ((VECTOR(int32_t, 2))(0x27907BECL))))).xyxxyxxx)).s1 < p_32), 4)) >= p_802->g_157.z);
    (*l_408) = (1L < (safe_mul_func_uint16_t_u_u(0xF985L, (p_802->g_175 != p_802->g_297.y))));
    for (p_802->g_64 = (-17); (p_802->g_64 > 15); p_802->g_64 = safe_add_func_int8_t_s_s(p_802->g_64, 4))
    { /* block id: 210 */
        int64_t l_413 = 1L;
        int64_t l_420 = 0x3E0649A8FA3EC8E2L;
        int32_t **l_424 = (void*)0;
        uint64_t **l_426 = (void*)0;
        int32_t **l_444[5];
        int32_t l_447 = 0x57FA0060L;
        int i;
        for (i = 0; i < 5; i++)
            l_444[i] = &l_79;
        p_32 = (((safe_rshift_func_uint8_t_u_u(((*l_192) = l_413), p_802->g_74)) != ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 4))(l_414.xyyy)).even))).lo) , (safe_sub_func_int8_t_s_s(((safe_unary_minus_func_int32_t_s(l_413)) ^ (safe_add_func_int32_t_s_s(l_420, (l_190[0] == (void*)0)))), ((((p_802->g_197.sb == ((p_802->g_421 , p_802->g_422) != l_424)) != p_802->g_320.f5) , l_425[1][3]) != l_426))));
        (*p_802->g_428) = l_408;
        for (p_32 = (-5); (p_32 == 25); ++p_32)
        { /* block id: 216 */
            int32_t *l_431[1][2][1];
            uint16_t l_432 = 1UL;
            int32_t **l_446 = &l_431[0][0][0];
            int32_t ***l_445 = &l_446;
            uint16_t l_461 = 0xD2ADL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_431[i][j][k] = &p_802->g_287;
                }
            }
            --l_432;
            p_802->g_74 &= (safe_mul_func_int8_t_s_s(p_802->g_62, (safe_sub_func_int64_t_s_s((p_802->g_439[0] , (safe_add_func_uint8_t_u_u(p_802->g_439[0].f1, (safe_add_func_int64_t_s_s((((VECTOR(int8_t, 2))(0x10L, 0L)).odd > 0UL), ((((p_802->g_175 , l_444[2]) == l_444[4]) == (((l_444[2] != ((*l_445) = &p_802->g_174)) , l_447) == p_32)) & (*p_802->g_84))))))), 18446744073709551615UL))));
            l_79 = ((**l_445) = l_79);
        }
        return l_79;
    }
    for (p_802->g_64 = 0; (p_802->g_64 < 40); p_802->g_64 = safe_add_func_int8_t_s_s(p_802->g_64, 3))
    { /* block id: 228 */
        int32_t *l_464[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int16_t l_465 = 0x3ADCL;
        int16_t l_466[6][8] = {{(-8L),0x0497L,0x450EL,0x0497L,(-8L),(-8L),0x0497L,0x450EL},{(-8L),0x0497L,0x450EL,0x0497L,(-8L),(-8L),0x0497L,0x450EL},{(-8L),0x0497L,0x450EL,0x0497L,(-8L),(-8L),0x0497L,0x450EL},{(-8L),0x0497L,0x450EL,0x0497L,(-8L),(-8L),0x0497L,0x450EL},{(-8L),0x0497L,0x450EL,0x0497L,(-8L),(-8L),0x0497L,0x450EL},{(-8L),0x0497L,0x450EL,0x0497L,(-8L),(-8L),0x0497L,0x450EL}};
        int8_t l_467 = 7L;
        int i, j;
        l_469--;
    }
    return l_79;
}


/* ------------------------------------------ */
/* 
 * reads : p_802->g_68 p_802->g_74 p_802->g_201.f5 p_802->g_84 p_802->g_85
 * writes: p_802->g_131 p_802->g_74 p_802->g_184.f1 p_802->g_175
 */
int32_t  func_39(int16_t  p_40, int32_t * p_41, uint8_t  p_42, struct S2  p_43, uint32_t  p_44, struct S3 * p_802)
{ /* block id: 200 */
    uint16_t *l_395[4][10][4] = {{{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0}},{{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0}},{{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0}},{{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0},{&p_802->g_191,&p_802->g_191,(void*)0,(void*)0}}};
    VECTOR(int32_t, 8) l_396 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
    int32_t *l_397 = &p_802->g_74;
    VECTOR(uint32_t, 2) l_398 = (VECTOR(uint32_t, 2))(0x7D676781L, 0x15E4B4ADL);
    uint8_t *l_399 = &p_802->g_34;
    int64_t *l_404 = &p_802->g_184.f1;
    int i, j, k;
    p_802->g_175 = (((*l_404) = (18446744073709551608UL < ((((*l_397) &= ((VECTOR(int32_t, 8))(2L, 1L, (safe_rshift_func_uint16_t_u_u((p_802->g_131.s7 = p_802->g_68[0][5]), 0)), 4L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_396.s40)))))).xxxx)))))).s6) , (((&p_802->g_221 != (((VECTOR(uint32_t, 4))((&p_41 != (void*)0), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_398.xy)))), 0x33B79132L)).z , l_399)) & 0x4B0FB3D9143CAA63L) >= ((safe_mod_func_int8_t_s_s((((safe_sub_func_int64_t_s_s((~((void*)0 != &p_802->g_191)), p_802->g_201.f5)) && 5L) <= (*l_397)), (*l_397))) , 0x2ECD31ADL))) >= p_44))) & (*p_802->g_84));
    return (*l_397);
}


/* ------------------------------------------ */
/* 
 * reads : p_802->g_201 p_802->g_34 p_802->g_67 p_802->g_68 p_802->g_74 p_802->g_164.f0 p_802->g_196 p_802->g_97 p_802->g_242 p_802->g_244 p_802->g_184.f0 p_802->g_175 p_802->g_84 p_802->g_94 p_802->g_85 p_802->g_287 p_802->g_292 p_802->g_295 p_802->g_297 p_802->g_299 p_802->g_300 p_802->g_302 p_802->g_131 p_802->g_320
 * writes: p_802->g_201 p_802->g_34 p_802->g_97 p_802->g_74 p_802->g_28 p_802->g_244 p_802->g_175 p_802->g_85 p_802->g_164.f0 p_802->g_94 p_802->g_320.f2 p_802->g_320.f9 p_802->g_320.f6
 */
int32_t * func_45(struct S2  p_46, int32_t  p_47, uint8_t * p_48, int32_t  p_49, int32_t * p_50, struct S3 * p_802)
{ /* block id: 79 */
    volatile struct S0 *l_202 = &p_802->g_201;
    uint16_t *l_203 = (void*)0;
    uint8_t *l_220[8] = {&p_802->g_221,&p_802->g_221,&p_802->g_221,&p_802->g_221,&p_802->g_221,&p_802->g_221,&p_802->g_221,&p_802->g_221};
    uint32_t l_234 = 0x727C7D68L;
    int32_t l_236 = 0x7A357FC2L;
    VECTOR(uint64_t, 8) l_262 = (VECTOR(uint64_t, 8))(0x44EF900D369DB5FAL, (VECTOR(uint64_t, 4))(0x44EF900D369DB5FAL, (VECTOR(uint64_t, 2))(0x44EF900D369DB5FAL, 0x2D60C34C6CB840C2L), 0x2D60C34C6CB840C2L), 0x2D60C34C6CB840C2L, 0x44EF900D369DB5FAL, 0x2D60C34C6CB840C2L);
    uint32_t l_290 = 0x10BEBC1DL;
    VECTOR(uint8_t, 4) l_294 = (VECTOR(uint8_t, 4))(0x43L, (VECTOR(uint8_t, 2))(0x43L, 0x95L), 0x95L);
    int16_t l_305 = 0x34A7L;
    int32_t l_310[9][1][8] = {{{1L,(-1L),0L,1L,0x47A8667EL,0L,0L,0x47A8667EL}},{{1L,(-1L),0L,1L,0x47A8667EL,0L,0L,0x47A8667EL}},{{1L,(-1L),0L,1L,0x47A8667EL,0L,0L,0x47A8667EL}},{{1L,(-1L),0L,1L,0x47A8667EL,0L,0L,0x47A8667EL}},{{1L,(-1L),0L,1L,0x47A8667EL,0L,0L,0x47A8667EL}},{{1L,(-1L),0L,1L,0x47A8667EL,0L,0L,0x47A8667EL}},{{1L,(-1L),0L,1L,0x47A8667EL,0L,0L,0x47A8667EL}},{{1L,(-1L),0L,1L,0x47A8667EL,0L,0L,0x47A8667EL}},{{1L,(-1L),0L,1L,0x47A8667EL,0L,0L,0x47A8667EL}}};
    int64_t l_313 = 9L;
    uint32_t l_314[6][2];
    uint64_t l_317 = 6UL;
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
            l_314[i][j] = 1UL;
    }
    (*l_202) = p_802->g_201;
    if ((l_203 != (void*)0))
    { /* block id: 81 */
        VECTOR(int32_t, 4) l_226 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x27CD6940L), 0x27CD6940L);
        int32_t *l_227 = (void*)0;
        int32_t *l_228 = &p_802->g_74;
        int32_t *l_235[5][1];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
                l_235[i][j] = &p_802->g_175;
        }
        p_50 = (void*)0;
        l_236 &= (safe_sub_func_uint8_t_u_u((++(*p_48)), (safe_sub_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((p_46.f0 || (*p_802->g_67)) || (safe_add_func_int32_t_s_s(((safe_mod_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((0x5573L <= (((void*)0 != l_220[3]) && ((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(0x594EB290L, (((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_226.ywzyywzy)).s20, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(1L, ((p_802->g_97 = p_46.f0) , ((*l_228) = 0L)), 0x059488B6L, ((safe_unary_minus_func_uint8_t_u((safe_mod_func_int32_t_s_s((safe_mul_func_uint16_t_u_u(0x0D06L, 0x4265L)), p_802->g_201.f7)))) && p_49), l_234, ((VECTOR(int32_t, 8))(0x069C654EL)), 0x0886D678L, 0L, (-5L))), ((VECTOR(int32_t, 16))(0x2DE6C3C6L))))).s1f))), 0L, ((VECTOR(int32_t, 2))(0x0F6C8B6CL)), l_234, 0L, (*l_228), 0L, (*l_228), (*l_228), 0x3A9CE76EL, ((VECTOR(int32_t, 2))((-8L))), 4L, (-1L))).s5d, ((VECTOR(int32_t, 2))((-8L)))))).even != p_802->g_164.f0))), 0x32L)) , 0x5611FC3B9E47FB7FL))), 0xFF41B109L)), FAKE_DIVERGE(p_802->global_1_offset, get_global_id(1), 10))), p_802->g_164.f0)) , p_49), 4294967290UL))), l_234)), p_49))));
    }
    else
    { /* block id: 87 */
        struct S1 l_239[3][5] = {{{-1L,0x3E79B4AD3666B9C2L},{0x05F721C33C2831B3L,0x3DE1A9D19148B376L},{1L,0x417FE3D772521209L},{0x05F721C33C2831B3L,0x3DE1A9D19148B376L},{-1L,0x3E79B4AD3666B9C2L}},{{-1L,0x3E79B4AD3666B9C2L},{0x05F721C33C2831B3L,0x3DE1A9D19148B376L},{1L,0x417FE3D772521209L},{0x05F721C33C2831B3L,0x3DE1A9D19148B376L},{-1L,0x3E79B4AD3666B9C2L}},{{-1L,0x3E79B4AD3666B9C2L},{0x05F721C33C2831B3L,0x3DE1A9D19148B376L},{1L,0x417FE3D772521209L},{0x05F721C33C2831B3L,0x3DE1A9D19148B376L},{-1L,0x3E79B4AD3666B9C2L}}};
        int32_t l_255 = 1L;
        VECTOR(int64_t, 16) l_258 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x5FA9E28F9168C6D5L), 0x5FA9E28F9168C6D5L), 0x5FA9E28F9168C6D5L, (-1L), 0x5FA9E28F9168C6D5L, (VECTOR(int64_t, 2))((-1L), 0x5FA9E28F9168C6D5L), (VECTOR(int64_t, 2))((-1L), 0x5FA9E28F9168C6D5L), (-1L), 0x5FA9E28F9168C6D5L, (-1L), 0x5FA9E28F9168C6D5L);
        VECTOR(uint16_t, 4) l_298 = (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0xA225L), 0xA225L);
        int32_t l_311 = 1L;
        int32_t l_312[9][2][1] = {{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}},{{1L},{1L}}};
        int i, j, k;
        for (p_47 = (-13); (p_47 == (-15)); p_47--)
        { /* block id: 90 */
            VECTOR(int32_t, 2) l_243 = (VECTOR(int32_t, 2))(0x77DE8538L, (-1L));
            VECTOR(uint16_t, 4) l_301 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x17D5L), 0x17D5L);
            int32_t *l_325 = &p_802->g_287;
            int i;
            (*p_802->g_196) = l_239[1][3];
            for (p_802->g_97 = 28; (p_802->g_97 < (-2)); p_802->g_97--)
            { /* block id: 94 */
                uint64_t l_250 = 0xBF1FA647FE29E462L;
                int32_t l_251[8] = {0x7A8616AAL,0x7A8616AAL,0x7A8616AAL,0x7A8616AAL,0x7A8616AAL,0x7A8616AAL,0x7A8616AAL,0x7A8616AAL};
                uint16_t l_259[6] = {3UL,0xE488L,3UL,3UL,0xE488L,3UL};
                VECTOR(uint8_t, 4) l_291 = (VECTOR(uint8_t, 4))(0xCAL, (VECTOR(uint8_t, 2))(0xCAL, 0xD6L), 0xD6L);
                VECTOR(uint8_t, 2) l_296 = (VECTOR(uint8_t, 2))(4UL, 0x35L);
                int i;
                if ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(p_802->g_242.yywwywxxzzzwwwyz)), ((VECTOR(int32_t, 16))(l_243.yyxxyyyxxyxxyxxx))))).odd)).s6 ^ 0L))
                { /* block id: 95 */
                    struct S0 **l_245 = &p_802->g_244;
                    struct S0 *l_247 = (void*)0;
                    struct S0 **l_246 = &l_247;
                    int32_t *l_252 = &p_802->g_175;
                    int32_t l_253 = (-2L);
                    int32_t *l_254 = (void*)0;
                    int32_t l_256[6][9][4] = {{{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL}},{{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL}},{{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL}},{{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL}},{{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL}},{{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL},{0x470D1F23L,5L,(-6L),0x6C3A34BAL}}};
                    int32_t *l_257[1][3];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_257[i][j] = &p_802->g_74;
                    }
                    (*l_246) = ((*l_245) = p_802->g_244);
                    (*p_50) ^= (safe_mod_func_int64_t_s_s(p_802->g_184.f0, (l_250 && (l_251[5] = p_802->g_164.f0))));
                    l_259[3]++;
                }
                else
                { /* block id: 101 */
                    (*p_50) = (1UL > ((*p_802->g_84) = ((VECTOR(uint64_t, 4))(l_262.s6422)).x));
                }
                for (l_236 = 0; (l_236 <= 3); l_236 = safe_add_func_uint16_t_u_u(l_236, 1))
                { /* block id: 107 */
                    for (p_802->g_164.f0 = 0; (p_802->g_164.f0 >= (-6)); p_802->g_164.f0--)
                    { /* block id: 110 */
                        return &p_802->g_175;
                    }
                    (*p_50) = 1L;
                    return &p_802->g_175;
                }
                for (p_802->g_94 = 14; (p_802->g_94 != (-2)); p_802->g_94 = safe_sub_func_int8_t_s_s(p_802->g_94, 2))
                { /* block id: 118 */
                    uint16_t *l_269 = &l_259[1];
                    int32_t l_282[4][4][9] = {{{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L},{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L},{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L},{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L}},{{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L},{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L},{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L},{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L}},{{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L},{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L},{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L},{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L}},{{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L},{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L},{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L},{0x44D78A4AL,9L,(-2L),(-1L),(-2L),9L,0x44D78A4AL,4L,0x7FB4F049L}}};
                    uint16_t **l_322 = (void*)0;
                    int i, j, k;
                    if ((((*l_269) &= p_46.f0) , (safe_div_func_int16_t_s_s(p_802->g_201.f2, p_802->g_85))))
                    { /* block id: 120 */
                        VECTOR(uint8_t, 2) l_293 = (VECTOR(uint8_t, 2))(0x90L, 0UL);
                        int32_t l_306 = 0x353D7DBFL;
                        int32_t *l_307 = &p_802->g_74;
                        int32_t *l_308 = &l_282[0][3][8];
                        int32_t *l_309[9][4] = {{&p_802->g_74,&l_282[0][1][1],&p_802->g_74,&p_802->g_74},{&p_802->g_74,&l_282[0][1][1],&p_802->g_74,&p_802->g_74},{&p_802->g_74,&l_282[0][1][1],&p_802->g_74,&p_802->g_74},{&p_802->g_74,&l_282[0][1][1],&p_802->g_74,&p_802->g_74},{&p_802->g_74,&l_282[0][1][1],&p_802->g_74,&p_802->g_74},{&p_802->g_74,&l_282[0][1][1],&p_802->g_74,&p_802->g_74},{&p_802->g_74,&l_282[0][1][1],&p_802->g_74,&p_802->g_74},{&p_802->g_74,&l_282[0][1][1],&p_802->g_74,&p_802->g_74},{&p_802->g_74,&l_282[0][1][1],&p_802->g_74,&p_802->g_74}};
                        int i, j;
                        (*p_50) &= (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(((((*l_269) = ((safe_div_func_int32_t_s_s((+l_282[0][1][1]), (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 16))(0x12L, 0L, (safe_mul_func_uint16_t_u_u(p_802->g_201.f0, (p_802->g_287 & ((safe_mod_func_int16_t_s_s(0x07EDL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 4))(((l_290 = (&p_802->g_84 == (void*)0)) < ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 16))(0xDDACL, ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_291.xyxyxxzy)).s43)).xxyy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 4))(p_802->g_292.s1217)).even, ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 16))(l_293.yxyxxyxxyxxxyxyy)).sab, ((VECTOR(uint8_t, 2))(l_294.xy)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_802->g_295.xxxy)))).even))), ((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 4))(l_296.xxyx)).xzxyyzwx))).s62))))).yxxy))), ((VECTOR(uint8_t, 8))(p_802->g_297.xxyyxyyy)).odd))), ((VECTOR(uint16_t, 2))(0UL, 65535UL)), 0xD4C0L, ((VECTOR(uint16_t, 4))(l_298.wzzx)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 4))(p_802->g_299.s7521)).zwzzwxyw, ((VECTOR(uint16_t, 2))(p_802->g_300.xz)).yxxxxyxx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_301.yyyywwwzywwxyzxw)))).odd))).s7014126172767331, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 2))(65535UL, 1UL)).yxyyxxyyxyyyxxxy, ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 4))(p_802->g_302.xyxy)).zxyxwyzzyxxyxzyy, ((VECTOR(uint16_t, 8))((safe_add_func_uint32_t_u_u((l_251[5] = 4UL), (l_294.y ^ p_49))), 1UL, ((VECTOR(uint16_t, 2))(65529UL)), 0x9C42L, ((VECTOR(uint16_t, 2))(0xE0E9L)), 0UL)).s0603745646564743)))))).s9, l_293.y, 1UL, p_802->g_131.s0, 65535UL, 0x4585L, 65532UL, 0UL)).hi)).zxxwyzxywwwzzxzw))).sfba9, ((VECTOR(uint16_t, 4))(0x04A2L))))))))).sa40a, ((VECTOR(uint16_t, 4))(0x4742L))))).wwxzwwyx)))).s4), ((VECTOR(uint8_t, 2))(0xF4L)), 0x7EL)), ((VECTOR(uint8_t, 4))(1UL))))).wwyzzwwx))).hi, ((VECTOR(uint8_t, 4))(0x7FL))))).odd)).hi)) != p_802->g_287)))), ((VECTOR(int8_t, 2))(0x46L)), l_262.s2, ((VECTOR(int8_t, 4))(0x4CL)), ((VECTOR(int8_t, 4))(0x25L)), 0x5BL, 5L)), ((VECTOR(int8_t, 16))(0x56L))))).lo)).even)).w, 8UL)))) != FAKE_DIVERGE(p_802->local_0_offset, get_local_id(0), 10))) >= 0UL) & 1UL), 0x2355L)) , GROUP_DIVERGE(2, 1)), 6)) > l_262.s2), (*p_48)));
                        l_314[5][0]++;
                        l_317++;
                    }
                    else
                    { /* block id: 127 */
                        uint16_t **l_321[8][9] = {{(void*)0,&l_269,&l_203,&l_269,&l_203,(void*)0,&l_269,&l_203,&l_269},{(void*)0,&l_269,&l_203,&l_269,&l_203,(void*)0,&l_269,&l_203,&l_269},{(void*)0,&l_269,&l_203,&l_269,&l_203,(void*)0,&l_269,&l_203,&l_269},{(void*)0,&l_269,&l_203,&l_269,&l_203,(void*)0,&l_269,&l_203,&l_269},{(void*)0,&l_269,&l_203,&l_269,&l_203,(void*)0,&l_269,&l_203,&l_269},{(void*)0,&l_269,&l_203,&l_269,&l_203,(void*)0,&l_269,&l_203,&l_269},{(void*)0,&l_269,&l_203,&l_269,&l_203,(void*)0,&l_269,&l_203,&l_269},{(void*)0,&l_269,&l_203,&l_269,&l_203,(void*)0,&l_269,&l_203,&l_269}};
                        int i, j;
                        (*l_202) = p_802->g_320;
                        l_322 = l_321[3][5];
                    }
                }
            }
            for (p_802->g_320.f2 = (-12); (p_802->g_320.f2 != 19); p_802->g_320.f2 = safe_add_func_uint16_t_u_u(p_802->g_320.f2, 1))
            { /* block id: 135 */
                return l_325;
            }
            return &p_802->g_175;
        }
        for (p_802->g_320.f9 = 0; (p_802->g_320.f9 >= 55); p_802->g_320.f9++)
        { /* block id: 142 */
            if ((atomic_inc(&p_802->l_atomic_input[24]) == 9))
            { /* block id: 144 */
                uint8_t l_328[8][6][4] = {{{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL}},{{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL}},{{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL}},{{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL}},{{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL}},{{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL}},{{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL}},{{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL},{0x8BL,7UL,0UL,0x0EL}}};
                VECTOR(int32_t, 16) l_329 = (VECTOR(int32_t, 16))(0x558151DAL, (VECTOR(int32_t, 4))(0x558151DAL, (VECTOR(int32_t, 2))(0x558151DAL, 0x075BA367L), 0x075BA367L), 0x075BA367L, 0x558151DAL, 0x075BA367L, (VECTOR(int32_t, 2))(0x558151DAL, 0x075BA367L), (VECTOR(int32_t, 2))(0x558151DAL, 0x075BA367L), 0x558151DAL, 0x075BA367L, 0x558151DAL, 0x075BA367L);
                int16_t l_330 = 0x3761L;
                int32_t l_331[2];
                int32_t l_332 = 0x653A58A4L;
                int32_t l_333 = 0x67F310B0L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_331[i] = 0x57407234L;
                if ((l_333 = (l_328[6][4][1] , (l_332 = (l_331[1] = ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_329.sd935b766)).even)).zwyxxxyzyxwyyxxy, (int32_t)(l_330 &= 0x3AF5F59FL)))).sa)))))
                { /* block id: 149 */
                    int16_t l_359 = 0x1261L;
                    int64_t l_360 = 0x4B0F280353BE89B8L;
                    int32_t l_361[7][10][3] = {{{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)}},{{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)}},{{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)}},{{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)}},{{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)}},{{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)}},{{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)},{0x345986C8L,0x56071C26L,(-1L)}}};
                    uint64_t l_362 = 1UL;
                    VECTOR(int32_t, 2) l_365 = (VECTOR(int32_t, 2))(0x5606F1CAL, 0x2804D15FL);
                    int i, j, k;
                    if ((FAKE_DIVERGE(p_802->local_2_offset, get_local_id(2), 10) , ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x05464383L, (-1L))).yyxxyyxx)))).s61))).odd))
                    { /* block id: 150 */
                        int32_t l_335 = 7L;
                        int32_t *l_334 = &l_335;
                        int32_t *l_336 = &l_335;
                        int32_t *l_337 = &l_335;
                        int32_t *l_338 = (void*)0;
                        uint32_t l_339 = 4294967295UL;
                        struct S0 l_341 = {0x00C2D0E3AA609C20L,-1L,0x1AB683EAA215559AL,0L,4294967295UL,0x17C7L,0x2B2A7206L,1L,0xEC580D712672F7EDL,0x5A35L};/* VOLATILE GLOBAL l_341 */
                        struct S0 *l_340 = &l_341;
                        struct S0 *l_342 = &l_341;
                        int32_t l_343 = 0x26F677F3L;
                        struct S0 l_344 = {0xC98DB7E6CE024D8DL,0L,4L,0x0ED9C10AL,0x0B7F6A0DL,0x4FEDL,1L,-9L,1UL,65535UL};/* VOLATILE GLOBAL l_344 */
                        struct S2 l_345 = {0L};
                        VECTOR(int32_t, 4) l_346 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x1FCE235AL), 0x1FCE235AL);
                        uint64_t l_347 = 0UL;
                        VECTOR(int32_t, 16) l_348 = (VECTOR(int32_t, 16))(0x0A1C8D3CL, (VECTOR(int32_t, 4))(0x0A1C8D3CL, (VECTOR(int32_t, 2))(0x0A1C8D3CL, 0x2B178EFFL), 0x2B178EFFL), 0x2B178EFFL, 0x0A1C8D3CL, 0x2B178EFFL, (VECTOR(int32_t, 2))(0x0A1C8D3CL, 0x2B178EFFL), (VECTOR(int32_t, 2))(0x0A1C8D3CL, 0x2B178EFFL), 0x0A1C8D3CL, 0x2B178EFFL, 0x0A1C8D3CL, 0x2B178EFFL);
                        VECTOR(int32_t, 8) l_349 = (VECTOR(int32_t, 8))(0x58BCC475L, (VECTOR(int32_t, 4))(0x58BCC475L, (VECTOR(int32_t, 2))(0x58BCC475L, 0L), 0L), 0L, 0x58BCC475L, 0L);
                        int i;
                        l_338 = (l_337 = (l_336 = (l_334 = (void*)0)));
                        l_331[1] = (l_329.se = (l_333 = l_339));
                        l_342 = l_340;
                        l_329.sa ^= (((l_343 , l_344) , l_345) , ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_346.yxyz)).y, l_347, 0x346340EBL, 0x651C0ADAL)))).wxyzzzywzwxzxywx)).hi, (int32_t)((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_348.s58)), 0L, 1L)).z, (int32_t)((VECTOR(int32_t, 8))(l_349.s13034171)).s3))).s7);
                    }
                    else
                    { /* block id: 160 */
                        uint32_t l_350[1];
                        int32_t l_353 = 0x3FCFD2FAL;
                        int32_t *l_352[9] = {&l_353,&l_353,&l_353,&l_353,&l_353,&l_353,&l_353,&l_353,&l_353};
                        int32_t **l_351[2][10][3] = {{{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]}},{{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]},{(void*)0,&l_352[2],&l_352[2]}}};
                        int32_t l_355 = 0x4854F9FEL;
                        int32_t *l_354[2][2] = {{&l_355,&l_355},{&l_355,&l_355}};
                        int32_t *l_356 = &l_355;
                        struct S1 l_357 = {-1L,-2L};
                        struct S1 l_358 = {0x00B663D698779842L,0x37630A4816604D0BL};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_350[i] = 0x345E8C4AL;
                        l_331[1] |= l_350[0];
                        l_351[0][1][2] = (void*)0;
                        l_356 = (l_354[1][0] = (void*)0);
                        l_358 = l_357;
                    }
                    l_362--;
                    l_331[1] = 0x3D10FB34L;
                    if (((VECTOR(int32_t, 2))(l_365.yy)).hi)
                    { /* block id: 169 */
                        int32_t *l_366 = (void*)0;
                        int32_t l_367 = 0x18F53B95L;
                        int32_t *l_368 = &l_367;
                        VECTOR(int32_t, 8) l_369 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x6F7C4428L), 0x6F7C4428L), 0x6F7C4428L, 8L, 0x6F7C4428L);
                        VECTOR(int32_t, 8) l_370 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x6A81C7F7L), 0x6A81C7F7L), 0x6A81C7F7L, 7L, 0x6A81C7F7L);
                        VECTOR(int32_t, 4) l_371 = (VECTOR(int32_t, 4))(0x193599F1L, (VECTOR(int32_t, 2))(0x193599F1L, (-1L)), (-1L));
                        VECTOR(int32_t, 16) l_372 = (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x6A82A8CCL), 0x6A82A8CCL), 0x6A82A8CCL, 7L, 0x6A82A8CCL, (VECTOR(int32_t, 2))(7L, 0x6A82A8CCL), (VECTOR(int32_t, 2))(7L, 0x6A82A8CCL), 7L, 0x6A82A8CCL, 7L, 0x6A82A8CCL);
                        VECTOR(int32_t, 4) l_373 = (VECTOR(int32_t, 4))(0x0FA24995L, (VECTOR(int32_t, 2))(0x0FA24995L, 0x28E84D58L), 0x28E84D58L);
                        VECTOR(int32_t, 8) l_374 = (VECTOR(int32_t, 8))(0x5C8AC8BCL, (VECTOR(int32_t, 4))(0x5C8AC8BCL, (VECTOR(int32_t, 2))(0x5C8AC8BCL, 1L), 1L), 1L, 0x5C8AC8BCL, 1L);
                        VECTOR(int32_t, 8) l_375 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                        VECTOR(int32_t, 4) l_376 = (VECTOR(int32_t, 4))(0x4D01495BL, (VECTOR(int32_t, 2))(0x4D01495BL, 1L), 1L);
                        uint32_t l_377 = 4294967291UL;
                        int i;
                        l_366 = l_366;
                        l_368 = ((l_367 , 0xB7436B2FL) , (void*)0);
                        l_365.x &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_369.s00430773)).s66, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_370.s43074361)).s7326502762644770, ((VECTOR(int32_t, 8))(0x421646DAL, ((VECTOR(int32_t, 4))(l_371.xwwz)), 0x5B4CC59FL, 0x56DA98D1L, 1L)).s4712012744640625, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_372.sef)).xxyyxxyx)).s2711403476616653))).s35d4, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 0x228F0CC3L)), 0x33DD5F45L, (-7L)))))).yzywzzxxxyywxyyz)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(l_373.xyxywwxx)).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_374.s0545)).xzzwzywx)).lo))))))).hi)).yyxxxxyyxyxxxyxy))).s21, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_375.s63755356)).s3574721472454607)).sc9))).yxxy, ((VECTOR(int32_t, 2))(l_376.zw)).xyyy))).even)))).xyxyxxyyxyyxyxxx)).s6;
                        l_329.sa = (l_365.y ^= l_377);
                    }
                    else
                    { /* block id: 175 */
                        int32_t l_378 = 1L;
                        int16_t l_379 = (-1L);
                        int32_t l_381 = 0x01E435D6L;
                        int32_t *l_380[4][9] = {{&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381},{&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381},{&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381},{&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381,&l_381}};
                        int32_t *l_382 = &l_381;
                        int i, j;
                        l_379 = l_378;
                        l_382 = l_380[1][3];
                    }
                }
                else
                { /* block id: 179 */
                    uint32_t l_383 = 9UL;
                    l_331[1] = l_383;
                }
                unsigned int result = 0;
                int l_328_i0, l_328_i1, l_328_i2;
                for (l_328_i0 = 0; l_328_i0 < 8; l_328_i0++) {
                    for (l_328_i1 = 0; l_328_i1 < 6; l_328_i1++) {
                        for (l_328_i2 = 0; l_328_i2 < 4; l_328_i2++) {
                            result += l_328[l_328_i0][l_328_i1][l_328_i2];
                        }
                    }
                }
                result += l_329.sf;
                result += l_329.se;
                result += l_329.sd;
                result += l_329.sc;
                result += l_329.sb;
                result += l_329.sa;
                result += l_329.s9;
                result += l_329.s8;
                result += l_329.s7;
                result += l_329.s6;
                result += l_329.s5;
                result += l_329.s4;
                result += l_329.s3;
                result += l_329.s2;
                result += l_329.s1;
                result += l_329.s0;
                result += l_330;
                int l_331_i0;
                for (l_331_i0 = 0; l_331_i0 < 2; l_331_i0++) {
                    result += l_331[l_331_i0];
                }
                result += l_332;
                result += l_333;
                atomic_add(&p_802->l_special_values[24], result);
            }
            else
            { /* block id: 182 */
                (1 + 1);
            }
        }
    }
    for (p_802->g_97 = (-7); (p_802->g_97 >= 24); p_802->g_97 = safe_add_func_uint16_t_u_u(p_802->g_97, 1))
    { /* block id: 189 */
        struct S1 l_386 = {0L,0x78E7ED49D877F1F5L};
        int32_t *l_389 = &p_802->g_320.f6;
        (*p_802->g_196) = l_386;
        if (l_262.s4)
            break;
        for (l_386.f0 = 0; (l_386.f0 != 17); l_386.f0 = safe_add_func_uint16_t_u_u(l_386.f0, 1))
        { /* block id: 194 */
            return p_50;
        }
        (*l_389) = l_386.f1;
    }
    return &p_802->g_287;
}


/* ------------------------------------------ */
/* 
 * reads : p_802->g_184 p_802->g_197 p_802->g_198 p_802->g_163 p_802->g_164
 * writes: p_802->g_195 p_802->g_196
 */
struct S2  func_51(int32_t  p_52, uint8_t * p_53, struct S3 * p_802)
{ /* block id: 74 */
    struct S1 *l_193 = &p_802->g_184;
    struct S1 **l_194[6][1];
    VECTOR(int8_t, 2) l_199 = (VECTOR(int8_t, 2))(0x49L, 1L);
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_194[i][j] = (void*)0;
    }
    p_52 &= (((p_802->g_195[0][9] = l_193) == (p_802->g_184 , (p_802->g_196 = &p_802->g_28[2][9][0]))) && ((18446744073709551608UL != ((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 8))(p_802->g_197.sb9d8917a)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(p_802->g_198.s5113)))))).xxyzxxxx))).s7) == ((VECTOR(int8_t, 16))(l_199.yxxxxyyxxxxxyxxy)).s0));
    return (*p_802->g_163);
}


/* ------------------------------------------ */
/* 
 * reads : p_802->g_67 p_802->g_35 p_802->g_74 p_802->g_62
 * writes: p_802->g_62 p_802->g_64 p_802->g_74
 */
int8_t  func_54(uint32_t  p_55, struct S3 * p_802)
{ /* block id: 12 */
    struct S2 l_60 = {-8L};
    uint64_t *l_61 = &p_802->g_62;
    uint64_t *l_63 = &p_802->g_64;
    int32_t *l_73 = &p_802->g_74;
    (*l_73) |= ((((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((((*l_61) = (l_60 , 7UL)) > p_55) >= ((*l_63) = l_60.f0)), (safe_rshift_func_uint8_t_u_s(p_55, 2)))), l_60.f0)) | ((p_802->g_67 != l_63) == (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(p_55, p_802->g_35)), p_802->g_35)))) || p_55) < 1UL);
    return p_802->g_62;
}


/* ------------------------------------------ */
/* 
 * reads : p_802->g_28.f1 p_802->g_28.f0 p_802->g_84 p_802->g_85 p_802->l_comm_values p_802->g_97 p_802->g_115 p_802->g_28 p_802->g_131 p_802->g_34 p_802->g_103 p_802->g_163 p_802->g_157 p_802->g_174 p_802->g_164.f0
 * writes: p_802->g_84 p_802->g_94 p_802->g_97 p_802->g_115 p_802->g_144 p_802->g_103 p_802->g_164 p_802->g_174 p_802->g_85 p_802->g_184
 */
uint16_t  func_77(int32_t * p_78, struct S3 * p_802)
{ /* block id: 17 */
    uint64_t **l_86 = &p_802->g_84;
    VECTOR(int32_t, 2) l_89 = (VECTOR(int32_t, 2))(0x2AF5FA4EL, (-1L));
    uint64_t *l_90 = &p_802->g_85;
    struct S1 l_91[3][6] = {{{0x02C09428726DF7C8L,-4L},{0x28A685A1DF46D5B3L,0x3B1A02258E7943ECL},{0x19DE0AF01A523987L,0x78201C62F756BAA7L},{0x28A685A1DF46D5B3L,0x3B1A02258E7943ECL},{0x02C09428726DF7C8L,-4L},{0x02C09428726DF7C8L,-4L}},{{0x02C09428726DF7C8L,-4L},{0x28A685A1DF46D5B3L,0x3B1A02258E7943ECL},{0x19DE0AF01A523987L,0x78201C62F756BAA7L},{0x28A685A1DF46D5B3L,0x3B1A02258E7943ECL},{0x02C09428726DF7C8L,-4L},{0x02C09428726DF7C8L,-4L}},{{0x02C09428726DF7C8L,-4L},{0x28A685A1DF46D5B3L,0x3B1A02258E7943ECL},{0x19DE0AF01A523987L,0x78201C62F756BAA7L},{0x28A685A1DF46D5B3L,0x3B1A02258E7943ECL},{0x02C09428726DF7C8L,-4L},{0x02C09428726DF7C8L,-4L}}};
    int32_t l_92 = 0L;
    int16_t *l_93 = &p_802->g_94;
    int32_t l_95 = (-4L);
    int32_t *l_96 = &p_802->g_97;
    int16_t l_110 = 0x0FE6L;
    int32_t l_133 = 7L;
    VECTOR(uint16_t, 2) l_153 = (VECTOR(uint16_t, 2))(0xF4C6L, 0xC598L);
    int32_t l_167[8][7][4] = {{{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L}},{{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L}},{{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L}},{{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L}},{{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L}},{{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L}},{{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L}},{{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L},{0L,0x099AF815L,5L,0L}}};
    struct S2 *l_168[9][8][3] = {{{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0}},{{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0}},{{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0}},{{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0}},{{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0}},{{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0}},{{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0}},{{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0}},{{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0},{&p_802->g_164,&p_802->g_164,(void*)0}}};
    int32_t *l_170 = &p_802->g_97;
    int i, j, k;
    if (((((*l_96) &= (p_802->g_28[4][9][1].f1 | (((safe_rshift_func_int16_t_s_u(p_802->g_28[4][9][1].f0, 7)) > ((((((l_95 &= ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((*l_93) = (l_92 ^= ((safe_sub_func_int8_t_s_s(((((*l_86) = p_802->g_84) != &p_802->g_85) >= (safe_add_func_int32_t_s_s((0x36203765L < FAKE_DIVERGE(p_802->global_0_offset, get_global_id(0), 10)), l_89.x))), (+((void*)0 == l_90)))) , (l_91[2][2] , l_91[2][2].f0)))), l_89.x, 1L, ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 8))((-1L))), 0x3A19L)))).sa) < p_802->g_28[4][9][1].f1) | 1L) && 0x5111C09CC95D819CL) > p_802->g_85) < l_89.x)) ^ p_802->l_comm_values[(safe_mod_func_uint32_t_u_u(p_802->tid, 184))]))) , 3L) != 0x9036F656L))
    { /* block id: 23 */
        int32_t *l_98 = (void*)0;
        int32_t *l_99 = (void*)0;
        int32_t *l_100 = &l_95;
        (*l_100) = p_802->l_comm_values[(safe_mod_func_uint32_t_u_u(p_802->tid, 184))];
    }
    else
    { /* block id: 25 */
        int32_t *l_101 = &l_95;
        int32_t *l_102 = &l_92;
        int32_t *l_104 = &l_95;
        int32_t *l_105 = (void*)0;
        int32_t *l_106 = &l_92;
        int32_t l_107 = 0x328512A6L;
        int32_t *l_108 = &l_95;
        int32_t *l_109 = &l_107;
        int32_t *l_111 = (void*)0;
        int32_t *l_112 = &l_107;
        int32_t *l_113 = &l_107;
        int32_t *l_114[8] = {&l_107,&l_107,&l_107,&l_107,&l_107,&l_107,&l_107,&l_107};
        VECTOR(uint16_t, 16) l_132 = (VECTOR(uint16_t, 16))(0xC056L, (VECTOR(uint16_t, 4))(0xC056L, (VECTOR(uint16_t, 2))(0xC056L, 65530UL), 65530UL), 65530UL, 0xC056L, 65530UL, (VECTOR(uint16_t, 2))(0xC056L, 65530UL), (VECTOR(uint16_t, 2))(0xC056L, 65530UL), 0xC056L, 65530UL, 0xC056L, 65530UL);
        int16_t *l_136 = (void*)0;
        uint16_t *l_137 = &p_802->g_115;
        int i;
        ++p_802->g_115;
        for (l_95 = 0; (l_95 < (-17)); l_95 = safe_sub_func_uint32_t_u_u(l_95, 1))
        { /* block id: 29 */
            struct S2 l_120 = {0x48L};
            struct S2 *l_121 = (void*)0;
            struct S2 *l_122 = &l_120;
            (*l_122) = l_120;
        }
        l_133 ^= (p_802->g_28[4][9][1] , (((safe_lshift_func_int16_t_s_s((*l_112), 13)) > ((p_802->g_28[4][9][1].f1 || (((((*l_86) = (*l_86)) == &p_802->g_85) != (((safe_lshift_func_int16_t_s_u((((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((l_91[2][2].f1 & l_89.y) , ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 4))(p_802->g_131.s1470)).lo, ((VECTOR(uint16_t, 2))(l_132.s46))))).odd), 13)), (*l_108))) ^ ((FAKE_DIVERGE(p_802->local_1_offset, get_local_id(1), 10) < 0x190EECBCL) & 0xA5EF5FE06BF84ECCL)) & l_91[2][2].f0), 0)) > l_92) > 0x5A0541395CBCBC71L)) , (-1L))) , p_802->g_85)) , p_802->g_34));
        l_95 ^= ((safe_sub_func_int8_t_s_s((((*l_137) = ((void*)0 == l_136)) < 8UL), (((void*)0 != l_114[6]) , p_802->g_34))) > (safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(((l_91[0][2] , ((safe_mul_func_int16_t_s_s((p_802->g_103 = ((!((p_802->g_144 = &p_802->g_84) == &p_802->g_84)) , 6L)), p_802->g_28[4][9][1].f1)) != 0x62B3BEA07A3B2D89L)) > 1UL), l_89.x)), p_802->g_34)));
    }
    for (p_802->g_103 = 14; (p_802->g_103 < 10); --p_802->g_103)
    { /* block id: 41 */
        VECTOR(int16_t, 8) l_156 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x1A97L), 0x1A97L), 0x1A97L, 1L, 0x1A97L);
        int32_t **l_169 = &l_96;
        int16_t l_171 = (-1L);
        struct S2 *l_186 = &p_802->g_164;
        int32_t l_187 = (-5L);
        int i;
        if (((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 2))(0UL, 7UL)).xyyxxxxyxxyyyyyy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(252UL, (((&l_110 == ((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_153.xxyxyxxxxxxxyyyx)).sbd5d)).y, (safe_lshift_func_uint8_t_u_s(l_153.x, 6)))), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 8))(l_156.s47262172)).s02, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(p_802->g_157.xxxyywzx)), ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 16))(p_802->g_158.zxyywwzwwywxyyzx)).hi, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((safe_div_func_int8_t_s_s(0x6DL, (l_133 ^ (safe_add_func_uint8_t_u_u(((((*l_169) = (((p_802->g_163 == ((((p_802->g_28[4][9][1].f1 == (l_153.y && p_802->g_35)) , ((safe_div_func_uint64_t_u_u(l_91[2][2].f0, l_110)) <= 9L)) & l_167[6][3][0]) , l_168[0][7][0])) , l_156.s4) , p_78)) == l_170) , 0xDAL), l_133))))) && p_802->g_28[4][9][1].f0), (-1L), 0L, 7L)).odd)), (-9L), 3L)).zzxxxzywwyyzwzxx, ((VECTOR(int8_t, 16))(0x2AL))))).even, ((VECTOR(int8_t, 8))(1L)), ((VECTOR(int8_t, 8))((-1L)))))), ((VECTOR(uint8_t, 8))(0xDDL))))).s2426045262044657)).odd))).odd, ((VECTOR(int16_t, 4))(0x7017L)), ((VECTOR(int16_t, 4))(4L))))).yzxwwwzzwwwxzzxw)), ((VECTOR(int16_t, 16))(0L))))))))).sd3)).xyxyxxyx, ((VECTOR(int16_t, 8))(0x7F32L)), ((VECTOR(int16_t, 8))(0L))))), ((VECTOR(int16_t, 8))(0x4748L))))).even)).hi, ((VECTOR(int16_t, 2))(0x3251L))))).xyyy, ((VECTOR(int16_t, 4))(0x6304L))))).lo, (int16_t)p_802->g_157.x, (int16_t)0x05BCL))).yxyy)).zwwzyyzwyywyywzw)).s0)) , &p_802->g_94)) ^ l_171) || l_133), 0x2AL, 1UL)).xzwwwxwzyzzyzzwx))))).s6, l_167[6][1][3])) , l_92))
        { /* block id: 43 */
            return l_156.s1;
        }
        else
        { /* block id: 45 */
            int32_t *l_172 = &l_95;
            struct S2 l_173 = {0x1EL};
            int32_t **l_176 = &l_172;
            (*l_172) = (6UL <= l_91[2][2].f1);
            (*p_802->g_163) = l_173;
            (*l_176) = (p_802->g_85 , (p_802->g_174 = l_172));
            (**l_176) = (p_802->g_157.x <= ((VECTOR(uint16_t, 4))(0UL, 1UL, 65532UL, 0x7718L)).w);
        }
        for (l_92 = 0; (l_92 == (-18)); l_92--)
        { /* block id: 54 */
            VECTOR(int32_t, 8) l_185 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5286BB95L), 0x5286BB95L), 0x5286BB95L, (-1L), 0x5286BB95L);
            int i;
            if (l_171)
            { /* block id: 55 */
                struct S1 *l_180 = (void*)0;
                struct S1 **l_179 = &l_180;
                (*l_179) = &l_91[2][2];
                for (p_802->g_85 = 0; (p_802->g_85 < 42); p_802->g_85 = safe_add_func_int32_t_s_s(p_802->g_85, 3))
                { /* block id: 59 */
                    struct S1 *l_183 = &p_802->g_184;
                    (*l_183) = ((**l_179) = l_91[2][3]);
                }
            }
            else
            { /* block id: 63 */
                (*p_802->g_174) ^= (~((VECTOR(int32_t, 4))(l_185.s1112)).x);
            }
        }
        (*p_802->g_174) |= (l_168[0][7][0] != (l_186 = l_186));
        l_187 &= ((*p_802->g_174) ^= 0x6D3D2726L);
    }
    return p_802->g_164.f0;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[43];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 43; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[43];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 43; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[184];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 184; i++)
            l_comm_values[i] = 1;
    struct S3 c_803;
    struct S3* p_802 = &c_803;
    struct S3 c_804 = {
        {{{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}}},{{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}}},{{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}}},{{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}}},{{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}},{{0x094F54FDF186BE7BL,0x333E2D46470AD0C7L},{1L,-7L},{0L,0x33429DD6F46CE8F1L},{0L,0x33429DD6F46CE8F1L},{1L,-7L}}}}, // p_802->g_28
        0xB1L, // p_802->g_34
        (-9L), // p_802->g_35
        0x6A9E613B00E0C1F7L, // p_802->g_62
        0xCE0AEDB7B902C631L, // p_802->g_64
        {{1UL,0x9E87E310A61F905AL,0x3EDD010A2F6955C0L,0x8BF474991CB9547BL,0x9E87E310A61F905AL,0x8BF474991CB9547BL,0x3EDD010A2F6955C0L,0x9E87E310A61F905AL,1UL},{1UL,0x9E87E310A61F905AL,0x3EDD010A2F6955C0L,0x8BF474991CB9547BL,0x9E87E310A61F905AL,0x8BF474991CB9547BL,0x3EDD010A2F6955C0L,0x9E87E310A61F905AL,1UL},{1UL,0x9E87E310A61F905AL,0x3EDD010A2F6955C0L,0x8BF474991CB9547BL,0x9E87E310A61F905AL,0x8BF474991CB9547BL,0x3EDD010A2F6955C0L,0x9E87E310A61F905AL,1UL},{1UL,0x9E87E310A61F905AL,0x3EDD010A2F6955C0L,0x8BF474991CB9547BL,0x9E87E310A61F905AL,0x8BF474991CB9547BL,0x3EDD010A2F6955C0L,0x9E87E310A61F905AL,1UL},{1UL,0x9E87E310A61F905AL,0x3EDD010A2F6955C0L,0x8BF474991CB9547BL,0x9E87E310A61F905AL,0x8BF474991CB9547BL,0x3EDD010A2F6955C0L,0x9E87E310A61F905AL,1UL},{1UL,0x9E87E310A61F905AL,0x3EDD010A2F6955C0L,0x8BF474991CB9547BL,0x9E87E310A61F905AL,0x8BF474991CB9547BL,0x3EDD010A2F6955C0L,0x9E87E310A61F905AL,1UL},{1UL,0x9E87E310A61F905AL,0x3EDD010A2F6955C0L,0x8BF474991CB9547BL,0x9E87E310A61F905AL,0x8BF474991CB9547BL,0x3EDD010A2F6955C0L,0x9E87E310A61F905AL,1UL},{1UL,0x9E87E310A61F905AL,0x3EDD010A2F6955C0L,0x8BF474991CB9547BL,0x9E87E310A61F905AL,0x8BF474991CB9547BL,0x3EDD010A2F6955C0L,0x9E87E310A61F905AL,1UL}}, // p_802->g_68
        &p_802->g_68[4][1], // p_802->g_67
        0x29DDE605L, // p_802->g_74
        0x37AC40A1D1280F08L, // p_802->g_85
        &p_802->g_85, // p_802->g_84
        0L, // p_802->g_94
        (-8L), // p_802->g_97
        0L, // p_802->g_103
        1UL, // p_802->g_115
        (VECTOR(uint16_t, 8))(0x1659L, (VECTOR(uint16_t, 4))(0x1659L, (VECTOR(uint16_t, 2))(0x1659L, 65532UL), 65532UL), 65532UL, 0x1659L, 65532UL), // p_802->g_131
        (void*)0, // p_802->g_144
        (VECTOR(int16_t, 4))(0x7238L, (VECTOR(int16_t, 2))(0x7238L, 0x7B44L), 0x7B44L), // p_802->g_157
        (VECTOR(int16_t, 4))(0x5698L, (VECTOR(int16_t, 2))(0x5698L, 1L), 1L), // p_802->g_158
        {6L}, // p_802->g_164
        &p_802->g_164, // p_802->g_163
        0x21604C85L, // p_802->g_175
        &p_802->g_175, // p_802->g_174
        {-8L,-6L}, // p_802->g_184
        9UL, // p_802->g_191
        {{&p_802->g_28[4][9][1],&p_802->g_28[4][9][1],&p_802->g_28[4][9][1],&p_802->g_28[4][9][1],&p_802->g_28[4][9][1],&p_802->g_28[4][9][1],&p_802->g_28[4][9][1],&p_802->g_28[4][9][1],&p_802->g_28[4][9][1],&p_802->g_28[4][9][1]}}, // p_802->g_195
        &p_802->g_28[4][9][1], // p_802->g_196
        (VECTOR(int64_t, 16))(0x7D858B087D645D23L, (VECTOR(int64_t, 4))(0x7D858B087D645D23L, (VECTOR(int64_t, 2))(0x7D858B087D645D23L, 0x1ACDC3D9E7DE085DL), 0x1ACDC3D9E7DE085DL), 0x1ACDC3D9E7DE085DL, 0x7D858B087D645D23L, 0x1ACDC3D9E7DE085DL, (VECTOR(int64_t, 2))(0x7D858B087D645D23L, 0x1ACDC3D9E7DE085DL), (VECTOR(int64_t, 2))(0x7D858B087D645D23L, 0x1ACDC3D9E7DE085DL), 0x7D858B087D645D23L, 0x1ACDC3D9E7DE085DL, 0x7D858B087D645D23L, 0x1ACDC3D9E7DE085DL), // p_802->g_197
        (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x569629B2AEEABF22L), 0x569629B2AEEABF22L), 0x569629B2AEEABF22L, 0L, 0x569629B2AEEABF22L, (VECTOR(int64_t, 2))(0L, 0x569629B2AEEABF22L), (VECTOR(int64_t, 2))(0L, 0x569629B2AEEABF22L), 0L, 0x569629B2AEEABF22L, 0L, 0x569629B2AEEABF22L), // p_802->g_198
        {0x369B51EB5C6CAAC7L,-1L,1L,1L,0xBF72AAF0L,0x1179L,0x4E18C4BAL,0x5C966539L,0UL,0x2D99L}, // p_802->g_201
        255UL, // p_802->g_221
        (VECTOR(int32_t, 4))(0x555A2FE9L, (VECTOR(int32_t, 2))(0x555A2FE9L, (-3L)), (-3L)), // p_802->g_242
        (void*)0, // p_802->g_244
        1L, // p_802->g_287
        (VECTOR(uint8_t, 8))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 255UL), 255UL), 255UL, 5UL, 255UL), // p_802->g_292
        (VECTOR(uint8_t, 2))(1UL, 1UL), // p_802->g_295
        (VECTOR(uint8_t, 2))(0xD9L, 255UL), // p_802->g_297
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x16B4L), 0x16B4L), 0x16B4L, 1UL, 0x16B4L), // p_802->g_299
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x91B3L), 0x91B3L), // p_802->g_300
        (VECTOR(uint16_t, 2))(9UL, 9UL), // p_802->g_302
        {0x83C83F8DC7B599EDL,0x1E98B80AD4423FD8L,0x02CDC36A45BFCBBDL,0x585E815FL,5UL,-8L,0x7631B1B4L,0x5D6E7B45L,18446744073709551609UL,0x24D8L}, // p_802->g_320
        2L, // p_802->g_405
        {6UL,1L,0x783C8FBEA629B6D1L,0x680BBB10L,0x985E2D41L,1L,0x794FED4EL,0x01F1ADDBL,1UL,0x99D0L}, // p_802->g_421
        &p_802->g_320.f3, // p_802->g_423
        &p_802->g_423, // p_802->g_422
        {{{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174}},{{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174}},{{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174}},{{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174}},{{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174}},{{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174}},{{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174}},{{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174},{&p_802->g_174,&p_802->g_174,&p_802->g_174}}}, // p_802->g_427
        &p_802->g_174, // p_802->g_428
        {{0x56D585151EAA03A7L,0x2595318EA7C98793L,0x09E2C55E10A74FBBL,6L,4294967293UL,2L,0x467363D9L,-1L,1UL,0x67B3L},{0x56D585151EAA03A7L,0x2595318EA7C98793L,0x09E2C55E10A74FBBL,6L,4294967293UL,2L,0x467363D9L,-1L,1UL,0x67B3L},{0x56D585151EAA03A7L,0x2595318EA7C98793L,0x09E2C55E10A74FBBL,6L,4294967293UL,2L,0x467363D9L,-1L,1UL,0x67B3L},{0x56D585151EAA03A7L,0x2595318EA7C98793L,0x09E2C55E10A74FBBL,6L,4294967293UL,2L,0x467363D9L,-1L,1UL,0x67B3L},{0x56D585151EAA03A7L,0x2595318EA7C98793L,0x09E2C55E10A74FBBL,6L,4294967293UL,2L,0x467363D9L,-1L,1UL,0x67B3L}}, // p_802->g_439
        &p_802->g_174, // p_802->g_472
        (void*)0, // p_802->g_474
        &p_802->g_244, // p_802->g_475
        &p_802->g_201.f9, // p_802->g_510
        {{{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510}},{{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510}},{{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510}},{{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510}},{{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510}},{{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510}},{{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510},{&p_802->g_510,&p_802->g_510,&p_802->g_510,&p_802->g_510}}}, // p_802->g_509
        {0x56D8F55A23F5A94AL,0L,0x3EC6F1CEE4465F19L,0x60BB3BECL,0UL,0x4265L,-4L,6L,18446744073709551606UL,0x281DL}, // p_802->g_516
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x15L), 0x15L), // p_802->g_525
        (VECTOR(int8_t, 16))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 1L), 1L), 1L, 9L, 1L, (VECTOR(int8_t, 2))(9L, 1L), (VECTOR(int8_t, 2))(9L, 1L), 9L, 1L, 9L, 1L), // p_802->g_528
        (VECTOR(uint8_t, 16))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 0x95L), 0x95L), 0x95L, 6UL, 0x95L, (VECTOR(uint8_t, 2))(6UL, 0x95L), (VECTOR(uint8_t, 2))(6UL, 0x95L), 6UL, 0x95L, 6UL, 0x95L), // p_802->g_556
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 249UL), 249UL), 249UL, 255UL, 249UL), // p_802->g_561
        &p_802->g_320.f9, // p_802->g_728
        0x1051L, // p_802->g_729
        0xADDB695BL, // p_802->g_768
        {0UL,1L,0x31DA6DA69D0BD82CL,-1L,4294967295UL,0x7F7FL,0L,5L,18446744073709551610UL,0x68C5L}, // p_802->g_776
        {8UL,0L,0x282CAADBD4ED4C80L,6L,1UL,1L,-1L,0x091A9BD0L,1UL,2UL}, // p_802->g_777
        0L, // p_802->g_796
        0, // p_802->v_collective
        sequence_input[get_global_id(0)], // p_802->global_0_offset
        sequence_input[get_global_id(1)], // p_802->global_1_offset
        sequence_input[get_global_id(2)], // p_802->global_2_offset
        sequence_input[get_local_id(0)], // p_802->local_0_offset
        sequence_input[get_local_id(1)], // p_802->local_1_offset
        sequence_input[get_local_id(2)], // p_802->local_2_offset
        sequence_input[get_group_id(0)], // p_802->group_0_offset
        sequence_input[get_group_id(1)], // p_802->group_1_offset
        sequence_input[get_group_id(2)], // p_802->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 184)), permutations[0][get_linear_local_id()])), // p_802->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_803 = c_804;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_802);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_802->g_28[i][j][k].f0, "p_802->g_28[i][j][k].f0", print_hash_value);
                transparent_crc(p_802->g_28[i][j][k].f1, "p_802->g_28[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(p_802->g_34, "p_802->g_34", print_hash_value);
    transparent_crc(p_802->g_35, "p_802->g_35", print_hash_value);
    transparent_crc(p_802->g_62, "p_802->g_62", print_hash_value);
    transparent_crc(p_802->g_64, "p_802->g_64", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_802->g_68[i][j], "p_802->g_68[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_802->g_74, "p_802->g_74", print_hash_value);
    transparent_crc(p_802->g_85, "p_802->g_85", print_hash_value);
    transparent_crc(p_802->g_94, "p_802->g_94", print_hash_value);
    transparent_crc(p_802->g_97, "p_802->g_97", print_hash_value);
    transparent_crc(p_802->g_103, "p_802->g_103", print_hash_value);
    transparent_crc(p_802->g_115, "p_802->g_115", print_hash_value);
    transparent_crc(p_802->g_131.s0, "p_802->g_131.s0", print_hash_value);
    transparent_crc(p_802->g_131.s1, "p_802->g_131.s1", print_hash_value);
    transparent_crc(p_802->g_131.s2, "p_802->g_131.s2", print_hash_value);
    transparent_crc(p_802->g_131.s3, "p_802->g_131.s3", print_hash_value);
    transparent_crc(p_802->g_131.s4, "p_802->g_131.s4", print_hash_value);
    transparent_crc(p_802->g_131.s5, "p_802->g_131.s5", print_hash_value);
    transparent_crc(p_802->g_131.s6, "p_802->g_131.s6", print_hash_value);
    transparent_crc(p_802->g_131.s7, "p_802->g_131.s7", print_hash_value);
    transparent_crc(p_802->g_157.x, "p_802->g_157.x", print_hash_value);
    transparent_crc(p_802->g_157.y, "p_802->g_157.y", print_hash_value);
    transparent_crc(p_802->g_157.z, "p_802->g_157.z", print_hash_value);
    transparent_crc(p_802->g_157.w, "p_802->g_157.w", print_hash_value);
    transparent_crc(p_802->g_158.x, "p_802->g_158.x", print_hash_value);
    transparent_crc(p_802->g_158.y, "p_802->g_158.y", print_hash_value);
    transparent_crc(p_802->g_158.z, "p_802->g_158.z", print_hash_value);
    transparent_crc(p_802->g_158.w, "p_802->g_158.w", print_hash_value);
    transparent_crc(p_802->g_164.f0, "p_802->g_164.f0", print_hash_value);
    transparent_crc(p_802->g_175, "p_802->g_175", print_hash_value);
    transparent_crc(p_802->g_184.f0, "p_802->g_184.f0", print_hash_value);
    transparent_crc(p_802->g_184.f1, "p_802->g_184.f1", print_hash_value);
    transparent_crc(p_802->g_191, "p_802->g_191", print_hash_value);
    transparent_crc(p_802->g_197.s0, "p_802->g_197.s0", print_hash_value);
    transparent_crc(p_802->g_197.s1, "p_802->g_197.s1", print_hash_value);
    transparent_crc(p_802->g_197.s2, "p_802->g_197.s2", print_hash_value);
    transparent_crc(p_802->g_197.s3, "p_802->g_197.s3", print_hash_value);
    transparent_crc(p_802->g_197.s4, "p_802->g_197.s4", print_hash_value);
    transparent_crc(p_802->g_197.s5, "p_802->g_197.s5", print_hash_value);
    transparent_crc(p_802->g_197.s6, "p_802->g_197.s6", print_hash_value);
    transparent_crc(p_802->g_197.s7, "p_802->g_197.s7", print_hash_value);
    transparent_crc(p_802->g_197.s8, "p_802->g_197.s8", print_hash_value);
    transparent_crc(p_802->g_197.s9, "p_802->g_197.s9", print_hash_value);
    transparent_crc(p_802->g_197.sa, "p_802->g_197.sa", print_hash_value);
    transparent_crc(p_802->g_197.sb, "p_802->g_197.sb", print_hash_value);
    transparent_crc(p_802->g_197.sc, "p_802->g_197.sc", print_hash_value);
    transparent_crc(p_802->g_197.sd, "p_802->g_197.sd", print_hash_value);
    transparent_crc(p_802->g_197.se, "p_802->g_197.se", print_hash_value);
    transparent_crc(p_802->g_197.sf, "p_802->g_197.sf", print_hash_value);
    transparent_crc(p_802->g_198.s0, "p_802->g_198.s0", print_hash_value);
    transparent_crc(p_802->g_198.s1, "p_802->g_198.s1", print_hash_value);
    transparent_crc(p_802->g_198.s2, "p_802->g_198.s2", print_hash_value);
    transparent_crc(p_802->g_198.s3, "p_802->g_198.s3", print_hash_value);
    transparent_crc(p_802->g_198.s4, "p_802->g_198.s4", print_hash_value);
    transparent_crc(p_802->g_198.s5, "p_802->g_198.s5", print_hash_value);
    transparent_crc(p_802->g_198.s6, "p_802->g_198.s6", print_hash_value);
    transparent_crc(p_802->g_198.s7, "p_802->g_198.s7", print_hash_value);
    transparent_crc(p_802->g_198.s8, "p_802->g_198.s8", print_hash_value);
    transparent_crc(p_802->g_198.s9, "p_802->g_198.s9", print_hash_value);
    transparent_crc(p_802->g_198.sa, "p_802->g_198.sa", print_hash_value);
    transparent_crc(p_802->g_198.sb, "p_802->g_198.sb", print_hash_value);
    transparent_crc(p_802->g_198.sc, "p_802->g_198.sc", print_hash_value);
    transparent_crc(p_802->g_198.sd, "p_802->g_198.sd", print_hash_value);
    transparent_crc(p_802->g_198.se, "p_802->g_198.se", print_hash_value);
    transparent_crc(p_802->g_198.sf, "p_802->g_198.sf", print_hash_value);
    transparent_crc(p_802->g_201.f0, "p_802->g_201.f0", print_hash_value);
    transparent_crc(p_802->g_201.f1, "p_802->g_201.f1", print_hash_value);
    transparent_crc(p_802->g_201.f2, "p_802->g_201.f2", print_hash_value);
    transparent_crc(p_802->g_201.f3, "p_802->g_201.f3", print_hash_value);
    transparent_crc(p_802->g_201.f4, "p_802->g_201.f4", print_hash_value);
    transparent_crc(p_802->g_201.f5, "p_802->g_201.f5", print_hash_value);
    transparent_crc(p_802->g_201.f6, "p_802->g_201.f6", print_hash_value);
    transparent_crc(p_802->g_201.f7, "p_802->g_201.f7", print_hash_value);
    transparent_crc(p_802->g_201.f8, "p_802->g_201.f8", print_hash_value);
    transparent_crc(p_802->g_201.f9, "p_802->g_201.f9", print_hash_value);
    transparent_crc(p_802->g_221, "p_802->g_221", print_hash_value);
    transparent_crc(p_802->g_242.x, "p_802->g_242.x", print_hash_value);
    transparent_crc(p_802->g_242.y, "p_802->g_242.y", print_hash_value);
    transparent_crc(p_802->g_242.z, "p_802->g_242.z", print_hash_value);
    transparent_crc(p_802->g_242.w, "p_802->g_242.w", print_hash_value);
    transparent_crc(p_802->g_287, "p_802->g_287", print_hash_value);
    transparent_crc(p_802->g_292.s0, "p_802->g_292.s0", print_hash_value);
    transparent_crc(p_802->g_292.s1, "p_802->g_292.s1", print_hash_value);
    transparent_crc(p_802->g_292.s2, "p_802->g_292.s2", print_hash_value);
    transparent_crc(p_802->g_292.s3, "p_802->g_292.s3", print_hash_value);
    transparent_crc(p_802->g_292.s4, "p_802->g_292.s4", print_hash_value);
    transparent_crc(p_802->g_292.s5, "p_802->g_292.s5", print_hash_value);
    transparent_crc(p_802->g_292.s6, "p_802->g_292.s6", print_hash_value);
    transparent_crc(p_802->g_292.s7, "p_802->g_292.s7", print_hash_value);
    transparent_crc(p_802->g_295.x, "p_802->g_295.x", print_hash_value);
    transparent_crc(p_802->g_295.y, "p_802->g_295.y", print_hash_value);
    transparent_crc(p_802->g_297.x, "p_802->g_297.x", print_hash_value);
    transparent_crc(p_802->g_297.y, "p_802->g_297.y", print_hash_value);
    transparent_crc(p_802->g_299.s0, "p_802->g_299.s0", print_hash_value);
    transparent_crc(p_802->g_299.s1, "p_802->g_299.s1", print_hash_value);
    transparent_crc(p_802->g_299.s2, "p_802->g_299.s2", print_hash_value);
    transparent_crc(p_802->g_299.s3, "p_802->g_299.s3", print_hash_value);
    transparent_crc(p_802->g_299.s4, "p_802->g_299.s4", print_hash_value);
    transparent_crc(p_802->g_299.s5, "p_802->g_299.s5", print_hash_value);
    transparent_crc(p_802->g_299.s6, "p_802->g_299.s6", print_hash_value);
    transparent_crc(p_802->g_299.s7, "p_802->g_299.s7", print_hash_value);
    transparent_crc(p_802->g_300.x, "p_802->g_300.x", print_hash_value);
    transparent_crc(p_802->g_300.y, "p_802->g_300.y", print_hash_value);
    transparent_crc(p_802->g_300.z, "p_802->g_300.z", print_hash_value);
    transparent_crc(p_802->g_300.w, "p_802->g_300.w", print_hash_value);
    transparent_crc(p_802->g_302.x, "p_802->g_302.x", print_hash_value);
    transparent_crc(p_802->g_302.y, "p_802->g_302.y", print_hash_value);
    transparent_crc(p_802->g_320.f0, "p_802->g_320.f0", print_hash_value);
    transparent_crc(p_802->g_320.f1, "p_802->g_320.f1", print_hash_value);
    transparent_crc(p_802->g_320.f2, "p_802->g_320.f2", print_hash_value);
    transparent_crc(p_802->g_320.f3, "p_802->g_320.f3", print_hash_value);
    transparent_crc(p_802->g_320.f4, "p_802->g_320.f4", print_hash_value);
    transparent_crc(p_802->g_320.f5, "p_802->g_320.f5", print_hash_value);
    transparent_crc(p_802->g_320.f6, "p_802->g_320.f6", print_hash_value);
    transparent_crc(p_802->g_320.f7, "p_802->g_320.f7", print_hash_value);
    transparent_crc(p_802->g_320.f8, "p_802->g_320.f8", print_hash_value);
    transparent_crc(p_802->g_320.f9, "p_802->g_320.f9", print_hash_value);
    transparent_crc(p_802->g_405, "p_802->g_405", print_hash_value);
    transparent_crc(p_802->g_421.f0, "p_802->g_421.f0", print_hash_value);
    transparent_crc(p_802->g_421.f1, "p_802->g_421.f1", print_hash_value);
    transparent_crc(p_802->g_421.f2, "p_802->g_421.f2", print_hash_value);
    transparent_crc(p_802->g_421.f3, "p_802->g_421.f3", print_hash_value);
    transparent_crc(p_802->g_421.f4, "p_802->g_421.f4", print_hash_value);
    transparent_crc(p_802->g_421.f5, "p_802->g_421.f5", print_hash_value);
    transparent_crc(p_802->g_421.f6, "p_802->g_421.f6", print_hash_value);
    transparent_crc(p_802->g_421.f7, "p_802->g_421.f7", print_hash_value);
    transparent_crc(p_802->g_421.f8, "p_802->g_421.f8", print_hash_value);
    transparent_crc(p_802->g_421.f9, "p_802->g_421.f9", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_802->g_439[i].f0, "p_802->g_439[i].f0", print_hash_value);
        transparent_crc(p_802->g_439[i].f1, "p_802->g_439[i].f1", print_hash_value);
        transparent_crc(p_802->g_439[i].f2, "p_802->g_439[i].f2", print_hash_value);
        transparent_crc(p_802->g_439[i].f3, "p_802->g_439[i].f3", print_hash_value);
        transparent_crc(p_802->g_439[i].f4, "p_802->g_439[i].f4", print_hash_value);
        transparent_crc(p_802->g_439[i].f5, "p_802->g_439[i].f5", print_hash_value);
        transparent_crc(p_802->g_439[i].f6, "p_802->g_439[i].f6", print_hash_value);
        transparent_crc(p_802->g_439[i].f7, "p_802->g_439[i].f7", print_hash_value);
        transparent_crc(p_802->g_439[i].f8, "p_802->g_439[i].f8", print_hash_value);
        transparent_crc(p_802->g_439[i].f9, "p_802->g_439[i].f9", print_hash_value);

    }
    transparent_crc(p_802->g_516.f0, "p_802->g_516.f0", print_hash_value);
    transparent_crc(p_802->g_516.f1, "p_802->g_516.f1", print_hash_value);
    transparent_crc(p_802->g_516.f2, "p_802->g_516.f2", print_hash_value);
    transparent_crc(p_802->g_516.f3, "p_802->g_516.f3", print_hash_value);
    transparent_crc(p_802->g_516.f4, "p_802->g_516.f4", print_hash_value);
    transparent_crc(p_802->g_516.f5, "p_802->g_516.f5", print_hash_value);
    transparent_crc(p_802->g_516.f6, "p_802->g_516.f6", print_hash_value);
    transparent_crc(p_802->g_516.f7, "p_802->g_516.f7", print_hash_value);
    transparent_crc(p_802->g_516.f8, "p_802->g_516.f8", print_hash_value);
    transparent_crc(p_802->g_516.f9, "p_802->g_516.f9", print_hash_value);
    transparent_crc(p_802->g_525.x, "p_802->g_525.x", print_hash_value);
    transparent_crc(p_802->g_525.y, "p_802->g_525.y", print_hash_value);
    transparent_crc(p_802->g_525.z, "p_802->g_525.z", print_hash_value);
    transparent_crc(p_802->g_525.w, "p_802->g_525.w", print_hash_value);
    transparent_crc(p_802->g_528.s0, "p_802->g_528.s0", print_hash_value);
    transparent_crc(p_802->g_528.s1, "p_802->g_528.s1", print_hash_value);
    transparent_crc(p_802->g_528.s2, "p_802->g_528.s2", print_hash_value);
    transparent_crc(p_802->g_528.s3, "p_802->g_528.s3", print_hash_value);
    transparent_crc(p_802->g_528.s4, "p_802->g_528.s4", print_hash_value);
    transparent_crc(p_802->g_528.s5, "p_802->g_528.s5", print_hash_value);
    transparent_crc(p_802->g_528.s6, "p_802->g_528.s6", print_hash_value);
    transparent_crc(p_802->g_528.s7, "p_802->g_528.s7", print_hash_value);
    transparent_crc(p_802->g_528.s8, "p_802->g_528.s8", print_hash_value);
    transparent_crc(p_802->g_528.s9, "p_802->g_528.s9", print_hash_value);
    transparent_crc(p_802->g_528.sa, "p_802->g_528.sa", print_hash_value);
    transparent_crc(p_802->g_528.sb, "p_802->g_528.sb", print_hash_value);
    transparent_crc(p_802->g_528.sc, "p_802->g_528.sc", print_hash_value);
    transparent_crc(p_802->g_528.sd, "p_802->g_528.sd", print_hash_value);
    transparent_crc(p_802->g_528.se, "p_802->g_528.se", print_hash_value);
    transparent_crc(p_802->g_528.sf, "p_802->g_528.sf", print_hash_value);
    transparent_crc(p_802->g_556.s0, "p_802->g_556.s0", print_hash_value);
    transparent_crc(p_802->g_556.s1, "p_802->g_556.s1", print_hash_value);
    transparent_crc(p_802->g_556.s2, "p_802->g_556.s2", print_hash_value);
    transparent_crc(p_802->g_556.s3, "p_802->g_556.s3", print_hash_value);
    transparent_crc(p_802->g_556.s4, "p_802->g_556.s4", print_hash_value);
    transparent_crc(p_802->g_556.s5, "p_802->g_556.s5", print_hash_value);
    transparent_crc(p_802->g_556.s6, "p_802->g_556.s6", print_hash_value);
    transparent_crc(p_802->g_556.s7, "p_802->g_556.s7", print_hash_value);
    transparent_crc(p_802->g_556.s8, "p_802->g_556.s8", print_hash_value);
    transparent_crc(p_802->g_556.s9, "p_802->g_556.s9", print_hash_value);
    transparent_crc(p_802->g_556.sa, "p_802->g_556.sa", print_hash_value);
    transparent_crc(p_802->g_556.sb, "p_802->g_556.sb", print_hash_value);
    transparent_crc(p_802->g_556.sc, "p_802->g_556.sc", print_hash_value);
    transparent_crc(p_802->g_556.sd, "p_802->g_556.sd", print_hash_value);
    transparent_crc(p_802->g_556.se, "p_802->g_556.se", print_hash_value);
    transparent_crc(p_802->g_556.sf, "p_802->g_556.sf", print_hash_value);
    transparent_crc(p_802->g_561.s0, "p_802->g_561.s0", print_hash_value);
    transparent_crc(p_802->g_561.s1, "p_802->g_561.s1", print_hash_value);
    transparent_crc(p_802->g_561.s2, "p_802->g_561.s2", print_hash_value);
    transparent_crc(p_802->g_561.s3, "p_802->g_561.s3", print_hash_value);
    transparent_crc(p_802->g_561.s4, "p_802->g_561.s4", print_hash_value);
    transparent_crc(p_802->g_561.s5, "p_802->g_561.s5", print_hash_value);
    transparent_crc(p_802->g_561.s6, "p_802->g_561.s6", print_hash_value);
    transparent_crc(p_802->g_561.s7, "p_802->g_561.s7", print_hash_value);
    transparent_crc(p_802->g_729, "p_802->g_729", print_hash_value);
    transparent_crc(p_802->g_768, "p_802->g_768", print_hash_value);
    transparent_crc(p_802->g_776.f0, "p_802->g_776.f0", print_hash_value);
    transparent_crc(p_802->g_776.f1, "p_802->g_776.f1", print_hash_value);
    transparent_crc(p_802->g_776.f2, "p_802->g_776.f2", print_hash_value);
    transparent_crc(p_802->g_776.f3, "p_802->g_776.f3", print_hash_value);
    transparent_crc(p_802->g_776.f4, "p_802->g_776.f4", print_hash_value);
    transparent_crc(p_802->g_776.f5, "p_802->g_776.f5", print_hash_value);
    transparent_crc(p_802->g_776.f6, "p_802->g_776.f6", print_hash_value);
    transparent_crc(p_802->g_776.f7, "p_802->g_776.f7", print_hash_value);
    transparent_crc(p_802->g_776.f8, "p_802->g_776.f8", print_hash_value);
    transparent_crc(p_802->g_776.f9, "p_802->g_776.f9", print_hash_value);
    transparent_crc(p_802->g_777.f0, "p_802->g_777.f0", print_hash_value);
    transparent_crc(p_802->g_777.f1, "p_802->g_777.f1", print_hash_value);
    transparent_crc(p_802->g_777.f2, "p_802->g_777.f2", print_hash_value);
    transparent_crc(p_802->g_777.f3, "p_802->g_777.f3", print_hash_value);
    transparent_crc(p_802->g_777.f4, "p_802->g_777.f4", print_hash_value);
    transparent_crc(p_802->g_777.f5, "p_802->g_777.f5", print_hash_value);
    transparent_crc(p_802->g_777.f6, "p_802->g_777.f6", print_hash_value);
    transparent_crc(p_802->g_777.f7, "p_802->g_777.f7", print_hash_value);
    transparent_crc(p_802->g_777.f8, "p_802->g_777.f8", print_hash_value);
    transparent_crc(p_802->g_777.f9, "p_802->g_777.f9", print_hash_value);
    transparent_crc(p_802->g_796, "p_802->g_796", print_hash_value);
    transparent_crc(p_802->v_collective, "p_802->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 43; i++)
            transparent_crc(p_802->g_special_values[i + 43 * get_linear_group_id()], "p_802->g_special_values[i + 43 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 43; i++)
            transparent_crc(p_802->l_special_values[i], "p_802->l_special_values[i]", print_hash_value);
    transparent_crc(p_802->l_comm_values[get_linear_local_id()], "p_802->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_802->g_comm_values[get_linear_group_id() * 184 + get_linear_local_id()], "p_802->g_comm_values[get_linear_group_id() * 184 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
