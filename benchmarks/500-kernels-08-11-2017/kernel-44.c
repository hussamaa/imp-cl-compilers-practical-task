// --atomics 91 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 83,37,1 -l 83,1,1
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

__constant uint32_t permutations[10][83] = {
{69,56,59,65,23,9,19,20,22,6,62,76,47,24,81,10,61,37,29,67,11,38,13,58,80,71,52,60,5,49,3,78,21,39,26,4,53,75,55,74,43,51,63,48,1,8,18,72,28,25,40,15,12,70,66,31,35,2,33,77,79,50,30,82,46,7,45,42,36,68,44,16,57,34,41,27,14,17,32,64,54,73,0}, // permutation 0
{82,66,30,25,69,61,33,14,65,64,76,54,32,27,20,1,39,78,75,51,34,52,19,44,28,31,9,3,16,73,67,46,18,15,47,59,37,57,36,5,26,24,11,74,40,53,41,6,4,55,79,70,29,7,71,8,42,60,21,62,2,10,12,80,22,63,50,81,72,77,17,56,13,48,68,58,45,43,23,35,0,49,38}, // permutation 1
{53,11,14,45,4,33,54,20,81,19,41,60,66,9,69,15,67,78,3,42,38,56,16,30,44,75,34,26,31,72,7,59,10,51,32,23,2,8,65,25,77,80,71,76,57,47,48,0,73,63,74,22,64,46,28,82,24,79,55,50,62,5,18,21,29,17,68,43,36,6,35,12,13,52,49,37,61,27,70,58,40,1,39}, // permutation 2
{61,36,48,52,58,50,0,45,38,10,47,27,6,39,54,37,23,14,66,41,43,32,18,4,22,65,28,77,30,63,24,62,78,64,60,68,11,31,40,3,49,44,21,82,29,5,1,76,79,75,57,51,35,33,42,9,13,67,34,16,69,17,59,15,56,81,20,55,2,74,80,25,19,70,26,53,46,73,72,7,12,71,8}, // permutation 3
{14,57,31,63,20,7,47,44,15,30,4,37,58,68,35,42,46,29,2,76,13,19,8,41,54,45,38,74,60,59,23,75,1,34,43,50,36,79,3,72,64,69,80,25,53,71,56,82,12,33,5,77,65,67,6,22,52,48,0,66,70,9,81,26,40,24,28,78,11,21,62,17,27,39,51,18,32,61,49,73,55,10,16}, // permutation 4
{20,52,62,59,29,58,22,53,48,38,34,80,72,45,13,2,17,44,64,12,40,14,33,28,56,0,79,6,3,74,26,31,21,36,46,18,81,47,15,73,1,65,66,32,4,82,60,78,39,63,68,51,49,55,69,77,43,19,42,27,11,9,8,5,16,41,35,25,67,30,7,76,37,24,10,71,70,61,23,50,57,75,54}, // permutation 5
{44,7,55,57,72,68,13,45,78,25,37,18,30,48,64,56,81,3,16,62,79,23,11,80,74,40,52,32,51,31,71,36,75,29,76,63,21,27,15,42,49,33,26,17,19,39,60,43,77,58,9,65,67,0,54,28,66,35,8,53,22,24,46,41,82,73,5,61,70,20,12,59,4,1,10,38,50,2,47,14,69,34,6}, // permutation 6
{40,80,38,74,55,47,48,16,35,14,27,62,57,22,39,51,6,17,41,28,43,78,8,69,77,46,37,36,1,12,34,24,7,42,9,33,76,21,59,71,54,32,61,26,70,56,2,49,45,4,58,65,63,20,81,52,79,10,72,68,3,44,53,31,11,18,75,60,50,13,23,25,15,5,64,66,30,73,19,29,0,67,82}, // permutation 7
{49,51,64,40,34,1,27,28,65,5,75,24,30,48,8,35,45,82,13,70,37,9,52,21,12,53,73,23,20,62,57,36,42,17,38,29,50,67,31,72,25,59,78,74,10,81,14,7,58,80,41,76,18,3,11,61,39,46,47,71,54,77,44,0,66,68,19,55,4,22,15,43,2,6,32,26,69,79,56,16,33,63,60}, // permutation 8
{33,55,46,71,13,27,25,7,23,61,32,4,43,30,9,68,29,44,63,31,45,17,14,37,78,6,74,0,64,50,38,19,40,65,82,53,51,73,58,47,72,39,1,59,54,76,22,16,36,80,35,66,77,57,26,52,8,3,41,42,18,34,67,79,75,60,20,49,81,69,11,62,56,10,15,24,12,5,48,70,2,21,28} // permutation 9
};

// Seed: 3469528056

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
};

union U1 {
   uint32_t  f0;
   uint32_t  f1;
   int32_t  f2;
   int8_t * f3;
};

union U2 {
   volatile struct S0  f0;
   struct S0  f1;
   volatile struct S0  f2;
};

struct S3 {
    int32_t g_4;
    int32_t *g_3;
    int32_t *g_6;
    uint64_t g_12;
    uint8_t g_16;
    int8_t g_43;
    int8_t *g_42[7];
    uint64_t *g_87;
    uint64_t **g_86;
    uint16_t g_91[10];
    int32_t g_97[1][1];
    int32_t g_99;
    volatile struct S0 g_100;
    volatile struct S0 * volatile g_101[3];
    volatile int16_t g_208;
    volatile int16_t *g_207;
    volatile VECTOR(int32_t, 16) g_240;
    uint64_t **g_251;
    struct S0 g_252;
    union U1 g_253;
    int32_t * volatile g_262;
    VECTOR(uint16_t, 2) g_291;
    VECTOR(int32_t, 16) g_298;
    int32_t g_342;
    volatile int64_t g_344[1];
    VECTOR(int16_t, 8) g_364;
    struct S0 * volatile g_374[2][1][2];
    struct S0 * volatile g_375;
    volatile VECTOR(int32_t, 2) g_381;
    volatile union U2 g_382[5];
    VECTOR(uint16_t, 4) g_387;
    int32_t g_393;
    int32_t **g_396[1];
    int32_t * volatile g_397[2];
    VECTOR(uint16_t, 4) g_405;
    int32_t * volatile g_423[4][8];
    int32_t * volatile g_425;
    int32_t * volatile g_432;
    int32_t * volatile g_433;
    int32_t * volatile g_435;
    volatile VECTOR(uint8_t, 8) g_450;
    int32_t ** volatile g_461;
    int32_t ** volatile g_462;
    int32_t g_476;
    int8_t g_483;
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
uint16_t  func_1(struct S3 * p_496);
int8_t  func_22(uint64_t  p_23, int8_t * p_24, int32_t ** p_25, struct S3 * p_496);
uint64_t  func_26(int8_t * p_27, uint64_t * p_28, int32_t * p_29, uint64_t  p_30, struct S3 * p_496);
uint64_t * func_31(int32_t * p_32, int32_t * p_33, int32_t  p_34, struct S0  p_35, union U1  p_36, struct S3 * p_496);
int32_t * func_37(uint8_t * p_38, int8_t  p_39, struct S3 * p_496);
uint8_t * func_40(int8_t * p_41, struct S3 * p_496);
int32_t * func_46(int32_t ** p_47, uint64_t * p_48, struct S3 * p_496);
int8_t  func_73(int64_t  p_74, uint64_t ** p_75, uint64_t * p_76, struct S3 * p_496);
uint64_t ** func_78(uint64_t ** p_79, int32_t  p_80, uint32_t  p_81, struct S3 * p_496);
uint64_t ** func_82(int32_t  p_83, int32_t  p_84, struct S0  p_85, struct S3 * p_496);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_496->g_3 p_496->g_12 p_496->g_16 p_496->g_comm_values p_496->g_4 p_496->g_42 p_496->g_86 p_496->g_91 p_496->g_87 p_496->g_100 p_496->g_207 p_496->g_208 p_496->g_97 p_496->g_43 p_496->g_240 p_496->g_252 p_496->g_253 p_496->g_262 p_496->g_6 p_496->g_291 p_496->g_298 p_496->g_99 p_496->g_364 p_496->g_375 p_496->g_381 p_496->g_382 p_496->g_387 p_496->g_393 p_496->g_396 p_496->g_342 p_496->g_405 p_496->g_483
 * writes: p_496->g_3 p_496->g_6 p_496->g_12 p_496->g_16 p_496->g_86 p_496->g_91 p_496->g_97 p_496->g_99 p_496->g_100 p_496->g_43 p_496->g_251 p_496->g_87 p_496->g_252.f0 p_496->g_252 p_496->g_342 p_496->g_483 p_496->g_4
 */
uint16_t  func_1(struct S3 * p_496)
{ /* block id: 4 */
    int32_t l_2 = (-1L);
    int32_t **l_5[6] = {&p_496->g_3,&p_496->g_3,&p_496->g_3,&p_496->g_3,&p_496->g_3,&p_496->g_3};
    uint16_t l_9 = 0x80FCL;
    uint64_t *l_10 = (void*)0;
    uint64_t *l_11 = &p_496->g_12;
    uint8_t *l_15 = &p_496->g_16;
    uint16_t l_21 = 0xBFC7L;
    VECTOR(int8_t, 16) l_72 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
    uint64_t *l_256[3];
    uint64_t **l_257 = (void*)0;
    uint64_t **l_258 = &p_496->g_87;
    int8_t *l_395 = (void*)0;
    int8_t *l_482 = &p_496->g_483;
    int32_t l_484 = 0x61388F00L;
    uint64_t **l_490[10] = {&l_11,(void*)0,&l_11,&l_11,(void*)0,&l_11,&l_11,(void*)0,&l_11,&l_11};
    int i;
    for (i = 0; i < 3; i++)
        l_256[i] = (void*)0;
    p_496->g_6 = (l_2 , (p_496->g_3 = p_496->g_3));
    l_21 ^= ((safe_add_func_uint64_t_u_u(l_9, ((*l_11)--))) , ((~(++(*l_15))) || ((p_496->g_comm_values[p_496->tid] == (~p_496->g_4)) | (safe_lshift_func_uint8_t_u_s(p_496->g_16, 0)))));
    if (((p_496->g_4 | ((*l_482) ^= func_22(func_26(l_15, ((*l_258) = (l_256[1] = func_31((p_496->g_6 = func_37(func_40(p_496->g_42[6], p_496), (!((VECTOR(int8_t, 4))(l_72.se397)).y), p_496)), &p_496->g_4, p_496->g_comm_values[p_496->tid], p_496->g_252, p_496->g_253, p_496))), &p_496->g_4, p_496->g_252.f0, p_496), l_395, p_496->g_396[0], p_496))) == l_484))
    { /* block id: 249 */
        return p_496->g_16;
    }
    else
    { /* block id: 251 */
        uint32_t l_485 = 4294967295UL;
        struct S0 l_491[1] = {{0xEB1EFEC7L}};
        struct S0 *l_492[9][10] = {{(void*)0,(void*)0,(void*)0,&l_491[0],&l_491[0],&l_491[0],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_491[0],&l_491[0],&l_491[0],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_491[0],&l_491[0],&l_491[0],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_491[0],&l_491[0],&l_491[0],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_491[0],&l_491[0],&l_491[0],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_491[0],&l_491[0],&l_491[0],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_491[0],&l_491[0],&l_491[0],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_491[0],&l_491[0],&l_491[0],(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_491[0],&l_491[0],&l_491[0],(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t *l_495 = &p_496->g_97[0][0];
        int i, j;
        l_485--;
        for (l_9 = 11; (l_9 < 38); l_9++)
        { /* block id: 255 */
            (*p_496->g_6) = (l_490[8] != (FAKE_DIVERGE(p_496->group_0_offset, get_group_id(0), 10) , &l_256[0]));
        }
        (*p_496->g_375) = l_491[0];
        for (l_9 = (-19); (l_9 > 37); l_9++)
        { /* block id: 261 */
            l_495 = func_37(func_40(&p_496->g_43, p_496), ((*l_482) |= l_485), p_496);
        }
    }
    return p_496->g_364.s1;
}


/* ------------------------------------------ */
/* 
 * reads : p_496->g_342 p_496->g_405 p_496->g_253 p_496->g_87 p_496->g_97 p_496->g_6 p_496->g_99 p_496->g_4 p_496->g_12 p_496->g_91 p_496->g_240
 * writes: p_496->g_342 p_496->g_12 p_496->g_97 p_496->g_99
 */
int8_t  func_22(uint64_t  p_23, int8_t * p_24, int32_t ** p_25, struct S3 * p_496)
{ /* block id: 211 */
    int32_t *l_398 = &p_496->g_342;
    VECTOR(int64_t, 2) l_415 = (VECTOR(int64_t, 2))(0x132A6BE0E4C3EF49L, 0x7E9FF9039A6F006BL);
    uint64_t *l_445 = (void*)0;
    int16_t *l_451 = (void*)0;
    int8_t *l_470 = &p_496->g_43;
    int i;
    (*l_398) ^= p_23;
    for (p_23 = 0; (p_23 >= 42); p_23++)
    { /* block id: 215 */
        int32_t l_404 = 0L;
        VECTOR(uint16_t, 4) l_410 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x0B65L), 0x0B65L);
        int8_t *l_416 = &p_496->g_43;
        int32_t l_417 = 1L;
        int32_t *l_418 = (void*)0;
        int8_t l_419 = 0x3DL;
        int32_t *l_420 = &p_496->g_97[0][0];
        int32_t *l_421 = (void*)0;
        int32_t *l_422 = (void*)0;
        int32_t *l_424 = (void*)0;
        int32_t *l_426 = (void*)0;
        int32_t *l_427 = (void*)0;
        int32_t *l_428 = (void*)0;
        int32_t *l_429 = (void*)0;
        int32_t *l_430 = (void*)0;
        int32_t *l_431 = (void*)0;
        int32_t *l_434 = (void*)0;
        int32_t l_436 = 1L;
        VECTOR(uint32_t, 4) l_457 = (VECTOR(uint32_t, 4))(0x24D4AD51L, (VECTOR(uint32_t, 2))(0x24D4AD51L, 0UL), 0UL);
        int i;
        l_436 |= (((safe_unary_minus_func_int32_t_s(((*l_420) |= ((safe_div_func_uint64_t_u_u(p_23, l_404)) > ((VECTOR(uint16_t, 16))(mad_sat(((VECTOR(uint16_t, 2))(p_496->g_405.xx)).xyxyyyxxyyxyyxxy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(1UL, 1UL, (((safe_mod_func_uint16_t_u_u(((l_404 > (p_23 , (p_496->g_253 , ((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 4))(0xFF4DL, (safe_mod_func_int64_t_s_s(((((VECTOR(uint16_t, 2))(l_410.xx)).even == ((safe_add_func_uint32_t_u_u((((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 2))(l_415.yy)).yxyxxxyyxyyyyxxy))).s9 && ((*p_496->g_87) = ((*l_398) <= (((VECTOR(uint16_t, 4))(0UL, 0x88E1L, 0x6204L, 0x0AD2L)).x ^ ((l_398 != (l_418 = l_398)) , 8UL))))), l_410.y)) < l_410.w)) & 0x87ECE45CDECEC090L), l_417)), 0x17F5L, 0xA122L)), ((VECTOR(uint16_t, 4))(0x43E3L))))))).xywyzxyy, ((VECTOR(uint32_t, 8))(4294967290UL)), ((VECTOR(uint32_t, 8))(0x2396DC2CL))))).s32, ((VECTOR(uint32_t, 2))(0xEDB53D4EL))))).lo))) < l_410.x), l_419)) < 255UL) == l_417), GROUP_DIVERGE(0, 1), 65535UL, ((VECTOR(uint16_t, 2))(0xE9E3L)), 65533UL)).odd)).xxzyzzwxyxxzzwyx, ((VECTOR(uint16_t, 16))(0xDC68L))))).s4)))) && (*p_496->g_6)) > GROUP_DIVERGE(2, 1));
        for (l_417 = 0; (l_417 < 9); ++l_417)
        { /* block id: 223 */
            VECTOR(uint8_t, 2) l_455 = (VECTOR(uint8_t, 2))(6UL, 0x1DL);
            int32_t l_458 = 0x1B2CB15DL;
            int8_t *l_469 = &p_496->g_43;
            int32_t *l_475 = &p_496->g_476;
            int16_t l_480 = 0L;
            int i;
            for (p_496->g_12 = 16; (p_496->g_12 >= 41); ++p_496->g_12)
            { /* block id: 226 */
                uint32_t *l_454 = (void*)0;
                int32_t l_464 = 3L;
                int32_t l_477 = 0x5AE24DDCL;
                int8_t *l_478 = (void*)0;
                for (l_419 = 0; (l_419 >= (-8)); l_419 = safe_sub_func_uint16_t_u_u(l_419, 9))
                { /* block id: 229 */
                    uint64_t l_456 = 0x94F78195CC561B93L;
                    uint16_t *l_459 = (void*)0;
                    int32_t l_460 = 0L;
                    int32_t **l_463[5][6] = {{&l_430,&p_496->g_6,&p_496->g_6,&l_430,&l_430,&p_496->g_6},{&l_430,&p_496->g_6,&p_496->g_6,&l_430,&l_430,&p_496->g_6},{&l_430,&p_496->g_6,&p_496->g_6,&l_430,&l_430,&p_496->g_6},{&l_430,&p_496->g_6,&p_496->g_6,&l_430,&l_430,&p_496->g_6},{&l_430,&p_496->g_6,&p_496->g_6,&l_430,&l_430,&p_496->g_6}};
                    int i, j;
                    l_398 = ((p_496->g_91[9] & ((l_460 = ((safe_add_func_uint8_t_u_u((l_445 == (void*)0), (((((((((l_455.y |= (safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(p_496->g_4, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x56L, 248UL)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(p_496->g_450.s7174)).even)), (((p_496->g_344[0] > ((VECTOR(uint32_t, 4))((l_451 == l_451), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0UL, 1UL)))), 4294967295UL)).y) & ((safe_sub_func_int32_t_s_s(((void*)0 != l_454), (*p_496->g_6))) == (*l_398))) , 1UL), p_23, 5UL, 0xC7L)).s4)), 18446744073709551610UL))) , l_456) < l_457.x) ^ l_458) && p_23) | p_23) && l_456) == p_23) >= (*l_398)))) & l_458)) != 0L)) , l_398);
                    return l_464;
                }
                for (p_496->g_342 = 0; (p_496->g_342 >= (-19)); --p_496->g_342)
                { /* block id: 237 */
                    uint32_t *l_471[4][4];
                    int32_t l_474[9] = {0x22FFA687L,0x22FFA687L,0x22FFA687L,0x22FFA687L,0x22FFA687L,0x22FFA687L,0x22FFA687L,0x22FFA687L,0x22FFA687L};
                    int16_t *l_479[6];
                    int32_t *l_481 = &p_496->g_99;
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_471[i][j] = &p_496->g_252.f0;
                    }
                    for (i = 0; i < 6; i++)
                        l_479[i] = (void*)0;
                    (*l_481) = (((p_23 == (((((*l_420) = ((safe_add_func_uint64_t_u_u(((l_469 = p_24) != l_470), GROUP_DIVERGE(0, 1))) || (l_480 = ((((l_464 = p_496->g_240.s2) >= (safe_add_func_int32_t_s_s(((l_474[2] & ((void*)0 != l_475)) , l_477), (FAKE_DIVERGE(p_496->local_0_offset, get_local_id(0), 10) < ((p_24 != l_478) | (*p_496->g_6)))))) ^ l_455.y) < l_477)))) >= 0x37E8AA9DL) & (*l_398)) > GROUP_DIVERGE(1, 1))) <= l_458) , 3L);
                }
            }
        }
    }
    return (*l_398);
}


/* ------------------------------------------ */
/* 
 * reads : p_496->g_262 p_496->g_97 p_496->g_6 p_496->g_4 p_496->g_291 p_496->g_16 p_496->g_298 p_496->g_207 p_496->g_208 p_496->g_91 p_496->g_43 p_496->g_99 p_496->g_comm_values p_496->g_86 p_496->g_87 p_496->g_12 p_496->g_364 p_496->g_240 p_496->g_375 p_496->g_381 p_496->g_382 p_496->g_387 p_496->g_393
 * writes: p_496->g_6 p_496->g_97 p_496->g_252.f0 p_496->g_16 p_496->g_12 p_496->g_252 p_496->g_99
 */
uint64_t  func_26(int8_t * p_27, uint64_t * p_28, int32_t * p_29, uint64_t  p_30, struct S3 * p_496)
{ /* block id: 154 */
    int32_t **l_261 = &p_496->g_6;
    uint32_t *l_301 = &p_496->g_252.f0;
    VECTOR(uint32_t, 8) l_302 = (VECTOR(uint32_t, 8))(0x7ECD37ABL, (VECTOR(uint32_t, 4))(0x7ECD37ABL, (VECTOR(uint32_t, 2))(0x7ECD37ABL, 4294967295UL), 4294967295UL), 4294967295UL, 0x7ECD37ABL, 4294967295UL);
    int32_t **l_303 = (void*)0;
    int32_t **l_305 = &p_496->g_6;
    int32_t ***l_304 = &l_305;
    int32_t *l_306 = &p_496->g_97[0][0];
    uint16_t *l_307[6][8][5] = {{{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]}},{{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]}},{{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]}},{{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]}},{{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]}},{{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]},{(void*)0,&p_496->g_91[8],&p_496->g_91[9],&p_496->g_91[9],&p_496->g_91[8]}}};
    int32_t l_308 = 0L;
    int32_t l_309[1];
    int16_t l_345 = 2L;
    uint32_t l_361 = 4294967288UL;
    VECTOR(int64_t, 16) l_372 = (VECTOR(int64_t, 16))(0x060A22F4F17AA126L, (VECTOR(int64_t, 4))(0x060A22F4F17AA126L, (VECTOR(int64_t, 2))(0x060A22F4F17AA126L, 0x258C4BF6A31634B7L), 0x258C4BF6A31634B7L), 0x258C4BF6A31634B7L, 0x060A22F4F17AA126L, 0x258C4BF6A31634B7L, (VECTOR(int64_t, 2))(0x060A22F4F17AA126L, 0x258C4BF6A31634B7L), (VECTOR(int64_t, 2))(0x060A22F4F17AA126L, 0x258C4BF6A31634B7L), 0x060A22F4F17AA126L, 0x258C4BF6A31634B7L, 0x060A22F4F17AA126L, 0x258C4BF6A31634B7L);
    int16_t l_394 = 0x5938L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_309[i] = (-10L);
    (*p_496->g_262) |= (safe_mul_func_uint16_t_u_u((((*l_261) = p_29) == &p_496->g_97[0][0]), p_30));
    l_309[0] = (safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((**l_261) > (+(*p_29))), ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s((~((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((safe_div_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((safe_div_func_int32_t_s_s((-10L), (safe_lshift_func_uint16_t_u_s((((p_496->g_4 , (p_30 , (safe_mul_func_uint16_t_u_u((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 4))(p_496->g_291.yxxy)).lo, (uint16_t)((*p_27) == (safe_div_func_uint16_t_u_u((l_308 |= (safe_div_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_496->g_298.sa561)).odd)).hi, (safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 2))(2UL, 0x23B7BDE4L)), (uint32_t)((*l_301) = 8UL), (uint32_t)((VECTOR(uint32_t, 8))(l_302.s72017234)).s3))))).even, ((*l_306) |= (0x30423C18L && ((((*l_304) = (l_303 = &p_496->g_6)) == (void*)0) , 0xD20593E7L))))))), (*p_29)))), (*p_496->g_207))))))).yyyx)), 1UL, 0xB9E7L, 0xFFCBL, 0x512BL)).s2 || p_30), p_496->g_91[6])))) || p_496->g_43) != (*p_27)), 7)))), (*p_29))), p_496->g_99)), p_496->g_comm_values[p_496->tid])), (**p_496->g_86))), (*p_27))), GROUP_DIVERGE(0, 1))) , (*p_496->g_207))), 0)) | 0x00F3L), 2)) && (*p_27)))), (*p_29))), p_30));
    l_309[0] |= ((*l_306) = (safe_mul_func_int8_t_s_s(0L, (***l_304))));
    for (p_496->g_16 = 0; (p_496->g_16 < 21); p_496->g_16++)
    { /* block id: 167 */
        int16_t l_329 = 1L;
        int32_t l_330 = (-1L);
        int32_t l_331 = 1L;
        int32_t l_332[1];
        int32_t *l_336 = &l_331;
        int32_t *l_337 = &l_331;
        int32_t *l_338 = (void*)0;
        int32_t *l_339 = &l_309[0];
        int32_t *l_340 = (void*)0;
        int32_t *l_341[2][9][2] = {{{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4}},{{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4},{&p_496->g_97[0][0],&p_496->g_4}}};
        int32_t l_343 = 0L;
        uint32_t l_346 = 4294967286UL;
        int32_t l_358 = 0x6AC8422AL;
        VECTOR(uint8_t, 8) l_367 = (VECTOR(uint8_t, 8))(6UL, (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 249UL), 249UL), 249UL, 6UL, 249UL);
        struct S0 l_373 = {4294967295UL};
        VECTOR(int8_t, 4) l_383 = (VECTOR(int8_t, 4))(0x76L, (VECTOR(int8_t, 2))(0x76L, 1L), 1L);
        uint64_t l_386 = 0UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_332[i] = 0x5880E8BDL;
        for (p_496->g_12 = 0; (p_496->g_12 != 37); p_496->g_12 = safe_add_func_int8_t_s_s(p_496->g_12, 8))
        { /* block id: 170 */
            uint8_t l_318 = 250UL;
            int32_t *l_319 = &p_496->g_99;
            int32_t *l_320 = &p_496->g_99;
            int32_t *l_321 = &p_496->g_97[0][0];
            int32_t *l_322 = (void*)0;
            int32_t *l_323 = &p_496->g_253.f2;
            int32_t *l_324 = &l_309[0];
            int32_t *l_325 = &p_496->g_97[0][0];
            int32_t *l_326 = &p_496->g_97[0][0];
            int32_t l_327 = 0x1D22A20EL;
            int32_t *l_328[7][4][2] = {{{&l_327,(void*)0},{&l_327,(void*)0},{&l_327,(void*)0},{&l_327,(void*)0}},{{&l_327,(void*)0},{&l_327,(void*)0},{&l_327,(void*)0},{&l_327,(void*)0}},{{&l_327,(void*)0},{&l_327,(void*)0},{&l_327,(void*)0},{&l_327,(void*)0}},{{&l_327,(void*)0},{&l_327,(void*)0},{&l_327,(void*)0},{&l_327,(void*)0}},{{&l_327,(void*)0},{&l_327,(void*)0},{&l_327,(void*)0},{&l_327,(void*)0}},{{&l_327,(void*)0},{&l_327,(void*)0},{&l_327,(void*)0},{&l_327,(void*)0}},{{&l_327,(void*)0},{&l_327,(void*)0},{&l_327,(void*)0},{&l_327,(void*)0}}};
            uint16_t l_333 = 1UL;
            int i, j, k;
            for (l_308 = 0; (l_308 < 8); l_308++)
            { /* block id: 173 */
                return p_30;
            }
            if (l_318)
                break;
            l_333--;
        }
        --l_346;
        if ((*p_496->g_6))
        { /* block id: 180 */
            uint8_t *l_351 = (void*)0;
            uint8_t **l_350[2];
            uint8_t ***l_349 = &l_350[0];
            uint32_t l_355[1];
            int32_t l_357 = 0x1A6DC4F1L;
            int32_t l_359[8] = {0x3EBA3CB1L,0x2366200CL,0x3EBA3CB1L,0x3EBA3CB1L,0x2366200CL,0x3EBA3CB1L,0x3EBA3CB1L,0x2366200CL};
            int i;
            for (i = 0; i < 2; i++)
                l_350[i] = &l_351;
            for (i = 0; i < 1; i++)
                l_355[i] = 0UL;
            (*l_349) = (void*)0;
            for (l_331 = 28; (l_331 > 29); l_331++)
            { /* block id: 184 */
                int32_t l_356[5] = {9L,9L,9L,9L,9L};
                int8_t l_360 = 0x02L;
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_496->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 83)), permutations[(safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(l_355[0])), 10))][(safe_mod_func_uint32_t_u_u(p_496->tid, 83))]));
                ++l_361;
            }
            l_357 = (*p_496->g_6);
            (*l_339) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-10L), (-1L))), 0x4842965AL, 0x09EA1D85L)).lo, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_496->g_364.s32070276)), 0x66DDL, 0L, ((*p_29) ^ ((((l_301 = p_29) == p_29) , (safe_sub_func_uint8_t_u_u(p_30, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(255UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_367.s4645)).hi)), 0xE2L, 253UL)).hi)))), (uint8_t)((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x3EL, 0x60L)).even, (((safe_add_func_uint8_t_u_u((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_372.s10)).xyxx)).w ^ (*l_339)), (l_355[0] <= (**l_261)))) ^ p_496->g_240.s2) && p_30))) > (*p_29))))))), 255UL)).yyzyxyzzxxxyyzzz)).scb)).lo))) & (*p_29))), (-9L), (*p_496->g_207), 8L, (-5L), 0x3DCCL)).even, ((VECTOR(int16_t, 8))(0L))))), 0x0371L, (-1L), ((VECTOR(int16_t, 2))((-1L))), ((VECTOR(int16_t, 4))(0x4EC2L)))).sf4, ((VECTOR(int16_t, 2))(1L))))).yxxxxyxyxyxyxxxy)).s13, ((VECTOR(uint16_t, 2))(65535UL))))).yyxxxxyxyxyyyyxy, ((VECTOR(int32_t, 16))(0x7CF771E9L))))).odd)).s51)).yxyy, ((VECTOR(int32_t, 4))(1L))))), ((VECTOR(int32_t, 4))(0x18B08106L)), ((VECTOR(int32_t, 4))(1L))))).even, ((VECTOR(int32_t, 2))(0x7C049E6EL))))), 0x090545F8L, 0x5C04FF76L)).x;
        }
        else
        { /* block id: 193 */
            VECTOR(int32_t, 16) l_380 = (VECTOR(int32_t, 16))(0x08AC7112L, (VECTOR(int32_t, 4))(0x08AC7112L, (VECTOR(int32_t, 2))(0x08AC7112L, 0x7286B381L), 0x7286B381L), 0x7286B381L, 0x08AC7112L, 0x7286B381L, (VECTOR(int32_t, 2))(0x08AC7112L, 0x7286B381L), (VECTOR(int32_t, 2))(0x08AC7112L, 0x7286B381L), 0x08AC7112L, 0x7286B381L, 0x08AC7112L, 0x7286B381L);
            int i;
            if ((*p_496->g_262))
                break;
            (**l_304) = &p_496->g_99;
            (*p_496->g_375) = l_373;
            for (l_346 = 0; (l_346 != 60); l_346 = safe_add_func_int64_t_s_s(l_346, 7))
            { /* block id: 199 */
                int16_t l_392 = 1L;
                for (l_373.f0 = 0; (l_373.f0 > 35); ++l_373.f0)
                { /* block id: 202 */
                    (**l_305) = ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_380.s97485cfdefee2c87)).s1061)).even)), ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_496->g_381.yyxy)).hi)), 0L, (-1L), ((p_496->g_382[2] , ((VECTOR(int8_t, 8))(l_383.zyyzxxxx)).s1) <= ((0x3E9EL && (18446744073709551608UL || 0x38D386A9F93C0E8EL)) || (safe_mul_func_uint16_t_u_u(l_386, (((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0x8787L, 0x288BL)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_496->g_387.wwwy)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))((((((safe_sub_func_uint32_t_u_u(((GROUP_DIVERGE(1, 1) <= ((*p_29) , FAKE_DIVERGE(p_496->local_2_offset, get_local_id(2), 10))) > (!(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(2UL, 65535UL, (+FAKE_DIVERGE(p_496->local_0_offset, get_local_id(0), 10)), p_496->g_91[0], (l_392 &= ((7L == (safe_add_func_int32_t_s_s((5L != p_496->g_298.sc), (*p_29)))) > (*p_27))), ((VECTOR(uint16_t, 2))(0x21A2L)), 0x4F39L)).s1305254556673743)).sa & 1UL))), p_496->g_43)) >= FAKE_DIVERGE(p_496->local_0_offset, get_local_id(0), 10)) > (*p_27)) >= p_496->g_393) >= (*p_496->g_6)), l_380.s3, 65535UL, 3UL)).xyzyzyww)), ((VECTOR(uint16_t, 4))(65530UL)))).hi, ((VECTOR(uint16_t, 8))(0UL)), ((VECTOR(uint16_t, 8))(0xCC8BL))))))).odd, (uint16_t)0x0DF8L))).ywzyxyxx, ((VECTOR(uint16_t, 8))(0x28D3L))))).lo)), ((VECTOR(uint16_t, 2))(65535UL)), p_30, ((VECTOR(uint16_t, 2))(1UL)), 0xBA71L, 65535UL, ((VECTOR(uint16_t, 2))(0x8961L)), 0xD0F4L)).lo, ((VECTOR(uint16_t, 8))(0xD5EBL))))), ((VECTOR(uint16_t, 8))(1UL))))).s0 <= p_496->g_298.se))))), 1L, 0x69F266A0L, 4L)).odd)).yzxxzwwzxwwwxwzx, ((VECTOR(int32_t, 16))((-10L))), ((VECTOR(int32_t, 16))(0x40C986C8L))))).s9f))).hi;
                }
            }
        }
        return l_394;
    }
    return p_30;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t * func_31(int32_t * p_32, int32_t * p_33, int32_t  p_34, struct S0  p_35, union U1  p_36, struct S3 * p_496)
{ /* block id: 149 */
    struct S0 l_254 = {4294967295UL};
    uint64_t *l_255 = &p_496->g_12;
    p_35 = l_254;
    return l_255;
}


/* ------------------------------------------ */
/* 
 * reads : p_496->g_86 p_496->g_91 p_496->g_87 p_496->g_12 p_496->g_100 p_496->g_3 p_496->g_207 p_496->g_208 p_496->g_97 p_496->g_43 p_496->g_240
 * writes: p_496->g_86 p_496->g_91 p_496->g_97 p_496->g_99 p_496->g_100 p_496->g_3 p_496->g_43 p_496->g_12 p_496->g_251
 */
int32_t * func_37(uint8_t * p_38, int8_t  p_39, struct S3 * p_496)
{ /* block id: 38 */
    int32_t l_77 = 0x2B2FE073L;
    uint64_t ***l_88 = (void*)0;
    uint64_t ***l_89[8] = {&p_496->g_86,&p_496->g_86,&p_496->g_86,&p_496->g_86,&p_496->g_86,&p_496->g_86,&p_496->g_86,&p_496->g_86};
    int32_t *l_90[4];
    struct S0 l_93[2][5][5] = {{{{1UL},{4294967292UL},{4294967295UL},{4294967292UL},{1UL}},{{1UL},{4294967292UL},{4294967295UL},{4294967292UL},{1UL}},{{1UL},{4294967292UL},{4294967295UL},{4294967292UL},{1UL}},{{1UL},{4294967292UL},{4294967295UL},{4294967292UL},{1UL}},{{1UL},{4294967292UL},{4294967295UL},{4294967292UL},{1UL}}},{{{1UL},{4294967292UL},{4294967295UL},{4294967292UL},{1UL}},{{1UL},{4294967292UL},{4294967295UL},{4294967292UL},{1UL}},{{1UL},{4294967292UL},{4294967295UL},{4294967292UL},{1UL}},{{1UL},{4294967292UL},{4294967295UL},{4294967292UL},{1UL}},{{1UL},{4294967292UL},{4294967295UL},{4294967292UL},{1UL}}}};
    int32_t *l_96 = &p_496->g_97[0][0];
    int32_t *l_98 = &p_496->g_99;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_90[i] = (void*)0;
    p_496->g_251 = (func_73(l_77, func_78(func_82((p_496->g_91[9] &= ((p_496->g_86 = p_496->g_86) == &p_496->g_87)), (safe_unary_minus_func_uint64_t_u(l_77)), l_93[1][3][1], p_496), (+(~((*l_98) = ((*l_96) = (safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_496->global_0_offset, get_global_id(0), 10), l_77)))))), ((((*p_496->g_87) , ((0x3306L < 65535UL) & 1L)) != p_39) , FAKE_DIVERGE(p_496->group_1_offset, get_group_id(1), 10)), p_496), &p_496->g_12, p_496) , (void*)0);
    (*l_96) &= p_39;
    return l_90[3];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_496->g_3
 */
uint8_t * func_40(int8_t * p_41, struct S3 * p_496)
{ /* block id: 10 */
    int32_t l_44 = (-7L);
    int32_t l_45 = 0x3B5FB49AL;
    int32_t **l_49 = (void*)0;
    uint64_t *l_50 = (void*)0;
    l_45 |= l_44;
    p_496->g_3 = func_46(l_49, l_50, p_496);
    return p_41;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_46(int32_t ** p_47, uint64_t * p_48, struct S3 * p_496)
{ /* block id: 12 */
    if ((atomic_inc(&p_496->g_atomic_input[91 * get_linear_group_id() + 19]) == 3))
    { /* block id: 14 */
        int16_t l_51 = (-2L);
        int32_t l_65 = 3L;
        int32_t *l_64 = &l_65;
        int32_t *l_66 = &l_65;
        if (l_51)
        { /* block id: 15 */
            uint32_t l_52[9][6] = {{4294967295UL,0UL,0x7E8B7DD1L,0x8D911ACAL,0x56014EFCL,4294967295UL},{4294967295UL,0UL,0x7E8B7DD1L,0x8D911ACAL,0x56014EFCL,4294967295UL},{4294967295UL,0UL,0x7E8B7DD1L,0x8D911ACAL,0x56014EFCL,4294967295UL},{4294967295UL,0UL,0x7E8B7DD1L,0x8D911ACAL,0x56014EFCL,4294967295UL},{4294967295UL,0UL,0x7E8B7DD1L,0x8D911ACAL,0x56014EFCL,4294967295UL},{4294967295UL,0UL,0x7E8B7DD1L,0x8D911ACAL,0x56014EFCL,4294967295UL},{4294967295UL,0UL,0x7E8B7DD1L,0x8D911ACAL,0x56014EFCL,4294967295UL},{4294967295UL,0UL,0x7E8B7DD1L,0x8D911ACAL,0x56014EFCL,4294967295UL},{4294967295UL,0UL,0x7E8B7DD1L,0x8D911ACAL,0x56014EFCL,4294967295UL}};
            uint32_t l_53 = 4294967289UL;
            int32_t l_54 = 0x6A3C9199L;
            int32_t l_55 = 2L;
            uint8_t l_56 = 0xCAL;
            int i, j;
            l_53 = (l_52[8][1] &= 0x7EB1EC6CL);
            l_56 = (l_55 = l_54);
        }
        else
        { /* block id: 20 */
            struct S0 l_57 = {4294967292UL};
            struct S0 l_58 = {0xA207B8A5L};
            VECTOR(int64_t, 4) l_59 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x08DFEF28ED3351F4L), 0x08DFEF28ED3351F4L);
            uint8_t l_60 = 255UL;
            uint64_t l_61 = 0x7C038D03D8E66C79L;
            int i;
            l_58 = l_57;
            l_60 |= l_59.z;
            l_61--;
        }
        l_66 = (l_64 = (void*)0);
        for (l_51 = (-23); (l_51 > (-16)); ++l_51)
        { /* block id: 29 */
            uint64_t l_69 = 0UL;
            ++l_69;
        }
        unsigned int result = 0;
        result += l_51;
        result += l_65;
        atomic_add(&p_496->g_special_values[91 * get_linear_group_id() + 19], result);
    }
    else
    { /* block id: 32 */
        (1 + 1);
    }
    return &p_496->g_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_496->g_12 p_496->g_240
 * writes: p_496->g_12
 */
int8_t  func_73(int64_t  p_74, uint64_t ** p_75, uint64_t * p_76, struct S3 * p_496)
{ /* block id: 123 */
    int32_t *l_217 = &p_496->g_99;
    int32_t *l_218 = &p_496->g_97[0][0];
    int32_t *l_219 = (void*)0;
    int32_t l_220 = (-8L);
    int32_t *l_221 = &p_496->g_97[0][0];
    int32_t *l_222 = &p_496->g_97[0][0];
    int32_t *l_223 = (void*)0;
    int32_t *l_224 = &l_220;
    int32_t *l_225 = &p_496->g_99;
    int32_t *l_226 = &l_220;
    int32_t *l_227 = &p_496->g_97[0][0];
    int32_t l_228 = (-1L);
    int32_t *l_229 = &p_496->g_97[0][0];
    int32_t *l_230 = &l_228;
    int32_t *l_231[4];
    int8_t l_232 = (-5L);
    int32_t l_233[7][7][5] = {{{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L}},{{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L}},{{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L}},{{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L}},{{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L}},{{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L}},{{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L},{0x43C599F4L,(-10L),1L,0x20C53CD4L,0x1D3FE618L}}};
    int8_t l_234[10][1][1];
    uint32_t l_235 = 0x444259CDL;
    struct S0 l_248 = {0xA12880A3L};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_231[i] = &l_220;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_234[i][j][k] = 0x1FL;
        }
    }
    l_235--;
    for (p_496->g_12 = 26; (p_496->g_12 != 3); p_496->g_12 = safe_sub_func_int16_t_s_s(p_496->g_12, 1))
    { /* block id: 127 */
        uint8_t l_250 = 0x8DL;
        atomic_add(&p_496->g_atomic_reduction[get_linear_group_id()], ((VECTOR(int32_t, 2))(p_496->g_240.seb)).odd);
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_496->v_collective += p_496->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if ((atomic_inc(&p_496->g_atomic_input[91 * get_linear_group_id() + 86]) == 7))
        { /* block id: 130 */
            int32_t l_241 = 0x3701D3A4L;
            int8_t l_242[4][4][3] = {{{0x5AL,0x50L,0x50L},{0x5AL,0x50L,0x50L},{0x5AL,0x50L,0x50L},{0x5AL,0x50L,0x50L}},{{0x5AL,0x50L,0x50L},{0x5AL,0x50L,0x50L},{0x5AL,0x50L,0x50L},{0x5AL,0x50L,0x50L}},{{0x5AL,0x50L,0x50L},{0x5AL,0x50L,0x50L},{0x5AL,0x50L,0x50L},{0x5AL,0x50L,0x50L}},{{0x5AL,0x50L,0x50L},{0x5AL,0x50L,0x50L},{0x5AL,0x50L,0x50L},{0x5AL,0x50L,0x50L}}};
            int32_t l_244 = 0L;
            int32_t *l_243 = &l_244;
            int32_t *l_245 = (void*)0;
            int i, j, k;
            l_242[2][3][1] ^= l_241;
            l_245 = (l_243 = l_243);
            unsigned int result = 0;
            result += l_241;
            int l_242_i0, l_242_i1, l_242_i2;
            for (l_242_i0 = 0; l_242_i0 < 4; l_242_i0++) {
                for (l_242_i1 = 0; l_242_i1 < 4; l_242_i1++) {
                    for (l_242_i2 = 0; l_242_i2 < 3; l_242_i2++) {
                        result += l_242[l_242_i0][l_242_i1][l_242_i2];
                    }
                }
            }
            result += l_244;
            atomic_add(&p_496->g_special_values[91 * get_linear_group_id() + 86], result);
        }
        else
        { /* block id: 134 */
            (1 + 1);
        }
        for (l_228 = 9; (l_228 <= 28); l_228 = safe_add_func_int16_t_s_s(l_228, 1))
        { /* block id: 139 */
            struct S0 *l_249 = &l_248;
            (*l_249) = l_248;
            return l_250;
        }
    }
    return p_74;
}


/* ------------------------------------------ */
/* 
 * reads : p_496->g_100 p_496->g_3 p_496->g_207 p_496->g_208 p_496->g_97 p_496->g_43
 * writes: p_496->g_100 p_496->g_3 p_496->g_97 p_496->g_43
 */
uint64_t ** func_78(uint64_t ** p_79, int32_t  p_80, uint32_t  p_81, struct S3 * p_496)
{ /* block id: 45 */
    volatile struct S0 *l_102 = (void*)0;
    volatile struct S0 *l_103 = &p_496->g_100;
    VECTOR(int32_t, 2) l_194 = (VECTOR(int32_t, 2))((-1L), (-1L));
    VECTOR(int16_t, 16) l_205 = (VECTOR(int16_t, 16))(0x61F8L, (VECTOR(int16_t, 4))(0x61F8L, (VECTOR(int16_t, 2))(0x61F8L, (-1L)), (-1L)), (-1L), 0x61F8L, (-1L), (VECTOR(int16_t, 2))(0x61F8L, (-1L)), (VECTOR(int16_t, 2))(0x61F8L, (-1L)), 0x61F8L, (-1L), 0x61F8L, (-1L));
    int i;
    (*l_103) = p_496->g_100;
    if ((atomic_inc(&p_496->g_atomic_input[91 * get_linear_group_id() + 47]) == 2))
    { /* block id: 48 */
        int16_t l_104 = 0x58A7L;
        if (l_104)
        { /* block id: 49 */
            VECTOR(int32_t, 4) l_105 = (VECTOR(int32_t, 4))(0x21833D83L, (VECTOR(int32_t, 2))(0x21833D83L, (-9L)), (-9L));
            uint16_t l_106 = 65534UL;
            uint32_t l_107 = 0x82FFB082L;
            VECTOR(int32_t, 4) l_108 = (VECTOR(int32_t, 4))(0x27FFA302L, (VECTOR(int32_t, 2))(0x27FFA302L, 8L), 8L);
            VECTOR(int32_t, 4) l_109 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1E6DEAEDL), 0x1E6DEAEDL);
            VECTOR(int32_t, 4) l_110 = (VECTOR(int32_t, 4))(0x3D8BAA40L, (VECTOR(int32_t, 2))(0x3D8BAA40L, 0x5D5741E9L), 0x5D5741E9L);
            VECTOR(int16_t, 16) l_111 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int16_t, 2))(0L, 0L), (VECTOR(int16_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
            VECTOR(uint16_t, 16) l_112 = (VECTOR(uint16_t, 16))(0xC0B8L, (VECTOR(uint16_t, 4))(0xC0B8L, (VECTOR(uint16_t, 2))(0xC0B8L, 0x9D24L), 0x9D24L), 0x9D24L, 0xC0B8L, 0x9D24L, (VECTOR(uint16_t, 2))(0xC0B8L, 0x9D24L), (VECTOR(uint16_t, 2))(0xC0B8L, 0x9D24L), 0xC0B8L, 0x9D24L, 0xC0B8L, 0x9D24L);
            VECTOR(int16_t, 8) l_113 = (VECTOR(int16_t, 8))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), (-1L)), (-1L)), (-1L), (-10L), (-1L));
            VECTOR(int8_t, 4) l_114 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 8L), 8L);
            int32_t l_115 = (-1L);
            VECTOR(int16_t, 8) l_116 = (VECTOR(int16_t, 8))(0x5266L, (VECTOR(int16_t, 4))(0x5266L, (VECTOR(int16_t, 2))(0x5266L, 9L), 9L), 9L, 0x5266L, 9L);
            VECTOR(int16_t, 8) l_117 = (VECTOR(int16_t, 8))(0x5CC1L, (VECTOR(int16_t, 4))(0x5CC1L, (VECTOR(int16_t, 2))(0x5CC1L, (-7L)), (-7L)), (-7L), 0x5CC1L, (-7L));
            int8_t l_118 = 8L;
            VECTOR(int16_t, 8) l_119 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x5A79L), 0x5A79L), 0x5A79L, 1L, 0x5A79L);
            VECTOR(int8_t, 4) l_120 = (VECTOR(int8_t, 4))(0x62L, (VECTOR(int8_t, 2))(0x62L, 0L), 0L);
            int32_t l_121 = 0x731B53E3L;
            uint32_t l_122 = 0x335754D7L;
            uint32_t l_123 = 0x9289730AL;
            uint16_t l_124 = 0xFD6EL;
            int32_t l_125[6][6] = {{0L,0x576CE611L,0x18A95DAAL,1L,0x18A95DAAL,0x576CE611L},{0L,0x576CE611L,0x18A95DAAL,1L,0x18A95DAAL,0x576CE611L},{0L,0x576CE611L,0x18A95DAAL,1L,0x18A95DAAL,0x576CE611L},{0L,0x576CE611L,0x18A95DAAL,1L,0x18A95DAAL,0x576CE611L},{0L,0x576CE611L,0x18A95DAAL,1L,0x18A95DAAL,0x576CE611L},{0L,0x576CE611L,0x18A95DAAL,1L,0x18A95DAAL,0x576CE611L}};
            int64_t l_126 = 0x1C586F400ABD0B17L;
            int32_t l_127 = 0x439DAF5BL;
            uint64_t l_128 = 1UL;
            int32_t l_129 = 1L;
            uint8_t l_130 = 0x94L;
            uint8_t l_131 = 255UL;
            uint16_t l_132 = 0x2B81L;
            int i, j;
            if ((l_132 = ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(l_105.xyzx)).wyzyyzyyzzwzwwyw, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((l_106 , l_107), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), 1L)).yxyyyyxy)), 0x757325A1L, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(l_108.xzzx)), ((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x1BF9AB2FL)))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_109.yx)).yyyx)), 0x0776C575L)).even))).yyxyyyxy, ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(l_110.wxzwyzxwwwxyzxzw)).hi, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(l_111.saba4bff0)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_112.s84)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))((l_106 = (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(int16_t, 4))(l_113.s5774)).yyxwzxzz, ((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(l_114.wxxy)).zwwxwzwy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(FAKE_DIVERGE(p_496->global_0_offset, get_global_id(0), 10), 246UL, 0xAEL, 253UL, 0x48L, 0xB1L, 255UL, 246UL))))))), (int16_t)l_115)))))), 65535UL, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 8))(l_116.s47721112)).s1154321363752727, ((VECTOR(int16_t, 4))(l_117.s3052)).ywyzzwwwxywwyzww))).sbe, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))((l_104 = l_118), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(l_119.s13540765)).s3622512164550667, ((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 16))(l_120.xyxzxzxxzzywzxww)).s404b, ((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))((l_122 = l_121), 0x3AL, l_123, 5UL, 246UL, l_124, 0x42L, 0x3EL, l_125[3][2], l_126, ((VECTOR(uint8_t, 2))(0xE8L)), 0x40L, 0xBBL, 1UL, 1UL)).lo, (uint8_t)GROUP_DIVERGE(1, 1)))).s1142736571147257, ((VECTOR(uint8_t, 16))(0x69L))))).s2bd2))).hi)).xyyy)).yzxzwwxy, ((VECTOR(int16_t, 8))((-1L)))))).s6130741777241700))), ((VECTOR(int16_t, 16))(0x6B94L)), ((VECTOR(int16_t, 16))(0x7EA9L))))).s96bb)).even)), (-4L))))).odd))), 65528UL, ((VECTOR(uint16_t, 4))(0xA6B8L)))).sf9)).lo , 0xD961L)), 0xBB46L, l_127, ((VECTOR(uint16_t, 4))(0UL)), ((VECTOR(uint16_t, 4))(5UL)), 1UL, 0x1111L, l_128, 65528UL, 0UL)).s42)).yxxyyyyxxxxyyxyx)).se2b3, (uint16_t)l_129))).xzxzzyxyzyxzwzyw)).s15)))), 0x5490L, 0UL)), 65531UL, 65526UL)))))))).s4747260272754650, ((VECTOR(int32_t, 16))(2L))))).hi, ((VECTOR(int32_t, 8))(0L))))).s10)).xxyyyyyy)).odd, (int32_t)l_130))), 0x1496D93FL, 6L)).s60)), 0x40517B6AL, 0x3A289590L)).hi, ((VECTOR(int32_t, 2))(0x3FC28CD2L))))).yyxxyyxyyxyxxyyy, (int32_t)0L, (int32_t)l_131))).s4368, ((VECTOR(int32_t, 4))(8L))))).zyywyxzz)).s4511451714351576, ((VECTOR(int32_t, 16))(0x6233F163L))))).s8))
            { /* block id: 54 */
                int32_t l_133 = 0L;
                int64_t l_134 = 0x0ED02C9C021E97B7L;
                l_109.x |= (l_133 , l_134);
            }
            else
            { /* block id: 56 */
                VECTOR(int32_t, 8) l_135 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x42F35A27L), 0x42F35A27L), 0x42F35A27L, 3L, 0x42F35A27L);
                VECTOR(int32_t, 2) l_136 = (VECTOR(int32_t, 2))(0x6390C49CL, 0x2C92A46FL);
                uint8_t l_137 = 0xEAL;
                VECTOR(int32_t, 4) l_138 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x13EADC2AL), 0x13EADC2AL);
                int8_t l_139 = 0L;
                VECTOR(int32_t, 8) l_140 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x2A86CCD6L), 0x2A86CCD6L), 0x2A86CCD6L, (-10L), 0x2A86CCD6L);
                int64_t l_141[9][9] = {{0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL,9L,1L,0L,1L,9L,0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL},{0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL,9L,1L,0L,1L,9L,0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL},{0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL,9L,1L,0L,1L,9L,0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL},{0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL,9L,1L,0L,1L,9L,0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL},{0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL,9L,1L,0L,1L,9L,0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL},{0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL,9L,1L,0L,1L,9L,0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL},{0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL,9L,1L,0L,1L,9L,0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL},{0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL,9L,1L,0L,1L,9L,0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL},{0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL,9L,1L,0L,1L,9L,0x3FFD8805FBE3FE1AL,0x3FFD8805FBE3FE1AL}};
                VECTOR(int32_t, 4) l_142 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x6D1A421FL), 0x6D1A421FL);
                int32_t l_143 = 0x46CBE70DL;
                int32_t l_144[6][2];
                VECTOR(int32_t, 16) l_145 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x330F1BEDL), 0x330F1BEDL), 0x330F1BEDL, 0L, 0x330F1BEDL, (VECTOR(int32_t, 2))(0L, 0x330F1BEDL), (VECTOR(int32_t, 2))(0L, 0x330F1BEDL), 0L, 0x330F1BEDL, 0L, 0x330F1BEDL);
                int64_t l_146 = (-1L);
                int32_t l_147[2];
                int8_t l_148[4][10][6] = {{{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L}},{{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L}},{{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L}},{{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L},{0x56L,(-1L),(-1L),0x58L,(-2L),1L}}};
                uint8_t l_160 = 253UL;
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_144[i][j] = 0x75D40A59L;
                }
                for (i = 0; i < 2; i++)
                    l_147[i] = 0L;
                l_108.w |= (((VECTOR(int32_t, 4))(l_135.s1326)).y , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_136.yy)).yxyxxxyxyxyyxyyx)))).sc9c0, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0L, (-9L), 0x258DE8A0L, l_137, ((VECTOR(int32_t, 8))(l_138.ywyzxxxz)).s0, l_139, 0x563A6EC5L, ((VECTOR(int32_t, 4))(l_140.s5716)), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x11735A46L, 1L, l_141[6][0], ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_142.ywwxzywz)), l_143, l_144[0][1], 0x5C4C3C44L, 0x6A339AD1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x5292E011L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(1L, 0x241B15C3L, (-1L), 0x3F8C49FDL, 0x0DCD2CF2L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(l_145.s50)).xxyy, (int32_t)l_146))), ((VECTOR(int32_t, 4))(0x4AD87FAEL))))).xzzyzwyw)), (-8L), 0L, 0x4E8BB6BBL)).sbd, ((VECTOR(int32_t, 2))(0x03237CEFL))))), ((VECTOR(int32_t, 8))(0x0305FE1CL)), ((VECTOR(int32_t, 4))(1L)), 0x37507154L, 0x55238762L)).sac07)), l_147[1], (-1L), 0x16FC68CCL)).s40)), (-10L), 0x440FC8F3L)).s13)), l_148[1][9][0], 0x6FAF5395L, 0x36A07BBAL)).s0125002257005115)).s68, ((VECTOR(int32_t, 2))(0L))))), ((VECTOR(int32_t, 2))((-8L)))))), 1L, (-6L), 0x36953446L)).sf389))))), ((VECTOR(int32_t, 4))(0x12B93441L))))), ((VECTOR(int32_t, 4))(0x19B35F8EL))))).zywyyxwzzzzyzxyz)).s3d, ((VECTOR(int32_t, 2))(0x7F892F54L)), ((VECTOR(int32_t, 2))(0x7D783D8BL))))), 1L, (-1L))), ((VECTOR(int32_t, 2))((-9L))), (-3L), 0x1E8EBB9BL)).s1);
                for (l_143 = 22; (l_143 == (-23)); --l_143)
                { /* block id: 60 */
                    int64_t l_151[7][1][2] = {{{(-9L),(-9L)}},{{(-9L),(-9L)}},{{(-9L),(-9L)}},{{(-9L),(-9L)}},{{(-9L),(-9L)}},{{(-9L),(-9L)}},{{(-9L),(-9L)}}};
                    int32_t l_152 = 0x6D91DA8FL;
                    VECTOR(int16_t, 4) l_153 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x3601L), 0x3601L);
                    uint32_t l_154[8][6] = {{8UL,0UL,8UL,8UL,0UL,8UL},{8UL,0UL,8UL,8UL,0UL,8UL},{8UL,0UL,8UL,8UL,0UL,8UL},{8UL,0UL,8UL,8UL,0UL,8UL},{8UL,0UL,8UL,8UL,0UL,8UL},{8UL,0UL,8UL,8UL,0UL,8UL},{8UL,0UL,8UL,8UL,0UL,8UL},{8UL,0UL,8UL,8UL,0UL,8UL}};
                    int32_t l_157 = 0x14EBA6C6L;
                    int32_t *l_158 = &l_157;
                    int32_t *l_159 = &l_157;
                    int i, j, k;
                    --l_154[1][2];
                    l_110.x &= l_157;
                    l_159 = l_158;
                }
                if (l_160)
                { /* block id: 65 */
                    int32_t l_161 = 0x6596C44CL;
                    l_109.y &= l_161;
                }
                else
                { /* block id: 67 */
                    uint32_t l_162 = 0xE0181DA6L;
                    l_142.w &= l_162;
                    for (l_162 = 0; (l_162 != 29); l_162 = safe_add_func_int64_t_s_s(l_162, 6))
                    { /* block id: 71 */
                        VECTOR(uint64_t, 4) l_165 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 1UL), 1UL);
                        int i;
                        l_105.x &= l_165.y;
                    }
                    for (l_162 = 14; (l_162 == 31); ++l_162)
                    { /* block id: 76 */
                        int32_t l_170 = 1L;
                        int32_t *l_169 = &l_170;
                        int32_t **l_168 = &l_169;
                        int32_t **l_171 = (void*)0;
                        l_171 = l_168;
                    }
                }
            }
            for (l_113.s4 = 0; (l_113.s4 <= 19); ++l_113.s4)
            { /* block id: 83 */
                int32_t l_174[2][5][4] = {{{0x5EAE226BL,0x25955131L,0x7AFECD87L,(-9L)},{0x5EAE226BL,0x25955131L,0x7AFECD87L,(-9L)},{0x5EAE226BL,0x25955131L,0x7AFECD87L,(-9L)},{0x5EAE226BL,0x25955131L,0x7AFECD87L,(-9L)},{0x5EAE226BL,0x25955131L,0x7AFECD87L,(-9L)}},{{0x5EAE226BL,0x25955131L,0x7AFECD87L,(-9L)},{0x5EAE226BL,0x25955131L,0x7AFECD87L,(-9L)},{0x5EAE226BL,0x25955131L,0x7AFECD87L,(-9L)},{0x5EAE226BL,0x25955131L,0x7AFECD87L,(-9L)},{0x5EAE226BL,0x25955131L,0x7AFECD87L,(-9L)}}};
                int i, j, k;
                for (l_174[1][4][1] = 0; (l_174[1][4][1] <= 25); l_174[1][4][1] = safe_add_func_uint32_t_u_u(l_174[1][4][1], 8))
                { /* block id: 86 */
                    struct S0 l_177[7] = {{6UL},{1UL},{6UL},{6UL},{1UL},{6UL},{6UL}};
                    struct S0 l_178 = {1UL};
                    int i;
                    l_178 = l_177[2];
                }
                for (l_174[0][3][3] = (-14); (l_174[0][3][3] > 24); ++l_174[0][3][3])
                { /* block id: 91 */
                    uint16_t l_181 = 1UL;
                    uint16_t l_182 = 65528UL;
                    l_109.z &= l_181;
                    l_182++;
                }
            }
        }
        else
        { /* block id: 96 */
            union U2 l_185 = {{7UL}};/* VOLATILE GLOBAL l_185 */
            VECTOR(int32_t, 2) l_186 = (VECTOR(int32_t, 2))(0x3BCB1EACL, 0L);
            int32_t l_187[6][2] = {{0x39CDFA42L,0x39CDFA42L},{0x39CDFA42L,0x39CDFA42L},{0x39CDFA42L,0x39CDFA42L},{0x39CDFA42L,0x39CDFA42L},{0x39CDFA42L,0x39CDFA42L},{0x39CDFA42L,0x39CDFA42L}};
            int64_t l_188 = 0x2543894A63829273L;
            int32_t l_189 = (-3L);
            int i, j;
            l_189 ^= (l_185 , (l_188 = (l_187[3][1] = (GROUP_DIVERGE(2, 1) , (l_186.y = (((VECTOR(int16_t, 4))(0x2ABAL, 0x7F72L, (-1L), 0x2D0BL)).w , 0L))))));
        }
        unsigned int result = 0;
        result += l_104;
        atomic_add(&p_496->g_special_values[91 * get_linear_group_id() + 47], result);
    }
    else
    { /* block id: 102 */
        (1 + 1);
    }
    for (p_81 = 0; (p_81 == 22); p_81 = safe_add_func_uint16_t_u_u(p_81, 8))
    { /* block id: 107 */
        int32_t **l_192 = &p_496->g_3;
        VECTOR(int32_t, 2) l_193 = (VECTOR(int32_t, 2))(0x4A624054L, 0x5784363FL);
        int16_t *l_206[1][2][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t *l_211 = &p_496->g_97[0][0];
        int i, j, k;
        (*l_192) = &p_80;
        (*l_211) ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-7L), 0x6EBB1182L)).xxyx)).lo, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(l_193.xxyy)).xxxzwyzz, ((VECTOR(int32_t, 16))(l_194.xxyyyyyxxyyxyxyx)).even, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, (-3L))).yyyxyxxyyyxyxyyy)).sf1b9, ((VECTOR(int32_t, 2))(1L, 1L)).xyyx))).yzyyyzyw))).s37))), 0x339974A8L, ((VECTOR(int32_t, 4))(0x4735A513L, (0xA199L == (((safe_mul_func_uint8_t_u_u(p_81, (safe_div_func_uint64_t_u_u(0x80A1827553D69D35L, (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((((~(l_194.x = (safe_add_func_uint16_t_u_u((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_205.sba)))).hi != (~(**l_192))), p_80)))) < (p_496->g_207 != &p_496->g_208)) | l_205.sb) > (safe_mul_func_int16_t_s_s((((void*)0 != &p_496->g_43) ^ p_81), GROUP_DIVERGE(1, 1)))), 3)), p_80)))))) > 0x2252L) | (*p_496->g_207))), 0L, (-7L))).x, ((VECTOR(int32_t, 2))(9L)), (-4L), 0x0622F486L)))))))).s5;
    }
    for (p_496->g_43 = 0; (p_496->g_43 > 15); p_496->g_43++)
    { /* block id: 114 */
        uint64_t **l_216 = (void*)0;
        for (p_81 = 0; (p_81 <= 11); p_81 = safe_add_func_int64_t_s_s(p_81, 5))
        { /* block id: 117 */
            if (l_194.x)
                break;
        }
        return l_216;
    }
    return &p_496->g_87;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t ** func_82(int32_t  p_83, int32_t  p_84, struct S0  p_85, struct S3 * p_496)
{ /* block id: 41 */
    return &p_496->g_87;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[83];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 83; i++)
            l_comm_values[i] = 1;
    struct S3 c_497;
    struct S3* p_496 = &c_497;
    struct S3 c_498 = {
        7L, // p_496->g_4
        &p_496->g_4, // p_496->g_3
        &p_496->g_4, // p_496->g_6
        0xF823AAF5BFB66FEBL, // p_496->g_12
        9UL, // p_496->g_16
        (-1L), // p_496->g_43
        {&p_496->g_43,&p_496->g_43,&p_496->g_43,&p_496->g_43,&p_496->g_43,&p_496->g_43,&p_496->g_43}, // p_496->g_42
        &p_496->g_12, // p_496->g_87
        &p_496->g_87, // p_496->g_86
        {65531UL,6UL,0xEDF5L,6UL,65531UL,65531UL,6UL,0xEDF5L,6UL,65531UL}, // p_496->g_91
        {{0L}}, // p_496->g_97
        (-1L), // p_496->g_99
        {0x120EAC2FL}, // p_496->g_100
        {(void*)0,(void*)0,(void*)0}, // p_496->g_101
        0x1622L, // p_496->g_208
        &p_496->g_208, // p_496->g_207
        (VECTOR(int32_t, 16))(0x2EE43E5DL, (VECTOR(int32_t, 4))(0x2EE43E5DL, (VECTOR(int32_t, 2))(0x2EE43E5DL, 1L), 1L), 1L, 0x2EE43E5DL, 1L, (VECTOR(int32_t, 2))(0x2EE43E5DL, 1L), (VECTOR(int32_t, 2))(0x2EE43E5DL, 1L), 0x2EE43E5DL, 1L, 0x2EE43E5DL, 1L), // p_496->g_240
        &p_496->g_87, // p_496->g_251
        {0UL}, // p_496->g_252
        {1UL}, // p_496->g_253
        &p_496->g_97[0][0], // p_496->g_262
        (VECTOR(uint16_t, 2))(6UL, 65531UL), // p_496->g_291
        (VECTOR(int32_t, 16))(0x76CCA64AL, (VECTOR(int32_t, 4))(0x76CCA64AL, (VECTOR(int32_t, 2))(0x76CCA64AL, 0x5956E6CDL), 0x5956E6CDL), 0x5956E6CDL, 0x76CCA64AL, 0x5956E6CDL, (VECTOR(int32_t, 2))(0x76CCA64AL, 0x5956E6CDL), (VECTOR(int32_t, 2))(0x76CCA64AL, 0x5956E6CDL), 0x76CCA64AL, 0x5956E6CDL, 0x76CCA64AL, 0x5956E6CDL), // p_496->g_298
        (-10L), // p_496->g_342
        {0x10AC3D2FF1B54D93L}, // p_496->g_344
        (VECTOR(int16_t, 8))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), (-3L)), (-3L)), (-3L), (-9L), (-3L)), // p_496->g_364
        {{{&p_496->g_252,&p_496->g_252}},{{&p_496->g_252,&p_496->g_252}}}, // p_496->g_374
        &p_496->g_252, // p_496->g_375
        (VECTOR(int32_t, 2))(0x05A2EFD3L, 1L), // p_496->g_381
        {{{0xC8E1087EL}},{{0xC8E1087EL}},{{0xC8E1087EL}},{{0xC8E1087EL}},{{0xC8E1087EL}}}, // p_496->g_382
        (VECTOR(uint16_t, 4))(0xBFCAL, (VECTOR(uint16_t, 2))(0xBFCAL, 1UL), 1UL), // p_496->g_387
        0x5E14D7FDL, // p_496->g_393
        {(void*)0}, // p_496->g_396
        {&p_496->g_97[0][0],&p_496->g_97[0][0]}, // p_496->g_397
        (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 65531UL), 65531UL), // p_496->g_405
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_496->g_423
        (void*)0, // p_496->g_425
        (void*)0, // p_496->g_432
        (void*)0, // p_496->g_433
        (void*)0, // p_496->g_435
        (VECTOR(uint8_t, 8))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 6UL), 6UL), 6UL, 253UL, 6UL), // p_496->g_450
        (void*)0, // p_496->g_461
        (void*)0, // p_496->g_462
        0x3E9CC1C6L, // p_496->g_476
        0L, // p_496->g_483
        0, // p_496->v_collective
        sequence_input[get_global_id(0)], // p_496->global_0_offset
        sequence_input[get_global_id(1)], // p_496->global_1_offset
        sequence_input[get_global_id(2)], // p_496->global_2_offset
        sequence_input[get_local_id(0)], // p_496->local_0_offset
        sequence_input[get_local_id(1)], // p_496->local_1_offset
        sequence_input[get_local_id(2)], // p_496->local_2_offset
        sequence_input[get_group_id(0)], // p_496->group_0_offset
        sequence_input[get_group_id(1)], // p_496->group_1_offset
        sequence_input[get_group_id(2)], // p_496->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 83)), permutations[0][get_linear_local_id()])), // p_496->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_497 = c_498;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_496);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_496->g_4, "p_496->g_4", print_hash_value);
    transparent_crc(p_496->g_12, "p_496->g_12", print_hash_value);
    transparent_crc(p_496->g_16, "p_496->g_16", print_hash_value);
    transparent_crc(p_496->g_43, "p_496->g_43", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_496->g_91[i], "p_496->g_91[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_496->g_97[i][j], "p_496->g_97[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_496->g_99, "p_496->g_99", print_hash_value);
    transparent_crc(p_496->g_100.f0, "p_496->g_100.f0", print_hash_value);
    transparent_crc(p_496->g_208, "p_496->g_208", print_hash_value);
    transparent_crc(p_496->g_240.s0, "p_496->g_240.s0", print_hash_value);
    transparent_crc(p_496->g_240.s1, "p_496->g_240.s1", print_hash_value);
    transparent_crc(p_496->g_240.s2, "p_496->g_240.s2", print_hash_value);
    transparent_crc(p_496->g_240.s3, "p_496->g_240.s3", print_hash_value);
    transparent_crc(p_496->g_240.s4, "p_496->g_240.s4", print_hash_value);
    transparent_crc(p_496->g_240.s5, "p_496->g_240.s5", print_hash_value);
    transparent_crc(p_496->g_240.s6, "p_496->g_240.s6", print_hash_value);
    transparent_crc(p_496->g_240.s7, "p_496->g_240.s7", print_hash_value);
    transparent_crc(p_496->g_240.s8, "p_496->g_240.s8", print_hash_value);
    transparent_crc(p_496->g_240.s9, "p_496->g_240.s9", print_hash_value);
    transparent_crc(p_496->g_240.sa, "p_496->g_240.sa", print_hash_value);
    transparent_crc(p_496->g_240.sb, "p_496->g_240.sb", print_hash_value);
    transparent_crc(p_496->g_240.sc, "p_496->g_240.sc", print_hash_value);
    transparent_crc(p_496->g_240.sd, "p_496->g_240.sd", print_hash_value);
    transparent_crc(p_496->g_240.se, "p_496->g_240.se", print_hash_value);
    transparent_crc(p_496->g_240.sf, "p_496->g_240.sf", print_hash_value);
    transparent_crc(p_496->g_252.f0, "p_496->g_252.f0", print_hash_value);
    transparent_crc(p_496->g_253.f0, "p_496->g_253.f0", print_hash_value);
    transparent_crc(p_496->g_291.x, "p_496->g_291.x", print_hash_value);
    transparent_crc(p_496->g_291.y, "p_496->g_291.y", print_hash_value);
    transparent_crc(p_496->g_298.s0, "p_496->g_298.s0", print_hash_value);
    transparent_crc(p_496->g_298.s1, "p_496->g_298.s1", print_hash_value);
    transparent_crc(p_496->g_298.s2, "p_496->g_298.s2", print_hash_value);
    transparent_crc(p_496->g_298.s3, "p_496->g_298.s3", print_hash_value);
    transparent_crc(p_496->g_298.s4, "p_496->g_298.s4", print_hash_value);
    transparent_crc(p_496->g_298.s5, "p_496->g_298.s5", print_hash_value);
    transparent_crc(p_496->g_298.s6, "p_496->g_298.s6", print_hash_value);
    transparent_crc(p_496->g_298.s7, "p_496->g_298.s7", print_hash_value);
    transparent_crc(p_496->g_298.s8, "p_496->g_298.s8", print_hash_value);
    transparent_crc(p_496->g_298.s9, "p_496->g_298.s9", print_hash_value);
    transparent_crc(p_496->g_298.sa, "p_496->g_298.sa", print_hash_value);
    transparent_crc(p_496->g_298.sb, "p_496->g_298.sb", print_hash_value);
    transparent_crc(p_496->g_298.sc, "p_496->g_298.sc", print_hash_value);
    transparent_crc(p_496->g_298.sd, "p_496->g_298.sd", print_hash_value);
    transparent_crc(p_496->g_298.se, "p_496->g_298.se", print_hash_value);
    transparent_crc(p_496->g_298.sf, "p_496->g_298.sf", print_hash_value);
    transparent_crc(p_496->g_342, "p_496->g_342", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_496->g_344[i], "p_496->g_344[i]", print_hash_value);

    }
    transparent_crc(p_496->g_364.s0, "p_496->g_364.s0", print_hash_value);
    transparent_crc(p_496->g_364.s1, "p_496->g_364.s1", print_hash_value);
    transparent_crc(p_496->g_364.s2, "p_496->g_364.s2", print_hash_value);
    transparent_crc(p_496->g_364.s3, "p_496->g_364.s3", print_hash_value);
    transparent_crc(p_496->g_364.s4, "p_496->g_364.s4", print_hash_value);
    transparent_crc(p_496->g_364.s5, "p_496->g_364.s5", print_hash_value);
    transparent_crc(p_496->g_364.s6, "p_496->g_364.s6", print_hash_value);
    transparent_crc(p_496->g_364.s7, "p_496->g_364.s7", print_hash_value);
    transparent_crc(p_496->g_381.x, "p_496->g_381.x", print_hash_value);
    transparent_crc(p_496->g_381.y, "p_496->g_381.y", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_496->g_382[i].f0.f0, "p_496->g_382[i].f0.f0", print_hash_value);

    }
    transparent_crc(p_496->g_387.x, "p_496->g_387.x", print_hash_value);
    transparent_crc(p_496->g_387.y, "p_496->g_387.y", print_hash_value);
    transparent_crc(p_496->g_387.z, "p_496->g_387.z", print_hash_value);
    transparent_crc(p_496->g_387.w, "p_496->g_387.w", print_hash_value);
    transparent_crc(p_496->g_393, "p_496->g_393", print_hash_value);
    transparent_crc(p_496->g_405.x, "p_496->g_405.x", print_hash_value);
    transparent_crc(p_496->g_405.y, "p_496->g_405.y", print_hash_value);
    transparent_crc(p_496->g_405.z, "p_496->g_405.z", print_hash_value);
    transparent_crc(p_496->g_405.w, "p_496->g_405.w", print_hash_value);
    transparent_crc(p_496->g_450.s0, "p_496->g_450.s0", print_hash_value);
    transparent_crc(p_496->g_450.s1, "p_496->g_450.s1", print_hash_value);
    transparent_crc(p_496->g_450.s2, "p_496->g_450.s2", print_hash_value);
    transparent_crc(p_496->g_450.s3, "p_496->g_450.s3", print_hash_value);
    transparent_crc(p_496->g_450.s4, "p_496->g_450.s4", print_hash_value);
    transparent_crc(p_496->g_450.s5, "p_496->g_450.s5", print_hash_value);
    transparent_crc(p_496->g_450.s6, "p_496->g_450.s6", print_hash_value);
    transparent_crc(p_496->g_450.s7, "p_496->g_450.s7", print_hash_value);
    transparent_crc(p_496->g_476, "p_496->g_476", print_hash_value);
    transparent_crc(p_496->g_483, "p_496->g_483", print_hash_value);
    transparent_crc(p_496->v_collective, "p_496->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 91; i++)
            transparent_crc(p_496->g_special_values[i + 91 * get_linear_group_id()], "p_496->g_special_values[i + 91 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_496->l_comm_values[get_linear_local_id()], "p_496->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_496->g_comm_values[get_linear_group_id() * 83 + get_linear_local_id()], "p_496->g_comm_values[get_linear_group_id() * 83 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
