// --atomics 88 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 26,4,18 -l 1,4,18
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

__constant uint32_t permutations[10][72] = {
{40,39,11,57,3,30,27,1,62,7,67,2,4,59,16,64,48,34,36,50,9,35,70,5,46,56,22,61,49,33,23,65,71,10,28,66,31,20,14,69,45,19,32,54,60,53,58,47,63,8,68,24,51,55,44,26,18,13,42,17,25,37,29,38,41,12,43,52,21,0,6,15}, // permutation 0
{15,38,0,35,57,4,54,29,6,66,8,56,2,52,34,20,39,5,30,58,36,10,31,50,22,27,62,42,40,37,13,60,16,17,64,11,23,21,32,41,71,63,59,14,49,51,28,33,68,24,7,44,48,46,1,55,53,61,19,12,45,65,67,3,70,9,26,18,69,43,47,25}, // permutation 1
{68,58,60,15,67,27,28,47,41,46,18,52,22,2,63,14,9,26,13,57,36,33,7,70,24,62,10,50,17,5,31,20,8,1,38,30,21,25,65,66,44,37,54,11,42,56,48,6,34,4,39,43,71,3,19,59,32,51,61,0,69,45,64,40,53,23,12,29,35,55,16,49}, // permutation 2
{42,48,6,61,34,13,17,68,18,23,19,56,26,59,55,60,24,4,9,46,69,14,67,66,70,47,36,2,58,33,37,44,57,3,21,20,53,28,32,50,43,54,38,22,41,11,52,7,12,25,62,0,40,27,30,51,10,8,5,39,29,49,45,65,35,63,31,71,15,1,64,16}, // permutation 3
{38,15,39,21,25,27,51,4,16,33,18,3,52,28,32,43,9,45,11,54,13,55,1,24,42,7,20,63,2,66,53,62,71,35,34,6,49,50,23,57,30,61,41,17,8,37,14,70,26,65,59,5,67,64,36,56,31,0,40,29,46,44,69,22,47,10,12,58,68,48,60,19}, // permutation 4
{5,17,8,9,1,4,24,57,38,47,21,0,10,33,28,37,65,30,40,22,15,27,44,67,23,68,52,39,35,61,58,12,25,16,29,13,63,60,45,48,53,55,69,62,59,54,64,71,19,20,66,36,51,43,14,3,42,50,2,6,7,56,70,46,41,11,49,18,26,32,34,31}, // permutation 5
{44,12,37,24,28,13,48,5,17,61,70,57,36,66,3,16,43,47,56,67,38,19,42,60,32,15,25,40,27,14,6,55,30,62,29,0,2,26,53,31,18,65,64,4,7,39,63,20,58,22,33,34,68,71,49,52,10,59,46,51,69,8,54,9,45,11,50,23,1,21,35,41}, // permutation 6
{59,5,28,36,48,51,55,20,1,25,41,50,56,23,24,14,37,21,54,22,52,19,34,10,49,6,69,9,60,53,13,40,44,46,33,16,35,15,0,29,47,68,32,71,27,31,17,58,61,65,70,7,39,30,2,18,43,38,63,45,26,11,64,62,67,12,3,8,57,66,42,4}, // permutation 7
{21,51,68,6,40,13,45,31,63,26,39,9,49,1,66,35,60,23,16,30,32,33,71,7,38,8,69,18,0,48,28,65,55,52,43,62,11,58,27,22,70,12,4,36,37,5,29,56,64,2,42,57,20,46,53,54,67,14,47,19,34,61,24,59,15,44,50,41,17,25,10,3}, // permutation 8
{53,5,2,61,44,37,26,24,52,22,17,46,42,4,0,11,35,38,15,39,19,28,40,54,27,71,68,55,67,47,29,63,57,41,8,60,16,48,23,25,7,14,1,20,43,30,9,3,45,65,12,58,18,31,66,51,50,70,6,32,69,64,49,56,62,21,36,34,10,59,33,13} // permutation 9
};

// Seed: 286826646

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int8_t g_29;
    int16_t g_37;
    VECTOR(uint64_t, 16) g_51;
    volatile VECTOR(int64_t, 16) g_52;
    volatile int16_t g_68;
    volatile int16_t *g_67;
    VECTOR(int16_t, 2) g_80;
    uint8_t g_120;
    int8_t g_124;
    int8_t *g_123;
    int8_t g_130;
    VECTOR(int64_t, 2) g_136;
    int16_t *g_168;
    int32_t g_171;
    VECTOR(uint8_t, 16) g_183;
    uint16_t g_198;
    uint64_t g_203[7];
    VECTOR(int16_t, 2) g_206;
    VECTOR(int16_t, 8) g_207;
    int32_t g_218;
    uint16_t g_226;
    VECTOR(int32_t, 4) g_231;
    int8_t g_246;
    int8_t * volatile *g_274[6][5];
    int8_t * volatile **g_273;
    VECTOR(int8_t, 2) g_321;
    int32_t * volatile g_326[8];
    int32_t *g_331;
    int32_t ** volatile g_330;
    int64_t g_362;
    volatile int64_t *g_366;
    volatile int64_t * volatile * volatile g_365;
    volatile int64_t * volatile * volatile * volatile g_367;
    volatile VECTOR(int32_t, 8) g_370;
    volatile VECTOR(int32_t, 2) g_371;
    uint32_t g_388;
    VECTOR(uint32_t, 8) g_392;
    volatile VECTOR(uint16_t, 16) g_439;
    int32_t *g_462;
    volatile uint32_t g_477;
    VECTOR(uint64_t, 8) g_486;
    int8_t **g_488;
    int64_t *g_495;
    int64_t ** volatile g_494;
    uint8_t g_521[8][5];
    VECTOR(uint8_t, 16) g_547;
    volatile VECTOR(int8_t, 2) g_622;
    volatile uint32_t g_663;
    volatile uint32_t g_691;
    VECTOR(int32_t, 16) g_736;
    int32_t ** volatile g_761[1];
    int32_t ** volatile g_762;
    volatile VECTOR(int64_t, 8) g_781;
    VECTOR(int32_t, 4) g_786;
    VECTOR(uint8_t, 8) g_798;
    volatile uint32_t **g_820;
    volatile uint32_t *** volatile g_821;
    volatile uint32_t g_825;
    uint64_t *g_831;
    uint64_t **g_830;
    uint64_t **g_833[1];
    VECTOR(int16_t, 8) g_837;
    int32_t * volatile g_845;
    int32_t * volatile g_846;
    int32_t ** volatile g_854;
    int32_t g_867;
    uint16_t g_868;
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
int8_t  func_1(struct S0 * p_869);
uint64_t  func_2(uint32_t  p_3, struct S0 * p_869);
int32_t  func_4(int8_t  p_5, int32_t  p_6, int32_t  p_7, int64_t  p_8, struct S0 * p_869);
int8_t  func_13(uint16_t  p_14, uint64_t  p_15, int32_t  p_16, struct S0 * p_869);
int8_t  func_38(int64_t  p_39, int16_t  p_40, int8_t * p_41, int16_t * p_42, int8_t * p_43, struct S0 * p_869);
int8_t * func_48(int32_t  p_49, int16_t * p_50, struct S0 * p_869);
uint32_t  func_57(int64_t  p_58, int16_t * p_59, int16_t * p_60, uint32_t  p_61, int8_t * p_62, struct S0 * p_869);
int16_t  func_84(int16_t * p_85, uint64_t  p_86, int8_t * p_87, uint8_t  p_88, struct S0 * p_869);
int16_t * func_89(int16_t * p_90, int16_t  p_91, struct S0 * p_869);
int32_t  func_92(int16_t * p_93, int32_t  p_94, struct S0 * p_869);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_869->l_comm_values p_869->g_comm_values p_869->g_29 p_869->g_51 p_869->g_52 p_869->g_67 p_869->g_120 p_869->g_273 p_869->g_183 p_869->g_218 p_869->g_206 p_869->g_246 p_869->g_274 p_869->g_123 p_869->g_124 p_869->g_171 p_869->g_321 p_869->g_68 p_869->g_330 p_869->g_226 p_869->g_365 p_869->g_367 p_869->g_370 p_869->g_371 p_869->g_207 p_869->g_392 p_869->g_130 p_869->g_439 p_869->g_388 p_869->g_136 p_869->g_331 p_869->g_80 p_869->g_477 p_869->g_168 p_869->g_486 p_869->g_462 p_869->g_494 p_869->g_691 p_869->g_521 p_869->g_736 p_869->g_203 p_869->g_198 p_869->g_762 p_869->g_37 p_869->g_781 p_869->g_786 p_869->g_547 p_869->g_798 p_869->g_820 p_869->g_830 p_869->g_837 p_869->g_854 p_869->g_867 p_869->g_831 p_869->g_868
 * writes: p_869->g_29 p_869->g_37 p_869->g_218 p_869->g_120 p_869->g_246 p_869->g_171 p_869->g_231 p_869->g_124 p_869->g_331 p_869->g_203 p_869->g_136 p_869->g_362 p_869->g_365 p_869->g_388 p_869->g_207 p_869->g_80 p_869->g_462 p_869->g_488 p_869->g_691 p_869->g_130 p_869->g_521 p_869->g_226 p_869->g_183 p_869->g_198 p_869->g_830 p_869->g_833 p_869->g_798 p_869->g_868
 */
int8_t  func_1(struct S0 * p_869)
{ /* block id: 4 */
    VECTOR(int32_t, 8) l_9 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-1L)), (-1L)), (-1L), (-4L), (-1L));
    int64_t l_10 = 0x3303773672D714F9L;
    VECTOR(uint8_t, 16) l_17 = (VECTOR(uint8_t, 16))(0x38L, (VECTOR(uint8_t, 4))(0x38L, (VECTOR(uint8_t, 2))(0x38L, 0xA4L), 0xA4L), 0xA4L, 0x38L, 0xA4L, (VECTOR(uint8_t, 2))(0x38L, 0xA4L), (VECTOR(uint8_t, 2))(0x38L, 0xA4L), 0x38L, 0xA4L, 0x38L, 0xA4L);
    int16_t *l_26 = (void*)0;
    uint32_t l_27 = 4294967295UL;
    int8_t *l_28 = &p_869->g_29;
    int64_t l_30 = (-4L);
    uint64_t *l_826 = &p_869->g_203[6];
    uint32_t l_849 = 0UL;
    int i;
    p_869->g_868 &= (func_2(((func_4(l_9.s7, l_9.s0, l_9.s5, ((~p_869->l_comm_values[(safe_mod_func_uint32_t_u_u(p_869->tid, 72))]) | ((*l_826) = ((l_10 | 0x7A32FD2D1A4E6659L) && ((safe_mul_func_int8_t_s_s(func_13((((p_869->l_comm_values[(safe_mod_func_uint32_t_u_u(p_869->tid, 72))] , ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 4))(l_17.s7cde)).hi))), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(255UL, 255UL)).xyyyyxxy)).s1266403333666760, (uint8_t)((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((*l_28) = (safe_lshift_func_uint16_t_u_u(((-5L) < (l_27 = ((((((safe_lshift_func_int16_t_s_s(0x28A9L, l_10)) & 1L) != p_869->g_comm_values[p_869->tid]) , l_17.s9) , p_869->g_comm_values[p_869->tid]) && l_17.s8))), FAKE_DIVERGE(p_869->global_1_offset, get_global_id(1), 10)))), p_869->l_comm_values[(safe_mod_func_uint32_t_u_u(p_869->tid, 72))])), 7UL)) & l_17.s8)))))).s7c, ((VECTOR(uint8_t, 2))(255UL))))), ((VECTOR(uint8_t, 2))(0UL)), ((VECTOR(uint8_t, 2))(0x03L))))), ((VECTOR(uint8_t, 2))(0x23L))))))).odd) || p_869->g_29) & (-1L)), l_30, l_17.s0, p_869), l_17.s9)) , l_17.s4)))), p_869) <= l_9.s6) < l_849), p_869) || (**p_869->g_830));
    return (*p_869->g_123);
}


/* ------------------------------------------ */
/* 
 * reads : p_869->g_854 p_869->g_330 p_869->g_331 p_869->g_68 p_869->g_798 p_869->g_130 p_869->g_867 p_869->g_206 p_869->g_123 p_869->g_29 p_869->g_124
 * writes: p_869->g_331 p_869->g_798
 */
uint64_t  func_2(uint32_t  p_3, struct S0 * p_869)
{ /* block id: 385 */
    int32_t l_850 = 0L;
    int32_t *l_851[8][6][2] = {{{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171}},{{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171}},{{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171}},{{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171}},{{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171}},{{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171}},{{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171}},{{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171},{&p_869->g_171,&p_869->g_171}}};
    int32_t l_852 = 0x710346FAL;
    uint64_t l_853 = 18446744073709551615UL;
    uint8_t l_857 = 251UL;
    uint8_t *l_862 = (void*)0;
    int i, j, k;
    l_853 ^= (l_852 |= l_850);
    (*p_869->g_854) = &l_850;
    (*p_869->g_331) = (p_3 & (safe_add_func_uint16_t_u_u(FAKE_DIVERGE(p_869->local_0_offset, get_local_id(0), 10), (((**p_869->g_330) , ((l_857 <= (((p_869->g_68 <= ((((safe_lshift_func_int8_t_s_u(0x3FL, (++p_869->g_798.s4))) >= (0x4DC961AAL < (((safe_mod_func_int16_t_s_s(((p_869->g_130 & (p_869->g_130 , p_3)) & p_869->g_867), p_3)) && p_3) == p_3))) | p_3) && p_869->g_206.x)) | p_3) ^ (*p_869->g_123))) , p_3)) <= p_3))));
    return p_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_869->g_830 p_869->g_837 p_869->g_246 p_869->g_762
 * writes: p_869->g_830 p_869->g_833 p_869->g_331
 */
int32_t  func_4(int8_t  p_5, int32_t  p_6, int32_t  p_7, int64_t  p_8, struct S0 * p_869)
{ /* block id: 378 */
    uint64_t l_827 = 0x18AD32D70CAB6B1CL;
    uint64_t ***l_832[10] = {&p_869->g_830,&p_869->g_830,&p_869->g_830,&p_869->g_830,&p_869->g_830,&p_869->g_830,&p_869->g_830,&p_869->g_830,&p_869->g_830,&p_869->g_830};
    int16_t *l_834 = (void*)0;
    int16_t *l_835[2];
    int32_t l_836 = 0L;
    VECTOR(uint32_t, 2) l_840 = (VECTOR(uint32_t, 2))(4294967295UL, 1UL);
    int32_t *l_847[2][9][7] = {{{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218}},{{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218},{&p_869->g_171,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_171,&p_869->g_171,&p_869->g_218}}};
    uint32_t l_848[1][3];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_835[i] = &p_869->g_37;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_848[i][j] = 0xC6BAA5FBL;
    }
    p_7 = ((((l_827 , (safe_lshift_func_int16_t_s_u(p_5, 12))) , (((p_869->g_830 = p_869->g_830) != (p_869->g_833[0] = &p_869->g_831)) > ((l_836 = ((l_827 , l_827) , 3L)) && ((VECTOR(int16_t, 4))(p_869->g_837.s4465)).z))) & ((safe_rshift_func_int16_t_s_s((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(1L, 0x261D89D9L)).xxxx))), p_6, ((VECTOR(int32_t, 2))(9L, 0x46656DCFL)), (-1L))).s0 , (((VECTOR(uint32_t, 8))(l_840.yyyyyyyy)).s3 != GROUP_DIVERGE(1, 1))), (((safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((-1L), (-3L))), 3)) == l_827) , l_827))) || p_869->g_246)) && 0x0AB24B4CDEA641E3L);
    (*p_869->g_762) = &l_836;
    return l_848[0][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_869->g_comm_values p_869->g_51 p_869->g_52 p_869->l_comm_values p_869->g_67 p_869->g_120 p_869->g_273 p_869->g_29 p_869->g_183 p_869->g_218 p_869->g_206 p_869->g_246 p_869->g_274 p_869->g_123 p_869->g_124 p_869->g_171 p_869->g_321 p_869->g_68 p_869->g_330 p_869->g_226 p_869->g_365 p_869->g_367 p_869->g_370 p_869->g_371 p_869->g_207 p_869->g_392 p_869->g_130 p_869->g_439 p_869->g_388 p_869->g_136 p_869->g_331 p_869->g_80 p_869->g_477 p_869->g_168 p_869->g_486 p_869->g_462 p_869->g_494 p_869->g_691 p_869->g_521 p_869->g_736 p_869->g_203 p_869->g_198 p_869->g_762 p_869->g_37 p_869->g_781 p_869->g_786 p_869->g_547 p_869->g_798 p_869->g_820
 * writes: p_869->g_37 p_869->g_218 p_869->g_120 p_869->g_246 p_869->g_171 p_869->g_231 p_869->g_29 p_869->g_124 p_869->g_331 p_869->g_203 p_869->g_136 p_869->g_362 p_869->g_365 p_869->g_388 p_869->g_207 p_869->g_80 p_869->g_462 p_869->g_488 p_869->g_691 p_869->g_130 p_869->g_521 p_869->g_226 p_869->g_183 p_869->g_198
 */
int8_t  func_13(uint16_t  p_14, uint64_t  p_15, int32_t  p_16, struct S0 * p_869)
{ /* block id: 7 */
    int32_t l_31 = 1L;
    int16_t *l_36 = &p_869->g_37;
    int8_t *l_69 = &p_869->g_29;
    int64_t *l_301 = (void*)0;
    int32_t l_302 = 1L;
    int16_t *l_303[5][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
    int32_t l_768[7][9] = {{0L,8L,0x4563FAC9L,5L,0x66FE4146L,0x792FC896L,3L,0L,0x612D6AADL},{0L,8L,0x4563FAC9L,5L,0x66FE4146L,0x792FC896L,3L,0L,0x612D6AADL},{0L,8L,0x4563FAC9L,5L,0x66FE4146L,0x792FC896L,3L,0L,0x612D6AADL},{0L,8L,0x4563FAC9L,5L,0x66FE4146L,0x792FC896L,3L,0L,0x612D6AADL},{0L,8L,0x4563FAC9L,5L,0x66FE4146L,0x792FC896L,3L,0L,0x612D6AADL},{0L,8L,0x4563FAC9L,5L,0x66FE4146L,0x792FC896L,3L,0L,0x612D6AADL},{0L,8L,0x4563FAC9L,5L,0x66FE4146L,0x792FC896L,3L,0L,0x612D6AADL}};
    int16_t l_771 = 0L;
    int32_t l_773 = 0x48F7EFC9L;
    int64_t l_774 = 0x06B80514311F9D4DL;
    VECTOR(int32_t, 16) l_782 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
    VECTOR(int32_t, 16) l_783 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 7L), 7L), 7L, 1L, 7L, (VECTOR(int32_t, 2))(1L, 7L), (VECTOR(int32_t, 2))(1L, 7L), 1L, 7L, 1L, 7L);
    VECTOR(int64_t, 4) l_784 = (VECTOR(int64_t, 4))(0x7F058AF8F6BE0C8FL, (VECTOR(int64_t, 2))(0x7F058AF8F6BE0C8FL, 0x17CDF665C5CB60CEL), 0x17CDF665C5CB60CEL);
    VECTOR(int64_t, 2) l_785 = (VECTOR(int64_t, 2))(2L, 0x35E44AF56C80894AL);
    int32_t l_803 = 0L;
    uint32_t l_804 = 4UL;
    int16_t l_807 = 0x58C9L;
    volatile uint32_t ***l_822[9];
    volatile uint32_t *l_824 = &p_869->g_825;
    volatile uint32_t **l_823 = &l_824;
    int i, j;
    for (i = 0; i < 9; i++)
        l_822[i] = &p_869->g_820;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_869->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 72)), permutations[(safe_mod_func_uint32_t_u_u(((!l_31) < (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int16_t_s_s(((*l_36) = l_31), p_869->g_comm_values[p_869->tid])) ^ (func_38(p_14, (safe_mod_func_uint64_t_u_u(l_31, (safe_lshift_func_uint8_t_u_s(0xAEL, 3)))), func_48(((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(p_869->g_51.s6f7e)))).w < ((((VECTOR(int64_t, 2))(p_869->g_52.s87)).odd & (l_302 = (safe_rshift_func_int16_t_s_s(p_14, (safe_div_func_uint32_t_u_u(func_57((l_36 == ((safe_add_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(0L, 0x7AL)), p_869->l_comm_values[(safe_mod_func_uint32_t_u_u(p_869->tid, 72))])) , p_869->g_67)), l_36, l_36, p_16, l_69, p_869), p_16)))))) , 1UL)) , 0x475080D3L), l_303[0][0], p_869), l_36, l_69, p_869) <= p_869->g_321.y)), p_869->g_736.sc))), 10))][(safe_mod_func_uint32_t_u_u(p_869->tid, 72))]));
    for (p_869->g_198 = (-13); (p_869->g_198 != 54); p_869->g_198 = safe_add_func_int32_t_s_s(p_869->g_198, 4))
    { /* block id: 348 */
        int16_t l_767 = 0L;
        int32_t l_769 = 0x65A49E33L;
        int32_t l_770 = 0x71045662L;
        VECTOR(int32_t, 8) l_772 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0L), 0L), 0L, (-2L), 0L);
        VECTOR(uint32_t, 16) l_797 = (VECTOR(uint32_t, 16))(0x937B8859L, (VECTOR(uint32_t, 4))(0x937B8859L, (VECTOR(uint32_t, 2))(0x937B8859L, 4294967295UL), 4294967295UL), 4294967295UL, 0x937B8859L, 4294967295UL, (VECTOR(uint32_t, 2))(0x937B8859L, 4294967295UL), (VECTOR(uint32_t, 2))(0x937B8859L, 4294967295UL), 0x937B8859L, 4294967295UL, 0x937B8859L, 4294967295UL);
        uint16_t l_808 = 0xEBABL;
        int i;
        (*p_869->g_762) = &l_302;
        for (p_869->g_37 = 0; (p_869->g_37 < 14); p_869->g_37 = safe_add_func_uint16_t_u_u(p_869->g_37, 8))
        { /* block id: 352 */
            int32_t *l_765 = &l_302;
            int32_t *l_766[7][1];
            uint32_t l_775 = 0x1688ED4EL;
            int64_t l_780 = 1L;
            int32_t l_801[2];
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_766[i][j] = &l_302;
            }
            for (i = 0; i < 2; i++)
                l_801[i] = 0x7CB8E2ABL;
            l_775--;
            l_765 = (*p_869->g_762);
            if ((((p_869->g_37 , (safe_mod_func_uint8_t_u_u(l_780, l_768[4][3]))) ^ ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(p_869->g_781.s7234)))).z) > ((((p_15 = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_782.s6f03908b)), ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(l_783.s2e243efee599359b)).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x4AC5E826L, 1L)), 0x38E62F25L, 4L)).zyxzxzyz))))).s5 ^ p_15)) || ((VECTOR(int64_t, 8))(0L, 1L, ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_784.wxzz)).lo)))).xxyxyyyy, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_785.xy)), (-1L), 0x6608CE9DF0FCB6ECL)).zxzwzwxw))).s3002146471072723, ((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 4))(p_869->g_786.yyyw)), ((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0UL, 0x165DL)), 65535UL, 0x2D04L)).zwxyxxyzxzzyxyyz)), (uint16_t)(safe_rshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(253UL, (*l_765))), ((l_782.s2 = ((*p_869->g_123) = (p_869->g_547.s1 , (((VECTOR(uint32_t, 4))(l_797.s5fc8)).y || ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(0xB4090125L, 0xB2E83D57L, 0x95FA2FE1L, 4294967295UL)).zyyzzxyx)).s5)))) < ((VECTOR(uint8_t, 2))(p_869->g_798.s22)).lo))) <= 18446744073709551615UL), p_15)), 0x16L)) ^ 7L), 8))))).s28)).yyxxxyyxyyyxxxyy)).s3f)).yxyxyxyx)), ((VECTOR(uint16_t, 8))(1UL))))).lo))).even)).yyxyyxyy, ((VECTOR(int64_t, 8))(0x31D3867C8059DA73L))))).s4345413566720170))).s4c, ((VECTOR(int64_t, 2))(0L)), ((VECTOR(int64_t, 2))(2L))))), 0x1EB0789EBCAF7684L, (-5L), (-1L), 0x47FC5116CE720E7BL)).s2) && 18446744073709551607UL) > 8UL)))
            { /* block id: 358 */
                l_770 |= (&l_780 == &l_774);
            }
            else
            { /* block id: 360 */
                int8_t l_799 = 0x64L;
                int32_t l_800[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
                int32_t l_802 = 0x1F22B140L;
                int i;
                l_804++;
                return p_15;
            }
            ++l_808;
        }
    }
    if ((atomic_inc(&p_869->g_atomic_input[88 * get_linear_group_id() + 54]) == 5))
    { /* block id: 368 */
        uint8_t l_811 = 2UL;
        int64_t l_814[6] = {(-1L),(-6L),(-1L),(-1L),(-6L),(-1L)};
        int32_t l_815 = 0x262F08CDL;
        uint32_t l_816 = 0x20E7D40FL;
        int32_t *l_819 = (void*)0;
        int i;
        l_811--;
        l_816--;
        l_819 = (void*)0;
        unsigned int result = 0;
        result += l_811;
        int l_814_i0;
        for (l_814_i0 = 0; l_814_i0 < 6; l_814_i0++) {
            result += l_814[l_814_i0];
        }
        result += l_815;
        result += l_816;
        atomic_add(&p_869->g_special_values[88 * get_linear_group_id() + 54], result);
    }
    else
    { /* block id: 372 */
        (1 + 1);
    }
    l_823 = p_869->g_820;
    return (*p_869->g_123);
}


/* ------------------------------------------ */
/* 
 * reads : p_869->g_218 p_869->g_370 p_869->g_371 p_869->g_207 p_869->g_273 p_869->g_274 p_869->g_123 p_869->g_29 p_869->g_124 p_869->g_392 p_869->g_52 p_869->g_130 p_869->g_183 p_869->g_439 p_869->g_246 p_869->g_120 p_869->g_388 p_869->g_136 p_869->g_321 p_869->g_330 p_869->g_331 p_869->g_80 p_869->g_477 p_869->g_168 p_869->g_486 p_869->g_462 p_869->g_171 p_869->g_494 p_869->g_67 p_869->g_68 p_869->g_691 p_869->g_521 p_869->g_226 p_869->g_736 p_869->g_203
 * writes: p_869->g_218 p_869->g_388 p_869->g_29 p_869->g_124 p_869->g_207 p_869->g_80 p_869->g_246 p_869->g_462 p_869->g_488 p_869->g_331 p_869->g_691 p_869->g_130 p_869->g_521 p_869->g_226 p_869->g_183
 */
int8_t  func_38(int64_t  p_39, int16_t  p_40, int8_t * p_41, int16_t * p_42, int8_t * p_43, struct S0 * p_869)
{ /* block id: 137 */
    uint64_t *l_373 = &p_869->g_203[5];
    uint64_t **l_372 = &l_373;
    int32_t l_375 = (-4L);
    VECTOR(int32_t, 2) l_376 = (VECTOR(int32_t, 2))(0x548CFD06L, 0x09AC569DL);
    VECTOR(int64_t, 4) l_407 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 1L), 1L);
    VECTOR(int32_t, 4) l_416 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x1A8ECE83L), 0x1A8ECE83L);
    int32_t l_417 = 0x28D0443AL;
    int32_t l_421[3][7];
    int32_t *l_422 = (void*)0;
    int32_t *l_423 = &p_869->g_218;
    int32_t *l_424[2];
    uint8_t l_425 = 255UL;
    uint64_t l_436 = 0xAC03485B17A3259CL;
    int16_t *l_448 = (void*)0;
    int32_t l_449 = (-9L);
    int16_t *l_450 = (void*)0;
    int16_t *l_451 = (void*)0;
    int16_t *l_452[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t l_464 = 0xC67AL;
    int8_t **l_489 = &p_869->g_123;
    VECTOR(int32_t, 4) l_491 = (VECTOR(int32_t, 4))(0x15089A55L, (VECTOR(int32_t, 2))(0x15089A55L, 0x71F18124L), 0x71F18124L);
    VECTOR(int32_t, 8) l_492 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x6D031D48L), 0x6D031D48L), 0x6D031D48L, 0L, 0x6D031D48L);
    int64_t **l_537 = (void*)0;
    int64_t l_548 = 8L;
    VECTOR(int8_t, 8) l_620 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-7L)), (-7L)), (-7L), (-1L), (-7L));
    int32_t l_626 = 0L;
    int32_t ***l_681 = (void*)0;
    int8_t l_706[10][3][4] = {{{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L}},{{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L}},{{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L}},{{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L}},{{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L}},{{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L}},{{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L}},{{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L}},{{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L}},{{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L},{0x53L,0x53L,0L,0x54L}}};
    VECTOR(int32_t, 2) l_732 = (VECTOR(int32_t, 2))((-10L), 0x1112A09CL);
    VECTOR(int32_t, 2) l_734 = (VECTOR(int32_t, 2))(0x7D539129L, 2L);
    int16_t l_744 = 0x22C2L;
    int8_t l_758 = 0L;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
            l_421[i][j] = (-2L);
    }
    for (i = 0; i < 2; i++)
        l_424[i] = (void*)0;
    for (p_869->g_218 = 0; (p_869->g_218 <= (-17)); p_869->g_218 = safe_sub_func_int64_t_s_s(p_869->g_218, 1))
    { /* block id: 140 */
        int32_t *l_374 = (void*)0;
        int64_t *l_378 = &p_869->g_362;
        int64_t **l_377 = &l_378;
        uint32_t *l_387 = &p_869->g_388;
        int32_t *l_391 = (void*)0;
        VECTOR(int32_t, 4) l_397 = (VECTOR(int32_t, 4))(0x2ECCCE24L, (VECTOR(int32_t, 2))(0x2ECCCE24L, 0L), 0L);
        VECTOR(int32_t, 16) l_398 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x10ACA9DBL), 0x10ACA9DBL), 0x10ACA9DBL, 4L, 0x10ACA9DBL, (VECTOR(int32_t, 2))(4L, 0x10ACA9DBL), (VECTOR(int32_t, 2))(4L, 0x10ACA9DBL), 4L, 0x10ACA9DBL, 4L, 0x10ACA9DBL);
        int32_t l_419[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int i;
        if ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(abs_diff(((VECTOR(int32_t, 8))(p_869->g_370.s35361231)).s15, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_869->g_371.yx)), (l_375 ^= (l_372 != (void*)0)), ((VECTOR(int32_t, 4))(0x4159B5B0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_376.xyxyxyyx)).s57, ((VECTOR(int32_t, 16))(9L, ((VECTOR(int32_t, 8))(0x408FB902L, ((&p_39 != ((*l_377) = &p_869->g_362)) < (FAKE_DIVERGE(p_869->group_1_offset, get_group_id(1), 10) || (+(safe_mod_func_int16_t_s_s((p_40 = p_40), (safe_add_func_int64_t_s_s((((safe_add_func_uint64_t_u_u(p_869->g_207.s5, (safe_mod_func_int64_t_s_s(((p_39 ^ (p_39 >= ((*l_387) = (&p_869->g_203[3] == &p_869->g_203[3])))) <= l_376.y), 0x4A3CE02B74560C9AL)))) > (***p_869->g_273)) != FAKE_DIVERGE(p_869->local_0_offset, get_local_id(0), 10)), p_39))))))), 9L, 0x7DA356D1L, ((VECTOR(int32_t, 2))(0x42BE669AL)), 1L, 0x69F4B490L)), ((VECTOR(int32_t, 4))((-5L))), 1L, 0x53BBBDDEL, 0x4A025045L)).se5, ((VECTOR(int32_t, 2))(0L))))))), 9L)), 0x31FF77F3L)).s55))).yxyyyxyx)).lo)).y ^ l_376.y))
        { /* block id: 145 */
            int32_t **l_389 = (void*)0;
            int32_t **l_390[10] = {&l_374,&p_869->g_331,&l_374,&l_374,&p_869->g_331,&l_374,&l_374,&p_869->g_331,&l_374,&l_374};
            int16_t *l_418[7][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
            VECTOR(uint64_t, 8) l_420 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0UL, 18446744073709551615UL);
            int i, j;
            l_391 = (l_374 = (void*)0);
            l_421[0][3] &= (0L < ((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),uint32_t,((VECTOR(uint32_t, 2))(p_869->g_392.s51)).xyxx, (uint32_t)((((safe_add_func_uint32_t_u_u(l_376.x, ((((***p_869->g_273) = ((safe_rshift_func_uint8_t_u_s(0x2AL, 3)) < ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_397.xy)))).yxxy, ((VECTOR(int32_t, 4))(l_398.s045d))))).zyyyyxxxwzwxzyww)).s6)) | (safe_div_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((p_39 , ((safe_mod_func_uint16_t_u_u(p_39, p_40)) | (safe_add_func_uint8_t_u_u(((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(l_407.zyxwxyww)).hi)).x | (safe_lshift_func_int16_t_s_s((p_869->g_207.s2 ^= ((VECTOR(int16_t, 4))(l_407.w, ((l_417 = (l_416.y = (safe_div_func_int16_t_s_s(l_376.y, (safe_lshift_func_int16_t_s_s((l_375 = (safe_lshift_func_int16_t_s_u(((p_41 != p_43) , p_40), GROUP_DIVERGE(0, 1)))), 7)))))) , 3L), 0x04D1L, 0L)).x), l_419[1]))) || p_869->g_207.s5), 3UL)))), p_869->g_52.s1)), l_376.y))) , 0UL))) , 0x49D3L) == l_376.y) & l_420.s4), (uint32_t)p_869->g_130))).x);
        }
        else
        { /* block id: 154 */
            return (*p_869->g_123);
        }
    }
    --l_425;
    if ((~((-1L) != (safe_div_func_uint64_t_u_u(p_869->g_183.s7, (safe_mul_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(p_40, (safe_add_func_int16_t_s_s(l_436, ((((p_39 , ((safe_lshift_func_int16_t_s_s(((((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 4))(p_869->g_439.s7087)).lo))).even != (p_869->g_80.y = ((safe_mul_func_int16_t_s_s((-5L), (safe_add_func_int16_t_s_s((l_449 = (0x99F8L > ((p_40 , (+((*l_423) = ((safe_lshift_func_int16_t_s_s((((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65531UL, 0x3E35L)), 0xD8BBL, 0x5BA0L)).even, ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))((safe_lshift_func_int8_t_s_s((*p_43), 5)), 0xADE2L, ((VECTOR(uint16_t, 2))(0x7E1DL)), ((VECTOR(uint16_t, 2))(65535UL)), 0x03A5L, ((VECTOR(uint16_t, 4))(0x76E4L)), 0x7AA2L, ((VECTOR(uint16_t, 2))(1UL)), 0x6FD9L, 0UL)).even)).odd, ((VECTOR(uint16_t, 4))(65534UL)), ((VECTOR(uint16_t, 4))(0x3F1CL))))).odd)).yxxx, ((VECTOR(uint16_t, 4))(0x905BL)), ((VECTOR(uint16_t, 4))(65535UL))))).lo))).lo > 0x5E70L), 9)) , (-3L))))) == 1UL))), p_39)))) <= (*p_41)))) || 0x1FL), p_40)) , p_869->g_388)) <= p_869->g_136.y) ^ (*p_41)) | p_869->g_321.x))))) < p_869->g_136.x), (*p_41))))))))
    { /* block id: 162 */
        int32_t *l_455 = &l_417;
        VECTOR(int32_t, 4) l_456 = (VECTOR(int32_t, 4))(0x6E1CF874L, (VECTOR(int32_t, 2))(0x6E1CF874L, 0x718879E9L), 0x718879E9L);
        int i;
        l_456.z ^= ((*l_423) &= ((((*p_869->g_330) != l_455) != (FAKE_DIVERGE(p_869->local_1_offset, get_local_id(1), 10) == ((*l_455) = p_869->g_80.x))) , 0x06DAD8C5L));
        for (p_869->g_246 = (-19); (p_869->g_246 == 5); ++p_869->g_246)
        { /* block id: 168 */
            uint32_t l_459 = 0xCFCFA3A8L;
            (*l_455) = (!l_459);
        }
        if ((1UL <= (safe_rshift_func_uint8_t_u_u(p_39, 2))))
        { /* block id: 171 */
            VECTOR(int32_t, 8) l_463 = (VECTOR(int32_t, 8))(0x09B40672L, (VECTOR(int32_t, 4))(0x09B40672L, (VECTOR(int32_t, 2))(0x09B40672L, 9L), 9L), 9L, 0x09B40672L, 9L);
            int i;
            p_869->g_462 = (*p_869->g_330);
            (*l_455) = 0x34B4E486L;
            (*l_455) = ((VECTOR(int32_t, 4))(l_463.s4014)).y;
            ++l_464;
        }
        else
        { /* block id: 176 */
            VECTOR(int32_t, 16) l_469 = (VECTOR(int32_t, 16))(0x4BC3734FL, (VECTOR(int32_t, 4))(0x4BC3734FL, (VECTOR(int32_t, 2))(0x4BC3734FL, 0x1A28AB1CL), 0x1A28AB1CL), 0x1A28AB1CL, 0x4BC3734FL, 0x1A28AB1CL, (VECTOR(int32_t, 2))(0x4BC3734FL, 0x1A28AB1CL), (VECTOR(int32_t, 2))(0x4BC3734FL, 0x1A28AB1CL), 0x4BC3734FL, 0x1A28AB1CL, 0x4BC3734FL, 0x1A28AB1CL);
            int i;
            if ((atomic_inc(&p_869->g_atomic_input[88 * get_linear_group_id() + 22]) == 0))
            { /* block id: 178 */
                VECTOR(int32_t, 16) l_467 = (VECTOR(int32_t, 16))(0x04276618L, (VECTOR(int32_t, 4))(0x04276618L, (VECTOR(int32_t, 2))(0x04276618L, (-1L)), (-1L)), (-1L), 0x04276618L, (-1L), (VECTOR(int32_t, 2))(0x04276618L, (-1L)), (VECTOR(int32_t, 2))(0x04276618L, (-1L)), 0x04276618L, (-1L), 0x04276618L, (-1L));
                uint8_t l_468 = 0UL;
                int i;
                l_468 = ((VECTOR(int32_t, 2))(l_467.s03)).odd;
                unsigned int result = 0;
                result += l_467.sf;
                result += l_467.se;
                result += l_467.sd;
                result += l_467.sc;
                result += l_467.sb;
                result += l_467.sa;
                result += l_467.s9;
                result += l_467.s8;
                result += l_467.s7;
                result += l_467.s6;
                result += l_467.s5;
                result += l_467.s4;
                result += l_467.s3;
                result += l_467.s2;
                result += l_467.s1;
                result += l_467.s0;
                result += l_468;
                atomic_add(&p_869->g_special_values[88 * get_linear_group_id() + 22], result);
            }
            else
            { /* block id: 180 */
                (1 + 1);
            }
            (*l_423) = ((VECTOR(int32_t, 8))(l_469.s09bbedb2)).s6;
            return (***p_869->g_273);
        }
        for (p_869->g_246 = (-26); (p_869->g_246 >= (-30)); p_869->g_246--)
        { /* block id: 188 */
            uint8_t l_472 = 3UL;
            int16_t **l_480 = &l_451;
            int i, j;
            ++l_472;
            (*l_423) = (~p_40);
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_869->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 72)), permutations[(safe_mod_func_uint32_t_u_u(((+p_869->g_477) ^ ((safe_rshift_func_int16_t_s_u(l_472, 9)) == ((p_42 = ((*l_480) = &p_40)) != p_869->g_168))), 10))][(safe_mod_func_uint32_t_u_u(p_869->tid, 72))]));
        }
    }
    else
    { /* block id: 197 */
        int32_t l_481 = 0x7EE1539DL;
        int32_t l_482[4][8][2] = {{{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L}},{{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L}},{{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L}},{{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L},{(-10L),1L}}};
        uint64_t l_483 = 3UL;
        int32_t l_487 = 0L;
        int64_t *l_490 = &p_869->g_362;
        int32_t **l_493 = &l_424[0];
        int i, j, k;
        l_483++;
        (*l_423) &= ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 8))(1L, (((((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_869->g_486.s57)).xxyyxxxx)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(0x7C7C7A1AD5BF75DFL, 18446744073709551615UL, 0xF5473FEE92C6AB1BL, 0xB26DCFB230573A15L)).odd)))).xyyyyyyx))).s2 , ((((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(p_39, 0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))((l_487 = (*p_869->g_462)), 1L, ((((p_40 , (p_869->g_488 = (void*)0)) != l_489) , l_373) != l_490), ((VECTOR(int32_t, 8))(l_491.xxwywwxy)), ((VECTOR(int32_t, 2))(l_492.s72)), 0x0C066912L, 0x5B64B8E8L, (-9L))).lo))).even)).w, 7L, 3L, ((l_493 == (void*)0) != l_487), ((VECTOR(int32_t, 8))(0x28CF86A5L)), 0x79B570C2L, 0x26E816C5L)).even, ((VECTOR(int32_t, 8))(0x05049B3EL)), ((VECTOR(int32_t, 8))((-1L)))))).s1 , p_869->g_494) == (void*)0)) , (*p_869->g_67)) ^ p_869->g_130), 0x5F7796FFL, 0x1FC3D04EL, (-1L), ((VECTOR(int32_t, 2))((-2L))), 1L)).odd, ((VECTOR(int32_t, 4))(0x3F643C01L))))).z;
    }
    if ((*l_423))
    { /* block id: 203 */
        VECTOR(uint8_t, 16) l_509 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 251UL), 251UL), 251UL, 255UL, 251UL, (VECTOR(uint8_t, 2))(255UL, 251UL), (VECTOR(uint8_t, 2))(255UL, 251UL), 255UL, 251UL, 255UL, 251UL);
        int32_t l_538 = 1L;
        int32_t l_542[9] = {0x61D0FB65L,0L,0x61D0FB65L,0x61D0FB65L,0L,0x61D0FB65L,0x61D0FB65L,0L,0x61D0FB65L};
        int64_t *l_652 = (void*)0;
        int64_t **l_651[9][5][5] = {{{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652}},{{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652}},{{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652}},{{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652}},{{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652}},{{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652}},{{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652}},{{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652}},{{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652},{&l_652,&l_652,(void*)0,(void*)0,&l_652}}};
        int64_t **l_656[7][7] = {{(void*)0,&l_652,(void*)0,&l_652,(void*)0,&l_652,(void*)0},{(void*)0,&l_652,(void*)0,&l_652,(void*)0,&l_652,(void*)0},{(void*)0,&l_652,(void*)0,&l_652,(void*)0,&l_652,(void*)0},{(void*)0,&l_652,(void*)0,&l_652,(void*)0,&l_652,(void*)0},{(void*)0,&l_652,(void*)0,&l_652,(void*)0,&l_652,(void*)0},{(void*)0,&l_652,(void*)0,&l_652,(void*)0,&l_652,(void*)0},{(void*)0,&l_652,(void*)0,&l_652,(void*)0,&l_652,(void*)0}};
        VECTOR(int32_t, 4) l_660 = (VECTOR(int32_t, 4))(0x20678194L, (VECTOR(int32_t, 2))(0x20678194L, (-2L)), (-2L));
        VECTOR(int32_t, 8) l_733 = (VECTOR(int32_t, 8))(0x3674DED1L, (VECTOR(int32_t, 4))(0x3674DED1L, (VECTOR(int32_t, 2))(0x3674DED1L, (-9L)), (-9L)), (-9L), 0x3674DED1L, (-9L));
        int i, j, k;
        for (p_39 = 0; (p_39 != (-24)); p_39--)
        { /* block id: 206 */
            int32_t **l_498[7] = {&l_424[1],&p_869->g_331,&l_424[1],&l_424[1],&p_869->g_331,&l_424[1],&l_424[1]};
            uint8_t *l_520[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint32_t l_627 = 4294967288UL;
            uint16_t *l_635[1];
            int64_t **l_640 = &p_869->g_495;
            int64_t ***l_641 = (void*)0;
            int64_t ***l_642 = &l_640;
            int64_t *l_650 = &l_548;
            int64_t **l_649 = &l_650;
            int i;
            for (i = 0; i < 1; i++)
                l_635[i] = (void*)0;
            (*p_869->g_330) = (void*)0;
        }
        if ((0x60A5BC04C2CACCBDL > (l_681 == &p_869->g_330)))
        { /* block id: 296 */
            uint16_t l_682 = 0xEA68L;
            int32_t l_687 = 0x62A22036L;
            int32_t l_688 = (-5L);
            int32_t l_689 = 0x5B0E03ACL;
            int32_t l_690 = 0x0A2D1828L;
            ++l_682;
            for (p_39 = 0; (p_39 <= (-26)); p_39 = safe_sub_func_uint16_t_u_u(p_39, 5))
            { /* block id: 300 */
                return (*p_41);
            }
            p_869->g_691++;
        }
        else
        { /* block id: 304 */
            uint64_t l_708[8][4] = {{1UL,0x7F782D7209755797L,0x82E057A4EC3968A6L,7UL},{1UL,0x7F782D7209755797L,0x82E057A4EC3968A6L,7UL},{1UL,0x7F782D7209755797L,0x82E057A4EC3968A6L,7UL},{1UL,0x7F782D7209755797L,0x82E057A4EC3968A6L,7UL},{1UL,0x7F782D7209755797L,0x82E057A4EC3968A6L,7UL},{1UL,0x7F782D7209755797L,0x82E057A4EC3968A6L,7UL},{1UL,0x7F782D7209755797L,0x82E057A4EC3968A6L,7UL},{1UL,0x7F782D7209755797L,0x82E057A4EC3968A6L,7UL}};
            VECTOR(int32_t, 2) l_737 = (VECTOR(int32_t, 2))(0L, (-9L));
            int8_t ***l_741 = &l_489;
            int8_t ****l_740 = &l_741;
            int i, j;
            (*p_869->g_330) = &l_542[3];
            if ((atomic_inc(&p_869->g_atomic_input[88 * get_linear_group_id() + 34]) == 9))
            { /* block id: 307 */
                int16_t l_694 = 0x1AEDL;
                int64_t l_695 = 0x502523EC1540AEF8L;
                uint32_t l_696 = 0UL;
                int32_t l_699 = 8L;
                int32_t l_700 = 0x547672C2L;
                uint64_t l_701[4][5] = {{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL,18446744073709551613UL}};
                uint32_t l_702 = 0xE5B62D30L;
                uint8_t l_703[9];
                int i, j;
                for (i = 0; i < 9; i++)
                    l_703[i] = 255UL;
                l_696++;
                l_700 = (l_701[0][3] = (l_699 , l_700));
                l_703[4] &= l_702;
                unsigned int result = 0;
                result += l_694;
                result += l_695;
                result += l_696;
                result += l_699;
                result += l_700;
                int l_701_i0, l_701_i1;
                for (l_701_i0 = 0; l_701_i0 < 4; l_701_i0++) {
                    for (l_701_i1 = 0; l_701_i1 < 5; l_701_i1++) {
                        result += l_701[l_701_i0][l_701_i1];
                    }
                }
                result += l_702;
                int l_703_i0;
                for (l_703_i0 = 0; l_703_i0 < 9; l_703_i0++) {
                    result += l_703[l_703_i0];
                }
                atomic_add(&p_869->g_special_values[88 * get_linear_group_id() + 34], result);
            }
            else
            { /* block id: 312 */
                (1 + 1);
            }
            (*p_869->g_331) |= (&p_43 != (*p_869->g_273));
            for (p_869->g_130 = 0; (p_869->g_130 > 6); ++p_869->g_130)
            { /* block id: 318 */
                int16_t l_707 = 0x4880L;
                uint8_t *l_717[6][8] = {{&p_869->g_120,&p_869->g_521[4][0],&p_869->g_521[6][0],&p_869->g_521[4][0],&p_869->g_120,&p_869->g_120,&p_869->g_521[4][0],&p_869->g_521[6][0]},{&p_869->g_120,&p_869->g_521[4][0],&p_869->g_521[6][0],&p_869->g_521[4][0],&p_869->g_120,&p_869->g_120,&p_869->g_521[4][0],&p_869->g_521[6][0]},{&p_869->g_120,&p_869->g_521[4][0],&p_869->g_521[6][0],&p_869->g_521[4][0],&p_869->g_120,&p_869->g_120,&p_869->g_521[4][0],&p_869->g_521[6][0]},{&p_869->g_120,&p_869->g_521[4][0],&p_869->g_521[6][0],&p_869->g_521[4][0],&p_869->g_120,&p_869->g_120,&p_869->g_521[4][0],&p_869->g_521[6][0]},{&p_869->g_120,&p_869->g_521[4][0],&p_869->g_521[6][0],&p_869->g_521[4][0],&p_869->g_120,&p_869->g_120,&p_869->g_521[4][0],&p_869->g_521[6][0]},{&p_869->g_120,&p_869->g_521[4][0],&p_869->g_521[6][0],&p_869->g_521[4][0],&p_869->g_120,&p_869->g_120,&p_869->g_521[4][0],&p_869->g_521[6][0]}};
                uint16_t *l_718 = &p_869->g_226;
                int32_t l_729 = 0x3F507345L;
                VECTOR(int32_t, 16) l_735 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0L), 0L), 0L, 4L, 0L, (VECTOR(int32_t, 2))(4L, 0L), (VECTOR(int32_t, 2))(4L, 0L), 4L, 0L, 4L, 0L);
                int i, j;
                ++l_708[2][0];
                (*l_423) &= (safe_add_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u((p_869->g_521[4][0] |= GROUP_DIVERGE(0, 1)), l_708[2][0])), (--(*l_718)))) && (~((safe_mul_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(1UL, ((~(((safe_lshift_func_uint16_t_u_u((((l_729 &= (++p_869->g_183.sd)) || (p_40 , (*p_43))) & (safe_lshift_func_int8_t_s_s((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_732.xy)), (-10L), (-4L))).xyxyyxwzxzxzzwxz)))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 4))(l_733.s0054)).lo, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_734.xx))))))), ((VECTOR(int32_t, 2))(0x16692E73L, 1L)), ((VECTOR(int32_t, 4))(l_735.s069d)).even))).xyxxyxxx)).hi, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_869->g_736.s1f)).xyxxxxyx)), ((VECTOR(int32_t, 2))(l_737.xy)).yxyyxxyx))).lo))).odd)).xyxxyyyyxyyyxxxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0x5F5B51EAL, (-1L), (safe_sub_func_uint64_t_u_u((((&p_869->g_273 == l_740) ^ GROUP_DIVERGE(1, 1)) && (+((((safe_mul_func_int8_t_s_s((*p_869->g_123), ((!(l_538 | p_869->g_736.s0)) && l_744))) != l_733.s3) ^ 0x0DBBB31F5064DDC1L) < p_39))), l_735.s1)), (-2L), 5L, ((VECTOR(int32_t, 2))(0x570142C3L)), (-1L))))).s5440624377157745))).s36b3)).x && l_707), 6))), l_660.y)) & p_869->g_203[3]) != p_869->g_370.s5)) != p_40))) <= p_869->g_392.s1) != 1UL), 247UL)) , (*p_869->g_123)))), p_40));
            }
        }
    }
    else
    { /* block id: 327 */
        if ((atomic_inc(&p_869->g_atomic_input[88 * get_linear_group_id() + 72]) == 3))
        { /* block id: 329 */
            uint16_t l_745 = 2UL;
            l_745++;
            for (l_745 = (-19); (l_745 < 4); l_745 = safe_add_func_uint32_t_u_u(l_745, 1))
            { /* block id: 333 */
                int32_t l_750 = 0x77F5BF3CL;
                VECTOR(uint32_t, 16) l_751 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967293UL), 4294967293UL), 4294967293UL, 0UL, 4294967293UL, (VECTOR(uint32_t, 2))(0UL, 4294967293UL), (VECTOR(uint32_t, 2))(0UL, 4294967293UL), 0UL, 4294967293UL, 0UL, 4294967293UL);
                int32_t l_752 = (-10L);
                int32_t l_753 = 1L;
                int16_t l_754 = (-9L);
                uint64_t l_755 = 1UL;
                int i;
                l_752 &= (l_750 , l_751.sb);
                --l_755;
            }
            unsigned int result = 0;
            result += l_745;
            atomic_add(&p_869->g_special_values[88 * get_linear_group_id() + 72], result);
        }
        else
        { /* block id: 337 */
            (1 + 1);
        }
        return (*p_43);
    }
    return l_758;
}


/* ------------------------------------------ */
/* 
 * reads : p_869->g_comm_values p_869->g_171 p_869->g_321 p_869->g_273 p_869->g_274 p_869->g_123 p_869->g_67 p_869->g_68 p_869->g_218 p_869->g_330 p_869->g_29 p_869->g_124 p_869->g_226 p_869->g_52 p_869->g_365 p_869->g_367
 * writes: p_869->g_120 p_869->g_29 p_869->g_124 p_869->g_218 p_869->g_171 p_869->g_331 p_869->g_203 p_869->g_136 p_869->g_362 p_869->g_365
 */
int8_t * func_48(int32_t  p_49, int16_t * p_50, struct S0 * p_869)
{ /* block id: 106 */
    uint8_t l_316 = 246UL;
    uint8_t *l_322 = &p_869->g_120;
    int8_t *****l_325 = (void*)0;
    int32_t l_333 = (-10L);
    if ((safe_sub_func_int64_t_s_s(p_869->g_comm_values[p_869->tid], ((safe_rshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((p_869->g_171 <= (+(safe_lshift_func_uint8_t_u_s(0x15L, 4)))) < (safe_sub_func_int64_t_s_s((l_316 | ((*l_322) = (safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(0x02L, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_869->g_321.xxxyyyyxxxyyyyxx)))).s8)) & l_316), l_316)))), ((VECTOR(int64_t, 2))(0x692B57320C15073BL, (-8L))).even))), p_49)), ((safe_mod_func_int16_t_s_s((((***p_869->g_273) = ((void*)0 == l_325)) , l_316), (*p_869->g_67))) < 0UL))), 6)) && 1UL))))
    { /* block id: 109 */
        int32_t *l_327 = &p_869->g_171;
        (*l_327) = (p_869->g_218 &= 1L);
        for (p_869->g_218 = 0; (p_869->g_218 > (-17)); p_869->g_218 = safe_sub_func_int16_t_s_s(p_869->g_218, 5))
        { /* block id: 114 */
            (*p_869->g_330) = &p_869->g_171;
        }
    }
    else
    { /* block id: 117 */
        int32_t *l_332 = &p_869->g_171;
        int32_t *l_334[10] = {&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_218,&p_869->g_218};
        uint32_t l_335[9];
        int8_t *l_342 = &p_869->g_246;
        int i;
        for (i = 0; i < 9; i++)
            l_335[i] = 0x88EF64D7L;
        --l_335[1];
        for (p_49 = 0; (p_49 == (-18)); p_49--)
        { /* block id: 121 */
            int32_t l_343 = (-10L);
            int32_t l_363 = 0x073FC7AFL;
            uint32_t l_364 = 4294967292UL;
            if ((safe_sub_func_uint16_t_u_u(((*p_869->g_123) & 0xBAL), (l_316 , p_869->g_321.x))))
            { /* block id: 122 */
                return l_342;
            }
            else
            { /* block id: 124 */
                uint64_t *l_344 = &p_869->g_203[3];
                int64_t *l_349 = (void*)0;
                int64_t *l_350 = (void*)0;
                int64_t *l_351 = (void*)0;
                int64_t *l_352 = (void*)0;
                int64_t *l_353 = (void*)0;
                int64_t *l_354 = (void*)0;
                int64_t *l_355 = (void*)0;
                int64_t *l_356 = (void*)0;
                int64_t *l_357 = (void*)0;
                int64_t *l_360 = (void*)0;
                int64_t *l_361 = &p_869->g_362;
                l_343 = (((*p_869->g_123) = l_343) | ((((*l_344) = (l_343 > p_869->g_226)) ^ (safe_div_func_int64_t_s_s((((0x13L > (safe_mod_func_uint32_t_u_u((p_49 == p_49), p_869->g_52.s5))) & (p_869->g_136.x = 8L)) > ((+((*l_361) = ((safe_sub_func_uint16_t_u_u(0x9A3FL, (-5L))) & l_343))) , p_869->g_171)), l_363))) || GROUP_DIVERGE(2, 1)));
            }
            if (l_364)
                break;
            (*p_869->g_367) = p_869->g_365;
        }
        (*l_332) |= 0L;
    }
    return l_322;
}


/* ------------------------------------------ */
/* 
 * reads : p_869->g_120 p_869->g_273 p_869->g_29 p_869->g_183 p_869->g_218 p_869->g_206 p_869->g_246 p_869->g_274 p_869->g_123 p_869->g_124
 * writes: p_869->g_218 p_869->g_120 p_869->g_246 p_869->g_171 p_869->g_231
 */
uint32_t  func_57(int64_t  p_58, int16_t * p_59, int16_t * p_60, uint32_t  p_61, int8_t * p_62, struct S0 * p_869)
{ /* block id: 9 */
    uint64_t l_105 = 18446744073709551615UL;
    int32_t *l_255 = (void*)0;
    int32_t *l_256 = (void*)0;
    int32_t *l_257 = (void*)0;
    int32_t *l_258 = &p_869->g_218;
    VECTOR(int64_t, 4) l_261 = (VECTOR(int64_t, 4))(0x7B185C60F54275DCL, (VECTOR(int64_t, 2))(0x7B185C60F54275DCL, 0x03989482EB33828EL), 0x03989482EB33828EL);
    int8_t ***l_271 = (void*)0;
    int8_t **l_280 = &p_869->g_123;
    int8_t ***l_279 = &l_280;
    int8_t ****l_278 = &l_279;
    uint64_t *l_288 = &p_869->g_203[3];
    uint16_t l_295 = 0xAD2AL;
    VECTOR(uint64_t, 4) l_298 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xACEBCEC931C8A64BL), 0xACEBCEC931C8A64BL);
    int32_t **l_299 = &l_256;
    int16_t l_300 = 0x13EAL;
    int i;
    for (p_58 = 0; (p_58 <= (-25)); p_58 = safe_sub_func_uint32_t_u_u(p_58, 5))
    { /* block id: 12 */
        VECTOR(uint16_t, 16) l_78 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xD060L), 0xD060L), 0xD060L, 1UL, 0xD060L, (VECTOR(uint16_t, 2))(1UL, 0xD060L), (VECTOR(uint16_t, 2))(1UL, 0xD060L), 1UL, 0xD060L, 1UL, 0xD060L);
        VECTOR(int32_t, 16) l_79 = (VECTOR(int32_t, 16))(0x3DFBFBE8L, (VECTOR(int32_t, 4))(0x3DFBFBE8L, (VECTOR(int32_t, 2))(0x3DFBFBE8L, (-6L)), (-6L)), (-6L), 0x3DFBFBE8L, (-6L), (VECTOR(int32_t, 2))(0x3DFBFBE8L, (-6L)), (VECTOR(int32_t, 2))(0x3DFBFBE8L, (-6L)), 0x3DFBFBE8L, (-6L), 0x3DFBFBE8L, (-6L));
        VECTOR(int16_t, 16) l_81 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x5200L), 0x5200L), 0x5200L, 1L, 0x5200L, (VECTOR(int16_t, 2))(1L, 0x5200L), (VECTOR(int16_t, 2))(1L, 0x5200L), 1L, 0x5200L, 1L, 0x5200L);
        int16_t *l_95 = (void*)0;
        VECTOR(uint64_t, 2) l_96 = (VECTOR(uint64_t, 2))(0xB7303F68C368F564L, 18446744073709551615UL);
        VECTOR(uint8_t, 4) l_104 = (VECTOR(uint8_t, 4))(0xDAL, (VECTOR(uint8_t, 2))(0xDAL, 0xEEL), 0xEEL);
        int16_t l_253 = 0x19CCL;
        VECTOR(int32_t, 2) l_254 = (VECTOR(int32_t, 2))(0x1D088A12L, 0x4A31A6CAL);
        int i;
        l_254.x = ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))((safe_rshift_func_int16_t_s_u((safe_add_func_int64_t_s_s(((FAKE_DIVERGE(p_869->global_0_offset, get_global_id(0), 10) , (p_61 < ((safe_rshift_func_int8_t_s_s((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_78.s950c43ca)).s62)).yyyyyyyyxxyyyxxy)).sc , (*p_62)), (0x29D0E46FL <= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_79.s2e4d72e8f98891c1)))).sa, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(p_869->g_80.xyxx)), ((VECTOR(int16_t, 2))(l_81.scc)), ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))((safe_lshift_func_int16_t_s_u(func_84(func_89((func_92(l_95, ((l_79.s1 , (((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 2))(l_96.yx)).yyxxxyxxxxxxxxxy, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 16))(((safe_mod_func_int32_t_s_s((((((VECTOR(uint64_t, 8))((safe_unary_minus_func_int64_t_s((safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(p_58, (((VECTOR(uint8_t, 4))(l_104.xyxx)).z , ((void*)0 == p_60)))), ((VECTOR(int64_t, 2))(0x026CBAAD56265239L, (-1L))).odd)))), 0UL, 0x78237234FC06BE8EL, 0UL, 18446744073709551615UL, 0UL, 4UL, 18446744073709551611UL)).s5 && l_105) || p_58) & 0x30L), p_61)) >= p_869->g_80.x), 0xABCDCAF5201FEAE7L, ((VECTOR(uint64_t, 2))(4UL)), 0xA95A077DDA0CFD25L, p_869->g_80.y, 0xF246F767204C5B33L, 0xB9B4FE2E886BE4B2L, ((VECTOR(uint64_t, 4))(0xCB2DEB474D9FAD1AL)), FAKE_DIVERGE(p_869->global_2_offset, get_global_id(2), 10), ((VECTOR(uint64_t, 2))(0xC02D6B031E64C26FL)), 0x769F55D16F9888A1L)), ((VECTOR(uint64_t, 16))(0x98D8379A3785E6FAL))))).s96cd)).xyxzywxwxzwxyywy))).se9, ((VECTOR(uint64_t, 2))(0xECAE5D5D6CB7F01EL))))).even > p_869->g_80.y)) | p_869->g_comm_values[p_869->tid]), p_869) , (void*)0), p_869->g_comm_values[p_869->tid], p_869), l_78.sa, &p_869->g_130, p_869->l_comm_values[(safe_mod_func_uint32_t_u_u(p_869->tid, 72))], p_869), p_61)), 0x70AAL, (-1L), ((VECTOR(int16_t, 2))((-1L))), l_105, (-1L), 1L)).hi)).wxxwyxxx, ((VECTOR(int16_t, 8))(0x451CL)), ((VECTOR(int16_t, 8))(0x73B5L))))), ((VECTOR(int16_t, 8))(1L))))), 0x2EE1L, 1L)).s1e63)), ((VECTOR(uint16_t, 4))(1UL))))).zzxywzxz)), ((VECTOR(int32_t, 8))(1L)), ((VECTOR(int32_t, 8))(0x2EE2D881L))))), ((VECTOR(int32_t, 2))(0x72AC8039L)), 1L, ((VECTOR(int32_t, 4))(0x212ED9C8L)))).s2a)).yxxy, ((VECTOR(int32_t, 4))(1L))))).xywyyzxz)).s3))) != p_869->g_183.s8))) , p_869->g_80.x), l_253)), p_869->g_231.z)), 0x07DBFFB3L, 0x3B66BF3DL, 0x05D11C4BL)).zwzwwyxy, ((VECTOR(int32_t, 8))(0x241E3957L)), ((VECTOR(int32_t, 8))(0x01596AA2L))))).s3;
    }
    (*l_258) = p_61;
    for (p_869->g_120 = 16; (p_869->g_120 >= 10); p_869->g_120 = safe_sub_func_uint32_t_u_u(p_869->g_120, 6))
    { /* block id: 85 */
        int32_t **l_268 = &l_258;
        int8_t **l_270 = &p_869->g_123;
        int8_t ***l_269[7][2] = {{&l_270,&l_270},{&l_270,&l_270},{&l_270,&l_270},{&l_270,&l_270},{&l_270,&l_270},{&l_270,&l_270},{&l_270,&l_270}};
        int8_t ****l_272 = &l_269[1][0];
        int8_t *****l_281 = &l_278;
        int8_t ****l_282 = &l_279;
        uint64_t l_285 = 7UL;
        uint64_t *l_287[8] = {&l_105,&p_869->g_203[2],&l_105,&l_105,&p_869->g_203[2],&l_105,&l_105,&p_869->g_203[2]};
        uint64_t **l_286 = &l_287[0];
        int i, j;
        (*l_258) = ((((VECTOR(int64_t, 2))(l_261.xy)).hi <= (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((void*)0 == l_268), (((*l_272) = (l_271 = l_269[1][0])) == p_869->g_273))), (((((*p_62) != (((*l_286) = (((safe_div_func_uint64_t_u_u(p_61, p_869->g_183.sb)) , (((((((((safe_unary_minus_func_int32_t_s(((l_282 = ((*l_281) = l_278)) == ((safe_add_func_int8_t_s_s((**l_268), l_285)) , &p_869->g_273)))) , p_869->g_29) == 0xA287L) , p_869->g_206.y) && p_61) | (**l_268)) , (void*)0) == (void*)0) > 0x6BL)) , &l_285)) == l_288)) , (*p_62)) != 0x79L) , p_869->g_206.x))), (*p_62)))) > 0x2101DCE6AB1F8B39L);
        for (p_869->g_246 = (-8); (p_869->g_246 != (-1)); p_869->g_246++)
        { /* block id: 94 */
            VECTOR(int32_t, 16) l_293 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
            int32_t *l_294 = &p_869->g_171;
            int i;
            (*l_294) = ((safe_rshift_func_int16_t_s_u((-7L), 11)) , ((**l_268) = ((VECTOR(int32_t, 8))(l_293.sc4c52ab0)).s2));
            (*l_258) = (&p_62 == (*l_279));
            (*l_258) = (((p_869->g_231.x = l_295) & (safe_div_func_int32_t_s_s(((**l_268) , (((VECTOR(uint64_t, 16))(l_298.yyyyxwyyyxxyzwzy)).s9 && (**l_268))), 8L))) & ((***p_869->g_273) , FAKE_DIVERGE(p_869->local_0_offset, get_local_id(0), 10)));
        }
        return (**l_268);
    }
    (*l_299) = l_257;
    return l_300;
}


/* ------------------------------------------ */
/* 
 * reads : p_869->g_171 p_869->g_183 p_869->g_203 p_869->g_130 p_869->g_206 p_869->g_207 p_869->g_124 p_869->g_218 p_869->g_226 p_869->g_198 p_869->g_136
 * writes: p_869->g_171 p_869->g_80 p_869->g_198 p_869->g_203 p_869->g_124 p_869->g_218 p_869->g_206 p_869->g_207 p_869->g_226
 */
int16_t  func_84(int16_t * p_85, uint64_t  p_86, int8_t * p_87, uint8_t  p_88, struct S0 * p_869)
{ /* block id: 34 */
    VECTOR(int32_t, 16) l_169 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x53AED6AEL), 0x53AED6AEL), 0x53AED6AEL, (-1L), 0x53AED6AEL, (VECTOR(int32_t, 2))((-1L), 0x53AED6AEL), (VECTOR(int32_t, 2))((-1L), 0x53AED6AEL), (-1L), 0x53AED6AEL, (-1L), 0x53AED6AEL);
    int32_t *l_170[6] = {&p_869->g_171,&p_869->g_171,&p_869->g_171,&p_869->g_171,&p_869->g_171,&p_869->g_171};
    uint32_t l_172[8][1][8] = {{{0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L}},{{0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L}},{{0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L}},{{0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L}},{{0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L}},{{0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L}},{{0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L}},{{0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L,0x3B3623E6L}}};
    int32_t l_180 = 0x00C22193L;
    VECTOR(uint32_t, 4) l_188 = (VECTOR(uint32_t, 4))(0x53DE24A4L, (VECTOR(uint32_t, 2))(0x53DE24A4L, 0x22D53653L), 0x22D53653L);
    VECTOR(uint8_t, 4) l_190 = (VECTOR(uint8_t, 4))(0x84L, (VECTOR(uint8_t, 2))(0x84L, 0x07L), 0x07L);
    VECTOR(uint8_t, 2) l_191 = (VECTOR(uint8_t, 2))(0x0AL, 0x3AL);
    VECTOR(int16_t, 8) l_208 = (VECTOR(int16_t, 8))(0x76D2L, (VECTOR(int16_t, 4))(0x76D2L, (VECTOR(int16_t, 2))(0x76D2L, 1L), 1L), 1L, 0x76D2L, 1L);
    VECTOR(int16_t, 4) l_209 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x3C6AL), 0x3C6AL);
    uint32_t l_223 = 0UL;
    int16_t l_247[1][5][2] = {{{0x209BL,0x209BL},{0x209BL,0x209BL},{0x209BL,0x209BL},{0x209BL,0x209BL},{0x209BL,0x209BL}}};
    int i, j, k;
    l_172[3][0][7] ^= ((VECTOR(int32_t, 4))(l_169.s4a76)).y;
    if ((GROUP_DIVERGE(1, 1) <= 5L))
    { /* block id: 36 */
        int32_t **l_173 = (void*)0;
        int32_t **l_174 = &l_170[2];
        int32_t ***l_177 = &l_173;
        uint64_t l_220 = 0x9FEF01F0A48D64B5L;
        int32_t l_225[8][7] = {{(-4L),0x127A17F3L,0L,0x198AFD05L,0x0629F829L,0x198AFD05L,0L},{(-4L),0x127A17F3L,0L,0x198AFD05L,0x0629F829L,0x198AFD05L,0L},{(-4L),0x127A17F3L,0L,0x198AFD05L,0x0629F829L,0x198AFD05L,0L},{(-4L),0x127A17F3L,0L,0x198AFD05L,0x0629F829L,0x198AFD05L,0L},{(-4L),0x127A17F3L,0L,0x198AFD05L,0x0629F829L,0x198AFD05L,0L},{(-4L),0x127A17F3L,0L,0x198AFD05L,0x0629F829L,0x198AFD05L,0L},{(-4L),0x127A17F3L,0L,0x198AFD05L,0x0629F829L,0x198AFD05L,0L},{(-4L),0x127A17F3L,0L,0x198AFD05L,0x0629F829L,0x198AFD05L,0L}};
        int32_t *l_237 = &l_225[4][6];
        int i, j;
        p_869->g_171 = 7L;
        (*l_174) = l_170[2];
        if ((safe_add_func_uint32_t_u_u((((*l_177) = &l_170[2]) == &l_170[2]), p_869->g_171)))
        { /* block id: 40 */
            VECTOR(uint16_t, 8) l_189 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xC6C0L), 0xC6C0L), 0xC6C0L, 0UL, 0xC6C0L);
            int32_t *l_201 = &p_869->g_171;
            uint64_t *l_202 = &p_869->g_203[3];
            int8_t *l_212[9][5][5] = {{{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29}},{{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29}},{{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29}},{{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29}},{{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29}},{{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29}},{{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29}},{{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29}},{{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29},{&p_869->g_124,&p_869->g_29,&p_869->g_130,&p_869->g_130,&p_869->g_29}}};
            uint32_t *l_219 = &l_172[1][0][2];
            int16_t *l_221 = (void*)0;
            int16_t *l_222[4];
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_222[i] = (void*)0;
            p_869->g_198 = (safe_mul_func_uint16_t_u_u((l_180 , (((safe_add_func_uint16_t_u_u(p_86, (((VECTOR(uint8_t, 16))(p_869->g_183.s86bf0284a6ca7198)).se != (safe_lshift_func_uint16_t_u_s((&l_180 == (void*)0), (safe_lshift_func_uint16_t_u_s((((VECTOR(uint32_t, 2))(l_188.zz)).odd , ((VECTOR(uint16_t, 2))(l_189.s01)).hi), 3))))))) <= ((VECTOR(uint8_t, 8))(l_190.zwyyzyxy)).s4) > ((VECTOR(uint8_t, 16))(l_191.yyxyxxyyxyxxxyyx)).sd)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0x2BA5L, 0UL, 65526UL, 0x013EL)), 0x5B90L, (safe_add_func_uint64_t_u_u(((**l_173) &= (0x8002A97CL || (safe_add_func_int16_t_s_s((p_869->g_80.y = (-1L)), (safe_rshift_func_int16_t_s_u((p_85 == (void*)0), 3)))))), p_86)), 0x9403L, 65535UL)).even, ((VECTOR(uint16_t, 4))(0x23F2L)), ((VECTOR(uint16_t, 4))(1UL))))), ((VECTOR(uint16_t, 2))(65535UL)), 8UL, 0UL)).s5));
            p_869->g_171 = (***l_177);
            l_223 |= ((safe_rshift_func_int16_t_s_s(((((*l_173) = l_201) != (void*)0) , 0L), 11)) , (((((++(*l_202)) , (((*p_87) < p_86) < (p_869->g_207.s0 = (p_869->g_206.x = ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(p_869->g_206.yxyy)), ((VECTOR(int16_t, 8))((-1L), 0x4119L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 2))(6L, 0x325BL)).yxxxxxxxxxxxxyyy, ((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 2))(p_869->g_207.s30)).yxyyyyxxxyyyxyyy, ((VECTOR(int16_t, 2))(l_208.s27)).yxyxxxyyyyyxyxxy, ((VECTOR(int16_t, 2))(l_209.wz)).yxyxxxyyxxxyxyyy)))))).s0a, ((VECTOR(int16_t, 8))(0x7A74L, 1L, 0x1043L, 0x2984L, (safe_div_func_uint64_t_u_u(((p_869->g_124 ^= (*p_87)) || (((*l_219) = (safe_rshift_func_uint8_t_u_s(((safe_div_func_int32_t_s_s(p_869->g_207.s0, (safe_unary_minus_func_int32_t_s((p_869->g_218 &= (*l_201)))))) , p_88), 7))) != p_869->g_207.s4)), p_88)), ((VECTOR(int16_t, 2))(0x4EC3L)), 0x40A2L)).s26))).yxyxxyyy, ((VECTOR(int16_t, 8))(2L))))), (int16_t)l_220))).odd)), 0x55BBL, 0x7FCAL)).hi))).wzyzzwyzxwwwyzxy)).s1ac8)).wxxzxxwxxxywxzxz, ((VECTOR(int16_t, 16))(1L)), ((VECTOR(int16_t, 16))(0x6987L))))).s6f)))).hi)))) , (**l_173)) , p_86) <= (**l_173)));
        }
        else
        { /* block id: 53 */
            int16_t l_224 = 0x2C7EL;
            --p_869->g_226;
            l_225[5][2] |= (***l_177);
        }
        for (p_869->g_198 = 0; (p_869->g_198 > 1); p_869->g_198++)
        { /* block id: 59 */
            uint16_t l_232[3];
            int32_t l_238 = 0x460F6C44L;
            int32_t l_241 = 0x17AFACD9L;
            int32_t l_242 = 1L;
            int32_t l_244[2];
            uint32_t l_248 = 1UL;
            int64_t l_251 = 0L;
            int i;
            for (i = 0; i < 3; i++)
                l_232[i] = 65535UL;
            for (i = 0; i < 2; i++)
                l_244[i] = 0x10B6CEE0L;
            l_232[2] |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_869->g_231.wyxz)).xzzxxzywyxxyyzwz)).s0;
            for (p_88 = (-11); (p_88 <= 43); p_88++)
            { /* block id: 63 */
                int8_t l_239[5][5][5] = {{{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)}},{{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)}},{{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)}},{{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)}},{{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)},{(-3L),0x47L,0x5EL,0x47L,(-3L)}}};
                int32_t l_240 = 0L;
                int32_t l_243 = 0L;
                int32_t l_245[3][3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_245[i][j] = 0L;
                }
                for (p_869->g_171 = 25; (p_869->g_171 > (-15)); p_869->g_171 = safe_sub_func_uint64_t_u_u(p_869->g_171, 8))
                { /* block id: 66 */
                    l_237 = (*l_174);
                }
                if (p_869->g_136.x)
                    continue;
                ++l_248;
                if (p_869->g_218)
                    continue;
            }
            l_170[3] = &p_869->g_171;
            if (l_251)
                break;
        }
    }
    else
    { /* block id: 76 */
        int32_t **l_252 = &l_170[2];
        (*l_252) = &l_180;
    }
    return p_869->g_226;
}


/* ------------------------------------------ */
/* 
 * reads : p_869->g_124 p_869->g_130 p_869->g_80 p_869->g_136 p_869->g_120 p_869->l_comm_values p_869->g_67 p_869->g_51 p_869->g_123 p_869->g_29 p_869->g_168
 * writes: p_869->g_120 p_869->g_123 p_869->g_124 p_869->g_136
 */
int16_t * func_89(int16_t * p_90, int16_t  p_91, struct S0 * p_869)
{ /* block id: 15 */
    uint32_t l_109 = 0x85B3408EL;
    VECTOR(int32_t, 2) l_110 = (VECTOR(int32_t, 2))(0x1BE1A4DEL, 1L);
    int8_t *l_111 = &p_869->g_29;
    int8_t **l_112 = &l_111;
    VECTOR(uint32_t, 4) l_113 = (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 4294967292UL), 4294967292UL);
    VECTOR(uint64_t, 4) l_114 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x686465E51F8F6A06L), 0x686465E51F8F6A06L);
    VECTOR(uint32_t, 8) l_115 = (VECTOR(uint32_t, 8))(2UL, (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 0x669FAE0DL), 0x669FAE0DL), 0x669FAE0DL, 2UL, 0x669FAE0DL);
    VECTOR(uint32_t, 2) l_116 = (VECTOR(uint32_t, 2))(0xCA981A8BL, 4294967293UL);
    VECTOR(uint32_t, 4) l_117 = (VECTOR(uint32_t, 4))(0x47D00CD1L, (VECTOR(uint32_t, 2))(0x47D00CD1L, 0xDECF9726L), 0xDECF9726L);
    int8_t *l_122 = (void*)0;
    int8_t **l_121[2][1][9] = {{{&l_122,&l_122,&l_122,&l_122,&l_122,&l_122,&l_122,&l_122,&l_122}},{{&l_122,&l_122,&l_122,&l_122,&l_122,&l_122,&l_122,&l_122,&l_122}}};
    int8_t ***l_125 = &l_121[1][0][5];
    int32_t *l_127 = (void*)0;
    int32_t **l_126 = &l_127;
    int16_t *l_133 = (void*)0;
    VECTOR(int64_t, 2) l_137 = (VECTOR(int64_t, 2))(0x0E7FB8437FCE8780L, 0x01CCAA1097536633L);
    uint64_t l_143[1][5];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
            l_143[i][j] = 7UL;
    }
    (*l_125) = (((p_869->g_123 = ((safe_add_func_uint16_t_u_u((l_109 == (((VECTOR(int32_t, 8))(l_110.yyxyxxyy)).s5 , (((*l_112) = l_111) == ((p_869->g_120 = ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_113.ww)), ((!(((VECTOR(uint64_t, 2))(l_114.xw)).odd < 18446744073709551615UL)) > (l_113.x , 4UL)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(l_115.s10635252)).s30, ((VECTOR(uint32_t, 8))(l_116.xxyxxxyy)).s15))))), ((VECTOR(uint32_t, 2))(l_117.yy)), 0UL, (+0x8149C976L), l_110.x, 0x15561C65L, 0x0C5E8AE3L, (safe_mod_func_int16_t_s_s(((void*)0 != l_112), p_91)), ((VECTOR(uint32_t, 2))(0UL)), 0x27043079L)).s6) , &p_869->g_29)))), 0x1F9AL)) , &p_869->g_29)) != &p_869->g_124) , (void*)0);
    (*l_126) = (void*)0;
    for (p_869->g_124 = 0; (p_869->g_124 >= 25); p_869->g_124 = safe_add_func_int8_t_s_s(p_869->g_124, 2))
    { /* block id: 23 */
        uint64_t l_138[5] = {18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL};
        int32_t *l_144 = (void*)0;
        int32_t *l_145 = (void*)0;
        int32_t *l_146 = (void*)0;
        int32_t *l_147 = (void*)0;
        int32_t *l_148[7];
        int8_t *l_155 = &p_869->g_130;
        int i;
        for (i = 0; i < 7; i++)
            l_148[i] = (void*)0;
        l_110.x ^= (p_869->g_130 | (safe_rshift_func_uint16_t_u_s((0x6EF2C45E82407D1DL & (p_869->g_80.x == ((5UL != (((VECTOR(int16_t, 2))(0x4A57L, 0x7148L)).hi >= ((void*)0 != l_133))) > (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 2))(p_869->g_136.xy)).lo, ((VECTOR(int64_t, 16))(0L, p_869->g_120, 0x6D5B12924758F72BL, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 8))(l_137.xxxxyyxy)).odd, ((VECTOR(int64_t, 4))(l_138[4], ((safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s(l_138[4], p_869->l_comm_values[(safe_mod_func_uint32_t_u_u(p_869->tid, 72))])), 65529UL)) || l_143[0][4]), 0x7712523078B0CAD1L, 6L)), ((VECTOR(int64_t, 4))(0x60DA6F0B9C9A99D2L))))).wyxwywxw)), ((VECTOR(int64_t, 4))((-1L))), 1L)).s2))))), 9)));
        for (p_869->g_120 = 25; (p_869->g_120 == 25); ++p_869->g_120)
        { /* block id: 27 */
            int32_t l_156 = 0L;
            l_110.x &= ((safe_lshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s(((l_155 == (FAKE_DIVERGE(p_869->local_0_offset, get_local_id(0), 10) , &p_869->g_29)) || l_156), (safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint16_t_u_u((l_156 | ((safe_rshift_func_uint16_t_u_u(p_869->l_comm_values[(safe_mod_func_uint32_t_u_u(p_869->tid, 72))], ((VECTOR(uint16_t, 2))(0xAF2BL, 0UL)).even)) , (safe_div_func_int64_t_s_s(0x2CBFB4229225C9EAL, (p_869->g_136.y &= (safe_add_func_uint8_t_u_u((((FAKE_DIVERGE(p_869->local_2_offset, get_local_id(2), 10) > (safe_add_func_int16_t_s_s((((p_869->g_67 != (void*)0) & p_91) & p_869->g_51.sb), 0x3FB6L))) || (-8L)) < p_869->g_120), (*p_869->g_123)))))))), 11)))))), (*p_869->g_123))) <= p_869->g_130);
        }
    }
    (*l_126) = (*l_126);
    return p_869->g_168;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_92(int16_t * p_93, int32_t  p_94, struct S0 * p_869)
{ /* block id: 13 */
    int32_t l_106 = 0x0C9C88BEL;
    return l_106;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[88];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 88; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[88];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 88; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[72];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 72; i++)
            l_comm_values[i] = 1;
    struct S0 c_870;
    struct S0* p_869 = &c_870;
    struct S0 c_871 = {
        1L, // p_869->g_29
        0L, // p_869->g_37
        (VECTOR(uint64_t, 16))(0xC37069E5F9C6A002L, (VECTOR(uint64_t, 4))(0xC37069E5F9C6A002L, (VECTOR(uint64_t, 2))(0xC37069E5F9C6A002L, 0x0D22F7F1C74F348FL), 0x0D22F7F1C74F348FL), 0x0D22F7F1C74F348FL, 0xC37069E5F9C6A002L, 0x0D22F7F1C74F348FL, (VECTOR(uint64_t, 2))(0xC37069E5F9C6A002L, 0x0D22F7F1C74F348FL), (VECTOR(uint64_t, 2))(0xC37069E5F9C6A002L, 0x0D22F7F1C74F348FL), 0xC37069E5F9C6A002L, 0x0D22F7F1C74F348FL, 0xC37069E5F9C6A002L, 0x0D22F7F1C74F348FL), // p_869->g_51
        (VECTOR(int64_t, 16))(0x21D2A6A8E49ED226L, (VECTOR(int64_t, 4))(0x21D2A6A8E49ED226L, (VECTOR(int64_t, 2))(0x21D2A6A8E49ED226L, 1L), 1L), 1L, 0x21D2A6A8E49ED226L, 1L, (VECTOR(int64_t, 2))(0x21D2A6A8E49ED226L, 1L), (VECTOR(int64_t, 2))(0x21D2A6A8E49ED226L, 1L), 0x21D2A6A8E49ED226L, 1L, 0x21D2A6A8E49ED226L, 1L), // p_869->g_52
        0x1F28L, // p_869->g_68
        &p_869->g_68, // p_869->g_67
        (VECTOR(int16_t, 2))(0L, 0x54ADL), // p_869->g_80
        0xC3L, // p_869->g_120
        0x04L, // p_869->g_124
        &p_869->g_124, // p_869->g_123
        0x00L, // p_869->g_130
        (VECTOR(int64_t, 2))((-1L), (-1L)), // p_869->g_136
        (void*)0, // p_869->g_168
        0x4323CAD4L, // p_869->g_171
        (VECTOR(uint8_t, 16))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 4UL), 4UL), 4UL, 250UL, 4UL, (VECTOR(uint8_t, 2))(250UL, 4UL), (VECTOR(uint8_t, 2))(250UL, 4UL), 250UL, 4UL, 250UL, 4UL), // p_869->g_183
        65529UL, // p_869->g_198
        {0xF5DF4781F1820D9AL,0xF5DF4781F1820D9AL,0xF5DF4781F1820D9AL,0xF5DF4781F1820D9AL,0xF5DF4781F1820D9AL,0xF5DF4781F1820D9AL,0xF5DF4781F1820D9AL}, // p_869->g_203
        (VECTOR(int16_t, 2))(0x0175L, 0x38F0L), // p_869->g_206
        (VECTOR(int16_t, 8))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x6CFFL), 0x6CFFL), 0x6CFFL, (-10L), 0x6CFFL), // p_869->g_207
        (-4L), // p_869->g_218
        4UL, // p_869->g_226
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), // p_869->g_231
        (-1L), // p_869->g_246
        {{&p_869->g_123,&p_869->g_123,&p_869->g_123,&p_869->g_123,&p_869->g_123},{&p_869->g_123,&p_869->g_123,&p_869->g_123,&p_869->g_123,&p_869->g_123},{&p_869->g_123,&p_869->g_123,&p_869->g_123,&p_869->g_123,&p_869->g_123},{&p_869->g_123,&p_869->g_123,&p_869->g_123,&p_869->g_123,&p_869->g_123},{&p_869->g_123,&p_869->g_123,&p_869->g_123,&p_869->g_123,&p_869->g_123},{&p_869->g_123,&p_869->g_123,&p_869->g_123,&p_869->g_123,&p_869->g_123}}, // p_869->g_274
        &p_869->g_274[4][2], // p_869->g_273
        (VECTOR(int8_t, 2))(0x3CL, 0x1EL), // p_869->g_321
        {&p_869->g_171,&p_869->g_171,&p_869->g_171,&p_869->g_171,&p_869->g_171,&p_869->g_171,&p_869->g_171,&p_869->g_171}, // p_869->g_326
        (void*)0, // p_869->g_331
        &p_869->g_331, // p_869->g_330
        1L, // p_869->g_362
        (void*)0, // p_869->g_366
        &p_869->g_366, // p_869->g_365
        &p_869->g_365, // p_869->g_367
        (VECTOR(int32_t, 8))(0x1857A57CL, (VECTOR(int32_t, 4))(0x1857A57CL, (VECTOR(int32_t, 2))(0x1857A57CL, 0L), 0L), 0L, 0x1857A57CL, 0L), // p_869->g_370
        (VECTOR(int32_t, 2))(0x2DB5AF54L, (-10L)), // p_869->g_371
        0xBF6AE2B5L, // p_869->g_388
        (VECTOR(uint32_t, 8))(0xB66C0BA8L, (VECTOR(uint32_t, 4))(0xB66C0BA8L, (VECTOR(uint32_t, 2))(0xB66C0BA8L, 0xB3160A0AL), 0xB3160A0AL), 0xB3160A0AL, 0xB66C0BA8L, 0xB3160A0AL), // p_869->g_392
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x7853L), 0x7853L), 0x7853L, 0UL, 0x7853L, (VECTOR(uint16_t, 2))(0UL, 0x7853L), (VECTOR(uint16_t, 2))(0UL, 0x7853L), 0UL, 0x7853L, 0UL, 0x7853L), // p_869->g_439
        &p_869->g_171, // p_869->g_462
        0x436A7561L, // p_869->g_477
        (VECTOR(uint64_t, 8))(0x082AFD527552E124L, (VECTOR(uint64_t, 4))(0x082AFD527552E124L, (VECTOR(uint64_t, 2))(0x082AFD527552E124L, 0UL), 0UL), 0UL, 0x082AFD527552E124L, 0UL), // p_869->g_486
        &p_869->g_123, // p_869->g_488
        &p_869->g_362, // p_869->g_495
        &p_869->g_495, // p_869->g_494
        {{0x46L,0x46L,255UL,0x81L,3UL},{0x46L,0x46L,255UL,0x81L,3UL},{0x46L,0x46L,255UL,0x81L,3UL},{0x46L,0x46L,255UL,0x81L,3UL},{0x46L,0x46L,255UL,0x81L,3UL},{0x46L,0x46L,255UL,0x81L,3UL},{0x46L,0x46L,255UL,0x81L,3UL},{0x46L,0x46L,255UL,0x81L,3UL}}, // p_869->g_521
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x00L), 0x00L), 0x00L, 1UL, 0x00L, (VECTOR(uint8_t, 2))(1UL, 0x00L), (VECTOR(uint8_t, 2))(1UL, 0x00L), 1UL, 0x00L, 1UL, 0x00L), // p_869->g_547
        (VECTOR(int8_t, 2))(0x45L, 0x40L), // p_869->g_622
        0xD9E76233L, // p_869->g_663
        1UL, // p_869->g_691
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x366726F8L), 0x366726F8L), 0x366726F8L, 1L, 0x366726F8L, (VECTOR(int32_t, 2))(1L, 0x366726F8L), (VECTOR(int32_t, 2))(1L, 0x366726F8L), 1L, 0x366726F8L, 1L, 0x366726F8L), // p_869->g_736
        {&p_869->g_331}, // p_869->g_761
        &p_869->g_331, // p_869->g_762
        (VECTOR(int64_t, 8))(0x26B32AF807F48CACL, (VECTOR(int64_t, 4))(0x26B32AF807F48CACL, (VECTOR(int64_t, 2))(0x26B32AF807F48CACL, 9L), 9L), 9L, 0x26B32AF807F48CACL, 9L), // p_869->g_781
        (VECTOR(int32_t, 4))(0x773CB618L, (VECTOR(int32_t, 2))(0x773CB618L, 0L), 0L), // p_869->g_786
        (VECTOR(uint8_t, 8))(0x75L, (VECTOR(uint8_t, 4))(0x75L, (VECTOR(uint8_t, 2))(0x75L, 0xC6L), 0xC6L), 0xC6L, 0x75L, 0xC6L), // p_869->g_798
        (void*)0, // p_869->g_820
        (void*)0, // p_869->g_821
        4294967295UL, // p_869->g_825
        &p_869->g_203[3], // p_869->g_831
        &p_869->g_831, // p_869->g_830
        {&p_869->g_831}, // p_869->g_833
        (VECTOR(int16_t, 8))(0x1567L, (VECTOR(int16_t, 4))(0x1567L, (VECTOR(int16_t, 2))(0x1567L, 0x34D5L), 0x34D5L), 0x34D5L, 0x1567L, 0x34D5L), // p_869->g_837
        (void*)0, // p_869->g_845
        (void*)0, // p_869->g_846
        &p_869->g_331, // p_869->g_854
        6L, // p_869->g_867
        0x5F99L, // p_869->g_868
        0, // p_869->v_collective
        sequence_input[get_global_id(0)], // p_869->global_0_offset
        sequence_input[get_global_id(1)], // p_869->global_1_offset
        sequence_input[get_global_id(2)], // p_869->global_2_offset
        sequence_input[get_local_id(0)], // p_869->local_0_offset
        sequence_input[get_local_id(1)], // p_869->local_1_offset
        sequence_input[get_local_id(2)], // p_869->local_2_offset
        sequence_input[get_group_id(0)], // p_869->group_0_offset
        sequence_input[get_group_id(1)], // p_869->group_1_offset
        sequence_input[get_group_id(2)], // p_869->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 72)), permutations[0][get_linear_local_id()])), // p_869->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_870 = c_871;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_869);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_869->g_29, "p_869->g_29", print_hash_value);
    transparent_crc(p_869->g_37, "p_869->g_37", print_hash_value);
    transparent_crc(p_869->g_51.s0, "p_869->g_51.s0", print_hash_value);
    transparent_crc(p_869->g_51.s1, "p_869->g_51.s1", print_hash_value);
    transparent_crc(p_869->g_51.s2, "p_869->g_51.s2", print_hash_value);
    transparent_crc(p_869->g_51.s3, "p_869->g_51.s3", print_hash_value);
    transparent_crc(p_869->g_51.s4, "p_869->g_51.s4", print_hash_value);
    transparent_crc(p_869->g_51.s5, "p_869->g_51.s5", print_hash_value);
    transparent_crc(p_869->g_51.s6, "p_869->g_51.s6", print_hash_value);
    transparent_crc(p_869->g_51.s7, "p_869->g_51.s7", print_hash_value);
    transparent_crc(p_869->g_51.s8, "p_869->g_51.s8", print_hash_value);
    transparent_crc(p_869->g_51.s9, "p_869->g_51.s9", print_hash_value);
    transparent_crc(p_869->g_51.sa, "p_869->g_51.sa", print_hash_value);
    transparent_crc(p_869->g_51.sb, "p_869->g_51.sb", print_hash_value);
    transparent_crc(p_869->g_51.sc, "p_869->g_51.sc", print_hash_value);
    transparent_crc(p_869->g_51.sd, "p_869->g_51.sd", print_hash_value);
    transparent_crc(p_869->g_51.se, "p_869->g_51.se", print_hash_value);
    transparent_crc(p_869->g_51.sf, "p_869->g_51.sf", print_hash_value);
    transparent_crc(p_869->g_52.s0, "p_869->g_52.s0", print_hash_value);
    transparent_crc(p_869->g_52.s1, "p_869->g_52.s1", print_hash_value);
    transparent_crc(p_869->g_52.s2, "p_869->g_52.s2", print_hash_value);
    transparent_crc(p_869->g_52.s3, "p_869->g_52.s3", print_hash_value);
    transparent_crc(p_869->g_52.s4, "p_869->g_52.s4", print_hash_value);
    transparent_crc(p_869->g_52.s5, "p_869->g_52.s5", print_hash_value);
    transparent_crc(p_869->g_52.s6, "p_869->g_52.s6", print_hash_value);
    transparent_crc(p_869->g_52.s7, "p_869->g_52.s7", print_hash_value);
    transparent_crc(p_869->g_52.s8, "p_869->g_52.s8", print_hash_value);
    transparent_crc(p_869->g_52.s9, "p_869->g_52.s9", print_hash_value);
    transparent_crc(p_869->g_52.sa, "p_869->g_52.sa", print_hash_value);
    transparent_crc(p_869->g_52.sb, "p_869->g_52.sb", print_hash_value);
    transparent_crc(p_869->g_52.sc, "p_869->g_52.sc", print_hash_value);
    transparent_crc(p_869->g_52.sd, "p_869->g_52.sd", print_hash_value);
    transparent_crc(p_869->g_52.se, "p_869->g_52.se", print_hash_value);
    transparent_crc(p_869->g_52.sf, "p_869->g_52.sf", print_hash_value);
    transparent_crc(p_869->g_68, "p_869->g_68", print_hash_value);
    transparent_crc(p_869->g_80.x, "p_869->g_80.x", print_hash_value);
    transparent_crc(p_869->g_80.y, "p_869->g_80.y", print_hash_value);
    transparent_crc(p_869->g_120, "p_869->g_120", print_hash_value);
    transparent_crc(p_869->g_124, "p_869->g_124", print_hash_value);
    transparent_crc(p_869->g_130, "p_869->g_130", print_hash_value);
    transparent_crc(p_869->g_136.x, "p_869->g_136.x", print_hash_value);
    transparent_crc(p_869->g_136.y, "p_869->g_136.y", print_hash_value);
    transparent_crc(p_869->g_171, "p_869->g_171", print_hash_value);
    transparent_crc(p_869->g_183.s0, "p_869->g_183.s0", print_hash_value);
    transparent_crc(p_869->g_183.s1, "p_869->g_183.s1", print_hash_value);
    transparent_crc(p_869->g_183.s2, "p_869->g_183.s2", print_hash_value);
    transparent_crc(p_869->g_183.s3, "p_869->g_183.s3", print_hash_value);
    transparent_crc(p_869->g_183.s4, "p_869->g_183.s4", print_hash_value);
    transparent_crc(p_869->g_183.s5, "p_869->g_183.s5", print_hash_value);
    transparent_crc(p_869->g_183.s6, "p_869->g_183.s6", print_hash_value);
    transparent_crc(p_869->g_183.s7, "p_869->g_183.s7", print_hash_value);
    transparent_crc(p_869->g_183.s8, "p_869->g_183.s8", print_hash_value);
    transparent_crc(p_869->g_183.s9, "p_869->g_183.s9", print_hash_value);
    transparent_crc(p_869->g_183.sa, "p_869->g_183.sa", print_hash_value);
    transparent_crc(p_869->g_183.sb, "p_869->g_183.sb", print_hash_value);
    transparent_crc(p_869->g_183.sc, "p_869->g_183.sc", print_hash_value);
    transparent_crc(p_869->g_183.sd, "p_869->g_183.sd", print_hash_value);
    transparent_crc(p_869->g_183.se, "p_869->g_183.se", print_hash_value);
    transparent_crc(p_869->g_183.sf, "p_869->g_183.sf", print_hash_value);
    transparent_crc(p_869->g_198, "p_869->g_198", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_869->g_203[i], "p_869->g_203[i]", print_hash_value);

    }
    transparent_crc(p_869->g_206.x, "p_869->g_206.x", print_hash_value);
    transparent_crc(p_869->g_206.y, "p_869->g_206.y", print_hash_value);
    transparent_crc(p_869->g_207.s0, "p_869->g_207.s0", print_hash_value);
    transparent_crc(p_869->g_207.s1, "p_869->g_207.s1", print_hash_value);
    transparent_crc(p_869->g_207.s2, "p_869->g_207.s2", print_hash_value);
    transparent_crc(p_869->g_207.s3, "p_869->g_207.s3", print_hash_value);
    transparent_crc(p_869->g_207.s4, "p_869->g_207.s4", print_hash_value);
    transparent_crc(p_869->g_207.s5, "p_869->g_207.s5", print_hash_value);
    transparent_crc(p_869->g_207.s6, "p_869->g_207.s6", print_hash_value);
    transparent_crc(p_869->g_207.s7, "p_869->g_207.s7", print_hash_value);
    transparent_crc(p_869->g_218, "p_869->g_218", print_hash_value);
    transparent_crc(p_869->g_226, "p_869->g_226", print_hash_value);
    transparent_crc(p_869->g_231.x, "p_869->g_231.x", print_hash_value);
    transparent_crc(p_869->g_231.y, "p_869->g_231.y", print_hash_value);
    transparent_crc(p_869->g_231.z, "p_869->g_231.z", print_hash_value);
    transparent_crc(p_869->g_231.w, "p_869->g_231.w", print_hash_value);
    transparent_crc(p_869->g_246, "p_869->g_246", print_hash_value);
    transparent_crc(p_869->g_321.x, "p_869->g_321.x", print_hash_value);
    transparent_crc(p_869->g_321.y, "p_869->g_321.y", print_hash_value);
    transparent_crc(p_869->g_362, "p_869->g_362", print_hash_value);
    transparent_crc(p_869->g_370.s0, "p_869->g_370.s0", print_hash_value);
    transparent_crc(p_869->g_370.s1, "p_869->g_370.s1", print_hash_value);
    transparent_crc(p_869->g_370.s2, "p_869->g_370.s2", print_hash_value);
    transparent_crc(p_869->g_370.s3, "p_869->g_370.s3", print_hash_value);
    transparent_crc(p_869->g_370.s4, "p_869->g_370.s4", print_hash_value);
    transparent_crc(p_869->g_370.s5, "p_869->g_370.s5", print_hash_value);
    transparent_crc(p_869->g_370.s6, "p_869->g_370.s6", print_hash_value);
    transparent_crc(p_869->g_370.s7, "p_869->g_370.s7", print_hash_value);
    transparent_crc(p_869->g_371.x, "p_869->g_371.x", print_hash_value);
    transparent_crc(p_869->g_371.y, "p_869->g_371.y", print_hash_value);
    transparent_crc(p_869->g_388, "p_869->g_388", print_hash_value);
    transparent_crc(p_869->g_392.s0, "p_869->g_392.s0", print_hash_value);
    transparent_crc(p_869->g_392.s1, "p_869->g_392.s1", print_hash_value);
    transparent_crc(p_869->g_392.s2, "p_869->g_392.s2", print_hash_value);
    transparent_crc(p_869->g_392.s3, "p_869->g_392.s3", print_hash_value);
    transparent_crc(p_869->g_392.s4, "p_869->g_392.s4", print_hash_value);
    transparent_crc(p_869->g_392.s5, "p_869->g_392.s5", print_hash_value);
    transparent_crc(p_869->g_392.s6, "p_869->g_392.s6", print_hash_value);
    transparent_crc(p_869->g_392.s7, "p_869->g_392.s7", print_hash_value);
    transparent_crc(p_869->g_439.s0, "p_869->g_439.s0", print_hash_value);
    transparent_crc(p_869->g_439.s1, "p_869->g_439.s1", print_hash_value);
    transparent_crc(p_869->g_439.s2, "p_869->g_439.s2", print_hash_value);
    transparent_crc(p_869->g_439.s3, "p_869->g_439.s3", print_hash_value);
    transparent_crc(p_869->g_439.s4, "p_869->g_439.s4", print_hash_value);
    transparent_crc(p_869->g_439.s5, "p_869->g_439.s5", print_hash_value);
    transparent_crc(p_869->g_439.s6, "p_869->g_439.s6", print_hash_value);
    transparent_crc(p_869->g_439.s7, "p_869->g_439.s7", print_hash_value);
    transparent_crc(p_869->g_439.s8, "p_869->g_439.s8", print_hash_value);
    transparent_crc(p_869->g_439.s9, "p_869->g_439.s9", print_hash_value);
    transparent_crc(p_869->g_439.sa, "p_869->g_439.sa", print_hash_value);
    transparent_crc(p_869->g_439.sb, "p_869->g_439.sb", print_hash_value);
    transparent_crc(p_869->g_439.sc, "p_869->g_439.sc", print_hash_value);
    transparent_crc(p_869->g_439.sd, "p_869->g_439.sd", print_hash_value);
    transparent_crc(p_869->g_439.se, "p_869->g_439.se", print_hash_value);
    transparent_crc(p_869->g_439.sf, "p_869->g_439.sf", print_hash_value);
    transparent_crc(p_869->g_477, "p_869->g_477", print_hash_value);
    transparent_crc(p_869->g_486.s0, "p_869->g_486.s0", print_hash_value);
    transparent_crc(p_869->g_486.s1, "p_869->g_486.s1", print_hash_value);
    transparent_crc(p_869->g_486.s2, "p_869->g_486.s2", print_hash_value);
    transparent_crc(p_869->g_486.s3, "p_869->g_486.s3", print_hash_value);
    transparent_crc(p_869->g_486.s4, "p_869->g_486.s4", print_hash_value);
    transparent_crc(p_869->g_486.s5, "p_869->g_486.s5", print_hash_value);
    transparent_crc(p_869->g_486.s6, "p_869->g_486.s6", print_hash_value);
    transparent_crc(p_869->g_486.s7, "p_869->g_486.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_869->g_521[i][j], "p_869->g_521[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_869->g_547.s0, "p_869->g_547.s0", print_hash_value);
    transparent_crc(p_869->g_547.s1, "p_869->g_547.s1", print_hash_value);
    transparent_crc(p_869->g_547.s2, "p_869->g_547.s2", print_hash_value);
    transparent_crc(p_869->g_547.s3, "p_869->g_547.s3", print_hash_value);
    transparent_crc(p_869->g_547.s4, "p_869->g_547.s4", print_hash_value);
    transparent_crc(p_869->g_547.s5, "p_869->g_547.s5", print_hash_value);
    transparent_crc(p_869->g_547.s6, "p_869->g_547.s6", print_hash_value);
    transparent_crc(p_869->g_547.s7, "p_869->g_547.s7", print_hash_value);
    transparent_crc(p_869->g_547.s8, "p_869->g_547.s8", print_hash_value);
    transparent_crc(p_869->g_547.s9, "p_869->g_547.s9", print_hash_value);
    transparent_crc(p_869->g_547.sa, "p_869->g_547.sa", print_hash_value);
    transparent_crc(p_869->g_547.sb, "p_869->g_547.sb", print_hash_value);
    transparent_crc(p_869->g_547.sc, "p_869->g_547.sc", print_hash_value);
    transparent_crc(p_869->g_547.sd, "p_869->g_547.sd", print_hash_value);
    transparent_crc(p_869->g_547.se, "p_869->g_547.se", print_hash_value);
    transparent_crc(p_869->g_547.sf, "p_869->g_547.sf", print_hash_value);
    transparent_crc(p_869->g_622.x, "p_869->g_622.x", print_hash_value);
    transparent_crc(p_869->g_622.y, "p_869->g_622.y", print_hash_value);
    transparent_crc(p_869->g_663, "p_869->g_663", print_hash_value);
    transparent_crc(p_869->g_691, "p_869->g_691", print_hash_value);
    transparent_crc(p_869->g_736.s0, "p_869->g_736.s0", print_hash_value);
    transparent_crc(p_869->g_736.s1, "p_869->g_736.s1", print_hash_value);
    transparent_crc(p_869->g_736.s2, "p_869->g_736.s2", print_hash_value);
    transparent_crc(p_869->g_736.s3, "p_869->g_736.s3", print_hash_value);
    transparent_crc(p_869->g_736.s4, "p_869->g_736.s4", print_hash_value);
    transparent_crc(p_869->g_736.s5, "p_869->g_736.s5", print_hash_value);
    transparent_crc(p_869->g_736.s6, "p_869->g_736.s6", print_hash_value);
    transparent_crc(p_869->g_736.s7, "p_869->g_736.s7", print_hash_value);
    transparent_crc(p_869->g_736.s8, "p_869->g_736.s8", print_hash_value);
    transparent_crc(p_869->g_736.s9, "p_869->g_736.s9", print_hash_value);
    transparent_crc(p_869->g_736.sa, "p_869->g_736.sa", print_hash_value);
    transparent_crc(p_869->g_736.sb, "p_869->g_736.sb", print_hash_value);
    transparent_crc(p_869->g_736.sc, "p_869->g_736.sc", print_hash_value);
    transparent_crc(p_869->g_736.sd, "p_869->g_736.sd", print_hash_value);
    transparent_crc(p_869->g_736.se, "p_869->g_736.se", print_hash_value);
    transparent_crc(p_869->g_736.sf, "p_869->g_736.sf", print_hash_value);
    transparent_crc(p_869->g_781.s0, "p_869->g_781.s0", print_hash_value);
    transparent_crc(p_869->g_781.s1, "p_869->g_781.s1", print_hash_value);
    transparent_crc(p_869->g_781.s2, "p_869->g_781.s2", print_hash_value);
    transparent_crc(p_869->g_781.s3, "p_869->g_781.s3", print_hash_value);
    transparent_crc(p_869->g_781.s4, "p_869->g_781.s4", print_hash_value);
    transparent_crc(p_869->g_781.s5, "p_869->g_781.s5", print_hash_value);
    transparent_crc(p_869->g_781.s6, "p_869->g_781.s6", print_hash_value);
    transparent_crc(p_869->g_781.s7, "p_869->g_781.s7", print_hash_value);
    transparent_crc(p_869->g_786.x, "p_869->g_786.x", print_hash_value);
    transparent_crc(p_869->g_786.y, "p_869->g_786.y", print_hash_value);
    transparent_crc(p_869->g_786.z, "p_869->g_786.z", print_hash_value);
    transparent_crc(p_869->g_786.w, "p_869->g_786.w", print_hash_value);
    transparent_crc(p_869->g_798.s0, "p_869->g_798.s0", print_hash_value);
    transparent_crc(p_869->g_798.s1, "p_869->g_798.s1", print_hash_value);
    transparent_crc(p_869->g_798.s2, "p_869->g_798.s2", print_hash_value);
    transparent_crc(p_869->g_798.s3, "p_869->g_798.s3", print_hash_value);
    transparent_crc(p_869->g_798.s4, "p_869->g_798.s4", print_hash_value);
    transparent_crc(p_869->g_798.s5, "p_869->g_798.s5", print_hash_value);
    transparent_crc(p_869->g_798.s6, "p_869->g_798.s6", print_hash_value);
    transparent_crc(p_869->g_798.s7, "p_869->g_798.s7", print_hash_value);
    transparent_crc(p_869->g_825, "p_869->g_825", print_hash_value);
    transparent_crc(p_869->g_837.s0, "p_869->g_837.s0", print_hash_value);
    transparent_crc(p_869->g_837.s1, "p_869->g_837.s1", print_hash_value);
    transparent_crc(p_869->g_837.s2, "p_869->g_837.s2", print_hash_value);
    transparent_crc(p_869->g_837.s3, "p_869->g_837.s3", print_hash_value);
    transparent_crc(p_869->g_837.s4, "p_869->g_837.s4", print_hash_value);
    transparent_crc(p_869->g_837.s5, "p_869->g_837.s5", print_hash_value);
    transparent_crc(p_869->g_837.s6, "p_869->g_837.s6", print_hash_value);
    transparent_crc(p_869->g_837.s7, "p_869->g_837.s7", print_hash_value);
    transparent_crc(p_869->g_867, "p_869->g_867", print_hash_value);
    transparent_crc(p_869->g_868, "p_869->g_868", print_hash_value);
    transparent_crc(p_869->v_collective, "p_869->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 88; i++)
            transparent_crc(p_869->g_special_values[i + 88 * get_linear_group_id()], "p_869->g_special_values[i + 88 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 88; i++)
            transparent_crc(p_869->l_special_values[i], "p_869->l_special_values[i]", print_hash_value);
    transparent_crc(p_869->l_comm_values[get_linear_local_id()], "p_869->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_869->g_comm_values[get_linear_group_id() * 72 + get_linear_local_id()], "p_869->g_comm_values[get_linear_group_id() * 72 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
