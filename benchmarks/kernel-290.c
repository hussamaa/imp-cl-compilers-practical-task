// --atomics 69 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 89,22,1 -l 1,11,1
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

__constant uint32_t permutations[10][11] = {
{5,9,0,4,10,1,8,6,2,7,3}, // permutation 0
{10,4,8,6,5,0,1,2,3,9,7}, // permutation 1
{2,10,1,6,5,3,4,8,0,7,9}, // permutation 2
{10,0,8,2,5,4,7,1,3,6,9}, // permutation 3
{1,5,4,8,10,0,7,6,2,9,3}, // permutation 4
{2,7,5,1,8,6,3,9,0,4,10}, // permutation 5
{10,2,5,1,6,9,8,7,3,0,4}, // permutation 6
{1,10,7,0,9,3,4,2,5,8,6}, // permutation 7
{10,5,9,3,8,0,4,1,7,2,6}, // permutation 8
{7,8,5,4,0,9,6,10,2,3,1} // permutation 9
};

// Seed: 3218229785

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int16_t  f0;
   int64_t  f1;
};

struct S1 {
    VECTOR(int64_t, 4) g_8;
    volatile VECTOR(int64_t, 16) g_11;
    uint16_t g_13;
    volatile VECTOR(uint32_t, 2) g_14;
    VECTOR(uint32_t, 2) g_15;
    VECTOR(uint32_t, 8) g_17;
    int32_t g_43;
    uint16_t *g_60;
    volatile VECTOR(int16_t, 8) g_66;
    VECTOR(uint64_t, 4) g_67;
    int8_t g_83;
    VECTOR(int16_t, 4) g_88;
    VECTOR(int32_t, 4) g_97;
    int64_t g_108;
    int32_t g_112[1][2][3];
    int32_t *g_121;
    int32_t ** volatile g_120;
    volatile uint64_t g_127;
    volatile uint64_t * volatile g_126;
    int32_t * volatile g_137;
    union U0 g_141;
    int32_t g_146;
    uint32_t g_156;
    volatile VECTOR(int32_t, 16) g_173;
    uint16_t g_190;
    int32_t g_203;
    VECTOR(int32_t, 8) g_208;
    VECTOR(uint8_t, 2) g_252;
    VECTOR(uint16_t, 2) g_258;
    volatile VECTOR(uint16_t, 8) g_260;
    volatile int16_t g_288;
    int32_t *g_298;
    int32_t g_300;
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
uint64_t  func_1(struct S1 * p_304);
union U0  func_2(int16_t  p_3, uint64_t  p_4, int32_t  p_5, struct S1 * p_304);
uint32_t  func_18(int32_t * p_19, uint32_t  p_20, uint16_t  p_21, struct S1 * p_304);
int32_t * func_22(int64_t  p_23, uint16_t * p_24, int32_t  p_25, struct S1 * p_304);
int8_t  func_30(int64_t  p_31, uint8_t  p_32, uint32_t  p_33, int32_t  p_34, uint16_t * p_35, struct S1 * p_304);
uint16_t  func_38(uint32_t  p_39, uint32_t  p_40, struct S1 * p_304);
uint16_t  func_48(uint32_t  p_49, uint32_t  p_50, uint16_t * p_51, struct S1 * p_304);
uint16_t * func_52(int8_t  p_53, int32_t * p_54, uint16_t * p_55, struct S1 * p_304);
int32_t * func_56(uint16_t * p_57, int32_t  p_58, uint16_t * p_59, struct S1 * p_304);
uint16_t * func_61(int8_t  p_62, struct S1 * p_304);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_304->g_comm_values p_304->g_8 p_304->g_11 p_304->g_13 p_304->g_14 p_304->g_15 p_304->g_17 p_304->g_43 p_304->g_66 p_304->g_67 p_304->g_83 p_304->g_88 p_304->g_97 p_304->l_comm_values p_304->g_108 p_304->g_112 p_304->g_120 p_304->g_126 p_304->g_146 p_304->g_173 p_304->g_121 p_304->g_60 p_304->g_203 p_304->g_208 p_304->g_252 p_304->g_258 p_304->g_260 p_304->g_141 p_304->g_190
 * writes: p_304->g_13 p_304->g_43 p_304->g_60 p_304->g_8 p_304->g_83 p_304->g_67 p_304->g_108 p_304->g_112 p_304->g_121 p_304->g_156 p_304->g_97 p_304->g_203 p_304->g_146 p_304->g_141.f0 p_304->g_141.f1 p_304->g_252 p_304->g_298
 */
uint64_t  func_1(struct S1 * p_304)
{ /* block id: 4 */
    uint16_t *l_12[10] = {&p_304->g_13,&p_304->g_13,&p_304->g_13,&p_304->g_13,&p_304->g_13,&p_304->g_13,&p_304->g_13,&p_304->g_13,&p_304->g_13,&p_304->g_13};
    VECTOR(uint32_t, 8) l_16 = (VECTOR(uint32_t, 8))(0xE8AFF65CL, (VECTOR(uint32_t, 4))(0xE8AFF65CL, (VECTOR(uint32_t, 2))(0xE8AFF65CL, 0x7C927DB4L), 0x7C927DB4L), 0x7C927DB4L, 0xE8AFF65CL, 0x7C927DB4L);
    int32_t *l_296 = (void*)0;
    int32_t **l_297[4] = {&l_296,&l_296,&l_296,&l_296};
    int32_t *l_299 = (void*)0;
    uint32_t l_301 = 0x1FCDCB08L;
    int i;
    l_299 = (p_304->g_298 = ((*p_304->g_120) = ((func_2(p_304->g_comm_values[p_304->tid], (safe_div_func_int64_t_s_s(0x05FAAFE30F5872D9L, ((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(1L, (-7L))), 0x0CF4C59CDC345FE4L, ((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(p_304->g_8.wx)), (int64_t)(FAKE_DIVERGE(p_304->local_2_offset, get_local_id(2), 10) <= ((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 2))(p_304->g_11.s64)).lo, 18446744073709551606UL)) < (0x09BA87A5EAFB5D1CL < (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0xBF5FL, 0xE13FL)).yxyyyxxyxxyyyyxx)).scaea)).x <= (p_304->g_13 |= 0xA023L)))))))), 0x72737AE9F9034E10L, 0x58142C78EF8A6EBBL, p_304->g_8.w, (-1L), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 2))(1L, 0x79E6A012L)).xyxxxyxyxxxxyyxx, ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(p_304->g_14.yx)), 4294967293UL, 9UL, 0x15E0C0A1L, ((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4294967289UL, 4294967295UL)), ((VECTOR(uint32_t, 2))(p_304->g_15.yx)), ((VECTOR(uint32_t, 2))(0x1B4415E4L, 4294967286UL)), 0x7B364FEFL, 0x79A1D127L)).s2467215534753167)).sd3, ((VECTOR(uint32_t, 4))(GROUP_DIVERGE(2, 1), ((VECTOR(uint32_t, 2))(0x57520C25L, 1UL)), 0x4860C01EL)).even, ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 8))(l_16.s04376103)).s20, ((VECTOR(uint32_t, 16))(p_304->g_17.s4026776216173402)).s6a)))))), 4294967295UL)).even, (uint32_t)p_304->g_14.y))), (p_304->g_11.s2 , func_18(func_22(p_304->g_8.y, &p_304->g_13, l_16.s7, p_304), p_304->g_17.s0, p_304->g_15.y, p_304)), p_304->g_11.s1, ((VECTOR(uint32_t, 8))(4294967295UL)), 0x2A510879L, 0xDACBEE2FL)).s2d, ((VECTOR(uint32_t, 2))(4294967295UL)), ((VECTOR(uint32_t, 2))(4294967295UL))))).yxyxxyxxyxyyxxxx))).se8e4)), p_304->g_67.z, ((VECTOR(int64_t, 2))(0x1B4DFFA5379D3524L)), ((VECTOR(int64_t, 2))(0x082262B2D5520B45L)), 0x02BF50137D2C3B53L, 0x1D68D85174530BE2L, ((VECTOR(int64_t, 2))(9L)), 0x5B4B3ED0F16C2306L, 0x74255ED363157A54L, 2L)).sc1b9)), 8L, (-1L), 0L)).sc38d, ((VECTOR(int64_t, 4))(4L)), ((VECTOR(int64_t, 4))(0x33A0EA851A2E1D2EL))))).x)), l_16.s6, p_304) , l_16.s3) , l_296)));
    l_301--;
    return p_304->g_190;
}


/* ------------------------------------------ */
/* 
 * reads : p_304->g_208 p_304->g_121 p_304->g_120 p_304->g_146 p_304->g_126 p_304->g_112 p_304->g_88 p_304->g_67 p_304->g_252 p_304->g_258 p_304->g_260 p_304->g_60 p_304->g_13 p_304->g_15 p_304->g_43 p_304->g_83 p_304->g_comm_values p_304->g_141
 * writes: p_304->g_43 p_304->g_121 p_304->g_146 p_304->g_108 p_304->g_156 p_304->g_141.f0 p_304->g_141.f1 p_304->g_252 p_304->g_8 p_304->g_83 p_304->g_112
 */
union U0  func_2(int16_t  p_3, uint64_t  p_4, int32_t  p_5, struct S1 * p_304)
{ /* block id: 63 */
    uint32_t l_210 = 5UL;
    uint64_t *l_217 = (void*)0;
    uint64_t **l_216 = &l_217;
    uint16_t *l_224 = &p_304->g_190;
    int32_t l_232 = 0x55B61EB1L;
    int32_t l_233[10] = {0x43BFFD30L,0x0121A7B5L,0x51C68F02L,0x0121A7B5L,0x43BFFD30L,0x43BFFD30L,0x0121A7B5L,0x51C68F02L,0x0121A7B5L,0x43BFFD30L};
    VECTOR(uint16_t, 16) l_257 = (VECTOR(uint16_t, 16))(0xFD1AL, (VECTOR(uint16_t, 4))(0xFD1AL, (VECTOR(uint16_t, 2))(0xFD1AL, 65535UL), 65535UL), 65535UL, 0xFD1AL, 65535UL, (VECTOR(uint16_t, 2))(0xFD1AL, 65535UL), (VECTOR(uint16_t, 2))(0xFD1AL, 65535UL), 0xFD1AL, 65535UL, 0xFD1AL, 65535UL);
    VECTOR(uint16_t, 16) l_259 = (VECTOR(uint16_t, 16))(0xBD07L, (VECTOR(uint16_t, 4))(0xBD07L, (VECTOR(uint16_t, 2))(0xBD07L, 0x40E4L), 0x40E4L), 0x40E4L, 0xBD07L, 0x40E4L, (VECTOR(uint16_t, 2))(0xBD07L, 0x40E4L), (VECTOR(uint16_t, 2))(0xBD07L, 0x40E4L), 0xBD07L, 0x40E4L, 0xBD07L, 0x40E4L);
    int8_t l_286 = 0x03L;
    int32_t l_291 = (-1L);
    uint32_t l_292 = 0x8BFF0933L;
    VECTOR(uint16_t, 2) l_295 = (VECTOR(uint16_t, 2))(65528UL, 4UL);
    int i;
    for (p_5 = (-14); (p_5 == (-9)); ++p_5)
    { /* block id: 66 */
        uint16_t l_209 = 0UL;
        (*p_304->g_121) = ((VECTOR(int32_t, 2))(p_304->g_208.s51)).even;
        if (p_5)
            break;
        (*p_304->g_121) = l_209;
    }
    p_5 &= l_210;
    if (p_4)
    { /* block id: 72 */
        int32_t **l_211 = &p_304->g_121;
        uint64_t **l_218 = &l_217;
        int32_t l_234[6];
        int32_t *l_276 = &l_232;
        int32_t *l_277 = &p_304->g_112[0][1][1];
        int32_t *l_278 = &l_234[5];
        int32_t *l_279 = &p_304->g_43;
        int32_t *l_280 = &l_233[2];
        int32_t *l_281 = &l_234[0];
        int32_t *l_282 = (void*)0;
        int32_t *l_283 = &p_304->g_112[0][0][0];
        int32_t *l_284 = &p_304->g_43;
        int32_t *l_285[4] = {&p_304->g_203,&p_304->g_203,&p_304->g_203,&p_304->g_203};
        int8_t l_287 = 3L;
        int16_t l_289[10] = {0x2DD7L,(-4L),0x1D26L,(-4L),0x2DD7L,0x2DD7L,(-4L),0x1D26L,(-4L),0x2DD7L};
        int16_t l_290[1][2];
        int i, j;
        for (i = 0; i < 6; i++)
            l_234[i] = 0x7623DAB1L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_290[i][j] = (-2L);
        }
        (*l_211) = (*p_304->g_120);
        for (p_304->g_146 = 0; (p_304->g_146 != 0); ++p_304->g_146)
        { /* block id: 76 */
            uint64_t **l_215 = (void*)0;
            uint64_t ***l_214[4][1][5] = {{{&l_215,&l_215,&l_215,&l_215,&l_215}},{{&l_215,&l_215,&l_215,&l_215,&l_215}},{{&l_215,&l_215,&l_215,&l_215,&l_215}},{{&l_215,&l_215,&l_215,&l_215,&l_215}}};
            int32_t l_262 = 0L;
            int i, j, k;
            l_218 = (l_216 = (void*)0);
            for (p_3 = 15; (p_3 <= (-13)); --p_3)
            { /* block id: 81 */
                int32_t l_223 = 9L;
                int32_t l_231 = 0x0E5C58E8L;
                VECTOR(uint16_t, 2) l_263 = (VECTOR(uint16_t, 2))(0x6A4BL, 0x59ECL);
                int i;
                (*l_211) = func_56(&p_304->g_190, (safe_add_func_uint16_t_u_u(l_223, 0L)), l_224, p_304);
                for (p_304->g_156 = 0; (p_304->g_156 > 55); ++p_304->g_156)
                { /* block id: 85 */
                    uint64_t l_235 = 0x179101B299E1F5F1L;
                    int64_t *l_261 = &p_304->g_141.f1;
                    VECTOR(uint16_t, 16) l_264 = (VECTOR(uint16_t, 16))(0x82FFL, (VECTOR(uint16_t, 4))(0x82FFL, (VECTOR(uint16_t, 2))(0x82FFL, 0UL), 0UL), 0UL, 0x82FFL, 0UL, (VECTOR(uint16_t, 2))(0x82FFL, 0UL), (VECTOR(uint16_t, 2))(0x82FFL, 0UL), 0x82FFL, 0UL, 0x82FFL, 0UL);
                    int32_t *l_275 = &l_233[5];
                    int i;
                    for (p_304->g_141.f0 = 0; (p_304->g_141.f0 == (-21)); --p_304->g_141.f0)
                    { /* block id: 88 */
                        int32_t *l_229 = (void*)0;
                        int32_t *l_230[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_230[i] = &p_304->g_43;
                        l_235++;
                    }
                    (*p_304->g_120) = &p_5;
                    if ((atomic_inc(&p_304->l_atomic_input[55]) == 4))
                    { /* block id: 93 */
                        int32_t l_238 = 0x785B942BL;
                        int16_t l_239[5][10][5] = {{{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L}},{{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L}},{{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L}},{{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L}},{{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L},{0x3849L,(-3L),0x4466L,(-3L),0x3849L}}};
                        uint64_t l_240 = 18446744073709551609UL;
                        int8_t l_243 = (-1L);
                        int64_t l_244 = 0x4056C7C8E040B19EL;
                        uint32_t l_245[7] = {7UL,7UL,7UL,7UL,7UL,7UL,7UL};
                        uint64_t l_246 = 0xBD4BA8CB6C84F80DL;
                        int32_t l_247 = (-1L);
                        uint8_t l_248 = 253UL;
                        uint64_t l_249 = 0xE991AB5BA0F185E3L;
                        int i, j, k;
                        ++l_240;
                        l_245[5] |= (l_243 , l_244);
                        l_249 &= ((l_247 &= l_246) , l_248);
                        unsigned int result = 0;
                        result += l_238;
                        int l_239_i0, l_239_i1, l_239_i2;
                        for (l_239_i0 = 0; l_239_i0 < 5; l_239_i0++) {
                            for (l_239_i1 = 0; l_239_i1 < 10; l_239_i1++) {
                                for (l_239_i2 = 0; l_239_i2 < 5; l_239_i2++) {
                                    result += l_239[l_239_i0][l_239_i1][l_239_i2];
                                }
                            }
                        }
                        result += l_240;
                        result += l_243;
                        result += l_244;
                        int l_245_i0;
                        for (l_245_i0 = 0; l_245_i0 < 7; l_245_i0++) {
                            result += l_245[l_245_i0];
                        }
                        result += l_246;
                        result += l_247;
                        result += l_248;
                        result += l_249;
                        atomic_add(&p_304->l_special_values[55], result);
                    }
                    else
                    { /* block id: 98 */
                        (1 + 1);
                    }
                    (*l_275) |= ((safe_add_func_int16_t_s_s(((((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_304->g_252.yx)), 248UL, 0UL, 255UL, (safe_add_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(uint16_t, 2))(0x6DE2L, 0UL)).yxyyxxyyyxyyyxyx, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 8))(l_257.sfacb9ea9)).s56, ((VECTOR(uint16_t, 2))(p_304->g_258.yx)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_259.sfff8)).wyyyxxzywzzyxzxx)).odd, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(0xC61FL, ((VECTOR(uint16_t, 2))(p_304->g_260.s22)), 0x9DA9L)))), ((VECTOR(uint16_t, 16))((((*l_261) = (**l_211)) < p_304->g_88.z), ((VECTOR(uint16_t, 8))(l_262, (*p_304->g_60), 65534UL, ((VECTOR(uint16_t, 2))(l_263.xy)), ((VECTOR(uint16_t, 2))(l_264.se4)), 0UL)), ((safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_u((p_304->g_88.w == (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((p_304->g_258.y , func_61(((**l_211) == (safe_mul_func_int8_t_s_s(0x3BL, (p_304->g_252.y = FAKE_DIVERGE(p_304->group_2_offset, get_group_id(2), 10))))), p_304)) == (void*)0), p_5)), 5))), 10)) >= p_4), p_5)) > (-1L)), ((VECTOR(uint16_t, 4))(0x27F0L)), 1UL, 65531UL)).s6, 0UL, ((VECTOR(uint16_t, 4))(1UL)), ((VECTOR(uint16_t, 2))(65535UL)), ((VECTOR(uint16_t, 4))(0x2145L)))), ((VECTOR(uint16_t, 16))(0x0060L))))).hi, (uint16_t)(*p_304->g_60), (uint16_t)5UL))).s6712455054142350)).hi))), ((VECTOR(uint16_t, 8))(0xF71BL)), ((VECTOR(uint16_t, 8))(0x1C54L))))))).s56))).xyxxxxxxyyyyyxxy))).hi, ((VECTOR(uint16_t, 8))(0xEF39L))))).s7, 4L)), 0x4463F7B03202B1D1L)), 246UL, 1UL)).s34)).even || p_5) | 0x39045618L) & 1L) == l_264.s3), 1UL)) < p_304->g_comm_values[p_304->tid]);
                }
            }
        }
        ++l_292;
    }
    else
    { /* block id: 108 */
        (*p_304->g_121) ^= p_3;
    }
    (*p_304->g_121) = (3UL != ((VECTOR(uint16_t, 8))(l_295.xyyyxyyx)).s5);
    return p_304->g_141;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_304->g_121
 */
uint32_t  func_18(int32_t * p_19, uint32_t  p_20, uint16_t  p_21, struct S1 * p_304)
{ /* block id: 60 */
    union U0 l_204 = {0x10E8L};
    int32_t **l_205 = &p_304->g_121;
    (*l_205) = (l_204 , p_19);
    return p_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_304->g_8 p_304->g_43 p_304->g_15 p_304->g_66 p_304->g_67 p_304->g_83 p_304->g_88 p_304->g_97 p_304->l_comm_values p_304->g_17 p_304->g_108 p_304->g_112 p_304->g_120 p_304->g_126 p_304->g_13 p_304->g_146 p_304->g_11 p_304->g_173 p_304->g_121 p_304->g_60 p_304->g_203
 * writes: p_304->g_43 p_304->g_60 p_304->g_8 p_304->g_83 p_304->g_67 p_304->g_108 p_304->g_112 p_304->g_121 p_304->g_13 p_304->g_156 p_304->g_97 p_304->g_203
 */
int32_t * func_22(int64_t  p_23, uint16_t * p_24, int32_t  p_25, struct S1 * p_304)
{ /* block id: 6 */
    uint64_t l_63 = 0xD11E9056FF37E3B5L;
    uint16_t *l_189[9] = {&p_304->g_190,&p_304->g_190,&p_304->g_190,&p_304->g_190,&p_304->g_190,&p_304->g_190,&p_304->g_190,&p_304->g_190,&p_304->g_190};
    int32_t *l_202 = &p_304->g_203;
    int i;
    (*l_202) ^= (safe_lshift_func_int8_t_s_u(((safe_lshift_func_int8_t_s_u(func_30(p_23, ((safe_rshift_func_uint16_t_u_u(func_38(p_304->g_8.y, p_25, p_304), 3)) , ((safe_lshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(func_48((+GROUP_DIVERGE(2, 1)), p_25, func_52(p_304->g_15.y, func_56((p_304->g_60 = p_24), p_25, func_61(l_63, p_304), p_304), p_24, p_304), p_304), GROUP_DIVERGE(0, 1))), GROUP_DIVERGE(1, 1))) , p_25)), p_25, l_63, l_189[8], p_304), l_63)) | p_25), 6));
    return &p_304->g_43;
}


/* ------------------------------------------ */
/* 
 * reads : p_304->g_43 p_304->g_112
 * writes: p_304->g_43
 */
int8_t  func_30(int64_t  p_31, uint8_t  p_32, uint32_t  p_33, int32_t  p_34, uint16_t * p_35, struct S1 * p_304)
{ /* block id: 53 */
    int32_t *l_191 = &p_304->g_43;
    int32_t **l_192 = &l_191;
    int32_t *l_193 = &p_304->g_112[0][1][1];
    int32_t *l_194 = (void*)0;
    int32_t *l_195 = (void*)0;
    int32_t l_196 = 1L;
    int32_t *l_197 = &l_196;
    int32_t *l_198[10] = {(void*)0,&l_196,(void*)0,(void*)0,&l_196,(void*)0,(void*)0,&l_196,(void*)0,(void*)0};
    uint64_t l_199 = 18446744073709551615UL;
    int i;
    (*l_192) = l_191;
    (*l_191) = (*l_191);
    l_199--;
    return (*l_193);
}


/* ------------------------------------------ */
/* 
 * reads : p_304->g_43
 * writes: p_304->g_43
 */
uint16_t  func_38(uint32_t  p_39, uint32_t  p_40, struct S1 * p_304)
{ /* block id: 7 */
    uint32_t l_41 = 0xC007DFDCL;
    int32_t *l_42 = &p_304->g_43;
    (*l_42) |= l_41;
    return (*l_42);
}


/* ------------------------------------------ */
/* 
 * reads : p_304->g_17 p_304->g_60 p_304->g_13
 * writes:
 */
uint16_t  func_48(uint32_t  p_49, uint32_t  p_50, uint16_t * p_51, struct S1 * p_304)
{ /* block id: 47 */
    int32_t *l_188 = &p_304->g_43;
    int i, j;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_304->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 11)), permutations[(safe_mod_func_uint32_t_u_u(p_304->g_17.s2, 10))][(safe_mod_func_uint32_t_u_u(p_304->tid, 11))]));
    l_188 = l_188;
    return (*p_304->g_60);
}


/* ------------------------------------------ */
/* 
 * reads : p_304->g_13 p_304->g_108 p_304->g_146 p_304->g_11 p_304->g_8 p_304->g_97 p_304->g_112 p_304->g_173 p_304->g_121 p_304->g_120 p_304->l_comm_values p_304->g_15 p_304->g_43
 * writes: p_304->g_13 p_304->g_108 p_304->g_156 p_304->g_97 p_304->g_121 p_304->g_43
 */
uint16_t * func_52(int8_t  p_53, int32_t * p_54, uint16_t * p_55, struct S1 * p_304)
{ /* block id: 27 */
    union U0 *l_140 = &p_304->g_141;
    union U0 **l_139 = &l_140;
    uint64_t *l_149 = (void*)0;
    int32_t l_159 = (-8L);
    int32_t l_161 = 0x53F484CDL;
    int32_t l_163 = 0x2B853E7CL;
    int32_t l_164 = 0x24A4FE81L;
    int32_t l_165 = 0x53B4F5F1L;
    int32_t l_166[4][7];
    VECTOR(int32_t, 2) l_170 = (VECTOR(int32_t, 2))(0x5D32A84EL, 0x2DAF40BCL);
    VECTOR(int32_t, 8) l_171 = (VECTOR(int32_t, 8))(0x5D2826EAL, (VECTOR(int32_t, 4))(0x5D2826EAL, (VECTOR(int32_t, 2))(0x5D2826EAL, 0x4DD8C49EL), 0x4DD8C49EL), 0x4DD8C49EL, 0x5D2826EAL, 0x4DD8C49EL);
    VECTOR(int32_t, 4) l_172 = (VECTOR(int32_t, 4))(0x0524EEF2L, (VECTOR(int32_t, 2))(0x0524EEF2L, 0x6342583EL), 0x6342583EL);
    int32_t **l_178 = &p_304->g_121;
    uint16_t *l_187 = &p_304->g_13;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
            l_166[i][j] = 0x2E7412AEL;
    }
    (*l_139) = (void*)0;
    for (p_304->g_13 = 0; (p_304->g_13 != 34); p_304->g_13 = safe_add_func_int64_t_s_s(p_304->g_13, 2))
    { /* block id: 31 */
        uint8_t l_150 = 254UL;
        int32_t l_154 = 0L;
        int32_t l_162[5] = {0x4BAA91CEL,0x4BAA91CEL,0x4BAA91CEL,0x4BAA91CEL,0x4BAA91CEL};
        int i;
        for (p_304->g_108 = 0; (p_304->g_108 == (-8)); --p_304->g_108)
        { /* block id: 34 */
            int8_t l_151 = 0x37L;
            int64_t *l_152 = (void*)0;
            int64_t *l_153 = &p_304->g_141.f1;
            uint32_t *l_155 = &p_304->g_156;
            int16_t l_157 = 6L;
            int32_t *l_158[2];
            int32_t l_160 = 0x440AF76FL;
            uint32_t l_167 = 0x5635FC20L;
            int i;
            for (i = 0; i < 2; i++)
                l_158[i] = (void*)0;
            p_304->g_97.x |= (p_304->g_146 | ((*l_155) = (((safe_lshift_func_int16_t_s_s(((void*)0 != l_149), ((void*)0 == l_149))) , (l_150 || p_304->g_11.s0)) == (((p_54 != (((l_154 &= l_151) && p_53) , &p_304->g_43)) , p_304->g_8.y) & p_53))));
            if (l_157)
                continue;
            l_159 ^= (*p_54);
            l_167++;
        }
        if ((*p_54))
            break;
    }
    p_304->g_43 |= ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(l_170.yy)).yyxy, ((VECTOR(int32_t, 8))(l_171.s03256675)).hi))).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x0495D763L, 0x5B4E2833L)))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(l_172.ww)).xxxxyxyxxyxxyyxy, ((VECTOR(int32_t, 16))(p_304->g_173.sd39f524a4f3cda21))))))).sb0))).xyxyyyyx)).odd, ((VECTOR(int32_t, 2))(0L, 1L)).xxyx))).z, 0x3AE6BA0DL, 0x512955A2L, (safe_lshift_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(0UL, ((&l_159 != ((*l_178) = &l_166[3][2])) || (safe_div_func_int64_t_s_s((((1UL & (**l_178)) < (safe_rshift_func_int16_t_s_u(((**l_178) >= ((FAKE_DIVERGE(p_304->local_2_offset, get_local_id(2), 10) == (0x15680249L == (safe_sub_func_uint64_t_u_u(FAKE_DIVERGE(p_304->local_2_offset, get_local_id(2), 10), (**l_178))))) | (!((*p_304->g_120) == (void*)0)))), (**l_178)))) ^ 0x66F5L), p_304->l_comm_values[(safe_mod_func_uint32_t_u_u(p_304->tid, 11))]))))) >= p_304->g_8.y), p_304->g_15.y)), ((VECTOR(int32_t, 2))(6L)), 0x1898E5B0L, 0x003E9E2FL)).s25))).even;
    return l_187;
}


/* ------------------------------------------ */
/* 
 * reads : p_304->g_120 p_304->g_126 p_304->g_112 p_304->g_88 p_304->g_67
 * writes: p_304->g_121 p_304->g_108
 */
int32_t * func_56(uint16_t * p_57, int32_t  p_58, uint16_t * p_59, struct S1 * p_304)
{ /* block id: 21 */
    int32_t *l_119 = (void*)0;
    uint64_t *l_125 = (void*)0;
    uint64_t **l_124 = &l_125;
    int32_t l_130 = 4L;
    int64_t *l_135 = (void*)0;
    int64_t *l_136 = &p_304->g_108;
    int32_t *l_138 = &p_304->g_112[0][1][1];
    (*p_304->g_120) = l_119;
    l_130 = (((*l_136) = ((((*l_124) = (void*)0) != p_304->g_126) == ((((void*)0 == &p_304->g_83) , ((safe_mod_func_uint8_t_u_u(l_130, (safe_add_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(p_58, p_58)), p_304->g_112[0][1][1])))) & p_304->g_88.z)) , 0L))) < p_304->g_67.z);
    return l_138;
}


/* ------------------------------------------ */
/* 
 * reads : p_304->g_66 p_304->g_67 p_304->g_15 p_304->g_43 p_304->g_83 p_304->g_88 p_304->g_8 p_304->g_97 p_304->l_comm_values p_304->g_17 p_304->g_108 p_304->g_112
 * writes: p_304->g_8 p_304->g_43 p_304->g_83 p_304->g_67 p_304->g_108 p_304->g_112
 */
uint16_t * func_61(int8_t  p_62, struct S1 * p_304)
{ /* block id: 11 */
    int64_t l_69 = 0x0D26BC8B8ECDE22FL;
    union U0 l_70 = {0L};
    int32_t *l_77 = &p_304->g_43;
    int8_t *l_82 = &p_304->g_83;
    uint64_t *l_89 = (void*)0;
    uint64_t *l_90 = (void*)0;
    uint16_t *l_102 = &p_304->g_13;
    int16_t *l_103 = (void*)0;
    int16_t *l_104 = (void*)0;
    int16_t *l_105 = &l_70.f0;
    int64_t *l_106 = (void*)0;
    int64_t *l_107[5][4] = {{(void*)0,&l_69,(void*)0,(void*)0},{(void*)0,&l_69,(void*)0,(void*)0},{(void*)0,&l_69,(void*)0,(void*)0},{(void*)0,&l_69,(void*)0,(void*)0},{(void*)0,&l_69,(void*)0,(void*)0}};
    int64_t l_109 = 0x6BA52E2A0AD3F44FL;
    int32_t *l_110 = (void*)0;
    int32_t *l_111 = &p_304->g_112[0][1][1];
    int32_t *l_113 = &p_304->g_112[0][1][1];
    int32_t *l_114 = &p_304->g_112[0][0][0];
    int32_t *l_115[5] = {&p_304->g_112[0][1][1],&p_304->g_112[0][1][1],&p_304->g_112[0][1][1],&p_304->g_112[0][1][1],&p_304->g_112[0][1][1]};
    uint16_t l_116 = 0xF6FDL;
    int i, j;
    (*l_77) = ((0x12D4L != (safe_mul_func_uint8_t_u_u((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_304->g_66.s55)).yyxyyyyx)).s3 ^ (+(((VECTOR(uint64_t, 4))(p_304->g_67.xwxy)).y , ((safe_unary_minus_func_int32_t_s(l_69)) & ((l_70 , (p_304->g_8.x = (safe_rshift_func_int16_t_s_u(l_70.f0, ((0x6BEE99B4L | (safe_mod_func_int16_t_s_s(p_304->g_67.w, 1L))) , (safe_lshift_func_int8_t_s_s((-1L), 0))))))) < FAKE_DIVERGE(p_304->local_1_offset, get_local_id(1), 10)))))), (l_69 ^ 0x18944B8798E375BCL)))) , p_62);
    (*l_111) ^= ((safe_lshift_func_uint16_t_u_u(((((~(((((((p_62 , p_304->g_15.x) < (((((safe_rshift_func_int8_t_s_u(((*l_82) ^= (*l_77)), 5)) >= (safe_add_func_uint64_t_u_u(((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 8))(p_304->g_88.zzwxzzwz)).s3536166027575431, ((VECTOR(int16_t, 8))(((p_304->g_108 ^= (p_304->g_66.s0 & (((--p_304->g_67.z) >= ((+p_304->g_8.x) , (safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 8))((((VECTOR(int32_t, 2))(p_304->g_97.xz)).odd != (0x560E5BE992D143BFL < ((p_304->g_88.z & ((((*l_105) = (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(1UL, ((l_102 == &p_304->g_13) > 0x2CL))), 3))) && (*l_77)) >= (*l_77))) & p_304->g_8.w))), (*l_77), ((VECTOR(int64_t, 2))(0x7B4319BF676F3906L)), 0x047A0C8E20B3FD2CL, 0L, 1L, 0x1CF4EE93D3DD4AC9L)).s4163266655243411, ((VECTOR(int64_t, 16))(0x210B645EBEAA1EDCL))))).sfe, ((VECTOR(int64_t, 2))(0x1C1FAE94C91969D3L))))), (int64_t)p_304->l_comm_values[(safe_mod_func_uint32_t_u_u(p_304->tid, 11))]))), ((VECTOR(int64_t, 2))(0x6A208CA92D9FAADCL))))).xyxyyxxx)).s2 | (*l_77)) , l_104) == &p_304->g_13) >= 0x41L), (*l_77))), 11)))) < p_304->g_17.s7))) <= p_62), (-1L), ((VECTOR(int16_t, 4))(0L)), 4L, (-1L))).s4040566070510676))).s3dba, ((VECTOR(int16_t, 4))(0x1957L))))).odd, ((VECTOR(int16_t, 2))(0x7D48L)), ((VECTOR(int16_t, 2))(0x41D4L))))).yxxx, ((VECTOR(int16_t, 4))(1L))))), p_62, l_109, 65535UL, 0UL)), ((VECTOR(uint16_t, 8))(0x7D71L))))).s0, p_62)) <= (-6L)), (*l_77)))) || 0x2E7F170005B716F6L) <= p_62) , (*l_77))) | p_62) < (*l_77)) ^ p_62) , 0x42C222D1L) >= (*l_77))) <= p_304->g_15.x) , p_62) & (*l_77)), 2)) , 0x1A3F8350L);
    ++l_116;
    return &p_304->g_13;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[69];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 69; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[69];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 69; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[11];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 11; i++)
            l_comm_values[i] = 1;
    struct S1 c_305;
    struct S1* p_304 = &c_305;
    struct S1 c_306 = {
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x413FE662DB8E9646L), 0x413FE662DB8E9646L), // p_304->g_8
        (VECTOR(int64_t, 16))(0x7FF12F3CCD2466E9L, (VECTOR(int64_t, 4))(0x7FF12F3CCD2466E9L, (VECTOR(int64_t, 2))(0x7FF12F3CCD2466E9L, (-8L)), (-8L)), (-8L), 0x7FF12F3CCD2466E9L, (-8L), (VECTOR(int64_t, 2))(0x7FF12F3CCD2466E9L, (-8L)), (VECTOR(int64_t, 2))(0x7FF12F3CCD2466E9L, (-8L)), 0x7FF12F3CCD2466E9L, (-8L), 0x7FF12F3CCD2466E9L, (-8L)), // p_304->g_11
        0xB6D6L, // p_304->g_13
        (VECTOR(uint32_t, 2))(0UL, 0x7FEFB659L), // p_304->g_14
        (VECTOR(uint32_t, 2))(0x169B41DBL, 7UL), // p_304->g_15
        (VECTOR(uint32_t, 8))(0x0EC253D5L, (VECTOR(uint32_t, 4))(0x0EC253D5L, (VECTOR(uint32_t, 2))(0x0EC253D5L, 0x883EB999L), 0x883EB999L), 0x883EB999L, 0x0EC253D5L, 0x883EB999L), // p_304->g_17
        0x39D8E7DFL, // p_304->g_43
        &p_304->g_13, // p_304->g_60
        (VECTOR(int16_t, 8))(0x6BEAL, (VECTOR(int16_t, 4))(0x6BEAL, (VECTOR(int16_t, 2))(0x6BEAL, 0x72A6L), 0x72A6L), 0x72A6L, 0x6BEAL, 0x72A6L), // p_304->g_66
        (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), // p_304->g_67
        0L, // p_304->g_83
        (VECTOR(int16_t, 4))(0x3005L, (VECTOR(int16_t, 2))(0x3005L, 0x0AD7L), 0x0AD7L), // p_304->g_88
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x766400F4L), 0x766400F4L), // p_304->g_97
        1L, // p_304->g_108
        {{{(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L)}}}, // p_304->g_112
        (void*)0, // p_304->g_121
        &p_304->g_121, // p_304->g_120
        0x6DD3C1BD19BEEC06L, // p_304->g_127
        &p_304->g_127, // p_304->g_126
        (void*)0, // p_304->g_137
        {0L}, // p_304->g_141
        (-1L), // p_304->g_146
        0x08BB0677L, // p_304->g_156
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L), // p_304->g_173
        0xA770L, // p_304->g_190
        (-1L), // p_304->g_203
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L), // p_304->g_208
        (VECTOR(uint8_t, 2))(0x45L, 0x23L), // p_304->g_252
        (VECTOR(uint16_t, 2))(6UL, 65535UL), // p_304->g_258
        (VECTOR(uint16_t, 8))(0xEC9EL, (VECTOR(uint16_t, 4))(0xEC9EL, (VECTOR(uint16_t, 2))(0xEC9EL, 0UL), 0UL), 0UL, 0xEC9EL, 0UL), // p_304->g_260
        0x5DC7L, // p_304->g_288
        &p_304->g_203, // p_304->g_298
        1L, // p_304->g_300
        0, // p_304->v_collective
        sequence_input[get_global_id(0)], // p_304->global_0_offset
        sequence_input[get_global_id(1)], // p_304->global_1_offset
        sequence_input[get_global_id(2)], // p_304->global_2_offset
        sequence_input[get_local_id(0)], // p_304->local_0_offset
        sequence_input[get_local_id(1)], // p_304->local_1_offset
        sequence_input[get_local_id(2)], // p_304->local_2_offset
        sequence_input[get_group_id(0)], // p_304->group_0_offset
        sequence_input[get_group_id(1)], // p_304->group_1_offset
        sequence_input[get_group_id(2)], // p_304->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 11)), permutations[0][get_linear_local_id()])), // p_304->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_305 = c_306;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_304);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_304->g_8.x, "p_304->g_8.x", print_hash_value);
    transparent_crc(p_304->g_8.y, "p_304->g_8.y", print_hash_value);
    transparent_crc(p_304->g_8.z, "p_304->g_8.z", print_hash_value);
    transparent_crc(p_304->g_8.w, "p_304->g_8.w", print_hash_value);
    transparent_crc(p_304->g_11.s0, "p_304->g_11.s0", print_hash_value);
    transparent_crc(p_304->g_11.s1, "p_304->g_11.s1", print_hash_value);
    transparent_crc(p_304->g_11.s2, "p_304->g_11.s2", print_hash_value);
    transparent_crc(p_304->g_11.s3, "p_304->g_11.s3", print_hash_value);
    transparent_crc(p_304->g_11.s4, "p_304->g_11.s4", print_hash_value);
    transparent_crc(p_304->g_11.s5, "p_304->g_11.s5", print_hash_value);
    transparent_crc(p_304->g_11.s6, "p_304->g_11.s6", print_hash_value);
    transparent_crc(p_304->g_11.s7, "p_304->g_11.s7", print_hash_value);
    transparent_crc(p_304->g_11.s8, "p_304->g_11.s8", print_hash_value);
    transparent_crc(p_304->g_11.s9, "p_304->g_11.s9", print_hash_value);
    transparent_crc(p_304->g_11.sa, "p_304->g_11.sa", print_hash_value);
    transparent_crc(p_304->g_11.sb, "p_304->g_11.sb", print_hash_value);
    transparent_crc(p_304->g_11.sc, "p_304->g_11.sc", print_hash_value);
    transparent_crc(p_304->g_11.sd, "p_304->g_11.sd", print_hash_value);
    transparent_crc(p_304->g_11.se, "p_304->g_11.se", print_hash_value);
    transparent_crc(p_304->g_11.sf, "p_304->g_11.sf", print_hash_value);
    transparent_crc(p_304->g_13, "p_304->g_13", print_hash_value);
    transparent_crc(p_304->g_14.x, "p_304->g_14.x", print_hash_value);
    transparent_crc(p_304->g_14.y, "p_304->g_14.y", print_hash_value);
    transparent_crc(p_304->g_15.x, "p_304->g_15.x", print_hash_value);
    transparent_crc(p_304->g_15.y, "p_304->g_15.y", print_hash_value);
    transparent_crc(p_304->g_17.s0, "p_304->g_17.s0", print_hash_value);
    transparent_crc(p_304->g_17.s1, "p_304->g_17.s1", print_hash_value);
    transparent_crc(p_304->g_17.s2, "p_304->g_17.s2", print_hash_value);
    transparent_crc(p_304->g_17.s3, "p_304->g_17.s3", print_hash_value);
    transparent_crc(p_304->g_17.s4, "p_304->g_17.s4", print_hash_value);
    transparent_crc(p_304->g_17.s5, "p_304->g_17.s5", print_hash_value);
    transparent_crc(p_304->g_17.s6, "p_304->g_17.s6", print_hash_value);
    transparent_crc(p_304->g_17.s7, "p_304->g_17.s7", print_hash_value);
    transparent_crc(p_304->g_43, "p_304->g_43", print_hash_value);
    transparent_crc(p_304->g_66.s0, "p_304->g_66.s0", print_hash_value);
    transparent_crc(p_304->g_66.s1, "p_304->g_66.s1", print_hash_value);
    transparent_crc(p_304->g_66.s2, "p_304->g_66.s2", print_hash_value);
    transparent_crc(p_304->g_66.s3, "p_304->g_66.s3", print_hash_value);
    transparent_crc(p_304->g_66.s4, "p_304->g_66.s4", print_hash_value);
    transparent_crc(p_304->g_66.s5, "p_304->g_66.s5", print_hash_value);
    transparent_crc(p_304->g_66.s6, "p_304->g_66.s6", print_hash_value);
    transparent_crc(p_304->g_66.s7, "p_304->g_66.s7", print_hash_value);
    transparent_crc(p_304->g_67.x, "p_304->g_67.x", print_hash_value);
    transparent_crc(p_304->g_67.y, "p_304->g_67.y", print_hash_value);
    transparent_crc(p_304->g_67.z, "p_304->g_67.z", print_hash_value);
    transparent_crc(p_304->g_67.w, "p_304->g_67.w", print_hash_value);
    transparent_crc(p_304->g_83, "p_304->g_83", print_hash_value);
    transparent_crc(p_304->g_88.x, "p_304->g_88.x", print_hash_value);
    transparent_crc(p_304->g_88.y, "p_304->g_88.y", print_hash_value);
    transparent_crc(p_304->g_88.z, "p_304->g_88.z", print_hash_value);
    transparent_crc(p_304->g_88.w, "p_304->g_88.w", print_hash_value);
    transparent_crc(p_304->g_97.x, "p_304->g_97.x", print_hash_value);
    transparent_crc(p_304->g_97.y, "p_304->g_97.y", print_hash_value);
    transparent_crc(p_304->g_97.z, "p_304->g_97.z", print_hash_value);
    transparent_crc(p_304->g_97.w, "p_304->g_97.w", print_hash_value);
    transparent_crc(p_304->g_108, "p_304->g_108", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_304->g_112[i][j][k], "p_304->g_112[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_304->g_127, "p_304->g_127", print_hash_value);
    transparent_crc(p_304->g_146, "p_304->g_146", print_hash_value);
    transparent_crc(p_304->g_156, "p_304->g_156", print_hash_value);
    transparent_crc(p_304->g_173.s0, "p_304->g_173.s0", print_hash_value);
    transparent_crc(p_304->g_173.s1, "p_304->g_173.s1", print_hash_value);
    transparent_crc(p_304->g_173.s2, "p_304->g_173.s2", print_hash_value);
    transparent_crc(p_304->g_173.s3, "p_304->g_173.s3", print_hash_value);
    transparent_crc(p_304->g_173.s4, "p_304->g_173.s4", print_hash_value);
    transparent_crc(p_304->g_173.s5, "p_304->g_173.s5", print_hash_value);
    transparent_crc(p_304->g_173.s6, "p_304->g_173.s6", print_hash_value);
    transparent_crc(p_304->g_173.s7, "p_304->g_173.s7", print_hash_value);
    transparent_crc(p_304->g_173.s8, "p_304->g_173.s8", print_hash_value);
    transparent_crc(p_304->g_173.s9, "p_304->g_173.s9", print_hash_value);
    transparent_crc(p_304->g_173.sa, "p_304->g_173.sa", print_hash_value);
    transparent_crc(p_304->g_173.sb, "p_304->g_173.sb", print_hash_value);
    transparent_crc(p_304->g_173.sc, "p_304->g_173.sc", print_hash_value);
    transparent_crc(p_304->g_173.sd, "p_304->g_173.sd", print_hash_value);
    transparent_crc(p_304->g_173.se, "p_304->g_173.se", print_hash_value);
    transparent_crc(p_304->g_173.sf, "p_304->g_173.sf", print_hash_value);
    transparent_crc(p_304->g_190, "p_304->g_190", print_hash_value);
    transparent_crc(p_304->g_203, "p_304->g_203", print_hash_value);
    transparent_crc(p_304->g_208.s0, "p_304->g_208.s0", print_hash_value);
    transparent_crc(p_304->g_208.s1, "p_304->g_208.s1", print_hash_value);
    transparent_crc(p_304->g_208.s2, "p_304->g_208.s2", print_hash_value);
    transparent_crc(p_304->g_208.s3, "p_304->g_208.s3", print_hash_value);
    transparent_crc(p_304->g_208.s4, "p_304->g_208.s4", print_hash_value);
    transparent_crc(p_304->g_208.s5, "p_304->g_208.s5", print_hash_value);
    transparent_crc(p_304->g_208.s6, "p_304->g_208.s6", print_hash_value);
    transparent_crc(p_304->g_208.s7, "p_304->g_208.s7", print_hash_value);
    transparent_crc(p_304->g_252.x, "p_304->g_252.x", print_hash_value);
    transparent_crc(p_304->g_252.y, "p_304->g_252.y", print_hash_value);
    transparent_crc(p_304->g_258.x, "p_304->g_258.x", print_hash_value);
    transparent_crc(p_304->g_258.y, "p_304->g_258.y", print_hash_value);
    transparent_crc(p_304->g_260.s0, "p_304->g_260.s0", print_hash_value);
    transparent_crc(p_304->g_260.s1, "p_304->g_260.s1", print_hash_value);
    transparent_crc(p_304->g_260.s2, "p_304->g_260.s2", print_hash_value);
    transparent_crc(p_304->g_260.s3, "p_304->g_260.s3", print_hash_value);
    transparent_crc(p_304->g_260.s4, "p_304->g_260.s4", print_hash_value);
    transparent_crc(p_304->g_260.s5, "p_304->g_260.s5", print_hash_value);
    transparent_crc(p_304->g_260.s6, "p_304->g_260.s6", print_hash_value);
    transparent_crc(p_304->g_260.s7, "p_304->g_260.s7", print_hash_value);
    transparent_crc(p_304->g_288, "p_304->g_288", print_hash_value);
    transparent_crc(p_304->g_300, "p_304->g_300", print_hash_value);
    transparent_crc(p_304->v_collective, "p_304->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 69; i++)
            transparent_crc(p_304->l_special_values[i], "p_304->l_special_values[i]", print_hash_value);
    transparent_crc(p_304->l_comm_values[get_linear_local_id()], "p_304->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_304->g_comm_values[get_linear_group_id() * 11 + get_linear_local_id()], "p_304->g_comm_values[get_linear_group_id() * 11 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
