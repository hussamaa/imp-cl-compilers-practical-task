// --atomics 19 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 91,29,2 -l 91,1,1
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

__constant uint32_t permutations[10][91] = {
{69,11,22,61,36,83,13,87,90,45,53,7,73,47,9,62,66,60,24,26,59,21,43,28,25,34,55,74,23,17,76,41,78,42,6,67,4,29,32,64,49,88,89,84,2,30,82,50,58,27,77,52,81,46,31,0,33,86,56,16,18,57,72,3,80,48,35,40,5,44,20,12,71,14,37,1,38,85,8,75,79,68,54,65,51,63,10,19,15,70,39}, // permutation 0
{19,8,64,23,59,35,17,42,37,0,70,7,28,83,11,79,53,33,25,43,85,45,55,20,66,50,67,72,77,30,56,16,76,34,21,84,29,36,88,27,63,52,32,73,51,54,24,22,74,6,68,49,47,15,86,48,71,39,89,5,26,46,78,31,1,3,62,90,12,65,40,13,61,2,69,82,38,87,10,60,9,75,14,81,58,44,4,57,41,80,18}, // permutation 1
{70,12,22,6,68,72,63,14,8,47,23,0,19,13,46,84,38,67,1,85,65,88,58,20,87,36,60,83,73,33,16,34,80,27,41,32,9,3,66,35,15,90,53,31,64,77,48,78,30,55,82,51,26,59,21,18,25,61,89,79,49,40,42,45,43,75,17,74,5,71,52,69,86,7,81,28,62,39,4,54,37,24,10,76,2,44,50,29,11,56,57}, // permutation 2
{47,4,24,41,86,12,5,71,49,36,48,0,39,40,9,82,87,38,73,37,44,20,33,15,32,2,50,22,88,13,68,57,58,21,30,43,45,80,81,17,26,69,16,90,31,10,6,52,8,28,60,74,14,76,85,18,19,29,46,75,78,70,34,55,67,83,66,77,7,63,3,89,79,54,62,51,72,65,53,59,84,25,27,1,35,64,42,11,56,23,61}, // permutation 3
{72,24,6,2,13,43,62,59,47,46,57,16,41,69,36,53,17,74,12,29,50,58,85,37,15,44,52,19,79,73,64,80,78,60,45,28,75,55,20,22,63,56,34,33,38,90,76,51,70,11,9,8,89,48,66,4,84,21,68,61,82,32,3,39,83,14,5,7,49,35,0,65,86,23,87,31,40,67,27,26,42,25,54,88,71,77,10,1,30,81,18}, // permutation 4
{79,46,78,59,47,11,86,49,39,22,26,69,68,84,3,35,36,51,57,55,41,67,80,23,42,87,60,44,65,18,20,10,8,40,19,0,25,27,64,29,77,6,90,53,45,74,81,12,58,82,50,15,38,88,70,7,34,9,62,16,48,75,63,17,37,54,32,33,5,21,28,66,52,71,73,31,85,30,43,1,14,4,24,83,76,61,56,13,72,89,2}, // permutation 5
{28,75,13,22,78,85,71,46,2,25,81,87,48,35,54,5,18,58,76,90,68,40,34,47,43,62,84,52,24,56,11,15,44,88,64,83,8,57,74,32,4,36,45,59,60,70,61,20,49,55,29,7,31,17,9,6,10,37,14,38,50,73,86,51,3,72,19,82,65,1,80,30,12,79,39,0,53,33,23,67,21,69,89,66,26,63,77,27,42,16,41}, // permutation 6
{54,21,53,38,22,18,34,5,42,10,72,28,67,87,75,20,17,43,32,45,89,50,26,49,41,16,24,78,82,88,73,84,59,3,4,70,31,56,33,27,12,85,2,36,0,15,47,52,74,23,90,81,80,46,40,19,39,9,30,51,6,37,60,83,14,66,57,64,13,35,8,55,77,86,44,61,68,62,29,11,65,71,48,63,1,79,69,25,76,7,58}, // permutation 7
{25,41,64,28,32,58,16,17,88,14,47,44,90,63,46,10,0,15,57,53,35,79,78,87,52,1,81,62,61,18,73,5,60,48,67,65,86,33,38,26,30,22,66,50,36,71,70,23,82,45,13,72,39,55,8,74,31,6,77,9,56,27,29,37,24,11,7,34,89,83,75,84,12,49,3,69,51,54,85,80,20,21,4,68,43,40,42,19,59,76,2}, // permutation 8
{51,23,83,44,55,10,57,16,36,50,62,15,61,69,4,77,90,34,30,32,28,43,9,18,17,75,13,59,46,68,63,40,2,14,87,52,86,80,31,38,48,78,60,24,19,7,21,5,56,26,66,73,71,54,11,72,74,8,41,82,49,85,79,64,0,67,39,25,33,58,1,45,20,3,81,35,89,42,37,65,27,76,47,29,22,12,70,88,6,53,84} // permutation 9
};

// Seed: 3313879944

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint64_t  f0;
   uint32_t  f1;
   uint32_t  f2;
   volatile uint64_t  f3;
};

union U1 {
   uint16_t  f0;
};

struct S2 {
    VECTOR(int32_t, 2) g_8;
    VECTOR(uint64_t, 16) g_18;
    int32_t g_27;
    uint64_t *g_37;
    int32_t g_62[8][2][7];
    int32_t *g_64[5];
    VECTOR(int64_t, 2) g_100;
    volatile VECTOR(int64_t, 2) g_115;
    VECTOR(uint64_t, 4) g_119;
    uint64_t g_130;
    uint64_t g_135;
    int32_t * volatile g_183;
    volatile int64_t g_187;
    VECTOR(uint8_t, 2) g_200;
    uint64_t g_226[2];
    volatile VECTOR(uint8_t, 4) g_229;
    int16_t g_235;
    int32_t g_248[10];
    int32_t * volatile g_247[2][4][6];
    int32_t * volatile g_249;
    uint32_t g_251;
    uint64_t g_252;
    union U0 g_255;
    int8_t g_282[7][10][3];
    int32_t g_291[5][1];
    VECTOR(uint8_t, 16) g_293;
    int16_t g_298;
    volatile VECTOR(uint64_t, 2) g_328;
    volatile VECTOR(uint8_t, 16) g_339;
    volatile VECTOR(int8_t, 2) g_348;
    int16_t g_358;
    VECTOR(int32_t, 2) g_379;
    int32_t ** volatile g_389;
    int32_t *g_438[10];
    volatile int64_t * volatile g_440;
    volatile int64_t * volatile *g_439;
    volatile VECTOR(int64_t, 2) g_441;
    uint64_t *g_446;
    int32_t g_449;
    VECTOR(uint16_t, 4) g_468;
    union U0 g_482;
    union U0 *g_481;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int16_t  func_1(struct S2 * p_490);
int32_t * func_2(int32_t  p_3, struct S2 * p_490);
int32_t  func_4(int32_t * p_5, int32_t  p_6, struct S2 * p_490);
uint32_t  func_11(int32_t * p_12, struct S2 * p_490);
int8_t  func_15(uint64_t  p_16, struct S2 * p_490);
int16_t  func_30(uint64_t * p_31, uint64_t * p_32, uint64_t * p_33, int32_t * p_34, int32_t  p_35, struct S2 * p_490);
int32_t * func_38(uint16_t  p_39, uint64_t  p_40, uint64_t * p_41, int8_t  p_42, uint64_t * p_43, struct S2 * p_490);
uint64_t  func_44(uint64_t * p_45, struct S2 * p_490);
uint64_t * func_46(int16_t  p_47, uint64_t * p_48, uint64_t * p_49, struct S2 * p_490);
int16_t  func_50(uint32_t  p_51, int16_t  p_52, int64_t  p_53, struct S2 * p_490);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_490->g_8 p_490->g_18 p_490->g_27 p_490->g_37 p_490->g_comm_values p_490->l_comm_values p_490->g_62 p_490->g_100 p_490->g_135 p_490->g_187 p_490->g_119 p_490->g_115 p_490->g_130 p_490->g_200 p_490->g_249 p_490->g_248 p_490->g_235 p_490->g_252 p_490->g_291 p_490->g_255.f0 p_490->g_328 p_490->g_339 p_490->g_348 p_490->g_358 p_490->g_389 p_490->g_439 p_490->g_449 p_490->g_293 p_490->g_282
 * writes: p_490->g_18 p_490->g_8 p_490->g_27 p_490->g_62 p_490->g_64 p_490->g_135 p_490->g_100 p_490->g_130 p_490->g_226 p_490->g_248 p_490->g_251 p_490->g_252 p_490->g_282 p_490->g_291 p_490->g_293 p_490->g_298 p_490->g_235 p_490->g_119 p_490->g_37 p_490->g_255.f2 p_490->g_438 p_490->g_446 p_490->g_449 p_490->g_468
 */
int16_t  func_1(struct S2 * p_490)
{ /* block id: 4 */
    int32_t *l_7 = (void*)0;
    uint64_t *l_17 = (void*)0;
    uint64_t *l_19[3];
    int8_t *l_281 = &p_490->g_282[5][4][1];
    int64_t *l_286 = (void*)0;
    int64_t **l_285 = &l_286;
    uint8_t *l_292 = (void*)0;
    uint8_t *l_294 = (void*)0;
    uint8_t *l_295 = (void*)0;
    uint8_t *l_296 = (void*)0;
    int16_t *l_297 = &p_490->g_298;
    int32_t l_299 = 5L;
    int32_t *l_488[6];
    uint32_t l_489 = 4294967295UL;
    int i;
    for (i = 0; i < 3; i++)
        l_19[i] = (void*)0;
    for (i = 0; i < 6; i++)
        l_488[i] = (void*)0;
    (*p_490->g_389) = func_2(func_4(l_7, ((safe_div_func_uint32_t_u_u(func_11(((safe_add_func_int64_t_s_s((((*l_281) = func_15((p_490->g_18.sc |= p_490->g_8.y), p_490)) <= ((p_490->g_235 < (safe_add_func_uint64_t_u_u(((l_285 != (void*)0) && ((((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((((p_490->g_293.sf = (p_490->g_291[2][0] = 0x2EL)) , ((*l_297) = p_490->g_291[2][0])) == (((p_490->g_255.f0 < p_490->g_255.f0) | (-7L)) != p_490->g_200.x)) | (-8L)) , 255UL), p_490->g_235)), 0UL)) > p_490->g_200.y) > 0x026383328BE9F7AAL) >= 0xA1L)), (-1L)))) , l_299)), p_490->g_200.y)) , &p_490->g_291[2][0]), p_490), l_299)) , (*p_490->g_249)), p_490), p_490);
    l_489 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x72960468L, (-1L))).xxxx)).w;
    return p_490->g_135;
}


/* ------------------------------------------ */
/* 
 * reads : p_490->g_130 p_490->g_235 p_490->g_389 p_490->g_439 p_490->g_449 p_490->g_293 p_490->g_37 p_490->g_252 p_490->g_282 p_490->g_135 p_490->g_187
 * writes: p_490->g_130 p_490->g_37 p_490->g_64 p_490->g_255.f2 p_490->g_438 p_490->g_446 p_490->g_449 p_490->g_282 p_490->g_468
 */
int32_t * func_2(int32_t  p_3, struct S2 * p_490)
{ /* block id: 139 */
    VECTOR(uint16_t, 8) l_368 = (VECTOR(uint16_t, 8))(0xD110L, (VECTOR(uint16_t, 4))(0xD110L, (VECTOR(uint16_t, 2))(0xD110L, 1UL), 1UL), 1UL, 0xD110L, 1UL);
    VECTOR(int16_t, 16) l_374 = (VECTOR(int16_t, 16))(0x1F4AL, (VECTOR(int16_t, 4))(0x1F4AL, (VECTOR(int16_t, 2))(0x1F4AL, 0L), 0L), 0L, 0x1F4AL, 0L, (VECTOR(int16_t, 2))(0x1F4AL, 0L), (VECTOR(int16_t, 2))(0x1F4AL, 0L), 0x1F4AL, 0L, 0x1F4AL, 0L);
    VECTOR(uint16_t, 16) l_377 = (VECTOR(uint16_t, 16))(0x8380L, (VECTOR(uint16_t, 4))(0x8380L, (VECTOR(uint16_t, 2))(0x8380L, 4UL), 4UL), 4UL, 0x8380L, 4UL, (VECTOR(uint16_t, 2))(0x8380L, 4UL), (VECTOR(uint16_t, 2))(0x8380L, 4UL), 0x8380L, 4UL, 0x8380L, 4UL);
    VECTOR(int16_t, 16) l_378 = (VECTOR(int16_t, 16))(0x493EL, (VECTOR(int16_t, 4))(0x493EL, (VECTOR(int16_t, 2))(0x493EL, 1L), 1L), 1L, 0x493EL, 1L, (VECTOR(int16_t, 2))(0x493EL, 1L), (VECTOR(int16_t, 2))(0x493EL, 1L), 0x493EL, 1L, 0x493EL, 1L);
    int32_t **l_383 = (void*)0;
    int8_t *l_387 = &p_490->g_282[5][4][1];
    uint32_t l_388 = 4294967295UL;
    uint64_t *l_442 = &p_490->g_130;
    int i;
    for (p_490->g_130 = (-30); (p_490->g_130 != 36); p_490->g_130 = safe_add_func_int32_t_s_s(p_490->g_130, 7))
    { /* block id: 142 */
        uint64_t **l_365 = &p_490->g_37;
        VECTOR(int16_t, 4) l_375 = (VECTOR(int16_t, 4))(0x4965L, (VECTOR(int16_t, 2))(0x4965L, 0x7B92L), 0x7B92L);
        VECTOR(int16_t, 16) l_376 = (VECTOR(int16_t, 16))(0x6184L, (VECTOR(int16_t, 4))(0x6184L, (VECTOR(int16_t, 2))(0x6184L, 0L), 0L), 0L, 0x6184L, 0L, (VECTOR(int16_t, 2))(0x6184L, 0L), (VECTOR(int16_t, 2))(0x6184L, 0L), 0x6184L, 0L, 0x6184L, 0L);
        int32_t *l_382 = &p_490->g_248[4];
        uint32_t *l_384 = &p_490->g_251;
        int8_t *l_386 = &p_490->g_282[5][4][1];
        int8_t **l_385[4][9] = {{&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386},{&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386},{&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386},{&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386,&l_386}};
        int32_t **l_390 = &l_382;
        int i, j;
        (*p_490->g_389) = func_38((safe_mod_func_uint32_t_u_u(((~(+(safe_rshift_func_uint8_t_u_u(((((*l_365) = &p_490->g_135) == (((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_368.s44756242)).s75)).hi, (safe_unary_minus_func_int32_t_s(((safe_lshift_func_uint8_t_u_s(FAKE_DIVERGE(p_490->local_1_offset, get_local_id(1), 10), 6)) | (safe_div_func_int32_t_s_s(((VECTOR(int32_t, 8))(0x6341A81CL, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(l_374.s338c)).hi, ((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_375.yxxwzzywyxzwxxyz)).s1e)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_376.s181a)))).odd)))))).xxxx)).hi, ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 2))(l_377.sec)).yxxxxxxxyyyyyyxy, ((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 16))(l_378.s3af719016231c7cb)).s9245))).yzzyxzxyxxzxxwyx))).se1))), ((VECTOR(int32_t, 2))(p_490->g_379.xy)), ((*l_382) &= (~(safe_rshift_func_uint16_t_u_u(p_490->g_229.y, 2)))), 2L, 0x715F7D89L)).s7, ((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 8))(0xF1BBF347L, 4294967295UL, ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((*l_384) = (((p_490->g_18.s7 , l_383) != (void*)0) , p_490->g_100.x)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0xAC064323L, 4294967286UL)), 1UL, 0x8FA41F7FL)), 0xF8C053E0L, 9UL, (p_490->g_62[5][0][5] & (l_388 |= (((l_387 = &p_490->g_282[4][9][0]) != (void*)0) & p_3))), 4294967295UL, ((VECTOR(uint32_t, 2))(0x9FB11BDFL)), 1UL, p_3, 5UL, 0x5BB8A015L, 0x7A54CFC5L)).s64)).xyxx, ((VECTOR(uint32_t, 4))(0x3A02C0E1L))))), 1UL, 9UL)).odd, ((VECTOR(uint32_t, 4))(0UL)), ((VECTOR(uint32_t, 4))(0x30573B80L))))).xzzxwzxy)).s17, ((VECTOR(uint32_t, 2))(4UL))))).yxxxxyxxyyxxyxxx, ((VECTOR(uint32_t, 16))(4294967292UL)), ((VECTOR(uint32_t, 16))(0x3333A8F2L))))).scda6, ((VECTOR(uint32_t, 4))(0x971AE0B6L)), ((VECTOR(uint32_t, 4))(4294967295UL))))).x))))))) > 1L) , &p_490->g_252)) | p_490->g_235), 4)))) != l_378.sb), p_3)), p_3, &p_490->g_135, p_3, &p_490->g_252, p_490);
        (*l_390) = l_382;
        for (p_490->g_255.f2 = 0; (p_490->g_255.f2 <= 27); p_490->g_255.f2 = safe_add_func_uint64_t_u_u(p_490->g_255.f2, 2))
        { /* block id: 152 */
            uint64_t *l_445 = &p_490->g_252;
            int32_t l_447 = 1L;
            uint16_t *l_448[5][5][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
            int64_t l_450 = 0L;
            int32_t l_483 = 0x614FD5FCL;
            uint8_t l_484 = 255UL;
            int32_t l_485 = 0L;
            union U0 *l_486 = &p_490->g_482;
            int i, j, k;
            if ((atomic_inc(&p_490->g_atomic_input[19 * get_linear_group_id() + 17]) == 7))
            { /* block id: 154 */
                uint64_t l_393 = 18446744073709551615UL;
                int64_t l_394[2][7] = {{0x7E4930D67B93BDDCL,0L,1L,0L,0x7E4930D67B93BDDCL,0x7E4930D67B93BDDCL,0L},{0x7E4930D67B93BDDCL,0L,1L,0L,0x7E4930D67B93BDDCL,0x7E4930D67B93BDDCL,0L}};
                VECTOR(int32_t, 16) l_395 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x2BD2EB12L), 0x2BD2EB12L), 0x2BD2EB12L, 1L, 0x2BD2EB12L, (VECTOR(int32_t, 2))(1L, 0x2BD2EB12L), (VECTOR(int32_t, 2))(1L, 0x2BD2EB12L), 1L, 0x2BD2EB12L, 1L, 0x2BD2EB12L);
                int i, j;
                l_394[1][3] ^= l_393;
                if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_395.s99a8)).xwwzwzyy)))).s4514620474466502)).s8)
                { /* block id: 156 */
                    VECTOR(int8_t, 2) l_396 = (VECTOR(int8_t, 2))(0x7AL, 0x28L);
                    int32_t l_397[3][9] = {{0x777CCA38L,(-2L),0x11EBED9FL,0x17740730L,(-2L),0x17740730L,0x11EBED9FL,(-2L),0x777CCA38L},{0x777CCA38L,(-2L),0x11EBED9FL,0x17740730L,(-2L),0x17740730L,0x11EBED9FL,(-2L),0x777CCA38L},{0x777CCA38L,(-2L),0x11EBED9FL,0x17740730L,(-2L),0x17740730L,0x11EBED9FL,(-2L),0x777CCA38L}};
                    int16_t l_398 = 0L;
                    int32_t l_399[1];
                    uint16_t l_400 = 65535UL;
                    VECTOR(int32_t, 16) l_403 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x4E70A3C5L), 0x4E70A3C5L), 0x4E70A3C5L, (-6L), 0x4E70A3C5L, (VECTOR(int32_t, 2))((-6L), 0x4E70A3C5L), (VECTOR(int32_t, 2))((-6L), 0x4E70A3C5L), (-6L), 0x4E70A3C5L, (-6L), 0x4E70A3C5L);
                    VECTOR(int32_t, 8) l_404 = (VECTOR(int32_t, 8))(0x0B85385DL, (VECTOR(int32_t, 4))(0x0B85385DL, (VECTOR(int32_t, 2))(0x0B85385DL, (-10L)), (-10L)), (-10L), 0x0B85385DL, (-10L));
                    uint8_t l_405 = 255UL;
                    VECTOR(int32_t, 16) l_406 = (VECTOR(int32_t, 16))((-3L), (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x682C8ED1L), 0x682C8ED1L), 0x682C8ED1L, (-3L), 0x682C8ED1L, (VECTOR(int32_t, 2))((-3L), 0x682C8ED1L), (VECTOR(int32_t, 2))((-3L), 0x682C8ED1L), (-3L), 0x682C8ED1L, (-3L), 0x682C8ED1L);
                    int8_t l_407 = 0x66L;
                    VECTOR(int32_t, 8) l_415 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x59A64EC0L), 0x59A64EC0L), 0x59A64EC0L, 8L, 0x59A64EC0L);
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_399[i] = 0L;
                    l_400--;
                    if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(1L, (-6L))), ((VECTOR(int32_t, 8))(l_403.s7d527129)).s33))))).yxyxxxxx)).s72, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x00C89723L, 0x22A1337FL)).lo, 0x46EC1913L, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(l_404.s13640500)), (int32_t)(l_403.s6 = 0x76B2A604L)))), ((VECTOR(int32_t, 4))(l_405, (-7L), 0x2B0465F9L, 0L)), 0x637B559EL, 0L)).s58))).yxxy, (int32_t)((VECTOR(int32_t, 2))(l_406.s31)).even, (int32_t)l_407))).even)).odd)
                    { /* block id: 159 */
                        uint32_t l_408 = 0UL;
                        l_406.sc |= l_408;
                    }
                    else
                    { /* block id: 161 */
                        uint8_t l_409[5][3][8] = {{{0x1AL,0x6EL,0x40L,8UL,255UL,0x1AL,8UL,2UL},{0x1AL,0x6EL,0x40L,8UL,255UL,0x1AL,8UL,2UL},{0x1AL,0x6EL,0x40L,8UL,255UL,0x1AL,8UL,2UL}},{{0x1AL,0x6EL,0x40L,8UL,255UL,0x1AL,8UL,2UL},{0x1AL,0x6EL,0x40L,8UL,255UL,0x1AL,8UL,2UL},{0x1AL,0x6EL,0x40L,8UL,255UL,0x1AL,8UL,2UL}},{{0x1AL,0x6EL,0x40L,8UL,255UL,0x1AL,8UL,2UL},{0x1AL,0x6EL,0x40L,8UL,255UL,0x1AL,8UL,2UL},{0x1AL,0x6EL,0x40L,8UL,255UL,0x1AL,8UL,2UL}},{{0x1AL,0x6EL,0x40L,8UL,255UL,0x1AL,8UL,2UL},{0x1AL,0x6EL,0x40L,8UL,255UL,0x1AL,8UL,2UL},{0x1AL,0x6EL,0x40L,8UL,255UL,0x1AL,8UL,2UL}},{{0x1AL,0x6EL,0x40L,8UL,255UL,0x1AL,8UL,2UL},{0x1AL,0x6EL,0x40L,8UL,255UL,0x1AL,8UL,2UL},{0x1AL,0x6EL,0x40L,8UL,255UL,0x1AL,8UL,2UL}}};
                        int16_t l_412 = 0x1A2FL;
                        int64_t l_413 = 0x0757CD0F41F11E86L;
                        uint32_t l_414 = 0UL;
                        int i, j, k;
                        l_409[4][1][1]--;
                        l_399[0] = (l_404.s3 = (l_414 ^= (l_412 , l_413)));
                    }
                    if (l_415.s2)
                    { /* block id: 167 */
                        int32_t *l_416[5];
                        int8_t l_417 = (-3L);
                        int i;
                        for (i = 0; i < 5; i++)
                            l_416[i] = (void*)0;
                        l_416[4] = (void*)0;
                        l_403.s8 = l_417;
                    }
                    else
                    { /* block id: 170 */
                        int16_t l_418 = 0x009EL;
                        uint64_t l_419[8][4] = {{18446744073709551606UL,18446744073709551606UL,0UL,18446744073709551606UL},{18446744073709551606UL,18446744073709551606UL,0UL,18446744073709551606UL},{18446744073709551606UL,18446744073709551606UL,0UL,18446744073709551606UL},{18446744073709551606UL,18446744073709551606UL,0UL,18446744073709551606UL},{18446744073709551606UL,18446744073709551606UL,0UL,18446744073709551606UL},{18446744073709551606UL,18446744073709551606UL,0UL,18446744073709551606UL},{18446744073709551606UL,18446744073709551606UL,0UL,18446744073709551606UL},{18446744073709551606UL,18446744073709551606UL,0UL,18446744073709551606UL}};
                        int i, j;
                        l_419[5][0]++;
                    }
                }
                else
                { /* block id: 173 */
                    uint16_t l_422 = 0xD9E2L;
                    int64_t l_423 = (-10L);
                    int8_t l_424 = 1L;
                    l_424 &= (l_422 , (l_395.s5 = l_423));
                    for (l_424 = (-20); (l_424 < 1); l_424 = safe_add_func_int8_t_s_s(l_424, 9))
                    { /* block id: 178 */
                        uint16_t l_427[7][8][4] = {{{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL}},{{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL}},{{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL}},{{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL}},{{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL}},{{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL}},{{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL},{1UL,0xE240L,2UL,65529UL}}};
                        int32_t l_431 = 0x30ECC25DL;
                        int32_t *l_430 = &l_431;
                        int32_t *l_432 = &l_431;
                        int i, j, k;
                        l_432 = ((--l_427[5][4][3]) , l_430);
                    }
                    for (l_424 = (-25); (l_424 <= (-5)); l_424++)
                    { /* block id: 184 */
                        int32_t l_436 = 0L;
                        int32_t *l_435 = &l_436;
                        int32_t *l_437 = &l_436;
                        l_435 = (void*)0;
                        l_435 = l_437;
                    }
                }
                unsigned int result = 0;
                result += l_393;
                int l_394_i0, l_394_i1;
                for (l_394_i0 = 0; l_394_i0 < 2; l_394_i0++) {
                    for (l_394_i1 = 0; l_394_i1 < 7; l_394_i1++) {
                        result += l_394[l_394_i0][l_394_i1];
                    }
                }
                result += l_395.sf;
                result += l_395.se;
                result += l_395.sd;
                result += l_395.sc;
                result += l_395.sb;
                result += l_395.sa;
                result += l_395.s9;
                result += l_395.s8;
                result += l_395.s7;
                result += l_395.s6;
                result += l_395.s5;
                result += l_395.s4;
                result += l_395.s3;
                result += l_395.s2;
                result += l_395.s1;
                result += l_395.s0;
                atomic_add(&p_490->g_special_values[19 * get_linear_group_id() + 17], result);
            }
            else
            { /* block id: 189 */
                (1 + 1);
            }
            p_490->g_438[8] = &p_3;
            (*l_390) = func_38(p_490->g_235, (p_490->g_439 != (((VECTOR(int64_t, 2))(p_490->g_441.xx)).even , &p_490->g_440)), l_442, (safe_div_func_uint32_t_u_u(0xCA10D532L, p_3)), (p_490->g_446 = ((*l_365) = l_445)), p_490);
            if (((-8L) && (p_490->g_449 = (l_447 , p_3))))
            { /* block id: 197 */
                int32_t l_451 = 0x52976CABL;
                int32_t **l_471 = &p_490->g_64[1];
                l_451 = l_450;
                l_485 ^= (safe_add_func_int16_t_s_s(((p_490->g_468.x = (((*l_386) |= (safe_add_func_uint64_t_u_u((((safe_mod_func_int32_t_s_s((+(safe_mod_func_int64_t_s_s(((safe_mul_func_int8_t_s_s(p_490->g_449, p_3)) > (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 2))(p_490->g_468.xx)).xxxy, ((VECTOR(uint16_t, 16))((safe_mul_func_int16_t_s_s(((((((void*)0 == l_471) , (safe_unary_minus_func_int8_t_s((safe_sub_func_uint32_t_u_u(p_490->g_441.y, ((safe_sub_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u((p_490->g_481 == p_490->g_481), 0x42L)), 0x4767F688L)) >= 0xE292L), p_490->g_255.f0)) , 0x6AF320F0L)))))) , p_3) & l_447) , l_483), p_490->g_251)), 65530UL, ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 8))(0x08C5L)), ((VECTOR(uint16_t, 2))(0UL)), 0x470EL, 2UL)).s870a))).w, l_450)), 1UL)), p_490->g_293.s2))), p_3))), FAKE_DIVERGE(p_490->group_2_offset, get_group_id(2), 10))) && l_483) , l_484), (*p_490->g_37)))) ^ p_490->g_235)) | l_484), 0xCBEEL));
                p_3 = p_3;
            }
            else
            { /* block id: 203 */
                uint64_t *l_487 = &p_490->g_135;
                l_486 = &p_490->g_255;
                (*l_390) = func_38(p_3, p_490->g_135, l_487, p_490->g_187, l_445, p_490);
            }
        }
    }
    p_3 ^= (-4L);
    p_3 = 0x6EC36B18L;
    return &p_490->g_62[3][0][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_490->g_235 p_490->g_291 p_490->g_328 p_490->g_339 p_490->g_62 p_490->g_348 p_490->g_27 p_490->g_248 p_490->g_358 p_490->g_119
 * writes: p_490->g_235 p_490->g_27 p_490->g_291 p_490->g_62 p_490->g_119
 */
int32_t  func_4(int32_t * p_5, int32_t  p_6, struct S2 * p_490)
{ /* block id: 123 */
    int32_t *l_301 = &p_490->g_291[4][0];
    int32_t *l_302 = (void*)0;
    int32_t *l_303 = &p_490->g_62[1][0][3];
    int32_t *l_304 = &p_490->g_248[4];
    int32_t l_305 = 1L;
    int32_t *l_306 = (void*)0;
    int32_t *l_307 = &p_490->g_291[2][0];
    int32_t *l_308 = (void*)0;
    int32_t *l_309 = &p_490->g_27;
    int32_t *l_310 = &p_490->g_62[3][1][3];
    int32_t *l_311 = &p_490->g_291[1][0];
    int32_t *l_312 = &p_490->g_248[4];
    int32_t *l_313[8][10][1] = {{{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]}},{{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]}},{{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]}},{{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]}},{{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]}},{{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]}},{{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]}},{{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]},{&p_490->g_291[2][0]}}};
    uint32_t l_314 = 0x36C680D9L;
    uint16_t l_323 = 0x1508L;
    VECTOR(uint64_t, 2) l_329 = (VECTOR(uint64_t, 2))(3UL, 0x635E4292961265EFL);
    int64_t *l_342 = (void*)0;
    VECTOR(uint32_t, 16) l_347 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x03EC2F4BL), 0x03EC2F4BL), 0x03EC2F4BL, 4294967295UL, 0x03EC2F4BL, (VECTOR(uint32_t, 2))(4294967295UL, 0x03EC2F4BL), (VECTOR(uint32_t, 2))(4294967295UL, 0x03EC2F4BL), 4294967295UL, 0x03EC2F4BL, 4294967295UL, 0x03EC2F4BL);
    VECTOR(int16_t, 2) l_353 = (VECTOR(int16_t, 2))(0x0DCBL, (-1L));
    VECTOR(int8_t, 16) l_354 = (VECTOR(int8_t, 16))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, 5L), 5L), 5L, 0x15L, 5L, (VECTOR(int8_t, 2))(0x15L, 5L), (VECTOR(int8_t, 2))(0x15L, 5L), 0x15L, 5L, 0x15L, 5L);
    VECTOR(int64_t, 16) l_355 = (VECTOR(int64_t, 16))(2L, (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, (-8L)), (-8L)), (-8L), 2L, (-8L), (VECTOR(int64_t, 2))(2L, (-8L)), (VECTOR(int64_t, 2))(2L, (-8L)), 2L, (-8L), 2L, (-8L));
    VECTOR(uint32_t, 2) l_356 = (VECTOR(uint32_t, 2))(1UL, 0x7081F3FBL);
    uint16_t *l_357 = &l_323;
    int i, j, k;
    l_314++;
    for (p_490->g_235 = 0; (p_490->g_235 >= (-9)); p_490->g_235--)
    { /* block id: 127 */
        uint16_t l_319 = 0x2149L;
        int16_t *l_320 = &p_490->g_235;
        int16_t *l_322 = &p_490->g_298;
        int16_t **l_321 = &l_322;
        VECTOR(uint8_t, 8) l_336 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 5UL), 5UL), 5UL, 1UL, 5UL);
        VECTOR(uint8_t, 16) l_337 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x39L), 0x39L), 0x39L, 1UL, 0x39L, (VECTOR(uint8_t, 2))(1UL, 0x39L), (VECTOR(uint8_t, 2))(1UL, 0x39L), 1UL, 0x39L, 1UL, 0x39L);
        VECTOR(uint8_t, 8) l_338 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 2UL), 2UL), 2UL, 1UL, 2UL);
        int i;
        (*l_309) = l_319;
        (*l_301) &= (l_320 == (FAKE_DIVERGE(p_490->global_1_offset, get_global_id(1), 10) , ((*l_321) = &p_490->g_235)));
        if (l_323)
            break;
        (*l_309) = ((VECTOR(int32_t, 16))((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(p_490->g_328.yyyx)).yyzxzxwxwzzywwwy)).sea, ((VECTOR(uint64_t, 2))(18446744073709551612UL, 0x991DED383B883EA3L)), ((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 8))(l_329.yxyxxyxy)).s2441507164162743, ((VECTOR(uint64_t, 4))((safe_mul_func_int8_t_s_s(0x13L, ((0xC306L && ((safe_rshift_func_uint8_t_u_u(p_6, 7)) > p_6)) && (1L != (((safe_add_func_uint8_t_u_u((p_6 ^ (0x9BACL || p_6)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_336.s76)).xyxyxxxxxyxxxyxy)).sab, ((VECTOR(uint8_t, 16))(l_337.s7cfa197c6ef26ca4)).s34, ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(l_338.s60)).xyyx, ((VECTOR(uint8_t, 2))(p_490->g_339.sfc)).yxxy, ((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))((((((safe_mul_func_uint8_t_u_u((*l_310), l_338.s7)) , (void*)0) == l_342) , &p_490->g_226[0]) == l_342), ((VECTOR(uint8_t, 8))(0xCCL)), 0xC9L, 252UL, 1UL, 255UL, ((VECTOR(uint8_t, 2))(0x34L)), 0x45L)))), ((VECTOR(uint8_t, 16))(255UL))))).s67a7))).hi))), 0x36L, 9UL)).zwxxzywxxyzyzxzz)))).s0)) > p_6) >= 0x7404803EL))))), ((VECTOR(uint64_t, 2))(18446744073709551606UL)), 18446744073709551606UL)).zwwzzyzwyyxzyxzy))).sf3a3)))))).xwxyzwzw, ((VECTOR(uint64_t, 8))(18446744073709551611UL)), ((VECTOR(uint64_t, 8))(0x8DD87A80F3679650L))))).s11))).odd > l_319) | (*l_311)), p_6)), FAKE_DIVERGE(p_490->local_2_offset, get_local_id(2), 10))), 0x03AC8FB8L, (*l_310), p_6, 0L, 0x3B65AF1EL, 2L, 0L, ((VECTOR(int32_t, 4))(5L)), ((VECTOR(int32_t, 4))((-1L))))).s9;
    }
    (*l_301) |= (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_347.sa8d89532)).even)).z, (p_6 | ((VECTOR(int8_t, 8))(p_490->g_348.xxxyxyxy)).s4))), (0x5B47E454DC38B53EL || (p_490->g_119.z &= ((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(mul_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0xD11FC3DF9600C165L, 7UL)).yyxxxxxyxyyyyyxx)).sa329, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_353.xyyy)).zwwzwyxy)).s0, ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(l_354.s9e81a983)).s7107740060344524, ((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 4))((FAKE_DIVERGE(p_490->global_2_offset, get_global_id(2), 10) >= ((l_342 == (p_6 , l_342)) != ((((VECTOR(int64_t, 4))(l_355.s1d7d)).w || 2UL) == ((*l_309) , (((*l_357) = (((VECTOR(uint32_t, 8))(l_356.xyxxyxyy)).s1 & ((((*l_310) &= (0x0B7B97B2L & 5UL)) , 0x72L) & 255UL))) || p_6))))), (*l_309), 246UL, 253UL)).yyzxyxwx, ((VECTOR(uint8_t, 8))(5UL))))).s7270710665720052))).even, ((VECTOR(int16_t, 8))(0x56BBL))))).s5)), (*l_304))), p_490->g_358, 18446744073709551615UL, 0x039433C63A252C6BL))))))))), ((VECTOR(uint64_t, 4))(18446744073709551608UL))))), p_490->g_358, p_6, ((VECTOR(uint64_t, 4))(0x373AC1E6FCAB2F0AL)), (*l_310), 1UL, 0UL, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), 0x73D86DDF92009A47L)).sb9c6)), ((VECTOR(uint64_t, 4))(0UL))))).z))));
    return (*l_309);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_11(int32_t * p_12, struct S2 * p_490)
{ /* block id: 121 */
    uint32_t l_300 = 0xA020E8A2L;
    return l_300;
}


/* ------------------------------------------ */
/* 
 * reads : p_490->g_8 p_490->g_27 p_490->g_37 p_490->g_comm_values p_490->l_comm_values p_490->g_18 p_490->g_62 p_490->g_100 p_490->g_135 p_490->g_187 p_490->g_119 p_490->g_115 p_490->g_130 p_490->g_200 p_490->g_249 p_490->g_248 p_490->g_235 p_490->g_252
 * writes: p_490->g_8 p_490->g_27 p_490->g_62 p_490->g_64 p_490->g_135 p_490->g_100 p_490->g_18 p_490->g_130 p_490->g_226 p_490->g_248 p_490->g_251 p_490->g_252
 */
int8_t  func_15(uint64_t  p_16, struct S2 * p_490)
{ /* block id: 6 */
    uint16_t l_60[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    uint64_t *l_191[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint64_t *l_227 = (void*)0;
    int i, j;
    for (p_16 = 0; (p_16 <= 36); p_16 = safe_add_func_int64_t_s_s(p_16, 3))
    { /* block id: 9 */
        int32_t *l_24 = (void*)0;
        int32_t *l_25 = (void*)0;
        int32_t *l_26 = &p_490->g_27;
        uint64_t *l_36 = (void*)0;
        uint64_t **l_189 = (void*)0;
        uint64_t **l_190 = (void*)0;
        uint64_t *l_225 = &p_490->g_226[1];
        uint32_t *l_250 = &p_490->g_251;
        union U0 *l_254 = &p_490->g_255;
        union U0 **l_253 = &l_254;
        p_490->g_252 |= (safe_div_func_int32_t_s_s(((*l_26) |= (p_490->g_8.x &= p_16)), ((*l_250) = (safe_lshift_func_uint16_t_u_s(0x4F16L, func_30(l_36, p_490->g_37, l_36, func_38(p_490->g_comm_values[p_490->tid], ((*l_225) = func_44((l_191[0][0] = func_46(func_50(p_490->l_comm_values[(safe_mod_func_uint32_t_u_u(p_490->tid, 91))], ((((((safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s(p_490->g_comm_values[p_490->tid], (safe_lshift_func_uint16_t_u_s(FAKE_DIVERGE(p_490->global_2_offset, get_global_id(2), 10), l_60[2])))), 1)) , p_16) & FAKE_DIVERGE(p_490->local_2_offset, get_local_id(2), 10)) == l_60[5]) < FAKE_DIVERGE(p_490->global_1_offset, get_global_id(1), 10)) || p_16), p_490->g_18.sa, p_490), p_490->g_37, p_490->g_37, p_490)), p_490)), l_227, p_490->g_119.x, p_490->g_37, p_490), p_490->g_200.y, p_490))))));
        (*l_253) = (void*)0;
    }
    if ((atomic_inc(&p_490->g_atomic_input[19 * get_linear_group_id() + 12]) == 5))
    { /* block id: 101 */
        uint32_t l_256 = 1UL;
        int64_t l_257 = 1L;
        if ((l_256 , l_257))
        { /* block id: 102 */
            int8_t l_258 = (-4L);
            int32_t *l_259 = (void*)0;
            l_259 = (l_258 , l_259);
        }
        else
        { /* block id: 104 */
            VECTOR(int8_t, 4) l_260 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x54L), 0x54L);
            VECTOR(int16_t, 16) l_261 = (VECTOR(int16_t, 16))(0x0DBEL, (VECTOR(int16_t, 4))(0x0DBEL, (VECTOR(int16_t, 2))(0x0DBEL, 0x40A8L), 0x40A8L), 0x40A8L, 0x0DBEL, 0x40A8L, (VECTOR(int16_t, 2))(0x0DBEL, 0x40A8L), (VECTOR(int16_t, 2))(0x0DBEL, 0x40A8L), 0x0DBEL, 0x40A8L, 0x0DBEL, 0x40A8L);
            int32_t l_262 = 0x530AE7E3L;
            int8_t l_263[8] = {0x7CL,0x60L,0x7CL,0x7CL,0x60L,0x7CL,0x7CL,0x60L};
            uint32_t l_264 = 4294967295UL;
            int32_t l_267 = 0x69378FC5L;
            uint64_t l_268[2];
            int i;
            for (i = 0; i < 2; i++)
                l_268[i] = 18446744073709551615UL;
            ++l_264;
            if ((l_267 , l_268[0]))
            { /* block id: 106 */
                int32_t l_269[9][5][5] = {{{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L}},{{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L}},{{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L}},{{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L}},{{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L}},{{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L}},{{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L}},{{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L}},{{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L},{9L,0x30E293E5L,0x1228ECA0L,0x520BF0A1L,0x174138C1L}}};
                int32_t l_270[3][8][5] = {{{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L}},{{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L}},{{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L},{0x3A12700EL,0x3A12700EL,0L,1L,0x4B6C45A1L}}};
                uint32_t l_271 = 0UL;
                int16_t l_274[8] = {0x5008L,0x5008L,0x5008L,0x5008L,0x5008L,0x5008L,0x5008L,0x5008L};
                uint32_t l_275[6] = {8UL,0x1C84418AL,8UL,8UL,0x1C84418AL,8UL};
                int i, j, k;
                --l_271;
                --l_275[5];
            }
            else
            { /* block id: 109 */
                uint32_t l_278 = 0xCCA2085EL;
                l_278--;
            }
        }
        unsigned int result = 0;
        result += l_256;
        result += l_257;
        atomic_add(&p_490->g_special_values[19 * get_linear_group_id() + 12], result);
    }
    else
    { /* block id: 113 */
        (1 + 1);
    }
    return l_60[2];
}


/* ------------------------------------------ */
/* 
 * reads : p_490->g_249 p_490->g_248 p_490->g_235
 * writes: p_490->g_62 p_490->g_248
 */
int16_t  func_30(uint64_t * p_31, uint64_t * p_32, uint64_t * p_33, int32_t * p_34, int32_t  p_35, struct S2 * p_490)
{ /* block id: 92 */
    uint8_t l_245 = 0x90L;
    int32_t *l_246 = &p_490->g_62[5][0][5];
    (*p_490->g_249) ^= ((*l_246) = (safe_div_func_uint32_t_u_u(FAKE_DIVERGE(p_490->local_2_offset, get_local_id(2), 10), l_245)));
    return p_490->g_235;
}


/* ------------------------------------------ */
/* 
 * reads : p_490->g_135 p_490->g_229 p_490->g_115 p_490->g_62
 * writes: p_490->g_235
 */
int32_t * func_38(uint16_t  p_39, uint64_t  p_40, uint64_t * p_41, int8_t  p_42, uint64_t * p_43, struct S2 * p_490)
{ /* block id: 88 */
    VECTOR(uint8_t, 2) l_228 = (VECTOR(uint8_t, 2))(4UL, 0xCFL);
    int16_t *l_234 = &p_490->g_235;
    VECTOR(int8_t, 2) l_236 = (VECTOR(int8_t, 2))(0x2BL, 0x22L);
    VECTOR(int8_t, 2) l_237 = (VECTOR(int8_t, 2))(0L, 3L);
    VECTOR(int8_t, 16) l_238 = (VECTOR(int8_t, 16))(0x0FL, (VECTOR(int8_t, 4))(0x0FL, (VECTOR(int8_t, 2))(0x0FL, 0x6AL), 0x6AL), 0x6AL, 0x0FL, 0x6AL, (VECTOR(int8_t, 2))(0x0FL, 0x6AL), (VECTOR(int8_t, 2))(0x0FL, 0x6AL), 0x0FL, 0x6AL, 0x0FL, 0x6AL);
    int32_t *l_241[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t l_242 = (-1L);
    int i;
    l_242 |= ((!(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_228.yxxy)), 0x11L, (p_490->g_135 < l_228.x), ((VECTOR(uint8_t, 4))(p_490->g_229.ywzx)), l_228.y, p_42, (safe_mul_func_uint16_t_u_u((p_39 >= p_490->g_115.y), (GROUP_DIVERGE(0, 1) , ((*l_234) = (~(safe_mod_func_uint8_t_u_u((GROUP_DIVERGE(0, 1) < 0x79L), GROUP_DIVERGE(1, 1)))))))), 253UL, 8UL, 255UL)).s4d75)).w >= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(0x05L, 1L, ((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_236.xy)).yyxxxxyy)))).s11)).yxyyyxyyxyyxxyxy)).sf9f6, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_237.xy)), 0x39L, ((VECTOR(int8_t, 4))(l_238.s9cb6)), (-6L), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(5L, 4L)).hi, ((VECTOR(int8_t, 2))(0x0AL, 0L)), (safe_rshift_func_uint8_t_u_s(p_490->g_62[5][0][5], 5)), 3L, ((VECTOR(int8_t, 2))(0x79L)), 0x00L)).odd)), 2L, 0L, 9L, (-1L))).sdd28))), (-4L), 0x74L)))).s6)) , 0x32AE677EL);
    return l_241[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_490->g_119 p_490->g_200 p_490->g_115 p_490->g_18 p_490->g_130 p_490->g_62
 * writes: p_490->g_18 p_490->g_130
 */
uint64_t  func_44(uint64_t * p_45, struct S2 * p_490)
{ /* block id: 80 */
    uint32_t l_194 = 0UL;
    int32_t l_195 = 3L;
    VECTOR(uint8_t, 16) l_201 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x90L), 0x90L), 0x90L, 1UL, 0x90L, (VECTOR(uint8_t, 2))(1UL, 0x90L), (VECTOR(uint8_t, 2))(1UL, 0x90L), 1UL, 0x90L, 1UL, 0x90L);
    VECTOR(uint8_t, 16) l_202 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x79L), 0x79L), 0x79L, 1UL, 0x79L, (VECTOR(uint8_t, 2))(1UL, 0x79L), (VECTOR(uint8_t, 2))(1UL, 0x79L), 1UL, 0x79L, 1UL, 0x79L);
    union U1 l_210 = {8UL};
    uint64_t *l_211[7];
    int32_t l_214 = 0x0A52FB1AL;
    int32_t l_215 = (-5L);
    int32_t l_216[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    VECTOR(int32_t, 8) l_221 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 9L), 9L), 9L, (-5L), 9L);
    int16_t l_222[3];
    int32_t *l_223[7][5][5] = {{{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215}},{{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215}},{{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215}},{{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215}},{{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215}},{{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215}},{{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215},{&l_215,&l_215,(void*)0,&p_490->g_62[5][0][5],&l_215}}};
    uint32_t l_224 = 4294967293UL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_211[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_222[i] = 1L;
    l_224 = ((safe_rshift_func_int16_t_s_u(((l_195 ^= l_194) >= l_194), p_490->g_119.w)) || (safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 2))(p_490->g_200.xy)), ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 2))(l_201.s11)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_202.s24)))).xyyx)).xwxwwyzx)).odd))))).even)))))))).hi, ((safe_div_func_uint64_t_u_u((p_490->g_115.y < (safe_mod_func_int16_t_s_s((-1L), (safe_unary_minus_func_uint8_t_u((safe_div_func_int16_t_s_s((l_210 , l_201.s9), ((p_490->g_18.sd--) && (--p_490->g_130))))))))), (safe_sub_func_int32_t_s_s((l_216[5] &= ((VECTOR(int32_t, 16))(0x3BF705CBL, 0x5818A974L, ((VECTOR(int32_t, 2))(1L, 1L)), 0x60943D25L, 0x6925B1CEL, 1L, ((VECTOR(int32_t, 8))(l_221.s34045357)), 0L)).sa), l_222[0])))) == (-1L)))), 255UL)));
    return p_490->g_62[5][0][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_490->g_62 p_490->l_comm_values p_490->g_comm_values p_490->g_100 p_490->g_115 p_490->g_18 p_490->g_119 p_490->g_130 p_490->g_135 p_490->g_187
 * writes: p_490->g_62 p_490->g_18 p_490->g_130 p_490->l_comm_values p_490->g_135 p_490->g_64 p_490->g_100
 */
uint64_t * func_46(int16_t  p_47, uint64_t * p_48, uint64_t * p_49, struct S2 * p_490)
{ /* block id: 21 */
    int32_t l_76 = 0x0624A7E6L;
    union U1 l_83 = {0xC78EL};
    int32_t l_96 = 0x6C79296EL;
    VECTOR(uint64_t, 8) l_116 = (VECTOR(uint64_t, 8))(0x48BC0DD118ECCF47L, (VECTOR(uint64_t, 4))(0x48BC0DD118ECCF47L, (VECTOR(uint64_t, 2))(0x48BC0DD118ECCF47L, 0x02F2754ED04B031DL), 0x02F2754ED04B031DL), 0x02F2754ED04B031DL, 0x48BC0DD118ECCF47L, 0x02F2754ED04B031DL);
    int32_t l_128 = (-5L);
    int32_t l_154 = 0x3A556991L;
    int32_t l_156 = 0x6F527235L;
    int32_t l_158 = 1L;
    int32_t l_160 = (-5L);
    int32_t l_161[3][8][2] = {{{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L}},{{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L}},{{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L},{0x4FF01ADFL,1L}}};
    uint64_t *l_188 = (void*)0;
    int i, j, k;
    for (p_47 = (-18); (p_47 == 14); p_47 = safe_add_func_int16_t_s_s(p_47, 8))
    { /* block id: 24 */
        uint32_t l_75 = 0x4177E56DL;
        int32_t *l_84 = &p_490->g_62[7][0][6];
        int32_t *l_87 = &p_490->g_62[5][0][3];
        VECTOR(int64_t, 16) l_101 = (VECTOR(int64_t, 16))(0x7EB93D7553AF010AL, (VECTOR(int64_t, 4))(0x7EB93D7553AF010AL, (VECTOR(int64_t, 2))(0x7EB93D7553AF010AL, 7L), 7L), 7L, 0x7EB93D7553AF010AL, 7L, (VECTOR(int64_t, 2))(0x7EB93D7553AF010AL, 7L), (VECTOR(int64_t, 2))(0x7EB93D7553AF010AL, 7L), 0x7EB93D7553AF010AL, 7L, 0x7EB93D7553AF010AL, 7L);
        VECTOR(uint64_t, 16) l_118 = (VECTOR(uint64_t, 16))(0x6EEABB79EB048EBAL, (VECTOR(uint64_t, 4))(0x6EEABB79EB048EBAL, (VECTOR(uint64_t, 2))(0x6EEABB79EB048EBAL, 0UL), 0UL), 0UL, 0x6EEABB79EB048EBAL, 0UL, (VECTOR(uint64_t, 2))(0x6EEABB79EB048EBAL, 0UL), (VECTOR(uint64_t, 2))(0x6EEABB79EB048EBAL, 0UL), 0x6EEABB79EB048EBAL, 0UL, 0x6EEABB79EB048EBAL, 0UL);
        int32_t l_136[10][6][4] = {{{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL}},{{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL}},{{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL}},{{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL}},{{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL}},{{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL}},{{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL}},{{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL}},{{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL}},{{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL},{8L,1L,0x722465FAL,0x3CAE3F3AL}}};
        int i, j, k;
        (*l_84) = (safe_sub_func_int64_t_s_s(p_490->g_62[3][1][5], ((safe_div_func_uint32_t_u_u((l_75 && l_75), ((l_76 , (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((l_76 , (safe_lshift_func_uint8_t_u_s(p_490->l_comm_values[(safe_mod_func_uint32_t_u_u(p_490->tid, 91))], (l_83 , 0x11L)))), FAKE_DIVERGE(p_490->local_0_offset, get_local_id(0), 10))), p_490->g_comm_values[p_490->tid]))) ^ p_47))) & 0x50DEC7D6L)));
        for (l_76 = 0; (l_76 > (-24)); l_76 = safe_sub_func_uint64_t_u_u(l_76, 4))
        { /* block id: 28 */
            int32_t **l_88[7] = {(void*)0,&p_490->g_64[1],(void*)0,(void*)0,&p_490->g_64[1],(void*)0,(void*)0};
            int64_t *l_91 = (void*)0;
            int64_t *l_92 = (void*)0;
            int64_t *l_93 = (void*)0;
            int64_t *l_94 = (void*)0;
            int64_t *l_95 = (void*)0;
            VECTOR(int64_t, 8) l_99 = (VECTOR(int64_t, 8))(0x1E83BB0DECA30E3EL, (VECTOR(int64_t, 4))(0x1E83BB0DECA30E3EL, (VECTOR(int64_t, 2))(0x1E83BB0DECA30E3EL, 0x1C8A6F198232C377L), 0x1C8A6F198232C377L), 0x1C8A6F198232C377L, 0x1E83BB0DECA30E3EL, 0x1C8A6F198232C377L);
            VECTOR(int64_t, 2) l_102 = (VECTOR(int64_t, 2))(0x6BF4B6F1E529FE0DL, 0x3816A8AB26F9336AL);
            VECTOR(int64_t, 16) l_105 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x75AA8E5449298730L), 0x75AA8E5449298730L), 0x75AA8E5449298730L, 1L, 0x75AA8E5449298730L, (VECTOR(int64_t, 2))(1L, 0x75AA8E5449298730L), (VECTOR(int64_t, 2))(1L, 0x75AA8E5449298730L), 1L, 0x75AA8E5449298730L, 1L, 0x75AA8E5449298730L);
            VECTOR(uint32_t, 16) l_106 = (VECTOR(uint32_t, 16))(0xAF8A6432L, (VECTOR(uint32_t, 4))(0xAF8A6432L, (VECTOR(uint32_t, 2))(0xAF8A6432L, 1UL), 1UL), 1UL, 0xAF8A6432L, 1UL, (VECTOR(uint32_t, 2))(0xAF8A6432L, 1UL), (VECTOR(uint32_t, 2))(0xAF8A6432L, 1UL), 0xAF8A6432L, 1UL, 0xAF8A6432L, 1UL);
            uint64_t *l_111 = (void*)0;
            uint64_t *l_112 = (void*)0;
            uint64_t *l_113 = (void*)0;
            uint64_t *l_114[9][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            VECTOR(int64_t, 4) l_117 = (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 0x1D1C1E51B7A5A4E8L), 0x1D1C1E51B7A5A4E8L);
            VECTOR(uint64_t, 16) l_120 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint64_t, 2))(0UL, 1UL), (VECTOR(uint64_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
            VECTOR(uint64_t, 2) l_121 = (VECTOR(uint64_t, 2))(0UL, 18446744073709551615UL);
            int32_t **l_129 = &p_490->g_64[0];
            uint32_t *l_131 = (void*)0;
            uint32_t *l_132 = (void*)0;
            uint32_t *l_133 = (void*)0;
            uint32_t *l_134[7];
            int i, j;
            for (i = 0; i < 7; i++)
                l_134[i] = (void*)0;
            l_84 = (l_87 = &p_490->g_62[5][0][5]);
            if (p_47)
                continue;
            l_136[8][1][2] = (safe_div_func_int64_t_s_s((l_96 &= (~p_47)), (safe_lshift_func_uint16_t_u_u(((p_490->g_135 = ((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 4))(l_99.s0226)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(rotate(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 2))(p_490->g_100.yx)).yxyx, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_101.s77)), (-1L), (-1L)))))).zzzwxzyyywzzzyzy, ((VECTOR(int64_t, 2))(l_102.xx)).yyxxxyxyyyyyxxxy))).s80)), 0x6630802EBDDE1E78L, (-1L), p_490->g_100.y, (safe_div_func_int64_t_s_s((p_490->l_comm_values[(safe_mod_func_uint32_t_u_u(p_490->tid, 91))] = ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(l_105.s52d3d223bfc9f35a)).s7b36, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((*l_84) = (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_106.s11)), 0x487E53E2L, 0x121EC5D8L)).z > p_47)), 0x01468E88EED364FFL, ((safe_rshift_func_int16_t_s_u((safe_div_func_uint64_t_u_u((p_490->g_130 |= (((*l_84) = 0xBE6058BBDFDC5FA4L) , (((VECTOR(int64_t, 2))(p_490->g_115.yx)).hi < (65535UL > ((((p_490->g_18.sd , (l_128 = ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(18446744073709551615UL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_116.s6100)), (((VECTOR(int64_t, 2))(l_117.ww)).lo && (p_490->g_18.s5 &= 0x27632A01D1870374L)), 0x1ACFDDCEC7099BD4L, 0x445E426DA7943A2BL, 0xC0CBE003A25DF1CAL, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 2))(l_118.s98)).yyyx, ((VECTOR(uint64_t, 8))(0x1FFD6F7C90A92FA6L, 0UL, ((VECTOR(uint64_t, 2))(p_490->g_119.ww)), ((VECTOR(uint64_t, 4))(l_120.sd062)))).odd, ((VECTOR(uint64_t, 4))(l_121.xxxx))))).lo)).yyxx)))), (((safe_sub_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_s((*l_84), 3)) , (safe_mod_func_int64_t_s_s((0x0D909144L | 0x39DDC81AL), FAKE_DIVERGE(p_490->local_2_offset, get_local_id(2), 10)))) , 0x832DL), p_490->g_100.y)) <= p_47) && p_47), p_490->g_comm_values[p_490->tid], 0UL, 0x2E64DF4010864EB2L)).s20))), 7UL, 0xF9656720C7BFA83AL)), (*l_84), 18446744073709551615UL, 1UL)), 0x48144486E5B77500L, (*l_84), 0xA72BBAD3B4E33999L, 0x6DDF6E144B6F7AECL, 0UL, ((VECTOR(uint64_t, 2))(0UL)), 18446744073709551615UL)).lo)).s6)) , p_47) , l_129) == &p_490->g_64[1]))))), p_47)), p_490->g_119.x)) >= FAKE_DIVERGE(p_490->group_0_offset, get_group_id(0), 10)), ((VECTOR(int64_t, 8))(0L)), 0L, 0x4EAB9BFD8F9DC3F5L, p_47, 0x3283B4B798DF4D21L, 0x4E04448CB307BCC8L)).s7407)).odd, ((VECTOR(int64_t, 2))(0x3D9C482C0EE4DF8AL))))), 0x0842E75287BB0CC7L, 1L)), ((VECTOR(int64_t, 4))(3L))))).x), p_490->g_119.y)), 0L, 0x4C18CA032275AA4AL, ((VECTOR(int64_t, 2))(0x40F6A6AC0F502B33L)), 1L, ((VECTOR(int64_t, 4))(0x7F5E1EA3A65F83DEL)), 0x7DB1D573E28F3328L)).s9a)).yxxx))).zywxxyyy))).s56)).xyyxxyxyxxyyxyxx)).sdb)).lo <= 0x67B0101A31BCC979L) == 255UL)) < p_47), p_47))));
            l_128 ^= (*l_87);
        }
    }
    l_128 = (safe_sub_func_int8_t_s_s(0x00L, p_47));
    for (p_490->g_135 = 0; (p_490->g_135 > 19); ++p_490->g_135)
    { /* block id: 47 */
        int32_t *l_143 = &l_128;
        int32_t l_152 = 0x6B58E442L;
        int32_t l_153 = 0L;
        int32_t l_155 = 0x5E82F0F2L;
        int32_t l_157 = 1L;
        int32_t l_159 = 6L;
        int32_t l_162 = 1L;
        int32_t l_163 = 0x3D95B1CFL;
        int32_t l_164 = 0x60C76813L;
        int32_t l_165 = (-1L);
        int32_t l_166 = 0x2FCF35AFL;
        uint32_t l_167 = 4294967291UL;
        for (l_76 = 10; (l_76 <= (-25)); --l_76)
        { /* block id: 50 */
            int32_t **l_144 = &p_490->g_64[2];
            VECTOR(int32_t, 16) l_151 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-1L)), (-1L)), (-1L), 3L, (-1L), (VECTOR(int32_t, 2))(3L, (-1L)), (VECTOR(int32_t, 2))(3L, (-1L)), 3L, (-1L), 3L, (-1L));
            VECTOR(int64_t, 4) l_172 = (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), 0x47CDA25B2F48B5C4L), 0x47CDA25B2F48B5C4L);
            int i;
            (*l_144) = l_143;
            for (p_47 = (-10); (p_47 >= 21); p_47 = safe_add_func_uint16_t_u_u(p_47, 1))
            { /* block id: 54 */
                int32_t *l_147 = (void*)0;
                int32_t *l_148 = &p_490->g_62[2][0][1];
                int32_t *l_149 = (void*)0;
                int32_t *l_150[9][10][2] = {{{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0}},{{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0}},{{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0}},{{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0}},{{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0}},{{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0}},{{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0}},{{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0}},{{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0},{&l_96,(void*)0}}};
                int i, j, k;
                if (l_83.f0)
                    break;
                l_167++;
                (*l_143) ^= 5L;
            }
            for (l_128 = 0; (l_128 <= (-10)); l_128--)
            { /* block id: 61 */
                int64_t *l_174 = (void*)0;
                int64_t **l_173 = &l_174;
                uint64_t l_177[4][5] = {{0xF3B268BF3F15251FL,0xF3B268BF3F15251FL,0xF3B268BF3F15251FL,0xF3B268BF3F15251FL,0xF3B268BF3F15251FL},{0xF3B268BF3F15251FL,0xF3B268BF3F15251FL,0xF3B268BF3F15251FL,0xF3B268BF3F15251FL,0xF3B268BF3F15251FL},{0xF3B268BF3F15251FL,0xF3B268BF3F15251FL,0xF3B268BF3F15251FL,0xF3B268BF3F15251FL,0xF3B268BF3F15251FL},{0xF3B268BF3F15251FL,0xF3B268BF3F15251FL,0xF3B268BF3F15251FL,0xF3B268BF3F15251FL,0xF3B268BF3F15251FL}};
                int32_t l_185 = 6L;
                int i, j;
                if (((p_490->g_100.x &= ((VECTOR(int64_t, 4))(l_172.wzxz)).x) ^ (p_47 , (p_48 == ((*l_173) = p_49)))))
                { /* block id: 64 */
                    int32_t *l_175 = &p_490->g_62[7][1][5];
                    int32_t *l_176[10] = {(void*)0,&l_162,(void*)0,(void*)0,&l_162,(void*)0,(void*)0,&l_162,(void*)0,(void*)0};
                    int i;
                    l_177[2][2]++;
                }
                else
                { /* block id: 66 */
                    int32_t *l_182 = (void*)0;
                    int32_t *l_184[5] = {&l_156,&l_156,&l_156,&l_156,&l_156};
                    int32_t *l_186 = (void*)0;
                    int i;
                    l_185 = (safe_lshift_func_int8_t_s_s((~p_490->g_135), 4));
                    (*l_144) = l_186;
                    if (p_47)
                        continue;
                    if (p_490->g_187)
                        continue;
                }
                if (l_116.s5)
                    continue;
                atomic_min(&p_490->g_atomic_reduction[get_linear_group_id()], l_185);
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_490->v_collective += p_490->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if ((*l_143))
                    break;
            }
        }
    }
    return l_188;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_490->g_62 p_490->g_64
 */
int16_t  func_50(uint32_t  p_51, int16_t  p_52, int64_t  p_53, struct S2 * p_490)
{ /* block id: 12 */
    int32_t *l_61 = &p_490->g_62[5][0][5];
    int32_t **l_63[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_68[6][6] = {{0x685B35A0L,0x71F47437L,0x71F47437L,0x685B35A0L,0x685B35A0L,0x71F47437L},{0x685B35A0L,0x71F47437L,0x71F47437L,0x685B35A0L,0x685B35A0L,0x71F47437L},{0x685B35A0L,0x71F47437L,0x71F47437L,0x685B35A0L,0x685B35A0L,0x71F47437L},{0x685B35A0L,0x71F47437L,0x71F47437L,0x685B35A0L,0x685B35A0L,0x71F47437L},{0x685B35A0L,0x71F47437L,0x71F47437L,0x685B35A0L,0x685B35A0L,0x71F47437L},{0x685B35A0L,0x71F47437L,0x71F47437L,0x685B35A0L,0x685B35A0L,0x71F47437L}};
    int i, j;
    (*l_61) = (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65535UL, 65535UL)).xyyx)).y , ((VECTOR(int32_t, 2))((-10L), 0x61E3C1DCL)).hi);
    p_490->g_64[1] = &p_490->g_62[5][0][5];
    for (p_51 = 0; (p_51 <= 23); p_51 = safe_add_func_int32_t_s_s(p_51, 6))
    { /* block id: 17 */
        int32_t *l_67 = (void*)0;
        l_67 = l_67;
    }
    return l_68[0][0];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[91];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 91; i++)
            l_comm_values[i] = 1;
    struct S2 c_491;
    struct S2* p_490 = &c_491;
    struct S2 c_492 = {
        (VECTOR(int32_t, 2))((-9L), 1L), // p_490->g_8
        (VECTOR(uint64_t, 16))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x27D373EE76373A4CL), 0x27D373EE76373A4CL), 0x27D373EE76373A4CL, 18446744073709551614UL, 0x27D373EE76373A4CL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x27D373EE76373A4CL), (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x27D373EE76373A4CL), 18446744073709551614UL, 0x27D373EE76373A4CL, 18446744073709551614UL, 0x27D373EE76373A4CL), // p_490->g_18
        (-1L), // p_490->g_27
        (void*)0, // p_490->g_37
        {{{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L},{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L}},{{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L},{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L}},{{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L},{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L}},{{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L},{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L}},{{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L},{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L}},{{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L},{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L}},{{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L},{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L}},{{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L},{4L,4L,0x10705E77L,0x7078C3FCL,9L,(-1L),6L}}}, // p_490->g_62
        {&p_490->g_62[5][0][5],&p_490->g_62[5][0][5],&p_490->g_62[5][0][5],&p_490->g_62[5][0][5],&p_490->g_62[5][0][5]}, // p_490->g_64
        (VECTOR(int64_t, 2))(0x205C77F51BCBD03FL, (-1L)), // p_490->g_100
        (VECTOR(int64_t, 2))(0x69999ABEDA80D186L, 2L), // p_490->g_115
        (VECTOR(uint64_t, 4))(18446744073709551612UL, (VECTOR(uint64_t, 2))(18446744073709551612UL, 0UL), 0UL), // p_490->g_119
        0xF4250F72682E12F5L, // p_490->g_130
        0UL, // p_490->g_135
        (void*)0, // p_490->g_183
        0x536738FE241AC8A1L, // p_490->g_187
        (VECTOR(uint8_t, 2))(0x24L, 0x0CL), // p_490->g_200
        {0x71C3BC409158814EL,0x71C3BC409158814EL}, // p_490->g_226
        (VECTOR(uint8_t, 4))(0x0FL, (VECTOR(uint8_t, 2))(0x0FL, 7UL), 7UL), // p_490->g_229
        0x7E52L, // p_490->g_235
        {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)}, // p_490->g_248
        {{{&p_490->g_248[5],&p_490->g_248[4],&p_490->g_248[9],&p_490->g_248[4],&p_490->g_248[4],&p_490->g_248[4]},{&p_490->g_248[5],&p_490->g_248[4],&p_490->g_248[9],&p_490->g_248[4],&p_490->g_248[4],&p_490->g_248[4]},{&p_490->g_248[5],&p_490->g_248[4],&p_490->g_248[9],&p_490->g_248[4],&p_490->g_248[4],&p_490->g_248[4]},{&p_490->g_248[5],&p_490->g_248[4],&p_490->g_248[9],&p_490->g_248[4],&p_490->g_248[4],&p_490->g_248[4]}},{{&p_490->g_248[5],&p_490->g_248[4],&p_490->g_248[9],&p_490->g_248[4],&p_490->g_248[4],&p_490->g_248[4]},{&p_490->g_248[5],&p_490->g_248[4],&p_490->g_248[9],&p_490->g_248[4],&p_490->g_248[4],&p_490->g_248[4]},{&p_490->g_248[5],&p_490->g_248[4],&p_490->g_248[9],&p_490->g_248[4],&p_490->g_248[4],&p_490->g_248[4]},{&p_490->g_248[5],&p_490->g_248[4],&p_490->g_248[9],&p_490->g_248[4],&p_490->g_248[4],&p_490->g_248[4]}}}, // p_490->g_247
        &p_490->g_248[7], // p_490->g_249
        0xE93CFB2FL, // p_490->g_251
        0x2D6F5C3F50D5363CL, // p_490->g_252
        {0xDD2E531E6C8D591BL}, // p_490->g_255
        {{{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL}},{{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL}},{{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL}},{{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL}},{{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL}},{{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL}},{{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL},{0x4AL,0x5AL,0x6AL}}}, // p_490->g_282
        {{0x43F1183DL},{0x43F1183DL},{0x43F1183DL},{0x43F1183DL},{0x43F1183DL}}, // p_490->g_291
        (VECTOR(uint8_t, 16))(0x1CL, (VECTOR(uint8_t, 4))(0x1CL, (VECTOR(uint8_t, 2))(0x1CL, 0xB6L), 0xB6L), 0xB6L, 0x1CL, 0xB6L, (VECTOR(uint8_t, 2))(0x1CL, 0xB6L), (VECTOR(uint8_t, 2))(0x1CL, 0xB6L), 0x1CL, 0xB6L, 0x1CL, 0xB6L), // p_490->g_293
        0x3B51L, // p_490->g_298
        (VECTOR(uint64_t, 2))(0UL, 9UL), // p_490->g_328
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x49L), 0x49L), 0x49L, 0UL, 0x49L, (VECTOR(uint8_t, 2))(0UL, 0x49L), (VECTOR(uint8_t, 2))(0UL, 0x49L), 0UL, 0x49L, 0UL, 0x49L), // p_490->g_339
        (VECTOR(int8_t, 2))((-6L), 2L), // p_490->g_348
        1L, // p_490->g_358
        (VECTOR(int32_t, 2))(0x7A35A01CL, 2L), // p_490->g_379
        &p_490->g_64[1], // p_490->g_389
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_490->g_438
        (void*)0, // p_490->g_440
        &p_490->g_440, // p_490->g_439
        (VECTOR(int64_t, 2))(0x6EA884BEBD112002L, 0x463273EB83244B0CL), // p_490->g_441
        &p_490->g_252, // p_490->g_446
        0L, // p_490->g_449
        (VECTOR(uint16_t, 4))(0x3081L, (VECTOR(uint16_t, 2))(0x3081L, 0UL), 0UL), // p_490->g_468
        {0xADCAC0CA1ED2DD81L}, // p_490->g_482
        &p_490->g_482, // p_490->g_481
        0, // p_490->v_collective
        sequence_input[get_global_id(0)], // p_490->global_0_offset
        sequence_input[get_global_id(1)], // p_490->global_1_offset
        sequence_input[get_global_id(2)], // p_490->global_2_offset
        sequence_input[get_local_id(0)], // p_490->local_0_offset
        sequence_input[get_local_id(1)], // p_490->local_1_offset
        sequence_input[get_local_id(2)], // p_490->local_2_offset
        sequence_input[get_group_id(0)], // p_490->group_0_offset
        sequence_input[get_group_id(1)], // p_490->group_1_offset
        sequence_input[get_group_id(2)], // p_490->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 91)), permutations[0][get_linear_local_id()])), // p_490->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_491 = c_492;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_490);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_490->g_8.x, "p_490->g_8.x", print_hash_value);
    transparent_crc(p_490->g_8.y, "p_490->g_8.y", print_hash_value);
    transparent_crc(p_490->g_18.s0, "p_490->g_18.s0", print_hash_value);
    transparent_crc(p_490->g_18.s1, "p_490->g_18.s1", print_hash_value);
    transparent_crc(p_490->g_18.s2, "p_490->g_18.s2", print_hash_value);
    transparent_crc(p_490->g_18.s3, "p_490->g_18.s3", print_hash_value);
    transparent_crc(p_490->g_18.s4, "p_490->g_18.s4", print_hash_value);
    transparent_crc(p_490->g_18.s5, "p_490->g_18.s5", print_hash_value);
    transparent_crc(p_490->g_18.s6, "p_490->g_18.s6", print_hash_value);
    transparent_crc(p_490->g_18.s7, "p_490->g_18.s7", print_hash_value);
    transparent_crc(p_490->g_18.s8, "p_490->g_18.s8", print_hash_value);
    transparent_crc(p_490->g_18.s9, "p_490->g_18.s9", print_hash_value);
    transparent_crc(p_490->g_18.sa, "p_490->g_18.sa", print_hash_value);
    transparent_crc(p_490->g_18.sb, "p_490->g_18.sb", print_hash_value);
    transparent_crc(p_490->g_18.sc, "p_490->g_18.sc", print_hash_value);
    transparent_crc(p_490->g_18.sd, "p_490->g_18.sd", print_hash_value);
    transparent_crc(p_490->g_18.se, "p_490->g_18.se", print_hash_value);
    transparent_crc(p_490->g_18.sf, "p_490->g_18.sf", print_hash_value);
    transparent_crc(p_490->g_27, "p_490->g_27", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(p_490->g_62[i][j][k], "p_490->g_62[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_490->g_100.x, "p_490->g_100.x", print_hash_value);
    transparent_crc(p_490->g_100.y, "p_490->g_100.y", print_hash_value);
    transparent_crc(p_490->g_115.x, "p_490->g_115.x", print_hash_value);
    transparent_crc(p_490->g_115.y, "p_490->g_115.y", print_hash_value);
    transparent_crc(p_490->g_119.x, "p_490->g_119.x", print_hash_value);
    transparent_crc(p_490->g_119.y, "p_490->g_119.y", print_hash_value);
    transparent_crc(p_490->g_119.z, "p_490->g_119.z", print_hash_value);
    transparent_crc(p_490->g_119.w, "p_490->g_119.w", print_hash_value);
    transparent_crc(p_490->g_130, "p_490->g_130", print_hash_value);
    transparent_crc(p_490->g_135, "p_490->g_135", print_hash_value);
    transparent_crc(p_490->g_187, "p_490->g_187", print_hash_value);
    transparent_crc(p_490->g_200.x, "p_490->g_200.x", print_hash_value);
    transparent_crc(p_490->g_200.y, "p_490->g_200.y", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_490->g_226[i], "p_490->g_226[i]", print_hash_value);

    }
    transparent_crc(p_490->g_229.x, "p_490->g_229.x", print_hash_value);
    transparent_crc(p_490->g_229.y, "p_490->g_229.y", print_hash_value);
    transparent_crc(p_490->g_229.z, "p_490->g_229.z", print_hash_value);
    transparent_crc(p_490->g_229.w, "p_490->g_229.w", print_hash_value);
    transparent_crc(p_490->g_235, "p_490->g_235", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_490->g_248[i], "p_490->g_248[i]", print_hash_value);

    }
    transparent_crc(p_490->g_251, "p_490->g_251", print_hash_value);
    transparent_crc(p_490->g_252, "p_490->g_252", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_490->g_282[i][j][k], "p_490->g_282[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_490->g_291[i][j], "p_490->g_291[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_490->g_293.s0, "p_490->g_293.s0", print_hash_value);
    transparent_crc(p_490->g_293.s1, "p_490->g_293.s1", print_hash_value);
    transparent_crc(p_490->g_293.s2, "p_490->g_293.s2", print_hash_value);
    transparent_crc(p_490->g_293.s3, "p_490->g_293.s3", print_hash_value);
    transparent_crc(p_490->g_293.s4, "p_490->g_293.s4", print_hash_value);
    transparent_crc(p_490->g_293.s5, "p_490->g_293.s5", print_hash_value);
    transparent_crc(p_490->g_293.s6, "p_490->g_293.s6", print_hash_value);
    transparent_crc(p_490->g_293.s7, "p_490->g_293.s7", print_hash_value);
    transparent_crc(p_490->g_293.s8, "p_490->g_293.s8", print_hash_value);
    transparent_crc(p_490->g_293.s9, "p_490->g_293.s9", print_hash_value);
    transparent_crc(p_490->g_293.sa, "p_490->g_293.sa", print_hash_value);
    transparent_crc(p_490->g_293.sb, "p_490->g_293.sb", print_hash_value);
    transparent_crc(p_490->g_293.sc, "p_490->g_293.sc", print_hash_value);
    transparent_crc(p_490->g_293.sd, "p_490->g_293.sd", print_hash_value);
    transparent_crc(p_490->g_293.se, "p_490->g_293.se", print_hash_value);
    transparent_crc(p_490->g_293.sf, "p_490->g_293.sf", print_hash_value);
    transparent_crc(p_490->g_298, "p_490->g_298", print_hash_value);
    transparent_crc(p_490->g_328.x, "p_490->g_328.x", print_hash_value);
    transparent_crc(p_490->g_328.y, "p_490->g_328.y", print_hash_value);
    transparent_crc(p_490->g_339.s0, "p_490->g_339.s0", print_hash_value);
    transparent_crc(p_490->g_339.s1, "p_490->g_339.s1", print_hash_value);
    transparent_crc(p_490->g_339.s2, "p_490->g_339.s2", print_hash_value);
    transparent_crc(p_490->g_339.s3, "p_490->g_339.s3", print_hash_value);
    transparent_crc(p_490->g_339.s4, "p_490->g_339.s4", print_hash_value);
    transparent_crc(p_490->g_339.s5, "p_490->g_339.s5", print_hash_value);
    transparent_crc(p_490->g_339.s6, "p_490->g_339.s6", print_hash_value);
    transparent_crc(p_490->g_339.s7, "p_490->g_339.s7", print_hash_value);
    transparent_crc(p_490->g_339.s8, "p_490->g_339.s8", print_hash_value);
    transparent_crc(p_490->g_339.s9, "p_490->g_339.s9", print_hash_value);
    transparent_crc(p_490->g_339.sa, "p_490->g_339.sa", print_hash_value);
    transparent_crc(p_490->g_339.sb, "p_490->g_339.sb", print_hash_value);
    transparent_crc(p_490->g_339.sc, "p_490->g_339.sc", print_hash_value);
    transparent_crc(p_490->g_339.sd, "p_490->g_339.sd", print_hash_value);
    transparent_crc(p_490->g_339.se, "p_490->g_339.se", print_hash_value);
    transparent_crc(p_490->g_339.sf, "p_490->g_339.sf", print_hash_value);
    transparent_crc(p_490->g_348.x, "p_490->g_348.x", print_hash_value);
    transparent_crc(p_490->g_348.y, "p_490->g_348.y", print_hash_value);
    transparent_crc(p_490->g_358, "p_490->g_358", print_hash_value);
    transparent_crc(p_490->g_379.x, "p_490->g_379.x", print_hash_value);
    transparent_crc(p_490->g_379.y, "p_490->g_379.y", print_hash_value);
    transparent_crc(p_490->g_441.x, "p_490->g_441.x", print_hash_value);
    transparent_crc(p_490->g_441.y, "p_490->g_441.y", print_hash_value);
    transparent_crc(p_490->g_449, "p_490->g_449", print_hash_value);
    transparent_crc(p_490->g_468.x, "p_490->g_468.x", print_hash_value);
    transparent_crc(p_490->g_468.y, "p_490->g_468.y", print_hash_value);
    transparent_crc(p_490->g_468.z, "p_490->g_468.z", print_hash_value);
    transparent_crc(p_490->g_468.w, "p_490->g_468.w", print_hash_value);
    transparent_crc(p_490->g_482.f0, "p_490->g_482.f0", print_hash_value);
    transparent_crc(p_490->v_collective, "p_490->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 19; i++)
            transparent_crc(p_490->g_special_values[i + 19 * get_linear_group_id()], "p_490->g_special_values[i + 19 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_490->l_comm_values[get_linear_local_id()], "p_490->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_490->g_comm_values[get_linear_group_id() * 91 + get_linear_local_id()], "p_490->g_comm_values[get_linear_group_id() * 91 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
