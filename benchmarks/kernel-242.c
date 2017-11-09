// --atomics 95 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 43,13,4 -l 43,1,4
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

__constant uint32_t permutations[10][172] = {
{23,42,24,48,10,156,17,160,148,60,29,30,99,165,170,98,102,46,153,150,26,112,108,61,84,3,134,76,78,116,121,4,53,2,101,94,147,41,120,115,32,135,126,103,38,66,93,155,51,171,25,136,128,109,59,28,89,130,140,80,11,14,114,19,157,83,139,8,86,124,21,143,13,27,127,85,117,5,168,106,95,125,49,113,167,56,105,18,47,149,9,35,111,164,69,81,146,129,151,90,7,16,92,74,44,20,58,141,22,62,133,72,123,75,163,67,45,169,162,161,79,88,71,50,15,122,39,145,52,132,34,63,0,82,37,36,91,55,87,100,68,119,33,73,107,159,65,40,138,166,54,118,110,77,70,154,144,6,57,131,31,142,97,1,104,152,96,12,137,43,158,64}, // permutation 0
{161,71,166,5,1,123,158,90,101,2,162,23,98,130,152,78,81,147,64,21,96,32,157,26,132,46,43,40,68,102,103,51,95,138,75,48,34,131,50,126,100,122,119,159,4,24,27,110,6,149,62,114,82,18,142,104,55,146,41,170,137,164,63,31,83,84,73,87,112,35,127,61,153,92,54,154,58,25,120,42,79,107,0,15,143,37,9,171,97,60,144,94,124,117,7,86,116,135,20,155,150,165,136,141,89,169,88,85,121,69,168,160,16,12,44,93,17,167,151,11,22,74,65,8,148,105,133,115,129,56,91,99,38,28,145,140,59,30,33,39,118,139,36,47,113,29,52,125,77,53,76,111,163,109,134,128,19,14,57,66,3,49,72,70,108,10,156,13,45,67,106,80}, // permutation 1
{125,3,56,139,117,108,17,47,90,106,116,87,68,96,98,148,95,123,134,22,49,60,65,113,110,79,24,18,13,120,138,147,142,2,48,6,171,159,26,109,23,69,124,166,37,74,115,57,156,137,71,38,31,99,167,46,40,41,133,36,85,168,150,67,32,11,12,141,0,132,77,97,101,107,126,130,39,58,135,143,20,35,27,144,78,100,165,140,146,105,62,88,91,152,128,55,5,43,114,63,9,122,29,83,10,104,80,76,161,70,28,30,34,89,52,153,93,54,86,4,145,59,129,66,162,50,15,51,127,112,118,136,155,151,103,131,14,64,73,21,61,169,16,1,158,164,121,19,163,102,25,53,42,82,75,45,160,7,81,84,8,119,72,92,154,44,33,94,170,157,149,111}, // permutation 2
{104,71,18,133,94,163,30,151,97,131,22,21,35,114,89,55,116,113,1,149,123,15,13,152,119,39,110,91,27,142,78,64,102,155,16,122,46,52,3,86,137,5,111,74,11,68,170,48,95,49,66,4,125,60,156,24,6,40,23,162,47,8,31,166,138,19,28,146,56,141,41,100,103,99,165,83,158,109,29,34,161,118,25,154,51,84,105,90,87,115,92,80,7,128,121,82,77,42,171,50,132,76,153,93,120,134,65,157,160,79,58,37,73,164,144,70,117,17,33,85,54,32,20,139,9,107,126,168,167,61,143,38,45,124,57,0,127,75,147,148,53,135,10,36,140,106,150,88,72,63,26,159,108,130,12,101,112,59,145,98,129,169,44,43,69,14,96,81,62,67,2,136}, // permutation 3
{66,150,21,134,65,80,116,98,87,55,140,44,112,168,102,37,41,19,155,86,164,27,17,114,108,135,39,70,0,73,131,82,18,129,88,117,56,137,60,124,165,28,156,94,51,130,92,93,101,162,161,26,69,170,67,4,125,64,115,138,10,32,152,50,143,145,99,52,84,105,15,29,13,171,7,113,122,20,163,97,31,22,139,68,151,141,12,62,160,8,127,132,45,144,53,1,77,78,24,47,104,79,159,133,9,33,158,119,81,169,85,46,35,16,96,126,95,142,25,23,11,49,72,90,166,153,167,5,148,100,91,2,128,106,107,74,54,59,136,34,30,43,89,71,103,3,83,123,121,14,63,147,111,120,38,48,75,157,118,149,42,40,6,110,154,146,57,58,76,61,36,109}, // permutation 4
{133,10,7,148,11,91,74,102,55,88,137,43,39,162,156,29,134,97,132,23,138,16,20,61,121,60,52,108,141,80,9,13,158,40,1,106,86,161,84,42,63,77,98,71,85,47,4,8,54,44,152,157,28,14,19,149,155,31,5,105,68,0,30,53,96,112,120,18,15,140,159,79,57,90,27,38,123,24,76,126,163,49,46,131,87,118,150,70,33,6,83,113,107,45,160,151,89,111,34,95,119,93,67,12,142,129,17,167,78,165,122,109,75,22,101,124,153,58,114,92,143,51,146,37,128,100,145,50,127,2,59,21,25,56,35,3,103,82,32,147,130,139,144,136,115,117,154,73,99,66,94,171,125,41,110,170,168,62,166,65,69,72,36,64,135,116,48,104,164,169,26,81}, // permutation 5
{5,34,33,77,98,47,59,64,23,54,162,72,137,32,39,31,61,148,103,106,131,125,65,80,58,134,27,151,0,90,56,79,38,35,168,166,88,26,40,57,136,42,165,154,55,94,15,130,145,167,109,91,30,76,86,139,143,150,97,73,126,43,95,116,107,161,46,158,50,110,96,142,16,122,14,108,52,104,82,84,10,44,101,45,127,62,85,70,21,1,37,93,18,11,3,160,9,67,28,105,102,48,68,100,99,41,51,81,157,60,140,87,120,159,22,20,138,29,83,8,171,144,156,25,147,74,111,153,152,141,113,133,66,128,13,169,114,112,132,24,119,63,118,117,49,146,164,135,163,89,36,115,19,71,12,124,69,78,129,2,149,155,121,92,4,75,123,53,7,170,17,6}, // permutation 6
{150,80,118,104,36,4,85,157,71,87,124,58,59,145,21,73,45,135,146,96,161,133,112,139,127,61,159,92,100,94,46,5,130,64,142,167,15,57,7,6,79,98,41,148,131,54,48,86,27,62,158,17,91,63,68,90,113,0,29,70,164,129,76,136,126,37,107,170,97,66,31,13,18,12,134,20,33,156,77,105,9,110,19,115,120,155,99,34,51,44,56,25,14,138,117,122,141,2,42,50,147,121,47,11,81,22,101,32,95,109,143,1,151,114,78,69,43,154,160,102,168,163,89,28,3,52,123,38,88,72,149,137,116,67,30,39,83,65,10,40,26,128,171,153,49,75,169,55,166,60,74,144,16,108,23,165,24,93,106,111,35,53,140,103,132,125,119,152,82,162,84,8}, // permutation 7
{147,44,37,55,73,110,13,10,51,144,117,47,28,92,109,107,43,136,118,106,119,94,65,134,80,113,155,38,130,11,159,96,16,121,61,127,6,115,82,160,102,104,32,162,25,57,85,91,170,157,68,45,149,40,26,15,83,143,75,142,76,164,99,131,8,114,0,60,64,81,2,22,153,138,14,108,42,112,132,35,152,124,9,52,66,135,39,7,120,12,56,72,79,59,125,29,41,154,165,168,5,128,78,167,17,71,46,27,122,98,50,23,87,116,53,163,34,88,169,148,84,77,20,133,24,86,141,150,156,63,36,129,31,21,171,74,140,3,166,146,48,151,100,62,93,126,101,30,69,137,54,33,70,95,123,139,97,161,4,58,158,67,89,1,90,103,49,105,111,145,18,19}, // permutation 8
{119,63,133,154,126,51,102,135,159,161,58,14,165,91,67,78,106,128,53,34,149,115,1,109,122,57,69,92,23,36,121,152,43,171,79,7,153,157,42,146,71,144,64,158,77,166,132,124,47,16,151,101,85,20,60,55,5,12,37,168,139,111,28,48,100,66,26,29,4,38,15,113,141,82,40,142,150,61,136,90,44,21,75,18,83,31,45,98,155,0,56,93,39,107,164,17,50,80,114,96,89,25,84,103,8,87,54,94,35,120,2,24,19,127,81,22,131,3,143,129,138,76,74,32,134,59,110,88,156,49,108,140,68,118,145,86,95,41,72,170,62,163,70,137,10,46,104,105,117,52,148,73,9,167,65,13,33,162,11,27,97,112,130,116,169,147,160,6,99,30,125,123} // permutation 9
};

// Seed: 454943536

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int8_t g_27;
    uint32_t g_40;
    uint32_t g_57;
    uint32_t *g_56[4][3][1];
    int32_t g_59;
    uint64_t g_92;
    int8_t g_95[4][10];
    int8_t g_112;
    int8_t g_113;
    volatile uint8_t g_114;
    int64_t g_129;
    uint32_t g_137[1][1][6];
    int64_t g_138;
    VECTOR(uint16_t, 16) g_143;
    VECTOR(uint32_t, 16) g_149;
    int16_t g_153;
    int8_t *g_167;
    uint8_t g_169[7];
    VECTOR(int32_t, 16) g_172;
    volatile VECTOR(uint32_t, 2) g_173;
    uint8_t g_191[10];
    int32_t *g_195;
    int32_t ** volatile g_194;
    int32_t *g_197;
    VECTOR(uint8_t, 8) g_211;
    VECTOR(int8_t, 8) g_220;
    VECTOR(uint16_t, 2) g_223;
    VECTOR(uint8_t, 4) g_224;
    int32_t g_276;
    VECTOR(int32_t, 2) g_277;
    VECTOR(uint16_t, 4) g_288;
    uint16_t g_310[6];
    uint32_t g_313;
    uint32_t g_315;
    VECTOR(int64_t, 8) g_316;
    volatile VECTOR(int64_t, 8) g_319;
    VECTOR(uint64_t, 2) g_330;
    VECTOR(uint32_t, 2) g_339;
    volatile VECTOR(int8_t, 2) g_342;
    volatile VECTOR(int16_t, 16) g_357;
    VECTOR(int32_t, 8) g_364;
    int32_t * volatile g_397;
    int16_t g_416;
    volatile VECTOR(uint8_t, 2) g_421;
    VECTOR(uint8_t, 4) g_422;
    volatile VECTOR(uint8_t, 16) g_423;
    int64_t *g_441;
    int64_t g_460;
    uint32_t g_468;
    VECTOR(uint64_t, 4) g_505;
    VECTOR(int8_t, 2) g_508;
    uint16_t *g_529;
    volatile VECTOR(int8_t, 4) g_537;
    VECTOR(uint16_t, 8) g_598;
    volatile VECTOR(uint16_t, 16) g_600;
    VECTOR(uint16_t, 2) g_601;
    VECTOR(uint16_t, 2) g_602;
    VECTOR(int16_t, 2) g_609;
    VECTOR(uint32_t, 8) g_614;
    int32_t ** volatile g_616;
    int32_t ** volatile g_617;
    VECTOR(int16_t, 4) g_703;
    volatile VECTOR(int8_t, 2) g_704;
    VECTOR(uint8_t, 16) g_705;
    int32_t * volatile g_716;
    volatile VECTOR(int8_t, 2) g_733;
    volatile VECTOR(int8_t, 16) g_735;
    volatile VECTOR(uint64_t, 16) g_740;
    volatile VECTOR(int32_t, 2) g_741;
    uint32_t g_758;
    int32_t ** volatile g_761;
    volatile int16_t *g_774;
    volatile int16_t ** volatile g_773;
    VECTOR(int16_t, 4) g_801;
    VECTOR(uint64_t, 4) g_818;
    volatile VECTOR(uint16_t, 16) g_825;
    volatile VECTOR(uint32_t, 16) g_830;
    int32_t g_831[9];
    uint64_t g_833;
    uint32_t *g_837;
    uint32_t **g_836;
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
uint8_t  func_1(struct S0 * p_840);
uint16_t  func_2(uint16_t  p_3, struct S0 * p_840);
uint16_t  func_4(int64_t  p_5, uint16_t  p_6, struct S0 * p_840);
int8_t  func_11(int32_t  p_12, uint16_t  p_13, int32_t  p_14, struct S0 * p_840);
uint8_t  func_18(uint8_t  p_19, struct S0 * p_840);
uint8_t  func_20(int8_t  p_21, uint64_t  p_22, struct S0 * p_840);
int8_t  func_28(int8_t * p_29, uint64_t  p_30, struct S0 * p_840);
int32_t * func_33(uint32_t  p_34, int32_t * p_35, int32_t * p_36, int32_t * p_37, int32_t  p_38, struct S0 * p_840);
int32_t * func_43(uint32_t * p_44, uint16_t  p_45, uint16_t  p_46, uint32_t  p_47, struct S0 * p_840);
uint32_t * func_48(int8_t * p_49, int8_t  p_50, uint32_t  p_51, struct S0 * p_840);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_840->g_comm_values p_840->l_comm_values p_840->g_40 p_840->g_27 p_840->g_56 p_840->g_59 p_840->g_57 p_840->g_95 p_840->g_114 p_840->g_112 p_840->g_113 p_840->g_137 p_840->g_138 p_840->g_143 p_840->g_149 p_840->g_129 p_840->g_92 p_840->g_172 p_840->g_173 p_840->g_167 p_840->g_194 p_840->g_169 p_840->g_211 p_840->g_195 p_840->g_220 p_840->g_223 p_840->g_224 p_840->g_197 p_840->g_191 p_840->g_277 p_840->g_288 p_840->g_153 p_840->g_310 p_840->g_316 p_840->g_319 p_840->g_330 p_840->g_339 p_840->g_342 p_840->g_357 p_840->g_364 p_840->g_397 p_840->g_421 p_840->g_422 p_840->g_423 p_840->g_441 p_840->g_468 p_840->g_505 p_840->g_508 p_840->g_276 p_840->g_537 p_840->g_315 p_840->g_313 p_840->g_460 p_840->g_617 p_840->g_602 p_840->g_758 p_840->g_761 p_840->g_773 p_840->g_705 p_840->g_609 p_840->g_598 p_840->g_801 p_840->g_830 p_840->g_831 p_840->g_833 p_840->g_836 p_840->g_741
 * writes: p_840->g_27 p_840->g_40 p_840->g_56 p_840->g_92 p_840->g_95 p_840->g_114 p_840->g_59 p_840->g_129 p_840->g_137 p_840->g_138 p_840->g_153 p_840->g_167 p_840->g_169 p_840->g_195 p_840->g_197 p_840->g_143 p_840->g_191 p_840->g_113 p_840->g_comm_values p_840->l_comm_values p_840->g_276 p_840->g_310 p_840->g_313 p_840->g_315 p_840->g_112 p_840->g_416 p_840->g_441 p_840->g_57 p_840->g_468 p_840->g_364 p_840->g_529 p_840->g_460 p_840->g_758 p_840->g_609 p_840->g_149 p_840->g_833 p_840->g_836
 */
uint8_t  func_1(struct S0 * p_840)
{ /* block id: 4 */
    int8_t l_15 = (-2L);
    int32_t l_402 = 4L;
    int32_t l_403[1];
    VECTOR(int32_t, 4) l_409 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, (-3L)), (-3L));
    VECTOR(uint8_t, 8) l_419 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 9UL), 9UL), 9UL, 255UL, 9UL);
    VECTOR(int16_t, 4) l_428 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L);
    VECTOR(uint16_t, 4) l_429 = (VECTOR(uint16_t, 4))(0x4084L, (VECTOR(uint16_t, 2))(0x4084L, 0x6275L), 0x6275L);
    VECTOR(int64_t, 8) l_430 = (VECTOR(int64_t, 8))(6L, (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, (-7L)), (-7L)), (-7L), 6L, (-7L));
    uint64_t l_446[2];
    int32_t *l_472 = &l_403[0];
    uint32_t l_560 = 9UL;
    int16_t *l_575[7][2] = {{&p_840->g_416,&p_840->g_153},{&p_840->g_416,&p_840->g_153},{&p_840->g_416,&p_840->g_153},{&p_840->g_416,&p_840->g_153},{&p_840->g_416,&p_840->g_153},{&p_840->g_416,&p_840->g_153},{&p_840->g_416,&p_840->g_153}};
    int16_t l_585 = (-3L);
    int64_t l_590 = 0x7D6662754F5226A5L;
    uint64_t l_631 = 0x72BCD84908660C05L;
    VECTOR(int8_t, 8) l_734 = (VECTOR(int8_t, 8))(0x16L, (VECTOR(int8_t, 4))(0x16L, (VECTOR(int8_t, 2))(0x16L, 1L), 1L), 1L, 0x16L, 1L);
    uint16_t l_749 = 1UL;
    int64_t *l_775 = (void*)0;
    int32_t l_781 = (-7L);
    int8_t **l_809 = &p_840->g_167;
    uint32_t l_812 = 4294967291UL;
    int32_t l_839 = 4L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_403[i] = 0x052B233DL;
    for (i = 0; i < 2; i++)
        l_446[i] = 2UL;
    if (((0x469AL <= func_2(func_4(((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(p_840->g_comm_values[p_840->tid], func_11(p_840->g_comm_values[p_840->tid], (l_15 <= p_840->l_comm_values[(safe_mod_func_uint32_t_u_u(p_840->tid, 172))]), l_15, p_840), 9L, (-7L))).w, 2)) || (l_15 , 0UL)), p_840->g_149.s7, p_840), p_840)) , (-1L)))
    { /* block id: 98 */
        (*p_840->g_397) = (*p_840->g_397);
    }
    else
    { /* block id: 100 */
        int32_t *l_398 = &p_840->g_59;
        int32_t *l_399 = &p_840->g_276;
        int32_t *l_400 = &p_840->g_276;
        int32_t *l_401[3];
        uint32_t l_404 = 0xB8F6F7FDL;
        int16_t *l_410 = &p_840->g_153;
        int16_t *l_415 = &p_840->g_416;
        VECTOR(uint8_t, 4) l_420 = (VECTOR(uint8_t, 4))(0x80L, (VECTOR(uint8_t, 2))(0x80L, 0x00L), 0x00L);
        uint64_t l_426 = 0xE39AFF12191CCB31L;
        uint8_t l_427 = 0x03L;
        int i;
        for (i = 0; i < 3; i++)
            l_401[i] = &p_840->g_276;
        l_404--;
        (*l_399) = ((*l_398) = ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((safe_lshift_func_uint8_t_u_u(p_840->g_95[2][2], 4)), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_409.zw)).xxxxxyyx)).s6447250501360532)).se8, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x0B289810L, (-1L))).yxyxyyyyyxxyyyyx)).s1f))).xyxy, ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((((*l_410) = p_840->g_57) < (safe_sub_func_int64_t_s_s(((((7UL ^ ((*p_840->g_167) == 252UL)) >= ((*l_415) = (safe_lshift_func_int16_t_s_s(p_840->g_173.x, l_403[0])))) , (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))(l_419.s7044732371546646)), ((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 4))(l_420.zyzx)).ywxzzywy, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 2))(0xD6L, 0UL)).yxyxxxyy, ((VECTOR(uint8_t, 16))(p_840->g_421.yyyyyxxyxyyyyxxx)).even))).s57)), 8UL, 0x20L)).yyxxwzxy))).s3445373707463253, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_840->g_422.yy)), 0x87L, 0xF7L)))).xwwwywwzyxywwzzy))).s90)))), ((VECTOR(uint8_t, 4))(p_840->g_423.s639e)), ((VECTOR(uint8_t, 2))(254UL, 0x5AL)), ((((safe_add_func_int16_t_s_s(l_403[0], 65532UL)) , l_426) <= (*p_840->g_167)) != p_840->g_211.s2), ((VECTOR(uint8_t, 4))(0xE0L)), 0x0CL, 0x47L, 0x77L)).s0a))))).yxxy, ((VECTOR(uint8_t, 4))(0UL))))).w, (*p_840->g_167)))) , p_840->g_143.sd), p_840->g_339.y))) , l_403[0]), (-8L), l_403[0], 0x04B74EBBL, (*l_398), ((VECTOR(int32_t, 2))(6L)), 0x25F462ABL)).s2456577542106657)), ((VECTOR(int32_t, 16))((-1L))), ((VECTOR(int32_t, 16))(2L))))).s8b21))), (*p_840->g_397), 0x61CF256AL, (-3L))).even)), l_427, (-1L), 0L, (-6L))).s0376602207161736, ((VECTOR(int32_t, 16))(0x07401E0DL)), ((VECTOR(int32_t, 16))((-10L)))))).sb);
    }
    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(l_428.wx)).yxxy, ((VECTOR(uint16_t, 4))(l_429.yyzw))))).xzyzxyyxxzyyxyzz)).s3)
    { /* block id: 107 */
        int32_t l_445 = 0x3C049724L;
        int32_t l_453[4];
        uint64_t l_514 = 0x80BD842CDD0DE024L;
        VECTOR(uint32_t, 2) l_515 = (VECTOR(uint32_t, 2))(4294967288UL, 0x9F399BD9L);
        uint32_t l_518 = 1UL;
        VECTOR(int8_t, 4) l_536 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-9L)), (-9L));
        uint32_t *l_554 = &p_840->g_40;
        int16_t *l_565[9][1] = {{&p_840->g_153},{&p_840->g_153},{&p_840->g_153},{&p_840->g_153},{&p_840->g_153},{&p_840->g_153},{&p_840->g_153},{&p_840->g_153},{&p_840->g_153}};
        uint32_t l_577 = 5UL;
        VECTOR(uint16_t, 16) l_599 = (VECTOR(uint16_t, 16))(0xDC74L, (VECTOR(uint16_t, 4))(0xDC74L, (VECTOR(uint16_t, 2))(0xDC74L, 2UL), 2UL), 2UL, 0xDC74L, 2UL, (VECTOR(uint16_t, 2))(0xDC74L, 2UL), (VECTOR(uint16_t, 2))(0xDC74L, 2UL), 0xDC74L, 2UL, 0xDC74L, 2UL);
        VECTOR(uint16_t, 16) l_604 = (VECTOR(uint16_t, 16))(0x45BCL, (VECTOR(uint16_t, 4))(0x45BCL, (VECTOR(uint16_t, 2))(0x45BCL, 0x1F75L), 0x1F75L), 0x1F75L, 0x45BCL, 0x1F75L, (VECTOR(uint16_t, 2))(0x45BCL, 0x1F75L), (VECTOR(uint16_t, 2))(0x45BCL, 0x1F75L), 0x45BCL, 0x1F75L, 0x45BCL, 0x1F75L);
        int32_t l_605 = 9L;
        VECTOR(int8_t, 8) l_625 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 2L), 2L), 2L, 0L, 2L);
        int8_t **l_634 = &p_840->g_167;
        int64_t l_715 = (-1L);
        int8_t *l_745 = (void*)0;
        int i, j;
        for (i = 0; i < 4; i++)
            l_453[i] = 0x1A6D3F55L;
        if ((0x785EC50F4389B07AL >= ((VECTOR(int64_t, 4))(l_430.s5774)).x))
        { /* block id: 108 */
            uint16_t l_435 = 0xA3CAL;
            int64_t *l_444 = (void*)0;
            VECTOR(int32_t, 2) l_509 = (VECTOR(int32_t, 2))(2L, 0L);
            VECTOR(uint32_t, 8) l_516 = (VECTOR(uint32_t, 8))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 4UL), 4UL), 4UL, 4294967292UL, 4UL);
            int8_t l_538 = 0x7EL;
            uint16_t *l_539 = (void*)0;
            uint16_t *l_540 = &p_840->g_310[4];
            uint32_t *l_541 = (void*)0;
            uint32_t *l_542[6][1];
            int i, j;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 1; j++)
                    l_542[i][j] = &p_840->g_468;
            }
            for (p_840->g_129 = 0; (p_840->g_129 != (-28)); --p_840->g_129)
            { /* block id: 111 */
                return p_840->g_173.x;
            }
            for (p_840->g_113 = 0; (p_840->g_113 >= 5); ++p_840->g_113)
            { /* block id: 116 */
                uint16_t *l_438 = &p_840->g_310[4];
                int64_t **l_442 = (void*)0;
                int64_t **l_443 = &p_840->g_441;
                int32_t **l_447 = (void*)0;
                int32_t **l_448 = (void*)0;
                int32_t **l_449 = (void*)0;
                int32_t **l_450 = &p_840->g_197;
                (*p_840->g_194) = ((*l_450) = func_43(&p_840->g_57, p_840->g_59, l_435, (p_840->g_191[4] != (((VECTOR(uint64_t, 2))(0xA8AAA3B379B81593L, 18446744073709551607UL)).odd , ((safe_lshift_func_uint16_t_u_s(((((*l_438) = GROUP_DIVERGE(0, 1)) >= (((l_403[0] = p_840->g_27) < ((&p_840->g_27 == &p_840->g_112) | 0xEC03L)) | (((safe_lshift_func_uint8_t_u_u(((((*l_443) = p_840->g_441) == l_444) | 0x07671A74L), 0)) , l_445) > p_840->g_288.z))) & l_446[0]), l_445)) >= 0x02L))), p_840));
                for (p_840->g_57 = (-11); (p_840->g_57 > 44); ++p_840->g_57)
                { /* block id: 124 */
                    int32_t *l_454 = (void*)0;
                    int32_t *l_455 = &p_840->g_276;
                    int32_t *l_456 = &p_840->g_59;
                    int32_t *l_457 = &l_403[0];
                    int32_t *l_458 = &l_453[3];
                    int32_t *l_459 = &p_840->g_276;
                    int32_t *l_461 = (void*)0;
                    int32_t *l_462 = &p_840->g_59;
                    int32_t *l_463 = &l_403[0];
                    int32_t *l_464 = &l_402;
                    int32_t *l_465 = (void*)0;
                    int32_t *l_466 = (void*)0;
                    int32_t *l_467[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    p_840->g_468++;
                }
            }
            if ((&p_840->g_56[1][1][0] != &p_840->g_56[3][1][0]))
            { /* block id: 128 */
                return l_435;
            }
            else
            { /* block id: 130 */
                int32_t **l_471[8] = {&p_840->g_197,&p_840->g_197,&p_840->g_197,&p_840->g_197,&p_840->g_197,&p_840->g_197,&p_840->g_197,&p_840->g_197};
                uint64_t *l_517 = &l_514;
                uint16_t l_519 = 6UL;
                int64_t *l_520 = &p_840->g_129;
                int i;
                l_472 = &l_403[0];
                p_840->g_276 ^= (safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s((-8L), (safe_rshift_func_int16_t_s_u(p_840->g_153, ((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(1L, 0x1577L))))))).yxxx)).wwwxxzwy))).s4)))) , ((safe_mod_func_uint64_t_u_u(p_840->g_357.s1, (((((*l_520) = (((VECTOR(uint16_t, 2))(1UL, 1UL)).hi > (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((p_840->g_364.s5 = (safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s(((safe_div_func_uint64_t_u_u(((-3L) <= ((safe_mul_func_uint8_t_u_u((p_840->g_310[1] == (((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((((VECTOR(uint32_t, 2))(0x642B21CBL, 0UL)).even ^ (((VECTOR(int64_t, 2))(6L, 0L)).even <= ((safe_div_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u(((((VECTOR(uint64_t, 8))(p_840->g_505.xxywzwyy)).s6 , FAKE_DIVERGE(p_840->group_0_offset, get_group_id(0), 10)) | p_840->g_92), (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_840->g_508.yy)).yyyyxyxx)).lo)).even)), (-1L), 0x14L)).lo)), ((VECTOR(int8_t, 8))((((*l_472) = ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))((-2L), 1L)).yyyxxyyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_509.yy)), (-6L), 0x1575A922L)).xyyxzxyy))).s0) | (safe_mul_func_uint16_t_u_u((((l_435 > (((*l_517) = ((safe_rshift_func_int8_t_s_s(l_514, (((((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))((-1L), (((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 2))(l_515.yy)).xxxyyxxxxyxxyxxx, ((VECTOR(uint32_t, 16))(l_516.s1562020461724550))))).sa , (*p_840->g_167)), 0x70L, ((VECTOR(int8_t, 4))((-1L))), 1L)).s51)).xyxyxyxx, ((VECTOR(int8_t, 8))(0x69L))))).s4 ^ l_453[3]) | l_516.s6) || l_453[3]))) <= (-2L))) <= p_840->g_422.y)) != FAKE_DIVERGE(p_840->local_0_offset, get_local_id(0), 10)) > p_840->g_223.y), p_840->g_27))), ((VECTOR(int8_t, 4))(0x21L)), 0x41L, 0x29L, 0x57L)).s04))).xxxx, ((VECTOR(int8_t, 4))(6L))))).y, l_518)))), (*p_840->g_167))) && p_840->g_224.y))), p_840->g_316.s0)), 6)), p_840->g_40)) & 0x208BL) <= l_519)), (*p_840->g_167))) , (*p_840->g_167))), 0x654BF2DDCF426840L)) | (*p_840->g_167)), l_516.s4)), 2))) & 4294967295UL) ^ p_840->g_137[0][0][0]), GROUP_DIVERGE(0, 1))), 2UL)))) >= l_445) != p_840->g_505.z) , 1UL))) ^ l_453[3])), l_516.s0)), 255UL));
                l_509.y = (safe_lshift_func_uint8_t_u_u((p_840->g_422.y == (*l_472)), (p_840->g_330.x || 5L)));
            }
            p_840->g_364.s5 |= (((safe_add_func_int8_t_s_s(((((*p_840->g_397) != 0x9B2D5952L) , (l_509.x = (safe_mul_func_uint16_t_u_u(l_515.x, (l_518 , ((safe_add_func_uint16_t_u_u((&p_840->g_310[5] == (p_840->g_529 = &p_840->g_310[4])), ((safe_rshift_func_int8_t_s_s(l_515.x, (safe_add_func_int32_t_s_s(((*l_472) |= (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(l_536.yyyy)).xxzxwzxwyyxxxyxw, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_840->g_537.yyxwxyyw)))).s1372034572221132))).s2b85)).z, (~l_538)))), (p_840->g_137[0][0][0] = (((*l_540) = (FAKE_DIVERGE(p_840->local_1_offset, get_local_id(1), 10) && (((VECTOR(int64_t, 2))(0x5D3B2996DBA0EF00L, 0x7128CD05E4FA29BFL)).hi >= (p_840->g_315 | l_516.s7)))) < p_840->g_149.s6)))))) | l_538))) > 4294967288UL)))))) == 0x0C20A738L), (*p_840->g_167))) != p_840->g_330.x) < 1UL);
        }
        else
        { /* block id: 145 */
            uint8_t *l_550 = (void*)0;
            int32_t l_551 = (-1L);
            uint32_t **l_555 = (void*)0;
            uint32_t *l_556 = (void*)0;
            int32_t l_559 = (-1L);
            int32_t **l_561 = &l_472;
            int16_t *l_564 = &p_840->g_153;
            int16_t **l_566 = &l_565[1][0];
            int16_t *l_568 = &p_840->g_153;
            int16_t **l_567 = &l_568;
            int8_t *l_576[6][6] = {{&p_840->g_112,&p_840->g_113,&p_840->g_27,&l_15,&p_840->g_27,&p_840->g_113},{&p_840->g_112,&p_840->g_113,&p_840->g_27,&l_15,&p_840->g_27,&p_840->g_113},{&p_840->g_112,&p_840->g_113,&p_840->g_27,&l_15,&p_840->g_27,&p_840->g_113},{&p_840->g_112,&p_840->g_113,&p_840->g_27,&l_15,&p_840->g_27,&p_840->g_113},{&p_840->g_112,&p_840->g_113,&p_840->g_27,&l_15,&p_840->g_27,&p_840->g_113},{&p_840->g_112,&p_840->g_113,&p_840->g_27,&l_15,&p_840->g_27,&p_840->g_113}};
            VECTOR(uint32_t, 4) l_580 = (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 0x8321D056L), 0x8321D056L);
            int i, j;
            (*l_561) = ((p_840->g_313 <= (safe_add_func_uint64_t_u_u((((safe_div_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((safe_sub_func_uint64_t_u_u(p_840->g_191[7], (*l_472))))), (l_551 &= (p_840->g_357.s7 <= ((*p_840->g_167) >= 0x61L))))) != ((VECTOR(int16_t, 8))((safe_mod_func_uint64_t_u_u((((l_556 = (p_840->g_56[3][1][0] = l_554)) != l_472) != (safe_add_func_int8_t_s_s(1L, l_559))), l_560)), ((VECTOR(int16_t, 2))((-9L))), 0x1C55L, (-1L), 0x2016L, 0x2E2DL, (-1L))).s7) , FAKE_DIVERGE(p_840->global_0_offset, get_global_id(0), 10)), (-10L)))) , &l_453[3]);
            (*l_472) = ((safe_sub_func_int8_t_s_s((l_559 |= ((((l_564 != ((*l_567) = ((*l_566) = l_565[6][0]))) != ((safe_div_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((*p_840->g_167), l_518)), (safe_rshift_func_uint8_t_u_s((&l_554 != &p_840->g_56[1][1][0]), 4)))) , (((p_840->g_316.s1 , (**l_561)) == ((((&p_840->g_153 == l_575[5][0]) | l_445) >= (*p_840->g_167)) != 246UL)) <= 0L))) | p_840->g_422.w) | p_840->g_223.x)), p_840->g_357.s2)) , l_577);
            for (l_518 = (-6); (l_518 <= 57); l_518 = safe_add_func_int16_t_s_s(l_518, 2))
            { /* block id: 156 */
                (**l_561) = ((~((VECTOR(uint32_t, 8))(l_580.yyzxxxxy)).s1) < p_840->g_comm_values[p_840->tid]);
            }
        }
        for (p_840->g_460 = 0; (p_840->g_460 == 23); ++p_840->g_460)
        { /* block id: 162 */
            int32_t l_595 = 0x4DD7E88AL;
            uint16_t *l_596[2][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            VECTOR(uint16_t, 2) l_597 = (VECTOR(uint16_t, 2))(0UL, 8UL);
            VECTOR(uint16_t, 4) l_603 = (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 0x63B4L), 0x63B4L);
            uint64_t *l_606 = &p_840->g_92;
            VECTOR(uint16_t, 8) l_610 = (VECTOR(uint16_t, 8))(0xD5FEL, (VECTOR(uint16_t, 4))(0xD5FEL, (VECTOR(uint16_t, 2))(0xD5FEL, 0x7ACAL), 0x7ACAL), 0x7ACAL, 0xD5FEL, 0x7ACAL);
            VECTOR(int32_t, 16) l_632 = (VECTOR(int32_t, 16))(0x1A0B0BB9L, (VECTOR(int32_t, 4))(0x1A0B0BB9L, (VECTOR(int32_t, 2))(0x1A0B0BB9L, 0x44B78A24L), 0x44B78A24L), 0x44B78A24L, 0x1A0B0BB9L, 0x44B78A24L, (VECTOR(int32_t, 2))(0x1A0B0BB9L, 0x44B78A24L), (VECTOR(int32_t, 2))(0x1A0B0BB9L, 0x44B78A24L), 0x1A0B0BB9L, 0x44B78A24L, 0x1A0B0BB9L, 0x44B78A24L);
            uint32_t *l_747 = (void*)0;
            int32_t *l_752 = (void*)0;
            int32_t *l_753 = (void*)0;
            int32_t *l_754 = &p_840->g_59;
            int32_t *l_755 = &l_453[3];
            int32_t *l_756 = &l_453[3];
            int32_t *l_757[4][3] = {{&l_453[3],&l_453[0],&p_840->g_59},{&l_453[3],&l_453[0],&p_840->g_59},{&l_453[3],&l_453[0],&p_840->g_59},{&l_453[3],&l_453[0],&p_840->g_59}};
            int i, j;
            for (p_840->g_315 = 0; (p_840->g_315 > 46); p_840->g_315 = safe_add_func_int8_t_s_s(p_840->g_315, 8))
            { /* block id: 165 */
                (*l_472) &= (-1L);
                return p_840->g_153;
            }
            if (l_585)
                break;
            if (((((*l_606) = (safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((l_590 = 255UL), (p_840->g_310[4] < (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(0x0AE8L, (p_840->g_143.s6 = ((safe_div_func_int32_t_s_s(l_595, GROUP_DIVERGE(1, 1))) == (*p_840->g_167))), ((VECTOR(uint16_t, 2))(65530UL, 0UL)), 0x5E80L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_597.yxxy)), ((VECTOR(uint16_t, 4))(l_597.x, ((VECTOR(uint16_t, 2))(p_840->g_598.s43)), 7UL)), ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_599.se3fc21e7)))), ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 2))(p_840->g_600.s3c)).yyyy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 4))(p_840->g_601.yyyy)).yxxwyyyz, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_840->g_602.xyyx)).zwxzxzzzywzywzzy)).s5f, ((VECTOR(uint16_t, 2))(l_603.xx))))).xyxyxyyx))).s3044112700246451)).s86ac)).lo)), 0x25BEL, 0x6CBEL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(0xF378L, ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 2))(l_604.sf7)).xxyy))), ((VECTOR(uint16_t, 8))(4UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(65535UL, 9UL)))), 0xE574L, 0x0CF4L, (l_605 = ((*l_472) = (0x6BBCL == p_840->g_505.w))), 0x8620L, 65526UL)), 0xDC02L, 0x1D7EL, 0x1673L)).s66)).yyxx))))), 0xBBA4L, ((VECTOR(uint16_t, 2))(0x6BF4L)), ((VECTOR(uint16_t, 4))(0x96DDL)), 65535UL)).sf49b))).xwxzwyyw, ((VECTOR(uint16_t, 8))(0xBEFAL))))))).sca)), 0x39FDL)).s2, l_604.s4))))), p_840->g_92))) , l_603.y) <= GROUP_DIVERGE(1, 1)))
            { /* block id: 175 */
                VECTOR(uint32_t, 8) l_620 = (VECTOR(uint32_t, 8))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0xEF38798BL), 0xEF38798BL), 0xEF38798BL, 4294967292UL, 0xEF38798BL);
                int32_t *l_630[4][10] = {{(void*)0,&p_840->g_276,&l_403[0],&p_840->g_276,(void*)0,(void*)0,&p_840->g_276,&l_403[0],&p_840->g_276,(void*)0},{(void*)0,&p_840->g_276,&l_403[0],&p_840->g_276,(void*)0,(void*)0,&p_840->g_276,&l_403[0],&p_840->g_276,(void*)0},{(void*)0,&p_840->g_276,&l_403[0],&p_840->g_276,(void*)0,(void*)0,&p_840->g_276,&l_403[0],&p_840->g_276,(void*)0},{(void*)0,&p_840->g_276,&l_403[0],&p_840->g_276,(void*)0,(void*)0,&p_840->g_276,&l_403[0],&p_840->g_276,(void*)0}};
                int i, j;
                if (l_603.x)
                { /* block id: 176 */
                    return p_840->g_505.w;
                }
                else
                { /* block id: 178 */
                    int32_t l_615[10] = {6L,0L,(-6L),0L,6L,6L,0L,(-6L),0L,6L};
                    int64_t **l_626 = &p_840->g_441;
                    int32_t **l_629[5][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
                    uint8_t *l_633 = &p_840->g_169[4];
                    int i, j;
                    for (l_514 = 0; (l_514 != 58); l_514++)
                    { /* block id: 181 */
                        (*l_472) = ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(p_840->g_609.xx)))), ((VECTOR(uint16_t, 2))(l_610.s00))))).even;
                    }
                    if ((*p_840->g_397))
                        continue;
                    if ((*p_840->g_397))
                    { /* block id: 185 */
                        return p_840->g_357.s3;
                    }
                    else
                    { /* block id: 187 */
                        uint32_t *l_613[10] = {&p_840->g_468,&p_840->g_468,&p_840->g_137[0][0][0],&p_840->g_468,&p_840->g_468,&p_840->g_468,&p_840->g_468,&p_840->g_137[0][0][0],&p_840->g_468,&p_840->g_468};
                        int i;
                        (*l_472) = ((safe_div_func_uint32_t_u_u((p_840->g_468 = p_840->g_310[4]), ((VECTOR(uint32_t, 2))(p_840->g_614.s17)).even)) > ((VECTOR(uint64_t, 8))(3UL, ((VECTOR(uint64_t, 2))(0x7B5445B7A275E21AL, 2UL)), 0xF05EAC00D0ABAC4FL, 0x69F31A67D4BA1193L, 0x560C3E7A56EFE57BL, 0xB75CC7119B55087AL, 6UL)).s1);
                        if (l_615[0])
                            continue;
                        if ((*p_840->g_397))
                            continue;
                        (*p_840->g_617) = (*p_840->g_194);
                    }
                    (*l_472) = (safe_add_func_uint16_t_u_u((((*l_472) , ((VECTOR(uint32_t, 8))(l_620.s76157314)).s7) ^ 0xCF6D5F9AL), (((((safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_625.s4102)).x, (&p_840->g_138 == ((*l_626) = &p_840->g_129)))), 6)) , (((safe_mul_func_int8_t_s_s((l_631 = (((l_630[3][1] = (*p_840->g_194)) != &p_840->g_276) , 6L)), l_632.sb)) , ((*l_633) |= p_840->g_95[1][1])) && l_610.s3)) | 1UL) , l_634) == (void*)0)));
                }
            }
            else
            { /* block id: 200 */
                VECTOR(uint32_t, 16) l_701 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL);
                uint32_t l_702 = 1UL;
                int32_t l_714[6][7] = {{(-1L),0x17F6E7D1L,0L,(-2L),0L,0x17F6E7D1L,(-1L)},{(-1L),0x17F6E7D1L,0L,(-2L),0L,0x17F6E7D1L,(-1L)},{(-1L),0x17F6E7D1L,0L,(-2L),0L,0x17F6E7D1L,(-1L)},{(-1L),0x17F6E7D1L,0L,(-2L),0L,0x17F6E7D1L,(-1L)},{(-1L),0x17F6E7D1L,0L,(-2L),0L,0x17F6E7D1L,(-1L)},{(-1L),0x17F6E7D1L,0L,(-2L),0L,0x17F6E7D1L,(-1L)}};
                int64_t *l_742[10][6] = {{&p_840->g_460,&p_840->g_460,&p_840->g_129,&l_590,(void*)0,&l_590},{&p_840->g_460,&p_840->g_460,&p_840->g_129,&l_590,(void*)0,&l_590},{&p_840->g_460,&p_840->g_460,&p_840->g_129,&l_590,(void*)0,&l_590},{&p_840->g_460,&p_840->g_460,&p_840->g_129,&l_590,(void*)0,&l_590},{&p_840->g_460,&p_840->g_460,&p_840->g_129,&l_590,(void*)0,&l_590},{&p_840->g_460,&p_840->g_460,&p_840->g_129,&l_590,(void*)0,&l_590},{&p_840->g_460,&p_840->g_460,&p_840->g_129,&l_590,(void*)0,&l_590},{&p_840->g_460,&p_840->g_460,&p_840->g_129,&l_590,(void*)0,&l_590},{&p_840->g_460,&p_840->g_460,&p_840->g_129,&l_590,(void*)0,&l_590},{&p_840->g_460,&p_840->g_460,&p_840->g_129,&l_590,(void*)0,&l_590}};
                uint32_t **l_746 = &l_554;
                int32_t *l_748 = &l_605;
                int8_t *l_750 = &p_840->g_113;
                int8_t *l_751 = &l_15;
                int i, j;
                for (l_518 = (-23); (l_518 < 11); ++l_518)
                { /* block id: 203 */
                    if ((*l_472))
                        break;
                    (*l_472) ^= ((safe_sub_func_uint16_t_u_u(((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0xA1E98EECDB26DBE5L, 0UL)).xyyx)).lo)).odd | ((void*)0 == l_554)) || 0x76L), p_840->g_191[4])) , ((VECTOR(int32_t, 2))(0x662F9B85L, (-1L))).hi);
                    return p_840->g_602.y;
                }
                if ((atomic_inc(&p_840->l_atomic_input[88]) == 9))
                { /* block id: 209 */
                    uint8_t l_639 = 7UL;
                    uint32_t l_640 = 0x84611DA4L;
                    uint32_t l_641 = 4294967295UL;
                    VECTOR(int32_t, 4) l_672 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x479A8E7BL), 0x479A8E7BL);
                    VECTOR(int32_t, 4) l_673 = (VECTOR(int32_t, 4))(0x65F3A466L, (VECTOR(int32_t, 2))(0x65F3A466L, 9L), 9L);
                    VECTOR(int32_t, 2) l_674 = (VECTOR(int32_t, 2))(0x7BDC15ECL, 0x3C29101CL);
                    VECTOR(int32_t, 4) l_675 = (VECTOR(int32_t, 4))(0x7094652DL, (VECTOR(int32_t, 2))(0x7094652DL, 1L), 1L);
                    int64_t l_676 = 0x6696245C5F8FAD69L;
                    int8_t l_677 = 0x16L;
                    uint64_t l_678 = 0xF1F9565CA3CD3F2BL;
                    VECTOR(int16_t, 4) l_679 = (VECTOR(int16_t, 4))(0x59FAL, (VECTOR(int16_t, 2))(0x59FAL, 0x5C27L), 0x5C27L);
                    int64_t l_680 = (-6L);
                    int32_t l_681[4][2][7] = {{{(-7L),0x2FFD5D94L,(-1L),(-7L),(-1L),(-1L),(-1L)},{(-7L),0x2FFD5D94L,(-1L),(-7L),(-1L),(-1L),(-1L)}},{{(-7L),0x2FFD5D94L,(-1L),(-7L),(-1L),(-1L),(-1L)},{(-7L),0x2FFD5D94L,(-1L),(-7L),(-1L),(-1L),(-1L)}},{{(-7L),0x2FFD5D94L,(-1L),(-7L),(-1L),(-1L),(-1L)},{(-7L),0x2FFD5D94L,(-1L),(-7L),(-1L),(-1L),(-1L)}},{{(-7L),0x2FFD5D94L,(-1L),(-7L),(-1L),(-1L),(-1L)},{(-7L),0x2FFD5D94L,(-1L),(-7L),(-1L),(-1L),(-1L)}}};
                    VECTOR(int16_t, 16) l_682 = (VECTOR(int16_t, 16))(0x431FL, (VECTOR(int16_t, 4))(0x431FL, (VECTOR(int16_t, 2))(0x431FL, 0x55F6L), 0x55F6L), 0x55F6L, 0x431FL, 0x55F6L, (VECTOR(int16_t, 2))(0x431FL, 0x55F6L), (VECTOR(int16_t, 2))(0x431FL, 0x55F6L), 0x431FL, 0x55F6L, 0x431FL, 0x55F6L);
                    int16_t l_683 = (-1L);
                    uint32_t l_684 = 1UL;
                    VECTOR(int8_t, 4) l_685 = (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0L), 0L);
                    VECTOR(uint8_t, 16) l_686 = (VECTOR(uint8_t, 16))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 249UL), 249UL), 249UL, 5UL, 249UL, (VECTOR(uint8_t, 2))(5UL, 249UL), (VECTOR(uint8_t, 2))(5UL, 249UL), 5UL, 249UL, 5UL, 249UL);
                    VECTOR(int8_t, 4) l_687 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L);
                    VECTOR(int8_t, 4) l_688 = (VECTOR(int8_t, 4))(0x10L, (VECTOR(int8_t, 2))(0x10L, (-1L)), (-1L));
                    int8_t l_689 = 7L;
                    int64_t l_690 = 0x1A5AA14BDF9BB8DBL;
                    VECTOR(uint8_t, 8) l_691 = (VECTOR(uint8_t, 8))(0x8AL, (VECTOR(uint8_t, 4))(0x8AL, (VECTOR(uint8_t, 2))(0x8AL, 0xE1L), 0xE1L), 0xE1L, 0x8AL, 0xE1L);
                    VECTOR(uint8_t, 16) l_692 = (VECTOR(uint8_t, 16))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0x76L), 0x76L), 0x76L, 247UL, 0x76L, (VECTOR(uint8_t, 2))(247UL, 0x76L), (VECTOR(uint8_t, 2))(247UL, 0x76L), 247UL, 0x76L, 247UL, 0x76L);
                    VECTOR(uint8_t, 16) l_693 = (VECTOR(uint8_t, 16))(249UL, (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 0xD2L), 0xD2L), 0xD2L, 249UL, 0xD2L, (VECTOR(uint8_t, 2))(249UL, 0xD2L), (VECTOR(uint8_t, 2))(249UL, 0xD2L), 249UL, 0xD2L, 249UL, 0xD2L);
                    VECTOR(int16_t, 16) l_694 = (VECTOR(int16_t, 16))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0x1D66L), 0x1D66L), 0x1D66L, 4L, 0x1D66L, (VECTOR(int16_t, 2))(4L, 0x1D66L), (VECTOR(int16_t, 2))(4L, 0x1D66L), 4L, 0x1D66L, 4L, 0x1D66L);
                    VECTOR(uint32_t, 16) l_695 = (VECTOR(uint32_t, 16))(0x1F2E2931L, (VECTOR(uint32_t, 4))(0x1F2E2931L, (VECTOR(uint32_t, 2))(0x1F2E2931L, 4294967288UL), 4294967288UL), 4294967288UL, 0x1F2E2931L, 4294967288UL, (VECTOR(uint32_t, 2))(0x1F2E2931L, 4294967288UL), (VECTOR(uint32_t, 2))(0x1F2E2931L, 4294967288UL), 0x1F2E2931L, 4294967288UL, 0x1F2E2931L, 4294967288UL);
                    uint32_t l_696 = 0xF9197E70L;
                    int64_t l_697 = 0x29092C9B99492F14L;
                    uint32_t l_698 = 0x7F01CE0DL;
                    VECTOR(uint16_t, 2) l_699 = (VECTOR(uint16_t, 2))(5UL, 0x5018L);
                    int32_t l_700 = (-1L);
                    int i, j, k;
                    if ((l_641 = (l_640 = l_639)))
                    { /* block id: 212 */
                        int32_t l_643 = 0x5DEB44E3L;
                        int32_t *l_642 = &l_643;
                        int32_t *l_644 = &l_643;
                        int64_t l_645 = (-10L);
                        l_644 = l_642;
                        (*l_642) = ((VECTOR(int32_t, 8))(l_645, ((VECTOR(int32_t, 4))(0x3FE7F72FL, 9L, (-1L), 0x28D0A66DL)), 0x2082C744L, 5L, 0L)).s0;
                    }
                    else
                    { /* block id: 215 */
                        VECTOR(int16_t, 16) l_646 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int16_t, 2))((-1L), 1L), (VECTOR(int16_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
                        VECTOR(int16_t, 8) l_647 = (VECTOR(int16_t, 8))(0x1F6BL, (VECTOR(int16_t, 4))(0x1F6BL, (VECTOR(int16_t, 2))(0x1F6BL, 1L), 1L), 1L, 0x1F6BL, 1L);
                        VECTOR(int8_t, 2) l_648 = (VECTOR(int8_t, 2))((-7L), 4L);
                        int64_t l_649 = 5L;
                        VECTOR(uint8_t, 2) l_650 = (VECTOR(uint8_t, 2))(1UL, 250UL);
                        int16_t l_651 = 0x2E5CL;
                        VECTOR(int32_t, 16) l_652 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), (-1L)), (-1L)), (-1L), (-6L), (-1L), (VECTOR(int32_t, 2))((-6L), (-1L)), (VECTOR(int32_t, 2))((-6L), (-1L)), (-6L), (-1L), (-6L), (-1L));
                        VECTOR(int32_t, 4) l_653 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-3L)), (-3L));
                        VECTOR(int16_t, 16) l_654 = (VECTOR(int16_t, 16))(0x610EL, (VECTOR(int16_t, 4))(0x610EL, (VECTOR(int16_t, 2))(0x610EL, (-1L)), (-1L)), (-1L), 0x610EL, (-1L), (VECTOR(int16_t, 2))(0x610EL, (-1L)), (VECTOR(int16_t, 2))(0x610EL, (-1L)), 0x610EL, (-1L), 0x610EL, (-1L));
                        VECTOR(int16_t, 4) l_655 = (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x32B6L), 0x32B6L);
                        int64_t l_656 = 0x11B3FF4C694FF472L;
                        uint32_t l_657 = 0x79C12CCDL;
                        uint16_t l_658 = 65529UL;
                        int32_t l_661 = 0x018C4AA2L;
                        int16_t l_662 = (-8L);
                        int64_t l_663 = (-1L);
                        int64_t l_664[4] = {(-1L),(-1L),(-1L),(-1L)};
                        uint8_t l_665 = 0x3FL;
                        int16_t l_666 = 0x465AL;
                        uint8_t l_667 = 0xDBL;
                        int64_t l_668 = (-2L);
                        uint32_t l_669 = 0xBA2B12F2L;
                        uint32_t l_670 = 1UL;
                        uint32_t l_671 = 4294967287UL;
                        int i;
                        l_671 = (((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))(0x4900L, 1L)), (int16_t)0x658CL))).yxxyyxyy, ((VECTOR(int16_t, 2))(l_646.s13)).xxxyxyyy))).even, ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_647.s71460141)).s71)), 0x7C7FL, (-1L))).lo, ((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(l_648.yyxxxxyxxxxyyxxx)).even, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_649, 0UL, ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_650.xyxyxyxy)).s0636273461463251)).s8, 1UL, 0x9DL, 0UL)), (uint8_t)(l_639 = l_651)))), ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))((((VECTOR(int32_t, 2))(l_652.s02)).even , (((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(0x4FF89174L, 0x5BD7E87DL)).yyyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_653.ywzxyyyy)).s31)).yyyx))))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0L, 1L, (-6L), 0L)).zxyyxyxz)).hi))).y , 0x92L)), FAKE_DIVERGE(p_840->global_2_offset, get_global_id(2), 10), 0x19L, 255UL)))).wxwwwywzwwwwxwww)).odd))), 7UL, 0x68L)))).even))).s77))), 1L, 0x5604L)).lo, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_654.sb8)), 0x4EABL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_655.wxyxzzxywzwwyxzw)).sb140)).z, ((VECTOR(int16_t, 4))(0x5754L, (l_658 |= (l_656 , l_657)), 0L, 0L)))))).s66))).yyyx, ((VECTOR(int16_t, 2))(1L, 5L)).xxxy))).y , (l_670 = ((((VECTOR(uint32_t, 16))((l_663 ^= ((VECTOR(uint32_t, 4))((l_662 = (l_661 |= (l_641--))), 0xAE304173L, 0x00837FECL, 0x4D1F0680L)).z), 0x4248356DL, l_664[2], l_665, ((VECTOR(uint32_t, 2))(4294967288UL)), 0x6243A36DL, l_666, l_667, ((VECTOR(uint32_t, 2))(1UL)), 0xD5A16AE0L, 4294967293UL, ((VECTOR(uint32_t, 2))(0x8AC3AE52L)), 4294967295UL)).sb , l_668) , l_669)));
                    }
                    l_700 |= (FAKE_DIVERGE(p_840->group_2_offset, get_group_id(2), 10) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_672.zxwzxxzz)).s7, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_673.zw)), 0x3D582886L, 1L)).xxwzywxxxxzzyzyy)))).s1, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x3ED52AF9L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_674.xxxxxyxx)).s47, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(l_675.wzyyywwxwywzxyyw)).even, ((VECTOR(int32_t, 4))(0x583587F8L, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))((l_676 , (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0L, 0x6E9CL, 0x0EA1L, l_677, l_678, ((VECTOR(int16_t, 16))((FAKE_DIVERGE(p_840->local_2_offset, get_local_id(2), 10) , (l_680 ^= ((VECTOR(int16_t, 16))(l_679.xyyyxzyzwzzzyxxz)).sa)), l_681[3][1][4], ((VECTOR(int16_t, 4))(l_682.s5f8e)), 0x31BDL, ((l_683 = 0x800303EDL) , ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-9L), 4L)).yyxyyxyxyxyxyxyx)).s7), l_684, 0x7A86L, ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(l_685.yx)), ((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(l_686.s45)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 2))(l_687.xy)), ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 16))(l_688.yywwzzzxzyxzxzzy)).lo, ((VECTOR(int8_t, 4))(0x68L, (l_690 = l_689), (-10L), 7L)).zwyyyzxy))).s64))).xxxyxyxyxxyyyxyy)).s69))).xyyyxyyy, ((VECTOR(uint8_t, 2))(l_691.s47)).yyyyyxyx))).s3763300443567104, ((VECTOR(uint8_t, 8))(l_692.s67deb141)).s7177217013226525, ((VECTOR(uint8_t, 2))(l_693.sc1)).xyyyyxyyyxyyyyyy))).s50))), 1L, ((VECTOR(int16_t, 2))(0L, 0x0B63L)), 0x0E6DL)).sc, ((VECTOR(int16_t, 8))(l_694.sa024a2b3)), 1L, 0x7D4EL)).s1b)).even , (l_698 = (((VECTOR(uint32_t, 8))(l_695.sed8dd86b)).s7 , (l_697 = l_696))))), 1L, l_699.x, ((VECTOR(int32_t, 4))(0L)), 0x4C646EB9L)).s47, ((VECTOR(int32_t, 2))(0x7B6CED1DL))))), 0L)).wzzwwzyy))).s73, ((VECTOR(int32_t, 2))(1L))))), (-8L), 0x1B9EC937L)), ((VECTOR(int32_t, 2))(0x4B7CB88FL)), (-6L))).hi)), 0x46DF9EA5L, 0x7501CE81L)).odd)))).hi)), 0x6812BBE9L, ((VECTOR(int32_t, 4))(1L)), 0x64965F58L)).s5);
                    unsigned int result = 0;
                    result += l_639;
                    result += l_640;
                    result += l_641;
                    result += l_672.w;
                    result += l_672.z;
                    result += l_672.y;
                    result += l_672.x;
                    result += l_673.w;
                    result += l_673.z;
                    result += l_673.y;
                    result += l_673.x;
                    result += l_674.y;
                    result += l_674.x;
                    result += l_675.w;
                    result += l_675.z;
                    result += l_675.y;
                    result += l_675.x;
                    result += l_676;
                    result += l_677;
                    result += l_678;
                    result += l_679.w;
                    result += l_679.z;
                    result += l_679.y;
                    result += l_679.x;
                    result += l_680;
                    int l_681_i0, l_681_i1, l_681_i2;
                    for (l_681_i0 = 0; l_681_i0 < 4; l_681_i0++) {
                        for (l_681_i1 = 0; l_681_i1 < 2; l_681_i1++) {
                            for (l_681_i2 = 0; l_681_i2 < 7; l_681_i2++) {
                                result += l_681[l_681_i0][l_681_i1][l_681_i2];
                            }
                        }
                    }
                    result += l_682.sf;
                    result += l_682.se;
                    result += l_682.sd;
                    result += l_682.sc;
                    result += l_682.sb;
                    result += l_682.sa;
                    result += l_682.s9;
                    result += l_682.s8;
                    result += l_682.s7;
                    result += l_682.s6;
                    result += l_682.s5;
                    result += l_682.s4;
                    result += l_682.s3;
                    result += l_682.s2;
                    result += l_682.s1;
                    result += l_682.s0;
                    result += l_683;
                    result += l_684;
                    result += l_685.w;
                    result += l_685.z;
                    result += l_685.y;
                    result += l_685.x;
                    result += l_686.sf;
                    result += l_686.se;
                    result += l_686.sd;
                    result += l_686.sc;
                    result += l_686.sb;
                    result += l_686.sa;
                    result += l_686.s9;
                    result += l_686.s8;
                    result += l_686.s7;
                    result += l_686.s6;
                    result += l_686.s5;
                    result += l_686.s4;
                    result += l_686.s3;
                    result += l_686.s2;
                    result += l_686.s1;
                    result += l_686.s0;
                    result += l_687.w;
                    result += l_687.z;
                    result += l_687.y;
                    result += l_687.x;
                    result += l_688.w;
                    result += l_688.z;
                    result += l_688.y;
                    result += l_688.x;
                    result += l_689;
                    result += l_690;
                    result += l_691.s7;
                    result += l_691.s6;
                    result += l_691.s5;
                    result += l_691.s4;
                    result += l_691.s3;
                    result += l_691.s2;
                    result += l_691.s1;
                    result += l_691.s0;
                    result += l_692.sf;
                    result += l_692.se;
                    result += l_692.sd;
                    result += l_692.sc;
                    result += l_692.sb;
                    result += l_692.sa;
                    result += l_692.s9;
                    result += l_692.s8;
                    result += l_692.s7;
                    result += l_692.s6;
                    result += l_692.s5;
                    result += l_692.s4;
                    result += l_692.s3;
                    result += l_692.s2;
                    result += l_692.s1;
                    result += l_692.s0;
                    result += l_693.sf;
                    result += l_693.se;
                    result += l_693.sd;
                    result += l_693.sc;
                    result += l_693.sb;
                    result += l_693.sa;
                    result += l_693.s9;
                    result += l_693.s8;
                    result += l_693.s7;
                    result += l_693.s6;
                    result += l_693.s5;
                    result += l_693.s4;
                    result += l_693.s3;
                    result += l_693.s2;
                    result += l_693.s1;
                    result += l_693.s0;
                    result += l_694.sf;
                    result += l_694.se;
                    result += l_694.sd;
                    result += l_694.sc;
                    result += l_694.sb;
                    result += l_694.sa;
                    result += l_694.s9;
                    result += l_694.s8;
                    result += l_694.s7;
                    result += l_694.s6;
                    result += l_694.s5;
                    result += l_694.s4;
                    result += l_694.s3;
                    result += l_694.s2;
                    result += l_694.s1;
                    result += l_694.s0;
                    result += l_695.sf;
                    result += l_695.se;
                    result += l_695.sd;
                    result += l_695.sc;
                    result += l_695.sb;
                    result += l_695.sa;
                    result += l_695.s9;
                    result += l_695.s8;
                    result += l_695.s7;
                    result += l_695.s6;
                    result += l_695.s5;
                    result += l_695.s4;
                    result += l_695.s3;
                    result += l_695.s2;
                    result += l_695.s1;
                    result += l_695.s0;
                    result += l_696;
                    result += l_697;
                    result += l_698;
                    result += l_699.y;
                    result += l_699.x;
                    result += l_700;
                    atomic_add(&p_840->l_special_values[88], result);
                }
                else
                { /* block id: 231 */
                    (1 + 1);
                }
                l_409.w = ((l_701.sf = 65527UL) || ((l_702 && (GROUP_DIVERGE(0, 1) , l_595)) , ((+(l_514 >= (((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(p_840->g_364.s5, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(p_840->g_703.zxzxzxxxzxxxyxxx)).sf4, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 8))(0x4CL, (-1L), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_840->g_704.yxyx)))), 0x50L, 0x27L)), ((VECTOR(uint8_t, 2))(p_840->g_705.s07)).yyyxyxxy))))).s06))), ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(0x4362L, (((*l_472) = (((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u((++p_840->g_601.x), (((safe_sub_func_int16_t_s_s((255UL >= l_714[1][1]), l_702)) || p_840->g_220.s5) == l_715))) > (-6L)), l_625.s0)) <= l_453[3]) | l_610.s0)) >= l_702), p_840->g_602.x, l_714[3][1], ((VECTOR(int16_t, 2))(1L)), 0x28EBL, 0L)))).odd, ((VECTOR(int16_t, 4))(0x7807L)), ((VECTOR(int16_t, 4))(0x6050L))))), (-9L))).hi, ((VECTOR(int16_t, 4))(3L))))).hi, ((VECTOR(int16_t, 2))((-1L)))))), l_597.x, (-8L), l_610.s4, p_840->g_614.s0, (-1L), 0x3426L)), ((VECTOR(int16_t, 8))(0L))))).s1 != p_840->g_27))) == (*p_840->g_167))));
                (*l_472) = (l_402 |= (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((*p_840->g_167), ((((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_840->local_0_offset, get_local_id(0), 10), (safe_lshift_func_uint16_t_u_s((l_701.s7 == (safe_lshift_func_int8_t_s_u((((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))(p_840->g_733.xy)).yxyyyyxxxxxxyxyy, ((VECTOR(int8_t, 2))(l_734.s40)).xyxyyyyyxyxxyxxy))).s6f, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(0x51L, ((VECTOR(int8_t, 2))(p_840->g_735.s26)), (-1L))), ((*l_751) ^= ((*l_750) = (safe_mod_func_int8_t_s_s((((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((*l_748) &= ((safe_mul_func_int8_t_s_s((l_597.y , ((l_714[1][2] &= (((FAKE_DIVERGE(p_840->group_2_offset, get_group_id(2), 10) , &l_554) != (((VECTOR(uint64_t, 4))(p_840->g_740.s225e)).x , &p_840->g_56[1][1][0])) || ((VECTOR(int32_t, 16))(p_840->g_741.yyxyyyxyyyyyyyxx)).se)) != ((p_840->g_138 = ((p_840->g_416 = l_701.sa) | 0x43F0L)) ^ (((*l_746) = func_48((l_745 = &p_840->g_112), ((0xC7L >= GROUP_DIVERGE(2, 1)) ^ l_453[3]), p_840->g_95[1][1], p_840)) == l_747)))), l_701.s6)) , (*l_472))), (-7L), 9L, (-1L))).odd)).yxxyxyyx, ((VECTOR(int32_t, 8))(0x15EDC414L))))).s4 , l_749), (-1L))))), ((VECTOR(int8_t, 2))((-7L))), 0L)), 0x0EL, 0L, 0L, l_632.s3, ((VECTOR(int8_t, 2))(0L)), (-1L), 1L)).lo, ((VECTOR(int8_t, 8))(1L))))).s44))).even, 0)) | l_595) >= p_840->g_129), l_610.s1))), 8)))), 5)), l_595)) , &l_514) != (void*)0) == GROUP_DIVERGE(0, 1)))), (*p_840->g_167))));
            }
            --p_840->g_758;
        }
        (*p_840->g_761) = &l_605;
    }
    else
    { /* block id: 252 */
        uint16_t l_762[1];
        VECTOR(int16_t, 2) l_771 = (VECTOR(int16_t, 2))(1L, (-1L));
        int16_t **l_772 = (void*)0;
        int64_t *l_776 = &p_840->g_129;
        int64_t *l_777 = (void*)0;
        int32_t l_778 = (-10L);
        uint32_t *l_779 = &p_840->g_468;
        uint64_t l_780 = 18446744073709551606UL;
        int32_t *l_782[5][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
        uint16_t l_794 = 0xDBB7L;
        uint64_t *l_832 = &p_840->g_833;
        int16_t l_834 = 0x38D0L;
        VECTOR(uint32_t, 8) l_835 = (VECTOR(uint32_t, 8))(0x9E6DBA83L, (VECTOR(uint32_t, 4))(0x9E6DBA83L, (VECTOR(uint32_t, 2))(0x9E6DBA83L, 0x2DE4A0EFL), 0x2DE4A0EFL), 0x2DE4A0EFL, 0x9E6DBA83L, 0x2DE4A0EFL);
        uint32_t ***l_838 = &p_840->g_836;
        int i, j;
        for (i = 0; i < 1; i++)
            l_762[i] = 1UL;
        l_402 &= (l_762[0] , ((*p_840->g_397) = ((safe_mul_func_int8_t_s_s((*p_840->g_167), ((VECTOR(uint8_t, 16))(255UL, 253UL, (((((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_s((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_771.yyxyxyyxxxxxxxyx)).s83)).hi ^ ((((((((l_772 == p_840->g_773) , (l_778 = (((l_776 = l_775) != l_777) && p_840->g_40))) < 0x153ED354AD07874BL) ^ ((&l_560 == l_779) <= (-1L))) > (*l_472)) | l_771.y) > l_780) ^ l_771.x)), (*l_472))) ^ l_780) , 5UL), 0xA4A86BF4C2CF8AE6L)), FAKE_DIVERGE(p_840->group_2_offset, get_group_id(2), 10))) , GROUP_DIVERGE(0, 1)) < 0x3E44L) || 0xA6L) <= l_781), ((VECTOR(uint8_t, 8))(3UL)), 1UL, p_840->g_705.sa, GROUP_DIVERGE(2, 1), 255UL, 0xA6L)).sb)) < p_840->g_609.x)));
        for (p_840->g_59 = 0; (p_840->g_59 < 7); p_840->g_59 = safe_add_func_int16_t_s_s(p_840->g_59, 8))
        { /* block id: 259 */
            int64_t l_787 = 0x04FD5930A4ABC971L;
            uint32_t l_806 = 4294967295UL;
            VECTOR(int32_t, 2) l_810 = (VECTOR(int32_t, 2))(1L, 0x3300D994L);
            int32_t l_811[2];
            int32_t **l_813[2];
            uint32_t **l_828 = &l_779;
            int i;
            for (i = 0; i < 2; i++)
                l_811[i] = 0L;
            for (i = 0; i < 2; i++)
                l_813[i] = &p_840->g_195;
            for (p_840->g_112 = 0; (p_840->g_112 >= 16); p_840->g_112++)
            { /* block id: 262 */
                return p_840->g_602.y;
            }
            (*p_840->g_194) = (((((l_787 , (safe_add_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s(l_794, ((p_840->g_339.x || (l_811[1] = (l_787 || ((p_840->g_276 <= ((safe_add_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), (l_810.y = (p_840->g_59 || (safe_rshift_func_int8_t_s_u(((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(p_840->g_801.zxyxyxwz)).hi)).w, (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((l_806 < ((safe_rshift_func_uint8_t_u_s(((l_787 , &p_840->g_167) == l_809), (*l_472))) > FAKE_DIVERGE(p_840->local_1_offset, get_local_id(1), 10))) < 0x360EF825L) , l_806), l_787)), 0x1DL)))) > p_840->g_598.s2), 3)))))) == l_806)) == (*l_472))))) != 6L))), p_840->g_537.x)), (*l_472)))) >= l_812) , &p_840->g_310[4]) == &l_749) , (void*)0);
            p_840->g_364.s0 &= (safe_lshift_func_int8_t_s_s(((&p_840->g_137[0][0][0] != ((*l_828) = func_48(&p_840->g_95[1][7], ((((*l_472) != p_840->g_220.s7) < (safe_div_func_int8_t_s_s((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x1AAC7F32L, 0xFB1A7483L)).yxyxyyxyyyxxyxxx)).s2 , (*p_840->g_167)), 0x01L))) <= p_840->g_705.s4), (((VECTOR(uint64_t, 8))(p_840->g_818.xzzyxxxy)).s1 , ((((p_840->g_149.s0 = (~((+(p_840->g_416 = (p_840->g_609.y |= (safe_lshift_func_int8_t_s_s(((FAKE_DIVERGE(p_840->local_0_offset, get_local_id(0), 10) ^ (safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(p_840->g_825.s9e16d42c)).s7, 7)), ((0x1616789AL ^ (safe_rshift_func_int8_t_s_u((*p_840->g_167), 7))) | 0x5BL)))) , (*p_840->g_167)), 2))))) ^ FAKE_DIVERGE(p_840->local_2_offset, get_local_id(2), 10)))) , p_840->g_801.w) == p_840->g_95[3][3]) , p_840->g_95[1][1])), p_840))) || 3UL), (*p_840->g_167)));
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_840->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 172)), permutations[(safe_mod_func_uint32_t_u_u(p_840->g_149.sb, 10))][(safe_mod_func_uint32_t_u_u(p_840->tid, 172))]));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_840->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 172)), permutations[(safe_mod_func_uint32_t_u_u((1UL ^ ((0x13L & ((((VECTOR(int32_t, 2))(0x3585144BL, 0x25CA2D5CL)).odd ^ (*l_472)) , 5L)) ^ (((VECTOR(int16_t, 8))(0x2C00L, (((safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 2))(p_840->g_830.sea)).yyyxyxyx, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(p_840->g_143.s2, (((*l_832) &= p_840->g_831[0]) , ((*l_779) = l_834)), ((VECTOR(uint32_t, 4))(l_835.s2662)), 0xD1D8C509L, 0xDDD77A49L))))))).s5)) , ((((*l_779) = 0x0061928CL) && ((((*l_838) = p_840->g_836) == (void*)0) | 0xADL)) != (*l_472))) > p_840->g_831[0]), ((VECTOR(int16_t, 2))((-1L))), ((VECTOR(int16_t, 2))(0x4C08L)), 0x6082L, 0x4C60L)).s0 | l_839))), 10))][(safe_mod_func_uint32_t_u_u(p_840->tid, 172))]));
    }
    return p_840->g_741.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_167 p_840->g_comm_values p_840->g_288 p_840->g_112 p_840->g_397 p_840->g_59
 * writes: p_840->g_95 p_840->g_112 p_840->g_59
 */
uint16_t  func_2(uint16_t  p_3, struct S0 * p_840)
{ /* block id: 93 */
    int8_t l_386 = 0x0AL;
    int8_t **l_389 = &p_840->g_167;
    VECTOR(int32_t, 2) l_392 = (VECTOR(int32_t, 2))(0x0565544FL, 0x020A1D9EL);
    int8_t *l_396 = &p_840->g_112;
    int i;
    (*p_840->g_397) |= (((safe_add_func_uint8_t_u_u(255UL, (((l_386 < ((((VECTOR(uint8_t, 2))(1UL, 0UL)).even , (safe_mul_func_int8_t_s_s(((*l_396) |= ((((((*p_840->g_167) = (l_389 == l_389)) ^ 3L) , p_840->g_comm_values[p_840->tid]) || ((safe_lshift_func_int8_t_s_u((~((l_386 & (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(l_392.xxxxxyyx)).s5240221002360706))).s12)).lo || (safe_unary_minus_func_uint32_t_u((p_3 && ((safe_rshift_func_int8_t_s_s(l_392.y, 5)) , p_3)))))) >= 5L)), 3)) | p_840->g_288.x)) == p_3)), l_392.x))) || l_392.y)) & 0xE124L) == p_3))) , p_3) ^ 65535UL);
    return p_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_138 p_840->g_194 p_840->g_195 p_840->g_288 p_840->g_129 p_840->g_223 p_840->g_167 p_840->g_95 p_840->g_143 p_840->g_153 p_840->g_57 p_840->g_310 p_840->g_112 p_840->g_172 p_840->g_92 p_840->g_211 p_840->g_277 p_840->g_316 p_840->g_319 p_840->g_330 p_840->g_339 p_840->g_342 p_840->g_191 p_840->g_113 p_840->g_169 p_840->g_357 p_840->g_364
 * writes: p_840->g_138 p_840->g_153 p_840->g_310 p_840->g_92 p_840->g_313 p_840->g_315 p_840->g_191 p_840->g_143 p_840->g_137
 */
uint16_t  func_4(int64_t  p_5, uint16_t  p_6, struct S0 * p_840)
{ /* block id: 70 */
    uint64_t l_283 = 1UL;
    VECTOR(int64_t, 2) l_317 = (VECTOR(int64_t, 2))(0L, (-4L));
    VECTOR(int64_t, 4) l_318 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x4523043293D730E3L), 0x4523043293D730E3L);
    VECTOR(uint32_t, 2) l_350 = (VECTOR(uint32_t, 2))(5UL, 0xD4C15BA1L);
    uint64_t l_383 = 1UL;
    int i;
    for (p_840->g_138 = (-26); (p_840->g_138 > (-19)); p_840->g_138 = safe_add_func_int32_t_s_s(p_840->g_138, 7))
    { /* block id: 73 */
        uint32_t *l_282 = (void*)0;
        VECTOR(int32_t, 16) l_307 = (VECTOR(int32_t, 16))(0x04271E6DL, (VECTOR(int32_t, 4))(0x04271E6DL, (VECTOR(int32_t, 2))(0x04271E6DL, 0x35A0E175L), 0x35A0E175L), 0x35A0E175L, 0x04271E6DL, 0x35A0E175L, (VECTOR(int32_t, 2))(0x04271E6DL, 0x35A0E175L), (VECTOR(int32_t, 2))(0x04271E6DL, 0x35A0E175L), 0x04271E6DL, 0x35A0E175L, 0x04271E6DL, 0x35A0E175L);
        int16_t *l_308 = &p_840->g_153;
        uint8_t l_309 = 8UL;
        uint64_t *l_311 = &p_840->g_92;
        uint32_t *l_312 = &p_840->g_313;
        uint32_t *l_314 = &p_840->g_315;
        uint8_t *l_347 = &p_840->g_191[4];
        uint16_t l_353 = 0xE6C7L;
        int32_t l_354 = 1L;
        uint32_t *l_362 = (void*)0;
        uint32_t *l_363[6] = {&p_840->g_137[0][0][0],&p_840->g_137[0][0][0],&p_840->g_137[0][0][0],&p_840->g_137[0][0][0],&p_840->g_137[0][0][0],&p_840->g_137[0][0][0]};
        int i;
        atomic_max(&p_840->g_atomic_reduction[get_linear_group_id()], ((l_307.se = ((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(4UL, (safe_sub_func_uint16_t_u_u((((++l_283) , ((((*p_840->g_194) == &p_840->g_59) > (safe_sub_func_uint16_t_u_u((GROUP_DIVERGE(1, 1) >= ((VECTOR(uint16_t, 16))(p_840->g_288.xxwyyzzyxxxwzywz)).sc), (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(p_840->g_129, 1)), (p_840->g_223.x < (((((((*l_314) = ((*l_312) = (p_840->g_223.y && ((*l_311) |= (((safe_sub_func_uint16_t_u_u((safe_add_func_int8_t_s_s((*p_840->g_167), 255UL)), (safe_mul_func_int16_t_s_s((((p_840->g_310[4] &= ((safe_add_func_int64_t_s_s(((((safe_div_func_int8_t_s_s((p_840->g_143.s3 , ((((*l_308) ^= ((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(p_5, 5)), 4)) , l_307.sa)) , (*p_840->g_167)) >= 0x62L)), p_840->g_57)) < l_309) >= GROUP_DIVERGE(1, 1)) | p_5), 6L)) < l_283)) < 0x3EE0L) != p_840->g_112), p_6)))) || p_840->g_172.s9) <= p_5))))) , 0x7BEE8ED091B6409FL) ^ (-4L)) , p_840->g_211.s2) , p_840->g_277.x) > 0xFC38L))))))) & l_283)) == l_307.s0), p_840->g_223.x)), 0x19A541FFAFB93677L, 0x11359F1481631843L, GROUP_DIVERGE(0, 1), ((VECTOR(uint64_t, 8))(0x3802CE8FD7E0959EL)), 0UL, 0xBD70E0E767395395L, 0xA7B9ABF68952115EL)).sf3)).lo , 4294967290UL) == p_6)) == 0x1CEDBF01L));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_840->v_collective += p_840->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        l_354 |= ((((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(p_840->g_316.s4515674572437426)).sd, ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 8))(l_317.yxyyxyxy)), ((VECTOR(int64_t, 16))(l_318.ywyxyyxxyywyywzy)).lo, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(0x376119070582BCD2L, 0x29FBFA3C9DEEEC24L, (-1L), 0x58F33B5990A5554EL)), 0x5152FD2FEEDA5436L, 0L, 0x6560A1FF2559C4E1L, (-1L)))))).lo, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_840->g_319.s60)), (-3L), 0x352624A3151D1CFEL))))), (-6L), ((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s(((((((safe_add_func_int32_t_s_s((l_307.s1 = (safe_lshift_func_int16_t_s_s((((0x1EL && (safe_lshift_func_uint8_t_u_u((((FAKE_DIVERGE(p_840->group_0_offset, get_group_id(0), 10) ^ p_840->g_92) > (GROUP_DIVERGE(2, 1) , ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(p_840->g_330.yxxyxxxxxxxyyyxx)).sf8)).hi)) <= ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(1UL, (safe_lshift_func_uint16_t_u_u((p_840->g_143.s9 = (((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 8))(p_840->g_339.yyyxyyxy)), ((VECTOR(uint32_t, 8))((p_5 || ((FAKE_DIVERGE(p_840->group_1_offset, get_group_id(1), 10) , (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_840->g_342.xyxyyxyy)))).s3, (safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s(p_5, l_307.s3)), p_6))))) != ((*l_347)--))), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_350.xxyyyxyxxyyxyyyy)).s42)), ((l_307.s3 , (safe_mod_func_int32_t_s_s(p_6, l_307.s9))) , l_307.sb), 1UL, ((VECTOR(uint32_t, 2))(0x0D7EFAC0L)), 4294967294UL)), ((VECTOR(uint32_t, 8))(0xCE6D024CL))))).s4 , FAKE_DIVERGE(p_840->global_0_offset, get_global_id(0), 10))), p_6)))), 8)), (*p_840->g_167))) ^ (-8L))), 5))) , 9L) , l_353), 10))), l_317.x)) || 0xC475C6A7L) & l_309) & p_840->g_113) | p_840->g_169[1]) < 0x37L), (*p_840->g_167))), 0L)) && p_6), ((VECTOR(int64_t, 4))((-10L))), ((VECTOR(int64_t, 2))(5L)), ((VECTOR(int64_t, 4))(0x16C0E560B90DDF73L)))), ((VECTOR(int64_t, 16))((-1L)))))).even)).s51, ((VECTOR(int64_t, 2))(3L)), ((VECTOR(int64_t, 2))(0x27D1F8EBCB205911L))))), 0L)), ((VECTOR(int64_t, 4))(0x4D6B561A88BAE464L))))).zxzzxzzx, ((VECTOR(int64_t, 8))(0x23A0C79D9A08F3B7L)), ((VECTOR(int64_t, 8))((-3L)))))).lo, ((VECTOR(int64_t, 4))(0x35062E5400C0375DL))))).w & p_6) , l_307.se);
        atomic_add(&p_840->g_atomic_reduction[get_linear_group_id()], ((((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(p_840->g_357.sfb842ac23a9a3610)).s3, ((((*l_347)--) | p_840->g_169[6]) | (safe_sub_func_uint32_t_u_u((p_840->g_137[0][0][0] = l_318.w), (+((VECTOR(int32_t, 16))(p_840->g_364.s4010615250664576)).sd)))))) && (safe_div_func_uint8_t_u_u((++(*l_347)), (l_383 = (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((-6L), ((&p_840->g_153 != &p_840->g_153) >= ((safe_lshift_func_int8_t_s_s(p_5, 1)) > ((&p_840->g_169[1] != (void*)0) > (safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 16))((*p_840->g_167), 0x68L, (*p_840->g_167), 0x1EL, p_5, (*p_840->g_167), ((VECTOR(int8_t, 2))(0x27L)), 0x11L, ((VECTOR(int8_t, 2))(0L)), (*p_840->g_167), (-2L), l_317.y, 0x47L, 0x24L)), ((VECTOR(int8_t, 16))(0x04L))))).scc45)).x, 5))))))), 5)), l_307.se)), l_318.w)))))) == 0xC47D63294EEDCF59L) > p_5));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_840->v_collective += p_840->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    return l_383;
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_comm_values p_840->l_comm_values p_840->g_40 p_840->g_27 p_840->g_56 p_840->g_59 p_840->g_57 p_840->g_95 p_840->g_114 p_840->g_112 p_840->g_113 p_840->g_137 p_840->g_138 p_840->g_143 p_840->g_149 p_840->g_129 p_840->g_92 p_840->g_172 p_840->g_173 p_840->g_167 p_840->g_194 p_840->g_169 p_840->g_211 p_840->g_195 p_840->g_220 p_840->g_223 p_840->g_224 p_840->g_197 p_840->g_191 p_840->g_277
 * writes: p_840->g_27 p_840->g_40 p_840->g_56 p_840->g_92 p_840->g_95 p_840->g_114 p_840->g_59 p_840->g_129 p_840->g_137 p_840->g_138 p_840->g_153 p_840->g_167 p_840->g_169 p_840->g_195 p_840->g_197 p_840->g_143 p_840->g_191 p_840->g_113 p_840->g_comm_values p_840->l_comm_values p_840->g_276
 */
int8_t  func_11(int32_t  p_12, uint16_t  p_13, int32_t  p_14, struct S0 * p_840)
{ /* block id: 5 */
    uint16_t l_23 = 5UL;
    int8_t *l_26 = &p_840->g_27;
    uint8_t *l_235 = &p_840->g_191[9];
    int32_t *l_274 = &p_840->g_59;
    int32_t *l_275[8] = {(void*)0,&p_840->g_276,(void*)0,(void*)0,&p_840->g_276,(void*)0,(void*)0,&p_840->g_276};
    int i;
    p_840->g_276 = ((*l_274) = (safe_add_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), func_18(((*l_235) ^= func_20(((((l_23 == (safe_sub_func_uint8_t_u_u(255UL, l_23))) > p_840->g_comm_values[p_840->tid]) == ((*l_26) = p_840->g_comm_values[p_840->tid])) , func_28(&p_840->g_27, p_12, p_840)), (safe_div_func_uint32_t_u_u((((((VECTOR(uint64_t, 16))((l_26 == (void*)0), p_13, p_13, p_840->l_comm_values[(safe_mod_func_uint32_t_u_u(p_840->tid, 172))], 1UL, ((VECTOR(uint64_t, 4))(0x4E55B65AB4D258D0L)), ((VECTOR(uint64_t, 4))(6UL)), p_840->g_comm_values[p_840->tid], 7UL, 0x527720104353EA3AL)).s7 < p_13) , l_23) & 0x0B137D3709E8E548L), p_12)), p_840)), p_840))));
    (*l_274) = ((VECTOR(int32_t, 16))(p_840->g_277.yxxxxyxyxyyyyxxx)).s1;
    return (*p_840->g_167);
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_167 p_840->g_113 p_840->g_143 p_840->g_114 p_840->g_57 p_840->g_95 p_840->g_149 p_840->g_59 p_840->g_191
 * writes: p_840->g_95 p_840->g_113 p_840->g_143 p_840->g_137 p_840->g_comm_values p_840->l_comm_values p_840->g_59
 */
uint8_t  func_18(uint8_t  p_19, struct S0 * p_840)
{ /* block id: 55 */
    int8_t *l_242 = &p_840->g_113;
    uint32_t *l_243[4][2];
    uint16_t *l_244 = (void*)0;
    uint16_t *l_245 = (void*)0;
    uint16_t *l_246 = (void*)0;
    uint16_t *l_247 = (void*)0;
    uint16_t *l_248[4];
    uint32_t *l_253 = &p_840->g_137[0][0][0];
    int64_t *l_264[5][8][2];
    int32_t l_265[7][7] = {{7L,7L,(-1L),0x675F6B8CL,0x55E3F350L,0x675F6B8CL,(-1L)},{7L,7L,(-1L),0x675F6B8CL,0x55E3F350L,0x675F6B8CL,(-1L)},{7L,7L,(-1L),0x675F6B8CL,0x55E3F350L,0x675F6B8CL,(-1L)},{7L,7L,(-1L),0x675F6B8CL,0x55E3F350L,0x675F6B8CL,(-1L)},{7L,7L,(-1L),0x675F6B8CL,0x55E3F350L,0x675F6B8CL,(-1L)},{7L,7L,(-1L),0x675F6B8CL,0x55E3F350L,0x675F6B8CL,(-1L)},{7L,7L,(-1L),0x675F6B8CL,0x55E3F350L,0x675F6B8CL,(-1L)}};
    int32_t l_266[10][2][6] = {{{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)},{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)}},{{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)},{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)}},{{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)},{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)}},{{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)},{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)}},{{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)},{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)}},{{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)},{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)}},{{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)},{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)}},{{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)},{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)}},{{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)},{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)}},{{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)},{0x3507F084L,0x1B7860BBL,0x1B7860BBL,0x3507F084L,0x1B076C08L,(-1L)}}};
    VECTOR(uint16_t, 8) l_267 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0UL), 0UL), 0UL, 65535UL, 0UL);
    VECTOR(int16_t, 2) l_272 = (VECTOR(int16_t, 2))((-1L), 1L);
    uint32_t l_273 = 4294967295UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_243[i][j] = &p_840->g_40;
    }
    for (i = 0; i < 4; i++)
        l_248[i] = (void*)0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
                l_264[i][j][k] = (void*)0;
        }
    }
    p_840->g_59 ^= ((p_840->l_comm_values[(safe_mod_func_uint32_t_u_u(p_840->tid, 172))] = (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((!(p_840->g_143.sd ^= (safe_lshift_func_uint8_t_u_u((((*l_242) |= ((*p_840->g_167) = p_19)) <= ((void*)0 == l_243[0][1])), 7)))), 14)) || ((l_266[3][0][1] = (p_840->g_comm_values[p_840->tid] = (1L || ((safe_mod_func_int32_t_s_s(((((((safe_sub_func_uint32_t_u_u(((*l_253) = p_19), ((((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), (safe_div_func_int64_t_s_s((safe_mod_func_uint8_t_u_u(((((safe_div_func_int64_t_s_s((l_265[1][2] = ((void*)0 != l_248[1])), l_266[1][0][2])) == ((VECTOR(uint16_t, 2))(l_267.s62)).lo) & (safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(l_272.yyyyxxyxxyyyxyyx)).s5, p_840->g_114)), l_273))) && p_840->g_57), (*p_840->g_167))), 0x01A78855DD7CDD83L)))), l_267.s5)) < p_19) > p_19) , p_19))) , p_840->g_149.sa) && 0x75B2L) , GROUP_DIVERGE(0, 1)) , &l_242) != &l_242), 8UL)) <= 4294967294UL)))) | 6UL)), 3L))) , l_267.s1);
    return p_840->g_191[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_40 p_840->g_27 p_840->g_56 p_840->g_comm_values p_840->g_59 p_840->l_comm_values p_840->g_57 p_840->g_95 p_840->g_114 p_840->g_112 p_840->g_113 p_840->g_137 p_840->g_138 p_840->g_143 p_840->g_149 p_840->g_129 p_840->g_92 p_840->g_172 p_840->g_173 p_840->g_167 p_840->g_194 p_840->g_169 p_840->g_211 p_840->g_195 p_840->g_220 p_840->g_223 p_840->g_224 p_840->g_197
 * writes: p_840->g_40 p_840->g_27 p_840->g_56 p_840->g_92 p_840->g_95 p_840->g_114 p_840->g_59 p_840->g_129 p_840->g_137 p_840->g_138 p_840->g_153 p_840->g_167 p_840->g_169 p_840->g_195 p_840->g_197 p_840->g_143
 */
uint8_t  func_20(int8_t  p_21, uint64_t  p_22, struct S0 * p_840)
{ /* block id: 9 */
    uint32_t *l_39 = &p_840->g_40;
    int8_t *l_52 = &p_840->g_27;
    int32_t l_53 = 0x42391700L;
    uint32_t **l_71 = (void*)0;
    uint32_t **l_72 = &p_840->g_56[1][2][0];
    uint32_t *l_75 = &p_840->g_57;
    VECTOR(uint16_t, 4) l_76 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65528UL), 65528UL);
    VECTOR(int16_t, 16) l_87 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-7L)), (-7L)), (-7L), (-1L), (-7L), (VECTOR(int16_t, 2))((-1L), (-7L)), (VECTOR(int16_t, 2))((-1L), (-7L)), (-1L), (-7L), (-1L), (-7L));
    uint64_t l_93 = 0xC1BBB80EAEAAC79EL;
    int8_t *l_94 = &p_840->g_95[1][1];
    VECTOR(int32_t, 2) l_96 = (VECTOR(int32_t, 2))(1L, (-1L));
    int32_t **l_196[8] = {&p_840->g_195,&p_840->g_195,&p_840->g_195,&p_840->g_195,&p_840->g_195,&p_840->g_195,&p_840->g_195,&p_840->g_195};
    VECTOR(uint8_t, 16) l_206 = (VECTOR(uint8_t, 16))(0x6DL, (VECTOR(uint8_t, 4))(0x6DL, (VECTOR(uint8_t, 2))(0x6DL, 255UL), 255UL), 255UL, 0x6DL, 255UL, (VECTOR(uint8_t, 2))(0x6DL, 255UL), (VECTOR(uint8_t, 2))(0x6DL, 255UL), 0x6DL, 255UL, 0x6DL, 255UL);
    VECTOR(uint8_t, 2) l_207 = (VECTOR(uint8_t, 2))(0x94L, 0x03L);
    uint8_t *l_208 = &p_840->g_169[1];
    VECTOR(int32_t, 8) l_214 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 7L), 7L), 7L, 7L, 7L);
    int32_t *l_217 = (void*)0;
    VECTOR(uint8_t, 2) l_225 = (VECTOR(uint8_t, 2))(0x15L, 1UL);
    uint16_t *l_230[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    (*p_840->g_194) = func_33((--(*l_39)), func_43(((*l_72) = func_48(l_52, (((VECTOR(uint8_t, 2))(254UL, 5UL)).lo != 0x5CL), l_53, p_840)), p_840->g_comm_values[p_840->tid], ((((((*l_94) = ((safe_sub_func_uint16_t_u_u((l_75 == (void*)0), ((VECTOR(uint16_t, 2))(l_76.zz)).odd)) > ((safe_sub_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s((p_840->g_92 = (((VECTOR(int16_t, 8))(l_87.s9fa4ee4b)).s4 == (((safe_mul_func_uint8_t_u_u(p_840->g_59, (safe_add_func_uint16_t_u_u(p_840->l_comm_values[(safe_mod_func_uint32_t_u_u(p_840->tid, 172))], (-3L))))) , (-1L)) | 4294967295UL))), l_53)), p_21)) | l_93) ^ p_840->g_57), 9L)) != p_21), (-1L))) <= l_76.w), p_840->g_comm_values[p_840->tid])) & 18446744073709551615UL))) | p_21) || p_840->g_95[0][6]) & p_21) , l_93), l_96.y, p_840), &l_53, &l_53, p_22, p_840);
    p_840->g_197 = ((*p_840->g_194) = &l_53);
    p_840->g_59 ^= ((safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s(p_21, ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_206.s3d)).yyyx)), ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(l_207.yx)), (uint8_t)((*l_208)--)))).yxyx))).yxzxyywwxywyxyyw)).even, ((VECTOR(uint8_t, 16))(p_840->g_211.s1517503515504535)).even))).s3301113375060646, (uint16_t)((safe_sub_func_int32_t_s_s(p_22, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_214.s4321)).odd)).lo)) != (safe_add_func_int8_t_s_s((l_217 == (*p_840->g_194)), ((*l_208) = (((((((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_840->g_220.s1411)).lo)), 0x03L, 0x5CL)).y, ((p_21 , (((((((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(65535UL, 0x5E6DL)).xyyyyyxyxxxyyyyx)).s1, ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 16))(p_840->g_223.xyxxxyyyxyyyyyxy)).lo, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x8CF9L, 0xFA46L)), 0xB96BL, 1UL)).zyyzzyww))).s0126367027560527, ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(p_840->g_224.yxwyxzwwxzwywyxx)).sbc5e, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(255UL, 1UL, 253UL, 0UL)), 0UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_225.xx)).xyxxxyxyyyyyyyyy)).seaa5, ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 2))(0x1EL, 0x54L)).xyyy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(255UL, 0UL)).xyxxxxxx)).odd))), ((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(246UL, 0x06L)).yyxyxyyxxxxyyxyx)).lo, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x65L, 0UL)))), 0xC8L, 1UL, (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((p_840->g_143.s3 = 5UL), (safe_add_func_int64_t_s_s(p_840->g_211.s6, ((safe_add_func_uint32_t_u_u((l_230[2] != l_230[2]), p_22)) && p_840->g_137[0][0][2]))))), (*p_840->g_197))), 0UL, 0xA1L, 0xC3L)).odd)).yyyywwzz)).s54)).xxyyxxyy))).odd))).wyzzywzw)))), 1UL, 0x5EL, 255UL)).sc9ca))).zwwxxyzw, ((VECTOR(uint8_t, 8))(0xA0L))))), ((VECTOR(uint16_t, 8))(0x15C4L))))).s4623621335173727, ((VECTOR(uint16_t, 16))(0x8768L)))))))).s9)) > 0x1288609CC275588FL) < (-3L)) | 1UL) <= 7L) && 0x33C1L) == p_840->g_224.y)) , p_840->g_169[1]))) >= FAKE_DIVERGE(p_840->local_1_offset, get_local_id(1), 10)) , 7L) > 4294967286UL) == 0x30B8L) < 0x455061D5L) , 0x6DL))))), (uint16_t)p_840->g_27))).sf, p_21)) < 0UL), (-1L))) , 0x55L))), p_21)) || p_840->g_169[1]);
    (*p_840->g_194) = (void*)0;
    return p_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_comm_values
 * writes:
 */
int8_t  func_28(int8_t * p_29, uint64_t  p_30, struct S0 * p_840)
{ /* block id: 7 */
    return p_840->g_comm_values[p_840->tid];
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_129 p_840->g_92 p_840->g_27 p_840->g_95 p_840->g_172 p_840->g_173 p_840->g_149 p_840->g_113 p_840->g_167
 * writes: p_840->g_167 p_840->g_169 p_840->g_153 p_840->g_59
 */
int32_t * func_33(uint32_t  p_34, int32_t * p_35, int32_t * p_36, int32_t * p_37, int32_t  p_38, struct S0 * p_840)
{ /* block id: 34 */
    uint64_t l_162[8] = {0xC1B1B48E1355ABE8L,18446744073709551615UL,0xC1B1B48E1355ABE8L,0xC1B1B48E1355ABE8L,18446744073709551615UL,0xC1B1B48E1355ABE8L,0xC1B1B48E1355ABE8L,18446744073709551615UL};
    int32_t l_163 = (-1L);
    uint32_t **l_164 = &p_840->g_56[2][0][0];
    int8_t *l_165[10];
    int8_t **l_166[7][8][4] = {{{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0}},{{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0}},{{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0}},{{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0}},{{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0}},{{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0}},{{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0},{&l_165[8],&l_165[4],&l_165[4],(void*)0}}};
    uint8_t *l_168 = &p_840->g_169[1];
    VECTOR(uint64_t, 4) l_176 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x222626586A667620L), 0x222626586A667620L);
    int16_t *l_181 = (void*)0;
    int16_t *l_182 = &p_840->g_153;
    VECTOR(uint32_t, 16) l_183 = (VECTOR(uint32_t, 16))(0xDAD5565FL, (VECTOR(uint32_t, 4))(0xDAD5565FL, (VECTOR(uint32_t, 2))(0xDAD5565FL, 1UL), 1UL), 1UL, 0xDAD5565FL, 1UL, (VECTOR(uint32_t, 2))(0xDAD5565FL, 1UL), (VECTOR(uint32_t, 2))(0xDAD5565FL, 1UL), 0xDAD5565FL, 1UL, 0xDAD5565FL, 1UL);
    VECTOR(uint32_t, 16) l_184 = (VECTOR(uint32_t, 16))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 4294967290UL), 4294967290UL), 4294967290UL, 4294967291UL, 4294967290UL, (VECTOR(uint32_t, 2))(4294967291UL, 4294967290UL), (VECTOR(uint32_t, 2))(4294967291UL, 4294967290UL), 4294967291UL, 4294967290UL, 4294967291UL, 4294967290UL);
    VECTOR(uint64_t, 16) l_185 = (VECTOR(uint64_t, 16))(0xF24C6D4E311F9259L, (VECTOR(uint64_t, 4))(0xF24C6D4E311F9259L, (VECTOR(uint64_t, 2))(0xF24C6D4E311F9259L, 0x8D47430D1F882ED2L), 0x8D47430D1F882ED2L), 0x8D47430D1F882ED2L, 0xF24C6D4E311F9259L, 0x8D47430D1F882ED2L, (VECTOR(uint64_t, 2))(0xF24C6D4E311F9259L, 0x8D47430D1F882ED2L), (VECTOR(uint64_t, 2))(0xF24C6D4E311F9259L, 0x8D47430D1F882ED2L), 0xF24C6D4E311F9259L, 0x8D47430D1F882ED2L, 0xF24C6D4E311F9259L, 0x8D47430D1F882ED2L);
    uint8_t *l_190 = &p_840->g_191[4];
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_165[i] = &p_840->g_95[1][1];
    (*p_37) ^= (((p_840->g_129 < (((VECTOR(int32_t, 4))((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(0x2813L, (safe_mul_func_int16_t_s_s((3L == (FAKE_DIVERGE(p_840->global_1_offset, get_global_id(1), 10) , 0x54L)), l_162[0])), 0x766BL, 1UL, ((l_163 | (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((void*)0 == l_164), 0x15512477L, 0L, (((*l_168) = ((((p_34 , (p_840->g_167 = (FAKE_DIVERGE(p_840->group_1_offset, get_group_id(1), 10) , l_165[4]))) == &p_840->g_112) | p_38) && l_162[2])) || 0x62L), ((VECTOR(int32_t, 8))(0x34E5BC47L)), 1L, 1L, 0x34180264L, 0x160E171AL)).s2, p_840->g_92, l_162[0], ((VECTOR(int32_t, 2))((-1L))), 0x5ED1CDC8L, 1L, 0x70600BE3L)).s6 == 0UL)) || l_163), 0UL, 65535UL, 0UL)).s66)).hi >= p_38), (-5L))), 1)), p_840->g_27, 0L, (-3L))).y , 0x69L)) > p_840->g_95[1][1]) , p_840->g_27);
    (*p_35) = (+(((((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(p_840->g_172.s25bb58bc3c5a20ae)).sde))).yyxyyyxy, ((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 4))(p_840->g_173.yyyy))))).wxwzzyyy))), ((VECTOR(int64_t, 4))((safe_div_func_int64_t_s_s((0x5F291984L >= ((*p_37) = l_163)), ((VECTOR(uint64_t, 2))(l_176.yx)).lo)), 0x33E451EC3E9C7F93L, 0x5E07D20D79F787DAL, 0x74A9C1BF1E57589BL)).zxzzzyyy))).s2 > (l_176.x == p_34)) == ((*l_182) = (l_176.x != (0x1FL & ((safe_mul_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(6L, 6)) <= p_840->g_149.s9) , FAKE_DIVERGE(p_840->group_0_offset, get_group_id(0), 10)), (2UL || 0x58L))) >= 0x685B977AC5F61C7CL))))) | p_38));
    (*p_35) = (((*l_182) = (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_183.sff)), ((VECTOR(uint32_t, 4))(l_184.s3f16)), 8UL, 8UL)).s5 ^ (+(((((VECTOR(uint16_t, 8))(l_184.s3, (((VECTOR(uint64_t, 8))(l_185.sa023c09f)).s7 < ((2L < (!((p_840->g_113 , p_38) , (p_840->g_169[5] = (((VECTOR(int32_t, 2))(0x1765F1DFL, 0x29F0FD85L)).hi | (&p_840->g_56[1][1][0] == (void*)0)))))) == ((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((void*)0 != l_190), 1)), 11)) & ((safe_rshift_func_int8_t_s_u((*p_840->g_167), GROUP_DIVERGE(2, 1))) > p_840->g_113)))), FAKE_DIVERGE(p_840->global_0_offset, get_global_id(0), 10), 0x3202L, 0x6E1EL, 65534UL, 0x218DL, 0xC9CBL)).s3 >= 0x094AL) , GROUP_DIVERGE(1, 1)) >= p_840->g_149.sa)))) || 0x76FEL);
    return &p_840->g_59;
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_114 p_840->g_59 p_840->g_112 p_840->g_57 p_840->g_113 p_840->g_95 p_840->g_137 p_840->g_138 p_840->g_143 p_840->g_149
 * writes: p_840->g_114 p_840->g_59 p_840->g_129 p_840->g_92 p_840->g_137 p_840->g_138 p_840->g_153
 */
int32_t * func_43(uint32_t * p_44, uint16_t  p_45, uint16_t  p_46, uint32_t  p_47, struct S0 * p_840)
{ /* block id: 22 */
    int32_t *l_97 = &p_840->g_59;
    int32_t *l_98 = (void*)0;
    int32_t *l_99 = &p_840->g_59;
    int32_t *l_100 = &p_840->g_59;
    int32_t l_101 = 0x0EB2A14DL;
    int32_t *l_102 = &p_840->g_59;
    int32_t *l_103 = (void*)0;
    int32_t *l_104 = &l_101;
    int32_t *l_105 = (void*)0;
    int32_t l_106 = 0L;
    int32_t *l_107 = (void*)0;
    int32_t *l_108 = &l_106;
    int32_t *l_109 = &l_101;
    int32_t *l_110 = &l_106;
    int32_t *l_111[3];
    VECTOR(int16_t, 16) l_117 = (VECTOR(int16_t, 16))(0x0595L, (VECTOR(int16_t, 4))(0x0595L, (VECTOR(int16_t, 2))(0x0595L, (-8L)), (-8L)), (-8L), 0x0595L, (-8L), (VECTOR(int16_t, 2))(0x0595L, (-8L)), (VECTOR(int16_t, 2))(0x0595L, (-8L)), 0x0595L, (-8L), 0x0595L, (-8L));
    VECTOR(int16_t, 16) l_118 = (VECTOR(int16_t, 16))(0x37A1L, (VECTOR(int16_t, 4))(0x37A1L, (VECTOR(int16_t, 2))(0x37A1L, 1L), 1L), 1L, 0x37A1L, 1L, (VECTOR(int16_t, 2))(0x37A1L, 1L), (VECTOR(int16_t, 2))(0x37A1L, 1L), 0x37A1L, 1L, 0x37A1L, 1L);
    uint32_t **l_119 = &p_840->g_56[1][1][0];
    VECTOR(uint8_t, 8) l_120 = (VECTOR(uint8_t, 8))(0x87L, (VECTOR(uint8_t, 4))(0x87L, (VECTOR(uint8_t, 2))(0x87L, 0x32L), 0x32L), 0x32L, 0x87L, 0x32L);
    VECTOR(uint8_t, 4) l_121 = (VECTOR(uint8_t, 4))(0x87L, (VECTOR(uint8_t, 2))(0x87L, 1UL), 1UL);
    int16_t *l_128[8];
    VECTOR(int64_t, 8) l_132 = (VECTOR(int64_t, 8))(0x5FFB93C35E3CEA87L, (VECTOR(int64_t, 4))(0x5FFB93C35E3CEA87L, (VECTOR(int64_t, 2))(0x5FFB93C35E3CEA87L, 0x16355718CB29726EL), 0x16355718CB29726EL), 0x16355718CB29726EL, 0x5FFB93C35E3CEA87L, 0x16355718CB29726EL);
    VECTOR(uint64_t, 2) l_133 = (VECTOR(uint64_t, 2))(0x970AEDAF9C58AC2CL, 0x217A8330C07BB3E8L);
    VECTOR(uint64_t, 16) l_134 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x99205434A3FD71FAL), 0x99205434A3FD71FAL), 0x99205434A3FD71FAL, 1UL, 0x99205434A3FD71FAL, (VECTOR(uint64_t, 2))(1UL, 0x99205434A3FD71FAL), (VECTOR(uint64_t, 2))(1UL, 0x99205434A3FD71FAL), 1UL, 0x99205434A3FD71FAL, 1UL, 0x99205434A3FD71FAL);
    VECTOR(uint64_t, 2) l_135 = (VECTOR(uint64_t, 2))(0x7324BB92A5F0EF6FL, 4UL);
    uint64_t *l_136 = &p_840->g_92;
    VECTOR(uint16_t, 4) l_144 = (VECTOR(uint16_t, 4))(0xD879L, (VECTOR(uint16_t, 2))(0xD879L, 0xBA22L), 0xBA22L);
    VECTOR(int16_t, 4) l_152 = (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, (-1L)), (-1L));
    int8_t *l_154[8][5][6] = {{{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]}},{{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]}},{{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]}},{{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]}},{{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]}},{{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]}},{{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]}},{{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]},{(void*)0,(void*)0,&p_840->g_27,&p_840->g_113,&p_840->g_113,&p_840->g_95[2][3]}}};
    uint64_t l_155 = 2UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_111[i] = &l_106;
    for (i = 0; i < 8; i++)
        l_128[i] = (void*)0;
    --p_840->g_114;
    (*l_99) |= ((((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))(l_117.s7e4ebb7c4eae4c08)).sa2b6, ((VECTOR(int16_t, 4))(l_118.s3fe1))))).z , l_119) != l_119);
    p_840->g_138 ^= (p_840->g_137[0][0][0] &= (FAKE_DIVERGE(p_840->global_1_offset, get_global_id(1), 10) || ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 16))(l_120.s4203565221262110)).sb1, ((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(251UL, 2UL)), 254UL, 6UL)).zywwxzxxwyxwzzxx, ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(0UL, 0xB5L, ((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 2))(0xE7L, 0x72L)).xyyx))), 0xA3L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_121.wxwyyyzxxxwwxzxy)).s0b)).yyyyyxyy, ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(1UL, p_840->g_112, (safe_mul_func_int16_t_s_s((p_840->g_129 = (safe_mul_func_int16_t_s_s(p_840->g_57, (safe_rshift_func_uint8_t_u_s((*l_108), p_840->g_113))))), ((*p_44) , (safe_sub_func_int32_t_s_s(((((p_47 | p_840->g_59) == ((((VECTOR(int64_t, 4))(l_132.s1565)).z && ((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 2))(l_133.xy)).yxxy, ((VECTOR(uint64_t, 16))(l_134.sf2a49cff131093e8)).sf6ee))).xyyzwwyzxywwxzwy, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 2))(l_135.xy)).xxyyxyxyyxyxxxyy))).s4f93)).zxzzyyyyyyyxzyyy))).s66e8, (uint64_t)(*l_104)))).x) >= ((((((*l_136) = (*l_108)) >= p_840->g_95[1][1]) > (*l_102)) | p_45) < (*l_108)))) , 6L) < 0x5D81L), 0x79C7D366L))))), ((VECTOR(uint8_t, 2))(255UL)), ((VECTOR(uint8_t, 2))(0x1CL)), (*l_99), ((VECTOR(uint8_t, 2))(0x66L)), ((VECTOR(uint8_t, 2))(5UL)), p_840->g_57, p_840->g_95[3][9], 1UL, 0UL)).s42f3)).odd, (uint8_t)GROUP_DIVERGE(2, 1), (uint8_t)p_840->g_95[1][1]))).xyyyyxxy, ((VECTOR(uint8_t, 8))(0UL))))).hi)), 5UL, 255UL, 255UL, 0x2AL, 253UL)).sf627)), ((VECTOR(uint8_t, 4))(0xB5L)), ((VECTOR(uint8_t, 4))(255UL))))).zyzzxxwywxzyyzyy))).s9c))).yyxx, ((VECTOR(uint8_t, 4))(0xBFL))))).hi, ((VECTOR(uint8_t, 2))(0UL))))).odd));
    (*l_109) = (p_45 ^ (p_840->g_59 = ((*l_110) = (safe_sub_func_uint32_t_u_u(p_47, (GROUP_DIVERGE(1, 1) && ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(0x3E24L, 0x6B98L)).xyxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((safe_mul_func_uint8_t_u_u((*l_108), (((VECTOR(uint16_t, 16))((+(((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 2))(65529UL, 0xFD09L)).yxyxxyyyxxxyxyyy, ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 2))(p_840->g_143.s04)), ((VECTOR(uint16_t, 2))(65535UL, 0x9135L))))))).xxxx, ((VECTOR(uint16_t, 4))(l_144.zwww))))).yzwxxxzwzwxyxyxy))).s5f)).lo & (safe_sub_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((((VECTOR(uint32_t, 4))(p_840->g_149.s48d9)).w == (p_47 == ((p_840->g_153 = ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_152.yxxw)).hi)).lo) && (((*l_108) , l_154[4][0][4]) == ((l_155 || ((p_47 | ((((((!(*l_110)) | GROUP_DIVERGE(1, 1)) ^ 9UL) , p_840->g_114) < 0x1538398E1D098C66L) < 6L)) && (-3L))) , &p_840->g_113))))), p_840->g_57)) == 0xDF55L), 0L))) == p_840->g_95[0][3]) , GROUP_DIVERGE(2, 1))), 0x27C9L, ((VECTOR(uint16_t, 8))(9UL)), ((VECTOR(uint16_t, 2))(65535UL)), 65531UL, ((VECTOR(uint16_t, 2))(1UL)), 0x1233L)).s9 < p_47))), ((VECTOR(int16_t, 2))(0x677FL)), (-9L))).wwwxwxzyxwwzzxzz)).s56, ((VECTOR(int16_t, 2))(0x1F12L))))).xxyy)).zzwxxzxwwzwwwywx, ((VECTOR(int16_t, 16))(0x6F38L))))))).sab0b))).hi)).even))))));
    return &p_840->g_59;
}


/* ------------------------------------------ */
/* 
 * reads : p_840->g_27 p_840->g_56
 * writes: p_840->g_27
 */
uint32_t * func_48(int8_t * p_49, int8_t  p_50, uint32_t  p_51, struct S0 * p_840)
{ /* block id: 11 */
    int32_t *l_58 = &p_840->g_59;
    int32_t l_60[7] = {1L,0x3DCDCBD5L,1L,1L,0x3DCDCBD5L,1L,1L};
    int32_t *l_61 = &l_60[5];
    int32_t *l_62 = &l_60[5];
    int32_t *l_63 = &l_60[4];
    int32_t *l_64 = &l_60[1];
    int32_t *l_65 = &p_840->g_59;
    int32_t *l_66 = &l_60[0];
    int32_t *l_67[9] = {&l_60[3],&l_60[3],&l_60[3],&l_60[3],&l_60[3],&l_60[3],&l_60[3],&l_60[3],&l_60[3]};
    uint8_t l_68[8] = {0UL,0xF1L,0UL,0UL,0xF1L,0UL,0UL,0xF1L};
    int i;
    for (p_840->g_27 = 0; (p_840->g_27 < 21); p_840->g_27 = safe_add_func_uint16_t_u_u(p_840->g_27, 4))
    { /* block id: 14 */
        return p_840->g_56[1][1][0];
    }
    l_68[5]++;
    return &p_840->g_57;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[95];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 95; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[95];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 95; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[172];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 172; i++)
            l_comm_values[i] = 1;
    struct S0 c_841;
    struct S0* p_840 = &c_841;
    struct S0 c_842 = {
        0x71L, // p_840->g_27
        0x97A8D1D9L, // p_840->g_40
        4294967295UL, // p_840->g_57
        {{{&p_840->g_57},{&p_840->g_57},{&p_840->g_57}},{{&p_840->g_57},{&p_840->g_57},{&p_840->g_57}},{{&p_840->g_57},{&p_840->g_57},{&p_840->g_57}},{{&p_840->g_57},{&p_840->g_57},{&p_840->g_57}}}, // p_840->g_56
        1L, // p_840->g_59
        0x1B79E2962DE1B453L, // p_840->g_92
        {{0x41L,0x41L,0x5CL,1L,(-1L),1L,0x5CL,0x41L,0x41L,0x5CL},{0x41L,0x41L,0x5CL,1L,(-1L),1L,0x5CL,0x41L,0x41L,0x5CL},{0x41L,0x41L,0x5CL,1L,(-1L),1L,0x5CL,0x41L,0x41L,0x5CL},{0x41L,0x41L,0x5CL,1L,(-1L),1L,0x5CL,0x41L,0x41L,0x5CL}}, // p_840->g_95
        0x61L, // p_840->g_112
        7L, // p_840->g_113
        0x73L, // p_840->g_114
        (-5L), // p_840->g_129
        {{{0xADDDDEF2L,0xADDDDEF2L,0xADDDDEF2L,0xADDDDEF2L,0xADDDDEF2L,0xADDDDEF2L}}}, // p_840->g_137
        0x13A51B20E94A997FL, // p_840->g_138
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x6F67L), 0x6F67L), 0x6F67L, 0UL, 0x6F67L, (VECTOR(uint16_t, 2))(0UL, 0x6F67L), (VECTOR(uint16_t, 2))(0UL, 0x6F67L), 0UL, 0x6F67L, 0UL, 0x6F67L), // p_840->g_143
        (VECTOR(uint32_t, 16))(0xC2ACCF63L, (VECTOR(uint32_t, 4))(0xC2ACCF63L, (VECTOR(uint32_t, 2))(0xC2ACCF63L, 0xB14A6E1CL), 0xB14A6E1CL), 0xB14A6E1CL, 0xC2ACCF63L, 0xB14A6E1CL, (VECTOR(uint32_t, 2))(0xC2ACCF63L, 0xB14A6E1CL), (VECTOR(uint32_t, 2))(0xC2ACCF63L, 0xB14A6E1CL), 0xC2ACCF63L, 0xB14A6E1CL, 0xC2ACCF63L, 0xB14A6E1CL), // p_840->g_149
        0L, // p_840->g_153
        &p_840->g_95[1][7], // p_840->g_167
        {0x91L,0x91L,0x91L,0x91L,0x91L,0x91L,0x91L}, // p_840->g_169
        (VECTOR(int32_t, 16))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x29590706L), 0x29590706L), 0x29590706L, 7L, 0x29590706L, (VECTOR(int32_t, 2))(7L, 0x29590706L), (VECTOR(int32_t, 2))(7L, 0x29590706L), 7L, 0x29590706L, 7L, 0x29590706L), // p_840->g_172
        (VECTOR(uint32_t, 2))(0UL, 4294967295UL), // p_840->g_173
        {254UL,254UL,254UL,254UL,254UL,254UL,254UL,254UL,254UL,254UL}, // p_840->g_191
        (void*)0, // p_840->g_195
        &p_840->g_195, // p_840->g_194
        (void*)0, // p_840->g_197
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x7FL), 0x7FL), 0x7FL, 255UL, 0x7FL), // p_840->g_211
        (VECTOR(int8_t, 8))(0x2BL, (VECTOR(int8_t, 4))(0x2BL, (VECTOR(int8_t, 2))(0x2BL, 0L), 0L), 0L, 0x2BL, 0L), // p_840->g_220
        (VECTOR(uint16_t, 2))(65531UL, 0xF733L), // p_840->g_223
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xEDL), 0xEDL), // p_840->g_224
        0x5AADB8AAL, // p_840->g_276
        (VECTOR(int32_t, 2))(0x5E108632L, 0x62067395L), // p_840->g_277
        (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0x27C2L), 0x27C2L), // p_840->g_288
        {0xE004L,0xE004L,0xE004L,0xE004L,0xE004L,0xE004L}, // p_840->g_310
        1UL, // p_840->g_313
        0xB277425FL, // p_840->g_315
        (VECTOR(int64_t, 8))(0x405AC7BDA4903D65L, (VECTOR(int64_t, 4))(0x405AC7BDA4903D65L, (VECTOR(int64_t, 2))(0x405AC7BDA4903D65L, 0x69846EECE68CFEE6L), 0x69846EECE68CFEE6L), 0x69846EECE68CFEE6L, 0x405AC7BDA4903D65L, 0x69846EECE68CFEE6L), // p_840->g_316
        (VECTOR(int64_t, 8))(0x46341F2213736988L, (VECTOR(int64_t, 4))(0x46341F2213736988L, (VECTOR(int64_t, 2))(0x46341F2213736988L, 1L), 1L), 1L, 0x46341F2213736988L, 1L), // p_840->g_319
        (VECTOR(uint64_t, 2))(0xEB192F1295B1A447L, 1UL), // p_840->g_330
        (VECTOR(uint32_t, 2))(4294967292UL, 0x842EB54DL), // p_840->g_339
        (VECTOR(int8_t, 2))(0L, (-8L)), // p_840->g_342
        (VECTOR(int16_t, 16))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, (-1L)), (-1L)), (-1L), 3L, (-1L), (VECTOR(int16_t, 2))(3L, (-1L)), (VECTOR(int16_t, 2))(3L, (-1L)), 3L, (-1L), 3L, (-1L)), // p_840->g_357
        (VECTOR(int32_t, 8))(0x62155AAEL, (VECTOR(int32_t, 4))(0x62155AAEL, (VECTOR(int32_t, 2))(0x62155AAEL, 0x69320118L), 0x69320118L), 0x69320118L, 0x62155AAEL, 0x69320118L), // p_840->g_364
        &p_840->g_59, // p_840->g_397
        8L, // p_840->g_416
        (VECTOR(uint8_t, 2))(1UL, 0x5CL), // p_840->g_421
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 8UL), 8UL), // p_840->g_422
        (VECTOR(uint8_t, 16))(0x7AL, (VECTOR(uint8_t, 4))(0x7AL, (VECTOR(uint8_t, 2))(0x7AL, 0x03L), 0x03L), 0x03L, 0x7AL, 0x03L, (VECTOR(uint8_t, 2))(0x7AL, 0x03L), (VECTOR(uint8_t, 2))(0x7AL, 0x03L), 0x7AL, 0x03L, 0x7AL, 0x03L), // p_840->g_423
        (void*)0, // p_840->g_441
        (-1L), // p_840->g_460
        5UL, // p_840->g_468
        (VECTOR(uint64_t, 4))(0x22B6BC46E08E0208L, (VECTOR(uint64_t, 2))(0x22B6BC46E08E0208L, 18446744073709551615UL), 18446744073709551615UL), // p_840->g_505
        (VECTOR(int8_t, 2))(0x2EL, (-1L)), // p_840->g_508
        (void*)0, // p_840->g_529
        (VECTOR(int8_t, 4))(0x6CL, (VECTOR(int8_t, 2))(0x6CL, 0x5FL), 0x5FL), // p_840->g_537
        (VECTOR(uint16_t, 8))(0xF387L, (VECTOR(uint16_t, 4))(0xF387L, (VECTOR(uint16_t, 2))(0xF387L, 65528UL), 65528UL), 65528UL, 0xF387L, 65528UL), // p_840->g_598
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 8UL), 8UL), 8UL, 0UL, 8UL, (VECTOR(uint16_t, 2))(0UL, 8UL), (VECTOR(uint16_t, 2))(0UL, 8UL), 0UL, 8UL, 0UL, 8UL), // p_840->g_600
        (VECTOR(uint16_t, 2))(0x03ADL, 0x6129L), // p_840->g_601
        (VECTOR(uint16_t, 2))(0xDF65L, 0x443EL), // p_840->g_602
        (VECTOR(int16_t, 2))(0x34F4L, 0x3EEBL), // p_840->g_609
        (VECTOR(uint32_t, 8))(0xEC01DC69L, (VECTOR(uint32_t, 4))(0xEC01DC69L, (VECTOR(uint32_t, 2))(0xEC01DC69L, 1UL), 1UL), 1UL, 0xEC01DC69L, 1UL), // p_840->g_614
        (void*)0, // p_840->g_616
        &p_840->g_197, // p_840->g_617
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), // p_840->g_703
        (VECTOR(int8_t, 2))(7L, (-1L)), // p_840->g_704
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 7UL), 7UL), 7UL, 1UL, 7UL, (VECTOR(uint8_t, 2))(1UL, 7UL), (VECTOR(uint8_t, 2))(1UL, 7UL), 1UL, 7UL, 1UL, 7UL), // p_840->g_705
        (void*)0, // p_840->g_716
        (VECTOR(int8_t, 2))(0x17L, 1L), // p_840->g_733
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int8_t, 2))(1L, (-1L)), (VECTOR(int8_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L)), // p_840->g_735
        (VECTOR(uint64_t, 16))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 6UL), 6UL), 6UL, 2UL, 6UL, (VECTOR(uint64_t, 2))(2UL, 6UL), (VECTOR(uint64_t, 2))(2UL, 6UL), 2UL, 6UL, 2UL, 6UL), // p_840->g_740
        (VECTOR(int32_t, 2))(0L, 0x10BC5730L), // p_840->g_741
        0xB95725B6L, // p_840->g_758
        &p_840->g_195, // p_840->g_761
        (void*)0, // p_840->g_774
        &p_840->g_774, // p_840->g_773
        (VECTOR(int16_t, 4))(0x490EL, (VECTOR(int16_t, 2))(0x490EL, 0x3957L), 0x3957L), // p_840->g_801
        (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0xB75F53177EA1CA5FL), 0xB75F53177EA1CA5FL), // p_840->g_818
        (VECTOR(uint16_t, 16))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 65535UL), 65535UL), 65535UL, 7UL, 65535UL, (VECTOR(uint16_t, 2))(7UL, 65535UL), (VECTOR(uint16_t, 2))(7UL, 65535UL), 7UL, 65535UL, 7UL, 65535UL), // p_840->g_825
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967293UL), 4294967293UL), 4294967293UL, 0UL, 4294967293UL, (VECTOR(uint32_t, 2))(0UL, 4294967293UL), (VECTOR(uint32_t, 2))(0UL, 4294967293UL), 0UL, 4294967293UL, 0UL, 4294967293UL), // p_840->g_830
        {0x13651106L,0x13651106L,0x13651106L,0x13651106L,0x13651106L,0x13651106L,0x13651106L,0x13651106L,0x13651106L}, // p_840->g_831
        0xC9262F0F0CDD45BBL, // p_840->g_833
        &p_840->g_137[0][0][2], // p_840->g_837
        &p_840->g_837, // p_840->g_836
        0, // p_840->v_collective
        sequence_input[get_global_id(0)], // p_840->global_0_offset
        sequence_input[get_global_id(1)], // p_840->global_1_offset
        sequence_input[get_global_id(2)], // p_840->global_2_offset
        sequence_input[get_local_id(0)], // p_840->local_0_offset
        sequence_input[get_local_id(1)], // p_840->local_1_offset
        sequence_input[get_local_id(2)], // p_840->local_2_offset
        sequence_input[get_group_id(0)], // p_840->group_0_offset
        sequence_input[get_group_id(1)], // p_840->group_1_offset
        sequence_input[get_group_id(2)], // p_840->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 172)), permutations[0][get_linear_local_id()])), // p_840->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_841 = c_842;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_840);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_840->g_27, "p_840->g_27", print_hash_value);
    transparent_crc(p_840->g_40, "p_840->g_40", print_hash_value);
    transparent_crc(p_840->g_57, "p_840->g_57", print_hash_value);
    transparent_crc(p_840->g_59, "p_840->g_59", print_hash_value);
    transparent_crc(p_840->g_92, "p_840->g_92", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_840->g_95[i][j], "p_840->g_95[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_840->g_112, "p_840->g_112", print_hash_value);
    transparent_crc(p_840->g_113, "p_840->g_113", print_hash_value);
    transparent_crc(p_840->g_114, "p_840->g_114", print_hash_value);
    transparent_crc(p_840->g_129, "p_840->g_129", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_840->g_137[i][j][k], "p_840->g_137[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_840->g_138, "p_840->g_138", print_hash_value);
    transparent_crc(p_840->g_143.s0, "p_840->g_143.s0", print_hash_value);
    transparent_crc(p_840->g_143.s1, "p_840->g_143.s1", print_hash_value);
    transparent_crc(p_840->g_143.s2, "p_840->g_143.s2", print_hash_value);
    transparent_crc(p_840->g_143.s3, "p_840->g_143.s3", print_hash_value);
    transparent_crc(p_840->g_143.s4, "p_840->g_143.s4", print_hash_value);
    transparent_crc(p_840->g_143.s5, "p_840->g_143.s5", print_hash_value);
    transparent_crc(p_840->g_143.s6, "p_840->g_143.s6", print_hash_value);
    transparent_crc(p_840->g_143.s7, "p_840->g_143.s7", print_hash_value);
    transparent_crc(p_840->g_143.s8, "p_840->g_143.s8", print_hash_value);
    transparent_crc(p_840->g_143.s9, "p_840->g_143.s9", print_hash_value);
    transparent_crc(p_840->g_143.sa, "p_840->g_143.sa", print_hash_value);
    transparent_crc(p_840->g_143.sb, "p_840->g_143.sb", print_hash_value);
    transparent_crc(p_840->g_143.sc, "p_840->g_143.sc", print_hash_value);
    transparent_crc(p_840->g_143.sd, "p_840->g_143.sd", print_hash_value);
    transparent_crc(p_840->g_143.se, "p_840->g_143.se", print_hash_value);
    transparent_crc(p_840->g_143.sf, "p_840->g_143.sf", print_hash_value);
    transparent_crc(p_840->g_149.s0, "p_840->g_149.s0", print_hash_value);
    transparent_crc(p_840->g_149.s1, "p_840->g_149.s1", print_hash_value);
    transparent_crc(p_840->g_149.s2, "p_840->g_149.s2", print_hash_value);
    transparent_crc(p_840->g_149.s3, "p_840->g_149.s3", print_hash_value);
    transparent_crc(p_840->g_149.s4, "p_840->g_149.s4", print_hash_value);
    transparent_crc(p_840->g_149.s5, "p_840->g_149.s5", print_hash_value);
    transparent_crc(p_840->g_149.s6, "p_840->g_149.s6", print_hash_value);
    transparent_crc(p_840->g_149.s7, "p_840->g_149.s7", print_hash_value);
    transparent_crc(p_840->g_149.s8, "p_840->g_149.s8", print_hash_value);
    transparent_crc(p_840->g_149.s9, "p_840->g_149.s9", print_hash_value);
    transparent_crc(p_840->g_149.sa, "p_840->g_149.sa", print_hash_value);
    transparent_crc(p_840->g_149.sb, "p_840->g_149.sb", print_hash_value);
    transparent_crc(p_840->g_149.sc, "p_840->g_149.sc", print_hash_value);
    transparent_crc(p_840->g_149.sd, "p_840->g_149.sd", print_hash_value);
    transparent_crc(p_840->g_149.se, "p_840->g_149.se", print_hash_value);
    transparent_crc(p_840->g_149.sf, "p_840->g_149.sf", print_hash_value);
    transparent_crc(p_840->g_153, "p_840->g_153", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_840->g_169[i], "p_840->g_169[i]", print_hash_value);

    }
    transparent_crc(p_840->g_172.s0, "p_840->g_172.s0", print_hash_value);
    transparent_crc(p_840->g_172.s1, "p_840->g_172.s1", print_hash_value);
    transparent_crc(p_840->g_172.s2, "p_840->g_172.s2", print_hash_value);
    transparent_crc(p_840->g_172.s3, "p_840->g_172.s3", print_hash_value);
    transparent_crc(p_840->g_172.s4, "p_840->g_172.s4", print_hash_value);
    transparent_crc(p_840->g_172.s5, "p_840->g_172.s5", print_hash_value);
    transparent_crc(p_840->g_172.s6, "p_840->g_172.s6", print_hash_value);
    transparent_crc(p_840->g_172.s7, "p_840->g_172.s7", print_hash_value);
    transparent_crc(p_840->g_172.s8, "p_840->g_172.s8", print_hash_value);
    transparent_crc(p_840->g_172.s9, "p_840->g_172.s9", print_hash_value);
    transparent_crc(p_840->g_172.sa, "p_840->g_172.sa", print_hash_value);
    transparent_crc(p_840->g_172.sb, "p_840->g_172.sb", print_hash_value);
    transparent_crc(p_840->g_172.sc, "p_840->g_172.sc", print_hash_value);
    transparent_crc(p_840->g_172.sd, "p_840->g_172.sd", print_hash_value);
    transparent_crc(p_840->g_172.se, "p_840->g_172.se", print_hash_value);
    transparent_crc(p_840->g_172.sf, "p_840->g_172.sf", print_hash_value);
    transparent_crc(p_840->g_173.x, "p_840->g_173.x", print_hash_value);
    transparent_crc(p_840->g_173.y, "p_840->g_173.y", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_840->g_191[i], "p_840->g_191[i]", print_hash_value);

    }
    transparent_crc(p_840->g_211.s0, "p_840->g_211.s0", print_hash_value);
    transparent_crc(p_840->g_211.s1, "p_840->g_211.s1", print_hash_value);
    transparent_crc(p_840->g_211.s2, "p_840->g_211.s2", print_hash_value);
    transparent_crc(p_840->g_211.s3, "p_840->g_211.s3", print_hash_value);
    transparent_crc(p_840->g_211.s4, "p_840->g_211.s4", print_hash_value);
    transparent_crc(p_840->g_211.s5, "p_840->g_211.s5", print_hash_value);
    transparent_crc(p_840->g_211.s6, "p_840->g_211.s6", print_hash_value);
    transparent_crc(p_840->g_211.s7, "p_840->g_211.s7", print_hash_value);
    transparent_crc(p_840->g_220.s0, "p_840->g_220.s0", print_hash_value);
    transparent_crc(p_840->g_220.s1, "p_840->g_220.s1", print_hash_value);
    transparent_crc(p_840->g_220.s2, "p_840->g_220.s2", print_hash_value);
    transparent_crc(p_840->g_220.s3, "p_840->g_220.s3", print_hash_value);
    transparent_crc(p_840->g_220.s4, "p_840->g_220.s4", print_hash_value);
    transparent_crc(p_840->g_220.s5, "p_840->g_220.s5", print_hash_value);
    transparent_crc(p_840->g_220.s6, "p_840->g_220.s6", print_hash_value);
    transparent_crc(p_840->g_220.s7, "p_840->g_220.s7", print_hash_value);
    transparent_crc(p_840->g_223.x, "p_840->g_223.x", print_hash_value);
    transparent_crc(p_840->g_223.y, "p_840->g_223.y", print_hash_value);
    transparent_crc(p_840->g_224.x, "p_840->g_224.x", print_hash_value);
    transparent_crc(p_840->g_224.y, "p_840->g_224.y", print_hash_value);
    transparent_crc(p_840->g_224.z, "p_840->g_224.z", print_hash_value);
    transparent_crc(p_840->g_224.w, "p_840->g_224.w", print_hash_value);
    transparent_crc(p_840->g_276, "p_840->g_276", print_hash_value);
    transparent_crc(p_840->g_277.x, "p_840->g_277.x", print_hash_value);
    transparent_crc(p_840->g_277.y, "p_840->g_277.y", print_hash_value);
    transparent_crc(p_840->g_288.x, "p_840->g_288.x", print_hash_value);
    transparent_crc(p_840->g_288.y, "p_840->g_288.y", print_hash_value);
    transparent_crc(p_840->g_288.z, "p_840->g_288.z", print_hash_value);
    transparent_crc(p_840->g_288.w, "p_840->g_288.w", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_840->g_310[i], "p_840->g_310[i]", print_hash_value);

    }
    transparent_crc(p_840->g_313, "p_840->g_313", print_hash_value);
    transparent_crc(p_840->g_315, "p_840->g_315", print_hash_value);
    transparent_crc(p_840->g_316.s0, "p_840->g_316.s0", print_hash_value);
    transparent_crc(p_840->g_316.s1, "p_840->g_316.s1", print_hash_value);
    transparent_crc(p_840->g_316.s2, "p_840->g_316.s2", print_hash_value);
    transparent_crc(p_840->g_316.s3, "p_840->g_316.s3", print_hash_value);
    transparent_crc(p_840->g_316.s4, "p_840->g_316.s4", print_hash_value);
    transparent_crc(p_840->g_316.s5, "p_840->g_316.s5", print_hash_value);
    transparent_crc(p_840->g_316.s6, "p_840->g_316.s6", print_hash_value);
    transparent_crc(p_840->g_316.s7, "p_840->g_316.s7", print_hash_value);
    transparent_crc(p_840->g_319.s0, "p_840->g_319.s0", print_hash_value);
    transparent_crc(p_840->g_319.s1, "p_840->g_319.s1", print_hash_value);
    transparent_crc(p_840->g_319.s2, "p_840->g_319.s2", print_hash_value);
    transparent_crc(p_840->g_319.s3, "p_840->g_319.s3", print_hash_value);
    transparent_crc(p_840->g_319.s4, "p_840->g_319.s4", print_hash_value);
    transparent_crc(p_840->g_319.s5, "p_840->g_319.s5", print_hash_value);
    transparent_crc(p_840->g_319.s6, "p_840->g_319.s6", print_hash_value);
    transparent_crc(p_840->g_319.s7, "p_840->g_319.s7", print_hash_value);
    transparent_crc(p_840->g_330.x, "p_840->g_330.x", print_hash_value);
    transparent_crc(p_840->g_330.y, "p_840->g_330.y", print_hash_value);
    transparent_crc(p_840->g_339.x, "p_840->g_339.x", print_hash_value);
    transparent_crc(p_840->g_339.y, "p_840->g_339.y", print_hash_value);
    transparent_crc(p_840->g_342.x, "p_840->g_342.x", print_hash_value);
    transparent_crc(p_840->g_342.y, "p_840->g_342.y", print_hash_value);
    transparent_crc(p_840->g_357.s0, "p_840->g_357.s0", print_hash_value);
    transparent_crc(p_840->g_357.s1, "p_840->g_357.s1", print_hash_value);
    transparent_crc(p_840->g_357.s2, "p_840->g_357.s2", print_hash_value);
    transparent_crc(p_840->g_357.s3, "p_840->g_357.s3", print_hash_value);
    transparent_crc(p_840->g_357.s4, "p_840->g_357.s4", print_hash_value);
    transparent_crc(p_840->g_357.s5, "p_840->g_357.s5", print_hash_value);
    transparent_crc(p_840->g_357.s6, "p_840->g_357.s6", print_hash_value);
    transparent_crc(p_840->g_357.s7, "p_840->g_357.s7", print_hash_value);
    transparent_crc(p_840->g_357.s8, "p_840->g_357.s8", print_hash_value);
    transparent_crc(p_840->g_357.s9, "p_840->g_357.s9", print_hash_value);
    transparent_crc(p_840->g_357.sa, "p_840->g_357.sa", print_hash_value);
    transparent_crc(p_840->g_357.sb, "p_840->g_357.sb", print_hash_value);
    transparent_crc(p_840->g_357.sc, "p_840->g_357.sc", print_hash_value);
    transparent_crc(p_840->g_357.sd, "p_840->g_357.sd", print_hash_value);
    transparent_crc(p_840->g_357.se, "p_840->g_357.se", print_hash_value);
    transparent_crc(p_840->g_357.sf, "p_840->g_357.sf", print_hash_value);
    transparent_crc(p_840->g_364.s0, "p_840->g_364.s0", print_hash_value);
    transparent_crc(p_840->g_364.s1, "p_840->g_364.s1", print_hash_value);
    transparent_crc(p_840->g_364.s2, "p_840->g_364.s2", print_hash_value);
    transparent_crc(p_840->g_364.s3, "p_840->g_364.s3", print_hash_value);
    transparent_crc(p_840->g_364.s4, "p_840->g_364.s4", print_hash_value);
    transparent_crc(p_840->g_364.s5, "p_840->g_364.s5", print_hash_value);
    transparent_crc(p_840->g_364.s6, "p_840->g_364.s6", print_hash_value);
    transparent_crc(p_840->g_364.s7, "p_840->g_364.s7", print_hash_value);
    transparent_crc(p_840->g_416, "p_840->g_416", print_hash_value);
    transparent_crc(p_840->g_421.x, "p_840->g_421.x", print_hash_value);
    transparent_crc(p_840->g_421.y, "p_840->g_421.y", print_hash_value);
    transparent_crc(p_840->g_422.x, "p_840->g_422.x", print_hash_value);
    transparent_crc(p_840->g_422.y, "p_840->g_422.y", print_hash_value);
    transparent_crc(p_840->g_422.z, "p_840->g_422.z", print_hash_value);
    transparent_crc(p_840->g_422.w, "p_840->g_422.w", print_hash_value);
    transparent_crc(p_840->g_423.s0, "p_840->g_423.s0", print_hash_value);
    transparent_crc(p_840->g_423.s1, "p_840->g_423.s1", print_hash_value);
    transparent_crc(p_840->g_423.s2, "p_840->g_423.s2", print_hash_value);
    transparent_crc(p_840->g_423.s3, "p_840->g_423.s3", print_hash_value);
    transparent_crc(p_840->g_423.s4, "p_840->g_423.s4", print_hash_value);
    transparent_crc(p_840->g_423.s5, "p_840->g_423.s5", print_hash_value);
    transparent_crc(p_840->g_423.s6, "p_840->g_423.s6", print_hash_value);
    transparent_crc(p_840->g_423.s7, "p_840->g_423.s7", print_hash_value);
    transparent_crc(p_840->g_423.s8, "p_840->g_423.s8", print_hash_value);
    transparent_crc(p_840->g_423.s9, "p_840->g_423.s9", print_hash_value);
    transparent_crc(p_840->g_423.sa, "p_840->g_423.sa", print_hash_value);
    transparent_crc(p_840->g_423.sb, "p_840->g_423.sb", print_hash_value);
    transparent_crc(p_840->g_423.sc, "p_840->g_423.sc", print_hash_value);
    transparent_crc(p_840->g_423.sd, "p_840->g_423.sd", print_hash_value);
    transparent_crc(p_840->g_423.se, "p_840->g_423.se", print_hash_value);
    transparent_crc(p_840->g_423.sf, "p_840->g_423.sf", print_hash_value);
    transparent_crc(p_840->g_460, "p_840->g_460", print_hash_value);
    transparent_crc(p_840->g_468, "p_840->g_468", print_hash_value);
    transparent_crc(p_840->g_505.x, "p_840->g_505.x", print_hash_value);
    transparent_crc(p_840->g_505.y, "p_840->g_505.y", print_hash_value);
    transparent_crc(p_840->g_505.z, "p_840->g_505.z", print_hash_value);
    transparent_crc(p_840->g_505.w, "p_840->g_505.w", print_hash_value);
    transparent_crc(p_840->g_508.x, "p_840->g_508.x", print_hash_value);
    transparent_crc(p_840->g_508.y, "p_840->g_508.y", print_hash_value);
    transparent_crc(p_840->g_537.x, "p_840->g_537.x", print_hash_value);
    transparent_crc(p_840->g_537.y, "p_840->g_537.y", print_hash_value);
    transparent_crc(p_840->g_537.z, "p_840->g_537.z", print_hash_value);
    transparent_crc(p_840->g_537.w, "p_840->g_537.w", print_hash_value);
    transparent_crc(p_840->g_598.s0, "p_840->g_598.s0", print_hash_value);
    transparent_crc(p_840->g_598.s1, "p_840->g_598.s1", print_hash_value);
    transparent_crc(p_840->g_598.s2, "p_840->g_598.s2", print_hash_value);
    transparent_crc(p_840->g_598.s3, "p_840->g_598.s3", print_hash_value);
    transparent_crc(p_840->g_598.s4, "p_840->g_598.s4", print_hash_value);
    transparent_crc(p_840->g_598.s5, "p_840->g_598.s5", print_hash_value);
    transparent_crc(p_840->g_598.s6, "p_840->g_598.s6", print_hash_value);
    transparent_crc(p_840->g_598.s7, "p_840->g_598.s7", print_hash_value);
    transparent_crc(p_840->g_600.s0, "p_840->g_600.s0", print_hash_value);
    transparent_crc(p_840->g_600.s1, "p_840->g_600.s1", print_hash_value);
    transparent_crc(p_840->g_600.s2, "p_840->g_600.s2", print_hash_value);
    transparent_crc(p_840->g_600.s3, "p_840->g_600.s3", print_hash_value);
    transparent_crc(p_840->g_600.s4, "p_840->g_600.s4", print_hash_value);
    transparent_crc(p_840->g_600.s5, "p_840->g_600.s5", print_hash_value);
    transparent_crc(p_840->g_600.s6, "p_840->g_600.s6", print_hash_value);
    transparent_crc(p_840->g_600.s7, "p_840->g_600.s7", print_hash_value);
    transparent_crc(p_840->g_600.s8, "p_840->g_600.s8", print_hash_value);
    transparent_crc(p_840->g_600.s9, "p_840->g_600.s9", print_hash_value);
    transparent_crc(p_840->g_600.sa, "p_840->g_600.sa", print_hash_value);
    transparent_crc(p_840->g_600.sb, "p_840->g_600.sb", print_hash_value);
    transparent_crc(p_840->g_600.sc, "p_840->g_600.sc", print_hash_value);
    transparent_crc(p_840->g_600.sd, "p_840->g_600.sd", print_hash_value);
    transparent_crc(p_840->g_600.se, "p_840->g_600.se", print_hash_value);
    transparent_crc(p_840->g_600.sf, "p_840->g_600.sf", print_hash_value);
    transparent_crc(p_840->g_601.x, "p_840->g_601.x", print_hash_value);
    transparent_crc(p_840->g_601.y, "p_840->g_601.y", print_hash_value);
    transparent_crc(p_840->g_602.x, "p_840->g_602.x", print_hash_value);
    transparent_crc(p_840->g_602.y, "p_840->g_602.y", print_hash_value);
    transparent_crc(p_840->g_609.x, "p_840->g_609.x", print_hash_value);
    transparent_crc(p_840->g_609.y, "p_840->g_609.y", print_hash_value);
    transparent_crc(p_840->g_614.s0, "p_840->g_614.s0", print_hash_value);
    transparent_crc(p_840->g_614.s1, "p_840->g_614.s1", print_hash_value);
    transparent_crc(p_840->g_614.s2, "p_840->g_614.s2", print_hash_value);
    transparent_crc(p_840->g_614.s3, "p_840->g_614.s3", print_hash_value);
    transparent_crc(p_840->g_614.s4, "p_840->g_614.s4", print_hash_value);
    transparent_crc(p_840->g_614.s5, "p_840->g_614.s5", print_hash_value);
    transparent_crc(p_840->g_614.s6, "p_840->g_614.s6", print_hash_value);
    transparent_crc(p_840->g_614.s7, "p_840->g_614.s7", print_hash_value);
    transparent_crc(p_840->g_703.x, "p_840->g_703.x", print_hash_value);
    transparent_crc(p_840->g_703.y, "p_840->g_703.y", print_hash_value);
    transparent_crc(p_840->g_703.z, "p_840->g_703.z", print_hash_value);
    transparent_crc(p_840->g_703.w, "p_840->g_703.w", print_hash_value);
    transparent_crc(p_840->g_704.x, "p_840->g_704.x", print_hash_value);
    transparent_crc(p_840->g_704.y, "p_840->g_704.y", print_hash_value);
    transparent_crc(p_840->g_705.s0, "p_840->g_705.s0", print_hash_value);
    transparent_crc(p_840->g_705.s1, "p_840->g_705.s1", print_hash_value);
    transparent_crc(p_840->g_705.s2, "p_840->g_705.s2", print_hash_value);
    transparent_crc(p_840->g_705.s3, "p_840->g_705.s3", print_hash_value);
    transparent_crc(p_840->g_705.s4, "p_840->g_705.s4", print_hash_value);
    transparent_crc(p_840->g_705.s5, "p_840->g_705.s5", print_hash_value);
    transparent_crc(p_840->g_705.s6, "p_840->g_705.s6", print_hash_value);
    transparent_crc(p_840->g_705.s7, "p_840->g_705.s7", print_hash_value);
    transparent_crc(p_840->g_705.s8, "p_840->g_705.s8", print_hash_value);
    transparent_crc(p_840->g_705.s9, "p_840->g_705.s9", print_hash_value);
    transparent_crc(p_840->g_705.sa, "p_840->g_705.sa", print_hash_value);
    transparent_crc(p_840->g_705.sb, "p_840->g_705.sb", print_hash_value);
    transparent_crc(p_840->g_705.sc, "p_840->g_705.sc", print_hash_value);
    transparent_crc(p_840->g_705.sd, "p_840->g_705.sd", print_hash_value);
    transparent_crc(p_840->g_705.se, "p_840->g_705.se", print_hash_value);
    transparent_crc(p_840->g_705.sf, "p_840->g_705.sf", print_hash_value);
    transparent_crc(p_840->g_733.x, "p_840->g_733.x", print_hash_value);
    transparent_crc(p_840->g_733.y, "p_840->g_733.y", print_hash_value);
    transparent_crc(p_840->g_735.s0, "p_840->g_735.s0", print_hash_value);
    transparent_crc(p_840->g_735.s1, "p_840->g_735.s1", print_hash_value);
    transparent_crc(p_840->g_735.s2, "p_840->g_735.s2", print_hash_value);
    transparent_crc(p_840->g_735.s3, "p_840->g_735.s3", print_hash_value);
    transparent_crc(p_840->g_735.s4, "p_840->g_735.s4", print_hash_value);
    transparent_crc(p_840->g_735.s5, "p_840->g_735.s5", print_hash_value);
    transparent_crc(p_840->g_735.s6, "p_840->g_735.s6", print_hash_value);
    transparent_crc(p_840->g_735.s7, "p_840->g_735.s7", print_hash_value);
    transparent_crc(p_840->g_735.s8, "p_840->g_735.s8", print_hash_value);
    transparent_crc(p_840->g_735.s9, "p_840->g_735.s9", print_hash_value);
    transparent_crc(p_840->g_735.sa, "p_840->g_735.sa", print_hash_value);
    transparent_crc(p_840->g_735.sb, "p_840->g_735.sb", print_hash_value);
    transparent_crc(p_840->g_735.sc, "p_840->g_735.sc", print_hash_value);
    transparent_crc(p_840->g_735.sd, "p_840->g_735.sd", print_hash_value);
    transparent_crc(p_840->g_735.se, "p_840->g_735.se", print_hash_value);
    transparent_crc(p_840->g_735.sf, "p_840->g_735.sf", print_hash_value);
    transparent_crc(p_840->g_740.s0, "p_840->g_740.s0", print_hash_value);
    transparent_crc(p_840->g_740.s1, "p_840->g_740.s1", print_hash_value);
    transparent_crc(p_840->g_740.s2, "p_840->g_740.s2", print_hash_value);
    transparent_crc(p_840->g_740.s3, "p_840->g_740.s3", print_hash_value);
    transparent_crc(p_840->g_740.s4, "p_840->g_740.s4", print_hash_value);
    transparent_crc(p_840->g_740.s5, "p_840->g_740.s5", print_hash_value);
    transparent_crc(p_840->g_740.s6, "p_840->g_740.s6", print_hash_value);
    transparent_crc(p_840->g_740.s7, "p_840->g_740.s7", print_hash_value);
    transparent_crc(p_840->g_740.s8, "p_840->g_740.s8", print_hash_value);
    transparent_crc(p_840->g_740.s9, "p_840->g_740.s9", print_hash_value);
    transparent_crc(p_840->g_740.sa, "p_840->g_740.sa", print_hash_value);
    transparent_crc(p_840->g_740.sb, "p_840->g_740.sb", print_hash_value);
    transparent_crc(p_840->g_740.sc, "p_840->g_740.sc", print_hash_value);
    transparent_crc(p_840->g_740.sd, "p_840->g_740.sd", print_hash_value);
    transparent_crc(p_840->g_740.se, "p_840->g_740.se", print_hash_value);
    transparent_crc(p_840->g_740.sf, "p_840->g_740.sf", print_hash_value);
    transparent_crc(p_840->g_741.x, "p_840->g_741.x", print_hash_value);
    transparent_crc(p_840->g_741.y, "p_840->g_741.y", print_hash_value);
    transparent_crc(p_840->g_758, "p_840->g_758", print_hash_value);
    transparent_crc(p_840->g_801.x, "p_840->g_801.x", print_hash_value);
    transparent_crc(p_840->g_801.y, "p_840->g_801.y", print_hash_value);
    transparent_crc(p_840->g_801.z, "p_840->g_801.z", print_hash_value);
    transparent_crc(p_840->g_801.w, "p_840->g_801.w", print_hash_value);
    transparent_crc(p_840->g_818.x, "p_840->g_818.x", print_hash_value);
    transparent_crc(p_840->g_818.y, "p_840->g_818.y", print_hash_value);
    transparent_crc(p_840->g_818.z, "p_840->g_818.z", print_hash_value);
    transparent_crc(p_840->g_818.w, "p_840->g_818.w", print_hash_value);
    transparent_crc(p_840->g_825.s0, "p_840->g_825.s0", print_hash_value);
    transparent_crc(p_840->g_825.s1, "p_840->g_825.s1", print_hash_value);
    transparent_crc(p_840->g_825.s2, "p_840->g_825.s2", print_hash_value);
    transparent_crc(p_840->g_825.s3, "p_840->g_825.s3", print_hash_value);
    transparent_crc(p_840->g_825.s4, "p_840->g_825.s4", print_hash_value);
    transparent_crc(p_840->g_825.s5, "p_840->g_825.s5", print_hash_value);
    transparent_crc(p_840->g_825.s6, "p_840->g_825.s6", print_hash_value);
    transparent_crc(p_840->g_825.s7, "p_840->g_825.s7", print_hash_value);
    transparent_crc(p_840->g_825.s8, "p_840->g_825.s8", print_hash_value);
    transparent_crc(p_840->g_825.s9, "p_840->g_825.s9", print_hash_value);
    transparent_crc(p_840->g_825.sa, "p_840->g_825.sa", print_hash_value);
    transparent_crc(p_840->g_825.sb, "p_840->g_825.sb", print_hash_value);
    transparent_crc(p_840->g_825.sc, "p_840->g_825.sc", print_hash_value);
    transparent_crc(p_840->g_825.sd, "p_840->g_825.sd", print_hash_value);
    transparent_crc(p_840->g_825.se, "p_840->g_825.se", print_hash_value);
    transparent_crc(p_840->g_825.sf, "p_840->g_825.sf", print_hash_value);
    transparent_crc(p_840->g_830.s0, "p_840->g_830.s0", print_hash_value);
    transparent_crc(p_840->g_830.s1, "p_840->g_830.s1", print_hash_value);
    transparent_crc(p_840->g_830.s2, "p_840->g_830.s2", print_hash_value);
    transparent_crc(p_840->g_830.s3, "p_840->g_830.s3", print_hash_value);
    transparent_crc(p_840->g_830.s4, "p_840->g_830.s4", print_hash_value);
    transparent_crc(p_840->g_830.s5, "p_840->g_830.s5", print_hash_value);
    transparent_crc(p_840->g_830.s6, "p_840->g_830.s6", print_hash_value);
    transparent_crc(p_840->g_830.s7, "p_840->g_830.s7", print_hash_value);
    transparent_crc(p_840->g_830.s8, "p_840->g_830.s8", print_hash_value);
    transparent_crc(p_840->g_830.s9, "p_840->g_830.s9", print_hash_value);
    transparent_crc(p_840->g_830.sa, "p_840->g_830.sa", print_hash_value);
    transparent_crc(p_840->g_830.sb, "p_840->g_830.sb", print_hash_value);
    transparent_crc(p_840->g_830.sc, "p_840->g_830.sc", print_hash_value);
    transparent_crc(p_840->g_830.sd, "p_840->g_830.sd", print_hash_value);
    transparent_crc(p_840->g_830.se, "p_840->g_830.se", print_hash_value);
    transparent_crc(p_840->g_830.sf, "p_840->g_830.sf", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_840->g_831[i], "p_840->g_831[i]", print_hash_value);

    }
    transparent_crc(p_840->g_833, "p_840->g_833", print_hash_value);
    transparent_crc(p_840->v_collective, "p_840->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 95; i++)
            transparent_crc(p_840->l_special_values[i], "p_840->l_special_values[i]", print_hash_value);
    transparent_crc(p_840->l_comm_values[get_linear_local_id()], "p_840->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_840->g_comm_values[get_linear_group_id() * 172 + get_linear_local_id()], "p_840->g_comm_values[get_linear_group_id() * 172 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
