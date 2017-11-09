// --atomics 8 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 67,37,3 -l 67,1,1
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

__constant uint32_t permutations[10][67] = {
{5,41,43,6,34,55,24,51,11,65,58,32,1,49,25,48,60,44,21,50,61,12,7,2,18,57,27,53,22,63,36,46,15,28,40,4,0,42,54,19,10,39,37,26,62,52,9,20,33,56,38,16,59,23,30,31,13,66,47,64,3,35,14,45,29,17,8}, // permutation 0
{42,14,38,36,65,15,6,51,63,52,12,43,19,48,8,20,28,40,49,41,39,7,33,9,13,32,29,21,17,10,46,54,1,59,53,58,27,64,16,62,18,35,37,47,60,4,56,61,3,23,2,34,0,5,57,66,31,26,25,30,24,22,55,50,44,45,11}, // permutation 1
{21,35,63,29,9,7,26,47,27,40,15,24,34,30,36,55,16,38,11,64,66,62,50,54,46,3,14,33,20,43,58,60,31,53,56,19,32,49,59,1,39,25,61,8,41,42,6,37,4,22,5,17,12,0,28,10,65,57,48,44,2,13,52,45,51,23,18}, // permutation 2
{30,56,49,43,53,66,24,17,38,36,0,15,50,23,5,25,9,60,26,13,3,52,12,65,58,57,19,47,51,34,33,42,2,1,63,40,7,35,37,39,14,62,4,59,6,54,10,32,45,61,22,8,64,46,55,48,41,21,44,11,27,16,18,29,31,28,20}, // permutation 3
{33,24,26,38,51,41,18,52,17,22,64,23,30,53,19,43,57,66,11,37,12,61,16,56,2,48,47,15,54,9,6,59,10,3,65,45,49,63,27,7,42,60,46,36,28,44,31,34,13,32,35,39,25,21,62,1,58,50,4,8,5,14,0,20,55,29,40}, // permutation 4
{1,16,35,30,36,27,2,0,39,58,50,60,4,13,63,40,34,8,42,65,14,47,62,61,44,41,56,37,29,6,28,55,22,33,5,3,24,11,43,54,20,31,32,53,9,48,23,45,19,15,64,25,57,12,49,21,66,7,51,59,52,17,26,38,46,18,10}, // permutation 5
{49,25,37,1,3,12,54,57,8,2,19,39,45,59,31,13,7,66,33,62,14,11,16,44,35,61,64,30,17,43,28,10,4,6,34,38,0,22,52,42,40,46,36,26,47,20,29,63,56,41,55,23,21,50,60,48,15,53,58,51,18,9,32,27,65,5,24}, // permutation 6
{4,43,58,51,29,15,10,23,38,65,27,31,24,9,48,39,12,13,20,63,1,34,59,47,61,56,7,33,35,25,52,44,30,62,45,64,14,49,36,6,19,41,17,11,22,55,18,54,26,42,60,5,8,32,57,2,28,3,50,16,46,53,40,0,21,37,66}, // permutation 7
{38,35,34,14,66,55,18,46,17,30,64,41,16,23,24,50,2,26,15,52,21,36,59,49,1,12,63,39,53,43,9,40,51,5,48,33,0,45,7,29,25,32,37,6,42,54,10,8,19,58,11,20,31,62,47,22,60,13,57,4,28,65,61,44,3,27,56}, // permutation 8
{61,8,35,37,56,34,9,46,38,27,29,28,5,11,33,16,0,2,41,31,40,63,48,18,6,65,53,23,51,32,57,1,62,19,39,42,21,54,4,47,15,13,36,10,30,52,26,44,64,14,7,55,12,3,20,59,25,43,17,58,66,22,60,50,49,24,45} // permutation 9
};

// Seed: 776331736

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U1 {
   uint32_t  f0;
};

union U2 {
   volatile uint64_t  f0;
   volatile int32_t  f1;
   volatile int16_t  f2;
   int64_t  f3;
};

union U3 {
   uint64_t  f0;
};

struct S4 {
    VECTOR(int64_t, 4) g_4;
    uint8_t g_11;
    int32_t * volatile g_12;
    int32_t g_13;
    int32_t g_15;
    int32_t * volatile g_14[3][7];
    int32_t * volatile g_16;
    int32_t g_22;
    int32_t g_26;
    int16_t g_28;
    VECTOR(uint64_t, 2) g_69;
    volatile VECTOR(uint64_t, 2) g_71;
    VECTOR(uint64_t, 4) g_72;
    volatile union U2 g_79;
    union U1 g_85[8][3];
    volatile uint16_t g_93;
    int32_t *g_133;
    int32_t ** volatile g_132;
    int16_t g_177;
    uint16_t g_224;
    VECTOR(uint32_t, 2) g_231;
    int32_t **g_232;
    volatile int32_t g_237;
    volatile int32_t *g_236;
    volatile int32_t **g_235;
    int32_t * volatile g_241;
    int32_t ** volatile g_242;
    int32_t ** volatile g_243;
    volatile union U3 g_246;
    uint8_t g_251[9];
    uint8_t g_255;
    VECTOR(uint16_t, 16) g_263;
    VECTOR(uint16_t, 2) g_264;
    VECTOR(uint16_t, 16) g_265;
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
union U3  func_1(struct S4 * p_284);
int32_t * func_17(int32_t  p_18, uint64_t  p_19, int32_t  p_20, struct S4 * p_284);
union U1  func_35(int8_t  p_36, int32_t * p_37, union U1  p_38, struct S4 * p_284);
int32_t * func_39(uint32_t  p_40, int64_t  p_41, struct S4 * p_284);
int32_t * func_46(uint8_t  p_47, uint8_t  p_48, struct S4 * p_284);
int16_t * func_49(int32_t  p_50, struct S4 * p_284);
int32_t  func_51(uint8_t * p_52, int16_t  p_53, int16_t  p_54, union U1  p_55, uint32_t  p_56, struct S4 * p_284);
uint8_t * func_57(int32_t * p_58, int32_t  p_59, union U1  p_60, uint16_t  p_61, struct S4 * p_284);
int32_t * func_62(int8_t  p_63, uint8_t * p_64, int32_t * p_65, uint64_t  p_66, struct S4 * p_284);
int64_t  func_74(uint32_t  p_75, int32_t * p_76, int16_t * p_77, int32_t * p_78, struct S4 * p_284);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_284->l_comm_values p_284->g_4 p_284->g_comm_values p_284->g_16 p_284->g_28 p_284->g_22 p_284->g_26 p_284->g_13 p_284->g_69 p_284->g_71 p_284->g_72 p_284->g_79 p_284->g_85 p_284->g_93 p_284->g_15 p_284->g_85.f0 p_284->g_132 p_284->g_11 p_284->g_224 p_284->g_231 p_284->g_232 p_284->g_235 p_284->g_241 p_284->g_133 p_284->g_242 p_284->g_243 p_284->g_246 p_284->g_251 p_284->g_255 p_284->g_177 p_284->g_263 p_284->g_264 p_284->g_265
 * writes: p_284->g_11 p_284->g_13 p_284->g_15 p_284->g_22 p_284->g_28 p_284->g_93 p_284->g_26 p_284->g_133 p_284->g_224 p_284->g_232 p_284->g_251 p_284->g_255 p_284->l_comm_values
 */
union U3  func_1(struct S4 * p_284)
{ /* block id: 4 */
    uint16_t l_9[9] = {0x78F4L,0x78F4L,0x78F4L,0x78F4L,0x78F4L,0x78F4L,0x78F4L,0x78F4L,0x78F4L};
    int32_t *l_25 = &p_284->g_26;
    uint8_t *l_247 = &p_284->g_11;
    uint8_t *l_250 = &p_284->g_251[3];
    uint8_t *l_254 = &p_284->g_255;
    int64_t *l_260 = (void*)0;
    VECTOR(uint8_t, 2) l_266 = (VECTOR(uint8_t, 2))(0x5BL, 0xB5L);
    union U1 *l_267 = (void*)0;
    VECTOR(uint8_t, 2) l_268 = (VECTOR(uint8_t, 2))(6UL, 0UL);
    int32_t *l_273 = &p_284->g_15;
    int32_t l_279 = 0L;
    int32_t l_280[3];
    int i;
    for (i = 0; i < 3; i++)
        l_280[i] = 0x0539D021L;
    if (p_284->l_comm_values[(safe_mod_func_uint32_t_u_u(p_284->tid, 67))])
    { /* block id: 5 */
        uint8_t *l_10 = &p_284->g_11;
        p_284->g_13 = (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 4))(p_284->g_4.wxxx)).w, (p_284->g_comm_values[p_284->tid] , (safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_10) = l_9[2]), FAKE_DIVERGE(p_284->global_2_offset, get_global_id(2), 10))), 5L)))));
        (*p_284->g_16) = l_9[2];
    }
    else
    { /* block id: 9 */
        int32_t *l_21 = &p_284->g_22;
        int16_t *l_27 = &p_284->g_28;
        (*p_284->g_242) = func_17((l_9[2] , ((*l_21) = l_9[5])), (safe_mul_func_int16_t_s_s(0L, ((*l_27) ^= (((VECTOR(int16_t, 2))(0x5978L, 9L)).even ^ ((void*)0 == l_25))))), p_284->g_comm_values[p_284->tid], p_284);
    }
    (*p_284->g_243) = l_25;
    (*l_273) ^= (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(mad_hi(((VECTOR(uint16_t, 8))(0xC7C5L, ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 16))(65534UL, ((p_284->g_246 , (((*l_247) = l_9[0]) & l_9[7])) <= ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(0xB5L, 0xD1L, 0x07L, 0UL)).x, (((*l_254) ^= (++(*l_250))) , (((safe_mod_func_int64_t_s_s((p_284->l_comm_values[(safe_mod_func_uint32_t_u_u(p_284->tid, 67))] |= (safe_lshift_func_int16_t_s_s((p_284->g_177 < p_284->g_251[3]), 3))), (safe_lshift_func_uint16_t_u_u((((((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_284->g_263.s34b6)).zwwwywzy)).s1666532304234106))).s6 , ((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0UL, 0x293BL)).xyxy)).wwzywyxyyyxwxxyy, ((VECTOR(uint16_t, 2))(6UL, 1UL)).yxxyxyxyyxxyyyxy, ((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 2))(0x1538L, 0x695DL)).yyxxxxyxxyxxxyyx, ((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65528UL, 1UL)), 0xA14CL, 0xA972L)).xzxzyzxyzwxywwzw, ((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(p_284->g_264.yyxx)))).zyxwxzwwwwyzywxz, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_284->g_265.s40)).yxyyxyyy)).s3756325502365630)).saf)).xxyyxxxyxxxxyxyx)))))))))))).odd, ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(rhadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(0x1E32L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(0UL, 0xE8B5L)).yyxyxyxyyyyxyyyx)).s91)), 65532UL)).lo)).xyyyyyyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(65532UL, 0x162AL)), ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_266.yy)), 0xB4L, 0xFBL)), ((VECTOR(uint8_t, 16))(((void*)0 == l_267), ((VECTOR(uint8_t, 4))(l_268.xxyy)), (((safe_lshift_func_uint16_t_u_u(l_9[1], (safe_add_func_int64_t_s_s(l_268.x, l_9[2])))) >= l_9[2]) < 0x6405D193C588D4D5L), ((VECTOR(uint8_t, 4))(252UL)), GROUP_DIVERGE(1, 1), 247UL, 0x70L, 5UL, 249UL, 0UL)).s02b2))).xxxzxywyywyyxwyy, ((VECTOR(uint8_t, 16))(0x27L))))).s22))), 5UL, 0x18C4L)).xyywxzwx))).s04)).yyyy, ((VECTOR(uint16_t, 4))(0xDC09L)), ((VECTOR(uint16_t, 4))(0x8418L))))).ywzxwzxx))).s2) < 0x85B8L) && p_284->g_26), 3)))) <= l_268.y) <= p_284->g_85[1][0].f0)))) || l_268.x)), p_284->g_263.sc, ((VECTOR(uint16_t, 4))(0xDAA5L)), 0x1530L, ((VECTOR(uint16_t, 2))(0xF307L)), ((VECTOR(uint16_t, 4))(0x46E6L)), 0UL, 4UL)).s8b10, ((VECTOR(uint16_t, 4))(1UL))))), 0UL, 0x6237L, 0x8378L)).s21, ((VECTOR(uint16_t, 2))(0x8A86L)), ((VECTOR(uint16_t, 2))(0xDE98L))))).even, 7L));
    for (p_284->g_28 = 0; (p_284->g_28 != 1); p_284->g_28 = safe_add_func_int16_t_s_s(p_284->g_28, 9))
    { /* block id: 109 */
        int32_t *l_276 = &p_284->g_15;
        int32_t *l_277 = &p_284->g_15;
        int32_t *l_278[5];
        uint16_t l_281 = 0x65E1L;
        int i;
        for (i = 0; i < 5; i++)
            l_278[i] = (void*)0;
        --l_281;
    }
    return p_284->g_246;
}


/* ------------------------------------------ */
/* 
 * reads : p_284->g_22 p_284->g_26 p_284->g_13 p_284->g_69 p_284->g_71 p_284->g_72 p_284->g_79 p_284->g_comm_values p_284->l_comm_values p_284->g_85 p_284->g_93 p_284->g_15 p_284->g_85.f0 p_284->g_132 p_284->g_16 p_284->g_11 p_284->g_224 p_284->g_231 p_284->g_232 p_284->g_235 p_284->g_241 p_284->g_133
 * writes: p_284->g_93 p_284->g_15 p_284->g_28 p_284->g_11 p_284->g_26 p_284->g_133 p_284->g_224 p_284->g_232
 */
int32_t * func_17(int32_t  p_18, uint64_t  p_19, int32_t  p_20, struct S4 * p_284)
{ /* block id: 12 */
    int32_t *l_31 = &p_284->g_26;
    int32_t l_34 = 0x25C7E4DDL;
    VECTOR(uint16_t, 8) l_42 = (VECTOR(uint16_t, 8))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 65534UL), 65534UL), 65534UL, 7UL, 65534UL);
    VECTOR(uint16_t, 8) l_43 = (VECTOR(uint16_t, 8))(65528UL, (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 8UL), 8UL), 8UL, 65528UL, 8UL);
    union U1 l_216[5][2] = {{{0x7676AEA6L},{0x7676AEA6L}},{{0x7676AEA6L},{0x7676AEA6L}},{{0x7676AEA6L},{0x7676AEA6L}},{{0x7676AEA6L},{0x7676AEA6L}},{{0x7676AEA6L},{0x7676AEA6L}}};
    int i, j;
    (*p_284->g_241) = (safe_sub_func_uint64_t_u_u(((void*)0 != l_31), ((((safe_mod_func_uint8_t_u_u(l_34, ((((&p_284->g_11 == (void*)0) , 0L) , func_35(p_284->g_22, func_39(l_34, (((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 2))(0x43A1L, 0x510AL)), ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 8))(l_42.s04040424)).s6773100710013270, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_43.s7624475051112420)).sb146)).xyzzzwyw)).s2541325063632027))).se8))).hi , ((0x6FD9132E88240862L != 0x098934ECA6696B49L) <= p_284->g_26)), p_284), l_216[3][0], p_284)) , p_284->g_13))) > l_42.s7) ^ 0L) || p_284->g_72.x)));
    return (*p_284->g_132);
}


/* ------------------------------------------ */
/* 
 * reads : p_284->g_85 p_284->g_224 p_284->g_11 p_284->g_231 p_284->g_232 p_284->g_235 p_284->g_72
 * writes: p_284->g_224 p_284->g_232
 */
union U1  func_35(int8_t  p_36, int32_t * p_37, union U1  p_38, struct S4 * p_284)
{ /* block id: 92 */
    uint8_t *l_220 = &p_284->g_11;
    uint16_t *l_223 = &p_284->g_224;
    int8_t l_229[6] = {0x5CL,0x5CL,0x5CL,0x5CL,0x5CL,0x5CL};
    VECTOR(uint16_t, 2) l_230 = (VECTOR(uint16_t, 2))(0xD3B4L, 9UL);
    int32_t ***l_233 = (void*)0;
    int32_t ***l_234 = &p_284->g_232;
    int16_t *l_239 = &p_284->g_177;
    int16_t **l_238 = &l_239;
    int32_t l_240[4][10][4] = {{{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)}},{{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)}},{{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)}},{{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)},{(-1L),0x7FCF75B3L,0x1F33E96EL,(-2L)}}};
    int i, j, k;
    l_240[1][0][3] |= (((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(1L)), (((((l_220 == &p_284->g_11) == (safe_rshift_func_int8_t_s_s((p_284->g_85[1][0] , ((--(*l_223)) < (-1L))), (safe_add_func_int64_t_s_s((l_229[4] && ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_230.yyyxxxxyxxyyyxyx)).s2718)).yywywxzx)).s1240162346224244)).s4), (p_284->g_11 , ((((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),uint32_t,((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_284->g_231.xxyy)), (((((((*l_234) = p_284->g_232) == p_284->g_235) , l_230.y) > (-1L)) && 0x1AF5L) | (-5L)), ((VECTOR(uint32_t, 4))(0x0A36DBC4L)), 0xF655A909L, p_284->g_72.w, ((VECTOR(uint32_t, 4))(0x95F1330DL)), 0xFBF3483AL)).hi)))).lo, (uint32_t)l_230.y, (uint32_t)p_38.f0))).wxwxxwwz, ((VECTOR(uint32_t, 8))(4294967294UL))))).s4 && (-1L)) < p_38.f0))))))) >= p_38.f0) , l_238) != (void*)0))) , 7L) | p_38.f0);
    return p_284->g_85[1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_284->g_13 p_284->g_69 p_284->g_71 p_284->g_72 p_284->g_79 p_284->g_comm_values p_284->l_comm_values p_284->g_85 p_284->g_93 p_284->g_15 p_284->g_85.f0 p_284->g_132 p_284->g_16 p_284->g_11
 * writes: p_284->g_93 p_284->g_15 p_284->g_28 p_284->g_11 p_284->g_26 p_284->g_133
 */
int32_t * func_39(uint32_t  p_40, int64_t  p_41, struct S4 * p_284)
{ /* block id: 13 */
    VECTOR(uint64_t, 16) l_70 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 18446744073709551615UL, 18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551610UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551610UL), 18446744073709551615UL, 18446744073709551610UL, 18446744073709551615UL, 18446744073709551610UL);
    VECTOR(uint64_t, 16) l_73 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 9UL), 9UL), 9UL, 18446744073709551615UL, 9UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 9UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 9UL), 18446744073709551615UL, 9UL, 18446744073709551615UL, 9UL);
    int16_t *l_80 = &p_284->g_28;
    union U1 l_97 = {4294967295UL};
    int16_t **l_175 = &l_80;
    int16_t *l_176 = &p_284->g_177;
    int32_t *l_179 = &p_284->g_15;
    VECTOR(uint8_t, 2) l_198 = (VECTOR(uint8_t, 2))(0xB3L, 0xD9L);
    int32_t l_205 = 0x4D418067L;
    int32_t l_207 = 0L;
    int32_t l_208 = 0L;
    int32_t l_209 = 0x384E5074L;
    int32_t l_210 = 0x043CBF5EL;
    int32_t l_211 = 0x19DCE2DDL;
    int32_t l_212 = 0x4B92070DL;
    uint32_t l_213 = 1UL;
    int i;
    l_179 = ((p_40 && (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))((-1L), 0x4AL)).yxyyxxxxyxyxxyyx)).s7c03))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-1L), 0x79L)))).xxyx))).y, p_284->g_13))) , func_46(((p_40 <= 4294967286UL) ^ (&p_284->g_22 == &p_284->g_26)), (((*l_175) = func_49(func_51(func_57(func_62((safe_add_func_int64_t_s_s(0x640DD146F18880ABL, ((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 16))(p_284->g_69.yxyxyyyyyyxxyxxy)), ((VECTOR(uint64_t, 8))(l_70.s186f270a)).s5774026031076575))).sa291, ((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 16))(rotate(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(0xE0BD24A170516A45L, ((VECTOR(uint64_t, 2))(p_284->g_71.xy)), 0xA80087D4E0D3BD28L, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(4UL, 18446744073709551615UL)).xxyy)))).s46)).xxxxxyxxxxxyyyyx, ((VECTOR(uint64_t, 8))(p_284->g_72.yxwwxyyz)).s2715343306324205))).s6cd4, ((VECTOR(uint64_t, 16))(l_73.sa71b0facdc9ff6de)).s5f43)))))).lo, ((VECTOR(uint64_t, 16))((func_74((p_284->g_79 , ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(0x1DDE4E4CL, p_41, 0x71D4F065L, FAKE_DIVERGE(p_284->group_1_offset, get_group_id(1), 10), 0x3379BBDCL, ((VECTOR(uint32_t, 2))(0x33D8312EL)), 0x564F5E99L)).odd)).y), &p_284->g_22, l_80, &p_284->g_15, p_284) && 8L), p_284->g_comm_values[p_284->tid], p_284->l_comm_values[(safe_mod_func_uint32_t_u_u(p_284->tid, 67))], ((VECTOR(uint64_t, 2))(0x15FBE5B5757325A1L)), ((VECTOR(uint64_t, 4))(0x016E9852BC53350BL)), 1UL, 0xA30257628AE825D0L, ((VECTOR(uint64_t, 4))(0x07418113439BF9ABL)), 9UL)).sa4))).lo)), &p_284->g_11, &p_284->g_15, p_40, p_284), l_73.s4, p_284->g_85[1][0], l_73.s3, p_284), p_41, l_73.se, l_97, l_73.s9, p_284), p_284)) != l_176), p_284));
    for (p_41 = 0; (p_41 >= (-20)); p_41 = safe_sub_func_int32_t_s_s(p_41, 8))
    { /* block id: 81 */
        uint8_t *l_182 = &p_284->g_11;
        int32_t *l_183 = &p_284->g_22;
        union U1 l_184 = {0UL};
        int16_t **l_191 = (void*)0;
        int16_t ***l_192 = (void*)0;
        int16_t ***l_193 = (void*)0;
        int16_t ***l_194 = &l_175;
        VECTOR(uint16_t, 4) l_195 = (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 65528UL), 65528UL);
        uint8_t *l_202[4][8][1] = {{{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11}},{{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11}},{{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11}},{{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11},{&p_284->g_11}}};
        uint8_t **l_201 = &l_202[0][4][0];
        int i, j, k;
        (*l_179) = (((~(l_182 == ((*l_201) = func_57(l_183, p_41, l_184, (+(safe_sub_func_uint64_t_u_u(((p_284->g_85[1][0] , (safe_add_func_int32_t_s_s(((!(((((safe_sub_func_int16_t_s_s((((*l_194) = l_191) == (void*)0), ((~((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x71C7L, 0x1057L)).yyxx)).lo, ((VECTOR(uint16_t, 16))(l_195.zxzwxyxyyxwzyxwz)).s27))), (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(l_198.yyxyxyyy)).s0, 1)), (safe_sub_func_uint16_t_u_u(((&l_184 == (p_284->g_11 , (void*)0)) == 0x49B7L), p_40)), 0xAD3AL, 65535UL, 3UL, 0xAEC7L)).s2) == p_41))) && 0x6BBBC259659D1DFFL) != l_184.f0) , (*l_179)) > p_284->g_comm_values[p_284->tid])) <= l_195.x), FAKE_DIVERGE(p_284->global_0_offset, get_global_id(0), 10)))) || 0x9EL), 18446744073709551613UL))), p_284)))) < p_40) && 65535UL);
    }
    for (p_284->g_11 = 0; (p_284->g_11 != 10); p_284->g_11 = safe_add_func_uint16_t_u_u(p_284->g_11, 8))
    { /* block id: 88 */
        int32_t *l_206[5][10] = {{&p_284->g_15,&p_284->g_15,&l_205,&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,&l_205,&p_284->g_15,&p_284->g_15},{&p_284->g_15,&p_284->g_15,&l_205,&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,&l_205,&p_284->g_15,&p_284->g_15},{&p_284->g_15,&p_284->g_15,&l_205,&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,&l_205,&p_284->g_15,&p_284->g_15},{&p_284->g_15,&p_284->g_15,&l_205,&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,&l_205,&p_284->g_15,&p_284->g_15},{&p_284->g_15,&p_284->g_15,&l_205,&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,&l_205,&p_284->g_15,&p_284->g_15}};
        int i, j;
        ++l_213;
    }
    return &p_284->g_26;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_46(uint8_t  p_47, uint8_t  p_48, struct S4 * p_284)
{ /* block id: 76 */
    int32_t *l_178 = &p_284->g_15;
    return l_178;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t * func_49(int32_t  p_50, struct S4 * p_284)
{ /* block id: 72 */
    union U1 *l_173[8] = {&p_284->g_85[1][0],&p_284->g_85[1][0],&p_284->g_85[1][0],&p_284->g_85[1][0],&p_284->g_85[1][0],&p_284->g_85[1][0],&p_284->g_85[1][0],&p_284->g_85[1][0]};
    int16_t *l_174[8] = {&p_284->g_28,&p_284->g_28,&p_284->g_28,&p_284->g_28,&p_284->g_28,&p_284->g_28,&p_284->g_28,&p_284->g_28};
    int i;
    l_173[5] = &p_284->g_85[1][0];
    return l_174[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_284->g_15 p_284->g_71 p_284->g_85.f0 p_284->g_132 p_284->g_16
 * writes: p_284->g_15 p_284->g_28 p_284->g_11 p_284->g_26 p_284->g_133
 */
int32_t  func_51(uint8_t * p_52, int16_t  p_53, int16_t  p_54, union U1  p_55, uint32_t  p_56, struct S4 * p_284)
{ /* block id: 22 */
    int32_t l_112 = 0x036850D5L;
    int32_t *l_141 = &l_112;
    int32_t *l_150 = (void*)0;
    int32_t *l_151 = (void*)0;
    int32_t *l_152 = &p_284->g_15;
    int32_t *l_153 = &l_112;
    int32_t *l_154 = &p_284->g_15;
    int32_t *l_155 = &l_112;
    int32_t *l_156 = &l_112;
    int32_t *l_157 = &p_284->g_15;
    int32_t *l_158 = &l_112;
    int32_t *l_159 = &p_284->g_15;
    int32_t *l_160 = &l_112;
    int32_t *l_161 = &l_112;
    int32_t *l_162 = &p_284->g_15;
    int32_t *l_163 = &p_284->g_15;
    int32_t *l_164 = &l_112;
    int32_t *l_165 = &p_284->g_15;
    int32_t *l_166 = (void*)0;
    int32_t *l_167 = &l_112;
    int32_t *l_168 = &l_112;
    int32_t *l_169[4][5] = {{&p_284->g_15,&p_284->g_15,&l_112,(void*)0,&l_112},{&p_284->g_15,&p_284->g_15,&l_112,(void*)0,&l_112},{&p_284->g_15,&p_284->g_15,&l_112,(void*)0,&l_112},{&p_284->g_15,&p_284->g_15,&l_112,(void*)0,&l_112}};
    uint8_t l_170 = 0UL;
    int i, j;
    for (p_284->g_15 = 0; (p_284->g_15 == (-28)); --p_284->g_15)
    { /* block id: 25 */
        int16_t l_104[7][1][10] = {{{0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL}},{{0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL}},{{0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL}},{{0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL}},{{0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL}},{{0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL}},{{0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL,0x092BL}}};
        VECTOR(int16_t, 2) l_109 = (VECTOR(int16_t, 2))(0x0D33L, 0x1E8EL);
        int32_t l_113 = (-3L);
        VECTOR(int16_t, 2) l_134 = (VECTOR(int16_t, 2))(0L, 0x4E07L);
        int i, j, k;
        for (p_284->g_28 = 15; (p_284->g_28 <= 7); p_284->g_28 = safe_sub_func_int32_t_s_s(p_284->g_28, 4))
        { /* block id: 28 */
            uint32_t l_123 = 0xCF118B28L;
            int32_t *l_140 = (void*)0;
            l_113 &= (safe_mul_func_uint16_t_u_u(l_104[1][0][8], (safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(l_109.yyyyyxxyyxxxyxxy)).sff, (int16_t)p_55.f0))).lo && 0UL), 3)), (l_112 = (~(18446744073709551612UL || (p_54 & 0UL))))))));
            for (p_284->g_11 = 0; (p_284->g_11 < 55); ++p_284->g_11)
            { /* block id: 33 */
                uint16_t l_128 = 0x6C64L;
                int32_t *l_135 = &l_113;
                int32_t *l_136 = &l_112;
                for (p_284->g_26 = 21; (p_284->g_26 <= 26); ++p_284->g_26)
                { /* block id: 36 */
                    int32_t *l_118 = &l_113;
                    int32_t *l_119 = &l_113;
                    int32_t *l_120 = &l_112;
                    int32_t *l_121 = (void*)0;
                    int32_t *l_122[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    l_123--;
                    for (p_55.f0 = 0; (p_55.f0 < 3); ++p_55.f0)
                    { /* block id: 40 */
                        int32_t **l_131 = (void*)0;
                        (*l_120) = l_128;
                        (*l_118) = 0x3726D545L;
                        (*p_284->g_132) = func_62(l_112, &p_284->g_11, &p_284->g_15, ((safe_mod_func_uint16_t_u_u(FAKE_DIVERGE(p_284->global_0_offset, get_global_id(0), 10), p_284->g_71.y)) & p_284->g_85[1][0].f0), p_284);
                    }
                }
                if (l_109.x)
                    break;
                if (((*l_136) = ((*l_135) = (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_134.yxxxxxxyxxyyxxyx)).sbb)).lo ^ p_54))))
                { /* block id: 49 */
                    for (p_53 = 0; (p_53 == (-10)); p_53--)
                    { /* block id: 52 */
                        int32_t **l_139 = &l_135;
                        (*l_139) = (void*)0;
                        return l_112;
                    }
                }
                else
                { /* block id: 56 */
                    l_141 = l_140;
                    if ((atomic_inc(&p_284->l_atomic_input[7]) == 2))
                    { /* block id: 59 */
                        VECTOR(uint64_t, 8) l_142 = (VECTOR(uint64_t, 8))(0xBD08AE5EAE226BEBL, (VECTOR(uint64_t, 4))(0xBD08AE5EAE226BEBL, (VECTOR(uint64_t, 2))(0xBD08AE5EAE226BEBL, 0xB7B25FE38C59D001L), 0xB7B25FE38C59D001L), 0xB7B25FE38C59D001L, 0xBD08AE5EAE226BEBL, 0xB7B25FE38C59D001L);
                        VECTOR(int32_t, 8) l_145 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x07AD302FL), 0x07AD302FL), 0x07AD302FL, (-1L), 0x07AD302FL);
                        VECTOR(int32_t, 16) l_146 = (VECTOR(int32_t, 16))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x60697B8AL), 0x60697B8AL), 0x60697B8AL, (-10L), 0x60697B8AL, (VECTOR(int32_t, 2))((-10L), 0x60697B8AL), (VECTOR(int32_t, 2))((-10L), 0x60697B8AL), (-10L), 0x60697B8AL, (-10L), 0x60697B8AL);
                        int32_t l_147 = (-10L);
                        int32_t l_148 = 0x66D9D4B4L;
                        uint16_t l_149 = 1UL;
                        int i;
                        --l_142.s1;
                        l_147 = ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_145.s2173)), ((VECTOR(int32_t, 16))(l_146.s6da849f534f0367b)).s0dcb, ((VECTOR(int32_t, 2))(0x51562CACL, (-7L))).xyxx))).z;
                        l_149 = l_148;
                        unsigned int result = 0;
                        result += l_142.s7;
                        result += l_142.s6;
                        result += l_142.s5;
                        result += l_142.s4;
                        result += l_142.s3;
                        result += l_142.s2;
                        result += l_142.s1;
                        result += l_142.s0;
                        result += l_145.s7;
                        result += l_145.s6;
                        result += l_145.s5;
                        result += l_145.s4;
                        result += l_145.s3;
                        result += l_145.s2;
                        result += l_145.s1;
                        result += l_145.s0;
                        result += l_146.sf;
                        result += l_146.se;
                        result += l_146.sd;
                        result += l_146.sc;
                        result += l_146.sb;
                        result += l_146.sa;
                        result += l_146.s9;
                        result += l_146.s8;
                        result += l_146.s7;
                        result += l_146.s6;
                        result += l_146.s5;
                        result += l_146.s4;
                        result += l_146.s3;
                        result += l_146.s2;
                        result += l_146.s1;
                        result += l_146.s0;
                        result += l_147;
                        result += l_148;
                        result += l_149;
                        atomic_add(&p_284->l_special_values[7], result);
                    }
                    else
                    { /* block id: 63 */
                        (1 + 1);
                    }
                }
            }
        }
    }
    ++l_170;
    return (*p_284->g_16);
}


/* ------------------------------------------ */
/* 
 * reads : p_284->g_93
 * writes: p_284->g_93
 */
uint8_t * func_57(int32_t * p_58, int32_t  p_59, union U1  p_60, uint16_t  p_61, struct S4 * p_284)
{ /* block id: 19 */
    int32_t *l_86 = &p_284->g_15;
    int32_t *l_87 = (void*)0;
    int32_t l_88 = 0x2023AE71L;
    int32_t *l_89 = &l_88;
    int32_t *l_90 = &l_88;
    int32_t *l_91 = &p_284->g_15;
    int32_t *l_92[10][5] = {{&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,(void*)0},{&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,(void*)0},{&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,(void*)0},{&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,(void*)0},{&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,(void*)0},{&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,(void*)0},{&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,(void*)0},{&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,(void*)0},{&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,(void*)0},{&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,(void*)0}};
    uint8_t *l_96 = (void*)0;
    int i, j;
    --p_284->g_93;
    return l_96;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_62(int8_t  p_63, uint8_t * p_64, int32_t * p_65, uint64_t  p_66, struct S4 * p_284)
{ /* block id: 17 */
    int32_t *l_84[10][10][2] = {{{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22}},{{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22}},{{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22}},{{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22}},{{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22}},{{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22}},{{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22}},{{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22}},{{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22}},{{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22},{(void*)0,&p_284->g_22}}};
    int i, j, k;
    return l_84[6][3][0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_74(uint32_t  p_75, int32_t * p_76, int16_t * p_77, int32_t * p_78, struct S4 * p_284)
{ /* block id: 14 */
    int32_t **l_81 = (void*)0;
    int32_t ***l_82 = &l_81;
    int32_t l_83 = 0x676DC049L;
    (*l_82) = l_81;
    return l_83;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[8];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 8; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[8];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 8; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[67];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 67; i++)
            l_comm_values[i] = 1;
    struct S4 c_285;
    struct S4* p_284 = &c_285;
    struct S4 c_286 = {
        (VECTOR(int64_t, 4))(0x17963BA20B95AE64L, (VECTOR(int64_t, 2))(0x17963BA20B95AE64L, 0x6D4A0D461E3FF14EL), 0x6D4A0D461E3FF14EL), // p_284->g_4
        0xC3L, // p_284->g_11
        (void*)0, // p_284->g_12
        7L, // p_284->g_13
        0L, // p_284->g_15
        {{&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15},{&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15},{&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15,&p_284->g_15}}, // p_284->g_14
        &p_284->g_15, // p_284->g_16
        1L, // p_284->g_22
        0x19FA9EF8L, // p_284->g_26
        (-1L), // p_284->g_28
        (VECTOR(uint64_t, 2))(0UL, 0xDACABD119E2D4DC4L), // p_284->g_69
        (VECTOR(uint64_t, 2))(0xFB3884E3EED797CFL, 0xFA339BCA7AF0C8B8L), // p_284->g_71
        (VECTOR(uint64_t, 4))(0x558EF108C6EC2A3DL, (VECTOR(uint64_t, 2))(0x558EF108C6EC2A3DL, 4UL), 4UL), // p_284->g_72
        {18446744073709551615UL}, // p_284->g_79
        {{{0x31B5FDDBL},{5UL},{0x31B5FDDBL}},{{0x31B5FDDBL},{5UL},{0x31B5FDDBL}},{{0x31B5FDDBL},{5UL},{0x31B5FDDBL}},{{0x31B5FDDBL},{5UL},{0x31B5FDDBL}},{{0x31B5FDDBL},{5UL},{0x31B5FDDBL}},{{0x31B5FDDBL},{5UL},{0x31B5FDDBL}},{{0x31B5FDDBL},{5UL},{0x31B5FDDBL}},{{0x31B5FDDBL},{5UL},{0x31B5FDDBL}}}, // p_284->g_85
        65529UL, // p_284->g_93
        &p_284->g_15, // p_284->g_133
        &p_284->g_133, // p_284->g_132
        0x75D8L, // p_284->g_177
        0x5F26L, // p_284->g_224
        (VECTOR(uint32_t, 2))(0xBBAB34DEL, 0xE1F5E148L), // p_284->g_231
        (void*)0, // p_284->g_232
        (-2L), // p_284->g_237
        &p_284->g_237, // p_284->g_236
        &p_284->g_236, // p_284->g_235
        &p_284->g_15, // p_284->g_241
        &p_284->g_133, // p_284->g_242
        &p_284->g_133, // p_284->g_243
        {0x207F862143E2F932L}, // p_284->g_246
        {247UL,247UL,247UL,247UL,247UL,247UL,247UL,247UL,247UL}, // p_284->g_251
        0x9AL, // p_284->g_255
        (VECTOR(uint16_t, 16))(0xAD2AL, (VECTOR(uint16_t, 4))(0xAD2AL, (VECTOR(uint16_t, 2))(0xAD2AL, 0x01FAL), 0x01FAL), 0x01FAL, 0xAD2AL, 0x01FAL, (VECTOR(uint16_t, 2))(0xAD2AL, 0x01FAL), (VECTOR(uint16_t, 2))(0xAD2AL, 0x01FAL), 0xAD2AL, 0x01FAL, 0xAD2AL, 0x01FAL), // p_284->g_263
        (VECTOR(uint16_t, 2))(0UL, 0x1DC3L), // p_284->g_264
        (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), 65535UL, 1UL, 65535UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), (VECTOR(uint16_t, 2))(1UL, 65535UL), 1UL, 65535UL, 1UL, 65535UL), // p_284->g_265
        0, // p_284->v_collective
        sequence_input[get_global_id(0)], // p_284->global_0_offset
        sequence_input[get_global_id(1)], // p_284->global_1_offset
        sequence_input[get_global_id(2)], // p_284->global_2_offset
        sequence_input[get_local_id(0)], // p_284->local_0_offset
        sequence_input[get_local_id(1)], // p_284->local_1_offset
        sequence_input[get_local_id(2)], // p_284->local_2_offset
        sequence_input[get_group_id(0)], // p_284->group_0_offset
        sequence_input[get_group_id(1)], // p_284->group_1_offset
        sequence_input[get_group_id(2)], // p_284->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 67)), permutations[0][get_linear_local_id()])), // p_284->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_285 = c_286;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_284);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_284->g_4.x, "p_284->g_4.x", print_hash_value);
    transparent_crc(p_284->g_4.y, "p_284->g_4.y", print_hash_value);
    transparent_crc(p_284->g_4.z, "p_284->g_4.z", print_hash_value);
    transparent_crc(p_284->g_4.w, "p_284->g_4.w", print_hash_value);
    transparent_crc(p_284->g_11, "p_284->g_11", print_hash_value);
    transparent_crc(p_284->g_13, "p_284->g_13", print_hash_value);
    transparent_crc(p_284->g_15, "p_284->g_15", print_hash_value);
    transparent_crc(p_284->g_22, "p_284->g_22", print_hash_value);
    transparent_crc(p_284->g_26, "p_284->g_26", print_hash_value);
    transparent_crc(p_284->g_28, "p_284->g_28", print_hash_value);
    transparent_crc(p_284->g_69.x, "p_284->g_69.x", print_hash_value);
    transparent_crc(p_284->g_69.y, "p_284->g_69.y", print_hash_value);
    transparent_crc(p_284->g_71.x, "p_284->g_71.x", print_hash_value);
    transparent_crc(p_284->g_71.y, "p_284->g_71.y", print_hash_value);
    transparent_crc(p_284->g_72.x, "p_284->g_72.x", print_hash_value);
    transparent_crc(p_284->g_72.y, "p_284->g_72.y", print_hash_value);
    transparent_crc(p_284->g_72.z, "p_284->g_72.z", print_hash_value);
    transparent_crc(p_284->g_72.w, "p_284->g_72.w", print_hash_value);
    transparent_crc(p_284->g_79.f0, "p_284->g_79.f0", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_284->g_85[i][j].f0, "p_284->g_85[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_284->g_93, "p_284->g_93", print_hash_value);
    transparent_crc(p_284->g_177, "p_284->g_177", print_hash_value);
    transparent_crc(p_284->g_224, "p_284->g_224", print_hash_value);
    transparent_crc(p_284->g_231.x, "p_284->g_231.x", print_hash_value);
    transparent_crc(p_284->g_231.y, "p_284->g_231.y", print_hash_value);
    transparent_crc(p_284->g_237, "p_284->g_237", print_hash_value);
    transparent_crc(p_284->g_246.f0, "p_284->g_246.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_284->g_251[i], "p_284->g_251[i]", print_hash_value);

    }
    transparent_crc(p_284->g_255, "p_284->g_255", print_hash_value);
    transparent_crc(p_284->g_263.s0, "p_284->g_263.s0", print_hash_value);
    transparent_crc(p_284->g_263.s1, "p_284->g_263.s1", print_hash_value);
    transparent_crc(p_284->g_263.s2, "p_284->g_263.s2", print_hash_value);
    transparent_crc(p_284->g_263.s3, "p_284->g_263.s3", print_hash_value);
    transparent_crc(p_284->g_263.s4, "p_284->g_263.s4", print_hash_value);
    transparent_crc(p_284->g_263.s5, "p_284->g_263.s5", print_hash_value);
    transparent_crc(p_284->g_263.s6, "p_284->g_263.s6", print_hash_value);
    transparent_crc(p_284->g_263.s7, "p_284->g_263.s7", print_hash_value);
    transparent_crc(p_284->g_263.s8, "p_284->g_263.s8", print_hash_value);
    transparent_crc(p_284->g_263.s9, "p_284->g_263.s9", print_hash_value);
    transparent_crc(p_284->g_263.sa, "p_284->g_263.sa", print_hash_value);
    transparent_crc(p_284->g_263.sb, "p_284->g_263.sb", print_hash_value);
    transparent_crc(p_284->g_263.sc, "p_284->g_263.sc", print_hash_value);
    transparent_crc(p_284->g_263.sd, "p_284->g_263.sd", print_hash_value);
    transparent_crc(p_284->g_263.se, "p_284->g_263.se", print_hash_value);
    transparent_crc(p_284->g_263.sf, "p_284->g_263.sf", print_hash_value);
    transparent_crc(p_284->g_264.x, "p_284->g_264.x", print_hash_value);
    transparent_crc(p_284->g_264.y, "p_284->g_264.y", print_hash_value);
    transparent_crc(p_284->g_265.s0, "p_284->g_265.s0", print_hash_value);
    transparent_crc(p_284->g_265.s1, "p_284->g_265.s1", print_hash_value);
    transparent_crc(p_284->g_265.s2, "p_284->g_265.s2", print_hash_value);
    transparent_crc(p_284->g_265.s3, "p_284->g_265.s3", print_hash_value);
    transparent_crc(p_284->g_265.s4, "p_284->g_265.s4", print_hash_value);
    transparent_crc(p_284->g_265.s5, "p_284->g_265.s5", print_hash_value);
    transparent_crc(p_284->g_265.s6, "p_284->g_265.s6", print_hash_value);
    transparent_crc(p_284->g_265.s7, "p_284->g_265.s7", print_hash_value);
    transparent_crc(p_284->g_265.s8, "p_284->g_265.s8", print_hash_value);
    transparent_crc(p_284->g_265.s9, "p_284->g_265.s9", print_hash_value);
    transparent_crc(p_284->g_265.sa, "p_284->g_265.sa", print_hash_value);
    transparent_crc(p_284->g_265.sb, "p_284->g_265.sb", print_hash_value);
    transparent_crc(p_284->g_265.sc, "p_284->g_265.sc", print_hash_value);
    transparent_crc(p_284->g_265.sd, "p_284->g_265.sd", print_hash_value);
    transparent_crc(p_284->g_265.se, "p_284->g_265.se", print_hash_value);
    transparent_crc(p_284->g_265.sf, "p_284->g_265.sf", print_hash_value);
    transparent_crc(p_284->v_collective, "p_284->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 8; i++)
            transparent_crc(p_284->l_special_values[i], "p_284->l_special_values[i]", print_hash_value);
    transparent_crc(p_284->l_comm_values[get_linear_local_id()], "p_284->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_284->g_comm_values[get_linear_group_id() * 67 + get_linear_local_id()], "p_284->g_comm_values[get_linear_group_id() * 67 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
