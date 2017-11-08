// --atomics 60 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 75,89,1 -l 75,1,1
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

__constant uint32_t permutations[10][75] = {
{25,24,35,56,7,53,52,67,33,57,8,48,26,71,28,16,44,27,38,59,64,50,68,11,32,47,43,20,42,36,63,55,22,3,10,34,39,14,37,31,60,9,0,12,29,30,69,74,19,62,40,17,70,4,58,6,2,51,54,65,41,23,49,13,72,73,61,21,66,15,1,45,46,18,5}, // permutation 0
{66,8,7,65,16,61,13,49,27,18,4,72,42,1,40,56,74,23,68,43,25,58,3,36,44,29,10,28,12,33,31,47,69,51,39,38,32,30,71,62,17,22,5,35,64,70,14,0,59,53,2,26,52,67,63,9,37,55,73,6,15,11,19,45,46,34,54,20,50,48,41,24,21,57,60}, // permutation 1
{62,19,34,20,49,33,14,18,26,35,7,47,38,64,9,48,6,67,39,58,53,54,74,1,70,41,60,45,36,63,28,46,57,69,23,21,29,32,42,59,16,8,72,27,44,0,30,4,37,25,71,11,40,65,12,52,73,22,3,13,68,56,15,66,5,10,24,61,50,17,55,51,31,43,2}, // permutation 2
{47,62,55,56,52,23,35,67,27,54,33,37,43,25,30,66,41,50,2,60,26,44,51,65,14,11,48,12,9,21,28,13,6,10,69,39,64,32,5,4,1,0,29,22,42,17,49,73,72,61,63,18,45,19,15,36,59,16,20,57,3,71,31,8,53,46,7,24,68,38,40,70,34,58,74}, // permutation 3
{23,13,5,18,21,73,24,49,4,9,43,27,36,66,3,11,31,54,67,56,63,60,7,16,12,14,55,72,57,59,44,8,42,20,25,17,65,46,33,39,37,1,70,69,61,48,34,68,2,52,32,19,51,26,71,30,10,35,74,47,40,22,0,28,45,41,38,53,50,62,29,58,15,6,64}, // permutation 4
{43,55,59,3,4,20,15,44,28,30,40,66,39,63,22,56,52,21,60,14,25,58,61,73,71,2,33,26,36,1,16,27,45,51,11,65,24,62,47,23,0,72,13,70,31,57,10,49,46,64,48,19,74,67,53,5,50,54,32,6,69,68,17,18,12,7,42,8,35,34,41,29,37,38,9}, // permutation 5
{50,11,42,19,10,69,37,71,34,9,48,15,62,23,2,61,43,39,57,22,28,14,41,13,7,1,3,12,70,63,68,8,59,29,18,40,53,54,65,0,58,52,66,55,20,51,24,35,16,33,5,74,44,60,4,21,47,6,45,30,27,73,32,67,46,49,38,26,72,25,17,64,36,31,56}, // permutation 6
{60,9,38,35,5,72,47,46,74,6,63,0,11,73,14,2,7,49,4,21,55,53,59,37,54,64,30,34,33,13,39,56,17,67,52,65,66,16,51,44,50,48,29,41,70,3,23,40,15,25,62,19,26,31,27,36,1,69,24,22,10,12,28,8,43,58,45,61,20,57,68,18,32,42,71}, // permutation 7
{31,46,67,2,23,21,49,12,4,45,70,27,20,63,26,64,43,74,7,52,6,41,47,69,28,56,34,30,18,66,19,72,60,33,61,9,65,11,36,59,5,62,39,13,32,68,51,38,48,24,3,25,57,44,29,58,35,8,14,10,16,37,55,1,53,0,54,15,17,40,73,71,50,22,42}, // permutation 8
{42,29,45,23,63,46,9,24,12,37,66,60,52,70,65,11,44,25,48,74,28,50,39,53,47,4,61,56,18,69,33,5,71,67,34,10,21,73,57,41,51,8,32,19,7,26,17,30,59,2,31,43,16,49,14,6,15,38,1,68,35,22,64,62,58,55,0,54,40,72,27,36,3,13,20} // permutation 9
};

// Seed: 1414756824

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   int32_t  f1;
};

struct S1 {
    int32_t g_2;
    int32_t g_5;
    int32_t g_9[9][2][4];
    uint32_t g_62;
    int32_t **g_73;
    uint32_t g_101;
    int16_t g_103;
    VECTOR(int32_t, 8) g_106;
    VECTOR(int32_t, 4) g_110;
    volatile int16_t g_128[2];
    volatile VECTOR(uint64_t, 8) g_131;
    VECTOR(uint64_t, 4) g_132;
    VECTOR(uint64_t, 8) g_133;
    uint64_t g_144;
    volatile uint64_t * volatile g_149[4];
    uint8_t g_152;
    VECTOR(uint32_t, 8) g_185;
    int32_t * volatile g_202;
    int64_t *g_205;
    VECTOR(int64_t, 8) g_213;
    VECTOR(uint64_t, 8) g_221;
    uint16_t g_227[8][1][3];
    int32_t ** volatile g_228;
    int32_t *g_237;
    int32_t ** volatile g_236;
    int32_t ** volatile g_239[1];
    int8_t g_256;
    int64_t g_257;
    int32_t g_260;
    volatile VECTOR(int8_t, 8) g_263;
    int32_t g_275;
    volatile uint16_t g_304;
    volatile uint16_t *g_303[1];
    volatile uint16_t * volatile *g_302;
    int32_t g_315;
    int32_t *g_323;
    int32_t **g_322[4][2][2];
    int32_t *** volatile g_321;
    union U0 g_367;
    volatile uint64_t g_370[6];
    volatile uint64_t g_371;
    volatile uint64_t *g_369[6];
    volatile uint64_t **g_368;
    int32_t ** volatile g_397;
    int32_t * volatile g_398[9][9];
    int32_t * volatile g_399[4];
    int32_t *g_403;
    int32_t ** volatile g_402;
    VECTOR(uint16_t, 4) g_413;
    volatile VECTOR(uint16_t, 8) g_415;
    volatile VECTOR(uint16_t, 8) g_417;
    VECTOR(uint16_t, 16) g_418;
    VECTOR(uint64_t, 8) g_421;
    volatile VECTOR(uint16_t, 2) g_439;
    uint8_t g_455;
    volatile uint8_t g_470;
    VECTOR(uint64_t, 2) g_489;
    int16_t g_495;
    uint16_t *g_502;
    VECTOR(uint8_t, 8) g_593;
    volatile VECTOR(uint16_t, 4) g_599;
    volatile int32_t g_618;
    int32_t ** volatile g_624[10];
    int32_t ** volatile g_625;
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
int16_t  func_1(struct S1 * p_627);
int32_t * func_13(uint64_t  p_14, int32_t * p_15, uint8_t  p_16, uint32_t  p_17, int32_t * p_18, struct S1 * p_627);
int64_t  func_21(int64_t  p_22, int32_t  p_23, uint64_t  p_24, int32_t * p_25, struct S1 * p_627);
uint64_t  func_35(int32_t * p_36, int32_t * p_37, uint32_t  p_38, struct S1 * p_627);
int32_t * func_39(int32_t * p_40, int32_t  p_41, uint32_t  p_42, struct S1 * p_627);
int32_t * func_43(int32_t  p_44, struct S1 * p_627);
int32_t  func_45(int32_t * p_46, uint32_t  p_47, int16_t  p_48, struct S1 * p_627);
int32_t * func_49(uint64_t  p_50, int64_t  p_51, int32_t * p_52, int32_t * p_53, int32_t * p_54, struct S1 * p_627);
uint8_t  func_57(uint32_t  p_58, int32_t * p_59, uint32_t  p_60, struct S1 * p_627);
int32_t * func_65(uint64_t  p_66, int32_t  p_67, uint32_t  p_68, int32_t  p_69, struct S1 * p_627);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_627->g_2 p_627->g_comm_values p_627->g_62 p_627->l_comm_values p_627->g_9 p_627->g_5 p_627->g_103 p_627->g_128 p_627->g_152 p_627->g_149 p_627->g_213 p_627->g_144 p_627->g_101 p_627->g_221 p_627->g_185 p_627->g_132 p_627->g_133 p_627->g_236 p_627->g_131 p_627->g_110 p_627->g_256 p_627->g_302 p_627->g_321 p_627->g_263 p_627->g_237 p_627->g_371 p_627->g_367.f0 p_627->g_275 p_627->g_106 p_627->g_397 p_627->g_402 p_627->g_227 p_627->g_315 p_627->g_470 p_627->g_418 p_627->g_489 p_627->g_323 p_627->g_370 p_627->g_421 p_627->g_502 p_627->g_593 p_627->g_599 p_627->g_495 p_627->g_413 p_627->g_625
 * writes: p_627->g_2 p_627->g_5 p_627->g_62 p_627->g_73 p_627->g_101 p_627->g_103 p_627->g_9 p_627->g_152 p_627->g_comm_values p_627->g_205 p_627->g_213 p_627->g_227 p_627->g_237 p_627->g_256 p_627->g_257 p_627->g_260 p_627->g_275 p_627->g_322 p_627->g_110 p_627->g_403 p_627->g_470 p_627->g_418 p_627->g_413 p_627->g_495 p_627->l_comm_values p_627->g_502
 */
int16_t  func_1(struct S1 * p_627)
{ /* block id: 4 */
    int64_t l_70 = 0L;
    int32_t *l_466 = &p_627->g_2;
    int32_t **l_570 = &p_627->g_323;
    int32_t l_585 = 0x6D5930FAL;
    int32_t l_588 = 0x2C9F47D6L;
    VECTOR(uint16_t, 8) l_597 = (VECTOR(uint16_t, 8))(0xC08EL, (VECTOR(uint16_t, 4))(0xC08EL, (VECTOR(uint16_t, 2))(0xC08EL, 0x6633L), 0x6633L), 0x6633L, 0xC08EL, 0x6633L);
    VECTOR(uint16_t, 8) l_598 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), 65535UL, 1UL, 65535UL);
    VECTOR(uint16_t, 4) l_600 = (VECTOR(uint16_t, 4))(0x1F4AL, (VECTOR(uint16_t, 2))(0x1F4AL, 9UL), 9UL);
    uint16_t **l_604 = &p_627->g_502;
    uint16_t l_616 = 65535UL;
    int16_t l_617[10] = {0x5F30L,0x5F30L,0x5F30L,0x5F30L,0x5F30L,0x5F30L,0x5F30L,0x5F30L,0x5F30L,0x5F30L};
    int i;
    for (p_627->g_2 = 25; (p_627->g_2 > 25); ++p_627->g_2)
    { /* block id: 7 */
        int32_t *l_30[3][1][6] = {{{&p_627->g_5,&p_627->g_5,&p_627->g_5,&p_627->g_5,&p_627->g_5,&p_627->g_5}},{{&p_627->g_5,&p_627->g_5,&p_627->g_5,&p_627->g_5,&p_627->g_5,&p_627->g_5}},{{&p_627->g_5,&p_627->g_5,&p_627->g_5,&p_627->g_5,&p_627->g_5,&p_627->g_5}}};
        int32_t l_467 = 0x55FE6FC9L;
        int i, j, k;
        for (p_627->g_5 = 0; (p_627->g_5 == 0); p_627->g_5 = safe_add_func_int16_t_s_s(p_627->g_5, 9))
        { /* block id: 10 */
            int32_t *l_8[1];
            uint64_t l_10 = 0xA53086335C0DE450L;
            uint32_t *l_61 = &p_627->g_62;
            int32_t *l_259 = &p_627->g_260;
            int32_t **l_396 = &l_30[1][0][1];
            int i;
            for (i = 0; i < 1; i++)
                l_8[i] = &p_627->g_9[5][0][3];
            --l_10;
            (*l_396) = func_13(((safe_mod_func_int64_t_s_s(func_21(((safe_rshift_func_int8_t_s_s(((p_627->g_comm_values[p_627->tid] , ((((safe_lshift_func_uint8_t_u_u((l_8[0] == &p_627->g_9[5][0][3]), (l_30[2][0][2] == (void*)0))) , (safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u(p_627->g_2, func_35(((*l_396) = func_39(func_43(((*l_259) = func_45(func_49((safe_div_func_uint8_t_u_u(func_57((++(*l_61)), func_65(l_70, (p_627->l_comm_values[(safe_mod_func_uint32_t_u_u(p_627->tid, 75))] , ((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x7C71010FL, (-1L))).xyyy)))).ywzzxxzxxxzzwwyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((6UL > p_627->g_5), 0x4954824FL, 0x4264A3A2L, (-10L), ((VECTOR(int32_t, 4))(0x036206CBL)))).s40)).xxyxyxyxyyyyxxyy, ((VECTOR(int32_t, 16))(0L))))).s8), p_627->g_9[5][0][3], p_627->g_2, p_627), p_627->g_5, p_627), 0x8AL)), p_627->g_132.w, l_30[2][0][2], l_61, l_8[0], p_627), l_70, l_70, p_627)), p_627), l_70, p_627->g_185.s0, p_627)), &p_627->g_5, p_627->g_106.s0, p_627))), FAKE_DIVERGE(p_627->global_2_offset, get_global_id(2), 10)))) , p_627->g_256) , (*p_627->g_397))) != (void*)0), 1)) == 4L), p_627->g_2, p_627->g_132.w, &p_627->g_2, p_627), 0x0050365A202571AAL)) != 7L), l_466, l_467, (*l_466), &p_627->g_5, p_627);
            if ((atomic_inc(&p_627->g_atomic_input[60 * get_linear_group_id() + 11]) == 3))
            { /* block id: 193 */
                int32_t l_509 = 0x22A3D9A6L;
                int64_t l_532 = 0x50C116BFF4D91D4AL;
                for (l_509 = 8; (l_509 < (-11)); l_509--)
                { /* block id: 196 */
                    VECTOR(int32_t, 2) l_512 = (VECTOR(int32_t, 2))((-1L), 0x166AE9F1L);
                    VECTOR(int32_t, 4) l_513 = (VECTOR(int32_t, 4))(0x3F3F9834L, (VECTOR(int32_t, 2))(0x3F3F9834L, 0x5EF8C594L), 0x5EF8C594L);
                    VECTOR(int32_t, 2) l_514 = (VECTOR(int32_t, 2))(0x38078AB5L, 0x41ECECF2L);
                    VECTOR(int32_t, 2) l_515 = (VECTOR(int32_t, 2))(9L, 0x34EF41ACL);
                    VECTOR(int32_t, 8) l_516 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x0192C43EL), 0x0192C43EL), 0x0192C43EL, 8L, 0x0192C43EL);
                    uint16_t l_527 = 1UL;
                    int32_t *l_528[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    if (((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(l_512.yxxx)).odd, ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 2))(l_513.zz)).xyxyxxxxxxxyyxxx, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(0x35244467L, 0x11B2CCE8L, 0x06113F79L, 0L)).wwwyxwwy, ((VECTOR(int32_t, 8))(l_514.yxxyyxxy))))).s0550465741065547))).s95, ((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(l_515.yyyxyyxy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_516.s4721343674774445)).sc2)), 0x2F64F399L, 0x5AD45566L)).wwwxwzww))).s20))).yxxyyyxy))).s0)
                    { /* block id: 197 */
                        int32_t l_518[2][2] = {{0x118475E1L,0x118475E1L},{0x118475E1L,0x118475E1L}};
                        int32_t *l_517 = &l_518[0][0];
                        int32_t *l_519 = &l_518[1][1];
                        int32_t l_520 = (-2L);
                        int64_t l_521 = 0x7769F266A0F2229DL;
                        uint8_t l_522 = 0UL;
                        VECTOR(int32_t, 16) l_525 = (VECTOR(int32_t, 16))(0x29B81740L, (VECTOR(int32_t, 4))(0x29B81740L, (VECTOR(int32_t, 2))(0x29B81740L, (-9L)), (-9L)), (-9L), 0x29B81740L, (-9L), (VECTOR(int32_t, 2))(0x29B81740L, (-9L)), (VECTOR(int32_t, 2))(0x29B81740L, (-9L)), 0x29B81740L, (-9L), 0x29B81740L, (-9L));
                        int i, j;
                        l_517 = (l_519 = l_517);
                        l_522++;
                        (*l_519) |= ((VECTOR(int32_t, 16))(l_525.sb3e6019cdc9155b7)).s3;
                    }
                    else
                    { /* block id: 202 */
                        uint8_t l_526 = 0xD6L;
                        l_512.y = l_526;
                    }
                    l_528[2] = ((((VECTOR(int64_t, 2))((-1L), (-9L))).lo , l_527) , (void*)0);
                    for (l_516.s0 = 0; (l_516.s0 < 9); ++l_516.s0)
                    { /* block id: 208 */
                        uint8_t l_531 = 0x2BL;
                        l_531 &= 0x723E0E04L;
                    }
                }
                if (l_532)
                { /* block id: 212 */
                    int64_t l_533 = (-3L);
                    uint8_t l_534 = 0UL;
                    --l_534;
                }
                else
                { /* block id: 214 */
                    int32_t l_537 = 0x0ECE53E0L;
                    VECTOR(int32_t, 2) l_538 = (VECTOR(int32_t, 2))(0x1932A6BEL, 0x4C3EF490L);
                    VECTOR(int32_t, 16) l_539 = (VECTOR(int32_t, 16))(0x7B63E823L, (VECTOR(int32_t, 4))(0x7B63E823L, (VECTOR(int32_t, 2))(0x7B63E823L, 0x5D73AED9L), 0x5D73AED9L), 0x5D73AED9L, 0x7B63E823L, 0x5D73AED9L, (VECTOR(int32_t, 2))(0x7B63E823L, 0x5D73AED9L), (VECTOR(int32_t, 2))(0x7B63E823L, 0x5D73AED9L), 0x7B63E823L, 0x5D73AED9L, 0x7B63E823L, 0x5D73AED9L);
                    uint64_t l_540 = 6UL;
                    uint32_t l_541 = 0xCABF9889L;
                    VECTOR(uint64_t, 2) l_542 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x3492E04414EFE083L);
                    VECTOR(int32_t, 2) l_543 = (VECTOR(int32_t, 2))(0x55D7439AL, (-8L));
                    int16_t l_544 = 1L;
                    VECTOR(int32_t, 4) l_545 = (VECTOR(int32_t, 4))(0x6305F968L, (VECTOR(int32_t, 2))(0x6305F968L, 0x54C62396L), 0x54C62396L);
                    uint32_t l_546 = 0x3CE03A19L;
                    int16_t l_547 = 0x56B8L;
                    uint8_t l_548 = 248UL;
                    int64_t l_551 = 1L;
                    VECTOR(int32_t, 8) l_552 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x12A76831L), 0x12A76831L), 0x12A76831L, (-10L), 0x12A76831L);
                    VECTOR(int32_t, 16) l_553 = (VECTOR(int32_t, 16))(0x224A557DL, (VECTOR(int32_t, 4))(0x224A557DL, (VECTOR(int32_t, 2))(0x224A557DL, (-4L)), (-4L)), (-4L), 0x224A557DL, (-4L), (VECTOR(int32_t, 2))(0x224A557DL, (-4L)), (VECTOR(int32_t, 2))(0x224A557DL, (-4L)), 0x224A557DL, (-4L), 0x224A557DL, (-4L));
                    uint8_t l_554 = 7UL;
                    uint64_t l_555 = 1UL;
                    int64_t l_556 = 0x74FFDAF288FBCE68L;
                    int16_t l_557[8] = {1L,(-3L),1L,1L,(-3L),1L,1L,(-3L)};
                    int i;
                    l_556 ^= ((VECTOR(int32_t, 16))(0x3940B650L, l_537, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_538.xyxy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_539.sed)), 0L, (-6L), l_540, 0x0251785FL, 0x0B9BE7E8L, 0x1DA62045L)).s1, (l_509 |= (l_541 , (((VECTOR(uint64_t, 8))(l_542.xyxyyyyx)).s2 , ((VECTOR(int32_t, 2))(l_543.yx)).hi))), 0x29BF98FBL, 0x0B55DF99L)))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x38C87ECEL, 0x4DECEC09L, 0x52605B7CL, 0x04C5837DL)), l_544, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_545.yxzxwzzz)).even, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 4))(0x0237L, (l_546 , l_547), 0x619CL, (-1L))).xxwwyywxzwxxxyxz, ((VECTOR(uint16_t, 4))((l_548--), l_551, 65534UL, 65531UL)).wwxxwxyxxzzwzxwy))).s7947))), ((VECTOR(int32_t, 2))(l_552.s26)), 0x14BD452CL, ((VECTOR(int32_t, 2))(l_553.s98)).lo, l_554, 0x1DA42E79L, 0x58C0D73BL)).s67)).xyxyyxyx, ((VECTOR(int32_t, 8))(0x254120BDL))))).s3, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 4))(0x18D152B5L)), 0x5266BB7FL, l_555, (-4L), ((VECTOR(int32_t, 2))(0x3B0BB7EBL)), 0x01C8D4CAL, 0x0496CFCDL)).s0;
                    l_509 ^= l_557[2];
                }
                unsigned int result = 0;
                result += l_509;
                result += l_532;
                atomic_add(&p_627->g_special_values[60 * get_linear_group_id() + 11], result);
            }
            else
            { /* block id: 220 */
                (1 + 1);
            }
        }
    }
    l_466 = (void*)0;
    for (p_627->g_275 = (-17); (p_627->g_275 < 27); p_627->g_275 = safe_add_func_uint16_t_u_u(p_627->g_275, 7))
    { /* block id: 228 */
        int16_t l_571 = 0x2C97L;
        uint16_t **l_574 = &p_627->g_502;
        uint16_t ***l_575 = (void*)0;
        uint16_t **l_577 = &p_627->g_502;
        uint16_t ***l_576 = &l_577;
        int32_t *l_584[1];
        uint64_t l_586 = 7UL;
        int16_t l_587[4][8][8] = {{{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L}},{{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L}},{{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L}},{{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L},{0x1C94L,0x1C94L,0L,(-7L),0x3FC3L,(-7L),0L,0x1C94L}}};
        VECTOR(uint16_t, 4) l_596 = (VECTOR(uint16_t, 4))(0x368BL, (VECTOR(uint16_t, 2))(0x368BL, 65534UL), 65534UL);
        VECTOR(uint16_t, 4) l_601 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL);
        int16_t *l_615 = &p_627->g_495;
        uint32_t l_619 = 0x8ABD7DF2L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_584[i] = &p_627->g_5;
        l_588 |= (l_587[1][2][7] = ((-1L) & ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(((l_570 == (void*)0) , l_571), (l_585 = ((safe_div_func_uint64_t_u_u((l_571 , (l_574 == ((*l_576) = &p_627->g_502))), (safe_lshift_func_int16_t_s_s(0x47A1L, 2)))) >= (safe_div_func_uint64_t_u_u((((safe_mul_func_uint8_t_u_u(l_571, 0x2BL)) | p_627->g_421.s6) , l_70), (-1L))))))), p_627->g_9[2][0][1])), (-1L))), (*p_627->g_502))), 1)) || l_586)));
        l_585 = (safe_mod_func_int64_t_s_s((((safe_mul_func_uint16_t_u_u((((VECTOR(uint8_t, 16))(p_627->g_593.s2026667755254274)).sd <= 0x48L), (safe_div_func_uint16_t_u_u((+((VECTOR(uint16_t, 16))(mad_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(3UL, (*p_627->g_502), 65533UL, 0x01B9L)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(FAKE_DIVERGE(p_627->local_2_offset, get_local_id(2), 10), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(65532UL, 0x0067L, 0xD5F7L, 0x80ADL)))).x, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_596.yz)).xyyyxxyx)).s10)).xxyyyxxxyyyyxxxx)).s62, ((VECTOR(uint16_t, 4))(FAKE_DIVERGE(p_627->local_0_offset, get_local_id(0), 10), 2UL, 0x071BL, 0x9150L)).odd))).xyyyyyyxxyyyxxxy, ((VECTOR(uint16_t, 4))(l_597.s1164)).zzzwxxywwxyxxxww))).s3202)), 0x1534L, 0UL)).s35)), 4UL, 65534UL)))).s6047121604373460, ((VECTOR(uint16_t, 8))(0x75F2L, ((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_598.s7726)).xwzwzywz)).odd)), ((VECTOR(uint16_t, 2))(p_627->g_599.zw)).yyyy, ((VECTOR(uint16_t, 8))(l_600.xyyzyzzz)).odd))), ((VECTOR(uint16_t, 2))(0x52CEL, 0xE296L)), 1UL)).s7575221745027407, ((VECTOR(uint16_t, 4))(l_601.wzzw)).xwzyxxxywzyzwxyw))).s5), ((((p_627->g_593.s3 < (safe_add_func_int16_t_s_s((GROUP_DIVERGE(1, 1) ^ 7UL), ((void*)0 == l_604)))) , ((safe_add_func_uint64_t_u_u((((VECTOR(int8_t, 8))(7L, 0x1EL, ((*p_627->g_502) || ((*l_615) = (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(p_627->g_106.s0, l_600.y)), p_627->g_495)), 10)), p_627->g_418.s8)))), ((VECTOR(int8_t, 4))(0x5FL)), 0L)).s5 == 0x93L), p_627->g_413.y)) == p_627->g_418.s1)) < l_616) , 4UL))))) | p_627->g_418.s7) , p_627->g_370[0]), 0x53B9A87D3D02B97FL));
        --l_619;
    }
    for (l_616 = (-6); (l_616 < 38); l_616++)
    { /* block id: 239 */
        int8_t l_626 = 0x0CL;
        (*p_627->g_625) = (*p_627->g_397);
        return l_626;
    }
    return p_627->g_110.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_627->g_470 p_627->g_418 p_627->g_489 p_627->g_323 p_627->g_315 p_627->g_103 p_627->g_2 p_627->g_256 p_627->g_221 p_627->g_9 p_627->g_370 p_627->g_237
 * writes: p_627->g_470 p_627->g_418 p_627->g_413 p_627->g_103 p_627->g_256 p_627->g_495 p_627->l_comm_values p_627->g_502
 */
int32_t * func_13(uint64_t  p_14, int32_t * p_15, uint8_t  p_16, uint32_t  p_17, int32_t * p_18, struct S1 * p_627)
{ /* block id: 175 */
    int32_t **l_468 = &p_627->g_237;
    int32_t l_469 = (-2L);
    VECTOR(uint16_t, 8) l_475 = (VECTOR(uint16_t, 8))(0xFD50L, (VECTOR(uint16_t, 4))(0xFD50L, (VECTOR(uint16_t, 2))(0xFD50L, 0UL), 0UL), 0UL, 0xFD50L, 0UL);
    uint8_t *l_488 = &p_627->g_152;
    uint8_t **l_487 = &l_488;
    uint16_t l_491[7] = {0xAFA8L,1UL,0xAFA8L,0xAFA8L,1UL,0xAFA8L,0xAFA8L};
    int32_t l_496 = 1L;
    int32_t *l_503[2];
    int i;
    for (i = 0; i < 2; i++)
        l_503[i] = &p_627->g_315;
    if ((l_468 == (void*)0))
    { /* block id: 176 */
        uint16_t *l_480 = (void*)0;
        int32_t *l_490 = &l_469;
        int16_t *l_492 = &p_627->g_103;
        int8_t *l_493 = &p_627->g_256;
        int16_t *l_494 = &p_627->g_495;
        int64_t *l_499 = (void*)0;
        int64_t *l_500 = (void*)0;
        int64_t *l_501[9] = {&p_627->g_257,&p_627->g_257,&p_627->g_257,&p_627->g_257,&p_627->g_257,&p_627->g_257,&p_627->g_257,&p_627->g_257,&p_627->g_257};
        int i;
        --p_627->g_470;
        l_496 &= (safe_mul_func_int16_t_s_s((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_475.s6226)).xwxzwwyx)).s3 , ((*l_494) = ((0x18L >= ((safe_div_func_int8_t_s_s(((*l_493) &= ((((~(safe_mul_func_uint16_t_u_u((--p_627->g_418.sf), ((*l_492) &= (((0x9AF76244L && 4294967295UL) > (((safe_mul_func_uint16_t_u_u(((p_14 > ((void*)0 != l_487)) & ((VECTOR(uint64_t, 16))(p_627->g_489.yyyxyyxyxxxxxxyx)).s5), ((p_627->g_413.z = 1UL) && (l_490 != (((*p_627->g_323) , l_491[2]) , (void*)0))))) > GROUP_DIVERGE(1, 1)) , (*l_490))) , (*l_490)))))) < p_17) != (*p_15)) & 254UL)), p_627->g_221.s6)) | (-3L))) && 0L))), p_627->g_9[6][0][1]));
        atomic_max(&p_627->g_atomic_reduction[get_linear_group_id()], (p_627->g_370[2] < (safe_mul_func_uint16_t_u_u((((0UL <= p_627->g_2) >= (((p_627->l_comm_values[(safe_mod_func_uint32_t_u_u(p_627->tid, 75))] = (*l_490)) | (((p_627->g_502 = &p_627->g_227[7][0][2]) != &p_627->g_227[5][0][1]) , (((void*)0 == l_503[0]) ^ ((safe_unary_minus_func_int32_t_s((safe_mod_func_uint8_t_u_u(((((p_16 > p_17) >= 0x6FD3L) , p_16) , 0xCCL), (*l_490))))) >= 6L)))) , 0L)) || 0x6EL), 65533UL))));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_627->v_collective += p_627->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    else
    { /* block id: 187 */
        uint16_t **l_507 = &p_627->g_502;
        int32_t l_508 = 9L;
        l_508 = (((VECTOR(int16_t, 2))(0x03B9L, 9L)).hi & ((void*)0 == l_507));
    }
    return (*l_468);
}


/* ------------------------------------------ */
/* 
 * reads : p_627->g_62 p_627->g_413 p_627->g_371 p_627->g_415 p_627->g_417 p_627->g_418 p_627->g_421 p_627->g_227 p_627->g_comm_values p_627->g_315 p_627->g_397 p_627->g_237
 * writes: p_627->g_62 p_627->g_227 p_627->g_403
 */
int64_t  func_21(int64_t  p_22, int32_t  p_23, uint64_t  p_24, int32_t * p_25, struct S1 * p_627)
{ /* block id: 160 */
    union U0 l_412 = {1UL};
    uint32_t *l_423[7];
    int64_t *l_450 = (void*)0;
    int64_t *l_451 = &p_627->g_257;
    uint8_t *l_452 = (void*)0;
    uint8_t *l_453 = &p_627->g_152;
    uint8_t *l_454[10][8][3] = {{{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455}},{{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455}},{{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455}},{{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455}},{{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455}},{{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455}},{{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455}},{{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455}},{{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455}},{{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455},{&p_627->g_455,&p_627->g_455,&p_627->g_455}}};
    int32_t l_456[1];
    int16_t *l_457[5];
    int32_t l_458 = 0x25543857L;
    uint32_t l_459 = 1UL;
    uint16_t l_460[7][9] = {{0x31E9L,65533UL,65527UL,65535UL,65535UL,0x31E9L,65535UL,0x80D7L,65535UL},{0x31E9L,65533UL,65527UL,65535UL,65535UL,0x31E9L,65535UL,0x80D7L,65535UL},{0x31E9L,65533UL,65527UL,65535UL,65535UL,0x31E9L,65535UL,0x80D7L,65535UL},{0x31E9L,65533UL,65527UL,65535UL,65535UL,0x31E9L,65535UL,0x80D7L,65535UL},{0x31E9L,65533UL,65527UL,65535UL,65535UL,0x31E9L,65535UL,0x80D7L,65535UL},{0x31E9L,65533UL,65527UL,65535UL,65535UL,0x31E9L,65535UL,0x80D7L,65535UL},{0x31E9L,65533UL,65527UL,65535UL,65535UL,0x31E9L,65535UL,0x80D7L,65535UL}};
    uint16_t *l_462 = &l_460[2][3];
    uint16_t **l_461 = &l_462;
    int32_t *l_463 = &p_627->g_5;
    int32_t **l_464 = &p_627->g_403;
    uint8_t l_465 = 0UL;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_423[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_456[i] = (-8L);
    for (i = 0; i < 5; i++)
        l_457[i] = &p_627->g_103;
    for (p_627->g_62 = (-12); (p_627->g_62 == 31); ++p_627->g_62)
    { /* block id: 163 */
        uint16_t *l_414[2];
        VECTOR(uint16_t, 2) l_416 = (VECTOR(uint16_t, 2))(0x8053L, 65535UL);
        uint32_t *l_422 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_414[i] = &p_627->g_227[5][0][2];
        p_23 = (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(5L, 0x373BL)).xyxx)).z && (safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((p_627->g_227[2][0][0] |= (l_412 , ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(p_627->g_413.xx)).yxxxxxxx))), ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 16))((4294967295UL == (((+p_627->g_371) , l_414[1]) != (void*)0)), 0x5A63L, ((VECTOR(uint16_t, 4))(((0x46L & 2L) <= ((VECTOR(uint16_t, 2))(p_627->g_415.s40)).lo), FAKE_DIVERGE(p_627->global_0_offset, get_global_id(0), 10), 65535UL, 0UL)), ((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),VECTOR(uint16_t, 8),((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x9963L, 0x1704L)).xxxy)).wywwxxwwxwxzzwwx)).s9249, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_416.yyxyxxyyxxxyyyyx)).s25)), 5UL, 7UL))))).xzyyxzww, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_627->g_417.s6530)).wywzwxxywxwxyxzw)).sc38f)).xxzxxywy)), ((VECTOR(uint16_t, 8))(p_627->g_418.s2b4df5da))))), 1UL, 4UL)).odd, (uint16_t)(safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(p_627->g_421.s06733204)).s5, (0xB01BL > GROUP_DIVERGE(1, 1)))), (uint16_t)(l_422 != l_423[5])))))).sced7, ((VECTOR(uint16_t, 4))(9UL))))).w)), p_627->g_comm_values[p_627->tid])), p_24)), p_627->g_315)));
    }
    (*l_464) = (*p_627->g_397);
    p_25 = &p_23;
    return l_465;
}


/* ------------------------------------------ */
/* 
 * reads : p_627->g_397 p_627->g_237 p_627->g_402
 * writes: p_627->g_237 p_627->g_9 p_627->g_403
 */
uint64_t  func_35(int32_t * p_36, int32_t * p_37, uint32_t  p_38, struct S1 * p_627)
{ /* block id: 154 */
    int32_t *l_400 = &p_627->g_9[6][1][2];
    int32_t **l_401 = &p_627->g_237;
    (*p_627->g_397) = p_36;
    (*l_400) = ((void*)0 == p_36);
    (*p_627->g_402) = ((*l_401) = (*p_627->g_397));
    return p_38;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_39(int32_t * p_40, int32_t  p_41, uint32_t  p_42, struct S1 * p_627)
{ /* block id: 151 */
    return p_40;
}


/* ------------------------------------------ */
/* 
 * reads : p_627->g_263 p_627->g_213 p_627->g_110 p_627->g_144 p_627->g_132 p_627->g_256 p_627->g_275 p_627->g_302 p_627->g_321 p_627->g_133 p_627->g_237 p_627->l_comm_values p_627->g_103 p_627->g_62 p_627->g_371 p_627->g_221 p_627->g_367.f0 p_627->g_comm_values p_627->g_236
 * writes: p_627->g_275 p_627->g_322 p_627->g_62 p_627->g_103 p_627->g_110 p_627->g_257 p_627->g_152
 */
int32_t * func_43(int32_t  p_44, struct S1 * p_627)
{ /* block id: 99 */
    VECTOR(uint64_t, 2) l_264 = (VECTOR(uint64_t, 2))(0x980DC1767E771262L, 0UL);
    VECTOR(uint16_t, 4) l_269 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x2737L), 0x2737L);
    VECTOR(uint16_t, 4) l_270 = (VECTOR(uint16_t, 4))(0xC06DL, (VECTOR(uint16_t, 2))(0xC06DL, 0xD72DL), 0xD72DL);
    VECTOR(uint16_t, 16) l_271 = (VECTOR(uint16_t, 16))(0x54CAL, (VECTOR(uint16_t, 4))(0x54CAL, (VECTOR(uint16_t, 2))(0x54CAL, 65535UL), 65535UL), 65535UL, 0x54CAL, 65535UL, (VECTOR(uint16_t, 2))(0x54CAL, 65535UL), (VECTOR(uint16_t, 2))(0x54CAL, 65535UL), 0x54CAL, 65535UL, 0x54CAL, 65535UL);
    int32_t *l_274[8] = {&p_627->g_275,&p_627->g_275,&p_627->g_275,&p_627->g_275,&p_627->g_275,&p_627->g_275,&p_627->g_275,&p_627->g_275};
    int32_t l_276 = 3L;
    uint16_t l_279 = 1UL;
    VECTOR(uint64_t, 8) l_298 = (VECTOR(uint64_t, 8))(2UL, (VECTOR(uint64_t, 4))(2UL, (VECTOR(uint64_t, 2))(2UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 2UL, 18446744073709551615UL);
    uint16_t **l_301 = (void*)0;
    VECTOR(int32_t, 2) l_311 = (VECTOR(int32_t, 2))(0L, 0x1C9501C3L);
    int64_t l_313 = 9L;
    int32_t **l_320 = &l_274[0];
    int16_t *l_324 = &p_627->g_103;
    int8_t *l_351[7][6] = {{&p_627->g_256,&p_627->g_256,&p_627->g_256,&p_627->g_256,&p_627->g_256,(void*)0},{&p_627->g_256,&p_627->g_256,&p_627->g_256,&p_627->g_256,&p_627->g_256,(void*)0},{&p_627->g_256,&p_627->g_256,&p_627->g_256,&p_627->g_256,&p_627->g_256,(void*)0},{&p_627->g_256,&p_627->g_256,&p_627->g_256,&p_627->g_256,&p_627->g_256,(void*)0},{&p_627->g_256,&p_627->g_256,&p_627->g_256,&p_627->g_256,&p_627->g_256,(void*)0},{&p_627->g_256,&p_627->g_256,&p_627->g_256,&p_627->g_256,&p_627->g_256,(void*)0},{&p_627->g_256,&p_627->g_256,&p_627->g_256,&p_627->g_256,&p_627->g_256,(void*)0}};
    int32_t l_352[7][10][3] = {{{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)}},{{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)}},{{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)}},{{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)}},{{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)}},{{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)}},{{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)},{(-7L),0x060C42ACL,(-7L)}}};
    int32_t *l_353[9];
    int32_t *l_375 = &p_627->g_260;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_353[i] = &p_627->g_9[3][1][1];
    if (((((((safe_lshift_func_int8_t_s_u((((VECTOR(int8_t, 2))(p_627->g_263.s65)).hi <= p_627->g_213.s6), 3)) > p_627->g_110.y) & ((p_627->g_144 , (((&p_627->g_144 == (void*)0) <= (p_44 > ((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_264.xyxxyxyxyyyxyxxy)).even)).s0 != (((((safe_sub_func_int64_t_s_s((((((((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(abs(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 2))(l_269.yx)).yxyyxyxxxyxyyxyy, ((VECTOR(uint16_t, 16))(l_270.wwzywwywzxwywwxz))))).s4f)).yxyyyyyy, ((VECTOR(uint16_t, 4))(l_271.s05f4)).wzxxxyxx))).even, (uint16_t)(safe_add_func_int32_t_s_s(((l_276 ^= p_627->g_110.z) , l_271.s6), (((((safe_sub_func_int64_t_s_s(((6L > 18446744073709551609UL) ^ p_627->g_132.y), l_279)) != p_44) != p_627->g_110.y) , l_279) , l_279)))))).wwwwzzwxyzzwyxyx))).s8, 15)) < l_279) , &l_279) == &p_627->g_227[2][0][0]) >= 1UL) >= l_271.se) , p_44), 0x659A3CBAA07DB0CEL)) ^ 5UL) | GROUP_DIVERGE(1, 1)) <= 0x717E3472C8899B70L) , 0x56318096DA207F86L)) | 0x93242E56L))) | FAKE_DIVERGE(p_627->global_2_offset, get_global_id(2), 10))) > 0UL)) && l_276) > p_627->g_256) || p_44))
    { /* block id: 101 */
        uint32_t l_307 = 0x71A9AA2DL;
        int8_t l_308 = 0x13L;
        int32_t l_312 = 4L;
        int32_t l_314[3];
        uint16_t l_317 = 0xC259L;
        int i;
        for (i = 0; i < 3; i++)
            l_314[i] = 0x5880E8BDL;
        if ((atomic_inc(&p_627->l_atomic_input[42]) == 0))
        { /* block id: 103 */
            int32_t l_280 = (-4L);
            for (l_280 = 0; (l_280 > 19); l_280 = safe_add_func_uint64_t_u_u(l_280, 4))
            { /* block id: 106 */
                int32_t l_284 = 1L;
                int32_t *l_283 = &l_284;
                uint32_t l_285 = 0UL;
                union U0 l_286[9] = {{0xDE48DDDBL},{0xDE48DDDBL},{0xDE48DDDBL},{0xDE48DDDBL},{0xDE48DDDBL},{0xDE48DDDBL},{0xDE48DDDBL},{0xDE48DDDBL},{0xDE48DDDBL}};
                union U0 l_287 = {0xECD37ABAL};
                union U0 l_288 = {0xF201FA34L};
                int32_t l_289[8][7][4] = {{{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L}},{{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L}},{{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L}},{{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L}},{{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L}},{{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L}},{{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L}},{{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L},{0x2E959DB5L,0x3B3B1A93L,(-7L),0x5386C695L}}};
                int8_t l_290 = 0x7DL;
                int i, j, k;
                l_283 = l_283;
                l_290 = (((l_288 = ((l_285 , l_286[3]) , l_287)) , 0x7779L) , l_289[4][3][0]);
            }
            unsigned int result = 0;
            result += l_280;
            atomic_add(&p_627->l_special_values[42], result);
        }
        else
        { /* block id: 111 */
            (1 + 1);
        }
        for (p_627->g_275 = 0; (p_627->g_275 > 7); ++p_627->g_275)
        { /* block id: 116 */
            int8_t l_293 = (-1L);
            if (l_293)
                break;
        }
        if ((safe_lshift_func_int16_t_s_s(p_44, (((safe_mul_func_int16_t_s_s(1L, (((VECTOR(uint64_t, 4))(clz(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_298.s22532153)).s03)))).yyyy))).x ^ (0x676E28B1L < (safe_mod_func_int8_t_s_s(((l_301 != p_627->g_302) ^ ((p_44 >= (((!((safe_div_func_uint32_t_u_u(((((p_44 && p_44) >= (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x7BL, 0x25L)).xxyxxyxyyyxyyxyx)).s3 == (-1L))) , l_307) > p_44), l_308)) && FAKE_DIVERGE(p_627->local_1_offset, get_local_id(1), 10))) <= l_308) != p_44)) || 0x7AL)), 0xB8L)))))) <= l_308) & p_44))))
        { /* block id: 119 */
            int32_t *l_309 = (void*)0;
            return l_309;
        }
        else
        { /* block id: 121 */
            int32_t *l_310[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int8_t l_316 = (-1L);
            int i;
            --l_317;
            (*p_627->g_321) = l_320;
        }
    }
    else
    { /* block id: 125 */
        uint64_t *l_333 = (void*)0;
        uint64_t *l_334[2];
        uint32_t l_337[10] = {4294967294UL,4294967295UL,0xB1A76D82L,4294967295UL,4294967294UL,4294967294UL,4294967295UL,0xB1A76D82L,4294967295UL,4294967294UL};
        int32_t *l_338 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_334[i] = (void*)0;
        (*p_627->g_237) = ((&p_627->g_128[1] == ((p_44 < FAKE_DIVERGE(p_627->global_0_offset, get_global_id(0), 10)) , l_324)) && (safe_rshift_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), p_627->g_263.s1)) > (p_44 ^ (safe_unary_minus_func_int8_t_s((p_44 != (0x3FL == ((((GROUP_DIVERGE(2, 1) == ((l_276 = (safe_unary_minus_func_uint32_t_u(0x5BC5E591L))) >= (l_337[9] = ((safe_rshift_func_uint8_t_u_s(0UL, 2)) , p_627->g_133.s2)))) && l_337[9]) > 0x5EEDD2B8BD8121BCL) , l_337[9]))))))), 7)));
        return l_338;
    }
    p_627->g_110.z ^= (safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((~((l_270.w ^ 0UL) >= ((safe_div_func_int32_t_s_s((1UL == ((safe_add_func_uint8_t_u_u(((safe_div_func_int64_t_s_s((0xF3EB5AF86F4B8EACL == 0x474E96E200CB1E2FL), (((l_276 = (l_311.y ^= (((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(0L, ((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(l_276, 6L, 0x1CL, ((safe_add_func_int8_t_s_s(p_627->l_comm_values[(safe_mod_func_uint32_t_u_u(p_627->tid, 75))], (0x09CA098BL > (((*l_324) &= 0x7472L) & l_298.s6)))) , 0x1FL), ((VECTOR(int8_t, 2))(8L)), (-6L), ((VECTOR(int8_t, 2))((-1L))), 0x59L, 0L, 7L, ((VECTOR(int8_t, 4))(0x30L)))).s7045, ((VECTOR(int8_t, 4))(0x10L))))).hi)).yyyy)).hi)).xyyxyxxy, ((VECTOR(int8_t, 8))(4L))))), 0x75L, 2L, 0x07L, ((VECTOR(int8_t, 2))(0x1FL)), 0x27L, 0L)).saf5a, ((VECTOR(int8_t, 4))(0x13L))))).hi, ((VECTOR(int8_t, 2))(0x54L))))).odd & p_627->g_263.s7))) && 0x85L) && l_352[3][0][2]))) < 0x54253CF6CDC54B03L), l_298.s5)) != 0x5345CDBFL)), (*p_627->g_237))) || FAKE_DIVERGE(p_627->group_0_offset, get_group_id(0), 10)))) ^ 3L), p_44)), l_298.s0));
    for (l_279 = (-26); (l_279 < 6); l_279 = safe_add_func_int8_t_s_s(l_279, 1))
    { /* block id: 137 */
        uint64_t *l_360 = (void*)0;
        uint64_t *l_361 = (void*)0;
        uint64_t *l_362 = (void*)0;
        uint64_t *l_363 = (void*)0;
        uint64_t *l_364 = (void*)0;
        uint64_t *l_365 = (void*)0;
        int32_t l_366 = (-1L);
        int32_t *l_374 = (void*)0;
        int32_t **l_376 = &l_375;
        int32_t **l_377 = (void*)0;
        int32_t *l_379 = &p_627->g_260;
        int32_t **l_378 = &l_379;
        int64_t *l_380 = &p_627->g_257;
        uint16_t *l_383 = (void*)0;
        uint16_t *l_384[1][5][6] = {{{(void*)0,&p_627->g_227[2][0][1],&p_627->g_227[2][0][0],&p_627->g_227[2][0][0],&p_627->g_227[2][0][0],&p_627->g_227[2][0][1]},{(void*)0,&p_627->g_227[2][0][1],&p_627->g_227[2][0][0],&p_627->g_227[2][0][0],&p_627->g_227[2][0][0],&p_627->g_227[2][0][1]},{(void*)0,&p_627->g_227[2][0][1],&p_627->g_227[2][0][0],&p_627->g_227[2][0][0],&p_627->g_227[2][0][0],&p_627->g_227[2][0][1]},{(void*)0,&p_627->g_227[2][0][1],&p_627->g_227[2][0][0],&p_627->g_227[2][0][0],&p_627->g_227[2][0][0],&p_627->g_227[2][0][1]},{(void*)0,&p_627->g_227[2][0][1],&p_627->g_227[2][0][0],&p_627->g_227[2][0][0],&p_627->g_227[2][0][0],&p_627->g_227[2][0][1]}}};
        int32_t ***l_389 = &p_627->g_322[2][1][0];
        int32_t l_392[4][4][1] = {{{0x045A9651L},{0x045A9651L},{0x045A9651L},{0x045A9651L}},{{0x045A9651L},{0x045A9651L},{0x045A9651L},{0x045A9651L}},{{0x045A9651L},{0x045A9651L},{0x045A9651L},{0x045A9651L}},{{0x045A9651L},{0x045A9651L},{0x045A9651L},{0x045A9651L}}};
        uint8_t *l_395 = &p_627->g_152;
        int i, j, k;
        (*p_627->g_237) = (safe_add_func_uint16_t_u_u((p_44 == ((VECTOR(uint8_t, 4))((((*l_378) = ((*l_376) = l_375)) == &p_44), ((VECTOR(uint8_t, 2))(1UL)), 0x49L)).z), p_44));
        atomic_min(&p_627->g_atomic_reduction[get_linear_group_id()], ((((*l_380) = p_627->g_371) & (safe_mul_func_uint16_t_u_u((l_366 = p_627->g_221.s2), p_627->g_367.f0))) != (safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((((!(((void*)0 != l_389) >= ((VECTOR(int8_t, 4))(0x51L, 8L, 0x76L, 0x7FL)).z)) && (p_44 ^ (safe_sub_func_uint64_t_u_u(((l_392[2][1][0] = p_627->g_144) ^ ((((((*l_395) = ((((*l_320) = (*l_320)) != l_353[0]) < p_627->g_132.y)) <= p_627->g_275) || p_44) > p_627->g_110.x) < p_627->g_comm_values[p_627->tid])), p_44)))) || (-1L)), (*p_627->g_237))), p_44))) + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_627->v_collective += p_627->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    return (*p_627->g_236);
}


/* ------------------------------------------ */
/* 
 * reads : p_627->g_9 p_627->g_62 p_627->g_131 p_627->g_103 p_627->g_133 p_627->g_236
 * writes: p_627->g_256 p_627->g_257 p_627->g_73 p_627->g_237
 */
int32_t  func_45(int32_t * p_46, uint32_t  p_47, int16_t  p_48, struct S1 * p_627)
{ /* block id: 92 */
    int32_t *l_238 = &p_627->g_9[7][1][2];
    int32_t **l_240 = (void*)0;
    int32_t **l_241 = &l_238;
    VECTOR(int64_t, 2) l_248 = (VECTOR(int64_t, 2))(0x4B92070D6D4A889AL, 0x1BD1769757676AEAL);
    int8_t *l_255 = &p_627->g_256;
    int32_t *l_258 = (void*)0;
    int i;
    (*l_241) = l_238;
    (*l_241) = func_49((**l_241), (p_627->g_257 = (safe_rshift_func_uint8_t_u_s((((*p_46) >= ((safe_sub_func_int8_t_s_s((0x1ACA37043CBF5E0FL >= ((p_48 ^ (safe_rshift_func_int16_t_s_u(((**l_241) ^ ((VECTOR(int64_t, 8))(l_248.xxxyyyxy)).s2), 4))) || p_627->g_131.s7)), p_47)) > GROUP_DIVERGE(1, 1))) && (safe_add_func_int8_t_s_s(((*l_255) = (4294967286UL >= (safe_mul_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u(p_47, p_47)) , (*l_238)), p_627->g_103)))), 0x7FL))), (**l_241)))), (*l_241), l_258, p_46, p_627);
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_627->g_133 p_627->g_9 p_627->g_236 p_627->g_62
 * writes: p_627->g_73 p_627->g_237
 */
int32_t * func_49(uint64_t  p_50, int64_t  p_51, int32_t * p_52, int32_t * p_53, int32_t * p_54, struct S1 * p_627)
{ /* block id: 85 */
    uint64_t *l_231 = (void*)0;
    uint64_t **l_232 = &l_231;
    int32_t l_233 = 0x64659088L;
    int32_t *l_235 = (void*)0;
    int32_t **l_234 = &l_235;
    p_52 = ((*l_234) = func_65((safe_lshift_func_int8_t_s_s(((p_50 >= (p_51 , 0x3FE6L)) < p_627->g_133.s5), 2)), (((*l_232) = l_231) == (l_233 , (void*)0)), l_233, (*p_54), p_627));
    (*p_627->g_236) = ((*l_234) = p_54);
    return p_53;
}


/* ------------------------------------------ */
/* 
 * reads : p_627->g_62 p_627->g_9 p_627->g_2 p_627->g_comm_values p_627->g_103 p_627->l_comm_values p_627->g_106 p_627->g_128 p_627->g_152 p_627->g_185 p_627->g_144 p_627->g_213 p_627->g_221 p_627->g_149 p_627->g_101
 * writes: p_627->g_62 p_627->g_101 p_627->g_103 p_627->g_9 p_627->g_152 p_627->g_comm_values p_627->g_205 p_627->g_213 p_627->g_227 p_627->g_73
 */
uint8_t  func_57(uint32_t  p_58, int32_t * p_59, uint32_t  p_60, struct S1 * p_627)
{ /* block id: 16 */
    uint16_t l_80 = 0x94B9L;
    uint16_t l_85 = 0x25F8L;
    int32_t l_98 = 0x6019FDEEL;
    int16_t *l_127 = &p_627->g_103;
    int32_t l_172 = 0x14C23F78L;
    int32_t l_173 = 0x019DA829L;
    int32_t l_174 = 0x56ED219EL;
    int32_t l_175 = (-7L);
    int32_t l_176 = 1L;
    int32_t l_177 = 0x0985A425L;
    VECTOR(uint32_t, 4) l_183 = (VECTOR(uint32_t, 4))(2UL, (VECTOR(uint32_t, 2))(2UL, 4294967289UL), 4294967289UL);
    VECTOR(uint32_t, 8) l_184 = (VECTOR(uint32_t, 8))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 3UL), 3UL), 3UL, 4294967290UL, 3UL);
    uint8_t *l_188 = &p_627->g_152;
    VECTOR(int16_t, 8) l_191 = (VECTOR(int16_t, 8))(0x24B1L, (VECTOR(int16_t, 4))(0x24B1L, (VECTOR(int16_t, 2))(0x24B1L, 1L), 1L), 1L, 0x24B1L, 1L);
    uint8_t **l_194 = &l_188;
    VECTOR(int8_t, 4) l_195 = (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x75L), 0x75L);
    int8_t l_200 = 0x61L;
    uint32_t *l_201[2][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0}};
    int32_t *l_203 = &l_172;
    int64_t *l_204 = (void*)0;
    VECTOR(uint8_t, 16) l_212 = (VECTOR(uint8_t, 16))(0x57L, (VECTOR(uint8_t, 4))(0x57L, (VECTOR(uint8_t, 2))(0x57L, 3UL), 3UL), 3UL, 0x57L, 3UL, (VECTOR(uint8_t, 2))(0x57L, 3UL), (VECTOR(uint8_t, 2))(0x57L, 3UL), 0x57L, 3UL, 0x57L, 3UL);
    int64_t *l_214 = (void*)0;
    int64_t *l_215 = (void*)0;
    int64_t *l_216 = (void*)0;
    int16_t l_222[5] = {1L,1L,1L,1L,1L};
    int64_t *l_223[10][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int8_t *l_224 = &l_200;
    int8_t *l_225 = (void*)0;
    int8_t *l_226[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i, j;
    for (p_627->g_62 = (-1); (p_627->g_62 >= 41); p_627->g_62 = safe_add_func_uint8_t_u_u(p_627->g_62, 6))
    { /* block id: 19 */
        int32_t *l_77 = &p_627->g_9[3][0][2];
        int32_t *l_78 = &p_627->g_9[0][0][2];
        int32_t *l_79[3];
        VECTOR(int16_t, 2) l_96 = (VECTOR(int16_t, 2))(0x2F0CL, 4L);
        uint16_t *l_97[7] = {&l_85,&l_85,&l_85,&l_85,&l_85,&l_85,&l_85};
        int16_t *l_102 = &p_627->g_103;
        VECTOR(int32_t, 16) l_104 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
        int32_t l_107 = (-9L);
        int32_t l_171[6][10][1] = {{{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L}},{{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L}},{{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L}},{{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L}},{{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L}},{{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L},{0x05369534L}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_79[i] = (void*)0;
        --l_80;
        if ((safe_rshift_func_int16_t_s_s(((5L | l_85) && ((safe_sub_func_int16_t_s_s(0x02E8L, (safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((safe_mod_func_int16_t_s_s(((l_98 = ((safe_mod_func_uint16_t_u_u(l_85, ((VECTOR(int16_t, 16))(l_96.yxxxxxxxyyxxxyyy)).sd)) >= 0x7DL)) < ((*l_102) ^= (safe_add_func_uint8_t_u_u(((0xE2F9DBC330632420L > p_60) & p_627->g_9[2][0][0]), ((p_627->g_101 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(p_627->g_2, p_627->g_comm_values[p_627->tid], l_80, (-1L), 5L, ((VECTOR(int32_t, 2))(0x49AAE810L)), 0x5DE4E4C4L)).s54, (int32_t)(*p_59)))))).odd) > p_627->g_comm_values[p_627->tid]))))), p_627->g_9[5][0][3])), p_627->g_2)) && p_58), p_627->l_comm_values[(safe_mod_func_uint32_t_u_u(p_627->tid, 75))])))) ^ FAKE_DIVERGE(p_627->group_2_offset, get_group_id(2), 10))), l_80)))
        { /* block id: 24 */
            int32_t **l_105[2][2] = {{&l_79[2],&l_79[2]},{&l_79[2],&l_79[2]}};
            int i, j;
            (*l_77) = ((VECTOR(int32_t, 8))(l_104.s282ffb08)).s2;
            p_59 = l_78;
        }
        else
        { /* block id: 27 */
            uint16_t *l_117 = &l_85;
            int32_t l_126[3][9] = {{0x5B6A2D9AL,0x5B6A2D9AL,0x6552C197L,0L,0x1CE06006L,0L,0x6552C197L,0x5B6A2D9AL,0x5B6A2D9AL},{0x5B6A2D9AL,0x5B6A2D9AL,0x6552C197L,0L,0x1CE06006L,0L,0x6552C197L,0x5B6A2D9AL,0x5B6A2D9AL},{0x5B6A2D9AL,0x5B6A2D9AL,0x6552C197L,0L,0x1CE06006L,0L,0x6552C197L,0x5B6A2D9AL,0x5B6A2D9AL}};
            VECTOR(uint64_t, 2) l_134 = (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL);
            VECTOR(int64_t, 2) l_165 = (VECTOR(int64_t, 2))(9L, 0x1BED5062BB3BD2D3L);
            uint16_t l_178 = 0x9C12L;
            int i, j;
            (*p_59) = ((VECTOR(int32_t, 2))(p_627->g_106.s60)).lo;
            (*p_59) = l_107;
            for (p_58 = 12; (p_58 == 60); p_58++)
            { /* block id: 32 */
                VECTOR(int32_t, 2) l_111 = (VECTOR(int32_t, 2))(0L, 0x3385642BL);
                uint16_t *l_118 = (void*)0;
                VECTOR(int32_t, 4) l_121 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x10FB8DA5L), 0x10FB8DA5L);
                int i;
                if (((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(p_627->g_110.yyxyyyxy)).s72, ((VECTOR(int32_t, 2))(0x7CE843D8L, 2L))))).xyxyyyyx, ((VECTOR(int32_t, 4))(l_111.xxyx)).zwyxxzzw))).s1)
                { /* block id: 33 */
                    uint32_t l_112 = 0xF7D93435L;
                    p_627->g_9[5][0][3] = p_627->g_103;
                    (*l_78) = (l_112 == ((0x2AL ^ ((((*l_127) = (((safe_rshift_func_int8_t_s_s((((VECTOR(uint32_t, 4))(4294967295UL, (FAKE_DIVERGE(p_627->local_0_offset, get_local_id(0), 10) <= (((((safe_rshift_func_int16_t_s_s((l_117 != (l_112 , l_118)), (safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 16))(l_121.wyzzwwwxywwyzwww)).se, (safe_mod_func_uint64_t_u_u(((safe_sub_func_int32_t_s_s(p_627->g_110.w, ((l_98 = l_126[1][7]) > p_58))) >= (((0x49878E731B53E36EL > p_627->g_comm_values[p_627->tid]) && GROUP_DIVERGE(0, 1)) == l_85)), 5L)))))) , p_627->g_106.s5) , 0x8FFDL) , l_127) == l_117)), 0UL, 0x6B54986CL)).w | (*p_59)), l_80)) , p_58) == p_627->g_103)) ^ p_627->g_128[1]) >= 255UL)) , 0L));
                }
                else
                { /* block id: 38 */
                    uint16_t *l_142 = &l_80;
                    union U0 l_148[1] = {{4294967295UL}};
                    int i;
                    for (l_107 = 16; (l_107 >= 4); l_107 = safe_sub_func_int64_t_s_s(l_107, 9))
                    { /* block id: 41 */
                        uint64_t *l_137 = (void*)0;
                        uint16_t *l_140 = &l_80;
                        uint16_t **l_141 = &l_97[1];
                        uint64_t *l_143 = &p_627->g_144;
                        int16_t **l_145 = &l_127;
                        int32_t **l_150 = &l_79[0];
                        uint8_t *l_151 = &p_627->g_152;
                        uint64_t *l_166 = (void*)0;
                        uint64_t *l_167[2];
                        int64_t *l_168 = (void*)0;
                        int64_t *l_169 = (void*)0;
                        int64_t *l_170[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_167[i] = (void*)0;
                        (*l_78) = ((~(((*l_151) ^= (((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(p_627->g_131.s1147)), ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(clz(((VECTOR(uint64_t, 16))(p_627->g_132.xxxzwyxzwzzyyzww)).hi))))).even)), 0xAE6EC67F3A6B8F9AL, 3UL, 0x8031382D9615D095L, 9UL)).odd, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(p_627->g_133.s3461)), ((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 4))(l_134.xxxx)).wyywzyyw, ((VECTOR(uint64_t, 8))(0UL, 0x8A79AF8E2B3D635DL, 18446744073709551615UL, (!(safe_add_func_uint16_t_u_u((((*l_150) = p_59) != &p_627->g_9[2][0][2]), FAKE_DIVERGE(p_627->global_0_offset, get_global_id(0), 10)))), 0xF41821A72EEF0ED0L, l_98, 0x3A779F58EA2508C1L, 0x4CFA5E242F35A271L))))).s3, 9UL, 0x5D16D180367A8BF0L, 7UL)).s0441443241224677, ((VECTOR(uint64_t, 16))(0xBE786ADAD851819CL))))).sc9c0)), ((VECTOR(uint64_t, 4))(18446744073709551609UL))))), 0x8D0BA58DE8A0DB83L, 0xBAEAE63DA66330F8L, p_60, 0x5B86692AA995AD63L, 0xEC57C8980EC63AA8L, 18446744073709551615UL, 18446744073709551607UL, 1UL)).sa , 0x20L)) , p_58)) & 246UL);
                        (*p_59) = (((l_148[0] , (((p_60 , ((p_627->g_comm_values[p_627->tid] = (((~(l_98 = (safe_add_func_int32_t_s_s((l_77 == (void*)0), ((safe_rshift_func_int8_t_s_s(((p_58 || (safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u((((*l_102) = (1UL > 0xD2L)) == (safe_div_func_int64_t_s_s(p_627->g_62, ((VECTOR(int64_t, 8))(l_165.yyxyxxyx)).s7))), 8UL)) , 0UL), 15)) == p_627->g_128[1]), 6UL))) < (*p_59)), 0)) , 0x37507154L))))) < (-6L)) <= (-7L))) , (*p_59))) == p_58) > p_60)) > p_60) && p_58);
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_627->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 75)), permutations[(safe_mod_func_uint32_t_u_u(p_627->g_128[1], 10))][(safe_mod_func_uint32_t_u_u(p_627->tid, 75))]));
                    }
                    if (l_171[5][3][0])
                        continue;
                }
                l_178--;
            }
            if ((atomic_inc(&p_627->g_atomic_input[60 * get_linear_group_id() + 4]) == 7))
            { /* block id: 63 */
                VECTOR(int32_t, 2) l_181 = (VECTOR(int32_t, 2))(8L, (-3L));
                int16_t l_182 = 0x3D08L;
                int i;
                l_182 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_181.yx)).xxyyxyxy)).s6;
                unsigned int result = 0;
                result += l_181.y;
                result += l_181.x;
                result += l_182;
                atomic_add(&p_627->g_special_values[60 * get_linear_group_id() + 4], result);
            }
            else
            { /* block id: 65 */
                (1 + 1);
            }
        }
    }
    (*p_59) = (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(l_183.xwzxzyyy)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 2))(l_184.s73)).yyxx))).xyxwzzxzywwxzzyz)))).s849f)).ywxwxwzw))).s3054340525156242, ((VECTOR(uint32_t, 2))(p_627->g_185.s77)).xyxyxyyyxxyyyxyx))).hi)).s6 & ((!0x12550B3B61917E9CL) != 1L));
    (*l_203) ^= (safe_sub_func_uint64_t_u_u(p_60, (((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))((-6L), ((VECTOR(int16_t, 4))(0x36D5L, 0x052AL, 0x3B0CL, 0x5C86L)), ((--(*l_188)) <= l_80), 0L, (-4L), ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(l_191.s53)), (int16_t)(safe_rshift_func_uint16_t_u_s(((((((p_627->g_101 = ((p_60 >= ((&p_627->g_152 != ((*l_194) = &p_627->g_152)) > (0x7BL <= ((l_174 &= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 2))(0x78L, 0x63L)).yxxyyxxx, ((VECTOR(int8_t, 8))(l_195.yxyyyzxy))))))).s75)).yyxx, (int8_t)(((safe_div_func_int64_t_s_s(((safe_div_func_uint16_t_u_u(p_60, 0x1022L)) >= l_200), p_627->g_144)) , FAKE_DIVERGE(p_627->global_0_offset, get_global_id(0), 10)) != GROUP_DIVERGE(2, 1)), (int8_t)0x36L))), ((VECTOR(int8_t, 4))((-7L)))))).wyzyywzy)).s2) | p_60)))) & p_60)) && (*p_59)) , l_176) != (*p_59)) , 1UL) , FAKE_DIVERGE(p_627->global_2_offset, get_global_id(2), 10)), p_627->g_106.s1))))).yxyxyxyx, ((VECTOR(int16_t, 8))((-1L)))))))).s11c0, ((VECTOR(uint16_t, 4))(0xFE4CL))))).y != l_184.s6)));
    l_203 = (FAKE_DIVERGE(p_627->global_2_offset, get_global_id(2), 10) , func_65((l_204 != (p_627->g_205 = l_204)), (((p_627->g_227[2][0][0] = (((*l_224) ^= (safe_div_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), ((((p_627->g_101 &= ((p_627->g_213.s5 = ((safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s((((p_60 && ((VECTOR(uint8_t, 8))(l_212.s7c05eb80)).s1) || (((*l_203) ^= ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(p_627->g_213.s5757311720211667)).sc717)).y) && (safe_mul_func_int8_t_s_s((*l_203), (((*l_203) || (p_60 && ((safe_div_func_int64_t_s_s(p_627->g_62, ((VECTOR(uint64_t, 4))(p_627->g_221.s3452)).z)) ^ GROUP_DIVERGE(1, 1)))) & ((*l_127) = (((p_627->g_152 || ((p_627->g_149[2] == (void*)0) | p_627->g_213.s7)) > 0x2F59L) & p_58))))))) , p_58), l_222[3])), p_60)) >= p_58)) ^ p_627->g_144)) == (*p_59)) | p_60) , 1L)))) && 253UL)) <= p_58) , p_627->g_221.s5), p_60, p_627->g_185.s4, p_627));
    return (*l_203);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_627->g_73
 */
int32_t * func_65(uint64_t  p_66, int32_t  p_67, uint32_t  p_68, int32_t  p_69, struct S1 * p_627)
{ /* block id: 13 */
    int32_t *l_72 = &p_627->g_9[8][1][1];
    int32_t **l_71[3];
    int32_t *l_74 = &p_627->g_9[5][0][3];
    int i;
    for (i = 0; i < 3; i++)
        l_71[i] = &l_72;
    p_627->g_73 = l_71[1];
    return l_74;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[60];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 60; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[60];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 60; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[75];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 75; i++)
            l_comm_values[i] = 1;
    struct S1 c_628;
    struct S1* p_627 = &c_628;
    struct S1 c_629 = {
        0x070ADE21L, // p_627->g_2
        (-7L), // p_627->g_5
        {{{(-4L),0x0714AD38L,(-1L),(-4L)},{(-4L),0x0714AD38L,(-1L),(-4L)}},{{(-4L),0x0714AD38L,(-1L),(-4L)},{(-4L),0x0714AD38L,(-1L),(-4L)}},{{(-4L),0x0714AD38L,(-1L),(-4L)},{(-4L),0x0714AD38L,(-1L),(-4L)}},{{(-4L),0x0714AD38L,(-1L),(-4L)},{(-4L),0x0714AD38L,(-1L),(-4L)}},{{(-4L),0x0714AD38L,(-1L),(-4L)},{(-4L),0x0714AD38L,(-1L),(-4L)}},{{(-4L),0x0714AD38L,(-1L),(-4L)},{(-4L),0x0714AD38L,(-1L),(-4L)}},{{(-4L),0x0714AD38L,(-1L),(-4L)},{(-4L),0x0714AD38L,(-1L),(-4L)}},{{(-4L),0x0714AD38L,(-1L),(-4L)},{(-4L),0x0714AD38L,(-1L),(-4L)}},{{(-4L),0x0714AD38L,(-1L),(-4L)},{(-4L),0x0714AD38L,(-1L),(-4L)}}}, // p_627->g_9
        4294967295UL, // p_627->g_62
        (void*)0, // p_627->g_73
        0UL, // p_627->g_101
        0x3D83L, // p_627->g_103
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0257628AL), 0x0257628AL), 0x0257628AL, 1L, 0x0257628AL), // p_627->g_106
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-2L)), (-2L)), // p_627->g_110
        {0x6CFEL,0x6CFEL}, // p_627->g_128
        (VECTOR(uint64_t, 8))(0x02840ACBBF453DDAL, (VECTOR(uint64_t, 4))(0x02840ACBBF453DDAL, (VECTOR(uint64_t, 2))(0x02840ACBBF453DDAL, 0xE5C784999CA7B657L), 0xE5C784999CA7B657L), 0xE5C784999CA7B657L, 0x02840ACBBF453DDAL, 0xE5C784999CA7B657L), // p_627->g_131
        (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x8AE1307C177FA41FL), 0x8AE1307C177FA41FL), // p_627->g_132
        (VECTOR(uint64_t, 8))(0x57B7439DAF5B9146L, (VECTOR(uint64_t, 4))(0x57B7439DAF5B9146L, (VECTOR(uint64_t, 2))(0x57B7439DAF5B9146L, 0x0B1FDE04AB730D59L), 0x0B1FDE04AB730D59L), 0x0B1FDE04AB730D59L, 0x57B7439DAF5B9146L, 0x0B1FDE04AB730D59L), // p_627->g_133
        0UL, // p_627->g_144
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_627->g_149
        0x35L, // p_627->g_152
        (VECTOR(uint32_t, 8))(0xDE2AC364L, (VECTOR(uint32_t, 4))(0xDE2AC364L, (VECTOR(uint32_t, 2))(0xDE2AC364L, 0UL), 0UL), 0UL, 0xDE2AC364L, 0UL), // p_627->g_185
        (void*)0, // p_627->g_202
        (void*)0, // p_627->g_205
        (VECTOR(int64_t, 8))(0x1D59750AABC08B88L, (VECTOR(int64_t, 4))(0x1D59750AABC08B88L, (VECTOR(int64_t, 2))(0x1D59750AABC08B88L, 0x78FE40136C29E382L), 0x78FE40136C29E382L), 0x78FE40136C29E382L, 0x1D59750AABC08B88L, 0x78FE40136C29E382L), // p_627->g_213
        (VECTOR(uint64_t, 8))(0xE0677575D8014738L, (VECTOR(uint64_t, 4))(0xE0677575D8014738L, (VECTOR(uint64_t, 2))(0xE0677575D8014738L, 5UL), 5UL), 5UL, 0xE0677575D8014738L, 5UL), // p_627->g_221
        {{{7UL,0UL,7UL}},{{7UL,0UL,7UL}},{{7UL,0UL,7UL}},{{7UL,0UL,7UL}},{{7UL,0UL,7UL}},{{7UL,0UL,7UL}},{{7UL,0UL,7UL}},{{7UL,0UL,7UL}}}, // p_627->g_227
        (void*)0, // p_627->g_228
        (void*)0, // p_627->g_237
        &p_627->g_237, // p_627->g_236
        {&p_627->g_237}, // p_627->g_239
        0x1FL, // p_627->g_256
        (-6L), // p_627->g_257
        0x71AA62D4L, // p_627->g_260
        (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x43L), 0x43L), 0x43L, (-4L), 0x43L), // p_627->g_263
        0x1E1DA71AL, // p_627->g_275
        0x7384L, // p_627->g_304
        {&p_627->g_304}, // p_627->g_303
        &p_627->g_303[0], // p_627->g_302
        (-7L), // p_627->g_315
        &p_627->g_315, // p_627->g_323
        {{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}}}, // p_627->g_322
        &p_627->g_322[0][0][0], // p_627->g_321
        {4294967295UL}, // p_627->g_367
        {0x1C30C54F4399E850L,0x1C30C54F4399E850L,0x1C30C54F4399E850L,0x1C30C54F4399E850L,0x1C30C54F4399E850L,0x1C30C54F4399E850L}, // p_627->g_370
        1UL, // p_627->g_371
        {&p_627->g_370[2],&p_627->g_370[2],&p_627->g_370[2],&p_627->g_370[2],&p_627->g_370[2],&p_627->g_370[2]}, // p_627->g_369
        &p_627->g_369[1], // p_627->g_368
        &p_627->g_237, // p_627->g_397
        {{&p_627->g_9[5][0][3],(void*)0,&p_627->g_5,&p_627->g_9[4][0][2],&p_627->g_2,&p_627->g_9[4][0][2],&p_627->g_5,(void*)0,&p_627->g_9[5][0][3]},{&p_627->g_9[5][0][3],(void*)0,&p_627->g_5,&p_627->g_9[4][0][2],&p_627->g_2,&p_627->g_9[4][0][2],&p_627->g_5,(void*)0,&p_627->g_9[5][0][3]},{&p_627->g_9[5][0][3],(void*)0,&p_627->g_5,&p_627->g_9[4][0][2],&p_627->g_2,&p_627->g_9[4][0][2],&p_627->g_5,(void*)0,&p_627->g_9[5][0][3]},{&p_627->g_9[5][0][3],(void*)0,&p_627->g_5,&p_627->g_9[4][0][2],&p_627->g_2,&p_627->g_9[4][0][2],&p_627->g_5,(void*)0,&p_627->g_9[5][0][3]},{&p_627->g_9[5][0][3],(void*)0,&p_627->g_5,&p_627->g_9[4][0][2],&p_627->g_2,&p_627->g_9[4][0][2],&p_627->g_5,(void*)0,&p_627->g_9[5][0][3]},{&p_627->g_9[5][0][3],(void*)0,&p_627->g_5,&p_627->g_9[4][0][2],&p_627->g_2,&p_627->g_9[4][0][2],&p_627->g_5,(void*)0,&p_627->g_9[5][0][3]},{&p_627->g_9[5][0][3],(void*)0,&p_627->g_5,&p_627->g_9[4][0][2],&p_627->g_2,&p_627->g_9[4][0][2],&p_627->g_5,(void*)0,&p_627->g_9[5][0][3]},{&p_627->g_9[5][0][3],(void*)0,&p_627->g_5,&p_627->g_9[4][0][2],&p_627->g_2,&p_627->g_9[4][0][2],&p_627->g_5,(void*)0,&p_627->g_9[5][0][3]},{&p_627->g_9[5][0][3],(void*)0,&p_627->g_5,&p_627->g_9[4][0][2],&p_627->g_2,&p_627->g_9[4][0][2],&p_627->g_5,(void*)0,&p_627->g_9[5][0][3]}}, // p_627->g_398
        {(void*)0,(void*)0,(void*)0,(void*)0}, // p_627->g_399
        &p_627->g_9[5][1][2], // p_627->g_403
        &p_627->g_403, // p_627->g_402
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x5DA0L), 0x5DA0L), // p_627->g_413
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xCE20L), 0xCE20L), 0xCE20L, 1UL, 0xCE20L), // p_627->g_415
        (VECTOR(uint16_t, 8))(0x41A8L, (VECTOR(uint16_t, 4))(0x41A8L, (VECTOR(uint16_t, 2))(0x41A8L, 0x650FL), 0x650FL), 0x650FL, 0x41A8L, 0x650FL), // p_627->g_417
        (VECTOR(uint16_t, 16))(0xD2B4L, (VECTOR(uint16_t, 4))(0xD2B4L, (VECTOR(uint16_t, 2))(0xD2B4L, 0xC6F8L), 0xC6F8L), 0xC6F8L, 0xD2B4L, 0xC6F8L, (VECTOR(uint16_t, 2))(0xD2B4L, 0xC6F8L), (VECTOR(uint16_t, 2))(0xD2B4L, 0xC6F8L), 0xD2B4L, 0xC6F8L, 0xD2B4L, 0xC6F8L), // p_627->g_418
        (VECTOR(uint64_t, 8))(0x64C9888401FAB952L, (VECTOR(uint64_t, 4))(0x64C9888401FAB952L, (VECTOR(uint64_t, 2))(0x64C9888401FAB952L, 0x9BBF7A33CE64919BL), 0x9BBF7A33CE64919BL), 0x9BBF7A33CE64919BL, 0x64C9888401FAB952L, 0x9BBF7A33CE64919BL), // p_627->g_421
        (VECTOR(uint16_t, 2))(1UL, 65535UL), // p_627->g_439
        247UL, // p_627->g_455
        0xE4L, // p_627->g_470
        (VECTOR(uint64_t, 2))(0xF8DFA9657719AE2DL, 1UL), // p_627->g_489
        0x61BFL, // p_627->g_495
        &p_627->g_227[2][0][0], // p_627->g_502
        (VECTOR(uint8_t, 8))(0xB1L, (VECTOR(uint8_t, 4))(0xB1L, (VECTOR(uint8_t, 2))(0xB1L, 0UL), 0UL), 0UL, 0xB1L, 0UL), // p_627->g_593
        (VECTOR(uint16_t, 4))(0x9FFCL, (VECTOR(uint16_t, 2))(0x9FFCL, 0x8A9EL), 0x8A9EL), // p_627->g_599
        (-8L), // p_627->g_618
        {&p_627->g_237,(void*)0,(void*)0,(void*)0,&p_627->g_237,&p_627->g_237,(void*)0,(void*)0,(void*)0,&p_627->g_237}, // p_627->g_624
        &p_627->g_403, // p_627->g_625
        0, // p_627->v_collective
        sequence_input[get_global_id(0)], // p_627->global_0_offset
        sequence_input[get_global_id(1)], // p_627->global_1_offset
        sequence_input[get_global_id(2)], // p_627->global_2_offset
        sequence_input[get_local_id(0)], // p_627->local_0_offset
        sequence_input[get_local_id(1)], // p_627->local_1_offset
        sequence_input[get_local_id(2)], // p_627->local_2_offset
        sequence_input[get_group_id(0)], // p_627->group_0_offset
        sequence_input[get_group_id(1)], // p_627->group_1_offset
        sequence_input[get_group_id(2)], // p_627->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 75)), permutations[0][get_linear_local_id()])), // p_627->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_628 = c_629;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_627);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_627->g_2, "p_627->g_2", print_hash_value);
    transparent_crc(p_627->g_5, "p_627->g_5", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_627->g_9[i][j][k], "p_627->g_9[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_627->g_62, "p_627->g_62", print_hash_value);
    transparent_crc(p_627->g_101, "p_627->g_101", print_hash_value);
    transparent_crc(p_627->g_103, "p_627->g_103", print_hash_value);
    transparent_crc(p_627->g_106.s0, "p_627->g_106.s0", print_hash_value);
    transparent_crc(p_627->g_106.s1, "p_627->g_106.s1", print_hash_value);
    transparent_crc(p_627->g_106.s2, "p_627->g_106.s2", print_hash_value);
    transparent_crc(p_627->g_106.s3, "p_627->g_106.s3", print_hash_value);
    transparent_crc(p_627->g_106.s4, "p_627->g_106.s4", print_hash_value);
    transparent_crc(p_627->g_106.s5, "p_627->g_106.s5", print_hash_value);
    transparent_crc(p_627->g_106.s6, "p_627->g_106.s6", print_hash_value);
    transparent_crc(p_627->g_106.s7, "p_627->g_106.s7", print_hash_value);
    transparent_crc(p_627->g_110.x, "p_627->g_110.x", print_hash_value);
    transparent_crc(p_627->g_110.y, "p_627->g_110.y", print_hash_value);
    transparent_crc(p_627->g_110.z, "p_627->g_110.z", print_hash_value);
    transparent_crc(p_627->g_110.w, "p_627->g_110.w", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_627->g_128[i], "p_627->g_128[i]", print_hash_value);

    }
    transparent_crc(p_627->g_131.s0, "p_627->g_131.s0", print_hash_value);
    transparent_crc(p_627->g_131.s1, "p_627->g_131.s1", print_hash_value);
    transparent_crc(p_627->g_131.s2, "p_627->g_131.s2", print_hash_value);
    transparent_crc(p_627->g_131.s3, "p_627->g_131.s3", print_hash_value);
    transparent_crc(p_627->g_131.s4, "p_627->g_131.s4", print_hash_value);
    transparent_crc(p_627->g_131.s5, "p_627->g_131.s5", print_hash_value);
    transparent_crc(p_627->g_131.s6, "p_627->g_131.s6", print_hash_value);
    transparent_crc(p_627->g_131.s7, "p_627->g_131.s7", print_hash_value);
    transparent_crc(p_627->g_132.x, "p_627->g_132.x", print_hash_value);
    transparent_crc(p_627->g_132.y, "p_627->g_132.y", print_hash_value);
    transparent_crc(p_627->g_132.z, "p_627->g_132.z", print_hash_value);
    transparent_crc(p_627->g_132.w, "p_627->g_132.w", print_hash_value);
    transparent_crc(p_627->g_133.s0, "p_627->g_133.s0", print_hash_value);
    transparent_crc(p_627->g_133.s1, "p_627->g_133.s1", print_hash_value);
    transparent_crc(p_627->g_133.s2, "p_627->g_133.s2", print_hash_value);
    transparent_crc(p_627->g_133.s3, "p_627->g_133.s3", print_hash_value);
    transparent_crc(p_627->g_133.s4, "p_627->g_133.s4", print_hash_value);
    transparent_crc(p_627->g_133.s5, "p_627->g_133.s5", print_hash_value);
    transparent_crc(p_627->g_133.s6, "p_627->g_133.s6", print_hash_value);
    transparent_crc(p_627->g_133.s7, "p_627->g_133.s7", print_hash_value);
    transparent_crc(p_627->g_144, "p_627->g_144", print_hash_value);
    transparent_crc(p_627->g_152, "p_627->g_152", print_hash_value);
    transparent_crc(p_627->g_185.s0, "p_627->g_185.s0", print_hash_value);
    transparent_crc(p_627->g_185.s1, "p_627->g_185.s1", print_hash_value);
    transparent_crc(p_627->g_185.s2, "p_627->g_185.s2", print_hash_value);
    transparent_crc(p_627->g_185.s3, "p_627->g_185.s3", print_hash_value);
    transparent_crc(p_627->g_185.s4, "p_627->g_185.s4", print_hash_value);
    transparent_crc(p_627->g_185.s5, "p_627->g_185.s5", print_hash_value);
    transparent_crc(p_627->g_185.s6, "p_627->g_185.s6", print_hash_value);
    transparent_crc(p_627->g_185.s7, "p_627->g_185.s7", print_hash_value);
    transparent_crc(p_627->g_213.s0, "p_627->g_213.s0", print_hash_value);
    transparent_crc(p_627->g_213.s1, "p_627->g_213.s1", print_hash_value);
    transparent_crc(p_627->g_213.s2, "p_627->g_213.s2", print_hash_value);
    transparent_crc(p_627->g_213.s3, "p_627->g_213.s3", print_hash_value);
    transparent_crc(p_627->g_213.s4, "p_627->g_213.s4", print_hash_value);
    transparent_crc(p_627->g_213.s5, "p_627->g_213.s5", print_hash_value);
    transparent_crc(p_627->g_213.s6, "p_627->g_213.s6", print_hash_value);
    transparent_crc(p_627->g_213.s7, "p_627->g_213.s7", print_hash_value);
    transparent_crc(p_627->g_221.s0, "p_627->g_221.s0", print_hash_value);
    transparent_crc(p_627->g_221.s1, "p_627->g_221.s1", print_hash_value);
    transparent_crc(p_627->g_221.s2, "p_627->g_221.s2", print_hash_value);
    transparent_crc(p_627->g_221.s3, "p_627->g_221.s3", print_hash_value);
    transparent_crc(p_627->g_221.s4, "p_627->g_221.s4", print_hash_value);
    transparent_crc(p_627->g_221.s5, "p_627->g_221.s5", print_hash_value);
    transparent_crc(p_627->g_221.s6, "p_627->g_221.s6", print_hash_value);
    transparent_crc(p_627->g_221.s7, "p_627->g_221.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_627->g_227[i][j][k], "p_627->g_227[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_627->g_256, "p_627->g_256", print_hash_value);
    transparent_crc(p_627->g_257, "p_627->g_257", print_hash_value);
    transparent_crc(p_627->g_260, "p_627->g_260", print_hash_value);
    transparent_crc(p_627->g_263.s0, "p_627->g_263.s0", print_hash_value);
    transparent_crc(p_627->g_263.s1, "p_627->g_263.s1", print_hash_value);
    transparent_crc(p_627->g_263.s2, "p_627->g_263.s2", print_hash_value);
    transparent_crc(p_627->g_263.s3, "p_627->g_263.s3", print_hash_value);
    transparent_crc(p_627->g_263.s4, "p_627->g_263.s4", print_hash_value);
    transparent_crc(p_627->g_263.s5, "p_627->g_263.s5", print_hash_value);
    transparent_crc(p_627->g_263.s6, "p_627->g_263.s6", print_hash_value);
    transparent_crc(p_627->g_263.s7, "p_627->g_263.s7", print_hash_value);
    transparent_crc(p_627->g_275, "p_627->g_275", print_hash_value);
    transparent_crc(p_627->g_304, "p_627->g_304", print_hash_value);
    transparent_crc(p_627->g_315, "p_627->g_315", print_hash_value);
    transparent_crc(p_627->g_367.f0, "p_627->g_367.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_627->g_370[i], "p_627->g_370[i]", print_hash_value);

    }
    transparent_crc(p_627->g_371, "p_627->g_371", print_hash_value);
    transparent_crc(p_627->g_413.x, "p_627->g_413.x", print_hash_value);
    transparent_crc(p_627->g_413.y, "p_627->g_413.y", print_hash_value);
    transparent_crc(p_627->g_413.z, "p_627->g_413.z", print_hash_value);
    transparent_crc(p_627->g_413.w, "p_627->g_413.w", print_hash_value);
    transparent_crc(p_627->g_415.s0, "p_627->g_415.s0", print_hash_value);
    transparent_crc(p_627->g_415.s1, "p_627->g_415.s1", print_hash_value);
    transparent_crc(p_627->g_415.s2, "p_627->g_415.s2", print_hash_value);
    transparent_crc(p_627->g_415.s3, "p_627->g_415.s3", print_hash_value);
    transparent_crc(p_627->g_415.s4, "p_627->g_415.s4", print_hash_value);
    transparent_crc(p_627->g_415.s5, "p_627->g_415.s5", print_hash_value);
    transparent_crc(p_627->g_415.s6, "p_627->g_415.s6", print_hash_value);
    transparent_crc(p_627->g_415.s7, "p_627->g_415.s7", print_hash_value);
    transparent_crc(p_627->g_417.s0, "p_627->g_417.s0", print_hash_value);
    transparent_crc(p_627->g_417.s1, "p_627->g_417.s1", print_hash_value);
    transparent_crc(p_627->g_417.s2, "p_627->g_417.s2", print_hash_value);
    transparent_crc(p_627->g_417.s3, "p_627->g_417.s3", print_hash_value);
    transparent_crc(p_627->g_417.s4, "p_627->g_417.s4", print_hash_value);
    transparent_crc(p_627->g_417.s5, "p_627->g_417.s5", print_hash_value);
    transparent_crc(p_627->g_417.s6, "p_627->g_417.s6", print_hash_value);
    transparent_crc(p_627->g_417.s7, "p_627->g_417.s7", print_hash_value);
    transparent_crc(p_627->g_418.s0, "p_627->g_418.s0", print_hash_value);
    transparent_crc(p_627->g_418.s1, "p_627->g_418.s1", print_hash_value);
    transparent_crc(p_627->g_418.s2, "p_627->g_418.s2", print_hash_value);
    transparent_crc(p_627->g_418.s3, "p_627->g_418.s3", print_hash_value);
    transparent_crc(p_627->g_418.s4, "p_627->g_418.s4", print_hash_value);
    transparent_crc(p_627->g_418.s5, "p_627->g_418.s5", print_hash_value);
    transparent_crc(p_627->g_418.s6, "p_627->g_418.s6", print_hash_value);
    transparent_crc(p_627->g_418.s7, "p_627->g_418.s7", print_hash_value);
    transparent_crc(p_627->g_418.s8, "p_627->g_418.s8", print_hash_value);
    transparent_crc(p_627->g_418.s9, "p_627->g_418.s9", print_hash_value);
    transparent_crc(p_627->g_418.sa, "p_627->g_418.sa", print_hash_value);
    transparent_crc(p_627->g_418.sb, "p_627->g_418.sb", print_hash_value);
    transparent_crc(p_627->g_418.sc, "p_627->g_418.sc", print_hash_value);
    transparent_crc(p_627->g_418.sd, "p_627->g_418.sd", print_hash_value);
    transparent_crc(p_627->g_418.se, "p_627->g_418.se", print_hash_value);
    transparent_crc(p_627->g_418.sf, "p_627->g_418.sf", print_hash_value);
    transparent_crc(p_627->g_421.s0, "p_627->g_421.s0", print_hash_value);
    transparent_crc(p_627->g_421.s1, "p_627->g_421.s1", print_hash_value);
    transparent_crc(p_627->g_421.s2, "p_627->g_421.s2", print_hash_value);
    transparent_crc(p_627->g_421.s3, "p_627->g_421.s3", print_hash_value);
    transparent_crc(p_627->g_421.s4, "p_627->g_421.s4", print_hash_value);
    transparent_crc(p_627->g_421.s5, "p_627->g_421.s5", print_hash_value);
    transparent_crc(p_627->g_421.s6, "p_627->g_421.s6", print_hash_value);
    transparent_crc(p_627->g_421.s7, "p_627->g_421.s7", print_hash_value);
    transparent_crc(p_627->g_439.x, "p_627->g_439.x", print_hash_value);
    transparent_crc(p_627->g_439.y, "p_627->g_439.y", print_hash_value);
    transparent_crc(p_627->g_455, "p_627->g_455", print_hash_value);
    transparent_crc(p_627->g_470, "p_627->g_470", print_hash_value);
    transparent_crc(p_627->g_489.x, "p_627->g_489.x", print_hash_value);
    transparent_crc(p_627->g_489.y, "p_627->g_489.y", print_hash_value);
    transparent_crc(p_627->g_495, "p_627->g_495", print_hash_value);
    transparent_crc(p_627->g_593.s0, "p_627->g_593.s0", print_hash_value);
    transparent_crc(p_627->g_593.s1, "p_627->g_593.s1", print_hash_value);
    transparent_crc(p_627->g_593.s2, "p_627->g_593.s2", print_hash_value);
    transparent_crc(p_627->g_593.s3, "p_627->g_593.s3", print_hash_value);
    transparent_crc(p_627->g_593.s4, "p_627->g_593.s4", print_hash_value);
    transparent_crc(p_627->g_593.s5, "p_627->g_593.s5", print_hash_value);
    transparent_crc(p_627->g_593.s6, "p_627->g_593.s6", print_hash_value);
    transparent_crc(p_627->g_593.s7, "p_627->g_593.s7", print_hash_value);
    transparent_crc(p_627->g_599.x, "p_627->g_599.x", print_hash_value);
    transparent_crc(p_627->g_599.y, "p_627->g_599.y", print_hash_value);
    transparent_crc(p_627->g_599.z, "p_627->g_599.z", print_hash_value);
    transparent_crc(p_627->g_599.w, "p_627->g_599.w", print_hash_value);
    transparent_crc(p_627->g_618, "p_627->g_618", print_hash_value);
    transparent_crc(p_627->v_collective, "p_627->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 60; i++)
            transparent_crc(p_627->g_special_values[i + 60 * get_linear_group_id()], "p_627->g_special_values[i + 60 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 60; i++)
            transparent_crc(p_627->l_special_values[i], "p_627->l_special_values[i]", print_hash_value);
    transparent_crc(p_627->l_comm_values[get_linear_local_id()], "p_627->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_627->g_comm_values[get_linear_group_id() * 75 + get_linear_local_id()], "p_627->g_comm_values[get_linear_group_id() * 75 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
