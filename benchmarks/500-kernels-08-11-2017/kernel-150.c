// --atomics 46 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 14,84,6 -l 1,42,6
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

__constant uint32_t permutations[10][252] = {
{153,203,138,238,194,140,67,226,81,132,80,149,110,106,165,19,206,154,41,177,107,27,180,20,232,17,56,156,175,54,124,71,89,242,60,250,251,15,128,169,64,108,134,59,162,248,30,95,33,4,24,196,168,223,247,237,14,122,166,103,245,57,184,29,52,53,35,187,172,45,65,49,205,133,42,75,98,243,7,167,121,79,193,189,201,127,148,240,84,199,37,48,241,85,215,88,22,216,38,5,68,225,217,185,246,139,70,200,151,173,221,36,18,44,150,211,174,147,73,83,231,224,239,101,229,235,21,118,228,130,214,2,142,111,152,192,16,91,47,78,126,1,176,136,181,13,191,113,143,219,120,234,208,197,61,141,233,77,158,66,72,3,109,182,171,115,97,8,170,144,6,212,105,195,131,55,0,50,31,102,96,190,92,112,90,137,119,204,135,87,222,93,155,23,12,82,202,25,10,40,58,227,213,129,161,236,99,100,249,11,123,32,74,34,28,63,62,43,76,230,159,86,9,145,117,26,220,244,163,146,114,160,125,218,210,69,178,164,39,104,46,116,207,94,183,51,179,198,209,186,188,157}, // permutation 0
{33,183,155,108,233,14,40,13,173,38,229,96,168,140,246,192,93,241,191,120,247,62,147,22,44,178,219,21,11,69,166,187,176,1,9,185,57,122,190,212,207,134,73,46,90,10,20,226,32,63,100,206,240,145,59,111,43,41,98,189,101,110,177,83,53,6,115,78,186,225,251,188,213,148,3,136,132,171,42,31,160,91,210,81,162,242,182,27,123,245,223,144,201,64,124,195,24,65,23,228,61,143,153,72,222,121,248,200,198,118,126,29,184,17,224,102,249,125,28,86,163,211,25,135,37,49,68,149,76,235,244,137,71,0,80,117,250,26,133,105,146,203,221,170,158,89,7,127,139,60,131,220,172,35,141,231,95,112,218,216,175,92,109,56,84,8,230,116,103,88,19,47,67,197,114,85,130,243,237,18,174,234,199,202,209,196,161,77,97,104,217,214,142,12,164,16,193,79,180,152,205,2,52,94,165,54,75,48,154,227,4,151,204,45,119,66,128,99,150,34,106,58,232,30,129,50,82,236,157,138,179,5,39,208,156,238,55,159,113,181,239,215,194,169,167,15,51,87,70,107,36,74}, // permutation 1
{13,171,31,49,251,190,20,179,97,106,42,185,157,197,0,93,144,109,50,244,122,75,28,216,223,27,90,153,169,70,67,64,3,222,17,202,136,92,56,234,18,19,148,228,184,237,230,249,127,240,65,183,96,73,207,224,172,51,63,235,208,124,43,135,102,6,239,236,142,71,30,170,121,174,88,40,206,123,217,5,138,167,79,187,198,119,146,147,36,45,151,188,176,25,62,1,115,37,246,15,248,80,72,55,84,196,130,29,89,134,9,145,86,26,219,195,143,133,74,99,118,98,225,139,101,32,165,66,39,100,35,126,83,212,152,77,48,180,245,60,178,95,128,103,69,34,162,210,214,137,204,229,166,192,194,213,238,193,114,203,110,241,22,16,2,85,52,247,201,104,113,58,38,209,11,211,140,182,4,54,76,200,107,82,186,227,59,173,131,189,215,218,117,108,191,175,57,154,94,112,105,168,155,46,116,44,158,78,23,164,7,149,242,150,53,161,33,159,232,141,8,47,87,233,91,250,14,132,120,220,205,160,81,177,10,129,12,199,221,68,24,61,231,111,41,226,181,156,21,243,125,163}, // permutation 2
{166,210,38,61,108,243,181,234,95,69,231,171,226,98,211,112,55,189,70,116,214,36,35,43,107,66,67,197,28,177,96,212,34,57,186,94,125,215,123,251,46,12,223,150,53,229,25,230,30,227,232,99,20,39,172,72,111,65,151,202,79,216,244,0,146,110,9,124,54,136,104,145,245,198,246,184,74,161,143,109,192,90,115,201,52,174,126,71,31,204,133,51,76,89,14,58,101,138,219,175,183,103,8,56,49,176,167,132,121,24,205,156,113,193,207,50,3,23,188,19,180,139,194,77,48,82,241,228,59,154,18,4,92,218,44,73,173,140,169,105,5,87,86,160,141,27,120,165,225,159,40,62,134,153,75,33,68,155,157,164,91,242,127,100,129,2,64,81,158,147,170,114,63,11,196,236,106,128,29,179,1,15,208,88,7,119,222,191,163,131,16,135,122,42,117,209,199,187,21,233,137,17,85,45,152,60,142,248,247,162,249,148,237,217,47,97,203,200,239,240,6,144,238,235,185,41,22,220,195,213,221,102,84,168,224,32,130,118,80,37,93,83,182,149,13,206,190,178,10,26,250,78}, // permutation 3
{214,25,144,216,99,8,57,237,159,58,207,10,240,171,31,130,109,220,132,201,127,247,61,173,189,90,242,73,11,217,72,68,95,66,51,123,27,227,143,97,52,120,166,131,246,211,188,142,93,44,113,12,104,134,41,43,129,94,238,116,187,114,163,63,160,108,5,232,125,26,82,59,121,150,54,243,172,177,202,152,184,151,117,206,219,48,170,235,183,14,233,178,146,7,87,2,84,155,148,174,122,77,192,92,28,165,249,215,149,213,62,80,15,230,224,17,75,49,196,6,145,248,225,13,81,179,169,107,126,111,100,147,250,195,124,67,198,212,47,79,16,137,83,193,154,98,138,234,37,42,118,40,244,30,226,135,180,136,45,91,181,197,228,65,29,185,4,0,76,112,60,53,139,245,218,208,199,106,20,19,102,85,36,231,34,18,9,176,204,182,24,55,209,141,162,236,23,153,38,205,35,110,103,191,140,194,175,221,46,128,223,133,241,88,157,203,69,105,239,50,96,39,22,1,167,156,115,164,21,222,190,210,186,101,161,64,56,229,200,71,89,78,119,32,251,3,33,70,168,86,158,74}, // permutation 4
{133,210,52,13,168,66,48,224,198,88,25,169,127,41,51,242,79,194,239,6,137,59,123,244,46,245,141,53,246,124,171,96,234,67,103,184,202,179,12,9,83,98,170,76,195,207,206,214,235,208,209,34,165,178,215,237,185,87,231,61,221,50,10,172,109,94,128,220,126,199,196,45,0,2,183,162,30,159,17,56,212,193,200,8,81,205,130,243,153,119,216,161,146,213,138,68,173,116,58,125,150,145,112,192,24,97,102,4,223,40,122,106,134,7,197,108,72,47,36,203,27,78,86,230,154,226,121,23,63,247,73,228,74,71,187,42,22,188,89,85,92,105,120,157,229,107,186,233,82,80,44,49,249,117,5,176,104,75,148,142,90,60,113,174,1,43,177,160,38,211,15,241,250,3,155,110,14,164,204,118,251,21,91,248,54,167,218,144,147,39,151,62,84,190,18,156,222,57,236,129,152,158,55,238,77,69,111,240,11,70,19,180,115,219,33,149,100,225,163,131,16,20,136,93,29,114,65,201,99,31,227,217,101,132,189,182,139,95,64,191,143,232,166,35,32,135,26,140,37,181,28,175}, // permutation 5
{211,72,158,125,163,29,66,7,201,214,3,74,225,240,8,162,170,120,155,90,103,96,191,109,236,88,47,10,169,9,67,140,242,221,139,156,150,94,196,83,142,164,59,124,192,11,58,213,61,203,5,104,56,44,152,117,238,23,89,220,133,249,43,75,114,172,62,166,200,148,177,247,84,195,115,69,205,127,76,168,243,131,65,55,34,237,198,122,105,21,119,244,189,202,53,32,51,31,128,204,15,134,108,112,239,186,226,176,231,79,232,171,118,14,138,207,167,42,100,181,70,179,151,241,154,17,132,24,60,6,137,28,85,175,165,37,91,93,49,71,121,234,180,73,30,36,22,123,78,159,101,86,145,57,146,210,161,228,41,26,173,46,13,48,185,25,188,20,80,45,160,18,248,212,215,208,2,135,110,190,39,111,40,77,223,116,229,50,126,194,153,143,184,95,246,99,217,224,197,54,222,141,245,136,233,216,235,1,250,193,82,183,0,199,230,64,174,206,251,102,92,130,4,38,227,12,63,187,87,129,106,98,107,16,81,19,182,113,178,97,219,33,218,157,68,209,27,147,35,52,144,149}, // permutation 6
{177,74,61,47,33,13,205,147,152,244,210,250,174,98,176,60,120,95,144,238,178,118,107,59,108,127,72,31,88,66,89,14,0,246,87,141,36,52,76,234,132,167,242,124,192,169,199,91,245,232,26,185,64,162,30,204,158,40,10,110,55,197,128,154,78,161,103,173,70,166,151,156,235,93,215,219,100,160,135,84,216,143,187,122,181,116,153,202,115,123,27,164,21,83,80,229,8,15,94,54,137,111,241,65,201,97,6,225,129,249,49,211,44,228,125,194,114,189,68,4,117,184,23,200,69,45,81,139,179,214,136,172,79,195,48,37,155,209,62,170,138,43,222,1,38,109,71,239,218,17,171,213,145,18,130,220,159,243,28,34,148,149,182,233,247,29,226,58,134,16,77,119,50,73,231,126,208,75,142,56,67,12,53,191,112,203,188,236,35,180,41,102,165,230,32,42,175,237,150,206,163,82,46,217,183,168,131,193,24,196,90,7,92,121,104,20,99,19,224,39,227,248,221,207,25,5,86,11,240,198,157,251,51,85,212,106,186,63,190,96,133,113,22,2,9,105,146,57,223,101,3,140}, // permutation 7
{109,176,7,227,162,3,93,132,167,89,159,213,70,143,90,94,215,83,22,196,72,17,104,243,178,247,225,66,78,111,236,171,212,8,189,206,161,211,115,54,250,102,135,216,166,218,122,96,110,30,112,207,194,118,187,88,137,199,41,202,173,60,126,181,37,129,193,235,52,101,169,55,228,144,154,172,16,246,145,224,105,130,140,106,99,25,69,179,244,59,191,21,80,248,49,170,200,62,182,209,107,92,210,32,148,61,42,205,68,204,12,233,251,217,141,82,123,183,192,74,125,186,1,238,20,229,198,19,23,222,168,190,232,47,31,43,6,219,103,34,86,10,76,156,114,188,221,164,131,165,98,24,39,184,239,223,26,153,33,214,195,50,51,249,18,220,4,29,27,133,134,124,45,245,152,81,2,65,185,0,149,57,40,108,56,177,36,100,58,240,120,128,155,15,71,121,139,97,180,48,142,230,174,64,201,116,73,138,150,9,63,197,242,84,75,234,38,5,136,231,163,113,147,13,160,203,241,53,158,119,237,67,117,14,35,151,11,46,44,91,226,127,146,85,87,28,175,95,79,157,208,77}, // permutation 8
{168,0,126,218,106,205,9,27,137,111,166,116,202,142,231,154,74,242,19,36,175,215,97,167,176,71,143,150,55,101,21,165,210,220,250,201,76,107,70,75,14,226,232,204,17,196,34,249,18,120,162,182,209,132,89,246,88,8,235,160,91,172,110,85,149,161,1,188,241,171,58,90,77,189,131,243,184,42,216,37,12,164,245,211,10,105,100,152,221,124,156,230,133,32,198,248,7,121,128,80,190,86,51,134,129,95,82,130,33,247,99,212,102,222,173,15,92,236,79,84,2,98,240,192,96,16,251,244,81,237,94,29,108,191,117,183,185,227,61,213,178,43,64,68,200,114,125,234,57,179,56,138,194,199,72,181,214,140,31,78,50,225,41,47,208,60,174,23,3,193,206,62,187,147,24,177,159,224,48,103,69,144,63,53,38,20,203,30,59,39,35,119,54,141,229,223,122,109,28,40,163,197,148,217,239,195,118,127,65,139,233,180,46,22,87,25,158,169,123,112,83,104,151,153,207,67,113,26,49,146,4,170,219,145,52,13,155,73,66,11,228,136,93,6,5,115,157,186,238,135,44,45} // permutation 9
};

// Seed: 600059678

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t * volatile g_37;
    int32_t g_39;
    volatile int32_t g_46;
    volatile int32_t g_47;
    int32_t g_48;
    volatile uint64_t g_49;
    uint32_t g_52;
    uint64_t g_92;
    volatile VECTOR(int64_t, 8) g_93;
    uint32_t g_96[1][9];
    volatile int32_t g_114;
    int32_t g_117;
    volatile int32_t g_118;
    volatile uint8_t g_119[4][3][1];
    uint64_t g_123;
    volatile int32_t *g_139;
    volatile int32_t ** volatile g_138;
    uint32_t g_142;
    uint16_t g_177;
    uint16_t g_180[2];
    int32_t *g_182;
    int32_t ** volatile g_181;
    int32_t ** volatile g_192;
    uint64_t *g_209[9];
    uint64_t **g_208;
    int16_t g_213;
    int32_t ** volatile g_217;
    VECTOR(int8_t, 4) g_243;
    uint32_t g_266;
    int32_t g_301;
    uint8_t g_313;
    int64_t g_315;
    uint8_t g_317;
    VECTOR(int16_t, 2) g_325;
    VECTOR(int16_t, 8) g_326;
    volatile uint32_t g_363;
    VECTOR(uint64_t, 16) g_381;
    VECTOR(int64_t, 16) g_399;
    volatile VECTOR(int64_t, 4) g_402;
    VECTOR(int64_t, 16) g_403;
    int8_t * volatile g_406;
    int16_t g_411;
    uint64_t g_414;
    volatile int16_t g_421;
    volatile int16_t *g_420[2];
    volatile int16_t ** volatile g_419;
    volatile VECTOR(uint8_t, 8) g_457;
    VECTOR(uint8_t, 8) g_474;
    VECTOR(uint8_t, 4) g_475;
    int32_t g_477;
    uint32_t *g_490;
    uint32_t ** volatile g_489;
    int32_t ** volatile g_497;
    VECTOR(int8_t, 16) g_516;
    VECTOR(uint16_t, 4) g_524;
    volatile VECTOR(uint8_t, 16) g_538;
    uint16_t g_563;
    volatile VECTOR(uint32_t, 8) g_567;
    VECTOR(int64_t, 8) g_588;
    volatile VECTOR(int64_t, 8) g_592;
    volatile VECTOR(uint64_t, 4) g_620;
    volatile VECTOR(uint8_t, 8) g_627;
    int8_t *g_837[10];
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
uint32_t  func_1(struct S0 * p_1119);
int8_t  func_2(uint32_t  p_3, int32_t  p_4, struct S0 * p_1119);
int32_t  func_5(int32_t  p_6, uint32_t  p_7, int64_t  p_8, uint32_t  p_9, uint32_t  p_10, struct S0 * p_1119);
int32_t  func_13(uint32_t  p_14, uint32_t  p_15, uint32_t  p_16, uint16_t  p_17, int64_t  p_18, struct S0 * p_1119);
int32_t  func_21(uint16_t  p_22, uint64_t  p_23, int64_t  p_24, int64_t  p_25, struct S0 * p_1119);
int8_t  func_27(uint32_t  p_28, uint8_t  p_29, uint32_t  p_30, struct S0 * p_1119);
uint8_t  func_55(int32_t * p_56, uint8_t  p_57, int8_t  p_58, uint32_t  p_59, struct S0 * p_1119);
int32_t * func_60(uint64_t  p_61, uint64_t  p_62, int32_t * p_63, int32_t * p_64, struct S0 * p_1119);
int32_t * func_68(int32_t * p_69, int32_t  p_70, int64_t  p_71, int32_t * p_72, struct S0 * p_1119);
int32_t * func_73(int64_t  p_74, uint32_t  p_75, int64_t  p_76, uint16_t  p_77, struct S0 * p_1119);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1119->g_comm_values p_1119->l_comm_values p_1119->g_37 p_1119->g_49 p_1119->g_52 p_1119->g_48 p_1119->g_92 p_1119->g_93 p_1119->g_96 p_1119->g_39 p_1119->g_119 p_1119->g_123 p_1119->g_138 p_1119->g_192 p_1119->g_180 p_1119->g_117 p_1119->g_208 p_1119->g_181 p_1119->g_182 p_1119->g_217 p_1119->g_139 p_1119->g_142 p_1119->g_114 p_1119->g_46 p_1119->g_213 p_1119->g_266 p_1119->g_301 p_1119->g_313 p_1119->g_315 p_1119->g_243 p_1119->g_363 p_1119->g_317 p_1119->g_381 p_1119->g_326 p_1119->g_177 p_1119->g_399 p_1119->g_402 p_1119->g_403 p_1119->g_406 p_1119->g_411 p_1119->g_414 p_1119->g_419 p_1119->g_325 p_1119->g_420 p_1119->g_421 p_1119->g_457 p_1119->g_474 p_1119->g_475 p_1119->g_489 p_1119->g_497 p_1119->g_563 p_1119->g_516 p_1119->g_490 p_1119->g_837 p_1119->g_588 p_1119->g_524
 * writes: p_1119->g_37 p_1119->g_49 p_1119->g_52 p_1119->g_92 p_1119->g_96 p_1119->g_39 p_1119->g_119 p_1119->g_48 p_1119->g_123 p_1119->g_139 p_1119->g_182 p_1119->g_208 p_1119->g_46 p_1119->g_243 p_1119->g_117 p_1119->g_114 p_1119->g_301 p_1119->g_142 p_1119->g_313 p_1119->g_315 p_1119->g_213 p_1119->g_317 p_1119->g_363 p_1119->g_209 p_1119->g_414 p_1119->g_266 p_1119->g_325 p_1119->g_489 p_1119->g_411 p_1119->g_180 p_1119->g_563 p_1119->g_490 p_1119->g_837
 */
uint32_t  func_1(struct S0 * p_1119)
{ /* block id: 4 */
    uint16_t l_26 = 0x8B01L;
    int32_t *l_430 = &p_1119->g_48;
    uint16_t l_479[9][10] = {{65529UL,2UL,5UL,2UL,65529UL,0xE216L,0x4C40L,65529UL,0x5553L,0xD3AEL},{65529UL,2UL,5UL,2UL,65529UL,0xE216L,0x4C40L,65529UL,0x5553L,0xD3AEL},{65529UL,2UL,5UL,2UL,65529UL,0xE216L,0x4C40L,65529UL,0x5553L,0xD3AEL},{65529UL,2UL,5UL,2UL,65529UL,0xE216L,0x4C40L,65529UL,0x5553L,0xD3AEL},{65529UL,2UL,5UL,2UL,65529UL,0xE216L,0x4C40L,65529UL,0x5553L,0xD3AEL},{65529UL,2UL,5UL,2UL,65529UL,0xE216L,0x4C40L,65529UL,0x5553L,0xD3AEL},{65529UL,2UL,5UL,2UL,65529UL,0xE216L,0x4C40L,65529UL,0x5553L,0xD3AEL},{65529UL,2UL,5UL,2UL,65529UL,0xE216L,0x4C40L,65529UL,0x5553L,0xD3AEL},{65529UL,2UL,5UL,2UL,65529UL,0xE216L,0x4C40L,65529UL,0x5553L,0xD3AEL}};
    int i, j;
    (*l_430) = ((p_1119->g_comm_values[p_1119->tid] <= (p_1119->g_comm_values[p_1119->tid] , ((VECTOR(uint8_t, 2))(255UL, 6UL)).hi)) && (((((func_2((func_5((safe_lshift_func_int16_t_s_u(((((*l_430) = func_13(p_1119->g_comm_values[p_1119->tid], p_1119->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1119->tid, 252))], p_1119->g_comm_values[p_1119->tid], (safe_mul_func_uint8_t_u_u(((!func_21(l_26, (func_27((1UL & p_1119->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1119->tid, 252))]), (safe_mod_func_int8_t_s_s((~(safe_div_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(l_26, l_26)), l_26))), l_26)), p_1119->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1119->tid, 252))], p_1119) | p_1119->g_comm_values[p_1119->tid]), l_26, l_26, p_1119)) | l_26), p_1119->g_180[1])), p_1119->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1119->tid, 252))], p_1119)) < GROUP_DIVERGE(2, 1)) < 0xE7AC9F449D4B9347L), 5)), p_1119->g_381.s3, p_1119->g_325.y, l_26, p_1119->g_399.s8, p_1119) , (*l_430)), l_479[5][5], p_1119) && 0x04L) == p_1119->g_381.s9) || p_1119->g_588.s3) | p_1119->g_381.s4) <= p_1119->g_475.z));
    return p_1119->g_524.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_1119->g_243 p_1119->g_139 p_1119->g_489 p_1119->g_497 p_1119->g_119 p_1119->g_317 p_1119->g_39 p_1119->g_563 p_1119->g_138 p_1119->g_114 p_1119->g_46 p_1119->g_177 p_1119->g_516 p_1119->g_419 p_1119->g_420 p_1119->g_421 p_1119->g_48 p_1119->g_490 p_1119->g_313 p_1119->g_315 p_1119->g_180 p_1119->g_837
 * writes: p_1119->g_114 p_1119->g_46 p_1119->g_489 p_1119->g_411 p_1119->g_266 p_1119->g_182 p_1119->g_117 p_1119->g_180 p_1119->g_39 p_1119->g_563 p_1119->g_490 p_1119->g_315 p_1119->g_837
 */
int8_t  func_2(uint32_t  p_3, int32_t  p_4, struct S0 * p_1119)
{ /* block id: 216 */
    uint16_t *l_482[5];
    uint16_t **l_483 = &l_482[2];
    int64_t *l_484 = &p_1119->g_315;
    int32_t *l_496 = &p_1119->g_39;
    int32_t l_550 = 0x6DBAB3D8L;
    int32_t l_553[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    VECTOR(int64_t, 2) l_591 = (VECTOR(int64_t, 2))(3L, 0x72D94C1C43EDE9BFL);
    VECTOR(int64_t, 8) l_595 = (VECTOR(int64_t, 8))((-8L), (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), 0x2CC3AEB0C67EDCE4L), 0x2CC3AEB0C67EDCE4L), 0x2CC3AEB0C67EDCE4L, (-8L), 0x2CC3AEB0C67EDCE4L);
    VECTOR(uint8_t, 8) l_628 = (VECTOR(uint8_t, 8))(0xC1L, (VECTOR(uint8_t, 4))(0xC1L, (VECTOR(uint8_t, 2))(0xC1L, 0UL), 0UL), 0UL, 0xC1L, 0UL);
    VECTOR(uint8_t, 2) l_630 = (VECTOR(uint8_t, 2))(255UL, 0x3EL);
    uint8_t *l_654[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(int64_t, 2) l_657 = (VECTOR(int64_t, 2))(1L, 8L);
    int8_t l_661 = 0x2CL;
    int8_t l_662 = 1L;
    uint8_t l_663[10][8][3] = {{{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L}},{{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L}},{{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L}},{{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L}},{{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L}},{{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L}},{{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L}},{{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L}},{{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L}},{{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L},{252UL,0x32L,0x32L}}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_482[i] = &p_1119->g_180[1];
    (*p_1119->g_139) = ((p_1119->g_243.x ^ (&p_1119->g_180[1] != ((*l_483) = l_482[2]))) <= (((VECTOR(uint32_t, 4))(0xFF31C4A5L, ((VECTOR(uint32_t, 2))(0xB293F52BL, 4294967291UL)), 0x5034025AL)).y != (&p_1119->g_315 != l_484)));
    if ((safe_mul_func_uint16_t_u_u(0xA762L, 0xCBE8L)))
    { /* block id: 219 */
        uint32_t l_510 = 4294967287UL;
        VECTOR(uint32_t, 8) l_518 = (VECTOR(uint32_t, 8))(0xCBC60F14L, (VECTOR(uint32_t, 4))(0xCBC60F14L, (VECTOR(uint32_t, 2))(0xCBC60F14L, 0x3AD2E9F3L), 0x3AD2E9F3L), 0x3AD2E9F3L, 0xCBC60F14L, 0x3AD2E9F3L);
        uint64_t **l_523 = &p_1119->g_209[1];
        int64_t l_535 = 0x41B1A1DE38B374B2L;
        int32_t l_548 = 0x12E74023L;
        int32_t l_556 = (-9L);
        VECTOR(int64_t, 4) l_589 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x39767B41E21E7BB3L), 0x39767B41E21E7BB3L);
        VECTOR(int64_t, 8) l_593 = (VECTOR(int64_t, 8))(0x1DF5E5DF50837B7EL, (VECTOR(int64_t, 4))(0x1DF5E5DF50837B7EL, (VECTOR(int64_t, 2))(0x1DF5E5DF50837B7EL, 0x4E1526A09F172CA6L), 0x4E1526A09F172CA6L), 0x4E1526A09F172CA6L, 0x1DF5E5DF50837B7EL, 0x4E1526A09F172CA6L);
        VECTOR(int64_t, 2) l_596 = (VECTOR(int64_t, 2))(0x52F07324E9F04806L, 2L);
        uint32_t *l_621 = &p_1119->g_142;
        uint32_t l_622 = 0UL;
        int32_t *l_623 = &p_1119->g_48;
        int32_t *l_659 = &p_1119->g_48;
        int32_t *l_660[7];
        int i;
        for (i = 0; i < 7; i++)
            l_660[i] = (void*)0;
        for (p_3 = 0; (p_3 < 25); p_3 = safe_add_func_int16_t_s_s(p_3, 1))
        { /* block id: 222 */
            uint32_t ** volatile *l_491 = &p_1119->g_489;
            VECTOR(int8_t, 16) l_517 = (VECTOR(int8_t, 16))(0x10L, (VECTOR(int8_t, 4))(0x10L, (VECTOR(int8_t, 2))(0x10L, 0x02L), 0x02L), 0x02L, 0x10L, 0x02L, (VECTOR(int8_t, 2))(0x10L, 0x02L), (VECTOR(int8_t, 2))(0x10L, 0x02L), 0x10L, 0x02L, 0x10L, 0x02L);
            int32_t l_541 = 1L;
            int32_t l_552 = (-1L);
            int32_t l_555 = 0x365AB267L;
            int32_t l_560 = 2L;
            int32_t l_561 = 0x6932966CL;
            VECTOR(int64_t, 2) l_587 = (VECTOR(int64_t, 2))((-1L), 0x53789144CFC2314BL);
            VECTOR(int64_t, 16) l_594 = (VECTOR(int64_t, 16))(0x051779C3143E1AFEL, (VECTOR(int64_t, 4))(0x051779C3143E1AFEL, (VECTOR(int64_t, 2))(0x051779C3143E1AFEL, 0x291AAF54B1AD4C7EL), 0x291AAF54B1AD4C7EL), 0x291AAF54B1AD4C7EL, 0x051779C3143E1AFEL, 0x291AAF54B1AD4C7EL, (VECTOR(int64_t, 2))(0x051779C3143E1AFEL, 0x291AAF54B1AD4C7EL), (VECTOR(int64_t, 2))(0x051779C3143E1AFEL, 0x291AAF54B1AD4C7EL), 0x051779C3143E1AFEL, 0x291AAF54B1AD4C7EL, 0x051779C3143E1AFEL, 0x291AAF54B1AD4C7EL);
            VECTOR(uint8_t, 4) l_629 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 1UL), 1UL);
            int8_t *l_639 = (void*)0;
            int64_t *l_642 = (void*)0;
            int64_t *l_643 = &l_535;
            int8_t *l_644 = (void*)0;
            int8_t *l_645 = (void*)0;
            int8_t *l_646[10][1][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0}}};
            int32_t *l_647 = &l_550;
            uint32_t **l_658 = &l_621;
            int i, j, k;
            (*l_491) = p_1119->g_489;
            for (p_1119->g_411 = 0; (p_1119->g_411 >= 16); p_1119->g_411 = safe_add_func_uint32_t_u_u(p_1119->g_411, 2))
            { /* block id: 226 */
                VECTOR(int64_t, 4) l_549 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-6L)), (-6L));
                int32_t l_551[8][7][4] = {{{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L}},{{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L}},{{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L}},{{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L}},{{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L}},{{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L}},{{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L}},{{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L},{0x67EF0FC8L,0x67EF0FC8L,(-1L),5L}}};
                int32_t l_562 = 0x3D2301C0L;
                VECTOR(uint32_t, 2) l_566 = (VECTOR(uint32_t, 2))(0x3B0B7C54L, 0UL);
                VECTOR(int64_t, 8) l_586 = (VECTOR(int64_t, 8))(0x18D07B69D7C31978L, (VECTOR(int64_t, 4))(0x18D07B69D7C31978L, (VECTOR(int64_t, 2))(0x18D07B69D7C31978L, 9L), 9L), 9L, 0x18D07B69D7C31978L, 9L);
                VECTOR(int64_t, 2) l_590 = (VECTOR(int64_t, 2))(1L, 0x799FBC6F05A37115L);
                uint8_t *l_613 = &p_1119->g_313;
                uint32_t *l_624 = &p_1119->g_142;
                int8_t *l_625 = (void*)0;
                int8_t *l_626 = (void*)0;
                int i, j, k;
                for (p_1119->g_266 = (-9); (p_1119->g_266 > 58); p_1119->g_266++)
                { /* block id: 229 */
                    (*p_1119->g_497) = l_496;
                }
                for (p_1119->g_117 = 0; (p_1119->g_117 != 4); ++p_1119->g_117)
                { /* block id: 234 */
                    int32_t l_525 = 0x08A5B82FL;
                    uint8_t l_530 = 0x45L;
                    uint64_t *l_533 = (void*)0;
                    uint64_t *l_534 = &p_1119->g_123;
                    VECTOR(uint8_t, 4) l_539 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x4EL), 0x4EL);
                    int32_t l_542 = 0x570B76F5L;
                    int32_t l_554 = 0x63BE316FL;
                    int32_t l_557 = 0L;
                    VECTOR(int32_t, 4) l_558 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x092444A7L), 0x092444A7L);
                    int64_t l_559 = 0x3F21B4E196397DD5L;
                    uint32_t l_581[3][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL}};
                    int i, j;
                    if ((atomic_inc(&p_1119->g_atomic_input[46 * get_linear_group_id() + 23]) == 4))
                    { /* block id: 236 */
                        int64_t l_500 = 1L;
                        uint32_t l_501 = 0x70D7651CL;
                        int16_t l_504[4][4] = {{0x0FE5L,(-2L),0x0FE5L,0x0FE5L},{0x0FE5L,(-2L),0x0FE5L,0x0FE5L},{0x0FE5L,(-2L),0x0FE5L,0x0FE5L},{0x0FE5L,(-2L),0x0FE5L,0x0FE5L}};
                        uint8_t l_505[4];
                        uint16_t l_506[5];
                        int8_t l_507 = (-1L);
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_505[i] = 1UL;
                        for (i = 0; i < 5; i++)
                            l_506[i] = 0UL;
                        l_500 = 1L;
                        l_501--;
                        l_505[1] = l_504[0][2];
                        l_507 &= l_506[2];
                        unsigned int result = 0;
                        result += l_500;
                        result += l_501;
                        int l_504_i0, l_504_i1;
                        for (l_504_i0 = 0; l_504_i0 < 4; l_504_i0++) {
                            for (l_504_i1 = 0; l_504_i1 < 4; l_504_i1++) {
                                result += l_504[l_504_i0][l_504_i1];
                            }
                        }
                        int l_505_i0;
                        for (l_505_i0 = 0; l_505_i0 < 4; l_505_i0++) {
                            result += l_505[l_505_i0];
                        }
                        int l_506_i0;
                        for (l_506_i0 = 0; l_506_i0 < 5; l_506_i0++) {
                            result += l_506[l_506_i0];
                        }
                        result += l_507;
                        atomic_add(&p_1119->g_special_values[46 * get_linear_group_id() + 23], result);
                    }
                    else
                    { /* block id: 241 */
                        (1 + 1);
                    }
                    (*p_1119->g_139) = (p_4 < (safe_div_func_int64_t_s_s(0x28671C15C1C7C0EEL, l_510)));
                    if ((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_unary_minus_func_uint16_t_u(((**l_483) = (p_1119->g_119[0][0][0] >= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 4))(p_1119->g_516.sea1c)).odd, ((VECTOR(int8_t, 8))(l_517.sca5397c8)).s02))).xyxyxyxx)).s5)))) ^ ((((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_518.s11)).xyyy)).yxyzzzyy)), 4294967289UL, 0x5D05192AL, (((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(((void*)0 == l_523), 0x137FB6AB5433FB30L)) , ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1119->g_524.wyzw)).xywywzzx)).s5), l_525)) <= (((safe_sub_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((*l_484) = l_530) < (0xA0FCL || (safe_div_func_uint64_t_u_u(((*l_534) = 0UL), p_4)))), 1UL)), p_3)) , 18446744073709551615UL) == p_1119->g_96[0][5])) < l_535), ((VECTOR(uint32_t, 2))(0x23B1C424L)), 0xC507451FL, 4294967295UL, 0xDF2AAC0AL)).sf , p_1119->g_317) ^ (-3L)) != l_517.sf) > 1UL)), l_518.s7)), p_3)))
                    { /* block id: 248 */
                        int32_t *l_540 = &p_1119->g_48;
                        int32_t *l_543 = (void*)0;
                        int32_t *l_544 = &p_1119->g_39;
                        int32_t *l_545 = &l_541;
                        int32_t *l_546 = &p_1119->g_48;
                        int32_t *l_547[1];
                        VECTOR(int16_t, 16) l_576 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 6L), 6L), 6L, (-1L), 6L, (VECTOR(int16_t, 2))((-1L), 6L), (VECTOR(int16_t, 2))((-1L), 6L), (-1L), 6L, (-1L), 6L);
                        int8_t *l_582[1][2];
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_547[i] = (void*)0;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_582[i][j] = (void*)0;
                        }
                        (*l_496) &= ((l_517.s2 , (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(p_1119->g_538.s42a8)).xzwwwxyy)).s5, 0x0BL))) >= (1UL >= ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(l_539.wz)).xxxyxxxx)).odd)).xyzwwwzz)).s0));
                        p_1119->g_563--;
                        (**p_1119->g_138) &= p_4;
                        (*l_545) = (((&l_482[2] != (void*)0) > ((((((GROUP_DIVERGE(0, 1) & (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 2))(l_566.yx)).yyyyyxyx, ((VECTOR(uint32_t, 16))(p_1119->g_567.s5662212175227042)).lo))))).even)).y , (((safe_add_func_uint32_t_u_u(((p_1119->g_177 , p_3) <= (safe_lshift_func_int16_t_s_s(p_4, (safe_mod_func_uint32_t_u_u(p_3, (((safe_rshift_func_int8_t_s_s((((p_3 == (p_3 & ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x506EL, 0x2AC7L)).yxxxxxxx)).s7365413300725445, ((VECTOR(int16_t, 8))(l_576.sdf57fc7a)).s4553466754773076))), (int16_t)((safe_rshift_func_int8_t_s_s(((*l_496) = (safe_sub_func_int32_t_s_s(p_3, l_581[2][1]))), p_1119->g_96[0][6])) & l_549.w)))).s73, ((VECTOR(int16_t, 2))(0x18F1L))))).even)) , p_3) && 0x5A008977415C4535L), p_4)) , l_566.y) & p_3)))))), l_555)) || p_4) ^ p_1119->g_516.s9))) <= 0x3B45F67C342005FEL) <= 0L) ^ p_4) <= 0x7DB705DFA722565CL) , 0UL)) , 1L);
                    }
                    else
                    { /* block id: 254 */
                        uint16_t l_583 = 9UL;
                        (*l_496) = l_583;
                        if (l_583)
                            break;
                    }
                }
                if (p_4)
                    continue;
                (*l_496) |= ((**p_1119->g_419) && ((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 2))(0x33694547157CE91CL, 0x0425570613DEB37CL)).xyyx, ((VECTOR(int64_t, 16))(l_586.s0155642345501644)).se0e0))).zyxyyxzyxxxyzzyy, ((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_587.xy)).xxxy)).hi, ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 4))(p_1119->g_588.s3151)), ((VECTOR(int64_t, 4))(l_589.zwww)), ((VECTOR(int64_t, 2))(l_590.yx)).yxyx))).wwzyzzwz, ((VECTOR(int64_t, 2))(l_591.xy)).xyxxyyyx, ((VECTOR(int64_t, 4))(0x2BED482E4F80C505L, ((VECTOR(int64_t, 2))(p_1119->g_592.s67)), (-2L))).yyzzxwyw))), ((VECTOR(int64_t, 2))(l_593.s60)).xyxxxxyx))).s12)).xxyx)).odd, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_594.sb63244ca45305f46)).odd)).s43)))))))))).yxxxyyxy)).s62)).xxxy, ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 2))(0x2E30CC7B8DCACAEBL, 0x41336C75F594D30BL)).yxxx, ((VECTOR(int64_t, 2))(l_595.s25)).yxxx, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_596.yyyxxxyy)).hi)).even)).xyxx)))))).zwxywxxxxywxxwxw))).s534e, ((VECTOR(int64_t, 16))((safe_sub_func_uint16_t_u_u(0x1C42L, (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((~FAKE_DIVERGE(p_1119->global_2_offset, get_global_id(2), 10)), (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((+(safe_add_func_uint8_t_u_u(249UL, (p_1119->g_243.x = ((*l_623) = (safe_sub_func_uint32_t_u_u(((GROUP_DIVERGE(1, 1) == (65535UL > (((*p_1119->g_489) = func_68(((safe_div_func_uint32_t_u_u(((~l_594.sf) <= ((+(++(*l_613))) || (safe_mod_func_uint64_t_u_u(((safe_mod_func_int16_t_s_s(0x0ADDL, p_4)) , ((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0xC80F53C2ACE615C6L, 1UL)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(p_1119->g_620.zwxw)).wwzzzywy)).s63)), ((VECTOR(uint64_t, 2))(0x735289CA9A2E35B3L, 6UL)), 18446744073709551615UL, 0xF5393CC686DF6D5FL)).s5451043073252265)).s11, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(p_4, 0UL, (l_621 == (void*)0), ((VECTOR(uint64_t, 4))(0xA3DC7D2BC81C5D5BL)), 0xF264539FA5D898BAL)).hi)).even, ((VECTOR(uint64_t, 2))(0UL))))).yyxxyxyy)).even, ((VECTOR(uint64_t, 4))(18446744073709551608UL))))).x), l_622)))), 0x8A5CDA3CL)) , &l_551[1][2][1]), p_1119->g_403.s4, p_1119->g_92, l_623, p_1119)) == l_624))) | FAKE_DIVERGE(p_1119->local_0_offset, get_local_id(0), 10)), 0L))))))), p_1119->g_524.x)), l_551[1][2][1])))), p_3)))), (-9L), (-6L), ((VECTOR(int64_t, 4))((-1L))), p_4, (*l_623), p_1119->g_47, p_4, ((VECTOR(int64_t, 2))((-8L))), ((VECTOR(int64_t, 2))(0x67E51899F4FCA721L)), 0L)).s03c8))).w, 1UL)) , 0x6D98L));
            }
            (*l_647) |= (p_3 != (((*l_496) = (((((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xACL, 1UL)), ((VECTOR(uint8_t, 8))(p_1119->g_627.s43541251)), ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 4))(FAKE_DIVERGE(p_1119->local_2_offset, get_local_id(2), 10), 8UL, 1UL, 0x32L)).xyxwzxywwywyzxwz, ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_628.s60)), 9UL, 3UL)).even)).yyyxxyxyyxxyyxyx, ((VECTOR(uint8_t, 8))(l_629.zwwzywzy)).s4032066751030322))), ((VECTOR(uint8_t, 4))(l_630.xyxy)).xwwzxyzxwzxywyzw))).s68, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x71L, 0x24L)), (safe_sub_func_uint8_t_u_u(p_4, ((safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((*l_623) &= (250UL & p_1119->g_266)) <= (p_1119->g_315 | (l_560 <= ((*l_643) = (safe_lshift_func_int8_t_s_s((*l_496), p_3)))))), 2UL)), p_4)), (*l_496))) > p_1119->g_52))), ((VECTOR(uint8_t, 4))(255UL)), 0x4DL)))).s02))).yxxy))).hi, ((VECTOR(uint8_t, 2))(0x1BL))))), 0x98L, ((VECTOR(uint8_t, 2))(0UL)), 8UL)).s67, (uint8_t)p_1119->g_46))).xxxy, ((VECTOR(uint8_t, 4))(255UL))))).wwwwzwxyzyyzxzyx, ((VECTOR(uint8_t, 16))(0UL))))).hi)).s4047640733117556))).even, ((VECTOR(uint16_t, 8))(0xB28AL))))).s2 , 0xD62B773EL) < (*l_496)) <= p_1119->g_243.x)) || p_3));
            (*p_1119->g_139) = ((((((*l_484) ^= ((safe_div_func_int32_t_s_s((((safe_div_func_int8_t_s_s((*l_623), (252UL || ((safe_rshift_func_uint16_t_u_s(0x2BEFL, (l_654[6] == &p_1119->g_119[0][0][0]))) < (safe_add_func_int32_t_s_s(((((**l_491) = (**l_491)) == ((*l_658) = ((p_4 | ((VECTOR(int64_t, 16))(l_657.yyxyyyxyyyxxxyxy)).s0) , &l_622))) & (*l_647)), p_1119->g_313)))))) , (void*)0) == &l_622), 0x35FDFD35L)) != p_1119->g_563)) >= 18446744073709551608UL) <= p_1119->g_180[1]) < 0x07C5L) > (*l_647));
        }
        l_663[0][4][1]--;
        if ((atomic_inc(&p_1119->g_atomic_input[46 * get_linear_group_id() + 33]) == 9))
        { /* block id: 277 */
            int32_t l_666[1][6][7] = {{{0x2F0A4686L,0x6A5C822AL,0x52F028A3L,0L,(-4L),(-4L),0L},{0x2F0A4686L,0x6A5C822AL,0x52F028A3L,0L,(-4L),(-4L),0L},{0x2F0A4686L,0x6A5C822AL,0x52F028A3L,0L,(-4L),(-4L),0L},{0x2F0A4686L,0x6A5C822AL,0x52F028A3L,0L,(-4L),(-4L),0L},{0x2F0A4686L,0x6A5C822AL,0x52F028A3L,0L,(-4L),(-4L),0L},{0x2F0A4686L,0x6A5C822AL,0x52F028A3L,0L,(-4L),(-4L),0L}}};
            uint16_t l_766 = 1UL;
            int32_t l_814[8][1] = {{(-7L)},{(-7L)},{(-7L)},{(-7L)},{(-7L)},{(-7L)},{(-7L)},{(-7L)}};
            uint32_t l_815 = 0xBA50E212L;
            int16_t l_816 = 0x621EL;
            VECTOR(int32_t, 16) l_817 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-3L)), (-3L)), (-3L), 3L, (-3L), (VECTOR(int32_t, 2))(3L, (-3L)), (VECTOR(int32_t, 2))(3L, (-3L)), 3L, (-3L), 3L, (-3L));
            VECTOR(int32_t, 8) l_818 = (VECTOR(int32_t, 8))(0x71815D77L, (VECTOR(int32_t, 4))(0x71815D77L, (VECTOR(int32_t, 2))(0x71815D77L, (-2L)), (-2L)), (-2L), 0x71815D77L, (-2L));
            VECTOR(int32_t, 8) l_819 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
            uint8_t l_820 = 1UL;
            int8_t l_821 = 0x1AL;
            int32_t l_822 = 0x62844C23L;
            uint32_t l_823 = 0UL;
            int i, j, k;
            for (l_666[0][4][6] = 0; (l_666[0][4][6] <= (-2)); l_666[0][4][6] = safe_sub_func_uint64_t_u_u(l_666[0][4][6], 1))
            { /* block id: 280 */
                uint8_t l_671[5];
                uint8_t *l_670 = &l_671[4];
                uint8_t **l_669[10][9][2] = {{{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670}},{{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670}},{{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670}},{{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670}},{{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670}},{{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670}},{{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670}},{{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670}},{{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670}},{{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670},{&l_670,&l_670}}};
                int32_t l_672 = 1L;
                int8_t l_755 = 0x5EL;
                VECTOR(uint64_t, 4) l_756 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x86AB44F8EC76F677L), 0x86AB44F8EC76F677L);
                VECTOR(uint64_t, 2) l_757 = (VECTOR(uint64_t, 2))(0xAB8C15FEE33BB7D1L, 0xD2632FAA4CFEE0E8L);
                VECTOR(uint64_t, 16) l_758 = (VECTOR(uint64_t, 16))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0UL), 0UL), 0UL, 18446744073709551608UL, 0UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0UL), (VECTOR(uint64_t, 2))(18446744073709551608UL, 0UL), 18446744073709551608UL, 0UL, 18446744073709551608UL, 0UL);
                VECTOR(uint64_t, 4) l_759 = (VECTOR(uint64_t, 4))(0xBCB5683BD2EC0CD7L, (VECTOR(uint64_t, 2))(0xBCB5683BD2EC0CD7L, 0xBACDFD4BEC89DF58L), 0xBACDFD4BEC89DF58L);
                VECTOR(uint64_t, 2) l_760 = (VECTOR(uint64_t, 2))(1UL, 18446744073709551611UL);
                VECTOR(uint64_t, 8) l_761 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551611UL), 18446744073709551611UL), 18446744073709551611UL, 18446744073709551615UL, 18446744073709551611UL);
                uint16_t l_762 = 1UL;
                uint32_t l_763 = 1UL;
                int16_t l_764 = (-1L);
                int8_t l_765[6][9] = {{(-1L),(-1L),0L,(-1L),(-1L),(-1L),(-1L),0L,(-1L)},{(-1L),(-1L),0L,(-1L),(-1L),(-1L),(-1L),0L,(-1L)},{(-1L),(-1L),0L,(-1L),(-1L),(-1L),(-1L),0L,(-1L)},{(-1L),(-1L),0L,(-1L),(-1L),(-1L),(-1L),0L,(-1L)},{(-1L),(-1L),0L,(-1L),(-1L),(-1L),(-1L),0L,(-1L)},{(-1L),(-1L),0L,(-1L),(-1L),(-1L),(-1L),0L,(-1L)}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_671[i] = 0xA2L;
                l_669[1][4][0] = l_669[3][1][0];
                if ((l_672 = l_672))
                { /* block id: 283 */
                    int8_t l_673 = 0x00L;
                    uint32_t l_722 = 0x42BFED0DL;
                    uint64_t l_725 = 0x68F6FCDD169A2B9BL;
                    uint32_t l_728 = 0xDB1F67CCL;
                    uint8_t l_729[5];
                    VECTOR(int32_t, 16) l_730 = (VECTOR(int32_t, 16))(0x3DC3688EL, (VECTOR(int32_t, 4))(0x3DC3688EL, (VECTOR(int32_t, 2))(0x3DC3688EL, 0x3CBE53A3L), 0x3CBE53A3L), 0x3CBE53A3L, 0x3DC3688EL, 0x3CBE53A3L, (VECTOR(int32_t, 2))(0x3DC3688EL, 0x3CBE53A3L), (VECTOR(int32_t, 2))(0x3DC3688EL, 0x3CBE53A3L), 0x3DC3688EL, 0x3CBE53A3L, 0x3DC3688EL, 0x3CBE53A3L);
                    VECTOR(uint32_t, 4) l_731 = (VECTOR(uint32_t, 4))(0x11879AF7L, (VECTOR(uint32_t, 2))(0x11879AF7L, 0x28E958B3L), 0x28E958B3L);
                    uint16_t l_732 = 0x5215L;
                    int32_t l_733[1][6][3] = {{{5L,0x56D7396AL,5L},{5L,0x56D7396AL,5L},{5L,0x56D7396AL,5L},{5L,0x56D7396AL,5L},{5L,0x56D7396AL,5L},{5L,0x56D7396AL,5L}}};
                    uint32_t l_734 = 0x44FC2AC8L;
                    int32_t l_736 = 0x1ABDC17AL;
                    int32_t *l_735 = &l_736;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_729[i] = 0x25L;
                    l_672 = l_673;
                    for (l_673 = 0; (l_673 < (-15)); l_673 = safe_sub_func_int8_t_s_s(l_673, 1))
                    { /* block id: 287 */
                        uint16_t l_676 = 65535UL;
                        int64_t l_677 = 1L;
                        int64_t l_678 = 1L;
                        VECTOR(uint32_t, 8) l_679 = (VECTOR(uint32_t, 8))(9UL, (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 0xE639FDFEL), 0xE639FDFEL), 0xE639FDFEL, 9UL, 0xE639FDFEL);
                        VECTOR(int32_t, 16) l_680 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                        int16_t l_681[6] = {1L,1L,1L,1L,1L,1L};
                        int16_t l_682 = 0x4354L;
                        VECTOR(uint32_t, 2) l_683 = (VECTOR(uint32_t, 2))(4294967292UL, 0xA6E55BB9L);
                        int32_t *l_684 = (void*)0;
                        int32_t *l_685 = (void*)0;
                        int32_t *l_686 = (void*)0;
                        uint8_t l_687[8] = {0x34L,0x34L,0x34L,0x34L,0x34L,0x34L,0x34L,0x34L};
                        VECTOR(int32_t, 4) l_690 = (VECTOR(int32_t, 4))(0x66B166B4L, (VECTOR(int32_t, 2))(0x66B166B4L, 1L), 1L);
                        uint32_t l_691 = 4294967295UL;
                        VECTOR(int64_t, 16) l_692 = (VECTOR(int64_t, 16))((-4L), (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0x05F5DDF4C2DCB494L), 0x05F5DDF4C2DCB494L), 0x05F5DDF4C2DCB494L, (-4L), 0x05F5DDF4C2DCB494L, (VECTOR(int64_t, 2))((-4L), 0x05F5DDF4C2DCB494L), (VECTOR(int64_t, 2))((-4L), 0x05F5DDF4C2DCB494L), (-4L), 0x05F5DDF4C2DCB494L, (-4L), 0x05F5DDF4C2DCB494L);
                        uint64_t l_693 = 18446744073709551615UL;
                        VECTOR(int32_t, 16) l_694 = (VECTOR(int32_t, 16))(0x7D7E7EF5L, (VECTOR(int32_t, 4))(0x7D7E7EF5L, (VECTOR(int32_t, 2))(0x7D7E7EF5L, 0L), 0L), 0L, 0x7D7E7EF5L, 0L, (VECTOR(int32_t, 2))(0x7D7E7EF5L, 0L), (VECTOR(int32_t, 2))(0x7D7E7EF5L, 0L), 0x7D7E7EF5L, 0L, 0x7D7E7EF5L, 0L);
                        int32_t l_695 = 3L;
                        uint64_t l_696 = 0x52170AB7FCBE4D2CL;
                        VECTOR(int32_t, 16) l_697 = (VECTOR(int32_t, 16))(0x2D984FA3L, (VECTOR(int32_t, 4))(0x2D984FA3L, (VECTOR(int32_t, 2))(0x2D984FA3L, 0x3ADC0C6CL), 0x3ADC0C6CL), 0x3ADC0C6CL, 0x2D984FA3L, 0x3ADC0C6CL, (VECTOR(int32_t, 2))(0x2D984FA3L, 0x3ADC0C6CL), (VECTOR(int32_t, 2))(0x2D984FA3L, 0x3ADC0C6CL), 0x2D984FA3L, 0x3ADC0C6CL, 0x2D984FA3L, 0x3ADC0C6CL);
                        VECTOR(int32_t, 8) l_698 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
                        VECTOR(int32_t, 16) l_699 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x73FADC5AL), 0x73FADC5AL), 0x73FADC5AL, 1L, 0x73FADC5AL, (VECTOR(int32_t, 2))(1L, 0x73FADC5AL), (VECTOR(int32_t, 2))(1L, 0x73FADC5AL), 1L, 0x73FADC5AL, 1L, 0x73FADC5AL);
                        VECTOR(int32_t, 2) l_700 = (VECTOR(int32_t, 2))((-5L), 0x7A6E3C0DL);
                        VECTOR(int32_t, 2) l_701 = (VECTOR(int32_t, 2))(0x6AF76E3CL, (-6L));
                        uint64_t l_702[5];
                        VECTOR(int16_t, 16) l_703 = (VECTOR(int16_t, 16))(0x78FAL, (VECTOR(int16_t, 4))(0x78FAL, (VECTOR(int16_t, 2))(0x78FAL, 1L), 1L), 1L, 0x78FAL, 1L, (VECTOR(int16_t, 2))(0x78FAL, 1L), (VECTOR(int16_t, 2))(0x78FAL, 1L), 0x78FAL, 1L, 0x78FAL, 1L);
                        VECTOR(uint8_t, 2) l_704 = (VECTOR(uint8_t, 2))(255UL, 255UL);
                        VECTOR(uint8_t, 2) l_705 = (VECTOR(uint8_t, 2))(0x87L, 0xA6L);
                        VECTOR(uint16_t, 4) l_706 = (VECTOR(uint16_t, 4))(0x424AL, (VECTOR(uint16_t, 2))(0x424AL, 0x943BL), 0x943BL);
                        int32_t l_707 = 0x263C041DL;
                        VECTOR(uint16_t, 2) l_708 = (VECTOR(uint16_t, 2))(65532UL, 65529UL);
                        VECTOR(uint16_t, 2) l_709 = (VECTOR(uint16_t, 2))(0x402BL, 65535UL);
                        VECTOR(uint16_t, 2) l_710 = (VECTOR(uint16_t, 2))(0xF828L, 0x7928L);
                        VECTOR(uint16_t, 8) l_711 = (VECTOR(uint16_t, 8))(0x150AL, (VECTOR(uint16_t, 4))(0x150AL, (VECTOR(uint16_t, 2))(0x150AL, 0x4C02L), 0x4C02L), 0x4C02L, 0x150AL, 0x4C02L);
                        VECTOR(uint16_t, 8) l_712 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0xEFABL), 0xEFABL), 0xEFABL, 65526UL, 0xEFABL);
                        int64_t l_713[1][2];
                        VECTOR(int32_t, 4) l_714 = (VECTOR(int32_t, 4))(0x0DAC6258L, (VECTOR(int32_t, 2))(0x0DAC6258L, 0x2A3170C6L), 0x2A3170C6L);
                        VECTOR(int32_t, 2) l_715 = (VECTOR(int32_t, 2))(1L, 0L);
                        VECTOR(int16_t, 8) l_716 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x1930L), 0x1930L), 0x1930L, (-1L), 0x1930L);
                        VECTOR(uint16_t, 16) l_717 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), (VECTOR(uint16_t, 2))(65535UL, 0UL), 65535UL, 0UL, 65535UL, 0UL);
                        VECTOR(int32_t, 4) l_718 = (VECTOR(int32_t, 4))(0x2C98924BL, (VECTOR(int32_t, 2))(0x2C98924BL, 0x0AF38D5EL), 0x0AF38D5EL);
                        VECTOR(int32_t, 16) l_719 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 1L), 1L), 1L, 2L, 1L, (VECTOR(int32_t, 2))(2L, 1L), (VECTOR(int32_t, 2))(2L, 1L), 2L, 1L, 2L, 1L);
                        VECTOR(int32_t, 2) l_720 = (VECTOR(int32_t, 2))(1L, (-1L));
                        int8_t l_721 = (-1L);
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_702[i] = 0UL;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_713[i][j] = 6L;
                        }
                        l_686 = (l_685 = ((l_677 = l_676) , (((VECTOR(uint32_t, 8))(l_678, ((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(l_679.s2232030432710362)).s3c08, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(0x6CC86D3BL, (l_682 = (((VECTOR(int32_t, 4))(l_680.s6037)).w , l_681[0])), 1UL, 0xFE516616L, 0x02976C73L, ((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 16))(l_683.xyyyxxyyyyxyyyyy)).even, (uint32_t)GROUP_DIVERGE(2, 1)))), 0xD29AA1AFL, 0xDAA3D12DL, 0UL)).s20)), 0x49C038C6L, 0xBC3B2C61L))))), 0UL, 0x2BDA240DL, 4294967295UL)).s4 , l_684)));
                        --l_687[7];
                        l_721 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_690.zzyyxyxxzxzwyxxx)).even)), l_691, (l_693 = (l_672 = l_692.s0)), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))((l_672 = (-8L)), (-8L), 0x14649F7DL, 0x2378FC3CL)).odd, (int32_t)(l_695 = (((VECTOR(int32_t, 2))(l_694.sea)).even , (l_672 ^= ((VECTOR(int32_t, 2))(7L, 0x3D7EDB4DL)).odd))), (int32_t)(l_696 , (l_713[0][1] = ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(l_697.s45)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(l_698.s3174)).lo, ((VECTOR(int32_t, 2))(7L, 1L))))), 0x308BE3A4L, 0x1A7F65A5L)), (int32_t)(((VECTOR(int32_t, 2))(l_699.s2b)).lo , ((VECTOR(int32_t, 2))(0x4C218212L, (-1L))).hi)))).zzxzwwzyzzzyxxyz)).s1d))), ((VECTOR(int32_t, 2))(l_700.yx))))), (-1L), 0x4DE3BE65L)), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(0x3AE4585DL, ((VECTOR(int32_t, 2))(l_701.xx)), 0x6A2F3E78L)).hi, (int32_t)(l_672 = l_702[3])))).yyyy))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(l_703.s8397aa34)).hi, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(0xBE66L, 4UL)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(GROUP_DIVERGE(1, 1), ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 4))(l_704.xxxx)), ((VECTOR(uint8_t, 4))(l_705.yxyy))))), ((VECTOR(uint16_t, 4))(l_706.xwyy))))), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(0x470EL, l_707, 0x38F3L, ((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(l_708.yxyyxyyx)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_709.xx)).yxyyyyyy)), ((VECTOR(uint16_t, 2))(l_710.xx)).yyxxxxxy))), ((VECTOR(uint16_t, 2))(l_711.s51)), ((VECTOR(uint16_t, 2))(l_712.s47)), 0xCED0L)).sa0)))), 0x4B6BL)))).s6724100121536733)))).sb7))).xyxy))))))).xyyzyyyywzxzzzxw)).s7101))).w))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_714.wwzzwyyw)).s52, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(l_715.yy)).yyxxxyyxyyxxyxxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x1B2FB142L, 0x6E2C0A1FL, 0x56E73DB2L, 0x599488F6L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(l_716.s4570621601704545)).lo, ((VECTOR(uint16_t, 4))(l_717.s49d9)).wzzwzyyy))), ((VECTOR(int32_t, 8))(l_718.zxxzxyxz)))).s0d)), 0L, 0x2E6720D6L)).s4407210223452067))))).sd4, ((VECTOR(int32_t, 8))(l_719.s89501936)).s20))).yyyyyxyxyxyxxyyx)).s25, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(l_720.yxyy)).lo))).yxyxyyyxxyxxyyxx)))).s0f))), 0x2746852FL, 0L)).even)), 0x63BAC80EL, (-1L))))))).sa;
                    }
                    ++l_722;
                    l_735 = (((VECTOR(int64_t, 4))((-9L), 3L, 0x760394269D7C475AL, 1L)).z , (((l_728 |= (l_725--)) , l_729[3]) , ((l_730.s2 , (-1L)) , ((GROUP_DIVERGE(0, 1) , ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(0xB1DD13DEL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_731.zyyzxyzwyxxywxyx)).s22)), 0UL)).even)).odd) , ((l_734 = (l_733[0][5][1] ^= l_732)) , ((l_672 &= 0x63186AB7L) , (void*)0))))));
                }
                else
                { /* block id: 309 */
                    int8_t l_737 = 0x5CL;
                    int32_t l_753 = 3L;
                    int32_t *l_752 = &l_753;
                    int32_t *l_754 = (void*)0;
                    if (l_737)
                    { /* block id: 310 */
                        int32_t *l_738[1];
                        int32_t l_740[4];
                        int32_t *l_739 = &l_740[3];
                        int64_t l_741 = 1L;
                        uint8_t l_742 = 253UL;
                        int32_t *l_743[8] = {&l_740[3],&l_740[3],&l_740[3],&l_740[3],&l_740[3],&l_740[3],&l_740[3],&l_740[3]};
                        int32_t *l_744 = &l_740[3];
                        int32_t *l_745 = &l_740[2];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_738[i] = (void*)0;
                        for (i = 0; i < 4; i++)
                            l_740[i] = 6L;
                        l_739 = l_738[0];
                        l_742 = l_741;
                        l_743[0] = (void*)0;
                        l_745 = l_744;
                    }
                    else
                    { /* block id: 315 */
                        uint8_t l_746 = 0x49L;
                        uint16_t l_747 = 4UL;
                        int32_t l_751 = (-1L);
                        int32_t *l_750 = &l_751;
                        l_672 = l_746;
                        --l_747;
                        l_750 = l_750;
                    }
                    l_754 = l_752;
                }
                l_672 |= 0x69DFD9DCL;
                l_765[2][2] |= ((l_755 , ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_756.zywyxxxyywzzzyyx)).hi)).s2412332634762142, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 4))(l_757.xxxx)), ((VECTOR(uint64_t, 4))(l_758.sfff8)), ((VECTOR(uint64_t, 2))(l_759.xx)).yyxy))).even)), ((VECTOR(uint64_t, 2))(0x9F748B93A00ADFB1L, 0x74EC10266D48687AL)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_760.xyyyxxxxxxxxxyyx)).hi)).odd)), ((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 2))(l_761.s52)).yxyy, (uint64_t)0UL))).x, ((VECTOR(uint64_t, 2))(8UL, 2UL)), 0x63FE480A249D773EL)).s56)), 18446744073709551615UL, 0UL)).s4755063726010104, ((VECTOR(uint64_t, 4))(0x7B13E5C198C03C2EL, (l_762 , l_763), 9UL, 0x63C2A6D54130E835L)).zyzxxzwwxwwwxyww))).saa)).xxxx)).xxxyzxyy)).s7) , (l_764 = 0L));
            }
            ++l_766;
            for (l_666[0][4][6] = 0; (l_666[0][4][6] >= 15); ++l_666[0][4][6])
            { /* block id: 329 */
                VECTOR(int8_t, 2) l_771 = (VECTOR(int8_t, 2))(0x4BL, 0x01L);
                VECTOR(int16_t, 4) l_772 = (VECTOR(int16_t, 4))(0x6523L, (VECTOR(int16_t, 2))(0x6523L, 0x0691L), 0x0691L);
                VECTOR(uint16_t, 2) l_773 = (VECTOR(uint16_t, 2))(0xE588L, 0x9D77L);
                int i;
                if ((((VECTOR(int8_t, 4))(0x37L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_771.xyxxyyxyxxyyyyyx)).s78)), (-4L))).y , ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(l_772.yyxxyzxy)).s36, ((VECTOR(uint16_t, 4))(l_773.xxxy)).hi))).lo))
                { /* block id: 330 */
                    int32_t l_774 = 0x7A8AB4B4L;
                    uint64_t l_775 = 0xA995DEE4CCB30FC9L;
                    VECTOR(int32_t, 8) l_776 = (VECTOR(int32_t, 8))(0x0F9F5209L, (VECTOR(int32_t, 4))(0x0F9F5209L, (VECTOR(int32_t, 2))(0x0F9F5209L, 0x4E151077L), 0x4E151077L), 0x4E151077L, 0x0F9F5209L, 0x4E151077L);
                    uint16_t l_777 = 0xEF38L;
                    int64_t l_778 = 0x0C0612BD21BC5A23L;
                    int32_t *l_779 = (void*)0;
                    int32_t *l_780 = (void*)0;
                    int32_t *l_781 = (void*)0;
                    int i;
                    l_778 = ((((VECTOR(int32_t, 2))(0x636BB04FL, 6L)).odd , l_774) , (l_777 = (l_775 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_776.s35)).xyyyxxyyyyyyyxxy)).hi)).s7)));
                    l_781 = (l_780 = l_779);
                }
                else
                { /* block id: 335 */
                    int64_t l_782 = 0x5CDF2638C5E1C863L;
                    uint8_t l_783 = 0x17L;
                    uint8_t l_784[5] = {0x2FL,0x2FL,0x2FL,0x2FL,0x2FL};
                    int8_t l_785 = 0x57L;
                    uint8_t l_786 = 8UL;
                    VECTOR(int32_t, 4) l_787 = (VECTOR(int32_t, 4))(0x71688288L, (VECTOR(int32_t, 2))(0x71688288L, 0x5E0F2B81L), 0x5E0F2B81L);
                    VECTOR(int32_t, 16) l_788 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5CD7ECD2L), 0x5CD7ECD2L), 0x5CD7ECD2L, 1L, 0x5CD7ECD2L, (VECTOR(int32_t, 2))(1L, 0x5CD7ECD2L), (VECTOR(int32_t, 2))(1L, 0x5CD7ECD2L), 1L, 0x5CD7ECD2L, 1L, 0x5CD7ECD2L);
                    VECTOR(int32_t, 4) l_789 = (VECTOR(int32_t, 4))(0x1F201729L, (VECTOR(int32_t, 2))(0x1F201729L, 0x4EDBE8F2L), 0x4EDBE8F2L);
                    uint32_t l_790 = 0x26305AF5L;
                    uint32_t l_791 = 0x27567384L;
                    int16_t l_792 = 0x37A1L;
                    int16_t l_793[4];
                    VECTOR(int32_t, 4) l_794 = (VECTOR(int32_t, 4))(0x318434E4L, (VECTOR(int32_t, 2))(0x318434E4L, 7L), 7L);
                    VECTOR(int32_t, 4) l_795 = (VECTOR(int32_t, 4))(0x7BB8F74DL, (VECTOR(int32_t, 2))(0x7BB8F74DL, 3L), 3L);
                    VECTOR(int32_t, 16) l_796 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 8L), 8L), 8L, (-3L), 8L, (VECTOR(int32_t, 2))((-3L), 8L), (VECTOR(int32_t, 2))((-3L), 8L), (-3L), 8L, (-3L), 8L);
                    VECTOR(int32_t, 16) l_797 = (VECTOR(int32_t, 16))(0x35F60DFEL, (VECTOR(int32_t, 4))(0x35F60DFEL, (VECTOR(int32_t, 2))(0x35F60DFEL, 0x5CE1761BL), 0x5CE1761BL), 0x5CE1761BL, 0x35F60DFEL, 0x5CE1761BL, (VECTOR(int32_t, 2))(0x35F60DFEL, 0x5CE1761BL), (VECTOR(int32_t, 2))(0x35F60DFEL, 0x5CE1761BL), 0x35F60DFEL, 0x5CE1761BL, 0x35F60DFEL, 0x5CE1761BL);
                    uint32_t l_798 = 4294967286UL;
                    int8_t l_799[10][6][2] = {{{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L}},{{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L}},{{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L}},{{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L}},{{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L}},{{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L}},{{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L}},{{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L}},{{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L}},{{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L},{0x2DL,0L}}};
                    VECTOR(int32_t, 2) l_800 = (VECTOR(int32_t, 2))(0L, 0x78AD0427L);
                    VECTOR(int32_t, 16) l_801 = (VECTOR(int32_t, 16))(0x44D9AB2EL, (VECTOR(int32_t, 4))(0x44D9AB2EL, (VECTOR(int32_t, 2))(0x44D9AB2EL, 0L), 0L), 0L, 0x44D9AB2EL, 0L, (VECTOR(int32_t, 2))(0x44D9AB2EL, 0L), (VECTOR(int32_t, 2))(0x44D9AB2EL, 0L), 0x44D9AB2EL, 0L, 0x44D9AB2EL, 0L);
                    int64_t l_802 = 0x1E4E1FAC0ACC0D8DL;
                    uint16_t l_803 = 0xD1DAL;
                    int32_t l_804 = 1L;
                    VECTOR(int32_t, 2) l_805 = (VECTOR(int32_t, 2))(0x0AA9A103L, 1L);
                    int8_t l_806 = 0x2CL;
                    int32_t l_807 = 0x683468F8L;
                    int64_t l_808 = (-1L);
                    int16_t l_809 = (-8L);
                    uint8_t l_810 = 1UL;
                    VECTOR(int32_t, 2) l_811 = (VECTOR(int32_t, 2))(0x51F18050L, 0x49AAF0FBL);
                    int16_t l_812 = (-1L);
                    int32_t l_813 = 0x4CF68C2FL;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_793[i] = 0L;
                    l_786 = (l_785 |= (l_784[1] ^= (l_783 = (l_782 = 0x6E81B294L))));
                    l_813 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(l_787.wywywzxy)).s1421001405317701, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-9L), 7L)).xyxxxxyy)).s15)).xxxyxxxyyxxyyyxx, ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(l_788.sf8df300eeb014b51)).hi, ((VECTOR(int32_t, 16))(l_789.yyyzxzxyxwzwyyzw)).hi))).s1423312020427700, ((VECTOR(int32_t, 4))(((l_791 |= l_790) , ((l_792 , l_793[3]) , (((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_794.yx)).yxyxyxyyyyyxyxyy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_795.yy)), 1L, ((VECTOR(int32_t, 2))(l_796.s5a)), (-10L), 0x5F8D9C86L, 0x55DE2678L, 0x10A591FFL, (-1L), 0x34CF809BL, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_797.s40efaf505ca9551e)))).sad41, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(l_798, 0x03BF9BDCL, 0x4D35EA91L, ((VECTOR(int32_t, 2))((-3L), 0x15BBAF2BL)), l_799[6][0][0], 0x7EC45A6CL, 0x41E1ABA8L, ((VECTOR(int32_t, 2))(l_800.xy)), ((l_803 |= (l_802 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_801.s88a1)).zyyyzzzxxwwzzxyy)).s5)) , l_804), ((VECTOR(int32_t, 2))(l_805.xy)), 1L, 0L, 0x7A7A56CAL)).s00, ((VECTOR(int32_t, 16))(0x33D59D7CL, l_806, ((VECTOR(int32_t, 4))(6L)), ((VECTOR(int32_t, 4))(0x2673A4C7L)), l_807, 0x5012854AL, 0L, l_808, 0x043CCB87L, 0x218205CEL)).sf6))))).xyxxyxxxxyxyyyyy)).s0c9b))), (-1L))).sf, 0x724732FEL, 0L, 1L)), l_809, 0L, (-9L), 0x4E2363ADL)).s3066510203171407)).s8, l_810, 0L, ((VECTOR(int32_t, 4))(0x3127261BL)), 0x464FBA3EL)).s3165040374116732, ((VECTOR(int32_t, 16))(0x2CE865E1L))))).sd , l_811.y))), 1L, 0x79C5F235L, 0x68650188L)).wyxywwzwyyywywyw))), ((VECTOR(int32_t, 16))(0x6090A932L))))).s5742, (int32_t)l_812))).odd, ((VECTOR(int32_t, 2))(0x09684220L)), ((VECTOR(int32_t, 2))(8L))))).xxxyxyxyxxyxyyyy))))).s9;
                }
            }
            l_823 = ((VECTOR(int32_t, 8))(0x010AFEE9L, 0x7ACE0960L, (-1L), (-4L), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(l_814[4][0], (-9L), ((VECTOR(int32_t, 8))((l_816 = l_815), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(l_817.se0)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_818.s0531)).yzzzyyxwwyxywzzw)).s12))))))), 0L, ((VECTOR(int32_t, 2))(l_819.s20)), 1L, 0x687B5478L)), (-1L), l_820, (l_821 , l_822), (-1L), 0x6B40D3D2L, 0x125D86A7L)).s2c))), 1L, (-10L))).s0;
            unsigned int result = 0;
            int l_666_i0, l_666_i1, l_666_i2;
            for (l_666_i0 = 0; l_666_i0 < 1; l_666_i0++) {
                for (l_666_i1 = 0; l_666_i1 < 6; l_666_i1++) {
                    for (l_666_i2 = 0; l_666_i2 < 7; l_666_i2++) {
                        result += l_666[l_666_i0][l_666_i1][l_666_i2];
                    }
                }
            }
            result += l_766;
            int l_814_i0, l_814_i1;
            for (l_814_i0 = 0; l_814_i0 < 8; l_814_i0++) {
                for (l_814_i1 = 0; l_814_i1 < 1; l_814_i1++) {
                    result += l_814[l_814_i0][l_814_i1];
                }
            }
            result += l_815;
            result += l_816;
            result += l_817.sf;
            result += l_817.se;
            result += l_817.sd;
            result += l_817.sc;
            result += l_817.sb;
            result += l_817.sa;
            result += l_817.s9;
            result += l_817.s8;
            result += l_817.s7;
            result += l_817.s6;
            result += l_817.s5;
            result += l_817.s4;
            result += l_817.s3;
            result += l_817.s2;
            result += l_817.s1;
            result += l_817.s0;
            result += l_818.s7;
            result += l_818.s6;
            result += l_818.s5;
            result += l_818.s4;
            result += l_818.s3;
            result += l_818.s2;
            result += l_818.s1;
            result += l_818.s0;
            result += l_819.s7;
            result += l_819.s6;
            result += l_819.s5;
            result += l_819.s4;
            result += l_819.s3;
            result += l_819.s2;
            result += l_819.s1;
            result += l_819.s0;
            result += l_820;
            result += l_821;
            result += l_822;
            result += l_823;
            atomic_add(&p_1119->g_special_values[46 * get_linear_group_id() + 33], result);
        }
        else
        { /* block id: 349 */
            (1 + 1);
        }
    }
    else
    { /* block id: 352 */
        (*l_496) = 0x3404F25AL;
    }
    if (p_4)
    { /* block id: 355 */
        int32_t l_824 = 1L;
        (*l_496) &= l_824;
        return l_824;
    }
    else
    { /* block id: 358 */
        int32_t *l_825 = &l_553[2];
        int32_t *l_826 = &p_1119->g_477;
        int32_t *l_827 = &l_553[0];
        int32_t *l_828 = &l_553[0];
        int32_t *l_829 = &l_550;
        int32_t *l_830 = &p_1119->g_117;
        int32_t *l_831 = &p_1119->g_48;
        int32_t *l_832[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t l_833 = 0x35BF33B26170E8C6L;
        int8_t *l_836 = &l_661;
        int8_t **l_838 = &p_1119->g_837[8];
        int i;
        ++l_833;
        (*l_828) ^= ((l_836 != ((*l_838) = p_1119->g_837[4])) & (*l_496));
    }
    if ((atomic_inc(&p_1119->l_atomic_input[42]) == 5))
    { /* block id: 364 */
        int32_t l_840 = 0x6CC1C21DL;
        int32_t *l_839 = &l_840;
        int32_t *l_841 = (void*)0;
        VECTOR(int32_t, 2) l_1009 = (VECTOR(int32_t, 2))(0x11CD2789L, 1L);
        int64_t l_1010 = 0x14DCAC4D6D0125D7L;
        VECTOR(int32_t, 2) l_1011 = (VECTOR(int32_t, 2))((-3L), 9L);
        VECTOR(int32_t, 8) l_1012 = (VECTOR(int32_t, 8))(0x53038C73L, (VECTOR(int32_t, 4))(0x53038C73L, (VECTOR(int32_t, 2))(0x53038C73L, 0x7DDCCB62L), 0x7DDCCB62L), 0x7DDCCB62L, 0x53038C73L, 0x7DDCCB62L);
        int i;
        l_841 = l_839;
        for (l_840 = 0; (l_840 <= 8); ++l_840)
        { /* block id: 368 */
            int32_t l_844[7][3] = {{(-10L),(-10L),2L},{(-10L),(-10L),2L},{(-10L),(-10L),2L},{(-10L),(-10L),2L},{(-10L),(-10L),2L},{(-10L),(-10L),2L},{(-10L),(-10L),2L}};
            int32_t l_928[5][1];
            uint32_t l_929 = 0x57695431L;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_928[i][j] = 0x452AECBEL;
            }
            for (l_844[6][2] = (-14); (l_844[6][2] <= 5); l_844[6][2] = safe_add_func_int16_t_s_s(l_844[6][2], 1))
            { /* block id: 371 */
                int8_t l_847 = (-5L);
                int32_t l_848 = 1L;
                VECTOR(int32_t, 2) l_849 = (VECTOR(int32_t, 2))(0x51917866L, 0x5C4D5C2FL);
                uint32_t l_850 = 0xF178F021L;
                uint32_t l_851[1];
                uint8_t l_852 = 0xF5L;
                int16_t l_853 = 0x74F0L;
                uint32_t l_854[1];
                int64_t l_855[5][5] = {{(-1L),0x40F511FF382A0966L,0x2191B7DEA4C68ADDL,(-4L),0x2191B7DEA4C68ADDL},{(-1L),0x40F511FF382A0966L,0x2191B7DEA4C68ADDL,(-4L),0x2191B7DEA4C68ADDL},{(-1L),0x40F511FF382A0966L,0x2191B7DEA4C68ADDL,(-4L),0x2191B7DEA4C68ADDL},{(-1L),0x40F511FF382A0966L,0x2191B7DEA4C68ADDL,(-4L),0x2191B7DEA4C68ADDL},{(-1L),0x40F511FF382A0966L,0x2191B7DEA4C68ADDL,(-4L),0x2191B7DEA4C68ADDL}};
                int32_t l_856[3][1][10] = {{{0x0B171B51L,(-1L),3L,(-1L),0x0B171B51L,0x0B171B51L,(-1L),3L,(-1L),0x0B171B51L}},{{0x0B171B51L,(-1L),3L,(-1L),0x0B171B51L,0x0B171B51L,(-1L),3L,(-1L),0x0B171B51L}},{{0x0B171B51L,(-1L),3L,(-1L),0x0B171B51L,0x0B171B51L,(-1L),3L,(-1L),0x0B171B51L}}};
                uint32_t l_857 = 4294967289UL;
                int32_t l_858 = 1L;
                uint64_t l_859 = 0x83D66935267A2E62L;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_851[i] = 8UL;
                for (i = 0; i < 1; i++)
                    l_854[i] = 4294967295UL;
                if ((l_847 , (l_859 ^= (l_848 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_849.yy)).xyyx)).zyyxxzxy)).s72, ((VECTOR(int32_t, 8))(0x5CA06AA6L, ((l_851[0] = l_850) , (l_854[0] = (l_849.y = (l_852 , l_853)))), l_855[0][3], 0x2A8DD8E5L, l_856[1][0][7], l_857, 0x4A9EAD44L, 0x76533D69L)).s64))), 5L, 0x1F4EA76BL, l_858, 0L, (-6L), 0x05945A7FL)).s4))))
                { /* block id: 376 */
                    int32_t l_860 = 0L;
                    for (l_860 = 19; (l_860 < 5); --l_860)
                    { /* block id: 379 */
                        int32_t l_863[1][4] = {{0x690EDC6BL,0x690EDC6BL,0x690EDC6BL,0x690EDC6BL}};
                        int64_t l_864 = (-1L);
                        uint8_t l_865 = 1UL;
                        uint32_t l_866[3][9][3] = {{{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL}},{{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL}},{{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL},{4294967294UL,1UL,0UL}}};
                        int64_t l_867[3][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
                        int16_t l_868[8] = {0x1DD5L,(-6L),0x1DD5L,0x1DD5L,(-6L),0x1DD5L,0x1DD5L,(-6L)};
                        VECTOR(uint8_t, 2) l_869 = (VECTOR(uint8_t, 2))(8UL, 0x34L);
                        uint64_t l_870 = 0x3942F942E566FB09L;
                        int32_t l_871 = (-1L);
                        VECTOR(int32_t, 2) l_872 = (VECTOR(int32_t, 2))(7L, 0L);
                        int16_t l_873 = (-10L);
                        VECTOR(int32_t, 16) l_874 = (VECTOR(int32_t, 16))(0x3BBD6E07L, (VECTOR(int32_t, 4))(0x3BBD6E07L, (VECTOR(int32_t, 2))(0x3BBD6E07L, 0x37A20036L), 0x37A20036L), 0x37A20036L, 0x3BBD6E07L, 0x37A20036L, (VECTOR(int32_t, 2))(0x3BBD6E07L, 0x37A20036L), (VECTOR(int32_t, 2))(0x3BBD6E07L, 0x37A20036L), 0x3BBD6E07L, 0x37A20036L, 0x3BBD6E07L, 0x37A20036L);
                        VECTOR(int32_t, 2) l_875 = (VECTOR(int32_t, 2))(0x1A1BE4B5L, 0x0E204935L);
                        VECTOR(int32_t, 8) l_876 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4A868745L), 0x4A868745L), 0x4A868745L, (-1L), 0x4A868745L);
                        VECTOR(int32_t, 8) l_877 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x210A4CC8L), 0x210A4CC8L), 0x210A4CC8L, 0L, 0x210A4CC8L);
                        VECTOR(int32_t, 4) l_878 = (VECTOR(int32_t, 4))(0x0855DB69L, (VECTOR(int32_t, 2))(0x0855DB69L, 0x3FBBDA19L), 0x3FBBDA19L);
                        VECTOR(int32_t, 16) l_879 = (VECTOR(int32_t, 16))(0x39FBFAFBL, (VECTOR(int32_t, 4))(0x39FBFAFBL, (VECTOR(int32_t, 2))(0x39FBFAFBL, 0x2E8483B5L), 0x2E8483B5L), 0x2E8483B5L, 0x39FBFAFBL, 0x2E8483B5L, (VECTOR(int32_t, 2))(0x39FBFAFBL, 0x2E8483B5L), (VECTOR(int32_t, 2))(0x39FBFAFBL, 0x2E8483B5L), 0x39FBFAFBL, 0x2E8483B5L, 0x39FBFAFBL, 0x2E8483B5L);
                        VECTOR(uint64_t, 16) l_880 = (VECTOR(uint64_t, 16))(8UL, (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 0UL), 0UL), 0UL, 8UL, 0UL, (VECTOR(uint64_t, 2))(8UL, 0UL), (VECTOR(uint64_t, 2))(8UL, 0UL), 8UL, 0UL, 8UL, 0UL);
                        VECTOR(int32_t, 4) l_881 = (VECTOR(int32_t, 4))(0x177376CCL, (VECTOR(int32_t, 2))(0x177376CCL, 0x112FC23DL), 0x112FC23DL);
                        VECTOR(int32_t, 2) l_882 = (VECTOR(int32_t, 2))(0x596DFDA9L, 0x29141F61L);
                        VECTOR(int32_t, 8) l_883 = (VECTOR(int32_t, 8))(0x7E1916C1L, (VECTOR(int32_t, 4))(0x7E1916C1L, (VECTOR(int32_t, 2))(0x7E1916C1L, 0x6FD618FDL), 0x6FD618FDL), 0x6FD618FDL, 0x7E1916C1L, 0x6FD618FDL);
                        VECTOR(int32_t, 8) l_884 = (VECTOR(int32_t, 8))(0x71F132B8L, (VECTOR(int32_t, 4))(0x71F132B8L, (VECTOR(int32_t, 2))(0x71F132B8L, 0x44143013L), 0x44143013L), 0x44143013L, 0x71F132B8L, 0x44143013L);
                        VECTOR(uint32_t, 4) l_885 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL);
                        VECTOR(int32_t, 2) l_886 = (VECTOR(int32_t, 2))((-2L), (-9L));
                        int32_t l_887 = (-3L);
                        int8_t l_888 = (-9L);
                        int64_t l_889 = (-2L);
                        uint16_t l_890 = 65535UL;
                        uint32_t l_891[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
                        VECTOR(int32_t, 8) l_892 = (VECTOR(int32_t, 8))(0x1ECFDD50L, (VECTOR(int32_t, 4))(0x1ECFDD50L, (VECTOR(int32_t, 2))(0x1ECFDD50L, 0x428DC6B4L), 0x428DC6B4L), 0x428DC6B4L, 0x1ECFDD50L, 0x428DC6B4L);
                        uint64_t l_893[3];
                        int16_t l_894[8][7][3] = {{{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L}},{{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L}},{{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L}},{{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L}},{{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L}},{{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L}},{{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L}},{{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L},{0L,1L,0L}}};
                        VECTOR(int32_t, 8) l_895 = (VECTOR(int32_t, 8))(0x498C4A58L, (VECTOR(int32_t, 4))(0x498C4A58L, (VECTOR(int32_t, 2))(0x498C4A58L, 0x0822169AL), 0x0822169AL), 0x0822169AL, 0x498C4A58L, 0x0822169AL);
                        VECTOR(int32_t, 4) l_896 = (VECTOR(int32_t, 4))(0x206C8272L, (VECTOR(int32_t, 2))(0x206C8272L, 0x3B5D1213L), 0x3B5D1213L);
                        VECTOR(int32_t, 2) l_897 = (VECTOR(int32_t, 2))(0x5AE961F8L, 0x0A547934L);
                        VECTOR(int32_t, 16) l_898 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                        VECTOR(int32_t, 8) l_899 = (VECTOR(int32_t, 8))(0x53AEE543L, (VECTOR(int32_t, 4))(0x53AEE543L, (VECTOR(int32_t, 2))(0x53AEE543L, 3L), 3L), 3L, 0x53AEE543L, 3L);
                        VECTOR(int32_t, 2) l_900 = (VECTOR(int32_t, 2))((-6L), (-10L));
                        int8_t l_901 = 0x75L;
                        VECTOR(int32_t, 8) l_902 = (VECTOR(int32_t, 8))(0x6118B1AFL, (VECTOR(int32_t, 4))(0x6118B1AFL, (VECTOR(int32_t, 2))(0x6118B1AFL, 0x0BA55AFCL), 0x0BA55AFCL), 0x0BA55AFCL, 0x6118B1AFL, 0x0BA55AFCL);
                        VECTOR(int32_t, 4) l_903 = (VECTOR(int32_t, 4))(0x62D4CCD2L, (VECTOR(int32_t, 2))(0x62D4CCD2L, (-1L)), (-1L));
                        VECTOR(int32_t, 4) l_904 = (VECTOR(int32_t, 4))(0x6458977CL, (VECTOR(int32_t, 2))(0x6458977CL, 8L), 8L);
                        VECTOR(uint64_t, 16) l_905 = (VECTOR(uint64_t, 16))(0xEB9DE5A25A0167E1L, (VECTOR(uint64_t, 4))(0xEB9DE5A25A0167E1L, (VECTOR(uint64_t, 2))(0xEB9DE5A25A0167E1L, 18446744073709551612UL), 18446744073709551612UL), 18446744073709551612UL, 0xEB9DE5A25A0167E1L, 18446744073709551612UL, (VECTOR(uint64_t, 2))(0xEB9DE5A25A0167E1L, 18446744073709551612UL), (VECTOR(uint64_t, 2))(0xEB9DE5A25A0167E1L, 18446744073709551612UL), 0xEB9DE5A25A0167E1L, 18446744073709551612UL, 0xEB9DE5A25A0167E1L, 18446744073709551612UL);
                        VECTOR(int64_t, 8) l_906 = (VECTOR(int64_t, 8))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 1L), 1L), 1L, 8L, 1L);
                        VECTOR(int32_t, 16) l_907 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 2L), 2L), 2L, (-1L), 2L, (VECTOR(int32_t, 2))((-1L), 2L), (VECTOR(int32_t, 2))((-1L), 2L), (-1L), 2L, (-1L), 2L);
                        VECTOR(int64_t, 2) l_908 = (VECTOR(int64_t, 2))(0L, 1L);
                        VECTOR(int64_t, 16) l_909 = (VECTOR(int64_t, 16))(0x25975D92BAAA5EFEL, (VECTOR(int64_t, 4))(0x25975D92BAAA5EFEL, (VECTOR(int64_t, 2))(0x25975D92BAAA5EFEL, 0L), 0L), 0L, 0x25975D92BAAA5EFEL, 0L, (VECTOR(int64_t, 2))(0x25975D92BAAA5EFEL, 0L), (VECTOR(int64_t, 2))(0x25975D92BAAA5EFEL, 0L), 0x25975D92BAAA5EFEL, 0L, 0x25975D92BAAA5EFEL, 0L);
                        VECTOR(int64_t, 2) l_910 = (VECTOR(int64_t, 2))(9L, (-6L));
                        VECTOR(uint32_t, 8) l_911 = (VECTOR(uint32_t, 8))(0xBFC7D064L, (VECTOR(uint32_t, 4))(0xBFC7D064L, (VECTOR(uint32_t, 2))(0xBFC7D064L, 0UL), 0UL), 0UL, 0xBFC7D064L, 0UL);
                        VECTOR(int64_t, 4) l_912 = (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0x090993BDCFE20485L), 0x090993BDCFE20485L);
                        VECTOR(int64_t, 16) l_913 = (VECTOR(int64_t, 16))(0x02AB983018E91EAEL, (VECTOR(int64_t, 4))(0x02AB983018E91EAEL, (VECTOR(int64_t, 2))(0x02AB983018E91EAEL, (-4L)), (-4L)), (-4L), 0x02AB983018E91EAEL, (-4L), (VECTOR(int64_t, 2))(0x02AB983018E91EAEL, (-4L)), (VECTOR(int64_t, 2))(0x02AB983018E91EAEL, (-4L)), 0x02AB983018E91EAEL, (-4L), 0x02AB983018E91EAEL, (-4L));
                        uint32_t l_914 = 0x122136AEL;
                        VECTOR(int16_t, 16) l_915 = (VECTOR(int16_t, 16))(0x7E9AL, (VECTOR(int16_t, 4))(0x7E9AL, (VECTOR(int16_t, 2))(0x7E9AL, 1L), 1L), 1L, 0x7E9AL, 1L, (VECTOR(int16_t, 2))(0x7E9AL, 1L), (VECTOR(int16_t, 2))(0x7E9AL, 1L), 0x7E9AL, 1L, 0x7E9AL, 1L);
                        VECTOR(uint16_t, 16) l_916 = (VECTOR(uint16_t, 16))(5UL, (VECTOR(uint16_t, 4))(5UL, (VECTOR(uint16_t, 2))(5UL, 4UL), 4UL), 4UL, 5UL, 4UL, (VECTOR(uint16_t, 2))(5UL, 4UL), (VECTOR(uint16_t, 2))(5UL, 4UL), 5UL, 4UL, 5UL, 4UL);
                        VECTOR(uint16_t, 8) l_917 = (VECTOR(uint16_t, 8))(0x8582L, (VECTOR(uint16_t, 4))(0x8582L, (VECTOR(uint16_t, 2))(0x8582L, 65528UL), 65528UL), 65528UL, 0x8582L, 65528UL);
                        uint64_t l_918 = 0x79C0E693DADACB4EL;
                        VECTOR(int64_t, 8) l_919 = (VECTOR(int64_t, 8))(0x4FA14BAE1A9104B2L, (VECTOR(int64_t, 4))(0x4FA14BAE1A9104B2L, (VECTOR(int64_t, 2))(0x4FA14BAE1A9104B2L, 0x0E0280B1BAC32266L), 0x0E0280B1BAC32266L), 0x0E0280B1BAC32266L, 0x4FA14BAE1A9104B2L, 0x0E0280B1BAC32266L);
                        uint8_t l_920 = 0xAFL;
                        uint64_t l_921 = 0x245FA90231AAFE63L;
                        uint16_t l_922[3];
                        uint32_t l_923[2][5];
                        int32_t *l_924 = (void*)0;
                        int32_t *l_925 = (void*)0;
                        int8_t l_926 = 0x49L;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_893[i] = 18446744073709551615UL;
                        for (i = 0; i < 3; i++)
                            l_922[i] = 0xA167L;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_923[i][j] = 4294967286UL;
                        }
                        l_890 &= (l_863[0][2] , ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x7E4D5ABBL, 1L, 0x25E24EBAL, (l_858 = ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x70E1A23EL)))).yxyyxyyxyxyxxyyx)), ((VECTOR(int32_t, 16))(1L, (l_864 , (l_849.x = (l_866[0][8][2] &= l_865))), 0x1639C7EBL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((-4L), (((l_868[1] = l_867[2][3]) , (((VECTOR(uint8_t, 2))(l_869.xy)).even , l_870)) , l_871), 0x7AAE9510L, ((VECTOR(int32_t, 2))(l_872.xx)), 4L, (-1L), 0L)).lo)), l_873, 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_874.s8f6074f79b90b635)).s79, ((VECTOR(int32_t, 16))(l_875.yxyxxxxxyxyxxyxx)).s0a, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_876.s50)), (-9L), (-6L))))).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_877.s57367522)).s2561615360414313)).s6d, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_878.zxzzywwxyzwywxyz)).odd, ((VECTOR(int32_t, 8))(0x4D36235BL, (-9L), 0x06476118L, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(0x54101C70L, ((VECTOR(int32_t, 2))((-8L), 0x63962901L)).odd, 0x764ACB27L, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_879.sde34)).odd)).yxxx, ((VECTOR(int32_t, 2))(0x0D51D252L, 0x5B6C3311L)).yyyx))), (((VECTOR(uint64_t, 4))(l_880.s9824)).z , ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(l_881.ywwz)).even, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_882.yx)).yxyyyxxyxyyyyyxy)).s24, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(0x51AE78F9L, (-1L))).xyyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_883.s66424737)).s46)).xxxx)).xzxywyxx, ((VECTOR(int32_t, 8))(l_884.s33617244)), ((VECTOR(int32_t, 4))((l_885.w |= 2L), (-7L), (-5L), 0x3B377E57L)).zzyzzywz))).s2414716151055217)).s5971))).hi)))))).yyxxxxxxyxxyxyyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(0x68FEEAD4L, 0x09D066ABL)).xxxyyyxyxyyxxxxy, ((VECTOR(int32_t, 8))(0L, 1L, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_886.xyyxxyxyyxyyyxxy)).s71c8, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(0x5B757B11L, (-1L))), (int32_t)0x335CD8F6L))))).yxxx)), ((VECTOR(int32_t, 4))((-4L)))))), 0L, 0x74C18C27L)).s7171414142370076))))).lo)).s4033001565061344))).sb), ((VECTOR(int32_t, 2))(0x50B2DDCBL)), l_887, 0x479A386FL, (-7L), 0x3E70BF05L, (-1L), 0x660BE793L)).even, ((VECTOR(int32_t, 8))(1L))))).s10, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(1L))))), l_888, 0L, 0x45C3AF57L)), ((VECTOR(int32_t, 8))(0x07875FFEL))))).s54))))).yxyxxyyy)).s76))).xxyyyxyy, ((VECTOR(int32_t, 8))(3L))))).s1300302760764242)).sfc)), ((VECTOR(int32_t, 2))(0x12684698L)), 0L, 0x14F43F41L, 0x1949D847L))))).se), l_889, (-3L), 0x13B24DC1L, 7L)).even)), 0L, 0L, 7L, 0x3A71B166L)).s6662063572124522))).sbbb4, ((VECTOR(int32_t, 4))((-10L)))))).x);
                        l_849.y = 1L;
                        l_925 = (l_841 = (l_839 = (l_924 = (l_891[2] , (((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(l_892.s4002)).xxxzyzwxzzzyxxxw, ((VECTOR(int32_t, 4))((l_893[2] , (l_849.y = (l_894[0][4][1] &= 5L))), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(l_895.s00)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-1L), 1L))))))).yyxyyyxyyyyyxxxy, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_896.yxwy)).hi)).xyxyxyxyxxxyyxxy, ((VECTOR(int32_t, 16))(l_897.yyxyyyxyxyxxyxxx))))).s61, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(l_898.s62aa)).yxwyxwxx, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_899.s77174514)).odd)).zwzyxyyw, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_900.yyxxyyyyyyxxyyxx)).se, l_901, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(l_902.s5063445335167225)).s6679, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_903.xyyyzzywzxzxzyxw)))))).sfc6a, ((VECTOR(int32_t, 8))(l_904.zzzxyyzx)).hi))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(0x0791A3D3L, (-2L))).yyyx, (int32_t)(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_905.sa5)))).yyyxxxyyyyyxyyyx)).se0, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_906.s00)), ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 16))(l_907.s09e0403587844894)).s85, ((VECTOR(uint32_t, 2))(0UL, 1UL))))), ((VECTOR(int64_t, 16))(l_908.yyxxxyxxxxyyyyyx)).s6d, ((VECTOR(int64_t, 8))(l_909.s8e182b8b)).s72))), ((VECTOR(int64_t, 4))(0x43FDF15B38BFFC1AL, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))(l_910.yxxy)).lo, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(1L, l_911.s7, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(0x02F4239355205369L, ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(0x3918991E6F13DD29L, 0x314F314FB757B79EL)), ((VECTOR(int64_t, 16))(l_912.wxwzwwywwwwxxzzy)).s40, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_913.sd7)), 8L, 3L)))).even))), ((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 4))((((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(l_914, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(l_915.sa5fa)).xzywwwxz, ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_916.s88)).yyyxyxyyyxyxyyyx)).s43, ((VECTOR(uint16_t, 2))(65531UL, 0x0263L))))).xxxy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_917.s2350))))))))).wxzxxwzx))), l_918, (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_919.s52)))).lo , (l_848 = 0x178B967FL)), ((VECTOR(int32_t, 2))((-4L), 0x778F2DDCL)), 1L, 2L, 0x2E973E03L)).s9215, ((VECTOR(int32_t, 4))(7L))))), ((VECTOR(int32_t, 4))((-3L)))))))).yxyzxxyw, ((VECTOR(int32_t, 8))(0x0F898FB9L))))), ((VECTOR(int32_t, 8))(0L))))).s3 , l_920), (-3L), 0x162D7BACAFBFB003L, (-1L))), ((VECTOR(int64_t, 4))(0L))))).y, ((VECTOR(int64_t, 4))(1L)))))).s3, ((VECTOR(int64_t, 4))(0x64E2A28DF4E0B35CL)), 0x2D70361ADA9B5495L, 7L, l_921, ((VECTOR(int64_t, 2))((-2L))), 0x2E291029103649F4L, l_922[0], 0x6A41A2F98DFE9271L, 0L)).se836)).wwzxyzxz)).s10))), 0x0F7570896A2E50F8L)))).even, (int64_t)l_923[1][2]))).yywzywzywyxwxxwx)), ((VECTOR(int64_t, 16))(0x16D24BCA60DF1B47L))))).even))).odd, ((VECTOR(uint64_t, 4))(0xCEA8D0E1F4090473L))))), ((VECTOR(uint64_t, 2))(0xF8075CA9EE07091CL)), 1UL, 0x1461EC0D788B6BA2L)).s0542530704722773, ((VECTOR(uint64_t, 16))(0x099C99925B5C0E32L)), ((VECTOR(uint64_t, 16))(0x8E8A636FE2423417L))))).s4, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 0UL)))).wzxyzxwxwwzwxyyw, ((VECTOR(uint64_t, 16))(0xC6FCECC0CD331E09L))))))).sd9))), 7UL, 18446744073709551609UL)).yyyxzzyx)).odd)).xxyxwyxz)).s0 , 0x262696A1L)))))))), ((VECTOR(int32_t, 8))(0x7FB2657EL))))).even))), 0x31EFBBF9L, 0x5652DE85L)).s15)).yyxxyyxx)))))).s01))).xxyxxyxyyyyxyyxy))).s6955, ((VECTOR(int32_t, 4))(0x27C00D9AL))))).zyzyzyzyzwyxwwyz, ((VECTOR(int32_t, 16))(0x7B0B2B5CL))))).sec, ((VECTOR(int32_t, 2))(0L))))), 0x18153C27L)).wwxywxywxwwxxxyz))).s8e)).xyxy, (int32_t)0x4A84B1E2L))).yxxxxwyy, ((VECTOR(int32_t, 8))(0x759ACC24L))))), ((VECTOR(int32_t, 8))(0x06E1B1F2L))))).s6 , (void*)0)))));
                        l_849.y = l_926;
                    }
                }
                else
                { /* block id: 396 */
                    uint8_t l_927 = 0xF4L;
                    l_849.x |= l_927;
                }
                l_839 = (void*)0;
            }
            --l_929;
        }
        for (l_840 = 16; (l_840 != (-29)); --l_840)
        { /* block id: 405 */
            int32_t l_934[7] = {0L,(-7L),0L,0L,(-7L),0L,0L};
            uint64_t l_938 = 0xBBC88343B6DEE37DL;
            int8_t l_939 = 0x6BL;
            uint32_t l_940[3][3][9] = {{{0x8097C202L,0x6A8E1E86L,1UL,0xDB958E09L,0x6A8E1E86L,0xDB958E09L,1UL,0x6A8E1E86L,0x8097C202L},{0x8097C202L,0x6A8E1E86L,1UL,0xDB958E09L,0x6A8E1E86L,0xDB958E09L,1UL,0x6A8E1E86L,0x8097C202L},{0x8097C202L,0x6A8E1E86L,1UL,0xDB958E09L,0x6A8E1E86L,0xDB958E09L,1UL,0x6A8E1E86L,0x8097C202L}},{{0x8097C202L,0x6A8E1E86L,1UL,0xDB958E09L,0x6A8E1E86L,0xDB958E09L,1UL,0x6A8E1E86L,0x8097C202L},{0x8097C202L,0x6A8E1E86L,1UL,0xDB958E09L,0x6A8E1E86L,0xDB958E09L,1UL,0x6A8E1E86L,0x8097C202L},{0x8097C202L,0x6A8E1E86L,1UL,0xDB958E09L,0x6A8E1E86L,0xDB958E09L,1UL,0x6A8E1E86L,0x8097C202L}},{{0x8097C202L,0x6A8E1E86L,1UL,0xDB958E09L,0x6A8E1E86L,0xDB958E09L,1UL,0x6A8E1E86L,0x8097C202L},{0x8097C202L,0x6A8E1E86L,1UL,0xDB958E09L,0x6A8E1E86L,0xDB958E09L,1UL,0x6A8E1E86L,0x8097C202L},{0x8097C202L,0x6A8E1E86L,1UL,0xDB958E09L,0x6A8E1E86L,0xDB958E09L,1UL,0x6A8E1E86L,0x8097C202L}}};
            int32_t l_941 = 0x43AAB4C2L;
            int16_t l_942 = 1L;
            VECTOR(int32_t, 16) l_943 = (VECTOR(int32_t, 16))(0x17722CE9L, (VECTOR(int32_t, 4))(0x17722CE9L, (VECTOR(int32_t, 2))(0x17722CE9L, (-1L)), (-1L)), (-1L), 0x17722CE9L, (-1L), (VECTOR(int32_t, 2))(0x17722CE9L, (-1L)), (VECTOR(int32_t, 2))(0x17722CE9L, (-1L)), 0x17722CE9L, (-1L), 0x17722CE9L, (-1L));
            VECTOR(uint64_t, 16) l_944 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 0UL, 18446744073709551610UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551610UL), (VECTOR(uint64_t, 2))(0UL, 18446744073709551610UL), 0UL, 18446744073709551610UL, 0UL, 18446744073709551610UL);
            int64_t l_945 = 0x1C09AD49DBF8753FL;
            uint32_t l_946 = 0x7CD6A13BL;
            VECTOR(uint32_t, 2) l_947 = (VECTOR(uint32_t, 2))(0UL, 0UL);
            VECTOR(int32_t, 4) l_948 = (VECTOR(int32_t, 4))(0x4DF79A93L, (VECTOR(int32_t, 2))(0x4DF79A93L, (-5L)), (-5L));
            VECTOR(int32_t, 8) l_949 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
            VECTOR(int32_t, 2) l_950 = (VECTOR(int32_t, 2))((-1L), 1L);
            uint32_t l_951 = 4294967288UL;
            int8_t l_952 = 7L;
            uint8_t l_953 = 255UL;
            int16_t l_954 = 0x4644L;
            VECTOR(uint8_t, 4) l_1004 = (VECTOR(uint8_t, 4))(0xA8L, (VECTOR(uint8_t, 2))(0xA8L, 0xEEL), 0xEEL);
            int32_t l_1005 = 0L;
            uint32_t l_1006 = 0x0B5A5C9AL;
            uint32_t l_1007 = 4294967295UL;
            uint8_t l_1008[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1008[i] = 255UL;
            for (l_934[4] = 0; (l_934[4] != (-3)); l_934[4] = safe_sub_func_int32_t_s_s(l_934[4], 6))
            { /* block id: 408 */
                int64_t l_937 = 0x508BAF3C6DB9812CL;
                l_841 = (void*)0;
                l_937 = (-8L);
            }
            if (((l_938 = 0x17C4FFC4L) , ((l_941 |= (l_940[2][2][4] = l_939)) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(5L, (-7L), (-10L), l_942, (-5L), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(l_943.se7)), (int32_t)((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_944.s13ad03e75ede45fe)).s88)).lo , l_945) , (((VECTOR(uint64_t, 2))(0x86278B65E8E2AE08L, 0UL)).even , l_946)), (int32_t)l_947.y))), 0x09490D2CL)), ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_948.wy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_949.s0023)).lo)), 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_950.yxyyxxyyyyyyxxxy)).s88)), (-8L))).s0045673657522476, ((VECTOR(int32_t, 2))((-4L), 0x039B1C5BL)).xxyyxxyxyyyyxxyy))).s8283, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))((l_953 |= (l_951 , (l_950.x = l_952))), (-1L), ((VECTOR(int32_t, 2))(1L)), l_954, 9L, 0x74A6B842L, (-1L))), ((VECTOR(int32_t, 8))(0x1AB9B62AL)), ((VECTOR(int32_t, 8))((-1L)))))).hi, ((VECTOR(int32_t, 4))(0x4AB1D5D2L))))).xyyyywzx)), ((VECTOR(int32_t, 8))(0x47043E03L)))))))).odd)).x)))
            { /* block id: 417 */
                int32_t l_956 = 0x724A344EL;
                int32_t *l_955 = &l_956;
                l_841 = l_955;
            }
            else
            { /* block id: 419 */
                int32_t l_957 = 0x43D8B455L;
                for (l_957 = 0; (l_957 == 26); l_957 = safe_add_func_int64_t_s_s(l_957, 7))
                { /* block id: 422 */
                    VECTOR(int32_t, 16) l_960 = (VECTOR(int32_t, 16))(0x6D0A43F9L, (VECTOR(int32_t, 4))(0x6D0A43F9L, (VECTOR(int32_t, 2))(0x6D0A43F9L, 0x740B7AF7L), 0x740B7AF7L), 0x740B7AF7L, 0x6D0A43F9L, 0x740B7AF7L, (VECTOR(int32_t, 2))(0x6D0A43F9L, 0x740B7AF7L), (VECTOR(int32_t, 2))(0x6D0A43F9L, 0x740B7AF7L), 0x6D0A43F9L, 0x740B7AF7L, 0x6D0A43F9L, 0x740B7AF7L);
                    int8_t l_961 = 0x40L;
                    int32_t l_962 = 0x053AFB8DL;
                    uint64_t l_963 = 0xA1EEC40A11D26C93L;
                    VECTOR(int32_t, 16) l_964 = (VECTOR(int32_t, 16))(0x0AD983CFL, (VECTOR(int32_t, 4))(0x0AD983CFL, (VECTOR(int32_t, 2))(0x0AD983CFL, 1L), 1L), 1L, 0x0AD983CFL, 1L, (VECTOR(int32_t, 2))(0x0AD983CFL, 1L), (VECTOR(int32_t, 2))(0x0AD983CFL, 1L), 0x0AD983CFL, 1L, 0x0AD983CFL, 1L);
                    VECTOR(int32_t, 4) l_965 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 9L), 9L);
                    VECTOR(int32_t, 16) l_966 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x512E5744L), 0x512E5744L), 0x512E5744L, 1L, 0x512E5744L, (VECTOR(int32_t, 2))(1L, 0x512E5744L), (VECTOR(int32_t, 2))(1L, 0x512E5744L), 1L, 0x512E5744L, 1L, 0x512E5744L);
                    VECTOR(int32_t, 4) l_967 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-1L)), (-1L));
                    VECTOR(int32_t, 4) l_968 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x1E082837L), 0x1E082837L);
                    VECTOR(int32_t, 4) l_969 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L);
                    VECTOR(int32_t, 8) l_970 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 9L), 9L), 9L, (-1L), 9L);
                    VECTOR(int32_t, 8) l_971 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2707B3B5L), 0x2707B3B5L), 0x2707B3B5L, 1L, 0x2707B3B5L);
                    VECTOR(uint8_t, 16) l_972 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x31L), 0x31L), 0x31L, 0UL, 0x31L, (VECTOR(uint8_t, 2))(0UL, 0x31L), (VECTOR(uint8_t, 2))(0UL, 0x31L), 0UL, 0x31L, 0UL, 0x31L);
                    int32_t l_973 = 0L;
                    VECTOR(int32_t, 8) l_974 = (VECTOR(int32_t, 8))(0x05293899L, (VECTOR(int32_t, 4))(0x05293899L, (VECTOR(int32_t, 2))(0x05293899L, 3L), 3L), 3L, 0x05293899L, 3L);
                    uint64_t l_975 = 0x475958286C97BA94L;
                    int32_t l_976[4] = {0x489BA992L,0x489BA992L,0x489BA992L,0x489BA992L};
                    uint16_t l_977[8] = {0x34F8L,1UL,0x34F8L,0x34F8L,1UL,0x34F8L,0x34F8L,1UL};
                    uint32_t l_978 = 0xEAF267C7L;
                    int8_t l_979 = 0L;
                    int32_t *l_1002 = (void*)0;
                    int16_t l_1003[8] = {1L,1L,1L,1L,1L,1L,1L,1L};
                    int i;
                    l_949.s3 = (l_967.w = ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_960.s8ae32e64e2fba37a)).s22f3)).ywwxwwww, (int32_t)l_961, (int32_t)((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((l_962 , (l_963 , 0x6A46E57DL)), (-9L), (-8L), 3L)))), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_964.s7a5c60027c23bb60)))).sd3))), 0x57609ADDL)).s03)).even))).s0575745134277155, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_965.yyzzxxwyxxzxxzxz)).odd, ((VECTOR(int32_t, 4))(l_966.s913a)).xxzzzxww, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(l_967.wzwyywzyxyyzywwz)).hi, ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(l_968.yzzz)).wywxwxyyxyyxywzw, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_969.xw)).xxyyxxxxxyxxyyyx))))), ((VECTOR(int32_t, 2))(l_970.s16)).yyyxxxyxxxyxxxxx))).odd)))))).s6, 0x40910C33L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(0x427314E6L, 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0L, ((((VECTOR(int32_t, 2))(l_971.s37)).hi , (-1L)) , l_972.s8), 0x6EDB0DA1L, 1L, 0x4CE978C7L, 8L, 0x45D695D3L, 0x6EFA1134L)).s64)), l_973, ((VECTOR(int32_t, 2))(0x7813D848L, 1L)), (-1L))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_974.s61)).yyxyyxxy)), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(7L, (-2L))).xyxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x7D9CE250L, (-1L))).yyyyxyxy)).s7366427644216317, ((VECTOR(int32_t, 16))(1L, (-1L), l_975, 0x6F2B41AAL, l_976[2], l_977[1], 0x6BE4800FL, ((VECTOR(int32_t, 4))(0x149A6771L)), 0x38162361L, l_978, ((VECTOR(int32_t, 2))(0x0AA94EB7L)), 3L)), ((VECTOR(int32_t, 16))(1L))))).lo)).lo))).w, 0x2E19D037L, 1L, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x2BBF5F4EL)), 0x164DA642L)).s1c)).xxxx)).xzyyxwwwxyyyxwzy, ((VECTOR(int32_t, 16))(7L)), ((VECTOR(int32_t, 16))((-9L)))))).sa7)).yyyyxxxy))).odd)), ((VECTOR(int32_t, 8))((-1L))), 0x1CD25CAEL, 0x644D4FFEL)).s14)).xxxyxyyyxyyyyyxx))))).s5);
                    if (l_979)
                    { /* block id: 425 */
                        uint32_t l_982 = 0x1173984BL;
                        uint32_t *l_981 = &l_982;
                        uint32_t **l_980 = &l_981;
                        int8_t l_983 = (-1L);
                        int32_t l_984 = (-8L);
                        int32_t l_985 = 0x3519FC76L;
                        int8_t l_986 = (-1L);
                        int8_t l_987[4][2] = {{0x20L,0x20L},{0x20L,0x20L},{0x20L,0x20L},{0x20L,0x20L}};
                        uint16_t l_988[7][10] = {{0x8F00L,65535UL,0x2DFCL,65535UL,0x1AE4L,65535UL,0x2DFCL,65535UL,0x8F00L,0x2DFCL},{0x8F00L,65535UL,0x2DFCL,65535UL,0x1AE4L,65535UL,0x2DFCL,65535UL,0x8F00L,0x2DFCL},{0x8F00L,65535UL,0x2DFCL,65535UL,0x1AE4L,65535UL,0x2DFCL,65535UL,0x8F00L,0x2DFCL},{0x8F00L,65535UL,0x2DFCL,65535UL,0x1AE4L,65535UL,0x2DFCL,65535UL,0x8F00L,0x2DFCL},{0x8F00L,65535UL,0x2DFCL,65535UL,0x1AE4L,65535UL,0x2DFCL,65535UL,0x8F00L,0x2DFCL},{0x8F00L,65535UL,0x2DFCL,65535UL,0x1AE4L,65535UL,0x2DFCL,65535UL,0x8F00L,0x2DFCL},{0x8F00L,65535UL,0x2DFCL,65535UL,0x1AE4L,65535UL,0x2DFCL,65535UL,0x8F00L,0x2DFCL}};
                        uint32_t l_991[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
                        int i, j;
                        l_980 = (GROUP_DIVERGE(1, 1) , (void*)0);
                        l_988[1][8]++;
                        l_991[0] &= 0x7F09E745L;
                        l_839 = (void*)0;
                    }
                    else
                    { /* block id: 430 */
                        uint16_t l_992 = 65532UL;
                        int32_t l_996 = 0x55C2469DL;
                        int32_t *l_995 = &l_996;
                        int64_t l_997 = 0x4160B7406D70430CL;
                        int32_t l_998 = (-1L);
                        uint32_t l_999 = 8UL;
                        l_992--;
                        l_839 = l_995;
                        (*l_839) = (l_998 &= l_997);
                        ++l_999;
                    }
                    l_839 = (((VECTOR(int32_t, 4))((-9L), 0x4D7C199BL, 7L, 0x46EF9104L)).w , l_1002);
                    l_934[0] = l_1003[6];
                }
            }
            l_1006 = (((VECTOR(uint8_t, 16))(l_1004.zzxzzyzxwzzyyyxz)).s1 , l_1005);
            l_1008[2] = l_1007;
        }
        if (((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(l_1009.yyyxxyxxyxxyyxxx)).sba61, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(0x14AC24B0L, (l_1010 = 0x08E84779L), (-1L), 0x01C34F39L)).hi, ((VECTOR(int32_t, 4))(l_1011.xxxy)).hi))).xxxyxxxyxyxyyxxy)).sa13b))).yzyxxyxwyxxyzzyw, ((VECTOR(int32_t, 8))(l_1012.s67061661)).s7137016707067621))).s5)
        { /* block id: 445 */
            uint16_t l_1013 = 1UL;
            int32_t l_1015 = 3L;
            int32_t *l_1014 = &l_1015;
            l_1013 = 0x5F9A0210L;
            l_841 = (l_839 = l_1014);
            for (l_1015 = (-20); (l_1015 <= (-7)); l_1015 = safe_add_func_int32_t_s_s(l_1015, 2))
            { /* block id: 451 */
                int16_t l_1018 = 0x7CEEL;
                uint16_t l_1059 = 0UL;
                uint32_t l_1070 = 0UL;
                if ((l_1018 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x6EA641CDL, 0x06BEEAFFL)), 0x5FE8DE03L, 0x3C42A7D0L)).w))
                { /* block id: 453 */
                    int8_t l_1019 = 0L;
                    uint8_t l_1020 = 4UL;
                    int64_t l_1021 = 0x494C3A3EABBF6AAAL;
                    uint16_t l_1022 = 65527UL;
                    int64_t l_1023 = 1L;
                    VECTOR(int64_t, 8) l_1024 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-10L)), (-10L)), (-10L), (-1L), (-10L));
                    VECTOR(int32_t, 8) l_1025 = (VECTOR(int32_t, 8))(0x24CEA316L, (VECTOR(int32_t, 4))(0x24CEA316L, (VECTOR(int32_t, 2))(0x24CEA316L, 0x2339640DL), 0x2339640DL), 0x2339640DL, 0x24CEA316L, 0x2339640DL);
                    VECTOR(int32_t, 4) l_1026 = (VECTOR(int32_t, 4))(0x251018B0L, (VECTOR(int32_t, 2))(0x251018B0L, 0x4FF730D9L), 0x4FF730D9L);
                    uint16_t l_1027[9];
                    uint16_t l_1028 = 0x4BFAL;
                    uint32_t l_1029 = 0xCE8D9738L;
                    uint8_t l_1030 = 0x9AL;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1027[i] = 0x7083L;
                    l_1011.x = ((l_1019 , ((l_1020 |= GROUP_DIVERGE(2, 1)) , l_1021)) , l_1022);
                    l_1027[2] |= ((VECTOR(int32_t, 8))(0x552FE303L, (l_1023 , (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_1024.s26)).xyxx)).ywzywwwy)).s6 , ((VECTOR(int32_t, 2))(l_1025.s41)).odd)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_1026.yxyz)))), 0x7237F42EL, 0x78EC1FA7L)).s3;
                    l_1030 = (l_1028 , l_1029);
                }
                else
                { /* block id: 458 */
                    int32_t l_1031 = 0x3F5A306FL;
                    uint64_t l_1046 = 0x7230179E265ACCBEL;
                    uint32_t l_1047 = 0UL;
                    int16_t l_1048 = 1L;
                    uint32_t l_1058 = 0x9847C81CL;
                    for (l_1031 = 0; (l_1031 >= 18); l_1031 = safe_add_func_uint16_t_u_u(l_1031, 3))
                    { /* block id: 461 */
                        int64_t l_1034 = 0x58552D4B0E50C316L;
                        uint8_t l_1035[3];
                        uint16_t l_1036 = 65535UL;
                        VECTOR(int32_t, 4) l_1037 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x0805B58EL), 0x0805B58EL);
                        VECTOR(int32_t, 4) l_1038 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x07B3A053L), 0x07B3A053L);
                        VECTOR(uint8_t, 2) l_1039 = (VECTOR(uint8_t, 2))(1UL, 1UL);
                        uint64_t l_1040 = 3UL;
                        VECTOR(int32_t, 4) l_1041 = (VECTOR(int32_t, 4))(0x446D9AF5L, (VECTOR(int32_t, 2))(0x446D9AF5L, 0x698FFD36L), 0x698FFD36L);
                        int8_t l_1042 = 0L;
                        VECTOR(int32_t, 2) l_1043 = (VECTOR(int32_t, 2))(1L, (-10L));
                        int32_t *l_1044 = (void*)0;
                        int32_t *l_1045 = (void*)0;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1035[i] = 255UL;
                        l_1036 |= (l_1034 , l_1035[1]);
                        l_841 = (void*)0;
                        l_1011.x |= ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(0x379192BEL, 9L)).xxyyxxyxxxyxxxyy, ((VECTOR(int32_t, 4))(0x3D19EAC8L, ((l_1039.x &= ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 16))(l_1037.ywwwzyzzywwzyxzz)).s390e, ((VECTOR(int32_t, 4))(l_1038.zwyx))))).x) , l_1040), 0x0C6B267CL, (-4L))).xzywyyzwwxxxxwzz))).odd, ((VECTOR(int32_t, 8))(l_1041.ywwzywww))))).s2;
                        l_1045 = (((l_1043.x = l_1042) , FAKE_DIVERGE(p_1119->local_2_offset, get_local_id(2), 10)) , (l_1044 = l_1044));
                    }
                    l_1012.s4 = (l_1048 = (l_1047 = l_1046));
                    for (l_1047 = 12; (l_1047 < 48); l_1047 = safe_add_func_int64_t_s_s(l_1047, 1))
                    { /* block id: 475 */
                        int32_t *l_1051 = (void*)0;
                        int32_t *l_1052 = (void*)0;
                        uint32_t l_1053 = 4294967295UL;
                        int32_t l_1057 = (-9L);
                        int32_t *l_1056 = &l_1057;
                        l_1051 = (void*)0;
                        l_1014 = l_1052;
                        l_1053++;
                        l_1014 = (l_841 = l_1056);
                    }
                    l_1011.x |= l_1058;
                }
                if (l_1059)
                { /* block id: 484 */
                    uint8_t l_1060 = 9UL;
                    ++l_1060;
                }
                else
                { /* block id: 486 */
                    int64_t l_1063 = 9L;
                    VECTOR(int16_t, 8) l_1064 = (VECTOR(int16_t, 8))(0x1636L, (VECTOR(int16_t, 4))(0x1636L, (VECTOR(int16_t, 2))(0x1636L, 0x6B29L), 0x6B29L), 0x6B29L, 0x1636L, 0x6B29L);
                    uint32_t l_1065 = 0x9626DCD4L;
                    VECTOR(uint8_t, 8) l_1066 = (VECTOR(uint8_t, 8))(0x4EL, (VECTOR(uint8_t, 4))(0x4EL, (VECTOR(uint8_t, 2))(0x4EL, 0x55L), 0x55L), 0x55L, 0x4EL, 0x55L);
                    int32_t l_1067 = 0x24C0C335L;
                    int16_t l_1068 = (-2L);
                    uint32_t l_1069 = 1UL;
                    int i;
                    l_1068 |= (l_1063 , (((l_1018 = ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_1064.s3622)).yxzxwzzxyzxwxzwz)).sbc)))).odd) , l_1065) , ((l_1066.s6 = 0x5565C1FEL) , l_1067)));
                    l_1069 = (-7L);
                }
                l_839 = (l_1070 , (void*)0);
            }
        }
        else
        { /* block id: 494 */
            int32_t l_1071 = 0L;
            uint8_t l_1118 = 0x07L;
            for (l_1071 = 0; (l_1071 < (-19)); --l_1071)
            { /* block id: 497 */
                uint64_t l_1074 = 0x026391C653D850D2L;
                int32_t l_1096 = (-1L);
                uint32_t l_1117 = 4294967291UL;
                if (l_1074)
                { /* block id: 498 */
                    l_841 = (void*)0;
                }
                else
                { /* block id: 500 */
                    uint8_t l_1075 = 0x16L;
                    uint32_t l_1076 = 4294967295UL;
                    int32_t l_1077 = (-1L);
                    uint32_t l_1078 = 4UL;
                    l_1076 = (l_1011.x = (l_1075 , 1L));
                    if ((l_1077 , l_1078))
                    { /* block id: 503 */
                        int32_t l_1079[9][5] = {{0x69EA24DFL,1L,0x1FF121B7L,2L,0x1FF121B7L},{0x69EA24DFL,1L,0x1FF121B7L,2L,0x1FF121B7L},{0x69EA24DFL,1L,0x1FF121B7L,2L,0x1FF121B7L},{0x69EA24DFL,1L,0x1FF121B7L,2L,0x1FF121B7L},{0x69EA24DFL,1L,0x1FF121B7L,2L,0x1FF121B7L},{0x69EA24DFL,1L,0x1FF121B7L,2L,0x1FF121B7L},{0x69EA24DFL,1L,0x1FF121B7L,2L,0x1FF121B7L},{0x69EA24DFL,1L,0x1FF121B7L,2L,0x1FF121B7L},{0x69EA24DFL,1L,0x1FF121B7L,2L,0x1FF121B7L}};
                        int32_t l_1080 = (-1L);
                        int32_t l_1081 = 0x58266C20L;
                        uint8_t l_1082 = 5UL;
                        VECTOR(int32_t, 8) l_1083 = (VECTOR(int32_t, 8))(0x3825EB5FL, (VECTOR(int32_t, 4))(0x3825EB5FL, (VECTOR(int32_t, 2))(0x3825EB5FL, 0x7617C887L), 0x7617C887L), 0x7617C887L, 0x3825EB5FL, 0x7617C887L);
                        VECTOR(int32_t, 16) l_1084 = (VECTOR(int32_t, 16))(0x623F0EE8L, (VECTOR(int32_t, 4))(0x623F0EE8L, (VECTOR(int32_t, 2))(0x623F0EE8L, 0x05E1E507L), 0x05E1E507L), 0x05E1E507L, 0x623F0EE8L, 0x05E1E507L, (VECTOR(int32_t, 2))(0x623F0EE8L, 0x05E1E507L), (VECTOR(int32_t, 2))(0x623F0EE8L, 0x05E1E507L), 0x623F0EE8L, 0x05E1E507L, 0x623F0EE8L, 0x05E1E507L);
                        int i, j;
                        l_1009.x = 0x0D9E1176L;
                        l_1011.x = (-6L);
                        l_1083.s1 = (l_1084.sc = ((l_1082 &= (l_1079[1][1] , ((((VECTOR(int32_t, 4))(0x45A87B10L, (-9L), 0x036A73CBL, (-3L))).y , 0x1D4B9ACE12C84997L) , (l_1081 = l_1080)))) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(l_1083.s5340007571673316)).s473c, ((VECTOR(int32_t, 2))(l_1084.sae)).xyyx))))).odd)).lo));
                    }
                    else
                    { /* block id: 510 */
                        VECTOR(uint8_t, 16) l_1085 = (VECTOR(uint8_t, 16))(0x76L, (VECTOR(uint8_t, 4))(0x76L, (VECTOR(uint8_t, 2))(0x76L, 1UL), 1UL), 1UL, 0x76L, 1UL, (VECTOR(uint8_t, 2))(0x76L, 1UL), (VECTOR(uint8_t, 2))(0x76L, 1UL), 0x76L, 1UL, 0x76L, 1UL);
                        VECTOR(uint8_t, 4) l_1086 = (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 255UL), 255UL);
                        VECTOR(int32_t, 8) l_1087 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-7L)), (-7L)), (-7L), 0L, (-7L));
                        VECTOR(uint64_t, 2) l_1088 = (VECTOR(uint64_t, 2))(1UL, 0x089B5884DC94B85AL);
                        uint8_t l_1089 = 0xCEL;
                        VECTOR(int32_t, 4) l_1090 = (VECTOR(int32_t, 4))(0x46D0C208L, (VECTOR(int32_t, 2))(0x46D0C208L, 0x2DD500ADL), 0x2DD500ADL);
                        uint8_t l_1091 = 4UL;
                        int32_t *l_1092 = (void*)0;
                        uint32_t l_1093[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1093[i] = 4294967286UL;
                        l_1091 &= (((((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(l_1085.sb4)), ((VECTOR(uint8_t, 16))(l_1086.zzzyyzxzyzzyzzyy)).s1b))).lo , ((VECTOR(int32_t, 4))(l_1087.s4071)).z) , ((VECTOR(uint64_t, 8))(l_1088.xxyyyyxy)).s2) , (l_840 = (l_1089 , (l_1087.s0 = ((VECTOR(int32_t, 2))(l_1090.yz)).hi))));
                        l_839 = l_1092;
                        l_1093[2]--;
                    }
                }
                if (l_1096)
                { /* block id: 518 */
                    uint32_t l_1097 = 0UL;
                    if (l_1097)
                    { /* block id: 519 */
                        int64_t l_1098 = 0x72F517EBCEF63342L;
                        uint8_t l_1099[10] = {251UL,0xC6L,9UL,0xC6L,251UL,251UL,0xC6L,9UL,0xC6L,251UL};
                        int32_t l_1100 = 0x29125E6CL;
                        int64_t l_1101 = 0x508E21C02F6BB254L;
                        uint8_t l_1102 = 0UL;
                        VECTOR(int16_t, 16) l_1107 = (VECTOR(int16_t, 16))(0x6858L, (VECTOR(int16_t, 4))(0x6858L, (VECTOR(int16_t, 2))(0x6858L, 0x35ACL), 0x35ACL), 0x35ACL, 0x6858L, 0x35ACL, (VECTOR(int16_t, 2))(0x6858L, 0x35ACL), (VECTOR(int16_t, 2))(0x6858L, 0x35ACL), 0x6858L, 0x35ACL, 0x6858L, 0x35ACL);
                        int16_t *l_1106 = (void*)0;
                        int16_t **l_1105 = &l_1106;
                        int16_t **l_1108 = &l_1106;
                        int i;
                        l_1098 = (-1L);
                        l_1101 = (l_1100 = l_1099[7]);
                        l_1102--;
                        l_1108 = l_1105;
                    }
                    else
                    { /* block id: 525 */
                        int32_t l_1110 = 8L;
                        int32_t *l_1109 = &l_1110;
                        l_839 = l_1109;
                        l_841 = (void*)0;
                    }
                }
                else
                { /* block id: 529 */
                    int64_t l_1111 = 0x080182C71E933D34L;
                    uint16_t l_1112[7][4][8] = {{{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL}},{{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL}},{{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL}},{{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL}},{{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL}},{{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL}},{{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL},{65535UL,0xB40EL,0UL,0UL,0xB40EL,65535UL,1UL,0UL}}};
                    int64_t l_1115 = 0x6ACEE84644DC3687L;
                    uint32_t l_1116 = 3UL;
                    int i, j, k;
                    l_1112[5][3][7]--;
                    l_1116 |= l_1115;
                }
                l_1096 ^= l_1117;
            }
            l_1009.x = (l_1071 &= l_1118);
        }
        unsigned int result = 0;
        result += l_840;
        result += l_1009.y;
        result += l_1009.x;
        result += l_1010;
        result += l_1011.y;
        result += l_1011.x;
        result += l_1012.s7;
        result += l_1012.s6;
        result += l_1012.s5;
        result += l_1012.s4;
        result += l_1012.s3;
        result += l_1012.s2;
        result += l_1012.s1;
        result += l_1012.s0;
        atomic_add(&p_1119->l_special_values[42], result);
    }
    else
    { /* block id: 538 */
        (1 + 1);
    }
    return p_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_1119->g_419 p_1119->g_420 p_1119->g_421 p_1119->g_411 p_1119->g_457 p_1119->g_313 p_1119->g_326 p_1119->g_48 p_1119->g_474 p_1119->g_475 p_1119->g_117 p_1119->g_315 p_1119->g_39
 * writes: p_1119->g_117 p_1119->g_325 p_1119->g_414 p_1119->g_313 p_1119->g_243
 */
int32_t  func_5(int32_t  p_6, uint32_t  p_7, int64_t  p_8, uint32_t  p_9, uint32_t  p_10, struct S0 * p_1119)
{ /* block id: 207 */
    int32_t *l_434 = &p_1119->g_117;
    int8_t *l_441 = (void*)0;
    VECTOR(int64_t, 4) l_446 = (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0x7491E24DE4D80CF9L), 0x7491E24DE4D80CF9L);
    int16_t *l_447[8][5][5] = {{{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0}},{{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0}},{{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0}},{{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0}},{{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0}},{{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0}},{{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0}},{{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0},{(void*)0,&p_1119->g_213,&p_1119->g_411,&p_1119->g_411,(void*)0}}};
    uint64_t *l_448 = (void*)0;
    uint64_t *l_449 = &p_1119->g_414;
    int32_t **l_450 = &l_434;
    VECTOR(uint8_t, 8) l_458 = (VECTOR(uint8_t, 8))(0x48L, (VECTOR(uint8_t, 4))(0x48L, (VECTOR(uint8_t, 2))(0x48L, 9UL), 9UL), 9UL, 0x48L, 9UL);
    VECTOR(uint8_t, 2) l_459 = (VECTOR(uint8_t, 2))(1UL, 1UL);
    uint8_t *l_460 = &p_1119->g_313;
    VECTOR(int16_t, 16) l_461 = (VECTOR(int16_t, 16))(0x1BC9L, (VECTOR(int16_t, 4))(0x1BC9L, (VECTOR(int16_t, 2))(0x1BC9L, 7L), 7L), 7L, 0x1BC9L, 7L, (VECTOR(int16_t, 2))(0x1BC9L, 7L), (VECTOR(int16_t, 2))(0x1BC9L, 7L), 0x1BC9L, 7L, 0x1BC9L, 7L);
    VECTOR(int8_t, 4) l_468 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x26L), 0x26L);
    VECTOR(int8_t, 4) l_469 = (VECTOR(int8_t, 4))(0x07L, (VECTOR(int8_t, 2))(0x07L, 1L), 1L);
    VECTOR(uint8_t, 4) l_472 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x7DL), 0x7DL);
    VECTOR(uint8_t, 16) l_473 = (VECTOR(uint8_t, 16))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x85L), 0x85L), 0x85L, 253UL, 0x85L, (VECTOR(uint8_t, 2))(253UL, 0x85L), (VECTOR(uint8_t, 2))(253UL, 0x85L), 253UL, 0x85L, 253UL, 0x85L);
    int32_t *l_476[6] = {&p_1119->g_477,(void*)0,&p_1119->g_477,&p_1119->g_477,(void*)0,&p_1119->g_477};
    int16_t l_478 = 1L;
    int i, j, k;
    (*l_450) = ((safe_unary_minus_func_uint8_t_u((((*l_449) = ((((safe_lshift_func_uint16_t_u_s((((((void*)0 == l_434) <= p_8) || (7UL == (safe_lshift_func_uint16_t_u_u(p_10, (safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((l_441 == l_441) || 1L), (safe_sub_func_int16_t_s_s((p_1119->g_325.x = ((*l_434) = (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_446.xwww)).wyywywwy)).s4, ((2L && (**p_1119->g_419)) | p_8))))), p_1119->g_411)))), 0UL)))))) <= 0x6880B5BB094067ADL), l_446.y)) , GROUP_DIVERGE(1, 1)) != p_7) == p_7)) || p_7))) , l_434);
    l_478 |= ((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(8UL, 0UL, ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 16))(p_1119->g_457.s1431350300656221)).sb391, ((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_458.s71)).xyyxxxyxyxyyxxyx)).s456d)).xxzwwwwyxzxzzwwz))).s672b))).odd, ((VECTOR(uint8_t, 4))(l_459.xxxx)).hi))), (0UL & p_6), 3UL, 0x9EL, 2UL)).s3, ((*l_460) &= FAKE_DIVERGE(p_1119->group_0_offset, get_group_id(0), 10)))), ((VECTOR(int16_t, 16))(l_461.s87a5823a4e5af346)).sb)), 3)) <= ((safe_mod_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 16))((safe_lshift_func_int16_t_s_s(((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))((-1L), (!(p_1119->g_243.w = ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_468.ywwx)).xwzwxzwxxyzzwxzy)).s3)), (p_1119->g_326.s0 , p_1119->g_48), 0x2DL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_469.xyxwxyxywxzywyzw)).sf586)), 0L, (safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 4))(l_472.wwxx)), ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))((0x04L <= ((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 2))(l_473.sc5)).xxyxxyxxyyyyyxxy, ((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(p_1119->g_474.s06)).yyyxyxyxxyyyxyxx, ((VECTOR(uint8_t, 4))(p_1119->g_475.ywwy)).wwxxyyxwwzxwwywx)))))), ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs(((VECTOR(int8_t, 8))((*l_434), p_9, 0x30L, ((VECTOR(int8_t, 4))(0x7EL)), 0x3FL)).hi))), p_1119->g_48, ((VECTOR(uint8_t, 2))(0x48L)), 254UL)).s6604200465354075)))).s5f, ((VECTOR(uint8_t, 2))(0x31L))))).xyyyxyxyyyyyyxyy))).s4), 0x13L, p_10, 255UL, p_10, 249UL, 0x96L, p_1119->g_315, ((VECTOR(uint8_t, 2))(0x8FL)), 1UL, 255UL, 2UL, ((VECTOR(uint8_t, 2))(0x4AL)), 1UL)).even, ((VECTOR(uint8_t, 8))(0xBBL))))).hi))).y, p_1119->g_39)), 0x36L, ((VECTOR(int8_t, 2))((-1L))), 0L, 0x2DL, 8L)))))))).s11d9)).wzzwzwxxwzzzxzyw)).s9de4, (int8_t)(*l_434), (int8_t)p_6))).zwwywyyzywxywyww)).s1 & 255UL) <= (**l_450)), 4)), 0x8243ABB773E2B31EL, 0x8197EBCE1CE6D3A4L, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(18446744073709551609UL)), (**l_450), ((VECTOR(uint64_t, 8))(0xD44AFADEB7AF6B74L)), 0x187CCFE374C47196L)).sf, p_7)), 0x19FFL)) , p_9));
    return (**l_450);
}


/* ------------------------------------------ */
/* 
 * reads : p_1119->g_39 p_1119->g_243 p_1119->g_119 p_1119->g_363 p_1119->g_317 p_1119->g_315 p_1119->g_381 p_1119->g_326 p_1119->g_177 p_1119->g_192 p_1119->g_399 p_1119->g_402 p_1119->g_403 p_1119->g_406 p_1119->g_266 p_1119->g_208 p_1119->g_96 p_1119->g_142 p_1119->g_411 p_1119->g_117 p_1119->g_92 p_1119->g_414 p_1119->g_301 p_1119->g_419 p_1119->g_182
 * writes: p_1119->g_363 p_1119->g_317 p_1119->g_117 p_1119->g_243 p_1119->g_182 p_1119->g_209 p_1119->g_92 p_1119->g_414 p_1119->g_301 p_1119->g_266
 */
int32_t  func_13(uint32_t  p_14, uint32_t  p_15, uint32_t  p_16, uint16_t  p_17, int64_t  p_18, struct S0 * p_1119)
{ /* block id: 161 */
    int32_t *l_335 = &p_1119->g_117;
    int32_t *l_336 = &p_1119->g_39;
    int32_t *l_337 = &p_1119->g_39;
    int32_t l_338 = 0L;
    int32_t *l_339 = (void*)0;
    int32_t *l_340 = &l_338;
    int32_t *l_341[6][5] = {{(void*)0,(void*)0,&p_1119->g_48,&p_1119->g_117,&p_1119->g_117},{(void*)0,(void*)0,&p_1119->g_48,&p_1119->g_117,&p_1119->g_117},{(void*)0,(void*)0,&p_1119->g_48,&p_1119->g_117,&p_1119->g_117},{(void*)0,(void*)0,&p_1119->g_48,&p_1119->g_117,&p_1119->g_117},{(void*)0,(void*)0,&p_1119->g_48,&p_1119->g_117,&p_1119->g_117},{(void*)0,(void*)0,&p_1119->g_48,&p_1119->g_117,&p_1119->g_117}};
    int32_t l_342 = 0x53F3A4E2L;
    uint64_t l_343 = 0xE7FB35D6010110AAL;
    uint8_t *l_368 = &p_1119->g_317;
    int32_t l_376 = 1L;
    VECTOR(int32_t, 2) l_382 = (VECTOR(int32_t, 2))(0x6FE70771L, 0x3A936209L);
    int16_t *l_386 = (void*)0;
    int16_t **l_385 = &l_386;
    VECTOR(int64_t, 8) l_400 = (VECTOR(int64_t, 8))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 0x601CF631AE3A4A1EL), 0x601CF631AE3A4A1EL), 0x601CF631AE3A4A1EL, 4L, 0x601CF631AE3A4A1EL);
    VECTOR(int64_t, 16) l_401 = (VECTOR(int64_t, 16))(0x3CB891A35CCBD2D6L, (VECTOR(int64_t, 4))(0x3CB891A35CCBD2D6L, (VECTOR(int64_t, 2))(0x3CB891A35CCBD2D6L, (-3L)), (-3L)), (-3L), 0x3CB891A35CCBD2D6L, (-3L), (VECTOR(int64_t, 2))(0x3CB891A35CCBD2D6L, (-3L)), (VECTOR(int64_t, 2))(0x3CB891A35CCBD2D6L, (-3L)), 0x3CB891A35CCBD2D6L, (-3L), 0x3CB891A35CCBD2D6L, (-3L));
    VECTOR(uint32_t, 2) l_422 = (VECTOR(uint32_t, 2))(0xBE7F7B45L, 4294967288UL);
    int16_t l_425 = 1L;
    uint32_t l_426 = 0xFE5B9B15L;
    int i, j;
    l_343--;
    for (l_343 = 0; (l_343 > 38); l_343 = safe_add_func_int8_t_s_s(l_343, 1))
    { /* block id: 165 */
        uint64_t **l_348 = &p_1119->g_209[3];
        int32_t *l_349 = &p_1119->g_48;
        int32_t **l_350 = (void*)0;
        l_341[1][1] = func_68(((*l_337) , &l_338), p_1119->g_243.y, (l_348 == &p_1119->g_209[1]), (p_1119->g_119[0][0][0] , l_349), p_1119);
    }
    for (l_338 = 2; (l_338 == (-22)); --l_338)
    { /* block id: 170 */
        uint32_t l_353 = 0UL;
        int32_t l_356 = (-1L);
        int32_t l_357 = 0x4A6FA541L;
        int32_t l_358 = 0L;
        int32_t l_359 = 0x33CF161FL;
        int32_t l_360 = 1L;
        int16_t l_361 = 0x79C4L;
        VECTOR(int32_t, 2) l_362 = (VECTOR(int32_t, 2))(0x6D4EB450L, 0x57A7EDF8L);
        int i;
        --l_353;
        ++p_1119->g_363;
    }
    if ((((safe_lshift_func_uint8_t_u_u(((*l_368)--), (safe_lshift_func_uint16_t_u_s((l_376 = (safe_div_func_uint32_t_u_u((p_1119->g_315 <= ((((*l_335) = ((*l_340) = (*l_336))) != (p_1119->g_243.z = p_18)) || (safe_unary_minus_func_uint32_t_u(p_14)))), 0xBE45F899L))), (safe_add_func_int16_t_s_s(((((VECTOR(uint64_t, 8))(sub_sat(((VECTOR(uint64_t, 4))(p_1119->g_381.s8912)).wxyzxwxy, ((VECTOR(uint64_t, 2))(0xAFCFDFD8881135BBL, 0x3C5331D8BF521727L)).yxyyxyyx))).s0 != (((VECTOR(int32_t, 4))(l_382.yxyx)).y >= (safe_lshift_func_int16_t_s_u(p_1119->g_363, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 8))((&l_343 != &l_343), ((p_1119->g_326.s5 >= 0L) > p_1119->g_326.s4), 0x2B4EL, 0UL, ((VECTOR(uint16_t, 2))(0xDC28L)), 0xB63BL, 0x4756L)).s0062122521327113, ((VECTOR(uint16_t, 16))(0xF668L)), ((VECTOR(uint16_t, 16))(0x4A34L))))))).s3)))) , p_17), p_1119->g_177)))))) || p_16) , 3L))
    { /* block id: 179 */
        int16_t **l_387 = &l_386;
        int32_t **l_388[9][10] = {{&l_337,(void*)0,(void*)0,&l_335,(void*)0,(void*)0,&l_337,&l_335,&l_336,&l_336},{&l_337,(void*)0,(void*)0,&l_335,(void*)0,(void*)0,&l_337,&l_335,&l_336,&l_336},{&l_337,(void*)0,(void*)0,&l_335,(void*)0,(void*)0,&l_337,&l_335,&l_336,&l_336},{&l_337,(void*)0,(void*)0,&l_335,(void*)0,(void*)0,&l_337,&l_335,&l_336,&l_336},{&l_337,(void*)0,(void*)0,&l_335,(void*)0,(void*)0,&l_337,&l_335,&l_336,&l_336},{&l_337,(void*)0,(void*)0,&l_335,(void*)0,(void*)0,&l_337,&l_335,&l_336,&l_336},{&l_337,(void*)0,(void*)0,&l_335,(void*)0,(void*)0,&l_337,&l_335,&l_336,&l_336},{&l_337,(void*)0,(void*)0,&l_335,(void*)0,(void*)0,&l_337,&l_335,&l_336,&l_336},{&l_337,(void*)0,(void*)0,&l_335,(void*)0,(void*)0,&l_337,&l_335,&l_336,&l_336}};
        int8_t *l_391 = (void*)0;
        int8_t **l_390[10];
        int8_t ***l_389 = &l_390[8];
        VECTOR(int64_t, 4) l_398 = (VECTOR(int64_t, 4))(0x4F07E083D26581A0L, (VECTOR(int64_t, 2))(0x4F07E083D26581A0L, 0x3F5DAA94B103E8A3L), 0x3F5DAA94B103E8A3L);
        uint64_t *l_409 = (void*)0;
        uint64_t **l_410 = &l_409;
        int i, j;
        for (i = 0; i < 10; i++)
            l_390[i] = &l_391;
        l_387 = l_385;
        (*p_1119->g_192) = &l_338;
        l_340 = (((((*l_389) = (void*)0) == (void*)0) > ((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_div_func_uint8_t_u_u((((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 4))(l_398.xwwx)), ((VECTOR(int64_t, 4))(p_1119->g_399.sb602))))), ((VECTOR(int64_t, 4))(l_400.s1401))))).wywxzywzzxwzywyz, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(l_401.s7c43d732907074a1)).s78, ((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 8))(p_1119->g_402.xwyxxzxy)), (int64_t)((VECTOR(int64_t, 16))(p_1119->g_403.s14e1480073b3f8f8)).s2))).s04))))), 7L, (-1L))).yxxyxzxxywxxzwzz)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 4))((safe_sub_func_int64_t_s_s((((p_1119->g_406 == l_391) & (safe_mod_func_uint32_t_u_u(p_1119->g_266, (((((*l_410) = ((*p_1119->g_208) = l_409)) == (void*)0) & ((((((void*)0 == &l_336) , (void*)0) != (void*)0) == p_1119->g_96[0][7]) && p_1119->g_142)) || p_16)))) , p_1119->g_315), p_16)), 0x3675E182L, 5L, 0x03F45E6CL)).zwyxxywwzywzzwzz, ((VECTOR(uint32_t, 16))(1UL)))))))))), ((VECTOR(int64_t, 16))(1L))))).s38, ((VECTOR(int64_t, 2))(0x6D5C8353DF97EA1EL))))).xyxyxxyx, ((VECTOR(uint64_t, 8))(0x22337BE4DDF5017FL))))).s1234367747672401)).s78, ((VECTOR(uint64_t, 2))(4UL))))).xxyyxyxyxyxxyxyx, ((VECTOR(uint64_t, 16))(0xF150657BC51A4926L)), ((VECTOR(uint64_t, 16))(0x140CBF2E0B09EFCCL))))).s0b, ((VECTOR(uint64_t, 2))(18446744073709551615UL))))).xxxyyxxxyyxyyyyy, ((VECTOR(uint64_t, 16))(18446744073709551614UL))))).s7aeb, ((VECTOR(uint64_t, 4))(0xA518975EC5DB6749L))))))))).even, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), ((VECTOR(uint64_t, 2))(0xCBE0D112361A22D3L))))).xyyxyyxyxyyyyyxy, ((VECTOR(uint64_t, 16))(0x9AF3D454FA5633EEL))))).sf && p_1119->g_411), 0xD2L)), (-1L))), 6L)) || p_1119->g_117)) , &l_376);
        for (p_1119->g_92 = 0; (p_1119->g_92 >= 43); p_1119->g_92 = safe_add_func_uint8_t_u_u(p_1119->g_92, 1))
        { /* block id: 188 */
            p_1119->g_414 |= p_16;
            for (p_1119->g_301 = (-26); (p_1119->g_301 <= (-11)); p_1119->g_301++)
            { /* block id: 192 */
                for (p_1119->g_266 = (-1); (p_1119->g_266 != 41); ++p_1119->g_266)
                { /* block id: 195 */
                    (**p_1119->g_192) = (p_1119->g_419 != &p_1119->g_420[1]);
                }
            }
        }
    }
    else
    { /* block id: 200 */
        int32_t **l_429 = &p_1119->g_182;
        --l_422.x;
        --l_426;
        (*l_429) = &l_338;
    }
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads : p_1119->g_comm_values p_1119->g_52 p_1119->g_48 p_1119->g_92 p_1119->g_93 p_1119->g_96 p_1119->l_comm_values p_1119->g_39 p_1119->g_119 p_1119->g_123 p_1119->g_138 p_1119->g_192 p_1119->g_180 p_1119->g_117 p_1119->g_208 p_1119->g_181 p_1119->g_182 p_1119->g_217 p_1119->g_139 p_1119->g_142 p_1119->g_114 p_1119->g_46 p_1119->g_213 p_1119->g_266 p_1119->g_37 p_1119->g_49 p_1119->g_301 p_1119->g_313 p_1119->g_315
 * writes: p_1119->g_92 p_1119->g_96 p_1119->g_39 p_1119->g_119 p_1119->g_48 p_1119->g_123 p_1119->g_139 p_1119->g_182 p_1119->g_208 p_1119->g_46 p_1119->g_243 p_1119->g_117 p_1119->g_114 p_1119->g_37 p_1119->g_49 p_1119->g_52 p_1119->g_301 p_1119->g_142 p_1119->g_313 p_1119->g_315 p_1119->g_213 p_1119->g_317
 */
int32_t  func_21(uint16_t  p_22, uint64_t  p_23, int64_t  p_24, int64_t  p_25, struct S0 * p_1119)
{ /* block id: 11 */
    int32_t *l_67 = (void*)0;
    int32_t *l_83[10] = {&p_1119->g_39,&p_1119->g_39,&p_1119->g_39,&p_1119->g_39,&p_1119->g_39,&p_1119->g_39,&p_1119->g_39,&p_1119->g_39,&p_1119->g_39,&p_1119->g_39};
    int32_t **l_82 = &l_83[6];
    int32_t l_294 = (-1L);
    uint64_t l_295 = 18446744073709551612UL;
    int32_t *l_300[5][9][5] = {{{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301}},{{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301}},{{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301}},{{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301}},{{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301},{&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301,&p_1119->g_301}}};
    uint8_t l_306 = 249UL;
    VECTOR(int8_t, 4) l_307 = (VECTOR(int8_t, 4))(0x2BL, (VECTOR(int8_t, 2))(0x2BL, 0x47L), 0x47L);
    VECTOR(int8_t, 8) l_308 = (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x5CL), 0x5CL), 0x5CL, 8L, 0x5CL);
    uint32_t l_311 = 0x1A0FEFC5L;
    uint8_t *l_312 = &p_1119->g_313;
    int64_t *l_314 = &p_1119->g_315;
    int16_t *l_316[2][4] = {{&p_1119->g_213,&p_1119->g_213,&p_1119->g_213,&p_1119->g_213},{&p_1119->g_213,&p_1119->g_213,&p_1119->g_213,&p_1119->g_213}};
    uint8_t l_318[9][4] = {{4UL,0xC9L,252UL,255UL},{4UL,0xC9L,252UL,255UL},{4UL,0xC9L,252UL,255UL},{4UL,0xC9L,252UL,255UL},{4UL,0xC9L,252UL,255UL},{4UL,0xC9L,252UL,255UL},{4UL,0xC9L,252UL,255UL},{4UL,0xC9L,252UL,255UL},{4UL,0xC9L,252UL,255UL}};
    VECTOR(int64_t, 8) l_323 = (VECTOR(int64_t, 8))((-10L), (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), (-1L)), (-1L)), (-1L), (-10L), (-1L));
    uint16_t l_327 = 65535UL;
    int i, j, k;
    l_295 = (func_27(func_27((+FAKE_DIVERGE(p_1119->group_0_offset, get_group_id(0), 10)), func_55(((*l_82) = func_60(((safe_rshift_func_uint16_t_u_s(((l_67 == (p_1119->g_comm_values[p_1119->tid] , func_68(func_73(p_24, (safe_add_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(p_1119->g_52, ((((*l_82) = &p_1119->g_48) != l_67) != (safe_mod_func_int64_t_s_s((-1L), 0x04C396C7BFB9E2BFL))))), (safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((p_23 | (-10L)), p_24)), p_1119->g_52)))), p_23, p_1119->g_comm_values[p_1119->tid], p_1119), p_25, p_22, &p_1119->g_39, p_1119))) , p_1119->g_93.s2), p_24)) != p_1119->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1119->tid, 252))]), p_1119->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1119->tid, 252))], &p_1119->g_39, &p_1119->g_39, p_1119)), p_23, p_1119->g_142, p_1119->g_52, p_1119), p_1119->g_266, p_1119), p_1119->g_comm_values[p_1119->tid], p_22, p_1119) , l_294);
    p_1119->g_48 &= (p_1119->g_39 = ((p_22 , (((((p_1119->g_317 = (p_1119->g_213 = (&l_83[0] != ((safe_lshift_func_uint16_t_u_u((((*l_314) |= (((*l_312) |= (!((p_1119->g_142 = (safe_mod_func_int16_t_s_s(((p_1119->g_301 ^= 3L) , (safe_div_func_int8_t_s_s((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(0x61L, ((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(247UL, 0xC2L, 0xB7L, p_22, (safe_div_func_uint16_t_u_u(0xCAD6L, l_306)), 0x14L, 0x79L, 251UL, ((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_307.zx)).xyyy)).xwzwyzzz)), ((VECTOR(int8_t, 8))(l_308.s34636016))))).s7, 5UL, 0x68L, 0x62L, (((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((l_311 , p_22), 0x101A90A6C384C50CL, 0x61ED80AE462C7E73L, (-1L))).lo)))).yyxx, ((VECTOR(int64_t, 4))((-1L)))))).y, p_22)) && p_1119->g_49) ^ p_25), 0x0BL, 0x93L, 0x03L)).se42d)).odd, ((VECTOR(uint8_t, 2))(248UL))))).yxyxyyyx)).hi, ((VECTOR(uint8_t, 4))(6UL))))))), 0xD4L, p_22, ((VECTOR(uint8_t, 8))(0x2DL)), 0xF5L, 6UL)).s52c7, ((VECTOR(uint8_t, 4))(0x2CL)), ((VECTOR(uint8_t, 4))(0xC8L))))), 0x2FL, 0x40L, 0xE5L)).lo)).z == (-5L)), p_22))), GROUP_DIVERGE(0, 1)))) , p_1119->g_96[0][6]))) ^ p_23)) || p_22), p_22)) , &l_83[4])))) != p_23) && 0x29C5L) == p_1119->g_180[1]) >= l_318[8][1])) , p_22));
    for (p_1119->g_313 = 26; (p_1119->g_313 > 8); --p_1119->g_313)
    { /* block id: 148 */
        int16_t l_324 = (-1L);
        int8_t *l_328 = (void*)0;
        int8_t **l_329 = &l_328;
        int8_t *l_333 = (void*)0;
        int8_t **l_332 = &l_333;
        int32_t *l_334 = &l_294;
        for (p_1119->g_52 = 19; (p_1119->g_52 != 10); p_1119->g_52 = safe_sub_func_int8_t_s_s(p_1119->g_52, 4))
        { /* block id: 151 */
            (*p_1119->g_139) = p_23;
            (*p_1119->g_139) = ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x3E9B0ED2L, 9L)).xyxyyyyx))))).s5;
        }
        (*l_82) = func_68((*p_1119->g_217), p_22, (((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_323.s14)), ((*l_314) |= (((l_324 <= ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(p_1119->g_325.yxxxyyxxxxxyxxyx)).sd1, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_1119->g_326.s37)).yxxyxyxxxyyyyxxx)).even)).s12, (int16_t)((((l_327 | GROUP_DIVERGE(0, 1)) , 0x550DCA75L) | p_23) < (((*l_329) = l_328) == ((*l_332) = ((safe_mod_func_uint8_t_u_u(((((&p_22 != &p_22) >= FAKE_DIVERGE(p_1119->group_0_offset, get_group_id(0), 10)) ^ p_1119->g_213) , 255UL), p_1119->g_39)) , l_312)))), (int16_t)l_324)))))))).xxyx, ((VECTOR(int16_t, 4))(0x6853L))))).w) & (-1L)) , p_1119->g_180[1])), ((VECTOR(int64_t, 4))(0x46322EF10296D85FL)), 0x00B504E31E79A155L)), ((VECTOR(int64_t, 8))(0x006F2AADE44BFC9AL))))).s53)), 0x0D4892FD61412417L, 0x7112030E46948929L)).xzxzzzwwxwywwwww, ((VECTOR(int64_t, 16))(3L)), ((VECTOR(int64_t, 16))(0x0F51EF829056F2F8L))))).sc , p_1119->g_39), l_334, p_1119);
    }
    return p_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_1119->g_37 p_1119->g_49 p_1119->g_52 p_1119->g_48
 * writes: p_1119->g_37 p_1119->g_49 p_1119->g_52
 */
int8_t  func_27(uint32_t  p_28, uint8_t  p_29, uint32_t  p_30, struct S0 * p_1119)
{ /* block id: 5 */
    int32_t *l_38 = &p_1119->g_39;
    int32_t *l_40 = &p_1119->g_39;
    int32_t *l_41 = (void*)0;
    int32_t *l_42[3];
    uint16_t l_43 = 0x8B3DL;
    int i;
    for (i = 0; i < 3; i++)
        l_42[i] = &p_1119->g_39;
    p_1119->g_37 = p_1119->g_37;
    l_43++;
    p_1119->g_49--;
    p_1119->g_52--;
    return p_1119->g_48;
}


/* ------------------------------------------ */
/* 
 * reads : p_1119->g_182 p_1119->g_39 p_1119->g_138 p_1119->g_139 p_1119->g_114 p_1119->g_46 p_1119->g_96 p_1119->g_213
 * writes: p_1119->g_48 p_1119->g_182 p_1119->g_243 p_1119->g_117 p_1119->g_114 p_1119->g_46
 */
uint8_t  func_55(int32_t * p_56, uint8_t  p_57, int8_t  p_58, uint32_t  p_59, struct S0 * p_1119)
{ /* block id: 127 */
    uint64_t **l_272[6][7] = {{(void*)0,&p_1119->g_209[0],&p_1119->g_209[4],&p_1119->g_209[0],(void*)0,(void*)0,&p_1119->g_209[0]},{(void*)0,&p_1119->g_209[0],&p_1119->g_209[4],&p_1119->g_209[0],(void*)0,(void*)0,&p_1119->g_209[0]},{(void*)0,&p_1119->g_209[0],&p_1119->g_209[4],&p_1119->g_209[0],(void*)0,(void*)0,&p_1119->g_209[0]},{(void*)0,&p_1119->g_209[0],&p_1119->g_209[4],&p_1119->g_209[0],(void*)0,(void*)0,&p_1119->g_209[0]},{(void*)0,&p_1119->g_209[0],&p_1119->g_209[4],&p_1119->g_209[0],(void*)0,(void*)0,&p_1119->g_209[0]},{(void*)0,&p_1119->g_209[0],&p_1119->g_209[4],&p_1119->g_209[0],(void*)0,(void*)0,&p_1119->g_209[0]}};
    uint64_t ***l_273 = &l_272[3][5];
    int32_t l_274 = (-2L);
    int32_t **l_275 = &p_1119->g_182;
    int8_t *l_282[10];
    uint8_t l_289 = 255UL;
    int32_t *l_290 = (void*)0;
    int32_t *l_291 = &p_1119->g_117;
    uint32_t l_292 = 4294967295UL;
    uint64_t l_293 = 0x96369D72CE77DFE8L;
    int i, j;
    for (i = 0; i < 10; i++)
        l_282[i] = (void*)0;
    (*p_1119->g_182) = ((((*l_273) = l_272[0][5]) == &p_1119->g_209[1]) || (l_274 = 0x4BC5E4B8L));
    (*l_275) = p_56;
    (*p_1119->g_139) = (safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((p_1119->g_243.x = 0L), (safe_add_func_int8_t_s_s((((((VECTOR(uint32_t, 4))((!p_1119->g_39), ((p_57 ^ ((safe_lshift_func_uint16_t_u_u((((*l_273) = (*l_273)) == &p_1119->g_209[2]), ((**p_1119->g_138) || (safe_add_func_uint32_t_u_u(0xEB1FE54FL, ((((*l_291) = ((l_289 , 0xE16EF41DL) , 0x4A60A501L)) | p_57) | l_292)))))) == l_293)) && p_59), 1UL, 1UL)).z == GROUP_DIVERGE(1, 1)) & (-10L)) & p_1119->g_96[0][0]), 0xDDL)))) | p_58), l_292)), p_1119->g_213));
    return p_59;
}


/* ------------------------------------------ */
/* 
 * reads : p_1119->g_39 p_1119->g_119 p_1119->g_123 p_1119->g_48 p_1119->g_138 p_1119->g_192 p_1119->g_180 p_1119->g_117 p_1119->g_96 p_1119->g_208 p_1119->g_comm_values p_1119->g_181 p_1119->g_182 p_1119->g_217 p_1119->g_139
 * writes: p_1119->g_39 p_1119->g_119 p_1119->g_48 p_1119->g_123 p_1119->g_92 p_1119->g_139 p_1119->g_182 p_1119->g_208 p_1119->g_46
 */
int32_t * func_60(uint64_t  p_61, uint64_t  p_62, int32_t * p_63, int32_t * p_64, struct S0 * p_1119)
{ /* block id: 20 */
    VECTOR(int32_t, 8) l_103 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
    int32_t l_111 = 0x06A380BAL;
    int8_t l_112 = 1L;
    VECTOR(int32_t, 4) l_170 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x341805AEL), 0x341805AEL);
    uint64_t **l_183[3];
    int32_t *l_218 = (void*)0;
    uint16_t l_245 = 0x9C15L;
    uint8_t l_259 = 252UL;
    uint32_t l_271 = 0x9E5505F3L;
    int i;
    for (i = 0; i < 3; i++)
        l_183[i] = (void*)0;
    for (p_1119->g_39 = 0; (p_1119->g_39 >= (-5)); p_1119->g_39 = safe_sub_func_int16_t_s_s(p_1119->g_39, 6))
    { /* block id: 23 */
        int8_t l_108 = 0x6DL;
        int32_t l_109 = (-1L);
        int32_t l_110 = (-9L);
        int32_t l_113 = 0L;
        int32_t l_115 = (-1L);
        int32_t l_116[3][7] = {{0x41CDF14EL,0x7784C266L,6L,3L,0x7784C266L,3L,6L},{0x41CDF14EL,0x7784C266L,6L,3L,0x7784C266L,3L,6L},{0x41CDF14EL,0x7784C266L,6L,3L,0x7784C266L,3L,6L}};
        int32_t *l_122 = &l_109;
        int i, j;
        if (l_103.s6)
        { /* block id: 24 */
            atomic_add(&p_1119->l_atomic_reduction[0], 0x4D87CD7CL + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1119->v_collective += p_1119->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        else
        { /* block id: 26 */
            int32_t *l_104 = (void*)0;
            int32_t *l_105 = (void*)0;
            int32_t *l_106 = (void*)0;
            int32_t *l_107[5];
            int i;
            for (i = 0; i < 5; i++)
                l_107[i] = &p_1119->g_48;
            p_1119->g_119[0][0][0]--;
            return p_64;
        }
        p_1119->g_48 = (*p_63);
        ++p_1119->g_123;
        if ((atomic_inc(&p_1119->l_atomic_input[4]) == 8))
        { /* block id: 33 */
            int32_t l_127 = 1L;
            int32_t *l_126[5];
            int32_t *l_128 = &l_127;
            int i;
            for (i = 0; i < 5; i++)
                l_126[i] = &l_127;
            l_128 = l_126[2];
            for (l_127 = 0; (l_127 < 26); l_127 = safe_add_func_int64_t_s_s(l_127, 5))
            { /* block id: 37 */
                int32_t l_131 = 0x468BC58DL;
                l_131 = l_131;
                l_131 = (-6L);
            }
            unsigned int result = 0;
            result += l_127;
            atomic_add(&p_1119->l_special_values[4], result);
        }
        else
        { /* block id: 41 */
            (1 + 1);
        }
    }
    for (p_61 = (-22); (p_61 > 27); p_61 = safe_add_func_uint64_t_u_u(p_61, 8))
    { /* block id: 47 */
        VECTOR(int32_t, 16) l_150 = (VECTOR(int32_t, 16))(0x6EED63D9L, (VECTOR(int32_t, 4))(0x6EED63D9L, (VECTOR(int32_t, 2))(0x6EED63D9L, 0L), 0L), 0L, 0x6EED63D9L, 0L, (VECTOR(int32_t, 2))(0x6EED63D9L, 0L), (VECTOR(int32_t, 2))(0x6EED63D9L, 0L), 0x6EED63D9L, 0L, 0x6EED63D9L, 0L);
        int32_t l_187 = 0L;
        int32_t l_244 = 0x3FF0262FL;
        VECTOR(int32_t, 16) l_262 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x18FD80D0L), 0x18FD80D0L), 0x18FD80D0L, 0L, 0x18FD80D0L, (VECTOR(int32_t, 2))(0L, 0x18FD80D0L), (VECTOR(int32_t, 2))(0L, 0x18FD80D0L), 0L, 0x18FD80D0L, 0L, 0x18FD80D0L);
        int64_t l_264 = (-1L);
        int i;
        for (p_1119->g_48 = (-29); (p_1119->g_48 > 6); ++p_1119->g_48)
        { /* block id: 50 */
            VECTOR(uint8_t, 2) l_140 = (VECTOR(uint8_t, 2))(1UL, 0xCDL);
            VECTOR(uint64_t, 4) l_161 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x3850ECD05A9BBA2AL), 0x3850ECD05A9BBA2AL);
            VECTOR(int64_t, 2) l_167 = (VECTOR(int64_t, 2))(0x54A9B1A085592441L, 0x57A1EBC9326246BDL);
            VECTOR(int32_t, 4) l_171 = (VECTOR(int32_t, 4))(0x72BD4362L, (VECTOR(int32_t, 2))(0x72BD4362L, (-9L)), (-9L));
            int32_t l_179 = (-1L);
            int i;
            for (p_1119->g_92 = 28; (p_1119->g_92 != 42); p_1119->g_92 = safe_add_func_int32_t_s_s(p_1119->g_92, 9))
            { /* block id: 53 */
                VECTOR(uint64_t, 16) l_141 = (VECTOR(uint64_t, 16))(0xA6E9923EC1801899L, (VECTOR(uint64_t, 4))(0xA6E9923EC1801899L, (VECTOR(uint64_t, 2))(0xA6E9923EC1801899L, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 0xA6E9923EC1801899L, 18446744073709551610UL, (VECTOR(uint64_t, 2))(0xA6E9923EC1801899L, 18446744073709551610UL), (VECTOR(uint64_t, 2))(0xA6E9923EC1801899L, 18446744073709551610UL), 0xA6E9923EC1801899L, 18446744073709551610UL, 0xA6E9923EC1801899L, 18446744073709551610UL);
                VECTOR(int64_t, 8) l_148 = (VECTOR(int64_t, 8))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, (-1L)), (-1L)), (-1L), 2L, (-1L));
                VECTOR(int64_t, 8) l_168 = (VECTOR(int64_t, 8))(0x47188FCF759CC73FL, (VECTOR(int64_t, 4))(0x47188FCF759CC73FL, (VECTOR(int64_t, 2))(0x47188FCF759CC73FL, 1L), 1L), 1L, 0x47188FCF759CC73FL, 1L);
                int16_t l_178 = 0x572AL;
                int i;
                (*p_1119->g_138) = &p_1119->g_114;
                (*p_63) = (*p_63);
                (*p_63) = l_112;
            }
            if (l_187)
                break;
            for (l_112 = (-22); (l_112 > (-27)); --l_112)
            { /* block id: 76 */
                uint64_t **l_211 = &p_1119->g_209[2];
                VECTOR(int32_t, 16) l_216 = (VECTOR(int32_t, 16))(0x6D8B2489L, (VECTOR(int32_t, 4))(0x6D8B2489L, (VECTOR(int32_t, 2))(0x6D8B2489L, 0x2CA9D6B8L), 0x2CA9D6B8L), 0x2CA9D6B8L, 0x6D8B2489L, 0x2CA9D6B8L, (VECTOR(int32_t, 2))(0x6D8B2489L, 0x2CA9D6B8L), (VECTOR(int32_t, 2))(0x6D8B2489L, 0x2CA9D6B8L), 0x6D8B2489L, 0x2CA9D6B8L, 0x6D8B2489L, 0x2CA9D6B8L);
                int32_t *l_219 = (void*)0;
                int i;
                for (l_179 = (-17); (l_179 != 11); l_179++)
                { /* block id: 79 */
                    uint16_t l_199 = 0UL;
                    uint64_t ***l_210[1][9] = {{&l_183[0],&l_183[0],&l_183[0],&l_183[0],&l_183[0],&l_183[0],&l_183[0],&l_183[0],&l_183[0]}};
                    int16_t *l_212[4] = {&p_1119->g_213,&p_1119->g_213,&p_1119->g_213,&p_1119->g_213};
                    int32_t l_214[4][6] = {{0x234CEBFDL,0x234CEBFDL,0x234CEBFDL,0x234CEBFDL,0x234CEBFDL,0x234CEBFDL},{0x234CEBFDL,0x234CEBFDL,0x234CEBFDL,0x234CEBFDL,0x234CEBFDL,0x234CEBFDL},{0x234CEBFDL,0x234CEBFDL,0x234CEBFDL,0x234CEBFDL,0x234CEBFDL,0x234CEBFDL},{0x234CEBFDL,0x234CEBFDL,0x234CEBFDL,0x234CEBFDL,0x234CEBFDL,0x234CEBFDL}};
                    int16_t l_215 = 0x3B8CL;
                    int i, j;
                    (*p_1119->g_192) = p_63;
                    (*p_1119->g_217) = func_68(func_68(((safe_add_func_int16_t_s_s(((((((*p_63) = ((((((safe_mul_func_uint16_t_u_u(p_1119->g_180[1], ((((+((safe_lshift_func_uint8_t_u_s(p_1119->g_117, l_199)) >= (-2L))) > (l_214[3][3] = (p_62 , ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 2))(0x3CD9L, (-1L))).yyxxxyyyyyxxxyxx, ((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 4))((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((-10L), (safe_lshift_func_uint16_t_u_s((!((safe_add_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), (safe_lshift_func_uint8_t_u_s((l_171.z = 0x5EL), p_1119->g_96[0][8])))) == ((((p_1119->g_208 = p_1119->g_208) == l_211) && p_1119->g_39) , p_1119->g_96[0][6])), 0x68L)) == 0x24A3DAACL)), p_61)), (-6L), 0x6424L)).wyyxywwwwxyxxyxy)).s0c)).hi != 0L), (-10L), 0x79BBL, 0x421BL)), ((VECTOR(int16_t, 4))(0x6E4DL))))), (int16_t)0L))))).ywxwyzyxxxwyxzxw, (int16_t)l_150.sc, (int16_t)1L)))))).sa))) != l_215) | (-7L)))) >= l_179) ^ 1UL) <= l_199) < p_1119->g_comm_values[p_1119->tid]) != (*p_63))) >= 0x756BE5B3L) , p_62) <= l_187) || l_170.x), l_161.x)) , (*p_1119->g_181)), l_199, p_62, &p_1119->g_48, p_1119), l_170.x, l_216.se, &p_1119->g_48, p_1119);
                    return l_218;
                }
                return l_219;
            }
            for (l_112 = (-6); (l_112 <= (-9)); l_112--)
            { /* block id: 92 */
                VECTOR(uint64_t, 4) l_238 = (VECTOR(uint64_t, 4))(0x83069D1405192C4AL, (VECTOR(uint64_t, 2))(0x83069D1405192C4AL, 0x6731C5A12A184551L), 0x6731C5A12A184551L);
                VECTOR(int32_t, 2) l_251 = (VECTOR(int32_t, 2))(0L, 5L);
                int32_t l_265[9][6] = {{0x02BDF8DBL,1L,(-1L),0x77C6C285L,0L,0x77C6C285L},{0x02BDF8DBL,1L,(-1L),0x77C6C285L,0L,0x77C6C285L},{0x02BDF8DBL,1L,(-1L),0x77C6C285L,0L,0x77C6C285L},{0x02BDF8DBL,1L,(-1L),0x77C6C285L,0L,0x77C6C285L},{0x02BDF8DBL,1L,(-1L),0x77C6C285L,0L,0x77C6C285L},{0x02BDF8DBL,1L,(-1L),0x77C6C285L,0L,0x77C6C285L},{0x02BDF8DBL,1L,(-1L),0x77C6C285L,0L,0x77C6C285L},{0x02BDF8DBL,1L,(-1L),0x77C6C285L,0L,0x77C6C285L},{0x02BDF8DBL,1L,(-1L),0x77C6C285L,0L,0x77C6C285L}};
                int i, j;
                for (p_1119->g_123 = 0; (p_1119->g_123 == 48); ++p_1119->g_123)
                { /* block id: 95 */
                    int32_t **l_236 = &p_1119->g_182;
                    uint32_t *l_237 = &p_1119->g_142;
                    uint16_t *l_247 = (void*)0;
                    uint16_t **l_246 = &l_247;
                    int8_t *l_248 = (void*)0;
                    int8_t *l_249 = (void*)0;
                    int8_t *l_250[5];
                    int32_t l_256 = 4L;
                    int32_t l_257 = (-3L);
                    int32_t l_258 = 0L;
                    int32_t l_263 = (-1L);
                    int i;
                    for (i = 0; i < 5; i++)
                        l_250[i] = (void*)0;
                    (1 + 1);
                }
            }
        }
        return p_64;
    }
    (*p_1119->g_139) = ((*p_63) &= l_271);
    return l_218;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_68(int32_t * p_69, int32_t  p_70, int64_t  p_71, int32_t * p_72, struct S0 * p_1119)
{ /* block id: 18 */
    return p_72;
}


/* ------------------------------------------ */
/* 
 * reads : p_1119->g_48 p_1119->g_92 p_1119->g_93 p_1119->g_96
 * writes: p_1119->g_92 p_1119->g_96
 */
int32_t * func_73(int64_t  p_74, uint32_t  p_75, int64_t  p_76, uint16_t  p_77, struct S0 * p_1119)
{ /* block id: 13 */
    VECTOR(int32_t, 4) l_90 = (VECTOR(int32_t, 4))(0x6652606BL, (VECTOR(int32_t, 2))(0x6652606BL, (-1L)), (-1L));
    uint64_t *l_91 = &p_1119->g_92;
    int32_t *l_100 = &p_1119->g_39;
    int32_t **l_99 = &l_100;
    int i;
    (*l_99) = (((((((((VECTOR(int32_t, 2))(l_90.ww)).lo | ((l_90.z != ((p_76 > (p_1119->g_48 == ((*l_91) |= l_90.z))) , p_77)) == ((VECTOR(int64_t, 4))(p_1119->g_93.s3561)).w)) || ((safe_div_func_uint8_t_u_u((p_1119->g_96[0][6] = 1UL), 255UL)) == 1UL)) < (safe_div_func_int16_t_s_s((l_90.x , l_90.z), l_90.y))) , &p_1119->g_37) != l_99) || p_1119->g_96[0][6]) , (*l_99));
    return &p_1119->g_39;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[46];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 46; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[46];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 46; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[252];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 252; i++)
            l_comm_values[i] = 1;
    struct S0 c_1120;
    struct S0* p_1119 = &c_1120;
    struct S0 c_1121 = {
        (void*)0, // p_1119->g_37
        (-3L), // p_1119->g_39
        4L, // p_1119->g_46
        8L, // p_1119->g_47
        3L, // p_1119->g_48
        0x9E84EBF8C32619C8L, // p_1119->g_49
        4294967295UL, // p_1119->g_52
        18446744073709551615UL, // p_1119->g_92
        (VECTOR(int64_t, 8))(0x400D43E6B0C5DEC4L, (VECTOR(int64_t, 4))(0x400D43E6B0C5DEC4L, (VECTOR(int64_t, 2))(0x400D43E6B0C5DEC4L, 0L), 0L), 0L, 0x400D43E6B0C5DEC4L, 0L), // p_1119->g_93
        {{0xAE94942BL,0xAE94942BL,0xAE94942BL,0xAE94942BL,0xAE94942BL,0xAE94942BL,0xAE94942BL,0xAE94942BL,0xAE94942BL}}, // p_1119->g_96
        0x37DDE48DL, // p_1119->g_114
        (-1L), // p_1119->g_117
        8L, // p_1119->g_118
        {{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}}}, // p_1119->g_119
        18446744073709551612UL, // p_1119->g_123
        &p_1119->g_46, // p_1119->g_139
        &p_1119->g_139, // p_1119->g_138
        1UL, // p_1119->g_142
        0xFC2DL, // p_1119->g_177
        {0xFCCDL,0xFCCDL}, // p_1119->g_180
        &p_1119->g_48, // p_1119->g_182
        &p_1119->g_182, // p_1119->g_181
        &p_1119->g_182, // p_1119->g_192
        {&p_1119->g_123,&p_1119->g_123,&p_1119->g_123,&p_1119->g_123,&p_1119->g_123,&p_1119->g_123,&p_1119->g_123,&p_1119->g_123,&p_1119->g_123}, // p_1119->g_209
        &p_1119->g_209[1], // p_1119->g_208
        0x4212L, // p_1119->g_213
        &p_1119->g_182, // p_1119->g_217
        (VECTOR(int8_t, 4))(0x6BL, (VECTOR(int8_t, 2))(0x6BL, 0x29L), 0x29L), // p_1119->g_243
        0UL, // p_1119->g_266
        0x4A55C874L, // p_1119->g_301
        255UL, // p_1119->g_313
        0x2361F727BE67DA5BL, // p_1119->g_315
        254UL, // p_1119->g_317
        (VECTOR(int16_t, 2))(0L, 0L), // p_1119->g_325
        (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x104CL), 0x104CL), 0x104CL, 6L, 0x104CL), // p_1119->g_326
        0xD1481EF6L, // p_1119->g_363
        (VECTOR(uint64_t, 16))(0x23DD3CE2323101D5L, (VECTOR(uint64_t, 4))(0x23DD3CE2323101D5L, (VECTOR(uint64_t, 2))(0x23DD3CE2323101D5L, 0UL), 0UL), 0UL, 0x23DD3CE2323101D5L, 0UL, (VECTOR(uint64_t, 2))(0x23DD3CE2323101D5L, 0UL), (VECTOR(uint64_t, 2))(0x23DD3CE2323101D5L, 0UL), 0x23DD3CE2323101D5L, 0UL, 0x23DD3CE2323101D5L, 0UL), // p_1119->g_381
        (VECTOR(int64_t, 16))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 1L), 1L), 1L, (-9L), 1L, (VECTOR(int64_t, 2))((-9L), 1L), (VECTOR(int64_t, 2))((-9L), 1L), (-9L), 1L, (-9L), 1L), // p_1119->g_399
        (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 0x0303E7ECED4DCE4CL), 0x0303E7ECED4DCE4CL), // p_1119->g_402
        (VECTOR(int64_t, 16))(0x203E4108CEFA8ECDL, (VECTOR(int64_t, 4))(0x203E4108CEFA8ECDL, (VECTOR(int64_t, 2))(0x203E4108CEFA8ECDL, (-6L)), (-6L)), (-6L), 0x203E4108CEFA8ECDL, (-6L), (VECTOR(int64_t, 2))(0x203E4108CEFA8ECDL, (-6L)), (VECTOR(int64_t, 2))(0x203E4108CEFA8ECDL, (-6L)), 0x203E4108CEFA8ECDL, (-6L), 0x203E4108CEFA8ECDL, (-6L)), // p_1119->g_403
        (void*)0, // p_1119->g_406
        0L, // p_1119->g_411
        0x3DF7DD08CF52F6F3L, // p_1119->g_414
        (-1L), // p_1119->g_421
        {&p_1119->g_421,&p_1119->g_421}, // p_1119->g_420
        &p_1119->g_420[0], // p_1119->g_419
        (VECTOR(uint8_t, 8))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0xF5L), 0xF5L), 0xF5L, 253UL, 0xF5L), // p_1119->g_457
        (VECTOR(uint8_t, 8))(0x58L, (VECTOR(uint8_t, 4))(0x58L, (VECTOR(uint8_t, 2))(0x58L, 0xEEL), 0xEEL), 0xEEL, 0x58L, 0xEEL), // p_1119->g_474
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x18L), 0x18L), // p_1119->g_475
        5L, // p_1119->g_477
        (void*)0, // p_1119->g_490
        &p_1119->g_490, // p_1119->g_489
        &p_1119->g_182, // p_1119->g_497
        (VECTOR(int8_t, 16))(6L, (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, 0x3CL), 0x3CL), 0x3CL, 6L, 0x3CL, (VECTOR(int8_t, 2))(6L, 0x3CL), (VECTOR(int8_t, 2))(6L, 0x3CL), 6L, 0x3CL, 6L, 0x3CL), // p_1119->g_516
        (VECTOR(uint16_t, 4))(0x35F8L, (VECTOR(uint16_t, 2))(0x35F8L, 4UL), 4UL), // p_1119->g_524
        (VECTOR(uint8_t, 16))(0xA3L, (VECTOR(uint8_t, 4))(0xA3L, (VECTOR(uint8_t, 2))(0xA3L, 0xF9L), 0xF9L), 0xF9L, 0xA3L, 0xF9L, (VECTOR(uint8_t, 2))(0xA3L, 0xF9L), (VECTOR(uint8_t, 2))(0xA3L, 0xF9L), 0xA3L, 0xF9L, 0xA3L, 0xF9L), // p_1119->g_538
        0xD217L, // p_1119->g_563
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x7E8DDAF3L), 0x7E8DDAF3L), 0x7E8DDAF3L, 0UL, 0x7E8DDAF3L), // p_1119->g_567
        (VECTOR(int64_t, 8))(0x01B7C181CA3D15B8L, (VECTOR(int64_t, 4))(0x01B7C181CA3D15B8L, (VECTOR(int64_t, 2))(0x01B7C181CA3D15B8L, 0x636E1EA6563A2605L), 0x636E1EA6563A2605L), 0x636E1EA6563A2605L, 0x01B7C181CA3D15B8L, 0x636E1EA6563A2605L), // p_1119->g_588
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x3A8FD3070A81D2BAL), 0x3A8FD3070A81D2BAL), 0x3A8FD3070A81D2BAL, 0L, 0x3A8FD3070A81D2BAL), // p_1119->g_592
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x59AE8C5F11923BC6L), 0x59AE8C5F11923BC6L), // p_1119->g_620
        (VECTOR(uint8_t, 8))(0x3DL, (VECTOR(uint8_t, 4))(0x3DL, (VECTOR(uint8_t, 2))(0x3DL, 0UL), 0UL), 0UL, 0x3DL, 0UL), // p_1119->g_627
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1119->g_837
        0, // p_1119->v_collective
        sequence_input[get_global_id(0)], // p_1119->global_0_offset
        sequence_input[get_global_id(1)], // p_1119->global_1_offset
        sequence_input[get_global_id(2)], // p_1119->global_2_offset
        sequence_input[get_local_id(0)], // p_1119->local_0_offset
        sequence_input[get_local_id(1)], // p_1119->local_1_offset
        sequence_input[get_local_id(2)], // p_1119->local_2_offset
        sequence_input[get_group_id(0)], // p_1119->group_0_offset
        sequence_input[get_group_id(1)], // p_1119->group_1_offset
        sequence_input[get_group_id(2)], // p_1119->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 252)), permutations[0][get_linear_local_id()])), // p_1119->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1120 = c_1121;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1119);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1119->g_39, "p_1119->g_39", print_hash_value);
    transparent_crc(p_1119->g_46, "p_1119->g_46", print_hash_value);
    transparent_crc(p_1119->g_47, "p_1119->g_47", print_hash_value);
    transparent_crc(p_1119->g_48, "p_1119->g_48", print_hash_value);
    transparent_crc(p_1119->g_49, "p_1119->g_49", print_hash_value);
    transparent_crc(p_1119->g_52, "p_1119->g_52", print_hash_value);
    transparent_crc(p_1119->g_92, "p_1119->g_92", print_hash_value);
    transparent_crc(p_1119->g_93.s0, "p_1119->g_93.s0", print_hash_value);
    transparent_crc(p_1119->g_93.s1, "p_1119->g_93.s1", print_hash_value);
    transparent_crc(p_1119->g_93.s2, "p_1119->g_93.s2", print_hash_value);
    transparent_crc(p_1119->g_93.s3, "p_1119->g_93.s3", print_hash_value);
    transparent_crc(p_1119->g_93.s4, "p_1119->g_93.s4", print_hash_value);
    transparent_crc(p_1119->g_93.s5, "p_1119->g_93.s5", print_hash_value);
    transparent_crc(p_1119->g_93.s6, "p_1119->g_93.s6", print_hash_value);
    transparent_crc(p_1119->g_93.s7, "p_1119->g_93.s7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1119->g_96[i][j], "p_1119->g_96[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1119->g_114, "p_1119->g_114", print_hash_value);
    transparent_crc(p_1119->g_117, "p_1119->g_117", print_hash_value);
    transparent_crc(p_1119->g_118, "p_1119->g_118", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1119->g_119[i][j][k], "p_1119->g_119[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1119->g_123, "p_1119->g_123", print_hash_value);
    transparent_crc(p_1119->g_142, "p_1119->g_142", print_hash_value);
    transparent_crc(p_1119->g_177, "p_1119->g_177", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1119->g_180[i], "p_1119->g_180[i]", print_hash_value);

    }
    transparent_crc(p_1119->g_213, "p_1119->g_213", print_hash_value);
    transparent_crc(p_1119->g_243.x, "p_1119->g_243.x", print_hash_value);
    transparent_crc(p_1119->g_243.y, "p_1119->g_243.y", print_hash_value);
    transparent_crc(p_1119->g_243.z, "p_1119->g_243.z", print_hash_value);
    transparent_crc(p_1119->g_243.w, "p_1119->g_243.w", print_hash_value);
    transparent_crc(p_1119->g_266, "p_1119->g_266", print_hash_value);
    transparent_crc(p_1119->g_301, "p_1119->g_301", print_hash_value);
    transparent_crc(p_1119->g_313, "p_1119->g_313", print_hash_value);
    transparent_crc(p_1119->g_315, "p_1119->g_315", print_hash_value);
    transparent_crc(p_1119->g_317, "p_1119->g_317", print_hash_value);
    transparent_crc(p_1119->g_325.x, "p_1119->g_325.x", print_hash_value);
    transparent_crc(p_1119->g_325.y, "p_1119->g_325.y", print_hash_value);
    transparent_crc(p_1119->g_326.s0, "p_1119->g_326.s0", print_hash_value);
    transparent_crc(p_1119->g_326.s1, "p_1119->g_326.s1", print_hash_value);
    transparent_crc(p_1119->g_326.s2, "p_1119->g_326.s2", print_hash_value);
    transparent_crc(p_1119->g_326.s3, "p_1119->g_326.s3", print_hash_value);
    transparent_crc(p_1119->g_326.s4, "p_1119->g_326.s4", print_hash_value);
    transparent_crc(p_1119->g_326.s5, "p_1119->g_326.s5", print_hash_value);
    transparent_crc(p_1119->g_326.s6, "p_1119->g_326.s6", print_hash_value);
    transparent_crc(p_1119->g_326.s7, "p_1119->g_326.s7", print_hash_value);
    transparent_crc(p_1119->g_363, "p_1119->g_363", print_hash_value);
    transparent_crc(p_1119->g_381.s0, "p_1119->g_381.s0", print_hash_value);
    transparent_crc(p_1119->g_381.s1, "p_1119->g_381.s1", print_hash_value);
    transparent_crc(p_1119->g_381.s2, "p_1119->g_381.s2", print_hash_value);
    transparent_crc(p_1119->g_381.s3, "p_1119->g_381.s3", print_hash_value);
    transparent_crc(p_1119->g_381.s4, "p_1119->g_381.s4", print_hash_value);
    transparent_crc(p_1119->g_381.s5, "p_1119->g_381.s5", print_hash_value);
    transparent_crc(p_1119->g_381.s6, "p_1119->g_381.s6", print_hash_value);
    transparent_crc(p_1119->g_381.s7, "p_1119->g_381.s7", print_hash_value);
    transparent_crc(p_1119->g_381.s8, "p_1119->g_381.s8", print_hash_value);
    transparent_crc(p_1119->g_381.s9, "p_1119->g_381.s9", print_hash_value);
    transparent_crc(p_1119->g_381.sa, "p_1119->g_381.sa", print_hash_value);
    transparent_crc(p_1119->g_381.sb, "p_1119->g_381.sb", print_hash_value);
    transparent_crc(p_1119->g_381.sc, "p_1119->g_381.sc", print_hash_value);
    transparent_crc(p_1119->g_381.sd, "p_1119->g_381.sd", print_hash_value);
    transparent_crc(p_1119->g_381.se, "p_1119->g_381.se", print_hash_value);
    transparent_crc(p_1119->g_381.sf, "p_1119->g_381.sf", print_hash_value);
    transparent_crc(p_1119->g_399.s0, "p_1119->g_399.s0", print_hash_value);
    transparent_crc(p_1119->g_399.s1, "p_1119->g_399.s1", print_hash_value);
    transparent_crc(p_1119->g_399.s2, "p_1119->g_399.s2", print_hash_value);
    transparent_crc(p_1119->g_399.s3, "p_1119->g_399.s3", print_hash_value);
    transparent_crc(p_1119->g_399.s4, "p_1119->g_399.s4", print_hash_value);
    transparent_crc(p_1119->g_399.s5, "p_1119->g_399.s5", print_hash_value);
    transparent_crc(p_1119->g_399.s6, "p_1119->g_399.s6", print_hash_value);
    transparent_crc(p_1119->g_399.s7, "p_1119->g_399.s7", print_hash_value);
    transparent_crc(p_1119->g_399.s8, "p_1119->g_399.s8", print_hash_value);
    transparent_crc(p_1119->g_399.s9, "p_1119->g_399.s9", print_hash_value);
    transparent_crc(p_1119->g_399.sa, "p_1119->g_399.sa", print_hash_value);
    transparent_crc(p_1119->g_399.sb, "p_1119->g_399.sb", print_hash_value);
    transparent_crc(p_1119->g_399.sc, "p_1119->g_399.sc", print_hash_value);
    transparent_crc(p_1119->g_399.sd, "p_1119->g_399.sd", print_hash_value);
    transparent_crc(p_1119->g_399.se, "p_1119->g_399.se", print_hash_value);
    transparent_crc(p_1119->g_399.sf, "p_1119->g_399.sf", print_hash_value);
    transparent_crc(p_1119->g_402.x, "p_1119->g_402.x", print_hash_value);
    transparent_crc(p_1119->g_402.y, "p_1119->g_402.y", print_hash_value);
    transparent_crc(p_1119->g_402.z, "p_1119->g_402.z", print_hash_value);
    transparent_crc(p_1119->g_402.w, "p_1119->g_402.w", print_hash_value);
    transparent_crc(p_1119->g_403.s0, "p_1119->g_403.s0", print_hash_value);
    transparent_crc(p_1119->g_403.s1, "p_1119->g_403.s1", print_hash_value);
    transparent_crc(p_1119->g_403.s2, "p_1119->g_403.s2", print_hash_value);
    transparent_crc(p_1119->g_403.s3, "p_1119->g_403.s3", print_hash_value);
    transparent_crc(p_1119->g_403.s4, "p_1119->g_403.s4", print_hash_value);
    transparent_crc(p_1119->g_403.s5, "p_1119->g_403.s5", print_hash_value);
    transparent_crc(p_1119->g_403.s6, "p_1119->g_403.s6", print_hash_value);
    transparent_crc(p_1119->g_403.s7, "p_1119->g_403.s7", print_hash_value);
    transparent_crc(p_1119->g_403.s8, "p_1119->g_403.s8", print_hash_value);
    transparent_crc(p_1119->g_403.s9, "p_1119->g_403.s9", print_hash_value);
    transparent_crc(p_1119->g_403.sa, "p_1119->g_403.sa", print_hash_value);
    transparent_crc(p_1119->g_403.sb, "p_1119->g_403.sb", print_hash_value);
    transparent_crc(p_1119->g_403.sc, "p_1119->g_403.sc", print_hash_value);
    transparent_crc(p_1119->g_403.sd, "p_1119->g_403.sd", print_hash_value);
    transparent_crc(p_1119->g_403.se, "p_1119->g_403.se", print_hash_value);
    transparent_crc(p_1119->g_403.sf, "p_1119->g_403.sf", print_hash_value);
    transparent_crc(p_1119->g_411, "p_1119->g_411", print_hash_value);
    transparent_crc(p_1119->g_414, "p_1119->g_414", print_hash_value);
    transparent_crc(p_1119->g_421, "p_1119->g_421", print_hash_value);
    transparent_crc(p_1119->g_457.s0, "p_1119->g_457.s0", print_hash_value);
    transparent_crc(p_1119->g_457.s1, "p_1119->g_457.s1", print_hash_value);
    transparent_crc(p_1119->g_457.s2, "p_1119->g_457.s2", print_hash_value);
    transparent_crc(p_1119->g_457.s3, "p_1119->g_457.s3", print_hash_value);
    transparent_crc(p_1119->g_457.s4, "p_1119->g_457.s4", print_hash_value);
    transparent_crc(p_1119->g_457.s5, "p_1119->g_457.s5", print_hash_value);
    transparent_crc(p_1119->g_457.s6, "p_1119->g_457.s6", print_hash_value);
    transparent_crc(p_1119->g_457.s7, "p_1119->g_457.s7", print_hash_value);
    transparent_crc(p_1119->g_474.s0, "p_1119->g_474.s0", print_hash_value);
    transparent_crc(p_1119->g_474.s1, "p_1119->g_474.s1", print_hash_value);
    transparent_crc(p_1119->g_474.s2, "p_1119->g_474.s2", print_hash_value);
    transparent_crc(p_1119->g_474.s3, "p_1119->g_474.s3", print_hash_value);
    transparent_crc(p_1119->g_474.s4, "p_1119->g_474.s4", print_hash_value);
    transparent_crc(p_1119->g_474.s5, "p_1119->g_474.s5", print_hash_value);
    transparent_crc(p_1119->g_474.s6, "p_1119->g_474.s6", print_hash_value);
    transparent_crc(p_1119->g_474.s7, "p_1119->g_474.s7", print_hash_value);
    transparent_crc(p_1119->g_475.x, "p_1119->g_475.x", print_hash_value);
    transparent_crc(p_1119->g_475.y, "p_1119->g_475.y", print_hash_value);
    transparent_crc(p_1119->g_475.z, "p_1119->g_475.z", print_hash_value);
    transparent_crc(p_1119->g_475.w, "p_1119->g_475.w", print_hash_value);
    transparent_crc(p_1119->g_477, "p_1119->g_477", print_hash_value);
    transparent_crc(p_1119->g_516.s0, "p_1119->g_516.s0", print_hash_value);
    transparent_crc(p_1119->g_516.s1, "p_1119->g_516.s1", print_hash_value);
    transparent_crc(p_1119->g_516.s2, "p_1119->g_516.s2", print_hash_value);
    transparent_crc(p_1119->g_516.s3, "p_1119->g_516.s3", print_hash_value);
    transparent_crc(p_1119->g_516.s4, "p_1119->g_516.s4", print_hash_value);
    transparent_crc(p_1119->g_516.s5, "p_1119->g_516.s5", print_hash_value);
    transparent_crc(p_1119->g_516.s6, "p_1119->g_516.s6", print_hash_value);
    transparent_crc(p_1119->g_516.s7, "p_1119->g_516.s7", print_hash_value);
    transparent_crc(p_1119->g_516.s8, "p_1119->g_516.s8", print_hash_value);
    transparent_crc(p_1119->g_516.s9, "p_1119->g_516.s9", print_hash_value);
    transparent_crc(p_1119->g_516.sa, "p_1119->g_516.sa", print_hash_value);
    transparent_crc(p_1119->g_516.sb, "p_1119->g_516.sb", print_hash_value);
    transparent_crc(p_1119->g_516.sc, "p_1119->g_516.sc", print_hash_value);
    transparent_crc(p_1119->g_516.sd, "p_1119->g_516.sd", print_hash_value);
    transparent_crc(p_1119->g_516.se, "p_1119->g_516.se", print_hash_value);
    transparent_crc(p_1119->g_516.sf, "p_1119->g_516.sf", print_hash_value);
    transparent_crc(p_1119->g_524.x, "p_1119->g_524.x", print_hash_value);
    transparent_crc(p_1119->g_524.y, "p_1119->g_524.y", print_hash_value);
    transparent_crc(p_1119->g_524.z, "p_1119->g_524.z", print_hash_value);
    transparent_crc(p_1119->g_524.w, "p_1119->g_524.w", print_hash_value);
    transparent_crc(p_1119->g_538.s0, "p_1119->g_538.s0", print_hash_value);
    transparent_crc(p_1119->g_538.s1, "p_1119->g_538.s1", print_hash_value);
    transparent_crc(p_1119->g_538.s2, "p_1119->g_538.s2", print_hash_value);
    transparent_crc(p_1119->g_538.s3, "p_1119->g_538.s3", print_hash_value);
    transparent_crc(p_1119->g_538.s4, "p_1119->g_538.s4", print_hash_value);
    transparent_crc(p_1119->g_538.s5, "p_1119->g_538.s5", print_hash_value);
    transparent_crc(p_1119->g_538.s6, "p_1119->g_538.s6", print_hash_value);
    transparent_crc(p_1119->g_538.s7, "p_1119->g_538.s7", print_hash_value);
    transparent_crc(p_1119->g_538.s8, "p_1119->g_538.s8", print_hash_value);
    transparent_crc(p_1119->g_538.s9, "p_1119->g_538.s9", print_hash_value);
    transparent_crc(p_1119->g_538.sa, "p_1119->g_538.sa", print_hash_value);
    transparent_crc(p_1119->g_538.sb, "p_1119->g_538.sb", print_hash_value);
    transparent_crc(p_1119->g_538.sc, "p_1119->g_538.sc", print_hash_value);
    transparent_crc(p_1119->g_538.sd, "p_1119->g_538.sd", print_hash_value);
    transparent_crc(p_1119->g_538.se, "p_1119->g_538.se", print_hash_value);
    transparent_crc(p_1119->g_538.sf, "p_1119->g_538.sf", print_hash_value);
    transparent_crc(p_1119->g_563, "p_1119->g_563", print_hash_value);
    transparent_crc(p_1119->g_567.s0, "p_1119->g_567.s0", print_hash_value);
    transparent_crc(p_1119->g_567.s1, "p_1119->g_567.s1", print_hash_value);
    transparent_crc(p_1119->g_567.s2, "p_1119->g_567.s2", print_hash_value);
    transparent_crc(p_1119->g_567.s3, "p_1119->g_567.s3", print_hash_value);
    transparent_crc(p_1119->g_567.s4, "p_1119->g_567.s4", print_hash_value);
    transparent_crc(p_1119->g_567.s5, "p_1119->g_567.s5", print_hash_value);
    transparent_crc(p_1119->g_567.s6, "p_1119->g_567.s6", print_hash_value);
    transparent_crc(p_1119->g_567.s7, "p_1119->g_567.s7", print_hash_value);
    transparent_crc(p_1119->g_588.s0, "p_1119->g_588.s0", print_hash_value);
    transparent_crc(p_1119->g_588.s1, "p_1119->g_588.s1", print_hash_value);
    transparent_crc(p_1119->g_588.s2, "p_1119->g_588.s2", print_hash_value);
    transparent_crc(p_1119->g_588.s3, "p_1119->g_588.s3", print_hash_value);
    transparent_crc(p_1119->g_588.s4, "p_1119->g_588.s4", print_hash_value);
    transparent_crc(p_1119->g_588.s5, "p_1119->g_588.s5", print_hash_value);
    transparent_crc(p_1119->g_588.s6, "p_1119->g_588.s6", print_hash_value);
    transparent_crc(p_1119->g_588.s7, "p_1119->g_588.s7", print_hash_value);
    transparent_crc(p_1119->g_592.s0, "p_1119->g_592.s0", print_hash_value);
    transparent_crc(p_1119->g_592.s1, "p_1119->g_592.s1", print_hash_value);
    transparent_crc(p_1119->g_592.s2, "p_1119->g_592.s2", print_hash_value);
    transparent_crc(p_1119->g_592.s3, "p_1119->g_592.s3", print_hash_value);
    transparent_crc(p_1119->g_592.s4, "p_1119->g_592.s4", print_hash_value);
    transparent_crc(p_1119->g_592.s5, "p_1119->g_592.s5", print_hash_value);
    transparent_crc(p_1119->g_592.s6, "p_1119->g_592.s6", print_hash_value);
    transparent_crc(p_1119->g_592.s7, "p_1119->g_592.s7", print_hash_value);
    transparent_crc(p_1119->g_620.x, "p_1119->g_620.x", print_hash_value);
    transparent_crc(p_1119->g_620.y, "p_1119->g_620.y", print_hash_value);
    transparent_crc(p_1119->g_620.z, "p_1119->g_620.z", print_hash_value);
    transparent_crc(p_1119->g_620.w, "p_1119->g_620.w", print_hash_value);
    transparent_crc(p_1119->g_627.s0, "p_1119->g_627.s0", print_hash_value);
    transparent_crc(p_1119->g_627.s1, "p_1119->g_627.s1", print_hash_value);
    transparent_crc(p_1119->g_627.s2, "p_1119->g_627.s2", print_hash_value);
    transparent_crc(p_1119->g_627.s3, "p_1119->g_627.s3", print_hash_value);
    transparent_crc(p_1119->g_627.s4, "p_1119->g_627.s4", print_hash_value);
    transparent_crc(p_1119->g_627.s5, "p_1119->g_627.s5", print_hash_value);
    transparent_crc(p_1119->g_627.s6, "p_1119->g_627.s6", print_hash_value);
    transparent_crc(p_1119->g_627.s7, "p_1119->g_627.s7", print_hash_value);
    transparent_crc(p_1119->v_collective, "p_1119->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 46; i++)
            transparent_crc(p_1119->g_special_values[i + 46 * get_linear_group_id()], "p_1119->g_special_values[i + 46 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 46; i++)
            transparent_crc(p_1119->l_special_values[i], "p_1119->l_special_values[i]", print_hash_value);
    transparent_crc(p_1119->l_comm_values[get_linear_local_id()], "p_1119->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1119->g_comm_values[get_linear_group_id() * 252 + get_linear_local_id()], "p_1119->g_comm_values[get_linear_group_id() * 252 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
