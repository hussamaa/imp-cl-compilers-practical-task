// --atomics 13 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 52,82,2 -l 2,41,2
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
{62,40,130,18,125,137,113,120,3,60,131,56,89,52,71,134,151,66,30,157,77,103,17,143,47,138,152,98,96,70,64,13,73,22,8,72,81,34,162,92,132,83,128,67,88,41,149,136,95,4,123,39,115,158,21,147,25,142,139,68,2,111,122,59,124,94,36,102,80,160,10,154,12,116,57,161,126,163,156,23,85,107,58,6,127,7,91,43,87,49,119,112,121,27,29,140,16,75,44,145,93,0,129,31,42,117,100,15,55,45,50,37,65,135,32,63,78,101,46,159,53,79,35,28,1,86,155,90,54,104,146,48,133,26,74,148,118,38,82,110,153,106,144,105,24,20,9,33,76,109,5,150,114,19,99,51,14,69,84,141,11,61,97,108}, // permutation 0
{101,61,4,6,42,57,64,33,102,28,37,124,21,72,20,50,137,136,32,40,82,126,55,142,31,158,67,51,119,88,106,12,86,30,36,130,49,15,34,100,26,78,135,138,27,116,71,133,9,123,107,47,58,75,85,132,117,10,43,91,3,5,38,95,7,45,54,146,115,145,121,162,163,73,161,89,153,60,22,108,118,128,83,122,94,66,155,18,11,68,127,97,25,134,63,105,156,98,96,24,23,8,52,157,151,129,149,92,81,1,70,53,29,65,2,77,111,69,131,114,104,0,35,59,17,144,120,159,141,14,39,160,74,150,139,143,113,44,76,84,147,13,93,112,48,16,87,148,125,109,152,79,56,19,62,140,80,46,103,41,154,99,110,90}, // permutation 1
{52,92,31,145,121,75,67,134,126,41,96,89,70,54,103,102,59,66,130,152,63,163,95,113,34,17,147,112,101,86,1,0,55,48,51,23,64,26,24,45,36,76,129,105,13,108,84,42,79,131,3,49,80,83,125,22,73,138,43,144,110,81,124,140,135,149,150,158,5,4,57,25,33,109,107,10,69,136,72,77,137,50,161,146,106,29,116,141,32,159,122,12,2,120,21,118,132,28,6,46,7,100,153,38,35,143,90,53,8,78,37,71,65,88,82,98,119,99,93,9,11,157,97,160,44,154,133,47,19,94,148,114,151,18,142,58,91,20,61,74,39,156,85,123,16,30,60,14,162,87,27,111,62,40,139,115,155,56,15,128,68,127,104,117}, // permutation 2
{163,115,98,43,162,35,130,18,105,66,116,135,63,82,147,80,127,161,34,137,10,76,71,54,143,142,140,125,21,102,24,13,84,9,7,155,5,19,2,58,42,86,159,38,145,91,77,4,14,114,110,52,45,16,149,1,23,49,144,108,120,32,138,27,65,119,87,20,67,131,111,55,41,3,26,62,94,88,36,61,64,53,60,28,39,79,113,154,70,47,11,89,72,33,15,126,75,153,157,146,152,118,6,90,31,139,85,8,97,104,103,68,17,48,0,133,109,59,93,40,121,160,46,51,83,129,73,122,57,96,132,50,151,29,134,150,44,101,106,92,128,78,117,107,56,95,25,81,30,100,74,99,136,123,148,69,22,156,124,12,37,112,141,158}, // permutation 3
{13,139,18,155,45,70,43,133,68,17,78,152,99,28,98,21,131,64,135,117,50,96,10,46,148,123,110,142,37,130,22,88,93,0,48,69,8,44,105,151,75,114,145,52,74,7,72,82,116,146,147,101,109,162,31,29,137,94,6,91,66,163,62,144,102,41,107,126,86,157,32,65,1,106,51,61,136,108,143,15,122,11,118,141,129,9,42,79,56,156,111,77,5,53,73,92,26,104,71,84,76,40,24,81,20,134,113,95,128,112,19,30,87,14,127,25,124,36,100,119,55,59,90,16,150,49,12,57,125,54,154,35,63,140,115,161,85,89,132,27,97,3,39,23,80,153,33,120,121,138,34,2,58,158,159,83,47,67,60,4,160,38,103,149}, // permutation 4
{49,45,0,118,14,104,140,44,4,75,25,161,68,110,32,88,138,63,139,62,28,126,33,18,11,46,145,94,107,34,53,29,151,106,152,1,43,124,123,133,97,64,150,93,80,12,143,41,86,52,157,90,87,148,38,108,125,160,163,2,131,69,92,84,73,19,144,81,96,103,77,132,155,67,158,74,127,23,66,83,72,59,26,48,13,82,114,60,39,137,128,141,55,8,130,71,21,10,40,101,109,122,156,56,117,16,58,7,105,146,153,91,42,24,50,100,17,149,47,95,3,22,147,89,20,120,6,35,142,154,31,79,30,112,115,136,135,119,76,111,134,54,27,5,70,98,15,9,51,113,116,36,78,159,85,65,129,99,57,61,102,37,162,121}, // permutation 5
{85,111,76,135,87,146,16,27,13,106,24,35,17,101,93,131,37,98,99,107,97,155,73,41,60,94,150,112,105,3,126,34,12,92,104,151,117,130,100,63,161,11,83,26,158,102,18,86,67,4,122,1,110,137,6,80,115,160,127,163,139,65,79,90,10,46,157,49,62,33,75,74,53,148,136,143,128,114,96,55,31,162,36,59,118,84,45,142,82,123,134,129,69,29,95,124,159,147,152,51,42,40,57,149,23,25,103,121,72,7,32,120,154,47,68,2,38,71,153,61,39,21,70,116,44,15,91,5,20,108,52,14,43,119,22,50,8,88,78,64,28,138,89,66,9,145,132,56,77,48,19,30,133,54,109,144,113,156,140,81,0,58,141,125}, // permutation 6
{70,104,115,73,71,118,109,149,156,147,162,17,99,30,76,121,107,37,105,145,5,110,137,53,124,51,19,88,92,66,38,56,148,8,21,15,40,47,12,139,106,62,33,55,52,140,57,130,45,120,44,42,67,36,146,24,68,128,98,114,133,154,29,111,7,112,141,74,18,144,49,125,79,80,103,89,54,31,39,142,93,78,72,90,10,135,117,113,108,100,64,155,134,23,13,75,151,123,14,82,48,1,138,152,87,119,16,2,60,6,34,127,59,58,27,163,65,101,129,4,3,95,94,86,85,102,9,159,116,161,11,153,43,132,136,143,77,28,158,50,157,150,25,122,160,126,0,84,32,69,96,22,20,81,97,41,61,131,63,26,83,46,91,35}, // permutation 7
{33,136,42,44,130,48,96,135,50,88,67,142,7,92,129,150,156,6,56,112,36,28,163,119,75,12,91,160,107,90,133,54,49,108,105,57,60,24,109,103,72,47,141,126,39,80,158,53,31,40,34,157,121,110,132,148,59,89,66,16,139,81,137,111,19,143,68,76,101,114,15,82,79,30,29,51,131,37,155,4,43,145,71,120,128,17,62,138,152,106,134,20,83,86,161,52,116,78,11,77,115,38,84,159,153,58,27,147,21,2,18,122,149,85,87,123,140,95,65,97,22,41,26,61,124,146,94,45,117,125,9,64,0,14,8,74,55,100,118,154,127,10,35,3,144,113,99,70,23,25,98,32,69,63,46,104,162,102,5,93,73,13,1,151}, // permutation 8
{18,82,99,38,54,36,159,158,56,90,41,140,78,40,29,83,71,136,53,135,127,2,25,114,51,101,72,94,121,91,60,20,87,139,74,117,9,134,129,13,8,52,163,0,34,115,141,7,123,131,47,16,84,108,32,62,27,96,98,66,19,143,92,39,17,68,14,149,42,103,57,35,4,160,106,142,110,23,77,31,26,67,154,89,46,22,65,156,73,112,33,138,132,1,100,75,120,49,58,81,15,28,109,45,125,124,48,11,88,162,93,85,105,104,157,119,5,151,102,63,130,155,64,107,79,10,161,21,116,118,111,122,76,97,50,80,150,126,148,69,144,59,61,153,152,37,43,128,44,86,145,6,133,70,30,3,137,55,24,95,12,113,147,146} // permutation 9
};

// Seed: 1458770826

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint64_t  f0;
   volatile uint16_t  f1;
};

union U1 {
   uint64_t  f0;
   uint64_t  f1;
   int8_t * volatile  f2;
   uint64_t  f3;
};

union U2 {
   uint8_t  f0;
   int8_t * volatile  f1;
   volatile int8_t  f2;
   uint64_t  f3;
};

struct S3 {
    int32_t g_3;
    volatile int64_t g_8;
    uint16_t g_9;
    volatile int32_t g_14;
    int8_t g_32;
    union U1 g_33;
    int32_t **g_47;
    int64_t *g_58;
    VECTOR(int16_t, 2) g_63;
    uint8_t g_83;
    VECTOR(uint16_t, 8) g_90;
    int64_t *g_128;
    int64_t ** volatile g_127;
    int64_t ** volatile *g_126;
    uint8_t g_131;
    VECTOR(int32_t, 4) g_137;
    int32_t g_144;
    VECTOR(int32_t, 2) g_191;
    uint32_t g_207;
    int32_t g_209;
    VECTOR(int32_t, 8) g_229;
    uint32_t g_238;
    uint32_t g_247;
    VECTOR(int32_t, 16) g_273;
    VECTOR(uint64_t, 8) g_283;
    int32_t *g_320;
    int32_t * volatile g_322;
    VECTOR(int8_t, 2) g_327;
    volatile union U0 * volatile g_328;
    union U0 g_337;
    union U0 *g_336;
    union U0 g_340;
    union U0 *g_339;
    int32_t *g_419;
    int32_t **g_418;
    volatile VECTOR(int64_t, 8) g_446;
    volatile uint32_t g_453;
    volatile VECTOR(int8_t, 16) g_460;
    volatile int8_t g_469;
    volatile int8_t *g_468;
    volatile int8_t **g_467;
    volatile union U2 g_499;
    volatile union U2 *g_498;
    volatile VECTOR(int8_t, 8) g_500;
    volatile union U0 g_503;
    union U2 g_505[5][8];
    union U2 *g_506;
    uint32_t g_508;
    VECTOR(uint8_t, 4) g_545;
    volatile union U2 **g_547;
    volatile union U2 ***g_546;
    volatile VECTOR(int64_t, 4) g_571;
    int8_t *g_576;
    int8_t **g_575;
    volatile VECTOR(int32_t, 8) g_617;
    volatile VECTOR(int32_t, 4) g_618;
    VECTOR(int32_t, 16) g_619;
    VECTOR(int32_t, 8) g_625;
    union U0 g_630;
    union U0 g_632;
    volatile uint8_t g_641;
    volatile VECTOR(uint8_t, 2) g_662;
    union U1 g_685;
    union U1 g_686[1][1];
    union U1 *g_684[6];
    union U1 * volatile *g_683;
    volatile int16_t *g_690;
    volatile VECTOR(int32_t, 4) g_695;
    VECTOR(uint64_t, 8) g_699;
    VECTOR(uint8_t, 8) g_711;
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
int32_t  func_1(struct S3 * p_739);
int32_t ** func_16(uint16_t  p_17, uint32_t  p_18, int32_t ** p_19, int8_t  p_20, int32_t * p_21, struct S3 * p_739);
uint32_t  func_22(int8_t * p_23, int16_t  p_24, struct S3 * p_739);
int8_t * func_25(uint32_t  p_26, int8_t * p_27, uint32_t  p_28, int32_t * p_29, int32_t  p_30, struct S3 * p_739);
int32_t * func_34(int8_t * p_35, int8_t * p_36, int32_t  p_37, struct S3 * p_739);
int8_t * func_39(int32_t ** p_40, int32_t  p_41, int32_t  p_42, uint64_t  p_43, int8_t * p_44, struct S3 * p_739);
uint64_t  func_66(int32_t ** p_67, uint8_t  p_68, struct S3 * p_739);
int32_t  func_69(int32_t * p_70, struct S3 * p_739);
int32_t  func_72(int8_t * p_73, int32_t  p_74, int8_t * p_75, struct S3 * p_739);
int8_t * func_79(uint8_t  p_80, int32_t  p_81, struct S3 * p_739);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_739->g_9 p_739->g_3 p_739->g_695 p_739->g_699 p_739->g_8 p_739->g_711 p_739->g_209 p_739->g_546 p_739->g_547 p_739->g_498 p_739->g_499 p_739->g_191 p_739->g_500 p_739->g_comm_values p_739->g_662 p_739->l_comm_values p_739->g_619 p_739->g_327 p_739->g_576 p_739->g_32 p_739->g_229 p_739->g_273 p_739->g_90
 * writes: p_739->g_9 p_739->g_3 p_739->g_14 p_739->g_508 p_739->g_33.f0 p_739->g_273
 */
int32_t  func_1(struct S3 * p_739)
{ /* block id: 4 */
    int32_t *l_2 = &p_739->g_3;
    int32_t *l_4 = &p_739->g_3;
    int32_t *l_5 = (void*)0;
    int32_t *l_6 = (void*)0;
    int32_t *l_7[10][4] = {{(void*)0,&p_739->g_3,(void*)0,&p_739->g_3},{(void*)0,&p_739->g_3,(void*)0,&p_739->g_3},{(void*)0,&p_739->g_3,(void*)0,&p_739->g_3},{(void*)0,&p_739->g_3,(void*)0,&p_739->g_3},{(void*)0,&p_739->g_3,(void*)0,&p_739->g_3},{(void*)0,&p_739->g_3,(void*)0,&p_739->g_3},{(void*)0,&p_739->g_3,(void*)0,&p_739->g_3},{(void*)0,&p_739->g_3,(void*)0,&p_739->g_3},{(void*)0,&p_739->g_3,(void*)0,&p_739->g_3},{(void*)0,&p_739->g_3,(void*)0,&p_739->g_3}};
    int8_t *l_57 = &p_739->g_32;
    VECTOR(int32_t, 8) l_696 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x71303593L), 0x71303593L), 0x71303593L, 0L, 0x71303593L);
    VECTOR(uint64_t, 8) l_700 = (VECTOR(uint64_t, 8))(0x9D5B3E3369031FD9L, (VECTOR(uint64_t, 4))(0x9D5B3E3369031FD9L, (VECTOR(uint64_t, 2))(0x9D5B3E3369031FD9L, 0x531EE94DF608C41FL), 0x531EE94DF608C41FL), 0x531EE94DF608C41FL, 0x9D5B3E3369031FD9L, 0x531EE94DF608C41FL);
    VECTOR(uint64_t, 2) l_701 = (VECTOR(uint64_t, 2))(0x2114EA2EAB02B273L, 0UL);
    VECTOR(uint8_t, 16) l_708 = (VECTOR(uint8_t, 16))(0x29L, (VECTOR(uint8_t, 4))(0x29L, (VECTOR(uint8_t, 2))(0x29L, 0x09L), 0x09L), 0x09L, 0x29L, 0x09L, (VECTOR(uint8_t, 2))(0x29L, 0x09L), (VECTOR(uint8_t, 2))(0x29L, 0x09L), 0x29L, 0x09L, 0x29L, 0x09L);
    VECTOR(uint8_t, 8) l_712 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xBFL), 0xBFL), 0xBFL, 1UL, 0xBFL);
    VECTOR(uint8_t, 16) l_713 = (VECTOR(uint8_t, 16))(0xBBL, (VECTOR(uint8_t, 4))(0xBBL, (VECTOR(uint8_t, 2))(0xBBL, 0xE3L), 0xE3L), 0xE3L, 0xBBL, 0xE3L, (VECTOR(uint8_t, 2))(0xBBL, 0xE3L), (VECTOR(uint8_t, 2))(0xBBL, 0xE3L), 0xBBL, 0xE3L, 0xBBL, 0xE3L);
    VECTOR(uint8_t, 2) l_714 = (VECTOR(uint8_t, 2))(9UL, 252UL);
    VECTOR(uint8_t, 8) l_715 = (VECTOR(uint8_t, 8))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0xF8L), 0xF8L), 0xF8L, 5UL, 0xF8L);
    uint16_t l_718 = 0x3C0DL;
    uint16_t l_731 = 0UL;
    uint32_t *l_732 = &p_739->g_508;
    int64_t *l_733 = (void*)0;
    int64_t *l_734 = (void*)0;
    int64_t *l_735 = (void*)0;
    uint32_t l_736 = 0x7710B3B4L;
    VECTOR(int8_t, 4) l_737 = (VECTOR(int8_t, 4))(0x62L, (VECTOR(int8_t, 2))(0x62L, 0x0CL), 0x0CL);
    uint64_t *l_738 = &p_739->g_33.f0;
    int i, j;
    --p_739->g_9;
    for (p_739->g_3 = 0; (p_739->g_3 != (-9)); p_739->g_3 = safe_sub_func_int8_t_s_s(p_739->g_3, 2))
    { /* block id: 8 */
        uint64_t l_15 = 18446744073709551612UL;
        int8_t *l_31 = &p_739->g_32;
        int8_t *l_38[10][9] = {{(void*)0,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,(void*)0},{(void*)0,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,(void*)0},{(void*)0,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,(void*)0},{(void*)0,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,(void*)0},{(void*)0,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,(void*)0},{(void*)0,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,(void*)0},{(void*)0,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,(void*)0},{(void*)0,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,(void*)0},{(void*)0,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,(void*)0},{(void*)0,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,&p_739->g_32,(void*)0}};
        int32_t ***l_48 = &p_739->g_47;
        int64_t *l_51 = (void*)0;
        int64_t *l_52 = (void*)0;
        int64_t *l_53 = (void*)0;
        int64_t *l_54[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_55 = 1L;
        uint64_t l_56[7][1];
        int i, j;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 1; j++)
                l_56[i][j] = 0UL;
        }
        p_739->g_14 = 1L;
        if (l_15)
            break;
    }
    p_739->g_273.s8 &= ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(p_739->g_695.yxxx)).lo, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(l_696.s1201465743070070)).odd, (int32_t)(safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 4))(p_739->g_699.s6114)).wxxyzwyy, ((VECTOR(uint64_t, 2))(1UL, 0x7BEE00A5DAB832B8L)).xyxxyyyy))))), ((VECTOR(uint64_t, 16))(l_700.s4412374544376726)).hi))).s24, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_701.yy)), 0x43E4904DDD71B4FDL, 1UL)).hi))), ((*l_738) = (safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(((l_736 = (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 16))(p_739->g_8, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0xAEL, 0x95L)), 3UL, 0x3DL)))).even)), 2UL, 2UL, ((VECTOR(uint8_t, 2))(l_708.s35)), ((safe_div_func_int64_t_s_s(7L, (*l_4))) || GROUP_DIVERGE(0, 1)), 0x07L, 255UL, ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(p_739->g_711.s53)).yyyy, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 16))(l_712.s6250116103262422)), ((VECTOR(uint8_t, 16))(l_713.sb18b4a7c3de9fd28))))))).hi, ((VECTOR(uint8_t, 16))(l_714.xyxyxxyxyxyyxyxy)).lo))).even, ((VECTOR(uint8_t, 2))(1UL, 0x7AL)).xyyy))), 0UL, 2UL)).lo, ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 8))(l_715.s74454442)).even, ((VECTOR(uint8_t, 4))((~((safe_sub_func_uint16_t_u_u(0UL, (((*l_732) = ((l_718 || (safe_mul_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(GROUP_DIVERGE(0, 1), 11)) | ((p_739->g_209 != (((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((GROUP_DIVERGE(0, 1) | ((***p_739->g_546) , (p_739->g_191.y & p_739->g_500.s2))) ^ p_739->g_comm_values[p_739->tid]), 2L)), l_731)) || p_739->g_662.x) && (*l_2))) & 0UL)), (*l_2))), p_739->l_comm_values[(safe_mod_func_uint32_t_u_u(p_739->tid, 164))])), 0x6C97L))) < (*l_4))) <= p_739->g_619.sf))) == 0x9ADDL)), 0xC3L, 7UL, 250UL))))).yxyxzwzz, ((VECTOR(uint8_t, 8))(253UL)), ((VECTOR(uint8_t, 8))(0x94L)))))))).s51, ((VECTOR(uint8_t, 2))(3UL))))).odd, 0))) != l_737.y), p_739->g_327.x)) > (*p_739->g_576)), p_739->g_229.s5))), p_739->g_32, p_739->g_229.s5, 1UL, 0x712FBF14490B7B5EL, 0UL)).s02)).lo, 8UL))))).s32))).lo;
    return p_739->g_90.s5;
}


/* ------------------------------------------ */
/* 
 * reads : p_739->g_83 p_739->g_32 p_739->g_126 p_739->g_127 p_739->g_446 p_739->g_9 p_739->g_453 p_739->g_229 p_739->g_418 p_739->g_419 p_739->g_327 p_739->g_498 p_739->g_503 p_739->g_508 p_739->g_137 p_739->g_460 p_739->g_33.f0 p_739->g_3 p_739->g_128 p_739->g_545 p_739->g_546 p_739->g_273 p_739->g_63 p_739->g_571 p_739->g_576 p_739->g_283 p_739->g_191 p_739->g_617 p_739->g_618 p_739->g_619 p_739->g_500 p_739->g_90 p_739->g_625 p_739->g_238 p_739->g_641 p_739->g_575 p_739->g_662 p_739->g_207 p_739->g_209 p_739->g_144 p_739->g_505.f0 p_739->g_683 p_739->g_690
 * writes: p_739->g_83 p_739->g_32 p_739->g_207 p_739->g_144 p_739->g_127 p_739->g_419 p_739->g_131 p_739->g_506 p_739->g_508 p_739->g_229 p_739->g_33.f0 p_739->l_comm_values p_739->g_575 p_739->g_9 p_739->g_191 p_739->g_209 p_739->g_641 p_739->g_505.f0 p_739->g_90 p_739->g_238 p_739->g_273 p_739->g_320
 */
int32_t ** func_16(uint16_t  p_17, uint32_t  p_18, int32_t ** p_19, int8_t  p_20, int32_t * p_21, struct S3 * p_739)
{ /* block id: 191 */
    int32_t **l_422[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int8_t l_474 = (-9L);
    int8_t *l_512 = (void*)0;
    int8_t **l_511 = &l_512;
    VECTOR(uint64_t, 8) l_516 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551613UL), 18446744073709551613UL), 18446744073709551613UL, 1UL, 18446744073709551613UL);
    int64_t *l_540 = (void*)0;
    union U2 **l_549 = &p_739->g_506;
    union U2 ***l_548[10] = {&l_549,&l_549,&l_549,&l_549,&l_549,&l_549,&l_549,&l_549,&l_549,&l_549};
    union U2 ****l_550 = &l_548[6];
    uint64_t *l_551 = &p_739->g_505[1][2].f3;
    uint64_t *l_552[4];
    uint32_t *l_561 = (void*)0;
    uint32_t *l_562 = &p_739->g_508;
    int64_t *l_567 = (void*)0;
    VECTOR(uint16_t, 2) l_568 = (VECTOR(uint16_t, 2))(65535UL, 65532UL);
    int32_t l_586 = 0L;
    uint32_t l_590 = 6UL;
    VECTOR(int32_t, 8) l_593 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x31ACDCE3L), 0x31ACDCE3L), 0x31ACDCE3L, (-9L), 0x31ACDCE3L);
    uint16_t *l_597 = &p_739->g_9;
    VECTOR(int32_t, 16) l_624 = (VECTOR(int32_t, 16))(0x6E07E369L, (VECTOR(int32_t, 4))(0x6E07E369L, (VECTOR(int32_t, 2))(0x6E07E369L, 1L), 1L), 1L, 0x6E07E369L, 1L, (VECTOR(int32_t, 2))(0x6E07E369L, 1L), (VECTOR(int32_t, 2))(0x6E07E369L, 1L), 0x6E07E369L, 1L, 0x6E07E369L, 1L);
    union U0 *l_631 = &p_739->g_632;
    VECTOR(uint8_t, 4) l_658 = (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 1UL), 1UL);
    VECTOR(uint8_t, 8) l_659 = (VECTOR(uint8_t, 8))(0x16L, (VECTOR(uint8_t, 4))(0x16L, (VECTOR(uint8_t, 2))(0x16L, 0x88L), 0x88L), 0x88L, 0x16L, 0x88L);
    int i;
    for (i = 0; i < 4; i++)
        l_552[i] = &p_739->g_33.f0;
    for (p_739->g_83 = 0; (p_739->g_83 < 34); p_739->g_83++)
    { /* block id: 194 */
        return l_422[0];
    }
    for (p_739->g_32 = 0; (p_739->g_32 < 3); p_739->g_32 = safe_add_func_uint8_t_u_u(p_739->g_32, 1))
    { /* block id: 199 */
        uint32_t l_432 = 1UL;
        VECTOR(int64_t, 8) l_443 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x5A3A692AF43CFE57L), 0x5A3A692AF43CFE57L), 0x5A3A692AF43CFE57L, 0L, 0x5A3A692AF43CFE57L);
        int32_t l_454 = 0L;
        int32_t *l_455 = (void*)0;
        int8_t *l_466 = &p_739->g_32;
        int8_t **l_465 = &l_466;
        int64_t *l_470 = (void*)0;
        int64_t *l_471 = (void*)0;
        int64_t *l_472 = (void*)0;
        int64_t *l_473 = (void*)0;
        int32_t l_475 = 7L;
        union U2 *l_504 = &p_739->g_505[1][2];
        int i;
        for (p_739->g_207 = (-11); (p_739->g_207 == 37); p_739->g_207 = safe_add_func_uint32_t_u_u(p_739->g_207, 4))
        { /* block id: 202 */
            int32_t **l_429 = (void*)0;
            union U2 **l_431 = (void*)0;
            union U2 ***l_430 = &l_431;
            VECTOR(int64_t, 16) l_437 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x321D2B176795B1DAL), 0x321D2B176795B1DAL), 0x321D2B176795B1DAL, 0L, 0x321D2B176795B1DAL, (VECTOR(int64_t, 2))(0L, 0x321D2B176795B1DAL), (VECTOR(int64_t, 2))(0L, 0x321D2B176795B1DAL), 0L, 0x321D2B176795B1DAL, 0L, 0x321D2B176795B1DAL);
            VECTOR(uint16_t, 4) l_440 = (VECTOR(uint16_t, 4))(0x7D4FL, (VECTOR(uint16_t, 2))(0x7D4FL, 0x4DEDL), 0x4DEDL);
            int i;
            for (p_739->g_144 = 0; (p_739->g_144 == (-23)); p_739->g_144 = safe_sub_func_int16_t_s_s(p_739->g_144, 1))
            { /* block id: 205 */
                (*p_739->g_126) = (*p_739->g_126);
                return l_429;
            }
            (*l_430) = (void*)0;
            ++l_432;
            atomic_sub(&p_739->g_atomic_reduction[get_linear_group_id()], (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(l_437.se3)).even, (l_454 = (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(0xD183L, ((VECTOR(uint16_t, 8))(l_440.wxwxzyyz)).s3, 65526UL, 1UL)).y, (safe_mul_func_uint16_t_u_u((p_20 >= (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_443.s0765524652601015)).odd)).s37, ((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0L, 0L)), 0L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))((safe_add_func_int8_t_s_s(5L, l_432)), ((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 4))(0x6D88020F573CAF5BL, 0L, 0L, 0x03E846C19BD374F1L)).zwywyyww, ((VECTOR(int64_t, 2))(p_739->g_446.s10)).yyyyyxxy))), 0x44E677DC1A4F2CCBL, 0x1541A2144C835FBCL, 0x0583C150DC9D2E27L, (safe_mul_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((~(&p_19 != (void*)0)), p_20)) <= p_17), 0x3DL)) > p_739->g_9), p_739->g_453)), 0x651280DB3CBE5F6AL, 0x414CCFD7C7639893L, 1L)))).s45a5)), 2L)), ((VECTOR(int64_t, 8))(0x126192017A1B5571L)), ((VECTOR(int64_t, 8))(1L))))).s73, ((VECTOR(int64_t, 2))(0x0CBC8FC12B5C39BAL))))).xyxy, ((VECTOR(int64_t, 4))(0x4EC881B5132692C8L))))), ((VECTOR(int64_t, 4))(0x4EE22269B04F58A9L))))).zzywxzyy, ((VECTOR(int64_t, 8))((-2L)))))).s5571751565045504)).sf ^ 1UL)), p_739->g_229.s0))))))) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_739->v_collective += p_739->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        (*p_739->g_418) = &l_454;
        l_455 = (*p_19);
        if ((((l_475 = ((VECTOR(int64_t, 16))(((*l_455) = ((safe_add_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(0x42L, ((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(1L, 0x38L)))).yyyyxxxxxyxxxxxx, ((VECTOR(int8_t, 8))(p_739->g_460.sa6a89fd6)).s1054062421464662))).se)) >= (!(safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((p_17 , p_17), 7)), (((void*)0 != l_465) , (p_739->g_467 == (void*)0)))))), p_739->l_comm_values[(safe_mod_func_uint32_t_u_u(p_739->tid, 164))])) != (-7L))), ((VECTOR(int64_t, 4))(5L)), 0x101B80ED437F2287L, p_17, (-4L), ((VECTOR(int64_t, 2))(0L)), l_474, ((VECTOR(int64_t, 4))(0x4059927C91175E2DL)), 0L)).s7) >= 0L) != p_739->g_327.x))
        { /* block id: 218 */
            int32_t l_478 = 6L;
            uint32_t *l_507 = &p_739->g_508;
            uint64_t l_509[7][10] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
            int i, j;
            (*p_739->g_418) = &l_454;
            l_475 |= ((**p_739->g_418) = (**p_19));
            for (l_474 = 20; (l_474 == (-5)); l_474 = safe_sub_func_int64_t_s_s(l_474, 1))
            { /* block id: 224 */
                uint8_t *l_481 = &p_739->g_131;
                int16_t *l_482 = (void*)0;
                int16_t *l_483 = (void*)0;
                int16_t *l_484 = (void*)0;
                int16_t *l_485 = (void*)0;
                int16_t *l_486 = (void*)0;
                int16_t *l_487 = (void*)0;
                int16_t *l_488 = (void*)0;
                int16_t *l_489 = (void*)0;
                int16_t *l_490 = (void*)0;
                int16_t *l_491 = (void*)0;
                int16_t *l_492 = (void*)0;
                int16_t *l_493 = (void*)0;
                l_475 = (l_478 >= (p_18 < ((*l_455) &= (safe_rshift_func_uint8_t_u_u(((*l_481) = 0x0BL), 7)))));
                return &p_739->g_419;
            }
            p_739->g_229.s1 ^= (safe_sub_func_int32_t_s_s(0x2ADBE0BBL, (safe_sub_func_int64_t_s_s(1L, (l_478 & ((((((((void*)0 != p_739->g_498) > (l_478 || ((VECTOR(int8_t, 2))(p_739->g_500.s53)).hi)) , (((p_17 > (p_17 < ((((safe_add_func_uint32_t_u_u(((*l_507) ^= ((p_739->g_506 = (p_739->g_503 , l_504)) == (void*)0)), l_478)) | p_739->g_137.x) , 0x732498A66508A086L) <= 0L))) < 0xA3D4565E55C290A3L) , (*l_455))) != p_17) , l_478) && p_739->g_460.s6) < l_509[1][7]))))));
        }
        else
        { /* block id: 233 */
            int8_t ***l_510[3];
            uint64_t *l_513 = &p_739->g_33.f0;
            uint32_t l_527 = 0UL;
            int i;
            for (i = 0; i < 3; i++)
                l_510[i] = (void*)0;
            l_511 = &l_466;
            l_475 |= (((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x1BD9L, (-1L))).yyxxyxxy)).s3 || (((*l_513)++) < p_18)) > ((VECTOR(uint64_t, 2))(l_516.s75)).lo) > (((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 16))(FAKE_DIVERGE(p_739->local_0_offset, get_local_id(0), 10), (p_18 ^ (0x03L <= (safe_add_func_int64_t_s_s((p_739->g_191.x & (p_18 | ((((*l_455) > (safe_sub_func_int16_t_s_s((((safe_add_func_uint16_t_u_u((p_739->g_90.s3--), (0UL <= (0x7594L > (((*l_455) & p_20) <= p_18))))) < 0x4C3DL) & l_527), p_18))) , 0xA3826910L) , (*l_455)))), 18446744073709551610UL)))), 1UL, ((VECTOR(uint64_t, 8))(18446744073709551615UL)), ((VECTOR(uint64_t, 2))(0UL)), 18446744073709551615UL, 18446744073709551612UL, 0xA8D203E1E1D8F124L)).even, ((VECTOR(uint64_t, 8))(0x497DB332072C37A2L))))).s0 >= p_20));
        }
    }
    p_739->g_229.s6 &= (safe_div_func_int8_t_s_s((!(safe_sub_func_int64_t_s_s(p_20, ((safe_rshift_func_uint8_t_u_s(0x84L, (p_17 <= (safe_add_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(((-1L) & p_739->g_3), 0x97L)), p_20))))) , p_18)))), (safe_add_func_int16_t_s_s((l_540 == (*p_739->g_127)), 65535UL))));
    if ((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(1UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_739->g_545.yw)).yyxx)).z)), (p_17 , ((p_739->g_33.f0 &= (p_739->g_546 == ((*l_550) = (p_17 , l_548[6])))) & (safe_rshift_func_int8_t_s_s((((((p_739->g_453 == ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(0L, (safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_div_func_uint32_t_u_u(((*l_562)--), (p_739->g_83 , (((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((-7L), (-4L), 0x3AA34011L, 0x71F1E1EBL)).ywyyzyxz)).s3, ((1UL <= (p_739->l_comm_values[(safe_mod_func_uint32_t_u_u(p_739->tid, 164))] = p_20)) == p_739->g_273.s5))) , p_17) , p_18)))) ^ p_739->g_3), p_739->g_63.x)), 14)), 0x330FL, 6L)).hi, ((VECTOR(int16_t, 2))(0x00D3L))))).lo) > l_568.y) | 0UL) > p_739->g_273.s5) <= 0xD30E66F5L), p_18)))))))
    { /* block id: 245 */
        (*p_739->g_418) = (void*)0;
    }
    else
    { /* block id: 247 */
        int8_t **l_572 = &l_512;
        int8_t ***l_573 = &l_511;
        int8_t ***l_574[4];
        uint16_t *l_577 = &p_739->g_9;
        int32_t l_581 = 0x7F2CBEA0L;
        int32_t l_585 = 7L;
        int32_t l_587 = 0x4020277AL;
        int32_t l_588 = 0x049DDAF9L;
        int32_t l_589 = 0x18496AC5L;
        union U0 *l_629 = &p_739->g_630;
        int64_t l_636 = 0x1401239AF4CC8F2AL;
        int64_t l_640 = 0x5DD397A8EF7EBE4EL;
        uint64_t l_678 = 0UL;
        union U2 ****l_692[1][10] = {{&l_548[1],&l_548[0],&l_548[6],&l_548[0],&l_548[1],&l_548[1],&l_548[0],&l_548[6],&l_548[0],&l_548[1]}};
        int i, j;
        for (i = 0; i < 4; i++)
            l_574[i] = (void*)0;
        (*p_19) = p_21;
        p_739->g_209 = (p_739->g_191.x ^= (((VECTOR(uint32_t, 2))(0xF43179FDL, 4294967294UL)).even , ((((safe_sub_func_int16_t_s_s(((((*l_577) = ((((VECTOR(int64_t, 4))(p_739->g_571.wyxy)).x , &l_512) == (p_739->g_575 = l_572))) >= (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((*p_739->g_576))), 6))) & (l_581 != (((safe_sub_func_int16_t_s_s(p_739->g_283.s6, l_581)) >= ((safe_unary_minus_func_int16_t_s((((VECTOR(uint16_t, 16))(0xAA4EL, 5UL, (l_581 | 0L), ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_581, 0xA395L, ((VECTOR(uint16_t, 4))(0UL)), 0UL, 0x2147L)).s4025221072634153)).s4a64, ((VECTOR(uint16_t, 4))(0x3C23L)), ((VECTOR(uint16_t, 4))(1UL))))).wzzwyyzw, ((VECTOR(uint16_t, 8))(1UL)), ((VECTOR(uint16_t, 8))(65535UL))))), 65532UL, 0x4944L, ((VECTOR(uint16_t, 2))(0xC3C1L)), 1UL)).sb < l_581))) != p_20)) , FAKE_DIVERGE(p_739->global_1_offset, get_global_id(1), 10)))), FAKE_DIVERGE(p_739->local_0_offset, get_local_id(0), 10))) < 0x9160L) , p_20) && p_17)));
        l_590--;
        if (((VECTOR(int32_t, 4))(0x6D0605A7L, ((VECTOR(int32_t, 2))(l_593.s16)), (-4L))).y)
        { /* block id: 254 */
            uint16_t **l_594 = &l_577;
            uint16_t *l_596 = (void*)0;
            uint16_t **l_595[2];
            int32_t l_598 = (-7L);
            int32_t l_605[6] = {0x4C0B53C1L,0x60DFD1B0L,0x4C0B53C1L,0x4C0B53C1L,0x60DFD1B0L,0x4C0B53C1L};
            VECTOR(int32_t, 8) l_609 = (VECTOR(int32_t, 8))(0x01464E73L, (VECTOR(int32_t, 4))(0x01464E73L, (VECTOR(int32_t, 2))(0x01464E73L, (-8L)), (-8L)), (-8L), 0x01464E73L, (-8L));
            uint32_t l_626 = 1UL;
            int i;
            for (i = 0; i < 2; i++)
                l_595[i] = &l_596;
            l_598 &= (((*l_594) = (void*)0) == (l_597 = &p_739->g_9));
            (*p_739->g_418) = &l_587;
            for (p_17 = (-17); (p_17 >= 16); p_17 = safe_add_func_uint8_t_u_u(p_17, 2))
            { /* block id: 261 */
                int8_t l_601 = (-2L);
                int32_t l_602 = 0x10AE9567L;
                int32_t l_603 = 0x17D7422CL;
                int32_t l_604 = 0x0A447324L;
                uint64_t l_606 = 0x063F6AC81261FABBL;
                uint32_t *l_614 = (void*)0;
                uint32_t *l_615 = (void*)0;
                uint32_t *l_616 = &l_590;
                union U0 **l_633 = &l_631;
                --l_606;
                (*p_739->g_419) ^= 0L;
                (**p_19) = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(l_609.s53)).xyyx, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))((-10L), (-1L))).xyyxyxyx, (int32_t)(**p_19)))).even))).wzwxyzxz)), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(0x21F534ABL, 0x22BB5199L)), ((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x71CF9177L, 0x3AC08165L, 0x3EF97288L, 1L)).zzwxwxwz)).s42)), 0x351B17BCL, 0x0B2C5DD5L)), ((VECTOR(int32_t, 2))(0L, 0x33A3E4B6L)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(0x06122719L, 9L)), 0x5297B95FL)).even, ((VECTOR(int32_t, 16))(1L, (safe_add_func_int32_t_s_s((-1L), ((*l_616) |= (++(*l_562))))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_739->g_617.s6040)).lo)), ((VECTOR(int32_t, 4))(p_739->g_618.xyxw)), ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(p_739->g_619.s7e)).yyyyyyxx, (int32_t)((p_739->g_500.s2 ^ ((GROUP_DIVERGE(2, 1) != 0UL) || (safe_div_func_uint16_t_u_u(p_739->g_90.s4, (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(l_624.se2)).odd, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_739->g_625.s23177131)).s42)), l_626, ((safe_mod_func_int64_t_s_s((((((+0x653C980FDAEB840FL) && ((((l_629 != ((*l_633) = l_631)) , l_598) && l_587) , p_739->g_327.y)) < 0x658BE421L) , p_17) ^ l_603), p_17)) , (**p_19)), 0x35F0FC99L, 0x589BA8AEL, ((VECTOR(int32_t, 8))(1L)), 4L, 0x35D1E11CL)).s0)))))) ^ p_739->g_238)))))), ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 8))(0x29D6F5EBL))))))).s02))), l_605[0], 0x5A2C87BFL, ((VECTOR(int32_t, 4))(0x57973AEEL)), 0x2B106A2BL)).sbb))).yxxxyxxy))), 0x3677982FL, 0x6FF5A816L, 1L, ((VECTOR(int32_t, 4))((-7L))), (-9L))).s0 <= 4294967293UL);
            }
            for (p_739->g_9 = 0; (p_739->g_9 >= 60); p_739->g_9++)
            { /* block id: 271 */
                int32_t l_637 = 0x27E11070L;
                int32_t l_638 = 0L;
                int32_t l_639 = 1L;
                p_739->g_641++;
            }
        }
        else
        { /* block id: 274 */
            int32_t **l_644[3][7][3] = {{{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320}},{{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320}},{{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320},{&p_739->g_419,&p_739->g_419,&p_739->g_320}}};
            int32_t l_657 = 7L;
            uint8_t *l_660 = (void*)0;
            uint8_t *l_661 = &p_739->g_505[1][2].f0;
            int32_t l_677 = 1L;
            union U1 **l_687 = &p_739->g_684[3];
            union U1 ***l_688 = &l_687;
            uint16_t l_689 = 3UL;
            int16_t *l_691 = (void*)0;
            union U2 ****l_693[5][2][9] = {{{&l_548[6],(void*)0,(void*)0,&l_548[7],&l_548[6],&l_548[6],(void*)0,&l_548[6],&l_548[7]},{&l_548[6],(void*)0,(void*)0,&l_548[7],&l_548[6],&l_548[6],(void*)0,&l_548[6],&l_548[7]}},{{&l_548[6],(void*)0,(void*)0,&l_548[7],&l_548[6],&l_548[6],(void*)0,&l_548[6],&l_548[7]},{&l_548[6],(void*)0,(void*)0,&l_548[7],&l_548[6],&l_548[6],(void*)0,&l_548[6],&l_548[7]}},{{&l_548[6],(void*)0,(void*)0,&l_548[7],&l_548[6],&l_548[6],(void*)0,&l_548[6],&l_548[7]},{&l_548[6],(void*)0,(void*)0,&l_548[7],&l_548[6],&l_548[6],(void*)0,&l_548[6],&l_548[7]}},{{&l_548[6],(void*)0,(void*)0,&l_548[7],&l_548[6],&l_548[6],(void*)0,&l_548[6],&l_548[7]},{&l_548[6],(void*)0,(void*)0,&l_548[7],&l_548[6],&l_548[6],(void*)0,&l_548[6],&l_548[7]}},{{&l_548[6],(void*)0,(void*)0,&l_548[7],&l_548[6],&l_548[6],(void*)0,&l_548[6],&l_548[7]},{&l_548[6],(void*)0,(void*)0,&l_548[7],&l_548[6],&l_548[6],(void*)0,&l_548[6],&l_548[7]}}};
            int8_t l_694 = (-8L);
            int i, j, k;
            (*p_19) = func_34(((*l_572) = (*p_739->g_575)), func_39((l_644[0][1][1] = l_644[0][1][1]), (!((safe_div_func_uint16_t_u_u(((*l_597) = (FAKE_DIVERGE(p_739->group_0_offset, get_group_id(0), 10) , ((safe_rshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(9L, 1L)).even, 1UL)), 4)) ^ (safe_div_func_uint64_t_u_u(((safe_add_func_int8_t_s_s(p_18, p_20)) & (safe_sub_func_int64_t_s_s((l_657 < ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_658.wzzyyywz)))).s36, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0x94L, GROUP_DIVERGE(2, 1), 0UL, 253UL)))), ((*l_661) = ((VECTOR(uint8_t, 4))(l_659.s7053)).z), ((VECTOR(uint8_t, 4))(p_739->g_662.yyyy)), ((safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s((l_677 ^= (safe_div_func_uint32_t_u_u((p_20 < (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_585 = (p_17 > (l_657 >= 0L))), 1)), 0x6F80L)), l_588)) , (*p_739->g_576)), 4))), l_657))), GROUP_DIVERGE(2, 1))), (*p_739->g_576))) && (-8L)), ((VECTOR(uint8_t, 4))(253UL)), 1UL, 0x0EL)).s21))).yyxxxxxyxxxxyyxx)).s8), p_18))), p_18))))), p_739->g_545.y)) || p_18)), l_657, p_17, &p_739->g_32, p_739), l_678, p_739);
            p_739->g_273.sa &= ((safe_mul_func_uint8_t_u_u(((((**p_19) && p_739->g_500.s1) , ((--(*l_661)) & 0x7EL)) <= (l_640 >= (0x8BB09F73L != (+(l_694 = ((((p_739->g_683 == ((*l_688) = l_687)) || l_581) ^ (((((((((((l_678 >= l_689) , (*p_739->g_419)) & p_18) <= (-1L)) , p_739->g_690) != l_691) | p_20) , (**p_739->g_418)) != p_739->g_508) , l_692[0][6]) != l_693[4][1][1])) == 0x61L)))))), l_587)) >= FAKE_DIVERGE(p_739->global_1_offset, get_global_id(1), 10));
        }
    }
    return &p_739->g_419;
}


/* ------------------------------------------ */
/* 
 * reads : p_739->g_83 p_739->g_209 p_739->g_191 p_739->g_8 p_739->g_144
 * writes: p_739->g_83 p_739->g_209 p_739->g_207 p_739->g_131 p_739->g_238 p_739->g_322
 */
uint32_t  func_22(int8_t * p_23, int16_t  p_24, struct S3 * p_739)
{ /* block id: 130 */
    int32_t *l_361 = &p_739->g_144;
    union U1 *l_367 = (void*)0;
    union U1 **l_366 = &l_367;
    int32_t l_401 = 0x47D94C01L;
    int32_t l_403 = (-1L);
    int32_t l_404 = 1L;
    int32_t l_405 = 0x79CB1E7FL;
    int8_t l_406 = 1L;
    int32_t l_407 = 0L;
    VECTOR(int16_t, 4) l_409 = (VECTOR(int16_t, 4))(0x3721L, (VECTOR(int16_t, 2))(0x3721L, 0x69EEL), 0x69EEL);
    int32_t l_410 = 0x7CD12CA5L;
    int32_t l_412 = 0x4589FBCCL;
    int32_t l_413[5];
    int i;
    for (i = 0; i < 5; i++)
        l_413[i] = 0x21302DD7L;
    for (p_739->g_83 = 0; (p_739->g_83 >= 18); p_739->g_83 = safe_add_func_int64_t_s_s(p_739->g_83, 8))
    { /* block id: 133 */
        int32_t **l_360[4][9] = {{&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320},{&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320},{&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320},{&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320,&p_739->g_320}};
        union U1 *l_365 = &p_739->g_33;
        union U1 **l_364 = &l_365;
        int i, j;
        l_361 = (void*)0;
        for (p_739->g_209 = 0; (p_739->g_209 <= (-22)); p_739->g_209--)
        { /* block id: 137 */
            int32_t *l_368 = (void*)0;
            int32_t l_388 = (-1L);
            int32_t l_400 = 0x496DF1ECL;
            l_366 = l_364;
            l_361 = l_368;
            for (p_739->g_207 = 6; (p_739->g_207 <= 57); ++p_739->g_207)
            { /* block id: 142 */
                int16_t l_389 = 0x36C8L;
                int32_t l_394[2][7][8] = {{{0x3B662DB0L,0L,(-6L),0x444E361DL,0x4DDD9A3EL,0x23DE2DDBL,5L,0L},{0x3B662DB0L,0L,(-6L),0x444E361DL,0x4DDD9A3EL,0x23DE2DDBL,5L,0L},{0x3B662DB0L,0L,(-6L),0x444E361DL,0x4DDD9A3EL,0x23DE2DDBL,5L,0L},{0x3B662DB0L,0L,(-6L),0x444E361DL,0x4DDD9A3EL,0x23DE2DDBL,5L,0L},{0x3B662DB0L,0L,(-6L),0x444E361DL,0x4DDD9A3EL,0x23DE2DDBL,5L,0L},{0x3B662DB0L,0L,(-6L),0x444E361DL,0x4DDD9A3EL,0x23DE2DDBL,5L,0L},{0x3B662DB0L,0L,(-6L),0x444E361DL,0x4DDD9A3EL,0x23DE2DDBL,5L,0L}},{{0x3B662DB0L,0L,(-6L),0x444E361DL,0x4DDD9A3EL,0x23DE2DDBL,5L,0L},{0x3B662DB0L,0L,(-6L),0x444E361DL,0x4DDD9A3EL,0x23DE2DDBL,5L,0L},{0x3B662DB0L,0L,(-6L),0x444E361DL,0x4DDD9A3EL,0x23DE2DDBL,5L,0L},{0x3B662DB0L,0L,(-6L),0x444E361DL,0x4DDD9A3EL,0x23DE2DDBL,5L,0L},{0x3B662DB0L,0L,(-6L),0x444E361DL,0x4DDD9A3EL,0x23DE2DDBL,5L,0L},{0x3B662DB0L,0L,(-6L),0x444E361DL,0x4DDD9A3EL,0x23DE2DDBL,5L,0L},{0x3B662DB0L,0L,(-6L),0x444E361DL,0x4DDD9A3EL,0x23DE2DDBL,5L,0L}}};
                int32_t *l_397 = &l_388;
                uint32_t l_414 = 0UL;
                int i, j, k;
                if ((atomic_inc(&p_739->g_atomic_input[13 * get_linear_group_id() + 12]) == 0))
                { /* block id: 144 */
                    int32_t l_371 = 6L;
                    uint32_t l_387 = 0x70D3573AL;
                    for (l_371 = 0; (l_371 < (-14)); l_371 = safe_sub_func_int32_t_s_s(l_371, 5))
                    { /* block id: 147 */
                        uint16_t l_374 = 0x4AD7L;
                        uint8_t l_375 = 247UL;
                        int32_t l_376 = 1L;
                        int8_t l_377 = 6L;
                        int8_t l_378 = (-1L);
                        uint32_t l_379 = 0x2FCE8534L;
                        uint32_t l_382 = 4294967295UL;
                        int32_t *l_385 = &l_376;
                        int32_t *l_386 = &l_376;
                        l_375 &= l_374;
                        --l_379;
                        l_382--;
                        l_386 = l_385;
                    }
                    l_387 = 0x7880312BL;
                    unsigned int result = 0;
                    result += l_371;
                    result += l_387;
                    atomic_add(&p_739->g_special_values[13 * get_linear_group_id() + 12], result);
                }
                else
                { /* block id: 154 */
                    (1 + 1);
                }
                l_388 ^= 0x1BA3AD03L;
                if (l_389)
                { /* block id: 158 */
                    uint8_t *l_393 = &p_739->g_131;
                    if ((atomic_inc(&p_739->l_atomic_input[3]) == 2))
                    { /* block id: 160 */
                        union U2 l_391 = {0xF6L};/* VOLATILE GLOBAL l_391 */
                        union U2 *l_390 = &l_391;
                        union U2 *l_392 = &l_391;
                        l_392 = l_390;
                        unsigned int result = 0;
                        result += l_391.f0;
                        result += l_391.f1;
                        result += l_391.f2;
                        result += l_391.f3;
                        atomic_add(&p_739->l_special_values[3], result);
                    }
                    else
                    { /* block id: 162 */
                        (1 + 1);
                    }
                    l_394[1][4][4] = (((*l_393) = p_739->g_191.x) <= GROUP_DIVERGE(1, 1));
                    for (p_739->g_238 = 11; (p_739->g_238 != 9); p_739->g_238 = safe_sub_func_int8_t_s_s(p_739->g_238, 2))
                    { /* block id: 169 */
                        p_739->g_322 = &l_388;
                        if (p_24)
                            break;
                        return p_739->g_191.x;
                    }
                }
                else
                { /* block id: 174 */
                    int16_t l_402[9][6][4] = {{{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL}},{{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL}},{{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL}},{{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL}},{{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL}},{{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL}},{{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL}},{{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL}},{{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL},{(-4L),0x1112L,(-1L),0x49FFL}}};
                    int32_t l_408 = (-1L);
                    int32_t l_411 = 0x36E05511L;
                    int32_t *l_417 = (void*)0;
                    int i, j, k;
                    l_397 = &l_388;
                    for (p_24 = 20; (p_24 == 6); --p_24)
                    { /* block id: 178 */
                        l_400 = ((*l_397) = (p_739->g_8 == p_24));
                    }
                    l_414--;
                    l_361 = (l_417 = &l_394[1][4][4]);
                }
            }
        }
        return p_24;
    }
    return (*l_361);
}


/* ------------------------------------------ */
/* 
 * reads : p_739->g_209 p_739->g_3 p_739->g_327 p_739->g_328 p_739->g_32 p_739->g_336 p_739->g_339 p_739->g_238 p_739->g_273 p_739->l_comm_values p_739->g_9 p_739->g_137
 * writes: p_739->g_32 p_739->g_336 p_739->g_131 p_739->l_comm_values p_739->g_137 p_739->g_229
 */
int8_t * func_25(uint32_t  p_26, int8_t * p_27, uint32_t  p_28, int32_t * p_29, int32_t  p_30, struct S3 * p_739)
{ /* block id: 121 */
    int32_t *l_323[6];
    uint64_t l_324 = 0x2563EA5185A5B5BEL;
    VECTOR(uint8_t, 2) l_333 = (VECTOR(uint8_t, 2))(0xE4L, 0x08L);
    union U0 **l_338 = &p_739->g_336;
    uint8_t *l_343 = &p_739->g_131;
    int64_t *l_344 = (void*)0;
    int64_t *l_345 = (void*)0;
    int64_t *l_346 = (void*)0;
    int64_t *l_347 = (void*)0;
    int64_t *l_348 = (void*)0;
    int64_t *l_349 = (void*)0;
    int64_t *l_350 = (void*)0;
    int64_t *l_351 = (void*)0;
    int64_t *l_352 = (void*)0;
    int64_t *l_353 = (void*)0;
    int64_t *l_354 = (void*)0;
    int64_t *l_355 = (void*)0;
    int64_t *l_356[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t *l_357 = &p_739->g_9;
    int i;
    for (i = 0; i < 6; i++)
        l_323[i] = &p_739->g_209;
    l_324 = (*p_29);
    p_739->g_137.z &= ((((p_739->l_comm_values[(safe_mod_func_uint32_t_u_u(p_739->tid, 164))] &= (safe_mul_func_int16_t_s_s(((((*p_27) = (!(~((VECTOR(int8_t, 2))(p_739->g_327.yy)).hi))) && ((p_739->g_328 == (void*)0) ^ (safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((*p_27), (&p_739->g_32 == &p_739->g_32))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_333.yx)), 0x05L, 0x93L)))).yxxzxzxy, (uint8_t)((*l_343) = (safe_rshift_func_int8_t_s_u((((*l_338) = p_739->g_336) == p_739->g_339), (safe_lshift_func_uint16_t_u_s((((VECTOR(uint8_t, 16))(p_30, ((VECTOR(uint8_t, 2))(247UL, 0x43L)), ((VECTOR(uint8_t, 2))(0x05L, 246UL)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(p_739->g_238, 0x04L, 0x45L, 0x51L)).xwwywyyy, ((VECTOR(int8_t, 8))(1L)), ((VECTOR(int8_t, 8))(0x0CL))))).s3363422176132003)).s8d, ((VECTOR(int8_t, 2))(0x56L))))), p_739->g_3, 0xD8L, p_28, 255UL, 0x96L, 0xC3L)), ((VECTOR(uint8_t, 2))(4UL)), 255UL)).s1 , p_739->g_273.s9), 4))))), (uint8_t)p_30))).hi)).w)))) != 0x10L), 0x319CL))) , l_357) != &p_739->g_9) ^ p_739->g_9);
    p_739->g_229.s5 = (*p_29);
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_739->g_9 p_739->g_137 p_739->g_90 p_739->g_229 p_739->g_238 p_739->g_144 p_739->g_247 p_739->g_63 p_739->g_207 p_739->g_209 p_739->g_273 p_739->g_283
 * writes: p_739->g_9 p_739->g_90 p_739->g_238 p_739->g_144 p_739->g_247 p_739->g_32 p_739->g_209 p_739->g_273 p_739->g_320
 */
int32_t * func_34(int8_t * p_35, int8_t * p_36, int32_t  p_37, struct S3 * p_739)
{ /* block id: 70 */
    VECTOR(uint32_t, 2) l_212 = (VECTOR(uint32_t, 2))(8UL, 0x2C016A64L);
    int64_t *l_213[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t **l_256 = &l_213[0];
    int64_t ***l_255 = &l_256;
    VECTOR(int32_t, 4) l_274 = (VECTOR(int32_t, 4))(0x55AF62C8L, (VECTOR(int32_t, 2))(0x55AF62C8L, 1L), 1L);
    int32_t *l_289[7];
    int32_t **l_288[8][9][3] = {{{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0}},{{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0}},{{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0}},{{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0}},{{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0}},{{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0}},{{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0}},{{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0},{&l_289[0],(void*)0,(void*)0}}};
    int32_t *l_321 = (void*)0;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_289[i] = &p_739->g_3;
    if (((((VECTOR(uint32_t, 2))(l_212.xx)).odd , l_213[3]) == (void*)0))
    { /* block id: 71 */
        uint64_t l_216 = 18446744073709551615UL;
        VECTOR(int16_t, 4) l_228 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 1L), 1L);
        VECTOR(int32_t, 16) l_230 = (VECTOR(int32_t, 16))(0x7DE7840DL, (VECTOR(int32_t, 4))(0x7DE7840DL, (VECTOR(int32_t, 2))(0x7DE7840DL, 0x672222A8L), 0x672222A8L), 0x672222A8L, 0x7DE7840DL, 0x672222A8L, (VECTOR(int32_t, 2))(0x7DE7840DL, 0x672222A8L), (VECTOR(int32_t, 2))(0x7DE7840DL, 0x672222A8L), 0x7DE7840DL, 0x672222A8L, 0x7DE7840DL, 0x672222A8L);
        VECTOR(int32_t, 8) l_231 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x47BBA4E1L), 0x47BBA4E1L), 0x47BBA4E1L, (-2L), 0x47BBA4E1L);
        VECTOR(int32_t, 2) l_244 = (VECTOR(int32_t, 2))((-1L), 0x7BC4ABE4L);
        VECTOR(int32_t, 8) l_246 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 0x26CAB52BL), 0x26CAB52BL), 0x26CAB52BL, 6L, 0x26CAB52BL);
        int64_t **l_253[8][10][3] = {{{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0}},{{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0}},{{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0}},{{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0}},{{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0}},{{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0}},{{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0}},{{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0},{&l_213[4],(void*)0,(void*)0}}};
        int64_t ***l_252 = &l_253[4][6][1];
        VECTOR(uint32_t, 4) l_265 = (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 1UL), 1UL);
        int16_t l_268 = 1L;
        int32_t *l_287[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t **l_286 = &l_287[2];
        uint8_t l_292 = 6UL;
        int i, j, k;
        for (p_739->g_9 = 0; (p_739->g_9 > 31); ++p_739->g_9)
        { /* block id: 74 */
            uint16_t *l_217[9][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
            int16_t *l_220 = (void*)0;
            int16_t *l_221 = (void*)0;
            int16_t *l_222 = (void*)0;
            int32_t l_223 = (-6L);
            VECTOR(int16_t, 16) l_232 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int16_t, 2))(1L, (-1L)), (VECTOR(int16_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
            int8_t **l_233 = (void*)0;
            int8_t *l_236 = (void*)0;
            int8_t **l_235 = &l_236;
            int8_t ***l_234 = &l_235;
            uint64_t *l_237[8] = {&l_216,&l_216,&l_216,&l_216,&l_216,&l_216,&l_216,&l_216};
            int32_t l_243 = (-1L);
            int32_t *l_245 = &p_739->g_144;
            int64_t ****l_254 = &l_252;
            int32_t *l_269 = (void*)0;
            int32_t *l_270[4][8][8] = {{{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0}},{{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0}},{{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0}},{{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0},{&l_223,(void*)0,(void*)0,(void*)0,&p_739->g_209,&l_223,(void*)0,(void*)0}}};
            int i, j, k;
            l_243 = (l_216 && ((((l_223 = (p_739->g_137.z & (p_739->g_90.s6--))) || (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(18446744073709551611UL, 6UL)).odd, (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 16))(l_228.yzxxwzzxzxyxyzww)).s6, p_37))))) , ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(p_739->g_229.s3364)).odd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_230.s49f018ec72ad0edb)).s8c)), 0x460A11C9L, 0x408EB28AL)).hi, ((VECTOR(int32_t, 16))(l_231.s7722757506132334)).s66))).hi) ^ (l_212.x > (((!((VECTOR(int16_t, 4))(l_232.sdde4)).x) > ((l_233 == ((*l_234) = &p_35)) && (++p_739->g_238))) <= (safe_mul_func_uint8_t_u_u(p_37, l_212.y))))));
            (*l_245) ^= ((VECTOR(int32_t, 8))(l_244.yyyxyxxy)).s4;
            p_739->g_209 ^= (((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 2))(0x1236B7EC641DCC97L, 1L)).xxyyxxxxyyxxyyxy, ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 16))(l_246.s4251413721311110)).lo, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_231.s3, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(4294967290UL, ((*l_245) | (((l_243 = (--p_739->g_247)) > ((safe_mod_func_uint16_t_u_u((((*l_254) = l_252) == l_255), (safe_mul_func_int8_t_s_s(((*p_36) = (4294967291UL ^ (!5UL))), ((safe_lshift_func_uint16_t_u_s((((safe_div_func_int8_t_s_s(1L, (safe_add_func_uint32_t_u_u((+GROUP_DIVERGE(2, 1)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_265.zyxzyyzywyzzxyzw)).s4f)))).yyxxyyyxxxxyxyxy)).s9)))) >= (((safe_div_func_int8_t_s_s(0L, p_37)) ^ p_739->g_63.y) >= p_739->g_207)) , p_37), 12)) != l_268))))) == p_37)) > 1UL)), 0x1B563916L, ((VECTOR(uint32_t, 8))(4294967295UL)), 0x1B951BAAL, 0x994371F4L, FAKE_DIVERGE(p_739->group_0_offset, get_group_id(0), 10), 1UL, 3UL)).s7e)), ((VECTOR(uint32_t, 2))(0xFFBD8F26L)), 4294967288UL, p_739->g_9, GROUP_DIVERGE(0, 1), l_212.y, 4UL, 0x1C05AD0CL, (*l_245), ((VECTOR(uint32_t, 4))(4294967295UL)))).hi))))).s5166301250457255))).sfa, ((VECTOR(int64_t, 2))((-1L)))))), ((VECTOR(int64_t, 2))(0x414F5B9C717242D1L))))).lo < l_212.x);
            for (p_37 = 11; (p_37 > 16); p_37++)
            { /* block id: 88 */
                int32_t ***l_290 = &l_288[5][8][1];
                uint8_t l_291[1][6][2] = {{{254UL,254UL},{254UL,254UL},{254UL,254UL},{254UL,254UL},{254UL,254UL},{254UL,254UL}}};
                int i, j, k;
                l_291[0][0][1] ^= ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))((-9L), 0x78E4FD7FL)).xyyxyxyyyyyxxyyy, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_739->g_273.sdec5)).hi)).yyxyxyyy, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))((l_274.z = p_37), ((VECTOR(int32_t, 4))(0x6732C53FL, 0x7AE33703L, 1L, (-1L))), 0x6BA593C7L, 9L, 0x08A2A7BFL)).s16, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x2B39A41FL, 0L, (safe_lshift_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u(p_739->g_247, (safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s((p_739->g_144 > (0x0B011B8DE1B7BDB6L > ((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 4))(p_739->g_283.s2474)).yyzyxyxzwyzzxwxx, (uint64_t)0x73D22CD79FE6A86DL))).s9)), ((safe_add_func_uint16_t_u_u((p_37 , 6UL), (l_286 != ((*l_290) = l_288[5][8][1])))) > p_37))), p_37)))) , 0x07L) > 0L), p_739->g_144)), 0L, ((VECTOR(int32_t, 2))(1L)), 0x2D42B9B8L, 1L, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 2))(0x525512EEL)), (-1L), 0x664D8D01L)))).sc4))).xxyxxyxx))).s5576210545766106, ((VECTOR(int32_t, 16))(0x13AE9CA0L))))), ((VECTOR(int32_t, 16))((-10L)))))).s8;
                return &p_739->g_209;
            }
        }
        l_292--;
        return &p_739->g_3;
    }
    else
    { /* block id: 97 */
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_739->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 164)), permutations[(safe_mod_func_uint32_t_u_u(0x9AB900E7L, 10))][(safe_mod_func_uint32_t_u_u(p_739->tid, 164))]));
        p_739->g_273.s5 = 5L;
        if ((atomic_inc(&p_739->l_atomic_input[8]) == 7))
        { /* block id: 103 */
            union U0 l_296 = {9UL};/* VOLATILE GLOBAL l_296 */
            union U0 *l_295 = &l_296;
            union U0 *l_297 = (void*)0;
            int32_t l_298 = 0x44F5741FL;
            l_297 = l_295;
            for (l_298 = (-16); (l_298 != (-12)); l_298 = safe_add_func_uint8_t_u_u(l_298, 9))
            { /* block id: 107 */
                uint8_t l_301 = 255UL;
                union U1 l_303 = {0x8DED38523BCFAC44L};/* VOLATILE GLOBAL l_303 */
                union U1 *l_302 = &l_303;
                union U1 l_305 = {18446744073709551611UL};/* VOLATILE GLOBAL l_305 */
                union U1 l_306[7] = {{0xDA14404AA69F62E9L},{0xDA14404AA69F62E9L},{0xDA14404AA69F62E9L},{0xDA14404AA69F62E9L},{0xDA14404AA69F62E9L},{0xDA14404AA69F62E9L},{0xDA14404AA69F62E9L}};
                union U1 l_307[7][10][3] = {{{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}}},{{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}}},{{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}}},{{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}}},{{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}}},{{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}}},{{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}},{{18446744073709551615UL},{0UL},{1UL}}}};
                union U1 l_308[5][7][7] = {{{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}}},{{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}}},{{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}}},{{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}}},{{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}},{{0xDC6EE1362417CD70L},{0x619ED1BD9DFE4E19L},{0xBFCCF397084429E8L},{0x0BFE1B017B55F812L},{0x59A0CF1E4560A459L},{0x59A0CF1E4560A459L},{0x0BFE1B017B55F812L}}}};
                union U1 l_309[9][8] = {{{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL}},{{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL}},{{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL}},{{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL}},{{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL}},{{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL}},{{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL}},{{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL}},{{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL},{0xFD91E4E1AF7AB69DL},{0xFD91E4E1AF7AB69DL},{18446744073709551615UL}}};
                union U1 l_310 = {0x0F563A9C1D6C0E96L};/* VOLATILE GLOBAL l_310 */
                union U1 l_311 = {18446744073709551615UL};/* VOLATILE GLOBAL l_311 */
                union U1 l_312[2] = {{0UL},{0UL}};
                union U1 l_313[6][10] = {{{0UL},{0UL},{0x685AF226C89EFCA3L},{0UL},{0UL},{0UL},{0x685AF226C89EFCA3L},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0x685AF226C89EFCA3L},{0UL},{0UL},{0UL},{0x685AF226C89EFCA3L},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0x685AF226C89EFCA3L},{0UL},{0UL},{0UL},{0x685AF226C89EFCA3L},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0x685AF226C89EFCA3L},{0UL},{0UL},{0UL},{0x685AF226C89EFCA3L},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0x685AF226C89EFCA3L},{0UL},{0UL},{0UL},{0x685AF226C89EFCA3L},{0UL},{0UL},{0UL}},{{0UL},{0UL},{0x685AF226C89EFCA3L},{0UL},{0UL},{0UL},{0x685AF226C89EFCA3L},{0UL},{0UL},{0UL}}};
                union U1 l_314 = {5UL};/* VOLATILE GLOBAL l_314 */
                union U1 l_315[7] = {{9UL},{1UL},{9UL},{9UL},{1UL},{9UL},{9UL}};
                union U1 *l_304[6][5] = {{(void*)0,&l_307[0][9][0],&l_315[0],&l_310,(void*)0},{(void*)0,&l_307[0][9][0],&l_315[0],&l_310,(void*)0},{(void*)0,&l_307[0][9][0],&l_315[0],&l_310,(void*)0},{(void*)0,&l_307[0][9][0],&l_315[0],&l_310,(void*)0},{(void*)0,&l_307[0][9][0],&l_315[0],&l_310,(void*)0},{(void*)0,&l_307[0][9][0],&l_315[0],&l_310,(void*)0}};
                union U0 l_317 = {0x6E22FA6652B3F937L};/* VOLATILE GLOBAL l_317 */
                union U0 *l_316 = &l_317;
                int32_t l_318[8] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
                uint16_t l_319[7];
                int i, j, k;
                for (i = 0; i < 7; i++)
                    l_319[i] = 0x2EF4L;
                l_304[3][3] = (l_301 , (l_302 = l_302));
                l_297 = l_316;
                l_319[3] = (l_318[3] = 0x54A63EF2L);
            }
            unsigned int result = 0;
            result += l_296.f0;
            result += l_296.f1;
            result += l_298;
            atomic_add(&p_739->l_special_values[8], result);
        }
        else
        { /* block id: 114 */
            (1 + 1);
        }
    }
    p_739->g_320 = &p_739->g_3;
    p_739->g_320 = l_321;
    return &p_739->g_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_739->g_63 p_739->g_9 p_739->g_33.f0 p_739->g_90 p_739->l_comm_values p_739->g_83 p_739->g_126 p_739->g_3 p_739->g_32 p_739->g_131 p_739->g_137 p_739->g_144 p_739->g_comm_values p_739->g_191 p_739->g_207 p_739->g_209
 * writes: p_739->g_58 p_739->g_83 p_739->g_32 p_739->g_9 p_739->g_63 p_739->g_131 p_739->g_137 p_739->g_144 p_739->g_191 p_739->g_207 p_739->g_209
 */
int8_t * func_39(int32_t ** p_40, int32_t  p_41, int32_t  p_42, uint64_t  p_43, int8_t * p_44, struct S3 * p_739)
{ /* block id: 13 */
    VECTOR(int16_t, 8) l_62 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-4L)), (-4L)), (-4L), 0L, (-4L));
    int32_t *l_71 = (void*)0;
    int32_t *l_208 = &p_739->g_209;
    int i;
    (*l_208) |= (p_739->g_207 &= (((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 4))((((0x60L < p_43) && ((p_739->g_58 = (void*)0) != (void*)0)) == (safe_unary_minus_func_int8_t_s((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(4294967295UL, (safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_62.s7761615212340200)).s67)).yxyyxyxx, ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 4))(p_739->g_63.yxxx)), (int16_t)(p_42 , (safe_mul_func_int16_t_s_s((((void*)0 != &p_739->g_32) > func_66((func_69(l_71, p_739) , &l_71), p_739->g_comm_values[p_739->tid], p_739)), p_41))), (int16_t)p_739->g_144))).zywxyyww, ((VECTOR(int16_t, 8))(0x455FL))))).s2, p_43)), 0x204F4FA2L, 0x0A1730DDL)).y, 0x57E85835L, 9UL, ((VECTOR(uint32_t, 4))(0UL)), ((VECTOR(uint32_t, 4))(0xCE4462C3L)), ((VECTOR(uint32_t, 4))(1UL)), 0UL)).sa | 1L)))), ((VECTOR(uint64_t, 2))(18446744073709551606UL)), 0xD30CC39558DB1556L)).odd, ((VECTOR(uint64_t, 2))(18446744073709551613UL))))), ((VECTOR(uint64_t, 2))(0UL))))).hi , p_739->g_191.x));
    if ((atomic_inc(&p_739->l_atomic_input[4]) == 0))
    { /* block id: 64 */
        uint32_t l_210[4][3] = {{4294967287UL,4294967287UL,4294967287UL},{4294967287UL,4294967287UL,4294967287UL},{4294967287UL,4294967287UL,4294967287UL},{4294967287UL,4294967287UL,4294967287UL}};
        int16_t l_211 = 0x2284L;
        int i, j;
        l_211 = l_210[2][1];
        unsigned int result = 0;
        int l_210_i0, l_210_i1;
        for (l_210_i0 = 0; l_210_i0 < 4; l_210_i0++) {
            for (l_210_i1 = 0; l_210_i1 < 3; l_210_i1++) {
                result += l_210[l_210_i0][l_210_i1];
            }
        }
        result += l_211;
        atomic_add(&p_739->l_special_values[4], result);
    }
    else
    { /* block id: 66 */
        (1 + 1);
    }
    return &p_739->g_32;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_739->g_144 p_739->g_191
 */
uint64_t  func_66(int32_t ** p_67, uint8_t  p_68, struct S3 * p_739)
{ /* block id: 56 */
    int16_t l_203 = 0x692CL;
    int32_t *l_204 = &p_739->g_144;
    int32_t *l_205 = (void*)0;
    int32_t *l_206[7] = {&p_739->g_3,&p_739->g_3,&p_739->g_3,&p_739->g_3,&p_739->g_3,&p_739->g_3,&p_739->g_3};
    int i;
    l_203 |= (-8L);
    p_739->g_191.y = ((*l_204) = l_203);
    return p_68;
}


/* ------------------------------------------ */
/* 
 * reads : p_739->g_9 p_739->g_33.f0 p_739->g_90 p_739->l_comm_values p_739->g_83 p_739->g_126 p_739->g_3 p_739->g_32 p_739->g_131 p_739->g_137 p_739->g_144 p_739->g_comm_values p_739->g_191 p_739->g_63
 * writes: p_739->g_83 p_739->g_32 p_739->g_9 p_739->g_63 p_739->g_131 p_739->g_137 p_739->g_144
 */
int32_t  func_69(int32_t * p_70, struct S3 * p_739)
{ /* block id: 15 */
    int32_t l_76 = 0x0C533BF9L;
    uint8_t *l_82 = &p_739->g_83;
    int8_t *l_88 = &p_739->g_32;
    int32_t ***l_89 = &p_739->g_47;
    int32_t *l_143[3];
    uint16_t l_184 = 0xF088L;
    uint32_t l_198[9][8] = {{0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L},{0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L},{0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L},{0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L},{0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L},{0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L},{0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L},{0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L},{0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L,0x296A0221L}};
    int8_t **l_199 = &l_88;
    int64_t ***l_200 = (void*)0;
    int32_t l_201[7] = {0x6C0BB685L,3L,0x6C0BB685L,0x6C0BB685L,3L,0x6C0BB685L,0x6C0BB685L};
    uint32_t l_202[7] = {0xF67890D7L,0xF67890D7L,0xF67890D7L,0xF67890D7L,0xF67890D7L,0xF67890D7L,0xF67890D7L};
    int i, j;
    for (i = 0; i < 3; i++)
        l_143[i] = &p_739->g_144;
    p_739->g_144 &= func_72((l_76 , ((safe_mod_func_uint32_t_u_u(l_76, p_739->g_9)) , func_79(((*l_82) = l_76), ((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((((*l_88) = p_739->g_33.f0) <= (-2L)), (((l_89 != (void*)0) || ((VECTOR(uint16_t, 16))(p_739->g_90.s3535152510265021)).s7) != (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s((!0L), GROUP_DIVERGE(1, 1))), l_76)) & GROUP_DIVERGE(2, 1)), p_739->g_90.s3)) > p_739->l_comm_values[(safe_mod_func_uint32_t_u_u(p_739->tid, 164))]), 11))))), 13)) != 255UL), p_739))), p_739->g_90.s3, l_82, p_739);
    if ((atomic_inc(&p_739->l_atomic_input[2]) == 5))
    { /* block id: 35 */
        int32_t l_146 = 0x77B5A891L;
        int32_t *l_145 = &l_146;
        int32_t *l_147[8][4];
        int32_t *l_148 = (void*)0;
        VECTOR(int8_t, 2) l_149 = (VECTOR(int8_t, 2))(0x49L, (-1L));
        uint32_t l_150 = 0UL;
        VECTOR(int32_t, 4) l_151 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L));
        VECTOR(int32_t, 16) l_152 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x66B3F0A2L), 0x66B3F0A2L), 0x66B3F0A2L, 3L, 0x66B3F0A2L, (VECTOR(int32_t, 2))(3L, 0x66B3F0A2L), (VECTOR(int32_t, 2))(3L, 0x66B3F0A2L), 3L, 0x66B3F0A2L, 3L, 0x66B3F0A2L);
        int16_t l_153 = 0x02DFL;
        uint8_t l_154 = 3UL;
        uint8_t l_155 = 0x76L;
        uint8_t l_156 = 0x6CL;
        int64_t l_157 = 5L;
        uint32_t l_158 = 0xEF5433B4L;
        int32_t l_159 = 1L;
        int16_t l_160 = 0x630CL;
        VECTOR(int32_t, 2) l_161 = (VECTOR(int32_t, 2))(0x48CAB240L, 0L);
        int16_t l_162 = (-10L);
        VECTOR(int32_t, 8) l_163 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x183001FCL), 0x183001FCL), 0x183001FCL, (-2L), 0x183001FCL);
        uint64_t l_164 = 1UL;
        VECTOR(int32_t, 4) l_165 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
        uint8_t l_166 = 255UL;
        int32_t l_167 = (-5L);
        VECTOR(int32_t, 16) l_168 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0L), 0L), 0L, 3L, 0L, (VECTOR(int32_t, 2))(3L, 0L), (VECTOR(int32_t, 2))(3L, 0L), 3L, 0L, 3L, 0L);
        VECTOR(int32_t, 2) l_169 = (VECTOR(int32_t, 2))(0L, 0x7E7F47FAL);
        VECTOR(int32_t, 4) l_170 = (VECTOR(int32_t, 4))(0x41DE62A7L, (VECTOR(int32_t, 2))(0x41DE62A7L, 0x0F12F2D7L), 0x0F12F2D7L);
        VECTOR(uint32_t, 16) l_171 = (VECTOR(uint32_t, 16))(0x694F7BBAL, (VECTOR(uint32_t, 4))(0x694F7BBAL, (VECTOR(uint32_t, 2))(0x694F7BBAL, 0xE34AC405L), 0xE34AC405L), 0xE34AC405L, 0x694F7BBAL, 0xE34AC405L, (VECTOR(uint32_t, 2))(0x694F7BBAL, 0xE34AC405L), (VECTOR(uint32_t, 2))(0x694F7BBAL, 0xE34AC405L), 0x694F7BBAL, 0xE34AC405L, 0x694F7BBAL, 0xE34AC405L);
        VECTOR(uint32_t, 2) l_172 = (VECTOR(uint32_t, 2))(0x477D8F50L, 0UL);
        VECTOR(uint32_t, 8) l_173 = (VECTOR(uint32_t, 8))(0xC0B326B5L, (VECTOR(uint32_t, 4))(0xC0B326B5L, (VECTOR(uint32_t, 2))(0xC0B326B5L, 0x8973432FL), 0x8973432FL), 0x8973432FL, 0xC0B326B5L, 0x8973432FL);
        VECTOR(uint32_t, 8) l_174 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), 1UL, 4294967295UL, 1UL);
        VECTOR(uint32_t, 4) l_175 = (VECTOR(uint32_t, 4))(0xBA9DFC48L, (VECTOR(uint32_t, 2))(0xBA9DFC48L, 0xD221595FL), 0xD221595FL);
        VECTOR(uint32_t, 16) l_176 = (VECTOR(uint32_t, 16))(4294967292UL, (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 4294967293UL), 4294967293UL), 4294967293UL, 4294967292UL, 4294967293UL, (VECTOR(uint32_t, 2))(4294967292UL, 4294967293UL), (VECTOR(uint32_t, 2))(4294967292UL, 4294967293UL), 4294967292UL, 4294967293UL, 4294967292UL, 4294967293UL);
        int32_t l_177[4][10] = {{0x5A87B3A4L,0x23D3629FL,0x23D3629FL,0x5A87B3A4L,0x5A87B3A4L,0x23D3629FL,0x23D3629FL,0x5A87B3A4L,0x5A87B3A4L,0x23D3629FL},{0x5A87B3A4L,0x23D3629FL,0x23D3629FL,0x5A87B3A4L,0x5A87B3A4L,0x23D3629FL,0x23D3629FL,0x5A87B3A4L,0x5A87B3A4L,0x23D3629FL},{0x5A87B3A4L,0x23D3629FL,0x23D3629FL,0x5A87B3A4L,0x5A87B3A4L,0x23D3629FL,0x23D3629FL,0x5A87B3A4L,0x5A87B3A4L,0x23D3629FL},{0x5A87B3A4L,0x23D3629FL,0x23D3629FL,0x5A87B3A4L,0x5A87B3A4L,0x23D3629FL,0x23D3629FL,0x5A87B3A4L,0x5A87B3A4L,0x23D3629FL}};
        uint32_t l_178 = 0x35959F26L;
        int32_t l_179 = (-4L);
        uint64_t l_180 = 0x0A8872ADFB2AA1FCL;
        int64_t l_181 = 0x36AB49656563EE52L;
        int32_t l_182 = 1L;
        int16_t l_183 = 0x7518L;
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 4; j++)
                l_147[i][j] = &l_146;
        }
        l_147[3][3] = l_145;
        l_148 = (void*)0;
        l_183 = (((VECTOR(int8_t, 8))(l_149.xxxxyyxy)).s1 , (l_182 &= (l_181 = (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(l_150, ((VECTOR(int32_t, 4))(l_151.zywz)), (-1L), (-6L), ((VECTOR(int32_t, 2))(l_152.s76)), 0x587C1AF1L, ((l_154 |= l_153) , ((l_155 = 1L) , (l_160 = ((l_156 , (l_158 = l_157)) , l_159)))), (l_162 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_161.yxyxxyyyyyxyxxxx)).hi)).s1), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_163.s54)), 0x456C76D5L, 0L)))).sc6, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_164, (-2L), ((VECTOR(int32_t, 4))(l_165.yxxy)), 1L, 0L)).s72)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x05194D58L, 0x0E6599F5L)))), (-5L), 0x53445193L)).wxzwyxxx)), 0x182C662BL, 4L, 1L, (l_167 ^= l_166), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_168.s5d)), 0x33311CE5L, 0x48CD2030L)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_169.xy)).xxyxyxxx)).hi))).zzxxwwyxxxwyzwzy, ((VECTOR(int32_t, 4))(l_170.xzwx)).yyzxwzzxyywxxyzy))).se, (((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_171.s2702d28a0d4a109f)).sdd9f)).even, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(0xEEF570C6L, ((VECTOR(uint32_t, 2))(l_172.xx)), GROUP_DIVERGE(0, 1), ((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(l_173.s64)).xyxy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x5431A1AEL, 0xA9EE059EL)), 4294967295UL, 1UL))))).xxxwywzx, (uint32_t)((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(l_174.s50)), ((VECTOR(uint32_t, 8))(l_175.xxyxzzzz)).s22))), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_176.sba1dca698bdab2cb)).s75))))).odd, (uint32_t)(l_178 |= l_177[0][8])))).s37, ((VECTOR(uint32_t, 2))(0x3E2319AEL))))), 3UL, 0x3BAFCB35L)))).s6271521524525034, ((VECTOR(uint32_t, 16))(4294967295UL)), ((VECTOR(uint32_t, 16))(1UL))))))).s28))).lo , l_179), (-1L), 0x3B515C9FL)))).s24))))))))).yyxyxxyyyxxxxyxx, ((VECTOR(int32_t, 16))((-1L)))))).sad1f)).w , l_180))));
        unsigned int result = 0;
        result += l_146;
        result += l_149.y;
        result += l_149.x;
        result += l_150;
        result += l_151.w;
        result += l_151.z;
        result += l_151.y;
        result += l_151.x;
        result += l_152.sf;
        result += l_152.se;
        result += l_152.sd;
        result += l_152.sc;
        result += l_152.sb;
        result += l_152.sa;
        result += l_152.s9;
        result += l_152.s8;
        result += l_152.s7;
        result += l_152.s6;
        result += l_152.s5;
        result += l_152.s4;
        result += l_152.s3;
        result += l_152.s2;
        result += l_152.s1;
        result += l_152.s0;
        result += l_153;
        result += l_154;
        result += l_155;
        result += l_156;
        result += l_157;
        result += l_158;
        result += l_159;
        result += l_160;
        result += l_161.y;
        result += l_161.x;
        result += l_162;
        result += l_163.s7;
        result += l_163.s6;
        result += l_163.s5;
        result += l_163.s4;
        result += l_163.s3;
        result += l_163.s2;
        result += l_163.s1;
        result += l_163.s0;
        result += l_164;
        result += l_165.w;
        result += l_165.z;
        result += l_165.y;
        result += l_165.x;
        result += l_166;
        result += l_167;
        result += l_168.sf;
        result += l_168.se;
        result += l_168.sd;
        result += l_168.sc;
        result += l_168.sb;
        result += l_168.sa;
        result += l_168.s9;
        result += l_168.s8;
        result += l_168.s7;
        result += l_168.s6;
        result += l_168.s5;
        result += l_168.s4;
        result += l_168.s3;
        result += l_168.s2;
        result += l_168.s1;
        result += l_168.s0;
        result += l_169.y;
        result += l_169.x;
        result += l_170.w;
        result += l_170.z;
        result += l_170.y;
        result += l_170.x;
        result += l_171.sf;
        result += l_171.se;
        result += l_171.sd;
        result += l_171.sc;
        result += l_171.sb;
        result += l_171.sa;
        result += l_171.s9;
        result += l_171.s8;
        result += l_171.s7;
        result += l_171.s6;
        result += l_171.s5;
        result += l_171.s4;
        result += l_171.s3;
        result += l_171.s2;
        result += l_171.s1;
        result += l_171.s0;
        result += l_172.y;
        result += l_172.x;
        result += l_173.s7;
        result += l_173.s6;
        result += l_173.s5;
        result += l_173.s4;
        result += l_173.s3;
        result += l_173.s2;
        result += l_173.s1;
        result += l_173.s0;
        result += l_174.s7;
        result += l_174.s6;
        result += l_174.s5;
        result += l_174.s4;
        result += l_174.s3;
        result += l_174.s2;
        result += l_174.s1;
        result += l_174.s0;
        result += l_175.w;
        result += l_175.z;
        result += l_175.y;
        result += l_175.x;
        result += l_176.sf;
        result += l_176.se;
        result += l_176.sd;
        result += l_176.sc;
        result += l_176.sb;
        result += l_176.sa;
        result += l_176.s9;
        result += l_176.s8;
        result += l_176.s7;
        result += l_176.s6;
        result += l_176.s5;
        result += l_176.s4;
        result += l_176.s3;
        result += l_176.s2;
        result += l_176.s1;
        result += l_176.s0;
        int l_177_i0, l_177_i1;
        for (l_177_i0 = 0; l_177_i0 < 4; l_177_i0++) {
            for (l_177_i1 = 0; l_177_i1 < 10; l_177_i1++) {
                result += l_177[l_177_i0][l_177_i1];
            }
        }
        result += l_178;
        result += l_179;
        result += l_180;
        result += l_181;
        result += l_182;
        result += l_183;
        atomic_add(&p_739->l_special_values[2], result);
    }
    else
    { /* block id: 48 */
        (1 + 1);
    }
    p_739->g_137.w = l_184;
    l_201[0] = ((0x436080E9L && (p_739->g_comm_values[p_739->tid] , ((p_739->g_83 != 9UL) < (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_739->local_1_offset, get_local_id(1), 10), ((VECTOR(uint8_t, 16))(((safe_rshift_func_int16_t_s_u(p_739->g_137.z, ((-1L) | GROUP_DIVERGE(1, 1)))) < ((safe_lshift_func_uint16_t_u_u(((p_739->g_144 = 0x22E64CDAL) || p_739->g_9), 3)) | ((VECTOR(int32_t, 16))(p_739->g_191.xxyyxyxyxxxxyxxy)).s5)), 0xB5L, (safe_lshift_func_uint16_t_u_s(((((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((*l_199) = func_79(((((p_739->g_63.x ^ p_739->g_144) & p_739->g_191.x) <= p_739->g_90.s5) , 254UL), l_198[2][0], p_739)) != &p_739->g_32), p_739->g_191.x)), 65529UL)) | 0L) , l_200) == (void*)0), p_739->g_32)), 0x1DL, p_739->g_9, 0xFEL, FAKE_DIVERGE(p_739->group_2_offset, get_group_id(2), 10), FAKE_DIVERGE(p_739->global_2_offset, get_global_id(2), 10), 253UL, p_739->g_comm_values[p_739->tid], ((VECTOR(uint8_t, 4))(0x39L)), 0x96L, 255UL)).s0))))) != 0x62L);
    return l_202[5];
}


/* ------------------------------------------ */
/* 
 * reads : p_739->g_9 p_739->g_83 p_739->l_comm_values p_739->g_90 p_739->g_126 p_739->g_3 p_739->g_32 p_739->g_131 p_739->g_137
 * writes: p_739->g_9 p_739->g_63 p_739->g_131 p_739->g_137
 */
int32_t  func_72(int8_t * p_73, int32_t  p_74, int8_t * p_75, struct S3 * p_739)
{ /* block id: 21 */
    VECTOR(uint64_t, 2) l_102 = (VECTOR(uint64_t, 2))(7UL, 0x04B11C87380C2164L);
    int32_t *l_104[4];
    int32_t **l_103 = &l_104[1];
    VECTOR(uint16_t, 16) l_111 = (VECTOR(uint16_t, 16))(0xC827L, (VECTOR(uint16_t, 4))(0xC827L, (VECTOR(uint16_t, 2))(0xC827L, 0x85FCL), 0x85FCL), 0x85FCL, 0xC827L, 0x85FCL, (VECTOR(uint16_t, 2))(0xC827L, 0x85FCL), (VECTOR(uint16_t, 2))(0xC827L, 0x85FCL), 0xC827L, 0x85FCL, 0xC827L, 0x85FCL);
    VECTOR(int32_t, 4) l_134 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x225F1995L), 0x225F1995L);
    VECTOR(int32_t, 8) l_135 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x01B1F863L), 0x01B1F863L), 0x01B1F863L, 0L, 0x01B1F863L);
    VECTOR(int32_t, 4) l_136 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x055EAA69L), 0x055EAA69L);
    VECTOR(int16_t, 16) l_138 = (VECTOR(int16_t, 16))(0x635FL, (VECTOR(int16_t, 4))(0x635FL, (VECTOR(int16_t, 2))(0x635FL, 0x3429L), 0x3429L), 0x3429L, 0x635FL, 0x3429L, (VECTOR(int16_t, 2))(0x635FL, 0x3429L), (VECTOR(int16_t, 2))(0x635FL, 0x3429L), 0x635FL, 0x3429L, 0x635FL, 0x3429L);
    VECTOR(uint16_t, 16) l_139 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint16_t, 2))(0UL, 0UL), (VECTOR(uint16_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
    VECTOR(uint16_t, 2) l_140 = (VECTOR(uint16_t, 2))(0xF3F7L, 65528UL);
    VECTOR(uint16_t, 16) l_141 = (VECTOR(uint16_t, 16))(0xE4FBL, (VECTOR(uint16_t, 4))(0xE4FBL, (VECTOR(uint16_t, 2))(0xE4FBL, 1UL), 1UL), 1UL, 0xE4FBL, 1UL, (VECTOR(uint16_t, 2))(0xE4FBL, 1UL), (VECTOR(uint16_t, 2))(0xE4FBL, 1UL), 0xE4FBL, 1UL, 0xE4FBL, 1UL);
    int16_t l_142 = 0x0D77L;
    int i;
    for (i = 0; i < 4; i++)
        l_104[i] = &p_739->g_3;
    (*l_103) = (((VECTOR(uint64_t, 8))(l_102.xxyxxxxy)).s5 , &p_739->g_3);
    for (p_739->g_9 = 0; (p_739->g_9 == 57); p_739->g_9 = safe_add_func_uint64_t_u_u(p_739->g_9, 2))
    { /* block id: 25 */
        int64_t l_129 = (-7L);
        VECTOR(int32_t, 16) l_130 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x77154ECDL), 0x77154ECDL), 0x77154ECDL, (-8L), 0x77154ECDL, (VECTOR(int32_t, 2))((-8L), 0x77154ECDL), (VECTOR(int32_t, 2))((-8L), 0x77154ECDL), (-8L), 0x77154ECDL, (-8L), 0x77154ECDL);
        int i;
        l_130.s3 = ((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(l_111.sf4)).even, (p_739->g_63.y = (safe_add_func_uint32_t_u_u(1UL, (safe_add_func_uint16_t_u_u(p_74, (safe_mul_func_uint16_t_u_u(p_739->g_83, ((safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((p_739->l_comm_values[(safe_mod_func_uint32_t_u_u(p_739->tid, 164))] & (safe_add_func_uint64_t_u_u((safe_add_func_int8_t_s_s((-1L), p_739->g_90.s5)), ((void*)0 == p_739->g_126)))) <= (((**l_103) > p_74) <= p_74)), 0xECA6L)), 249UL)) , 5L)))))))))), p_739->g_32)) , l_129);
        --p_739->g_131;
    }
    p_739->g_137.w = (l_142 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(l_134.xyyywxzz)).even, ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(l_135.s41)).yyxxxyxxxxyxyyyx))).s1fd7))).wzyzwzyw)).s03, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_136.wyyxyxww)))).s53, ((VECTOR(int32_t, 2))(p_739->g_137.yy))))))).xxxxxxxxyyyxxyyy, ((VECTOR(int32_t, 8))(0x2229A36EL, 0x3239F508L, 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(0x22250544L, 0x11EF485BL)).xxyxxyxyyxxxyyyx, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(l_138.s47)).yxyx, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 2))(l_139.se2)), ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_140.yxyy)).hi)).yxyx, ((VECTOR(uint16_t, 4))(l_141.sc827))))).even, ((VECTOR(uint16_t, 2))(1UL, 0x3B74L))))), 65527UL, 65531UL))))).ywzwzxxxwxywwyyx))).sb4)), 0x0213BFE5L, 8L, 6L)).s3277570067342033))).sed)))).lo);
    return p_74;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_79(uint8_t  p_80, int32_t  p_81, struct S3 * p_739)
{ /* block id: 18 */
    int64_t *l_100[5][10][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    int64_t **l_99 = &l_100[3][9][0];
    int64_t ***l_101 = (void*)0;
    int i, j, k;
    l_99 = l_99;
    return &p_739->g_32;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[13];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 13; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[13];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 13; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[164];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 164; i++)
            l_comm_values[i] = 1;
    struct S3 c_740;
    struct S3* p_739 = &c_740;
    struct S3 c_741 = {
        0x622A149CL, // p_739->g_3
        0x591509CF13E13A6CL, // p_739->g_8
        0x41B8L, // p_739->g_9
        0L, // p_739->g_14
        0x6CL, // p_739->g_32
        {0x3D2CF3E4C996E158L}, // p_739->g_33
        (void*)0, // p_739->g_47
        (void*)0, // p_739->g_58
        (VECTOR(int16_t, 2))(0x5AD7L, (-5L)), // p_739->g_63
        1UL, // p_739->g_83
        (VECTOR(uint16_t, 8))(0xFBB1L, (VECTOR(uint16_t, 4))(0xFBB1L, (VECTOR(uint16_t, 2))(0xFBB1L, 0xCA2EL), 0xCA2EL), 0xCA2EL, 0xFBB1L, 0xCA2EL), // p_739->g_90
        (void*)0, // p_739->g_128
        &p_739->g_128, // p_739->g_127
        &p_739->g_127, // p_739->g_126
        0xEEL, // p_739->g_131
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4DC6EB25L), 0x4DC6EB25L), // p_739->g_137
        0x3BBF8E7FL, // p_739->g_144
        (VECTOR(int32_t, 2))((-1L), (-9L)), // p_739->g_191
        0x07364766L, // p_739->g_207
        0x3C2A6CF9L, // p_739->g_209
        (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x433D4B22L), 0x433D4B22L), 0x433D4B22L, (-10L), 0x433D4B22L), // p_739->g_229
        7UL, // p_739->g_238
        0UL, // p_739->g_247
        (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0L), 0L), 0L, 9L, 0L, (VECTOR(int32_t, 2))(9L, 0L), (VECTOR(int32_t, 2))(9L, 0L), 9L, 0L, 9L, 0L), // p_739->g_273
        (VECTOR(uint64_t, 8))(0x60B7A04B4920C364L, (VECTOR(uint64_t, 4))(0x60B7A04B4920C364L, (VECTOR(uint64_t, 2))(0x60B7A04B4920C364L, 0x26658D1AE91BE41BL), 0x26658D1AE91BE41BL), 0x26658D1AE91BE41BL, 0x60B7A04B4920C364L, 0x26658D1AE91BE41BL), // p_739->g_283
        (void*)0, // p_739->g_320
        (void*)0, // p_739->g_322
        (VECTOR(int8_t, 2))((-1L), 0x04L), // p_739->g_327
        (void*)0, // p_739->g_328
        {0x36D0642832692EE7L}, // p_739->g_337
        &p_739->g_337, // p_739->g_336
        {0x99DFDD9C073F5E95L}, // p_739->g_340
        &p_739->g_340, // p_739->g_339
        (void*)0, // p_739->g_419
        &p_739->g_419, // p_739->g_418
        (VECTOR(int64_t, 8))(0x4BAF9A9E991210A7L, (VECTOR(int64_t, 4))(0x4BAF9A9E991210A7L, (VECTOR(int64_t, 2))(0x4BAF9A9E991210A7L, 0L), 0L), 0L, 0x4BAF9A9E991210A7L, 0L), // p_739->g_446
        0UL, // p_739->g_453
        (VECTOR(int8_t, 16))(0x07L, (VECTOR(int8_t, 4))(0x07L, (VECTOR(int8_t, 2))(0x07L, 0x3AL), 0x3AL), 0x3AL, 0x07L, 0x3AL, (VECTOR(int8_t, 2))(0x07L, 0x3AL), (VECTOR(int8_t, 2))(0x07L, 0x3AL), 0x07L, 0x3AL, 0x07L, 0x3AL), // p_739->g_460
        0L, // p_739->g_469
        &p_739->g_469, // p_739->g_468
        &p_739->g_468, // p_739->g_467
        {0xEFL}, // p_739->g_499
        &p_739->g_499, // p_739->g_498
        (VECTOR(int8_t, 8))(0x79L, (VECTOR(int8_t, 4))(0x79L, (VECTOR(int8_t, 2))(0x79L, 0x1BL), 0x1BL), 0x1BL, 0x79L, 0x1BL), // p_739->g_500
        {18446744073709551615UL}, // p_739->g_503
        {{{255UL},{0x8EL},{1UL},{250UL},{1UL},{0x8EL},{255UL},{0x9AL}},{{255UL},{0x8EL},{1UL},{250UL},{1UL},{0x8EL},{255UL},{0x9AL}},{{255UL},{0x8EL},{1UL},{250UL},{1UL},{0x8EL},{255UL},{0x9AL}},{{255UL},{0x8EL},{1UL},{250UL},{1UL},{0x8EL},{255UL},{0x9AL}},{{255UL},{0x8EL},{1UL},{250UL},{1UL},{0x8EL},{255UL},{0x9AL}}}, // p_739->g_505
        (void*)0, // p_739->g_506
        0x8E20999AL, // p_739->g_508
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 4UL), 4UL), // p_739->g_545
        &p_739->g_498, // p_739->g_547
        &p_739->g_547, // p_739->g_546
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 5L), 5L), // p_739->g_571
        &p_739->g_32, // p_739->g_576
        &p_739->g_576, // p_739->g_575
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7E1BF108L), 0x7E1BF108L), 0x7E1BF108L, (-1L), 0x7E1BF108L), // p_739->g_617
        (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0L), 0L), // p_739->g_618
        (VECTOR(int32_t, 16))(0x09585137L, (VECTOR(int32_t, 4))(0x09585137L, (VECTOR(int32_t, 2))(0x09585137L, 1L), 1L), 1L, 0x09585137L, 1L, (VECTOR(int32_t, 2))(0x09585137L, 1L), (VECTOR(int32_t, 2))(0x09585137L, 1L), 0x09585137L, 1L, 0x09585137L, 1L), // p_739->g_619
        (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x111ACF14L), 0x111ACF14L), 0x111ACF14L, (-4L), 0x111ACF14L), // p_739->g_625
        {6UL}, // p_739->g_630
        {0x814E8C02E4728DF7L}, // p_739->g_632
        0x46L, // p_739->g_641
        (VECTOR(uint8_t, 2))(0x47L, 0UL), // p_739->g_662
        {0x49B214D1D7000320L}, // p_739->g_685
        {{{18446744073709551615UL}}}, // p_739->g_686
        {&p_739->g_685,&p_739->g_685,&p_739->g_685,&p_739->g_685,&p_739->g_685,&p_739->g_685}, // p_739->g_684
        &p_739->g_684[3], // p_739->g_683
        (void*)0, // p_739->g_690
        (VECTOR(int32_t, 4))(0x4259CBECL, (VECTOR(int32_t, 2))(0x4259CBECL, 0L), 0L), // p_739->g_695
        (VECTOR(uint64_t, 8))(0x0247FEEE5D01B00AL, (VECTOR(uint64_t, 4))(0x0247FEEE5D01B00AL, (VECTOR(uint64_t, 2))(0x0247FEEE5D01B00AL, 0x148FAAAD5E856614L), 0x148FAAAD5E856614L), 0x148FAAAD5E856614L, 0x0247FEEE5D01B00AL, 0x148FAAAD5E856614L), // p_739->g_699
        (VECTOR(uint8_t, 8))(0xD2L, (VECTOR(uint8_t, 4))(0xD2L, (VECTOR(uint8_t, 2))(0xD2L, 0x3EL), 0x3EL), 0x3EL, 0xD2L, 0x3EL), // p_739->g_711
        0, // p_739->v_collective
        sequence_input[get_global_id(0)], // p_739->global_0_offset
        sequence_input[get_global_id(1)], // p_739->global_1_offset
        sequence_input[get_global_id(2)], // p_739->global_2_offset
        sequence_input[get_local_id(0)], // p_739->local_0_offset
        sequence_input[get_local_id(1)], // p_739->local_1_offset
        sequence_input[get_local_id(2)], // p_739->local_2_offset
        sequence_input[get_group_id(0)], // p_739->group_0_offset
        sequence_input[get_group_id(1)], // p_739->group_1_offset
        sequence_input[get_group_id(2)], // p_739->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 164)), permutations[0][get_linear_local_id()])), // p_739->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_740 = c_741;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_739);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_739->g_3, "p_739->g_3", print_hash_value);
    transparent_crc(p_739->g_8, "p_739->g_8", print_hash_value);
    transparent_crc(p_739->g_9, "p_739->g_9", print_hash_value);
    transparent_crc(p_739->g_14, "p_739->g_14", print_hash_value);
    transparent_crc(p_739->g_32, "p_739->g_32", print_hash_value);
    transparent_crc(p_739->g_33.f0, "p_739->g_33.f0", print_hash_value);
    transparent_crc(p_739->g_63.x, "p_739->g_63.x", print_hash_value);
    transparent_crc(p_739->g_63.y, "p_739->g_63.y", print_hash_value);
    transparent_crc(p_739->g_83, "p_739->g_83", print_hash_value);
    transparent_crc(p_739->g_90.s0, "p_739->g_90.s0", print_hash_value);
    transparent_crc(p_739->g_90.s1, "p_739->g_90.s1", print_hash_value);
    transparent_crc(p_739->g_90.s2, "p_739->g_90.s2", print_hash_value);
    transparent_crc(p_739->g_90.s3, "p_739->g_90.s3", print_hash_value);
    transparent_crc(p_739->g_90.s4, "p_739->g_90.s4", print_hash_value);
    transparent_crc(p_739->g_90.s5, "p_739->g_90.s5", print_hash_value);
    transparent_crc(p_739->g_90.s6, "p_739->g_90.s6", print_hash_value);
    transparent_crc(p_739->g_90.s7, "p_739->g_90.s7", print_hash_value);
    transparent_crc(p_739->g_131, "p_739->g_131", print_hash_value);
    transparent_crc(p_739->g_137.x, "p_739->g_137.x", print_hash_value);
    transparent_crc(p_739->g_137.y, "p_739->g_137.y", print_hash_value);
    transparent_crc(p_739->g_137.z, "p_739->g_137.z", print_hash_value);
    transparent_crc(p_739->g_137.w, "p_739->g_137.w", print_hash_value);
    transparent_crc(p_739->g_144, "p_739->g_144", print_hash_value);
    transparent_crc(p_739->g_191.x, "p_739->g_191.x", print_hash_value);
    transparent_crc(p_739->g_191.y, "p_739->g_191.y", print_hash_value);
    transparent_crc(p_739->g_207, "p_739->g_207", print_hash_value);
    transparent_crc(p_739->g_209, "p_739->g_209", print_hash_value);
    transparent_crc(p_739->g_229.s0, "p_739->g_229.s0", print_hash_value);
    transparent_crc(p_739->g_229.s1, "p_739->g_229.s1", print_hash_value);
    transparent_crc(p_739->g_229.s2, "p_739->g_229.s2", print_hash_value);
    transparent_crc(p_739->g_229.s3, "p_739->g_229.s3", print_hash_value);
    transparent_crc(p_739->g_229.s4, "p_739->g_229.s4", print_hash_value);
    transparent_crc(p_739->g_229.s5, "p_739->g_229.s5", print_hash_value);
    transparent_crc(p_739->g_229.s6, "p_739->g_229.s6", print_hash_value);
    transparent_crc(p_739->g_229.s7, "p_739->g_229.s7", print_hash_value);
    transparent_crc(p_739->g_238, "p_739->g_238", print_hash_value);
    transparent_crc(p_739->g_247, "p_739->g_247", print_hash_value);
    transparent_crc(p_739->g_273.s0, "p_739->g_273.s0", print_hash_value);
    transparent_crc(p_739->g_273.s1, "p_739->g_273.s1", print_hash_value);
    transparent_crc(p_739->g_273.s2, "p_739->g_273.s2", print_hash_value);
    transparent_crc(p_739->g_273.s3, "p_739->g_273.s3", print_hash_value);
    transparent_crc(p_739->g_273.s4, "p_739->g_273.s4", print_hash_value);
    transparent_crc(p_739->g_273.s5, "p_739->g_273.s5", print_hash_value);
    transparent_crc(p_739->g_273.s6, "p_739->g_273.s6", print_hash_value);
    transparent_crc(p_739->g_273.s7, "p_739->g_273.s7", print_hash_value);
    transparent_crc(p_739->g_273.s8, "p_739->g_273.s8", print_hash_value);
    transparent_crc(p_739->g_273.s9, "p_739->g_273.s9", print_hash_value);
    transparent_crc(p_739->g_273.sa, "p_739->g_273.sa", print_hash_value);
    transparent_crc(p_739->g_273.sb, "p_739->g_273.sb", print_hash_value);
    transparent_crc(p_739->g_273.sc, "p_739->g_273.sc", print_hash_value);
    transparent_crc(p_739->g_273.sd, "p_739->g_273.sd", print_hash_value);
    transparent_crc(p_739->g_273.se, "p_739->g_273.se", print_hash_value);
    transparent_crc(p_739->g_273.sf, "p_739->g_273.sf", print_hash_value);
    transparent_crc(p_739->g_283.s0, "p_739->g_283.s0", print_hash_value);
    transparent_crc(p_739->g_283.s1, "p_739->g_283.s1", print_hash_value);
    transparent_crc(p_739->g_283.s2, "p_739->g_283.s2", print_hash_value);
    transparent_crc(p_739->g_283.s3, "p_739->g_283.s3", print_hash_value);
    transparent_crc(p_739->g_283.s4, "p_739->g_283.s4", print_hash_value);
    transparent_crc(p_739->g_283.s5, "p_739->g_283.s5", print_hash_value);
    transparent_crc(p_739->g_283.s6, "p_739->g_283.s6", print_hash_value);
    transparent_crc(p_739->g_283.s7, "p_739->g_283.s7", print_hash_value);
    transparent_crc(p_739->g_327.x, "p_739->g_327.x", print_hash_value);
    transparent_crc(p_739->g_327.y, "p_739->g_327.y", print_hash_value);
    transparent_crc(p_739->g_337.f0, "p_739->g_337.f0", print_hash_value);
    transparent_crc(p_739->g_340.f0, "p_739->g_340.f0", print_hash_value);
    transparent_crc(p_739->g_446.s0, "p_739->g_446.s0", print_hash_value);
    transparent_crc(p_739->g_446.s1, "p_739->g_446.s1", print_hash_value);
    transparent_crc(p_739->g_446.s2, "p_739->g_446.s2", print_hash_value);
    transparent_crc(p_739->g_446.s3, "p_739->g_446.s3", print_hash_value);
    transparent_crc(p_739->g_446.s4, "p_739->g_446.s4", print_hash_value);
    transparent_crc(p_739->g_446.s5, "p_739->g_446.s5", print_hash_value);
    transparent_crc(p_739->g_446.s6, "p_739->g_446.s6", print_hash_value);
    transparent_crc(p_739->g_446.s7, "p_739->g_446.s7", print_hash_value);
    transparent_crc(p_739->g_453, "p_739->g_453", print_hash_value);
    transparent_crc(p_739->g_460.s0, "p_739->g_460.s0", print_hash_value);
    transparent_crc(p_739->g_460.s1, "p_739->g_460.s1", print_hash_value);
    transparent_crc(p_739->g_460.s2, "p_739->g_460.s2", print_hash_value);
    transparent_crc(p_739->g_460.s3, "p_739->g_460.s3", print_hash_value);
    transparent_crc(p_739->g_460.s4, "p_739->g_460.s4", print_hash_value);
    transparent_crc(p_739->g_460.s5, "p_739->g_460.s5", print_hash_value);
    transparent_crc(p_739->g_460.s6, "p_739->g_460.s6", print_hash_value);
    transparent_crc(p_739->g_460.s7, "p_739->g_460.s7", print_hash_value);
    transparent_crc(p_739->g_460.s8, "p_739->g_460.s8", print_hash_value);
    transparent_crc(p_739->g_460.s9, "p_739->g_460.s9", print_hash_value);
    transparent_crc(p_739->g_460.sa, "p_739->g_460.sa", print_hash_value);
    transparent_crc(p_739->g_460.sb, "p_739->g_460.sb", print_hash_value);
    transparent_crc(p_739->g_460.sc, "p_739->g_460.sc", print_hash_value);
    transparent_crc(p_739->g_460.sd, "p_739->g_460.sd", print_hash_value);
    transparent_crc(p_739->g_460.se, "p_739->g_460.se", print_hash_value);
    transparent_crc(p_739->g_460.sf, "p_739->g_460.sf", print_hash_value);
    transparent_crc(p_739->g_469, "p_739->g_469", print_hash_value);
    transparent_crc(p_739->g_499.f0, "p_739->g_499.f0", print_hash_value);
    transparent_crc(p_739->g_500.s0, "p_739->g_500.s0", print_hash_value);
    transparent_crc(p_739->g_500.s1, "p_739->g_500.s1", print_hash_value);
    transparent_crc(p_739->g_500.s2, "p_739->g_500.s2", print_hash_value);
    transparent_crc(p_739->g_500.s3, "p_739->g_500.s3", print_hash_value);
    transparent_crc(p_739->g_500.s4, "p_739->g_500.s4", print_hash_value);
    transparent_crc(p_739->g_500.s5, "p_739->g_500.s5", print_hash_value);
    transparent_crc(p_739->g_500.s6, "p_739->g_500.s6", print_hash_value);
    transparent_crc(p_739->g_500.s7, "p_739->g_500.s7", print_hash_value);
    transparent_crc(p_739->g_503.f0, "p_739->g_503.f0", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(p_739->g_505[i][j].f0, "p_739->g_505[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_739->g_508, "p_739->g_508", print_hash_value);
    transparent_crc(p_739->g_545.x, "p_739->g_545.x", print_hash_value);
    transparent_crc(p_739->g_545.y, "p_739->g_545.y", print_hash_value);
    transparent_crc(p_739->g_545.z, "p_739->g_545.z", print_hash_value);
    transparent_crc(p_739->g_545.w, "p_739->g_545.w", print_hash_value);
    transparent_crc(p_739->g_571.x, "p_739->g_571.x", print_hash_value);
    transparent_crc(p_739->g_571.y, "p_739->g_571.y", print_hash_value);
    transparent_crc(p_739->g_571.z, "p_739->g_571.z", print_hash_value);
    transparent_crc(p_739->g_571.w, "p_739->g_571.w", print_hash_value);
    transparent_crc(p_739->g_617.s0, "p_739->g_617.s0", print_hash_value);
    transparent_crc(p_739->g_617.s1, "p_739->g_617.s1", print_hash_value);
    transparent_crc(p_739->g_617.s2, "p_739->g_617.s2", print_hash_value);
    transparent_crc(p_739->g_617.s3, "p_739->g_617.s3", print_hash_value);
    transparent_crc(p_739->g_617.s4, "p_739->g_617.s4", print_hash_value);
    transparent_crc(p_739->g_617.s5, "p_739->g_617.s5", print_hash_value);
    transparent_crc(p_739->g_617.s6, "p_739->g_617.s6", print_hash_value);
    transparent_crc(p_739->g_617.s7, "p_739->g_617.s7", print_hash_value);
    transparent_crc(p_739->g_618.x, "p_739->g_618.x", print_hash_value);
    transparent_crc(p_739->g_618.y, "p_739->g_618.y", print_hash_value);
    transparent_crc(p_739->g_618.z, "p_739->g_618.z", print_hash_value);
    transparent_crc(p_739->g_618.w, "p_739->g_618.w", print_hash_value);
    transparent_crc(p_739->g_619.s0, "p_739->g_619.s0", print_hash_value);
    transparent_crc(p_739->g_619.s1, "p_739->g_619.s1", print_hash_value);
    transparent_crc(p_739->g_619.s2, "p_739->g_619.s2", print_hash_value);
    transparent_crc(p_739->g_619.s3, "p_739->g_619.s3", print_hash_value);
    transparent_crc(p_739->g_619.s4, "p_739->g_619.s4", print_hash_value);
    transparent_crc(p_739->g_619.s5, "p_739->g_619.s5", print_hash_value);
    transparent_crc(p_739->g_619.s6, "p_739->g_619.s6", print_hash_value);
    transparent_crc(p_739->g_619.s7, "p_739->g_619.s7", print_hash_value);
    transparent_crc(p_739->g_619.s8, "p_739->g_619.s8", print_hash_value);
    transparent_crc(p_739->g_619.s9, "p_739->g_619.s9", print_hash_value);
    transparent_crc(p_739->g_619.sa, "p_739->g_619.sa", print_hash_value);
    transparent_crc(p_739->g_619.sb, "p_739->g_619.sb", print_hash_value);
    transparent_crc(p_739->g_619.sc, "p_739->g_619.sc", print_hash_value);
    transparent_crc(p_739->g_619.sd, "p_739->g_619.sd", print_hash_value);
    transparent_crc(p_739->g_619.se, "p_739->g_619.se", print_hash_value);
    transparent_crc(p_739->g_619.sf, "p_739->g_619.sf", print_hash_value);
    transparent_crc(p_739->g_625.s0, "p_739->g_625.s0", print_hash_value);
    transparent_crc(p_739->g_625.s1, "p_739->g_625.s1", print_hash_value);
    transparent_crc(p_739->g_625.s2, "p_739->g_625.s2", print_hash_value);
    transparent_crc(p_739->g_625.s3, "p_739->g_625.s3", print_hash_value);
    transparent_crc(p_739->g_625.s4, "p_739->g_625.s4", print_hash_value);
    transparent_crc(p_739->g_625.s5, "p_739->g_625.s5", print_hash_value);
    transparent_crc(p_739->g_625.s6, "p_739->g_625.s6", print_hash_value);
    transparent_crc(p_739->g_625.s7, "p_739->g_625.s7", print_hash_value);
    transparent_crc(p_739->g_630.f0, "p_739->g_630.f0", print_hash_value);
    transparent_crc(p_739->g_632.f0, "p_739->g_632.f0", print_hash_value);
    transparent_crc(p_739->g_641, "p_739->g_641", print_hash_value);
    transparent_crc(p_739->g_662.x, "p_739->g_662.x", print_hash_value);
    transparent_crc(p_739->g_662.y, "p_739->g_662.y", print_hash_value);
    transparent_crc(p_739->g_685.f0, "p_739->g_685.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_739->g_686[i][j].f0, "p_739->g_686[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_739->g_695.x, "p_739->g_695.x", print_hash_value);
    transparent_crc(p_739->g_695.y, "p_739->g_695.y", print_hash_value);
    transparent_crc(p_739->g_695.z, "p_739->g_695.z", print_hash_value);
    transparent_crc(p_739->g_695.w, "p_739->g_695.w", print_hash_value);
    transparent_crc(p_739->g_699.s0, "p_739->g_699.s0", print_hash_value);
    transparent_crc(p_739->g_699.s1, "p_739->g_699.s1", print_hash_value);
    transparent_crc(p_739->g_699.s2, "p_739->g_699.s2", print_hash_value);
    transparent_crc(p_739->g_699.s3, "p_739->g_699.s3", print_hash_value);
    transparent_crc(p_739->g_699.s4, "p_739->g_699.s4", print_hash_value);
    transparent_crc(p_739->g_699.s5, "p_739->g_699.s5", print_hash_value);
    transparent_crc(p_739->g_699.s6, "p_739->g_699.s6", print_hash_value);
    transparent_crc(p_739->g_699.s7, "p_739->g_699.s7", print_hash_value);
    transparent_crc(p_739->g_711.s0, "p_739->g_711.s0", print_hash_value);
    transparent_crc(p_739->g_711.s1, "p_739->g_711.s1", print_hash_value);
    transparent_crc(p_739->g_711.s2, "p_739->g_711.s2", print_hash_value);
    transparent_crc(p_739->g_711.s3, "p_739->g_711.s3", print_hash_value);
    transparent_crc(p_739->g_711.s4, "p_739->g_711.s4", print_hash_value);
    transparent_crc(p_739->g_711.s5, "p_739->g_711.s5", print_hash_value);
    transparent_crc(p_739->g_711.s6, "p_739->g_711.s6", print_hash_value);
    transparent_crc(p_739->g_711.s7, "p_739->g_711.s7", print_hash_value);
    transparent_crc(p_739->v_collective, "p_739->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 13; i++)
            transparent_crc(p_739->g_special_values[i + 13 * get_linear_group_id()], "p_739->g_special_values[i + 13 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 13; i++)
            transparent_crc(p_739->l_special_values[i], "p_739->l_special_values[i]", print_hash_value);
    transparent_crc(p_739->l_comm_values[get_linear_local_id()], "p_739->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_739->g_comm_values[get_linear_group_id() * 164 + get_linear_local_id()], "p_739->g_comm_values[get_linear_group_id() * 164 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
