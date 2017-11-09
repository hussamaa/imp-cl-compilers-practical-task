// --atomics 90 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 51,12,4 -l 17,4,2
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

__constant uint32_t permutations[10][136] = {
{7,65,3,21,73,133,35,119,81,31,38,15,58,104,63,47,28,14,19,11,110,67,132,70,68,51,130,64,111,32,29,0,127,98,116,124,129,77,90,26,74,16,96,2,120,115,85,92,80,60,93,122,88,78,37,61,105,25,72,113,43,101,34,128,13,134,17,27,50,87,91,55,12,59,6,22,75,33,126,49,5,125,100,45,102,41,106,53,118,39,52,108,82,83,86,30,112,4,95,99,107,97,94,117,24,20,66,79,69,18,121,57,23,135,10,48,131,76,36,103,1,109,71,114,42,84,9,44,62,54,123,40,89,8,56,46}, // permutation 0
{20,102,83,22,97,39,100,47,54,112,132,61,90,131,89,27,11,23,94,70,31,36,117,77,105,125,99,13,113,119,116,63,82,30,69,65,19,118,129,85,26,84,114,6,49,126,111,108,48,8,9,74,73,44,71,110,78,28,58,121,67,76,34,92,51,72,12,10,25,32,21,57,43,56,0,35,40,101,64,18,91,53,134,122,123,42,60,79,81,45,75,96,4,106,62,109,130,95,15,7,37,80,68,103,124,16,128,5,52,93,50,41,120,127,38,87,133,66,107,88,2,17,59,104,135,55,33,29,115,14,3,46,24,86,1,98}, // permutation 1
{61,122,119,113,46,3,110,13,100,85,44,89,28,16,66,7,1,98,134,86,129,128,67,12,33,115,45,96,47,99,34,15,60,41,93,120,59,103,65,104,116,108,2,63,80,132,131,125,38,49,95,70,90,124,57,77,107,54,97,22,73,30,27,84,112,29,4,111,130,17,18,56,133,81,101,53,48,62,8,14,109,26,79,74,19,118,105,11,94,0,37,39,40,123,88,51,31,135,68,78,92,87,76,114,25,43,117,42,55,21,83,58,36,64,6,24,35,121,10,52,102,50,69,5,9,71,32,23,75,106,127,72,91,126,20,82}, // permutation 2
{99,12,93,4,60,23,112,8,41,82,44,129,28,48,27,89,105,5,25,88,118,70,59,85,54,43,62,115,6,120,18,77,68,34,42,15,101,95,92,117,111,39,55,97,94,124,24,133,81,79,7,58,132,47,26,63,46,21,90,87,78,9,102,0,128,67,56,52,33,38,11,74,30,73,75,134,37,36,49,91,86,61,3,127,66,10,69,123,116,50,130,76,16,31,72,114,122,13,108,22,32,40,71,45,35,131,109,135,51,1,19,98,14,2,80,20,53,113,107,126,83,64,125,29,110,119,57,65,100,17,96,104,103,84,106,121}, // permutation 3
{119,47,110,16,27,72,17,4,5,91,82,81,97,69,109,50,89,121,126,24,42,68,49,40,120,106,57,133,92,117,66,32,124,52,44,73,21,10,20,108,33,125,48,88,19,31,11,115,0,35,107,54,102,45,98,104,39,25,6,93,13,30,100,122,99,135,130,3,12,38,94,112,96,105,113,26,43,65,83,134,114,8,129,1,58,85,22,71,51,9,63,23,61,2,14,116,67,59,56,62,132,70,34,128,87,41,36,111,127,79,29,90,84,15,80,77,103,76,46,86,64,74,55,95,123,18,78,7,28,37,131,118,60,101,75,53}, // permutation 4
{1,81,97,119,3,30,94,24,74,36,43,76,23,92,100,131,7,117,33,123,5,116,96,64,20,61,124,39,102,95,71,26,105,70,80,35,101,91,112,98,6,34,50,73,15,87,88,46,121,129,120,22,63,59,115,72,29,108,128,122,79,16,66,19,41,57,0,21,69,82,55,125,89,67,27,37,40,56,12,78,132,4,2,62,68,93,54,110,85,134,58,14,60,13,31,104,17,25,107,10,32,53,99,8,83,86,111,118,28,48,135,18,114,126,51,52,45,65,103,106,44,38,77,42,133,127,9,11,113,130,75,84,47,90,109,49}, // permutation 5
{62,44,88,97,40,95,33,94,118,37,65,8,112,0,47,86,68,85,57,25,100,72,135,76,32,104,123,71,92,6,1,21,96,58,108,128,11,121,124,31,113,110,3,91,89,131,53,117,102,74,101,13,29,34,114,105,84,10,49,23,46,103,87,4,120,16,106,17,12,60,30,130,109,129,22,7,127,75,51,28,77,42,9,43,66,83,63,111,80,38,19,35,70,20,39,132,24,79,59,55,133,99,81,5,93,125,15,54,67,64,41,26,18,115,119,78,50,45,107,122,27,36,90,134,73,82,69,56,116,61,2,98,14,126,52,48}, // permutation 6
{133,73,48,8,113,1,43,84,94,82,89,40,127,16,97,19,102,36,126,28,65,119,134,57,70,101,105,114,21,5,23,39,10,46,59,106,38,4,99,81,9,3,42,116,74,92,132,58,115,12,27,37,131,60,69,91,104,98,44,96,123,103,7,93,30,17,90,117,125,50,95,11,72,47,67,88,53,2,13,0,45,79,6,66,33,35,112,109,51,100,18,29,63,128,75,52,49,77,61,31,85,62,24,54,121,25,64,41,71,14,32,130,108,86,87,56,55,34,20,15,107,129,118,80,124,22,122,110,78,83,76,26,135,68,111,120}, // permutation 7
{75,53,27,87,110,130,64,9,40,128,12,69,113,43,14,117,102,77,42,25,49,97,103,70,37,34,0,11,54,28,55,135,44,24,88,101,76,36,35,126,115,99,91,8,74,29,90,93,51,92,31,100,17,50,85,3,98,131,20,32,119,129,2,63,73,118,45,68,123,107,104,112,86,67,41,59,122,132,106,26,33,60,82,22,109,6,57,133,81,21,46,10,19,7,121,95,83,111,5,89,79,16,4,23,39,96,127,124,58,61,108,78,1,71,48,105,134,47,13,80,66,52,116,38,15,65,62,125,30,114,120,18,84,72,94,56}, // permutation 8
{74,76,110,83,68,42,44,22,45,48,16,40,120,106,134,101,86,71,27,12,25,26,52,118,109,38,56,114,61,128,102,13,90,62,15,7,6,63,31,23,88,125,94,32,89,50,8,2,104,69,37,58,92,123,35,54,49,82,70,21,93,46,124,57,60,85,17,122,10,14,29,117,131,78,81,129,96,112,115,135,53,97,65,39,33,116,30,3,24,36,119,72,95,9,59,79,11,121,67,130,64,108,75,51,66,126,20,103,111,91,18,4,47,43,28,55,1,98,99,41,77,105,113,133,73,19,107,34,87,127,80,0,84,5,100,132} // permutation 9
};

// Seed: 3083137005

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_27;
    int8_t g_50[4];
    int8_t g_52;
    int32_t * volatile g_135;
    int32_t g_138[2];
    int32_t g_141;
    int32_t *g_140;
    int32_t g_151;
    uint64_t g_157;
    uint64_t g_159;
    volatile VECTOR(uint64_t, 2) g_167;
    VECTOR(int8_t, 2) g_173;
    int8_t *g_259;
    int8_t ** volatile g_258[6][10][4];
    int32_t g_262;
    int32_t ** volatile g_263;
    int32_t ** volatile g_264;
    uint8_t g_273;
    int32_t g_280[10];
    VECTOR(uint8_t, 8) g_299;
    VECTOR(uint8_t, 4) g_300;
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
int16_t  func_1(struct S0 * p_307);
uint16_t  func_6(uint32_t  p_7, int32_t  p_8, uint16_t  p_9, struct S0 * p_307);
int32_t  func_11(uint32_t  p_12, uint32_t  p_13, int32_t  p_14, struct S0 * p_307);
int64_t  func_18(int32_t  p_19, int16_t  p_20, struct S0 * p_307);
int32_t * func_23(int32_t * p_24, int32_t  p_25, struct S0 * p_307);
int8_t  func_30(int64_t  p_31, uint32_t  p_32, int32_t * p_33, int32_t * p_34, uint32_t  p_35, struct S0 * p_307);
int32_t * func_36(int32_t  p_37, struct S0 * p_307);
int32_t  func_38(uint32_t  p_39, uint64_t  p_40, struct S0 * p_307);
int8_t  func_46(int16_t  p_47, struct S0 * p_307);
uint8_t  func_54(int8_t * p_55, uint32_t  p_56, int64_t  p_57, int32_t * p_58, struct S0 * p_307);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_307->g_comm_values p_307->l_comm_values p_307->g_52 p_307->g_27 p_307->g_135 p_307->g_138 p_307->g_140 p_307->g_141 p_307->g_151 p_307->g_264 p_307->g_159 p_307->g_273 p_307->g_262 p_307->g_263 p_307->g_280 p_307->g_299 p_307->g_300 p_307->g_173 p_307->g_50
 * writes: p_307->g_50 p_307->g_52 p_307->g_27 p_307->g_138 p_307->g_141 p_307->g_151 p_307->g_157 p_307->g_273 p_307->g_173 p_307->g_140 p_307->g_135 p_307->g_280
 */
int16_t  func_1(struct S0 * p_307)
{ /* block id: 4 */
    int32_t l_10 = 0L;
    VECTOR(int64_t, 16) l_17 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x5B263D188047D203L), 0x5B263D188047D203L), 0x5B263D188047D203L, (-1L), 0x5B263D188047D203L, (VECTOR(int64_t, 2))((-1L), 0x5B263D188047D203L), (VECTOR(int64_t, 2))((-1L), 0x5B263D188047D203L), (-1L), 0x5B263D188047D203L, (-1L), 0x5B263D188047D203L);
    int8_t *l_272 = (void*)0;
    int8_t *l_274[1];
    int32_t l_275 = 0x1E72E945L;
    uint32_t l_278 = 4294967295UL;
    int32_t *l_279 = &p_307->g_280[4];
    int32_t *l_281 = &l_275;
    int32_t *l_282[2][6][2] = {{{&l_275,&p_307->g_280[4]},{&l_275,&p_307->g_280[4]},{&l_275,&p_307->g_280[4]},{&l_275,&p_307->g_280[4]},{&l_275,&p_307->g_280[4]},{&l_275,&p_307->g_280[4]}},{{&l_275,&p_307->g_280[4]},{&l_275,&p_307->g_280[4]},{&l_275,&p_307->g_280[4]},{&l_275,&p_307->g_280[4]},{&l_275,&p_307->g_280[4]},{&l_275,&p_307->g_280[4]}}};
    uint64_t l_283 = 0x5B2328C70E8F8921L;
    VECTOR(uint8_t, 8) l_302 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 252UL), 252UL), 252UL, 0UL, 252UL);
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_274[i] = (void*)0;
    (*l_279) ^= ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_307->g_comm_values[p_307->tid], (!func_6(l_10, func_11((safe_mul_func_uint16_t_u_u(((((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_17.s8e85a7b0)))), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(0L, (-1L), (-3L), 1L)), 0x1FE57F6CC9CA3191L, 0L, 0x74E80031AA08ECB3L, 1L)).hi)).zwyxxxyy))).s6 | func_18(l_17.sc, p_307->l_comm_values[(safe_mod_func_uint32_t_u_u(p_307->tid, 136))], p_307)) | (((safe_mul_func_uint8_t_u_u(0UL, (safe_add_func_int8_t_s_s(0x79L, (p_307->g_173.y = (safe_lshift_func_uint8_t_u_s(p_307->g_159, (l_275 = (p_307->g_273 |= (((void*)0 == l_272) | p_307->g_159)))))))))) , p_307->g_comm_values[p_307->tid]) | 0xB62DFFB09DB02619L)), p_307->g_262)), p_307->g_comm_values[p_307->tid], p_307->g_comm_values[p_307->tid], p_307), p_307->g_159, p_307)))), l_278)) ^ 0xF79E03AB2666C24BL);
    l_283++;
    for (l_275 = 21; (l_275 < 18); --l_275)
    { /* block id: 159 */
        uint16_t l_291 = 0x741EL;
        VECTOR(uint8_t, 8) l_301 = (VECTOR(uint8_t, 8))(0xF1L, (VECTOR(uint8_t, 4))(0xF1L, (VECTOR(uint8_t, 2))(0xF1L, 1UL), 1UL), 1UL, 0xF1L, 1UL);
        int64_t l_305 = 2L;
        uint64_t *l_306 = &l_283;
        int i;
        for (p_307->g_273 = 0; (p_307->g_273 >= 31); ++p_307->g_273)
        { /* block id: 162 */
            int16_t l_290 = 1L;
            uint64_t *l_294 = &p_307->g_157;
            l_291++;
            (*p_307->g_140) |= ((void*)0 != l_294);
        }
        (*p_307->g_140) |= (((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 8))(p_307->g_299.s00366524)).lo, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(255UL, 0UL)).xxxy)).xzwyxwyw, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(p_307->g_300.wy)), 255UL, 253UL, 0UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_301.s42)))), GROUP_DIVERGE(0, 1), 0xECL, 1UL, ((p_307->l_comm_values[(safe_mod_func_uint32_t_u_u(p_307->tid, 136))] ^ (l_291 != l_291)) || p_307->g_comm_values[p_307->tid]), 0x57L, 0x4CL)), ((VECTOR(uint8_t, 2))(l_302.s01)), 0UL)).sc2)).yyxyyxxy))).even, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(5UL, 247UL, (safe_mul_func_uint16_t_u_u(((l_305 , &p_307->g_159) != &l_283), (0UL != ((*l_306) = 0x6E450D06786BF23BL)))), ((VECTOR(uint8_t, 8))(3UL)), 0x3EL, 0xD6L, p_307->g_173.x, 0x70L, 251UL)).even)).lo))).yywzzwzyzxwwyxzz, ((VECTOR(uint8_t, 16))(1UL))))).sbb, ((VECTOR(uint8_t, 2))(255UL))))).xxxxyxxxyxyxxxxy)).s6, 0)), (*l_279))) >= 0x41A2L) == p_307->g_50[2]) > 18446744073709551612UL) | p_307->g_50[1]);
    }
    return (*l_279);
}


/* ------------------------------------------ */
/* 
 * reads : p_307->g_140
 * writes: p_307->g_141
 */
uint16_t  func_6(uint32_t  p_7, int32_t  p_8, uint16_t  p_9, struct S0 * p_307)
{ /* block id: 152 */
    VECTOR(int32_t, 4) l_277 = (VECTOR(int32_t, 4))(0x6B7DD61AL, (VECTOR(int32_t, 2))(0x6B7DD61AL, 1L), 1L);
    int i;
    (*p_307->g_140) = ((VECTOR(int32_t, 16))(l_277.zyxxwywzwxyyxxwy)).s9;
    return p_7;
}


/* ------------------------------------------ */
/* 
 * reads : p_307->g_263 p_307->g_140 p_307->g_264 p_307->g_141
 * writes: p_307->g_140 p_307->g_135 p_307->g_141
 */
int32_t  func_11(uint32_t  p_12, uint32_t  p_13, int32_t  p_14, struct S0 * p_307)
{ /* block id: 147 */
    int32_t **l_276[8][6] = {{&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140},{&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140},{&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140},{&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140},{&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140},{&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140},{&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140},{&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140,&p_307->g_140}};
    int i, j;
    p_307->g_135 = ((*p_307->g_264) = (*p_307->g_263));
    (**p_307->g_264) ^= p_14;
    return p_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_307->l_comm_values p_307->g_comm_values p_307->g_52 p_307->g_27 p_307->g_135 p_307->g_138 p_307->g_140 p_307->g_141 p_307->g_151 p_307->g_264
 * writes: p_307->g_50 p_307->g_52 p_307->g_27 p_307->g_138 p_307->g_141 p_307->g_151 p_307->g_157
 */
int64_t  func_18(int32_t  p_19, int16_t  p_20, struct S0 * p_307)
{ /* block id: 5 */
    int32_t *l_26 = &p_307->g_27;
    for (p_19 = 0; (p_19 <= (-23)); p_19 = safe_sub_func_int64_t_s_s(p_19, 2))
    { /* block id: 8 */
        uint64_t l_146 = 0UL;
        int32_t *l_150 = &p_307->g_151;
        int32_t *l_265[1];
        int i;
        for (i = 0; i < 1; i++)
            l_265[i] = (void*)0;
        l_265[0] = func_23(l_26, ((*l_150) = (safe_mul_func_int8_t_s_s(func_30(p_19, p_307->l_comm_values[(safe_mod_func_uint32_t_u_u(p_307->tid, 136))], func_36(p_307->g_comm_values[p_307->tid], p_307), p_307->g_140, (safe_lshift_func_int16_t_s_s(0x78B4L, (safe_sub_func_int32_t_s_s((p_307->l_comm_values[(safe_mod_func_uint32_t_u_u(p_307->tid, 136))] ^ 1L), l_146)))), p_307), p_307->l_comm_values[(safe_mod_func_uint32_t_u_u(p_307->tid, 136))]))), p_307);
        if ((*p_307->g_140))
            continue;
    }
    return p_20;
}


/* ------------------------------------------ */
/* 
 * reads : p_307->g_27 p_307->g_140 p_307->g_141 p_307->g_151 p_307->g_264
 * writes: p_307->g_157 p_307->g_27 p_307->g_141 p_307->g_151
 */
int32_t * func_23(int32_t * p_24, int32_t  p_25, struct S0 * p_307)
{ /* block id: 85 */
    int8_t *l_153 = &p_307->g_52;
    int8_t **l_152 = &l_153;
    uint64_t *l_156 = &p_307->g_157;
    uint64_t *l_158[6][6] = {{&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159},{&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159},{&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159},{&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159},{&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159},{&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159,&p_307->g_159}};
    int32_t l_160 = (-7L);
    int32_t l_177 = 0x0504D8E8L;
    int i, j;
    (*p_24) |= ((l_152 == (void*)0) && (l_160 = (safe_div_func_uint64_t_u_u(0xD7CA0C704A2BC286L, ((*l_156) = p_25)))));
    (*p_307->g_140) &= l_160;
    for (p_307->g_151 = 25; (p_307->g_151 == 2); p_307->g_151--)
    { /* block id: 92 */
        VECTOR(int8_t, 4) l_174 = (VECTOR(int8_t, 4))(0x21L, (VECTOR(int8_t, 2))(0x21L, 0x6CL), 0x6CL);
        int i;
        (1 + 1);
    }
    return (*p_307->g_264);
}


/* ------------------------------------------ */
/* 
 * reads : p_307->g_135 p_307->g_27 p_307->g_140 p_307->g_141
 * writes: p_307->g_141
 */
int8_t  func_30(int64_t  p_31, uint32_t  p_32, int32_t * p_33, int32_t * p_34, uint32_t  p_35, struct S0 * p_307)
{ /* block id: 80 */
    uint64_t l_147 = 1UL;
    l_147--;
    (*p_307->g_140) ^= (*p_307->g_135);
    return p_35;
}


/* ------------------------------------------ */
/* 
 * reads : p_307->l_comm_values p_307->g_52 p_307->g_27 p_307->g_comm_values p_307->g_135 p_307->g_138
 * writes: p_307->g_50 p_307->g_52 p_307->g_27 p_307->g_138
 */
int32_t * func_36(int32_t  p_37, struct S0 * p_307)
{ /* block id: 9 */
    uint32_t l_41 = 0UL;
    int32_t *l_136 = (void*)0;
    int32_t *l_137 = &p_307->g_138[0];
    int32_t *l_139 = (void*)0;
    (*l_137) ^= func_38(p_307->l_comm_values[(safe_mod_func_uint32_t_u_u(p_307->tid, 136))], l_41, p_307);
    return l_139;
}


/* ------------------------------------------ */
/* 
 * reads : p_307->g_52 p_307->g_27 p_307->g_comm_values p_307->g_135
 * writes: p_307->g_50 p_307->g_52 p_307->g_27
 */
int32_t  func_38(uint32_t  p_39, uint64_t  p_40, struct S0 * p_307)
{ /* block id: 10 */
    uint32_t l_48 = 4294967293UL;
    int8_t *l_49 = &p_307->g_50[0];
    int8_t *l_51 = &p_307->g_52;
    (*p_307->g_135) = (((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(func_46((((*l_51) ^= ((*l_49) = l_48)) && (safe_unary_minus_func_uint32_t_u((l_48 < func_54(&p_307->g_50[0], p_307->g_52, l_48, &p_307->g_27, p_307))))), p_307), 6)), l_48)) != 0xC5L) ^ l_48);
    return (*p_307->g_135);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t  func_46(int16_t  p_47, struct S0 * p_307)
{ /* block id: 16 */
    if ((atomic_inc(&p_307->l_atomic_input[86]) == 0))
    { /* block id: 18 */
        int8_t l_61 = 0L;
        int8_t *l_60 = &l_61;
        int8_t **l_59 = &l_60;
        int8_t **l_62 = (void*)0;
        int16_t l_133[7] = {0x75DBL,0x75DBL,0x75DBL,0x75DBL,0x75DBL,0x75DBL,0x75DBL};
        int16_t l_134[2][2] = {{9L,9L},{9L,9L}};
        int i, j;
        l_62 = l_59;
        for (l_61 = 19; (l_61 <= 4); l_61--)
        { /* block id: 22 */
            int32_t l_65 = 0L;
            for (l_65 = 0; (l_65 < 6); l_65++)
            { /* block id: 25 */
                int32_t l_68 = 8L;
                uint32_t l_107 = 9UL;
                uint32_t l_108 = 0x61C51346L;
                uint32_t l_109 = 0xC082C06CL;
                int64_t l_110[1][7][6] = {{{0x21D835F2621DCD0CL,0x6B673D79CAFDD340L,0x4CBCFC55BB8F8D56L,0x196D64EC8E99FE13L,0x4CBCFC55BB8F8D56L,0x6B673D79CAFDD340L},{0x21D835F2621DCD0CL,0x6B673D79CAFDD340L,0x4CBCFC55BB8F8D56L,0x196D64EC8E99FE13L,0x4CBCFC55BB8F8D56L,0x6B673D79CAFDD340L},{0x21D835F2621DCD0CL,0x6B673D79CAFDD340L,0x4CBCFC55BB8F8D56L,0x196D64EC8E99FE13L,0x4CBCFC55BB8F8D56L,0x6B673D79CAFDD340L},{0x21D835F2621DCD0CL,0x6B673D79CAFDD340L,0x4CBCFC55BB8F8D56L,0x196D64EC8E99FE13L,0x4CBCFC55BB8F8D56L,0x6B673D79CAFDD340L},{0x21D835F2621DCD0CL,0x6B673D79CAFDD340L,0x4CBCFC55BB8F8D56L,0x196D64EC8E99FE13L,0x4CBCFC55BB8F8D56L,0x6B673D79CAFDD340L},{0x21D835F2621DCD0CL,0x6B673D79CAFDD340L,0x4CBCFC55BB8F8D56L,0x196D64EC8E99FE13L,0x4CBCFC55BB8F8D56L,0x6B673D79CAFDD340L},{0x21D835F2621DCD0CL,0x6B673D79CAFDD340L,0x4CBCFC55BB8F8D56L,0x196D64EC8E99FE13L,0x4CBCFC55BB8F8D56L,0x6B673D79CAFDD340L}}};
                int i, j, k;
                for (l_68 = 0; (l_68 >= (-30)); l_68--)
                { /* block id: 28 */
                    int32_t l_71 = 4L;
                    for (l_71 = 10; (l_71 == (-6)); l_71 = safe_sub_func_uint64_t_u_u(l_71, 9))
                    { /* block id: 31 */
                        int64_t l_74 = 0x1815C87E177106CFL;
                        int16_t l_75 = (-1L);
                        uint16_t l_76 = 0xA4AAL;
                        uint32_t l_77 = 0x84BF4D80L;
                        uint32_t l_78 = 4294967294UL;
                        uint8_t l_79 = 0x77L;
                        VECTOR(int32_t, 2) l_80 = (VECTOR(int32_t, 2))(0x550170A2L, 0x6A21F9F6L);
                        VECTOR(int32_t, 2) l_81 = (VECTOR(int32_t, 2))(0L, (-1L));
                        VECTOR(int16_t, 8) l_82 = (VECTOR(int16_t, 8))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x77DEL), 0x77DEL), 0x77DEL, 7L, 0x77DEL);
                        VECTOR(int16_t, 2) l_83 = (VECTOR(int16_t, 2))(0x45C7L, (-1L));
                        VECTOR(int16_t, 4) l_84 = (VECTOR(int16_t, 4))(0x0905L, (VECTOR(int16_t, 2))(0x0905L, (-5L)), (-5L));
                        VECTOR(int16_t, 8) l_85 = (VECTOR(int16_t, 8))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, (-1L)), (-1L)), (-1L), 4L, (-1L));
                        VECTOR(uint16_t, 8) l_86 = (VECTOR(uint16_t, 8))(0xBA36L, (VECTOR(uint16_t, 4))(0xBA36L, (VECTOR(uint16_t, 2))(0xBA36L, 0x293AL), 0x293AL), 0x293AL, 0xBA36L, 0x293AL);
                        VECTOR(uint16_t, 8) l_87 = (VECTOR(uint16_t, 8))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 0UL), 0UL), 0UL, 65532UL, 0UL);
                        VECTOR(uint16_t, 8) l_88 = (VECTOR(uint16_t, 8))(0x405DL, (VECTOR(uint16_t, 4))(0x405DL, (VECTOR(uint16_t, 2))(0x405DL, 0UL), 0UL), 0UL, 0x405DL, 0UL);
                        VECTOR(uint16_t, 4) l_89 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xE25BL), 0xE25BL);
                        uint32_t l_90[4][10][6] = {{{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL}},{{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL}},{{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL}},{{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL},{0x22D1E25FL,1UL,0x6C9C462EL,0x9E733021L,0x6C9C462EL,1UL}}};
                        int32_t l_91 = 1L;
                        uint16_t l_92 = 65530UL;
                        VECTOR(int64_t, 4) l_93 = (VECTOR(int64_t, 4))(0x04B69D3DDFAC9312L, (VECTOR(int64_t, 2))(0x04B69D3DDFAC9312L, 0x41DB3DAD6103D800L), 0x41DB3DAD6103D800L);
                        VECTOR(int64_t, 16) l_94 = (VECTOR(int64_t, 16))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0x286FB9873F28D20EL), 0x286FB9873F28D20EL), 0x286FB9873F28D20EL, (-9L), 0x286FB9873F28D20EL, (VECTOR(int64_t, 2))((-9L), 0x286FB9873F28D20EL), (VECTOR(int64_t, 2))((-9L), 0x286FB9873F28D20EL), (-9L), 0x286FB9873F28D20EL, (-9L), 0x286FB9873F28D20EL);
                        int16_t l_95[4];
                        uint8_t l_96[7][8][2] = {{{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL}},{{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL}},{{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL}},{{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL}},{{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL}},{{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL}},{{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL},{255UL,0x3EL}}};
                        uint64_t l_97 = 0xFDB8F82D9EA51855L;
                        uint16_t l_98 = 0x50C1L;
                        uint64_t l_99 = 0x3E54A6601A515F4AL;
                        int16_t l_100 = 0x67CFL;
                        int32_t *l_101 = (void*)0;
                        int32_t *l_102[1];
                        int16_t l_103 = 0x1005L;
                        int32_t *l_104 = (void*)0;
                        int32_t *l_105 = (void*)0;
                        int32_t *l_106 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_95[i] = 0x5C00L;
                        for (i = 0; i < 1; i++)
                            l_102[i] = (void*)0;
                        l_102[0] = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((l_77 ^= ((l_75 ^= l_74) , l_76)), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(0L, 0x18E87BB6L)).xyyy, ((VECTOR(int32_t, 4))((l_79 = (l_78 = 1L)), ((VECTOR(int32_t, 2))(l_80.yx)), (-1L)))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((-5L), 3L, 0L, ((VECTOR(int32_t, 2))(0x0453370CL, 0x4D14C5BDL)), 0x1C202D2AL, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(l_81.xyyx)), (int32_t)(FAKE_DIVERGE(p_307->local_0_offset, get_local_id(0), 10) , (-1L))))).zwwwwxyyywwwxwyy)).odd))), 0x61BF9D45L, 0x775BEB37L)).s9de5)), 0x43B083FFL, 0x0BA70195L, ((VECTOR(int32_t, 2))(0L, 0x5DB7BAF6L)), 0x03386B47L, 0L, 0x421E6DB7L)).s59)), ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))((-2L), (-2L), 0x1F61L, 6L)).yzywzxwz, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 16))(l_82.s6441544076006123)).s4cd2))).wxxyzzyzxzwxxxyw))).even))))).s1470211114516113, ((VECTOR(int16_t, 8))((-1L), ((VECTOR(int16_t, 4))(l_83.yxyy)), ((VECTOR(int16_t, 2))(l_84.xx)), 0x5EF2L)).s3627274305166725, ((VECTOR(int16_t, 16))(l_85.s5732674617334750))))), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(l_86.s05175675)).s06, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 2))(l_87.s73)).yyxxxxxyxyxyyyxy, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_88.s02275125)))))).even)).hi, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(l_89.yz)))).yyxyyyyxyyxxyxxx)), (uint16_t)FAKE_DIVERGE(p_307->local_1_offset, get_local_id(1), 10)))))).s14))).yyxyyxyyxyxxyxxy))).s5a0a, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 16))(0x90L, 248UL, (l_92 = (l_90[3][9][2] , l_91)), 251UL, ((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 16))((((VECTOR(int64_t, 16))(add_sat(((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))((-1L), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_93.xzzyzxyzyzzywxwz)).s5c80)))).w, ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_94.s956d)))), 1L, 0L, 0x7D993E846AAE9426L, ((VECTOR(int64_t, 8))(1L)), 0x7461B67BCF541361L)).se0))), l_95[2], 0x339C3AD06F0504CBL, l_96[3][0][0], 0x5C95FA104C7A4504L, 0x0C7AEF280801E7C2L)).s54)).lo, 4L, 0x2DBCCDF9266F03D6L)).hi)).xxxxyxxx, ((VECTOR(int64_t, 8))((-3L)))))).s3201057546337102, ((VECTOR(int64_t, 16))(0L))))).sa , l_97), 0xAEL, ((VECTOR(uint8_t, 2))(254UL)), ((VECTOR(uint8_t, 8))(1UL)), 1UL, ((VECTOR(uint8_t, 2))(248UL)), 6UL)).even, ((VECTOR(uint8_t, 8))(0x1FL))))), 255UL, 0x53L, 0UL, 0UL)).odd, ((VECTOR(uint8_t, 8))(0x0EL))))).s03)).yxxxxxxxyyyxyyxx, ((VECTOR(uint8_t, 16))(255UL))))).s9a2a))).wyywxyxx)).even))), l_98, 65534UL, 1UL, 0xAAD5L, 0xD64AL, 0x9287L, 0x6F01L, ((VECTOR(uint16_t, 2))(0xEC4CL)), l_99, 0x9C7EL, 0x71DEL)).s7d))).xxxxyyyy, ((VECTOR(uint16_t, 8))(1UL)), ((VECTOR(uint16_t, 8))(0x206BL))))).odd, ((VECTOR(uint16_t, 4))(4UL))))).zyxwwxwx)).s5125721266002360))).s97))), 0x26BC3EE9L, l_100, 0x693EAE95L, 0x5B89AE2EL, ((VECTOR(int32_t, 8))((-9L))), (-3L), 0x3BA3285CL)).sc , l_101);
                        l_104 = ((l_103 = GROUP_DIVERGE(1, 1)) , (void*)0);
                        l_106 = l_105;
                    }
                }
                l_107 = (-6L);
                l_109 ^= l_108;
                if (l_110[0][5][3])
                { /* block id: 45 */
                    VECTOR(uint32_t, 2) l_111 = (VECTOR(uint32_t, 2))(1UL, 4294967295UL);
                    int i;
                    if ((l_68 = l_111.y))
                    { /* block id: 47 */
                        int64_t l_112 = 0x5806202E23DBE8D7L;
                        uint32_t l_113 = 4294967291UL;
                        uint16_t l_114 = 1UL;
                        l_113 |= (l_68 = l_112);
                        l_68 = l_114;
                    }
                    else
                    { /* block id: 51 */
                        uint8_t l_115 = 255UL;
                        int8_t l_116[1];
                        uint64_t l_117 = 0x8386D6A5671BF852L;
                        uint64_t l_118 = 0xB9E14A8CDCF8F5F8L;
                        int32_t l_119 = (-1L);
                        VECTOR(int32_t, 16) l_120 = (VECTOR(int32_t, 16))(0x09B365E4L, (VECTOR(int32_t, 4))(0x09B365E4L, (VECTOR(int32_t, 2))(0x09B365E4L, (-2L)), (-2L)), (-2L), 0x09B365E4L, (-2L), (VECTOR(int32_t, 2))(0x09B365E4L, (-2L)), (VECTOR(int32_t, 2))(0x09B365E4L, (-2L)), 0x09B365E4L, (-2L), 0x09B365E4L, (-2L));
                        int32_t *l_121 = (void*)0;
                        int32_t *l_122[6][7][6] = {{{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0}},{{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0}},{{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0}},{{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0}},{{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0}},{{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,&l_119,(void*)0,(void*)0,(void*)0}}};
                        int8_t l_123 = 0x2DL;
                        uint64_t l_124 = 0xC64E1DA1D933A2BCL;
                        int32_t *l_127[6][7] = {{&l_119,&l_119,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_119,&l_119,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int32_t *l_128 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_116[i] = 1L;
                        l_68 |= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))((-1L), (-4L))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0L, (l_115 , l_116[0]), 1L, (-1L), 0x49C5E52CL, 1L, 0L, (-1L))).lo)).wzyxzzzx, (int32_t)(l_117 , (l_118 , (l_119 = l_119)))))).even)), 0x6558E286L, 0x52885B45L, (-1L), 0x1DAD4EEAL)).s72, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_120.s6e)), 0x79FE98CDL, (-1L))).even)), 0L, 0x768AE125L)).hi))).xyxy)).zzyywxyz)))).s16)))).even;
                        l_122[1][2][1] = (l_121 = (void*)0);
                        --l_124;
                        l_128 = l_127[0][5];
                    }
                    for (l_111.x = 0; (l_111.x <= 25); l_111.x = safe_add_func_uint8_t_u_u(l_111.x, 7))
                    { /* block id: 61 */
                        VECTOR(int32_t, 2) l_131 = (VECTOR(int32_t, 2))(0x050ECF60L, 0x4C49715FL);
                        uint64_t l_132 = 0UL;
                        int i;
                        l_132 &= (l_68 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_131.yxyyxyyy)).hi)).y);
                    }
                    l_68 = (-1L);
                }
                else
                { /* block id: 66 */
                    l_68 ^= 0x3F6DBDABL;
                }
            }
        }
        l_134[0][1] |= l_133[0];
        unsigned int result = 0;
        result += l_61;
        int l_133_i0;
        for (l_133_i0 = 0; l_133_i0 < 7; l_133_i0++) {
            result += l_133[l_133_i0];
        }
        int l_134_i0, l_134_i1;
        for (l_134_i0 = 0; l_134_i0 < 2; l_134_i0++) {
            for (l_134_i1 = 0; l_134_i1 < 2; l_134_i1++) {
                result += l_134[l_134_i0][l_134_i1];
            }
        }
        atomic_add(&p_307->l_special_values[86], result);
    }
    else
    { /* block id: 72 */
        (1 + 1);
    }
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_307->g_27 p_307->g_comm_values
 * writes: p_307->g_27
 */
uint8_t  func_54(int8_t * p_55, uint32_t  p_56, int64_t  p_57, int32_t * p_58, struct S0 * p_307)
{ /* block id: 13 */
    (*p_58) |= ((void*)0 != &p_307->g_27);
    return p_307->g_comm_values[p_307->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[90];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 90; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[90];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 90; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[136];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 136; i++)
            l_comm_values[i] = 1;
    struct S0 c_308;
    struct S0* p_307 = &c_308;
    struct S0 c_309 = {
        1L, // p_307->g_27
        {0x2FL,0x2FL,0x2FL,0x2FL}, // p_307->g_50
        1L, // p_307->g_52
        &p_307->g_27, // p_307->g_135
        {0x170EF6AAL,0x170EF6AAL}, // p_307->g_138
        (-1L), // p_307->g_141
        &p_307->g_141, // p_307->g_140
        9L, // p_307->g_151
        18446744073709551608UL, // p_307->g_157
        0x6E58BBD95422EF5DL, // p_307->g_159
        (VECTOR(uint64_t, 2))(0x02DE0BA1BEB00083L, 0x245C75313E7333C2L), // p_307->g_167
        (VECTOR(int8_t, 2))(0x73L, (-3L)), // p_307->g_173
        &p_307->g_50[1], // p_307->g_259
        {{{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259}},{{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259}},{{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259}},{{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259}},{{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259}},{{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259},{&p_307->g_259,&p_307->g_259,&p_307->g_259,&p_307->g_259}}}, // p_307->g_258
        5L, // p_307->g_262
        &p_307->g_140, // p_307->g_263
        &p_307->g_140, // p_307->g_264
        0x4AL, // p_307->g_273
        {8L,(-1L),8L,8L,(-1L),8L,8L,(-1L),8L,8L}, // p_307->g_280
        (VECTOR(uint8_t, 8))(0xC8L, (VECTOR(uint8_t, 4))(0xC8L, (VECTOR(uint8_t, 2))(0xC8L, 1UL), 1UL), 1UL, 0xC8L, 1UL), // p_307->g_299
        (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 254UL), 254UL), // p_307->g_300
        0, // p_307->v_collective
        sequence_input[get_global_id(0)], // p_307->global_0_offset
        sequence_input[get_global_id(1)], // p_307->global_1_offset
        sequence_input[get_global_id(2)], // p_307->global_2_offset
        sequence_input[get_local_id(0)], // p_307->local_0_offset
        sequence_input[get_local_id(1)], // p_307->local_1_offset
        sequence_input[get_local_id(2)], // p_307->local_2_offset
        sequence_input[get_group_id(0)], // p_307->group_0_offset
        sequence_input[get_group_id(1)], // p_307->group_1_offset
        sequence_input[get_group_id(2)], // p_307->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 136)), permutations[0][get_linear_local_id()])), // p_307->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_308 = c_309;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_307);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_307->g_27, "p_307->g_27", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_307->g_50[i], "p_307->g_50[i]", print_hash_value);

    }
    transparent_crc(p_307->g_52, "p_307->g_52", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_307->g_138[i], "p_307->g_138[i]", print_hash_value);

    }
    transparent_crc(p_307->g_141, "p_307->g_141", print_hash_value);
    transparent_crc(p_307->g_151, "p_307->g_151", print_hash_value);
    transparent_crc(p_307->g_157, "p_307->g_157", print_hash_value);
    transparent_crc(p_307->g_159, "p_307->g_159", print_hash_value);
    transparent_crc(p_307->g_167.x, "p_307->g_167.x", print_hash_value);
    transparent_crc(p_307->g_167.y, "p_307->g_167.y", print_hash_value);
    transparent_crc(p_307->g_173.x, "p_307->g_173.x", print_hash_value);
    transparent_crc(p_307->g_173.y, "p_307->g_173.y", print_hash_value);
    transparent_crc(p_307->g_262, "p_307->g_262", print_hash_value);
    transparent_crc(p_307->g_273, "p_307->g_273", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_307->g_280[i], "p_307->g_280[i]", print_hash_value);

    }
    transparent_crc(p_307->g_299.s0, "p_307->g_299.s0", print_hash_value);
    transparent_crc(p_307->g_299.s1, "p_307->g_299.s1", print_hash_value);
    transparent_crc(p_307->g_299.s2, "p_307->g_299.s2", print_hash_value);
    transparent_crc(p_307->g_299.s3, "p_307->g_299.s3", print_hash_value);
    transparent_crc(p_307->g_299.s4, "p_307->g_299.s4", print_hash_value);
    transparent_crc(p_307->g_299.s5, "p_307->g_299.s5", print_hash_value);
    transparent_crc(p_307->g_299.s6, "p_307->g_299.s6", print_hash_value);
    transparent_crc(p_307->g_299.s7, "p_307->g_299.s7", print_hash_value);
    transparent_crc(p_307->g_300.x, "p_307->g_300.x", print_hash_value);
    transparent_crc(p_307->g_300.y, "p_307->g_300.y", print_hash_value);
    transparent_crc(p_307->g_300.z, "p_307->g_300.z", print_hash_value);
    transparent_crc(p_307->g_300.w, "p_307->g_300.w", print_hash_value);
    transparent_crc(p_307->v_collective, "p_307->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 90; i++)
            transparent_crc(p_307->g_special_values[i + 90 * get_linear_group_id()], "p_307->g_special_values[i + 90 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 90; i++)
            transparent_crc(p_307->l_special_values[i], "p_307->l_special_values[i]", print_hash_value);
    transparent_crc(p_307->l_comm_values[get_linear_local_id()], "p_307->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_307->g_comm_values[get_linear_group_id() * 136 + get_linear_local_id()], "p_307->g_comm_values[get_linear_group_id() * 136 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
