// --atomics 18 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 85,11,1 -l 17,1,1
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

__constant uint32_t permutations[10][17] = {
{9,8,4,12,16,14,15,2,0,7,3,11,6,5,1,10,13}, // permutation 0
{1,7,6,12,11,5,15,9,16,10,0,4,8,14,2,13,3}, // permutation 1
{11,15,6,5,16,9,7,2,3,12,14,1,8,0,10,13,4}, // permutation 2
{6,0,1,5,16,3,13,10,4,15,12,9,11,7,14,2,8}, // permutation 3
{1,7,4,14,13,5,15,6,16,2,3,8,11,9,10,0,12}, // permutation 4
{7,5,12,9,16,0,8,2,15,3,4,13,14,10,1,11,6}, // permutation 5
{2,13,4,9,14,0,12,15,10,3,6,8,1,7,11,16,5}, // permutation 6
{3,10,6,14,12,4,11,7,5,1,13,16,15,0,8,2,9}, // permutation 7
{1,12,14,13,0,4,3,8,10,9,16,6,11,2,5,15,7}, // permutation 8
{13,0,8,11,1,9,5,15,6,10,3,14,7,12,4,2,16} // permutation 9
};

// Seed: 3850807700

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int16_t  f0;
   int16_t  f1;
   volatile int64_t  f2;
   int16_t  f3;
   int64_t  f4;
   int64_t  f5;
   volatile uint8_t  f6;
   uint32_t  f7;
   int16_t  f8;
};

struct S1 {
   int32_t  f0;
   int8_t  f1;
   int16_t  f2;
   uint32_t  f3;
   int32_t  f4;
   int32_t  f5;
   uint32_t  f6;
   int32_t  f7;
   uint64_t  f8;
};

struct S2 {
   uint32_t  f0;
   struct S1  f1;
   uint16_t  f2;
};

struct S3 {
   uint32_t  f0;
   uint64_t  f1;
   volatile uint8_t  f2;
   volatile int64_t  f3;
};

struct S4 {
    int64_t g_21;
    uint16_t g_31;
    uint64_t g_42;
    uint32_t *g_59;
    VECTOR(int16_t, 16) g_62;
    uint64_t g_65;
    struct S1 g_66;
    int8_t g_71[1][6][5];
    int32_t * volatile g_73;
    struct S0 g_76[6][5];
    int32_t *g_79;
    int32_t g_82;
    int32_t **g_88;
    volatile VECTOR(uint64_t, 16) g_97;
    volatile uint64_t *g_96[5];
    volatile uint64_t **g_95[8][4][8];
    volatile uint64_t *** volatile g_94;
    uint16_t g_117;
    VECTOR(int64_t, 8) g_129;
    uint8_t g_136;
    int16_t g_141;
    uint8_t g_143;
    VECTOR(int8_t, 2) g_159;
    VECTOR(int8_t, 2) g_162;
    volatile VECTOR(int8_t, 4) g_165;
    struct S3 g_171[9][6];
    VECTOR(int16_t, 2) g_172;
    volatile VECTOR(int64_t, 2) g_173;
    struct S3 *g_182[1];
    uint32_t g_189;
    volatile VECTOR(int8_t, 8) g_201;
    VECTOR(uint8_t, 16) g_202;
    VECTOR(int8_t, 4) g_203;
    int8_t *g_216[4][4][10];
    volatile struct S3 g_224;
    volatile struct S0 g_226;
    int32_t ** volatile g_231[1];
    int32_t ** volatile g_233;
    uint32_t g_238;
    uint8_t g_265[6];
    struct S0 g_279;
    volatile struct S3 g_304;
    VECTOR(uint8_t, 4) g_312;
    VECTOR(uint8_t, 2) g_314;
    struct S0 g_328;
    volatile struct S3 g_344;
    VECTOR(uint8_t, 4) g_381;
    VECTOR(uint8_t, 4) g_384;
    VECTOR(int8_t, 16) g_387;
    volatile VECTOR(uint8_t, 16) g_389;
    volatile VECTOR(uint8_t, 2) g_391;
    int64_t *g_409[7][1][6];
    int64_t g_411;
    uint32_t g_433;
    VECTOR(uint8_t, 8) g_444;
    volatile VECTOR(uint8_t, 2) g_445;
    VECTOR(uint16_t, 16) g_452;
    VECTOR(uint16_t, 16) g_453;
    VECTOR(uint16_t, 2) g_455;
    VECTOR(uint16_t, 4) g_558;
    volatile VECTOR(uint16_t, 8) g_563;
    struct S3 g_570;
    struct S3 g_583;
    struct S3 g_586;
    struct S3 g_587;
    VECTOR(int16_t, 2) g_601;
    VECTOR(int16_t, 8) g_609;
    VECTOR(int16_t, 4) g_610;
    VECTOR(int16_t, 2) g_611;
    VECTOR(int16_t, 4) g_614;
    VECTOR(int16_t, 8) g_617;
    VECTOR(int16_t, 8) g_618;
    VECTOR(int16_t, 8) g_619;
    VECTOR(int16_t, 4) g_621;
    VECTOR(uint8_t, 2) g_624;
    VECTOR(int16_t, 8) g_626;
    int32_t ** volatile g_636;
    struct S2 g_637;
    VECTOR(uint32_t, 8) g_647;
    volatile struct S3 g_663;
    volatile struct S3 g_664;
    volatile struct S3 * volatile g_665[6][6];
    VECTOR(uint8_t, 4) g_690;
    VECTOR(uint8_t, 16) g_691;
    VECTOR(uint8_t, 2) g_695;
    VECTOR(uint32_t, 16) g_703;
    int32_t g_724;
    volatile VECTOR(int32_t, 16) g_748;
    volatile VECTOR(int32_t, 4) g_749;
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
struct S2  func_1(struct S4 * p_753);
int64_t  func_2(uint32_t  p_3, struct S2  p_4, uint32_t  p_5, uint64_t  p_6, struct S4 * p_753);
uint32_t  func_7(uint32_t  p_8, uint32_t  p_9, uint32_t  p_10, uint32_t  p_11, struct S4 * p_753);
int32_t  func_12(uint32_t  p_13, uint8_t  p_14, int64_t  p_15, uint8_t  p_16, int64_t  p_17, struct S4 * p_753);
int16_t  func_32(uint8_t  p_33, uint16_t * p_34, uint64_t  p_35, uint16_t * p_36, uint16_t  p_37, struct S4 * p_753);
struct S0  func_43(uint32_t * p_44, struct S4 * p_753);
uint32_t * func_45(uint64_t * p_46, uint32_t * p_47, int32_t  p_48, struct S4 * p_753);
uint64_t * func_49(uint8_t  p_50, int32_t  p_51, struct S4 * p_753);
struct S1  func_52(uint16_t * p_53, int32_t  p_54, struct S4 * p_753);
uint16_t * func_55(struct S1  p_56, struct S4 * p_753);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_753->g_comm_values p_753->g_42 p_753->g_59 p_753->g_62 p_753->g_66 p_753->g_71 p_753->g_73 p_753->g_76 p_753->g_94 p_753->g_129 p_753->g_136 p_753->g_143 p_753->g_117 p_753->g_159 p_753->g_162 p_753->g_165 p_753->g_97 p_753->g_171 p_753->g_172 p_753->g_173 p_753->g_65 p_753->g_189 p_753->g_201 p_753->g_202 p_753->g_203 p_753->g_224 p_753->g_226 p_753->g_233 p_753->g_265 p_753->g_279 p_753->g_304 p_753->g_312 p_753->g_314 p_753->g_82 p_753->g_328 p_753->g_344 p_753->g_381 p_753->g_384 p_753->g_387 p_753->g_389 p_753->g_391 p_753->g_409 p_753->g_411 p_753->g_238 p_753->g_444 p_753->g_445 p_753->g_31 p_753->g_452 p_753->g_453 p_753->g_455 p_753->g_558 p_753->g_563 p_753->g_570 p_753->g_583 p_753->g_586 p_753->g_601 p_753->g_609 p_753->g_610 p_753->g_611 p_753->g_614 p_753->g_617 p_753->g_618 p_753->g_619 p_753->g_621 p_753->g_624 p_753->g_626 p_753->g_636 p_753->g_637 p_753->g_647 p_753->g_141 p_753->g_663 p_753->g_664 p_753->g_79 p_753->g_690 p_753->g_691 p_753->g_695 p_753->g_703 p_753->g_724 p_753->g_748 p_753->g_749
 * writes: p_753->g_21 p_753->g_31 p_753->g_42 p_753->g_65 p_753->g_66.f1 p_753->g_71 p_753->g_66.f0 p_753->g_66.f2 p_753->g_79 p_753->g_73 p_753->g_88 p_753->l_comm_values p_753->g_136 p_753->g_143 p_753->g_117 p_753->g_182 p_753->g_189 p_753->g_66.f5 p_753->g_216 p_753->g_224 p_753->g_226 p_753->g_76.f1 p_753->g_76.f3 p_753->g_172 p_753->g_411 p_753->g_265 p_753->g_238 p_753->g_433 p_753->g_328.f0 p_753->g_587 p_753->g_141 p_753->g_279.f7 p_753->g_279.f3 p_753->g_664 p_753->g_637.f1.f7 p_753->g_583.f0 p_753->g_724 p_753->g_59 p_753->g_82
 */
struct S2  func_1(struct S4 * p_753)
{ /* block id: 4 */
    VECTOR(uint32_t, 16) l_18 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x7C914A3AL), 0x7C914A3AL), 0x7C914A3AL, 1UL, 0x7C914A3AL, (VECTOR(uint32_t, 2))(1UL, 0x7C914A3AL), (VECTOR(uint32_t, 2))(1UL, 0x7C914A3AL), 1UL, 0x7C914A3AL, 1UL, 0x7C914A3AL);
    uint32_t *l_19 = (void*)0;
    uint32_t *l_20 = (void*)0;
    uint16_t *l_30 = &p_753->g_31;
    uint64_t *l_40 = (void*)0;
    uint64_t *l_41 = &p_753->g_42;
    VECTOR(int16_t, 8) l_63 = (VECTOR(int16_t, 8))(0x7C8BL, (VECTOR(int16_t, 4))(0x7C8BL, (VECTOR(int16_t, 2))(0x7C8BL, 1L), 1L), 1L, 0x7C8BL, 1L);
    VECTOR(int8_t, 8) l_64 = (VECTOR(int8_t, 8))(0x36L, (VECTOR(int8_t, 4))(0x36L, (VECTOR(int8_t, 2))(0x36L, 0x64L), 0x64L), 0x64L, 0x36L, 0x64L);
    int32_t *l_723 = &p_753->g_724;
    uint32_t **l_741[9][10] = {{(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0},{(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0},{(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0},{(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0},{(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0},{(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0},{(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0},{(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0},{(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0,&p_753->g_59,(void*)0,(void*)0}};
    int32_t *l_742 = &p_753->g_66.f0;
    int32_t **l_743 = &p_753->g_79;
    int8_t *l_750 = &p_753->g_71[0][5][4];
    uint8_t l_751 = 1UL;
    int32_t *l_752 = &p_753->g_82;
    int i, j;
    (*l_723) ^= (func_2(func_7((func_12((p_753->g_21 = ((VECTOR(uint32_t, 16))(l_18.s6d7d04549c4b05ef)).s1), p_753->g_comm_values[p_753->tid], (1L <= (p_753->g_411 ^= (safe_lshift_func_int8_t_s_u((((safe_add_func_uint8_t_u_u((((safe_add_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((*l_30) = ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(5UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x242EL, 65528UL)).xxxx)), 1UL, 0xDF66L, 0x8564L)).s53)).odd), (p_753->g_comm_values[p_753->tid] & (func_32((safe_div_func_uint64_t_u_u(((*l_41) ^= 18446744073709551612UL), GROUP_DIVERGE(1, 1))), ((l_18.se , func_43(func_45(func_49((func_52(func_55((((p_753->g_65 = (safe_sub_func_int64_t_s_s((p_753->g_59 != p_753->g_59), (safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_753->g_62.se091e6dc)).s76)), (-1L), 9L)).xyyyxzyw, ((VECTOR(int16_t, 2))(l_63.s36)).yxyyyyyy))).lo, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 4))(l_64.s5056)).xwyyzzxxzywzyxwy, ((VECTOR(uint8_t, 16))(((GROUP_DIVERGE(2, 1) , l_20) == l_19), ((VECTOR(uint8_t, 2))(0xE4L)), 0x99L, ((VECTOR(uint8_t, 8))(0x41L)), 0x35L, 247UL, 0x58L, 0xF9L))))).s28)))).yxyx))).lo)), ((VECTOR(int16_t, 2))(0x160DL))))).even, GROUP_DIVERGE(2, 1)))))) == 0x7EEACC2001377BC7L) , p_753->g_66), p_753), l_18.sf, p_753) , l_64.s0), p_753->g_66.f3, p_753), p_753->g_59, l_18.se, p_753), p_753)) , l_30), l_18.s9, l_30, l_64.s3, p_753) != 0L)))), 5UL)) && 0x83327D55L) ^ p_753->g_202.s2), p_753->g_328.f4)) != l_64.s1) & 65535UL), 6)))), p_753->g_328.f7, p_753->g_279.f4, p_753) > 0x41D30294L), p_753->g_381.y, p_753->g_159.x, p_753->g_129.s7, p_753), p_753->g_637, l_18.s8, p_753->g_583.f0, p_753) , 0x6521106CL);
    (*l_752) |= (safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((*l_723) <= (*l_723)), ((((((*l_30)++) | ((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((((((((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 4))((((~((*l_750) = ((safe_lshift_func_int16_t_s_s((((*l_743) = (l_742 = func_45(&p_753->g_42, (p_753->g_59 = &p_753->g_433), (*l_723), p_753))) == (p_753->g_601.y , l_20)), 1)) || (safe_lshift_func_int8_t_s_s((((safe_div_func_int32_t_s_s((((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(p_753->g_748.see8c)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 8))(p_753->g_749.yzywxzww)).s0471114031403213, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(((*l_723) & FAKE_DIVERGE(p_753->group_1_offset, get_group_id(1), 10)), (**p_753->g_233), 0L, (*l_742), 0x2E063F45L, (**l_743), 0x2FD37B14L, 0x71746273L)).s54, ((VECTOR(int32_t, 2))((-8L)))))).yxxxyxxyxxxyxyyx))).s3d)).xyxy))).w <= (*l_742)), (*l_742))) >= 1UL) & 1L), 3))))) != l_751) == (*l_723)), ((VECTOR(int8_t, 2))(0x53L)), (-2L))).z, 255UL)) >= (*l_723)) & (*l_723)) ^ p_753->g_637.f1.f7) , 1L) || (**l_743)) == (*l_723)), (*l_723))), p_753->g_583.f1)) <= FAKE_DIVERGE(p_753->global_2_offset, get_global_id(2), 10))) ^ (*l_723)) ^ 65534UL) | 8L))), 247UL)), (*l_723)));
    return p_753->g_637;
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_647 p_753->g_238 p_753->g_226.f7 p_753->g_65 p_753->g_141 p_753->g_637 p_753->g_558 p_753->g_233 p_753->g_279.f7 p_753->g_279.f3 p_753->g_570.f0 p_753->g_663 p_753->g_664 p_753->g_66.f5 p_753->g_79 p_753->g_690 p_753->g_691 p_753->g_82 p_753->g_695 p_753->g_703 p_753->g_583.f0 p_753->g_636
 * writes: p_753->g_238 p_753->g_141 p_753->g_66.f1 p_753->g_79 p_753->g_279.f7 p_753->g_279.f3 p_753->g_664 p_753->g_637.f1.f7 p_753->g_66.f5 p_753->g_583.f0
 */
int64_t  func_2(uint32_t  p_3, struct S2  p_4, uint32_t  p_5, uint64_t  p_6, struct S4 * p_753)
{ /* block id: 224 */
    int16_t l_638 = 0x0705L;
    int32_t *l_639 = &p_753->g_66.f5;
    int32_t *l_640 = &p_753->g_66.f5;
    int32_t *l_641 = &p_753->g_82;
    int32_t *l_642[4][3] = {{&p_753->g_637.f1.f5,&p_753->g_637.f1.f0,(void*)0},{&p_753->g_637.f1.f5,&p_753->g_637.f1.f0,(void*)0},{&p_753->g_637.f1.f5,&p_753->g_637.f1.f0,(void*)0},{&p_753->g_637.f1.f5,&p_753->g_637.f1.f0,(void*)0}};
    VECTOR(int32_t, 4) l_643 = (VECTOR(int32_t, 4))(0x3DDF3E20L, (VECTOR(int32_t, 2))(0x3DDF3E20L, 0x691F0A98L), 0x691F0A98L);
    VECTOR(uint16_t, 2) l_644 = (VECTOR(uint16_t, 2))(0x05F5L, 0x28BBL);
    VECTOR(uint8_t, 8) l_692 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), 255UL, 0UL, 255UL);
    VECTOR(uint8_t, 4) l_693 = (VECTOR(uint8_t, 4))(0xD4L, (VECTOR(uint8_t, 2))(0xD4L, 255UL), 255UL);
    VECTOR(uint64_t, 16) l_702 = (VECTOR(uint64_t, 16))(0x1F4F9EE283872D81L, (VECTOR(uint64_t, 4))(0x1F4F9EE283872D81L, (VECTOR(uint64_t, 2))(0x1F4F9EE283872D81L, 0x0B96408F5673C7F9L), 0x0B96408F5673C7F9L), 0x0B96408F5673C7F9L, 0x1F4F9EE283872D81L, 0x0B96408F5673C7F9L, (VECTOR(uint64_t, 2))(0x1F4F9EE283872D81L, 0x0B96408F5673C7F9L), (VECTOR(uint64_t, 2))(0x1F4F9EE283872D81L, 0x0B96408F5673C7F9L), 0x1F4F9EE283872D81L, 0x0B96408F5673C7F9L, 0x1F4F9EE283872D81L, 0x0B96408F5673C7F9L);
    VECTOR(uint32_t, 2) l_704 = (VECTOR(uint32_t, 2))(7UL, 0x7ACFA268L);
    int32_t l_713 = 0x47AD09CAL;
    int i, j;
    l_644.y++;
    if (p_4.f1.f0)
    { /* block id: 226 */
        uint32_t *l_648 = &p_753->g_238;
        int32_t l_649[7][4][7] = {{{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)}},{{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)}},{{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)}},{{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)}},{{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)}},{{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)}},{{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)},{5L,0x7AD41579L,6L,0x18D9A4E6L,1L,(-1L),(-1L)}}};
        int i, j, k;
        if (((((*l_648) &= ((VECTOR(uint32_t, 2))(p_753->g_647.s41)).lo) | l_649[2][0][5]) | (((p_753->g_226.f7 , (p_4.f1.f8 || p_4.f1.f2)) > 0UL) | 0x64L)))
        { /* block id: 228 */
            return p_753->g_65;
        }
        else
        { /* block id: 230 */
            volatile struct S3 *l_666 = &p_753->g_664;
            int32_t l_674 = 0L;
            for (p_753->g_141 = 0; (p_753->g_141 <= 26); p_753->g_141++)
            { /* block id: 233 */
                int32_t **l_654 = &p_753->g_79;
                (*l_654) = func_45(&p_753->g_65, (p_753->g_637 , (void*)0), p_753->g_558.x, p_753);
                for (p_753->g_279.f7 = 0; (p_753->g_279.f7 == 8); ++p_753->g_279.f7)
                { /* block id: 237 */
                    if ((atomic_inc(&p_753->l_atomic_input[5]) == 8))
                    { /* block id: 239 */
                        int32_t *l_657[5];
                        int32_t l_659 = 0x7D6FCB4AL;
                        int32_t *l_658 = &l_659;
                        int32_t *l_660 = &l_659;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_657[i] = (void*)0;
                        l_657[2] = (void*)0;
                        l_658 = (void*)0;
                        l_660 = (void*)0;
                        unsigned int result = 0;
                        result += l_659;
                        atomic_add(&p_753->l_special_values[5], result);
                    }
                    else
                    { /* block id: 243 */
                        (1 + 1);
                    }
                    for (p_753->g_279.f3 = 0; (p_753->g_279.f3 != 19); p_753->g_279.f3++)
                    { /* block id: 248 */
                        return p_753->g_570.f0;
                    }
                }
            }
            (*l_666) = (p_753->g_663 , p_753->g_664);
            for (p_753->g_637.f1.f7 = 0; (p_753->g_637.f1.f7 == (-5)); p_753->g_637.f1.f7 = safe_sub_func_uint64_t_u_u(p_753->g_637.f1.f7, 8))
            { /* block id: 256 */
                struct S2 *l_671[9][2][3] = {{{(void*)0,&p_753->g_637,&p_753->g_637},{(void*)0,&p_753->g_637,&p_753->g_637}},{{(void*)0,&p_753->g_637,&p_753->g_637},{(void*)0,&p_753->g_637,&p_753->g_637}},{{(void*)0,&p_753->g_637,&p_753->g_637},{(void*)0,&p_753->g_637,&p_753->g_637}},{{(void*)0,&p_753->g_637,&p_753->g_637},{(void*)0,&p_753->g_637,&p_753->g_637}},{{(void*)0,&p_753->g_637,&p_753->g_637},{(void*)0,&p_753->g_637,&p_753->g_637}},{{(void*)0,&p_753->g_637,&p_753->g_637},{(void*)0,&p_753->g_637,&p_753->g_637}},{{(void*)0,&p_753->g_637,&p_753->g_637},{(void*)0,&p_753->g_637,&p_753->g_637}},{{(void*)0,&p_753->g_637,&p_753->g_637},{(void*)0,&p_753->g_637,&p_753->g_637}},{{(void*)0,&p_753->g_637,&p_753->g_637},{(void*)0,&p_753->g_637,&p_753->g_637}}};
                struct S2 **l_670[1][3][6] = {{{(void*)0,&l_671[1][1][0],(void*)0,(void*)0,&l_671[1][1][0],(void*)0},{(void*)0,&l_671[1][1][0],(void*)0,(void*)0,&l_671[1][1][0],(void*)0},{(void*)0,&l_671[1][1][0],(void*)0,(void*)0,&l_671[1][1][0],(void*)0}}};
                struct S2 ***l_669 = &l_670[0][1][1];
                VECTOR(int32_t, 2) l_679 = (VECTOR(int32_t, 2))(1L, 0x49EAE939L);
                int8_t *l_680 = (void*)0;
                int8_t *l_681[3][6] = {{&p_753->g_637.f1.f1,&p_753->g_71[0][2][3],&p_753->g_637.f1.f1,&p_753->g_637.f1.f1,&p_753->g_71[0][2][3],&p_753->g_637.f1.f1},{&p_753->g_637.f1.f1,&p_753->g_71[0][2][3],&p_753->g_637.f1.f1,&p_753->g_637.f1.f1,&p_753->g_71[0][2][3],&p_753->g_637.f1.f1},{&p_753->g_637.f1.f1,&p_753->g_71[0][2][3],&p_753->g_637.f1.f1,&p_753->g_637.f1.f1,&p_753->g_71[0][2][3],&p_753->g_637.f1.f1}};
                int i, j, k;
                (*l_669) = (void*)0;
                atomic_sub(&p_753->l_atomic_reduction[0], (safe_rshift_func_uint8_t_u_u((l_674 != (*l_639)), FAKE_DIVERGE(p_753->local_1_offset, get_local_id(1), 10))));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_753->v_collective += p_753->l_atomic_reduction[0];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_4.f1.f0 ^= ((*p_753->g_79) = ((*l_640) = ((safe_rshift_func_int8_t_s_u((p_4.f1.f1 ^= ((safe_sub_func_int8_t_s_s(p_4.f1.f6, FAKE_DIVERGE(p_753->local_1_offset, get_local_id(1), 10))) || l_679.y)), 6)) , 0x6FAB62EDL)));
            }
        }
        if ((atomic_inc(&p_753->g_atomic_input[18 * get_linear_group_id() + 7]) == 1))
        { /* block id: 266 */
            VECTOR(int32_t, 8) l_682 = (VECTOR(int32_t, 8))(0x254141CBL, (VECTOR(int32_t, 4))(0x254141CBL, (VECTOR(int32_t, 2))(0x254141CBL, (-1L)), (-1L)), (-1L), 0x254141CBL, (-1L));
            VECTOR(int32_t, 2) l_683 = (VECTOR(int32_t, 2))(0x7656C282L, 0x0A050E5FL);
            VECTOR(int32_t, 4) l_684 = (VECTOR(int32_t, 4))(0x55335A1EL, (VECTOR(int32_t, 2))(0x55335A1EL, 0L), 0L);
            VECTOR(int32_t, 16) l_685 = (VECTOR(int32_t, 16))(0x51B579F2L, (VECTOR(int32_t, 4))(0x51B579F2L, (VECTOR(int32_t, 2))(0x51B579F2L, (-3L)), (-3L)), (-3L), 0x51B579F2L, (-3L), (VECTOR(int32_t, 2))(0x51B579F2L, (-3L)), (VECTOR(int32_t, 2))(0x51B579F2L, (-3L)), 0x51B579F2L, (-3L), 0x51B579F2L, (-3L));
            uint32_t l_686 = 0x18DC54CEL;
            uint16_t l_687 = 0UL;
            int i;
            l_686 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_682.s71)), ((VECTOR(int32_t, 2))(0x2B9164BCL, 0x26C95B6EL)), 0x6D9BF6D3L, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_683.xxyxyyyy)).s34, ((VECTOR(int32_t, 8))(l_684.ywyyxwyx)).s30, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(l_685.s401c7dfb)).s62, ((VECTOR(int32_t, 2))((-1L), (-1L))))))))), 0x753F3342L)).s2;
            --l_687;
            unsigned int result = 0;
            result += l_682.s7;
            result += l_682.s6;
            result += l_682.s5;
            result += l_682.s4;
            result += l_682.s3;
            result += l_682.s2;
            result += l_682.s1;
            result += l_682.s0;
            result += l_683.y;
            result += l_683.x;
            result += l_684.w;
            result += l_684.z;
            result += l_684.y;
            result += l_684.x;
            result += l_685.sf;
            result += l_685.se;
            result += l_685.sd;
            result += l_685.sc;
            result += l_685.sb;
            result += l_685.sa;
            result += l_685.s9;
            result += l_685.s8;
            result += l_685.s7;
            result += l_685.s6;
            result += l_685.s5;
            result += l_685.s4;
            result += l_685.s3;
            result += l_685.s2;
            result += l_685.s1;
            result += l_685.s0;
            result += l_686;
            result += l_687;
            atomic_add(&p_753->g_special_values[18 * get_linear_group_id() + 7], result);
        }
        else
        { /* block id: 269 */
            (1 + 1);
        }
    }
    else
    { /* block id: 272 */
        int64_t l_694 = 1L;
        uint64_t *l_711 = (void*)0;
        uint64_t **l_710 = &l_711;
        uint64_t ***l_709[6][7][4] = {{{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710}},{{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710}},{{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710}},{{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710}},{{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710}},{{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710},{(void*)0,&l_710,(void*)0,&l_710}}};
        uint8_t *l_712 = (void*)0;
        int32_t l_716 = 6L;
        int32_t l_717 = 1L;
        int32_t l_718 = (-7L);
        VECTOR(int32_t, 4) l_719 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-9L)), (-9L));
        uint16_t l_720[8][8] = {{1UL,0xD048L,0xEBA9L,0xEBA9L,0xD048L,1UL,0xE42AL,65535UL},{1UL,0xD048L,0xEBA9L,0xEBA9L,0xD048L,1UL,0xE42AL,65535UL},{1UL,0xD048L,0xEBA9L,0xEBA9L,0xD048L,1UL,0xE42AL,65535UL},{1UL,0xD048L,0xEBA9L,0xEBA9L,0xD048L,1UL,0xE42AL,65535UL},{1UL,0xD048L,0xEBA9L,0xEBA9L,0xD048L,1UL,0xE42AL,65535UL},{1UL,0xD048L,0xEBA9L,0xEBA9L,0xD048L,1UL,0xE42AL,65535UL},{1UL,0xD048L,0xEBA9L,0xEBA9L,0xD048L,1UL,0xE42AL,65535UL},{1UL,0xD048L,0xEBA9L,0xEBA9L,0xD048L,1UL,0xE42AL,65535UL}};
        int i, j, k;
        if (((l_713 = ((VECTOR(uint8_t, 8))(0x45L, 0x93L, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(255UL, 247UL)).hi, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(p_753->g_690.wzyx)).even, ((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 16))(p_753->g_691.sa32285d0956011c7)), ((VECTOR(uint8_t, 2))(abs(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 2))(l_692.s61)).yyyyyxxxxyxyyxyy, ((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 4))(l_693.zywz)).zxxxzxwwzwwzzyzx, ((VECTOR(uint8_t, 4))(0UL, (l_694 >= (*l_641)), 5UL, 4UL)).zywwxzxxyzwyzxxz, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 16))(0x45L, ((VECTOR(uint8_t, 8))(p_753->g_695.yxxyxyxx)), ((VECTOR(uint8_t, 4))(0x8CL, 250UL, 255UL, 0x80L)), 9UL, 6UL, 0x14L)).s25, ((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 2))(0x09L, 0x60L)).xyxxxyyx, ((VECTOR(int8_t, 4))((-5L), ((safe_sub_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((((((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(18446744073709551614UL, 0xEB0489AE2CE9DA82L)).xxxxxxyxxyyxyyxx)).s1970)).wzxyxxxw, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 2))(0x40B7315DE734D867L, 3UL)).xxyy, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 2))(18446744073709551615UL, 0UL)).yyxyyyxy))).hi)).yzxwzyyx)).lo)).hi, ((VECTOR(uint64_t, 16))(((!18446744073709551615UL) ^ (safe_mul_func_uint16_t_u_u(l_694, 1UL))), ((VECTOR(uint64_t, 2))(l_702.s2e)), ((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 4))(p_753->g_703.s3dc2)).odd, ((VECTOR(uint32_t, 16))(l_704.yyxxyxxyyyxxyxyy)).sa1))).yyxyyxyy, ((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 4))(GROUP_DIVERGE(1, 1), (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((void*)0 != l_709[3][4][0]), 0x48L)), p_4.f1.f8)), 0xEB54A61747034A02L, 18446744073709551611UL)).zyxwwyyz))).hi, (uint64_t)18446744073709551615UL, (uint64_t)p_4.f1.f5))).xyyyyyyw))), ((VECTOR(uint64_t, 8))(18446744073709551606UL))))), ((VECTOR(uint64_t, 4))(0x17CD96AEBD7FB289L)), 0UL)).s34, ((VECTOR(uint64_t, 2))(18446744073709551608UL))))).odd, 0xDDFF4727E18A682AL, 7UL, ((VECTOR(uint64_t, 4))(0x5BEF2BA9558AC5C9L)), ((VECTOR(uint64_t, 8))(0x9139A9F9CC20C49DL)), 0x9F4378FF7A2DFE07L)).s643f, ((VECTOR(uint64_t, 4))(0x598C4B413A7718A9L))))).yyxzzxww)).lo)), 0x4E107CDF68C875C7L, p_4.f1.f8, 0xFF3101A71D1C73F2L, 18446744073709551608UL)).lo, ((VECTOR(uint64_t, 4))(0UL))))).lo)).yyxxyyxy))).s0723742631227535)).scc)).xxxy, ((VECTOR(uint64_t, 4))(0x1F8D7C0EA0FA648EL))))).zzxwzwwxwxyzzwxz)).s64, ((VECTOR(uint64_t, 2))(0UL))))).yyyyxxxy, ((VECTOR(uint64_t, 8))(0x36A32366005A2DAFL))))).s7 , (void*)0) == (void*)0) || 255UL), 12)), p_4.f0)) == 0UL), 0x13L, (-1L))).xzyywxxy))).s45))), 255UL, 0xD6L)), 0x12L, 0x80L, 250UL, 0UL)))).s5636363053140370)))))).hi))).odd, (uint8_t)p_5))).hi))).yxxyyyyyxyxxxyxx))).s78e8, ((VECTOR(uint8_t, 4))(255UL))))).zywxyyyyxyyzxzyw))).sfa, ((VECTOR(uint8_t, 2))(0x2FL))))))), 255UL)), 255UL, 255UL)).s3) > 0x06L))
        { /* block id: 274 */
            for (p_753->g_583.f0 = 3; (p_753->g_583.f0 >= 24); p_753->g_583.f0 = safe_add_func_int8_t_s_s(p_753->g_583.f0, 4))
            { /* block id: 277 */
                if ((**p_753->g_636))
                    break;
            }
        }
        else
        { /* block id: 280 */
            return (*l_639);
        }
        l_720[7][1]--;
    }
    return p_4.f1.f2;
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_66.f5 p_753->g_42 p_753->g_226.f0 p_753->g_279.f3 p_753->g_279.f7 p_753->g_238 p_753->g_65 p_753->g_384 p_753->g_444 p_753->g_445 p_753->g_31 p_753->g_452 p_753->g_453 p_753->g_455 p_753->g_279.f0 p_753->g_328.f0 p_753->g_328.f8 p_753->g_558 p_753->g_563 p_753->g_171.f1 p_753->g_66.f8 p_753->g_173 p_753->g_279 p_753->g_570 p_753->g_76.f5 p_753->g_583 p_753->g_586 p_753->g_601 p_753->g_224 p_753->g_226 p_753->g_609 p_753->g_610 p_753->g_611 p_753->g_614 p_753->g_617 p_753->g_618 p_753->g_619 p_753->g_621 p_753->g_624 p_753->g_626 p_753->g_233 p_753->g_636
 * writes: p_753->g_66.f5 p_753->g_42 p_753->g_265 p_753->g_238 p_753->g_65 p_753->g_433 p_753->g_31 p_753->g_21 p_753->g_328.f0 p_753->g_587 p_753->g_224 p_753->g_226 p_753->g_71 p_753->g_66.f1 p_753->g_79
 */
uint32_t  func_7(uint32_t  p_8, uint32_t  p_9, uint32_t  p_10, uint32_t  p_11, struct S4 * p_753)
{ /* block id: 127 */
    int32_t *l_413 = (void*)0;
    int32_t *l_414 = &p_753->g_66.f5;
    uint16_t l_442 = 65535UL;
    VECTOR(uint16_t, 2) l_443 = (VECTOR(uint16_t, 2))(0xC2C2L, 65531UL);
    int64_t *l_446 = &p_753->g_21;
    VECTOR(uint16_t, 4) l_447 = (VECTOR(uint16_t, 4))(0xECF6L, (VECTOR(uint16_t, 2))(0xECF6L, 1UL), 1UL);
    VECTOR(uint16_t, 8) l_448 = (VECTOR(uint16_t, 8))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 0x025AL), 0x025AL), 0x025AL, 9UL, 0x025AL);
    struct S1 *l_462 = &p_753->g_66;
    int32_t l_489 = 6L;
    int32_t l_490 = 4L;
    int32_t l_492 = 0x71D94AFDL;
    int32_t l_493 = 0x08CA1416L;
    int32_t l_497[1][4][7] = {{{0x4F085E7EL,0x260C50A9L,0x439D6EDAL,0L,0x260C50A9L,0L,0x439D6EDAL},{0x4F085E7EL,0x260C50A9L,0x439D6EDAL,0L,0x260C50A9L,0L,0x439D6EDAL},{0x4F085E7EL,0x260C50A9L,0x439D6EDAL,0L,0x260C50A9L,0L,0x439D6EDAL},{0x4F085E7EL,0x260C50A9L,0x439D6EDAL,0L,0x260C50A9L,0L,0x439D6EDAL}}};
    int16_t l_498 = 0x0ABAL;
    VECTOR(uint16_t, 8) l_559 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65534UL), 65534UL), 65534UL, 1UL, 65534UL);
    VECTOR(uint32_t, 16) l_593 = (VECTOR(uint32_t, 16))(0x876CE9D1L, (VECTOR(uint32_t, 4))(0x876CE9D1L, (VECTOR(uint32_t, 2))(0x876CE9D1L, 0UL), 0UL), 0UL, 0x876CE9D1L, 0UL, (VECTOR(uint32_t, 2))(0x876CE9D1L, 0UL), (VECTOR(uint32_t, 2))(0x876CE9D1L, 0UL), 0x876CE9D1L, 0UL, 0x876CE9D1L, 0UL);
    VECTOR(int16_t, 4) l_597 = (VECTOR(int16_t, 4))(0x22C2L, (VECTOR(int16_t, 2))(0x22C2L, 1L), 1L);
    VECTOR(int16_t, 16) l_598 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int16_t, 2))(1L, (-1L)), (VECTOR(int16_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
    VECTOR(int16_t, 8) l_600 = (VECTOR(int16_t, 8))(0x6AB4L, (VECTOR(int16_t, 4))(0x6AB4L, (VECTOR(int16_t, 2))(0x6AB4L, 1L), 1L), 1L, 0x6AB4L, 1L);
    int32_t **l_603 = (void*)0;
    int32_t *l_604 = &p_753->g_66.f5;
    uint64_t l_605 = 1UL;
    VECTOR(int16_t, 2) l_612 = (VECTOR(int16_t, 2))(0x6F23L, 0x77F1L);
    VECTOR(int16_t, 16) l_613 = (VECTOR(int16_t, 16))(5L, (VECTOR(int16_t, 4))(5L, (VECTOR(int16_t, 2))(5L, (-9L)), (-9L)), (-9L), 5L, (-9L), (VECTOR(int16_t, 2))(5L, (-9L)), (VECTOR(int16_t, 2))(5L, (-9L)), 5L, (-9L), 5L, (-9L));
    VECTOR(int16_t, 8) l_615 = (VECTOR(int16_t, 8))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0x7B5CL), 0x7B5CL), 0x7B5CL, 3L, 0x7B5CL);
    VECTOR(int16_t, 4) l_616 = (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x339DL), 0x339DL);
    VECTOR(int16_t, 16) l_620 = (VECTOR(int16_t, 16))(0x4259L, (VECTOR(int16_t, 4))(0x4259L, (VECTOR(int16_t, 2))(0x4259L, 1L), 1L), 1L, 0x4259L, 1L, (VECTOR(int16_t, 2))(0x4259L, 1L), (VECTOR(int16_t, 2))(0x4259L, 1L), 0x4259L, 1L, 0x4259L, 1L);
    VECTOR(int16_t, 4) l_622 = (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, (-10L)), (-10L));
    VECTOR(int8_t, 16) l_623 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 1L), 1L), 1L, 8L, 1L, (VECTOR(int8_t, 2))(8L, 1L), (VECTOR(int8_t, 2))(8L, 1L), 8L, 1L, 8L, 1L);
    VECTOR(int16_t, 8) l_625 = (VECTOR(int16_t, 8))(0x7192L, (VECTOR(int16_t, 4))(0x7192L, (VECTOR(int16_t, 2))(0x7192L, 1L), 1L), 1L, 0x7192L, 1L);
    VECTOR(uint8_t, 2) l_631 = (VECTOR(uint8_t, 2))(4UL, 0UL);
    VECTOR(uint8_t, 2) l_632 = (VECTOR(uint8_t, 2))(0x8DL, 0x46L);
    int8_t *l_635 = &p_753->g_71[0][2][3];
    int i, j, k;
    (*l_414) ^= 0x41859C16L;
    for (p_753->g_42 = (-14); (p_753->g_42 == 38); p_753->g_42 = safe_add_func_uint32_t_u_u(p_753->g_42, 6))
    { /* block id: 131 */
        int64_t l_417 = 0x364D91C60B184010L;
        VECTOR(uint8_t, 16) l_422 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 247UL), 247UL), 247UL, 255UL, 247UL, (VECTOR(uint8_t, 2))(255UL, 247UL), (VECTOR(uint8_t, 2))(255UL, 247UL), 255UL, 247UL, 255UL, 247UL);
        int32_t l_434 = 0x727682EBL;
        struct S3 *l_435[9][6] = {{&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5],&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5]},{&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5],&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5]},{&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5],&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5]},{&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5],&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5]},{&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5],&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5]},{&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5],&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5]},{&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5],&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5]},{&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5],&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5]},{&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5],&p_753->g_171[8][5],&p_753->g_171[1][4],&p_753->g_171[8][5]}};
        uint32_t *l_439 = &p_753->g_238;
        uint16_t *l_449 = &p_753->g_31;
        VECTOR(uint16_t, 2) l_454 = (VECTOR(uint16_t, 2))(0UL, 0x1370L);
        int32_t l_484 = 0L;
        int32_t l_485 = 0x42CB14E5L;
        int32_t l_486 = 1L;
        int32_t l_487 = (-5L);
        int32_t l_488 = 0x7AC5C669L;
        int32_t l_491 = (-2L);
        int32_t l_494 = 3L;
        int32_t l_495 = 0x19A4E987L;
        int32_t l_496[2];
        uint32_t l_501 = 1UL;
        int32_t **l_561 = &l_414;
        int32_t **l_562 = &l_413;
        uint32_t *l_567 = &l_501;
        uint8_t l_579 = 0xE7L;
        int32_t *l_588 = &l_486;
        int32_t *l_589[9][10] = {{&l_491,&l_491,(void*)0,&l_497[0][3][2],&l_493,&l_497[0][3][2],(void*)0,&l_491,&l_491,(void*)0},{&l_491,&l_491,(void*)0,&l_497[0][3][2],&l_493,&l_497[0][3][2],(void*)0,&l_491,&l_491,(void*)0},{&l_491,&l_491,(void*)0,&l_497[0][3][2],&l_493,&l_497[0][3][2],(void*)0,&l_491,&l_491,(void*)0},{&l_491,&l_491,(void*)0,&l_497[0][3][2],&l_493,&l_497[0][3][2],(void*)0,&l_491,&l_491,(void*)0},{&l_491,&l_491,(void*)0,&l_497[0][3][2],&l_493,&l_497[0][3][2],(void*)0,&l_491,&l_491,(void*)0},{&l_491,&l_491,(void*)0,&l_497[0][3][2],&l_493,&l_497[0][3][2],(void*)0,&l_491,&l_491,(void*)0},{&l_491,&l_491,(void*)0,&l_497[0][3][2],&l_493,&l_497[0][3][2],(void*)0,&l_491,&l_491,(void*)0},{&l_491,&l_491,(void*)0,&l_497[0][3][2],&l_493,&l_497[0][3][2],(void*)0,&l_491,&l_491,(void*)0},{&l_491,&l_491,(void*)0,&l_497[0][3][2],&l_493,&l_497[0][3][2],(void*)0,&l_491,&l_491,(void*)0}};
        uint16_t l_590[3][5][8] = {{{5UL,5UL,0UL,1UL,0xC623L,1UL,0UL,5UL},{5UL,5UL,0UL,1UL,0xC623L,1UL,0UL,5UL},{5UL,5UL,0UL,1UL,0xC623L,1UL,0UL,5UL},{5UL,5UL,0UL,1UL,0xC623L,1UL,0UL,5UL},{5UL,5UL,0UL,1UL,0xC623L,1UL,0UL,5UL}},{{5UL,5UL,0UL,1UL,0xC623L,1UL,0UL,5UL},{5UL,5UL,0UL,1UL,0xC623L,1UL,0UL,5UL},{5UL,5UL,0UL,1UL,0xC623L,1UL,0UL,5UL},{5UL,5UL,0UL,1UL,0xC623L,1UL,0UL,5UL},{5UL,5UL,0UL,1UL,0xC623L,1UL,0UL,5UL}},{{5UL,5UL,0UL,1UL,0xC623L,1UL,0UL,5UL},{5UL,5UL,0UL,1UL,0xC623L,1UL,0UL,5UL},{5UL,5UL,0UL,1UL,0xC623L,1UL,0UL,5UL},{5UL,5UL,0UL,1UL,0xC623L,1UL,0UL,5UL},{5UL,5UL,0UL,1UL,0xC623L,1UL,0UL,5UL}}};
        struct S1 *l_594 = &p_753->g_66;
        uint8_t l_599 = 0xBDL;
        VECTOR(int16_t, 8) l_602 = (VECTOR(int16_t, 8))(0x5363L, (VECTOR(int16_t, 4))(0x5363L, (VECTOR(int16_t, 2))(0x5363L, 5L), 5L), 5L, 0x5363L, 5L);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_496[i] = 0x19BC9EBEL;
        if (l_417)
        { /* block id: 132 */
            uint8_t *l_423 = (void*)0;
            uint8_t *l_424 = &p_753->g_265[1];
            uint32_t *l_429[5];
            uint64_t *l_432 = &p_753->g_65;
            int i;
            for (i = 0; i < 5; i++)
                l_429[i] = &p_753->g_238;
            (*l_414) &= (0x3D43L & ((((((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 4))((-3L), 0x6BE94B88L, (-9L), 0x06F0F9B3L)).z, (~(p_753->g_433 = (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(l_422.s6fd633e236188bac)).s0, (((((((*l_424) = p_10) == p_753->g_226.f0) , (safe_mul_func_uint16_t_u_u(p_753->g_279.f3, p_753->g_279.f7))) , (((safe_mul_func_int16_t_s_s(p_9, 1UL)) == (--p_753->g_238)) >= ((*l_432) &= ((VECTOR(uint64_t, 2))(1UL, 0xA964A5E9E95144E2L)).lo))) && p_11) > 0xA68277E5F1643C4FL))))))) ^ p_753->g_384.w) > 0x22BBL) , l_434) == 18446744073709551614UL) , 0x4E8AL));
        }
        else
        { /* block id: 138 */
            struct S3 **l_436 = &l_435[3][5];
            (*l_414) ^= ((void*)0 != &p_753->g_344);
            if (l_417)
                continue;
            if (p_11)
                break;
            (*l_436) = l_435[3][5];
        }
        if ((safe_mod_func_int8_t_s_s(((&p_753->g_433 != l_439) & (((*l_446) = (l_442 > ((((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 16))(l_417, ((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 8))(l_443.xyyxxxxy)).s05))).xyxyxxxyyyxyyyyx)).lo, ((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 2))(0UL, 0xE2L)).yyxy, ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 8))(p_753->g_444.s44423676)), ((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(p_753->g_445.xxyyyxyy)))).s4461003125337215, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(247UL, 252UL)).xyxy)).ywxyyyyzyzwwxzyz))))).hi))).lo))), ((void*)0 != l_446), 0UL, 0UL, 0x36L)).hi, ((VECTOR(uint8_t, 4))(249UL, ((VECTOR(uint8_t, 2))(251UL, 0UL)), 253UL))))).wxyzyxzxyyzwwyzz)).sb, 65534UL, ((VECTOR(uint16_t, 2))(l_447.xx)), GROUP_DIVERGE(1, 1), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))(l_448.s6432)).zzyxxyzyyzxwzxzy, (uint16_t)((*l_449)++)))).s388a, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(p_753->g_452.sf333e72c)).s6117271520771414)).sfc78, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 4))(p_753->g_453.s4645)).wwyzxxyywyxyyywz, ((VECTOR(uint16_t, 2))(l_454.xx)).xyxxxxyyyxxxxyxy))))).s6d, ((VECTOR(uint16_t, 2))(p_753->g_455.yx))))), ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 2))(0xD0C0L, 0x1D28L)), (uint16_t)(l_454.y >= (safe_sub_func_uint8_t_u_u((!((VECTOR(uint8_t, 8))((safe_add_func_uint8_t_u_u(0xCEL, ((VECTOR(uint8_t, 2))(0xD1L, 0x2AL)).odd)), (l_422.s2 > l_434), p_9, 0x93L, 249UL, 0x2CL, 0UL, 1UL)).s6), l_422.s2))), (uint16_t)0x8F1DL))), 0xEA1AL, 65533UL, ((VECTOR(uint16_t, 4))(65535UL)), p_753->g_279.f0, 1UL, 0x6778L, 0x142DL, 0UL, 0x5A5DL)).s2223))))), ((VECTOR(uint16_t, 2))(0x0054L)), p_753->g_328.f0, ((VECTOR(uint16_t, 4))(0xBA3BL)))).s4c, ((VECTOR(uint16_t, 2))(65535UL))))).xyxyyxxy))), ((VECTOR(uint16_t, 2))(0x3501L)), 0x838DL, ((VECTOR(uint16_t, 4))(0xD79FL)))).even, ((VECTOR(uint16_t, 8))(0xE9CFL))))).s2 <= p_753->g_328.f8) <= 18446744073709551611UL))) , FAKE_DIVERGE(p_753->group_1_offset, get_group_id(1), 10))), 0x3FL)))
        { /* block id: 146 */
            int32_t *l_473 = &p_753->g_66.f0;
            int32_t *l_474 = (void*)0;
            int32_t l_475 = (-6L);
            int32_t *l_476 = &l_475;
            int32_t *l_477 = &l_475;
            int32_t *l_478 = &p_753->g_66.f0;
            int32_t *l_479 = &p_753->g_66.f0;
            int32_t *l_480 = &l_475;
            int32_t *l_481 = &p_753->g_66.f0;
            int32_t *l_482 = &l_475;
            int32_t *l_483[9][6][4] = {{{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0}},{{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0}},{{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0}},{{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0}},{{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0}},{{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0}},{{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0}},{{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0}},{{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0},{&p_753->g_66.f5,&p_753->g_82,&l_475,(void*)0}}};
            int32_t l_499 = 1L;
            int16_t l_500 = 6L;
            int i, j, k;
            for (p_753->g_328.f0 = 19; (p_753->g_328.f0 != 12); p_753->g_328.f0 = safe_sub_func_uint16_t_u_u(p_753->g_328.f0, 1))
            { /* block id: 149 */
                struct S1 **l_463[2];
                uint64_t *l_469 = &p_753->g_42;
                uint64_t **l_470 = &l_469;
                uint64_t *l_472 = &p_753->g_42;
                uint64_t **l_471 = &l_472;
                int i;
                for (i = 0; i < 2; i++)
                    l_463[i] = &l_462;
                l_462 = l_462;
                if (p_10)
                    break;
                for (l_417 = 0; (l_417 < (-17)); l_417 = safe_sub_func_uint64_t_u_u(l_417, 1))
                { /* block id: 154 */
                    int32_t l_466 = 0x49057205L;
                    if (p_9)
                        break;
                    if (l_466)
                        continue;
                }
                (*l_414) &= (safe_mul_func_uint16_t_u_u(p_11, (((*l_470) = l_469) != ((*l_471) = &p_753->g_65))));
            }
            l_501++;
        }
        else
        { /* block id: 163 */
            int32_t ***l_560[7] = {&p_753->g_88,&p_753->g_88,&p_753->g_88,&p_753->g_88,&p_753->g_88,&p_753->g_88,&p_753->g_88};
            VECTOR(uint16_t, 4) l_564 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xB61AL), 0xB61AL);
            int32_t l_580 = 0x50A80BFCL;
            VECTOR(int32_t, 8) l_584 = (VECTOR(int32_t, 8))(0x59239F01L, (VECTOR(int32_t, 4))(0x59239F01L, (VECTOR(int32_t, 2))(0x59239F01L, 0x6B09AF1AL), 0x6B09AF1AL), 0x6B09AF1AL, 0x59239F01L, 0x6B09AF1AL);
            int i;
            if ((atomic_inc(&p_753->g_atomic_input[18 * get_linear_group_id() + 8]) == 4))
            { /* block id: 165 */
                VECTOR(int32_t, 8) l_504 = (VECTOR(int32_t, 8))(0x2110AB60L, (VECTOR(int32_t, 4))(0x2110AB60L, (VECTOR(int32_t, 2))(0x2110AB60L, 0x1B8033F4L), 0x1B8033F4L), 0x1B8033F4L, 0x2110AB60L, 0x1B8033F4L);
                VECTOR(int32_t, 16) l_505 = (VECTOR(int32_t, 16))(0x1BC7559EL, (VECTOR(int32_t, 4))(0x1BC7559EL, (VECTOR(int32_t, 2))(0x1BC7559EL, 1L), 1L), 1L, 0x1BC7559EL, 1L, (VECTOR(int32_t, 2))(0x1BC7559EL, 1L), (VECTOR(int32_t, 2))(0x1BC7559EL, 1L), 0x1BC7559EL, 1L, 0x1BC7559EL, 1L);
                VECTOR(int32_t, 2) l_506 = (VECTOR(int32_t, 2))(9L, 3L);
                VECTOR(int32_t, 16) l_507 = (VECTOR(int32_t, 16))(0x47BB470CL, (VECTOR(int32_t, 4))(0x47BB470CL, (VECTOR(int32_t, 2))(0x47BB470CL, (-9L)), (-9L)), (-9L), 0x47BB470CL, (-9L), (VECTOR(int32_t, 2))(0x47BB470CL, (-9L)), (VECTOR(int32_t, 2))(0x47BB470CL, (-9L)), 0x47BB470CL, (-9L), 0x47BB470CL, (-9L));
                int64_t l_508 = 0x2BE882A0DC469825L;
                uint32_t l_509 = 0xE6312360L;
                int32_t l_510[4][6][8] = {{{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L}},{{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L}},{{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L}},{{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L},{0x5335A500L,(-1L),(-2L),0L,3L,0x6ECC84D8L,1L,0x6CDE7594L}}};
                VECTOR(int32_t, 16) l_511 = (VECTOR(int32_t, 16))(0x08FA6C4CL, (VECTOR(int32_t, 4))(0x08FA6C4CL, (VECTOR(int32_t, 2))(0x08FA6C4CL, 4L), 4L), 4L, 0x08FA6C4CL, 4L, (VECTOR(int32_t, 2))(0x08FA6C4CL, 4L), (VECTOR(int32_t, 2))(0x08FA6C4CL, 4L), 0x08FA6C4CL, 4L, 0x08FA6C4CL, 4L);
                VECTOR(int32_t, 4) l_512 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x51AD343AL), 0x51AD343AL);
                VECTOR(int32_t, 16) l_513 = (VECTOR(int32_t, 16))(0x07978C68L, (VECTOR(int32_t, 4))(0x07978C68L, (VECTOR(int32_t, 2))(0x07978C68L, 0x70D24917L), 0x70D24917L), 0x70D24917L, 0x07978C68L, 0x70D24917L, (VECTOR(int32_t, 2))(0x07978C68L, 0x70D24917L), (VECTOR(int32_t, 2))(0x07978C68L, 0x70D24917L), 0x07978C68L, 0x70D24917L, 0x07978C68L, 0x70D24917L);
                struct S1 l_551 = {0x7801C5B4L,6L,0x0F12L,0x5A628E49L,-5L,8L,0x8C2B7103L,6L,0UL};
                VECTOR(int64_t, 2) l_552 = (VECTOR(int64_t, 2))((-1L), 0x5A5A4A04111F9DD6L);
                VECTOR(int64_t, 4) l_553 = (VECTOR(int64_t, 4))(0x3B1568BA168CD0E0L, (VECTOR(int64_t, 2))(0x3B1568BA168CD0E0L, 5L), 5L);
                int32_t l_554 = 9L;
                int16_t l_555 = (-6L);
                uint32_t l_556[5][2] = {{0x9C54C559L,0UL},{0x9C54C559L,0UL},{0x9C54C559L,0UL},{0x9C54C559L,0UL},{0x9C54C559L,0UL}};
                struct S0 *l_557 = (void*)0;
                int i, j, k;
                if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(l_504.s0662600011643306)).s93, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_505.s43)), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_506.xyyy)).wzxzzxzxxyzzyxwy)).s6a, ((VECTOR(int32_t, 8))(l_507.s077cc9b7)).s32))), ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((l_509 = l_508), l_510[1][3][4], 3L, 5L)).zxyzwwwz)), ((VECTOR(int32_t, 2))(l_511.s2e)).yyxxyyxx))).lo, ((VECTOR(int32_t, 2))(l_512.yw)).xxxx))).lo))), ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_513.s77bec2bc)))).s42))))))))), 1L, 0x425FA492L)).yyxzwwxy)).s1)
                { /* block id: 167 */
                    int32_t l_514 = 0L;
                    uint32_t l_519 = 0x83683EC7L;
                    uint8_t l_520 = 0xABL;
                    for (l_514 = (-28); (l_514 < 19); l_514 = safe_add_func_uint16_t_u_u(l_514, 7))
                    { /* block id: 170 */
                        int32_t *l_517 = (void*)0;
                        VECTOR(int32_t, 16) l_518 = (VECTOR(int32_t, 16))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L, (VECTOR(int32_t, 2))((-5L), 0L), (VECTOR(int32_t, 2))((-5L), 0L), (-5L), 0L, (-5L), 0L);
                        int i;
                        l_517 = (void*)0;
                        l_512.x = ((VECTOR(int32_t, 2))(l_518.s2d)).even;
                    }
                    if ((l_520 = (l_519 , (l_514 &= 0x2CE81BDBL))))
                    { /* block id: 176 */
                        uint64_t l_521 = 0xC93BE806AA32E552L;
                        uint32_t l_524 = 4UL;
                        l_507.sd = 0x3829D114L;
                        l_521++;
                        ++l_524;
                    }
                    else
                    { /* block id: 180 */
                        int64_t l_527[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
                        int32_t l_528 = 0L;
                        struct S3 l_530 = {4294967295UL,0x43ED713D5A7DFC8AL,0x5AL,0L};/* VOLATILE GLOBAL l_530 */
                        struct S3 *l_529 = &l_530;
                        struct S3 *l_531 = &l_530;
                        struct S3 *l_532 = &l_530;
                        uint64_t l_533 = 18446744073709551608UL;
                        int64_t l_534 = 0x749CD185522665F0L;
                        int i;
                        l_528 ^= l_527[1];
                        l_532 = (l_531 = l_529);
                        l_534 &= l_533;
                    }
                }
                else
                { /* block id: 186 */
                    VECTOR(int16_t, 2) l_535 = (VECTOR(int16_t, 2))(0x1A3DL, (-7L));
                    int8_t l_536 = 0x27L;
                    struct S2 l_537[4][8] = {{{0x21136943L,{1L,7L,-8L,4294967294UL,0x2665BF9AL,-1L,0UL,1L,0x7B200661BC7798A3L},0xC683L},{4294967294UL,{0L,1L,0x7863L,0xF1FAF4F9L,-1L,0L,0xAAECC2EFL,1L,18446744073709551615UL},1UL},{0x40384B1EL,{0x71233A42L,1L,1L,0x12CE3257L,0x7AAB6BA7L,0x4EAFDBAAL,2UL,0x76356CF7L,0x155F2C2DA52F4C90L},65528UL},{0x575A2302L,{-7L,-3L,0x01EAL,0xB4ACA3E0L,0x1AB0485AL,2L,0UL,0x7F2B74A2L,0xDA94931DB8797619L},0x1AB3L},{1UL,{0x28E5B093L,0x6AL,3L,0UL,0x55EBE58AL,0x7B8023E5L,0xEE3B43D3L,0x6DB7953EL,0UL},65531UL},{0x21136943L,{1L,7L,-8L,4294967294UL,0x2665BF9AL,-1L,0UL,1L,0x7B200661BC7798A3L},0xC683L},{0x575A2302L,{-7L,-3L,0x01EAL,0xB4ACA3E0L,0x1AB0485AL,2L,0UL,0x7F2B74A2L,0xDA94931DB8797619L},0x1AB3L},{0UL,{-1L,-1L,0x3434L,7UL,0L,1L,0x21400E18L,0x75034943L,0x9F90B98D9061910BL},0x3EE8L}},{{0x21136943L,{1L,7L,-8L,4294967294UL,0x2665BF9AL,-1L,0UL,1L,0x7B200661BC7798A3L},0xC683L},{4294967294UL,{0L,1L,0x7863L,0xF1FAF4F9L,-1L,0L,0xAAECC2EFL,1L,18446744073709551615UL},1UL},{0x40384B1EL,{0x71233A42L,1L,1L,0x12CE3257L,0x7AAB6BA7L,0x4EAFDBAAL,2UL,0x76356CF7L,0x155F2C2DA52F4C90L},65528UL},{0x575A2302L,{-7L,-3L,0x01EAL,0xB4ACA3E0L,0x1AB0485AL,2L,0UL,0x7F2B74A2L,0xDA94931DB8797619L},0x1AB3L},{1UL,{0x28E5B093L,0x6AL,3L,0UL,0x55EBE58AL,0x7B8023E5L,0xEE3B43D3L,0x6DB7953EL,0UL},65531UL},{0x21136943L,{1L,7L,-8L,4294967294UL,0x2665BF9AL,-1L,0UL,1L,0x7B200661BC7798A3L},0xC683L},{0x575A2302L,{-7L,-3L,0x01EAL,0xB4ACA3E0L,0x1AB0485AL,2L,0UL,0x7F2B74A2L,0xDA94931DB8797619L},0x1AB3L},{0UL,{-1L,-1L,0x3434L,7UL,0L,1L,0x21400E18L,0x75034943L,0x9F90B98D9061910BL},0x3EE8L}},{{0x21136943L,{1L,7L,-8L,4294967294UL,0x2665BF9AL,-1L,0UL,1L,0x7B200661BC7798A3L},0xC683L},{4294967294UL,{0L,1L,0x7863L,0xF1FAF4F9L,-1L,0L,0xAAECC2EFL,1L,18446744073709551615UL},1UL},{0x40384B1EL,{0x71233A42L,1L,1L,0x12CE3257L,0x7AAB6BA7L,0x4EAFDBAAL,2UL,0x76356CF7L,0x155F2C2DA52F4C90L},65528UL},{0x575A2302L,{-7L,-3L,0x01EAL,0xB4ACA3E0L,0x1AB0485AL,2L,0UL,0x7F2B74A2L,0xDA94931DB8797619L},0x1AB3L},{1UL,{0x28E5B093L,0x6AL,3L,0UL,0x55EBE58AL,0x7B8023E5L,0xEE3B43D3L,0x6DB7953EL,0UL},65531UL},{0x21136943L,{1L,7L,-8L,4294967294UL,0x2665BF9AL,-1L,0UL,1L,0x7B200661BC7798A3L},0xC683L},{0x575A2302L,{-7L,-3L,0x01EAL,0xB4ACA3E0L,0x1AB0485AL,2L,0UL,0x7F2B74A2L,0xDA94931DB8797619L},0x1AB3L},{0UL,{-1L,-1L,0x3434L,7UL,0L,1L,0x21400E18L,0x75034943L,0x9F90B98D9061910BL},0x3EE8L}},{{0x21136943L,{1L,7L,-8L,4294967294UL,0x2665BF9AL,-1L,0UL,1L,0x7B200661BC7798A3L},0xC683L},{4294967294UL,{0L,1L,0x7863L,0xF1FAF4F9L,-1L,0L,0xAAECC2EFL,1L,18446744073709551615UL},1UL},{0x40384B1EL,{0x71233A42L,1L,1L,0x12CE3257L,0x7AAB6BA7L,0x4EAFDBAAL,2UL,0x76356CF7L,0x155F2C2DA52F4C90L},65528UL},{0x575A2302L,{-7L,-3L,0x01EAL,0xB4ACA3E0L,0x1AB0485AL,2L,0UL,0x7F2B74A2L,0xDA94931DB8797619L},0x1AB3L},{1UL,{0x28E5B093L,0x6AL,3L,0UL,0x55EBE58AL,0x7B8023E5L,0xEE3B43D3L,0x6DB7953EL,0UL},65531UL},{0x21136943L,{1L,7L,-8L,4294967294UL,0x2665BF9AL,-1L,0UL,1L,0x7B200661BC7798A3L},0xC683L},{0x575A2302L,{-7L,-3L,0x01EAL,0xB4ACA3E0L,0x1AB0485AL,2L,0UL,0x7F2B74A2L,0xDA94931DB8797619L},0x1AB3L},{0UL,{-1L,-1L,0x3434L,7UL,0L,1L,0x21400E18L,0x75034943L,0x9F90B98D9061910BL},0x3EE8L}}};
                    int8_t *l_539 = &l_537[0][4].f1.f1;
                    int8_t **l_538[5][7] = {{&l_539,&l_539,(void*)0,&l_539,&l_539,&l_539,&l_539},{&l_539,&l_539,(void*)0,&l_539,&l_539,&l_539,&l_539},{&l_539,&l_539,(void*)0,&l_539,&l_539,&l_539,&l_539},{&l_539,&l_539,(void*)0,&l_539,&l_539,&l_539,&l_539},{&l_539,&l_539,(void*)0,&l_539,&l_539,&l_539,&l_539}};
                    int8_t **l_540 = &l_539;
                    int8_t **l_541[5][7][4] = {{{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0}},{{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0}},{{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0}},{{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0}},{{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0},{(void*)0,&l_539,&l_539,(void*)0}}};
                    int16_t l_542[4][7][5] = {{{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL}},{{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL}},{{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL}},{{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL},{(-6L),1L,1L,(-1L),0x5C7DL}}};
                    int i, j, k;
                    l_541[4][1][3] = (FAKE_DIVERGE(p_753->group_2_offset, get_group_id(2), 10) , (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_535.xyxyxyyxyyxyxxyx)))).sd , (l_536 , (l_540 = (l_537[0][4] , l_538[3][2])))));
                    if (l_542[1][6][1])
                    { /* block id: 189 */
                        uint8_t l_543[10][5][5] = {{{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL}},{{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL}},{{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL}},{{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL}},{{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL}},{{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL}},{{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL}},{{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL}},{{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL}},{{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL},{255UL,0x0DL,0x9AL,253UL,0UL}}};
                        struct S1 l_544 = {-1L,0x1EL,0x3E76L,0UL,1L,0x504C684CL,0x8A35E01BL,0x7ED29560L,0xC25D1E132B3E9283L};
                        uint32_t l_545[6] = {0x9A0720C3L,4294967286UL,0x9A0720C3L,0x9A0720C3L,4294967286UL,0x9A0720C3L};
                        int32_t l_546 = 0x66944D10L;
                        struct S2 l_548 = {0xA11DB311L,{0x0C6AC366L,0x3FL,-8L,4294967294UL,2L,3L,0x9FA814D8L,0x1C92D2CDL,18446744073709551615UL},2UL};
                        struct S2 *l_547 = &l_548;
                        struct S2 *l_549[1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_549[i] = &l_548;
                        l_513.sa = l_543[4][4][2];
                        l_537[0][4].f1 = l_544;
                        l_546 = l_545[3];
                        l_549[0] = l_547;
                    }
                    else
                    { /* block id: 194 */
                        int64_t l_550 = 0x5609D63801E95803L;
                        l_537[0][4].f1.f5 |= l_550;
                    }
                }
                l_557 = ((l_551 , (l_556[3][1] ^= ((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 2))(l_552.yx)).yyyy, ((VECTOR(int64_t, 8))(0x05A0E9CEB8FE1EDAL, ((VECTOR(int64_t, 2))(l_553.yz)), l_554, l_555, 0x7CCA35CCFFEDAE76L, 0x3331B7C2BCC8F848L, 2L)).odd))).y)) , (void*)0);
                unsigned int result = 0;
                result += l_504.s7;
                result += l_504.s6;
                result += l_504.s5;
                result += l_504.s4;
                result += l_504.s3;
                result += l_504.s2;
                result += l_504.s1;
                result += l_504.s0;
                result += l_505.sf;
                result += l_505.se;
                result += l_505.sd;
                result += l_505.sc;
                result += l_505.sb;
                result += l_505.sa;
                result += l_505.s9;
                result += l_505.s8;
                result += l_505.s7;
                result += l_505.s6;
                result += l_505.s5;
                result += l_505.s4;
                result += l_505.s3;
                result += l_505.s2;
                result += l_505.s1;
                result += l_505.s0;
                result += l_506.y;
                result += l_506.x;
                result += l_507.sf;
                result += l_507.se;
                result += l_507.sd;
                result += l_507.sc;
                result += l_507.sb;
                result += l_507.sa;
                result += l_507.s9;
                result += l_507.s8;
                result += l_507.s7;
                result += l_507.s6;
                result += l_507.s5;
                result += l_507.s4;
                result += l_507.s3;
                result += l_507.s2;
                result += l_507.s1;
                result += l_507.s0;
                result += l_508;
                result += l_509;
                int l_510_i0, l_510_i1, l_510_i2;
                for (l_510_i0 = 0; l_510_i0 < 4; l_510_i0++) {
                    for (l_510_i1 = 0; l_510_i1 < 6; l_510_i1++) {
                        for (l_510_i2 = 0; l_510_i2 < 8; l_510_i2++) {
                            result += l_510[l_510_i0][l_510_i1][l_510_i2];
                        }
                    }
                }
                result += l_511.sf;
                result += l_511.se;
                result += l_511.sd;
                result += l_511.sc;
                result += l_511.sb;
                result += l_511.sa;
                result += l_511.s9;
                result += l_511.s8;
                result += l_511.s7;
                result += l_511.s6;
                result += l_511.s5;
                result += l_511.s4;
                result += l_511.s3;
                result += l_511.s2;
                result += l_511.s1;
                result += l_511.s0;
                result += l_512.w;
                result += l_512.z;
                result += l_512.y;
                result += l_512.x;
                result += l_513.sf;
                result += l_513.se;
                result += l_513.sd;
                result += l_513.sc;
                result += l_513.sb;
                result += l_513.sa;
                result += l_513.s9;
                result += l_513.s8;
                result += l_513.s7;
                result += l_513.s6;
                result += l_513.s5;
                result += l_513.s4;
                result += l_513.s3;
                result += l_513.s2;
                result += l_513.s1;
                result += l_513.s0;
                result += l_551.f0;
                result += l_551.f1;
                result += l_551.f2;
                result += l_551.f3;
                result += l_551.f4;
                result += l_551.f5;
                result += l_551.f6;
                result += l_551.f7;
                result += l_551.f8;
                result += l_552.y;
                result += l_552.x;
                result += l_553.w;
                result += l_553.z;
                result += l_553.y;
                result += l_553.x;
                result += l_554;
                result += l_555;
                int l_556_i0, l_556_i1;
                for (l_556_i0 = 0; l_556_i0 < 5; l_556_i0++) {
                    for (l_556_i1 = 0; l_556_i1 < 2; l_556_i1++) {
                        result += l_556[l_556_i0][l_556_i1];
                    }
                }
                atomic_add(&p_753->g_special_values[18 * get_linear_group_id() + 8], result);
            }
            else
            { /* block id: 200 */
                (1 + 1);
            }
            if ((((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(p_753->g_558.yywy)).zzyxyyyxwwxyxxwz, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xE551L, 65535UL)), 0UL, 0x5338L)).yzzyyxwzxxxyyxzy))).even, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(65535UL, ((VECTOR(uint16_t, 2))(65533UL, 7UL)), 3UL)).even)).yyyxyyxx, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(65535UL, 0x1B28L)))), ((VECTOR(uint16_t, 8))(l_559.s16563656)).s47))))).yyxxxyyx))).s7603762730621517, ((VECTOR(uint16_t, 8))((&p_753->g_73 == (l_562 = (l_561 = &p_753->g_79))), 0x2E32L, p_9, 65533UL, ((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(p_753->g_563.s00)), ((VECTOR(uint16_t, 4))(l_564.ywww)), 65526UL, 65528UL, 9UL, 0x3396L, 0xDF99L, 0x0804L, ((safe_mod_func_uint64_t_u_u((func_43(l_567, p_753) , ((safe_mul_func_int16_t_s_s((p_753->g_570 , (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s((0UL ^ (l_579 = (&l_501 != (void*)0))), l_580)), p_8)), p_753->g_76[5][4].f5))), p_9)) == 0UL)), 7UL)) && FAKE_DIVERGE(p_753->global_0_offset, get_global_id(0), 10)), 0xB05CL, 0xE997L, 0x063CL)).s4421, ((VECTOR(uint16_t, 4))(0UL)), ((VECTOR(uint16_t, 4))(0x006BL))))))).s1405170305360575, ((VECTOR(uint16_t, 16))(0xE70CL))))))).hi))).s5 || 0L))
            { /* block id: 206 */
                for (l_494 = 3; (l_494 == 19); l_494 = safe_add_func_uint16_t_u_u(l_494, 1))
                { /* block id: 209 */
                    int32_t l_585 = 0L;
                    l_585 = (p_753->g_583 , ((VECTOR(int32_t, 2))(l_584.s61)).lo);
                }
            }
            else
            { /* block id: 212 */
                (*l_414) = (p_8 != p_9);
                p_753->g_587 = p_753->g_586;
            }
        }
        l_590[0][3][4]++;
        (*l_414) = ((((((VECTOR(uint32_t, 4))(l_593.sf126)).y == ((void*)0 == l_594)) >= (+0x5E8521D35F13D91DL)) ^ (safe_rshift_func_uint16_t_u_u(1UL, ((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(7L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(l_597.xw)).yyxy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_598.sd5)), 0x3FD0L, 1L))))))), (l_599 != p_753->g_570.f3), ((VECTOR(int16_t, 2))(l_600.s13)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(p_753->g_601.yyyyyxyyyxxyxyyy)).hi)))).s6f7b, ((VECTOR(int16_t, 8))(l_602.s37027150)).lo))).lo))).yxyy)).yxxywwxx))).s0))) || (*l_414));
    }
    l_604 = &l_489;
    (*p_753->g_636) = func_45(func_49((p_11 , p_9), l_605, p_753), l_413, (safe_sub_func_uint16_t_u_u(((safe_unary_minus_func_int16_t_s((((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 2))(p_753->g_609.s63)).xxyyyyxy, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(p_753->g_610.wyywxzyw)).s16)).xxyx, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(p_753->g_611.xxxy)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_612.yxxy)).lo)))).xyyx, ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))((-8L), 0x2A8BL)).yxxx, ((VECTOR(int16_t, 8))(1L, 0x2A2DL, ((VECTOR(int16_t, 8))(l_613.s496c586b)).s0, ((VECTOR(int16_t, 4))(p_753->g_614.yyyx)), (-1L))).hi))), ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))((-2L), (-1L))))).yxxyxxxy)).s23, ((VECTOR(int16_t, 4))(l_615.s7662)).odd))).xyxxxxyx)).s66, ((VECTOR(int16_t, 2))(l_616.wx))))).xyxy, ((VECTOR(int16_t, 4))(0L, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(p_753->g_617.s43)).xyyxyxyxxxyyyyyx)).s06, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(p_753->g_618.s1637220173137040)).s5b)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(p_753->g_619.s43503743)))).s34))), 0x2E30L)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_620.s3dd0dccd)).s5030735760443130)).sb914)))))).odd, ((VECTOR(int16_t, 16))(p_753->g_621.yxyzyzzxwxzywxyz)).sb4))).xxyy))).yyzwxwzxxyzzxwyx, ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_622.ywyw)).lo)), ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(0L, ((VECTOR(int8_t, 4))(0x04L, 0x1EL, 0x5FL, 0x56L)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x2DL, 1L)))), 1L)).s0146412416677503))).sb9)), ((VECTOR(int8_t, 16))(l_623.s11da29409c04de20)).sef))).xyxyxyyy)).s1273302357257160, ((VECTOR(uint8_t, 16))(p_753->g_624.yxyxyxyxxxxxyxyx))))).s89))).xyyyxxxy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0L, (-1L))).yxxxxyxxyxxxyxxx)).sd8, ((VECTOR(int16_t, 8))(l_625.s45122317)).s42, ((VECTOR(int16_t, 16))(p_753->g_626.s1635303100462510)).s8f))), 0x0013L, 1L)).wwxzyxzz))).s2325041206170616))).s7c7d, ((VECTOR(int16_t, 2))(0x6BBDL, 0x243CL)).yyxx)))))))).hi)).xyyxyxxy))).lo)).w , (safe_add_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s((((((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(l_631.yy)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_632.xyxxxxxxyxyxyyxx)).sb5e2)).odd))))).lo & (+(0L >= ((*l_635) = ((((VECTOR(int32_t, 16))(1L, (safe_lshift_func_uint16_t_u_u(FAKE_DIVERGE(p_753->group_0_offset, get_group_id(0), 10), p_753->g_384.w)), p_9, ((VECTOR(int32_t, 4))(0x01CEC233L)), 6L, ((VECTOR(int32_t, 4))(7L)), ((VECTOR(int32_t, 2))(0x5B20C757L)), 0x05A55A74L, 0x7D8D8445L)).s1 > p_9) & p_9))))) >= p_11) == p_8), 6)) <= p_9), p_9))) != FAKE_DIVERGE(p_753->local_2_offset, get_local_id(2), 10)) , (*l_414)))) && (*l_604)), 0xFA72L)), p_753);
    return p_753->g_586.f1;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_12(uint32_t  p_13, uint8_t  p_14, int64_t  p_15, uint8_t  p_16, int64_t  p_17, struct S4 * p_753)
{ /* block id: 125 */
    int8_t l_412 = (-9L);
    return l_412;
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_66.f5 p_753->g_304 p_753->g_312 p_753->g_314 p_753->g_82 p_753->g_76.f7 p_753->g_76.f3 p_753->g_66.f0 p_753->g_328 p_753->g_171.f3 p_753->g_66.f1 p_753->g_233 p_753->g_279.f7 p_753->g_76.f4 p_753->g_136 p_753->g_344 p_753->g_76.f8 p_753->g_279.f5 p_753->g_143 p_753->g_comm_values p_753->g_279.f8 p_753->g_159 p_753->g_62 p_753->g_66.f4 p_753->g_381 p_753->g_384 p_753->g_387 p_753->g_389 p_753->g_391 p_753->g_279.f2 p_753->g_162 p_753->g_409
 * writes: p_753->g_76.f1 p_753->g_76.f3 p_753->g_172 p_753->g_66.f0 p_753->g_66.f1 p_753->g_79 p_753->l_comm_values p_753->g_66.f5
 */
int16_t  func_32(uint8_t  p_33, uint16_t * p_34, uint64_t  p_35, uint16_t * p_36, uint16_t  p_37, struct S4 * p_753)
{ /* block id: 102 */
    int32_t *l_280 = &p_753->g_66.f5;
    int32_t *l_281 = (void*)0;
    int32_t *l_282 = (void*)0;
    int32_t *l_283 = &p_753->g_66.f0;
    int32_t *l_284 = &p_753->g_66.f5;
    int32_t l_285 = 0x2AA835BAL;
    int32_t l_286 = 0L;
    int32_t *l_287 = &l_286;
    int32_t *l_288 = (void*)0;
    int32_t l_289 = 0x124528D8L;
    int32_t *l_290 = &p_753->g_66.f0;
    int32_t l_291 = 0x3E678D4EL;
    int32_t *l_292[5];
    int64_t l_293 = 0x0527925CABFE9561L;
    int8_t l_294 = (-1L);
    int8_t l_295 = 0x02L;
    uint64_t l_296 = 9UL;
    uint64_t *l_306 = &p_753->g_65;
    uint64_t **l_305 = &l_306;
    VECTOR(int8_t, 2) l_311 = (VECTOR(int8_t, 2))(0x27L, 1L);
    VECTOR(uint8_t, 8) l_313 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xBCL), 0xBCL), 0xBCL, 0UL, 0xBCL);
    int8_t l_339 = 0L;
    int32_t l_368[3][1][5];
    VECTOR(uint8_t, 16) l_375 = (VECTOR(uint8_t, 16))(0xC1L, (VECTOR(uint8_t, 4))(0xC1L, (VECTOR(uint8_t, 2))(0xC1L, 0x98L), 0x98L), 0x98L, 0xC1L, 0x98L, (VECTOR(uint8_t, 2))(0xC1L, 0x98L), (VECTOR(uint8_t, 2))(0xC1L, 0x98L), 0xC1L, 0x98L, 0xC1L, 0x98L);
    VECTOR(uint8_t, 16) l_377 = (VECTOR(uint8_t, 16))(0x04L, (VECTOR(uint8_t, 4))(0x04L, (VECTOR(uint8_t, 2))(0x04L, 0x03L), 0x03L), 0x03L, 0x04L, 0x03L, (VECTOR(uint8_t, 2))(0x04L, 0x03L), (VECTOR(uint8_t, 2))(0x04L, 0x03L), 0x04L, 0x03L, 0x04L, 0x03L);
    VECTOR(uint8_t, 4) l_378 = (VECTOR(uint8_t, 4))(0x04L, (VECTOR(uint8_t, 2))(0x04L, 246UL), 246UL);
    VECTOR(uint8_t, 8) l_379 = (VECTOR(uint8_t, 8))(0x9EL, (VECTOR(uint8_t, 4))(0x9EL, (VECTOR(uint8_t, 2))(0x9EL, 254UL), 254UL), 254UL, 0x9EL, 254UL);
    VECTOR(uint8_t, 4) l_380 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x19L), 0x19L);
    VECTOR(uint8_t, 8) l_382 = (VECTOR(uint8_t, 8))(0xA0L, (VECTOR(uint8_t, 4))(0xA0L, (VECTOR(uint8_t, 2))(0xA0L, 0x30L), 0x30L), 0x30L, 0xA0L, 0x30L);
    VECTOR(uint8_t, 8) l_388 = (VECTOR(uint8_t, 8))(0xDFL, (VECTOR(uint8_t, 4))(0xDFL, (VECTOR(uint8_t, 2))(0xDFL, 0x7CL), 0x7CL), 0x7CL, 0xDFL, 0x7CL);
    VECTOR(uint8_t, 8) l_390 = (VECTOR(uint8_t, 8))(0x81L, (VECTOR(uint8_t, 4))(0x81L, (VECTOR(uint8_t, 2))(0x81L, 247UL), 247UL), 247UL, 0x81L, 247UL);
    uint16_t l_392 = 65526UL;
    uint16_t *l_398 = (void*)0;
    uint16_t **l_397[4][8][4] = {{{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398}},{{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398}},{{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398}},{{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398},{&l_398,&l_398,&l_398,&l_398}}};
    VECTOR(uint64_t, 4) l_406 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0UL), 0UL);
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_292[i] = &l_285;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
                l_368[i][j][k] = 0x5F769661L;
        }
    }
    ++l_296;
    if ((*l_284))
    { /* block id: 104 */
        uint64_t *l_302 = &p_753->g_42;
        uint64_t **l_301[9][10] = {{(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302},{(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302},{(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302},{(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302},{(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302},{(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302},{(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302},{(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302},{(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302,&l_302,(void*)0,(void*)0,&l_302}};
        uint64_t ***l_303 = &l_301[6][0];
        VECTOR(int32_t, 4) l_319 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x51DF2674L), 0x51DF2674L);
        int16_t *l_320[3];
        struct S2 l_323 = {0xCD71CD6CL,{0x3119FB8AL,0L,1L,0UL,0x34D8D64DL,4L,3UL,0x1A20B9E2L,0x47CA086378EC4393L},0x2799L};
        VECTOR(int32_t, 8) l_329 = (VECTOR(int32_t, 8))(0x2CA2B7A8L, (VECTOR(int32_t, 4))(0x2CA2B7A8L, (VECTOR(int32_t, 2))(0x2CA2B7A8L, 0x14FA723DL), 0x14FA723DL), 0x14FA723DL, 0x2CA2B7A8L, 0x14FA723DL);
        uint32_t *l_334 = &p_753->g_238;
        int32_t **l_340 = (void*)0;
        int32_t **l_341[6][1][4] = {{{&l_292[2],(void*)0,&l_292[2],&l_292[2]}},{{&l_292[2],(void*)0,&l_292[2],&l_292[2]}},{{&l_292[2],(void*)0,&l_292[2],&l_292[2]}},{{&l_292[2],(void*)0,&l_292[2],&l_292[2]}},{{&l_292[2],(void*)0,&l_292[2],&l_292[2]}},{{&l_292[2],(void*)0,&l_292[2],&l_292[2]}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_320[i] = &p_753->g_141;
        (*l_287) |= ((*l_283) |= (safe_mul_func_int16_t_s_s(((((((*l_303) = l_301[6][0]) != (p_753->g_304 , l_305)) >= (safe_div_func_int16_t_s_s((p_753->g_172.y = (safe_lshift_func_int16_t_s_s((+(p_753->g_76[5][4].f3 &= ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))(l_311.xxxyyyyy)).odd, ((VECTOR(uint8_t, 2))(p_753->g_312.yy)).yyxx))).odd, (int16_t)(p_753->g_76[5][4].f1 = 0x68BFL), (int16_t)((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((0x7BEF80A26F176BC0L <= (-1L)), (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0UL, 0xF11B2B3DL)), 0xAF9D7308L, 4294967287UL, ((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 16))(abs(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(0x57L, 246UL, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x20L, 249UL)), 0x77L, 249UL)), ((VECTOR(uint8_t, 4))(0x1BL, 0UL, 0xACL, 1UL)))), ((VECTOR(uint8_t, 2))(l_313.s62)), 1UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(p_753->g_314.yx)))), 0xA8L)).s61)).yxxxxxxx)).s66, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 2))(255UL, 0UL)).xxyyyyxxxyxxyyyx))).s74, ((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 16))(((FAKE_DIVERGE(p_753->local_1_offset, get_local_id(1), 10) , p_753->g_82) > ((safe_sub_func_int64_t_s_s((((safe_lshift_func_int16_t_s_s(((p_37 && 0x519BC063194C8E7FL) < l_319.z), p_35)) && p_753->g_76[5][4].f7) && l_319.x), 18446744073709551614UL)) ^ 65532UL)), ((VECTOR(uint8_t, 4))(0x5FL)), ((VECTOR(uint8_t, 2))(0x48L)), 0x1BL, p_37, 0x9DL, ((VECTOR(uint8_t, 2))(255UL)), ((VECTOR(uint8_t, 4))(0x0DL)))), ((VECTOR(uint8_t, 16))(7UL)), ((VECTOR(uint8_t, 16))(0x16L))))).s48))).xyyyxyxxyxxxxxxy)).s7c, ((VECTOR(uint8_t, 2))(0xDEL)), ((VECTOR(uint8_t, 2))(0x85L))))).yxyxyyxxyxyxxxxy)).s7b))).xxxxxxyyxyxxxxxy, ((VECTOR(uint16_t, 16))(0xA458L))))).s21)).xxyxxyxxyyxxyyxx))).s55, ((VECTOR(uint32_t, 2))(1UL))))), 2UL, 4294967292UL)).s5 , (*l_280)), 0x7C90L, 0x4C12L, 0x4AA6L, 0x1815L, 7L, 0L)))).s1))).even)), p_35))), p_35))) == p_37) != p_37), p_37)));
        (*l_283) |= (safe_add_func_uint32_t_u_u((l_323 , (safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), 1UL))), (safe_mod_func_int16_t_s_s(((p_753->g_328 , (p_35 >= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_329.s0275)), ((VECTOR(int32_t, 2))(0x2839A542L, 0x3A96139CL)), (-1L), 8L)).s0)) , (safe_rshift_func_uint16_t_u_s((!(safe_sub_func_uint16_t_u_u((((p_37 , (l_323 , ((l_282 = ((*p_753->g_233) = (l_288 = func_45(&p_753->g_42, l_334, (FAKE_DIVERGE(p_753->local_0_offset, get_local_id(0), 10) <= (((((safe_add_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s((0x69L ^ p_37), 1)), p_35)) , p_35) && p_753->g_171[1][1].f3) <= p_753->g_66.f1) == l_339)), p_753)))) != &l_291))) == p_37) & p_753->g_279.f7), p_753->g_76[5][4].f4))), p_33))), p_753->g_136))));
    }
    else
    { /* block id: 115 */
        uint64_t **l_367 = &l_306;
        int32_t l_369 = 0x1B235E8EL;
        int32_t l_370 = 0x7B27DDE4L;
        VECTOR(uint8_t, 8) l_376 = (VECTOR(uint8_t, 8))(0x91L, (VECTOR(uint8_t, 4))(0x91L, (VECTOR(uint8_t, 2))(0x91L, 0UL), 0UL), 0UL, 0x91L, 0UL);
        VECTOR(uint8_t, 4) l_383 = (VECTOR(uint8_t, 4))(0x3DL, (VECTOR(uint8_t, 2))(0x3DL, 255UL), 255UL);
        VECTOR(uint8_t, 8) l_385 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xEBL), 0xEBL), 0xEBL, 1UL, 0xEBL);
        VECTOR(int8_t, 8) l_386 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x22L), 0x22L), 0x22L, 0L, 0x22L);
        uint16_t **l_400 = (void*)0;
        uint16_t ***l_399 = &l_400;
        int64_t *l_401 = (void*)0;
        int64_t *l_402 = (void*)0;
        int64_t *l_403 = (void*)0;
        int64_t *l_404 = (void*)0;
        int64_t *l_405 = (void*)0;
        int64_t **l_410 = &l_404;
        int i;
        (*l_290) |= (safe_add_func_uint8_t_u_u((p_753->g_344 , 0xEFL), (p_753->g_76[5][4].f8 | ((((safe_lshift_func_int16_t_s_u((p_37 == 0x1C70C22FL), 15)) <= ((safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint64_t_u_u(((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(p_753->g_328.f7, ((p_753->g_279.f5 , 0L) , ((+(safe_mul_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u((l_369 = (((safe_mul_func_int8_t_s_s(((safe_add_func_int64_t_s_s((((((((((&p_753->g_96[2] != l_367) <= p_35) < l_368[1][0][3]) >= GROUP_DIVERGE(2, 1)) , 0UL) , p_33) == 0x5776FC09L) ^ 0x083EL) , p_753->g_143), p_753->g_comm_values[p_753->tid])) < p_753->g_328.f1), p_37)) < p_753->g_279.f8) > p_37)), 0x40B15052L)) , 0xFB77L), 0xDD25L))) < l_370)))), 3)), p_753->g_76[5][4].f3)) , 0xE966CF98FDA34998L), (*l_280))) & p_753->g_159.x) , p_35), p_35)) && p_753->g_62.s7)) >= p_33) < p_753->g_66.f4))));
        (*l_280) = (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(65535UL, 0x26E8L)).xxxx)).z || ((safe_add_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(l_375.s4c)).xyyx, ((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 4))(l_376.s7650)).lo, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_377.saaad10db)))).s11))))).xxxy, ((VECTOR(uint8_t, 16))(p_33, ((VECTOR(uint8_t, 4))(l_378.zzxw)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 4))(l_379.s2142)).wwyzyxyxzzxwxxyw, ((VECTOR(uint8_t, 8))(l_380.xzyxzwxx)).s6757046146046601))).lo, ((VECTOR(uint8_t, 4))(0x43L, ((VECTOR(uint8_t, 2))(0x1BL, 0xBDL)), 4UL)).xwwyyxxz, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 4))(p_753->g_381.wzww)).lo))).yyyx)).wxxyyywy))).s51)).even, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_382.s5373202674335210)).sc0)), 255UL, 8UL)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_383.wzxzywzwywzwwxzz)).s6f)), p_753->g_136, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(0x1CL, ((VECTOR(uint8_t, 4))(p_753->g_384.zxyw)), ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 8))(6UL, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_385.s3537115301304170)).sf706)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 16))(l_386.s4436064323714115)).s862c, ((VECTOR(int8_t, 2))(p_753->g_387.s72)).xyyy))).yyzzxyzz)).even))), ((VECTOR(uint8_t, 2))(l_388.s14)), 1UL)).s2260357552651652, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0xB7L, 3UL)), 0xDCL, 0xEEL)).lo)).yxyxyyyxyxxyyxxx))).odd, ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(p_753->g_389.s7ec118f731abcce2)).sca)).yxxx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 2))(l_390.s61)).xyxxyxyxyxxxxxyy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 4))(p_753->g_391.yyyx)).even, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(253UL, 6UL, 1UL, ((VECTOR(uint8_t, 4))(254UL, l_392, 0x38L, 0x71L)), 0x50L, (safe_sub_func_int32_t_s_s(((((((*l_410) = ((((p_753->l_comm_values[(safe_mod_func_uint32_t_u_u(p_753->tid, 17))] = (((safe_add_func_int16_t_s_s(l_370, l_386.s3)) || GROUP_DIVERGE(1, 1)) && (l_397[3][1][0] == ((*l_399) = &p_34)))) & ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 16))(0x61DAAAD415CB8369L, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_406.zzwx)), ((((safe_sub_func_uint16_t_u_u((p_753->g_279.f2 , p_753->g_162.x), 0x868AL)) & p_37) == l_369) == l_385.s0), ((VECTOR(uint64_t, 2))(1UL)), 18446744073709551612UL)), 0x161EEFCCB8EF837CL, ((VECTOR(uint64_t, 4))(0xAFFF9B6AF0F9DC94L)), 0xE551544BEED0B100L, 0x58CCCA1DE5EF36D9L)), ((VECTOR(uint64_t, 16))(7UL))))).s02)).xxyyxxxy)).s1) , p_37) , p_753->g_409[0][0][5])) != &l_293) || FAKE_DIVERGE(p_753->global_0_offset, get_global_id(0), 10)) >= l_386.s2) <= p_37), l_385.s2)), ((VECTOR(uint8_t, 2))(0x20L)), ((VECTOR(uint8_t, 2))(8UL)), p_753->g_76[5][4].f4, 6UL, 253UL)))).sb8))).yxxyyxxy)), ((VECTOR(uint8_t, 4))(252UL)), ((VECTOR(uint8_t, 4))(0x3CL))))))).s9e20))))).yzxxwxwy))), ((VECTOR(uint8_t, 8))(0x04L)), ((VECTOR(uint8_t, 8))(255UL))))).s20, ((VECTOR(uint8_t, 2))(0xF0L))))), 0x9BL)).s36)), 255UL)).sfe9a))).yyyxyyzzxwzxwwyw)).s7, p_35)) , 0x65L) && GROUP_DIVERGE(1, 1)) | 0xA0436DDAB2FE517EL), 0x3DACBE4AL)) & GROUP_DIVERGE(2, 1)));
    }
    return p_33;
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_171.f1 p_753->g_76.f1 p_753->g_226.f6 p_753->g_265 p_753->g_171.f0 p_753->g_173 p_753->g_76.f4 p_753->g_66.f8 p_753->g_279
 * writes: p_753->g_76.f1 p_753->g_71 p_753->g_65
 */
struct S0  func_43(uint32_t * p_44, struct S4 * p_753)
{ /* block id: 95 */
    int64_t l_241 = 9L;
    VECTOR(int64_t, 8) l_244 = (VECTOR(int64_t, 8))(9L, (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 9L), 9L), 9L, 9L, 9L);
    int32_t **l_245 = &p_753->g_79;
    struct S2 l_248[2] = {{1UL,{-1L,0x5FL,0x5162L,9UL,-1L,0x203FE1B8L,1UL,0x65F10319L,0xE1A1A6C9B00F3D2DL},65528UL},{1UL,{-1L,0x5FL,0x5162L,9UL,-1L,0x203FE1B8L,1UL,0x65F10319L,0xE1A1A6C9B00F3D2DL},65528UL}};
    int16_t *l_259 = (void*)0;
    int16_t *l_260 = &p_753->g_76[5][4].f1;
    uint16_t l_266 = 0x2924L;
    int8_t *l_267 = &p_753->g_71[0][2][3];
    int64_t *l_268 = (void*)0;
    int64_t *l_269 = (void*)0;
    int64_t *l_270 = (void*)0;
    int64_t *l_271 = (void*)0;
    int64_t *l_272 = (void*)0;
    int64_t *l_273 = (void*)0;
    int64_t *l_274 = (void*)0;
    int64_t *l_275 = (void*)0;
    int64_t *l_276[10] = {(void*)0,&l_241,(void*)0,&l_241,(void*)0,(void*)0,&l_241,(void*)0,&l_241,(void*)0};
    int32_t l_277 = 1L;
    uint64_t *l_278 = &p_753->g_65;
    int i;
    l_248[0].f1.f5 = (((safe_sub_func_int64_t_s_s(l_241, ((*l_278) = ((GROUP_DIVERGE(0, 1) , (safe_add_func_int8_t_s_s((((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_244.s41065413)).s6167436246133503)).hi)).s5 <= ((l_245 == &p_753->g_73) | ((safe_mod_func_int64_t_s_s((l_248[0] , (~p_753->g_171[1][1].f1)), (l_277 = (safe_rshift_func_uint8_t_u_s(((((VECTOR(uint8_t, 8))((safe_sub_func_int64_t_s_s(l_248[0].f1.f0, (safe_mul_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u(((*l_260) |= (safe_lshift_func_uint16_t_u_u(1UL, 0))), 9)) <= ((*l_267) = ((safe_rshift_func_uint16_t_u_u(p_753->g_226.f6, (safe_rshift_func_int16_t_s_s(((p_753->g_265[5] >= p_753->g_171[1][1].f0) <= l_266), p_753->g_171[1][1].f1)))) > 0x516B0B04B00DE351L))), l_248[0].f1.f5)))), p_753->g_173.x, 0x00L, p_753->g_76[5][4].f4, GROUP_DIVERGE(2, 1), 0x6DL, 0x40L, 0UL)).s7 > l_244.s4) >= 1UL), 6))))) >= p_753->g_66.f8))), 0x03L))) >= l_248[0].f1.f2)))) || p_753->g_173.x) >= 2L);
    return p_753->g_279;
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_66.f1 p_753->g_233
 * writes: p_753->g_66.f1 p_753->g_79
 */
uint32_t * func_45(uint64_t * p_46, uint32_t * p_47, int32_t  p_48, struct S4 * p_753)
{ /* block id: 85 */
    int32_t l_235 = (-1L);
    int32_t l_236 = 1L;
    uint32_t *l_237 = &p_753->g_238;
    for (p_753->g_66.f1 = 0; (p_753->g_66.f1 == 28); ++p_753->g_66.f1)
    { /* block id: 88 */
        int32_t *l_230 = &p_753->g_82;
        int32_t **l_232 = (void*)0;
        int32_t **l_234 = &p_753->g_79;
        (*p_753->g_233) = l_230;
        (*l_234) = p_47;
        if (p_48)
            continue;
    }
    l_236 ^= l_235;
    return l_237;
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_201 p_753->g_202 p_753->g_comm_values p_753->g_171.f3 p_753->g_203 p_753->g_224 p_753->g_226
 * writes: p_753->g_66.f2 p_753->g_216 p_753->g_224 p_753->g_226
 */
uint64_t * func_49(uint8_t  p_50, int32_t  p_51, struct S4 * p_753)
{ /* block id: 76 */
    int32_t *l_197 = &p_753->g_66.f5;
    VECTOR(int8_t, 4) l_200 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x48L), 0x48L);
    VECTOR(int8_t, 4) l_204 = (VECTOR(int8_t, 4))(0x5DL, (VECTOR(int8_t, 2))(0x5DL, 0x3BL), 0x3BL);
    int16_t *l_211 = &p_753->g_66.f2;
    int8_t *l_214 = &p_753->g_66.f1;
    int8_t **l_215[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t *l_217 = (void*)0;
    int64_t *l_218 = (void*)0;
    int64_t *l_219 = (void*)0;
    int64_t *l_220 = (void*)0;
    int64_t *l_221 = (void*)0;
    int32_t l_222 = (-1L);
    int32_t l_223 = 2L;
    volatile struct S3 *l_225 = &p_753->g_224;
    volatile struct S0 *l_227[2][2];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_227[i][j] = &p_753->g_226;
    }
    l_197 = (void*)0;
    l_223 |= (safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 8))((-1L), ((VECTOR(int8_t, 4))(l_200.yyyy)), ((VECTOR(int8_t, 2))(p_753->g_201.s27)), 0L)).odd, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(255UL, 0x2AL)).xyxy)), ((VECTOR(uint8_t, 8))(p_753->g_202.sa47cb311)), (p_753->g_comm_values[p_753->tid] == ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(1L, 0x48L)), 0x48L, (-1L))).zzxwwzwzzyxxzxyx, (int8_t)p_753->g_171[1][1].f3))).s0b, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0L, 0x11L)).xxxxxyxy)).s31, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(0x11L, (-1L))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(p_753->g_203.yxzzywxw)).s61, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_204.wxxzzzzzzwwxyzwz)))).sd5))), (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((p_51 , (safe_sub_func_int16_t_s_s(((*l_211) = (((((VECTOR(uint32_t, 2))(0x9229954BL, 8UL)).hi <= GROUP_DIVERGE(2, 1)) >= 0x6963DF35F916B465L) > (-1L))), (safe_sub_func_int64_t_s_s((l_197 == l_197), (l_222 = ((65533UL < ((p_753->g_216[3][1][9] = l_214) == (void*)0)) <= p_50))))))), 0x556C0729L)), (-2L))), 0x66L, 0x5DL, p_50, ((VECTOR(int8_t, 8))((-1L))), (-1L), 0L)))).sfb)))))))).xxyyxyxx)).s3), ((VECTOR(uint8_t, 2))(0x26L)), 0xB3L)).hi)).hi))).y, 6));
    (*l_225) = p_753->g_224;
    p_753->g_226 = p_753->g_226;
    return l_219;
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_189 p_753->g_62
 * writes: p_753->g_189 p_753->g_66.f5
 */
struct S1  func_52(uint16_t * p_53, int32_t  p_54, struct S4 * p_753)
{ /* block id: 70 */
    int32_t *l_183 = (void*)0;
    int32_t *l_184 = &p_753->g_66.f0;
    int32_t *l_185 = &p_753->g_66.f5;
    int32_t *l_186 = (void*)0;
    int32_t *l_187 = &p_753->g_82;
    int32_t *l_188[1];
    int64_t l_192 = 7L;
    uint32_t l_193 = 0x43206E70L;
    struct S1 l_196 = {-1L,9L,0x4D40L,0UL,0x0F3F0D8EL,4L,0xDBADD14FL,0x25E73E8AL,18446744073709551608UL};
    int i;
    for (i = 0; i < 1; i++)
        l_188[i] = (void*)0;
    l_184 = l_183;
    p_753->g_189++;
    (*l_185) = (p_753->g_62.s3 < 0x0C65C01DDEBC7243L);
    l_193--;
    return l_196;
}


/* ------------------------------------------ */
/* 
 * reads : p_753->g_71 p_753->g_73 p_753->g_66.f0 p_753->g_66.f2 p_753->g_76 p_753->g_94 p_753->g_66.f7 p_753->g_129 p_753->g_136 p_753->g_143 p_753->g_117 p_753->g_159 p_753->g_162 p_753->g_165 p_753->g_97 p_753->g_171 p_753->g_172 p_753->g_173 p_753->g_65
 * writes: p_753->g_66.f1 p_753->g_71 p_753->g_66.f0 p_753->g_66.f2 p_753->g_79 p_753->g_73 p_753->g_88 p_753->l_comm_values p_753->g_136 p_753->g_143 p_753->g_117 p_753->g_182
 */
uint16_t * func_55(struct S1  p_56, struct S4 * p_753)
{ /* block id: 9 */
    uint32_t l_69 = 0x594A5162L;
    int8_t *l_70 = &p_753->g_71[0][2][3];
    int8_t l_72 = 0L;
    int32_t l_83 = (-10L);
    int32_t **l_87[2];
    uint64_t *l_91 = &p_753->g_65;
    uint64_t **l_90[7][2] = {{&l_91,&l_91},{&l_91,&l_91},{&l_91,&l_91},{&l_91,&l_91},{&l_91,&l_91},{&l_91,&l_91},{&l_91,&l_91}};
    uint64_t ***l_89 = &l_90[3][1];
    VECTOR(int16_t, 4) l_106 = (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, (-3L)), (-3L));
    VECTOR(int8_t, 4) l_112 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x57L), 0x57L);
    VECTOR(int8_t, 8) l_160 = (VECTOR(int8_t, 8))(0x0CL, (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, 0x0EL), 0x0EL), 0x0EL, 0x0CL, 0x0EL);
    int32_t *l_179 = (void*)0;
    int i, j;
    for (i = 0; i < 2; i++)
        l_87[i] = &p_753->g_79;
    (*p_753->g_73) &= ((0x3E5B6057L != (((*l_70) |= (p_753->g_66.f1 = (safe_div_func_uint8_t_u_u(((p_56.f6 , &p_753->g_65) != &p_753->g_65), l_69)))) & 0x19L)) , l_72);
    for (p_753->g_66.f2 = 0; (p_753->g_66.f2 != 21); p_753->g_66.f2 = safe_add_func_uint64_t_u_u(p_753->g_66.f2, 5))
    { /* block id: 15 */
        int32_t *l_78 = &p_753->g_66.f5;
        int32_t **l_77[2];
        int i;
        for (i = 0; i < 2; i++)
            l_77[i] = &l_78;
        p_753->g_73 = (p_753->g_76[5][4] , (p_753->g_79 = (p_56 , (void*)0)));
        for (l_69 = 0; (l_69 == 37); l_69 = safe_add_func_uint8_t_u_u(l_69, 3))
        { /* block id: 20 */
            uint64_t l_84 = 1UL;
            --l_84;
            p_753->g_88 = l_87[1];
        }
    }
    (*l_89) = (void*)0;
    for (l_83 = (-18); (l_83 >= (-21)); l_83 = safe_sub_func_uint16_t_u_u(l_83, 7))
    { /* block id: 28 */
        uint64_t *l_109 = &p_753->g_65;
        VECTOR(int32_t, 8) l_110 = (VECTOR(int32_t, 8))(0x5EF2A897L, (VECTOR(int32_t, 4))(0x5EF2A897L, (VECTOR(int32_t, 2))(0x5EF2A897L, 6L), 6L), 6L, 0x5EF2A897L, 6L);
        VECTOR(int8_t, 16) l_111 = (VECTOR(int8_t, 16))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x5EL), 0x5EL), 0x5EL, (-10L), 0x5EL, (VECTOR(int8_t, 2))((-10L), 0x5EL), (VECTOR(int8_t, 2))((-10L), 0x5EL), (-10L), 0x5EL, (-10L), 0x5EL);
        int64_t *l_113 = (void*)0;
        int64_t *l_114 = (void*)0;
        int64_t *l_115[2];
        VECTOR(int8_t, 16) l_163 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 4L), 4L), 4L, (-1L), 4L, (VECTOR(int8_t, 2))((-1L), 4L), (VECTOR(int8_t, 2))((-1L), 4L), (-1L), 4L, (-1L), 4L);
        VECTOR(int8_t, 8) l_164 = (VECTOR(int8_t, 8))(0x58L, (VECTOR(int8_t, 4))(0x58L, (VECTOR(int8_t, 2))(0x58L, 0x04L), 0x04L), 0x04L, 0x58L, 0x04L);
        VECTOR(uint8_t, 8) l_174 = (VECTOR(uint8_t, 8))(0xC1L, (VECTOR(uint8_t, 4))(0xC1L, (VECTOR(uint8_t, 2))(0xC1L, 0x6BL), 0x6BL), 0x6BL, 0xC1L, 0x6BL);
        int32_t *l_177 = &p_753->g_66.f5;
        struct S3 *l_180 = &p_753->g_171[1][1];
        int i;
        for (i = 0; i < 2; i++)
            l_115[i] = (void*)0;
        if ((((*l_70) = ((void*)0 == p_753->g_94)) > (safe_mod_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(1UL, (safe_mul_func_int8_t_s_s(p_753->g_66.f7, (safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 4))(l_106.yyzx)).yywwwyyxwwyxxwzz))).s9cdd)).x, p_753->g_76[5][4].f1)))))), (p_753->l_comm_values[(safe_mod_func_uint32_t_u_u(p_753->tid, 17))] = (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((l_109 == l_109) && l_110.s4), 0x79L, ((VECTOR(int8_t, 8))(l_111.saa75bc96)), ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x52L, 0L)), ((VECTOR(int8_t, 2))(l_112.yx)).odd, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-3L), 0L)))), (-4L), 0x6DL, (-4L))).s04, ((VECTOR(int8_t, 16))(0x1BL, 1L, 0x2CL, p_753->g_76[5][4].f5, (-1L), ((VECTOR(int8_t, 2))(0x45L)), 4L, 0x35L, l_111.s3, 0x48L, ((VECTOR(int8_t, 2))(0x5DL)), (-8L), 1L, 0x4EL)).sa2, ((VECTOR(int8_t, 2))(0x62L))))), ((VECTOR(int8_t, 4))(1L)))).s2a)), ((VECTOR(int8_t, 2))(0x5AL))))).odd, p_56.f0)))))))
        { /* block id: 31 */
            uint16_t *l_116[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_122 = 0x54029CE5L;
            VECTOR(int64_t, 16) l_128 = (VECTOR(int64_t, 16))((-8L), (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), (-4L)), (-4L)), (-4L), (-8L), (-4L), (VECTOR(int64_t, 2))((-8L), (-4L)), (VECTOR(int64_t, 2))((-8L), (-4L)), (-8L), (-4L), (-8L), (-4L));
            VECTOR(int16_t, 8) l_156 = (VECTOR(int16_t, 8))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x202AL), 0x202AL), 0x202AL, (-9L), 0x202AL);
            VECTOR(uint16_t, 16) l_158 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x7179L), 0x7179L), 0x7179L, 1UL, 0x7179L, (VECTOR(uint16_t, 2))(1UL, 0x7179L), (VECTOR(uint16_t, 2))(1UL, 0x7179L), 1UL, 0x7179L, 1UL, 0x7179L);
            VECTOR(int8_t, 16) l_161 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x44L), 0x44L), 0x44L, (-1L), 0x44L, (VECTOR(int8_t, 2))((-1L), 0x44L), (VECTOR(int8_t, 2))((-1L), 0x44L), (-1L), 0x44L, (-1L), 0x44L);
            int32_t l_178 = 0x40D81AC1L;
            int i;
            if (((void*)0 != l_116[5]))
            { /* block id: 32 */
                int16_t l_120 = (-1L);
                int32_t l_121 = 0x11A3FCECL;
                for (p_56.f5 = 0; (p_56.f5 > 27); p_56.f5++)
                { /* block id: 35 */
                    uint32_t l_123[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_123[i] = 3UL;
                    --l_123[1];
                    p_56.f0 ^= (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 8))(0x24C94F83D7E1829CL, 0L, ((VECTOR(int64_t, 2))(l_128.sab)), ((VECTOR(int64_t, 2))(p_753->g_129.s37)), 0x0EDED3E824FAA815L, 1L)).s7, 0x6E4592D3BF737D9CL));
                }
            }
            else
            { /* block id: 39 */
                uint8_t *l_135 = &p_753->g_136;
                uint8_t *l_142 = &p_753->g_143;
                VECTOR(int16_t, 8) l_157 = (VECTOR(int16_t, 8))(0x3D2BL, (VECTOR(int16_t, 4))(0x3D2BL, (VECTOR(int16_t, 2))(0x3D2BL, 0x498AL), 0x498AL), 0x498AL, 0x3D2BL, 0x498AL);
                int32_t l_168 = 0x21C156C5L;
                struct S3 **l_181 = &l_180;
                int i;
                if ((atomic_inc(&p_753->l_atomic_input[6]) == 6))
                { /* block id: 41 */
                    uint16_t l_132 = 0UL;
                    uint16_t *l_131 = &l_132;
                    uint16_t **l_130[10][2][6] = {{{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0},{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0}},{{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0},{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0}},{{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0},{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0}},{{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0},{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0}},{{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0},{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0}},{{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0},{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0}},{{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0},{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0}},{{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0},{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0}},{{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0},{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0}},{{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0},{&l_131,&l_131,&l_131,&l_131,&l_131,(void*)0}}};
                    int i, j, k;
                    l_130[8][0][3] = (void*)0;
                    unsigned int result = 0;
                    result += l_132;
                    atomic_add(&p_753->l_special_values[6], result);
                }
                else
                { /* block id: 43 */
                    (1 + 1);
                }
                atomic_or(&p_753->g_atomic_reduction[get_linear_group_id()], ((safe_sub_func_uint8_t_u_u(((*l_135)++), GROUP_DIVERGE(1, 1))) | (safe_mod_func_uint8_t_u_u((--(*l_142)), (safe_rshift_func_int8_t_s_s(0x42L, 3))))));
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_753->v_collective += p_753->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if ((safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(0, 1), (safe_lshift_func_uint8_t_u_s(((++p_753->g_117) <= ((safe_add_func_int16_t_s_s((p_56.f7 >= (((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((-7L), ((VECTOR(int16_t, 2))(l_156.s50)), 6L, ((VECTOR(int16_t, 4))(l_157.s1413)))))).s66, ((VECTOR(int16_t, 2))((-1L), 0x41C1L))))).xxxyyyxy)).s5 > 0xAB73L)), (l_110.s7 = ((VECTOR(uint16_t, 8))(l_158.s7351a84e)).s5))) <= (l_122 = (((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(0x53L, 0x5EL)))), 0xD9L, 0x29L)).zzwxwwwxxzxzyzwy)).s8 & 0x0AL)))), ((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 2))(p_753->g_159.yx)).yxyxyxxxxxyxyyxy, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_160.s0717335565447337)).s9d)).xyyx)).wywyyywzwwzxzzzw))).s1cbb)).wzzwxxxw, ((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 8))(l_161.sc8c8fa0c)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(p_753->g_162.xxyxyxyy)).lo, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_163.s1f)), (-1L), 1L)), ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 16))(l_164.s7774043350740321)), ((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(p_753->g_165.zywzwxwxxwxzwwww)).s9b, ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 16))(l_161.s6, 0x0BL, (safe_mul_func_int8_t_s_s(((~p_753->g_129.s1) | l_161.sd), (((l_168 = l_156.s2) , (8L & p_56.f8)) , 0xFDL))), ((VECTOR(int8_t, 2))(0x46L)), p_753->g_162.y, p_753->g_97.sa, 1L, 0x76L, ((VECTOR(int8_t, 2))(0x0EL)), 0x67L, (-2L), ((VECTOR(int8_t, 2))(0x7FL)), (-1L))).even, ((VECTOR(int8_t, 8))(0x19L)), ((VECTOR(int8_t, 8))(0x77L))))).s52))).xxxxyyyx, (int8_t)l_164.s7))).s0707063601077724))).s35ba))).hi)).yxxyyyyy))).hi, ((VECTOR(int8_t, 4))((-10L)))))).yzyxxyyy))).s5)))))
                { /* block id: 53 */
                    p_56.f0 = l_156.s1;
                    if (l_156.s5)
                        continue;
                }
                else
                { /* block id: 56 */
                    l_178 = (safe_add_func_uint16_t_u_u((p_753->g_171[1][1] , ((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(p_753->g_172.yxyyxxxyyxxxyyyy)))).s0 && p_753->g_76[5][4].f7) == (((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(p_753->g_173.yxxxxyxyyxxyxxxy)).s87d5)).wyyzxwyxzwxzzxwx)).sf9)).hi > 0x0527ECB843A2382EL))), (((((0x05EAL && ((-5L) | p_753->g_162.y)) != (((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 16))(l_174.s3610361405251305)).hi, (uint8_t)(safe_mul_func_int16_t_s_s(((l_177 = &l_168) != (void*)0), p_753->g_65))))), ((VECTOR(uint8_t, 8))(0xDDL)), ((VECTOR(uint8_t, 8))(253UL))))).lo)).lo, ((VECTOR(uint8_t, 2))(0x9DL))))).yxyx, ((VECTOR(uint8_t, 4))(0x8DL))))).wzyzxwzwyyyyzyzz, ((VECTOR(uint16_t, 16))(0xF9DCL))))).sf >= p_753->g_143)) < p_56.f2) , p_56.f5) | FAKE_DIVERGE(p_753->global_1_offset, get_global_id(1), 10))));
                    if (p_56.f2)
                        break;
                    p_753->g_73 = l_179;
                }
                p_753->g_182[0] = ((*l_181) = l_180);
            }
        }
        else
        { /* block id: 65 */
            return &p_753->g_117;
        }
    }
    return &p_753->g_117;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[18];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 18; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[18];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 18; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[17];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 17; i++)
            l_comm_values[i] = 1;
    struct S4 c_754;
    struct S4* p_753 = &c_754;
    struct S4 c_755 = {
        0x0F620A3418EB0BADL, // p_753->g_21
        65535UL, // p_753->g_31
        0x718CE68266C0953BL, // p_753->g_42
        (void*)0, // p_753->g_59
        (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int16_t, 2))(0L, 0L), (VECTOR(int16_t, 2))(0L, 0L), 0L, 0L, 0L, 0L), // p_753->g_62
        3UL, // p_753->g_65
        {1L,-1L,0x6C18L,0x8E342BA5L,0x7386F731L,0x6105796DL,9UL,0x7D543CBDL,0x12577EDFD6319DC0L}, // p_753->g_66
        {{{0x5CL,0x4BL,0x5CL,0x5CL,0x4BL},{0x5CL,0x4BL,0x5CL,0x5CL,0x4BL},{0x5CL,0x4BL,0x5CL,0x5CL,0x4BL},{0x5CL,0x4BL,0x5CL,0x5CL,0x4BL},{0x5CL,0x4BL,0x5CL,0x5CL,0x4BL},{0x5CL,0x4BL,0x5CL,0x5CL,0x4BL}}}, // p_753->g_71
        &p_753->g_66.f0, // p_753->g_73
        {{{0x65D8L,0x15DFL,-1L,-1L,0x53BC2F6D6459F139L,0x14463E91B5B2358AL,6UL,4294967289UL,0x41DFL},{0x65D8L,0x15DFL,-1L,-1L,0x53BC2F6D6459F139L,0x14463E91B5B2358AL,6UL,4294967289UL,0x41DFL},{2L,0x7F7BL,0x3F607BB088A057ECL,0x5548L,1L,6L,5UL,1UL,0x0707L},{0x76B0L,0x2B19L,0x69D4055D0160B5C0L,-1L,0x033E316ED2767F92L,0x71DF8105A18A5C64L,0x5FL,4294967295UL,0x3C0CL},{0x5994L,0x07C2L,0x7DDE4D78B1D69833L,0x02E3L,0x7915BDED785604A1L,0x5305F7132E5439C8L,253UL,0UL,0x3BE4L}},{{0x65D8L,0x15DFL,-1L,-1L,0x53BC2F6D6459F139L,0x14463E91B5B2358AL,6UL,4294967289UL,0x41DFL},{0x65D8L,0x15DFL,-1L,-1L,0x53BC2F6D6459F139L,0x14463E91B5B2358AL,6UL,4294967289UL,0x41DFL},{2L,0x7F7BL,0x3F607BB088A057ECL,0x5548L,1L,6L,5UL,1UL,0x0707L},{0x76B0L,0x2B19L,0x69D4055D0160B5C0L,-1L,0x033E316ED2767F92L,0x71DF8105A18A5C64L,0x5FL,4294967295UL,0x3C0CL},{0x5994L,0x07C2L,0x7DDE4D78B1D69833L,0x02E3L,0x7915BDED785604A1L,0x5305F7132E5439C8L,253UL,0UL,0x3BE4L}},{{0x65D8L,0x15DFL,-1L,-1L,0x53BC2F6D6459F139L,0x14463E91B5B2358AL,6UL,4294967289UL,0x41DFL},{0x65D8L,0x15DFL,-1L,-1L,0x53BC2F6D6459F139L,0x14463E91B5B2358AL,6UL,4294967289UL,0x41DFL},{2L,0x7F7BL,0x3F607BB088A057ECL,0x5548L,1L,6L,5UL,1UL,0x0707L},{0x76B0L,0x2B19L,0x69D4055D0160B5C0L,-1L,0x033E316ED2767F92L,0x71DF8105A18A5C64L,0x5FL,4294967295UL,0x3C0CL},{0x5994L,0x07C2L,0x7DDE4D78B1D69833L,0x02E3L,0x7915BDED785604A1L,0x5305F7132E5439C8L,253UL,0UL,0x3BE4L}},{{0x65D8L,0x15DFL,-1L,-1L,0x53BC2F6D6459F139L,0x14463E91B5B2358AL,6UL,4294967289UL,0x41DFL},{0x65D8L,0x15DFL,-1L,-1L,0x53BC2F6D6459F139L,0x14463E91B5B2358AL,6UL,4294967289UL,0x41DFL},{2L,0x7F7BL,0x3F607BB088A057ECL,0x5548L,1L,6L,5UL,1UL,0x0707L},{0x76B0L,0x2B19L,0x69D4055D0160B5C0L,-1L,0x033E316ED2767F92L,0x71DF8105A18A5C64L,0x5FL,4294967295UL,0x3C0CL},{0x5994L,0x07C2L,0x7DDE4D78B1D69833L,0x02E3L,0x7915BDED785604A1L,0x5305F7132E5439C8L,253UL,0UL,0x3BE4L}},{{0x65D8L,0x15DFL,-1L,-1L,0x53BC2F6D6459F139L,0x14463E91B5B2358AL,6UL,4294967289UL,0x41DFL},{0x65D8L,0x15DFL,-1L,-1L,0x53BC2F6D6459F139L,0x14463E91B5B2358AL,6UL,4294967289UL,0x41DFL},{2L,0x7F7BL,0x3F607BB088A057ECL,0x5548L,1L,6L,5UL,1UL,0x0707L},{0x76B0L,0x2B19L,0x69D4055D0160B5C0L,-1L,0x033E316ED2767F92L,0x71DF8105A18A5C64L,0x5FL,4294967295UL,0x3C0CL},{0x5994L,0x07C2L,0x7DDE4D78B1D69833L,0x02E3L,0x7915BDED785604A1L,0x5305F7132E5439C8L,253UL,0UL,0x3BE4L}},{{0x65D8L,0x15DFL,-1L,-1L,0x53BC2F6D6459F139L,0x14463E91B5B2358AL,6UL,4294967289UL,0x41DFL},{0x65D8L,0x15DFL,-1L,-1L,0x53BC2F6D6459F139L,0x14463E91B5B2358AL,6UL,4294967289UL,0x41DFL},{2L,0x7F7BL,0x3F607BB088A057ECL,0x5548L,1L,6L,5UL,1UL,0x0707L},{0x76B0L,0x2B19L,0x69D4055D0160B5C0L,-1L,0x033E316ED2767F92L,0x71DF8105A18A5C64L,0x5FL,4294967295UL,0x3C0CL},{0x5994L,0x07C2L,0x7DDE4D78B1D69833L,0x02E3L,0x7915BDED785604A1L,0x5305F7132E5439C8L,253UL,0UL,0x3BE4L}}}, // p_753->g_76
        &p_753->g_66.f0, // p_753->g_79
        0x397AFB7AL, // p_753->g_82
        (void*)0, // p_753->g_88
        (VECTOR(uint64_t, 16))(0x6E98D5FDB6488366L, (VECTOR(uint64_t, 4))(0x6E98D5FDB6488366L, (VECTOR(uint64_t, 2))(0x6E98D5FDB6488366L, 0x9AA58BC828D9300DL), 0x9AA58BC828D9300DL), 0x9AA58BC828D9300DL, 0x6E98D5FDB6488366L, 0x9AA58BC828D9300DL, (VECTOR(uint64_t, 2))(0x6E98D5FDB6488366L, 0x9AA58BC828D9300DL), (VECTOR(uint64_t, 2))(0x6E98D5FDB6488366L, 0x9AA58BC828D9300DL), 0x6E98D5FDB6488366L, 0x9AA58BC828D9300DL, 0x6E98D5FDB6488366L, 0x9AA58BC828D9300DL), // p_753->g_97
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_753->g_96
        {{{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]}},{{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]}},{{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]}},{{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]}},{{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]}},{{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]}},{{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]}},{{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]},{&p_753->g_96[2],&p_753->g_96[1],&p_753->g_96[0],&p_753->g_96[0],&p_753->g_96[1],&p_753->g_96[2],&p_753->g_96[3],&p_753->g_96[3]}}}, // p_753->g_95
        &p_753->g_95[5][0][6], // p_753->g_94
        0x7D95L, // p_753->g_117
        (VECTOR(int64_t, 8))(0x51558E0F9DADCB93L, (VECTOR(int64_t, 4))(0x51558E0F9DADCB93L, (VECTOR(int64_t, 2))(0x51558E0F9DADCB93L, (-10L)), (-10L)), (-10L), 0x51558E0F9DADCB93L, (-10L)), // p_753->g_129
        0UL, // p_753->g_136
        0x0774L, // p_753->g_141
        1UL, // p_753->g_143
        (VECTOR(int8_t, 2))(0x28L, 0x5DL), // p_753->g_159
        (VECTOR(int8_t, 2))(0L, 1L), // p_753->g_162
        (VECTOR(int8_t, 4))(0x01L, (VECTOR(int8_t, 2))(0x01L, 1L), 1L), // p_753->g_165
        {{{4294967289UL,0x9EEF0EF6DE1D1B8BL,0x0FL,0x1018F33F5BE081A6L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{4294967295UL,18446744073709551609UL,0xBBL,9L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L}},{{4294967289UL,0x9EEF0EF6DE1D1B8BL,0x0FL,0x1018F33F5BE081A6L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{4294967295UL,18446744073709551609UL,0xBBL,9L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L}},{{4294967289UL,0x9EEF0EF6DE1D1B8BL,0x0FL,0x1018F33F5BE081A6L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{4294967295UL,18446744073709551609UL,0xBBL,9L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L}},{{4294967289UL,0x9EEF0EF6DE1D1B8BL,0x0FL,0x1018F33F5BE081A6L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{4294967295UL,18446744073709551609UL,0xBBL,9L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L}},{{4294967289UL,0x9EEF0EF6DE1D1B8BL,0x0FL,0x1018F33F5BE081A6L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{4294967295UL,18446744073709551609UL,0xBBL,9L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L}},{{4294967289UL,0x9EEF0EF6DE1D1B8BL,0x0FL,0x1018F33F5BE081A6L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{4294967295UL,18446744073709551609UL,0xBBL,9L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L}},{{4294967289UL,0x9EEF0EF6DE1D1B8BL,0x0FL,0x1018F33F5BE081A6L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{4294967295UL,18446744073709551609UL,0xBBL,9L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L}},{{4294967289UL,0x9EEF0EF6DE1D1B8BL,0x0FL,0x1018F33F5BE081A6L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{4294967295UL,18446744073709551609UL,0xBBL,9L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L}},{{4294967289UL,0x9EEF0EF6DE1D1B8BL,0x0FL,0x1018F33F5BE081A6L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{4294967295UL,18446744073709551609UL,0xBBL,9L},{0x6C5166A1L,6UL,0x73L,0x5ABC896D3C327D79L},{0x4871747DL,0x5B839079371184B9L,0x9FL,1L}}}, // p_753->g_171
        (VECTOR(int16_t, 2))(0x0286L, 0x24F4L), // p_753->g_172
        (VECTOR(int64_t, 2))((-1L), (-1L)), // p_753->g_173
        {&p_753->g_171[3][1]}, // p_753->g_182
        1UL, // p_753->g_189
        (VECTOR(int8_t, 8))(0x67L, (VECTOR(int8_t, 4))(0x67L, (VECTOR(int8_t, 2))(0x67L, 7L), 7L), 7L, 0x67L, 7L), // p_753->g_201
        (VECTOR(uint8_t, 16))(0x40L, (VECTOR(uint8_t, 4))(0x40L, (VECTOR(uint8_t, 2))(0x40L, 0xDBL), 0xDBL), 0xDBL, 0x40L, 0xDBL, (VECTOR(uint8_t, 2))(0x40L, 0xDBL), (VECTOR(uint8_t, 2))(0x40L, 0xDBL), 0x40L, 0xDBL, 0x40L, 0xDBL), // p_753->g_202
        (VECTOR(int8_t, 4))(0x61L, (VECTOR(int8_t, 2))(0x61L, 0x7BL), 0x7BL), // p_753->g_203
        {{{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1},{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1},{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1},{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1}},{{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1},{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1},{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1},{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1}},{{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1},{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1},{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1},{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1}},{{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1},{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1},{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1},{&p_753->g_66.f1,&p_753->g_71[0][3][2],&p_753->g_66.f1,&p_753->g_71[0][2][3],(void*)0,&p_753->g_71[0][1][3],&p_753->g_71[0][3][2],(void*)0,(void*)0,&p_753->g_66.f1}}}, // p_753->g_216
        {2UL,0UL,246UL,8L}, // p_753->g_224
        {0L,7L,0x593CA63B39A4F896L,2L,0x49639DA54A31D818L,-1L,0x8EL,0xD01A9C0DL,0L}, // p_753->g_226
        {&p_753->g_79}, // p_753->g_231
        &p_753->g_79, // p_753->g_233
        4294967295UL, // p_753->g_238
        {255UL,0UL,255UL,255UL,0UL,255UL}, // p_753->g_265
        {0x1236L,0x6461L,-9L,0x71E5L,0L,1L,5UL,0UL,0x17AEL}, // p_753->g_279
        {0xC35F0D1BL,1UL,1UL,0x32E2015F3E84B7FCL}, // p_753->g_304
        (VECTOR(uint8_t, 4))(0x1AL, (VECTOR(uint8_t, 2))(0x1AL, 0xF8L), 0xF8L), // p_753->g_312
        (VECTOR(uint8_t, 2))(0x3FL, 0xA7L), // p_753->g_314
        {0L,-1L,8L,0x4942L,0x44F6B617320914B8L,0x74CEE8459CB603A9L,248UL,0xEA38CC61L,-1L}, // p_753->g_328
        {0x8049E541L,0UL,1UL,0x528105E0EC474B8DL}, // p_753->g_344
        (VECTOR(uint8_t, 4))(0xC4L, (VECTOR(uint8_t, 2))(0xC4L, 0xA7L), 0xA7L), // p_753->g_381
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x5AL), 0x5AL), // p_753->g_384
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L)), // p_753->g_387
        (VECTOR(uint8_t, 16))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0x83L), 0x83L), 0x83L, 248UL, 0x83L, (VECTOR(uint8_t, 2))(248UL, 0x83L), (VECTOR(uint8_t, 2))(248UL, 0x83L), 248UL, 0x83L, 248UL, 0x83L), // p_753->g_389
        (VECTOR(uint8_t, 2))(0x56L, 0xABL), // p_753->g_391
        {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}}, // p_753->g_409
        0x2981F19F4748CE30L, // p_753->g_411
        0x49DAB1A9L, // p_753->g_433
        (VECTOR(uint8_t, 8))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 0UL), 0UL), 0UL, 7UL, 0UL), // p_753->g_444
        (VECTOR(uint8_t, 2))(0x55L, 252UL), // p_753->g_445
        (VECTOR(uint16_t, 16))(0xA707L, (VECTOR(uint16_t, 4))(0xA707L, (VECTOR(uint16_t, 2))(0xA707L, 0x2EE6L), 0x2EE6L), 0x2EE6L, 0xA707L, 0x2EE6L, (VECTOR(uint16_t, 2))(0xA707L, 0x2EE6L), (VECTOR(uint16_t, 2))(0xA707L, 0x2EE6L), 0xA707L, 0x2EE6L, 0xA707L, 0x2EE6L), // p_753->g_452
        (VECTOR(uint16_t, 16))(0x96C8L, (VECTOR(uint16_t, 4))(0x96C8L, (VECTOR(uint16_t, 2))(0x96C8L, 0xF12EL), 0xF12EL), 0xF12EL, 0x96C8L, 0xF12EL, (VECTOR(uint16_t, 2))(0x96C8L, 0xF12EL), (VECTOR(uint16_t, 2))(0x96C8L, 0xF12EL), 0x96C8L, 0xF12EL, 0x96C8L, 0xF12EL), // p_753->g_453
        (VECTOR(uint16_t, 2))(0UL, 1UL), // p_753->g_455
        (VECTOR(uint16_t, 4))(0xD058L, (VECTOR(uint16_t, 2))(0xD058L, 65535UL), 65535UL), // p_753->g_558
        (VECTOR(uint16_t, 8))(0x6999L, (VECTOR(uint16_t, 4))(0x6999L, (VECTOR(uint16_t, 2))(0x6999L, 65529UL), 65529UL), 65529UL, 0x6999L, 65529UL), // p_753->g_563
        {0x4FA929EDL,0xCFB050829E6A6636L,9UL,0x49CC08ED7D15BAA8L}, // p_753->g_570
        {0xB00F40E5L,0UL,8UL,0x521434DDCC5D4212L}, // p_753->g_583
        {4294967288UL,0x1CAA083280529FA5L,246UL,-5L}, // p_753->g_586
        {0xA034D433L,0x170B6C4108A74E7DL,1UL,-1L}, // p_753->g_587
        (VECTOR(int16_t, 2))((-1L), 2L), // p_753->g_601
        (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x1DFAL), 0x1DFAL), 0x1DFAL, 6L, 0x1DFAL), // p_753->g_609
        (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x67FEL), 0x67FEL), // p_753->g_610
        (VECTOR(int16_t, 2))(0x54ADL, 0x470EL), // p_753->g_611
        (VECTOR(int16_t, 4))(0x39A1L, (VECTOR(int16_t, 2))(0x39A1L, 1L), 1L), // p_753->g_614
        (VECTOR(int16_t, 8))(0x1A20L, (VECTOR(int16_t, 4))(0x1A20L, (VECTOR(int16_t, 2))(0x1A20L, 1L), 1L), 1L, 0x1A20L, 1L), // p_753->g_617
        (VECTOR(int16_t, 8))(0x4E2EL, (VECTOR(int16_t, 4))(0x4E2EL, (VECTOR(int16_t, 2))(0x4E2EL, 0x1A2CL), 0x1A2CL), 0x1A2CL, 0x4E2EL, 0x1A2CL), // p_753->g_618
        (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), 0L), 0L), 0L, (-2L), 0L), // p_753->g_619
        (VECTOR(int16_t, 4))(0x31ADL, (VECTOR(int16_t, 2))(0x31ADL, 0x2764L), 0x2764L), // p_753->g_621
        (VECTOR(uint8_t, 2))(255UL, 0x88L), // p_753->g_624
        (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0491L), 0x0491L), 0x0491L, (-1L), 0x0491L), // p_753->g_626
        &p_753->g_79, // p_753->g_636
        {0x7BEF2A01L,{1L,0x0BL,7L,9UL,-1L,0x578924A4L,0xFF06A038L,0x7AA17EE1L,0x53057FB6B88EE2C9L},65535UL}, // p_753->g_637
        (VECTOR(uint32_t, 8))(0x090CCF94L, (VECTOR(uint32_t, 4))(0x090CCF94L, (VECTOR(uint32_t, 2))(0x090CCF94L, 0x15F62172L), 0x15F62172L), 0x15F62172L, 0x090CCF94L, 0x15F62172L), // p_753->g_647
        {0x23766C3EL,18446744073709551615UL,0x47L,0x35E3DF14EBD41D21L}, // p_753->g_663
        {0x266BF3F1L,18446744073709551608UL,249UL,0x1384864AA9DC0C2AL}, // p_753->g_664
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_753->g_665
        (VECTOR(uint8_t, 4))(0xB4L, (VECTOR(uint8_t, 2))(0xB4L, 0x3DL), 0x3DL), // p_753->g_690
        (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL), // p_753->g_691
        (VECTOR(uint8_t, 2))(0x9CL, 0x02L), // p_753->g_695
        (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xE2B7449CL), 0xE2B7449CL), 0xE2B7449CL, 1UL, 0xE2B7449CL, (VECTOR(uint32_t, 2))(1UL, 0xE2B7449CL), (VECTOR(uint32_t, 2))(1UL, 0xE2B7449CL), 1UL, 0xE2B7449CL, 1UL, 0xE2B7449CL), // p_753->g_703
        0x0D4118BDL, // p_753->g_724
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int32_t, 2))(1L, (-1L)), (VECTOR(int32_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L)), // p_753->g_748
        (VECTOR(int32_t, 4))(0x3788D386L, (VECTOR(int32_t, 2))(0x3788D386L, 0x39E0D1ADL), 0x39E0D1ADL), // p_753->g_749
        0, // p_753->v_collective
        sequence_input[get_global_id(0)], // p_753->global_0_offset
        sequence_input[get_global_id(1)], // p_753->global_1_offset
        sequence_input[get_global_id(2)], // p_753->global_2_offset
        sequence_input[get_local_id(0)], // p_753->local_0_offset
        sequence_input[get_local_id(1)], // p_753->local_1_offset
        sequence_input[get_local_id(2)], // p_753->local_2_offset
        sequence_input[get_group_id(0)], // p_753->group_0_offset
        sequence_input[get_group_id(1)], // p_753->group_1_offset
        sequence_input[get_group_id(2)], // p_753->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[0][get_linear_local_id()])), // p_753->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_754 = c_755;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_753);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_753->g_21, "p_753->g_21", print_hash_value);
    transparent_crc(p_753->g_31, "p_753->g_31", print_hash_value);
    transparent_crc(p_753->g_42, "p_753->g_42", print_hash_value);
    transparent_crc(p_753->g_62.s0, "p_753->g_62.s0", print_hash_value);
    transparent_crc(p_753->g_62.s1, "p_753->g_62.s1", print_hash_value);
    transparent_crc(p_753->g_62.s2, "p_753->g_62.s2", print_hash_value);
    transparent_crc(p_753->g_62.s3, "p_753->g_62.s3", print_hash_value);
    transparent_crc(p_753->g_62.s4, "p_753->g_62.s4", print_hash_value);
    transparent_crc(p_753->g_62.s5, "p_753->g_62.s5", print_hash_value);
    transparent_crc(p_753->g_62.s6, "p_753->g_62.s6", print_hash_value);
    transparent_crc(p_753->g_62.s7, "p_753->g_62.s7", print_hash_value);
    transparent_crc(p_753->g_62.s8, "p_753->g_62.s8", print_hash_value);
    transparent_crc(p_753->g_62.s9, "p_753->g_62.s9", print_hash_value);
    transparent_crc(p_753->g_62.sa, "p_753->g_62.sa", print_hash_value);
    transparent_crc(p_753->g_62.sb, "p_753->g_62.sb", print_hash_value);
    transparent_crc(p_753->g_62.sc, "p_753->g_62.sc", print_hash_value);
    transparent_crc(p_753->g_62.sd, "p_753->g_62.sd", print_hash_value);
    transparent_crc(p_753->g_62.se, "p_753->g_62.se", print_hash_value);
    transparent_crc(p_753->g_62.sf, "p_753->g_62.sf", print_hash_value);
    transparent_crc(p_753->g_65, "p_753->g_65", print_hash_value);
    transparent_crc(p_753->g_66.f0, "p_753->g_66.f0", print_hash_value);
    transparent_crc(p_753->g_66.f1, "p_753->g_66.f1", print_hash_value);
    transparent_crc(p_753->g_66.f2, "p_753->g_66.f2", print_hash_value);
    transparent_crc(p_753->g_66.f3, "p_753->g_66.f3", print_hash_value);
    transparent_crc(p_753->g_66.f4, "p_753->g_66.f4", print_hash_value);
    transparent_crc(p_753->g_66.f5, "p_753->g_66.f5", print_hash_value);
    transparent_crc(p_753->g_66.f6, "p_753->g_66.f6", print_hash_value);
    transparent_crc(p_753->g_66.f7, "p_753->g_66.f7", print_hash_value);
    transparent_crc(p_753->g_66.f8, "p_753->g_66.f8", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_753->g_71[i][j][k], "p_753->g_71[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_753->g_76[i][j].f0, "p_753->g_76[i][j].f0", print_hash_value);
            transparent_crc(p_753->g_76[i][j].f1, "p_753->g_76[i][j].f1", print_hash_value);
            transparent_crc(p_753->g_76[i][j].f2, "p_753->g_76[i][j].f2", print_hash_value);
            transparent_crc(p_753->g_76[i][j].f3, "p_753->g_76[i][j].f3", print_hash_value);
            transparent_crc(p_753->g_76[i][j].f4, "p_753->g_76[i][j].f4", print_hash_value);
            transparent_crc(p_753->g_76[i][j].f5, "p_753->g_76[i][j].f5", print_hash_value);
            transparent_crc(p_753->g_76[i][j].f6, "p_753->g_76[i][j].f6", print_hash_value);
            transparent_crc(p_753->g_76[i][j].f7, "p_753->g_76[i][j].f7", print_hash_value);
            transparent_crc(p_753->g_76[i][j].f8, "p_753->g_76[i][j].f8", print_hash_value);

        }
    }
    transparent_crc(p_753->g_82, "p_753->g_82", print_hash_value);
    transparent_crc(p_753->g_97.s0, "p_753->g_97.s0", print_hash_value);
    transparent_crc(p_753->g_97.s1, "p_753->g_97.s1", print_hash_value);
    transparent_crc(p_753->g_97.s2, "p_753->g_97.s2", print_hash_value);
    transparent_crc(p_753->g_97.s3, "p_753->g_97.s3", print_hash_value);
    transparent_crc(p_753->g_97.s4, "p_753->g_97.s4", print_hash_value);
    transparent_crc(p_753->g_97.s5, "p_753->g_97.s5", print_hash_value);
    transparent_crc(p_753->g_97.s6, "p_753->g_97.s6", print_hash_value);
    transparent_crc(p_753->g_97.s7, "p_753->g_97.s7", print_hash_value);
    transparent_crc(p_753->g_97.s8, "p_753->g_97.s8", print_hash_value);
    transparent_crc(p_753->g_97.s9, "p_753->g_97.s9", print_hash_value);
    transparent_crc(p_753->g_97.sa, "p_753->g_97.sa", print_hash_value);
    transparent_crc(p_753->g_97.sb, "p_753->g_97.sb", print_hash_value);
    transparent_crc(p_753->g_97.sc, "p_753->g_97.sc", print_hash_value);
    transparent_crc(p_753->g_97.sd, "p_753->g_97.sd", print_hash_value);
    transparent_crc(p_753->g_97.se, "p_753->g_97.se", print_hash_value);
    transparent_crc(p_753->g_97.sf, "p_753->g_97.sf", print_hash_value);
    transparent_crc(p_753->g_117, "p_753->g_117", print_hash_value);
    transparent_crc(p_753->g_129.s0, "p_753->g_129.s0", print_hash_value);
    transparent_crc(p_753->g_129.s1, "p_753->g_129.s1", print_hash_value);
    transparent_crc(p_753->g_129.s2, "p_753->g_129.s2", print_hash_value);
    transparent_crc(p_753->g_129.s3, "p_753->g_129.s3", print_hash_value);
    transparent_crc(p_753->g_129.s4, "p_753->g_129.s4", print_hash_value);
    transparent_crc(p_753->g_129.s5, "p_753->g_129.s5", print_hash_value);
    transparent_crc(p_753->g_129.s6, "p_753->g_129.s6", print_hash_value);
    transparent_crc(p_753->g_129.s7, "p_753->g_129.s7", print_hash_value);
    transparent_crc(p_753->g_136, "p_753->g_136", print_hash_value);
    transparent_crc(p_753->g_141, "p_753->g_141", print_hash_value);
    transparent_crc(p_753->g_143, "p_753->g_143", print_hash_value);
    transparent_crc(p_753->g_159.x, "p_753->g_159.x", print_hash_value);
    transparent_crc(p_753->g_159.y, "p_753->g_159.y", print_hash_value);
    transparent_crc(p_753->g_162.x, "p_753->g_162.x", print_hash_value);
    transparent_crc(p_753->g_162.y, "p_753->g_162.y", print_hash_value);
    transparent_crc(p_753->g_165.x, "p_753->g_165.x", print_hash_value);
    transparent_crc(p_753->g_165.y, "p_753->g_165.y", print_hash_value);
    transparent_crc(p_753->g_165.z, "p_753->g_165.z", print_hash_value);
    transparent_crc(p_753->g_165.w, "p_753->g_165.w", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_753->g_171[i][j].f0, "p_753->g_171[i][j].f0", print_hash_value);
            transparent_crc(p_753->g_171[i][j].f1, "p_753->g_171[i][j].f1", print_hash_value);
            transparent_crc(p_753->g_171[i][j].f2, "p_753->g_171[i][j].f2", print_hash_value);
            transparent_crc(p_753->g_171[i][j].f3, "p_753->g_171[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(p_753->g_172.x, "p_753->g_172.x", print_hash_value);
    transparent_crc(p_753->g_172.y, "p_753->g_172.y", print_hash_value);
    transparent_crc(p_753->g_173.x, "p_753->g_173.x", print_hash_value);
    transparent_crc(p_753->g_173.y, "p_753->g_173.y", print_hash_value);
    transparent_crc(p_753->g_189, "p_753->g_189", print_hash_value);
    transparent_crc(p_753->g_201.s0, "p_753->g_201.s0", print_hash_value);
    transparent_crc(p_753->g_201.s1, "p_753->g_201.s1", print_hash_value);
    transparent_crc(p_753->g_201.s2, "p_753->g_201.s2", print_hash_value);
    transparent_crc(p_753->g_201.s3, "p_753->g_201.s3", print_hash_value);
    transparent_crc(p_753->g_201.s4, "p_753->g_201.s4", print_hash_value);
    transparent_crc(p_753->g_201.s5, "p_753->g_201.s5", print_hash_value);
    transparent_crc(p_753->g_201.s6, "p_753->g_201.s6", print_hash_value);
    transparent_crc(p_753->g_201.s7, "p_753->g_201.s7", print_hash_value);
    transparent_crc(p_753->g_202.s0, "p_753->g_202.s0", print_hash_value);
    transparent_crc(p_753->g_202.s1, "p_753->g_202.s1", print_hash_value);
    transparent_crc(p_753->g_202.s2, "p_753->g_202.s2", print_hash_value);
    transparent_crc(p_753->g_202.s3, "p_753->g_202.s3", print_hash_value);
    transparent_crc(p_753->g_202.s4, "p_753->g_202.s4", print_hash_value);
    transparent_crc(p_753->g_202.s5, "p_753->g_202.s5", print_hash_value);
    transparent_crc(p_753->g_202.s6, "p_753->g_202.s6", print_hash_value);
    transparent_crc(p_753->g_202.s7, "p_753->g_202.s7", print_hash_value);
    transparent_crc(p_753->g_202.s8, "p_753->g_202.s8", print_hash_value);
    transparent_crc(p_753->g_202.s9, "p_753->g_202.s9", print_hash_value);
    transparent_crc(p_753->g_202.sa, "p_753->g_202.sa", print_hash_value);
    transparent_crc(p_753->g_202.sb, "p_753->g_202.sb", print_hash_value);
    transparent_crc(p_753->g_202.sc, "p_753->g_202.sc", print_hash_value);
    transparent_crc(p_753->g_202.sd, "p_753->g_202.sd", print_hash_value);
    transparent_crc(p_753->g_202.se, "p_753->g_202.se", print_hash_value);
    transparent_crc(p_753->g_202.sf, "p_753->g_202.sf", print_hash_value);
    transparent_crc(p_753->g_203.x, "p_753->g_203.x", print_hash_value);
    transparent_crc(p_753->g_203.y, "p_753->g_203.y", print_hash_value);
    transparent_crc(p_753->g_203.z, "p_753->g_203.z", print_hash_value);
    transparent_crc(p_753->g_203.w, "p_753->g_203.w", print_hash_value);
    transparent_crc(p_753->g_224.f0, "p_753->g_224.f0", print_hash_value);
    transparent_crc(p_753->g_224.f1, "p_753->g_224.f1", print_hash_value);
    transparent_crc(p_753->g_224.f2, "p_753->g_224.f2", print_hash_value);
    transparent_crc(p_753->g_224.f3, "p_753->g_224.f3", print_hash_value);
    transparent_crc(p_753->g_226.f0, "p_753->g_226.f0", print_hash_value);
    transparent_crc(p_753->g_226.f1, "p_753->g_226.f1", print_hash_value);
    transparent_crc(p_753->g_226.f2, "p_753->g_226.f2", print_hash_value);
    transparent_crc(p_753->g_226.f3, "p_753->g_226.f3", print_hash_value);
    transparent_crc(p_753->g_226.f4, "p_753->g_226.f4", print_hash_value);
    transparent_crc(p_753->g_226.f5, "p_753->g_226.f5", print_hash_value);
    transparent_crc(p_753->g_226.f6, "p_753->g_226.f6", print_hash_value);
    transparent_crc(p_753->g_226.f7, "p_753->g_226.f7", print_hash_value);
    transparent_crc(p_753->g_226.f8, "p_753->g_226.f8", print_hash_value);
    transparent_crc(p_753->g_238, "p_753->g_238", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_753->g_265[i], "p_753->g_265[i]", print_hash_value);

    }
    transparent_crc(p_753->g_279.f0, "p_753->g_279.f0", print_hash_value);
    transparent_crc(p_753->g_279.f1, "p_753->g_279.f1", print_hash_value);
    transparent_crc(p_753->g_279.f2, "p_753->g_279.f2", print_hash_value);
    transparent_crc(p_753->g_279.f3, "p_753->g_279.f3", print_hash_value);
    transparent_crc(p_753->g_279.f4, "p_753->g_279.f4", print_hash_value);
    transparent_crc(p_753->g_279.f5, "p_753->g_279.f5", print_hash_value);
    transparent_crc(p_753->g_279.f6, "p_753->g_279.f6", print_hash_value);
    transparent_crc(p_753->g_279.f7, "p_753->g_279.f7", print_hash_value);
    transparent_crc(p_753->g_279.f8, "p_753->g_279.f8", print_hash_value);
    transparent_crc(p_753->g_304.f0, "p_753->g_304.f0", print_hash_value);
    transparent_crc(p_753->g_304.f1, "p_753->g_304.f1", print_hash_value);
    transparent_crc(p_753->g_304.f2, "p_753->g_304.f2", print_hash_value);
    transparent_crc(p_753->g_304.f3, "p_753->g_304.f3", print_hash_value);
    transparent_crc(p_753->g_312.x, "p_753->g_312.x", print_hash_value);
    transparent_crc(p_753->g_312.y, "p_753->g_312.y", print_hash_value);
    transparent_crc(p_753->g_312.z, "p_753->g_312.z", print_hash_value);
    transparent_crc(p_753->g_312.w, "p_753->g_312.w", print_hash_value);
    transparent_crc(p_753->g_314.x, "p_753->g_314.x", print_hash_value);
    transparent_crc(p_753->g_314.y, "p_753->g_314.y", print_hash_value);
    transparent_crc(p_753->g_328.f0, "p_753->g_328.f0", print_hash_value);
    transparent_crc(p_753->g_328.f1, "p_753->g_328.f1", print_hash_value);
    transparent_crc(p_753->g_328.f2, "p_753->g_328.f2", print_hash_value);
    transparent_crc(p_753->g_328.f3, "p_753->g_328.f3", print_hash_value);
    transparent_crc(p_753->g_328.f4, "p_753->g_328.f4", print_hash_value);
    transparent_crc(p_753->g_328.f5, "p_753->g_328.f5", print_hash_value);
    transparent_crc(p_753->g_328.f6, "p_753->g_328.f6", print_hash_value);
    transparent_crc(p_753->g_328.f7, "p_753->g_328.f7", print_hash_value);
    transparent_crc(p_753->g_328.f8, "p_753->g_328.f8", print_hash_value);
    transparent_crc(p_753->g_344.f0, "p_753->g_344.f0", print_hash_value);
    transparent_crc(p_753->g_344.f1, "p_753->g_344.f1", print_hash_value);
    transparent_crc(p_753->g_344.f2, "p_753->g_344.f2", print_hash_value);
    transparent_crc(p_753->g_344.f3, "p_753->g_344.f3", print_hash_value);
    transparent_crc(p_753->g_381.x, "p_753->g_381.x", print_hash_value);
    transparent_crc(p_753->g_381.y, "p_753->g_381.y", print_hash_value);
    transparent_crc(p_753->g_381.z, "p_753->g_381.z", print_hash_value);
    transparent_crc(p_753->g_381.w, "p_753->g_381.w", print_hash_value);
    transparent_crc(p_753->g_384.x, "p_753->g_384.x", print_hash_value);
    transparent_crc(p_753->g_384.y, "p_753->g_384.y", print_hash_value);
    transparent_crc(p_753->g_384.z, "p_753->g_384.z", print_hash_value);
    transparent_crc(p_753->g_384.w, "p_753->g_384.w", print_hash_value);
    transparent_crc(p_753->g_387.s0, "p_753->g_387.s0", print_hash_value);
    transparent_crc(p_753->g_387.s1, "p_753->g_387.s1", print_hash_value);
    transparent_crc(p_753->g_387.s2, "p_753->g_387.s2", print_hash_value);
    transparent_crc(p_753->g_387.s3, "p_753->g_387.s3", print_hash_value);
    transparent_crc(p_753->g_387.s4, "p_753->g_387.s4", print_hash_value);
    transparent_crc(p_753->g_387.s5, "p_753->g_387.s5", print_hash_value);
    transparent_crc(p_753->g_387.s6, "p_753->g_387.s6", print_hash_value);
    transparent_crc(p_753->g_387.s7, "p_753->g_387.s7", print_hash_value);
    transparent_crc(p_753->g_387.s8, "p_753->g_387.s8", print_hash_value);
    transparent_crc(p_753->g_387.s9, "p_753->g_387.s9", print_hash_value);
    transparent_crc(p_753->g_387.sa, "p_753->g_387.sa", print_hash_value);
    transparent_crc(p_753->g_387.sb, "p_753->g_387.sb", print_hash_value);
    transparent_crc(p_753->g_387.sc, "p_753->g_387.sc", print_hash_value);
    transparent_crc(p_753->g_387.sd, "p_753->g_387.sd", print_hash_value);
    transparent_crc(p_753->g_387.se, "p_753->g_387.se", print_hash_value);
    transparent_crc(p_753->g_387.sf, "p_753->g_387.sf", print_hash_value);
    transparent_crc(p_753->g_389.s0, "p_753->g_389.s0", print_hash_value);
    transparent_crc(p_753->g_389.s1, "p_753->g_389.s1", print_hash_value);
    transparent_crc(p_753->g_389.s2, "p_753->g_389.s2", print_hash_value);
    transparent_crc(p_753->g_389.s3, "p_753->g_389.s3", print_hash_value);
    transparent_crc(p_753->g_389.s4, "p_753->g_389.s4", print_hash_value);
    transparent_crc(p_753->g_389.s5, "p_753->g_389.s5", print_hash_value);
    transparent_crc(p_753->g_389.s6, "p_753->g_389.s6", print_hash_value);
    transparent_crc(p_753->g_389.s7, "p_753->g_389.s7", print_hash_value);
    transparent_crc(p_753->g_389.s8, "p_753->g_389.s8", print_hash_value);
    transparent_crc(p_753->g_389.s9, "p_753->g_389.s9", print_hash_value);
    transparent_crc(p_753->g_389.sa, "p_753->g_389.sa", print_hash_value);
    transparent_crc(p_753->g_389.sb, "p_753->g_389.sb", print_hash_value);
    transparent_crc(p_753->g_389.sc, "p_753->g_389.sc", print_hash_value);
    transparent_crc(p_753->g_389.sd, "p_753->g_389.sd", print_hash_value);
    transparent_crc(p_753->g_389.se, "p_753->g_389.se", print_hash_value);
    transparent_crc(p_753->g_389.sf, "p_753->g_389.sf", print_hash_value);
    transparent_crc(p_753->g_391.x, "p_753->g_391.x", print_hash_value);
    transparent_crc(p_753->g_391.y, "p_753->g_391.y", print_hash_value);
    transparent_crc(p_753->g_411, "p_753->g_411", print_hash_value);
    transparent_crc(p_753->g_433, "p_753->g_433", print_hash_value);
    transparent_crc(p_753->g_444.s0, "p_753->g_444.s0", print_hash_value);
    transparent_crc(p_753->g_444.s1, "p_753->g_444.s1", print_hash_value);
    transparent_crc(p_753->g_444.s2, "p_753->g_444.s2", print_hash_value);
    transparent_crc(p_753->g_444.s3, "p_753->g_444.s3", print_hash_value);
    transparent_crc(p_753->g_444.s4, "p_753->g_444.s4", print_hash_value);
    transparent_crc(p_753->g_444.s5, "p_753->g_444.s5", print_hash_value);
    transparent_crc(p_753->g_444.s6, "p_753->g_444.s6", print_hash_value);
    transparent_crc(p_753->g_444.s7, "p_753->g_444.s7", print_hash_value);
    transparent_crc(p_753->g_445.x, "p_753->g_445.x", print_hash_value);
    transparent_crc(p_753->g_445.y, "p_753->g_445.y", print_hash_value);
    transparent_crc(p_753->g_452.s0, "p_753->g_452.s0", print_hash_value);
    transparent_crc(p_753->g_452.s1, "p_753->g_452.s1", print_hash_value);
    transparent_crc(p_753->g_452.s2, "p_753->g_452.s2", print_hash_value);
    transparent_crc(p_753->g_452.s3, "p_753->g_452.s3", print_hash_value);
    transparent_crc(p_753->g_452.s4, "p_753->g_452.s4", print_hash_value);
    transparent_crc(p_753->g_452.s5, "p_753->g_452.s5", print_hash_value);
    transparent_crc(p_753->g_452.s6, "p_753->g_452.s6", print_hash_value);
    transparent_crc(p_753->g_452.s7, "p_753->g_452.s7", print_hash_value);
    transparent_crc(p_753->g_452.s8, "p_753->g_452.s8", print_hash_value);
    transparent_crc(p_753->g_452.s9, "p_753->g_452.s9", print_hash_value);
    transparent_crc(p_753->g_452.sa, "p_753->g_452.sa", print_hash_value);
    transparent_crc(p_753->g_452.sb, "p_753->g_452.sb", print_hash_value);
    transparent_crc(p_753->g_452.sc, "p_753->g_452.sc", print_hash_value);
    transparent_crc(p_753->g_452.sd, "p_753->g_452.sd", print_hash_value);
    transparent_crc(p_753->g_452.se, "p_753->g_452.se", print_hash_value);
    transparent_crc(p_753->g_452.sf, "p_753->g_452.sf", print_hash_value);
    transparent_crc(p_753->g_453.s0, "p_753->g_453.s0", print_hash_value);
    transparent_crc(p_753->g_453.s1, "p_753->g_453.s1", print_hash_value);
    transparent_crc(p_753->g_453.s2, "p_753->g_453.s2", print_hash_value);
    transparent_crc(p_753->g_453.s3, "p_753->g_453.s3", print_hash_value);
    transparent_crc(p_753->g_453.s4, "p_753->g_453.s4", print_hash_value);
    transparent_crc(p_753->g_453.s5, "p_753->g_453.s5", print_hash_value);
    transparent_crc(p_753->g_453.s6, "p_753->g_453.s6", print_hash_value);
    transparent_crc(p_753->g_453.s7, "p_753->g_453.s7", print_hash_value);
    transparent_crc(p_753->g_453.s8, "p_753->g_453.s8", print_hash_value);
    transparent_crc(p_753->g_453.s9, "p_753->g_453.s9", print_hash_value);
    transparent_crc(p_753->g_453.sa, "p_753->g_453.sa", print_hash_value);
    transparent_crc(p_753->g_453.sb, "p_753->g_453.sb", print_hash_value);
    transparent_crc(p_753->g_453.sc, "p_753->g_453.sc", print_hash_value);
    transparent_crc(p_753->g_453.sd, "p_753->g_453.sd", print_hash_value);
    transparent_crc(p_753->g_453.se, "p_753->g_453.se", print_hash_value);
    transparent_crc(p_753->g_453.sf, "p_753->g_453.sf", print_hash_value);
    transparent_crc(p_753->g_455.x, "p_753->g_455.x", print_hash_value);
    transparent_crc(p_753->g_455.y, "p_753->g_455.y", print_hash_value);
    transparent_crc(p_753->g_558.x, "p_753->g_558.x", print_hash_value);
    transparent_crc(p_753->g_558.y, "p_753->g_558.y", print_hash_value);
    transparent_crc(p_753->g_558.z, "p_753->g_558.z", print_hash_value);
    transparent_crc(p_753->g_558.w, "p_753->g_558.w", print_hash_value);
    transparent_crc(p_753->g_563.s0, "p_753->g_563.s0", print_hash_value);
    transparent_crc(p_753->g_563.s1, "p_753->g_563.s1", print_hash_value);
    transparent_crc(p_753->g_563.s2, "p_753->g_563.s2", print_hash_value);
    transparent_crc(p_753->g_563.s3, "p_753->g_563.s3", print_hash_value);
    transparent_crc(p_753->g_563.s4, "p_753->g_563.s4", print_hash_value);
    transparent_crc(p_753->g_563.s5, "p_753->g_563.s5", print_hash_value);
    transparent_crc(p_753->g_563.s6, "p_753->g_563.s6", print_hash_value);
    transparent_crc(p_753->g_563.s7, "p_753->g_563.s7", print_hash_value);
    transparent_crc(p_753->g_570.f0, "p_753->g_570.f0", print_hash_value);
    transparent_crc(p_753->g_570.f1, "p_753->g_570.f1", print_hash_value);
    transparent_crc(p_753->g_570.f2, "p_753->g_570.f2", print_hash_value);
    transparent_crc(p_753->g_570.f3, "p_753->g_570.f3", print_hash_value);
    transparent_crc(p_753->g_583.f0, "p_753->g_583.f0", print_hash_value);
    transparent_crc(p_753->g_583.f1, "p_753->g_583.f1", print_hash_value);
    transparent_crc(p_753->g_583.f2, "p_753->g_583.f2", print_hash_value);
    transparent_crc(p_753->g_583.f3, "p_753->g_583.f3", print_hash_value);
    transparent_crc(p_753->g_586.f0, "p_753->g_586.f0", print_hash_value);
    transparent_crc(p_753->g_586.f1, "p_753->g_586.f1", print_hash_value);
    transparent_crc(p_753->g_586.f2, "p_753->g_586.f2", print_hash_value);
    transparent_crc(p_753->g_586.f3, "p_753->g_586.f3", print_hash_value);
    transparent_crc(p_753->g_587.f0, "p_753->g_587.f0", print_hash_value);
    transparent_crc(p_753->g_587.f1, "p_753->g_587.f1", print_hash_value);
    transparent_crc(p_753->g_587.f2, "p_753->g_587.f2", print_hash_value);
    transparent_crc(p_753->g_587.f3, "p_753->g_587.f3", print_hash_value);
    transparent_crc(p_753->g_601.x, "p_753->g_601.x", print_hash_value);
    transparent_crc(p_753->g_601.y, "p_753->g_601.y", print_hash_value);
    transparent_crc(p_753->g_609.s0, "p_753->g_609.s0", print_hash_value);
    transparent_crc(p_753->g_609.s1, "p_753->g_609.s1", print_hash_value);
    transparent_crc(p_753->g_609.s2, "p_753->g_609.s2", print_hash_value);
    transparent_crc(p_753->g_609.s3, "p_753->g_609.s3", print_hash_value);
    transparent_crc(p_753->g_609.s4, "p_753->g_609.s4", print_hash_value);
    transparent_crc(p_753->g_609.s5, "p_753->g_609.s5", print_hash_value);
    transparent_crc(p_753->g_609.s6, "p_753->g_609.s6", print_hash_value);
    transparent_crc(p_753->g_609.s7, "p_753->g_609.s7", print_hash_value);
    transparent_crc(p_753->g_610.x, "p_753->g_610.x", print_hash_value);
    transparent_crc(p_753->g_610.y, "p_753->g_610.y", print_hash_value);
    transparent_crc(p_753->g_610.z, "p_753->g_610.z", print_hash_value);
    transparent_crc(p_753->g_610.w, "p_753->g_610.w", print_hash_value);
    transparent_crc(p_753->g_611.x, "p_753->g_611.x", print_hash_value);
    transparent_crc(p_753->g_611.y, "p_753->g_611.y", print_hash_value);
    transparent_crc(p_753->g_614.x, "p_753->g_614.x", print_hash_value);
    transparent_crc(p_753->g_614.y, "p_753->g_614.y", print_hash_value);
    transparent_crc(p_753->g_614.z, "p_753->g_614.z", print_hash_value);
    transparent_crc(p_753->g_614.w, "p_753->g_614.w", print_hash_value);
    transparent_crc(p_753->g_617.s0, "p_753->g_617.s0", print_hash_value);
    transparent_crc(p_753->g_617.s1, "p_753->g_617.s1", print_hash_value);
    transparent_crc(p_753->g_617.s2, "p_753->g_617.s2", print_hash_value);
    transparent_crc(p_753->g_617.s3, "p_753->g_617.s3", print_hash_value);
    transparent_crc(p_753->g_617.s4, "p_753->g_617.s4", print_hash_value);
    transparent_crc(p_753->g_617.s5, "p_753->g_617.s5", print_hash_value);
    transparent_crc(p_753->g_617.s6, "p_753->g_617.s6", print_hash_value);
    transparent_crc(p_753->g_617.s7, "p_753->g_617.s7", print_hash_value);
    transparent_crc(p_753->g_618.s0, "p_753->g_618.s0", print_hash_value);
    transparent_crc(p_753->g_618.s1, "p_753->g_618.s1", print_hash_value);
    transparent_crc(p_753->g_618.s2, "p_753->g_618.s2", print_hash_value);
    transparent_crc(p_753->g_618.s3, "p_753->g_618.s3", print_hash_value);
    transparent_crc(p_753->g_618.s4, "p_753->g_618.s4", print_hash_value);
    transparent_crc(p_753->g_618.s5, "p_753->g_618.s5", print_hash_value);
    transparent_crc(p_753->g_618.s6, "p_753->g_618.s6", print_hash_value);
    transparent_crc(p_753->g_618.s7, "p_753->g_618.s7", print_hash_value);
    transparent_crc(p_753->g_619.s0, "p_753->g_619.s0", print_hash_value);
    transparent_crc(p_753->g_619.s1, "p_753->g_619.s1", print_hash_value);
    transparent_crc(p_753->g_619.s2, "p_753->g_619.s2", print_hash_value);
    transparent_crc(p_753->g_619.s3, "p_753->g_619.s3", print_hash_value);
    transparent_crc(p_753->g_619.s4, "p_753->g_619.s4", print_hash_value);
    transparent_crc(p_753->g_619.s5, "p_753->g_619.s5", print_hash_value);
    transparent_crc(p_753->g_619.s6, "p_753->g_619.s6", print_hash_value);
    transparent_crc(p_753->g_619.s7, "p_753->g_619.s7", print_hash_value);
    transparent_crc(p_753->g_621.x, "p_753->g_621.x", print_hash_value);
    transparent_crc(p_753->g_621.y, "p_753->g_621.y", print_hash_value);
    transparent_crc(p_753->g_621.z, "p_753->g_621.z", print_hash_value);
    transparent_crc(p_753->g_621.w, "p_753->g_621.w", print_hash_value);
    transparent_crc(p_753->g_624.x, "p_753->g_624.x", print_hash_value);
    transparent_crc(p_753->g_624.y, "p_753->g_624.y", print_hash_value);
    transparent_crc(p_753->g_626.s0, "p_753->g_626.s0", print_hash_value);
    transparent_crc(p_753->g_626.s1, "p_753->g_626.s1", print_hash_value);
    transparent_crc(p_753->g_626.s2, "p_753->g_626.s2", print_hash_value);
    transparent_crc(p_753->g_626.s3, "p_753->g_626.s3", print_hash_value);
    transparent_crc(p_753->g_626.s4, "p_753->g_626.s4", print_hash_value);
    transparent_crc(p_753->g_626.s5, "p_753->g_626.s5", print_hash_value);
    transparent_crc(p_753->g_626.s6, "p_753->g_626.s6", print_hash_value);
    transparent_crc(p_753->g_626.s7, "p_753->g_626.s7", print_hash_value);
    transparent_crc(p_753->g_637.f0, "p_753->g_637.f0", print_hash_value);
    transparent_crc(p_753->g_637.f1.f0, "p_753->g_637.f1.f0", print_hash_value);
    transparent_crc(p_753->g_637.f1.f1, "p_753->g_637.f1.f1", print_hash_value);
    transparent_crc(p_753->g_637.f1.f2, "p_753->g_637.f1.f2", print_hash_value);
    transparent_crc(p_753->g_637.f1.f3, "p_753->g_637.f1.f3", print_hash_value);
    transparent_crc(p_753->g_637.f1.f4, "p_753->g_637.f1.f4", print_hash_value);
    transparent_crc(p_753->g_637.f1.f5, "p_753->g_637.f1.f5", print_hash_value);
    transparent_crc(p_753->g_637.f1.f6, "p_753->g_637.f1.f6", print_hash_value);
    transparent_crc(p_753->g_637.f1.f7, "p_753->g_637.f1.f7", print_hash_value);
    transparent_crc(p_753->g_637.f1.f8, "p_753->g_637.f1.f8", print_hash_value);
    transparent_crc(p_753->g_637.f2, "p_753->g_637.f2", print_hash_value);
    transparent_crc(p_753->g_647.s0, "p_753->g_647.s0", print_hash_value);
    transparent_crc(p_753->g_647.s1, "p_753->g_647.s1", print_hash_value);
    transparent_crc(p_753->g_647.s2, "p_753->g_647.s2", print_hash_value);
    transparent_crc(p_753->g_647.s3, "p_753->g_647.s3", print_hash_value);
    transparent_crc(p_753->g_647.s4, "p_753->g_647.s4", print_hash_value);
    transparent_crc(p_753->g_647.s5, "p_753->g_647.s5", print_hash_value);
    transparent_crc(p_753->g_647.s6, "p_753->g_647.s6", print_hash_value);
    transparent_crc(p_753->g_647.s7, "p_753->g_647.s7", print_hash_value);
    transparent_crc(p_753->g_663.f0, "p_753->g_663.f0", print_hash_value);
    transparent_crc(p_753->g_663.f1, "p_753->g_663.f1", print_hash_value);
    transparent_crc(p_753->g_663.f2, "p_753->g_663.f2", print_hash_value);
    transparent_crc(p_753->g_663.f3, "p_753->g_663.f3", print_hash_value);
    transparent_crc(p_753->g_664.f0, "p_753->g_664.f0", print_hash_value);
    transparent_crc(p_753->g_664.f1, "p_753->g_664.f1", print_hash_value);
    transparent_crc(p_753->g_664.f2, "p_753->g_664.f2", print_hash_value);
    transparent_crc(p_753->g_664.f3, "p_753->g_664.f3", print_hash_value);
    transparent_crc(p_753->g_690.x, "p_753->g_690.x", print_hash_value);
    transparent_crc(p_753->g_690.y, "p_753->g_690.y", print_hash_value);
    transparent_crc(p_753->g_690.z, "p_753->g_690.z", print_hash_value);
    transparent_crc(p_753->g_690.w, "p_753->g_690.w", print_hash_value);
    transparent_crc(p_753->g_691.s0, "p_753->g_691.s0", print_hash_value);
    transparent_crc(p_753->g_691.s1, "p_753->g_691.s1", print_hash_value);
    transparent_crc(p_753->g_691.s2, "p_753->g_691.s2", print_hash_value);
    transparent_crc(p_753->g_691.s3, "p_753->g_691.s3", print_hash_value);
    transparent_crc(p_753->g_691.s4, "p_753->g_691.s4", print_hash_value);
    transparent_crc(p_753->g_691.s5, "p_753->g_691.s5", print_hash_value);
    transparent_crc(p_753->g_691.s6, "p_753->g_691.s6", print_hash_value);
    transparent_crc(p_753->g_691.s7, "p_753->g_691.s7", print_hash_value);
    transparent_crc(p_753->g_691.s8, "p_753->g_691.s8", print_hash_value);
    transparent_crc(p_753->g_691.s9, "p_753->g_691.s9", print_hash_value);
    transparent_crc(p_753->g_691.sa, "p_753->g_691.sa", print_hash_value);
    transparent_crc(p_753->g_691.sb, "p_753->g_691.sb", print_hash_value);
    transparent_crc(p_753->g_691.sc, "p_753->g_691.sc", print_hash_value);
    transparent_crc(p_753->g_691.sd, "p_753->g_691.sd", print_hash_value);
    transparent_crc(p_753->g_691.se, "p_753->g_691.se", print_hash_value);
    transparent_crc(p_753->g_691.sf, "p_753->g_691.sf", print_hash_value);
    transparent_crc(p_753->g_695.x, "p_753->g_695.x", print_hash_value);
    transparent_crc(p_753->g_695.y, "p_753->g_695.y", print_hash_value);
    transparent_crc(p_753->g_703.s0, "p_753->g_703.s0", print_hash_value);
    transparent_crc(p_753->g_703.s1, "p_753->g_703.s1", print_hash_value);
    transparent_crc(p_753->g_703.s2, "p_753->g_703.s2", print_hash_value);
    transparent_crc(p_753->g_703.s3, "p_753->g_703.s3", print_hash_value);
    transparent_crc(p_753->g_703.s4, "p_753->g_703.s4", print_hash_value);
    transparent_crc(p_753->g_703.s5, "p_753->g_703.s5", print_hash_value);
    transparent_crc(p_753->g_703.s6, "p_753->g_703.s6", print_hash_value);
    transparent_crc(p_753->g_703.s7, "p_753->g_703.s7", print_hash_value);
    transparent_crc(p_753->g_703.s8, "p_753->g_703.s8", print_hash_value);
    transparent_crc(p_753->g_703.s9, "p_753->g_703.s9", print_hash_value);
    transparent_crc(p_753->g_703.sa, "p_753->g_703.sa", print_hash_value);
    transparent_crc(p_753->g_703.sb, "p_753->g_703.sb", print_hash_value);
    transparent_crc(p_753->g_703.sc, "p_753->g_703.sc", print_hash_value);
    transparent_crc(p_753->g_703.sd, "p_753->g_703.sd", print_hash_value);
    transparent_crc(p_753->g_703.se, "p_753->g_703.se", print_hash_value);
    transparent_crc(p_753->g_703.sf, "p_753->g_703.sf", print_hash_value);
    transparent_crc(p_753->g_724, "p_753->g_724", print_hash_value);
    transparent_crc(p_753->g_748.s0, "p_753->g_748.s0", print_hash_value);
    transparent_crc(p_753->g_748.s1, "p_753->g_748.s1", print_hash_value);
    transparent_crc(p_753->g_748.s2, "p_753->g_748.s2", print_hash_value);
    transparent_crc(p_753->g_748.s3, "p_753->g_748.s3", print_hash_value);
    transparent_crc(p_753->g_748.s4, "p_753->g_748.s4", print_hash_value);
    transparent_crc(p_753->g_748.s5, "p_753->g_748.s5", print_hash_value);
    transparent_crc(p_753->g_748.s6, "p_753->g_748.s6", print_hash_value);
    transparent_crc(p_753->g_748.s7, "p_753->g_748.s7", print_hash_value);
    transparent_crc(p_753->g_748.s8, "p_753->g_748.s8", print_hash_value);
    transparent_crc(p_753->g_748.s9, "p_753->g_748.s9", print_hash_value);
    transparent_crc(p_753->g_748.sa, "p_753->g_748.sa", print_hash_value);
    transparent_crc(p_753->g_748.sb, "p_753->g_748.sb", print_hash_value);
    transparent_crc(p_753->g_748.sc, "p_753->g_748.sc", print_hash_value);
    transparent_crc(p_753->g_748.sd, "p_753->g_748.sd", print_hash_value);
    transparent_crc(p_753->g_748.se, "p_753->g_748.se", print_hash_value);
    transparent_crc(p_753->g_748.sf, "p_753->g_748.sf", print_hash_value);
    transparent_crc(p_753->g_749.x, "p_753->g_749.x", print_hash_value);
    transparent_crc(p_753->g_749.y, "p_753->g_749.y", print_hash_value);
    transparent_crc(p_753->g_749.z, "p_753->g_749.z", print_hash_value);
    transparent_crc(p_753->g_749.w, "p_753->g_749.w", print_hash_value);
    transparent_crc(p_753->v_collective, "p_753->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 18; i++)
            transparent_crc(p_753->g_special_values[i + 18 * get_linear_group_id()], "p_753->g_special_values[i + 18 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 18; i++)
            transparent_crc(p_753->l_special_values[i], "p_753->l_special_values[i]", print_hash_value);
    transparent_crc(p_753->l_comm_values[get_linear_local_id()], "p_753->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_753->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()], "p_753->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
