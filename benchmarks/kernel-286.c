// --atomics 59 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 51,33,4 -l 51,1,2
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

__constant uint32_t permutations[10][102] = {
{88,68,46,58,92,63,43,81,38,7,20,12,10,13,17,73,86,51,71,47,98,21,42,82,22,1,39,44,6,2,61,14,96,66,37,93,18,16,34,90,27,26,45,101,95,75,80,65,97,5,70,24,60,94,4,19,54,41,89,78,55,69,33,50,40,72,28,31,52,85,59,76,67,53,79,100,77,11,3,36,84,91,87,15,64,25,99,74,8,23,48,29,0,32,57,83,30,62,35,49,9,56}, // permutation 0
{42,69,35,71,23,54,15,17,45,94,1,87,61,8,99,21,101,88,52,26,37,14,25,58,97,2,10,96,84,31,59,27,43,11,40,5,19,4,48,6,75,28,34,29,33,80,47,30,50,16,44,9,93,38,41,32,74,60,77,7,65,90,100,79,92,20,24,3,36,56,63,0,89,51,72,55,91,39,82,86,81,83,18,66,95,64,70,62,22,85,78,46,53,98,73,57,68,12,67,49,76,13}, // permutation 1
{1,51,63,47,99,79,90,5,13,15,21,56,3,65,87,61,83,66,14,23,44,57,86,4,0,6,81,54,29,64,77,43,18,85,62,53,93,88,70,28,8,41,91,67,80,24,2,34,40,78,69,37,12,19,26,48,31,89,20,35,49,30,42,72,68,97,59,100,84,82,46,95,22,10,39,36,76,75,27,71,7,98,94,92,11,33,52,101,32,58,17,96,73,50,60,45,16,38,25,9,74,55}, // permutation 2
{15,70,64,92,0,18,3,55,23,49,82,83,28,93,8,24,13,5,66,71,11,16,57,54,65,51,81,53,52,75,84,74,80,91,46,101,87,39,2,98,79,29,50,62,63,7,27,95,69,76,9,42,45,67,1,34,72,26,90,97,21,85,59,41,43,60,36,61,25,4,94,22,89,30,37,14,99,86,48,40,78,19,10,44,56,33,96,31,68,47,32,17,38,88,100,20,58,12,73,6,77,35}, // permutation 3
{9,34,11,84,66,8,76,10,88,96,67,89,16,26,29,75,53,6,15,18,82,14,93,49,0,41,3,77,52,2,56,63,17,69,20,68,101,73,59,92,47,7,60,90,79,54,42,37,33,27,87,38,51,97,57,61,44,55,48,23,46,32,22,28,64,43,86,100,50,81,70,13,91,4,24,62,74,45,19,78,80,12,95,35,85,39,83,1,99,36,5,31,40,25,21,98,58,94,65,72,30,71}, // permutation 4
{69,17,3,7,91,22,21,52,93,39,20,0,19,40,28,27,85,37,33,56,63,73,79,90,78,87,101,1,95,68,53,36,97,100,13,10,5,30,55,34,61,6,26,84,45,48,82,81,70,2,12,57,29,59,65,92,54,31,25,98,38,76,46,51,62,23,4,94,60,72,89,9,15,14,42,80,8,50,11,64,83,43,75,18,96,77,71,58,24,47,35,32,74,49,16,66,86,44,67,88,41,99}, // permutation 5
{78,45,93,29,88,19,75,81,41,3,36,16,80,94,46,42,95,51,56,82,91,9,66,40,15,76,53,72,10,57,64,33,18,27,37,54,61,20,11,69,14,49,60,96,0,85,89,39,58,98,30,17,65,90,44,5,52,73,25,63,50,26,48,2,31,47,99,34,86,35,79,28,13,1,100,68,6,74,71,22,67,21,8,24,77,70,59,92,23,101,38,84,12,62,97,43,83,4,55,32,87,7}, // permutation 6
{21,0,67,92,73,100,66,71,26,8,28,30,19,87,89,32,95,53,3,50,48,7,84,77,42,76,96,86,25,68,97,79,41,81,70,12,90,60,4,61,5,72,40,85,43,38,27,82,80,20,29,74,46,34,78,88,56,99,59,51,15,93,17,98,101,52,22,57,31,24,65,14,83,94,2,54,18,33,58,35,1,63,69,91,75,10,36,6,44,47,45,39,16,49,64,37,55,13,9,62,11,23}, // permutation 7
{37,33,41,17,34,36,13,75,74,97,56,99,9,32,53,100,10,5,71,48,54,43,25,73,23,89,38,90,47,50,52,65,4,82,62,14,55,44,85,81,93,3,21,12,45,40,95,91,80,87,58,88,69,77,96,84,7,66,92,59,8,26,61,6,16,19,72,28,22,46,15,68,31,79,101,49,63,30,2,76,29,24,51,42,20,1,70,18,83,57,60,35,94,39,86,78,67,0,27,11,98,64}, // permutation 8
{63,97,42,5,68,33,64,91,22,93,15,59,27,56,86,44,40,39,21,54,87,11,28,80,78,66,7,50,81,98,72,20,17,25,79,13,48,94,23,29,100,0,30,88,62,65,76,36,8,31,73,10,4,51,16,1,46,96,70,19,61,32,26,58,84,37,89,71,24,74,49,34,69,90,52,38,95,85,55,60,53,47,45,35,6,92,3,83,82,75,57,12,14,101,9,99,18,41,77,43,2,67} // permutation 9
};

// Seed: 2398151256

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   int32_t  f1;
   uint64_t  f2;
};

struct S1 {
   uint32_t  f0;
   int16_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   uint64_t  f4;
   uint64_t  f5;
};

struct S2 {
    int32_t g_2;
    int32_t g_42;
    int32_t g_44;
    uint32_t g_50;
    volatile VECTOR(int8_t, 4) g_60;
    volatile VECTOR(int8_t, 8) g_62;
    VECTOR(int8_t, 8) g_64;
    uint16_t g_71[1];
    uint16_t g_75;
    VECTOR(int8_t, 2) g_80;
    volatile VECTOR(int8_t, 4) g_81;
    uint32_t g_83;
    volatile VECTOR(uint32_t, 16) g_88;
    struct S1 g_107;
    volatile struct S0 g_112;
    uint8_t g_114;
    VECTOR(int32_t, 16) g_115;
    volatile VECTOR(int32_t, 8) g_116;
    VECTOR(int8_t, 8) g_129;
    struct S0 g_147[1];
    struct S0 *g_149;
    struct S0 ** volatile g_148;
    int32_t *g_158;
    int32_t ** volatile g_157[8][1][5];
    struct S1 g_169[10];
    struct S1 * volatile g_168;
    int32_t * volatile g_191;
    VECTOR(int64_t, 16) g_233;
    VECTOR(uint8_t, 2) g_256;
    uint8_t *g_280;
    uint8_t * volatile *g_279;
    int32_t **g_286;
    struct S1 g_303;
    uint16_t *g_319;
    int8_t g_355;
    VECTOR(int8_t, 8) g_465;
    VECTOR(int8_t, 8) g_471;
    VECTOR(uint32_t, 4) g_484;
    VECTOR(uint64_t, 8) g_497;
    uint32_t g_503;
    uint16_t g_511;
    volatile VECTOR(int8_t, 8) g_519;
    uint64_t g_542[2][7];
    volatile VECTOR(int64_t, 4) g_547;
    volatile VECTOR(uint32_t, 4) g_567;
    VECTOR(int32_t, 4) g_579;
    volatile VECTOR(int32_t, 8) g_580;
    VECTOR(uint8_t, 8) g_590;
    volatile VECTOR(int64_t, 4) g_603;
    uint16_t g_614;
    int32_t ** volatile g_618[5][3][6];
    int32_t ** volatile g_619;
    volatile struct S1 * volatile *g_633;
    uint32_t g_635;
    int64_t g_641;
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
uint16_t  func_1(struct S2 * p_663);
int32_t * func_5(uint8_t  p_6, uint8_t  p_7, struct S2 * p_663);
int8_t  func_12(struct S1  p_13, uint8_t  p_14, int64_t  p_15, struct S2 * p_663);
uint32_t  func_21(uint32_t  p_22, int32_t ** p_23, int32_t * p_24, int32_t ** p_25, struct S2 * p_663);
int32_t ** func_26(int32_t * p_27, int32_t * p_28, int32_t * p_29, struct S1  p_30, struct S2 * p_663);
int32_t * func_31(uint32_t  p_32, uint32_t  p_33, int32_t ** p_34, uint8_t  p_35, struct S2 * p_663);
int16_t  func_38(uint32_t  p_39, struct S2 * p_663);
int32_t * func_53(uint32_t  p_54, int32_t  p_55, int64_t  p_56, int32_t  p_57, int32_t  p_58, struct S2 * p_663);
int8_t  func_65(uint64_t  p_66, struct S2 * p_663);
int16_t  func_102(struct S1  p_103, uint32_t * p_104, int32_t  p_105, uint8_t  p_106, struct S2 * p_663);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_663->g_2 p_663->l_comm_values p_663->g_44 p_663->g_50 p_663->g_83 p_663->g_comm_values p_663->g_107 p_663->g_112 p_663->g_64 p_663->g_81 p_663->g_88 p_663->g_129 p_663->g_114 p_663->g_115 p_663->g_148 p_663->g_75 p_663->g_147.f1 p_663->g_71 p_663->g_158 p_663->g_168 p_663->g_191 p_663->g_42 p_663->g_62 p_663->g_169.f0 p_663->g_147.f2 p_663->g_279 p_663->g_303 p_663->g_286 p_663->g_169.f1 p_663->g_511 p_663->g_547 p_663->g_169 p_663->g_497 p_663->g_579 p_663->g_580 p_663->g_590 p_663->g_319 p_663->g_233 p_663->g_542 p_663->g_355 p_663->g_603 p_663->g_614 p_663->g_619 p_663->g_484 p_663->g_633 p_663->g_635 p_663->g_641 p_663->g_519
 * writes: p_663->g_2 p_663->g_42 p_663->g_44 p_663->g_50 p_663->g_114 p_663->g_107.f0 p_663->g_115 p_663->g_107.f1 p_663->g_149 p_663->g_107.f3 p_663->g_comm_values p_663->g_107.f2 p_663->g_169 p_663->g_158 p_663->g_75 p_663->g_83 p_663->g_303.f3 p_663->g_511 p_663->g_355 p_663->g_71 p_663->g_542 p_663->g_614 p_663->g_256 p_663->g_641
 */
uint16_t  func_1(struct S2 * p_663)
{ /* block id: 4 */
    int32_t *l_11 = (void*)0;
    int32_t l_172 = 1L;
    int32_t **l_173 = &p_663->g_158;
    int32_t l_573 = 0x68852651L;
    int32_t ***l_662[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    for (p_663->g_2 = 12; (p_663->g_2 <= 4); p_663->g_2--)
    { /* block id: 7 */
        int32_t *l_8 = &p_663->g_2;
        int32_t *l_10 = (void*)0;
        int32_t **l_9[10];
        uint8_t *l_637 = (void*)0;
        uint8_t *l_638[10][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
        int64_t *l_640 = &p_663->g_641;
        int i, j;
        for (i = 0; i < 10; i++)
            l_9[i] = &l_10;
        (*l_173) = func_5(p_663->l_comm_values[(safe_mod_func_uint32_t_u_u(p_663->tid, 102))], (p_663->g_256.y = ((p_663->g_2 > ((l_8 != (l_11 = (void*)0)) < func_12(((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(0x5DL, ((safe_unary_minus_func_uint32_t_u(func_21((*l_8), func_26(func_31((safe_rshift_func_int16_t_s_s((p_663->g_2 && func_38(p_663->l_comm_values[(safe_mod_func_uint32_t_u_u(p_663->tid, 102))], p_663)), l_172)), p_663->g_129.s1, l_173, p_663->g_129.s1, p_663), &l_172, &p_663->g_2, p_663->g_303, p_663), &p_663->g_2, p_663->g_286, p_663))) , p_663->g_50))), l_573)) , (*p_663->g_168)), l_573, p_663->g_497.s1, p_663))) > (-3L))), p_663);
        (*p_663->g_191) ^= (((*l_640) |= 0L) , (**l_173));
    }
    if ((atomic_inc(&p_663->l_atomic_input[22]) == 3))
    { /* block id: 249 */
        int32_t l_643[3];
        int32_t *l_642[6] = {&l_643[2],&l_643[2],&l_643[2],&l_643[2],&l_643[2],&l_643[2]};
        int32_t *l_644 = (void*)0;
        int64_t l_645[6];
        int32_t *l_646 = &l_643[2];
        int32_t *l_647[9] = {(void*)0,&l_643[1],(void*)0,(void*)0,&l_643[1],(void*)0,(void*)0,&l_643[1],(void*)0};
        int32_t *l_648 = &l_643[2];
        uint16_t l_655 = 0xDFDAL;
        int16_t l_656 = 0x37D0L;
        int64_t l_657 = (-1L);
        int i;
        for (i = 0; i < 3; i++)
            l_643[i] = (-9L);
        for (i = 0; i < 6; i++)
            l_645[i] = 0x6D5C8421EDE8E614L;
        l_644 = l_642[1];
        l_648 = (l_645[3] , (l_647[3] = (l_646 = (GROUP_DIVERGE(2, 1) , (void*)0))));
        for (l_643[2] = 28; (l_643[2] >= (-25)); --l_643[2])
        { /* block id: 256 */
            int8_t l_651 = (-1L);
            int32_t l_652 = 0L;
            int32_t l_653[8][3][2] = {{{0x64096728L,0x64096728L},{0x64096728L,0x64096728L},{0x64096728L,0x64096728L}},{{0x64096728L,0x64096728L},{0x64096728L,0x64096728L},{0x64096728L,0x64096728L}},{{0x64096728L,0x64096728L},{0x64096728L,0x64096728L},{0x64096728L,0x64096728L}},{{0x64096728L,0x64096728L},{0x64096728L,0x64096728L},{0x64096728L,0x64096728L}},{{0x64096728L,0x64096728L},{0x64096728L,0x64096728L},{0x64096728L,0x64096728L}},{{0x64096728L,0x64096728L},{0x64096728L,0x64096728L},{0x64096728L,0x64096728L}},{{0x64096728L,0x64096728L},{0x64096728L,0x64096728L},{0x64096728L,0x64096728L}},{{0x64096728L,0x64096728L},{0x64096728L,0x64096728L},{0x64096728L,0x64096728L}}};
            int16_t l_654[10][4] = {{0x420FL,0x2BD7L,0x420FL,0x420FL},{0x420FL,0x2BD7L,0x420FL,0x420FL},{0x420FL,0x2BD7L,0x420FL,0x420FL},{0x420FL,0x2BD7L,0x420FL,0x420FL},{0x420FL,0x2BD7L,0x420FL,0x420FL},{0x420FL,0x2BD7L,0x420FL,0x420FL},{0x420FL,0x2BD7L,0x420FL,0x420FL},{0x420FL,0x2BD7L,0x420FL,0x420FL},{0x420FL,0x2BD7L,0x420FL,0x420FL},{0x420FL,0x2BD7L,0x420FL,0x420FL}};
            int i, j, k;
            l_654[8][0] |= ((l_651 = 0x70L) , (l_653[5][2][0] |= l_652));
        }
        l_657 ^= ((l_656 = l_655) , ((VECTOR(int32_t, 2))(8L, 0x574F8535L)).lo);
        unsigned int result = 0;
        int l_643_i0;
        for (l_643_i0 = 0; l_643_i0 < 3; l_643_i0++) {
            result += l_643[l_643_i0];
        }
        int l_645_i0;
        for (l_645_i0 = 0; l_645_i0 < 6; l_645_i0++) {
            result += l_645[l_645_i0];
        }
        result += l_655;
        result += l_656;
        result += l_657;
        atomic_add(&p_663->l_special_values[22], result);
    }
    else
    { /* block id: 263 */
        (1 + 1);
    }
    (*l_173) = func_5(p_663->g_519.s0, (safe_mod_func_int64_t_s_s((-5L), ((safe_lshift_func_uint8_t_u_s(p_663->g_579.w, 1)) || (&p_663->g_286 == (l_662[1] = &p_663->g_286))))), p_663);
    return (*p_663->g_319);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_5(uint8_t  p_6, uint8_t  p_7, struct S2 * p_663)
{ /* block id: 242 */
    int32_t *l_639 = &p_663->g_44;
    return l_639;
}


/* ------------------------------------------ */
/* 
 * reads : p_663->g_303.f0 p_663->g_579 p_663->g_580 p_663->g_62 p_663->g_147.f1 p_663->g_590 p_663->g_303.f2 p_663->g_319 p_663->g_233 p_663->g_303.f4 p_663->g_542 p_663->g_107.f1 p_663->g_169.f1 p_663->g_355 p_663->g_603 p_663->g_129 p_663->g_614 p_663->g_619 p_663->g_112.f2 p_663->g_191 p_663->g_42 p_663->g_484 p_663->g_633 p_663->g_115 p_663->g_511 p_663->g_635 p_663->g_81
 * writes: p_663->g_71 p_663->g_542 p_663->g_107.f1 p_663->g_169.f1 p_663->g_355 p_663->g_614 p_663->g_158 p_663->g_511
 */
int8_t  func_12(struct S1  p_13, uint8_t  p_14, int64_t  p_15, struct S2 * p_663)
{ /* block id: 219 */
    int16_t *l_578 = &p_663->g_107.f1;
    int32_t l_589 = 0x1B933C48L;
    VECTOR(uint8_t, 2) l_591 = (VECTOR(uint8_t, 2))(0x23L, 255UL);
    uint32_t *l_592 = &p_663->g_50;
    uint64_t *l_593[1][8];
    int32_t l_594 = 1L;
    int32_t l_595 = 6L;
    VECTOR(uint64_t, 8) l_596 = (VECTOR(uint64_t, 8))(0xA46B5AA5D1E200C0L, (VECTOR(uint64_t, 4))(0xA46B5AA5D1E200C0L, (VECTOR(uint64_t, 2))(0xA46B5AA5D1E200C0L, 9UL), 9UL), 9UL, 0xA46B5AA5D1E200C0L, 9UL);
    int32_t l_598 = 0x54BDB826L;
    VECTOR(uint8_t, 8) l_606 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x9DL), 0x9DL), 0x9DL, 1UL, 0x9DL);
    VECTOR(uint16_t, 4) l_608 = (VECTOR(uint16_t, 4))(0x3191L, (VECTOR(uint16_t, 2))(0x3191L, 0xECD6L), 0xECD6L);
    VECTOR(int64_t, 8) l_632 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x21B94502C52D622CL), 0x21B94502C52D622CL), 0x21B94502C52D622CL, (-1L), 0x21B94502C52D622CL);
    int32_t *l_636 = &l_598;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
            l_593[i][j] = &p_663->g_169[5].f4;
    }
    if (((safe_add_func_uint32_t_u_u(((FAKE_DIVERGE(p_663->local_2_offset, get_local_id(2), 10) >= ((l_595 = (l_594 = (l_578 != ((p_663->g_303.f0 != (l_589 = (((((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x76E59A15L, 0x2F644345L)), p_15, 1L, 0x3BD49D5AL, ((VECTOR(int32_t, 2))(p_663->g_579.yx)), ((VECTOR(int32_t, 4))(p_663->g_580.s0223)), (-10L), ((safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 16))(0x575D8DEB3D21A165L, (safe_div_func_int32_t_s_s((((*p_663->g_319) = (+(safe_mod_func_uint64_t_u_u(p_663->g_62.s2, (safe_div_func_uint8_t_u_u(((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))((p_663->g_147[0].f1 , (l_589 <= l_589)), 0x4EL, ((VECTOR(uint8_t, 2))(p_663->g_590.s15)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(255UL, 255UL)).yyxy)))).s5303617132431551)).s29, ((VECTOR(uint8_t, 16))(l_591.yyyxxyyyyyyyyyxx)).s0d))).yyxx)).y , l_592) == l_592), p_663->g_303.f2)))))) <= l_589), p_663->g_233.sf)), (-2L), ((VECTOR(int64_t, 8))(0L)), p_13.f0, l_591.x, 0L, 0L, 0x6F7BFB54324E57CDL)).s176f, ((VECTOR(int64_t, 4))(0x3498AACDBE739863L))))).wyxxzzww, ((VECTOR(int64_t, 8))(0x01B98B93D4EF9F8BL))))).s5373152555356600, (int64_t)p_663->g_303.f4, (int64_t)p_13.f1))).s8, l_589)) || 8L), ((VECTOR(int32_t, 2))((-1L))), 0x391005A2L)).s1bb0)).xyxyxxzwwwxzzwyy)).s32, ((VECTOR(int32_t, 2))(0x0A625460L))))).lo < l_589) < p_663->g_233.s1) , 255UL))) , (void*)0)))) > 0x29E27773BE9CC1C6L)) > 0UL), 0x4BB52CE0L)) , p_13.f4))
    { /* block id: 224 */
        VECTOR(uint64_t, 2) l_597 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x0E5A8A937E8AA9DAL);
        int8_t *l_601 = (void*)0;
        int8_t *l_602 = &p_663->g_355;
        struct S0 l_607 = {-1L,-1L,0x60A642C3D833734FL};
        int32_t l_609 = 0x1AD61918L;
        int32_t *l_610 = &l_589;
        int32_t *l_611 = &p_663->g_44;
        int32_t *l_612 = &l_595;
        int32_t *l_613 = &l_595;
        int i;
        l_609 |= (((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 2))(add_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551612UL)), 1UL, 7UL)).hi, ((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_596.s30)).xyyxxyyxxxyyxxyx)))).sc826, ((VECTOR(uint64_t, 16))(l_597.yxyxyyyyxxxxxxxx)).sb84b))), ((--p_663->g_542[0][2]) , ((VECTOR(uint64_t, 8))(0xAF660B24F8F3C005L, ((((*l_602) &= ((((&p_663->g_148 != (void*)0) | l_597.x) || l_597.x) >= (p_663->g_169[5].f1 ^= ((*l_578) ^= ((void*)0 == &p_663->g_280))))) > ((((VECTOR(int64_t, 16))(p_663->g_603.wywyyzyxzwxywwzw)).sa != ((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_663->group_1_offset, get_group_id(1), 10), ((VECTOR(uint8_t, 4))(l_606.s3612)).y)) , (((l_607 , ((VECTOR(uint16_t, 4))(l_608.zxxz)).w) < ((VECTOR(int16_t, 16))(0x1CEBL, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(0x3BBEL, 0x5304L)).yxxy, ((VECTOR(int16_t, 8))(p_13.f5, 8L, (0xDD45L >= (-1L)), ((VECTOR(int16_t, 4))(0x79A4L)), 0L)).lo))), p_13.f1, l_607.f2, l_597.x, (-1L), 0x78DBL, 0L, p_13.f3, 0L, 0x3AD1L, 0x43FBL, (-1L))).sf) == p_14))) , p_663->g_129.s2)) , p_13.f2), ((VECTOR(uint64_t, 4))(0xC4B89B8029C41E85L)), 0x52260D200B6405D4L, 2UL)).s5), 0UL, 0x0A986CEE9156152CL, 0x1DAE2EBF165B49BEL)).s52, ((VECTOR(uint64_t, 2))(0xCFDE9EE58F13DFFCL)))))))), ((VECTOR(uint64_t, 2))(18446744073709551615UL))))).hi < 0x128928CC0FC5A722L);
        ++p_663->g_614;
    }
    else
    { /* block id: 231 */
        int32_t *l_617[2][9] = {{&p_663->g_44,(void*)0,&p_663->g_44,&p_663->g_44,(void*)0,&p_663->g_44,&p_663->g_44,(void*)0,&p_663->g_44},{&p_663->g_44,(void*)0,&p_663->g_44,&p_663->g_44,(void*)0,&p_663->g_44,&p_663->g_44,(void*)0,&p_663->g_44}};
        uint16_t *l_634 = &p_663->g_511;
        int i, j;
        (*p_663->g_619) = l_617[1][2];
        l_594 = (safe_sub_func_uint16_t_u_u((((((*p_663->g_319) = (!0UL)) , 1L) > (p_663->g_112.f2 && ((*p_663->g_191) <= (safe_mul_func_uint16_t_u_u(((*l_634) ^= (safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(p_13.f2, (safe_mul_func_uint8_t_u_u((l_598 > ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0UL, 0xD8L)), 0xBFL, (safe_lshift_func_int16_t_s_u(p_663->g_484.y, 14)), 0x63L, ((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_632.s56)))).yyxyyyxx)).s3012052131416132)).s5 | (((void*)0 != p_663->g_633) && p_663->g_115.s3)) < GROUP_DIVERGE(2, 1)), 2UL, 0x88L)).s1), 0x41L)))), 14))), p_13.f4))))) > l_591.x), p_663->g_635));
        l_617[0][2] = &l_595;
        (*p_663->g_619) = l_617[1][2];
    }
    (*l_636) &= l_589;
    return p_663->g_81.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_663->g_233 p_663->g_112.f1 p_663->g_2 p_663->g_169.f1 p_663->g_71 p_663->g_44 p_663->g_511 p_663->g_355 p_663->g_147.f1 p_663->g_519 p_663->g_303.f3 p_663->g_256 p_663->g_148 p_663->g_149 p_663->g_147.f0 p_663->g_471 p_663->g_191 p_663->g_42 p_663->g_158 p_663->g_547 p_663->g_147 p_663->g_567 p_663->g_303.f2 p_663->g_107.f5 p_663->g_303.f1
 * writes: p_663->g_319 p_663->g_158 p_663->g_44 p_663->g_303.f3 p_663->g_511 p_663->g_355 p_663->g_256 p_663->g_114 p_663->g_542 p_663->g_42
 */
uint32_t  func_21(uint32_t  p_22, int32_t ** p_23, int32_t * p_24, int32_t ** p_25, struct S2 * p_663)
{ /* block id: 118 */
    VECTOR(uint8_t, 16) l_312 = (VECTOR(uint8_t, 16))(0x94L, (VECTOR(uint8_t, 4))(0x94L, (VECTOR(uint8_t, 2))(0x94L, 255UL), 255UL), 255UL, 0x94L, 255UL, (VECTOR(uint8_t, 2))(0x94L, 255UL), (VECTOR(uint8_t, 2))(0x94L, 255UL), 0x94L, 255UL, 0x94L, 255UL);
    uint16_t **l_315 = (void*)0;
    uint16_t **l_316 = (void*)0;
    uint16_t *l_318 = &p_663->g_71[0];
    uint16_t **l_317[7][10][3] = {{{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318}},{{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318}},{{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318}},{{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318}},{{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318}},{{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318}},{{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318},{&l_318,&l_318,&l_318}}};
    uint64_t *l_322 = (void*)0;
    int64_t l_323 = 0x42F0F649D557D1DEL;
    int64_t l_324 = 0x187CF5D1F2FF3444L;
    int8_t l_325[2];
    int32_t l_329[4];
    struct S0 **l_341[2];
    struct S0 ***l_340 = &l_341[0];
    int32_t *l_399 = &l_329[3];
    uint64_t l_500 = 0xDE0C598B08106D7BL;
    int32_t *l_548 = (void*)0;
    int32_t *l_549 = &p_663->g_42;
    int32_t *l_550 = &p_663->g_44;
    int32_t *l_551 = &p_663->g_42;
    int32_t *l_552 = &p_663->g_42;
    int32_t *l_553 = &p_663->g_42;
    int32_t *l_554 = (void*)0;
    int32_t *l_555[3];
    uint32_t l_556[9][3] = {{0x53F007C1L,0x53F007C1L,0x53F007C1L},{0x53F007C1L,0x53F007C1L,0x53F007C1L},{0x53F007C1L,0x53F007C1L,0x53F007C1L},{0x53F007C1L,0x53F007C1L,0x53F007C1L},{0x53F007C1L,0x53F007C1L,0x53F007C1L},{0x53F007C1L,0x53F007C1L,0x53F007C1L},{0x53F007C1L,0x53F007C1L,0x53F007C1L},{0x53F007C1L,0x53F007C1L,0x53F007C1L},{0x53F007C1L,0x53F007C1L,0x53F007C1L}};
    uint32_t *l_568 = &l_556[7][2];
    struct S1 l_571 = {0UL,-1L,1UL,0UL,0UL,18446744073709551607UL};
    int16_t *l_572 = &l_571.f1;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_325[i] = 0x0FL;
    for (i = 0; i < 4; i++)
        l_329[i] = 1L;
    for (i = 0; i < 2; i++)
        l_341[i] = &p_663->g_149;
    for (i = 0; i < 3; i++)
        l_555[i] = &p_663->g_44;
    if (((safe_add_func_int32_t_s_s(((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_312.s2322)).wyywzxwx)).s4704642200333306, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((65531UL > p_663->g_233.s2) && (((safe_add_func_uint8_t_u_u((((((l_312.s2 || FAKE_DIVERGE(p_663->global_0_offset, get_global_id(0), 10)) > p_663->g_112.f1) , (p_663->g_319 = &p_663->g_71[0])) == (((safe_rshift_func_int8_t_s_s((0x7EA2E9DDL == (*p_24)), ((void*)0 != l_322))) & l_312.s6) , &p_663->g_71[0])) || p_22), 0x4EL)) < p_663->g_169[5].f1) >= p_663->g_71[0])), ((VECTOR(uint8_t, 4))(255UL)), 253UL, l_323, 1UL, 255UL, 4UL, 0x02L, GROUP_DIVERGE(1, 1), l_312.s4, 0x7FL, 0x2BL, 247UL)).s4a62)))).yxxxxxwwyywwxwzy))), ((VECTOR(uint8_t, 16))(8UL)), ((VECTOR(uint8_t, 16))(0xCAL))))).sd1)).even < l_324) < 1UL), l_323)) , l_325[1]))
    { /* block id: 120 */
        int32_t *l_326 = &p_663->g_2;
        (*p_23) = l_326;
        return p_663->g_169[5].f1;
    }
    else
    { /* block id: 123 */
        int8_t l_327 = 0x04L;
        int32_t *l_328[6] = {&p_663->g_44,&p_663->g_44,&p_663->g_44,&p_663->g_44,&p_663->g_44,&p_663->g_44};
        uint16_t l_421[10] = {2UL,65535UL,0x946FL,65535UL,2UL,2UL,65535UL,0x946FL,65535UL,2UL};
        VECTOR(uint8_t, 8) l_459 = (VECTOR(uint8_t, 8))(0x9EL, (VECTOR(uint8_t, 4))(0x9EL, (VECTOR(uint8_t, 2))(0x9EL, 1UL), 1UL), 1UL, 0x9EL, 1UL);
        struct S1 *l_495 = &p_663->g_107;
        int32_t l_513 = 0x67993426L;
        VECTOR(int16_t, 2) l_518 = (VECTOR(int16_t, 2))(0x7BBFL, 1L);
        VECTOR(uint8_t, 8) l_520 = (VECTOR(uint8_t, 8))(0xE7L, (VECTOR(uint8_t, 4))(0xE7L, (VECTOR(uint8_t, 2))(0xE7L, 0x73L), 0x73L), 0x73L, 0xE7L, 0x73L);
        int i;
        l_329[1] ^= l_327;
        for (p_663->g_44 = (-15); (p_663->g_44 <= 9); ++p_663->g_44)
        { /* block id: 127 */
            struct S0 ****l_342 = &l_340;
            int8_t *l_343 = (void*)0;
            int8_t *l_344 = &l_325[0];
            VECTOR(int8_t, 8) l_372 = (VECTOR(int8_t, 8))(0x73L, (VECTOR(int8_t, 4))(0x73L, (VECTOR(int8_t, 2))(0x73L, 0x5AL), 0x5AL), 0x5AL, 0x73L, 0x5AL);
            int32_t l_377 = 0x3ECD138FL;
            int32_t l_378 = 0L;
            VECTOR(int32_t, 4) l_380 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x0427C1C3L), 0x0427C1C3L);
            uint64_t l_382 = 0xDC0288F14696CC4AL;
            VECTOR(int8_t, 8) l_425 = (VECTOR(int8_t, 8))(0x1FL, (VECTOR(int8_t, 4))(0x1FL, (VECTOR(int8_t, 2))(0x1FL, 3L), 3L), 3L, 0x1FL, 3L);
            struct S1 *l_434 = &p_663->g_107;
            int i;
            if ((atomic_inc(&p_663->g_atomic_input[59 * get_linear_group_id() + 35]) == 2))
            { /* block id: 129 */
                int16_t l_332 = 9L;
                uint32_t l_333 = 0x153D8A28L;
                l_333++;
                unsigned int result = 0;
                result += l_332;
                result += l_333;
                atomic_add(&p_663->g_special_values[59 * get_linear_group_id() + 35], result);
            }
            else
            { /* block id: 131 */
                (1 + 1);
            }
            if (((safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_344) = (((*l_342) = l_340) == (void*)0)), p_22)), 4)) , (*p_24)))
            { /* block id: 136 */
                int64_t *l_349 = (void*)0;
                int64_t *l_354 = &l_323;
                int32_t l_368[4][1];
                int32_t l_373 = 4L;
                uint16_t *l_375 = &p_663->g_71[0];
                VECTOR(uint8_t, 2) l_419 = (VECTOR(uint8_t, 2))(0x55L, 0x33L);
                int32_t **l_422[5];
                VECTOR(uint16_t, 16) l_432 = (VECTOR(uint16_t, 16))(0xE012L, (VECTOR(uint16_t, 4))(0xE012L, (VECTOR(uint16_t, 2))(0xE012L, 65535UL), 65535UL), 65535UL, 0xE012L, 65535UL, (VECTOR(uint16_t, 2))(0xE012L, 65535UL), (VECTOR(uint16_t, 2))(0xE012L, 65535UL), 0xE012L, 65535UL, 0xE012L, 65535UL);
                struct S1 *l_433 = (void*)0;
                uint16_t l_481 = 0x602CL;
                uint32_t *l_502 = &p_663->g_503;
                uint8_t *l_508 = &p_663->g_114;
                VECTOR(uint8_t, 4) l_529 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL);
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_368[i][j] = (-1L);
                }
                for (i = 0; i < 5; i++)
                    l_422[i] = &l_328[0];
                for (p_663->g_303.f3 = 0; (p_663->g_303.f3 != 9); p_663->g_303.f3 = safe_add_func_int8_t_s_s(p_663->g_303.f3, 5))
                { /* block id: 139 */
                    int64_t *l_350 = &l_323;
                    int64_t **l_351 = (void*)0;
                    int64_t *l_353 = &l_323;
                    int64_t **l_352[2][9];
                    int32_t l_374[3][7][9] = {{{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL}},{{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL}},{{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL},{0L,0L,0x7438A579L,0x3C974CA1L,0x2098B23FL,0L,0x60EB540DL,0x147287F9L,0x60EB540DL}}};
                    uint16_t *l_376[5][4][10] = {{{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75},{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75},{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75},{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75}},{{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75},{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75},{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75},{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75}},{{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75},{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75},{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75},{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75}},{{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75},{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75},{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75},{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75}},{{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75},{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75},{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75},{&p_663->g_71[0],&p_663->g_71[0],(void*)0,(void*)0,&p_663->g_71[0],&p_663->g_75,&p_663->g_71[0],&p_663->g_71[0],(void*)0,&p_663->g_75}}};
                    int16_t l_490 = 8L;
                    struct S1 **l_496 = &l_495;
                    uint64_t *l_501[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_352[i][j] = &l_353;
                    }
                    (1 + 1);
                }
                l_328[0] = l_328[0];
                for (l_382 = 0; (l_382 < 12); ++l_382)
                { /* block id: 188 */
                    int16_t l_512 = 1L;
                    VECTOR(uint8_t, 4) l_534 = (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 1UL), 1UL);
                    struct S0 *l_537 = &p_663->g_147[0];
                    int i;
                    p_663->g_511 &= (*p_24);
                    (*p_23) = (void*)0;
                    l_513 &= l_512;
                    for (p_663->g_355 = 0; (p_663->g_355 == (-3)); --p_663->g_355)
                    { /* block id: 194 */
                        uint8_t *l_538 = (void*)0;
                        uint8_t *l_539 = (void*)0;
                        uint8_t *l_540 = (void*)0;
                        uint8_t *l_541 = (void*)0;
                        int32_t l_543 = 0L;
                        l_543 = (safe_add_func_uint32_t_u_u((p_663->g_147[0].f1 <= ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(0x3983L, 1L, ((VECTOR(int16_t, 4))(l_518.xyyy)), 1L, 7L)).s6704514624507204)).se2)).xxyyxxxx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_663->g_519.s1100)))).wxyywzxx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_520.s10335237)).s5, 0x80L, 0xABL, (safe_add_func_uint8_t_u_u(((p_663->g_542[0][1] = (p_663->g_303.f3 == ((safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0xC8L, 0UL)))).even, p_22)) , (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_529.zzwwwxwz)))).lo)).even, ((VECTOR(uint8_t, 8))(((!(p_663->g_256.y++)) > ((((*l_508) = ((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_534.wzyxyzyzywwwwyxx)).s7995)).z, (65531UL >= (l_537 == (((VECTOR(uint32_t, 4))(0x00D5EB44L, 4294967290UL, 1UL, 0x702F769FL)).z , (*p_663->g_148)))))) , (1L ^ l_382))) == p_663->g_147[0].f0) > GROUP_DIVERGE(1, 1))), 0x72L, 1UL, ((VECTOR(uint8_t, 2))(0x9EL)), 0xB8L, 0x9AL, 0x9BL)).s34))))).lo | 0L)), p_663->g_471.s2)), p_22)) || (*p_663->g_191)))) & p_22), l_372.s1)), l_512, 0xD4L, 0xEFL, 1UL))))).odd, ((VECTOR(int16_t, 4))((-3L)))))))).wwxzzyxz))).s1514637362131403, ((VECTOR(int16_t, 16))((-10L))), ((VECTOR(int16_t, 16))(6L))))).sb), GROUP_DIVERGE(1, 1)));
                        (*p_23) = (*p_23);
                    }
                }
                if ((atomic_inc(&p_663->l_atomic_input[12]) == 9))
                { /* block id: 203 */
                    VECTOR(int32_t, 8) l_544 = (VECTOR(int32_t, 8))(0x06BF7B63L, (VECTOR(int32_t, 4))(0x06BF7B63L, (VECTOR(int32_t, 2))(0x06BF7B63L, 0L), 0L), 0L, 0x06BF7B63L, 0L);
                    uint16_t l_545 = 0xFD83L;
                    int i;
                    l_545 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_544.s7055)).odd)).yxxyyxyxxxxxxyxy)).sc;
                    unsigned int result = 0;
                    result += l_544.s7;
                    result += l_544.s6;
                    result += l_544.s5;
                    result += l_544.s4;
                    result += l_544.s3;
                    result += l_544.s2;
                    result += l_544.s1;
                    result += l_544.s0;
                    result += l_545;
                    atomic_add(&p_663->l_special_values[12], result);
                }
                else
                { /* block id: 205 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 208 */
                uint32_t l_546 = 0UL;
                (*l_399) = (l_546 || ((VECTOR(int64_t, 2))(p_663->g_547.zw)).hi);
                return p_663->g_547.z;
            }
        }
    }
    --l_556[7][2];
    (*l_553) = ((VECTOR(int32_t, 8))((*p_24), 2L, ((safe_div_func_int8_t_s_s(0x29L, (safe_mod_func_uint16_t_u_u((((~((+((void*)0 == l_318)) , (safe_rshift_func_int8_t_s_s(p_22, (safe_div_func_int16_t_s_s(((p_663->g_147[0] , p_24) == &p_663->g_50), ((*l_572) = (((((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 4))(p_663->g_567.zyxw)), (uint32_t)(++(*l_568))))).odd, (uint32_t)p_663->g_303.f2))).even , (*l_550)) , l_571) , (*l_550))))))))) , GROUP_DIVERGE(1, 1)) || p_663->g_107.f5), 0x0FC5L)))) <= 0UL), 0x79DB931BL, ((VECTOR(int32_t, 4))(0x61FADDD6L)))).s7;
    return p_663->g_303.f1;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_663->g_44 p_663->g_42
 */
int32_t ** func_26(int32_t * p_27, int32_t * p_28, int32_t * p_29, struct S1  p_30, struct S2 * p_663)
{ /* block id: 113 */
    int32_t *l_304 = &p_663->g_42;
    int32_t *l_305 = (void*)0;
    int32_t *l_306[1];
    uint16_t l_307 = 0x82C0L;
    int i;
    for (i = 0; i < 1; i++)
        l_306[i] = &p_663->g_44;
    (*p_28) &= ((*p_27) = 0x1B7427DBL);
    --l_307;
    return &p_663->g_158;
}


/* ------------------------------------------ */
/* 
 * reads : p_663->g_2 p_663->g_158 p_663->g_191 p_663->g_42 p_663->g_62 p_663->g_107.f0 p_663->g_comm_values p_663->g_83 p_663->g_169.f0 p_663->g_129 p_663->g_147.f2 p_663->g_75 p_663->g_107.f3 p_663->g_112.f0 p_663->g_169 p_663->g_233 p_663->g_256 p_663->l_comm_values p_663->g_107.f2 p_663->g_71 p_663->g_279
 * writes: p_663->g_158 p_663->g_42 p_663->g_80 p_663->g_comm_values p_663->g_75 p_663->g_169 p_663->g_114 p_663->g_83
 */
int32_t * func_31(uint32_t  p_32, uint32_t  p_33, int32_t ** p_34, uint8_t  p_35, struct S2 * p_663)
{ /* block id: 69 */
    int32_t *l_174 = &p_663->g_2;
    VECTOR(uint64_t, 8) l_185 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xB1B58F1CD69E2DA4L), 0xB1B58F1CD69E2DA4L), 0xB1B58F1CD69E2DA4L, 1UL, 0xB1B58F1CD69E2DA4L);
    VECTOR(int16_t, 16) l_186 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 4L), 4L), 4L, (-1L), 4L, (VECTOR(int16_t, 2))((-1L), 4L), (VECTOR(int16_t, 2))((-1L), 4L), (-1L), 4L, (-1L), 4L);
    VECTOR(int16_t, 8) l_187 = (VECTOR(int16_t, 8))(0x2FDEL, (VECTOR(int16_t, 4))(0x2FDEL, (VECTOR(int16_t, 2))(0x2FDEL, 0x11CDL), 0x11CDL), 0x11CDL, 0x2FDEL, 0x11CDL);
    int32_t l_188 = 0x25136129L;
    uint8_t *l_190 = &p_663->g_114;
    uint8_t **l_189[2];
    struct S0 **l_213 = &p_663->g_149;
    int8_t *l_214 = (void*)0;
    int8_t *l_215[4][9][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    uint64_t l_216[1][8] = {{0xA82FDAFAEC72D1EAL,0xB74DEAF234EB9A49L,0xA82FDAFAEC72D1EAL,0xA82FDAFAEC72D1EAL,0xB74DEAF234EB9A49L,0xA82FDAFAEC72D1EAL,0xA82FDAFAEC72D1EAL,0xB74DEAF234EB9A49L}};
    uint16_t *l_217 = &p_663->g_75;
    int32_t l_218[7][9][4] = {{{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L}},{{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L}},{{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L}},{{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L}},{{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L}},{{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L}},{{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L},{0x72358411L,0x45570C8BL,(-4L),0x135E2444L}}};
    VECTOR(int8_t, 16) l_247 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x66L), 0x66L), 0x66L, 0L, 0x66L, (VECTOR(int8_t, 2))(0L, 0x66L), (VECTOR(int8_t, 2))(0L, 0x66L), 0L, 0x66L, 0L, 0x66L);
    VECTOR(uint8_t, 16) l_254 = (VECTOR(uint8_t, 16))(0xFDL, (VECTOR(uint8_t, 4))(0xFDL, (VECTOR(uint8_t, 2))(0xFDL, 0x64L), 0x64L), 0x64L, 0xFDL, 0x64L, (VECTOR(uint8_t, 2))(0xFDL, 0x64L), (VECTOR(uint8_t, 2))(0xFDL, 0x64L), 0xFDL, 0x64L, 0xFDL, 0x64L);
    VECTOR(uint8_t, 4) l_255 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xD4L), 0xD4L);
    VECTOR(uint8_t, 2) l_258 = (VECTOR(uint8_t, 2))(250UL, 3UL);
    int16_t l_259[5][10] = {{0x5779L,(-9L),0x5779L,0x5779L,(-9L),0x5779L,0x5779L,(-9L),0x5779L,0x5779L},{0x5779L,(-9L),0x5779L,0x5779L,(-9L),0x5779L,0x5779L,(-9L),0x5779L,0x5779L},{0x5779L,(-9L),0x5779L,0x5779L,(-9L),0x5779L,0x5779L,(-9L),0x5779L,0x5779L},{0x5779L,(-9L),0x5779L,0x5779L,(-9L),0x5779L,0x5779L,(-9L),0x5779L,0x5779L},{0x5779L,(-9L),0x5779L,0x5779L,(-9L),0x5779L,0x5779L,(-9L),0x5779L,0x5779L}};
    int64_t *l_261 = (void*)0;
    int32_t l_262 = 0x3CC9911BL;
    VECTOR(int16_t, 4) l_291 = (VECTOR(int16_t, 4))(0x693EL, (VECTOR(int16_t, 2))(0x693EL, 0x29A9L), 0x29A9L);
    VECTOR(int8_t, 2) l_292 = (VECTOR(int8_t, 2))(0x07L, 0L);
    int32_t l_300 = 1L;
    int32_t *l_302 = &p_663->g_42;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_189[i] = &l_190;
    (*p_663->g_191) ^= ((((*p_34) = l_174) == l_174) || ((safe_mul_func_uint16_t_u_u(((((0x2895L && FAKE_DIVERGE(p_663->local_0_offset, get_local_id(0), 10)) <= ((safe_div_func_int64_t_s_s((safe_sub_func_uint64_t_u_u((safe_add_func_int32_t_s_s(0x73529B9CL, (safe_mul_func_uint16_t_u_u(0x55FAL, (*l_174))))), p_32)), ((VECTOR(uint64_t, 16))(l_185.s5155350165537330)).s1)) , ((p_35 < ((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(l_186.s417dde3d)).s0644262405404570, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 2))(l_187.s57)).yyxyyyxx))).s17)).yyyxxyyxyxyxxyyx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-1L), 0x6FB9L)).yxyxxyyyxyxyyyyy))))))).sb) || (((VECTOR(int32_t, 8))(0x0965D61EL, (-1L), 5L, (l_188 = (*p_663->g_158)), ((VECTOR(int32_t, 4))(0x0D023A19L)))).s1 , 0x6CD59115L)))) , l_189[0]) == &l_190), 0xD69DL)) | GROUP_DIVERGE(2, 1)));
    if ((((safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(((p_32 != (l_218[4][8][1] |= (((*l_217) &= (p_663->g_62.s0 > ((safe_add_func_int64_t_s_s((safe_add_func_int8_t_s_s((((*l_174) , ((((((18446744073709551610UL ^ (p_663->g_comm_values[p_663->tid] = ((safe_mul_func_int16_t_s_s((FAKE_DIVERGE(p_663->group_0_offset, get_group_id(0), 10) >= (l_188 = (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))((safe_add_func_int32_t_s_s((~(p_663->g_107.f0 || ((safe_lshift_func_int8_t_s_u(((((safe_unary_minus_func_int64_t_s(((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 16))(((safe_rshift_func_int8_t_s_s(((*l_174) || (p_663->g_80.x = (safe_lshift_func_int16_t_s_u(3L, (((void*)0 != l_213) >= (*l_174)))))), 7)) | p_32), ((VECTOR(int64_t, 4))(0x5E6AF59B29B80A16L)), 5L, 0x162AD8FED3AB3DB0L, ((VECTOR(int64_t, 4))((-1L))), p_35, ((VECTOR(int64_t, 4))(0x614E27A1FF17B4EDL)))), ((VECTOR(int64_t, 16))(0x28120CE1A13B96F8L))))).odd)).s7 == FAKE_DIVERGE(p_663->group_0_offset, get_group_id(0), 10)) , 0x3D960F0752AFE84FL))) | p_33) & (*l_174)) || 8L), 0)) ^ p_663->g_comm_values[p_663->tid]))), (*l_174))), ((VECTOR(uint64_t, 2))(0x49D43D75D162C63CL)), 18446744073709551615UL)))).xwzyxwzzwxwwyzwy)).sf <= p_663->g_83))), p_35)) != 0xA1E79B9721220F7FL))) , (*l_174)) > p_663->g_169[5].f0) != l_216[0][3]) || p_663->g_129.s5) , p_663->g_147[0].f2)) < GROUP_DIVERGE(1, 1)), GROUP_DIVERGE(2, 1))), 0x67531C0F092F73DEL)) != (*l_174)))) , 0x5DBA26975CEA9568L))) <= 2L), p_663->g_107.f0)) <= p_32), (*l_174))), p_663->g_107.f3)) | (*p_663->g_158)) , (*l_174)))
    { /* block id: 78 */
        struct S1 *l_230 = &p_663->g_169[5];
        int16_t *l_236[5];
        int32_t l_237 = 0x3A1D2776L;
        uint64_t *l_242 = &l_216[0][3];
        VECTOR(int8_t, 2) l_248 = (VECTOR(int8_t, 2))(0L, 0x02L);
        VECTOR(uint64_t, 16) l_251 = (VECTOR(uint64_t, 16))(0x021FC920DFC0DDB3L, (VECTOR(uint64_t, 4))(0x021FC920DFC0DDB3L, (VECTOR(uint64_t, 2))(0x021FC920DFC0DDB3L, 2UL), 2UL), 2UL, 0x021FC920DFC0DDB3L, 2UL, (VECTOR(uint64_t, 2))(0x021FC920DFC0DDB3L, 2UL), (VECTOR(uint64_t, 2))(0x021FC920DFC0DDB3L, 2UL), 0x021FC920DFC0DDB3L, 2UL, 0x021FC920DFC0DDB3L, 2UL);
        VECTOR(uint8_t, 16) l_257 = (VECTOR(uint8_t, 16))(0x90L, (VECTOR(uint8_t, 4))(0x90L, (VECTOR(uint8_t, 2))(0x90L, 246UL), 246UL), 246UL, 0x90L, 246UL, (VECTOR(uint8_t, 2))(0x90L, 246UL), (VECTOR(uint8_t, 2))(0x90L, 246UL), 0x90L, 246UL, 0x90L, 246UL);
        int32_t l_260 = 7L;
        int32_t *l_263 = (void*)0;
        int32_t *l_264 = &l_188;
        int32_t l_270[9][5] = {{(-1L),(-1L),6L,(-1L),(-1L)},{(-1L),(-1L),6L,(-1L),(-1L)},{(-1L),(-1L),6L,(-1L),(-1L)},{(-1L),(-1L),6L,(-1L),(-1L)},{(-1L),(-1L),6L,(-1L),(-1L)},{(-1L),(-1L),6L,(-1L),(-1L)},{(-1L),(-1L),6L,(-1L),(-1L)},{(-1L),(-1L),6L,(-1L),(-1L)},{(-1L),(-1L),6L,(-1L),(-1L)}};
        uint16_t l_271[10] = {0x930AL,0xCB06L,0xB3B1L,0xCB06L,0x930AL,0x930AL,0xCB06L,0xB3B1L,0xCB06L,0x930AL};
        int i, j;
        for (i = 0; i < 5; i++)
            l_236[i] = &p_663->g_107.f1;
        (*p_34) = &l_218[5][5][1];
        (*l_264) &= ((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 16))(((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((~(safe_unary_minus_func_uint8_t_u((+(safe_div_func_uint8_t_u_u(p_663->g_112.f0, (safe_sub_func_uint8_t_u_u((((*l_230) = p_663->g_169[5]) , 0xBAL), (safe_lshift_func_int8_t_s_u((((VECTOR(int64_t, 2))(p_663->g_233.se5)).hi || ((((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))((((((((((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(0x52A1L, (l_237 ^= 0x4DB3L), (-1L), 4L)).z, p_663->g_75)) & ((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((p_663->g_80.y = (((*l_242) &= 18446744073709551615UL) , ((safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((((**p_34) ^= (p_32 == ((GROUP_DIVERGE(1, 1) , ((*l_190) = GROUP_DIVERGE(0, 1))) ^ (((VECTOR(int8_t, 2))(l_247.s46)).hi >= ((VECTOR(int8_t, 8))(l_248.yxxyyyyx)).s3)))) , (safe_mod_func_int16_t_s_s((((((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_251.s1cb5adcce1ad3946)).s1bc6)).z <= FAKE_DIVERGE(p_663->global_1_offset, get_global_id(1), 10)) >= (safe_sub_func_uint8_t_u_u(l_248.y, (!((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),VECTOR(uint8_t, 4),((VECTOR(uint8_t, 8))(l_254.s9a409e23)).odd, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_255.xwzzxzwz)))).even, ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(255UL, 1UL)).xxxx)).wzyywzyy))).s63, ((VECTOR(uint8_t, 16))(p_663->g_256.yyxyxxxxyyxxxxyy)).s01))).yyxx))).hi, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_257.s55da)).zxxxxxxyyzwxyxww)).s42)), ((((VECTOR(uint8_t, 16))(l_258.yxyxyyyxxxxyyyxy)).s6 < p_33) , p_33), ((VECTOR(uint8_t, 4))(255UL)), 0UL, 1UL, l_259[4][5], 0xC0L, ((VECTOR(uint8_t, 4))(255UL)), 0xA4L)).s17))).even)))) <= (-1L)) > 0x127379416BD0946EL) <= 0x2FL), p_663->l_comm_values[(safe_mod_func_uint32_t_u_u(p_663->tid, 102))]))), 0L)), p_33)) , l_251.s5))) > p_33), p_35)), (*l_174))) , l_260)) >= p_663->g_42) , (void*)0) == l_261) , l_237) ^ p_663->g_107.f2) != l_262) >= p_35), p_35, ((VECTOR(uint64_t, 4))(0UL)), 0x8BE3FEF301A20F04L, 18446744073709551607UL)).s43)).xyyyyyxyxxxxyyxx, ((VECTOR(uint64_t, 16))(18446744073709551615UL))))).sa != 0x78A22B970DB5E4E5L) , 0xAAE5C66E59A3CBAAL)), 7)))))))))), 0xD19381F1L)), p_35)) , l_260), 0x0621L, ((VECTOR(int16_t, 8))(0x6318L)), ((VECTOR(int16_t, 4))(0x5A20L)), 0x0621L, 0x62F9L)).s3242))).zyzxyxyxxxxxwwzz, ((VECTOR(int16_t, 16))(0x5FE5L))))).lo, ((VECTOR(int16_t, 8))((-1L)))))), ((VECTOR(int16_t, 8))(0x1A86L))))).s2, l_257.s6)) <= p_33);
        for (p_663->g_83 = 29; (p_663->g_83 < 46); p_663->g_83 = safe_add_func_uint32_t_u_u(p_663->g_83, 9))
        { /* block id: 89 */
            int32_t *l_267 = (void*)0;
            int32_t *l_268 = &p_663->g_42;
            int32_t *l_269[4] = {&l_188,&l_188,&l_188,&l_188};
            int i;
            ++l_271[6];
            (*p_34) = (*p_34);
            (*p_663->g_158) = (*l_174);
        }
        (*p_663->g_158) = (0x54F21E32L < ((p_663->g_71[0] & 0x3BD0L) && (-1L)));
    }
    else
    { /* block id: 95 */
        int32_t *l_274 = &p_663->g_44;
        (*p_34) = (*p_34);
        return l_274;
    }
    for (l_188 = 0; (l_188 <= 13); l_188 = safe_add_func_int64_t_s_s(l_188, 6))
    { /* block id: 101 */
        int32_t **l_285 = &p_663->g_158;
        int32_t **l_288[1][2];
        int32_t ***l_287 = &l_288[0][0];
        struct S0 **l_295 = &p_663->g_149;
        struct S0 ***l_296 = &l_213;
        struct S0 **l_298 = (void*)0;
        struct S0 ***l_297 = &l_298;
        int32_t *l_299 = &p_663->g_42;
        uint32_t l_301 = 0xA270D7B4L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_288[i][j] = (void*)0;
        }
        l_301 = (safe_add_func_uint8_t_u_u((p_663->g_279 == (void*)0), (+(((VECTOR(int16_t, 16))((safe_sub_func_int32_t_s_s(((*l_299) = ((safe_rshift_func_int16_t_s_u(((p_663->g_286 = l_285) != ((*l_287) = &p_663->g_158)), ((*l_217) = (safe_lshift_func_int16_t_s_s((((VECTOR(int64_t, 2))(0x4F18C485DBC6FC84L, (-1L))).lo > (&p_663->g_83 != l_174)), (((VECTOR(int16_t, 8))(l_291.wxwzxxww)).s2 && (((((VECTOR(int8_t, 8))(l_292.yxyxxxxx)).s6 <= ((**l_285) ^= p_35)) & (safe_rshift_func_int16_t_s_s((((((*l_296) = l_295) == ((*l_297) = &p_663->g_149)) == FAKE_DIVERGE(p_663->global_0_offset, get_global_id(0), 10)) & p_35), 2))) , 65527UL))))))) <= (*l_174))), FAKE_DIVERGE(p_663->local_0_offset, get_local_id(0), 10))), ((VECTOR(int16_t, 4))(0x2CD9L)), ((VECTOR(int16_t, 2))(0x1237L)), l_300, ((VECTOR(int16_t, 4))(1L)), ((VECTOR(int16_t, 4))(0x1AA0L)))).s6 | 0x021FL))));
    }
    (*p_34) = &l_188;
    return l_302;
}


/* ------------------------------------------ */
/* 
 * reads : p_663->g_44 p_663->g_50 p_663->g_60 p_663->g_62 p_663->g_64 p_663->g_42 p_663->g_80 p_663->g_81 p_663->g_83 p_663->g_88 p_663->g_75 p_663->g_71 p_663->g_comm_values p_663->g_2 p_663->g_107 p_663->g_112 p_663->g_115 p_663->g_116 p_663->g_129 p_663->g_114 p_663->g_148 p_663->g_147.f1 p_663->g_158 p_663->g_168
 * writes: p_663->g_42 p_663->g_44 p_663->g_50 p_663->g_71 p_663->g_75 p_663->g_64 p_663->g_83 p_663->g_80 p_663->g_114 p_663->g_107.f0 p_663->g_115 p_663->g_107.f1 p_663->g_149 p_663->g_107.f3 p_663->g_comm_values p_663->g_107.f2 p_663->g_169
 */
int16_t  func_38(uint32_t  p_39, struct S2 * p_663)
{ /* block id: 9 */
    int32_t *l_41 = &p_663->g_42;
    int32_t *l_43 = &p_663->g_44;
    int32_t *l_47 = &p_663->g_44;
    int32_t *l_48 = &p_663->g_42;
    int32_t *l_49[8] = {&p_663->g_42,&p_663->g_42,&p_663->g_42,&p_663->g_42,&p_663->g_42,&p_663->g_42,&p_663->g_42,&p_663->g_42};
    VECTOR(int8_t, 2) l_59 = (VECTOR(int8_t, 2))(0x75L, (-5L));
    VECTOR(int8_t, 2) l_61 = (VECTOR(int8_t, 2))(0x72L, (-1L));
    VECTOR(int8_t, 4) l_63 = (VECTOR(int8_t, 4))(6L, (VECTOR(int8_t, 2))(6L, (-1L)), (-1L));
    int8_t *l_76 = (void*)0;
    int8_t *l_77 = (void*)0;
    int8_t *l_78[2];
    VECTOR(int8_t, 2) l_79 = (VECTOR(int8_t, 2))(0x33L, 0x32L);
    uint32_t *l_82 = &p_663->g_83;
    int32_t **l_171 = &l_41;
    int i;
    for (i = 0; i < 2; i++)
        l_78[i] = (void*)0;
    (*l_43) ^= ((*l_41) = (safe_unary_minus_func_uint8_t_u(p_39)));
    for (p_39 = 0; (p_39 <= 4); p_39 = safe_add_func_uint64_t_u_u(p_39, 9))
    { /* block id: 14 */
        return p_39;
    }
    --p_663->g_50;
    (*l_171) = func_53(((((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 4))(l_59.yxxx)).xwyxzxyz, ((VECTOR(int8_t, 8))(p_663->g_60.xzwzwzxz)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 4))(3L, ((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 16))(0L, 0x39L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(1L, 0x6CL)), p_663->g_60.w, ((VECTOR(int8_t, 4))(l_61.xyxx)), (-6L))).even, ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(3L, 0x0DL)), 0x72L, 0x53L)).even)).yyyxxyxyyxxxxyxy, ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_663->g_62.s71)).xxyxyxyxyyyxxyyy)).sb5, ((VECTOR(int8_t, 16))(l_63.xzyzxzywxywzxxwz)).s08, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(p_663->g_64.s66)), ((VECTOR(int8_t, 8))(p_39, (p_663->g_64.s6 = func_65(p_663->g_64.s3, p_663)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(0L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_79.xxxyxxyx)).hi)).wyyzxyyywyxwzwyw)).s0fac, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_663->g_80.yyxy))))))).ywxywwwz, ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0x12L, 0x2CL, ((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(5L, 0x7CL)).yxxxxyxy)).even, ((VECTOR(int8_t, 4))(p_663->g_81.yyxw))))), ((VECTOR(int8_t, 4))((p_663->g_80.y = (p_663->g_60.y , (((((*l_82)++) && ((*l_41) = (safe_mod_func_int32_t_s_s((((VECTOR(uint32_t, 8))(p_663->g_88.sb282ffb0)).s0 == ((*l_41) , (((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 4))((safe_lshift_func_uint8_t_u_s(p_663->g_83, (safe_lshift_func_int8_t_s_u(((p_39 , p_663->g_64.s1) || 0L), p_39)))), ((VECTOR(int32_t, 2))(0x54D5C111L)), 0L)).x, 0x5D5741E9L)) , p_39) && 0x3338L))), p_663->g_44)))) & p_663->g_64.s2) >= p_663->g_75))), 2L, 0x70L, 0x52L))))).zxwzzwyx, ((VECTOR(int8_t, 8))((-4L)))))), 3L, ((VECTOR(int8_t, 4))(0x78L)), 0x2BL)).sf9)).yyyxyyxy, ((VECTOR(int8_t, 8))(0L)), ((VECTOR(int8_t, 8))(8L)))))))).s74)), 0L, (*l_41), p_39, 8L, 8L)).s67))), 0x3EL, 0x2FL)), 0x48L, 0L)).s31, ((VECTOR(int8_t, 2))(0x20L))))).xyxxxyxx)).s30))).xxxxyyyxyxyxxyxx))).lo)).s1777526660534772, ((VECTOR(int8_t, 16))(0L))))).s2195, ((VECTOR(int8_t, 4))(0x32L)), ((VECTOR(int8_t, 4))(0x36L)))))))).even)).yyxyxyyx)).s2065441210730525, ((VECTOR(int8_t, 16))(0x5AL)), ((VECTOR(int8_t, 16))(1L))))).s74, ((VECTOR(int8_t, 2))(0x7BL))))))), ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(0x3EL))))), (-1L), 0L)).odd)), ((VECTOR(int8_t, 8))(1L)), 0x70L, p_663->g_71[0], (-5L), 0x40L)).sf6))), (-1L))).zyyzyzxyyxzzwzzy, ((VECTOR(int8_t, 16))(6L))))).s19)).yyyyyyxxxyxyyxyx)).even))).even, ((VECTOR(int8_t, 4))(0x00L))))).z && p_663->g_83) || p_39), p_663->g_50, p_663->g_comm_values[p_663->tid], p_663->g_comm_values[p_663->tid], p_663->g_2, p_663);
    return p_39;
}


/* ------------------------------------------ */
/* 
 * reads : p_663->g_107 p_663->g_112 p_663->g_64 p_663->g_comm_values p_663->g_81 p_663->g_115 p_663->g_116 p_663->g_71 p_663->g_88 p_663->g_129 p_663->g_83 p_663->g_114 p_663->g_50 p_663->g_148 p_663->g_75 p_663->g_147.f1 p_663->g_158 p_663->g_44 p_663->g_168
 * writes: p_663->g_114 p_663->g_107.f0 p_663->g_115 p_663->g_107.f1 p_663->g_149 p_663->g_107.f3 p_663->g_comm_values p_663->g_44 p_663->g_107.f2 p_663->g_169
 */
int32_t * func_53(uint32_t  p_54, int32_t  p_55, int64_t  p_56, int32_t  p_57, int32_t  p_58, struct S2 * p_663)
{ /* block id: 27 */
    uint32_t l_99 = 0x13E0D8C1L;
    VECTOR(uint32_t, 2) l_110 = (VECTOR(uint32_t, 2))(4294967294UL, 1UL);
    VECTOR(uint32_t, 8) l_111 = (VECTOR(uint32_t, 8))(0xB3D635D9L, (VECTOR(uint32_t, 4))(0xB3D635D9L, (VECTOR(uint32_t, 2))(0xB3D635D9L, 0xC6434686L), 0xC6434686L), 0xC6434686L, 0xB3D635D9L, 0xC6434686L);
    uint8_t *l_113 = &p_663->g_114;
    int64_t *l_160 = (void*)0;
    int64_t *l_161 = (void*)0;
    int64_t *l_162 = (void*)0;
    int64_t *l_163 = (void*)0;
    int64_t *l_164 = (void*)0;
    int8_t l_165 = 6L;
    int32_t *l_170 = &p_663->g_2;
    int i;
    p_57 = (safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(2, 1), (-4L)));
    (*p_663->g_158) ^= ((safe_add_func_uint64_t_u_u((l_99 == p_57), ((((void*)0 == &p_57) < (((((((((p_663->g_comm_values[p_663->tid] = (safe_add_func_uint16_t_u_u(l_99, func_102(p_663->g_107, &l_99, p_54, ((*l_113) = ((((safe_mul_func_uint8_t_u_u(((((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(1UL, ((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_110.xx)).yyyy)).zyywzxzyxzyywwxz)).s8a, ((VECTOR(uint32_t, 16))(l_111.s6101610232171512)).s54))), 0xC0348559L)).even)).hi , p_663->g_112) , p_663->g_112.f2) & FAKE_DIVERGE(p_663->global_2_offset, get_global_id(2), 10)) | p_663->g_64.s3), p_663->g_comm_values[p_663->tid])) != p_663->g_107.f4) , p_663->g_81.w) && 0x55464F81L)), p_663)))) > 3UL) && p_55) | p_663->g_75) > 0x081FCDCBL) == 0x1B3C1EEC739D5C1EL) == 4L) , p_663->g_147[0].f1) <= 0x28985A425B5E6331L)) != p_663->g_71[0]))) != l_165);
    for (p_663->g_107.f2 = 0; (p_663->g_107.f2 < 26); p_663->g_107.f2++)
    { /* block id: 63 */
        (*p_663->g_168) = p_663->g_107;
    }
    return l_170;
}


/* ------------------------------------------ */
/* 
 * reads : p_663->g_42
 * writes: p_663->g_71 p_663->g_75 p_663->g_42
 */
int8_t  func_65(uint64_t  p_66, struct S2 * p_663)
{ /* block id: 18 */
    int32_t l_67 = (-3L);
    uint16_t *l_70 = &p_663->g_71[0];
    int32_t *l_72 = (void*)0;
    int32_t *l_73 = (void*)0;
    int32_t *l_74[8][8] = {{(void*)0,(void*)0,&l_67,&p_663->g_44,(void*)0,&p_663->g_44,&l_67,(void*)0},{(void*)0,(void*)0,&l_67,&p_663->g_44,(void*)0,&p_663->g_44,&l_67,(void*)0},{(void*)0,(void*)0,&l_67,&p_663->g_44,(void*)0,&p_663->g_44,&l_67,(void*)0},{(void*)0,(void*)0,&l_67,&p_663->g_44,(void*)0,&p_663->g_44,&l_67,(void*)0},{(void*)0,(void*)0,&l_67,&p_663->g_44,(void*)0,&p_663->g_44,&l_67,(void*)0},{(void*)0,(void*)0,&l_67,&p_663->g_44,(void*)0,&p_663->g_44,&l_67,(void*)0},{(void*)0,(void*)0,&l_67,&p_663->g_44,(void*)0,&p_663->g_44,&l_67,(void*)0},{(void*)0,(void*)0,&l_67,&p_663->g_44,(void*)0,&p_663->g_44,&l_67,(void*)0}};
    int i, j;
    p_663->g_42 |= (p_663->g_75 = (l_67 | ((*l_70) = ((GROUP_DIVERGE(0, 1) > ((&p_663->g_2 != (void*)0) & 0L)) | (0x40L || FAKE_DIVERGE(p_663->group_0_offset, get_group_id(0), 10))))));
    return p_66;
}


/* ------------------------------------------ */
/* 
 * reads : p_663->g_115 p_663->g_116 p_663->g_71 p_663->g_88 p_663->g_129 p_663->g_83 p_663->g_114 p_663->g_50 p_663->g_107.f1 p_663->g_148 p_663->g_107.f3
 * writes: p_663->g_107.f0 p_663->g_114 p_663->g_115 p_663->g_107.f1 p_663->g_149 p_663->g_107.f3
 */
int16_t  func_102(struct S1  p_103, uint32_t * p_104, int32_t  p_105, uint8_t  p_106, struct S2 * p_663)
{ /* block id: 30 */
    uint16_t *l_120 = &p_663->g_71[0];
    uint8_t *l_132[6][7][4] = {{{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114}},{{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114}},{{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114}},{{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114}},{{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114}},{{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114},{(void*)0,&p_663->g_114,&p_663->g_114,&p_663->g_114}}};
    int64_t l_139 = (-1L);
    int32_t l_151[9][2] = {{0x39B1E83FL,0L},{0x39B1E83FL,0L},{0x39B1E83FL,0L},{0x39B1E83FL,0L},{0x39B1E83FL,0L},{0x39B1E83FL,0L},{0x39B1E83FL,0L},{0x39B1E83FL,0L},{0x39B1E83FL,0L}};
    int i, j, k;
    if (((VECTOR(int32_t, 8))(0L, ((VECTOR(int32_t, 2))(p_663->g_115.s94)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_663->g_116.s0406)).lo)), p_663->g_71[0], 0x1322E619L, 1L)).s7)
    { /* block id: 31 */
        VECTOR(int16_t, 2) l_119 = (VECTOR(int16_t, 2))(3L, 0x2D8DL);
        VECTOR(uint32_t, 4) l_121 = (VECTOR(uint32_t, 4))(0xCC9C0103L, (VECTOR(uint32_t, 2))(0xCC9C0103L, 4294967295UL), 4294967295UL);
        uint32_t *l_122 = &p_663->g_107.f0;
        uint8_t **l_133 = &l_132[1][1][1];
        int32_t l_138 = 0x30F1BED5L;
        uint8_t *l_140 = &p_663->g_114;
        int32_t *l_141[5];
        struct S0 *l_146[6] = {(void*)0,&p_663->g_147[0],(void*)0,(void*)0,&p_663->g_147[0],(void*)0};
        uint64_t l_154[6][10] = {{0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L},{0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L},{0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L},{0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L},{0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L},{0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L,0UL,0xE5BD8F16D91DA8F8L,0xE5BD8F16D91DA8F8L}};
        int i, j;
        for (i = 0; i < 5; i++)
            l_141[i] = &p_663->g_42;
        p_663->g_115.s6 |= (((safe_mul_func_uint8_t_u_u(253UL, ((((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 4))(l_119.xxyy)).ywyyyyyz))).s5 , &p_663->g_75) == l_120))) < p_663->g_88.s6) >= (((*l_122) = ((VECTOR(uint32_t, 4))(l_121.xyzz)).y) & (safe_mul_func_uint16_t_u_u((((safe_mod_func_int64_t_s_s((((((VECTOR(uint8_t, 2))(253UL, 3UL)).lo > ((*l_140) |= (((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(p_663->g_129.s65672047)).s3, ((VECTOR(int8_t, 2))(1L, 0x24L)).lo)) & p_103.f2) , (safe_sub_func_int8_t_s_s(p_103.f2, (((!p_103.f1) ^ ((((*l_133) = l_132[4][4][0]) != ((safe_div_func_uint16_t_u_u(((l_138 = (safe_add_func_int8_t_s_s(((p_663->g_129.s1 , &p_663->g_42) == (void*)0), 0x15L))) , l_139), p_103.f4)) , (void*)0)) == 0xBBBDF83237CEF4F5L)) == p_663->g_83)))))) != 1L) == 0x2CL), p_663->g_50)) >= (-3L)) , 0x0FC8L), p_103.f2))));
        for (p_663->g_107.f1 = 0; (p_663->g_107.f1 != 17); p_663->g_107.f1 = safe_add_func_int16_t_s_s(p_663->g_107.f1, 8))
        { /* block id: 39 */
            return p_103.f2;
        }
        for (p_106 = 0; (p_106 >= 57); p_106 = safe_add_func_uint8_t_u_u(p_106, 1))
        { /* block id: 44 */
            int32_t **l_150 = &l_141[3];
            (*p_663->g_148) = l_146[4];
            (*l_150) = &p_663->g_42;
            l_151[5][1] = p_103.f0;
        }
        for (p_663->g_107.f3 = 0; (p_663->g_107.f3 < 32); p_663->g_107.f3 = safe_add_func_uint32_t_u_u(p_663->g_107.f3, 3))
        { /* block id: 51 */
            uint16_t l_155 = 0UL;
            l_155 = l_154[3][4];
        }
    }
    else
    { /* block id: 54 */
        int32_t *l_156 = &p_663->g_44;
        int32_t **l_159 = &l_156;
        (*l_159) = l_156;
        (*l_159) = p_104;
    }
    return l_151[5][1];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[59];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 59; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[59];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 59; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[102];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 102; i++)
            l_comm_values[i] = 1;
    struct S2 c_664;
    struct S2* p_663 = &c_664;
    struct S2 c_665 = {
        0x74B666A7L, // p_663->g_2
        (-10L), // p_663->g_42
        0x5BB7A2E2L, // p_663->g_44
        4UL, // p_663->g_50
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x25L), 0x25L), // p_663->g_60
        (VECTOR(int8_t, 8))(0x58L, (VECTOR(int8_t, 4))(0x58L, (VECTOR(int8_t, 2))(0x58L, (-1L)), (-1L)), (-1L), 0x58L, (-1L)), // p_663->g_62
        (VECTOR(int8_t, 8))(0x3AL, (VECTOR(int8_t, 4))(0x3AL, (VECTOR(int8_t, 2))(0x3AL, 1L), 1L), 1L, 0x3AL, 1L), // p_663->g_64
        {1UL}, // p_663->g_71
        1UL, // p_663->g_75
        (VECTOR(int8_t, 2))(0x5FL, 1L), // p_663->g_80
        (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 0x47L), 0x47L), // p_663->g_81
        0xAEF27357L, // p_663->g_83
        (VECTOR(uint32_t, 16))(0x6DC049D9L, (VECTOR(uint32_t, 4))(0x6DC049D9L, (VECTOR(uint32_t, 2))(0x6DC049D9L, 4294967288UL), 4294967288UL), 4294967288UL, 0x6DC049D9L, 4294967288UL, (VECTOR(uint32_t, 2))(0x6DC049D9L, 4294967288UL), (VECTOR(uint32_t, 2))(0x6DC049D9L, 4294967288UL), 0x6DC049D9L, 4294967288UL, 0x6DC049D9L, 4294967288UL), // p_663->g_88
        {4294967295UL,5L,4294967295UL,0x692BD296L,18446744073709551615UL,0xE86370918AE1307CL}, // p_663->g_107
        {-1L,0x2FDC658CL,0UL}, // p_663->g_112
        1UL, // p_663->g_114
        (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x08B2AD57L), 0x08B2AD57L), 0x08B2AD57L, (-6L), 0x08B2AD57L, (VECTOR(int32_t, 2))((-6L), 0x08B2AD57L), (VECTOR(int32_t, 2))((-6L), 0x08B2AD57L), (-6L), 0x08B2AD57L, (-6L), 0x08B2AD57L), // p_663->g_115
        (VECTOR(int32_t, 8))(0x71CBD15FL, (VECTOR(int32_t, 4))(0x71CBD15FL, (VECTOR(int32_t, 2))(0x71CBD15FL, 0x6233F163L), 0x6233F163L), 0x6233F163L, 0x71CBD15FL, 0x6233F163L), // p_663->g_116
        (VECTOR(int8_t, 8))(0x4DL, (VECTOR(int8_t, 4))(0x4DL, (VECTOR(int8_t, 2))(0x4DL, (-5L)), (-5L)), (-5L), 0x4DL, (-5L)), // p_663->g_129
        {{-9L,0x72C49042L,0xBAAFD22C2485C87EL}}, // p_663->g_147
        &p_663->g_147[0], // p_663->g_149
        &p_663->g_149, // p_663->g_148
        &p_663->g_44, // p_663->g_158
        {{{(void*)0,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0}},{{(void*)0,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0}},{{(void*)0,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0}},{{(void*)0,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0}},{{(void*)0,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0}},{{(void*)0,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0}},{{(void*)0,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0}},{{(void*)0,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0}}}, // p_663->g_157
        {{0xCD871682L,2L,0x85E3A436L,0xD08AE5EAL,0x226BEB426B7B25FEL,18446744073709551606UL},{0xCD871682L,2L,0x85E3A436L,0xD08AE5EAL,0x226BEB426B7B25FEL,18446744073709551606UL},{0xCD871682L,2L,0x85E3A436L,0xD08AE5EAL,0x226BEB426B7B25FEL,18446744073709551606UL},{0xCD871682L,2L,0x85E3A436L,0xD08AE5EAL,0x226BEB426B7B25FEL,18446744073709551606UL},{0xCD871682L,2L,0x85E3A436L,0xD08AE5EAL,0x226BEB426B7B25FEL,18446744073709551606UL},{0xCD871682L,2L,0x85E3A436L,0xD08AE5EAL,0x226BEB426B7B25FEL,18446744073709551606UL},{0xCD871682L,2L,0x85E3A436L,0xD08AE5EAL,0x226BEB426B7B25FEL,18446744073709551606UL},{0xCD871682L,2L,0x85E3A436L,0xD08AE5EAL,0x226BEB426B7B25FEL,18446744073709551606UL},{0xCD871682L,2L,0x85E3A436L,0xD08AE5EAL,0x226BEB426B7B25FEL,18446744073709551606UL},{0xCD871682L,2L,0x85E3A436L,0xD08AE5EAL,0x226BEB426B7B25FEL,18446744073709551606UL}}, // p_663->g_169
        &p_663->g_169[5], // p_663->g_168
        &p_663->g_42, // p_663->g_191
        (VECTOR(int64_t, 16))(0x0844DFC33572A64BL, (VECTOR(int64_t, 4))(0x0844DFC33572A64BL, (VECTOR(int64_t, 2))(0x0844DFC33572A64BL, 1L), 1L), 1L, 0x0844DFC33572A64BL, 1L, (VECTOR(int64_t, 2))(0x0844DFC33572A64BL, 1L), (VECTOR(int64_t, 2))(0x0844DFC33572A64BL, 1L), 0x0844DFC33572A64BL, 1L, 0x0844DFC33572A64BL, 1L), // p_663->g_233
        (VECTOR(uint8_t, 2))(0xDEL, 0xE1L), // p_663->g_256
        (void*)0, // p_663->g_280
        &p_663->g_280, // p_663->g_279
        (void*)0, // p_663->g_286
        {0UL,-10L,4294967295UL,0xE920F645L,1UL,0UL}, // p_663->g_303
        &p_663->g_71[0], // p_663->g_319
        0x39L, // p_663->g_355
        (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x2DL), 0x2DL), 0x2DL, 0L, 0x2DL), // p_663->g_465
        (VECTOR(int8_t, 8))(0x03L, (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, 0x5CL), 0x5CL), 0x5CL, 0x03L, 0x5CL), // p_663->g_471
        (VECTOR(uint32_t, 4))(0x8F36386DL, (VECTOR(uint32_t, 2))(0x8F36386DL, 0x8DFA9657L), 0x8DFA9657L), // p_663->g_484
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x40D9A2ECBFB99F0BL), 0x40D9A2ECBFB99F0BL), 0x40D9A2ECBFB99F0BL, 1UL, 0x40D9A2ECBFB99F0BL), // p_663->g_497
        1UL, // p_663->g_503
        65531UL, // p_663->g_511
        (VECTOR(int8_t, 8))(0x44L, (VECTOR(int8_t, 4))(0x44L, (VECTOR(int8_t, 2))(0x44L, (-1L)), (-1L)), (-1L), 0x44L, (-1L)), // p_663->g_519
        {{0x7AFC7F98B4C9D110L,0x7AFC7F98B4C9D110L,0x7AFC7F98B4C9D110L,0x7AFC7F98B4C9D110L,0x7AFC7F98B4C9D110L,0x7AFC7F98B4C9D110L,0x7AFC7F98B4C9D110L},{0x7AFC7F98B4C9D110L,0x7AFC7F98B4C9D110L,0x7AFC7F98B4C9D110L,0x7AFC7F98B4C9D110L,0x7AFC7F98B4C9D110L,0x7AFC7F98B4C9D110L,0x7AFC7F98B4C9D110L}}, // p_663->g_542
        (VECTOR(int64_t, 4))(0x520C6D30612AF8CDL, (VECTOR(int64_t, 2))(0x520C6D30612AF8CDL, (-6L)), (-6L)), // p_663->g_547
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xA8F8FBA7L), 0xA8F8FBA7L), // p_663->g_567
        (VECTOR(int32_t, 4))(0x3AFA3103L, (VECTOR(int32_t, 2))(0x3AFA3103L, (-2L)), (-2L)), // p_663->g_579
        (VECTOR(int32_t, 8))(0x330CAA16L, (VECTOR(int32_t, 4))(0x330CAA16L, (VECTOR(int32_t, 2))(0x330CAA16L, 0x718609B4L), 0x718609B4L), 0x718609B4L, 0x330CAA16L, 0x718609B4L), // p_663->g_580
        (VECTOR(uint8_t, 8))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 3UL), 3UL), 3UL, 254UL, 3UL), // p_663->g_590
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L), // p_663->g_603
        65533UL, // p_663->g_614
        {{{&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0},{&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0},{&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0}},{{&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0},{&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0},{&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0}},{{&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0},{&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0},{&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0}},{{&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0},{&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0},{&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0}},{{&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0},{&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0},{&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,&p_663->g_158,(void*)0}}}, // p_663->g_618
        &p_663->g_158, // p_663->g_619
        (void*)0, // p_663->g_633
        0xB682572CL, // p_663->g_635
        5L, // p_663->g_641
        0, // p_663->v_collective
        sequence_input[get_global_id(0)], // p_663->global_0_offset
        sequence_input[get_global_id(1)], // p_663->global_1_offset
        sequence_input[get_global_id(2)], // p_663->global_2_offset
        sequence_input[get_local_id(0)], // p_663->local_0_offset
        sequence_input[get_local_id(1)], // p_663->local_1_offset
        sequence_input[get_local_id(2)], // p_663->local_2_offset
        sequence_input[get_group_id(0)], // p_663->group_0_offset
        sequence_input[get_group_id(1)], // p_663->group_1_offset
        sequence_input[get_group_id(2)], // p_663->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 102)), permutations[0][get_linear_local_id()])), // p_663->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_664 = c_665;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_663);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_663->g_2, "p_663->g_2", print_hash_value);
    transparent_crc(p_663->g_42, "p_663->g_42", print_hash_value);
    transparent_crc(p_663->g_44, "p_663->g_44", print_hash_value);
    transparent_crc(p_663->g_50, "p_663->g_50", print_hash_value);
    transparent_crc(p_663->g_60.x, "p_663->g_60.x", print_hash_value);
    transparent_crc(p_663->g_60.y, "p_663->g_60.y", print_hash_value);
    transparent_crc(p_663->g_60.z, "p_663->g_60.z", print_hash_value);
    transparent_crc(p_663->g_60.w, "p_663->g_60.w", print_hash_value);
    transparent_crc(p_663->g_62.s0, "p_663->g_62.s0", print_hash_value);
    transparent_crc(p_663->g_62.s1, "p_663->g_62.s1", print_hash_value);
    transparent_crc(p_663->g_62.s2, "p_663->g_62.s2", print_hash_value);
    transparent_crc(p_663->g_62.s3, "p_663->g_62.s3", print_hash_value);
    transparent_crc(p_663->g_62.s4, "p_663->g_62.s4", print_hash_value);
    transparent_crc(p_663->g_62.s5, "p_663->g_62.s5", print_hash_value);
    transparent_crc(p_663->g_62.s6, "p_663->g_62.s6", print_hash_value);
    transparent_crc(p_663->g_62.s7, "p_663->g_62.s7", print_hash_value);
    transparent_crc(p_663->g_64.s0, "p_663->g_64.s0", print_hash_value);
    transparent_crc(p_663->g_64.s1, "p_663->g_64.s1", print_hash_value);
    transparent_crc(p_663->g_64.s2, "p_663->g_64.s2", print_hash_value);
    transparent_crc(p_663->g_64.s3, "p_663->g_64.s3", print_hash_value);
    transparent_crc(p_663->g_64.s4, "p_663->g_64.s4", print_hash_value);
    transparent_crc(p_663->g_64.s5, "p_663->g_64.s5", print_hash_value);
    transparent_crc(p_663->g_64.s6, "p_663->g_64.s6", print_hash_value);
    transparent_crc(p_663->g_64.s7, "p_663->g_64.s7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_663->g_71[i], "p_663->g_71[i]", print_hash_value);

    }
    transparent_crc(p_663->g_75, "p_663->g_75", print_hash_value);
    transparent_crc(p_663->g_80.x, "p_663->g_80.x", print_hash_value);
    transparent_crc(p_663->g_80.y, "p_663->g_80.y", print_hash_value);
    transparent_crc(p_663->g_81.x, "p_663->g_81.x", print_hash_value);
    transparent_crc(p_663->g_81.y, "p_663->g_81.y", print_hash_value);
    transparent_crc(p_663->g_81.z, "p_663->g_81.z", print_hash_value);
    transparent_crc(p_663->g_81.w, "p_663->g_81.w", print_hash_value);
    transparent_crc(p_663->g_83, "p_663->g_83", print_hash_value);
    transparent_crc(p_663->g_88.s0, "p_663->g_88.s0", print_hash_value);
    transparent_crc(p_663->g_88.s1, "p_663->g_88.s1", print_hash_value);
    transparent_crc(p_663->g_88.s2, "p_663->g_88.s2", print_hash_value);
    transparent_crc(p_663->g_88.s3, "p_663->g_88.s3", print_hash_value);
    transparent_crc(p_663->g_88.s4, "p_663->g_88.s4", print_hash_value);
    transparent_crc(p_663->g_88.s5, "p_663->g_88.s5", print_hash_value);
    transparent_crc(p_663->g_88.s6, "p_663->g_88.s6", print_hash_value);
    transparent_crc(p_663->g_88.s7, "p_663->g_88.s7", print_hash_value);
    transparent_crc(p_663->g_88.s8, "p_663->g_88.s8", print_hash_value);
    transparent_crc(p_663->g_88.s9, "p_663->g_88.s9", print_hash_value);
    transparent_crc(p_663->g_88.sa, "p_663->g_88.sa", print_hash_value);
    transparent_crc(p_663->g_88.sb, "p_663->g_88.sb", print_hash_value);
    transparent_crc(p_663->g_88.sc, "p_663->g_88.sc", print_hash_value);
    transparent_crc(p_663->g_88.sd, "p_663->g_88.sd", print_hash_value);
    transparent_crc(p_663->g_88.se, "p_663->g_88.se", print_hash_value);
    transparent_crc(p_663->g_88.sf, "p_663->g_88.sf", print_hash_value);
    transparent_crc(p_663->g_107.f0, "p_663->g_107.f0", print_hash_value);
    transparent_crc(p_663->g_107.f1, "p_663->g_107.f1", print_hash_value);
    transparent_crc(p_663->g_107.f2, "p_663->g_107.f2", print_hash_value);
    transparent_crc(p_663->g_107.f3, "p_663->g_107.f3", print_hash_value);
    transparent_crc(p_663->g_107.f4, "p_663->g_107.f4", print_hash_value);
    transparent_crc(p_663->g_107.f5, "p_663->g_107.f5", print_hash_value);
    transparent_crc(p_663->g_112.f0, "p_663->g_112.f0", print_hash_value);
    transparent_crc(p_663->g_112.f1, "p_663->g_112.f1", print_hash_value);
    transparent_crc(p_663->g_112.f2, "p_663->g_112.f2", print_hash_value);
    transparent_crc(p_663->g_114, "p_663->g_114", print_hash_value);
    transparent_crc(p_663->g_115.s0, "p_663->g_115.s0", print_hash_value);
    transparent_crc(p_663->g_115.s1, "p_663->g_115.s1", print_hash_value);
    transparent_crc(p_663->g_115.s2, "p_663->g_115.s2", print_hash_value);
    transparent_crc(p_663->g_115.s3, "p_663->g_115.s3", print_hash_value);
    transparent_crc(p_663->g_115.s4, "p_663->g_115.s4", print_hash_value);
    transparent_crc(p_663->g_115.s5, "p_663->g_115.s5", print_hash_value);
    transparent_crc(p_663->g_115.s6, "p_663->g_115.s6", print_hash_value);
    transparent_crc(p_663->g_115.s7, "p_663->g_115.s7", print_hash_value);
    transparent_crc(p_663->g_115.s8, "p_663->g_115.s8", print_hash_value);
    transparent_crc(p_663->g_115.s9, "p_663->g_115.s9", print_hash_value);
    transparent_crc(p_663->g_115.sa, "p_663->g_115.sa", print_hash_value);
    transparent_crc(p_663->g_115.sb, "p_663->g_115.sb", print_hash_value);
    transparent_crc(p_663->g_115.sc, "p_663->g_115.sc", print_hash_value);
    transparent_crc(p_663->g_115.sd, "p_663->g_115.sd", print_hash_value);
    transparent_crc(p_663->g_115.se, "p_663->g_115.se", print_hash_value);
    transparent_crc(p_663->g_115.sf, "p_663->g_115.sf", print_hash_value);
    transparent_crc(p_663->g_116.s0, "p_663->g_116.s0", print_hash_value);
    transparent_crc(p_663->g_116.s1, "p_663->g_116.s1", print_hash_value);
    transparent_crc(p_663->g_116.s2, "p_663->g_116.s2", print_hash_value);
    transparent_crc(p_663->g_116.s3, "p_663->g_116.s3", print_hash_value);
    transparent_crc(p_663->g_116.s4, "p_663->g_116.s4", print_hash_value);
    transparent_crc(p_663->g_116.s5, "p_663->g_116.s5", print_hash_value);
    transparent_crc(p_663->g_116.s6, "p_663->g_116.s6", print_hash_value);
    transparent_crc(p_663->g_116.s7, "p_663->g_116.s7", print_hash_value);
    transparent_crc(p_663->g_129.s0, "p_663->g_129.s0", print_hash_value);
    transparent_crc(p_663->g_129.s1, "p_663->g_129.s1", print_hash_value);
    transparent_crc(p_663->g_129.s2, "p_663->g_129.s2", print_hash_value);
    transparent_crc(p_663->g_129.s3, "p_663->g_129.s3", print_hash_value);
    transparent_crc(p_663->g_129.s4, "p_663->g_129.s4", print_hash_value);
    transparent_crc(p_663->g_129.s5, "p_663->g_129.s5", print_hash_value);
    transparent_crc(p_663->g_129.s6, "p_663->g_129.s6", print_hash_value);
    transparent_crc(p_663->g_129.s7, "p_663->g_129.s7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_663->g_147[i].f0, "p_663->g_147[i].f0", print_hash_value);
        transparent_crc(p_663->g_147[i].f1, "p_663->g_147[i].f1", print_hash_value);
        transparent_crc(p_663->g_147[i].f2, "p_663->g_147[i].f2", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_663->g_169[i].f0, "p_663->g_169[i].f0", print_hash_value);
        transparent_crc(p_663->g_169[i].f1, "p_663->g_169[i].f1", print_hash_value);
        transparent_crc(p_663->g_169[i].f2, "p_663->g_169[i].f2", print_hash_value);
        transparent_crc(p_663->g_169[i].f3, "p_663->g_169[i].f3", print_hash_value);
        transparent_crc(p_663->g_169[i].f4, "p_663->g_169[i].f4", print_hash_value);
        transparent_crc(p_663->g_169[i].f5, "p_663->g_169[i].f5", print_hash_value);

    }
    transparent_crc(p_663->g_233.s0, "p_663->g_233.s0", print_hash_value);
    transparent_crc(p_663->g_233.s1, "p_663->g_233.s1", print_hash_value);
    transparent_crc(p_663->g_233.s2, "p_663->g_233.s2", print_hash_value);
    transparent_crc(p_663->g_233.s3, "p_663->g_233.s3", print_hash_value);
    transparent_crc(p_663->g_233.s4, "p_663->g_233.s4", print_hash_value);
    transparent_crc(p_663->g_233.s5, "p_663->g_233.s5", print_hash_value);
    transparent_crc(p_663->g_233.s6, "p_663->g_233.s6", print_hash_value);
    transparent_crc(p_663->g_233.s7, "p_663->g_233.s7", print_hash_value);
    transparent_crc(p_663->g_233.s8, "p_663->g_233.s8", print_hash_value);
    transparent_crc(p_663->g_233.s9, "p_663->g_233.s9", print_hash_value);
    transparent_crc(p_663->g_233.sa, "p_663->g_233.sa", print_hash_value);
    transparent_crc(p_663->g_233.sb, "p_663->g_233.sb", print_hash_value);
    transparent_crc(p_663->g_233.sc, "p_663->g_233.sc", print_hash_value);
    transparent_crc(p_663->g_233.sd, "p_663->g_233.sd", print_hash_value);
    transparent_crc(p_663->g_233.se, "p_663->g_233.se", print_hash_value);
    transparent_crc(p_663->g_233.sf, "p_663->g_233.sf", print_hash_value);
    transparent_crc(p_663->g_256.x, "p_663->g_256.x", print_hash_value);
    transparent_crc(p_663->g_256.y, "p_663->g_256.y", print_hash_value);
    transparent_crc(p_663->g_303.f0, "p_663->g_303.f0", print_hash_value);
    transparent_crc(p_663->g_303.f1, "p_663->g_303.f1", print_hash_value);
    transparent_crc(p_663->g_303.f2, "p_663->g_303.f2", print_hash_value);
    transparent_crc(p_663->g_303.f3, "p_663->g_303.f3", print_hash_value);
    transparent_crc(p_663->g_303.f4, "p_663->g_303.f4", print_hash_value);
    transparent_crc(p_663->g_303.f5, "p_663->g_303.f5", print_hash_value);
    transparent_crc(p_663->g_355, "p_663->g_355", print_hash_value);
    transparent_crc(p_663->g_465.s0, "p_663->g_465.s0", print_hash_value);
    transparent_crc(p_663->g_465.s1, "p_663->g_465.s1", print_hash_value);
    transparent_crc(p_663->g_465.s2, "p_663->g_465.s2", print_hash_value);
    transparent_crc(p_663->g_465.s3, "p_663->g_465.s3", print_hash_value);
    transparent_crc(p_663->g_465.s4, "p_663->g_465.s4", print_hash_value);
    transparent_crc(p_663->g_465.s5, "p_663->g_465.s5", print_hash_value);
    transparent_crc(p_663->g_465.s6, "p_663->g_465.s6", print_hash_value);
    transparent_crc(p_663->g_465.s7, "p_663->g_465.s7", print_hash_value);
    transparent_crc(p_663->g_471.s0, "p_663->g_471.s0", print_hash_value);
    transparent_crc(p_663->g_471.s1, "p_663->g_471.s1", print_hash_value);
    transparent_crc(p_663->g_471.s2, "p_663->g_471.s2", print_hash_value);
    transparent_crc(p_663->g_471.s3, "p_663->g_471.s3", print_hash_value);
    transparent_crc(p_663->g_471.s4, "p_663->g_471.s4", print_hash_value);
    transparent_crc(p_663->g_471.s5, "p_663->g_471.s5", print_hash_value);
    transparent_crc(p_663->g_471.s6, "p_663->g_471.s6", print_hash_value);
    transparent_crc(p_663->g_471.s7, "p_663->g_471.s7", print_hash_value);
    transparent_crc(p_663->g_484.x, "p_663->g_484.x", print_hash_value);
    transparent_crc(p_663->g_484.y, "p_663->g_484.y", print_hash_value);
    transparent_crc(p_663->g_484.z, "p_663->g_484.z", print_hash_value);
    transparent_crc(p_663->g_484.w, "p_663->g_484.w", print_hash_value);
    transparent_crc(p_663->g_497.s0, "p_663->g_497.s0", print_hash_value);
    transparent_crc(p_663->g_497.s1, "p_663->g_497.s1", print_hash_value);
    transparent_crc(p_663->g_497.s2, "p_663->g_497.s2", print_hash_value);
    transparent_crc(p_663->g_497.s3, "p_663->g_497.s3", print_hash_value);
    transparent_crc(p_663->g_497.s4, "p_663->g_497.s4", print_hash_value);
    transparent_crc(p_663->g_497.s5, "p_663->g_497.s5", print_hash_value);
    transparent_crc(p_663->g_497.s6, "p_663->g_497.s6", print_hash_value);
    transparent_crc(p_663->g_497.s7, "p_663->g_497.s7", print_hash_value);
    transparent_crc(p_663->g_503, "p_663->g_503", print_hash_value);
    transparent_crc(p_663->g_511, "p_663->g_511", print_hash_value);
    transparent_crc(p_663->g_519.s0, "p_663->g_519.s0", print_hash_value);
    transparent_crc(p_663->g_519.s1, "p_663->g_519.s1", print_hash_value);
    transparent_crc(p_663->g_519.s2, "p_663->g_519.s2", print_hash_value);
    transparent_crc(p_663->g_519.s3, "p_663->g_519.s3", print_hash_value);
    transparent_crc(p_663->g_519.s4, "p_663->g_519.s4", print_hash_value);
    transparent_crc(p_663->g_519.s5, "p_663->g_519.s5", print_hash_value);
    transparent_crc(p_663->g_519.s6, "p_663->g_519.s6", print_hash_value);
    transparent_crc(p_663->g_519.s7, "p_663->g_519.s7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_663->g_542[i][j], "p_663->g_542[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_663->g_547.x, "p_663->g_547.x", print_hash_value);
    transparent_crc(p_663->g_547.y, "p_663->g_547.y", print_hash_value);
    transparent_crc(p_663->g_547.z, "p_663->g_547.z", print_hash_value);
    transparent_crc(p_663->g_547.w, "p_663->g_547.w", print_hash_value);
    transparent_crc(p_663->g_567.x, "p_663->g_567.x", print_hash_value);
    transparent_crc(p_663->g_567.y, "p_663->g_567.y", print_hash_value);
    transparent_crc(p_663->g_567.z, "p_663->g_567.z", print_hash_value);
    transparent_crc(p_663->g_567.w, "p_663->g_567.w", print_hash_value);
    transparent_crc(p_663->g_579.x, "p_663->g_579.x", print_hash_value);
    transparent_crc(p_663->g_579.y, "p_663->g_579.y", print_hash_value);
    transparent_crc(p_663->g_579.z, "p_663->g_579.z", print_hash_value);
    transparent_crc(p_663->g_579.w, "p_663->g_579.w", print_hash_value);
    transparent_crc(p_663->g_580.s0, "p_663->g_580.s0", print_hash_value);
    transparent_crc(p_663->g_580.s1, "p_663->g_580.s1", print_hash_value);
    transparent_crc(p_663->g_580.s2, "p_663->g_580.s2", print_hash_value);
    transparent_crc(p_663->g_580.s3, "p_663->g_580.s3", print_hash_value);
    transparent_crc(p_663->g_580.s4, "p_663->g_580.s4", print_hash_value);
    transparent_crc(p_663->g_580.s5, "p_663->g_580.s5", print_hash_value);
    transparent_crc(p_663->g_580.s6, "p_663->g_580.s6", print_hash_value);
    transparent_crc(p_663->g_580.s7, "p_663->g_580.s7", print_hash_value);
    transparent_crc(p_663->g_590.s0, "p_663->g_590.s0", print_hash_value);
    transparent_crc(p_663->g_590.s1, "p_663->g_590.s1", print_hash_value);
    transparent_crc(p_663->g_590.s2, "p_663->g_590.s2", print_hash_value);
    transparent_crc(p_663->g_590.s3, "p_663->g_590.s3", print_hash_value);
    transparent_crc(p_663->g_590.s4, "p_663->g_590.s4", print_hash_value);
    transparent_crc(p_663->g_590.s5, "p_663->g_590.s5", print_hash_value);
    transparent_crc(p_663->g_590.s6, "p_663->g_590.s6", print_hash_value);
    transparent_crc(p_663->g_590.s7, "p_663->g_590.s7", print_hash_value);
    transparent_crc(p_663->g_603.x, "p_663->g_603.x", print_hash_value);
    transparent_crc(p_663->g_603.y, "p_663->g_603.y", print_hash_value);
    transparent_crc(p_663->g_603.z, "p_663->g_603.z", print_hash_value);
    transparent_crc(p_663->g_603.w, "p_663->g_603.w", print_hash_value);
    transparent_crc(p_663->g_614, "p_663->g_614", print_hash_value);
    transparent_crc(p_663->g_635, "p_663->g_635", print_hash_value);
    transparent_crc(p_663->g_641, "p_663->g_641", print_hash_value);
    transparent_crc(p_663->v_collective, "p_663->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 59; i++)
            transparent_crc(p_663->g_special_values[i + 59 * get_linear_group_id()], "p_663->g_special_values[i + 59 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 59; i++)
            transparent_crc(p_663->l_special_values[i], "p_663->l_special_values[i]", print_hash_value);
    transparent_crc(p_663->l_comm_values[get_linear_local_id()], "p_663->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_663->g_comm_values[get_linear_group_id() * 102 + get_linear_local_id()], "p_663->g_comm_values[get_linear_group_id() * 102 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
