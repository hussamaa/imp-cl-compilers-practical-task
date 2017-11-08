// --atomics 78 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 19,84,4 -l 1,28,2
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

__constant uint32_t permutations[10][56] = {
{20,35,45,4,32,36,44,38,21,37,25,1,49,23,19,3,14,52,17,5,6,53,42,39,18,51,43,0,54,31,24,55,50,2,9,29,28,10,8,41,7,13,34,15,16,46,27,40,11,26,48,33,30,22,12,47}, // permutation 0
{46,35,53,1,8,12,15,9,43,39,14,5,21,23,42,51,31,24,16,48,18,55,4,3,20,29,52,50,34,40,54,32,49,30,2,28,11,19,25,7,13,37,27,45,41,36,47,33,26,17,6,10,22,0,38,44}, // permutation 1
{51,43,55,45,21,54,3,15,49,53,38,7,46,30,40,24,8,47,4,23,28,17,1,14,39,32,6,35,11,13,20,33,2,26,25,10,50,5,37,12,52,16,44,29,9,27,18,36,31,42,19,34,41,0,48,22}, // permutation 2
{18,52,36,2,22,20,23,49,41,0,7,12,38,32,31,35,14,50,16,26,37,33,39,4,28,27,55,3,46,54,44,24,13,21,43,42,11,19,48,8,45,30,25,5,15,40,6,47,10,1,51,29,53,17,9,34}, // permutation 3
{39,5,26,29,44,33,42,55,22,13,43,38,21,1,31,50,17,28,35,9,12,54,49,32,51,0,40,34,7,3,47,10,25,16,18,15,46,48,23,8,11,2,14,45,53,52,19,41,20,37,4,24,6,27,36,30}, // permutation 4
{38,25,49,36,55,41,22,37,12,44,54,14,34,21,39,26,47,42,1,18,5,52,30,17,35,13,28,40,10,3,6,19,50,20,32,11,23,33,43,27,29,45,16,2,53,31,51,46,24,7,15,9,0,48,8,4}, // permutation 5
{21,25,6,19,23,2,55,38,18,16,50,1,22,49,54,37,15,9,12,5,47,8,17,30,33,32,24,28,46,11,42,26,51,13,34,20,7,29,41,35,39,53,52,48,3,10,36,4,27,43,45,40,14,44,0,31}, // permutation 6
{20,48,51,42,53,46,13,43,54,24,40,55,38,7,32,0,18,10,39,15,2,25,4,45,36,31,49,33,52,3,16,1,41,9,29,34,22,50,30,28,27,17,37,47,44,11,6,26,5,12,14,35,19,23,8,21}, // permutation 7
{19,4,46,3,23,16,53,0,8,40,44,32,36,52,28,34,22,55,47,41,35,37,31,18,45,2,48,26,42,33,54,20,30,5,24,6,12,15,49,14,11,1,17,29,39,7,21,25,27,10,43,50,13,38,51,9}, // permutation 8
{3,22,15,41,48,21,34,31,55,12,26,1,17,40,16,13,36,39,5,50,0,28,52,33,47,37,51,25,11,20,2,49,38,29,23,6,19,43,46,9,10,45,30,42,27,4,53,18,7,14,8,54,44,32,35,24} // permutation 9
};

// Seed: 4012247309

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int32_t  f0;
};

union U1 {
   volatile uint64_t  f0;
   int64_t  f1;
   int32_t  f2;
};

union U2 {
   volatile uint32_t  f0;
   volatile uint64_t  f1;
   volatile int32_t  f2;
};

struct S3 {
    int32_t g_12;
    int32_t * volatile g_11;
    VECTOR(uint64_t, 16) g_14;
    int32_t g_20;
    volatile VECTOR(int32_t, 16) g_22;
    VECTOR(int32_t, 8) g_23;
    uint8_t g_25[3];
    int8_t g_46;
    int32_t *g_49;
    int32_t ** volatile g_48[6];
    int32_t ** volatile g_50;
    uint32_t g_76;
    int32_t **g_99;
    uint32_t g_137;
    union U1 g_159[2];
    int32_t g_161;
    int32_t ** volatile g_163;
    struct S0 g_164[10];
    struct S0 *g_175;
    union U2 g_182;
    uint16_t g_190;
    VECTOR(int32_t, 4) g_193;
    int16_t g_196;
    union U1 g_209;
    volatile struct S0 g_211;
    VECTOR(int8_t, 16) g_228;
    volatile VECTOR(int8_t, 8) g_232;
    VECTOR(uint64_t, 8) g_239;
    uint8_t g_262;
    uint32_t g_267;
    struct S0 g_271;
    uint32_t g_284;
    struct S0 g_287[1];
    struct S0 * volatile g_288;
    VECTOR(int32_t, 2) g_312;
    union U1 g_320[5][7];
    uint64_t *g_325;
    VECTOR(int32_t, 4) g_371;
    union U2 g_379;
    uint8_t g_416;
    union U2 g_428;
    uint16_t g_458;
    int32_t *g_464;
    int32_t ** volatile g_463[9];
    int32_t ** volatile g_465;
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
uint32_t  func_1(struct S3 * p_467);
int32_t * func_3(int32_t  p_4, int32_t  p_5, int32_t  p_6, int32_t * p_7, int32_t * p_8, struct S3 * p_467);
uint8_t  func_33(uint8_t * p_34, uint32_t  p_35, uint64_t  p_36, int64_t  p_37, int32_t * p_38, struct S3 * p_467);
struct S0  func_60(int32_t * p_61, int32_t  p_62, uint64_t  p_63, struct S3 * p_467);
int32_t * func_64(int32_t  p_65, int16_t  p_66, int32_t  p_67, uint8_t * p_68, struct S3 * p_467);
struct S0  func_69(uint16_t  p_70, int16_t  p_71, uint64_t  p_72, int8_t  p_73, struct S3 * p_467);
union U1  func_79(int16_t  p_80, uint32_t  p_81, uint64_t  p_82, struct S3 * p_467);
int16_t  func_88(int64_t  p_89, int8_t  p_90, int8_t * p_91, struct S3 * p_467);
uint16_t  func_94(uint32_t * p_95, int32_t ** p_96, int32_t  p_97, int32_t ** p_98, struct S3 * p_467);
struct S0  func_128(int32_t ** p_129, uint64_t  p_130, uint32_t  p_131, uint32_t  p_132, int32_t ** p_133, struct S3 * p_467);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_467->g_11 p_467->g_14 p_467->g_12 p_467->l_comm_values p_467->g_22 p_467->g_23 p_467->g_25 p_467->g_comm_values p_467->g_20 p_467->g_50 p_467->g_76 p_467->g_49 p_467->g_99 p_467->g_46 p_467->g_137 p_467->g_161 p_467->g_163 p_467->g_164 p_467->g_182 p_467->g_190 p_467->g_209 p_467->g_211 p_467->g_175 p_467->g_239 p_467->g_193 p_467->g_271 p_467->g_284 p_467->g_287 p_467->g_288 p_467->g_320 p_467->g_228 p_467->g_325 p_467->g_371 p_467->g_379 p_467->g_416 p_467->g_428 p_467->g_458 p_467->g_465 p_467->g_464
 * writes: p_467->g_12 p_467->g_25 p_467->g_46 p_467->g_49 p_467->g_76 p_467->g_20 p_467->g_137 p_467->g_161 p_467->g_164 p_467->g_175 p_467->g_190 p_467->g_196 p_467->g_159.f2 p_467->g_239 p_467->g_284 p_467->g_287 p_467->g_262 p_467->g_267 p_467->g_416 p_467->g_14 p_467->g_458 p_467->g_464
 */
uint32_t  func_1(struct S3 * p_467)
{ /* block id: 4 */
    uint16_t l_2 = 0x4C90L;
    int32_t l_13 = 0L;
    int32_t l_15 = 0x4D9A54E5L;
    int32_t *l_16 = (void*)0;
    int32_t *l_17 = (void*)0;
    int32_t *l_18 = &p_467->g_12;
    int32_t *l_19 = &p_467->g_20;
    int32_t **l_462 = &p_467->g_49;
    int16_t l_466 = (-1L);
    (*p_467->g_465) = ((*l_462) = (l_2 , func_3(l_2, ((((*l_18) = (~(safe_div_func_int8_t_s_s((l_13 = ((p_467->g_11 == &p_467->g_12) && 18446744073709551608UL)), (((0x3588C556L ^ (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 4))(p_467->g_14.s7d26)).zxxyywyzzxwyywxy, (uint64_t)(((l_15 = p_467->g_12) , ((void*)0 != &l_15)) <= p_467->g_14.sa)))).s7ef2)).w < l_2)) || p_467->g_14.s6) , p_467->g_12))))) & p_467->g_14.s2) , (*p_467->g_11)), p_467->l_comm_values[(safe_mod_func_uint32_t_u_u(p_467->tid, 56))], l_19, l_18, p_467)));
    (*l_18) &= (**l_462);
    (*l_462) = (func_79(((void*)0 != &p_467->g_196), l_466, p_467->g_371.w, p_467) , (*p_467->g_465));
    return (**l_462);
}


/* ------------------------------------------ */
/* 
 * reads : p_467->g_22 p_467->g_23 p_467->g_25 p_467->g_comm_values p_467->g_20 p_467->g_11 p_467->g_12 p_467->g_50 p_467->g_76 p_467->g_49 p_467->g_99 p_467->g_46 p_467->g_137 p_467->g_161 p_467->g_163 p_467->g_164 p_467->g_182 p_467->g_190 p_467->g_209 p_467->g_211 p_467->g_175 p_467->g_239 p_467->g_193 p_467->g_271 p_467->g_284 p_467->g_287 p_467->g_288 p_467->g_320 p_467->g_228 p_467->g_325 p_467->g_14 p_467->g_371 p_467->g_379 p_467->g_416 p_467->g_428 p_467->g_458
 * writes: p_467->g_25 p_467->g_46 p_467->g_49 p_467->g_76 p_467->g_20 p_467->g_137 p_467->g_161 p_467->g_164 p_467->g_175 p_467->g_12 p_467->g_190 p_467->g_196 p_467->g_159.f2 p_467->g_239 p_467->g_284 p_467->g_287 p_467->g_262 p_467->g_267 p_467->g_416 p_467->g_14 p_467->g_458
 */
int32_t * func_3(int32_t  p_4, int32_t  p_5, int32_t  p_6, int32_t * p_7, int32_t * p_8, struct S3 * p_467)
{ /* block id: 8 */
    VECTOR(int32_t, 16) l_21 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
    uint8_t *l_24 = &p_467->g_25[1];
    int32_t *l_28 = &p_467->g_20;
    int8_t *l_45 = &p_467->g_46;
    VECTOR(uint32_t, 8) l_385 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
    uint8_t **l_422 = &l_24;
    uint8_t ***l_421 = &l_422;
    struct S0 *l_429 = &p_467->g_271;
    VECTOR(int32_t, 16) l_460 = (VECTOR(int32_t, 16))(0x67371D6BL, (VECTOR(int32_t, 4))(0x67371D6BL, (VECTOR(int32_t, 2))(0x67371D6BL, 0x3BA4B4F5L), 0x3BA4B4F5L), 0x3BA4B4F5L, 0x67371D6BL, 0x3BA4B4F5L, (VECTOR(int32_t, 2))(0x67371D6BL, 0x3BA4B4F5L), (VECTOR(int32_t, 2))(0x67371D6BL, 0x3BA4B4F5L), 0x67371D6BL, 0x3BA4B4F5L, 0x67371D6BL, 0x3BA4B4F5L);
    int i;
    if (((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_21.sea)).xyxy)), (-1L), 0L, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_467->g_22.se879)).xyzzyxwyzzwwxzzz)).s2ad2)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x01F51B43L, (-5L), 0x01C37F5EL, 0x5309757AL)))), ((VECTOR(int32_t, 2))(p_467->g_23.s01)).xxyx))).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0x0969E0CDL, (((*l_24)--) & ((void*)0 != l_28)), (-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(6L, 0x315EAC84L)))), (safe_div_func_uint32_t_u_u(((p_467->g_comm_values[p_467->tid] , ((safe_rshift_func_uint8_t_u_s(func_33(l_24, ((((safe_rshift_func_uint8_t_u_s((*l_28), 4)) && (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(((*p_467->g_11) == (((*l_45) = p_4) & p_467->g_comm_values[p_467->tid])), ((*l_28) || (*l_28)))) != 4UL), 8))) ^ p_5) , p_6), (*l_28), (*l_28), &p_467->g_12, p_467), 4)) , 0x2DC8L)) , 0x06637950L), l_385.s0)), (-1L), 0x05538C8DL)))).s35))), 0L, ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 2))((-1L))), 1L)).s3ad7, ((VECTOR(int32_t, 4))(4L)), ((VECTOR(int32_t, 4))(0x56AF6E5AL))))), ((VECTOR(int32_t, 4))((-3L)))))).y)
    { /* block id: 149 */
        uint8_t l_396 = 0x08L;
        uint64_t *l_405 = (void*)0;
        VECTOR(int8_t, 16) l_408 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x43L), 0x43L), 0x43L, (-1L), 0x43L, (VECTOR(int8_t, 2))((-1L), 0x43L), (VECTOR(int8_t, 2))((-1L), 0x43L), (-1L), 0x43L, (-1L), 0x43L);
        VECTOR(int8_t, 8) l_409 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x45L), 0x45L), 0x45L, 0L, 0x45L);
        int32_t l_430 = 3L;
        int32_t l_459 = 0x291434B8L;
        int i;
        for (p_5 = (-3); (p_5 != 23); p_5++)
        { /* block id: 152 */
            uint8_t **l_388 = &l_24;
            uint8_t ***l_389 = &l_388;
            int32_t l_414 = 1L;
            int16_t l_437 = 0x0B00L;
            uint16_t *l_444 = &p_467->g_190;
            int64_t *l_455 = (void*)0;
            int64_t *l_456 = (void*)0;
            uint16_t *l_457 = &p_467->g_458;
            (*l_389) = l_388;
            for (p_467->g_196 = 0; (p_467->g_196 <= (-7)); p_467->g_196 = safe_sub_func_uint64_t_u_u(p_467->g_196, 3))
            { /* block id: 156 */
                uint8_t l_398 = 0xDFL;
                VECTOR(int64_t, 4) l_410 = (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 0x7B8D053B8AD119C6L), 0x7B8D053B8AD119C6L);
                struct S0 **l_427 = &p_467->g_175;
                int i;
                for (p_467->g_267 = (-20); (p_467->g_267 > 8); p_467->g_267 = safe_add_func_uint32_t_u_u(p_467->g_267, 9))
                { /* block id: 159 */
                    int8_t l_397 = 0x3EL;
                    uint64_t *l_413[4][8];
                    int32_t *l_415[4][4][5] = {{{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0},{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0},{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0},{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0}},{{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0},{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0},{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0},{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0}},{{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0},{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0},{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0},{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0}},{{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0},{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0},{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0},{&p_467->g_12,(void*)0,(void*)0,&p_467->g_161,(void*)0}}};
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_413[i][j] = (void*)0;
                    }
                    for (p_467->g_46 = (-2); (p_467->g_46 == 3); ++p_467->g_46)
                    { /* block id: 162 */
                        l_397 &= ((*p_8) = ((*l_28) = l_396));
                        if (l_398)
                            continue;
                    }
                    (*p_7) = ((safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(p_4, (l_405 == l_405))), (((l_397 > p_467->g_284) ^ (safe_mod_func_int64_t_s_s((l_398 && ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))(l_408.s0eafaa55)).s76, ((VECTOR(int8_t, 8))(l_409.s20165127)).s21))).lo), (((((VECTOR(int64_t, 16))(l_410.yzzyxyzxyzxwzxzz)).s2 >= (safe_div_func_uint32_t_u_u(((void*)0 != l_413[0][6]), 0x077AB678L))) & l_414) ^ (*p_467->g_11))))) && (*l_28)))), 9)) && p_467->g_12);
                    ++p_467->g_416;
                }
                (*p_467->g_49) = (safe_rshift_func_int8_t_s_s(((((*p_8) = (!(l_414 != (((l_408.sb > (l_421 == (void*)0)) | (safe_mul_func_uint8_t_u_u((p_5 , (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x4813C6E47968D2B0L, 9L)), 0x38B28CCF54CD4F6DL, 0x4EE083C3D0A9B1ACL)).y >= (safe_add_func_uint32_t_u_u(FAKE_DIVERGE(p_467->local_0_offset, get_local_id(0), 10), (l_430 = (((*l_427) = ((*l_28) , &p_467->g_271)) == (p_467->g_428 , l_429))))))), p_6))) && l_410.z)))) == (*p_467->g_49)) >= l_409.s3), l_414));
                if (l_414)
                    continue;
            }
            (*p_8) = (p_5 ^ (p_4 >= (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((l_414 , ((((--p_467->g_14.s5) >= (((l_437 <= 0UL) || 0x24F2L) ^ 0x3979FDE5L)) <= (safe_mod_func_uint64_t_u_u((safe_add_func_uint64_t_u_u((safe_add_func_uint16_t_u_u((--(*l_444)), (((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(1UL, ((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(4L, ((&p_467->g_49 != (((((*l_457) &= (safe_lshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0L, 1L)).xyxxxxxy)).s05, (int64_t)(l_430 &= ((p_467->g_164[3].f0 | l_408.s5) ^ p_467->g_239.s0))))).lo, 0x399928EEF645CC5CL)), p_5)) && p_6), 1UL)) , p_467->g_239.s6), 4))) && l_459) > p_5) , (void*)0)) , p_4), ((VECTOR(int8_t, 4))(0x0EL)), 0x74L, 0x4AL))))), ((VECTOR(int8_t, 8))((-1L)))))).s44))), ((VECTOR(uint8_t, 4))(6UL)), 255UL)).hi, ((VECTOR(uint8_t, 4))(0xDEL))))).y , 1L))), p_6)), p_467->g_12))) > p_4)), l_414)), 15))));
        }
        (*p_467->g_11) = ((VECTOR(int32_t, 8))(l_460.sfc828f39)).s3;
    }
    else
    { /* block id: 184 */
        int32_t **l_461 = &l_28;
        (*l_28) = 0L;
        (*l_461) = l_28;
    }
    p_8 = l_28;
    return l_28;
}


/* ------------------------------------------ */
/* 
 * reads : p_467->g_50 p_467->g_23 p_467->g_76 p_467->g_49 p_467->g_99 p_467->g_46 p_467->g_25 p_467->g_comm_values p_467->g_137 p_467->g_161 p_467->g_163 p_467->g_164 p_467->g_11 p_467->g_182 p_467->g_190 p_467->g_12 p_467->g_209 p_467->g_211 p_467->g_175 p_467->g_239 p_467->g_20 p_467->g_193 p_467->g_271 p_467->g_284 p_467->g_287 p_467->g_288 p_467->g_320 p_467->g_228 p_467->g_325 p_467->g_14 p_467->g_371 p_467->g_379
 * writes: p_467->g_49 p_467->g_76 p_467->g_20 p_467->g_137 p_467->g_161 p_467->g_164 p_467->g_175 p_467->g_12 p_467->g_190 p_467->g_196 p_467->g_159.f2 p_467->g_239 p_467->g_284 p_467->g_287 p_467->g_262 p_467->g_25
 */
uint8_t  func_33(uint8_t * p_34, uint32_t  p_35, uint64_t  p_36, int64_t  p_37, int32_t * p_38, struct S3 * p_467)
{ /* block id: 11 */
    int32_t **l_47 = (void*)0;
    int32_t l_74 = 0L;
    VECTOR(int32_t, 16) l_87 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7B55804EL), 0x7B55804EL), 0x7B55804EL, 1L, 0x7B55804EL, (VECTOR(int32_t, 2))(1L, 0x7B55804EL), (VECTOR(int32_t, 2))(1L, 0x7B55804EL), 1L, 0x7B55804EL, 1L, 0x7B55804EL);
    int64_t l_210[9][2] = {{0x379BA9FE946A76BEL,0x379BA9FE946A76BEL},{0x379BA9FE946A76BEL,0x379BA9FE946A76BEL},{0x379BA9FE946A76BEL,0x379BA9FE946A76BEL},{0x379BA9FE946A76BEL,0x379BA9FE946A76BEL},{0x379BA9FE946A76BEL,0x379BA9FE946A76BEL},{0x379BA9FE946A76BEL,0x379BA9FE946A76BEL},{0x379BA9FE946A76BEL,0x379BA9FE946A76BEL},{0x379BA9FE946A76BEL,0x379BA9FE946A76BEL},{0x379BA9FE946A76BEL,0x379BA9FE946A76BEL}};
    uint64_t l_289 = 0xC4F9A4B633B7F010L;
    VECTOR(uint32_t, 2) l_313 = (VECTOR(uint32_t, 2))(0x89F4B7CEL, 4294967291UL);
    uint16_t l_328 = 0x3C62L;
    union U2 *l_336[7][10][3] = {{{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182}},{{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182}},{{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182}},{{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182}},{{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182}},{{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182}},{{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182},{&p_467->g_182,&p_467->g_182,&p_467->g_182}}};
    int8_t l_350 = 2L;
    uint8_t l_351 = 255UL;
    int32_t *l_359 = (void*)0;
    uint16_t l_384 = 0x8908L;
    int i, j, k;
    (*p_467->g_50) = &p_467->g_20;
    for (p_36 = 13; (p_36 != 48); ++p_36)
    { /* block id: 15 */
        uint16_t l_57 = 0xB476L;
        VECTOR(int64_t, 4) l_311 = (VECTOR(int64_t, 4))(0x02BEF89B48389AF5L, (VECTOR(int64_t, 2))(0x02BEF89B48389AF5L, 0x2AE100CF8C86D933L), 0x2AE100CF8C86D933L);
        int32_t l_337 = 0x3E49D123L;
        int32_t *l_338 = &l_74;
        int32_t *l_339 = &p_467->g_320[0][0].f2;
        int32_t *l_340 = &l_74;
        int32_t *l_341 = &p_467->g_12;
        int32_t *l_342 = &p_467->g_20;
        int32_t *l_343 = &p_467->g_12;
        int32_t *l_344 = (void*)0;
        int32_t *l_345 = &l_74;
        int32_t *l_346 = &l_337;
        int32_t *l_347[4][8] = {{&l_74,&l_74,(void*)0,(void*)0,&l_74,(void*)0,(void*)0,&l_74},{&l_74,&l_74,(void*)0,(void*)0,&l_74,(void*)0,(void*)0,&l_74},{&l_74,&l_74,(void*)0,(void*)0,&l_74,(void*)0,(void*)0,&l_74},{&l_74,&l_74,(void*)0,(void*)0,&l_74,(void*)0,(void*)0,&l_74}};
        int32_t l_348[6] = {0x223077F3L,0x223077F3L,0x223077F3L,0x223077F3L,0x223077F3L,0x223077F3L};
        int64_t l_349 = 0L;
        VECTOR(uint8_t, 16) l_383 = (VECTOR(uint8_t, 16))(0xB6L, (VECTOR(uint8_t, 4))(0xB6L, (VECTOR(uint8_t, 2))(0xB6L, 251UL), 251UL), 251UL, 0xB6L, 251UL, (VECTOR(uint8_t, 2))(0xB6L, 251UL), (VECTOR(uint8_t, 2))(0xB6L, 251UL), 0xB6L, 251UL, 0xB6L, 251UL);
        int i, j;
        for (p_37 = 26; (p_37 <= 24); --p_37)
        { /* block id: 18 */
            int32_t *l_55 = &p_467->g_20;
            int32_t *l_56[2];
            uint32_t *l_75 = &p_467->g_76;
            uint8_t *l_321[8] = {&p_467->g_25[2],&p_467->g_25[2],&p_467->g_25[2],&p_467->g_25[2],&p_467->g_25[2],&p_467->g_25[2],&p_467->g_25[2],&p_467->g_25[2]};
            union U2 *l_333 = &p_467->g_182;
            int i;
            for (i = 0; i < 2; i++)
                l_56[i] = &p_467->g_20;
            l_57++;
            (*p_467->g_288) = func_60(func_64(p_467->g_23.s7, p_35, ((func_69(((((l_57 > p_35) == l_74) , ((*l_55) = (--(*l_75)))) != (((func_79(((((VECTOR(uint16_t, 2))(0UL, 65533UL)).even || ((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 2))(l_87.s03)).odd, 1L)) < (func_88(l_57, ((safe_lshift_func_uint16_t_u_u(func_94(p_467->g_49, p_467->g_99, p_467->g_46, l_47, p_467), p_467->g_25[1])) < (-1L)), p_34, p_467) , p_36))) && l_57), p_467->g_23.s2, p_467->g_comm_values[p_467->tid], p_467) , p_37) > 2L) <= 18446744073709551614UL)), p_35, p_467->g_25[0], l_210[6][1], p_467) , (**p_467->g_50)) <= p_467->g_193.x), &p_467->g_25[1], p_467), l_57, p_467->g_193.z, p_467);
            if (l_289)
                break;
            if ((p_35 != 0x4CC6C807AA68DA57L))
            { /* block id: 103 */
                return (*p_34);
            }
            else
            { /* block id: 105 */
                int8_t l_300 = 0x62L;
                int32_t l_324 = (-9L);
                uint8_t *l_329 = (void*)0;
                union U2 **l_334[7][6] = {{(void*)0,&l_333,(void*)0,&l_333,(void*)0,&l_333},{(void*)0,&l_333,(void*)0,&l_333,(void*)0,&l_333},{(void*)0,&l_333,(void*)0,&l_333,(void*)0,&l_333},{(void*)0,&l_333,(void*)0,&l_333,(void*)0,&l_333},{(void*)0,&l_333,(void*)0,&l_333,(void*)0,&l_333},{(void*)0,&l_333,(void*)0,&l_333,(void*)0,&l_333},{(void*)0,&l_333,(void*)0,&l_333,(void*)0,&l_333}};
                union U2 *l_335[4];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_335[i] = &p_467->g_182;
                for (p_467->g_161 = 0; (p_467->g_161 == 1); p_467->g_161 = safe_add_func_int8_t_s_s(p_467->g_161, 9))
                { /* block id: 108 */
                    uint32_t **l_322 = (void*)0;
                    uint32_t **l_323 = &l_75;
                    int16_t *l_326 = &p_467->g_196;
                    uint16_t l_327[5][4][10] = {{{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL},{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL},{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL},{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL}},{{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL},{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL},{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL},{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL}},{{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL},{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL},{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL},{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL}},{{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL},{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL},{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL},{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL}},{{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL},{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL},{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL},{0x84F5L,0x10F9L,7UL,65535UL,65527UL,0x500DL,65531UL,0xA1EDL,5UL,0xF03DL}}};
                    int32_t **l_330 = (void*)0;
                    int32_t **l_331 = &l_56[0];
                    int32_t **l_332 = &l_55;
                    int i, j, k;
                    if ((atomic_inc(&p_467->g_atomic_input[78 * get_linear_group_id() + 76]) == 6))
                    { /* block id: 110 */
                        uint8_t l_292 = 0UL;
                        uint64_t l_293 = 0xE1C8C73883698E11L;
                        uint64_t l_294 = 0xF97873ECAE8048ABL;
                        int32_t l_295 = 0x78AF2F0BL;
                        uint64_t l_296 = 5UL;
                        uint8_t l_297 = 255UL;
                        l_293 &= l_292;
                        l_295 ^= l_294;
                        l_297 ^= l_296;
                        unsigned int result = 0;
                        result += l_292;
                        result += l_293;
                        result += l_294;
                        result += l_295;
                        result += l_296;
                        result += l_297;
                        atomic_add(&p_467->g_special_values[78 * get_linear_group_id() + 76], result);
                    }
                    else
                    { /* block id: 114 */
                        (1 + 1);
                    }
                    (*l_332) = ((*l_331) = func_64((safe_mod_func_uint8_t_u_u(0x04L, (l_300 || (((VECTOR(uint16_t, 2))(0x22ABL, 5UL)).even | (safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_300 < ((safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(((*l_326) = ((((((safe_sub_func_uint32_t_u_u(((*p_467->g_11) || (l_324 ^= (((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 2))(l_311.wy)).yxyyxyyxyyyyxxxy, ((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 2))(p_467->g_312.xy)).xxyyyyxxyyyxyyyx, ((VECTOR(uint32_t, 16))(l_313.xxxxxxyyyxyyxxyy)))))))).sc != (((safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((((FAKE_DIVERGE(p_467->global_2_offset, get_global_id(2), 10) <= (((*l_323) = ((0x1464EEE5L || (p_35 <= (safe_sub_func_uint64_t_u_u(0xF83F7DA681A5B53CL, ((p_467->g_320[0][0] , func_64(p_467->g_228.s5, l_300, l_300, l_321[6], p_467)) != l_56[1]))))) , (void*)0)) == &p_467->g_76)) | l_300) ^ 0x5035F703L), FAKE_DIVERGE(p_467->group_2_offset, get_group_id(2), 10))), l_57)) ^ l_300) || 65534UL)))), p_467->g_228.sa)) >= 1L) , (void*)0) != p_467->g_325) , p_467->g_14.s1) < 4294967287UL)), p_467->g_23.s4)), l_327[3][0][0])) , p_35)), p_467->g_23.s2)), l_311.x)))))), p_467->g_46, l_328, l_329, p_467));
                    (*l_332) = &l_324;
                }
                l_335[1] = (l_333 = l_333);
                l_337 &= (p_467->g_239.s1 && ((void*)0 != l_336[4][2][2]));
            }
        }
        l_351--;
        for (p_467->g_137 = 0; (p_467->g_137 < 58); p_467->g_137 = safe_add_func_int8_t_s_s(p_467->g_137, 7))
        { /* block id: 132 */
            int32_t *l_358 = &l_74;
            VECTOR(int64_t, 2) l_366 = (VECTOR(int64_t, 2))((-6L), 0x1BB9AA9E102D2CBCL);
            int i;
            for (p_467->g_190 = 0; (p_467->g_190 <= 42); p_467->g_190 = safe_add_func_uint16_t_u_u(p_467->g_190, 9))
            { /* block id: 135 */
                uint64_t *l_364 = (void*)0;
                uint64_t *l_365 = &l_289;
                uint64_t *l_372 = (void*)0;
                uint64_t *l_373 = (void*)0;
                uint64_t *l_374 = (void*)0;
                int32_t l_375 = 0x3DE92B85L;
                int32_t l_378 = 0x3AC8CD26L;
                uint8_t *l_380 = &p_467->g_262;
                l_359 = l_358;
                (*p_467->g_175) = (*p_467->g_175);
                (*p_467->g_49) &= ((safe_mul_func_int8_t_s_s(0x0CL, (safe_mul_func_uint8_t_u_u((*p_34), ((VECTOR(int8_t, 8))(5L, (((*l_380) = (((*l_365) |= GROUP_DIVERGE(1, 1)) ^ ((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),VECTOR(int64_t, 8),((VECTOR(int64_t, 4))((((VECTOR(int64_t, 2))(l_366.yy)).even & ((VECTOR(uint64_t, 2))(9UL, 1UL)).hi), (safe_div_func_int16_t_s_s((0x4827L <= ((l_375 = ((safe_lshift_func_int16_t_s_s(p_467->g_25[1], 6)) && ((VECTOR(int32_t, 2))(p_467->g_371.yz)).even)) & ((((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))((safe_add_func_uint64_t_u_u(l_378, (p_34 == (void*)0))), 0xC770L, 5UL, 9UL)).zzxwywxw))))).s2 > (p_467->g_379 , ((*l_338) && (*l_359)))) >= p_36))), p_467->g_46)), 0L, 2L)).zzwyxzzz, ((VECTOR(int64_t, 8))((-5L))), ((VECTOR(int64_t, 8))(7L))))).s4)) != GROUP_DIVERGE(2, 1)), ((VECTOR(int8_t, 2))((-10L))), p_37, ((VECTOR(int8_t, 2))((-1L))), 0x26L)).s5)))) == 0x73142E51L);
            }
        }
        (*p_38) ^= ((++(*p_34)) >= (((*l_342) &= ((VECTOR(uint8_t, 8))(l_383.scbbb91d3)).s4) || (*l_340)));
    }
    return l_384;
}


/* ------------------------------------------ */
/* 
 * reads : p_467->g_12 p_467->g_284 p_467->g_50 p_467->g_49 p_467->g_20 p_467->g_287
 * writes: p_467->g_49 p_467->g_12 p_467->g_284 p_467->g_20
 */
struct S0  func_60(int32_t * p_61, int32_t  p_62, uint64_t  p_63, struct S3 * p_467)
{ /* block id: 91 */
    int32_t *l_272 = &p_467->g_20;
    int32_t **l_273 = &p_467->g_49;
    int32_t l_277 = 0x0BB72D57L;
    int32_t l_278 = 0L;
    int32_t l_282 = 5L;
    int32_t l_283[2];
    int i;
    for (i = 0; i < 2; i++)
        l_283[i] = 0x129700CEL;
    l_272 = l_272;
    (*l_273) = l_272;
    for (p_467->g_12 = (-27); (p_467->g_12 < (-9)); p_467->g_12 = safe_add_func_int8_t_s_s(p_467->g_12, 1))
    { /* block id: 96 */
        int32_t *l_276 = (void*)0;
        int32_t *l_279 = (void*)0;
        int32_t l_280 = 0x38E7512DL;
        int32_t *l_281[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        p_467->g_284++;
    }
    (*p_467->g_49) = (**p_467->g_50);
    return p_467->g_287[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_467->g_50 p_467->g_49
 * writes:
 */
int32_t * func_64(int32_t  p_65, int16_t  p_66, int32_t  p_67, uint8_t * p_68, struct S3 * p_467)
{ /* block id: 89 */
    return (*p_467->g_50);
}


/* ------------------------------------------ */
/* 
 * reads : p_467->g_211 p_467->g_175 p_467->g_209.f0 p_467->g_228 p_467->l_comm_values p_467->g_76 p_467->g_232 p_467->g_190 p_467->g_23 p_467->g_49 p_467->g_20 p_467->g_164.f0 p_467->g_239 p_467->g_161 p_467->g_50 p_467->g_163 p_467->g_164 p_467->g_193 p_467->g_267 p_467->g_14 p_467->g_12 p_467->g_11 p_467->g_271
 * writes: p_467->g_164 p_467->g_228 p_467->g_190 p_467->g_239 p_467->g_161 p_467->g_49 p_467->g_76 p_467->g_196 p_467->g_262 p_467->g_267 p_467->g_12 p_467->g_20
 */
struct S0  func_69(uint16_t  p_70, int16_t  p_71, uint64_t  p_72, int8_t  p_73, struct S3 * p_467)
{ /* block id: 72 */
    int64_t l_212 = 0L;
    int32_t **l_213 = &p_467->g_49;
    uint64_t *l_216 = (void*)0;
    uint64_t *l_217 = (void*)0;
    uint64_t *l_218 = (void*)0;
    uint64_t *l_219 = (void*)0;
    uint64_t *l_220 = (void*)0;
    uint64_t *l_221 = (void*)0;
    int8_t *l_229 = (void*)0;
    int8_t *l_230[2];
    VECTOR(int8_t, 8) l_231 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x4DL), 0x4DL), 0x4DL, 1L, 0x4DL);
    VECTOR(int8_t, 8) l_233 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x3EL), 0x3EL), 0x3EL, (-1L), 0x3EL);
    uint64_t *l_238[6];
    int16_t l_240 = (-4L);
    uint16_t *l_243[7][1][2] = {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}};
    uint32_t *l_244 = (void*)0;
    uint32_t *l_245 = (void*)0;
    uint32_t *l_246[5] = {&p_467->g_137,&p_467->g_137,&p_467->g_137,&p_467->g_137,&p_467->g_137};
    VECTOR(uint16_t, 2) l_247 = (VECTOR(uint16_t, 2))(0UL, 8UL);
    VECTOR(uint16_t, 16) l_248 = (VECTOR(uint16_t, 16))(0x649DL, (VECTOR(uint16_t, 4))(0x649DL, (VECTOR(uint16_t, 2))(0x649DL, 0x5928L), 0x5928L), 0x5928L, 0x649DL, 0x5928L, (VECTOR(uint16_t, 2))(0x649DL, 0x5928L), (VECTOR(uint16_t, 2))(0x649DL, 0x5928L), 0x649DL, 0x5928L, 0x649DL, 0x5928L);
    VECTOR(uint16_t, 4) l_253 = (VECTOR(uint16_t, 4))(0x7356L, (VECTOR(uint16_t, 2))(0x7356L, 65535UL), 65535UL);
    int16_t *l_254 = (void*)0;
    int16_t *l_255 = &p_467->g_196;
    int16_t *l_261 = (void*)0;
    int32_t l_268 = 0x4A3FBE18L;
    int32_t *l_269 = (void*)0;
    int32_t *l_270[2];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_230[i] = &p_467->g_46;
    for (i = 0; i < 6; i++)
        l_238[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_270[i] = &p_467->g_209.f2;
    (*p_467->g_175) = p_467->g_211;
    (*p_467->g_175) = func_128((l_212 , l_213), (((VECTOR(uint16_t, 2))(0xF773L, 0xDF25L)).hi , (p_467->g_239.s5 ^= ((safe_mul_func_int16_t_s_s(((p_72 = 0x719CF51B75F4EF1CL) & (&p_73 == (void*)0)), (safe_mod_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 16))(0x2304L, p_467->g_209.f0, (((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 8))(p_467->g_228.sfecf5fce)).s7470301147165423, (int8_t)(p_467->l_comm_values[(safe_mod_func_uint32_t_u_u(p_467->tid, 56))] == (p_467->g_228.s7 = p_467->g_76))))).sced2, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_231.s43)).xyyyxyxyxxyyxxyy)).even, ((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(p_467->g_232.s41)).yxxy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_233.s32543466)), ((VECTOR(int8_t, 8))(((safe_lshift_func_uint16_t_u_s((((!(((safe_sub_func_uint16_t_u_u(((p_467->g_190 = p_467->g_190) & 4L), p_467->g_23.s4)) , 0x6212ADDCL) , p_73)) && (**l_213)) & 0x1256965F758B053FL), 15)) | p_71), 0x79L, ((VECTOR(int8_t, 2))(8L)), (**l_213), 0L, 1L, 0x49L)))).se4)).yyyx, ((VECTOR(int8_t, 4))(0L))))).wzxyzxww))))).even))), ((VECTOR(int8_t, 4))(0x31L)), ((VECTOR(int8_t, 4))(7L))))), (int8_t)p_467->g_164[3].f0))).w, 1UL)) && 0x1175L) , (-10L)), (**l_213), ((VECTOR(int16_t, 4))(0x7595L)), ((VECTOR(int16_t, 4))(3L)), 0x4DA2L, (**l_213), 0L, 0x0C57L)).sc5, ((VECTOR(int16_t, 2))(0x63B1L))))).xyyxyxyxyxxxyxxx)).s6, 14)), p_73)))) , 2UL))), p_467->g_23.s5, l_240, l_213, p_467);
    (**l_213) = (((((**l_213) <= (safe_lshift_func_int8_t_s_u(((p_70 &= p_71) >= ((((*p_467->g_11) = ((p_467->g_76 = p_467->g_193.w) <= ((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 2))(l_247.yy)).yxxxxyxyyyxyyyyy, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 8))(l_248.sb8dcb9d7)).s65, (uint16_t)(l_268 = (safe_lshift_func_int8_t_s_u((((**l_213) & (((*l_255) = (safe_rshift_func_uint16_t_u_s((p_467->g_190 = ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_253.wzxyyywx)).s01)).lo), 15))) | (safe_div_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s((safe_add_func_uint8_t_u_u((p_467->g_228.s8 , ((0xA915L != (p_467->g_262 = p_73)) < p_467->g_239.s5)), (safe_mod_func_uint16_t_u_u((p_467->g_267 |= ((safe_mul_func_int8_t_s_s(p_467->g_228.s4, (**l_213))) <= p_73)), p_467->g_14.s3)))))) == 5UL), p_71)))) == p_467->g_12), (**l_213)))), (uint16_t)p_72))).xyyyxxyxxxyyyxxx))).se)) > p_72) < p_71)), p_467->g_193.w))) != 0x7BB2L) || p_70) == p_72);
    return p_467->g_271;
}


/* ------------------------------------------ */
/* 
 * reads : p_467->g_46 p_467->g_137 p_467->g_14 p_467->g_159 p_467->g_25 p_467->g_12 p_467->g_161 p_467->g_50 p_467->g_49 p_467->g_163 p_467->g_164 p_467->g_11 p_467->g_182 p_467->g_190 p_467->g_193 p_467->g_209
 * writes: p_467->g_137 p_467->g_14 p_467->g_161 p_467->g_49 p_467->g_164 p_467->g_175 p_467->g_12 p_467->g_190 p_467->g_196 p_467->g_159.f2
 */
union U1  func_79(int16_t  p_80, uint32_t  p_81, uint64_t  p_82, struct S3 * p_467)
{ /* block id: 44 */
    int32_t **l_134 = (void*)0;
    uint32_t *l_135 = (void*)0;
    uint32_t *l_136 = &p_467->g_137;
    struct S0 *l_165 = &p_467->g_164[3];
    int32_t l_168[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
    int64_t l_171 = 0x4A6380375A509CE9L;
    int32_t *l_176[1];
    uint8_t *l_194 = &p_467->g_25[1];
    uint32_t l_203[5] = {4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL};
    int i;
    for (i = 0; i < 1; i++)
        l_176[i] = &p_467->g_159[0].f2;
    (*l_165) = func_128(l_134, p_82, p_81, ((*l_136) |= p_467->g_46), l_134, p_467);
    for (p_80 = 0; (p_80 != 13); p_80++)
    { /* block id: 55 */
        int32_t *l_169 = &p_467->g_161;
        int32_t *l_170[7][7] = {{&l_168[5],(void*)0,&l_168[5],&l_168[5],(void*)0,&l_168[5],&l_168[5]},{&l_168[5],(void*)0,&l_168[5],&l_168[5],(void*)0,&l_168[5],&l_168[5]},{&l_168[5],(void*)0,&l_168[5],&l_168[5],(void*)0,&l_168[5],&l_168[5]},{&l_168[5],(void*)0,&l_168[5],&l_168[5],(void*)0,&l_168[5],&l_168[5]},{&l_168[5],(void*)0,&l_168[5],&l_168[5],(void*)0,&l_168[5],&l_168[5]},{&l_168[5],(void*)0,&l_168[5],&l_168[5],(void*)0,&l_168[5],&l_168[5]},{&l_168[5],(void*)0,&l_168[5],&l_168[5],(void*)0,&l_168[5],&l_168[5]}};
        VECTOR(uint64_t, 8) l_172 = (VECTOR(uint64_t, 8))(0x8293AB69775CC268L, (VECTOR(uint64_t, 4))(0x8293AB69775CC268L, (VECTOR(uint64_t, 2))(0x8293AB69775CC268L, 0x7C96AD61939E1443L), 0x7C96AD61939E1443L), 0x7C96AD61939E1443L, 0x8293AB69775CC268L, 0x7C96AD61939E1443L);
        int i, j;
        if (p_82)
            break;
        l_172.s4--;
    }
    p_467->g_175 = l_165;
    if (((*p_467->g_11) = 0L))
    { /* block id: 61 */
        int32_t l_185 = 0x7E730544L;
        int32_t **l_188 = &l_176[0];
        uint16_t *l_189 = &p_467->g_190;
        int16_t *l_195 = &p_467->g_196;
        int32_t l_197[8][9] = {{0x42100304L,0x2C0CD27EL,0x4EE0FCA2L,0x4EE0FCA2L,0x2C0CD27EL,0x42100304L,0x202A8E1AL,0x2D946091L,0x34B8ED67L},{0x42100304L,0x2C0CD27EL,0x4EE0FCA2L,0x4EE0FCA2L,0x2C0CD27EL,0x42100304L,0x202A8E1AL,0x2D946091L,0x34B8ED67L},{0x42100304L,0x2C0CD27EL,0x4EE0FCA2L,0x4EE0FCA2L,0x2C0CD27EL,0x42100304L,0x202A8E1AL,0x2D946091L,0x34B8ED67L},{0x42100304L,0x2C0CD27EL,0x4EE0FCA2L,0x4EE0FCA2L,0x2C0CD27EL,0x42100304L,0x202A8E1AL,0x2D946091L,0x34B8ED67L},{0x42100304L,0x2C0CD27EL,0x4EE0FCA2L,0x4EE0FCA2L,0x2C0CD27EL,0x42100304L,0x202A8E1AL,0x2D946091L,0x34B8ED67L},{0x42100304L,0x2C0CD27EL,0x4EE0FCA2L,0x4EE0FCA2L,0x2C0CD27EL,0x42100304L,0x202A8E1AL,0x2D946091L,0x34B8ED67L},{0x42100304L,0x2C0CD27EL,0x4EE0FCA2L,0x4EE0FCA2L,0x2C0CD27EL,0x42100304L,0x202A8E1AL,0x2D946091L,0x34B8ED67L},{0x42100304L,0x2C0CD27EL,0x4EE0FCA2L,0x4EE0FCA2L,0x2C0CD27EL,0x42100304L,0x202A8E1AL,0x2D946091L,0x34B8ED67L}};
        uint64_t *l_200 = (void*)0;
        uint64_t *l_201 = (void*)0;
        uint64_t *l_202 = (void*)0;
        int i, j;
        l_197[5][7] ^= (safe_unary_minus_func_uint16_t_u((FAKE_DIVERGE(p_467->local_1_offset, get_local_id(1), 10) & ((safe_div_func_uint64_t_u_u((safe_div_func_int64_t_s_s((p_467->g_182 , (safe_mul_func_int16_t_s_s(((*l_195) = ((((((p_81 & (l_185 == (((safe_rshift_func_uint8_t_u_u((!(&p_467->g_49 == l_188)), 2)) <= (++(*l_189))) ^ (((VECTOR(int32_t, 2))(p_467->g_193.wz)).even == (-1L))))) , (-8L)) < ((((&p_467->g_25[1] != (l_194 = l_194)) , 5UL) || l_185) > p_81)) > p_81) < p_467->g_12) ^ 1L)), 0xD2B0L))), 0x3A491E4C795E8D71L)), p_80)) & 0x37FBBC769E7B83F1L))));
        (**l_188) = (safe_lshift_func_int16_t_s_u(((+(l_203[3] = p_467->g_46)) == (safe_add_func_int8_t_s_s(p_467->g_161, p_80))), 7));
    }
    else
    { /* block id: 68 */
        uint32_t l_206 = 0x7AED1B31L;
        --l_206;
    }
    return p_467->g_209;
}


/* ------------------------------------------ */
/* 
 * reads : p_467->g_25
 * writes:
 */
int16_t  func_88(int64_t  p_89, int8_t  p_90, int8_t * p_91, struct S3 * p_467)
{ /* block id: 41 */
    int32_t *l_121 = (void*)0;
    int32_t *l_122 = (void*)0;
    int32_t *l_123[6] = {&p_467->g_12,&p_467->g_12,&p_467->g_12,&p_467->g_12,&p_467->g_12,&p_467->g_12};
    int16_t l_124 = 0x2993L;
    VECTOR(uint32_t, 2) l_125 = (VECTOR(uint32_t, 2))(1UL, 0xC40A721CL);
    int i;
    ++l_125.y;
    return p_467->g_25[1];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_94(uint32_t * p_95, int32_t ** p_96, int32_t  p_97, int32_t ** p_98, struct S3 * p_467)
{ /* block id: 22 */
    if ((atomic_inc(&p_467->g_atomic_input[78 * get_linear_group_id() + 3]) == 5))
    { /* block id: 24 */
        int16_t l_100 = 0x2A6FL;
        int8_t l_101[1][9][7] = {{{1L,(-1L),0x04L,0L,0x04L,(-1L),1L},{1L,(-1L),0x04L,0L,0x04L,(-1L),1L},{1L,(-1L),0x04L,0L,0x04L,(-1L),1L},{1L,(-1L),0x04L,0L,0x04L,(-1L),1L},{1L,(-1L),0x04L,0L,0x04L,(-1L),1L},{1L,(-1L),0x04L,0L,0x04L,(-1L),1L},{1L,(-1L),0x04L,0L,0x04L,(-1L),1L},{1L,(-1L),0x04L,0L,0x04L,(-1L),1L},{1L,(-1L),0x04L,0L,0x04L,(-1L),1L}}};
        int32_t l_102 = 0x795DF25DL;
        uint8_t l_103 = 1UL;
        int32_t l_107 = 0x4C16C414L;
        int32_t *l_106 = &l_107;
        int32_t *l_108[4];
        int32_t *l_109 = &l_107;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_108[i] = &l_107;
        l_103++;
        l_108[0] = l_106;
        l_109 = (void*)0;
        for (l_107 = 11; (l_107 != (-28)); l_107--)
        { /* block id: 30 */
            int32_t l_113 = 1L;
            int32_t *l_112 = &l_113;
            int32_t *l_114 = (void*)0;
            uint16_t l_115 = 6UL;
            int32_t l_118[9][5][4] = {{{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL}},{{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL}},{{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL}},{{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL}},{{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL}},{{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL}},{{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL}},{{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL}},{{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL},{0x277B6811L,0x58B3473EL,0x5FF1806AL,0x58B3473EL}}};
            uint32_t l_119 = 4294967290UL;
            int16_t l_120 = 0x5F9DL;
            int i, j, k;
            l_114 = (l_108[0] = l_112);
            ++l_115;
            (*l_112) = (((l_100 = l_118[8][2][1]) , l_119) , l_120);
        }
        unsigned int result = 0;
        result += l_100;
        int l_101_i0, l_101_i1, l_101_i2;
        for (l_101_i0 = 0; l_101_i0 < 1; l_101_i0++) {
            for (l_101_i1 = 0; l_101_i1 < 9; l_101_i1++) {
                for (l_101_i2 = 0; l_101_i2 < 7; l_101_i2++) {
                    result += l_101[l_101_i0][l_101_i1][l_101_i2];
                }
            }
        }
        result += l_102;
        result += l_103;
        result += l_107;
        atomic_add(&p_467->g_special_values[78 * get_linear_group_id() + 3], result);
    }
    else
    { /* block id: 37 */
        (1 + 1);
    }
    return p_97;
}


/* ------------------------------------------ */
/* 
 * reads : p_467->g_14 p_467->g_137 p_467->g_159 p_467->g_25 p_467->g_12 p_467->g_161 p_467->g_50 p_467->g_49 p_467->g_163 p_467->g_164
 * writes: p_467->g_14 p_467->g_161 p_467->g_49
 */
struct S0  func_128(int32_t ** p_129, uint64_t  p_130, uint32_t  p_131, uint32_t  p_132, int32_t ** p_133, struct S3 * p_467)
{ /* block id: 46 */
    uint64_t *l_140 = (void*)0;
    int32_t l_141 = 1L;
    uint64_t *l_142[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_143[6][10] = {{0x6CC9C5E5L,0x3D2E68FDL,0x489F62BFL,0x558E2862L,0x2F00CAAAL,0x658AAE48L,0L,0x14A8CDCFL,0x5E8087ECL,0x28B0A1B9L},{0x6CC9C5E5L,0x3D2E68FDL,0x489F62BFL,0x558E2862L,0x2F00CAAAL,0x658AAE48L,0L,0x14A8CDCFL,0x5E8087ECL,0x28B0A1B9L},{0x6CC9C5E5L,0x3D2E68FDL,0x489F62BFL,0x558E2862L,0x2F00CAAAL,0x658AAE48L,0L,0x14A8CDCFL,0x5E8087ECL,0x28B0A1B9L},{0x6CC9C5E5L,0x3D2E68FDL,0x489F62BFL,0x558E2862L,0x2F00CAAAL,0x658AAE48L,0L,0x14A8CDCFL,0x5E8087ECL,0x28B0A1B9L},{0x6CC9C5E5L,0x3D2E68FDL,0x489F62BFL,0x558E2862L,0x2F00CAAAL,0x658AAE48L,0L,0x14A8CDCFL,0x5E8087ECL,0x28B0A1B9L},{0x6CC9C5E5L,0x3D2E68FDL,0x489F62BFL,0x558E2862L,0x2F00CAAAL,0x658AAE48L,0L,0x14A8CDCFL,0x5E8087ECL,0x28B0A1B9L}};
    VECTOR(int64_t, 4) l_146 = (VECTOR(int64_t, 4))(0x7C5296CB076EB5C1L, (VECTOR(int64_t, 2))(0x7C5296CB076EB5C1L, 0x677700A42C73BDD4L), 0x677700A42C73BDD4L);
    uint32_t l_160 = 4294967291UL;
    int32_t **l_162 = (void*)0;
    int i, j;
    p_467->g_161 |= (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 4))((((((l_141 = FAKE_DIVERGE(p_467->global_1_offset, get_global_id(1), 10)) >= (p_467->g_14.s8--)) <= ((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 16))(l_146.yyyxxzyzyyxwywwx)).sf4ee))).zzywxyyx, ((VECTOR(int64_t, 4))(1L, (-1L), (-1L), 0L)).wzxyzywx))).s4) , &p_467->g_137) != (l_146.z , &p_467->g_137)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 16))(1L, (-5L), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(0x29L, 0x1EL, (safe_sub_func_uint64_t_u_u((safe_div_func_int64_t_s_s(l_146.w, (safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(p_467->g_137, (((safe_sub_func_uint8_t_u_u((p_467->g_159[0] , (p_467->g_14.sb , p_130)), ((VECTOR(int8_t, 4))(0x72L, ((+((-6L) <= l_146.y)) == l_143[0][6]), 1L, 0L)).z)) ^ 8UL) & p_467->g_25[2]))) , p_132), l_160)), l_141)))), p_467->g_14.sc)), 2L, (-6L), (-1L), 0x1EL, (-3L), p_467->g_12, ((VECTOR(int8_t, 2))(3L)), p_132, 1L, 0x38L, 0x52L, 2L)))).s8fa1)).zxyxwwzz)).s7551201124667177)).seb36, ((VECTOR(int8_t, 4))(1L)), ((VECTOR(int8_t, 4))(0x7CL))))).yyxyyxyx)), l_141, l_141, ((VECTOR(int8_t, 4))(0x3EL)))).hi, ((VECTOR(int8_t, 8))(7L))))).lo, (int8_t)p_130))).odd)), 1L)).x, l_160));
    (*p_467->g_163) = (*p_467->g_50);
    return p_467->g_164[3];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[56];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 56; i++)
            l_comm_values[i] = 1;
    struct S3 c_468;
    struct S3* p_467 = &c_468;
    struct S3 c_469 = {
        (-9L), // p_467->g_12
        &p_467->g_12, // p_467->g_11
        (VECTOR(uint64_t, 16))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0UL), 0UL), 0UL, 18446744073709551606UL, 0UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0UL), (VECTOR(uint64_t, 2))(18446744073709551606UL, 0UL), 18446744073709551606UL, 0UL, 18446744073709551606UL, 0UL), // p_467->g_14
        1L, // p_467->g_20
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L), (VECTOR(int32_t, 2))(1L, (-4L)), (VECTOR(int32_t, 2))(1L, (-4L)), 1L, (-4L), 1L, (-4L)), // p_467->g_22
        (VECTOR(int32_t, 8))(0x6979F9F4L, (VECTOR(int32_t, 4))(0x6979F9F4L, (VECTOR(int32_t, 2))(0x6979F9F4L, (-1L)), (-1L)), (-1L), 0x6979F9F4L, (-1L)), // p_467->g_23
        {0x7DL,0x7DL,0x7DL}, // p_467->g_25
        0x4FL, // p_467->g_46
        &p_467->g_12, // p_467->g_49
        {&p_467->g_49,&p_467->g_49,&p_467->g_49,&p_467->g_49,&p_467->g_49,&p_467->g_49}, // p_467->g_48
        &p_467->g_49, // p_467->g_50
        1UL, // p_467->g_76
        (void*)0, // p_467->g_99
        0xD835F262L, // p_467->g_137
        {{8UL},{8UL}}, // p_467->g_159
        0x0961DA0AL, // p_467->g_161
        &p_467->g_49, // p_467->g_163
        {{-8L},{-5L},{-8L},{-8L},{-5L},{-8L},{-8L},{-5L},{-8L},{-8L}}, // p_467->g_164
        &p_467->g_164[6], // p_467->g_175
        {0xDB522ABEL}, // p_467->g_182
        1UL, // p_467->g_190
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x30C1CFC9L), 0x30C1CFC9L), // p_467->g_193
        0L, // p_467->g_196
        {0xA6E1ADE1850C04F2L}, // p_467->g_209
        {-1L}, // p_467->g_211
        (VECTOR(int8_t, 16))(0x6CL, (VECTOR(int8_t, 4))(0x6CL, (VECTOR(int8_t, 2))(0x6CL, 0x45L), 0x45L), 0x45L, 0x6CL, 0x45L, (VECTOR(int8_t, 2))(0x6CL, 0x45L), (VECTOR(int8_t, 2))(0x6CL, 0x45L), 0x6CL, 0x45L, 0x6CL, 0x45L), // p_467->g_228
        (VECTOR(int8_t, 8))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, (-4L)), (-4L)), (-4L), 3L, (-4L)), // p_467->g_232
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x0723C2D5CF314CD6L), 0x0723C2D5CF314CD6L), 0x0723C2D5CF314CD6L, 1UL, 0x0723C2D5CF314CD6L), // p_467->g_239
        0x21L, // p_467->g_262
        4294967287UL, // p_467->g_267
        {-1L}, // p_467->g_271
        0xE8DD659BL, // p_467->g_284
        {{-9L}}, // p_467->g_287
        &p_467->g_287[0], // p_467->g_288
        (VECTOR(int32_t, 2))(0x493CA2A1L, 0x13DBCC2FL), // p_467->g_312
        {{{18446744073709551609UL},{0x4020D6A4D54C2E6CL},{0x8CFBBEBAA8C972F1L},{4UL},{0x8CFBBEBAA8C972F1L},{0x4020D6A4D54C2E6CL},{18446744073709551609UL}},{{18446744073709551609UL},{0x4020D6A4D54C2E6CL},{0x8CFBBEBAA8C972F1L},{4UL},{0x8CFBBEBAA8C972F1L},{0x4020D6A4D54C2E6CL},{18446744073709551609UL}},{{18446744073709551609UL},{0x4020D6A4D54C2E6CL},{0x8CFBBEBAA8C972F1L},{4UL},{0x8CFBBEBAA8C972F1L},{0x4020D6A4D54C2E6CL},{18446744073709551609UL}},{{18446744073709551609UL},{0x4020D6A4D54C2E6CL},{0x8CFBBEBAA8C972F1L},{4UL},{0x8CFBBEBAA8C972F1L},{0x4020D6A4D54C2E6CL},{18446744073709551609UL}},{{18446744073709551609UL},{0x4020D6A4D54C2E6CL},{0x8CFBBEBAA8C972F1L},{4UL},{0x8CFBBEBAA8C972F1L},{0x4020D6A4D54C2E6CL},{18446744073709551609UL}}}, // p_467->g_320
        (void*)0, // p_467->g_325
        (VECTOR(int32_t, 4))(0x571070C9L, (VECTOR(int32_t, 2))(0x571070C9L, 0x7AABD6E1L), 0x7AABD6E1L), // p_467->g_371
        {4294967295UL}, // p_467->g_379
        0x76L, // p_467->g_416
        {6UL}, // p_467->g_428
        0xB4A6L, // p_467->g_458
        &p_467->g_161, // p_467->g_464
        {&p_467->g_464,&p_467->g_464,&p_467->g_464,&p_467->g_464,&p_467->g_464,&p_467->g_464,&p_467->g_464,&p_467->g_464,&p_467->g_464}, // p_467->g_463
        &p_467->g_464, // p_467->g_465
        0, // p_467->v_collective
        sequence_input[get_global_id(0)], // p_467->global_0_offset
        sequence_input[get_global_id(1)], // p_467->global_1_offset
        sequence_input[get_global_id(2)], // p_467->global_2_offset
        sequence_input[get_local_id(0)], // p_467->local_0_offset
        sequence_input[get_local_id(1)], // p_467->local_1_offset
        sequence_input[get_local_id(2)], // p_467->local_2_offset
        sequence_input[get_group_id(0)], // p_467->group_0_offset
        sequence_input[get_group_id(1)], // p_467->group_1_offset
        sequence_input[get_group_id(2)], // p_467->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 56)), permutations[0][get_linear_local_id()])), // p_467->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_468 = c_469;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_467);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_467->g_12, "p_467->g_12", print_hash_value);
    transparent_crc(p_467->g_14.s0, "p_467->g_14.s0", print_hash_value);
    transparent_crc(p_467->g_14.s1, "p_467->g_14.s1", print_hash_value);
    transparent_crc(p_467->g_14.s2, "p_467->g_14.s2", print_hash_value);
    transparent_crc(p_467->g_14.s3, "p_467->g_14.s3", print_hash_value);
    transparent_crc(p_467->g_14.s4, "p_467->g_14.s4", print_hash_value);
    transparent_crc(p_467->g_14.s5, "p_467->g_14.s5", print_hash_value);
    transparent_crc(p_467->g_14.s6, "p_467->g_14.s6", print_hash_value);
    transparent_crc(p_467->g_14.s7, "p_467->g_14.s7", print_hash_value);
    transparent_crc(p_467->g_14.s8, "p_467->g_14.s8", print_hash_value);
    transparent_crc(p_467->g_14.s9, "p_467->g_14.s9", print_hash_value);
    transparent_crc(p_467->g_14.sa, "p_467->g_14.sa", print_hash_value);
    transparent_crc(p_467->g_14.sb, "p_467->g_14.sb", print_hash_value);
    transparent_crc(p_467->g_14.sc, "p_467->g_14.sc", print_hash_value);
    transparent_crc(p_467->g_14.sd, "p_467->g_14.sd", print_hash_value);
    transparent_crc(p_467->g_14.se, "p_467->g_14.se", print_hash_value);
    transparent_crc(p_467->g_14.sf, "p_467->g_14.sf", print_hash_value);
    transparent_crc(p_467->g_20, "p_467->g_20", print_hash_value);
    transparent_crc(p_467->g_22.s0, "p_467->g_22.s0", print_hash_value);
    transparent_crc(p_467->g_22.s1, "p_467->g_22.s1", print_hash_value);
    transparent_crc(p_467->g_22.s2, "p_467->g_22.s2", print_hash_value);
    transparent_crc(p_467->g_22.s3, "p_467->g_22.s3", print_hash_value);
    transparent_crc(p_467->g_22.s4, "p_467->g_22.s4", print_hash_value);
    transparent_crc(p_467->g_22.s5, "p_467->g_22.s5", print_hash_value);
    transparent_crc(p_467->g_22.s6, "p_467->g_22.s6", print_hash_value);
    transparent_crc(p_467->g_22.s7, "p_467->g_22.s7", print_hash_value);
    transparent_crc(p_467->g_22.s8, "p_467->g_22.s8", print_hash_value);
    transparent_crc(p_467->g_22.s9, "p_467->g_22.s9", print_hash_value);
    transparent_crc(p_467->g_22.sa, "p_467->g_22.sa", print_hash_value);
    transparent_crc(p_467->g_22.sb, "p_467->g_22.sb", print_hash_value);
    transparent_crc(p_467->g_22.sc, "p_467->g_22.sc", print_hash_value);
    transparent_crc(p_467->g_22.sd, "p_467->g_22.sd", print_hash_value);
    transparent_crc(p_467->g_22.se, "p_467->g_22.se", print_hash_value);
    transparent_crc(p_467->g_22.sf, "p_467->g_22.sf", print_hash_value);
    transparent_crc(p_467->g_23.s0, "p_467->g_23.s0", print_hash_value);
    transparent_crc(p_467->g_23.s1, "p_467->g_23.s1", print_hash_value);
    transparent_crc(p_467->g_23.s2, "p_467->g_23.s2", print_hash_value);
    transparent_crc(p_467->g_23.s3, "p_467->g_23.s3", print_hash_value);
    transparent_crc(p_467->g_23.s4, "p_467->g_23.s4", print_hash_value);
    transparent_crc(p_467->g_23.s5, "p_467->g_23.s5", print_hash_value);
    transparent_crc(p_467->g_23.s6, "p_467->g_23.s6", print_hash_value);
    transparent_crc(p_467->g_23.s7, "p_467->g_23.s7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_467->g_25[i], "p_467->g_25[i]", print_hash_value);

    }
    transparent_crc(p_467->g_46, "p_467->g_46", print_hash_value);
    transparent_crc(p_467->g_76, "p_467->g_76", print_hash_value);
    transparent_crc(p_467->g_137, "p_467->g_137", print_hash_value);
    transparent_crc(p_467->g_161, "p_467->g_161", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_467->g_164[i].f0, "p_467->g_164[i].f0", print_hash_value);

    }
    transparent_crc(p_467->g_182.f0, "p_467->g_182.f0", print_hash_value);
    transparent_crc(p_467->g_190, "p_467->g_190", print_hash_value);
    transparent_crc(p_467->g_193.x, "p_467->g_193.x", print_hash_value);
    transparent_crc(p_467->g_193.y, "p_467->g_193.y", print_hash_value);
    transparent_crc(p_467->g_193.z, "p_467->g_193.z", print_hash_value);
    transparent_crc(p_467->g_193.w, "p_467->g_193.w", print_hash_value);
    transparent_crc(p_467->g_196, "p_467->g_196", print_hash_value);
    transparent_crc(p_467->g_209.f0, "p_467->g_209.f0", print_hash_value);
    transparent_crc(p_467->g_211.f0, "p_467->g_211.f0", print_hash_value);
    transparent_crc(p_467->g_228.s0, "p_467->g_228.s0", print_hash_value);
    transparent_crc(p_467->g_228.s1, "p_467->g_228.s1", print_hash_value);
    transparent_crc(p_467->g_228.s2, "p_467->g_228.s2", print_hash_value);
    transparent_crc(p_467->g_228.s3, "p_467->g_228.s3", print_hash_value);
    transparent_crc(p_467->g_228.s4, "p_467->g_228.s4", print_hash_value);
    transparent_crc(p_467->g_228.s5, "p_467->g_228.s5", print_hash_value);
    transparent_crc(p_467->g_228.s6, "p_467->g_228.s6", print_hash_value);
    transparent_crc(p_467->g_228.s7, "p_467->g_228.s7", print_hash_value);
    transparent_crc(p_467->g_228.s8, "p_467->g_228.s8", print_hash_value);
    transparent_crc(p_467->g_228.s9, "p_467->g_228.s9", print_hash_value);
    transparent_crc(p_467->g_228.sa, "p_467->g_228.sa", print_hash_value);
    transparent_crc(p_467->g_228.sb, "p_467->g_228.sb", print_hash_value);
    transparent_crc(p_467->g_228.sc, "p_467->g_228.sc", print_hash_value);
    transparent_crc(p_467->g_228.sd, "p_467->g_228.sd", print_hash_value);
    transparent_crc(p_467->g_228.se, "p_467->g_228.se", print_hash_value);
    transparent_crc(p_467->g_228.sf, "p_467->g_228.sf", print_hash_value);
    transparent_crc(p_467->g_232.s0, "p_467->g_232.s0", print_hash_value);
    transparent_crc(p_467->g_232.s1, "p_467->g_232.s1", print_hash_value);
    transparent_crc(p_467->g_232.s2, "p_467->g_232.s2", print_hash_value);
    transparent_crc(p_467->g_232.s3, "p_467->g_232.s3", print_hash_value);
    transparent_crc(p_467->g_232.s4, "p_467->g_232.s4", print_hash_value);
    transparent_crc(p_467->g_232.s5, "p_467->g_232.s5", print_hash_value);
    transparent_crc(p_467->g_232.s6, "p_467->g_232.s6", print_hash_value);
    transparent_crc(p_467->g_232.s7, "p_467->g_232.s7", print_hash_value);
    transparent_crc(p_467->g_239.s0, "p_467->g_239.s0", print_hash_value);
    transparent_crc(p_467->g_239.s1, "p_467->g_239.s1", print_hash_value);
    transparent_crc(p_467->g_239.s2, "p_467->g_239.s2", print_hash_value);
    transparent_crc(p_467->g_239.s3, "p_467->g_239.s3", print_hash_value);
    transparent_crc(p_467->g_239.s4, "p_467->g_239.s4", print_hash_value);
    transparent_crc(p_467->g_239.s5, "p_467->g_239.s5", print_hash_value);
    transparent_crc(p_467->g_239.s6, "p_467->g_239.s6", print_hash_value);
    transparent_crc(p_467->g_239.s7, "p_467->g_239.s7", print_hash_value);
    transparent_crc(p_467->g_262, "p_467->g_262", print_hash_value);
    transparent_crc(p_467->g_267, "p_467->g_267", print_hash_value);
    transparent_crc(p_467->g_271.f0, "p_467->g_271.f0", print_hash_value);
    transparent_crc(p_467->g_284, "p_467->g_284", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_467->g_287[i].f0, "p_467->g_287[i].f0", print_hash_value);

    }
    transparent_crc(p_467->g_312.x, "p_467->g_312.x", print_hash_value);
    transparent_crc(p_467->g_312.y, "p_467->g_312.y", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_467->g_320[i][j].f0, "p_467->g_320[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_467->g_371.x, "p_467->g_371.x", print_hash_value);
    transparent_crc(p_467->g_371.y, "p_467->g_371.y", print_hash_value);
    transparent_crc(p_467->g_371.z, "p_467->g_371.z", print_hash_value);
    transparent_crc(p_467->g_371.w, "p_467->g_371.w", print_hash_value);
    transparent_crc(p_467->g_379.f0, "p_467->g_379.f0", print_hash_value);
    transparent_crc(p_467->g_416, "p_467->g_416", print_hash_value);
    transparent_crc(p_467->g_428.f0, "p_467->g_428.f0", print_hash_value);
    transparent_crc(p_467->g_458, "p_467->g_458", print_hash_value);
    transparent_crc(p_467->v_collective, "p_467->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 78; i++)
            transparent_crc(p_467->g_special_values[i + 78 * get_linear_group_id()], "p_467->g_special_values[i + 78 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_467->l_comm_values[get_linear_local_id()], "p_467->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_467->g_comm_values[get_linear_group_id() * 56 + get_linear_local_id()], "p_467->g_comm_values[get_linear_group_id() * 56 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
