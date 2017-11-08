// --atomics 56 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 78,76,1 -l 3,19,1
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

__constant uint32_t permutations[10][57] = {
{46,0,48,4,16,34,35,44,53,39,52,8,18,7,14,23,25,24,54,20,56,49,26,17,43,12,9,55,51,27,47,38,28,10,15,13,21,42,5,45,6,31,33,11,41,22,3,40,1,36,37,30,2,19,50,32,29}, // permutation 0
{23,49,28,0,48,41,18,37,32,25,40,21,46,27,52,24,36,29,33,6,8,31,55,19,51,12,5,39,10,3,7,14,56,11,53,44,38,13,34,1,2,16,17,35,20,43,22,26,15,9,30,50,45,47,4,42,54}, // permutation 1
{32,33,34,45,31,24,52,29,43,21,51,13,16,26,55,2,42,41,44,10,12,25,47,19,0,1,35,48,30,49,40,37,36,15,6,3,7,50,39,53,20,46,28,8,9,4,38,54,17,22,27,5,14,18,56,23,11}, // permutation 2
{18,31,20,33,12,5,11,53,26,40,47,39,9,32,29,42,0,22,21,3,19,17,7,25,30,37,38,10,28,6,44,56,45,35,8,34,14,48,4,51,1,36,13,27,2,55,23,43,46,49,15,16,54,24,52,41,50}, // permutation 3
{15,25,5,35,56,19,47,38,22,27,52,28,7,4,29,32,9,2,44,48,3,43,55,12,0,49,34,42,23,13,36,20,6,11,54,18,37,40,41,53,1,24,33,14,30,39,45,10,51,50,8,46,31,26,16,17,21}, // permutation 4
{19,29,7,34,18,50,42,10,49,55,33,45,4,52,36,25,22,46,13,8,38,23,43,14,41,2,48,27,1,51,35,20,56,24,5,28,26,44,47,40,30,17,31,32,21,6,16,53,11,39,54,9,12,0,37,3,15}, // permutation 5
{40,31,55,15,52,26,44,5,9,34,11,45,28,6,23,32,25,19,30,42,33,0,24,18,48,38,8,53,46,3,51,49,20,56,16,10,14,37,54,35,7,13,50,1,12,22,21,39,47,27,4,36,43,2,29,41,17}, // permutation 6
{51,37,11,23,17,12,50,1,40,39,6,16,7,2,47,20,13,31,3,49,15,22,19,18,43,36,28,32,45,46,8,35,52,21,30,14,4,54,9,10,41,53,33,26,27,34,38,48,5,42,24,55,0,25,44,29,56}, // permutation 7
{38,36,5,32,7,27,1,54,53,12,40,51,30,49,33,23,14,41,42,0,45,29,10,3,22,24,25,18,55,46,43,56,50,39,11,48,31,6,20,4,13,15,16,52,9,37,28,26,21,8,2,35,19,17,44,34,47}, // permutation 8
{44,31,12,55,4,35,16,52,45,39,56,18,14,23,24,5,13,42,2,22,21,38,8,17,6,41,34,37,47,15,50,53,27,10,26,20,0,36,25,32,40,29,11,19,28,1,49,33,51,48,30,54,3,9,7,43,46} // permutation 9
};

// Seed: 3344717590

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int8_t  f0;
   volatile int8_t * f1;
   volatile int32_t  f2;
   int64_t  f3;
};

union U1 {
   int16_t  f0;
   uint64_t  f1;
   volatile uint32_t  f2;
   volatile uint8_t  f3;
};

struct S2 {
    int16_t g_13;
    uint8_t g_19;
    VECTOR(int32_t, 8) g_196;
    int32_t *g_195;
    int32_t ** volatile g_194;
    union U1 g_209;
    union U1 *g_208;
    union U1 **g_207;
    uint8_t g_242;
    VECTOR(uint8_t, 4) g_246;
    VECTOR(uint8_t, 2) g_247;
    VECTOR(uint8_t, 8) g_248;
    VECTOR(uint8_t, 8) g_249;
    int32_t g_256;
    int8_t g_259;
    int8_t *g_258;
    int8_t g_293;
    uint32_t g_295[4][8][4];
    uint32_t g_298;
    int16_t g_301;
    union U0 g_305[10][3][4];
    VECTOR(uint16_t, 8) g_319;
    volatile VECTOR(uint16_t, 2) g_320;
    volatile VECTOR(uint32_t, 16) g_331;
    int64_t *g_346;
    int64_t g_391;
    volatile VECTOR(int16_t, 2) g_407;
    VECTOR(uint8_t, 4) g_409;
    volatile VECTOR(uint32_t, 2) g_417;
    int32_t g_438;
    volatile VECTOR(uint16_t, 8) g_447;
    VECTOR(int16_t, 4) g_494;
    uint8_t *g_502;
    uint8_t **g_501[2];
    volatile VECTOR(int32_t, 8) g_512;
    volatile VECTOR(int32_t, 4) g_513;
    VECTOR(int32_t, 4) g_518;
    VECTOR(int32_t, 2) g_519;
    volatile VECTOR(int32_t, 16) g_520;
    VECTOR(int32_t, 8) g_524;
    volatile union U0 g_560[9];
    volatile VECTOR(uint32_t, 4) g_568;
    VECTOR(uint64_t, 4) g_574;
    union U1 g_578;
    uint16_t g_579;
    volatile VECTOR(uint8_t, 2) g_588;
    uint16_t *g_610;
    uint16_t **g_609;
    uint16_t *** volatile g_608;
    VECTOR(int32_t, 4) g_636;
    volatile VECTOR(int16_t, 4) g_641;
    VECTOR(int8_t, 8) g_646;
    VECTOR(int8_t, 2) g_648;
    int32_t * volatile g_674;
    int32_t * volatile * volatile g_675;
    volatile VECTOR(int8_t, 16) g_680;
    volatile VECTOR(uint8_t, 16) g_682;
    VECTOR(uint32_t, 16) g_719;
    volatile VECTOR(int8_t, 2) g_724;
    volatile VECTOR(uint32_t, 8) g_962;
    VECTOR(uint16_t, 4) g_981;
    int64_t g_987;
    uint32_t g_990;
    VECTOR(int8_t, 2) g_1004;
    volatile VECTOR(int64_t, 2) g_1011;
    volatile VECTOR(int32_t, 4) g_1036;
    union U1 **g_1040;
    union U0 *g_1054;
    union U0 ** volatile g_1053;
    int32_t * volatile g_1069;
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
int8_t  func_1(struct S2 * p_1074);
int64_t  func_4(int8_t * p_5, int64_t  p_6, struct S2 * p_1074);
int8_t * func_7(int64_t  p_8, int8_t * p_9, int32_t  p_10, struct S2 * p_1074);
uint16_t  func_16(int64_t  p_17, int8_t  p_18, struct S2 * p_1074);
int8_t  func_22(int64_t  p_23, uint64_t  p_24, struct S2 * p_1074);
uint8_t  func_25(int8_t * p_26, int8_t * p_27, struct S2 * p_1074);
int8_t * func_28(int64_t  p_29, uint8_t  p_30, int8_t * p_31, struct S2 * p_1074);
uint8_t  func_32(int16_t * p_33, int64_t  p_34, uint32_t  p_35, int8_t * p_36, int16_t * p_37, struct S2 * p_1074);
int16_t * func_38(int16_t * p_39, uint32_t  p_40, int16_t  p_41, int32_t  p_42, int16_t * p_43, struct S2 * p_1074);
uint16_t  func_204(union U1 ** p_205, int32_t  p_206, struct S2 * p_1074);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1074->l_comm_values p_1074->g_19 p_1074->g_13 p_1074->g_194 p_1074->g_207 p_1074->g_242 p_1074->g_246 p_1074->g_247 p_1074->g_248 p_1074->g_249 p_1074->g_196 p_1074->g_256 p_1074->g_258 p_1074->g_195 p_1074->g_259 p_1074->g_293 p_1074->g_295 p_1074->g_298 p_1074->g_301 p_1074->g_305 p_1074->g_209.f0 p_1074->g_319 p_1074->g_320 p_1074->g_346 p_1074->g_comm_values p_1074->g_391 p_1074->g_407 p_1074->g_409 p_1074->g_417 p_1074->g_447 p_1074->g_438 p_1074->g_494 p_1074->g_501 p_1074->g_512 p_1074->g_513 p_1074->g_518 p_1074->g_519 p_1074->g_520 p_1074->g_524 p_1074->g_305.f0 p_1074->g_560 p_1074->g_568 p_1074->g_574 p_1074->g_578 p_1074->g_579 p_1074->g_502 p_1074->g_578.f0 p_1074->g_588 p_1074->g_608 p_1074->g_636 p_1074->g_641 p_1074->g_646 p_1074->g_648 p_1074->g_674 p_1074->g_675 p_1074->g_680 p_1074->g_682 p_1074->g_610 p_1074->g_208 p_1074->g_209 p_1074->g_719 p_1074->g_724 p_1074->g_962 p_1074->g_981 p_1074->g_987 p_1074->g_578.f1 p_1074->g_990 p_1074->g_1004 p_1074->g_1011 p_1074->g_1036 p_1074->g_1053
 * writes: p_1074->g_13 p_1074->g_19 p_1074->g_195 p_1074->g_207 p_1074->g_242 p_1074->g_196 p_1074->g_256 p_1074->g_259 p_1074->g_293 p_1074->g_295 p_1074->g_298 p_1074->g_209.f0 p_1074->g_301 p_1074->g_391 p_1074->g_258 p_1074->g_518 p_1074->g_520 p_1074->g_578.f0 p_1074->g_609 p_1074->g_579 p_1074->g_346 p_1074->g_519 p_1074->g_574 p_1074->g_578.f1 p_1074->g_438 p_1074->g_305.f0 p_1074->g_674 p_1074->g_990 p_1074->g_1040 p_1074->g_1054 p_1074->g_987
 */
int8_t  func_1(struct S2 * p_1074)
{ /* block id: 4 */
    int8_t l_11 = 1L;
    int16_t *l_12 = &p_1074->g_13;
    int32_t l_257 = 0x479D939CL;
    int8_t *l_1026[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    l_257 = (safe_add_func_int32_t_s_s(((((func_4(func_7((((((*l_12) = l_11) & l_11) && (safe_mul_func_uint16_t_u_u(func_16((((p_1074->g_19 = 0UL) , (p_1074->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1074->tid, 57))] <= GROUP_DIVERGE(0, 1))) , (safe_lshift_func_int8_t_s_u(func_22((func_25(&l_11, func_28(l_11, func_32(func_38(&p_1074->g_13, p_1074->g_19, l_11, p_1074->g_13, l_12, p_1074), l_257, l_257, p_1074->g_258, l_12, p_1074), p_1074->g_502, p_1074), p_1074) > 1UL), l_257, p_1074), l_257))), p_1074->g_719.s4, p_1074), 0x2B98L))) , l_257), l_1026[4], l_257, p_1074), p_1074->g_494.x, p_1074) , l_11) & l_257) & (-2L)) | p_1074->g_comm_values[p_1074->tid]), l_257));
    for (p_1074->g_987 = 3; (p_1074->g_987 > 9); ++p_1074->g_987)
    { /* block id: 498 */
        for (p_1074->g_990 = 0; (p_1074->g_990 > 43); p_1074->g_990 = safe_add_func_uint64_t_u_u(p_1074->g_990, 3))
        { /* block id: 501 */
            return l_11;
        }
    }
    return l_11;
}


/* ------------------------------------------ */
/* 
 * reads : p_1074->g_249
 * writes:
 */
int64_t  func_4(int8_t * p_5, int64_t  p_6, struct S2 * p_1074)
{ /* block id: 487 */
    if ((atomic_inc(&p_1074->g_atomic_input[56 * get_linear_group_id() + 10]) == 5))
    { /* block id: 489 */
        uint16_t l_1066 = 0xB099L;
        l_1066--;
        unsigned int result = 0;
        result += l_1066;
        atomic_add(&p_1074->g_special_values[56 * get_linear_group_id() + 10], result);
    }
    else
    { /* block id: 491 */
        (1 + 1);
    }
    return p_1074->g_249.s5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1074->g_990 p_1074->g_1036 p_1074->g_502 p_1074->g_19 p_1074->g_578.f1 p_1074->g_1053
 * writes: p_1074->g_990 p_1074->g_207 p_1074->g_1040 p_1074->g_578.f1 p_1074->g_1054
 */
int8_t * func_7(int64_t  p_8, int8_t * p_9, int32_t  p_10, struct S2 * p_1074)
{ /* block id: 463 */
    union U1 **l_1037 = &p_1074->g_208;
    int32_t l_1045 = 1L;
    uint32_t l_1047 = 0x041AE1E8L;
    int16_t l_1057 = 0x67C9L;
    int32_t l_1058[3];
    int32_t l_1060 = 0x04725747L;
    uint8_t l_1061 = 0x36L;
    int8_t *l_1065[1];
    int i;
    for (i = 0; i < 3; i++)
        l_1058[i] = 0L;
    for (i = 0; i < 1; i++)
        l_1065[i] = (void*)0;
    for (p_1074->g_990 = 0; (p_1074->g_990 == 50); p_1074->g_990 = safe_add_func_uint16_t_u_u(p_1074->g_990, 8))
    { /* block id: 466 */
        int16_t l_1035 = 0x03EEL;
        union U1 **l_1038 = &p_1074->g_208;
        union U1 ***l_1039 = &p_1074->g_207;
        int32_t l_1046 = (-1L);
        union U0 *l_1052[1];
        int32_t *l_1055 = (void*)0;
        int32_t *l_1056[8][1][1] = {{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}}};
        int64_t l_1059 = 0x218D8674C401B830L;
        int8_t *l_1064 = (void*)0;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1052[i] = &p_1074->g_305[8][1][2];
        l_1045 = (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(((safe_mul_func_int64_t_s_s((l_1035 &= 1L), 0L)) && ((p_10 , ((VECTOR(int32_t, 8))(p_1074->g_1036.zyxxwyxx)).s6) , 0x43L)), 6)) == ((l_1038 = l_1037) == (p_1074->g_1040 = ((*l_1039) = &p_1074->g_208)))), ((p_8 == ((((safe_add_func_uint8_t_u_u((~(GROUP_DIVERGE(0, 1) | (0xA7C3L < (safe_mul_func_uint8_t_u_u((*p_1074->g_502), 0x1AL))))), l_1045)) != l_1046) != p_10) , 0x49B6414520159392L)) ^ l_1047)));
        for (p_1074->g_578.f1 = 0; (p_1074->g_578.f1 >= 30); p_1074->g_578.f1++)
        { /* block id: 474 */
            if ((atomic_inc(&p_1074->l_atomic_input[51]) == 7))
            { /* block id: 476 */
                union U0 l_1051 = {0x44L};/* VOLATILE GLOBAL l_1051 */
                union U0 *l_1050[1][4] = {{&l_1051,&l_1051,&l_1051,&l_1051}};
                int i, j;
                l_1050[0][3] = (void*)0;
                unsigned int result = 0;
                result += l_1051.f0;
                result += l_1051.f1;
                result += l_1051.f2;
                result += l_1051.f3;
                atomic_add(&p_1074->l_special_values[51], result);
            }
            else
            { /* block id: 478 */
                (1 + 1);
            }
            (*p_1074->g_1053) = l_1052[0];
        }
        ++l_1061;
        return l_1064;
    }
    return l_1065[0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint16_t  func_16(int64_t  p_17, int8_t  p_18, struct S2 * p_1074)
{ /* block id: 461 */
    return p_17;
}


/* ------------------------------------------ */
/* 
 * reads : p_1074->g_194 p_1074->g_502 p_1074->g_19 p_1074->g_1004 p_1074->g_560 p_1074->g_512 p_1074->g_682 p_1074->g_246 p_1074->g_195 p_1074->g_256 p_1074->g_258 p_1074->g_247 p_1074->g_249 p_1074->g_1011 p_1074->g_990 p_1074->g_346 p_1074->g_391 p_1074->g_675 p_1074->g_981
 * writes: p_1074->g_195 p_1074->g_674 p_1074->g_305.f0 p_1074->g_259 p_1074->g_19 p_1074->g_391
 */
int8_t  func_22(int64_t  p_23, uint64_t  p_24, struct S2 * p_1074)
{ /* block id: 446 */
    int32_t **l_992[2];
    uint32_t l_997 = 0xBFCB5B8CL;
    int i;
    for (i = 0; i < 2; i++)
        l_992[i] = &p_1074->g_195;
    p_1074->g_674 = ((*p_1074->g_194) = &p_1074->g_256);
    if ((1UL || 1L))
    { /* block id: 449 */
        VECTOR(int8_t, 2) l_1005 = (VECTOR(int8_t, 2))(1L, (-8L));
        uint16_t l_1008 = 0xEE4CL;
        int32_t *l_1009 = (void*)0;
        union U1 ***l_1010 = &p_1074->g_207;
        int i, j;
        l_1009 = ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0x9DL, (*p_1074->g_502))), (((l_997 == (safe_sub_func_uint64_t_u_u(((((VECTOR(int16_t, 2))(2L, 1L)).hi | ((safe_lshift_func_int8_t_s_u(((((void*)0 == &p_1074->g_295[0][1][3]) , ((safe_mul_func_int16_t_s_s((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(p_1074->g_1004.yxyyxyxyxyyxyxxx)).s92b9, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 4))(l_1005.xxyx)).zxwzwwzx, ((VECTOR(int8_t, 8))(((*p_1074->g_258) = ((((GROUP_DIVERGE(1, 1) , (void*)0) == (p_1074->g_560[5] , &p_23)) , (safe_add_func_uint16_t_u_u((((p_1074->g_512.s5 , p_23) && p_1074->g_682.sb) == p_23), p_1074->g_246.z))) < (*p_1074->g_195))), ((VECTOR(int8_t, 2))(0x0EL)), ((VECTOR(int8_t, 2))(0x59L)), ((VECTOR(int8_t, 2))(0x1EL)), (-1L)))))), ((VECTOR(int8_t, 8))(0L))))).s7570641345502243, (int8_t)p_1074->g_247.x, (int8_t)l_1008))).lo, ((VECTOR(int8_t, 8))(0x1BL)), ((VECTOR(int8_t, 8))((-1L)))))).s43)).yyxy))))).odd)).odd & l_1005.x), p_1074->g_249.s0)) == l_1008)) || p_24), (*p_1074->g_502))) & 0x00C0BF00L)) && l_1005.x), 1L))) && 0xF207F7B52BD25BEAL) , p_23))) , (*p_1074->g_194));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1074->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 57)), permutations[(safe_mod_func_uint32_t_u_u(((((void*)0 == l_1010) == ((VECTOR(int64_t, 16))(p_1074->g_1011.yxyxxxxyyxxxyyyx)).s5) & ((*p_1074->g_346) = (safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((&l_1009 == l_992[1]), 13)), ((*l_1009) >= (((safe_lshift_func_uint16_t_u_s(((((*p_1074->g_502) = (*p_1074->g_502)) , (safe_lshift_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((*p_1074->g_195), p_23)), ((*p_1074->g_195) <= p_1074->g_990))) > p_24) > (*p_1074->g_346)) <= 5L), 1))) || p_23), p_23)) || 0x72L) , p_24)))), p_23)))), 10))][(safe_mod_func_uint32_t_u_u(p_1074->tid, 57))]));
    }
    else
    { /* block id: 457 */
        (*p_1074->g_675) = (*p_1074->g_194);
    }
    return p_1074->g_981.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1074->g_610 p_1074->g_579 p_1074->g_207 p_1074->g_208 p_1074->g_209 p_1074->g_196 p_1074->g_519 p_1074->g_719 p_1074->g_502 p_1074->g_19 p_1074->g_724 p_1074->g_560 p_1074->g_574 p_1074->g_346 p_1074->g_391 p_1074->g_258 p_1074->g_305.f0 p_1074->g_259 p_1074->g_438 p_1074->g_641 p_1074->g_568 p_1074->g_409 p_1074->g_209.f0 p_1074->g_248 p_1074->g_512 p_1074->g_962 p_1074->g_636 p_1074->g_981 p_1074->g_987 p_1074->g_646 p_1074->g_comm_values p_1074->g_494 p_1074->g_524 p_1074->g_578.f1 p_1074->g_990 p_1074->g_246
 * writes: p_1074->g_579 p_1074->g_346 p_1074->g_519 p_1074->g_574 p_1074->g_578.f1 p_1074->g_438 p_1074->g_19 p_1074->g_305.f0 p_1074->g_259 p_1074->g_298 p_1074->g_196
 */
uint8_t  func_25(int8_t * p_26, int8_t * p_27, struct S2 * p_1074)
{ /* block id: 317 */
    VECTOR(int32_t, 4) l_701 = (VECTOR(int32_t, 4))(0x6A404F71L, (VECTOR(int32_t, 2))(0x6A404F71L, (-10L)), (-10L));
    VECTOR(uint16_t, 2) l_704 = (VECTOR(uint16_t, 2))(0x3F56L, 65535UL);
    VECTOR(uint16_t, 8) l_705 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xD2DAL), 0xD2DAL), 0xD2DAL, 65535UL, 0xD2DAL);
    VECTOR(uint16_t, 16) l_706 = (VECTOR(uint16_t, 16))(0x0FCDL, (VECTOR(uint16_t, 4))(0x0FCDL, (VECTOR(uint16_t, 2))(0x0FCDL, 65528UL), 65528UL), 65528UL, 0x0FCDL, 65528UL, (VECTOR(uint16_t, 2))(0x0FCDL, 65528UL), (VECTOR(uint16_t, 2))(0x0FCDL, 65528UL), 0x0FCDL, 65528UL, 0x0FCDL, 65528UL);
    int64_t *l_709[10][4] = {{&p_1074->g_391,&p_1074->g_391,&p_1074->g_391,&p_1074->g_391},{&p_1074->g_391,&p_1074->g_391,&p_1074->g_391,&p_1074->g_391},{&p_1074->g_391,&p_1074->g_391,&p_1074->g_391,&p_1074->g_391},{&p_1074->g_391,&p_1074->g_391,&p_1074->g_391,&p_1074->g_391},{&p_1074->g_391,&p_1074->g_391,&p_1074->g_391,&p_1074->g_391},{&p_1074->g_391,&p_1074->g_391,&p_1074->g_391,&p_1074->g_391},{&p_1074->g_391,&p_1074->g_391,&p_1074->g_391,&p_1074->g_391},{&p_1074->g_391,&p_1074->g_391,&p_1074->g_391,&p_1074->g_391},{&p_1074->g_391,&p_1074->g_391,&p_1074->g_391,&p_1074->g_391},{&p_1074->g_391,&p_1074->g_391,&p_1074->g_391,&p_1074->g_391}};
    int64_t **l_710 = &p_1074->g_346;
    int32_t *l_715[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint32_t, 4) l_718 = (VECTOR(uint32_t, 4))(0x770E4803L, (VECTOR(uint32_t, 2))(0x770E4803L, 0x16FC85BEL), 0x16FC85BEL);
    VECTOR(uint32_t, 16) l_720 = (VECTOR(uint32_t, 16))(0x01CC9C8CL, (VECTOR(uint32_t, 4))(0x01CC9C8CL, (VECTOR(uint32_t, 2))(0x01CC9C8CL, 0x64FD0B50L), 0x64FD0B50L), 0x64FD0B50L, 0x01CC9C8CL, 0x64FD0B50L, (VECTOR(uint32_t, 2))(0x01CC9C8CL, 0x64FD0B50L), (VECTOR(uint32_t, 2))(0x01CC9C8CL, 0x64FD0B50L), 0x01CC9C8CL, 0x64FD0B50L, 0x01CC9C8CL, 0x64FD0B50L);
    VECTOR(int8_t, 16) l_723 = (VECTOR(int8_t, 16))(5L, (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 0x6EL), 0x6EL), 0x6EL, 5L, 0x6EL, (VECTOR(int8_t, 2))(5L, 0x6EL), (VECTOR(int8_t, 2))(5L, 0x6EL), 5L, 0x6EL, 5L, 0x6EL);
    uint16_t l_725 = 65531UL;
    VECTOR(int8_t, 2) l_726 = (VECTOR(int8_t, 2))(0x61L, 0x1CL);
    uint64_t *l_727 = &p_1074->g_578.f1;
    uint64_t *l_728 = (void*)0;
    uint64_t *l_729 = &p_1074->g_209.f1;
    uint64_t *l_730 = &p_1074->g_578.f1;
    uint64_t *l_731 = &p_1074->g_578.f1;
    uint64_t *l_732 = (void*)0;
    uint64_t *l_733 = &p_1074->g_209.f1;
    uint64_t *l_734 = (void*)0;
    uint64_t *l_735 = &p_1074->g_578.f1;
    uint64_t *l_736 = &p_1074->g_209.f1;
    uint64_t *l_737 = &p_1074->g_578.f1;
    uint64_t *l_738 = (void*)0;
    uint64_t *l_739 = &p_1074->g_209.f1;
    uint64_t *l_740 = (void*)0;
    uint64_t *l_741 = &p_1074->g_209.f1;
    uint64_t *l_742 = &p_1074->g_209.f1;
    int32_t l_794[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t l_795 = 0x1F46B031L;
    int32_t l_957 = 0x2A4B2FC3L;
    VECTOR(int8_t, 2) l_973 = (VECTOR(int8_t, 2))((-8L), 0x40L);
    VECTOR(int8_t, 2) l_974 = (VECTOR(int8_t, 2))(0x0BL, 0x7FL);
    VECTOR(int8_t, 2) l_975 = (VECTOR(int8_t, 2))(0x40L, 0x61L);
    VECTOR(int8_t, 16) l_976 = (VECTOR(int8_t, 16))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, 0x44L), 0x44L), 0x44L, 0x15L, 0x44L, (VECTOR(int8_t, 2))(0x15L, 0x44L), (VECTOR(int8_t, 2))(0x15L, 0x44L), 0x15L, 0x44L, 0x15L, 0x44L);
    VECTOR(uint16_t, 16) l_982 = (VECTOR(uint16_t, 16))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0xFABEL), 0xFABEL), 0xFABEL, 65533UL, 0xFABEL, (VECTOR(uint16_t, 2))(65533UL, 0xFABEL), (VECTOR(uint16_t, 2))(65533UL, 0xFABEL), 65533UL, 0xFABEL, 65533UL, 0xFABEL);
    uint32_t *l_988 = (void*)0;
    uint32_t *l_989 = &p_1074->g_298;
    uint16_t l_991[9] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
    int i, j;
    p_1074->g_519.x |= (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_701.zyxzxxxzzxyyyyzy)).se271)).wzxwwyyywyxxwxxw)).sfafd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((((*p_26) = ((((VECTOR(uint16_t, 16))(0x8975L, 0xB8EFL, ((*p_1074->g_610)--), l_701.y, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_704.yyyyxyxxyxxxxxyy)).sd6a3)), 65535UL, ((VECTOR(uint16_t, 2))(0xBA73L, 7UL)), ((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(l_705.s3125431220603730)).s2a, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_705.s7, 65535UL, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_706.s5be005e7c371584f)))).s6, ((((**p_1074->g_207) , l_709[3][0]) != ((*l_710) = l_709[3][0])) || 0UL), (l_705.s5 == (safe_rshift_func_int8_t_s_s(0x2DL, ((((((safe_sub_func_uint32_t_u_u(0x8491084BL, l_704.x)) == l_705.s4) ^ 0xB5D146308D48E3BDL) , l_704.y) && 1L) >= 6UL)))), ((VECTOR(uint16_t, 2))(0UL)), 0UL)).s42)))), ((VECTOR(uint16_t, 2))(0UL))))), 0x481CL, 65535UL, 0x3C7BL)).sc < p_1074->g_196.s2) , (*p_26))) ^ l_705.s5), ((VECTOR(int32_t, 2))(0x0A9C0C63L)), 6L)).odd)), 1L, 0x3431BBA9L)).lo)).yxyxxyyy)).hi))).hi)).even , 1L);
    if (((18446744073709551615UL <= ((*l_727) = ((!p_1074->g_579) || ((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(abs(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 4))(l_718.wywz)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(p_1074->g_719.s0fcb0b6ea975ad64)).s3e6a)).lo)).xyxxxyyy)).even, ((VECTOR(uint32_t, 4))(l_720.s8466))))).yyyxyzxw))).s0, 1L)) >= (((safe_sub_func_uint8_t_u_u((*p_1074->g_502), 0x04L)) && (*p_26)) >= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_723.s9d)).hi, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(p_1074->g_724.yyyy)).yxwxxyxyzwwxywwy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 8))(l_725, ((VECTOR(int8_t, 2))(6L, (-1L))), ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(l_726.xx)), ((VECTOR(int8_t, 8))(0x6CL, 1L, ((p_1074->g_560[5] , (p_1074->g_574.y++)) ^ (*p_1074->g_346)), (-1L), ((VECTOR(int8_t, 2))(0x30L)), 0x27L, 0x41L)).s76))), (*p_1074->g_258), 0x52L, (-1L))).s30, ((VECTOR(int8_t, 2))(1L))))), 0L, (-9L))).wxxzyzzywyzwxywy))).se8, ((VECTOR(int8_t, 2))(0L))))), 0x3CL, 1L)).yywzxwwx, ((VECTOR(int8_t, 8))((-10L)))))).s5113752232310574)).sb2))), ((VECTOR(int8_t, 2))((-6L)))))).xyyx, ((VECTOR(int8_t, 4))(0x56L)), ((VECTOR(int8_t, 4))(0x68L))))))), (*p_1074->g_258), 0x23L, 0x66L)).s2))))) && (*p_1074->g_346)))
    { /* block id: 324 */
        int32_t l_749 = 0x4880F1C4L;
        for (p_1074->g_438 = 19; (p_1074->g_438 > 3); --p_1074->g_438)
        { /* block id: 327 */
            int32_t *l_747 = (void*)0;
            int32_t **l_748 = &l_715[3];
            (*l_748) = l_747;
        }
        return l_749;
    }
    else
    { /* block id: 331 */
        int8_t **l_753 = &p_1074->g_258;
        int8_t ***l_752 = &l_753;
        int32_t l_762[2];
        uint8_t l_767 = 0xCAL;
        int32_t l_768 = 1L;
        uint8_t l_783 = 0x84L;
        int32_t l_790 = 0x3A5E3D57L;
        int32_t l_791 = 0x348BE6BBL;
        VECTOR(int32_t, 8) l_799 = (VECTOR(int32_t, 8))(0x1EF87544L, (VECTOR(int32_t, 4))(0x1EF87544L, (VECTOR(int32_t, 2))(0x1EF87544L, (-1L)), (-1L)), (-1L), 0x1EF87544L, (-1L));
        int i;
        for (i = 0; i < 2; i++)
            l_762[i] = 0x0045041CL;
        l_768 = (l_762[1] = ((VECTOR(int32_t, 4))(((-5L) <= (safe_mod_func_int16_t_s_s((l_752 != (void*)0), ((safe_add_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((void*)0 == &p_1074->g_502), (safe_rshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u(p_1074->g_641.x, (+((l_762[1] && (&l_709[3][0] != ((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(255UL, 9UL)).hi, (--(*p_1074->g_502)))) , &p_1074->g_346))) ^ 1L)))), l_767)))), l_767)) || 0xD414042139F47A7BL)))), 1L, 1L, 0x13D0362AL)).w);
        l_791 ^= ((((((*p_1074->g_346) < (((!(safe_sub_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((p_1074->g_568.x < (((VECTOR(uint32_t, 2))(0x0BCD998FL, 0x9C50B6D0L)).even == (l_790 |= (safe_rshift_func_uint8_t_u_u((0x6E229621E3043F45L < (safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s((*p_1074->g_346), (safe_mul_func_int8_t_s_s((l_783 , (l_768 ^ (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((((l_762[1] = ((p_1074->g_409.x < p_1074->g_209.f0) != (safe_lshift_func_uint16_t_u_s((*p_1074->g_610), 12)))) , 0xD3F55DA886E7BEE5L) < (-6L)), 9)), 6)))), l_783)))), (*p_1074->g_610)))), FAKE_DIVERGE(p_1074->global_0_offset, get_global_id(0), 10)))))) ^ (-1L)), 1UL)), p_1074->g_209.f0)), (-9L)))) >= l_767) < l_783)) <= 0x1E07L) && 0L) & l_768) ^ p_1074->g_248.s6);
        for (l_725 = (-13); (l_725 == 6); l_725 = safe_add_func_uint8_t_u_u(l_725, 5))
        { /* block id: 340 */
            uint16_t l_796 = 8UL;
            uint32_t l_800[6] = {4294967288UL,0xAAF39CC6L,4294967288UL,4294967288UL,0xAAF39CC6L,4294967288UL};
            int i;
            ++l_796;
            atomic_and(&p_1074->l_atomic_reduction[0], ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_799.s53)))).yyxx)).x);
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1074->v_collective += p_1074->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            l_790 = (l_799.s0 = (~((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((l_783 < (l_800[1] = (*p_1074->g_258))) >= p_1074->g_512.s5), 0x4A5A5653L, (safe_div_func_uint8_t_u_u((p_1074->g_719.sc <= 0UL), (*p_26))), l_783, ((safe_mul_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(l_783, ((safe_div_func_int64_t_s_s(((l_762[1] , FAKE_DIVERGE(p_1074->group_2_offset, get_group_id(2), 10)) < 1UL), (-1L))) , 0xAAL))) , 4L), 0xBDA6L)) & l_800[0]), 1L, 0x01BA440FL, 0x5E3C62D3L)).s52)).xyxx, ((VECTOR(int32_t, 4))(0x690597B4L)), ((VECTOR(int32_t, 4))(0x1FB03BE4L))))).y));
        }
        if ((atomic_inc(&p_1074->g_atomic_input[56 * get_linear_group_id() + 16]) == 0))
        { /* block id: 348 */
            uint64_t l_809[7] = {0xCAE92052D0A47FB0L,0xCAE92052D0A47FB0L,0xCAE92052D0A47FB0L,0xCAE92052D0A47FB0L,0xCAE92052D0A47FB0L,0xCAE92052D0A47FB0L,0xCAE92052D0A47FB0L};
            int8_t l_810 = 0x5FL;
            int64_t l_811 = 0x529FEEC15C4EF6A5L;
            VECTOR(uint64_t, 2) l_812 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL);
            VECTOR(int32_t, 8) l_813 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x358C98FDL), 0x358C98FDL), 0x358C98FDL, 1L, 0x358C98FDL);
            VECTOR(int32_t, 8) l_814 = (VECTOR(int32_t, 8))(0x43345A11L, (VECTOR(int32_t, 4))(0x43345A11L, (VECTOR(int32_t, 2))(0x43345A11L, 0x0D4F2AC5L), 0x0D4F2AC5L), 0x0D4F2AC5L, 0x43345A11L, 0x0D4F2AC5L);
            uint8_t l_815 = 0x79L;
            VECTOR(int32_t, 2) l_816 = (VECTOR(int32_t, 2))(0x207CBBA2L, (-5L));
            uint16_t l_817 = 0UL;
            VECTOR(int16_t, 8) l_818 = (VECTOR(int16_t, 8))(0x0C87L, (VECTOR(int16_t, 4))(0x0C87L, (VECTOR(int16_t, 2))(0x0C87L, 0x7BBDL), 0x7BBDL), 0x7BBDL, 0x0C87L, 0x7BBDL);
            uint32_t l_819 = 0x2AEC021BL;
            uint8_t l_820 = 252UL;
            int16_t l_821 = 0x4393L;
            union U1 *l_822 = (void*)0;
            union U1 l_824 = {0x6D95L};/* VOLATILE GLOBAL l_824 */
            union U1 *l_823[7][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            l_823[3][2] = (((l_809[5] , ((l_810 , (l_811 , ((VECTOR(uint64_t, 16))(l_812.yxyyxxyyyyyyxxxy)).s4)) , ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-8L), (-1L))))).xxyxxxxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_813.s7564754647207257)).s00, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_814.s03254251)).s6520104614504444)).s20, ((VECTOR(int32_t, 16))(l_815, ((VECTOR(int32_t, 4))(l_816.xyxx)), 0x033BBDB0L, l_817, 0x572E6FE6L, 0x067D919EL, 0x5BAC083CL, 0L, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(l_818.s43204003)).s73, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(7UL, ((VECTOR(uint16_t, 2))(7UL, 65531UL)), 1UL)), (l_820 = (l_819 |= GROUP_DIVERGE(0, 1))), ((VECTOR(uint16_t, 2))(0xB570L, 0xC736L)), 1UL)).s27))), 1L, 0L, 4L)).see))).yyyyyxyy))))).s7)) , (l_821 ^= 0x5837E14345B8E128L)) , l_822);
            for (l_814.s0 = 0; (l_814.s0 == (-26)); l_814.s0 = safe_sub_func_uint64_t_u_u(l_814.s0, 3))
            { /* block id: 355 */
                int32_t l_827 = 0x02A13956L;
                VECTOR(int32_t, 8) l_860 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
                VECTOR(int32_t, 4) l_861 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x5D066E9BL), 0x5D066E9BL);
                VECTOR(int32_t, 4) l_862 = (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x60259148L), 0x60259148L);
                VECTOR(int16_t, 16) l_863 = (VECTOR(int16_t, 16))(0x0FC8L, (VECTOR(int16_t, 4))(0x0FC8L, (VECTOR(int16_t, 2))(0x0FC8L, 0x40A1L), 0x40A1L), 0x40A1L, 0x0FC8L, 0x40A1L, (VECTOR(int16_t, 2))(0x0FC8L, 0x40A1L), (VECTOR(int16_t, 2))(0x0FC8L, 0x40A1L), 0x0FC8L, 0x40A1L, 0x0FC8L, 0x40A1L);
                int32_t l_864 = 0x3E46F810L;
                VECTOR(uint16_t, 16) l_865 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xD557L), 0xD557L), 0xD557L, 1UL, 0xD557L, (VECTOR(uint16_t, 2))(1UL, 0xD557L), (VECTOR(uint16_t, 2))(1UL, 0xD557L), 1UL, 0xD557L, 1UL, 0xD557L);
                uint32_t l_866 = 0UL;
                VECTOR(uint16_t, 16) l_867 = (VECTOR(uint16_t, 16))(0x97D3L, (VECTOR(uint16_t, 4))(0x97D3L, (VECTOR(uint16_t, 2))(0x97D3L, 0x8E3FL), 0x8E3FL), 0x8E3FL, 0x97D3L, 0x8E3FL, (VECTOR(uint16_t, 2))(0x97D3L, 0x8E3FL), (VECTOR(uint16_t, 2))(0x97D3L, 0x8E3FL), 0x97D3L, 0x8E3FL, 0x97D3L, 0x8E3FL);
                VECTOR(uint16_t, 8) l_868 = (VECTOR(uint16_t, 8))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0x5E43L), 0x5E43L), 0x5E43L, 65534UL, 0x5E43L);
                VECTOR(uint16_t, 2) l_869 = (VECTOR(uint16_t, 2))(0x7161L, 0x6049L);
                VECTOR(int32_t, 2) l_870 = (VECTOR(int32_t, 2))(0x63DA8851L, 0x307D12F1L);
                uint32_t l_871 = 0x4033525EL;
                VECTOR(int32_t, 16) l_872 = (VECTOR(int32_t, 16))(0x734A36DFL, (VECTOR(int32_t, 4))(0x734A36DFL, (VECTOR(int32_t, 2))(0x734A36DFL, (-1L)), (-1L)), (-1L), 0x734A36DFL, (-1L), (VECTOR(int32_t, 2))(0x734A36DFL, (-1L)), (VECTOR(int32_t, 2))(0x734A36DFL, (-1L)), 0x734A36DFL, (-1L), 0x734A36DFL, (-1L));
                VECTOR(int32_t, 2) l_873 = (VECTOR(int32_t, 2))(0x42326D1AL, 0x0140CF9BL);
                uint64_t l_874 = 18446744073709551614UL;
                VECTOR(int16_t, 4) l_875 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-8L)), (-8L));
                uint32_t l_876 = 4294967295UL;
                VECTOR(int32_t, 8) l_877 = (VECTOR(int32_t, 8))(0x12AA334DL, (VECTOR(int32_t, 4))(0x12AA334DL, (VECTOR(int32_t, 2))(0x12AA334DL, 0x6534F463L), 0x6534F463L), 0x6534F463L, 0x12AA334DL, 0x6534F463L);
                int16_t l_878 = 0x7257L;
                uint8_t l_879 = 254UL;
                uint32_t l_880 = 0UL;
                uint32_t l_881 = 0x664A1411L;
                uint32_t l_882 = 4294967287UL;
                uint8_t l_883 = 0x44L;
                int64_t l_894 = (-5L);
                int16_t l_895[9][7][3] = {{{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L}},{{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L}},{{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L}},{{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L}},{{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L}},{{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L}},{{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L}},{{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L}},{{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L},{1L,0x042CL,0x4A24L}}};
                int32_t l_896 = 8L;
                int32_t l_897 = 0x5A30C147L;
                int16_t l_898 = 0x505AL;
                uint64_t l_899 = 0x2471E4FA65B2035BL;
                int i, j, k;
                for (l_827 = 0; (l_827 == 11); l_827 = safe_add_func_int32_t_s_s(l_827, 4))
                { /* block id: 358 */
                    uint32_t l_830 = 0x8BF18536L;
                    int32_t l_833 = 8L;
                    int32_t l_834 = 1L;
                    int32_t *l_835 = &l_834;
                    VECTOR(int16_t, 4) l_836 = (VECTOR(int16_t, 4))(0x716FL, (VECTOR(int16_t, 2))(0x716FL, 0x5977L), 0x5977L);
                    VECTOR(uint16_t, 8) l_837 = (VECTOR(uint16_t, 8))(0x05DFL, (VECTOR(uint16_t, 4))(0x05DFL, (VECTOR(uint16_t, 2))(0x05DFL, 0x06E2L), 0x06E2L), 0x06E2L, 0x05DFL, 0x06E2L);
                    int32_t l_838 = 0x1EF1497CL;
                    uint32_t l_839 = 0xC4E4F31EL;
                    VECTOR(int32_t, 2) l_840 = (VECTOR(int32_t, 2))(0x1CF861D4L, 1L);
                    VECTOR(int32_t, 2) l_841 = (VECTOR(int32_t, 2))(0x04AF2F63L, 1L);
                    int16_t l_842 = 0L;
                    uint64_t l_843 = 18446744073709551615UL;
                    VECTOR(int32_t, 8) l_844 = (VECTOR(int32_t, 8))(0x150B5461L, (VECTOR(int32_t, 4))(0x150B5461L, (VECTOR(int32_t, 2))(0x150B5461L, 0x05B00325L), 0x05B00325L), 0x05B00325L, 0x150B5461L, 0x05B00325L);
                    VECTOR(int32_t, 8) l_845 = (VECTOR(int32_t, 8))(0x3958AE1CL, (VECTOR(int32_t, 4))(0x3958AE1CL, (VECTOR(int32_t, 2))(0x3958AE1CL, (-1L)), (-1L)), (-1L), 0x3958AE1CL, (-1L));
                    VECTOR(int16_t, 16) l_846 = (VECTOR(int16_t, 16))(0x1D00L, (VECTOR(int16_t, 4))(0x1D00L, (VECTOR(int16_t, 2))(0x1D00L, 0x7DB6L), 0x7DB6L), 0x7DB6L, 0x1D00L, 0x7DB6L, (VECTOR(int16_t, 2))(0x1D00L, 0x7DB6L), (VECTOR(int16_t, 2))(0x1D00L, 0x7DB6L), 0x1D00L, 0x7DB6L, 0x1D00L, 0x7DB6L);
                    VECTOR(int16_t, 8) l_847 = (VECTOR(int16_t, 8))(0x0537L, (VECTOR(int16_t, 4))(0x0537L, (VECTOR(int16_t, 2))(0x0537L, 7L), 7L), 7L, 0x0537L, 7L);
                    uint64_t l_848[6];
                    VECTOR(uint16_t, 2) l_849 = (VECTOR(uint16_t, 2))(0xEDB3L, 1UL);
                    VECTOR(uint16_t, 8) l_850 = (VECTOR(uint16_t, 8))(0x1BAFL, (VECTOR(uint16_t, 4))(0x1BAFL, (VECTOR(uint16_t, 2))(0x1BAFL, 65535UL), 65535UL), 65535UL, 0x1BAFL, 65535UL);
                    VECTOR(uint16_t, 2) l_851 = (VECTOR(uint16_t, 2))(65534UL, 65530UL);
                    VECTOR(uint16_t, 8) l_852 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x183EL), 0x183EL), 0x183EL, 65535UL, 0x183EL);
                    VECTOR(uint16_t, 2) l_853 = (VECTOR(uint16_t, 2))(0UL, 0x8D19L);
                    int32_t l_854 = 1L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_848[i] = 0x86CD6F28457655E6L;
                    l_835 = (((l_830++) , (l_833 , l_834)) , l_835);
                    if (((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(l_836.yy)), ((VECTOR(uint16_t, 8))(l_837.s07322276)).s20))).xxyyxyyyxyyyyxyx)).hi, (int32_t)l_838, (int32_t)l_839))).lo)).zwywxwxyyxyyxywz))).sf7, (int32_t)((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(l_840.yxxy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x2DDB2B8BL, 0x1BFE02D4L, 0x36A6A6FAL, (l_813.s5 = (l_816.x ^= 0x225DC36CL)), 0L, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_841.yyyyxyxy)).s34, ((VECTOR(int32_t, 4))((l_842 , 0x530EBE28L), l_843, (-1L), 3L)).lo))), 1L)).s3655702057265677)).s502c))).x))))), 1L, 0x4DF94043L, 0x34F22463L, 0L, 0x357B848AL, 0x41E5F455L)), ((VECTOR(int32_t, 2))(l_844.s45)), (l_813.s2 |= (l_816.y ^= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_845.s1711)).lo)).lo)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(l_846.s5a099aa222ad9565)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(l_847.s6236)).even, (int16_t)l_848[2], (int16_t)(-6L)))).xyyyyyyxxxyxyyyy)), ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))((-1L), 0x427AL)))), ((VECTOR(int16_t, 2))(0x3FB6L, (-1L)))))).xyyyxxyxyxxyxyyy))).lo, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_849.yxxy)).z, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_850.s5261160501066255)).s9c)).yyyxxxxx)).s47)).xxyxxyyyyyxxxxyx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_851.xyyxyyyx)).s51)).yxyxyxxyyxyxyyyy))).sb0cc)), ((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 2))(0x89E1L, 65533UL)).yxxxyxyyxyxxxxyx))).sb, ((VECTOR(uint16_t, 4))(l_852.s7423)), ((VECTOR(uint16_t, 2))(l_853.xy)), 1UL, l_854, 0xDD60L, 0xAF63L)).odd))).s7, ((VECTOR(int32_t, 4))(4L)), 0x7C709DC9L, 0x7813F316L, (-10L))).s46)), 0x4C1F164EL, 0x594711A5L)).s4)
                    { /* block id: 365 */
                        uint64_t l_855 = 18446744073709551609UL;
                        VECTOR(uint32_t, 2) l_858 = (VECTOR(uint32_t, 2))(0x23B8BEEEL, 0UL);
                        int i;
                        ++l_855;
                        l_835 = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_858.xyyy)).hi)).lo , (void*)0);
                    }
                    else
                    { /* block id: 368 */
                        uint64_t l_859[6][1] = {{0x754E68211194BE9BL},{0x754E68211194BE9BL},{0x754E68211194BE9BL},{0x754E68211194BE9BL},{0x754E68211194BE9BL},{0x754E68211194BE9BL}};
                        int i, j;
                        l_835 = (void*)0;
                        l_844.s6 = l_859[1][0];
                    }
                }
                if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(1L, 0x61730B93L, (l_880 = ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(l_860.s65)), ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(l_861.xzxz)).zywxyywz, ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 8))(l_862.wxywxyzy)), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(l_863.sf6)), ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 4))(l_864, 0xCB5AL, 0x77A2L, 0xBEB0L)).xwywzyxwxyyyzyyx, ((VECTOR(uint16_t, 8))(l_865.s27f17402)).s2355407107461306, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(65535UL, 65535UL)), l_866, 65527UL, ((VECTOR(uint16_t, 2))(l_867.s1c)), 0UL, 0x22D2L)).s3562606475303374))).s30, ((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_868.s6611)).yxzyyxxy)))).s5033272172570331, ((VECTOR(uint16_t, 16))(l_869.xyyyyyyyyxyxyyyy))))).s19)))))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_870.xyxyyxyx)).lo, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x09FE0C76L, 0x39CB8529L)), ((VECTOR(int32_t, 4))((l_813.s0 = l_871), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(2L, 0x193095DBL)))), 0x58F0BF5DL)), 0x2B4F7465L, 8L)).even, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_872.s0494b900)), (l_816.y = 0x7CF483F2L), 0x072E23C2L, 7L, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_873.yxxx)).yxxyywzyzxxzyxwx)).s8, 0L, 1L, 0x0EC71DA6L, 8L)), (int32_t)((l_815 |= (l_820 = l_874)) , (-1L))))).sd892))), 0x27AA6BB0L, 0x3A49ACFFL, 1L, 3L)).s43, ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))((-8L), (l_813.s5 = (((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 16))(l_875.xxyzzwxyyxzyzyyx)), (int16_t)l_876))).sb , 0x7FD0CC01L)), ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))(0x7E40391EL)), l_877.s4, ((VECTOR(int32_t, 4))(0x5F47DF01L)), l_878, l_879, (-1L), 8L, 0x7520C90DL)).s989d, ((VECTOR(int32_t, 4))(0x2F1161DCL))))).yxwxywxwwwwxyyyx, ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))(0x3EF3B0EAL))))).s4d))).yxxx, ((VECTOR(int32_t, 4))(1L))))).lo)).yyxyyxxxxyxyyxxy, ((VECTOR(int32_t, 16))(0x160EBA45L))))).s2b81)).lo))).xxxy, ((VECTOR(int32_t, 4))(0x1A25F290L))))).wwzxxzyy)))))).s47))).yyxxxxyyyyxyyxyx)).even, ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))(0x6359A7B1L))))).s67, ((VECTOR(int32_t, 2))((-7L)))))).hi), l_881, l_882, ((VECTOR(int32_t, 2))(0x76D1CAFAL)), 1L)), (int32_t)l_883))))), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 4))(0x4AACFB5EL)))).s3)
                { /* block id: 379 */
                    l_864 = (-1L);
                }
                else
                { /* block id: 381 */
                    uint64_t l_884 = 0x684892434E9114B5L;
                    int32_t l_886 = 1L;
                    int32_t *l_885 = &l_886;
                    int32_t *l_887 = &l_886;
                    l_887 = ((l_817 = (l_867.sf = l_884)) , (l_885 = (void*)0));
                    for (l_886 = 16; (l_886 == 11); l_886 = safe_sub_func_uint32_t_u_u(l_886, 3))
                    { /* block id: 388 */
                        VECTOR(uint32_t, 8) l_890 = (VECTOR(uint32_t, 8))(0xF2F1842DL, (VECTOR(uint32_t, 4))(0xF2F1842DL, (VECTOR(uint32_t, 2))(0xF2F1842DL, 0x2B0FFF08L), 0x2B0FFF08L), 0x2B0FFF08L, 0xF2F1842DL, 0x2B0FFF08L);
                        uint8_t l_891 = 0x8CL;
                        VECTOR(int32_t, 8) l_892 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
                        int32_t *l_893 = (void*)0;
                        int i;
                        l_873.x = l_890.s0;
                        l_891 = 0x238058A0L;
                        l_892.s3 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_892.s62543317)).s25)).lo;
                        l_885 = l_893;
                    }
                }
                l_899++;
            }
            for (l_812.y = 10; (l_812.y <= 20); l_812.y = safe_add_func_uint16_t_u_u(l_812.y, 1))
            { /* block id: 399 */
                int32_t l_904[5][1];
                uint32_t l_949 = 9UL;
                union U0 l_950 = {0x45L};/* VOLATILE GLOBAL l_950 */
                int8_t l_951[6] = {0L,0L,0L,0L,0L,0L};
                int64_t l_952 = 0x1F3D831F3CA9C1CEL;
                union U1 l_954 = {0x7F50L};/* VOLATILE GLOBAL l_954 */
                union U1 *l_953 = &l_954;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_904[i][j] = 0x6336AD6AL;
                }
                for (l_904[4][0] = 0; (l_904[4][0] <= 13); l_904[4][0] = safe_add_func_uint16_t_u_u(l_904[4][0], 6))
                { /* block id: 402 */
                    int32_t l_907 = (-1L);
                    int32_t l_908 = 0L;
                    int32_t *l_909[1];
                    int32_t *l_910[8][3] = {{&l_907,&l_907,&l_907},{&l_907,&l_907,&l_907},{&l_907,&l_907,&l_907},{&l_907,&l_907,&l_907},{&l_907,&l_907,&l_907},{&l_907,&l_907,&l_907},{&l_907,&l_907,&l_907},{&l_907,&l_907,&l_907}};
                    VECTOR(int32_t, 8) l_911 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x7608C8FFL), 0x7608C8FFL), 0x7608C8FFL, 8L, 0x7608C8FFL);
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_909[i] = &l_907;
                    l_816.y = l_907;
                    l_910[3][2] = (l_908 , l_909[0]);
                    if (((VECTOR(int32_t, 4))(l_911.s1016)).x)
                    { /* block id: 405 */
                        int32_t l_913 = 0x055900FAL;
                        int32_t *l_912 = &l_913;
                        VECTOR(int8_t, 2) l_914 = (VECTOR(int8_t, 2))(0L, 0x4EL);
                        int32_t l_915 = (-7L);
                        int32_t l_916 = 0x2BCC767DL;
                        int32_t l_917 = 0x36C6D9B4L;
                        union U0 l_918 = {-4L};/* VOLATILE GLOBAL l_918 */
                        uint16_t l_919 = 0x92DBL;
                        int64_t l_920 = 0x53009FE6A6016437L;
                        uint16_t l_921[7] = {0x948CL,0x948CL,0x948CL,0x948CL,0x948CL,0x948CL,0x948CL};
                        uint64_t l_922 = 0xC94EC562AFBAE14DL;
                        uint32_t l_923[3][1][2] = {{{0x203F8CF1L,0x203F8CF1L}},{{0x203F8CF1L,0x203F8CF1L}},{{0x203F8CF1L,0x203F8CF1L}}};
                        int32_t l_924 = 0x21C36A6FL;
                        int32_t l_925 = 0x6B5FA81AL;
                        uint32_t l_926 = 1UL;
                        int16_t l_927 = 0x0A1AL;
                        uint32_t l_928 = 0xD59085BAL;
                        uint8_t l_929[3][8] = {{0x82L,0x82L,0x82L,0x82L,0x82L,0x82L,0x82L,0x82L},{0x82L,0x82L,0x82L,0x82L,0x82L,0x82L,0x82L,0x82L},{0x82L,0x82L,0x82L,0x82L,0x82L,0x82L,0x82L,0x82L}};
                        uint8_t l_930 = 0x06L;
                        uint32_t l_931 = 4294967290UL;
                        int64_t l_932 = 1L;
                        union U1 l_933 = {0x3693L};/* VOLATILE GLOBAL l_933 */
                        int32_t l_934 = (-1L);
                        int16_t l_935 = 0x43FCL;
                        uint8_t l_936 = 247UL;
                        int i, j, k;
                        l_912 = (l_909[0] = (void*)0);
                        l_932 = ((l_930 ^= ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 16))(0x63L, ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_914.xyyy)).xzywyxyxyzxxxxzw)).s8d, (int8_t)l_915, (int8_t)(l_924 = (l_923[2][0][0] = ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x1CL, 0x16L)), (-8L), 0x06L))))).lo)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))((-1L), (((l_916 , (l_917 |= (l_817 |= ((VECTOR(uint16_t, 2))(0UL, 0x64C5L)).lo))) , (l_918 , (l_908 = ((VECTOR(int32_t, 4))(((l_914.y = (l_810 = l_919)) , (l_922 &= (((l_809[2] = FAKE_DIVERGE(p_1074->global_1_offset, get_global_id(1), 10)) , (l_921[2] = l_920)) , 0x7568ADE8L))), 0L, (-2L), 0x0FF9B2E4L)).x))) , 1L), (-1L), 1L)).wzywxxxwywxxxxwy)).sb5))).even))))), 0x37L, ((VECTOR(int8_t, 2))(0x13L)), ((VECTOR(int8_t, 2))(0x1CL)), ((VECTOR(int8_t, 2))(0x07L)), (-2L), l_925, l_926, l_927, 0x6AL, 8L)).lo, (int8_t)l_928, (int8_t)l_929[0][0]))))).s10)).yxyx)).yzzxywyyzwzywzxz)).se) , l_931);
                        l_934 |= ((l_933 , (-8L)) , 1L);
                        l_936 |= (l_935 = 0x476BA419L);
                    }
                    else
                    { /* block id: 423 */
                        uint8_t l_937 = 0x87L;
                        int32_t l_941 = (-9L);
                        int32_t *l_940 = &l_941;
                        int32_t l_942[1][2];
                        uint32_t l_943 = 0x8236E6A5L;
                        int32_t l_944 = 0x2538B10AL;
                        int32_t l_945 = 0x2D1BC681L;
                        uint32_t l_946 = 4294967293UL;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_942[i][j] = 1L;
                        }
                        l_937++;
                        l_910[3][2] = (l_909[0] = l_940);
                        l_943 = l_942[0][0];
                        l_946++;
                    }
                }
                l_823[5][2] = (l_949 , (l_950 , ((l_951[5] , ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))((-4L), 0L)), (-1L), 0x1FDA3583D3B5DB2CL)).zwyxzyxz)).s0) , (l_952 , l_953))));
                l_813.s3 ^= (-10L);
            }
            unsigned int result = 0;
            int l_809_i0;
            for (l_809_i0 = 0; l_809_i0 < 7; l_809_i0++) {
                result += l_809[l_809_i0];
            }
            result += l_810;
            result += l_811;
            result += l_812.y;
            result += l_812.x;
            result += l_813.s7;
            result += l_813.s6;
            result += l_813.s5;
            result += l_813.s4;
            result += l_813.s3;
            result += l_813.s2;
            result += l_813.s1;
            result += l_813.s0;
            result += l_814.s7;
            result += l_814.s6;
            result += l_814.s5;
            result += l_814.s4;
            result += l_814.s3;
            result += l_814.s2;
            result += l_814.s1;
            result += l_814.s0;
            result += l_815;
            result += l_816.y;
            result += l_816.x;
            result += l_817;
            result += l_818.s7;
            result += l_818.s6;
            result += l_818.s5;
            result += l_818.s4;
            result += l_818.s3;
            result += l_818.s2;
            result += l_818.s1;
            result += l_818.s0;
            result += l_819;
            result += l_820;
            result += l_821;
            result += l_824.f0;
            result += l_824.f1;
            result += l_824.f2;
            result += l_824.f3;
            atomic_add(&p_1074->g_special_values[56 * get_linear_group_id() + 16], result);
        }
        else
        { /* block id: 434 */
            (1 + 1);
        }
    }
    p_1074->g_196.s3 ^= ((safe_div_func_int64_t_s_s(l_957, (safe_add_func_uint16_t_u_u((0x029A87C53B54A88DL < (safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(p_1074->g_962.s0224)).x, (safe_add_func_int8_t_s_s((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((*p_1074->g_610) = (((*p_27) = (safe_mod_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((((*l_989) = (((((*p_1074->g_258) &= (*p_26)) != ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_973.yy)), 0x55L, 1L)).wxxzzzwzwywwxzwy, ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_974.xxyyxxxxyyyyxyxx)).even)), ((VECTOR(int8_t, 2))(l_975.yy)).xyxxxyxx))).s6214242167213553))).hi, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_976.s6c35)).hi)))).xyyxxyxx))).even, (int8_t)(safe_rshift_func_uint16_t_u_s((0x9601AC1E5291F312L | ((~0x268CL) >= (+p_1074->g_636.z))), ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 16))(p_1074->g_636.x, p_1074->g_636.x, (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 8))(p_1074->g_981.zxyzyzzw)).s70, ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 2))(l_982.sc4)).yyyy, ((VECTOR(uint16_t, 4))((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(4L, 0)), 255UL)), 0x7002L, 1UL, 0x39A0L))))).even))).even, p_1074->g_987)), 0x32FBL, p_1074->g_646.s6, ((VECTOR(int16_t, 2))(0x6A05L)), p_1074->g_409.w, 0x767AL, p_1074->g_comm_values[p_1074->tid], (-1L), p_1074->g_494.z, (-1L), p_1074->g_646.s2, 0x541CL, 0L)).s7a69, ((VECTOR(int16_t, 4))((-10L)))))).x)), (int8_t)0x1BL))).hi)), ((VECTOR(int8_t, 2))((-5L))), p_1074->g_524.s3, ((VECTOR(int8_t, 2))((-6L))), 0x31L)), 0x32L, 0x65L, 1L, ((VECTOR(int8_t, 2))(1L)), (*p_26), (-9L), 0x32L)).s45, ((VECTOR(int8_t, 2))((-1L)))))).odd) | 0xDEL) >= 0x0BAC4043L)) <= p_1074->g_578.f1) == p_1074->g_636.y), p_1074->g_990)), 0x44AEL))) >= 0x00L)) < 6UL), p_1074->g_246.w)), p_1074->g_574.w)), 0x0CL))))), p_1074->g_990)))) && p_1074->g_512.s5);
    p_1074->g_519.x = (l_991[0] |= p_1074->g_246.x);
    return (*p_1074->g_502);
}


/* ------------------------------------------ */
/* 
 * reads : p_1074->g_608 p_1074->g_256 p_1074->g_19 p_1074->g_298 p_1074->g_305.f0 p_1074->g_636 p_1074->g_641 p_1074->g_646 p_1074->g_648 p_1074->g_258 p_1074->g_259 p_1074->g_494 p_1074->g_502 p_1074->g_320 p_1074->g_409 p_1074->g_674 p_1074->g_675 p_1074->g_680 p_1074->g_682 p_1074->g_610 p_1074->g_579 p_1074->g_196
 * writes: p_1074->g_609 p_1074->g_256 p_1074->g_298 p_1074->g_295 p_1074->g_259 p_1074->g_195 p_1074->g_196
 */
int8_t * func_28(int64_t  p_29, uint8_t  p_30, int8_t * p_31, struct S2 * p_1074)
{ /* block id: 284 */
    uint16_t *l_606 = (void*)0;
    uint16_t **l_605 = &l_606;
    uint16_t ***l_607 = (void*)0;
    int32_t l_615 = (-3L);
    int32_t l_616 = 0x72423B78L;
    VECTOR(int32_t, 8) l_617 = (VECTOR(int32_t, 8))(0x041B37DBL, (VECTOR(int32_t, 4))(0x041B37DBL, (VECTOR(int32_t, 2))(0x041B37DBL, (-1L)), (-1L)), (-1L), 0x041B37DBL, (-1L));
    uint32_t l_619 = 0x49584267L;
    VECTOR(int16_t, 8) l_640 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-6L)), (-6L)), (-6L), (-1L), (-6L));
    VECTOR(int8_t, 8) l_681 = (VECTOR(int8_t, 8))(0x70L, (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, 1L), 1L), 1L, 0x70L, 1L);
    int64_t **l_687 = &p_1074->g_346;
    int32_t *l_699[2];
    uint16_t l_700[8][8][1] = {{{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL}},{{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL}},{{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL}},{{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL}},{{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL}},{{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL}},{{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL}},{{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL},{65526UL}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_699[i] = &l_615;
    (*p_1074->g_608) = l_605;
    for (p_1074->g_256 = 0; (p_1074->g_256 <= 14); ++p_1074->g_256)
    { /* block id: 288 */
        int32_t *l_613 = (void*)0;
        int32_t *l_614[7][8] = {{&p_1074->g_256,(void*)0,(void*)0,&p_1074->g_256,(void*)0,(void*)0,&p_1074->g_256,&p_1074->g_256},{&p_1074->g_256,(void*)0,(void*)0,&p_1074->g_256,(void*)0,(void*)0,&p_1074->g_256,&p_1074->g_256},{&p_1074->g_256,(void*)0,(void*)0,&p_1074->g_256,(void*)0,(void*)0,&p_1074->g_256,&p_1074->g_256},{&p_1074->g_256,(void*)0,(void*)0,&p_1074->g_256,(void*)0,(void*)0,&p_1074->g_256,&p_1074->g_256},{&p_1074->g_256,(void*)0,(void*)0,&p_1074->g_256,(void*)0,(void*)0,&p_1074->g_256,&p_1074->g_256},{&p_1074->g_256,(void*)0,(void*)0,&p_1074->g_256,(void*)0,(void*)0,&p_1074->g_256,&p_1074->g_256},{&p_1074->g_256,(void*)0,(void*)0,&p_1074->g_256,(void*)0,(void*)0,&p_1074->g_256,&p_1074->g_256}};
        int8_t l_618 = 0L;
        VECTOR(uint32_t, 2) l_622 = (VECTOR(uint32_t, 2))(0x567EAB4DL, 0x6DE5D96EL);
        int i, j;
        ++l_619;
        --l_622.x;
        l_617.s1 &= (safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_u((*p_31), 4))));
    }
    for (p_1074->g_298 = 12; (p_1074->g_298 > 30); ++p_1074->g_298)
    { /* block id: 295 */
        union U1 *l_639[8];
        VECTOR(int32_t, 8) l_644 = (VECTOR(int32_t, 8))(0x33E68E5BL, (VECTOR(int32_t, 4))(0x33E68E5BL, (VECTOR(int32_t, 2))(0x33E68E5BL, 0x6CDC6BAAL), 0x6CDC6BAAL), 0x6CDC6BAAL, 0x33E68E5BL, 0x6CDC6BAAL);
        VECTOR(int8_t, 16) l_645 = (VECTOR(int8_t, 16))(0x26L, (VECTOR(int8_t, 4))(0x26L, (VECTOR(int8_t, 2))(0x26L, 1L), 1L), 1L, 0x26L, 1L, (VECTOR(int8_t, 2))(0x26L, 1L), (VECTOR(int8_t, 2))(0x26L, 1L), 0x26L, 1L, 0x26L, 1L);
        VECTOR(int8_t, 8) l_647 = (VECTOR(int8_t, 8))(0x5CL, (VECTOR(int8_t, 4))(0x5CL, (VECTOR(int8_t, 2))(0x5CL, 0x77L), 0x77L), 0x77L, 0x5CL, 0x77L);
        uint32_t *l_649 = &p_1074->g_295[3][4][2];
        uint32_t l_650 = 0UL;
        int32_t *l_651 = &l_615;
        VECTOR(uint64_t, 2) l_677 = (VECTOR(uint64_t, 2))(0xBC9D3A8D80A3C947L, 0x49F193AD92682151L);
        int i;
        for (i = 0; i < 8; i++)
            l_639[i] = &p_1074->g_578;
        (*l_651) &= (safe_sub_func_int64_t_s_s((((-4L) < p_1074->g_19) ^ (safe_rshift_func_uint16_t_u_s(p_29, p_1074->g_305[8][1][3].f0))), (safe_mul_func_int8_t_s_s((0x32L | (((VECTOR(int32_t, 8))(p_1074->g_636.zxwwzwzx)).s5 | ((l_616 = ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(8UL, 1UL, 0x5AD7864AE9E20AEFL, 0x697C2A1D464FDB58L)))).xwxwzzwzzyzxwyyw)).s5) , (!((safe_rshift_func_uint16_t_u_s(((l_639[6] != (void*)0) ^ ((VECTOR(uint16_t, 2))(2UL, 0x566BL)).hi), ((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 16))(l_640.s2145447505376711)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))(1L, ((VECTOR(int16_t, 2))(p_1074->g_641.wz)), 0x3251L, (safe_mod_func_uint8_t_u_u((((+(l_644.s5 | ((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(l_645.sae16)).zxzxyzzy, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(p_1074->g_646.s52)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_647.s6142)).zyzxzyyyzzyzxzww)))).s0c))).yxxyyyxx))).s72, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))((-5L), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 4))(p_1074->g_648.yxxx)), ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 16))(0x5EL, ((((*l_649) = 2UL) >= p_29) != p_1074->g_648.x), 0L, 0x06L, ((VECTOR(int8_t, 8))(0x00L)), (*p_1074->g_258), ((VECTOR(int8_t, 2))((-10L))), (-1L))), (int8_t)(*p_31)))).s8ef5, ((VECTOR(int8_t, 4))(7L)), ((VECTOR(int8_t, 4))(1L)))))))).wxxywyzxzyzyyxzz)).lo)), l_645.s4, 0x05L, ((VECTOR(int8_t, 4))(5L)), 0L)).sbe))))).yxyxxxxy)).s5 == (*p_31)) , p_1074->g_494.z))) , p_29) == (*p_1074->g_502)), l_619)), 0x667EL, p_1074->g_320.y, 0x4EB4L, p_29, p_1074->g_409.x, p_30, l_650, ((VECTOR(int16_t, 2))(1L)), 0x563DL, 1L)).s3a91, ((VECTOR(int16_t, 4))(8L))))))).ywzyxzwxwywxwwyx))).sf)) > l_647.s3))))), FAKE_DIVERGE(p_1074->local_1_offset, get_local_id(1), 10)))));
        if ((atomic_inc(&p_1074->g_atomic_input[56 * get_linear_group_id() + 31]) == 4))
        { /* block id: 300 */
            int64_t l_652 = 7L;
            uint8_t l_653 = 7UL;
            VECTOR(uint32_t, 8) l_656 = (VECTOR(uint32_t, 8))(4294967293UL, (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0xC6CE6D09L), 0xC6CE6D09L), 0xC6CE6D09L, 4294967293UL, 0xC6CE6D09L);
            VECTOR(uint32_t, 16) l_657 = (VECTOR(uint32_t, 16))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0x28A22290L), 0x28A22290L), 0x28A22290L, 4UL, 0x28A22290L, (VECTOR(uint32_t, 2))(4UL, 0x28A22290L), (VECTOR(uint32_t, 2))(4UL, 0x28A22290L), 4UL, 0x28A22290L, 4UL, 0x28A22290L);
            uint32_t l_658 = 0x1A80082BL;
            VECTOR(uint32_t, 4) l_659 = (VECTOR(uint32_t, 4))(0xC265F995L, (VECTOR(uint32_t, 2))(0xC265F995L, 0x395D5CB4L), 0x395D5CB4L);
            VECTOR(uint32_t, 2) l_660 = (VECTOR(uint32_t, 2))(0x7CA245BCL, 1UL);
            VECTOR(uint32_t, 2) l_661 = (VECTOR(uint32_t, 2))(0x2E21D5D3L, 0x24B18091L);
            VECTOR(uint32_t, 16) l_662 = (VECTOR(uint32_t, 16))(0x856CE9DAL, (VECTOR(uint32_t, 4))(0x856CE9DAL, (VECTOR(uint32_t, 2))(0x856CE9DAL, 1UL), 1UL), 1UL, 0x856CE9DAL, 1UL, (VECTOR(uint32_t, 2))(0x856CE9DAL, 1UL), (VECTOR(uint32_t, 2))(0x856CE9DAL, 1UL), 0x856CE9DAL, 1UL, 0x856CE9DAL, 1UL);
            uint32_t l_663 = 0x2CBB1560L;
            VECTOR(uint32_t, 4) l_664 = (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0xB8A35394L), 0xB8A35394L);
            VECTOR(uint32_t, 2) l_665 = (VECTOR(uint32_t, 2))(0UL, 4294967295UL);
            int64_t l_666 = 0x7770A60C488B035FL;
            union U0 l_667[5] = {{0x2CL},{0x2CL},{0x2CL},{0x2CL},{0x2CL}};
            int32_t l_669 = 0L;
            int32_t *l_668 = &l_669;
            int32_t *l_670 = &l_669;
            int32_t *l_671 = &l_669;
            int i;
            --l_653;
            l_671 = (l_670 = ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(l_656.s43)).yxxxyxxy, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4294967295UL, 0x288D8ED9L)), ((VECTOR(uint32_t, 2))(l_657.s6b)), 0xDF31C54DL, (l_658 , ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 4))(l_659.wzzx)).xwzxxyzywyzywwzy, ((VECTOR(uint32_t, 2))(l_660.yx)).xyyyyyxyyxxyxxxx, ((VECTOR(uint32_t, 8))(l_661.xxyyyxyy)).s0655042453625361))).s86)).lo), 0x6219D5DDL, 0xA34CD5BDL))))).s34, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(min(((VECTOR(uint32_t, 4))(l_662.s2cc1)), (uint32_t)l_663))).xwxyyzwx)).s3476352565122525)).s51, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 8))(l_664.wxxxxwwx)).odd, ((VECTOR(uint32_t, 8))(l_665.xyxyxxyx)).hi))).odd))))), 0x9959A4C0L, 0x0C9FDAEBL)).odd)), 0UL, 8UL)).x , (l_666 , l_667[2])) , l_668));
            unsigned int result = 0;
            result += l_652;
            result += l_653;
            result += l_656.s7;
            result += l_656.s6;
            result += l_656.s5;
            result += l_656.s4;
            result += l_656.s3;
            result += l_656.s2;
            result += l_656.s1;
            result += l_656.s0;
            result += l_657.sf;
            result += l_657.se;
            result += l_657.sd;
            result += l_657.sc;
            result += l_657.sb;
            result += l_657.sa;
            result += l_657.s9;
            result += l_657.s8;
            result += l_657.s7;
            result += l_657.s6;
            result += l_657.s5;
            result += l_657.s4;
            result += l_657.s3;
            result += l_657.s2;
            result += l_657.s1;
            result += l_657.s0;
            result += l_658;
            result += l_659.w;
            result += l_659.z;
            result += l_659.y;
            result += l_659.x;
            result += l_660.y;
            result += l_660.x;
            result += l_661.y;
            result += l_661.x;
            result += l_662.sf;
            result += l_662.se;
            result += l_662.sd;
            result += l_662.sc;
            result += l_662.sb;
            result += l_662.sa;
            result += l_662.s9;
            result += l_662.s8;
            result += l_662.s7;
            result += l_662.s6;
            result += l_662.s5;
            result += l_662.s4;
            result += l_662.s3;
            result += l_662.s2;
            result += l_662.s1;
            result += l_662.s0;
            result += l_663;
            result += l_664.w;
            result += l_664.z;
            result += l_664.y;
            result += l_664.x;
            result += l_665.y;
            result += l_665.x;
            result += l_666;
            int l_667_i0;
            for (l_667_i0 = 0; l_667_i0 < 5; l_667_i0++) {
                result += l_667[l_667_i0].f0;
                result += l_667[l_667_i0].f1;
                result += l_667[l_667_i0].f2;
                result += l_667[l_667_i0].f3;
            }
            result += l_669;
            atomic_add(&p_1074->g_special_values[56 * get_linear_group_id() + 31], result);
        }
        else
        { /* block id: 304 */
            (1 + 1);
        }
        for (p_1074->g_259 = (-12); (p_1074->g_259 > 28); p_1074->g_259 = safe_add_func_int64_t_s_s(p_1074->g_259, 1))
        { /* block id: 309 */
            int32_t *l_676[1];
            int i;
            for (i = 0; i < 1; i++)
                l_676[i] = &l_616;
            (*p_1074->g_675) = p_1074->g_674;
            l_677.x++;
        }
    }
    p_1074->g_196.s6 |= (l_700[5][4][0] = ((l_617.s7 >= ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 2))((-7L), (-1L))), ((VECTOR(int8_t, 8))(p_1074->g_680.s92341423)).s00))).yyyx, ((VECTOR(int8_t, 16))(l_681.s0653425667212170)).s5bc7))).lo, ((VECTOR(uint8_t, 16))(p_1074->g_682.s6ebf8c9ad469dbb7)).s88))).lo) <= (safe_sub_func_int8_t_s_s((safe_div_func_int16_t_s_s((p_29 == (p_29 && (l_687 == ((GROUP_DIVERGE(2, 1) & (((safe_rshift_func_uint8_t_u_s((safe_div_func_uint8_t_u_u((((safe_unary_minus_func_int8_t_s(((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((*p_1074->g_258), (*p_31))) && (((l_681.s6 , ((*p_31) < (FAKE_DIVERGE(p_1074->global_0_offset, get_global_id(0), 10) > p_30))) , 0x3E44L) ^ p_30)), l_617.s0)) <= (*p_1074->g_610)), l_640.s0)) , (*p_31)))) , p_29) | l_640.s5), p_29)), 6)) || l_681.s5) , 0L)) , l_687)))), p_30)), FAKE_DIVERGE(p_1074->global_2_offset, get_global_id(2), 10)))));
    return p_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_1074->g_13 p_1074->g_195 p_1074->g_256 p_1074->g_258 p_1074->g_259 p_1074->g_247 p_1074->g_248 p_1074->g_293 p_1074->g_196 p_1074->g_295 p_1074->g_298 p_1074->g_301 p_1074->g_305 p_1074->g_246 p_1074->g_209.f0 p_1074->g_319 p_1074->g_320 p_1074->g_346 p_1074->g_comm_values p_1074->g_194 p_1074->g_391 p_1074->g_407 p_1074->g_409 p_1074->g_19 p_1074->g_417 p_1074->g_447 p_1074->l_comm_values p_1074->g_249 p_1074->g_438 p_1074->g_494 p_1074->g_501 p_1074->g_512 p_1074->g_513 p_1074->g_518 p_1074->g_519 p_1074->g_520 p_1074->g_524 p_1074->g_305.f0 p_1074->g_560 p_1074->g_568 p_1074->g_574 p_1074->g_242 p_1074->g_578 p_1074->g_579 p_1074->g_502 p_1074->g_578.f0 p_1074->g_588
 * writes: p_1074->g_195 p_1074->g_256 p_1074->g_259 p_1074->g_13 p_1074->g_293 p_1074->g_295 p_1074->g_298 p_1074->g_209.f0 p_1074->g_301 p_1074->g_391 p_1074->g_19 p_1074->g_258 p_1074->g_518 p_1074->g_520 p_1074->g_196 p_1074->g_578.f0
 */
uint8_t  func_32(int16_t * p_33, int64_t  p_34, uint32_t  p_35, int8_t * p_36, int16_t * p_37, struct S2 * p_1074)
{ /* block id: 138 */
    int32_t *l_260 = &p_1074->g_256;
    int32_t **l_261 = &p_1074->g_195;
    union U1 **l_266 = &p_1074->g_208;
    union U1 ***l_267 = &l_266;
    union U1 **l_268[1];
    union U1 ***l_269 = &l_268[0];
    int64_t *l_280 = (void*)0;
    int64_t *l_281 = (void*)0;
    int64_t *l_282 = (void*)0;
    int64_t *l_283 = (void*)0;
    int64_t *l_284[4][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int8_t *l_287 = &p_1074->g_259;
    int8_t **l_288 = &l_287;
    VECTOR(int32_t, 2) l_289 = (VECTOR(int32_t, 2))(1L, 0x30C77834L);
    uint8_t *l_290 = &p_1074->g_19;
    int32_t l_291[5][7][7] = {{{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L}},{{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L}},{{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L}},{{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L}},{{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L},{3L,0x7120B1F7L,0x5C08FB90L,0x5009F6B5L,(-2L),0x786EB2C5L,0x19DE1A63L}}};
    int8_t *l_292 = &p_1074->g_293;
    uint32_t *l_294 = &p_1074->g_295[0][1][3];
    uint32_t *l_296 = (void*)0;
    uint32_t *l_297[2][10] = {{(void*)0,&p_1074->g_298,&p_1074->g_298,(void*)0,(void*)0,&p_1074->g_298,&p_1074->g_298,(void*)0,(void*)0,&p_1074->g_298},{(void*)0,&p_1074->g_298,&p_1074->g_298,(void*)0,(void*)0,&p_1074->g_298,&p_1074->g_298,(void*)0,(void*)0,&p_1074->g_298}};
    int16_t *l_299 = &p_1074->g_209.f0;
    int16_t *l_300[5];
    VECTOR(uint32_t, 16) l_310 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x5F155D4CL), 0x5F155D4CL), 0x5F155D4CL, 0UL, 0x5F155D4CL, (VECTOR(uint32_t, 2))(0UL, 0x5F155D4CL), (VECTOR(uint32_t, 2))(0UL, 0x5F155D4CL), 0UL, 0x5F155D4CL, 0UL, 0x5F155D4CL);
    uint8_t *l_314 = &p_1074->g_19;
    uint8_t **l_313[1][9] = {{&l_314,&l_314,&l_314,&l_314,&l_314,&l_314,&l_314,&l_314,&l_314}};
    uint32_t l_318 = 0UL;
    VECTOR(int16_t, 16) l_361 = (VECTOR(int16_t, 16))(0x06F0L, (VECTOR(int16_t, 4))(0x06F0L, (VECTOR(int16_t, 2))(0x06F0L, 1L), 1L), 1L, 0x06F0L, 1L, (VECTOR(int16_t, 2))(0x06F0L, 1L), (VECTOR(int16_t, 2))(0x06F0L, 1L), 0x06F0L, 1L, 0x06F0L, 1L);
    VECTOR(uint64_t, 8) l_410 = (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x7F5DF7796FF471FCL), 0x7F5DF7796FF471FCL), 0x7F5DF7796FF471FCL, 1UL, 0x7F5DF7796FF471FCL);
    VECTOR(uint32_t, 4) l_418 = (VECTOR(uint32_t, 4))(0x14E1AA4AL, (VECTOR(uint32_t, 2))(0x14E1AA4AL, 2UL), 2UL);
    VECTOR(uint8_t, 2) l_443 = (VECTOR(uint8_t, 2))(248UL, 5UL);
    int64_t l_460[8] = {6L,6L,6L,6L,6L,6L,6L,6L};
    uint32_t l_461 = 0xAD3FE701L;
    uint64_t l_469[9][2] = {{0x04C2CACCBDF060BFL,0x04C2CACCBDF060BFL},{0x04C2CACCBDF060BFL,0x04C2CACCBDF060BFL},{0x04C2CACCBDF060BFL,0x04C2CACCBDF060BFL},{0x04C2CACCBDF060BFL,0x04C2CACCBDF060BFL},{0x04C2CACCBDF060BFL,0x04C2CACCBDF060BFL},{0x04C2CACCBDF060BFL,0x04C2CACCBDF060BFL},{0x04C2CACCBDF060BFL,0x04C2CACCBDF060BFL},{0x04C2CACCBDF060BFL,0x04C2CACCBDF060BFL},{0x04C2CACCBDF060BFL,0x04C2CACCBDF060BFL}};
    VECTOR(int32_t, 16) l_511 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
    VECTOR(int32_t, 4) l_514 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x73453496L), 0x73453496L);
    VECTOR(int32_t, 16) l_516 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-4L)), (-4L)), (-4L), 0L, (-4L), (VECTOR(int32_t, 2))(0L, (-4L)), (VECTOR(int32_t, 2))(0L, (-4L)), 0L, (-4L), 0L, (-4L));
    VECTOR(int32_t, 16) l_517 = (VECTOR(int32_t, 16))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, (-1L)), (-1L)), (-1L), 9L, (-1L), (VECTOR(int32_t, 2))(9L, (-1L)), (VECTOR(int32_t, 2))(9L, (-1L)), 9L, (-1L), 9L, (-1L));
    int64_t l_541 = 0x5BC0DA3BA49B938FL;
    uint32_t l_543 = 0UL;
    VECTOR(uint32_t, 8) l_569 = (VECTOR(uint32_t, 8))(0x29EC7C47L, (VECTOR(uint32_t, 4))(0x29EC7C47L, (VECTOR(uint32_t, 2))(0x29EC7C47L, 4294967290UL), 4294967290UL), 4294967290UL, 0x29EC7C47L, 4294967290UL);
    uint16_t l_577 = 0UL;
    uint32_t l_580[10][1] = {{0xA23EC920L},{0xA23EC920L},{0xA23EC920L},{0xA23EC920L},{0xA23EC920L},{0xA23EC920L},{0xA23EC920L},{0xA23EC920L},{0xA23EC920L},{0xA23EC920L}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_268[i] = &p_1074->g_208;
    for (i = 0; i < 5; i++)
        l_300[i] = &p_1074->g_301;
    (*l_261) = l_260;
    if (((p_1074->g_301 |= ((*l_299) = (((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((((*l_267) = l_266) == ((*l_269) = l_268[0])), (p_1074->g_298 ^= (((*l_294) |= (((*l_292) ^= (safe_mul_func_int8_t_s_s((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x66L, 0x5EL)).even, (((VECTOR(int64_t, 4))((((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 4))(0x3B993314L, (safe_mul_func_int16_t_s_s((~((*p_37) = ((safe_add_func_int64_t_s_s((p_34 = (safe_rshift_func_int16_t_s_u((*p_33), 2))), (safe_rshift_func_int8_t_s_u(((*p_36) = (((**l_261) |= (p_36 != ((*l_288) = l_287))) != ((((*p_1074->g_258) >= ((-8L) & (l_289.x , ((l_290 != (void*)0) , p_35)))) , (void*)0) != &l_260))), p_1074->g_247.y)))) <= 1L))), p_35)), 0x134A1695L, 0xE8BED672L)).lo, ((VECTOR(uint32_t, 2))(4294967286UL))))).yyxxxyyxxyyxyyyy)), (uint32_t)p_1074->g_247.x))).s8 >= p_35), ((VECTOR(int64_t, 2))(0L)), 0x22BB212999A3F539L)).w , l_291[2][1][0]))), p_1074->g_248.s4))) != p_1074->g_196.s5)) , 1UL)))) || p_34), p_1074->g_248.s3)) || 0x4560C9A0L) >= p_35))) ^ 0x2BE6L))
    { /* block id: 152 */
        uint32_t l_302 = 0x92D0DE0DL;
        uint8_t **l_306 = &l_290;
        int8_t ***l_307 = &l_288;
        int8_t **l_316[3][5] = {{(void*)0,(void*)0,&l_287,&p_1074->g_258,&l_287},{(void*)0,(void*)0,&l_287,&p_1074->g_258,&l_287},{(void*)0,(void*)0,&l_287,&p_1074->g_258,&l_287}};
        int8_t ***l_315 = &l_316[1][1];
        int8_t **l_317 = &l_292;
        int32_t *l_321 = (void*)0;
        int32_t *l_322 = &l_291[2][1][0];
        int i, j;
        (*l_260) = (l_302 | (safe_sub_func_uint8_t_u_u((&p_36 == (p_1074->g_305[8][1][3] , (((((*l_306) = &p_1074->g_242) == l_292) | 0xF80AL) , ((*l_307) = &l_287)))), (safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(l_310.sca)).even, (safe_mod_func_int8_t_s_s((!((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((((l_306 == (p_1074->g_246.x , l_313[0][3])) || p_1074->g_259) ^ p_34), 0x5EL, 0x41L, 0x4DL)), (**l_261), (-1L), 0L, 0x45L)))).s5255110047274613)).sf), p_1074->g_301)))))));
        (*l_322) ^= ((*p_37) >= ((p_1074->g_209.f0 <= p_34) && ((((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), (-1L))), 6L, 0x60BC0622L)).w < ((+((l_318 &= (((*l_315) = ((*l_307) = &p_1074->g_258)) == (l_317 = &p_1074->g_258))) >= ((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_1074->g_319.s2071)).wzxywzzwyxyywzzw)).s23))).xyyxyxyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(6UL, 65535UL, 0UL, 0x0300L)))).zyyxzxyy, ((VECTOR(uint16_t, 2))(p_1074->g_320.xy)).xyyyyxxx))).odd)).w || (((void*)0 == &p_1074->g_301) , 0xC4DCL)) > l_302))) || (*l_260))) > l_302) & (*p_33)) , 0L)));
        for (p_35 = (-16); (p_35 >= 48); ++p_35)
        { /* block id: 163 */
            int32_t l_325 = (-3L);
            int32_t *l_326 = &l_291[4][1][3];
            VECTOR(uint32_t, 16) l_332 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x05F560CEL), 0x05F560CEL), 0x05F560CEL, 0UL, 0x05F560CEL, (VECTOR(uint32_t, 2))(0UL, 0x05F560CEL), (VECTOR(uint32_t, 2))(0UL, 0x05F560CEL), 0UL, 0x05F560CEL, 0UL, 0x05F560CEL);
            int32_t *l_341 = (void*)0;
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1074->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 57)), permutations[(safe_mod_func_uint32_t_u_u((((*l_292) = (*l_260)) & (FAKE_DIVERGE(p_1074->local_0_offset, get_local_id(0), 10) | l_325)), 10))][(safe_mod_func_uint32_t_u_u(p_1074->tid, 57))]));
            (*l_261) = l_326;
        }
    }
    else
    { /* block id: 177 */
        int64_t **l_344 = (void*)0;
        int64_t *l_345 = &p_1074->g_305[8][1][3].f3;
        int64_t **l_347 = (void*)0;
        int64_t **l_348 = &l_281;
        VECTOR(int32_t, 16) l_368 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
        uint16_t *l_377[3][2][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        union U1 ****l_378 = &l_267;
        union U1 ****l_379 = &l_269;
        uint16_t l_380 = 0xAD2AL;
        int32_t l_381 = 0x3D3A7B81L;
        int32_t l_389 = 0L;
        int32_t l_390 = (-6L);
        VECTOR(int16_t, 2) l_408 = (VECTOR(int16_t, 2))(0x13F0L, 7L);
        VECTOR(int8_t, 2) l_487 = (VECTOR(int8_t, 2))(0x28L, 0x2EL);
        int i, j, k;
        (*l_261) = (void*)0;
        (*l_260) = (safe_mod_func_uint16_t_u_u((((void*)0 != &p_36) && (p_34 == 2UL)), ((*p_1074->g_258) && ((*p_36) = ((l_345 = &p_34) == ((*l_348) = p_1074->g_346))))));
        if ((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((p_1074->g_320.x , ((VECTOR(uint32_t, 16))(abs(((VECTOR(uint32_t, 2))(0x9E5D797AL, 0UL)).yyxxyxxxyyxyyyyy))).se), (safe_mod_func_int32_t_s_s((safe_div_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_361.sbc02)))).yzyzzzwxyzxyzxzy)).s5, 0x391AL, (-1L), 0x2869L)).x, (safe_mod_func_int16_t_s_s(((*p_37) = p_1074->g_196.s4), (((safe_sub_func_uint8_t_u_u((p_35 >= (safe_add_func_int16_t_s_s(((p_1074->g_319.s1 >= ((VECTOR(int32_t, 4))(l_368.s5f15)).w) && (((safe_sub_func_int16_t_s_s(p_1074->g_196.s3, p_1074->g_comm_values[p_1074->tid])) <= 0x1492L) && (safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s((*l_260), ((l_368.s8 = GROUP_DIVERGE(0, 1)) & (((*l_379) = ((*l_378) = &l_266)) == &p_1074->g_207)))), p_1074->g_246.x)))), 6L))), (*l_260))) > 0x9B40672279B409C1L) , l_368.sc))))), l_380)), l_380)), 0x8A89E097L)))), l_381)))
        { /* block id: 187 */
            uint8_t l_382 = 0UL;
            int32_t *l_387 = &l_381;
            int32_t *l_388[7] = {&l_291[3][4][5],&l_291[2][1][0],&l_291[3][4][5],&l_291[3][4][5],&l_291[2][1][0],&l_291[3][4][5],&l_291[3][4][5]};
            uint32_t l_392 = 0UL;
            int i;
            --l_382;
            for (l_318 = 0; (l_318 > 5); l_318++)
            { /* block id: 191 */
                if (p_35)
                    break;
            }
            ++l_392;
            (*l_261) = (*p_1074->g_194);
        }
        else
        { /* block id: 196 */
            uint64_t l_395 = 0UL;
            VECTOR(uint32_t, 16) l_412 = (VECTOR(uint32_t, 16))(0xD45A2690L, (VECTOR(uint32_t, 4))(0xD45A2690L, (VECTOR(uint32_t, 2))(0xD45A2690L, 0xB188B562L), 0xB188B562L), 0xB188B562L, 0xD45A2690L, 0xB188B562L, (VECTOR(uint32_t, 2))(0xD45A2690L, 0xB188B562L), (VECTOR(uint32_t, 2))(0xD45A2690L, 0xB188B562L), 0xD45A2690L, 0xB188B562L, 0xD45A2690L, 0xB188B562L);
            int32_t l_431 = (-7L);
            VECTOR(int32_t, 2) l_439 = (VECTOR(int32_t, 2))(0x6CE861F5L, 0x4E430FA7L);
            VECTOR(int8_t, 8) l_476 = (VECTOR(int8_t, 8))(0x2BL, (VECTOR(int8_t, 4))(0x2BL, (VECTOR(int8_t, 2))(0x2BL, (-1L)), (-1L)), (-1L), 0x2BL, (-1L));
            int32_t *l_485 = (void*)0;
            int32_t l_491 = 7L;
            int i;
            (*l_260) = l_395;
            for (l_318 = 13; (l_318 <= 32); l_318 = safe_add_func_uint64_t_u_u(l_318, 5))
            { /* block id: 200 */
                uint32_t l_404 = 0x32887811L;
                VECTOR(uint64_t, 4) l_411 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x2AB417008276A4E2L), 0x2AB417008276A4E2L);
                VECTOR(uint64_t, 16) l_419 = (VECTOR(uint64_t, 16))(8UL, (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 1UL), 1UL), 1UL, 8UL, 1UL, (VECTOR(uint64_t, 2))(8UL, 1UL), (VECTOR(uint64_t, 2))(8UL, 1UL), 8UL, 1UL, 8UL, 1UL);
                int32_t l_424[8] = {0x46146A42L,0x46146A42L,0x46146A42L,0x46146A42L,0x46146A42L,0x46146A42L,0x46146A42L,0x46146A42L};
                VECTOR(uint8_t, 16) l_444 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xD7L), 0xD7L), 0xD7L, 1UL, 0xD7L, (VECTOR(uint8_t, 2))(1UL, 0xD7L), (VECTOR(uint8_t, 2))(1UL, 0xD7L), 1UL, 0xD7L, 1UL, 0xD7L);
                VECTOR(uint16_t, 2) l_445 = (VECTOR(uint16_t, 2))(65535UL, 0xFD53L);
                VECTOR(uint16_t, 4) l_446 = (VECTOR(uint16_t, 4))(0x8664L, (VECTOR(uint16_t, 2))(0x8664L, 0UL), 0UL);
                int i;
                for (p_35 = 0; (p_35 != 24); p_35 = safe_add_func_uint8_t_u_u(p_35, 4))
                { /* block id: 203 */
                    int32_t *l_402 = &l_390;
                    int32_t *l_403[2][1];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_403[i][j] = (void*)0;
                    }
                    for (p_1074->g_391 = (-6); (p_1074->g_391 > 23); p_1074->g_391 = safe_add_func_uint64_t_u_u(p_1074->g_391, 6))
                    { /* block id: 206 */
                        (*l_260) |= (~p_35);
                    }
                    l_404--;
                }
                if (((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))((-1L), (-1L))), 0x4C7177C5L)).xxzwzyyy, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(p_1074->g_407.yyxxyyyxxyxxxyxx)).s937b, ((VECTOR(int16_t, 2))(l_408.yx)).xxxx, ((VECTOR(int16_t, 16))(0x6EFBL, (l_381 == (((*l_314) |= (+((VECTOR(uint8_t, 8))(p_1074->g_409.zxxzzzxy)).s6)) || (((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(0xB08F5D7767B1D07DL, ((VECTOR(uint64_t, 4))(l_410.s3504)), 18446744073709551613UL, 0x2B7028BA34BF643CL, 18446744073709551615UL)))).s44, ((VECTOR(uint64_t, 8))(4UL, ((VECTOR(uint64_t, 2))(l_411.yz)), (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(l_412.s58c4e30d977d7857)).s96, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(clz(((VECTOR(uint32_t, 2))(0UL, 0xBF027EF4L)).yyxyxyxyyyyyxxxy))).s279d)).odd, ((VECTOR(uint32_t, 2))(0xAC752FDAL, 0xA401A8D8L))))), 0x81837315L, 1UL)).w == (((safe_mod_func_uint16_t_u_u(p_34, (safe_div_func_int64_t_s_s((((VECTOR(uint32_t, 16))(0x7678A340L, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967290UL, 0x805DFF00L)), 0x46EA5E95L, 0xB120D8C3L)), 4294967291UL, ((VECTOR(uint32_t, 2))(p_1074->g_417.yx)), ((VECTOR(uint32_t, 4))(((*l_294) = l_411.z), 0x39738C6AL, 0x7533D08EL, 0UL)), 4294967290UL, ((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0UL, 4294967295UL)), 0UL, 4294967287UL)).lo)).yyyx)).odd, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_418.yz)).yxxy)).odd)))))), 0x3485E18FL)).s3 > (0x4994L && 9UL)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_419.s1aad8187688dbad3)).s5a)).hi)))) | (((-1L) ^ (safe_add_func_int32_t_s_s((*l_260), 0x8A9F1043L))) | p_35)) ^ l_408.y)), 0xD908DDFDF7DC65B0L, ((VECTOR(uint64_t, 2))(0UL)), 18446744073709551615UL)).s30))).hi , (*l_260)))), ((VECTOR(int16_t, 2))((-9L))), p_1074->g_319.s1, ((VECTOR(int16_t, 8))(0x4455L)), ((VECTOR(int16_t, 2))(0x40C2L)), 1L)).s5066))).yzyzywzz, ((VECTOR(uint16_t, 8))(65535UL))))), ((VECTOR(int32_t, 8))((-1L)))))).s3)
                { /* block id: 213 */
                    int32_t l_434 = (-2L);
                    int32_t l_435 = (-1L);
                    int32_t l_436 = (-1L);
                    VECTOR(int32_t, 4) l_437 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x28DDF203L), 0x28DDF203L);
                    uint16_t l_440 = 0x09D8L;
                    int32_t *l_458 = (void*)0;
                    int32_t *l_459[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_459[i] = &p_1074->g_256;
                    for (l_381 = 0; (l_381 <= (-1)); l_381 = safe_sub_func_uint32_t_u_u(l_381, 6))
                    { /* block id: 216 */
                        int32_t *l_425 = &l_424[7];
                        int32_t *l_426 = (void*)0;
                        int32_t *l_427 = &l_424[0];
                        int32_t *l_428 = (void*)0;
                        int32_t *l_429 = &l_390;
                        int32_t *l_430 = (void*)0;
                        int32_t *l_432 = &p_1074->g_256;
                        int32_t *l_433[8][10][3] = {{{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390}},{{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390}},{{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390}},{{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390}},{{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390}},{{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390}},{{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390}},{{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390},{&l_291[2][1][0],&l_291[0][1][4],&l_390}}};
                        int i, j, k;
                        (*l_260) |= 4L;
                        --l_440;
                        (*l_427) ^= ((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(0x3619L, 4UL, 1UL, 0x6372L)).xzwwwyxwwzyyyywy, ((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 2))(0xBFL, 255UL)).yxyyyxxxyxxxyyxx))).sed)).xyxyxyxyyxyxyxyx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 8))(l_443.yyyxxxxy)), ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x3DL, 254UL)), 0x1DL, 247UL)).yyyzyyyw))).hi, ((VECTOR(uint8_t, 8))(l_444.s1bf60d15)).lo))).zxwzxyyy))).s10)).xxxyyyxxxxyyxxyx))), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_445.xy)), 65527UL, 65526UL, p_1074->g_320.x, ((VECTOR(uint16_t, 2))(l_446.yz)), 65526UL)))).s3767406173172335))).sc0, ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(p_1074->g_447.s37275203)))).s43)).xyyyyxyx, (uint16_t)(p_35 > ((safe_lshift_func_uint16_t_u_s((((safe_add_func_uint32_t_u_u(p_1074->g_447.s3, (safe_lshift_func_int16_t_s_s(((0x623FB8B5L < FAKE_DIVERGE(p_1074->group_2_offset, get_group_id(2), 10)) | ((safe_mod_func_uint32_t_u_u((l_439.x & (safe_mod_func_uint64_t_u_u((((*l_294) = ((*p_36) <= (0xC612FA446A33E30DL < ((((VECTOR(int8_t, 4))(0x66L, l_434, (-1L), 1L)).x > 0x69L) && p_1074->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1074->tid, 57))])))) || p_1074->g_249.s5), FAKE_DIVERGE(p_1074->local_2_offset, get_local_id(2), 10)))), l_431)) || 0x3DL)), p_1074->g_249.s3)))) > p_1074->g_438) || l_431), (*p_33))) ^ 0xA9L)), (uint16_t)p_34))).s54, ((VECTOR(uint16_t, 2))(0xACA6L))))).yyxxxxxyxxyyyxyy))).s9c, ((VECTOR(uint16_t, 2))(0x02C2L))))).odd, p_34, ((VECTOR(uint16_t, 2))(1UL)), p_35, ((VECTOR(uint16_t, 4))(1UL)), 0x4822L, ((VECTOR(uint16_t, 4))(0xAF57L)), 0x2400L, 65535UL)).s9 , 0UL) >= p_1074->g_247.y);
                    }
                    l_439.x = 1L;
                    l_461--;
                }
                else
                { /* block id: 224 */
                    int32_t *l_466 = (void*)0;
                    int32_t *l_467 = &l_389;
                    int32_t *l_468[5][3][8] = {{{(void*)0,(void*)0,(void*)0,&l_291[3][3][6],&l_424[3],&l_424[0],&l_291[2][4][4],&l_291[2][1][0]},{(void*)0,(void*)0,(void*)0,&l_291[3][3][6],&l_424[3],&l_424[0],&l_291[2][4][4],&l_291[2][1][0]},{(void*)0,(void*)0,(void*)0,&l_291[3][3][6],&l_424[3],&l_424[0],&l_291[2][4][4],&l_291[2][1][0]}},{{(void*)0,(void*)0,(void*)0,&l_291[3][3][6],&l_424[3],&l_424[0],&l_291[2][4][4],&l_291[2][1][0]},{(void*)0,(void*)0,(void*)0,&l_291[3][3][6],&l_424[3],&l_424[0],&l_291[2][4][4],&l_291[2][1][0]},{(void*)0,(void*)0,(void*)0,&l_291[3][3][6],&l_424[3],&l_424[0],&l_291[2][4][4],&l_291[2][1][0]}},{{(void*)0,(void*)0,(void*)0,&l_291[3][3][6],&l_424[3],&l_424[0],&l_291[2][4][4],&l_291[2][1][0]},{(void*)0,(void*)0,(void*)0,&l_291[3][3][6],&l_424[3],&l_424[0],&l_291[2][4][4],&l_291[2][1][0]},{(void*)0,(void*)0,(void*)0,&l_291[3][3][6],&l_424[3],&l_424[0],&l_291[2][4][4],&l_291[2][1][0]}},{{(void*)0,(void*)0,(void*)0,&l_291[3][3][6],&l_424[3],&l_424[0],&l_291[2][4][4],&l_291[2][1][0]},{(void*)0,(void*)0,(void*)0,&l_291[3][3][6],&l_424[3],&l_424[0],&l_291[2][4][4],&l_291[2][1][0]},{(void*)0,(void*)0,(void*)0,&l_291[3][3][6],&l_424[3],&l_424[0],&l_291[2][4][4],&l_291[2][1][0]}},{{(void*)0,(void*)0,(void*)0,&l_291[3][3][6],&l_424[3],&l_424[0],&l_291[2][4][4],&l_291[2][1][0]},{(void*)0,(void*)0,(void*)0,&l_291[3][3][6],&l_424[3],&l_424[0],&l_291[2][4][4],&l_291[2][1][0]},{(void*)0,(void*)0,(void*)0,&l_291[3][3][6],&l_424[3],&l_424[0],&l_291[2][4][4],&l_291[2][1][0]}}};
                    int i, j, k;
                    if (p_34)
                        break;
                    if ((atomic_inc(&p_1074->l_atomic_input[18]) == 4))
                    { /* block id: 227 */
                        int64_t l_464[3];
                        int64_t l_465 = 1L;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_464[i] = 5L;
                        l_465 |= (l_464[0] , 1L);
                        unsigned int result = 0;
                        int l_464_i0;
                        for (l_464_i0 = 0; l_464_i0 < 3; l_464_i0++) {
                            result += l_464[l_464_i0];
                        }
                        result += l_465;
                        atomic_add(&p_1074->l_special_values[18], result);
                    }
                    else
                    { /* block id: 229 */
                        (1 + 1);
                    }
                    l_469[8][1]++;
                }
                (*l_261) = (*l_261);
            }
            for (l_380 = 0; (l_380 > 17); l_380 = safe_add_func_uint32_t_u_u(l_380, 1))
            { /* block id: 238 */
                int32_t **l_486 = &l_260;
                int32_t *l_490 = &p_1074->g_256;
                int i, j;
                (*l_490) &= (((safe_div_func_uint8_t_u_u(p_35, ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 2))(l_476.s16)).xxxxxyxy, (int8_t)(safe_div_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((((*p_36) = (safe_mul_func_uint8_t_u_u((9L != (*p_1074->g_258)), ((((*l_261) = (*p_1074->g_194)) == ((*l_486) = (l_485 = &l_381))) <= ((*p_36) ^ ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_487.yyxy)))).z))))) && ((**l_486) , (*p_36))), ((*l_299) = (p_1074->g_13 ^= (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((p_34 , p_34), 0x139A74CEL, p_34, l_390, p_1074->g_409.z, ((VECTOR(int32_t, 8))(1L)), ((VECTOR(int32_t, 2))(3L)), 0x7C3F6166L)).sa9)).yyyx, ((VECTOR(int32_t, 4))(0x5D361E50L))))).z, 0x540AEF84L)))))) >= (-6L)), p_1074->g_295[0][1][3])), p_34))))).s0)) <= GROUP_DIVERGE(0, 1)) < 0x72C2459C6F439ABBL);
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1074->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 57)), permutations[(safe_mod_func_uint32_t_u_u((FAKE_DIVERGE(p_1074->local_1_offset, get_local_id(1), 10) , l_487.y), 10))][(safe_mod_func_uint32_t_u_u(p_1074->tid, 57))]));
                if (l_491)
                    continue;
            }
            if ((atomic_inc(&p_1074->l_atomic_input[55]) == 2))
            { /* block id: 252 */
                int32_t l_492 = 0x6D7A5775L;
                l_492 = 0x6F94093AL;
                unsigned int result = 0;
                result += l_492;
                atomic_add(&p_1074->l_special_values[55], result);
            }
            else
            { /* block id: 254 */
                (1 + 1);
            }
        }
    }
    if (((((safe_unary_minus_func_int16_t_s(((VECTOR(int16_t, 2))(p_1074->g_494.wz)).even)) , (*p_36)) | (FAKE_DIVERGE(p_1074->global_0_offset, get_global_id(0), 10) ^ ((l_291[2][1][0] &= (((safe_sub_func_int16_t_s_s((p_1074->g_209.f0 = (((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 8))((-1L), (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((*l_269) != (void*)0), (p_1074->g_295[0][1][3] && ((((void*)0 == p_1074->g_501[0]) & 3UL) | (safe_mod_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(p_1074->g_391, ((*p_33) = (p_34 , 0x28A8L)))), p_1074->g_19)))))), (*p_36))), (-1L), (-5L), 0x4EC3L, ((VECTOR(int16_t, 2))((-1L))), 1L)).lo, ((VECTOR(int16_t, 4))((-9L)))))).x && 0x7105L)), 65527UL)) , &p_1074->g_13) == l_300[2])) <= (*p_1074->g_258)))) & 0x8AB3E17ED84F6CA2L))
    { /* block id: 262 */
        VECTOR(int32_t, 2) l_515 = (VECTOR(int32_t, 2))(0x449801F6L, 1L);
        VECTOR(int32_t, 4) l_521 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x6DB037FCL), 0x6DB037FCL);
        int8_t *l_522 = &p_1074->g_305[8][1][3].f0;
        VECTOR(int32_t, 4) l_523 = (VECTOR(int32_t, 4))(0x0F61E65FL, (VECTOR(int32_t, 2))(0x0F61E65FL, (-2L)), (-2L));
        VECTOR(int32_t, 16) l_527 = (VECTOR(int32_t, 16))(0x22E479C7L, (VECTOR(int32_t, 4))(0x22E479C7L, (VECTOR(int32_t, 2))(0x22E479C7L, 1L), 1L), 1L, 0x22E479C7L, 1L, (VECTOR(int32_t, 2))(0x22E479C7L, 1L), (VECTOR(int32_t, 2))(0x22E479C7L, 1L), 0x22E479C7L, 1L, 0x22E479C7L, 1L);
        int32_t *l_528[1];
        int8_t l_542[8][10] = {{0x22L,0x62L,0x62L,0x22L,0x22L,0x62L,0x62L,0x22L,0x22L,0x62L},{0x22L,0x62L,0x62L,0x22L,0x22L,0x62L,0x62L,0x22L,0x22L,0x62L},{0x22L,0x62L,0x62L,0x22L,0x22L,0x62L,0x62L,0x22L,0x22L,0x62L},{0x22L,0x62L,0x62L,0x22L,0x22L,0x62L,0x62L,0x22L,0x22L,0x62L},{0x22L,0x62L,0x62L,0x22L,0x22L,0x62L,0x62L,0x22L,0x22L,0x62L},{0x22L,0x62L,0x62L,0x22L,0x22L,0x62L,0x62L,0x22L,0x22L,0x62L},{0x22L,0x62L,0x62L,0x22L,0x22L,0x62L,0x62L,0x22L,0x22L,0x62L},{0x22L,0x62L,0x62L,0x22L,0x22L,0x62L,0x62L,0x22L,0x22L,0x62L}};
        int16_t **l_550 = &l_300[0];
        VECTOR(uint16_t, 2) l_557 = (VECTOR(uint16_t, 2))(5UL, 0xB4CFL);
        VECTOR(uint64_t, 8) l_565 = (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x3007FAC00481E898L), 0x3007FAC00481E898L), 0x3007FAC00481E898L, 18446744073709551615UL, 0x3007FAC00481E898L);
        VECTOR(uint64_t, 8) l_566 = (VECTOR(uint64_t, 8))(18446744073709551611UL, (VECTOR(uint64_t, 4))(18446744073709551611UL, (VECTOR(uint64_t, 2))(18446744073709551611UL, 0x8584627B93A3AB13L), 0x8584627B93A3AB13L), 0x8584627B93A3AB13L, 18446744073709551611UL, 0x8584627B93A3AB13L);
        VECTOR(uint64_t, 8) l_567 = (VECTOR(uint64_t, 8))(0x0466310BEFDDA931L, (VECTOR(uint64_t, 4))(0x0466310BEFDDA931L, (VECTOR(uint64_t, 2))(0x0466310BEFDDA931L, 0x3C673B87A09E86B8L), 0x3C673B87A09E86B8L), 0x3C673B87A09E86B8L, 0x0466310BEFDDA931L, 0x3C673B87A09E86B8L);
        union U1 *l_583[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int8_t l_589 = 0x6FL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_528[i] = (void*)0;
        p_1074->g_520.s7 = (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(65535UL, 0x94F0L)).lo, (safe_mod_func_uint32_t_u_u((p_1074->g_249.s2 | ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(l_511.s2689)).xwyxwyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(p_1074->g_512.s52)).yxyxxyxxyxxyxxxy, ((VECTOR(int32_t, 16))(p_1074->g_513.yxzxxxwzwwyzxxwy))))).s13, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_514.xyyywxyw)).s3213340303230026)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 2))(l_515.yy)).yxxx))))).yxzwxzyxyywzxyxy))).s1c))).yxxx, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_516.s44c9385f7b3674de)).sd1, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_517.s3912)))), ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(0x16692E73L, 0L)), ((VECTOR(int32_t, 4))((-9L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(p_1074->g_518.xwzwzzwz)), ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(p_1074->g_519.xxyy)).yxyyzywx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(p_1074->g_520.sf2)))).yxyxxyyy)))))).s75)), 0x1EA216EFL, (-1L))), ((VECTOR(int32_t, 4))(l_521.xyzz))))).zzxzyyyx, ((VECTOR(int32_t, 8))((-9L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 1L)))), p_34, (((*l_288) = l_522) != &p_1074->g_293), 4L, 0x439F02FFL, 0x678C3066L))))).s6373074776425347, ((VECTOR(int32_t, 16))(l_523.ywyyzyyzzyxxzzzx))))).sa5)), 0x1A2C24DFL)).even))).xxxy, ((VECTOR(int32_t, 4))(p_1074->g_524.s3331)), ((VECTOR(int32_t, 16))(7L, ((VECTOR(int32_t, 8))(((((*p_33) = (safe_add_func_int64_t_s_s(((((p_1074->g_305[8][1][3].f0 <= (l_289.y = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_527.s6a5ec760)).s73)), (-6L), 0x217215FEL)).w)) != ((((safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s((*p_33), (safe_rshift_func_uint16_t_u_s(((safe_mul_func_int8_t_s_s((*p_1074->g_258), (safe_div_func_int32_t_s_s(0x24843E4AL, (p_1074->g_518.x ^= ((((safe_mul_func_int8_t_s_s((l_541 || 1UL), 0x28L)) && p_34) == 1L) <= 8L)))))) , 65535UL), p_1074->g_319.s6)))), p_35)) | 0x7E4146D6C0AC6F8FL) <= 0x6571C8333589C1F9L) | 0x75E0L)) <= 0x7EL) != p_1074->g_409.y), p_1074->g_248.s1))) > 65532UL) , p_34), ((VECTOR(int32_t, 4))(0x12D6AADBL)), ((VECTOR(int32_t, 2))(0x1043B3C8L)), 4L)), 0x1EEE3A77L, ((VECTOR(int32_t, 4))((-1L))), 0x35681F04L, 0x3FAC9F87L)).s20b0))), ((VECTOR(int32_t, 4))((-7L)))))), ((VECTOR(int32_t, 2))(0x05C280F9L)), (-5L), (-1L))).s17, ((VECTOR(int32_t, 2))(1L))))).yyxy))).odd, ((VECTOR(int32_t, 2))((-1L)))))), 0x0FB3B2EBL, ((VECTOR(int32_t, 2))(0x051E635DL)), ((VECTOR(int32_t, 2))(0x0A32CA74L)), ((VECTOR(int32_t, 4))((-1L))), (-1L), 1L, 0x53BC60B7L, 0x118B42F1L, 0x566287DFL)).even, ((VECTOR(int32_t, 8))(1L))))).s0), p_34))));
        l_543--;
        l_580[2][0] = (p_1074->g_196.s0 = (l_516.s7 = ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((((*l_550) = p_37) == &p_1074->g_301), ((((*p_1074->g_258) || (((((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(0xD00DL, 65535UL, 0xF1F0L, 0x24B5L)).z, (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_557.xxyy)).even)).lo, (safe_sub_func_int32_t_s_s(((p_1074->g_560[5] , ((*p_37) ^ (safe_rshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_565.s51)), 1UL, 0x7129CA7623B3579AL)), ((VECTOR(uint64_t, 4))(0x1B199B08E987050CL, ((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(3UL, 0xB8917FC865B9A95DL)).xxxxyxxxyxyxxxyy)).s39, ((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_566.s5562)).odd)), 4UL, 0UL, 0xC387DD6793A9709CL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_567.s05143117)))), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(1UL, 0UL, 0xD93869540B6FF4F6L, 18446744073709551610UL)))).lo)), 18446744073709551615UL)))), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 4))(p_1074->g_568.wxzx)), ((VECTOR(uint32_t, 4))(l_569.s7256))))).hi)).yxyxyyxxxxxxyyyy))).s86))), 6UL))))).z, (p_35 , (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))((((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((((p_34 , ((VECTOR(uint64_t, 8))(p_1074->g_574.wyzzwwzz)).s7) != (0xEBFA346EL < (((safe_mul_func_int16_t_s_s(((!p_1074->g_295[0][1][3]) && p_1074->g_19), p_1074->g_301)) | p_1074->g_242) > p_1074->g_249.s0))) >= FAKE_DIVERGE(p_1074->global_0_offset, get_global_id(0), 10)) != p_1074->g_246.z), p_1074->g_301)), p_34)) || p_35) , (*p_36)), ((VECTOR(int8_t, 4))(0x03L)), ((VECTOR(int8_t, 2))((-7L))), 0x6FL)).even)).z && 0x7FL)))), 11)))) & 0x78F6L), p_1074->g_519.y)))), (*p_37))) , l_577) > p_34) || p_1074->g_494.x), 65535UL, 0x6594L, 0xC6E6L)).xxxzyywxwxwzzxzx)).sa >= p_1074->g_256))) , p_1074->g_578) , p_1074->g_579) < l_289.x) || 0xFD3C82BBEAF15316L)) >= (*p_1074->g_502)) || GROUP_DIVERGE(0, 1)))), 5)) | GROUP_DIVERGE(0, 1))));
        for (p_1074->g_578.f0 = 0; (p_1074->g_578.f0 < 23); p_1074->g_578.f0 = safe_add_func_int32_t_s_s(p_1074->g_578.f0, 6))
        { /* block id: 275 */
            union U1 *l_584 = &p_1074->g_209;
            int32_t *l_585 = (void*)0;
            l_584 = l_583[3];
            l_585 = l_585;
            p_1074->g_196.s2 ^= ((*p_1074->g_258) < (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x20E7BA9C9E58FA19L, 0x240F7E46AA526C5DL)), 0x593732CF50E25938L, 0x16C74FE1DA647F8AL)).y <= (65535UL < ((safe_rshift_func_int16_t_s_s((-9L), 7)) , (((((VECTOR(uint8_t, 16))(p_1074->g_588.xyyyxyyyxyyxxyxy)).se , (&p_1074->g_208 != (void*)0)) , p_34) >= l_589)))));
        }
    }
    else
    { /* block id: 280 */
        int8_t l_590 = 0x34L;
        int32_t *l_591 = &l_291[1][3][6];
        int32_t *l_592 = (void*)0;
        int32_t *l_593 = (void*)0;
        int32_t *l_594 = (void*)0;
        int32_t *l_595 = &l_291[2][1][0];
        int32_t *l_596 = (void*)0;
        int32_t *l_597 = (void*)0;
        int32_t l_598[7][4][3] = {{{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)}},{{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)}},{{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)}},{{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)}},{{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)}},{{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)}},{{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)},{0x2AB8E7DFL,(-1L),(-1L)}}};
        int32_t *l_599 = &l_291[1][6][3];
        int32_t *l_600 = &l_291[0][4][0];
        int32_t *l_601[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t l_602 = 18446744073709551615UL;
        int i, j, k;
        --l_602;
    }
    return p_35;
}


/* ------------------------------------------ */
/* 
 * reads : p_1074->g_194 p_1074->g_207 p_1074->g_19 p_1074->g_242 p_1074->g_246 p_1074->g_247 p_1074->g_248 p_1074->g_249 p_1074->g_196 p_1074->g_256
 * writes: p_1074->g_195 p_1074->g_207 p_1074->g_242 p_1074->g_196 p_1074->g_256
 */
int16_t * func_38(int16_t * p_39, uint32_t  p_40, int16_t  p_41, int32_t  p_42, int16_t * p_43, struct S2 * p_1074)
{ /* block id: 7 */
    int32_t *l_193 = (void*)0;
    int32_t l_203[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    union U1 ***l_210 = &p_1074->g_207;
    uint8_t *l_241 = &p_1074->g_242;
    VECTOR(uint8_t, 8) l_245 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x28L), 0x28L), 0x28L, 255UL, 0x28L);
    VECTOR(uint8_t, 16) l_250 = (VECTOR(uint8_t, 16))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 0x2EL), 0x2EL), 0x2EL, 252UL, 0x2EL, (VECTOR(uint8_t, 2))(252UL, 0x2EL), (VECTOR(uint8_t, 2))(252UL, 0x2EL), 252UL, 0x2EL, 252UL, 0x2EL);
    VECTOR(uint8_t, 4) l_255 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL);
    int i;
    if ((atomic_inc(&p_1074->g_atomic_input[56 * get_linear_group_id() + 42]) == 0))
    { /* block id: 9 */
        uint16_t l_44 = 9UL;
        int32_t l_45 = 8L;
        VECTOR(int32_t, 2) l_46 = (VECTOR(int32_t, 2))(0x121589AFL, (-1L));
        uint8_t l_184 = 0xA2L;
        int8_t l_185 = (-1L);
        uint16_t l_186 = 0xCE48L;
        int8_t l_187 = 0x46L;
        int8_t l_188 = (-1L);
        uint16_t l_189 = 7UL;
        uint32_t l_190 = 0x65498303L;
        int32_t l_191 = (-1L);
        int32_t l_192[2];
        int i;
        for (i = 0; i < 2; i++)
            l_192[i] = 0x04E66C39L;
        l_45 |= l_44;
        if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_46.xy)).yxxyyyxyyxxxxxxy)).sa4)).lo)
        { /* block id: 11 */
            VECTOR(int32_t, 2) l_47 = (VECTOR(int32_t, 2))((-2L), 0x25FC0266L);
            int16_t l_67 = (-5L);
            VECTOR(int32_t, 8) l_68 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), (-2L)), (-2L)), (-2L), (-9L), (-2L));
            int64_t l_69 = 1L;
            VECTOR(int8_t, 4) l_70 = (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 1L), 1L);
            union U1 l_72[1][8] = {{{0x4071L},{0x4071L},{0x4071L},{0x4071L},{0x4071L},{0x4071L},{0x4071L},{0x4071L}}};
            union U1 *l_71 = &l_72[0][0];
            union U1 *l_73 = &l_72[0][0];
            union U1 *l_74 = &l_72[0][0];
            int i, j;
            if (l_47.y)
            { /* block id: 12 */
                int32_t l_48 = 0L;
                int64_t l_53 = 0x172882C65315FA72L;
                uint8_t l_54 = 249UL;
                for (l_48 = 0; (l_48 == 2); l_48 = safe_add_func_int64_t_s_s(l_48, 7))
                { /* block id: 15 */
                    uint32_t l_51 = 0xAF7CC73EL;
                    uint32_t l_52[8][5][5] = {{{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL}},{{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL}},{{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL}},{{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL}},{{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL}},{{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL}},{{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL}},{{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL},{0x83781CDFL,0xA6A8E49EL,0x47CAFDF1L,0xFFF9752EL,4294967288UL}}};
                    int i, j, k;
                    l_45 ^= (l_51 , l_52[3][2][0]);
                }
                l_54--;
            }
            else
            { /* block id: 19 */
                int16_t l_57 = 0x7852L;
                uint16_t l_58 = 0x6C48L;
                int32_t l_62 = 0L;
                int32_t *l_61 = &l_62;
                int32_t *l_63 = (void*)0;
                uint16_t l_64 = 65532UL;
                ++l_58;
                l_63 = l_61;
                ++l_64;
            }
            l_45 = ((l_67 = 0x71199D328171C63CL) , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_68.s64676722)).lo)).z);
            l_74 = (l_73 = ((l_69 , ((VECTOR(int8_t, 4))(l_70.wxxz)).x) , l_71));
        }
        else
        { /* block id: 28 */
            int32_t l_75[3][4] = {{0x7267125BL,0x7267125BL,0x7267125BL,0x7267125BL},{0x7267125BL,0x7267125BL,0x7267125BL,0x7267125BL},{0x7267125BL,0x7267125BL,0x7267125BL,0x7267125BL}};
            uint16_t l_78 = 0xF38CL;
            int8_t l_79[10][6] = {{0x73L,0x04L,0x56L,0x04L,0x73L,0x73L},{0x73L,0x04L,0x56L,0x04L,0x73L,0x73L},{0x73L,0x04L,0x56L,0x04L,0x73L,0x73L},{0x73L,0x04L,0x56L,0x04L,0x73L,0x73L},{0x73L,0x04L,0x56L,0x04L,0x73L,0x73L},{0x73L,0x04L,0x56L,0x04L,0x73L,0x73L},{0x73L,0x04L,0x56L,0x04L,0x73L,0x73L},{0x73L,0x04L,0x56L,0x04L,0x73L,0x73L},{0x73L,0x04L,0x56L,0x04L,0x73L,0x73L},{0x73L,0x04L,0x56L,0x04L,0x73L,0x73L}};
            uint32_t l_80 = 0UL;
            VECTOR(int32_t, 2) l_81 = (VECTOR(int32_t, 2))(1L, 0x66A82D78L);
            VECTOR(int32_t, 8) l_82 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 7L), 7L), 7L, 1L, 7L);
            uint16_t l_83[7] = {0x6265L,7UL,0x6265L,0x6265L,7UL,0x6265L,0x6265L};
            VECTOR(int32_t, 8) l_84 = (VECTOR(int32_t, 8))(0x37234FC0L, (VECTOR(int32_t, 4))(0x37234FC0L, (VECTOR(int32_t, 2))(0x37234FC0L, 0x68E649E9L), 0x68E649E9L), 0x68E649E9L, 0x37234FC0L, 0x68E649E9L);
            VECTOR(int32_t, 2) l_85 = (VECTOR(int32_t, 2))(0x1EF1A95AL, 0x7DDA0CFDL);
            uint8_t l_86 = 0x2EL;
            VECTOR(int32_t, 16) l_87 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x51A43B2DL), 0x51A43B2DL), 0x51A43B2DL, (-1L), 0x51A43B2DL, (VECTOR(int32_t, 2))((-1L), 0x51A43B2DL), (VECTOR(int32_t, 2))((-1L), 0x51A43B2DL), (-1L), 0x51A43B2DL, (-1L), 0x51A43B2DL);
            int32_t l_88 = 0x3785E6FAL;
            uint32_t l_89[8];
            int64_t l_90 = 0x5D6CB7F01E86021BL;
            uint32_t l_91 = 0x5059AB73L;
            VECTOR(int32_t, 4) l_92 = (VECTOR(int32_t, 4))(0x2B454EC5L, (VECTOR(int32_t, 2))(0x2B454EC5L, 4L), 4L);
            int8_t l_93 = (-2L);
            VECTOR(int16_t, 8) l_94 = (VECTOR(int16_t, 8))(0x3408L, (VECTOR(int16_t, 4))(0x3408L, (VECTOR(int16_t, 2))(0x3408L, 0L), 0L), 0L, 0x3408L, 0L);
            union U1 l_95[10] = {{0x5740L},{0x5740L},{0x5740L},{0x5740L},{0x5740L},{0x5740L},{0x5740L},{0x5740L},{0x5740L},{0x5740L}};
            int16_t l_96 = 0x166AL;
            int32_t l_97[7][1][9] = {{{(-1L),4L,(-1L),(-1L),4L,(-1L),(-1L),4L,(-1L)}},{{(-1L),4L,(-1L),(-1L),4L,(-1L),(-1L),4L,(-1L)}},{{(-1L),4L,(-1L),(-1L),4L,(-1L),(-1L),4L,(-1L)}},{{(-1L),4L,(-1L),(-1L),4L,(-1L),(-1L),4L,(-1L)}},{{(-1L),4L,(-1L),(-1L),4L,(-1L),(-1L),4L,(-1L)}},{{(-1L),4L,(-1L),(-1L),4L,(-1L),(-1L),4L,(-1L)}},{{(-1L),4L,(-1L),(-1L),4L,(-1L),(-1L),4L,(-1L)}}};
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_89[i] = 0x894E1783L;
            for (l_75[0][0] = 0; (l_75[0][0] >= 7); l_75[0][0] = safe_add_func_uint32_t_u_u(l_75[0][0], 4))
            { /* block id: 31 */
                l_46.x = 0x276403ECL;
            }
            l_46.y &= l_78;
            if (((l_80 = l_79[8][5]) , ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(1L, 0x566C2530L)))).yxxx, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(l_81.yxyxyxyx)), ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_82.s26)).xyyyyyyyyyyyxyxx, ((VECTOR(int32_t, 8))(0x0EE50A8EL, 0L, l_83[1], ((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(l_84.s23)), 0x769F9328L)), (-5L))).s0555047606124726))).hi))).lo))).xzxwxxwxxxwxzywy)).s42, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(0L, (-6L))).xyyx, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_85.xyyxxxyy)))).s11))).yyxx))).zwwzwzxx)).s45)).yyyx, (int32_t)l_86))).xxzwzxwz)).s27, ((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_87.se0ecac02)))).s5630316644267447, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((l_89[1] = l_88), (l_91 = l_90), 0x2049L, 1L)).wzwyyxzz)).even, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(4UL, 0xA9C8L, 1UL, 0xE142L)).lo)).xxxy))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_92.wx)).xxxy, ((VECTOR(int32_t, 8))(l_93, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_94.s27)).xxyxyyyy)).s61, ((VECTOR(uint16_t, 8))((l_95[7] , (l_44 = ((VECTOR(uint16_t, 4))(((l_96 , l_97[5][0][1]) , 0x981AL), ((VECTOR(uint16_t, 2))(7UL)), 5UL)).z)), 0x3954L, 0x00CDL, 0UL, ((VECTOR(uint16_t, 2))(0x9726L)), 1UL, 0xA529L)).s02))), ((VECTOR(int32_t, 4))((-6L))), (-1L))).odd))))).y, ((VECTOR(int32_t, 2))(0x24E12155L)), 0x4656C0C5L)).s6026315553066520))).sb3))), ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 4))(0x5C62CBA5L)))).s7065742461327043, ((VECTOR(int32_t, 16))(0L))))).odd, ((VECTOR(int32_t, 8))(9L))))), ((VECTOR(int32_t, 8))(0L))))).s3))
            { /* block id: 39 */
                int32_t l_98 = 1L;
                int32_t l_110 = 0x3162A55EL;
                int64_t l_111 = 0x5573AC2B988980C3L;
                uint64_t l_112 = 1UL;
                uint64_t l_113 = 0xD32CE05B3D222340L;
                for (l_98 = (-19); (l_98 >= 27); l_98 = safe_add_func_uint64_t_u_u(l_98, 6))
                { /* block id: 42 */
                    union U1 l_103 = {6L};/* VOLATILE GLOBAL l_103 */
                    union U1 *l_102 = &l_103;
                    union U1 **l_101 = &l_102;
                    union U1 **l_104 = &l_102;
                    union U1 **l_105 = (void*)0;
                    int32_t l_106 = 0x589ECE45L;
                    uint64_t l_107 = 0x4F5D4AB6F82621F0L;
                    l_105 = (l_104 = l_101);
                    l_107--;
                }
                l_85.y &= ((l_110 , l_111) , (l_82.s2 &= l_112));
                l_82.s4 |= (l_92.w = l_113);
            }
            else
            { /* block id: 51 */
                VECTOR(int32_t, 2) l_114 = (VECTOR(int32_t, 2))(7L, 0x148A6797L);
                union U0 l_115[1] = {{0x33L}};
                int32_t l_116 = 0x72B24498L;
                int32_t l_117[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_117[i] = (-3L);
                if (((VECTOR(int32_t, 4))(0x035FF7BAL, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_114.yxxy)).hi)).yyyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x0DE757AFL, ((l_115[0] , l_116) , (l_117[1] , 0x08701CCAL)), (-1L), 0x36633CC6L)).zyyzyzyy)).lo))).x, 0x363A23D7L, 0x5A6B924BL)).x)
                { /* block id: 52 */
                    int32_t l_118 = (-4L);
                    uint64_t l_122 = 0x8E435D7CC8F446CBL;
                    int16_t l_123 = 1L;
                    int16_t l_124 = 0L;
                    uint16_t l_125 = 0x0DA6L;
                    for (l_118 = 0; (l_118 >= (-14)); l_118--)
                    { /* block id: 55 */
                        int32_t l_121 = 4L;
                        l_46.y = l_121;
                    }
                    l_123 ^= l_122;
                    l_125--;
                }
                else
                { /* block id: 60 */
                    int32_t l_128 = 0x299D279CL;
                    uint32_t l_144 = 1UL;
                    VECTOR(int16_t, 16) l_181 = (VECTOR(int16_t, 16))(0x3C9AL, (VECTOR(int16_t, 4))(0x3C9AL, (VECTOR(int16_t, 2))(0x3C9AL, (-9L)), (-9L)), (-9L), 0x3C9AL, (-9L), (VECTOR(int16_t, 2))(0x3C9AL, (-9L)), (VECTOR(int16_t, 2))(0x3C9AL, (-9L)), 0x3C9AL, (-9L), 0x3C9AL, (-9L));
                    VECTOR(int16_t, 16) l_182 = (VECTOR(int16_t, 16))(0x3DCEL, (VECTOR(int16_t, 4))(0x3DCEL, (VECTOR(int16_t, 2))(0x3DCEL, 0x1BB0L), 0x1BB0L), 0x1BB0L, 0x3DCEL, 0x1BB0L, (VECTOR(int16_t, 2))(0x3DCEL, 0x1BB0L), (VECTOR(int16_t, 2))(0x3DCEL, 0x1BB0L), 0x3DCEL, 0x1BB0L, 0x3DCEL, 0x1BB0L);
                    int16_t l_183 = (-1L);
                    int i;
                    for (l_128 = (-17); (l_128 < 5); l_128++)
                    { /* block id: 63 */
                        int64_t l_131 = 1L;
                        int8_t l_132 = 6L;
                        int32_t l_133 = 0x210D5BDEL;
                        uint64_t l_134 = 0xD4344FC8F34B38B2L;
                        ++l_134;
                        l_97[0][0][8] = 6L;
                    }
                    for (l_128 = 0; (l_128 >= 18); l_128++)
                    { /* block id: 69 */
                        uint32_t l_139 = 1UL;
                        union U0 l_140 = {0x41L};/* VOLATILE GLOBAL l_140 */
                        int32_t l_142 = 0x7DE9DF1BL;
                        int32_t *l_141 = &l_142;
                        int32_t *l_143 = &l_142;
                        l_143 = ((l_139 , l_140) , l_141);
                    }
                    if (l_144)
                    { /* block id: 72 */
                        VECTOR(int32_t, 16) l_145 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 2L), 2L), 2L, 0L, 2L, (VECTOR(int32_t, 2))(0L, 2L), (VECTOR(int32_t, 2))(0L, 2L), 0L, 2L, 0L, 2L);
                        VECTOR(int32_t, 8) l_146 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-6L)), (-6L)), (-6L), 1L, (-6L));
                        VECTOR(int32_t, 16) l_147 = (VECTOR(int32_t, 16))(0x115E00D4L, (VECTOR(int32_t, 4))(0x115E00D4L, (VECTOR(int32_t, 2))(0x115E00D4L, 8L), 8L), 8L, 0x115E00D4L, 8L, (VECTOR(int32_t, 2))(0x115E00D4L, 8L), (VECTOR(int32_t, 2))(0x115E00D4L, 8L), 0x115E00D4L, 8L, 0x115E00D4L, 8L);
                        VECTOR(int32_t, 16) l_148 = (VECTOR(int32_t, 16))(0x3315883FL, (VECTOR(int32_t, 4))(0x3315883FL, (VECTOR(int32_t, 2))(0x3315883FL, 0x3F38E196L), 0x3F38E196L), 0x3F38E196L, 0x3315883FL, 0x3F38E196L, (VECTOR(int32_t, 2))(0x3315883FL, 0x3F38E196L), (VECTOR(int32_t, 2))(0x3315883FL, 0x3F38E196L), 0x3315883FL, 0x3F38E196L, 0x3315883FL, 0x3F38E196L);
                        VECTOR(int32_t, 4) l_149 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0F996A62L), 0x0F996A62L);
                        VECTOR(int32_t, 2) l_150 = (VECTOR(int32_t, 2))(0x3FF233E6L, 0x44B7FDB3L);
                        VECTOR(int32_t, 16) l_151 = (VECTOR(int32_t, 16))(0x6024C018L, (VECTOR(int32_t, 4))(0x6024C018L, (VECTOR(int32_t, 2))(0x6024C018L, 1L), 1L), 1L, 0x6024C018L, 1L, (VECTOR(int32_t, 2))(0x6024C018L, 1L), (VECTOR(int32_t, 2))(0x6024C018L, 1L), 0x6024C018L, 1L, 0x6024C018L, 1L);
                        VECTOR(int32_t, 16) l_152 = (VECTOR(int32_t, 16))(0x45A1FB4FL, (VECTOR(int32_t, 4))(0x45A1FB4FL, (VECTOR(int32_t, 2))(0x45A1FB4FL, 0L), 0L), 0L, 0x45A1FB4FL, 0L, (VECTOR(int32_t, 2))(0x45A1FB4FL, 0L), (VECTOR(int32_t, 2))(0x45A1FB4FL, 0L), 0x45A1FB4FL, 0L, 0x45A1FB4FL, 0L);
                        VECTOR(int32_t, 8) l_153 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x38E9E02AL), 0x38E9E02AL), 0x38E9E02AL, (-1L), 0x38E9E02AL);
                        VECTOR(int32_t, 2) l_154 = (VECTOR(int32_t, 2))(0L, 0L);
                        VECTOR(uint32_t, 8) l_155 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x4A6CA719L), 0x4A6CA719L), 0x4A6CA719L, 1UL, 0x4A6CA719L);
                        VECTOR(int32_t, 8) l_156 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L));
                        VECTOR(uint64_t, 16) l_157 = (VECTOR(uint64_t, 16))(0xD0AC63A1787847B8L, (VECTOR(uint64_t, 4))(0xD0AC63A1787847B8L, (VECTOR(uint64_t, 2))(0xD0AC63A1787847B8L, 0x4EB74D902FE5E662L), 0x4EB74D902FE5E662L), 0x4EB74D902FE5E662L, 0xD0AC63A1787847B8L, 0x4EB74D902FE5E662L, (VECTOR(uint64_t, 2))(0xD0AC63A1787847B8L, 0x4EB74D902FE5E662L), (VECTOR(uint64_t, 2))(0xD0AC63A1787847B8L, 0x4EB74D902FE5E662L), 0xD0AC63A1787847B8L, 0x4EB74D902FE5E662L, 0xD0AC63A1787847B8L, 0x4EB74D902FE5E662L);
                        VECTOR(uint64_t, 4) l_158 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x9073D22E32B8073FL), 0x9073D22E32B8073FL);
                        int8_t l_159 = 0x14L;
                        union U0 l_160 = {0x38L};/* VOLATILE GLOBAL l_160 */
                        VECTOR(int32_t, 8) l_161 = (VECTOR(int32_t, 8))(0x6A985D86L, (VECTOR(int32_t, 4))(0x6A985D86L, (VECTOR(int32_t, 2))(0x6A985D86L, 1L), 1L), 1L, 0x6A985D86L, 1L);
                        VECTOR(int32_t, 16) l_162 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x7D8273ADL), 0x7D8273ADL), 0x7D8273ADL, 5L, 0x7D8273ADL, (VECTOR(int32_t, 2))(5L, 0x7D8273ADL), (VECTOR(int32_t, 2))(5L, 0x7D8273ADL), 5L, 0x7D8273ADL, 5L, 0x7D8273ADL);
                        int32_t l_163 = (-9L);
                        VECTOR(int32_t, 8) l_164 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x6E5883D1L), 0x6E5883D1L), 0x6E5883D1L, 1L, 0x6E5883D1L);
                        int8_t l_165 = 0L;
                        uint32_t l_166 = 0x61F2928FL;
                        uint64_t l_167[8] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                        uint32_t l_168[5][4][10] = {{{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL},{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL},{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL},{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL}},{{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL},{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL},{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL},{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL}},{{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL},{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL},{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL},{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL}},{{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL},{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL},{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL},{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL}},{{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL},{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL},{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL},{0x334A1C84L,0x1D34AEDAL,0UL,0x334A1C84L,4294967295UL,4294967295UL,4294967295UL,4294967295UL,0x334A1C84L,0UL}}};
                        int32_t l_169 = 0L;
                        uint32_t l_170 = 5UL;
                        int32_t l_171[8];
                        int32_t l_172 = 0x0F0FC9D2L;
                        uint8_t l_173 = 255UL;
                        int16_t l_174 = 0L;
                        int64_t l_175 = 0x3B8899DCF5AF989AL;
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_171[i] = (-1L);
                        l_97[2][0][2] |= ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(l_145.s66)), ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(l_146.s7212)).yzzyxzzwyzzxxxzz))).hi, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((l_87.sf = 1L), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(l_147.sda785fe2e0279960)).sc7, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_148.sa490)), ((l_86 = ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(249UL, 0xE8L)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(GROUP_DIVERGE(1, 1), 0x36L, 0x66L, 0x70L)).zxyzwxwxywzyyyzx)).sa3))).lo) , (l_84.s7 = ((VECTOR(int32_t, 8))(l_149.xyxzzzwz)).s7)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 0x0251A3F5L)), 0L, 0x64A769E6L)))).w, (-8L), 1L)))).s42)).yxyyxyyyxxxxxyxx)).s47))).xxxxyxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x70E512B8L, 0x32EB66CFL)), (-1L), 0L)))).wywwwwww, ((VECTOR(int32_t, 8))(l_150.yyyxxyyx))))).s23, ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))(l_151.s36308b91)).lo, (int32_t)(l_92.z = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_152.sd1ac59717f0bbe91)).even)))).s17, ((VECTOR(int32_t, 16))(l_153.s2303260545525506)).s32, ((VECTOR(int32_t, 2))(l_154.xy))))))).hi), (int32_t)(((VECTOR(int64_t, 2))(0x53AE5F8D8BDE85A3L, 7L)).odd , (l_155.s0 , (-1L)))))).yyxywxyzxzzzwxyz, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(1L, (-3L), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_156.s36536267)).s5024173011214640)).s8, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 16))(l_157.s131c22ba50a0fa09)).s4400, ((VECTOR(uint64_t, 4))(l_158.wyzz))))).hi)), 18446744073709551615UL, 0x02A97C014DE8190FL)).w , ((l_159 = 0x53969774L) , l_160)) , (l_85.y |= ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(0x01F6L, 0x3A29L, 0x5AEAL, 2L)).ywwwwyxxyyxyxxyw)).s70, ((VECTOR(uint16_t, 2))(65530UL, 0UL))))).yxyy)).wxxywwxw)).s30, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_161.s57)).xxxxxyxy)).s73))).lo)), ((VECTOR(int32_t, 2))(l_162.s26)), (l_163 = (-7L)), ((VECTOR(int32_t, 4))(l_164.s0007)))).s52, ((VECTOR(int32_t, 16))((-2L), ((VECTOR(int32_t, 8))(0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-7L), (-2L))))), l_165, l_166, l_167[1], 1L, 0L)), ((VECTOR(int32_t, 2))(0x2CA4CA27L)), l_168[1][0][9], 0x0CA94554L, 0x260EC3E4L, 1L, 0x4DB8084EL)).sc3, ((VECTOR(int32_t, 2))(1L))))), 0x22E7C7CCL, 0x496D48F9L, 1L, 0x156A4831L, 0x6F01F0A4L)).s0564357355533477, ((VECTOR(int32_t, 16))(0L))))).sff29, ((VECTOR(int32_t, 4))(1L))))), (-1L), 0L)).s05, ((VECTOR(int32_t, 2))(0x2C87C860L))))).xyxxxyyxxxxxyyxx, ((VECTOR(int32_t, 16))(1L))))).s6f, ((VECTOR(int32_t, 2))((-1L)))))), l_169, 0x2EC1CF44L, 0x0E0B1545L, 0x7B89C854L, 0x0C1426E5L)).s26)).xxxxyyyy))).s76, ((VECTOR(int32_t, 2))((-1L)))))), 0x2A0988E5L, ((VECTOR(int32_t, 8))(0x1C1BC39EL)), 1L, 0x4084801CL, 1L, 0L, (-1L))).hi, ((VECTOR(int32_t, 8))(0x060EDE61L))))).s1;
                        l_174 = (l_149.z = (((l_163 = (l_169 ^= l_170)) , ((l_172 = (l_171[6] , 0L)) , l_173)) , 0L));
                        l_97[5][0][1] = (l_114.y ^= ((l_166 = l_175) , 9L));
                    }
                    else
                    { /* block id: 89 */
                        uint64_t l_176 = 0x447EB15AC9E3CE13L;
                        int32_t l_180[4];
                        int32_t *l_179 = &l_180[2];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_180[i] = (-7L);
                        --l_176;
                        l_179 = (void*)0;
                    }
                    l_114.x &= (((VECTOR(int16_t, 16))(1L, ((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 2))(l_181.sb8)).yxyxxxxy, ((VECTOR(int16_t, 2))(1L, 2L)).xxxxxyyy))), ((VECTOR(int16_t, 4))(l_182.s6d71)), 5L, 0x242AL, 0x29B1L)).s4 , l_183);
                }
            }
        }
        l_185 &= l_184;
        l_192[1] &= (l_191 |= (l_190 = ((l_187 = l_186) , (l_189 = (l_188 = 0x06843F4BL)))));
        unsigned int result = 0;
        result += l_44;
        result += l_45;
        result += l_46.y;
        result += l_46.x;
        result += l_184;
        result += l_185;
        result += l_186;
        result += l_187;
        result += l_188;
        result += l_189;
        result += l_190;
        result += l_191;
        int l_192_i0;
        for (l_192_i0 = 0; l_192_i0 < 2; l_192_i0++) {
            result += l_192[l_192_i0];
        }
        atomic_add(&p_1074->g_special_values[56 * get_linear_group_id() + 42], result);
    }
    else
    { /* block id: 104 */
        (1 + 1);
    }
    (*p_1074->g_194) = l_193;
    for (p_40 = (-18); (p_40 != 3); p_40 = safe_add_func_uint8_t_u_u(p_40, 7))
    { /* block id: 110 */
        VECTOR(int32_t, 2) l_199 = (VECTOR(int32_t, 2))((-9L), 0x11D43E14L);
        int32_t *l_200 = (void*)0;
        int32_t *l_201 = (void*)0;
        int32_t *l_202[7][8][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        l_203[2] = ((VECTOR(int32_t, 16))(l_199.xyxxxxyyxyyxyyyy)).s8;
    }
    p_1074->g_256 &= (((func_204(((*l_210) = p_1074->g_207), p_42, p_1074) < (safe_rshift_func_int8_t_s_u(p_1074->g_19, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 8))(0x39L, (--(*l_241)), 0UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 4))(l_245.s7760)).yxwwyzwz, ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(p_1074->g_246.yx)).xyyxxxxxyyyyyxyx)).s0188)).yzxyxzxz, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 2))(p_1074->g_247.xy)).yyxxyyyy, ((VECTOR(uint8_t, 4))(p_1074->g_248.s3472)).wzwzyxyy))))), ((VECTOR(uint8_t, 8))(p_1074->g_249.s64040053))))), ((VECTOR(uint8_t, 8))(l_250.s75757182)))).s92)).yxxyxxxxyyyxyxxx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0UL, 255UL)), ((safe_add_func_uint32_t_u_u((FAKE_DIVERGE(p_1074->local_2_offset, get_local_id(2), 10) == ((safe_mod_func_int32_t_s_s(4L, (p_1074->g_196.s1 ^= (p_42 ^ ((VECTOR(uint8_t, 8))(l_255.wwyzwyzw)).s0)))) , ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(0x1CL, ((l_250.s9 & (p_1074->g_246.z | ((5UL < p_40) && 0x1C50L))) , p_42), 0x1CL, ((VECTOR(int8_t, 2))(0L)), 0L, (-1L), (-10L))).s37, ((VECTOR(int8_t, 2))((-7L)))))).even)), l_250.sf)) || p_42), ((VECTOR(uint8_t, 2))(1UL)), 0xD8L, 252UL, 0x50L)))).s0053643273424433, ((VECTOR(uint8_t, 16))(255UL))))))).odd)).s26)).xyyyxxxy))).s74, ((VECTOR(uint8_t, 2))(1UL)), ((VECTOR(uint8_t, 2))(0x8AL))))).yyyxxyxx))).s11, ((VECTOR(uint8_t, 2))(0UL))))), ((VECTOR(uint8_t, 2))(255UL))))), ((VECTOR(uint8_t, 2))(0x2DL)), ((VECTOR(uint8_t, 2))(0x7FL))))), ((VECTOR(uint8_t, 2))(5UL)), 1UL, p_1074->g_249.s6, 255UL, 0xF4L)).s54)), 1UL, 0x31L, 0x3BL)).s5643221622205770, ((VECTOR(uint8_t, 16))(252UL))))).hi)).s5))) < p_40) ^ p_40);
    return &p_1074->g_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_1074->g_19
 * writes:
 */
uint16_t  func_204(union U1 ** p_205, int32_t  p_206, struct S2 * p_1074)
{ /* block id: 114 */
    if ((atomic_inc(&p_1074->l_atomic_input[22]) == 6))
    { /* block id: 116 */
        int32_t l_211 = (-2L);
        union U1 l_237 = {0x07AAL};/* VOLATILE GLOBAL l_237 */
        union U1 *l_236[9][6] = {{&l_237,&l_237,(void*)0,(void*)0,&l_237,(void*)0},{&l_237,&l_237,(void*)0,(void*)0,&l_237,(void*)0},{&l_237,&l_237,(void*)0,(void*)0,&l_237,(void*)0},{&l_237,&l_237,(void*)0,(void*)0,&l_237,(void*)0},{&l_237,&l_237,(void*)0,(void*)0,&l_237,(void*)0},{&l_237,&l_237,(void*)0,(void*)0,&l_237,(void*)0},{&l_237,&l_237,(void*)0,(void*)0,&l_237,(void*)0},{&l_237,&l_237,(void*)0,(void*)0,&l_237,(void*)0},{&l_237,&l_237,(void*)0,(void*)0,&l_237,(void*)0}};
        union U1 *l_238[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_238[i] = &l_237;
        for (l_211 = (-9); (l_211 != (-11)); l_211 = safe_sub_func_int32_t_s_s(l_211, 2))
        { /* block id: 119 */
            uint32_t l_214 = 5UL;
            uint32_t l_215 = 0x686A80E9L;
            l_215 ^= l_214;
        }
        for (l_211 = (-6); (l_211 >= 19); l_211 = safe_add_func_uint64_t_u_u(l_211, 1))
        { /* block id: 124 */
            int16_t l_218 = 0x2F4FL;
            VECTOR(uint64_t, 16) l_219 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0xF6BB7E7533F8854DL), 0xF6BB7E7533F8854DL), 0xF6BB7E7533F8854DL, 1UL, 0xF6BB7E7533F8854DL, (VECTOR(uint64_t, 2))(1UL, 0xF6BB7E7533F8854DL), (VECTOR(uint64_t, 2))(1UL, 0xF6BB7E7533F8854DL), 1UL, 0xF6BB7E7533F8854DL, 1UL, 0xF6BB7E7533F8854DL);
            VECTOR(int32_t, 8) l_220 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x3BC024C7L), 0x3BC024C7L), 0x3BC024C7L, (-5L), 0x3BC024C7L);
            VECTOR(int32_t, 4) l_221 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x7ADA85ACL), 0x7ADA85ACL);
            union U0 l_222[1][2][10] = {{{{0x61L},{8L},{7L},{8L},{0x61L},{0x61L},{8L},{7L},{8L},{0x61L}},{{0x61L},{8L},{7L},{8L},{0x61L},{0x61L},{8L},{7L},{8L},{0x61L}}}};
            int32_t l_223 = 2L;
            VECTOR(int32_t, 8) l_224 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x158F17F7L), 0x158F17F7L), 0x158F17F7L, 1L, 0x158F17F7L);
            VECTOR(int32_t, 4) l_225 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 9L), 9L);
            uint16_t l_226 = 65526UL;
            VECTOR(int32_t, 8) l_227 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
            VECTOR(int16_t, 2) l_228 = (VECTOR(int16_t, 2))(0x4527L, 6L);
            VECTOR(int32_t, 2) l_229 = (VECTOR(int32_t, 2))(0L, (-1L));
            VECTOR(int32_t, 2) l_230 = (VECTOR(int32_t, 2))((-8L), 0x03910402L);
            VECTOR(uint32_t, 8) l_231 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL), 4294967295UL, 1UL, 4294967295UL);
            VECTOR(uint32_t, 8) l_232 = (VECTOR(uint32_t, 8))(0xD11C4BEFL, (VECTOR(uint32_t, 4))(0xD11C4BEFL, (VECTOR(uint32_t, 2))(0xD11C4BEFL, 0xB989AA41L), 0xB989AA41L), 0xB989AA41L, 0xD11C4BEFL, 0xB989AA41L);
            uint8_t l_233 = 0x41L;
            int64_t l_234 = (-6L);
            uint64_t l_235[8][8] = {{18446744073709551611UL,1UL,18446744073709551615UL,18446744073709551611UL,0x4905E8A5A11C1BFBL,18446744073709551615UL,18446744073709551615UL,0x4905E8A5A11C1BFBL},{18446744073709551611UL,1UL,18446744073709551615UL,18446744073709551611UL,0x4905E8A5A11C1BFBL,18446744073709551615UL,18446744073709551615UL,0x4905E8A5A11C1BFBL},{18446744073709551611UL,1UL,18446744073709551615UL,18446744073709551611UL,0x4905E8A5A11C1BFBL,18446744073709551615UL,18446744073709551615UL,0x4905E8A5A11C1BFBL},{18446744073709551611UL,1UL,18446744073709551615UL,18446744073709551611UL,0x4905E8A5A11C1BFBL,18446744073709551615UL,18446744073709551615UL,0x4905E8A5A11C1BFBL},{18446744073709551611UL,1UL,18446744073709551615UL,18446744073709551611UL,0x4905E8A5A11C1BFBL,18446744073709551615UL,18446744073709551615UL,0x4905E8A5A11C1BFBL},{18446744073709551611UL,1UL,18446744073709551615UL,18446744073709551611UL,0x4905E8A5A11C1BFBL,18446744073709551615UL,18446744073709551615UL,0x4905E8A5A11C1BFBL},{18446744073709551611UL,1UL,18446744073709551615UL,18446744073709551611UL,0x4905E8A5A11C1BFBL,18446744073709551615UL,18446744073709551615UL,0x4905E8A5A11C1BFBL},{18446744073709551611UL,1UL,18446744073709551615UL,18446744073709551611UL,0x4905E8A5A11C1BFBL,18446744073709551615UL,18446744073709551615UL,0x4905E8A5A11C1BFBL}};
            int i, j, k;
            l_235[1][7] = ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((l_218 = 0L) , (l_219.s6 = 0x0F8FDFC9L)), ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(l_220.s51)).yxxy, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(l_221.wyxz)).xxzzxzwx, ((VECTOR(int32_t, 16))((l_222[0][0][0] , l_223), ((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 16))(l_224.s7604012467150107)).sad, ((VECTOR(int32_t, 2))(l_225.wz))))).xyyxxxxx)))))).hi, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(8L, 0x3B1C78F1L, 0x6BF4DEF9L, (-1L), 0x521942E4L, ((VECTOR(int32_t, 2))((-4L), (-1L))), 0x5E849379L)).odd))))).xwwyzxxw, ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(0x74AB6A06L, l_226, 7L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(rotate(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, 1L)).xyyyyxyxyxxyyxxy)).sfc, ((VECTOR(int32_t, 4))(l_227.s0170)).even))).xyyyyyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(l_228.yy)).xxxxxyyx, ((VECTOR(uint16_t, 2))(65528UL, 0UL)).xxxyxxyy))).s16, ((VECTOR(int32_t, 8))(l_229.xxxyyxxx)).s62, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_230.yx)), 0x2ED9C82AL, 0x49FA6857L)).odd))).yxxxyxxyyxyxyxyy)).lo))).s30, (int32_t)((((VECTOR(uint32_t, 16))(GROUP_DIVERGE(2, 1), ((VECTOR(uint32_t, 8))(l_231.s75377334)), GROUP_DIVERGE(2, 1), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_232.s6315)))), 0x01596AA2L, 0x1F57541DL)).s0 , 18446744073709551615UL) , l_233)))), 4L, 0x1BAF2872L)), 0x38B1BC0AL)).s3012571065552662, ((VECTOR(int32_t, 16))(1L)), ((VECTOR(int32_t, 16))(0x77CB839CL))))).even))), ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 4))(0x04626397L)), 0L)).lo))).odd))), ((VECTOR(int32_t, 2))(0L)), l_234, ((VECTOR(int32_t, 8))(0x333828E4L)))))).s1555, ((VECTOR(int32_t, 4))(0x750ACF49L))))).y;
        }
        l_238[0] = l_236[8][0];
        unsigned int result = 0;
        result += l_211;
        result += l_237.f0;
        result += l_237.f1;
        result += l_237.f2;
        result += l_237.f3;
        atomic_add(&p_1074->l_special_values[22], result);
    }
    else
    { /* block id: 130 */
        (1 + 1);
    }
    return p_1074->g_19;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[56];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 56; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[56];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 56; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[57];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 57; i++)
            l_comm_values[i] = 1;
    struct S2 c_1075;
    struct S2* p_1074 = &c_1075;
    struct S2 c_1076 = {
        0x0CAFL, // p_1074->g_13
        0xE4L, // p_1074->g_19
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L), // p_1074->g_196
        (void*)0, // p_1074->g_195
        &p_1074->g_195, // p_1074->g_194
        {1L}, // p_1074->g_209
        &p_1074->g_209, // p_1074->g_208
        &p_1074->g_208, // p_1074->g_207
        2UL, // p_1074->g_242
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xFFL), 0xFFL), // p_1074->g_246
        (VECTOR(uint8_t, 2))(255UL, 255UL), // p_1074->g_247
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xBAL), 0xBAL), 0xBAL, 0UL, 0xBAL), // p_1074->g_248
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 1UL), 1UL), 1UL, 255UL, 1UL), // p_1074->g_249
        0x0A948151L, // p_1074->g_256
        6L, // p_1074->g_259
        &p_1074->g_259, // p_1074->g_258
        0x29L, // p_1074->g_293
        {{{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L}},{{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L}},{{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L}},{{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L},{0x43176BF1L,0x43176BF1L,9UL,0x3F1F6C32L}}}, // p_1074->g_295
        0xC46D36BFL, // p_1074->g_298
        (-9L), // p_1074->g_301
        {{{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}}},{{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}}},{{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}}},{{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}}},{{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}}},{{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}}},{{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}}},{{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}}},{{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}}},{{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}},{{0x37L},{0x37L},{-1L},{0x35L}}}}, // p_1074->g_305
        (VECTOR(uint16_t, 8))(3UL, (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 9UL), 9UL), 9UL, 3UL, 9UL), // p_1074->g_319
        (VECTOR(uint16_t, 2))(0UL, 65535UL), // p_1074->g_320
        (VECTOR(uint32_t, 16))(0x00B7FC9FL, (VECTOR(uint32_t, 4))(0x00B7FC9FL, (VECTOR(uint32_t, 2))(0x00B7FC9FL, 1UL), 1UL), 1UL, 0x00B7FC9FL, 1UL, (VECTOR(uint32_t, 2))(0x00B7FC9FL, 1UL), (VECTOR(uint32_t, 2))(0x00B7FC9FL, 1UL), 0x00B7FC9FL, 1UL, 0x00B7FC9FL, 1UL), // p_1074->g_331
        (void*)0, // p_1074->g_346
        (-6L), // p_1074->g_391
        (VECTOR(int16_t, 2))(0x2498L, (-4L)), // p_1074->g_407
        (VECTOR(uint8_t, 4))(0x9BL, (VECTOR(uint8_t, 2))(0x9BL, 0x0CL), 0x0CL), // p_1074->g_409
        (VECTOR(uint32_t, 2))(0UL, 1UL), // p_1074->g_417
        (-1L), // p_1074->g_438
        (VECTOR(uint16_t, 8))(0xE4D2L, (VECTOR(uint16_t, 4))(0xE4D2L, (VECTOR(uint16_t, 2))(0xE4D2L, 65528UL), 65528UL), 65528UL, 0xE4D2L, 65528UL), // p_1074->g_447
        (VECTOR(int16_t, 4))(0x3F1FL, (VECTOR(int16_t, 2))(0x3F1FL, 9L), 9L), // p_1074->g_494
        &p_1074->g_19, // p_1074->g_502
        {&p_1074->g_502,&p_1074->g_502}, // p_1074->g_501
        (VECTOR(int32_t, 8))(0x16CA4A12L, (VECTOR(int32_t, 4))(0x16CA4A12L, (VECTOR(int32_t, 2))(0x16CA4A12L, 0x4E30361CL), 0x4E30361CL), 0x4E30361CL, 0x16CA4A12L, 0x4E30361CL), // p_1074->g_512
        (VECTOR(int32_t, 4))(0x3D6D27FEL, (VECTOR(int32_t, 2))(0x3D6D27FEL, 0L), 0L), // p_1074->g_513
        (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0L), 0L), // p_1074->g_518
        (VECTOR(int32_t, 2))(0x2ED8867AL, 2L), // p_1074->g_519
        (VECTOR(int32_t, 16))(0x0171D8B1L, (VECTOR(int32_t, 4))(0x0171D8B1L, (VECTOR(int32_t, 2))(0x0171D8B1L, 0L), 0L), 0L, 0x0171D8B1L, 0L, (VECTOR(int32_t, 2))(0x0171D8B1L, 0L), (VECTOR(int32_t, 2))(0x0171D8B1L, 0L), 0x0171D8B1L, 0L, 0x0171D8B1L, 0L), // p_1074->g_520
        (VECTOR(int32_t, 8))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), (-1L)), (-1L)), (-1L), (-3L), (-1L)), // p_1074->g_524
        {{0x33L},{0x10L},{0x33L},{0x33L},{0x10L},{0x33L},{0x33L},{0x10L},{0x33L}}, // p_1074->g_560
        (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x8DA9B475L), 0x8DA9B475L), // p_1074->g_568
        (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 18446744073709551615UL), 18446744073709551615UL), // p_1074->g_574
        {1L}, // p_1074->g_578
        1UL, // p_1074->g_579
        (VECTOR(uint8_t, 2))(0xC8L, 247UL), // p_1074->g_588
        &p_1074->g_579, // p_1074->g_610
        &p_1074->g_610, // p_1074->g_609
        &p_1074->g_609, // p_1074->g_608
        (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x7989B8FBL), 0x7989B8FBL), // p_1074->g_636
        (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x3A72L), 0x3A72L), // p_1074->g_641
        (VECTOR(int8_t, 8))(0x39L, (VECTOR(int8_t, 4))(0x39L, (VECTOR(int8_t, 2))(0x39L, 8L), 8L), 8L, 0x39L, 8L), // p_1074->g_646
        (VECTOR(int8_t, 2))(0x74L, 0x7DL), // p_1074->g_648
        (void*)0, // p_1074->g_674
        &p_1074->g_195, // p_1074->g_675
        (VECTOR(int8_t, 16))((-8L), (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), (-1L)), (-1L)), (-1L), (-8L), (-1L), (VECTOR(int8_t, 2))((-8L), (-1L)), (VECTOR(int8_t, 2))((-8L), (-1L)), (-8L), (-1L), (-8L), (-1L)), // p_1074->g_680
        (VECTOR(uint8_t, 16))(0xF1L, (VECTOR(uint8_t, 4))(0xF1L, (VECTOR(uint8_t, 2))(0xF1L, 253UL), 253UL), 253UL, 0xF1L, 253UL, (VECTOR(uint8_t, 2))(0xF1L, 253UL), (VECTOR(uint8_t, 2))(0xF1L, 253UL), 0xF1L, 253UL, 0xF1L, 253UL), // p_1074->g_682
        (VECTOR(uint32_t, 16))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0xA502977EL), 0xA502977EL), 0xA502977EL, 4294967291UL, 0xA502977EL, (VECTOR(uint32_t, 2))(4294967291UL, 0xA502977EL), (VECTOR(uint32_t, 2))(4294967291UL, 0xA502977EL), 4294967291UL, 0xA502977EL, 4294967291UL, 0xA502977EL), // p_1074->g_719
        (VECTOR(int8_t, 2))(0x35L, 0x79L), // p_1074->g_724
        (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 4294967288UL), 4294967288UL), 4294967288UL, 4294967288UL, 4294967288UL), // p_1074->g_962
        (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 3UL), 3UL), // p_1074->g_981
        (-6L), // p_1074->g_987
        0xCE3ED895L, // p_1074->g_990
        (VECTOR(int8_t, 2))(0x1FL, 0x18L), // p_1074->g_1004
        (VECTOR(int64_t, 2))((-9L), 0x2FFCEA5EEDD05C94L), // p_1074->g_1011
        (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 5L), 5L), // p_1074->g_1036
        (void*)0, // p_1074->g_1040
        &p_1074->g_305[8][1][3], // p_1074->g_1054
        &p_1074->g_1054, // p_1074->g_1053
        (void*)0, // p_1074->g_1069
        0, // p_1074->v_collective
        sequence_input[get_global_id(0)], // p_1074->global_0_offset
        sequence_input[get_global_id(1)], // p_1074->global_1_offset
        sequence_input[get_global_id(2)], // p_1074->global_2_offset
        sequence_input[get_local_id(0)], // p_1074->local_0_offset
        sequence_input[get_local_id(1)], // p_1074->local_1_offset
        sequence_input[get_local_id(2)], // p_1074->local_2_offset
        sequence_input[get_group_id(0)], // p_1074->group_0_offset
        sequence_input[get_group_id(1)], // p_1074->group_1_offset
        sequence_input[get_group_id(2)], // p_1074->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 57)), permutations[0][get_linear_local_id()])), // p_1074->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1075 = c_1076;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1074);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1074->g_13, "p_1074->g_13", print_hash_value);
    transparent_crc(p_1074->g_19, "p_1074->g_19", print_hash_value);
    transparent_crc(p_1074->g_196.s0, "p_1074->g_196.s0", print_hash_value);
    transparent_crc(p_1074->g_196.s1, "p_1074->g_196.s1", print_hash_value);
    transparent_crc(p_1074->g_196.s2, "p_1074->g_196.s2", print_hash_value);
    transparent_crc(p_1074->g_196.s3, "p_1074->g_196.s3", print_hash_value);
    transparent_crc(p_1074->g_196.s4, "p_1074->g_196.s4", print_hash_value);
    transparent_crc(p_1074->g_196.s5, "p_1074->g_196.s5", print_hash_value);
    transparent_crc(p_1074->g_196.s6, "p_1074->g_196.s6", print_hash_value);
    transparent_crc(p_1074->g_196.s7, "p_1074->g_196.s7", print_hash_value);
    transparent_crc(p_1074->g_209.f0, "p_1074->g_209.f0", print_hash_value);
    transparent_crc(p_1074->g_242, "p_1074->g_242", print_hash_value);
    transparent_crc(p_1074->g_246.x, "p_1074->g_246.x", print_hash_value);
    transparent_crc(p_1074->g_246.y, "p_1074->g_246.y", print_hash_value);
    transparent_crc(p_1074->g_246.z, "p_1074->g_246.z", print_hash_value);
    transparent_crc(p_1074->g_246.w, "p_1074->g_246.w", print_hash_value);
    transparent_crc(p_1074->g_247.x, "p_1074->g_247.x", print_hash_value);
    transparent_crc(p_1074->g_247.y, "p_1074->g_247.y", print_hash_value);
    transparent_crc(p_1074->g_248.s0, "p_1074->g_248.s0", print_hash_value);
    transparent_crc(p_1074->g_248.s1, "p_1074->g_248.s1", print_hash_value);
    transparent_crc(p_1074->g_248.s2, "p_1074->g_248.s2", print_hash_value);
    transparent_crc(p_1074->g_248.s3, "p_1074->g_248.s3", print_hash_value);
    transparent_crc(p_1074->g_248.s4, "p_1074->g_248.s4", print_hash_value);
    transparent_crc(p_1074->g_248.s5, "p_1074->g_248.s5", print_hash_value);
    transparent_crc(p_1074->g_248.s6, "p_1074->g_248.s6", print_hash_value);
    transparent_crc(p_1074->g_248.s7, "p_1074->g_248.s7", print_hash_value);
    transparent_crc(p_1074->g_249.s0, "p_1074->g_249.s0", print_hash_value);
    transparent_crc(p_1074->g_249.s1, "p_1074->g_249.s1", print_hash_value);
    transparent_crc(p_1074->g_249.s2, "p_1074->g_249.s2", print_hash_value);
    transparent_crc(p_1074->g_249.s3, "p_1074->g_249.s3", print_hash_value);
    transparent_crc(p_1074->g_249.s4, "p_1074->g_249.s4", print_hash_value);
    transparent_crc(p_1074->g_249.s5, "p_1074->g_249.s5", print_hash_value);
    transparent_crc(p_1074->g_249.s6, "p_1074->g_249.s6", print_hash_value);
    transparent_crc(p_1074->g_249.s7, "p_1074->g_249.s7", print_hash_value);
    transparent_crc(p_1074->g_256, "p_1074->g_256", print_hash_value);
    transparent_crc(p_1074->g_259, "p_1074->g_259", print_hash_value);
    transparent_crc(p_1074->g_293, "p_1074->g_293", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1074->g_295[i][j][k], "p_1074->g_295[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1074->g_298, "p_1074->g_298", print_hash_value);
    transparent_crc(p_1074->g_301, "p_1074->g_301", print_hash_value);
    transparent_crc(p_1074->g_319.s0, "p_1074->g_319.s0", print_hash_value);
    transparent_crc(p_1074->g_319.s1, "p_1074->g_319.s1", print_hash_value);
    transparent_crc(p_1074->g_319.s2, "p_1074->g_319.s2", print_hash_value);
    transparent_crc(p_1074->g_319.s3, "p_1074->g_319.s3", print_hash_value);
    transparent_crc(p_1074->g_319.s4, "p_1074->g_319.s4", print_hash_value);
    transparent_crc(p_1074->g_319.s5, "p_1074->g_319.s5", print_hash_value);
    transparent_crc(p_1074->g_319.s6, "p_1074->g_319.s6", print_hash_value);
    transparent_crc(p_1074->g_319.s7, "p_1074->g_319.s7", print_hash_value);
    transparent_crc(p_1074->g_320.x, "p_1074->g_320.x", print_hash_value);
    transparent_crc(p_1074->g_320.y, "p_1074->g_320.y", print_hash_value);
    transparent_crc(p_1074->g_331.s0, "p_1074->g_331.s0", print_hash_value);
    transparent_crc(p_1074->g_331.s1, "p_1074->g_331.s1", print_hash_value);
    transparent_crc(p_1074->g_331.s2, "p_1074->g_331.s2", print_hash_value);
    transparent_crc(p_1074->g_331.s3, "p_1074->g_331.s3", print_hash_value);
    transparent_crc(p_1074->g_331.s4, "p_1074->g_331.s4", print_hash_value);
    transparent_crc(p_1074->g_331.s5, "p_1074->g_331.s5", print_hash_value);
    transparent_crc(p_1074->g_331.s6, "p_1074->g_331.s6", print_hash_value);
    transparent_crc(p_1074->g_331.s7, "p_1074->g_331.s7", print_hash_value);
    transparent_crc(p_1074->g_331.s8, "p_1074->g_331.s8", print_hash_value);
    transparent_crc(p_1074->g_331.s9, "p_1074->g_331.s9", print_hash_value);
    transparent_crc(p_1074->g_331.sa, "p_1074->g_331.sa", print_hash_value);
    transparent_crc(p_1074->g_331.sb, "p_1074->g_331.sb", print_hash_value);
    transparent_crc(p_1074->g_331.sc, "p_1074->g_331.sc", print_hash_value);
    transparent_crc(p_1074->g_331.sd, "p_1074->g_331.sd", print_hash_value);
    transparent_crc(p_1074->g_331.se, "p_1074->g_331.se", print_hash_value);
    transparent_crc(p_1074->g_331.sf, "p_1074->g_331.sf", print_hash_value);
    transparent_crc(p_1074->g_391, "p_1074->g_391", print_hash_value);
    transparent_crc(p_1074->g_407.x, "p_1074->g_407.x", print_hash_value);
    transparent_crc(p_1074->g_407.y, "p_1074->g_407.y", print_hash_value);
    transparent_crc(p_1074->g_409.x, "p_1074->g_409.x", print_hash_value);
    transparent_crc(p_1074->g_409.y, "p_1074->g_409.y", print_hash_value);
    transparent_crc(p_1074->g_409.z, "p_1074->g_409.z", print_hash_value);
    transparent_crc(p_1074->g_409.w, "p_1074->g_409.w", print_hash_value);
    transparent_crc(p_1074->g_417.x, "p_1074->g_417.x", print_hash_value);
    transparent_crc(p_1074->g_417.y, "p_1074->g_417.y", print_hash_value);
    transparent_crc(p_1074->g_438, "p_1074->g_438", print_hash_value);
    transparent_crc(p_1074->g_447.s0, "p_1074->g_447.s0", print_hash_value);
    transparent_crc(p_1074->g_447.s1, "p_1074->g_447.s1", print_hash_value);
    transparent_crc(p_1074->g_447.s2, "p_1074->g_447.s2", print_hash_value);
    transparent_crc(p_1074->g_447.s3, "p_1074->g_447.s3", print_hash_value);
    transparent_crc(p_1074->g_447.s4, "p_1074->g_447.s4", print_hash_value);
    transparent_crc(p_1074->g_447.s5, "p_1074->g_447.s5", print_hash_value);
    transparent_crc(p_1074->g_447.s6, "p_1074->g_447.s6", print_hash_value);
    transparent_crc(p_1074->g_447.s7, "p_1074->g_447.s7", print_hash_value);
    transparent_crc(p_1074->g_494.x, "p_1074->g_494.x", print_hash_value);
    transparent_crc(p_1074->g_494.y, "p_1074->g_494.y", print_hash_value);
    transparent_crc(p_1074->g_494.z, "p_1074->g_494.z", print_hash_value);
    transparent_crc(p_1074->g_494.w, "p_1074->g_494.w", print_hash_value);
    transparent_crc(p_1074->g_512.s0, "p_1074->g_512.s0", print_hash_value);
    transparent_crc(p_1074->g_512.s1, "p_1074->g_512.s1", print_hash_value);
    transparent_crc(p_1074->g_512.s2, "p_1074->g_512.s2", print_hash_value);
    transparent_crc(p_1074->g_512.s3, "p_1074->g_512.s3", print_hash_value);
    transparent_crc(p_1074->g_512.s4, "p_1074->g_512.s4", print_hash_value);
    transparent_crc(p_1074->g_512.s5, "p_1074->g_512.s5", print_hash_value);
    transparent_crc(p_1074->g_512.s6, "p_1074->g_512.s6", print_hash_value);
    transparent_crc(p_1074->g_512.s7, "p_1074->g_512.s7", print_hash_value);
    transparent_crc(p_1074->g_513.x, "p_1074->g_513.x", print_hash_value);
    transparent_crc(p_1074->g_513.y, "p_1074->g_513.y", print_hash_value);
    transparent_crc(p_1074->g_513.z, "p_1074->g_513.z", print_hash_value);
    transparent_crc(p_1074->g_513.w, "p_1074->g_513.w", print_hash_value);
    transparent_crc(p_1074->g_518.x, "p_1074->g_518.x", print_hash_value);
    transparent_crc(p_1074->g_518.y, "p_1074->g_518.y", print_hash_value);
    transparent_crc(p_1074->g_518.z, "p_1074->g_518.z", print_hash_value);
    transparent_crc(p_1074->g_518.w, "p_1074->g_518.w", print_hash_value);
    transparent_crc(p_1074->g_519.x, "p_1074->g_519.x", print_hash_value);
    transparent_crc(p_1074->g_519.y, "p_1074->g_519.y", print_hash_value);
    transparent_crc(p_1074->g_520.s0, "p_1074->g_520.s0", print_hash_value);
    transparent_crc(p_1074->g_520.s1, "p_1074->g_520.s1", print_hash_value);
    transparent_crc(p_1074->g_520.s2, "p_1074->g_520.s2", print_hash_value);
    transparent_crc(p_1074->g_520.s3, "p_1074->g_520.s3", print_hash_value);
    transparent_crc(p_1074->g_520.s4, "p_1074->g_520.s4", print_hash_value);
    transparent_crc(p_1074->g_520.s5, "p_1074->g_520.s5", print_hash_value);
    transparent_crc(p_1074->g_520.s6, "p_1074->g_520.s6", print_hash_value);
    transparent_crc(p_1074->g_520.s7, "p_1074->g_520.s7", print_hash_value);
    transparent_crc(p_1074->g_520.s8, "p_1074->g_520.s8", print_hash_value);
    transparent_crc(p_1074->g_520.s9, "p_1074->g_520.s9", print_hash_value);
    transparent_crc(p_1074->g_520.sa, "p_1074->g_520.sa", print_hash_value);
    transparent_crc(p_1074->g_520.sb, "p_1074->g_520.sb", print_hash_value);
    transparent_crc(p_1074->g_520.sc, "p_1074->g_520.sc", print_hash_value);
    transparent_crc(p_1074->g_520.sd, "p_1074->g_520.sd", print_hash_value);
    transparent_crc(p_1074->g_520.se, "p_1074->g_520.se", print_hash_value);
    transparent_crc(p_1074->g_520.sf, "p_1074->g_520.sf", print_hash_value);
    transparent_crc(p_1074->g_524.s0, "p_1074->g_524.s0", print_hash_value);
    transparent_crc(p_1074->g_524.s1, "p_1074->g_524.s1", print_hash_value);
    transparent_crc(p_1074->g_524.s2, "p_1074->g_524.s2", print_hash_value);
    transparent_crc(p_1074->g_524.s3, "p_1074->g_524.s3", print_hash_value);
    transparent_crc(p_1074->g_524.s4, "p_1074->g_524.s4", print_hash_value);
    transparent_crc(p_1074->g_524.s5, "p_1074->g_524.s5", print_hash_value);
    transparent_crc(p_1074->g_524.s6, "p_1074->g_524.s6", print_hash_value);
    transparent_crc(p_1074->g_524.s7, "p_1074->g_524.s7", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1074->g_560[i].f0, "p_1074->g_560[i].f0", print_hash_value);

    }
    transparent_crc(p_1074->g_568.x, "p_1074->g_568.x", print_hash_value);
    transparent_crc(p_1074->g_568.y, "p_1074->g_568.y", print_hash_value);
    transparent_crc(p_1074->g_568.z, "p_1074->g_568.z", print_hash_value);
    transparent_crc(p_1074->g_568.w, "p_1074->g_568.w", print_hash_value);
    transparent_crc(p_1074->g_574.x, "p_1074->g_574.x", print_hash_value);
    transparent_crc(p_1074->g_574.y, "p_1074->g_574.y", print_hash_value);
    transparent_crc(p_1074->g_574.z, "p_1074->g_574.z", print_hash_value);
    transparent_crc(p_1074->g_574.w, "p_1074->g_574.w", print_hash_value);
    transparent_crc(p_1074->g_579, "p_1074->g_579", print_hash_value);
    transparent_crc(p_1074->g_588.x, "p_1074->g_588.x", print_hash_value);
    transparent_crc(p_1074->g_588.y, "p_1074->g_588.y", print_hash_value);
    transparent_crc(p_1074->g_636.x, "p_1074->g_636.x", print_hash_value);
    transparent_crc(p_1074->g_636.y, "p_1074->g_636.y", print_hash_value);
    transparent_crc(p_1074->g_636.z, "p_1074->g_636.z", print_hash_value);
    transparent_crc(p_1074->g_636.w, "p_1074->g_636.w", print_hash_value);
    transparent_crc(p_1074->g_641.x, "p_1074->g_641.x", print_hash_value);
    transparent_crc(p_1074->g_641.y, "p_1074->g_641.y", print_hash_value);
    transparent_crc(p_1074->g_641.z, "p_1074->g_641.z", print_hash_value);
    transparent_crc(p_1074->g_641.w, "p_1074->g_641.w", print_hash_value);
    transparent_crc(p_1074->g_646.s0, "p_1074->g_646.s0", print_hash_value);
    transparent_crc(p_1074->g_646.s1, "p_1074->g_646.s1", print_hash_value);
    transparent_crc(p_1074->g_646.s2, "p_1074->g_646.s2", print_hash_value);
    transparent_crc(p_1074->g_646.s3, "p_1074->g_646.s3", print_hash_value);
    transparent_crc(p_1074->g_646.s4, "p_1074->g_646.s4", print_hash_value);
    transparent_crc(p_1074->g_646.s5, "p_1074->g_646.s5", print_hash_value);
    transparent_crc(p_1074->g_646.s6, "p_1074->g_646.s6", print_hash_value);
    transparent_crc(p_1074->g_646.s7, "p_1074->g_646.s7", print_hash_value);
    transparent_crc(p_1074->g_648.x, "p_1074->g_648.x", print_hash_value);
    transparent_crc(p_1074->g_648.y, "p_1074->g_648.y", print_hash_value);
    transparent_crc(p_1074->g_680.s0, "p_1074->g_680.s0", print_hash_value);
    transparent_crc(p_1074->g_680.s1, "p_1074->g_680.s1", print_hash_value);
    transparent_crc(p_1074->g_680.s2, "p_1074->g_680.s2", print_hash_value);
    transparent_crc(p_1074->g_680.s3, "p_1074->g_680.s3", print_hash_value);
    transparent_crc(p_1074->g_680.s4, "p_1074->g_680.s4", print_hash_value);
    transparent_crc(p_1074->g_680.s5, "p_1074->g_680.s5", print_hash_value);
    transparent_crc(p_1074->g_680.s6, "p_1074->g_680.s6", print_hash_value);
    transparent_crc(p_1074->g_680.s7, "p_1074->g_680.s7", print_hash_value);
    transparent_crc(p_1074->g_680.s8, "p_1074->g_680.s8", print_hash_value);
    transparent_crc(p_1074->g_680.s9, "p_1074->g_680.s9", print_hash_value);
    transparent_crc(p_1074->g_680.sa, "p_1074->g_680.sa", print_hash_value);
    transparent_crc(p_1074->g_680.sb, "p_1074->g_680.sb", print_hash_value);
    transparent_crc(p_1074->g_680.sc, "p_1074->g_680.sc", print_hash_value);
    transparent_crc(p_1074->g_680.sd, "p_1074->g_680.sd", print_hash_value);
    transparent_crc(p_1074->g_680.se, "p_1074->g_680.se", print_hash_value);
    transparent_crc(p_1074->g_680.sf, "p_1074->g_680.sf", print_hash_value);
    transparent_crc(p_1074->g_682.s0, "p_1074->g_682.s0", print_hash_value);
    transparent_crc(p_1074->g_682.s1, "p_1074->g_682.s1", print_hash_value);
    transparent_crc(p_1074->g_682.s2, "p_1074->g_682.s2", print_hash_value);
    transparent_crc(p_1074->g_682.s3, "p_1074->g_682.s3", print_hash_value);
    transparent_crc(p_1074->g_682.s4, "p_1074->g_682.s4", print_hash_value);
    transparent_crc(p_1074->g_682.s5, "p_1074->g_682.s5", print_hash_value);
    transparent_crc(p_1074->g_682.s6, "p_1074->g_682.s6", print_hash_value);
    transparent_crc(p_1074->g_682.s7, "p_1074->g_682.s7", print_hash_value);
    transparent_crc(p_1074->g_682.s8, "p_1074->g_682.s8", print_hash_value);
    transparent_crc(p_1074->g_682.s9, "p_1074->g_682.s9", print_hash_value);
    transparent_crc(p_1074->g_682.sa, "p_1074->g_682.sa", print_hash_value);
    transparent_crc(p_1074->g_682.sb, "p_1074->g_682.sb", print_hash_value);
    transparent_crc(p_1074->g_682.sc, "p_1074->g_682.sc", print_hash_value);
    transparent_crc(p_1074->g_682.sd, "p_1074->g_682.sd", print_hash_value);
    transparent_crc(p_1074->g_682.se, "p_1074->g_682.se", print_hash_value);
    transparent_crc(p_1074->g_682.sf, "p_1074->g_682.sf", print_hash_value);
    transparent_crc(p_1074->g_719.s0, "p_1074->g_719.s0", print_hash_value);
    transparent_crc(p_1074->g_719.s1, "p_1074->g_719.s1", print_hash_value);
    transparent_crc(p_1074->g_719.s2, "p_1074->g_719.s2", print_hash_value);
    transparent_crc(p_1074->g_719.s3, "p_1074->g_719.s3", print_hash_value);
    transparent_crc(p_1074->g_719.s4, "p_1074->g_719.s4", print_hash_value);
    transparent_crc(p_1074->g_719.s5, "p_1074->g_719.s5", print_hash_value);
    transparent_crc(p_1074->g_719.s6, "p_1074->g_719.s6", print_hash_value);
    transparent_crc(p_1074->g_719.s7, "p_1074->g_719.s7", print_hash_value);
    transparent_crc(p_1074->g_719.s8, "p_1074->g_719.s8", print_hash_value);
    transparent_crc(p_1074->g_719.s9, "p_1074->g_719.s9", print_hash_value);
    transparent_crc(p_1074->g_719.sa, "p_1074->g_719.sa", print_hash_value);
    transparent_crc(p_1074->g_719.sb, "p_1074->g_719.sb", print_hash_value);
    transparent_crc(p_1074->g_719.sc, "p_1074->g_719.sc", print_hash_value);
    transparent_crc(p_1074->g_719.sd, "p_1074->g_719.sd", print_hash_value);
    transparent_crc(p_1074->g_719.se, "p_1074->g_719.se", print_hash_value);
    transparent_crc(p_1074->g_719.sf, "p_1074->g_719.sf", print_hash_value);
    transparent_crc(p_1074->g_724.x, "p_1074->g_724.x", print_hash_value);
    transparent_crc(p_1074->g_724.y, "p_1074->g_724.y", print_hash_value);
    transparent_crc(p_1074->g_962.s0, "p_1074->g_962.s0", print_hash_value);
    transparent_crc(p_1074->g_962.s1, "p_1074->g_962.s1", print_hash_value);
    transparent_crc(p_1074->g_962.s2, "p_1074->g_962.s2", print_hash_value);
    transparent_crc(p_1074->g_962.s3, "p_1074->g_962.s3", print_hash_value);
    transparent_crc(p_1074->g_962.s4, "p_1074->g_962.s4", print_hash_value);
    transparent_crc(p_1074->g_962.s5, "p_1074->g_962.s5", print_hash_value);
    transparent_crc(p_1074->g_962.s6, "p_1074->g_962.s6", print_hash_value);
    transparent_crc(p_1074->g_962.s7, "p_1074->g_962.s7", print_hash_value);
    transparent_crc(p_1074->g_981.x, "p_1074->g_981.x", print_hash_value);
    transparent_crc(p_1074->g_981.y, "p_1074->g_981.y", print_hash_value);
    transparent_crc(p_1074->g_981.z, "p_1074->g_981.z", print_hash_value);
    transparent_crc(p_1074->g_981.w, "p_1074->g_981.w", print_hash_value);
    transparent_crc(p_1074->g_987, "p_1074->g_987", print_hash_value);
    transparent_crc(p_1074->g_990, "p_1074->g_990", print_hash_value);
    transparent_crc(p_1074->g_1004.x, "p_1074->g_1004.x", print_hash_value);
    transparent_crc(p_1074->g_1004.y, "p_1074->g_1004.y", print_hash_value);
    transparent_crc(p_1074->g_1011.x, "p_1074->g_1011.x", print_hash_value);
    transparent_crc(p_1074->g_1011.y, "p_1074->g_1011.y", print_hash_value);
    transparent_crc(p_1074->g_1036.x, "p_1074->g_1036.x", print_hash_value);
    transparent_crc(p_1074->g_1036.y, "p_1074->g_1036.y", print_hash_value);
    transparent_crc(p_1074->g_1036.z, "p_1074->g_1036.z", print_hash_value);
    transparent_crc(p_1074->g_1036.w, "p_1074->g_1036.w", print_hash_value);
    transparent_crc(p_1074->v_collective, "p_1074->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 56; i++)
            transparent_crc(p_1074->g_special_values[i + 56 * get_linear_group_id()], "p_1074->g_special_values[i + 56 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 56; i++)
            transparent_crc(p_1074->l_special_values[i], "p_1074->l_special_values[i]", print_hash_value);
    transparent_crc(p_1074->l_comm_values[get_linear_local_id()], "p_1074->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1074->g_comm_values[get_linear_group_id() * 57 + get_linear_local_id()], "p_1074->g_comm_values[get_linear_group_id() * 57 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
