// --atomics 70 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 41,39,3 -l 41,3,1
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

__constant uint32_t permutations[10][123] = {
{56,14,50,105,24,58,41,22,86,25,33,29,96,8,71,32,49,46,63,110,48,30,18,85,5,111,55,45,74,76,82,16,23,87,109,108,73,9,28,62,44,92,120,93,122,4,59,83,51,19,27,7,119,37,10,43,88,95,97,99,68,67,65,115,26,79,118,39,98,1,117,113,101,54,2,84,12,107,52,60,106,6,11,53,80,13,42,90,104,70,72,47,78,75,121,102,94,57,21,112,89,20,77,36,91,35,40,81,0,38,3,61,34,15,66,103,69,17,114,100,31,116,64}, // permutation 0
{47,106,43,108,91,44,54,86,32,20,105,9,107,110,101,40,119,87,99,56,51,3,33,53,74,112,7,5,118,94,117,72,61,70,16,98,59,92,19,4,83,114,71,52,2,39,115,116,45,68,64,111,93,63,95,109,104,122,102,18,67,81,46,29,78,62,82,80,49,66,27,89,73,84,13,14,25,77,1,8,121,6,76,69,120,50,15,100,113,37,75,0,10,38,97,90,88,58,79,42,57,65,34,36,48,31,11,85,23,35,26,55,28,103,60,22,96,17,12,41,24,30,21}, // permutation 1
{31,88,16,95,17,9,20,65,5,70,118,100,46,52,4,66,99,106,54,102,86,76,68,19,10,37,113,44,94,78,51,29,110,6,87,67,80,69,83,120,121,81,114,11,89,0,85,45,91,90,116,58,7,49,28,75,32,42,30,23,39,56,36,98,38,62,24,3,109,61,26,108,71,82,33,92,107,97,119,93,41,12,8,84,50,43,21,105,47,79,96,27,115,2,77,101,13,59,103,15,40,1,111,25,14,72,18,117,63,35,64,57,48,22,55,104,73,74,112,34,53,122,60}, // permutation 2
{40,69,38,23,8,58,108,48,65,112,90,20,59,66,6,119,7,77,72,22,116,0,33,106,35,79,12,57,98,64,120,5,96,105,55,47,4,109,3,28,84,19,61,81,52,103,15,111,101,27,89,63,87,14,75,71,50,95,2,97,17,60,83,29,91,110,53,9,118,39,26,30,117,78,74,85,113,100,76,10,80,62,31,107,114,1,13,41,54,45,73,44,56,86,25,11,92,16,70,34,99,21,115,24,94,42,68,82,88,36,102,18,49,37,122,43,32,46,51,93,67,121,104}, // permutation 3
{30,26,72,77,79,63,98,84,62,57,28,20,35,96,59,36,60,45,41,31,76,101,103,48,118,91,92,108,12,11,73,117,86,88,22,111,52,114,106,61,19,32,5,4,0,75,120,113,82,34,71,24,119,94,8,99,93,54,66,49,18,112,39,40,23,50,89,109,68,29,115,83,6,42,85,44,122,16,14,47,10,53,58,17,37,69,121,97,81,33,74,104,27,87,80,25,105,51,7,55,67,56,110,13,3,1,102,43,116,65,38,90,2,15,107,9,100,64,21,46,70,95,78}, // permutation 4
{72,75,80,21,13,45,109,62,11,18,49,105,35,33,57,69,6,9,118,56,112,60,46,113,20,103,8,101,48,90,54,86,37,55,85,25,3,66,63,93,104,94,108,79,121,102,27,52,5,16,51,26,53,15,82,10,95,38,87,91,67,71,78,30,74,110,115,120,42,12,58,107,99,28,47,111,44,34,31,4,61,73,98,114,96,65,29,50,97,106,7,117,70,36,116,89,14,119,2,23,100,22,76,64,68,39,17,40,43,88,41,19,24,83,77,122,92,1,81,32,84,0,59}, // permutation 5
{106,80,41,40,26,88,8,10,101,115,5,62,84,60,100,90,103,13,30,35,76,38,104,20,65,28,3,79,113,15,56,44,118,95,43,120,57,114,32,36,52,34,96,7,75,24,108,82,63,67,0,42,21,73,9,50,93,77,12,51,27,71,11,119,110,55,22,109,16,19,117,87,45,69,121,14,97,92,68,2,61,99,81,70,72,98,89,37,107,78,53,74,94,54,48,1,102,25,64,23,85,86,116,49,105,46,4,47,91,17,112,83,18,31,122,29,33,6,39,66,58,59,111}, // permutation 6
{101,45,58,83,110,92,30,25,87,122,17,39,21,71,75,119,104,3,18,46,15,117,100,79,107,95,94,80,14,26,90,35,27,0,84,113,98,31,44,61,57,73,70,6,102,51,111,62,86,29,103,48,115,82,1,43,60,112,19,68,96,66,40,106,24,38,63,72,37,85,53,22,93,5,9,8,16,74,99,7,50,4,121,20,36,109,11,52,47,77,64,65,34,116,55,23,56,76,41,32,54,49,59,108,13,69,114,91,33,78,120,118,10,81,42,97,89,105,2,67,28,88,12}, // permutation 7
{80,100,71,26,18,66,1,8,67,63,106,56,39,17,96,79,97,48,52,91,12,45,44,65,108,2,102,27,90,46,113,73,98,116,23,24,25,42,16,121,11,10,72,83,122,3,84,59,37,81,111,87,22,104,77,55,112,95,5,93,60,110,20,4,118,86,115,14,105,41,13,82,34,114,32,35,62,78,49,99,101,74,0,61,107,70,7,19,85,54,76,43,53,117,89,120,68,6,15,47,33,64,69,57,9,30,58,50,29,21,40,51,75,92,36,38,94,31,103,109,88,119,28}, // permutation 8
{4,32,22,112,18,78,85,50,48,37,120,80,52,15,69,41,68,16,90,121,59,75,63,105,56,30,31,122,57,101,72,98,13,79,2,20,33,102,74,8,24,5,106,10,58,87,96,65,34,81,46,89,84,119,67,26,82,66,42,111,0,104,23,83,1,21,45,28,7,107,99,55,12,70,86,77,62,11,51,60,3,114,73,97,43,19,54,36,115,25,117,38,40,109,100,29,9,91,17,71,110,108,113,95,53,93,6,88,103,44,118,92,47,94,27,116,14,49,35,39,76,61,64} // permutation 9
};

// Seed: 1626406068

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
};

struct S1 {
    int32_t g_16;
    volatile int64_t g_65[8];
    int32_t g_75;
    VECTOR(uint16_t, 2) g_83;
    VECTOR(int32_t, 4) g_109;
    int32_t *g_118;
    VECTOR(uint32_t, 4) g_135;
    VECTOR(int32_t, 16) g_140;
    int64_t g_146;
    uint32_t g_151;
    uint64_t g_154;
    volatile struct S0 g_155[5];
    volatile struct S0 * volatile g_156;
    int32_t ** volatile g_236;
    volatile VECTOR(int32_t, 8) g_237;
    VECTOR(uint32_t, 2) g_249;
    uint32_t g_252;
    int32_t g_254;
    struct S0 g_256;
    int32_t g_261;
    int32_t *g_262;
    int8_t g_270[8];
    int16_t g_276;
    int16_t g_278;
    uint8_t g_295;
    int32_t ** volatile g_302;
    int32_t * volatile g_303;
    int32_t * volatile g_304[8][1][2];
    int32_t * volatile g_305;
    int16_t g_365[6];
    int32_t g_377;
    VECTOR(int16_t, 16) g_394;
    volatile VECTOR(int16_t, 8) g_395;
    int32_t * volatile g_401;
    uint32_t g_406;
    volatile VECTOR(uint16_t, 16) g_409;
    uint32_t g_415;
    VECTOR(int32_t, 8) g_425;
    VECTOR(uint16_t, 8) g_426;
    int32_t g_439;
    int16_t * volatile g_444[2][5][2];
    struct S0 * volatile g_446;
    volatile VECTOR(int16_t, 8) g_469;
    int16_t g_479[7];
    struct S0 * volatile g_490;
    volatile int32_t * volatile *g_504;
    int8_t * volatile g_527;
    int8_t * volatile *g_526;
    int32_t **g_546;
    uint64_t g_553;
    int32_t g_556;
    volatile int8_t g_567[8];
    struct S0 g_574;
    struct S0 * volatile g_573[10];
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
uint32_t  func_1(struct S1 * p_576);
uint64_t  func_11(int32_t  p_12, struct S1 * p_576);
int32_t * func_17(uint32_t  p_18, int32_t * p_19, uint64_t  p_20, uint8_t  p_21, int32_t  p_22, struct S1 * p_576);
int32_t * func_23(uint32_t  p_24, int32_t * p_25, int32_t * p_26, int32_t * p_27, uint32_t  p_28, struct S1 * p_576);
uint8_t  func_33(uint32_t  p_34, int32_t * p_35, struct S1 * p_576);
int8_t  func_47(int64_t  p_48, uint64_t  p_49, int32_t * p_50, int32_t * p_51, uint64_t  p_52, struct S1 * p_576);
int32_t * func_55(uint64_t  p_56, int64_t  p_57, int32_t * p_58, uint32_t  p_59, struct S1 * p_576);
int32_t * func_66(int32_t * p_67, struct S1 * p_576);
int32_t * func_76(int32_t * p_77, uint16_t  p_78, int32_t  p_79, int32_t  p_80, struct S1 * p_576);
uint64_t  func_87(uint32_t  p_88, int32_t * p_89, uint8_t  p_90, int32_t * p_91, struct S1 * p_576);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_576->l_comm_values p_576->g_comm_values p_576->g_16 p_576->g_65 p_576->g_83 p_576->g_109 p_576->g_75 p_576->g_135 p_576->g_140 p_576->g_118 p_576->g_155 p_576->g_236 p_576->g_237 p_576->g_249 p_576->g_146 p_576->g_261 p_576->g_262 p_576->g_256.f0 p_576->g_252 p_576->g_302 p_576->g_295 p_576->g_365 p_576->g_377 p_576->g_254 p_576->g_270 p_576->g_154 p_576->g_394 p_576->g_395 p_576->g_401 p_576->g_406 p_576->g_409 p_576->g_278 p_576->g_425 p_576->g_426 p_576->g_151 p_576->g_439 p_576->g_415 p_576->g_444 p_576->g_446 p_576->g_276 p_576->g_490 p_576->g_504 p_576->g_526 p_576->g_553 p_576->g_256 p_576->g_469
 * writes: p_576->g_16 p_576->g_109 p_576->g_118 p_576->g_146 p_576->g_151 p_576->g_154 p_576->g_75 p_576->g_155 p_576->g_254 p_576->g_261 p_576->g_276 p_576->g_278 p_576->g_295 p_576->g_262 p_576->g_83 p_576->g_406 p_576->g_415 p_576->g_439 p_576->g_256 p_576->l_comm_values p_576->g_526 p_576->g_377 p_576->g_546 p_576->g_553 p_576->g_574
 */
uint32_t  func_1(struct S1 * p_576)
{ /* block id: 4 */
    VECTOR(uint8_t, 4) l_2 = (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 255UL), 255UL);
    int32_t *l_15[4] = {&p_576->g_16,&p_576->g_16,&p_576->g_16,&p_576->g_16};
    int32_t *l_384 = &p_576->g_16;
    int32_t *l_438 = &p_576->g_439;
    VECTOR(int16_t, 8) l_465 = (VECTOR(int16_t, 8))(0x1478L, (VECTOR(int16_t, 4))(0x1478L, (VECTOR(int16_t, 2))(0x1478L, 0x2CCBL), 0x2CCBL), 0x2CCBL, 0x1478L, 0x2CCBL);
    uint64_t *l_559[2][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    struct S0 *l_571 = (void*)0;
    struct S0 *l_572 = &p_576->g_256;
    struct S0 *l_575 = &p_576->g_574;
    int i, j;
    if (((*l_384) = ((FAKE_DIVERGE(p_576->global_2_offset, get_global_id(2), 10) , ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 4))(l_2.ywxw)).wxwxzzzz, ((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 16))(1UL, 252UL, 255UL, ((safe_div_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(p_576->l_comm_values[(safe_mod_func_uint32_t_u_u(p_576->tid, 123))], (!(~((safe_rshift_func_uint16_t_u_u(0UL, (((l_2.w != (((safe_mod_func_int64_t_s_s(((func_11(((*l_438) ^= (((safe_rshift_func_int16_t_s_u(p_576->g_comm_values[p_576->tid], 11)) , (p_576->g_16 = l_2.w)) , (((0L && p_576->g_16) , func_17(p_576->g_16, func_23((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(func_33(p_576->g_comm_values[p_576->tid], &p_576->g_16, p_576), p_576->g_270[3])), p_576->g_377)), l_384, l_15[2], l_15[2], p_576->g_249.x, p_576), p_576->g_394.s1, p_576->l_comm_values[(safe_mod_func_uint32_t_u_u(p_576->tid, 123))], (*l_384), p_576)) == l_15[2]))), p_576) && p_576->g_256.f0) | p_576->g_256.f0), p_576->g_140.s9)) , p_576->g_415) , GROUP_DIVERGE(2, 1))) , p_576->g_65[6]) <= (-7L)))) ^ 0x2E4526F6467207FDL))))), p_576->g_252)) != p_576->g_270[2]), ((VECTOR(uint8_t, 8))(255UL)), 255UL, ((VECTOR(uint8_t, 2))(255UL)), 0x5DL)).odd))), ((VECTOR(uint8_t, 8))(3UL))))).s65, ((VECTOR(uint8_t, 2))(0xC4L)), ((VECTOR(uint8_t, 2))(0xD2L))))).odd) & FAKE_DIVERGE(p_576->global_1_offset, get_global_id(1), 10))))
    { /* block id: 134 */
        return p_576->g_395.s2;
    }
    else
    { /* block id: 136 */
        uint16_t l_482 = 65528UL;
        int32_t l_517 = 3L;
        int32_t l_547 = 0L;
        int32_t **l_562 = &l_384;
        for (p_576->g_278 = 1; (p_576->g_278 <= 22); p_576->g_278 = safe_add_func_int16_t_s_s(p_576->g_278, 4))
        { /* block id: 139 */
            struct S0 l_445 = {-1L};
            VECTOR(int16_t, 16) l_466 = (VECTOR(int16_t, 16))(0x3BAFL, (VECTOR(int16_t, 4))(0x3BAFL, (VECTOR(int16_t, 2))(0x3BAFL, 0x5054L), 0x5054L), 0x5054L, 0x3BAFL, 0x5054L, (VECTOR(int16_t, 2))(0x3BAFL, 0x5054L), (VECTOR(int16_t, 2))(0x3BAFL, 0x5054L), 0x3BAFL, 0x5054L, 0x3BAFL, 0x5054L);
            uint8_t l_486 = 0x4EL;
            VECTOR(int32_t, 16) l_487 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 6L), 6L), 6L, (-1L), 6L, (VECTOR(int32_t, 2))((-1L), 6L), (VECTOR(int32_t, 2))((-1L), 6L), (-1L), 6L, (-1L), 6L);
            int32_t *l_491 = &p_576->g_16;
            int32_t *l_506 = &p_576->g_256.f0;
            int32_t **l_505 = &l_506;
            int8_t *l_518[10] = {&p_576->g_270[4],&p_576->g_270[7],&p_576->g_270[4],&p_576->g_270[4],&p_576->g_270[7],&p_576->g_270[4],&p_576->g_270[4],&p_576->g_270[7],&p_576->g_270[4],&p_576->g_270[4]};
            uint32_t *l_519 = (void*)0;
            uint32_t *l_520 = &p_576->g_151;
            VECTOR(int32_t, 4) l_548 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 2L), 2L);
            uint64_t **l_560 = &l_559[1][1];
            int32_t **l_561[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            for (p_576->g_406 = 0; (p_576->g_406 >= 41); p_576->g_406 = safe_add_func_uint64_t_u_u(p_576->g_406, 1))
            { /* block id: 142 */
                int16_t l_456 = 0x188CL;
                struct S0 l_489 = {0x06DAC185L};
                (*p_576->g_446) = (((void*)0 != p_576->g_444[0][4][1]) , l_445);
                for (p_576->g_146 = (-9); (p_576->g_146 > (-7)); p_576->g_146 = safe_add_func_uint16_t_u_u(p_576->g_146, 4))
                { /* block id: 146 */
                    uint16_t l_451 = 65535UL;
                    for (p_576->g_415 = (-16); (p_576->g_415 < 31); p_576->g_415 = safe_add_func_uint32_t_u_u(p_576->g_415, 6))
                    { /* block id: 149 */
                        int64_t *l_457 = (void*)0;
                        int64_t *l_458 = (void*)0;
                        int64_t *l_459[4][3][8] = {{{&p_576->g_146,&p_576->g_146,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_576->g_146,&p_576->g_146,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_576->g_146,&p_576->g_146,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_576->g_146,&p_576->g_146,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_576->g_146,&p_576->g_146,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_576->g_146,&p_576->g_146,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_576->g_146,&p_576->g_146,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_576->g_146,&p_576->g_146,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_576->g_146,&p_576->g_146,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&p_576->g_146,&p_576->g_146,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_576->g_146,&p_576->g_146,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&p_576->g_146,&p_576->g_146,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                        uint8_t *l_460 = &p_576->g_295;
                        int8_t *l_470 = &p_576->g_270[5];
                        int16_t *l_483 = (void*)0;
                        int16_t *l_484 = (void*)0;
                        int16_t *l_485 = &l_456;
                        int32_t l_488 = 0x02949012L;
                        int i, j, k;
                        --l_451;
                        l_487.sf = (safe_sub_func_int8_t_s_s(((((p_576->l_comm_values[(safe_mod_func_uint32_t_u_u(p_576->tid, 123))] = l_456) || ((--(*l_460)) > (safe_mod_func_int32_t_s_s(((p_576->g_276 && ((*l_485) |= ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(0x6CF7L, 0L, ((VECTOR(int16_t, 2))(l_465.s00)), (*l_384), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(l_466.sf20d8b62)).s3172331616674430, ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))((((~(safe_sub_func_int8_t_s_s(p_576->g_16, (((VECTOR(int16_t, 16))(p_576->g_469.s7024715434763754)).sb | (((((((*l_470) = 0x3EL) ^ (safe_sub_func_uint32_t_u_u(p_576->g_425.s0, (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((p_576->g_479[6] = (safe_div_func_int64_t_s_s(p_576->g_comm_values[p_576->tid], GROUP_DIVERGE(0, 1)))), 3)), 3))))) <= (safe_lshift_func_int8_t_s_u(l_482, 7))) , (p_576->g_365[0] | p_576->g_249.y)) != FAKE_DIVERGE(p_576->local_2_offset, get_local_id(2), 10)) , l_445.f0))))) < p_576->g_109.w) , l_466.s5), (-3L), 0x04L, ((VECTOR(int8_t, 4))(0x6CL)), 0x09L, ((VECTOR(int8_t, 4))(1L)), ((VECTOR(int8_t, 2))((-2L))), 1L, 1L)), ((VECTOR(uint8_t, 16))(7UL))))).lo)).s32, ((VECTOR(int16_t, 2))((-9L)))))).yyxyyxxyyxxyxxxx, ((VECTOR(int16_t, 16))(0x2AAFL))))).odd, ((VECTOR(int16_t, 8))(0x2D50L))))).s5501274250203321, ((VECTOR(int16_t, 16))((-1L)))))).s3d51)).zxzzxwwz)).s7555173373320110, ((VECTOR(int16_t, 16))((-1L)))))).lo)), 0x6C53L, 1L, 0x2068L)).s22af)).z)) != p_576->g_276), p_576->g_276)))) == 5UL) || l_486), l_466.s0));
                        if (l_488)
                            continue;
                    }
                    return l_486;
                }
                (*p_576->g_490) = l_489;
                l_491 = (*p_576->g_236);
            }
            if ((safe_lshift_func_int8_t_s_u(0x76L, ((((*l_491) , (safe_rshift_func_uint16_t_u_s((((GROUP_DIVERGE(2, 1) || GROUP_DIVERGE(2, 1)) <= (safe_sub_func_uint32_t_u_u(((*l_520) &= (((l_482 != (safe_div_func_uint32_t_u_u(((void*)0 == &l_482), (safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((((p_576->g_504 == l_505) != ((*l_491) = (safe_mod_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(0, 1), 1)) | ((safe_div_func_uint32_t_u_u((l_482 == 0x6A96L), l_517)) | 0UL)), (*l_491))) , 4294967295UL) && 0x6C249DABL), 65535UL)))) > l_487.s0), 0x23F1592AE5972768L)), p_576->g_75))))) | p_576->g_146) | p_576->g_237.s7)), 0x287C303BL))) ^ p_576->g_135.x), 13))) , l_517) , l_517))))
            { /* block id: 166 */
                int32_t **l_521 = &l_491;
                int32_t l_531 = 1L;
                (*l_521) = (void*)0;
                for (p_576->g_16 = 0; (p_576->g_16 < (-14)); p_576->g_16--)
                { /* block id: 170 */
                    uint64_t l_532 = 18446744073709551614UL;
                    (*p_576->g_401) = (*p_576->g_262);
                    for (l_482 = (-6); (l_482 <= 11); l_482 = safe_add_func_int32_t_s_s(l_482, 1))
                    { /* block id: 174 */
                        int8_t * volatile **l_528 = &p_576->g_526;
                        int32_t l_529 = 9L;
                        int32_t l_530 = 0x46880525L;
                        (*l_528) = p_576->g_526;
                        ++l_532;
                    }
                    for (p_576->g_254 = 0; (p_576->g_254 != 17); ++p_576->g_254)
                    { /* block id: 180 */
                        if ((*p_576->g_118))
                            break;
                    }
                    if ((*p_576->g_118))
                        continue;
                }
            }
            else
            { /* block id: 185 */
                int32_t *l_537 = &p_576->g_75;
                int32_t *l_538 = &p_576->g_261;
                int32_t **l_544 = (void*)0;
                int32_t ***l_543 = &l_544;
                int32_t ***l_545 = (void*)0;
                int32_t l_549 = (-2L);
                int32_t l_550 = 1L;
                int32_t l_551 = 0x01E9E367L;
                int32_t l_552 = 0x01370444L;
                l_538 = l_537;
                for (p_576->g_377 = (-9); (p_576->g_377 <= (-20)); p_576->g_377--)
                { /* block id: 189 */
                    (*p_576->g_118) = (safe_rshift_func_uint16_t_u_u(0UL, 12));
                    if ((**p_576->g_236))
                        continue;
                }
                (*p_576->g_302) = ((((*l_543) = &l_538) != (p_576->g_546 = &l_491)) , (*p_576->g_236));
                p_576->g_553--;
            }
            if ((**p_576->g_302))
                continue;
        }
        (*l_562) = l_15[0];
    }
    for (p_576->g_553 = 0; (p_576->g_553 != 12); ++p_576->g_553)
    { /* block id: 207 */
        int16_t l_565 = 5L;
        int32_t l_566[3][4][4] = {{{0L,1L,2L,0L},{0L,1L,2L,0L},{0L,1L,2L,0L},{0L,1L,2L,0L}},{{0L,1L,2L,0L},{0L,1L,2L,0L},{0L,1L,2L,0L},{0L,1L,2L,0L}},{{0L,1L,2L,0L},{0L,1L,2L,0L},{0L,1L,2L,0L},{0L,1L,2L,0L}}};
        uint16_t l_568[1][3][4] = {{{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL},{0UL,0UL,0UL,0UL}}};
        int i, j, k;
        l_568[0][0][0]++;
        return (*l_384);
    }
    (*l_575) = ((*l_572) = (*p_576->g_490));
    return p_576->g_469.s4;
}


/* ------------------------------------------ */
/* 
 * reads : p_576->g_109
 * writes:
 */
uint64_t  func_11(int32_t  p_12, struct S1 * p_576)
{ /* block id: 131 */
    return p_576->g_109.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_576->g_118 p_576->g_16
 * writes: p_576->g_16
 */
int32_t * func_17(uint32_t  p_18, int32_t * p_19, uint64_t  p_20, uint8_t  p_21, int32_t  p_22, struct S1 * p_576)
{ /* block id: 127 */
    int32_t l_436 = (-9L);
    int32_t *l_437 = &p_576->g_261;
    (*p_576->g_118) |= ((safe_add_func_uint8_t_u_u(l_436, 1UL)) & l_436);
    return l_437;
}


/* ------------------------------------------ */
/* 
 * reads : p_576->g_83 p_576->g_394 p_576->g_395 p_576->g_16 p_576->g_302 p_576->g_262 p_576->g_249 p_576->g_401 p_576->g_406 p_576->g_409 p_576->g_278 p_576->g_65 p_576->g_75 p_576->g_comm_values p_576->g_109 p_576->l_comm_values p_576->g_155 p_576->g_135 p_576->g_236 p_576->g_118 p_576->g_261 p_576->g_140 p_576->g_270 p_576->g_425 p_576->g_426 p_576->g_151
 * writes: p_576->g_75 p_576->g_406 p_576->g_415 p_576->g_109 p_576->g_118 p_576->g_155 p_576->g_261 p_576->g_151
 */
int32_t * func_23(uint32_t  p_24, int32_t * p_25, int32_t * p_26, int32_t * p_27, uint32_t  p_28, struct S1 * p_576)
{ /* block id: 110 */
    int8_t l_387 = (-3L);
    VECTOR(int32_t, 8) l_392 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x766DC235L), 0x766DC235L), 0x766DC235L, (-6L), 0x766DC235L);
    VECTOR(int32_t, 8) l_393 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-1L)), (-1L)), (-1L), (-2L), (-1L));
    VECTOR(int16_t, 2) l_396 = (VECTOR(int16_t, 2))((-2L), 0x523CL);
    int32_t *l_402 = &p_576->g_75;
    int32_t *l_403 = &p_576->g_75;
    int32_t *l_404 = (void*)0;
    int32_t *l_405[3][1][3] = {{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0}}};
    uint32_t *l_412 = (void*)0;
    uint32_t *l_413 = &p_576->g_406;
    uint32_t *l_414[6];
    int32_t **l_416 = &l_405[1][0][0];
    int8_t l_419[7] = {3L,(-1L),3L,3L,(-1L),3L,3L};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_414[i] = &p_576->g_415;
    (*p_576->g_401) = (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0xC612L, (p_576->g_83.x , ((-1L) && l_387)), 1UL, 7UL)).wxyyxwxz)).s2, (0xB1FFL != (((-1L) != (safe_div_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_392.s6675151216054757)).saf)).xxxyxxyxyyyyxxyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_387, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_393.s61145125)).s05)).yxyx, ((VECTOR(int32_t, 4))(0x66D748E8L, 0x62852F21L, 0x325297FCL, 0x681FFCABL)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0L, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(p_576->g_394.sb4bb)).lo, ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(4L, 0x4539L, ((VECTOR(int16_t, 8))(p_576->g_395.s61721124)), ((VECTOR(int16_t, 2))(l_396.yx)), 9L, ((safe_rshift_func_int8_t_s_s(7L, 5)) < (safe_lshift_func_int8_t_s_s((l_393.s5 = ((*p_26) == (**p_576->g_302))), l_396.y))), 0x4F20L, 0x7960L)))).lo, ((VECTOR(int16_t, 8))(0x5C67L))))).s07))), (int32_t)(*p_26)))), ((VECTOR(int32_t, 4))((-9L))), (-10L))))).lo))), ((VECTOR(int32_t, 2))(0x15BB0361L)), 0x0C22F5F7L)).s71)).yyyxyyxyyyxyxxxy, ((VECTOR(int32_t, 16))((-1L)))))).sa < l_396.y), p_576->g_249.y)), p_576->g_394.s9))) || 0xC861932CL))));
    ++p_576->g_406;
    (*l_416) = func_55((((VECTOR(uint16_t, 8))(p_576->g_409.sa0ace968)).s3 > 9L), (safe_rshift_func_uint8_t_u_s(p_576->g_278, 7)), &p_576->g_75, (p_576->g_415 = ((*l_413) = p_576->g_406)), p_576);
    for (p_576->g_261 = 3; (p_576->g_261 >= 0); --p_576->g_261)
    { /* block id: 119 */
        int8_t l_424 = (-1L);
        uint32_t *l_433 = &p_576->g_151;
        l_419[0] |= (*p_576->g_401);
        (*l_403) ^= (*p_27);
        (*l_416) = (p_576->g_140.sa , func_66(func_76(p_26, p_576->g_270[7], (safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((l_424 < ((VECTOR(int32_t, 2))(p_576->g_425.s03)).even), (((((VECTOR(uint16_t, 4))(p_576->g_426.s5604)).y & ((l_424 || FAKE_DIVERGE(p_576->local_2_offset, get_local_id(2), 10)) ^ (p_576->g_140.sc & (safe_add_func_int64_t_s_s((((*l_433) ^= (safe_add_func_int64_t_s_s(((safe_add_func_int8_t_s_s(p_24, 0L)) < (((((!(p_576->l_comm_values[(safe_mod_func_uint32_t_u_u(p_576->tid, 123))] ^ (*l_403))) , p_24) < p_576->g_249.y) , 6UL) || p_576->g_140.s1)), 9L))) & 4294967290UL), 0x273AD7BE304595F1L))))) || p_576->g_425.s5) > p_576->l_comm_values[(safe_mod_func_uint32_t_u_u(p_576->tid, 123))]))) & (*p_27)), 0x81C3L)), (*p_25), p_576), p_576));
        if ((*p_25))
            continue;
    }
    return (*p_576->g_236);
}


/* ------------------------------------------ */
/* 
 * reads : p_576->g_16 p_576->g_comm_values p_576->g_65 p_576->l_comm_values p_576->g_83 p_576->g_109 p_576->g_75 p_576->g_135 p_576->g_140 p_576->g_118 p_576->g_155 p_576->g_236 p_576->g_237 p_576->g_249 p_576->g_146 p_576->g_261 p_576->g_262 p_576->g_256.f0 p_576->g_252 p_576->g_302 p_576->g_295 p_576->g_365 p_576->g_377 p_576->g_254 p_576->g_270 p_576->g_154
 * writes: p_576->g_109 p_576->g_118 p_576->g_146 p_576->g_151 p_576->g_154 p_576->g_75 p_576->g_155 p_576->g_254 p_576->g_261 p_576->g_276 p_576->g_278 p_576->g_295 p_576->g_262 p_576->g_83
 */
uint8_t  func_33(uint32_t  p_34, int32_t * p_35, struct S1 * p_576)
{ /* block id: 6 */
    VECTOR(uint64_t, 16) l_42 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint64_t, 2))(1UL, 0UL), (VECTOR(uint64_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
    VECTOR(uint64_t, 16) l_43 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint64_t, 2))(0UL, 1UL), (VECTOR(uint64_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
    struct S0 l_44 = {-4L};
    int32_t l_60 = (-3L);
    int32_t l_61[8][4][1] = {{{7L},{7L},{7L},{7L}},{{7L},{7L},{7L},{7L}},{{7L},{7L},{7L},{7L}},{{7L},{7L},{7L},{7L}},{{7L},{7L},{7L},{7L}},{{7L},{7L},{7L},{7L}},{{7L},{7L},{7L},{7L}},{{7L},{7L},{7L},{7L}}};
    uint32_t l_62 = 0x3D4D864BL;
    int32_t *l_352 = &l_60;
    int32_t **l_351 = &l_352;
    uint64_t l_374 = 0x5AEA661446CE2288L;
    VECTOR(int16_t, 4) l_378 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L);
    int i, j, k;
    l_61[1][0][0] = (((safe_mod_func_int64_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 16))(l_42.s54ab10079d62bfee)).even, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_43.s03)).xyyy)).wwzzwxwx))).s6, ((l_44 , (safe_mod_func_int8_t_s_s(func_47(((p_576->g_16 || p_34) && (p_34 , l_42.sc)), (safe_mod_func_int64_t_s_s(p_34, FAKE_DIVERGE(p_576->global_2_offset, get_global_id(2), 10))), func_55(l_42.s7, (l_61[2][0][0] = (l_60 >= (p_576->g_comm_values[p_576->tid] , 0UL))), p_35, l_62, p_576), p_35, p_576->g_83.x, p_576), p_34))) >= l_42.se))), (-6L))), l_62)) , l_43.s9) <= p_576->g_135.x);
    for (p_576->g_295 = 0; (p_576->g_295 > 6); p_576->g_295++)
    { /* block id: 84 */
        int32_t **l_354[4];
        int32_t ***l_353 = &l_354[0];
        uint16_t *l_379 = (void*)0;
        int64_t *l_380 = &p_576->g_146;
        int16_t l_381 = 0x39C7L;
        uint64_t *l_382 = &p_576->g_154;
        int32_t *l_383 = &l_61[1][0][0];
        int i;
        for (i = 0; i < 4; i++)
            l_354[i] = &l_352;
        l_44 = l_44;
        if ((atomic_inc(&p_576->g_atomic_input[70 * get_linear_group_id() + 47]) == 5))
        { /* block id: 87 */
            int32_t l_308 = 0x750A1A2DL;
            int8_t l_309 = 1L;
            uint32_t l_310 = 0x7910E796L;
            uint32_t l_311 = 1UL;
            if (((l_308 , l_309) , (l_311 &= l_310)))
            { /* block id: 89 */
                VECTOR(int32_t, 8) l_312 = (VECTOR(int32_t, 8))(0x2835BAE9L, (VECTOR(int32_t, 4))(0x2835BAE9L, (VECTOR(int32_t, 2))(0x2835BAE9L, 0x7569DD28L), 0x7569DD28L), 0x7569DD28L, 0x2835BAE9L, 0x7569DD28L);
                VECTOR(int32_t, 16) l_313 = (VECTOR(int32_t, 16))(0x528D8049L, (VECTOR(int32_t, 4))(0x528D8049L, (VECTOR(int32_t, 2))(0x528D8049L, (-1L)), (-1L)), (-1L), 0x528D8049L, (-1L), (VECTOR(int32_t, 2))(0x528D8049L, (-1L)), (VECTOR(int32_t, 2))(0x528D8049L, (-1L)), 0x528D8049L, (-1L), 0x528D8049L, (-1L));
                VECTOR(int32_t, 16) l_314 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                VECTOR(int16_t, 2) l_315 = (VECTOR(int16_t, 2))(0x32C3L, 0x4C02L);
                VECTOR(uint16_t, 4) l_316 = (VECTOR(uint16_t, 4))(0x6BAEL, (VECTOR(uint16_t, 2))(0x6BAEL, 6UL), 6UL);
                VECTOR(uint16_t, 4) l_317 = (VECTOR(uint16_t, 4))(0xE50FL, (VECTOR(uint16_t, 2))(0xE50FL, 0x09ABL), 0x09ABL);
                VECTOR(uint16_t, 8) l_318 = (VECTOR(uint16_t, 8))(0x561FL, (VECTOR(uint16_t, 4))(0x561FL, (VECTOR(uint16_t, 2))(0x561FL, 0xB75CL), 0xB75CL), 0xB75CL, 0x561FL, 0xB75CL);
                uint8_t l_319 = 2UL;
                uint16_t l_320 = 0x4280L;
                uint64_t l_321 = 18446744073709551615UL;
                int32_t l_322 = 0x54C5A717L;
                VECTOR(int32_t, 8) l_323 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
                int32_t l_324 = 0x18F79F95L;
                uint16_t l_325 = 0x9174L;
                int16_t l_326 = 0x0691L;
                VECTOR(uint16_t, 4) l_327 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65526UL), 65526UL);
                uint16_t l_328 = 6UL;
                VECTOR(int32_t, 4) l_329 = (VECTOR(int32_t, 4))(0x649EBBCCL, (VECTOR(int32_t, 2))(0x649EBBCCL, 0x02C15D93L), 0x02C15D93L);
                VECTOR(uint16_t, 16) l_330 = (VECTOR(uint16_t, 16))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 0UL), 0UL), 0UL, 65528UL, 0UL, (VECTOR(uint16_t, 2))(65528UL, 0UL), (VECTOR(uint16_t, 2))(65528UL, 0UL), 65528UL, 0UL, 65528UL, 0UL);
                VECTOR(int32_t, 16) l_331 = (VECTOR(int32_t, 16))(0x19DE25CFL, (VECTOR(int32_t, 4))(0x19DE25CFL, (VECTOR(int32_t, 2))(0x19DE25CFL, 0x1F741FB1L), 0x1F741FB1L), 0x1F741FB1L, 0x19DE25CFL, 0x1F741FB1L, (VECTOR(int32_t, 2))(0x19DE25CFL, 0x1F741FB1L), (VECTOR(int32_t, 2))(0x19DE25CFL, 0x1F741FB1L), 0x19DE25CFL, 0x1F741FB1L, 0x19DE25CFL, 0x1F741FB1L);
                VECTOR(int32_t, 2) l_332 = (VECTOR(int32_t, 2))(0x606CE886L, 0x214DCAE1L);
                uint64_t l_333 = 0x3F89CBE35A6D8673L;
                VECTOR(int32_t, 4) l_334 = (VECTOR(int32_t, 4))(0x05D92A28L, (VECTOR(int32_t, 2))(0x05D92A28L, 0x4D37AFEAL), 0x4D37AFEAL);
                VECTOR(int32_t, 16) l_335 = (VECTOR(int32_t, 16))(0x28102B23L, (VECTOR(int32_t, 4))(0x28102B23L, (VECTOR(int32_t, 2))(0x28102B23L, (-10L)), (-10L)), (-10L), 0x28102B23L, (-10L), (VECTOR(int32_t, 2))(0x28102B23L, (-10L)), (VECTOR(int32_t, 2))(0x28102B23L, (-10L)), 0x28102B23L, (-10L), 0x28102B23L, (-10L));
                uint8_t l_336 = 1UL;
                uint64_t l_337[1][6][8] = {{{0x1B74799CA74EE4CCL,0xF07A8AD6C23C6D60L,0x37E17DE8490304D5L,1UL,0xF07A8AD6C23C6D60L,1UL,0x37E17DE8490304D5L,0xF07A8AD6C23C6D60L},{0x1B74799CA74EE4CCL,0xF07A8AD6C23C6D60L,0x37E17DE8490304D5L,1UL,0xF07A8AD6C23C6D60L,1UL,0x37E17DE8490304D5L,0xF07A8AD6C23C6D60L},{0x1B74799CA74EE4CCL,0xF07A8AD6C23C6D60L,0x37E17DE8490304D5L,1UL,0xF07A8AD6C23C6D60L,1UL,0x37E17DE8490304D5L,0xF07A8AD6C23C6D60L},{0x1B74799CA74EE4CCL,0xF07A8AD6C23C6D60L,0x37E17DE8490304D5L,1UL,0xF07A8AD6C23C6D60L,1UL,0x37E17DE8490304D5L,0xF07A8AD6C23C6D60L},{0x1B74799CA74EE4CCL,0xF07A8AD6C23C6D60L,0x37E17DE8490304D5L,1UL,0xF07A8AD6C23C6D60L,1UL,0x37E17DE8490304D5L,0xF07A8AD6C23C6D60L},{0x1B74799CA74EE4CCL,0xF07A8AD6C23C6D60L,0x37E17DE8490304D5L,1UL,0xF07A8AD6C23C6D60L,1UL,0x37E17DE8490304D5L,0xF07A8AD6C23C6D60L}}};
                uint64_t l_338[4] = {0xF4AED43BFEEABC62L,0xF4AED43BFEEABC62L,0xF4AED43BFEEABC62L,0xF4AED43BFEEABC62L};
                int16_t l_339 = 0x73E7L;
                int32_t l_340 = 0x024FE2DFL;
                int8_t l_341[8][1];
                VECTOR(int32_t, 4) l_342 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x482F5D25L), 0x482F5D25L);
                int i, j, k;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_341[i][j] = 7L;
                }
                l_342.z &= ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(l_312.s31450706)).hi, ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_313.s95905f3e678d4e72)).odd)).s0330560543417026, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x390F7C94L, ((VECTOR(int32_t, 4))(l_314.s2e2e)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(l_315.xxyy)).lo, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 4))(l_316.yxzx)).lo))), ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 2))(l_317.xy)).xyxy, ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 8))(l_318.s36617523)).odd, (uint16_t)(l_320 = l_319), (uint16_t)l_321)))))), 65535UL, 1UL)).s1, l_322, 0UL, ((l_324 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_323.s3360070350375615)).s21)).lo) , ((l_309 |= l_325) , l_326)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),uint16_t,((VECTOR(uint16_t, 2))(l_327.xw)).yyxy, (uint16_t)(l_328 &= ((VECTOR(uint16_t, 2))(65535UL, 0x0DB0L)).odd), (uint16_t)l_329.z))), ((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_330.s34)).yxxx)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(0x9475L, (((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_331.s205e)).even, (int32_t)((l_339 ^= ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 8))(l_332.yyyxxxyy)).s5110146572040762, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_333, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_334.xxxx)))).x, (-3L), 1L)).zwxwyyywyyzzxxzx)).sdc3c)).yxwzywzx, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(l_335.s79)), ((VECTOR(int32_t, 16))(l_336, ((VECTOR(int32_t, 2))(0x56B2E201L)), 0L, l_337[0][4][2], (-9L), ((VECTOR(int32_t, 2))(0x3FC4DCCAL)), (-1L), 0x3F0ED740L, ((VECTOR(int32_t, 4))(0x6F80A26FL)), (-3L), 0x7C3224B0L)).scd))), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x4EB47212L))))))).xyyyyxyyyxyxyyyy, ((VECTOR(int32_t, 16))(0x082A610AL))))))).odd, ((VECTOR(int32_t, 8))(0x312F437FL))))).even, ((VECTOR(int32_t, 4))(0x65614A70L)), ((VECTOR(int32_t, 4))(0x05768213L))))).hi, ((VECTOR(int32_t, 2))(0x579B2379L))))).xyxxyyxy, ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))((-1L)))))).lo)).wxywxzyw, (int32_t)l_338[1])))))).s2061364602666676))).s0f)).lo) , l_340)))), ((VECTOR(int32_t, 2))(0x0743EE97L))))).xyxyxxxyxyyyxxxy, ((VECTOR(int32_t, 16))((-2L)))))).lo, ((VECTOR(int32_t, 8))(0x249AC67BL))))).s1 , 0UL), 65533UL, 7UL)))).lo)).xyxy))))).s12)))), 0x7C39L, 65535UL)).s70))).xyyyxyxx, ((VECTOR(int32_t, 8))((-7L)))))).s66)), ((VECTOR(int32_t, 2))(0x1D3B27F0L))))).xxxy)), 6L, l_341[1][0], 0x5F26746AL, ((VECTOR(int32_t, 4))(0L)))).s55)).xxyyyyxx, ((VECTOR(int32_t, 8))((-1L)))))).s4207074704345305))).sca52))).w, 0x2FBE5F42L, ((VECTOR(int32_t, 4))(0x5A1B2EFBL)), ((VECTOR(int32_t, 4))((-5L))), ((VECTOR(int32_t, 2))(0x41879012L)), ((VECTOR(int32_t, 4))(3L)))).s8a, ((VECTOR(int32_t, 2))(0L))))).even;
            }
            else
            { /* block id: 96 */
                int32_t l_343 = 0x7C8DE385L;
                uint32_t l_344 = 0xE6923AC2L;
                ++l_344;
            }
            unsigned int result = 0;
            result += l_308;
            result += l_309;
            result += l_310;
            result += l_311;
            atomic_add(&p_576->g_special_values[70 * get_linear_group_id() + 47], result);
        }
        else
        { /* block id: 99 */
            (1 + 1);
        }
        (*l_383) ^= (GROUP_DIVERGE(2, 1) != (0x203CL < ((safe_lshift_func_uint8_t_u_u(((*p_35) < (l_351 == ((*l_353) = &l_352))), 1)) == (safe_mod_func_uint64_t_u_u(((*l_382) &= ((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((((((VECTOR(int32_t, 2))(7L, 0x5CD8E9A8L)).hi < ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((((~(safe_sub_func_uint8_t_u_u(l_43.s9, p_576->g_365[4]))) || ((safe_mul_func_int16_t_s_s(((((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0L, (-2L))).yxxy)))).y == ((*l_380) = (safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u(l_374, (safe_rshift_func_int8_t_s_s(p_576->g_377, 1)))) >= (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_378.zwwzwywyxzzxzwxx)).even)).s0266707442652222)).sb <= (p_576->g_83.x = 0x302AL))), 2)))) && 0x2091L) < p_576->g_365[5]) & p_576->g_254), (-1L))) > p_34)) , p_576->g_237.s5) , l_378.x), ((VECTOR(int32_t, 2))(9L)), (-2L))), (-10L), (-8L), 0x0DA0BF28L, 0x5E2CA2B7L)).s2) != l_381) && (**p_576->g_236)), p_34)), l_381)), p_576->g_270[4])) < 0L)), p_576->g_140.se)))));
        if ((*l_383))
            continue;
    }
    return p_576->g_135.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_576->g_16 p_576->g_256.f0 p_576->g_252 p_576->g_236 p_576->g_118 p_576->g_140 p_576->g_75 p_576->g_146 p_576->g_comm_values p_576->g_109 p_576->g_135 p_576->g_65 p_576->g_83 p_576->l_comm_values p_576->g_155 p_576->g_261 p_576->g_262 p_576->g_302
 * writes: p_576->g_276 p_576->g_278 p_576->g_75 p_576->g_295 p_576->g_118 p_576->g_109 p_576->g_155 p_576->g_261 p_576->g_262
 */
int8_t  func_47(int64_t  p_48, uint64_t  p_49, int32_t * p_50, int32_t * p_51, uint64_t  p_52, struct S1 * p_576)
{ /* block id: 70 */
    int8_t *l_269 = &p_576->g_270[5];
    int16_t *l_275 = &p_576->g_276;
    int16_t *l_277 = &p_576->g_278;
    int32_t l_279 = (-5L);
    int32_t *l_280 = &p_576->g_75;
    VECTOR(int64_t, 4) l_287 = (VECTOR(int64_t, 4))(0x730888E49BA4620AL, (VECTOR(int64_t, 2))(0x730888E49BA4620AL, 0x1A0A0181537DBF6BL), 0x1A0A0181537DBF6BL);
    uint8_t *l_294 = &p_576->g_295;
    int32_t *l_297 = &p_576->g_254;
    int32_t **l_296 = &l_297;
    int32_t *l_299[10][6][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    int32_t **l_298 = &l_299[4][2][0];
    int32_t *l_300 = &p_576->g_256.f0;
    uint32_t l_301[7] = {0UL,0xF9FB7C17L,0UL,0UL,0xF9FB7C17L,0UL,0UL};
    int i, j, k;
    (*l_280) ^= (((((safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((l_269 != &p_576->g_270[5]), (safe_sub_func_int32_t_s_s(0x3FE1B86CL, (((*p_51) == ((0x4DL | 8L) , (((p_576->g_256.f0 , p_52) | ((*l_277) = ((*l_275) = ((safe_rshift_func_uint16_t_u_s(((p_48 < FAKE_DIVERGE(p_576->local_0_offset, get_local_id(0), 10)) && p_576->g_256.f0), 12)) < (-9L))))) && GROUP_DIVERGE(2, 1)))) == p_576->g_252))))), (**p_576->g_236))), l_279)) || 0x33D7D3A6776AFE39L) == 18446744073709551615UL) ^ l_279) < p_576->g_140.sc);
    (*p_576->g_302) = func_76(func_55((safe_sub_func_int64_t_s_s((((*l_298) = ((*l_296) = func_55(p_576->g_146, (*l_280), func_76(p_50, ((safe_add_func_int16_t_s_s((l_275 == &p_576->g_276), (((-1L) > (p_576->g_276 = (safe_mul_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(0x113B5FB93EAB8D32L, ((VECTOR(int64_t, 2))((-10L), 0L)), 1L)))), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_287.xyywxyyx)))).even))).w, ((p_49 , (p_576->g_278 = (safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((p_576->g_comm_values[p_576->tid] & ((*l_294) = p_576->g_109.w)) < 0x271EL), (*l_280))), p_576->g_135.x)), p_52)))) >= (*l_280)))))) > (*p_51)))) , p_49), (*l_280), (**p_576->g_236), p_576), (*l_280), p_576))) != l_300), p_576->g_16)), p_576->g_252, &l_279, p_576->g_comm_values[p_576->tid], p_576), p_52, l_287.w, l_301[0], p_576);
    return p_576->g_135.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_576->g_65 p_576->l_comm_values p_576->g_83 p_576->g_109 p_576->g_16 p_576->g_comm_values p_576->g_75 p_576->g_135 p_576->g_140 p_576->g_118 p_576->g_155 p_576->g_236 p_576->g_237 p_576->g_249 p_576->g_146 p_576->g_261 p_576->g_262
 * writes: p_576->g_109 p_576->g_118 p_576->g_146 p_576->g_151 p_576->g_154 p_576->g_75 p_576->g_155 p_576->g_254 p_576->g_261
 */
int32_t * func_55(uint64_t  p_56, int64_t  p_57, int32_t * p_58, uint32_t  p_59, struct S1 * p_576)
{ /* block id: 8 */
    int32_t **l_68 = (void*)0;
    int32_t *l_70 = (void*)0;
    int32_t **l_69 = &l_70;
    int32_t ***l_246 = &l_69;
    uint32_t *l_251 = &p_576->g_252;
    uint32_t **l_250 = &l_251;
    int32_t *l_253 = &p_576->g_254;
    struct S0 *l_255 = &p_576->g_256;
    int32_t *l_257 = (void*)0;
    int32_t *l_258 = (void*)0;
    int32_t *l_259 = &p_576->g_75;
    int32_t *l_260[9] = {&p_576->g_261,&p_576->g_261,&p_576->g_261,&p_576->g_261,&p_576->g_261,&p_576->g_261,&p_576->g_261,&p_576->g_261,&p_576->g_261};
    int i;
    p_576->g_261 &= (((*l_259) = ((safe_mod_func_int32_t_s_s((p_58 == (p_576->g_65[6] , func_66(((*l_69) = &p_576->g_16), p_576))), GROUP_DIVERGE(2, 1))) , (((~(safe_lshift_func_int16_t_s_s(p_59, 12))) , ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(0x43BC1766L, (safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((((FAKE_DIVERGE(p_576->local_1_offset, get_local_id(1), 10) != (safe_mul_func_uint8_t_u_u((&p_58 == ((*l_246) = (void*)0)), ((VECTOR(int8_t, 8))((-10L), (safe_sub_func_int64_t_s_s(((((VECTOR(uint32_t, 4))(p_576->g_249.xxxy)).y , ((*l_253) = ((l_70 == ((*l_250) = p_576->g_118)) == (*l_70)))) , p_576->g_237.s3), FAKE_DIVERGE(p_576->global_0_offset, get_global_id(0), 10))), ((VECTOR(int8_t, 4))(0x1AL)), (-1L), (-5L))).s0))) , l_255) != &p_576->g_256) || 0xB5F6L) | FAKE_DIVERGE(p_576->local_2_offset, get_local_id(2), 10)), 14)), p_576->g_146)), (-1L), (**p_576->g_236), (*p_58), ((VECTOR(int32_t, 2))(0x7A226508L)), 4L)).s7365546757354164, ((VECTOR(int32_t, 16))(0x2DFF80FAL))))).sa690, ((VECTOR(int32_t, 4))(1L))))).z) & 0UL))) < 1UL);
    (*l_259) |= 0x0D287D80L;
    return p_576->g_262;
}


/* ------------------------------------------ */
/* 
 * reads : p_576->l_comm_values p_576->g_83 p_576->g_65 p_576->g_109 p_576->g_16 p_576->g_comm_values p_576->g_75 p_576->g_135 p_576->g_140 p_576->g_118 p_576->g_155 p_576->g_236 p_576->g_237
 * writes: p_576->g_109 p_576->g_118 p_576->g_146 p_576->g_151 p_576->g_154 p_576->g_75 p_576->g_155
 */
int32_t * func_66(int32_t * p_67, struct S1 * p_576)
{ /* block id: 10 */
    int32_t **l_71 = (void*)0;
    int32_t *l_73 = (void*)0;
    int32_t **l_72[6];
    int32_t *l_74 = &p_576->g_75;
    VECTOR(uint16_t, 4) l_84 = (VECTOR(uint16_t, 4))(0xE450L, (VECTOR(uint16_t, 2))(0xE450L, 0UL), 0UL);
    VECTOR(uint32_t, 8) l_85 = (VECTOR(uint32_t, 8))(0x73635D5AL, (VECTOR(uint32_t, 4))(0x73635D5AL, (VECTOR(uint32_t, 2))(0x73635D5AL, 0x404C6930L), 0x404C6930L), 0x404C6930L, 0x73635D5AL, 0x404C6930L);
    VECTOR(uint32_t, 2) l_86 = (VECTOR(uint32_t, 2))(1UL, 4294967295UL);
    int32_t l_100 = 0x31361057L;
    int i;
    for (i = 0; i < 6; i++)
        l_72[i] = &l_73;
    l_74 = (void*)0;
    (*p_576->g_236) = (p_67 = func_76(&p_576->g_16, (safe_rshift_func_int16_t_s_u(((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(4294967289UL, 0xF656345DL, p_576->l_comm_values[(safe_mod_func_uint32_t_u_u(p_576->tid, 123))], ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 4))(p_576->g_83.yxyy)).hi, ((VECTOR(uint16_t, 8))(l_84.yyzzxxzy)).s76))), ((VECTOR(uint32_t, 2))(l_85.s20)), 0x637402B8L)).even)).w < ((VECTOR(uint32_t, 2))(l_86.yy)).even) & func_87(p_576->g_65[2], (p_576->g_118 = (((((safe_mod_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((GROUP_DIVERGE(2, 1) >= (safe_sub_func_int8_t_s_s(l_100, p_576->g_83.x))) >= 0UL), GROUP_DIVERGE(1, 1))), ((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 2))((-1L), (-3L))).odd, 3)) | (p_576->g_83.x & (safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((safe_div_func_uint64_t_u_u((((FAKE_DIVERGE(p_576->local_0_offset, get_local_id(0), 10) || (p_576->g_83.y <= (p_576->g_109.x = ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(p_576->g_109.xzwx)).yzyxyxwzzzwwwyyx))))), (int32_t)(!(safe_rshift_func_uint8_t_u_s((((VECTOR(int16_t, 4))(0x7BD1L, 0x1B5BL, 0x0B87L, 0x06FCL)).x <= ((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_576->g_16, 1UL)), 0xC642L)), p_576->g_16)) >= 3UL)), p_576->g_comm_values[p_576->tid])))))).s3))) , p_576->g_83.x) ^ p_576->g_75), p_576->g_comm_values[p_576->tid])) , p_576->g_83.x) , p_576->g_109.z), p_576->l_comm_values[(safe_mod_func_uint32_t_u_u(p_576->tid, 123))])), p_576->l_comm_values[(safe_mod_func_uint32_t_u_u(p_576->tid, 123))])))))), 0x01L)) < 0x68L) | p_576->g_83.y) ^ 1UL) , p_67)), p_576->g_comm_values[p_576->tid], p_67, p_576)), p_576->g_83.x)), p_576->g_135.x, p_576->g_83.x, p_576));
    p_576->g_75 ^= ((~p_576->g_83.x) ^ 0x77L);
    p_576->g_75 ^= ((VECTOR(int32_t, 8))(p_576->g_237.s11754306)).s4;
    return (*p_576->g_236);
}


/* ------------------------------------------ */
/* 
 * reads : p_576->g_236 p_576->g_118
 * writes: p_576->g_118
 */
int32_t * func_76(int32_t * p_77, uint16_t  p_78, int32_t  p_79, int32_t  p_80, struct S1 * p_576)
{ /* block id: 55 */
    (*p_576->g_236) = &p_576->g_16;
    return (*p_576->g_236);
}


/* ------------------------------------------ */
/* 
 * reads : p_576->g_135 p_576->g_75 p_576->g_140 p_576->g_16 p_576->g_118 p_576->g_155
 * writes: p_576->g_146 p_576->g_151 p_576->g_154 p_576->g_75 p_576->g_155
 */
uint64_t  func_87(uint32_t  p_88, int32_t * p_89, uint8_t  p_90, int32_t * p_91, struct S1 * p_576)
{ /* block id: 14 */
    int32_t *l_119 = &p_576->g_75;
    int32_t *l_120 = &p_576->g_75;
    int32_t *l_121 = &p_576->g_75;
    int32_t *l_122 = (void*)0;
    int32_t *l_123 = &p_576->g_75;
    int32_t *l_124[2];
    VECTOR(int8_t, 4) l_125 = (VECTOR(int8_t, 4))(0x53L, (VECTOR(int8_t, 2))(0x53L, (-6L)), (-6L));
    int32_t l_126 = 0x7E307078L;
    uint16_t l_127 = 0xDCF3L;
    VECTOR(int8_t, 2) l_130 = (VECTOR(int8_t, 2))(2L, 0L);
    VECTOR(int8_t, 4) l_131 = (VECTOR(int8_t, 4))(0x58L, (VECTOR(int8_t, 2))(0x58L, 0x24L), 0x24L);
    VECTOR(uint32_t, 16) l_134 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x7A7CBF15L), 0x7A7CBF15L), 0x7A7CBF15L, 4294967295UL, 0x7A7CBF15L, (VECTOR(uint32_t, 2))(4294967295UL, 0x7A7CBF15L), (VECTOR(uint32_t, 2))(4294967295UL, 0x7A7CBF15L), 4294967295UL, 0x7A7CBF15L, 4294967295UL, 0x7A7CBF15L);
    uint32_t *l_145 = (void*)0;
    int64_t l_152 = 4L;
    int8_t *l_153[8][8][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    volatile struct S0 *l_157[6];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_124[i] = &p_576->g_75;
    for (i = 0; i < 6; i++)
        l_157[i] = &p_576->g_155[2];
    l_127++;
    (*l_123) = ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((p_576->g_154 = ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(l_130.xyxx)).yxwywwwxwzwzzzyz, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_131.wzzy)))), (safe_div_func_uint32_t_u_u(p_90, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_134.s030246d126375140)).sd, ((VECTOR(uint32_t, 2))(p_576->g_135.zx)), 0UL, p_576->g_75, ((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))((safe_rshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u((*l_120), ((VECTOR(int32_t, 2))(p_576->g_140.sc4)).even)) || ((safe_add_func_int64_t_s_s((safe_mod_func_int8_t_s_s(((p_576->g_146 = p_576->g_140.s0) , ((*l_119) == ((GROUP_DIVERGE(1, 1) <= (+(p_576->g_151 = ((&p_91 == (void*)0) > ((-4L) & (safe_add_func_int64_t_s_s(p_88, 6L))))))) >= p_88))), p_576->g_16)), GROUP_DIVERGE(1, 1))) & (*p_91))), 3)), (*l_121), 0x2BB18484L, 0UL, l_152, ((VECTOR(uint32_t, 2))(0x6BE9B9E4L)), 0x8807F30BL)).s4104423526766424, ((VECTOR(uint32_t, 16))(2UL))))).odd, ((VECTOR(uint32_t, 8))(8UL)), ((VECTOR(uint32_t, 8))(4294967295UL))))).s57, ((VECTOR(uint32_t, 2))(1UL))))).yxxxyyyx, ((VECTOR(uint32_t, 8))(2UL))))), p_88, 4294967291UL, 9UL)).sd)), (-4L), ((VECTOR(int8_t, 2))(0x4BL)), p_88, ((VECTOR(int8_t, 2))((-9L))), (-1L), ((VECTOR(int8_t, 4))(0L)))).lo, ((VECTOR(int8_t, 8))(0x11L))))).s2411777554335447))).s2) == p_576->g_140.s9), 0x431F8A23L, 0x1CB93B74L, (*p_89), (*p_576->g_118), (-1L), 1L, 1L)).s6332236731223003, ((VECTOR(int32_t, 16))(0L))))).s8;
    p_576->g_155[3] = p_576->g_155[2];
    if ((atomic_inc(&p_576->g_atomic_input[70 * get_linear_group_id() + 53]) == 6))
    { /* block id: 22 */
        VECTOR(int32_t, 8) l_158 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x3A6D7AE1L), 0x3A6D7AE1L), 0x3A6D7AE1L, 1L, 0x3A6D7AE1L);
        int16_t l_159 = 0L;
        struct S0 l_160[7][5] = {{{0L},{6L},{6L},{0L},{0L}},{{0L},{6L},{6L},{0L},{0L}},{{0L},{6L},{6L},{0L},{0L}},{{0L},{6L},{6L},{0L},{0L}},{{0L},{6L},{6L},{0L},{0L}},{{0L},{6L},{6L},{0L},{0L}},{{0L},{6L},{6L},{0L},{0L}}};
        struct S0 l_161 = {0x2F4EEEBAL};
        struct S0 l_162 = {0x42AAD687L};
        VECTOR(int32_t, 2) l_163 = (VECTOR(int32_t, 2))(0x6B8A0B9BL, 0x19F9507BL);
        int8_t l_164 = 4L;
        uint32_t l_165 = 4294967295UL;
        VECTOR(int32_t, 8) l_166 = (VECTOR(int32_t, 8))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, (-5L)), (-5L)), (-5L), 6L, (-5L));
        int16_t l_167 = 0x1C12L;
        uint64_t l_168 = 0xB73E6FF05A5C68B7L;
        VECTOR(uint32_t, 8) l_206 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967287UL), 4294967287UL), 4294967287UL, 1UL, 4294967287UL);
        int64_t l_207 = 0x3F19AB1BEFFD9D72L;
        VECTOR(int64_t, 4) l_208 = (VECTOR(int64_t, 4))(0x3FFA6FDFF55233B5L, (VECTOR(int64_t, 2))(0x3FFA6FDFF55233B5L, 4L), 4L);
        VECTOR(int64_t, 2) l_209 = (VECTOR(int64_t, 2))(0x10F9EE0FC5051C77L, 0x0BED4B9811396C76L);
        VECTOR(int64_t, 2) l_210 = (VECTOR(int64_t, 2))(0L, 0x22382E4A64B05119L);
        VECTOR(int64_t, 8) l_211 = (VECTOR(int64_t, 8))(0x5C67197F0C942405L, (VECTOR(int64_t, 4))(0x5C67197F0C942405L, (VECTOR(int64_t, 2))(0x5C67197F0C942405L, 0x537F39B1B88C50BEL), 0x537F39B1B88C50BEL), 0x537F39B1B88C50BEL, 0x5C67197F0C942405L, 0x537F39B1B88C50BEL);
        int8_t l_212 = 0x75L;
        VECTOR(int64_t, 4) l_213 = (VECTOR(int64_t, 4))(0x5CFB939A52B00B98L, (VECTOR(int64_t, 2))(0x5CFB939A52B00B98L, 0x61322146068D3858L), 0x61322146068D3858L);
        VECTOR(int32_t, 2) l_214 = (VECTOR(int32_t, 2))((-10L), 0x532C07B4L);
        VECTOR(uint32_t, 8) l_215 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x06D20A70L), 0x06D20A70L), 0x06D20A70L, 1UL, 0x06D20A70L);
        VECTOR(int64_t, 8) l_216 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
        VECTOR(int64_t, 2) l_217 = (VECTOR(int64_t, 2))(0L, 0L);
        int8_t l_218 = 0x63L;
        VECTOR(uint16_t, 8) l_219 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65534UL), 65534UL), 65534UL, 65535UL, 65534UL);
        uint8_t l_220 = 1UL;
        VECTOR(uint16_t, 4) l_221 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65530UL), 65530UL);
        uint64_t l_222 = 2UL;
        VECTOR(uint16_t, 8) l_223 = (VECTOR(uint16_t, 8))(0x65C8L, (VECTOR(uint16_t, 4))(0x65C8L, (VECTOR(uint16_t, 2))(0x65C8L, 4UL), 4UL), 4UL, 0x65C8L, 4UL);
        uint16_t l_224 = 65535UL;
        VECTOR(uint16_t, 8) l_225 = (VECTOR(uint16_t, 8))(0x533CL, (VECTOR(uint16_t, 4))(0x533CL, (VECTOR(uint16_t, 2))(0x533CL, 0UL), 0UL), 0UL, 0x533CL, 0UL);
        VECTOR(uint16_t, 4) l_226 = (VECTOR(uint16_t, 4))(0xA91BL, (VECTOR(uint16_t, 2))(0xA91BL, 0UL), 0UL);
        VECTOR(uint16_t, 8) l_227 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xC724L), 0xC724L), 0xC724L, 0UL, 0xC724L);
        VECTOR(int32_t, 4) l_228 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x67486EB9L), 0x67486EB9L);
        VECTOR(uint16_t, 16) l_229 = (VECTOR(uint16_t, 16))(0xAFE7L, (VECTOR(uint16_t, 4))(0xAFE7L, (VECTOR(uint16_t, 2))(0xAFE7L, 1UL), 1UL), 1UL, 0xAFE7L, 1UL, (VECTOR(uint16_t, 2))(0xAFE7L, 1UL), (VECTOR(uint16_t, 2))(0xAFE7L, 1UL), 0xAFE7L, 1UL, 0xAFE7L, 1UL);
        VECTOR(uint16_t, 4) l_230 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xBC6DL), 0xBC6DL);
        VECTOR(uint16_t, 8) l_231 = (VECTOR(uint16_t, 8))(0x27F8L, (VECTOR(uint16_t, 4))(0x27F8L, (VECTOR(uint16_t, 2))(0x27F8L, 0x178EL), 0x178EL), 0x178EL, 0x27F8L, 0x178EL);
        uint64_t l_232 = 2UL;
        int32_t *l_233[4][3][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t *l_234 = (void*)0;
        int32_t *l_235[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_235[i] = (void*)0;
        l_167 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_158.s50)).hi, ((l_162 = (l_161 = (l_159 , l_160[1][0]))) , (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_163.xxxyyyxx)).s1246143305672727)).s0 , l_164)), l_165, (-1L), (-3L), ((VECTOR(int32_t, 2))(l_166.s36)), 5L)).s4;
        if (l_168)
        { /* block id: 26 */
            VECTOR(int16_t, 8) l_169 = (VECTOR(int16_t, 8))(0x0CB0L, (VECTOR(int16_t, 4))(0x0CB0L, (VECTOR(int16_t, 2))(0x0CB0L, 0L), 0L), 0L, 0x0CB0L, 0L);
            int32_t l_170 = 0x48A0A5ABL;
            uint64_t l_171 = 8UL;
            uint32_t l_172 = 0x75DFA5EDL;
            uint32_t l_173 = 5UL;
            uint64_t l_174 = 1UL;
            int8_t l_175 = (-1L);
            uint16_t l_176 = 0x8C2BL;
            int64_t l_177 = 0x58B699BD09F821FCL;
            VECTOR(int16_t, 2) l_178 = (VECTOR(int16_t, 2))(0x77F4L, (-7L));
            VECTOR(int16_t, 16) l_179 = (VECTOR(int16_t, 16))(0x13EDL, (VECTOR(int16_t, 4))(0x13EDL, (VECTOR(int16_t, 2))(0x13EDL, 0x34FCL), 0x34FCL), 0x34FCL, 0x13EDL, 0x34FCL, (VECTOR(int16_t, 2))(0x13EDL, 0x34FCL), (VECTOR(int16_t, 2))(0x13EDL, 0x34FCL), 0x13EDL, 0x34FCL, 0x13EDL, 0x34FCL);
            VECTOR(int16_t, 8) l_180 = (VECTOR(int16_t, 8))(0x7E0CL, (VECTOR(int16_t, 4))(0x7E0CL, (VECTOR(int16_t, 2))(0x7E0CL, 0x638AL), 0x638AL), 0x638AL, 0x7E0CL, 0x638AL);
            int64_t l_181[8][2] = {{0x5B6A20D3CC9FF2BBL,0x5B6A20D3CC9FF2BBL},{0x5B6A20D3CC9FF2BBL,0x5B6A20D3CC9FF2BBL},{0x5B6A20D3CC9FF2BBL,0x5B6A20D3CC9FF2BBL},{0x5B6A20D3CC9FF2BBL,0x5B6A20D3CC9FF2BBL},{0x5B6A20D3CC9FF2BBL,0x5B6A20D3CC9FF2BBL},{0x5B6A20D3CC9FF2BBL,0x5B6A20D3CC9FF2BBL},{0x5B6A20D3CC9FF2BBL,0x5B6A20D3CC9FF2BBL},{0x5B6A20D3CC9FF2BBL,0x5B6A20D3CC9FF2BBL}};
            int16_t l_182 = 0x7C77L;
            uint32_t l_183 = 0xD206A697L;
            VECTOR(int16_t, 8) l_184 = (VECTOR(int16_t, 8))(0x0F86L, (VECTOR(int16_t, 4))(0x0F86L, (VECTOR(int16_t, 2))(0x0F86L, (-2L)), (-2L)), (-2L), 0x0F86L, (-2L));
            int32_t l_185[2];
            int32_t *l_186 = &l_170;
            int32_t *l_193 = &l_170;
            int32_t *l_194 = &l_170;
            int i, j;
            for (i = 0; i < 2; i++)
                l_185[i] = (-10L);
            l_158.s0 &= ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))((l_167 = ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_169.s3125)).odd)).hi), l_170, l_171, 0x5ADAL, (l_172 , ((VECTOR(int16_t, 2))(0x70B3L, 0x19CFL)).even), ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 8))((((l_174 = l_173) , l_175) , ((VECTOR(int16_t, 2))(0x11E2L, 0L)).hi), 0x6B5DL, 0x7EC4L, l_176, l_177, 0x1311L, 0x7482L, 0x43EBL)).s51, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_178.yx)).yxxyxyxyxxxyxxyx)), ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 16))(l_179.s8b023fbb9b6f4331)).sd11e))).wzwwxzxwxwxywxyx))))).sf7))), 0x4BD9L)).s50, ((VECTOR(int16_t, 2))(l_180.s75)), ((VECTOR(int16_t, 16))((l_167 |= l_181[5][1]), ((VECTOR(int16_t, 8))(l_182, l_183, l_184.s7, 0L, ((VECTOR(int16_t, 4))((-9L))))), (-1L), l_185[1], 0x0F97L, 1L, 6L, 0x6E0FL, 0x53B1L)).s34))).yyyy, ((VECTOR(int16_t, 4))(0x7E9EL))))), ((VECTOR(uint16_t, 4))(0xAFB1L))))).z;
            l_186 = (void*)0;
            for (l_175 = (-4); (l_175 == 4); ++l_175)
            { /* block id: 34 */
                struct S0 l_189[10] = {{0x1EB48717L},{0x1EB48717L},{0x1EB48717L},{0x1EB48717L},{0x1EB48717L},{0x1EB48717L},{0x1EB48717L},{0x1EB48717L},{0x1EB48717L},{0x1EB48717L}};
                struct S0 l_190[1][2] = {{{0x030DAD6CL},{0x030DAD6CL}}};
                uint32_t l_191 = 0xF8C53858L;
                uint8_t l_192 = 0x7CL;
                int i, j;
                l_190[0][1] = (l_162 = l_189[7]);
                l_163.y = (l_170 = ((l_164 ^= 2L) , (l_191 , l_192)));
            }
            l_194 = l_193;
        }
        else
        { /* block id: 42 */
            uint8_t l_195 = 0UL;
            int64_t l_198 = 0L;
            int8_t l_199 = (-1L);
            int8_t l_200 = 0x61L;
            VECTOR(int32_t, 4) l_201 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-5L)), (-5L));
            int16_t l_202 = 0x2224L;
            uint64_t l_203 = 4UL;
            int i;
            l_158.s4 = 0x09F092F5L;
            l_195++;
            ++l_203;
        }
        l_235[0] = (l_234 = (((l_207 |= ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_206.s1601211230402431)).s4703)).z) , ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 4))(l_208.xzxz)).xyzxwxwzwyxxxwwx, ((VECTOR(int64_t, 2))(l_209.xy)).xxxxyxyyxxyxxxyx))).s7d5f, ((VECTOR(int64_t, 4))(7L, ((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 4))(l_210.yyxx)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_211.s33)), 0x34DF25EA7EB5314AL, 0x52FBA135BB748AC1L)))), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 2))((-2L), 0L)).yxyyyxxyxxxxxxyy))).odd)))).lo))).lo, ((VECTOR(int64_t, 4))(0x3A3253BE1FAAB555L, l_212, 0x006DDD18BA939D3EL, 0x58DBE5A4FAB115D6L)).lo, ((VECTOR(int64_t, 8))(l_213.xzyxwwxx)).s71))).yxyxxyxy))).s2, 0x702F4191A83F4B73L, 0x5568525718F321B6L)), ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(0x2E5EF0559B479778L, ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 4))(l_214.xxxy)).even, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_215.s31)).yyyyyyyxxxyyxxyx)).lo)).s37))), 0x167EEF1BC82A2EA7L)).yywzzwxz)).s04, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x56E77CEEA620BF2FL, 0x7A06AB12BAFEEC57L)).yxxyxyxx)).s67, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_216.s6616026637030574)).sb1))))).yyyx))), 0x5B760065729E0859L, ((VECTOR(int64_t, 2))(l_217.yy)), 1L)).s7) , ((l_218 = GROUP_DIVERGE(1, 1)) , (((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 8))(l_219.s21237752)).s00, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))((l_220 , 0x4EA6L), ((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_221.wzzz)), l_222, ((VECTOR(uint16_t, 4))(l_223.s6076)), 0UL, 65528UL, l_224, 0x5843L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_225.s36)).xxyyyxxy)).lo)).y, ((VECTOR(uint16_t, 4))(l_226.zyyz)), ((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(5UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_227.s37077453)).lo)), (((VECTOR(int32_t, 4))(l_228.zyxz)).z , GROUP_DIVERGE(0, 1)), GROUP_DIVERGE(1, 1), 0x4365L, 0x23FAL, ((VECTOR(uint16_t, 4))(l_229.s773b)), 0x6495L, 0x119DL, 1UL)))).lo, ((VECTOR(uint16_t, 2))(l_230.wy)).yxxyyyyy))), 1UL, 65532UL, 0UL)).s3a)), 65535UL)).sb163)), 65531UL, ((VECTOR(uint16_t, 8))(l_231.s40175217)), 0UL, 65528UL, 0UL)).s06)).yyyyyyxy))), l_232, 65527UL, ((VECTOR(uint16_t, 2))(0xD14FL)), 65532UL, 0xE8A2L, 0x2F6EL)))).sa9)))))).yxxx, ((VECTOR(uint16_t, 4))(65529UL))))).w , l_233[2][2][4]))));
        unsigned int result = 0;
        result += l_158.s7;
        result += l_158.s6;
        result += l_158.s5;
        result += l_158.s4;
        result += l_158.s3;
        result += l_158.s2;
        result += l_158.s1;
        result += l_158.s0;
        result += l_159;
        int l_160_i0, l_160_i1;
        for (l_160_i0 = 0; l_160_i0 < 7; l_160_i0++) {
            for (l_160_i1 = 0; l_160_i1 < 5; l_160_i1++) {
                result += l_160[l_160_i0][l_160_i1].f0;
            }
        }
        result += l_161.f0;
        result += l_162.f0;
        result += l_163.y;
        result += l_163.x;
        result += l_164;
        result += l_165;
        result += l_166.s7;
        result += l_166.s6;
        result += l_166.s5;
        result += l_166.s4;
        result += l_166.s3;
        result += l_166.s2;
        result += l_166.s1;
        result += l_166.s0;
        result += l_167;
        result += l_168;
        result += l_206.s7;
        result += l_206.s6;
        result += l_206.s5;
        result += l_206.s4;
        result += l_206.s3;
        result += l_206.s2;
        result += l_206.s1;
        result += l_206.s0;
        result += l_207;
        result += l_208.w;
        result += l_208.z;
        result += l_208.y;
        result += l_208.x;
        result += l_209.y;
        result += l_209.x;
        result += l_210.y;
        result += l_210.x;
        result += l_211.s7;
        result += l_211.s6;
        result += l_211.s5;
        result += l_211.s4;
        result += l_211.s3;
        result += l_211.s2;
        result += l_211.s1;
        result += l_211.s0;
        result += l_212;
        result += l_213.w;
        result += l_213.z;
        result += l_213.y;
        result += l_213.x;
        result += l_214.y;
        result += l_214.x;
        result += l_215.s7;
        result += l_215.s6;
        result += l_215.s5;
        result += l_215.s4;
        result += l_215.s3;
        result += l_215.s2;
        result += l_215.s1;
        result += l_215.s0;
        result += l_216.s7;
        result += l_216.s6;
        result += l_216.s5;
        result += l_216.s4;
        result += l_216.s3;
        result += l_216.s2;
        result += l_216.s1;
        result += l_216.s0;
        result += l_217.y;
        result += l_217.x;
        result += l_218;
        result += l_219.s7;
        result += l_219.s6;
        result += l_219.s5;
        result += l_219.s4;
        result += l_219.s3;
        result += l_219.s2;
        result += l_219.s1;
        result += l_219.s0;
        result += l_220;
        result += l_221.w;
        result += l_221.z;
        result += l_221.y;
        result += l_221.x;
        result += l_222;
        result += l_223.s7;
        result += l_223.s6;
        result += l_223.s5;
        result += l_223.s4;
        result += l_223.s3;
        result += l_223.s2;
        result += l_223.s1;
        result += l_223.s0;
        result += l_224;
        result += l_225.s7;
        result += l_225.s6;
        result += l_225.s5;
        result += l_225.s4;
        result += l_225.s3;
        result += l_225.s2;
        result += l_225.s1;
        result += l_225.s0;
        result += l_226.w;
        result += l_226.z;
        result += l_226.y;
        result += l_226.x;
        result += l_227.s7;
        result += l_227.s6;
        result += l_227.s5;
        result += l_227.s4;
        result += l_227.s3;
        result += l_227.s2;
        result += l_227.s1;
        result += l_227.s0;
        result += l_228.w;
        result += l_228.z;
        result += l_228.y;
        result += l_228.x;
        result += l_229.sf;
        result += l_229.se;
        result += l_229.sd;
        result += l_229.sc;
        result += l_229.sb;
        result += l_229.sa;
        result += l_229.s9;
        result += l_229.s8;
        result += l_229.s7;
        result += l_229.s6;
        result += l_229.s5;
        result += l_229.s4;
        result += l_229.s3;
        result += l_229.s2;
        result += l_229.s1;
        result += l_229.s0;
        result += l_230.w;
        result += l_230.z;
        result += l_230.y;
        result += l_230.x;
        result += l_231.s7;
        result += l_231.s6;
        result += l_231.s5;
        result += l_231.s4;
        result += l_231.s3;
        result += l_231.s2;
        result += l_231.s1;
        result += l_231.s0;
        result += l_232;
        atomic_add(&p_576->g_special_values[70 * get_linear_group_id() + 53], result);
    }
    else
    { /* block id: 51 */
        (1 + 1);
    }
    return p_576->g_135.z;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[123];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 123; i++)
            l_comm_values[i] = 1;
    struct S1 c_577;
    struct S1* p_576 = &c_577;
    struct S1 c_578 = {
        1L, // p_576->g_16
        {1L,0x0E43DA7D8E2DC660L,1L,1L,0x0E43DA7D8E2DC660L,1L,1L,0x0E43DA7D8E2DC660L}, // p_576->g_65
        2L, // p_576->g_75
        (VECTOR(uint16_t, 2))(0x8438L, 9UL), // p_576->g_83
        (VECTOR(int32_t, 4))(0x62C4F729L, (VECTOR(int32_t, 2))(0x62C4F729L, (-1L)), (-1L)), // p_576->g_109
        &p_576->g_75, // p_576->g_118
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), // p_576->g_135
        (VECTOR(int32_t, 16))(0x042BFFA3L, (VECTOR(int32_t, 4))(0x042BFFA3L, (VECTOR(int32_t, 2))(0x042BFFA3L, 0x7A1B735CL), 0x7A1B735CL), 0x7A1B735CL, 0x042BFFA3L, 0x7A1B735CL, (VECTOR(int32_t, 2))(0x042BFFA3L, 0x7A1B735CL), (VECTOR(int32_t, 2))(0x042BFFA3L, 0x7A1B735CL), 0x042BFFA3L, 0x7A1B735CL, 0x042BFFA3L, 0x7A1B735CL), // p_576->g_140
        (-1L), // p_576->g_146
        4UL, // p_576->g_151
        0xB91A3FCEC19F97CEL, // p_576->g_154
        {{0x7F38EDEDL},{0x7F38EDEDL},{0x7F38EDEDL},{0x7F38EDEDL},{0x7F38EDEDL}}, // p_576->g_155
        (void*)0, // p_576->g_156
        &p_576->g_118, // p_576->g_236
        (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), (-7L)), (-7L)), (-7L), (-3L), (-7L)), // p_576->g_237
        (VECTOR(uint32_t, 2))(4294967289UL, 0x228D42A0L), // p_576->g_249
        4294967293UL, // p_576->g_252
        (-5L), // p_576->g_254
        {1L}, // p_576->g_256
        4L, // p_576->g_261
        (void*)0, // p_576->g_262
        {(-9L),1L,(-9L),(-9L),1L,(-9L),(-9L),1L}, // p_576->g_270
        0x66DAL, // p_576->g_276
        0x6516L, // p_576->g_278
        0x89L, // p_576->g_295
        &p_576->g_262, // p_576->g_302
        (void*)0, // p_576->g_303
        {{{(void*)0,&p_576->g_16}},{{(void*)0,&p_576->g_16}},{{(void*)0,&p_576->g_16}},{{(void*)0,&p_576->g_16}},{{(void*)0,&p_576->g_16}},{{(void*)0,&p_576->g_16}},{{(void*)0,&p_576->g_16}},{{(void*)0,&p_576->g_16}}}, // p_576->g_304
        (void*)0, // p_576->g_305
        {0x0BBAL,0x0BBAL,0x0BBAL,0x0BBAL,0x0BBAL,0x0BBAL}, // p_576->g_365
        1L, // p_576->g_377
        (VECTOR(int16_t, 16))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, (-1L)), (-1L)), (-1L), 7L, (-1L), (VECTOR(int16_t, 2))(7L, (-1L)), (VECTOR(int16_t, 2))(7L, (-1L)), 7L, (-1L), 7L, (-1L)), // p_576->g_394
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L)), // p_576->g_395
        &p_576->g_75, // p_576->g_401
        0x7083E0E3L, // p_576->g_406
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint16_t, 2))(1UL, 0UL), (VECTOR(uint16_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL), // p_576->g_409
        0xD92DE4FBL, // p_576->g_415
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x62C3F843L), 0x62C3F843L), 0x62C3F843L, 1L, 0x62C3F843L), // p_576->g_425
        (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65531UL), 65531UL), 65531UL, 0UL, 65531UL), // p_576->g_426
        1L, // p_576->g_439
        {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}}, // p_576->g_444
        &p_576->g_256, // p_576->g_446
        (VECTOR(int16_t, 8))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), (-1L)), (-1L)), (-1L), (-6L), (-1L)), // p_576->g_469
        {0x1056L,0x1056L,0x1056L,0x1056L,0x1056L,0x1056L,0x1056L}, // p_576->g_479
        &p_576->g_256, // p_576->g_490
        (void*)0, // p_576->g_504
        &p_576->g_270[0], // p_576->g_527
        &p_576->g_527, // p_576->g_526
        &p_576->g_262, // p_576->g_546
        18446744073709551612UL, // p_576->g_553
        (-7L), // p_576->g_556
        {1L,1L,1L,1L,1L,1L,1L,1L}, // p_576->g_567
        {0x309D8073L}, // p_576->g_574
        {&p_576->g_574,&p_576->g_574,&p_576->g_574,&p_576->g_574,&p_576->g_574,&p_576->g_574,&p_576->g_574,&p_576->g_574,&p_576->g_574,&p_576->g_574}, // p_576->g_573
        0, // p_576->v_collective
        sequence_input[get_global_id(0)], // p_576->global_0_offset
        sequence_input[get_global_id(1)], // p_576->global_1_offset
        sequence_input[get_global_id(2)], // p_576->global_2_offset
        sequence_input[get_local_id(0)], // p_576->local_0_offset
        sequence_input[get_local_id(1)], // p_576->local_1_offset
        sequence_input[get_local_id(2)], // p_576->local_2_offset
        sequence_input[get_group_id(0)], // p_576->group_0_offset
        sequence_input[get_group_id(1)], // p_576->group_1_offset
        sequence_input[get_group_id(2)], // p_576->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 123)), permutations[0][get_linear_local_id()])), // p_576->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_577 = c_578;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_576);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_576->g_16, "p_576->g_16", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_576->g_65[i], "p_576->g_65[i]", print_hash_value);

    }
    transparent_crc(p_576->g_75, "p_576->g_75", print_hash_value);
    transparent_crc(p_576->g_83.x, "p_576->g_83.x", print_hash_value);
    transparent_crc(p_576->g_83.y, "p_576->g_83.y", print_hash_value);
    transparent_crc(p_576->g_109.x, "p_576->g_109.x", print_hash_value);
    transparent_crc(p_576->g_109.y, "p_576->g_109.y", print_hash_value);
    transparent_crc(p_576->g_109.z, "p_576->g_109.z", print_hash_value);
    transparent_crc(p_576->g_109.w, "p_576->g_109.w", print_hash_value);
    transparent_crc(p_576->g_135.x, "p_576->g_135.x", print_hash_value);
    transparent_crc(p_576->g_135.y, "p_576->g_135.y", print_hash_value);
    transparent_crc(p_576->g_135.z, "p_576->g_135.z", print_hash_value);
    transparent_crc(p_576->g_135.w, "p_576->g_135.w", print_hash_value);
    transparent_crc(p_576->g_140.s0, "p_576->g_140.s0", print_hash_value);
    transparent_crc(p_576->g_140.s1, "p_576->g_140.s1", print_hash_value);
    transparent_crc(p_576->g_140.s2, "p_576->g_140.s2", print_hash_value);
    transparent_crc(p_576->g_140.s3, "p_576->g_140.s3", print_hash_value);
    transparent_crc(p_576->g_140.s4, "p_576->g_140.s4", print_hash_value);
    transparent_crc(p_576->g_140.s5, "p_576->g_140.s5", print_hash_value);
    transparent_crc(p_576->g_140.s6, "p_576->g_140.s6", print_hash_value);
    transparent_crc(p_576->g_140.s7, "p_576->g_140.s7", print_hash_value);
    transparent_crc(p_576->g_140.s8, "p_576->g_140.s8", print_hash_value);
    transparent_crc(p_576->g_140.s9, "p_576->g_140.s9", print_hash_value);
    transparent_crc(p_576->g_140.sa, "p_576->g_140.sa", print_hash_value);
    transparent_crc(p_576->g_140.sb, "p_576->g_140.sb", print_hash_value);
    transparent_crc(p_576->g_140.sc, "p_576->g_140.sc", print_hash_value);
    transparent_crc(p_576->g_140.sd, "p_576->g_140.sd", print_hash_value);
    transparent_crc(p_576->g_140.se, "p_576->g_140.se", print_hash_value);
    transparent_crc(p_576->g_140.sf, "p_576->g_140.sf", print_hash_value);
    transparent_crc(p_576->g_146, "p_576->g_146", print_hash_value);
    transparent_crc(p_576->g_151, "p_576->g_151", print_hash_value);
    transparent_crc(p_576->g_154, "p_576->g_154", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_576->g_155[i].f0, "p_576->g_155[i].f0", print_hash_value);

    }
    transparent_crc(p_576->g_237.s0, "p_576->g_237.s0", print_hash_value);
    transparent_crc(p_576->g_237.s1, "p_576->g_237.s1", print_hash_value);
    transparent_crc(p_576->g_237.s2, "p_576->g_237.s2", print_hash_value);
    transparent_crc(p_576->g_237.s3, "p_576->g_237.s3", print_hash_value);
    transparent_crc(p_576->g_237.s4, "p_576->g_237.s4", print_hash_value);
    transparent_crc(p_576->g_237.s5, "p_576->g_237.s5", print_hash_value);
    transparent_crc(p_576->g_237.s6, "p_576->g_237.s6", print_hash_value);
    transparent_crc(p_576->g_237.s7, "p_576->g_237.s7", print_hash_value);
    transparent_crc(p_576->g_249.x, "p_576->g_249.x", print_hash_value);
    transparent_crc(p_576->g_249.y, "p_576->g_249.y", print_hash_value);
    transparent_crc(p_576->g_252, "p_576->g_252", print_hash_value);
    transparent_crc(p_576->g_254, "p_576->g_254", print_hash_value);
    transparent_crc(p_576->g_256.f0, "p_576->g_256.f0", print_hash_value);
    transparent_crc(p_576->g_261, "p_576->g_261", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_576->g_270[i], "p_576->g_270[i]", print_hash_value);

    }
    transparent_crc(p_576->g_276, "p_576->g_276", print_hash_value);
    transparent_crc(p_576->g_278, "p_576->g_278", print_hash_value);
    transparent_crc(p_576->g_295, "p_576->g_295", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_576->g_365[i], "p_576->g_365[i]", print_hash_value);

    }
    transparent_crc(p_576->g_377, "p_576->g_377", print_hash_value);
    transparent_crc(p_576->g_394.s0, "p_576->g_394.s0", print_hash_value);
    transparent_crc(p_576->g_394.s1, "p_576->g_394.s1", print_hash_value);
    transparent_crc(p_576->g_394.s2, "p_576->g_394.s2", print_hash_value);
    transparent_crc(p_576->g_394.s3, "p_576->g_394.s3", print_hash_value);
    transparent_crc(p_576->g_394.s4, "p_576->g_394.s4", print_hash_value);
    transparent_crc(p_576->g_394.s5, "p_576->g_394.s5", print_hash_value);
    transparent_crc(p_576->g_394.s6, "p_576->g_394.s6", print_hash_value);
    transparent_crc(p_576->g_394.s7, "p_576->g_394.s7", print_hash_value);
    transparent_crc(p_576->g_394.s8, "p_576->g_394.s8", print_hash_value);
    transparent_crc(p_576->g_394.s9, "p_576->g_394.s9", print_hash_value);
    transparent_crc(p_576->g_394.sa, "p_576->g_394.sa", print_hash_value);
    transparent_crc(p_576->g_394.sb, "p_576->g_394.sb", print_hash_value);
    transparent_crc(p_576->g_394.sc, "p_576->g_394.sc", print_hash_value);
    transparent_crc(p_576->g_394.sd, "p_576->g_394.sd", print_hash_value);
    transparent_crc(p_576->g_394.se, "p_576->g_394.se", print_hash_value);
    transparent_crc(p_576->g_394.sf, "p_576->g_394.sf", print_hash_value);
    transparent_crc(p_576->g_395.s0, "p_576->g_395.s0", print_hash_value);
    transparent_crc(p_576->g_395.s1, "p_576->g_395.s1", print_hash_value);
    transparent_crc(p_576->g_395.s2, "p_576->g_395.s2", print_hash_value);
    transparent_crc(p_576->g_395.s3, "p_576->g_395.s3", print_hash_value);
    transparent_crc(p_576->g_395.s4, "p_576->g_395.s4", print_hash_value);
    transparent_crc(p_576->g_395.s5, "p_576->g_395.s5", print_hash_value);
    transparent_crc(p_576->g_395.s6, "p_576->g_395.s6", print_hash_value);
    transparent_crc(p_576->g_395.s7, "p_576->g_395.s7", print_hash_value);
    transparent_crc(p_576->g_406, "p_576->g_406", print_hash_value);
    transparent_crc(p_576->g_409.s0, "p_576->g_409.s0", print_hash_value);
    transparent_crc(p_576->g_409.s1, "p_576->g_409.s1", print_hash_value);
    transparent_crc(p_576->g_409.s2, "p_576->g_409.s2", print_hash_value);
    transparent_crc(p_576->g_409.s3, "p_576->g_409.s3", print_hash_value);
    transparent_crc(p_576->g_409.s4, "p_576->g_409.s4", print_hash_value);
    transparent_crc(p_576->g_409.s5, "p_576->g_409.s5", print_hash_value);
    transparent_crc(p_576->g_409.s6, "p_576->g_409.s6", print_hash_value);
    transparent_crc(p_576->g_409.s7, "p_576->g_409.s7", print_hash_value);
    transparent_crc(p_576->g_409.s8, "p_576->g_409.s8", print_hash_value);
    transparent_crc(p_576->g_409.s9, "p_576->g_409.s9", print_hash_value);
    transparent_crc(p_576->g_409.sa, "p_576->g_409.sa", print_hash_value);
    transparent_crc(p_576->g_409.sb, "p_576->g_409.sb", print_hash_value);
    transparent_crc(p_576->g_409.sc, "p_576->g_409.sc", print_hash_value);
    transparent_crc(p_576->g_409.sd, "p_576->g_409.sd", print_hash_value);
    transparent_crc(p_576->g_409.se, "p_576->g_409.se", print_hash_value);
    transparent_crc(p_576->g_409.sf, "p_576->g_409.sf", print_hash_value);
    transparent_crc(p_576->g_415, "p_576->g_415", print_hash_value);
    transparent_crc(p_576->g_425.s0, "p_576->g_425.s0", print_hash_value);
    transparent_crc(p_576->g_425.s1, "p_576->g_425.s1", print_hash_value);
    transparent_crc(p_576->g_425.s2, "p_576->g_425.s2", print_hash_value);
    transparent_crc(p_576->g_425.s3, "p_576->g_425.s3", print_hash_value);
    transparent_crc(p_576->g_425.s4, "p_576->g_425.s4", print_hash_value);
    transparent_crc(p_576->g_425.s5, "p_576->g_425.s5", print_hash_value);
    transparent_crc(p_576->g_425.s6, "p_576->g_425.s6", print_hash_value);
    transparent_crc(p_576->g_425.s7, "p_576->g_425.s7", print_hash_value);
    transparent_crc(p_576->g_426.s0, "p_576->g_426.s0", print_hash_value);
    transparent_crc(p_576->g_426.s1, "p_576->g_426.s1", print_hash_value);
    transparent_crc(p_576->g_426.s2, "p_576->g_426.s2", print_hash_value);
    transparent_crc(p_576->g_426.s3, "p_576->g_426.s3", print_hash_value);
    transparent_crc(p_576->g_426.s4, "p_576->g_426.s4", print_hash_value);
    transparent_crc(p_576->g_426.s5, "p_576->g_426.s5", print_hash_value);
    transparent_crc(p_576->g_426.s6, "p_576->g_426.s6", print_hash_value);
    transparent_crc(p_576->g_426.s7, "p_576->g_426.s7", print_hash_value);
    transparent_crc(p_576->g_439, "p_576->g_439", print_hash_value);
    transparent_crc(p_576->g_469.s0, "p_576->g_469.s0", print_hash_value);
    transparent_crc(p_576->g_469.s1, "p_576->g_469.s1", print_hash_value);
    transparent_crc(p_576->g_469.s2, "p_576->g_469.s2", print_hash_value);
    transparent_crc(p_576->g_469.s3, "p_576->g_469.s3", print_hash_value);
    transparent_crc(p_576->g_469.s4, "p_576->g_469.s4", print_hash_value);
    transparent_crc(p_576->g_469.s5, "p_576->g_469.s5", print_hash_value);
    transparent_crc(p_576->g_469.s6, "p_576->g_469.s6", print_hash_value);
    transparent_crc(p_576->g_469.s7, "p_576->g_469.s7", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_576->g_479[i], "p_576->g_479[i]", print_hash_value);

    }
    transparent_crc(p_576->g_553, "p_576->g_553", print_hash_value);
    transparent_crc(p_576->g_556, "p_576->g_556", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_576->g_567[i], "p_576->g_567[i]", print_hash_value);

    }
    transparent_crc(p_576->g_574.f0, "p_576->g_574.f0", print_hash_value);
    transparent_crc(p_576->v_collective, "p_576->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 70; i++)
            transparent_crc(p_576->g_special_values[i + 70 * get_linear_group_id()], "p_576->g_special_values[i + 70 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_576->l_comm_values[get_linear_local_id()], "p_576->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_576->g_comm_values[get_linear_group_id() * 123 + get_linear_local_id()], "p_576->g_comm_values[get_linear_group_id() * 123 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
