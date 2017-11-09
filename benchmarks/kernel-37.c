// --atomics 56 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 15,33,15 -l 15,1,3
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

__constant uint32_t permutations[10][45] = {
{29,18,36,41,24,6,33,20,10,17,1,31,43,40,44,35,39,9,34,3,15,12,22,19,11,26,42,23,14,28,4,38,21,7,16,2,0,30,8,25,27,37,5,32,13}, // permutation 0
{28,9,17,27,41,16,29,35,23,31,39,18,38,1,33,13,34,5,25,43,12,4,42,0,19,6,7,2,14,26,40,11,37,10,15,8,24,20,32,36,3,22,30,44,21}, // permutation 1
{18,11,4,3,16,24,35,2,19,43,27,44,36,20,22,26,12,34,21,0,25,42,40,23,6,28,29,38,14,8,9,10,5,7,37,39,30,33,17,41,15,1,32,31,13}, // permutation 2
{28,0,44,31,4,33,5,17,18,37,29,41,7,21,32,30,10,20,43,23,39,14,35,38,15,9,26,24,1,22,6,19,25,16,27,34,11,12,3,8,36,13,2,42,40}, // permutation 3
{43,28,16,14,24,22,35,32,36,13,15,25,31,39,38,10,42,37,33,7,34,8,26,4,23,44,0,2,18,3,29,30,12,40,21,1,20,27,5,6,19,17,41,9,11}, // permutation 4
{16,9,43,20,5,4,11,21,39,12,41,31,30,34,8,6,13,23,32,33,36,35,22,17,18,28,0,2,14,26,42,40,3,10,37,7,38,25,24,1,44,27,29,19,15}, // permutation 5
{6,28,43,15,39,17,29,30,41,25,1,19,18,35,16,8,24,40,23,4,11,5,14,10,22,32,44,38,26,12,21,0,33,27,13,36,42,34,9,2,37,3,20,31,7}, // permutation 6
{44,19,25,10,7,2,12,32,15,23,14,22,37,39,42,20,16,3,28,0,17,26,30,11,36,24,27,5,40,1,9,6,35,21,18,4,38,31,43,33,13,41,29,8,34}, // permutation 7
{11,32,2,39,16,4,20,43,19,33,27,17,5,23,14,6,44,12,8,22,28,34,35,13,0,15,26,25,7,37,31,3,40,18,36,38,10,9,30,41,21,1,42,24,29}, // permutation 8
{23,33,42,0,34,6,31,30,25,21,43,27,12,9,7,10,40,22,8,15,2,28,18,14,3,1,38,26,24,16,44,41,19,39,11,13,17,5,29,35,4,32,20,37,36} // permutation 9
};

// Seed: 2812694968

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_3;
    int32_t g_24;
    int32_t *g_30;
    int8_t g_31;
    uint32_t g_33;
    int32_t *g_75;
    volatile int16_t g_78;
    uint16_t g_80;
    int32_t g_82;
    int32_t g_91[1];
    VECTOR(int32_t, 4) g_145;
    uint8_t g_160;
    uint64_t g_173;
    volatile uint8_t g_174;
    uint8_t g_176[4];
    int32_t ** volatile g_179;
    VECTOR(uint8_t, 16) g_213;
    volatile VECTOR(uint8_t, 8) g_214;
    int32_t ** volatile g_218;
    uint32_t g_221;
    int16_t g_243;
    volatile VECTOR(int64_t, 4) g_246;
    volatile VECTOR(int16_t, 8) g_250;
    int32_t * volatile g_253;
    int32_t * volatile g_254;
    int16_t g_492[6];
    uint16_t g_504;
    uint16_t g_506;
    volatile int32_t g_509;
    volatile int32_t *g_508;
    volatile int32_t **g_507;
    volatile VECTOR(uint16_t, 4) g_513;
    int32_t g_558;
    VECTOR(int16_t, 4) g_572;
    int16_t g_574;
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
uint8_t  func_1(struct S0 * p_578);
int64_t  func_7(int32_t  p_8, int8_t  p_9, int32_t  p_10, uint64_t  p_11, int32_t * p_12, struct S0 * p_578);
uint8_t  func_13(int32_t ** p_14, int32_t  p_15, struct S0 * p_578);
int32_t ** func_16(int64_t  p_17, int16_t  p_18, int8_t  p_19, struct S0 * p_578);
int32_t ** func_25(int32_t ** p_26, int32_t * p_27, uint32_t  p_28, uint32_t  p_29, struct S0 * p_578);
uint32_t  func_43(int64_t  p_44, uint32_t  p_45, struct S0 * p_578);
int64_t  func_46(int32_t  p_47, struct S0 * p_578);
uint64_t  func_50(int64_t  p_51, uint32_t  p_52, struct S0 * p_578);
uint8_t  func_54(int16_t  p_55, int32_t ** p_56, uint32_t  p_57, int64_t  p_58, int32_t  p_59, struct S0 * p_578);
int16_t  func_60(int32_t  p_61, uint32_t * p_62, int32_t ** p_63, struct S0 * p_578);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_578->g_3 p_578->g_comm_values p_578->g_24 p_578->g_30 p_578->g_33 p_578->g_78 p_578->g_31 p_578->g_82 p_578->l_comm_values p_578->g_80 p_578->g_91 p_578->g_176 p_578->g_179 p_578->g_221 p_578->g_213 p_578->g_254 p_578->g_173 p_578->g_246 p_578->g_492 p_578->g_250 p_578->g_504 p_578->g_507 p_578->g_508 p_578->g_513 p_578->g_506 p_578->g_160 p_578->g_572 p_578->g_145
 * writes: p_578->g_24 p_578->g_33 p_578->g_30 p_578->g_75 p_578->g_80 p_578->g_82 p_578->g_31 p_578->g_91 p_578->g_160 p_578->g_221 p_578->g_218 p_578->g_504 p_578->g_509 p_578->g_506 p_578->g_3 p_578->g_145
 */
uint8_t  func_1(struct S0 * p_578)
{ /* block id: 4 */
    int32_t *l_2 = &p_578->g_3;
    int32_t **l_4 = &l_2;
    uint32_t l_577 = 0xB3599254L;
    (*l_4) = l_2;
    p_578->g_145.w &= (p_578->g_3 , (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 8))(0x7F5ED9A924C00011L, 0L, func_7((*l_2), (**l_4), ((*l_2) , p_578->g_comm_values[p_578->tid]), ((p_578->g_3 || (**l_4)) & func_13(func_16((safe_sub_func_uint16_t_u_u(p_578->g_comm_values[p_578->tid], (0x11BBB4F5AC3D6C1DL <= (*l_2)))), (**l_4), p_578->g_comm_values[p_578->tid], p_578), (*l_2), p_578)), (*l_4), p_578), 3L, l_577, (**l_4), 0x5427CD5FC7482EF7L, 0x354324E57CD176FAL)).s3, p_578->g_572.w)));
    return p_578->g_82;
}


/* ------------------------------------------ */
/* 
 * reads : p_578->g_513 p_578->g_3 p_578->g_506 p_578->g_160 p_578->g_91
 * writes: p_578->g_506 p_578->g_160 p_578->g_3 p_578->g_91
 */
int64_t  func_7(int32_t  p_8, int8_t  p_9, int32_t  p_10, uint64_t  p_11, int32_t * p_12, struct S0 * p_578)
{ /* block id: 275 */
    uint64_t *l_516[8];
    int32_t l_517 = 0x513471B7L;
    int32_t *l_518 = &p_578->g_91[0];
    int32_t l_527[7][4] = {{0x4BCC4455L,(-4L),0x77274C8DL,(-4L)},{0x4BCC4455L,(-4L),0x77274C8DL,(-4L)},{0x4BCC4455L,(-4L),0x77274C8DL,(-4L)},{0x4BCC4455L,(-4L),0x77274C8DL,(-4L)},{0x4BCC4455L,(-4L),0x77274C8DL,(-4L)},{0x4BCC4455L,(-4L),0x77274C8DL,(-4L)},{0x4BCC4455L,(-4L),0x77274C8DL,(-4L)}};
    VECTOR(uint8_t, 4) l_546 = (VECTOR(uint8_t, 4))(0xB2L, (VECTOR(uint8_t, 2))(0xB2L, 0xE3L), 0xE3L);
    VECTOR(uint8_t, 2) l_547 = (VECTOR(uint8_t, 2))(255UL, 0x0FL);
    int i, j;
    for (i = 0; i < 8; i++)
        l_516[i] = &p_578->g_173;
    if ((((l_517 |= (safe_sub_func_int16_t_s_s((((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(p_578->g_513.zxwz)).wyxxzzxyzywxwyxx)))).lo))).s5 < (safe_rshift_func_int16_t_s_u((-10L), 14))), 65535UL))) | ((void*)0 == l_518)) , (*p_12)))
    { /* block id: 277 */
        int32_t *l_522 = &l_517;
        int32_t *l_523 = &p_578->g_24;
        int32_t *l_524 = (void*)0;
        int32_t *l_525 = &p_578->g_91[0];
        int32_t *l_526[6];
        uint32_t l_528 = 0UL;
        int i;
        for (i = 0; i < 6; i++)
            l_526[i] = (void*)0;
        for (p_578->g_506 = 17; (p_578->g_506 < 18); p_578->g_506++)
        { /* block id: 280 */
            int8_t l_521 = 0x7CL;
            return l_521;
        }
        ++l_528;
    }
    else
    { /* block id: 284 */
        VECTOR(uint8_t, 16) l_548 = (VECTOR(uint8_t, 16))(0xD2L, (VECTOR(uint8_t, 4))(0xD2L, (VECTOR(uint8_t, 2))(0xD2L, 246UL), 246UL), 246UL, 0xD2L, 246UL, (VECTOR(uint8_t, 2))(0xD2L, 246UL), (VECTOR(uint8_t, 2))(0xD2L, 246UL), 0xD2L, 246UL, 0xD2L, 246UL);
        int16_t *l_553 = &p_578->g_492[1];
        int i;
        for (p_578->g_160 = (-15); (p_578->g_160 <= 56); ++p_578->g_160)
        { /* block id: 287 */
            int16_t *l_554 = &p_578->g_492[5];
            int32_t l_555 = (-7L);
            int32_t *l_563 = &p_578->g_82;
            for (p_9 = 0; (p_9 <= (-25)); p_9 = safe_sub_func_int32_t_s_s(p_9, 6))
            { /* block id: 290 */
                VECTOR(uint8_t, 16) l_549 = (VECTOR(uint8_t, 16))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0x59L), 0x59L), 0x59L, 9UL, 0x59L, (VECTOR(uint8_t, 2))(9UL, 0x59L), (VECTOR(uint8_t, 2))(9UL, 0x59L), 9UL, 0x59L, 9UL, 0x59L);
                int16_t *l_552[5][3][1] = {{{&p_578->g_492[1]},{&p_578->g_492[1]},{&p_578->g_492[1]}},{{&p_578->g_492[1]},{&p_578->g_492[1]},{&p_578->g_492[1]}},{{&p_578->g_492[1]},{&p_578->g_492[1]},{&p_578->g_492[1]}},{{&p_578->g_492[1]},{&p_578->g_492[1]},{&p_578->g_492[1]}},{{&p_578->g_492[1]},{&p_578->g_492[1]},{&p_578->g_492[1]}}};
                int16_t **l_551[10] = {&l_552[2][2][0],&l_552[2][2][0],&l_552[2][2][0],&l_552[2][2][0],&l_552[2][2][0],&l_552[2][2][0],&l_552[2][2][0],&l_552[2][2][0],&l_552[2][2][0],&l_552[2][2][0]};
                uint32_t *l_556 = (void*)0;
                uint32_t *l_557 = &p_578->g_33;
                int32_t l_559 = (-9L);
                int32_t **l_560 = (void*)0;
                int32_t *l_562 = &p_578->g_82;
                int32_t **l_561[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_561[i] = &l_562;
                (*l_518) &= ((*p_12) = ((safe_add_func_int16_t_s_s(((l_563 = ((l_559 = (((safe_rshift_func_uint16_t_u_u((p_9 == ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 16))(9L, ((VECTOR(int64_t, 2))(0x4A959C6B73621B94L, 0x650884B79E00AD0EL)), (l_555 = (((1L != (p_578->g_558 ^= ((*l_557) = (safe_unary_minus_func_uint32_t_u((safe_div_func_uint16_t_u_u((((((((((safe_mul_func_int16_t_s_s((((-1L) || 0xD56BCABF9889FBE6L) || ((safe_div_func_uint8_t_u_u((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 16))(rotate(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(0x55L, 0x43L, 0x40L, 0xBEL)).yzzwzywwyxwwyxxw, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(l_546.wxxx)).hi, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(l_547.yxxxyyyx)))).s61, ((VECTOR(uint8_t, 2))(l_548.s97))))))), 255UL, 5UL)))).wyxyzyzzzxwzwxyw))).hi)).s6015544623165424, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(0x4EL, ((VECTOR(uint8_t, 4))(l_549.sb7d0)), 0UL, (safe_unary_minus_func_uint16_t_u((((l_553 = &p_578->g_243) != l_554) , ((p_578->g_506 , ((l_555 , 1UL) < l_555)) | p_578->g_246.x)))), GROUP_DIVERGE(0, 1), p_578->g_176[2], ((VECTOR(uint8_t, 4))(0xA4L)), 0x79L, 254UL, 0xD7L)).lo)), 0x70L, 0x5FL, ((VECTOR(uint8_t, 4))(252UL)), 1UL, 0xD3L))))).odd, ((VECTOR(uint8_t, 8))(246UL))))).even)).y >= l_555), 7L)) , p_11)), p_578->g_145.w)) || p_11) <= (-2L)) , 0xD0D7L) | p_11) != p_578->g_504) ^ 6L) & p_578->g_145.x) || 0x12846055A4758417L), p_578->g_506))))))) == p_578->g_243) , p_10)), 0x708262413ABFC2BAL, ((VECTOR(int64_t, 2))(0x55440FE52DC2201FL)), ((VECTOR(int64_t, 2))((-1L))), ((VECTOR(int64_t, 4))(0x2EC13A8EB4889922L)), 0x7CC9BEE12144BAA0L, 0L, 0x70FC52A63DFC9E29L)).lo, ((VECTOR(int64_t, 8))(0x1DB931B656E1FADDL))))))).odd)).z), 15)) | 0x5B898AA5L) > 0x85265154L)) , l_518)) != (void*)0), p_11)) || 9L));
                if (l_555)
                    continue;
                if ((*p_12))
                    break;
            }
        }
    }
    for (p_11 = 4; (p_11 > 31); p_11 = safe_add_func_uint64_t_u_u(p_11, 6))
    { /* block id: 306 */
        int32_t l_570[6][1][8] = {{{0L,0L,4L,1L,0x0D3D2AB0L,1L,4L,0L}},{{0L,0L,4L,1L,0x0D3D2AB0L,1L,4L,0L}},{{0L,0L,4L,1L,0x0D3D2AB0L,1L,4L,0L}},{{0L,0L,4L,1L,0x0D3D2AB0L,1L,4L,0L}},{{0L,0L,4L,1L,0x0D3D2AB0L,1L,4L,0L}},{{0L,0L,4L,1L,0x0D3D2AB0L,1L,4L,0L}}};
        int16_t *l_571 = &p_578->g_243;
        int16_t *l_573 = &p_578->g_574;
        int i, j, k;
        (1 + 1);
    }
    return (*l_518);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_13(int32_t ** p_14, int32_t  p_15, struct S0 * p_578)
{ /* block id: 273 */
    uint32_t l_510 = 0xD986CC69L;
    return l_510;
}


/* ------------------------------------------ */
/* 
 * reads : p_578->g_comm_values p_578->g_24 p_578->g_30 p_578->g_33 p_578->g_78 p_578->g_31 p_578->g_82 p_578->l_comm_values p_578->g_80 p_578->g_91 p_578->g_176 p_578->g_179 p_578->g_221 p_578->g_213 p_578->g_254 p_578->g_173 p_578->g_246 p_578->g_492 p_578->g_250 p_578->g_3 p_578->g_504 p_578->g_507 p_578->g_508
 * writes: p_578->g_24 p_578->g_33 p_578->g_30 p_578->g_75 p_578->g_80 p_578->g_82 p_578->g_31 p_578->g_91 p_578->g_160 p_578->g_221 p_578->g_218 p_578->g_504 p_578->g_509
 */
int32_t ** func_16(int64_t  p_17, int16_t  p_18, int8_t  p_19, struct S0 * p_578)
{ /* block id: 6 */
    VECTOR(int32_t, 4) l_22 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x7B1466ACL), 0x7B1466ACL);
    int32_t *l_23 = &p_578->g_24;
    uint32_t *l_32 = &p_578->g_33;
    int32_t **l_496[7][7][5] = {{{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75}},{{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75}},{{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75}},{{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75}},{{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75}},{{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75}},{{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75},{(void*)0,&l_23,&l_23,&p_578->g_75,&p_578->g_75}}};
    int32_t ***l_495 = &l_496[1][4][2];
    uint16_t *l_503 = &p_578->g_504;
    uint16_t *l_505[7][5] = {{&p_578->g_506,&p_578->g_506,&p_578->g_506,&p_578->g_506,&p_578->g_506},{&p_578->g_506,&p_578->g_506,&p_578->g_506,&p_578->g_506,&p_578->g_506},{&p_578->g_506,&p_578->g_506,&p_578->g_506,&p_578->g_506,&p_578->g_506},{&p_578->g_506,&p_578->g_506,&p_578->g_506,&p_578->g_506,&p_578->g_506},{&p_578->g_506,&p_578->g_506,&p_578->g_506,&p_578->g_506,&p_578->g_506},{&p_578->g_506,&p_578->g_506,&p_578->g_506,&p_578->g_506,&p_578->g_506},{&p_578->g_506,&p_578->g_506,&p_578->g_506,&p_578->g_506,&p_578->g_506}};
    int i, j, k;
    (*l_23) &= (((((VECTOR(int32_t, 2))(l_22.wz)).odd == p_17) , (0xBFL ^ (p_578->g_comm_values[p_578->tid] & 0x00955205300CE3D9L))) ^ l_22.w);
    (**p_578->g_507) = ((*l_23) = ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))((*l_23), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((-1L), 0x14A9C79EL, (-1L), (((*l_495) = func_25(&l_23, p_578->g_30, p_17, (--(*l_32)), p_578)) == ((safe_sub_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(0x14L, 1UL)) <= (safe_mul_func_uint16_t_u_u((((l_22.w = ((*l_503) |= ((p_17 < ((p_19 , p_578->g_3) < 1UL)) | 0xA6FBL))) && p_578->g_173) , l_22.x), 1L))), p_578->g_3)) , p_578->g_507)), p_17, (*l_23), 0x3C16C8DFL, 2L)).s73)).yyxxyyxy)).hi, ((VECTOR(int32_t, 4))(0L)), ((VECTOR(int32_t, 4))(0x222F4F17L))))), ((VECTOR(int32_t, 2))(4L)), 1L)), ((VECTOR(int32_t, 8))(0x44BF6A31L))))).s6);
    return &p_578->g_30;
}


/* ------------------------------------------ */
/* 
 * reads : p_578->g_30 p_578->g_33 p_578->g_24 p_578->g_comm_values p_578->g_78 p_578->g_31 p_578->g_82 p_578->l_comm_values p_578->g_80 p_578->g_91 p_578->g_176 p_578->g_179 p_578->g_221 p_578->g_213 p_578->g_254 p_578->g_173 p_578->g_246 p_578->g_492 p_578->g_250
 * writes: p_578->g_24 p_578->g_30 p_578->g_75 p_578->g_80 p_578->g_82 p_578->g_31 p_578->g_91 p_578->g_33 p_578->g_160 p_578->g_221 p_578->g_218
 */
int32_t ** func_25(int32_t ** p_26, int32_t * p_27, uint32_t  p_28, uint32_t  p_29, struct S0 * p_578)
{ /* block id: 9 */
    uint16_t l_38 = 9UL;
    VECTOR(uint32_t, 4) l_39 = (VECTOR(uint32_t, 4))(4294967293UL, (VECTOR(uint32_t, 2))(4294967293UL, 0xBFEB1EC6L), 0xBFEB1EC6L);
    VECTOR(uint32_t, 4) l_40 = (VECTOR(uint32_t, 4))(0x81B27067L, (VECTOR(uint32_t, 2))(0x81B27067L, 0xB4499C77L), 0xB4499C77L);
    int i;
    (*p_578->g_30) = 0x22E255BBL;
    (*p_27) = (((safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_578->group_1_offset, get_group_id(1), 10), (l_38 &= p_578->g_33))) && ((*p_27) > ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 4))(l_39.xxxx)).xxxzxzww, ((VECTOR(uint32_t, 16))(l_40.zzyyzwzzxxwyxyyy)).hi))).s24, ((VECTOR(uint32_t, 8))((p_578->g_24 & ((safe_rshift_func_uint16_t_u_u(l_39.x, 4)) & func_43(func_46((safe_mod_func_int64_t_s_s((!p_578->g_comm_values[p_578->tid]), (FAKE_DIVERGE(p_578->group_2_offset, get_group_id(2), 10) , func_50((l_40.z , 0x3A207B8A5F036206L), l_38, p_578)))), p_578), l_39.z, p_578))), p_578->g_492[1], p_578->g_250.s1, ((VECTOR(uint32_t, 2))(0xE6DF3CD9L)), 0xD5020EB6L, 0x68386735L, 0x6EA15F2BL)).s12))))), 0x44A96983L, 8UL)).y)) < 0UL);
    for (p_578->g_31 = 0; (p_578->g_31 <= (-27)); p_578->g_31 = safe_sub_func_uint64_t_u_u(p_578->g_31, 1))
    { /* block id: 263 */
        (*p_27) |= (0x79L < 1UL);
    }
    return &p_578->g_30;
}


/* ------------------------------------------ */
/* 
 * reads : p_578->g_82 p_578->g_179 p_578->g_221 p_578->g_176 p_578->g_213 p_578->g_254 p_578->g_comm_values p_578->g_173 p_578->g_24 p_578->g_246 p_578->l_comm_values
 * writes: p_578->g_82 p_578->g_30 p_578->g_221 p_578->g_80 p_578->g_91 p_578->g_218
 */
uint32_t  func_43(int64_t  p_44, uint32_t  p_45, struct S0 * p_578)
{ /* block id: 107 */
    VECTOR(uint8_t, 2) l_216 = (VECTOR(uint8_t, 2))(1UL, 0xD8L);
    int32_t l_217 = 0x679B9721L;
    int16_t l_251[4][7] = {{0x5E14L,1L,0x5E14L,0x5E14L,1L,0x5E14L,0x5E14L},{0x5E14L,1L,0x5E14L,0x5E14L,1L,0x5E14L,0x5E14L},{0x5E14L,1L,0x5E14L,0x5E14L,1L,0x5E14L,0x5E14L},{0x5E14L,1L,0x5E14L,0x5E14L,1L,0x5E14L,0x5E14L}};
    VECTOR(uint64_t, 8) l_486 = (VECTOR(uint64_t, 8))(0xA54655FD14493F02L, (VECTOR(uint64_t, 4))(0xA54655FD14493F02L, (VECTOR(uint64_t, 2))(0xA54655FD14493F02L, 0xE50E91ABF8FBF686L), 0xE50E91ABF8FBF686L), 0xE50E91ABF8FBF686L, 0xA54655FD14493F02L, 0xE50E91ABF8FBF686L);
    uint16_t *l_489[7][6] = {{&p_578->g_80,&p_578->g_80,(void*)0,&p_578->g_80,&p_578->g_80,&p_578->g_80},{&p_578->g_80,&p_578->g_80,(void*)0,&p_578->g_80,&p_578->g_80,&p_578->g_80},{&p_578->g_80,&p_578->g_80,(void*)0,&p_578->g_80,&p_578->g_80,&p_578->g_80},{&p_578->g_80,&p_578->g_80,(void*)0,&p_578->g_80,&p_578->g_80,&p_578->g_80},{&p_578->g_80,&p_578->g_80,(void*)0,&p_578->g_80,&p_578->g_80,&p_578->g_80},{&p_578->g_80,&p_578->g_80,(void*)0,&p_578->g_80,&p_578->g_80,&p_578->g_80},{&p_578->g_80,&p_578->g_80,(void*)0,&p_578->g_80,&p_578->g_80,&p_578->g_80}};
    int32_t l_490 = 0x63599A88L;
    int32_t *l_491[9][2] = {{(void*)0,&p_578->g_3},{(void*)0,&p_578->g_3},{(void*)0,&p_578->g_3},{(void*)0,&p_578->g_3},{(void*)0,&p_578->g_3},{(void*)0,&p_578->g_3},{(void*)0,&p_578->g_3},{(void*)0,&p_578->g_3},{(void*)0,&p_578->g_3}};
    int i, j;
    for (p_578->g_82 = 0; (p_578->g_82 == 7); p_578->g_82 = safe_add_func_int64_t_s_s(p_578->g_82, 4))
    { /* block id: 110 */
        VECTOR(uint64_t, 8) l_211 = (VECTOR(uint64_t, 8))(0xC5DDF7B942CA0AF4L, (VECTOR(uint64_t, 4))(0xC5DDF7B942CA0AF4L, (VECTOR(uint64_t, 2))(0xC5DDF7B942CA0AF4L, 18446744073709551611UL), 18446744073709551611UL), 18446744073709551611UL, 0xC5DDF7B942CA0AF4L, 18446744073709551611UL);
        VECTOR(int32_t, 16) l_212 = (VECTOR(int32_t, 16))(0x61962AD8L, (VECTOR(int32_t, 4))(0x61962AD8L, (VECTOR(int32_t, 2))(0x61962AD8L, 1L), 1L), 1L, 0x61962AD8L, 1L, (VECTOR(int32_t, 2))(0x61962AD8L, 1L), (VECTOR(int32_t, 2))(0x61962AD8L, 1L), 0x61962AD8L, 1L, 0x61962AD8L, 1L);
        VECTOR(uint8_t, 2) l_215 = (VECTOR(uint8_t, 2))(1UL, 0x7DL);
        uint32_t *l_219 = (void*)0;
        uint32_t *l_220[3];
        VECTOR(uint16_t, 2) l_230 = (VECTOR(uint16_t, 2))(0x6975L, 65527UL);
        uint16_t *l_231 = &p_578->g_80;
        int16_t *l_240 = (void*)0;
        int16_t *l_241 = (void*)0;
        int16_t *l_242[4][5][4] = {{{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243}},{{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243}},{{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243}},{{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243},{&p_578->g_243,(void*)0,&p_578->g_243,&p_578->g_243}}};
        VECTOR(uint8_t, 4) l_244 = (VECTOR(uint8_t, 4))(0xBDL, (VECTOR(uint8_t, 2))(0xBDL, 0x9EL), 0x9EL);
        VECTOR(uint8_t, 8) l_245 = (VECTOR(uint8_t, 8))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0x18L), 0x18L), 0x18L, 5UL, 0x18L);
        VECTOR(uint16_t, 8) l_249 = (VECTOR(uint16_t, 8))(2UL, (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0xDD53L), 0xDD53L), 0xDD53L, 2UL, 0xDD53L);
        int32_t *l_252 = (void*)0;
        int32_t ***l_255 = (void*)0;
        int32_t **l_257 = &p_578->g_75;
        int32_t ***l_256[4] = {&l_257,&l_257,&l_257,&l_257};
        int32_t **l_258 = &l_252;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_220[i] = &p_578->g_221;
        l_217 = ((((((VECTOR(uint64_t, 2))(l_211.s45)).even , &p_578->g_80) != (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_212.sab3db0e1)).s00)).hi , &p_578->g_80)) || ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 8))(p_45, 0xB4L, 248UL, ((VECTOR(uint8_t, 4))(p_578->g_213.sf827)), 8UL)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(6UL, 0xC0L)), 1UL, 0xBDL)).yzxwxwyz, ((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(p_578->g_214.s4627047511535352)).s2e)).yxyxyyxy, ((VECTOR(uint8_t, 4))(l_215.yxxy)).wwxyyxwy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_216.yxyx)).wzzwxwwyzwywzxwx)).lo)))))).s6440533347511545)).s4) , p_45);
        (*p_578->g_179) = &l_217;
        (*p_578->g_254) = ((l_212.sd = (p_44 , (--p_578->g_221))) , (((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_578->group_0_offset, get_group_id(0), 10), (((~(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_230.yxxxxyyxxyxxyyyx)).sef)).odd ^ ((*l_231) = ((VECTOR(uint16_t, 2))(0x3B93L, 0x1B2EL)).even))) & GROUP_DIVERGE(0, 1)) && ((l_217 || ((VECTOR(uint64_t, 2))(0x9881EC2600E6A570L, 0x9608C04AD9498994L)).even) , (safe_mod_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(p_578->g_176[2], (((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_217 = (-1L)), p_44)), ((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 2))(0x8AL, 1UL)).yyxxyyyyxxyyxxyx, ((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_244.xyzw)).yxxwxzzy)).s0604047555275306)).se52d, ((VECTOR(uint8_t, 2))(l_245.s44)).yyxx))).yywwyzzywzwwxwzz))).sc)) != (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(0x659088A6FAE5F79DL, 0L, 1L, 0x27D56CCA4D006B99L, ((VECTOR(int64_t, 8))(p_578->g_246.wywzzzxw)), 0L, (-8L), 0x0D61C2E0762BF705L, (-1L))).s59, ((VECTOR(int64_t, 8))(((&p_578->g_82 == (((((((p_578->g_145.x == (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(0xCBF5L, (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 16))(l_249.s0572772211734112)).odd, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(0x089AL, (-3L), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_578->g_250.s2046)), p_578->l_comm_values[(safe_mod_func_uint32_t_u_u(p_578->tid, 45))], 0x0049L, 0x43F0L, (-1L))).s5, 0x082DL, ((VECTOR(int16_t, 4))(8L)))).s34)))).xxxx)).y, 0x2BB7L, 0x4E8AL, 4L, l_215.y, 0x3BD7L, ((VECTOR(int16_t, 8))(0x0730L)), (-1L), 6L)).sf184, ((VECTOR(int16_t, 4))((-8L)))))).xyywxyzwzxzywzzz)).odd, ((VECTOR(uint16_t, 8))(9UL))))).s0543045010217412)).s0, (-3L))), ((VECTOR(uint16_t, 2))(0UL)), 0UL, ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 4))(65535UL)), 0xBC6AL, ((VECTOR(uint16_t, 2))(65535UL)), 65531UL, 6UL)).odd)).s4 ^ l_216.y)) || p_45) >= p_578->g_91[0]) < 0x4244L) <= p_44) || 0x02L) , &p_578->g_82)) < 0x52L), ((VECTOR(int64_t, 2))((-6L))), l_251[0][0], p_44, p_45, (-6L), 0x3055DAE04848015EL)).s74))).yxyyxxyx, ((VECTOR(int64_t, 8))((-5L))), ((VECTOR(int64_t, 8))(9L))))).s2, 0x7E824BA8217980DCL, 0x67E77126209F7C56L, 0x69AF53ABEA12880AL)).w , 0UL)) | p_578->g_213.sf))), p_578->g_176[2])))))), 9UL)) <= l_245.s0) & 0L));
        p_578->g_218 = (l_258 = &p_578->g_30);
    }
    if ((atomic_inc(&p_578->g_atomic_input[56 * get_linear_group_id() + 24]) == 4))
    { /* block id: 122 */
        int16_t l_259 = 1L;
        if (l_259)
        { /* block id: 123 */
            uint32_t l_260 = 0x6021F33EL;
            uint16_t l_261 = 65534UL;
            int32_t l_262 = 0x6EA668F6L;
            int32_t *l_355[6][3][3] = {{{&l_262,&l_262,&l_262},{&l_262,&l_262,&l_262},{&l_262,&l_262,&l_262}},{{&l_262,&l_262,&l_262},{&l_262,&l_262,&l_262},{&l_262,&l_262,&l_262}},{{&l_262,&l_262,&l_262},{&l_262,&l_262,&l_262},{&l_262,&l_262,&l_262}},{{&l_262,&l_262,&l_262},{&l_262,&l_262,&l_262},{&l_262,&l_262,&l_262}},{{&l_262,&l_262,&l_262},{&l_262,&l_262,&l_262},{&l_262,&l_262,&l_262}},{{&l_262,&l_262,&l_262},{&l_262,&l_262,&l_262},{&l_262,&l_262,&l_262}}};
            int32_t *l_356 = &l_262;
            int32_t *l_357[5] = {&l_262,&l_262,&l_262,&l_262,&l_262};
            uint32_t l_358 = 0x9C3CC93BL;
            int i, j, k;
            l_260 |= ((VECTOR(int32_t, 2))(0x1DA71A93L, 0x14B34C81L)).hi;
            if ((l_262 |= l_261))
            { /* block id: 126 */
                VECTOR(int32_t, 4) l_263 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2BCA4747L), 0x2BCA4747L);
                int32_t l_264 = 0L;
                int i;
                l_262 = ((VECTOR(int32_t, 2))(l_263.wx)).hi;
                if (l_264)
                { /* block id: 128 */
                    int32_t l_265 = 0x17F4EC64L;
                    uint64_t l_277 = 0xA88DE528EB5C6D15L;
                    for (l_265 = 0; (l_265 >= (-13)); --l_265)
                    { /* block id: 131 */
                        uint64_t l_268 = 0x6A349A6F94548FFBL;
                        int16_t l_269 = 4L;
                        int32_t l_271 = (-1L);
                        int32_t *l_270 = &l_271;
                        uint8_t l_272 = 0x70L;
                        VECTOR(int32_t, 2) l_275 = (VECTOR(int32_t, 2))(0x14776390L, 0L);
                        int64_t l_276 = 0x62F93242E56490D0L;
                        int i;
                        l_270 = ((l_268 , l_269) , (void*)0);
                        l_272++;
                        l_262 = 0x50EAAE5CL;
                        l_276 = (l_263.x &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_275.yy)), 0L, 0x48899B70L)).zzyzyyzwyxxyzyzz)).s0);
                    }
                    l_277++;
                }
                else
                { /* block id: 139 */
                    int32_t l_280 = 0x7D94092DL;
                    uint8_t l_323 = 1UL;
                    for (l_280 = 0; (l_280 <= (-27)); l_280--)
                    { /* block id: 142 */
                        int32_t l_283 = 0L;
                        int32_t l_284 = (-1L);
                        int16_t l_285 = 0x4AB7L;
                        int32_t *l_286 = &l_284;
                        int32_t *l_287 = &l_283;
                        l_262 = ((l_284 = l_283) , l_285);
                        l_287 = l_286;
                    }
                    for (l_280 = 18; (l_280 == 6); --l_280)
                    { /* block id: 149 */
                        int32_t l_290 = (-1L);
                        int64_t l_291 = 1L;
                        int64_t l_292 = 3L;
                        uint32_t l_293 = 0xE5F0E1F6L;
                        int8_t l_296 = 1L;
                        int16_t l_297 = 0x6CE5L;
                        int64_t l_298 = 0x7AE959DB557B021DL;
                        uint64_t l_299 = 0x167C54409EFDA9F7L;
                        l_263.z = l_290;
                        ++l_293;
                        l_263.y = (l_296 , 0x407AAD60L);
                        l_299++;
                    }
                    for (l_280 = 11; (l_280 == (-17)); l_280 = safe_sub_func_int64_t_s_s(l_280, 7))
                    { /* block id: 157 */
                        VECTOR(uint16_t, 2) l_304 = (VECTOR(uint16_t, 2))(0UL, 0UL);
                        VECTOR(int64_t, 2) l_305 = (VECTOR(int64_t, 2))(0x5AFAD3BD019D2915L, 1L);
                        uint16_t l_306 = 1UL;
                        uint16_t l_307 = 9UL;
                        int64_t l_308 = 0L;
                        uint32_t l_309 = 4294967287UL;
                        int16_t l_312 = 0x24D0L;
                        VECTOR(uint32_t, 8) l_313 = (VECTOR(uint32_t, 8))(0xF4B684BFL, (VECTOR(uint32_t, 4))(0xF4B684BFL, (VECTOR(uint32_t, 2))(0xF4B684BFL, 4294967295UL), 4294967295UL), 4294967295UL, 0xF4B684BFL, 4294967295UL);
                        VECTOR(uint32_t, 4) l_314 = (VECTOR(uint32_t, 4))(0x3DAA5321L, (VECTOR(uint32_t, 2))(0x3DAA5321L, 0x03D7F307L), 0x03D7F307L);
                        VECTOR(uint32_t, 16) l_315 = (VECTOR(uint32_t, 16))(0xE28B10FAL, (VECTOR(uint32_t, 4))(0xE28B10FAL, (VECTOR(uint32_t, 2))(0xE28B10FAL, 4294967295UL), 4294967295UL), 4294967295UL, 0xE28B10FAL, 4294967295UL, (VECTOR(uint32_t, 2))(0xE28B10FAL, 4294967295UL), (VECTOR(uint32_t, 2))(0xE28B10FAL, 4294967295UL), 0xE28B10FAL, 4294967295UL, 0xE28B10FAL, 4294967295UL);
                        VECTOR(uint32_t, 16) l_316 = (VECTOR(uint32_t, 16))(0x65DE9853L, (VECTOR(uint32_t, 4))(0x65DE9853L, (VECTOR(uint32_t, 2))(0x65DE9853L, 0x3FD7ABBBL), 0x3FD7ABBBL), 0x3FD7ABBBL, 0x65DE9853L, 0x3FD7ABBBL, (VECTOR(uint32_t, 2))(0x65DE9853L, 0x3FD7ABBBL), (VECTOR(uint32_t, 2))(0x65DE9853L, 0x3FD7ABBBL), 0x65DE9853L, 0x3FD7ABBBL, 0x65DE9853L, 0x3FD7ABBBL);
                        VECTOR(int16_t, 2) l_317 = (VECTOR(int16_t, 2))(0x68C2L, 0x1B42L);
                        VECTOR(uint16_t, 4) l_318 = (VECTOR(uint16_t, 4))(0x3ACDL, (VECTOR(uint16_t, 2))(0x3ACDL, 0x5592L), 0x5592L);
                        VECTOR(int32_t, 8) l_319 = (VECTOR(int32_t, 8))(0x0D471A9AL, (VECTOR(int32_t, 4))(0x0D471A9AL, (VECTOR(int32_t, 2))(0x0D471A9AL, (-10L)), (-10L)), (-10L), 0x0D471A9AL, (-10L));
                        VECTOR(int32_t, 8) l_320 = (VECTOR(int32_t, 8))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-1L)), (-1L)), (-1L), 8L, (-1L));
                        uint32_t l_321 = 0x5E920F64L;
                        int8_t l_322[8][7][4] = {{{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)}},{{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)}},{{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)}},{{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)}},{{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)}},{{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)}},{{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)}},{{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)},{(-6L),0L,0L,(-6L)}}};
                        int i, j, k;
                        l_319.s0 = ((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_304.yx)).yxyxxyxy)).s5 , (((VECTOR(int64_t, 16))(l_305.xyyyyyyyyxyxxyxy)).s9 , ((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 2))(1UL, 2UL)).yyyyyxyy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0xB0FBFB27L, 5UL)), 0xA5D0BC74L, 2UL)).wyzxzyyx, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(4294967290UL, 4294967295UL, (((l_307 = (l_306 = 0x1EA5E7D4B7D85DBEL)) , l_308) , l_309), 0xC588D4D5L, 4294967295UL, 0x6D403725L, 4294967294UL, ((VECTOR(uint32_t, 8))((l_260--), 0x4482857DL, l_312, ((VECTOR(uint32_t, 2))(1UL, 0xDBC6FC84L)), ((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x8418536CL, 0xC820B1F8L)).yxxyyxxxyxyyxxyy)).sed, ((VECTOR(uint32_t, 8))(l_313.s14557204)).s53, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(9UL, 0xB061BF07L)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(l_314.xw)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_315.s04d6)).zwwyzxww)))))).s02, ((VECTOR(uint32_t, 4))(l_316.sb557)).hi))).yyyxxyxy)))), 0x8738472FL, 0xA7C4602CL, ((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(l_317.xx)).yxyyyyyy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_318.wwzwwwyxxxyxwxzw)).s46bd)))).wwzwxyzz))).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(0x5252EDA2L, 0x57B47D25L, 0x290B5A5AL, 0x1FC9B049L, ((VECTOR(int32_t, 4))(l_319.s0222)), ((VECTOR(int32_t, 8))(l_320.s12301360)))).odd, ((VECTOR(int32_t, 16))(l_321, (l_262 = (GROUP_DIVERGE(2, 1) , 1L)), 0L, 0L, 0x427DB5C1L, 0x4DD7D93EL, 0L, 1L, ((VECTOR(int32_t, 2))(0x6D3F3E70L)), ((VECTOR(int32_t, 4))(0x2206891CL)), 0x01C377F9L, 0x4E999821L)).even))))).lo))), ((VECTOR(int32_t, 4))(0L))))))).s31))), 1UL)).s1, 0x87AC3E4CL, 0x9A4E5336L, ((VECTOR(uint32_t, 4))(0x08253E9CL)), 0x38C6CD71L, 0x78536657L)).lo)), 1UL, 0x00F242D7L, 1UL, 0x150329AFL, 0xE82C045BL, l_322[4][6][2], 4294967289UL, 4294967293UL)).odd))).hi, ((VECTOR(uint32_t, 4))(4UL))))).yzwzzwyy, ((VECTOR(uint32_t, 8))(4294967290UL))))).s3)) , 0x08BBBB06L);
                    }
                    if (l_323)
                    { /* block id: 164 */
                        int8_t l_324 = 0x1FL;
                        VECTOR(uint32_t, 2) l_327 = (VECTOR(uint32_t, 2))(0x710C580EL, 0x25FD403CL);
                        uint32_t *l_326 = (void*)0;
                        uint32_t **l_325 = &l_326;
                        int i;
                        l_262 |= l_324;
                        l_325 = (void*)0;
                    }
                    else
                    { /* block id: 167 */
                        VECTOR(int32_t, 8) l_328 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-5L)), (-5L)), (-5L), 0L, (-5L));
                        int32_t *l_329[3];
                        int32_t *l_330 = (void*)0;
                        VECTOR(int32_t, 8) l_331 = (VECTOR(int32_t, 8))(0x454FFE9FL, (VECTOR(int32_t, 4))(0x454FFE9FL, (VECTOR(int32_t, 2))(0x454FFE9FL, 1L), 1L), 1L, 0x454FFE9FL, 1L);
                        uint8_t l_332 = 255UL;
                        uint32_t l_333 = 0x8059FE58L;
                        int8_t l_334 = (-1L);
                        int8_t l_335 = 0L;
                        int64_t l_336 = 0x35BDC0AB179F6674L;
                        int32_t l_337 = 1L;
                        VECTOR(uint32_t, 8) l_338 = (VECTOR(uint32_t, 8))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 1UL), 1UL), 1UL, 8UL, 1UL);
                        VECTOR(uint32_t, 8) l_339 = (VECTOR(uint32_t, 8))(6UL, (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0x05D6EF3AL), 0x05D6EF3AL), 0x05D6EF3AL, 6UL, 0x05D6EF3AL);
                        VECTOR(uint32_t, 2) l_340 = (VECTOR(uint32_t, 2))(4UL, 0xA453FDD6L);
                        VECTOR(uint32_t, 2) l_341 = (VECTOR(uint32_t, 2))(3UL, 1UL);
                        uint64_t l_342[5][3] = {{0x602A066CB67E40BDL,0xDE4C37FB32BE0F94L,0x602A066CB67E40BDL},{0x602A066CB67E40BDL,0xDE4C37FB32BE0F94L,0x602A066CB67E40BDL},{0x602A066CB67E40BDL,0xDE4C37FB32BE0F94L,0x602A066CB67E40BDL},{0x602A066CB67E40BDL,0xDE4C37FB32BE0F94L,0x602A066CB67E40BDL},{0x602A066CB67E40BDL,0xDE4C37FB32BE0F94L,0x602A066CB67E40BDL}};
                        int64_t l_343 = 0x2FE9CAD12B6D85FCL;
                        int32_t l_344 = 0x22A2AF9BL;
                        uint8_t l_345 = 252UL;
                        uint32_t l_346 = 4294967295UL;
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_329[i] = (void*)0;
                        l_262 ^= ((VECTOR(int32_t, 8))(l_328.s51065534)).s6;
                        l_330 = (l_329[2] = (void*)0);
                        l_262 = (l_331.s0 , ((l_332 , (l_333 , (l_334 , (l_335 , ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 4))(4294967295UL, l_336, 0x941B23E0L, 0xBF0802A1L)).xzxxxwyw, ((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(max(((VECTOR(uint32_t, 16))(l_337, 7UL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_338.s73351533)))), ((VECTOR(uint32_t, 2))(0xD62752A0L, 0xEADE78D6L)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(0x55267EA2L, ((VECTOR(uint32_t, 4))(4294967286UL, ((VECTOR(uint32_t, 2))(4294967295UL, 0UL)), 0xC0E27DA5L)), (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_339.s24637735)).hi)).y , ((VECTOR(uint32_t, 8))(l_340.yxxxxxyx)).s3), 0x03617F22L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_341.yy)).xxyxyyyy)).s11)).even, l_342[4][1], ((VECTOR(uint32_t, 4))(4294967295UL, l_343, 0UL, 0xA3187CF5L)), ((VECTOR(uint32_t, 2))(4294967293UL)), 0UL)).s42f3)))), (uint32_t)l_344))).even)).s31, ((VECTOR(uint32_t, 2))(4294967295UL))))).yxyyyyyyyxxxxxxy, ((VECTOR(uint32_t, 16))(0xDE7A5479L))))), ((VECTOR(uint32_t, 16))(0xA079E0FFL))))).hi))).s25)).lo)))) , l_345));
                        ++l_346;
                    }
                }
            }
            else
            { /* block id: 175 */
                int16_t *l_350 = (void*)0;
                int16_t **l_349[5][7] = {{&l_350,&l_350,&l_350,&l_350,&l_350,&l_350,&l_350},{&l_350,&l_350,&l_350,&l_350,&l_350,&l_350,&l_350},{&l_350,&l_350,&l_350,&l_350,&l_350,&l_350,&l_350},{&l_350,&l_350,&l_350,&l_350,&l_350,&l_350,&l_350},{&l_350,&l_350,&l_350,&l_350,&l_350,&l_350,&l_350}};
                int16_t **l_351 = &l_350;
                uint8_t l_352 = 0xF4L;
                uint8_t l_353 = 1UL;
                int32_t l_354 = 1L;
                int i, j;
                l_351 = l_349[3][1];
                l_354 = (l_353 = (l_262 = (l_352 , ((VECTOR(int32_t, 2))(0x06B153D8L, 1L)).odd)));
            }
            l_357[3] = (l_356 = l_355[0][2][0]);
            if (l_358)
            { /* block id: 183 */
                uint32_t l_359[7][9][4] = {{{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL}},{{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL}},{{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL}},{{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL}},{{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL}},{{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL}},{{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL},{4294967288UL,0x1BB09EF1L,4294967290UL,0xDE46391FL}}};
                uint16_t l_405 = 0x8812L;
                int32_t l_406 = 7L;
                int32_t *l_407 = &l_406;
                int i, j, k;
                if (l_359[1][7][1])
                { /* block id: 184 */
                    int16_t l_360[1];
                    VECTOR(int64_t, 2) l_361 = (VECTOR(int64_t, 2))(0L, 8L);
                    int32_t l_362 = 0x436AAF7CL;
                    int8_t l_363 = 8L;
                    uint32_t l_364[10][5] = {{0x86F4B8EAL,0UL,1UL,0x998834DCL,0UL},{0x86F4B8EAL,0UL,1UL,0x998834DCL,0UL},{0x86F4B8EAL,0UL,1UL,0x998834DCL,0UL},{0x86F4B8EAL,0UL,1UL,0x998834DCL,0UL},{0x86F4B8EAL,0UL,1UL,0x998834DCL,0UL},{0x86F4B8EAL,0UL,1UL,0x998834DCL,0UL},{0x86F4B8EAL,0UL,1UL,0x998834DCL,0UL},{0x86F4B8EAL,0UL,1UL,0x998834DCL,0UL},{0x86F4B8EAL,0UL,1UL,0x998834DCL,0UL},{0x86F4B8EAL,0UL,1UL,0x998834DCL,0UL}};
                    int16_t l_367 = (-1L);
                    int64_t l_384 = 0x28D92066DBDAC93BL;
                    int64_t l_385 = 0x060C42AC63BEA127L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_360[i] = 0x4E0FL;
                    l_364[3][4]++;
                    if (l_367)
                    { /* block id: 186 */
                        int16_t l_368 = (-4L);
                        uint32_t l_369 = 0x56E7F132L;
                        uint8_t l_372 = 0x14L;
                        int32_t l_376 = (-1L);
                        int32_t *l_375 = &l_376;
                        l_369--;
                        ++l_372;
                        l_355[0][2][1] = l_375;
                    }
                    else
                    { /* block id: 190 */
                        int32_t *l_377 = (void*)0;
                        int32_t l_378 = 0L;
                        int32_t l_379 = 0x6CA8B75BL;
                        VECTOR(int32_t, 8) l_380 = (VECTOR(int32_t, 8))(0x325D4115L, (VECTOR(int32_t, 4))(0x325D4115L, (VECTOR(int32_t, 2))(0x325D4115L, 0x27EACAC3L), 0x27EACAC3L), 0x27EACAC3L, 0x325D4115L, 0x27EACAC3L);
                        uint32_t l_381 = 0x544126F1L;
                        uint32_t l_382 = 1UL;
                        int16_t l_383 = 0x3EC6L;
                        int i;
                        l_377 = l_377;
                        l_381 ^= ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(8L, 0x060EB540L)), 0x6EB05B6CL, (l_379 = l_378), 0L, 0x74411FA7L, (-1L), 0L)).s5271366540263721, ((VECTOR(int32_t, 2))(l_380.s75)).xyxxyxxxyyxxxxxx)))))).s4;
                        l_383 &= l_382;
                    }
                    if ((l_385 &= l_384))
                    { /* block id: 197 */
                        VECTOR(int32_t, 8) l_386 = (VECTOR(int32_t, 8))(0x16F67719L, (VECTOR(int32_t, 4))(0x16F67719L, (VECTOR(int32_t, 2))(0x16F67719L, 0x550F2087L), 0x550F2087L), 0x550F2087L, 0x16F67719L, 0x550F2087L);
                        int64_t l_387 = 0L;
                        int16_t l_388 = 1L;
                        int32_t l_389 = 0L;
                        uint16_t l_390 = 0UL;
                        int i;
                        l_386.s5 = ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(l_386.s36716501)).hi, ((VECTOR(int32_t, 2))(0x36406CD2L, 0x2C009296L)).xxxy, ((VECTOR(int32_t, 2))((-4L), 2L)).xyxy))).z;
                        l_390++;
                    }
                    else
                    { /* block id: 200 */
                        VECTOR(int32_t, 16) l_393 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 7L), 7L), 7L, 0L, 7L, (VECTOR(int32_t, 2))(0L, 7L), (VECTOR(int32_t, 2))(0L, 7L), 0L, 7L, 0L, 7L);
                        int32_t l_394 = (-3L);
                        uint32_t l_395 = 0xCC41801EL;
                        uint64_t l_398 = 0x25D42C20603BE734L;
                        int i;
                        l_394 |= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_393.s74)), (-1L), 0L)).w;
                        l_395++;
                        l_398--;
                    }
                }
                else
                { /* block id: 205 */
                    int32_t l_401 = 6L;
                    int16_t l_402 = (-1L);
                    int32_t l_403 = (-9L);
                    int16_t l_404 = 0x0F75L;
                    l_401 = 2L;
                    l_403 = l_402;
                    l_403 ^= l_404;
                    l_403 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x24F64060L, 0L)), 0x4EB2ADA4L, 0x526074DEL)).y;
                }
                l_407 = (l_356 = (((FAKE_DIVERGE(p_578->global_1_offset, get_global_id(1), 10) , l_405) , 1L) , (l_355[0][2][0] = (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0x4229L, 65535UL, 2UL, 0x52E9L)).yyxwwyyzyxwzyzzx)).odd)).s1 , (l_406 , l_407)))));
            }
            else
            { /* block id: 214 */
                uint16_t l_408 = 65535UL;
                int32_t l_409[5];
                uint64_t l_420 = 0x02047E6ADB7A7C47L;
                int32_t l_421 = 1L;
                int32_t l_422 = 0x38248ECBL;
                int32_t *l_423 = &l_409[3];
                int i;
                for (i = 0; i < 5; i++)
                    l_409[i] = 0x413C0FBAL;
                if ((l_409[2] = l_408))
                { /* block id: 216 */
                    int64_t l_410 = 0x18A3CF447DEA4AFDL;
                    uint16_t l_411 = 2UL;
                    l_411 = (l_410 = 0x7FC32161L);
                }
                else
                { /* block id: 219 */
                    VECTOR(int32_t, 16) l_412 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x12094387L), 0x12094387L), 0x12094387L, 0L, 0x12094387L, (VECTOR(int32_t, 2))(0L, 0x12094387L), (VECTOR(int32_t, 2))(0L, 0x12094387L), 0L, 0x12094387L, 0L, 0x12094387L);
                    VECTOR(int32_t, 2) l_413 = (VECTOR(int32_t, 2))((-7L), (-10L));
                    VECTOR(int32_t, 4) l_414 = (VECTOR(int32_t, 4))(0x50AF045AL, (VECTOR(int32_t, 2))(0x50AF045AL, 3L), 3L);
                    uint32_t l_415 = 0x08B0A664L;
                    int8_t l_416 = (-7L);
                    uint32_t l_417 = 4294967293UL;
                    int i;
                    l_415 = ((VECTOR(int32_t, 4))(9L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_412.scdf4be7a1b7e4629)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_413.xyxxyyxy)).s4044165537312100)), ((VECTOR(int32_t, 16))(l_414.yzxzyxyxzyxxwyxy))))).s90)), (-4L))).z;
                    --l_417;
                }
                l_356 = ((l_420 = FAKE_DIVERGE(p_578->local_1_offset, get_local_id(1), 10)) , ((l_409[2] = (l_421 , (-1L))) , (l_422 , l_423)));
                for (l_421 = 29; (l_421 >= (-7)); --l_421)
                { /* block id: 228 */
                    VECTOR(uint16_t, 8) l_426 = (VECTOR(uint16_t, 8))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 65535UL), 65535UL), 65535UL, 65531UL, 65535UL);
                    VECTOR(int64_t, 16) l_427 = (VECTOR(int64_t, 16))(0x08A2468CED126D25L, (VECTOR(int64_t, 4))(0x08A2468CED126D25L, (VECTOR(int64_t, 2))(0x08A2468CED126D25L, 0x441B4D520168DE09L), 0x441B4D520168DE09L), 0x441B4D520168DE09L, 0x08A2468CED126D25L, 0x441B4D520168DE09L, (VECTOR(int64_t, 2))(0x08A2468CED126D25L, 0x441B4D520168DE09L), (VECTOR(int64_t, 2))(0x08A2468CED126D25L, 0x441B4D520168DE09L), 0x08A2468CED126D25L, 0x441B4D520168DE09L, 0x08A2468CED126D25L, 0x441B4D520168DE09L);
                    VECTOR(int32_t, 16) l_428 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-1L)), (-1L)), (-1L), 5L, (-1L), (VECTOR(int32_t, 2))(5L, (-1L)), (VECTOR(int32_t, 2))(5L, (-1L)), 5L, (-1L), 5L, (-1L));
                    int16_t l_429 = (-7L);
                    uint32_t l_430 = 1UL;
                    VECTOR(int32_t, 2) l_431 = (VECTOR(int32_t, 2))(0x1DCFF2DCL, 0L);
                    VECTOR(int32_t, 4) l_432 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x0363A8CAL), 0x0363A8CAL);
                    VECTOR(int32_t, 4) l_433 = (VECTOR(int32_t, 4))(0x07A452E0L, (VECTOR(int32_t, 2))(0x07A452E0L, 0x12683E8AL), 0x12683E8AL);
                    VECTOR(int32_t, 4) l_434 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
                    uint64_t l_435[2][8] = {{0x001042804E4C950BL,0xEDC6E114B12DDDFBL,0xEB1C24B5813945DAL,0xEDC6E114B12DDDFBL,0x001042804E4C950BL,0x001042804E4C950BL,0xEDC6E114B12DDDFBL,0xEB1C24B5813945DAL},{0x001042804E4C950BL,0xEDC6E114B12DDDFBL,0xEB1C24B5813945DAL,0xEDC6E114B12DDDFBL,0x001042804E4C950BL,0x001042804E4C950BL,0xEDC6E114B12DDDFBL,0xEB1C24B5813945DAL}};
                    VECTOR(int32_t, 2) l_436 = (VECTOR(int32_t, 2))((-1L), 0x4F8096CDL);
                    VECTOR(int32_t, 2) l_437 = (VECTOR(int32_t, 2))(0x4BB2FE15L, 2L);
                    VECTOR(int32_t, 16) l_438 = (VECTOR(int32_t, 16))(0x5C593E33L, (VECTOR(int32_t, 4))(0x5C593E33L, (VECTOR(int32_t, 2))(0x5C593E33L, 2L), 2L), 2L, 0x5C593E33L, 2L, (VECTOR(int32_t, 2))(0x5C593E33L, 2L), (VECTOR(int32_t, 2))(0x5C593E33L, 2L), 0x5C593E33L, 2L, 0x5C593E33L, 2L);
                    VECTOR(int32_t, 16) l_439 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x7442B08DL), 0x7442B08DL), 0x7442B08DL, 0L, 0x7442B08DL, (VECTOR(int32_t, 2))(0L, 0x7442B08DL), (VECTOR(int32_t, 2))(0L, 0x7442B08DL), 0L, 0x7442B08DL, 0L, 0x7442B08DL);
                    VECTOR(int32_t, 16) l_440 = (VECTOR(int32_t, 16))(0x04482571L, (VECTOR(int32_t, 4))(0x04482571L, (VECTOR(int32_t, 2))(0x04482571L, (-10L)), (-10L)), (-10L), 0x04482571L, (-10L), (VECTOR(int32_t, 2))(0x04482571L, (-10L)), (VECTOR(int32_t, 2))(0x04482571L, (-10L)), 0x04482571L, (-10L), 0x04482571L, (-10L));
                    uint64_t l_441 = 18446744073709551607UL;
                    VECTOR(int32_t, 16) l_442 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L, (VECTOR(int32_t, 2))((-4L), 0L), (VECTOR(int32_t, 2))((-4L), 0L), (-4L), 0L, (-4L), 0L);
                    uint32_t l_443 = 0x39A34224L;
                    int8_t l_444 = 3L;
                    uint16_t l_445 = 0x2B4DL;
                    int8_t l_446 = 0L;
                    int32_t l_447[1][4][1] = {{{0x5E5586ADL},{0x5E5586ADL},{0x5E5586ADL},{0x5E5586ADL}}};
                    int i, j, k;
                    if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x28328493L, ((*l_423) = l_426.s2), l_427.s7, ((VECTOR(int32_t, 2))(l_428.sa4)), ((*l_356) &= l_429), 0x57E33C89L, ((VECTOR(int32_t, 8))(0x7E244826L, l_430, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 16))(l_431.xxxyxxxyxxxxxxyy)).sfa67))), (-5L), 0L)), (-7L))).sb308)).lo, ((VECTOR(int32_t, 8))(l_432.yzzwyxxy)).s22, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 16))(l_433.zxxzwzwzzwzyzyzz)).sfbd0, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))((-1L), 0x4B62A37BL)).yxxx, ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(l_434.wwyw)).lo, (int32_t)((VECTOR(int32_t, 8))(l_435[0][6], 0x3B500A73L, ((VECTOR(int32_t, 2))(l_436.yx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))((-9L), ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0x7D9B37D2L, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 8))(l_437.xxxxyxxx)).odd, ((VECTOR(int32_t, 4))(l_438.se204))))), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_439.sbdc7c9cc)).odd)).hi, (int32_t)((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_440.sfb8f4ee374924959)).sf0bb)).y, (int32_t)(l_441 , 0x429B1DE2L)))), 0x37769C58L)))).s2510633211534566)).even)), ((VECTOR(int32_t, 2))(l_442.sf6)).yyxyyyxy))), ((l_445 &= (l_444 |= l_443)) , l_446), 0x4C66FAF0L, ((VECTOR(int32_t, 2))(2L)), (-2L), 2L, 0x01FAB952L)).sa2, ((VECTOR(int32_t, 2))(1L))))).yyxy)))).s3))).xxxxyyyy, ((VECTOR(int32_t, 8))((-7L)))))).even)))))).wzxxyyxw)).s05))).yxyy)), ((VECTOR(int32_t, 8))(0x01BE40D0L)), 0x5E20C95DL, l_447[0][0][0], 7L, 1L)).s54, ((VECTOR(int32_t, 2))(0x3F3DD166L))))))).odd)
                    { /* block id: 233 */
                        int32_t l_448 = (-7L);
                        int32_t l_449[7][7] = {{0L,0L,(-6L),1L,1L,1L,(-6L)},{0L,0L,(-6L),1L,1L,1L,(-6L)},{0L,0L,(-6L),1L,1L,1L,(-6L)},{0L,0L,(-6L),1L,1L,1L,(-6L)},{0L,0L,(-6L),1L,1L,1L,(-6L)},{0L,0L,(-6L),1L,1L,1L,(-6L)},{0L,0L,(-6L),1L,1L,1L,(-6L)}};
                        int32_t l_450 = 0x1B1146DEL;
                        uint32_t l_451 = 0UL;
                        int i, j;
                        (*l_356) &= l_448;
                        ++l_451;
                    }
                    else
                    { /* block id: 236 */
                        int32_t l_454 = (-1L);
                        uint32_t l_455 = 0x0582363DL;
                        uint8_t l_456 = 1UL;
                        int8_t l_457 = 5L;
                        (*l_356) = 0x192769CCL;
                        (*l_356) = (l_457 = (l_456 ^= (l_455 ^= l_454)));
                    }
                }
            }
        }
        else
        { /* block id: 245 */
            VECTOR(int32_t, 8) l_458 = (VECTOR(int32_t, 8))(0x2EC648A5L, (VECTOR(int32_t, 4))(0x2EC648A5L, (VECTOR(int32_t, 2))(0x2EC648A5L, 0x11CE7B11L), 0x11CE7B11L), 0x11CE7B11L, 0x2EC648A5L, 0x11CE7B11L);
            int32_t l_459 = 0x52DD41D6L;
            VECTOR(uint32_t, 8) l_460 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x1251EA13L), 0x1251EA13L), 0x1251EA13L, 4294967295UL, 0x1251EA13L);
            int8_t l_461[1];
            uint64_t l_462 = 0UL;
            int64_t l_463[7] = {9L,9L,9L,9L,9L,9L,9L};
            int32_t l_465 = (-1L);
            int32_t *l_464 = &l_465;
            int32_t *l_466 = (void*)0;
            VECTOR(int16_t, 8) l_467 = (VECTOR(int16_t, 8))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x349AL), 0x349AL), 0x349AL, 2L, 0x349AL);
            int16_t l_468 = 0x5098L;
            uint32_t l_469 = 0x1299FD8BL;
            int i;
            for (i = 0; i < 1; i++)
                l_461[i] = 1L;
            l_459 |= l_458.s6;
            l_463[3] = (((VECTOR(uint32_t, 16))(l_460.s4111350412137636)).s3 , (l_462 = l_461[0]));
            l_466 = l_464;
            l_469++;
        }
        unsigned int result = 0;
        result += l_259;
        atomic_add(&p_578->g_special_values[56 * get_linear_group_id() + 24], result);
    }
    else
    { /* block id: 252 */
        (1 + 1);
    }
    (*p_578->g_254) = ((l_490 = (p_578->g_80 = ((safe_sub_func_int16_t_s_s((p_44 > (safe_lshift_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(8UL, (!(((!(p_578->g_comm_values[p_578->tid] , p_578->g_173)) & (safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s(p_578->g_24, p_44)), (safe_unary_minus_func_uint64_t_u(((VECTOR(uint64_t, 16))(l_486.s7612474265077454)).s9))))) , (p_578->g_82 != ((safe_mul_func_int8_t_s_s(((l_217 &= l_251[2][6]) != ((VECTOR(int16_t, 2))(1L, 0x4338L)).odd), p_44)) || p_578->g_246.z)))))), p_44)), ((VECTOR(int8_t, 2))(0x0EL)), 2L)).hi)).lo)) <= p_578->l_comm_values[(safe_mod_func_uint32_t_u_u(p_578->tid, 45))]), p_45))), 0xCAEAL)) <= l_216.x))) < 0x3630L);
    return p_578->l_comm_values[(safe_mod_func_uint32_t_u_u(p_578->tid, 45))];
}


/* ------------------------------------------ */
/* 
 * reads : p_578->g_33 p_578->g_91 p_578->g_80 p_578->g_176 p_578->g_24 p_578->g_179 p_578->g_31
 * writes: p_578->g_33 p_578->g_82 p_578->g_91 p_578->g_80 p_578->g_160 p_578->g_30
 */
int64_t  func_46(int32_t  p_47, struct S0 * p_578)
{ /* block id: 35 */
    int32_t *l_164 = (void*)0;
    int32_t l_181 = 0x78C49FD6L;
    int32_t l_184 = (-2L);
    int8_t l_185 = 0x0FL;
    int32_t l_186 = 0x3C598269L;
    int32_t l_187 = 0x7D22C248L;
    int32_t l_188 = 9L;
    int32_t l_189[9][7][4] = {{{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)}},{{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)}},{{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)}},{{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)}},{{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)}},{{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)}},{{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)}},{{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)}},{{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)},{1L,1L,0L,(-3L)}}};
    int i, j, k;
    for (p_578->g_33 = 16; (p_578->g_33 == 46); p_578->g_33++)
    { /* block id: 38 */
        VECTOR(int32_t, 8) l_144 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x11D5598AL), 0x11D5598AL), 0x11D5598AL, (-8L), 0x11D5598AL);
        uint32_t l_177[5];
        int32_t *l_178 = (void*)0;
        int32_t *l_182 = (void*)0;
        int32_t *l_183[3];
        uint32_t l_190[7];
        int i;
        for (i = 0; i < 5; i++)
            l_177[i] = 0x0AA95C4CL;
        for (i = 0; i < 3; i++)
            l_183[i] = &p_578->g_91[0];
        for (i = 0; i < 7; i++)
            l_190[i] = 0UL;
        for (p_578->g_82 = 1; (p_578->g_82 > (-11)); p_578->g_82 = safe_sub_func_uint32_t_u_u(p_578->g_82, 8))
        { /* block id: 41 */
            int32_t l_146 = (-10L);
            int32_t *l_147 = &p_578->g_91[0];
            VECTOR(uint64_t, 16) l_161 = (VECTOR(uint64_t, 16))(0x12365208590E4044L, (VECTOR(uint64_t, 4))(0x12365208590E4044L, (VECTOR(uint64_t, 2))(0x12365208590E4044L, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 0x12365208590E4044L, 18446744073709551614UL, (VECTOR(uint64_t, 2))(0x12365208590E4044L, 18446744073709551614UL), (VECTOR(uint64_t, 2))(0x12365208590E4044L, 18446744073709551614UL), 0x12365208590E4044L, 18446744073709551614UL, 0x12365208590E4044L, 18446744073709551614UL);
            int8_t l_167 = 2L;
            uint8_t *l_175 = &p_578->g_176[2];
            int i;
            if ((atomic_inc(&p_578->l_atomic_input[53]) == 9))
            { /* block id: 43 */
                uint16_t l_98[9] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
                uint16_t *l_97 = &l_98[2];
                uint16_t **l_96 = &l_97;
                uint16_t **l_99 = &l_97;
                uint32_t l_142 = 0x423A3813L;
                uint32_t l_143 = 4294967291UL;
                int i;
                l_99 = l_96;
                for (l_98[5] = 0; (l_98[5] == 47); ++l_98[5])
                { /* block id: 47 */
                    uint16_t l_102[1][2][9] = {{{5UL,0x1E93L,0x6F96L,0x1E93L,5UL,5UL,0x1E93L,0x6F96L,0x1E93L},{5UL,0x1E93L,0x6F96L,0x1E93L,5UL,5UL,0x1E93L,0x6F96L,0x1E93L}}};
                    int32_t l_103 = 0x06B6EF14L;
                    int i, j, k;
                    l_103 |= l_102[0][0][0];
                    for (l_102[0][1][5] = 0; (l_102[0][1][5] > 21); l_102[0][1][5] = safe_add_func_uint32_t_u_u(l_102[0][1][5], 6))
                    { /* block id: 51 */
                        int64_t l_106 = 7L;
                        uint8_t l_107 = 0x43L;
                        int8_t l_110 = 0x63L;
                        int32_t l_111 = 0x5DB27898L;
                        VECTOR(uint16_t, 2) l_112 = (VECTOR(uint16_t, 2))(9UL, 0UL);
                        uint64_t l_113[1][3][4] = {{{18446744073709551615UL,0UL,0x5E37C3E796DA1768L,0UL},{18446744073709551615UL,0UL,0x5E37C3E796DA1768L,0UL},{18446744073709551615UL,0UL,0x5E37C3E796DA1768L,0UL}}};
                        int32_t l_114 = 0L;
                        uint64_t l_115 = 1UL;
                        int i, j, k;
                        --l_107;
                        l_114 &= ((l_112.y = (l_111 |= l_110)) , l_113[0][0][1]);
                        l_115--;
                    }
                }
                for (l_98[2] = 0; (l_98[2] <= 24); ++l_98[2])
                { /* block id: 61 */
                    int32_t l_120 = 0x07C22977L;
                    uint32_t l_121 = 8UL;
                    uint64_t l_135 = 1UL;
                    if ((l_121 = l_120))
                    { /* block id: 63 */
                        uint32_t l_122[8] = {4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL,4294967287UL};
                        int i;
                        --l_122[2];
                    }
                    else
                    { /* block id: 65 */
                        uint64_t l_125 = 0xC1A10FB8DA5B5AABL;
                        uint16_t l_128[1];
                        uint16_t l_129[5][10][1] = {{{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL}},{{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL}},{{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL}},{{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL}},{{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL},{0xCBAFL}}};
                        uint32_t l_130 = 4294967287UL;
                        int32_t l_132 = (-1L);
                        int32_t *l_131[5][1][2] = {{{&l_132,&l_132}},{{&l_132,&l_132}},{{&l_132,&l_132}},{{&l_132,&l_132}},{{&l_132,&l_132}}};
                        int32_t *l_133[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int64_t l_134 = 0x7404BFF72C0FF22BL;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_128[i] = 65527UL;
                        --l_125;
                        l_130 = (l_128[0] , l_129[2][1][0]);
                        l_133[1] = l_131[3][0][0];
                        l_134 = (-8L);
                    }
                    l_135 ^= 0x3FDD6498L;
                    for (l_120 = 9; (l_120 > (-4)); l_120 = safe_sub_func_int8_t_s_s(l_120, 1))
                    { /* block id: 74 */
                        uint64_t l_138 = 1UL;
                        uint8_t l_139 = 0x65L;
                        l_138 = 0x1EBF9289L;
                        l_139++;
                    }
                }
                l_143 = l_142;
                unsigned int result = 0;
                int l_98_i0;
                for (l_98_i0 = 0; l_98_i0 < 9; l_98_i0++) {
                    result += l_98[l_98_i0];
                }
                result += l_142;
                result += l_143;
                atomic_add(&p_578->l_special_values[53], result);
            }
            else
            { /* block id: 80 */
                (1 + 1);
            }
            (*l_147) &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_144.s1552224271060776)).lo)))), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(p_578->g_145.yzxwzxwzwywzwzzz)).sb2, ((VECTOR(int32_t, 4))(0x1916B1FFL, 0x26A4DFBEL, 0x0C019427L, 0x2D3B1C7EL)).lo))), l_146, ((VECTOR(int32_t, 2))((-2L), 0x50B17AAFL)), 0x24A7E502L, 4L, 0x3F453DDAL)).sa;
            for (p_578->g_80 = (-5); (p_578->g_80 >= 17); ++p_578->g_80)
            { /* block id: 86 */
                VECTOR(uint16_t, 4) l_150 = (VECTOR(uint16_t, 4))(0x6370L, (VECTOR(uint16_t, 2))(0x6370L, 0xAE13L), 0xAE13L);
                uint8_t *l_159[10][7][3] = {{{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160}},{{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160}},{{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160}},{{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160}},{{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160}},{{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160}},{{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160}},{{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160}},{{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160}},{{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160},{&p_578->g_160,&p_578->g_160,&p_578->g_160}}};
                uint64_t *l_172 = &p_578->g_173;
                int32_t *l_180 = &p_578->g_24;
                int i, j, k;
                if (l_150.x)
                    break;
                (*p_578->g_179) = ((p_578->g_80 & (safe_sub_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s(((p_578->g_160 = 0UL) == (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_161.se715)))).w < ((safe_rshift_func_int16_t_s_s((-1L), 7)) , ((((void*)0 != l_164) > (((((VECTOR(uint64_t, 8))(0x38B956188C7F9DB9L, 0x04C5D88C53941594L, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0x0517B6AFEBA28959L, 0x8BFC28CD2B34E314L)))).yyxy)), ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((safe_mod_func_int32_t_s_s(l_167, ((safe_sub_func_int8_t_s_s((((-1L) ^ ((safe_rshift_func_int16_t_s_s(((p_578->g_24 != ((*l_172) = p_578->g_78)) || FAKE_DIVERGE(p_578->group_0_offset, get_group_id(0), 10)), l_150.x)) || 0x35A2L)) != p_578->g_91[0]), 1L)) | p_47))), p_578->g_174, p_578->g_91[0], 0L, 7L, ((VECTOR(int32_t, 2))((-1L))), 0L)), l_150.x, 0x3AEAE63DL, ((VECTOR(int32_t, 2))(0x330F8949L)), ((VECTOR(int32_t, 2))(0x5C2A9FDAL)), 0x020D8B5BL, 3L)), ((VECTOR(int32_t, 16))((-4L)))))).s99, ((VECTOR(uint32_t, 2))(4294967287UL))))).xyxxxxyyxxyxxxxx, ((VECTOR(uint64_t, 16))(18446744073709551612UL))))).even)).odd))).hi)), 0x71EDEFA84F3720B2L, ((VECTOR(uint64_t, 2))(0x35A46787CD55F75CL)), 18446744073709551614UL)).s4 <= 0xFD8805FBE3FE1AB3L) , l_175) == (void*)0)) & p_578->g_176[2])))), (*l_147))) || p_578->g_24) && GROUP_DIVERGE(0, 1)), 0xA6F5L)), p_578->g_91[0])), l_177[4]))) , l_178);
                l_147 = l_180;
            }
        }
        p_47 = l_181;
        l_190[0]--;
        if ((atomic_inc(&p_578->l_atomic_input[48]) == 8))
        { /* block id: 97 */
            int64_t l_193[9][5][5] = {{{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L}},{{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L}},{{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L}},{{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L}},{{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L}},{{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L}},{{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L}},{{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L}},{{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L},{1L,1L,0x24D15D3D01E5D373L,1L,0x71ECD5911529E7C3L}}};
            uint64_t l_194 = 0x4D8FE965C811C0DFL;
            int8_t l_197 = (-1L);
            VECTOR(uint64_t, 8) l_198 = (VECTOR(uint64_t, 8))(0x1C94D6678A5AF4F0L, (VECTOR(uint64_t, 4))(0x1C94D6678A5AF4F0L, (VECTOR(uint64_t, 2))(0x1C94D6678A5AF4F0L, 18446744073709551607UL), 18446744073709551607UL), 18446744073709551607UL, 0x1C94D6678A5AF4F0L, 18446744073709551607UL);
            uint32_t l_199 = 4UL;
            VECTOR(uint8_t, 8) l_200 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 2UL), 2UL), 2UL, 0UL, 2UL);
            int32_t l_201 = (-1L);
            uint32_t l_202 = 0xA602393EL;
            VECTOR(int32_t, 4) l_203 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1140D0F7L), 0x1140D0F7L);
            uint32_t l_204 = 0x7F93D7C0L;
            int32_t l_205 = 1L;
            int8_t l_206 = 0x57L;
            uint32_t l_207 = 4294967293UL;
            int16_t l_208 = 0x0014L;
            int i, j, k;
            l_194++;
            l_208 = ((l_197 , ((VECTOR(uint64_t, 8))(l_198.s26253465)).s6) , ((VECTOR(int32_t, 16))((-1L), 0x3EA2915EL, 0L, ((l_201 ^= (l_200.s6 = l_199)) , l_202), 0x4DF51DCFL, 9L, 6L, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_203.xx)), (l_204 , (-1L)), 0x5A53A13BL, 0x21D59750L, l_205, (-5L), 8L)).s57)), ((VECTOR(int32_t, 4))(0x2116EFC7L, (-1L), 0x3D4169CBL, 0x5CF4C4EFL)).odd))).hi, 0L, l_206, 0L, l_207, 1L, 0x0D31A1BCL, (-9L), 0x7EC65E06L)).s7);
            unsigned int result = 0;
            int l_193_i0, l_193_i1, l_193_i2;
            for (l_193_i0 = 0; l_193_i0 < 9; l_193_i0++) {
                for (l_193_i1 = 0; l_193_i1 < 5; l_193_i1++) {
                    for (l_193_i2 = 0; l_193_i2 < 5; l_193_i2++) {
                        result += l_193[l_193_i0][l_193_i1][l_193_i2];
                    }
                }
            }
            result += l_194;
            result += l_197;
            result += l_198.s7;
            result += l_198.s6;
            result += l_198.s5;
            result += l_198.s4;
            result += l_198.s3;
            result += l_198.s2;
            result += l_198.s1;
            result += l_198.s0;
            result += l_199;
            result += l_200.s7;
            result += l_200.s6;
            result += l_200.s5;
            result += l_200.s4;
            result += l_200.s3;
            result += l_200.s2;
            result += l_200.s1;
            result += l_200.s0;
            result += l_201;
            result += l_202;
            result += l_203.w;
            result += l_203.z;
            result += l_203.y;
            result += l_203.x;
            result += l_204;
            result += l_205;
            result += l_206;
            result += l_207;
            result += l_208;
            atomic_add(&p_578->l_special_values[48], result);
        }
        else
        { /* block id: 102 */
            (1 + 1);
        }
    }
    return p_578->g_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_578->g_33 p_578->g_24 p_578->g_78 p_578->g_31 p_578->g_82 p_578->l_comm_values p_578->g_80 p_578->g_91
 * writes: p_578->g_30 p_578->g_75 p_578->g_80 p_578->g_82 p_578->g_31 p_578->g_91
 */
uint64_t  func_50(int64_t  p_51, uint32_t  p_52, struct S0 * p_578)
{ /* block id: 12 */
    VECTOR(int32_t, 16) l_53 = (VECTOR(int32_t, 16))(0x28ED3351L, (VECTOR(int32_t, 4))(0x28ED3351L, (VECTOR(int32_t, 2))(0x28ED3351L, 0L), 0L), 0L, 0x28ED3351L, 0L, (VECTOR(int32_t, 2))(0x28ED3351L, 0L), (VECTOR(int32_t, 2))(0x28ED3351L, 0L), 0x28ED3351L, 0L, 0x28ED3351L, 0L);
    VECTOR(uint32_t, 16) l_68 = (VECTOR(uint32_t, 16))(0xDB59FB14L, (VECTOR(uint32_t, 4))(0xDB59FB14L, (VECTOR(uint32_t, 2))(0xDB59FB14L, 0x5697A12BL), 0x5697A12BL), 0x5697A12BL, 0xDB59FB14L, 0x5697A12BL, (VECTOR(uint32_t, 2))(0xDB59FB14L, 0x5697A12BL), (VECTOR(uint32_t, 2))(0xDB59FB14L, 0x5697A12BL), 0xDB59FB14L, 0x5697A12BL, 0xDB59FB14L, 0x5697A12BL);
    int32_t **l_74 = &p_578->g_30;
    uint16_t *l_79 = &p_578->g_80;
    int32_t *l_81 = &p_578->g_82;
    int i;
    l_53.sa = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_53.sab70486d)), ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))((func_54(func_60(((*l_81) ^= (l_53.s6 || (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((p_578->g_33 > l_53.s3), p_578->g_24)), ((((VECTOR(uint32_t, 16))(l_68.s2fe07384c7b934ce)).sb & 0x2260F147L) & ((*l_79) = ((safe_sub_func_int64_t_s_s(1L, ((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(255UL, 0xD6L)).yyyxxyyx)).s4, (safe_unary_minus_func_int16_t_s((((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))((((p_578->g_75 = ((*l_74) = &p_578->g_3)) != &p_578->g_3) ^ (safe_div_func_int32_t_s_s(((p_51 && p_578->g_78) > GROUP_DIVERGE(0, 1)), p_578->g_31))), p_578->g_33, ((VECTOR(uint16_t, 4))(0UL)), 0x7D06L, 65528UL)))).s5637627746266445, ((VECTOR(uint16_t, 16))(65528UL))))).s6019)).wyzzywzy, ((VECTOR(uint16_t, 8))(0x558EL)), ((VECTOR(uint16_t, 8))(65534UL))))).s0 | p_52))))) && p_578->g_78))) >= p_51))))))), l_81, l_74, p_578), l_74, l_53.s1, p_52, p_578->l_comm_values[(safe_mod_func_uint32_t_u_u(p_578->tid, 45))], p_578) <= p_52), ((VECTOR(int32_t, 2))(1L)), 0x7B082E28L)).xxxzzwzy, ((VECTOR(int32_t, 8))((-1L))), ((VECTOR(int32_t, 8))(1L))))))))).sf;
    return p_578->l_comm_values[(safe_mod_func_uint32_t_u_u(p_578->tid, 45))];
}


/* ------------------------------------------ */
/* 
 * reads : p_578->g_80 p_578->g_31 p_578->g_91
 * writes: p_578->g_80 p_578->g_31 p_578->g_30 p_578->g_91
 */
uint8_t  func_54(int16_t  p_55, int32_t ** p_56, uint32_t  p_57, int64_t  p_58, int32_t  p_59, struct S0 * p_578)
{ /* block id: 20 */
    int32_t l_87[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
    int32_t *l_90 = &p_578->g_91[0];
    int i;
    for (p_578->g_80 = 0; (p_578->g_80 < 42); ++p_578->g_80)
    { /* block id: 23 */
        for (p_578->g_31 = 0; (p_578->g_31 >= 18); p_578->g_31++)
        { /* block id: 26 */
            (*p_56) = &p_578->g_24;
            (*p_56) = (l_87[1] , &p_578->g_24);
        }
    }
    (*l_90) = (safe_lshift_func_int16_t_s_s(l_87[5], 7));
    return p_578->g_91[0];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_578->g_30
 */
int16_t  func_60(int32_t  p_61, uint32_t * p_62, int32_t ** p_63, struct S0 * p_578)
{ /* block id: 17 */
    (*p_63) = &p_578->g_24;
    return p_61;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
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
    __local int64_t l_comm_values[45];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 45; i++)
            l_comm_values[i] = 1;
    struct S0 c_579;
    struct S0* p_578 = &c_579;
    struct S0 c_580 = {
        2L, // p_578->g_3
        (-4L), // p_578->g_24
        &p_578->g_24, // p_578->g_30
        (-9L), // p_578->g_31
        4294967295UL, // p_578->g_33
        (void*)0, // p_578->g_75
        0x2339L, // p_578->g_78
        65531UL, // p_578->g_80
        0L, // p_578->g_82
        {1L}, // p_578->g_91
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), // p_578->g_145
        249UL, // p_578->g_160
        18446744073709551615UL, // p_578->g_173
        0x7BL, // p_578->g_174
        {0xC6L,0xC6L,0xC6L,0xC6L}, // p_578->g_176
        &p_578->g_30, // p_578->g_179
        (VECTOR(uint8_t, 16))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 248UL), 248UL), 248UL, 247UL, 248UL, (VECTOR(uint8_t, 2))(247UL, 248UL), (VECTOR(uint8_t, 2))(247UL, 248UL), 247UL, 248UL, 247UL, 248UL), // p_578->g_213
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 255UL), 255UL), 255UL, 1UL, 255UL), // p_578->g_214
        (void*)0, // p_578->g_218
        0x452AD3A7L, // p_578->g_221
        0x35A1L, // p_578->g_243
        (VECTOR(int64_t, 4))((-10L), (VECTOR(int64_t, 2))((-10L), (-3L)), (-3L)), // p_578->g_246
        (VECTOR(int16_t, 8))(0x6A6EL, (VECTOR(int16_t, 4))(0x6A6EL, (VECTOR(int16_t, 2))(0x6A6EL, 0x5927L), 0x5927L), 0x5927L, 0x6A6EL, 0x5927L), // p_578->g_250
        (void*)0, // p_578->g_253
        &p_578->g_91[0], // p_578->g_254
        {0x6423L,0x6423L,0x6423L,0x6423L,0x6423L,0x6423L}, // p_578->g_492
        0UL, // p_578->g_504
        0x7BA8L, // p_578->g_506
        0x0A176A09L, // p_578->g_509
        &p_578->g_509, // p_578->g_508
        &p_578->g_508, // p_578->g_507
        (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 8UL), 8UL), // p_578->g_513
        0x0B246E00L, // p_578->g_558
        (VECTOR(int16_t, 4))(0x7831L, (VECTOR(int16_t, 2))(0x7831L, 0x1E81L), 0x1E81L), // p_578->g_572
        0x4F97L, // p_578->g_574
        0, // p_578->v_collective
        sequence_input[get_global_id(0)], // p_578->global_0_offset
        sequence_input[get_global_id(1)], // p_578->global_1_offset
        sequence_input[get_global_id(2)], // p_578->global_2_offset
        sequence_input[get_local_id(0)], // p_578->local_0_offset
        sequence_input[get_local_id(1)], // p_578->local_1_offset
        sequence_input[get_local_id(2)], // p_578->local_2_offset
        sequence_input[get_group_id(0)], // p_578->group_0_offset
        sequence_input[get_group_id(1)], // p_578->group_1_offset
        sequence_input[get_group_id(2)], // p_578->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 45)), permutations[0][get_linear_local_id()])), // p_578->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_579 = c_580;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_578);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_578->g_3, "p_578->g_3", print_hash_value);
    transparent_crc(p_578->g_24, "p_578->g_24", print_hash_value);
    transparent_crc(p_578->g_31, "p_578->g_31", print_hash_value);
    transparent_crc(p_578->g_33, "p_578->g_33", print_hash_value);
    transparent_crc(p_578->g_78, "p_578->g_78", print_hash_value);
    transparent_crc(p_578->g_80, "p_578->g_80", print_hash_value);
    transparent_crc(p_578->g_82, "p_578->g_82", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_578->g_91[i], "p_578->g_91[i]", print_hash_value);

    }
    transparent_crc(p_578->g_145.x, "p_578->g_145.x", print_hash_value);
    transparent_crc(p_578->g_145.y, "p_578->g_145.y", print_hash_value);
    transparent_crc(p_578->g_145.z, "p_578->g_145.z", print_hash_value);
    transparent_crc(p_578->g_145.w, "p_578->g_145.w", print_hash_value);
    transparent_crc(p_578->g_160, "p_578->g_160", print_hash_value);
    transparent_crc(p_578->g_173, "p_578->g_173", print_hash_value);
    transparent_crc(p_578->g_174, "p_578->g_174", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_578->g_176[i], "p_578->g_176[i]", print_hash_value);

    }
    transparent_crc(p_578->g_213.s0, "p_578->g_213.s0", print_hash_value);
    transparent_crc(p_578->g_213.s1, "p_578->g_213.s1", print_hash_value);
    transparent_crc(p_578->g_213.s2, "p_578->g_213.s2", print_hash_value);
    transparent_crc(p_578->g_213.s3, "p_578->g_213.s3", print_hash_value);
    transparent_crc(p_578->g_213.s4, "p_578->g_213.s4", print_hash_value);
    transparent_crc(p_578->g_213.s5, "p_578->g_213.s5", print_hash_value);
    transparent_crc(p_578->g_213.s6, "p_578->g_213.s6", print_hash_value);
    transparent_crc(p_578->g_213.s7, "p_578->g_213.s7", print_hash_value);
    transparent_crc(p_578->g_213.s8, "p_578->g_213.s8", print_hash_value);
    transparent_crc(p_578->g_213.s9, "p_578->g_213.s9", print_hash_value);
    transparent_crc(p_578->g_213.sa, "p_578->g_213.sa", print_hash_value);
    transparent_crc(p_578->g_213.sb, "p_578->g_213.sb", print_hash_value);
    transparent_crc(p_578->g_213.sc, "p_578->g_213.sc", print_hash_value);
    transparent_crc(p_578->g_213.sd, "p_578->g_213.sd", print_hash_value);
    transparent_crc(p_578->g_213.se, "p_578->g_213.se", print_hash_value);
    transparent_crc(p_578->g_213.sf, "p_578->g_213.sf", print_hash_value);
    transparent_crc(p_578->g_214.s0, "p_578->g_214.s0", print_hash_value);
    transparent_crc(p_578->g_214.s1, "p_578->g_214.s1", print_hash_value);
    transparent_crc(p_578->g_214.s2, "p_578->g_214.s2", print_hash_value);
    transparent_crc(p_578->g_214.s3, "p_578->g_214.s3", print_hash_value);
    transparent_crc(p_578->g_214.s4, "p_578->g_214.s4", print_hash_value);
    transparent_crc(p_578->g_214.s5, "p_578->g_214.s5", print_hash_value);
    transparent_crc(p_578->g_214.s6, "p_578->g_214.s6", print_hash_value);
    transparent_crc(p_578->g_214.s7, "p_578->g_214.s7", print_hash_value);
    transparent_crc(p_578->g_221, "p_578->g_221", print_hash_value);
    transparent_crc(p_578->g_243, "p_578->g_243", print_hash_value);
    transparent_crc(p_578->g_246.x, "p_578->g_246.x", print_hash_value);
    transparent_crc(p_578->g_246.y, "p_578->g_246.y", print_hash_value);
    transparent_crc(p_578->g_246.z, "p_578->g_246.z", print_hash_value);
    transparent_crc(p_578->g_246.w, "p_578->g_246.w", print_hash_value);
    transparent_crc(p_578->g_250.s0, "p_578->g_250.s0", print_hash_value);
    transparent_crc(p_578->g_250.s1, "p_578->g_250.s1", print_hash_value);
    transparent_crc(p_578->g_250.s2, "p_578->g_250.s2", print_hash_value);
    transparent_crc(p_578->g_250.s3, "p_578->g_250.s3", print_hash_value);
    transparent_crc(p_578->g_250.s4, "p_578->g_250.s4", print_hash_value);
    transparent_crc(p_578->g_250.s5, "p_578->g_250.s5", print_hash_value);
    transparent_crc(p_578->g_250.s6, "p_578->g_250.s6", print_hash_value);
    transparent_crc(p_578->g_250.s7, "p_578->g_250.s7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_578->g_492[i], "p_578->g_492[i]", print_hash_value);

    }
    transparent_crc(p_578->g_504, "p_578->g_504", print_hash_value);
    transparent_crc(p_578->g_506, "p_578->g_506", print_hash_value);
    transparent_crc(p_578->g_509, "p_578->g_509", print_hash_value);
    transparent_crc(p_578->g_513.x, "p_578->g_513.x", print_hash_value);
    transparent_crc(p_578->g_513.y, "p_578->g_513.y", print_hash_value);
    transparent_crc(p_578->g_513.z, "p_578->g_513.z", print_hash_value);
    transparent_crc(p_578->g_513.w, "p_578->g_513.w", print_hash_value);
    transparent_crc(p_578->g_558, "p_578->g_558", print_hash_value);
    transparent_crc(p_578->g_572.x, "p_578->g_572.x", print_hash_value);
    transparent_crc(p_578->g_572.y, "p_578->g_572.y", print_hash_value);
    transparent_crc(p_578->g_572.z, "p_578->g_572.z", print_hash_value);
    transparent_crc(p_578->g_572.w, "p_578->g_572.w", print_hash_value);
    transparent_crc(p_578->g_574, "p_578->g_574", print_hash_value);
    transparent_crc(p_578->v_collective, "p_578->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 56; i++)
            transparent_crc(p_578->g_special_values[i + 56 * get_linear_group_id()], "p_578->g_special_values[i + 56 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 56; i++)
            transparent_crc(p_578->l_special_values[i], "p_578->l_special_values[i]", print_hash_value);
    transparent_crc(p_578->l_comm_values[get_linear_local_id()], "p_578->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_578->g_comm_values[get_linear_group_id() * 45 + get_linear_local_id()], "p_578->g_comm_values[get_linear_group_id() * 45 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
