// --atomics 26 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 60,26,4 -l 2,13,4
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

__constant uint32_t permutations[10][104] = {
{31,87,21,51,72,91,13,69,102,99,41,14,52,5,76,96,81,28,45,10,47,32,79,85,3,11,74,84,35,60,20,55,25,75,77,88,39,24,12,61,63,53,37,58,66,4,68,30,93,70,9,26,54,65,40,80,64,103,101,90,17,1,8,16,56,43,50,100,44,57,98,38,48,29,36,82,73,78,18,94,59,7,27,97,67,2,92,23,33,46,83,34,86,19,49,42,71,62,89,22,6,0,95,15}, // permutation 0
{76,24,6,35,48,61,100,85,77,51,82,5,57,86,66,71,65,62,97,103,46,15,28,54,67,53,1,63,89,40,56,38,10,22,98,8,13,12,81,21,14,64,19,23,32,88,58,96,99,26,34,0,47,43,78,52,41,60,101,29,79,84,18,17,7,49,3,30,2,90,31,59,55,39,45,87,68,74,69,37,92,70,4,25,102,20,50,80,72,75,9,91,33,44,16,94,11,73,42,36,93,83,27,95}, // permutation 1
{22,89,21,70,28,30,27,99,75,4,59,33,77,63,84,43,51,100,5,17,42,72,82,81,83,54,90,11,16,44,14,57,48,35,94,38,29,68,85,98,87,46,12,8,86,15,96,18,32,102,2,61,47,1,41,69,56,65,10,92,9,91,71,20,6,58,101,34,62,37,19,78,66,13,95,80,0,88,3,50,93,7,52,24,40,60,97,79,103,39,26,53,45,31,36,64,74,25,23,76,67,49,73,55}, // permutation 2
{11,70,51,40,8,55,3,101,53,25,15,96,35,46,81,82,38,24,58,36,72,1,17,30,79,49,85,44,90,64,7,80,77,4,61,31,98,32,97,45,89,83,5,14,42,91,21,65,56,19,37,92,28,26,48,39,50,76,22,67,66,63,43,9,69,60,59,86,54,57,34,18,10,93,2,99,100,71,41,27,29,78,6,95,73,13,12,74,0,52,33,23,102,75,47,62,68,84,88,103,94,20,16,87}, // permutation 3
{67,15,84,79,36,56,58,42,35,69,39,96,9,76,29,2,20,61,25,13,87,94,81,10,18,31,44,75,62,28,52,95,34,73,37,89,63,72,101,98,47,7,86,85,3,30,17,88,97,70,41,54,99,78,43,21,12,32,49,16,90,103,40,46,92,8,91,68,24,93,19,27,82,66,77,55,11,0,80,1,26,4,45,53,64,60,33,6,51,23,102,71,74,22,48,14,59,57,5,100,83,65,50,38}, // permutation 4
{103,79,27,44,91,30,3,12,72,2,75,64,5,31,6,86,18,46,52,70,93,0,4,16,32,43,58,35,36,20,59,61,92,60,102,101,26,22,39,85,87,55,49,56,37,38,96,71,24,15,73,54,50,21,41,77,82,34,66,98,68,100,94,74,1,10,7,81,28,78,11,25,67,84,19,17,62,99,42,14,33,9,89,8,40,47,29,83,65,63,51,48,23,45,57,53,88,76,95,69,13,80,97,90}, // permutation 5
{35,38,79,86,70,42,87,85,90,37,32,99,73,81,24,11,103,54,39,15,71,94,49,19,34,72,63,29,93,69,96,3,82,22,56,97,53,102,40,58,23,66,13,25,16,64,9,33,65,62,1,68,60,44,98,12,0,78,77,41,36,6,5,61,92,50,47,100,51,46,89,101,88,7,4,2,76,67,28,10,91,59,45,31,83,20,95,27,21,8,30,14,43,48,84,74,55,18,75,52,57,17,80,26}, // permutation 6
{24,60,46,37,80,96,79,83,56,32,16,86,101,7,18,73,40,28,90,71,99,78,89,3,6,93,58,9,25,63,2,10,22,92,53,62,74,95,30,76,66,47,43,0,27,11,81,26,33,35,23,39,29,42,19,15,87,100,5,75,61,17,21,34,85,98,45,67,72,8,94,102,54,88,77,1,59,44,12,49,20,91,69,31,57,103,68,82,97,13,64,55,70,38,84,48,51,52,65,14,36,50,41,4}, // permutation 7
{62,48,86,65,68,64,98,21,36,85,53,88,54,23,25,15,28,96,87,34,10,22,67,31,72,91,5,97,38,52,59,13,43,84,41,27,95,16,7,103,20,32,79,42,83,37,24,61,82,14,26,30,81,71,0,58,46,45,44,90,57,39,18,75,35,77,11,51,55,4,56,1,47,80,49,3,78,94,63,19,50,6,101,100,33,29,92,70,102,76,66,93,40,73,17,60,8,9,69,12,99,74,89,2}, // permutation 8
{11,89,40,62,60,0,52,8,28,57,3,82,83,6,19,24,41,97,69,22,14,51,5,18,37,29,75,103,102,74,88,25,10,33,48,78,63,47,9,44,34,1,61,100,95,15,35,43,49,17,68,79,91,77,85,64,21,13,67,59,39,72,32,36,55,99,26,66,81,23,94,42,12,87,20,71,30,50,27,16,80,98,101,73,96,54,7,86,2,31,70,58,38,65,76,53,46,45,92,93,4,84,56,90} // permutation 9
};

// Seed: 1907099626

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   int32_t  f1;
   volatile int32_t  f2;
   int32_t  f3;
   volatile uint16_t  f4;
};

struct S1 {
    int32_t g_17;
    VECTOR(int64_t, 8) g_46;
    int16_t g_63[6];
    uint16_t g_65;
    int32_t g_67;
    uint64_t g_78[5];
    uint8_t g_97;
    int32_t g_106;
    int32_t * volatile g_105;
    uint32_t g_136;
    int64_t g_144;
    volatile int32_t g_153[5][10][5];
    volatile int16_t g_154;
    volatile int32_t g_155;
    volatile uint8_t g_156;
    uint64_t g_164;
    VECTOR(int8_t, 2) g_177;
    VECTOR(int8_t, 8) g_201;
    volatile uint16_t g_221;
    volatile uint32_t g_268;
    volatile VECTOR(int16_t, 2) g_272;
    int8_t *g_281[6][6];
    int16_t *g_291;
    volatile VECTOR(int8_t, 16) g_294;
    int8_t g_302;
    uint32_t g_304;
    volatile VECTOR(uint8_t, 16) g_324;
    volatile VECTOR(uint8_t, 8) g_325;
    volatile VECTOR(uint8_t, 16) g_326;
    VECTOR(uint8_t, 4) g_327;
    VECTOR(int32_t, 8) g_331;
    uint32_t *g_335;
    union U0 g_352;
    volatile VECTOR(uint16_t, 8) g_378;
    uint64_t *g_400;
    uint64_t **g_399;
    uint64_t *** volatile g_398;
    volatile VECTOR(int16_t, 2) g_448;
    uint32_t g_491;
    int64_t g_504[9];
    volatile VECTOR(int32_t, 2) g_534;
    int32_t *g_537[4];
    int32_t ** volatile g_536;
    int32_t * volatile g_576[8];
    int32_t * volatile g_578;
    int32_t * volatile g_579;
    uint8_t g_580[5][10];
    int64_t *g_603;
    int64_t **g_602;
    int32_t g_631;
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
uint32_t  func_1(struct S1 * p_640);
int32_t * func_2(uint64_t  p_3, int32_t * p_4, uint64_t  p_5, struct S1 * p_640);
int16_t  func_6(uint64_t  p_7, int32_t * p_8, int64_t  p_9, int32_t * p_10, int32_t * p_11, struct S1 * p_640);
int16_t  func_14(uint16_t  p_15, struct S1 * p_640);
int32_t * func_23(int32_t * p_24, uint64_t  p_25, int32_t  p_26, uint32_t  p_27, struct S1 * p_640);
uint64_t  func_31(int32_t * p_32, int32_t * p_33, uint32_t  p_34, struct S1 * p_640);
int32_t * func_35(uint32_t  p_36, int16_t  p_37, int32_t * p_38, uint16_t  p_39, int32_t * p_40, struct S1 * p_640);
int32_t  func_42(int32_t * p_43, int32_t * p_44, uint64_t  p_45, struct S1 * p_640);
int32_t * func_47(uint32_t  p_48, int32_t * p_49, struct S1 * p_640);
uint32_t  func_50(int32_t  p_51, uint32_t  p_52, int32_t * p_53, int32_t * p_54, int64_t  p_55, struct S1 * p_640);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_640->l_comm_values p_640->g_17 p_640->g_46 p_640->g_comm_values p_640->g_63 p_640->g_65 p_640->g_67 p_640->g_97 p_640->g_105 p_640->g_106 p_640->g_136 p_640->g_78 p_640->g_144 p_640->g_156 p_640->g_164 p_640->g_177 p_640->g_154 p_640->g_268 p_640->g_302 p_640->g_304 p_640->g_400 p_640->g_504 p_640->g_291 p_640->g_327 p_640->g_399 p_640->g_331 p_640->g_536 p_640->g_335 p_640->g_398 p_640->g_201 p_640->g_491 p_640->g_579 p_640->g_580 p_640->g_352 p_640->g_602 p_640->g_324 p_640->g_325 p_640->g_631 p_640->g_153
 * writes: p_640->g_63 p_640->g_65 p_640->g_67 p_640->g_78 p_640->g_97 p_640->g_106 p_640->g_136 p_640->g_144 p_640->g_156 p_640->g_164 p_640->g_46 p_640->g_268 p_640->g_17 p_640->g_302 p_640->g_304 p_640->g_352.f0 p_640->g_491 p_640->g_537 p_640->l_comm_values p_640->g_352.f1 p_640->g_602 p_640->g_631 p_640->g_comm_values p_640->g_504
 */
uint32_t  func_1(struct S1 * p_640)
{ /* block id: 4 */
    uint32_t l_548[10] = {0xF8C23E36L,0xFD758A04L,0x62F6C6A1L,0xFD758A04L,0xF8C23E36L,0xF8C23E36L,0xFD758A04L,0x62F6C6A1L,0xFD758A04L,0xF8C23E36L};
    int32_t **l_549 = (void*)0;
    int32_t *l_551 = (void*)0;
    int32_t **l_550 = &l_551;
    uint32_t *l_581 = &p_640->g_136;
    int32_t l_601 = 0x6FCB230EL;
    int64_t ***l_604 = (void*)0;
    int64_t ***l_605[6] = {&p_640->g_602,&p_640->g_602,&p_640->g_602,&p_640->g_602,&p_640->g_602,&p_640->g_602};
    int16_t l_610 = 0x4DE8L;
    uint16_t *l_611[2];
    int32_t ***l_618 = (void*)0;
    int64_t **l_620 = &p_640->g_603;
    int16_t **l_629 = &p_640->g_291;
    int32_t *l_630 = &p_640->g_631;
    int32_t l_632[10][7][1] = {{{9L},{9L},{9L},{9L},{9L},{9L},{9L}},{{9L},{9L},{9L},{9L},{9L},{9L},{9L}},{{9L},{9L},{9L},{9L},{9L},{9L},{9L}},{{9L},{9L},{9L},{9L},{9L},{9L},{9L}},{{9L},{9L},{9L},{9L},{9L},{9L},{9L}},{{9L},{9L},{9L},{9L},{9L},{9L},{9L}},{{9L},{9L},{9L},{9L},{9L},{9L},{9L}},{{9L},{9L},{9L},{9L},{9L},{9L},{9L}},{{9L},{9L},{9L},{9L},{9L},{9L},{9L}},{{9L},{9L},{9L},{9L},{9L},{9L},{9L}}};
    uint32_t l_633 = 0x79D99BC1L;
    int32_t l_636 = 0x7803B808L;
    VECTOR(uint16_t, 2) l_639 = (VECTOR(uint16_t, 2))(3UL, 65531UL);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_611[i] = &p_640->g_65;
    (*p_640->g_536) = func_2((((*l_550) = (func_6((safe_div_func_uint16_t_u_u(1UL, func_14(p_640->l_comm_values[(safe_mod_func_uint32_t_u_u(p_640->tid, 104))], p_640))), p_640->g_335, l_548[1], ((*l_550) = p_640->g_335), p_640->g_335, p_640) , func_35((--(*l_581)), (FAKE_DIVERGE(p_640->global_1_offset, get_global_id(1), 10) , ((p_640->g_352 , 0x549CC11DL) || 4294967291UL)), &p_640->g_106, (*l_551), &p_640->g_106, p_640))) == p_640->g_335), l_581, p_640->g_201.s5, p_640);
    (*l_551) = (safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((safe_div_func_int16_t_s_s(((&p_640->g_65 == (void*)0) == (*l_551)), ((((VECTOR(uint16_t, 16))((p_640->g_65 = (safe_mul_func_uint8_t_u_u((**l_550), ((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(l_601, (l_610 = (((p_640->g_602 = p_640->g_602) != &p_640->g_603) & ((safe_div_func_int8_t_s_s((+1L), (safe_lshift_func_uint16_t_u_s((**l_550), 11)))) | 0L))))), 0xE3527995L)) | p_640->g_324.s6)))), ((VECTOR(uint16_t, 8))(0xE2B4L)), (**l_550), (**l_550), 0x520BL, ((VECTOR(uint16_t, 4))(65528UL)))).s9 , 0x39L) , GROUP_DIVERGE(2, 1)))), (**l_550))) , (*l_551)), (*l_551)));
    (*l_550) = func_23((*l_550), (safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_u((&l_551 != (l_549 = &l_551)), (safe_unary_minus_func_int16_t_s(((**l_629) = ((((p_640->g_602 = (void*)0) == (l_620 = &p_640->g_603)) <= (safe_lshift_func_uint8_t_u_s((**l_550), (((p_640->g_504[4] &= ((safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((GROUP_DIVERGE(0, 1) & (p_640->g_comm_values[p_640->tid] = (((((((p_640->g_325.s2 >= (((GROUP_DIVERGE(0, 1) , l_629) != (((*l_630) |= ((0x093F31EBL >= (*l_551)) ^ p_640->l_comm_values[(safe_mod_func_uint32_t_u_u(p_640->tid, 104))])) , l_629)) | 0UL)) > (*l_551)) > l_632[1][2][0]) <= 0xCDE5E978L) , 0xE095AB109A75EAF4L) < (**l_550)) <= (*l_551)))), (**l_550))), (-6L))) , p_640->g_153[3][2][1])) >= (-2L)) && (*l_551))))) <= (*l_551))))))) , (*l_551)), 1UL)) == l_633), 0x57L)), p_640->g_136, (*p_640->g_335), p_640);
    (**l_550) ^= (safe_sub_func_int16_t_s_s(l_636, ((*p_640->g_291) = (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(l_639.xyxxyxyy)).s1, 9UL)))));
    return p_640->g_580[3][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_302 p_640->l_comm_values
 * writes:
 */
int32_t * func_2(uint64_t  p_3, int32_t * p_4, uint64_t  p_5, struct S1 * p_640)
{ /* block id: 256 */
    VECTOR(uint8_t, 16) l_586 = (VECTOR(uint8_t, 16))(0xDFL, (VECTOR(uint8_t, 4))(0xDFL, (VECTOR(uint8_t, 2))(0xDFL, 0xF7L), 0xF7L), 0xF7L, 0xDFL, 0xF7L, (VECTOR(uint8_t, 2))(0xDFL, 0xF7L), (VECTOR(uint8_t, 2))(0xDFL, 0xF7L), 0xDFL, 0xF7L, 0xDFL, 0xF7L);
    int32_t l_587 = (-2L);
    int32_t *l_588[7][9][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    int i, j, k;
    l_587 &= (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_586.saac23a74848f2b99)).s4a18)).odd)), (uint8_t)p_640->g_302))))).xxxxxxxxxxxyxyyx)).lo)).lo)).xxwxwyyxwxwxwyyy, (uint8_t)p_640->l_comm_values[(safe_mod_func_uint32_t_u_u(p_640->tid, 104))]))).sc, 2));
    return l_588[4][2][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_398 p_640->g_399 p_640->g_400 p_640->g_78 p_640->g_comm_values p_640->g_201 p_640->g_304 p_640->g_63 p_640->g_491 p_640->g_579 p_640->g_580
 * writes: p_640->g_65 p_640->l_comm_values p_640->g_304 p_640->g_352.f1
 */
int16_t  func_6(uint64_t  p_7, int32_t * p_8, int64_t  p_9, int32_t * p_10, int32_t * p_11, struct S1 * p_640)
{ /* block id: 248 */
    uint64_t ***l_556 = (void*)0;
    VECTOR(uint8_t, 2) l_563 = (VECTOR(uint8_t, 2))(1UL, 0x44L);
    uint16_t *l_564 = &p_640->g_65;
    uint64_t *l_571 = &p_640->g_78[1];
    int64_t *l_572 = (void*)0;
    int64_t *l_573 = (void*)0;
    int64_t *l_574[1];
    int32_t *l_575 = (void*)0;
    int32_t *l_577 = (void*)0;
    int i;
    for (i = 0; i < 1; i++)
        l_574[i] = &p_640->g_144;
    (*p_640->g_579) = (+(!((*p_11) = (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((((p_640->l_comm_values[(safe_mod_func_uint32_t_u_u(p_640->tid, 104))] = ((l_556 == ((***p_640->g_398) , &p_640->g_399)) >= (safe_add_func_uint32_t_u_u(4294967290UL, (((safe_mul_func_int16_t_s_s((((p_640->g_comm_values[p_640->tid] > (((((safe_mod_func_int8_t_s_s(((((*l_564) = (0x1F7BL < (((VECTOR(uint8_t, 8))(l_563.xxyxyyyx)).s0 <= p_640->g_201.s3))) , (safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))((((l_563.x , (safe_rshift_func_uint16_t_u_s(((void*)0 != l_571), 4))) <= p_9) <= p_9), ((VECTOR(uint32_t, 4))(6UL)), 1UL, 1UL, 0xF7FE97D7L)).hi, ((VECTOR(uint32_t, 4))(0x2CC811C1L)), ((VECTOR(uint32_t, 4))(0xA0DD266DL))))).w < GROUP_DIVERGE(2, 1)), 4)), l_563.x))) ^ 4294967294UL), p_640->g_78[1])) , l_563.x) & 1UL) & 0x36FD5088L) || 1L)) > 0UL) > (*p_11)), FAKE_DIVERGE(p_640->group_1_offset, get_group_id(1), 10))) == 0x4D063F6AL) ^ p_640->g_63[0]))))) , (void*)0) != &p_640->g_17) , 0L) != 0x9A028758L), p_640->g_491)), 0x5199L)))));
    return p_640->g_580[3][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_17 p_640->g_46 p_640->g_comm_values p_640->g_63 p_640->l_comm_values p_640->g_65 p_640->g_67 p_640->g_97 p_640->g_105 p_640->g_106 p_640->g_136 p_640->g_78 p_640->g_144 p_640->g_156 p_640->g_164 p_640->g_177 p_640->g_154 p_640->g_268 p_640->g_302 p_640->g_304 p_640->g_400 p_640->g_504 p_640->g_291 p_640->g_327 p_640->g_399 p_640->g_331 p_640->g_536
 * writes: p_640->g_63 p_640->g_65 p_640->g_67 p_640->g_78 p_640->g_97 p_640->g_106 p_640->g_136 p_640->g_144 p_640->g_156 p_640->g_164 p_640->g_46 p_640->g_268 p_640->g_17 p_640->g_302 p_640->g_304 p_640->g_352.f0 p_640->g_491 p_640->g_537
 */
int16_t  func_14(uint16_t  p_15, struct S1 * p_640)
{ /* block id: 5 */
    int32_t *l_16[1];
    uint32_t l_18 = 0x8E92EDA8L;
    int i;
    for (i = 0; i < 1; i++)
        l_16[i] = &p_640->g_17;
    --l_18;
    for (p_15 = 0; (p_15 == 38); ++p_15)
    { /* block id: 9 */
        VECTOR(int8_t, 8) l_28 = (VECTOR(int8_t, 8))(0x25L, (VECTOR(int8_t, 4))(0x25L, (VECTOR(int8_t, 2))(0x25L, 0x5AL), 0x5AL), 0x5AL, 0x25L, 0x5AL);
        int32_t *l_41 = &p_640->g_17;
        int16_t *l_62 = &p_640->g_63[0];
        uint16_t *l_64 = &p_640->g_65;
        int16_t l_66 = 0x5D1BL;
        int32_t l_538 = 1L;
        int32_t l_539 = 0x0278A24DL;
        int32_t l_540 = 0x2A395E77L;
        int8_t l_541 = (-9L);
        int32_t l_542 = 3L;
        int32_t l_543 = 0L;
        VECTOR(int32_t, 16) l_544 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
        uint16_t l_545[4] = {0xC5D7L,0xC5D7L,0xC5D7L,0xC5D7L};
        int i;
        (*p_640->g_536) = func_23(&p_640->g_17, l_28.s1, (safe_add_func_uint64_t_u_u(((func_31(func_35(l_28.s7, p_640->g_17, l_41, (func_42((((VECTOR(int64_t, 4))(p_640->g_46.s4071)).z , func_47(func_50((!((safe_rshift_func_uint16_t_u_s(((*l_64) |= (p_640->g_46.s6 >= ((safe_rshift_func_uint16_t_u_u((((*l_62) |= ((((safe_div_func_int8_t_s_s(p_640->g_comm_values[p_640->tid], p_640->g_comm_values[p_640->tid])) || ((0x5B4D633C66883CE7L || p_15) && p_15)) , 0x0DFCL) , p_640->g_46.s5)) & (*l_41)), 1)) <= p_640->l_comm_values[(safe_mod_func_uint32_t_u_u(p_640->tid, 104))]))), p_640->g_comm_values[p_640->tid])) == (*l_41))), l_66, l_16[0], l_41, p_640->g_46.s6, p_640), l_16[0], p_640)), &p_640->g_17, (*l_41), p_640) , 65530UL), &p_640->g_17, p_640), l_16[0], p_15, p_640) , &p_640->g_17) != l_41), p_15)), l_66, p_640);
        l_545[1]++;
        if (p_15)
            break;
    }
    return (*p_640->g_291);
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_105 p_640->g_106 p_640->g_65 p_640->g_504 p_640->g_291 p_640->g_327 p_640->g_399 p_640->g_400 p_640->g_78 p_640->g_331 p_640->g_534 p_640->g_17
 * writes: p_640->g_491 p_640->g_65 p_640->g_63 p_640->g_17 p_640->g_106
 */
int32_t * func_23(int32_t * p_24, uint64_t  p_25, int32_t  p_26, uint32_t  p_27, struct S1 * p_640)
{ /* block id: 234 */
    VECTOR(int32_t, 4) l_523 = (VECTOR(int32_t, 4))(0x2D5F306DL, (VECTOR(int32_t, 2))(0x2D5F306DL, 0x5319FBE8L), 0x5319FBE8L);
    VECTOR(int16_t, 8) l_528 = (VECTOR(int16_t, 8))(0x045FL, (VECTOR(int16_t, 4))(0x045FL, (VECTOR(int16_t, 2))(0x045FL, 0x7A55L), 0x7A55L), 0x7A55L, 0x045FL, 0x7A55L);
    uint8_t *l_529 = (void*)0;
    int32_t *l_535 = &p_640->g_17;
    int i;
    (*p_24) = (safe_lshift_func_uint16_t_u_u((((2UL != (safe_div_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((*p_640->g_291) = ((l_523.x = (safe_mod_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((*p_640->g_105) && ((VECTOR(int32_t, 2))(0x15CCE685L, 1L)).hi), (4294967295UL | ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_523.xyyxyzyywwxwyxzx)).sa100)).y))), (safe_sub_func_uint32_t_u_u((p_640->g_491 = ((VECTOR(uint32_t, 2))(1UL, 0UL)).odd), (safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(l_528.s7035)).w, l_523.z))))))) & (safe_sub_func_int32_t_s_s(0x74929285L, (~((p_25 || (safe_mul_func_uint8_t_u_u(l_528.s2, (((p_27 & (p_640->g_65 &= ((l_528.s5 , &p_25) != &p_25))) == p_26) > l_528.s1)))) > p_640->g_504[4])))))), p_640->g_327.w)), l_528.s7)) | (**p_640->g_399)) < 7UL), p_25))) & 0x08L) >= p_640->g_331.s1), 4));
    (*p_24) &= ((VECTOR(int32_t, 16))(p_640->g_534.yyyxyyyxxyyxyxyy)).se;
    return l_535;
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_144 p_640->g_400 p_640->g_78 p_640->g_17
 * writes: p_640->g_144 p_640->g_302 p_640->g_17
 */
uint64_t  func_31(int32_t * p_32, int32_t * p_33, uint32_t  p_34, struct S1 * p_640)
{ /* block id: 221 */
    uint8_t l_497 = 252UL;
    int32_t *l_499[10][7][3] = {{{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0}},{{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0}},{{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0}},{{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0}},{{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0}},{{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0}},{{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0}},{{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0}},{{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0}},{{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0},{(void*)0,&p_640->g_17,(void*)0}}};
    int32_t **l_498 = &l_499[1][0][1];
    uint32_t *l_505 = &p_640->g_491;
    int8_t *l_506 = &p_640->g_302;
    int8_t *l_507 = (void*)0;
    int8_t *l_508 = (void*)0;
    int8_t *l_509 = (void*)0;
    int32_t l_510[5];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_510[i] = 0x1FC75901L;
    for (p_640->g_144 = 19; (p_640->g_144 < (-4)); p_640->g_144--)
    { /* block id: 224 */
        return l_497;
    }
    (*l_498) = p_32;
    (*p_33) ^= (((*p_640->g_400) , 0xFE0FFBBDL) > (((l_510[2] = ((*l_506) = (((*l_498) = p_32) == p_32))) > 0x26L) , 0x7CB2F30BL));
    return (*p_640->g_400);
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_268 p_640->g_272 p_640->g_105 p_640->g_106 p_640->g_302 p_640->g_304 p_640->g_63 p_640->g_136 p_640->g_78 p_640->g_144 p_640->g_17 p_640->g_97 p_640->g_46 p_640->g_156 p_640->l_comm_values p_640->g_164 p_640->g_177 p_640->g_154 p_640->g_65 p_640->g_352.f0 p_640->g_448 p_640->g_399 p_640->g_400 p_640->g_331
 * writes: p_640->g_268 p_640->g_17 p_640->g_302 p_640->g_304 p_640->g_63 p_640->g_136 p_640->g_144 p_640->g_156 p_640->g_164 p_640->g_46 p_640->g_65 p_640->g_352.f0 p_640->g_491 p_640->g_106
 */
int32_t * func_35(uint32_t  p_36, int16_t  p_37, int32_t * p_38, uint16_t  p_39, int32_t * p_40, struct S1 * p_640)
{ /* block id: 108 */
    int16_t l_263 = 0x7F10L;
    int32_t l_264 = 0x0AB5CC9FL;
    int32_t l_266 = 0x700A7447L;
    int32_t l_267 = 0L;
    int8_t *l_280 = (void*)0;
    VECTOR(uint16_t, 16) l_356 = (VECTOR(uint16_t, 16))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x5132L), 0x5132L), 0x5132L, 6UL, 0x5132L, (VECTOR(uint16_t, 2))(6UL, 0x5132L), (VECTOR(uint16_t, 2))(6UL, 0x5132L), 6UL, 0x5132L, 6UL, 0x5132L);
    uint32_t **l_362 = &p_640->g_335;
    uint8_t l_406 = 0x71L;
    int32_t l_413 = (-7L);
    int32_t l_414 = 0x727EBF08L;
    int32_t l_419 = (-4L);
    int32_t l_421[5][10][5] = {{{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)}},{{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)}},{{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)}},{{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)}},{{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)},{0x5B1DAE3BL,(-1L),0x60BC4647L,5L,(-1L)}}};
    VECTOR(uint32_t, 4) l_468 = (VECTOR(uint32_t, 4))(0x56DD796FL, (VECTOR(uint32_t, 2))(0x56DD796FL, 0xDB93795FL), 0xDB93795FL);
    VECTOR(uint32_t, 4) l_469 = (VECTOR(uint32_t, 4))(0xD2100800L, (VECTOR(uint32_t, 2))(0xD2100800L, 0x7AA0ADAAL), 0x7AA0ADAAL);
    VECTOR(uint16_t, 8) l_476 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 6UL), 6UL), 6UL, 0UL, 6UL);
    int16_t l_488 = 3L;
    int64_t l_493 = 0x2A8DCFE52B2F2088L;
    int32_t *l_494 = &l_419;
    int i, j, k;
    if (l_263)
    { /* block id: 109 */
        int32_t *l_265[1];
        VECTOR(int16_t, 16) l_271 = (VECTOR(int16_t, 16))(0x5DBFL, (VECTOR(int16_t, 4))(0x5DBFL, (VECTOR(int16_t, 2))(0x5DBFL, 0x3755L), 0x3755L), 0x3755L, 0x5DBFL, 0x3755L, (VECTOR(int16_t, 2))(0x5DBFL, 0x3755L), (VECTOR(int16_t, 2))(0x5DBFL, 0x3755L), 0x5DBFL, 0x3755L, 0x5DBFL, 0x3755L);
        VECTOR(uint16_t, 2) l_273 = (VECTOR(uint16_t, 2))(65535UL, 1UL);
        uint32_t l_286 = 0xFB4660FDL;
        uint32_t l_313 = 0xFAD6F11BL;
        uint32_t **l_361[4];
        uint64_t *l_385 = &p_640->g_78[1];
        uint64_t **l_384 = &l_385;
        int16_t *l_392 = &p_640->g_63[0];
        int32_t l_422 = 5L;
        int8_t l_455 = 0L;
        int16_t l_490 = 0x731CL;
        uint16_t l_492 = 0xAD78L;
        int i;
        for (i = 0; i < 1; i++)
            l_265[i] = (void*)0;
        for (i = 0; i < 4; i++)
            l_361[i] = (void*)0;
        p_640->g_268++;
        (*p_38) = (((VECTOR(uint8_t, 2))(250UL, 0xABL)).hi , ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 8))(l_271.s4fbf96ee)), ((VECTOR(int16_t, 16))(p_640->g_272.xxyxxyyxyyxxxyxy)).lo))), ((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 2))(l_273.yx))))).yxxyxyxx))).s4);
        if ((*p_640->g_105))
        { /* block id: 112 */
            int16_t *l_290 = (void*)0;
            int32_t l_305 = 0x4A65A85AL;
            int32_t l_306 = 0x322C1001L;
            int32_t l_307 = 0x2E4ECC75L;
            int32_t l_312 = 0x68BBB4E7L;
            VECTOR(int32_t, 8) l_316 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x49B41CF9L), 0x49B41CF9L), 0x49B41CF9L, 1L, 0x49B41CF9L);
            uint32_t *l_332 = &p_640->g_304;
            VECTOR(int32_t, 4) l_369 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x43184ADCL), 0x43184ADCL);
            uint32_t l_423 = 0x8B3FC25CL;
            int i;
            for (l_266 = 0; (l_266 > (-23)); l_266 = safe_sub_func_int32_t_s_s(l_266, 4))
            { /* block id: 115 */
                uint16_t *l_299 = &p_640->g_65;
                int32_t l_336 = 0x7531CD4FL;
                int32_t l_338 = 4L;
                int32_t l_339 = 1L;
                int32_t l_340[2];
                int16_t l_341 = (-1L);
                int16_t *l_360[10];
                int i;
                for (i = 0; i < 2; i++)
                    l_340[i] = (-10L);
                for (i = 0; i < 10; i++)
                    l_360[i] = &l_341;
                for (p_640->g_17 = 13; (p_640->g_17 != 28); p_640->g_17++)
                { /* block id: 118 */
                    uint16_t *l_284 = (void*)0;
                    uint16_t *l_285[2];
                    int16_t **l_289[7];
                    uint8_t *l_300 = (void*)0;
                    uint8_t *l_301 = &p_640->g_97;
                    uint32_t *l_303[6][2] = {{&p_640->g_304,&p_640->g_304},{&p_640->g_304,&p_640->g_304},{&p_640->g_304,&p_640->g_304},{&p_640->g_304,&p_640->g_304},{&p_640->g_304,&p_640->g_304},{&p_640->g_304,&p_640->g_304}};
                    int32_t *l_310 = &l_267;
                    int32_t l_311 = 0x3B22E1C9L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_285[i] = &p_640->g_65;
                    for (i = 0; i < 7; i++)
                        l_289[i] = (void*)0;
                    p_640->g_302 ^= ((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(0xEBL, 0xDFL, ((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(252UL, (!((*l_301) = (((((l_280 != (p_640->g_281[2][3] = (void*)0)) , p_37) ^ ((((safe_add_func_uint16_t_u_u((--l_286), ((l_290 = &l_263) != (p_640->g_291 = &p_37)))) != ((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_640->g_294.s436bdc6ee1362417)).scd)), (int8_t)(safe_div_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((l_285[0] = l_299) == (FAKE_DIVERGE(p_640->group_0_offset, get_group_id(0), 10) , &p_640->g_65)), (*p_640->g_105))), (*p_40)))))).yyyy, ((VECTOR(uint8_t, 4))(7UL))))).w, l_267)) , (-1L))) || FAKE_DIVERGE(p_640->group_2_offset, get_group_id(2), 10)) , 0L)) , (*p_38)) < (-1L)))), 0UL, 0xC1L)))).xwzxzwxy)).s23, ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 2))(0x6CL))))), ((VECTOR(uint8_t, 8))(0xD2L)), 0xA9L, l_266, 0UL, 0xC2L)).s9, l_267)) <= 0x00L);
                    l_310 = ((p_640->g_304++) , func_47(p_37, &p_640->g_17, p_640));
                    l_311 ^= (-1L);
                    ++l_313;
                }
            }
            for (p_640->g_65 = 0; (p_640->g_65 >= 38); p_640->g_65 = safe_add_func_uint8_t_u_u(p_640->g_65, 1))
            { /* block id: 176 */
                int32_t **l_403 = (void*)0;
                int32_t **l_404 = &l_265[0];
                int32_t l_405[2];
                int64_t l_418 = (-3L);
                int i;
                for (i = 0; i < 2; i++)
                    l_405[i] = 0x1CF04AE1L;
                (*l_404) = (void*)0;
                l_406++;
                for (p_640->g_352.f0 = 0; (p_640->g_352.f0 < 15); ++p_640->g_352.f0)
                { /* block id: 181 */
                    int32_t l_411 = 0x1E3C0347L;
                    int32_t l_412 = 0x4E8A7718L;
                    int32_t l_415[10] = {0x1708815BL,0x1708815BL,0x1708815BL,0x1708815BL,0x1708815BL,0x1708815BL,0x1708815BL,0x1708815BL,0x1708815BL,0x1708815BL};
                    int32_t l_416 = 0x264E6488L;
                    int32_t l_417 = 0x263DD0CFL;
                    int32_t l_420[4][2][8] = {{{(-9L),(-9L),(-3L),0x1A4101C2L,0L,0x04684782L,6L,5L},{(-9L),(-9L),(-3L),0x1A4101C2L,0L,0x04684782L,6L,5L}},{{(-9L),(-9L),(-3L),0x1A4101C2L,0L,0x04684782L,6L,5L},{(-9L),(-9L),(-3L),0x1A4101C2L,0L,0x04684782L,6L,5L}},{{(-9L),(-9L),(-3L),0x1A4101C2L,0L,0x04684782L,6L,5L},{(-9L),(-9L),(-3L),0x1A4101C2L,0L,0x04684782L,6L,5L}},{{(-9L),(-9L),(-3L),0x1A4101C2L,0L,0x04684782L,6L,5L},{(-9L),(-9L),(-3L),0x1A4101C2L,0L,0x04684782L,6L,5L}}};
                    int i, j, k;
                    --l_423;
                }
            }
        }
        else
        { /* block id: 185 */
            uint32_t l_454 = 0xF2B67EA1L;
            uint32_t l_458 = 4294967295UL;
            int8_t *l_459 = (void*)0;
            int8_t *l_460 = (void*)0;
            int8_t *l_461 = &p_640->g_302;
            VECTOR(uint8_t, 2) l_464 = (VECTOR(uint8_t, 2))(0x17L, 0x0FL);
            VECTOR(uint32_t, 2) l_467 = (VECTOR(uint32_t, 2))(0x6559CCFFL, 0UL);
            uint16_t *l_481 = (void*)0;
            uint16_t *l_482 = (void*)0;
            uint16_t *l_483 = (void*)0;
            uint16_t *l_484 = (void*)0;
            uint16_t *l_485 = &p_640->g_65;
            int16_t *l_489 = &l_263;
            int i;
            if ((atomic_inc(&p_640->g_atomic_input[26 * get_linear_group_id() + 11]) == 5))
            { /* block id: 187 */
                union U0 l_427 = {0xEC7A1E07L};/* VOLATILE GLOBAL l_427 */
                union U0 *l_426[7];
                union U0 *l_428 = &l_427;
                uint16_t l_429 = 0x946CL;
                int i;
                for (i = 0; i < 7; i++)
                    l_426[i] = &l_427;
                l_428 = l_426[1];
                if (l_429)
                { /* block id: 189 */
                    int32_t l_430 = 0x2E29979CL;
                    int8_t l_438 = 0x08L;
                    int32_t l_439 = 8L;
                    uint16_t l_440 = 0x7F3BL;
                    uint8_t l_443[9] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                    int i;
                    for (l_430 = 0; (l_430 == 15); l_430++)
                    { /* block id: 192 */
                        uint32_t l_433 = 9UL;
                        int32_t l_435 = 0L;
                        int32_t *l_434[6][9] = {{&l_435,(void*)0,(void*)0,&l_435,&l_435,(void*)0,(void*)0,&l_435,&l_435},{&l_435,(void*)0,(void*)0,&l_435,&l_435,(void*)0,(void*)0,&l_435,&l_435},{&l_435,(void*)0,(void*)0,&l_435,&l_435,(void*)0,(void*)0,&l_435,&l_435},{&l_435,(void*)0,(void*)0,&l_435,&l_435,(void*)0,(void*)0,&l_435,&l_435},{&l_435,(void*)0,(void*)0,&l_435,&l_435,(void*)0,(void*)0,&l_435,&l_435},{&l_435,(void*)0,(void*)0,&l_435,&l_435,(void*)0,(void*)0,&l_435,&l_435}};
                        int16_t l_436 = 0x4F2EL;
                        int8_t l_437 = 0x71L;
                        int i, j;
                        l_434[3][7] = ((l_433 , 0xF3E2837CL) , (void*)0);
                        l_436 |= (l_427.f3 = (-1L));
                        l_437 &= (-10L);
                    }
                    l_440--;
                    l_430 &= (l_443[6] , 0x0A62ABD5L);
                }
                else
                { /* block id: 200 */
                    uint32_t l_444 = 4294967295UL;
                    uint16_t l_445 = 0UL;
                    l_445 = l_444;
                }
                unsigned int result = 0;
                result += l_427.f0;
                result += l_427.f1;
                result += l_427.f2;
                result += l_427.f3;
                result += l_427.f4;
                result += l_429;
                atomic_add(&p_640->g_special_values[26 * get_linear_group_id() + 11], result);
            }
            else
            { /* block id: 203 */
                (1 + 1);
            }
            (*p_38) &= ((void*)0 != p_38);
            l_493 ^= ((VECTOR(int32_t, 4))((safe_rshift_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), ((((VECTOR(int16_t, 8))(p_640->g_448.yxxxxxyy)).s1 <= ((safe_unary_minus_func_uint16_t_u(((0x8A0397DAL == (safe_div_func_int8_t_s_s((l_455 |= ((0L <= p_36) , l_454)), (safe_lshift_func_uint8_t_u_u(((((VECTOR(int8_t, 2))(0x71L, 5L)).lo == ((*l_461) = l_458)) > ((+(!((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 8))((((l_492 = ((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 4))(l_464.yxyy)).z, (safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(upsample(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x91202AA5L, 0UL)).yyxx)).yzywywyw, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_467.yxxx)), 4294967289UL, ((VECTOR(uint32_t, 2))(l_468.zx)), 0x5F1D32F1L)).s70, ((VECTOR(uint32_t, 16))(l_469.wzyzwwyyyzzwwwyx)).s08))).xxxyxxyxxxxxyyyx)).odd))).hi)).z, (safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((p_640->g_491 = (((((*l_392) ^= l_421[3][0][3]) <= (!l_467.y)) | ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(l_476.s15257200)).s6201112373521612)).hi, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))((p_640->g_65 = p_640->g_144), ((VECTOR(uint16_t, 2))(0x4637L, 65529UL)), (safe_add_func_int8_t_s_s((((((((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((*l_489) &= ((safe_mul_func_uint16_t_u_u(((*l_485)++), ((l_488 >= GROUP_DIVERGE(0, 1)) ^ p_640->g_177.y))) > (**p_640->g_399))), ((VECTOR(int16_t, 4))(0x72BFL)), ((VECTOR(int16_t, 2))(0x15C7L)), 0x1A72L)).s6311516626521754)).s0a1a, ((VECTOR(int16_t, 4))(0x0136L))))).zxwxwzwz, ((VECTOR(int16_t, 8))(0x21F4L))))).s5 > p_640->g_331.s4) <= (-1L)) ^ p_640->g_177.x) , 0x5F2AL) <= p_39), l_490)), ((VECTOR(uint16_t, 2))(1UL)), 6UL, 65535UL)).s35)), p_640->g_17, 1UL, 0x881BL, 0UL, 0x4A5CL, 0UL))))).s30)).yyxx)).y) | 0UL)) <= p_39), 9)) , (*p_38)), (-5L))))))) || (*p_40))) || 0UL) <= l_458), 0x745E3148L, l_421[0][6][1], ((VECTOR(uint32_t, 4))(4294967295UL)), 4294967295UL)).lo, ((VECTOR(uint32_t, 4))(4294967295UL))))), 6UL, ((VECTOR(uint32_t, 2))(0x9C30984DL)), 3UL)).odd)).z ^ p_640->g_177.x) == 1L))) >= p_39)), 4))))) | 0UL))) || 65534UL)) & l_264))), (-8L), (-8L), 0x0AFED28CL)).z;
        }
    }
    else
    { /* block id: 217 */
        return &p_640->g_106;
    }
    return p_40;
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_136 p_640->g_17 p_640->g_105 p_640->g_106
 * writes: p_640->g_106
 */
int32_t  func_42(int32_t * p_43, int32_t * p_44, uint64_t  p_45, struct S1 * p_640)
{ /* block id: 86 */
    int8_t l_223 = 0x64L;
    (*p_640->g_105) ^= (l_223 & (p_640->g_136 ^ p_640->g_17));
    if ((atomic_inc(&p_640->g_atomic_input[26 * get_linear_group_id() + 5]) == 6))
    { /* block id: 89 */
        int16_t l_224 = 0L;
        uint8_t l_225 = 253UL;
        int16_t l_226 = 0x688EL;
        uint64_t l_227[6][3] = {{0xCDF3AC2458ECA6CAL,0x304DB0A48598CB14L,1UL},{0xCDF3AC2458ECA6CAL,0x304DB0A48598CB14L,1UL},{0xCDF3AC2458ECA6CAL,0x304DB0A48598CB14L,1UL},{0xCDF3AC2458ECA6CAL,0x304DB0A48598CB14L,1UL},{0xCDF3AC2458ECA6CAL,0x304DB0A48598CB14L,1UL},{0xCDF3AC2458ECA6CAL,0x304DB0A48598CB14L,1UL}};
        union U0 l_228 = {3UL};/* VOLATILE GLOBAL l_228 */
        int32_t l_229 = 0L;
        VECTOR(int64_t, 2) l_230 = (VECTOR(int64_t, 2))(0x0D96709BDB669D97L, 0x3E486600078894FDL);
        VECTOR(int64_t, 16) l_231 = (VECTOR(int64_t, 16))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), 1L), 1L), 1L, (-5L), 1L, (VECTOR(int64_t, 2))((-5L), 1L), (VECTOR(int64_t, 2))((-5L), 1L), (-5L), 1L, (-5L), 1L);
        VECTOR(int64_t, 4) l_232 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0L), 0L);
        VECTOR(int64_t, 2) l_233 = (VECTOR(int64_t, 2))(0x2A67BEE1DDF88960L, 0x030E31B005505002L);
        int16_t l_234 = 0L;
        int8_t l_235[10][3] = {{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L}};
        uint8_t l_236 = 0x2BL;
        int32_t l_237 = 0x25DA535EL;
        VECTOR(int64_t, 2) l_238 = (VECTOR(int64_t, 2))((-1L), 0x16D253E81AF92099L);
        VECTOR(int64_t, 2) l_239 = (VECTOR(int64_t, 2))((-1L), (-1L));
        VECTOR(int64_t, 4) l_240 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L);
        VECTOR(int64_t, 8) l_241 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L));
        VECTOR(int64_t, 4) l_242 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 1L), 1L);
        union U0 l_243[6] = {{4294967295UL},{0UL},{4294967295UL},{4294967295UL},{0UL},{4294967295UL}};
        int32_t l_244[8][3] = {{(-1L),0L,1L},{(-1L),0L,1L},{(-1L),0L,1L},{(-1L),0L,1L},{(-1L),0L,1L},{(-1L),0L,1L},{(-1L),0L,1L},{(-1L),0L,1L}};
        int16_t l_245 = 0x04D6L;
        VECTOR(int64_t, 8) l_246 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x3E3839243F142582L), 0x3E3839243F142582L), 0x3E3839243F142582L, 0L, 0x3E3839243F142582L);
        VECTOR(int64_t, 4) l_247 = (VECTOR(int64_t, 4))(0x32847284A4750A08L, (VECTOR(int64_t, 2))(0x32847284A4750A08L, 0x5C8104E0442118AFL), 0x5C8104E0442118AFL);
        int32_t l_248 = (-1L);
        uint32_t l_249 = 0xC2728AC2L;
        int32_t l_250[1][8][4] = {{{0x7DB600C3L,1L,0x7DB600C3L,0x7DB600C3L},{0x7DB600C3L,1L,0x7DB600C3L,0x7DB600C3L},{0x7DB600C3L,1L,0x7DB600C3L,0x7DB600C3L},{0x7DB600C3L,1L,0x7DB600C3L,0x7DB600C3L},{0x7DB600C3L,1L,0x7DB600C3L,0x7DB600C3L},{0x7DB600C3L,1L,0x7DB600C3L,0x7DB600C3L},{0x7DB600C3L,1L,0x7DB600C3L,0x7DB600C3L},{0x7DB600C3L,1L,0x7DB600C3L,0x7DB600C3L}}};
        int8_t l_251 = (-1L);
        int64_t l_252[8][10][2] = {{{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L}},{{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L}},{{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L}},{{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L}},{{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L}},{{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L}},{{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L}},{{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L},{3L,0x22FDE35EEEF44DA4L}}};
        int8_t l_253 = 1L;
        int32_t l_254 = (-5L);
        uint32_t l_255 = 0UL;
        int8_t l_256[3];
        uint32_t l_257 = 0UL;
        uint64_t l_258[6] = {0x1AE85B09196A860AL,0x5AE1925E8790BD5BL,0x1AE85B09196A860AL,0x1AE85B09196A860AL,0x5AE1925E8790BD5BL,0x1AE85B09196A860AL};
        int32_t l_259 = (-1L);
        int32_t *l_260[7] = {&l_237,&l_237,&l_237,&l_237,&l_237,&l_237,&l_237};
        int32_t *l_261[7] = {&l_248,&l_229,&l_248,&l_248,&l_229,&l_248,&l_248};
        int32_t *l_262[4][1][5] = {{{&l_244[5][0],&l_244[3][1],&l_237,&l_244[3][1],&l_244[5][0]}},{{&l_244[5][0],&l_244[3][1],&l_237,&l_244[3][1],&l_244[5][0]}},{{&l_244[5][0],&l_244[3][1],&l_237,&l_244[3][1],&l_244[5][0]}},{{&l_244[5][0],&l_244[3][1],&l_237,&l_244[3][1],&l_244[5][0]}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_256[i] = 0x12L;
        l_225 ^= (l_224 = 1L);
        l_227[5][1] = l_226;
        l_259 = (l_228 , (((l_230.x = (l_229 = 4294967295UL)) , ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 8))((-4L), 0x50DC95D9EC584207L, (-1L), ((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_231.sb388c127)))).s6536636230271031)).sb941, ((VECTOR(int64_t, 2))(0L, 3L)).xyyy))), (-1L))).hi, ((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_232.xyxy)))), (l_234 = ((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 8))(l_233.yyxxxxyy)).even, ((VECTOR(int64_t, 2))((-4L), 1L)).yyxx))).z), 0x456CB48F3E2441A6L, (-2L), 0x13B82C50AF9C1AF2L, 0x1DA7182866832C64L, (l_236 = (l_235[4][0] |= (-1L))), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x539717E3722A43CCL, (-1L))).yyxx)), 5L, (-10L))), (int64_t)l_237))).sac5a))).lo, ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 2))(l_238.xx)).xxxy, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_239.xxyyyxyx)))).s25)), 0x3EAC055DACA86B7FL, 0x1F24E963F069EE4EL, (-1L), 0x1167741F731B951BL, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(l_240.wz)).odd, ((VECTOR(int64_t, 4))(l_241.s7735)), ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 2))(0L, 0x041639376027655BL)), ((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 16))(hadd(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_242.zyxx)), (l_245 = (l_243[4] , (l_244[2][0] = 0x7BEBA78A4743BEBDL))), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x18BEC9C2DA4460E2L, 7L)))), 0x104F76D1B619E40EL)).s75, ((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 8))(l_246.s10263444)).s2123421653705661, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 8))(l_247.zyywxyxz)).s1201471156515215, (int64_t)(l_248 , (l_250[0][0][0] ^= l_249)), (int64_t)((((l_251 , l_252[2][9][1]) , l_253) , l_254) , 0x09B48C02728175C8L)))).odd)).s32, ((VECTOR(int64_t, 2))(0x2C1CEFCD2D91674EL))))).yxxxxxxy)).s0326530727017013))).se8))).yyyxyyyyxyxyyxyy, ((VECTOR(int64_t, 16))(0L))))).s35d3, ((VECTOR(int64_t, 4))(0x10FA34F1C786D4D2L))))).odd))), 0x5398EA8F6F0768CAL)), 8L, 0x22147C366842C025L)).s4592))), l_255, l_256[2], 0x6E64D8D01C44CF0EL, 0x4557E2185C57EE18L, 0x13AE9CA03AC845C9L, l_257, ((VECTOR(int64_t, 2))(0x4180C50B6E6383F7L)), 0x77E38AD08A1AE870L, (-5L), 0x3BE82BF19AEE28D2L, 0x616A5420B66CFF6EL)).s7a, ((VECTOR(int64_t, 2))(0x544BA349501CF558L)), ((VECTOR(int64_t, 2))(6L))))), ((VECTOR(int64_t, 2))((-1L)))))).lo) , l_258[5]));
        l_262[1][0][2] = (l_261[5] = l_260[2]);
        unsigned int result = 0;
        result += l_224;
        result += l_225;
        result += l_226;
        int l_227_i0, l_227_i1;
        for (l_227_i0 = 0; l_227_i0 < 6; l_227_i0++) {
            for (l_227_i1 = 0; l_227_i1 < 3; l_227_i1++) {
                result += l_227[l_227_i0][l_227_i1];
            }
        }
        result += l_228.f0;
        result += l_228.f1;
        result += l_228.f2;
        result += l_228.f3;
        result += l_228.f4;
        result += l_229;
        result += l_230.y;
        result += l_230.x;
        result += l_231.sf;
        result += l_231.se;
        result += l_231.sd;
        result += l_231.sc;
        result += l_231.sb;
        result += l_231.sa;
        result += l_231.s9;
        result += l_231.s8;
        result += l_231.s7;
        result += l_231.s6;
        result += l_231.s5;
        result += l_231.s4;
        result += l_231.s3;
        result += l_231.s2;
        result += l_231.s1;
        result += l_231.s0;
        result += l_232.w;
        result += l_232.z;
        result += l_232.y;
        result += l_232.x;
        result += l_233.y;
        result += l_233.x;
        result += l_234;
        int l_235_i0, l_235_i1;
        for (l_235_i0 = 0; l_235_i0 < 10; l_235_i0++) {
            for (l_235_i1 = 0; l_235_i1 < 3; l_235_i1++) {
                result += l_235[l_235_i0][l_235_i1];
            }
        }
        result += l_236;
        result += l_237;
        result += l_238.y;
        result += l_238.x;
        result += l_239.y;
        result += l_239.x;
        result += l_240.w;
        result += l_240.z;
        result += l_240.y;
        result += l_240.x;
        result += l_241.s7;
        result += l_241.s6;
        result += l_241.s5;
        result += l_241.s4;
        result += l_241.s3;
        result += l_241.s2;
        result += l_241.s1;
        result += l_241.s0;
        result += l_242.w;
        result += l_242.z;
        result += l_242.y;
        result += l_242.x;
        int l_243_i0;
        for (l_243_i0 = 0; l_243_i0 < 6; l_243_i0++) {
            result += l_243[l_243_i0].f0;
            result += l_243[l_243_i0].f1;
            result += l_243[l_243_i0].f2;
            result += l_243[l_243_i0].f3;
            result += l_243[l_243_i0].f4;
        }
        int l_244_i0, l_244_i1;
        for (l_244_i0 = 0; l_244_i0 < 8; l_244_i0++) {
            for (l_244_i1 = 0; l_244_i1 < 3; l_244_i1++) {
                result += l_244[l_244_i0][l_244_i1];
            }
        }
        result += l_245;
        result += l_246.s7;
        result += l_246.s6;
        result += l_246.s5;
        result += l_246.s4;
        result += l_246.s3;
        result += l_246.s2;
        result += l_246.s1;
        result += l_246.s0;
        result += l_247.w;
        result += l_247.z;
        result += l_247.y;
        result += l_247.x;
        result += l_248;
        result += l_249;
        int l_250_i0, l_250_i1, l_250_i2;
        for (l_250_i0 = 0; l_250_i0 < 1; l_250_i0++) {
            for (l_250_i1 = 0; l_250_i1 < 8; l_250_i1++) {
                for (l_250_i2 = 0; l_250_i2 < 4; l_250_i2++) {
                    result += l_250[l_250_i0][l_250_i1][l_250_i2];
                }
            }
        }
        result += l_251;
        int l_252_i0, l_252_i1, l_252_i2;
        for (l_252_i0 = 0; l_252_i0 < 8; l_252_i0++) {
            for (l_252_i1 = 0; l_252_i1 < 10; l_252_i1++) {
                for (l_252_i2 = 0; l_252_i2 < 2; l_252_i2++) {
                    result += l_252[l_252_i0][l_252_i1][l_252_i2];
                }
            }
        }
        result += l_253;
        result += l_254;
        result += l_255;
        int l_256_i0;
        for (l_256_i0 = 0; l_256_i0 < 3; l_256_i0++) {
            result += l_256[l_256_i0];
        }
        result += l_257;
        int l_258_i0;
        for (l_258_i0 = 0; l_258_i0 < 6; l_258_i0++) {
            result += l_258[l_258_i0];
        }
        result += l_259;
        atomic_add(&p_640->g_special_values[26 * get_linear_group_id() + 5], result);
    }
    else
    { /* block id: 104 */
        (1 + 1);
    }
    return l_223;
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_63 p_640->g_106 p_640->g_136 p_640->g_78 p_640->g_144 p_640->g_17 p_640->g_97 p_640->g_46 p_640->g_156 p_640->g_164 p_640->g_177 p_640->g_154 p_640->g_105 p_640->g_201 p_640->g_65 p_640->l_comm_values p_640->g_221
 * writes: p_640->g_63 p_640->g_136 p_640->g_144 p_640->g_156 p_640->g_164 p_640->g_46
 */
int32_t * func_47(uint32_t  p_48, int32_t * p_49, struct S1 * p_640)
{ /* block id: 57 */
    int32_t *l_125 = (void*)0;
    int32_t **l_126 = &l_125;
    int16_t *l_129 = (void*)0;
    int16_t *l_130[5];
    uint32_t *l_135 = &p_640->g_136;
    uint64_t *l_138[7];
    uint64_t **l_137 = &l_138[6];
    VECTOR(int64_t, 16) l_141 = (VECTOR(int64_t, 16))(6L, (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, 0x72B5FAC05FCAF600L), 0x72B5FAC05FCAF600L), 0x72B5FAC05FCAF600L, 6L, 0x72B5FAC05FCAF600L, (VECTOR(int64_t, 2))(6L, 0x72B5FAC05FCAF600L), (VECTOR(int64_t, 2))(6L, 0x72B5FAC05FCAF600L), 6L, 0x72B5FAC05FCAF600L, 6L, 0x72B5FAC05FCAF600L);
    int32_t l_145 = 1L;
    int32_t l_149 = 0x6FBF5F8EL;
    int32_t l_150[5];
    VECTOR(int64_t, 4) l_167 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x000718B624CAB1FCL), 0x000718B624CAB1FCL);
    VECTOR(uint16_t, 4) l_175 = (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0xDA83L), 0xDA83L);
    uint64_t l_185[6][7][6] = {{{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL}},{{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL}},{{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL}},{{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL}},{{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL}},{{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL},{0x6AE91A3732489128L,0x19375EC8F469B733L,0xA35959F263723E23L,0x2ADFB2AA1FC9FD4BL,0x395A3B4368622381L,0x3D55A550E5D44BBEL}}};
    VECTOR(int64_t, 16) l_193 = (VECTOR(int64_t, 16))((-3L), (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 0x050A1A16B741F678L), 0x050A1A16B741F678L), 0x050A1A16B741F678L, (-3L), 0x050A1A16B741F678L, (VECTOR(int64_t, 2))((-3L), 0x050A1A16B741F678L), (VECTOR(int64_t, 2))((-3L), 0x050A1A16B741F678L), (-3L), 0x050A1A16B741F678L, (-3L), 0x050A1A16B741F678L);
    VECTOR(int8_t, 16) l_202 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int8_t, 2))(0L, 1L), (VECTOR(int8_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
    VECTOR(int8_t, 4) l_203 = (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 1L), 1L);
    VECTOR(int8_t, 2) l_204 = (VECTOR(int8_t, 2))(0x4DL, 0x4AL);
    uint32_t l_208 = 0xB68F63ADL;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_130[i] = (void*)0;
    for (i = 0; i < 7; i++)
        l_138[i] = &p_640->g_78[1];
    for (i = 0; i < 5; i++)
        l_150[i] = (-1L);
    (*l_126) = l_125;
    if ((safe_mul_func_int16_t_s_s((p_640->g_63[0] ^= (p_48 , p_48)), (safe_sub_func_uint8_t_u_u((((*l_135) ^= (p_640->g_106 <= (safe_rshift_func_uint8_t_u_u(p_48, 6)))) , (((((((void*)0 != l_137) > (safe_rshift_func_int8_t_s_u((0x361DE361L & ((((VECTOR(int64_t, 4))(l_141.sd476)).z , p_640->g_78[1]) > ((safe_lshift_func_int8_t_s_u(((p_640->g_144 &= p_640->g_78[0]) || p_640->g_17), 1)) && GROUP_DIVERGE(0, 1)))), p_640->g_97))) ^ l_145) < p_640->g_46.s4) , &p_640->g_136) == &p_640->g_136)), 3L)))))
    { /* block id: 62 */
        int8_t l_152 = 0x2EL;
        uint64_t *l_163 = &p_640->g_164;
        VECTOR(int64_t, 2) l_168 = (VECTOR(int64_t, 2))(0x00C6D9DE4CBC4FE3L, 0x0C694B4B0C768C17L);
        VECTOR(uint8_t, 8) l_178 = (VECTOR(uint8_t, 8))(0x24L, (VECTOR(uint8_t, 4))(0x24L, (VECTOR(uint8_t, 2))(0x24L, 0x93L), 0x93L), 0x93L, 0x24L, 0x93L);
        VECTOR(int64_t, 8) l_192 = (VECTOR(int64_t, 8))(0x2ADD755139669681L, (VECTOR(int64_t, 4))(0x2ADD755139669681L, (VECTOR(int64_t, 2))(0x2ADD755139669681L, 0x0B2B691629920BD1L), 0x0B2B691629920BD1L), 0x0B2B691629920BD1L, 0x2ADD755139669681L, 0x0B2B691629920BD1L);
        int16_t **l_194 = &l_130[3];
        int64_t *l_195[4][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
        int32_t l_196 = 0x630DE83DL;
        int8_t *l_205 = (void*)0;
        int8_t *l_206 = (void*)0;
        int32_t l_207 = 0x26CF9FAFL;
        int32_t *l_209 = &l_150[2];
        int i, j;
        for (p_640->g_144 = 0; (p_640->g_144 != 18); p_640->g_144 = safe_add_func_uint16_t_u_u(p_640->g_144, 9))
        { /* block id: 65 */
            int32_t *l_148 = &p_640->g_106;
            int32_t *l_151[2];
            int i;
            for (i = 0; i < 2; i++)
                l_151[i] = &l_150[2];
            p_640->g_156--;
        }
        atomic_add(&p_640->g_atomic_reduction[get_linear_group_id()], (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((((--(*l_163)) , (((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 8))(9L, 0x091E9D71703F9351L, ((VECTOR(int64_t, 4))(l_167.yxyz)), (-2L), 0L)), ((VECTOR(int64_t, 4))(l_168.xxxx)).zxxwzzxw))).s3 > (((VECTOR(int16_t, 2))(0L, 0x2936L)).even , (p_48 & ((safe_mod_func_int16_t_s_s((~(((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_175.wxxz)).w, (safe_unary_minus_func_int64_t_s(((-8L) > ((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 2))(0x0FL, (-5L))).yyxxxyxy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_640->g_177.yy)).xyxx)), ((((((VECTOR(uint8_t, 16))(l_178.s2473451754070406)).sc ^ (safe_mul_func_int8_t_s_s((l_163 != l_138[0]), ((((safe_sub_func_int64_t_s_s(l_178.s0, p_48)) <= (safe_div_func_int64_t_s_s(((0x20E6L && (5UL >= 0x193B0A3500CD5182L)) | 8UL), l_178.s2))) & p_48) | p_640->g_46.s2)))) | p_640->g_154) && l_168.y) & (*p_49)), 0x12L, 9L, 0x31L))))))).s1465304045203024)).s4 , l_185[3][3][4]) > l_152)))))), 6)) , p_640->g_78[1]) | p_640->g_17)), l_152)) || p_640->g_136))))) ^ 0x1B82195782F34E29L), 0x16L)), 0x5682C875L)));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_640->v_collective += p_640->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        (*l_209) ^= (safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_640->local_2_offset, get_local_id(2), 10), (l_163 == ((((*p_640->g_105) != ((p_640->g_97 , (safe_add_func_uint16_t_u_u((p_48 , (safe_div_func_int32_t_s_s(((((p_640->g_136 ^ 0x8AL) <= ((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(4L, 0x581AA495B3EF3530L, ((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 16))(l_192.s2105456336467605)).s8232, ((VECTOR(int64_t, 2))(l_193.s90)).yyxy))), 0x33A4172F5B41CB99L, 0x4C591C3BF266B89EL)))))).s3 > (l_196 = (((*l_194) = l_129) != &p_640->g_63[0]))) == ((safe_div_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_640->local_0_offset, get_local_id(0), 10), (l_207 = ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(p_640->g_201.s55)).xyxy, (int8_t)((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(l_202.s60a1730d)).s51, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_203.ywzw)).even))))).yyxxxxxx, (int8_t)((VECTOR(int8_t, 16))(l_204.xyyxxxxxyxyxyxxy)).sa, (int8_t)l_192.s3))), p_640->g_65, 4L, ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))(0x5AL)), (-10L), 0x3AL)).s8))).odd)).odd))), p_48)) == l_208))) <= p_48) | p_640->l_comm_values[(safe_mod_func_uint32_t_u_u(p_640->tid, 104))]), 0x5DEB6486L))), p_48))) & p_640->g_144)) == p_48) , l_195[3][1]))));
    }
    else
    { /* block id: 74 */
        int32_t *l_212 = &l_150[2];
        int64_t *l_213 = (void*)0;
        int64_t *l_214 = (void*)0;
        int64_t *l_215 = (void*)0;
        int64_t **l_218 = &l_214;
        uint64_t *l_222[3][5];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 5; j++)
                l_222[i][j] = &p_640->g_78[1];
        }
        for (p_640->g_164 = (-15); (p_640->g_164 == 37); p_640->g_164 = safe_add_func_int8_t_s_s(p_640->g_164, 2))
        { /* block id: 77 */
            return p_49;
        }
        (*l_212) = ((p_640->g_46.s2 = p_48) & ((VECTOR(uint64_t, 4))(1UL, (((((safe_add_func_uint32_t_u_u(((*l_135) |= (*l_212)), (&p_640->g_144 == ((*l_218) = l_138[6])))) , (((VECTOR(uint64_t, 2))(0x6298BA18F78100EFL, 0x0318DBF95D60C054L)).odd , (((safe_mul_func_uint8_t_u_u(0x72L, (+p_640->g_136))) , l_130[3]) != (((VECTOR(int64_t, 8))((p_48 != (((p_48 ^ p_640->g_177.y) >= (*p_49)) <= p_640->g_221)), 0x72222A849F018EC7L, p_640->g_63[0], 0x460A11C9E3C08EB2L, ((VECTOR(int64_t, 2))(1L)), 0x5540E2C7BBA4E1F7L, 0x75F50E9BAB346613L)).s0 , &p_640->g_65)))) , (-1L)) , (void*)0) != l_222[1][2]), 0x9BB1D7BB2051E2B1L, 18446744073709551615UL)).w);
    }
    return &p_640->g_106;
}


/* ------------------------------------------ */
/* 
 * reads : p_640->g_17 p_640->g_67 p_640->g_46 p_640->g_65 p_640->g_63 p_640->g_97 p_640->g_105
 * writes: p_640->g_67 p_640->g_78 p_640->g_97 p_640->g_106
 */
uint32_t  func_50(int32_t  p_51, uint32_t  p_52, int32_t * p_53, int32_t * p_54, int64_t  p_55, struct S1 * p_640)
{ /* block id: 12 */
    int64_t l_76 = (-1L);
    uint64_t *l_77 = &p_640->g_78[1];
    int16_t l_89 = (-8L);
    int64_t *l_90[6];
    int32_t l_91 = 0x095D34B7L;
    int16_t l_92 = 4L;
    int32_t l_93 = (-1L);
    uint16_t *l_96[7] = {(void*)0,&p_640->g_65,(void*)0,(void*)0,&p_640->g_65,(void*)0,(void*)0};
    uint32_t l_111[1];
    int i;
    for (i = 0; i < 6; i++)
        l_90[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_111[i] = 4294967293UL;
    p_640->g_67 = (*p_54);
    l_93 ^= (safe_sub_func_int8_t_s_s(p_640->g_67, (~((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((((safe_mod_func_uint8_t_u_u((0L < (l_91 = ((l_76 < ((((*l_77) = 0x1DBD7CCF76E5F377L) | p_51) | (safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 8))(0x7B986AF2L, (safe_add_func_uint32_t_u_u(p_640->g_46.s6, (safe_mul_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((l_89 >= ((void*)0 == &l_89)), 0x46149AF4L)), l_76)) <= p_640->g_65) > 0xC0A08677L), p_640->g_63[4])))), ((VECTOR(int32_t, 4))(4L)), (-1L), 0x3C176401L)).s1, 0x20237AEEL)))) != GROUP_DIVERGE(0, 1)))), p_640->g_67)) >= (-2L)) || p_640->g_63[0]) & p_52), l_89)) | p_55), l_92)) , p_640->g_65))));
    for (l_91 = 24; (l_91 >= 1); l_91 = safe_sub_func_int64_t_s_s(l_91, 4))
    { /* block id: 19 */
        int16_t l_112[1];
        int i;
        for (i = 0; i < 1; i++)
            l_112[i] = 0x692BL;
        if ((l_96[3] != l_96[3]))
        { /* block id: 20 */
            ++p_640->g_97;
            if ((atomic_inc(&p_640->l_atomic_input[1]) == 2))
            { /* block id: 23 */
                uint16_t l_100 = 0x161CL;
                int16_t l_101[4];
                int32_t l_102 = 0x0A9706E1L;
                int32_t l_104 = (-6L);
                int32_t *l_103 = &l_104;
                int i;
                for (i = 0; i < 4; i++)
                    l_101[i] = 1L;
                l_102 = (l_101[1] = (l_100 = 0x7550B109L));
                l_103 = (void*)0;
                unsigned int result = 0;
                result += l_100;
                int l_101_i0;
                for (l_101_i0 = 0; l_101_i0 < 4; l_101_i0++) {
                    result += l_101[l_101_i0];
                }
                result += l_102;
                result += l_104;
                atomic_add(&p_640->l_special_values[1], result);
            }
            else
            { /* block id: 28 */
                (1 + 1);
            }
            (*p_640->g_105) = (*p_53);
        }
        else
        { /* block id: 32 */
            VECTOR(uint8_t, 4) l_113 = (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 250UL), 250UL);
            int32_t *l_124 = &l_93;
            int i;
            for (p_55 = 0; (p_55 < (-2)); p_55 = safe_sub_func_int8_t_s_s(p_55, 1))
            { /* block id: 35 */
                int32_t *l_109 = (void*)0;
                int32_t *l_110[9][3] = {{&p_640->g_17,&l_93,&p_640->g_17},{&p_640->g_17,&l_93,&p_640->g_17},{&p_640->g_17,&l_93,&p_640->g_17},{&p_640->g_17,&l_93,&p_640->g_17},{&p_640->g_17,&l_93,&p_640->g_17},{&p_640->g_17,&l_93,&p_640->g_17},{&p_640->g_17,&l_93,&p_640->g_17},{&p_640->g_17,&l_93,&p_640->g_17},{&p_640->g_17,&l_93,&p_640->g_17}};
                int i, j;
                l_111[0] ^= 0x7BA6500CL;
                return l_112[0];
            }
            if (l_113.w)
                break;
            if ((atomic_inc(&p_640->l_atomic_input[18]) == 9))
            { /* block id: 41 */
                int32_t l_115 = 0x3C50B10BL;
                int32_t *l_114[8][8][3] = {{{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115}},{{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115}},{{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115}},{{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115}},{{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115}},{{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115}},{{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115}},{{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115},{&l_115,&l_115,&l_115}}};
                int32_t *l_116 = &l_115;
                uint32_t l_122 = 0x1A71B093L;
                int16_t l_123 = (-9L);
                int i, j, k;
                l_116 = (l_114[4][0][1] = (void*)0);
                for (l_115 = (-8); (l_115 == 11); l_115++)
                { /* block id: 46 */
                    uint64_t *l_120 = (void*)0;
                    uint64_t **l_119 = &l_120;
                    uint64_t **l_121 = &l_120;
                    l_121 = l_119;
                }
                l_123 &= l_122;
                unsigned int result = 0;
                result += l_115;
                result += l_122;
                result += l_123;
                atomic_add(&p_640->l_special_values[18], result);
            }
            else
            { /* block id: 50 */
                (1 + 1);
            }
            (*l_124) = (*p_54);
        }
    }
    return p_52;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[26];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 26; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[26];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 26; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[104];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 104; i++)
            l_comm_values[i] = 1;
    struct S1 c_641;
    struct S1* p_640 = &c_641;
    struct S1 c_642 = {
        0x13E13A6CL, // p_640->g_17
        (VECTOR(int64_t, 8))(0x3ED423CB8E00457AL, (VECTOR(int64_t, 4))(0x3ED423CB8E00457AL, (VECTOR(int64_t, 2))(0x3ED423CB8E00457AL, 0L), 0L), 0L, 0x3ED423CB8E00457AL, 0L), // p_640->g_46
        {0x7726L,0x7726L,0x7726L,0x7726L,0x7726L,0x7726L}, // p_640->g_63
        0xC34FL, // p_640->g_65
        1L, // p_640->g_67
        {1UL,1UL,1UL,1UL,1UL}, // p_640->g_78
        2UL, // p_640->g_97
        0x2F62F623L, // p_640->g_106
        &p_640->g_106, // p_640->g_105
        4294967293UL, // p_640->g_136
        0x409114404B11C873L, // p_640->g_144
        {{{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)}},{{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)}},{{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)}},{{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)}},{{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)},{0L,8L,(-1L),0x1B51010FL,(-1L)}}}, // p_640->g_153
        (-4L), // p_640->g_154
        0L, // p_640->g_155
        0xFFL, // p_640->g_156
        0x4B32DF3E0A3195B5L, // p_640->g_164
        (VECTOR(int8_t, 2))((-1L), 0x6BL), // p_640->g_177
        (VECTOR(int8_t, 8))(0x0CL, (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, (-1L)), (-1L)), (-1L), 0x0CL, (-1L)), // p_640->g_201
        5UL, // p_640->g_221
        4294967289UL, // p_640->g_268
        (VECTOR(int16_t, 2))(0L, 1L), // p_640->g_272
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_640->g_281
        &p_640->g_63[0], // p_640->g_291
        (VECTOR(int8_t, 16))(0x45L, (VECTOR(int8_t, 4))(0x45L, (VECTOR(int8_t, 2))(0x45L, 0x0FL), 0x0FL), 0x0FL, 0x45L, 0x0FL, (VECTOR(int8_t, 2))(0x45L, 0x0FL), (VECTOR(int8_t, 2))(0x45L, 0x0FL), 0x45L, 0x0FL, 0x45L, 0x0FL), // p_640->g_294
        (-1L), // p_640->g_302
        0x5441597BL, // p_640->g_304
        (VECTOR(uint8_t, 16))(0xB4L, (VECTOR(uint8_t, 4))(0xB4L, (VECTOR(uint8_t, 2))(0xB4L, 0x7EL), 0x7EL), 0x7EL, 0xB4L, 0x7EL, (VECTOR(uint8_t, 2))(0xB4L, 0x7EL), (VECTOR(uint8_t, 2))(0xB4L, 0x7EL), 0xB4L, 0x7EL, 0xB4L, 0x7EL), // p_640->g_324
        (VECTOR(uint8_t, 8))(0x2EL, (VECTOR(uint8_t, 4))(0x2EL, (VECTOR(uint8_t, 2))(0x2EL, 3UL), 3UL), 3UL, 0x2EL, 3UL), // p_640->g_325
        (VECTOR(uint8_t, 16))(0xA6L, (VECTOR(uint8_t, 4))(0xA6L, (VECTOR(uint8_t, 2))(0xA6L, 253UL), 253UL), 253UL, 0xA6L, 253UL, (VECTOR(uint8_t, 2))(0xA6L, 253UL), (VECTOR(uint8_t, 2))(0xA6L, 253UL), 0xA6L, 253UL, 0xA6L, 253UL), // p_640->g_326
        (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0xB7L), 0xB7L), // p_640->g_327
        (VECTOR(int32_t, 8))(0x7DB8553AL, (VECTOR(int32_t, 4))(0x7DB8553AL, (VECTOR(int32_t, 2))(0x7DB8553AL, (-2L)), (-2L)), (-2L), 0x7DB8553AL, (-2L)), // p_640->g_331
        &p_640->g_304, // p_640->g_335
        {0UL}, // p_640->g_352
        (VECTOR(uint16_t, 8))(0x44F0L, (VECTOR(uint16_t, 4))(0x44F0L, (VECTOR(uint16_t, 2))(0x44F0L, 7UL), 7UL), 7UL, 0x44F0L, 7UL), // p_640->g_378
        &p_640->g_78[4], // p_640->g_400
        &p_640->g_400, // p_640->g_399
        &p_640->g_399, // p_640->g_398
        (VECTOR(int16_t, 2))(0x2433L, 0x54AFL), // p_640->g_448
        0x2BA08E75L, // p_640->g_491
        {0x043075FDDCE0A31DL,(-5L),0x043075FDDCE0A31DL,0x043075FDDCE0A31DL,(-5L),0x043075FDDCE0A31DL,0x043075FDDCE0A31DL,(-5L),0x043075FDDCE0A31DL}, // p_640->g_504
        (VECTOR(int32_t, 2))((-8L), 0x6A0B3DECL), // p_640->g_534
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_640->g_537
        &p_640->g_537[3], // p_640->g_536
        {&p_640->g_352.f3,&p_640->g_352.f3,&p_640->g_352.f3,&p_640->g_352.f3,&p_640->g_352.f3,&p_640->g_352.f3,&p_640->g_352.f3,&p_640->g_352.f3}, // p_640->g_576
        (void*)0, // p_640->g_578
        &p_640->g_352.f1, // p_640->g_579
        {{0xE2L,0x5FL,0xA3L,0x5FL,0xE2L,0xE2L,0x5FL,0xA3L,0x5FL,0xE2L},{0xE2L,0x5FL,0xA3L,0x5FL,0xE2L,0xE2L,0x5FL,0xA3L,0x5FL,0xE2L},{0xE2L,0x5FL,0xA3L,0x5FL,0xE2L,0xE2L,0x5FL,0xA3L,0x5FL,0xE2L},{0xE2L,0x5FL,0xA3L,0x5FL,0xE2L,0xE2L,0x5FL,0xA3L,0x5FL,0xE2L},{0xE2L,0x5FL,0xA3L,0x5FL,0xE2L,0xE2L,0x5FL,0xA3L,0x5FL,0xE2L}}, // p_640->g_580
        (void*)0, // p_640->g_603
        &p_640->g_603, // p_640->g_602
        8L, // p_640->g_631
        0, // p_640->v_collective
        sequence_input[get_global_id(0)], // p_640->global_0_offset
        sequence_input[get_global_id(1)], // p_640->global_1_offset
        sequence_input[get_global_id(2)], // p_640->global_2_offset
        sequence_input[get_local_id(0)], // p_640->local_0_offset
        sequence_input[get_local_id(1)], // p_640->local_1_offset
        sequence_input[get_local_id(2)], // p_640->local_2_offset
        sequence_input[get_group_id(0)], // p_640->group_0_offset
        sequence_input[get_group_id(1)], // p_640->group_1_offset
        sequence_input[get_group_id(2)], // p_640->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 104)), permutations[0][get_linear_local_id()])), // p_640->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_641 = c_642;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_640);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_640->g_17, "p_640->g_17", print_hash_value);
    transparent_crc(p_640->g_46.s0, "p_640->g_46.s0", print_hash_value);
    transparent_crc(p_640->g_46.s1, "p_640->g_46.s1", print_hash_value);
    transparent_crc(p_640->g_46.s2, "p_640->g_46.s2", print_hash_value);
    transparent_crc(p_640->g_46.s3, "p_640->g_46.s3", print_hash_value);
    transparent_crc(p_640->g_46.s4, "p_640->g_46.s4", print_hash_value);
    transparent_crc(p_640->g_46.s5, "p_640->g_46.s5", print_hash_value);
    transparent_crc(p_640->g_46.s6, "p_640->g_46.s6", print_hash_value);
    transparent_crc(p_640->g_46.s7, "p_640->g_46.s7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_640->g_63[i], "p_640->g_63[i]", print_hash_value);

    }
    transparent_crc(p_640->g_65, "p_640->g_65", print_hash_value);
    transparent_crc(p_640->g_67, "p_640->g_67", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_640->g_78[i], "p_640->g_78[i]", print_hash_value);

    }
    transparent_crc(p_640->g_97, "p_640->g_97", print_hash_value);
    transparent_crc(p_640->g_106, "p_640->g_106", print_hash_value);
    transparent_crc(p_640->g_136, "p_640->g_136", print_hash_value);
    transparent_crc(p_640->g_144, "p_640->g_144", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_640->g_153[i][j][k], "p_640->g_153[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_640->g_154, "p_640->g_154", print_hash_value);
    transparent_crc(p_640->g_155, "p_640->g_155", print_hash_value);
    transparent_crc(p_640->g_156, "p_640->g_156", print_hash_value);
    transparent_crc(p_640->g_164, "p_640->g_164", print_hash_value);
    transparent_crc(p_640->g_177.x, "p_640->g_177.x", print_hash_value);
    transparent_crc(p_640->g_177.y, "p_640->g_177.y", print_hash_value);
    transparent_crc(p_640->g_201.s0, "p_640->g_201.s0", print_hash_value);
    transparent_crc(p_640->g_201.s1, "p_640->g_201.s1", print_hash_value);
    transparent_crc(p_640->g_201.s2, "p_640->g_201.s2", print_hash_value);
    transparent_crc(p_640->g_201.s3, "p_640->g_201.s3", print_hash_value);
    transparent_crc(p_640->g_201.s4, "p_640->g_201.s4", print_hash_value);
    transparent_crc(p_640->g_201.s5, "p_640->g_201.s5", print_hash_value);
    transparent_crc(p_640->g_201.s6, "p_640->g_201.s6", print_hash_value);
    transparent_crc(p_640->g_201.s7, "p_640->g_201.s7", print_hash_value);
    transparent_crc(p_640->g_221, "p_640->g_221", print_hash_value);
    transparent_crc(p_640->g_268, "p_640->g_268", print_hash_value);
    transparent_crc(p_640->g_272.x, "p_640->g_272.x", print_hash_value);
    transparent_crc(p_640->g_272.y, "p_640->g_272.y", print_hash_value);
    transparent_crc(p_640->g_294.s0, "p_640->g_294.s0", print_hash_value);
    transparent_crc(p_640->g_294.s1, "p_640->g_294.s1", print_hash_value);
    transparent_crc(p_640->g_294.s2, "p_640->g_294.s2", print_hash_value);
    transparent_crc(p_640->g_294.s3, "p_640->g_294.s3", print_hash_value);
    transparent_crc(p_640->g_294.s4, "p_640->g_294.s4", print_hash_value);
    transparent_crc(p_640->g_294.s5, "p_640->g_294.s5", print_hash_value);
    transparent_crc(p_640->g_294.s6, "p_640->g_294.s6", print_hash_value);
    transparent_crc(p_640->g_294.s7, "p_640->g_294.s7", print_hash_value);
    transparent_crc(p_640->g_294.s8, "p_640->g_294.s8", print_hash_value);
    transparent_crc(p_640->g_294.s9, "p_640->g_294.s9", print_hash_value);
    transparent_crc(p_640->g_294.sa, "p_640->g_294.sa", print_hash_value);
    transparent_crc(p_640->g_294.sb, "p_640->g_294.sb", print_hash_value);
    transparent_crc(p_640->g_294.sc, "p_640->g_294.sc", print_hash_value);
    transparent_crc(p_640->g_294.sd, "p_640->g_294.sd", print_hash_value);
    transparent_crc(p_640->g_294.se, "p_640->g_294.se", print_hash_value);
    transparent_crc(p_640->g_294.sf, "p_640->g_294.sf", print_hash_value);
    transparent_crc(p_640->g_302, "p_640->g_302", print_hash_value);
    transparent_crc(p_640->g_304, "p_640->g_304", print_hash_value);
    transparent_crc(p_640->g_324.s0, "p_640->g_324.s0", print_hash_value);
    transparent_crc(p_640->g_324.s1, "p_640->g_324.s1", print_hash_value);
    transparent_crc(p_640->g_324.s2, "p_640->g_324.s2", print_hash_value);
    transparent_crc(p_640->g_324.s3, "p_640->g_324.s3", print_hash_value);
    transparent_crc(p_640->g_324.s4, "p_640->g_324.s4", print_hash_value);
    transparent_crc(p_640->g_324.s5, "p_640->g_324.s5", print_hash_value);
    transparent_crc(p_640->g_324.s6, "p_640->g_324.s6", print_hash_value);
    transparent_crc(p_640->g_324.s7, "p_640->g_324.s7", print_hash_value);
    transparent_crc(p_640->g_324.s8, "p_640->g_324.s8", print_hash_value);
    transparent_crc(p_640->g_324.s9, "p_640->g_324.s9", print_hash_value);
    transparent_crc(p_640->g_324.sa, "p_640->g_324.sa", print_hash_value);
    transparent_crc(p_640->g_324.sb, "p_640->g_324.sb", print_hash_value);
    transparent_crc(p_640->g_324.sc, "p_640->g_324.sc", print_hash_value);
    transparent_crc(p_640->g_324.sd, "p_640->g_324.sd", print_hash_value);
    transparent_crc(p_640->g_324.se, "p_640->g_324.se", print_hash_value);
    transparent_crc(p_640->g_324.sf, "p_640->g_324.sf", print_hash_value);
    transparent_crc(p_640->g_325.s0, "p_640->g_325.s0", print_hash_value);
    transparent_crc(p_640->g_325.s1, "p_640->g_325.s1", print_hash_value);
    transparent_crc(p_640->g_325.s2, "p_640->g_325.s2", print_hash_value);
    transparent_crc(p_640->g_325.s3, "p_640->g_325.s3", print_hash_value);
    transparent_crc(p_640->g_325.s4, "p_640->g_325.s4", print_hash_value);
    transparent_crc(p_640->g_325.s5, "p_640->g_325.s5", print_hash_value);
    transparent_crc(p_640->g_325.s6, "p_640->g_325.s6", print_hash_value);
    transparent_crc(p_640->g_325.s7, "p_640->g_325.s7", print_hash_value);
    transparent_crc(p_640->g_326.s0, "p_640->g_326.s0", print_hash_value);
    transparent_crc(p_640->g_326.s1, "p_640->g_326.s1", print_hash_value);
    transparent_crc(p_640->g_326.s2, "p_640->g_326.s2", print_hash_value);
    transparent_crc(p_640->g_326.s3, "p_640->g_326.s3", print_hash_value);
    transparent_crc(p_640->g_326.s4, "p_640->g_326.s4", print_hash_value);
    transparent_crc(p_640->g_326.s5, "p_640->g_326.s5", print_hash_value);
    transparent_crc(p_640->g_326.s6, "p_640->g_326.s6", print_hash_value);
    transparent_crc(p_640->g_326.s7, "p_640->g_326.s7", print_hash_value);
    transparent_crc(p_640->g_326.s8, "p_640->g_326.s8", print_hash_value);
    transparent_crc(p_640->g_326.s9, "p_640->g_326.s9", print_hash_value);
    transparent_crc(p_640->g_326.sa, "p_640->g_326.sa", print_hash_value);
    transparent_crc(p_640->g_326.sb, "p_640->g_326.sb", print_hash_value);
    transparent_crc(p_640->g_326.sc, "p_640->g_326.sc", print_hash_value);
    transparent_crc(p_640->g_326.sd, "p_640->g_326.sd", print_hash_value);
    transparent_crc(p_640->g_326.se, "p_640->g_326.se", print_hash_value);
    transparent_crc(p_640->g_326.sf, "p_640->g_326.sf", print_hash_value);
    transparent_crc(p_640->g_327.x, "p_640->g_327.x", print_hash_value);
    transparent_crc(p_640->g_327.y, "p_640->g_327.y", print_hash_value);
    transparent_crc(p_640->g_327.z, "p_640->g_327.z", print_hash_value);
    transparent_crc(p_640->g_327.w, "p_640->g_327.w", print_hash_value);
    transparent_crc(p_640->g_331.s0, "p_640->g_331.s0", print_hash_value);
    transparent_crc(p_640->g_331.s1, "p_640->g_331.s1", print_hash_value);
    transparent_crc(p_640->g_331.s2, "p_640->g_331.s2", print_hash_value);
    transparent_crc(p_640->g_331.s3, "p_640->g_331.s3", print_hash_value);
    transparent_crc(p_640->g_331.s4, "p_640->g_331.s4", print_hash_value);
    transparent_crc(p_640->g_331.s5, "p_640->g_331.s5", print_hash_value);
    transparent_crc(p_640->g_331.s6, "p_640->g_331.s6", print_hash_value);
    transparent_crc(p_640->g_331.s7, "p_640->g_331.s7", print_hash_value);
    transparent_crc(p_640->g_378.s0, "p_640->g_378.s0", print_hash_value);
    transparent_crc(p_640->g_378.s1, "p_640->g_378.s1", print_hash_value);
    transparent_crc(p_640->g_378.s2, "p_640->g_378.s2", print_hash_value);
    transparent_crc(p_640->g_378.s3, "p_640->g_378.s3", print_hash_value);
    transparent_crc(p_640->g_378.s4, "p_640->g_378.s4", print_hash_value);
    transparent_crc(p_640->g_378.s5, "p_640->g_378.s5", print_hash_value);
    transparent_crc(p_640->g_378.s6, "p_640->g_378.s6", print_hash_value);
    transparent_crc(p_640->g_378.s7, "p_640->g_378.s7", print_hash_value);
    transparent_crc(p_640->g_448.x, "p_640->g_448.x", print_hash_value);
    transparent_crc(p_640->g_448.y, "p_640->g_448.y", print_hash_value);
    transparent_crc(p_640->g_491, "p_640->g_491", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_640->g_504[i], "p_640->g_504[i]", print_hash_value);

    }
    transparent_crc(p_640->g_534.x, "p_640->g_534.x", print_hash_value);
    transparent_crc(p_640->g_534.y, "p_640->g_534.y", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_640->g_580[i][j], "p_640->g_580[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_640->g_631, "p_640->g_631", print_hash_value);
    transparent_crc(p_640->v_collective, "p_640->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 26; i++)
            transparent_crc(p_640->g_special_values[i + 26 * get_linear_group_id()], "p_640->g_special_values[i + 26 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 26; i++)
            transparent_crc(p_640->l_special_values[i], "p_640->l_special_values[i]", print_hash_value);
    transparent_crc(p_640->l_comm_values[get_linear_local_id()], "p_640->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_640->g_comm_values[get_linear_group_id() * 104 + get_linear_local_id()], "p_640->g_comm_values[get_linear_group_id() * 104 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
