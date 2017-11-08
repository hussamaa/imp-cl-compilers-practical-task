// --atomics 50 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 7,72,11 -l 1,3,1
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

__constant uint32_t permutations[10][3] = {
{1,0,2}, // permutation 0
{1,0,2}, // permutation 1
{1,0,2}, // permutation 2
{2,0,1}, // permutation 3
{2,0,1}, // permutation 4
{2,0,1}, // permutation 5
{1,0,2}, // permutation 6
{1,0,2}, // permutation 7
{2,0,1}, // permutation 8
{1,2,0} // permutation 9
};

// Seed: 2663736189

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S2 {
    volatile int16_t g_5;
    volatile int32_t g_6[2];
    volatile uint16_t g_9;
    VECTOR(uint16_t, 2) g_14;
    int32_t g_33;
    int32_t *g_32;
    int32_t **g_31;
    uint16_t g_79;
    int32_t g_96;
    int32_t g_98;
    int32_t ***g_124;
    uint32_t g_129;
    int16_t g_131;
    VECTOR(int16_t, 4) g_132;
    int64_t g_134;
    int16_t g_136;
    int16_t g_146[8][3];
    uint64_t g_147;
    uint16_t g_150[8];
    uint16_t g_157[10];
    int32_t g_179;
    int32_t **g_184;
    int32_t **g_185;
    volatile int16_t g_192;
    volatile int64_t g_193[8][10];
    volatile uint64_t g_194[4];
    int32_t g_198;
    int32_t *g_197;
    uint64_t g_200;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint64_t  func_1(struct S2 * p_202);
int16_t  func_15(int32_t ** p_16, uint8_t  p_17, int32_t * p_18, int64_t  p_19, struct S2 * p_202);
int32_t ** func_20(int8_t  p_21, int32_t ** p_22, int8_t  p_23, int32_t ** p_24, uint64_t  p_25, struct S2 * p_202);
int32_t ** func_26(uint32_t  p_27, uint32_t  p_28, struct S2 * p_202);
int32_t  func_40(int32_t * p_41, uint8_t  p_42, int32_t *** p_43, struct S2 * p_202);
int32_t * func_44(int64_t  p_45, uint32_t  p_46, uint32_t  p_47, struct S2 * p_202);
int64_t  func_48(int16_t  p_49, int32_t *** p_50, uint16_t  p_51, uint32_t  p_52, struct S2 * p_202);
uint16_t  func_55(int32_t * p_56, int8_t  p_57, uint8_t  p_58, int32_t *** p_59, struct S2 * p_202);
int32_t * func_60(int32_t * p_61, struct S2 * p_202);
uint8_t  func_66(uint64_t  p_67, int32_t * p_68, uint32_t  p_69, int8_t  p_70, int16_t  p_71, struct S2 * p_202);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_202->g_9 p_202->g_comm_values p_202->g_14 p_202->g_6 p_202->l_comm_values p_202->g_31 p_202->g_33 p_202->g_79 p_202->g_132 p_202->g_136 p_202->g_147 p_202->g_150 p_202->g_98 p_202->g_179 p_202->g_96 p_202->g_185 p_202->g_194 p_202->g_146 p_202->g_197 p_202->g_32
 * writes: p_202->g_9 p_202->g_31 p_202->g_32 p_202->g_33 p_202->g_79 p_202->g_96 p_202->g_124 p_202->g_129 p_202->g_131 p_202->g_134 p_202->g_136 p_202->g_147 p_202->g_150 p_202->g_157 p_202->g_98 p_202->g_179 p_202->g_184 p_202->g_194 p_202->g_200 p_202->g_185
 */
uint64_t  func_1(struct S2 * p_202)
{ /* block id: 4 */
    int16_t l_2 = 0x7E30L;
    int32_t l_3 = 0L;
    int32_t *l_4 = &l_3;
    int32_t *l_7 = &l_3;
    int32_t *l_8[5] = {&l_3,&l_3,&l_3,&l_3,&l_3};
    int32_t **l_30[2];
    int32_t ***l_29[5];
    uint8_t l_101 = 250UL;
    uint32_t l_107 = 0xE98B5088L;
    uint64_t *l_156 = &p_202->g_147;
    uint8_t *l_158 = &l_101;
    uint64_t *l_199 = &p_202->g_200;
    uint64_t l_201 = 6UL;
    int i;
    for (i = 0; i < 2; i++)
        l_30[i] = &l_8[2];
    for (i = 0; i < 5; i++)
        l_29[i] = &l_30[1];
    l_3 = l_2;
    p_202->g_9++;
    p_202->g_185 = ((safe_mod_func_int8_t_s_s((((*l_199) = (p_202->g_comm_values[p_202->tid] | ((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_202->g_14.yx)), 65532UL, 0xB8A2L)).wwzwyxxx)).even)).even)).xyxyyxxyxyxxyyyy)).sbe58)).x | func_15(func_20(p_202->g_6[1], (p_202->g_184 = func_26((((&l_4 != (p_202->g_31 = &l_7)) , (p_202->l_comm_values[(safe_mod_func_uint32_t_u_u(p_202->tid, 3))] && ((*l_158) = ((((safe_div_func_uint64_t_u_u((((p_202->g_157[9] = ((**p_202->g_31) || ((*l_4) >= (safe_lshift_func_uint16_t_u_u(((18446744073709551608UL && ((*l_156) = ((!func_40(func_44(func_48((((((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 4))((safe_lshift_func_uint16_t_u_u(func_55(func_60((p_202->g_32 = ((*p_202->g_31) = (void*)0)), p_202), p_202->g_14.y, p_202->g_14.x, &l_30[1], p_202), p_202->g_comm_values[p_202->tid])), 255UL, 0xC1L, 0UL)).zwwxzxzxzywxywyy))).s29)).odd & p_202->g_comm_values[p_202->tid]) <= 0x921B67715EE0523CL) , l_101) <= p_202->g_14.x) , p_202->g_comm_values[p_202->tid]), &p_202->g_31, (*l_4), p_202->g_14.y, p_202), l_107, p_202->l_comm_values[(safe_mod_func_uint32_t_u_u(p_202->tid, 3))], p_202), p_202->g_132.x, &p_202->g_31, p_202)) != p_202->g_132.x))) ^ GROUP_DIVERGE(2, 1)), 2))))) & 254UL) > 0x7DD12019L), (-1L))) == (*l_4)) ^ p_202->g_14.y) > 0L)))) > (-1L)), p_202->g_98, p_202)), p_202->l_comm_values[(safe_mod_func_uint32_t_u_u(p_202->tid, 3))], p_202->g_185, p_202->g_14.y, p_202), p_202->g_146[1][2], p_202->g_197, (*l_4), p_202)) , 9UL))) , (-6L)), 0x31L)) , (void*)0);
    return l_201;
}


/* ------------------------------------------ */
/* 
 * reads : p_202->g_32 p_202->g_31
 * writes:
 */
int16_t  func_15(int32_t ** p_16, uint8_t  p_17, int32_t * p_18, int64_t  p_19, struct S2 * p_202)
{ /* block id: 72 */
    (*p_202->g_31) = (*p_16);
    return p_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_202->g_194 p_202->g_98
 * writes: p_202->g_194 p_202->g_98
 */
int32_t ** func_20(int8_t  p_21, int32_t ** p_22, int8_t  p_23, int32_t ** p_24, uint64_t  p_25, struct S2 * p_202)
{ /* block id: 67 */
    uint32_t l_186 = 0UL;
    int32_t *l_189 = &p_202->g_98;
    int32_t *l_190[8][6][5] = {{{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96}},{{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96}},{{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96}},{{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96}},{{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96}},{{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96}},{{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96}},{{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96},{(void*)0,&p_202->g_96,&p_202->g_98,&p_202->g_96,&p_202->g_96}}};
    int16_t l_191 = 0x01FCL;
    int i, j, k;
    l_186++;
    --p_202->g_194[0];
    (*l_189) &= 0x3ABE0897L;
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_202->g_14 p_202->g_98 p_202->l_comm_values p_202->g_132 p_202->g_179 p_202->g_96 p_202->g_31 p_202->g_150
 * writes: p_202->g_98 p_202->g_179 p_202->g_32 p_202->g_96
 */
int32_t ** func_26(uint32_t  p_27, uint32_t  p_28, struct S2 * p_202)
{ /* block id: 58 */
    int32_t *l_163 = &p_202->g_98;
    int32_t l_176 = 0L;
    int8_t l_177 = 0L;
    int32_t *l_178 = &p_202->g_179;
    int32_t **l_180 = &p_202->g_32;
    int32_t *l_181 = &l_176;
    int32_t *l_182 = &p_202->g_96;
    int32_t **l_183 = &l_181;
    (*l_182) = ((VECTOR(int32_t, 8))(((*l_181) = (safe_mul_func_uint16_t_u_u((((*l_163) ^= (0L ^ (safe_rshift_func_int8_t_s_u((~p_202->g_14.x), 4)))) ^ (safe_mul_func_int16_t_s_s(((((*l_180) = ((*p_202->g_31) = ((safe_add_func_int8_t_s_s(0L, (safe_mod_func_int16_t_s_s(p_202->l_comm_values[(safe_mod_func_uint32_t_u_u(p_202->tid, 3))], ((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(0x5602L, (((*l_178) |= (p_28 & ((((safe_mul_func_int8_t_s_s((p_28 <= p_28), ((l_163 == l_163) | l_176))) && p_27) & l_177) >= p_202->g_132.w))) , 0x46CFL))), 7)) , p_202->g_96))))) , (*p_202->g_31)))) != &p_202->g_33) && p_27), p_27))), 0x59D8L))), p_28, p_202->g_150[0], ((VECTOR(int32_t, 4))(8L)), 0x3AABBA4AL)).s2;
    return &p_202->g_32;
}


/* ------------------------------------------ */
/* 
 * reads : p_202->g_147 p_202->g_150 p_202->g_33
 * writes: p_202->g_147 p_202->g_150
 */
int32_t  func_40(int32_t * p_41, uint8_t  p_42, int32_t *** p_43, struct S2 * p_202)
{ /* block id: 50 */
    int32_t l_138 = 0x1F80F1B6L;
    int32_t *l_139 = &p_202->g_98;
    int32_t *l_140 = &p_202->g_33;
    int32_t *l_141 = &p_202->g_98;
    int32_t *l_142 = &p_202->g_98;
    int32_t *l_143 = &p_202->g_98;
    int32_t *l_144 = &p_202->g_33;
    int32_t *l_145[2][2][5] = {{{(void*)0,&p_202->g_33,(void*)0,&p_202->g_33,(void*)0},{(void*)0,&p_202->g_33,(void*)0,&p_202->g_33,(void*)0}},{{(void*)0,&p_202->g_33,(void*)0,&p_202->g_33,(void*)0},{(void*)0,&p_202->g_33,(void*)0,&p_202->g_33,(void*)0}}};
    uint16_t l_153 = 0UL;
    int i, j, k;
    p_202->g_147--;
    p_202->g_150[6]++;
    l_153++;
    return (*l_144);
}


/* ------------------------------------------ */
/* 
 * reads : p_202->g_comm_values p_202->g_14 p_202->g_132 p_202->g_136 p_202->g_33 p_202->g_31
 * writes: p_202->g_124 p_202->g_129 p_202->g_131 p_202->g_134 p_202->g_136 p_202->g_33
 */
int32_t * func_44(int64_t  p_45, uint32_t  p_46, uint32_t  p_47, struct S2 * p_202)
{ /* block id: 41 */
    VECTOR(uint8_t, 16) l_120 = (VECTOR(uint8_t, 16))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0xB7L), 0xB7L), 0xB7L, 5UL, 0xB7L, (VECTOR(uint8_t, 2))(5UL, 0xB7L), (VECTOR(uint8_t, 2))(5UL, 0xB7L), 5UL, 0xB7L, 5UL, 0xB7L);
    int32_t ***l_123 = (void*)0;
    VECTOR(int8_t, 4) l_125 = (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, 3L), 3L);
    int8_t *l_126 = (void*)0;
    int8_t *l_127 = (void*)0;
    int8_t *l_128[7][5][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int16_t *l_130 = &p_202->g_131;
    int32_t l_133 = 0x2CBD10C2L;
    int16_t *l_135 = &p_202->g_136;
    int32_t *l_137 = &p_202->g_33;
    int i, j, k;
    (*l_137) ^= (safe_add_func_int64_t_s_s(p_46, (((((safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(((*l_135) &= (((p_202->g_134 = (l_133 = (safe_mul_func_int16_t_s_s(((*l_130) = ((l_120.s5 <= p_202->g_comm_values[p_202->tid]) < (p_202->g_14.x & (p_202->g_129 = (safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(65535UL, 0x0D5BL)), ((VECTOR(uint16_t, 2))(0x2B1DL, 65534UL)), 0xD4EBL, (((p_202->g_124 = l_123) == l_123) > ((VECTOR(int8_t, 8))(l_125.xxxwzxyx)).s4), 1UL, 0x67A0L)).s0, 8)))))), (((void*)0 != l_128[0][2][6]) , ((VECTOR(int16_t, 4))(0x5301L, ((VECTOR(int16_t, 2))(p_202->g_132.ww)), 0x3A0DL)).x))))) >= p_202->g_14.y) | p_45)), p_47, ((VECTOR(int16_t, 2))((-1L))), ((VECTOR(int16_t, 2))(0x48A4L)), 0x2FA9L, 0x6089L)).s0506145134626274, ((VECTOR(int16_t, 16))((-1L)))))).s4 , 6L), 0x07L)), 1UL)), p_202->g_14.x)), 0)) , p_45) || p_202->g_comm_values[p_202->tid]) | p_45) || p_202->g_136)));
    return (*p_202->g_31);
}


/* ------------------------------------------ */
/* 
 * reads : p_202->g_14 p_202->g_31
 * writes:
 */
int64_t  func_48(int16_t  p_49, int32_t *** p_50, uint16_t  p_51, uint32_t  p_52, struct S2 * p_202)
{ /* block id: 35 */
    int32_t ***l_103 = &p_202->g_31;
    int32_t ****l_102 = &l_103;
    int32_t ***l_105 = (void*)0;
    int32_t ****l_104 = &l_105;
    int32_t l_106 = (-5L);
    l_106 = (((*l_102) = &p_202->g_31) != (p_202->g_14.x , ((*l_104) = p_50)));
    (**p_50) = (*p_202->g_31);
    return p_51;
}


/* ------------------------------------------ */
/* 
 * reads : p_202->g_14 p_202->g_79 p_202->g_31 p_202->g_comm_values p_202->g_33
 * writes: p_202->g_33 p_202->g_79 p_202->g_96
 */
uint16_t  func_55(int32_t * p_56, int8_t  p_57, uint8_t  p_58, int32_t *** p_59, struct S2 * p_202)
{ /* block id: 32 */
    (**p_59) = func_60(func_60((**p_59), p_202), p_202);
    return p_202->g_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_202->g_33 p_202->g_14 p_202->g_79 p_202->g_31 p_202->g_comm_values l_7
 * writes: p_202->g_33 p_202->g_79 p_202->g_96 l_7
 */
int32_t * func_60(int32_t * p_61, struct S2 * p_202)
{ /* block id: 10 */
    int32_t ***l_77 = (void*)0;
    int32_t l_87 = 1L;
    for (p_202->g_33 = 0; (p_202->g_33 < 22); p_202->g_33 = safe_add_func_int32_t_s_s(p_202->g_33, 1))
    { /* block id: 13 */
        int8_t l_76 = 0x32L;
        uint16_t *l_78 = &p_202->g_79;
        int64_t l_84 = 6L;
        int64_t l_85 = 0x1ABC45AFC85E2D20L;
        int16_t l_86 = 0x2F6AL;
        int32_t l_100[2];
        int i;
        for (i = 0; i < 2; i++)
            l_100[i] = 0x2D6DA1B1L;
        l_100[1] ^= (safe_mul_func_int16_t_s_s((((func_66((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(1L, l_76)) >= ((p_202->g_14.y && (((void*)0 != l_77) >= ((*l_78)--))) > (safe_lshift_func_int16_t_s_s(((1UL ^ ((VECTOR(uint64_t, 2))(abs(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 16))(0x7753CA6AFE108D8CL, 0x14487F17E9BB10DAL, 4UL, l_84, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 8))(l_85, 0x84C1F29C70A1111CL, l_86, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551614UL, 0UL, 18446744073709551615UL)).s0105110500335672, ((VECTOR(uint64_t, 16))(0x62727C38D1E6FA5BL))))).even)).s6, ((VECTOR(uint64_t, 8))(18446744073709551615UL)), ((VECTOR(uint64_t, 2))(0UL)), 0xE7CE9F33C7506514L)).even, ((VECTOR(uint64_t, 8))(3UL))))).s40))).lo) >= 0x032BE65AL), l_85)))), l_85)), p_61, p_202->g_14.x, l_84, l_87, p_202) >= 249UL) , 3L) , p_202->g_comm_values[p_202->tid]), p_202->g_33));
    }
    return (*p_202->g_31);
}


/* ------------------------------------------ */
/* 
 * reads : p_202->g_31 p_202->g_79
 * writes: p_202->g_79 p_202->g_96 l_7
 */
uint8_t  func_66(uint64_t  p_67, int32_t * p_68, uint32_t  p_69, int8_t  p_70, int16_t  p_71, struct S2 * p_202)
{ /* block id: 15 */
    int32_t *l_92 = &p_202->g_33;
    for (p_70 = 0; (p_70 != (-12)); p_70--)
    { /* block id: 18 */
        int16_t l_93 = 0x7D28L;
        VECTOR(int32_t, 8) l_99 = (VECTOR(int32_t, 8))(0x30988C8CL, (VECTOR(int32_t, 4))(0x30988C8CL, (VECTOR(int32_t, 2))(0x30988C8CL, 7L), 7L), 7L, 0x30988C8CL, 7L);
        int i;
        (*p_202->g_31) = p_68;
        for (p_202->g_79 = 0; (p_202->g_79 > 26); p_202->g_79++)
        { /* block id: 22 */
            int32_t *l_94 = (void*)0;
            int32_t *l_95 = &p_202->g_96;
            int32_t *l_97[5];
            int i;
            for (i = 0; i < 5; i++)
                l_97[i] = &p_202->g_98;
            (*p_202->g_31) = l_92;
            l_99.s2 |= ((l_93 > 1L) , ((*l_95) = p_67));
        }
    }
    return p_71;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_comm_values[i] = 1;
    struct S2 c_203;
    struct S2* p_202 = &c_203;
    struct S2 c_204 = {
        0x1FA1L, // p_202->g_5
        {0x639E3CF9L,0x639E3CF9L}, // p_202->g_6
        0UL, // p_202->g_9
        (VECTOR(uint16_t, 2))(0UL, 1UL), // p_202->g_14
        0x1C2A9118L, // p_202->g_33
        &p_202->g_33, // p_202->g_32
        &p_202->g_32, // p_202->g_31
        3UL, // p_202->g_79
        1L, // p_202->g_96
        0x257EF93BL, // p_202->g_98
        (void*)0, // p_202->g_124
        9UL, // p_202->g_129
        0L, // p_202->g_131
        (VECTOR(int16_t, 4))(0x7B1BL, (VECTOR(int16_t, 2))(0x7B1BL, 4L), 4L), // p_202->g_132
        0x08C9EE7A1AE2F923L, // p_202->g_134
        0x196FL, // p_202->g_136
        {{0x707DL,0x707DL,0x707DL},{0x707DL,0x707DL,0x707DL},{0x707DL,0x707DL,0x707DL},{0x707DL,0x707DL,0x707DL},{0x707DL,0x707DL,0x707DL},{0x707DL,0x707DL,0x707DL},{0x707DL,0x707DL,0x707DL},{0x707DL,0x707DL,0x707DL}}, // p_202->g_146
        0x6104541D115FE204L, // p_202->g_147
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_202->g_150
        {0xB052L,0xC336L,65535UL,0xC336L,0xB052L,0xB052L,0xC336L,65535UL,0xC336L,0xB052L}, // p_202->g_157
        0x37E8331BL, // p_202->g_179
        &p_202->g_32, // p_202->g_184
        (void*)0, // p_202->g_185
        0L, // p_202->g_192
        {{0x38241A096EA88E26L,0x07531F4ECE1DE7CCL,0x07531F4ECE1DE7CCL,0x38241A096EA88E26L,0x41DFA2340815C885L,0x1F3CBF744FCCACB0L,0x06DD0FD29ABEE815L,0x4A8746FC31715504L,1L,0x544AE0AECF41E25EL},{0x38241A096EA88E26L,0x07531F4ECE1DE7CCL,0x07531F4ECE1DE7CCL,0x38241A096EA88E26L,0x41DFA2340815C885L,0x1F3CBF744FCCACB0L,0x06DD0FD29ABEE815L,0x4A8746FC31715504L,1L,0x544AE0AECF41E25EL},{0x38241A096EA88E26L,0x07531F4ECE1DE7CCL,0x07531F4ECE1DE7CCL,0x38241A096EA88E26L,0x41DFA2340815C885L,0x1F3CBF744FCCACB0L,0x06DD0FD29ABEE815L,0x4A8746FC31715504L,1L,0x544AE0AECF41E25EL},{0x38241A096EA88E26L,0x07531F4ECE1DE7CCL,0x07531F4ECE1DE7CCL,0x38241A096EA88E26L,0x41DFA2340815C885L,0x1F3CBF744FCCACB0L,0x06DD0FD29ABEE815L,0x4A8746FC31715504L,1L,0x544AE0AECF41E25EL},{0x38241A096EA88E26L,0x07531F4ECE1DE7CCL,0x07531F4ECE1DE7CCL,0x38241A096EA88E26L,0x41DFA2340815C885L,0x1F3CBF744FCCACB0L,0x06DD0FD29ABEE815L,0x4A8746FC31715504L,1L,0x544AE0AECF41E25EL},{0x38241A096EA88E26L,0x07531F4ECE1DE7CCL,0x07531F4ECE1DE7CCL,0x38241A096EA88E26L,0x41DFA2340815C885L,0x1F3CBF744FCCACB0L,0x06DD0FD29ABEE815L,0x4A8746FC31715504L,1L,0x544AE0AECF41E25EL},{0x38241A096EA88E26L,0x07531F4ECE1DE7CCL,0x07531F4ECE1DE7CCL,0x38241A096EA88E26L,0x41DFA2340815C885L,0x1F3CBF744FCCACB0L,0x06DD0FD29ABEE815L,0x4A8746FC31715504L,1L,0x544AE0AECF41E25EL},{0x38241A096EA88E26L,0x07531F4ECE1DE7CCL,0x07531F4ECE1DE7CCL,0x38241A096EA88E26L,0x41DFA2340815C885L,0x1F3CBF744FCCACB0L,0x06DD0FD29ABEE815L,0x4A8746FC31715504L,1L,0x544AE0AECF41E25EL}}, // p_202->g_193
        {1UL,1UL,1UL,1UL}, // p_202->g_194
        6L, // p_202->g_198
        &p_202->g_198, // p_202->g_197
        0x417E11A7BD8694E4L, // p_202->g_200
        0, // p_202->v_collective
        sequence_input[get_global_id(0)], // p_202->global_0_offset
        sequence_input[get_global_id(1)], // p_202->global_1_offset
        sequence_input[get_global_id(2)], // p_202->global_2_offset
        sequence_input[get_local_id(0)], // p_202->local_0_offset
        sequence_input[get_local_id(1)], // p_202->local_1_offset
        sequence_input[get_local_id(2)], // p_202->local_2_offset
        sequence_input[get_group_id(0)], // p_202->group_0_offset
        sequence_input[get_group_id(1)], // p_202->group_1_offset
        sequence_input[get_group_id(2)], // p_202->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[0][get_linear_local_id()])), // p_202->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_203 = c_204;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_202);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_202->g_5, "p_202->g_5", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_202->g_6[i], "p_202->g_6[i]", print_hash_value);

    }
    transparent_crc(p_202->g_9, "p_202->g_9", print_hash_value);
    transparent_crc(p_202->g_14.x, "p_202->g_14.x", print_hash_value);
    transparent_crc(p_202->g_14.y, "p_202->g_14.y", print_hash_value);
    transparent_crc(p_202->g_33, "p_202->g_33", print_hash_value);
    transparent_crc(p_202->g_79, "p_202->g_79", print_hash_value);
    transparent_crc(p_202->g_96, "p_202->g_96", print_hash_value);
    transparent_crc(p_202->g_98, "p_202->g_98", print_hash_value);
    transparent_crc(p_202->g_129, "p_202->g_129", print_hash_value);
    transparent_crc(p_202->g_131, "p_202->g_131", print_hash_value);
    transparent_crc(p_202->g_132.x, "p_202->g_132.x", print_hash_value);
    transparent_crc(p_202->g_132.y, "p_202->g_132.y", print_hash_value);
    transparent_crc(p_202->g_132.z, "p_202->g_132.z", print_hash_value);
    transparent_crc(p_202->g_132.w, "p_202->g_132.w", print_hash_value);
    transparent_crc(p_202->g_134, "p_202->g_134", print_hash_value);
    transparent_crc(p_202->g_136, "p_202->g_136", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_202->g_146[i][j], "p_202->g_146[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_202->g_147, "p_202->g_147", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_202->g_150[i], "p_202->g_150[i]", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_202->g_157[i], "p_202->g_157[i]", print_hash_value);

    }
    transparent_crc(p_202->g_179, "p_202->g_179", print_hash_value);
    transparent_crc(p_202->g_192, "p_202->g_192", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_202->g_193[i][j], "p_202->g_193[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_202->g_194[i], "p_202->g_194[i]", print_hash_value);

    }
    transparent_crc(p_202->g_198, "p_202->g_198", print_hash_value);
    transparent_crc(p_202->g_200, "p_202->g_200", print_hash_value);
    transparent_crc(p_202->v_collective, "p_202->v_collective", print_hash_value);
    transparent_crc(p_202->l_comm_values[get_linear_local_id()], "p_202->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_202->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()], "p_202->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
