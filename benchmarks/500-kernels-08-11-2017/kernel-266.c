// --atomics 47 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 29,91,3 -l 29,7,1
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

__constant uint32_t permutations[10][203] = {
{40,160,195,176,97,67,158,189,61,180,41,144,39,45,161,124,143,54,82,66,120,140,74,105,63,52,84,117,15,20,86,90,89,7,148,4,33,38,190,186,98,179,165,29,110,182,2,71,9,23,122,69,88,101,24,108,153,57,169,191,100,194,164,46,49,121,150,81,112,163,170,146,188,78,119,18,73,118,149,167,87,135,51,178,68,44,181,147,85,159,198,16,53,162,103,21,60,172,126,22,145,59,70,116,199,115,141,133,77,36,32,157,93,166,137,19,28,6,175,62,193,109,202,37,83,106,127,56,75,200,131,35,91,99,152,30,94,125,139,55,64,95,25,31,96,1,92,123,65,111,42,201,155,184,114,136,156,185,183,79,187,26,76,177,12,197,113,8,72,34,138,192,174,128,154,132,173,11,171,142,168,58,47,130,50,0,104,196,17,3,102,27,13,5,80,48,14,134,107,129,10,43,151}, // permutation 0
{199,5,55,71,167,38,23,26,28,116,114,193,155,12,164,194,123,84,1,70,121,11,86,20,36,24,103,107,125,104,31,136,64,133,79,90,81,150,128,165,99,132,135,58,195,9,40,154,196,100,140,50,156,94,88,189,143,61,101,77,52,49,37,54,0,44,200,175,134,124,21,144,30,7,148,152,163,118,19,113,35,138,45,22,170,169,177,115,29,96,180,108,158,83,60,47,33,117,78,6,112,202,168,87,184,130,146,2,15,179,8,53,186,105,172,46,3,176,27,85,145,190,42,72,74,51,41,25,43,122,187,48,119,162,120,69,151,13,191,141,139,157,126,142,192,201,67,95,198,4,173,147,106,10,89,197,183,39,166,160,68,17,137,131,34,91,174,56,92,110,182,14,161,98,16,111,109,66,149,73,62,127,57,153,181,178,63,171,65,102,59,188,32,97,159,18,129,93,80,76,185,75,82}, // permutation 1
{40,135,195,139,184,176,105,11,153,60,72,115,173,148,32,77,162,170,122,50,93,7,19,108,186,123,18,95,140,4,150,69,147,75,193,92,180,33,24,48,133,192,49,63,89,1,196,67,174,22,142,85,118,39,201,167,197,155,156,149,79,42,10,169,51,15,68,29,64,99,76,128,168,144,62,202,88,130,97,113,56,53,66,37,198,183,30,8,65,131,116,41,114,23,146,163,100,188,172,199,181,132,111,27,57,102,5,46,117,25,106,0,182,177,98,26,73,134,137,166,45,52,13,86,81,2,145,151,178,59,96,136,171,16,3,165,179,194,120,143,78,6,94,190,104,158,84,20,83,12,38,34,191,185,70,47,80,74,90,200,58,101,138,125,187,189,112,43,107,71,54,87,44,154,17,161,109,36,91,152,35,127,110,160,28,124,82,9,119,21,121,159,141,31,14,129,55,61,126,157,175,164,103}, // permutation 2
{92,11,40,67,188,196,146,186,129,74,150,124,176,0,104,58,128,43,158,138,75,79,168,105,14,7,97,8,62,89,12,123,135,51,194,1,70,91,200,184,175,193,94,45,120,107,156,24,131,100,19,181,127,47,112,15,95,13,49,106,5,185,202,182,39,139,199,6,141,44,33,48,145,69,28,84,147,160,16,132,116,151,96,4,140,109,121,36,83,165,110,22,3,76,52,161,137,37,72,38,126,187,201,98,117,133,148,2,23,183,166,10,180,73,101,125,9,64,159,108,41,189,86,171,46,167,71,65,134,162,88,63,130,119,50,111,55,93,155,170,99,53,82,190,80,178,144,115,114,152,31,57,195,29,56,27,85,59,136,78,30,21,191,103,54,35,87,68,192,169,61,153,154,66,81,118,122,149,77,164,102,60,26,25,34,173,42,113,179,177,157,197,90,20,18,32,163,17,198,174,172,143,142}, // permutation 3
{72,54,43,96,161,116,28,57,158,155,98,106,48,121,94,198,178,83,63,6,110,168,153,197,105,2,39,23,14,132,167,24,195,107,91,196,22,95,62,4,53,46,52,186,13,175,166,120,77,40,142,78,134,100,69,20,36,47,85,130,160,25,164,202,101,33,76,60,89,119,97,61,44,162,151,144,9,138,104,112,154,67,86,157,51,103,147,194,172,32,137,58,181,176,165,41,75,26,82,171,16,184,118,139,135,102,30,131,92,200,174,189,115,149,35,81,29,156,11,45,90,7,179,182,113,163,109,128,1,79,55,71,80,146,27,56,117,177,19,170,12,34,173,191,42,21,59,64,17,187,201,84,108,126,65,73,31,124,3,70,18,127,5,68,159,129,38,111,49,185,183,141,193,190,152,114,199,10,145,140,122,125,136,8,192,148,0,99,123,37,50,143,180,188,169,150,66,87,93,88,133,74,15}, // permutation 4
{36,78,40,191,114,123,135,89,131,94,104,176,19,130,5,152,170,136,190,30,157,167,80,26,149,1,134,4,127,142,193,10,13,138,74,43,9,39,60,141,15,101,41,90,107,44,155,66,194,82,148,18,28,122,119,118,201,144,150,179,192,183,49,86,143,161,52,173,106,196,109,46,139,99,95,73,132,168,48,92,128,147,189,65,182,17,185,37,171,27,70,75,159,64,202,6,97,25,110,164,103,67,198,7,146,47,184,57,98,63,115,105,62,31,34,172,197,96,3,77,174,14,162,50,163,58,53,12,121,83,21,180,20,11,187,68,108,8,175,200,72,186,61,133,188,69,59,87,88,195,158,124,112,120,2,91,199,153,24,85,181,29,38,137,76,84,16,81,42,126,79,111,151,113,51,45,154,102,156,22,56,160,55,129,178,177,117,35,145,116,71,166,93,0,23,100,140,169,54,125,165,33,32}, // permutation 5
{119,167,123,86,192,70,188,183,189,148,97,187,157,92,150,133,69,164,25,50,172,2,138,100,169,193,198,87,175,12,65,51,196,83,186,28,61,117,176,118,24,120,15,161,191,53,27,145,179,47,13,201,115,144,14,40,159,10,173,38,163,96,46,113,43,129,104,158,22,140,80,6,77,128,199,55,131,23,109,200,76,17,0,67,44,155,170,19,134,79,141,11,197,132,33,166,60,114,58,88,45,31,35,171,185,9,39,165,149,42,3,29,18,136,121,74,63,151,152,142,41,90,72,78,32,137,130,66,89,64,153,1,190,73,107,57,127,85,52,7,101,139,184,182,146,180,110,93,102,156,4,81,202,8,5,71,54,143,103,99,162,126,59,49,125,124,26,178,94,135,37,62,21,68,108,105,106,160,16,168,112,48,30,177,154,56,116,98,84,194,95,122,34,195,75,174,147,111,91,36,20,82,181}, // permutation 6
{200,113,130,34,66,41,181,94,177,35,184,194,122,10,42,185,3,69,155,195,71,139,193,37,150,128,110,7,2,40,79,57,52,50,82,173,15,54,147,174,162,38,48,30,127,136,73,64,16,98,97,104,170,149,123,154,12,19,119,158,107,56,92,23,141,152,8,78,101,93,45,58,120,146,33,39,20,156,183,90,62,47,102,0,24,1,186,18,22,105,88,114,9,53,161,153,117,172,74,81,196,46,49,159,145,168,166,72,148,99,132,167,43,91,190,179,100,29,135,32,84,28,143,140,160,169,75,87,176,134,111,103,118,125,59,157,112,77,189,51,109,27,36,80,5,108,187,76,188,116,25,89,124,44,197,192,198,95,96,85,175,133,202,201,151,11,6,191,106,21,60,61,65,163,55,83,13,17,142,70,171,121,138,165,31,178,182,137,144,199,164,180,129,26,4,14,67,115,126,86,131,63,68}, // permutation 7
{157,105,87,199,176,177,89,116,54,131,120,18,50,49,81,26,118,195,197,169,98,39,53,24,182,140,202,86,183,175,112,1,52,17,189,171,126,114,192,106,23,34,69,58,64,2,139,22,134,153,173,88,122,95,8,93,90,102,80,91,82,76,100,200,46,165,160,101,61,103,180,178,14,77,166,143,111,47,138,78,11,130,137,151,19,27,119,28,159,57,92,79,99,10,55,133,181,135,41,20,147,84,38,163,152,37,4,158,167,145,107,75,43,35,0,51,198,16,186,188,129,60,67,191,21,148,125,201,29,168,179,144,3,5,161,13,45,154,71,42,109,193,70,194,113,121,74,174,185,149,117,124,63,72,190,142,32,40,33,65,73,155,7,97,187,83,56,115,59,30,123,48,9,12,44,66,196,136,94,156,25,162,15,62,146,96,36,68,110,127,150,128,31,172,108,6,104,141,184,132,85,164,170}, // permutation 8
{78,60,199,31,121,79,154,129,75,18,66,65,87,84,197,180,196,38,20,160,109,7,95,42,168,80,77,72,36,64,156,50,140,70,176,116,111,26,131,108,198,81,61,171,89,12,88,141,54,157,37,58,110,175,104,44,143,138,122,174,4,164,161,169,14,41,181,200,101,27,173,155,73,186,167,55,166,34,13,62,85,76,117,128,2,170,201,202,179,47,178,25,9,93,97,107,11,187,177,57,149,1,51,152,165,106,134,184,39,71,43,125,69,29,94,53,194,100,195,92,151,115,102,172,22,193,139,120,28,40,136,32,124,49,45,48,153,190,56,137,68,144,188,82,145,142,114,119,3,118,86,17,23,185,163,132,24,15,21,113,52,123,158,19,191,130,30,148,133,162,0,67,35,135,63,192,10,126,5,159,146,91,127,33,8,99,6,189,83,98,90,59,147,74,46,96,103,112,16,105,183,150,182} // permutation 9
};

// Seed: 3942864732

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    VECTOR(int16_t, 16) g_328;
    int32_t g_338[7];
    int32_t *g_345;
    int32_t ** volatile g_344;
    volatile VECTOR(int8_t, 2) g_384;
    VECTOR(uint32_t, 16) g_393;
    int32_t g_402;
    VECTOR(uint64_t, 2) g_403;
    int32_t g_412;
    int32_t g_414;
    uint64_t *g_421[8][9][3];
    int32_t g_443;
    int32_t **g_450;
    int32_t ***g_449;
    uint16_t g_453;
    VECTOR(int16_t, 16) g_462;
    int16_t g_465;
    uint64_t g_476;
    volatile VECTOR(int32_t, 16) g_478;
    uint32_t *g_496[2];
    int8_t g_502;
    int32_t * volatile g_517;
    int32_t * volatile g_519;
    VECTOR(int8_t, 16) g_541;
    volatile VECTOR(int8_t, 16) g_542;
    VECTOR(int8_t, 8) g_587;
    uint32_t g_598[3];
    VECTOR(int16_t, 16) g_606;
    volatile int32_t *g_607[9][7];
    volatile int32_t ** volatile g_608;
    volatile VECTOR(uint8_t, 2) g_744;
    VECTOR(int32_t, 4) g_756;
    uint8_t g_760;
    VECTOR(int32_t, 4) g_788;
    volatile int32_t ** volatile g_795;
    VECTOR(int8_t, 8) g_803;
    VECTOR(uint8_t, 4) g_804;
    VECTOR(int16_t, 2) g_826;
    volatile VECTOR(int16_t, 8) g_829;
    volatile VECTOR(int16_t, 8) g_830;
    volatile int32_t ** volatile g_879[9][8][3];
    volatile int32_t ** volatile g_880;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S0 * p_904);
uint64_t  func_305(uint8_t  p_306, int32_t ** p_307, struct S0 * p_904);
int32_t ** func_308(uint8_t  p_309, struct S0 * p_904);
int32_t ** func_312(int32_t ** p_313, int32_t ** p_314, struct S0 * p_904);
int32_t ** func_315(uint64_t  p_316, int32_t  p_317, uint32_t  p_318, uint64_t  p_319, uint16_t  p_320, struct S0 * p_904);
int64_t  func_325(int32_t  p_326, uint64_t  p_327, struct S0 * p_904);
uint8_t  func_329(uint64_t  p_330, int32_t ** p_331, struct S0 * p_904);
int32_t ** func_332(uint32_t  p_333, struct S0 * p_904);
int64_t  func_347(uint32_t  p_348, int32_t  p_349, struct S0 * p_904);
uint32_t  func_350(int32_t * p_351, uint16_t  p_352, int64_t  p_353, int64_t  p_354, struct S0 * p_904);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_904->l_comm_values p_904->g_328 p_904->g_comm_values p_904->g_344 p_904->g_345 p_904->g_338 p_904->g_384 p_904->g_412 p_904->g_414 p_904->g_402 p_904->g_449 p_904->g_453 p_904->g_393 p_904->g_462 p_904->g_465 p_904->g_476 p_904->g_478 p_904->g_517 p_904->g_519 p_904->g_541 p_904->g_542 p_904->g_587 p_904->g_606 p_904->g_607 p_904->g_608 p_904->g_450 p_904->g_744 p_904->g_756 p_904->g_502 p_904->g_598 p_904->g_788 p_904->g_403 p_904->g_795 p_904->g_803 p_904->g_804 p_904->g_826 p_904->g_829 p_904->g_830 p_904->g_880
 * writes: p_904->g_328 p_904->g_345 p_904->g_338 p_904->g_403 p_904->g_412 p_904->g_414 p_904->g_443 p_904->g_453 p_904->g_465 p_904->g_476 p_904->g_496 p_904->g_502 p_904->g_450 p_904->g_comm_values p_904->g_598 p_904->g_607 p_904->g_760 p_904->g_402 p_904->g_421 p_904->g_606
 */
uint32_t  func_1(struct S0 * p_904)
{ /* block id: 4 */
    uint32_t l_310 = 0UL;
    int32_t l_334[4] = {0x32ECCCCCL,0x32ECCCCCL,0x32ECCCCCL,0x32ECCCCCL};
    int32_t ***l_513 = &p_904->g_450;
    int64_t l_514[1][10];
    uint8_t l_534 = 246UL;
    int32_t *l_560[3][9][8] = {{{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0}},{{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0}},{{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0},{&p_904->g_402,&p_904->g_402,&p_904->g_402,(void*)0,(void*)0,&p_904->g_402,&p_904->g_402,(void*)0}}};
    int32_t **l_559 = &l_560[0][0][0];
    int32_t **l_605 = &l_560[0][8][6];
    int32_t ***l_611 = &l_605;
    int32_t *l_761 = (void*)0;
    int32_t l_762[1];
    VECTOR(int64_t, 2) l_763 = (VECTOR(int64_t, 2))(0x1DA4BB2C879A299FL, (-3L));
    VECTOR(uint8_t, 4) l_768 = (VECTOR(uint8_t, 4))(0xD1L, (VECTOR(uint8_t, 2))(0xD1L, 0UL), 0UL);
    uint64_t *l_771 = &p_904->g_476;
    uint64_t **l_772 = &p_904->g_421[2][7][1];
    uint64_t *l_773 = (void*)0;
    int32_t l_778 = 0x3420E4D0L;
    uint8_t l_779 = 0x8DL;
    VECTOR(uint8_t, 16) l_787 = (VECTOR(uint8_t, 16))(0x75L, (VECTOR(uint8_t, 4))(0x75L, (VECTOR(uint8_t, 2))(0x75L, 246UL), 246UL), 246UL, 0x75L, 246UL, (VECTOR(uint8_t, 2))(0x75L, 246UL), (VECTOR(uint8_t, 2))(0x75L, 246UL), 0x75L, 246UL, 0x75L, 246UL);
    uint32_t l_805 = 0x82542FF1L;
    VECTOR(int16_t, 4) l_825 = (VECTOR(int16_t, 4))(0x5DFDL, (VECTOR(int16_t, 2))(0x5DFDL, 0x12D4L), 0x12D4L);
    VECTOR(int16_t, 16) l_828 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x7DBDL), 0x7DBDL), 0x7DBDL, 1L, 0x7DBDL, (VECTOR(int16_t, 2))(1L, 0x7DBDL), (VECTOR(int16_t, 2))(1L, 0x7DBDL), 1L, 0x7DBDL, 1L, 0x7DBDL);
    VECTOR(int16_t, 2) l_831 = (VECTOR(int16_t, 2))((-1L), 3L);
    uint16_t *l_846 = &p_904->g_453;
    int32_t l_859 = 3L;
    VECTOR(uint32_t, 4) l_871 = (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0xC90BD031L), 0xC90BD031L);
    uint16_t l_876 = 0x2E2DL;
    uint32_t l_890 = 4294967295UL;
    int16_t l_903[9] = {(-8L),(-1L),(-8L),(-8L),(-1L),(-8L),(-8L),(-1L),(-8L)};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
            l_514[i][j] = (-6L);
    }
    for (i = 0; i < 1; i++)
        l_762[i] = 0x7C5E7009L;
    if ((atomic_inc(&p_904->g_atomic_input[47 * get_linear_group_id() + 18]) == 7))
    { /* block id: 6 */
        uint32_t l_2 = 0xF84B8114L;
        VECTOR(uint64_t, 16) l_76 = (VECTOR(uint64_t, 16))(18446744073709551613UL, (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 4UL), 4UL), 4UL, 18446744073709551613UL, 4UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 4UL), (VECTOR(uint64_t, 2))(18446744073709551613UL, 4UL), 18446744073709551613UL, 4UL, 18446744073709551613UL, 4UL);
        uint8_t l_77[6];
        uint32_t l_271 = 6UL;
        uint32_t l_272 = 6UL;
        uint8_t l_273 = 0x4EL;
        int16_t l_274 = 5L;
        uint32_t l_275 = 0x8F441279L;
        uint16_t l_276 = 4UL;
        int8_t l_277 = 4L;
        VECTOR(int32_t, 2) l_278 = (VECTOR(int32_t, 2))((-10L), 4L);
        VECTOR(int32_t, 4) l_279 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x45F78BC2L), 0x45F78BC2L);
        uint16_t l_280[8][8] = {{0UL,65528UL,65528UL,0UL,0UL,65528UL,65528UL,0UL},{0UL,65528UL,65528UL,0UL,0UL,65528UL,65528UL,0UL},{0UL,65528UL,65528UL,0UL,0UL,65528UL,65528UL,0UL},{0UL,65528UL,65528UL,0UL,0UL,65528UL,65528UL,0UL},{0UL,65528UL,65528UL,0UL,0UL,65528UL,65528UL,0UL},{0UL,65528UL,65528UL,0UL,0UL,65528UL,65528UL,0UL},{0UL,65528UL,65528UL,0UL,0UL,65528UL,65528UL,0UL},{0UL,65528UL,65528UL,0UL,0UL,65528UL,65528UL,0UL}};
        int32_t l_281 = (-1L);
        VECTOR(int32_t, 2) l_282 = (VECTOR(int32_t, 2))(0L, 0L);
        VECTOR(int32_t, 2) l_283 = (VECTOR(int32_t, 2))(0x4E938482L, 0x737B7A5CL);
        VECTOR(int32_t, 16) l_284 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x63F4236DL), 0x63F4236DL), 0x63F4236DL, 1L, 0x63F4236DL, (VECTOR(int32_t, 2))(1L, 0x63F4236DL), (VECTOR(int32_t, 2))(1L, 0x63F4236DL), 1L, 0x63F4236DL, 1L, 0x63F4236DL);
        VECTOR(int32_t, 16) l_285 = (VECTOR(int32_t, 16))(0x6113AD01L, (VECTOR(int32_t, 4))(0x6113AD01L, (VECTOR(int32_t, 2))(0x6113AD01L, 0x25CDBE26L), 0x25CDBE26L), 0x25CDBE26L, 0x6113AD01L, 0x25CDBE26L, (VECTOR(int32_t, 2))(0x6113AD01L, 0x25CDBE26L), (VECTOR(int32_t, 2))(0x6113AD01L, 0x25CDBE26L), 0x6113AD01L, 0x25CDBE26L, 0x6113AD01L, 0x25CDBE26L);
        int64_t l_286[10] = {0x56E44AAF0699D71EL,0x56E44AAF0699D71EL,0x56E44AAF0699D71EL,0x56E44AAF0699D71EL,0x56E44AAF0699D71EL,0x56E44AAF0699D71EL,0x56E44AAF0699D71EL,0x56E44AAF0699D71EL,0x56E44AAF0699D71EL,0x56E44AAF0699D71EL};
        int32_t l_287 = 0x6CEEBD54L;
        int32_t *l_302 = &l_281;
        int i, j;
        for (i = 0; i < 6; i++)
            l_77[i] = 1UL;
        if (l_2)
        { /* block id: 7 */
            int16_t l_3 = (-1L);
            uint8_t l_4 = 1UL;
            int32_t l_8 = 0x038591B6L;
            int32_t *l_7 = &l_8;
            int32_t *l_9 = (void*)0;
            l_3 = 0x00C170CDL;
            l_9 = ((--l_4) , l_7);
            for (l_3 = 0; (l_3 < 29); l_3 = safe_add_func_int32_t_s_s(l_3, 3))
            { /* block id: 13 */
                int32_t l_12 = 0x70A3267EL;
                VECTOR(int32_t, 2) l_42 = (VECTOR(int32_t, 2))((-8L), 0x358DD5D9L);
                uint32_t l_43 = 0x1310E34DL;
                int32_t l_44 = 0L;
                int i;
                for (l_12 = 0; (l_12 == 8); l_12 = safe_add_func_int8_t_s_s(l_12, 8))
                { /* block id: 16 */
                    int32_t l_15[6][10][2] = {{{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL}},{{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL}},{{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL}},{{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL}},{{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL}},{{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL},{(-2L),0x18D9DCEEL}}};
                    int16_t l_25 = 4L;
                    uint32_t l_26 = 0xED7C6C5FL;
                    uint8_t l_39[10][4] = {{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}};
                    int i, j, k;
                    for (l_15[4][1][1] = 0; (l_15[4][1][1] != (-17)); l_15[4][1][1] = safe_sub_func_uint8_t_u_u(l_15[4][1][1], 3))
                    { /* block id: 19 */
                        int8_t l_18 = 0x21L;
                        uint32_t l_19[10][6][4] = {{{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL}},{{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL}},{{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL}},{{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL}},{{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL}},{{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL}},{{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL}},{{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL}},{{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL}},{{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL},{0xD2CF1A50L,0xB8D8131DL,0xFB6F8A3EL,0x1C2610AAL}}};
                        int i, j, k;
                        ++l_19[6][1][1];
                    }
                }
                (*l_9) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_42.yyyyxxyxyyyxyyxx)).s7af8)).z;
                l_43 = ((VECTOR(int32_t, 2))(0x1D718AB8L, 0x1D8E95A6L)).hi;
                (*l_9) |= l_44;
            }
            for (l_8 = (-22); (l_8 > 24); l_8 = safe_add_func_int32_t_s_s(l_8, 7))
            { /* block id: 48 */
                int16_t l_47 = 0x50FDL;
                int32_t l_48[4];
                VECTOR(int16_t, 4) l_49 = (VECTOR(int16_t, 4))(0x65CEL, (VECTOR(int16_t, 2))(0x65CEL, (-1L)), (-1L));
                int8_t l_50[6];
                uint8_t l_51 = 1UL;
                int i;
                for (i = 0; i < 4; i++)
                    l_48[i] = 0L;
                for (i = 0; i < 6; i++)
                    l_50[i] = (-3L);
                l_48[0] ^= l_47;
                l_51 |= ((l_3 = 0x2C8AL) , (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 16))(l_49.zywxwxxwxxxwwzyw)), ((VECTOR(int16_t, 4))(l_50[1], (-10L), 1L, 0x0AE5L)).wzyxxzzwxwwwyzwx))).lo)).s5 , 0x0255DAF8L));
                for (l_48[0] = 0; (l_48[0] != (-10)); l_48[0] = safe_sub_func_int16_t_s_s(l_48[0], 7))
                { /* block id: 54 */
                    uint16_t l_54 = 65528UL;
                    int32_t l_55 = 0x626D9AC2L;
                    uint32_t l_56 = 4294967295UL;
                    uint32_t l_57 = 1UL;
                    int16_t l_58 = 0x325CL;
                    uint64_t l_59 = 0xF37D808B432A052AL;
                    int64_t l_60 = 1L;
                    l_55 |= l_54;
                    if ((l_60 = (((l_58 ^= (l_56 , l_57)) , l_59) , (-1L))))
                    { /* block id: 58 */
                        uint32_t l_61 = 0xB01AA1ECL;
                        int64_t l_62 = 0x34BBF6D4BD0D1FC1L;
                        int16_t l_63 = (-8L);
                        int16_t l_64 = 1L;
                        uint8_t l_65[6] = {0x6BL,0x6BL,0x6BL,0x6BL,0x6BL,0x6BL};
                        int i;
                        l_62 = ((((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 2))(0xEAF453539CAC1228L, 1UL))))).lo , l_61) , 0x1174088AL);
                        ++l_65[4];
                    }
                    else
                    { /* block id: 61 */
                        int32_t l_69 = 0x773D59F1L;
                        int32_t *l_68 = &l_69;
                        int16_t l_70[5][1][9] = {{{1L,1L,1L,0x1393L,0x2ED9L,0x1393L,1L,1L,1L}},{{1L,1L,1L,0x1393L,0x2ED9L,0x1393L,1L,1L,1L}},{{1L,1L,1L,0x1393L,0x2ED9L,0x1393L,1L,1L,1L}},{{1L,1L,1L,0x1393L,0x2ED9L,0x1393L,1L,1L,1L}},{{1L,1L,1L,0x1393L,0x2ED9L,0x1393L,1L,1L,1L}}};
                        uint16_t l_71 = 0x0D88L;
                        uint64_t l_72 = 18446744073709551615UL;
                        int i, j, k;
                        l_9 = l_68;
                        l_9 = (void*)0;
                        (*l_68) &= (l_71 |= (l_70[1][0][7] &= (-1L)));
                        l_72 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x3051342BL, (-6L))).yyyy)).y;
                    }
                }
            }
        }
        else
        { /* block id: 71 */
            int32_t *l_74 = (void*)0;
            int32_t **l_73[10][5] = {{&l_74,(void*)0,&l_74,&l_74,(void*)0},{&l_74,(void*)0,&l_74,&l_74,(void*)0},{&l_74,(void*)0,&l_74,&l_74,(void*)0},{&l_74,(void*)0,&l_74,&l_74,(void*)0},{&l_74,(void*)0,&l_74,&l_74,(void*)0},{&l_74,(void*)0,&l_74,&l_74,(void*)0},{&l_74,(void*)0,&l_74,&l_74,(void*)0},{&l_74,(void*)0,&l_74,&l_74,(void*)0},{&l_74,(void*)0,&l_74,&l_74,(void*)0},{&l_74,(void*)0,&l_74,&l_74,(void*)0}};
            int32_t **l_75 = &l_74;
            int i, j;
            l_75 = l_73[6][4];
        }
        if ((((VECTOR(uint64_t, 8))(l_76.s4bff4cce)).s4 , l_77[1]))
        { /* block id: 74 */
            int32_t l_78 = 0L;
            for (l_78 = 0; (l_78 == 9); l_78 = safe_add_func_uint16_t_u_u(l_78, 8))
            { /* block id: 77 */
                int32_t l_82 = 0x48467150L;
                int32_t *l_81[10] = {&l_82,&l_82,&l_82,&l_82,&l_82,&l_82,&l_82,&l_82,&l_82,&l_82};
                int32_t l_88 = 0x0F2CAE24L;
                uint8_t l_89 = 0x6FL;
                int i;
                l_81[8] = l_81[8];
                for (l_82 = 6; (l_82 <= 14); l_82 = safe_add_func_uint16_t_u_u(l_82, 7))
                { /* block id: 81 */
                    uint32_t l_85 = 2UL;
                    ++l_85;
                }
                l_89 ^= l_88;
                for (l_89 = (-18); (l_89 >= 1); l_89++)
                { /* block id: 87 */
                    int32_t *l_92 = (void*)0;
                    int32_t l_94 = 3L;
                    int32_t *l_93 = &l_94;
                    int8_t l_95 = 0x24L;
                    uint32_t l_96[6][8] = {{4294967295UL,0xFD33E800L,0xFD560464L,0xFD33E800L,4294967295UL,4294967295UL,0xFD33E800L,0xFD560464L},{4294967295UL,0xFD33E800L,0xFD560464L,0xFD33E800L,4294967295UL,4294967295UL,0xFD33E800L,0xFD560464L},{4294967295UL,0xFD33E800L,0xFD560464L,0xFD33E800L,4294967295UL,4294967295UL,0xFD33E800L,0xFD560464L},{4294967295UL,0xFD33E800L,0xFD560464L,0xFD33E800L,4294967295UL,4294967295UL,0xFD33E800L,0xFD560464L},{4294967295UL,0xFD33E800L,0xFD560464L,0xFD33E800L,4294967295UL,4294967295UL,0xFD33E800L,0xFD560464L},{4294967295UL,0xFD33E800L,0xFD560464L,0xFD33E800L,4294967295UL,4294967295UL,0xFD33E800L,0xFD560464L}};
                    int i, j;
                    l_93 = (l_81[3] = l_92);
                    --l_96[2][2];
                    for (l_96[2][2] = 0; (l_96[2][2] != 53); l_96[2][2]++)
                    { /* block id: 93 */
                        uint64_t l_101 = 0x45578D77B4968E5EL;
                        int8_t l_102[1];
                        int16_t l_103[4][7] = {{0x61C8L,0x61C8L,0x61C8L,0x61C8L,0x61C8L,0x61C8L,0x61C8L},{0x61C8L,0x61C8L,0x61C8L,0x61C8L,0x61C8L,0x61C8L,0x61C8L},{0x61C8L,0x61C8L,0x61C8L,0x61C8L,0x61C8L,0x61C8L,0x61C8L},{0x61C8L,0x61C8L,0x61C8L,0x61C8L,0x61C8L,0x61C8L,0x61C8L}};
                        VECTOR(int32_t, 2) l_104 = (VECTOR(int32_t, 2))(1L, 1L);
                        VECTOR(int32_t, 8) l_105 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7CDD685BL), 0x7CDD685BL), 0x7CDD685BL, 0L, 0x7CDD685BL);
                        VECTOR(int32_t, 16) l_106 = (VECTOR(int32_t, 16))(0x6F33E7B1L, (VECTOR(int32_t, 4))(0x6F33E7B1L, (VECTOR(int32_t, 2))(0x6F33E7B1L, 0x5FB79008L), 0x5FB79008L), 0x5FB79008L, 0x6F33E7B1L, 0x5FB79008L, (VECTOR(int32_t, 2))(0x6F33E7B1L, 0x5FB79008L), (VECTOR(int32_t, 2))(0x6F33E7B1L, 0x5FB79008L), 0x6F33E7B1L, 0x5FB79008L, 0x6F33E7B1L, 0x5FB79008L);
                        VECTOR(int32_t, 2) l_107 = (VECTOR(int32_t, 2))(0x23E3A335L, 0x08BB19F0L);
                        VECTOR(int32_t, 8) l_108 = (VECTOR(int32_t, 8))(0x1FA8CC7AL, (VECTOR(int32_t, 4))(0x1FA8CC7AL, (VECTOR(int32_t, 2))(0x1FA8CC7AL, 0x37DEE9CFL), 0x37DEE9CFL), 0x37DEE9CFL, 0x1FA8CC7AL, 0x37DEE9CFL);
                        int32_t l_109 = 0x7BFFB873L;
                        VECTOR(int32_t, 4) l_110 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x40DBAEEBL), 0x40DBAEEBL);
                        VECTOR(int32_t, 16) l_111 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
                        int8_t l_112[9][6] = {{0L,(-1L),0x37L,0x6AL,0x37L,(-1L)},{0L,(-1L),0x37L,0x6AL,0x37L,(-1L)},{0L,(-1L),0x37L,0x6AL,0x37L,(-1L)},{0L,(-1L),0x37L,0x6AL,0x37L,(-1L)},{0L,(-1L),0x37L,0x6AL,0x37L,(-1L)},{0L,(-1L),0x37L,0x6AL,0x37L,(-1L)},{0L,(-1L),0x37L,0x6AL,0x37L,(-1L)},{0L,(-1L),0x37L,0x6AL,0x37L,(-1L)},{0L,(-1L),0x37L,0x6AL,0x37L,(-1L)}};
                        VECTOR(int32_t, 16) l_113 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
                        VECTOR(int32_t, 16) l_114 = (VECTOR(int32_t, 16))(0x573480D3L, (VECTOR(int32_t, 4))(0x573480D3L, (VECTOR(int32_t, 2))(0x573480D3L, 0x3E0E5012L), 0x3E0E5012L), 0x3E0E5012L, 0x573480D3L, 0x3E0E5012L, (VECTOR(int32_t, 2))(0x573480D3L, 0x3E0E5012L), (VECTOR(int32_t, 2))(0x573480D3L, 0x3E0E5012L), 0x573480D3L, 0x3E0E5012L, 0x573480D3L, 0x3E0E5012L);
                        VECTOR(int8_t, 16) l_115 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x24L), 0x24L), 0x24L, (-1L), 0x24L, (VECTOR(int8_t, 2))((-1L), 0x24L), (VECTOR(int8_t, 2))((-1L), 0x24L), (-1L), 0x24L, (-1L), 0x24L);
                        VECTOR(int8_t, 16) l_116 = (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), (-1L)), (-1L)), (-1L), (-9L), (-1L), (VECTOR(int8_t, 2))((-9L), (-1L)), (VECTOR(int8_t, 2))((-9L), (-1L)), (-9L), (-1L), (-9L), (-1L));
                        VECTOR(int8_t, 4) l_117 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x47L), 0x47L);
                        VECTOR(int8_t, 4) l_118 = (VECTOR(int8_t, 4))(0x54L, (VECTOR(int8_t, 2))(0x54L, 0x60L), 0x60L);
                        uint32_t l_119 = 0x86350052L;
                        VECTOR(int16_t, 8) l_120 = (VECTOR(int16_t, 8))(0x66EAL, (VECTOR(int16_t, 4))(0x66EAL, (VECTOR(int16_t, 2))(0x66EAL, 0L), 0L), 0L, 0x66EAL, 0L);
                        VECTOR(int16_t, 8) l_121 = (VECTOR(int16_t, 8))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0x6280L), 0x6280L), 0x6280L, 4L, 0x6280L);
                        VECTOR(uint8_t, 2) l_122 = (VECTOR(uint8_t, 2))(0xFAL, 248UL);
                        VECTOR(uint8_t, 16) l_123 = (VECTOR(uint8_t, 16))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0x46L), 0x46L), 0x46L, 7UL, 0x46L, (VECTOR(uint8_t, 2))(7UL, 0x46L), (VECTOR(uint8_t, 2))(7UL, 0x46L), 7UL, 0x46L, 7UL, 0x46L);
                        uint32_t l_124 = 0x79ADF89CL;
                        int32_t l_125 = 8L;
                        int32_t l_126 = (-1L);
                        VECTOR(uint8_t, 16) l_127 = (VECTOR(uint8_t, 16))(0x5DL, (VECTOR(uint8_t, 4))(0x5DL, (VECTOR(uint8_t, 2))(0x5DL, 0xB0L), 0xB0L), 0xB0L, 0x5DL, 0xB0L, (VECTOR(uint8_t, 2))(0x5DL, 0xB0L), (VECTOR(uint8_t, 2))(0x5DL, 0xB0L), 0x5DL, 0xB0L, 0x5DL, 0xB0L);
                        uint8_t l_128 = 1UL;
                        VECTOR(uint8_t, 16) l_129 = (VECTOR(uint8_t, 16))(0xF2L, (VECTOR(uint8_t, 4))(0xF2L, (VECTOR(uint8_t, 2))(0xF2L, 0xE6L), 0xE6L), 0xE6L, 0xF2L, 0xE6L, (VECTOR(uint8_t, 2))(0xF2L, 0xE6L), (VECTOR(uint8_t, 2))(0xF2L, 0xE6L), 0xF2L, 0xE6L, 0xF2L, 0xE6L);
                        VECTOR(uint8_t, 16) l_130 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xC2L), 0xC2L), 0xC2L, 1UL, 0xC2L, (VECTOR(uint8_t, 2))(1UL, 0xC2L), (VECTOR(uint8_t, 2))(1UL, 0xC2L), 1UL, 0xC2L, 1UL, 0xC2L);
                        VECTOR(uint8_t, 8) l_131 = (VECTOR(uint8_t, 8))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 1UL), 1UL), 1UL, 3UL, 1UL);
                        int32_t l_132 = 3L;
                        int16_t l_133 = 0x606AL;
                        uint64_t l_134 = 0x11E251C85CD55A8FL;
                        int64_t l_135 = 0L;
                        uint8_t l_136 = 247UL;
                        uint16_t l_137 = 0xEE1AL;
                        int16_t l_138 = (-3L);
                        uint32_t l_139 = 4294967287UL;
                        int8_t l_140[3][8][7] = {{{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L}},{{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L}},{{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L},{0x42L,0x55L,0x79L,0L,(-2L),0L,0x79L}}};
                        int32_t l_141 = 0x4E4C8BB3L;
                        int32_t l_142 = 0x6C052434L;
                        uint8_t l_143 = 0x1BL;
                        uint32_t l_144 = 1UL;
                        int32_t l_145 = 0x1617E3CEL;
                        uint32_t l_146 = 4294967291UL;
                        uint64_t l_147 = 0xAB0778B0BB3C35D9L;
                        int32_t *l_148 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_102[i] = 0x3AL;
                        l_103[2][5] &= (l_102[0] = l_101);
                        l_109 = ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_104.yy)), 0x7B958418L, 0L)), ((VECTOR(int32_t, 8))(l_105.s67503461)).s7, 0L, 0x33D763EEL)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x74936DCCL, 0L)).xxyxxxyx)), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(l_106.sc5d1)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_107.yyxyxxyx)))).s14)), ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_108.s0464)).lo)), 0x4413540FL, l_109, ((VECTOR(int32_t, 2))(l_110.zz)), 0x6BCCE899L, 0L)).s20)).xyxy)).hi))).yyxyyxxy, ((VECTOR(int32_t, 8))(l_111.sc8bb2a2b)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 8))(l_112[5][4], ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x5FCE81A1L, 0x7F117623L)).xxxxxxyy)).lo)), 0x2AA79D85L, 2L, 0x55BA149CL, (-1L))).s55)).xxyy, ((VECTOR(int32_t, 16))(l_113.sb6ed011c8eea47a0)).sfbce, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(l_114.s7869117d6c01ffe2)).s4739, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-8L), 0x66F90CD5L)).yxyyxxyx)), ((VECTOR(int32_t, 16))((((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(l_115.s8804)).zwywwzywxzyxwyyz, (int8_t)(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_116.s2f)).xyyx)).y , ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_117.yyyzyzxwzyyxxzxx)).sb4)).yyyyxxxyyxxyxxxx)).sd585, ((VECTOR(int8_t, 4))(l_118.yzyw))))).z)))).s5 , (l_140[1][2][3] = ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))((-5L), l_119, 0L, 0L)))), 0x2F96L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_120.s15)))), 0x29E2L)).even, ((VECTOR(int16_t, 4))(l_121.s6712))))).even, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_122.xx)), 0xF4L, 0UL)).wyzzxwywwxyxzzwz, ((VECTOR(uint8_t, 8))(l_123.s4eafe298)).s4046217245555235)))))).sc5b1, (uint8_t)0UL, (uint8_t)l_124))), ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 16))(255UL, ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xF8L, 0x50L)), 9UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(0x50L, l_125, 0x93L, 0xD7L)).yzxxwywwzyxxxxwx)).s27)), l_126, 0UL, ((VECTOR(uint8_t, 8))(0x62L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0UL, 0UL)))), ((VECTOR(uint8_t, 4))(l_127.s2598)), 2UL)).s2, ((VECTOR(uint8_t, 4))(0x75L, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(l_128, (l_137 = (l_136 = ((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 4))(l_129.s723f)).yzzwxxwyzyxyyyyx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_130.s12172c683eec5992)))).s523f, ((VECTOR(uint8_t, 8))(l_131.s33731502)).lo, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))((l_77[2] = l_132), 254UL, 0x2CL, 4UL, l_133, 248UL, 0UL, 255UL, 249UL, l_134, l_135, ((VECTOR(uint8_t, 2))(255UL)), 0UL, 0xC0L, 0x50L)))).s42f7))).xzzwzzwyzwzyxyyy)).even)).s7043556300615377))).lo, ((VECTOR(uint8_t, 8))(0x82L))))).s2)), 0x92L, 0x4DL)).yzzzywwy))), 0x3AL, ((VECTOR(uint8_t, 2))(1UL)), 0x00L, 0x3DL, 0xBFL, 0x47L, 0xA4L)), (uint8_t)l_138, (uint8_t)0x46L))).se1c9)).xyxzwzywxzxwyzwz, ((VECTOR(uint8_t, 16))(255UL))))).sce, ((VECTOR(uint8_t, 2))(0x0DL))))), 0x2CL)), 250UL, ((VECTOR(uint8_t, 2))(0UL)), 255UL)).s85)).yyxyyxyxxyyyxxyy, ((VECTOR(uint8_t, 16))(1UL))))).s90, (uint8_t)FAKE_DIVERGE(p_904->global_0_offset, get_global_id(0), 10), (uint8_t)l_139))).xyyyyyxx))), 251UL, ((VECTOR(uint8_t, 2))(255UL)), 0x2CL, 252UL, 0x97L, 248UL)).sd81d, ((VECTOR(uint8_t, 4))(0xF6L))))), ((VECTOR(uint8_t, 4))(0x62L))))).wxwwwxxz)).hi, ((VECTOR(uint8_t, 4))(0x9EL))))).hi)).yxyxxxxy, ((VECTOR(uint8_t, 8))(0xECL))))).odd)).lo))).hi)), l_141, ((VECTOR(int32_t, 8))(5L)), l_142, l_143, (-1L), 0x74673FFDL, 0x38775155L, 0x237C6CF8L)).lo))).s4134503364071514)).odd)), ((VECTOR(int32_t, 8))(1L))))).hi))).even, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(0x527CE31FL))))).yxyy))).hi, ((VECTOR(int32_t, 2))(0x6E48C6A7L)), ((VECTOR(int32_t, 2))((-4L)))))), 0x2E5059A0L, ((VECTOR(int32_t, 4))(0L)))).s4170053367717367, (int32_t)l_144, (int32_t)l_145))).sd, l_146, (-5L), (-1L), l_147, ((VECTOR(int32_t, 2))(0x53B164AEL)), 0x3586E15FL))))).s47, ((VECTOR(int32_t, 2))(6L)), ((VECTOR(int32_t, 2))(0x4343CAFAL))))), ((VECTOR(int32_t, 2))((-6L))))))))).yyyxxyyy))).s6130677333743016, ((VECTOR(int32_t, 16))(0x44951996L))))).se;
                        l_113.s6 ^= (l_105.s4 &= 0L);
                        l_92 = l_148;
                    }
                }
            }
        }
        else
        { /* block id: 107 */
            int32_t l_149 = 0x52F8CB5BL;
            VECTOR(uint64_t, 16) l_150 = (VECTOR(uint64_t, 16))(0xFC7D4BD7B55C8FD6L, (VECTOR(uint64_t, 4))(0xFC7D4BD7B55C8FD6L, (VECTOR(uint64_t, 2))(0xFC7D4BD7B55C8FD6L, 0UL), 0UL), 0UL, 0xFC7D4BD7B55C8FD6L, 0UL, (VECTOR(uint64_t, 2))(0xFC7D4BD7B55C8FD6L, 0UL), (VECTOR(uint64_t, 2))(0xFC7D4BD7B55C8FD6L, 0UL), 0xFC7D4BD7B55C8FD6L, 0UL, 0xFC7D4BD7B55C8FD6L, 0UL);
            VECTOR(int32_t, 16) l_153 = (VECTOR(int32_t, 16))(0x3C847D68L, (VECTOR(int32_t, 4))(0x3C847D68L, (VECTOR(int32_t, 2))(0x3C847D68L, 0x2C1A1C62L), 0x2C1A1C62L), 0x2C1A1C62L, 0x3C847D68L, 0x2C1A1C62L, (VECTOR(int32_t, 2))(0x3C847D68L, 0x2C1A1C62L), (VECTOR(int32_t, 2))(0x3C847D68L, 0x2C1A1C62L), 0x3C847D68L, 0x2C1A1C62L, 0x3C847D68L, 0x2C1A1C62L);
            uint64_t l_154 = 0x038D5A99F62E3C09L;
            uint8_t l_239 = 6UL;
            int i;
            ++l_150.sf;
            if (((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(l_153.sa095)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(1L, (l_153.sc &= (l_154 = 1L)), 0x0FBA44B0L, 0x63550A75L)).xwzywwxx)).s24))).lo)
            { /* block id: 111 */
                int32_t l_157 = (-10L);
                int32_t *l_156 = &l_157;
                int32_t **l_155 = &l_156;
                int64_t l_158 = 0x1E8FEB3E272992A0L;
                int32_t l_159 = 1L;
                l_155 = (void*)0;
                l_153.s9 ^= l_158;
                l_153.sf = l_159;
                l_153.s3 = 0x12515FCFL;
            }
            else
            { /* block id: 116 */
                VECTOR(int32_t, 2) l_160 = (VECTOR(int32_t, 2))((-5L), 0x23D86430L);
                int32_t l_161 = 4L;
                int32_t l_162 = 0x35ECC137L;
                VECTOR(int32_t, 8) l_163 = (VECTOR(int32_t, 8))(0x1524D6D5L, (VECTOR(int32_t, 4))(0x1524D6D5L, (VECTOR(int32_t, 2))(0x1524D6D5L, 0x484E0758L), 0x484E0758L), 0x484E0758L, 0x1524D6D5L, 0x484E0758L);
                VECTOR(int32_t, 16) l_164 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7DBE93F3L), 0x7DBE93F3L), 0x7DBE93F3L, 1L, 0x7DBE93F3L, (VECTOR(int32_t, 2))(1L, 0x7DBE93F3L), (VECTOR(int32_t, 2))(1L, 0x7DBE93F3L), 1L, 0x7DBE93F3L, 1L, 0x7DBE93F3L);
                VECTOR(int32_t, 2) l_165 = (VECTOR(int32_t, 2))(0x15BE46CAL, (-1L));
                VECTOR(int64_t, 16) l_166 = (VECTOR(int64_t, 16))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, (-1L)), (-1L)), (-1L), 2L, (-1L), (VECTOR(int64_t, 2))(2L, (-1L)), (VECTOR(int64_t, 2))(2L, (-1L)), 2L, (-1L), 2L, (-1L));
                VECTOR(int32_t, 8) l_169 = (VECTOR(int32_t, 8))(0x487E67C6L, (VECTOR(int32_t, 4))(0x487E67C6L, (VECTOR(int32_t, 2))(0x487E67C6L, 0x6A8F4955L), 0x6A8F4955L), 0x6A8F4955L, 0x487E67C6L, 0x6A8F4955L);
                int i;
                if ((l_166.s3 |= ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_160.yxxyyyyy)), ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(0x3009L, 7L)).yyxxyyyyyxyxyxyy, ((VECTOR(uint16_t, 2))(4UL, 7UL)).yxxxxyxxxxxyyyyx))).lo, ((VECTOR(int32_t, 16))((l_162 = (l_153.s2 = l_161)), ((VECTOR(int32_t, 2))(1L, 0L)), ((VECTOR(int32_t, 16))(l_163.s3476764673556757)).s2, (-6L), ((VECTOR(int32_t, 8))(l_164.s3ea31339)), ((VECTOR(int32_t, 2))(l_165.yx)), (-9L))).hi))).s0))
                { /* block id: 120 */
                    int32_t l_167 = (-10L);
                    l_160.x = (l_153.s5 = 0x44F218FDL);
                    l_160.x ^= l_167;
                }
                else
                { /* block id: 124 */
                    uint8_t l_168 = 0x3DL;
                    l_168 |= 0x5E071CABL;
                }
                l_153.s9 = ((VECTOR(int32_t, 8))(l_169.s57302121)).s7;
            }
            for (l_149 = 0; (l_149 < (-13)); l_149 = safe_sub_func_int16_t_s_s(l_149, 5))
            { /* block id: 131 */
                VECTOR(int32_t, 2) l_172 = (VECTOR(int32_t, 2))(1L, 8L);
                VECTOR(int16_t, 8) l_173 = (VECTOR(int16_t, 8))(0x697FL, (VECTOR(int16_t, 4))(0x697FL, (VECTOR(int16_t, 2))(0x697FL, 0L), 0L), 0L, 0x697FL, 0L);
                int i;
                if ((l_172.y = ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x727FA778L, 0x692EB2F9L)).yyxxyyyxyyxyyyyy)).sb8ce, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(l_172.yyyxyyyxxyxxxxxx)).sf5, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_173.s6711141344301353)).s9c3c)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xD7D1L, 0x5C1CL)), 65535UL, 65528UL)).odd)).yyyy))).lo))).yxxx))).w))
                { /* block id: 133 */
                    uint16_t l_174 = 0xDC1EL;
                    int32_t l_175 = 1L;
                    int64_t l_176 = 2L;
                    int8_t l_177[2][1][9] = {{{0x24L,0x43L,7L,0x43L,0x24L,0x24L,0x43L,7L,0x43L}},{{0x24L,0x43L,7L,0x43L,0x24L,0x24L,0x43L,7L,0x43L}}};
                    uint16_t l_178 = 0x9DF8L;
                    int8_t l_191 = 0L;
                    int i, j, k;
                    l_153.s7 = l_174;
                    ++l_178;
                    for (l_177[0][0][6] = (-16); (l_177[0][0][6] != 28); l_177[0][0][6]++)
                    { /* block id: 138 */
                        int32_t l_185 = 6L;
                        int32_t *l_184 = &l_185;
                        int32_t **l_183 = &l_184;
                        int32_t **l_186 = &l_184;
                        int32_t *l_187 = (void*)0;
                        int32_t *l_188[2];
                        int32_t *l_189 = &l_185;
                        int32_t *l_190 = &l_185;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_188[i] = &l_185;
                        l_186 = l_183;
                        l_188[1] = l_187;
                        l_172.x ^= 4L;
                        l_190 = (l_189 = (void*)0);
                    }
                    if ((l_153.s9 |= l_191))
                    { /* block id: 146 */
                        int16_t l_192 = 1L;
                        int16_t l_193 = 0x4578L;
                        uint16_t l_194 = 0x7D9BL;
                        uint32_t l_197 = 0xF4F39A29L;
                        uint16_t l_198 = 8UL;
                        VECTOR(int32_t, 16) l_199 = (VECTOR(int32_t, 16))(0x44757521L, (VECTOR(int32_t, 4))(0x44757521L, (VECTOR(int32_t, 2))(0x44757521L, 1L), 1L), 1L, 0x44757521L, 1L, (VECTOR(int32_t, 2))(0x44757521L, 1L), (VECTOR(int32_t, 2))(0x44757521L, 1L), 0x44757521L, 1L, 0x44757521L, 1L);
                        int16_t l_200 = 0x7749L;
                        uint64_t l_201 = 0UL;
                        int i;
                        ++l_194;
                        l_172.x = l_197;
                        l_200 = (l_198 , ((VECTOR(int32_t, 16))(l_199.s1b8e7c1b22920072)).s8);
                        l_172.x |= l_201;
                    }
                    else
                    { /* block id: 151 */
                        int16_t l_202 = 0x0732L;
                        int64_t l_203 = 0x51D0D96D4E70C977L;
                        int32_t l_204 = 0L;
                        int64_t l_205 = (-5L);
                        uint8_t l_206 = 0x83L;
                        VECTOR(int32_t, 16) l_209 = (VECTOR(int32_t, 16))(0x112F0B68L, (VECTOR(int32_t, 4))(0x112F0B68L, (VECTOR(int32_t, 2))(0x112F0B68L, 9L), 9L), 9L, 0x112F0B68L, 9L, (VECTOR(int32_t, 2))(0x112F0B68L, 9L), (VECTOR(int32_t, 2))(0x112F0B68L, 9L), 0x112F0B68L, 9L, 0x112F0B68L, 9L);
                        int32_t *l_210 = &l_204;
                        int32_t *l_211 = (void*)0;
                        int i;
                        l_206--;
                        l_172.y |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_209.s30178618)).s20)).odd;
                        l_210 = (l_211 = l_210);
                    }
                }
                else
                { /* block id: 157 */
                    int32_t l_213 = 0x0745E32BL;
                    int32_t *l_212 = &l_213;
                    int32_t *l_214 = &l_213;
                    VECTOR(int32_t, 16) l_215 = (VECTOR(int32_t, 16))(0x6F55D181L, (VECTOR(int32_t, 4))(0x6F55D181L, (VECTOR(int32_t, 2))(0x6F55D181L, 0x6CD9A6DEL), 0x6CD9A6DEL), 0x6CD9A6DEL, 0x6F55D181L, 0x6CD9A6DEL, (VECTOR(int32_t, 2))(0x6F55D181L, 0x6CD9A6DEL), (VECTOR(int32_t, 2))(0x6F55D181L, 0x6CD9A6DEL), 0x6F55D181L, 0x6CD9A6DEL, 0x6F55D181L, 0x6CD9A6DEL);
                    VECTOR(int32_t, 2) l_216 = (VECTOR(int32_t, 2))(0x47FF5A79L, 2L);
                    VECTOR(uint16_t, 2) l_217 = (VECTOR(uint16_t, 2))(0UL, 0xC373L);
                    int i;
                    l_214 = l_212;
                    l_172.y ^= ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(l_215.s51f0a175)).s5247115543741102, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_216.xyyyyxyyxxyyyxxx)).s4d39)).zywxzyzwxwzxzzwx)))))).sa;
                    if (l_217.x)
                    { /* block id: 160 */
                        uint64_t l_218[7][7][5] = {{{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL}},{{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL}},{{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL}},{{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL}},{{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL}},{{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL}},{{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551607UL,0UL,0UL,18446744073709551607UL,18446744073709551615UL}}};
                        uint8_t l_219 = 0x3CL;
                        int i, j, k;
                        l_218[0][2][3] = 0x6115835EL;
                        (*l_212) = l_219;
                    }
                    else
                    { /* block id: 163 */
                        int64_t l_220 = 0L;
                        int32_t *l_221 = (void*)0;
                        uint32_t l_222 = 4294967295UL;
                        uint32_t l_223[4];
                        VECTOR(int32_t, 8) l_224 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L));
                        VECTOR(int16_t, 16) l_225 = (VECTOR(int16_t, 16))(0x227EL, (VECTOR(int16_t, 4))(0x227EL, (VECTOR(int16_t, 2))(0x227EL, (-1L)), (-1L)), (-1L), 0x227EL, (-1L), (VECTOR(int16_t, 2))(0x227EL, (-1L)), (VECTOR(int16_t, 2))(0x227EL, (-1L)), 0x227EL, (-1L), 0x227EL, (-1L));
                        int32_t l_226 = 0x6FF982DAL;
                        uint32_t l_227 = 4294967292UL;
                        int8_t l_228[4][1];
                        int32_t l_229 = (-7L);
                        uint8_t l_230 = 0x46L;
                        int32_t l_231 = 0x37C134BDL;
                        int32_t **l_232 = &l_221;
                        int32_t **l_233 = (void*)0;
                        int32_t l_234[5][3][3] = {{{0x750D2932L,0x3BE19D1DL,0x3489BE7EL},{0x750D2932L,0x3BE19D1DL,0x3489BE7EL},{0x750D2932L,0x3BE19D1DL,0x3489BE7EL}},{{0x750D2932L,0x3BE19D1DL,0x3489BE7EL},{0x750D2932L,0x3BE19D1DL,0x3489BE7EL},{0x750D2932L,0x3BE19D1DL,0x3489BE7EL}},{{0x750D2932L,0x3BE19D1DL,0x3489BE7EL},{0x750D2932L,0x3BE19D1DL,0x3489BE7EL},{0x750D2932L,0x3BE19D1DL,0x3489BE7EL}},{{0x750D2932L,0x3BE19D1DL,0x3489BE7EL},{0x750D2932L,0x3BE19D1DL,0x3489BE7EL},{0x750D2932L,0x3BE19D1DL,0x3489BE7EL}},{{0x750D2932L,0x3BE19D1DL,0x3489BE7EL},{0x750D2932L,0x3BE19D1DL,0x3489BE7EL},{0x750D2932L,0x3BE19D1DL,0x3489BE7EL}}};
                        int32_t l_235[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                        uint32_t l_236[9] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_223[i] = 4UL;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_228[i][j] = 0x53L;
                        }
                        l_220 = 0x6E4FB6FEL;
                        l_214 = l_221;
                        l_233 = ((l_222 , l_223[3]) , (((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(0x0A62622BL, ((VECTOR(int32_t, 2))(l_224.s64)), 0L, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_225.s8913c8c2)).lo)).hi)))).yxyxxyxy, ((VECTOR(uint16_t, 2))(0x4D8CL, 0x2AACL)).yxyyxxyy))), l_226, 2L, 0x595EADCBL, (-1L))), ((VECTOR(int32_t, 8))(l_227, 0x548366C3L, l_228[2][0], 2L, 1L, 0x421BA9FAL, 0x34151BE3L, 0x7236005EL)).s3763714176062073))).sb , (l_232 = ((l_229 , (l_225.s3 = l_230)) , (l_231 , (void*)0)))));
                        l_236[7]--;
                    }
                }
            }
            if (l_239)
            { /* block id: 173 */
                VECTOR(uint8_t, 16) l_240 = (VECTOR(uint8_t, 16))(0x44L, (VECTOR(uint8_t, 4))(0x44L, (VECTOR(uint8_t, 2))(0x44L, 1UL), 1UL), 1UL, 0x44L, 1UL, (VECTOR(uint8_t, 2))(0x44L, 1UL), (VECTOR(uint8_t, 2))(0x44L, 1UL), 0x44L, 1UL, 0x44L, 1UL);
                VECTOR(int32_t, 16) l_241 = (VECTOR(int32_t, 16))(0x7423C308L, (VECTOR(int32_t, 4))(0x7423C308L, (VECTOR(int32_t, 2))(0x7423C308L, 0L), 0L), 0L, 0x7423C308L, 0L, (VECTOR(int32_t, 2))(0x7423C308L, 0L), (VECTOR(int32_t, 2))(0x7423C308L, 0L), 0x7423C308L, 0L, 0x7423C308L, 0L);
                int32_t l_242 = 1L;
                VECTOR(int32_t, 4) l_243 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L);
                VECTOR(int32_t, 8) l_244 = (VECTOR(int32_t, 8))(0x26BF2998L, (VECTOR(int32_t, 4))(0x26BF2998L, (VECTOR(int32_t, 2))(0x26BF2998L, 0x13790DA8L), 0x13790DA8L), 0x13790DA8L, 0x26BF2998L, 0x13790DA8L);
                uint16_t l_245 = 6UL;
                uint32_t l_246 = 0x356443E5L;
                int32_t l_247 = 0L;
                uint32_t l_248 = 1UL;
                VECTOR(int64_t, 8) l_249 = (VECTOR(int64_t, 8))(0x70D4772450F0D241L, (VECTOR(int64_t, 4))(0x70D4772450F0D241L, (VECTOR(int64_t, 2))(0x70D4772450F0D241L, 0x31C42388ACF6BE47L), 0x31C42388ACF6BE47L), 0x31C42388ACF6BE47L, 0x70D4772450F0D241L, 0x31C42388ACF6BE47L);
                int8_t l_250[8] = {0x68L,0x68L,0x68L,0x68L,0x68L,0x68L,0x68L,0x68L};
                int32_t l_251 = (-1L);
                uint32_t l_252 = 3UL;
                uint64_t l_255 = 0x1330449663793A32L;
                int i;
                l_251 &= (((VECTOR(uint8_t, 8))(l_240.s9924834a)).s0 , (((l_248 = (l_247 = ((VECTOR(int32_t, 8))(0x12279F36L, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_241.s05b4bbc8)).hi)).yxxxxyyxzzzwwxwz)).s6c18, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x3F8886F4L, (-5L))).even, 0x02F5E899L, 4L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x570EA7F7L, 0L)))), 0x246070DAL, (-1L))).yxzwyyxy, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(7L, 0x6D04191BL)), ((VECTOR(int32_t, 4))(((GROUP_DIVERGE(1, 1) , l_242) , 0x37D4CBDDL), (-9L), (-7L), 0x12277E28L)).even))).yxxyyxyx, ((VECTOR(int32_t, 8))(7L, ((VECTOR(int32_t, 2))(l_243.xx)), (l_245 = (l_153.sc |= ((VECTOR(int32_t, 2))(l_244.s66)).hi)), 0x4A060F06L, (-9L), (-5L), 1L))))).hi)), (-3L))).hi))), l_246, 0x555534BDL, 0x61954F2FL)).s5)) , ((VECTOR(int64_t, 16))(l_249.s2626042607614305)).sc) , l_250[7]));
                l_252--;
                ++l_255;
                for (l_250[7] = 0; (l_250[7] < (-29)); l_250[7] = safe_sub_func_int32_t_s_s(l_250[7], 9))
                { /* block id: 183 */
                    int32_t l_260[2][9][10] = {{{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L}},{{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L},{8L,0L,1L,0x2514F412L,1L,0x24304789L,1L,0L,0L,1L}}};
                    uint16_t l_263[8][8] = {{0x5A96L,0x3F5AL,65535UL,0x3F5AL,0x5A96L,0x5A96L,0x3F5AL,65535UL},{0x5A96L,0x3F5AL,65535UL,0x3F5AL,0x5A96L,0x5A96L,0x3F5AL,65535UL},{0x5A96L,0x3F5AL,65535UL,0x3F5AL,0x5A96L,0x5A96L,0x3F5AL,65535UL},{0x5A96L,0x3F5AL,65535UL,0x3F5AL,0x5A96L,0x5A96L,0x3F5AL,65535UL},{0x5A96L,0x3F5AL,65535UL,0x3F5AL,0x5A96L,0x5A96L,0x3F5AL,65535UL},{0x5A96L,0x3F5AL,65535UL,0x3F5AL,0x5A96L,0x5A96L,0x3F5AL,65535UL},{0x5A96L,0x3F5AL,65535UL,0x3F5AL,0x5A96L,0x5A96L,0x3F5AL,65535UL},{0x5A96L,0x3F5AL,65535UL,0x3F5AL,0x5A96L,0x5A96L,0x3F5AL,65535UL}};
                    int i, j, k;
                    for (l_260[1][4][2] = 0; (l_260[1][4][2] > 27); ++l_260[1][4][2])
                    { /* block id: 186 */
                        l_241.sb &= 0x6779C267L;
                    }
                    l_263[1][4]++;
                }
            }
            else
            { /* block id: 191 */
                int32_t l_266 = 0x7C251ACBL;
                int32_t l_267 = 0x51794D5DL;
                uint32_t l_268 = 0xA1526149L;
                l_268++;
            }
        }
        if (((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))((l_272 = l_271), 0x5C597B1FL, l_273, ((VECTOR(int32_t, 8))(0x0959B666L, (l_274 , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((l_275 , l_276), l_277, 7L, 4L, ((VECTOR(int32_t, 2))(l_278.xx)), (-10L), 1L)))).s4), (l_280[7][7] |= ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(l_279.yxzwyxyxzxzyxyzx)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 0x5CEC5E8BL)))).yyxyxyxx))).s1), ((VECTOR(int32_t, 4))((-9L), 0x04107595L, 0x2FB4C4A8L, 0x3E37A365L)), 1L)), (-6L), 0x3AC3D3FBL, ((VECTOR(int32_t, 2))((-2L), 0x3294ED0EL)), 9L)).sce, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(l_281, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_282.yxyxxxxx)).s14, ((VECTOR(int32_t, 8))(l_283.yxyxxxxy)).s47, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(l_284.s67a2))))).even))).odd, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(l_285.se32c7c72)), (int32_t)l_286[9]))), 1L, 0x06442A5DL, l_287, 1L, (-9L), 0x7C1FF05FL)).s87, (int32_t)0x2D69E9B2L, (int32_t)(-8L))))))).lo)
        { /* block id: 197 */
            int32_t l_289[7];
            int32_t *l_288 = &l_289[5];
            int32_t *l_290[8][3][1] = {{{&l_289[5]},{&l_289[5]},{&l_289[5]}},{{&l_289[5]},{&l_289[5]},{&l_289[5]}},{{&l_289[5]},{&l_289[5]},{&l_289[5]}},{{&l_289[5]},{&l_289[5]},{&l_289[5]}},{{&l_289[5]},{&l_289[5]},{&l_289[5]}},{{&l_289[5]},{&l_289[5]},{&l_289[5]}},{{&l_289[5]},{&l_289[5]},{&l_289[5]}},{{&l_289[5]},{&l_289[5]},{&l_289[5]}}};
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_289[i] = 6L;
            l_290[3][2][0] = l_288;
        }
        else
        { /* block id: 199 */
            int32_t l_291[10][5] = {{0L,0L,0x529A7F60L,0x3C7F4124L,0x2BE02626L},{0L,0L,0x529A7F60L,0x3C7F4124L,0x2BE02626L},{0L,0L,0x529A7F60L,0x3C7F4124L,0x2BE02626L},{0L,0L,0x529A7F60L,0x3C7F4124L,0x2BE02626L},{0L,0L,0x529A7F60L,0x3C7F4124L,0x2BE02626L},{0L,0L,0x529A7F60L,0x3C7F4124L,0x2BE02626L},{0L,0L,0x529A7F60L,0x3C7F4124L,0x2BE02626L},{0L,0L,0x529A7F60L,0x3C7F4124L,0x2BE02626L},{0L,0L,0x529A7F60L,0x3C7F4124L,0x2BE02626L},{0L,0L,0x529A7F60L,0x3C7F4124L,0x2BE02626L}};
            int i, j;
            for (l_291[8][3] = 0; (l_291[8][3] != (-5)); l_291[8][3] = safe_sub_func_int32_t_s_s(l_291[8][3], 9))
            { /* block id: 202 */
                int8_t l_294 = 0L;
                uint16_t l_295 = 65534UL;
                int32_t l_299 = 0x7A0C809BL;
                int32_t *l_298[2];
                int32_t *l_300[4][7][4] = {{{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299}},{{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299}},{{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299}},{{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299},{&l_299,&l_299,&l_299,&l_299}}};
                int32_t *l_301 = (void*)0;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_298[i] = &l_299;
                l_295++;
                l_282.y |= 0x10EF32D9L;
                l_300[1][1][2] = (l_298[0] = (void*)0);
                l_298[1] = l_301;
            }
        }
        l_302 = l_302;
        unsigned int result = 0;
        result += l_2;
        result += l_76.sf;
        result += l_76.se;
        result += l_76.sd;
        result += l_76.sc;
        result += l_76.sb;
        result += l_76.sa;
        result += l_76.s9;
        result += l_76.s8;
        result += l_76.s7;
        result += l_76.s6;
        result += l_76.s5;
        result += l_76.s4;
        result += l_76.s3;
        result += l_76.s2;
        result += l_76.s1;
        result += l_76.s0;
        int l_77_i0;
        for (l_77_i0 = 0; l_77_i0 < 6; l_77_i0++) {
            result += l_77[l_77_i0];
        }
        result += l_271;
        result += l_272;
        result += l_273;
        result += l_274;
        result += l_275;
        result += l_276;
        result += l_277;
        result += l_278.y;
        result += l_278.x;
        result += l_279.w;
        result += l_279.z;
        result += l_279.y;
        result += l_279.x;
        int l_280_i0, l_280_i1;
        for (l_280_i0 = 0; l_280_i0 < 8; l_280_i0++) {
            for (l_280_i1 = 0; l_280_i1 < 8; l_280_i1++) {
                result += l_280[l_280_i0][l_280_i1];
            }
        }
        result += l_281;
        result += l_282.y;
        result += l_282.x;
        result += l_283.y;
        result += l_283.x;
        result += l_284.sf;
        result += l_284.se;
        result += l_284.sd;
        result += l_284.sc;
        result += l_284.sb;
        result += l_284.sa;
        result += l_284.s9;
        result += l_284.s8;
        result += l_284.s7;
        result += l_284.s6;
        result += l_284.s5;
        result += l_284.s4;
        result += l_284.s3;
        result += l_284.s2;
        result += l_284.s1;
        result += l_284.s0;
        result += l_285.sf;
        result += l_285.se;
        result += l_285.sd;
        result += l_285.sc;
        result += l_285.sb;
        result += l_285.sa;
        result += l_285.s9;
        result += l_285.s8;
        result += l_285.s7;
        result += l_285.s6;
        result += l_285.s5;
        result += l_285.s4;
        result += l_285.s3;
        result += l_285.s2;
        result += l_285.s1;
        result += l_285.s0;
        int l_286_i0;
        for (l_286_i0 = 0; l_286_i0 < 10; l_286_i0++) {
            result += l_286[l_286_i0];
        }
        result += l_287;
        atomic_add(&p_904->g_special_values[47 * get_linear_group_id() + 18], result);
    }
    else
    { /* block id: 211 */
        (1 + 1);
    }
    l_762[0] |= (((safe_div_func_uint64_t_u_u(func_305(p_904->l_comm_values[(safe_mod_func_uint32_t_u_u(p_904->tid, 203))], ((*l_611) = ((*p_904->g_449) = func_308((l_310 , ((((((safe_unary_minus_func_int8_t_s((((*p_904->g_449) = func_312(((*p_904->g_449) = func_315(l_310, ((safe_add_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u((func_325(((p_904->g_328.sb = ((VECTOR(int16_t, 4))(p_904->g_328.s1d33)).y) & (func_329(p_904->g_comm_values[p_904->tid], func_332(l_334[0], p_904), p_904) != ((GROUP_DIVERGE(0, 1) == (safe_mod_func_int8_t_s_s((((l_513 != (void*)0) <= 0UL) , p_904->g_402), FAKE_DIVERGE(p_904->local_1_offset, get_local_id(1), 10)))) ^ l_514[0][6]))), l_334[0], p_904) , p_904->g_476), l_534)) != p_904->g_402), 0x5355A691F352F304L)) >= p_904->g_402), p_904->g_393.sd, p_904->l_comm_values[(safe_mod_func_uint32_t_u_u(p_904->tid, 203))], p_904->l_comm_values[(safe_mod_func_uint32_t_u_u(p_904->tid, 203))], p_904)), l_559, p_904)) != l_605))) & p_904->g_606.s2) > 65526UL) | 0x3F4589C7133E0E6CL) <= p_904->g_393.s2) , GROUP_DIVERGE(0, 1))), p_904))), p_904), l_310)) | p_904->g_541.sf) < p_904->g_756.y);
    if (((((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 8))(l_763.yxxyyxxx)).s6503403332711227, (int64_t)p_904->g_606.s7))).s1991)).wwyxxyzwyxzzzzzx)).s99a7, (int64_t)(safe_mul_func_int16_t_s_s(1L, ((((*p_904->g_517) >= 1L) , (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 16))(l_768.zzzwwwxzwyyxwxwx)).s9198, ((VECTOR(uint8_t, 2))(2UL, 0UL)).xyyy))).y, (((VECTOR(int64_t, 16))(0x18E6ED13E372A96DL, (safe_lshift_func_uint8_t_u_u((!p_904->g_606.sf), (((((*l_772) = l_771) != l_773) , (safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((0x3E2F4C5DL <= 0x7CA5BC6CL) | p_904->g_541.s0), l_778)), p_904->g_393.s2))) && p_904->g_598[2]))), p_904->g_462.sc, ((VECTOR(int64_t, 4))(0x64F6ECFF0EA2CEE9L)), 0x7EE612FD2A346445L, ((VECTOR(int64_t, 8))((-1L))))).s8 , l_779)))) , p_904->g_462.sc)))))).y > 0x7938C302656FD4A3L) && p_904->g_338[4]))
    { /* block id: 451 */
        int32_t l_782 = (-1L);
        VECTOR(uint32_t, 4) l_789 = (VECTOR(uint32_t, 4))(0x71141001L, (VECTOR(uint32_t, 2))(0x71141001L, 0x74379324L), 0x74379324L);
        int8_t *l_790 = (void*)0;
        int8_t *l_791 = (void*)0;
        int8_t *l_792 = (void*)0;
        int8_t *l_793 = &p_904->g_502;
        int32_t l_794 = (-3L);
        int i;
        l_794 |= (safe_mul_func_int8_t_s_s(p_904->g_462.sb, (l_782 , (safe_mul_func_uint16_t_u_u((0x29L & p_904->g_comm_values[p_904->tid]), (safe_sub_func_int32_t_s_s(((((VECTOR(uint8_t, 16))(l_787.sc9f2967420ac61f4)).s8 ^ (((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 2))(p_904->g_788.xw)), ((VECTOR(uint32_t, 2))(l_789.xx))))).lo , ((*l_793) = p_904->g_403.y))) > 255UL), 0x57C650C1L)))))));
        (*p_904->g_795) = (*p_904->g_608);
        (*l_559) = &l_794;
    }
    else
    { /* block id: 456 */
        int8_t l_818[10][5][5] = {{{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L}},{{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L}},{{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L}},{{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L}},{{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L}},{{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L}},{{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L}},{{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L}},{{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L}},{{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L},{1L,0x74L,0L,1L,0x49L}}};
        VECTOR(uint16_t, 16) l_821 = (VECTOR(uint16_t, 16))(0xE583L, (VECTOR(uint16_t, 4))(0xE583L, (VECTOR(uint16_t, 2))(0xE583L, 1UL), 1UL), 1UL, 0xE583L, 1UL, (VECTOR(uint16_t, 2))(0xE583L, 1UL), (VECTOR(uint16_t, 2))(0xE583L, 1UL), 0xE583L, 1UL, 0xE583L, 1UL);
        VECTOR(int16_t, 16) l_827 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
        uint8_t l_845 = 0xB6L;
        int32_t l_850[8][9] = {{0x76F1D382L,0x76F1D382L,0x2C4F445DL,0x18A81CA2L,0x0840AF15L,0x18A81CA2L,0x2C4F445DL,0x76F1D382L,0x76F1D382L},{0x76F1D382L,0x76F1D382L,0x2C4F445DL,0x18A81CA2L,0x0840AF15L,0x18A81CA2L,0x2C4F445DL,0x76F1D382L,0x76F1D382L},{0x76F1D382L,0x76F1D382L,0x2C4F445DL,0x18A81CA2L,0x0840AF15L,0x18A81CA2L,0x2C4F445DL,0x76F1D382L,0x76F1D382L},{0x76F1D382L,0x76F1D382L,0x2C4F445DL,0x18A81CA2L,0x0840AF15L,0x18A81CA2L,0x2C4F445DL,0x76F1D382L,0x76F1D382L},{0x76F1D382L,0x76F1D382L,0x2C4F445DL,0x18A81CA2L,0x0840AF15L,0x18A81CA2L,0x2C4F445DL,0x76F1D382L,0x76F1D382L},{0x76F1D382L,0x76F1D382L,0x2C4F445DL,0x18A81CA2L,0x0840AF15L,0x18A81CA2L,0x2C4F445DL,0x76F1D382L,0x76F1D382L},{0x76F1D382L,0x76F1D382L,0x2C4F445DL,0x18A81CA2L,0x0840AF15L,0x18A81CA2L,0x2C4F445DL,0x76F1D382L,0x76F1D382L},{0x76F1D382L,0x76F1D382L,0x2C4F445DL,0x18A81CA2L,0x0840AF15L,0x18A81CA2L,0x2C4F445DL,0x76F1D382L,0x76F1D382L}};
        int32_t l_878[3];
        int32_t l_886 = 0x58BE14D0L;
        int16_t l_889 = 0L;
        int8_t *l_899 = &l_818[7][2][3];
        VECTOR(uint32_t, 2) l_900 = (VECTOR(uint32_t, 2))(0x048C0F6AL, 0x075D0B99L);
        int16_t *l_901 = (void*)0;
        int16_t *l_902[5][6][7] = {{{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_904->g_465,&p_904->g_465,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_878[i] = 0x0FB082CBL;
        for (l_534 = 0; (l_534 > 46); l_534 = safe_add_func_uint16_t_u_u(l_534, 5))
        { /* block id: 459 */
            int64_t l_800 = 0x5C191AA0D58C40ECL;
            VECTOR(uint16_t, 16) l_824 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65532UL), 65532UL), 65532UL, 65535UL, 65532UL, (VECTOR(uint16_t, 2))(65535UL, 65532UL), (VECTOR(uint16_t, 2))(65535UL, 65532UL), 65535UL, 65532UL, 65535UL, 65532UL);
            uint8_t l_844 = 0x71L;
            int8_t *l_847 = &p_904->g_502;
            uint32_t l_873[10][4] = {{0x21802416L,4294967288UL,4294967295UL,0x2E2C3174L},{0x21802416L,4294967288UL,4294967295UL,0x2E2C3174L},{0x21802416L,4294967288UL,4294967295UL,0x2E2C3174L},{0x21802416L,4294967288UL,4294967295UL,0x2E2C3174L},{0x21802416L,4294967288UL,4294967295UL,0x2E2C3174L},{0x21802416L,4294967288UL,4294967295UL,0x2E2C3174L},{0x21802416L,4294967288UL,4294967295UL,0x2E2C3174L},{0x21802416L,4294967288UL,4294967295UL,0x2E2C3174L},{0x21802416L,4294967288UL,4294967295UL,0x2E2C3174L},{0x21802416L,4294967288UL,4294967295UL,0x2E2C3174L}};
            int32_t *l_874 = &p_904->g_338[4];
            int32_t l_881 = (-1L);
            int32_t l_882 = 0x73C96FA2L;
            int32_t l_883 = 0x1B2F7466L;
            int32_t l_884 = 0x370B3D62L;
            int32_t l_885 = 0x3A87339DL;
            int32_t l_887 = 0x4A01FBD4L;
            int32_t l_888[4] = {0x45A95C15L,0x45A95C15L,0x45A95C15L,0x45A95C15L};
            int i, j;
            if (((safe_sub_func_int8_t_s_s(((*l_847) = (l_800 & (((*p_904->g_517) = (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_904->g_803.s1015667530634433)).sd5)))).xxxxyyyxyyyxyyxx))).s0, ((VECTOR(uint8_t, 4))(p_904->g_804.wzww)).x))) || (l_805 , ((safe_div_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((((((((l_818[7][2][3] < (((((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_821.s236e)))).x, (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 16))(l_824.sfcc2260d46bdf51f)), (uint16_t)((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 2))(l_825.zw)).yyxx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(0L, ((VECTOR(int16_t, 2))(p_904->g_826.xx)), ((VECTOR(int16_t, 2))(l_827.sed)), ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_828.s0d44182a)).s6410311377230020)).s3f, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_904->g_829.s2220)).lo))))), ((VECTOR(int16_t, 4))(0x5017L, ((VECTOR(int16_t, 2))(p_904->g_830.s40)), 1L)), ((VECTOR(int16_t, 2))(l_831.yx)), 8L, 0x1BBAL, 0x43E2L)).s95)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((((p_904->g_587.s3 , l_827.sa) >= (l_827.s6 <= ((p_904->g_542.s5 ^ ((safe_sub_func_uint64_t_u_u(l_824.s6, (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((((((safe_add_func_int32_t_s_s(l_800, l_827.sd)) && l_821.s7) > l_844) ^ 0x7F109DFFL) ^ 0x557BA66BL), 0)), 5)), p_904->g_606.s6)))) == p_904->g_412)) <= 0xD710D40F19A975B8L))) > l_845), 0x33BAL, 0x125FL, 1L)).xyywyzwxxzzwzxyz)).odd)), (-1L), (-6L), (-4L), ((VECTOR(int16_t, 2))(0x492BL)), 0x0348L)))).s2783))).w, (uint16_t)0xBBBEL))).s4621, ((VECTOR(uint16_t, 4))(0UL))))), GROUP_DIVERGE(2, 1), 0xD031L, 6UL, 0xFDB3L)).s7677431271204633)).s14))), ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 2))(0xB711L))))), 0x264BL, 0x2D53L)).odd, ((VECTOR(uint16_t, 2))(0xDC7FL))))).xxyyxyyyxxxxyyyx)).sd, p_904->g_412)))) | l_821.s0) && (-1L)) , 4294967295UL) | 0UL)) <= 8UL) || l_824.se) < l_818[0][0][3]) && p_904->g_788.x) , (void*)0) != l_846), 0L)) | 0x564BFFE0L), 3)), p_904->g_412)), l_827.s1)), 5)), p_904->g_comm_values[p_904->tid])) != 0x18L))))), 0x0FL)) != l_845))
            { /* block id: 462 */
                for (p_904->g_402 = 0; (p_904->g_402 < 19); p_904->g_402++)
                { /* block id: 465 */
                    return p_904->g_542.s5;
                }
                if (l_821.s1)
                    break;
            }
            else
            { /* block id: 469 */
                int8_t l_864[9][4][4] = {{{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)}},{{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)}},{{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)}},{{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)}},{{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)}},{{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)}},{{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)}},{{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)}},{{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)},{(-1L),0x24L,0x24L,(-1L)}}};
                int16_t *l_872 = &p_904->g_465;
                uint8_t *l_875 = &l_844;
                uint8_t *l_877[9] = {&p_904->g_760,(void*)0,&p_904->g_760,&p_904->g_760,(void*)0,&p_904->g_760,&p_904->g_760,(void*)0,&p_904->g_760};
                int i, j, k;
                l_850[3][3] |= 0x3F3FDAB4L;
                l_850[5][4] = (FAKE_DIVERGE(p_904->local_1_offset, get_local_id(1), 10) & (-4L));
                (*l_874) = (safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((GROUP_DIVERGE(2, 1) < (((l_878[0] |= (safe_sub_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(((void*)0 != &p_904->g_598[0]), 12)) & l_859) | (-2L)), ((l_876 = (((*l_875) = (((safe_rshift_func_int16_t_s_u(p_904->g_803.s4, (safe_lshift_func_uint16_t_u_s(l_864[3][1][3], (0x72L || (((*p_904->g_608) == ((((*l_872) = ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x3E0FL, (-1L))), 0x309AL, (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s((FAKE_DIVERGE(p_904->group_0_offset, get_group_id(0), 10) & (((((VECTOR(uint32_t, 4))(l_871.zwxw)).x , &p_904->g_421[5][5][0]) == &p_904->g_421[1][1][2]) & l_864[3][1][3])), 0x28BAL)), 1)), p_904->g_756.x)), 0x6505L, l_824.sb, 0L, 0x54F5L, p_904->g_462.sf, 0x6F75L, 0x0CA8L, 0L, p_904->g_412, ((VECTOR(int16_t, 2))(0L)), (-5L))).sd) && l_873[0][2]) , l_874)) & p_904->g_541.s2)))))) < p_904->g_587.s3) <= l_827.sb)) && l_850[2][5])) , 0x1EL)))) || l_864[2][0][0]) | 65532UL)), l_850[0][2])), p_904->g_803.s2));
                (*p_904->g_880) = (*p_904->g_608);
            }
            if ((*l_874))
                continue;
            --l_890;
        }
        (*l_559) = &l_850[2][2];
        (*p_904->g_517) = (((p_904->g_338[4] > (safe_mod_func_uint16_t_u_u(((*l_846) = ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((p_904->g_756.w , l_886), ((*l_899) ^= (-3L)))), (((VECTOR(uint32_t, 4))(l_900.xxyx)).w < (p_904->g_403.y >= l_821.s0)))) && (p_904->g_606.s7 = p_904->g_803.s7))), (~l_850[3][3])))) > 1UL) > p_904->g_826.y);
    }
    l_903[4] = ((*p_904->g_517) = ((0x19L == GROUP_DIVERGE(2, 1)) & ((*l_771) = 0xE7D55DFA6757DF0DL)));
    return p_904->g_587.s3;
}


/* ------------------------------------------ */
/* 
 * reads : p_904->g_744 p_904->g_462 p_904->g_756 p_904->g_517 p_904->g_338 p_904->g_502 p_904->g_587 p_904->g_598 p_904->g_402
 * writes: p_904->g_598 p_904->g_760 p_904->g_402
 */
uint64_t  func_305(uint8_t  p_306, int32_t ** p_307, struct S0 * p_904)
{ /* block id: 330 */
    int64_t l_738 = (-4L);
    int32_t *l_739[1][7] = {{&p_904->g_338[6],&p_904->g_338[4],&p_904->g_338[6],&p_904->g_338[6],&p_904->g_338[4],&p_904->g_338[6],&p_904->g_338[6]}};
    int8_t l_740[5];
    uint64_t l_741 = 0x784071E478187735L;
    uint64_t *l_757 = (void*)0;
    uint32_t *l_758 = &p_904->g_598[0];
    uint8_t *l_759 = &p_904->g_760;
    int i, j;
    for (i = 0; i < 5; i++)
        l_740[i] = (-6L);
    if ((atomic_inc(&p_904->g_atomic_input[47 * get_linear_group_id() + 46]) == 0))
    { /* block id: 332 */
        int32_t l_612 = 0x44F482BAL;
        int32_t *l_737 = &l_612;
        if (l_612)
        { /* block id: 333 */
            uint64_t l_613 = 18446744073709551610UL;
            uint32_t l_614 = 6UL;
            l_612 |= (l_613 , l_614);
            for (l_613 = (-6); (l_613 <= 37); l_613 = safe_add_func_int16_t_s_s(l_613, 2))
            { /* block id: 337 */
                int32_t l_617[6];
                uint16_t l_628 = 6UL;
                uint16_t *l_627[6][8][5] = {{{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0}},{{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0}},{{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0}},{{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0}},{{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0}},{{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0},{&l_628,&l_628,(void*)0,(void*)0,(void*)0}}};
                uint16_t **l_626 = &l_627[5][5][0];
                uint16_t **l_629 = (void*)0;
                uint8_t l_630[8][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
                uint8_t l_631 = 0xF2L;
                uint16_t l_632 = 0x9665L;
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_617[i] = 0x5D5587C6L;
                for (l_617[1] = (-11); (l_617[1] >= (-15)); l_617[1] = safe_sub_func_int64_t_s_s(l_617[1], 9))
                { /* block id: 340 */
                    int32_t l_620 = (-1L);
                    int32_t *l_625 = &l_620;
                    for (l_620 = 11; (l_620 < 27); ++l_620)
                    { /* block id: 343 */
                        VECTOR(uint64_t, 4) l_623 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 6UL), 6UL);
                        int32_t l_624 = 0x1FE9669BL;
                        int i;
                        l_612 |= ((l_614 = (((VECTOR(uint64_t, 16))(l_623.wzzxxxwwyzzzwyxz)).s1 , ((VECTOR(uint32_t, 2))(4294967295UL, 0xD515E178L)).odd)) , l_624);
                    }
                    l_625 = l_625;
                }
                l_629 = l_626;
                l_612 = ((l_630[4][1] , 0x45F43943L) , 0x7C6D1558L);
                l_632 = (l_617[4] = (l_612 &= l_631));
            }
            for (l_614 = 0; (l_614 == 3); l_614 = safe_add_func_int8_t_s_s(l_614, 9))
            { /* block id: 357 */
                VECTOR(int32_t, 2) l_635 = (VECTOR(int32_t, 2))(0L, 0x2D06A776L);
                uint32_t l_644 = 4294967293UL;
                uint32_t l_645 = 0x3A463316L;
                int i;
                for (l_635.y = 0; (l_635.y == (-17)); l_635.y = safe_sub_func_uint8_t_u_u(l_635.y, 1))
                { /* block id: 360 */
                    uint32_t l_638 = 5UL;
                    int16_t l_639[10] = {0x3571L,0x7030L,4L,0x7030L,0x3571L,0x3571L,0x7030L,4L,0x7030L,0x3571L};
                    VECTOR(int32_t, 8) l_640 = (VECTOR(int32_t, 8))(0x2BCA6EA1L, (VECTOR(int32_t, 4))(0x2BCA6EA1L, (VECTOR(int32_t, 2))(0x2BCA6EA1L, (-9L)), (-9L)), (-9L), 0x2BCA6EA1L, (-9L));
                    uint8_t l_641 = 249UL;
                    int32_t l_642 = 1L;
                    uint64_t l_643 = 0x9D2196302F01519CL;
                    int i;
                    l_612 &= l_638;
                    l_612 |= l_639[5];
                    l_612 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_640.s4417)), l_641, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(3L, 0x1338D015L)).xyyxxxxy)).s34)))), 1L)).s0;
                    l_643 |= (l_612 = (FAKE_DIVERGE(p_904->group_1_offset, get_group_id(1), 10) , l_642));
                }
                l_645 ^= (l_612 = (l_644 , 3L));
            }
            for (l_614 = 0; (l_614 != 36); ++l_614)
            { /* block id: 372 */
                uint32_t l_648 = 9UL;
                uint64_t l_649 = 18446744073709551607UL;
                uint32_t l_668 = 4294967295UL;
                if ((l_612 = (l_648 , l_649)))
                { /* block id: 374 */
                    int32_t l_650 = 1L;
                    int8_t l_664 = 0x46L;
                    for (l_650 = 26; (l_650 != (-6)); l_650--)
                    { /* block id: 377 */
                        int8_t l_653 = 0x05L;
                        uint16_t l_654 = 0xDFFFL;
                        VECTOR(uint32_t, 16) l_657 = (VECTOR(uint32_t, 16))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 1UL), 1UL), 1UL, 7UL, 1UL, (VECTOR(uint32_t, 2))(7UL, 1UL), (VECTOR(uint32_t, 2))(7UL, 1UL), 7UL, 1UL, 7UL, 1UL);
                        uint32_t l_658 = 6UL;
                        int16_t l_659 = 0x03D4L;
                        uint64_t l_662 = 0x92E3393B0D63C5BCL;
                        uint64_t *l_661 = &l_662;
                        uint64_t **l_660 = &l_661;
                        uint64_t **l_663 = &l_661;
                        int i;
                        ++l_654;
                        l_663 = (((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 2))(4294967295UL, 4294967289UL)).yxxxxyxyyxyyyyxx, ((VECTOR(uint32_t, 8))(l_657.sfe2ac2cc)).s1725451424373020))), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x4FB51D71L, 0x5051F9FCL)))).xyyyyxxxyyxyxxyy))).s0 , ((l_658 , (l_659 = 1UL)) , l_660));
                        l_612 = 0x2B6DD541L;
                    }
                    l_612 |= l_664;
                }
                else
                { /* block id: 384 */
                    int32_t l_665 = 0x73DE4426L;
                    int32_t l_666[3];
                    int32_t l_667[2][10][1] = {{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_666[i] = 1L;
                    l_667[0][5][0] = (l_666[1] = l_665);
                }
                if (l_668)
                { /* block id: 388 */
                    uint32_t l_669 = 4294967295UL;
                    VECTOR(int32_t, 16) l_672 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                    int i;
                    --l_669;
                    l_612 = ((VECTOR(int32_t, 2))(l_672.s84)).hi;
                }
                else
                { /* block id: 391 */
                    uint32_t l_673 = 0x699B9E67L;
                    uint32_t l_676 = 8UL;
                    uint32_t *l_675 = &l_676;
                    uint32_t **l_674 = &l_675;
                    uint32_t **l_677 = &l_675;
                    uint32_t **l_678 = &l_675;
                    uint8_t l_687 = 0x53L;
                    int32_t l_688 = 0x06AB09CAL;
                    uint8_t l_689 = 0x76L;
                    l_678 = (l_673 , (l_677 = l_674));
                    for (l_673 = 0; (l_673 >= 46); ++l_673)
                    { /* block id: 396 */
                        uint32_t l_681[3][8][8] = {{{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL}},{{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL}},{{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL},{0x8C89D464L,1UL,4294967286UL,1UL,1UL,1UL,4294967286UL,1UL}}};
                        VECTOR(int32_t, 2) l_682 = (VECTOR(int32_t, 2))(1L, 1L);
                        VECTOR(int32_t, 16) l_683 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                        uint16_t l_684 = 65534UL;
                        uint8_t l_685[7] = {0x3BL,0UL,0x3BL,0x3BL,0UL,0x3BL,0x3BL};
                        int32_t l_686 = 0x52AC723CL;
                        int i, j, k;
                        l_612 |= l_681[1][2][4];
                        l_686 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(l_682.yyyx)).wzzwywzyxzxwwzzz, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(l_683.sc9f94596)).s61))))).yxxxyxyxxxxxxyxy))).s7c, ((VECTOR(int32_t, 4))(l_684, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((l_612 = l_685[0]), 0x49DC09D1L, (-1L), 0x515B0EC1L)).odd)), 0x338DEED3L)).even))), 7L, 0x76CAB7ABL)).x;
                        l_612 = 0L;
                    }
                    l_689 = (l_688 = (l_612 |= l_687));
                }
            }
        }
        else
        { /* block id: 407 */
            uint32_t l_692 = 0x83A79A03L;
            uint32_t *l_691 = &l_692;
            uint32_t **l_690 = &l_691;
            l_690 = (void*)0;
            for (l_692 = (-25); (l_692 > 8); l_692 = safe_add_func_uint8_t_u_u(l_692, 6))
            { /* block id: 411 */
                int32_t l_695[9] = {0x29F4D792L,1L,0x29F4D792L,0x29F4D792L,1L,0x29F4D792L,0x29F4D792L,1L,0x29F4D792L};
                int16_t l_736 = (-1L);
                int i;
                for (l_695[8] = (-12); (l_695[8] <= 8); l_695[8]++)
                { /* block id: 414 */
                    int32_t l_699[4][6] = {{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}};
                    int32_t *l_698 = &l_699[2][0];
                    int32_t *l_700 = &l_699[0][0];
                    uint16_t l_733 = 1UL;
                    int i, j;
                    l_700 = l_698;
                    for (l_699[2][0] = 24; (l_699[2][0] < 27); l_699[2][0]++)
                    { /* block id: 418 */
                        int8_t l_703[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                        int32_t l_704 = 0x413306ADL;
                        int i;
                        l_704 ^= l_703[0];
                        l_698 = (void*)0;
                    }
                    for (l_699[2][0] = 0; (l_699[2][0] < (-28)); l_699[2][0] = safe_sub_func_int64_t_s_s(l_699[2][0], 6))
                    { /* block id: 424 */
                        int32_t l_707 = 0x16F48A8DL;
                        int32_t l_708[2];
                        uint64_t l_709 = 0UL;
                        uint64_t l_712[3][6][10] = {{{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L},{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L},{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L},{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L},{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L},{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L}},{{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L},{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L},{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L},{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L},{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L},{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L}},{{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L},{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L},{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L},{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L},{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L},{0xA881A6BBB3B5727EL,0xFDAB62D0EFD9AD17L,0x5D724F210B20CA59L,18446744073709551611UL,0xA881A6BBB3B5727EL,0x359A1BC1CA0096E1L,0xFDAB62D0EFD9AD17L,18446744073709551615UL,18446744073709551611UL,0x359A1BC1CA0096E1L}}};
                        uint16_t l_715 = 1UL;
                        uint32_t l_716 = 0UL;
                        int32_t l_717 = 0x685EF914L;
                        uint64_t l_718 = 0xBEDDBE7BC7EC7AEBL;
                        VECTOR(int32_t, 16) l_719 = (VECTOR(int32_t, 16))(0x26772AD9L, (VECTOR(int32_t, 4))(0x26772AD9L, (VECTOR(int32_t, 2))(0x26772AD9L, 0x0D4B6416L), 0x0D4B6416L), 0x0D4B6416L, 0x26772AD9L, 0x0D4B6416L, (VECTOR(int32_t, 2))(0x26772AD9L, 0x0D4B6416L), (VECTOR(int32_t, 2))(0x26772AD9L, 0x0D4B6416L), 0x26772AD9L, 0x0D4B6416L, 0x26772AD9L, 0x0D4B6416L);
                        VECTOR(int32_t, 16) l_720 = (VECTOR(int32_t, 16))(0x7A924B3DL, (VECTOR(int32_t, 4))(0x7A924B3DL, (VECTOR(int32_t, 2))(0x7A924B3DL, 1L), 1L), 1L, 0x7A924B3DL, 1L, (VECTOR(int32_t, 2))(0x7A924B3DL, 1L), (VECTOR(int32_t, 2))(0x7A924B3DL, 1L), 0x7A924B3DL, 1L, 0x7A924B3DL, 1L);
                        uint32_t l_721 = 0UL;
                        VECTOR(int32_t, 8) l_722 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5CB76E91L), 0x5CB76E91L), 0x5CB76E91L, 0L, 0x5CB76E91L);
                        uint8_t l_723 = 249UL;
                        int16_t l_724 = 0x7551L;
                        uint32_t l_725[2][10] = {{4294967295UL,1UL,0x1EB0EADBL,1UL,4294967295UL,4294967295UL,1UL,0x1EB0EADBL,1UL,4294967295UL},{4294967295UL,1UL,0x1EB0EADBL,1UL,4294967295UL,4294967295UL,1UL,0x1EB0EADBL,1UL,4294967295UL}};
                        VECTOR(int32_t, 8) l_726 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 1L), 1L), 1L, (-4L), 1L);
                        uint32_t l_727 = 0xE8F77CDAL;
                        int16_t l_728 = (-1L);
                        uint32_t l_729 = 0xAFAB6328L;
                        uint16_t *l_731 = (void*)0;
                        uint16_t **l_730[3][4] = {{&l_731,&l_731,&l_731,&l_731},{&l_731,&l_731,&l_731,&l_731},{&l_731,&l_731,&l_731,&l_731}};
                        uint16_t **l_732 = &l_731;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_708[i] = 0x5F1A7241L;
                        l_709--;
                        l_712[1][3][6]--;
                        l_729 = (l_719.s2 = ((l_717 = (l_716 ^= l_715)) , ((l_718 , ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(l_719.sb6)).xxxxxxxyxyxxxyyy, ((VECTOR(int32_t, 4))(l_720.s749d)).xyzwwzwzxzyyywyy))).s4) , ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))((-6L), (-3L))), ((VECTOR(int32_t, 8))(l_721, 0x56C76552L, 0L, 0x37794EAFL, 6L, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(0x30207E4BL, (-10L))), ((VECTOR(int32_t, 4))(l_722.s2756)).odd, ((VECTOR(int32_t, 16))(l_723, (-9L), 0x154DA339L, 1L, (l_612 = l_724), ((VECTOR(int32_t, 2))(0x340EC542L, 1L)), 0x53EC581CL, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x5FB25771L, (-7L))).xyyy)).odd)), 1L, 0x652895BBL, l_725[1][9], 1L, (-3L), 0L)).s10, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_726.s5457)).zzzzxxwxxwzyxzxz)).s6f, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 0x39DD1A4DL))))))), (l_726.s2 = l_727), l_728, (-6L), 0x0FC5FAB0L, 0L, 0L)).s49))), 0L)).s51, ((VECTOR(int32_t, 2))(0x67D1A14BL))))).lo)));
                        l_732 = l_730[0][0];
                    }
                    l_733--;
                }
                l_612 ^= l_736;
            }
        }
        l_737 = (void*)0;
        unsigned int result = 0;
        result += l_612;
        atomic_add(&p_904->g_special_values[47 * get_linear_group_id() + 46], result);
    }
    else
    { /* block id: 441 */
        (1 + 1);
    }
    l_741--;
    p_904->g_402 |= (((*l_759) = ((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_904->g_744.yx)).yxxy)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))((p_306 <= (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 6L)))))).yxxxyxxx)).s3 , 0L)), ((VECTOR(uint8_t, 4))((1UL == p_904->g_462.sf), ((VECTOR(uint8_t, 2))(255UL, 1UL)), 254UL)), (((p_306 & ((safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s(p_306)) < ((safe_add_func_int16_t_s_s(((((safe_sub_func_uint32_t_u_u(((*l_758) = ((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(p_904->g_756.wy)).xxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((p_306 , &l_741) != l_757), ((VECTOR(int32_t, 8))(0x7AB5D9EFL)), 0x06F637CEL, 0x0FB13F3DL, (*p_904->g_517), (-6L), 0x5BDD75EAL, 0L, 0x6DDFD2E3L)).s60, ((VECTOR(int32_t, 2))(0x0C26942AL))))), 0L, 2L))))).x, p_306)) ^ p_904->g_338[4])), 0x32F9BADAL)) != p_904->g_502) ^ GROUP_DIVERGE(0, 1)) | 255UL), 0x9276L)) ^ p_904->g_587.s3)), 0x00L)) ^ 0x2CL)) , p_904->g_598[0]) & p_306), ((VECTOR(uint8_t, 4))(2UL)), 0xA0L, 0xA8L, ((VECTOR(uint8_t, 4))(0xE2L)))).lo)).even))).x) || p_306);
    return p_306;
}


/* ------------------------------------------ */
/* 
 * reads : p_904->g_607 p_904->g_608 p_904->g_449 p_904->g_450
 * writes: p_904->g_607
 */
int32_t ** func_308(uint8_t  p_309, struct S0 * p_904)
{ /* block id: 324 */
    int32_t *l_609 = &p_904->g_402;
    int32_t **l_610 = (void*)0;
    (*p_904->g_608) = p_904->g_607[8][3];
    (**p_904->g_449) = l_609;
    return l_610;
}


/* ------------------------------------------ */
/* 
 * reads : p_904->g_476 p_904->g_587
 * writes: p_904->g_502 p_904->g_comm_values p_904->g_496 p_904->g_598 p_904->g_476
 */
int32_t ** func_312(int32_t ** p_313, int32_t ** p_314, struct S0 * p_904)
{ /* block id: 305 */
    int16_t l_563 = 0x32CCL;
    int16_t **l_570 = (void*)0;
    int16_t *l_572[3];
    int16_t **l_571 = &l_572[0];
    VECTOR(int32_t, 16) l_573 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x16F69A82L), 0x16F69A82L), 0x16F69A82L, 1L, 0x16F69A82L, (VECTOR(int32_t, 2))(1L, 0x16F69A82L), (VECTOR(int32_t, 2))(1L, 0x16F69A82L), 1L, 0x16F69A82L, 1L, 0x16F69A82L);
    uint64_t *l_574 = &p_904->g_476;
    VECTOR(int32_t, 16) l_575 = (VECTOR(int32_t, 16))(0x34C9A16EL, (VECTOR(int32_t, 4))(0x34C9A16EL, (VECTOR(int32_t, 2))(0x34C9A16EL, (-10L)), (-10L)), (-10L), 0x34C9A16EL, (-10L), (VECTOR(int32_t, 2))(0x34C9A16EL, (-10L)), (VECTOR(int32_t, 2))(0x34C9A16EL, (-10L)), 0x34C9A16EL, (-10L), 0x34C9A16EL, (-10L));
    VECTOR(int32_t, 16) l_576 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4309B7D3L), 0x4309B7D3L), 0x4309B7D3L, (-1L), 0x4309B7D3L, (VECTOR(int32_t, 2))((-1L), 0x4309B7D3L), (VECTOR(int32_t, 2))((-1L), 0x4309B7D3L), (-1L), 0x4309B7D3L, (-1L), 0x4309B7D3L);
    VECTOR(int32_t, 16) l_577 = (VECTOR(int32_t, 16))(0x40C21F0DL, (VECTOR(int32_t, 4))(0x40C21F0DL, (VECTOR(int32_t, 2))(0x40C21F0DL, 1L), 1L), 1L, 0x40C21F0DL, 1L, (VECTOR(int32_t, 2))(0x40C21F0DL, 1L), (VECTOR(int32_t, 2))(0x40C21F0DL, 1L), 0x40C21F0DL, 1L, 0x40C21F0DL, 1L);
    int32_t l_578 = 1L;
    int8_t *l_581 = (void*)0;
    int8_t *l_582 = &p_904->g_502;
    uint32_t l_583 = 0x66DD63C6L;
    int32_t l_584[6][8] = {{(-1L),1L,1L,(-1L),0x2FDFCC52L,0x1328AB56L,0x4B41EF5FL,0x13180191L},{(-1L),1L,1L,(-1L),0x2FDFCC52L,0x1328AB56L,0x4B41EF5FL,0x13180191L},{(-1L),1L,1L,(-1L),0x2FDFCC52L,0x1328AB56L,0x4B41EF5FL,0x13180191L},{(-1L),1L,1L,(-1L),0x2FDFCC52L,0x1328AB56L,0x4B41EF5FL,0x13180191L},{(-1L),1L,1L,(-1L),0x2FDFCC52L,0x1328AB56L,0x4B41EF5FL,0x13180191L},{(-1L),1L,1L,(-1L),0x2FDFCC52L,0x1328AB56L,0x4B41EF5FL,0x13180191L}};
    int64_t *l_590[1];
    int8_t *l_591 = (void*)0;
    int8_t *l_592[6][6][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    uint32_t **l_595 = &p_904->g_496[0];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_572[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_590[i] = (void*)0;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_904->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 203)), permutations[(safe_mod_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s(l_563, (safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_904->group_1_offset, get_group_id(1), 10), (safe_sub_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(((((*l_571) = &l_563) != (((l_578 ^= (((VECTOR(int32_t, 8))(l_573.s3b1cdadc)).s6 == (((FAKE_DIVERGE(p_904->global_2_offset, get_global_id(2), 10) , l_574) == l_574) > ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_575.sb4b6ed4c)).lo)).wzxxzwyz)).hi, ((VECTOR(int32_t, 8))(l_576.s5bd0700b)).hi, ((VECTOR(int32_t, 2))(l_577.sb2)).xxyy))).w))) | 1UL) , &l_563)) ^ ((l_575.s4 , ((safe_add_func_int8_t_s_s(l_576.s3, ((*l_582) = (-8L)))) <= l_576.s0)) , 2UL)), l_573.s1)), l_583)))))) | p_904->g_476) > l_584[3][0]), 10))][(safe_mod_func_uint32_t_u_u(p_904->tid, 203))]));
    l_577.sf &= l_573.s3;
    p_904->g_598[0] = (safe_mul_func_int8_t_s_s((((GROUP_DIVERGE(1, 1) | (-1L)) , (((((~(l_577.s1 &= (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_904->g_587.s1233766703535566)).s2bc2)).z , (safe_rshift_func_uint8_t_u_u(((p_904->g_comm_values[p_904->tid] = ((void*)0 == l_574)) ^ (-1L)), 4))))) , ((safe_add_func_uint64_t_u_u(((&l_583 != ((*l_595) = &l_583)) , (safe_add_func_int16_t_s_s((l_584[3][1] != ((void*)0 != &p_904->g_465)), 0x190AL))), 1UL)) >= l_584[3][0])) , 1UL) > l_583) | l_563)) , l_563), 0x1CL));
    for (p_904->g_476 = (-4); (p_904->g_476 > 20); p_904->g_476++)
    { /* block id: 319 */
        int32_t *l_601[2][4] = {{&p_904->g_402,&p_904->g_402,&p_904->g_402,&p_904->g_402},{&p_904->g_402,&p_904->g_402,&p_904->g_402,&p_904->g_402}};
        uint8_t l_602 = 0x4BL;
        int i, j;
        ++l_602;
    }
    return p_314;
}


/* ------------------------------------------ */
/* 
 * reads : p_904->g_541 p_904->g_542 p_904->g_476
 * writes:
 */
int32_t ** func_315(uint64_t  p_316, int32_t  p_317, uint32_t  p_318, uint64_t  p_319, uint16_t  p_320, struct S0 * p_904)
{ /* block id: 301 */
    uint32_t *l_537 = (void*)0;
    VECTOR(int8_t, 4) l_540 = (VECTOR(int8_t, 4))(0x7BL, (VECTOR(int8_t, 2))(0x7BL, 0x47L), 0x47L);
    VECTOR(uint32_t, 16) l_555 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x500D3407L), 0x500D3407L), 0x500D3407L, 4294967295UL, 0x500D3407L, (VECTOR(uint32_t, 2))(4294967295UL, 0x500D3407L), (VECTOR(uint32_t, 2))(4294967295UL, 0x500D3407L), 4294967295UL, 0x500D3407L, 4294967295UL, 0x500D3407L);
    uint16_t l_556[3][10] = {{0x87ECL,65533UL,0x824DL,65533UL,0x87ECL,0x87ECL,65533UL,0x824DL,65533UL,0x87ECL},{0x87ECL,65533UL,0x824DL,65533UL,0x87ECL,0x87ECL,65533UL,0x824DL,65533UL,0x87ECL},{0x87ECL,65533UL,0x824DL,65533UL,0x87ECL,0x87ECL,65533UL,0x824DL,65533UL,0x87ECL}};
    int32_t l_557 = 1L;
    int32_t **l_558 = (void*)0;
    int i, j;
    l_557 &= ((-1L) > (safe_lshift_func_uint16_t_u_u(((l_537 != l_537) | ((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(l_540.wxyyxxwwxxxxyyxz)).even, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_904->g_541.sf52f)).even)).xyxxyyyy))))).s1145020261753022, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_904->g_542.s8be800e1)).s44)).yyyxyxxyyxyyyxyy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((p_320 || (p_317 , ((p_316 ^ (((VECTOR(int16_t, 16))(0x1846L, (safe_add_func_uint16_t_u_u(0UL, l_540.x)), ((VECTOR(int16_t, 2))(0x1031L, 0x253CL)), 0x220DL, 0x58D0L, 0x592FL, (-1L), (safe_rshift_func_uint8_t_u_u((((safe_sub_func_int64_t_s_s((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(l_555.s8e)).lo, p_317)), 5)) , l_555.sc) & p_316), 0x6A9CD8B4L)), GROUP_DIVERGE(1, 1))) | p_319) <= 0x67L), p_320)), ((VECTOR(int16_t, 2))((-4L))), (-2L), ((VECTOR(int16_t, 4))((-4L))))).s0 & 0L)) && l_556[1][2]))), 0x3BL, 0x0DL, 0x5FL)).xyzwzxww)).odd)).yyxwzzyy))))).s7312412227607040))))).sb857))))).x, p_904->g_476)) , 0x22L)), 14)));
    return l_558;
}


/* ------------------------------------------ */
/* 
 * reads : p_904->g_414 p_904->g_517 p_904->g_338 p_904->g_519
 * writes: p_904->g_414 p_904->g_338
 */
int64_t  func_325(int32_t  p_326, uint64_t  p_327, struct S0 * p_904)
{ /* block id: 278 */
    int16_t *l_518 = (void*)0;
    int32_t l_533 = 0x6C8212C1L;
    for (p_904->g_414 = 0; (p_904->g_414 == 11); p_904->g_414 = safe_add_func_int8_t_s_s(p_904->g_414, 8))
    { /* block id: 281 */
        (*p_904->g_517) |= (1L & GROUP_DIVERGE(0, 1));
        (*p_904->g_519) = (l_518 != (void*)0);
        if ((atomic_inc(&p_904->g_atomic_input[47 * get_linear_group_id() + 5]) == 5))
        { /* block id: 285 */
            int32_t l_520 = 0x325E7478L;
            int32_t l_531 = 0x77296A27L;
            int64_t l_532 = 1L;
            for (l_520 = 0; (l_520 > (-20)); --l_520)
            { /* block id: 288 */
                int32_t l_523 = 0x57C6E609L;
                int8_t l_524[9] = {0x46L,0x46L,0x46L,0x46L,0x46L,0x46L,0x46L,0x46L,0x46L};
                uint8_t l_525[2];
                int16_t l_526 = (-8L);
                int64_t l_527[8][7][2] = {{{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L}},{{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L}},{{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L}},{{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L}},{{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L}},{{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L}},{{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L}},{{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L},{0x7F809D96D4D14A16L,1L}}};
                int32_t *l_529[3];
                int32_t **l_528 = &l_529[2];
                int32_t **l_530 = &l_529[1];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_525[i] = 0x1AL;
                for (i = 0; i < 3; i++)
                    l_529[i] = &l_523;
                l_530 = ((l_523 , l_524[1]) , (((l_526 ^= l_525[1]) , (l_527[6][5][1] = 0xA7FAE8F1L)) , (l_528 = (void*)0)));
            }
            l_532 = (l_531 &= 0x6499A6A2L);
            unsigned int result = 0;
            result += l_520;
            result += l_531;
            result += l_532;
            atomic_add(&p_904->g_special_values[47 * get_linear_group_id() + 5], result);
        }
        else
        { /* block id: 296 */
            (1 + 1);
        }
    }
    return l_533;
}


/* ------------------------------------------ */
/* 
 * reads : p_904->g_402 p_904->g_384 p_904->g_338
 * writes: p_904->g_496 p_904->g_502 p_904->g_338
 */
uint8_t  func_329(uint64_t  p_330, int32_t ** p_331, struct S0 * p_904)
{ /* block id: 271 */
    VECTOR(uint8_t, 4) l_491 = (VECTOR(uint8_t, 4))(0x2EL, (VECTOR(uint8_t, 2))(0x2EL, 1UL), 1UL);
    uint32_t *l_492[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t **l_493 = &l_492[1];
    uint32_t *l_494[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t **l_495[1][8] = {{&l_494[9],&l_494[0],&l_494[9],&l_494[9],&l_494[0],&l_494[9],&l_494[9],&l_494[0]}};
    int8_t *l_501 = &p_904->g_502;
    VECTOR(uint16_t, 4) l_503 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL);
    uint8_t l_508 = 1UL;
    int64_t *l_509 = (void*)0;
    int32_t l_510 = 0x1F8180CEL;
    int i, j;
    p_904->g_338[4] ^= ((l_510 ^= (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(l_491.wzyyxzwzzxzwxzxz)).s4, ((((((*l_493) = l_492[3]) != (p_904->g_496[0] = l_494[1])) , (l_491.y < (safe_mul_func_uint16_t_u_u(p_904->g_402, (((*l_501) = (safe_mod_func_uint64_t_u_u(18446744073709551610UL, p_330))) , ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_503.zxyxwywxyyyyzyzw)).sb069)).z))))) <= (safe_add_func_uint32_t_u_u((!(p_330 , (safe_add_func_int16_t_s_s(l_503.z, p_904->g_384.y)))), l_508))) < l_508)))) ^ p_330);
    return l_508;
}


/* ------------------------------------------ */
/* 
 * reads : p_904->g_344 p_904->g_345 p_904->g_comm_values p_904->g_338 p_904->l_comm_values p_904->g_384 p_904->g_412 p_904->g_414 p_904->g_402 p_904->g_449 p_904->g_453 p_904->g_393 p_904->g_462 p_904->g_465 p_904->g_476 p_904->g_478
 * writes: p_904->g_345 p_904->g_338 p_904->g_403 p_904->g_412 p_904->g_414 p_904->g_443 p_904->g_453 p_904->g_465 p_904->g_476
 */
int32_t ** func_332(uint32_t  p_333, struct S0 * p_904)
{ /* block id: 215 */
    uint64_t l_340 = 0UL;
    int32_t l_367 = 0x2B4BD69DL;
    VECTOR(uint32_t, 4) l_370 = (VECTOR(uint32_t, 4))(0x84C99681L, (VECTOR(uint32_t, 2))(0x84C99681L, 0xB668D786L), 0xB668D786L);
    int32_t **l_371 = &p_904->g_345;
    VECTOR(uint64_t, 2) l_387 = (VECTOR(uint64_t, 2))(0xB401B501A06F55D3L, 0UL);
    uint32_t l_388 = 0x81D8E029L;
    uint32_t l_389 = 0xD7C6BDDDL;
    VECTOR(int32_t, 8) l_390 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5D2F254EL), 0x5D2F254EL), 0x5D2F254EL, (-1L), 0x5D2F254EL);
    int32_t l_413 = 0x22DBE5DEL;
    uint64_t **l_429 = &p_904->g_421[1][8][1];
    int32_t *l_441[2];
    int8_t l_442 = 0x40L;
    uint64_t l_444 = 0x23A6A72D3CB317A5L;
    int32_t ***l_451 = &p_904->g_450;
    uint16_t *l_452[5][4][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    uint64_t l_485 = 2UL;
    int32_t **l_487 = &l_441[1];
    int32_t **l_488 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_441[i] = (void*)0;
    if (p_333)
    { /* block id: 216 */
        int32_t *l_343 = &p_904->g_338[0];
        for (p_333 = (-25); (p_333 > 59); p_333++)
        { /* block id: 219 */
            int32_t *l_337 = &p_904->g_338[4];
            int32_t *l_339 = &p_904->g_338[4];
            l_340--;
        }
        (*p_904->g_344) = l_343;
    }
    else
    { /* block id: 223 */
        int32_t *l_346[7];
        VECTOR(uint32_t, 8) l_355 = (VECTOR(uint32_t, 8))(0x64468A4DL, (VECTOR(uint32_t, 4))(0x64468A4DL, (VECTOR(uint32_t, 2))(0x64468A4DL, 0xF308100EL), 0xF308100EL), 0xF308100EL, 0x64468A4DL, 0xF308100EL);
        int32_t ***l_372 = &l_371;
        int32_t **l_374 = &l_346[1];
        int32_t ***l_373 = &l_374;
        VECTOR(int8_t, 2) l_383 = (VECTOR(int8_t, 2))(0x14L, 1L);
        uint32_t l_386[2];
        VECTOR(uint8_t, 16) l_408 = (VECTOR(uint8_t, 16))(0xA1L, (VECTOR(uint8_t, 4))(0xA1L, (VECTOR(uint8_t, 2))(0xA1L, 1UL), 1UL), 1UL, 0xA1L, 1UL, (VECTOR(uint8_t, 2))(0xA1L, 1UL), (VECTOR(uint8_t, 2))(0xA1L, 1UL), 0xA1L, 1UL, 0xA1L, 1UL);
        int i;
        for (i = 0; i < 7; i++)
            l_346[i] = &p_904->g_338[1];
        for (i = 0; i < 2; i++)
            l_386[i] = 0x6C651FAFL;
        l_367 ^= (((void*)0 == l_346[5]) , (0x000B51BC157B25B1L | ((func_347(func_350((*p_904->g_344), l_355.s6, (safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(l_340, 5)) , (safe_add_func_uint64_t_u_u(6UL, 0x6502F8B656E355F6L))), FAKE_DIVERGE(p_904->local_0_offset, get_local_id(0), 10))), (((p_333 >= GROUP_DIVERGE(0, 1)) != FAKE_DIVERGE(p_904->group_0_offset, get_group_id(0), 10)) , p_904->g_comm_values[p_904->tid]), p_904), p_904->l_comm_values[(safe_mod_func_uint32_t_u_u(p_904->tid, 203))], p_904) > 0x7AC4B2DB7AA0DB08L) , l_340)));
        l_367 = (FAKE_DIVERGE(p_904->local_2_offset, get_local_id(2), 10) >= ((((safe_mod_func_int64_t_s_s(p_904->l_comm_values[(safe_mod_func_uint32_t_u_u(p_904->tid, 203))], p_904->g_338[4])) | (((((VECTOR(uint32_t, 8))(l_370.xwxwxwxx)).s7 , (((((((*l_372) = l_371) != ((*l_373) = &p_904->g_345)) != p_904->g_338[4]) && p_904->g_338[4]) | ((((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(l_367, (safe_lshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s(p_333, (((((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(l_383.yx)).yyxxxyyxyyyxxyxx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(p_904->g_384.xyxxyyyxyxyxxyxy)).sac, (int8_t)(safe_unary_minus_func_uint8_t_u(6UL))))))).xyxxxxxxyyyyyyxy))).sa29e)).hi, ((VECTOR(int8_t, 2))(0x39L))))).xyxyyyxyxyyxyyyx)), ((VECTOR(int8_t, 16))(0L))))).s2 == 1UL) <= l_386[0]) | l_387.y))) <= l_388), 13)))), l_389)) || GROUP_DIVERGE(1, 1)) && p_904->l_comm_values[(safe_mod_func_uint32_t_u_u(p_904->tid, 203))]) > p_333)) == 0x764FL)) < p_904->g_comm_values[p_904->tid]) , p_333)) >= (*p_904->g_345)) ^ p_904->g_comm_values[p_904->tid]));
        (*p_904->g_345) = (~(0x1C683874L >= ((VECTOR(int32_t, 2))(l_390.s21)).lo));
        for (l_340 = 0; (l_340 != 23); l_340++)
        { /* block id: 244 */
            int8_t l_396 = 0x64L;
            int32_t *l_399[5][5][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
            int8_t *l_400 = (void*)0;
            int8_t *l_401[2][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0}};
            uint64_t *l_404 = (void*)0;
            uint64_t *l_405 = (void*)0;
            VECTOR(uint8_t, 2) l_409 = (VECTOR(uint8_t, 2))(0UL, 1UL);
            uint64_t **l_422 = &p_904->g_421[1][1][2];
            int i, j, k;
            p_904->g_414 &= (((((-6L) < ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(p_904->g_393.sdd)).yyyxyxyx)).s0 | ((safe_mod_func_int64_t_s_s(l_396, (p_904->g_403.x = ((VECTOR(uint64_t, 8))((p_333 >= (p_904->g_402 = (safe_div_func_int16_t_s_s(((void*)0 != l_399[2][4][0]), ((VECTOR(uint16_t, 4))(0x9347L, 1UL, 0x138AL, 65530UL)).w)))), ((VECTOR(uint64_t, 2))(p_904->g_403.yx)), 0x0BCB37DF4D30234BL, 0UL, (**l_374), 0xEFCEC9C3ADEF4DCFL, 0x43F55E2A51895F3AL)).s4))) >= (safe_div_func_uint8_t_u_u((p_904->g_412 |= ((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x01L, 254UL)))).xyyy)).lo, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_408.se656)))).even))).yyyxxxyyyxyyxyxx, ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(l_409.yyxyxxxy)).s22, (uint8_t)((safe_mul_func_int16_t_s_s(((void*)0 == (*l_371)), 0x8A55L)) && p_333)))), ((VECTOR(uint8_t, 2))(0x0AL)), 8UL, GROUP_DIVERGE(2, 1), 0UL, 1UL))))).s2724533067616321))).s9), GROUP_DIVERGE(1, 1))))) , p_333)) >= 0x76L) , l_413) && p_333);
            l_390.s5 |= ((+0x56L) > (safe_rshift_func_uint8_t_u_u(((((((VECTOR(int32_t, 4))((safe_rshift_func_int8_t_s_u((~(safe_sub_func_int32_t_s_s((((*l_422) = p_904->g_421[1][1][2]) == &l_340), ((((((l_371 == (((safe_mod_func_uint32_t_u_u((((p_333 , (*l_372)) == &p_904->g_345) ^ 18446744073709551613UL), 0x230FF9E5L)) && p_904->g_393.sb) , (void*)0)) == (*p_904->g_345)) == 0x26CAA6866BF25087L) > 0x249DL) && FAKE_DIVERGE(p_904->local_2_offset, get_local_id(2), 10)) && p_333)))), p_904->g_412)), (**l_371), 0x748DB43BL, (-1L))).y > 0xFE73E842L) , GROUP_DIVERGE(2, 1)) , l_371) != &p_904->g_345), 2)));
            (**l_373) = l_399[2][4][0];
            (**l_372) = (*l_374);
        }
    }
    l_444 = (safe_lshift_func_int16_t_s_u((((safe_mul_func_uint8_t_u_u((((*p_904->g_344) != &p_904->g_414) || (((((void*)0 != l_429) , l_390.s6) , (safe_add_func_int16_t_s_s(p_904->g_comm_values[p_904->tid], ((p_904->g_443 = ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),VECTOR(int64_t, 8),((VECTOR(int64_t, 8))((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(((~p_333) != GROUP_DIVERGE(2, 1)), (p_904->g_414 &= (((safe_add_func_int64_t_s_s(0x32F874E7586452E8L, (safe_unary_minus_func_int16_t_s(p_904->g_384.y)))) != p_904->g_402) >= p_904->g_338[3])))) == p_333), l_442)) <= FAKE_DIVERGE(p_904->local_2_offset, get_local_id(2), 10)), 0x3C90L)), p_333, ((VECTOR(int64_t, 4))(9L)), 5L, 1L)), ((VECTOR(int64_t, 8))(0x3E3C60A51EEE1859L)), ((VECTOR(int64_t, 8))(0x7C7AD37025C6C5A7L))))).s24, ((VECTOR(int64_t, 2))(0x0DF6A344925A1662L))))).yyyx)).w) | FAKE_DIVERGE(p_904->local_1_offset, get_local_id(1), 10))))) , p_904->g_384.x)), 5UL)) , p_333) <= p_333), 14));
    if (((p_333 ^ ((p_333 < ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((((safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((p_333 && (p_904->g_453 ^= (((l_451 = p_904->g_449) == (void*)0) & p_904->g_412))), ((safe_rshift_func_uint16_t_u_u(((p_333 >= 0x1E2AL) , p_904->g_comm_values[p_904->tid]), p_333)) , 0x82L))), 0x404CAEC7L)) | p_333) < p_333) >= 6L), 18446744073709551608UL, p_333, ((VECTOR(uint64_t, 2))(4UL)), ((VECTOR(uint64_t, 2))(0x9D05AD4E6526E0FBL)), 18446744073709551615UL)).hi)).z) > p_333)) , 7L))
    { /* block id: 260 */
        uint32_t l_458 = 0x87A3140BL;
        uint32_t *l_459 = &l_388;
        int16_t *l_463 = (void*)0;
        int16_t *l_464 = &p_904->g_465;
        int32_t l_466 = 0x5A14FC92L;
        int32_t l_467 = 0x4666EBB9L;
        l_467 &= (safe_rshift_func_uint8_t_u_u((((*l_459) = (p_333 & l_458)) && (~(p_333 && (safe_mul_func_uint16_t_u_u(p_904->g_393.s2, (((p_904->g_412 , &p_904->g_450) == &p_904->g_344) && ((l_466 = ((*l_464) ^= ((VECTOR(int16_t, 8))(p_904->g_462.s7a5ccfe0)).s4)) || 65533UL))))))), 4));
    }
    else
    { /* block id: 265 */
        uint16_t l_470[1][8][6] = {{{0x8CC0L,0UL,0x8CC0L,0x8CC0L,0UL,0x8CC0L},{0x8CC0L,0UL,0x8CC0L,0x8CC0L,0UL,0x8CC0L},{0x8CC0L,0UL,0x8CC0L,0x8CC0L,0UL,0x8CC0L},{0x8CC0L,0UL,0x8CC0L,0x8CC0L,0UL,0x8CC0L},{0x8CC0L,0UL,0x8CC0L,0x8CC0L,0UL,0x8CC0L},{0x8CC0L,0UL,0x8CC0L,0x8CC0L,0UL,0x8CC0L},{0x8CC0L,0UL,0x8CC0L,0x8CC0L,0UL,0x8CC0L},{0x8CC0L,0UL,0x8CC0L,0x8CC0L,0UL,0x8CC0L}}};
        int8_t *l_475[1][9][7] = {{{&l_442,(void*)0,&l_442,(void*)0,&l_442,(void*)0,&l_442},{&l_442,(void*)0,&l_442,(void*)0,&l_442,(void*)0,&l_442},{&l_442,(void*)0,&l_442,(void*)0,&l_442,(void*)0,&l_442},{&l_442,(void*)0,&l_442,(void*)0,&l_442,(void*)0,&l_442},{&l_442,(void*)0,&l_442,(void*)0,&l_442,(void*)0,&l_442},{&l_442,(void*)0,&l_442,(void*)0,&l_442,(void*)0,&l_442},{&l_442,(void*)0,&l_442,(void*)0,&l_442,(void*)0,&l_442},{&l_442,(void*)0,&l_442,(void*)0,&l_442,(void*)0,&l_442},{&l_442,(void*)0,&l_442,(void*)0,&l_442,(void*)0,&l_442}}};
        VECTOR(int32_t, 16) l_477 = (VECTOR(int32_t, 16))(0x5B5B8090L, (VECTOR(int32_t, 4))(0x5B5B8090L, (VECTOR(int32_t, 2))(0x5B5B8090L, 1L), 1L), 1L, 0x5B5B8090L, 1L, (VECTOR(int32_t, 2))(0x5B5B8090L, 1L), (VECTOR(int32_t, 2))(0x5B5B8090L, 1L), 0x5B5B8090L, 1L, 0x5B5B8090L, 1L);
        int32_t **l_486 = (void*)0;
        int i, j, k;
        atomic_min(&p_904->l_atomic_reduction[0], (safe_mod_func_int32_t_s_s(l_470[0][1][3], ((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))((safe_lshift_func_uint8_t_u_s(p_904->g_462.sb, (p_904->g_476 |= l_470[0][1][3]))), (-5L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_477.s04e6)))).wwwwxyxw)), 0x0146134EL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_904->g_478.s527be34f)).s61)), 0x7102CE77L, 0x367A9A95L)), 0x2875712FL)).s9, (8UL ^ l_470[0][1][3]))) & ((p_333 <= (~(safe_mul_func_int16_t_s_s((p_904->g_393.s6 > ((safe_rshift_func_int8_t_s_u(p_904->g_393.sc, (safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0L, (-1L), p_904->g_465, 0x1CL, 6L, 0x4AL, (-1L), 0L)).s6222674012465612)).odd)).s6346212456742065, ((VECTOR(int8_t, 16))(0x7CL))))).se, p_904->g_338[4])))) <= p_904->g_402)), p_333)))) >= l_485)))));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_904->v_collective += p_904->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        return l_486;
    }
    return l_488;
}


/* ------------------------------------------ */
/* 
 * reads : p_904->g_345
 * writes: p_904->g_338
 */
int64_t  func_347(uint32_t  p_348, int32_t  p_349, struct S0 * p_904)
{ /* block id: 234 */
    int16_t l_366[4];
    int i;
    for (i = 0; i < 4; i++)
        l_366[i] = 0x0326L;
    (*p_904->g_345) = l_366[3];
    return l_366[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_904->g_338 p_904->g_344 p_904->g_345
 * writes: p_904->g_345
 */
uint32_t  func_350(int32_t * p_351, uint16_t  p_352, int64_t  p_353, int64_t  p_354, struct S0 * p_904)
{ /* block id: 224 */
    int32_t *l_364 = &p_904->g_338[2];
    int32_t **l_365[5];
    int i;
    for (i = 0; i < 5; i++)
        l_365[i] = (void*)0;
    for (p_352 = 0; (p_352 >= 56); ++p_352)
    { /* block id: 227 */
        if ((*p_351))
            break;
    }
    (*p_904->g_344) = l_364;
    p_351 = (*p_904->g_344);
    (*p_904->g_344) = (*p_904->g_344);
    return p_904->g_338[4];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[203];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 203; i++)
            l_comm_values[i] = 1;
    struct S0 c_905;
    struct S0* p_904 = &c_905;
    struct S0 c_906 = {
        (VECTOR(int16_t, 16))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x66A6L), 0x66A6L), 0x66A6L, 2L, 0x66A6L, (VECTOR(int16_t, 2))(2L, 0x66A6L), (VECTOR(int16_t, 2))(2L, 0x66A6L), 2L, 0x66A6L, 2L, 0x66A6L), // p_904->g_328
        {0x0FCBEA08L,0x500478D6L,0x0FCBEA08L,0x0FCBEA08L,0x500478D6L,0x0FCBEA08L,0x0FCBEA08L}, // p_904->g_338
        &p_904->g_338[3], // p_904->g_345
        &p_904->g_345, // p_904->g_344
        (VECTOR(int8_t, 2))(7L, 0x39L), // p_904->g_384
        (VECTOR(uint32_t, 16))(0xD8E73DA9L, (VECTOR(uint32_t, 4))(0xD8E73DA9L, (VECTOR(uint32_t, 2))(0xD8E73DA9L, 0x0669EDCDL), 0x0669EDCDL), 0x0669EDCDL, 0xD8E73DA9L, 0x0669EDCDL, (VECTOR(uint32_t, 2))(0xD8E73DA9L, 0x0669EDCDL), (VECTOR(uint32_t, 2))(0xD8E73DA9L, 0x0669EDCDL), 0xD8E73DA9L, 0x0669EDCDL, 0xD8E73DA9L, 0x0669EDCDL), // p_904->g_393
        0x7D181D41L, // p_904->g_402
        (VECTOR(uint64_t, 2))(2UL, 1UL), // p_904->g_403
        0L, // p_904->g_412
        0x3B35133EL, // p_904->g_414
        {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}}, // p_904->g_421
        0x338A0751L, // p_904->g_443
        &p_904->g_345, // p_904->g_450
        &p_904->g_450, // p_904->g_449
        0x9232L, // p_904->g_453
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 4L), 4L), 4L, 0L, 4L, (VECTOR(int16_t, 2))(0L, 4L), (VECTOR(int16_t, 2))(0L, 4L), 0L, 4L, 0L, 4L), // p_904->g_462
        1L, // p_904->g_465
        18446744073709551608UL, // p_904->g_476
        (VECTOR(int32_t, 16))(0x3AC62F9AL, (VECTOR(int32_t, 4))(0x3AC62F9AL, (VECTOR(int32_t, 2))(0x3AC62F9AL, 0x027DD871L), 0x027DD871L), 0x027DD871L, 0x3AC62F9AL, 0x027DD871L, (VECTOR(int32_t, 2))(0x3AC62F9AL, 0x027DD871L), (VECTOR(int32_t, 2))(0x3AC62F9AL, 0x027DD871L), 0x3AC62F9AL, 0x027DD871L, 0x3AC62F9AL, 0x027DD871L), // p_904->g_478
        {(void*)0,(void*)0}, // p_904->g_496
        0x7FL, // p_904->g_502
        &p_904->g_338[5], // p_904->g_517
        &p_904->g_338[4], // p_904->g_519
        (VECTOR(int8_t, 16))(0x43L, (VECTOR(int8_t, 4))(0x43L, (VECTOR(int8_t, 2))(0x43L, 0x6EL), 0x6EL), 0x6EL, 0x43L, 0x6EL, (VECTOR(int8_t, 2))(0x43L, 0x6EL), (VECTOR(int8_t, 2))(0x43L, 0x6EL), 0x43L, 0x6EL, 0x43L, 0x6EL), // p_904->g_541
        (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x44L), 0x44L), 0x44L, (-9L), 0x44L, (VECTOR(int8_t, 2))((-9L), 0x44L), (VECTOR(int8_t, 2))((-9L), 0x44L), (-9L), 0x44L, (-9L), 0x44L), // p_904->g_542
        (VECTOR(int8_t, 8))(0x2BL, (VECTOR(int8_t, 4))(0x2BL, (VECTOR(int8_t, 2))(0x2BL, 0x61L), 0x61L), 0x61L, 0x2BL, 0x61L), // p_904->g_587
        {0UL,0UL,0UL}, // p_904->g_598
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int16_t, 2))(1L, (-1L)), (VECTOR(int16_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L)), // p_904->g_606
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_904->g_607
        &p_904->g_607[8][3], // p_904->g_608
        (VECTOR(uint8_t, 2))(0x45L, 0x23L), // p_904->g_744
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x75F450D4L), 0x75F450D4L), // p_904->g_756
        0x20L, // p_904->g_760
        (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 1L), 1L), // p_904->g_788
        &p_904->g_607[0][5], // p_904->g_795
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 6L), 6L), 6L, 1L, 6L), // p_904->g_803
        (VECTOR(uint8_t, 4))(0xC4L, (VECTOR(uint8_t, 2))(0xC4L, 0x2FL), 0x2FL), // p_904->g_804
        (VECTOR(int16_t, 2))((-8L), 0x09CFL), // p_904->g_826
        (VECTOR(int16_t, 8))(0x56BEL, (VECTOR(int16_t, 4))(0x56BEL, (VECTOR(int16_t, 2))(0x56BEL, 0x6BE5L), 0x6BE5L), 0x6BE5L, 0x56BEL, 0x6BE5L), // p_904->g_829
        (VECTOR(int16_t, 8))(0x0F82L, (VECTOR(int16_t, 4))(0x0F82L, (VECTOR(int16_t, 2))(0x0F82L, 2L), 2L), 2L, 0x0F82L, 2L), // p_904->g_830
        {{{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]}},{{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]}},{{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]}},{{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]}},{{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]}},{{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]}},{{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]}},{{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]}},{{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]},{&p_904->g_607[8][3],&p_904->g_607[8][3],&p_904->g_607[8][3]}}}, // p_904->g_879
        &p_904->g_607[8][3], // p_904->g_880
        0, // p_904->v_collective
        sequence_input[get_global_id(0)], // p_904->global_0_offset
        sequence_input[get_global_id(1)], // p_904->global_1_offset
        sequence_input[get_global_id(2)], // p_904->global_2_offset
        sequence_input[get_local_id(0)], // p_904->local_0_offset
        sequence_input[get_local_id(1)], // p_904->local_1_offset
        sequence_input[get_local_id(2)], // p_904->local_2_offset
        sequence_input[get_group_id(0)], // p_904->group_0_offset
        sequence_input[get_group_id(1)], // p_904->group_1_offset
        sequence_input[get_group_id(2)], // p_904->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 203)), permutations[0][get_linear_local_id()])), // p_904->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_905 = c_906;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_904);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_904->g_328.s0, "p_904->g_328.s0", print_hash_value);
    transparent_crc(p_904->g_328.s1, "p_904->g_328.s1", print_hash_value);
    transparent_crc(p_904->g_328.s2, "p_904->g_328.s2", print_hash_value);
    transparent_crc(p_904->g_328.s3, "p_904->g_328.s3", print_hash_value);
    transparent_crc(p_904->g_328.s4, "p_904->g_328.s4", print_hash_value);
    transparent_crc(p_904->g_328.s5, "p_904->g_328.s5", print_hash_value);
    transparent_crc(p_904->g_328.s6, "p_904->g_328.s6", print_hash_value);
    transparent_crc(p_904->g_328.s7, "p_904->g_328.s7", print_hash_value);
    transparent_crc(p_904->g_328.s8, "p_904->g_328.s8", print_hash_value);
    transparent_crc(p_904->g_328.s9, "p_904->g_328.s9", print_hash_value);
    transparent_crc(p_904->g_328.sa, "p_904->g_328.sa", print_hash_value);
    transparent_crc(p_904->g_328.sb, "p_904->g_328.sb", print_hash_value);
    transparent_crc(p_904->g_328.sc, "p_904->g_328.sc", print_hash_value);
    transparent_crc(p_904->g_328.sd, "p_904->g_328.sd", print_hash_value);
    transparent_crc(p_904->g_328.se, "p_904->g_328.se", print_hash_value);
    transparent_crc(p_904->g_328.sf, "p_904->g_328.sf", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_904->g_338[i], "p_904->g_338[i]", print_hash_value);

    }
    transparent_crc(p_904->g_384.x, "p_904->g_384.x", print_hash_value);
    transparent_crc(p_904->g_384.y, "p_904->g_384.y", print_hash_value);
    transparent_crc(p_904->g_393.s0, "p_904->g_393.s0", print_hash_value);
    transparent_crc(p_904->g_393.s1, "p_904->g_393.s1", print_hash_value);
    transparent_crc(p_904->g_393.s2, "p_904->g_393.s2", print_hash_value);
    transparent_crc(p_904->g_393.s3, "p_904->g_393.s3", print_hash_value);
    transparent_crc(p_904->g_393.s4, "p_904->g_393.s4", print_hash_value);
    transparent_crc(p_904->g_393.s5, "p_904->g_393.s5", print_hash_value);
    transparent_crc(p_904->g_393.s6, "p_904->g_393.s6", print_hash_value);
    transparent_crc(p_904->g_393.s7, "p_904->g_393.s7", print_hash_value);
    transparent_crc(p_904->g_393.s8, "p_904->g_393.s8", print_hash_value);
    transparent_crc(p_904->g_393.s9, "p_904->g_393.s9", print_hash_value);
    transparent_crc(p_904->g_393.sa, "p_904->g_393.sa", print_hash_value);
    transparent_crc(p_904->g_393.sb, "p_904->g_393.sb", print_hash_value);
    transparent_crc(p_904->g_393.sc, "p_904->g_393.sc", print_hash_value);
    transparent_crc(p_904->g_393.sd, "p_904->g_393.sd", print_hash_value);
    transparent_crc(p_904->g_393.se, "p_904->g_393.se", print_hash_value);
    transparent_crc(p_904->g_393.sf, "p_904->g_393.sf", print_hash_value);
    transparent_crc(p_904->g_402, "p_904->g_402", print_hash_value);
    transparent_crc(p_904->g_403.x, "p_904->g_403.x", print_hash_value);
    transparent_crc(p_904->g_403.y, "p_904->g_403.y", print_hash_value);
    transparent_crc(p_904->g_412, "p_904->g_412", print_hash_value);
    transparent_crc(p_904->g_414, "p_904->g_414", print_hash_value);
    transparent_crc(p_904->g_443, "p_904->g_443", print_hash_value);
    transparent_crc(p_904->g_453, "p_904->g_453", print_hash_value);
    transparent_crc(p_904->g_462.s0, "p_904->g_462.s0", print_hash_value);
    transparent_crc(p_904->g_462.s1, "p_904->g_462.s1", print_hash_value);
    transparent_crc(p_904->g_462.s2, "p_904->g_462.s2", print_hash_value);
    transparent_crc(p_904->g_462.s3, "p_904->g_462.s3", print_hash_value);
    transparent_crc(p_904->g_462.s4, "p_904->g_462.s4", print_hash_value);
    transparent_crc(p_904->g_462.s5, "p_904->g_462.s5", print_hash_value);
    transparent_crc(p_904->g_462.s6, "p_904->g_462.s6", print_hash_value);
    transparent_crc(p_904->g_462.s7, "p_904->g_462.s7", print_hash_value);
    transparent_crc(p_904->g_462.s8, "p_904->g_462.s8", print_hash_value);
    transparent_crc(p_904->g_462.s9, "p_904->g_462.s9", print_hash_value);
    transparent_crc(p_904->g_462.sa, "p_904->g_462.sa", print_hash_value);
    transparent_crc(p_904->g_462.sb, "p_904->g_462.sb", print_hash_value);
    transparent_crc(p_904->g_462.sc, "p_904->g_462.sc", print_hash_value);
    transparent_crc(p_904->g_462.sd, "p_904->g_462.sd", print_hash_value);
    transparent_crc(p_904->g_462.se, "p_904->g_462.se", print_hash_value);
    transparent_crc(p_904->g_462.sf, "p_904->g_462.sf", print_hash_value);
    transparent_crc(p_904->g_465, "p_904->g_465", print_hash_value);
    transparent_crc(p_904->g_476, "p_904->g_476", print_hash_value);
    transparent_crc(p_904->g_478.s0, "p_904->g_478.s0", print_hash_value);
    transparent_crc(p_904->g_478.s1, "p_904->g_478.s1", print_hash_value);
    transparent_crc(p_904->g_478.s2, "p_904->g_478.s2", print_hash_value);
    transparent_crc(p_904->g_478.s3, "p_904->g_478.s3", print_hash_value);
    transparent_crc(p_904->g_478.s4, "p_904->g_478.s4", print_hash_value);
    transparent_crc(p_904->g_478.s5, "p_904->g_478.s5", print_hash_value);
    transparent_crc(p_904->g_478.s6, "p_904->g_478.s6", print_hash_value);
    transparent_crc(p_904->g_478.s7, "p_904->g_478.s7", print_hash_value);
    transparent_crc(p_904->g_478.s8, "p_904->g_478.s8", print_hash_value);
    transparent_crc(p_904->g_478.s9, "p_904->g_478.s9", print_hash_value);
    transparent_crc(p_904->g_478.sa, "p_904->g_478.sa", print_hash_value);
    transparent_crc(p_904->g_478.sb, "p_904->g_478.sb", print_hash_value);
    transparent_crc(p_904->g_478.sc, "p_904->g_478.sc", print_hash_value);
    transparent_crc(p_904->g_478.sd, "p_904->g_478.sd", print_hash_value);
    transparent_crc(p_904->g_478.se, "p_904->g_478.se", print_hash_value);
    transparent_crc(p_904->g_478.sf, "p_904->g_478.sf", print_hash_value);
    transparent_crc(p_904->g_502, "p_904->g_502", print_hash_value);
    transparent_crc(p_904->g_541.s0, "p_904->g_541.s0", print_hash_value);
    transparent_crc(p_904->g_541.s1, "p_904->g_541.s1", print_hash_value);
    transparent_crc(p_904->g_541.s2, "p_904->g_541.s2", print_hash_value);
    transparent_crc(p_904->g_541.s3, "p_904->g_541.s3", print_hash_value);
    transparent_crc(p_904->g_541.s4, "p_904->g_541.s4", print_hash_value);
    transparent_crc(p_904->g_541.s5, "p_904->g_541.s5", print_hash_value);
    transparent_crc(p_904->g_541.s6, "p_904->g_541.s6", print_hash_value);
    transparent_crc(p_904->g_541.s7, "p_904->g_541.s7", print_hash_value);
    transparent_crc(p_904->g_541.s8, "p_904->g_541.s8", print_hash_value);
    transparent_crc(p_904->g_541.s9, "p_904->g_541.s9", print_hash_value);
    transparent_crc(p_904->g_541.sa, "p_904->g_541.sa", print_hash_value);
    transparent_crc(p_904->g_541.sb, "p_904->g_541.sb", print_hash_value);
    transparent_crc(p_904->g_541.sc, "p_904->g_541.sc", print_hash_value);
    transparent_crc(p_904->g_541.sd, "p_904->g_541.sd", print_hash_value);
    transparent_crc(p_904->g_541.se, "p_904->g_541.se", print_hash_value);
    transparent_crc(p_904->g_541.sf, "p_904->g_541.sf", print_hash_value);
    transparent_crc(p_904->g_542.s0, "p_904->g_542.s0", print_hash_value);
    transparent_crc(p_904->g_542.s1, "p_904->g_542.s1", print_hash_value);
    transparent_crc(p_904->g_542.s2, "p_904->g_542.s2", print_hash_value);
    transparent_crc(p_904->g_542.s3, "p_904->g_542.s3", print_hash_value);
    transparent_crc(p_904->g_542.s4, "p_904->g_542.s4", print_hash_value);
    transparent_crc(p_904->g_542.s5, "p_904->g_542.s5", print_hash_value);
    transparent_crc(p_904->g_542.s6, "p_904->g_542.s6", print_hash_value);
    transparent_crc(p_904->g_542.s7, "p_904->g_542.s7", print_hash_value);
    transparent_crc(p_904->g_542.s8, "p_904->g_542.s8", print_hash_value);
    transparent_crc(p_904->g_542.s9, "p_904->g_542.s9", print_hash_value);
    transparent_crc(p_904->g_542.sa, "p_904->g_542.sa", print_hash_value);
    transparent_crc(p_904->g_542.sb, "p_904->g_542.sb", print_hash_value);
    transparent_crc(p_904->g_542.sc, "p_904->g_542.sc", print_hash_value);
    transparent_crc(p_904->g_542.sd, "p_904->g_542.sd", print_hash_value);
    transparent_crc(p_904->g_542.se, "p_904->g_542.se", print_hash_value);
    transparent_crc(p_904->g_542.sf, "p_904->g_542.sf", print_hash_value);
    transparent_crc(p_904->g_587.s0, "p_904->g_587.s0", print_hash_value);
    transparent_crc(p_904->g_587.s1, "p_904->g_587.s1", print_hash_value);
    transparent_crc(p_904->g_587.s2, "p_904->g_587.s2", print_hash_value);
    transparent_crc(p_904->g_587.s3, "p_904->g_587.s3", print_hash_value);
    transparent_crc(p_904->g_587.s4, "p_904->g_587.s4", print_hash_value);
    transparent_crc(p_904->g_587.s5, "p_904->g_587.s5", print_hash_value);
    transparent_crc(p_904->g_587.s6, "p_904->g_587.s6", print_hash_value);
    transparent_crc(p_904->g_587.s7, "p_904->g_587.s7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_904->g_598[i], "p_904->g_598[i]", print_hash_value);

    }
    transparent_crc(p_904->g_606.s0, "p_904->g_606.s0", print_hash_value);
    transparent_crc(p_904->g_606.s1, "p_904->g_606.s1", print_hash_value);
    transparent_crc(p_904->g_606.s2, "p_904->g_606.s2", print_hash_value);
    transparent_crc(p_904->g_606.s3, "p_904->g_606.s3", print_hash_value);
    transparent_crc(p_904->g_606.s4, "p_904->g_606.s4", print_hash_value);
    transparent_crc(p_904->g_606.s5, "p_904->g_606.s5", print_hash_value);
    transparent_crc(p_904->g_606.s6, "p_904->g_606.s6", print_hash_value);
    transparent_crc(p_904->g_606.s7, "p_904->g_606.s7", print_hash_value);
    transparent_crc(p_904->g_606.s8, "p_904->g_606.s8", print_hash_value);
    transparent_crc(p_904->g_606.s9, "p_904->g_606.s9", print_hash_value);
    transparent_crc(p_904->g_606.sa, "p_904->g_606.sa", print_hash_value);
    transparent_crc(p_904->g_606.sb, "p_904->g_606.sb", print_hash_value);
    transparent_crc(p_904->g_606.sc, "p_904->g_606.sc", print_hash_value);
    transparent_crc(p_904->g_606.sd, "p_904->g_606.sd", print_hash_value);
    transparent_crc(p_904->g_606.se, "p_904->g_606.se", print_hash_value);
    transparent_crc(p_904->g_606.sf, "p_904->g_606.sf", print_hash_value);
    transparent_crc(p_904->g_744.x, "p_904->g_744.x", print_hash_value);
    transparent_crc(p_904->g_744.y, "p_904->g_744.y", print_hash_value);
    transparent_crc(p_904->g_756.x, "p_904->g_756.x", print_hash_value);
    transparent_crc(p_904->g_756.y, "p_904->g_756.y", print_hash_value);
    transparent_crc(p_904->g_756.z, "p_904->g_756.z", print_hash_value);
    transparent_crc(p_904->g_756.w, "p_904->g_756.w", print_hash_value);
    transparent_crc(p_904->g_760, "p_904->g_760", print_hash_value);
    transparent_crc(p_904->g_788.x, "p_904->g_788.x", print_hash_value);
    transparent_crc(p_904->g_788.y, "p_904->g_788.y", print_hash_value);
    transparent_crc(p_904->g_788.z, "p_904->g_788.z", print_hash_value);
    transparent_crc(p_904->g_788.w, "p_904->g_788.w", print_hash_value);
    transparent_crc(p_904->g_803.s0, "p_904->g_803.s0", print_hash_value);
    transparent_crc(p_904->g_803.s1, "p_904->g_803.s1", print_hash_value);
    transparent_crc(p_904->g_803.s2, "p_904->g_803.s2", print_hash_value);
    transparent_crc(p_904->g_803.s3, "p_904->g_803.s3", print_hash_value);
    transparent_crc(p_904->g_803.s4, "p_904->g_803.s4", print_hash_value);
    transparent_crc(p_904->g_803.s5, "p_904->g_803.s5", print_hash_value);
    transparent_crc(p_904->g_803.s6, "p_904->g_803.s6", print_hash_value);
    transparent_crc(p_904->g_803.s7, "p_904->g_803.s7", print_hash_value);
    transparent_crc(p_904->g_804.x, "p_904->g_804.x", print_hash_value);
    transparent_crc(p_904->g_804.y, "p_904->g_804.y", print_hash_value);
    transparent_crc(p_904->g_804.z, "p_904->g_804.z", print_hash_value);
    transparent_crc(p_904->g_804.w, "p_904->g_804.w", print_hash_value);
    transparent_crc(p_904->g_826.x, "p_904->g_826.x", print_hash_value);
    transparent_crc(p_904->g_826.y, "p_904->g_826.y", print_hash_value);
    transparent_crc(p_904->g_829.s0, "p_904->g_829.s0", print_hash_value);
    transparent_crc(p_904->g_829.s1, "p_904->g_829.s1", print_hash_value);
    transparent_crc(p_904->g_829.s2, "p_904->g_829.s2", print_hash_value);
    transparent_crc(p_904->g_829.s3, "p_904->g_829.s3", print_hash_value);
    transparent_crc(p_904->g_829.s4, "p_904->g_829.s4", print_hash_value);
    transparent_crc(p_904->g_829.s5, "p_904->g_829.s5", print_hash_value);
    transparent_crc(p_904->g_829.s6, "p_904->g_829.s6", print_hash_value);
    transparent_crc(p_904->g_829.s7, "p_904->g_829.s7", print_hash_value);
    transparent_crc(p_904->g_830.s0, "p_904->g_830.s0", print_hash_value);
    transparent_crc(p_904->g_830.s1, "p_904->g_830.s1", print_hash_value);
    transparent_crc(p_904->g_830.s2, "p_904->g_830.s2", print_hash_value);
    transparent_crc(p_904->g_830.s3, "p_904->g_830.s3", print_hash_value);
    transparent_crc(p_904->g_830.s4, "p_904->g_830.s4", print_hash_value);
    transparent_crc(p_904->g_830.s5, "p_904->g_830.s5", print_hash_value);
    transparent_crc(p_904->g_830.s6, "p_904->g_830.s6", print_hash_value);
    transparent_crc(p_904->g_830.s7, "p_904->g_830.s7", print_hash_value);
    transparent_crc(p_904->v_collective, "p_904->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 47; i++)
            transparent_crc(p_904->g_special_values[i + 47 * get_linear_group_id()], "p_904->g_special_values[i + 47 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_904->l_comm_values[get_linear_local_id()], "p_904->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_904->g_comm_values[get_linear_group_id() * 203 + get_linear_local_id()], "p_904->g_comm_values[get_linear_group_id() * 203 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
