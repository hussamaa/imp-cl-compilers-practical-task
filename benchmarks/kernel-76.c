// --atomics 87 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 97,47,1 -l 97,1,1
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

__constant uint32_t permutations[10][97] = {
{67,22,53,55,96,34,63,68,92,75,71,32,62,69,3,17,47,39,18,35,51,45,80,61,13,95,50,59,2,60,77,48,66,31,83,44,73,9,25,20,89,56,94,40,79,43,78,11,16,91,15,90,64,70,24,88,86,42,1,0,37,4,58,52,33,27,85,6,41,14,30,7,46,76,87,36,19,26,8,29,57,81,84,10,65,12,72,54,21,38,74,28,93,5,82,23,49}, // permutation 0
{45,88,94,40,11,87,16,70,60,17,23,5,9,20,78,6,79,50,30,69,33,36,48,39,34,41,29,1,51,72,43,27,19,31,25,24,0,81,84,66,38,26,47,64,8,91,22,56,74,42,73,13,89,75,54,18,58,67,76,28,62,65,86,92,14,49,44,68,71,52,37,90,80,96,15,85,82,10,12,53,21,57,55,3,95,32,61,35,93,46,83,77,4,63,2,59,7}, // permutation 1
{89,69,35,15,67,14,71,4,64,84,26,50,42,60,81,65,32,95,18,92,79,3,21,45,7,96,53,52,87,0,83,76,27,34,25,28,57,22,38,90,73,59,70,5,11,31,20,78,43,44,41,91,8,66,85,12,9,24,77,48,82,39,16,94,23,55,62,19,80,37,17,29,63,61,86,30,58,6,1,36,10,40,49,33,68,74,46,75,2,93,88,51,13,72,47,54,56}, // permutation 2
{73,65,35,62,47,37,66,91,3,1,86,89,83,23,60,48,32,55,15,70,24,5,46,33,96,7,20,18,39,9,25,16,58,52,8,51,11,6,88,59,10,4,0,75,84,17,57,27,56,77,45,38,44,87,42,12,41,31,95,30,2,13,90,43,26,72,69,63,71,93,49,29,40,76,92,22,21,28,50,54,53,14,80,74,68,85,79,36,61,19,34,67,82,64,81,94,78}, // permutation 3
{36,86,2,49,10,42,96,8,41,24,31,64,4,37,57,14,27,38,61,68,67,3,79,84,93,40,72,81,44,88,9,12,32,83,25,54,78,35,92,28,66,71,39,22,45,46,69,30,50,26,76,13,77,53,21,74,89,95,55,48,29,65,62,60,87,58,70,18,56,16,43,0,11,80,33,23,47,19,34,91,85,82,6,15,20,59,94,5,73,7,63,90,1,51,52,17,75}, // permutation 4
{56,20,7,64,11,51,69,94,57,59,81,65,87,90,21,80,28,60,76,49,46,30,83,36,70,67,53,61,82,27,43,40,47,79,6,72,91,1,75,22,89,13,23,38,18,24,3,10,93,8,78,0,34,29,19,41,62,85,77,37,26,71,52,92,35,63,9,55,88,74,86,31,39,5,58,16,2,14,45,17,96,84,44,12,54,73,42,4,66,32,50,68,33,15,95,25,48}, // permutation 5
{4,73,89,14,60,75,29,49,20,1,19,80,57,17,37,78,93,61,16,21,52,9,67,51,42,23,30,47,90,59,26,10,3,32,39,76,8,64,94,40,62,88,46,66,25,27,35,24,83,50,56,33,28,63,77,71,13,95,74,96,15,85,65,92,82,58,11,43,22,5,86,6,48,81,70,54,44,84,31,41,38,0,87,45,36,72,18,69,7,55,91,68,2,34,79,53,12}, // permutation 6
{63,40,81,16,88,13,11,1,30,9,20,60,17,26,15,54,76,69,47,70,73,51,78,77,22,58,4,86,56,62,10,29,52,57,85,19,5,48,53,92,50,91,31,0,84,32,68,28,89,46,6,45,87,24,71,90,96,59,67,94,35,21,65,83,82,3,34,7,39,74,23,12,14,72,93,55,61,75,2,44,41,66,49,33,37,43,27,25,36,95,38,18,64,79,8,42,80}, // permutation 7
{18,55,80,53,12,4,64,33,40,70,21,61,60,91,2,77,29,74,9,58,24,6,15,19,94,81,51,36,95,68,8,47,34,66,38,96,56,0,28,54,25,65,13,42,78,43,75,37,82,92,49,5,52,72,76,3,26,39,46,11,50,62,89,59,86,90,1,7,45,67,23,10,20,41,73,84,32,30,57,35,87,48,14,44,16,71,69,63,88,27,85,17,22,79,83,93,31}, // permutation 8
{31,59,13,14,58,65,19,30,75,89,51,32,67,77,76,1,88,3,43,61,82,21,33,26,53,45,9,24,35,42,38,63,27,28,79,6,47,37,72,57,20,71,70,0,50,81,4,2,5,55,46,78,91,73,18,60,8,56,48,36,93,62,69,64,92,86,49,84,44,7,34,41,87,11,17,95,90,94,23,83,12,39,40,25,80,29,54,68,66,74,15,10,52,22,16,85,96} // permutation 9
};

// Seed: 522880828

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
   int64_t  f1;
   uint32_t  f2;
   int64_t  f3;
   int8_t  f4;
   volatile int8_t  f5;
   uint8_t  f6;
};

struct S1 {
   int64_t  f0;
   volatile int64_t  f1;
   uint32_t  f2;
};

union U2 {
   int8_t * volatile  f0;
   uint64_t  f1;
   volatile struct S1  f2;
};

union U3 {
   volatile uint32_t  f0;
   int32_t  f1;
   uint8_t  f2;
   struct S1  f3;
};

struct S4 {
    int32_t g_3[1];
    int32_t g_6;
    VECTOR(int32_t, 8) g_9;
    int8_t g_14;
    int8_t g_56;
    int8_t *g_55;
    uint64_t g_66;
    uint64_t g_68;
    uint64_t g_70;
    int32_t * volatile g_72;
    int32_t * volatile g_73;
    volatile VECTOR(uint8_t, 16) g_77;
    volatile struct S1 g_78;
    struct S1 g_92;
    uint8_t g_94;
    int32_t * volatile g_97;
    int32_t g_101;
    int32_t * volatile g_100;
    uint32_t g_125;
    uint32_t g_128;
    uint8_t g_130;
    int8_t g_139;
    uint64_t g_140[5];
    VECTOR(uint64_t, 16) g_146;
    struct S1 g_180;
    int64_t g_182;
    VECTOR(int8_t, 2) g_187;
    int16_t g_203;
    VECTOR(uint64_t, 8) g_210;
    struct S1 g_223;
    volatile struct S1 *g_224;
    uint16_t g_233;
    int32_t *g_235;
    int32_t *g_249;
    int32_t *g_250;
    union U2 g_254[5][10][4];
    union U2 *g_253;
    VECTOR(int32_t, 16) g_275;
    int32_t g_279;
    int32_t g_280;
    int32_t g_281;
    uint32_t g_282;
    int64_t g_289[2][10];
    int16_t g_290[10];
    uint16_t g_291;
    union U2 g_302;
    VECTOR(int16_t, 2) g_303;
    VECTOR(int16_t, 4) g_317;
    VECTOR(int16_t, 2) g_321;
    VECTOR(int16_t, 16) g_322;
    VECTOR(int8_t, 2) g_333;
    VECTOR(uint8_t, 2) g_339;
    int8_t g_354;
    uint64_t g_362;
    struct S1 g_368;
    struct S1 *g_367;
    struct S1 g_371[1][3][1];
    struct S1 *g_370;
    union U2 g_380;
    union U2 g_382;
    int32_t g_397;
    int16_t g_398;
    int32_t g_400;
    uint32_t g_401;
    volatile uint32_t g_461;
    volatile uint32_t *g_460;
    volatile uint32_t **g_459;
    int32_t ** volatile g_766;
    union U2 g_767;
    union U3 g_769;
    union U3 *g_771;
    union U3 ** volatile g_770;
    union U2 g_772;
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
union U2  func_1(struct S4 * p_773);
int32_t  func_11(int8_t * p_12, struct S4 * p_773);
int32_t * func_23(int32_t  p_24, struct S4 * p_773);
int8_t  func_48(uint64_t  p_49, int8_t * p_50, struct S4 * p_773);
int16_t  func_58(int32_t  p_59, uint64_t  p_60, int8_t ** p_61, struct S4 * p_773);
int32_t  func_82(uint16_t  p_83, struct S4 * p_773);
uint8_t  func_113(uint32_t  p_114, uint32_t  p_115, uint32_t  p_116, uint8_t * p_117, struct S4 * p_773);
uint64_t  func_154(uint64_t * p_155, int32_t * p_156, uint64_t  p_157, int8_t  p_158, uint32_t * p_159, struct S4 * p_773);
uint64_t * func_160(uint32_t  p_161, uint64_t  p_162, uint32_t  p_163, uint32_t * p_164, struct S4 * p_773);
int32_t * func_165(uint64_t * p_166, uint32_t * p_167, int16_t  p_168, int16_t  p_169, uint64_t  p_170, struct S4 * p_773);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_773->g_3 p_773->g_comm_values p_773->g_14 p_773->g_55 p_773->g_66 p_773->g_68 p_773->g_70 p_773->g_9 p_773->g_78 p_773->g_94 p_773->g_100 p_773->g_101 p_773->g_56 p_773->g_249 p_773->g_182 p_773->g_766 p_773->g_250 p_773->g_767 p_773->g_770 p_773->g_772
 * writes: p_773->g_3 p_773->g_6 p_773->g_14 p_773->g_55 p_773->g_66 p_773->g_68 p_773->g_70 p_773->g_9 p_773->g_78 p_773->g_94 p_773->g_101 p_773->g_130 p_773->g_182 p_773->g_235 p_773->g_771
 */
union U2  func_1(struct S4 * p_773)
{ /* block id: 4 */
    uint32_t l_2 = 4294967286UL;
    union U3 *l_768 = &p_773->g_769;
    p_773->g_3[0] &= l_2;
    for (l_2 = (-19); (l_2 >= 17); l_2 = safe_add_func_int32_t_s_s(l_2, 5))
    { /* block id: 8 */
        int8_t *l_13 = &p_773->g_14;
        for (p_773->g_6 = (-23); (p_773->g_6 > (-5)); ++p_773->g_6)
        { /* block id: 11 */
            int32_t *l_10 = &p_773->g_3[0];
            (*l_10) = ((VECTOR(int32_t, 8))(p_773->g_9.s15001051)).s5;
            (*p_773->g_250) = func_11(l_13, p_773);
            return p_773->g_767;
        }
        (*p_773->g_770) = l_768;
    }
    return p_773->g_772;
}


/* ------------------------------------------ */
/* 
 * reads : p_773->g_3 p_773->g_comm_values p_773->g_14 p_773->g_55 p_773->g_66 p_773->g_68 p_773->g_70 p_773->g_9 p_773->g_77 p_773->g_78 p_773->g_94 p_773->g_100 p_773->g_101 p_773->g_56 p_773->g_249 p_773->g_125 p_773->g_182 p_773->g_766 p_773->g_250
 * writes: p_773->g_3 p_773->g_14 p_773->g_55 p_773->g_66 p_773->g_68 p_773->g_70 p_773->g_9 p_773->g_78 p_773->g_94 p_773->g_101 p_773->g_125 p_773->g_130 p_773->g_182 p_773->g_235
 */
int32_t  func_11(int8_t * p_12, struct S4 * p_773)
{ /* block id: 13 */
    uint64_t l_15 = 0x50D8AF8716B5B384L;
    int32_t *l_16 = (void*)0;
    int32_t *l_17 = (void*)0;
    int32_t *l_18 = &p_773->g_3[0];
    int32_t *l_19 = (void*)0;
    int32_t *l_20 = (void*)0;
    int32_t *l_21 = (void*)0;
    int32_t l_22[10] = {0x09495116L,0x09495116L,0x09495116L,0x09495116L,0x09495116L,0x09495116L,0x09495116L,0x09495116L,0x09495116L,0x09495116L};
    int i;
    l_22[3] = ((*l_18) &= l_15);
    (*p_773->g_766) = func_23(((void*)0 == &l_22[3]), p_773);
    return (*p_773->g_250);
}


/* ------------------------------------------ */
/* 
 * reads : p_773->g_3 p_773->g_comm_values p_773->g_14 p_773->g_55 p_773->g_66 p_773->g_68 p_773->g_70 p_773->g_9 p_773->g_77 p_773->g_78 p_773->g_94 p_773->g_100 p_773->g_101 p_773->g_56 p_773->g_249 p_773->g_125 p_773->g_182
 * writes: p_773->g_14 p_773->g_55 p_773->g_66 p_773->g_68 p_773->g_70 p_773->g_9 p_773->g_78 p_773->g_94 p_773->g_101 p_773->g_125 p_773->g_130 p_773->g_182 p_773->g_3
 */
int32_t * func_23(int32_t  p_24, struct S4 * p_773)
{ /* block id: 16 */
    int32_t *l_26 = &p_773->g_3[0];
    int32_t l_31 = 0x50D4A498L;
    int32_t l_32 = (-8L);
    int32_t l_33 = 0x35C02AC6L;
    int32_t l_34 = 0x5CC21D2CL;
    int32_t l_35 = 0x4A2A4289L;
    int32_t l_36 = 9L;
    int32_t l_37 = 0x72FC99F1L;
    int32_t l_38 = 0x64AA2297L;
    int32_t l_39 = 0x1F80B5C3L;
    int8_t *l_53 = (void*)0;
    int8_t *l_54 = &p_773->g_14;
    int8_t **l_57 = &l_53;
    VECTOR(int16_t, 16) l_64 = (VECTOR(int16_t, 16))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0L), 0L), 0L, 2L, 0L, (VECTOR(int16_t, 2))(2L, 0L), (VECTOR(int16_t, 2))(2L, 0L), 2L, 0L, 2L, 0L);
    uint64_t *l_65 = &p_773->g_66;
    uint64_t *l_67 = &p_773->g_68;
    uint64_t *l_69 = &p_773->g_70;
    uint8_t l_484 = 0x2FL;
    int i;
    if ((safe_unary_minus_func_int32_t_s(p_773->g_3[0])))
    { /* block id: 17 */
        return l_26;
    }
    else
    { /* block id: 19 */
        int32_t *l_27 = &p_773->g_3[0];
        int32_t *l_28 = &p_773->g_3[0];
        int32_t *l_29 = (void*)0;
        int32_t *l_30[1][4][8] = {{{&p_773->g_6,&p_773->g_6,&p_773->g_3[0],&p_773->g_3[0],(void*)0,&p_773->g_3[0],&p_773->g_3[0],&p_773->g_6},{&p_773->g_6,&p_773->g_6,&p_773->g_3[0],&p_773->g_3[0],(void*)0,&p_773->g_3[0],&p_773->g_3[0],&p_773->g_6},{&p_773->g_6,&p_773->g_6,&p_773->g_3[0],&p_773->g_3[0],(void*)0,&p_773->g_3[0],&p_773->g_3[0],&p_773->g_6},{&p_773->g_6,&p_773->g_6,&p_773->g_3[0],&p_773->g_3[0],(void*)0,&p_773->g_3[0],&p_773->g_3[0],&p_773->g_6}}};
        uint32_t l_40 = 1UL;
        int i, j, k;
        ++l_40;
        if ((atomic_inc(&p_773->l_atomic_input[62]) == 6))
        { /* block id: 22 */
            uint8_t l_43 = 0xA1L;
            l_43 = 0x4A3B757AL;
            unsigned int result = 0;
            result += l_43;
            atomic_add(&p_773->l_special_values[62], result);
        }
        else
        { /* block id: 24 */
            (1 + 1);
        }
    }
    (*l_26) = ((safe_mod_func_int16_t_s_s((*l_26), (((safe_mul_func_int8_t_s_s(func_48((((*l_54) ^= (safe_rshift_func_uint16_t_u_s(p_773->g_comm_values[p_773->tid], 10))) >= ((((l_54 == ((*l_57) = (p_773->g_55 = p_773->g_55))) , ((func_58((*l_26), ((*l_69) ^= ((*l_67) |= ((*l_65) |= (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 4))(l_64.s7ca3)).xxwzwxyzwyywzyyx, ((VECTOR(int16_t, 2))(7L, (-9L))).xxxxxxxyyxyyxxyx))).sb, 0x56DBL))))), &l_53, p_773) , (safe_mod_func_uint64_t_u_u((((VECTOR(uint8_t, 16))(p_773->g_77.sf453539cac122870)).s8 & 0x40L), (*l_26)))) && p_24)) == 0x4088AFD6L) >= p_773->g_3[0])), &p_773->g_56, p_773), l_484)) ^ p_24) && p_24))) , p_24);
    (*l_26) &= p_24;
    if ((atomic_inc(&p_773->g_atomic_input[87 * get_linear_group_id() + 10]) == 6))
    { /* block id: 204 */
        int32_t l_485 = 0x74D30234L;
        uint8_t l_519 = 1UL;
        uint8_t l_520[6] = {0UL,0x1FL,0UL,0UL,0x1FL,0UL};
        int32_t *l_521 = (void*)0;
        VECTOR(int32_t, 8) l_760 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0L), 0L), 0L, 7L, 0L);
        union U3 l_761 = {0UL};/* VOLATILE GLOBAL l_761 */
        union U2 *l_762 = (void*)0;
        union U2 l_764[10] = {{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}};
        union U2 *l_763[8] = {&l_764[4],&l_764[4],&l_764[4],&l_764[4],&l_764[4],&l_764[4],&l_764[4],&l_764[4]};
        union U2 *l_765[5][3] = {{&l_764[4],&l_764[4],&l_764[4]},{&l_764[4],&l_764[4],&l_764[4]},{&l_764[4],&l_764[4],&l_764[4]},{&l_764[4],&l_764[4],&l_764[4]},{&l_764[4],&l_764[4],&l_764[4]}};
        int i, j;
        for (l_485 = 0; (l_485 != 4); l_485 = safe_add_func_uint8_t_u_u(l_485, 3))
        { /* block id: 207 */
            VECTOR(int32_t, 8) l_488 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1895F3ACL), 0x1895F3ACL), 0x1895F3ACL, 1L, 0x1895F3ACL);
            VECTOR(int32_t, 16) l_489 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x01B01A56L), 0x01B01A56L), 0x01B01A56L, (-1L), 0x01B01A56L, (VECTOR(int32_t, 2))((-1L), 0x01B01A56L), (VECTOR(int32_t, 2))((-1L), 0x01B01A56L), (-1L), 0x01B01A56L, (-1L), 0x01B01A56L);
            VECTOR(int32_t, 4) l_490 = (VECTOR(int32_t, 4))(0x5621BA13L, (VECTOR(int32_t, 2))(0x5621BA13L, 0x3E656177L), 0x3E656177L);
            VECTOR(int32_t, 4) l_491 = (VECTOR(int32_t, 4))(0x679AAB1DL, (VECTOR(int32_t, 2))(0x679AAB1DL, 0x65AC90B9L), 0x65AC90B9L);
            uint8_t l_492 = 0xD1L;
            uint64_t l_493 = 18446744073709551606UL;
            int32_t l_494 = 0x4A8A5501L;
            int i;
            l_492 &= ((VECTOR(int32_t, 8))(0x3ADEF4DCL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_488.s42)).xxyy)), ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(0x56ECF8EFL, 0x4CF5338BL)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_489.s08)))), ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))(l_490.yxxxwwyzyyxwzxzw)), ((VECTOR(int32_t, 16))(l_491.wzwzzzwzzwxyywyz))))).s0f))), 8L)).s5;
            l_494 |= l_493;
            for (l_491.y = 0; (l_491.y != 18); l_491.y = safe_add_func_uint64_t_u_u(l_491.y, 1))
            { /* block id: 212 */
                int16_t l_497 = 0x6365L;
                if (l_497)
                { /* block id: 213 */
                    uint32_t l_498 = 0x0EF61E32L;
                    VECTOR(int32_t, 16) l_513 = (VECTOR(int32_t, 16))(0x7A3995F6L, (VECTOR(int32_t, 4))(0x7A3995F6L, (VECTOR(int32_t, 2))(0x7A3995F6L, (-10L)), (-10L)), (-10L), 0x7A3995F6L, (-10L), (VECTOR(int32_t, 2))(0x7A3995F6L, (-10L)), (VECTOR(int32_t, 2))(0x7A3995F6L, (-10L)), 0x7A3995F6L, (-10L), 0x7A3995F6L, (-10L));
                    int16_t l_514 = 0x661BL;
                    int32_t *l_515 = (void*)0;
                    int i;
                    if (((VECTOR(int32_t, 8))(l_498, (-5L), (l_488.s7 = ((VECTOR(int32_t, 2))((-7L), 0x2A1176FCL)).lo), ((VECTOR(int32_t, 2))(9L, 0x0DFBC698L)), (-1L), 0x3E5DE054L, 1L)).s0)
                    { /* block id: 215 */
                        int32_t l_499 = 0x52985154L;
                        int64_t l_500 = 6L;
                        int64_t l_501[10][7] = {{1L,3L,0x6410E499051D85E3L,0x4DE96E97046417AEL,1L,0x19CF55E90683D84EL,1L},{1L,3L,0x6410E499051D85E3L,0x4DE96E97046417AEL,1L,0x19CF55E90683D84EL,1L},{1L,3L,0x6410E499051D85E3L,0x4DE96E97046417AEL,1L,0x19CF55E90683D84EL,1L},{1L,3L,0x6410E499051D85E3L,0x4DE96E97046417AEL,1L,0x19CF55E90683D84EL,1L},{1L,3L,0x6410E499051D85E3L,0x4DE96E97046417AEL,1L,0x19CF55E90683D84EL,1L},{1L,3L,0x6410E499051D85E3L,0x4DE96E97046417AEL,1L,0x19CF55E90683D84EL,1L},{1L,3L,0x6410E499051D85E3L,0x4DE96E97046417AEL,1L,0x19CF55E90683D84EL,1L},{1L,3L,0x6410E499051D85E3L,0x4DE96E97046417AEL,1L,0x19CF55E90683D84EL,1L},{1L,3L,0x6410E499051D85E3L,0x4DE96E97046417AEL,1L,0x19CF55E90683D84EL,1L},{1L,3L,0x6410E499051D85E3L,0x4DE96E97046417AEL,1L,0x19CF55E90683D84EL,1L}};
                        uint8_t l_502 = 0x96L;
                        VECTOR(int32_t, 8) l_505 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x54CF1724L), 0x54CF1724L), 0x54CF1724L, (-1L), 0x54CF1724L);
                        int i, j;
                        ++l_502;
                        l_488.s2 ^= ((VECTOR(int32_t, 16))(l_505.s1267430737424727)).sa;
                    }
                    else
                    { /* block id: 218 */
                        VECTOR(int32_t, 4) l_506 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 2L), 2L);
                        int64_t l_507 = (-9L);
                        union U2 l_509 = {0};/* VOLATILE GLOBAL l_509 */
                        union U2 *l_508 = &l_509;
                        union U2 *l_510 = (void*)0;
                        int32_t *l_511 = (void*)0;
                        int32_t *l_512[5][2];
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_512[i][j] = (void*)0;
                        }
                        l_490.z = (l_507 ^= (l_489.sf &= ((VECTOR(int32_t, 16))(l_506.xzyxzxzxxxyyyywy)).s6));
                        l_510 = l_508;
                        l_512[3][0] = l_511;
                    }
                    l_514 = ((VECTOR(int32_t, 4))(l_513.s2e98)).x;
                    l_515 = (void*)0;
                }
                else
                { /* block id: 227 */
                    uint32_t l_516[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_516[i] = 4294967288UL;
                    ++l_516[0];
                }
            }
        }
        l_521 = (l_519 , (l_520[4] , (void*)0));
        for (l_520[2] = 1; (l_520[2] <= 54); l_520[2]++)
        { /* block id: 235 */
            int8_t l_524 = 7L;
            int64_t l_614 = 0x32D544666EBB9987L;
            union U3 l_693 = {0xC0A6E3E0L};/* VOLATILE GLOBAL l_693 */
            union U3 *l_692[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            union U3 *l_694 = &l_693;
            int32_t l_695 = 0x46A9CD8BL;
            int i, j;
            if (l_524)
            { /* block id: 236 */
                uint8_t l_525 = 0xA6L;
                int64_t l_526 = (-3L);
                uint8_t l_527 = 0xDEL;
                int32_t l_530[4] = {0x2C892489L,0x2C892489L,0x2C892489L,0x2C892489L};
                uint32_t l_531 = 4294967286UL;
                uint32_t l_532 = 0x1FD5A42BL;
                uint32_t l_533[1][2];
                int32_t l_534 = 0x46D06BB9L;
                VECTOR(int8_t, 16) l_535 = (VECTOR(int8_t, 16))(2L, (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0x41L), 0x41L), 0x41L, 2L, 0x41L, (VECTOR(int8_t, 2))(2L, 0x41L), (VECTOR(int8_t, 2))(2L, 0x41L), 2L, 0x41L, 2L, 0x41L);
                VECTOR(int8_t, 16) l_536 = (VECTOR(int8_t, 16))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x14L), 0x14L), 0x14L, (-3L), 0x14L, (VECTOR(int8_t, 2))((-3L), 0x14L), (VECTOR(int8_t, 2))((-3L), 0x14L), (-3L), 0x14L, (-3L), 0x14L);
                int64_t l_537 = (-7L);
                uint8_t l_538[10][3] = {{0x04L,3UL,0x04L},{0x04L,3UL,0x04L},{0x04L,3UL,0x04L},{0x04L,3UL,0x04L},{0x04L,3UL,0x04L},{0x04L,3UL,0x04L},{0x04L,3UL,0x04L},{0x04L,3UL,0x04L},{0x04L,3UL,0x04L},{0x04L,3UL,0x04L}};
                int64_t l_539 = 0x0B3EDB47F715C8DBL;
                int32_t l_540 = 0x2A3A6CAAL;
                uint64_t l_541 = 0xB43B4A65DC183FE7L;
                uint16_t l_542 = 0x6007L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_533[i][j] = 2UL;
                }
                l_485 &= l_525;
                ++l_527;
                l_541 ^= (l_540 = ((VECTOR(int32_t, 16))((-9L), (l_485 &= l_530[0]), 0x5710D56AL, (-8L), l_531, 9L, (l_532 , 0L), l_533[0][0], 0x57CA1BD2L, l_534, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(0L, (-4L))).xyxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x55DC21CEL, (((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 4))(l_535.s5fab)).lo, ((VECTOR(int8_t, 4))(l_536.s8658)).odd))).xyyyyxxx)).s0 , (((l_539 = (l_538[8][0] = (l_537 = 0x6E46L))) , (-1L)) , l_540)), 0x66BF2508L, ((VECTOR(int32_t, 2))(1L)), 0x49D9EE0DL, ((VECTOR(int32_t, 4))((-3L))), ((VECTOR(int32_t, 4))(0L)), 0x710EBD27L, 1L)).s55)).yyxy))), 0x40528EC2L, 9L)).s3);
                if (l_542)
                { /* block id: 245 */
                    VECTOR(int32_t, 8) l_543 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x16A3A8ABL), 0x16A3A8ABL), 0x16A3A8ABL, 0L, 0x16A3A8ABL);
                    uint32_t l_544 = 0x1E085163L;
                    int16_t l_545 = 0x696DL;
                    int64_t l_546 = 0L;
                    int64_t l_547 = 0x672C7B2055C3B75EL;
                    int i;
                    l_540 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_543.s64)).yyyy)).y;
                    l_547 = (l_485 = (l_544 , (l_546 = (l_543.s4 = l_545))));
                    for (l_546 = 0; (l_546 > (-20)); l_546 = safe_sub_func_int64_t_s_s(l_546, 8))
                    { /* block id: 253 */
                        int16_t l_550 = 0x25A3L;
                        uint64_t l_551 = 18446744073709551612UL;
                        int16_t l_554 = 0x6E08L;
                        int8_t *l_556 = (void*)0;
                        int8_t **l_555 = &l_556;
                        int8_t **l_557[10] = {&l_556,&l_556,&l_556,&l_556,&l_556,&l_556,&l_556,&l_556,&l_556,&l_556};
                        int i;
                        ++l_551;
                        l_540 = (l_485 = ((VECTOR(int32_t, 4))(3L, (l_543.s2 = l_554), (-4L), 0L)).z);
                        l_557[6] = l_555;
                    }
                }
                else
                { /* block id: 260 */
                    int32_t l_558 = 0L;
                    uint8_t l_559 = 9UL;
                    int8_t l_562 = 1L;
                    uint16_t l_563 = 0UL;
                    l_559 = l_558;
                    for (l_558 = 0; (l_558 <= 4); ++l_558)
                    { /* block id: 264 */
                        l_540 &= ((VECTOR(int32_t, 2))(0x77284FCBL, (-1L))).hi;
                    }
                    l_485 = (l_562 , l_563);
                }
            }
            else
            { /* block id: 269 */
                uint8_t l_564 = 0UL;
                if (l_564)
                { /* block id: 270 */
                    int32_t l_565 = 0x08AF764AL;
                    union U3 l_583 = {0x9C000E51L};/* VOLATILE GLOBAL l_583 */
                    union U3 *l_582 = &l_583;
                    for (l_565 = 0; (l_565 == (-19)); l_565 = safe_sub_func_uint8_t_u_u(l_565, 1))
                    { /* block id: 273 */
                        int32_t *l_568 = (void*)0;
                        int32_t l_570 = (-1L);
                        int32_t *l_569 = &l_570;
                        VECTOR(int32_t, 4) l_571 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 1L), 1L);
                        struct S1 l_573[7] = {{4L,0x3C0F66936A02B3E3L,0x60A51EEEL},{4L,0x3C0F66936A02B3E3L,0x60A51EEEL},{4L,0x3C0F66936A02B3E3L,0x60A51EEEL},{4L,0x3C0F66936A02B3E3L,0x60A51EEEL},{4L,0x3C0F66936A02B3E3L,0x60A51EEEL},{4L,0x3C0F66936A02B3E3L,0x60A51EEEL},{4L,0x3C0F66936A02B3E3L,0x60A51EEEL}};
                        struct S1 *l_572 = &l_573[2];
                        struct S1 *l_574 = &l_573[6];
                        struct S1 *l_575 = &l_573[2];
                        int8_t l_576 = (-10L);
                        int64_t l_577 = 0x522300FC23C7B043L;
                        int64_t l_578 = 1L;
                        uint32_t l_579 = 0xD10D8582L;
                        int i;
                        l_569 = l_568;
                        l_575 = (((VECTOR(int32_t, 2))(l_571.wz)).lo , (l_574 = l_572));
                        l_485 ^= l_576;
                        l_579--;
                    }
                    l_582 = (void*)0;
                }
                else
                { /* block id: 281 */
                    int8_t l_584 = (-1L);
                    int32_t l_608 = (-2L);
                    int32_t *l_607 = &l_608;
                    if (l_584)
                    { /* block id: 282 */
                        uint32_t l_585[9][2][2] = {{{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL}},{{0UL,0UL},{0UL,0UL}}};
                        VECTOR(int32_t, 8) l_588 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x0DEC7B5EL), 0x0DEC7B5EL), 0x0DEC7B5EL, (-6L), 0x0DEC7B5EL);
                        int32_t l_589 = 0x7EC89643L;
                        int32_t *l_590 = (void*)0;
                        int32_t *l_591 = (void*)0;
                        int32_t *l_592[9][4];
                        int i, j, k;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 4; j++)
                                l_592[i][j] = (void*)0;
                        }
                        l_585[2][1][1]++;
                        l_589 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_588.s5412212566777036)).odd)).s3;
                        l_485 = 7L;
                        l_592[4][1] = (l_591 = (l_521 = l_590));
                    }
                    else
                    { /* block id: 289 */
                        int64_t l_593 = 0x28EEE3CC619419C5L;
                        VECTOR(int32_t, 4) l_594 = (VECTOR(int32_t, 4))(0x6EC776B1L, (VECTOR(int32_t, 2))(0x6EC776B1L, 1L), 1L);
                        uint16_t l_595 = 65535UL;
                        int64_t l_596[3][10][8] = {{{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L},{1L,1L,1L,1L,1L,1L,1L,1L}}};
                        uint8_t l_597 = 0x17L;
                        int64_t l_598 = 3L;
                        union U2 l_600[6][7][6] = {{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0}}}};
                        union U2 *l_599 = &l_600[2][6][3];
                        union U2 *l_601[2][5] = {{&l_600[0][4][2],&l_600[0][4][2],&l_600[0][4][2],&l_600[0][4][2],&l_600[0][4][2]},{&l_600[0][4][2],&l_600[0][4][2],&l_600[0][4][2],&l_600[0][4][2],&l_600[0][4][2]}};
                        union U2 *l_602 = &l_600[5][3][5];
                        uint32_t l_603 = 0x5381B195L;
                        VECTOR(int32_t, 16) l_604 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
                        int32_t l_605 = 5L;
                        int8_t l_606 = 0x77L;
                        int i, j, k;
                        l_598 = (l_597 = (l_593 , (l_485 &= ((l_595 |= l_594.w) , (l_596[1][7][3] = ((VECTOR(int32_t, 2))(0x2CF5A64AL, 8L)).hi)))));
                        l_602 = (l_601[0][2] = (l_599 = (void*)0));
                        l_606 |= (l_605 = (l_485 = ((l_603 = GROUP_DIVERGE(0, 1)) , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_604.sbb524e32)).s56)).hi)));
                    }
                    l_521 = l_607;
                    for (l_608 = 0; (l_608 < (-15)); --l_608)
                    { /* block id: 306 */
                        int32_t l_612 = 0x3087FEDAL;
                        int32_t *l_611 = &l_612;
                        int32_t *l_613[2][3][3] = {{{&l_612,&l_612,&l_612},{&l_612,&l_612,&l_612},{&l_612,&l_612,&l_612}},{{&l_612,&l_612,&l_612},{&l_612,&l_612,&l_612},{&l_612,&l_612,&l_612}}};
                        int i, j, k;
                        l_611 = (void*)0;
                        l_607 = l_613[1][2][0];
                    }
                }
            }
            if (l_614)
            { /* block id: 312 */
                struct S0 l_616 = {4294967290UL,3L,0xE7B4177AL,0L,0x0CL,8L,250UL};/* VOLATILE GLOBAL l_616 */
                struct S0 *l_615 = &l_616;
                VECTOR(int32_t, 16) l_617 = (VECTOR(int32_t, 16))(0x7083CBA3L, (VECTOR(int32_t, 4))(0x7083CBA3L, (VECTOR(int32_t, 2))(0x7083CBA3L, 0L), 0L), 0L, 0x7083CBA3L, 0L, (VECTOR(int32_t, 2))(0x7083CBA3L, 0L), (VECTOR(int32_t, 2))(0x7083CBA3L, 0L), 0x7083CBA3L, 0L, 0x7083CBA3L, 0L);
                uint8_t l_668 = 1UL;
                int8_t l_671 = 0x26L;
                int i;
                l_615 = (void*)0;
                if (((VECTOR(int32_t, 8))(0x6AF01AEAL, 0L, ((VECTOR(int32_t, 4))(l_617.s5aab)), 0x0662068DL, 7L)).s6)
                { /* block id: 314 */
                    int32_t l_618 = 9L;
                    int64_t l_619[3];
                    union U3 l_620[4] = {{0xB9367A9AL},{0xB9367A9AL},{0xB9367A9AL},{0xB9367A9AL}};
                    union U3 l_621 = {7UL};/* VOLATILE GLOBAL l_621 */
                    uint32_t l_622 = 5UL;
                    uint8_t l_628 = 0UL;
                    uint16_t l_629 = 5UL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_619[i] = 0x2C62F9AB2027DD87L;
                    if (((l_618 , (l_619[2] , (l_620[1] , l_621))) , l_622))
                    { /* block id: 315 */
                        struct S0 l_623 = {0UL,-10L,4294967295UL,5L,0x4BL,0x16L,0x81L};/* VOLATILE GLOBAL l_623 */
                        struct S1 l_624 = {-1L,6L,4294967290UL};/* VOLATILE GLOBAL l_624 */
                        l_623 = l_623;
                        l_621.f3 = l_624;
                    }
                    else
                    { /* block id: 318 */
                        int32_t l_626 = 0x6BC629ACL;
                        int32_t *l_625 = &l_626;
                        int32_t *l_627 = (void*)0;
                        l_521 = l_625;
                        l_521 = (void*)0;
                        l_521 = l_627;
                    }
                    if ((l_617.s0 &= (l_629 = l_628)))
                    { /* block id: 325 */
                        uint32_t **l_630 = (void*)0;
                        l_630 = (void*)0;
                    }
                    else
                    { /* block id: 327 */
                        struct S1 l_631 = {0x672E45EB86A71F3FL,-1L,4294967292UL};/* VOLATILE GLOBAL l_631 */
                        struct S0 l_632 = {0x81BE95CAL,0x26CA386CA4E442A0L,5UL,-1L,-1L,-4L,0x94L};/* VOLATILE GLOBAL l_632 */
                        struct S0 l_633 = {4294967292UL,0L,0xC3525F6EL,-7L,0x77L,0x51L,0x9CL};/* VOLATILE GLOBAL l_633 */
                        VECTOR(int32_t, 16) l_634 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
                        int8_t l_635[8] = {1L,(-4L),1L,1L,(-4L),1L,1L,(-4L)};
                        VECTOR(int32_t, 8) l_636 = (VECTOR(int32_t, 8))(0x114166A7L, (VECTOR(int32_t, 4))(0x114166A7L, (VECTOR(int32_t, 2))(0x114166A7L, (-1L)), (-1L)), (-1L), 0x114166A7L, (-1L));
                        uint64_t l_637 = 0x22A4E13B45E94285L;
                        int16_t l_638 = 4L;
                        int32_t l_639 = 0L;
                        int32_t l_640 = 0L;
                        int8_t l_641 = 0x29L;
                        int64_t l_642 = (-1L);
                        int8_t l_643 = 0x4AL;
                        VECTOR(uint32_t, 8) l_646 = (VECTOR(uint32_t, 8))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 5UL), 5UL), 5UL, 4UL, 5UL);
                        uint64_t l_647 = 18446744073709551606UL;
                        uint32_t l_648 = 9UL;
                        VECTOR(int32_t, 2) l_649 = (VECTOR(int32_t, 2))((-1L), (-7L));
                        int32_t l_650 = 1L;
                        int8_t l_651 = 0x46L;
                        int16_t l_652 = 0x2A53L;
                        int16_t l_653 = 0x5380L;
                        uint16_t l_654 = 3UL;
                        int64_t l_655 = 0x0875302040F4F157L;
                        int32_t l_656 = 1L;
                        int32_t l_657 = 0x5E096BC6L;
                        int8_t l_658 = 1L;
                        int i;
                        l_620[1].f3 = l_631;
                        l_633 = l_632;
                        l_658 |= (l_485 = (l_617.se &= ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(l_634.s7162eb88)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(4L, ((VECTOR(int32_t, 2))(0x762E1990L, 0x648553C1L)), (-1L), ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))((l_654 |= ((VECTOR(int32_t, 16))((l_620[1].f1 = (l_634.s1 = l_635[2])), ((VECTOR(int32_t, 2))(l_636.s66)), (l_638 = l_637), ((((l_634.s8 = (l_640 |= ((l_637++) , 0x18004607L))) , ((VECTOR(uint32_t, 16))(l_646.s7723602553635164)).sb) , ((l_524 &= l_647) , l_648)) , (l_634.s1 &= ((l_649.y , (l_651 = l_650)) , (l_653 = l_652)))), ((VECTOR(int32_t, 4))((-1L))), 1L, ((VECTOR(int32_t, 4))((-1L))), 0x325E7478L, 5L)).sb), l_655, (-8L), ((VECTOR(int32_t, 4))(0x6B322DABL)), 0x46E8A16AL, l_656, 6L, ((VECTOR(int32_t, 4))(0L)), 0x1A4DFEBEL, 0x6061CF00L)).s1328, ((VECTOR(int32_t, 4))(1L))))), ((VECTOR(int32_t, 2))((-3L))), ((VECTOR(int32_t, 2))(0x207761BFL)), l_657, (-10L), 0x2532CC6DL, 0x6A0846ABL)).sbc)).xxyxxyxy))).s5));
                    }
                }
                else
                { /* block id: 345 */
                    union U3 l_660 = {1UL};/* VOLATILE GLOBAL l_660 */
                    union U3 *l_659 = &l_660;
                    l_659 = l_659;
                    for (l_660.f3.f2 = (-28); (l_660.f3.f2 <= 44); l_660.f3.f2 = safe_add_func_uint16_t_u_u(l_660.f3.f2, 6))
                    { /* block id: 349 */
                        int64_t l_663 = 0x69F0B6799FDC121FL;
                        int8_t l_664 = (-1L);
                        uint32_t l_665 = 0x5C89A460L;
                        l_617.s2 = l_663;
                        l_617.s1 = 0x35610BE7L;
                        --l_665;
                    }
                }
                l_668--;
                l_617.s6 ^= l_671;
            }
            else
            { /* block id: 357 */
                int32_t l_672 = 0L;
                VECTOR(uint64_t, 4) l_685 = (VECTOR(uint64_t, 4))(0xE8BD9B33D0D5CAD8L, (VECTOR(uint64_t, 2))(0xE8BD9B33D0D5CAD8L, 0x7316BE48E941699BL), 0x7316BE48E941699BL);
                struct S0 l_686 = {0xEFBA4245L,0x7448BE800E144D5BL,0x7AEB30D9L,0L,1L,0x42L,0x1DL};/* VOLATILE GLOBAL l_686 */
                VECTOR(int8_t, 4) l_687 = (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x28L), 0x28L);
                union U2 l_688 = {0};/* VOLATILE GLOBAL l_688 */
                struct S0 l_689 = {0xA53C01A2L,1L,4294967295UL,0x024D92F79DC8F307L,0x08L,0x2CL,0x61L};/* VOLATILE GLOBAL l_689 */
                VECTOR(int32_t, 16) l_690 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x2E0FD203L), 0x2E0FD203L), 0x2E0FD203L, (-6L), 0x2E0FD203L, (VECTOR(int32_t, 2))((-6L), 0x2E0FD203L), (VECTOR(int32_t, 2))((-6L), 0x2E0FD203L), (-6L), 0x2E0FD203L, (-6L), 0x2E0FD203L);
                int32_t l_691 = 0x64D9B2A3L;
                int i;
                for (l_672 = (-15); (l_672 == (-7)); ++l_672)
                { /* block id: 360 */
                    int32_t l_676 = 0x46A85902L;
                    int32_t *l_675 = &l_676;
                    uint8_t l_677 = 0xB2L;
                    uint32_t l_680 = 5UL;
                    l_521 = l_675;
                    if (l_677)
                    { /* block id: 362 */
                        uint32_t l_678 = 0xA691F352L;
                        (*l_675) ^= l_678;
                    }
                    else
                    { /* block id: 364 */
                        uint8_t l_679 = 249UL;
                        (*l_521) &= l_679;
                    }
                    (*l_521) = l_680;
                }
                for (l_672 = 0; (l_672 <= (-23)); l_672 = safe_sub_func_uint32_t_u_u(l_672, 7))
                { /* block id: 371 */
                    int32_t l_684 = 2L;
                    int32_t *l_683 = &l_684;
                    l_521 = l_683;
                }
                l_686 = (((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 4))(l_685.zyzz)).wwwwzzxwxwwyxxww, ((VECTOR(uint64_t, 2))(0x4B744C019025A241L, 0x09EF43BA6EF52F92L)).yxxyyyyyyxyxxxxx))))).s1 , l_686) , (l_687.z , l_688)) , l_689);
                l_691 |= ((VECTOR(int32_t, 2))(l_690.scc)).odd;
            }
            l_694 = l_692[6][3];
            if (l_695)
            { /* block id: 378 */
                VECTOR(int32_t, 8) l_696 = (VECTOR(int32_t, 8))(0x366D83C2L, (VECTOR(int32_t, 4))(0x366D83C2L, (VECTOR(int32_t, 2))(0x366D83C2L, (-1L)), (-1L)), (-1L), 0x366D83C2L, (-1L));
                int i;
                l_521 = (((VECTOR(int32_t, 16))(l_696.s5473055262106067)).s6 , (void*)0);
            }
            else
            { /* block id: 380 */
                int32_t l_697[1];
                VECTOR(int16_t, 16) l_739 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x43F2L), 0x43F2L), 0x43F2L, 0L, 0x43F2L, (VECTOR(int16_t, 2))(0L, 0x43F2L), (VECTOR(int16_t, 2))(0L, 0x43F2L), 0L, 0x43F2L, 0L, 0x43F2L);
                int i;
                for (i = 0; i < 1; i++)
                    l_697[i] = 0x402FD1E0L;
                for (l_697[0] = 24; (l_697[0] <= 23); l_697[0] = safe_sub_func_uint64_t_u_u(l_697[0], 8))
                { /* block id: 383 */
                    struct S1 l_701 = {5L,-4L,0xC807DF57L};/* VOLATILE GLOBAL l_701 */
                    struct S1 *l_700 = &l_701;
                    l_700 = l_700;
                    for (l_701.f2 = 0; (l_701.f2 >= 44); ++l_701.f2)
                    { /* block id: 387 */
                        uint64_t l_704 = 1UL;
                        int64_t l_707[9][1] = {{0x27E0AE087D1A21EBL},{0x27E0AE087D1A21EBL},{0x27E0AE087D1A21EBL},{0x27E0AE087D1A21EBL},{0x27E0AE087D1A21EBL},{0x27E0AE087D1A21EBL},{0x27E0AE087D1A21EBL},{0x27E0AE087D1A21EBL},{0x27E0AE087D1A21EBL}};
                        int32_t l_708[1][1];
                        int16_t l_709[9][9] = {{1L,0x1BFBL,1L,1L,0x1BFBL,1L,1L,0x1BFBL,1L},{1L,0x1BFBL,1L,1L,0x1BFBL,1L,1L,0x1BFBL,1L},{1L,0x1BFBL,1L,1L,0x1BFBL,1L,1L,0x1BFBL,1L},{1L,0x1BFBL,1L,1L,0x1BFBL,1L,1L,0x1BFBL,1L},{1L,0x1BFBL,1L,1L,0x1BFBL,1L,1L,0x1BFBL,1L},{1L,0x1BFBL,1L,1L,0x1BFBL,1L,1L,0x1BFBL,1L},{1L,0x1BFBL,1L,1L,0x1BFBL,1L,1L,0x1BFBL,1L},{1L,0x1BFBL,1L,1L,0x1BFBL,1L,1L,0x1BFBL,1L},{1L,0x1BFBL,1L,1L,0x1BFBL,1L,1L,0x1BFBL,1L}};
                        int8_t l_710 = 5L;
                        int16_t l_711 = 5L;
                        uint32_t l_712 = 0x47E3C25FL;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_708[i][j] = 1L;
                        }
                        l_693.f1 = 0x597B9249L;
                        l_704++;
                        ++l_712;
                    }
                }
                for (l_697[0] = 0; (l_697[0] >= (-23)); l_697[0]--)
                { /* block id: 395 */
                    int8_t l_717 = 0x50L;
                    uint16_t l_718 = 1UL;
                    VECTOR(int32_t, 4) l_731 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x70615054L), 0x70615054L);
                    VECTOR(int32_t, 4) l_732 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x52F7F6E2L), 0x52F7F6E2L);
                    VECTOR(int16_t, 16) l_733 = (VECTOR(int16_t, 16))(0x1B7DL, (VECTOR(int16_t, 4))(0x1B7DL, (VECTOR(int16_t, 2))(0x1B7DL, 0L), 0L), 0L, 0x1B7DL, 0L, (VECTOR(int16_t, 2))(0x1B7DL, 0L), (VECTOR(int16_t, 2))(0x1B7DL, 0L), 0x1B7DL, 0L, 0x1B7DL, 0L);
                    int32_t l_734 = 1L;
                    uint32_t l_735 = 0UL;
                    uint64_t l_736 = 0x3866F830F1EC4C67L;
                    VECTOR(int32_t, 8) l_737 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x6A52E239L), 0x6A52E239L), 0x6A52E239L, (-9L), 0x6A52E239L);
                    int64_t l_738 = (-1L);
                    int i;
                    ++l_718;
                    for (l_717 = 28; (l_717 <= (-27)); --l_717)
                    { /* block id: 399 */
                        VECTOR(int32_t, 4) l_723 = (VECTOR(int32_t, 4))(0x30E9E727L, (VECTOR(int32_t, 2))(0x30E9E727L, 0x78696917L), 0x78696917L);
                        int32_t l_724[1];
                        uint16_t l_725 = 0x15C1L;
                        union U2 l_729[9] = {{0},{0},{0},{0},{0},{0},{0},{0},{0}};
                        union U2 *l_728 = &l_729[0];
                        union U2 *l_730 = (void*)0;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_724[i] = 8L;
                        l_485 |= ((VECTOR(int32_t, 2))(l_723.xy)).even;
                        --l_725;
                        l_730 = l_728;
                    }
                    l_485 = ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_731.xz)).xxxyyyyy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_732.yxwxwzxxzwyxxwyx)).s3b)).odd, 0x6B54A8DEL, 0x334C9A16L, 6L)).lo)).yxyxxyxx))).s2360463121674405, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(l_733.s0700b14f7f099c0c)), ((VECTOR(uint16_t, 8))((l_735 &= (l_734 = ((VECTOR(uint16_t, 2))(65528UL, 1UL)).even)), 65533UL, ((VECTOR(uint16_t, 2))(0UL, 0x2413L)), l_736, ((VECTOR(uint16_t, 2))(1UL, 0xD056L)), 0UL)).s4600006360443060)))))).odd)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_737.s76665563)).even)).odd)).xxxx))).w;
                    l_693.f1 = l_738;
                }
                if (l_739.s1)
                { /* block id: 409 */
                    VECTOR(int32_t, 4) l_740 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x7FBD29C7L), 0x7FBD29C7L);
                    int i;
                    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_740.wyywzwwwxwxyzwyw)).s5414)).y)
                    { /* block id: 410 */
                        struct S0 l_741 = {4294967295UL,-2L,0xB56AC4DFL,1L,-6L,-1L,8UL};/* VOLATILE GLOBAL l_741 */
                        struct S0 l_742[5] = {{0xCB8F05B2L,-5L,0xC8F00AE4L,-1L,0x21L,0x5EL,0xE4L},{0xCB8F05B2L,-5L,0xC8F00AE4L,-1L,0x21L,0x5EL,0xE4L},{0xCB8F05B2L,-5L,0xC8F00AE4L,-1L,0x21L,0x5EL,0xE4L},{0xCB8F05B2L,-5L,0xC8F00AE4L,-1L,0x21L,0x5EL,0xE4L},{0xCB8F05B2L,-5L,0xC8F00AE4L,-1L,0x21L,0x5EL,0xE4L}};
                        uint32_t l_743 = 1UL;
                        uint8_t l_744 = 250UL;
                        int32_t l_746 = 0x1754E3B3L;
                        int32_t *l_745 = &l_746;
                        int i;
                        l_742[2] = l_741;
                        l_744 &= l_743;
                        l_521 = l_745;
                        l_521 = (void*)0;
                    }
                    else
                    { /* block id: 415 */
                        int32_t l_747 = 0x34E33BF4L;
                        uint16_t l_748 = 0x6B96L;
                        int32_t l_749 = (-10L);
                        uint8_t l_750 = 0xFCL;
                        uint8_t l_753 = 255UL;
                        l_748 ^= l_747;
                        l_750++;
                        l_753++;
                    }
                }
                else
                { /* block id: 420 */
                    int32_t l_756 = 9L;
                    int8_t l_757 = (-1L);
                    l_756 &= (l_697[0] = 0x328D1FAEL);
                    l_697[0] ^= l_757;
                }
                for (l_739.sa = 0; (l_739.sa <= (-5)); --l_739.sa)
                { /* block id: 427 */
                    l_521 = (void*)0;
                }
            }
        }
        l_765[3][0] = ((((VECTOR(int32_t, 8))(l_760.s32205556)).s0 , l_761) , (l_763[5] = (l_762 = (void*)0)));
        unsigned int result = 0;
        result += l_485;
        result += l_519;
        int l_520_i0;
        for (l_520_i0 = 0; l_520_i0 < 6; l_520_i0++) {
            result += l_520[l_520_i0];
        }
        result += l_760.s7;
        result += l_760.s6;
        result += l_760.s5;
        result += l_760.s4;
        result += l_760.s3;
        result += l_760.s2;
        result += l_760.s1;
        result += l_760.s0;
        result += l_761.f0;
        result += l_761.f1;
        result += l_761.f2;
        result += l_761.f3.f0;
        result += l_761.f3.f1;
        result += l_761.f3.f2;
        int l_764_i0;
        for (l_764_i0 = 0; l_764_i0 < 10; l_764_i0++) {
            result += l_764[l_764_i0].f0;
            result += l_764[l_764_i0].f1;
            result += l_764[l_764_i0].f2.f0;
            result += l_764[l_764_i0].f2.f1;
            result += l_764[l_764_i0].f2.f2;
        }
        atomic_add(&p_773->g_special_values[87 * get_linear_group_id() + 10], result);
    }
    else
    { /* block id: 435 */
        (1 + 1);
    }
    return &p_773->g_101;
}


/* ------------------------------------------ */
/* 
 * reads : p_773->g_78 p_773->g_14 p_773->g_comm_values p_773->g_94 p_773->g_9 p_773->g_100 p_773->g_101 p_773->g_55 p_773->g_56 p_773->g_249 p_773->g_125 p_773->g_182
 * writes: p_773->g_78 p_773->g_14 p_773->g_94 p_773->g_9 p_773->g_101 p_773->g_125 p_773->g_130 p_773->g_182
 */
int8_t  func_48(uint64_t  p_49, int8_t * p_50, struct S4 * p_773)
{ /* block id: 37 */
    volatile struct S1 *l_79 = &p_773->g_78;
    VECTOR(uint32_t, 16) l_109 = (VECTOR(uint32_t, 16))(0xA699B7D3L, (VECTOR(uint32_t, 4))(0xA699B7D3L, (VECTOR(uint32_t, 2))(0xA699B7D3L, 0UL), 0UL), 0UL, 0xA699B7D3L, 0UL, (VECTOR(uint32_t, 2))(0xA699B7D3L, 0UL), (VECTOR(uint32_t, 2))(0xA699B7D3L, 0UL), 0xA699B7D3L, 0UL, 0xA699B7D3L, 0UL);
    int32_t l_112 = 0x0E40F493L;
    uint8_t *l_129 = &p_773->g_130;
    int i;
    (*l_79) = p_773->g_78;
    for (p_773->g_14 = (-12); (p_773->g_14 < (-1)); p_773->g_14 = safe_add_func_int64_t_s_s(p_773->g_14, 5))
    { /* block id: 41 */
        VECTOR(int32_t, 16) l_102 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
        VECTOR(uint32_t, 16) l_110 = (VECTOR(uint32_t, 16))(0x468A156AL, (VECTOR(uint32_t, 4))(0x468A156AL, (VECTOR(uint32_t, 2))(0x468A156AL, 0x958418D4L), 0x958418D4L), 0x958418D4L, 0x468A156AL, 0x958418D4L, (VECTOR(uint32_t, 2))(0x468A156AL, 0x958418D4L), (VECTOR(uint32_t, 2))(0x468A156AL, 0x958418D4L), 0x468A156AL, 0x958418D4L, 0x468A156AL, 0x958418D4L);
        uint8_t *l_111[6][3] = {{(void*)0,&p_773->g_94,(void*)0},{(void*)0,&p_773->g_94,(void*)0},{(void*)0,&p_773->g_94,(void*)0},{(void*)0,&p_773->g_94,(void*)0},{(void*)0,&p_773->g_94,(void*)0},{(void*)0,&p_773->g_94,(void*)0}};
        uint32_t *l_124 = &p_773->g_125;
        int32_t l_126 = 0x6C1D7441L;
        uint32_t *l_127 = &p_773->g_128;
        struct S1 **l_471 = &p_773->g_367;
        struct S1 **l_473 = &p_773->g_367;
        int i, j;
        (*p_773->g_100) ^= func_82(p_49, p_773);
        if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(0x095FD560L, (-1L), (-4L), 0x159E53F4L, 0x533E800AL, 0x170A64D1L, ((VECTOR(int32_t, 8))(l_102.s8f4aafba)), 0x2E69A228L, (-1L))), (int32_t)(safe_mod_func_uint32_t_u_u(3UL, p_49))))).s49, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))((*p_773->g_100), ((p_773->g_77.s7 > func_82((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((((VECTOR(uint32_t, 4))(l_109.seff2)).z <= ((VECTOR(uint32_t, 4))(4294967289UL, ((VECTOR(uint32_t, 2))(l_110.s42)), 0xBA12D9ECL)).z), l_102.s6)), (l_112 |= 0UL))), p_773)) <= func_113(((*l_127) = (l_126 = ((*l_124) ^= (safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((safe_add_func_uint64_t_u_u(p_773->g_70, 0L)) != p_49), p_49)), p_49))))), p_773->g_56, p_773->g_92.f2, l_129, p_773)), 0x1A06F55DL, 0x4E58D607L)).lo, ((VECTOR(int32_t, 2))(1L))))).yxyx)).yzxyyxzxzyxyzzxw)).sd2, ((VECTOR(int32_t, 2))(0x38B0E4CAL))))).yyxx, ((VECTOR(int32_t, 4))(0x07D7C6BDL))))), ((VECTOR(int32_t, 4))(0x1E2EAA58L)))).s0)
        { /* block id: 188 */
            return (*p_773->g_55);
        }
        else
        { /* block id: 190 */
            struct S1 **l_470 = &p_773->g_367;
            struct S1 ***l_472[6] = {&l_470,&l_470,&l_470,&l_470,&l_470,&l_470};
            int32_t l_474 = 1L;
            int64_t *l_481 = &p_773->g_182;
            VECTOR(int64_t, 16) l_482 = (VECTOR(int64_t, 16))(6L, (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 0L), 0L), 0L, 6L, 0L, (VECTOR(int64_t, 2))(6L, 0L), (VECTOR(int64_t, 2))(6L, 0L), 6L, 0L, 6L, 0L);
            int8_t l_483 = 0x24L;
            int i;
            (*p_773->g_249) |= p_49;
            (*p_773->g_249) &= (+(((safe_rshift_func_int16_t_s_u(l_110.sf, 3)) ^ l_112) , (((safe_mul_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u((l_112 = ((*l_129) = 0x2FL)), ((l_473 = (l_471 = l_470)) == (void*)0))) , l_474) , (safe_mul_func_uint16_t_u_u(((((*l_481) |= (l_110.s6 == (safe_mul_func_uint16_t_u_u(0x95CBL, (safe_mod_func_int32_t_s_s((l_109.sa ^ p_49), p_49)))))) ^ p_49) > l_474), l_482.s5))), 248UL)) ^ l_482.sb) || l_483)));
        }
    }
    return (*p_50);
}


/* ------------------------------------------ */
/* 
 * reads : p_773->g_9
 * writes: p_773->g_9
 */
int16_t  func_58(int32_t  p_59, uint64_t  p_60, int8_t ** p_61, struct S4 * p_773)
{ /* block id: 34 */
    uint64_t *l_71[8][9] = {{(void*)0,&p_773->g_70,&p_773->g_70,(void*)0,&p_773->g_66,&p_773->g_70,&p_773->g_70,&p_773->g_66,(void*)0},{(void*)0,&p_773->g_70,&p_773->g_70,(void*)0,&p_773->g_66,&p_773->g_70,&p_773->g_70,&p_773->g_66,(void*)0},{(void*)0,&p_773->g_70,&p_773->g_70,(void*)0,&p_773->g_66,&p_773->g_70,&p_773->g_70,&p_773->g_66,(void*)0},{(void*)0,&p_773->g_70,&p_773->g_70,(void*)0,&p_773->g_66,&p_773->g_70,&p_773->g_70,&p_773->g_66,(void*)0},{(void*)0,&p_773->g_70,&p_773->g_70,(void*)0,&p_773->g_66,&p_773->g_70,&p_773->g_70,&p_773->g_66,(void*)0},{(void*)0,&p_773->g_70,&p_773->g_70,(void*)0,&p_773->g_66,&p_773->g_70,&p_773->g_70,&p_773->g_66,(void*)0},{(void*)0,&p_773->g_70,&p_773->g_70,(void*)0,&p_773->g_66,&p_773->g_70,&p_773->g_70,&p_773->g_66,(void*)0},{(void*)0,&p_773->g_70,&p_773->g_70,(void*)0,&p_773->g_66,&p_773->g_70,&p_773->g_70,&p_773->g_66,(void*)0}};
    int32_t l_74 = 0x59658938L;
    int i, j;
    p_773->g_9.s5 ^= (l_71[7][4] == &p_773->g_66);
    return l_74;
}


/* ------------------------------------------ */
/* 
 * reads : p_773->g_14 p_773->g_comm_values p_773->g_94 p_773->g_9
 * writes: p_773->g_94 p_773->g_9
 */
int32_t  func_82(uint16_t  p_83, struct S4 * p_773)
{ /* block id: 42 */
    VECTOR(uint16_t, 8) l_88 = (VECTOR(uint16_t, 8))(0x60A8L, (VECTOR(uint16_t, 4))(0x60A8L, (VECTOR(uint16_t, 2))(0x60A8L, 65526UL), 65526UL), 65526UL, 0x60A8L, 65526UL);
    struct S1 *l_91 = &p_773->g_92;
    uint8_t *l_93 = &p_773->g_94;
    int32_t *l_95 = (void*)0;
    int32_t *l_96 = (void*)0;
    int32_t *l_98 = (void*)0;
    int32_t *l_99[3][8][2] = {{{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]}},{{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]}},{{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]},{&p_773->g_3[0],&p_773->g_3[0]}}};
    int i, j, k;
    for (p_83 = 0; (p_83 != 36); p_83++)
    { /* block id: 45 */
        return p_83;
    }
    p_773->g_9.s0 ^= (safe_mul_func_int8_t_s_s((((VECTOR(uint16_t, 2))(l_88.s75)).hi && (-1L)), ((safe_mod_func_uint16_t_u_u((l_91 == (void*)0), (+p_773->g_14))) <= ((*l_93) |= p_773->g_comm_values[p_773->tid]))));
    return p_83;
}


/* ------------------------------------------ */
/* 
 * reads : p_773->g_140 p_773->g_92.f0 p_773->g_14 p_773->g_55 p_773->g_56 p_773->g_101 p_773->g_66 p_773->g_146 p_773->g_180.f0 p_773->g_comm_values p_773->g_139 p_773->g_128 p_773->g_249 p_773->g_125 p_773->g_253 p_773->g_235 p_773->g_282 p_773->g_291 p_773->g_210 p_773->g_68 p_773->g_250 p_773->g_223.f0 p_773->g_130 p_773->g_303 p_773->g_322 p_773->g_362 p_773->g_367 p_773->g_275 p_773->g_317 p_773->g_401 p_773->g_368.f2 p_773->g_289 p_773->g_459 p_773->g_182
 * writes: p_773->g_140 p_773->g_92.f0 p_773->g_101 p_773->g_66 p_773->g_182 p_773->g_203 p_773->g_233 p_773->g_235 p_773->g_249 p_773->g_250 p_773->g_56 p_773->g_125 p_773->g_253 p_773->g_282 p_773->g_291 p_773->g_130 p_773->g_362 p_773->g_367 p_773->g_370 p_773->g_401 p_773->g_180.f2
 */
uint8_t  func_113(uint32_t  p_114, uint32_t  p_115, uint32_t  p_116, uint8_t * p_117, struct S4 * p_773)
{ /* block id: 56 */
    int32_t *l_131 = &p_773->g_101;
    int32_t *l_132 = &p_773->g_101;
    int32_t *l_133 = &p_773->g_101;
    int32_t *l_134 = &p_773->g_101;
    int32_t l_135[6][5];
    int32_t *l_136 = &l_135[5][0];
    int32_t *l_137 = &p_773->g_101;
    int32_t *l_138[8][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int8_t l_277 = (-1L);
    VECTOR(int16_t, 16) l_305 = (VECTOR(int16_t, 16))(0x5684L, (VECTOR(int16_t, 4))(0x5684L, (VECTOR(int16_t, 2))(0x5684L, 0x1FE8L), 0x1FE8L), 0x1FE8L, 0x5684L, 0x1FE8L, (VECTOR(int16_t, 2))(0x5684L, 0x1FE8L), (VECTOR(int16_t, 2))(0x5684L, 0x1FE8L), 0x5684L, 0x1FE8L, 0x5684L, 0x1FE8L);
    VECTOR(int16_t, 16) l_306 = (VECTOR(int16_t, 16))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, (-1L)), (-1L)), (-1L), 9L, (-1L), (VECTOR(int16_t, 2))(9L, (-1L)), (VECTOR(int16_t, 2))(9L, (-1L)), 9L, (-1L), 9L, (-1L));
    VECTOR(int16_t, 16) l_315 = (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), (-10L)), (-10L)), (-10L), (-3L), (-10L), (VECTOR(int16_t, 2))((-3L), (-10L)), (VECTOR(int16_t, 2))((-3L), (-10L)), (-3L), (-10L), (-3L), (-10L));
    int32_t l_323 = 0x77F54225L;
    uint64_t l_356 = 18446744073709551606UL;
    int32_t l_361 = (-1L);
    int8_t **l_439 = &p_773->g_55;
    uint32_t *l_463 = (void*)0;
    uint32_t **l_462 = &l_463;
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
            l_135[i][j] = 0x04F4F27BL;
    }
    --p_773->g_140[0];
    for (p_773->g_92.f0 = 0; (p_773->g_92.f0 == 11); ++p_773->g_92.f0)
    { /* block id: 60 */
        uint16_t l_145 = 0UL;
        VECTOR(uint32_t, 2) l_147 = (VECTOR(uint32_t, 2))(0xB7657CA1L, 0xD12EEB9FL);
        int32_t l_149[1];
        VECTOR(uint32_t, 4) l_176 = (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0x67619783L), 0x67619783L);
        VECTOR(int8_t, 16) l_185 = (VECTOR(int8_t, 16))(0x60L, (VECTOR(int8_t, 4))(0x60L, (VECTOR(int8_t, 2))(0x60L, 1L), 1L), 1L, 0x60L, 1L, (VECTOR(int8_t, 2))(0x60L, 1L), (VECTOR(int8_t, 2))(0x60L, 1L), 0x60L, 1L, 0x60L, 1L);
        uint64_t *l_273 = (void*)0;
        VECTOR(uint32_t, 4) l_276 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x5E05B463L), 0x5E05B463L);
        int32_t l_285 = (-2L);
        int8_t **l_318 = &p_773->g_55;
        VECTOR(int16_t, 8) l_335 = (VECTOR(int16_t, 8))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0x56DBL), 0x56DBL), 0x56DBL, (-3L), 0x56DBL);
        union U2 *l_381 = &p_773->g_382;
        uint32_t *l_384 = &p_773->g_125;
        uint32_t **l_383 = &l_384;
        uint64_t l_408 = 0x3F23C4E6A35BAF04L;
        uint32_t *l_454 = &p_773->g_180.f2;
        VECTOR(uint32_t, 8) l_456 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
        int i;
        for (i = 0; i < 1; i++)
            l_149[i] = (-5L);
        if (l_145)
        { /* block id: 61 */
            VECTOR(uint32_t, 4) l_148 = (VECTOR(uint32_t, 4))(0x9A96C7A1L, (VECTOR(uint32_t, 2))(0x9A96C7A1L, 0x0AC0B497L), 0x0AC0B497L);
            int i;
            (*l_132) = (p_116 > (((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(p_773->g_146.seac4)).wwzzzyzz)).s6 , (l_149[0] = (1UL == (!((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))((*l_137), ((VECTOR(uint32_t, 2))(abs(((VECTOR(uint32_t, 2))(l_147.xy))))), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4294967295UL, 5UL)).xxxyxyyx)).s1175521350772045)).hi)), ((VECTOR(uint32_t, 4))(l_148.ywxz)), 0x5CC96602L)).sd585)).y)))));
        }
        else
        { /* block id: 64 */
            struct S1 *l_179 = &p_773->g_180;
            int32_t l_202 = 0x48B166D8L;
            int32_t l_288 = 0x0D3B6ED6L;
            VECTOR(int16_t, 4) l_304 = (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 1L), 1L);
            VECTOR(int16_t, 4) l_320 = (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0L), 0L);
            VECTOR(uint8_t, 16) l_334 = (VECTOR(uint8_t, 16))(0x52L, (VECTOR(uint8_t, 4))(0x52L, (VECTOR(uint8_t, 2))(0x52L, 254UL), 254UL), 254UL, 0x52L, 254UL, (VECTOR(uint8_t, 2))(0x52L, 254UL), (VECTOR(uint8_t, 2))(0x52L, 254UL), 0x52L, 254UL, 0x52L, 254UL);
            int32_t l_352 = 0x4A07703AL;
            int32_t l_353 = 0x0D60D75DL;
            int16_t l_355 = 1L;
            int i;
            for (p_115 = 23; (p_115 >= 5); p_115--)
            { /* block id: 67 */
                uint64_t *l_173 = &p_773->g_66;
                uint16_t *l_181[1];
                VECTOR(int8_t, 2) l_186 = (VECTOR(int8_t, 2))(0L, 0x66L);
                int32_t **l_245 = &p_773->g_235;
                uint32_t *l_246 = &p_773->g_125;
                uint64_t *l_256 = &p_773->g_254[1][3][0].f1;
                uint64_t *l_257 = (void*)0;
                uint64_t *l_258 = &p_773->g_254[1][3][0].f1;
                uint64_t *l_259 = &p_773->g_254[1][3][0].f1;
                uint64_t *l_260 = (void*)0;
                uint64_t *l_261 = &p_773->g_254[1][3][0].f1;
                uint64_t *l_262 = &p_773->g_254[1][3][0].f1;
                uint64_t *l_263 = &p_773->g_254[1][3][0].f1;
                uint64_t *l_264 = &p_773->g_254[1][3][0].f1;
                uint64_t *l_265 = &p_773->g_254[1][3][0].f1;
                uint64_t *l_266 = &p_773->g_254[1][3][0].f1;
                uint64_t *l_267 = (void*)0;
                uint64_t *l_268 = &p_773->g_254[1][3][0].f1;
                uint64_t *l_269[3][3] = {{&p_773->g_254[1][3][0].f1,&p_773->g_254[1][3][0].f1,&p_773->g_254[1][3][0].f1},{&p_773->g_254[1][3][0].f1,&p_773->g_254[1][3][0].f1,&p_773->g_254[1][3][0].f1},{&p_773->g_254[1][3][0].f1,&p_773->g_254[1][3][0].f1,&p_773->g_254[1][3][0].f1}};
                int32_t l_287 = 0L;
                union U2 *l_301 = &p_773->g_302;
                int16_t *l_336 = (void*)0;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_181[i] = &l_145;
                if ((1UL ^ (safe_div_func_uint64_t_u_u((l_149[0] &= func_154(func_160((((*l_245) = func_165(&p_773->g_66, &p_773->g_125, ((safe_sub_func_uint64_t_u_u(p_773->g_14, ((*l_173) = GROUP_DIVERGE(1, 1)))) || ((*l_173) &= (safe_mod_func_int8_t_s_s((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_176.xxyx)))).x <= ((safe_lshift_func_uint16_t_u_u(p_116, (p_773->g_182 = ((void*)0 == l_179)))) >= (safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(l_185.se67c)), ((VECTOR(int8_t, 2))(l_186.yy)).xyyy, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(p_773->g_187.yxyyyxyxxyxyyyyx)).s50af)))))).z, 7)))), (safe_div_func_int32_t_s_s((p_773->g_203 = ((*l_131) = ((safe_div_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(4UL, (safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(p_116, 0L)) && 0x606AL), (*p_773->g_55))), l_202)))) , (-1L)), p_115)) == p_114), (*l_134))) | 9UL))), l_145)))))), p_773->g_146.s6, p_116, p_773)) == &l_149[0]), p_773->g_comm_values[p_773->tid], l_186.y, l_246, p_773), &p_773->g_3[0], p_773->g_128, (*p_773->g_55), &p_773->g_125, p_773)), 18446744073709551615UL))))
                { /* block id: 102 */
                    uint32_t **l_270 = &l_246;
                    uint64_t **l_274 = &l_269[1][2];
                    int32_t l_278[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_278[i] = 1L;
                    (*l_245) = func_165(l_267, ((*l_270) = &p_116), (((void*)0 != &p_773->g_233) != p_115), (**l_245), (safe_div_func_uint16_t_u_u((l_273 == ((*l_274) = &p_773->g_68)), (((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 4))(p_773->g_275.sfdc1)).zzywzzyxzxzxywxy, ((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 2))(l_276.xy)), (uint32_t)(((**l_245) , p_773->g_92.f2) | l_277)))), (uint32_t)1UL))).xyxyxxyyyyyxxxyy))).s7 , p_773->g_139))), p_773);
                    p_773->g_282++;
                }
                else
                { /* block id: 107 */
                    int32_t l_286 = 0x73B96447L;
                    int32_t *l_294 = &l_149[0];
                    VECTOR(int16_t, 8) l_316 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
                    int8_t ***l_319 = &l_318;
                    int16_t *l_324[9][7] = {{(void*)0,(void*)0,(void*)0,&p_773->g_290[2],(void*)0,(void*)0,&p_773->g_290[2]},{(void*)0,(void*)0,(void*)0,&p_773->g_290[2],(void*)0,(void*)0,&p_773->g_290[2]},{(void*)0,(void*)0,(void*)0,&p_773->g_290[2],(void*)0,(void*)0,&p_773->g_290[2]},{(void*)0,(void*)0,(void*)0,&p_773->g_290[2],(void*)0,(void*)0,&p_773->g_290[2]},{(void*)0,(void*)0,(void*)0,&p_773->g_290[2],(void*)0,(void*)0,&p_773->g_290[2]},{(void*)0,(void*)0,(void*)0,&p_773->g_290[2],(void*)0,(void*)0,&p_773->g_290[2]},{(void*)0,(void*)0,(void*)0,&p_773->g_290[2],(void*)0,(void*)0,&p_773->g_290[2]},{(void*)0,(void*)0,(void*)0,&p_773->g_290[2],(void*)0,(void*)0,&p_773->g_290[2]},{(void*)0,(void*)0,(void*)0,&p_773->g_290[2],(void*)0,(void*)0,&p_773->g_290[2]}};
                    int i, j;
                    ++p_773->g_291;
                    (*l_245) = l_294;
                    (*l_245) = func_165(func_160(p_773->g_210.s0, ((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((safe_add_func_uint64_t_u_u((p_773->g_253 == l_301), (l_288 , (((l_288 ^= ((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 4))(p_773->g_303.xxyy)).yyzwzyzz, ((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 2))(l_304.wy)).yyxxxyxyyxyxxxyx, ((VECTOR(int16_t, 16))(l_305.sb0f755626fd71bc4)), ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 8))(l_306.sa063ce23)).s0456044646664736, ((VECTOR(int16_t, 16))((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_773->g_187.y, (safe_add_func_int8_t_s_s(((**l_245) = (((((safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0x5FF3L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_315.sa62622b7)).hi)), ((VECTOR(int16_t, 2))(l_316.s71)), 0x2902L, 0x2C31L, ((VECTOR(int16_t, 2))(p_773->g_317.wx)), (&p_773->g_55 != ((*l_319) = l_318)), 5L, ((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x1379L, 0L)), 0L, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(l_320.yxxwzzxwzzwyywxz)).even, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_773->g_321.xxxyyxyy)).s25)).yyxyyyyxyxyyxyxx)).s05)).xyyxyyyx))), ((VECTOR(int16_t, 4))(p_773->g_322.s7910)).wyywyxzy, ((VECTOR(int16_t, 16))(0L, ((VECTOR(int16_t, 2))(0L, (-1L))), ((p_773->g_291 = (&p_773->g_6 == (void*)0)) < 0x0008L), ((VECTOR(int16_t, 2))(0x3837L)), ((VECTOR(int16_t, 2))(0x4BDBL)), 0L, ((VECTOR(int16_t, 2))(5L)), 0x2AB6L, p_116, ((VECTOR(int16_t, 2))(0x4EB2L)), (-6L))).hi))), ((VECTOR(int16_t, 8))(1L))))).even, ((VECTOR(int16_t, 4))(2L))))), p_115, (-1L), ((VECTOR(int16_t, 4))(4L)), 0x7845L, 0x6161L, 0x2793L)).sb3, (int16_t)p_773->g_223.f0))), 1L)).hi)).s5, l_323)) && p_773->g_223.f0) , FAKE_DIVERGE(p_773->local_0_offset, get_local_id(0), 10)) , (*p_773->g_249)) < p_114)), 0x67L)))), p_773->g_321.x)), ((VECTOR(int16_t, 4))(0x2D85L)), (-9L), 0x5531L, ((VECTOR(int16_t, 4))(0x204DL)), 0x20D2L, ((VECTOR(int16_t, 4))(0x7171L))))))).s9a, ((VECTOR(int16_t, 2))(2L))))).yyyxyyyxxxyyyyyx))).hi, ((VECTOR(int16_t, 8))(6L))))), (int16_t)p_773->g_128))).s4) & p_115) || 0x5CC8L)))) || 0x7B4FL) > p_773->g_68), 1L)) | (*p_773->g_250)), (*l_133))) >= 247UL), p_115, &p_773->g_125, p_773), &p_773->g_125, p_115, p_773->g_56, p_773->g_56, p_773);
                }
                (*l_134) |= (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(255UL, 0xEDL)).odd, (safe_sub_func_int64_t_s_s(0x75452E4DEBA08860L, ((((((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 2))(0x72L, 0x57L)).even, (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 8))(p_773->g_317.z, ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_773->g_333.yyyxyxxx)).s6133443662543142)).s06)), ((VECTOR(uint8_t, 2))(l_334.s5d))))), ((VECTOR(int16_t, 2))(0x3F57L, 0x52C3L)), ((VECTOR(int16_t, 2))(0L, 0x6520L)), 0x5534L)).odd))).lo, ((VECTOR(int16_t, 8))(l_335.s01676623)).s01))).even, 11)))) | ((l_336 != &p_773->g_290[2]) >= ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(p_773->g_339.xx)).yyyyxyxy)).even)).wyywzwwwxwwwzyxy)).scb75)).y, ((((safe_lshift_func_int16_t_s_s(p_773->g_14, 15)) | ((*p_117) &= p_773->g_223.f0)) , l_276.x) != (safe_mod_func_int32_t_s_s((GROUP_DIVERGE(1, 1) != (safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_773->g_303.x, 15)), (safe_add_func_uint16_t_u_u((&p_773->g_55 == &p_773->g_55), p_773->g_322.s5)))), 0x0EL))), l_185.s7))))) , 0xB0L))) | 1L) >= 0xF3L) , (*p_773->g_235)) != l_334.s2)))));
            }
            --l_356;
            for (l_352 = (-16); (l_352 > 5); l_352++)
            { /* block id: 122 */
                uint16_t l_389 = 0x76EBL;
                int32_t l_399 = 0x38BDD0EBL;
                --p_773->g_362;
                for (p_116 = 13; (p_116 < 1); p_116--)
                { /* block id: 126 */
                    struct S1 **l_369[1];
                    uint16_t *l_378 = &p_773->g_233;
                    union U2 *l_379 = &p_773->g_380;
                    uint16_t *l_390[9][8][3] = {{{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291}},{{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291}},{{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291}},{{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291}},{{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291}},{{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291}},{{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291}},{{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291}},{{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291},{&p_773->g_291,&p_773->g_291,&p_773->g_291}}};
                    uint32_t **l_393 = &l_384;
                    int64_t *l_394 = (void*)0;
                    int64_t *l_395[3][5] = {{&p_773->g_289[1][5],(void*)0,(void*)0,(void*)0,&p_773->g_289[1][5]},{&p_773->g_289[1][5],(void*)0,(void*)0,(void*)0,&p_773->g_289[1][5]},{&p_773->g_289[1][5],(void*)0,(void*)0,(void*)0,&p_773->g_289[1][5]}};
                    int32_t l_396 = 1L;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_369[i] = &l_179;
                    if (p_116)
                        break;
                    p_773->g_370 = (p_773->g_367 = p_773->g_367);
                    (*l_137) = (safe_mod_func_uint32_t_u_u(p_773->g_275.s4, (safe_lshift_func_uint8_t_u_s(((*p_117) = ((safe_rshift_func_uint16_t_u_s(((*l_378) = 0xD396L), ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(0x72286EECL, (l_379 == l_381), 0xC1C48D3FL, 0xD9D49372L)))).z , ((l_396 = (+((l_383 != ((((((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(((p_773->g_290[8] >= (safe_add_func_uint16_t_u_u((((l_389 &= (safe_sub_func_uint16_t_u_u((*l_133), p_773->g_6))) < (p_773->g_291++)) , p_114), 0x0847L))) & p_116), 1L, 7L, 0x417CCAD5L)).even, (int32_t)(*p_773->g_249)))).xyyxxyxx, ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 8))(1L))))).s5 <= (*p_773->g_249)) == p_116) != 0x1590L) , l_393)) | 0x60591D7AL))) & 0x6176B3DD126903F3L)) == 0xF5649298EB77F973L))) | p_773->g_317.x)), (*p_773->g_55)))));
                }
                p_773->g_401++;
            }
            for (p_773->g_291 = 0; (p_773->g_291 < 6); p_773->g_291 = safe_add_func_int64_t_s_s(p_773->g_291, 6))
            { /* block id: 141 */
                (*p_773->g_249) |= ((VECTOR(int32_t, 2))(1L, 0x429F5E57L)).even;
            }
        }
        if ((l_335.s0 & (safe_mod_func_uint64_t_u_u((l_408 , p_116), (0x2F8BL || p_773->g_14)))))
        { /* block id: 145 */
            int8_t ***l_440 = &l_439;
            int8_t ***l_441 = &l_318;
            (*p_773->g_249) |= l_335.s7;
            if ((atomic_inc(&p_773->l_atomic_input[24]) == 6))
            { /* block id: 148 */
                int32_t l_409 = 0x61C75638L;
                int32_t l_414 = 1L;
                int32_t l_415 = 0x60AAF38EL;
                uint32_t l_416 = 0x22EF0A67L;
                uint16_t l_419 = 0xC6AAL;
                uint16_t *l_418[7] = {&l_419,&l_419,&l_419,&l_419,&l_419,&l_419,&l_419};
                uint16_t **l_417 = &l_418[0];
                int i;
                for (l_409 = 0; (l_409 >= 17); l_409++)
                { /* block id: 151 */
                    int32_t l_413 = 0x67BD0364L;
                    int32_t *l_412 = &l_413;
                    l_412 = (void*)0;
                }
                l_416 &= (l_409 = (l_415 = l_414));
                l_417 = (void*)0;
                unsigned int result = 0;
                result += l_409;
                result += l_414;
                result += l_415;
                result += l_416;
                result += l_419;
                atomic_add(&p_773->l_special_values[24], result);
            }
            else
            { /* block id: 158 */
                (1 + 1);
            }
            if ((atomic_inc(&p_773->l_atomic_input[86]) == 5))
            { /* block id: 162 */
                int64_t l_420 = (-6L);
                uint16_t l_421 = 0xE8DBL;
                uint32_t l_431 = 1UL;
                int32_t l_432 = 0x795DF04AL;
                union U2 l_434 = {0};/* VOLATILE GLOBAL l_434 */
                union U2 *l_433[1][4][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
                union U2 l_436 = {0};/* VOLATILE GLOBAL l_436 */
                union U2 *l_435 = &l_436;
                union U2 l_438 = {0};/* VOLATILE GLOBAL l_438 */
                union U2 *l_437 = &l_438;
                int i, j, k;
                l_421++;
                for (l_420 = 0; (l_420 == (-3)); l_420--)
                { /* block id: 166 */
                    int16_t l_426 = (-1L);
                    uint64_t l_427 = 18446744073709551615UL;
                    uint32_t l_428 = 0xF59170CBL;
                    uint32_t l_429 = 0xFCD2D7ABL;
                    uint16_t l_430 = 0xCE32L;
                    l_427 |= l_426;
                    l_429 = l_428;
                    l_430 |= 0x21348D37L;
                }
                l_432 |= l_431;
                l_437 = (l_435 = l_433[0][2][0]);
                unsigned int result = 0;
                result += l_420;
                result += l_421;
                result += l_431;
                result += l_432;
                result += l_434.f0;
                result += l_434.f1;
                result += l_434.f2.f0;
                result += l_434.f2.f1;
                result += l_434.f2.f2;
                result += l_436.f0;
                result += l_436.f1;
                result += l_436.f2.f0;
                result += l_436.f2.f1;
                result += l_436.f2.f2;
                result += l_438.f0;
                result += l_438.f1;
                result += l_438.f2.f0;
                result += l_438.f2.f1;
                result += l_438.f2.f2;
                atomic_add(&p_773->l_special_values[86], result);
            }
            else
            { /* block id: 174 */
                (1 + 1);
            }
            (*l_441) = ((*l_440) = l_439);
        }
        else
        { /* block id: 179 */
            return p_773->g_368.f2;
        }
        if ((*p_773->g_249))
            continue;
        (*p_773->g_249) = (safe_sub_func_int64_t_s_s(l_145, ((*l_137) & (safe_sub_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(p_773->g_289[1][6], 1)), l_335.s6)), (safe_mul_func_uint8_t_u_u((((*l_454) = (GROUP_DIVERGE(1, 1) , 2UL)) | ((*l_137) , ((((safe_unary_minus_func_int64_t_s(0x4B0D4918056188EEL)) < ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_456.s44651531)))).s6) || (GROUP_DIVERGE(0, 1) > (-1L))) == ((((safe_mul_func_int8_t_s_s(((*p_773->g_55) = p_116), p_773->g_66)) , p_773->g_459) == l_462) ^ 18446744073709551613UL)))), l_145)))) == p_773->g_182), l_335.s0)))));
    }
    return (*l_134);
}


/* ------------------------------------------ */
/* 
 * reads : p_773->g_55 p_773->g_249 p_773->g_125 p_773->g_253
 * writes: p_773->g_56 p_773->g_125 p_773->g_253
 */
uint64_t  func_154(uint64_t * p_155, int32_t * p_156, uint64_t  p_157, int8_t  p_158, uint32_t * p_159, struct S4 * p_773)
{ /* block id: 96 */
    int8_t l_252 = (-2L);
    union U2 **l_255 = &p_773->g_253;
    (*p_773->g_249) &= (((*p_773->g_55) = (p_158 ^ l_252)) < p_157);
    (*l_255) = p_773->g_253;
    return l_252;
}


/* ------------------------------------------ */
/* 
 * reads : p_773->g_139 p_773->g_180.f0
 * writes: p_773->g_140 p_773->g_233 p_773->g_235 p_773->g_249 p_773->g_250
 */
uint64_t * func_160(uint32_t  p_161, uint64_t  p_162, uint32_t  p_163, uint32_t * p_164, struct S4 * p_773)
{ /* block id: 92 */
    int32_t l_247 = (-1L);
    int32_t **l_248[1];
    uint64_t *l_251[4];
    int i;
    for (i = 0; i < 1; i++)
        l_248[i] = &p_773->g_235;
    for (i = 0; i < 4; i++)
        l_251[i] = &p_773->g_68;
    p_773->g_250 = (p_773->g_249 = func_165(&p_773->g_68, p_164, l_247, p_773->g_139, ((&p_773->g_3[0] == (void*)0) , 0x524D6D5E7484E075L), p_773));
    return l_251[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_773->g_66 p_773->g_182 p_773->g_210 p_773->g_128 p_773->g_224 p_773->g_70 p_773->g_55 p_773->g_56 p_773->g_187 p_773->g_68 p_773->g_180.f0
 * writes: p_773->g_66 p_773->g_101 p_773->g_68 p_773->g_140 p_773->g_233 p_773->g_235
 */
int32_t * func_165(uint64_t * p_166, uint32_t * p_167, int16_t  p_168, int16_t  p_169, uint64_t  p_170, struct S4 * p_773)
{ /* block id: 73 */
    struct S1 *l_222 = &p_773->g_223;
    int32_t *l_227[1][1];
    uint8_t *l_228[1];
    int32_t l_229[1];
    uint64_t *l_230 = &p_773->g_68;
    uint64_t *l_231 = (void*)0;
    uint64_t *l_232 = &p_773->g_140[3];
    int32_t **l_234[10][7] = {{(void*)0,&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],(void*)0},{(void*)0,&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],(void*)0},{(void*)0,&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],(void*)0},{(void*)0,&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],(void*)0},{(void*)0,&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],(void*)0},{(void*)0,&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],(void*)0},{(void*)0,&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],(void*)0},{(void*)0,&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],(void*)0},{(void*)0,&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],(void*)0},{(void*)0,&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],&l_227[0][0],(void*)0}};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_227[i][j] = &p_773->g_6;
    }
    for (i = 0; i < 1; i++)
        l_228[i] = &p_773->g_130;
    for (i = 0; i < 1; i++)
        l_229[i] = 0x5FA86E48L;
    p_773->g_233 = (safe_mod_func_uint16_t_u_u(((!(safe_lshift_func_uint16_t_u_s((((((*l_232) = ((VECTOR(uint64_t, 4))((*p_166), ((*l_230) = (((p_773->g_182 | (safe_mod_func_int32_t_s_s((p_773->g_101 = (!((((VECTOR(uint64_t, 4))(p_773->g_210.s7040)).x , ((safe_rshift_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(p_169, ((p_773->g_128 < ((*p_166)--)) | FAKE_DIVERGE(p_773->local_1_offset, get_local_id(1), 10)))) ^ (safe_unary_minus_func_int32_t_s((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((l_222 = (void*)0) != (p_169 , p_773->g_224)), (((safe_add_func_int8_t_s_s(((((void*)0 != l_227[0][0]) & p_773->g_70) || (*p_773->g_55)), 0x6BL)) , l_228[0]) != &p_773->g_130))), (*p_773->g_55)))))) || p_773->g_187.x), (*p_773->g_55))) < 1L)) != p_169))), p_773->g_68))) || l_229[0]) < (*p_773->g_55))), 0xAE641700D336FF1FL, 0UL)).w) || 0x015B945AA5DF87E7L) < p_773->g_180.f0) && 0x778BL), 11))) < p_169), FAKE_DIVERGE(p_773->local_1_offset, get_local_id(1), 10)));
    p_773->g_235 = p_167;
    if ((atomic_inc(&p_773->l_atomic_input[20]) == 6))
    { /* block id: 82 */
        int64_t l_236 = 0x48FD6D36BEF081A4L;
        VECTOR(uint32_t, 4) l_237 = (VECTOR(uint32_t, 4))(0xA1C62A09L, (VECTOR(uint32_t, 2))(0xA1C62A09L, 0xAE58CCBBL), 0xAE58CCBBL);
        uint8_t l_238 = 0xCFL;
        uint8_t l_239 = 255UL;
        int16_t l_240 = 0x24DBL;
        int32_t l_242 = 0L;
        int32_t *l_241 = &l_242;
        uint32_t l_243[7][5] = {{0xF209A28CL,1UL,0xF209A28CL,0xF209A28CL,1UL},{0xF209A28CL,1UL,0xF209A28CL,0xF209A28CL,1UL},{0xF209A28CL,1UL,0xF209A28CL,0xF209A28CL,1UL},{0xF209A28CL,1UL,0xF209A28CL,0xF209A28CL,1UL},{0xF209A28CL,1UL,0xF209A28CL,0xF209A28CL,1UL},{0xF209A28CL,1UL,0xF209A28CL,0xF209A28CL,1UL},{0xF209A28CL,1UL,0xF209A28CL,0xF209A28CL,1UL}};
        int64_t l_244[4][2][4] = {{{(-5L),(-5L),7L,8L},{(-5L),(-5L),7L,8L}},{{(-5L),(-5L),7L,8L},{(-5L),(-5L),7L,8L}},{{(-5L),(-5L),7L,8L},{(-5L),(-5L),7L,8L}},{{(-5L),(-5L),7L,8L},{(-5L),(-5L),7L,8L}}};
        int i, j, k;
        l_239 |= (l_236 , ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_237.wx)))).yxyx)).x , (-3L)) , ((VECTOR(int32_t, 4))(l_238, ((VECTOR(int32_t, 2))(0x38D5A99FL, 0x63C097C9L)), 1L)).w));
        l_240 = 0x0A750F61L;
        l_241 = l_241;
        l_244[1][0][3] = l_243[4][3];
        unsigned int result = 0;
        result += l_236;
        result += l_237.w;
        result += l_237.z;
        result += l_237.y;
        result += l_237.x;
        result += l_238;
        result += l_239;
        result += l_240;
        result += l_242;
        int l_243_i0, l_243_i1;
        for (l_243_i0 = 0; l_243_i0 < 7; l_243_i0++) {
            for (l_243_i1 = 0; l_243_i1 < 5; l_243_i1++) {
                result += l_243[l_243_i0][l_243_i1];
            }
        }
        int l_244_i0, l_244_i1, l_244_i2;
        for (l_244_i0 = 0; l_244_i0 < 4; l_244_i0++) {
            for (l_244_i1 = 0; l_244_i1 < 2; l_244_i1++) {
                for (l_244_i2 = 0; l_244_i2 < 4; l_244_i2++) {
                    result += l_244[l_244_i0][l_244_i1][l_244_i2];
                }
            }
        }
        atomic_add(&p_773->l_special_values[20], result);
    }
    else
    { /* block id: 87 */
        (1 + 1);
    }
    return p_167;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[87];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 87; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[87];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 87; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[97];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 97; i++)
            l_comm_values[i] = 1;
    struct S4 c_774;
    struct S4* p_773 = &c_774;
    struct S4 c_775 = {
        {0x488EB987L}, // p_773->g_3
        0L, // p_773->g_6
        (VECTOR(int32_t, 8))(0x7647F1A9L, (VECTOR(int32_t, 4))(0x7647F1A9L, (VECTOR(int32_t, 2))(0x7647F1A9L, 0x2C54C975L), 0x2C54C975L), 0x2C54C975L, 0x7647F1A9L, 0x2C54C975L), // p_773->g_9
        0x35L, // p_773->g_14
        0x75L, // p_773->g_56
        &p_773->g_56, // p_773->g_55
        0x5CE90A8693438870L, // p_773->g_66
        0xF98D32190EF9F677L, // p_773->g_68
        18446744073709551615UL, // p_773->g_70
        (void*)0, // p_773->g_72
        (void*)0, // p_773->g_73
        (VECTOR(uint8_t, 16))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0xEAL), 0xEAL), 0xEAL, 7UL, 0xEAL, (VECTOR(uint8_t, 2))(7UL, 0xEAL), (VECTOR(uint8_t, 2))(7UL, 0xEAL), 7UL, 0xEAL, 7UL, 0xEAL), // p_773->g_77
        {0x20F6EBCB29D2F475L,6L,7UL}, // p_773->g_78
        {0x2D5F9F679CEDCC4AL,0x3051342B15AC177DL,4294967294UL}, // p_773->g_92
        0x63L, // p_773->g_94
        (void*)0, // p_773->g_97
        5L, // p_773->g_101
        &p_773->g_101, // p_773->g_100
        0x7AA637DEL, // p_773->g_125
        0x7CF2F2AFL, // p_773->g_128
        0UL, // p_773->g_130
        0L, // p_773->g_139
        {18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL}, // p_773->g_140
        (VECTOR(uint64_t, 16))(0xC01FFE24739697ECL, (VECTOR(uint64_t, 4))(0xC01FFE24739697ECL, (VECTOR(uint64_t, 2))(0xC01FFE24739697ECL, 1UL), 1UL), 1UL, 0xC01FFE24739697ECL, 1UL, (VECTOR(uint64_t, 2))(0xC01FFE24739697ECL, 1UL), (VECTOR(uint64_t, 2))(0xC01FFE24739697ECL, 1UL), 0xC01FFE24739697ECL, 1UL, 0xC01FFE24739697ECL, 1UL), // p_773->g_146
        {0x20534DAAF50BF5E6L,1L,0x3A345BD6L}, // p_773->g_180
        1L, // p_773->g_182
        (VECTOR(int8_t, 2))(0x1EL, 0L), // p_773->g_187
        0L, // p_773->g_203
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 1UL, 18446744073709551614UL), // p_773->g_210
        {0x73FEDEC0B913E921L,0x300684B4F7ADDD03L,7UL}, // p_773->g_223
        (void*)0, // p_773->g_224
        1UL, // p_773->g_233
        &p_773->g_101, // p_773->g_235
        &p_773->g_101, // p_773->g_249
        &p_773->g_101, // p_773->g_250
        {{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}},{{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}}}, // p_773->g_254
        &p_773->g_254[1][3][0], // p_773->g_253
        (VECTOR(int32_t, 16))(0x66E3D103L, (VECTOR(int32_t, 4))(0x66E3D103L, (VECTOR(int32_t, 2))(0x66E3D103L, 0x7DE96F44L), 0x7DE96F44L), 0x7DE96F44L, 0x66E3D103L, 0x7DE96F44L, (VECTOR(int32_t, 2))(0x66E3D103L, 0x7DE96F44L), (VECTOR(int32_t, 2))(0x66E3D103L, 0x7DE96F44L), 0x66E3D103L, 0x7DE96F44L, 0x66E3D103L, 0x7DE96F44L), // p_773->g_275
        0x2724ABC3L, // p_773->g_279
        0L, // p_773->g_280
        0L, // p_773->g_281
        0x086D4578L, // p_773->g_282
        {{0x38CA2FDA58E67CEBL,1L,(-6L),0x28D96F55D181BC6CL,1L,0x28D96F55D181BC6CL,(-6L),1L,0x38CA2FDA58E67CEBL,0x38CA2FDA58E67CEBL},{0x38CA2FDA58E67CEBL,1L,(-6L),0x28D96F55D181BC6CL,1L,0x28D96F55D181BC6CL,(-6L),1L,0x38CA2FDA58E67CEBL,0x38CA2FDA58E67CEBL}}, // p_773->g_289
        {0x47FFL,0x47FFL,0x47FFL,0x47FFL,0x47FFL,0x47FFL,0x47FFL,0x47FFL,0x47FFL,0x47FFL}, // p_773->g_290
        65531UL, // p_773->g_291
        {0}, // p_773->g_302
        (VECTOR(int16_t, 2))(1L, 1L), // p_773->g_303
        (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), // p_773->g_317
        (VECTOR(int16_t, 2))(0x4345L, (-1L)), // p_773->g_321
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3F14L), 0x3F14L), 0x3F14L, 1L, 0x3F14L, (VECTOR(int16_t, 2))(1L, 0x3F14L), (VECTOR(int16_t, 2))(1L, 0x3F14L), 1L, 0x3F14L, 1L, 0x3F14L), // p_773->g_322
        (VECTOR(int8_t, 2))(0x19L, 0x39L), // p_773->g_333
        (VECTOR(uint8_t, 2))(0UL, 4UL), // p_773->g_339
        0L, // p_773->g_354
        1UL, // p_773->g_362
        {0x7D8071D1C7E64A29L,1L,0UL}, // p_773->g_368
        &p_773->g_368, // p_773->g_367
        {{{{0x2228A5FAD6B52961L,0L,0x017C25CDL}},{{0x2228A5FAD6B52961L,0L,0x017C25CDL}},{{0x2228A5FAD6B52961L,0L,0x017C25CDL}}}}, // p_773->g_371
        &p_773->g_371[0][2][0], // p_773->g_370
        {0}, // p_773->g_380
        {0}, // p_773->g_382
        0x40BD3007L, // p_773->g_397
        (-1L), // p_773->g_398
        0x312C8D47L, // p_773->g_400
        0x34BECE1AL, // p_773->g_401
        0x2D175B52L, // p_773->g_461
        &p_773->g_461, // p_773->g_460
        &p_773->g_460, // p_773->g_459
        &p_773->g_235, // p_773->g_766
        {0}, // p_773->g_767
        {1UL}, // p_773->g_769
        &p_773->g_769, // p_773->g_771
        &p_773->g_771, // p_773->g_770
        {0}, // p_773->g_772
        0, // p_773->v_collective
        sequence_input[get_global_id(0)], // p_773->global_0_offset
        sequence_input[get_global_id(1)], // p_773->global_1_offset
        sequence_input[get_global_id(2)], // p_773->global_2_offset
        sequence_input[get_local_id(0)], // p_773->local_0_offset
        sequence_input[get_local_id(1)], // p_773->local_1_offset
        sequence_input[get_local_id(2)], // p_773->local_2_offset
        sequence_input[get_group_id(0)], // p_773->group_0_offset
        sequence_input[get_group_id(1)], // p_773->group_1_offset
        sequence_input[get_group_id(2)], // p_773->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 97)), permutations[0][get_linear_local_id()])), // p_773->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_774 = c_775;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_773);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_773->g_3[i], "p_773->g_3[i]", print_hash_value);

    }
    transparent_crc(p_773->g_6, "p_773->g_6", print_hash_value);
    transparent_crc(p_773->g_9.s0, "p_773->g_9.s0", print_hash_value);
    transparent_crc(p_773->g_9.s1, "p_773->g_9.s1", print_hash_value);
    transparent_crc(p_773->g_9.s2, "p_773->g_9.s2", print_hash_value);
    transparent_crc(p_773->g_9.s3, "p_773->g_9.s3", print_hash_value);
    transparent_crc(p_773->g_9.s4, "p_773->g_9.s4", print_hash_value);
    transparent_crc(p_773->g_9.s5, "p_773->g_9.s5", print_hash_value);
    transparent_crc(p_773->g_9.s6, "p_773->g_9.s6", print_hash_value);
    transparent_crc(p_773->g_9.s7, "p_773->g_9.s7", print_hash_value);
    transparent_crc(p_773->g_14, "p_773->g_14", print_hash_value);
    transparent_crc(p_773->g_56, "p_773->g_56", print_hash_value);
    transparent_crc(p_773->g_66, "p_773->g_66", print_hash_value);
    transparent_crc(p_773->g_68, "p_773->g_68", print_hash_value);
    transparent_crc(p_773->g_70, "p_773->g_70", print_hash_value);
    transparent_crc(p_773->g_77.s0, "p_773->g_77.s0", print_hash_value);
    transparent_crc(p_773->g_77.s1, "p_773->g_77.s1", print_hash_value);
    transparent_crc(p_773->g_77.s2, "p_773->g_77.s2", print_hash_value);
    transparent_crc(p_773->g_77.s3, "p_773->g_77.s3", print_hash_value);
    transparent_crc(p_773->g_77.s4, "p_773->g_77.s4", print_hash_value);
    transparent_crc(p_773->g_77.s5, "p_773->g_77.s5", print_hash_value);
    transparent_crc(p_773->g_77.s6, "p_773->g_77.s6", print_hash_value);
    transparent_crc(p_773->g_77.s7, "p_773->g_77.s7", print_hash_value);
    transparent_crc(p_773->g_77.s8, "p_773->g_77.s8", print_hash_value);
    transparent_crc(p_773->g_77.s9, "p_773->g_77.s9", print_hash_value);
    transparent_crc(p_773->g_77.sa, "p_773->g_77.sa", print_hash_value);
    transparent_crc(p_773->g_77.sb, "p_773->g_77.sb", print_hash_value);
    transparent_crc(p_773->g_77.sc, "p_773->g_77.sc", print_hash_value);
    transparent_crc(p_773->g_77.sd, "p_773->g_77.sd", print_hash_value);
    transparent_crc(p_773->g_77.se, "p_773->g_77.se", print_hash_value);
    transparent_crc(p_773->g_77.sf, "p_773->g_77.sf", print_hash_value);
    transparent_crc(p_773->g_78.f0, "p_773->g_78.f0", print_hash_value);
    transparent_crc(p_773->g_78.f1, "p_773->g_78.f1", print_hash_value);
    transparent_crc(p_773->g_78.f2, "p_773->g_78.f2", print_hash_value);
    transparent_crc(p_773->g_92.f0, "p_773->g_92.f0", print_hash_value);
    transparent_crc(p_773->g_92.f1, "p_773->g_92.f1", print_hash_value);
    transparent_crc(p_773->g_92.f2, "p_773->g_92.f2", print_hash_value);
    transparent_crc(p_773->g_94, "p_773->g_94", print_hash_value);
    transparent_crc(p_773->g_101, "p_773->g_101", print_hash_value);
    transparent_crc(p_773->g_125, "p_773->g_125", print_hash_value);
    transparent_crc(p_773->g_128, "p_773->g_128", print_hash_value);
    transparent_crc(p_773->g_130, "p_773->g_130", print_hash_value);
    transparent_crc(p_773->g_139, "p_773->g_139", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_773->g_140[i], "p_773->g_140[i]", print_hash_value);

    }
    transparent_crc(p_773->g_146.s0, "p_773->g_146.s0", print_hash_value);
    transparent_crc(p_773->g_146.s1, "p_773->g_146.s1", print_hash_value);
    transparent_crc(p_773->g_146.s2, "p_773->g_146.s2", print_hash_value);
    transparent_crc(p_773->g_146.s3, "p_773->g_146.s3", print_hash_value);
    transparent_crc(p_773->g_146.s4, "p_773->g_146.s4", print_hash_value);
    transparent_crc(p_773->g_146.s5, "p_773->g_146.s5", print_hash_value);
    transparent_crc(p_773->g_146.s6, "p_773->g_146.s6", print_hash_value);
    transparent_crc(p_773->g_146.s7, "p_773->g_146.s7", print_hash_value);
    transparent_crc(p_773->g_146.s8, "p_773->g_146.s8", print_hash_value);
    transparent_crc(p_773->g_146.s9, "p_773->g_146.s9", print_hash_value);
    transparent_crc(p_773->g_146.sa, "p_773->g_146.sa", print_hash_value);
    transparent_crc(p_773->g_146.sb, "p_773->g_146.sb", print_hash_value);
    transparent_crc(p_773->g_146.sc, "p_773->g_146.sc", print_hash_value);
    transparent_crc(p_773->g_146.sd, "p_773->g_146.sd", print_hash_value);
    transparent_crc(p_773->g_146.se, "p_773->g_146.se", print_hash_value);
    transparent_crc(p_773->g_146.sf, "p_773->g_146.sf", print_hash_value);
    transparent_crc(p_773->g_180.f0, "p_773->g_180.f0", print_hash_value);
    transparent_crc(p_773->g_180.f1, "p_773->g_180.f1", print_hash_value);
    transparent_crc(p_773->g_180.f2, "p_773->g_180.f2", print_hash_value);
    transparent_crc(p_773->g_182, "p_773->g_182", print_hash_value);
    transparent_crc(p_773->g_187.x, "p_773->g_187.x", print_hash_value);
    transparent_crc(p_773->g_187.y, "p_773->g_187.y", print_hash_value);
    transparent_crc(p_773->g_203, "p_773->g_203", print_hash_value);
    transparent_crc(p_773->g_210.s0, "p_773->g_210.s0", print_hash_value);
    transparent_crc(p_773->g_210.s1, "p_773->g_210.s1", print_hash_value);
    transparent_crc(p_773->g_210.s2, "p_773->g_210.s2", print_hash_value);
    transparent_crc(p_773->g_210.s3, "p_773->g_210.s3", print_hash_value);
    transparent_crc(p_773->g_210.s4, "p_773->g_210.s4", print_hash_value);
    transparent_crc(p_773->g_210.s5, "p_773->g_210.s5", print_hash_value);
    transparent_crc(p_773->g_210.s6, "p_773->g_210.s6", print_hash_value);
    transparent_crc(p_773->g_210.s7, "p_773->g_210.s7", print_hash_value);
    transparent_crc(p_773->g_223.f0, "p_773->g_223.f0", print_hash_value);
    transparent_crc(p_773->g_223.f1, "p_773->g_223.f1", print_hash_value);
    transparent_crc(p_773->g_223.f2, "p_773->g_223.f2", print_hash_value);
    transparent_crc(p_773->g_233, "p_773->g_233", print_hash_value);
    transparent_crc(p_773->g_275.s0, "p_773->g_275.s0", print_hash_value);
    transparent_crc(p_773->g_275.s1, "p_773->g_275.s1", print_hash_value);
    transparent_crc(p_773->g_275.s2, "p_773->g_275.s2", print_hash_value);
    transparent_crc(p_773->g_275.s3, "p_773->g_275.s3", print_hash_value);
    transparent_crc(p_773->g_275.s4, "p_773->g_275.s4", print_hash_value);
    transparent_crc(p_773->g_275.s5, "p_773->g_275.s5", print_hash_value);
    transparent_crc(p_773->g_275.s6, "p_773->g_275.s6", print_hash_value);
    transparent_crc(p_773->g_275.s7, "p_773->g_275.s7", print_hash_value);
    transparent_crc(p_773->g_275.s8, "p_773->g_275.s8", print_hash_value);
    transparent_crc(p_773->g_275.s9, "p_773->g_275.s9", print_hash_value);
    transparent_crc(p_773->g_275.sa, "p_773->g_275.sa", print_hash_value);
    transparent_crc(p_773->g_275.sb, "p_773->g_275.sb", print_hash_value);
    transparent_crc(p_773->g_275.sc, "p_773->g_275.sc", print_hash_value);
    transparent_crc(p_773->g_275.sd, "p_773->g_275.sd", print_hash_value);
    transparent_crc(p_773->g_275.se, "p_773->g_275.se", print_hash_value);
    transparent_crc(p_773->g_275.sf, "p_773->g_275.sf", print_hash_value);
    transparent_crc(p_773->g_279, "p_773->g_279", print_hash_value);
    transparent_crc(p_773->g_280, "p_773->g_280", print_hash_value);
    transparent_crc(p_773->g_281, "p_773->g_281", print_hash_value);
    transparent_crc(p_773->g_282, "p_773->g_282", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_773->g_289[i][j], "p_773->g_289[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_773->g_290[i], "p_773->g_290[i]", print_hash_value);

    }
    transparent_crc(p_773->g_291, "p_773->g_291", print_hash_value);
    transparent_crc(p_773->g_303.x, "p_773->g_303.x", print_hash_value);
    transparent_crc(p_773->g_303.y, "p_773->g_303.y", print_hash_value);
    transparent_crc(p_773->g_317.x, "p_773->g_317.x", print_hash_value);
    transparent_crc(p_773->g_317.y, "p_773->g_317.y", print_hash_value);
    transparent_crc(p_773->g_317.z, "p_773->g_317.z", print_hash_value);
    transparent_crc(p_773->g_317.w, "p_773->g_317.w", print_hash_value);
    transparent_crc(p_773->g_321.x, "p_773->g_321.x", print_hash_value);
    transparent_crc(p_773->g_321.y, "p_773->g_321.y", print_hash_value);
    transparent_crc(p_773->g_322.s0, "p_773->g_322.s0", print_hash_value);
    transparent_crc(p_773->g_322.s1, "p_773->g_322.s1", print_hash_value);
    transparent_crc(p_773->g_322.s2, "p_773->g_322.s2", print_hash_value);
    transparent_crc(p_773->g_322.s3, "p_773->g_322.s3", print_hash_value);
    transparent_crc(p_773->g_322.s4, "p_773->g_322.s4", print_hash_value);
    transparent_crc(p_773->g_322.s5, "p_773->g_322.s5", print_hash_value);
    transparent_crc(p_773->g_322.s6, "p_773->g_322.s6", print_hash_value);
    transparent_crc(p_773->g_322.s7, "p_773->g_322.s7", print_hash_value);
    transparent_crc(p_773->g_322.s8, "p_773->g_322.s8", print_hash_value);
    transparent_crc(p_773->g_322.s9, "p_773->g_322.s9", print_hash_value);
    transparent_crc(p_773->g_322.sa, "p_773->g_322.sa", print_hash_value);
    transparent_crc(p_773->g_322.sb, "p_773->g_322.sb", print_hash_value);
    transparent_crc(p_773->g_322.sc, "p_773->g_322.sc", print_hash_value);
    transparent_crc(p_773->g_322.sd, "p_773->g_322.sd", print_hash_value);
    transparent_crc(p_773->g_322.se, "p_773->g_322.se", print_hash_value);
    transparent_crc(p_773->g_322.sf, "p_773->g_322.sf", print_hash_value);
    transparent_crc(p_773->g_333.x, "p_773->g_333.x", print_hash_value);
    transparent_crc(p_773->g_333.y, "p_773->g_333.y", print_hash_value);
    transparent_crc(p_773->g_339.x, "p_773->g_339.x", print_hash_value);
    transparent_crc(p_773->g_339.y, "p_773->g_339.y", print_hash_value);
    transparent_crc(p_773->g_354, "p_773->g_354", print_hash_value);
    transparent_crc(p_773->g_362, "p_773->g_362", print_hash_value);
    transparent_crc(p_773->g_368.f0, "p_773->g_368.f0", print_hash_value);
    transparent_crc(p_773->g_368.f1, "p_773->g_368.f1", print_hash_value);
    transparent_crc(p_773->g_368.f2, "p_773->g_368.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_773->g_371[i][j][k].f0, "p_773->g_371[i][j][k].f0", print_hash_value);
                transparent_crc(p_773->g_371[i][j][k].f1, "p_773->g_371[i][j][k].f1", print_hash_value);
                transparent_crc(p_773->g_371[i][j][k].f2, "p_773->g_371[i][j][k].f2", print_hash_value);

            }
        }
    }
    transparent_crc(p_773->g_397, "p_773->g_397", print_hash_value);
    transparent_crc(p_773->g_398, "p_773->g_398", print_hash_value);
    transparent_crc(p_773->g_400, "p_773->g_400", print_hash_value);
    transparent_crc(p_773->g_401, "p_773->g_401", print_hash_value);
    transparent_crc(p_773->g_461, "p_773->g_461", print_hash_value);
    transparent_crc(p_773->g_769.f0, "p_773->g_769.f0", print_hash_value);
    transparent_crc(p_773->v_collective, "p_773->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 87; i++)
            transparent_crc(p_773->g_special_values[i + 87 * get_linear_group_id()], "p_773->g_special_values[i + 87 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 87; i++)
            transparent_crc(p_773->l_special_values[i], "p_773->l_special_values[i]", print_hash_value);
    transparent_crc(p_773->l_comm_values[get_linear_local_id()], "p_773->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_773->g_comm_values[get_linear_group_id() * 97 + get_linear_local_id()], "p_773->g_comm_values[get_linear_group_id() * 97 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
