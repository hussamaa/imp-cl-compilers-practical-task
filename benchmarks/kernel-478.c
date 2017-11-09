// --atomics 76 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 100,54,1 -l 5,9,1
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

__constant uint32_t permutations[10][45] = {
{27,32,12,13,35,18,23,5,38,7,37,22,40,20,0,28,17,29,3,19,41,31,24,15,43,6,34,36,10,8,16,42,39,21,14,25,1,4,33,9,44,30,11,26,2}, // permutation 0
{41,6,14,15,24,43,31,9,30,5,35,4,8,28,44,37,16,10,17,22,13,19,21,33,23,29,27,40,32,0,26,12,25,36,42,20,2,3,1,18,34,11,39,38,7}, // permutation 1
{25,3,31,33,10,42,28,22,30,13,6,7,4,1,32,8,43,34,36,41,24,9,12,26,35,11,21,2,38,23,18,27,29,0,5,17,40,14,44,19,20,16,39,37,15}, // permutation 2
{9,35,41,19,1,15,7,33,44,20,6,24,28,23,17,4,43,5,3,8,27,18,26,39,38,42,40,21,36,32,0,12,10,22,30,25,37,14,29,34,13,16,2,31,11}, // permutation 3
{9,5,21,18,43,2,28,40,15,41,0,22,32,36,24,42,3,26,10,38,20,44,19,37,16,27,6,12,30,1,7,14,4,35,31,11,34,39,25,17,33,8,29,23,13}, // permutation 4
{22,43,3,41,42,4,23,37,44,21,30,31,1,17,5,0,7,9,16,12,18,28,10,35,14,29,40,26,19,24,6,13,8,34,32,36,11,27,2,33,25,15,38,39,20}, // permutation 5
{4,44,42,7,32,10,39,8,41,36,6,17,18,34,28,5,13,19,16,35,43,26,9,11,1,27,22,15,38,29,37,12,25,21,24,14,0,31,30,23,2,3,20,40,33}, // permutation 6
{36,0,32,3,16,13,39,42,30,27,6,24,5,14,15,20,28,35,7,40,43,11,18,21,9,37,10,41,4,19,17,33,25,22,2,44,23,31,1,34,26,38,29,8,12}, // permutation 7
{34,14,5,3,11,10,21,24,23,19,4,25,41,6,29,16,35,9,0,36,17,40,31,12,8,32,2,28,20,30,42,7,15,39,13,27,22,37,26,44,43,38,18,1,33}, // permutation 8
{27,17,32,18,4,5,1,0,15,24,22,25,36,12,37,28,3,7,26,43,9,16,21,39,20,6,38,19,35,34,11,14,10,42,31,8,40,29,44,41,23,13,33,30,2} // permutation 9
};

// Seed: 497212626

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   uint32_t  f1;
   int32_t  f2;
   int64_t  f3;
   int32_t  f4;
   volatile uint16_t  f5;
   uint16_t  f6;
};

struct S1 {
    int32_t g_2[8][9][3];
    uint64_t g_29;
    VECTOR(int16_t, 16) g_30;
    VECTOR(uint16_t, 4) g_33;
    int16_t * volatile g_34;
    int16_t *g_35;
    uint64_t g_37[8];
    int32_t g_44;
    int32_t * volatile g_51;
    int32_t * volatile g_52;
    VECTOR(uint64_t, 16) g_78;
    uint32_t g_87[1];
    int32_t g_114;
    struct S0 g_115;
    int16_t **g_117[2];
    int32_t g_134;
    int32_t ** volatile g_137;
    VECTOR(uint8_t, 4) g_146;
    volatile VECTOR(int64_t, 4) g_154;
    int32_t g_171;
    int32_t * volatile g_170;
    uint32_t g_176;
    volatile VECTOR(uint64_t, 2) g_189;
    VECTOR(uint64_t, 16) g_192;
    VECTOR(int8_t, 16) g_210;
    VECTOR(uint64_t, 16) g_211;
    VECTOR(int64_t, 4) g_216;
    volatile VECTOR(uint32_t, 2) g_234;
    VECTOR(uint32_t, 16) g_235;
    VECTOR(uint16_t, 8) g_236;
    volatile VECTOR(uint16_t, 4) g_237;
    int32_t *g_251;
    int32_t ** volatile g_250[4];
    uint32_t g_253;
    struct S0 g_254;
    struct S0 * volatile g_255;
    int32_t g_257;
    uint64_t *g_258;
    volatile struct S0 g_401[3][4][3];
    volatile struct S0 g_402[7][8][4];
    uint32_t g_428;
    volatile VECTOR(uint32_t, 4) g_576;
    volatile VECTOR(uint32_t, 4) g_577;
    volatile VECTOR(int32_t, 4) g_587;
    volatile VECTOR(uint16_t, 2) g_626;
    int32_t **g_634;
    int32_t *g_645;
    int32_t ** volatile g_646[10][10][1];
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
uint32_t  func_1(struct S1 * p_648);
uint32_t  func_20(int32_t  p_21, uint8_t  p_22, uint16_t  p_23, uint32_t  p_24, struct S1 * p_648);
int32_t * func_53(uint64_t * p_54, uint16_t  p_55, uint32_t  p_56, struct S1 * p_648);
int8_t  func_57(uint32_t  p_58, uint16_t  p_59, int16_t * p_60, struct S1 * p_648);
uint32_t  func_61(int16_t  p_62, uint64_t * p_63, uint64_t  p_64, uint64_t * p_65, int16_t  p_66, struct S1 * p_648);
uint8_t  func_72(int64_t  p_73, int8_t  p_74, int8_t  p_75, uint32_t  p_76, int32_t * p_77, struct S1 * p_648);
int32_t * func_98(int64_t  p_99, uint16_t * p_100, uint8_t  p_101, int16_t ** p_102, struct S1 * p_648);
int64_t  func_103(int64_t  p_104, uint8_t  p_105, struct S1 * p_648);
int32_t * func_106(uint16_t  p_107, int16_t  p_108, uint16_t * p_109, int64_t  p_110, struct S1 * p_648);
int16_t ** func_111(int16_t  p_112, struct S1 * p_648);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_648->g_2 p_648->g_comm_values p_648->g_37 p_648->g_29 p_648->g_35 p_648->g_30 p_648->g_33 p_648->g_52 p_648->g_44 p_648->g_87 p_648->g_78 p_648->l_comm_values p_648->g_114 p_648->g_115 p_648->g_170 p_648->g_134 p_648->g_176 p_648->g_251 p_648->g_253 p_648->g_254 p_648->g_257 p_648->g_258 p_648->g_216 p_648->g_210 p_648->g_236 p_648->g_401 p_648->g_146 p_648->g_402.f6 p_648->g_237 p_648->g_428 p_648->g_626 p_648->g_634 p_648->g_645
 * writes: p_648->g_2 p_648->g_37 p_648->g_29 p_648->g_44 p_648->g_33 p_648->g_114 p_648->g_117 p_648->g_134 p_648->g_171 p_648->g_176 p_648->g_251 p_648->g_253 p_648->g_254 p_648->g_257 p_648->g_236 p_648->g_35 p_648->g_402 p_648->g_428 p_648->g_146 p_648->g_255
 */
uint32_t  func_1(struct S1 * p_648)
{ /* block id: 4 */
    uint32_t l_10 = 0UL;
    VECTOR(int16_t, 8) l_15 = (VECTOR(int16_t, 8))(0x6E6EL, (VECTOR(int16_t, 4))(0x6E6EL, (VECTOR(int16_t, 2))(0x6E6EL, 0x64F6L), 0x64F6L), 0x64F6L, 0x6E6EL, 0x64F6L);
    VECTOR(int64_t, 2) l_16 = (VECTOR(int64_t, 2))(0x62E31B5465392FB3L, 0x03A56CF6D70783DBL);
    VECTOR(int32_t, 8) l_17 = (VECTOR(int32_t, 8))(0x722525A5L, (VECTOR(int32_t, 4))(0x722525A5L, (VECTOR(int32_t, 2))(0x722525A5L, (-1L)), (-1L)), (-1L), 0x722525A5L, (-1L));
    VECTOR(uint32_t, 8) l_19 = (VECTOR(uint32_t, 8))(0x564FCBDFL, (VECTOR(uint32_t, 4))(0x564FCBDFL, (VECTOR(uint32_t, 2))(0x564FCBDFL, 0x86E89BE3L), 0x86E89BE3L), 0x86E89BE3L, 0x564FCBDFL, 0x86E89BE3L);
    uint64_t *l_67[1];
    int8_t l_88 = 0x48L;
    int32_t *l_89[6][3] = {{(void*)0,&p_648->g_44,(void*)0},{(void*)0,&p_648->g_44,(void*)0},{(void*)0,&p_648->g_44,(void*)0},{(void*)0,&p_648->g_44,(void*)0},{(void*)0,&p_648->g_44,(void*)0},{(void*)0,&p_648->g_44,(void*)0}};
    int i, j;
    for (i = 0; i < 1; i++)
        l_67[i] = &p_648->g_37[5];
    for (p_648->g_2[5][2][1] = 0; (p_648->g_2[5][2][1] >= (-5)); p_648->g_2[5][2][1]--)
    { /* block id: 7 */
        int32_t l_5 = 8L;
        VECTOR(int32_t, 2) l_18 = (VECTOR(int32_t, 2))((-9L), 9L);
        int16_t *l_31 = (void*)0;
        int16_t *l_32 = (void*)0;
        uint64_t *l_36 = &p_648->g_37[2];
        uint16_t *l_47 = (void*)0;
        int32_t *l_50 = (void*)0;
        int32_t **l_647 = &l_50;
        int i;
        if (l_5)
            break;
        if (((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((-8L), ((l_10 & p_648->g_comm_values[p_648->tid]) & (safe_mod_func_uint64_t_u_u(((*l_36) &= ((VECTOR(uint64_t, 16))(abs(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 16))(0x6AC8E4C12F69A016L, (safe_add_func_int16_t_s_s((-8L), (!((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_15.s74)).xxxx)).y))), (-8L), 0x58E56A96DAD8BE77L, 1L, 0x2770AACC702B5BDDL, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(0x130268D9A65C8BB6L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_16.xy)), 0x46221EB1ED309061L, 0x426CEFC6E20B395BL)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(l_17.s5773234122553104)).hi, ((VECTOR(int32_t, 4))(l_18.xxyx)).wwywyxyy))).s57, ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(l_19.s00)).yyyyxyxy, ((VECTOR(uint32_t, 4))(func_20((safe_lshift_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (l_10 , p_648->g_comm_values[p_648->tid]))), (((safe_sub_func_uint16_t_u_u(p_648->g_29, (p_648->g_33.x ^= ((VECTOR(int16_t, 2))(p_648->g_30.s66)).hi))) && (((p_648->g_34 != p_648->g_35) || l_18.x) | l_16.x)) , GROUP_DIVERGE(1, 1)), l_15.s6, l_17.s3, p_648), ((VECTOR(uint32_t, 2))(4294967295UL)), 1UL)).xzyyzywx))).s70))).yyxxxyyyyyxxyxyx)).s46)), 0x6229A0C815F77FB9L)).hi)).zwywzxyz, ((VECTOR(int64_t, 8))(0x33967BE2D7E08CD9L))))).s17)).xyyxxxxyxyxxyxxx)).s0d70))).hi, ((VECTOR(int64_t, 2))(0x55DC534F93D1D1CEL))))), p_648->g_2[6][3][0], (-2L), 0x7F3D9679FF52682FL, ((VECTOR(int64_t, 2))(0x3E1A65742D117B57L)), 0L, 0x7E588526770660D0L, 0x70B93D6BDADCC66FL)).s1e, ((VECTOR(int64_t, 2))((-10L)))))).xyxyxxxyxyyxyxxx))).s3), p_648->g_29))))), 0x50L)) & p_648->g_comm_values[p_648->tid]))
        { /* block id: 13 */
            uint8_t l_41 = 255UL;
            for (p_648->g_29 = 0; (p_648->g_29 >= 43); p_648->g_29++)
            { /* block id: 16 */
                int16_t **l_40 = &l_31;
                int32_t l_42 = 0x2839EF24L;
                l_41 = (p_648->g_35 == ((*l_40) = (void*)0));
                if (l_42)
                    continue;
            }
            if (p_648->g_30.sd)
                break;
        }
        else
        { /* block id: 22 */
            int32_t *l_43 = &p_648->g_44;
            (*l_43) = 0x68BD6B81L;
        }
        (*p_648->g_52) |= (l_19.s4 , (safe_lshift_func_uint16_t_u_s((++p_648->g_33.x), 4)));
        (*l_647) = func_53(((func_57(func_61(p_648->g_44, l_67[0], (p_648->g_2[5][2][1] , (safe_rshift_func_uint8_t_u_s((((safe_mul_func_uint8_t_u_u(func_72(l_19.s1, p_648->g_33.x, (((*l_36) = ((VECTOR(uint64_t, 8))(p_648->g_78.s60341e9f)).s4) , (0x37457E6E873F6369L != func_20(func_20((safe_div_func_int64_t_s_s(((safe_div_func_int64_t_s_s((safe_div_func_int64_t_s_s(((p_648->g_87[0] & ((((GROUP_DIVERGE(1, 1) , l_18.y) & p_648->g_2[7][1][1]) >= p_648->g_78.sc) == p_648->g_87[0])) , p_648->l_comm_values[(safe_mod_func_uint32_t_u_u(p_648->tid, 45))]), p_648->g_2[5][2][1])), p_648->g_2[5][2][1])) > 0x58BE8FF3L), 0x7FA6F56A42CAA49FL)), p_648->g_44, l_18.x, l_15.s5, p_648), p_648->g_30.s5, l_88, p_648->g_87[0], p_648))), p_648->g_33.x, l_89[4][1], p_648), (-1L))) , 0x57L) >= 0x64L), 0))), p_648->g_258, p_648->g_216.y, p_648), p_648->g_210.s4, p_648->g_35, p_648) > p_648->g_115.f3) , l_67[0]), p_648->g_115.f1, p_648->l_comm_values[(safe_mod_func_uint32_t_u_u(p_648->tid, 45))], p_648);
    }
    return p_648->g_146.z;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_20(int32_t  p_21, uint8_t  p_22, uint16_t  p_23, uint32_t  p_24, struct S1 * p_648)
{ /* block id: 10 */
    return p_23;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_2 p_648->g_146 p_648->g_37 p_648->g_402.f6 p_648->g_236 p_648->g_87 p_648->g_237 p_648->g_134 p_648->g_253 p_648->g_115.f1 p_648->g_251 p_648->g_114 p_648->g_428 p_648->g_52 p_648->g_44 p_648->g_35 p_648->g_115.f3 p_648->g_170 p_648->g_626 p_648->g_192 p_648->g_634 p_648->g_210 p_648->g_645
 * writes: p_648->g_428 p_648->g_146 p_648->g_134 p_648->g_253 p_648->g_255 p_648->g_257 p_648->g_171 p_648->g_236 p_648->g_251
 */
int32_t * func_53(uint64_t * p_54, uint16_t  p_55, uint32_t  p_56, struct S1 * p_648)
{ /* block id: 178 */
    int32_t *l_421 = &p_648->g_2[5][2][1];
    int32_t **l_422 = &l_421;
    uint32_t *l_427 = &p_648->g_428;
    uint16_t l_433 = 0x9E34L;
    uint8_t *l_434 = (void*)0;
    uint8_t *l_435 = (void*)0;
    uint8_t *l_436 = (void*)0;
    uint8_t *l_437 = (void*)0;
    uint8_t *l_438 = (void*)0;
    uint8_t *l_439 = (void*)0;
    uint8_t *l_440 = (void*)0;
    uint8_t *l_441[2];
    int16_t *l_447[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    struct S0 *l_568 = (void*)0;
    int32_t l_599 = 0x2CE8A078L;
    int32_t l_601 = (-2L);
    int32_t l_603 = 0x6E115ED3L;
    uint64_t l_619 = 0xB4956FDF0121C872L;
    VECTOR(uint64_t, 2) l_632 = (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL);
    VECTOR(uint64_t, 2) l_633 = (VECTOR(uint64_t, 2))(0x776491B05564B3E2L, 0x314031C76CA84C07L);
    uint8_t l_637 = 0UL;
    int i;
    for (i = 0; i < 2; i++)
        l_441[i] = (void*)0;
    (*l_422) = l_421;
    if ((4L | (0x186EL || (safe_sub_func_int8_t_s_s(((((*l_427) = ((p_56 , p_56) , (safe_mod_func_uint16_t_u_u((**l_422), FAKE_DIVERGE(p_648->group_1_offset, get_group_id(1), 10))))) , ((((safe_mul_func_int8_t_s_s(0x71L, (((VECTOR(uint64_t, 2))(1UL, 0UL)).lo , (p_648->g_146.y = (safe_add_func_uint16_t_u_u(p_56, (p_55 != l_433))))))) < 1UL) ^ p_56) , 0x41B5L)) , p_648->g_146.x), 0x37L)))))
    { /* block id: 182 */
        int32_t *l_442 = &p_648->g_134;
        return l_442;
    }
    else
    { /* block id: 184 */
        uint32_t *l_443[9] = {(void*)0,&p_648->g_87[0],(void*)0,(void*)0,&p_648->g_87[0],(void*)0,(void*)0,&p_648->g_87[0],(void*)0};
        uint16_t l_444 = 65535UL;
        int8_t *l_453[5][10][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        VECTOR(int32_t, 16) l_454 = (VECTOR(int32_t, 16))(0x2045C803L, (VECTOR(int32_t, 4))(0x2045C803L, (VECTOR(int32_t, 2))(0x2045C803L, 0x52912593L), 0x52912593L), 0x52912593L, 0x2045C803L, 0x52912593L, (VECTOR(int32_t, 2))(0x2045C803L, 0x52912593L), (VECTOR(int32_t, 2))(0x2045C803L, 0x52912593L), 0x2045C803L, 0x52912593L, 0x2045C803L, 0x52912593L);
        int i, j, k;
        p_648->g_134 |= ((l_444 = 1UL) , (safe_rshift_func_uint8_t_u_u(((!(6UL || (p_648->g_37[2] , (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x0D1AL, 0x611FL)))).odd ^ (GROUP_DIVERGE(2, 1) && (((((void*)0 != l_447[2]) | (safe_lshift_func_uint16_t_u_u(0x84E7L, (safe_div_func_uint8_t_u_u((p_648->g_146.y = (safe_unary_minus_func_int8_t_s(((l_454.sf = p_648->g_402[2][0][1].f6) , ((safe_rshift_func_uint16_t_u_s(65528UL, 8)) > (safe_add_func_uint64_t_u_u((p_648->g_236.s1 & (-6L)), (*p_54)))))))), p_648->g_87[0]))))) > 0x7BL) ^ p_56)))))) , p_648->g_237.z), (*l_421))));
        (*l_422) = (void*)0;
        if ((atomic_inc(&p_648->l_atomic_input[20]) == 4))
        { /* block id: 191 */
            int32_t l_459 = 0x4D920FBAL;
            int32_t *l_470 = &l_459;
            int32_t *l_471 = &l_459;
            uint32_t l_472 = 0x48D8838CL;
            VECTOR(int32_t, 16) l_473 = (VECTOR(int32_t, 16))(0x4402FD3FL, (VECTOR(int32_t, 4))(0x4402FD3FL, (VECTOR(int32_t, 2))(0x4402FD3FL, 0x29F736F9L), 0x29F736F9L), 0x29F736F9L, 0x4402FD3FL, 0x29F736F9L, (VECTOR(int32_t, 2))(0x4402FD3FL, 0x29F736F9L), (VECTOR(int32_t, 2))(0x4402FD3FL, 0x29F736F9L), 0x4402FD3FL, 0x29F736F9L, 0x4402FD3FL, 0x29F736F9L);
            int i;
            for (l_459 = 16; (l_459 >= (-5)); l_459--)
            { /* block id: 194 */
                int64_t l_462 = 0x064D677AB8EE8282L;
                uint16_t l_463 = 65535UL;
                uint32_t l_466 = 0x6BCE681EL;
                uint8_t l_467 = 255UL;
                uint16_t l_468 = 0UL;
                uint64_t l_469 = 0x9EC5B658B8469665L;
                ++l_463;
                l_467 |= l_466;
                l_469 = l_468;
            }
            l_471 = l_470;
            if ((l_473.sf ^= l_472))
            { /* block id: 201 */
                int32_t l_474 = 1L;
                for (l_474 = 0; (l_474 != 28); l_474 = safe_add_func_int8_t_s_s(l_474, 6))
                { /* block id: 204 */
                    int32_t l_478 = 0x601A7451L;
                    int32_t *l_477 = &l_478;
                    uint16_t l_479 = 6UL;
                    l_477 = l_477;
                    --l_479;
                }
                for (l_474 = (-10); (l_474 > (-13)); l_474 = safe_sub_func_uint32_t_u_u(l_474, 6))
                { /* block id: 210 */
                    int64_t l_484 = 0x7624869AAEF2F016L;
                    int16_t l_485 = (-1L);
                    struct S0 l_486 = {0x86939EC19FB8E3F9L,4294967293UL,0L,0x251D10C8E0B7C842L,0L,0xCE48L,0xA63AL};/* VOLATILE GLOBAL l_486 */
                    struct S0 l_487 = {1UL,4294967295UL,-3L,0x534FEE1058D4E66CL,1L,0xF1E8L,1UL};/* VOLATILE GLOBAL l_487 */
                    int32_t l_488 = 1L;
                    int32_t l_489 = (-8L);
                    uint64_t l_490 = 0x9AAD62809C6EDC8DL;
                    int32_t *l_493 = &l_488;
                    int32_t *l_494[5][3] = {{&l_488,&l_488,&l_488},{&l_488,&l_488,&l_488},{&l_488,&l_488,&l_488},{&l_488,&l_488,&l_488},{&l_488,&l_488,&l_488}};
                    int32_t *l_495 = (void*)0;
                    int16_t l_496[1];
                    struct S0 l_497 = {0xAA6BA563148C6177L,0xCE399AB5L,0L,-2L,5L,0xD789L,1UL};/* VOLATILE GLOBAL l_497 */
                    uint32_t l_498 = 1UL;
                    struct S0 l_499 = {0UL,0x0223AEA4L,9L,0x5130ADAE480CD176L,6L,0UL,0x1504L};/* VOLATILE GLOBAL l_499 */
                    int32_t *l_500 = &l_488;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_496[i] = 0x46B2L;
                    (1 + 1);
                }
            }
            else
            { /* block id: 224 */
                uint64_t l_501[5];
                int8_t l_521 = 0x75L;
                uint32_t l_522 = 2UL;
                int32_t l_523 = 0x13D7889DL;
                uint32_t l_524[4] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                int i;
                for (i = 0; i < 5; i++)
                    l_501[i] = 7UL;
                if (((*l_471) |= l_501[0]))
                { /* block id: 226 */
                    VECTOR(int32_t, 16) l_502 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x73C8A679L), 0x73C8A679L), 0x73C8A679L, 1L, 0x73C8A679L, (VECTOR(int32_t, 2))(1L, 0x73C8A679L), (VECTOR(int32_t, 2))(1L, 0x73C8A679L), 1L, 0x73C8A679L, 1L, 0x73C8A679L);
                    uint8_t l_503 = 0x41L;
                    int i;
                    (*l_471) ^= 0x08B7686DL;
                    l_502.se = ((VECTOR(int32_t, 2))(l_502.s3b)).even;
                    l_502.sf = l_503;
                }
                else
                { /* block id: 230 */
                    int32_t l_504 = 1L;
                    if (l_504)
                    { /* block id: 231 */
                        int64_t l_505 = 1L;
                        uint8_t l_506 = 0x73L;
                        uint32_t l_507 = 0xEFF0C804L;
                        uint64_t l_508 = 1UL;
                        int32_t l_509 = 4L;
                        int16_t l_510 = 0x3724L;
                        int32_t l_511[8][1] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
                        int16_t l_512 = (-1L);
                        int i, j;
                        (*l_470) &= (GROUP_DIVERGE(1, 1) , ((l_505 , l_506) , l_507));
                        (*l_470) = (l_508 , (l_509 , l_510));
                        l_512 |= l_511[4][0];
                    }
                    else
                    { /* block id: 235 */
                        int8_t l_513 = 0x3BL;
                        uint32_t l_514 = 0x4C5A915FL;
                        uint32_t l_517 = 0x4BA8E217L;
                        int16_t l_518 = (-10L);
                        struct S0 l_519[9] = {{1UL,4294967292UL,0x28FAE7BCL,0L,4L,0UL,0x1984L},{1UL,4294967292UL,0x28FAE7BCL,0L,4L,0UL,0x1984L},{1UL,4294967292UL,0x28FAE7BCL,0L,4L,0UL,0x1984L},{1UL,4294967292UL,0x28FAE7BCL,0L,4L,0UL,0x1984L},{1UL,4294967292UL,0x28FAE7BCL,0L,4L,0UL,0x1984L},{1UL,4294967292UL,0x28FAE7BCL,0L,4L,0UL,0x1984L},{1UL,4294967292UL,0x28FAE7BCL,0L,4L,0UL,0x1984L},{1UL,4294967292UL,0x28FAE7BCL,0L,4L,0UL,0x1984L},{1UL,4294967292UL,0x28FAE7BCL,0L,4L,0UL,0x1984L}};
                        struct S0 l_520[10][9][2] = {{{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}}},{{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}}},{{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}}},{{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}}},{{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}}},{{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}}},{{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}}},{{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}}},{{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}}},{{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}},{{0x101F2275187487D1L,0xD42669C8L,0x6D80D64DL,-1L,0x702F8534L,0xD497L,0x5A84L},{0x0ACDED52061CB57AL,4294967295UL,4L,0x27DF3A9B52D85BC6L,0x3801DC2FL,0x521AL,0xD1DDL}}}};
                        int i, j, k;
                        l_470 = (l_471 = (void*)0);
                        l_514--;
                        l_518 &= l_517;
                        l_520[3][1][1] = l_519[3];
                    }
                }
                l_524[0] = (l_459 = (l_521 , (l_522 , l_523)));
            }
            for (l_472 = 0; (l_472 == 26); ++l_472)
            { /* block id: 248 */
                int32_t l_527 = (-1L);
                struct S0 l_564 = {5UL,4294967294UL,-10L,0x1CB37424E7ED09B3L,0x13BE45D3L,0x24A6L,0x11AAL};/* VOLATILE GLOBAL l_564 */
                struct S0 *l_563 = &l_564;
                struct S0 *l_565 = &l_564;
                for (l_527 = (-10); (l_527 != 12); ++l_527)
                { /* block id: 251 */
                    uint64_t l_530 = 18446744073709551610UL;
                    l_459 ^= (l_530 , 1L);
                    for (l_530 = 0; (l_530 < 9); l_530++)
                    { /* block id: 255 */
                        struct S0 l_533 = {0xC289FE4436E0E97CL,5UL,1L,0x58C25315789C36B8L,-3L,5UL,3UL};/* VOLATILE GLOBAL l_533 */
                        struct S0 l_534 = {0x756229C44160AF49L,8UL,0x492855C6L,0x209F5741A4ADD237L,0L,0UL,0x4518L};/* VOLATILE GLOBAL l_534 */
                        int64_t l_535 = 0x57D130DCF53981E6L;
                        int16_t l_536[4][3][5] = {{{0x74BAL,(-4L),0x6F14L,0x453BL,0x7567L},{0x74BAL,(-4L),0x6F14L,0x453BL,0x7567L},{0x74BAL,(-4L),0x6F14L,0x453BL,0x7567L}},{{0x74BAL,(-4L),0x6F14L,0x453BL,0x7567L},{0x74BAL,(-4L),0x6F14L,0x453BL,0x7567L},{0x74BAL,(-4L),0x6F14L,0x453BL,0x7567L}},{{0x74BAL,(-4L),0x6F14L,0x453BL,0x7567L},{0x74BAL,(-4L),0x6F14L,0x453BL,0x7567L},{0x74BAL,(-4L),0x6F14L,0x453BL,0x7567L}},{{0x74BAL,(-4L),0x6F14L,0x453BL,0x7567L},{0x74BAL,(-4L),0x6F14L,0x453BL,0x7567L},{0x74BAL,(-4L),0x6F14L,0x453BL,0x7567L}}};
                        uint8_t l_537 = 0xC3L;
                        int16_t l_538 = 0x0AA8L;
                        struct S0 l_539[7][5] = {{{1UL,0xBBA5DEF6L,0x41EBFCBAL,0x50DBCD00A0E4A884L,0x2E243059L,0xEAACL,0x63F1L},{18446744073709551615UL,4294967295UL,0x712FEFC6L,0x2901869470F15384L,0x12F4F8E6L,2UL,0UL},{18446744073709551615UL,4294967295UL,0x712FEFC6L,0x2901869470F15384L,0x12F4F8E6L,2UL,0UL},{1UL,0xBBA5DEF6L,0x41EBFCBAL,0x50DBCD00A0E4A884L,0x2E243059L,0xEAACL,0x63F1L},{18446744073709551615UL,0x6A7B703DL,0x7EC6C0E0L,-1L,0x00AAD04AL,65527UL,0x533BL}},{{1UL,0xBBA5DEF6L,0x41EBFCBAL,0x50DBCD00A0E4A884L,0x2E243059L,0xEAACL,0x63F1L},{18446744073709551615UL,4294967295UL,0x712FEFC6L,0x2901869470F15384L,0x12F4F8E6L,2UL,0UL},{18446744073709551615UL,4294967295UL,0x712FEFC6L,0x2901869470F15384L,0x12F4F8E6L,2UL,0UL},{1UL,0xBBA5DEF6L,0x41EBFCBAL,0x50DBCD00A0E4A884L,0x2E243059L,0xEAACL,0x63F1L},{18446744073709551615UL,0x6A7B703DL,0x7EC6C0E0L,-1L,0x00AAD04AL,65527UL,0x533BL}},{{1UL,0xBBA5DEF6L,0x41EBFCBAL,0x50DBCD00A0E4A884L,0x2E243059L,0xEAACL,0x63F1L},{18446744073709551615UL,4294967295UL,0x712FEFC6L,0x2901869470F15384L,0x12F4F8E6L,2UL,0UL},{18446744073709551615UL,4294967295UL,0x712FEFC6L,0x2901869470F15384L,0x12F4F8E6L,2UL,0UL},{1UL,0xBBA5DEF6L,0x41EBFCBAL,0x50DBCD00A0E4A884L,0x2E243059L,0xEAACL,0x63F1L},{18446744073709551615UL,0x6A7B703DL,0x7EC6C0E0L,-1L,0x00AAD04AL,65527UL,0x533BL}},{{1UL,0xBBA5DEF6L,0x41EBFCBAL,0x50DBCD00A0E4A884L,0x2E243059L,0xEAACL,0x63F1L},{18446744073709551615UL,4294967295UL,0x712FEFC6L,0x2901869470F15384L,0x12F4F8E6L,2UL,0UL},{18446744073709551615UL,4294967295UL,0x712FEFC6L,0x2901869470F15384L,0x12F4F8E6L,2UL,0UL},{1UL,0xBBA5DEF6L,0x41EBFCBAL,0x50DBCD00A0E4A884L,0x2E243059L,0xEAACL,0x63F1L},{18446744073709551615UL,0x6A7B703DL,0x7EC6C0E0L,-1L,0x00AAD04AL,65527UL,0x533BL}},{{1UL,0xBBA5DEF6L,0x41EBFCBAL,0x50DBCD00A0E4A884L,0x2E243059L,0xEAACL,0x63F1L},{18446744073709551615UL,4294967295UL,0x712FEFC6L,0x2901869470F15384L,0x12F4F8E6L,2UL,0UL},{18446744073709551615UL,4294967295UL,0x712FEFC6L,0x2901869470F15384L,0x12F4F8E6L,2UL,0UL},{1UL,0xBBA5DEF6L,0x41EBFCBAL,0x50DBCD00A0E4A884L,0x2E243059L,0xEAACL,0x63F1L},{18446744073709551615UL,0x6A7B703DL,0x7EC6C0E0L,-1L,0x00AAD04AL,65527UL,0x533BL}},{{1UL,0xBBA5DEF6L,0x41EBFCBAL,0x50DBCD00A0E4A884L,0x2E243059L,0xEAACL,0x63F1L},{18446744073709551615UL,4294967295UL,0x712FEFC6L,0x2901869470F15384L,0x12F4F8E6L,2UL,0UL},{18446744073709551615UL,4294967295UL,0x712FEFC6L,0x2901869470F15384L,0x12F4F8E6L,2UL,0UL},{1UL,0xBBA5DEF6L,0x41EBFCBAL,0x50DBCD00A0E4A884L,0x2E243059L,0xEAACL,0x63F1L},{18446744073709551615UL,0x6A7B703DL,0x7EC6C0E0L,-1L,0x00AAD04AL,65527UL,0x533BL}},{{1UL,0xBBA5DEF6L,0x41EBFCBAL,0x50DBCD00A0E4A884L,0x2E243059L,0xEAACL,0x63F1L},{18446744073709551615UL,4294967295UL,0x712FEFC6L,0x2901869470F15384L,0x12F4F8E6L,2UL,0UL},{18446744073709551615UL,4294967295UL,0x712FEFC6L,0x2901869470F15384L,0x12F4F8E6L,2UL,0UL},{1UL,0xBBA5DEF6L,0x41EBFCBAL,0x50DBCD00A0E4A884L,0x2E243059L,0xEAACL,0x63F1L},{18446744073709551615UL,0x6A7B703DL,0x7EC6C0E0L,-1L,0x00AAD04AL,65527UL,0x533BL}}};
                        struct S0 l_540 = {18446744073709551615UL,0x86A7FF5CL,-8L,0x0089E932647471D9L,-1L,0UL,1UL};/* VOLATILE GLOBAL l_540 */
                        int i, j, k;
                        l_459 = 1L;
                        l_534 = l_533;
                        l_540 = ((l_537 = (l_535 , l_536[0][1][0])) , (l_538 , l_539[5][2]));
                    }
                }
                for (l_527 = 0; (l_527 < 16); l_527 = safe_add_func_int8_t_s_s(l_527, 9))
                { /* block id: 264 */
                    int16_t l_543 = 3L;
                    int8_t l_544 = 0x03L;
                    int32_t l_561 = 0L;
                    int32_t *l_560 = &l_561;
                    int8_t l_562 = 0x24L;
                    l_543 |= 0L;
                    if (l_544)
                    { /* block id: 266 */
                        int16_t l_545 = 1L;
                        uint8_t l_546 = 9UL;
                        int32_t l_547 = 0x1D614A4DL;
                        uint8_t l_548[10][7] = {{0xC2L,0xC2L,0x8AL,0x34L,255UL,0UL,9UL},{0xC2L,0xC2L,0x8AL,0x34L,255UL,0UL,9UL},{0xC2L,0xC2L,0x8AL,0x34L,255UL,0UL,9UL},{0xC2L,0xC2L,0x8AL,0x34L,255UL,0UL,9UL},{0xC2L,0xC2L,0x8AL,0x34L,255UL,0UL,9UL},{0xC2L,0xC2L,0x8AL,0x34L,255UL,0UL,9UL},{0xC2L,0xC2L,0x8AL,0x34L,255UL,0UL,9UL},{0xC2L,0xC2L,0x8AL,0x34L,255UL,0UL,9UL},{0xC2L,0xC2L,0x8AL,0x34L,255UL,0UL,9UL},{0xC2L,0xC2L,0x8AL,0x34L,255UL,0UL,9UL}};
                        int i, j;
                        l_459 = l_545;
                        l_459 = l_546;
                        l_459 = l_547;
                        ++l_548[8][5];
                    }
                    else
                    { /* block id: 271 */
                        uint64_t l_551 = 0x9539DC67E1510568L;
                        VECTOR(int32_t, 2) l_554 = (VECTOR(int32_t, 2))(1L, 5L);
                        uint64_t l_555[7];
                        int8_t l_556 = (-1L);
                        VECTOR(int8_t, 8) l_557 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x28L), 0x28L), 0x28L, 0L, 0x28L);
                        uint32_t l_558 = 1UL;
                        int32_t l_559 = 9L;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_555[i] = 18446744073709551615UL;
                        --l_551;
                        l_555[6] ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_554.yy)))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x2016FE04L, 0x38758CD7L)), 0L, 0x3EF5D052L)), 8L)).s4740122203251151)))).sc;
                        l_558 = (l_556 , (l_554.x = l_557.s3));
                        l_559 |= (l_554.y ^= 0x4D23575BL);
                    }
                    l_470 = l_560;
                    (*l_470) ^= ((l_562 = 0x232407D6L) , ((VECTOR(int32_t, 2))(0x78B09851L, (-1L))).hi);
                }
                l_563 = (l_565 = l_563);
            }
            unsigned int result = 0;
            result += l_459;
            result += l_472;
            result += l_473.sf;
            result += l_473.se;
            result += l_473.sd;
            result += l_473.sc;
            result += l_473.sb;
            result += l_473.sa;
            result += l_473.s9;
            result += l_473.s8;
            result += l_473.s7;
            result += l_473.s6;
            result += l_473.s5;
            result += l_473.s4;
            result += l_473.s3;
            result += l_473.s2;
            result += l_473.s1;
            result += l_473.s0;
            atomic_add(&p_648->l_special_values[20], result);
        }
        else
        { /* block id: 286 */
            (1 + 1);
        }
    }
    for (p_648->g_253 = 25; (p_648->g_253 == 8); p_648->g_253 = safe_sub_func_int8_t_s_s(p_648->g_253, 3))
    { /* block id: 292 */
        struct S0 **l_569[3];
        int32_t l_592 = (-10L);
        int32_t l_594 = (-1L);
        int16_t l_596 = 0x5A88L;
        int32_t l_602 = 0x0C3C6077L;
        uint32_t l_604 = 4294967287UL;
        int32_t l_640 = 0x3C91E46EL;
        int16_t ***l_643[8] = {&p_648->g_117[0],&p_648->g_117[0],&p_648->g_117[0],&p_648->g_117[0],&p_648->g_117[0],&p_648->g_117[0],&p_648->g_117[0],&p_648->g_117[0]};
        int16_t ***l_644 = &p_648->g_117[0];
        int i;
        for (i = 0; i < 3; i++)
            l_569[i] = (void*)0;
        p_648->g_255 = l_568;
        for (p_648->g_257 = 19; (p_648->g_257 >= (-4)); p_648->g_257 = safe_sub_func_uint32_t_u_u(p_648->g_257, 9))
        { /* block id: 296 */
            uint8_t l_593 = 0x04L;
            int16_t l_595[1];
            VECTOR(int32_t, 8) l_600 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-2L)), (-2L)), (-2L), 0L, (-2L));
            int32_t *l_613 = &l_592;
            int8_t *l_614 = (void*)0;
            int8_t *l_615 = (void*)0;
            int8_t *l_616 = (void*)0;
            uint16_t *l_631 = (void*)0;
            int i, j;
            for (i = 0; i < 1; i++)
                l_595[i] = 0x7165L;
            for (p_56 = 18; (p_56 < 45); p_56 = safe_add_func_uint64_t_u_u(p_56, 9))
            { /* block id: 299 */
                uint32_t *l_578 = &p_648->g_87[0];
                int32_t l_590 = 0x42A1944EL;
                uint8_t l_591 = 0x47L;
                int32_t l_597 = 0x1A5C4940L;
                int32_t *l_598[8][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int i, j;
                l_597 ^= ((((safe_lshift_func_int8_t_s_s(p_648->g_115.f1, 4)) && ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 2))(0x4E79A7B6L, 4294967291UL)), ((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 2))(4294967295UL, 6UL)).yyyyyxxyyxyxyyxx, ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 8))(p_648->g_576.wwxywyxz)).odd, ((VECTOR(uint32_t, 4))(p_648->g_577.wzwz))))).xwwwwxxwzwyzzzzw))).sb5, ((VECTOR(uint32_t, 16))(((*l_578) = p_648->g_401[2][3][2].f0), (!(++(*l_578))), (safe_mod_func_int64_t_s_s(((((safe_lshift_func_int16_t_s_s(p_55, 4)) & 0L) && (~0xD06B3EC918E60431L)) | (((~(safe_sub_func_int8_t_s_s(0x10L, ((((VECTOR(int32_t, 4))(p_648->g_587.yyzx)).w , ((p_648->g_146.y &= (l_592 = (((((safe_rshift_func_int8_t_s_u(0x1AL, 3)) <= l_590) , p_56) , GROUP_DIVERGE(2, 1)) , l_591))) < p_648->g_189.y)) <= l_593)))) <= l_594) ^ (*p_648->g_251))), l_590)), 0x00E0F9A6L, 5UL, 4294967292UL, ((VECTOR(uint32_t, 4))(0xE5A1D7CBL)), 4294967293UL, ((VECTOR(uint32_t, 2))(0x0A9AA3C0L)), l_595[0], 4294967295UL, 0xC2EED67BL)).s59))))).even) <= l_596) >= (*p_648->g_251));
                ++l_604;
            }
            (*l_422) = func_106(p_648->g_428, (safe_add_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(((0x0EL != (safe_lshift_func_int8_t_s_s(l_595[0], (l_600.s3 = ((*p_648->g_52) ^ ((*l_613) |= (l_594 = l_600.s2))))))) | l_602), (*p_54))), (safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 8))(p_56, 0x672EL, 7L, 0L, 0x0869L, (-1L), 0x1B98L, 0x18FFL)).s0, (p_56 ^ l_604))))), p_648->g_35, l_619, p_648);
            (*l_422) = func_98(((!(0x379D7F3AL | (safe_rshift_func_int8_t_s_s((&p_54 != &p_54), (safe_sub_func_uint8_t_u_u(0UL, (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 4))(8UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(p_648->g_626.xxyyyxyx)).s20)))), 0UL)).xzxxxxwzxyxxwyyw))).s23ab)), (safe_sub_func_int64_t_s_s(p_56, (safe_add_func_uint8_t_u_u(0x6EL, p_55)))), (p_648->g_236.s3 = 0x5FA8L), 0UL, 65526UL)))).s6, 5)))))))) , (((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 16))(l_632.xxxyxyxxyyyyyxyy)).s849e, ((VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551606UL)).xyyy, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(l_633.yy)), (*l_613), 1UL, 0UL, 0x1A4BB94830E206B4L, l_604, p_648->g_192.se, ((VECTOR(uint64_t, 4))(2UL)), ((VECTOR(uint64_t, 2))(18446744073709551611UL)), 0x38B43F88B8337ECBL, 18446744073709551610UL)).sa558))).z <= p_648->g_626.y)), p_648->g_35, p_55, &l_447[0], p_648);
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_648->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 45)), permutations[(safe_mod_func_uint32_t_u_u((l_616 == ((((void*)0 != p_648->g_634) | ((*l_613) > (0x231FL != (p_648->g_236.s2 = (safe_lshift_func_uint16_t_u_s((l_640 = (l_637--)), (safe_rshift_func_uint8_t_u_s((l_596 <= (((+(((l_643[6] != (l_644 = &p_648->g_117[0])) < (((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x6AL, 1L)))).odd && p_56)) > 18446744073709551613UL)) , 0L) , p_648->g_210.s4)), p_56)))))))) , (void*)0)), 10))][(safe_mod_func_uint32_t_u_u(p_648->tid, 45))]));
        }
    }
    return p_648->g_645;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_115.f6 p_648->g_236 p_648->g_87 p_648->g_2 p_648->g_115.f3 p_648->g_52 p_648->g_44 p_648->g_170 p_648->g_251 p_648->g_401 p_648->g_29
 * writes: p_648->g_236 p_648->g_35 p_648->g_134 p_648->g_171 p_648->g_251 p_648->g_402
 */
int8_t  func_57(uint32_t  p_58, uint16_t  p_59, int16_t * p_60, struct S1 * p_648)
{ /* block id: 166 */
    uint64_t l_383[7] = {0x46BF8DA135201015L,0x46BF8DA135201015L,0x46BF8DA135201015L,0x46BF8DA135201015L,0x46BF8DA135201015L,0x46BF8DA135201015L,0x46BF8DA135201015L};
    uint16_t *l_384[4][8][7] = {{{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0}},{{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0}},{{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0}},{{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0},{&p_648->g_115.f6,&p_648->g_115.f6,&p_648->g_254.f6,(void*)0,(void*)0,&p_648->g_115.f6,(void*)0}}};
    int8_t *l_388 = (void*)0;
    int32_t l_389 = 9L;
    int32_t l_393 = (-1L);
    VECTOR(int64_t, 8) l_394 = (VECTOR(int64_t, 8))(0x0E84D5809CD3F009L, (VECTOR(int64_t, 4))(0x0E84D5809CD3F009L, (VECTOR(int64_t, 2))(0x0E84D5809CD3F009L, 0x5E6685C8AC8BC69DL), 0x5E6685C8AC8BC69DL), 0x5E6685C8AC8BC69DL, 0x0E84D5809CD3F009L, 0x5E6685C8AC8BC69DL);
    int16_t **l_397 = &p_648->g_35;
    int16_t l_398 = 0x67C1L;
    int32_t l_399 = 0x0F0D1F31L;
    int32_t *l_400 = (void*)0;
    int32_t *l_405 = (void*)0;
    int32_t **l_406 = &l_405;
    int16_t *l_407 = &l_398;
    VECTOR(int64_t, 8) l_410 = (VECTOR(int64_t, 8))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0x5EB6AFDD1DA26A96L), 0x5EB6AFDD1DA26A96L), 0x5EB6AFDD1DA26A96L, 9L, 0x5EB6AFDD1DA26A96L);
    int8_t *l_411 = (void*)0;
    int8_t *l_412 = (void*)0;
    int8_t *l_413 = (void*)0;
    int8_t *l_414 = (void*)0;
    int8_t *l_415 = (void*)0;
    int8_t *l_416 = (void*)0;
    int8_t *l_417 = (void*)0;
    VECTOR(int64_t, 8) l_418 = (VECTOR(int64_t, 8))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 0x3B1658F197773C6BL), 0x3B1658F197773C6BL), 0x3B1658F197773C6BL, 4L, 0x3B1658F197773C6BL);
    int32_t *l_419 = (void*)0;
    int32_t *l_420 = &l_393;
    int i, j, k;
    l_400 = func_98(l_383[4], l_384[0][3][5], ((((((p_58 , (safe_unary_minus_func_uint16_t_u(p_58))) & (l_389 = (safe_rshift_func_int8_t_s_s(p_648->g_115.f6, 1)))) < (((safe_unary_minus_func_uint64_t_u((safe_div_func_uint16_t_u_u(((l_393 ^= l_383[4]) >= (((VECTOR(int64_t, 2))(l_394.s60)).even , 0x62FE5746L)), (p_648->g_236.s3++))))) <= ((((*l_397) = p_60) == (void*)0) > l_398)) && l_383[4])) ^ l_399) >= (-6L)) || l_398), l_397, p_648);
    p_648->g_402[2][0][1] = p_648->g_401[2][3][2];
    (*l_420) |= (((safe_div_func_uint16_t_u_u(0x9E2CL, ((*l_407) &= (+(&l_399 == ((*l_406) = l_405)))))) == (l_389 ^= (safe_mul_func_int16_t_s_s(l_394.s1, (((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_410.s5310465644572643)))).s4 < p_59))))) & ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_418.s1736)))).x);
    return p_648->g_29;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_61(int16_t  p_62, uint64_t * p_63, uint64_t  p_64, uint64_t * p_65, int16_t  p_66, struct S1 * p_648)
{ /* block id: 88 */
    struct S0 * volatile *l_381 = (void*)0;
    int32_t l_382 = 0x67514818L;
    if ((atomic_inc(&p_648->l_atomic_input[73]) == 7))
    { /* block id: 90 */
        int64_t l_259 = 0x15F3D1AF904CA89CL;
        uint32_t l_260 = 5UL;
        l_260++;
        for (l_260 = 0; (l_260 > 52); ++l_260)
        { /* block id: 94 */
            struct S0 l_265 = {0x7ACE969139DE4035L,1UL,0x4E89D2B4L,-1L,0x636E027DL,1UL,0x54A5L};/* VOLATILE GLOBAL l_265 */
            struct S0 l_266 = {18446744073709551607UL,1UL,0x7DA9A762L,1L,1L,0xB4E3L,0x191BL};/* VOLATILE GLOBAL l_266 */
            uint8_t l_267 = 0xD4L;
            l_266 = l_265;
            --l_267;
        }
        for (l_259 = 0; (l_259 <= (-15)); --l_259)
        { /* block id: 100 */
            int32_t l_272 = (-1L);
            int16_t l_307 = (-4L);
            struct S0 l_308 = {3UL,0x71647A86L,0x7E48F123L,-3L,0L,0xCAF8L,0x6E90L};/* VOLATILE GLOBAL l_308 */
            struct S0 l_309 = {18446744073709551615UL,4294967291UL,0x6EB844A9L,0x75B1FC997E673037L,7L,0x993EL,0x3586L};/* VOLATILE GLOBAL l_309 */
            int8_t l_310 = (-1L);
            uint8_t l_311 = 0xE8L;
            VECTOR(int32_t, 8) l_312 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x66A0CD23L), 0x66A0CD23L), 0x66A0CD23L, 7L, 0x66A0CD23L);
            uint64_t l_313 = 0x354A1B1FD5959697L;
            VECTOR(int32_t, 2) l_314 = (VECTOR(int32_t, 2))(0x76353CE2L, 0x1FE198EAL);
            uint64_t l_315 = 7UL;
            uint32_t l_316 = 1UL;
            VECTOR(int32_t, 4) l_317 = (VECTOR(int32_t, 4))(0x00A61A6BL, (VECTOR(int32_t, 2))(0x00A61A6BL, 0x50183FA8L), 0x50183FA8L);
            VECTOR(int32_t, 4) l_318 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L);
            int32_t l_319 = 0L;
            int32_t l_320 = (-9L);
            VECTOR(int32_t, 16) l_321 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-9L)), (-9L)), (-9L), (-1L), (-9L), (VECTOR(int32_t, 2))((-1L), (-9L)), (VECTOR(int32_t, 2))((-1L), (-9L)), (-1L), (-9L), (-1L), (-9L));
            VECTOR(int32_t, 16) l_322 = (VECTOR(int32_t, 16))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x0B05DACCL), 0x0B05DACCL), 0x0B05DACCL, (-2L), 0x0B05DACCL, (VECTOR(int32_t, 2))((-2L), 0x0B05DACCL), (VECTOR(int32_t, 2))((-2L), 0x0B05DACCL), (-2L), 0x0B05DACCL, (-2L), 0x0B05DACCL);
            int32_t l_323 = 0x55BF2D97L;
            VECTOR(int32_t, 16) l_324 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 7L), 7L), 7L, 0L, 7L, (VECTOR(int32_t, 2))(0L, 7L), (VECTOR(int32_t, 2))(0L, 7L), 0L, 7L, 0L, 7L);
            int16_t l_325 = 0x0BD9L;
            int16_t l_326 = 1L;
            int64_t l_327 = (-9L);
            int64_t l_328[10][7] = {{1L,3L,0x024ECD6D94D92E8FL,(-5L),0x70049EF023420736L,1L,(-5L)},{1L,3L,0x024ECD6D94D92E8FL,(-5L),0x70049EF023420736L,1L,(-5L)},{1L,3L,0x024ECD6D94D92E8FL,(-5L),0x70049EF023420736L,1L,(-5L)},{1L,3L,0x024ECD6D94D92E8FL,(-5L),0x70049EF023420736L,1L,(-5L)},{1L,3L,0x024ECD6D94D92E8FL,(-5L),0x70049EF023420736L,1L,(-5L)},{1L,3L,0x024ECD6D94D92E8FL,(-5L),0x70049EF023420736L,1L,(-5L)},{1L,3L,0x024ECD6D94D92E8FL,(-5L),0x70049EF023420736L,1L,(-5L)},{1L,3L,0x024ECD6D94D92E8FL,(-5L),0x70049EF023420736L,1L,(-5L)},{1L,3L,0x024ECD6D94D92E8FL,(-5L),0x70049EF023420736L,1L,(-5L)},{1L,3L,0x024ECD6D94D92E8FL,(-5L),0x70049EF023420736L,1L,(-5L)}};
            uint64_t l_329 = 0x7D8F853E965E2743L;
            int64_t l_330 = 0x681923A35FBDE6B5L;
            int i, j;
            for (l_272 = (-20); (l_272 <= (-9)); l_272 = safe_add_func_uint32_t_u_u(l_272, 2))
            { /* block id: 103 */
                uint8_t l_275 = 248UL;
                VECTOR(int16_t, 16) l_276 = (VECTOR(int16_t, 16))(0x5FB3L, (VECTOR(int16_t, 4))(0x5FB3L, (VECTOR(int16_t, 2))(0x5FB3L, 0x2A08L), 0x2A08L), 0x2A08L, 0x5FB3L, 0x2A08L, (VECTOR(int16_t, 2))(0x5FB3L, 0x2A08L), (VECTOR(int16_t, 2))(0x5FB3L, 0x2A08L), 0x5FB3L, 0x2A08L, 0x5FB3L, 0x2A08L);
                int16_t l_277 = (-10L);
                uint64_t l_278 = 18446744073709551606UL;
                uint32_t l_279 = 0xD1DCE0CCL;
                uint64_t l_280 = 0x585215E0B628200BL;
                uint8_t l_281 = 0xFBL;
                uint8_t l_282 = 0xEBL;
                struct S0 l_283 = {0xF4127E0A073962BBL,4294967293UL,0x766250D2L,3L,-1L,1UL,0x99DDL};/* VOLATILE GLOBAL l_283 */
                int64_t l_284 = (-1L);
                int i;
                if ((((l_275 , (l_278 ^= (l_277 ^= ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_276.s7789)).lo)).hi))) , (((l_279 , (l_282 = (l_281 = l_280))) , 0L) , l_283)) , l_284))
                { /* block id: 108 */
                    int32_t l_287 = 0x2F5C692EL;
                    int32_t *l_286 = &l_287;
                    int32_t **l_285 = &l_286;
                    int32_t **l_288 = &l_286;
                    l_288 = l_285;
                }
                else
                { /* block id: 110 */
                    int32_t l_289 = (-1L);
                    struct S0 l_306 = {0x44E4C5D7B9B8B638L,0xE986DF14L,1L,1L,1L,0x9CCDL,0x1A3FL};/* VOLATILE GLOBAL l_306 */
                    for (l_289 = 0; (l_289 < (-26)); l_289--)
                    { /* block id: 113 */
                        uint16_t l_292 = 8UL;
                        int64_t l_295 = 0x353D7DBF13F1C303L;
                        int16_t l_296 = 1L;
                        int32_t l_297 = 5L;
                        int32_t l_298 = 0x57F7A5D9L;
                        VECTOR(int32_t, 4) l_299 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), (-4L)), (-4L));
                        VECTOR(int32_t, 4) l_300 = (VECTOR(int32_t, 4))(0x6638F292L, (VECTOR(int32_t, 2))(0x6638F292L, (-7L)), (-7L));
                        uint8_t l_301 = 0x50L;
                        int32_t *l_304 = &l_298;
                        int32_t *l_305 = &l_298;
                        int i;
                        l_292++;
                        l_301--;
                        l_305 = l_304;
                    }
                    l_283 = l_306;
                }
            }
            l_309 = (l_307 , l_308);
            l_330 &= ((VECTOR(int32_t, 8))(0x5A64D2D6L, ((l_311 = l_310) , ((VECTOR(int32_t, 2))(0L, 0x78E1758EL)).odd), ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 16))(l_312.s0671420143435315)).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x6E155AFDL, (l_316 = ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(l_313, ((VECTOR(int32_t, 2))(1L, 1L)), ((VECTOR(int32_t, 4))(l_314.yxyx)), (-1L))), (int32_t)l_315))).s1), 0x4175A2C4L, 0x77AAFB62L)), ((VECTOR(int32_t, 2))((-4L), 0x05C46FA4L)), (-1L), 2L))))))).s66, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(l_317.xxzw)), ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_318.xwxxxzyyzwyyyxww)).sf, 0x5B80AED1L, (l_320 = l_319), 1L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_321.s0e99ee5b)))), ((VECTOR(int32_t, 4))(l_322.s4390)))).s44))).yxxyxyyxyxyyyyxx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x3FF95D8AL, 0x41A3469AL)))).yxxyyxyxyyyyxxxy, ((VECTOR(int32_t, 16))(l_323, ((VECTOR(int32_t, 4))(l_324.s6a31)), l_325, (l_326 , l_327), 0x3599ED79L, l_328[3][6], ((VECTOR(int32_t, 4))(0x07A14A86L)), 0x6AD622B2L, (-1L), 0x588A92D1L))))).sed59))).zxyyywyyyxxwwwyz)).sd9))), l_329, ((VECTOR(int32_t, 2))((-10L))), 1L)).s0;
            for (l_315 = (-8); (l_315 <= 24); l_315++)
            { /* block id: 128 */
                int32_t l_335 = (-9L);
                int32_t *l_334 = &l_335;
                int32_t **l_333 = &l_334;
                VECTOR(int32_t, 16) l_336 = (VECTOR(int32_t, 16))(0x3594430EL, (VECTOR(int32_t, 4))(0x3594430EL, (VECTOR(int32_t, 2))(0x3594430EL, 0x1E2DA020L), 0x1E2DA020L), 0x1E2DA020L, 0x3594430EL, 0x1E2DA020L, (VECTOR(int32_t, 2))(0x3594430EL, 0x1E2DA020L), (VECTOR(int32_t, 2))(0x3594430EL, 0x1E2DA020L), 0x3594430EL, 0x1E2DA020L, 0x3594430EL, 0x1E2DA020L);
                VECTOR(int32_t, 4) l_337 = (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x151DAF60L), 0x151DAF60L);
                VECTOR(int32_t, 8) l_338 = (VECTOR(int32_t, 8))(0x1AF548C5L, (VECTOR(int32_t, 4))(0x1AF548C5L, (VECTOR(int32_t, 2))(0x1AF548C5L, 0x475D0819L), 0x475D0819L), 0x475D0819L, 0x1AF548C5L, 0x475D0819L);
                int32_t l_339[5][6] = {{0x16B761A9L,0x16B761A9L,0x16B761A9L,0x16B761A9L,0x16B761A9L,0x16B761A9L},{0x16B761A9L,0x16B761A9L,0x16B761A9L,0x16B761A9L,0x16B761A9L,0x16B761A9L},{0x16B761A9L,0x16B761A9L,0x16B761A9L,0x16B761A9L,0x16B761A9L,0x16B761A9L},{0x16B761A9L,0x16B761A9L,0x16B761A9L,0x16B761A9L,0x16B761A9L,0x16B761A9L},{0x16B761A9L,0x16B761A9L,0x16B761A9L,0x16B761A9L,0x16B761A9L,0x16B761A9L}};
                int8_t l_340 = 0L;
                VECTOR(int32_t, 16) l_341 = (VECTOR(int32_t, 16))(0x075C8E10L, (VECTOR(int32_t, 4))(0x075C8E10L, (VECTOR(int32_t, 2))(0x075C8E10L, (-2L)), (-2L)), (-2L), 0x075C8E10L, (-2L), (VECTOR(int32_t, 2))(0x075C8E10L, (-2L)), (VECTOR(int32_t, 2))(0x075C8E10L, (-2L)), 0x075C8E10L, (-2L), 0x075C8E10L, (-2L));
                uint16_t l_342[5][6] = {{0x6960L,1UL,0x6960L,0x6960L,1UL,0x6960L},{0x6960L,1UL,0x6960L,0x6960L,1UL,0x6960L},{0x6960L,1UL,0x6960L,0x6960L,1UL,0x6960L},{0x6960L,1UL,0x6960L,0x6960L,1UL,0x6960L},{0x6960L,1UL,0x6960L,0x6960L,1UL,0x6960L}};
                VECTOR(int32_t, 4) l_343 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x1ACA6C19L), 0x1ACA6C19L);
                VECTOR(int32_t, 2) l_344 = (VECTOR(int32_t, 2))(0x6F9AEC58L, (-5L));
                VECTOR(int32_t, 8) l_345 = (VECTOR(int32_t, 8))(0x0B8834E9L, (VECTOR(int32_t, 4))(0x0B8834E9L, (VECTOR(int32_t, 2))(0x0B8834E9L, (-3L)), (-3L)), (-3L), 0x0B8834E9L, (-3L));
                VECTOR(uint64_t, 8) l_346 = (VECTOR(uint64_t, 8))(0xA5C4AD845D9B98D9L, (VECTOR(uint64_t, 4))(0xA5C4AD845D9B98D9L, (VECTOR(uint64_t, 2))(0xA5C4AD845D9B98D9L, 0x578FA5C16FCF6E17L), 0x578FA5C16FCF6E17L), 0x578FA5C16FCF6E17L, 0xA5C4AD845D9B98D9L, 0x578FA5C16FCF6E17L);
                VECTOR(int32_t, 2) l_347 = (VECTOR(int32_t, 2))(0x2DC3F6B3L, 0x7C98DB7EL);
                uint32_t l_348 = 0UL;
                VECTOR(int32_t, 2) l_349 = (VECTOR(int32_t, 2))(1L, 0x54CC6003L);
                int i, j;
                l_333 = (void*)0;
                if (((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_336.s719b)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_337.wywz)))).even, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(l_338.s6774)).xyzyyxyw, (int32_t)(l_339[1][0] , l_340)))).s50))), 0L, 0x1CF48C60L)).s2361053405464303, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_341.sd0b56da2c7d3644f)).odd)).s5652334576657470, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(1L, l_342[4][5], 2L, 0x206F519AL, 1L, ((VECTOR(int32_t, 2))(l_343.wx)), 1L)), ((VECTOR(int32_t, 8))(l_344.xxyxyyxy)))).sb, (l_317.w = ((VECTOR(int32_t, 4))(l_345.s7370)).y), (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_346.s22405510)).s0300661735336427)).s8 , (l_317.z = (-1L))), ((VECTOR(int32_t, 8))(l_347.xxxxxxyx)), (l_348 , (-9L)), (-8L), 0x0B5A059EL, (-6L), (-3L))).s0bac)).zyzyyyzyyzwxxzxy))))).s7a, ((VECTOR(int32_t, 8))(l_349.xyxxxyyx)).s25))).odd)
                { /* block id: 132 */
                    int32_t l_350[5] = {0x18CB0854L,0x18CB0854L,0x18CB0854L,0x18CB0854L,0x18CB0854L};
                    int i;
                    for (l_350[4] = 0; (l_350[4] >= (-9)); l_350[4] = safe_sub_func_uint64_t_u_u(l_350[4], 2))
                    { /* block id: 135 */
                        int32_t l_353 = 7L;
                        int64_t l_354[9] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
                        uint32_t l_355[1];
                        int64_t l_358 = 0x2B816EAD36302C97L;
                        int64_t l_359 = 0x35DF598A1C8D3CF3L;
                        int32_t l_360 = 0x4756F381L;
                        uint32_t l_361[10][1][10] = {{{0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL,0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL}},{{0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL,0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL}},{{0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL,0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL}},{{0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL,0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL}},{{0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL,0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL}},{{0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL,0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL}},{{0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL,0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL}},{{0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL,0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL}},{{0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL,0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL}},{{0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL,0x5E8C4A1BL,0x616DDCFAL,0x453BFCFDL,0x616DDCFAL,0x5E8C4A1BL}}};
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_355[i] = 0UL;
                        ++l_355[0];
                        l_361[4][0][4]--;
                    }
                    for (l_350[4] = 0; (l_350[4] == 8); l_350[4] = safe_add_func_uint8_t_u_u(l_350[4], 9))
                    { /* block id: 141 */
                        uint16_t l_366[3][1];
                        int32_t l_368 = 1L;
                        int32_t *l_367 = &l_368;
                        int32_t *l_369[3][9] = {{&l_368,(void*)0,&l_368,(void*)0,&l_368,&l_368,(void*)0,&l_368,(void*)0},{&l_368,(void*)0,&l_368,(void*)0,&l_368,&l_368,(void*)0,&l_368,(void*)0},{&l_368,(void*)0,&l_368,(void*)0,&l_368,&l_368,(void*)0,&l_368,(void*)0}};
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_366[i][j] = 0x31A8L;
                        }
                        l_369[1][6] = (l_366[2][0] , l_367);
                    }
                }
                else
                { /* block id: 144 */
                    int32_t l_370 = 0L;
                    struct S0 l_380[7] = {{18446744073709551610UL,0x6901545BL,0x790FD3DBL,0x38C00EC5AAA0E40AL,0x44A128F8L,0UL,0UL},{18446744073709551610UL,0x6901545BL,0x790FD3DBL,0x38C00EC5AAA0E40AL,0x44A128F8L,0UL,0UL},{18446744073709551610UL,0x6901545BL,0x790FD3DBL,0x38C00EC5AAA0E40AL,0x44A128F8L,0UL,0UL},{18446744073709551610UL,0x6901545BL,0x790FD3DBL,0x38C00EC5AAA0E40AL,0x44A128F8L,0UL,0UL},{18446744073709551610UL,0x6901545BL,0x790FD3DBL,0x38C00EC5AAA0E40AL,0x44A128F8L,0UL,0UL},{18446744073709551610UL,0x6901545BL,0x790FD3DBL,0x38C00EC5AAA0E40AL,0x44A128F8L,0UL,0UL},{18446744073709551610UL,0x6901545BL,0x790FD3DBL,0x38C00EC5AAA0E40AL,0x44A128F8L,0UL,0UL}};
                    int i;
                    for (l_370 = (-12); (l_370 >= 27); l_370++)
                    { /* block id: 147 */
                        uint64_t l_373 = 0x501CDA89CB0F2803L;
                        int32_t l_377 = 0x0450111DL;
                        int32_t *l_376 = &l_377;
                        l_373--;
                        l_376 = l_376;
                    }
                    for (l_370 = 10; (l_370 < (-10)); l_370 = safe_sub_func_uint32_t_u_u(l_370, 7))
                    { /* block id: 153 */
                        l_334 = (void*)0;
                    }
                    l_334 = (void*)0;
                    l_380[4] = l_380[3];
                }
            }
        }
        unsigned int result = 0;
        result += l_259;
        result += l_260;
        atomic_add(&p_648->l_special_values[73], result);
    }
    else
    { /* block id: 161 */
        (1 + 1);
    }
    l_381 = &p_648->g_255;
    return l_382;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_2 p_648->g_52 p_648->g_44 p_648->g_78 p_648->g_114 p_648->g_115 p_648->g_29 p_648->g_33 p_648->g_134 p_648->g_146 p_648->g_154 p_648->g_30 p_648->l_comm_values p_648->g_170 p_648->g_176 p_648->g_comm_values p_648->g_189 p_648->g_192 p_648->g_210 p_648->g_211 p_648->g_216 p_648->g_234 p_648->g_235 p_648->g_236 p_648->g_237 p_648->g_87 p_648->g_251 p_648->g_253 p_648->g_254 p_648->g_257
 * writes: p_648->g_114 p_648->g_117 p_648->g_134 p_648->g_115.f4 p_648->g_171 p_648->g_176 p_648->g_37 p_648->g_115.f0 p_648->g_29 p_648->g_115.f6 p_648->g_235 p_648->g_251 p_648->g_253 p_648->g_254 p_648->g_257
 */
uint8_t  func_72(int64_t  p_73, int8_t  p_74, int8_t  p_75, uint32_t  p_76, int32_t * p_77, struct S1 * p_648)
{ /* block id: 28 */
    int32_t *l_94 = &p_648->g_2[7][2][0];
    int32_t **l_95 = &l_94;
    int32_t *l_97 = &p_648->g_44;
    int32_t **l_96[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t *l_179 = &p_648->g_115.f6;
    int16_t **l_180 = &p_648->g_35;
    struct S0 *l_256[2][4] = {{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115}};
    int i, j;
    for (p_75 = (-22); (p_75 > 2); ++p_75)
    { /* block id: 31 */
        return p_648->g_2[5][2][1];
    }
    p_648->g_253 |= (safe_mul_func_uint16_t_u_u(0xBF6CL, (((*l_95) = l_94) == (((l_95 != l_96[2]) <= (*p_648->g_52)) , func_98((func_103(p_76, p_648->g_78.se, p_648) > p_648->g_comm_values[p_648->tid]), l_179, p_648->g_2[5][2][1], l_180, p_648)))));
    p_648->g_254 = p_648->g_254;
    p_648->g_257 ^= (*l_97);
    return (**l_95);
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_189 p_648->g_192 p_648->g_176 p_648->g_210 p_648->g_211 p_648->g_216 p_648->g_78 p_648->g_234 p_648->g_235 p_648->g_236 p_648->g_237 p_648->g_33 p_648->g_115.f5 p_648->g_87 p_648->g_2 p_648->g_115.f3 p_648->g_52 p_648->g_44 p_648->g_170 p_648->g_251
 * writes: p_648->g_37 p_648->g_115.f0 p_648->g_29 p_648->g_115.f6 p_648->g_235 p_648->g_134 p_648->g_171 p_648->g_251
 */
int32_t * func_98(int64_t  p_99, uint16_t * p_100, uint8_t  p_101, int16_t ** p_102, struct S1 * p_648)
{ /* block id: 64 */
    int32_t *l_181[7][8][4] = {{{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0}},{{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0}},{{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0}},{{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0}},{{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0}},{{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0}},{{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0},{&p_648->g_114,&p_648->g_134,&p_648->g_2[5][2][1],(void*)0}}};
    int16_t l_182 = 0x65AAL;
    uint16_t l_183 = 0xE11BL;
    VECTOR(uint64_t, 16) l_188 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xFA777E85B639F850L), 0xFA777E85B639F850L), 0xFA777E85B639F850L, 0UL, 0xFA777E85B639F850L, (VECTOR(uint64_t, 2))(0UL, 0xFA777E85B639F850L), (VECTOR(uint64_t, 2))(0UL, 0xFA777E85B639F850L), 0UL, 0xFA777E85B639F850L, 0UL, 0xFA777E85B639F850L);
    VECTOR(uint64_t, 16) l_190 = (VECTOR(uint64_t, 16))(18446744073709551607UL, (VECTOR(uint64_t, 4))(18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 0UL), 0UL), 0UL, 18446744073709551607UL, 0UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 0UL), (VECTOR(uint64_t, 2))(18446744073709551607UL, 0UL), 18446744073709551607UL, 0UL, 18446744073709551607UL, 0UL);
    VECTOR(int8_t, 16) l_209 = (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x24L), 0x24L), 0x24L, (-4L), 0x24L, (VECTOR(int8_t, 2))((-4L), 0x24L), (VECTOR(int8_t, 2))((-4L), 0x24L), (-4L), 0x24L, (-4L), 0x24L);
    uint64_t l_212[10] = {0x322B6666EC8D345CL,0x322B6666EC8D345CL,0x322B6666EC8D345CL,0x322B6666EC8D345CL,0x322B6666EC8D345CL,0x322B6666EC8D345CL,0x322B6666EC8D345CL,0x322B6666EC8D345CL,0x322B6666EC8D345CL,0x322B6666EC8D345CL};
    VECTOR(uint64_t, 16) l_214 = (VECTOR(uint64_t, 16))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 8UL), 8UL), 8UL, 3UL, 8UL, (VECTOR(uint64_t, 2))(3UL, 8UL), (VECTOR(uint64_t, 2))(3UL, 8UL), 3UL, 8UL, 3UL, 8UL);
    VECTOR(uint64_t, 4) l_215 = (VECTOR(uint64_t, 4))(0x34ABE8EA4B398742L, (VECTOR(uint64_t, 2))(0x34ABE8EA4B398742L, 0x2E82253714A94D3FL), 0x2E82253714A94D3FL);
    VECTOR(uint32_t, 16) l_220 = (VECTOR(uint32_t, 16))(0x45B28C40L, (VECTOR(uint32_t, 4))(0x45B28C40L, (VECTOR(uint32_t, 2))(0x45B28C40L, 1UL), 1UL), 1UL, 0x45B28C40L, 1UL, (VECTOR(uint32_t, 2))(0x45B28C40L, 1UL), (VECTOR(uint32_t, 2))(0x45B28C40L, 1UL), 0x45B28C40L, 1UL, 0x45B28C40L, 1UL);
    VECTOR(uint32_t, 16) l_221 = (VECTOR(uint32_t, 16))(0x09A0F8C3L, (VECTOR(uint32_t, 4))(0x09A0F8C3L, (VECTOR(uint32_t, 2))(0x09A0F8C3L, 4294967290UL), 4294967290UL), 4294967290UL, 0x09A0F8C3L, 4294967290UL, (VECTOR(uint32_t, 2))(0x09A0F8C3L, 4294967290UL), (VECTOR(uint32_t, 2))(0x09A0F8C3L, 4294967290UL), 0x09A0F8C3L, 4294967290UL, 0x09A0F8C3L, 4294967290UL);
    VECTOR(uint16_t, 4) l_223 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xD112L), 0xD112L);
    int16_t l_231 = 0L;
    VECTOR(uint16_t, 16) l_238 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), 65535UL, 0UL, 65535UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), (VECTOR(uint16_t, 2))(0UL, 65535UL), 0UL, 65535UL, 0UL, 65535UL);
    VECTOR(int32_t, 4) l_243 = (VECTOR(int32_t, 4))(0x63A60C09L, (VECTOR(int32_t, 2))(0x63A60C09L, 0x2EABD2FAL), 0x2EABD2FAL);
    int16_t ***l_248 = (void*)0;
    int32_t l_249[10][5][5] = {{{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L}},{{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L}},{{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L}},{{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L}},{{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L}},{{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L}},{{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L}},{{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L}},{{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L}},{{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L},{1L,0x0A24A25CL,(-2L),0L,0L}}};
    int i, j, k;
    l_183--;
    for (l_182 = 0; (l_182 == (-8)); l_182 = safe_sub_func_int32_t_s_s(l_182, 2))
    { /* block id: 68 */
        VECTOR(uint64_t, 2) l_191 = (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL);
        VECTOR(uint64_t, 2) l_205 = (VECTOR(uint64_t, 2))(18446744073709551608UL, 5UL);
        VECTOR(uint64_t, 2) l_206 = (VECTOR(uint64_t, 2))(0xE70040E6F50D0A37L, 1UL);
        VECTOR(uint64_t, 4) l_213 = (VECTOR(uint64_t, 4))(0xD286BB95111280E9L, (VECTOR(uint64_t, 2))(0xD286BB95111280E9L, 0x3DFF51BFF649526FL), 0x3DFF51BFF649526FL);
        VECTOR(int32_t, 4) l_219 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x4CDA484CL), 0x4CDA484CL);
        int16_t **l_222 = &p_648->g_35;
        uint64_t *l_224 = &p_648->g_115.f0;
        uint64_t *l_225 = &p_648->g_29;
        int16_t *l_226 = (void*)0;
        int16_t *l_227 = (void*)0;
        int16_t *l_228[4][5];
        int32_t l_229 = 0x75FD95FEL;
        int64_t l_230 = 0x73769E7DFF19B28CL;
        int32_t l_232 = 0L;
        int32_t l_233 = (-3L);
        uint32_t *l_244[2];
        uint64_t **l_247 = &l_224;
        int32_t **l_252 = &p_648->g_251;
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 5; j++)
                l_228[i][j] = (void*)0;
        }
        for (i = 0; i < 2; i++)
            l_244[i] = (void*)0;
        l_233 |= (((VECTOR(uint64_t, 8))(1UL, GROUP_DIVERGE(2, 1), GROUP_DIVERGE(2, 1), 0x760B6CA204FFAC94L, ((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 2))(l_188.sfd)).yyyxxyyy, ((VECTOR(uint64_t, 2))(p_648->g_189.yx)).yxxyxyxx))).lo, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_190.s6f84)).even)).xxxy))))).s1 | ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 2))(0x7AADBFA3D356C0FDL, 0xF2DC62B39746C3F0L)), ((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 8))(0xE9CDB69A65D65041L, 2UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_191.xxxx)))), 18446744073709551611UL, 0xF815AF161C1880EFL)).odd, ((VECTOR(uint64_t, 2))(p_648->g_192.sa4)).xyyy, ((VECTOR(uint64_t, 2))(0x4D9B2C9C791ECBDFL, 0x45B20288A6071FA6L)).yyxy))).xzxzxwwzxxxzyzwz, ((VECTOR(uint64_t, 4))(0xE989D174007D99C1L, ((0x8D32L == ((*p_100) = (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0xBEL, 249UL, 0UL, 0xD3L)))).even)), 255UL, (safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s((((((safe_add_func_int64_t_s_s(((l_232 = (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_229 = (((*l_225) = (l_219.w = ((*l_224) = (safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(2, 1), ((p_648->g_176 >= ((p_648->g_37[2] = ((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_205.xxyyxyyyyxyxxxxy)).odd)).s53, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(18446744073709551611UL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_206.xyyx)).xxzzwwxw)), 0xB41102A6E8E867B3L, (safe_mul_func_uint8_t_u_u(l_191.x, ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 2))(0x58L, 1L)).xyyyyxyxyxxyxyxy, ((VECTOR(int8_t, 2))(l_209.s75)).xyyyyyyxxxxyxxxx))).s61, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x65L, 0x40L)), (-8L), 1L, 0L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_648->g_210.sa4c65c70f8a1c532)).s16)), 0x48L)).s54))).hi)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(0x01E7BACF8998E158L, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(p_648->g_211.s66f7)))), ((l_212[0] >= 18446744073709551608UL) , p_99), 0x0BFFE8253B6EB939L, 18446744073709551615UL)), ((VECTOR(uint64_t, 2))(0xA5749F3D81312F68L, 0xC8EE47FB2EB3C94AL)), ((VECTOR(uint64_t, 2))(l_213.yy)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_214.s05)), 0UL, 0x4A671EDED3D27269L)))).s9e)).xxyy)), 1UL)).hi)).s45))))).even, ((VECTOR(uint64_t, 2))(l_215.xx)), 0UL)).wwyxwxzw))).s0253642244241256, ((VECTOR(uint64_t, 2))(0x75444CAA32A4950DL, 0xAFB20A85100DBDCFL)).yxxyyxxxxyyxxyyx, ((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 4))(0x0689C20EA0EF96F8L, 18446744073709551615UL, 0x3ED75555CEA670ACL, 0xBE7ED0B2EA24C7B2L)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(0x7624C6BFACB8014FL, ((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 4))(0x6D7F041DAB4DF1FAL, 3L, 0x0FF28CAA444BCCD8L, 0x6BBCE2F1D7D21DF0L)).even, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_648->g_216.zzwz)).xyzwzyww)).s14))), 0xCC056BA9F2272EF4L))))))).zwyxwywyxyxwxxwy))).s6) > ((safe_sub_func_int8_t_s_s((~1L), (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((((VECTOR(int32_t, 8))(l_219.wxzwywxx)).s1 <= ((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 8))(l_220.s0c7d8826)).odd, ((VECTOR(uint32_t, 4))(l_221.s85ea))))).w), 0L, (l_222 != p_102), ((VECTOR(int32_t, 4))((-1L))), 0x0BBB3BF7L)).s22)).odd <= l_205.x))) != l_223.y))) , l_213.w)))))) && 0x0197DB5B27B66E87L)), l_230)), l_231))) & p_648->g_78.s2), p_101)) & p_101) ^ l_206.y) , p_99) ^ FAKE_DIVERGE(p_648->local_2_offset, get_local_id(2), 10)), p_648->g_78.sf)), p_101)), l_229, 0xB8L, 1UL, 0x17L)).s4 == (-1L)))) != p_101), 18446744073709551614UL, 0x0EC81A7D088855CFL)).zxyxzyzxxzxzzyxx, ((VECTOR(uint64_t, 16))(0UL))))).s5483, ((VECTOR(uint64_t, 4))(0xA15FA5D2842B9730L))))).zxwxyyyzywzwxwyz)), ((VECTOR(uint64_t, 16))(0x735869C654EAF088L)), ((VECTOR(uint64_t, 16))(4UL))))).s7865, ((VECTOR(uint64_t, 4))(18446744073709551615UL))))).wxyzzyzz)).hi, ((VECTOR(uint64_t, 4))(0UL)), ((VECTOR(uint64_t, 4))(0xF99BEEA28F6C8B6CL))))).hi, ((VECTOR(uint64_t, 2))(0UL))))).yxxxxyyyxxyxxxxx)).s8);
        l_233 |= p_99;
        (*l_252) = func_106((((VECTOR(int8_t, 16))((5L ^ (((((((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(0x3881E8CDL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(p_648->g_234.xyxyxyxy)).s56, ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(p_648->g_235.sa5584c7e)).s41)).xxyyxyxx, ((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_648->g_236.s35)).yyxx)).yywxywxyzxzxxyww, ((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xAE8CL, 65533UL)), 65535UL, 0UL)).zwxyxwwyxzxyywyx, ((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 4))(p_648->g_237.zxzx)).wxyxwyyy))).s6200577236270251)))))).s6f2b, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 16))(l_238.s63de1a9d19148b37)).s6c7a, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_243.ww)), 0x173C63E2L, 0x347BBFC8L)).hi)).even && (p_648->g_235.s9 ^= ((void*)0 == &p_648->g_37[3]))), ((safe_mod_func_uint64_t_u_u(((255UL <= 1UL) && ((l_205.x , (((*l_247) = &p_648->g_29) == l_225)) < (&p_102 != l_248))), p_101)) <= p_648->g_33.z))), p_648->g_115.f5)) , l_206.y), ((VECTOR(uint16_t, 2))(0x3D27L)), 6UL)).odd)).yxxx))), ((VECTOR(uint16_t, 8))(0xAAA4L)), 0x4453L, 0x14E4L, 0xF21CL, 0x8C04L)).s6b6c))).ywyxxxwzyzxyxzwx, ((VECTOR(uint16_t, 16))(0x61D5L))))).hi))).s30))).hi, ((VECTOR(uint32_t, 2))(0UL)), 0x34F6A9F4L)).w, 0UL, 0x5F2CB79EL)).wwywzyzy)), ((VECTOR(uint32_t, 8))(4294967295UL))))), ((VECTOR(uint32_t, 8))(4294967295UL))))).s7 != 0x678350BCL) ^ l_249[8][2][4]) ^ 0x07L) >= 1UL) > 1L)), 0L, 0x54L, ((VECTOR(int8_t, 4))((-5L))), 1L, 8L, ((VECTOR(int8_t, 2))(3L)), 0x72L, (-1L), p_99, 3L, 0x3DL)).sf != (-1L)), p_99, &l_183, p_648->g_87[0], p_648);
        return (*l_252);
    }
    return l_181[3][2][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_114 p_648->g_115 p_648->g_29 p_648->g_44 p_648->g_33 p_648->g_134 p_648->g_2 p_648->g_146 p_648->g_154 p_648->g_30 p_648->l_comm_values p_648->g_52 p_648->g_170 p_648->g_176
 * writes: p_648->g_114 p_648->g_117 p_648->g_134 p_648->g_115.f4 p_648->g_171 p_648->g_176
 */
int64_t  func_103(int64_t  p_104, uint8_t  p_105, struct S1 * p_648)
{ /* block id: 35 */
    int16_t **l_119 = &p_648->g_35;
    int16_t ***l_118 = &l_119;
    int16_t **l_120 = &p_648->g_35;
    int16_t ***l_121 = &l_120;
    uint32_t l_122 = 4294967295UL;
    uint32_t *l_130 = (void*)0;
    VECTOR(int32_t, 8) l_131 = (VECTOR(int32_t, 8))(0x1E87E310L, (VECTOR(int32_t, 4))(0x1E87E310L, (VECTOR(int32_t, 2))(0x1E87E310L, (-9L)), (-9L)), (-9L), 0x1E87E310L, (-9L));
    int32_t l_132 = 0x0373B84CL;
    int32_t *l_133 = &p_648->g_134;
    uint16_t *l_135 = (void*)0;
    int32_t **l_172[9][7] = {{&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133},{&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133},{&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133},{&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133},{&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133},{&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133},{&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133},{&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133},{&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133}};
    int32_t *l_173 = &p_648->g_114;
    VECTOR(int32_t, 4) l_174 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x7983F0ABL), 0x7983F0ABL);
    int64_t l_175 = 0x28512A6EB9843563L;
    int i, j;
    l_173 = func_106(((func_20(p_105, ((((*l_118) = (p_648->g_117[0] = func_111(p_104, p_648))) == ((*l_121) = l_120)) , 0x48L), (p_648->g_115.f2 , (p_648->g_115.f3 > (l_122 && ((*l_133) = (l_132 = (((safe_unary_minus_func_int16_t_s(((safe_rshift_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((l_131.s0 = (safe_lshift_func_int16_t_s_u((((VECTOR(uint8_t, 2))(7UL, 3UL)).even != p_648->g_115.f1), 5))) <= l_122), p_648->g_29)), FAKE_DIVERGE(p_648->group_1_offset, get_group_id(1), 10))) != p_104))) >= l_122) > 0x42L)))))), p_648->g_44, p_648) , p_105) ^ p_648->g_115.f1), p_105, l_135, p_648->g_33.w, p_648);
    (*l_133) |= ((VECTOR(int32_t, 2))(l_174.wy)).lo;
    p_648->g_176--;
    return p_105;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_134 p_648->g_2 p_648->g_146 p_648->g_154 p_648->g_30 p_648->l_comm_values p_648->g_115.f4 p_648->g_115.f0 p_648->g_115.f3 p_648->g_52 p_648->g_44 p_648->g_170
 * writes: p_648->g_134 p_648->g_114 p_648->g_115.f4 p_648->g_171
 */
int32_t * func_106(uint16_t  p_107, int16_t  p_108, uint16_t * p_109, int64_t  p_110, struct S1 * p_648)
{ /* block id: 48 */
    int32_t **l_136 = (void*)0;
    int32_t *l_139 = &p_648->g_44;
    int32_t **l_138 = &l_139;
    uint64_t *l_148 = &p_648->g_115.f0;
    VECTOR(int64_t, 2) l_156 = (VECTOR(int64_t, 2))(9L, 0x2F734E6BA9F1CB05L);
    int i;
    (*l_138) = &p_648->g_2[0][6][0];
    for (p_648->g_134 = 0; (p_648->g_134 > (-16)); --p_648->g_134)
    { /* block id: 52 */
        uint64_t *l_147 = &p_648->g_37[7];
        uint64_t **l_149 = &l_148;
        VECTOR(int64_t, 2) l_155 = (VECTOR(int64_t, 2))((-1L), 0x0A1D1280F0832748L);
        int32_t *l_159 = &p_648->g_114;
        int32_t *l_168 = &p_648->g_115.f4;
        int16_t *l_169 = (void*)0;
        int i;
        (*p_648->g_170) = (((**l_138) < (((safe_div_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(p_648->g_146.zzyyzyyzyxzzzyyz)).s3, (l_147 != ((*l_149) = l_148)))) >= 5UL), ((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(p_648->g_154.wyxw)).zzxxzwyw)).odd)).yxyzzzxx)).s25, ((VECTOR(int64_t, 4))(l_155.xxxy)).hi))).hi, ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 2))(0x48A6248362037651L, 0x0433D11F6D7AAF5FL)), ((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 2))(l_156.xy)).yxxxxxyy, (int64_t)(safe_div_func_uint32_t_u_u(((((*l_159) = (p_648->g_30.s6 < p_110)) && (**l_138)) || (((safe_mod_func_uint8_t_u_u(p_648->l_comm_values[(safe_mod_func_uint32_t_u_u(p_648->tid, 45))], (safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((((*l_168) |= (safe_mod_func_int32_t_s_s(1L, FAKE_DIVERGE(p_648->group_0_offset, get_group_id(0), 10)))) , l_169) != (void*)0), p_107)), p_108)))) | p_110) >= p_648->g_115.f0)), (*l_139)))))).s33, ((VECTOR(int64_t, 2))(0x28829C22D08AE745L))))).lo)) , FAKE_DIVERGE(p_648->global_1_offset, get_global_id(1), 10)), p_110)) , 1L))) <= p_648->g_115.f3) != p_108)) , (*p_648->g_52));
    }
    (*l_138) = (*l_138);
    return &p_648->g_2[5][4][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_114 p_648->g_115
 * writes: p_648->g_114
 */
int16_t ** func_111(int16_t  p_112, struct S1 * p_648)
{ /* block id: 36 */
    int32_t *l_113 = &p_648->g_114;
    int16_t **l_116 = &p_648->g_35;
    int i, j;
    (*l_113) ^= 0x56848F5EL;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_648->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 45)), permutations[(safe_mod_func_uint32_t_u_u((&p_648->g_37[2] == (p_648->g_115 , (void*)0)), 10))][(safe_mod_func_uint32_t_u_u(p_648->tid, 45))]));
    return l_116;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[76];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 76; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[76];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 76; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[45];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 45; i++)
            l_comm_values[i] = 1;
    struct S1 c_649;
    struct S1* p_648 = &c_649;
    struct S1 c_650 = {
        {{{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L}},{{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L}},{{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L}},{{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L}},{{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L}},{{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L}},{{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L}},{{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L},{(-1L),0x60E704F3L,0x621EC218L}}}, // p_648->g_2
        0x937BBCEC63F78CAFL, // p_648->g_29
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 2L), 2L), 2L, 0L, 2L, (VECTOR(int16_t, 2))(0L, 2L), (VECTOR(int16_t, 2))(0L, 2L), 0L, 2L, 0L, 2L), // p_648->g_30
        (VECTOR(uint16_t, 4))(0x38B4L, (VECTOR(uint16_t, 2))(0x38B4L, 0x8915L), 0x8915L), // p_648->g_33
        (void*)0, // p_648->g_34
        (void*)0, // p_648->g_35
        {0x8D4AE9C2412408B3L,0x8D4AE9C2412408B3L,0x8D4AE9C2412408B3L,0x8D4AE9C2412408B3L,0x8D4AE9C2412408B3L,0x8D4AE9C2412408B3L,0x8D4AE9C2412408B3L,0x8D4AE9C2412408B3L}, // p_648->g_37
        0L, // p_648->g_44
        (void*)0, // p_648->g_51
        &p_648->g_44, // p_648->g_52
        (VECTOR(uint64_t, 16))(0x421085DA103C12D2L, (VECTOR(uint64_t, 4))(0x421085DA103C12D2L, (VECTOR(uint64_t, 2))(0x421085DA103C12D2L, 0x583F02998B4E4A0AL), 0x583F02998B4E4A0AL), 0x583F02998B4E4A0AL, 0x421085DA103C12D2L, 0x583F02998B4E4A0AL, (VECTOR(uint64_t, 2))(0x421085DA103C12D2L, 0x583F02998B4E4A0AL), (VECTOR(uint64_t, 2))(0x421085DA103C12D2L, 0x583F02998B4E4A0AL), 0x421085DA103C12D2L, 0x583F02998B4E4A0AL, 0x421085DA103C12D2L, 0x583F02998B4E4A0AL), // p_648->g_78
        {0x81597F86L}, // p_648->g_87
        (-10L), // p_648->g_114
        {5UL,4294967293UL,0x6A9E613BL,4L,0x41F7DF86L,0x15D6L,0x4C50L}, // p_648->g_115
        {&p_648->g_35,&p_648->g_35}, // p_648->g_117
        0L, // p_648->g_134
        (void*)0, // p_648->g_137
        (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 0UL), 0UL), // p_648->g_146
        (VECTOR(int64_t, 4))(0x3D79527A06FA74B5L, (VECTOR(int64_t, 2))(0x3D79527A06FA74B5L, (-2L)), (-2L)), // p_648->g_154
        1L, // p_648->g_171
        &p_648->g_171, // p_648->g_170
        0x77F9590DL, // p_648->g_176
        (VECTOR(uint64_t, 2))(1UL, 18446744073709551615UL), // p_648->g_189
        (VECTOR(uint64_t, 16))(18446744073709551610UL, (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL), 18446744073709551610UL, 18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL), // p_648->g_192
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x1CL), 0x1CL), 0x1CL, (-1L), 0x1CL, (VECTOR(int8_t, 2))((-1L), 0x1CL), (VECTOR(int8_t, 2))((-1L), 0x1CL), (-1L), 0x1CL, (-1L), 0x1CL), // p_648->g_210
        (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 5UL), 5UL), 5UL, 18446744073709551615UL, 5UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 5UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 5UL), 18446744073709551615UL, 5UL, 18446744073709551615UL, 5UL), // p_648->g_211
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x09C864BF71449B13L), 0x09C864BF71449B13L), // p_648->g_216
        (VECTOR(uint32_t, 2))(0xBD18F26EL, 0x41E80539L), // p_648->g_234
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x8563B06DL), 0x8563B06DL), 0x8563B06DL, 1UL, 0x8563B06DL, (VECTOR(uint32_t, 2))(1UL, 0x8563B06DL), (VECTOR(uint32_t, 2))(1UL, 0x8563B06DL), 1UL, 0x8563B06DL, 1UL, 0x8563B06DL), // p_648->g_235
        (VECTOR(uint16_t, 8))(0x36C0L, (VECTOR(uint16_t, 4))(0x36C0L, (VECTOR(uint16_t, 2))(0x36C0L, 0UL), 0UL), 0UL, 0x36C0L, 0UL), // p_648->g_236
        (VECTOR(uint16_t, 4))(0x4F8AL, (VECTOR(uint16_t, 2))(0x4F8AL, 3UL), 3UL), // p_648->g_237
        &p_648->g_114, // p_648->g_251
        {&p_648->g_251,&p_648->g_251,&p_648->g_251,&p_648->g_251}, // p_648->g_250
        0xA8F50893L, // p_648->g_253
        {0x6B503DA074F931C7L,0x1FFB4F04L,0L,0x0839B853AA252B81L,1L,65535UL,0x4D78L}, // p_648->g_254
        (void*)0, // p_648->g_255
        (-1L), // p_648->g_257
        (void*)0, // p_648->g_258
        {{{{0xC5D19D0CDD3882ABL,0x105E8360L,0x7DCE5B59L,0x5E65880C793F0576L,0x49C70594L,1UL,0x626BL},{0UL,0UL,0x082D6A5DL,-1L,0x65F99B59L,65535UL,65526UL},{18446744073709551614UL,4294967295UL,0L,0x2D527B4181C599C6L,4L,0xCD60L,0xA393L}},{{0xC5D19D0CDD3882ABL,0x105E8360L,0x7DCE5B59L,0x5E65880C793F0576L,0x49C70594L,1UL,0x626BL},{0UL,0UL,0x082D6A5DL,-1L,0x65F99B59L,65535UL,65526UL},{18446744073709551614UL,4294967295UL,0L,0x2D527B4181C599C6L,4L,0xCD60L,0xA393L}},{{0xC5D19D0CDD3882ABL,0x105E8360L,0x7DCE5B59L,0x5E65880C793F0576L,0x49C70594L,1UL,0x626BL},{0UL,0UL,0x082D6A5DL,-1L,0x65F99B59L,65535UL,65526UL},{18446744073709551614UL,4294967295UL,0L,0x2D527B4181C599C6L,4L,0xCD60L,0xA393L}},{{0xC5D19D0CDD3882ABL,0x105E8360L,0x7DCE5B59L,0x5E65880C793F0576L,0x49C70594L,1UL,0x626BL},{0UL,0UL,0x082D6A5DL,-1L,0x65F99B59L,65535UL,65526UL},{18446744073709551614UL,4294967295UL,0L,0x2D527B4181C599C6L,4L,0xCD60L,0xA393L}}},{{{0xC5D19D0CDD3882ABL,0x105E8360L,0x7DCE5B59L,0x5E65880C793F0576L,0x49C70594L,1UL,0x626BL},{0UL,0UL,0x082D6A5DL,-1L,0x65F99B59L,65535UL,65526UL},{18446744073709551614UL,4294967295UL,0L,0x2D527B4181C599C6L,4L,0xCD60L,0xA393L}},{{0xC5D19D0CDD3882ABL,0x105E8360L,0x7DCE5B59L,0x5E65880C793F0576L,0x49C70594L,1UL,0x626BL},{0UL,0UL,0x082D6A5DL,-1L,0x65F99B59L,65535UL,65526UL},{18446744073709551614UL,4294967295UL,0L,0x2D527B4181C599C6L,4L,0xCD60L,0xA393L}},{{0xC5D19D0CDD3882ABL,0x105E8360L,0x7DCE5B59L,0x5E65880C793F0576L,0x49C70594L,1UL,0x626BL},{0UL,0UL,0x082D6A5DL,-1L,0x65F99B59L,65535UL,65526UL},{18446744073709551614UL,4294967295UL,0L,0x2D527B4181C599C6L,4L,0xCD60L,0xA393L}},{{0xC5D19D0CDD3882ABL,0x105E8360L,0x7DCE5B59L,0x5E65880C793F0576L,0x49C70594L,1UL,0x626BL},{0UL,0UL,0x082D6A5DL,-1L,0x65F99B59L,65535UL,65526UL},{18446744073709551614UL,4294967295UL,0L,0x2D527B4181C599C6L,4L,0xCD60L,0xA393L}}},{{{0xC5D19D0CDD3882ABL,0x105E8360L,0x7DCE5B59L,0x5E65880C793F0576L,0x49C70594L,1UL,0x626BL},{0UL,0UL,0x082D6A5DL,-1L,0x65F99B59L,65535UL,65526UL},{18446744073709551614UL,4294967295UL,0L,0x2D527B4181C599C6L,4L,0xCD60L,0xA393L}},{{0xC5D19D0CDD3882ABL,0x105E8360L,0x7DCE5B59L,0x5E65880C793F0576L,0x49C70594L,1UL,0x626BL},{0UL,0UL,0x082D6A5DL,-1L,0x65F99B59L,65535UL,65526UL},{18446744073709551614UL,4294967295UL,0L,0x2D527B4181C599C6L,4L,0xCD60L,0xA393L}},{{0xC5D19D0CDD3882ABL,0x105E8360L,0x7DCE5B59L,0x5E65880C793F0576L,0x49C70594L,1UL,0x626BL},{0UL,0UL,0x082D6A5DL,-1L,0x65F99B59L,65535UL,65526UL},{18446744073709551614UL,4294967295UL,0L,0x2D527B4181C599C6L,4L,0xCD60L,0xA393L}},{{0xC5D19D0CDD3882ABL,0x105E8360L,0x7DCE5B59L,0x5E65880C793F0576L,0x49C70594L,1UL,0x626BL},{0UL,0UL,0x082D6A5DL,-1L,0x65F99B59L,65535UL,65526UL},{18446744073709551614UL,4294967295UL,0L,0x2D527B4181C599C6L,4L,0xCD60L,0xA393L}}}}, // p_648->g_401
        {{{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}}},{{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}}},{{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}}},{{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}}},{{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}}},{{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}}},{{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}},{{0x7E877C398E31EE4CL,0x1D508A92L,0x399A8D2DL,0x5E8CBEC45E6D6BADL,0x2CE47DB1L,0x2ACAL,65527UL},{18446744073709551613UL,0x3206B796L,0x6C2E1412L,0x42887185A8F3726CL,0x30923F2EL,65527UL,65531UL},{0x2DD845A1B139F3F8L,4294967288UL,5L,1L,0x53A99D00L,0x3823L,0x9C4AL},{0UL,0UL,0x51D049DDL,0x30D55B9261CA09BEL,0x76369628L,65526UL,0x9EECL}}}}, // p_648->g_402
        4294967295UL, // p_648->g_428
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), // p_648->g_576
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x356A09C9L), 0x356A09C9L), // p_648->g_577
        (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0L), 0L), // p_648->g_587
        (VECTOR(uint16_t, 2))(5UL, 5UL), // p_648->g_626
        (void*)0, // p_648->g_634
        &p_648->g_2[6][4][2], // p_648->g_645
        {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}}, // p_648->g_646
        0, // p_648->v_collective
        sequence_input[get_global_id(0)], // p_648->global_0_offset
        sequence_input[get_global_id(1)], // p_648->global_1_offset
        sequence_input[get_global_id(2)], // p_648->global_2_offset
        sequence_input[get_local_id(0)], // p_648->local_0_offset
        sequence_input[get_local_id(1)], // p_648->local_1_offset
        sequence_input[get_local_id(2)], // p_648->local_2_offset
        sequence_input[get_group_id(0)], // p_648->group_0_offset
        sequence_input[get_group_id(1)], // p_648->group_1_offset
        sequence_input[get_group_id(2)], // p_648->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 45)), permutations[0][get_linear_local_id()])), // p_648->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_649 = c_650;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_648);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_648->g_2[i][j][k], "p_648->g_2[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_648->g_29, "p_648->g_29", print_hash_value);
    transparent_crc(p_648->g_30.s0, "p_648->g_30.s0", print_hash_value);
    transparent_crc(p_648->g_30.s1, "p_648->g_30.s1", print_hash_value);
    transparent_crc(p_648->g_30.s2, "p_648->g_30.s2", print_hash_value);
    transparent_crc(p_648->g_30.s3, "p_648->g_30.s3", print_hash_value);
    transparent_crc(p_648->g_30.s4, "p_648->g_30.s4", print_hash_value);
    transparent_crc(p_648->g_30.s5, "p_648->g_30.s5", print_hash_value);
    transparent_crc(p_648->g_30.s6, "p_648->g_30.s6", print_hash_value);
    transparent_crc(p_648->g_30.s7, "p_648->g_30.s7", print_hash_value);
    transparent_crc(p_648->g_30.s8, "p_648->g_30.s8", print_hash_value);
    transparent_crc(p_648->g_30.s9, "p_648->g_30.s9", print_hash_value);
    transparent_crc(p_648->g_30.sa, "p_648->g_30.sa", print_hash_value);
    transparent_crc(p_648->g_30.sb, "p_648->g_30.sb", print_hash_value);
    transparent_crc(p_648->g_30.sc, "p_648->g_30.sc", print_hash_value);
    transparent_crc(p_648->g_30.sd, "p_648->g_30.sd", print_hash_value);
    transparent_crc(p_648->g_30.se, "p_648->g_30.se", print_hash_value);
    transparent_crc(p_648->g_30.sf, "p_648->g_30.sf", print_hash_value);
    transparent_crc(p_648->g_33.x, "p_648->g_33.x", print_hash_value);
    transparent_crc(p_648->g_33.y, "p_648->g_33.y", print_hash_value);
    transparent_crc(p_648->g_33.z, "p_648->g_33.z", print_hash_value);
    transparent_crc(p_648->g_33.w, "p_648->g_33.w", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_648->g_37[i], "p_648->g_37[i]", print_hash_value);

    }
    transparent_crc(p_648->g_44, "p_648->g_44", print_hash_value);
    transparent_crc(p_648->g_78.s0, "p_648->g_78.s0", print_hash_value);
    transparent_crc(p_648->g_78.s1, "p_648->g_78.s1", print_hash_value);
    transparent_crc(p_648->g_78.s2, "p_648->g_78.s2", print_hash_value);
    transparent_crc(p_648->g_78.s3, "p_648->g_78.s3", print_hash_value);
    transparent_crc(p_648->g_78.s4, "p_648->g_78.s4", print_hash_value);
    transparent_crc(p_648->g_78.s5, "p_648->g_78.s5", print_hash_value);
    transparent_crc(p_648->g_78.s6, "p_648->g_78.s6", print_hash_value);
    transparent_crc(p_648->g_78.s7, "p_648->g_78.s7", print_hash_value);
    transparent_crc(p_648->g_78.s8, "p_648->g_78.s8", print_hash_value);
    transparent_crc(p_648->g_78.s9, "p_648->g_78.s9", print_hash_value);
    transparent_crc(p_648->g_78.sa, "p_648->g_78.sa", print_hash_value);
    transparent_crc(p_648->g_78.sb, "p_648->g_78.sb", print_hash_value);
    transparent_crc(p_648->g_78.sc, "p_648->g_78.sc", print_hash_value);
    transparent_crc(p_648->g_78.sd, "p_648->g_78.sd", print_hash_value);
    transparent_crc(p_648->g_78.se, "p_648->g_78.se", print_hash_value);
    transparent_crc(p_648->g_78.sf, "p_648->g_78.sf", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_648->g_87[i], "p_648->g_87[i]", print_hash_value);

    }
    transparent_crc(p_648->g_114, "p_648->g_114", print_hash_value);
    transparent_crc(p_648->g_115.f0, "p_648->g_115.f0", print_hash_value);
    transparent_crc(p_648->g_115.f1, "p_648->g_115.f1", print_hash_value);
    transparent_crc(p_648->g_115.f2, "p_648->g_115.f2", print_hash_value);
    transparent_crc(p_648->g_115.f3, "p_648->g_115.f3", print_hash_value);
    transparent_crc(p_648->g_115.f4, "p_648->g_115.f4", print_hash_value);
    transparent_crc(p_648->g_115.f5, "p_648->g_115.f5", print_hash_value);
    transparent_crc(p_648->g_115.f6, "p_648->g_115.f6", print_hash_value);
    transparent_crc(p_648->g_134, "p_648->g_134", print_hash_value);
    transparent_crc(p_648->g_146.x, "p_648->g_146.x", print_hash_value);
    transparent_crc(p_648->g_146.y, "p_648->g_146.y", print_hash_value);
    transparent_crc(p_648->g_146.z, "p_648->g_146.z", print_hash_value);
    transparent_crc(p_648->g_146.w, "p_648->g_146.w", print_hash_value);
    transparent_crc(p_648->g_154.x, "p_648->g_154.x", print_hash_value);
    transparent_crc(p_648->g_154.y, "p_648->g_154.y", print_hash_value);
    transparent_crc(p_648->g_154.z, "p_648->g_154.z", print_hash_value);
    transparent_crc(p_648->g_154.w, "p_648->g_154.w", print_hash_value);
    transparent_crc(p_648->g_171, "p_648->g_171", print_hash_value);
    transparent_crc(p_648->g_176, "p_648->g_176", print_hash_value);
    transparent_crc(p_648->g_189.x, "p_648->g_189.x", print_hash_value);
    transparent_crc(p_648->g_189.y, "p_648->g_189.y", print_hash_value);
    transparent_crc(p_648->g_192.s0, "p_648->g_192.s0", print_hash_value);
    transparent_crc(p_648->g_192.s1, "p_648->g_192.s1", print_hash_value);
    transparent_crc(p_648->g_192.s2, "p_648->g_192.s2", print_hash_value);
    transparent_crc(p_648->g_192.s3, "p_648->g_192.s3", print_hash_value);
    transparent_crc(p_648->g_192.s4, "p_648->g_192.s4", print_hash_value);
    transparent_crc(p_648->g_192.s5, "p_648->g_192.s5", print_hash_value);
    transparent_crc(p_648->g_192.s6, "p_648->g_192.s6", print_hash_value);
    transparent_crc(p_648->g_192.s7, "p_648->g_192.s7", print_hash_value);
    transparent_crc(p_648->g_192.s8, "p_648->g_192.s8", print_hash_value);
    transparent_crc(p_648->g_192.s9, "p_648->g_192.s9", print_hash_value);
    transparent_crc(p_648->g_192.sa, "p_648->g_192.sa", print_hash_value);
    transparent_crc(p_648->g_192.sb, "p_648->g_192.sb", print_hash_value);
    transparent_crc(p_648->g_192.sc, "p_648->g_192.sc", print_hash_value);
    transparent_crc(p_648->g_192.sd, "p_648->g_192.sd", print_hash_value);
    transparent_crc(p_648->g_192.se, "p_648->g_192.se", print_hash_value);
    transparent_crc(p_648->g_192.sf, "p_648->g_192.sf", print_hash_value);
    transparent_crc(p_648->g_210.s0, "p_648->g_210.s0", print_hash_value);
    transparent_crc(p_648->g_210.s1, "p_648->g_210.s1", print_hash_value);
    transparent_crc(p_648->g_210.s2, "p_648->g_210.s2", print_hash_value);
    transparent_crc(p_648->g_210.s3, "p_648->g_210.s3", print_hash_value);
    transparent_crc(p_648->g_210.s4, "p_648->g_210.s4", print_hash_value);
    transparent_crc(p_648->g_210.s5, "p_648->g_210.s5", print_hash_value);
    transparent_crc(p_648->g_210.s6, "p_648->g_210.s6", print_hash_value);
    transparent_crc(p_648->g_210.s7, "p_648->g_210.s7", print_hash_value);
    transparent_crc(p_648->g_210.s8, "p_648->g_210.s8", print_hash_value);
    transparent_crc(p_648->g_210.s9, "p_648->g_210.s9", print_hash_value);
    transparent_crc(p_648->g_210.sa, "p_648->g_210.sa", print_hash_value);
    transparent_crc(p_648->g_210.sb, "p_648->g_210.sb", print_hash_value);
    transparent_crc(p_648->g_210.sc, "p_648->g_210.sc", print_hash_value);
    transparent_crc(p_648->g_210.sd, "p_648->g_210.sd", print_hash_value);
    transparent_crc(p_648->g_210.se, "p_648->g_210.se", print_hash_value);
    transparent_crc(p_648->g_210.sf, "p_648->g_210.sf", print_hash_value);
    transparent_crc(p_648->g_211.s0, "p_648->g_211.s0", print_hash_value);
    transparent_crc(p_648->g_211.s1, "p_648->g_211.s1", print_hash_value);
    transparent_crc(p_648->g_211.s2, "p_648->g_211.s2", print_hash_value);
    transparent_crc(p_648->g_211.s3, "p_648->g_211.s3", print_hash_value);
    transparent_crc(p_648->g_211.s4, "p_648->g_211.s4", print_hash_value);
    transparent_crc(p_648->g_211.s5, "p_648->g_211.s5", print_hash_value);
    transparent_crc(p_648->g_211.s6, "p_648->g_211.s6", print_hash_value);
    transparent_crc(p_648->g_211.s7, "p_648->g_211.s7", print_hash_value);
    transparent_crc(p_648->g_211.s8, "p_648->g_211.s8", print_hash_value);
    transparent_crc(p_648->g_211.s9, "p_648->g_211.s9", print_hash_value);
    transparent_crc(p_648->g_211.sa, "p_648->g_211.sa", print_hash_value);
    transparent_crc(p_648->g_211.sb, "p_648->g_211.sb", print_hash_value);
    transparent_crc(p_648->g_211.sc, "p_648->g_211.sc", print_hash_value);
    transparent_crc(p_648->g_211.sd, "p_648->g_211.sd", print_hash_value);
    transparent_crc(p_648->g_211.se, "p_648->g_211.se", print_hash_value);
    transparent_crc(p_648->g_211.sf, "p_648->g_211.sf", print_hash_value);
    transparent_crc(p_648->g_216.x, "p_648->g_216.x", print_hash_value);
    transparent_crc(p_648->g_216.y, "p_648->g_216.y", print_hash_value);
    transparent_crc(p_648->g_216.z, "p_648->g_216.z", print_hash_value);
    transparent_crc(p_648->g_216.w, "p_648->g_216.w", print_hash_value);
    transparent_crc(p_648->g_234.x, "p_648->g_234.x", print_hash_value);
    transparent_crc(p_648->g_234.y, "p_648->g_234.y", print_hash_value);
    transparent_crc(p_648->g_235.s0, "p_648->g_235.s0", print_hash_value);
    transparent_crc(p_648->g_235.s1, "p_648->g_235.s1", print_hash_value);
    transparent_crc(p_648->g_235.s2, "p_648->g_235.s2", print_hash_value);
    transparent_crc(p_648->g_235.s3, "p_648->g_235.s3", print_hash_value);
    transparent_crc(p_648->g_235.s4, "p_648->g_235.s4", print_hash_value);
    transparent_crc(p_648->g_235.s5, "p_648->g_235.s5", print_hash_value);
    transparent_crc(p_648->g_235.s6, "p_648->g_235.s6", print_hash_value);
    transparent_crc(p_648->g_235.s7, "p_648->g_235.s7", print_hash_value);
    transparent_crc(p_648->g_235.s8, "p_648->g_235.s8", print_hash_value);
    transparent_crc(p_648->g_235.s9, "p_648->g_235.s9", print_hash_value);
    transparent_crc(p_648->g_235.sa, "p_648->g_235.sa", print_hash_value);
    transparent_crc(p_648->g_235.sb, "p_648->g_235.sb", print_hash_value);
    transparent_crc(p_648->g_235.sc, "p_648->g_235.sc", print_hash_value);
    transparent_crc(p_648->g_235.sd, "p_648->g_235.sd", print_hash_value);
    transparent_crc(p_648->g_235.se, "p_648->g_235.se", print_hash_value);
    transparent_crc(p_648->g_235.sf, "p_648->g_235.sf", print_hash_value);
    transparent_crc(p_648->g_236.s0, "p_648->g_236.s0", print_hash_value);
    transparent_crc(p_648->g_236.s1, "p_648->g_236.s1", print_hash_value);
    transparent_crc(p_648->g_236.s2, "p_648->g_236.s2", print_hash_value);
    transparent_crc(p_648->g_236.s3, "p_648->g_236.s3", print_hash_value);
    transparent_crc(p_648->g_236.s4, "p_648->g_236.s4", print_hash_value);
    transparent_crc(p_648->g_236.s5, "p_648->g_236.s5", print_hash_value);
    transparent_crc(p_648->g_236.s6, "p_648->g_236.s6", print_hash_value);
    transparent_crc(p_648->g_236.s7, "p_648->g_236.s7", print_hash_value);
    transparent_crc(p_648->g_237.x, "p_648->g_237.x", print_hash_value);
    transparent_crc(p_648->g_237.y, "p_648->g_237.y", print_hash_value);
    transparent_crc(p_648->g_237.z, "p_648->g_237.z", print_hash_value);
    transparent_crc(p_648->g_237.w, "p_648->g_237.w", print_hash_value);
    transparent_crc(p_648->g_253, "p_648->g_253", print_hash_value);
    transparent_crc(p_648->g_254.f0, "p_648->g_254.f0", print_hash_value);
    transparent_crc(p_648->g_254.f1, "p_648->g_254.f1", print_hash_value);
    transparent_crc(p_648->g_254.f2, "p_648->g_254.f2", print_hash_value);
    transparent_crc(p_648->g_254.f3, "p_648->g_254.f3", print_hash_value);
    transparent_crc(p_648->g_254.f4, "p_648->g_254.f4", print_hash_value);
    transparent_crc(p_648->g_254.f5, "p_648->g_254.f5", print_hash_value);
    transparent_crc(p_648->g_254.f6, "p_648->g_254.f6", print_hash_value);
    transparent_crc(p_648->g_257, "p_648->g_257", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_648->g_401[i][j][k].f0, "p_648->g_401[i][j][k].f0", print_hash_value);
                transparent_crc(p_648->g_401[i][j][k].f1, "p_648->g_401[i][j][k].f1", print_hash_value);
                transparent_crc(p_648->g_401[i][j][k].f2, "p_648->g_401[i][j][k].f2", print_hash_value);
                transparent_crc(p_648->g_401[i][j][k].f3, "p_648->g_401[i][j][k].f3", print_hash_value);
                transparent_crc(p_648->g_401[i][j][k].f4, "p_648->g_401[i][j][k].f4", print_hash_value);
                transparent_crc(p_648->g_401[i][j][k].f5, "p_648->g_401[i][j][k].f5", print_hash_value);
                transparent_crc(p_648->g_401[i][j][k].f6, "p_648->g_401[i][j][k].f6", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_648->g_402[i][j][k].f0, "p_648->g_402[i][j][k].f0", print_hash_value);
                transparent_crc(p_648->g_402[i][j][k].f1, "p_648->g_402[i][j][k].f1", print_hash_value);
                transparent_crc(p_648->g_402[i][j][k].f2, "p_648->g_402[i][j][k].f2", print_hash_value);
                transparent_crc(p_648->g_402[i][j][k].f3, "p_648->g_402[i][j][k].f3", print_hash_value);
                transparent_crc(p_648->g_402[i][j][k].f4, "p_648->g_402[i][j][k].f4", print_hash_value);
                transparent_crc(p_648->g_402[i][j][k].f5, "p_648->g_402[i][j][k].f5", print_hash_value);
                transparent_crc(p_648->g_402[i][j][k].f6, "p_648->g_402[i][j][k].f6", print_hash_value);

            }
        }
    }
    transparent_crc(p_648->g_428, "p_648->g_428", print_hash_value);
    transparent_crc(p_648->g_576.x, "p_648->g_576.x", print_hash_value);
    transparent_crc(p_648->g_576.y, "p_648->g_576.y", print_hash_value);
    transparent_crc(p_648->g_576.z, "p_648->g_576.z", print_hash_value);
    transparent_crc(p_648->g_576.w, "p_648->g_576.w", print_hash_value);
    transparent_crc(p_648->g_577.x, "p_648->g_577.x", print_hash_value);
    transparent_crc(p_648->g_577.y, "p_648->g_577.y", print_hash_value);
    transparent_crc(p_648->g_577.z, "p_648->g_577.z", print_hash_value);
    transparent_crc(p_648->g_577.w, "p_648->g_577.w", print_hash_value);
    transparent_crc(p_648->g_587.x, "p_648->g_587.x", print_hash_value);
    transparent_crc(p_648->g_587.y, "p_648->g_587.y", print_hash_value);
    transparent_crc(p_648->g_587.z, "p_648->g_587.z", print_hash_value);
    transparent_crc(p_648->g_587.w, "p_648->g_587.w", print_hash_value);
    transparent_crc(p_648->g_626.x, "p_648->g_626.x", print_hash_value);
    transparent_crc(p_648->g_626.y, "p_648->g_626.y", print_hash_value);
    transparent_crc(p_648->v_collective, "p_648->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 76; i++)
            transparent_crc(p_648->l_special_values[i], "p_648->l_special_values[i]", print_hash_value);
    transparent_crc(p_648->l_comm_values[get_linear_local_id()], "p_648->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_648->g_comm_values[get_linear_group_id() * 45 + get_linear_local_id()], "p_648->g_comm_values[get_linear_group_id() * 45 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
