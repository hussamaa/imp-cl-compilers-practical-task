// --atomics 57 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 34,96,3 -l 1,12,3
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

__constant uint32_t permutations[10][36] = {
{7,16,22,23,11,21,6,4,33,27,0,28,29,3,20,15,12,13,18,17,2,35,14,9,5,31,26,1,32,8,34,19,30,10,25,24}, // permutation 0
{33,21,23,25,3,15,18,22,2,4,6,5,20,30,1,9,13,32,16,10,24,28,34,14,17,27,11,35,12,0,31,7,29,8,19,26}, // permutation 1
{6,24,30,11,8,28,4,1,33,2,21,5,12,22,9,20,15,25,34,14,29,3,31,16,0,17,32,19,7,13,10,18,27,26,35,23}, // permutation 2
{31,5,19,34,11,16,29,21,26,23,15,30,35,32,20,27,7,0,12,9,4,17,14,22,2,3,24,28,33,25,13,8,1,6,10,18}, // permutation 3
{18,32,4,13,3,6,15,0,26,21,22,16,28,33,35,11,27,14,25,30,20,12,7,19,23,34,24,29,2,8,17,9,10,31,1,5}, // permutation 4
{6,31,9,13,11,17,8,29,25,26,28,4,15,35,24,7,0,20,2,18,23,3,14,27,5,1,10,21,22,33,30,34,16,12,32,19}, // permutation 5
{12,22,3,29,10,16,35,24,30,27,20,17,7,21,33,34,4,28,1,25,14,8,0,31,19,5,23,11,18,9,6,13,15,26,32,2}, // permutation 6
{28,18,13,7,24,17,12,23,19,25,20,2,4,5,29,11,3,10,26,0,22,14,32,1,15,27,6,33,31,8,34,9,21,35,16,30}, // permutation 7
{26,3,19,24,18,35,13,12,28,27,11,2,5,10,22,9,16,7,6,20,31,14,34,21,33,0,29,23,17,8,30,4,32,25,15,1}, // permutation 8
{6,2,7,16,31,12,20,18,17,1,14,34,10,8,32,23,29,13,22,30,4,25,9,26,0,15,27,19,33,5,28,35,24,11,3,21} // permutation 9
};

// Seed: 3240625030

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint64_t  f0;
   uint32_t  f1;
};

union U1 {
   int32_t  f0;
   int32_t  f1;
   volatile int32_t  f2;
};

struct S2 {
    int32_t g_8;
    volatile VECTOR(int32_t, 16) g_30;
    VECTOR(int32_t, 8) g_31;
    int32_t g_60;
    union U1 g_64[4][1];
    union U1 g_65;
    union U1 g_66;
    union U1 g_67[10][5][5];
    union U1 g_68;
    union U1 g_69;
    union U1 g_70;
    union U1 g_71;
    union U1 g_72;
    union U1 g_73;
    union U1 g_74;
    union U1 g_75[3][6];
    union U1 g_76;
    union U1 g_77;
    union U1 g_78;
    union U1 g_79;
    union U1 g_80[2];
    union U1 g_81;
    union U1 g_82[5];
    union U1 *g_63[10][6];
    union U1 g_87;
    VECTOR(uint16_t, 16) g_94;
    uint16_t g_100;
    VECTOR(int16_t, 8) g_105;
    uint64_t g_115;
    int32_t *g_131;
    VECTOR(int8_t, 2) g_138;
    VECTOR(int32_t, 4) g_162;
    uint32_t g_174[5];
    int32_t g_177;
    VECTOR(uint8_t, 16) g_179;
    VECTOR(int8_t, 2) g_180;
    VECTOR(int8_t, 2) g_181;
    VECTOR(int8_t, 2) g_183;
    uint32_t g_189;
    uint64_t g_209;
    volatile uint64_t g_216;
    volatile uint64_t *g_215;
    VECTOR(uint16_t, 4) g_224;
    int16_t g_288;
    VECTOR(int64_t, 4) g_413;
    VECTOR(int64_t, 4) g_414;
    int32_t * volatile g_429;
    union U1 *** volatile g_430;
    union U1 **g_433;
    volatile uint16_t g_453;
    int32_t ** volatile g_458;
    int32_t ***g_482;
    uint8_t *g_486;
    uint8_t ** volatile g_485;
    uint8_t ** volatile * volatile g_487;
    volatile struct S0 *g_493;
    VECTOR(int32_t, 2) g_498;
    int32_t ** volatile g_519;
    int32_t ** volatile g_520;
    volatile union U1 g_521;
    volatile struct S0 g_522[4][5][4];
    int64_t *g_524[2];
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
uint8_t  func_1(struct S2 * p_528);
int32_t * func_2(uint64_t  p_3, int32_t * p_4, int32_t * p_5, uint32_t  p_6, struct S2 * p_528);
uint32_t  func_9(int32_t  p_10, int32_t * p_11, int32_t * p_12, struct S2 * p_528);
int32_t * func_13(int64_t  p_14, struct S2 * p_528);
uint8_t  func_15(uint32_t  p_16, int32_t * p_17, uint32_t  p_18, uint64_t  p_19, struct S2 * p_528);
int64_t  func_33(uint16_t  p_34, int32_t  p_35, int8_t  p_36, struct S2 * p_528);
uint64_t  func_45(int32_t * p_46, uint64_t  p_47, int16_t  p_48, int32_t  p_49, struct S2 * p_528);
int32_t * func_50(uint64_t  p_51, int64_t  p_52, struct S2 * p_528);
int64_t  func_53(int64_t  p_54, int32_t * p_55, struct S2 * p_528);
int64_t  func_56(int32_t * p_57, int32_t * p_58, struct S2 * p_528);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_528->g_comm_values p_528->g_8 p_528->g_105 p_528->g_288 p_528->g_215 p_528->g_216 p_528->g_181 p_528->g_65.f0 p_528->g_413 p_528->g_414 p_528->g_179 p_528->g_68.f0 p_528->g_429 p_528->g_76.f0 p_528->g_453 p_528->g_458 p_528->g_209 p_528->g_71.f0 p_528->g_68.f1 p_528->g_162 p_528->g_183 p_528->g_482 p_528->l_comm_values p_528->g_72.f0 p_528->g_131 p_528->g_485 p_528->g_487 p_528->g_433 p_528->g_73.f1 p_528->g_87.f0 p_528->g_493 p_528->g_69.f0 p_528->g_498 p_528->g_66.f0 p_528->g_71.f1 p_528->g_520 p_528->g_521 p_528->g_522 p_528->g_524
 * writes: p_528->g_288 p_528->g_8 p_528->g_65.f0 p_528->g_179 p_528->g_76.f0 p_528->g_433 p_528->g_453 p_528->g_131 p_528->g_209 p_528->g_71.f0 p_528->g_68.f1 p_528->g_482 p_528->g_413 p_528->g_75.f0 p_528->g_485 p_528->g_63 p_528->g_73.f1 p_528->g_87.f0 p_528->g_493 p_528->g_66.f0 p_528->g_71.f1 p_528->g_524
 */
uint8_t  func_1(struct S2 * p_528)
{ /* block id: 4 */
    int32_t *l_7[2][9][7] = {{{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0}},{{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0},{(void*)0,&p_528->g_8,(void*)0,(void*)0,&p_528->g_8,(void*)0,(void*)0}}};
    VECTOR(int64_t, 16) l_22 = (VECTOR(int64_t, 16))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x046E74A6E8F59172L), 0x046E74A6E8F59172L), 0x046E74A6E8F59172L, 0L, 0x046E74A6E8F59172L, (VECTOR(int64_t, 2))(0L, 0x046E74A6E8F59172L), (VECTOR(int64_t, 2))(0L, 0x046E74A6E8F59172L), 0L, 0x046E74A6E8F59172L, 0L, 0x046E74A6E8F59172L);
    int64_t *l_523 = (void*)0;
    int64_t **l_525 = &p_528->g_524[0];
    uint8_t l_526 = 253UL;
    int8_t l_527 = (-10L);
    int i, j, k;
    (*p_528->g_520) = func_2(((GROUP_DIVERGE(2, 1) < ((VECTOR(int16_t, 2))(0x1576L, 0x1957L)).hi) == (l_7[1][3][2] != (func_9(p_528->g_comm_values[p_528->tid], func_13((func_15(p_528->g_8, l_7[1][0][5], (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 8))(l_22.sddb74a71)).s2, p_528->g_8)), p_528->g_8, p_528) < p_528->g_68.f0), p_528), &p_528->g_60, p_528) , (void*)0))), l_7[1][3][2], l_7[1][7][3], p_528->g_69.f0, p_528);
    l_526 = (p_528->g_521 , (p_528->g_522[3][3][1] , (((p_528->g_498.x > (*p_528->g_215)) , l_523) != ((*l_525) = p_528->g_524[0]))));
    return l_527;
}


/* ------------------------------------------ */
/* 
 * reads : p_528->g_458 p_528->g_498 p_528->g_66.f0 p_528->g_71.f1
 * writes: p_528->g_131 p_528->g_66.f0 p_528->g_71.f1
 */
int32_t * func_2(uint64_t  p_3, int32_t * p_4, int32_t * p_5, uint32_t  p_6, struct S2 * p_528)
{ /* block id: 218 */
    int32_t **l_497 = (void*)0;
    int32_t l_509 = 1L;
    int32_t l_510 = (-3L);
    int64_t l_511 = (-8L);
    int32_t l_512 = 0x452B727DL;
    int32_t l_513 = (-3L);
    int32_t l_514[5][4] = {{(-1L),0x2140F60BL,(-1L),(-1L)},{(-1L),0x2140F60BL,(-1L),(-1L)},{(-1L),0x2140F60BL,(-1L),(-1L)},{(-1L),0x2140F60BL,(-1L),(-1L)},{(-1L),0x2140F60BL,(-1L),(-1L)}};
    uint32_t l_516 = 0xC0C2043FL;
    int i, j;
    (*p_528->g_458) = p_5;
    if (((VECTOR(int32_t, 2))(p_528->g_498.xx)).hi)
    { /* block id: 220 */
        int32_t l_504 = 0x5BA68786L;
        int32_t *l_507 = &p_528->g_82[2].f1;
        int32_t *l_508[2];
        int32_t l_515 = 0x6E3C0EE9L;
        int i;
        for (i = 0; i < 2; i++)
            l_508[i] = &p_528->g_70.f1;
        for (p_6 = 0; (p_6 > 13); p_6 = safe_add_func_int8_t_s_s(p_6, 8))
        { /* block id: 223 */
            int32_t *l_501 = &p_528->g_66.f0;
            (*l_501) ^= 0L;
            return p_5;
        }
        for (p_528->g_71.f1 = 0; (p_528->g_71.f1 != (-1)); p_528->g_71.f1 = safe_sub_func_int8_t_s_s(p_528->g_71.f1, 1))
        { /* block id: 229 */
            int32_t *l_505 = (void*)0;
            if (l_504)
                break;
            return l_505;
        }
        if ((atomic_inc(&p_528->l_atomic_input[7]) == 7))
        { /* block id: 234 */
            int32_t l_506 = 0x2B4E7914L;
            l_506 |= (-2L);
            unsigned int result = 0;
            result += l_506;
            atomic_add(&p_528->l_special_values[7], result);
        }
        else
        { /* block id: 236 */
            (1 + 1);
        }
        ++l_516;
    }
    else
    { /* block id: 240 */
        return p_5;
    }
    return p_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_528->g_209 p_528->g_71.f0 p_528->g_68.f1 p_528->g_162 p_528->g_183 p_528->g_482 p_528->l_comm_values p_528->g_215 p_528->g_216 p_528->g_72.f0 p_528->g_131 p_528->g_485 p_528->g_487 p_528->g_433 p_528->g_73.f1 p_528->g_87.f0 p_528->g_493
 * writes: p_528->g_209 p_528->g_71.f0 p_528->g_68.f1 p_528->g_482 p_528->g_413 p_528->g_75.f0 p_528->g_485 p_528->g_63 p_528->g_73.f1 p_528->g_87.f0 p_528->g_493
 */
uint32_t  func_9(int32_t  p_10, int32_t * p_11, int32_t * p_12, struct S2 * p_528)
{ /* block id: 189 */
    uint16_t l_471[6][5] = {{5UL,65533UL,0xCCE9L,65533UL,5UL},{5UL,65533UL,0xCCE9L,65533UL,5UL},{5UL,65533UL,0xCCE9L,65533UL,5UL},{5UL,65533UL,0xCCE9L,65533UL,5UL},{5UL,65533UL,0xCCE9L,65533UL,5UL},{5UL,65533UL,0xCCE9L,65533UL,5UL}};
    union U1 *l_488 = &p_528->g_66;
    int i, j;
    for (p_528->g_209 = 0; (p_528->g_209 < 2); p_528->g_209 = safe_add_func_uint8_t_u_u(p_528->g_209, 5))
    { /* block id: 192 */
        int32_t **l_484[10] = {&p_528->g_131,&p_528->g_131,&p_528->g_131,&p_528->g_131,&p_528->g_131,&p_528->g_131,&p_528->g_131,&p_528->g_131,&p_528->g_131,&p_528->g_131};
        int i;
        for (p_528->g_71.f0 = (-18); (p_528->g_71.f0 <= 11); p_528->g_71.f0++)
        { /* block id: 195 */
            uint16_t l_464 = 0UL;
            int32_t *l_467[9][6] = {{&p_528->g_65.f0,&p_528->g_65.f0,&p_528->g_8,(void*)0,&p_528->g_70.f0,&p_528->g_75[0][1].f0},{&p_528->g_65.f0,&p_528->g_65.f0,&p_528->g_8,(void*)0,&p_528->g_70.f0,&p_528->g_75[0][1].f0},{&p_528->g_65.f0,&p_528->g_65.f0,&p_528->g_8,(void*)0,&p_528->g_70.f0,&p_528->g_75[0][1].f0},{&p_528->g_65.f0,&p_528->g_65.f0,&p_528->g_8,(void*)0,&p_528->g_70.f0,&p_528->g_75[0][1].f0},{&p_528->g_65.f0,&p_528->g_65.f0,&p_528->g_8,(void*)0,&p_528->g_70.f0,&p_528->g_75[0][1].f0},{&p_528->g_65.f0,&p_528->g_65.f0,&p_528->g_8,(void*)0,&p_528->g_70.f0,&p_528->g_75[0][1].f0},{&p_528->g_65.f0,&p_528->g_65.f0,&p_528->g_8,(void*)0,&p_528->g_70.f0,&p_528->g_75[0][1].f0},{&p_528->g_65.f0,&p_528->g_65.f0,&p_528->g_8,(void*)0,&p_528->g_70.f0,&p_528->g_75[0][1].f0},{&p_528->g_65.f0,&p_528->g_65.f0,&p_528->g_8,(void*)0,&p_528->g_70.f0,&p_528->g_75[0][1].f0}};
            uint32_t l_468 = 4UL;
            int i, j;
            l_464++;
            --l_468;
            l_471[5][1]++;
        }
        for (p_528->g_68.f1 = (-25); (p_528->g_68.f1 <= 27); p_528->g_68.f1 = safe_add_func_int16_t_s_s(p_528->g_68.f1, 3))
        { /* block id: 202 */
            int32_t ****l_483 = &p_528->g_482;
            (*p_528->g_131) = ((safe_div_func_uint32_t_u_u(4294967295UL, (safe_lshift_func_int8_t_s_u(p_528->g_162.z, 2)))) > (0xE3L != (safe_mod_func_uint8_t_u_u(p_528->g_183.x, ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))((FAKE_DIVERGE(p_528->global_0_offset, get_global_id(0), 10) < ((&p_528->g_458 == ((*l_483) = p_528->g_482)) & (p_528->g_413.y = (((p_528->l_comm_values[(safe_mod_func_uint32_t_u_u(p_528->tid, 36))] , l_484[4]) != (void*)0) >= (*p_528->g_215))))), ((VECTOR(uint64_t, 2))(6UL)), 18446744073709551610UL)).xyxxwzzx)).s2 && 18446744073709551615UL) ^ p_528->g_72.f0)))));
            (*p_528->g_487) = p_528->g_485;
        }
    }
    (*p_528->g_433) = l_488;
    for (p_528->g_73.f1 = 0; (p_528->g_73.f1 < (-10)); p_528->g_73.f1--)
    { /* block id: 212 */
        VECTOR(int32_t, 16) l_491 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
        VECTOR(int32_t, 16) l_492 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 1L), 1L), 1L, (-8L), 1L, (VECTOR(int32_t, 2))((-8L), 1L), (VECTOR(int32_t, 2))((-8L), 1L), (-8L), 1L, (-8L), 1L);
        volatile struct S0 **l_494 = &p_528->g_493;
        int i;
        (*p_11) ^= ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(l_491.sef4f)).wwzzzywzwyyzzxyz, ((VECTOR(int32_t, 2))(l_492.sc3)).xxxxxxyxyyyxxxxy))).s5;
        (*l_494) = p_528->g_493;
        (*p_11) &= (safe_lshift_func_uint16_t_u_u(0x1514L, 14));
    }
    return l_471[5][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_528->g_458
 * writes: p_528->g_131
 */
int32_t * func_13(int64_t  p_14, struct S2 * p_528)
{ /* block id: 186 */
    int32_t *l_456 = &p_528->g_75[0][1].f0;
    int32_t **l_457 = (void*)0;
    int32_t *l_459 = &p_528->g_87.f0;
    (*p_528->g_458) = l_456;
    return l_459;
}


/* ------------------------------------------ */
/* 
 * reads : p_528->g_105 p_528->g_8 p_528->g_288 p_528->g_215 p_528->g_216 p_528->g_181 p_528->g_65.f0 p_528->g_413 p_528->g_414 p_528->g_179 p_528->g_68.f0 p_528->g_429 p_528->g_76.f0 p_528->g_453
 * writes: p_528->g_288 p_528->g_8 p_528->g_65.f0 p_528->g_179 p_528->g_76.f0 p_528->g_433 p_528->g_453
 */
uint8_t  func_15(uint32_t  p_16, int32_t * p_17, uint32_t  p_18, uint64_t  p_19, struct S2 * p_528)
{ /* block id: 5 */
    int64_t l_25 = (-1L);
    VECTOR(uint64_t, 4) l_44 = (VECTOR(uint64_t, 4))(4UL, (VECTOR(uint64_t, 2))(4UL, 0x3D2C82F3C076A5D0L), 0x3D2C82F3C076A5D0L);
    int32_t *l_59 = &p_528->g_8;
    VECTOR(int64_t, 8) l_411 = (VECTOR(int64_t, 8))(0x7EBD4C40589F3EABL, (VECTOR(int64_t, 4))(0x7EBD4C40589F3EABL, (VECTOR(int64_t, 2))(0x7EBD4C40589F3EABL, 0x1C146A788BCEA79BL), 0x1C146A788BCEA79BL), 0x1C146A788BCEA79BL, 0x7EBD4C40589F3EABL, 0x1C146A788BCEA79BL);
    int32_t *l_436 = &p_528->g_64[3][0].f1;
    int32_t *l_437 = &p_528->g_67[4][0][4].f1;
    int32_t *l_438 = &p_528->g_75[0][1].f0;
    int32_t *l_439 = &p_528->g_74.f0;
    int32_t *l_440 = &p_528->g_71.f0;
    int32_t *l_441 = &p_528->g_74.f0;
    int32_t *l_442 = &p_528->g_68.f0;
    int32_t *l_443 = &p_528->g_77.f0;
    int32_t *l_444 = &p_528->g_67[4][0][4].f1;
    int32_t *l_445 = (void*)0;
    int32_t *l_446 = &p_528->g_75[0][1].f1;
    int32_t *l_447 = &p_528->g_64[3][0].f1;
    int32_t *l_448 = (void*)0;
    int32_t *l_449 = &p_528->g_70.f0;
    int32_t *l_450 = &p_528->g_64[3][0].f0;
    int32_t *l_451 = &p_528->g_76.f1;
    int32_t *l_452[10][3][8] = {{{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8}},{{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8}},{{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8}},{{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8}},{{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8}},{{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8}},{{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8}},{{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8}},{{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8}},{{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8},{&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8,&p_528->g_77.f0,&p_528->g_77.f0,&p_528->g_8}}};
    int i, j, k;
    for (p_18 = 0; (p_18 > 23); ++p_18)
    { /* block id: 8 */
        uint64_t l_32 = 0x4E20EEB4983CA307L;
        int32_t *l_39 = &p_528->g_8;
        uint64_t *l_152 = (void*)0;
        int32_t l_153 = 0x5CBCC740L;
        int32_t **l_289 = &l_39;
        VECTOR(uint32_t, 4) l_385 = (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 4294967295UL), 4294967295UL);
        VECTOR(uint32_t, 8) l_386 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
        int64_t l_387 = (-3L);
        int i;
        (*l_289) = (((p_528->g_288 |= (((l_25 && (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(0x16L, (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 4))(p_528->g_30.sd56a)), ((VECTOR(int32_t, 2))(p_528->g_31.s30)).yyyx))).w, (((l_32 , (func_33(((((void*)0 == l_39) | ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 2))(l_44.xy)).xyyy, (uint64_t)(l_153 ^= func_45(((*l_39) , func_50(p_528->g_8, func_53(func_56(l_59, p_17, p_528), l_39, p_528), p_528)), (*l_39), p_19, p_528->g_8, p_528)), (uint64_t)p_16))).z | (-1L)), 1UL)), 5)) < p_16)) > 0x11DEL), (*l_39), p_528->g_76.f0, p_528) , (*l_59))) , p_19) <= p_18))), p_528->g_183.x)), 1UL, 0x7BL, 8UL, ((VECTOR(uint8_t, 2))(255UL)), 0x36L)).s33)).lo & p_528->g_105.s6)) >= p_16) && (*l_39))) ^ 0x02L) , (void*)0);
        if ((atomic_inc(&p_528->g_atomic_input[57 * get_linear_group_id() + 24]) == 1))
        { /* block id: 91 */
            int32_t l_290[2];
            uint64_t l_291[6][7] = {{18446744073709551606UL,0UL,0UL,1UL,0UL,1UL,0UL},{18446744073709551606UL,0UL,0UL,1UL,0UL,1UL,0UL},{18446744073709551606UL,0UL,0UL,1UL,0UL,1UL,0UL},{18446744073709551606UL,0UL,0UL,1UL,0UL,1UL,0UL},{18446744073709551606UL,0UL,0UL,1UL,0UL,1UL,0UL},{18446744073709551606UL,0UL,0UL,1UL,0UL,1UL,0UL}};
            uint32_t l_292[5][5][7] = {{{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL}},{{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL}},{{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL}},{{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL}},{{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL},{0xD7CDC10AL,0xA1622A05L,0x6F539C1AL,4294967289UL,0xD86212F0L,4294967289UL,0x6F539C1AL}}};
            uint64_t l_361 = 0x8F1B8B2D224FE6C5L;
            uint32_t l_362 = 0x88956F82L;
            uint32_t l_363 = 0UL;
            int32_t l_364 = 0x63DDF13AL;
            uint32_t l_365 = 0xB077342FL;
            VECTOR(int32_t, 4) l_366 = (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0L), 0L);
            VECTOR(int32_t, 16) l_367 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0L), 0L), 0L, 4L, 0L, (VECTOR(int32_t, 2))(4L, 0L), (VECTOR(int32_t, 2))(4L, 0L), 4L, 0L, 4L, 0L);
            uint32_t l_368[7][8] = {{1UL,9UL,1UL,0x9BB5F4D9L,1UL,9UL,1UL,0x80341F62L},{1UL,9UL,1UL,0x9BB5F4D9L,1UL,9UL,1UL,0x80341F62L},{1UL,9UL,1UL,0x9BB5F4D9L,1UL,9UL,1UL,0x80341F62L},{1UL,9UL,1UL,0x9BB5F4D9L,1UL,9UL,1UL,0x80341F62L},{1UL,9UL,1UL,0x9BB5F4D9L,1UL,9UL,1UL,0x80341F62L},{1UL,9UL,1UL,0x9BB5F4D9L,1UL,9UL,1UL,0x80341F62L},{1UL,9UL,1UL,0x9BB5F4D9L,1UL,9UL,1UL,0x80341F62L}};
            VECTOR(int32_t, 8) l_369 = (VECTOR(int32_t, 8))(0x58F5472CL, (VECTOR(int32_t, 4))(0x58F5472CL, (VECTOR(int32_t, 2))(0x58F5472CL, (-1L)), (-1L)), (-1L), 0x58F5472CL, (-1L));
            VECTOR(int32_t, 8) l_370 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x24503A75L), 0x24503A75L), 0x24503A75L, 0L, 0x24503A75L);
            int8_t l_371 = 1L;
            int32_t l_372[2][1][4];
            uint32_t l_373 = 0x8102800FL;
            int64_t l_374 = (-9L);
            int32_t l_375 = 6L;
            int8_t l_376[3][8] = {{(-2L),9L,0x39L,9L,(-2L),(-2L),9L,0x39L},{(-2L),9L,0x39L,9L,(-2L),(-2L),9L,0x39L},{(-2L),9L,0x39L,9L,(-2L),(-2L),9L,0x39L}};
            int16_t l_377 = (-7L);
            int32_t l_378 = 0x2288B95FL;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_290[i] = 0L;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_372[i][j][k] = 0x768BD463L;
                }
            }
            l_290[0] = (-6L);
            l_292[4][2][1] |= l_291[2][3];
            for (l_292[3][3][5] = 0; (l_292[3][3][5] == 20); l_292[3][3][5] = safe_add_func_int32_t_s_s(l_292[3][3][5], 9))
            { /* block id: 96 */
                int32_t l_295 = 1L;
                uint32_t l_332 = 0x3061C280L;
                uint8_t l_335 = 1UL;
                int64_t l_336 = 0x620D0F976BDFC17AL;
                int32_t l_337 = 0x09E73C5FL;
                VECTOR(int32_t, 8) l_338 = (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x31009D2DL), 0x31009D2DL), 0x31009D2DL, 3L, 0x31009D2DL);
                struct S0 l_339 = {18446744073709551609UL,4294967291UL};/* VOLATILE GLOBAL l_339 */
                struct S0 l_340 = {18446744073709551615UL,0xE420300EL};/* VOLATILE GLOBAL l_340 */
                int64_t l_341 = 0x417FCE8009594C67L;
                int32_t l_342 = 0x35F64353L;
                struct S0 l_359 = {0x48BFE303131CCC55L,4294967289UL};/* VOLATILE GLOBAL l_359 */
                struct S0 l_360 = {0x5B6BDC150330CD32L,0xD9628E17L};/* VOLATILE GLOBAL l_360 */
                int i;
                for (l_295 = 0; (l_295 != 26); l_295 = safe_add_func_uint32_t_u_u(l_295, 6))
                { /* block id: 99 */
                    VECTOR(int32_t, 8) l_298 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                    VECTOR(int32_t, 2) l_299 = (VECTOR(int32_t, 2))((-3L), 0x21AEED54L);
                    union U1 l_300 = {0x51B89531L};/* VOLATILE GLOBAL l_300 */
                    int64_t l_301 = (-1L);
                    VECTOR(int32_t, 8) l_302 = (VECTOR(int32_t, 8))(0x0FA521C4L, (VECTOR(int32_t, 4))(0x0FA521C4L, (VECTOR(int32_t, 2))(0x0FA521C4L, 0x0A60B2B7L), 0x0A60B2B7L), 0x0A60B2B7L, 0x0FA521C4L, 0x0A60B2B7L);
                    VECTOR(int32_t, 16) l_303 = (VECTOR(int32_t, 16))(0x56FB4428L, (VECTOR(int32_t, 4))(0x56FB4428L, (VECTOR(int32_t, 2))(0x56FB4428L, (-7L)), (-7L)), (-7L), 0x56FB4428L, (-7L), (VECTOR(int32_t, 2))(0x56FB4428L, (-7L)), (VECTOR(int32_t, 2))(0x56FB4428L, (-7L)), 0x56FB4428L, (-7L), 0x56FB4428L, (-7L));
                    uint64_t l_304 = 1UL;
                    VECTOR(int32_t, 2) l_305 = (VECTOR(int32_t, 2))(0x641AAB3DL, 8L);
                    int64_t l_306 = 1L;
                    VECTOR(int32_t, 2) l_307 = (VECTOR(int32_t, 2))(1L, 0x5C960B66L);
                    VECTOR(int32_t, 16) l_331 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L), (VECTOR(int32_t, 2))(0L, (-5L)), (VECTOR(int32_t, 2))(0L, (-5L)), 0L, (-5L), 0L, (-5L));
                    int i;
                    if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_298.s02)), 0x5FBA849DL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_299.xx)).hi, 0L, (-1L), (-1L))).zwyyxwzwyzzzzxyx)).sefd3)), 0x690F8A7AL)).s4523037745245026, (int32_t)(l_290[0] = (l_300 , (-3L)))))).scf, ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))((l_290[0] = l_301), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_302.s03)).xxyy)), ((VECTOR(int32_t, 2))(l_303.s70)), 0L)), (int32_t)l_304))).s67, ((VECTOR(int32_t, 8))(l_305.yxyyxxyx)).s45))))).yyxx, ((VECTOR(int32_t, 16))(l_306, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x067EC5F1L, (-5L))).xyxxxyxy)), (-9L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_307.xyxxxyxy)))).hi)))), 0x493292E9L, (-1L))).sedc7, ((VECTOR(int32_t, 2))(0L, 0x5770C40EL)).yxyy))).xwxxwzxz)).s1)
                    { /* block id: 102 */
                        int32_t l_308 = 5L;
                        uint64_t l_309[6][4] = {{0UL,0x8D0A3ED33E6D1F9CL,18446744073709551614UL,0x65F0AB91E926790EL},{0UL,0x8D0A3ED33E6D1F9CL,18446744073709551614UL,0x65F0AB91E926790EL},{0UL,0x8D0A3ED33E6D1F9CL,18446744073709551614UL,0x65F0AB91E926790EL},{0UL,0x8D0A3ED33E6D1F9CL,18446744073709551614UL,0x65F0AB91E926790EL},{0UL,0x8D0A3ED33E6D1F9CL,18446744073709551614UL,0x65F0AB91E926790EL},{0UL,0x8D0A3ED33E6D1F9CL,18446744073709551614UL,0x65F0AB91E926790EL}};
                        int i, j;
                        ++l_309[3][0];
                    }
                    else
                    { /* block id: 104 */
                        struct S0 l_313[1][2][9] = {{{{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL}},{{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL},{0x723015230D3935D6L,0UL}}}};
                        struct S0 *l_312 = &l_313[0][0][7];
                        struct S0 *l_314 = &l_313[0][1][5];
                        struct S0 l_315 = {0x856E05A2D3889C08L,4UL};/* VOLATILE GLOBAL l_315 */
                        struct S0 l_316 = {0x5F02C4B146E38B36L,4294967294UL};/* VOLATILE GLOBAL l_316 */
                        int64_t l_317 = 0x01EE4678E7F8176EL;
                        uint64_t l_318[10][6][4] = {{{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L}},{{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L}},{{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L}},{{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L}},{{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L}},{{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L}},{{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L}},{{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L}},{{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L}},{{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L},{0UL,18446744073709551615UL,0x63C039C909553FF8L,0xF4E34CD7436B87B7L}}};
                        struct S0 l_319 = {18446744073709551615UL,4294967286UL};/* VOLATILE GLOBAL l_319 */
                        struct S0 l_320 = {0xD56FE25F6DC629D4L,0x5DE7E583L};/* VOLATILE GLOBAL l_320 */
                        int i, j, k;
                        l_314 = l_312;
                        l_320 = (l_315 , (l_316 , (l_317 , (l_318[9][3][2] , l_319))));
                    }
                    for (l_298.s0 = 18; (l_298.s0 <= (-26)); l_298.s0 = safe_sub_func_uint32_t_u_u(l_298.s0, 1))
                    { /* block id: 110 */
                        int32_t l_324 = (-6L);
                        int32_t *l_323 = &l_324;
                        uint16_t l_325[5][7] = {{65535UL,0x7111L,65530UL,65527UL,1UL,65535UL,65527UL},{65535UL,0x7111L,65530UL,65527UL,1UL,65535UL,65527UL},{65535UL,0x7111L,65530UL,65527UL,1UL,65535UL,65527UL},{65535UL,0x7111L,65530UL,65527UL,1UL,65535UL,65527UL},{65535UL,0x7111L,65530UL,65527UL,1UL,65535UL,65527UL}};
                        int i, j;
                        l_323 = (void*)0;
                        l_307.x = (FAKE_DIVERGE(p_528->global_0_offset, get_global_id(0), 10) , l_325[0][4]);
                    }
                    for (l_303.s2 = (-4); (l_303.s2 == (-28)); --l_303.s2)
                    { /* block id: 116 */
                        uint64_t l_328 = 18446744073709551612UL;
                        int32_t l_330 = (-1L);
                        int32_t *l_329[6][3][9] = {{{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330}},{{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330}},{{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330}},{{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330}},{{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330}},{{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330},{&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330,&l_330}}};
                        int i, j, k;
                        l_329[1][2][2] = (l_328 , (void*)0);
                    }
                    l_290[0] = ((VECTOR(int32_t, 4))(l_331.s38b8)).x;
                }
                l_340 = (((l_295 = ((--l_332) , l_335)) , ((l_337 ^= l_336) , FAKE_DIVERGE(p_528->global_2_offset, get_global_id(2), 10))) , (((((VECTOR(int32_t, 16))(l_338.s1377433500572011)).s3 , (-1L)) , ((VECTOR(uint64_t, 2))(0xD814FB9CD520236DL, 0x98FA7BCA6CF48EFCL)).lo) , l_339));
                if ((l_341 , l_342))
                { /* block id: 125 */
                    uint32_t l_343 = 1UL;
                    if ((l_290[1] = l_343))
                    { /* block id: 127 */
                        int32_t l_344 = (-1L);
                        int32_t *l_345 = &l_344;
                        int32_t *l_346 = &l_344;
                        int64_t l_347 = 1L;
                        l_346 = (l_344 , (FAKE_DIVERGE(p_528->local_2_offset, get_local_id(2), 10) , l_345));
                        l_342 &= l_347;
                    }
                    else
                    { /* block id: 130 */
                        int32_t l_349 = 3L;
                        int32_t *l_348[9][4] = {{&l_349,&l_349,&l_349,&l_349},{&l_349,&l_349,&l_349,&l_349},{&l_349,&l_349,&l_349,&l_349},{&l_349,&l_349,&l_349,&l_349},{&l_349,&l_349,&l_349,&l_349},{&l_349,&l_349,&l_349,&l_349},{&l_349,&l_349,&l_349,&l_349},{&l_349,&l_349,&l_349,&l_349},{&l_349,&l_349,&l_349,&l_349}};
                        int32_t *l_350 = (void*)0;
                        int32_t *l_351 = &l_349;
                        int i, j;
                        l_351 = (l_350 = l_348[2][0]);
                    }
                    for (l_343 = 0; (l_343 >= 3); ++l_343)
                    { /* block id: 136 */
                        int64_t l_356 = (-6L);
                        int64_t *l_355 = &l_356;
                        int64_t **l_354[4][1][8] = {{{&l_355,&l_355,&l_355,&l_355,&l_355,&l_355,&l_355,&l_355}},{{&l_355,&l_355,&l_355,&l_355,&l_355,&l_355,&l_355,&l_355}},{{&l_355,&l_355,&l_355,&l_355,&l_355,&l_355,&l_355,&l_355}},{{&l_355,&l_355,&l_355,&l_355,&l_355,&l_355,&l_355,&l_355}}};
                        int i, j, k;
                        l_354[3][0][2] = (void*)0;
                    }
                }
                else
                { /* block id: 139 */
                    union U1 l_357 = {0x5DE7A03BL};/* VOLATILE GLOBAL l_357 */
                    VECTOR(int32_t, 8) l_358 = (VECTOR(int32_t, 8))(0x77C6EE53L, (VECTOR(int32_t, 4))(0x77C6EE53L, (VECTOR(int32_t, 2))(0x77C6EE53L, 0x6564D635L), 0x6564D635L), 0x6564D635L, 0x77C6EE53L, 0x6564D635L);
                    int i;
                    l_342 ^= (l_338.s6 |= ((l_357 , 0UL) , ((VECTOR(int32_t, 8))(l_358.s23671170)).s2));
                }
                l_360 = l_359;
            }
            l_378 ^= ((l_361 , ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(0x1F278AB7L, (-1L), l_362, 1L, (l_363 , l_364), (-1L), 0x07BEF348L, (-5L))).s22, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x5E4A9D8BL, 0x1221CB64L)).xxxyxxyx)).s44, ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(l_365, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_366.wxyyzxzyzwywxzzz)).s08)), 0x2127D038L)), ((VECTOR(int32_t, 16))(l_367.s9b97a5637182334d)).scd79))).odd))).yxxy)).wyyxzxyw, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_368[4][7], ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x12938590L, (-1L))), (-5L), 0x1C5E4597L)), ((VECTOR(int32_t, 16))(l_369.s3011532521300672)).s4657, ((VECTOR(int32_t, 16))(l_370.s6276065250453170)).s2176))), (-4L), l_371, ((l_375 = ((l_374 = (l_373 = l_372[1][0][3])) , 0x0AL)) , 0x201F33C5L), 0x58C44B7FL, 0x40EBB1E1L, 2L, ((VECTOR(int32_t, 4))(4L)), (-1L))).s13c8)), ((VECTOR(int32_t, 4))(0x4998F574L)), ((VECTOR(int32_t, 4))((-6L)))))), l_376[0][4], 0x201681FCL, (-8L), 0x7AE77B5BL)), ((VECTOR(int32_t, 8))((-3L)))))).s01)).yyxyxyxy))).s0) , l_377);
            unsigned int result = 0;
            int l_290_i0;
            for (l_290_i0 = 0; l_290_i0 < 2; l_290_i0++) {
                result += l_290[l_290_i0];
            }
            int l_291_i0, l_291_i1;
            for (l_291_i0 = 0; l_291_i0 < 6; l_291_i0++) {
                for (l_291_i1 = 0; l_291_i1 < 7; l_291_i1++) {
                    result += l_291[l_291_i0][l_291_i1];
                }
            }
            int l_292_i0, l_292_i1, l_292_i2;
            for (l_292_i0 = 0; l_292_i0 < 5; l_292_i0++) {
                for (l_292_i1 = 0; l_292_i1 < 5; l_292_i1++) {
                    for (l_292_i2 = 0; l_292_i2 < 7; l_292_i2++) {
                        result += l_292[l_292_i0][l_292_i1][l_292_i2];
                    }
                }
            }
            result += l_361;
            result += l_362;
            result += l_363;
            result += l_364;
            result += l_365;
            result += l_366.w;
            result += l_366.z;
            result += l_366.y;
            result += l_366.x;
            result += l_367.sf;
            result += l_367.se;
            result += l_367.sd;
            result += l_367.sc;
            result += l_367.sb;
            result += l_367.sa;
            result += l_367.s9;
            result += l_367.s8;
            result += l_367.s7;
            result += l_367.s6;
            result += l_367.s5;
            result += l_367.s4;
            result += l_367.s3;
            result += l_367.s2;
            result += l_367.s1;
            result += l_367.s0;
            int l_368_i0, l_368_i1;
            for (l_368_i0 = 0; l_368_i0 < 7; l_368_i0++) {
                for (l_368_i1 = 0; l_368_i1 < 8; l_368_i1++) {
                    result += l_368[l_368_i0][l_368_i1];
                }
            }
            result += l_369.s7;
            result += l_369.s6;
            result += l_369.s5;
            result += l_369.s4;
            result += l_369.s3;
            result += l_369.s2;
            result += l_369.s1;
            result += l_369.s0;
            result += l_370.s7;
            result += l_370.s6;
            result += l_370.s5;
            result += l_370.s4;
            result += l_370.s3;
            result += l_370.s2;
            result += l_370.s1;
            result += l_370.s0;
            result += l_371;
            int l_372_i0, l_372_i1, l_372_i2;
            for (l_372_i0 = 0; l_372_i0 < 2; l_372_i0++) {
                for (l_372_i1 = 0; l_372_i1 < 1; l_372_i1++) {
                    for (l_372_i2 = 0; l_372_i2 < 4; l_372_i2++) {
                        result += l_372[l_372_i0][l_372_i1][l_372_i2];
                    }
                }
            }
            result += l_373;
            result += l_374;
            result += l_375;
            int l_376_i0, l_376_i1;
            for (l_376_i0 = 0; l_376_i0 < 3; l_376_i0++) {
                for (l_376_i1 = 0; l_376_i1 < 8; l_376_i1++) {
                    result += l_376[l_376_i0][l_376_i1];
                }
            }
            result += l_377;
            result += l_378;
            atomic_add(&p_528->g_special_values[57 * get_linear_group_id() + 24], result);
        }
        else
        { /* block id: 149 */
            (1 + 1);
        }
        (*l_59) = ((((safe_sub_func_uint16_t_u_u((((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((p_17 != &p_528->g_189) , (((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_385.zwyxxywwzywzzwzz)).odd)).even)).zzyxwxzzyyxxwywy, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(l_386.s3667737201131453))))))).s3 & (((void*)0 == &p_528->g_189) > p_18))), (l_387 , (*p_528->g_215)))), (FAKE_DIVERGE(p_528->local_1_offset, get_local_id(1), 10) <= ((*l_289) != (void*)0)))) | 0UL) > p_16), p_528->g_181.x)) ^ 0xA5E66170L) ^ p_16) == 0x0983E9A772231267L);
        if ((*l_59))
        { /* block id: 153 */
            int32_t l_388 = 2L;
            VECTOR(int64_t, 8) l_412 = (VECTOR(int64_t, 8))(0x10614E7C9A61A537L, (VECTOR(int64_t, 4))(0x10614E7C9A61A537L, (VECTOR(int64_t, 2))(0x10614E7C9A61A537L, 1L), 1L), 1L, 0x10614E7C9A61A537L, 1L);
            VECTOR(int64_t, 4) l_415 = (VECTOR(int64_t, 4))(0x003AE5473AB8DFB2L, (VECTOR(int64_t, 2))(0x003AE5473AB8DFB2L, 0x561B1F790AEDD278L), 0x561B1F790AEDD278L);
            int32_t ***l_418 = &l_289;
            uint8_t *l_419 = (void*)0;
            uint8_t *l_420 = (void*)0;
            uint8_t *l_421 = (void*)0;
            uint8_t *l_422 = (void*)0;
            uint8_t *l_423 = (void*)0;
            int64_t *l_428 = &l_387;
            int i;
            if (l_388)
                break;
            for (p_528->g_65.f0 = 0; (p_528->g_65.f0 != 4); p_528->g_65.f0 = safe_add_func_uint16_t_u_u(p_528->g_65.f0, 8))
            { /* block id: 157 */
                if ((atomic_inc(&p_528->g_atomic_input[57 * get_linear_group_id() + 37]) == 0))
                { /* block id: 159 */
                    uint32_t l_391 = 6UL;
                    union U1 l_393[3][4][1] = {{{{-8L}},{{-8L}},{{-8L}},{{-8L}}},{{{-8L}},{{-8L}},{{-8L}},{{-8L}}},{{{-8L}},{{-8L}},{{-8L}},{{-8L}}}};
                    union U1 *l_392 = &l_393[1][2][0];
                    int32_t *l_394[8] = {&l_393[1][2][0].f0,&l_393[1][2][0].f0,&l_393[1][2][0].f0,&l_393[1][2][0].f0,&l_393[1][2][0].f0,&l_393[1][2][0].f0,&l_393[1][2][0].f0,&l_393[1][2][0].f0};
                    int32_t *l_395 = &l_393[1][2][0].f0;
                    uint64_t l_403[8][9] = {{0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL},{0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL},{0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL},{0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL},{0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL},{0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL},{0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL},{0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL,0xD6B381458801B10FL,0xD6B381458801B10FL,0x0BA3F6FDD1329FDFL,0x0BA3F6FDD1329FDFL}};
                    int32_t l_404 = 0x7A5EA84FL;
                    int i, j, k;
                    l_392 = (l_391 , (void*)0);
                    l_395 = l_394[4];
                    for (l_391 = 0; (l_391 <= 22); l_391 = safe_add_func_uint8_t_u_u(l_391, 7))
                    { /* block id: 164 */
                        uint16_t l_398 = 2UL;
                        uint16_t l_399 = 0UL;
                        struct S0 l_400 = {5UL,0x4CF81965L};/* VOLATILE GLOBAL l_400 */
                        uint16_t l_401 = 0x292CL;
                        uint16_t l_402 = 0x8AA2L;
                        l_399 = l_398;
                        l_394[4] = (void*)0;
                        l_400 = l_400;
                        l_402 ^= l_401;
                    }
                    l_404 |= l_403[4][5];
                    unsigned int result = 0;
                    result += l_391;
                    int l_393_i0, l_393_i1, l_393_i2;
                    for (l_393_i0 = 0; l_393_i0 < 3; l_393_i0++) {
                        for (l_393_i1 = 0; l_393_i1 < 4; l_393_i1++) {
                            for (l_393_i2 = 0; l_393_i2 < 1; l_393_i2++) {
                                result += l_393[l_393_i0][l_393_i1][l_393_i2].f0;
                                result += l_393[l_393_i0][l_393_i1][l_393_i2].f1;
                                result += l_393[l_393_i0][l_393_i1][l_393_i2].f2;
                            }
                        }
                    }
                    int l_403_i0, l_403_i1;
                    for (l_403_i0 = 0; l_403_i0 < 8; l_403_i0++) {
                        for (l_403_i1 = 0; l_403_i1 < 9; l_403_i1++) {
                            result += l_403[l_403_i0][l_403_i1];
                        }
                    }
                    result += l_404;
                    atomic_add(&p_528->g_special_values[57 * get_linear_group_id() + 37], result);
                }
                else
                { /* block id: 171 */
                    (1 + 1);
                }
            }
            (*p_528->g_429) &= (((~(safe_add_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(((safe_add_func_int64_t_s_s(0L, ((*l_428) = ((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(9L, (-5L))), ((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_411.s0054554736605127)).hi)), ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_412.s5335725205670304)))).even, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(p_528->g_413.wywzyyxy)).s3110660345761334)).lo))).lo, ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 16))(p_528->g_414.xzwxxywxywxywxzz)), ((VECTOR(int64_t, 4))(7L, 0x18B975F80A275DAFL, 0x269AC6619DF08DD8L, 0x40E4A5E2FF4F4F29L)).zyywwwyywwxzyyxw, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 8))(l_415.zxywzxzw))))).s4226737117213402, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))((-2L), (0x1AE2L | (safe_mul_func_uint8_t_u_u((p_528->g_179.s6 ^= (((*l_418) = &l_59) != &l_59)), (p_18 ^ p_18)))), ((safe_rshift_func_int8_t_s_u(((8UL >= ((p_528->g_68.f0 && (p_17 != p_17)) | 0x89A1L)) == p_19), 5)) , p_528->g_288), 0x223C9F880AFE2C6AL, 0x71603BD8E88D5CD2L, 0L, (-1L), 0x3DEAD04C6B851FF5L)), ((VECTOR(int64_t, 2))((-9L))), (**l_289), 0x29E378AF67CB1EFAL, (-7L), (-2L), 0L, 9L))))).s81eb)).zxwyzwyzwxzxxyzx))).s506a, ((VECTOR(int64_t, 4))((-1L)))))), ((VECTOR(int64_t, 4))(0x7B9DA927395B717DL)), ((VECTOR(int64_t, 4))(0x3CF3777CED24451DL))))), ((VECTOR(int64_t, 4))((-8L)))))), ((VECTOR(int64_t, 4))((-5L)))))), 1L, 2L)).s06, ((VECTOR(int64_t, 2))(0x166AD77C4FEF02BCL))))).xyxxyxxyyyxyyxxy, ((VECTOR(int64_t, 16))((-1L)))))).s8))) > FAKE_DIVERGE(p_528->global_1_offset, get_global_id(1), 10)), p_19)) ^ 0x94D3821B52B39CA8L) == (*l_59)), p_528->g_288))) && p_528->g_179.s2) && (**l_289));
        }
        else
        { /* block id: 179 */
            union U1 **l_432 = (void*)0;
            union U1 ***l_431[4][9][4] = {{{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432}},{{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432}},{{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432}},{{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432},{&l_432,&l_432,&l_432,&l_432}}};
            int i, j, k;
            p_528->g_433 = &p_528->g_63[4][3];
            (*l_59) = (GROUP_DIVERGE(1, 1) , (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_528->local_0_offset, get_local_id(0), 10), (*l_59))));
        }
    }
    p_528->g_453++;
    return p_18;
}


/* ------------------------------------------ */
/* 
 * reads : p_528->g_70.f1 p_528->g_162 p_528->g_60 p_528->g_174 p_528->g_179 p_528->g_180 p_528->g_181 p_528->g_183 p_528->g_105 p_528->g_189 p_528->g_94 p_528->g_31 p_528->g_72.f1 p_528->g_115 p_528->g_215 p_528->g_75.f0 p_528->g_224 p_528->g_78.f0 p_528->g_131
 * writes: p_528->g_70.f1 p_528->g_115 p_528->g_174 p_528->g_177 p_528->g_189 p_528->g_72.f1 p_528->g_209 p_528->g_94 p_528->l_comm_values p_528->g_73.f0 p_528->g_179 p_528->g_78.f0 p_528->g_131 p_528->g_8
 */
int64_t  func_33(uint16_t  p_34, int32_t  p_35, int8_t  p_36, struct S2 * p_528)
{ /* block id: 40 */
    VECTOR(uint32_t, 4) l_160 = (VECTOR(uint32_t, 4))(0xF74BF3BDL, (VECTOR(uint32_t, 2))(0xF74BF3BDL, 0UL), 0UL);
    uint16_t l_182 = 0xEA30L;
    int32_t l_187[7] = {0x3A308FB7L,0x3A308FB7L,0x3A308FB7L,0x3A308FB7L,0x3A308FB7L,0x3A308FB7L,0x3A308FB7L};
    uint32_t l_250 = 0x9B3D012AL;
    int32_t **l_251 = &p_528->g_131;
    int i;
    if ((18446744073709551614UL | 0x9BCB20ABD185158CL))
    { /* block id: 41 */
        int16_t l_163 = 0x5C46L;
        uint16_t l_164[9] = {0x1805L,7UL,0x1805L,0x1805L,7UL,0x1805L,0x1805L,7UL,0x1805L};
        VECTOR(uint8_t, 16) l_178 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xEAL), 0xEAL), 0xEAL, 1UL, 0xEAL, (VECTOR(uint8_t, 2))(1UL, 0xEAL), (VECTOR(uint8_t, 2))(1UL, 0xEAL), 1UL, 0xEAL, 1UL, 0xEAL);
        int16_t l_192 = 1L;
        int i;
        for (p_528->g_70.f1 = (-20); (p_528->g_70.f1 != (-1)); p_528->g_70.f1 = safe_add_func_uint64_t_u_u(p_528->g_70.f1, 9))
        { /* block id: 44 */
            VECTOR(int32_t, 8) l_161 = (VECTOR(int32_t, 8))(0x75E2C04EL, (VECTOR(int32_t, 4))(0x75E2C04EL, (VECTOR(int32_t, 2))(0x75E2C04EL, (-2L)), (-2L)), (-2L), 0x75E2C04EL, (-2L));
            uint64_t *l_165 = &p_528->g_115;
            uint32_t *l_173 = &p_528->g_174[0];
            int32_t *l_186[8] = {&p_528->g_72.f0,&p_528->g_72.f0,&p_528->g_72.f0,&p_528->g_72.f0,&p_528->g_72.f0,&p_528->g_72.f0,&p_528->g_72.f0,&p_528->g_72.f0};
            uint32_t *l_188 = &p_528->g_189;
            int64_t l_190[5][9] = {{0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L},{0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L},{0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L},{0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L},{0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L,0x623D0893F3FD8495L}};
            int32_t **l_191 = &l_186[2];
            int i, j;
            (*l_191) = ((safe_mul_func_int8_t_s_s(((safe_mul_func_uint32_t_u_u((l_163 = ((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 2))(l_160.zx)).yyyxxxyxxyxyxxxx, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 8))(l_161.s25107365)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_528->g_162.ywyz)).xxyyyzxx))))).s54)).yyyxyxyxyyxxxxxy))).s1), (((*l_165) = l_164[4]) > (l_160.w != (((+((((((*l_188) ^= (((safe_unary_minus_func_uint8_t_u(((safe_add_func_uint16_t_u_u(((l_164[4] ^ (((safe_mod_func_uint32_t_u_u(p_528->g_60, 0x6E7D2BA4L)) != (p_528->g_177 = (++(*l_173)))) < p_34)) < (!(l_187[5] = (((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_178.sb6e3)))).wwzwwzzx, ((VECTOR(uint8_t, 8))(p_528->g_179.sb8eb1a2b))))).s7711601366233760)).odd)), ((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_528->g_180.xx)))), 0x33L, 0x20L)).hi, ((VECTOR(int8_t, 4))(0x3CL, ((VECTOR(int8_t, 2))(p_528->g_181.yy)), (-7L))).odd, ((VECTOR(int8_t, 4))(l_182, ((VECTOR(int8_t, 2))(p_528->g_183.xy)), 0x52L)).hi))).yxxyxxyxyxxxxxxx, ((VECTOR(int8_t, 8))(8L, (-6L), ((VECTOR(int8_t, 16))((safe_add_func_int8_t_s_s(((0x08AF396E7CF41E0EL || ((l_164[4] != p_528->g_105.s5) || 4294967295UL)) >= p_35), l_161.s4)), p_36, 0x3AL, ((VECTOR(int8_t, 2))(0x3EL)), ((VECTOR(int8_t, 4))(0x2EL)), p_528->g_180.y, p_35, 0L, ((VECTOR(int8_t, 4))(0x0FL)))).s6, ((VECTOR(int8_t, 4))(0x29L)), (-1L))).s0325365024632170)))))).sf0))))).xyyxyxxx))).s3 > p_528->g_179.sa)))), GROUP_DIVERGE(0, 1))) != p_34))) & 0x3810L) , l_178.s1)) , p_528->g_94.sf) & p_528->g_31.s1) || p_528->g_180.x) , l_190[4][0])) > l_178.s6) , p_36))))) ^ l_160.w), p_34)) , (void*)0);
            return l_192;
        }
    }
    else
    { /* block id: 54 */
        int32_t *l_196 = &p_528->g_65.f1;
        int32_t l_212 = 0L;
        int32_t l_241 = 1L;
        int32_t l_242 = (-3L);
        union U1 **l_249 = &p_528->g_63[4][3];
        for (p_528->g_72.f1 = (-21); (p_528->g_72.f1 < (-23)); p_528->g_72.f1--)
        { /* block id: 57 */
            int32_t **l_195[1];
            uint64_t *l_201 = &p_528->g_115;
            uint64_t *l_208 = &p_528->g_209;
            uint16_t *l_210[6][5] = {{&p_528->g_100,&p_528->g_100,&p_528->g_100,&p_528->g_100,&p_528->g_100},{&p_528->g_100,&p_528->g_100,&p_528->g_100,&p_528->g_100,&p_528->g_100},{&p_528->g_100,&p_528->g_100,&p_528->g_100,&p_528->g_100,&p_528->g_100},{&p_528->g_100,&p_528->g_100,&p_528->g_100,&p_528->g_100,&p_528->g_100},{&p_528->g_100,&p_528->g_100,&p_528->g_100,&p_528->g_100,&p_528->g_100},{&p_528->g_100,&p_528->g_100,&p_528->g_100,&p_528->g_100,&p_528->g_100}};
            int64_t l_211 = 1L;
            int64_t *l_217[1][6][7] = {{{&l_211,(void*)0,&l_211,&l_211,(void*)0,&l_211,&l_211},{&l_211,(void*)0,&l_211,&l_211,(void*)0,&l_211,&l_211},{&l_211,(void*)0,&l_211,&l_211,(void*)0,&l_211,&l_211},{&l_211,(void*)0,&l_211,&l_211,(void*)0,&l_211,&l_211},{&l_211,(void*)0,&l_211,&l_211,(void*)0,&l_211,&l_211},{&l_211,(void*)0,&l_211,&l_211,(void*)0,&l_211,&l_211}}};
            uint8_t *l_227 = (void*)0;
            uint32_t l_246 = 0x0A2FD06DL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_195[i] = &p_528->g_131;
            p_528->g_73.f0 = ((l_196 = func_50(p_35, p_36, p_528)) == ((((*l_201) ^= (safe_mod_func_int16_t_s_s(p_528->g_180.x, (safe_add_func_int8_t_s_s(p_528->g_31.s3, 0UL))))) <= (((safe_mod_func_int64_t_s_s((p_528->l_comm_values[(safe_mod_func_uint32_t_u_u(p_528->tid, 36))] = ((((((safe_rshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(0xDBD3AB86DC195B6DL, 0x734E232B65486D1CL)).even, ((*l_208) = 18446744073709551615UL))), (p_528->g_94.s8--))) , (void*)0) != p_528->g_215) > p_34) , 0x5550L) == l_187[5])), p_528->g_75[0][1].f0)) , (-10L)) && 0UL)) , (void*)0));
            if ((0x140DCD4049CAE6DAL < (safe_add_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(0x6DL, ((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_528->g_224.zz)), 0xE7B5L, 0UL)).even, (uint16_t)((l_195[0] = &p_528->g_131) != &p_528->g_131)))).odd, 9)) ^ p_34))), (safe_mul_func_uint8_t_u_u((++p_528->g_179.sf), p_36))))))
            { /* block id: 66 */
                int8_t l_232 = 0L;
                int8_t l_234 = 0x28L;
                int32_t l_236 = 0x50620ECAL;
                int32_t l_239 = 0x2D98C830L;
                int32_t l_240[9] = {0x7D0D3D26L,0x60CB7C3AL,0x7D0D3D26L,0x7D0D3D26L,0x60CB7C3AL,0x7D0D3D26L,0x7D0D3D26L,0x60CB7C3AL,0x7D0D3D26L};
                int i;
                for (p_528->g_78.f0 = 0; (p_528->g_78.f0 >= 18); ++p_528->g_78.f0)
                { /* block id: 69 */
                    int32_t l_233 = 0x39AF29F7L;
                    int32_t l_235 = 1L;
                    int32_t l_237 = 0x2828A994L;
                    int32_t l_238[2];
                    uint8_t l_243 = 0xBDL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_238[i] = (-4L);
                    ++l_243;
                    l_246++;
                }
            }
            else
            { /* block id: 73 */
                l_249 = l_249;
                return l_250;
            }
        }
    }
    (*l_251) = &p_528->g_8;
    (**l_251) = 0x6A485D6DL;
    if ((atomic_inc(&p_528->l_atomic_input[2]) == 6))
    { /* block id: 82 */
        uint32_t l_252 = 0x6C5E4E9FL;
        uint32_t l_253 = 0x63ACC88BL;
        VECTOR(int16_t, 4) l_254 = (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, (-5L)), (-5L));
        VECTOR(int8_t, 16) l_255 = (VECTOR(int8_t, 16))(0x6AL, (VECTOR(int8_t, 4))(0x6AL, (VECTOR(int8_t, 2))(0x6AL, 0x3FL), 0x3FL), 0x3FL, 0x6AL, 0x3FL, (VECTOR(int8_t, 2))(0x6AL, 0x3FL), (VECTOR(int8_t, 2))(0x6AL, 0x3FL), 0x6AL, 0x3FL, 0x6AL, 0x3FL);
        VECTOR(uint8_t, 16) l_256 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x75L), 0x75L), 0x75L, 255UL, 0x75L, (VECTOR(uint8_t, 2))(255UL, 0x75L), (VECTOR(uint8_t, 2))(255UL, 0x75L), 255UL, 0x75L, 255UL, 0x75L);
        VECTOR(uint8_t, 2) l_257 = (VECTOR(uint8_t, 2))(1UL, 255UL);
        VECTOR(int16_t, 2) l_258 = (VECTOR(int16_t, 2))(0L, 0x6A75L);
        VECTOR(int16_t, 4) l_259 = (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, 0x4687L), 0x4687L);
        uint16_t l_260 = 0xB26CL;
        VECTOR(int16_t, 16) l_261 = (VECTOR(int16_t, 16))(0x5005L, (VECTOR(int16_t, 4))(0x5005L, (VECTOR(int16_t, 2))(0x5005L, 0x3E47L), 0x3E47L), 0x3E47L, 0x5005L, 0x3E47L, (VECTOR(int16_t, 2))(0x5005L, 0x3E47L), (VECTOR(int16_t, 2))(0x5005L, 0x3E47L), 0x5005L, 0x3E47L, 0x5005L, 0x3E47L);
        VECTOR(int16_t, 16) l_262 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int16_t, 2))((-1L), 1L), (VECTOR(int16_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
        VECTOR(int16_t, 4) l_263 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L));
        VECTOR(int16_t, 4) l_264 = (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0x11F3L), 0x11F3L);
        VECTOR(uint16_t, 2) l_265 = (VECTOR(uint16_t, 2))(1UL, 0x9B07L);
        VECTOR(int16_t, 16) l_266 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x064CL), 0x064CL), 0x064CL, (-1L), 0x064CL, (VECTOR(int16_t, 2))((-1L), 0x064CL), (VECTOR(int16_t, 2))((-1L), 0x064CL), (-1L), 0x064CL, (-1L), 0x064CL);
        VECTOR(int16_t, 8) l_267 = (VECTOR(int16_t, 8))(0x19F6L, (VECTOR(int16_t, 4))(0x19F6L, (VECTOR(int16_t, 2))(0x19F6L, 0x6C45L), 0x6C45L), 0x6C45L, 0x19F6L, 0x6C45L);
        VECTOR(int16_t, 8) l_268 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x1E02L), 0x1E02L), 0x1E02L, (-1L), 0x1E02L);
        VECTOR(int16_t, 16) l_269 = (VECTOR(int16_t, 16))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x548CL), 0x548CL), 0x548CL, 2L, 0x548CL, (VECTOR(int16_t, 2))(2L, 0x548CL), (VECTOR(int16_t, 2))(2L, 0x548CL), 2L, 0x548CL, 2L, 0x548CL);
        VECTOR(int16_t, 2) l_270 = (VECTOR(int16_t, 2))(0x1B14L, 0x37DDL);
        VECTOR(int16_t, 16) l_271 = (VECTOR(int16_t, 16))(0x71FCL, (VECTOR(int16_t, 4))(0x71FCL, (VECTOR(int16_t, 2))(0x71FCL, 0x1AC0L), 0x1AC0L), 0x1AC0L, 0x71FCL, 0x1AC0L, (VECTOR(int16_t, 2))(0x71FCL, 0x1AC0L), (VECTOR(int16_t, 2))(0x71FCL, 0x1AC0L), 0x71FCL, 0x1AC0L, 0x71FCL, 0x1AC0L);
        VECTOR(int16_t, 4) l_272 = (VECTOR(int16_t, 4))(0x28EDL, (VECTOR(int16_t, 2))(0x28EDL, 0L), 0L);
        int16_t l_273[4][2][8] = {{{0x7E0EL,0x5114L,0x25D5L,0x1BB9L,0x5114L,0x1BB9L,0x25D5L,0x5114L},{0x7E0EL,0x5114L,0x25D5L,0x1BB9L,0x5114L,0x1BB9L,0x25D5L,0x5114L}},{{0x7E0EL,0x5114L,0x25D5L,0x1BB9L,0x5114L,0x1BB9L,0x25D5L,0x5114L},{0x7E0EL,0x5114L,0x25D5L,0x1BB9L,0x5114L,0x1BB9L,0x25D5L,0x5114L}},{{0x7E0EL,0x5114L,0x25D5L,0x1BB9L,0x5114L,0x1BB9L,0x25D5L,0x5114L},{0x7E0EL,0x5114L,0x25D5L,0x1BB9L,0x5114L,0x1BB9L,0x25D5L,0x5114L}},{{0x7E0EL,0x5114L,0x25D5L,0x1BB9L,0x5114L,0x1BB9L,0x25D5L,0x5114L},{0x7E0EL,0x5114L,0x25D5L,0x1BB9L,0x5114L,0x1BB9L,0x25D5L,0x5114L}}};
        VECTOR(uint8_t, 16) l_274 = (VECTOR(uint8_t, 16))(0xF6L, (VECTOR(uint8_t, 4))(0xF6L, (VECTOR(uint8_t, 2))(0xF6L, 1UL), 1UL), 1UL, 0xF6L, 1UL, (VECTOR(uint8_t, 2))(0xF6L, 1UL), (VECTOR(uint8_t, 2))(0xF6L, 1UL), 0xF6L, 1UL, 0xF6L, 1UL);
        VECTOR(int32_t, 16) l_275 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
        VECTOR(int32_t, 4) l_276 = (VECTOR(int32_t, 4))(0x2B92E42CL, (VECTOR(int32_t, 2))(0x2B92E42CL, 0x36679132L), 0x36679132L);
        VECTOR(int32_t, 4) l_277 = (VECTOR(int32_t, 4))(0x02309ADFL, (VECTOR(int32_t, 2))(0x02309ADFL, 0x6D55AE62L), 0x6D55AE62L);
        uint32_t l_278 = 0xBEC5CF39L;
        uint32_t l_279[3][5][6] = {{{0x68DCBA84L,0x68DCBA84L,0UL,4294967286UL,0UL,4294967286UL},{0x68DCBA84L,0x68DCBA84L,0UL,4294967286UL,0UL,4294967286UL},{0x68DCBA84L,0x68DCBA84L,0UL,4294967286UL,0UL,4294967286UL},{0x68DCBA84L,0x68DCBA84L,0UL,4294967286UL,0UL,4294967286UL},{0x68DCBA84L,0x68DCBA84L,0UL,4294967286UL,0UL,4294967286UL}},{{0x68DCBA84L,0x68DCBA84L,0UL,4294967286UL,0UL,4294967286UL},{0x68DCBA84L,0x68DCBA84L,0UL,4294967286UL,0UL,4294967286UL},{0x68DCBA84L,0x68DCBA84L,0UL,4294967286UL,0UL,4294967286UL},{0x68DCBA84L,0x68DCBA84L,0UL,4294967286UL,0UL,4294967286UL},{0x68DCBA84L,0x68DCBA84L,0UL,4294967286UL,0UL,4294967286UL}},{{0x68DCBA84L,0x68DCBA84L,0UL,4294967286UL,0UL,4294967286UL},{0x68DCBA84L,0x68DCBA84L,0UL,4294967286UL,0UL,4294967286UL},{0x68DCBA84L,0x68DCBA84L,0UL,4294967286UL,0UL,4294967286UL},{0x68DCBA84L,0x68DCBA84L,0UL,4294967286UL,0UL,4294967286UL},{0x68DCBA84L,0x68DCBA84L,0UL,4294967286UL,0UL,4294967286UL}}};
        uint8_t l_280 = 2UL;
        uint32_t l_281 = 0UL;
        int8_t l_282 = 0x68L;
        int32_t l_283 = 0x64F86FADL;
        uint32_t l_284 = 0x29D404AAL;
        uint64_t l_285 = 1UL;
        uint16_t l_286[1];
        int16_t l_287 = 0x2D73L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_286[i] = 65527UL;
        l_287 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(0x44F20E0CL, 0x2783487EL, l_252, l_253, 0L, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 8))(l_254.zxzxzyxy)).s1362661036466076, ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(l_255.s34aa54c6ceb2b01d)).s4e, ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 8))(l_256.s689219ba)).even, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_257.yxyy)).hi)).xyyx))).even))), ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(l_258.xy)), ((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(l_259.wz))))).yxyxxxxy, (int16_t)l_260))).s02, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(l_261.s1811a4cf)).even, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_262.s2e0e)).zxxzyyyx)).hi))).odd))), ((VECTOR(int16_t, 2))(l_263.ww)), 0L, 0x7B3BL)).even, ((VECTOR(int16_t, 8))(l_264.yyyxzwwx)).lo))).ywwwwwyxxwxwxxwy))).sbb, ((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 16))(l_265.xyyyxyxxyyxxxyyy)).se3, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(l_266.se646)), ((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 2))(l_267.s44)).xyyxyxyxyyxxxxyy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_268.s6376)), 0x72FCL, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x2813L, 0x203FL)).xyyyxyyyyyyxxxxy)).lo, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_269.sc66954ff364518c6)).s68)).yyxxyxxy))).odd))).odd, ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_270.xy)))), 8L, 0L)).hi, ((VECTOR(int16_t, 4))(0x25B0L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_271.s7b)))), 0x27BBL)).odd, ((VECTOR(int16_t, 2))(l_272.zw))))).yyyx, ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))((-1L), ((VECTOR(int8_t, 2))((-10L), (-2L))), 0x01L, ((VECTOR(int8_t, 2))(1L, 0L)), 1L, 0x0EL)).s77, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 16))(0x77L, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(0xFCL, 4UL, 255UL, ((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 2))(0x94L, 0UL)).yxxy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(0x17L, 0xEBL, GROUP_DIVERGE(0, 1), ((VECTOR(uint8_t, 4))(0x6FL, 0UL, 0x50L, 0x26L)), 252UL)))).s40)).xyyy, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 2))(0UL, 0x0AL)), ((VECTOR(uint8_t, 8))(0x17L, l_273[0][1][2], ((VECTOR(uint8_t, 2))(l_274.s53)), 0x3BL, FAKE_DIVERGE(p_528->local_2_offset, get_local_id(2), 10), 255UL, 7UL)).s51))))).yxxy))), 255UL, (((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_275.sc9580029)).even, ((VECTOR(int32_t, 8))(l_276.wzxwzxww)).even))), ((VECTOR(int32_t, 16))(l_277.wxwzwwxwxwyxzwxy)).s78ef))).w , l_278), 0x4EL, 2UL, 0UL, ((VECTOR(uint8_t, 2))(0x3BL)), 1UL, 0x9DL)).sddc7)))), 0x24L, ((VECTOR(uint8_t, 2))(0x5EL)), 1UL)), 1UL, ((VECTOR(uint8_t, 4))(0x1FL)), 255UL, 0xDDL)), ((VECTOR(uint8_t, 16))(255UL))))).odd)))).even, ((VECTOR(uint8_t, 4))(0x90L))))).odd))))).yxyy, ((VECTOR(int16_t, 4))((-1L)))))).wyzywwyyyxwxywyy)).sbb54, (int16_t)l_279[1][3][0]))).even))), (-1L))).s2740617670644206, ((VECTOR(int16_t, 16))((-10L)))))).s9722, ((VECTOR(int16_t, 4))((-1L)))))).w, l_280, (-8L), 0x7F62L)), (int16_t)l_281))).even, (int16_t)l_282))), ((VECTOR(int16_t, 4))(0x2A0FL)), ((VECTOR(int16_t, 4))(0x0FCBL)), (-1L), (-10L), (-4L), 1L, 0x08CCL, 4L)).sa586))).zxzywzxz, ((VECTOR(uint16_t, 8))(0x3532L)), ((VECTOR(uint16_t, 8))(65535UL))))), ((VECTOR(uint16_t, 8))(0UL))))), ((VECTOR(uint16_t, 8))(65534UL))))).s77, (uint16_t)l_283, (uint16_t)l_284))).yyyyyxyxxyxxyxxy, (uint16_t)l_285, (uint16_t)l_286[0]))).lo, ((VECTOR(uint16_t, 8))(0x703BL))))).s1655306115111536)).s90)))))), ((VECTOR(int32_t, 8))(0x2BCFAFA3L)), (-1L))).s96, ((VECTOR(int32_t, 2))(1L))))))).xyxxyyxxxxxxxyyx)).s934c, ((VECTOR(int32_t, 4))(0x5A238A6FL)), ((VECTOR(int32_t, 4))(0L))))))).wyxzyzwz)).s4;
        unsigned int result = 0;
        result += l_252;
        result += l_253;
        result += l_254.w;
        result += l_254.z;
        result += l_254.y;
        result += l_254.x;
        result += l_255.sf;
        result += l_255.se;
        result += l_255.sd;
        result += l_255.sc;
        result += l_255.sb;
        result += l_255.sa;
        result += l_255.s9;
        result += l_255.s8;
        result += l_255.s7;
        result += l_255.s6;
        result += l_255.s5;
        result += l_255.s4;
        result += l_255.s3;
        result += l_255.s2;
        result += l_255.s1;
        result += l_255.s0;
        result += l_256.sf;
        result += l_256.se;
        result += l_256.sd;
        result += l_256.sc;
        result += l_256.sb;
        result += l_256.sa;
        result += l_256.s9;
        result += l_256.s8;
        result += l_256.s7;
        result += l_256.s6;
        result += l_256.s5;
        result += l_256.s4;
        result += l_256.s3;
        result += l_256.s2;
        result += l_256.s1;
        result += l_256.s0;
        result += l_257.y;
        result += l_257.x;
        result += l_258.y;
        result += l_258.x;
        result += l_259.w;
        result += l_259.z;
        result += l_259.y;
        result += l_259.x;
        result += l_260;
        result += l_261.sf;
        result += l_261.se;
        result += l_261.sd;
        result += l_261.sc;
        result += l_261.sb;
        result += l_261.sa;
        result += l_261.s9;
        result += l_261.s8;
        result += l_261.s7;
        result += l_261.s6;
        result += l_261.s5;
        result += l_261.s4;
        result += l_261.s3;
        result += l_261.s2;
        result += l_261.s1;
        result += l_261.s0;
        result += l_262.sf;
        result += l_262.se;
        result += l_262.sd;
        result += l_262.sc;
        result += l_262.sb;
        result += l_262.sa;
        result += l_262.s9;
        result += l_262.s8;
        result += l_262.s7;
        result += l_262.s6;
        result += l_262.s5;
        result += l_262.s4;
        result += l_262.s3;
        result += l_262.s2;
        result += l_262.s1;
        result += l_262.s0;
        result += l_263.w;
        result += l_263.z;
        result += l_263.y;
        result += l_263.x;
        result += l_264.w;
        result += l_264.z;
        result += l_264.y;
        result += l_264.x;
        result += l_265.y;
        result += l_265.x;
        result += l_266.sf;
        result += l_266.se;
        result += l_266.sd;
        result += l_266.sc;
        result += l_266.sb;
        result += l_266.sa;
        result += l_266.s9;
        result += l_266.s8;
        result += l_266.s7;
        result += l_266.s6;
        result += l_266.s5;
        result += l_266.s4;
        result += l_266.s3;
        result += l_266.s2;
        result += l_266.s1;
        result += l_266.s0;
        result += l_267.s7;
        result += l_267.s6;
        result += l_267.s5;
        result += l_267.s4;
        result += l_267.s3;
        result += l_267.s2;
        result += l_267.s1;
        result += l_267.s0;
        result += l_268.s7;
        result += l_268.s6;
        result += l_268.s5;
        result += l_268.s4;
        result += l_268.s3;
        result += l_268.s2;
        result += l_268.s1;
        result += l_268.s0;
        result += l_269.sf;
        result += l_269.se;
        result += l_269.sd;
        result += l_269.sc;
        result += l_269.sb;
        result += l_269.sa;
        result += l_269.s9;
        result += l_269.s8;
        result += l_269.s7;
        result += l_269.s6;
        result += l_269.s5;
        result += l_269.s4;
        result += l_269.s3;
        result += l_269.s2;
        result += l_269.s1;
        result += l_269.s0;
        result += l_270.y;
        result += l_270.x;
        result += l_271.sf;
        result += l_271.se;
        result += l_271.sd;
        result += l_271.sc;
        result += l_271.sb;
        result += l_271.sa;
        result += l_271.s9;
        result += l_271.s8;
        result += l_271.s7;
        result += l_271.s6;
        result += l_271.s5;
        result += l_271.s4;
        result += l_271.s3;
        result += l_271.s2;
        result += l_271.s1;
        result += l_271.s0;
        result += l_272.w;
        result += l_272.z;
        result += l_272.y;
        result += l_272.x;
        int l_273_i0, l_273_i1, l_273_i2;
        for (l_273_i0 = 0; l_273_i0 < 4; l_273_i0++) {
            for (l_273_i1 = 0; l_273_i1 < 2; l_273_i1++) {
                for (l_273_i2 = 0; l_273_i2 < 8; l_273_i2++) {
                    result += l_273[l_273_i0][l_273_i1][l_273_i2];
                }
            }
        }
        result += l_274.sf;
        result += l_274.se;
        result += l_274.sd;
        result += l_274.sc;
        result += l_274.sb;
        result += l_274.sa;
        result += l_274.s9;
        result += l_274.s8;
        result += l_274.s7;
        result += l_274.s6;
        result += l_274.s5;
        result += l_274.s4;
        result += l_274.s3;
        result += l_274.s2;
        result += l_274.s1;
        result += l_274.s0;
        result += l_275.sf;
        result += l_275.se;
        result += l_275.sd;
        result += l_275.sc;
        result += l_275.sb;
        result += l_275.sa;
        result += l_275.s9;
        result += l_275.s8;
        result += l_275.s7;
        result += l_275.s6;
        result += l_275.s5;
        result += l_275.s4;
        result += l_275.s3;
        result += l_275.s2;
        result += l_275.s1;
        result += l_275.s0;
        result += l_276.w;
        result += l_276.z;
        result += l_276.y;
        result += l_276.x;
        result += l_277.w;
        result += l_277.z;
        result += l_277.y;
        result += l_277.x;
        result += l_278;
        int l_279_i0, l_279_i1, l_279_i2;
        for (l_279_i0 = 0; l_279_i0 < 3; l_279_i0++) {
            for (l_279_i1 = 0; l_279_i1 < 5; l_279_i1++) {
                for (l_279_i2 = 0; l_279_i2 < 6; l_279_i2++) {
                    result += l_279[l_279_i0][l_279_i1][l_279_i2];
                }
            }
        }
        result += l_280;
        result += l_281;
        result += l_282;
        result += l_283;
        result += l_284;
        result += l_285;
        int l_286_i0;
        for (l_286_i0 = 0; l_286_i0 < 1; l_286_i0++) {
            result += l_286[l_286_i0];
        }
        result += l_287;
        atomic_add(&p_528->l_special_values[2], result);
    }
    else
    { /* block id: 84 */
        (1 + 1);
    }
    return p_528->g_224.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_528->g_94 p_528->g_138 p_528->g_8 p_528->g_64.f0 p_528->g_100
 * writes: p_528->g_64.f0
 */
uint64_t  func_45(int32_t * p_46, uint64_t  p_47, int16_t  p_48, int32_t  p_49, struct S2 * p_528)
{ /* block id: 35 */
    VECTOR(int8_t, 2) l_139 = (VECTOR(int8_t, 2))((-1L), (-9L));
    VECTOR(int8_t, 4) l_142 = (VECTOR(int8_t, 4))(0x58L, (VECTOR(int8_t, 2))(0x58L, 0x0FL), 0x0FL);
    uint64_t *l_143 = &p_528->g_115;
    VECTOR(int32_t, 4) l_144 = (VECTOR(int32_t, 4))(0x38F03842L, (VECTOR(int32_t, 2))(0x38F03842L, 7L), 7L);
    int32_t *l_145 = &p_528->g_70.f1;
    int32_t *l_146 = (void*)0;
    int32_t *l_147 = &p_528->g_71.f1;
    int32_t *l_148 = (void*)0;
    int32_t *l_149 = (void*)0;
    int32_t *l_150 = &p_528->g_77.f1;
    int32_t *l_151[5];
    int i;
    for (i = 0; i < 5; i++)
        l_151[i] = &p_528->g_64[3][0].f1;
    p_528->g_64[3][0].f0 ^= ((safe_rshift_func_int8_t_s_s(p_528->g_94.se, ((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_528->g_138.yyyx)).odd)).xxxxxxyy))).lo, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_139.xyyyyxxyyxxxxyyx)).even)).s2513000363223577)))).sc5)).xxyy))).z)) && ((~(safe_add_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_142.zyyzyzwwwzywwzyy)).s4, ((void*)0 == l_143)))) | (((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(l_144.xxzzxyzzwxwyxyzy)).s15af))).y ^ (p_49 |= (*p_46)))));
    return p_528->g_100;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_50(uint64_t  p_51, int64_t  p_52, struct S2 * p_528)
{ /* block id: 32 */
    int32_t l_132 = 0x42DF10F9L;
    int32_t *l_133 = &p_528->g_82[2].f1;
    int32_t *l_134 = (void*)0;
    int32_t l_135 = 7L;
    l_135 &= l_132;
    return &p_528->g_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_528->g_76.f0 p_528->g_94 p_528->g_65.f0 p_528->g_105 p_528->g_60 p_528->g_67.f0 p_528->g_70.f0 p_528->g_79.f0 p_528->g_100 p_528->g_80.f0 p_528->g_72.f1 p_528->g_78.f0
 * writes: p_528->g_63 p_528->g_115 p_528->g_81.f1 p_528->g_72.f1 p_528->g_78.f0 p_528->g_131
 */
int64_t  func_53(int64_t  p_54, int32_t * p_55, struct S2 * p_528)
{ /* block id: 16 */
    union U1 *l_86 = &p_528->g_87;
    union U1 **l_88[4][3][5] = {{{(void*)0,&p_528->g_63[4][3],&p_528->g_63[2][2],&p_528->g_63[4][3],(void*)0},{(void*)0,&p_528->g_63[4][3],&p_528->g_63[2][2],&p_528->g_63[4][3],(void*)0},{(void*)0,&p_528->g_63[4][3],&p_528->g_63[2][2],&p_528->g_63[4][3],(void*)0}},{{(void*)0,&p_528->g_63[4][3],&p_528->g_63[2][2],&p_528->g_63[4][3],(void*)0},{(void*)0,&p_528->g_63[4][3],&p_528->g_63[2][2],&p_528->g_63[4][3],(void*)0},{(void*)0,&p_528->g_63[4][3],&p_528->g_63[2][2],&p_528->g_63[4][3],(void*)0}},{{(void*)0,&p_528->g_63[4][3],&p_528->g_63[2][2],&p_528->g_63[4][3],(void*)0},{(void*)0,&p_528->g_63[4][3],&p_528->g_63[2][2],&p_528->g_63[4][3],(void*)0},{(void*)0,&p_528->g_63[4][3],&p_528->g_63[2][2],&p_528->g_63[4][3],(void*)0}},{{(void*)0,&p_528->g_63[4][3],&p_528->g_63[2][2],&p_528->g_63[4][3],(void*)0},{(void*)0,&p_528->g_63[4][3],&p_528->g_63[2][2],&p_528->g_63[4][3],(void*)0},{(void*)0,&p_528->g_63[4][3],&p_528->g_63[2][2],&p_528->g_63[4][3],(void*)0}}};
    VECTOR(int32_t, 16) l_89 = (VECTOR(int32_t, 16))(0x6CA365B0L, (VECTOR(int32_t, 4))(0x6CA365B0L, (VECTOR(int32_t, 2))(0x6CA365B0L, (-4L)), (-4L)), (-4L), 0x6CA365B0L, (-4L), (VECTOR(int32_t, 2))(0x6CA365B0L, (-4L)), (VECTOR(int32_t, 2))(0x6CA365B0L, (-4L)), 0x6CA365B0L, (-4L), 0x6CA365B0L, (-4L));
    uint16_t *l_99[5] = {&p_528->g_100,&p_528->g_100,&p_528->g_100,&p_528->g_100,&p_528->g_100};
    int32_t l_106 = 0x3C748E36L;
    VECTOR(uint32_t, 8) l_111 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x921D28FFL), 0x921D28FFL), 0x921D28FFL, 1UL, 0x921D28FFL);
    int32_t *l_112 = (void*)0;
    uint64_t *l_113 = (void*)0;
    uint64_t *l_114[8] = {(void*)0,&p_528->g_115,(void*)0,(void*)0,&p_528->g_115,(void*)0,(void*)0,&p_528->g_115};
    int32_t **l_116 = &l_112;
    uint32_t l_128 = 0x5AAABC80L;
    int i, j, k;
    p_528->g_63[4][3] = l_86;
    p_528->g_81.f1 = (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_89.sd8)))), ((VECTOR(int32_t, 4))((p_528->g_76.f0 & (-9L)), (-1L), (-7L), 0x1BDD3DE9L)).lo))).xyxxyxxy, ((VECTOR(int32_t, 8))((safe_lshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s(p_54, ((VECTOR(uint16_t, 16))(p_528->g_94.s6b58f18ca9a6ae6c)).s2)) == (safe_mod_func_int64_t_s_s((p_54 < (safe_mul_func_uint16_t_u_u((l_89.s3 = p_528->g_65.f0), (((((p_528->g_115 = ((safe_mul_func_int8_t_s_s((l_106 &= (((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(p_528->g_105.s10)).odd, 1)) , p_55) == &p_528->g_60)), ((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))((safe_lshift_func_int16_t_s_s(((((safe_mul_func_int8_t_s_s(((p_528->g_60 & ((VECTOR(uint32_t, 8))(l_111.s55204752)).s5) == ((l_99[3] == l_99[3]) , l_111.s3)), 0L)) , l_112) == &p_528->g_8) || p_54), p_54)), ((VECTOR(uint32_t, 2))(0xDD59E710L)), 0x29D1050BL)).odd)).hi && p_528->g_67[4][0][4].f0) ^ p_528->g_70.f0))) , 0x8960E8A9312FBD8DL)) ^ p_54) > 1L) , FAKE_DIVERGE(p_528->local_0_offset, get_local_id(0), 10)) || 8L)))), p_54))), p_528->g_79.f0)), 1L, p_528->g_100, ((VECTOR(int32_t, 2))(0x2CA7285EL)), p_528->g_80[0].f0, 2L, 0x77A50219L))))).s54, ((VECTOR(int32_t, 2))(0x1CDFC879L))))), 0x1148970CL, (-6L))).x <= 0x1CD64B8FL);
    (*l_116) = p_55;
    for (p_528->g_72.f1 = 0; (p_528->g_72.f1 != 28); p_528->g_72.f1 = safe_add_func_int32_t_s_s(p_528->g_72.f1, 2))
    { /* block id: 25 */
        int32_t *l_119 = &p_528->g_78.f0;
        int32_t *l_120 = &p_528->g_74.f0;
        int32_t *l_121 = (void*)0;
        int32_t *l_122 = (void*)0;
        int32_t *l_123 = (void*)0;
        int32_t *l_124 = &p_528->g_75[0][1].f1;
        int32_t *l_125 = &p_528->g_64[3][0].f0;
        int32_t *l_126[5] = {&p_528->g_81.f0,&p_528->g_81.f0,&p_528->g_81.f0,&p_528->g_81.f0,&p_528->g_81.f0};
        int8_t l_127[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
        int i;
        (*l_119) |= 0L;
        l_128++;
        p_528->g_131 = ((*l_116) = (*l_116));
    }
    return p_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_528->g_60 p_528->g_63
 * writes: p_528->g_60 p_528->g_63
 */
int64_t  func_56(int32_t * p_57, int32_t * p_58, struct S2 * p_528)
{ /* block id: 9 */
    uint32_t l_85[2];
    int i;
    for (i = 0; i < 2; i++)
        l_85[i] = 0xA4AF1292L;
    for (p_528->g_60 = 0; (p_528->g_60 < 21); p_528->g_60 = safe_add_func_uint16_t_u_u(p_528->g_60, 8))
    { /* block id: 12 */
        union U1 **l_83 = (void*)0;
        union U1 **l_84 = &p_528->g_63[7][0];
        (*l_84) = p_528->g_63[4][3];
    }
    return l_85[1];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[57];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 57; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[57];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 57; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[36];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 36; i++)
            l_comm_values[i] = 1;
    struct S2 c_529;
    struct S2* p_528 = &c_529;
    struct S2 c_530 = {
        0x364B5C6FL, // p_528->g_8
        (VECTOR(int32_t, 16))(0x20EA1BCAL, (VECTOR(int32_t, 4))(0x20EA1BCAL, (VECTOR(int32_t, 2))(0x20EA1BCAL, 4L), 4L), 4L, 0x20EA1BCAL, 4L, (VECTOR(int32_t, 2))(0x20EA1BCAL, 4L), (VECTOR(int32_t, 2))(0x20EA1BCAL, 4L), 0x20EA1BCAL, 4L, 0x20EA1BCAL, 4L), // p_528->g_30
        (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-4L)), (-4L)), (-4L), (-4L), (-4L)), // p_528->g_31
        1L, // p_528->g_60
        {{{0x1DFA2398L}},{{0x1DFA2398L}},{{0x1DFA2398L}},{{0x1DFA2398L}}}, // p_528->g_64
        {0x5AB2A44BL}, // p_528->g_65
        {0x16D714E2L}, // p_528->g_66
        {{{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}}},{{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}}},{{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}}},{{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}}},{{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}}},{{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}}},{{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}}},{{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}}},{{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}}},{{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}},{{-1L},{0x207E09FAL},{0x1D76C132L},{0x49C6C2CFL},{0x207E09FAL}}}}, // p_528->g_67
        {1L}, // p_528->g_68
        {0x7DA0BF3FL}, // p_528->g_69
        {0L}, // p_528->g_70
        {0L}, // p_528->g_71
        {1L}, // p_528->g_72
        {4L}, // p_528->g_73
        {8L}, // p_528->g_74
        {{{0x387092E0L},{0x7E287B83L},{-1L},{0L},{0x7E287B83L},{0L}},{{0x387092E0L},{0x7E287B83L},{-1L},{0L},{0x7E287B83L},{0L}},{{0x387092E0L},{0x7E287B83L},{-1L},{0L},{0x7E287B83L},{0L}}}, // p_528->g_75
        {0L}, // p_528->g_76
        {-9L}, // p_528->g_77
        {-7L}, // p_528->g_78
        {-7L}, // p_528->g_79
        {{1L},{1L}}, // p_528->g_80
        {0x6B44D538L}, // p_528->g_81
        {{5L},{5L},{5L},{5L},{5L}}, // p_528->g_82
        {{&p_528->g_81,&p_528->g_81,&p_528->g_80[0],&p_528->g_76,&p_528->g_72,&p_528->g_68},{&p_528->g_81,&p_528->g_81,&p_528->g_80[0],&p_528->g_76,&p_528->g_72,&p_528->g_68},{&p_528->g_81,&p_528->g_81,&p_528->g_80[0],&p_528->g_76,&p_528->g_72,&p_528->g_68},{&p_528->g_81,&p_528->g_81,&p_528->g_80[0],&p_528->g_76,&p_528->g_72,&p_528->g_68},{&p_528->g_81,&p_528->g_81,&p_528->g_80[0],&p_528->g_76,&p_528->g_72,&p_528->g_68},{&p_528->g_81,&p_528->g_81,&p_528->g_80[0],&p_528->g_76,&p_528->g_72,&p_528->g_68},{&p_528->g_81,&p_528->g_81,&p_528->g_80[0],&p_528->g_76,&p_528->g_72,&p_528->g_68},{&p_528->g_81,&p_528->g_81,&p_528->g_80[0],&p_528->g_76,&p_528->g_72,&p_528->g_68},{&p_528->g_81,&p_528->g_81,&p_528->g_80[0],&p_528->g_76,&p_528->g_72,&p_528->g_68},{&p_528->g_81,&p_528->g_81,&p_528->g_80[0],&p_528->g_76,&p_528->g_72,&p_528->g_68}}, // p_528->g_63
        {1L}, // p_528->g_87
        (VECTOR(uint16_t, 16))(65530UL, (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0xECC7L), 0xECC7L), 0xECC7L, 65530UL, 0xECC7L, (VECTOR(uint16_t, 2))(65530UL, 0xECC7L), (VECTOR(uint16_t, 2))(65530UL, 0xECC7L), 65530UL, 0xECC7L, 65530UL, 0xECC7L), // p_528->g_94
        0x66DFL, // p_528->g_100
        (VECTOR(int16_t, 8))(0x225DL, (VECTOR(int16_t, 4))(0x225DL, (VECTOR(int16_t, 2))(0x225DL, 0x6DABL), 0x6DABL), 0x6DABL, 0x225DL, 0x6DABL), // p_528->g_105
        18446744073709551611UL, // p_528->g_115
        (void*)0, // p_528->g_131
        (VECTOR(int8_t, 2))(0x3AL, 1L), // p_528->g_138
        (VECTOR(int32_t, 4))(0x18794C97L, (VECTOR(int32_t, 2))(0x18794C97L, 0x6062718EL), 0x6062718EL), // p_528->g_162
        {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}, // p_528->g_174
        7L, // p_528->g_177
        (VECTOR(uint8_t, 16))(0x75L, (VECTOR(uint8_t, 4))(0x75L, (VECTOR(uint8_t, 2))(0x75L, 0xD1L), 0xD1L), 0xD1L, 0x75L, 0xD1L, (VECTOR(uint8_t, 2))(0x75L, 0xD1L), (VECTOR(uint8_t, 2))(0x75L, 0xD1L), 0x75L, 0xD1L, 0x75L, 0xD1L), // p_528->g_179
        (VECTOR(int8_t, 2))(0x2DL, 9L), // p_528->g_180
        (VECTOR(int8_t, 2))(0L, (-1L)), // p_528->g_181
        (VECTOR(int8_t, 2))(0x23L, 0x26L), // p_528->g_183
        2UL, // p_528->g_189
        0xC51319C18CBA6210L, // p_528->g_209
        0xE3601172B58F86E4L, // p_528->g_216
        &p_528->g_216, // p_528->g_215
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x3E1DL), 0x3E1DL), // p_528->g_224
        0x3464L, // p_528->g_288
        (VECTOR(int64_t, 4))(0x6EE2F7F8A9FBA460L, (VECTOR(int64_t, 2))(0x6EE2F7F8A9FBA460L, (-1L)), (-1L)), // p_528->g_413
        (VECTOR(int64_t, 4))(0x01281C403D4F77B1L, (VECTOR(int64_t, 2))(0x01281C403D4F77B1L, 0x1F7D08D50906A9F3L), 0x1F7D08D50906A9F3L), // p_528->g_414
        &p_528->g_76.f0, // p_528->g_429
        (void*)0, // p_528->g_430
        &p_528->g_63[4][3], // p_528->g_433
        65527UL, // p_528->g_453
        &p_528->g_131, // p_528->g_458
        (void*)0, // p_528->g_482
        (void*)0, // p_528->g_486
        &p_528->g_486, // p_528->g_485
        &p_528->g_485, // p_528->g_487
        (void*)0, // p_528->g_493
        (VECTOR(int32_t, 2))(0x303C9AD7L, (-1L)), // p_528->g_498
        (void*)0, // p_528->g_519
        &p_528->g_131, // p_528->g_520
        {4L}, // p_528->g_521
        {{{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}}},{{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}}},{{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}}},{{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}},{{0xC4AA4B2639F61C86L,4294967292UL},{0x2053A33F5C9D6B03L,1UL},{1UL,3UL},{0xC4AA4B2639F61C86L,4294967292UL}}}}, // p_528->g_522
        {(void*)0,(void*)0}, // p_528->g_524
        0, // p_528->v_collective
        sequence_input[get_global_id(0)], // p_528->global_0_offset
        sequence_input[get_global_id(1)], // p_528->global_1_offset
        sequence_input[get_global_id(2)], // p_528->global_2_offset
        sequence_input[get_local_id(0)], // p_528->local_0_offset
        sequence_input[get_local_id(1)], // p_528->local_1_offset
        sequence_input[get_local_id(2)], // p_528->local_2_offset
        sequence_input[get_group_id(0)], // p_528->group_0_offset
        sequence_input[get_group_id(1)], // p_528->group_1_offset
        sequence_input[get_group_id(2)], // p_528->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 36)), permutations[0][get_linear_local_id()])), // p_528->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_529 = c_530;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_528);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_528->g_8, "p_528->g_8", print_hash_value);
    transparent_crc(p_528->g_30.s0, "p_528->g_30.s0", print_hash_value);
    transparent_crc(p_528->g_30.s1, "p_528->g_30.s1", print_hash_value);
    transparent_crc(p_528->g_30.s2, "p_528->g_30.s2", print_hash_value);
    transparent_crc(p_528->g_30.s3, "p_528->g_30.s3", print_hash_value);
    transparent_crc(p_528->g_30.s4, "p_528->g_30.s4", print_hash_value);
    transparent_crc(p_528->g_30.s5, "p_528->g_30.s5", print_hash_value);
    transparent_crc(p_528->g_30.s6, "p_528->g_30.s6", print_hash_value);
    transparent_crc(p_528->g_30.s7, "p_528->g_30.s7", print_hash_value);
    transparent_crc(p_528->g_30.s8, "p_528->g_30.s8", print_hash_value);
    transparent_crc(p_528->g_30.s9, "p_528->g_30.s9", print_hash_value);
    transparent_crc(p_528->g_30.sa, "p_528->g_30.sa", print_hash_value);
    transparent_crc(p_528->g_30.sb, "p_528->g_30.sb", print_hash_value);
    transparent_crc(p_528->g_30.sc, "p_528->g_30.sc", print_hash_value);
    transparent_crc(p_528->g_30.sd, "p_528->g_30.sd", print_hash_value);
    transparent_crc(p_528->g_30.se, "p_528->g_30.se", print_hash_value);
    transparent_crc(p_528->g_30.sf, "p_528->g_30.sf", print_hash_value);
    transparent_crc(p_528->g_31.s0, "p_528->g_31.s0", print_hash_value);
    transparent_crc(p_528->g_31.s1, "p_528->g_31.s1", print_hash_value);
    transparent_crc(p_528->g_31.s2, "p_528->g_31.s2", print_hash_value);
    transparent_crc(p_528->g_31.s3, "p_528->g_31.s3", print_hash_value);
    transparent_crc(p_528->g_31.s4, "p_528->g_31.s4", print_hash_value);
    transparent_crc(p_528->g_31.s5, "p_528->g_31.s5", print_hash_value);
    transparent_crc(p_528->g_31.s6, "p_528->g_31.s6", print_hash_value);
    transparent_crc(p_528->g_31.s7, "p_528->g_31.s7", print_hash_value);
    transparent_crc(p_528->g_60, "p_528->g_60", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_528->g_64[i][j].f0, "p_528->g_64[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_528->g_65.f0, "p_528->g_65.f0", print_hash_value);
    transparent_crc(p_528->g_66.f0, "p_528->g_66.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_528->g_67[i][j][k].f0, "p_528->g_67[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_528->g_68.f0, "p_528->g_68.f0", print_hash_value);
    transparent_crc(p_528->g_69.f0, "p_528->g_69.f0", print_hash_value);
    transparent_crc(p_528->g_70.f0, "p_528->g_70.f0", print_hash_value);
    transparent_crc(p_528->g_71.f0, "p_528->g_71.f0", print_hash_value);
    transparent_crc(p_528->g_72.f0, "p_528->g_72.f0", print_hash_value);
    transparent_crc(p_528->g_73.f0, "p_528->g_73.f0", print_hash_value);
    transparent_crc(p_528->g_74.f0, "p_528->g_74.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_528->g_75[i][j].f0, "p_528->g_75[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(p_528->g_76.f0, "p_528->g_76.f0", print_hash_value);
    transparent_crc(p_528->g_77.f0, "p_528->g_77.f0", print_hash_value);
    transparent_crc(p_528->g_78.f0, "p_528->g_78.f0", print_hash_value);
    transparent_crc(p_528->g_79.f0, "p_528->g_79.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_528->g_80[i].f0, "p_528->g_80[i].f0", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_528->g_82[i].f0, "p_528->g_82[i].f0", print_hash_value);

    }
    transparent_crc(p_528->g_87.f0, "p_528->g_87.f0", print_hash_value);
    transparent_crc(p_528->g_94.s0, "p_528->g_94.s0", print_hash_value);
    transparent_crc(p_528->g_94.s1, "p_528->g_94.s1", print_hash_value);
    transparent_crc(p_528->g_94.s2, "p_528->g_94.s2", print_hash_value);
    transparent_crc(p_528->g_94.s3, "p_528->g_94.s3", print_hash_value);
    transparent_crc(p_528->g_94.s4, "p_528->g_94.s4", print_hash_value);
    transparent_crc(p_528->g_94.s5, "p_528->g_94.s5", print_hash_value);
    transparent_crc(p_528->g_94.s6, "p_528->g_94.s6", print_hash_value);
    transparent_crc(p_528->g_94.s7, "p_528->g_94.s7", print_hash_value);
    transparent_crc(p_528->g_94.s8, "p_528->g_94.s8", print_hash_value);
    transparent_crc(p_528->g_94.s9, "p_528->g_94.s9", print_hash_value);
    transparent_crc(p_528->g_94.sa, "p_528->g_94.sa", print_hash_value);
    transparent_crc(p_528->g_94.sb, "p_528->g_94.sb", print_hash_value);
    transparent_crc(p_528->g_94.sc, "p_528->g_94.sc", print_hash_value);
    transparent_crc(p_528->g_94.sd, "p_528->g_94.sd", print_hash_value);
    transparent_crc(p_528->g_94.se, "p_528->g_94.se", print_hash_value);
    transparent_crc(p_528->g_94.sf, "p_528->g_94.sf", print_hash_value);
    transparent_crc(p_528->g_100, "p_528->g_100", print_hash_value);
    transparent_crc(p_528->g_105.s0, "p_528->g_105.s0", print_hash_value);
    transparent_crc(p_528->g_105.s1, "p_528->g_105.s1", print_hash_value);
    transparent_crc(p_528->g_105.s2, "p_528->g_105.s2", print_hash_value);
    transparent_crc(p_528->g_105.s3, "p_528->g_105.s3", print_hash_value);
    transparent_crc(p_528->g_105.s4, "p_528->g_105.s4", print_hash_value);
    transparent_crc(p_528->g_105.s5, "p_528->g_105.s5", print_hash_value);
    transparent_crc(p_528->g_105.s6, "p_528->g_105.s6", print_hash_value);
    transparent_crc(p_528->g_105.s7, "p_528->g_105.s7", print_hash_value);
    transparent_crc(p_528->g_115, "p_528->g_115", print_hash_value);
    transparent_crc(p_528->g_138.x, "p_528->g_138.x", print_hash_value);
    transparent_crc(p_528->g_138.y, "p_528->g_138.y", print_hash_value);
    transparent_crc(p_528->g_162.x, "p_528->g_162.x", print_hash_value);
    transparent_crc(p_528->g_162.y, "p_528->g_162.y", print_hash_value);
    transparent_crc(p_528->g_162.z, "p_528->g_162.z", print_hash_value);
    transparent_crc(p_528->g_162.w, "p_528->g_162.w", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_528->g_174[i], "p_528->g_174[i]", print_hash_value);

    }
    transparent_crc(p_528->g_177, "p_528->g_177", print_hash_value);
    transparent_crc(p_528->g_179.s0, "p_528->g_179.s0", print_hash_value);
    transparent_crc(p_528->g_179.s1, "p_528->g_179.s1", print_hash_value);
    transparent_crc(p_528->g_179.s2, "p_528->g_179.s2", print_hash_value);
    transparent_crc(p_528->g_179.s3, "p_528->g_179.s3", print_hash_value);
    transparent_crc(p_528->g_179.s4, "p_528->g_179.s4", print_hash_value);
    transparent_crc(p_528->g_179.s5, "p_528->g_179.s5", print_hash_value);
    transparent_crc(p_528->g_179.s6, "p_528->g_179.s6", print_hash_value);
    transparent_crc(p_528->g_179.s7, "p_528->g_179.s7", print_hash_value);
    transparent_crc(p_528->g_179.s8, "p_528->g_179.s8", print_hash_value);
    transparent_crc(p_528->g_179.s9, "p_528->g_179.s9", print_hash_value);
    transparent_crc(p_528->g_179.sa, "p_528->g_179.sa", print_hash_value);
    transparent_crc(p_528->g_179.sb, "p_528->g_179.sb", print_hash_value);
    transparent_crc(p_528->g_179.sc, "p_528->g_179.sc", print_hash_value);
    transparent_crc(p_528->g_179.sd, "p_528->g_179.sd", print_hash_value);
    transparent_crc(p_528->g_179.se, "p_528->g_179.se", print_hash_value);
    transparent_crc(p_528->g_179.sf, "p_528->g_179.sf", print_hash_value);
    transparent_crc(p_528->g_180.x, "p_528->g_180.x", print_hash_value);
    transparent_crc(p_528->g_180.y, "p_528->g_180.y", print_hash_value);
    transparent_crc(p_528->g_181.x, "p_528->g_181.x", print_hash_value);
    transparent_crc(p_528->g_181.y, "p_528->g_181.y", print_hash_value);
    transparent_crc(p_528->g_183.x, "p_528->g_183.x", print_hash_value);
    transparent_crc(p_528->g_183.y, "p_528->g_183.y", print_hash_value);
    transparent_crc(p_528->g_189, "p_528->g_189", print_hash_value);
    transparent_crc(p_528->g_209, "p_528->g_209", print_hash_value);
    transparent_crc(p_528->g_216, "p_528->g_216", print_hash_value);
    transparent_crc(p_528->g_224.x, "p_528->g_224.x", print_hash_value);
    transparent_crc(p_528->g_224.y, "p_528->g_224.y", print_hash_value);
    transparent_crc(p_528->g_224.z, "p_528->g_224.z", print_hash_value);
    transparent_crc(p_528->g_224.w, "p_528->g_224.w", print_hash_value);
    transparent_crc(p_528->g_288, "p_528->g_288", print_hash_value);
    transparent_crc(p_528->g_413.x, "p_528->g_413.x", print_hash_value);
    transparent_crc(p_528->g_413.y, "p_528->g_413.y", print_hash_value);
    transparent_crc(p_528->g_413.z, "p_528->g_413.z", print_hash_value);
    transparent_crc(p_528->g_413.w, "p_528->g_413.w", print_hash_value);
    transparent_crc(p_528->g_414.x, "p_528->g_414.x", print_hash_value);
    transparent_crc(p_528->g_414.y, "p_528->g_414.y", print_hash_value);
    transparent_crc(p_528->g_414.z, "p_528->g_414.z", print_hash_value);
    transparent_crc(p_528->g_414.w, "p_528->g_414.w", print_hash_value);
    transparent_crc(p_528->g_453, "p_528->g_453", print_hash_value);
    transparent_crc(p_528->g_498.x, "p_528->g_498.x", print_hash_value);
    transparent_crc(p_528->g_498.y, "p_528->g_498.y", print_hash_value);
    transparent_crc(p_528->g_521.f0, "p_528->g_521.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_528->g_522[i][j][k].f0, "p_528->g_522[i][j][k].f0", print_hash_value);
                transparent_crc(p_528->g_522[i][j][k].f1, "p_528->g_522[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(p_528->v_collective, "p_528->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 57; i++)
            transparent_crc(p_528->g_special_values[i + 57 * get_linear_group_id()], "p_528->g_special_values[i + 57 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 57; i++)
            transparent_crc(p_528->l_special_values[i], "p_528->l_special_values[i]", print_hash_value);
    transparent_crc(p_528->l_comm_values[get_linear_local_id()], "p_528->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_528->g_comm_values[get_linear_group_id() * 36 + get_linear_local_id()], "p_528->g_comm_values[get_linear_group_id() * 36 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
