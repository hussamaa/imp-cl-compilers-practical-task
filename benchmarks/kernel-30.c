// --atomics 73 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 84,77,1 -l 3,7,1
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

__constant uint32_t permutations[10][21] = {
{17,2,7,12,11,10,5,16,13,6,0,3,9,20,18,1,4,15,8,14,19}, // permutation 0
{1,18,8,16,10,11,3,0,15,19,20,5,2,4,9,17,7,12,13,6,14}, // permutation 1
{1,2,9,4,18,12,19,7,15,14,17,11,13,3,10,8,20,5,16,6,0}, // permutation 2
{2,3,20,8,12,16,18,1,9,14,11,17,19,10,0,15,7,5,13,6,4}, // permutation 3
{4,7,18,14,3,12,17,11,2,13,10,19,6,20,1,9,0,5,8,15,16}, // permutation 4
{18,6,17,1,7,2,4,20,14,15,3,10,0,16,11,5,9,8,19,13,12}, // permutation 5
{17,7,15,3,1,10,9,16,14,8,19,5,0,2,13,4,20,11,6,18,12}, // permutation 6
{9,17,0,4,15,13,7,18,10,1,5,6,8,3,14,20,19,12,16,2,11}, // permutation 7
{10,14,8,15,5,16,12,3,2,4,18,19,7,20,11,0,1,13,17,6,9}, // permutation 8
{12,20,13,5,10,9,11,1,0,19,4,18,7,17,2,8,14,16,6,3,15} // permutation 9
};

// Seed: 2282432623

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   int64_t  f0;
   volatile int16_t  f1;
   uint8_t  f2;
   volatile int32_t  f3;
   uint32_t  f4;
};

union U1 {
   volatile int64_t  f0;
   volatile uint64_t  f1;
};

union U2 {
   int32_t  f0;
   uint64_t  f1;
   uint32_t  f2;
};

struct S3 {
    volatile int32_t g_2;
    int32_t g_3;
    int32_t g_36;
    int32_t *g_37;
    int8_t g_71;
    int32_t g_75;
    int32_t * volatile g_74;
    int8_t *g_82;
    volatile VECTOR(int32_t, 16) g_86;
    union U1 g_90;
    int32_t * volatile g_96;
    int32_t g_161;
    union U2 g_163[4][4];
    union U2 *g_165;
    union U2 ** volatile g_164;
    int32_t *g_166;
    union U1 g_171;
    union U1 *g_170[5];
    int32_t g_188[2][5][8];
    volatile int64_t g_194;
    volatile int64_t *g_193;
    int32_t * volatile g_198;
    int32_t ** volatile g_214[2];
    int32_t g_243[9][4];
    uint16_t g_254;
    uint64_t g_286;
    int16_t g_288;
    int16_t *g_287;
    VECTOR(int64_t, 2) g_390;
    uint32_t g_398;
    volatile uint64_t g_401;
    volatile uint64_t * volatile g_400[2][2];
    union U0 g_432[3];
    VECTOR(uint64_t, 2) g_450;
    volatile union U2 g_480;
    volatile union U2 *g_479[7][8];
    volatile union U2 **g_478;
    volatile union U1 g_482;
    VECTOR(int32_t, 4) g_488;
    VECTOR(int32_t, 16) g_513;
    VECTOR(uint16_t, 4) g_516;
    int16_t g_570;
    VECTOR(uint64_t, 8) g_587;
    uint8_t g_593;
    volatile union U0 g_607;
    union U1 g_609[3];
    VECTOR(int8_t, 16) g_612;
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
uint32_t  func_1(struct S3 * p_622);
int32_t * func_6(int32_t * p_7, uint64_t  p_8, int32_t * p_9, struct S3 * p_622);
uint16_t  func_16(int8_t  p_17, struct S3 * p_622);
uint8_t  func_23(uint32_t  p_24, int32_t * p_25, uint32_t  p_26, uint64_t  p_27, struct S3 * p_622);
int32_t * func_28(int32_t  p_29, struct S3 * p_622);
int32_t * func_31(int32_t * p_32, struct S3 * p_622);
int32_t  func_40(uint32_t  p_41, int32_t ** p_42, int32_t * p_43, struct S3 * p_622);
uint16_t  func_45(int32_t ** p_46, struct S3 * p_622);
int32_t ** func_47(int64_t  p_48, int32_t  p_49, int32_t * p_50, struct S3 * p_622);
int64_t  func_51(int32_t ** p_52, int32_t  p_53, int32_t ** p_54, int64_t  p_55, struct S3 * p_622);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_622->g_3 p_622->l_comm_values p_622->g_161 p_622->g_164 p_622->g_166 p_622->g_170 p_622->g_71 p_622->g_75 p_622->g_198 p_622->g_193 p_622->g_194 p_622->g_comm_values p_622->g_36 p_622->g_254 p_622->g_74 p_622->g_188 p_622->g_86 p_622->g_287 p_622->g_288 p_622->g_165 p_622->g_243 p_622->g_2 p_622->g_171.f0 p_622->g_478 p_622->g_482 p_622->g_82 p_622->g_450 p_622->g_513 p_622->g_570 p_622->g_390 p_622->g_587 p_622->g_607 p_622->g_609 p_622->g_612
 * writes: p_622->g_3 p_622->g_37 p_622->g_36 p_622->g_161 p_622->g_165 p_622->g_166 p_622->g_71 p_622->g_163.f2 p_622->g_75 p_622->g_254 p_622->g_286 p_622->g_398 p_622->g_288
 */
uint32_t  func_1(struct S3 * p_622)
{ /* block id: 4 */
    VECTOR(uint64_t, 2) l_18 = (VECTOR(uint64_t, 2))(8UL, 0x7CA4E86524F20479L);
    int16_t **l_579 = &p_622->g_287;
    uint32_t l_580[5][10] = {{0x88D8FC3FL,1UL,0UL,0x4CF6B7B5L,0UL,1UL,0x88D8FC3FL,0x86DB550CL,0x1A4158CFL,0x1A4158CFL},{0x88D8FC3FL,1UL,0UL,0x4CF6B7B5L,0UL,1UL,0x88D8FC3FL,0x86DB550CL,0x1A4158CFL,0x1A4158CFL},{0x88D8FC3FL,1UL,0UL,0x4CF6B7B5L,0UL,1UL,0x88D8FC3FL,0x86DB550CL,0x1A4158CFL,0x1A4158CFL},{0x88D8FC3FL,1UL,0UL,0x4CF6B7B5L,0UL,1UL,0x88D8FC3FL,0x86DB550CL,0x1A4158CFL,0x1A4158CFL},{0x88D8FC3FL,1UL,0UL,0x4CF6B7B5L,0UL,1UL,0x88D8FC3FL,0x86DB550CL,0x1A4158CFL,0x1A4158CFL}};
    int32_t *l_581 = &p_622->g_3;
    int i, j;
    for (p_622->g_3 = 0; (p_622->g_3 != 7); p_622->g_3++)
    { /* block id: 7 */
        int32_t *l_11 = &p_622->g_3;
        int32_t **l_10 = &l_11;
        uint16_t *l_568 = (void*)0;
        uint16_t *l_569 = &p_622->g_254;
        (*l_10) = func_6(((*l_10) = &p_622->g_3), ((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((*l_569) = func_16(l_18.y, p_622)), p_622->g_570)), (safe_mul_func_int8_t_s_s(p_622->g_390.y, (l_18.y | ((safe_mul_func_uint8_t_u_u((!p_622->l_comm_values[(safe_mod_func_uint32_t_u_u(p_622->tid, 21))]), l_18.y)) > ((+(safe_div_func_int16_t_s_s((safe_div_func_uint32_t_u_u((&p_622->g_287 != l_579), l_18.x)), p_622->g_450.y))) <= l_580[0][8]))))))) && 0x48E220763AC7FA8BL), l_581, p_622);
    }
    return p_622->g_513.sf;
}


/* ------------------------------------------ */
/* 
 * reads : p_622->g_587 p_622->g_243 p_622->g_607 p_622->g_287 p_622->g_288 p_622->g_609 p_622->g_188 p_622->g_390 p_622->g_612
 * writes: p_622->g_288
 */
int32_t * func_6(int32_t * p_7, uint64_t  p_8, int32_t * p_9, struct S3 * p_622)
{ /* block id: 266 */
    int32_t l_582 = 0x0EC7A9FEL;
    uint8_t *l_590 = &p_622->g_432[1].f2;
    uint8_t *l_591 = &p_622->g_432[1].f2;
    uint8_t *l_592[9] = {&p_622->g_593,&p_622->g_593,&p_622->g_593,&p_622->g_593,&p_622->g_593,&p_622->g_593,&p_622->g_593,&p_622->g_593,&p_622->g_593};
    uint32_t l_594[7][4][8] = {{{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL}},{{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL}},{{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL}},{{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL}},{{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL}},{{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL}},{{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL},{5UL,4294967295UL,0xD46DB5ADL,4294967290UL,1UL,4294967290UL,0UL,1UL}}};
    VECTOR(int8_t, 2) l_611 = (VECTOR(int8_t, 2))(0x1BL, 1L);
    VECTOR(int8_t, 4) l_613 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x09L), 0x09L);
    int32_t *l_616 = &p_622->g_75;
    int32_t l_617[9] = {0x430629A3L,0x430629A3L,0x430629A3L,0x430629A3L,0x430629A3L,0x430629A3L,0x430629A3L,0x430629A3L,0x430629A3L};
    int32_t *l_618[4] = {&p_622->g_75,&p_622->g_75,&p_622->g_75,&p_622->g_75};
    uint16_t l_619 = 0x0A13L;
    int i, j, k;
    if ((l_582 == (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(1UL, (((VECTOR(uint64_t, 2))(p_622->g_587.s56)).even | ((safe_lshift_func_uint8_t_u_s((l_594[6][3][4]--), ((safe_mul_func_int16_t_s_s(((p_8 && ((VECTOR(uint64_t, 4))(0x0D773859CB03BBC6L, 1UL, 0x46D522517A9DE90AL, 1UL)).w) >= (p_8 || (safe_mod_func_int8_t_s_s((-5L), (safe_mul_func_uint16_t_u_u(((~p_622->g_243[1][1]) && 0x4522A3355B7909DFL), ((((((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(0UL, ((*p_622->g_287) ^= (p_622->g_607 , l_582)))) != l_582), (-8L))) , l_582) != l_582) , p_7) != &l_582) , l_582))))))), p_622->g_243[5][0])) <= (-5L)))) & l_582)))), p_8))))
    { /* block id: 269 */
        int32_t *l_608 = (void*)0;
        return l_608;
    }
    else
    { /* block id: 271 */
        union U2 **l_610 = &p_622->g_165;
        int32_t l_614 = 0x5A101208L;
        int32_t l_615 = 0x2AF585A1L;
        l_615 |= (((((((-4L) & ((p_622->g_609[1] , l_610) != l_610)) <= ((((p_8 , FAKE_DIVERGE(p_622->global_0_offset, get_global_id(0), 10)) && p_622->g_188[1][0][1]) >= ((p_622->g_390.x < FAKE_DIVERGE(p_622->global_2_offset, get_global_id(2), 10)) ^ ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_611.xyxyxxyxxyyxyyxy)).s38)), ((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(p_622->g_612.s34)).xxyxyyxyxxxxyxyy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_613.ywwz)))).xxxxyzywxyzwzwwy))).s8b))).hi)) , p_8)) & 0L) <= l_614) == (*p_622->g_287)) | (-1L));
    }
    ++l_619;
    return p_9;
}


/* ------------------------------------------ */
/* 
 * reads : p_622->l_comm_values p_622->g_36 p_622->g_161 p_622->g_164 p_622->g_166 p_622->g_170 p_622->g_71 p_622->g_3 p_622->g_75 p_622->g_193 p_622->g_198 p_622->g_194 p_622->g_comm_values p_622->g_254 p_622->g_74 p_622->g_188 p_622->g_86 p_622->g_287 p_622->g_288 p_622->g_286 p_622->g_165 p_622->g_243 p_622->g_2 p_622->g_450 p_622->g_171.f0 p_622->g_82 p_622->g_478 p_622->g_482 p_622->g_513 p_622->g_516 p_622->g_163
 * writes: p_622->g_37 p_622->g_36 p_622->g_161 p_622->g_165 p_622->g_166 p_622->g_71 p_622->g_163.f2 p_622->g_75 p_622->g_243 p_622->g_254 p_622->g_286 p_622->g_288 p_622->g_398
 */
uint16_t  func_16(int8_t  p_17, struct S3 * p_622)
{ /* block id: 9 */
    uint64_t l_30 = 0x7790660D64C9D8D9L;
    int32_t **l_167[7] = {&p_622->g_166,&p_622->g_166,&p_622->g_166,&p_622->g_166,&p_622->g_166,&p_622->g_166,&p_622->g_166};
    union U1 *l_172 = (void*)0;
    union U1 **l_173 = (void*)0;
    union U1 **l_174 = &l_172;
    uint16_t *l_253[2];
    union U2 **l_268 = &p_622->g_165;
    VECTOR(int32_t, 16) l_271 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0A0454B4L), 0x0A0454B4L), 0x0A0454B4L, 1L, 0x0A0454B4L, (VECTOR(int32_t, 2))(1L, 0x0A0454B4L), (VECTOR(int32_t, 2))(1L, 0x0A0454B4L), 1L, 0x0A0454B4L, 1L, 0x0A0454B4L);
    VECTOR(int32_t, 4) l_291 = (VECTOR(int32_t, 4))(0x3ED55680L, (VECTOR(int32_t, 2))(0x3ED55680L, 1L), 1L);
    int64_t l_293 = 0L;
    uint16_t l_300 = 0xC322L;
    uint32_t *l_397 = &p_622->g_398;
    int8_t l_399 = 0x14L;
    uint32_t l_410[5][9][4] = {{{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L}},{{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L}},{{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L}},{{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L}},{{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L},{0x64C38AA8L,8UL,0xD7582D03L,0x5B443248L}}};
    int32_t l_415 = (-1L);
    union U0 *l_431 = &p_622->g_432[1];
    union U2 l_434 = {0x736CB545L};
    VECTOR(uint64_t, 16) l_445 = (VECTOR(uint64_t, 16))(0x0DEFB6F4A71E5F94L, (VECTOR(uint64_t, 4))(0x0DEFB6F4A71E5F94L, (VECTOR(uint64_t, 2))(0x0DEFB6F4A71E5F94L, 0x4B31B1BF89C123F7L), 0x4B31B1BF89C123F7L), 0x4B31B1BF89C123F7L, 0x0DEFB6F4A71E5F94L, 0x4B31B1BF89C123F7L, (VECTOR(uint64_t, 2))(0x0DEFB6F4A71E5F94L, 0x4B31B1BF89C123F7L), (VECTOR(uint64_t, 2))(0x0DEFB6F4A71E5F94L, 0x4B31B1BF89C123F7L), 0x0DEFB6F4A71E5F94L, 0x4B31B1BF89C123F7L, 0x0DEFB6F4A71E5F94L, 0x4B31B1BF89C123F7L);
    int32_t *l_474[3][10][8] = {{{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]}},{{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]}},{{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]},{&l_415,&p_622->g_188[1][0][1],&p_622->g_243[1][0],&l_415,&p_622->g_188[1][0][1],&p_622->g_243[4][2],&p_622->g_188[0][4][1],&p_622->g_188[1][0][1]}}};
    int8_t *l_506[2][5];
    VECTOR(int64_t, 16) l_508 = (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 5L), 5L), 5L, (-1L), 5L, (VECTOR(int64_t, 2))((-1L), 5L), (VECTOR(int64_t, 2))((-1L), 5L), (-1L), 5L, (-1L), 5L);
    VECTOR(uint16_t, 4) l_517 = (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 65530UL), 65530UL);
    int16_t l_532 = (-8L);
    int64_t l_559 = (-1L);
    int64_t l_561[9][6] = {{0x064F229F02D3813BL,0x00CB7C9225F3F475L,4L,0x7E8A2FB0BA6B0514L,6L,0x5E08940D196DDE22L},{0x064F229F02D3813BL,0x00CB7C9225F3F475L,4L,0x7E8A2FB0BA6B0514L,6L,0x5E08940D196DDE22L},{0x064F229F02D3813BL,0x00CB7C9225F3F475L,4L,0x7E8A2FB0BA6B0514L,6L,0x5E08940D196DDE22L},{0x064F229F02D3813BL,0x00CB7C9225F3F475L,4L,0x7E8A2FB0BA6B0514L,6L,0x5E08940D196DDE22L},{0x064F229F02D3813BL,0x00CB7C9225F3F475L,4L,0x7E8A2FB0BA6B0514L,6L,0x5E08940D196DDE22L},{0x064F229F02D3813BL,0x00CB7C9225F3F475L,4L,0x7E8A2FB0BA6B0514L,6L,0x5E08940D196DDE22L},{0x064F229F02D3813BL,0x00CB7C9225F3F475L,4L,0x7E8A2FB0BA6B0514L,6L,0x5E08940D196DDE22L},{0x064F229F02D3813BL,0x00CB7C9225F3F475L,4L,0x7E8A2FB0BA6B0514L,6L,0x5E08940D196DDE22L},{0x064F229F02D3813BL,0x00CB7C9225F3F475L,4L,0x7E8A2FB0BA6B0514L,6L,0x5E08940D196DDE22L}};
    int8_t l_562 = (-1L);
    int64_t l_563 = 1L;
    int64_t l_564 = 0x3BC2216D5972E2A9L;
    uint16_t l_565 = 0x233BL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_253[i] = &p_622->g_254;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_506[i][j] = &l_399;
    }
    if (((safe_lshift_func_uint16_t_u_u((p_622->g_254 ^= (func_23(p_622->l_comm_values[(safe_mod_func_uint32_t_u_u(p_622->tid, 21))], (p_622->g_166 = func_28((l_30 , l_30), p_622)), ((safe_mod_func_int64_t_s_s((p_622->g_170[2] == ((*l_174) = l_172)), p_622->g_71)) <= (&p_622->g_75 == (((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((p_622->g_3 || p_622->l_comm_values[(safe_mod_func_uint32_t_u_u(p_622->tid, 21))]), 5)), p_622->g_75)), p_622->g_75)), p_17)) | p_622->g_71) , &p_622->g_75))), p_17, p_622) , 65535UL)), p_17)) == 0UL))
    { /* block id: 112 */
        int32_t *l_270 = (void*)0;
        for (p_622->g_71 = (-22); (p_622->g_71 >= 12); ++p_622->g_71)
        { /* block id: 115 */
            int64_t *l_263 = (void*)0;
            int64_t *l_264 = (void*)0;
            int64_t *l_265 = (void*)0;
            int64_t *l_266[8][2][1] = {{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}}};
            int32_t l_267 = 1L;
            union U2 ***l_269 = &l_268;
            VECTOR(int32_t, 2) l_272 = (VECTOR(int32_t, 2))(1L, 0x1734DF60L);
            int i, j, k;
            if ((*p_622->g_74))
                break;
            l_272.y = (safe_mod_func_int32_t_s_s((((safe_mul_func_uint8_t_u_u((((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))((safe_lshift_func_int16_t_s_u(p_17, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((((((l_267 ^= (255UL < p_17)) , ((*l_269) = l_268)) != (void*)0) | ((l_270 == l_270) <= ((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_271.s43)), 0x0B103E17L, 0L)).xzzzyyxzwxzwxxww, ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(l_272.yyyyyyxxyyxyyxyy)), ((VECTOR(int32_t, 2))((-1L), 0x2F32E9D0L)).yxyyxxyyyxyyyxyy)))))).s9)) ^ 0x9F70BE9A3CA292C3L) && (p_622->g_3 == p_17)), ((VECTOR(uint16_t, 2))(3UL)), 0xCE1EL)).lo)).hi)), 0UL, 65535UL, ((VECTOR(uint16_t, 4))(0UL)), 0UL)).hi)).zwxxywwwzxwxywyz)).s79, ((VECTOR(uint16_t, 2))(0x8EFFL))))).xxxy, ((VECTOR(uint16_t, 4))(1UL))))).hi)).lo == p_622->g_188[1][0][1]), 0x38L)) || FAKE_DIVERGE(p_622->group_2_offset, get_group_id(2), 10)) <= 1L), p_622->g_86.sb));
        }
    }
    else
    { /* block id: 121 */
        uint8_t l_284[10] = {248UL,248UL,248UL,248UL,248UL,248UL,248UL,248UL,248UL,248UL};
        int32_t l_289 = 0x35F60292L;
        int32_t *l_290 = &p_622->g_161;
        int32_t l_292 = 8L;
        int32_t l_294 = 0x18A58966L;
        int32_t l_295 = 1L;
        int32_t l_296 = 9L;
        int32_t l_297[10][7][1] = {{{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL}},{{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL}},{{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL}},{{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL}},{{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL}},{{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL}},{{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL}},{{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL}},{{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL}},{{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL},{0x68C3105BL}}};
        int64_t l_298 = 0x15D12819382AD20DL;
        int32_t l_299 = (-5L);
        union U0 *l_433 = &p_622->g_432[1];
        int i, j, k;
        for (p_622->g_71 = 28; (p_622->g_71 != 4); p_622->g_71--)
        { /* block id: 124 */
            uint32_t *l_281 = &p_622->g_163[3][2].f2;
            uint32_t *l_282 = (void*)0;
            int32_t l_283[5][5] = {{0x527131D9L,0x759F7A6DL,0x581A96EAL,9L,0x581A96EAL},{0x527131D9L,0x759F7A6DL,0x581A96EAL,9L,0x581A96EAL},{0x527131D9L,0x759F7A6DL,0x581A96EAL,9L,0x581A96EAL},{0x527131D9L,0x759F7A6DL,0x581A96EAL,9L,0x581A96EAL},{0x527131D9L,0x759F7A6DL,0x581A96EAL,9L,0x581A96EAL}};
            uint64_t *l_285 = &p_622->g_286;
            int i, j;
            l_289 = ((safe_sub_func_uint64_t_u_u(p_622->g_86.sf, ((VECTOR(uint64_t, 2))(mad_sat(((VECTOR(uint64_t, 2))(rhadd(((VECTOR(uint64_t, 16))(0xEE4FD0D3E91A71D5L, 0xF58FC13AE100A9DAL, 0xCFC6F7FA2E7622B3L, (FAKE_DIVERGE(p_622->local_1_offset, get_local_id(1), 10) ^ ((((((*l_285) = (((-1L) ^ (p_17 >= (safe_sub_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(((l_283[1][1] ^= p_622->l_comm_values[(safe_mod_func_uint32_t_u_u(p_622->tid, 21))]) , (0UL != (p_17 < 1L))), l_284[3])), 0x7F8DL)))) | (-1L))) , l_283[1][3]) , l_253[1]) == p_622->g_287) || p_622->g_comm_values[p_622->tid])), ((VECTOR(uint64_t, 4))(8UL)), FAKE_DIVERGE(p_622->global_0_offset, get_global_id(0), 10), p_622->l_comm_values[(safe_mod_func_uint32_t_u_u(p_622->tid, 21))], 2UL, ((VECTOR(uint64_t, 2))(18446744073709551606UL)), FAKE_DIVERGE(p_622->global_1_offset, get_global_id(1), 10), 0xC5D794C9280EBAEAL, 0xFDE2A011E8A7D792L)).s81, ((VECTOR(uint64_t, 2))(0xB3C0B517CF08D60BL))))), ((VECTOR(uint64_t, 2))(0xF39E677AA9A28561L)), ((VECTOR(uint64_t, 2))(0UL))))).even)) == (*p_622->g_287));
            l_290 = &l_289;
            (*l_290) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_291.wzyw)))).z;
        }
        --l_300;
        for (l_292 = 0; (l_292 == (-10)); l_292--)
        { /* block id: 134 */
            int8_t l_307 = 4L;
            int32_t l_310 = 0x57F8C8CAL;
            int32_t l_314 = 6L;
            int32_t l_315 = (-1L);
            int32_t l_316 = 0x6D493506L;
            VECTOR(int32_t, 4) l_370 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-1L)), (-1L));
            VECTOR(int32_t, 2) l_391 = (VECTOR(int32_t, 2))(0x2D0BD806L, 0x66D9897EL);
            uint64_t l_427 = 0xE49716CA8156B48AL;
            int i;
            for (p_622->g_286 = 0; (p_622->g_286 < 54); p_622->g_286 = safe_add_func_int64_t_s_s(p_622->g_286, 8))
            { /* block id: 137 */
                if (l_307)
                    break;
                if ((*l_290))
                    break;
                return p_622->g_188[0][0][4];
            }
            if ((*l_290))
            { /* block id: 142 */
                int32_t l_308 = (-3L);
                int32_t l_309 = 0x018A8351L;
                int32_t l_311 = 0x1DE143FAL;
                int32_t l_312 = 1L;
                int32_t l_313 = 0x50192E02L;
                uint32_t l_317 = 4294967291UL;
                (*l_268) = (*p_622->g_164);
                ++l_317;
                if ((atomic_inc(&p_622->g_atomic_input[73 * get_linear_group_id() + 56]) == 2))
                { /* block id: 146 */
                    int64_t l_320 = 0x14B404C0DA5FFB03L;
                    int8_t l_321 = 0x79L;
                    uint64_t l_322[2];
                    int32_t l_323[9] = {1L,0x55746121L,1L,1L,0x55746121L,1L,1L,0x55746121L,1L};
                    int32_t *l_324 = (void*)0;
                    int32_t l_326 = 0L;
                    int32_t *l_325 = &l_326;
                    uint32_t l_327 = 0x03FAEA7DL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_322[i] = 0UL;
                    l_321 = l_320;
                    l_323[7] |= (l_322[0] = 1L);
                    l_325 = (l_324 = (void*)0);
                    if (l_327)
                    { /* block id: 152 */
                        uint32_t l_328[7][4] = {{4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL},{4UL,4UL,4UL,4UL}};
                        VECTOR(uint32_t, 16) l_329 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL), 4294967295UL, 1UL, 4294967295UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 1UL, 4294967295UL, 1UL, 4294967295UL);
                        VECTOR(uint32_t, 4) l_330 = (VECTOR(uint32_t, 4))(0xC81542B8L, (VECTOR(uint32_t, 2))(0xC81542B8L, 4294967295UL), 4294967295UL);
                        uint64_t l_331 = 18446744073709551611UL;
                        int32_t l_332[3];
                        VECTOR(int32_t, 2) l_333 = (VECTOR(int32_t, 2))(0x501433D7L, 0x3F8EBD85L);
                        VECTOR(int32_t, 8) l_334 = (VECTOR(int32_t, 8))(0x55CDA78AL, (VECTOR(int32_t, 4))(0x55CDA78AL, (VECTOR(int32_t, 2))(0x55CDA78AL, (-1L)), (-1L)), (-1L), 0x55CDA78AL, (-1L));
                        VECTOR(int32_t, 4) l_335 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x402B7128L), 0x402B7128L);
                        VECTOR(int32_t, 4) l_336 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-2L)), (-2L));
                        VECTOR(int32_t, 16) l_337 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x12E7B896L), 0x12E7B896L), 0x12E7B896L, (-1L), 0x12E7B896L, (VECTOR(int32_t, 2))((-1L), 0x12E7B896L), (VECTOR(int32_t, 2))((-1L), 0x12E7B896L), (-1L), 0x12E7B896L, (-1L), 0x12E7B896L);
                        VECTOR(int32_t, 8) l_338 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 2L), 2L), 2L, 9L, 2L);
                        VECTOR(int32_t, 4) l_339 = (VECTOR(int32_t, 4))(0x6FCCE986L, (VECTOR(int32_t, 2))(0x6FCCE986L, 1L), 1L);
                        VECTOR(int32_t, 8) l_340 = (VECTOR(int32_t, 8))(0x4B833983L, (VECTOR(int32_t, 4))(0x4B833983L, (VECTOR(int32_t, 2))(0x4B833983L, 0x4F84908CL), 0x4F84908CL), 0x4F84908CL, 0x4B833983L, 0x4F84908CL);
                        VECTOR(int32_t, 2) l_341 = (VECTOR(int32_t, 2))(0L, (-1L));
                        uint32_t l_342 = 3UL;
                        uint16_t l_343 = 0xA4B4L;
                        uint32_t l_344 = 0xE5F82F3CL;
                        VECTOR(int32_t, 8) l_345 = (VECTOR(int32_t, 8))(0x164A319CL, (VECTOR(int32_t, 4))(0x164A319CL, (VECTOR(int32_t, 2))(0x164A319CL, 0x20D95D45L), 0x20D95D45L), 0x20D95D45L, 0x164A319CL, 0x20D95D45L);
                        VECTOR(int32_t, 8) l_346 = (VECTOR(int32_t, 8))(0x49C2AA3FL, (VECTOR(int32_t, 4))(0x49C2AA3FL, (VECTOR(int32_t, 2))(0x49C2AA3FL, 0L), 0L), 0L, 0x49C2AA3FL, 0L);
                        uint32_t l_347 = 1UL;
                        VECTOR(int32_t, 2) l_348 = (VECTOR(int32_t, 2))(0x7859915FL, (-7L));
                        uint64_t l_349 = 1UL;
                        uint8_t l_350 = 254UL;
                        VECTOR(int64_t, 2) l_351 = (VECTOR(int64_t, 2))(0x5C29DA8BD7C63EB3L, 0x64DCCE7CC49C9108L);
                        uint64_t l_352 = 0x153BD5B5AC59ABE2L;
                        uint32_t l_353[3][7][2] = {{{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL}},{{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL}},{{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL},{0x76081FDCL,4294967294UL}}};
                        int32_t *l_354[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t *l_355[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_332[i] = 0L;
                        l_350 &= ((VECTOR(int32_t, 16))((l_328[3][3] , (l_326 = ((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 16))(l_329.sbb3d6549262edf9c)).sfb, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 4))(l_330.wyxw)).wxxwywzw, (uint32_t)4294967295UL))).s0170266021244331)).sb5))).xxyxyxxyxxyxxyxx)).sf , l_331) , l_332[0]))), 0L, ((VECTOR(int32_t, 2))(l_333.yy)), (-2L), ((VECTOR(int32_t, 4))((-3L), ((VECTOR(int32_t, 2))(l_334.s76)), 0x5C11936EL)).x, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_335.xx)))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(l_336.xx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_337.s89c45316)).even)).even))).yyyyyyxxxyxxyyxx))).sd9df)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_338.s44405736)).hi, ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_339.xyxywyxywwxzwyww)).s3fda)).wwzzywwywzxwxyzz, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 16))(l_340.s6775276060561066)), ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_341.xyyxxxyy)))).s5654523555711117)).even, (int32_t)(l_343 = l_342), (int32_t)(l_344 , (l_335.x = 0x2B40A934L))))).s0552137342144230))).s7b0f)))).zzwxxyxwyyzyzxxy))).even, ((VECTOR(int32_t, 16))(l_345.s1244552104210726)).even))).s01, ((VECTOR(int32_t, 8))(l_346.s03041130)).s70))).yxxx, ((VECTOR(int32_t, 2))((-1L), 0x64E4032DL)).yxxx)))))))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(0x40544E72L, 0L, 7L, l_347, (-3L), ((VECTOR(int32_t, 2))(l_348.yx)), 9L)).s33, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x36DC8C6BL, 0x25F8AC1CL)).yyxx)).odd))).yyxyyxxx)).lo))).odd)), (-8L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(1L, l_349, 8L, 1L)))), 0x66B84EDEL)).s6;
                        l_355[3] = (l_324 = (((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 8))(l_351.xxyxxyxy)), (int64_t)(l_352 = (l_320 = 0L)), (int64_t)l_353[2][2][1]))).s4 , (l_325 = l_354[8])));
                        l_326 ^= 0x4CD5FD00L;
                    }
                    else
                    { /* block id: 163 */
                        uint8_t l_356 = 1UL;
                        int16_t l_359 = 0x4131L;
                        uint32_t l_360[6][9][4] = {{{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL}},{{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL}},{{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL}},{{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL}},{{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL}},{{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL},{0xA8FA176EL,0x69D896A5L,0x1363A99EL,4294967288UL}}};
                        int i, j, k;
                        --l_356;
                        l_360[3][5][0]--;
                    }
                    unsigned int result = 0;
                    result += l_320;
                    result += l_321;
                    int l_322_i0;
                    for (l_322_i0 = 0; l_322_i0 < 2; l_322_i0++) {
                        result += l_322[l_322_i0];
                    }
                    int l_323_i0;
                    for (l_323_i0 = 0; l_323_i0 < 9; l_323_i0++) {
                        result += l_323[l_323_i0];
                    }
                    result += l_326;
                    result += l_327;
                    atomic_add(&p_622->g_special_values[73 * get_linear_group_id() + 56], result);
                }
                else
                { /* block id: 167 */
                    (1 + 1);
                }
                l_313 ^= ((void*)0 == l_253[1]);
            }
            else
            { /* block id: 171 */
                int64_t l_372 = (-1L);
                VECTOR(int64_t, 8) l_389 = (VECTOR(int64_t, 8))(0x6E177A954403E67CL, (VECTOR(int64_t, 4))(0x6E177A954403E67CL, (VECTOR(int64_t, 2))(0x6E177A954403E67CL, (-9L)), (-9L)), (-9L), 0x6E177A954403E67CL, (-9L));
                uint64_t l_406 = 0xCC050638CB4816DEL;
                int32_t *l_408 = &p_622->g_75;
                int32_t l_411 = (-6L);
                int32_t l_412 = 0x56C40414L;
                int32_t l_414 = (-7L);
                int32_t l_421 = 1L;
                int32_t l_422[7][6] = {{0x2C6EBD6BL,0x2C6EBD6BL,1L,(-1L),0x4878EB27L,(-1L)},{0x2C6EBD6BL,0x2C6EBD6BL,1L,(-1L),0x4878EB27L,(-1L)},{0x2C6EBD6BL,0x2C6EBD6BL,1L,(-1L),0x4878EB27L,(-1L)},{0x2C6EBD6BL,0x2C6EBD6BL,1L,(-1L),0x4878EB27L,(-1L)},{0x2C6EBD6BL,0x2C6EBD6BL,1L,(-1L),0x4878EB27L,(-1L)},{0x2C6EBD6BL,0x2C6EBD6BL,1L,(-1L),0x4878EB27L,(-1L)},{0x2C6EBD6BL,0x2C6EBD6BL,1L,(-1L),0x4878EB27L,(-1L)}};
                int i, j;
                for (l_30 = 7; (l_30 == 13); l_30 = safe_add_func_uint32_t_u_u(l_30, 8))
                { /* block id: 174 */
                    uint32_t l_365 = 1UL;
                    l_365--;
                    return p_622->g_comm_values[p_622->tid];
                }
                if (p_17)
                    break;
                for (l_293 = (-19); (l_293 != (-3)); ++l_293)
                { /* block id: 181 */
                    VECTOR(int8_t, 16) l_396 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x27L), 0x27L), 0x27L, 0L, 0x27L, (VECTOR(int8_t, 2))(0L, 0x27L), (VECTOR(int8_t, 2))(0L, 0x27L), 0L, 0x27L, 0L, 0x27L);
                    int32_t *l_409 = &l_315;
                    int32_t l_413 = 0x63C29741L;
                    int32_t l_416 = 2L;
                    int32_t l_418 = 0x04F1C4C7L;
                    int32_t l_419[10][9][2] = {{{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)}},{{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)}},{{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)}},{{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)}},{{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)}},{{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)}},{{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)}},{{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)}},{{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)}},{{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)},{0x43BD4E37L,(-8L)}}};
                    union U1 *l_430 = &p_622->g_171;
                    int i, j, k;
                    if (((*l_290) = ((VECTOR(int32_t, 16))(l_370.xzzwyywxwzywywyw)).s5))
                    { /* block id: 183 */
                        int16_t l_371 = 0x3AF6L;
                        VECTOR(int64_t, 4) l_379 = (VECTOR(int64_t, 4))(0x04ED195E66BFF488L, (VECTOR(int64_t, 2))(0x04ED195E66BFF488L, 4L), 4L);
                        int8_t *l_407 = &l_399;
                        int32_t l_417 = 0x408A8EB1L;
                        int32_t l_420 = 0x77A2851DL;
                        int32_t l_423 = (-10L);
                        int32_t l_424 = 0x79F9378AL;
                        int32_t l_425 = 8L;
                        int32_t l_426 = 0x3CF9EC17L;
                        int i;
                        l_372 &= ((l_310 = (l_371 = (!(~p_17)))) | FAKE_DIVERGE(p_622->local_1_offset, get_local_id(1), 10));
                        l_409 = (l_408 = (p_622->g_3 , func_28((safe_lshift_func_int16_t_s_s((safe_div_func_int32_t_s_s(((((VECTOR(uint32_t, 2))(0x92B0F0ACL, 0x901819E1L)).even , (safe_lshift_func_int8_t_s_u((l_310 = ((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(0x0EEEA9DE910B2668L, 0x665F4A6BBF3638F6L, ((VECTOR(int64_t, 8))(l_379.xzyzxxyw)), (p_622->l_comm_values[(safe_mod_func_uint32_t_u_u(p_622->tid, 21))] = (safe_sub_func_int8_t_s_s((-2L), ((*l_407) = ((*p_622->g_82) = ((safe_lshift_func_int16_t_s_s(((safe_unary_minus_func_int16_t_s(((*p_622->g_287) = (safe_mod_func_uint64_t_u_u((0xF6E27426L > ((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 8))(l_389.s22711526)).s03, ((VECTOR(int64_t, 8))(p_622->g_390.xyxxxxxy)).s40))).xxyxxxxy)).s10, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x2E2A51389EEF9FDCL, 0x1F0DA4032D073D35L)).yxxyxxxxxxyxyyyx)).saf))).xyyxxyxyyxyxyyyy)).s2ea0, ((VECTOR(int64_t, 8))(upsample(((VECTOR(int32_t, 2))(l_391.yx)).xxxyyxxx, ((VECTOR(uint32_t, 2))(0xCB71A198L, 0x269FCB88L)).yyxyxxxy))).odd))), ((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 4))(7L, 0x26B767DE4439813CL, 0x66ABA6C3AA16F537L, 0x3C4E698EA5CE660AL)).odd, (int64_t)((safe_div_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u((FAKE_DIVERGE(p_622->local_0_offset, get_local_id(0), 10) == ((((p_17 &= ((VECTOR(int8_t, 4))(l_396.sec88)).x) , (void*)0) == l_397) & ((*l_290) = l_399))), (((VECTOR(int8_t, 2))(2L, (-1L))).hi != ((void*)0 == p_622->g_400[0][0])))) , ((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((*p_622->g_82), 5)), 18446744073709551606UL)) && (*l_290))), l_406)) , 0x23EEAB9E2B439C47L)))), 5L, (-1L))).s2, p_622->g_390.y)) , (*l_290))), p_622->g_398))))) >= l_391.x), 13)) , 4L)))))), 0x6C79676EC6C0F78FL, 2L, ((VECTOR(int64_t, 2))((-5L))), 0L)).odd)).odd)).lo, ((VECTOR(int64_t, 2))(0x149A7C559F8177A7L))))), 1L, 8L)), ((VECTOR(int64_t, 8))(0L)), ((VECTOR(int64_t, 4))((-9L))))).sc <= GROUP_DIVERGE(0, 1)) || p_622->g_188[0][0][7])), p_622->g_243[0][1]))) , l_396.s4), 0x34522C80L)), 1)), p_622)));
                        if (l_410[2][8][1])
                            continue;
                        l_427++;
                    }
                    else
                    { /* block id: 198 */
                        (*p_622->g_74) &= (&p_622->g_171 == l_430);
                    }
                    (*l_290) = (0x5271646CE190F516L & ((p_17 , p_17) == FAKE_DIVERGE(p_622->local_1_offset, get_local_id(1), 10)));
                }
                (*l_290) |= (*p_622->g_166);
            }
            l_433 = l_431;
        }
        l_290 = &l_294;
    }
    if (((l_434 , (safe_sub_func_int16_t_s_s((-1L), ((safe_rshift_func_int16_t_s_u(p_17, (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s((((((VECTOR(uint64_t, 2))(l_445.s47)).even >= p_622->g_2) && 5L) <= p_17), (-1L))) > ((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((((VECTOR(uint64_t, 16))(p_622->g_450.xxyxxyxyyyxyyxyx)).s2 && 0x6040181DB1049947L), (p_17 , (*p_622->g_287)))), p_17)) == p_622->g_75)), p_622->g_comm_values[p_622->tid])), 8UL)))) != 0x2B513C03DD11BC29L)))) >= 0x0CB8FC9BL))
    { /* block id: 209 */
        uint32_t l_451 = 0xD0A6D8DBL;
        int32_t *l_452 = (void*)0;
        int8_t *l_463 = &l_399;
        int32_t *l_464 = &p_622->g_75;
        l_464 = (l_452 = func_28((l_451 != (p_622->g_171.f0 != ((((VECTOR(uint8_t, 4))((((~p_622->g_36) == ((l_452 == (void*)0) == (p_17 <= (safe_lshift_func_int8_t_s_u((*p_622->g_82), 7))))) > p_17), 0UL, 7UL, 249UL)).z < ((*l_463) = (~((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(0x41L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_17, 13)), 0x1BL)), 0x53L)), 6)) != 0x74C2L), 0x2DL, ((VECTOR(int8_t, 2))((-6L))), 2L, 0x45L, 0x70L, 7L)).s44)), 0x57L, 0x61L, ((VECTOR(int8_t, 4))(0x11L)))), (-1L), ((VECTOR(int8_t, 4))(0x43L)), 0L, (-7L))), ((VECTOR(int8_t, 16))(0x52L)), ((VECTOR(int8_t, 16))(0x5BL))))).sf1)).xxyyxyxyyyxxyxxy, ((VECTOR(int8_t, 16))(7L))))).s9))) , 0x7D18D065B646B9ACL))), p_622));
    }
    else
    { /* block id: 213 */
        int32_t *l_465 = &p_622->g_75;
        union U1 *l_485 = &p_622->g_90;
        int32_t l_486 = (-1L);
        VECTOR(uint16_t, 8) l_520 = (VECTOR(uint16_t, 8))(0x80DCL, (VECTOR(uint16_t, 4))(0x80DCL, (VECTOR(uint16_t, 2))(0x80DCL, 65535UL), 65535UL), 65535UL, 0x80DCL, 65535UL);
        int8_t l_536[6][6] = {{4L,7L,2L,0x18L,7L,0x18L},{4L,7L,2L,0x18L,7L,0x18L},{4L,7L,2L,0x18L,7L,0x18L},{4L,7L,2L,0x18L,7L,0x18L},{4L,7L,2L,0x18L,7L,0x18L},{4L,7L,2L,0x18L,7L,0x18L}};
        union U2 **l_547 = &p_622->g_165;
        int i, j;
        l_465 = (void*)0;
        for (p_622->g_75 = 0; (p_622->g_75 >= (-6)); --p_622->g_75)
        { /* block id: 217 */
            VECTOR(uint8_t, 16) l_476 = (VECTOR(uint8_t, 16))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x68L), 0x68L), 0x68L, 253UL, 0x68L, (VECTOR(uint8_t, 2))(253UL, 0x68L), (VECTOR(uint8_t, 2))(253UL, 0x68L), 253UL, 0x68L, 253UL, 0x68L);
            union U2 **l_477 = &p_622->g_165;
            int64_t *l_481[8] = {&p_622->g_432[1].f0,&p_622->g_432[1].f0,&p_622->g_432[1].f0,&p_622->g_432[1].f0,&p_622->g_432[1].f0,&p_622->g_432[1].f0,&p_622->g_432[1].f0,&p_622->g_432[1].f0};
            VECTOR(int32_t, 8) l_487 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x12E9CB8CL), 0x12E9CB8CL), 0x12E9CB8CL, 1L, 0x12E9CB8CL);
            int32_t *l_494 = (void*)0;
            VECTOR(uint16_t, 8) l_518 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 3UL), 3UL), 3UL, 65535UL, 3UL);
            VECTOR(uint16_t, 2) l_519 = (VECTOR(uint16_t, 2))(0x50A7L, 0x7B06L);
            uint64_t l_531 = 0x9B2D876EA3E34FA7L;
            int i;
            for (l_434.f0 = 27; (l_434.f0 != 12); l_434.f0 = safe_sub_func_uint32_t_u_u(l_434.f0, 8))
            { /* block id: 220 */
                uint32_t l_475 = 0UL;
                int64_t *l_483 = (void*)0;
                union U1 *l_484 = &p_622->g_90;
                int32_t l_490 = (-8L);
                uint64_t *l_500 = &l_30;
                int64_t **l_501 = &l_483;
                int8_t **l_507 = &l_506[0][1];
                for (p_17 = (-6); (p_17 <= (-5)); p_17++)
                { /* block id: 223 */
                    VECTOR(uint64_t, 8) l_491 = (VECTOR(uint64_t, 8))(0xAF85A36A37B271F1L, (VECTOR(uint64_t, 4))(0xAF85A36A37B271F1L, (VECTOR(uint64_t, 2))(0xAF85A36A37B271F1L, 0x004E5E62193F55B1L), 0x004E5E62193F55B1L), 0x004E5E62193F55B1L, 0xAF85A36A37B271F1L, 0x004E5E62193F55B1L);
                    uint16_t *l_497 = &p_622->g_254;
                    int i;
                    for (p_622->g_286 = 0; (p_622->g_286 == 24); p_622->g_286 = safe_add_func_uint64_t_u_u(p_622->g_286, 9))
                    { /* block id: 226 */
                        return p_622->g_71;
                    }
                    if (p_17)
                        break;
                    l_475 = (p_17 , (((void*)0 != l_474[0][3][4]) ^ p_17));
                    if ((((((VECTOR(uint8_t, 2))(l_476.s50)).even , (l_477 != p_622->g_478)) != p_17) , ((p_17 , l_481[2]) != (p_622->g_482 , l_483))))
                    { /* block id: 231 */
                        uint64_t l_489 = 1UL;
                        l_487.s7 &= (l_486 &= (((*l_174) = l_484) == (l_485 = (void*)0)));
                        l_489 = ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 2))(p_622->g_488.zz)).xxxyyyyx, ((VECTOR(int32_t, 2))(6L, 0x7E02B9F2L)).xyxyyyxx))).s0;
                    }
                    else
                    { /* block id: 237 */
                        ++l_491.s2;
                        l_494 = func_28(p_622->g_254, p_622);
                        (*p_622->g_198) |= ((safe_div_func_uint8_t_u_u(0x5CL, p_17)) , (l_486 = (((FAKE_DIVERGE(p_622->group_2_offset, get_group_id(2), 10) == 4294967295UL) & p_17) , ((void*)0 != l_497))));
                    }
                }
                p_622->g_161 &= (safe_mul_func_uint8_t_u_u((+(((*l_500) = ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(0x25838CCFCDDBF1B7L, 1UL)).yxxyyxxxyyxxyyxx)).s3) < ((0xF906229FL || ((&p_622->g_194 != ((*l_501) = (void*)0)) == (0x14564CCF9BC4E993L == (safe_rshift_func_uint16_t_u_s((((safe_mul_func_int8_t_s_s((((*l_507) = l_506[0][1]) == &p_622->g_71), ((((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 4))(0x237FD3CE5080B313L, ((VECTOR(int64_t, 2))(l_508.s5a)), 0x5E9FC544BF9AE47CL))))).y > (safe_add_func_int64_t_s_s(((safe_sub_func_int16_t_s_s((((VECTOR(int32_t, 16))(0L, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))((-1L), 0x0ED6302AL)), ((VECTOR(int32_t, 16))(5L, ((VECTOR(int32_t, 4))((-3L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(p_622->g_513.s2bd0fdfb))))).s46, (int32_t)1L, (int32_t)p_622->g_513.sd))).xxxy, ((VECTOR(int32_t, 4))(0L))))).xyywzzxz)).s24)), (-1L))), (-4L), 8L, 1L, p_17, 2L, 0x0D3286E3L, ((VECTOR(int32_t, 4))(0x2F6EBF88L)), 0x50A84256L)).sa8, ((VECTOR(int32_t, 2))(0x4741AC7FL))))), 1L, 0x3488D492L, 1L, p_17, p_17, (-1L), ((VECTOR(int32_t, 2))(0x4C5C8492L)), 6L, (-6L), ((VECTOR(int32_t, 2))((-8L))), 0x02D94FBDL)).sf , p_17), (*p_622->g_287))) > p_622->g_188[1][0][1]), (*p_622->g_193)))) == 0L))) ^ 0UL) & p_17), 8))))) >= 0x1B4528ABL))), (*p_622->g_82)));
            }
            l_487.s6 = (((safe_mul_func_uint8_t_u_u(p_622->g_450.y, ((((VECTOR(int8_t, 2))(0x15L, 0x1CL)).lo != 8L) != ((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(p_622->g_516.yyyxwwwx)).hi)).even, ((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(2UL, 2UL)))).yxxxyxyxxxyyxxyy)))))).sb79d, ((VECTOR(uint16_t, 4))(l_517.zyyz))))).yxyxzzyz)).s3012707003731752, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 16))(p_622->g_86.sf, ((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_518.s5075)), 0xF029L, 0xA69AL, 0x4B6AL, 0x805FL)).odd, ((VECTOR(uint16_t, 4))(l_519.yyyy)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(l_520.s31)), (uint16_t)(safe_rshift_func_int16_t_s_s(((*p_622->g_287) = (safe_div_func_uint16_t_u_u(p_622->g_71, (safe_mul_func_uint8_t_u_u(((-6L) || (safe_div_func_int64_t_s_s((l_481[0] != l_481[2]), (safe_mod_func_int32_t_s_s((((**l_477) , (((0x44L && FAKE_DIVERGE(p_622->global_0_offset, get_global_id(0), 10)) | 7UL) , p_17)) & 0x70FE2714L), (*p_622->g_74)))))), p_17))))), l_531))))), 0x0ADFL, 1UL)))).even)), ((VECTOR(uint16_t, 4))(65530UL)), p_17, p_622->g_36, l_532, ((VECTOR(uint16_t, 2))(0x6AAEL)), 0x0A44L, ((VECTOR(uint16_t, 4))(0x55FAL)))), ((VECTOR(uint16_t, 16))(0xA12EL))))).se601)).even)).xxxy))).odd, ((VECTOR(uint16_t, 2))(65526UL)), ((VECTOR(uint16_t, 2))(0x1BFFL))))), p_17, p_17, ((VECTOR(uint16_t, 8))(65534UL)), 65535UL, 0xF432L, 0UL)).s54, ((VECTOR(uint16_t, 2))(0x3144L))))).xyyxyxyyxxxyxxyy))).sc4))).lo))) != p_17) , p_17);
        }
        for (l_415 = (-11); (l_415 == 21); l_415++)
        { /* block id: 254 */
            uint64_t l_535[4][1];
            int32_t ***l_556 = &l_167[6];
            int32_t *l_560 = (void*)0;
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_535[i][j] = 18446744073709551615UL;
            }
            l_536[1][0] = (((255UL | ((*p_622->g_82) = ((VECTOR(int8_t, 4))((-1L), 0L, 0x32L, 4L)).z)) | l_535[1][0]) & (((*l_397) = p_622->g_450.x) , p_622->g_188[1][0][1]));
            l_486 ^= (&l_415 != ((safe_sub_func_int32_t_s_s(p_17, (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((l_559 |= ((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(1L, l_535[1][0], 0L, ((VECTOR(int16_t, 8))((-5L), (((safe_add_func_uint8_t_u_u((((l_547 != (void*)0) > (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((l_556 != &p_622->g_214[1]) > ((p_17 < ((((((VECTOR(int64_t, 2))(0x2040034E44E73D3EL, 1L)).odd , &p_622->g_432[1]) == l_431) || 1L) >= 0L)) ^ (*p_622->g_82))), p_622->g_254)), FAKE_DIVERGE(p_622->group_0_offset, get_group_id(0), 10))) >= 0x2022L), 4)), (-8L)))) , 0xD3L), (-6L))) & p_17) ^ p_622->g_286), 1L, ((VECTOR(int16_t, 4))((-1L))), 0x2D31L)), ((VECTOR(int16_t, 2))((-1L))), ((VECTOR(int16_t, 2))(0x7B02L)), 0x7912L)).s7, p_17)) <= p_17)) || 0UL), 0x1F62L)), (*p_622->g_82))))) , l_560));
        }
        return p_622->g_171.f0;
    }
    ++l_565;
    return p_622->g_513.s6;
}


/* ------------------------------------------ */
/* 
 * reads : p_622->g_3 p_622->g_193 p_622->g_198 p_622->g_71 p_622->g_194 p_622->g_comm_values p_622->g_161 p_622->g_36 p_622->g_75
 * writes: p_622->g_161 p_622->g_71 p_622->g_163.f2 p_622->g_75 p_622->g_243
 */
uint8_t  func_23(uint32_t  p_24, int32_t * p_25, uint32_t  p_26, uint64_t  p_27, struct S3 * p_622)
{ /* block id: 84 */
    int32_t *l_187[5][7][4] = {{{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0}},{{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0}},{{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0}},{{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0}},{{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0},{&p_622->g_188[1][0][1],&p_622->g_188[1][0][1],(void*)0,(void*)0}}};
    int32_t l_189 = 0x019E2E31L;
    int64_t *l_192 = (void*)0;
    VECTOR(int16_t, 2) l_195 = (VECTOR(int16_t, 2))(6L, 2L);
    VECTOR(uint64_t, 4) l_204 = (VECTOR(uint64_t, 4))(0x0662998B48CC5D8EL, (VECTOR(uint64_t, 2))(0x0662998B48CC5D8EL, 0xE52B62957E2A4A3FL), 0xE52B62957E2A4A3FL);
    union U2 **l_205[2][10] = {{&p_622->g_165,&p_622->g_165,(void*)0,&p_622->g_165,&p_622->g_165,&p_622->g_165,&p_622->g_165,(void*)0,&p_622->g_165,&p_622->g_165},{&p_622->g_165,&p_622->g_165,(void*)0,&p_622->g_165,&p_622->g_165,&p_622->g_165,&p_622->g_165,(void*)0,&p_622->g_165,&p_622->g_165}};
    VECTOR(int32_t, 4) l_224 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x3118BC74L), 0x3118BC74L);
    VECTOR(int32_t, 8) l_225 = (VECTOR(int32_t, 8))(0x136EF0B1L, (VECTOR(int32_t, 4))(0x136EF0B1L, (VECTOR(int32_t, 2))(0x136EF0B1L, (-1L)), (-1L)), (-1L), 0x136EF0B1L, (-1L));
    uint16_t l_230 = 6UL;
    int16_t *l_231 = (void*)0;
    int16_t *l_232 = (void*)0;
    int16_t *l_233 = (void*)0;
    int16_t *l_234 = (void*)0;
    int16_t *l_235 = (void*)0;
    int16_t *l_236 = (void*)0;
    int16_t *l_237 = (void*)0;
    int16_t *l_238 = (void*)0;
    int16_t *l_239 = (void*)0;
    int16_t *l_240 = (void*)0;
    int16_t *l_241 = (void*)0;
    int16_t *l_242 = (void*)0;
    int16_t *l_244 = (void*)0;
    int16_t **l_245 = &l_241;
    int16_t *l_246 = (void*)0;
    int32_t *l_247 = (void*)0;
    int32_t *l_248 = (void*)0;
    int32_t *l_249[1];
    int32_t **l_250 = &p_622->g_37;
    int32_t **l_252 = &l_249[0];
    int32_t ***l_251 = &l_252;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_249[i] = &p_622->g_75;
    (*p_622->g_198) = ((((safe_rshift_func_int8_t_s_u(((l_189 ^= ((safe_lshift_func_int8_t_s_u((-2L), 5)) < 0xD153L)) , ((safe_sub_func_int64_t_s_s(p_622->g_3, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(0x599D9CE8B853B961L, (l_192 == p_622->g_193), (-6L), 0x3CDC48D36CFC32C8L)))).z)) <= (0x3327L == ((VECTOR(int16_t, 2))(l_195.yy)).lo))), ((safe_add_func_uint16_t_u_u(p_24, ((*p_25) , (((l_195.x != l_195.y) || FAKE_DIVERGE(p_622->local_1_offset, get_local_id(1), 10)) >= 0UL)))) <= p_26))) <= 0x0ABEB8739EEF94E8L) ^ p_24) || l_189);
    for (p_622->g_71 = (-23); (p_622->g_71 <= 26); ++p_622->g_71)
    { /* block id: 89 */
        uint8_t l_203 = 255UL;
        int32_t l_206 = 0x77A379C2L;
        int32_t *l_207 = &p_622->g_75;
        int32_t **l_215[8] = {&l_207,&l_207,&l_207,&l_207,&l_207,&l_207,&l_207,&l_207};
        int i;
        if (l_195.x)
            break;
        (*l_207) = (safe_lshift_func_int16_t_s_s(((l_203 & (l_206 = (((p_622->g_163[3][2].f2 = ((*p_622->g_193) && ((VECTOR(uint64_t, 2))(l_204.wx)).lo)) , l_205[0][5]) == &p_622->g_165))) & p_622->g_comm_values[p_622->tid]), l_204.z));
        for (p_27 = 0; (p_27 < 22); p_27 = safe_add_func_uint32_t_u_u(p_27, 8))
        { /* block id: 96 */
            (*l_207) = (safe_rshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(1L, l_195.x)), 2));
            return p_26;
        }
        p_25 = &l_206;
    }
    p_622->g_75 &= (safe_mod_func_uint8_t_u_u((((((safe_mod_func_uint8_t_u_u((p_622->g_194 && (safe_div_func_uint64_t_u_u(0UL, (safe_add_func_uint16_t_u_u(((l_189 ^= (p_26 | ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_224.yw)), ((VECTOR(int32_t, 2))((-1L), (-9L))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_225.s54)), 0x7DE4A09EL, 1L)).xwwxwyxy)).s4606201644004103)))).s2, ((*p_622->g_198) |= (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(0x1D28L, (p_622->g_243[0][1] = l_230))), ((((*l_245) = (l_232 = l_244)) == l_246) , (((void*)0 == &l_189) || 0x2A04L))))), 0x3A769291L, 0L)).s1)) , p_622->g_36), p_622->g_comm_values[p_622->tid]))))), p_27)) | p_622->g_3) , l_205[1][9]) != (void*)0) , l_225.s6), l_195.x));
    (*l_251) = (l_250 = &p_25);
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_622->g_36 p_622->g_161 p_622->g_164 p_622->g_166
 * writes: p_622->g_37 p_622->g_36 p_622->g_161 p_622->g_165
 */
int32_t * func_28(int32_t  p_29, struct S3 * p_622)
{ /* block id: 10 */
    int32_t *l_33 = (void*)0;
    int32_t **l_34[1][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_35 = &p_622->g_36;
    int64_t l_63 = 1L;
    VECTOR(int32_t, 8) l_69 = (VECTOR(int32_t, 8))(0x28F8A558L, (VECTOR(int32_t, 4))(0x28F8A558L, (VECTOR(int32_t, 2))(0x28F8A558L, 0x53184BAFL), 0x53184BAFL), 0x53184BAFL, 0x28F8A558L, 0x53184BAFL);
    union U2 *l_162 = &p_622->g_163[3][2];
    int i, j;
    p_622->g_37 = (l_35 = func_31(l_33, p_622));
    for (p_622->g_36 = 0; (p_622->g_36 == 9); p_622->g_36 = safe_add_func_int8_t_s_s(p_622->g_36, 1))
    { /* block id: 17 */
        int32_t **l_44 = (void*)0;
        int64_t *l_60 = (void*)0;
        int64_t *l_61 = (void*)0;
        int64_t *l_62[6];
        int32_t l_66[2];
        int8_t *l_70 = &p_622->g_71;
        int32_t l_72[6][1][7] = {{{0L,0L,0x2730C409L,0x6FF9B111L,0x466B01FEL,0x6FF9B111L,0x2730C409L}},{{0L,0L,0x2730C409L,0x6FF9B111L,0x466B01FEL,0x6FF9B111L,0x2730C409L}},{{0L,0L,0x2730C409L,0x6FF9B111L,0x466B01FEL,0x6FF9B111L,0x2730C409L}},{{0L,0L,0x2730C409L,0x6FF9B111L,0x466B01FEL,0x6FF9B111L,0x2730C409L}},{{0L,0L,0x2730C409L,0x6FF9B111L,0x466B01FEL,0x6FF9B111L,0x2730C409L}},{{0L,0L,0x2730C409L,0x6FF9B111L,0x466B01FEL,0x6FF9B111L,0x2730C409L}}};
        int32_t *l_154[1][4][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        VECTOR(int32_t, 4) l_158 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x56066C03L), 0x56066C03L);
        volatile int32_t *l_160 = (void*)0;
        volatile int32_t **l_159 = &l_160;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_62[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_66[i] = 6L;
        (1 + 1);
    }
    p_622->g_161 &= p_29;
    (*p_622->g_164) = l_162;
    return p_622->g_166;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_31(int32_t * p_32, struct S3 * p_622)
{ /* block id: 11 */
    return p_32;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_40(uint32_t  p_41, int32_t ** p_42, int32_t * p_43, struct S3 * p_622)
{ /* block id: 70 */
    union U1 *l_155 = &p_622->g_90;
    union U1 **l_156 = &l_155;
    int32_t l_157 = 0x1DC2B71BL;
    (*l_156) = l_155;
    return l_157;
}


/* ------------------------------------------ */
/* 
 * reads : p_622->g_71 p_622->g_comm_values
 * writes: p_622->g_71
 */
uint16_t  func_45(int32_t ** p_46, struct S3 * p_622)
{ /* block id: 62 */
    int64_t l_153 = 0x4037C9437C62FE86L;
    for (p_622->g_71 = 0; (p_622->g_71 < 29); p_622->g_71 = safe_add_func_uint16_t_u_u(p_622->g_71, 8))
    { /* block id: 65 */
        return p_622->g_comm_values[p_622->tid];
    }
    return l_153;
}


/* ------------------------------------------ */
/* 
 * reads : p_622->g_96 p_622->g_75 p_622->g_74 p_622->g_71 p_622->g_36
 * writes: p_622->g_75 p_622->g_71
 */
int32_t ** func_47(int64_t  p_48, int32_t  p_49, int32_t * p_50, struct S3 * p_622)
{ /* block id: 25 */
    int8_t *l_83 = &p_622->g_71;
    int32_t l_95[8][6][5] = {{{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL}},{{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL}},{{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL}},{{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL}},{{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL}},{{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL}},{{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL}},{{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL},{0x5080F123L,0x16B2CFE5L,0x16B2CFE5L,0x5080F123L,0x0F9E78BCL}}};
    int64_t l_103 = 0x4F404F4F1AD9D65DL;
    int16_t l_140 = (-1L);
    int8_t l_145 = 0x1FL;
    int16_t l_146 = 0x59B5L;
    uint32_t l_147 = 0UL;
    int i, j, k;
    for (p_49 = 25; (p_49 != (-22)); p_49 = safe_sub_func_int8_t_s_s(p_49, 8))
    { /* block id: 28 */
        int8_t *l_80 = (void*)0;
        int8_t **l_81[8] = {&l_80,&l_80,&l_80,&l_80,&l_80,&l_80,&l_80,&l_80};
        VECTOR(int32_t, 2) l_87 = (VECTOR(int32_t, 2))((-7L), 9L);
        int i;
        (*p_622->g_96) = (((l_87.y = (((((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(6L, ((VECTOR(int16_t, 2))(0x789CL, (-1L))), (-1L))).xxwwxwww)))).s3 || p_48) , ((-1L) == (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(FAKE_DIVERGE(p_622->global_2_offset, get_global_id(2), 10), 0UL, 0x6CF9L, 0UL, ((p_622->g_82 = l_80) == l_83), ((safe_rshift_func_uint16_t_u_u((((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(p_622->g_86.s8c34f7c350235b34)).s23, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_87.xyxxxyyyyxyxyyyy)).s05)).yxyyxxxxxxxyxxyy)).sec, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((safe_sub_func_int8_t_s_s((p_622->g_90 , (0x56L & ((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(p_622->l_comm_values[(safe_mod_func_uint32_t_u_u(p_622->tid, 21))], p_49)), 3L)) & 0L))), p_48)) | 0x7C037E6EL), (-7L), ((VECTOR(int32_t, 4))(0x14C507BDL)), 0x07126A37L, (-1L))).s3535720560267243)).sa4))).yxxxxyxy)).s35)), ((VECTOR(int32_t, 2))(0L)), 1L, (*p_50), 0L, 0x45F844B9L)).s6 == p_622->l_comm_values[(safe_mod_func_uint32_t_u_u(p_622->tid, 21))]) , 1UL) || l_95[1][5][0]), p_49)) && l_87.y), ((VECTOR(uint16_t, 2))(0x544DL)), ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 4))(0x4EECL)), 0xD1EAL, 0xF101L)).s5, 13)))) == p_49) == p_48) <= 0x56C2794937C96335L)) & 0x1E3A2289L) , l_87.x);
        for (p_622->g_75 = (-9); (p_622->g_75 < (-23)); --p_622->g_75)
        { /* block id: 34 */
            atomic_or(&p_622->g_atomic_reduction[get_linear_group_id()], (*p_622->g_96) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_622->v_collective += p_622->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if ((*p_622->g_74))
                continue;
        }
    }
    for (p_622->g_71 = 0; (p_622->g_71 < (-1)); p_622->g_71 = safe_sub_func_uint16_t_u_u(p_622->g_71, 5))
    { /* block id: 41 */
        int32_t *l_104[2];
        uint64_t l_113 = 0x632338F47762CD2BL;
        int i;
        for (i = 0; i < 2; i++)
            l_104[i] = &l_95[1][5][0];
        (*p_622->g_74) = (safe_mod_func_int32_t_s_s((*p_622->g_96), (~(5UL != l_103))));
        if ((*p_50))
            break;
        if ((atomic_inc(&p_622->l_atomic_input[13]) == 6))
        { /* block id: 45 */
            int32_t l_106 = 0x7277706BL;
            int32_t *l_105 = &l_106;
            int32_t *l_107 = &l_106;
            int64_t l_108 = (-4L);
            uint32_t l_109 = 4294967295UL;
            uint64_t l_112[10][1] = {{0x9FD8A59CA4D4997DL},{0x9FD8A59CA4D4997DL},{0x9FD8A59CA4D4997DL},{0x9FD8A59CA4D4997DL},{0x9FD8A59CA4D4997DL},{0x9FD8A59CA4D4997DL},{0x9FD8A59CA4D4997DL},{0x9FD8A59CA4D4997DL},{0x9FD8A59CA4D4997DL},{0x9FD8A59CA4D4997DL}};
            int i, j;
            l_107 = l_105;
            l_109--;
            l_112[0][0] = 0x0C9ACA79L;
            unsigned int result = 0;
            result += l_106;
            result += l_108;
            result += l_109;
            int l_112_i0, l_112_i1;
            for (l_112_i0 = 0; l_112_i0 < 10; l_112_i0++) {
                for (l_112_i1 = 0; l_112_i1 < 1; l_112_i1++) {
                    result += l_112[l_112_i0][l_112_i1];
                }
            }
            atomic_add(&p_622->l_special_values[13], result);
        }
        else
        { /* block id: 49 */
            (1 + 1);
        }
        ++l_113;
    }
    for (p_48 = 0; (p_48 < 26); ++p_48)
    { /* block id: 56 */
        int32_t *l_118 = &l_95[7][4][0];
        int32_t *l_119 = &p_622->g_75;
        int32_t *l_120 = &l_95[1][5][0];
        int32_t *l_121 = &p_622->g_75;
        int32_t *l_122 = &l_95[1][5][0];
        int32_t *l_123 = &l_95[1][5][0];
        int32_t *l_124 = &l_95[4][5][4];
        int32_t *l_125 = &l_95[1][5][0];
        int32_t *l_126 = &p_622->g_75;
        int32_t *l_127 = &p_622->g_75;
        int32_t *l_128 = &l_95[1][5][0];
        int32_t *l_129 = &l_95[1][5][0];
        int32_t *l_130 = &l_95[6][4][1];
        int32_t *l_131 = &l_95[1][2][1];
        int32_t *l_132 = &l_95[7][4][2];
        int32_t *l_133 = &l_95[1][5][0];
        int32_t l_134 = (-1L);
        int32_t *l_135 = &l_134;
        VECTOR(int32_t, 16) l_136 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
        int32_t *l_137 = &p_622->g_75;
        int32_t *l_138 = &p_622->g_75;
        int32_t *l_139 = &l_95[1][5][0];
        int32_t *l_141 = &l_134;
        int32_t *l_142 = &l_95[1][5][0];
        int32_t *l_143 = (void*)0;
        int32_t *l_144[1];
        int32_t **l_150 = &l_121;
        int i;
        for (i = 0; i < 1; i++)
            l_144[i] = &l_95[2][1][3];
        --l_147;
        (*l_150) = func_31((p_50 = func_31(&p_622->g_75, p_622)), p_622);
    }
    return &p_622->g_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_622->g_74
 * writes: p_622->g_75
 */
int64_t  func_51(int32_t ** p_52, int32_t  p_53, int32_t ** p_54, int64_t  p_55, struct S3 * p_622)
{ /* block id: 22 */
    int32_t l_73 = 0L;
    (*p_622->g_74) = l_73;
    return p_55;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[73];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 73; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[73];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 73; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[21];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 21; i++)
            l_comm_values[i] = 1;
    struct S3 c_623;
    struct S3* p_622 = &c_623;
    struct S3 c_624 = {
        0x709CC25FL, // p_622->g_2
        5L, // p_622->g_3
        0x176B5A7DL, // p_622->g_36
        &p_622->g_36, // p_622->g_37
        1L, // p_622->g_71
        0L, // p_622->g_75
        &p_622->g_75, // p_622->g_74
        &p_622->g_71, // p_622->g_82
        (VECTOR(int32_t, 16))(0x56AF6502L, (VECTOR(int32_t, 4))(0x56AF6502L, (VECTOR(int32_t, 2))(0x56AF6502L, (-7L)), (-7L)), (-7L), 0x56AF6502L, (-7L), (VECTOR(int32_t, 2))(0x56AF6502L, (-7L)), (VECTOR(int32_t, 2))(0x56AF6502L, (-7L)), 0x56AF6502L, (-7L), 0x56AF6502L, (-7L)), // p_622->g_86
        {0x5E7B4C6B90ED9ABDL}, // p_622->g_90
        &p_622->g_75, // p_622->g_96
        (-1L), // p_622->g_161
        {{{0x552E39F1L},{0x4DA7076BL},{0x42725619L},{0x4DA7076BL}},{{0x552E39F1L},{0x4DA7076BL},{0x42725619L},{0x4DA7076BL}},{{0x552E39F1L},{0x4DA7076BL},{0x42725619L},{0x4DA7076BL}},{{0x552E39F1L},{0x4DA7076BL},{0x42725619L},{0x4DA7076BL}}}, // p_622->g_163
        &p_622->g_163[3][1], // p_622->g_165
        &p_622->g_165, // p_622->g_164
        &p_622->g_3, // p_622->g_166
        {-8L}, // p_622->g_171
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_622->g_170
        {{{0x27C43D89L,0x5B96B6CEL,0x5B96B6CEL,0x27C43D89L,0x4A03A09FL,1L,1L,0x4A03A09FL},{0x27C43D89L,0x5B96B6CEL,0x5B96B6CEL,0x27C43D89L,0x4A03A09FL,1L,1L,0x4A03A09FL},{0x27C43D89L,0x5B96B6CEL,0x5B96B6CEL,0x27C43D89L,0x4A03A09FL,1L,1L,0x4A03A09FL},{0x27C43D89L,0x5B96B6CEL,0x5B96B6CEL,0x27C43D89L,0x4A03A09FL,1L,1L,0x4A03A09FL},{0x27C43D89L,0x5B96B6CEL,0x5B96B6CEL,0x27C43D89L,0x4A03A09FL,1L,1L,0x4A03A09FL}},{{0x27C43D89L,0x5B96B6CEL,0x5B96B6CEL,0x27C43D89L,0x4A03A09FL,1L,1L,0x4A03A09FL},{0x27C43D89L,0x5B96B6CEL,0x5B96B6CEL,0x27C43D89L,0x4A03A09FL,1L,1L,0x4A03A09FL},{0x27C43D89L,0x5B96B6CEL,0x5B96B6CEL,0x27C43D89L,0x4A03A09FL,1L,1L,0x4A03A09FL},{0x27C43D89L,0x5B96B6CEL,0x5B96B6CEL,0x27C43D89L,0x4A03A09FL,1L,1L,0x4A03A09FL},{0x27C43D89L,0x5B96B6CEL,0x5B96B6CEL,0x27C43D89L,0x4A03A09FL,1L,1L,0x4A03A09FL}}}, // p_622->g_188
        (-10L), // p_622->g_194
        &p_622->g_194, // p_622->g_193
        &p_622->g_161, // p_622->g_198
        {&p_622->g_166,&p_622->g_166}, // p_622->g_214
        {{0x387A5E89L,(-8L),(-1L),1L},{0x387A5E89L,(-8L),(-1L),1L},{0x387A5E89L,(-8L),(-1L),1L},{0x387A5E89L,(-8L),(-1L),1L},{0x387A5E89L,(-8L),(-1L),1L},{0x387A5E89L,(-8L),(-1L),1L},{0x387A5E89L,(-8L),(-1L),1L},{0x387A5E89L,(-8L),(-1L),1L},{0x387A5E89L,(-8L),(-1L),1L}}, // p_622->g_243
        65535UL, // p_622->g_254
        1UL, // p_622->g_286
        0x50AAL, // p_622->g_288
        &p_622->g_288, // p_622->g_287
        (VECTOR(int64_t, 2))(0x493751AEDE9A192EL, 1L), // p_622->g_390
        1UL, // p_622->g_398
        0x17432C04B858AB03L, // p_622->g_401
        {{&p_622->g_401,&p_622->g_401},{&p_622->g_401,&p_622->g_401}}, // p_622->g_400
        {{0x3BF022F934E81C3FL},{0x3BF022F934E81C3FL},{0x3BF022F934E81C3FL}}, // p_622->g_432
        (VECTOR(uint64_t, 2))(0xB3D007D81B34B7EAL, 18446744073709551615UL), // p_622->g_450
        {2L}, // p_622->g_480
        {{&p_622->g_480,(void*)0,&p_622->g_480,&p_622->g_480,&p_622->g_480,(void*)0,&p_622->g_480,(void*)0},{&p_622->g_480,(void*)0,&p_622->g_480,&p_622->g_480,&p_622->g_480,(void*)0,&p_622->g_480,(void*)0},{&p_622->g_480,(void*)0,&p_622->g_480,&p_622->g_480,&p_622->g_480,(void*)0,&p_622->g_480,(void*)0},{&p_622->g_480,(void*)0,&p_622->g_480,&p_622->g_480,&p_622->g_480,(void*)0,&p_622->g_480,(void*)0},{&p_622->g_480,(void*)0,&p_622->g_480,&p_622->g_480,&p_622->g_480,(void*)0,&p_622->g_480,(void*)0},{&p_622->g_480,(void*)0,&p_622->g_480,&p_622->g_480,&p_622->g_480,(void*)0,&p_622->g_480,(void*)0},{&p_622->g_480,(void*)0,&p_622->g_480,&p_622->g_480,&p_622->g_480,(void*)0,&p_622->g_480,(void*)0}}, // p_622->g_479
        &p_622->g_479[3][7], // p_622->g_478
        {1L}, // p_622->g_482
        (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x1C0C57FEL), 0x1C0C57FEL), // p_622->g_488
        (VECTOR(int32_t, 16))(0x5419050FL, (VECTOR(int32_t, 4))(0x5419050FL, (VECTOR(int32_t, 2))(0x5419050FL, 0L), 0L), 0L, 0x5419050FL, 0L, (VECTOR(int32_t, 2))(0x5419050FL, 0L), (VECTOR(int32_t, 2))(0x5419050FL, 0L), 0x5419050FL, 0L, 0x5419050FL, 0L), // p_622->g_513
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xDB3EL), 0xDB3EL), // p_622->g_516
        0x7C0CL, // p_622->g_570
        (VECTOR(uint64_t, 8))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x4A475C9481320A11L), 0x4A475C9481320A11L), 0x4A475C9481320A11L, 1UL, 0x4A475C9481320A11L), // p_622->g_587
        0xCEL, // p_622->g_593
        {0x093308F1712CC12CL}, // p_622->g_607
        {{0x3FB687A0CA8932FAL},{0x3FB687A0CA8932FAL},{0x3FB687A0CA8932FAL}}, // p_622->g_609
        (VECTOR(int8_t, 16))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0x1AL), 0x1AL), 0x1AL, (-9L), 0x1AL, (VECTOR(int8_t, 2))((-9L), 0x1AL), (VECTOR(int8_t, 2))((-9L), 0x1AL), (-9L), 0x1AL, (-9L), 0x1AL), // p_622->g_612
        0, // p_622->v_collective
        sequence_input[get_global_id(0)], // p_622->global_0_offset
        sequence_input[get_global_id(1)], // p_622->global_1_offset
        sequence_input[get_global_id(2)], // p_622->global_2_offset
        sequence_input[get_local_id(0)], // p_622->local_0_offset
        sequence_input[get_local_id(1)], // p_622->local_1_offset
        sequence_input[get_local_id(2)], // p_622->local_2_offset
        sequence_input[get_group_id(0)], // p_622->group_0_offset
        sequence_input[get_group_id(1)], // p_622->group_1_offset
        sequence_input[get_group_id(2)], // p_622->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 21)), permutations[0][get_linear_local_id()])), // p_622->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_623 = c_624;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_622);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_622->g_2, "p_622->g_2", print_hash_value);
    transparent_crc(p_622->g_3, "p_622->g_3", print_hash_value);
    transparent_crc(p_622->g_36, "p_622->g_36", print_hash_value);
    transparent_crc(p_622->g_71, "p_622->g_71", print_hash_value);
    transparent_crc(p_622->g_75, "p_622->g_75", print_hash_value);
    transparent_crc(p_622->g_86.s0, "p_622->g_86.s0", print_hash_value);
    transparent_crc(p_622->g_86.s1, "p_622->g_86.s1", print_hash_value);
    transparent_crc(p_622->g_86.s2, "p_622->g_86.s2", print_hash_value);
    transparent_crc(p_622->g_86.s3, "p_622->g_86.s3", print_hash_value);
    transparent_crc(p_622->g_86.s4, "p_622->g_86.s4", print_hash_value);
    transparent_crc(p_622->g_86.s5, "p_622->g_86.s5", print_hash_value);
    transparent_crc(p_622->g_86.s6, "p_622->g_86.s6", print_hash_value);
    transparent_crc(p_622->g_86.s7, "p_622->g_86.s7", print_hash_value);
    transparent_crc(p_622->g_86.s8, "p_622->g_86.s8", print_hash_value);
    transparent_crc(p_622->g_86.s9, "p_622->g_86.s9", print_hash_value);
    transparent_crc(p_622->g_86.sa, "p_622->g_86.sa", print_hash_value);
    transparent_crc(p_622->g_86.sb, "p_622->g_86.sb", print_hash_value);
    transparent_crc(p_622->g_86.sc, "p_622->g_86.sc", print_hash_value);
    transparent_crc(p_622->g_86.sd, "p_622->g_86.sd", print_hash_value);
    transparent_crc(p_622->g_86.se, "p_622->g_86.se", print_hash_value);
    transparent_crc(p_622->g_86.sf, "p_622->g_86.sf", print_hash_value);
    transparent_crc(p_622->g_90.f0, "p_622->g_90.f0", print_hash_value);
    transparent_crc(p_622->g_161, "p_622->g_161", print_hash_value);
    transparent_crc(p_622->g_171.f0, "p_622->g_171.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_622->g_188[i][j][k], "p_622->g_188[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_622->g_194, "p_622->g_194", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(p_622->g_243[i][j], "p_622->g_243[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_622->g_254, "p_622->g_254", print_hash_value);
    transparent_crc(p_622->g_286, "p_622->g_286", print_hash_value);
    transparent_crc(p_622->g_288, "p_622->g_288", print_hash_value);
    transparent_crc(p_622->g_390.x, "p_622->g_390.x", print_hash_value);
    transparent_crc(p_622->g_390.y, "p_622->g_390.y", print_hash_value);
    transparent_crc(p_622->g_398, "p_622->g_398", print_hash_value);
    transparent_crc(p_622->g_401, "p_622->g_401", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_622->g_432[i].f0, "p_622->g_432[i].f0", print_hash_value);

    }
    transparent_crc(p_622->g_450.x, "p_622->g_450.x", print_hash_value);
    transparent_crc(p_622->g_450.y, "p_622->g_450.y", print_hash_value);
    transparent_crc(p_622->g_480.f0, "p_622->g_480.f0", print_hash_value);
    transparent_crc(p_622->g_482.f0, "p_622->g_482.f0", print_hash_value);
    transparent_crc(p_622->g_488.x, "p_622->g_488.x", print_hash_value);
    transparent_crc(p_622->g_488.y, "p_622->g_488.y", print_hash_value);
    transparent_crc(p_622->g_488.z, "p_622->g_488.z", print_hash_value);
    transparent_crc(p_622->g_488.w, "p_622->g_488.w", print_hash_value);
    transparent_crc(p_622->g_513.s0, "p_622->g_513.s0", print_hash_value);
    transparent_crc(p_622->g_513.s1, "p_622->g_513.s1", print_hash_value);
    transparent_crc(p_622->g_513.s2, "p_622->g_513.s2", print_hash_value);
    transparent_crc(p_622->g_513.s3, "p_622->g_513.s3", print_hash_value);
    transparent_crc(p_622->g_513.s4, "p_622->g_513.s4", print_hash_value);
    transparent_crc(p_622->g_513.s5, "p_622->g_513.s5", print_hash_value);
    transparent_crc(p_622->g_513.s6, "p_622->g_513.s6", print_hash_value);
    transparent_crc(p_622->g_513.s7, "p_622->g_513.s7", print_hash_value);
    transparent_crc(p_622->g_513.s8, "p_622->g_513.s8", print_hash_value);
    transparent_crc(p_622->g_513.s9, "p_622->g_513.s9", print_hash_value);
    transparent_crc(p_622->g_513.sa, "p_622->g_513.sa", print_hash_value);
    transparent_crc(p_622->g_513.sb, "p_622->g_513.sb", print_hash_value);
    transparent_crc(p_622->g_513.sc, "p_622->g_513.sc", print_hash_value);
    transparent_crc(p_622->g_513.sd, "p_622->g_513.sd", print_hash_value);
    transparent_crc(p_622->g_513.se, "p_622->g_513.se", print_hash_value);
    transparent_crc(p_622->g_513.sf, "p_622->g_513.sf", print_hash_value);
    transparent_crc(p_622->g_516.x, "p_622->g_516.x", print_hash_value);
    transparent_crc(p_622->g_516.y, "p_622->g_516.y", print_hash_value);
    transparent_crc(p_622->g_516.z, "p_622->g_516.z", print_hash_value);
    transparent_crc(p_622->g_516.w, "p_622->g_516.w", print_hash_value);
    transparent_crc(p_622->g_570, "p_622->g_570", print_hash_value);
    transparent_crc(p_622->g_587.s0, "p_622->g_587.s0", print_hash_value);
    transparent_crc(p_622->g_587.s1, "p_622->g_587.s1", print_hash_value);
    transparent_crc(p_622->g_587.s2, "p_622->g_587.s2", print_hash_value);
    transparent_crc(p_622->g_587.s3, "p_622->g_587.s3", print_hash_value);
    transparent_crc(p_622->g_587.s4, "p_622->g_587.s4", print_hash_value);
    transparent_crc(p_622->g_587.s5, "p_622->g_587.s5", print_hash_value);
    transparent_crc(p_622->g_587.s6, "p_622->g_587.s6", print_hash_value);
    transparent_crc(p_622->g_587.s7, "p_622->g_587.s7", print_hash_value);
    transparent_crc(p_622->g_593, "p_622->g_593", print_hash_value);
    transparent_crc(p_622->g_607.f0, "p_622->g_607.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_622->g_609[i].f0, "p_622->g_609[i].f0", print_hash_value);

    }
    transparent_crc(p_622->g_612.s0, "p_622->g_612.s0", print_hash_value);
    transparent_crc(p_622->g_612.s1, "p_622->g_612.s1", print_hash_value);
    transparent_crc(p_622->g_612.s2, "p_622->g_612.s2", print_hash_value);
    transparent_crc(p_622->g_612.s3, "p_622->g_612.s3", print_hash_value);
    transparent_crc(p_622->g_612.s4, "p_622->g_612.s4", print_hash_value);
    transparent_crc(p_622->g_612.s5, "p_622->g_612.s5", print_hash_value);
    transparent_crc(p_622->g_612.s6, "p_622->g_612.s6", print_hash_value);
    transparent_crc(p_622->g_612.s7, "p_622->g_612.s7", print_hash_value);
    transparent_crc(p_622->g_612.s8, "p_622->g_612.s8", print_hash_value);
    transparent_crc(p_622->g_612.s9, "p_622->g_612.s9", print_hash_value);
    transparent_crc(p_622->g_612.sa, "p_622->g_612.sa", print_hash_value);
    transparent_crc(p_622->g_612.sb, "p_622->g_612.sb", print_hash_value);
    transparent_crc(p_622->g_612.sc, "p_622->g_612.sc", print_hash_value);
    transparent_crc(p_622->g_612.sd, "p_622->g_612.sd", print_hash_value);
    transparent_crc(p_622->g_612.se, "p_622->g_612.se", print_hash_value);
    transparent_crc(p_622->g_612.sf, "p_622->g_612.sf", print_hash_value);
    transparent_crc(p_622->v_collective, "p_622->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 73; i++)
            transparent_crc(p_622->g_special_values[i + 73 * get_linear_group_id()], "p_622->g_special_values[i + 73 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 73; i++)
            transparent_crc(p_622->l_special_values[i], "p_622->l_special_values[i]", print_hash_value);
    transparent_crc(p_622->l_comm_values[get_linear_local_id()], "p_622->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_622->g_comm_values[get_linear_group_id() * 21 + get_linear_local_id()], "p_622->g_comm_values[get_linear_group_id() * 21 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
