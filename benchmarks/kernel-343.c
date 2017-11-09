// --atomics 40 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 91,85,1 -l 91,1,1
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

__constant uint32_t permutations[10][91] = {
{50,73,22,5,83,41,84,78,79,74,89,32,76,33,87,42,25,45,86,6,48,88,61,90,85,9,21,35,37,62,70,56,38,0,29,14,59,43,65,31,27,15,17,47,77,52,40,55,81,23,24,26,18,53,69,64,10,71,66,57,46,4,34,2,16,75,49,63,68,36,20,72,13,39,11,3,28,82,60,67,7,80,8,12,58,1,54,19,30,44,51}, // permutation 0
{16,37,39,6,18,61,34,75,30,59,83,80,7,76,65,4,67,11,12,1,31,74,23,15,5,89,48,8,84,20,38,71,66,69,77,56,14,60,2,22,28,64,41,9,50,52,88,42,49,54,36,40,78,19,85,51,46,44,73,26,43,17,90,33,27,21,62,81,3,47,63,82,13,0,72,45,10,25,68,58,87,32,29,55,24,35,70,86,79,53,57}, // permutation 1
{23,65,47,22,84,46,86,2,75,30,32,36,18,83,8,38,25,11,53,61,71,88,58,89,68,39,34,28,19,35,12,60,20,33,9,17,51,13,7,54,5,0,16,62,66,21,90,43,56,4,44,87,77,27,73,82,76,67,6,63,29,41,52,64,80,79,37,69,14,55,72,50,48,59,40,42,57,26,70,3,24,1,31,85,15,74,10,81,49,78,45}, // permutation 2
{87,47,13,76,28,90,1,49,35,56,8,64,71,58,18,55,72,7,50,12,24,67,32,16,70,83,74,44,51,30,61,48,4,17,46,34,45,33,54,73,75,3,14,39,85,43,84,52,65,27,82,26,20,60,31,66,36,10,6,62,2,80,79,59,77,42,81,53,63,69,37,9,23,11,40,22,89,5,57,15,0,21,19,41,38,29,88,86,68,78,25}, // permutation 3
{59,23,38,49,16,46,29,35,5,56,88,81,24,79,28,32,47,86,45,53,90,58,61,55,52,64,41,11,25,19,50,9,17,14,85,82,6,7,44,37,39,73,68,20,75,48,2,1,54,15,21,40,30,89,60,26,36,70,3,84,12,63,31,72,77,65,83,33,71,76,0,8,4,66,74,22,10,78,51,13,57,42,43,80,62,69,34,27,87,67,18}, // permutation 4
{70,65,35,9,84,82,41,50,22,45,34,54,76,90,52,51,28,62,36,0,80,83,37,47,59,26,24,15,68,43,25,73,56,14,1,13,64,78,69,63,48,23,3,81,71,58,57,32,20,16,4,40,30,38,6,61,85,33,5,19,8,21,67,74,75,55,86,87,79,7,89,17,39,10,49,72,31,29,27,77,42,53,44,60,11,66,46,88,18,12,2}, // permutation 5
{79,3,81,85,44,16,21,33,87,15,19,2,47,83,11,39,9,61,25,58,29,8,26,37,24,14,23,55,82,30,69,6,52,31,88,68,17,72,59,1,60,80,5,75,51,43,74,28,86,38,48,62,73,84,20,77,41,53,46,45,76,4,66,56,64,10,7,67,50,32,35,36,63,54,78,70,57,34,90,12,89,0,42,22,40,71,13,49,18,27,65}, // permutation 6
{1,22,6,28,74,68,56,29,38,67,63,90,52,4,69,13,55,57,37,46,51,40,75,11,18,44,60,58,78,79,59,84,9,65,50,62,26,42,3,31,49,20,19,86,14,66,43,73,34,25,32,88,83,30,17,81,8,15,89,48,53,5,85,41,71,0,7,77,72,76,10,70,61,82,21,80,87,27,24,36,35,2,54,23,16,33,64,45,47,39,12}, // permutation 7
{17,27,81,74,33,80,14,18,41,82,67,64,77,63,76,16,79,48,90,59,6,11,66,86,89,45,28,72,57,12,78,7,85,52,71,4,9,70,20,38,25,3,54,44,51,40,35,30,26,15,62,50,22,88,10,73,34,24,46,5,83,23,13,58,61,32,43,60,29,39,37,1,49,56,68,19,53,0,87,36,8,31,84,69,2,75,42,21,65,55,47}, // permutation 8
{40,72,10,30,71,46,2,61,1,8,15,56,13,75,52,58,0,38,9,19,64,33,36,83,70,59,18,81,25,85,78,89,5,16,45,39,17,49,74,51,48,88,62,54,23,26,43,65,4,28,84,76,53,73,50,60,27,41,7,63,79,69,20,3,57,24,12,77,22,67,14,11,42,82,68,55,29,6,80,21,47,87,66,35,86,44,31,90,32,37,34} // permutation 9
};

// Seed: 1880298032

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   uint8_t  f1;
   volatile uint32_t  f2;
   uint8_t  f3;
   uint64_t  f4;
   int8_t  f5;
   volatile uint32_t  f6;
};

struct S1 {
   volatile uint64_t  f0;
};

union U2 {
   int32_t  f0;
   uint16_t  f1;
   volatile int8_t * volatile  f2;
   struct S0  f3;
};

struct S3 {
    int32_t g_5[1];
    int32_t g_6;
    volatile int32_t g_13[9][5];
    volatile int32_t g_14;
    volatile int32_t g_15[2][7][10];
    int32_t g_16;
    volatile VECTOR(uint32_t, 4) g_35;
    int32_t g_39;
    int8_t g_49;
    int8_t *g_48;
    int64_t g_80[10];
    int8_t **g_86;
    volatile int8_t g_90;
    volatile int8_t * volatile g_89;
    volatile int8_t * volatile *g_88;
    uint64_t g_92;
    uint16_t g_116;
    uint16_t g_120;
    uint32_t g_126;
    int16_t g_136;
    uint8_t g_137;
    VECTOR(uint8_t, 16) g_143;
    uint8_t g_147;
    VECTOR(uint16_t, 16) g_152;
    int32_t g_154;
    uint8_t g_156[7];
    uint32_t g_161;
    uint32_t g_165[9][1];
    VECTOR(int8_t, 4) g_202;
    VECTOR(int16_t, 2) g_251;
    int64_t g_255;
    int8_t *g_261;
    volatile struct S1 g_272[3][2];
    int16_t *g_277;
    int32_t * volatile g_287;
    volatile union U2 g_289;
    struct S0 g_290;
    uint32_t g_304;
    int32_t * volatile g_306;
    volatile struct S1 g_311[8][10][3];
    int16_t **g_327;
    int16_t *** volatile g_326;
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
int8_t  func_1(struct S3 * p_329);
int32_t * func_19(uint32_t  p_20, struct S3 * p_329);
int16_t  func_23(int8_t * p_24, int8_t * p_25, int16_t  p_26, int32_t  p_27, uint64_t  p_28, struct S3 * p_329);
int8_t * func_29(int32_t  p_30, int32_t  p_31, uint32_t  p_32, struct S3 * p_329);
int8_t * func_33(int32_t  p_34, struct S3 * p_329);
uint32_t  func_54(int32_t  p_55, int8_t ** p_56, struct S3 * p_329);
int32_t * func_57(int8_t ** p_58, struct S3 * p_329);
int16_t  func_61(int32_t  p_62, int32_t  p_63, int32_t * p_64, struct S3 * p_329);
int32_t * func_66(int32_t * p_67, int16_t  p_68, struct S3 * p_329);
uint64_t  func_76(int8_t ** p_77, struct S3 * p_329);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_329->g_5 p_329->g_6 p_329->l_comm_values p_329->g_16 p_329->g_13 p_329->g_48 p_329->g_14 p_329->g_39 p_329->g_comm_values p_329->g_80 p_329->g_86 p_329->g_88 p_329->g_92 p_329->g_137 p_329->g_161 p_329->g_120 p_329->g_143 p_329->g_255 p_329->g_261 p_329->g_152 p_329->g_272 p_329->g_49 p_329->g_136 p_329->g_289 p_329->g_290 p_329->g_202 p_329->g_306 p_329->g_326 p_329->g_89 p_329->g_90
 * writes: p_329->g_5 p_329->g_6 p_329->g_16 p_329->g_48 p_329->g_80 p_329->g_86 p_329->g_92 p_329->g_39 p_329->g_120 p_329->g_137 p_329->g_165 p_329->g_116 p_329->g_126 p_329->g_136 p_329->g_156 p_329->g_255 p_329->g_277 p_329->g_147 p_329->g_261 p_329->g_290 p_329->g_304 p_329->g_327
 */
int8_t  func_1(struct S3 * p_329)
{ /* block id: 4 */
    int32_t *l_2 = (void*)0;
    int32_t *l_3 = (void*)0;
    int32_t *l_4 = (void*)0;
    VECTOR(int32_t, 2) l_9 = (VECTOR(int32_t, 2))(6L, 0x0F6C218EL);
    VECTOR(uint64_t, 4) l_312 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL), 0UL);
    int8_t **l_316[7][1];
    uint32_t l_328 = 0x122984D5L;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            l_316[i][j] = (void*)0;
    }
    p_329->g_5[0] |= 0x565E08CCL;
    for (p_329->g_6 = 18; (p_329->g_6 > (-6)); p_329->g_6 = safe_sub_func_uint16_t_u_u(p_329->g_6, 8))
    { /* block id: 8 */
        VECTOR(int64_t, 4) l_10 = (VECTOR(int64_t, 4))(0x09B58331C587C7ABL, (VECTOR(int64_t, 2))(0x09B58331C587C7ABL, 0x5D7770B168F928D9L), 0x5D7770B168F928D9L);
        int i;
        l_10.w ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_9.yyyxyxyx)).s6766317372232737)).se;
        return p_329->l_comm_values[(safe_mod_func_uint32_t_u_u(p_329->tid, 91))];
    }
    for (p_329->g_6 = 0; (p_329->g_6 >= (-14)); --p_329->g_6)
    { /* block id: 14 */
        uint64_t l_315[7][6][5] = {{{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL}},{{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL}},{{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL}},{{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL}},{{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL}},{{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL}},{{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL},{0x2D31B66011E23A6EL,5UL,0xEBDD09BC50419C6EL,0UL,0UL}}};
        int32_t l_319[7][9][3] = {{{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L}},{{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L}},{{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L}},{{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L}},{{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L}},{{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L}},{{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L},{(-6L),(-1L),0x6BBD7109L}}};
        int16_t **l_325[6][5] = {{&p_329->g_277,(void*)0,&p_329->g_277,&p_329->g_277,(void*)0},{&p_329->g_277,(void*)0,&p_329->g_277,&p_329->g_277,(void*)0},{&p_329->g_277,(void*)0,&p_329->g_277,&p_329->g_277,(void*)0},{&p_329->g_277,(void*)0,&p_329->g_277,&p_329->g_277,(void*)0},{&p_329->g_277,(void*)0,&p_329->g_277,&p_329->g_277,(void*)0},{&p_329->g_277,(void*)0,&p_329->g_277,&p_329->g_277,(void*)0}};
        int i, j, k;
        for (p_329->g_16 = (-11); (p_329->g_16 > (-12)); p_329->g_16--)
        { /* block id: 17 */
            int32_t **l_308 = &l_2;
            int32_t l_320 = 0x4A4684CCL;
            int32_t l_321[1];
            uint32_t l_322[3][5] = {{0xC60CBB4FL,0xC60CBB4FL,0xBFBE83BFL,4294967294UL,0xB074A68DL},{0xC60CBB4FL,0xC60CBB4FL,0xBFBE83BFL,4294967294UL,0xB074A68DL},{0xC60CBB4FL,0xC60CBB4FL,0xBFBE83BFL,4294967294UL,0xB074A68DL}};
            int i, j;
            for (i = 0; i < 1; i++)
                l_321[i] = 2L;
            (*l_308) = func_19(p_329->g_13[7][3], p_329);
            if ((((VECTOR(uint64_t, 16))(18446744073709551606UL, ((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 2))(18446744073709551615UL, 1UL)).xyyyyxyx, ((VECTOR(uint64_t, 2))(7UL, 0x371D9B8707CB7B7EL)).yyxyyxxx))), (~(safe_mul_func_int8_t_s_s(((p_329->g_311[1][4][1] , ((0L == (*p_329->g_306)) > 0x976DL)) > ((**l_308) ^ ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_312.wx)).yyxyxyxy)).s4)), (safe_lshift_func_uint8_t_u_s((((!((((*p_329->g_48) ^ l_315[3][5][3]) || (((-4L) && (l_316[4][0] == l_316[4][0])) > 0x2CL)) != GROUP_DIVERGE(1, 1))) == (**l_308)) & p_329->g_comm_values[p_329->tid]), 2))))), 0xA78C10EF601095B6L, 1UL, 5UL, p_329->g_156[3], 0xFBD9CE2155AAE28EL, 0x201184098E15A506L)).s6 > (*l_2)))
            { /* block id: 155 */
                int32_t *l_317 = &p_329->g_39;
                int32_t *l_318[6] = {&p_329->g_39,&p_329->g_39,&p_329->g_39,&p_329->g_39,&p_329->g_39,&p_329->g_39};
                int i;
                l_322[2][2]++;
            }
            else
            { /* block id: 157 */
                (*p_329->g_326) = l_325[3][0];
            }
        }
        return (*p_329->g_89);
    }
    return l_328;
}


/* ------------------------------------------ */
/* 
 * reads : p_329->g_35 p_329->g_48 p_329->g_14 p_329->g_6 p_329->l_comm_values p_329->g_39 p_329->g_comm_values p_329->g_80 p_329->g_86 p_329->g_88 p_329->g_5 p_329->g_92 p_329->g_116 p_329->g_120 p_329->g_49 p_329->g_137 p_329->g_143 p_329->g_152 p_329->g_156 p_329->g_161 p_329->g_16 p_329->g_202 p_329->g_126 p_329->g_136 p_329->g_251 p_329->g_255 p_329->g_261 p_329->g_272 p_329->g_289 p_329->g_290 p_329->g_13 p_329->g_306
 * writes: p_329->g_48 p_329->g_80 p_329->g_86 p_329->g_92 p_329->g_39 p_329->g_116 p_329->g_120 p_329->g_126 p_329->g_49 p_329->g_137 p_329->g_147 p_329->g_156 p_329->g_165 p_329->g_136 p_329->g_255 p_329->g_277 p_329->g_261 p_329->g_290 p_329->g_304
 */
int32_t * func_19(uint32_t  p_20, struct S3 * p_329)
{ /* block id: 18 */
    VECTOR(uint32_t, 8) l_36 = (VECTOR(uint32_t, 8))(0xA2AE39B9L, (VECTOR(uint32_t, 4))(0xA2AE39B9L, (VECTOR(uint32_t, 2))(0xA2AE39B9L, 0x6B35ED35L), 0x6B35ED35L), 0x6B35ED35L, 0xA2AE39B9L, 0x6B35ED35L);
    VECTOR(uint32_t, 4) l_37 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967287UL), 4294967287UL);
    int8_t **l_50 = &p_329->g_48;
    int8_t *l_51[5][3][8] = {{{&p_329->g_49,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49},{&p_329->g_49,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49},{&p_329->g_49,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49}},{{&p_329->g_49,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49},{&p_329->g_49,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49},{&p_329->g_49,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49}},{{&p_329->g_49,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49},{&p_329->g_49,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49},{&p_329->g_49,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49}},{{&p_329->g_49,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49},{&p_329->g_49,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49},{&p_329->g_49,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49}},{{&p_329->g_49,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49},{&p_329->g_49,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49},{&p_329->g_49,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49,(void*)0,&p_329->g_49}}};
    int16_t l_262 = 0L;
    int32_t *l_307 = &p_329->g_16;
    int i, j, k;
    (*p_329->g_306) = (safe_add_func_int16_t_s_s(func_23(func_29(p_20, ((((*l_50) = func_33((((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0xDD038CF4L, 7UL)).xxxxxyyx)).s47)).xyxyxyyyxxyyyyyy, ((VECTOR(uint32_t, 4))(p_329->g_35.xzyz)).xzywxywzxxwzxxzx))).s0 | ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 16))(l_36.s7544476370062753)).s59))), ((VECTOR(uint32_t, 16))(l_37.xwyzzxwyyzywxywy)).s5b))).odd), p_329)) == l_51[4][0][7]) , (safe_div_func_uint64_t_u_u((p_329->g_14 < 0x36L), p_329->g_6))), func_54(((l_36.s3 | p_20) & (&p_329->g_16 == &p_329->g_6)), &l_51[4][0][7], p_329), p_329), p_329->g_261, p_329->g_152.s7, l_262, p_20, p_329), p_20));
    return l_307;
}


/* ------------------------------------------ */
/* 
 * reads : p_329->g_5 p_329->g_272 p_329->g_120 p_329->g_48 p_329->g_49 p_329->g_136 p_329->g_289 p_329->g_290 p_329->g_13 p_329->g_39 p_329->g_202
 * writes: p_329->g_277 p_329->g_120 p_329->g_147 p_329->g_261 p_329->g_39 p_329->g_290 p_329->g_136 p_329->g_304
 */
int16_t  func_23(int8_t * p_24, int8_t * p_25, int16_t  p_26, int32_t  p_27, uint64_t  p_28, struct S3 * p_329)
{ /* block id: 134 */
    uint32_t l_263[1];
    int16_t *l_276 = &p_329->g_136;
    int16_t **l_275[4][5][4] = {{{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276}},{{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276}},{{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276}},{{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276},{&l_276,&l_276,&l_276,&l_276}}};
    uint16_t *l_278 = &p_329->g_120;
    VECTOR(int8_t, 16) l_281 = (VECTOR(int8_t, 16))(0x75L, (VECTOR(int8_t, 4))(0x75L, (VECTOR(int8_t, 2))(0x75L, (-1L)), (-1L)), (-1L), 0x75L, (-1L), (VECTOR(int8_t, 2))(0x75L, (-1L)), (VECTOR(int8_t, 2))(0x75L, (-1L)), 0x75L, (-1L), 0x75L, (-1L));
    uint8_t *l_284 = &p_329->g_147;
    int8_t **l_285[8][10][3] = {{{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261}},{{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261}},{{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261}},{{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261}},{{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261}},{{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261}},{{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261}},{{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261},{&p_329->g_48,&p_329->g_261,&p_329->g_261}}};
    int8_t *l_286 = (void*)0;
    int32_t *l_288 = &p_329->g_39;
    struct S0 *l_291[6] = {&p_329->g_290,&p_329->g_290,&p_329->g_290,&p_329->g_290,&p_329->g_290,&p_329->g_290};
    int32_t l_305[6][3] = {{0x5AB965B3L,0x5AB965B3L,0x7A1AFC6BL},{0x5AB965B3L,0x5AB965B3L,0x7A1AFC6BL},{0x5AB965B3L,0x5AB965B3L,0x7A1AFC6BL},{0x5AB965B3L,0x5AB965B3L,0x7A1AFC6BL},{0x5AB965B3L,0x5AB965B3L,0x7A1AFC6BL},{0x5AB965B3L,0x5AB965B3L,0x7A1AFC6BL}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_263[i] = 0x01C5CEDBL;
    (*l_288) = (l_263[0] && (safe_lshift_func_uint8_t_u_s((safe_div_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((((VECTOR(int64_t, 2))((-1L), 0x2E9029FDCDEE3D4DL)).odd ^ (safe_mod_func_uint32_t_u_u(p_329->g_5[0], ((p_24 != (p_329->g_272[1][1] , (p_329->g_261 = (l_286 = func_29((((*l_278) |= (safe_lshift_func_uint8_t_u_s(l_263[0], ((p_329->g_277 = (void*)0) == (void*)0)))) | p_26), (((*l_284) = (safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_281.sc41c65e760d366c3)).s5, (safe_div_func_uint64_t_u_u(p_28, p_27))))) || (*p_329->g_48)), l_263[0], p_329))))) || (-1L))))), p_329->g_136)) != p_28), 0x3B46L)), (*p_329->g_48))));
    p_329->g_290 = (p_329->g_272[1][1] , (p_329->g_289 , p_329->g_290));
    if ((atomic_inc(&p_329->l_atomic_input[1]) == 6))
    { /* block id: 143 */
        int32_t l_293 = 0x65D6A2F6L;
        int32_t *l_292 = &l_293;
        int32_t *l_294 = (void*)0;
        l_294 = l_292;
        unsigned int result = 0;
        result += l_293;
        atomic_add(&p_329->l_special_values[1], result);
    }
    else
    { /* block id: 145 */
        (1 + 1);
    }
    (*l_288) = ((0x15L > (p_329->g_13[8][0] != (safe_add_func_uint64_t_u_u(((void*)0 != &p_329->g_277), FAKE_DIVERGE(p_329->local_2_offset, get_local_id(2), 10))))) || ((((p_329->g_304 = (((safe_rshift_func_int8_t_s_u((*l_288), (safe_unary_minus_func_uint32_t_u((*l_288))))) > (((*l_276) = (((p_27 >= 247UL) == (safe_mul_func_int16_t_s_s(((p_329->g_202.x < 0x664D1F4282519BD8L) == 7L), 65535UL))) == 0x8C76L)) != p_27)) , p_26)) , l_305[4][1]) < 0UL) || 1L));
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_29(int32_t  p_30, int32_t  p_31, uint32_t  p_32, struct S3 * p_329)
{ /* block id: 131 */
    int32_t *l_259[3];
    int32_t **l_258 = &l_259[2];
    int8_t *l_260 = &p_329->g_49;
    int i;
    for (i = 0; i < 3; i++)
        l_259[i] = &p_329->g_6;
    (*l_258) = (void*)0;
    return l_260;
}


/* ------------------------------------------ */
/* 
 * reads : p_329->g_48
 * writes:
 */
int8_t * func_33(int32_t  p_34, struct S3 * p_329)
{ /* block id: 19 */
    int32_t *l_38 = &p_329->g_39;
    int32_t *l_40 = (void*)0;
    int32_t *l_41[5] = {&p_329->g_39,&p_329->g_39,&p_329->g_39,&p_329->g_39,&p_329->g_39};
    VECTOR(uint64_t, 2) l_42 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL);
    uint8_t l_45 = 0xE5L;
    int i;
    l_42.y--;
    l_45++;
    return p_329->g_48;
}


/* ------------------------------------------ */
/* 
 * reads : p_329->l_comm_values p_329->g_39 p_329->g_comm_values p_329->g_80 p_329->g_86 p_329->g_88 p_329->g_5 p_329->g_92 p_329->g_6 p_329->g_116 p_329->g_120 p_329->g_49 p_329->g_137 p_329->g_143 p_329->g_152 p_329->g_156 p_329->g_161 p_329->g_16 p_329->g_202 p_329->g_126 p_329->g_136 p_329->g_251 p_329->g_255
 * writes: p_329->g_80 p_329->g_86 p_329->g_92 p_329->g_39 p_329->g_116 p_329->g_120 p_329->g_126 p_329->g_49 p_329->g_137 p_329->g_147 p_329->g_156 p_329->g_165 p_329->g_136 p_329->g_255
 */
uint32_t  func_54(int32_t  p_55, int8_t ** p_56, struct S3 * p_329)
{ /* block id: 24 */
    uint8_t l_65 = 0UL;
    int32_t l_73 = (-1L);
    int64_t *l_78 = (void*)0;
    int64_t *l_79 = &p_329->g_80[7];
    int32_t l_81 = (-6L);
    int8_t ***l_87[9] = {(void*)0,&p_329->g_86,(void*)0,(void*)0,&p_329->g_86,(void*)0,(void*)0,&p_329->g_86,(void*)0};
    uint64_t *l_91 = &p_329->g_92;
    int64_t *l_254 = &p_329->g_255;
    int32_t *l_257 = &l_73;
    int i;
    l_257 = func_57((((((*l_254) |= (safe_mul_func_int8_t_s_s((func_61(l_65, p_55, func_66(&p_329->g_16, ((p_55 && (safe_sub_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((l_73 = p_329->l_comm_values[(safe_mod_func_uint32_t_u_u(p_329->tid, 91))]), (safe_sub_func_uint64_t_u_u(func_76(((p_329->g_39 <= ((((*l_79) &= p_329->g_comm_values[p_329->tid]) , (l_81 = 5L)) && (((*l_91) &= (safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s((((p_329->g_86 = (p_56 = p_329->g_86)) != p_329->g_88) ^ p_329->g_5[0]), p_55)), p_55))) == p_329->g_6))) , p_329->g_86), p_329), p_329->g_5[0])))), 0UL))) > 65530UL), p_329), p_329) > GROUP_DIVERGE(1, 1)), p_329->g_143.s2))) > l_65) != GROUP_DIVERGE(2, 1)) , (void*)0), p_329);
    return (*l_257);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_57(int8_t ** p_58, struct S3 * p_329)
{ /* block id: 127 */
    int32_t *l_256 = &p_329->g_39;
    return l_256;
}


/* ------------------------------------------ */
/* 
 * reads : p_329->g_251 p_329->g_86 p_329->g_6
 * writes: p_329->g_156 p_329->g_39
 */
int16_t  func_61(int32_t  p_62, int32_t  p_63, int32_t * p_64, struct S3 * p_329)
{ /* block id: 119 */
    int64_t l_235[5] = {0x0CF908FA464EB96BL,0x0CF908FA464EB96BL,0x0CF908FA464EB96BL,0x0CF908FA464EB96BL,0x0CF908FA464EB96BL};
    VECTOR(int32_t, 4) l_238 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1C98CFF1L), 0x1C98CFF1L);
    int16_t *l_245 = &p_329->g_136;
    uint8_t *l_246[5][5][9] = {{{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]}},{{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]}},{{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]}},{{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]}},{{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]},{&p_329->g_156[5],&p_329->g_156[1],(void*)0,&p_329->g_137,&p_329->g_156[6],&p_329->g_137,&p_329->g_137,&p_329->g_156[2],&p_329->g_156[5]}}};
    int32_t l_252 = 2L;
    int32_t *l_253[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_253[i] = &p_329->g_39;
    p_329->g_39 = ((l_235[4] |= (-6L)) | (p_63 = (l_252 = (FAKE_DIVERGE(p_329->group_2_offset, get_group_id(2), 10) > (((safe_lshift_func_int16_t_s_u((((VECTOR(int32_t, 8))(l_238.ywzzzywy)).s0 , (safe_rshift_func_int8_t_s_s((((FAKE_DIVERGE(p_329->local_2_offset, get_local_id(2), 10) , (safe_lshift_func_uint16_t_u_u(((4294967295UL > (p_63 < ((safe_lshift_func_int16_t_s_s((((l_245 == &p_329->g_136) < (p_329->g_156[5] = p_63)) <= (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(0x9CC2L, 0UL)).even, (((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_329->g_251.yx)).yxyx)).z, 0x5D2BL)) ^ 0xBA42434BL) < ((p_329->g_86 == (void*)0) & l_238.x))))), p_63)) & 0x61L))) || 9UL), GROUP_DIVERGE(1, 1)))) ^ 0x2CL) , l_238.y), p_63))), 14)) >= l_238.z) || l_238.x)))));
    return p_329->g_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_329->g_comm_values p_329->g_116 p_329->g_120 p_329->g_5 p_329->g_92 p_329->g_49 p_329->g_80 p_329->g_137 p_329->g_143 p_329->g_152 p_329->g_156 p_329->g_161 p_329->g_16 p_329->g_39 p_329->g_202 p_329->g_126 p_329->g_136 p_329->l_comm_values
 * writes: p_329->g_116 p_329->g_120 p_329->g_126 p_329->g_49 p_329->g_137 p_329->g_147 p_329->g_156 p_329->g_92 p_329->g_165 p_329->g_39 p_329->g_136
 */
int32_t * func_66(int32_t * p_67, int16_t  p_68, struct S3 * p_329)
{ /* block id: 34 */
    uint32_t l_95 = 4294967295UL;
    VECTOR(int16_t, 2) l_98 = (VECTOR(int16_t, 2))(0x0858L, (-3L));
    int8_t ***l_103 = &p_329->g_86;
    uint16_t *l_115 = &p_329->g_116;
    uint16_t *l_119 = &p_329->g_120;
    uint32_t *l_123 = (void*)0;
    uint32_t *l_124 = (void*)0;
    uint32_t *l_125 = &p_329->g_126;
    int32_t l_135 = 0x348E1355L;
    VECTOR(uint8_t, 2) l_144 = (VECTOR(uint8_t, 2))(0x93L, 0x94L);
    VECTOR(uint16_t, 2) l_153 = (VECTOR(uint16_t, 2))(0x8CBDL, 0xF3E2L);
    VECTOR(int32_t, 2) l_199 = (VECTOR(int32_t, 2))(0x2E978212L, 0x34368CCAL);
    int32_t l_218 = 0x2E694BA9L;
    VECTOR(uint16_t, 16) l_233 = (VECTOR(uint16_t, 16))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0xB95DL), 0xB95DL), 0xB95DL, 65529UL, 0xB95DL, (VECTOR(uint16_t, 2))(65529UL, 0xB95DL), (VECTOR(uint16_t, 2))(65529UL, 0xB95DL), 65529UL, 0xB95DL, 65529UL, 0xB95DL);
    int i;
    ++l_95;
    if (((((VECTOR(int16_t, 2))(l_98.yy)).hi < (0x9CL ^ ((GROUP_DIVERGE(1, 1) == ((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(2UL, (p_329->g_comm_values[p_329->tid] != (l_103 == (void*)0)))), l_95)) == ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))((p_68 | (safe_sub_func_int32_t_s_s((safe_div_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((((p_329->g_49 ^= ((safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_int32_t_s((((*l_119) ^= ((*l_115)++)) & 5L))) && (safe_mod_func_uint64_t_u_u(((((*l_125) = p_329->g_5[0]) , p_329->g_5[0]) || 0x1E5EACDDF55BC500L), p_329->g_92))), l_98.y)) , 0x49L)) > 1UL) < 0L) >= l_95), p_329->g_80[6])), GROUP_DIVERGE(0, 1))) , 1L), p_68)), 0x7C1BAD84L))), 0x2EFDF31CL, 0x107391EFL, ((VECTOR(uint32_t, 4))(4UL)), 0x3BF28D7AL)).s2745764770735413)).s8)) == p_329->g_5[0]))) || 0x74BF00CB84BFDF1DL))
    { /* block id: 40 */
        for (p_329->g_120 = 0; (p_329->g_120 > 29); p_329->g_120++)
        { /* block id: 43 */
            int32_t *l_129 = (void*)0;
            int32_t *l_130 = &p_329->g_39;
            int32_t *l_131 = &p_329->g_39;
            int32_t *l_132 = &p_329->g_39;
            int32_t *l_133 = &p_329->g_39;
            int32_t *l_134[3][2] = {{&p_329->g_39,&p_329->g_39},{&p_329->g_39,&p_329->g_39},{&p_329->g_39,&p_329->g_39}};
            int i, j;
            p_329->g_137++;
        }
    }
    else
    { /* block id: 46 */
        int64_t *l_142 = &p_329->g_80[1];
        uint8_t *l_145 = &p_329->g_137;
        uint8_t *l_146 = &p_329->g_147;
        uint8_t *l_155 = &p_329->g_156[5];
        VECTOR(uint64_t, 2) l_159 = (VECTOR(uint64_t, 2))(0x8DAC4C18AC3F2620L, 0x34E5BC47677040BDL);
        int32_t l_160 = 0x15946782L;
        uint64_t l_162 = 18446744073709551606UL;
        uint64_t *l_163 = &p_329->g_92;
        uint64_t *l_164[1][5];
        int32_t *l_166 = &p_329->g_39;
        int32_t l_196 = 0x47430D1FL;
        int32_t l_198 = 0x2C006015L;
        int16_t *l_205 = &p_329->g_136;
        int32_t **l_208 = &l_166;
        int32_t *l_210 = &l_198;
        int32_t **l_209 = &l_210;
        int8_t *l_215 = (void*)0;
        int8_t *l_216 = (void*)0;
        int32_t *l_217[9] = {&l_196,&l_196,&l_196,&l_196,&l_196,&l_196,&l_196,&l_196,&l_196};
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_164[i][j] = &l_162;
        }
        (*l_166) |= ((p_329->g_165[5][0] = ((VECTOR(uint64_t, 4))(((*l_163) = (safe_mod_func_int32_t_s_s((l_142 != (((((((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_329->g_143.sf1b4ae9b)).s51)).xyxxxxyxxyxyyyyy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_144.yxxxxxxy)).s60)).xxyyxyyyxyyxxxyy))).s5 && l_98.y) & ((*l_146) = ((*l_145) = FAKE_DIVERGE(p_329->local_1_offset, get_local_id(1), 10)))) <= (((0x27L <= (safe_div_func_uint64_t_u_u((p_68 | (-1L)), (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 16))(p_329->g_152.s5d964b4b9ce0ad08)).sef, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_68, 0x2B78L, 0x9559L, 65528UL)), 0xDA9EL, 0x6AD8L, 0UL, 0UL, 65535UL, 9UL, 0xA46FL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(l_153.yyxyyxxx)).odd, (uint16_t)((l_135 = (++(*l_155))) != (p_329->g_49 ^= ((+((((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 2))(l_159.yy)).xyyx))).w || (((~l_160) <= 3UL) || FAKE_DIVERGE(p_329->global_2_offset, get_global_id(2), 10))) || p_329->g_80[7])) , p_329->g_161))))))))))).odd)), 0x4E93L, 3UL, 65534UL)).sf2))).yyxxxxyxxxxxxyxy, ((VECTOR(uint16_t, 16))(0xE273L))))), ((VECTOR(uint16_t, 16))(0xE1BAL)), ((VECTOR(uint16_t, 16))(0x4815L))))).s9, p_68))))) ^ p_68) >= 0x6AL)) ^ l_162) , &p_329->g_80[7])), (*p_67)))), 18446744073709551609UL, 0xCF237C9878C961D1L, 8UL)).x) | l_159.x);
        for (p_329->g_116 = 0; (p_329->g_116 > 30); p_329->g_116 = safe_add_func_uint16_t_u_u(p_329->g_116, 8))
        { /* block id: 57 */
            int16_t l_190 = 2L;
            if ((atomic_inc(&p_329->l_atomic_input[33]) == 8))
            { /* block id: 59 */
                int32_t l_169 = 0x19573897L;
                int16_t l_184 = 0x5BE7L;
                int32_t *l_185 = &l_169;
                int32_t *l_186 = &l_169;
                uint8_t l_187 = 255UL;
                for (l_169 = 0; (l_169 <= (-9)); l_169--)
                { /* block id: 62 */
                    uint64_t l_172 = 18446744073709551615UL;
                    int32_t *l_173 = (void*)0;
                    int32_t l_175 = 8L;
                    int32_t *l_174 = &l_175;
                    int32_t *l_176 = &l_175;
                    uint8_t l_177[6][4] = {{5UL,0xE0L,5UL,5UL},{5UL,0xE0L,5UL,5UL},{5UL,0xE0L,5UL,5UL},{5UL,0xE0L,5UL,5UL},{5UL,0xE0L,5UL,5UL},{5UL,0xE0L,5UL,5UL}};
                    int i, j;
                    l_172 = (-6L);
                    l_176 = (l_174 = l_173);
                    if (l_177[0][3])
                    { /* block id: 66 */
                        uint16_t l_178 = 0xE575L;
                        uint16_t l_179 = 0xA11BL;
                        VECTOR(int32_t, 16) l_180 = (VECTOR(int32_t, 16))(0x062F4E5EL, (VECTOR(int32_t, 4))(0x062F4E5EL, (VECTOR(int32_t, 2))(0x062F4E5EL, 0x2DEF7D71L), 0x2DEF7D71L), 0x2DEF7D71L, 0x062F4E5EL, 0x2DEF7D71L, (VECTOR(int32_t, 2))(0x062F4E5EL, 0x2DEF7D71L), (VECTOR(int32_t, 2))(0x062F4E5EL, 0x2DEF7D71L), 0x062F4E5EL, 0x2DEF7D71L, 0x062F4E5EL, 0x2DEF7D71L);
                        int i;
                        l_179 = l_178;
                        l_180.s9 = ((VECTOR(int32_t, 2))(l_180.s4b)).hi;
                    }
                    else
                    { /* block id: 69 */
                        int32_t l_181 = 0x563D6F25L;
                        uint64_t l_182 = 0x24FC960D399AF9C2L;
                        VECTOR(int32_t, 16) l_183 = (VECTOR(int32_t, 16))(0x09340F2FL, (VECTOR(int32_t, 4))(0x09340F2FL, (VECTOR(int32_t, 2))(0x09340F2FL, 1L), 1L), 1L, 0x09340F2FL, 1L, (VECTOR(int32_t, 2))(0x09340F2FL, 1L), (VECTOR(int32_t, 2))(0x09340F2FL, 1L), 0x09340F2FL, 1L, 0x09340F2FL, 1L);
                        int i;
                        l_182 = ((l_172 = l_181) , 0x137B62A7L);
                        l_175 = ((VECTOR(int32_t, 2))(l_183.s14)).odd;
                    }
                }
                l_184 = ((VECTOR(int32_t, 4))(0x177AC5F6L, (-2L), 0x3A30310DL, 1L)).w;
                l_186 = (l_185 = (void*)0);
                --l_187;
                unsigned int result = 0;
                result += l_169;
                result += l_184;
                result += l_187;
                atomic_add(&p_329->l_special_values[33], result);
            }
            else
            { /* block id: 79 */
                (1 + 1);
            }
            p_329->g_39 = l_190;
            (*l_166) ^= (safe_rshift_func_uint16_t_u_s(0x6C9CL, 15));
            for (p_68 = (-19); (p_68 == (-29)); p_68--)
            { /* block id: 86 */
                int32_t **l_195 = &l_166;
                int32_t *l_197[2][3];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_197[i][j] = &p_329->g_39;
                }
                l_198 = (l_196 = (((*l_195) = &p_329->g_39) != p_67));
                p_329->g_39 = p_329->g_161;
            }
        }
        l_218 &= ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(0x749A6DFDL, 0x34316976L, (-1L), 0x6A9F0FD8L)).yxyzzwxz, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_199.yy)), (-3L), ((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(p_329->g_202.zyxz)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))((safe_mul_func_int16_t_s_s(p_68, ((*l_205) = 0x6EDAL))), ((safe_mod_func_uint8_t_u_u(((((*l_209) = ((*l_208) = &p_329->g_39)) == &p_329->g_39) >= (safe_lshift_func_uint8_t_u_s((5L && 0x64DCL), (l_199.x |= (l_135 = (safe_add_func_int16_t_s_s(0x31C6L, ((p_329->g_49 , ((void*)0 == &p_67)) & p_68)))))))), p_68)) > p_329->g_92), (-5L), (-5L), (-2L), (*l_166), ((VECTOR(int8_t, 2))((-9L))), 0x28L, ((VECTOR(int8_t, 4))(0L)), 0x13L, 2L, 1L)).s4ef0)).w, 0x16L, 0L, 1L)).s6, 0)) , (*p_67)), ((VECTOR(int32_t, 8))(1L)), (-1L), 0x3595D045L, 0x5B38199BL, 0x50E86C6BL)).s0ada)).yxywzzzy))).s1;
        (**l_209) |= (*p_67);
    }
    for (p_329->g_126 = 0; (p_329->g_126 > 1); p_329->g_126 = safe_add_func_uint8_t_u_u(p_329->g_126, 3))
    { /* block id: 103 */
        return p_67;
    }
    for (p_329->g_137 = 0; (p_329->g_137 == 56); p_329->g_137 = safe_add_func_uint8_t_u_u(p_329->g_137, 1))
    { /* block id: 108 */
        int32_t *l_224 = &p_329->g_6;
        int32_t **l_223 = &l_224;
        int32_t *l_234 = &p_329->g_39;
        (*l_223) = &p_329->g_6;
        for (p_329->g_136 = 0; (p_329->g_136 == (-14)); p_329->g_136--)
        { /* block id: 112 */
            (*l_223) = p_67;
            if ((*l_224))
                continue;
        }
        (*l_234) = (safe_sub_func_uint64_t_u_u(((p_329->g_120 > (safe_add_func_uint16_t_u_u(0x923DL, (safe_lshift_func_int16_t_s_s((FAKE_DIVERGE(p_329->local_1_offset, get_local_id(1), 10) && (!((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(1UL, 0xC72EL, 9UL, 65535UL)), ((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 8))(l_233.s9890b11c)).s75))), 1UL, 0xEB5EL)).s6)), 10))))) , 0x53EDEECB3B7618F1L), p_329->l_comm_values[(safe_mod_func_uint32_t_u_u(p_329->tid, 91))]));
    }
    return p_67;
}


/* ------------------------------------------ */
/* 
 * reads : p_329->g_80 p_329->g_39
 * writes: p_329->g_39
 */
uint64_t  func_76(int8_t ** p_77, struct S3 * p_329)
{ /* block id: 31 */
    VECTOR(uint8_t, 4) l_93 = (VECTOR(uint8_t, 4))(0x8DL, (VECTOR(uint8_t, 2))(0x8DL, 246UL), 246UL);
    int32_t *l_94 = &p_329->g_39;
    int i;
    (*l_94) |= (p_329->g_80[9] <= ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_93.wzyzzxzw)).even)).y);
    return p_329->g_39;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[40];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 40; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[40];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 40; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[91];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 91; i++)
            l_comm_values[i] = 1;
    struct S3 c_330;
    struct S3* p_329 = &c_330;
    struct S3 c_331 = {
        {0x516A205BL}, // p_329->g_5
        0x5AFBBD0AL, // p_329->g_6
        {{1L,(-10L),(-1L),(-7L),(-1L)},{1L,(-10L),(-1L),(-7L),(-1L)},{1L,(-10L),(-1L),(-7L),(-1L)},{1L,(-10L),(-1L),(-7L),(-1L)},{1L,(-10L),(-1L),(-7L),(-1L)},{1L,(-10L),(-1L),(-7L),(-1L)},{1L,(-10L),(-1L),(-7L),(-1L)},{1L,(-10L),(-1L),(-7L),(-1L)},{1L,(-10L),(-1L),(-7L),(-1L)}}, // p_329->g_13
        1L, // p_329->g_14
        {{{6L,1L,1L,6L,0x1AFEC1E1L,(-8L),0x5C630DE2L,1L,0x565FE96FL,1L},{6L,1L,1L,6L,0x1AFEC1E1L,(-8L),0x5C630DE2L,1L,0x565FE96FL,1L},{6L,1L,1L,6L,0x1AFEC1E1L,(-8L),0x5C630DE2L,1L,0x565FE96FL,1L},{6L,1L,1L,6L,0x1AFEC1E1L,(-8L),0x5C630DE2L,1L,0x565FE96FL,1L},{6L,1L,1L,6L,0x1AFEC1E1L,(-8L),0x5C630DE2L,1L,0x565FE96FL,1L},{6L,1L,1L,6L,0x1AFEC1E1L,(-8L),0x5C630DE2L,1L,0x565FE96FL,1L},{6L,1L,1L,6L,0x1AFEC1E1L,(-8L),0x5C630DE2L,1L,0x565FE96FL,1L}},{{6L,1L,1L,6L,0x1AFEC1E1L,(-8L),0x5C630DE2L,1L,0x565FE96FL,1L},{6L,1L,1L,6L,0x1AFEC1E1L,(-8L),0x5C630DE2L,1L,0x565FE96FL,1L},{6L,1L,1L,6L,0x1AFEC1E1L,(-8L),0x5C630DE2L,1L,0x565FE96FL,1L},{6L,1L,1L,6L,0x1AFEC1E1L,(-8L),0x5C630DE2L,1L,0x565FE96FL,1L},{6L,1L,1L,6L,0x1AFEC1E1L,(-8L),0x5C630DE2L,1L,0x565FE96FL,1L},{6L,1L,1L,6L,0x1AFEC1E1L,(-8L),0x5C630DE2L,1L,0x565FE96FL,1L},{6L,1L,1L,6L,0x1AFEC1E1L,(-8L),0x5C630DE2L,1L,0x565FE96FL,1L}}}, // p_329->g_15
        0x1CA72764L, // p_329->g_16
        (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 4294967295UL), 4294967295UL), // p_329->g_35
        0x7EBAC3F4L, // p_329->g_39
        3L, // p_329->g_49
        &p_329->g_49, // p_329->g_48
        {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L}, // p_329->g_80
        (void*)0, // p_329->g_86
        1L, // p_329->g_90
        &p_329->g_90, // p_329->g_89
        &p_329->g_89, // p_329->g_88
        0xE74D0DCD5FEEA2D5L, // p_329->g_92
        0UL, // p_329->g_116
        0x287AL, // p_329->g_120
        4294967288UL, // p_329->g_126
        4L, // p_329->g_136
        0x46L, // p_329->g_137
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x57L), 0x57L), 0x57L, 0UL, 0x57L, (VECTOR(uint8_t, 2))(0UL, 0x57L), (VECTOR(uint8_t, 2))(0UL, 0x57L), 0UL, 0x57L, 0UL, 0x57L), // p_329->g_143
        0UL, // p_329->g_147
        (VECTOR(uint16_t, 16))(0x1794L, (VECTOR(uint16_t, 4))(0x1794L, (VECTOR(uint16_t, 2))(0x1794L, 65531UL), 65531UL), 65531UL, 0x1794L, 65531UL, (VECTOR(uint16_t, 2))(0x1794L, 65531UL), (VECTOR(uint16_t, 2))(0x1794L, 65531UL), 0x1794L, 65531UL, 0x1794L, 65531UL), // p_329->g_152
        0x77FC2152L, // p_329->g_154
        {250UL,0xD5L,250UL,250UL,0xD5L,250UL,250UL}, // p_329->g_156
        0UL, // p_329->g_161
        {{0x5F229590L},{0x5F229590L},{0x5F229590L},{0x5F229590L},{0x5F229590L},{0x5F229590L},{0x5F229590L},{0x5F229590L},{0x5F229590L}}, // p_329->g_165
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-4L)), (-4L)), // p_329->g_202
        (VECTOR(int16_t, 2))(0L, 0x2E7BL), // p_329->g_251
        (-1L), // p_329->g_255
        (void*)0, // p_329->g_261
        {{{18446744073709551615UL},{0x1C7195CB3C5C33FCL}},{{18446744073709551615UL},{0x1C7195CB3C5C33FCL}},{{18446744073709551615UL},{0x1C7195CB3C5C33FCL}}}, // p_329->g_272
        (void*)0, // p_329->g_277
        (void*)0, // p_329->g_287
        {0x332F5C83L}, // p_329->g_289
        {0x68445573L,0x2EL,0x2992FD4CL,247UL,0xEC3B42ED0FAEB5FEL,0L,2UL}, // p_329->g_290
        0x6E587C2FL, // p_329->g_304
        &p_329->g_39, // p_329->g_306
        {{{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}}},{{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}}},{{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}}},{{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}}},{{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}}},{{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}}},{{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}}},{{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}},{{0x6988ECCBE0E93FE0L},{0xF232AE47DCB6B8FDL},{1UL}}}}, // p_329->g_311
        &p_329->g_277, // p_329->g_327
        &p_329->g_327, // p_329->g_326
        0, // p_329->v_collective
        sequence_input[get_global_id(0)], // p_329->global_0_offset
        sequence_input[get_global_id(1)], // p_329->global_1_offset
        sequence_input[get_global_id(2)], // p_329->global_2_offset
        sequence_input[get_local_id(0)], // p_329->local_0_offset
        sequence_input[get_local_id(1)], // p_329->local_1_offset
        sequence_input[get_local_id(2)], // p_329->local_2_offset
        sequence_input[get_group_id(0)], // p_329->group_0_offset
        sequence_input[get_group_id(1)], // p_329->group_1_offset
        sequence_input[get_group_id(2)], // p_329->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 91)), permutations[0][get_linear_local_id()])), // p_329->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_330 = c_331;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_329);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_329->g_5[i], "p_329->g_5[i]", print_hash_value);

    }
    transparent_crc(p_329->g_6, "p_329->g_6", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_329->g_13[i][j], "p_329->g_13[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_329->g_14, "p_329->g_14", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_329->g_15[i][j][k], "p_329->g_15[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_329->g_16, "p_329->g_16", print_hash_value);
    transparent_crc(p_329->g_35.x, "p_329->g_35.x", print_hash_value);
    transparent_crc(p_329->g_35.y, "p_329->g_35.y", print_hash_value);
    transparent_crc(p_329->g_35.z, "p_329->g_35.z", print_hash_value);
    transparent_crc(p_329->g_35.w, "p_329->g_35.w", print_hash_value);
    transparent_crc(p_329->g_39, "p_329->g_39", print_hash_value);
    transparent_crc(p_329->g_49, "p_329->g_49", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_329->g_80[i], "p_329->g_80[i]", print_hash_value);

    }
    transparent_crc(p_329->g_90, "p_329->g_90", print_hash_value);
    transparent_crc(p_329->g_92, "p_329->g_92", print_hash_value);
    transparent_crc(p_329->g_116, "p_329->g_116", print_hash_value);
    transparent_crc(p_329->g_120, "p_329->g_120", print_hash_value);
    transparent_crc(p_329->g_126, "p_329->g_126", print_hash_value);
    transparent_crc(p_329->g_136, "p_329->g_136", print_hash_value);
    transparent_crc(p_329->g_137, "p_329->g_137", print_hash_value);
    transparent_crc(p_329->g_143.s0, "p_329->g_143.s0", print_hash_value);
    transparent_crc(p_329->g_143.s1, "p_329->g_143.s1", print_hash_value);
    transparent_crc(p_329->g_143.s2, "p_329->g_143.s2", print_hash_value);
    transparent_crc(p_329->g_143.s3, "p_329->g_143.s3", print_hash_value);
    transparent_crc(p_329->g_143.s4, "p_329->g_143.s4", print_hash_value);
    transparent_crc(p_329->g_143.s5, "p_329->g_143.s5", print_hash_value);
    transparent_crc(p_329->g_143.s6, "p_329->g_143.s6", print_hash_value);
    transparent_crc(p_329->g_143.s7, "p_329->g_143.s7", print_hash_value);
    transparent_crc(p_329->g_143.s8, "p_329->g_143.s8", print_hash_value);
    transparent_crc(p_329->g_143.s9, "p_329->g_143.s9", print_hash_value);
    transparent_crc(p_329->g_143.sa, "p_329->g_143.sa", print_hash_value);
    transparent_crc(p_329->g_143.sb, "p_329->g_143.sb", print_hash_value);
    transparent_crc(p_329->g_143.sc, "p_329->g_143.sc", print_hash_value);
    transparent_crc(p_329->g_143.sd, "p_329->g_143.sd", print_hash_value);
    transparent_crc(p_329->g_143.se, "p_329->g_143.se", print_hash_value);
    transparent_crc(p_329->g_143.sf, "p_329->g_143.sf", print_hash_value);
    transparent_crc(p_329->g_147, "p_329->g_147", print_hash_value);
    transparent_crc(p_329->g_152.s0, "p_329->g_152.s0", print_hash_value);
    transparent_crc(p_329->g_152.s1, "p_329->g_152.s1", print_hash_value);
    transparent_crc(p_329->g_152.s2, "p_329->g_152.s2", print_hash_value);
    transparent_crc(p_329->g_152.s3, "p_329->g_152.s3", print_hash_value);
    transparent_crc(p_329->g_152.s4, "p_329->g_152.s4", print_hash_value);
    transparent_crc(p_329->g_152.s5, "p_329->g_152.s5", print_hash_value);
    transparent_crc(p_329->g_152.s6, "p_329->g_152.s6", print_hash_value);
    transparent_crc(p_329->g_152.s7, "p_329->g_152.s7", print_hash_value);
    transparent_crc(p_329->g_152.s8, "p_329->g_152.s8", print_hash_value);
    transparent_crc(p_329->g_152.s9, "p_329->g_152.s9", print_hash_value);
    transparent_crc(p_329->g_152.sa, "p_329->g_152.sa", print_hash_value);
    transparent_crc(p_329->g_152.sb, "p_329->g_152.sb", print_hash_value);
    transparent_crc(p_329->g_152.sc, "p_329->g_152.sc", print_hash_value);
    transparent_crc(p_329->g_152.sd, "p_329->g_152.sd", print_hash_value);
    transparent_crc(p_329->g_152.se, "p_329->g_152.se", print_hash_value);
    transparent_crc(p_329->g_152.sf, "p_329->g_152.sf", print_hash_value);
    transparent_crc(p_329->g_154, "p_329->g_154", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_329->g_156[i], "p_329->g_156[i]", print_hash_value);

    }
    transparent_crc(p_329->g_161, "p_329->g_161", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_329->g_165[i][j], "p_329->g_165[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_329->g_202.x, "p_329->g_202.x", print_hash_value);
    transparent_crc(p_329->g_202.y, "p_329->g_202.y", print_hash_value);
    transparent_crc(p_329->g_202.z, "p_329->g_202.z", print_hash_value);
    transparent_crc(p_329->g_202.w, "p_329->g_202.w", print_hash_value);
    transparent_crc(p_329->g_251.x, "p_329->g_251.x", print_hash_value);
    transparent_crc(p_329->g_251.y, "p_329->g_251.y", print_hash_value);
    transparent_crc(p_329->g_255, "p_329->g_255", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_329->g_272[i][j].f0, "p_329->g_272[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_329->g_289.f0, "p_329->g_289.f0", print_hash_value);
    transparent_crc(p_329->g_290.f0, "p_329->g_290.f0", print_hash_value);
    transparent_crc(p_329->g_290.f1, "p_329->g_290.f1", print_hash_value);
    transparent_crc(p_329->g_290.f2, "p_329->g_290.f2", print_hash_value);
    transparent_crc(p_329->g_290.f3, "p_329->g_290.f3", print_hash_value);
    transparent_crc(p_329->g_290.f4, "p_329->g_290.f4", print_hash_value);
    transparent_crc(p_329->g_290.f5, "p_329->g_290.f5", print_hash_value);
    transparent_crc(p_329->g_290.f6, "p_329->g_290.f6", print_hash_value);
    transparent_crc(p_329->g_304, "p_329->g_304", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_329->g_311[i][j][k].f0, "p_329->g_311[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_329->v_collective, "p_329->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 40; i++)
            transparent_crc(p_329->l_special_values[i], "p_329->l_special_values[i]", print_hash_value);
    transparent_crc(p_329->l_comm_values[get_linear_local_id()], "p_329->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_329->g_comm_values[get_linear_group_id() * 91 + get_linear_local_id()], "p_329->g_comm_values[get_linear_group_id() * 91 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
