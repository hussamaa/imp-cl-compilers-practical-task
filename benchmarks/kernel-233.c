// --atomics 80 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 60,38,4 -l 5,38,1
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

__constant uint32_t permutations[10][190] = {
{52,140,150,97,88,156,21,8,89,44,74,12,142,181,188,28,7,40,103,66,134,149,112,98,45,5,61,165,157,125,95,180,94,113,10,120,16,179,76,115,119,114,9,65,146,105,135,118,6,152,25,32,148,91,151,93,130,86,111,173,53,185,60,96,158,78,109,27,138,144,154,108,131,57,184,100,176,1,62,31,14,90,129,71,79,189,55,143,99,47,166,3,59,168,18,137,107,155,174,64,42,69,186,145,26,51,175,75,183,63,162,70,13,15,2,4,187,104,122,123,164,147,133,49,39,121,139,17,29,101,170,20,24,23,92,67,127,22,106,167,177,34,30,80,126,58,132,82,182,84,124,11,110,171,56,38,163,33,102,85,48,41,77,46,68,37,35,172,128,161,153,87,73,0,178,169,160,159,19,36,136,43,116,117,72,50,141,54,83,81}, // permutation 0
{19,25,96,133,82,78,88,127,52,45,163,111,75,123,135,102,32,131,148,7,97,167,3,107,68,130,183,113,188,147,140,150,182,60,169,20,21,58,29,64,16,146,62,141,129,157,54,108,53,155,43,70,114,99,116,46,110,94,72,2,149,179,30,104,51,161,92,28,6,50,66,47,8,158,61,77,181,12,112,136,180,34,106,134,17,44,14,152,117,86,174,144,87,145,0,168,56,98,178,79,10,39,69,187,81,49,73,80,177,173,27,120,160,154,105,122,11,15,151,65,95,176,121,139,132,26,35,63,83,125,109,23,4,24,38,100,40,166,22,9,74,37,59,142,170,119,165,124,101,13,1,67,33,71,48,162,91,156,93,41,84,5,57,42,159,115,90,143,36,128,118,153,172,18,164,171,137,55,103,76,186,185,31,184,85,189,126,89,138,175}, // permutation 1
{13,144,150,43,39,142,141,78,174,121,180,38,33,151,8,56,9,76,18,120,19,134,108,63,137,88,149,66,6,87,50,123,15,61,55,100,52,53,40,85,106,154,158,183,133,82,59,20,32,168,35,115,116,42,68,71,147,16,148,156,189,187,94,92,126,84,54,31,89,179,10,118,172,75,90,79,3,184,175,5,117,28,167,49,36,129,64,136,161,14,178,47,143,80,46,164,111,169,104,99,67,65,70,102,77,105,0,17,186,51,83,128,86,182,57,101,98,114,24,30,7,72,153,132,113,138,25,11,166,171,73,4,181,135,48,27,160,69,152,22,95,112,1,21,103,110,23,188,41,131,60,93,29,162,97,45,107,185,145,124,109,122,177,146,139,96,119,176,127,173,125,58,163,34,12,91,130,74,37,157,81,44,140,170,26,165,2,155,159,62}, // permutation 2
{130,84,177,16,43,48,134,66,80,145,81,170,30,26,116,6,152,37,187,165,33,31,22,28,143,71,42,106,79,188,180,74,18,39,45,137,101,13,176,91,53,76,153,163,125,64,36,156,103,126,99,151,138,181,149,44,2,122,94,133,5,189,128,175,135,185,168,100,132,118,158,119,108,160,166,95,32,15,82,77,104,24,54,0,23,105,61,46,162,139,131,72,20,8,60,57,173,69,182,112,127,102,68,167,40,148,10,55,25,12,124,164,98,109,150,17,3,92,129,161,51,52,117,114,19,96,157,65,29,147,34,121,70,75,142,169,47,120,136,93,110,171,62,14,9,85,58,38,146,154,115,50,144,172,67,186,88,83,113,178,174,159,56,90,21,89,87,184,123,86,107,41,27,183,1,155,111,35,63,141,11,140,73,59,49,7,78,97,179,4}, // permutation 3
{77,58,103,125,43,167,183,146,86,32,11,26,28,116,181,76,36,90,35,109,51,166,188,60,145,168,55,134,13,137,173,33,50,15,68,124,78,80,75,53,156,113,184,136,10,104,128,151,22,133,163,57,148,107,21,172,187,112,143,2,82,176,159,164,56,126,23,8,169,6,4,88,129,123,102,180,0,61,149,152,81,25,117,115,34,83,141,63,170,121,97,37,153,111,72,71,89,84,45,114,59,182,24,171,29,79,44,135,130,110,27,139,65,49,98,40,85,105,70,138,1,14,69,106,120,7,108,101,62,41,158,165,91,96,140,161,42,19,147,186,48,17,100,189,46,122,144,74,16,12,142,73,150,132,99,64,52,174,39,95,54,93,177,31,5,185,162,47,155,160,3,18,175,66,9,38,131,118,92,30,20,154,87,157,178,179,119,127,67,94}, // permutation 4
{56,29,124,170,174,59,151,155,149,141,36,182,173,154,9,54,15,145,48,109,107,13,19,110,4,143,63,17,81,177,165,136,88,157,69,84,118,189,42,32,91,65,126,120,106,71,158,137,187,93,103,146,163,166,21,61,101,108,33,139,79,77,95,57,68,121,43,35,153,116,76,86,162,44,105,185,12,24,160,133,20,70,0,159,1,11,73,23,67,131,66,144,58,117,64,102,8,148,46,180,188,114,38,156,104,51,140,112,6,83,128,115,39,2,7,113,175,60,130,3,49,34,22,85,75,80,31,183,26,40,168,119,53,138,164,94,171,78,186,87,167,74,172,132,98,178,152,16,62,97,30,50,179,184,25,147,99,47,52,100,122,27,28,135,142,150,10,129,72,111,14,96,161,125,92,134,123,176,82,37,127,45,55,181,5,41,89,90,18,169}, // permutation 5
{170,189,180,16,54,2,75,150,142,31,42,32,131,105,178,153,111,69,4,155,182,133,21,94,57,173,65,135,17,117,50,174,169,18,156,51,44,72,27,101,43,181,157,183,110,23,122,162,80,145,146,167,136,10,74,114,107,49,77,81,138,92,165,93,109,87,59,35,67,34,98,186,70,33,123,52,103,125,175,5,185,73,102,66,95,134,71,166,129,55,86,1,58,137,147,148,38,82,172,62,188,41,39,53,112,90,48,127,37,119,0,168,76,24,115,141,96,149,63,85,163,104,130,78,91,158,159,83,171,56,14,6,187,184,25,30,46,128,13,19,45,176,7,116,8,15,60,143,79,132,84,12,97,161,140,26,89,139,179,121,177,9,120,152,164,100,124,20,154,40,22,29,118,47,64,3,88,61,144,151,106,113,160,11,99,68,36,126,108,28}, // permutation 6
{174,55,8,73,48,11,157,62,53,12,116,78,87,74,15,92,119,123,0,144,64,167,179,25,79,138,58,71,182,178,154,76,31,17,176,106,30,118,158,67,2,33,99,113,112,35,150,56,134,50,151,104,84,65,132,19,60,93,107,52,98,171,51,80,130,114,131,90,189,96,95,38,16,164,142,125,163,175,46,162,185,41,10,47,108,187,75,28,145,4,133,109,172,86,37,27,139,72,57,43,126,153,66,117,165,184,180,24,102,49,155,148,88,59,14,81,22,141,69,42,188,83,45,110,149,124,34,20,7,115,168,183,135,77,169,173,127,21,100,29,140,121,82,13,147,94,97,44,128,143,54,161,40,32,103,177,5,156,18,181,122,63,3,23,111,152,166,36,136,137,68,160,146,1,89,105,101,6,70,61,120,85,9,26,186,39,91,170,129,159}, // permutation 7
{78,30,26,92,148,124,102,72,65,115,66,107,175,104,139,48,127,185,116,8,73,163,125,95,23,147,36,169,34,159,117,128,122,15,178,174,112,52,156,76,162,168,150,6,179,67,145,152,51,103,138,41,45,153,13,47,133,64,108,24,100,0,164,12,27,154,88,55,63,177,89,5,182,160,11,20,170,171,176,172,151,109,81,111,54,161,94,126,131,121,16,68,18,165,9,53,158,157,113,59,134,1,37,42,135,166,188,49,29,123,91,110,130,80,44,82,101,57,71,120,132,3,7,142,86,62,140,75,129,77,105,21,17,60,141,149,99,85,119,180,10,22,136,84,146,28,118,96,50,187,43,184,74,143,25,144,90,38,32,97,14,167,19,87,46,137,106,70,186,181,93,98,189,58,35,114,83,61,33,2,31,79,56,39,155,40,4,69,173,183}, // permutation 8
{95,57,67,25,120,109,134,118,124,76,164,88,58,136,172,184,77,144,64,34,87,79,176,47,170,74,27,158,97,182,85,181,17,55,18,131,160,149,9,101,92,154,49,68,23,188,98,173,48,69,4,156,138,16,112,123,75,99,11,94,54,96,132,142,59,36,148,91,83,157,0,166,52,187,153,45,72,20,162,100,151,84,121,165,111,50,12,30,19,86,22,10,105,38,51,113,141,104,63,29,44,161,168,5,1,108,128,127,70,143,115,89,40,178,2,146,82,183,116,14,60,81,41,137,35,106,135,122,73,65,66,3,80,93,139,126,31,171,46,21,155,71,110,119,102,7,33,159,43,39,13,62,140,28,26,163,152,186,129,90,150,169,174,78,61,107,32,145,130,125,42,117,24,189,177,37,56,147,114,185,103,6,175,133,167,15,180,53,8,179} // permutation 9
};

// Seed: 3451056130

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int64_t  f0;
   volatile uint64_t  f1;
   uint8_t  f2;
   int64_t  f3;
};

union U1 {
   volatile uint32_t  f0;
   int8_t  f1;
   int8_t * f2;
   uint32_t  f3;
};

union U2 {
   uint16_t  f0;
   volatile int64_t  f1;
};

union U3 {
   uint64_t  f0;
   volatile uint16_t  f1;
   volatile int8_t  f2;
   int8_t * volatile  f3;
};

union U4 {
   volatile int32_t  f0;
   int8_t * f1;
};

union U6 {
   int16_t  f0;
   uint16_t  f1;
   volatile int64_t  f2;
};

struct S7 {
    volatile int8_t g_3;
    volatile int8_t *g_2;
    int8_t g_27;
    uint16_t g_41;
    VECTOR(int16_t, 8) g_44;
    int32_t g_52;
    int16_t g_53;
    uint32_t g_54;
    VECTOR(uint32_t, 2) g_70;
    uint16_t g_82;
    uint16_t *g_81;
    VECTOR(uint64_t, 8) g_87;
    uint8_t g_90;
    VECTOR(uint8_t, 2) g_93;
    volatile uint64_t g_97;
    volatile uint64_t *g_96;
    uint8_t g_99;
    volatile union U1 g_107;
    volatile union U1 *g_106;
    int32_t * volatile g_178;
    int32_t * volatile *g_177;
    VECTOR(int32_t, 4) g_179;
    VECTOR(int32_t, 2) g_180;
    int32_t g_188;
    int8_t g_203;
    union U1 g_210;
    union U1 g_213;
    union U1 g_214;
    union U1 g_215;
    union U1 g_216;
    union U1 g_217;
    union U1 g_218;
    union U1 g_219;
    union U1 g_220;
    union U1 g_221;
    union U1 g_222;
    union U1 g_223;
    union U1 g_224;
    union U1 g_225;
    union U1 g_226[10];
    union U1 g_227;
    union U1 g_228;
    union U1 g_229[2];
    union U1 g_230;
    union U1 g_231;
    union U1 g_232;
    union U1 g_233;
    union U1 g_234;
    union U1 g_235;
    union U1 g_236;
    union U1 g_237;
    union U1 g_238;
    union U1 g_239;
    union U1 g_240[3];
    union U1 g_241;
    union U1 g_242;
    union U1 g_243;
    union U1 g_244;
    union U1 g_245;
    union U1 g_246;
    union U1 g_247;
    union U1 g_248;
    union U1 g_249[6][3][5];
    union U1 g_250;
    union U1 g_251;
    union U1 g_252;
    union U1 g_253[6][2][6];
    union U1 g_254;
    union U1 g_255;
    union U1 g_256;
    union U1 g_257;
    union U1 g_258;
    union U1 g_259;
    union U1 g_260;
    union U1 g_261;
    union U1 g_262;
    union U1 g_263;
    union U1 g_264;
    union U1 g_265;
    union U1 g_266;
    union U1 g_267;
    union U1 g_268[7];
    union U1 g_269;
    volatile int32_t g_273[8];
    volatile int32_t *g_272;
    VECTOR(int32_t, 2) g_285;
    union U3 g_290;
    uint32_t * volatile * volatile g_299;
    uint32_t * volatile * volatile * volatile g_300;
    union U4 g_310;
    VECTOR(int32_t, 8) g_314;
    VECTOR(int16_t, 2) g_317;
    VECTOR(int32_t, 8) g_318;
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
uint64_t  func_1(struct S7 * p_423);
int32_t  func_4(int8_t * p_5, uint64_t  p_6, int8_t * p_7, int8_t * p_8, int16_t  p_9, struct S7 * p_423);
int8_t * func_10(uint8_t  p_11, int8_t * p_12, struct S7 * p_423);
int8_t * func_16(uint64_t  p_17, int8_t * p_18, int32_t  p_19, struct S7 * p_423);
int8_t * func_21(uint32_t  p_22, uint16_t  p_23, int8_t * p_24, int8_t * p_25, struct S7 * p_423);
int32_t  func_28(int8_t * p_29, int8_t * p_30, uint8_t  p_31, struct S7 * p_423);
int8_t * func_32(int16_t  p_33, int64_t  p_34, struct S7 * p_423);
uint64_t  func_45(int32_t  p_46, struct S7 * p_423);
uint16_t  func_49(uint16_t * p_50, struct S7 * p_423);
uint16_t * func_64(int32_t  p_65, int32_t * p_66, int64_t  p_67, uint16_t * p_68, struct S7 * p_423);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_423->g_2 p_423->g_3 p_423->g_comm_values p_423->l_comm_values p_423->g_41 p_423->g_44 p_423->g_54 p_423->g_70 p_423->g_81 p_423->g_27 p_423->g_87 p_423->g_90 p_423->g_93 p_423->g_52 p_423->g_96 p_423->g_99 p_423->g_106 p_423->g_82 p_423->g_53 p_423->g_177 p_423->g_179 p_423->g_180 p_423->g_188 p_423->g_285 p_423->g_290 p_423->g_299 p_423->g_300 p_423->g_310 p_423->g_314 p_423->g_317 p_423->g_318 p_423->g_178 p_423->g_240.f0
 * writes: p_423->g_41 p_423->g_54 p_423->g_52 p_423->g_90 p_423->g_99 p_423->g_179 p_423->g_188 p_423->g_87 p_423->g_27 p_423->g_203 p_423->g_272 p_423->g_82 p_423->g_299 p_423->g_53
 */
uint64_t  func_1(struct S7 * p_423)
{ /* block id: 4 */
    uint16_t l_13 = 0x4653L;
    int32_t l_20 = 0x5A2E712CL;
    int8_t *l_26 = &p_423->g_27;
    int32_t l_303 = 0x56110CAEL;
    int32_t *l_416 = (void*)0;
    int32_t *l_417 = (void*)0;
    int32_t l_418 = 5L;
    int32_t *l_419[10][2] = {{&p_423->g_188,(void*)0},{&p_423->g_188,(void*)0},{&p_423->g_188,(void*)0},{&p_423->g_188,(void*)0},{&p_423->g_188,(void*)0},{&p_423->g_188,(void*)0},{&p_423->g_188,(void*)0},{&p_423->g_188,(void*)0},{&p_423->g_188,(void*)0},{&p_423->g_188,(void*)0}};
    uint32_t l_420 = 4UL;
    int i, j;
    l_20 = ((((p_423->g_2 != &p_423->g_3) < (&p_423->g_3 != &p_423->g_3)) || func_4(func_10((l_13++), func_16((p_423->g_3 && l_20), func_21(l_20, (0x17A6L >= ((((p_423->g_comm_values[p_423->tid] | p_423->l_comm_values[(safe_mod_func_uint32_t_u_u(p_423->tid, 190))]) == l_20) , p_423->g_2) == p_423->g_2)), l_26, &p_423->g_27, p_423), p_423->g_44.s0, p_423), p_423), l_20, l_26, l_26, p_423->g_53, p_423)) ^ p_423->g_285.y);
    (*p_423->g_300) = p_423->g_299;
    for (p_423->g_54 = (-22); (p_423->g_54 >= 54); p_423->g_54 = safe_add_func_int32_t_s_s(p_423->g_54, 1))
    { /* block id: 74 */
        uint16_t l_304[6];
        int16_t *l_313 = &p_423->g_53;
        int32_t *l_320[7][5] = {{&p_423->g_188,(void*)0,(void*)0,&p_423->g_188,&l_20},{&p_423->g_188,(void*)0,(void*)0,&p_423->g_188,&l_20},{&p_423->g_188,(void*)0,(void*)0,&p_423->g_188,&l_20},{&p_423->g_188,(void*)0,(void*)0,&p_423->g_188,&l_20},{&p_423->g_188,(void*)0,(void*)0,&p_423->g_188,&l_20},{&p_423->g_188,(void*)0,(void*)0,&p_423->g_188,&l_20},{&p_423->g_188,(void*)0,(void*)0,&p_423->g_188,&l_20}};
        int32_t **l_319 = &l_320[2][1];
        int i, j;
        for (i = 0; i < 6; i++)
            l_304[i] = 65535UL;
        ++l_304[2];
        (**p_423->g_177) = (((0x41C2A2B0L && (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((FAKE_DIVERGE(p_423->group_1_offset, get_group_id(1), 10) == ((p_423->g_310 , l_304[2]) || (safe_lshift_func_int16_t_s_u(((*l_313) &= 0x1620L), 9)))))), 12))) != ((l_304[2] > ((VECTOR(int32_t, 2))(p_423->g_314.s53)).even) > (safe_mul_func_int16_t_s_s((!((VECTOR(int16_t, 8))(p_423->g_317.xxxxyyyx)).s4), (p_423->l_comm_values[(safe_mod_func_uint32_t_u_u(p_423->tid, 190))] && (((p_423->g_285.y > ((VECTOR(int32_t, 4))(p_423->g_318.s1420)).z) , &p_423->g_52) == ((*l_319) = &p_423->g_188))))))) > p_423->g_314.s4);
        if ((*p_423->g_178))
            continue;
        if ((atomic_inc(&p_423->l_atomic_input[44]) == 7))
        { /* block id: 81 */
            int32_t l_321 = (-1L);
            VECTOR(int32_t, 8) l_359 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x6346030FL), 0x6346030FL), 0x6346030FL, 5L, 0x6346030FL);
            VECTOR(int32_t, 2) l_360 = (VECTOR(int32_t, 2))(0x64092F58L, 0x0DD47A85L);
            VECTOR(int32_t, 8) l_361 = (VECTOR(int32_t, 8))(0x572D5A0CL, (VECTOR(int32_t, 4))(0x572D5A0CL, (VECTOR(int32_t, 2))(0x572D5A0CL, 1L), 1L), 1L, 0x572D5A0CL, 1L);
            int16_t l_362 = 0x031CL;
            union U0 l_363 = {-2L};/* VOLATILE GLOBAL l_363 */
            int8_t l_364[8][10] = {{1L,0L,0x73L,0x55L,1L,0x55L,0x73L,0L,1L,0L},{1L,0L,0x73L,0x55L,1L,0x55L,0x73L,0L,1L,0L},{1L,0L,0x73L,0x55L,1L,0x55L,0x73L,0L,1L,0L},{1L,0L,0x73L,0x55L,1L,0x55L,0x73L,0L,1L,0L},{1L,0L,0x73L,0x55L,1L,0x55L,0x73L,0L,1L,0L},{1L,0L,0x73L,0x55L,1L,0x55L,0x73L,0L,1L,0L},{1L,0L,0x73L,0x55L,1L,0x55L,0x73L,0L,1L,0L},{1L,0L,0x73L,0x55L,1L,0x55L,0x73L,0L,1L,0L}};
            VECTOR(uint64_t, 8) l_365 = (VECTOR(uint64_t, 8))(18446744073709551612UL, (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 0x2EEB9AF1AAAB0096L), 0x2EEB9AF1AAAB0096L), 0x2EEB9AF1AAAB0096L, 18446744073709551612UL, 0x2EEB9AF1AAAB0096L);
            int8_t l_366 = 0x66L;
            uint32_t l_367 = 0x608DB187L;
            union U0 l_368 = {-1L};/* VOLATILE GLOBAL l_368 */
            union U6 l_369 = {0L};/* VOLATILE GLOBAL l_369 */
            union U3 l_370[2] = {{0UL},{0UL}};
            union U2 l_371 = {0xF2BDL};/* VOLATILE GLOBAL l_371 */
            union U1 l_372 = {0x3F36638DL};/* VOLATILE GLOBAL l_372 */
            int64_t l_373 = (-10L);
            union U2 l_374 = {0xC702L};/* VOLATILE GLOBAL l_374 */
            uint64_t l_375[8] = {0xA94BB4A0B93BEB56L,0xA94BB4A0B93BEB56L,0xA94BB4A0B93BEB56L,0xA94BB4A0B93BEB56L,0xA94BB4A0B93BEB56L,0xA94BB4A0B93BEB56L,0xA94BB4A0B93BEB56L,0xA94BB4A0B93BEB56L};
            int i, j;
            for (l_321 = 4; (l_321 >= 20); l_321 = safe_add_func_int64_t_s_s(l_321, 2))
            { /* block id: 84 */
                int32_t l_324[9] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
                int i;
                for (l_324[7] = (-29); (l_324[7] <= (-18)); l_324[7]++)
                { /* block id: 87 */
                    uint16_t l_327 = 0xF568L;
                    if (l_327)
                    { /* block id: 88 */
                        int32_t l_329 = 0x5E1EA13AL;
                        int32_t *l_328 = &l_329;
                        l_328 = (void*)0;
                    }
                    else
                    { /* block id: 90 */
                        uint32_t l_330 = 4294967295UL;
                        int32_t l_331[2][3][3] = {{{0x41CCE31CL,0x41CCE31CL,0x3E6784F5L},{0x41CCE31CL,0x41CCE31CL,0x3E6784F5L},{0x41CCE31CL,0x41CCE31CL,0x3E6784F5L}},{{0x41CCE31CL,0x41CCE31CL,0x3E6784F5L},{0x41CCE31CL,0x41CCE31CL,0x3E6784F5L},{0x41CCE31CL,0x41CCE31CL,0x3E6784F5L}}};
                        int16_t l_332 = 1L;
                        int16_t l_333 = (-10L);
                        uint64_t l_334 = 0UL;
                        int i, j, k;
                        l_331[0][0][2] = l_330;
                        l_333 = l_332;
                        l_334++;
                    }
                    for (l_327 = (-20); (l_327 <= 53); ++l_327)
                    { /* block id: 97 */
                        uint64_t l_339 = 0x99A5114C95139A6BL;
                        int32_t l_340 = 0x21C5459FL;
                        int8_t l_341 = 0x11L;
                        VECTOR(int32_t, 16) l_342 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 1L), 1L), 1L, (-2L), 1L, (VECTOR(int32_t, 2))((-2L), 1L), (VECTOR(int32_t, 2))((-2L), 1L), (-2L), 1L, (-2L), 1L);
                        VECTOR(int32_t, 8) l_343 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
                        int32_t l_344 = 0x1FA4D6B5L;
                        int8_t l_345 = 7L;
                        VECTOR(int32_t, 8) l_346 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-7L)), (-7L)), (-7L), 1L, (-7L));
                        int32_t l_347 = 1L;
                        int64_t l_348[2];
                        uint8_t l_349 = 1UL;
                        int32_t *l_350 = &l_340;
                        int32_t *l_351 = &l_340;
                        int32_t *l_352 = &l_340;
                        int32_t *l_353 = (void*)0;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_348[i] = 0x0A52FBC25AA0ACD7L;
                        l_347 ^= ((VECTOR(int32_t, 16))((-1L), (l_340 ^= l_339), 0x0027C97BL, l_341, 1L, ((VECTOR(int32_t, 4))(l_342.s6289)), 1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_343.s1712)).z, (l_344 = 0x448DE1C5L), 1L, (-2L))).x, l_345, ((VECTOR(int32_t, 2))(l_346.s32)), 1L, 8L)).s6;
                        l_349 = l_348[1];
                        l_350 = (void*)0;
                        l_353 = (l_352 = l_351);
                    }
                }
                for (l_324[2] = 29; (l_324[2] <= (-23)); l_324[2] = safe_sub_func_uint16_t_u_u(l_324[2], 4))
                { /* block id: 109 */
                    int8_t l_356[2][9] = {{0x1DL,0x1DL,0x1DL,0x1DL,0x1DL,0x1DL,0x1DL,0x1DL,0x1DL},{0x1DL,0x1DL,0x1DL,0x1DL,0x1DL,0x1DL,0x1DL,0x1DL,0x1DL}};
                    int64_t l_357 = (-5L);
                    VECTOR(uint8_t, 4) l_358 = (VECTOR(uint8_t, 4))(0x58L, (VECTOR(uint8_t, 2))(0x58L, 0xE0L), 0xE0L);
                    int i, j;
                    l_358.z = (l_357 = (l_356[1][0] ^= (-1L)));
                }
            }
            if (((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_359.s72715174)).s3605140036236163, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_360.xx)), 2L, 0L)).yxxyxyyx, ((VECTOR(int32_t, 2))(l_361.s30)).xxyxyyyx))).s17)).xyxyyxxyyyxxyxxy))).sc6, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(0x70ED297BL, 0x2A56E4B4L)).xyyyyyxx, ((VECTOR(int32_t, 8))(l_362, ((l_363 , ((((l_364[0][3] , (l_365.s0 , (((l_367 = l_366) , (((l_368 , l_369) , l_370[0]) , l_371)) , 0x6C8DBFB0L))) , l_372) , l_373) , l_374)) , (-10L)), ((VECTOR(int32_t, 2))(0x4107D51EL)), 0x7ABEAF82L, l_375[4], 0x3FE4F28CL, 0x76B5FFADL)), ((VECTOR(int32_t, 8))((-8L)))))).s01))).odd)
            { /* block id: 116 */
                int32_t l_376[7][8] = {{0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL},{0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL},{0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL},{0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL},{0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL},{0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL},{0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL,0x6F13C25BL}};
                VECTOR(int64_t, 16) l_403 = (VECTOR(int64_t, 16))(0x4FB3A054CF8597ABL, (VECTOR(int64_t, 4))(0x4FB3A054CF8597ABL, (VECTOR(int64_t, 2))(0x4FB3A054CF8597ABL, 2L), 2L), 2L, 0x4FB3A054CF8597ABL, 2L, (VECTOR(int64_t, 2))(0x4FB3A054CF8597ABL, 2L), (VECTOR(int64_t, 2))(0x4FB3A054CF8597ABL, 2L), 0x4FB3A054CF8597ABL, 2L, 0x4FB3A054CF8597ABL, 2L);
                VECTOR(int32_t, 16) l_404 = (VECTOR(int32_t, 16))(0x56C3AD2EL, (VECTOR(int32_t, 4))(0x56C3AD2EL, (VECTOR(int32_t, 2))(0x56C3AD2EL, 0L), 0L), 0L, 0x56C3AD2EL, 0L, (VECTOR(int32_t, 2))(0x56C3AD2EL, 0L), (VECTOR(int32_t, 2))(0x56C3AD2EL, 0L), 0x56C3AD2EL, 0L, 0x56C3AD2EL, 0L);
                int i, j;
                for (l_376[4][1] = 0; (l_376[4][1] != 28); l_376[4][1]++)
                { /* block id: 119 */
                    VECTOR(int32_t, 8) l_379 = (VECTOR(int32_t, 8))(0x681FB4EBL, (VECTOR(int32_t, 4))(0x681FB4EBL, (VECTOR(int32_t, 2))(0x681FB4EBL, 9L), 9L), 9L, 0x681FB4EBL, 9L);
                    int i;
                    if (((VECTOR(int32_t, 8))(l_379.s34733740)).s3)
                    { /* block id: 120 */
                        VECTOR(int32_t, 16) l_380 = (VECTOR(int32_t, 16))(0x5FC46E63L, (VECTOR(int32_t, 4))(0x5FC46E63L, (VECTOR(int32_t, 2))(0x5FC46E63L, 0x5A3A7E0EL), 0x5A3A7E0EL), 0x5A3A7E0EL, 0x5FC46E63L, 0x5A3A7E0EL, (VECTOR(int32_t, 2))(0x5FC46E63L, 0x5A3A7E0EL), (VECTOR(int32_t, 2))(0x5FC46E63L, 0x5A3A7E0EL), 0x5FC46E63L, 0x5A3A7E0EL, 0x5FC46E63L, 0x5A3A7E0EL);
                        uint16_t l_381 = 65527UL;
                        uint32_t l_382 = 0xB1FA789AL;
                        int i;
                        l_380.sc = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_380.s67f560db045f99f2)))).sa;
                        l_382 = l_381;
                    }
                    else
                    { /* block id: 123 */
                        VECTOR(uint32_t, 2) l_383 = (VECTOR(uint32_t, 2))(4294967295UL, 0xF0C868F2L);
                        int8_t l_384 = 0x21L;
                        int i;
                        l_359.s6 = (((VECTOR(uint32_t, 16))(l_383.xyyyxxyxyyyxyxyy)).s3 , l_384);
                    }
                    for (l_379.s4 = 0; (l_379.s4 == (-15)); l_379.s4 = safe_sub_func_uint64_t_u_u(l_379.s4, 2))
                    { /* block id: 128 */
                        uint32_t l_387 = 4294967295UL;
                        VECTOR(int32_t, 8) l_390 = (VECTOR(int32_t, 8))(0x35906A73L, (VECTOR(int32_t, 4))(0x35906A73L, (VECTOR(int32_t, 2))(0x35906A73L, 0x190B6071L), 0x190B6071L), 0x190B6071L, 0x35906A73L, 0x190B6071L);
                        union U0 l_391 = {4L};/* VOLATILE GLOBAL l_391 */
                        int16_t l_392 = 0x2945L;
                        uint64_t l_393 = 0x4D3184476DE8D8ABL;
                        int i;
                        l_360.y |= 0x1D6A5D7AL;
                        l_387--;
                        l_393 &= (l_361.s4 = (((l_360.x &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_390.s3536352701200704)).hi)).s3) , l_391) , l_392));
                    }
                    if ((l_359.s4 = (-8L)))
                    { /* block id: 136 */
                        uint32_t l_394 = 1UL;
                        uint32_t l_395 = 0xF19FA5CBL;
                        int64_t l_396 = (-1L);
                        int64_t l_397[10];
                        uint32_t l_398 = 0x74AEF7B4L;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_397[i] = 0x2EED038F2240E8CEL;
                        l_359.s6 = l_394;
                        l_379.s0 |= l_395;
                        l_359.s7 ^= l_396;
                        l_398 = l_397[2];
                    }
                    else
                    { /* block id: 141 */
                        union U4 l_400 = {0x0949CD80L};/* VOLATILE GLOBAL l_400 */
                        union U4 *l_399 = &l_400;
                        union U4 *l_401[7][2];
                        union U4 *l_402 = (void*)0;
                        int i, j;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_401[i][j] = &l_400;
                        }
                        l_402 = (l_401[6][1] = l_399);
                        l_360.y = ((l_369.f0 = ((VECTOR(int16_t, 2))(0L, 2L)).hi) , (-9L));
                    }
                }
                l_360.x = (((VECTOR(int64_t, 16))(l_403.s69c46d6a43c1c3e2)).sf , ((VECTOR(int32_t, 2))(l_404.se7)).even);
            }
            else
            { /* block id: 149 */
                union U4 l_405 = {0x228BB2A3L};/* VOLATILE GLOBAL l_405 */
                int32_t l_407 = (-1L);
                int32_t *l_406 = &l_407;
                int32_t *l_408 = &l_407;
                int32_t *l_409[4][6] = {{&l_407,(void*)0,&l_407,(void*)0,&l_407,&l_407},{&l_407,(void*)0,&l_407,(void*)0,&l_407,&l_407},{&l_407,(void*)0,&l_407,(void*)0,&l_407,&l_407},{&l_407,(void*)0,&l_407,(void*)0,&l_407,&l_407}};
                int32_t *l_410 = &l_407;
                int8_t l_411[8];
                int16_t l_412 = 1L;
                uint32_t l_413 = 0xA0719E04L;
                int i, j;
                for (i = 0; i < 8; i++)
                    l_411[i] = 1L;
                l_406 = (l_405 , l_406);
                l_410 = (l_409[1][4] = l_408);
                --l_413;
            }
            unsigned int result = 0;
            result += l_321;
            result += l_359.s7;
            result += l_359.s6;
            result += l_359.s5;
            result += l_359.s4;
            result += l_359.s3;
            result += l_359.s2;
            result += l_359.s1;
            result += l_359.s0;
            result += l_360.y;
            result += l_360.x;
            result += l_361.s7;
            result += l_361.s6;
            result += l_361.s5;
            result += l_361.s4;
            result += l_361.s3;
            result += l_361.s2;
            result += l_361.s1;
            result += l_361.s0;
            result += l_362;
            result += l_363.f0;
            result += l_363.f1;
            result += l_363.f2;
            result += l_363.f3;
            int l_364_i0, l_364_i1;
            for (l_364_i0 = 0; l_364_i0 < 8; l_364_i0++) {
                for (l_364_i1 = 0; l_364_i1 < 10; l_364_i1++) {
                    result += l_364[l_364_i0][l_364_i1];
                }
            }
            result += l_365.s7;
            result += l_365.s6;
            result += l_365.s5;
            result += l_365.s4;
            result += l_365.s3;
            result += l_365.s2;
            result += l_365.s1;
            result += l_365.s0;
            result += l_366;
            result += l_367;
            result += l_368.f0;
            result += l_368.f1;
            result += l_368.f2;
            result += l_368.f3;
            result += l_369.f0;
            result += l_369.f1;
            result += l_369.f2;
            int l_370_i0;
            for (l_370_i0 = 0; l_370_i0 < 2; l_370_i0++) {
                result += l_370[l_370_i0].f0;
                result += l_370[l_370_i0].f1;
                result += l_370[l_370_i0].f2;
                result += l_370[l_370_i0].f3;
            }
            result += l_371.f0;
            result += l_371.f1;
            result += l_372.f0;
            result += l_372.f1;
            result += l_372.f2;
            result += l_372.f3;
            result += l_373;
            result += l_374.f0;
            result += l_374.f1;
            int l_375_i0;
            for (l_375_i0 = 0; l_375_i0 < 8; l_375_i0++) {
                result += l_375[l_375_i0];
            }
            atomic_add(&p_423->l_special_values[44], result);
        }
        else
        { /* block id: 155 */
            (1 + 1);
        }
    }
    l_420++;
    return p_423->g_240[1].f0;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_4(int8_t * p_5, uint64_t  p_6, int8_t * p_7, int8_t * p_8, int16_t  p_9, struct S7 * p_423)
{ /* block id: 67 */
    uint64_t l_296 = 0x4E78FF907EE7F280L;
    --l_296;
    return p_9;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_10(uint8_t  p_11, int8_t * p_12, struct S7 * p_423)
{ /* block id: 65 */
    int8_t *l_295 = &p_423->g_203;
    return l_295;
}


/* ------------------------------------------ */
/* 
 * reads : p_423->g_290 p_423->g_106 p_423->g_81 p_423->g_188
 * writes: p_423->g_82 p_423->g_188
 */
int8_t * func_16(uint64_t  p_17, int8_t * p_18, int32_t  p_19, struct S7 * p_423)
{ /* block id: 61 */
    uint16_t l_291 = 0x902EL;
    int32_t *l_294 = &p_423->g_188;
    (*l_294) |= (((*p_423->g_81) = ((((p_423->g_290 , &p_423->g_41) == (void*)0) < (l_291 > ((void*)0 == p_423->g_106))) , (+p_17))) | (safe_mul_func_int8_t_s_s(0x42L, l_291)));
    return p_18;
}


/* ------------------------------------------ */
/* 
 * reads : p_423->g_41 p_423->g_44 p_423->g_54 p_423->l_comm_values p_423->g_70 p_423->g_81 p_423->g_27 p_423->g_87 p_423->g_90 p_423->g_93 p_423->g_52 p_423->g_96 p_423->g_99 p_423->g_106 p_423->g_82 p_423->g_53 p_423->g_comm_values p_423->g_177 p_423->g_179 p_423->g_180 p_423->g_188 p_423->g_285
 * writes: p_423->g_41 p_423->g_54 p_423->g_52 p_423->g_90 p_423->g_99 p_423->g_179 p_423->g_188 p_423->g_87 p_423->g_27 p_423->g_203 p_423->g_272
 */
int8_t * func_21(uint32_t  p_22, uint16_t  p_23, int8_t * p_24, int8_t * p_25, struct S7 * p_423)
{ /* block id: 6 */
    uint32_t l_37 = 4294967295UL;
    uint16_t *l_40 = &p_423->g_41;
    int64_t *l_102[1];
    int32_t l_103 = 0x7A86218FL;
    uint64_t *l_195 = (void*)0;
    int8_t *l_202 = &p_423->g_203;
    VECTOR(int64_t, 8) l_204 = (VECTOR(int64_t, 8))(0x5E73D4CEE256FD15L, (VECTOR(int64_t, 4))(0x5E73D4CEE256FD15L, (VECTOR(int64_t, 2))(0x5E73D4CEE256FD15L, (-1L)), (-1L)), (-1L), 0x5E73D4CEE256FD15L, (-1L));
    union U1 *l_209 = &p_423->g_210;
    union U1 **l_211 = &l_209;
    union U1 *l_212[8][4][5] = {{{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233}},{{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233}},{{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233}},{{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233}},{{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233}},{{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233}},{{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233}},{{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233},{&p_423->g_256,&p_423->g_249[1][1][3],&p_423->g_226[4],&p_423->g_238,&p_423->g_233}}};
    int32_t *l_271 = &p_423->g_188;
    int32_t **l_270[1][7][1];
    VECTOR(uint8_t, 2) l_278 = (VECTOR(uint8_t, 2))(255UL, 5UL);
    uint32_t *l_280 = &l_37;
    uint32_t **l_279 = &l_280;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_102[i] = (void*)0;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
                l_270[i][j][k] = &l_271;
        }
    }
    if (func_28(func_32((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(3L, (safe_rshift_func_uint8_t_u_s((l_37 ^ (GROUP_DIVERGE(2, 1) == l_37)), (safe_lshift_func_uint16_t_u_u(((*l_40)++), 6)))), (-1L), 1L)), 0x44F8A3D3L, (-9L), 0x5F5B04CEL, 1L)).s1 , ((VECTOR(int16_t, 2))(p_423->g_44.s12)).odd), (l_103 = (func_45((safe_mul_func_uint16_t_u_u(func_49(l_40, p_423), (safe_rshift_func_int8_t_s_s(l_37, 2)))), p_423) == GROUP_DIVERGE(1, 1))), p_423), p_25, p_23, p_423))
    { /* block id: 40 */
        int32_t *l_137 = &l_103;
        int32_t **l_136 = &l_137;
        (*l_136) = &l_103;
    }
    else
    { /* block id: 42 */
        int8_t l_146 = 2L;
        uint32_t *l_157[5];
        int32_t *l_162 = &p_423->g_52;
        uint8_t *l_176[7][2][10] = {{{(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0},{(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0}},{{(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0},{(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0}},{{(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0},{(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0}},{{(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0},{(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0}},{{(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0},{(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0}},{{(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0},{(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0}},{{(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0},{(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0,&p_423->g_99,(void*)0,(void*)0}}};
        int32_t *l_187 = &p_423->g_188;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_157[i] = &l_37;
        (*l_162) = (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u(GROUP_DIVERGE(1, 1), (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((-1L), l_146)), (safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(l_103, 7)) && ((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((((l_103 = (5L != (0x179438D6L >= (p_423->g_54 = (l_102[0] == p_423->g_96))))) != ((safe_add_func_uint8_t_u_u(0x57L, (safe_sub_func_int64_t_s_s(4L, p_22)))) != l_146)) || p_423->g_comm_values[p_423->tid]) < p_423->g_70.x), l_146)), (-10L))) || p_423->g_54)), l_37)) || (*p_423->g_81)), 0x31L)))))) & l_37), 13));
        (*l_162) = l_103;
        (*l_187) ^= (p_423->g_179.z = (((safe_unary_minus_func_int64_t_s((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(p_23, (safe_add_func_uint8_t_u_u((l_103 = p_23), ((p_423->l_comm_values[(safe_mod_func_uint32_t_u_u(p_423->tid, 190))] , p_423->g_177) == (void*)0))))), p_423->g_99)), p_22)), ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_423->g_179.wz)), 0x03B6C18EL, ((VECTOR(int32_t, 8))(p_423->g_180.yyxxyyxx)), 0x310CBDEBL, (-1L), (safe_add_func_int32_t_s_s(((*l_162) = (safe_div_func_uint32_t_u_u((p_423->g_44.s2 , (safe_sub_func_uint32_t_u_u(0UL, p_22))), l_37))), 0xC5B995B8L)), 0x3BAA9240L, 0x2B13C820L)).lo)).s3 , p_22) | 0xEEF4L))), 254UL)))) || (*l_162)) <= p_423->g_180.x));
    }
    p_423->g_272 = ((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u(255UL, ((safe_add_func_uint32_t_u_u(((--p_423->g_87.s6) <= p_423->g_52), (p_423->g_177 == p_423->g_177))) < ((safe_div_func_int32_t_s_s(((&p_423->g_188 != ((safe_sub_func_uint32_t_u_u((7UL < (((*l_202) = ((*p_24) = (&p_22 == &l_37))) < ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(255UL, (((VECTOR(int64_t, 8))(l_204.s00777151)).s0 , ((safe_lshift_func_int8_t_s_s(((((*l_211) = l_209) == l_212[2][3][2]) & 0UL), 7)) == l_37)), 0x51L, 251UL)))).y)), l_204.s7)) , &l_103)) , p_23), 0x0FCAF225L)) < l_103)))), p_423->g_70.x)) , (void*)0);
    (*l_271) = (safe_sub_func_uint16_t_u_u((p_23 == (+(safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(255UL, 255UL, ((VECTOR(uint8_t, 2))(l_278.xx)), 1UL, ((((&p_423->g_54 != ((*l_279) = (void*)0)) | (FAKE_DIVERGE(p_423->local_1_offset, get_local_id(1), 10) || (safe_add_func_uint64_t_u_u(p_23, (((p_23 ^ p_22) == (safe_sub_func_int8_t_s_s((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_423->g_285.yx)).yyyyyxxyxyxyxyyy)).se >= (p_423->g_52 ^= (safe_lshift_func_uint8_t_u_u(0x97L, (safe_mul_func_uint8_t_u_u(((*p_25) , (p_22 != (*l_271))), p_423->g_53)))))), p_423->l_comm_values[(safe_mod_func_uint32_t_u_u(p_423->tid, 190))]))) != (-1L)))))) & 0x005B6435L) == (*p_25)), 0UL, 0x5FL)).s11)), ((VECTOR(uint8_t, 2))(1UL))))).hi, 65530UL)))), (*p_423->g_81)));
    return p_25;
}


/* ------------------------------------------ */
/* 
 * reads : p_423->g_81 p_423->g_82 p_423->g_41 p_423->g_93 p_423->g_53 p_423->g_52
 * writes: p_423->g_41 p_423->g_52
 */
int32_t  func_28(int8_t * p_29, int8_t * p_30, uint8_t  p_31, struct S7 * p_423)
{ /* block id: 33 */
    uint32_t l_112 = 0UL;
    uint16_t *l_117 = &p_423->g_41;
    int64_t *l_118 = (void*)0;
    int64_t *l_119 = (void*)0;
    int64_t *l_120 = (void*)0;
    int64_t *l_121[2];
    int32_t l_122 = 0L;
    uint64_t *l_132 = (void*)0;
    uint64_t *l_133[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_134 = (-6L);
    int32_t *l_135 = &p_423->g_52;
    int i;
    for (i = 0; i < 2; i++)
        l_121[i] = (void*)0;
    (*l_135) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_112, ((safe_rshift_func_uint16_t_u_u((*p_423->g_81), ((l_134 = (safe_add_func_uint32_t_u_u((0x61BD5518D9D7C220L <= ((((((((l_122 = (p_31 , (l_112 && ((*l_117) &= p_31)))) || 0L) ^ (safe_unary_minus_func_uint8_t_u(l_112))) , ((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((++(*l_117)) != 0UL), 255UL)), p_423->g_93.y)), l_112)) < 0xA1CAAA0BFB30C423L)) == p_423->g_53) && GROUP_DIVERGE(0, 1)) >= 0x3AE84E38L) , l_122)), p_423->g_82))) && 0x246E6AABEE15430FL))) <= l_112), ((VECTOR(int32_t, 2))(0x19DED147L)), ((VECTOR(int32_t, 2))(0x7538CC87L)), 1L, (-1L))).odd)).lo)), ((VECTOR(int32_t, 2))((-1L))), p_423->g_93.y, (-1L), 0x12183A9AL, (-9L))).s6;
    return (*l_135);
}


/* ------------------------------------------ */
/* 
 * reads : p_423->g_99 p_423->g_106
 * writes: p_423->g_99
 */
int8_t * func_32(int16_t  p_33, int64_t  p_34, struct S7 * p_423)
{ /* block id: 24 */
    volatile union U1 *l_108 = (void*)0;
    int32_t l_109 = 0x77BF9FC0L;
    int32_t *l_110 = &l_109;
    int8_t *l_111 = &p_423->g_27;
    for (p_423->g_99 = (-27); (p_423->g_99 == 5); p_423->g_99 = safe_add_func_uint16_t_u_u(p_423->g_99, 8))
    { /* block id: 27 */
        return &p_423->g_27;
    }
    l_108 = p_423->g_106;
    (*l_110) = l_109;
    return l_111;
}


/* ------------------------------------------ */
/* 
 * reads : p_423->g_70 p_423->g_54 p_423->l_comm_values p_423->g_81 p_423->g_27 p_423->g_87 p_423->g_90 p_423->g_44 p_423->g_93 p_423->g_52 p_423->g_96 p_423->g_99
 * writes: p_423->g_54 p_423->g_52 p_423->g_90 p_423->g_99
 */
uint64_t  func_45(int32_t  p_46, struct S7 * p_423)
{ /* block id: 12 */
    int16_t l_61[3];
    VECTOR(uint64_t, 16) l_69 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 6UL), 6UL), 6UL, 1UL, 6UL, (VECTOR(uint64_t, 2))(1UL, 6UL), (VECTOR(uint64_t, 2))(1UL, 6UL), 1UL, 6UL, 1UL, 6UL);
    VECTOR(uint32_t, 8) l_71 = (VECTOR(uint32_t, 8))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 4294967290UL), 4294967290UL), 4294967290UL, 4294967292UL, 4294967290UL);
    VECTOR(uint64_t, 2) l_72 = (VECTOR(uint64_t, 2))(0x5959469FD68CABD0L, 0UL);
    int32_t *l_73 = (void*)0;
    int32_t *l_75[7] = {&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52};
    int32_t **l_74 = &l_75[6];
    VECTOR(int64_t, 16) l_76 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int64_t, 2))(0L, 0L), (VECTOR(int64_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
    int8_t *l_79 = (void*)0;
    int32_t **l_80 = &l_73;
    uint64_t *l_88 = (void*)0;
    uint64_t *l_89 = (void*)0;
    int32_t l_98[5][5] = {{0x1996A1BCL,1L,1L,0x1996A1BCL,0x1996A1BCL},{0x1996A1BCL,1L,1L,0x1996A1BCL,0x1996A1BCL},{0x1996A1BCL,1L,1L,0x1996A1BCL,0x1996A1BCL},{0x1996A1BCL,1L,1L,0x1996A1BCL,0x1996A1BCL},{0x1996A1BCL,1L,1L,0x1996A1BCL,0x1996A1BCL}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_61[i] = 0x60EEL;
    (*l_80) = ((((0x388BL >= 0x1BF3L) , ((l_61[2] != ((safe_mod_func_uint32_t_u_u(l_61[0], (l_61[2] || func_49(func_64(((((*l_80) = (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 8))(l_69.sf586fd74)).s2262332525165670, ((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 16))(p_423->g_70.xyxxxyyxyyxyxyyx)).s0c, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_71.s4015)), 4294967293UL, 4294967295UL, 0x7AC12ABBL, 0xF36A5F68L)).hi)).xyyywxwwzxzxyxyx)).s07c8)).odd))), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_72.xx)), 0x2F0833481FF7B51EL, 0x77DAE0A7320B692EL)).ywxzyyywwywwxzzz))))).s27))))).xyxxyxxyyxxxxyxx))).sdf83)).ywyzwyzyxxzzwyzz, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0UL, 0xC8BEBE4505C2614AL)), 0xAC803B8C793451EAL, 0xB313CF365AED0E34L)), (((l_73 == ((*l_74) = &p_423->g_52)) == ((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_76.sfcbc)).xzxwyzwzxxxwyxxy)).sdb, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((safe_lshift_func_int8_t_s_s((((((void*)0 != l_79) > p_46) & p_423->g_54) && 4294967295UL), p_46)) , p_46), (-6L), 0x4E9E2562E968F5B2L, 0x1F5D8E54FB1927A6L, p_423->l_comm_values[(safe_mod_func_uint32_t_u_u(p_423->tid, 190))], p_46, 1L, 0x3865DB386A5B839CL)).s4053775502455450)).s62, ((VECTOR(int64_t, 2))(0x3119449F9AD4046EL))))).xyxxyxxy)).s5 , p_46) <= GROUP_DIVERGE(0, 1))) != p_423->l_comm_values[(safe_mod_func_uint32_t_u_u(p_423->tid, 190))]), 6UL, 0UL, 0xCC220CDAAD4FDB33L)))).s7457666073763615))).s701d)), ((VECTOR(uint64_t, 4))(0UL)))).s0742367247561201)).s6 , &p_46)) == &p_423->g_52) <= p_46), &p_423->g_52, p_46, p_423->g_81, p_423), p_423)))) == p_423->g_27)) | p_46)) && 0x73L) , (void*)0);
    p_46 |= ((p_423->g_54 == p_423->g_54) != (((1UL || ((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((8UL != (p_423->g_90 ^= ((VECTOR(uint64_t, 16))(p_423->g_87.s1653131573607104)).s5)), (-1L))), 4)) != p_423->g_44.s7)) | 0x03B57DFA0F4C7584L) , (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_423->g_93.xx)).yxyy)).y, 2))));
    l_98[0][2] ^= (((safe_sub_func_uint32_t_u_u((**l_74), p_46)) , p_423->g_96) == p_423->g_96);
    --p_423->g_99;
    return (**l_74);
}


/* ------------------------------------------ */
/* 
 * reads : p_423->g_54 p_423->l_comm_values
 * writes: p_423->g_54 p_423->g_52
 */
uint16_t  func_49(uint16_t * p_50, struct S7 * p_423)
{ /* block id: 8 */
    int32_t *l_51[10][1][10] = {{{&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52}},{{&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52}},{{&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52}},{{&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52}},{{&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52}},{{&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52}},{{&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52}},{{&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52}},{{&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52}},{{&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52,&p_423->g_52}}};
    int32_t *l_57 = &p_423->g_52;
    int32_t *l_58 = (void*)0;
    int i, j, k;
    p_423->g_54--;
    (*l_57) = (+(l_57 == l_58));
    return p_423->l_comm_values[(safe_mod_func_uint32_t_u_u(p_423->tid, 190))];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t * func_64(int32_t  p_65, int32_t * p_66, int64_t  p_67, uint16_t * p_68, struct S7 * p_423)
{ /* block id: 15 */
    return p_68;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[80];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 80; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[80];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 80; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[190];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 190; i++)
            l_comm_values[i] = 1;
    struct S7 c_424;
    struct S7* p_423 = &c_424;
    struct S7 c_425 = {
        0x6AL, // p_423->g_3
        &p_423->g_3, // p_423->g_2
        1L, // p_423->g_27
        65532UL, // p_423->g_41
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 7L), 7L), 7L, 1L, 7L), // p_423->g_44
        0x6AA96396L, // p_423->g_52
        0x0D55L, // p_423->g_53
        0x0988A21DL, // p_423->g_54
        (VECTOR(uint32_t, 2))(4294967288UL, 1UL), // p_423->g_70
        1UL, // p_423->g_82
        &p_423->g_82, // p_423->g_81
        (VECTOR(uint64_t, 8))(0x72E7DE2CA422C177L, (VECTOR(uint64_t, 4))(0x72E7DE2CA422C177L, (VECTOR(uint64_t, 2))(0x72E7DE2CA422C177L, 0UL), 0UL), 0UL, 0x72E7DE2CA422C177L, 0UL), // p_423->g_87
        253UL, // p_423->g_90
        (VECTOR(uint8_t, 2))(0UL, 255UL), // p_423->g_93
        8UL, // p_423->g_97
        &p_423->g_97, // p_423->g_96
        0UL, // p_423->g_99
        {0xD60D1178L}, // p_423->g_107
        &p_423->g_107, // p_423->g_106
        &p_423->g_52, // p_423->g_178
        &p_423->g_178, // p_423->g_177
        (VECTOR(int32_t, 4))(0x7C600016L, (VECTOR(int32_t, 2))(0x7C600016L, 1L), 1L), // p_423->g_179
        (VECTOR(int32_t, 2))(0x6E208FF1L, 0x0BDA7ED1L), // p_423->g_180
        0x410FD6D6L, // p_423->g_188
        0x2EL, // p_423->g_203
        {4UL}, // p_423->g_210
        {3UL}, // p_423->g_213
        {0xC9B1D434L}, // p_423->g_214
        {4294967291UL}, // p_423->g_215
        {0UL}, // p_423->g_216
        {4294967292UL}, // p_423->g_217
        {4294967286UL}, // p_423->g_218
        {0x977AF777L}, // p_423->g_219
        {0x3C1BBC44L}, // p_423->g_220
        {0x899EEED9L}, // p_423->g_221
        {4294967295UL}, // p_423->g_222
        {0xF66EA20AL}, // p_423->g_223
        {0x85775876L}, // p_423->g_224
        {0x8F2C4CA5L}, // p_423->g_225
        {{0xE881F7A3L},{0UL},{0xE881F7A3L},{0xE881F7A3L},{0UL},{0xE881F7A3L},{0xE881F7A3L},{0UL},{0xE881F7A3L},{0xE881F7A3L}}, // p_423->g_226
        {0x8543001AL}, // p_423->g_227
        {0xD6F6EEB3L}, // p_423->g_228
        {{0x09E43A77L},{0x09E43A77L}}, // p_423->g_229
        {0x1AC8189CL}, // p_423->g_230
        {1UL}, // p_423->g_231
        {0x258DF768L}, // p_423->g_232
        {7UL}, // p_423->g_233
        {0x71772FEAL}, // p_423->g_234
        {0x7E268B21L}, // p_423->g_235
        {0x6717282AL}, // p_423->g_236
        {0x503F6EA2L}, // p_423->g_237
        {4294967288UL}, // p_423->g_238
        {0x0E16A57DL}, // p_423->g_239
        {{4294967295UL},{4294967295UL},{4294967295UL}}, // p_423->g_240
        {0x45DE4AD5L}, // p_423->g_241
        {0xA84B0257L}, // p_423->g_242
        {1UL}, // p_423->g_243
        {4294967295UL}, // p_423->g_244
        {0UL}, // p_423->g_245
        {4294967295UL}, // p_423->g_246
        {4294967295UL}, // p_423->g_247
        {0x218C28FCL}, // p_423->g_248
        {{{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}},{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}},{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}}},{{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}},{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}},{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}}},{{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}},{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}},{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}}},{{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}},{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}},{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}}},{{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}},{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}},{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}}},{{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}},{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}},{{0xF2780F63L},{0UL},{0UL},{0xF2780F63L},{1UL}}}}, // p_423->g_249
        {0xC21E7AE0L}, // p_423->g_250
        {0xDADA2B93L}, // p_423->g_251
        {0UL}, // p_423->g_252
        {{{{1UL},{4294967295UL},{0x2F27A792L},{0x3A35D59EL},{4294967294UL},{0xCEED2223L}},{{1UL},{4294967295UL},{0x2F27A792L},{0x3A35D59EL},{4294967294UL},{0xCEED2223L}}},{{{1UL},{4294967295UL},{0x2F27A792L},{0x3A35D59EL},{4294967294UL},{0xCEED2223L}},{{1UL},{4294967295UL},{0x2F27A792L},{0x3A35D59EL},{4294967294UL},{0xCEED2223L}}},{{{1UL},{4294967295UL},{0x2F27A792L},{0x3A35D59EL},{4294967294UL},{0xCEED2223L}},{{1UL},{4294967295UL},{0x2F27A792L},{0x3A35D59EL},{4294967294UL},{0xCEED2223L}}},{{{1UL},{4294967295UL},{0x2F27A792L},{0x3A35D59EL},{4294967294UL},{0xCEED2223L}},{{1UL},{4294967295UL},{0x2F27A792L},{0x3A35D59EL},{4294967294UL},{0xCEED2223L}}},{{{1UL},{4294967295UL},{0x2F27A792L},{0x3A35D59EL},{4294967294UL},{0xCEED2223L}},{{1UL},{4294967295UL},{0x2F27A792L},{0x3A35D59EL},{4294967294UL},{0xCEED2223L}}},{{{1UL},{4294967295UL},{0x2F27A792L},{0x3A35D59EL},{4294967294UL},{0xCEED2223L}},{{1UL},{4294967295UL},{0x2F27A792L},{0x3A35D59EL},{4294967294UL},{0xCEED2223L}}}}, // p_423->g_253
        {0x646C3CCFL}, // p_423->g_254
        {0xCB9D369FL}, // p_423->g_255
        {0UL}, // p_423->g_256
        {1UL}, // p_423->g_257
        {0x94D66051L}, // p_423->g_258
        {0xBF1FC116L}, // p_423->g_259
        {0x62FEAE69L}, // p_423->g_260
        {1UL}, // p_423->g_261
        {0x524D29C7L}, // p_423->g_262
        {0UL}, // p_423->g_263
        {0xEC79DE54L}, // p_423->g_264
        {5UL}, // p_423->g_265
        {0x23A494EFL}, // p_423->g_266
        {0xE42A8C77L}, // p_423->g_267
        {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}}, // p_423->g_268
        {5UL}, // p_423->g_269
        {1L,1L,1L,1L,1L,1L,1L,1L}, // p_423->g_273
        &p_423->g_273[4], // p_423->g_272
        (VECTOR(int32_t, 2))(0x1521089FL, (-1L)), // p_423->g_285
        {0x692E5476D4B34DCCL}, // p_423->g_290
        (void*)0, // p_423->g_299
        &p_423->g_299, // p_423->g_300
        {0x6D719E8DL}, // p_423->g_310
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5BF9C21CL), 0x5BF9C21CL), 0x5BF9C21CL, (-1L), 0x5BF9C21CL), // p_423->g_314
        (VECTOR(int16_t, 2))(0x244AL, 0L), // p_423->g_317
        (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0L), 0L), 0L, 9L, 0L), // p_423->g_318
        0, // p_423->v_collective
        sequence_input[get_global_id(0)], // p_423->global_0_offset
        sequence_input[get_global_id(1)], // p_423->global_1_offset
        sequence_input[get_global_id(2)], // p_423->global_2_offset
        sequence_input[get_local_id(0)], // p_423->local_0_offset
        sequence_input[get_local_id(1)], // p_423->local_1_offset
        sequence_input[get_local_id(2)], // p_423->local_2_offset
        sequence_input[get_group_id(0)], // p_423->group_0_offset
        sequence_input[get_group_id(1)], // p_423->group_1_offset
        sequence_input[get_group_id(2)], // p_423->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 190)), permutations[0][get_linear_local_id()])), // p_423->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_424 = c_425;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_423);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_423->g_3, "p_423->g_3", print_hash_value);
    transparent_crc(p_423->g_27, "p_423->g_27", print_hash_value);
    transparent_crc(p_423->g_41, "p_423->g_41", print_hash_value);
    transparent_crc(p_423->g_44.s0, "p_423->g_44.s0", print_hash_value);
    transparent_crc(p_423->g_44.s1, "p_423->g_44.s1", print_hash_value);
    transparent_crc(p_423->g_44.s2, "p_423->g_44.s2", print_hash_value);
    transparent_crc(p_423->g_44.s3, "p_423->g_44.s3", print_hash_value);
    transparent_crc(p_423->g_44.s4, "p_423->g_44.s4", print_hash_value);
    transparent_crc(p_423->g_44.s5, "p_423->g_44.s5", print_hash_value);
    transparent_crc(p_423->g_44.s6, "p_423->g_44.s6", print_hash_value);
    transparent_crc(p_423->g_44.s7, "p_423->g_44.s7", print_hash_value);
    transparent_crc(p_423->g_52, "p_423->g_52", print_hash_value);
    transparent_crc(p_423->g_53, "p_423->g_53", print_hash_value);
    transparent_crc(p_423->g_54, "p_423->g_54", print_hash_value);
    transparent_crc(p_423->g_70.x, "p_423->g_70.x", print_hash_value);
    transparent_crc(p_423->g_70.y, "p_423->g_70.y", print_hash_value);
    transparent_crc(p_423->g_82, "p_423->g_82", print_hash_value);
    transparent_crc(p_423->g_87.s0, "p_423->g_87.s0", print_hash_value);
    transparent_crc(p_423->g_87.s1, "p_423->g_87.s1", print_hash_value);
    transparent_crc(p_423->g_87.s2, "p_423->g_87.s2", print_hash_value);
    transparent_crc(p_423->g_87.s3, "p_423->g_87.s3", print_hash_value);
    transparent_crc(p_423->g_87.s4, "p_423->g_87.s4", print_hash_value);
    transparent_crc(p_423->g_87.s5, "p_423->g_87.s5", print_hash_value);
    transparent_crc(p_423->g_87.s6, "p_423->g_87.s6", print_hash_value);
    transparent_crc(p_423->g_87.s7, "p_423->g_87.s7", print_hash_value);
    transparent_crc(p_423->g_90, "p_423->g_90", print_hash_value);
    transparent_crc(p_423->g_93.x, "p_423->g_93.x", print_hash_value);
    transparent_crc(p_423->g_93.y, "p_423->g_93.y", print_hash_value);
    transparent_crc(p_423->g_97, "p_423->g_97", print_hash_value);
    transparent_crc(p_423->g_99, "p_423->g_99", print_hash_value);
    transparent_crc(p_423->g_107.f0, "p_423->g_107.f0", print_hash_value);
    transparent_crc(p_423->g_179.x, "p_423->g_179.x", print_hash_value);
    transparent_crc(p_423->g_179.y, "p_423->g_179.y", print_hash_value);
    transparent_crc(p_423->g_179.z, "p_423->g_179.z", print_hash_value);
    transparent_crc(p_423->g_179.w, "p_423->g_179.w", print_hash_value);
    transparent_crc(p_423->g_180.x, "p_423->g_180.x", print_hash_value);
    transparent_crc(p_423->g_180.y, "p_423->g_180.y", print_hash_value);
    transparent_crc(p_423->g_188, "p_423->g_188", print_hash_value);
    transparent_crc(p_423->g_203, "p_423->g_203", print_hash_value);
    transparent_crc(p_423->g_210.f0, "p_423->g_210.f0", print_hash_value);
    transparent_crc(p_423->g_213.f0, "p_423->g_213.f0", print_hash_value);
    transparent_crc(p_423->g_214.f0, "p_423->g_214.f0", print_hash_value);
    transparent_crc(p_423->g_215.f0, "p_423->g_215.f0", print_hash_value);
    transparent_crc(p_423->g_216.f0, "p_423->g_216.f0", print_hash_value);
    transparent_crc(p_423->g_217.f0, "p_423->g_217.f0", print_hash_value);
    transparent_crc(p_423->g_218.f0, "p_423->g_218.f0", print_hash_value);
    transparent_crc(p_423->g_219.f0, "p_423->g_219.f0", print_hash_value);
    transparent_crc(p_423->g_220.f0, "p_423->g_220.f0", print_hash_value);
    transparent_crc(p_423->g_221.f0, "p_423->g_221.f0", print_hash_value);
    transparent_crc(p_423->g_222.f0, "p_423->g_222.f0", print_hash_value);
    transparent_crc(p_423->g_223.f0, "p_423->g_223.f0", print_hash_value);
    transparent_crc(p_423->g_224.f0, "p_423->g_224.f0", print_hash_value);
    transparent_crc(p_423->g_225.f0, "p_423->g_225.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_423->g_226[i].f0, "p_423->g_226[i].f0", print_hash_value);

    }
    transparent_crc(p_423->g_227.f0, "p_423->g_227.f0", print_hash_value);
    transparent_crc(p_423->g_228.f0, "p_423->g_228.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_423->g_229[i].f0, "p_423->g_229[i].f0", print_hash_value);

    }
    transparent_crc(p_423->g_230.f0, "p_423->g_230.f0", print_hash_value);
    transparent_crc(p_423->g_231.f0, "p_423->g_231.f0", print_hash_value);
    transparent_crc(p_423->g_232.f0, "p_423->g_232.f0", print_hash_value);
    transparent_crc(p_423->g_233.f0, "p_423->g_233.f0", print_hash_value);
    transparent_crc(p_423->g_234.f0, "p_423->g_234.f0", print_hash_value);
    transparent_crc(p_423->g_235.f0, "p_423->g_235.f0", print_hash_value);
    transparent_crc(p_423->g_236.f0, "p_423->g_236.f0", print_hash_value);
    transparent_crc(p_423->g_237.f0, "p_423->g_237.f0", print_hash_value);
    transparent_crc(p_423->g_238.f0, "p_423->g_238.f0", print_hash_value);
    transparent_crc(p_423->g_239.f0, "p_423->g_239.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_423->g_240[i].f0, "p_423->g_240[i].f0", print_hash_value);

    }
    transparent_crc(p_423->g_241.f0, "p_423->g_241.f0", print_hash_value);
    transparent_crc(p_423->g_242.f0, "p_423->g_242.f0", print_hash_value);
    transparent_crc(p_423->g_243.f0, "p_423->g_243.f0", print_hash_value);
    transparent_crc(p_423->g_244.f0, "p_423->g_244.f0", print_hash_value);
    transparent_crc(p_423->g_245.f0, "p_423->g_245.f0", print_hash_value);
    transparent_crc(p_423->g_246.f0, "p_423->g_246.f0", print_hash_value);
    transparent_crc(p_423->g_247.f0, "p_423->g_247.f0", print_hash_value);
    transparent_crc(p_423->g_248.f0, "p_423->g_248.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_423->g_249[i][j][k].f0, "p_423->g_249[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_423->g_250.f0, "p_423->g_250.f0", print_hash_value);
    transparent_crc(p_423->g_251.f0, "p_423->g_251.f0", print_hash_value);
    transparent_crc(p_423->g_252.f0, "p_423->g_252.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_423->g_253[i][j][k].f0, "p_423->g_253[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_423->g_254.f0, "p_423->g_254.f0", print_hash_value);
    transparent_crc(p_423->g_255.f0, "p_423->g_255.f0", print_hash_value);
    transparent_crc(p_423->g_256.f0, "p_423->g_256.f0", print_hash_value);
    transparent_crc(p_423->g_257.f0, "p_423->g_257.f0", print_hash_value);
    transparent_crc(p_423->g_258.f0, "p_423->g_258.f0", print_hash_value);
    transparent_crc(p_423->g_259.f0, "p_423->g_259.f0", print_hash_value);
    transparent_crc(p_423->g_260.f0, "p_423->g_260.f0", print_hash_value);
    transparent_crc(p_423->g_261.f0, "p_423->g_261.f0", print_hash_value);
    transparent_crc(p_423->g_262.f0, "p_423->g_262.f0", print_hash_value);
    transparent_crc(p_423->g_263.f0, "p_423->g_263.f0", print_hash_value);
    transparent_crc(p_423->g_264.f0, "p_423->g_264.f0", print_hash_value);
    transparent_crc(p_423->g_265.f0, "p_423->g_265.f0", print_hash_value);
    transparent_crc(p_423->g_266.f0, "p_423->g_266.f0", print_hash_value);
    transparent_crc(p_423->g_267.f0, "p_423->g_267.f0", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_423->g_268[i].f0, "p_423->g_268[i].f0", print_hash_value);

    }
    transparent_crc(p_423->g_269.f0, "p_423->g_269.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_423->g_273[i], "p_423->g_273[i]", print_hash_value);

    }
    transparent_crc(p_423->g_285.x, "p_423->g_285.x", print_hash_value);
    transparent_crc(p_423->g_285.y, "p_423->g_285.y", print_hash_value);
    transparent_crc(p_423->g_290.f0, "p_423->g_290.f0", print_hash_value);
    transparent_crc(p_423->g_310.f0, "p_423->g_310.f0", print_hash_value);
    transparent_crc(p_423->g_314.s0, "p_423->g_314.s0", print_hash_value);
    transparent_crc(p_423->g_314.s1, "p_423->g_314.s1", print_hash_value);
    transparent_crc(p_423->g_314.s2, "p_423->g_314.s2", print_hash_value);
    transparent_crc(p_423->g_314.s3, "p_423->g_314.s3", print_hash_value);
    transparent_crc(p_423->g_314.s4, "p_423->g_314.s4", print_hash_value);
    transparent_crc(p_423->g_314.s5, "p_423->g_314.s5", print_hash_value);
    transparent_crc(p_423->g_314.s6, "p_423->g_314.s6", print_hash_value);
    transparent_crc(p_423->g_314.s7, "p_423->g_314.s7", print_hash_value);
    transparent_crc(p_423->g_317.x, "p_423->g_317.x", print_hash_value);
    transparent_crc(p_423->g_317.y, "p_423->g_317.y", print_hash_value);
    transparent_crc(p_423->g_318.s0, "p_423->g_318.s0", print_hash_value);
    transparent_crc(p_423->g_318.s1, "p_423->g_318.s1", print_hash_value);
    transparent_crc(p_423->g_318.s2, "p_423->g_318.s2", print_hash_value);
    transparent_crc(p_423->g_318.s3, "p_423->g_318.s3", print_hash_value);
    transparent_crc(p_423->g_318.s4, "p_423->g_318.s4", print_hash_value);
    transparent_crc(p_423->g_318.s5, "p_423->g_318.s5", print_hash_value);
    transparent_crc(p_423->g_318.s6, "p_423->g_318.s6", print_hash_value);
    transparent_crc(p_423->g_318.s7, "p_423->g_318.s7", print_hash_value);
    transparent_crc(p_423->v_collective, "p_423->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 80; i++)
            transparent_crc(p_423->l_special_values[i], "p_423->l_special_values[i]", print_hash_value);
    transparent_crc(p_423->l_comm_values[get_linear_local_id()], "p_423->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_423->g_comm_values[get_linear_group_id() * 190 + get_linear_local_id()], "p_423->g_comm_values[get_linear_group_id() * 190 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
