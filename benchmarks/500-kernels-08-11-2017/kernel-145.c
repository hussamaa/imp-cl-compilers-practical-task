// --atomics 20 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 75,93,1 -l 25,1,1
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

__constant uint32_t permutations[10][25] = {
{13,17,0,9,15,8,12,3,5,6,10,20,14,23,2,11,7,22,21,16,4,24,19,1,18}, // permutation 0
{8,2,13,19,10,15,12,18,4,17,20,5,3,16,22,23,7,6,11,0,24,9,21,14,1}, // permutation 1
{1,4,17,15,22,6,23,14,11,24,12,9,19,18,3,21,8,13,10,7,2,0,5,16,20}, // permutation 2
{7,15,3,14,21,22,1,12,2,16,23,9,10,5,11,8,18,0,4,17,20,13,19,6,24}, // permutation 3
{8,0,19,5,10,9,15,21,23,3,14,24,13,1,2,4,16,6,11,20,17,18,12,7,22}, // permutation 4
{14,11,6,22,13,2,4,21,10,18,8,0,24,5,23,17,1,3,16,9,19,20,12,15,7}, // permutation 5
{3,7,4,9,6,20,14,15,2,10,8,19,5,23,11,22,24,21,1,18,12,17,0,16,13}, // permutation 6
{1,9,10,18,17,14,24,3,4,7,11,21,8,0,22,15,20,2,19,12,23,16,6,5,13}, // permutation 7
{18,4,21,8,19,7,0,9,5,1,22,11,24,3,6,10,15,2,17,23,14,13,20,12,16}, // permutation 8
{23,15,18,20,6,14,4,22,13,3,5,2,12,8,7,16,17,21,10,1,24,9,19,11,0} // permutation 9
};

// Seed: 3971273984

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint64_t  f0;
   volatile uint32_t  f1;
   uint32_t  f2;
};

struct S1 {
    struct S0 g_12[6];
    struct S0 *g_11;
    int32_t g_30;
    int32_t * volatile g_29;
    uint16_t g_36[2][4][7];
    VECTOR(int16_t, 2) g_41;
    int32_t g_52;
    int32_t * volatile g_51[7];
    int32_t * volatile g_53;
    volatile VECTOR(uint16_t, 16) g_127;
    VECTOR(int32_t, 8) g_148;
    uint16_t *g_175;
    VECTOR(uint32_t, 2) g_182;
    uint16_t g_204;
    VECTOR(int64_t, 4) g_212;
    VECTOR(uint32_t, 16) g_214;
    VECTOR(uint32_t, 8) g_216;
    VECTOR(uint32_t, 4) g_217;
    uint32_t *g_239;
    int8_t g_249;
    uint64_t g_253;
    volatile struct S0 g_277;
    volatile struct S0 * volatile g_276;
    volatile struct S0 * volatile * volatile g_275;
    volatile struct S0 * volatile * volatile *g_274[2];
    VECTOR(int32_t, 2) g_294;
    VECTOR(int32_t, 2) g_295;
    VECTOR(int32_t, 2) g_296;
    VECTOR(int32_t, 16) g_297;
    VECTOR(int32_t, 8) g_298;
    uint8_t g_307;
    VECTOR(int16_t, 16) g_316;
    VECTOR(int16_t, 4) g_320;
    VECTOR(int8_t, 16) g_341;
    uint16_t g_369;
    volatile struct S0 g_378;
    volatile struct S0 g_379;
    int32_t g_409;
    uint32_t g_412;
    struct S0 g_415;
    volatile VECTOR(uint64_t, 2) g_424;
    uint32_t g_454;
    int32_t ** volatile g_460;
    int32_t *g_466;
    int32_t ** volatile g_465[4][5];
    int32_t ** volatile g_467;
    int32_t g_469;
    struct S0 ** volatile g_487;
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
uint8_t  func_1(struct S1 * p_488);
struct S0 * func_2(struct S0 * p_3, int32_t  p_4, struct S0 * p_5, struct S0 * p_6, struct S1 * p_488);
int32_t  func_13(int16_t  p_14, struct S0 * p_15, int32_t  p_16, struct S0 * p_17, struct S1 * p_488);
uint64_t  func_25(int16_t  p_26, struct S0 * p_27, struct S1 * p_488);
int32_t * func_31(uint32_t  p_32, int16_t  p_33, struct S1 * p_488);
int8_t  func_44(int64_t  p_45, uint32_t  p_46, struct S1 * p_488);
struct S0  func_77(uint16_t * p_78, struct S1 * p_488);
int32_t * func_133(uint64_t  p_134, uint32_t  p_135, struct S1 * p_488);
uint64_t  func_136(uint32_t  p_137, uint32_t  p_138, struct S1 * p_488);
int8_t  func_143(uint16_t * p_144, uint16_t * p_145, uint16_t  p_146, struct S1 * p_488);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_488->g_11 p_488->g_comm_values p_488->g_12.f2 p_488->g_29 p_488->g_30 p_488->g_36 p_488->g_41 p_488->g_12.f0 p_488->g_53 p_488->g_52 p_488->g_298 p_488->g_409 p_488->g_412 p_488->g_415 p_488->g_253 p_488->g_424 p_488->g_277.f0 p_488->g_249 p_488->g_316 p_488->g_296 p_488->g_307 p_488->g_182 p_488->g_216 p_488->g_214 p_488->g_454 p_488->g_295 p_488->g_294 p_488->g_378.f2 p_488->g_212 p_488->g_297 p_488->g_341 p_488->g_467 p_488->g_369 p_488->g_466 p_488->g_320 p_488->g_487
 * writes: p_488->g_30 p_488->g_36 p_488->g_52 p_488->g_217 p_488->g_409 p_488->g_412 p_488->g_29 p_488->g_12 p_488->g_316 p_488->g_296 p_488->g_307 p_488->g_216 p_488->g_454 p_488->g_466 p_488->g_469 p_488->g_11
 */
uint8_t  func_1(struct S1 * p_488)
{ /* block id: 4 */
    int64_t l_10 = 0x1EDBDA7FE64FD9E2L;
    struct S0 *l_22 = &p_488->g_12[4];
    int64_t l_463 = 4L;
    int32_t *l_468 = &p_488->g_469;
    (*p_488->g_487) = func_2(((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(l_10)), 0)) , p_488->g_11), ((*l_468) = func_13((safe_rshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((l_22 == (((0L && ((((safe_div_func_int64_t_s_s(((l_22 == (func_25(p_488->g_comm_values[p_488->tid], &p_488->g_12[4], p_488) , l_22)) == p_488->g_298.s1), GROUP_DIVERGE(0, 1))) <= p_488->g_415.f0) , p_488->g_297.s0) != 0x3FL)) , 2L) , (void*)0)), l_463)), 15)), p_488->g_11, p_488->g_341.s7, p_488->g_11, p_488)), p_488->g_11, l_22, p_488);
    return p_488->g_316.s6;
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_424 p_488->g_466 p_488->g_52 p_488->g_comm_values p_488->g_30 p_488->g_320 p_488->g_12.f0 p_488->g_296 p_488->g_53
 * writes: p_488->g_52
 */
struct S0 * func_2(struct S0 * p_3, int32_t  p_4, struct S0 * p_5, struct S0 * p_6, struct S1 * p_488)
{ /* block id: 154 */
    uint64_t l_474 = 0UL;
    VECTOR(int8_t, 2) l_481 = (VECTOR(int8_t, 2))(0x47L, 1L);
    int8_t l_484 = (-6L);
    int8_t *l_485 = (void*)0;
    int8_t *l_486 = &l_484;
    int i;
    (*p_488->g_53) = ((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 16))((safe_mul_func_int16_t_s_s(p_488->g_424.x, (&p_488->g_274[0] == ((p_4 | (l_474 != ((safe_div_func_int16_t_s_s((((*p_488->g_466) > (safe_mod_func_uint8_t_u_u((1L < (l_474 <= (((((*l_486) = ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_481.yx)), 0x01L, 0x5CL)).xxywxywxwxzwyyww, ((VECTOR(int8_t, 16))((-8L), 0x31L, ((VECTOR(int8_t, 2))((-1L), (-10L))), 0x6FL, p_488->g_comm_values[p_488->tid], (safe_mod_func_uint32_t_u_u(4294967295UL, l_481.y)), l_484, (-3L), 0x61L, p_488->g_30, ((VECTOR(int8_t, 4))(0x7AL)), 0x7DL))))).s84fa, ((VECTOR(int8_t, 4))(0x4CL))))), (int8_t)(-8L)))).hi, (int8_t)0x44L, (int8_t)p_488->g_320.w))).even) >= p_4) , &p_488->g_409) != &p_488->g_409))), p_488->g_12[4].f0))) >= p_4), 65532UL)) < p_488->g_296.x))) , (void*)0)))), 0x694FDF2B2CC251EAL, 0x8954E1640A174A56L, 0xC019AF0EF3DCCD3FL, ((VECTOR(uint64_t, 4))(0xD6A920C1C384F78DL)), 0x488582324C7C1E17L, ((VECTOR(uint64_t, 4))(0UL)), ((VECTOR(uint64_t, 2))(1UL)), 0xB87DE84B6F2DE676L)).sd, p_488->g_320.w)) , p_4);
    return &p_488->g_415;
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_467 p_488->g_369
 * writes: p_488->g_466
 */
int32_t  func_13(int16_t  p_14, struct S0 * p_15, int32_t  p_16, struct S0 * p_17, struct S1 * p_488)
{ /* block id: 150 */
    int32_t *l_464 = &p_488->g_52;
    (*p_488->g_467) = l_464;
    return p_488->g_369;
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_12.f2 p_488->g_29 p_488->g_30 p_488->g_comm_values p_488->g_36 p_488->g_41 p_488->g_12.f0 p_488->g_53 p_488->g_52 p_488->g_298 p_488->g_409 p_488->g_412 p_488->g_415 p_488->g_11 p_488->g_253 p_488->g_424 p_488->g_277.f0 p_488->g_249 p_488->g_316 p_488->g_296 p_488->g_307 p_488->g_182 p_488->g_216 p_488->g_214 p_488->g_454 p_488->g_295 p_488->g_294 p_488->g_378.f2 p_488->g_212
 * writes: p_488->g_30 p_488->g_36 p_488->g_52 p_488->g_217 p_488->g_409 p_488->g_412 p_488->g_29 p_488->g_12 p_488->g_316 p_488->g_296 p_488->g_307 p_488->g_216 p_488->g_454
 */
uint64_t  func_25(int16_t  p_26, struct S0 * p_27, struct S1 * p_488)
{ /* block id: 5 */
    int32_t l_28 = 0x39BF5BF8L;
    uint16_t *l_34 = (void*)0;
    uint16_t *l_35[5];
    uint32_t *l_446 = (void*)0;
    uint32_t *l_447 = (void*)0;
    uint32_t *l_448 = (void*)0;
    VECTOR(uint8_t, 4) l_451 = (VECTOR(uint8_t, 4))(0xBDL, (VECTOR(uint8_t, 2))(0xBDL, 0UL), 0UL);
    uint8_t *l_452 = (void*)0;
    uint8_t *l_453[8];
    uint32_t l_455 = 0UL;
    int32_t *l_461 = (void*)0;
    int32_t l_462 = 5L;
    int i;
    for (i = 0; i < 5; i++)
        l_35[i] = &p_488->g_36[1][1][2];
    for (i = 0; i < 8; i++)
        l_453[i] = (void*)0;
    (*p_488->g_29) |= (l_28 = (p_488->g_12[4].f2 ^ 0x4D71B36C93846F26L));
    l_461 = func_31((((p_488->g_comm_values[p_488->tid] > (++p_488->g_36[1][2][3])) || (+(safe_mod_func_int64_t_s_s((((((VECTOR(int16_t, 4))(p_488->g_41.xyyy)).y ^ 0xE70DL) != (safe_div_func_int8_t_s_s(((func_44(p_488->g_12[4].f0, p_488->g_12[4].f2, p_488) , ((~l_28) && (p_488->g_182.y > 0UL))) & (p_488->g_216.s7--)), ((VECTOR(uint8_t, 8))(0x7CL, ((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 8))(250UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_451.zwwywzwwwyxzxzyy)).s592e)), (p_488->g_454 |= ((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(250UL, 246UL)), 0xBAL, (0xC7DAAE2DL > p_488->g_214.sd), 0xDCL, 0x9EL, 0x3CL, 0xD8L)), (uint8_t)p_26))).s2), 0xB8L, 0x55L, 0xBDL)).even)), 0UL, 0x9EL, 0x9EL)).s74))), p_488->g_295.x, 0xCAL, 0x11L, 0x21L, 2UL)).s2))) || p_26), p_488->g_294.x)))) , p_488->g_378.f2), l_455, p_488);
    l_462 |= (*l_461);
    return p_488->g_212.y;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_31(uint32_t  p_32, int16_t  p_33, struct S1 * p_488)
{ /* block id: 144 */
    int8_t *l_457[2][1];
    int8_t **l_456 = &l_457[1][0];
    int8_t ***l_458 = &l_456;
    int32_t *l_459 = &p_488->g_409;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_457[i][j] = &p_488->g_249;
    }
    (*l_458) = l_456;
    return l_459;
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_53 p_488->g_52 p_488->g_30 p_488->g_298 p_488->g_409 p_488->g_412 p_488->g_415 p_488->g_11 p_488->g_29 p_488->g_253 p_488->g_424 p_488->g_277.f0 p_488->g_249 p_488->g_316 p_488->g_296 p_488->g_307 p_488->g_12.f0
 * writes: p_488->g_30 p_488->g_52 p_488->g_217 p_488->g_409 p_488->g_412 p_488->g_29 p_488->g_12 p_488->g_316 p_488->g_296 p_488->g_307
 */
int8_t  func_44(int64_t  p_45, uint32_t  p_46, struct S1 * p_488)
{ /* block id: 9 */
    int64_t l_56 = 0x1BDEFAB77C19C50EL;
    int32_t l_62 = 0x3D1BD9F0L;
    int32_t l_63 = (-1L);
    int32_t l_64 = 0x47D66A43L;
    int16_t l_65 = (-1L);
    int32_t l_66 = (-8L);
    int32_t l_67 = 0x108949E3L;
    int32_t l_68[10] = {(-4L),0x39E6D594L,(-4L),(-4L),0x39E6D594L,(-4L),(-4L),0x39E6D594L,(-4L),(-4L)};
    int16_t l_69[7][5] = {{0x62C5L,1L,0x399CL,1L,0x62C5L},{0x62C5L,1L,0x399CL,1L,0x62C5L},{0x62C5L,1L,0x399CL,1L,0x62C5L},{0x62C5L,1L,0x399CL,1L,0x62C5L},{0x62C5L,1L,0x399CL,1L,0x62C5L},{0x62C5L,1L,0x399CL,1L,0x62C5L},{0x62C5L,1L,0x399CL,1L,0x62C5L}};
    int64_t *l_423 = &l_56;
    VECTOR(int8_t, 2) l_429 = (VECTOR(int8_t, 2))(0L, (-1L));
    int16_t *l_438[1][8][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    int8_t *l_440[10][2][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int8_t **l_439 = &l_440[3][0][1];
    int32_t *l_441 = &l_64;
    int32_t *l_442[7][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
    int i, j, k;
    for (p_45 = 0; (p_45 > (-30)); p_45 = safe_sub_func_uint16_t_u_u(p_45, 3))
    { /* block id: 12 */
        int32_t *l_54 = (void*)0;
        int32_t *l_55 = &p_488->g_52;
        int32_t *l_57 = &p_488->g_30;
        int32_t *l_58 = (void*)0;
        int32_t *l_59 = (void*)0;
        int32_t *l_60 = (void*)0;
        int32_t *l_61[5];
        uint16_t l_70[1];
        int i;
        for (i = 0; i < 5; i++)
            l_61[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_70[i] = 0UL;
        for (p_488->g_30 = 9; (p_488->g_30 <= 19); p_488->g_30 = safe_add_func_int32_t_s_s(p_488->g_30, 1))
        { /* block id: 15 */
            (*p_488->g_53) ^= p_45;
            return p_488->g_52;
        }
        l_70[0]++;
        for (l_67 = 0; (l_67 > 1); l_67 = safe_add_func_int32_t_s_s(l_67, 2))
        { /* block id: 22 */
            uint8_t l_416 = 0UL;
            for (l_63 = (-19); (l_63 != (-22)); l_63 = safe_sub_func_uint64_t_u_u(l_63, 7))
            { /* block id: 25 */
                l_64 &= (-7L);
                (*p_488->g_11) = func_77(&p_488->g_36[1][1][4], p_488);
                if (p_46)
                    continue;
                if ((*p_488->g_29))
                    break;
            }
            l_416 = 0x0C13C54AL;
            if ((*p_488->g_29))
                continue;
        }
    }
    p_488->g_296.x &= ((*l_441) |= (safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(((l_68[5] = (safe_mod_func_int64_t_s_s(((*l_423) = p_488->g_253), ((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 8))(p_488->g_424.xxyxyyyx)).odd, ((VECTOR(uint64_t, 16))((((safe_div_func_uint64_t_u_u(p_46, (((l_423 != &p_488->g_253) , (p_488->g_316.sd ^= (safe_add_func_uint8_t_u_u(FAKE_DIVERGE(p_488->local_0_offset, get_local_id(0), 10), ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x70L, 0x20L)), 1L, (-1L))).hi, ((VECTOR(int8_t, 4))(l_429.xyxy)).even))), (int8_t)p_488->g_277.f0, (int8_t)(safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(p_488->g_412, ((p_46 ^ (safe_sub_func_int32_t_s_s(p_45, (safe_mul_func_uint8_t_u_u(p_46, p_488->g_249))))) , 255UL))), 0x81CAL))))), ((VECTOR(int8_t, 2))(0x24L)), ((VECTOR(int8_t, 2))((-8L)))))).hi)))) | l_429.y))) , (void*)0) != l_439), 0x414001578B5FB882L, 0x216FB59AF3303BB5L, 0x6159CB12409DCF4CL, ((VECTOR(uint64_t, 2))(18446744073709551613UL)), ((VECTOR(uint64_t, 8))(0x3048D2A2814D4989L)), 0xB8904833BA4B0EAFL, 5UL)).s12a4))).w))) ^ 0x1274L), 12)) != 0x6B21F1A3FB30309DL), l_63)));
    for (p_488->g_307 = (-15); (p_488->g_307 > 10); p_488->g_307 = safe_add_func_uint8_t_u_u(p_488->g_307, 8))
    { /* block id: 137 */
        int32_t l_445 = (-8L);
        return l_445;
    }
    (*l_441) &= 0x41A76C9EL;
    return p_488->g_12[4].f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_30 p_488->g_127 p_488->g_41 p_488->g_36 p_488->g_148 p_488->g_175 p_488->g_182 p_488->g_52 p_488->g_11 p_488->g_12.f0 p_488->g_212 p_488->g_214 p_488->g_216 p_488->g_217 p_488->g_239 p_488->g_comm_values p_488->g_249 p_488->g_253 p_488->g_274 p_488->l_comm_values p_488->g_12.f2 p_488->g_294 p_488->g_295 p_488->g_296 p_488->g_297 p_488->g_298 p_488->g_316 p_488->g_320 p_488->g_341 p_488->g_204 p_488->g_378 p_488->g_379 p_488->g_53 p_488->g_369 p_488->g_409 p_488->g_412 p_488->g_415
 * writes: p_488->g_30 p_488->g_175 p_488->g_12.f2 p_488->g_148 p_488->g_204 p_488->g_comm_values p_488->g_253 p_488->g_249 p_488->g_52 p_488->g_307 p_488->g_320 p_488->g_316 p_488->g_217 p_488->g_369 p_488->g_12 p_488->g_409 p_488->g_412 p_488->g_29
 */
struct S0  func_77(uint16_t * p_78, struct S1 * p_488)
{ /* block id: 27 */
    int32_t *l_123 = (void*)0;
    int32_t *l_124 = &p_488->g_30;
    VECTOR(uint16_t, 4) l_128 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL);
    VECTOR(uint8_t, 2) l_129 = (VECTOR(uint8_t, 2))(3UL, 4UL);
    VECTOR(uint8_t, 2) l_130 = (VECTOR(uint8_t, 2))(0x4CL, 253UL);
    VECTOR(uint8_t, 16) l_131 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 9UL), 9UL), 9UL, 1UL, 9UL, (VECTOR(uint8_t, 2))(1UL, 9UL), (VECTOR(uint8_t, 2))(1UL, 9UL), 1UL, 9UL, 1UL, 9UL);
    int32_t *l_132 = (void*)0;
    uint16_t *l_147 = (void*)0;
    uint32_t *l_367 = (void*)0;
    uint32_t *l_368 = (void*)0;
    uint64_t *l_382 = (void*)0;
    uint64_t *l_383 = &p_488->g_253;
    int32_t l_405 = 0x3D87D751L;
    int16_t l_406 = (-1L);
    uint32_t *l_407[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_408 = &p_488->g_409;
    int i;
    if ((atomic_inc(&p_488->l_atomic_input[18]) == 8))
    { /* block id: 29 */
        int64_t l_79 = 0x1055545B60A5FB02L;
        int32_t l_80[5][8][5] = {{{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L}},{{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L}},{{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L}},{{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L}},{{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L},{0x016E0766L,0L,0x2C9F03B6L,0L,0x016E0766L}}};
        int32_t l_81[10] = {0L,0x5813BB0FL,0L,0L,0x5813BB0FL,0L,0L,0x5813BB0FL,0L,0L};
        int64_t l_82 = 0x3C2B75F9727A2C14L;
        int32_t l_83[3][2] = {{7L,7L},{7L,7L},{7L,7L}};
        int8_t l_84 = (-1L);
        int16_t l_85 = 0x36FBL;
        uint32_t l_86 = 0x2D7867E7L;
        VECTOR(int32_t, 8) l_89 = (VECTOR(int32_t, 8))(0x71C71BA0L, (VECTOR(int32_t, 4))(0x71C71BA0L, (VECTOR(int32_t, 2))(0x71C71BA0L, 0x555199DCL), 0x555199DCL), 0x555199DCL, 0x71C71BA0L, 0x555199DCL);
        VECTOR(int32_t, 4) l_90 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5416565EL), 0x5416565EL);
        uint32_t l_91 = 0xF6D3EBDDL;
        VECTOR(int32_t, 4) l_92 = (VECTOR(int32_t, 4))(0x7E4F0550L, (VECTOR(int32_t, 2))(0x7E4F0550L, 0x23844EF1L), 0x23844EF1L);
        int32_t l_93 = (-1L);
        uint16_t l_94 = 65535UL;
        VECTOR(int32_t, 16) l_95 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x0534C0AFL), 0x0534C0AFL), 0x0534C0AFL, 5L, 0x0534C0AFL, (VECTOR(int32_t, 2))(5L, 0x0534C0AFL), (VECTOR(int32_t, 2))(5L, 0x0534C0AFL), 5L, 0x0534C0AFL, 5L, 0x0534C0AFL);
        VECTOR(int32_t, 8) l_96 = (VECTOR(int32_t, 8))(0x37EAFC3DL, (VECTOR(int32_t, 4))(0x37EAFC3DL, (VECTOR(int32_t, 2))(0x37EAFC3DL, 0x5252EC47L), 0x5252EC47L), 0x5252EC47L, 0x37EAFC3DL, 0x5252EC47L);
        VECTOR(int32_t, 8) l_97 = (VECTOR(int32_t, 8))(0x0AA24F53L, (VECTOR(int32_t, 4))(0x0AA24F53L, (VECTOR(int32_t, 2))(0x0AA24F53L, 0x0EFB7419L), 0x0EFB7419L), 0x0EFB7419L, 0x0AA24F53L, 0x0EFB7419L);
        int32_t l_98 = 0x7A964C9DL;
        VECTOR(int16_t, 4) l_99 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x3A86L), 0x3A86L);
        VECTOR(int16_t, 8) l_100 = (VECTOR(int16_t, 8))(0x5EB0L, (VECTOR(int16_t, 4))(0x5EB0L, (VECTOR(int16_t, 2))(0x5EB0L, (-2L)), (-2L)), (-2L), 0x5EB0L, (-2L));
        VECTOR(uint64_t, 4) l_101 = (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 0xCC097D859D8DA1D7L), 0xCC097D859D8DA1D7L);
        uint8_t l_102 = 250UL;
        VECTOR(uint64_t, 4) l_103 = (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0x8B998A83C5579058L), 0x8B998A83C5579058L);
        VECTOR(uint64_t, 2) l_104 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x76FC58545D7662A5L);
        VECTOR(uint64_t, 2) l_105 = (VECTOR(uint64_t, 2))(1UL, 0x652DBFB6B4A2447EL);
        uint64_t l_106[5] = {0x1C1CC915B1D915A1L,0x1C1CC915B1D915A1L,0x1C1CC915B1D915A1L,0x1C1CC915B1D915A1L,0x1C1CC915B1D915A1L};
        uint64_t l_107 = 18446744073709551615UL;
        uint16_t l_108 = 0xCC64L;
        VECTOR(uint64_t, 2) l_109 = (VECTOR(uint64_t, 2))(0x9B0CDC420A7EECA0L, 0xA1B52123EC837B64L);
        VECTOR(uint64_t, 2) l_110 = (VECTOR(uint64_t, 2))(2UL, 1UL);
        VECTOR(uint64_t, 16) l_111 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551609UL), 18446744073709551609UL), 18446744073709551609UL, 18446744073709551615UL, 18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551609UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551609UL), 18446744073709551615UL, 18446744073709551609UL, 18446744073709551615UL, 18446744073709551609UL);
        VECTOR(uint64_t, 4) l_112 = (VECTOR(uint64_t, 4))(0xF2B41A0BB31F0EA3L, (VECTOR(uint64_t, 2))(0xF2B41A0BB31F0EA3L, 0x84E9DB0B10695810L), 0x84E9DB0B10695810L);
        VECTOR(uint32_t, 16) l_113 = (VECTOR(uint32_t, 16))(0x6249259AL, (VECTOR(uint32_t, 4))(0x6249259AL, (VECTOR(uint32_t, 2))(0x6249259AL, 0x1F7435F2L), 0x1F7435F2L), 0x1F7435F2L, 0x6249259AL, 0x1F7435F2L, (VECTOR(uint32_t, 2))(0x6249259AL, 0x1F7435F2L), (VECTOR(uint32_t, 2))(0x6249259AL, 0x1F7435F2L), 0x6249259AL, 0x1F7435F2L, 0x6249259AL, 0x1F7435F2L);
        uint8_t l_114 = 1UL;
        uint16_t l_115 = 0UL;
        uint32_t l_116 = 0xC8831FD1L;
        uint64_t l_117 = 0x709DC6AD9C61CCE0L;
        int16_t l_118 = (-1L);
        VECTOR(uint64_t, 4) l_119 = (VECTOR(uint64_t, 4))(0xCE61BCC1DD9ACFF2L, (VECTOR(uint64_t, 2))(0xCE61BCC1DD9ACFF2L, 18446744073709551606UL), 18446744073709551606UL);
        uint32_t l_120 = 0UL;
        int i, j, k;
        l_86++;
        l_91 = ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_89.s65)).yyxxxxxyyxxxyyxx)).even, ((VECTOR(int32_t, 8))(l_90.xwzxwzwy))))).s7;
        l_119.z |= (l_118 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))((-6L), 8L)), ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_92.xwywzzwz)).s46, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((l_94 = (l_93 = ((VECTOR(int32_t, 4))(7L, 8L, (-9L), 0x50B6939AL)).y)), (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_95.sd8232eddaffda28e)).even, ((VECTOR(int32_t, 8))(l_96.s57461525))))).lo)), 0x598EA379L, 0x0A606355L)).lo)).odd, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(l_97.s5, l_98, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_99.yx)))), ((VECTOR(int16_t, 8))(0x742CL, ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 4))(l_100.s2422)).yxyzyxzw, ((VECTOR(int16_t, 8))((-2L), (-2L), 0x499DL, (((FAKE_DIVERGE(p_488->global_1_offset, get_global_id(1), 10) , GROUP_DIVERGE(2, 1)) , ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_101.wzyzxzxwwxxyywwz)).se, l_102, 18446744073709551607UL, ((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 8))(l_103.xxyzxzzy)).lo, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 2))(18446744073709551615UL, 0xD86A01D5895350F1L)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 16))(l_104.yyyyxyyxyxxyxyxx)).s2, ((VECTOR(uint64_t, 8))(l_105.yyyyyxxx)), ((((l_106[4] , FAKE_DIVERGE(p_488->group_2_offset, get_group_id(2), 10)) , 0x2BCAE1E1L) , GROUP_DIVERGE(0, 1)) , l_107), ((VECTOR(uint64_t, 2))(0x5DCCCDC14FE9C12CL, 0x1FC7E891FE2E2A71L)), 18446744073709551609UL, (l_108 , FAKE_DIVERGE(p_488->group_2_offset, get_group_id(2), 10)), 0UL, 7UL)).sd9e1)).even, ((VECTOR(uint64_t, 16))(l_109.yxyyyyyxxxyxyxyy)).s93))).yyxxyxxx, ((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 4))(l_110.xyyx)).lo, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(sub_sat(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 16))(l_111.sf555b3299b2ad007)).s2b, ((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 2))(1UL, 18446744073709551606UL)).xyyyyyxxyyxxxyyy))).s62))).xyyy, ((VECTOR(uint64_t, 8))(l_112.xzzyyxxx)).odd))), 0x89BAE77DE1560B61L, 0x96D624557DD34D88L, 0UL, 0UL)).s26))).xyyyyxyy))).s64))), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 4))(GROUP_DIVERGE(1, 1), ((VECTOR(uint32_t, 2))(l_113.s19)), 0x6FF7F161L)), (uint32_t)0xE1CB3E24L))).odd, ((VECTOR(uint32_t, 2))(0xDEB179A8L))))))).xyyxxyxxxxyyxyyy)).s1, l_114, ((VECTOR(uint64_t, 2))(4UL)), ((VECTOR(uint64_t, 8))(0x18A6757B94B598FBL)), 0x67CBA6E04B37A05FL, 1UL)).s57e4, ((VECTOR(uint64_t, 4))(18446744073709551614UL))))), 18446744073709551614UL)).odd)).w) , l_115), 0x7884L, 0x5804L, 0x4AA0L, 0x46BFL))))).lo, (int16_t)l_116, (int16_t)l_117))), ((VECTOR(int16_t, 2))(0x6149L)), 0x3C06L)).s13, ((VECTOR(int16_t, 2))(4L))))))), (-6L), ((VECTOR(int16_t, 2))((-1L))), ((VECTOR(int16_t, 2))(0L)), (-4L), 0x68CBL, ((VECTOR(int16_t, 2))((-7L))), ((VECTOR(int16_t, 2))((-3L))), 1L)).sf3, ((VECTOR(uint16_t, 2))(0x18BBL))))))))))), 8L, 0x621B4F9AL)), ((VECTOR(int32_t, 4))(1L))))), 1L, (-1L))).s6);
        --l_120;
        unsigned int result = 0;
        result += l_79;
        int l_80_i0, l_80_i1, l_80_i2;
        for (l_80_i0 = 0; l_80_i0 < 5; l_80_i0++) {
            for (l_80_i1 = 0; l_80_i1 < 8; l_80_i1++) {
                for (l_80_i2 = 0; l_80_i2 < 5; l_80_i2++) {
                    result += l_80[l_80_i0][l_80_i1][l_80_i2];
                }
            }
        }
        int l_81_i0;
        for (l_81_i0 = 0; l_81_i0 < 10; l_81_i0++) {
            result += l_81[l_81_i0];
        }
        result += l_82;
        int l_83_i0, l_83_i1;
        for (l_83_i0 = 0; l_83_i0 < 3; l_83_i0++) {
            for (l_83_i1 = 0; l_83_i1 < 2; l_83_i1++) {
                result += l_83[l_83_i0][l_83_i1];
            }
        }
        result += l_84;
        result += l_85;
        result += l_86;
        result += l_89.s7;
        result += l_89.s6;
        result += l_89.s5;
        result += l_89.s4;
        result += l_89.s3;
        result += l_89.s2;
        result += l_89.s1;
        result += l_89.s0;
        result += l_90.w;
        result += l_90.z;
        result += l_90.y;
        result += l_90.x;
        result += l_91;
        result += l_92.w;
        result += l_92.z;
        result += l_92.y;
        result += l_92.x;
        result += l_93;
        result += l_94;
        result += l_95.sf;
        result += l_95.se;
        result += l_95.sd;
        result += l_95.sc;
        result += l_95.sb;
        result += l_95.sa;
        result += l_95.s9;
        result += l_95.s8;
        result += l_95.s7;
        result += l_95.s6;
        result += l_95.s5;
        result += l_95.s4;
        result += l_95.s3;
        result += l_95.s2;
        result += l_95.s1;
        result += l_95.s0;
        result += l_96.s7;
        result += l_96.s6;
        result += l_96.s5;
        result += l_96.s4;
        result += l_96.s3;
        result += l_96.s2;
        result += l_96.s1;
        result += l_96.s0;
        result += l_97.s7;
        result += l_97.s6;
        result += l_97.s5;
        result += l_97.s4;
        result += l_97.s3;
        result += l_97.s2;
        result += l_97.s1;
        result += l_97.s0;
        result += l_98;
        result += l_99.w;
        result += l_99.z;
        result += l_99.y;
        result += l_99.x;
        result += l_100.s7;
        result += l_100.s6;
        result += l_100.s5;
        result += l_100.s4;
        result += l_100.s3;
        result += l_100.s2;
        result += l_100.s1;
        result += l_100.s0;
        result += l_101.w;
        result += l_101.z;
        result += l_101.y;
        result += l_101.x;
        result += l_102;
        result += l_103.w;
        result += l_103.z;
        result += l_103.y;
        result += l_103.x;
        result += l_104.y;
        result += l_104.x;
        result += l_105.y;
        result += l_105.x;
        int l_106_i0;
        for (l_106_i0 = 0; l_106_i0 < 5; l_106_i0++) {
            result += l_106[l_106_i0];
        }
        result += l_107;
        result += l_108;
        result += l_109.y;
        result += l_109.x;
        result += l_110.y;
        result += l_110.x;
        result += l_111.sf;
        result += l_111.se;
        result += l_111.sd;
        result += l_111.sc;
        result += l_111.sb;
        result += l_111.sa;
        result += l_111.s9;
        result += l_111.s8;
        result += l_111.s7;
        result += l_111.s6;
        result += l_111.s5;
        result += l_111.s4;
        result += l_111.s3;
        result += l_111.s2;
        result += l_111.s1;
        result += l_111.s0;
        result += l_112.w;
        result += l_112.z;
        result += l_112.y;
        result += l_112.x;
        result += l_113.sf;
        result += l_113.se;
        result += l_113.sd;
        result += l_113.sc;
        result += l_113.sb;
        result += l_113.sa;
        result += l_113.s9;
        result += l_113.s8;
        result += l_113.s7;
        result += l_113.s6;
        result += l_113.s5;
        result += l_113.s4;
        result += l_113.s3;
        result += l_113.s2;
        result += l_113.s1;
        result += l_113.s0;
        result += l_114;
        result += l_115;
        result += l_116;
        result += l_117;
        result += l_118;
        result += l_119.w;
        result += l_119.z;
        result += l_119.y;
        result += l_119.x;
        result += l_120;
        atomic_add(&p_488->l_special_values[18], result);
    }
    else
    { /* block id: 37 */
        (1 + 1);
    }
    (*l_408) &= (((*l_124) &= (l_123 != l_123)) >= (p_488->g_217.x = ((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(p_488->g_127.s217de881ea7a1799)).even)).s2300574337762556)).s4d, ((VECTOR(uint16_t, 2))(l_128.wz))))), 0x2175L, 0x7AC9L)).xyyxxyxyywxxyzzy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 4))(l_129.yyyy)).zxwxwyxzxzyxxzww, ((VECTOR(uint8_t, 16))(l_130.xyyyyyyyyyxxyyxy))))))), ((VECTOR(uint8_t, 8))(1UL, 247UL, ((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(0UL, 247UL))))), ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 2))(255UL, 0xDDL)).xxyxxxxx, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 4))(l_131.sc960)).wwxxwwzz, ((VECTOR(uint8_t, 16))(((p_78 == (void*)0) >= (l_132 != (p_488->g_41.x , func_133(((*l_383) = func_136(p_488->g_127.s5, (p_488->g_369 = ((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 4))(0xD90661D1L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(1UL, (p_488->g_217.y = (((safe_mod_func_int64_t_s_s((func_143(p_78, l_147, (*p_78), p_488) ^ p_488->g_216.s3), p_488->g_36[1][1][2])) >= 0x92L) < p_488->g_296.x)), ((VECTOR(uint32_t, 2))(0xE5779E18L)), 0xAA3E34CEL, 1UL, 1UL, l_129.x, 1UL, 4294967295UL, 0x4015C741L, 1UL, ((VECTOR(uint32_t, 4))(1UL)))).sf2, ((VECTOR(uint32_t, 2))(1UL))))))), 3UL)).zzxxyyyw, ((VECTOR(uint32_t, 8))(1UL))))).lo)).z, l_129.y)) <= p_488->l_comm_values[(safe_mod_func_uint32_t_u_u(p_488->tid, 25))])), p_488)), p_488->g_216.s3, p_488)))), p_488->g_204, l_405, 255UL, ((VECTOR(uint8_t, 4))(0xC0L)), ((VECTOR(uint8_t, 4))(0xA4L)), p_488->g_341.s5, ((VECTOR(uint8_t, 2))(0UL)), 0x11L)).odd, ((VECTOR(uint8_t, 8))(7UL))))).s17, (uint8_t)p_488->g_148.s1, (uint8_t)p_488->g_369))), ((VECTOR(uint8_t, 2))(0x49L))))).yxxyxyxx))).s10, ((VECTOR(uint8_t, 2))(0x6FL))))), 246UL, 247UL)).s4235560743616347))))), ((VECTOR(uint16_t, 16))(0xFF9AL))))).s6, l_406)) < p_488->g_298.s5)));
    for (p_488->g_52 = 0; (p_488->g_52 != 10); p_488->g_52 = safe_add_func_int8_t_s_s(p_488->g_52, 3))
    { /* block id: 117 */
        p_488->g_412--;
    }
    p_488->g_29 = &p_488->g_30;
    return p_488->g_415;
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_53 p_488->g_52 p_488->g_341 p_488->g_216
 * writes:
 */
int32_t * func_133(uint64_t  p_134, uint32_t  p_135, struct S1 * p_488)
{ /* block id: 108 */
    int8_t *l_384 = (void*)0;
    int32_t l_394 = 0L;
    uint64_t l_397 = 0x520B6069987C9B9BL;
    int64_t *l_398 = (void*)0;
    int64_t *l_399 = (void*)0;
    int64_t *l_400[4][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_401 = 0L;
    int8_t *l_402[6];
    int32_t *l_403[10] = {&p_488->g_52,(void*)0,(void*)0,(void*)0,&p_488->g_52,&p_488->g_52,(void*)0,(void*)0,(void*)0,&p_488->g_52};
    int32_t *l_404 = (void*)0;
    int i, j;
    for (i = 0; i < 6; i++)
        l_402[i] = &p_488->g_249;
    l_403[4] = ((l_384 == (((l_394 = (((safe_mod_func_uint64_t_u_u(18446744073709551610UL, p_135)) == (safe_div_func_int64_t_s_s((l_401 |= (6UL && (((GROUP_DIVERGE(0, 1) && p_135) ^ ((((GROUP_DIVERGE(2, 1) && (safe_add_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((void*)0 != l_384), (safe_unary_minus_func_int8_t_s(((l_394 , ((safe_mod_func_int32_t_s_s((*p_488->g_53), 4294967289UL)) <= p_488->g_341.s3)) > p_488->g_216.s1))))), 0L))) , l_397) & p_134) | 3UL)) ^ FAKE_DIVERGE(p_488->group_0_offset, get_group_id(0), 10)))), p_488->g_216.s2))) , 0x12L)) != l_397) , l_402[1])) , &l_394);
    return l_404;
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_52 p_488->g_378 p_488->g_11 p_488->g_379 p_488->g_36
 * writes: p_488->g_52 p_488->g_12
 */
uint64_t  func_136(uint32_t  p_137, uint32_t  p_138, struct S1 * p_488)
{ /* block id: 93 */
    uint32_t l_374[2];
    VECTOR(uint16_t, 4) l_377 = (VECTOR(uint16_t, 4))(0x1135L, (VECTOR(uint16_t, 2))(0x1135L, 65532UL), 65532UL);
    int i;
    for (i = 0; i < 2; i++)
        l_374[i] = 0x80832732L;
    for (p_488->g_52 = 0; (p_488->g_52 >= (-3)); p_488->g_52 = safe_sub_func_uint32_t_u_u(p_488->g_52, 9))
    { /* block id: 96 */
        int32_t *l_372 = (void*)0;
        int32_t *l_373[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        --l_374[1];
        (*p_488->g_11) = (((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 2))(0xEBC7L, 0x08C3L)).yyxyxyxy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_377.xzyy)).xzzxwxzwzzxwzyzx)).even))).s0 , p_488->g_378);
        (*p_488->g_11) = p_488->g_379;
    }
    for (p_138 = 0; (p_138 <= 33); p_138 = safe_add_func_int8_t_s_s(p_138, 2))
    { /* block id: 103 */
        return p_138;
    }
    return p_488->g_36[1][1][2];
}


/* ------------------------------------------ */
/* 
 * reads : p_488->g_148 p_488->g_36 p_488->g_175 p_488->g_182 p_488->g_41 p_488->g_52 p_488->g_11 p_488->g_12.f0 p_488->g_212 p_488->g_214 p_488->g_216 p_488->g_217 p_488->g_239 p_488->g_comm_values p_488->g_249 p_488->g_253 p_488->g_274 p_488->l_comm_values p_488->g_12.f2 p_488->g_294 p_488->g_295 p_488->g_296 p_488->g_297 p_488->g_298 p_488->g_316 p_488->g_320 p_488->g_341 p_488->g_204
 * writes: p_488->g_175 p_488->g_12.f2 p_488->g_148 p_488->g_204 p_488->g_comm_values p_488->g_253 p_488->g_249 p_488->g_52 p_488->g_307 p_488->g_320 p_488->g_316
 */
int8_t  func_143(uint16_t * p_144, uint16_t * p_145, uint16_t  p_146, struct S1 * p_488)
{ /* block id: 41 */
    struct S0 *l_153 = (void*)0;
    struct S0 **l_152 = &l_153;
    int32_t l_178 = 0x5DED77BEL;
    VECTOR(int16_t, 4) l_197 = (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x2E0AL), 0x2E0AL);
    struct S0 **l_200 = &l_153;
    uint16_t *l_203 = &p_488->g_204;
    VECTOR(int32_t, 16) l_209 = (VECTOR(int32_t, 16))(0x350BC054L, (VECTOR(int32_t, 4))(0x350BC054L, (VECTOR(int32_t, 2))(0x350BC054L, 0x7201F38DL), 0x7201F38DL), 0x7201F38DL, 0x350BC054L, 0x7201F38DL, (VECTOR(int32_t, 2))(0x350BC054L, 0x7201F38DL), (VECTOR(int32_t, 2))(0x350BC054L, 0x7201F38DL), 0x350BC054L, 0x7201F38DL, 0x350BC054L, 0x7201F38DL);
    uint32_t l_210 = 0x8841FF70L;
    int32_t *l_211[6][10][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
    VECTOR(uint32_t, 8) l_213 = (VECTOR(uint32_t, 8))(0x39DC23C6L, (VECTOR(uint32_t, 4))(0x39DC23C6L, (VECTOR(uint32_t, 2))(0x39DC23C6L, 4294967295UL), 4294967295UL), 4294967295UL, 0x39DC23C6L, 4294967295UL);
    VECTOR(uint32_t, 2) l_215 = (VECTOR(uint32_t, 2))(0xDCC5206AL, 4294967292UL);
    VECTOR(int64_t, 16) l_236 = (VECTOR(int64_t, 16))(0x5A31A032CACBC3A3L, (VECTOR(int64_t, 4))(0x5A31A032CACBC3A3L, (VECTOR(int64_t, 2))(0x5A31A032CACBC3A3L, 0x49B0C5A6CC17CFA8L), 0x49B0C5A6CC17CFA8L), 0x49B0C5A6CC17CFA8L, 0x5A31A032CACBC3A3L, 0x49B0C5A6CC17CFA8L, (VECTOR(int64_t, 2))(0x5A31A032CACBC3A3L, 0x49B0C5A6CC17CFA8L), (VECTOR(int64_t, 2))(0x5A31A032CACBC3A3L, 0x49B0C5A6CC17CFA8L), 0x5A31A032CACBC3A3L, 0x49B0C5A6CC17CFA8L, 0x5A31A032CACBC3A3L, 0x49B0C5A6CC17CFA8L);
    int64_t *l_240 = (void*)0;
    int64_t *l_241 = (void*)0;
    int64_t *l_242 = (void*)0;
    int64_t *l_243 = (void*)0;
    int64_t *l_244 = (void*)0;
    int64_t *l_245 = (void*)0;
    int64_t *l_246[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t l_247 = 0x1A21L;
    int8_t *l_248[10][1][3] = {{{&p_488->g_249,&p_488->g_249,(void*)0}},{{&p_488->g_249,&p_488->g_249,(void*)0}},{{&p_488->g_249,&p_488->g_249,(void*)0}},{{&p_488->g_249,&p_488->g_249,(void*)0}},{{&p_488->g_249,&p_488->g_249,(void*)0}},{{&p_488->g_249,&p_488->g_249,(void*)0}},{{&p_488->g_249,&p_488->g_249,(void*)0}},{{&p_488->g_249,&p_488->g_249,(void*)0}},{{&p_488->g_249,&p_488->g_249,(void*)0}},{{&p_488->g_249,&p_488->g_249,(void*)0}}};
    uint64_t l_250 = 18446744073709551614UL;
    int32_t l_251 = 1L;
    uint64_t *l_252 = &p_488->g_253;
    int32_t l_314 = 0x303E8A2AL;
    VECTOR(int16_t, 2) l_315 = (VECTOR(int16_t, 2))(7L, 0L);
    VECTOR(int16_t, 4) l_317 = (VECTOR(int16_t, 4))(0x5F68L, (VECTOR(int16_t, 2))(0x5F68L, 0x166EL), 0x166EL);
    VECTOR(int16_t, 16) l_321 = (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x1465L), 0x1465L), 0x1465L, (-9L), 0x1465L, (VECTOR(int16_t, 2))((-9L), 0x1465L), (VECTOR(int16_t, 2))((-9L), 0x1465L), (-9L), 0x1465L, (-9L), 0x1465L);
    int16_t *l_324 = (void*)0;
    int16_t *l_325 = (void*)0;
    int16_t *l_326 = (void*)0;
    int16_t *l_327 = (void*)0;
    int16_t *l_332[5][5][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int64_t l_333 = 3L;
    VECTOR(uint64_t, 16) l_336 = (VECTOR(uint64_t, 16))(8UL, (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 18446744073709551611UL), 18446744073709551611UL), 18446744073709551611UL, 8UL, 18446744073709551611UL, (VECTOR(uint64_t, 2))(8UL, 18446744073709551611UL), (VECTOR(uint64_t, 2))(8UL, 18446744073709551611UL), 8UL, 18446744073709551611UL, 8UL, 18446744073709551611UL);
    uint32_t l_360 = 0xB402889DL;
    uint16_t l_366 = 65527UL;
    int i, j, k;
    if (((VECTOR(int32_t, 4))(p_488->g_148.s5373)).y)
    { /* block id: 42 */
        struct S0 **l_149[2][7][10];
        struct S0 **l_151 = &p_488->g_11;
        struct S0 ***l_150[7][9] = {{&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151},{&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151},{&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151},{&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151},{&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151},{&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151},{&l_151,&l_151,(void*)0,&l_151,&l_151,&l_151,&l_151,(void*)0,&l_151}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 10; k++)
                    l_149[i][j][k] = &p_488->g_11;
            }
        }
        l_152 = (l_149[0][2][2] = l_149[1][4][4]);
    }
    else
    { /* block id: 45 */
        int32_t *l_154 = &p_488->g_52;
        int32_t *l_155 = &p_488->g_52;
        int32_t *l_156 = (void*)0;
        int32_t *l_157 = &p_488->g_52;
        int32_t *l_158 = &p_488->g_52;
        int32_t *l_159 = &p_488->g_52;
        int32_t *l_160 = &p_488->g_52;
        int32_t *l_161 = (void*)0;
        int32_t *l_162 = (void*)0;
        int32_t *l_163[4];
        uint8_t l_164 = 0xEAL;
        VECTOR(uint32_t, 4) l_181 = (VECTOR(uint32_t, 4))(0x859700A6L, (VECTOR(uint32_t, 2))(0x859700A6L, 0x28AB4817L), 0x28AB4817L);
        int32_t l_185[8];
        uint32_t *l_186 = &p_488->g_12[4].f2;
        int i;
        for (i = 0; i < 4; i++)
            l_163[i] = &p_488->g_52;
        for (i = 0; i < 8; i++)
            l_185[i] = (-1L);
        l_164--;
        p_488->g_148.s4 = (((safe_add_func_int16_t_s_s(p_488->g_36[1][1][2], ((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 16))(0x4D96L, 1L, ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))((safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((((((&p_146 != (p_488->g_175 = &p_488->g_36[1][1][2])) , ((*l_186) = (safe_lshift_func_int16_t_s_u(((((l_178 <= (*p_488->g_175)) , (safe_lshift_func_int8_t_s_u((&p_488->g_36[0][1][0] != &p_146), ((((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(4294967287UL, 0xF3A6FA7AL)).xxxyxxyyyyyxyyyy)), ((VECTOR(uint32_t, 2))(l_181.wz)).yyxyyyyxxxxxxxxy))), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(p_488->g_182.xy)))).yxxx)))).yxwxwxyzzywyzywx))).sb > ((safe_rshift_func_uint8_t_u_s(((p_488->g_41.y , 4294967295UL) <= 0x3E044237L), l_185[2])) != p_488->g_36[1][1][2])) == 0x2B1EL)))) > (*l_160)) == 0x5F7AC17AL), 0)))) < (-4L)) >= l_178) & p_488->g_182.y), p_488->g_148.s4)) && 0x8CA9B3D71B0492FCL), p_488->g_41.y)), 1L)), 0L, 0x5B94L, ((VECTOR(int16_t, 2))(0x04CFL)), l_178, 0x527CL, 0x3937L)), ((VECTOR(int16_t, 8))(0x5B64L))))), ((VECTOR(int16_t, 4))(0x2230L)), 0x3DB6L, (-1L))).hi))).s1)) == GROUP_DIVERGE(2, 1)) < p_146);
    }
    p_488->g_148.s0 &= (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((FAKE_DIVERGE(p_488->group_0_offset, get_group_id(0), 10) > (safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(((((safe_mod_func_int64_t_s_s((((VECTOR(int16_t, 16))(l_197.ywzyzyxyxzxyywwx)).s1 == p_488->g_36[1][1][2]), p_146)) == (safe_rshift_func_uint16_t_u_u(((((((*l_200) = (*l_152)) != (void*)0) && (safe_sub_func_int16_t_s_s(l_197.z, ((*l_203) = FAKE_DIVERGE(p_488->global_0_offset, get_global_id(0), 10))))) > (safe_mul_func_uint16_t_u_u(((0x5BF82136L < p_146) , (safe_add_func_int64_t_s_s(p_146, ((-1L) == l_197.y)))), p_488->g_12[4].f0))) == 9UL), (*p_144)))) , p_488->g_36[1][1][1]) , 255UL), l_209.s1)), 7))), l_210)), p_488->g_182.x));
    if ((((((VECTOR(int64_t, 2))(p_488->g_212.yz)).odd >= ((*l_252) = (((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 4))(((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 2))(0x750434D6L, 0x712D7D5EL)).yxyxxyyy, ((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_213.s6056)), 4294967291UL, ((VECTOR(uint32_t, 2))(p_488->g_214.s6f)), 0xC4D79268L)).hi, ((VECTOR(uint32_t, 2))(l_215.xy)).yxxy))).yzxxxxxz)).s15)).xyxyyxxxxyyxyxyx)).lo, ((VECTOR(uint32_t, 8))(p_488->g_216.s47044746))))).lo, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(0xE3D29711L, 1UL, 4294967287UL, 0x55315CE6L)).hi)).yyxy, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(p_488->g_217.xzywyywwywxyxyww)).odd)), (uint32_t)((*p_144) ^ (safe_rshift_func_uint16_t_u_s(p_488->g_216.s2, 9)))))).s77)).xxyy))).zxwxyyyw))).lo)).z , ((safe_sub_func_uint16_t_u_u((*p_144), ((safe_div_func_int16_t_s_s(((l_250 |= (safe_div_func_int16_t_s_s((4UL | FAKE_DIVERGE(p_488->local_2_offset, get_local_id(2), 10)), (safe_mod_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s((((p_146 > (safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(p_146, 4)) || ((p_146 , ((VECTOR(int64_t, 2))(l_236.s81)).odd) != (p_488->g_comm_values[p_488->tid] ^= (safe_lshift_func_int16_t_s_s((((void*)0 == p_488->g_239) , p_146), 9))))) && p_146), 6)), p_146))) || p_488->g_217.x) , p_488->g_182.y), l_247)) <= p_488->g_216.s4), p_488->g_41.x))))) | p_488->g_212.w), p_488->g_249)) || 0x75L))) , l_251)) <= p_488->g_214.s2), 0L, 0x0688869D018CBE64L, 0x248EE6909606A0C2L)), ((VECTOR(int64_t, 4))(0L))))).hi, ((VECTOR(int64_t, 2))((-1L))), ((VECTOR(int64_t, 2))(0x72917E552FFEF781L))))).odd < p_488->g_182.x))) , p_488->g_214.sd) <= (*p_144)))
    { /* block id: 57 */
        int64_t l_293 = 0x042934253AB809C7L;
        int64_t l_299 = 0x521402CF99B61E3EL;
        uint32_t *l_300 = (void*)0;
        uint32_t *l_301 = (void*)0;
        uint32_t *l_302[6][2];
        int32_t l_303 = 7L;
        struct S0 ***l_305 = &l_200;
        struct S0 ****l_304[7][6][3] = {{{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305}},{{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305}},{{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305}},{{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305}},{{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305}},{{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305}},{{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305},{&l_305,&l_305,&l_305}}};
        uint8_t *l_306[2];
        int32_t l_308[9] = {0x53104D5CL,0x53104D5CL,0x53104D5CL,0x53104D5CL,0x53104D5CL,0x53104D5CL,0x53104D5CL,0x53104D5CL,0x53104D5CL};
        int32_t l_309 = 0x0F366065L;
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
                l_302[i][j] = &p_488->g_12[4].f2;
        }
        for (i = 0; i < 2; i++)
            l_306[i] = &p_488->g_307;
        for (l_247 = 0; (l_247 > 48); ++l_247)
        { /* block id: 60 */
            int32_t l_258 = 0x4DE7019BL;
            struct S0 ***l_270 = &l_152;
            int32_t l_279 = (-1L);
            for (p_488->g_253 = 5; (p_488->g_253 >= 49); p_488->g_253 = safe_add_func_uint32_t_u_u(p_488->g_253, 3))
            { /* block id: 63 */
                uint8_t l_259[10][9] = {{0xB7L,0xC7L,0xC7L,0xB7L,0xB7L,0xC7L,0xC7L,0xB7L,0xB7L},{0xB7L,0xC7L,0xC7L,0xB7L,0xB7L,0xC7L,0xC7L,0xB7L,0xB7L},{0xB7L,0xC7L,0xC7L,0xB7L,0xB7L,0xC7L,0xC7L,0xB7L,0xB7L},{0xB7L,0xC7L,0xC7L,0xB7L,0xB7L,0xC7L,0xC7L,0xB7L,0xB7L},{0xB7L,0xC7L,0xC7L,0xB7L,0xB7L,0xC7L,0xC7L,0xB7L,0xB7L},{0xB7L,0xC7L,0xC7L,0xB7L,0xB7L,0xC7L,0xC7L,0xB7L,0xB7L},{0xB7L,0xC7L,0xC7L,0xB7L,0xB7L,0xC7L,0xC7L,0xB7L,0xB7L},{0xB7L,0xC7L,0xC7L,0xB7L,0xB7L,0xC7L,0xC7L,0xB7L,0xB7L},{0xB7L,0xC7L,0xC7L,0xB7L,0xB7L,0xC7L,0xC7L,0xB7L,0xB7L},{0xB7L,0xC7L,0xC7L,0xB7L,0xB7L,0xC7L,0xC7L,0xB7L,0xB7L}};
                struct S0 ****l_271 = &l_270;
                uint8_t *l_278 = &l_259[1][8];
                int32_t l_280 = 0x1F928291L;
                int i, j;
                --l_259[6][2];
                p_488->g_52 ^= (p_488->g_148.s6 = (safe_add_func_int64_t_s_s((((safe_sub_func_uint64_t_u_u((((p_488->g_212.y || ((*l_278) = ((safe_sub_func_uint32_t_u_u(4294967293UL, p_488->g_182.y)) || (l_259[6][2] == ((p_488->g_249 ^= (l_258 || (safe_div_func_uint32_t_u_u((p_488->g_217.y , ((-3L) != (((*l_271) = l_270) == (((safe_mul_func_uint16_t_u_u((p_488->g_216.s7 , (*p_144)), p_146)) , p_488->g_182.x) , p_488->g_274[0])))), p_146)))) <= 253UL))))) != p_488->l_comm_values[(safe_mod_func_uint32_t_u_u(p_488->tid, 25))]) , GROUP_DIVERGE(2, 1)), p_488->g_12[4].f2)) >= l_279) == p_488->g_41.x), l_280)));
            }
        }
        l_309 = ((l_308[4] = (safe_mul_func_int16_t_s_s((((safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(1UL, (((p_488->g_307 = ((p_488->g_253 = ((safe_rshift_func_int16_t_s_u(((((p_146 | FAKE_DIVERGE(p_488->local_0_offset, get_local_id(0), 10)) || (p_146 != ((((safe_add_func_int16_t_s_s((0x7BEFE16E36453E78L && 0x3BBD3E55AA21F6F4L), ((l_303 = (((((GROUP_DIVERGE(0, 1) , l_293) , (((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_488->g_294.xxxy)), p_488->g_148.s0, 0L, (-1L), ((VECTOR(int32_t, 4))(p_488->g_295.yxxy)), 5L, ((VECTOR(int32_t, 4))(p_488->g_296.yyyy)))).sf99b, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((-1L), (-1L), 0x74A7F7F5L, ((VECTOR(int32_t, 4))(p_488->g_297.sb098)), 1L)).s3165337312761146)).sf292, ((VECTOR(int32_t, 16))(p_488->g_298.s0506140402640210)).s3652))).w , l_299)) >= l_293) >= p_146) , l_299)) >= 0x16CA5DC3L))) , l_304[6][1][1]) == &l_305) > (-1L)))) , l_293) <= 0L), 9)) > l_299)) != 7UL)) > p_488->g_298.s3) == 18446744073709551613UL))), p_488->g_36[0][1][1])) >= 0L) , l_299), 0x0A30L))) & 18446744073709551609UL);
    }
    else
    { /* block id: 77 */
        p_488->g_52 = (-1L);
    }
    if ((safe_mod_func_uint16_t_u_u(65535UL, ((safe_rshift_func_int16_t_s_s(l_314, ((VECTOR(int16_t, 8))(l_315.xyyxxyxx)).s7)) , ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(p_488->g_316.sbeffff99)).s35, ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))((-1L), 0x37C8L)).yxyx, ((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(l_317.zx)).xyyxxxxx, (int16_t)(safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(p_488->g_320.wwzwwwyxxxyxwxzw)).s8a, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 8))(l_321.s37898cbf)), (int16_t)(((safe_rshift_func_int16_t_s_s((p_488->g_320.w &= (0x73L == 1UL)), 13)) > p_146) != (((void*)0 != p_145) ^ (((((p_488->g_148.s2 && (safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((p_488->g_316.sa = ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((-8L), 0x6652L, 0x3E07L, 0x016DL)).zxzywwzyyyxxzywz)).sd0, ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 2))(0x0A01L))))).hi), p_146)), p_488->g_comm_values[p_488->tid]))) | p_146) || p_488->g_41.y) > p_488->g_297.sc) , l_333)))))).s6570375217744356)))).sa7))).yyxy)).x, p_488->g_249))))).even, ((VECTOR(int16_t, 4))(0x5E02L))))).even))), ((VECTOR(int16_t, 2))(0x0322L)), ((VECTOR(int16_t, 2))(0x3771L))))).xxxyyyxx, ((VECTOR(int16_t, 8))(0x455DL)), ((VECTOR(int16_t, 8))((-5L)))))).s7))))
    { /* block id: 82 */
        uint16_t l_354 = 0UL;
        int8_t **l_355 = (void*)0;
        int8_t **l_356 = &l_248[7][0][0];
        uint16_t *l_357 = (void*)0;
        uint16_t *l_358 = &l_247;
        int32_t l_359 = 0x0AFF039BL;
        l_360 ^= (safe_add_func_int64_t_s_s((l_359 &= (((VECTOR(uint64_t, 16))(l_336.s082f1a0e5e52de21)).sa , ((safe_lshift_func_uint16_t_u_u(1UL, 8)) < (safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 2))(p_488->g_341.sf9)).xyxxyxyxxxxyyyxy, ((VECTOR(int8_t, 2))((-8L), (-3L))).yxxyxyxyyxyxyyxx))), (int8_t)(safe_mod_func_int16_t_s_s((((((VECTOR(int8_t, 8))(0x10L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(0x68L, (safe_lshift_func_uint8_t_u_u(p_146, (safe_rshift_func_uint16_t_u_u((*p_144), (((((0xBE2860F0DB80E536L != ((safe_div_func_int16_t_s_s(((safe_div_func_uint16_t_u_u(p_488->g_316.s0, p_488->g_12[4].f0)) <= 0x72FBA364L), ((*l_358) &= ((((safe_sub_func_int16_t_s_s((l_354 , (((*l_356) = &p_488->g_249) != (void*)0)), p_488->g_204)) < p_146) | FAKE_DIVERGE(p_488->group_1_offset, get_group_id(1), 10)) >= l_354)))) <= GROUP_DIVERGE(1, 1))) != p_488->g_253) == p_488->g_comm_values[p_488->tid]) <= p_146) <= l_354))))), 0x23L, p_488->g_249, 0L, p_146, ((VECTOR(int8_t, 2))(0x59L)), 0x1BL, ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 4))(0x3AL)), 0x5DL)).hi, ((VECTOR(int8_t, 8))((-9L)))))).even)), p_146, (-6L), 0x5FL)).s2 <= p_488->g_41.x) || p_488->g_294.y) || l_354), 0xB25EL))))).s8, p_146))))), 0xCE0D3E0BB5CFA8EBL));
    }
    else
    { /* block id: 87 */
        int16_t l_361 = 0x685BL;
        int32_t l_362[8][9][3] = {{{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L}},{{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L}},{{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L}},{{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L}},{{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L}},{{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L}},{{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L}},{{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L},{0x51E95657L,0x01E49874L,0x51E95657L}}};
        uint16_t l_363 = 0xB275L;
        int i, j, k;
        --l_363;
    }
    return l_366;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[20];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 20; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[25];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 25; i++)
            l_comm_values[i] = 1;
    struct S1 c_489;
    struct S1* p_488 = &c_489;
    struct S1 c_490 = {
        {{0xBC383C67EE39F3FAL,8UL,0x3F6085E0L},{0UL,6UL,0x3D0BB94DL},{0xBC383C67EE39F3FAL,8UL,0x3F6085E0L},{0xBC383C67EE39F3FAL,8UL,0x3F6085E0L},{0UL,6UL,0x3D0BB94DL},{0xBC383C67EE39F3FAL,8UL,0x3F6085E0L}}, // p_488->g_12
        &p_488->g_12[4], // p_488->g_11
        (-9L), // p_488->g_30
        &p_488->g_30, // p_488->g_29
        {{{0x3260L,0x3260L,0xDD0BL,6UL,1UL,0xA1ECL,4UL},{0x3260L,0x3260L,0xDD0BL,6UL,1UL,0xA1ECL,4UL},{0x3260L,0x3260L,0xDD0BL,6UL,1UL,0xA1ECL,4UL},{0x3260L,0x3260L,0xDD0BL,6UL,1UL,0xA1ECL,4UL}},{{0x3260L,0x3260L,0xDD0BL,6UL,1UL,0xA1ECL,4UL},{0x3260L,0x3260L,0xDD0BL,6UL,1UL,0xA1ECL,4UL},{0x3260L,0x3260L,0xDD0BL,6UL,1UL,0xA1ECL,4UL},{0x3260L,0x3260L,0xDD0BL,6UL,1UL,0xA1ECL,4UL}}}, // p_488->g_36
        (VECTOR(int16_t, 2))(0x762CL, 0x04CAL), // p_488->g_41
        (-10L), // p_488->g_52
        {&p_488->g_52,&p_488->g_52,&p_488->g_52,&p_488->g_52,&p_488->g_52,&p_488->g_52,&p_488->g_52}, // p_488->g_51
        &p_488->g_52, // p_488->g_53
        (VECTOR(uint16_t, 16))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 0UL), 0UL), 0UL, 65534UL, 0UL, (VECTOR(uint16_t, 2))(65534UL, 0UL), (VECTOR(uint16_t, 2))(65534UL, 0UL), 65534UL, 0UL, 65534UL, 0UL), // p_488->g_127
        (VECTOR(int32_t, 8))(0x5F59378EL, (VECTOR(int32_t, 4))(0x5F59378EL, (VECTOR(int32_t, 2))(0x5F59378EL, 0x3E17463EL), 0x3E17463EL), 0x3E17463EL, 0x5F59378EL, 0x3E17463EL), // p_488->g_148
        (void*)0, // p_488->g_175
        (VECTOR(uint32_t, 2))(4294967295UL, 2UL), // p_488->g_182
        0xF425L, // p_488->g_204
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L), // p_488->g_212
        (VECTOR(uint32_t, 16))(0x22DDEA78L, (VECTOR(uint32_t, 4))(0x22DDEA78L, (VECTOR(uint32_t, 2))(0x22DDEA78L, 4294967295UL), 4294967295UL), 4294967295UL, 0x22DDEA78L, 4294967295UL, (VECTOR(uint32_t, 2))(0x22DDEA78L, 4294967295UL), (VECTOR(uint32_t, 2))(0x22DDEA78L, 4294967295UL), 0x22DDEA78L, 4294967295UL, 0x22DDEA78L, 4294967295UL), // p_488->g_214
        (VECTOR(uint32_t, 8))(0x89C14EC5L, (VECTOR(uint32_t, 4))(0x89C14EC5L, (VECTOR(uint32_t, 2))(0x89C14EC5L, 0x5C099B40L), 0x5C099B40L), 0x5C099B40L, 0x89C14EC5L, 0x5C099B40L), // p_488->g_216
        (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 4294967291UL), 4294967291UL), // p_488->g_217
        (void*)0, // p_488->g_239
        0x09L, // p_488->g_249
        0UL, // p_488->g_253
        {0UL,4294967287UL,0xE4C7291DL}, // p_488->g_277
        &p_488->g_277, // p_488->g_276
        &p_488->g_276, // p_488->g_275
        {&p_488->g_275,&p_488->g_275}, // p_488->g_274
        (VECTOR(int32_t, 2))(1L, 0x0AD91350L), // p_488->g_294
        (VECTOR(int32_t, 2))((-8L), 3L), // p_488->g_295
        (VECTOR(int32_t, 2))(0x02920927L, 0x372773E2L), // p_488->g_296
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x14970F5AL), 0x14970F5AL), 0x14970F5AL, (-1L), 0x14970F5AL, (VECTOR(int32_t, 2))((-1L), 0x14970F5AL), (VECTOR(int32_t, 2))((-1L), 0x14970F5AL), (-1L), 0x14970F5AL, (-1L), 0x14970F5AL), // p_488->g_297
        (VECTOR(int32_t, 8))(0x65366C52L, (VECTOR(int32_t, 4))(0x65366C52L, (VECTOR(int32_t, 2))(0x65366C52L, 1L), 1L), 1L, 0x65366C52L, 1L), // p_488->g_298
        3UL, // p_488->g_307
        (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x2731L), 0x2731L), 0x2731L, 1L, 0x2731L, (VECTOR(int16_t, 2))(1L, 0x2731L), (VECTOR(int16_t, 2))(1L, 0x2731L), 1L, 0x2731L, 1L, 0x2731L), // p_488->g_316
        (VECTOR(int16_t, 4))(0x7E01L, (VECTOR(int16_t, 2))(0x7E01L, 0x19D6L), 0x19D6L), // p_488->g_320
        (VECTOR(int8_t, 16))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x72L), 0x72L), 0x72L, (-10L), 0x72L, (VECTOR(int8_t, 2))((-10L), 0x72L), (VECTOR(int8_t, 2))((-10L), 0x72L), (-10L), 0x72L, (-10L), 0x72L), // p_488->g_341
        0x2F37L, // p_488->g_369
        {18446744073709551614UL,4294967289UL,0xCD502BF5L}, // p_488->g_378
        {18446744073709551615UL,0xA29EC569L,1UL}, // p_488->g_379
        0x5D9E407CL, // p_488->g_409
        1UL, // p_488->g_412
        {18446744073709551615UL,0xFC63D3A7L,0xFD2232DEL}, // p_488->g_415
        (VECTOR(uint64_t, 2))(18446744073709551607UL, 0xDBB0323B244EAF84L), // p_488->g_424
        4294967295UL, // p_488->g_454
        (void*)0, // p_488->g_460
        (void*)0, // p_488->g_466
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_488->g_465
        &p_488->g_466, // p_488->g_467
        0L, // p_488->g_469
        &p_488->g_11, // p_488->g_487
        0, // p_488->v_collective
        sequence_input[get_global_id(0)], // p_488->global_0_offset
        sequence_input[get_global_id(1)], // p_488->global_1_offset
        sequence_input[get_global_id(2)], // p_488->global_2_offset
        sequence_input[get_local_id(0)], // p_488->local_0_offset
        sequence_input[get_local_id(1)], // p_488->local_1_offset
        sequence_input[get_local_id(2)], // p_488->local_2_offset
        sequence_input[get_group_id(0)], // p_488->group_0_offset
        sequence_input[get_group_id(1)], // p_488->group_1_offset
        sequence_input[get_group_id(2)], // p_488->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 25)), permutations[0][get_linear_local_id()])), // p_488->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_489 = c_490;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_488);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_488->g_12[i].f0, "p_488->g_12[i].f0", print_hash_value);
        transparent_crc(p_488->g_12[i].f1, "p_488->g_12[i].f1", print_hash_value);
        transparent_crc(p_488->g_12[i].f2, "p_488->g_12[i].f2", print_hash_value);

    }
    transparent_crc(p_488->g_30, "p_488->g_30", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_488->g_36[i][j][k], "p_488->g_36[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_488->g_41.x, "p_488->g_41.x", print_hash_value);
    transparent_crc(p_488->g_41.y, "p_488->g_41.y", print_hash_value);
    transparent_crc(p_488->g_52, "p_488->g_52", print_hash_value);
    transparent_crc(p_488->g_127.s0, "p_488->g_127.s0", print_hash_value);
    transparent_crc(p_488->g_127.s1, "p_488->g_127.s1", print_hash_value);
    transparent_crc(p_488->g_127.s2, "p_488->g_127.s2", print_hash_value);
    transparent_crc(p_488->g_127.s3, "p_488->g_127.s3", print_hash_value);
    transparent_crc(p_488->g_127.s4, "p_488->g_127.s4", print_hash_value);
    transparent_crc(p_488->g_127.s5, "p_488->g_127.s5", print_hash_value);
    transparent_crc(p_488->g_127.s6, "p_488->g_127.s6", print_hash_value);
    transparent_crc(p_488->g_127.s7, "p_488->g_127.s7", print_hash_value);
    transparent_crc(p_488->g_127.s8, "p_488->g_127.s8", print_hash_value);
    transparent_crc(p_488->g_127.s9, "p_488->g_127.s9", print_hash_value);
    transparent_crc(p_488->g_127.sa, "p_488->g_127.sa", print_hash_value);
    transparent_crc(p_488->g_127.sb, "p_488->g_127.sb", print_hash_value);
    transparent_crc(p_488->g_127.sc, "p_488->g_127.sc", print_hash_value);
    transparent_crc(p_488->g_127.sd, "p_488->g_127.sd", print_hash_value);
    transparent_crc(p_488->g_127.se, "p_488->g_127.se", print_hash_value);
    transparent_crc(p_488->g_127.sf, "p_488->g_127.sf", print_hash_value);
    transparent_crc(p_488->g_148.s0, "p_488->g_148.s0", print_hash_value);
    transparent_crc(p_488->g_148.s1, "p_488->g_148.s1", print_hash_value);
    transparent_crc(p_488->g_148.s2, "p_488->g_148.s2", print_hash_value);
    transparent_crc(p_488->g_148.s3, "p_488->g_148.s3", print_hash_value);
    transparent_crc(p_488->g_148.s4, "p_488->g_148.s4", print_hash_value);
    transparent_crc(p_488->g_148.s5, "p_488->g_148.s5", print_hash_value);
    transparent_crc(p_488->g_148.s6, "p_488->g_148.s6", print_hash_value);
    transparent_crc(p_488->g_148.s7, "p_488->g_148.s7", print_hash_value);
    transparent_crc(p_488->g_182.x, "p_488->g_182.x", print_hash_value);
    transparent_crc(p_488->g_182.y, "p_488->g_182.y", print_hash_value);
    transparent_crc(p_488->g_204, "p_488->g_204", print_hash_value);
    transparent_crc(p_488->g_212.x, "p_488->g_212.x", print_hash_value);
    transparent_crc(p_488->g_212.y, "p_488->g_212.y", print_hash_value);
    transparent_crc(p_488->g_212.z, "p_488->g_212.z", print_hash_value);
    transparent_crc(p_488->g_212.w, "p_488->g_212.w", print_hash_value);
    transparent_crc(p_488->g_214.s0, "p_488->g_214.s0", print_hash_value);
    transparent_crc(p_488->g_214.s1, "p_488->g_214.s1", print_hash_value);
    transparent_crc(p_488->g_214.s2, "p_488->g_214.s2", print_hash_value);
    transparent_crc(p_488->g_214.s3, "p_488->g_214.s3", print_hash_value);
    transparent_crc(p_488->g_214.s4, "p_488->g_214.s4", print_hash_value);
    transparent_crc(p_488->g_214.s5, "p_488->g_214.s5", print_hash_value);
    transparent_crc(p_488->g_214.s6, "p_488->g_214.s6", print_hash_value);
    transparent_crc(p_488->g_214.s7, "p_488->g_214.s7", print_hash_value);
    transparent_crc(p_488->g_214.s8, "p_488->g_214.s8", print_hash_value);
    transparent_crc(p_488->g_214.s9, "p_488->g_214.s9", print_hash_value);
    transparent_crc(p_488->g_214.sa, "p_488->g_214.sa", print_hash_value);
    transparent_crc(p_488->g_214.sb, "p_488->g_214.sb", print_hash_value);
    transparent_crc(p_488->g_214.sc, "p_488->g_214.sc", print_hash_value);
    transparent_crc(p_488->g_214.sd, "p_488->g_214.sd", print_hash_value);
    transparent_crc(p_488->g_214.se, "p_488->g_214.se", print_hash_value);
    transparent_crc(p_488->g_214.sf, "p_488->g_214.sf", print_hash_value);
    transparent_crc(p_488->g_216.s0, "p_488->g_216.s0", print_hash_value);
    transparent_crc(p_488->g_216.s1, "p_488->g_216.s1", print_hash_value);
    transparent_crc(p_488->g_216.s2, "p_488->g_216.s2", print_hash_value);
    transparent_crc(p_488->g_216.s3, "p_488->g_216.s3", print_hash_value);
    transparent_crc(p_488->g_216.s4, "p_488->g_216.s4", print_hash_value);
    transparent_crc(p_488->g_216.s5, "p_488->g_216.s5", print_hash_value);
    transparent_crc(p_488->g_216.s6, "p_488->g_216.s6", print_hash_value);
    transparent_crc(p_488->g_216.s7, "p_488->g_216.s7", print_hash_value);
    transparent_crc(p_488->g_217.x, "p_488->g_217.x", print_hash_value);
    transparent_crc(p_488->g_217.y, "p_488->g_217.y", print_hash_value);
    transparent_crc(p_488->g_217.z, "p_488->g_217.z", print_hash_value);
    transparent_crc(p_488->g_217.w, "p_488->g_217.w", print_hash_value);
    transparent_crc(p_488->g_249, "p_488->g_249", print_hash_value);
    transparent_crc(p_488->g_253, "p_488->g_253", print_hash_value);
    transparent_crc(p_488->g_277.f0, "p_488->g_277.f0", print_hash_value);
    transparent_crc(p_488->g_277.f1, "p_488->g_277.f1", print_hash_value);
    transparent_crc(p_488->g_277.f2, "p_488->g_277.f2", print_hash_value);
    transparent_crc(p_488->g_294.x, "p_488->g_294.x", print_hash_value);
    transparent_crc(p_488->g_294.y, "p_488->g_294.y", print_hash_value);
    transparent_crc(p_488->g_295.x, "p_488->g_295.x", print_hash_value);
    transparent_crc(p_488->g_295.y, "p_488->g_295.y", print_hash_value);
    transparent_crc(p_488->g_296.x, "p_488->g_296.x", print_hash_value);
    transparent_crc(p_488->g_296.y, "p_488->g_296.y", print_hash_value);
    transparent_crc(p_488->g_297.s0, "p_488->g_297.s0", print_hash_value);
    transparent_crc(p_488->g_297.s1, "p_488->g_297.s1", print_hash_value);
    transparent_crc(p_488->g_297.s2, "p_488->g_297.s2", print_hash_value);
    transparent_crc(p_488->g_297.s3, "p_488->g_297.s3", print_hash_value);
    transparent_crc(p_488->g_297.s4, "p_488->g_297.s4", print_hash_value);
    transparent_crc(p_488->g_297.s5, "p_488->g_297.s5", print_hash_value);
    transparent_crc(p_488->g_297.s6, "p_488->g_297.s6", print_hash_value);
    transparent_crc(p_488->g_297.s7, "p_488->g_297.s7", print_hash_value);
    transparent_crc(p_488->g_297.s8, "p_488->g_297.s8", print_hash_value);
    transparent_crc(p_488->g_297.s9, "p_488->g_297.s9", print_hash_value);
    transparent_crc(p_488->g_297.sa, "p_488->g_297.sa", print_hash_value);
    transparent_crc(p_488->g_297.sb, "p_488->g_297.sb", print_hash_value);
    transparent_crc(p_488->g_297.sc, "p_488->g_297.sc", print_hash_value);
    transparent_crc(p_488->g_297.sd, "p_488->g_297.sd", print_hash_value);
    transparent_crc(p_488->g_297.se, "p_488->g_297.se", print_hash_value);
    transparent_crc(p_488->g_297.sf, "p_488->g_297.sf", print_hash_value);
    transparent_crc(p_488->g_298.s0, "p_488->g_298.s0", print_hash_value);
    transparent_crc(p_488->g_298.s1, "p_488->g_298.s1", print_hash_value);
    transparent_crc(p_488->g_298.s2, "p_488->g_298.s2", print_hash_value);
    transparent_crc(p_488->g_298.s3, "p_488->g_298.s3", print_hash_value);
    transparent_crc(p_488->g_298.s4, "p_488->g_298.s4", print_hash_value);
    transparent_crc(p_488->g_298.s5, "p_488->g_298.s5", print_hash_value);
    transparent_crc(p_488->g_298.s6, "p_488->g_298.s6", print_hash_value);
    transparent_crc(p_488->g_298.s7, "p_488->g_298.s7", print_hash_value);
    transparent_crc(p_488->g_307, "p_488->g_307", print_hash_value);
    transparent_crc(p_488->g_316.s0, "p_488->g_316.s0", print_hash_value);
    transparent_crc(p_488->g_316.s1, "p_488->g_316.s1", print_hash_value);
    transparent_crc(p_488->g_316.s2, "p_488->g_316.s2", print_hash_value);
    transparent_crc(p_488->g_316.s3, "p_488->g_316.s3", print_hash_value);
    transparent_crc(p_488->g_316.s4, "p_488->g_316.s4", print_hash_value);
    transparent_crc(p_488->g_316.s5, "p_488->g_316.s5", print_hash_value);
    transparent_crc(p_488->g_316.s6, "p_488->g_316.s6", print_hash_value);
    transparent_crc(p_488->g_316.s7, "p_488->g_316.s7", print_hash_value);
    transparent_crc(p_488->g_316.s8, "p_488->g_316.s8", print_hash_value);
    transparent_crc(p_488->g_316.s9, "p_488->g_316.s9", print_hash_value);
    transparent_crc(p_488->g_316.sa, "p_488->g_316.sa", print_hash_value);
    transparent_crc(p_488->g_316.sb, "p_488->g_316.sb", print_hash_value);
    transparent_crc(p_488->g_316.sc, "p_488->g_316.sc", print_hash_value);
    transparent_crc(p_488->g_316.sd, "p_488->g_316.sd", print_hash_value);
    transparent_crc(p_488->g_316.se, "p_488->g_316.se", print_hash_value);
    transparent_crc(p_488->g_316.sf, "p_488->g_316.sf", print_hash_value);
    transparent_crc(p_488->g_320.x, "p_488->g_320.x", print_hash_value);
    transparent_crc(p_488->g_320.y, "p_488->g_320.y", print_hash_value);
    transparent_crc(p_488->g_320.z, "p_488->g_320.z", print_hash_value);
    transparent_crc(p_488->g_320.w, "p_488->g_320.w", print_hash_value);
    transparent_crc(p_488->g_341.s0, "p_488->g_341.s0", print_hash_value);
    transparent_crc(p_488->g_341.s1, "p_488->g_341.s1", print_hash_value);
    transparent_crc(p_488->g_341.s2, "p_488->g_341.s2", print_hash_value);
    transparent_crc(p_488->g_341.s3, "p_488->g_341.s3", print_hash_value);
    transparent_crc(p_488->g_341.s4, "p_488->g_341.s4", print_hash_value);
    transparent_crc(p_488->g_341.s5, "p_488->g_341.s5", print_hash_value);
    transparent_crc(p_488->g_341.s6, "p_488->g_341.s6", print_hash_value);
    transparent_crc(p_488->g_341.s7, "p_488->g_341.s7", print_hash_value);
    transparent_crc(p_488->g_341.s8, "p_488->g_341.s8", print_hash_value);
    transparent_crc(p_488->g_341.s9, "p_488->g_341.s9", print_hash_value);
    transparent_crc(p_488->g_341.sa, "p_488->g_341.sa", print_hash_value);
    transparent_crc(p_488->g_341.sb, "p_488->g_341.sb", print_hash_value);
    transparent_crc(p_488->g_341.sc, "p_488->g_341.sc", print_hash_value);
    transparent_crc(p_488->g_341.sd, "p_488->g_341.sd", print_hash_value);
    transparent_crc(p_488->g_341.se, "p_488->g_341.se", print_hash_value);
    transparent_crc(p_488->g_341.sf, "p_488->g_341.sf", print_hash_value);
    transparent_crc(p_488->g_369, "p_488->g_369", print_hash_value);
    transparent_crc(p_488->g_378.f0, "p_488->g_378.f0", print_hash_value);
    transparent_crc(p_488->g_378.f1, "p_488->g_378.f1", print_hash_value);
    transparent_crc(p_488->g_378.f2, "p_488->g_378.f2", print_hash_value);
    transparent_crc(p_488->g_379.f0, "p_488->g_379.f0", print_hash_value);
    transparent_crc(p_488->g_379.f1, "p_488->g_379.f1", print_hash_value);
    transparent_crc(p_488->g_379.f2, "p_488->g_379.f2", print_hash_value);
    transparent_crc(p_488->g_409, "p_488->g_409", print_hash_value);
    transparent_crc(p_488->g_412, "p_488->g_412", print_hash_value);
    transparent_crc(p_488->g_415.f0, "p_488->g_415.f0", print_hash_value);
    transparent_crc(p_488->g_415.f1, "p_488->g_415.f1", print_hash_value);
    transparent_crc(p_488->g_415.f2, "p_488->g_415.f2", print_hash_value);
    transparent_crc(p_488->g_424.x, "p_488->g_424.x", print_hash_value);
    transparent_crc(p_488->g_424.y, "p_488->g_424.y", print_hash_value);
    transparent_crc(p_488->g_454, "p_488->g_454", print_hash_value);
    transparent_crc(p_488->g_469, "p_488->g_469", print_hash_value);
    transparent_crc(p_488->v_collective, "p_488->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 20; i++)
            transparent_crc(p_488->l_special_values[i], "p_488->l_special_values[i]", print_hash_value);
    transparent_crc(p_488->l_comm_values[get_linear_local_id()], "p_488->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_488->g_comm_values[get_linear_group_id() * 25 + get_linear_local_id()], "p_488->g_comm_values[get_linear_group_id() * 25 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
