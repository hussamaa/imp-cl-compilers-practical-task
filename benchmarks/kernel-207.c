// --atomics 55 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 51,85,1 -l 51,1,1
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

__constant uint32_t permutations[10][51] = {
{13,16,0,9,41,27,39,38,47,46,7,48,36,8,44,34,22,50,25,14,6,30,20,12,28,40,45,2,42,49,17,11,29,23,1,5,18,4,24,35,19,43,3,37,10,26,32,15,31,33,21}, // permutation 0
{31,36,46,17,43,38,33,3,29,9,11,49,28,22,15,8,27,7,41,4,30,14,10,42,34,16,26,44,50,13,6,24,48,1,32,47,23,39,40,35,18,37,12,45,21,19,0,25,20,5,2}, // permutation 1
{4,0,36,16,39,26,12,40,45,6,7,22,47,23,38,48,8,14,25,29,44,34,35,46,15,50,9,2,28,13,5,20,31,18,3,10,1,27,41,43,11,32,21,49,37,19,42,17,33,30,24}, // permutation 2
{18,19,9,41,36,25,33,16,39,42,35,21,13,5,3,37,15,44,1,20,24,8,48,32,30,11,45,29,27,7,47,43,6,0,31,38,14,2,22,40,12,4,50,34,46,26,28,23,17,10,49}, // permutation 3
{14,6,5,31,0,39,34,9,1,16,11,30,10,40,8,21,7,35,46,49,29,47,44,25,37,50,45,24,3,41,20,28,23,42,4,15,33,17,32,48,36,2,38,12,13,43,18,26,19,27,22}, // permutation 4
{28,16,24,6,8,29,13,22,32,43,38,39,11,1,25,17,0,2,26,12,18,9,40,19,23,31,37,46,44,41,34,3,10,33,5,48,30,14,50,20,49,42,27,7,45,15,35,36,4,47,21}, // permutation 5
{31,48,40,19,44,2,33,34,12,38,32,27,9,23,5,10,16,30,26,14,13,21,17,39,43,46,15,4,50,49,45,1,35,6,8,20,3,47,29,25,0,37,18,22,7,36,41,24,28,42,11}, // permutation 6
{39,8,32,37,40,33,50,24,15,27,25,18,35,45,5,36,13,11,10,31,28,21,2,7,20,49,0,30,17,23,48,19,47,41,14,16,43,38,29,4,26,44,42,12,1,6,3,9,22,34,46}, // permutation 7
{27,35,43,16,36,24,1,5,19,39,48,44,30,3,0,40,46,33,41,28,22,10,45,37,42,17,7,26,13,6,8,9,38,49,12,20,15,31,21,4,32,47,18,14,11,23,50,29,25,2,34}, // permutation 8
{8,0,40,18,15,48,32,13,1,11,23,25,34,44,21,43,28,47,31,17,38,27,7,45,10,12,49,9,3,5,41,2,24,14,6,37,26,42,30,33,39,20,19,50,4,22,35,16,36,29,46} // permutation 9
};

// Seed: 1033656352

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t * volatile g_9;
    int32_t g_30;
    uint32_t g_32;
    VECTOR(uint8_t, 8) g_49;
    int8_t g_60;
    int8_t g_63;
    uint32_t g_76;
    int32_t *g_99;
    int32_t ** volatile g_100;
    uint64_t g_163;
    uint16_t g_172;
    int32_t g_183[9][5];
    int32_t * volatile g_182;
    int64_t g_195;
    int8_t g_196;
    uint8_t *g_214;
    uint8_t **g_213;
    VECTOR(uint8_t, 4) g_230;
    volatile VECTOR(uint8_t, 16) g_232;
    uint32_t g_237;
    uint32_t *g_236;
    VECTOR(uint16_t, 4) g_238;
    int16_t g_269;
    VECTOR(int16_t, 2) g_290;
    uint32_t *g_301;
    int8_t *g_319;
    int8_t **g_318;
    uint8_t *** volatile g_320;
    volatile int64_t g_347;
    volatile int64_t *g_346;
    int32_t **g_373;
    VECTOR(int8_t, 4) g_378;
    volatile VECTOR(int8_t, 4) g_382;
    VECTOR(int8_t, 2) g_383;
    VECTOR(uint16_t, 16) g_401;
    int64_t g_426;
    volatile VECTOR(uint32_t, 16) g_448;
    uint16_t g_449;
    volatile VECTOR(int16_t, 16) g_474;
    VECTOR(int16_t, 4) g_478;
    volatile VECTOR(int16_t, 2) g_479;
    int64_t **g_484;
    int8_t g_498;
    int32_t g_501;
    int32_t * volatile g_502;
    int32_t * volatile g_542;
    int32_t g_571;
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
int64_t  func_1(struct S0 * p_602);
int32_t * func_2(uint16_t  p_3, int64_t  p_4, int32_t * p_5, struct S0 * p_602);
int32_t * func_18(uint32_t  p_19, int32_t  p_20, int32_t * p_21, int32_t * p_22, uint64_t  p_23, struct S0 * p_602);
int32_t  func_44(uint32_t  p_45, int8_t  p_46, uint8_t  p_47, struct S0 * p_602);
uint16_t  func_64(int64_t  p_65, uint64_t  p_66, uint32_t  p_67, uint32_t  p_68, struct S0 * p_602);
int32_t * func_90(int8_t * p_91, uint32_t * p_92, uint32_t  p_93, int32_t  p_94, uint32_t * p_95, struct S0 * p_602);
uint64_t  func_103(uint32_t  p_104, struct S0 * p_602);
int32_t  func_134(uint32_t  p_135, uint64_t  p_136, struct S0 * p_602);
uint64_t  func_141(int64_t  p_142, int32_t  p_143, int32_t  p_144, int32_t ** p_145, int32_t  p_146, struct S0 * p_602);
int64_t  func_153(int8_t * p_154, int64_t  p_155, int32_t  p_156, uint32_t  p_157, uint32_t  p_158, struct S0 * p_602);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_602->g_9 p_602->g_comm_values p_602->g_32 p_602->g_30 p_602->l_comm_values p_602->g_49 p_602->g_76 p_602->g_63 p_602->g_99 p_602->g_100 p_602->g_60 p_602->g_172 p_602->g_163 p_602->g_182 p_602->g_183 p_602->g_213 p_602->g_214 p_602->g_238 p_602->g_196 p_602->g_230 p_602->g_269 p_602->g_318 p_602->g_320 p_602->g_346 p_602->g_347 p_602->g_449 p_602->g_237 p_602->g_319 p_602->g_502 p_602->g_542 p_602->g_373 p_602->g_571 p_602->g_232 p_602->g_478
 * writes: p_602->g_32 p_602->g_30 p_602->g_60 p_602->g_63 p_602->g_99 p_602->g_163 p_602->g_172 p_602->g_183 p_602->g_195 p_602->g_196 p_602->g_213 p_602->g_236 p_602->g_238 p_602->g_269 p_602->l_comm_values p_602->g_373 p_602->g_449 p_602->g_237 p_602->g_501 p_602->g_182 p_602->g_401 p_602->g_571 p_602->g_426 p_602->g_230
 */
int64_t  func_1(struct S0 * p_602)
{ /* block id: 4 */
    int32_t l_6[9] = {4L,4L,4L,4L,4L,4L,4L,4L,4L};
    VECTOR(uint32_t, 2) l_26 = (VECTOR(uint32_t, 2))(0x06B37990L, 1UL);
    int32_t *l_29 = &p_602->g_30;
    uint32_t *l_31 = (void*)0;
    uint32_t *l_33[6][5][8] = {{{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32}},{{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32}},{{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32}},{{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32}},{{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32}},{{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32},{&p_602->g_32,&p_602->g_32,&p_602->g_32,(void*)0,(void*)0,&p_602->g_32,&p_602->g_32,&p_602->g_32}}};
    int32_t **l_576 = &p_602->g_99;
    uint8_t **l_577 = &p_602->g_214;
    VECTOR(uint64_t, 2) l_596 = (VECTOR(uint64_t, 2))(0xBB08EC6DE03D9424L, 4UL);
    uint64_t *l_597 = &p_602->g_163;
    int64_t *l_598 = &p_602->g_426;
    uint8_t *l_599 = (void*)0;
    uint8_t *l_600 = (void*)0;
    uint8_t *l_601[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j, k;
    (*l_576) = func_2((l_6[8] != (safe_lshift_func_int8_t_s_s(((void*)0 == p_602->g_9), 0))), (((*l_29) = (safe_rshift_func_uint8_t_u_s((252UL != (safe_rshift_func_int8_t_s_s((((!(safe_add_func_int32_t_s_s((p_602->g_comm_values[p_602->tid] == (((safe_lshift_func_uint8_t_u_u(1UL, 2)) , func_18((p_602->g_32 |= (((safe_sub_func_uint32_t_u_u(l_26.y, (safe_mod_func_int64_t_s_s((-6L), (l_6[3] ^ l_26.x))))) , l_29) == &p_602->g_30)), p_602->g_comm_values[p_602->tid], l_31, l_31, p_602->g_30, p_602)) != l_31)), p_602->l_comm_values[(safe_mod_func_uint32_t_u_u(p_602->tid, 51))]))) & GROUP_DIVERGE(2, 1)) <= (*l_29)), 0))), 1))) , 0x4060A3B7DC4B54C5L), l_33[1][3][1], p_602);
    (*l_29) = ((((p_602->g_230.y ^= (((VECTOR(int32_t, 2))(4L, 0x47D70910L)).odd == (l_577 == (((*l_29) >= (p_602->g_49.s7 && ((*l_598) = (((-1L) && (safe_lshift_func_int8_t_s_u(((0x1428L < ((safe_rshift_func_int16_t_s_s((safe_div_func_uint64_t_u_u(0xD744FBF7202682F0L, ((*l_597) = (safe_div_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u(0x15ACL, ((safe_lshift_func_uint8_t_u_u(((-1L) > ((VECTOR(uint64_t, 16))(l_596.xyyxxyxxyyxxyyyx)).s4), ((((18446744073709551615UL <= 0x1066BF22E5FF14E1L) > 9L) < (*l_29)) > (*l_29)))) >= (*p_602->g_346)))), (*l_29))) ^ (*l_29)), (*p_602->g_319))), (*l_29)))))), 8)) <= 0UL)) <= p_602->g_478.w), 0))) == FAKE_DIVERGE(p_602->group_2_offset, get_group_id(2), 10))))) , l_577)))) != (*l_29)) , (*l_29)) == (*l_29));
    return (*l_29);
}


/* ------------------------------------------ */
/* 
 * reads : p_602->g_49 p_602->g_32 p_602->g_76 p_602->g_63 p_602->g_99 p_602->g_100 p_602->g_30 p_602->g_60 p_602->g_172 p_602->g_163 p_602->g_182 p_602->g_183 p_602->g_213 p_602->g_214 p_602->g_238 p_602->g_196 p_602->g_230 p_602->g_269 p_602->g_318 p_602->g_320 p_602->g_346 p_602->g_347 p_602->g_449 p_602->g_237 p_602->g_319 p_602->g_comm_values p_602->g_502 p_602->l_comm_values p_602->g_542 p_602->g_373 p_602->g_571 p_602->g_232
 * writes: p_602->g_60 p_602->g_63 p_602->g_32 p_602->g_30 p_602->g_99 p_602->g_163 p_602->g_172 p_602->g_183 p_602->g_195 p_602->g_196 p_602->g_213 p_602->g_236 p_602->g_238 p_602->g_269 p_602->l_comm_values p_602->g_373 p_602->g_449 p_602->g_237 p_602->g_501 p_602->g_182 p_602->g_401 p_602->g_571
 */
int32_t * func_2(uint16_t  p_3, int64_t  p_4, int32_t * p_5, struct S0 * p_602)
{ /* block id: 9 */
    VECTOR(uint8_t, 8) l_48 = (VECTOR(uint8_t, 8))(0x33L, (VECTOR(uint8_t, 4))(0x33L, (VECTOR(uint8_t, 2))(0x33L, 0x6AL), 0x6AL), 0x6AL, 0x33L, 0x6AL);
    VECTOR(uint8_t, 4) l_50 = (VECTOR(uint8_t, 4))(0x47L, (VECTOR(uint8_t, 2))(0x47L, 0x2AL), 0x2AL);
    int8_t *l_59 = &p_602->g_60;
    int8_t *l_61 = (void*)0;
    int8_t *l_62[3];
    uint32_t *l_75 = &p_602->g_76;
    int32_t *l_570 = &p_602->g_571;
    int i;
    for (i = 0; i < 3; i++)
        l_62[i] = &p_602->g_63;
    if ((atomic_inc(&p_602->l_atomic_input[11]) == 4))
    { /* block id: 11 */
        uint32_t l_34 = 0xD55E0ECFL;
        int64_t l_35 = 1L;
        int8_t l_36 = 0x7EL;
        uint32_t l_37 = 0xFECEB2CFL;
        int32_t l_40 = (-8L);
        uint32_t l_41 = 1UL;
        l_35 = l_34;
        ++l_37;
        ++l_41;
        unsigned int result = 0;
        result += l_34;
        result += l_35;
        result += l_36;
        result += l_37;
        result += l_40;
        result += l_41;
        atomic_add(&p_602->l_special_values[11], result);
    }
    else
    { /* block id: 15 */
        (1 + 1);
    }
    (*l_570) &= ((*p_602->g_542) = func_44((65535UL ^ (((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 2))(l_48.s06)).yxxxyyxx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 8))(p_602->g_49.s23037514)).s41, ((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 16))(5UL, ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_50.zx)))), 0xECL, 0x1EL)), 0x39L, 249UL, 0xF9L, 255UL)).s23, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(255UL, 0xCAL)), ((l_50.x , (safe_mod_func_uint64_t_u_u(0x942A26B13122E3BDL, ((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((((l_50.y | (safe_mod_func_int8_t_s_s((p_602->g_63 = ((*l_59) = 0x7DL)), 6UL))) && func_64(((((safe_mod_func_uint32_t_u_u(4294967290UL, ((safe_sub_func_uint16_t_u_u((0L || (safe_div_func_int64_t_s_s((((l_75 != (void*)0) < p_4) < 4294967295UL), p_602->g_32))), p_4)) | p_602->g_76))) , l_75) == l_75) , p_3), p_602->g_32, l_48.s2, l_48.s5, p_602)) > l_48.s2), l_48.s6)), 0xE268L)) && 0x24L)))) , 6UL), 0x1CL, 1UL, 0UL, 0UL, ((VECTOR(uint8_t, 4))(1UL)), 254UL, 0xF6L, 250UL, 0UL, 9UL)).se0))), 1UL, ((VECTOR(uint8_t, 8))(8UL)), l_50.w, 255UL, 0x4DL, 252UL)).s9ece, ((VECTOR(uint8_t, 4))(249UL))))), p_4, 0xA0L, 1UL, 1UL)))).s7617404066125112, ((VECTOR(uint8_t, 16))(255UL))))).s52, ((VECTOR(uint8_t, 2))(0UL))))).yyxx)).wyyyxwyw))).s4 | 0x49L)), l_50.y, l_48.s6, p_602));
    for (p_602->g_449 = (-17); (p_602->g_449 != 53); p_602->g_449 = safe_add_func_uint32_t_u_u(p_602->g_449, 3))
    { /* block id: 209 */
        (*l_570) &= (p_4 & ((safe_lshift_func_int16_t_s_s((~p_602->g_232.sd), 7)) , p_4));
    }
    (*p_602->g_373) = p_5;
    return p_5;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_18(uint32_t  p_19, int32_t  p_20, int32_t * p_21, int32_t * p_22, uint64_t  p_23, struct S0 * p_602)
{ /* block id: 6 */
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_602->g_163 p_602->l_comm_values p_602->g_347 p_602->g_183 p_602->g_60 p_602->g_182 p_602->g_542 p_602->g_449 p_602->g_318 p_602->g_319 p_602->g_230 p_602->g_373
 * writes: p_602->l_comm_values p_602->g_183 p_602->g_172 p_602->g_63 p_602->g_99
 */
int32_t  func_44(uint32_t  p_45, int8_t  p_46, uint8_t  p_47, struct S0 * p_602)
{ /* block id: 178 */
    int64_t *l_516 = (void*)0;
    int64_t **l_515 = &l_516;
    int64_t ***l_517 = &l_515;
    int32_t l_518 = 0x0F70CAEAL;
    int16_t *l_519[3][3][2] = {{{&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269}},{{&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269}},{{&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269}}};
    int32_t l_520 = 0L;
    int64_t *l_525 = (void*)0;
    int64_t *l_526 = (void*)0;
    uint64_t *l_539[5][9][1] = {{{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163}},{{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163}},{{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163}},{{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163}},{{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163},{&p_602->g_163}}};
    int32_t l_540 = 0L;
    int32_t l_544 = 6L;
    VECTOR(uint8_t, 8) l_555 = (VECTOR(uint8_t, 8))(0x72L, (VECTOR(uint8_t, 4))(0x72L, (VECTOR(uint8_t, 2))(0x72L, 250UL), 250UL), 250UL, 0x72L, 250UL);
    int i, j, k;
    (*l_517) = l_515;
    if ((FAKE_DIVERGE(p_602->local_1_offset, get_local_id(1), 10) , (l_518 <= (l_540 = ((((l_520 = p_602->g_163) < ((safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(((p_602->l_comm_values[(safe_mod_func_uint32_t_u_u(p_602->tid, 51))] &= l_518) > ((((((p_602->g_347 | p_45) < ((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((p_47 != (safe_sub_func_int32_t_s_s((l_518 , (p_47 & (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s(p_45, FAKE_DIVERGE(p_602->local_0_offset, get_local_id(0), 10))), 0x74L)), 0x01E5E118L)))), GROUP_DIVERGE(0, 1)))) , 6UL), l_518)), l_518)) , p_602->g_183[5][1])) , p_45) , p_45) > p_47) , p_602->g_60)), 14)), p_47)) && (-1L))) > FAKE_DIVERGE(p_602->group_1_offset, get_group_id(1), 10)) & p_47)))))
    { /* block id: 183 */
        int32_t *l_541 = (void*)0;
        (*p_602->g_182) ^= (((void*)0 != &p_602->g_195) || l_540);
        (*p_602->g_542) = (*p_602->g_182);
    }
    else
    { /* block id: 186 */
        int32_t l_543 = 0x52609B81L;
        int32_t *l_545 = &l_540;
        int32_t *l_546 = (void*)0;
        int32_t *l_547 = &l_518;
        int32_t *l_548 = &p_602->g_183[5][4];
        int32_t *l_549 = &p_602->g_183[6][2];
        int32_t *l_550 = &l_544;
        int32_t *l_551[10][7][3] = {{{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540}},{{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540}},{{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540}},{{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540}},{{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540}},{{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540}},{{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540}},{{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540}},{{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540}},{{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540},{&p_602->g_183[0][0],(void*)0,&l_540}}};
        uint32_t l_552 = 0x460961A6L;
        uint16_t *l_556 = &p_602->g_172;
        int64_t *l_559 = &p_602->g_426;
        int64_t ****l_566 = (void*)0;
        int64_t ***l_567 = &l_515;
        int64_t ****l_568[4];
        int64_t ***l_569 = &l_515;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_568[i] = &l_517;
        --l_552;
        (*l_548) |= ((*l_545) = (((((((*l_547) , (1L >= p_602->g_449)) >= (p_47 & ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(l_555.s00)).yyyx, ((VECTOR(uint8_t, 16))((0x2584C31DF86E40FAL == (((((*l_556) = 65532UL) || (safe_mul_func_uint8_t_u_u(l_555.s2, ((**p_602->g_318) = (-6L))))) , l_559) == &p_602->g_426)), ((VECTOR(uint8_t, 8))(0xB9L)), ((VECTOR(uint8_t, 2))(4UL)), 0xA4L, ((VECTOR(uint8_t, 4))(0xFFL)))).sf55d, ((VECTOR(uint8_t, 4))(255UL))))).w)) > 247UL) ^ l_540) && l_540) , (-5L)));
        if (((safe_lshift_func_uint8_t_u_s(p_47, 0)) & (p_45 | (((*l_550) || ((p_47 != 9UL) , ((void*)0 == l_549))) < (safe_mul_func_int8_t_s_s(((l_569 = (l_567 = &p_602->g_484)) == &p_602->g_484), l_544))))))
        { /* block id: 194 */
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_602->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 51)), permutations[(safe_mod_func_uint32_t_u_u(p_602->g_230.z, 10))][(safe_mod_func_uint32_t_u_u(p_602->tid, 51))]));
        }
        else
        { /* block id: 198 */
            (*l_545) ^= p_47;
            (*p_602->g_373) = &l_543;
        }
    }
    (*p_602->g_373) = &l_540;
    return l_520;
}


/* ------------------------------------------ */
/* 
 * reads : p_602->g_32 p_602->g_63 p_602->g_99 p_602->g_100 p_602->g_49 p_602->g_30 p_602->g_60 p_602->g_172 p_602->g_163 p_602->g_182 p_602->g_183 p_602->g_213 p_602->g_214 p_602->g_238 p_602->g_196 p_602->g_230 p_602->g_269 p_602->g_318 p_602->g_320 p_602->g_346 p_602->g_76 p_602->g_347 p_602->g_449 p_602->g_237 p_602->g_319 p_602->g_comm_values p_602->g_502
 * writes: p_602->g_32 p_602->g_63 p_602->g_30 p_602->g_99 p_602->g_163 p_602->g_172 p_602->g_183 p_602->g_195 p_602->g_196 p_602->g_213 p_602->g_236 p_602->g_238 p_602->g_60 p_602->g_269 p_602->l_comm_values p_602->g_373 p_602->g_449 p_602->g_237 p_602->g_501 p_602->g_182 p_602->g_401
 */
uint16_t  func_64(int64_t  p_65, uint64_t  p_66, uint32_t  p_67, uint32_t  p_68, struct S0 * p_602)
{ /* block id: 20 */
    uint16_t l_85 = 0UL;
    int32_t *l_86 = &p_602->g_30;
    int32_t l_120 = (-3L);
    int32_t l_334 = (-7L);
    VECTOR(int64_t, 2) l_353 = (VECTOR(int64_t, 2))(0x224AB212BE98BD8EL, 0x52433469A6C37CB8L);
    int32_t l_422 = 1L;
    int32_t l_428 = (-10L);
    int16_t l_430 = 0x229EL;
    int32_t l_431 = 0x2A287B43L;
    int32_t l_433 = 1L;
    int32_t l_434 = 0x00991AD8L;
    int32_t l_435[6][7] = {{(-1L),0x442B038FL,(-1L),(-1L),0x442B038FL,(-1L),(-1L)},{(-1L),0x442B038FL,(-1L),(-1L),0x442B038FL,(-1L),(-1L)},{(-1L),0x442B038FL,(-1L),(-1L),0x442B038FL,(-1L),(-1L)},{(-1L),0x442B038FL,(-1L),(-1L),0x442B038FL,(-1L),(-1L)},{(-1L),0x442B038FL,(-1L),(-1L),0x442B038FL,(-1L),(-1L)},{(-1L),0x442B038FL,(-1L),(-1L),0x442B038FL,(-1L),(-1L)}};
    uint32_t l_460[8] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
    uint8_t ***l_467 = &p_602->g_213;
    int i, j;
    for (p_602->g_32 = 0; (p_602->g_32 == 20); p_602->g_32++)
    { /* block id: 23 */
        if ((atomic_inc(&p_602->l_atomic_input[4]) == 7))
        { /* block id: 25 */
            VECTOR(int16_t, 2) l_79 = (VECTOR(int16_t, 2))((-1L), 6L);
            uint32_t l_80 = 4294967295UL;
            uint32_t l_81 = 1UL;
            int32_t l_82 = 0x455642E0L;
            int i;
            l_80 = l_79.y;
            l_82 &= (l_81 = (-1L));
            unsigned int result = 0;
            result += l_79.y;
            result += l_79.x;
            result += l_80;
            result += l_81;
            result += l_82;
            atomic_add(&p_602->l_special_values[4], result);
        }
        else
        { /* block id: 29 */
            (1 + 1);
        }
        for (p_602->g_63 = (-25); (p_602->g_63 != 10); p_602->g_63++)
        { /* block id: 34 */
            if (p_67)
                break;
            return l_85;
        }
    }
    (*l_86) = 0x51128280L;
    for (p_602->g_63 = 0; (p_602->g_63 != 0); p_602->g_63 = safe_add_func_int32_t_s_s(p_602->g_63, 7))
    { /* block id: 42 */
        uint32_t *l_89[4][5] = {{&p_602->g_76,&p_602->g_76,&p_602->g_76,&p_602->g_76,&p_602->g_76},{&p_602->g_76,&p_602->g_76,&p_602->g_76,&p_602->g_76,&p_602->g_76},{&p_602->g_76,&p_602->g_76,&p_602->g_76,&p_602->g_76,&p_602->g_76},{&p_602->g_76,&p_602->g_76,&p_602->g_76,&p_602->g_76,&p_602->g_76}};
        int8_t *l_96[8][7] = {{&p_602->g_60,&p_602->g_60,(void*)0,(void*)0,(void*)0,&p_602->g_60,&p_602->g_60},{&p_602->g_60,&p_602->g_60,(void*)0,(void*)0,(void*)0,&p_602->g_60,&p_602->g_60},{&p_602->g_60,&p_602->g_60,(void*)0,(void*)0,(void*)0,&p_602->g_60,&p_602->g_60},{&p_602->g_60,&p_602->g_60,(void*)0,(void*)0,(void*)0,&p_602->g_60,&p_602->g_60},{&p_602->g_60,&p_602->g_60,(void*)0,(void*)0,(void*)0,&p_602->g_60,&p_602->g_60},{&p_602->g_60,&p_602->g_60,(void*)0,(void*)0,(void*)0,&p_602->g_60,&p_602->g_60},{&p_602->g_60,&p_602->g_60,(void*)0,(void*)0,(void*)0,&p_602->g_60,&p_602->g_60},{&p_602->g_60,&p_602->g_60,(void*)0,(void*)0,(void*)0,&p_602->g_60,&p_602->g_60}};
        int32_t l_97 = 0x22DC96F0L;
        int32_t l_98 = 0x44B85C55L;
        VECTOR(uint8_t, 8) l_116 = (VECTOR(uint8_t, 8))(0x4DL, (VECTOR(uint8_t, 4))(0x4DL, (VECTOR(uint8_t, 2))(0x4DL, 1UL), 1UL), 1UL, 0x4DL, 1UL);
        VECTOR(int16_t, 8) l_293 = (VECTOR(int16_t, 8))(0x156FL, (VECTOR(int16_t, 4))(0x156FL, (VECTOR(int16_t, 2))(0x156FL, 0x25F8L), 0x25F8L), 0x25F8L, 0x156FL, 0x25F8L);
        VECTOR(uint32_t, 8) l_309 = (VECTOR(uint32_t, 8))(0x7B9EC7BCL, (VECTOR(uint32_t, 4))(0x7B9EC7BCL, (VECTOR(uint32_t, 2))(0x7B9EC7BCL, 1UL), 1UL), 1UL, 0x7B9EC7BCL, 1UL);
        int32_t l_328 = 1L;
        int32_t l_330 = 1L;
        int32_t l_336 = 0L;
        VECTOR(int32_t, 8) l_337 = (VECTOR(int32_t, 8))(0x114E6DE1L, (VECTOR(int32_t, 4))(0x114E6DE1L, (VECTOR(int32_t, 2))(0x114E6DE1L, (-3L)), (-3L)), (-3L), 0x114E6DE1L, (-3L));
        int64_t *l_344 = (void*)0;
        uint8_t ***l_358[9][8][3] = {{{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213}},{{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213}},{{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213}},{{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213}},{{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213}},{{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213}},{{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213}},{{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213}},{{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213},{(void*)0,&p_602->g_213,&p_602->g_213}}};
        int16_t l_439 = 0x7E26L;
        uint16_t l_443 = 0xA586L;
        int64_t **l_494 = &l_344;
        int64_t ***l_493 = &l_494;
        VECTOR(uint16_t, 8) l_495 = (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 3UL), 3UL), 3UL, 0UL, 3UL);
        uint16_t *l_511 = (void*)0;
        uint16_t *l_512 = (void*)0;
        uint16_t *l_513 = (void*)0;
        uint16_t *l_514 = &p_602->g_449;
        int i, j, k;
        if ((l_89[1][1] == (void*)0))
        { /* block id: 43 */
            VECTOR(uint8_t, 8) l_117 = (VECTOR(uint8_t, 8))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 9UL), 9UL), 9UL, 253UL, 9UL);
            int32_t l_121 = 0x35813BB0L;
            VECTOR(uint32_t, 16) l_133 = (VECTOR(uint32_t, 16))(0xD3EBDD5AL, (VECTOR(uint32_t, 4))(0xD3EBDD5AL, (VECTOR(uint32_t, 2))(0xD3EBDD5AL, 4294967293UL), 4294967293UL), 4294967293UL, 0xD3EBDD5AL, 4294967293UL, (VECTOR(uint32_t, 2))(0xD3EBDD5AL, 4294967293UL), (VECTOR(uint32_t, 2))(0xD3EBDD5AL, 4294967293UL), 0xD3EBDD5AL, 4294967293UL, 0xD3EBDD5AL, 4294967293UL);
            uint32_t l_161 = 0x51F803E9L;
            int32_t l_332 = 0x0A925A2EL;
            uint8_t l_350 = 0xCAL;
            VECTOR(int16_t, 16) l_385 = (VECTOR(int16_t, 16))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0x20A4L), 0x20A4L), 0x20A4L, 4L, 0x20A4L, (VECTOR(int16_t, 2))(4L, 0x20A4L), (VECTOR(int16_t, 2))(4L, 0x20A4L), 4L, 0x20A4L, 4L, 0x20A4L);
            int32_t l_411 = 0x3839A9A9L;
            int32_t l_414 = 0x18083F6BL;
            int32_t l_415 = (-1L);
            int32_t l_416 = 0x14D93364L;
            int32_t l_418 = (-10L);
            int32_t l_420 = (-2L);
            int32_t l_423 = 0x7F3BE770L;
            int32_t l_424 = 0L;
            int16_t l_425 = 0x1299L;
            int32_t l_429 = 2L;
            int32_t l_432[5];
            int16_t l_440 = 0x47BFL;
            int32_t *l_450[10][7][3] = {{{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420}},{{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420}},{{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420}},{{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420}},{{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420}},{{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420}},{{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420}},{{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420}},{{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420}},{{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420},{&p_602->g_30,(void*)0,&l_420}}};
            uint64_t l_473 = 9UL;
            VECTOR(int16_t, 2) l_476 = (VECTOR(int16_t, 2))((-5L), (-1L));
            int64_t ***l_489 = (void*)0;
            int32_t l_497 = 0x6FF0BDB8L;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_432[i] = 0x49DB21FFL;
            (*p_602->g_100) = func_90(l_96[6][5], &p_602->g_76, l_97, (l_98 &= ((void*)0 == &p_602->g_32)), l_86, p_602);
            for (p_67 = 0; (p_67 == 53); p_67 = safe_add_func_uint32_t_u_u(p_67, 9))
            { /* block id: 50 */
                uint8_t *l_112 = (void*)0;
                uint8_t *l_113 = (void*)0;
                uint8_t *l_114 = (void*)0;
                uint8_t *l_115 = (void*)0;
                VECTOR(uint8_t, 16) l_118 = (VECTOR(uint8_t, 16))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0x66L), 0x66L), 0x66L, 248UL, 0x66L, (VECTOR(uint8_t, 2))(248UL, 0x66L), (VECTOR(uint8_t, 2))(248UL, 0x66L), 248UL, 0x66L, 248UL, 0x66L);
                uint8_t *l_119[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t *l_124 = (void*)0;
                uint64_t *l_162[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int64_t *l_193 = (void*)0;
                int64_t *l_194 = &p_602->g_195;
                uint32_t l_286 = 4294967291UL;
                VECTOR(int8_t, 2) l_308 = (VECTOR(int8_t, 2))((-1L), 1L);
                VECTOR(uint8_t, 8) l_312 = (VECTOR(uint8_t, 8))(0x6FL, (VECTOR(uint8_t, 4))(0x6FL, (VECTOR(uint8_t, 2))(0x6FL, 1UL), 1UL), 1UL, 0x6FL, 1UL);
                int64_t l_321 = 0x283B79B07E79E752L;
                int32_t l_326 = 0x77E45F49L;
                int32_t l_331 = 0x450A4040L;
                int32_t l_333 = 0x385F0BA0L;
                int32_t l_335 = 0L;
                int32_t l_338 = 0L;
                uint16_t l_339[6];
                VECTOR(int64_t, 16) l_351 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 9L), 9L), 9L, 0L, 9L, (VECTOR(int64_t, 2))(0L, 9L), (VECTOR(int64_t, 2))(0L, 9L), 0L, 9L, 0L, 9L);
                VECTOR(int8_t, 2) l_379 = (VECTOR(int8_t, 2))(0x23L, 0x42L);
                VECTOR(int8_t, 8) l_381 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x79L), 0x79L), 0x79L, 0L, 0x79L);
                VECTOR(int8_t, 8) l_384 = (VECTOR(int8_t, 8))(0x59L, (VECTOR(int8_t, 4))(0x59L, (VECTOR(int8_t, 2))(0x59L, 0x6BL), 0x6BL), 0x6BL, 0x59L, 0x6BL);
                VECTOR(uint8_t, 16) l_389 = (VECTOR(uint8_t, 16))(0x9BL, (VECTOR(uint8_t, 4))(0x9BL, (VECTOR(uint8_t, 2))(0x9BL, 0xF8L), 0xF8L), 0xF8L, 0x9BL, 0xF8L, (VECTOR(uint8_t, 2))(0x9BL, 0xF8L), (VECTOR(uint8_t, 2))(0x9BL, 0xF8L), 0x9BL, 0xF8L, 0x9BL, 0xF8L);
                int64_t l_421 = (-7L);
                int32_t l_427 = 0x684A9DFDL;
                int32_t l_441 = 0x42C2BDD7L;
                int32_t l_442 = 0x5923C2EDL;
                int64_t **l_483 = (void*)0;
                int i;
                for (i = 0; i < 6; i++)
                    l_339[i] = 0UL;
                l_98 = (((((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(255UL, 254UL)))).yxyy, ((VECTOR(uint8_t, 4))((l_97 = ((p_65 || GROUP_DIVERGE(1, 1)) || func_103((7L != (*l_86)), p_602))), ((VECTOR(uint8_t, 2))(l_116.s76)), 1UL)), ((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 2))(l_117.s44)).xyxxyxxx, (uint8_t)l_98, (uint8_t)((*l_86) = p_65)))).s1703365556551076, ((VECTOR(uint8_t, 4))(l_118.s4a10)).xyzyxwwxyzywyzzw))).s7b85))).wwyzwwwz, ((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 2))(0x1DL, 0xC9L)).yyyyyyyx, (uint8_t)(p_602->g_49.s5--), (uint8_t)p_68))).s57, (uint8_t)((l_124 == (((safe_add_func_int16_t_s_s(func_103((((l_121 = (safe_rshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_add_func_uint64_t_u_u(((GROUP_DIVERGE(0, 1) != ((VECTOR(uint32_t, 8))(l_133.s4eeae813)).s7) | ((VECTOR(int8_t, 4))(0x5DL, ((VECTOR(int8_t, 2))(0x61L, 0x50L)), 1L)).w), 5UL)) || p_602->g_63), 10)) || p_602->g_49.s5), 14))) <= p_602->g_63) , 0UL), p_602), p_67)) < l_97) , (void*)0)) < GROUP_DIVERGE(1, 1))))).yyxxxxxxxxxyyyxx)).even)))).even, ((VECTOR(uint8_t, 4))(0xDEL))))).yyzyzzxx))).s7 > 247UL) , 6UL) > 0x9FD58AA24F531248L);
                if (func_134((safe_mod_func_int64_t_s_s(((p_602->g_49.s3 || func_103((safe_lshift_func_uint8_t_u_s(0x8AL, (func_141((safe_rshift_func_uint8_t_u_u(p_602->g_63, func_103((safe_sub_func_int16_t_s_s((*l_86), (0x8DL | (func_103(((p_602->g_196 = ((*l_194) = (safe_mod_func_int16_t_s_s(((func_153(&p_602->g_60, (p_65 > (p_602->g_163 = (p_602->g_63 , (safe_div_func_uint16_t_u_u((~((((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 4))((((-1L) == l_97) < p_67), l_161, 252UL, 0UL)).zwywzzyxyzyxyxxy, ((VECTOR(uint8_t, 16))(249UL))))).s1 & p_602->g_49.s4) || p_65)), p_602->g_63))))), l_98, p_602->g_49.s0, p_602->g_60, p_602) > p_66) == 4294967286UL), p_67)))) , 0x6126E07AL), p_602) , 0x0BL)))), p_602))), l_98, p_602->g_32, &l_124, p_68, p_602) >= l_116.s2))), p_602)) >= 0x5ED5E2A7L), 0x31D9A2A01E9A5BD9L)), p_602->g_49.s1, p_602))
                { /* block id: 102 */
                    uint32_t **l_300[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    uint16_t *l_302 = (void*)0;
                    uint16_t *l_303 = &l_85;
                    int32_t l_317 = 0x52C18B5EL;
                    int i;
                    for (l_161 = 0; (l_161 == 41); l_161 = safe_add_func_int64_t_s_s(l_161, 3))
                    { /* block id: 105 */
                        int64_t *l_277 = (void*)0;
                        int64_t *l_278 = (void*)0;
                        int64_t *l_279 = (void*)0;
                        int64_t *l_280[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int32_t l_281 = 0L;
                        int32_t l_287 = 0x23D5A6EBL;
                        int i;
                        l_287 &= (((VECTOR(uint16_t, 2))(0x7CE8L, 65533UL)).even & (p_65 , (!((((((((safe_mod_func_int16_t_s_s(((l_281 &= p_602->g_49.s3) || 0L), p_66)) , &p_602->g_9) == (void*)0) != p_65) , ((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((p_66 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))((p_602->g_63 <= GROUP_DIVERGE(2, 1)), 0x0F5AB098L, ((VECTOR(int32_t, 4))((-3L))), 0L, ((VECTOR(int32_t, 8))(1L)), (-1L))))).even, ((VECTOR(int32_t, 8))(0x729274E3L))))), ((VECTOR(int32_t, 8))(0x366C52A4L)))).se), p_65)), p_602->g_269)) ^ 1UL)) , FAKE_DIVERGE(p_602->group_0_offset, get_group_id(0), 10)) == l_286) == p_68))));
                        return p_66;
                    }
                    (*l_86) = (((VECTOR(int16_t, 16))(p_602->g_290.yyxyyxxxyyxyxyxx)).s9 & (l_317 = (((safe_add_func_uint16_t_u_u(l_117.s0, ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 16))(l_293.s3763446526123107)).sb1c9, (int16_t)((((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((l_86 == (p_68 , (p_602->g_301 = l_89[1][1]))), 0)) & (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x17A0L, 2L)).xxyy)).w >= (++(*l_303)))), (((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 16))((l_121 ^= 0L), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x56L, 0x0EL)), 0x1EL, l_98, ((VECTOR(int8_t, 4))(l_308.xyyx)).w, (((VECTOR(uint32_t, 16))(l_309.s6421125417727313)).se && ((((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_312.s53)))).odd, ((VECTOR(uint8_t, 4))(FAKE_DIVERGE(p_602->local_1_offset, get_local_id(1), 10), ((VECTOR(uint8_t, 2))(0xA9L, 1UL)), 9UL)), (safe_sub_func_int8_t_s_s((((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(0x17D14653L, (*p_602->g_182), p_65, (-10L), ((safe_mod_func_uint16_t_u_u(l_317, 0x6E04L)) && GROUP_DIVERGE(0, 1)), ((VECTOR(int32_t, 2))((-1L))), (-1L))).even, (int32_t)(-7L)))).x && (*l_86)), 1UL)), 1UL, ((VECTOR(uint8_t, 8))(255UL)), 0x37L)).s60)).xyxx, ((VECTOR(uint8_t, 4))(255UL))))).xyzwxxwzywywwxzw, (uint8_t)p_67))).even, ((VECTOR(uint8_t, 8))(255UL))))).s6, 0xF8L)) > p_602->g_49.s3) <= 0x2B4156664ACD50D9L) > p_602->g_237)), 0x11L, 7L)), ((VECTOR(int8_t, 2))((-1L))), (-4L), ((VECTOR(int8_t, 4))(1L)))).s6, FAKE_DIVERGE(p_602->local_2_offset, get_local_id(2), 10))) , 0x16DE82977ADD14C6L) , (-1L)))), p_68)) ^ p_68) <= FAKE_DIVERGE(p_602->local_2_offset, get_local_id(2), 10)) & 0x6DE3L), (int16_t)(*l_86)))).ywxyyzxy, ((VECTOR(int16_t, 8))((-1L)))))).s1)) , p_602->g_318) != &p_602->g_319)));
                    (*p_602->g_320) = &p_602->g_214;
                    if (l_321)
                        break;
                }
                else
                { /* block id: 117 */
                    int16_t l_322 = 0L;
                    int32_t *l_323 = &p_602->g_183[5][4];
                    int32_t *l_324 = &p_602->g_183[5][4];
                    int32_t *l_325 = &p_602->g_183[5][4];
                    int32_t *l_327[8] = {&l_98,&l_98,&l_98,&l_98,&l_98,&l_98,&l_98,&l_98};
                    int8_t l_329 = 0x27L;
                    int64_t **l_345 = &l_344;
                    VECTOR(int64_t, 2) l_352 = (VECTOR(int64_t, 2))(0x4B2D632D0E156FA1L, 0x30436C59E75CB039L);
                    uint8_t ***l_354 = &p_602->g_213;
                    int64_t *l_355 = (void*)0;
                    int64_t *l_356 = (void*)0;
                    int16_t *l_357[5] = {&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269};
                    int i;
                    l_339[3]++;
                    (*l_86) |= ((safe_mul_func_int8_t_s_s(((l_97 = (((*l_323) = (4294967295UL && (((&p_602->g_172 == &p_602->g_172) ^ ((((((*l_345) = l_344) != p_602->g_346) ^ (safe_sub_func_int16_t_s_s(0x5E3DL, l_350))) , ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))((-1L), ((VECTOR(int64_t, 2))(l_351.s76)), 5L, ((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(l_352.yy)))), 0x337888637AB950D4L, 0x6E6E3DF97D46C529L)).odd, ((VECTOR(int64_t, 16))(l_353.yxxyxyxxxxxyxxxy)).s2f))), 1L, 0x68981D3EAD75A21BL)))).s5) || (p_602->l_comm_values[(safe_mod_func_uint32_t_u_u(p_602->tid, 51))] = (((*l_354) = (*p_602->g_320)) == &p_602->g_214)))) | p_68))) >= GROUP_DIVERGE(1, 1))) < p_65), 0xB2L)) || p_67);
                }
                if (((void*)0 != l_358[5][6][2]))
                { /* block id: 126 */
                    int32_t **l_372 = &l_86;
                    int32_t ***l_371[9][2][4] = {{{&l_372,&l_372,&l_372,&l_372},{&l_372,&l_372,&l_372,&l_372}},{{&l_372,&l_372,&l_372,&l_372},{&l_372,&l_372,&l_372,&l_372}},{{&l_372,&l_372,&l_372,&l_372},{&l_372,&l_372,&l_372,&l_372}},{{&l_372,&l_372,&l_372,&l_372},{&l_372,&l_372,&l_372,&l_372}},{{&l_372,&l_372,&l_372,&l_372},{&l_372,&l_372,&l_372,&l_372}},{{&l_372,&l_372,&l_372,&l_372},{&l_372,&l_372,&l_372,&l_372}},{{&l_372,&l_372,&l_372,&l_372},{&l_372,&l_372,&l_372,&l_372}},{{&l_372,&l_372,&l_372,&l_372},{&l_372,&l_372,&l_372,&l_372}},{{&l_372,&l_372,&l_372,&l_372},{&l_372,&l_372,&l_372,&l_372}}};
                    VECTOR(int8_t, 16) l_376 = (VECTOR(int8_t, 16))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0L), 0L), 0L, (-7L), 0L, (VECTOR(int8_t, 2))((-7L), 0L), (VECTOR(int8_t, 2))((-7L), 0L), (-7L), 0L, (-7L), 0L);
                    VECTOR(int8_t, 2) l_377 = (VECTOR(int8_t, 2))(0x3DL, 0x52L);
                    VECTOR(int8_t, 4) l_380 = (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, (-8L)), (-8L));
                    int16_t *l_386 = &p_602->g_269;
                    VECTOR(uint8_t, 2) l_390 = (VECTOR(uint8_t, 2))(3UL, 0xDCL);
                    uint32_t l_391 = 1UL;
                    uint32_t l_392 = 4294967295UL;
                    uint32_t l_436 = 4294967295UL;
                    int i, j, k;
                    (**l_372) = ((safe_rshift_func_int16_t_s_u(((l_337.s1 = (safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(p_66, (safe_mod_func_int16_t_s_s(0L, (((safe_lshift_func_int8_t_s_s((((safe_div_func_uint8_t_u_u(((p_602->g_373 = &p_602->g_99) == &p_602->g_9), (p_602->g_60 |= (safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 2))(0x18L, 0x60L)), ((VECTOR(int8_t, 8))(l_376.s649ff226)).s45, ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_377.xxxyxxxyyxxyyyyx)).s82)).yyxxxyxyxyxxyxyy))).seb28, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_602->g_378.yxzxxwwx)).s7276576704537360)).sb3, ((VECTOR(int8_t, 16))(l_379.xxyyyxyxxyxxxxxx)).sf5, ((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 2))(0x18L, 0x5DL)).xxyxyxxx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(l_380.wzxw)).lo, ((VECTOR(int8_t, 8))(l_381.s22335760)).s33))).xxxy, ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x33L, 0x0DL)).xyxy)).hi, ((VECTOR(int8_t, 16))(0x70L, ((VECTOR(int8_t, 4))((p_66 , ((VECTOR(int8_t, 8))(0x03L, (-7L), ((VECTOR(int8_t, 4))((l_326 = (l_98 = ((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(p_602->g_382.xzwy)).xxyyzzwxywzxywxw, ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(2L, (-1L))).yyxyyxyxxyxxxxxx, ((VECTOR(int8_t, 16))(p_602->g_383.xyyyxyxyyyxyxyyx))))).s3572)).hi, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(l_384.s2606)).odd, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))((-1L), (-1L))).xyyx)), ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 4))(((8L == ((*l_386) |= ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_385.s3a70)).even)).hi)) ^ (((safe_lshift_func_int16_t_s_u((-1L), (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 4))(l_389.s30da)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 2))(l_390.yy)).yyxx, (uint8_t)(4294967295UL <= l_391)))), ((VECTOR(uint8_t, 2))(255UL)), 2UL, 2UL)).s1476043740162374, (uint8_t)p_67))))).s1b25, ((VECTOR(uint8_t, 4))(0x86L))))).xxzwzxyz)).s25, ((VECTOR(uint8_t, 2))(6UL))))).yyyxxyyx)).s1 < (**p_602->g_318)))) != (-1L)) , 2L)), 4L, 0x6FL, 0x15L)).wxwywzxx, ((VECTOR(int8_t, 8))(1L))))).even))), 0x75L, 0x60L, ((VECTOR(int8_t, 2))(0x0BL)), 0x4FL, p_65, (**p_602->g_318), p_67, p_65, ((VECTOR(int8_t, 2))(0x7AL)), 1L)).s13))).xxyyxxxy)), ((VECTOR(int8_t, 8))(4L)), ((VECTOR(int8_t, 8))(1L))))).s32)).xyxy)).even))).yxyyyxyxyyyyyxxy))).lo, ((VECTOR(int8_t, 8))((-1L))), ((VECTOR(int8_t, 8))((-1L)))))).s1017335435615530, ((VECTOR(int8_t, 16))(9L)), ((VECTOR(int8_t, 16))(0x2CL))))).sc)), p_66, 0L, 0x41L)), (-1L), 0L)).s0), ((VECTOR(int8_t, 2))((-1L))), (-1L))), 0x55L, (-4L), ((VECTOR(int8_t, 2))((-9L))), 0x4FL, 0L, (**p_602->g_318), ((VECTOR(int8_t, 2))(0x3EL)), 0x70L, 0x7EL)).s95))), (int8_t)0x04L, (int8_t)(**p_602->g_318)))).yxxx))), (*p_602->g_319), 0x78L, 0x1AL, (-6L))), ((VECTOR(int8_t, 8))(0x69L))))).s75))).yxyx, ((VECTOR(int8_t, 4))(0x2AL))))).yxwzzyzzwyzwxwxz)).s2d93, ((VECTOR(int8_t, 4))(0L))))).lo))), ((VECTOR(uint8_t, 2))(0UL))))).xyyx, ((VECTOR(int16_t, 4))(1L))))).wyxxwxwyywzzzyyw)), ((VECTOR(int16_t, 16))(0x37E1L))))).s4a)).xyyxxyxxyyxxyyyy)).s7, p_602->g_230.y))))) , &l_339[5]) == (void*)0), 5)) > (*l_86)) | l_392))))) ^ p_602->g_49.s5), p_67))) == p_602->g_76), p_602->g_238.z)) , p_66);
                    for (l_335 = (-18); (l_335 > (-11)); l_335 = safe_add_func_uint8_t_u_u(l_335, 6))
                    { /* block id: 136 */
                        VECTOR(int64_t, 4) l_410 = (VECTOR(int64_t, 4))(6L, (VECTOR(int64_t, 2))(6L, (-9L)), (-9L));
                        int16_t l_412 = 0L;
                        int32_t l_413 = (-1L);
                        int32_t l_417 = 0x18D10BD9L;
                        VECTOR(int32_t, 2) l_419 = (VECTOR(int32_t, 2))(0x5891E444L, (-10L));
                        int i;
                        p_602->g_183[5][4] |= ((safe_div_func_uint64_t_u_u((!p_66), ((p_65 , FAKE_DIVERGE(p_602->local_1_offset, get_local_id(1), 10)) & ((safe_div_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_602->g_401.s65ff5ca1866d73c9)).s81)).xxyxyxxy)).s1, 0x391EL)) , p_602->g_49.s2) , ((*l_386) = ((*p_602->g_346) > (safe_mod_func_int16_t_s_s((((safe_mod_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(p_67, l_332)), ((safe_rshift_func_uint8_t_u_u(((void*)0 != &p_602->g_195), 0)) , p_602->g_49.s2))) , p_66) | (**l_372)), 2UL))))), l_410.y)) , p_67)))) && p_66);
                        ++l_436;
                        l_443++;
                        (**l_372) |= (((safe_lshift_func_int8_t_s_s((((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(p_602->g_448.sa00c)).wzyyyxyw, ((VECTOR(uint32_t, 2))(6UL, 0xCB6C176AL)).yxxxxxxy))).s7 && p_66), 0)) > p_602->g_269) | ((p_602->g_449 |= ((VECTOR(int32_t, 2))(0x5A501143L, 0x4192F88AL)).even) , 0x63BAL));
                    }
                    l_450[4][1][1] = &l_335;
                    for (l_286 = (-1); (l_286 != 5); ++l_286)
                    { /* block id: 147 */
                        uint32_t *l_457 = &p_602->g_237;
                        int32_t l_472 = (-1L);
                        l_98 = (l_97 = (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((18446744073709551615UL <= (0x5FL == ((++(*l_457)) & l_460[1]))) && ((*l_86) != (&l_338 == l_457))), 5)), p_68)));
                        if (p_66)
                            continue;
                        l_473 |= (1L <= ((((safe_lshift_func_int8_t_s_s(4L, 2)) || (safe_add_func_int32_t_s_s(((*l_86) &= (&p_602->g_213 == l_467)), (FAKE_DIVERGE(p_602->local_0_offset, get_local_id(0), 10) < (l_472 = (safe_div_func_int32_t_s_s((((FAKE_DIVERGE(p_602->global_2_offset, get_global_id(2), 10) <= (((void*)0 != &p_602->g_195) < ((p_65 , (p_67 & l_337.s2)) , p_68))) > p_65) < (**p_602->g_318)), p_68))))))) , p_602->g_comm_values[p_602->tid]) , 1UL));
                    }
                }
                else
                { /* block id: 156 */
                    VECTOR(int16_t, 2) l_475 = (VECTOR(int16_t, 2))(8L, (-1L));
                    VECTOR(int16_t, 2) l_477 = (VECTOR(int16_t, 2))((-7L), (-7L));
                    int64_t ***l_485 = &p_602->g_484;
                    int16_t *l_486[3];
                    int64_t ****l_490 = (void*)0;
                    int64_t ****l_491 = (void*)0;
                    int64_t ****l_492 = &l_489;
                    uint16_t *l_496 = &l_339[3];
                    VECTOR(int32_t, 2) l_499 = (VECTOR(int32_t, 2))((-1L), 3L);
                    int32_t *l_500[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_486[i] = &l_439;
                    l_338 |= ((p_602->g_501 = (((p_65 | (l_499.x = ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(p_602->g_474.sc1c25d0f7e544f39)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_475.xxyx)).even)), ((VECTOR(int16_t, 16))(l_476.xxxxxyyyxxyxyxxx)).sab, ((VECTOR(int16_t, 8))(l_477.yyxxyyxx)).s32))), ((VECTOR(int16_t, 2))(p_602->g_478.xz))))).xxxx)).zyxzzxzyywywwxzy, ((VECTOR(int16_t, 2))(p_602->g_479.yy)).xxxyxxyyxxxxyyxx))), (int16_t)((p_602->g_comm_values[p_602->tid] ^= ((!(safe_div_func_int8_t_s_s(((safe_unary_minus_func_int16_t_s(((*l_86) |= ((l_483 == ((*l_485) = p_602->g_484)) == ((9UL == GROUP_DIVERGE(2, 1)) == (&p_602->g_346 == &l_344)))))) == ((safe_rshift_func_int16_t_s_s((GROUP_DIVERGE(1, 1) , (((*l_492) = l_489) == l_493)), 15)) , ((p_602->g_498 = (p_602->g_163 = ((((((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_495.s7454)))).zzywywwx, (uint16_t)((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0UL, 0x130AL)).yxyxyyyx)).odd, ((VECTOR(uint16_t, 4))(((*l_496) = (((p_66 , p_602->g_401.s2) != 1UL) , p_602->g_426)), ((VECTOR(uint16_t, 2))(0x377DL)), 0UL))))).z))).odd)).xyxzzzyzxzxxzxwx, (uint16_t)l_475.y))).sf < p_602->g_32) > l_497) , p_65) , 0x789C9BCC4B219D74L))) >= p_68))), (*p_602->g_319)))) && 4294967294UL)) == p_602->g_383.x)))).scdb3)).yxxwywzzwxwwywyz, ((VECTOR(int16_t, 16))(0x54D0L))))).sd8)).even)) , p_68) && (-9L))) , p_66);
                }
            }
        }
        else
        { /* block id: 169 */
            p_602->g_182 = p_602->g_502;
            (*l_86) = l_116.s7;
        }
        (*l_86) = ((l_97 < (((((VECTOR(int32_t, 16))((safe_div_func_uint64_t_u_u((*l_86), 0xC86233245FDCFD71L)), 0x3D3CF9F3L, ((safe_mul_func_int16_t_s_s(l_495.s7, (safe_lshift_func_uint8_t_u_s(l_293.s7, (+p_66))))) ^ ((*l_514) = (p_602->g_401.sb = (p_65 >= (safe_mod_func_int64_t_s_s((p_65 && (*p_602->g_182)), p_66)))))), ((VECTOR(int32_t, 4))((-4L))), ((VECTOR(int32_t, 2))((-1L))), p_65, (-6L), ((VECTOR(int32_t, 2))((-1L))), p_67, 1L, 0x0BDE5240L)).sf && 0x15B93647L) != (*l_86)) < l_336)) < p_67);
    }
    return p_602->g_238.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_602->g_99
 * writes:
 */
int32_t * func_90(int8_t * p_91, uint32_t * p_92, uint32_t  p_93, int32_t  p_94, uint32_t * p_95, struct S0 * p_602)
{ /* block id: 45 */
    return p_602->g_99;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t  func_103(uint32_t  p_104, struct S0 * p_602)
{ /* block id: 51 */
    uint64_t l_109 = 0x5F9311F6BCDC6F3DL;
    for (p_104 = (-7); (p_104 <= 52); p_104 = safe_add_func_int64_t_s_s(p_104, 7))
    { /* block id: 54 */
        int32_t *l_107 = &p_602->g_30;
        int32_t *l_108 = &p_602->g_30;
        --l_109;
    }
    return l_109;
}


/* ------------------------------------------ */
/* 
 * reads : p_602->g_182 p_602->g_183
 * writes:
 */
int32_t  func_134(uint32_t  p_135, uint64_t  p_136, struct S0 * p_602)
{ /* block id: 100 */
    return (*p_602->g_182);
}


/* ------------------------------------------ */
/* 
 * reads : p_602->g_213 p_602->g_214 p_602->g_32 p_602->g_230 p_602->g_232 p_602->g_30 p_602->g_76 p_602->g_238 p_602->g_60 p_602->g_196 p_602->l_comm_values p_602->g_49 p_602->g_183
 * writes: p_602->g_213 p_602->g_32 p_602->g_183 p_602->g_172 p_602->g_236 p_602->g_238 p_602->g_60 p_602->g_269 p_602->g_30
 */
uint64_t  func_141(int64_t  p_142, int32_t  p_143, int32_t  p_144, int32_t ** p_145, int32_t  p_146, struct S0 * p_602)
{ /* block id: 78 */
    int32_t *l_197 = (void*)0;
    int32_t *l_198 = &p_602->g_183[4][1];
    int32_t *l_199 = &p_602->g_183[6][0];
    int32_t *l_200 = &p_602->g_30;
    int32_t *l_201 = &p_602->g_183[5][4];
    int32_t *l_202 = &p_602->g_30;
    int32_t *l_203 = &p_602->g_30;
    int32_t *l_204 = &p_602->g_30;
    int32_t l_205 = 0x21910C96L;
    int32_t *l_206[6] = {&p_602->g_30,(void*)0,&p_602->g_30,&p_602->g_30,(void*)0,&p_602->g_30};
    int64_t l_207 = 0x1467E5DD029318B5L;
    int32_t l_208 = (-7L);
    int32_t l_209 = 0L;
    VECTOR(uint32_t, 16) l_210 = (VECTOR(uint32_t, 16))(0x994F5809L, (VECTOR(uint32_t, 4))(0x994F5809L, (VECTOR(uint32_t, 2))(0x994F5809L, 1UL), 1UL), 1UL, 0x994F5809L, 1UL, (VECTOR(uint32_t, 2))(0x994F5809L, 1UL), (VECTOR(uint32_t, 2))(0x994F5809L, 1UL), 0x994F5809L, 1UL, 0x994F5809L, 1UL);
    uint8_t **l_215 = &p_602->g_214;
    VECTOR(uint64_t, 2) l_218 = (VECTOR(uint64_t, 2))(1UL, 18446744073709551611UL);
    int8_t **l_223 = (void*)0;
    int8_t *l_225[6] = {&p_602->g_60,&p_602->g_60,&p_602->g_60,&p_602->g_60,&p_602->g_60,&p_602->g_60};
    int8_t **l_224 = &l_225[4];
    uint32_t *l_226 = &p_602->g_32;
    VECTOR(uint8_t, 8) l_229 = (VECTOR(uint8_t, 8))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0UL), 0UL), 0UL, 4UL, 0UL);
    VECTOR(uint8_t, 16) l_231 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x7CL), 0x7CL), 0x7CL, 255UL, 0x7CL, (VECTOR(uint8_t, 2))(255UL, 0x7CL), (VECTOR(uint8_t, 2))(255UL, 0x7CL), 255UL, 0x7CL, 255UL, 0x7CL);
    int8_t **l_233 = &l_225[5];
    uint16_t *l_234 = &p_602->g_172;
    uint32_t **l_235[6] = {&l_226,&l_226,&l_226,&l_226,&l_226,&l_226};
    int64_t *l_252 = &p_602->g_195;
    int i;
    l_210.sd++;
    p_602->g_213 = (l_215 = p_602->g_213);
    p_602->g_238.w |= (((((void*)0 == (*l_215)) && ((p_602->g_236 = ((safe_sub_func_uint8_t_u_u((((VECTOR(uint64_t, 4))(l_218.yyxx)).z <= (((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))((safe_div_func_int32_t_s_s((-1L), (~((*l_226) &= (l_223 == (l_224 = l_223)))))), ((VECTOR(uint16_t, 4))(0x4AB5L, 0x89C1L, 65531UL, 1UL)), ((*l_234) = (safe_rshift_func_int8_t_s_u(((void*)0 != (*l_215)), ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 2))(l_229.s07)).xxxyyyxyyxxxyxyy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 8))(p_602->g_230.zywywxxw)).s3464762330231770, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_231.s3d)))).yyyyyxxyxyyxxyxx)).s21)).xxxxxxyyyyxyyyxx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 16))(p_602->g_232.s99fb92a9f23f4bae)).s0d68, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(0x2EL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(0xCCL, 0UL, (((*l_233) = &p_602->g_63) == (((*l_199) = (*l_200)) , &p_602->g_60)), 0x6FL, (*l_200), 0x9DL, 0x5AL, 255UL)))), ((VECTOR(uint8_t, 8))(0UL))))).s24)))), 252UL)).lo)).yxxy, ((VECTOR(uint8_t, 4))(255UL))))).yzzxxywx))))))).s7200160537046007))).even, (uint8_t)254UL))).s5321670545506155)).s116e)), ((VECTOR(uint8_t, 4))(1UL))))), 253UL, ((VECTOR(uint8_t, 2))(1UL)), 0x23L, 0UL, 1UL, 1UL, ((VECTOR(uint8_t, 2))(0x31L)), (*l_204), 1UL, 0xBAL)).s4375)).yyxzzyyywxywzwwz)).sed5b, ((VECTOR(uint8_t, 4))(255UL))))).yzxwwyzx)).s2675307564341210))).hi, ((VECTOR(uint8_t, 8))(255UL))))).s6))), 65535UL, 65535UL)).s32)))), ((VECTOR(uint16_t, 2))(0xAE2EL))))), ((VECTOR(uint16_t, 2))(65535UL)), p_602->g_76, ((VECTOR(uint16_t, 2))(0x8BCDL)), 0x600CL)).s4, p_146)) && p_144) , (*l_203))), 0x66L)) , (void*)0)) != (void*)0)) | p_142) < 0x136AL);
    for (p_602->g_60 = 0; (p_602->g_60 > 19); p_602->g_60++)
    { /* block id: 91 */
        int32_t l_247 = (-1L);
        int32_t l_255 = (-10L);
        VECTOR(int64_t, 2) l_264 = (VECTOR(int64_t, 2))(0x5C81BBDACEEFD7E3L, 0x494ED6FE85BEE4BDL);
        uint16_t l_265 = 1UL;
        int32_t l_266 = 0x33FE9B47L;
        int32_t l_267 = 0x1E4A6710L;
        int16_t *l_268[6][4][5] = {{{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269}},{{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269}},{{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269}},{{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269}},{{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269}},{{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269},{&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269,&p_602->g_269}}};
        int32_t l_270 = 2L;
        int i, j, k;
        l_270 &= (((safe_sub_func_int16_t_s_s(((*l_203) = (safe_mod_func_int8_t_s_s((p_142 , ((p_602->g_269 = (l_267 ^= (safe_mul_func_int16_t_s_s((l_215 == (void*)0), (l_247 > (safe_div_func_int32_t_s_s((((l_266 ^= (safe_sub_func_uint64_t_u_u(((l_252 == ((safe_add_func_int8_t_s_s(((l_255 = p_602->g_196) && (((safe_div_func_int16_t_s_s(0L, (safe_add_func_int64_t_s_s((safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(((~((VECTOR(int64_t, 16))(0x6578F9897B1F19CBL, (((VECTOR(int64_t, 16))(l_264.xyyxyyyxyyyyxyxy)).s1 , (l_264.x < (p_602->g_232.s6 <= (*l_202)))), 0x70E83303B9F7BD04L, p_602->l_comm_values[(safe_mod_func_uint32_t_u_u(p_602->tid, 51))], 0x34BD4938FE480508L, 0x5FBCA2AA58F5251EL, ((VECTOR(int64_t, 8))(0x57D3D8F780C5D144L)), (-2L), (-1L))).s7) && 0x023EAC5F6222EAACL), l_265)), p_602->g_49.s2)), p_146)))) > (-1L)) , l_264.x)), p_144)) , (void*)0)) ^ 0UL), 8L))) > 0x73L) || (-7L)), l_264.y))))))) , 8L)), (*l_203)))), 0x4C40L)) ^ l_265) < p_602->g_183[5][3]);
    }
    return p_602->g_230.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_602->g_63 p_602->g_49 p_602->g_172 p_602->g_163 p_602->g_182 p_602->g_32 p_602->g_183
 * writes: p_602->g_172 p_602->g_183
 */
int64_t  func_153(int8_t * p_154, int64_t  p_155, int32_t  p_156, uint32_t  p_157, uint32_t  p_158, struct S0 * p_602)
{ /* block id: 64 */
    uint32_t *l_170 = &p_602->g_76;
    int32_t l_173 = 0x17331CC4L;
    int32_t l_181 = 0x7E4F7073L;
    int16_t l_188[10][8][3] = {{{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L}},{{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L}},{{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L}},{{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L}},{{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L}},{{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L}},{{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L}},{{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L}},{{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L}},{{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L},{(-1L),0x2DB8L,0x2580L}}};
    int32_t l_189 = 0L;
    int i, j, k;
    for (p_156 = 0; (p_156 >= 12); ++p_156)
    { /* block id: 67 */
        uint16_t *l_171[6];
        uint64_t *l_174 = &p_602->g_163;
        int8_t *l_180[4][8][7] = {{{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60}},{{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60}},{{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60}},{{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60},{(void*)0,(void*)0,&p_602->g_63,(void*)0,&p_602->g_60,&p_602->g_63,&p_602->g_60}}};
        int8_t **l_179 = &l_180[2][7][5];
        int32_t *l_184 = &p_602->g_183[8][4];
        int32_t *l_185 = &p_602->g_183[5][4];
        int32_t *l_186 = (void*)0;
        int32_t *l_187[2][4] = {{&l_181,&l_181,&l_181,&l_181},{&l_181,&l_181,&l_181,&l_181}};
        uint32_t l_190 = 0xBF69327CL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_171[i] = &p_602->g_172;
        (*p_602->g_182) = ((p_602->g_172 = (safe_lshift_func_int8_t_s_s((safe_div_func_int32_t_s_s(((((p_602->g_63 , &p_602->g_76) == l_170) <= ((l_173 &= p_602->g_49.s6) < (l_174 == &p_602->g_163))) > (safe_sub_func_int64_t_s_s((p_602->g_172 <= (safe_rshift_func_uint16_t_u_u((((*l_179) = &p_602->g_60) == &p_602->g_60), 11))), FAKE_DIVERGE(p_602->local_0_offset, get_local_id(0), 10)))), p_157)), p_602->g_163))) == l_181);
        l_190--;
        (*p_602->g_182) = ((p_602->g_32 , (*l_185)) ^ p_157);
    }
    return p_156;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[55];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 55; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[51];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 51; i++)
            l_comm_values[i] = 1;
    struct S0 c_603;
    struct S0* p_602 = &c_603;
    struct S0 c_604 = {
        (void*)0, // p_602->g_9
        1L, // p_602->g_30
        9UL, // p_602->g_32
        (VECTOR(uint8_t, 8))(0xC0L, (VECTOR(uint8_t, 4))(0xC0L, (VECTOR(uint8_t, 2))(0xC0L, 1UL), 1UL), 1UL, 0xC0L, 1UL), // p_602->g_49
        6L, // p_602->g_60
        (-1L), // p_602->g_63
        0UL, // p_602->g_76
        (void*)0, // p_602->g_99
        &p_602->g_99, // p_602->g_100
        0x0D6E8A3BFF2BCAE1L, // p_602->g_163
        0x64F6L, // p_602->g_172
        {{0x7FC37884L,0x209B46BFL,0x15804E8CL,0x77C8831FL,0x209B46BFL},{0x7FC37884L,0x209B46BFL,0x15804E8CL,0x77C8831FL,0x209B46BFL},{0x7FC37884L,0x209B46BFL,0x15804E8CL,0x77C8831FL,0x209B46BFL},{0x7FC37884L,0x209B46BFL,0x15804E8CL,0x77C8831FL,0x209B46BFL},{0x7FC37884L,0x209B46BFL,0x15804E8CL,0x77C8831FL,0x209B46BFL},{0x7FC37884L,0x209B46BFL,0x15804E8CL,0x77C8831FL,0x209B46BFL},{0x7FC37884L,0x209B46BFL,0x15804E8CL,0x77C8831FL,0x209B46BFL},{0x7FC37884L,0x209B46BFL,0x15804E8CL,0x77C8831FL,0x209B46BFL},{0x7FC37884L,0x209B46BFL,0x15804E8CL,0x77C8831FL,0x209B46BFL}}, // p_602->g_183
        &p_602->g_183[5][4], // p_602->g_182
        0x6C8D3978347ABF41L, // p_602->g_195
        0x15L, // p_602->g_196
        (void*)0, // p_602->g_214
        &p_602->g_214, // p_602->g_213
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), // p_602->g_230
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xE6L), 0xE6L), 0xE6L, 255UL, 0xE6L, (VECTOR(uint8_t, 2))(255UL, 0xE6L), (VECTOR(uint8_t, 2))(255UL, 0xE6L), 255UL, 0xE6L, 255UL, 0xE6L), // p_602->g_232
        0x3827F1B1L, // p_602->g_237
        &p_602->g_237, // p_602->g_236
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65527UL), 65527UL), // p_602->g_238
        0x3093L, // p_602->g_269
        (VECTOR(int16_t, 2))(0x0F8FL, 0x73F6L), // p_602->g_290
        &p_602->g_76, // p_602->g_301
        &p_602->g_63, // p_602->g_319
        &p_602->g_319, // p_602->g_318
        &p_602->g_213, // p_602->g_320
        0L, // p_602->g_347
        &p_602->g_347, // p_602->g_346
        &p_602->g_99, // p_602->g_373
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x45L), 0x45L), // p_602->g_378
        (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 4L), 4L), // p_602->g_382
        (VECTOR(int8_t, 2))(1L, (-10L)), // p_602->g_383
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint16_t, 2))(0UL, 1UL), (VECTOR(uint16_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL), // p_602->g_401
        (-6L), // p_602->g_426
        (VECTOR(uint32_t, 16))(0x501E9A13L, (VECTOR(uint32_t, 4))(0x501E9A13L, (VECTOR(uint32_t, 2))(0x501E9A13L, 0x7508BDD9L), 0x7508BDD9L), 0x7508BDD9L, 0x501E9A13L, 0x7508BDD9L, (VECTOR(uint32_t, 2))(0x501E9A13L, 0x7508BDD9L), (VECTOR(uint32_t, 2))(0x501E9A13L, 0x7508BDD9L), 0x501E9A13L, 0x7508BDD9L, 0x501E9A13L, 0x7508BDD9L), // p_602->g_448
        65528UL, // p_602->g_449
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x71AFL), 0x71AFL), 0x71AFL, (-1L), 0x71AFL, (VECTOR(int16_t, 2))((-1L), 0x71AFL), (VECTOR(int16_t, 2))((-1L), 0x71AFL), (-1L), 0x71AFL, (-1L), 0x71AFL), // p_602->g_474
        (VECTOR(int16_t, 4))(0x6D8FL, (VECTOR(int16_t, 2))(0x6D8FL, 4L), 4L), // p_602->g_478
        (VECTOR(int16_t, 2))(1L, (-1L)), // p_602->g_479
        (void*)0, // p_602->g_484
        9L, // p_602->g_498
        0x5785EBF6L, // p_602->g_501
        &p_602->g_183[4][4], // p_602->g_502
        &p_602->g_183[5][4], // p_602->g_542
        (-2L), // p_602->g_571
        0, // p_602->v_collective
        sequence_input[get_global_id(0)], // p_602->global_0_offset
        sequence_input[get_global_id(1)], // p_602->global_1_offset
        sequence_input[get_global_id(2)], // p_602->global_2_offset
        sequence_input[get_local_id(0)], // p_602->local_0_offset
        sequence_input[get_local_id(1)], // p_602->local_1_offset
        sequence_input[get_local_id(2)], // p_602->local_2_offset
        sequence_input[get_group_id(0)], // p_602->group_0_offset
        sequence_input[get_group_id(1)], // p_602->group_1_offset
        sequence_input[get_group_id(2)], // p_602->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 51)), permutations[0][get_linear_local_id()])), // p_602->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_603 = c_604;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_602);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_602->g_30, "p_602->g_30", print_hash_value);
    transparent_crc(p_602->g_32, "p_602->g_32", print_hash_value);
    transparent_crc(p_602->g_49.s0, "p_602->g_49.s0", print_hash_value);
    transparent_crc(p_602->g_49.s1, "p_602->g_49.s1", print_hash_value);
    transparent_crc(p_602->g_49.s2, "p_602->g_49.s2", print_hash_value);
    transparent_crc(p_602->g_49.s3, "p_602->g_49.s3", print_hash_value);
    transparent_crc(p_602->g_49.s4, "p_602->g_49.s4", print_hash_value);
    transparent_crc(p_602->g_49.s5, "p_602->g_49.s5", print_hash_value);
    transparent_crc(p_602->g_49.s6, "p_602->g_49.s6", print_hash_value);
    transparent_crc(p_602->g_49.s7, "p_602->g_49.s7", print_hash_value);
    transparent_crc(p_602->g_60, "p_602->g_60", print_hash_value);
    transparent_crc(p_602->g_63, "p_602->g_63", print_hash_value);
    transparent_crc(p_602->g_76, "p_602->g_76", print_hash_value);
    transparent_crc(p_602->g_163, "p_602->g_163", print_hash_value);
    transparent_crc(p_602->g_172, "p_602->g_172", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_602->g_183[i][j], "p_602->g_183[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_602->g_195, "p_602->g_195", print_hash_value);
    transparent_crc(p_602->g_196, "p_602->g_196", print_hash_value);
    transparent_crc(p_602->g_230.x, "p_602->g_230.x", print_hash_value);
    transparent_crc(p_602->g_230.y, "p_602->g_230.y", print_hash_value);
    transparent_crc(p_602->g_230.z, "p_602->g_230.z", print_hash_value);
    transparent_crc(p_602->g_230.w, "p_602->g_230.w", print_hash_value);
    transparent_crc(p_602->g_232.s0, "p_602->g_232.s0", print_hash_value);
    transparent_crc(p_602->g_232.s1, "p_602->g_232.s1", print_hash_value);
    transparent_crc(p_602->g_232.s2, "p_602->g_232.s2", print_hash_value);
    transparent_crc(p_602->g_232.s3, "p_602->g_232.s3", print_hash_value);
    transparent_crc(p_602->g_232.s4, "p_602->g_232.s4", print_hash_value);
    transparent_crc(p_602->g_232.s5, "p_602->g_232.s5", print_hash_value);
    transparent_crc(p_602->g_232.s6, "p_602->g_232.s6", print_hash_value);
    transparent_crc(p_602->g_232.s7, "p_602->g_232.s7", print_hash_value);
    transparent_crc(p_602->g_232.s8, "p_602->g_232.s8", print_hash_value);
    transparent_crc(p_602->g_232.s9, "p_602->g_232.s9", print_hash_value);
    transparent_crc(p_602->g_232.sa, "p_602->g_232.sa", print_hash_value);
    transparent_crc(p_602->g_232.sb, "p_602->g_232.sb", print_hash_value);
    transparent_crc(p_602->g_232.sc, "p_602->g_232.sc", print_hash_value);
    transparent_crc(p_602->g_232.sd, "p_602->g_232.sd", print_hash_value);
    transparent_crc(p_602->g_232.se, "p_602->g_232.se", print_hash_value);
    transparent_crc(p_602->g_232.sf, "p_602->g_232.sf", print_hash_value);
    transparent_crc(p_602->g_237, "p_602->g_237", print_hash_value);
    transparent_crc(p_602->g_238.x, "p_602->g_238.x", print_hash_value);
    transparent_crc(p_602->g_238.y, "p_602->g_238.y", print_hash_value);
    transparent_crc(p_602->g_238.z, "p_602->g_238.z", print_hash_value);
    transparent_crc(p_602->g_238.w, "p_602->g_238.w", print_hash_value);
    transparent_crc(p_602->g_269, "p_602->g_269", print_hash_value);
    transparent_crc(p_602->g_290.x, "p_602->g_290.x", print_hash_value);
    transparent_crc(p_602->g_290.y, "p_602->g_290.y", print_hash_value);
    transparent_crc(p_602->g_347, "p_602->g_347", print_hash_value);
    transparent_crc(p_602->g_378.x, "p_602->g_378.x", print_hash_value);
    transparent_crc(p_602->g_378.y, "p_602->g_378.y", print_hash_value);
    transparent_crc(p_602->g_378.z, "p_602->g_378.z", print_hash_value);
    transparent_crc(p_602->g_378.w, "p_602->g_378.w", print_hash_value);
    transparent_crc(p_602->g_382.x, "p_602->g_382.x", print_hash_value);
    transparent_crc(p_602->g_382.y, "p_602->g_382.y", print_hash_value);
    transparent_crc(p_602->g_382.z, "p_602->g_382.z", print_hash_value);
    transparent_crc(p_602->g_382.w, "p_602->g_382.w", print_hash_value);
    transparent_crc(p_602->g_383.x, "p_602->g_383.x", print_hash_value);
    transparent_crc(p_602->g_383.y, "p_602->g_383.y", print_hash_value);
    transparent_crc(p_602->g_401.s0, "p_602->g_401.s0", print_hash_value);
    transparent_crc(p_602->g_401.s1, "p_602->g_401.s1", print_hash_value);
    transparent_crc(p_602->g_401.s2, "p_602->g_401.s2", print_hash_value);
    transparent_crc(p_602->g_401.s3, "p_602->g_401.s3", print_hash_value);
    transparent_crc(p_602->g_401.s4, "p_602->g_401.s4", print_hash_value);
    transparent_crc(p_602->g_401.s5, "p_602->g_401.s5", print_hash_value);
    transparent_crc(p_602->g_401.s6, "p_602->g_401.s6", print_hash_value);
    transparent_crc(p_602->g_401.s7, "p_602->g_401.s7", print_hash_value);
    transparent_crc(p_602->g_401.s8, "p_602->g_401.s8", print_hash_value);
    transparent_crc(p_602->g_401.s9, "p_602->g_401.s9", print_hash_value);
    transparent_crc(p_602->g_401.sa, "p_602->g_401.sa", print_hash_value);
    transparent_crc(p_602->g_401.sb, "p_602->g_401.sb", print_hash_value);
    transparent_crc(p_602->g_401.sc, "p_602->g_401.sc", print_hash_value);
    transparent_crc(p_602->g_401.sd, "p_602->g_401.sd", print_hash_value);
    transparent_crc(p_602->g_401.se, "p_602->g_401.se", print_hash_value);
    transparent_crc(p_602->g_401.sf, "p_602->g_401.sf", print_hash_value);
    transparent_crc(p_602->g_426, "p_602->g_426", print_hash_value);
    transparent_crc(p_602->g_448.s0, "p_602->g_448.s0", print_hash_value);
    transparent_crc(p_602->g_448.s1, "p_602->g_448.s1", print_hash_value);
    transparent_crc(p_602->g_448.s2, "p_602->g_448.s2", print_hash_value);
    transparent_crc(p_602->g_448.s3, "p_602->g_448.s3", print_hash_value);
    transparent_crc(p_602->g_448.s4, "p_602->g_448.s4", print_hash_value);
    transparent_crc(p_602->g_448.s5, "p_602->g_448.s5", print_hash_value);
    transparent_crc(p_602->g_448.s6, "p_602->g_448.s6", print_hash_value);
    transparent_crc(p_602->g_448.s7, "p_602->g_448.s7", print_hash_value);
    transparent_crc(p_602->g_448.s8, "p_602->g_448.s8", print_hash_value);
    transparent_crc(p_602->g_448.s9, "p_602->g_448.s9", print_hash_value);
    transparent_crc(p_602->g_448.sa, "p_602->g_448.sa", print_hash_value);
    transparent_crc(p_602->g_448.sb, "p_602->g_448.sb", print_hash_value);
    transparent_crc(p_602->g_448.sc, "p_602->g_448.sc", print_hash_value);
    transparent_crc(p_602->g_448.sd, "p_602->g_448.sd", print_hash_value);
    transparent_crc(p_602->g_448.se, "p_602->g_448.se", print_hash_value);
    transparent_crc(p_602->g_448.sf, "p_602->g_448.sf", print_hash_value);
    transparent_crc(p_602->g_449, "p_602->g_449", print_hash_value);
    transparent_crc(p_602->g_474.s0, "p_602->g_474.s0", print_hash_value);
    transparent_crc(p_602->g_474.s1, "p_602->g_474.s1", print_hash_value);
    transparent_crc(p_602->g_474.s2, "p_602->g_474.s2", print_hash_value);
    transparent_crc(p_602->g_474.s3, "p_602->g_474.s3", print_hash_value);
    transparent_crc(p_602->g_474.s4, "p_602->g_474.s4", print_hash_value);
    transparent_crc(p_602->g_474.s5, "p_602->g_474.s5", print_hash_value);
    transparent_crc(p_602->g_474.s6, "p_602->g_474.s6", print_hash_value);
    transparent_crc(p_602->g_474.s7, "p_602->g_474.s7", print_hash_value);
    transparent_crc(p_602->g_474.s8, "p_602->g_474.s8", print_hash_value);
    transparent_crc(p_602->g_474.s9, "p_602->g_474.s9", print_hash_value);
    transparent_crc(p_602->g_474.sa, "p_602->g_474.sa", print_hash_value);
    transparent_crc(p_602->g_474.sb, "p_602->g_474.sb", print_hash_value);
    transparent_crc(p_602->g_474.sc, "p_602->g_474.sc", print_hash_value);
    transparent_crc(p_602->g_474.sd, "p_602->g_474.sd", print_hash_value);
    transparent_crc(p_602->g_474.se, "p_602->g_474.se", print_hash_value);
    transparent_crc(p_602->g_474.sf, "p_602->g_474.sf", print_hash_value);
    transparent_crc(p_602->g_478.x, "p_602->g_478.x", print_hash_value);
    transparent_crc(p_602->g_478.y, "p_602->g_478.y", print_hash_value);
    transparent_crc(p_602->g_478.z, "p_602->g_478.z", print_hash_value);
    transparent_crc(p_602->g_478.w, "p_602->g_478.w", print_hash_value);
    transparent_crc(p_602->g_479.x, "p_602->g_479.x", print_hash_value);
    transparent_crc(p_602->g_479.y, "p_602->g_479.y", print_hash_value);
    transparent_crc(p_602->g_498, "p_602->g_498", print_hash_value);
    transparent_crc(p_602->g_501, "p_602->g_501", print_hash_value);
    transparent_crc(p_602->g_571, "p_602->g_571", print_hash_value);
    transparent_crc(p_602->v_collective, "p_602->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 55; i++)
            transparent_crc(p_602->l_special_values[i], "p_602->l_special_values[i]", print_hash_value);
    transparent_crc(p_602->l_comm_values[get_linear_local_id()], "p_602->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_602->g_comm_values[get_linear_group_id() * 51 + get_linear_local_id()], "p_602->g_comm_values[get_linear_group_id() * 51 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
