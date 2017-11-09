// --atomics 81 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 56,74,2 -l 2,37,2
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

__constant uint32_t permutations[10][148] = {
{132,37,105,99,136,90,63,122,141,59,133,94,62,28,139,51,4,42,102,71,86,69,2,50,91,67,118,24,96,16,21,19,121,34,98,3,115,35,56,27,77,26,6,22,93,83,57,80,36,72,58,70,144,103,135,130,15,74,61,12,64,49,76,106,127,10,33,112,108,124,11,8,25,114,66,78,146,65,81,84,129,126,1,75,88,104,7,138,87,107,89,0,110,43,95,29,44,145,38,128,82,123,13,18,125,97,17,111,137,134,41,20,9,32,5,85,53,45,31,40,14,39,46,140,120,79,113,30,92,117,54,109,55,147,23,116,131,60,142,73,119,47,52,101,100,48,143,68}, // permutation 0
{3,21,10,66,26,47,65,29,94,89,57,95,132,122,5,91,80,41,30,44,20,46,36,135,105,56,125,33,127,102,142,93,39,133,82,139,7,90,9,117,144,25,17,75,73,52,62,70,123,124,13,78,55,147,58,96,37,64,86,43,140,97,50,63,145,100,71,59,106,77,83,76,141,107,15,22,118,87,126,88,109,128,35,110,45,115,129,146,14,136,31,0,84,60,18,143,108,74,8,27,111,114,24,32,101,34,92,4,6,72,54,61,130,28,67,48,11,2,98,79,81,19,104,38,16,49,53,121,131,113,119,1,85,99,69,12,103,120,112,116,40,134,42,68,138,23,51,137}, // permutation 1
{76,79,132,7,42,101,53,119,0,142,11,109,123,100,24,17,26,16,74,20,115,125,27,122,5,13,43,65,21,52,130,55,58,120,45,94,110,85,40,141,29,111,48,134,18,69,49,50,33,113,36,124,68,57,92,89,30,102,145,78,135,84,117,96,62,105,107,38,39,104,136,31,88,139,46,37,129,6,22,25,99,144,12,23,3,1,116,34,14,127,75,90,8,19,114,51,118,61,71,54,56,60,146,73,103,35,147,87,128,106,44,131,28,82,77,83,47,2,66,112,63,93,121,41,138,86,126,140,15,67,10,97,80,72,91,64,137,9,133,70,59,143,98,108,4,81,95,32}, // permutation 2
{38,76,77,34,120,81,61,30,65,22,100,99,17,75,111,126,46,87,29,11,3,124,68,64,7,106,43,112,10,82,37,88,66,147,70,131,80,125,23,137,21,25,53,135,44,63,35,6,78,8,101,5,13,59,123,141,142,121,31,36,140,117,84,108,69,42,128,19,47,134,67,18,104,56,98,0,90,91,62,32,122,116,97,74,146,139,138,83,27,85,107,45,110,89,54,86,103,48,95,58,133,4,129,118,102,94,52,2,114,1,92,15,51,72,145,71,50,28,12,73,49,41,9,130,24,105,39,33,26,40,79,16,55,109,132,57,20,93,143,127,115,96,136,119,14,144,60,113}, // permutation 3
{124,123,79,94,144,54,67,29,10,136,25,86,14,48,73,145,69,6,82,87,39,113,135,126,98,92,65,85,2,119,23,97,64,130,31,88,81,35,118,128,37,59,115,99,33,53,30,51,143,21,107,140,42,141,41,55,68,127,0,26,34,108,132,27,129,133,120,71,17,114,24,110,60,83,109,134,8,40,104,11,4,38,18,56,90,105,121,5,28,95,70,139,72,74,36,49,63,46,1,111,93,96,52,117,32,50,80,61,45,66,57,76,15,20,7,75,77,138,3,22,62,91,116,12,106,125,131,102,43,100,58,142,47,44,122,9,16,89,147,19,78,101,112,84,137,103,146,13}, // permutation 4
{73,56,111,36,88,64,93,82,120,76,49,68,41,87,103,2,12,129,10,110,50,135,59,104,5,57,75,51,144,107,142,33,15,94,117,62,106,39,78,53,6,52,109,71,27,89,134,26,54,127,18,98,143,4,102,131,146,112,132,40,95,46,28,42,47,16,69,19,92,121,3,90,145,61,66,8,137,114,72,116,85,123,105,22,119,29,74,1,141,79,147,14,80,86,70,32,140,136,58,96,25,11,67,7,84,30,65,20,91,101,60,138,43,125,118,48,128,100,21,97,77,130,45,17,122,126,139,34,124,24,108,113,81,35,13,55,44,99,31,38,83,37,63,9,115,133,0,23}, // permutation 5
{43,41,114,94,3,113,26,140,75,69,91,120,123,135,15,141,146,77,8,106,44,27,110,68,72,99,105,67,145,34,46,133,89,122,56,7,112,49,121,30,83,32,129,70,95,11,37,76,52,64,111,10,4,117,138,39,85,57,5,137,115,142,90,25,80,88,86,23,36,2,84,107,73,74,131,13,21,116,40,6,55,0,108,98,48,9,33,79,136,31,132,22,18,82,93,109,101,35,17,29,51,128,102,134,66,71,63,97,16,12,96,144,60,19,139,20,58,103,42,45,92,38,100,127,124,47,14,53,81,126,50,61,119,24,104,130,147,59,28,54,143,65,125,62,87,78,1,118}, // permutation 6
{44,36,113,10,75,5,0,72,28,61,34,89,8,77,24,9,50,52,83,124,63,105,111,74,26,54,135,132,81,18,97,35,23,17,143,46,134,19,14,140,25,87,128,131,141,51,147,59,76,130,12,40,94,37,119,3,120,102,101,122,64,30,58,45,21,78,32,20,60,82,38,15,99,108,73,118,67,86,125,85,107,95,13,100,69,144,47,96,79,138,6,55,16,139,90,121,123,137,115,22,57,129,2,104,145,114,31,84,142,11,109,49,48,146,42,39,98,80,68,91,133,126,110,43,127,92,53,56,4,1,93,66,136,27,106,62,70,103,71,7,117,41,116,112,29,65,33,88}, // permutation 7
{131,32,16,75,143,84,70,26,115,105,40,103,21,61,45,121,37,50,88,41,135,14,146,98,8,86,0,126,127,139,48,140,125,39,31,123,2,107,136,42,91,133,106,59,47,3,29,109,67,95,15,110,49,71,97,120,130,9,102,79,116,55,43,111,4,7,90,11,124,30,24,117,142,25,38,12,113,44,73,27,5,34,76,65,6,145,20,93,94,35,101,19,112,114,78,100,81,60,122,63,80,85,52,96,87,77,132,99,56,72,28,66,89,68,51,82,54,23,74,138,17,58,128,10,147,108,104,144,53,118,62,57,33,137,22,46,1,92,64,119,141,18,36,13,83,69,129,134}, // permutation 8
{36,11,127,114,52,146,102,87,56,101,16,123,119,145,13,73,21,82,2,81,106,48,120,35,129,105,3,47,97,68,96,14,86,15,24,29,70,131,80,113,28,147,60,135,141,130,137,61,103,8,45,136,89,78,104,132,38,125,91,39,111,53,57,134,18,144,77,40,112,44,31,117,72,108,7,32,59,94,5,30,107,22,138,76,19,20,55,43,85,50,37,116,9,1,98,84,12,69,63,139,142,88,143,66,100,133,51,118,126,71,122,115,46,64,6,110,10,124,74,33,26,93,109,92,17,75,49,121,54,34,42,58,95,65,4,23,99,90,25,0,41,62,83,79,27,128,140,67} // permutation 9
};

// Seed: 58502906

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int16_t  f0;
   volatile uint64_t  f1;
};

union U1 {
   uint64_t  f0;
   int64_t  f1;
   volatile int8_t * f2;
   int64_t  f3;
   int8_t  f4;
};

union U2 {
   uint32_t  f0;
   int8_t * f1;
};

struct S3 {
    int32_t g_2;
    volatile VECTOR(int32_t, 4) g_5;
    int32_t g_7;
    uint8_t g_25;
    int8_t *g_29;
    volatile VECTOR(int32_t, 16) g_31;
    int16_t g_43;
    int32_t g_66[8][9][3];
    uint8_t *g_71;
    uint8_t **g_70;
    union U2 g_77;
    VECTOR(int64_t, 16) g_84;
    int64_t g_86;
    volatile VECTOR(uint8_t, 4) g_107;
    int32_t g_117;
    int32_t g_124[5][2];
    int32_t g_127;
    int32_t ** volatile g_128;
    int32_t *g_130[3][1];
    int32_t ** volatile g_129[6];
    VECTOR(int64_t, 4) g_139;
    VECTOR(int64_t, 16) g_141;
    union U0 g_147;
    uint16_t g_174;
    uint64_t g_201;
    uint32_t *g_246;
    int32_t *g_255[4][9][7];
    int32_t **g_254;
    uint8_t g_261;
    volatile int32_t g_262;
    uint8_t g_265;
    volatile VECTOR(uint16_t, 2) g_274;
    volatile VECTOR(uint16_t, 2) g_275;
    VECTOR(int64_t, 8) g_279;
    VECTOR(int64_t, 16) g_290;
    uint32_t g_296;
    int32_t g_299;
    uint32_t g_313;
    uint32_t g_314;
    union U0 g_316;
    int32_t * volatile g_317[9];
    volatile union U1 g_322;
    volatile union U1 *g_321;
    union U1 g_331;
    union U1 *g_330;
    union U1 **g_329[1];
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
union U2  func_1(struct S3 * p_332);
union U0  func_13(int8_t * p_14, int16_t  p_15, int8_t * p_16, int8_t * p_17, struct S3 * p_332);
int8_t * func_18(int32_t * p_19, int32_t * p_20, uint8_t  p_21, int16_t  p_22, int8_t * p_23, struct S3 * p_332);
int32_t  func_32(int16_t  p_33, uint8_t * p_34, uint8_t  p_35, uint16_t  p_36, uint32_t  p_37, struct S3 * p_332);
int32_t  func_40(uint32_t  p_41, union U1  p_42, struct S3 * p_332);
union U0  func_45(int32_t  p_46, struct S3 * p_332);
union U0  func_49(int32_t * p_50, uint8_t * p_51, uint8_t  p_52, uint64_t  p_53, struct S3 * p_332);
uint8_t * func_54(uint8_t ** p_55, int64_t  p_56, uint32_t  p_57, int32_t  p_58, struct S3 * p_332);
uint8_t ** func_59(uint8_t ** p_60, uint32_t  p_61, struct S3 * p_332);
uint8_t ** func_74(int8_t  p_75, struct S3 * p_332);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_332->g_2 p_332->g_5 p_332->g_7 p_332->g_25 p_332->g_29 p_332->g_43 p_332->g_70 p_332->g_66 p_332->g_71 p_332->g_77 p_332->g_86 p_332->g_127 p_332->g_84 p_332->g_174 p_332->g_139 p_332->g_124 p_332->g_147 p_332->g_265 p_332->g_261 p_332->l_comm_values p_332->g_316 p_332->g_321 p_332->g_254
 * writes: p_332->g_2 p_332->g_7 p_332->g_25 p_332->g_5 p_332->g_86 p_332->g_66 p_332->g_127 p_332->g_147.f0 p_332->g_70 p_332->g_84 p_332->g_174 p_332->g_201 p_332->g_124 p_332->g_265 p_332->g_313 p_332->g_314 p_332->g_261 p_332->g_321 p_332->g_130 p_332->g_255 p_332->g_329
 */
union U2  func_1(struct S3 * p_332)
{ /* block id: 4 */
    VECTOR(int32_t, 2) l_8 = (VECTOR(int32_t, 2))(1L, (-1L));
    int32_t *l_9 = (void*)0;
    int32_t *l_10 = &p_332->g_2;
    int8_t *l_315 = (void*)0;
    union U1 *l_325 = (void*)0;
    union U1 **l_324 = &l_325;
    union U1 ***l_327[6][8][5] = {{{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324}},{{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324}},{{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324}},{{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324}},{{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324}},{{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324},{&l_324,&l_324,&l_324,&l_324,&l_324}}};
    union U1 **l_328 = &l_325;
    int i, j, k;
    for (p_332->g_2 = (-21); (p_332->g_2 > 11); p_332->g_2 = safe_add_func_int32_t_s_s(p_332->g_2, 6))
    { /* block id: 7 */
        int32_t *l_6 = &p_332->g_7;
        (*l_6) ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(p_332->g_5.wz)).yxxxxyyxyyyxyxyx)).s6;
    }
    (*l_10) &= ((VECTOR(int32_t, 4))(l_8.yyxy)).w;
    for (p_332->g_2 = 0; (p_332->g_2 != (-15)); --p_332->g_2)
    { /* block id: 13 */
        uint8_t *l_24[9];
        int32_t l_26 = 0x2D901516L;
        uint32_t *l_312 = &p_332->g_313;
        int32_t l_318[3];
        union U1 ***l_326 = &l_324;
        int i;
        for (i = 0; i < 9; i++)
            l_24[i] = &p_332->g_25;
        for (i = 0; i < 3; i++)
            l_318[i] = 0x712AF9B7L;
        if ((*l_10))
            break;
        l_318[2] = (func_13((p_332->g_2 , func_18(&p_332->g_7, &p_332->g_7, (p_332->g_25--), p_332->g_7, p_332->g_29, p_332)), ((~(((((safe_rshift_func_uint8_t_u_s((l_26 | ((*l_312) = l_26)), 0)) < (p_332->g_314 = (l_26 == l_26))) | 0L) > 1UL) == 0xF6F8L)) == p_332->l_comm_values[(safe_mod_func_uint32_t_u_u(p_332->tid, 148))]), p_332->g_71, l_315, p_332) , l_26);
        for (p_332->g_261 = (-30); (p_332->g_261 > 28); p_332->g_261 = safe_add_func_uint16_t_u_u(p_332->g_261, 9))
        { /* block id: 118 */
            volatile union U1 **l_323 = &p_332->g_321;
            (*l_323) = p_332->g_321;
            (*p_332->g_254) = &l_318[0];
            l_8.y ^= 8L;
            if ((*l_10))
                break;
        }
        (*l_326) = l_324;
    }
    p_332->g_329[0] = (l_328 = &l_325);
    return p_332->g_77;
}


/* ------------------------------------------ */
/* 
 * reads : p_332->g_316
 * writes:
 */
union U0  func_13(int8_t * p_14, int16_t  p_15, int8_t * p_16, int8_t * p_17, struct S3 * p_332)
{ /* block id: 113 */
    return p_332->g_316;
}


/* ------------------------------------------ */
/* 
 * reads : p_332->g_31 p_332->g_7 p_332->g_43 p_332->g_70 p_332->g_66 p_332->g_71 p_332->g_77 p_332->g_25 p_332->g_84 p_332->g_5 p_332->g_86 p_332->g_29 p_332->g_comm_values p_332->g_107 p_332->g_124 p_332->g_127 p_332->g_139 p_332->g_141 p_332->g_147 p_332->g_147.f0 p_332->g_174 p_332->g_130 p_332->g_255 p_332->g_77.f0 p_332->g_261 p_332->g_262 p_332->g_265 p_332->g_274 p_332->g_275 p_332->g_279 p_332->g_290 p_332->g_246 p_332->g_2 p_332->g_296
 * writes: p_332->g_5 p_332->g_7 p_332->g_25 p_332->g_86 p_332->g_124 p_332->g_66 p_332->g_127 p_332->g_77.f0 p_332->g_147.f0 p_332->g_70 p_332->g_84 p_332->g_174 p_332->g_201 p_332->g_246 p_332->g_254 p_332->g_261 p_332->g_265 p_332->g_296 p_332->g_299
 */
int8_t * func_18(int32_t * p_19, int32_t * p_20, uint8_t  p_21, int16_t  p_22, int8_t * p_23, struct S3 * p_332)
{ /* block id: 16 */
    VECTOR(int32_t, 4) l_30 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7EDEDC87L), 0x7EDEDC87L);
    union U1 l_44 = {0xCF05746AC1DEA90CL};
    uint8_t *l_63 = &p_332->g_25;
    uint8_t **l_62[8][4][8] = {{{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63}},{{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63}},{{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63}},{{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63}},{{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63}},{{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63}},{{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63}},{{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63},{&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63,&l_63}}};
    uint8_t l_64 = 0x5EL;
    uint16_t *l_223 = &p_332->g_174;
    int i, j, k;
    p_332->g_5.z = 0x08C5540FL;
    (*p_20) |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_30.zy)), 2L, 0x430688CDL)).wzzwzwxxwyzyyxzx)), ((VECTOR(int32_t, 16))(p_332->g_31.sc28cbd6cd538770c)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-1L), 0x3E99B96BL)).xyyxyxyx)).odd)).hi)).xxxxxyyy)).s3260420056325645))))).sa;
    l_62[7][1][4] = (func_32(((+((l_30.w = (safe_div_func_int32_t_s_s(((*p_20) = func_40(p_332->g_43, l_44, p_332)), (((func_45((((((*l_223) = (safe_rshift_func_uint8_t_u_s((func_49(p_20, func_54(func_59(l_62[4][0][1], l_64, p_332), p_21, (safe_lshift_func_int16_t_s_s(p_332->g_66[7][2][1], l_44.f0)), p_332->g_43, p_332), l_44.f0, p_21, p_332) , (**p_332->g_70)), 2))) , (void*)0) == (void*)0) <= p_21), p_332) , FAKE_DIVERGE(p_332->group_0_offset, get_group_id(0), 10)) || GROUP_DIVERGE(0, 1)) | l_30.z)))) && l_30.z)) != l_64), p_332->g_71, p_332->g_2, l_44.f0, p_21, p_332) , (void*)0);
    return l_63;
}


/* ------------------------------------------ */
/* 
 * reads : p_332->g_124
 * writes: p_332->g_124
 */
int32_t  func_32(int16_t  p_33, uint8_t * p_34, uint8_t  p_35, uint16_t  p_36, uint32_t  p_37, struct S3 * p_332)
{ /* block id: 104 */
    uint8_t l_305 = 7UL;
    int32_t *l_306 = &p_332->g_124[2][0];
    uint16_t *l_307 = &p_332->g_174;
    uint16_t *l_309 = &p_332->g_174;
    uint16_t **l_308 = &l_309;
    (*l_306) ^= l_305;
    (*l_306) = (l_307 != (FAKE_DIVERGE(p_332->group_0_offset, get_group_id(0), 10) , ((*l_308) = l_307)));
    return (*l_306);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_40(uint32_t  p_41, union U1  p_42, struct S3 * p_332)
{ /* block id: 19 */
    return p_42.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_332->g_130 p_332->g_66 p_332->g_255 p_332->g_71 p_332->g_25 p_332->g_77.f0 p_332->g_261 p_332->g_262 p_332->g_comm_values p_332->g_265 p_332->g_274 p_332->g_275 p_332->g_70 p_332->g_279 p_332->g_290 p_332->g_246 p_332->g_2 p_332->g_296 p_332->g_86 p_332->g_147
 * writes: p_332->g_246 p_332->g_254 p_332->g_261 p_332->g_265 p_332->g_296 p_332->g_299 p_332->g_86
 */
union U0  func_45(int32_t  p_46, struct S3 * p_332)
{ /* block id: 84 */
    int8_t l_229 = 1L;
    uint32_t *l_245 = &p_332->g_77.f0;
    uint32_t **l_244 = &l_245;
    int32_t **l_249 = (void*)0;
    int32_t ***l_250 = (void*)0;
    int32_t ***l_251 = (void*)0;
    int32_t ***l_252[2][5][3] = {{{&l_249,&l_249,(void*)0},{&l_249,&l_249,(void*)0},{&l_249,&l_249,(void*)0},{&l_249,&l_249,(void*)0},{&l_249,&l_249,(void*)0}},{{&l_249,&l_249,(void*)0},{&l_249,&l_249,(void*)0},{&l_249,&l_249,(void*)0},{&l_249,&l_249,(void*)0},{&l_249,&l_249,(void*)0}}};
    int32_t **l_253 = (void*)0;
    uint8_t *l_260 = &p_332->g_261;
    int32_t l_263 = (-2L);
    int16_t l_264[1][10][5] = {{{0x241FL,(-1L),0x4A28L,0x6E20L,(-1L)},{0x241FL,(-1L),0x4A28L,0x6E20L,(-1L)},{0x241FL,(-1L),0x4A28L,0x6E20L,(-1L)},{0x241FL,(-1L),0x4A28L,0x6E20L,(-1L)},{0x241FL,(-1L),0x4A28L,0x6E20L,(-1L)},{0x241FL,(-1L),0x4A28L,0x6E20L,(-1L)},{0x241FL,(-1L),0x4A28L,0x6E20L,(-1L)},{0x241FL,(-1L),0x4A28L,0x6E20L,(-1L)},{0x241FL,(-1L),0x4A28L,0x6E20L,(-1L)},{0x241FL,(-1L),0x4A28L,0x6E20L,(-1L)}}};
    VECTOR(int64_t, 4) l_282 = (VECTOR(int64_t, 4))(0x01BA0723F2FACD07L, (VECTOR(int64_t, 2))(0x01BA0723F2FACD07L, 0x00FB13ED26C3D5ACL), 0x00FB13ED26C3D5ACL);
    VECTOR(int64_t, 4) l_283 = (VECTOR(int64_t, 4))(0x4FAA4DC28CC5898FL, (VECTOR(int64_t, 2))(0x4FAA4DC28CC5898FL, 0x7B5ECB837798A507L), 0x7B5ECB837798A507L);
    VECTOR(int64_t, 4) l_284 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 5L), 5L);
    VECTOR(int64_t, 8) l_285 = (VECTOR(int64_t, 8))(0x3600DA550092BA3BL, (VECTOR(int64_t, 4))(0x3600DA550092BA3BL, (VECTOR(int64_t, 2))(0x3600DA550092BA3BL, 0x349288DCEFEB4F25L), 0x349288DCEFEB4F25L), 0x349288DCEFEB4F25L, 0x3600DA550092BA3BL, 0x349288DCEFEB4F25L);
    VECTOR(int64_t, 16) l_286 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x55373DBFDDC7371EL), 0x55373DBFDDC7371EL), 0x55373DBFDDC7371EL, (-1L), 0x55373DBFDDC7371EL, (VECTOR(int64_t, 2))((-1L), 0x55373DBFDDC7371EL), (VECTOR(int64_t, 2))((-1L), 0x55373DBFDDC7371EL), (-1L), 0x55373DBFDDC7371EL, (-1L), 0x55373DBFDDC7371EL);
    VECTOR(int64_t, 16) l_287 = (VECTOR(int64_t, 16))(0x6696FC550BE4A081L, (VECTOR(int64_t, 4))(0x6696FC550BE4A081L, (VECTOR(int64_t, 2))(0x6696FC550BE4A081L, 0x68E12E99EA02A07AL), 0x68E12E99EA02A07AL), 0x68E12E99EA02A07AL, 0x6696FC550BE4A081L, 0x68E12E99EA02A07AL, (VECTOR(int64_t, 2))(0x6696FC550BE4A081L, 0x68E12E99EA02A07AL), (VECTOR(int64_t, 2))(0x6696FC550BE4A081L, 0x68E12E99EA02A07AL), 0x6696FC550BE4A081L, 0x68E12E99EA02A07AL, 0x6696FC550BE4A081L, 0x68E12E99EA02A07AL);
    VECTOR(int64_t, 8) l_288 = (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 5L), 5L), 5L, 0L, 5L);
    VECTOR(int64_t, 4) l_289 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 2L), 2L);
    VECTOR(int64_t, 2) l_291 = (VECTOR(int64_t, 2))(0x7C6F24E54BFEFC73L, (-10L));
    VECTOR(int64_t, 16) l_292 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x510C8457E0294ABEL), 0x510C8457E0294ABEL), 0x510C8457E0294ABEL, (-1L), 0x510C8457E0294ABEL, (VECTOR(int64_t, 2))((-1L), 0x510C8457E0294ABEL), (VECTOR(int64_t, 2))((-1L), 0x510C8457E0294ABEL), (-1L), 0x510C8457E0294ABEL, (-1L), 0x510C8457E0294ABEL);
    uint16_t *l_293 = &p_332->g_174;
    uint32_t *l_294 = (void*)0;
    uint32_t *l_295 = &p_332->g_296;
    int8_t *l_297 = (void*)0;
    int8_t *l_298[4][6] = {{(void*)0,&l_229,(void*)0,(void*)0,&l_229,(void*)0},{(void*)0,&l_229,(void*)0,(void*)0,&l_229,(void*)0},{(void*)0,&l_229,(void*)0,(void*)0,&l_229,(void*)0},{(void*)0,&l_229,(void*)0,(void*)0,&l_229,(void*)0}};
    uint16_t l_300 = 65530UL;
    VECTOR(int32_t, 4) l_301 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 3L), 3L);
    int i, j, k;
    l_263 = ((safe_mul_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((((safe_mul_func_int16_t_s_s(l_229, ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(65530UL, 3UL)).lo, ((safe_add_func_int8_t_s_s(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 8))(0x26L, (-4L), (safe_lshift_func_uint8_t_u_u((((+(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((*l_260) |= (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((p_332->g_246 = ((*l_244) = p_332->g_130[1][0])) == (((safe_mul_func_uint8_t_u_u((l_229 , ((l_253 = l_249) != (p_332->g_254 = &p_332->g_130[1][0]))), ((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_46, 8)), p_46)) > p_332->g_66[7][2][1]))) && (0x2CFCB363515B0F2CL && p_46)) , p_332->g_255[1][6][5])), (*p_332->g_71))) & p_332->g_77.f0), 0xCCL))), p_46)), p_46)) | p_332->g_77.f0) && p_46)) , p_46) | p_332->g_262), 2)), (-1L), ((VECTOR(int8_t, 2))(0x4FL)), 0L, 0L)).s20, (int8_t)p_46))).hi, 0x9AL)) && p_332->g_comm_values[p_332->tid]))) != 254UL), 0x64C9L, ((VECTOR(int16_t, 2))(0x7ED0L)), ((VECTOR(int16_t, 2))(0L)), ((VECTOR(int16_t, 8))((-6L))), 0L, (-5L))).lo)), ((VECTOR(int16_t, 8))(1L))))).s1)) & 0x6884B2BF600C539AL) & 0x7B3BL))), p_46)) < 0x1414L);
    ++p_332->g_265;
    l_301.z = (~((safe_mod_func_int16_t_s_s((-4L), ((+(p_46 != (l_300 ^= (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 8))(p_332->g_274.xxxxyxxy)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(p_332->g_275.xxyy)).even)).xxyxxxyx))).s4, (safe_unary_minus_func_int16_t_s(((**p_332->g_70) == ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(1UL, ((safe_mul_func_int8_t_s_s((((VECTOR(int64_t, 2))(p_332->g_279.s01)).lo >= GROUP_DIVERGE(0, 1)), p_46)) || (p_332->g_299 = (((*l_295) &= (safe_add_func_uint8_t_u_u((l_260 != (*p_332->g_70)), (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 2))(0x3C3FD210D4255992L, 0x538191E20E82DD26L)).yyxyxxyy, ((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(l_282.xzyy)).ywwyxywx)).s5764414523745275)).lo, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_283.xyxzyyzwwxxzwyxx)).s17ad)).ywywzzwz))).odd)))).even, ((VECTOR(int64_t, 2))((-1L), (-1L))), ((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 8))(0x523C691C45DC3CB3L, 3L, ((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x223F371B4ADB1131L, 1L)))).yyyx, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_284.zzzwxxwxxxzyyyzy)).sc9f8)).odd, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(l_285.s4232)))).wxxzxyzxyyzwyxxz, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_286.s66309ec3)).s1445772072231057))))).odd)).s26)))).yxyyxyyx)).s4303575034533703)).s48))), ((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_287.s7b42)).odd)).yyxx, (int64_t)((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(0x65B0DAB34724CC38L, p_46, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_288.s20)))).xxxy, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x71523639F2C87622L, (-8L))).xyxyxxxy)).s5352061705607364, ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 8))(l_289.xwyxzwww)).s57, ((VECTOR(int64_t, 2))(p_332->g_290.sb1))))).yyxxyxxyyxyxyxyy))))).s1b)).yxxy, ((VECTOR(int64_t, 2))(0x14548E907C6F90B0L, 0x195E1FE765B9DE5BL)).yxyy))).wwyyzwyx, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 2))(l_291.yy)), ((VECTOR(int64_t, 2))(l_292.s02))))).yxyyyyyx))).s0471645602451670)).sa, (((((((((p_332->g_66[7][2][1] == (l_260 == (void*)0)) >= 0UL) , (void*)0) != l_293) & p_46) ^ 4294967295UL) & (*p_332->g_246)) , p_46) < (*p_332->g_246)), (-1L), (-1L), 0L, 0x33625494368E305AL)))).s3))).odd))).yxyxxyxyyxxyxxyx)).sad12))), 4L, 0x4E0169560D00AA1BL)), ((VECTOR(int64_t, 8))(0x374A12BDEA780967L)), ((VECTOR(int64_t, 8))((-7L)))))).s77, ((VECTOR(int64_t, 2))(0x6E4CBBCD08625C24L)))))))).xyyyxxxx))), ((VECTOR(int64_t, 8))(0x7309A82928B8FDDDL))))).even, ((VECTOR(int64_t, 4))(1L))))))))).y || p_332->g_77.f0)))) < 0x965924FAL))), 0x09L, 0xFFL, 254UL, p_46, 0xF8L, 0x72L)))).s5))))), 7))))) , p_332->g_261))) && GROUP_DIVERGE(2, 1)));
    for (p_332->g_86 = 0; (p_332->g_86 < 6); p_332->g_86 = safe_add_func_uint8_t_u_u(p_332->g_86, 7))
    { /* block id: 98 */
        int64_t l_304 = 1L;
        l_304 = p_46;
        if (l_304)
            continue;
    }
    return p_332->g_147;
}


/* ------------------------------------------ */
/* 
 * reads : p_332->g_77 p_332->g_43 p_332->g_71 p_332->g_70 p_332->g_25 p_332->g_84 p_332->g_5 p_332->g_86 p_332->g_29 p_332->g_comm_values p_332->g_107 p_332->g_66 p_332->g_124 p_332->g_127 p_332->g_139 p_332->g_141 p_332->g_147 p_332->g_147.f0 p_332->g_174
 * writes: p_332->g_25 p_332->g_86 p_332->g_124 p_332->g_66 p_332->g_127 p_332->g_77.f0 p_332->g_147.f0 p_332->g_70 p_332->g_84 p_332->g_174 p_332->g_201
 */
union U0  func_49(int32_t * p_50, uint8_t * p_51, uint8_t  p_52, uint64_t  p_53, struct S3 * p_332)
{ /* block id: 27 */
    union U1 l_76 = {0xF6C97C2B18C892F9L};
    VECTOR(int64_t, 2) l_85 = (VECTOR(int64_t, 2))(1L, (-1L));
    uint8_t ***l_165 = &p_332->g_70;
    VECTOR(int8_t, 2) l_166 = (VECTOR(int8_t, 2))(0x07L, 1L);
    int64_t *l_169 = (void*)0;
    int32_t l_172 = 0x021EC393L;
    uint16_t *l_173 = &p_332->g_174;
    uint32_t l_190 = 8UL;
    VECTOR(uint8_t, 4) l_202 = (VECTOR(uint8_t, 4))(0x3CL, (VECTOR(uint8_t, 2))(0x3CL, 8UL), 8UL);
    int32_t l_206 = 8L;
    int32_t l_207 = (-3L);
    int32_t l_208 = 0L;
    int32_t l_209 = 0x7D3E07EBL;
    int32_t l_214 = 0x352CCDEEL;
    int32_t l_215 = 9L;
    int32_t l_216 = 1L;
    int32_t l_217[5];
    int i;
    for (i = 0; i < 5; i++)
        l_217[i] = 3L;
    (*l_165) = func_74(((l_76 , (((p_332->g_77 , l_76.f0) == (((p_332->g_43 , p_332->g_71) == (((safe_add_func_int8_t_s_s(p_332->g_43, (0xEEC8L < (p_332->g_86 &= ((safe_mul_func_uint8_t_u_u((--(**p_332->g_70)), (((VECTOR(int8_t, 16))((!((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))((-7L), 1L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 16))(p_332->g_84.s8233f3924104b6a6)).sb6, ((VECTOR(int64_t, 8))(l_85.yxxyyyyx)).s15))), 0x694C56F68EFB8CC5L, 0x0EF88CBA7A3D7248L)), 0x427E885CFE2AFDD6L, 0x04C6C14278DB3D83L)), ((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 8))(0x72C337E63E716A1BL, (8L < p_332->g_5.y), ((VECTOR(int64_t, 4))(1L)), 1L, 0x35C8199CC8C39940L)).lo, ((VECTOR(int64_t, 4))(0x084A9EC0CD882E3DL)), ((VECTOR(int64_t, 4))(2L))))), ((VECTOR(int64_t, 4))(0L)))))).s06)).even > l_85.x) > p_53)), ((VECTOR(int8_t, 8))((-10L))), ((VECTOR(int8_t, 4))(0x5AL)), ((VECTOR(int8_t, 2))(4L)), 0x24L)).sc <= p_53))) , l_85.y))))) , p_332->g_86) , p_332->g_29)) <= l_85.y)) <= l_76.f0)) , l_85.x), p_332);
    if ((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_166.yyyy)).lo)).lo , (0UL > (safe_rshift_func_uint8_t_u_u(((p_332->g_84.s0 ^= l_166.x) , (safe_lshift_func_uint16_t_u_s((--(*l_173)), 4))), (*p_332->g_71))))))
    { /* block id: 65 */
        int16_t l_181 = 0x2D33L;
        int16_t *l_191 = &l_181;
        int32_t l_192 = 0x1B1EE1E0L;
        l_172 |= l_76.f0;
        l_192 |= (safe_sub_func_int32_t_s_s(0x5A36ACC4L, (((safe_rshift_func_uint8_t_u_s((l_181 ^= (*p_332->g_71)), 0)) , p_53) , (l_172 |= (((safe_rshift_func_uint8_t_u_s((0UL && (safe_add_func_int32_t_s_s(((l_181 || (((*l_191) = (((safe_add_func_uint8_t_u_u((p_332->g_25 >= (safe_div_func_uint32_t_u_u(l_190, (-1L)))), (*p_332->g_71))) == l_181) | (*p_51))) || 0x6AAEL)) || l_181), p_52))), p_332->g_139.z)) == l_190) , p_53)))));
    }
    else
    { /* block id: 71 */
        uint32_t l_193 = 1UL;
        VECTOR(uint16_t, 16) l_199 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65531UL), 65531UL), 65531UL, 1UL, 65531UL, (VECTOR(uint16_t, 2))(1UL, 65531UL), (VECTOR(uint16_t, 2))(1UL, 65531UL), 1UL, 65531UL, 1UL, 65531UL);
        int32_t l_205 = 0L;
        int32_t l_210 = 1L;
        int32_t l_212 = 0L;
        int32_t l_218 = 0x70D8E6E7L;
        int32_t l_219[6][4][4] = {{{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L}},{{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L}},{{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L}},{{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L}},{{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L}},{{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L},{0x3F691D8EL,0x1C7C274EL,(-6L),7L}}};
        int i, j, k;
        l_193--;
        for (p_52 = (-1); (p_52 >= 1); ++p_52)
        { /* block id: 75 */
            VECTOR(uint8_t, 16) l_198 = (VECTOR(uint8_t, 16))(0xE3L, (VECTOR(uint8_t, 4))(0xE3L, (VECTOR(uint8_t, 2))(0xE3L, 0x97L), 0x97L), 0x97L, 0xE3L, 0x97L, (VECTOR(uint8_t, 2))(0xE3L, 0x97L), (VECTOR(uint8_t, 2))(0xE3L, 0x97L), 0xE3L, 0x97L, 0xE3L, 0x97L);
            uint64_t *l_200 = &p_332->g_201;
            int32_t *l_203 = &p_332->g_124[1][0];
            int32_t *l_204[9];
            int8_t l_211 = (-7L);
            int16_t l_213 = 0x3E95L;
            uint32_t l_220 = 6UL;
            int i;
            for (i = 0; i < 9; i++)
                l_204[i] = &p_332->g_66[7][2][1];
            (*l_203) = (((VECTOR(uint8_t, 8))(250UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_198.sef)).xyxy)), 0x3EL, 0xB2L, 0xFAL)).s7 , ((p_332->g_139.z && (((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 2))(l_199.s74)).yyxyxxyxxxyyyxyy, ((VECTOR(uint16_t, 2))(65534UL, 65532UL)).yyyxyyyyxxxyyxxy))).s6 ^ (0x7341646E61053FC6L && ((*l_200) = p_53)))) < (((VECTOR(uint8_t, 4))(l_202.xxzx)).z > 9UL)));
            if ((*l_203))
                break;
            l_220--;
        }
    }
    return p_332->g_147;
}


/* ------------------------------------------ */
/* 
 * reads : p_332->g_70 p_332->g_71
 * writes:
 */
uint8_t * func_54(uint8_t ** p_55, int64_t  p_56, uint32_t  p_57, int32_t  p_58, struct S3 * p_332)
{ /* block id: 25 */
    return (*p_332->g_70);
}


/* ------------------------------------------ */
/* 
 * reads : p_332->g_70
 * writes:
 */
uint8_t ** func_59(uint8_t ** p_60, uint32_t  p_61, struct S3 * p_332)
{ /* block id: 22 */
    int32_t *l_65[3];
    uint16_t l_67 = 7UL;
    int i;
    for (i = 0; i < 3; i++)
        l_65[i] = &p_332->g_66[7][2][1];
    l_67++;
    return p_332->g_70;
}


/* ------------------------------------------ */
/* 
 * reads : p_332->g_comm_values p_332->g_107 p_332->g_70 p_332->g_71 p_332->g_25 p_332->g_66 p_332->g_124 p_332->g_84 p_332->g_127 p_332->g_139 p_332->g_141 p_332->g_147 p_332->g_147.f0
 * writes: p_332->g_25 p_332->g_124 p_332->g_66 p_332->g_127 p_332->g_77.f0 p_332->g_147.f0
 */
uint8_t ** func_74(int8_t  p_75, struct S3 * p_332)
{ /* block id: 30 */
    uint8_t *l_87[2][4][1];
    VECTOR(uint8_t, 16) l_92 = (VECTOR(uint8_t, 16))(0xB4L, (VECTOR(uint8_t, 4))(0xB4L, (VECTOR(uint8_t, 2))(0xB4L, 0x1FL), 0x1FL), 0x1FL, 0xB4L, 0x1FL, (VECTOR(uint8_t, 2))(0xB4L, 0x1FL), (VECTOR(uint8_t, 2))(0xB4L, 0x1FL), 0xB4L, 0x1FL, 0xB4L, 0x1FL);
    union U2 l_105[4] = {{0x3D1AAD79L},{0x3D1AAD79L},{0x3D1AAD79L},{0x3D1AAD79L}};
    VECTOR(uint8_t, 2) l_106 = (VECTOR(uint8_t, 2))(0x97L, 250UL);
    int32_t *l_116[7];
    int32_t l_118[8] = {0x7C93EDB1L,0x7C93EDB1L,0x7C93EDB1L,0x7C93EDB1L,0x7C93EDB1L,0x7C93EDB1L,0x7C93EDB1L,0x7C93EDB1L};
    int32_t l_119 = 0x0FCB5441L;
    int16_t l_120 = 0L;
    int16_t *l_121 = &l_120;
    int32_t l_122 = 0x1741CDAEL;
    int32_t *l_123 = &p_332->g_124[2][0];
    int32_t *l_125 = &p_332->g_66[0][0][1];
    int32_t *l_126 = &p_332->g_127;
    VECTOR(int64_t, 16) l_140 = (VECTOR(int64_t, 16))(0x28B82CCCD2540276L, (VECTOR(int64_t, 4))(0x28B82CCCD2540276L, (VECTOR(int64_t, 2))(0x28B82CCCD2540276L, 0x4F728D4A7C34602AL), 0x4F728D4A7C34602AL), 0x4F728D4A7C34602AL, 0x28B82CCCD2540276L, 0x4F728D4A7C34602AL, (VECTOR(int64_t, 2))(0x28B82CCCD2540276L, 0x4F728D4A7C34602AL), (VECTOR(int64_t, 2))(0x28B82CCCD2540276L, 0x4F728D4A7C34602AL), 0x28B82CCCD2540276L, 0x4F728D4A7C34602AL, 0x28B82CCCD2540276L, 0x4F728D4A7C34602AL);
    VECTOR(uint8_t, 16) l_151 = (VECTOR(uint8_t, 16))(0xC5L, (VECTOR(uint8_t, 4))(0xC5L, (VECTOR(uint8_t, 2))(0xC5L, 0x2BL), 0x2BL), 0x2BL, 0xC5L, 0x2BL, (VECTOR(uint8_t, 2))(0xC5L, 0x2BL), (VECTOR(uint8_t, 2))(0xC5L, 0x2BL), 0xC5L, 0x2BL, 0xC5L, 0x2BL);
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_87[i][j][k] = &p_332->g_25;
        }
    }
    for (i = 0; i < 7; i++)
        l_116[i] = &p_332->g_117;
    (*l_126) = ((*l_125) = ((((l_87[1][1][0] == (void*)0) >= ((safe_div_func_int8_t_s_s(p_75, ((VECTOR(uint8_t, 16))(l_92.s191750ccda4a6fb2)).s7)) == (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(abs(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((*l_123) ^= ((((((safe_mod_func_int64_t_s_s((safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s(((l_122 |= ((*l_121) = ((safe_mul_func_uint8_t_u_u((~((safe_mod_func_int8_t_s_s((p_332->g_comm_values[p_332->tid] | (safe_lshift_func_uint8_t_u_u(p_75, (l_105[1] , ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_106.yyyx)), ((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),VECTOR(uint8_t, 8),((VECTOR(uint8_t, 16))(p_332->g_107.yzwzywxwzxzzzwzy)).lo, ((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(255UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(0x11L, ((**p_332->g_70) &= ((l_119 |= ((((l_118[3] |= (((~3L) || (safe_div_func_uint16_t_u_u(p_75, (safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((&l_87[1][1][0] == (void*)0), 11)) & p_75), p_75)), 0x4FL))))) | FAKE_DIVERGE(p_332->global_0_offset, get_global_id(0), 10))) , (-7L)) > 0x76DE51AEL) <= 65528UL)) == 0x559A9D03L)), ((VECTOR(uint8_t, 4))(0x48L)), 0x38L, 0UL)).s7656616215655254)))).seea5, (uint8_t)(*p_332->g_71)))))), (**p_332->g_70), 0x4FL, 0x63L)).hi)), ((VECTOR(uint8_t, 4))(0x92L)), ((VECTOR(uint8_t, 4))(0UL))))).wyzzxwww, ((VECTOR(uint8_t, 8))(0UL))))), 1UL, FAKE_DIVERGE(p_332->local_0_offset, get_local_id(0), 10), 0xA5L, 0x68L)).s2b))).yyyy, ((VECTOR(uint8_t, 4))(0UL))))), ((VECTOR(uint8_t, 2))(0xD7L)), 0UL, 0UL)).s7)))), l_120)) > p_75)), p_75)) != l_106.y))) & 0x1651L), (-1L))), 9UL)), 0xC84E1C3C384FE049L)) > l_105[1].f0) & p_75) == FAKE_DIVERGE(p_332->local_1_offset, get_local_id(1), 10)) < p_332->g_66[7][2][1]) || 0x782AL)), ((VECTOR(int32_t, 2))((-7L))), p_75, p_332->g_84.sb, (-1L), 0L, 0x22FE7AF7L)).even, ((VECTOR(int32_t, 4))(1L))))), ((VECTOR(int32_t, 2))(0x1E5138A1L)), 1L, 0x5E4669C2L)).s3507200551246345))).se9)).odd >= p_332->g_66[7][2][1]))) && p_75) && (-2L)));
    (*l_126) ^= (&l_120 == &p_332->g_43);
    l_125 = &l_119;
    for (l_122 = 23; (l_122 < 19); l_122 = safe_sub_func_uint8_t_u_u(l_122, 8))
    { /* block id: 43 */
        int32_t *l_150[4] = {&p_332->g_117,&p_332->g_117,&p_332->g_117,&p_332->g_117};
        int32_t l_156 = 0x239324AFL;
        int32_t l_157[5] = {(-4L),(-4L),(-4L),(-4L),(-4L)};
        int i;
        if (p_75)
            break;
        for (l_120 = 0; (l_120 <= (-18)); l_120 = safe_sub_func_uint64_t_u_u(l_120, 8))
        { /* block id: 47 */
            uint8_t *l_144 = &p_332->g_25;
            uint32_t *l_152 = &l_105[1].f0;
            int64_t *l_153 = (void*)0;
            int64_t *l_154 = (void*)0;
            int64_t *l_155[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_158 = (void*)0;
            int32_t *l_159 = &p_332->g_66[0][3][2];
            int i;
            (*l_159) |= ((safe_div_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(0xDBCCD91B382BD884L, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(abs_diff(((VECTOR(int64_t, 16))(p_332->g_139.wxzwwywyyzyyxwww)).sb994, ((VECTOR(int64_t, 8))(l_140.sec4bbd00)).odd)))))))).wyzwzyyw)).s76, ((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 8))(sub_sat(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 8))(p_332->g_141.s0e49bb20)).s6614773327563424, (int64_t)(((((p_332->g_107.w , (safe_rshift_func_uint16_t_u_u((((((0UL <= ((*p_332->g_70) == l_144)) , (((safe_add_func_int64_t_s_s((p_332->g_147 , (!(l_156 = (safe_mul_func_int16_t_s_s((((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0L, 0x4396L)))).lo | FAKE_DIVERGE(p_332->local_1_offset, get_local_id(1), 10)), (((p_332->g_77.f0 = (((((*l_125) = ((void*)0 == l_150[3])) < ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_151.sd1)).yyyx)).z) == ((*l_152) = 0x91267525L)) ^ 0xF15AL)) , &p_332->g_130[1][0]) != &l_126)))))), l_157[3])) <= 1L) , p_75)) != p_75) <= p_332->g_25) == p_75), 3))) , (*l_123)) | p_332->g_127) , p_75) , (-5L))))).odd, ((VECTOR(int64_t, 8))((-9L)))))).s5263454753222664, ((VECTOR(int64_t, 16))((-1L)))))).se441, ((VECTOR(int64_t, 4))(0x314324DB4BE80861L))))).yyzyxwwy)))).s32))), ((VECTOR(uint64_t, 2))(18446744073709551615UL))))), 0x6F912460D410FCCDL, 1UL)).y)) , 0x33L), p_75)) == FAKE_DIVERGE(p_332->group_0_offset, get_group_id(0), 10));
            for (p_332->g_147.f0 = (-21); (p_332->g_147.f0 >= 20); ++p_332->g_147.f0)
            { /* block id: 55 */
                uint32_t l_162 = 4294967295UL;
                l_162--;
            }
            l_158 = &l_118[5];
        }
    }
    return &p_332->g_71;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[148];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 148; i++)
            l_comm_values[i] = 1;
    struct S3 c_333;
    struct S3* p_332 = &c_333;
    struct S3 c_334 = {
        0x36EB6B9DL, // p_332->g_2
        (VECTOR(int32_t, 4))(0x7182ABBFL, (VECTOR(int32_t, 2))(0x7182ABBFL, 0x4F257925L), 0x4F257925L), // p_332->g_5
        (-10L), // p_332->g_7
        0x9EL, // p_332->g_25
        (void*)0, // p_332->g_29
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 8L), 8L), 8L, 0L, 8L, (VECTOR(int32_t, 2))(0L, 8L), (VECTOR(int32_t, 2))(0L, 8L), 0L, 8L, 0L, 8L), // p_332->g_31
        (-5L), // p_332->g_43
        {{{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L}},{{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L}},{{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L}},{{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L}},{{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L}},{{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L}},{{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L}},{{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L},{0L,0L,1L}}}, // p_332->g_66
        &p_332->g_25, // p_332->g_71
        &p_332->g_71, // p_332->g_70
        {0UL}, // p_332->g_77
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x4A632B0D1CDFBE84L), 0x4A632B0D1CDFBE84L), 0x4A632B0D1CDFBE84L, 1L, 0x4A632B0D1CDFBE84L, (VECTOR(int64_t, 2))(1L, 0x4A632B0D1CDFBE84L), (VECTOR(int64_t, 2))(1L, 0x4A632B0D1CDFBE84L), 1L, 0x4A632B0D1CDFBE84L, 1L, 0x4A632B0D1CDFBE84L), // p_332->g_84
        0x3A0D747CD2075E55L, // p_332->g_86
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 248UL), 248UL), // p_332->g_107
        5L, // p_332->g_117
        {{(-7L),(-7L)},{(-7L),(-7L)},{(-7L),(-7L)},{(-7L),(-7L)},{(-7L),(-7L)}}, // p_332->g_124
        (-1L), // p_332->g_127
        (void*)0, // p_332->g_128
        {{&p_332->g_2},{&p_332->g_2},{&p_332->g_2}}, // p_332->g_130
        {&p_332->g_130[1][0],&p_332->g_130[1][0],&p_332->g_130[1][0],&p_332->g_130[1][0],&p_332->g_130[1][0],&p_332->g_130[1][0]}, // p_332->g_129
        (VECTOR(int64_t, 4))(0x651FD47A3A9A028DL, (VECTOR(int64_t, 2))(0x651FD47A3A9A028DL, 0x6CA67439DE11BDC7L), 0x6CA67439DE11BDC7L), // p_332->g_139
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x01E96B0A0D92CAECL), 0x01E96B0A0D92CAECL), 0x01E96B0A0D92CAECL, (-1L), 0x01E96B0A0D92CAECL, (VECTOR(int64_t, 2))((-1L), 0x01E96B0A0D92CAECL), (VECTOR(int64_t, 2))((-1L), 0x01E96B0A0D92CAECL), (-1L), 0x01E96B0A0D92CAECL, (-1L), 0x01E96B0A0D92CAECL), // p_332->g_141
        {0x2A3DL}, // p_332->g_147
        65529UL, // p_332->g_174
        0x7BB2D01FADEA91A9L, // p_332->g_201
        &p_332->g_77.f0, // p_332->g_246
        {{{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]}},{{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]}},{{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]}},{{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]},{(void*)0,(void*)0,&p_332->g_66[7][2][1],&p_332->g_66[4][5][1],&p_332->g_124[2][0],&p_332->g_66[4][5][1],&p_332->g_66[7][2][1]}}}, // p_332->g_255
        &p_332->g_255[1][6][5], // p_332->g_254
        255UL, // p_332->g_261
        (-5L), // p_332->g_262
        0xDDL, // p_332->g_265
        (VECTOR(uint16_t, 2))(0x6EC5L, 65535UL), // p_332->g_274
        (VECTOR(uint16_t, 2))(65535UL, 0xF669L), // p_332->g_275
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x0F8D8FAEBD4348B6L), 0x0F8D8FAEBD4348B6L), 0x0F8D8FAEBD4348B6L, (-1L), 0x0F8D8FAEBD4348B6L), // p_332->g_279
        (VECTOR(int64_t, 16))(0x654F2F051B36B28DL, (VECTOR(int64_t, 4))(0x654F2F051B36B28DL, (VECTOR(int64_t, 2))(0x654F2F051B36B28DL, 0L), 0L), 0L, 0x654F2F051B36B28DL, 0L, (VECTOR(int64_t, 2))(0x654F2F051B36B28DL, 0L), (VECTOR(int64_t, 2))(0x654F2F051B36B28DL, 0L), 0x654F2F051B36B28DL, 0L, 0x654F2F051B36B28DL, 0L), // p_332->g_290
        0x265BF2FEL, // p_332->g_296
        0x0333C6F8L, // p_332->g_299
        0xC66C8F80L, // p_332->g_313
        0x7864B7A5L, // p_332->g_314
        {0L}, // p_332->g_316
        {&p_332->g_299,&p_332->g_299,&p_332->g_299,&p_332->g_299,&p_332->g_299,&p_332->g_299,&p_332->g_299,&p_332->g_299,&p_332->g_299}, // p_332->g_317
        {0x1F69BA88B05C5E7CL}, // p_332->g_322
        &p_332->g_322, // p_332->g_321
        {18446744073709551608UL}, // p_332->g_331
        &p_332->g_331, // p_332->g_330
        {&p_332->g_330}, // p_332->g_329
        0, // p_332->v_collective
        sequence_input[get_global_id(0)], // p_332->global_0_offset
        sequence_input[get_global_id(1)], // p_332->global_1_offset
        sequence_input[get_global_id(2)], // p_332->global_2_offset
        sequence_input[get_local_id(0)], // p_332->local_0_offset
        sequence_input[get_local_id(1)], // p_332->local_1_offset
        sequence_input[get_local_id(2)], // p_332->local_2_offset
        sequence_input[get_group_id(0)], // p_332->group_0_offset
        sequence_input[get_group_id(1)], // p_332->group_1_offset
        sequence_input[get_group_id(2)], // p_332->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 148)), permutations[0][get_linear_local_id()])), // p_332->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_333 = c_334;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_332);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_332->g_2, "p_332->g_2", print_hash_value);
    transparent_crc(p_332->g_5.x, "p_332->g_5.x", print_hash_value);
    transparent_crc(p_332->g_5.y, "p_332->g_5.y", print_hash_value);
    transparent_crc(p_332->g_5.z, "p_332->g_5.z", print_hash_value);
    transparent_crc(p_332->g_5.w, "p_332->g_5.w", print_hash_value);
    transparent_crc(p_332->g_7, "p_332->g_7", print_hash_value);
    transparent_crc(p_332->g_25, "p_332->g_25", print_hash_value);
    transparent_crc(p_332->g_31.s0, "p_332->g_31.s0", print_hash_value);
    transparent_crc(p_332->g_31.s1, "p_332->g_31.s1", print_hash_value);
    transparent_crc(p_332->g_31.s2, "p_332->g_31.s2", print_hash_value);
    transparent_crc(p_332->g_31.s3, "p_332->g_31.s3", print_hash_value);
    transparent_crc(p_332->g_31.s4, "p_332->g_31.s4", print_hash_value);
    transparent_crc(p_332->g_31.s5, "p_332->g_31.s5", print_hash_value);
    transparent_crc(p_332->g_31.s6, "p_332->g_31.s6", print_hash_value);
    transparent_crc(p_332->g_31.s7, "p_332->g_31.s7", print_hash_value);
    transparent_crc(p_332->g_31.s8, "p_332->g_31.s8", print_hash_value);
    transparent_crc(p_332->g_31.s9, "p_332->g_31.s9", print_hash_value);
    transparent_crc(p_332->g_31.sa, "p_332->g_31.sa", print_hash_value);
    transparent_crc(p_332->g_31.sb, "p_332->g_31.sb", print_hash_value);
    transparent_crc(p_332->g_31.sc, "p_332->g_31.sc", print_hash_value);
    transparent_crc(p_332->g_31.sd, "p_332->g_31.sd", print_hash_value);
    transparent_crc(p_332->g_31.se, "p_332->g_31.se", print_hash_value);
    transparent_crc(p_332->g_31.sf, "p_332->g_31.sf", print_hash_value);
    transparent_crc(p_332->g_43, "p_332->g_43", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_332->g_66[i][j][k], "p_332->g_66[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_332->g_77.f0, "p_332->g_77.f0", print_hash_value);
    transparent_crc(p_332->g_84.s0, "p_332->g_84.s0", print_hash_value);
    transparent_crc(p_332->g_84.s1, "p_332->g_84.s1", print_hash_value);
    transparent_crc(p_332->g_84.s2, "p_332->g_84.s2", print_hash_value);
    transparent_crc(p_332->g_84.s3, "p_332->g_84.s3", print_hash_value);
    transparent_crc(p_332->g_84.s4, "p_332->g_84.s4", print_hash_value);
    transparent_crc(p_332->g_84.s5, "p_332->g_84.s5", print_hash_value);
    transparent_crc(p_332->g_84.s6, "p_332->g_84.s6", print_hash_value);
    transparent_crc(p_332->g_84.s7, "p_332->g_84.s7", print_hash_value);
    transparent_crc(p_332->g_84.s8, "p_332->g_84.s8", print_hash_value);
    transparent_crc(p_332->g_84.s9, "p_332->g_84.s9", print_hash_value);
    transparent_crc(p_332->g_84.sa, "p_332->g_84.sa", print_hash_value);
    transparent_crc(p_332->g_84.sb, "p_332->g_84.sb", print_hash_value);
    transparent_crc(p_332->g_84.sc, "p_332->g_84.sc", print_hash_value);
    transparent_crc(p_332->g_84.sd, "p_332->g_84.sd", print_hash_value);
    transparent_crc(p_332->g_84.se, "p_332->g_84.se", print_hash_value);
    transparent_crc(p_332->g_84.sf, "p_332->g_84.sf", print_hash_value);
    transparent_crc(p_332->g_86, "p_332->g_86", print_hash_value);
    transparent_crc(p_332->g_107.x, "p_332->g_107.x", print_hash_value);
    transparent_crc(p_332->g_107.y, "p_332->g_107.y", print_hash_value);
    transparent_crc(p_332->g_107.z, "p_332->g_107.z", print_hash_value);
    transparent_crc(p_332->g_107.w, "p_332->g_107.w", print_hash_value);
    transparent_crc(p_332->g_117, "p_332->g_117", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_332->g_124[i][j], "p_332->g_124[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_332->g_127, "p_332->g_127", print_hash_value);
    transparent_crc(p_332->g_139.x, "p_332->g_139.x", print_hash_value);
    transparent_crc(p_332->g_139.y, "p_332->g_139.y", print_hash_value);
    transparent_crc(p_332->g_139.z, "p_332->g_139.z", print_hash_value);
    transparent_crc(p_332->g_139.w, "p_332->g_139.w", print_hash_value);
    transparent_crc(p_332->g_141.s0, "p_332->g_141.s0", print_hash_value);
    transparent_crc(p_332->g_141.s1, "p_332->g_141.s1", print_hash_value);
    transparent_crc(p_332->g_141.s2, "p_332->g_141.s2", print_hash_value);
    transparent_crc(p_332->g_141.s3, "p_332->g_141.s3", print_hash_value);
    transparent_crc(p_332->g_141.s4, "p_332->g_141.s4", print_hash_value);
    transparent_crc(p_332->g_141.s5, "p_332->g_141.s5", print_hash_value);
    transparent_crc(p_332->g_141.s6, "p_332->g_141.s6", print_hash_value);
    transparent_crc(p_332->g_141.s7, "p_332->g_141.s7", print_hash_value);
    transparent_crc(p_332->g_141.s8, "p_332->g_141.s8", print_hash_value);
    transparent_crc(p_332->g_141.s9, "p_332->g_141.s9", print_hash_value);
    transparent_crc(p_332->g_141.sa, "p_332->g_141.sa", print_hash_value);
    transparent_crc(p_332->g_141.sb, "p_332->g_141.sb", print_hash_value);
    transparent_crc(p_332->g_141.sc, "p_332->g_141.sc", print_hash_value);
    transparent_crc(p_332->g_141.sd, "p_332->g_141.sd", print_hash_value);
    transparent_crc(p_332->g_141.se, "p_332->g_141.se", print_hash_value);
    transparent_crc(p_332->g_141.sf, "p_332->g_141.sf", print_hash_value);
    transparent_crc(p_332->g_147.f0, "p_332->g_147.f0", print_hash_value);
    transparent_crc(p_332->g_174, "p_332->g_174", print_hash_value);
    transparent_crc(p_332->g_201, "p_332->g_201", print_hash_value);
    transparent_crc(p_332->g_261, "p_332->g_261", print_hash_value);
    transparent_crc(p_332->g_262, "p_332->g_262", print_hash_value);
    transparent_crc(p_332->g_265, "p_332->g_265", print_hash_value);
    transparent_crc(p_332->g_274.x, "p_332->g_274.x", print_hash_value);
    transparent_crc(p_332->g_274.y, "p_332->g_274.y", print_hash_value);
    transparent_crc(p_332->g_275.x, "p_332->g_275.x", print_hash_value);
    transparent_crc(p_332->g_275.y, "p_332->g_275.y", print_hash_value);
    transparent_crc(p_332->g_279.s0, "p_332->g_279.s0", print_hash_value);
    transparent_crc(p_332->g_279.s1, "p_332->g_279.s1", print_hash_value);
    transparent_crc(p_332->g_279.s2, "p_332->g_279.s2", print_hash_value);
    transparent_crc(p_332->g_279.s3, "p_332->g_279.s3", print_hash_value);
    transparent_crc(p_332->g_279.s4, "p_332->g_279.s4", print_hash_value);
    transparent_crc(p_332->g_279.s5, "p_332->g_279.s5", print_hash_value);
    transparent_crc(p_332->g_279.s6, "p_332->g_279.s6", print_hash_value);
    transparent_crc(p_332->g_279.s7, "p_332->g_279.s7", print_hash_value);
    transparent_crc(p_332->g_290.s0, "p_332->g_290.s0", print_hash_value);
    transparent_crc(p_332->g_290.s1, "p_332->g_290.s1", print_hash_value);
    transparent_crc(p_332->g_290.s2, "p_332->g_290.s2", print_hash_value);
    transparent_crc(p_332->g_290.s3, "p_332->g_290.s3", print_hash_value);
    transparent_crc(p_332->g_290.s4, "p_332->g_290.s4", print_hash_value);
    transparent_crc(p_332->g_290.s5, "p_332->g_290.s5", print_hash_value);
    transparent_crc(p_332->g_290.s6, "p_332->g_290.s6", print_hash_value);
    transparent_crc(p_332->g_290.s7, "p_332->g_290.s7", print_hash_value);
    transparent_crc(p_332->g_290.s8, "p_332->g_290.s8", print_hash_value);
    transparent_crc(p_332->g_290.s9, "p_332->g_290.s9", print_hash_value);
    transparent_crc(p_332->g_290.sa, "p_332->g_290.sa", print_hash_value);
    transparent_crc(p_332->g_290.sb, "p_332->g_290.sb", print_hash_value);
    transparent_crc(p_332->g_290.sc, "p_332->g_290.sc", print_hash_value);
    transparent_crc(p_332->g_290.sd, "p_332->g_290.sd", print_hash_value);
    transparent_crc(p_332->g_290.se, "p_332->g_290.se", print_hash_value);
    transparent_crc(p_332->g_290.sf, "p_332->g_290.sf", print_hash_value);
    transparent_crc(p_332->g_296, "p_332->g_296", print_hash_value);
    transparent_crc(p_332->g_299, "p_332->g_299", print_hash_value);
    transparent_crc(p_332->g_313, "p_332->g_313", print_hash_value);
    transparent_crc(p_332->g_314, "p_332->g_314", print_hash_value);
    transparent_crc(p_332->g_316.f0, "p_332->g_316.f0", print_hash_value);
    transparent_crc(p_332->g_322.f0, "p_332->g_322.f0", print_hash_value);
    transparent_crc(p_332->g_331.f0, "p_332->g_331.f0", print_hash_value);
    transparent_crc(p_332->v_collective, "p_332->v_collective", print_hash_value);
    transparent_crc(p_332->l_comm_values[get_linear_local_id()], "p_332->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_332->g_comm_values[get_linear_group_id() * 148 + get_linear_local_id()], "p_332->g_comm_values[get_linear_group_id() * 148 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
