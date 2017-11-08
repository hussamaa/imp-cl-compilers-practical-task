// --atomics 54 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 60,42,3 -l 4,14,3
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

__constant uint32_t permutations[10][168] = {
{89,81,139,121,122,123,153,129,13,35,58,146,51,32,37,73,22,27,16,2,57,29,12,130,112,41,147,97,120,46,138,117,78,3,21,83,162,23,70,39,75,118,59,127,110,128,95,42,100,149,74,0,11,124,33,66,38,140,8,15,164,167,99,104,67,90,31,119,87,28,126,144,80,25,163,84,108,145,154,165,115,92,136,94,6,151,88,157,18,161,34,61,109,62,7,69,134,5,71,45,30,43,52,77,63,143,102,150,85,9,141,113,48,79,1,152,142,132,131,50,125,17,56,68,103,24,44,98,116,40,19,93,4,111,49,65,10,159,72,20,91,64,148,105,133,158,54,160,55,107,82,86,156,137,47,26,14,96,135,76,166,106,101,155,60,114,53,36}, // permutation 0
{26,25,156,118,133,147,47,8,84,145,11,144,166,17,22,27,154,54,0,68,117,50,38,28,124,134,139,86,77,161,80,90,46,29,95,75,103,39,158,32,146,37,79,94,43,138,132,48,157,136,65,128,148,66,111,114,62,99,149,15,100,89,151,74,126,73,64,5,12,123,1,113,81,140,14,55,40,20,3,102,159,104,58,51,155,115,108,88,135,16,110,142,97,105,21,24,35,60,67,107,121,18,6,163,116,71,119,130,70,106,31,152,109,167,153,150,61,120,76,162,7,78,87,83,44,42,4,57,129,93,34,9,112,164,13,52,69,160,72,19,82,49,23,33,91,127,10,45,137,36,41,165,63,92,98,125,122,85,141,53,131,56,101,143,59,2,30,96}, // permutation 1
{13,4,132,69,149,98,77,87,26,142,25,23,17,2,40,56,59,137,1,43,101,12,93,72,31,138,6,9,35,128,141,60,127,37,108,104,32,55,135,122,97,74,163,19,36,34,64,21,79,7,115,123,5,8,39,20,130,156,18,154,83,89,153,47,42,95,62,15,124,144,166,85,50,45,33,146,103,152,76,49,121,78,71,129,90,54,29,165,68,88,46,158,52,63,99,91,22,133,120,51,167,86,162,136,113,41,53,3,118,110,0,151,100,114,111,126,150,131,27,116,139,81,140,65,157,24,30,70,109,80,155,105,148,102,106,57,10,67,117,44,38,112,84,96,94,161,147,61,134,82,92,125,48,16,119,159,164,28,14,160,107,73,66,58,145,11,75,143}, // permutation 2
{70,89,5,88,67,155,16,117,110,55,153,139,128,62,12,126,154,123,0,28,33,51,44,20,79,125,54,9,164,134,87,36,159,133,1,76,59,38,31,166,26,32,56,161,46,93,147,84,27,119,120,145,143,148,11,99,115,146,140,3,96,107,116,102,41,10,138,63,52,68,136,135,137,74,43,34,24,105,106,114,14,124,129,162,39,97,4,75,48,15,78,86,22,13,66,21,50,71,121,112,150,144,47,6,58,37,118,132,92,77,158,30,64,19,109,131,2,103,18,122,7,111,165,49,104,40,42,73,94,90,156,151,149,100,53,130,57,160,25,98,163,69,101,152,82,95,17,72,80,157,85,81,65,35,113,108,142,141,167,61,23,8,127,45,29,83,91,60}, // permutation 3
{46,132,10,7,57,14,142,101,100,23,61,2,149,93,162,127,133,97,32,89,48,129,155,112,35,28,12,75,94,115,99,167,117,68,157,98,9,67,146,47,90,65,106,43,102,86,96,39,104,165,8,114,154,118,123,153,17,71,34,76,126,56,113,52,147,30,144,16,0,21,49,70,24,26,136,63,166,50,143,152,156,42,25,84,163,31,60,19,11,41,74,1,44,151,140,36,77,131,95,141,69,55,158,109,79,64,121,4,119,53,81,91,103,135,37,33,72,111,15,108,54,92,161,138,107,122,145,66,29,13,164,130,62,148,5,124,85,125,22,27,78,40,150,87,105,110,3,38,160,139,159,120,83,80,58,59,134,88,73,82,20,116,45,18,51,128,137,6}, // permutation 4
{115,23,67,158,152,73,92,2,69,122,80,27,104,161,5,137,42,95,118,151,35,142,111,19,20,9,74,71,156,66,22,147,4,106,139,114,164,135,155,52,91,90,134,39,117,83,166,157,150,12,56,1,60,18,167,82,131,17,116,25,34,64,128,140,26,103,89,78,136,146,68,51,58,61,141,121,153,32,97,21,3,46,88,110,112,11,107,10,133,129,84,40,29,44,85,93,127,14,43,6,144,31,145,50,100,13,113,24,59,99,57,53,37,143,105,86,28,159,148,160,87,125,75,98,77,79,96,54,102,65,49,70,41,15,130,119,124,48,38,154,7,81,0,108,149,138,109,62,33,45,47,55,123,101,165,30,120,72,16,36,163,8,162,94,63,126,76,132}, // permutation 5
{85,59,92,141,111,10,55,149,36,103,63,152,105,154,3,131,60,7,72,123,61,160,9,56,167,102,140,17,125,138,8,91,148,94,31,70,124,54,12,159,96,76,64,157,24,74,86,37,53,87,81,150,18,143,114,66,71,1,33,153,52,35,122,68,30,42,78,98,113,73,62,97,112,84,40,49,118,46,44,146,75,109,139,93,23,134,65,108,45,89,164,100,58,4,163,83,51,25,80,57,39,69,128,158,34,11,20,13,126,101,129,82,115,77,121,99,132,19,27,136,22,162,120,5,119,41,28,137,127,165,144,117,6,43,104,161,50,2,16,32,116,48,38,29,156,166,110,26,21,151,90,106,0,133,79,130,14,88,145,155,15,147,135,67,47,107,142,95}, // permutation 6
{86,2,31,111,133,74,7,40,91,30,15,102,6,10,164,9,152,159,143,14,96,127,148,67,122,16,57,32,34,153,132,120,85,114,118,69,129,99,37,53,29,3,115,62,45,154,1,12,54,26,5,145,155,66,141,138,89,17,94,93,100,137,42,147,65,80,139,25,128,63,78,21,88,84,117,73,108,142,60,68,64,36,61,109,59,103,71,81,4,90,161,136,135,104,50,166,107,56,22,77,58,72,167,0,95,20,35,70,92,151,162,146,105,24,134,113,149,106,76,51,124,48,98,19,123,33,116,47,23,43,160,83,163,157,13,119,8,140,87,39,46,125,52,97,165,150,144,121,41,11,110,126,28,131,49,38,101,44,112,158,75,55,130,82,27,79,18,156}, // permutation 7
{109,148,114,53,92,131,134,35,106,26,163,101,30,84,127,140,100,133,120,74,1,68,62,104,107,20,158,154,166,60,61,34,44,15,155,32,40,38,13,21,83,150,42,64,71,3,46,145,14,138,94,160,11,130,103,146,135,152,54,37,23,125,110,159,45,102,36,19,9,91,55,4,39,49,29,87,85,57,88,67,108,153,75,82,66,63,22,119,115,105,117,28,8,47,90,65,98,80,167,89,81,142,128,76,132,6,33,27,149,164,31,95,86,73,143,141,69,93,124,137,2,78,162,56,77,116,79,5,18,112,111,16,123,43,139,126,96,12,136,118,122,113,59,52,50,0,41,165,129,48,72,99,25,70,24,161,7,156,97,51,17,157,58,151,121,147,144,10}, // permutation 8
{57,115,73,138,10,130,32,144,127,147,47,51,92,55,88,128,112,85,1,30,157,54,96,132,135,84,8,81,19,20,114,89,105,71,140,24,53,158,160,129,50,65,21,145,159,11,167,34,16,163,56,9,22,35,26,83,37,101,0,111,45,90,110,155,103,109,46,125,134,42,97,13,136,27,146,12,76,104,62,31,43,93,75,108,123,86,15,95,5,25,17,152,77,29,154,100,139,44,67,133,156,137,122,7,18,107,117,162,126,70,142,40,143,33,80,52,164,72,60,150,48,120,153,131,79,66,36,78,113,59,39,166,91,68,124,149,106,102,99,64,141,98,116,74,165,4,151,6,94,118,61,161,148,41,119,38,58,14,121,82,23,2,49,3,28,87,69,63} // permutation 9
};

// Seed: 884349474

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile int32_t g_2[6];
    int32_t g_3;
    volatile int32_t g_6[10];
    int32_t g_7;
    int32_t g_11;
    int32_t g_26;
    uint8_t g_91[10];
    VECTOR(int16_t, 2) g_102;
    VECTOR(int16_t, 16) g_111;
    VECTOR(uint16_t, 8) g_112;
    volatile int16_t *g_128;
    int8_t g_141;
    VECTOR(int32_t, 8) g_145;
    int32_t g_147;
    VECTOR(int8_t, 16) g_167;
    int16_t g_197;
    int32_t g_199;
    uint16_t g_200;
    VECTOR(uint64_t, 4) g_218;
    int8_t *g_223;
    int8_t **g_222;
    int8_t **g_224;
    VECTOR(uint16_t, 2) g_239;
    uint64_t g_245;
    uint32_t g_267;
    VECTOR(uint8_t, 16) g_278;
    VECTOR(uint8_t, 8) g_281;
    uint32_t g_285;
    VECTOR(int32_t, 4) g_294;
    VECTOR(int32_t, 2) g_298;
    volatile int32_t *g_300;
    volatile int32_t **g_299;
    int32_t *g_302;
    int32_t **g_301;
    VECTOR(int32_t, 8) g_313;
    int32_t *g_331;
    VECTOR(int64_t, 16) g_335;
    VECTOR(int64_t, 16) g_337;
    int64_t *g_363;
    VECTOR(uint32_t, 16) g_381;
    VECTOR(int16_t, 4) g_385;
    int32_t *g_441;
    int32_t *g_442[5][5];
    int8_t g_443;
    int32_t * volatile g_486;
    VECTOR(uint16_t, 8) g_505;
    VECTOR(uint16_t, 16) g_506;
    int32_t ** volatile g_571;
    VECTOR(int32_t, 2) g_573;
    VECTOR(uint8_t, 8) g_574;
    volatile VECTOR(uint8_t, 16) g_581;
    VECTOR(uint8_t, 4) g_582;
    VECTOR(uint8_t, 16) g_583;
    volatile VECTOR(int32_t, 4) g_599;
    uint64_t g_618;
    int32_t ** volatile g_624;
    volatile VECTOR(int8_t, 4) g_633;
    volatile VECTOR(uint16_t, 4) g_681;
    VECTOR(int64_t, 2) g_693;
    VECTOR(int16_t, 8) g_782;
    volatile VECTOR(int16_t, 8) g_783;
    VECTOR(int32_t, 16) g_785;
    VECTOR(uint32_t, 4) g_786;
    int32_t ** volatile g_798;
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
int32_t  func_1(struct S0 * p_1105);
uint16_t  func_22(int64_t  p_23, struct S0 * p_1105);
int32_t * func_32(int32_t * p_33, int32_t * p_34, int32_t * p_35, int32_t * p_36, int32_t * p_37, struct S0 * p_1105);
int32_t * func_38(int32_t * p_39, struct S0 * p_1105);
uint32_t  func_43(int32_t * p_44, int32_t * p_45, int32_t  p_46, struct S0 * p_1105);
uint8_t  func_62(uint32_t  p_63, uint32_t  p_64, struct S0 * p_1105);
uint32_t  func_65(int32_t * p_66, uint8_t  p_67, uint32_t  p_68, struct S0 * p_1105);
int32_t * func_69(uint32_t  p_70, struct S0 * p_1105);
int32_t * func_76(int32_t * p_77, struct S0 * p_1105);
int32_t * func_78(int32_t * p_79, int32_t * p_80, uint32_t  p_81, int32_t * p_82, struct S0 * p_1105);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1105->g_3 p_1105->g_102 p_1105->g_11 p_1105->g_633 p_1105->g_573 p_1105->g_335 p_1105->g_197 p_1105->g_147 p_1105->g_363 p_1105->g_331 p_1105->g_7 p_1105->g_239 p_1105->g_441 p_1105->g_301 p_1105->g_302 p_1105->g_281 p_1105->g_218 p_1105->g_381 p_1105->g_582 p_1105->l_comm_values p_1105->g_91 p_1105->g_26 p_1105->g_128 p_1105->g_574 p_1105->g_624 p_1105->g_112 p_1105->g_443 p_1105->g_267 p_1105->g_583 p_1105->g_199 p_1105->g_245 p_1105->g_798 p_1105->g_285 p_1105->g_145 p_1105->g_167 p_1105->g_111 p_1105->g_278 p_1105->g_782 p_1105->g_505 p_1105->g_599 p_1105->g_486 p_1105->g_618
 * writes: p_1105->g_3 p_1105->g_7 p_1105->g_11 p_1105->g_167 p_1105->g_285 p_1105->g_199 p_1105->g_26 p_1105->g_111 p_1105->g_335 p_1105->g_505 p_1105->g_91 p_1105->g_302 p_1105->g_147 p_1105->g_197 p_1105->g_443 p_1105->g_141 p_1105->g_442 p_1105->g_218 p_1105->g_222 p_1105->g_224 p_1105->g_145 p_1105->g_200 p_1105->g_245 p_1105->g_337 p_1105->g_618
 */
int32_t  func_1(struct S0 * p_1105)
{ /* block id: 4 */
    uint32_t l_24 = 0x279A20B2L;
    int32_t l_623 = 1L;
    VECTOR(uint64_t, 16) l_628 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x8F1D9E6B75C3BBD2L), 0x8F1D9E6B75C3BBD2L), 0x8F1D9E6B75C3BBD2L, 0UL, 0x8F1D9E6B75C3BBD2L, (VECTOR(uint64_t, 2))(0UL, 0x8F1D9E6B75C3BBD2L), (VECTOR(uint64_t, 2))(0UL, 0x8F1D9E6B75C3BBD2L), 0UL, 0x8F1D9E6B75C3BBD2L, 0UL, 0x8F1D9E6B75C3BBD2L);
    int64_t *l_662 = (void*)0;
    int64_t *l_663 = (void*)0;
    VECTOR(int64_t, 8) l_682 = (VECTOR(int64_t, 8))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 1L), 1L), 1L, (-9L), 1L);
    int16_t l_728 = 4L;
    int32_t *l_731[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(int8_t, 4) l_734 = (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, 0x5FL), 0x5FL);
    VECTOR(int32_t, 8) l_747 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2F0CBED8L), 0x2F0CBED8L), 0x2F0CBED8L, 0L, 0x2F0CBED8L);
    VECTOR(int32_t, 8) l_752 = (VECTOR(int32_t, 8))(0x2BEAD3DEL, (VECTOR(int32_t, 4))(0x2BEAD3DEL, (VECTOR(int32_t, 2))(0x2BEAD3DEL, (-1L)), (-1L)), (-1L), 0x2BEAD3DEL, (-1L));
    int8_t l_758[10][3][8] = {{{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L}},{{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L}},{{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L}},{{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L}},{{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L}},{{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L}},{{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L}},{{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L}},{{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L}},{{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L},{7L,7L,0x49L,0x3BL,0x24L,0x3BL,0x49L,7L}}};
    int16_t *l_762 = &p_1105->g_197;
    int16_t **l_761 = &l_762;
    VECTOR(uint8_t, 4) l_764 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xA6L), 0xA6L);
    int32_t l_817 = 4L;
    VECTOR(int32_t, 4) l_829 = (VECTOR(int32_t, 4))(0x7659E0C4L, (VECTOR(int32_t, 2))(0x7659E0C4L, (-1L)), (-1L));
    int i, j, k;
    for (p_1105->g_3 = 28; (p_1105->g_3 == 21); --p_1105->g_3)
    { /* block id: 7 */
        uint32_t l_14 = 4294967287UL;
        int32_t *l_478 = &p_1105->g_11;
        int32_t l_617 = 0x31D234B7L;
        uint8_t *l_654 = (void*)0;
        VECTOR(uint32_t, 16) l_659 = (VECTOR(uint32_t, 16))(0xC3F32862L, (VECTOR(uint32_t, 4))(0xC3F32862L, (VECTOR(uint32_t, 2))(0xC3F32862L, 0x5DBF721CL), 0x5DBF721CL), 0x5DBF721CL, 0xC3F32862L, 0x5DBF721CL, (VECTOR(uint32_t, 2))(0xC3F32862L, 0x5DBF721CL), (VECTOR(uint32_t, 2))(0xC3F32862L, 0x5DBF721CL), 0xC3F32862L, 0x5DBF721CL, 0xC3F32862L, 0x5DBF721CL);
        VECTOR(uint64_t, 8) l_664 = (VECTOR(uint64_t, 8))(0xAB9202174D9C1214L, (VECTOR(uint64_t, 4))(0xAB9202174D9C1214L, (VECTOR(uint64_t, 2))(0xAB9202174D9C1214L, 4UL), 4UL), 4UL, 0xAB9202174D9C1214L, 4UL);
        int32_t *l_670 = (void*)0;
        int32_t l_701 = 0x4B6F38B4L;
        uint32_t l_702 = 0UL;
        int32_t l_724 = (-9L);
        uint8_t *l_735 = (void*)0;
        uint8_t *l_736 = &p_1105->g_91[0];
        uint64_t l_757 = 0x0FDF826391ED156AL;
        int32_t ***l_766 = &p_1105->g_301;
        int i;
        for (p_1105->g_7 = (-1); (p_1105->g_7 > 20); ++p_1105->g_7)
        { /* block id: 10 */
            int32_t *l_10 = &p_1105->g_11;
            VECTOR(int8_t, 4) l_631 = (VECTOR(int8_t, 4))(0x2CL, (VECTOR(int8_t, 2))(0x2CL, 0x2FL), 0x2FL);
            int32_t l_653 = 0x13A9E6A3L;
            uint32_t *l_685[3];
            uint8_t l_688 = 0x24L;
            uint64_t *l_694 = (void*)0;
            uint64_t *l_695 = &p_1105->g_618;
            int64_t *l_698 = (void*)0;
            int64_t *l_699[5][1][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            uint16_t *l_700[9][2][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
            VECTOR(uint8_t, 16) l_723 = (VECTOR(uint8_t, 16))(0x86L, (VECTOR(uint8_t, 4))(0x86L, (VECTOR(uint8_t, 2))(0x86L, 249UL), 249UL), 249UL, 0x86L, 249UL, (VECTOR(uint8_t, 2))(0x86L, 249UL), (VECTOR(uint8_t, 2))(0x86L, 249UL), 0x86L, 249UL, 0x86L, 249UL);
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_685[i] = (void*)0;
            if (((*l_10) = 0x47B5C6EFL))
            { /* block id: 12 */
                uint8_t l_17 = 1UL;
                int32_t *l_611 = (void*)0;
                int32_t *l_612 = &p_1105->g_11;
                int32_t l_614[4];
                uint16_t *l_625 = (void*)0;
                VECTOR(int8_t, 2) l_632 = (VECTOR(int8_t, 2))(0x21L, 0x24L);
                uint16_t *l_636 = (void*)0;
                int8_t *l_639[3];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_614[i] = 7L;
                for (i = 0; i < 3; i++)
                    l_639[i] = (void*)0;
                for (p_1105->g_11 = 0; (p_1105->g_11 != (-13)); p_1105->g_11 = safe_sub_func_uint8_t_u_u(p_1105->g_11, 1))
                { /* block id: 15 */
                    int32_t *l_477 = &p_1105->g_7;
                    uint64_t *l_616 = &p_1105->g_245;
                    (1 + 1);
                }
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1105->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 168)), permutations[(safe_mod_func_uint32_t_u_u(((l_625 != &p_1105->g_200) , (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(l_628.s67928430)).s2, ((safe_rshift_func_uint16_t_u_s(p_1105->g_102.y, ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(1L, ((VECTOR(int8_t, 4))(l_631.wxxz)), (*l_10), ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(l_632.xy)), ((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_1105->g_633.zwwz)), (safe_mul_func_uint16_t_u_u(p_1105->g_573.x, ((p_1105->g_167.s0 = (((((l_623 = p_1105->g_335.se) == GROUP_DIVERGE(2, 1)) && (safe_mul_func_int16_t_s_s((65534UL < p_1105->g_197), 0L))) , 0x7F10AE5542C80384L) <= p_1105->g_147)) >= (*l_612)))), ((VECTOR(int8_t, 2))(0x45L)), 0x75L)), ((VECTOR(int8_t, 8))(0x38L))))).s54))), 0x31L, 0x6EL, ((VECTOR(int8_t, 2))(0L)), (*l_10), 0x1BL, (-3L), 1L)).sa4, ((VECTOR(uint8_t, 2))(1UL))))).odd)) ^ 0x43L)))), 10))][(safe_mod_func_uint32_t_u_u(p_1105->tid, 168))]));
            }
            else
            { /* block id: 243 */
                int64_t l_642 = (-6L);
                uint32_t *l_665 = &p_1105->g_285;
                int64_t *l_666 = (void*)0;
                int64_t *l_667 = (void*)0;
                int64_t *l_668[7][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                int16_t l_669 = (-2L);
                int i, j;
                (*l_478) = (safe_mul_func_int8_t_s_s(l_623, GROUP_DIVERGE(1, 1)));
                if (l_642)
                    continue;
                (*p_1105->g_441) = (~(safe_div_func_int64_t_s_s(((VECTOR(int64_t, 2))(1L, 1L)).lo, ((((0x2FL <= ((p_1105->g_3 , ((*p_1105->g_331) = (safe_unary_minus_func_int64_t_s(((*l_478) ^= (safe_unary_minus_func_int32_t_s(((safe_sub_func_int8_t_s_s(l_642, (l_628.s4 , (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((l_653 , l_654) == ((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((((VECTOR(uint32_t, 4))(l_659.se101)).w != ((*l_665) = (0x8816453DL >= ((safe_mul_func_uint8_t_u_u(((l_663 = l_662) == p_1105->g_363), l_664.s0)) , 5L)))) <= l_642), l_623)), 1)) , (void*)0)), 0x6B75C00BL)), 6))))) | l_24)))))))) | p_1105->g_7)) && 0x6F25F54C4A0E86C1L) && p_1105->g_239.y) && l_669))));
            }
            (*p_1105->g_301) = func_78(l_670, &l_623, (((((*l_478) = (!(p_1105->g_505.s6 = (safe_add_func_int64_t_s_s((!(safe_div_func_int64_t_s_s((p_1105->g_335.s2 = (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(p_1105->g_102.x, (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(p_1105->g_681.xzzzzwxz)).s7717723462063602)).s3, (p_1105->g_111.s7 = ((((VECTOR(int64_t, 8))(l_682.s62275644)).s3 , ((l_623 |= (safe_rshift_func_int16_t_s_s(l_24, 1))) , (safe_mul_func_int16_t_s_s((*l_10), ((((l_688 , (safe_rshift_func_uint16_t_u_s((&l_623 == (*p_1105->g_301)), 1))) < ((((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(0x4E31B61AFF70D85DL, (-4L), 0L, 0x28115E9C2C5656ACL, (safe_mul_func_uint8_t_u_u((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_1105->g_693.xy)).xxyy)).y & ((*l_695)++)), ((**p_1105->g_301) ^ (*l_10)))), 0x609527DF38626203L, ((VECTOR(int64_t, 4))((-3L))), 0x744D012E8D84EFB0L, ((VECTOR(int64_t, 2))((-3L))), 2L, (-3L), 0L)).s76)).even && p_1105->g_281.s7) , p_1105->g_218.y) , (*l_478)) , p_1105->g_381.s1)) , (void*)0) == &p_1105->g_128))))) , 6L)))))) != 255UL), 0x1BL))), p_1105->g_582.y))), p_1105->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1105->tid, 168))]))))) ^ l_631.w) <= l_701) > l_702), (*p_1105->g_301), p_1105);
            (*l_10) = (*l_10);
            for (p_1105->g_147 = 0; (p_1105->g_147 >= 5); p_1105->g_147 = safe_add_func_int16_t_s_s(p_1105->g_147, 4))
            { /* block id: 262 */
                uint64_t l_726[4] = {0x1403C9C1CF86CA25L,0x1403C9C1CF86CA25L,0x1403C9C1CF86CA25L,0x1403C9C1CF86CA25L};
                uint32_t l_727 = 1UL;
                int i;
                for (l_617 = 0; (l_617 <= 3); ++l_617)
                { /* block id: 265 */
                    int16_t l_725 = 0x3433L;
                    for (p_1105->g_285 = (-7); (p_1105->g_285 != 36); p_1105->g_285 = safe_add_func_int32_t_s_s(p_1105->g_285, 8))
                    { /* block id: 268 */
                        int8_t **l_709 = &p_1105->g_223;
                        VECTOR(int32_t, 8) l_710 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
                        int i;
                        (*l_478) = ((l_710.s1 = ((void*)0 != l_709)) && (l_728 &= (safe_lshift_func_uint16_t_u_u(((((FAKE_DIVERGE(p_1105->global_2_offset, get_global_id(2), 10) || (safe_add_func_int16_t_s_s((0x15CB75D41CDFAFF0L || (p_1105->g_3 < ((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(p_1105->g_574.s7, l_710.s7)), (((VECTOR(uint8_t, 4))(l_723.s0bc5)).x == (((**p_1105->g_301) = 1L) || l_724)))), 1)) ^ ((1UL && l_725) < 0x3830E0B1L)))), 0x72F0L))) <= (*l_10)) == l_726[2]) > l_727), 9))));
                    }
                    if ((atomic_inc(&p_1105->g_atomic_input[54 * get_linear_group_id() + 25]) == 4))
                    { /* block id: 275 */
                        int64_t l_729 = 0x0E0C5054F5200F32L;
                        uint8_t l_730 = 5UL;
                        l_730 = l_729;
                        unsigned int result = 0;
                        result += l_729;
                        result += l_730;
                        atomic_add(&p_1105->g_special_values[54 * get_linear_group_id() + 25], result);
                    }
                    else
                    { /* block id: 277 */
                        (1 + 1);
                    }
                    if (l_728)
                        break;
                }
                l_731[6] = (*p_1105->g_624);
            }
        }
        (*p_1105->g_331) |= (8UL == (safe_lshift_func_int16_t_s_s(l_734.x, ((((&p_1105->g_285 == (void*)0) != (-6L)) != (((((((*l_736)++) && (safe_div_func_int8_t_s_s((*l_478), (safe_div_func_int8_t_s_s((0x4ECB9C8EL | (safe_mul_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_747.s2261)).hi)).lo , ((safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((((VECTOR(int32_t, 16))(l_752.s6163503420513237)).s7 , (p_1105->g_26 == (((((((~((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((*p_1105->g_302), 0x9D65B40FL)), (*l_478))) > p_1105->g_335.sc)) , l_757) ^ 0L) && p_1105->g_112.s6) , (*p_1105->g_624)) != &l_623) , 0x3726A1B114056A65L))) <= l_758[5][2][7]), p_1105->g_91[5])), FAKE_DIVERGE(p_1105->group_0_offset, get_group_id(0), 10))) < p_1105->g_443)), (*l_478))) & p_1105->g_381.s1) <= 9L), 5L))), p_1105->g_112.s6))))) != p_1105->g_574.s1) == p_1105->g_267) == p_1105->g_583.sf) != (**p_1105->g_301))) , 5L))));
        for (p_1105->g_197 = 0; (p_1105->g_197 > (-12)); p_1105->g_197 = safe_sub_func_uint8_t_u_u(p_1105->g_197, 4))
        { /* block id: 289 */
            VECTOR(uint8_t, 4) l_763 = (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 255UL), 255UL);
            VECTOR(uint8_t, 8) l_765 = (VECTOR(uint8_t, 8))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 255UL), 255UL), 255UL, 3UL, 255UL);
            int32_t l_767 = 0x332C8922L;
            int8_t l_768[1];
            int i;
            for (i = 0; i < 1; i++)
                l_768[i] = 1L;
            (*p_1105->g_302) = (((void*)0 != l_761) ^ (((VECTOR(uint8_t, 8))(0xEBL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_763.wwywwwwzyzyxxzzy)).s0a)))), 1UL, 0x51L, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))(l_764.wzwz)).lo, ((VECTOR(uint8_t, 4))(l_765.s0746)).hi))), 5UL)).s3 || (((void*)0 != l_766) , (l_767 = 2L))));
            if (l_768[0])
                continue;
            if ((*p_1105->g_331))
                continue;
        }
    }
    for (p_1105->g_443 = 0; (p_1105->g_443 < 9); ++p_1105->g_443)
    { /* block id: 298 */
        VECTOR(uint32_t, 2) l_787 = (VECTOR(uint32_t, 2))(4UL, 4294967293UL);
        int32_t l_795 = 0x68785C80L;
        int32_t l_810 = 0L;
        int32_t l_811 = 0x6B271B1FL;
        int32_t l_812[5];
        uint32_t l_814 = 0x8E9F77ACL;
        int64_t *l_820 = (void*)0;
        int64_t *l_821 = (void*)0;
        int64_t *l_822 = (void*)0;
        int64_t *l_823 = (void*)0;
        VECTOR(int64_t, 16) l_824 = (VECTOR(int64_t, 16))(0x027DC80F6D4B8F11L, (VECTOR(int64_t, 4))(0x027DC80F6D4B8F11L, (VECTOR(int64_t, 2))(0x027DC80F6D4B8F11L, 0x6F365C1CB2331668L), 0x6F365C1CB2331668L), 0x6F365C1CB2331668L, 0x027DC80F6D4B8F11L, 0x6F365C1CB2331668L, (VECTOR(int64_t, 2))(0x027DC80F6D4B8F11L, 0x6F365C1CB2331668L), (VECTOR(int64_t, 2))(0x027DC80F6D4B8F11L, 0x6F365C1CB2331668L), 0x027DC80F6D4B8F11L, 0x6F365C1CB2331668L, 0x027DC80F6D4B8F11L, 0x6F365C1CB2331668L);
        uint32_t *l_826 = &l_814;
        uint32_t **l_825 = &l_826;
        int32_t *l_827 = (void*)0;
        int32_t *l_828 = &l_817;
        int32_t l_830 = 0x7E4FF816L;
        uint32_t l_840 = 8UL;
        int i;
        for (i = 0; i < 5; i++)
            l_812[i] = 2L;
        for (l_24 = (-7); (l_24 > 8); l_24 = safe_add_func_int8_t_s_s(l_24, 4))
        { /* block id: 301 */
            uint8_t l_781[7][9][3] = {{{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL}},{{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL}},{{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL}},{{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL}},{{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL}},{{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL}},{{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL},{2UL,9UL,1UL}}};
            int32_t l_801 = (-5L);
            int32_t l_803 = 0x3C892139L;
            int8_t l_805 = 8L;
            uint8_t l_807 = 0UL;
            int32_t l_813 = 0x5773C48BL;
            int i, j, k;
            for (p_1105->g_26 = (-2); (p_1105->g_26 >= (-2)); p_1105->g_26 = safe_add_func_uint64_t_u_u(p_1105->g_26, 7))
            { /* block id: 304 */
                int8_t l_784 = 0x54L;
                int64_t *l_794 = (void*)0;
                (*p_1105->g_331) &= (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_1105->g_245, (safe_div_func_uint8_t_u_u((((void*)0 != &l_24) , (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(0x5970L, 0UL)))).odd & l_781[4][1][0])), p_1105->g_239.y)))), (((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(p_1105->g_782.s2552)).hi, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_1105->g_783.s7001)).zxzwxwzx)).s76))).hi == (l_784 ^ (((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-10L), (-10L))))).yxyx)).hi, ((VECTOR(int32_t, 8))(p_1105->g_785.s3128344d)).s07))), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(((((**p_1105->g_301) == ((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_1105->g_786.xxwwwyyx)).lo)).zwwxwywy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(0x8CC2C80CL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_787.yxxx)).xzwxyzxw)).s72)), 0xFE679676L, (safe_add_func_uint32_t_u_u(l_787.y, ((safe_sub_func_int64_t_s_s((l_795 = (safe_mod_func_uint64_t_u_u(p_1105->g_381.s9, 0x7D34D3B991CBBCF9L))), 18446744073709551615UL)) < p_1105->g_112.s7))), ((VECTOR(uint32_t, 2))(0xF386D3B8L)), FAKE_DIVERGE(p_1105->local_0_offset, get_local_id(0), 10), 0xF536798CL, ((VECTOR(uint32_t, 2))(7UL)), 0xE6248509L, ((VECTOR(uint32_t, 2))(7UL)), 0x60F1B4DDL, 2UL)).sad)).yxyyxyyx))).s1) || l_784) , l_787.y), (*p_1105->g_441), (**p_1105->g_301), ((VECTOR(int32_t, 8))((-3L))), ((VECTOR(int32_t, 4))(1L)), 0x40F80152L)).s3b, (int32_t)0x2965A999L, (int32_t)l_781[4][1][0]))), ((VECTOR(int32_t, 2))(0x36F6BA04L))))).hi > 0x26E18BC3L)))));
            }
            for (p_1105->g_141 = 0; (p_1105->g_141 > (-21)); p_1105->g_141--)
            { /* block id: 310 */
                int8_t l_799 = 0x3DL;
                int32_t l_800 = 0x0343ACEEL;
                int32_t l_802 = 0x0FF42BFEL;
                int32_t l_804 = 0x153B9F50L;
                int32_t l_806 = 0x2909EA5DL;
                (*p_1105->g_798) = ((*p_1105->g_624) = (*p_1105->g_624));
                if (l_799)
                    break;
                l_807++;
                ++l_814;
            }
            (*p_1105->g_331) = (l_817 & p_1105->g_285);
            (*p_1105->g_301) = func_76(&l_623, p_1105);
        }
        (*p_1105->g_441) |= (9UL | (safe_sub_func_int32_t_s_s(((!((((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 4))((l_811 = l_787.y), 0x5C40BFC8B039AE4AL, (-9L), (-1L))).wzwywzyx, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 2))((-1L), 0x546EDFDEF2044C32L)).yyxyxxxy, ((VECTOR(int64_t, 4))(l_824.s34c3)).ywxyzwyw))).even)).zzxwzyyz))).s2 & (l_830 = (((*l_828) = (p_1105->g_302 == ((*l_825) = &l_814))) , (p_1105->g_337.s8 = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_829.xz)).yxyyyxyyyxxxxxyy)).s0 && (-1L)))))) >= (safe_lshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((((+l_814) <= ((safe_div_func_uint64_t_u_u(((safe_add_func_uint64_t_u_u(((l_814 | (p_1105->g_782.s2 && (*p_1105->g_331))) & l_824.s6), p_1105->g_505.s5)) , l_824.sf), (-4L))) & 1L)) != p_1105->g_599.x), GROUP_DIVERGE(2, 1))), p_1105->g_335.s1)))) ^ 0x2086D171B7552D91L), GROUP_DIVERGE(0, 1))));
        if ((0x70877813L || l_824.s5))
        { /* block id: 326 */
            uint32_t l_839 = 0UL;
            if (l_839)
                break;
            return l_840;
        }
        else
        { /* block id: 329 */
            return (*p_1105->g_486);
        }
    }
    for (p_1105->g_618 = (-5); (p_1105->g_618 < 12); p_1105->g_618 = safe_add_func_uint8_t_u_u(p_1105->g_618, 8))
    { /* block id: 335 */
        if ((atomic_inc(&p_1105->l_atomic_input[29]) == 1))
        { /* block id: 337 */
            int32_t l_843 = 0L;
            uint32_t l_844 = 4294967295UL;
            int32_t l_939 = 1L;
            l_844 = l_843;
            for (l_843 = 27; (l_843 <= 29); l_843++)
            { /* block id: 341 */
                VECTOR(int32_t, 4) l_847 = (VECTOR(int32_t, 4))(0x1F959301L, (VECTOR(int32_t, 2))(0x1F959301L, (-1L)), (-1L));
                int i;
                for (l_847.w = 11; (l_847.w <= (-4)); --l_847.w)
                { /* block id: 344 */
                    VECTOR(int32_t, 4) l_850 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x3D9D9664L), 0x3D9D9664L);
                    int i;
                    for (l_850.x = 12; (l_850.x != 28); l_850.x++)
                    { /* block id: 347 */
                        int16_t l_853[3][1][5];
                        uint32_t l_854 = 4294967295UL;
                        int32_t l_858[5][9][5] = {{{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)}},{{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)}},{{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)}},{{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)}},{{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L,(-1L)}}};
                        int32_t *l_857 = &l_858[4][3][0];
                        int32_t *l_859[9] = {&l_858[0][1][0],&l_858[0][1][0],&l_858[0][1][0],&l_858[0][1][0],&l_858[0][1][0],&l_858[0][1][0],&l_858[0][1][0],&l_858[0][1][0],&l_858[0][1][0]};
                        int32_t *l_860 = &l_858[4][3][0];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 5; k++)
                                    l_853[i][j][k] = (-2L);
                            }
                        }
                        l_854--;
                        l_859[4] = l_857;
                        l_859[8] = l_860;
                    }
                }
                for (l_847.z = 29; (l_847.z <= (-5)); --l_847.z)
                { /* block id: 355 */
                    uint32_t l_863 = 0x143ED40BL;
                    int8_t l_864[7][6] = {{(-1L),0x12L,0x0BL,(-10L),0x0BL,0x12L},{(-1L),0x12L,0x0BL,(-10L),0x0BL,0x12L},{(-1L),0x12L,0x0BL,(-10L),0x0BL,0x12L},{(-1L),0x12L,0x0BL,(-10L),0x0BL,0x12L},{(-1L),0x12L,0x0BL,(-10L),0x0BL,0x12L},{(-1L),0x12L,0x0BL,(-10L),0x0BL,0x12L},{(-1L),0x12L,0x0BL,(-10L),0x0BL,0x12L}};
                    uint8_t l_865 = 0xF8L;
                    int32_t l_866 = 0x4CA71E0AL;
                    VECTOR(int64_t, 2) l_867 = (VECTOR(int64_t, 2))((-5L), 0x396C968193FDD1D9L);
                    uint16_t l_868 = 0x3449L;
                    uint16_t l_869 = 0x3D89L;
                    int32_t l_870[4][1] = {{(-1L)},{(-1L)},{(-1L)},{(-1L)}};
                    int32_t l_871[8][7][4] = {{{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L}},{{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L}},{{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L}},{{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L}},{{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L}},{{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L}},{{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L}},{{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L},{0x1D923B6BL,6L,0x42FA0B1EL,6L}}};
                    int16_t l_872 = (-3L);
                    uint32_t l_873 = 4294967295UL;
                    uint16_t l_874 = 0x1325L;
                    int32_t l_875 = 3L;
                    int32_t *l_927 = &l_866;
                    int i, j, k;
                    if (((l_875 ^= (l_874 ^= ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(0x721E82ED8E037AA6L, 0x7C93EA00BDF4F4E5L, (-7L), l_863, (l_864[3][2] = 0x2422535C65C4087CL), 0x577FF072DB16A142L, 0x48B1582DBC3FD37BL, 0x36F06AF5FA12B215L)).s3, ((VECTOR(int64_t, 8))(0x49E44159552B38CFL, (l_866 = (l_865 = 3L)), 0x76F9C79A5034F4B5L, 0x3F5E3D3153BB06E4L, ((VECTOR(int64_t, 2))(0x4A27B4E79C32C5BCL, 0x08D0AF12EF7E40CBL)).lo, ((VECTOR(int64_t, 2))(l_867.xy)), (-6L))).s2, l_868, l_869, l_870[0][0], (l_871[2][0][0] , l_872), 1L, ((VECTOR(int64_t, 2))((-1L))), 0x40B0CB7115407106L, l_873, ((VECTOR(int64_t, 2))(0x707CF8AFBF756C3BL)), ((VECTOR(int64_t, 2))(0x3A43427E1D394532L)), 0x37F8C962AF3CC787L)).s8)) , 4L))
                    { /* block id: 361 */
                        int32_t l_876 = 0x1DE3D671L;
                        int64_t l_877 = 1L;
                        int64_t l_878 = 1L;
                        int8_t l_879 = (-1L);
                        int32_t l_880[4] = {0L,0L,0L,0L};
                        VECTOR(uint16_t, 2) l_881 = (VECTOR(uint16_t, 2))(0x5394L, 0x93AFL);
                        int32_t *l_884 = &l_876;
                        int i;
                        l_881.x++;
                        l_884 = (void*)0;
                    }
                    else
                    { /* block id: 364 */
                        int32_t l_885 = 0x116EBF95L;
                        int32_t l_886 = 6L;
                        uint32_t l_887 = 0x752C9617L;
                        l_887++;
                    }
                    for (l_867.x = (-24); (l_867.x >= 17); l_867.x++)
                    { /* block id: 369 */
                        uint8_t l_892 = 0xDFL;
                        int8_t l_893 = 0x4CL;
                        uint8_t l_894 = 4UL;
                        l_866 &= (l_892 = 0L);
                        l_866 |= l_893;
                        l_866 ^= l_894;
                    }
                    for (l_872 = 0; (l_872 != (-16)); l_872--)
                    { /* block id: 377 */
                        VECTOR(int64_t, 4) l_897 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-9L)), (-9L));
                        VECTOR(int64_t, 2) l_898 = (VECTOR(int64_t, 2))(0x2AC35C871FD4B272L, 0L);
                        int8_t l_899[9][9] = {{0x4EL,0x3EL,0x0EL,0x0EL,0x3EL,0x4EL,0L,(-1L),0x61L},{0x4EL,0x3EL,0x0EL,0x0EL,0x3EL,0x4EL,0L,(-1L),0x61L},{0x4EL,0x3EL,0x0EL,0x0EL,0x3EL,0x4EL,0L,(-1L),0x61L},{0x4EL,0x3EL,0x0EL,0x0EL,0x3EL,0x4EL,0L,(-1L),0x61L},{0x4EL,0x3EL,0x0EL,0x0EL,0x3EL,0x4EL,0L,(-1L),0x61L},{0x4EL,0x3EL,0x0EL,0x0EL,0x3EL,0x4EL,0L,(-1L),0x61L},{0x4EL,0x3EL,0x0EL,0x0EL,0x3EL,0x4EL,0L,(-1L),0x61L},{0x4EL,0x3EL,0x0EL,0x0EL,0x3EL,0x4EL,0L,(-1L),0x61L},{0x4EL,0x3EL,0x0EL,0x0EL,0x3EL,0x4EL,0L,(-1L),0x61L}};
                        VECTOR(int64_t, 8) l_900 = (VECTOR(int64_t, 8))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0x56C19AEFB42F12A0L), 0x56C19AEFB42F12A0L), 0x56C19AEFB42F12A0L, (-9L), 0x56C19AEFB42F12A0L);
                        uint8_t l_901[6][10][3] = {{{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L}},{{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L}},{{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L}},{{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L}},{{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L}},{{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L},{0UL,2UL,0x31L}}};
                        int16_t l_902 = 0x79FCL;
                        int64_t l_903 = 0x44282DB536758A13L;
                        uint16_t l_904 = 0xACADL;
                        VECTOR(int64_t, 8) l_905 = (VECTOR(int64_t, 8))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), 6L), 6L), 6L, (-5L), 6L);
                        uint8_t l_906 = 0x9AL;
                        VECTOR(int64_t, 8) l_907 = (VECTOR(int64_t, 8))(0x07AB7AEDF2DE7F8AL, (VECTOR(int64_t, 4))(0x07AB7AEDF2DE7F8AL, (VECTOR(int64_t, 2))(0x07AB7AEDF2DE7F8AL, 8L), 8L), 8L, 0x07AB7AEDF2DE7F8AL, 8L);
                        VECTOR(int64_t, 4) l_908 = (VECTOR(int64_t, 4))(0x26079DC0328FACE5L, (VECTOR(int64_t, 2))(0x26079DC0328FACE5L, 0x5616AD1C992C85C0L), 0x5616AD1C992C85C0L);
                        int64_t l_909 = 0L;
                        VECTOR(uint8_t, 8) l_910 = (VECTOR(uint8_t, 8))(0x70L, (VECTOR(uint8_t, 4))(0x70L, (VECTOR(uint8_t, 2))(0x70L, 7UL), 7UL), 7UL, 0x70L, 7UL);
                        uint32_t l_911 = 0UL;
                        VECTOR(uint8_t, 2) l_912 = (VECTOR(uint8_t, 2))(0x60L, 1UL);
                        int8_t l_913[2];
                        VECTOR(int64_t, 4) l_914 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x5027501F9023C7FAL), 0x5027501F9023C7FAL);
                        int16_t l_915 = (-5L);
                        uint32_t l_916[3][6] = {{1UL,1UL,0xDF3C0F9EL,4294967288UL,0xEE633897L,4294967288UL},{1UL,1UL,0xDF3C0F9EL,4294967288UL,0xEE633897L,4294967288UL},{1UL,1UL,0xDF3C0F9EL,4294967288UL,0xEE633897L,4294967288UL}};
                        int8_t l_917[10] = {7L,7L,7L,7L,7L,7L,7L,7L,7L,7L};
                        uint16_t l_918 = 1UL;
                        uint32_t l_919 = 1UL;
                        uint32_t l_920 = 4294967290UL;
                        uint16_t l_921 = 65534UL;
                        uint32_t l_922 = 0xDE31E618L;
                        VECTOR(uint32_t, 16) l_923 = (VECTOR(uint32_t, 16))(0xC18E6CB0L, (VECTOR(uint32_t, 4))(0xC18E6CB0L, (VECTOR(uint32_t, 2))(0xC18E6CB0L, 1UL), 1UL), 1UL, 0xC18E6CB0L, 1UL, (VECTOR(uint32_t, 2))(0xC18E6CB0L, 1UL), (VECTOR(uint32_t, 2))(0xC18E6CB0L, 1UL), 0xC18E6CB0L, 1UL, 0xC18E6CB0L, 1UL);
                        int32_t l_924 = 0x08808837L;
                        int16_t l_925[6][9] = {{0x1B19L,0x34CCL,0L,8L,0L,0x34CCL,0x1B19L,0x62C1L,(-5L)},{0x1B19L,0x34CCL,0L,8L,0L,0x34CCL,0x1B19L,0x62C1L,(-5L)},{0x1B19L,0x34CCL,0L,8L,0L,0x34CCL,0x1B19L,0x62C1L,(-5L)},{0x1B19L,0x34CCL,0L,8L,0L,0x34CCL,0x1B19L,0x62C1L,(-5L)},{0x1B19L,0x34CCL,0L,8L,0L,0x34CCL,0x1B19L,0x62C1L,(-5L)},{0x1B19L,0x34CCL,0L,8L,0L,0x34CCL,0x1B19L,0x62C1L,(-5L)}};
                        uint32_t l_926 = 0x50EAA295L;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_913[i] = 0L;
                        l_866 &= (((((VECTOR(uint64_t, 4))(0x44A3B951C6E21862L, (l_922 = ((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 16))(l_897.ywwxxxyzyxzwzxyy)).even, ((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 4))((l_899[5][4] = (l_867.y ^= ((VECTOR(int64_t, 4))(l_898.xyyy)).x)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 16))((-4L), ((VECTOR(int64_t, 2))(l_900.s07)), 1L, l_901[3][8][2], 0L, 0L, ((VECTOR(int64_t, 8))(0x634934E3E1EF993CL, 0x7B5BDB2073FB0FD4L, 0x7BAAC540303E681CL, 0x4376427B2F9A4573L, ((l_902 , l_903) , l_904), 0x50B56EDBC8B8F291L, 0x0F7C2632500AB690L, 0x03743067EACFA3EAL)), 2L)).s61, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_905.s0210323606661111)).sb, ((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(0x5B58CCD44DEE4DBFL, l_906, 0x0A56620F3BD626D0L, 1L)), (l_867.x ^= ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_907.s43262510)).s37)).even), ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 4))(l_908.xzxx)).odd, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((l_909 = FAKE_DIVERGE(p_1105->local_0_offset, get_local_id(0), 10)) , (((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 8))(l_910.s02171015)).s0521227541527021, ((VECTOR(uint8_t, 8))(l_911, 0x37L, 5UL, ((VECTOR(uint8_t, 4))(l_912.yxxy)), 0x8FL)).s3520607044402476))).se , (l_867.y ^= l_913[1]))), ((VECTOR(int64_t, 2))(l_914.yw)), 0x171EFB5E419B77DFL)))).even, ((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 16))((l_915 , l_916[0][0]), l_917[0], ((VECTOR(int64_t, 8))(1L)), l_918, 0L, ((VECTOR(int64_t, 4))(1L)))).hi, ((VECTOR(int64_t, 8))(2L)), ((VECTOR(int64_t, 8))(0L))))).s62))), 1L)).s41, ((VECTOR(int64_t, 2))(0x78A0003B10161B87L))))), 0x4E8BA649C8C8CD09L, 0x233AED5338856C34L, 0x415B68833A942282L, 0L, 0x3EF5402A56E20D8DL)).s4, l_919, (-1L), (-10L))), l_920, l_921, 0x7588009CB3D60E3DL, 0x3CDD36022677551AL)).s35))))), 0L)), ((VECTOR(int64_t, 4))(0x29925082C146B62DL)), ((VECTOR(int64_t, 4))((-1L)))))).yzzzxwxz, ((VECTOR(int64_t, 8))(0x4352B3426303F369L)))))))).s3), 0xB4D02A1C34F918C6L, 0xE89F3E84F20B0BFDL)).w , l_923.s6) , 0x3FL) , l_924);
                        l_926 ^= (l_866 = l_925[0][6]);
                    }
                    l_927 = (void*)0;
                }
            }
            for (l_844 = 0; (l_844 > 58); l_844++)
            { /* block id: 393 */
                int8_t l_930 = (-6L);
                uint8_t l_931 = 0x53L;
                uint32_t l_932 = 0x1FC648E2L;
                uint32_t l_933 = 0x06C362E8L;
                int32_t l_935 = 1L;
                int32_t *l_934 = &l_935;
                uint32_t l_936 = 1UL;
                uint32_t l_937 = 4294967295UL;
                int16_t l_938 = 0x6676L;
                l_934 = ((l_931 |= l_930) , ((l_932 &= 0L) , (l_933 , (void*)0)));
                l_937 &= l_936;
                l_938 = (-4L);
            }
            if (l_939)
            { /* block id: 400 */
                uint8_t l_940 = 0x0EL;
                int32_t l_944 = 1L;
                int32_t *l_943 = &l_944;
                uint8_t l_945 = 0UL;
                uint32_t l_957 = 0x7117000BL;
                l_940--;
                l_943 = (void*)0;
                if (l_945)
                { /* block id: 403 */
                    VECTOR(int32_t, 2) l_946 = (VECTOR(int32_t, 2))((-3L), 0x410DC185L);
                    VECTOR(int32_t, 4) l_955 = (VECTOR(int32_t, 4))(0x64A6CFFDL, (VECTOR(int32_t, 2))(0x64A6CFFDL, 0x58E3D2EDL), 0x58E3D2EDL);
                    int i;
                    for (l_946.y = (-21); (l_946.y == (-4)); l_946.y = safe_add_func_uint32_t_u_u(l_946.y, 1))
                    { /* block id: 406 */
                        int16_t l_949 = 0x2F5FL;
                        int16_t l_950 = 0x32B6L;
                        int64_t l_951 = 0x316903C077686CB6L;
                        uint16_t l_952 = 0xFBB6L;
                        l_949 = 0x6F9D9FCEL;
                        l_952++;
                    }
                    l_955.y = ((VECTOR(int32_t, 8))(l_955.wwwxxwww)).s7;
                }
                else
                { /* block id: 411 */
                    int64_t l_956 = 0x0265F5EC941B1F4BL;
                    l_944 = l_956;
                }
                if (l_957)
                { /* block id: 414 */
                    int32_t l_958[8];
                    uint16_t l_963 = 65535UL;
                    uint64_t l_964[1][9][5] = {{{0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L},{0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L},{0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L},{0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L},{0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L},{0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L},{0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L},{0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L},{0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L,0xDCE369B77ADEE751L}}};
                    int64_t l_965[7][4] = {{1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),1L},{1L,(-1L),(-1L),1L}};
                    uint64_t l_966[1][7][1];
                    int32_t *l_967 = &l_958[7];
                    int32_t *l_968 = &l_958[7];
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                        l_958[i] = (-2L);
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_966[i][j][k] = 0x6995216DC907C2B8L;
                        }
                    }
                    for (l_958[5] = 0; (l_958[5] != 14); l_958[5] = safe_add_func_uint64_t_u_u(l_958[5], 3))
                    { /* block id: 417 */
                        int64_t l_961 = 0x5169F11AB89E7E20L;
                        int8_t l_962 = (-2L);
                        l_962 = l_961;
                    }
                    l_944 = ((l_963 = 0x364CCF96L) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x45C8A077L, 1L)).yyyxxyxyyxyxyyxx)).s6);
                    l_958[4] = (l_964[0][8][3] , (l_966[0][6][0] = (l_944 &= l_965[4][3])));
                    l_968 = (l_967 = (l_943 = (void*)0));
                }
                else
                { /* block id: 428 */
                    int32_t l_969[8][10] = {{5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL},{5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL},{5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL},{5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL},{5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL},{5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL},{5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL},{5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL,0x1777414FL,5L,5L,0x1777414FL}};
                    int i, j;
                    for (l_969[4][5] = (-9); (l_969[4][5] != 23); ++l_969[4][5])
                    { /* block id: 431 */
                        uint32_t l_972 = 5UL;
                        l_972--;
                        l_943 = (void*)0;
                    }
                }
            }
            else
            { /* block id: 436 */
                int32_t l_975 = 0x61938345L;
                uint64_t l_1038[10][5] = {{18446744073709551615UL,0x3050CB054358C4BEL,0x3050CB054358C4BEL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x3050CB054358C4BEL,0x3050CB054358C4BEL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x3050CB054358C4BEL,0x3050CB054358C4BEL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x3050CB054358C4BEL,0x3050CB054358C4BEL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x3050CB054358C4BEL,0x3050CB054358C4BEL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x3050CB054358C4BEL,0x3050CB054358C4BEL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x3050CB054358C4BEL,0x3050CB054358C4BEL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x3050CB054358C4BEL,0x3050CB054358C4BEL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x3050CB054358C4BEL,0x3050CB054358C4BEL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0x3050CB054358C4BEL,0x3050CB054358C4BEL,18446744073709551615UL,18446744073709551615UL}};
                uint32_t l_1039 = 0x64C7F886L;
                uint64_t l_1040 = 0x265D7EF4A5F6FC6DL;
                uint32_t l_1041 = 4294967286UL;
                int8_t l_1042 = 0x66L;
                uint32_t l_1043 = 0x68E08B57L;
                uint32_t l_1044 = 3UL;
                uint32_t l_1045 = 0UL;
                int8_t l_1046 = (-9L);
                uint32_t l_1094 = 0x552F6A76L;
                int32_t l_1095 = 0x3E849CBCL;
                VECTOR(int32_t, 2) l_1096 = (VECTOR(int32_t, 2))(0x55713924L, 0x290D7189L);
                int64_t l_1097 = 0x460F8E52399B206EL;
                uint64_t l_1098 = 0UL;
                VECTOR(int32_t, 4) l_1099 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x40C84E80L), 0x40C84E80L);
                int16_t l_1100 = 0x73B2L;
                VECTOR(int32_t, 16) l_1101 = (VECTOR(int32_t, 16))(0x15FEE100L, (VECTOR(int32_t, 4))(0x15FEE100L, (VECTOR(int32_t, 2))(0x15FEE100L, 0x2184AE44L), 0x2184AE44L), 0x2184AE44L, 0x15FEE100L, 0x2184AE44L, (VECTOR(int32_t, 2))(0x15FEE100L, 0x2184AE44L), (VECTOR(int32_t, 2))(0x15FEE100L, 0x2184AE44L), 0x15FEE100L, 0x2184AE44L, 0x15FEE100L, 0x2184AE44L);
                int64_t l_1102 = 0x335369585064EB56L;
                int32_t l_1103 = 9L;
                int32_t l_1104 = 0x4E72D2EBL;
                int i, j;
                for (l_975 = 0; (l_975 == 25); l_975 = safe_add_func_int8_t_s_s(l_975, 6))
                { /* block id: 439 */
                    int32_t l_978 = 9L;
                    VECTOR(uint8_t, 16) l_1000 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL, (VECTOR(uint8_t, 2))(255UL, 1UL), (VECTOR(uint8_t, 2))(255UL, 1UL), 255UL, 1UL, 255UL, 1UL);
                    int i;
                    if (l_978)
                    { /* block id: 440 */
                        int8_t l_979 = 6L;
                        int16_t l_980 = 0x5CE3L;
                        int8_t l_981 = (-1L);
                        int32_t l_982 = (-4L);
                        int32_t l_983 = 8L;
                        int16_t l_984 = 0x2090L;
                        int64_t l_985 = 5L;
                        uint32_t l_986[5] = {0x159D502DL,0x159D502DL,0x159D502DL,0x159D502DL,0x159D502DL};
                        int16_t *l_988 = &l_980;
                        int16_t **l_987 = &l_988;
                        int16_t **l_989 = &l_988;
                        uint32_t l_990[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_990[i] = 0xAF5A7BF6L;
                        l_982 ^= (l_979 , (l_981 = (l_980 ^= ((VECTOR(int32_t, 2))(0x5DB0F62FL, 8L)).odd)));
                        l_984 = l_983;
                        l_989 = ((l_985 , l_986[1]) , l_987);
                        ++l_990[6];
                    }
                    else
                    { /* block id: 447 */
                        int32_t l_993 = 0x491E9F18L;
                        int16_t l_994 = 0x5DADL;
                        uint32_t l_995 = 0x93149E80L;
                        uint64_t l_998 = 1UL;
                        uint64_t l_999 = 0UL;
                        l_994 = l_993;
                        l_995++;
                        l_999 |= l_998;
                    }
                    if (l_1000.se)
                    { /* block id: 452 */
                        int32_t l_1001 = 0x155B6A2EL;
                        int16_t l_1002 = 0x0FF0L;
                        uint32_t l_1003 = 4UL;
                        int32_t *l_1004 = &l_1001;
                        int32_t *l_1005[10] = {&l_1001,&l_1001,&l_1001,&l_1001,&l_1001,&l_1001,&l_1001,&l_1001,&l_1001,&l_1001};
                        int32_t *l_1006 = (void*)0;
                        int32_t *l_1007 = (void*)0;
                        int32_t *l_1008 = &l_1001;
                        int8_t l_1009 = 0x38L;
                        int32_t *l_1010 = &l_1001;
                        int32_t *l_1011 = (void*)0;
                        int i;
                        l_1003 |= (((l_1001 , 1L) , (-1L)) , l_1002);
                        l_1006 = (l_1005[4] = l_1004);
                        l_1008 = l_1007;
                        l_1011 = (l_1009 , l_1010);
                    }
                    else
                    { /* block id: 458 */
                        VECTOR(int32_t, 4) l_1013 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x37486AFAL), 0x37486AFAL);
                        int32_t *l_1012 = (void*)0;
                        int32_t *l_1014 = (void*)0;
                        int16_t l_1015 = 0x5516L;
                        VECTOR(int32_t, 16) l_1016 = (VECTOR(int32_t, 16))(0x52990F21L, (VECTOR(int32_t, 4))(0x52990F21L, (VECTOR(int32_t, 2))(0x52990F21L, 0x3C1B7051L), 0x3C1B7051L), 0x3C1B7051L, 0x52990F21L, 0x3C1B7051L, (VECTOR(int32_t, 2))(0x52990F21L, 0x3C1B7051L), (VECTOR(int32_t, 2))(0x52990F21L, 0x3C1B7051L), 0x52990F21L, 0x3C1B7051L, 0x52990F21L, 0x3C1B7051L);
                        int32_t l_1017 = 0x46DEB51FL;
                        int32_t l_1018 = (-1L);
                        uint32_t l_1019[7] = {0x7F476528L,0x7F476528L,0x7F476528L,0x7F476528L,0x7F476528L,0x7F476528L,0x7F476528L};
                        int i;
                        l_1014 = l_1012;
                        l_1019[5]++;
                    }
                    for (l_978 = 0; (l_978 == 2); l_978 = safe_add_func_uint32_t_u_u(l_978, 4))
                    { /* block id: 464 */
                        VECTOR(int32_t, 4) l_1024 = (VECTOR(int32_t, 4))(0x27593334L, (VECTOR(int32_t, 2))(0x27593334L, 0x4015C673L), 0x4015C673L);
                        VECTOR(int32_t, 16) l_1025 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 1L), 1L), 1L, (-6L), 1L, (VECTOR(int32_t, 2))((-6L), 1L), (VECTOR(int32_t, 2))((-6L), 1L), (-6L), 1L, (-6L), 1L);
                        VECTOR(int32_t, 4) l_1026 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-10L)), (-10L));
                        VECTOR(int32_t, 8) l_1027 = (VECTOR(int32_t, 8))(0x401E5D5EL, (VECTOR(int32_t, 4))(0x401E5D5EL, (VECTOR(int32_t, 2))(0x401E5D5EL, 0x1292CFCCL), 0x1292CFCCL), 0x1292CFCCL, 0x401E5D5EL, 0x1292CFCCL);
                        uint64_t l_1028[7][4] = {{0xF4AD9E52D63EFF2DL,0xF4AD9E52D63EFF2DL,0xB1B7BB10F97FE40FL,9UL},{0xF4AD9E52D63EFF2DL,0xF4AD9E52D63EFF2DL,0xB1B7BB10F97FE40FL,9UL},{0xF4AD9E52D63EFF2DL,0xF4AD9E52D63EFF2DL,0xB1B7BB10F97FE40FL,9UL},{0xF4AD9E52D63EFF2DL,0xF4AD9E52D63EFF2DL,0xB1B7BB10F97FE40FL,9UL},{0xF4AD9E52D63EFF2DL,0xF4AD9E52D63EFF2DL,0xB1B7BB10F97FE40FL,9UL},{0xF4AD9E52D63EFF2DL,0xF4AD9E52D63EFF2DL,0xB1B7BB10F97FE40FL,9UL},{0xF4AD9E52D63EFF2DL,0xF4AD9E52D63EFF2DL,0xB1B7BB10F97FE40FL,9UL}};
                        int32_t *l_1029[10][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                        int16_t l_1032 = 0x7047L;
                        int16_t *l_1031 = &l_1032;
                        int16_t **l_1030 = &l_1031;
                        int16_t **l_1033[1][10][6] = {{{&l_1031,&l_1031,&l_1031,&l_1031,&l_1031,&l_1031},{&l_1031,&l_1031,&l_1031,&l_1031,&l_1031,&l_1031},{&l_1031,&l_1031,&l_1031,&l_1031,&l_1031,&l_1031},{&l_1031,&l_1031,&l_1031,&l_1031,&l_1031,&l_1031},{&l_1031,&l_1031,&l_1031,&l_1031,&l_1031,&l_1031},{&l_1031,&l_1031,&l_1031,&l_1031,&l_1031,&l_1031},{&l_1031,&l_1031,&l_1031,&l_1031,&l_1031,&l_1031},{&l_1031,&l_1031,&l_1031,&l_1031,&l_1031,&l_1031},{&l_1031,&l_1031,&l_1031,&l_1031,&l_1031,&l_1031},{&l_1031,&l_1031,&l_1031,&l_1031,&l_1031,&l_1031}}};
                        int i, j, k;
                        l_1028[0][1] = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_1024.zzyx)))), 0x7E8A31F5L, 0x7CA57330L, (-8L), 0x292477FAL)).s13)), 0x5B70DC14L, 1L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_1025.s114fe805)).even)), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(l_1026.zwyx)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1027.s10030426)).s0540166360647173)).s49))), 0x6A6104C4L, (-6L))).s6, 9L, (-1L))).s4032117503510315)).s5;
                        l_1029[0][0] = (((VECTOR(int32_t, 2))(0x54F839C5L, 0x1B84074EL)).odd , (void*)0);
                        l_1033[0][2][5] = (l_1030 = (void*)0);
                    }
                    for (l_978 = 0; (l_978 < (-16)); l_978 = safe_sub_func_int16_t_s_s(l_978, 1))
                    { /* block id: 472 */
                        int8_t l_1036 = 0L;
                        uint64_t l_1037 = 18446744073709551615UL;
                        l_1037 = l_1036;
                    }
                }
                if (((((VECTOR(int32_t, 8))(l_1038[9][4], l_1039, l_1040, l_1041, 0L, l_1042, (-6L), (-1L))).s1 , (l_1043 , l_1044)) , (l_1046 = l_1045)))
                { /* block id: 477 */
                    int8_t l_1047 = 0x26L;
                    uint64_t l_1052 = 0xA8A330ACE8E6DDC2L;
                    l_975 = l_1047;
                    for (l_1047 = (-12); (l_1047 > 29); l_1047 = safe_add_func_uint64_t_u_u(l_1047, 9))
                    { /* block id: 481 */
                        VECTOR(int32_t, 16) l_1050 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x06505EEFL), 0x06505EEFL), 0x06505EEFL, (-1L), 0x06505EEFL, (VECTOR(int32_t, 2))((-1L), 0x06505EEFL), (VECTOR(int32_t, 2))((-1L), 0x06505EEFL), (-1L), 0x06505EEFL, (-1L), 0x06505EEFL);
                        VECTOR(int32_t, 16) l_1051 = (VECTOR(int32_t, 16))(0x33DC06A2L, (VECTOR(int32_t, 4))(0x33DC06A2L, (VECTOR(int32_t, 2))(0x33DC06A2L, 0x33E38201L), 0x33E38201L), 0x33E38201L, 0x33DC06A2L, 0x33E38201L, (VECTOR(int32_t, 2))(0x33DC06A2L, 0x33E38201L), (VECTOR(int32_t, 2))(0x33DC06A2L, 0x33E38201L), 0x33DC06A2L, 0x33E38201L, 0x33DC06A2L, 0x33E38201L);
                        int i;
                        l_975 = ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(l_1050.s36b7)).xxxzywzyywxzywxy, ((VECTOR(int32_t, 4))(l_1051.sd050)).zzxxzzyzzyzwwxww))).s9;
                    }
                    if (l_1052)
                    { /* block id: 484 */
                        uint64_t l_1053 = 18446744073709551615UL;
                        VECTOR(int8_t, 4) l_1056 = (VECTOR(int8_t, 4))(0x4BL, (VECTOR(int8_t, 2))(0x4BL, 0L), 0L);
                        VECTOR(int8_t, 4) l_1057 = (VECTOR(int8_t, 4))(0x7CL, (VECTOR(int8_t, 2))(0x7CL, (-5L)), (-5L));
                        VECTOR(int16_t, 2) l_1058 = (VECTOR(int16_t, 2))(0x2B48L, (-1L));
                        VECTOR(int32_t, 8) l_1059 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
                        VECTOR(int32_t, 4) l_1060 = (VECTOR(int32_t, 4))(0x1C8CD709L, (VECTOR(int32_t, 2))(0x1C8CD709L, (-3L)), (-3L));
                        VECTOR(uint16_t, 4) l_1061 = (VECTOR(uint16_t, 4))(0xB3A5L, (VECTOR(uint16_t, 2))(0xB3A5L, 0xD067L), 0xD067L);
                        uint32_t l_1062 = 0xBBD59233L;
                        uint64_t l_1063 = 5UL;
                        VECTOR(int32_t, 4) l_1064 = (VECTOR(int32_t, 4))(0x4714A8CCL, (VECTOR(int32_t, 2))(0x4714A8CCL, 0x664EE2DDL), 0x664EE2DDL);
                        uint32_t l_1065 = 0x24FB88EAL;
                        uint16_t l_1066 = 0x1005L;
                        VECTOR(int64_t, 8) l_1067 = (VECTOR(int64_t, 8))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 0x14F1A6012F6EB4A4L), 0x14F1A6012F6EB4A4L), 0x14F1A6012F6EB4A4L, 8L, 0x14F1A6012F6EB4A4L);
                        int32_t l_1068 = 0x0A5C9027L;
                        uint8_t l_1069 = 0x7BL;
                        int64_t l_1070 = 0x098D5E43D6558CB0L;
                        int64_t l_1071 = 0x284BEA4985DC7EBAL;
                        uint64_t l_1072 = 8UL;
                        int i;
                        l_975 = 0x43712908L;
                        l_1053--;
                        l_1072 = (((((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(l_1056.yz)), ((VECTOR(int8_t, 2))(l_1057.yx))))).hi , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x2E125607L, ((VECTOR(int32_t, 2))((-4L), 0x1C70F51BL)), (-7L))).yxxxxzwx)).lo)).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(3L, 0L, 0x72E83FEDL, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(l_1058.xyxy)).zwwwxwzx, ((VECTOR(uint16_t, 2))(0xA2F6L, 0x7104L)).xxyyyxxy))).s4254524705710710, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1059.s71301553)).s0615625771045120))))).s02, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1060.wy)).xxxyxyxx)).lo)).hi))), (l_1061.x , (((l_1062 , GROUP_DIVERGE(0, 1)) , ((VECTOR(uint16_t, 2))(0UL, 0x8A06L)).even) , l_1063)), (-1L), 0x6365AFC4L)))).s2, ((VECTOR(int32_t, 2))(l_1064.zx)), 6L)).even))))))).even) , ((VECTOR(int64_t, 8))(l_1065, 0x59E2C4A1365B7C02L, 0x10820060CA8EBA7DL, (l_1068 = ((l_975 = l_1066) , ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_1067.s7403664047547677)))).s6)), (l_1070 |= l_1069), 0x60513670153BD923L, (-9L), 0x0F196837C99824BBL)).s4) , l_1071);
                    }
                    else
                    { /* block id: 491 */
                        uint8_t l_1073[9];
                        int8_t l_1076 = 0x2FL;
                        uint32_t l_1077 = 0xE1F5FC68L;
                        int32_t l_1081 = 0x324BE762L;
                        int32_t *l_1080 = &l_1081;
                        int32_t *l_1082[5][2] = {{(void*)0,&l_1081},{(void*)0,&l_1081},{(void*)0,&l_1081},{(void*)0,&l_1081},{(void*)0,&l_1081}};
                        int32_t *l_1083[4][8] = {{(void*)0,&l_1081,(void*)0,(void*)0,&l_1081,(void*)0,(void*)0,&l_1081},{(void*)0,&l_1081,(void*)0,(void*)0,&l_1081,(void*)0,(void*)0,&l_1081},{(void*)0,&l_1081,(void*)0,(void*)0,&l_1081,(void*)0,(void*)0,&l_1081},{(void*)0,&l_1081,(void*)0,(void*)0,&l_1081,(void*)0,(void*)0,&l_1081}};
                        int i, j;
                        for (i = 0; i < 9; i++)
                            l_1073[i] = 0x33L;
                        --l_1073[0];
                        --l_1077;
                        l_1080 = (void*)0;
                        l_1083[2][1] = l_1082[4][1];
                    }
                    l_975 = 1L;
                }
                else
                { /* block id: 498 */
                    uint32_t l_1084[5][4] = {{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}};
                    int64_t l_1085 = (-4L);
                    uint32_t l_1086 = 0x83F1AC67L;
                    VECTOR(int32_t, 2) l_1088 = (VECTOR(int32_t, 2))(0L, 0x53C2DBAFL);
                    int32_t *l_1087 = (void*)0;
                    int i, j;
                    l_975 = l_1084[0][1];
                    l_1086 ^= l_1085;
                    l_1087 = l_1087;
                    for (l_1086 = 0; (l_1086 > 49); l_1086 = safe_add_func_int16_t_s_s(l_1086, 2))
                    { /* block id: 504 */
                        VECTOR(int32_t, 16) l_1091 = (VECTOR(int32_t, 16))(0x136CEC07L, (VECTOR(int32_t, 4))(0x136CEC07L, (VECTOR(int32_t, 2))(0x136CEC07L, 0x6BE0CD01L), 0x6BE0CD01L), 0x6BE0CD01L, 0x136CEC07L, 0x6BE0CD01L, (VECTOR(int32_t, 2))(0x136CEC07L, 0x6BE0CD01L), (VECTOR(int32_t, 2))(0x136CEC07L, 0x6BE0CD01L), 0x136CEC07L, 0x6BE0CD01L, 0x136CEC07L, 0x6BE0CD01L);
                        uint32_t l_1092 = 1UL;
                        int16_t l_1093[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1093[i] = (-1L);
                        l_1092 ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1091.s5e)), 0x1D755D90L, 0L)).w;
                        l_975 &= (l_1088.x &= l_1093[5]);
                    }
                }
                l_1103 |= (((l_1094 = 0x72C1L) , l_1095) , (l_975 &= (l_1102 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1096.yx)), ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((l_1098 = l_1097), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_1099.zzxz)))), 7L, 0x19432C53L, 0L)).s12)).xyxyxxxy)), (int32_t)(l_1100 = 0x39A5D44FL)))).s6, ((VECTOR(int32_t, 4))(l_1101.sba2c)), 1L)).s2)));
                l_1104 ^= 0x0DCFB6E4L;
            }
            unsigned int result = 0;
            result += l_843;
            result += l_844;
            result += l_939;
            atomic_add(&p_1105->l_special_values[29], result);
        }
        else
        { /* block id: 518 */
            (1 + 1);
        }
        if ((**p_1105->g_301))
            break;
    }
    return (*p_1105->g_331);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_22(int64_t  p_23, struct S0 * p_1105)
{ /* block id: 18 */
    int32_t *l_25 = &p_1105->g_26;
    int32_t *l_27[7] = {&p_1105->g_7,&p_1105->g_26,&p_1105->g_7,&p_1105->g_7,&p_1105->g_26,&p_1105->g_7,&p_1105->g_7};
    int32_t l_28 = (-9L);
    uint64_t l_29 = 0x6A6B93DCEDB1A73BL;
    int i;
    --l_29;
    return p_23;
}


/* ------------------------------------------ */
/* 
 * reads : p_1105->g_197 p_1105->g_486 p_1105->g_26 p_1105->g_11 p_1105->g_294 p_1105->g_147 p_1105->g_298 p_1105->g_505 p_1105->g_comm_values p_1105->g_102 p_1105->g_278 p_1105->g_571 p_1105->g_299 p_1105->g_300 p_1105->g_199 p_1105->g_573 p_1105->g_574 p_1105->g_302 p_1105->g_581 p_1105->g_582 p_1105->g_583 p_1105->g_337 p_1105->g_599 p_1105->g_112 p_1105->g_285
 * writes: p_1105->g_197 p_1105->g_141 p_1105->g_26 p_1105->g_245 p_1105->g_147 p_1105->g_91 p_1105->g_278 p_1105->g_442 p_1105->g_300 p_1105->g_199 p_1105->g_302
 */
int32_t * func_32(int32_t * p_33, int32_t * p_34, int32_t * p_35, int32_t * p_36, int32_t * p_37, struct S0 * p_1105)
{ /* block id: 184 */
    uint8_t l_485 = 0x69L;
    VECTOR(uint16_t, 2) l_507 = (VECTOR(uint16_t, 2))(0x4F40L, 65535UL);
    int32_t l_542 = 1L;
    int32_t l_544 = 0x44F52BE3L;
    int32_t l_546 = 1L;
    VECTOR(uint8_t, 8) l_575 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x2CL), 0x2CL), 0x2CL, 0UL, 0x2CL);
    uint8_t *l_576 = &p_1105->g_91[9];
    int32_t **l_577 = &p_1105->g_302;
    VECTOR(uint8_t, 16) l_580 = (VECTOR(uint8_t, 16))(0xA4L, (VECTOR(uint8_t, 4))(0xA4L, (VECTOR(uint8_t, 2))(0xA4L, 248UL), 248UL), 248UL, 0xA4L, 248UL, (VECTOR(uint8_t, 2))(0xA4L, 248UL), (VECTOR(uint8_t, 2))(0xA4L, 248UL), 0xA4L, 248UL, 0xA4L, 248UL);
    uint32_t *l_604[6][9] = {{(void*)0,&p_1105->g_267,&p_1105->g_285,&p_1105->g_267,(void*)0,(void*)0,&p_1105->g_267,&p_1105->g_285,&p_1105->g_267},{(void*)0,&p_1105->g_267,&p_1105->g_285,&p_1105->g_267,(void*)0,(void*)0,&p_1105->g_267,&p_1105->g_285,&p_1105->g_267},{(void*)0,&p_1105->g_267,&p_1105->g_285,&p_1105->g_267,(void*)0,(void*)0,&p_1105->g_267,&p_1105->g_285,&p_1105->g_267},{(void*)0,&p_1105->g_267,&p_1105->g_285,&p_1105->g_267,(void*)0,(void*)0,&p_1105->g_267,&p_1105->g_285,&p_1105->g_267},{(void*)0,&p_1105->g_267,&p_1105->g_285,&p_1105->g_267,(void*)0,(void*)0,&p_1105->g_267,&p_1105->g_285,&p_1105->g_267},{(void*)0,&p_1105->g_267,&p_1105->g_285,&p_1105->g_267,(void*)0,(void*)0,&p_1105->g_267,&p_1105->g_285,&p_1105->g_267}};
    int32_t *l_605[8] = {&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542,&l_542};
    int32_t *l_606 = &p_1105->g_11;
    int i, j;
    for (p_1105->g_197 = 18; (p_1105->g_197 <= (-9)); p_1105->g_197--)
    { /* block id: 187 */
        uint32_t *l_489 = &p_1105->g_267;
        int32_t l_520[4][6] = {{(-1L),0L,0x71F8D22CL,0L,(-1L),(-1L)},{(-1L),0L,0x71F8D22CL,0L,(-1L),(-1L)},{(-1L),0L,0x71F8D22CL,0L,(-1L),(-1L)},{(-1L),0L,0x71F8D22CL,0L,(-1L),(-1L)}};
        uint64_t *l_530 = &p_1105->g_245;
        uint32_t l_556[7][7][5] = {{{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L}},{{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L}},{{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L}},{{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L}},{{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L}},{{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L}},{{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L},{0xF28D8758L,0x58E1E1BDL,0UL,0x5EB21EFCL,0x23595578L}}};
        int32_t *l_572 = &p_1105->g_199;
        int i, j, k;
        for (p_1105->g_141 = 0; (p_1105->g_141 == 11); p_1105->g_141 = safe_add_func_int32_t_s_s(p_1105->g_141, 4))
        { /* block id: 190 */
            int8_t l_501 = 8L;
            VECTOR(int8_t, 4) l_515 = (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 1L), 1L);
            int32_t l_538 = (-1L);
            int32_t l_543 = (-1L);
            VECTOR(int32_t, 4) l_545 = (VECTOR(int32_t, 4))(0x467C254AL, (VECTOR(int32_t, 2))(0x467C254AL, (-1L)), (-1L));
            VECTOR(int16_t, 4) l_557 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L);
            int i;
            (*p_1105->g_486) &= (safe_rshift_func_uint8_t_u_u(l_485, 0));
            for (p_1105->g_245 = (-17); (p_1105->g_245 > 34); p_1105->g_245 = safe_add_func_uint32_t_u_u(p_1105->g_245, 4))
            { /* block id: 194 */
                int16_t *l_491 = &p_1105->g_197;
                int16_t **l_490 = &l_491;
                int32_t l_496 = 0L;
                int32_t *l_504 = &p_1105->g_147;
                uint64_t *l_521 = (void*)0;
                uint64_t *l_522 = (void*)0;
                uint64_t *l_523 = (void*)0;
                uint64_t *l_524 = (void*)0;
                uint64_t *l_525 = (void*)0;
                uint64_t *l_526 = (void*)0;
                uint64_t *l_527[2];
                uint64_t **l_531 = &l_527[0];
                int8_t *l_534 = (void*)0;
                int8_t *l_535 = &l_501;
                int32_t l_547 = 0x573E3F43L;
                uint64_t l_548 = 1UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_527[i] = (void*)0;
                (*l_504) |= (((void*)0 == l_489) != ((l_490 == (void*)0) | (safe_rshift_func_uint8_t_u_u(((*p_35) && (safe_rshift_func_uint8_t_u_s(l_496, 5))), (safe_mod_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((l_501 ^ p_1105->g_294.y), (safe_lshift_func_int8_t_s_s(1L, l_501)))), l_496))))));
                (*p_1105->g_486) |= ((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(p_1105->g_505.s42416312)))), ((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 4))(p_1105->g_506.sa9ba)), ((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))(l_507.xxxxxyxy)), ((VECTOR(uint16_t, 8))((safe_div_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(((*l_489) = (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(0UL, (FAKE_DIVERGE(p_1105->global_1_offset, get_global_id(1), 10) , (((*l_535) = ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(0x4EL, ((VECTOR(int8_t, 4))((-1L), (-1L), (-2L), 0x7CL)), ((VECTOR(int8_t, 2))(0x00L, (-3L))), (-1L))).s27)).yyyy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_515.xxyxwyyy)).s0442127516360720)).sfdc6))), ((VECTOR(int8_t, 8))(0x37L, (l_507.y & (safe_mul_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(GROUP_DIVERGE(1, 1), (l_507.y <= l_520[1][5]), 0x3E4B4485L, 6UL)).z, 0x1C441F53L)) & l_507.x) > (p_1105->g_218.x++)), ((l_530 != ((*l_531) = l_524)) == (safe_lshift_func_uint16_t_u_u(p_1105->g_145.s7, GROUP_DIVERGE(0, 1))))))), (-1L), 4L, (-1L), 8L, (-1L), 0x7FL)).even))).w) && (-1L))))), p_1105->g_111.s1))))), l_520[1][5])), p_1105->g_505.s7, ((VECTOR(uint16_t, 2))(0xDD83L)), ((VECTOR(uint16_t, 2))(0x8CDCL)), 65531UL, 65531UL))))).odd, ((VECTOR(uint16_t, 4))(0x2EE5L))))).xzyxxyyw, ((VECTOR(uint16_t, 8))(0x7321L))))), ((VECTOR(uint16_t, 8))(9UL))))).s25, ((VECTOR(uint16_t, 2))(0xBDC4L))))), 0x846AL, 9UL)).w ^ (*l_504)) , 0L);
                for (l_485 = 0; (l_485 <= 4); l_485 = safe_add_func_int64_t_s_s(l_485, 7))
                { /* block id: 203 */
                    int32_t *l_539 = (void*)0;
                    int32_t *l_540 = &l_520[3][1];
                    int32_t *l_541[9][1] = {{&p_1105->g_26},{&p_1105->g_26},{&p_1105->g_26},{&p_1105->g_26},{&p_1105->g_26},{&p_1105->g_26},{&p_1105->g_26},{&p_1105->g_26},{&p_1105->g_26}};
                    uint8_t *l_553 = &p_1105->g_91[2];
                    int16_t *l_566 = (void*)0;
                    int16_t *l_567[3];
                    uint8_t *l_568 = (void*)0;
                    uint8_t *l_569 = (void*)0;
                    uint8_t *l_570[4];
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_567[i] = (void*)0;
                    for (i = 0; i < 4; i++)
                        l_570[i] = (void*)0;
                    --l_548;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_1105->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 168)), permutations[(safe_mod_func_uint32_t_u_u(((~((p_1105->g_278.s4 &= (((((safe_mod_func_uint32_t_u_u(p_1105->g_298.x, ((((0x6539E7E3L >= (((*l_553) = 255UL) , ((safe_rshift_func_int8_t_s_s(l_556[4][5][1], (*l_504))) || 0L))) == ((((((((VECTOR(int16_t, 8))(l_557.zwyyzxzy)).s5 ^ 0xFE9AL) == (l_520[1][5] = (safe_add_func_int16_t_s_s((((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((*l_504), 7)), (safe_sub_func_uint32_t_u_u(0UL, (*l_504))))) & (*l_540)) != (-4L)), GROUP_DIVERGE(1, 1))))) <= p_1105->g_505.s7) < l_515.x) & l_557.y) == 0xA620L)) >= 0x77C5B3F7L) , l_520[1][5]))) != 0x6CD07FCCL) , p_1105->g_comm_values[p_1105->tid]) , (-6L)) , p_1105->g_102.y)) , 0L)) , l_557.z), 10))][(safe_mod_func_uint32_t_u_u(p_1105->tid, 168))]));
                }
            }
            (*p_1105->g_571) = &l_544;
            (*p_1105->g_299) = (*p_1105->g_299);
        }
        (*l_572) |= 0x662BABAAL;
    }
    l_546 = (((((VECTOR(int32_t, 4))(p_1105->g_573.xxyy)).w , 0x0DL) ^ l_544) && ((*l_576) = ((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 16))(p_1105->g_574.s4516425743221402)).odd, ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0UL, 1UL)), 0x5AL, 0x90L)).xzzwxwzywxyzywwy)).lo, ((VECTOR(uint8_t, 4))(l_575.s5301)).zyxywzzx)))))).s6));
    (*l_577) = &l_542;
    (**l_577) = ((((((((**l_577) | (safe_mod_func_int16_t_s_s((((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 16))(l_580.s1587a81ddb504462)).s4887, ((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 4))(p_1105->g_581.s5f5e)).xyxzywxwxwxxwxyx, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 2))(p_1105->g_582.yz)).yxyyxxxy, ((VECTOR(uint8_t, 16))(p_1105->g_583.safd04b66691a4122)).even))).s0, 6UL, 0x01L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 8))(1UL, (safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((-1L), (safe_lshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((**l_577), ((safe_div_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(GROUP_DIVERGE(0, 1))), (p_1105->g_337.s2 , (safe_rshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((**l_577), (**l_577))) >= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(p_1105->g_599.zyxy)).hi, ((VECTOR(int32_t, 4))(6L, (safe_div_func_int32_t_s_s((safe_mod_func_int64_t_s_s((**l_577), 0xC94B606311F93C51L)), (*p_37))), 0x1235194FL, 0x6B6A4851L)).hi))).yxyx)).y), 1))))) | (**l_577)))), 4)))), p_1105->g_112.s3)), ((VECTOR(uint8_t, 2))(1UL)), (**l_577), 254UL, 249UL, 0x3EL)).lo, ((VECTOR(uint8_t, 4))(255UL)), ((VECTOR(uint8_t, 4))(0xE1L))))).odd)), 0xC3L, ((VECTOR(uint8_t, 4))(255UL)), 246UL, 0x46L, ((VECTOR(uint8_t, 4))(253UL)))).sfa)).yyyy, ((VECTOR(uint8_t, 4))(0x32L))))).wxwwwywywzwwxzww))).s96c7))), ((VECTOR(uint16_t, 4))(4UL))))), (**l_577), ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 4))(65529UL)), 1UL, 65535UL, (**l_577), 0xDAA5L, 65535UL)).sd && (**l_577)) && (**l_577)) & (**l_577)), 65535UL))) , 0UL) ^ (**l_577)) < (**l_577)) , l_604[0][7]) != &p_1105->g_267) == p_1105->g_285);
    return l_606;
}


/* ------------------------------------------ */
/* 
 * reads : p_1105->g_7 p_1105->g_2 p_1105->g_91 p_1105->g_26 p_1105->g_102 p_1105->g_comm_values p_1105->g_111 p_1105->g_112 p_1105->g_128 p_1105->g_145 p_1105->g_147 p_1105->l_comm_values p_1105->g_167 p_1105->g_239 p_1105->g_245 p_1105->g_199 p_1105->g_301 p_1105->g_3 p_1105->g_331 p_1105->g_335 p_1105->g_337 p_1105->g_267 p_1105->g_363 p_1105->g_218 p_1105->g_302 p_1105->g_278 p_1105->g_381 p_1105->g_281 p_1105->g_313 p_1105->g_443
 * writes: p_1105->g_91 p_1105->g_26 p_1105->g_147 p_1105->g_199 p_1105->g_218 p_1105->g_222 p_1105->g_224 p_1105->g_145 p_1105->g_200 p_1105->g_245 p_1105->g_302 p_1105->g_301 p_1105->l_comm_values p_1105->g_267 p_1105->g_141 p_1105->g_197 p_1105->g_331 p_1105->g_441 p_1105->g_442 p_1105->g_443
 */
int32_t * func_38(int32_t * p_39, struct S0 * p_1105)
{ /* block id: 21 */
    uint64_t l_42[10][8][1] = {{{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L}},{{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L}},{{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L}},{{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L}},{{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L}},{{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L}},{{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L}},{{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L}},{{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L}},{{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L},{0x2AC96AAE11E54637L}}};
    int32_t *l_47 = &p_1105->g_7;
    uint32_t l_49 = 0xFF2F0833L;
    VECTOR(uint16_t, 4) l_71 = (VECTOR(uint16_t, 4))(0x3C2AL, (VECTOR(uint16_t, 2))(0x3C2AL, 1UL), 1UL);
    int32_t **l_444 = (void*)0;
    int16_t *l_459 = (void*)0;
    int16_t *l_460 = (void*)0;
    int16_t *l_461 = &p_1105->g_197;
    int32_t l_468 = (-1L);
    int32_t *l_469[1][1];
    int32_t l_470 = 0x57FA7E8AL;
    int32_t l_471 = (-2L);
    int64_t l_472 = 1L;
    int32_t l_473 = (-3L);
    uint16_t l_474[10];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_469[i][j] = (void*)0;
    }
    for (i = 0; i < 10; i++)
        l_474[i] = 0x236CL;
    l_468 = ((l_42[5][7][0] & (func_43(l_47, &p_1105->g_3, ((safe_unary_minus_func_int8_t_s(((l_49 && (((*l_461) = ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(0x69L, 0x5FL, (safe_div_func_int64_t_s_s((safe_div_func_int8_t_s_s((*l_47), (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((((safe_div_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), ((safe_lshift_func_uint8_t_u_u(250UL, func_62(p_1105->g_2[3], func_65((p_39 = func_69(((*l_47) ^ ((VECTOR(uint16_t, 8))(l_71.zywzzxwx)).s4), p_1105)), p_1105->g_313.s4, (*l_47), p_1105), p_1105))) || (*l_47)))) , (*p_39)) & (*l_47)) , 0x741DL), GROUP_DIVERGE(0, 1))), (*l_47))))), (-1L))), 0x3BL, 0L, ((VECTOR(int8_t, 2))((-1L))), (*l_47), 0L, (-1L), ((VECTOR(int8_t, 2))(0x2DL)), 1L, 7L, 0x71L, 0x45L)).even)), ((VECTOR(uint8_t, 8))(1UL))))).s7) == (*l_47))) == p_1105->g_337.sc))) & 0xF4B106B966C4C95DL), p_1105) >= p_1105->g_111.s7)) , (*l_47));
    ++l_474[7];
    return p_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_1105->g_218
 * writes:
 */
uint32_t  func_43(int32_t * p_44, int32_t * p_45, int32_t  p_46, struct S0 * p_1105)
{ /* block id: 178 */
    int32_t *l_462 = (void*)0;
    int32_t *l_463 = &p_1105->g_199;
    int32_t *l_464[3][4][1];
    uint16_t l_465[7][8][4] = {{{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL}},{{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL}},{{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL}},{{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL}},{{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL}},{{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL}},{{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL},{0x1EDBL,0x9473L,9UL,0xDD7DL}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_464[i][j][k] = &p_1105->g_26;
        }
    }
    --l_465[0][1][1];
    return p_1105->g_218.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_1105->g_91 p_1105->g_26 p_1105->g_7 p_1105->g_128 p_1105->g_2
 * writes: p_1105->g_91 p_1105->g_26
 */
uint8_t  func_62(uint32_t  p_63, uint32_t  p_64, struct S0 * p_1105)
{ /* block id: 172 */
    VECTOR(int32_t, 4) l_454 = (VECTOR(int32_t, 4))(0x1F6099B5L, (VECTOR(int32_t, 2))(0x1F6099B5L, 0L), 0L);
    int32_t l_455 = 0x23BCBC5DL;
    uint32_t l_456[4][5][4] = {{{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL}},{{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL}},{{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL}},{{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL},{0xC67D870BL,4294967290UL,4294967295UL,4294967295UL}}};
    int32_t *l_457[8];
    int64_t **l_458[5][4][9] = {{{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363},{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363},{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363},{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363}},{{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363},{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363},{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363},{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363}},{{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363},{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363},{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363},{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363}},{{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363},{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363},{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363},{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363}},{{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363},{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363},{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363},{(void*)0,&p_1105->g_363,(void*)0,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,&p_1105->g_363,(void*)0,&p_1105->g_363}}};
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_457[i] = &p_1105->g_26;
    l_455 ^= l_454.y;
    l_457[2] = func_78(&l_455, &l_455, l_456[0][0][1], &l_455, p_1105);
    l_458[1][3][6] = l_458[1][3][6];
    return p_1105->g_2[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1105->g_281
 * writes:
 */
uint32_t  func_65(int32_t * p_66, uint8_t  p_67, uint32_t  p_68, struct S0 * p_1105)
{ /* block id: 169 */
    int32_t *l_445 = &p_1105->g_26;
    int32_t *l_446 = &p_1105->g_199;
    int32_t l_447 = (-9L);
    int32_t *l_448[7];
    int32_t l_449 = (-9L);
    int16_t l_450 = 0x6EBBL;
    uint32_t l_451[4][3][9] = {{{0UL,4294967287UL,1UL,0x0A5E2D5EL,0x28221DE4L,0UL,0x0A5E2D5EL,0x130DBBA3L,0x0A5E2D5EL},{0UL,4294967287UL,1UL,0x0A5E2D5EL,0x28221DE4L,0UL,0x0A5E2D5EL,0x130DBBA3L,0x0A5E2D5EL},{0UL,4294967287UL,1UL,0x0A5E2D5EL,0x28221DE4L,0UL,0x0A5E2D5EL,0x130DBBA3L,0x0A5E2D5EL}},{{0UL,4294967287UL,1UL,0x0A5E2D5EL,0x28221DE4L,0UL,0x0A5E2D5EL,0x130DBBA3L,0x0A5E2D5EL},{0UL,4294967287UL,1UL,0x0A5E2D5EL,0x28221DE4L,0UL,0x0A5E2D5EL,0x130DBBA3L,0x0A5E2D5EL},{0UL,4294967287UL,1UL,0x0A5E2D5EL,0x28221DE4L,0UL,0x0A5E2D5EL,0x130DBBA3L,0x0A5E2D5EL}},{{0UL,4294967287UL,1UL,0x0A5E2D5EL,0x28221DE4L,0UL,0x0A5E2D5EL,0x130DBBA3L,0x0A5E2D5EL},{0UL,4294967287UL,1UL,0x0A5E2D5EL,0x28221DE4L,0UL,0x0A5E2D5EL,0x130DBBA3L,0x0A5E2D5EL},{0UL,4294967287UL,1UL,0x0A5E2D5EL,0x28221DE4L,0UL,0x0A5E2D5EL,0x130DBBA3L,0x0A5E2D5EL}},{{0UL,4294967287UL,1UL,0x0A5E2D5EL,0x28221DE4L,0UL,0x0A5E2D5EL,0x130DBBA3L,0x0A5E2D5EL},{0UL,4294967287UL,1UL,0x0A5E2D5EL,0x28221DE4L,0UL,0x0A5E2D5EL,0x130DBBA3L,0x0A5E2D5EL},{0UL,4294967287UL,1UL,0x0A5E2D5EL,0x28221DE4L,0UL,0x0A5E2D5EL,0x130DBBA3L,0x0A5E2D5EL}}};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_448[i] = &l_447;
    --l_451[2][1][7];
    return p_1105->g_281.s0;
}


/* ------------------------------------------ */
/* 
 * reads : p_1105->g_7 p_1105->g_91 p_1105->g_26 p_1105->g_102 p_1105->g_comm_values p_1105->g_111 p_1105->g_112 p_1105->g_128 p_1105->g_145 p_1105->g_147 p_1105->l_comm_values p_1105->g_167 p_1105->g_239 p_1105->g_245 p_1105->g_199 p_1105->g_301 p_1105->g_3 p_1105->g_331 p_1105->g_335 p_1105->g_337 p_1105->g_267 p_1105->g_363 p_1105->g_218 p_1105->g_302 p_1105->g_278 p_1105->g_381 p_1105->g_281 p_1105->g_313 p_1105->g_443
 * writes: p_1105->g_91 p_1105->g_26 p_1105->g_147 p_1105->g_199 p_1105->g_218 p_1105->g_222 p_1105->g_224 p_1105->g_145 p_1105->g_200 p_1105->g_245 p_1105->g_302 p_1105->g_301 p_1105->l_comm_values p_1105->g_267 p_1105->g_141 p_1105->g_197 p_1105->g_331 p_1105->g_441 p_1105->g_442 p_1105->g_443
 */
int32_t * func_69(uint32_t  p_70, struct S0 * p_1105)
{ /* block id: 22 */
    int32_t *l_83 = &p_1105->g_7;
    int32_t **l_439 = (void*)0;
    int32_t **l_440[1];
    int i;
    for (i = 0; i < 1; i++)
        l_440[i] = (void*)0;
    p_1105->g_443 |= (safe_sub_func_uint8_t_u_u(((((p_1105->g_441 = (p_1105->g_331 = func_76(func_78(&p_1105->g_26, l_83, (*l_83), l_83, p_1105), p_1105))) == (p_1105->g_442[1][3] = &p_1105->g_7)) ^ (p_70 >= (p_1105->g_313.s2 != p_70))) , 0x3CL), 3UL));
    return &p_1105->g_199;
}


/* ------------------------------------------ */
/* 
 * reads : p_1105->g_26 p_1105->g_91 p_1105->g_145 p_1105->g_147 p_1105->l_comm_values p_1105->g_167 p_1105->g_239 p_1105->g_112 p_1105->g_245 p_1105->g_199 p_1105->g_301 p_1105->g_3 p_1105->g_331 p_1105->g_111 p_1105->g_335 p_1105->g_337 p_1105->g_7 p_1105->g_267 p_1105->g_363 p_1105->g_218 p_1105->g_302 p_1105->g_278 p_1105->g_381 p_1105->g_281
 * writes: p_1105->g_26 p_1105->g_147 p_1105->g_199 p_1105->g_218 p_1105->g_222 p_1105->g_224 p_1105->g_145 p_1105->g_200 p_1105->g_245 p_1105->g_302 p_1105->g_301 p_1105->l_comm_values p_1105->g_267 p_1105->g_141 p_1105->g_197
 */
int32_t * func_76(int32_t * p_77, struct S0 * p_1105)
{ /* block id: 42 */
    uint8_t l_151 = 4UL;
    int64_t l_170 = 0x09B66F1515BE2F3EL;
    int16_t *l_175 = (void*)0;
    int32_t l_219 = 0x2D676504L;
    VECTOR(int32_t, 2) l_270 = (VECTOR(int32_t, 2))(0x547FC097L, 0x0415487DL);
    VECTOR(int16_t, 2) l_306 = (VECTOR(int16_t, 2))(0x3D0EL, 0x5C62L);
    uint32_t l_315 = 0UL;
    int32_t l_329 = 1L;
    int32_t *l_330 = &p_1105->g_3;
    VECTOR(int64_t, 4) l_334 = (VECTOR(int64_t, 4))(0x68B74DEC6D6CFC31L, (VECTOR(int64_t, 2))(0x68B74DEC6D6CFC31L, 1L), 1L);
    int32_t **l_340 = &p_1105->g_302;
    VECTOR(int64_t, 2) l_341 = (VECTOR(int64_t, 2))(0x1A099435AAB0AD89L, 0x6E870CC951B4430AL);
    int64_t l_357 = 0x67D51CBB78CD3082L;
    VECTOR(uint16_t, 8) l_362 = (VECTOR(uint16_t, 8))(0xD75DL, (VECTOR(uint16_t, 4))(0xD75DL, (VECTOR(uint16_t, 2))(0xD75DL, 0xDEF5L), 0xDEF5L), 0xDEF5L, 0xD75DL, 0xDEF5L);
    VECTOR(int16_t, 8) l_386 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L));
    int i;
    for (p_1105->g_26 = 20; (p_1105->g_26 == (-5)); --p_1105->g_26)
    { /* block id: 45 */
        int64_t l_148 = 0x09144ECA2155B11BL;
        int16_t *l_156[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t *l_172 = &p_1105->g_141;
        int32_t l_196 = (-4L);
        uint64_t *l_217 = (void*)0;
        int64_t *l_229 = (void*)0;
        int64_t *l_230 = (void*)0;
        int64_t *l_231 = (void*)0;
        int64_t *l_232 = (void*)0;
        int64_t *l_233 = (void*)0;
        int32_t *l_236 = (void*)0;
        int16_t l_242 = 8L;
        uint16_t *l_243 = &p_1105->g_200;
        uint64_t *l_244 = &p_1105->g_245;
        int32_t *l_246 = &p_1105->g_199;
        int i;
        if ((0xF70A894EA7FDE322L <= (p_1105->g_91[4] || 0L)))
        { /* block id: 46 */
            int32_t *l_146[10][10] = {{(void*)0,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,(void*)0,&p_1105->g_11,(void*)0,&p_1105->g_7},{(void*)0,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,(void*)0,&p_1105->g_11,(void*)0,&p_1105->g_7},{(void*)0,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,(void*)0,&p_1105->g_11,(void*)0,&p_1105->g_7},{(void*)0,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,(void*)0,&p_1105->g_11,(void*)0,&p_1105->g_7},{(void*)0,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,(void*)0,&p_1105->g_11,(void*)0,&p_1105->g_7},{(void*)0,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,(void*)0,&p_1105->g_11,(void*)0,&p_1105->g_7},{(void*)0,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,(void*)0,&p_1105->g_11,(void*)0,&p_1105->g_7},{(void*)0,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,(void*)0,&p_1105->g_11,(void*)0,&p_1105->g_7},{(void*)0,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,(void*)0,&p_1105->g_11,(void*)0,&p_1105->g_7},{(void*)0,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,&p_1105->g_147,&p_1105->g_26,(void*)0,&p_1105->g_11,(void*)0,&p_1105->g_7}};
            int i, j;
            l_148 ^= ((VECTOR(int32_t, 2))(p_1105->g_145.s33)).odd;
        }
        else
        { /* block id: 48 */
            int8_t *l_171 = (void*)0;
            int16_t *l_173[2];
            int16_t **l_174 = &l_173[0];
            uint16_t *l_176 = (void*)0;
            int32_t l_177 = 6L;
            uint32_t l_178 = 4294967295UL;
            int32_t *l_179 = &p_1105->g_147;
            int8_t **l_181 = (void*)0;
            int8_t ***l_180 = &l_181;
            int8_t *l_186 = (void*)0;
            uint32_t *l_195[5];
            int32_t l_198[1][6] = {{0L,0L,0L,0L,0L,0L}};
            uint16_t *l_205 = &p_1105->g_200;
            int32_t *l_208 = &l_196;
            int32_t *l_211 = (void*)0;
            int32_t *l_212 = &p_1105->g_199;
            int i, j;
            for (i = 0; i < 2; i++)
                l_173[i] = (void*)0;
            for (i = 0; i < 5; i++)
                l_195[i] = &l_178;
            if (p_1105->g_145.s1)
                break;
            (*l_179) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((((1UL || (safe_rshift_func_uint8_t_u_u(p_1105->g_145.s3, 0))) , (l_177 = (p_1105->g_11 && (((l_151 < (safe_div_func_int64_t_s_s((safe_sub_func_int64_t_s_s((((l_156[2] != ((*l_174) = (((safe_div_func_int16_t_s_s((((((safe_mod_func_int64_t_s_s(((safe_div_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 8))(0x5AL, 0L, (safe_lshift_func_int8_t_s_u((p_1105->g_91[6] , ((VECTOR(int8_t, 16))(p_1105->g_167.se7149c65317659b8)).s0), 1)), 0x6EL, ((VECTOR(int8_t, 4))(0x08L, (p_1105->g_3 <= (safe_add_func_uint64_t_u_u(p_1105->g_102.x, ((*p_77) > 1L)))), 0x26L, 0x1FL)))).s2653477171116114, ((VECTOR(int8_t, 16))(0x19L))))).s0, l_151)) < p_1105->g_comm_values[p_1105->tid]), l_170)) , p_1105->g_141), p_1105->g_167.s1)) , 1UL) <= p_1105->g_11) , l_171) != l_172), 1L)) < l_148) , l_173[0]))) != p_1105->g_91[6]) , l_148), l_148)), l_148))) , l_175) != l_175)))) | p_1105->g_111.sf) || 0xEA20A022L), l_178, 2L, 0x5D1E987FL)).ywzxxyww)).s2355602410543001)).sa;
            (*l_180) = &l_172;
            (*l_179) = (((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967294UL, 0x7E268B21L)), 0xF5671728L, 0xEC8503F6L)).z, (((((*l_179) , (p_1105->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1105->tid, 168))] , l_186)) != ((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(((*l_212) = (((VECTOR(int32_t, 16))(0x0F2B3A50L, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(1L, ((0xB1666AC2L >= (p_1105->g_200--)) != (0x7CL || p_1105->g_26)), (+((safe_mul_func_uint16_t_u_u(((*l_205)++), p_1105->g_comm_values[p_1105->tid])) , ((*l_208) = p_1105->g_112.s1))), 0x727A7921L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((safe_mod_func_int32_t_s_s(((*l_208) = 1L), l_151)), (-7L), 0x3CB9D369L, 0L)), ((VECTOR(int32_t, 2))(0x2ACADE10L)), 0L, 0x517FABF1L)))), 0L, 0x2FEAE699L, 3L, (-4L))).s524d, ((VECTOR(int32_t, 4))((-6L)))))), 4L, ((VECTOR(int32_t, 8))(0x655EC79DL)), 3L, 1L)).s7 && l_151)), l_151)) >= 1UL) < p_1105->g_167.s7), 0x0FL)) , p_1105->g_91[6]) || 2L), 4)), l_148)) , (void*)0)) != p_1105->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1105->tid, 168))]) && 0xF225372B5BDE4875L))), 0)) < l_148) < 4L);
        }
        (*l_246) &= (l_170 != (safe_rshift_func_uint16_t_u_u((((l_151 | (((safe_add_func_uint64_t_u_u((l_219 = (p_1105->g_218.w = p_1105->g_91[2])), 0x0159FC88F511497DL)) < (l_148 <= ((safe_mul_func_int8_t_s_s(((p_1105->g_222 = (void*)0) == (p_1105->g_224 = &l_172)), (safe_sub_func_int64_t_s_s((l_196 = (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(1UL, 65535UL)).odd, FAKE_DIVERGE(p_1105->global_0_offset, get_global_id(0), 10)))), ((*l_244) |= (safe_div_func_uint8_t_u_u((((~(p_1105->g_145.s3 = (p_1105->g_147 = 0L))) & (GROUP_DIVERGE(1, 1) ^ (safe_add_func_uint16_t_u_u(((*l_243) = ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 16))(0x86E7L, 0x582BL, 0xB190L, 0xEC8AL, ((VECTOR(uint16_t, 4))(p_1105->g_239.xxxx)), (((safe_div_func_int32_t_s_s(0x79600122L, l_242)) > p_1105->g_197) | FAKE_DIVERGE(p_1105->group_1_offset, get_group_id(1), 10)), 0xCACFL, p_1105->g_167.s6, 65528UL, l_170, ((VECTOR(uint16_t, 2))(0xBE7CL)), 0x2C3EL)).sb71c))), ((VECTOR(uint16_t, 4))(0x4C7EL)), ((VECTOR(uint16_t, 4))(0UL))))), ((VECTOR(uint16_t, 4))(4UL))))).y), p_1105->g_239.x)))) , 254UL), p_1105->g_112.s2))))))) | p_1105->g_91[2]))) || (-6L))) <= (-1L)) < l_151), 13)));
    }
    for (l_170 = 0; (l_170 > (-8)); l_170--)
    { /* block id: 74 */
        uint64_t l_271 = 0x3A62AC4F3AD51C2BL;
        int32_t l_274 = 0x2ED9C985L;
        VECTOR(int32_t, 8) l_293 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x0497D294L), 0x0497D294L), 0x0497D294L, 4L, 0x0497D294L);
        VECTOR(int32_t, 16) l_295 = (VECTOR(int32_t, 16))(0x75D2330DL, (VECTOR(int32_t, 4))(0x75D2330DL, (VECTOR(int32_t, 2))(0x75D2330DL, 1L), 1L), 1L, 0x75D2330DL, 1L, (VECTOR(int32_t, 2))(0x75D2330DL, 1L), (VECTOR(int32_t, 2))(0x75D2330DL, 1L), 0x75D2330DL, 1L, 0x75D2330DL, 1L);
        int32_t l_307[1];
        int64_t l_314 = 0x1F073165418699DDL;
        VECTOR(uint32_t, 4) l_318 = (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 9UL), 9UL);
        int8_t *l_325[10][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        VECTOR(int64_t, 16) l_328 = (VECTOR(int64_t, 16))(0x46B99193B4A5A0E8L, (VECTOR(int64_t, 4))(0x46B99193B4A5A0E8L, (VECTOR(int64_t, 2))(0x46B99193B4A5A0E8L, 0x2BCB6428841D29F5L), 0x2BCB6428841D29F5L), 0x2BCB6428841D29F5L, 0x46B99193B4A5A0E8L, 0x2BCB6428841D29F5L, (VECTOR(int64_t, 2))(0x46B99193B4A5A0E8L, 0x2BCB6428841D29F5L), (VECTOR(int64_t, 2))(0x46B99193B4A5A0E8L, 0x2BCB6428841D29F5L), 0x46B99193B4A5A0E8L, 0x2BCB6428841D29F5L, 0x46B99193B4A5A0E8L, 0x2BCB6428841D29F5L);
        int i, j;
        for (i = 0; i < 1; i++)
            l_307[i] = (-1L);
        (1 + 1);
    }
    (*p_1105->g_301) = p_77;
    if ((*l_330))
    { /* block id: 100 */
        return p_1105->g_331;
    }
    else
    { /* block id: 102 */
        VECTOR(int64_t, 8) l_336 = (VECTOR(int64_t, 8))(0x2C63732188C2A2C8L, (VECTOR(int64_t, 4))(0x2C63732188C2A2C8L, (VECTOR(int64_t, 2))(0x2C63732188C2A2C8L, (-1L)), (-1L)), (-1L), 0x2C63732188C2A2C8L, (-1L));
        VECTOR(int64_t, 4) l_338 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0L), 0L);
        int32_t ***l_339[9] = {&p_1105->g_301,&p_1105->g_301,&p_1105->g_301,&p_1105->g_301,&p_1105->g_301,&p_1105->g_301,&p_1105->g_301,&p_1105->g_301,&p_1105->g_301};
        VECTOR(int64_t, 16) l_342 = (VECTOR(int64_t, 16))(0x71445092B7236DD7L, (VECTOR(int64_t, 4))(0x71445092B7236DD7L, (VECTOR(int64_t, 2))(0x71445092B7236DD7L, 0x07B3AF85561B8B1EL), 0x07B3AF85561B8B1EL), 0x07B3AF85561B8B1EL, 0x71445092B7236DD7L, 0x07B3AF85561B8B1EL, (VECTOR(int64_t, 2))(0x71445092B7236DD7L, 0x07B3AF85561B8B1EL), (VECTOR(int64_t, 2))(0x71445092B7236DD7L, 0x07B3AF85561B8B1EL), 0x71445092B7236DD7L, 0x07B3AF85561B8B1EL, 0x71445092B7236DD7L, 0x07B3AF85561B8B1EL);
        int64_t *l_347[3][7];
        int8_t *l_355 = (void*)0;
        int8_t *l_356 = &p_1105->g_141;
        int64_t **l_364 = &l_347[1][1];
        uint8_t *l_368 = &l_151;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 7; j++)
                l_347[i][j] = (void*)0;
        }
        l_357 = ((safe_div_func_int64_t_s_s(p_1105->g_111.s8, ((VECTOR(int64_t, 16))((*l_330), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_334.yyyw)).even)))), ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(p_1105->g_335.s0a)))))).xxyy)).odd, ((VECTOR(int64_t, 2))(l_336.s42))))), 0x02BF1843BA7C9AF6L, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 16))(p_1105->g_337.s155ff02b2b3ac4c7)).sbad7, ((VECTOR(int64_t, 2))(l_338.wx)).xyyy))).wxxxxzyzxwwwxzwx)).odd)), 0x396082E34D3533CDL, 0x3DCB248732D33CDCL)).sb)) != (((VECTOR(int64_t, 8))(((p_1105->g_301 = (void*)0) == (l_340 = &p_77)), ((VECTOR(int64_t, 2))(0x6DF7F2D519988264L, 0L)), ((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 8))(l_341.xyxyyyyy)), ((VECTOR(int64_t, 16))(0x42CE1F16F2CCC6C4L, 0x731303EB0F610E57L, ((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 2))(l_342.s9e)), ((VECTOR(int64_t, 8))((safe_lshift_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(((0x3A13L && (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x39D73764L, 6L)).xxxyxxxy)).s7 > ((((p_1105->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1105->tid, 168))] = (**l_340)) == (0x37L < ((*l_356) = (safe_sub_func_uint64_t_u_u(((l_270.x ^= (*p_1105->g_331)) > (safe_unary_minus_func_uint16_t_u((safe_mod_func_uint32_t_u_u((p_1105->g_267++), (*p_77)))))), 3UL))))) , 1UL) && (**l_340)))) , 0x5909L), (**l_340))) & (**l_340)) < (*p_77)), 6)), p_1105->g_239.x, 4L, ((VECTOR(int64_t, 4))(0x62FABED10270BE5BL)), 6L)).s66))), 2L, 0x349FD2A4C82FF227L, ((VECTOR(int64_t, 8))(1L)), 3L, 0x20D4CE72C01D06B3L)).odd))).even, ((VECTOR(int64_t, 4))(0x70D57D6955882E92L)), ((VECTOR(int64_t, 4))(0x31FD890B7200C27FL))))), 0x48733DA6A2FACD48L)).s1 >= FAKE_DIVERGE(p_1105->group_1_offset, get_group_id(1), 10)));
        p_1105->g_26 |= (((**l_340) & (-5L)) , (((((safe_mod_func_int16_t_s_s(p_1105->g_111.s8, ((safe_mul_func_int8_t_s_s((((VECTOR(uint64_t, 2))(0xD3A3771D502BB492L, 7UL)).lo != (((VECTOR(uint16_t, 16))(l_362.s5372517431413273)).s6 & ((+(p_1105->g_363 != ((*l_364) = p_1105->g_363))) == ((*p_1105->g_331) = (safe_unary_minus_func_uint16_t_u(0x1610L)))))), (((*l_330) ^ (*l_330)) | (((((((*l_368) = (**l_340)) || (**l_340)) | (-1L)) & 0L) >= p_1105->g_218.w) , (*l_330))))) || (*l_330)))) , p_1105->g_3) , 0x16L) , (*p_1105->g_302)) && p_1105->g_278.s1));
        for (l_329 = 0; (l_329 <= 17); ++l_329)
        { /* block id: 116 */
            return p_77;
        }
        for (l_315 = 9; (l_315 >= 32); l_315++)
        { /* block id: 121 */
            uint8_t l_384 = 0x7DL;
            uint64_t *l_391 = (void*)0;
            int32_t *l_394[7] = {&p_1105->g_7,&p_1105->g_7,&p_1105->g_7,&p_1105->g_7,&p_1105->g_7,&p_1105->g_7,&p_1105->g_7};
            int i;
            if ((atomic_inc(&p_1105->g_atomic_input[54 * get_linear_group_id() + 32]) == 7))
            { /* block id: 123 */
                int32_t l_374 = 4L;
                int32_t *l_373 = &l_374;
                int32_t *l_375 = &l_374;
                int32_t *l_376 = &l_374;
                l_376 = (l_375 = l_373);
                unsigned int result = 0;
                result += l_374;
                atomic_add(&p_1105->g_special_values[54 * get_linear_group_id() + 32], result);
            }
            else
            { /* block id: 126 */
                (1 + 1);
            }
            (*p_1105->g_331) = (safe_sub_func_uint8_t_u_u((p_1105->g_278.s2 , ((p_1105->g_245 &= (safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(p_1105->g_381.s5d09)).y, ((((~(((safe_div_func_uint16_t_u_u(l_384, ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(p_1105->g_385.wzwxzwwyywwxxwzy)).sb2d0, ((VECTOR(int16_t, 8))((-5L), ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(4L, (-10L))).xxyy, (int16_t)(&p_1105->g_299 != (void*)0)))), ((VECTOR(int16_t, 2))(l_386.s40)), 0x0F9BL)).odd))).y)) != (*p_77)) && (!(0UL & p_1105->g_381.sf)))) == ((((((*p_77) >= (safe_mod_func_uint8_t_u_u(((*l_368) = ((((((~(safe_lshift_func_uint16_t_u_s(((l_384 < (*p_77)) < 8L), 13))) | 0x08300BC6L) <= 249UL) , l_384) <= (*l_330)) <= (*p_1105->g_331))), p_1105->g_281.s2))) != FAKE_DIVERGE(p_1105->global_1_offset, get_global_id(1), 10)) > (*l_330)) & (**l_340)) == p_1105->g_111.s7)) > (*p_1105->g_302)) , l_384)))) ^ 18446744073709551615UL)), l_384));
            if ((*l_330))
                break;
            for (p_1105->g_197 = 0; (p_1105->g_197 == 7); p_1105->g_197 = safe_add_func_uint16_t_u_u(p_1105->g_197, 7))
            { /* block id: 135 */
                (*l_340) = l_394[6];
                if ((atomic_inc(&p_1105->l_atomic_input[27]) == 4))
                { /* block id: 138 */
                    int32_t l_395 = 0L;
                    int32_t l_396 = 0x569C878DL;
                    uint32_t l_397 = 4294967295UL;
                    uint16_t l_398 = 0x25BEL;
                    int32_t l_399 = 0x239F0677L;
                    uint32_t l_400 = 0x6BDDFE50L;
                    int64_t l_403 = 0L;
                    uint32_t l_404 = 6UL;
                    int64_t l_405 = 1L;
                    int8_t l_406 = 0x21L;
                    int64_t l_407 = 0x4DB37475A7284693L;
                    uint16_t l_408 = 0x6288L;
                    uint64_t l_409 = 3UL;
                    int32_t l_410 = 7L;
                    uint16_t l_411 = 0x83EEL;
                    int32_t l_412 = (-6L);
                    int32_t l_413 = 0x583EF6DBL;
                    uint32_t l_414 = 0x657F0AEEL;
                    uint32_t l_415 = 4294967295UL;
                    uint8_t *l_417 = (void*)0;
                    uint8_t **l_416 = &l_417;
                    uint8_t **l_418 = (void*)0;
                    int32_t l_419 = 0x14387A08L;
                    uint16_t l_420 = 0x0284L;
                    VECTOR(uint32_t, 2) l_430 = (VECTOR(uint32_t, 2))(0xAF8CF039L, 0xCD3113D8L);
                    int32_t l_431 = 0L;
                    int16_t l_432 = (-10L);
                    int16_t l_433 = 0x0DDDL;
                    int16_t l_434 = (-1L);
                    int8_t l_435[4][10] = {{1L,0x7FL,0x69L,0x7AL,0x3DL,0x3DL,0x7AL,0x69L,0x7FL,1L},{1L,0x7FL,0x69L,0x7AL,0x3DL,0x3DL,0x7AL,0x69L,0x7FL,1L},{1L,0x7FL,0x69L,0x7AL,0x3DL,0x3DL,0x7AL,0x69L,0x7FL,1L},{1L,0x7FL,0x69L,0x7AL,0x3DL,0x3DL,0x7AL,0x69L,0x7FL,1L}};
                    uint64_t l_436 = 0x3367640751A05AE7L;
                    int i, j;
                    l_418 = ((((l_396 |= l_395) , (l_397 , (l_398 , ((((l_400--) , (((l_403 , (l_406 ^= (l_405 = (l_404 , (-8L))))) , l_407) , ((l_408 , (((l_409 , l_410) , l_411) , l_412)) , l_413))) , 0xCEB3L) , l_414)))) , l_415) , l_416);
                    if ((l_419 , l_420))
                    { /* block id: 144 */
                        int8_t l_421 = 1L;
                        int32_t l_423 = 0x4ED3411EL;
                        int32_t *l_422 = &l_423;
                        l_396 &= l_421;
                        l_422 = (void*)0;
                    }
                    else
                    { /* block id: 147 */
                        uint16_t l_424 = 0x7691L;
                        uint64_t l_425 = 0xC5C2E189DCD3B718L;
                        int32_t l_427[8][7] = {{(-10L),(-1L),(-1L),(-1L),(-1L),(-1L),(-10L)},{(-10L),(-1L),(-1L),(-1L),(-1L),(-1L),(-10L)},{(-10L),(-1L),(-1L),(-1L),(-1L),(-1L),(-10L)},{(-10L),(-1L),(-1L),(-1L),(-1L),(-1L),(-10L)},{(-10L),(-1L),(-1L),(-1L),(-1L),(-1L),(-10L)},{(-10L),(-1L),(-1L),(-1L),(-1L),(-1L),(-10L)},{(-10L),(-1L),(-1L),(-1L),(-1L),(-1L),(-10L)},{(-10L),(-1L),(-1L),(-1L),(-1L),(-1L),(-10L)}};
                        int32_t *l_426[3][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                        int32_t *l_428[8][8] = {{&l_427[4][0],&l_427[0][4],(void*)0,&l_427[3][3],(void*)0,&l_427[0][4],&l_427[4][0],(void*)0},{&l_427[4][0],&l_427[0][4],(void*)0,&l_427[3][3],(void*)0,&l_427[0][4],&l_427[4][0],(void*)0},{&l_427[4][0],&l_427[0][4],(void*)0,&l_427[3][3],(void*)0,&l_427[0][4],&l_427[4][0],(void*)0},{&l_427[4][0],&l_427[0][4],(void*)0,&l_427[3][3],(void*)0,&l_427[0][4],&l_427[4][0],(void*)0},{&l_427[4][0],&l_427[0][4],(void*)0,&l_427[3][3],(void*)0,&l_427[0][4],&l_427[4][0],(void*)0},{&l_427[4][0],&l_427[0][4],(void*)0,&l_427[3][3],(void*)0,&l_427[0][4],&l_427[4][0],(void*)0},{&l_427[4][0],&l_427[0][4],(void*)0,&l_427[3][3],(void*)0,&l_427[0][4],&l_427[4][0],(void*)0},{&l_427[4][0],&l_427[0][4],(void*)0,&l_427[3][3],(void*)0,&l_427[0][4],&l_427[4][0],(void*)0}};
                        int8_t l_429 = 0x52L;
                        int i, j;
                        l_412 &= l_424;
                        l_395 = l_425;
                        l_428[3][2] = l_426[1][2];
                        l_412 |= l_429;
                    }
                    l_432 = (l_431 = l_430.y);
                    ++l_436;
                    unsigned int result = 0;
                    result += l_395;
                    result += l_396;
                    result += l_397;
                    result += l_398;
                    result += l_399;
                    result += l_400;
                    result += l_403;
                    result += l_404;
                    result += l_405;
                    result += l_406;
                    result += l_407;
                    result += l_408;
                    result += l_409;
                    result += l_410;
                    result += l_411;
                    result += l_412;
                    result += l_413;
                    result += l_414;
                    result += l_415;
                    result += l_419;
                    result += l_420;
                    result += l_430.y;
                    result += l_430.x;
                    result += l_431;
                    result += l_432;
                    result += l_433;
                    result += l_434;
                    int l_435_i0, l_435_i1;
                    for (l_435_i0 = 0; l_435_i0 < 4; l_435_i0++) {
                        for (l_435_i1 = 0; l_435_i1 < 10; l_435_i1++) {
                            result += l_435[l_435_i0][l_435_i1];
                        }
                    }
                    result += l_436;
                    atomic_add(&p_1105->l_special_values[27], result);
                }
                else
                { /* block id: 156 */
                    (1 + 1);
                }
            }
        }
    }
    return p_77;
}


/* ------------------------------------------ */
/* 
 * reads : p_1105->g_91 p_1105->g_26 p_1105->g_102 p_1105->g_comm_values p_1105->g_111 p_1105->g_112 p_1105->g_7 p_1105->g_128
 * writes: p_1105->g_91 p_1105->g_26
 */
int32_t * func_78(int32_t * p_79, int32_t * p_80, uint32_t  p_81, int32_t * p_82, struct S0 * p_1105)
{ /* block id: 23 */
    int32_t *l_84 = &p_1105->g_26;
    int32_t *l_85 = &p_1105->g_26;
    int32_t *l_86 = (void*)0;
    int32_t *l_87 = &p_1105->g_26;
    int32_t *l_88 = &p_1105->g_26;
    int32_t *l_89 = &p_1105->g_26;
    int32_t *l_90[7][1];
    VECTOR(int16_t, 2) l_110 = (VECTOR(int16_t, 2))(0x1C72L, 1L);
    int64_t l_120 = 1L;
    int32_t l_121[1];
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_90[i][j] = (void*)0;
    }
    for (i = 0; i < 1; i++)
        l_121[i] = 0L;
    --p_1105->g_91[2];
    for (p_81 = (-16); (p_81 > 44); ++p_81)
    { /* block id: 27 */
        int32_t l_103 = 0x1F9AD404L;
        VECTOR(uint32_t, 8) l_113 = (VECTOR(uint32_t, 8))(0x72E7DE2CL, (VECTOR(uint32_t, 4))(0x72E7DE2CL, (VECTOR(uint32_t, 2))(0x72E7DE2CL, 0x22C1772BL), 0x22C1772BL), 0x22C1772BL, 0x72E7DE2CL, 0x22C1772BL);
        int16_t *l_118[2][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_119 = 0L;
        int i, j;
        if ((safe_mul_func_uint8_t_u_u((*l_89), (((safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(p_81, 5)), ((((((VECTOR(int16_t, 2))(p_1105->g_102.yx)).lo && l_103) & l_103) == ((safe_add_func_int64_t_s_s((((VECTOR(int16_t, 16))((l_119 = (safe_add_func_uint32_t_u_u((0x0CL != (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(0xBE1D701D6BCCD07CL, ((0x4A0CBBBBCA155E7CL | ((VECTOR(int64_t, 8))((-10L), p_1105->g_comm_values[p_1105->tid], 0L, 0x0EA76F415013F2C8L, ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_110.xyxyxxyy)).s5725127250012324)).s23fc, ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(p_1105->g_111.sb6))))).xxyy))).xzwzxxyxwzzzwyyz, ((VECTOR(uint16_t, 8))(p_1105->g_112.s77147023)).s4264255036077322))).s72, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_113.s42165313)), ((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 8))(4294967294UL, ((((-1L) & (((((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 4))(0x4616C39CF3F9EAB4L, 0x71E809F826083B57L, 0x20F4C7584E37E41BL, (-1L))).z, (safe_sub_func_uint8_t_u_u((1UL & 0x22DBL), p_81)))) , 0x7AF5C710L) , p_1105->g_comm_values[p_1105->tid]) , p_81) , (*l_85))) , FAKE_DIVERGE(p_1105->local_1_offset, get_local_id(1), 10)) < l_103), ((VECTOR(uint32_t, 2))(4294967295UL)), 0xFB248A18L, 0x6C3DA0ACL, 1UL, 0x9ED7CD51L)).hi, ((VECTOR(uint32_t, 4))(1UL))))), 4294967295UL, 0UL, 0xF8BE535DL, 0x94001E8EL)).sa3))), 0x3E185DEA65F88FA8L, 1L)).s7) <= l_113.s7), ((VECTOR(uint64_t, 4))(0x2B1B449E2533209CL)), ((VECTOR(uint64_t, 2))(0xC07D60D117829FC7L)), ((VECTOR(uint64_t, 2))(0xF0C6F3577BF9FC00L)), 0xC58EBAA32B3D10A8L, ((VECTOR(uint64_t, 4))(1UL)), 1UL)).lo)).s6133006041775706)))))).sa, 1L))), p_1105->g_91[2]))), l_120, 1L, (-1L), p_81, 0x75B1L, 0x112AL, 0x334FL, p_1105->g_102.x, 8L, ((VECTOR(int16_t, 4))(0L)), 0x6CADL, (-1L))).sa < l_121[0]), p_81)) , p_81)) > p_81))) && (*l_87)) , p_1105->g_7))))
        { /* block id: 29 */
            for (l_119 = (-24); (l_119 == 23); ++l_119)
            { /* block id: 32 */
                p_1105->g_26 ^= (p_81 && 0x721F5EDDB6F6008FL);
            }
        }
        else
        { /* block id: 35 */
            int8_t l_139 = 7L;
            int8_t *l_140[9] = {&p_1105->g_141,&p_1105->g_141,&p_1105->g_141,&p_1105->g_141,&p_1105->g_141,&p_1105->g_141,&p_1105->g_141,&p_1105->g_141,&p_1105->g_141};
            int32_t l_142 = 3L;
            int i;
            l_142 = (((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 2))((-1L), 0x3A1295E2L)).lo, ((*l_89) = (((p_81 , (safe_mod_func_int8_t_s_s(l_113.s3, 1L))) && ((((void*)0 == p_1105->g_128) != (safe_mod_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((void*)0 == p_1105->g_128), 7)) || GROUP_DIVERGE(2, 1)), p_1105->g_91[2])), (safe_mul_func_int8_t_s_s((l_119 &= ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(0x3DL, (safe_sub_func_int64_t_s_s(((((l_139 == p_81) || 0xAFC0C825L) , 18446744073709551607UL) & (-8L)), 0L)), 0x59L, 0L)).even)).lo), l_113.s0))))) <= (-9L))) , 0x69BA2161L)))) && l_119) | 0x02E0L);
        }
    }
    return p_80;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[54];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 54; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[54];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 54; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[168];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 168; i++)
            l_comm_values[i] = 1;
    struct S0 c_1106;
    struct S0* p_1105 = &c_1106;
    struct S0 c_1107 = {
        {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)}, // p_1105->g_2
        0x6158D32FL, // p_1105->g_3
        {1L,1L,1L,1L,1L,1L,1L,1L,1L,1L}, // p_1105->g_6
        1L, // p_1105->g_7
        4L, // p_1105->g_11
        (-1L), // p_1105->g_26
        {255UL,0xFCL,7UL,0xFCL,255UL,255UL,0xFCL,7UL,0xFCL,255UL}, // p_1105->g_91
        (VECTOR(int16_t, 2))(0x5D82L, (-6L)), // p_1105->g_102
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x3E71L), 0x3E71L), 0x3E71L, (-1L), 0x3E71L, (VECTOR(int16_t, 2))((-1L), 0x3E71L), (VECTOR(int16_t, 2))((-1L), 0x3E71L), (-1L), 0x3E71L, (-1L), 0x3E71L), // p_1105->g_111
        (VECTOR(uint16_t, 8))(0xA058L, (VECTOR(uint16_t, 4))(0xA058L, (VECTOR(uint16_t, 2))(0xA058L, 7UL), 7UL), 7UL, 0xA058L, 7UL), // p_1105->g_112
        (void*)0, // p_1105->g_128
        (-1L), // p_1105->g_141
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L), // p_1105->g_145
        0x35F68378L, // p_1105->g_147
        (VECTOR(int8_t, 16))(0x06L, (VECTOR(int8_t, 4))(0x06L, (VECTOR(int8_t, 2))(0x06L, 0L), 0L), 0L, 0x06L, 0L, (VECTOR(int8_t, 2))(0x06L, 0L), (VECTOR(int8_t, 2))(0x06L, 0L), 0x06L, 0L, 0x06L, 0L), // p_1105->g_167
        1L, // p_1105->g_197
        (-1L), // p_1105->g_199
        0x57A8L, // p_1105->g_200
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 1UL), 1UL), // p_1105->g_218
        (void*)0, // p_1105->g_223
        &p_1105->g_223, // p_1105->g_222
        &p_1105->g_223, // p_1105->g_224
        (VECTOR(uint16_t, 2))(1UL, 0UL), // p_1105->g_239
        0xDB5B4E78FF907EE7L, // p_1105->g_245
        1UL, // p_1105->g_267
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xD5L), 0xD5L), 0xD5L, 255UL, 0xD5L, (VECTOR(uint8_t, 2))(255UL, 0xD5L), (VECTOR(uint8_t, 2))(255UL, 0xD5L), 255UL, 0xD5L, 255UL, 0xD5L), // p_1105->g_278
        (VECTOR(uint8_t, 8))(0x80L, (VECTOR(uint8_t, 4))(0x80L, (VECTOR(uint8_t, 2))(0x80L, 0xC9L), 0xC9L), 0xC9L, 0x80L, 0xC9L), // p_1105->g_281
        5UL, // p_1105->g_285
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x16864273L), 0x16864273L), // p_1105->g_294
        (VECTOR(int32_t, 2))(3L, 0x5A247D1CL), // p_1105->g_298
        (void*)0, // p_1105->g_300
        &p_1105->g_300, // p_1105->g_299
        &p_1105->g_7, // p_1105->g_302
        &p_1105->g_302, // p_1105->g_301
        (VECTOR(int32_t, 8))(0x2A369100L, (VECTOR(int32_t, 4))(0x2A369100L, (VECTOR(int32_t, 2))(0x2A369100L, 0L), 0L), 0L, 0x2A369100L, 0L), // p_1105->g_313
        &p_1105->g_199, // p_1105->g_331
        (VECTOR(int64_t, 16))(0x16416DD6A9F36320L, (VECTOR(int64_t, 4))(0x16416DD6A9F36320L, (VECTOR(int64_t, 2))(0x16416DD6A9F36320L, 0x68DCCD0DA9D683EAL), 0x68DCCD0DA9D683EAL), 0x68DCCD0DA9D683EAL, 0x16416DD6A9F36320L, 0x68DCCD0DA9D683EAL, (VECTOR(int64_t, 2))(0x16416DD6A9F36320L, 0x68DCCD0DA9D683EAL), (VECTOR(int64_t, 2))(0x16416DD6A9F36320L, 0x68DCCD0DA9D683EAL), 0x16416DD6A9F36320L, 0x68DCCD0DA9D683EAL, 0x16416DD6A9F36320L, 0x68DCCD0DA9D683EAL), // p_1105->g_335
        (VECTOR(int64_t, 16))(0x77EEAD85ACF154E1L, (VECTOR(int64_t, 4))(0x77EEAD85ACF154E1L, (VECTOR(int64_t, 2))(0x77EEAD85ACF154E1L, (-9L)), (-9L)), (-9L), 0x77EEAD85ACF154E1L, (-9L), (VECTOR(int64_t, 2))(0x77EEAD85ACF154E1L, (-9L)), (VECTOR(int64_t, 2))(0x77EEAD85ACF154E1L, (-9L)), 0x77EEAD85ACF154E1L, (-9L), 0x77EEAD85ACF154E1L, (-9L)), // p_1105->g_337
        (void*)0, // p_1105->g_363
        (VECTOR(uint32_t, 16))(0x37FFDD9EL, (VECTOR(uint32_t, 4))(0x37FFDD9EL, (VECTOR(uint32_t, 2))(0x37FFDD9EL, 1UL), 1UL), 1UL, 0x37FFDD9EL, 1UL, (VECTOR(uint32_t, 2))(0x37FFDD9EL, 1UL), (VECTOR(uint32_t, 2))(0x37FFDD9EL, 1UL), 0x37FFDD9EL, 1UL, 0x37FFDD9EL, 1UL), // p_1105->g_381
        (VECTOR(int16_t, 4))(0x10AAL, (VECTOR(int16_t, 2))(0x10AAL, (-6L)), (-6L)), // p_1105->g_385
        &p_1105->g_26, // p_1105->g_441
        {{(void*)0,&p_1105->g_7,&p_1105->g_7,&p_1105->g_7,(void*)0},{(void*)0,&p_1105->g_7,&p_1105->g_7,&p_1105->g_7,(void*)0},{(void*)0,&p_1105->g_7,&p_1105->g_7,&p_1105->g_7,(void*)0},{(void*)0,&p_1105->g_7,&p_1105->g_7,&p_1105->g_7,(void*)0},{(void*)0,&p_1105->g_7,&p_1105->g_7,&p_1105->g_7,(void*)0}}, // p_1105->g_442
        0L, // p_1105->g_443
        &p_1105->g_26, // p_1105->g_486
        (VECTOR(uint16_t, 8))(0xCE1DL, (VECTOR(uint16_t, 4))(0xCE1DL, (VECTOR(uint16_t, 2))(0xCE1DL, 65531UL), 65531UL), 65531UL, 0xCE1DL, 65531UL), // p_1105->g_505
        (VECTOR(uint16_t, 16))(0x898AL, (VECTOR(uint16_t, 4))(0x898AL, (VECTOR(uint16_t, 2))(0x898AL, 0x2CE3L), 0x2CE3L), 0x2CE3L, 0x898AL, 0x2CE3L, (VECTOR(uint16_t, 2))(0x898AL, 0x2CE3L), (VECTOR(uint16_t, 2))(0x898AL, 0x2CE3L), 0x898AL, 0x2CE3L, 0x898AL, 0x2CE3L), // p_1105->g_506
        &p_1105->g_442[1][3], // p_1105->g_571
        (VECTOR(int32_t, 2))((-2L), 0x65085EC5L), // p_1105->g_573
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 254UL), 254UL), 254UL, 0UL, 254UL), // p_1105->g_574
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL), // p_1105->g_581
        (VECTOR(uint8_t, 4))(0x62L, (VECTOR(uint8_t, 2))(0x62L, 0x68L), 0x68L), // p_1105->g_582
        (VECTOR(uint8_t, 16))(0xCDL, (VECTOR(uint8_t, 4))(0xCDL, (VECTOR(uint8_t, 2))(0xCDL, 4UL), 4UL), 4UL, 0xCDL, 4UL, (VECTOR(uint8_t, 2))(0xCDL, 4UL), (VECTOR(uint8_t, 2))(0xCDL, 4UL), 0xCDL, 4UL, 0xCDL, 4UL), // p_1105->g_583
        (VECTOR(int32_t, 4))(0x1C2F1FF7L, (VECTOR(int32_t, 2))(0x1C2F1FF7L, 0x6CF6DEBEL), 0x6CF6DEBEL), // p_1105->g_599
        18446744073709551611UL, // p_1105->g_618
        &p_1105->g_302, // p_1105->g_624
        (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 8L), 8L), // p_1105->g_633
        (VECTOR(uint16_t, 4))(0x9163L, (VECTOR(uint16_t, 2))(0x9163L, 0x4CC2L), 0x4CC2L), // p_1105->g_681
        (VECTOR(int64_t, 2))(0x0866E55A16BCEA6CL, (-8L)), // p_1105->g_693
        (VECTOR(int16_t, 8))(0x1063L, (VECTOR(int16_t, 4))(0x1063L, (VECTOR(int16_t, 2))(0x1063L, 0x09AFL), 0x09AFL), 0x09AFL, 0x1063L, 0x09AFL), // p_1105->g_782
        (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), (-1L)), (-1L)), (-1L), (-2L), (-1L)), // p_1105->g_783
        (VECTOR(int32_t, 16))(0x57210371L, (VECTOR(int32_t, 4))(0x57210371L, (VECTOR(int32_t, 2))(0x57210371L, 0x5EC9206CL), 0x5EC9206CL), 0x5EC9206CL, 0x57210371L, 0x5EC9206CL, (VECTOR(int32_t, 2))(0x57210371L, 0x5EC9206CL), (VECTOR(int32_t, 2))(0x57210371L, 0x5EC9206CL), 0x57210371L, 0x5EC9206CL, 0x57210371L, 0x5EC9206CL), // p_1105->g_785
        (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 1UL), 1UL), // p_1105->g_786
        &p_1105->g_442[2][2], // p_1105->g_798
        0, // p_1105->v_collective
        sequence_input[get_global_id(0)], // p_1105->global_0_offset
        sequence_input[get_global_id(1)], // p_1105->global_1_offset
        sequence_input[get_global_id(2)], // p_1105->global_2_offset
        sequence_input[get_local_id(0)], // p_1105->local_0_offset
        sequence_input[get_local_id(1)], // p_1105->local_1_offset
        sequence_input[get_local_id(2)], // p_1105->local_2_offset
        sequence_input[get_group_id(0)], // p_1105->group_0_offset
        sequence_input[get_group_id(1)], // p_1105->group_1_offset
        sequence_input[get_group_id(2)], // p_1105->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 168)), permutations[0][get_linear_local_id()])), // p_1105->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1106 = c_1107;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1105);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1105->g_2[i], "p_1105->g_2[i]", print_hash_value);

    }
    transparent_crc(p_1105->g_3, "p_1105->g_3", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1105->g_6[i], "p_1105->g_6[i]", print_hash_value);

    }
    transparent_crc(p_1105->g_7, "p_1105->g_7", print_hash_value);
    transparent_crc(p_1105->g_11, "p_1105->g_11", print_hash_value);
    transparent_crc(p_1105->g_26, "p_1105->g_26", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1105->g_91[i], "p_1105->g_91[i]", print_hash_value);

    }
    transparent_crc(p_1105->g_102.x, "p_1105->g_102.x", print_hash_value);
    transparent_crc(p_1105->g_102.y, "p_1105->g_102.y", print_hash_value);
    transparent_crc(p_1105->g_111.s0, "p_1105->g_111.s0", print_hash_value);
    transparent_crc(p_1105->g_111.s1, "p_1105->g_111.s1", print_hash_value);
    transparent_crc(p_1105->g_111.s2, "p_1105->g_111.s2", print_hash_value);
    transparent_crc(p_1105->g_111.s3, "p_1105->g_111.s3", print_hash_value);
    transparent_crc(p_1105->g_111.s4, "p_1105->g_111.s4", print_hash_value);
    transparent_crc(p_1105->g_111.s5, "p_1105->g_111.s5", print_hash_value);
    transparent_crc(p_1105->g_111.s6, "p_1105->g_111.s6", print_hash_value);
    transparent_crc(p_1105->g_111.s7, "p_1105->g_111.s7", print_hash_value);
    transparent_crc(p_1105->g_111.s8, "p_1105->g_111.s8", print_hash_value);
    transparent_crc(p_1105->g_111.s9, "p_1105->g_111.s9", print_hash_value);
    transparent_crc(p_1105->g_111.sa, "p_1105->g_111.sa", print_hash_value);
    transparent_crc(p_1105->g_111.sb, "p_1105->g_111.sb", print_hash_value);
    transparent_crc(p_1105->g_111.sc, "p_1105->g_111.sc", print_hash_value);
    transparent_crc(p_1105->g_111.sd, "p_1105->g_111.sd", print_hash_value);
    transparent_crc(p_1105->g_111.se, "p_1105->g_111.se", print_hash_value);
    transparent_crc(p_1105->g_111.sf, "p_1105->g_111.sf", print_hash_value);
    transparent_crc(p_1105->g_112.s0, "p_1105->g_112.s0", print_hash_value);
    transparent_crc(p_1105->g_112.s1, "p_1105->g_112.s1", print_hash_value);
    transparent_crc(p_1105->g_112.s2, "p_1105->g_112.s2", print_hash_value);
    transparent_crc(p_1105->g_112.s3, "p_1105->g_112.s3", print_hash_value);
    transparent_crc(p_1105->g_112.s4, "p_1105->g_112.s4", print_hash_value);
    transparent_crc(p_1105->g_112.s5, "p_1105->g_112.s5", print_hash_value);
    transparent_crc(p_1105->g_112.s6, "p_1105->g_112.s6", print_hash_value);
    transparent_crc(p_1105->g_112.s7, "p_1105->g_112.s7", print_hash_value);
    transparent_crc(p_1105->g_141, "p_1105->g_141", print_hash_value);
    transparent_crc(p_1105->g_145.s0, "p_1105->g_145.s0", print_hash_value);
    transparent_crc(p_1105->g_145.s1, "p_1105->g_145.s1", print_hash_value);
    transparent_crc(p_1105->g_145.s2, "p_1105->g_145.s2", print_hash_value);
    transparent_crc(p_1105->g_145.s3, "p_1105->g_145.s3", print_hash_value);
    transparent_crc(p_1105->g_145.s4, "p_1105->g_145.s4", print_hash_value);
    transparent_crc(p_1105->g_145.s5, "p_1105->g_145.s5", print_hash_value);
    transparent_crc(p_1105->g_145.s6, "p_1105->g_145.s6", print_hash_value);
    transparent_crc(p_1105->g_145.s7, "p_1105->g_145.s7", print_hash_value);
    transparent_crc(p_1105->g_147, "p_1105->g_147", print_hash_value);
    transparent_crc(p_1105->g_167.s0, "p_1105->g_167.s0", print_hash_value);
    transparent_crc(p_1105->g_167.s1, "p_1105->g_167.s1", print_hash_value);
    transparent_crc(p_1105->g_167.s2, "p_1105->g_167.s2", print_hash_value);
    transparent_crc(p_1105->g_167.s3, "p_1105->g_167.s3", print_hash_value);
    transparent_crc(p_1105->g_167.s4, "p_1105->g_167.s4", print_hash_value);
    transparent_crc(p_1105->g_167.s5, "p_1105->g_167.s5", print_hash_value);
    transparent_crc(p_1105->g_167.s6, "p_1105->g_167.s6", print_hash_value);
    transparent_crc(p_1105->g_167.s7, "p_1105->g_167.s7", print_hash_value);
    transparent_crc(p_1105->g_167.s8, "p_1105->g_167.s8", print_hash_value);
    transparent_crc(p_1105->g_167.s9, "p_1105->g_167.s9", print_hash_value);
    transparent_crc(p_1105->g_167.sa, "p_1105->g_167.sa", print_hash_value);
    transparent_crc(p_1105->g_167.sb, "p_1105->g_167.sb", print_hash_value);
    transparent_crc(p_1105->g_167.sc, "p_1105->g_167.sc", print_hash_value);
    transparent_crc(p_1105->g_167.sd, "p_1105->g_167.sd", print_hash_value);
    transparent_crc(p_1105->g_167.se, "p_1105->g_167.se", print_hash_value);
    transparent_crc(p_1105->g_167.sf, "p_1105->g_167.sf", print_hash_value);
    transparent_crc(p_1105->g_197, "p_1105->g_197", print_hash_value);
    transparent_crc(p_1105->g_199, "p_1105->g_199", print_hash_value);
    transparent_crc(p_1105->g_200, "p_1105->g_200", print_hash_value);
    transparent_crc(p_1105->g_218.x, "p_1105->g_218.x", print_hash_value);
    transparent_crc(p_1105->g_218.y, "p_1105->g_218.y", print_hash_value);
    transparent_crc(p_1105->g_218.z, "p_1105->g_218.z", print_hash_value);
    transparent_crc(p_1105->g_218.w, "p_1105->g_218.w", print_hash_value);
    transparent_crc(p_1105->g_239.x, "p_1105->g_239.x", print_hash_value);
    transparent_crc(p_1105->g_239.y, "p_1105->g_239.y", print_hash_value);
    transparent_crc(p_1105->g_245, "p_1105->g_245", print_hash_value);
    transparent_crc(p_1105->g_267, "p_1105->g_267", print_hash_value);
    transparent_crc(p_1105->g_278.s0, "p_1105->g_278.s0", print_hash_value);
    transparent_crc(p_1105->g_278.s1, "p_1105->g_278.s1", print_hash_value);
    transparent_crc(p_1105->g_278.s2, "p_1105->g_278.s2", print_hash_value);
    transparent_crc(p_1105->g_278.s3, "p_1105->g_278.s3", print_hash_value);
    transparent_crc(p_1105->g_278.s4, "p_1105->g_278.s4", print_hash_value);
    transparent_crc(p_1105->g_278.s5, "p_1105->g_278.s5", print_hash_value);
    transparent_crc(p_1105->g_278.s6, "p_1105->g_278.s6", print_hash_value);
    transparent_crc(p_1105->g_278.s7, "p_1105->g_278.s7", print_hash_value);
    transparent_crc(p_1105->g_278.s8, "p_1105->g_278.s8", print_hash_value);
    transparent_crc(p_1105->g_278.s9, "p_1105->g_278.s9", print_hash_value);
    transparent_crc(p_1105->g_278.sa, "p_1105->g_278.sa", print_hash_value);
    transparent_crc(p_1105->g_278.sb, "p_1105->g_278.sb", print_hash_value);
    transparent_crc(p_1105->g_278.sc, "p_1105->g_278.sc", print_hash_value);
    transparent_crc(p_1105->g_278.sd, "p_1105->g_278.sd", print_hash_value);
    transparent_crc(p_1105->g_278.se, "p_1105->g_278.se", print_hash_value);
    transparent_crc(p_1105->g_278.sf, "p_1105->g_278.sf", print_hash_value);
    transparent_crc(p_1105->g_281.s0, "p_1105->g_281.s0", print_hash_value);
    transparent_crc(p_1105->g_281.s1, "p_1105->g_281.s1", print_hash_value);
    transparent_crc(p_1105->g_281.s2, "p_1105->g_281.s2", print_hash_value);
    transparent_crc(p_1105->g_281.s3, "p_1105->g_281.s3", print_hash_value);
    transparent_crc(p_1105->g_281.s4, "p_1105->g_281.s4", print_hash_value);
    transparent_crc(p_1105->g_281.s5, "p_1105->g_281.s5", print_hash_value);
    transparent_crc(p_1105->g_281.s6, "p_1105->g_281.s6", print_hash_value);
    transparent_crc(p_1105->g_281.s7, "p_1105->g_281.s7", print_hash_value);
    transparent_crc(p_1105->g_285, "p_1105->g_285", print_hash_value);
    transparent_crc(p_1105->g_294.x, "p_1105->g_294.x", print_hash_value);
    transparent_crc(p_1105->g_294.y, "p_1105->g_294.y", print_hash_value);
    transparent_crc(p_1105->g_294.z, "p_1105->g_294.z", print_hash_value);
    transparent_crc(p_1105->g_294.w, "p_1105->g_294.w", print_hash_value);
    transparent_crc(p_1105->g_298.x, "p_1105->g_298.x", print_hash_value);
    transparent_crc(p_1105->g_298.y, "p_1105->g_298.y", print_hash_value);
    transparent_crc(p_1105->g_313.s0, "p_1105->g_313.s0", print_hash_value);
    transparent_crc(p_1105->g_313.s1, "p_1105->g_313.s1", print_hash_value);
    transparent_crc(p_1105->g_313.s2, "p_1105->g_313.s2", print_hash_value);
    transparent_crc(p_1105->g_313.s3, "p_1105->g_313.s3", print_hash_value);
    transparent_crc(p_1105->g_313.s4, "p_1105->g_313.s4", print_hash_value);
    transparent_crc(p_1105->g_313.s5, "p_1105->g_313.s5", print_hash_value);
    transparent_crc(p_1105->g_313.s6, "p_1105->g_313.s6", print_hash_value);
    transparent_crc(p_1105->g_313.s7, "p_1105->g_313.s7", print_hash_value);
    transparent_crc(p_1105->g_335.s0, "p_1105->g_335.s0", print_hash_value);
    transparent_crc(p_1105->g_335.s1, "p_1105->g_335.s1", print_hash_value);
    transparent_crc(p_1105->g_335.s2, "p_1105->g_335.s2", print_hash_value);
    transparent_crc(p_1105->g_335.s3, "p_1105->g_335.s3", print_hash_value);
    transparent_crc(p_1105->g_335.s4, "p_1105->g_335.s4", print_hash_value);
    transparent_crc(p_1105->g_335.s5, "p_1105->g_335.s5", print_hash_value);
    transparent_crc(p_1105->g_335.s6, "p_1105->g_335.s6", print_hash_value);
    transparent_crc(p_1105->g_335.s7, "p_1105->g_335.s7", print_hash_value);
    transparent_crc(p_1105->g_335.s8, "p_1105->g_335.s8", print_hash_value);
    transparent_crc(p_1105->g_335.s9, "p_1105->g_335.s9", print_hash_value);
    transparent_crc(p_1105->g_335.sa, "p_1105->g_335.sa", print_hash_value);
    transparent_crc(p_1105->g_335.sb, "p_1105->g_335.sb", print_hash_value);
    transparent_crc(p_1105->g_335.sc, "p_1105->g_335.sc", print_hash_value);
    transparent_crc(p_1105->g_335.sd, "p_1105->g_335.sd", print_hash_value);
    transparent_crc(p_1105->g_335.se, "p_1105->g_335.se", print_hash_value);
    transparent_crc(p_1105->g_335.sf, "p_1105->g_335.sf", print_hash_value);
    transparent_crc(p_1105->g_337.s0, "p_1105->g_337.s0", print_hash_value);
    transparent_crc(p_1105->g_337.s1, "p_1105->g_337.s1", print_hash_value);
    transparent_crc(p_1105->g_337.s2, "p_1105->g_337.s2", print_hash_value);
    transparent_crc(p_1105->g_337.s3, "p_1105->g_337.s3", print_hash_value);
    transparent_crc(p_1105->g_337.s4, "p_1105->g_337.s4", print_hash_value);
    transparent_crc(p_1105->g_337.s5, "p_1105->g_337.s5", print_hash_value);
    transparent_crc(p_1105->g_337.s6, "p_1105->g_337.s6", print_hash_value);
    transparent_crc(p_1105->g_337.s7, "p_1105->g_337.s7", print_hash_value);
    transparent_crc(p_1105->g_337.s8, "p_1105->g_337.s8", print_hash_value);
    transparent_crc(p_1105->g_337.s9, "p_1105->g_337.s9", print_hash_value);
    transparent_crc(p_1105->g_337.sa, "p_1105->g_337.sa", print_hash_value);
    transparent_crc(p_1105->g_337.sb, "p_1105->g_337.sb", print_hash_value);
    transparent_crc(p_1105->g_337.sc, "p_1105->g_337.sc", print_hash_value);
    transparent_crc(p_1105->g_337.sd, "p_1105->g_337.sd", print_hash_value);
    transparent_crc(p_1105->g_337.se, "p_1105->g_337.se", print_hash_value);
    transparent_crc(p_1105->g_337.sf, "p_1105->g_337.sf", print_hash_value);
    transparent_crc(p_1105->g_381.s0, "p_1105->g_381.s0", print_hash_value);
    transparent_crc(p_1105->g_381.s1, "p_1105->g_381.s1", print_hash_value);
    transparent_crc(p_1105->g_381.s2, "p_1105->g_381.s2", print_hash_value);
    transparent_crc(p_1105->g_381.s3, "p_1105->g_381.s3", print_hash_value);
    transparent_crc(p_1105->g_381.s4, "p_1105->g_381.s4", print_hash_value);
    transparent_crc(p_1105->g_381.s5, "p_1105->g_381.s5", print_hash_value);
    transparent_crc(p_1105->g_381.s6, "p_1105->g_381.s6", print_hash_value);
    transparent_crc(p_1105->g_381.s7, "p_1105->g_381.s7", print_hash_value);
    transparent_crc(p_1105->g_381.s8, "p_1105->g_381.s8", print_hash_value);
    transparent_crc(p_1105->g_381.s9, "p_1105->g_381.s9", print_hash_value);
    transparent_crc(p_1105->g_381.sa, "p_1105->g_381.sa", print_hash_value);
    transparent_crc(p_1105->g_381.sb, "p_1105->g_381.sb", print_hash_value);
    transparent_crc(p_1105->g_381.sc, "p_1105->g_381.sc", print_hash_value);
    transparent_crc(p_1105->g_381.sd, "p_1105->g_381.sd", print_hash_value);
    transparent_crc(p_1105->g_381.se, "p_1105->g_381.se", print_hash_value);
    transparent_crc(p_1105->g_381.sf, "p_1105->g_381.sf", print_hash_value);
    transparent_crc(p_1105->g_385.x, "p_1105->g_385.x", print_hash_value);
    transparent_crc(p_1105->g_385.y, "p_1105->g_385.y", print_hash_value);
    transparent_crc(p_1105->g_385.z, "p_1105->g_385.z", print_hash_value);
    transparent_crc(p_1105->g_385.w, "p_1105->g_385.w", print_hash_value);
    transparent_crc(p_1105->g_443, "p_1105->g_443", print_hash_value);
    transparent_crc(p_1105->g_505.s0, "p_1105->g_505.s0", print_hash_value);
    transparent_crc(p_1105->g_505.s1, "p_1105->g_505.s1", print_hash_value);
    transparent_crc(p_1105->g_505.s2, "p_1105->g_505.s2", print_hash_value);
    transparent_crc(p_1105->g_505.s3, "p_1105->g_505.s3", print_hash_value);
    transparent_crc(p_1105->g_505.s4, "p_1105->g_505.s4", print_hash_value);
    transparent_crc(p_1105->g_505.s5, "p_1105->g_505.s5", print_hash_value);
    transparent_crc(p_1105->g_505.s6, "p_1105->g_505.s6", print_hash_value);
    transparent_crc(p_1105->g_505.s7, "p_1105->g_505.s7", print_hash_value);
    transparent_crc(p_1105->g_506.s0, "p_1105->g_506.s0", print_hash_value);
    transparent_crc(p_1105->g_506.s1, "p_1105->g_506.s1", print_hash_value);
    transparent_crc(p_1105->g_506.s2, "p_1105->g_506.s2", print_hash_value);
    transparent_crc(p_1105->g_506.s3, "p_1105->g_506.s3", print_hash_value);
    transparent_crc(p_1105->g_506.s4, "p_1105->g_506.s4", print_hash_value);
    transparent_crc(p_1105->g_506.s5, "p_1105->g_506.s5", print_hash_value);
    transparent_crc(p_1105->g_506.s6, "p_1105->g_506.s6", print_hash_value);
    transparent_crc(p_1105->g_506.s7, "p_1105->g_506.s7", print_hash_value);
    transparent_crc(p_1105->g_506.s8, "p_1105->g_506.s8", print_hash_value);
    transparent_crc(p_1105->g_506.s9, "p_1105->g_506.s9", print_hash_value);
    transparent_crc(p_1105->g_506.sa, "p_1105->g_506.sa", print_hash_value);
    transparent_crc(p_1105->g_506.sb, "p_1105->g_506.sb", print_hash_value);
    transparent_crc(p_1105->g_506.sc, "p_1105->g_506.sc", print_hash_value);
    transparent_crc(p_1105->g_506.sd, "p_1105->g_506.sd", print_hash_value);
    transparent_crc(p_1105->g_506.se, "p_1105->g_506.se", print_hash_value);
    transparent_crc(p_1105->g_506.sf, "p_1105->g_506.sf", print_hash_value);
    transparent_crc(p_1105->g_573.x, "p_1105->g_573.x", print_hash_value);
    transparent_crc(p_1105->g_573.y, "p_1105->g_573.y", print_hash_value);
    transparent_crc(p_1105->g_574.s0, "p_1105->g_574.s0", print_hash_value);
    transparent_crc(p_1105->g_574.s1, "p_1105->g_574.s1", print_hash_value);
    transparent_crc(p_1105->g_574.s2, "p_1105->g_574.s2", print_hash_value);
    transparent_crc(p_1105->g_574.s3, "p_1105->g_574.s3", print_hash_value);
    transparent_crc(p_1105->g_574.s4, "p_1105->g_574.s4", print_hash_value);
    transparent_crc(p_1105->g_574.s5, "p_1105->g_574.s5", print_hash_value);
    transparent_crc(p_1105->g_574.s6, "p_1105->g_574.s6", print_hash_value);
    transparent_crc(p_1105->g_574.s7, "p_1105->g_574.s7", print_hash_value);
    transparent_crc(p_1105->g_581.s0, "p_1105->g_581.s0", print_hash_value);
    transparent_crc(p_1105->g_581.s1, "p_1105->g_581.s1", print_hash_value);
    transparent_crc(p_1105->g_581.s2, "p_1105->g_581.s2", print_hash_value);
    transparent_crc(p_1105->g_581.s3, "p_1105->g_581.s3", print_hash_value);
    transparent_crc(p_1105->g_581.s4, "p_1105->g_581.s4", print_hash_value);
    transparent_crc(p_1105->g_581.s5, "p_1105->g_581.s5", print_hash_value);
    transparent_crc(p_1105->g_581.s6, "p_1105->g_581.s6", print_hash_value);
    transparent_crc(p_1105->g_581.s7, "p_1105->g_581.s7", print_hash_value);
    transparent_crc(p_1105->g_581.s8, "p_1105->g_581.s8", print_hash_value);
    transparent_crc(p_1105->g_581.s9, "p_1105->g_581.s9", print_hash_value);
    transparent_crc(p_1105->g_581.sa, "p_1105->g_581.sa", print_hash_value);
    transparent_crc(p_1105->g_581.sb, "p_1105->g_581.sb", print_hash_value);
    transparent_crc(p_1105->g_581.sc, "p_1105->g_581.sc", print_hash_value);
    transparent_crc(p_1105->g_581.sd, "p_1105->g_581.sd", print_hash_value);
    transparent_crc(p_1105->g_581.se, "p_1105->g_581.se", print_hash_value);
    transparent_crc(p_1105->g_581.sf, "p_1105->g_581.sf", print_hash_value);
    transparent_crc(p_1105->g_582.x, "p_1105->g_582.x", print_hash_value);
    transparent_crc(p_1105->g_582.y, "p_1105->g_582.y", print_hash_value);
    transparent_crc(p_1105->g_582.z, "p_1105->g_582.z", print_hash_value);
    transparent_crc(p_1105->g_582.w, "p_1105->g_582.w", print_hash_value);
    transparent_crc(p_1105->g_583.s0, "p_1105->g_583.s0", print_hash_value);
    transparent_crc(p_1105->g_583.s1, "p_1105->g_583.s1", print_hash_value);
    transparent_crc(p_1105->g_583.s2, "p_1105->g_583.s2", print_hash_value);
    transparent_crc(p_1105->g_583.s3, "p_1105->g_583.s3", print_hash_value);
    transparent_crc(p_1105->g_583.s4, "p_1105->g_583.s4", print_hash_value);
    transparent_crc(p_1105->g_583.s5, "p_1105->g_583.s5", print_hash_value);
    transparent_crc(p_1105->g_583.s6, "p_1105->g_583.s6", print_hash_value);
    transparent_crc(p_1105->g_583.s7, "p_1105->g_583.s7", print_hash_value);
    transparent_crc(p_1105->g_583.s8, "p_1105->g_583.s8", print_hash_value);
    transparent_crc(p_1105->g_583.s9, "p_1105->g_583.s9", print_hash_value);
    transparent_crc(p_1105->g_583.sa, "p_1105->g_583.sa", print_hash_value);
    transparent_crc(p_1105->g_583.sb, "p_1105->g_583.sb", print_hash_value);
    transparent_crc(p_1105->g_583.sc, "p_1105->g_583.sc", print_hash_value);
    transparent_crc(p_1105->g_583.sd, "p_1105->g_583.sd", print_hash_value);
    transparent_crc(p_1105->g_583.se, "p_1105->g_583.se", print_hash_value);
    transparent_crc(p_1105->g_583.sf, "p_1105->g_583.sf", print_hash_value);
    transparent_crc(p_1105->g_599.x, "p_1105->g_599.x", print_hash_value);
    transparent_crc(p_1105->g_599.y, "p_1105->g_599.y", print_hash_value);
    transparent_crc(p_1105->g_599.z, "p_1105->g_599.z", print_hash_value);
    transparent_crc(p_1105->g_599.w, "p_1105->g_599.w", print_hash_value);
    transparent_crc(p_1105->g_618, "p_1105->g_618", print_hash_value);
    transparent_crc(p_1105->g_633.x, "p_1105->g_633.x", print_hash_value);
    transparent_crc(p_1105->g_633.y, "p_1105->g_633.y", print_hash_value);
    transparent_crc(p_1105->g_633.z, "p_1105->g_633.z", print_hash_value);
    transparent_crc(p_1105->g_633.w, "p_1105->g_633.w", print_hash_value);
    transparent_crc(p_1105->g_681.x, "p_1105->g_681.x", print_hash_value);
    transparent_crc(p_1105->g_681.y, "p_1105->g_681.y", print_hash_value);
    transparent_crc(p_1105->g_681.z, "p_1105->g_681.z", print_hash_value);
    transparent_crc(p_1105->g_681.w, "p_1105->g_681.w", print_hash_value);
    transparent_crc(p_1105->g_693.x, "p_1105->g_693.x", print_hash_value);
    transparent_crc(p_1105->g_693.y, "p_1105->g_693.y", print_hash_value);
    transparent_crc(p_1105->g_782.s0, "p_1105->g_782.s0", print_hash_value);
    transparent_crc(p_1105->g_782.s1, "p_1105->g_782.s1", print_hash_value);
    transparent_crc(p_1105->g_782.s2, "p_1105->g_782.s2", print_hash_value);
    transparent_crc(p_1105->g_782.s3, "p_1105->g_782.s3", print_hash_value);
    transparent_crc(p_1105->g_782.s4, "p_1105->g_782.s4", print_hash_value);
    transparent_crc(p_1105->g_782.s5, "p_1105->g_782.s5", print_hash_value);
    transparent_crc(p_1105->g_782.s6, "p_1105->g_782.s6", print_hash_value);
    transparent_crc(p_1105->g_782.s7, "p_1105->g_782.s7", print_hash_value);
    transparent_crc(p_1105->g_783.s0, "p_1105->g_783.s0", print_hash_value);
    transparent_crc(p_1105->g_783.s1, "p_1105->g_783.s1", print_hash_value);
    transparent_crc(p_1105->g_783.s2, "p_1105->g_783.s2", print_hash_value);
    transparent_crc(p_1105->g_783.s3, "p_1105->g_783.s3", print_hash_value);
    transparent_crc(p_1105->g_783.s4, "p_1105->g_783.s4", print_hash_value);
    transparent_crc(p_1105->g_783.s5, "p_1105->g_783.s5", print_hash_value);
    transparent_crc(p_1105->g_783.s6, "p_1105->g_783.s6", print_hash_value);
    transparent_crc(p_1105->g_783.s7, "p_1105->g_783.s7", print_hash_value);
    transparent_crc(p_1105->g_785.s0, "p_1105->g_785.s0", print_hash_value);
    transparent_crc(p_1105->g_785.s1, "p_1105->g_785.s1", print_hash_value);
    transparent_crc(p_1105->g_785.s2, "p_1105->g_785.s2", print_hash_value);
    transparent_crc(p_1105->g_785.s3, "p_1105->g_785.s3", print_hash_value);
    transparent_crc(p_1105->g_785.s4, "p_1105->g_785.s4", print_hash_value);
    transparent_crc(p_1105->g_785.s5, "p_1105->g_785.s5", print_hash_value);
    transparent_crc(p_1105->g_785.s6, "p_1105->g_785.s6", print_hash_value);
    transparent_crc(p_1105->g_785.s7, "p_1105->g_785.s7", print_hash_value);
    transparent_crc(p_1105->g_785.s8, "p_1105->g_785.s8", print_hash_value);
    transparent_crc(p_1105->g_785.s9, "p_1105->g_785.s9", print_hash_value);
    transparent_crc(p_1105->g_785.sa, "p_1105->g_785.sa", print_hash_value);
    transparent_crc(p_1105->g_785.sb, "p_1105->g_785.sb", print_hash_value);
    transparent_crc(p_1105->g_785.sc, "p_1105->g_785.sc", print_hash_value);
    transparent_crc(p_1105->g_785.sd, "p_1105->g_785.sd", print_hash_value);
    transparent_crc(p_1105->g_785.se, "p_1105->g_785.se", print_hash_value);
    transparent_crc(p_1105->g_785.sf, "p_1105->g_785.sf", print_hash_value);
    transparent_crc(p_1105->g_786.x, "p_1105->g_786.x", print_hash_value);
    transparent_crc(p_1105->g_786.y, "p_1105->g_786.y", print_hash_value);
    transparent_crc(p_1105->g_786.z, "p_1105->g_786.z", print_hash_value);
    transparent_crc(p_1105->g_786.w, "p_1105->g_786.w", print_hash_value);
    transparent_crc(p_1105->v_collective, "p_1105->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 54; i++)
            transparent_crc(p_1105->g_special_values[i + 54 * get_linear_group_id()], "p_1105->g_special_values[i + 54 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 54; i++)
            transparent_crc(p_1105->l_special_values[i], "p_1105->l_special_values[i]", print_hash_value);
    transparent_crc(p_1105->l_comm_values[get_linear_local_id()], "p_1105->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1105->g_comm_values[get_linear_group_id() * 168 + get_linear_local_id()], "p_1105->g_comm_values[get_linear_group_id() * 168 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
