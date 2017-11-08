// --atomics 21 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 95,88,1 -l 5,22,1
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

__constant uint32_t permutations[10][110] = {
{65,14,34,22,108,25,2,99,28,64,79,109,18,8,31,105,95,37,26,41,47,35,15,5,16,48,67,80,74,70,60,72,73,55,40,10,51,93,97,13,32,23,68,88,50,90,56,77,83,61,24,6,94,103,62,92,21,107,76,38,19,33,44,96,71,43,52,102,75,36,54,69,30,42,12,89,63,101,84,78,27,29,11,86,100,59,9,106,1,98,46,7,91,49,57,81,85,87,53,45,17,104,39,66,58,82,3,20,4,0}, // permutation 0
{83,77,80,67,95,7,88,6,66,48,56,23,27,53,49,90,109,8,61,46,108,86,22,16,103,91,0,94,44,72,81,54,64,3,65,73,50,55,71,12,99,68,74,41,43,59,75,52,98,57,35,69,17,45,37,89,14,10,20,19,78,85,102,31,51,15,93,5,100,26,2,87,58,32,40,96,79,36,107,63,28,62,82,47,21,18,30,29,39,105,11,42,25,76,38,60,1,70,84,106,13,4,97,9,104,101,33,92,24,34}, // permutation 1
{84,56,87,103,88,104,78,108,61,106,45,54,83,102,92,29,14,20,12,8,65,38,39,34,10,41,37,27,21,109,81,49,59,67,72,7,52,98,95,90,33,13,96,76,16,70,30,15,3,68,89,57,1,53,97,44,18,4,60,40,35,32,101,105,79,50,62,17,64,42,93,6,58,23,73,28,80,51,19,24,94,71,31,77,9,82,0,22,46,55,63,107,69,43,47,75,48,66,2,85,11,26,36,91,25,5,100,86,99,74}, // permutation 2
{60,98,3,52,6,47,26,66,34,46,38,0,88,56,67,49,13,95,14,23,54,31,30,68,12,29,77,89,69,61,100,65,37,97,73,64,50,7,10,16,48,15,45,72,11,92,93,44,75,84,8,71,42,28,80,9,18,55,59,53,40,17,87,76,107,22,96,4,1,39,25,83,63,86,99,105,58,36,106,51,20,57,90,108,2,85,62,79,27,21,101,81,78,19,109,94,35,5,82,103,102,33,32,43,24,104,70,41,74,91}, // permutation 3
{19,78,101,75,42,31,91,24,109,18,50,64,60,3,21,15,44,103,1,2,88,62,56,55,73,39,10,67,49,63,9,95,14,53,98,11,58,12,105,20,92,26,45,74,36,107,25,96,32,29,69,79,76,70,82,77,99,6,86,54,87,5,100,43,30,28,13,61,66,81,83,90,27,85,104,38,47,106,80,108,22,8,89,52,94,4,72,68,37,97,65,41,23,40,35,46,48,59,34,0,16,7,102,57,93,51,17,84,71,33}, // permutation 4
{91,32,96,82,26,22,17,94,80,102,11,66,9,39,21,1,10,90,64,4,49,58,56,6,109,24,12,40,93,100,14,89,65,78,88,30,37,45,105,33,31,92,73,43,59,16,107,3,36,99,0,95,85,77,86,15,104,74,55,54,101,52,46,97,5,20,81,35,44,84,34,7,13,50,28,68,62,25,69,83,2,63,18,72,76,42,60,75,27,48,61,38,29,70,19,57,51,67,103,23,71,108,106,98,41,87,53,47,8,79}, // permutation 5
{52,84,17,64,13,85,41,25,95,87,72,69,26,86,106,76,22,29,58,49,36,27,102,107,94,31,40,12,62,7,51,105,28,61,70,101,35,92,10,81,83,15,4,2,16,42,30,47,9,55,88,38,67,18,5,57,96,104,6,48,78,66,37,59,60,21,34,99,0,43,54,109,71,79,8,23,39,73,103,11,20,98,82,80,75,50,56,97,24,93,46,53,63,14,45,19,1,89,32,74,108,3,91,65,77,100,44,90,33,68}, // permutation 6
{79,12,75,2,16,29,34,108,83,101,45,42,36,90,56,26,7,66,84,92,78,63,49,14,55,106,9,3,44,28,51,30,81,72,109,73,50,104,0,38,5,13,95,102,94,33,57,54,46,58,71,20,4,21,27,22,35,68,76,96,107,74,11,93,15,43,86,31,23,69,99,25,85,17,52,1,59,100,64,41,67,89,91,62,88,19,10,65,37,98,47,53,24,97,48,77,40,18,39,103,60,61,32,6,8,82,70,87,80,105}, // permutation 7
{94,42,18,6,34,44,22,53,103,5,41,51,72,9,19,59,80,69,49,76,15,45,57,28,89,88,10,7,32,77,26,67,61,90,75,48,78,52,100,33,106,70,101,84,47,91,4,20,17,60,81,29,71,63,58,96,24,12,37,105,56,109,27,64,87,30,85,13,21,93,38,86,16,8,74,39,35,97,79,62,23,43,108,73,3,82,55,50,98,31,83,99,68,54,14,46,66,36,2,11,40,107,0,104,25,102,92,95,1,65}, // permutation 8
{89,28,56,41,40,42,76,58,38,53,84,101,59,36,0,1,62,77,29,4,107,7,94,48,75,43,13,19,44,14,87,92,72,10,46,95,85,31,108,32,65,35,102,69,22,97,103,86,90,34,23,100,47,88,17,61,25,20,37,98,5,2,11,15,60,104,67,55,9,39,73,18,51,105,91,24,82,99,16,12,21,83,3,49,6,64,74,45,54,93,106,70,80,66,57,78,63,50,8,109,27,30,79,68,26,96,81,71,33,52} // permutation 9
};

// Seed: 3844875693

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int64_t g_7;
    int32_t g_9;
    int32_t *g_8;
    VECTOR(int32_t, 16) g_41;
    uint16_t g_64[6];
    int32_t ** volatile g_68;
    int16_t g_78;
    int64_t * volatile g_91;
    int64_t * volatile *g_90;
    uint64_t g_95;
    uint32_t g_100;
    uint8_t g_103;
    int8_t g_115;
    VECTOR(uint64_t, 8) g_119;
    int8_t g_129;
    int8_t *g_128;
    uint16_t g_131[4][1];
    volatile VECTOR(int16_t, 2) g_205;
    VECTOR(int16_t, 8) g_206;
    uint32_t g_226;
    uint8_t g_239;
    uint8_t *g_238[2][10][7];
    int32_t ** volatile g_243[2][5][4];
    int32_t ** volatile g_244;
    volatile VECTOR(uint16_t, 4) g_265;
    VECTOR(uint16_t, 2) g_266;
    VECTOR(int8_t, 16) g_276;
    int32_t * volatile g_288;
    volatile VECTOR(uint16_t, 4) g_342;
    volatile VECTOR(uint32_t, 2) g_344;
    VECTOR(int8_t, 4) g_360;
    VECTOR(int8_t, 4) g_361;
    uint64_t g_368;
    int16_t *g_390;
    int16_t **g_389;
    VECTOR(int8_t, 2) g_398;
    VECTOR(int8_t, 8) g_400;
    uint8_t g_430;
    volatile VECTOR(int32_t, 2) g_437;
    volatile VECTOR(uint32_t, 16) g_453;
    volatile VECTOR(uint64_t, 2) g_497;
    int64_t *g_500[5];
    VECTOR(uint32_t, 16) g_510;
    VECTOR(uint32_t, 8) g_511;
    uint64_t g_518;
    int32_t * volatile g_541[3][1][2];
    int32_t * volatile g_542;
    volatile int8_t g_626;
    VECTOR(int8_t, 2) g_636;
    VECTOR(uint8_t, 8) g_638;
    uint32_t g_643[2][8][2];
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
uint16_t  func_1(struct S0 * p_648);
int32_t * func_2(int64_t  p_3, uint64_t  p_4, int32_t * p_5, struct S0 * p_648);
int32_t  func_17(int32_t * p_18, struct S0 * p_648);
int32_t  func_19(int32_t * p_20, struct S0 * p_648);
int32_t * func_21(uint32_t  p_22, uint64_t  p_23, int32_t * p_24, struct S0 * p_648);
int32_t  func_26(uint32_t  p_27, int16_t  p_28, uint32_t  p_29, struct S0 * p_648);
uint32_t  func_30(int8_t  p_31, struct S0 * p_648);
int32_t  func_32(int64_t  p_33, int32_t * p_34, int32_t  p_35, uint64_t  p_36, struct S0 * p_648);
int32_t * func_37(int64_t  p_38, int64_t  p_39, int8_t  p_40, struct S0 * p_648);
int16_t  func_42(uint64_t  p_43, int64_t * p_44, int32_t  p_45, int32_t  p_46, struct S0 * p_648);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_648->l_comm_values p_648->g_8 p_648->g_288 p_648->g_68 p_648->g_361
 * writes: p_648->g_7 p_648->g_9 p_648->g_8
 */
uint16_t  func_1(struct S0 * p_648)
{ /* block id: 4 */
    int64_t *l_6 = &p_648->g_7;
    (*p_648->g_68) = func_2(((*l_6) = 0L), p_648->l_comm_values[(safe_mod_func_uint32_t_u_u(p_648->tid, 110))], p_648->g_8, p_648);
    return p_648->g_361.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_288
 * writes: p_648->g_9
 */
int32_t * func_2(int64_t  p_3, uint64_t  p_4, int32_t * p_5, struct S0 * p_648)
{ /* block id: 6 */
    VECTOR(int8_t, 2) l_637 = (VECTOR(int8_t, 2))(0x56L, (-1L));
    VECTOR(uint8_t, 2) l_639 = (VECTOR(uint8_t, 2))(252UL, 0x21L);
    int32_t *l_647 = (void*)0;
    int i;
    for (p_3 = 0; (p_3 < 27); p_3 = safe_add_func_int16_t_s_s(p_3, 9))
    { /* block id: 9 */
        int32_t l_12[9];
        uint32_t *l_642[6] = {(void*)0,&p_648->g_643[1][0][0],(void*)0,(void*)0,&p_648->g_643[1][0][0],(void*)0};
        int64_t *l_644 = (void*)0;
        int64_t *l_645[2][9][1] = {{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}},{{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}}};
        int32_t l_646 = (-9L);
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_12[i] = 5L;
        (*p_648->g_288) = ((l_646 = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(0x6EFB6F65E790E864L, (-8L))), l_12[8], ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(rotate(((VECTOR(int64_t, 2))(5L, 0x51AF7F3E76E5B14FL)).xxyyyyyy, ((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))((safe_lshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(func_17(&p_648->g_9, p_648), ((((safe_mod_func_uint64_t_u_u(((safe_unary_minus_func_int16_t_s(((safe_sub_func_int64_t_s_s((p_3 & p_648->g_361.z), ((p_3 , ((VECTOR(int32_t, 8))(3L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 2))(p_648->g_636.yx)).xxyxyxxx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_637.yxyx)))).yzxywwwx))))).s2762067524773253))).hi, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(uint8_t, 16))(p_648->g_638.s5006355752313237)).sa1, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_639.xxyy)).ywxxyxzwwzywwyyy)).sd5))).xyxxxyxxxyxxxxyx)).odd, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0xC1L, 0x70L)).xyxxxyyx))))).s15)).xyyyyyxy))).s6, (p_4 ^ ((VECTOR(uint64_t, 8))((p_648->g_119.s2 != (p_648->g_643[1][0][0] |= (((safe_lshift_func_uint16_t_u_u(p_3, l_639.y)) >= 1UL) && (-4L)))), 18446744073709551615UL, 18446744073709551615UL, ((VECTOR(uint64_t, 4))(0x363DD6377E7278FCL)), 18446744073709551607UL)).s3), ((VECTOR(int16_t, 4))(0L)), ((VECTOR(int16_t, 8))(0x7851L)), 0x1FF3L, 0x7566L)).sca, ((VECTOR(uint16_t, 2))(0x2C8FL))))), 0x6003D36BL, 1L)), l_637.x, 0x212898C0L, 0L)).s5) <= p_648->g_7))) == 0xA442L))) <= p_648->g_400.s6), 0x434A31B42DF0254FL)) <= p_648->g_276.s8) ^ 0x30L) != 1UL))) , l_637.y), p_4)), ((VECTOR(int64_t, 2))(0L)), 0x3AFE366C727DA4ACL)), 7L, 0x7303531A188971BBL, (-9L), ((VECTOR(int64_t, 2))(0x0E6D9C0D35A0B79FL)), 7L, 0x45604226B7951635L, ((VECTOR(int64_t, 2))((-3L))), p_3, 0x0D0D305902CC4023L, 0x7DEFD7706514BEE8L)).even)).s50))).xyyxyxxy))))), ((VECTOR(int64_t, 2))(0x2D9D14A5B4F91F06L)), l_637.x, (-7L), 0L)).sc) & l_639.y);
    }
    return l_647;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_7 p_648->g_41 p_648->g_64 p_648->g_8 p_648->l_comm_values p_648->g_68 p_648->g_90 p_648->g_100 p_648->g_103 p_648->g_95 p_648->g_9 p_648->g_131 p_648->g_comm_values p_648->g_115 p_648->g_205 p_648->g_206 p_648->g_129 p_648->g_78 p_648->g_226 p_648->g_265 p_648->g_266 p_648->g_276 p_648->g_119 p_648->g_288 p_648->g_239 p_648->g_342 p_648->g_344 p_648->g_360 p_648->g_361 p_648->g_368 p_648->g_398 p_648->g_400 p_648->g_390 p_648->g_430 p_648->g_497 p_648->g_500 p_648->g_510 p_648->g_511
 * writes: p_648->g_64 p_648->g_9 p_648->g_8 p_648->g_78 p_648->g_95 p_648->g_103 p_648->g_41 p_648->g_115 p_648->g_128 p_648->g_131 p_648->g_comm_values p_648->g_226 p_648->g_238 p_648->g_368 p_648->g_266 p_648->g_389 p_648->g_430 p_648->g_129 p_648->g_518 p_648->g_500
 */
int32_t  func_17(int32_t * p_18, struct S0 * p_648)
{ /* block id: 10 */
    uint16_t l_25 = 0x8451L;
    int8_t *l_295 = (void*)0;
    uint32_t l_296 = 0x6F9D15D6L;
    int32_t *l_324 = (void*)0;
    int32_t **l_325 = &l_324;
    VECTOR(int32_t, 16) l_438 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int32_t, 2))(0L, 1L), (VECTOR(int32_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
    VECTOR(int32_t, 16) l_440 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 1L), 1L), 1L, (-4L), 1L, (VECTOR(int32_t, 2))((-4L), 1L), (VECTOR(int32_t, 2))((-4L), 1L), (-4L), 1L, (-4L), 1L);
    int16_t *l_441 = (void*)0;
    int32_t l_460 = 1L;
    VECTOR(uint8_t, 2) l_478 = (VECTOR(uint8_t, 2))(0xD5L, 0x60L);
    int16_t ***l_488 = &p_648->g_389;
    uint32_t l_527 = 4294967287UL;
    VECTOR(uint16_t, 2) l_528 = (VECTOR(uint16_t, 2))(0x5B2CL, 0UL);
    int8_t l_530 = 3L;
    VECTOR(uint8_t, 16) l_558 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x7DL), 0x7DL), 0x7DL, 255UL, 0x7DL, (VECTOR(uint8_t, 2))(255UL, 0x7DL), (VECTOR(uint8_t, 2))(255UL, 0x7DL), 255UL, 0x7DL, 255UL, 0x7DL);
    VECTOR(uint64_t, 2) l_560 = (VECTOR(uint64_t, 2))(9UL, 0xDFED9DFB67937694L);
    int32_t l_565 = 6L;
    int32_t l_566 = 0x1BC2426CL;
    int64_t *l_571 = (void*)0;
    uint64_t l_621 = 0xE29B9B5ED980C153L;
    int64_t l_624[7][2] = {{0x6ABD27308A62098CL,(-2L)},{0x6ABD27308A62098CL,(-2L)},{0x6ABD27308A62098CL,(-2L)},{0x6ABD27308A62098CL,(-2L)},{0x6ABD27308A62098CL,(-2L)},{0x6ABD27308A62098CL,(-2L)},{0x6ABD27308A62098CL,(-2L)}};
    int32_t l_625 = 0x35DD1D10L;
    uint16_t l_627 = 1UL;
    int i, j;
    if (func_19(func_21(l_25, p_648->g_7, ((*l_325) = (func_26(l_25, (func_30(l_25, p_648) >= (safe_add_func_int64_t_s_s((((p_648->g_266.x < (safe_div_func_int8_t_s_s((0x0228L ^ ((p_648->g_239 , l_295) == l_295)), l_25))) <= p_648->g_239) , l_296), 0xC09DDFBE49D123BFL))), l_296, p_648) , l_324)), p_648), p_648))
    { /* block id: 138 */
        uint32_t l_447 = 9UL;
        int32_t l_473[10][8][3] = {{{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L}},{{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L}},{{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L}},{{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L}},{{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L}},{{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L}},{{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L}},{{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L}},{{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L}},{{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L},{0x0E526B1BL,(-7L),1L}}};
        int64_t *l_485[4][7][3] = {{{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7}},{{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7}},{{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7}},{{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7}}};
        int64_t **l_484[10][5] = {{&l_485[3][3][1],&l_485[0][6][2],(void*)0,(void*)0,&l_485[0][2][1]},{&l_485[3][3][1],&l_485[0][6][2],(void*)0,(void*)0,&l_485[0][2][1]},{&l_485[3][3][1],&l_485[0][6][2],(void*)0,(void*)0,&l_485[0][2][1]},{&l_485[3][3][1],&l_485[0][6][2],(void*)0,(void*)0,&l_485[0][2][1]},{&l_485[3][3][1],&l_485[0][6][2],(void*)0,(void*)0,&l_485[0][2][1]},{&l_485[3][3][1],&l_485[0][6][2],(void*)0,(void*)0,&l_485[0][2][1]},{&l_485[3][3][1],&l_485[0][6][2],(void*)0,(void*)0,&l_485[0][2][1]},{&l_485[3][3][1],&l_485[0][6][2],(void*)0,(void*)0,&l_485[0][2][1]},{&l_485[3][3][1],&l_485[0][6][2],(void*)0,(void*)0,&l_485[0][2][1]},{&l_485[3][3][1],&l_485[0][6][2],(void*)0,(void*)0,&l_485[0][2][1]}};
        uint16_t *l_490 = (void*)0;
        int32_t l_492 = 0L;
        VECTOR(int32_t, 2) l_529 = (VECTOR(int32_t, 2))(0x17E0BCB3L, (-7L));
        int32_t l_538 = 0x43815E8FL;
        VECTOR(uint16_t, 2) l_549 = (VECTOR(uint16_t, 2))(7UL, 6UL);
        VECTOR(uint64_t, 2) l_559 = (VECTOR(uint64_t, 2))(9UL, 0xF993205E8783839DL);
        int32_t l_576 = 0x66A64CBAL;
        int32_t l_620 = 0x2735EBA5L;
        int i, j, k;
        for (p_648->g_129 = 12; (p_648->g_129 <= (-1)); --p_648->g_129)
        { /* block id: 141 */
            VECTOR(int32_t, 8) l_439 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x682F50FBL), 0x682F50FBL), 0x682F50FBL, (-1L), 0x682F50FBL);
            int16_t *l_442 = &p_648->g_78;
            int32_t *l_474[4][6][9] = {{{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9}},{{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9}},{{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9}},{{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9},{&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9}}};
            uint8_t l_481 = 252UL;
            int64_t *l_483 = &p_648->g_7;
            int64_t **l_482 = &l_483;
            int16_t ***l_489 = &p_648->g_389;
            int64_t *l_537[8][9][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
            int i, j, k;
            for (p_648->g_115 = 0; (p_648->g_115 != 16); ++p_648->g_115)
            { /* block id: 144 */
                int16_t **l_443 = &l_442;
                VECTOR(uint16_t, 2) l_446 = (VECTOR(uint16_t, 2))(0x4362L, 7UL);
                uint32_t *l_448 = &l_296;
                int32_t *l_456 = (void*)0;
                int32_t *l_457 = (void*)0;
                int32_t *l_458 = (void*)0;
                int32_t *l_459[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_459[i] = (void*)0;
                if ((*p_18))
                    break;
                l_460 |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_648->g_437.yyyxxyyyxyyxxyxx)).s9, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_438.s1e36)), ((VECTOR(int32_t, 2))(l_439.s76)), (*p_18), ((VECTOR(int32_t, 8))((-8L), ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 8))(l_440.se6491b2b)).hi, (int32_t)((*p_18) |= ((((l_441 == ((*l_443) = l_442)) ^ (safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(l_446.xxyxxxxyyyxxxxxx)).s5, 65535UL))) && ((0x3C7911F99312B9A0L | l_439.s5) >= l_447)) | ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(0x4B567034L, 0x08F3C693L, (++(*l_448)), 0xBE343133L, (safe_rshift_func_uint8_t_u_u(1UL, 6)), ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 2))(p_648->g_453.s7f)), ((VECTOR(uint32_t, 16))(0xB41B9ABBL, 0xD1ACB86FL, (safe_sub_func_int64_t_s_s(((((*p_648->g_390) >= l_447) > p_648->g_453.s8) , p_648->g_360.y), 0x4E658EB01B168D27L)), ((VECTOR(uint32_t, 4))(0xA0E1AE52L)), p_648->g_344.x, ((VECTOR(uint32_t, 4))(1UL)), l_439.s6, ((VECTOR(uint32_t, 2))(4294967295UL)), 1UL)).s01))), ((VECTOR(uint32_t, 2))(7UL))))), 0x013F9644L, 0x4B6B2F61L, 0UL, 4294967287UL, 0xC302EDCCL, 4294967288UL)).lo)).odd, ((VECTOR(uint32_t, 2))(1UL))))).yxxyxxyyxyxxxxyy, ((VECTOR(uint32_t, 16))(0xF809B3BBL))))).sbb, ((VECTOR(uint32_t, 2))(0xB33ED253L))))), l_446.y, l_447, 0xCFD14D23L, l_446.x, 4294967295UL, ((VECTOR(uint32_t, 4))(1UL)))).even)))).s2)), (int32_t)(*p_18)))), 0L, 5L, 5L)), 0x1C399905L)), ((VECTOR(int32_t, 16))(9L))))).s65, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))((-1L)))))).xyxyyxxyyxyyxyyx)).hi, (int32_t)(*p_18)))).s6227741655360674, ((VECTOR(int32_t, 16))(0x006660C0L)))))))).sfa, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(1L))))), ((VECTOR(int32_t, 2))(0x1B56E0FAL)), 0x7EAD08D2L, 0x116F4274L, 1L)).s2;
                for (p_648->g_430 = 0; (p_648->g_430 < 37); p_648->g_430++)
                { /* block id: 152 */
                    uint16_t l_463 = 0xE916L;
                    int64_t *l_470 = &p_648->g_7;
                    l_463 = 0x38B84D28L;
                    (*p_18) = (!(((safe_lshift_func_int8_t_s_s(l_463, 6)) != ((safe_div_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((((void*)0 == l_470) , (l_439.s3 == (p_648->g_103 >= l_463))), (safe_sub_func_uint16_t_u_u(((((VECTOR(int8_t, 8))((&p_648->g_103 == (void*)0), (-4L), ((VECTOR(int8_t, 2))(0x22L)), l_463, 0x30L, 0L, 1L)).s1 && l_473[9][1][1]) < l_473[9][1][1]), 0x14CCL)))) & l_463), (*p_18))) >= p_648->g_95)) , (*p_18)));
                }
                l_474[0][3][3] = p_18;
            }
            (*l_325) = p_18;
            if (l_473[9][7][0])
            { /* block id: 159 */
                VECTOR(uint8_t, 4) l_477 = (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 0xBBL), 0xBBL);
                uint32_t *l_491 = &p_648->g_226;
                int i;
                l_492 = ((safe_rshift_func_uint16_t_u_u(p_648->g_7, 3)) , ((((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x49L, 0x6BL)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(l_477.zywyyzxz)).s55, ((VECTOR(uint8_t, 2))(l_478.yy))))), 4UL, 0x38L)).z, (safe_add_func_int64_t_s_s((l_481 <= 0x71L), p_648->g_78)), ((VECTOR(uint8_t, 4))(((((l_484[9][0] = l_482) == &p_648->g_91) ^ ((safe_div_func_int16_t_s_s((((*p_18) = (*p_18)) || ((*l_491) = (((((((l_488 != l_489) , 0x7F33D3B688054BA0L) ^ p_648->g_360.z) >= p_648->g_266.x) , &p_648->g_131[3][0]) != l_490) >= 0UL))), l_447)) || l_473[0][3][1])) & l_473[9][1][1]), 0xBEL, 0UL, 247UL)))).s5 != FAKE_DIVERGE(p_648->group_2_offset, get_group_id(2), 10)) & l_477.z));
                return l_477.y;
            }
            else
            { /* block id: 165 */
                uint64_t l_503[10][2] = {{0x677C8B07D741437AL,1UL},{0x677C8B07D741437AL,1UL},{0x677C8B07D741437AL,1UL},{0x677C8B07D741437AL,1UL},{0x677C8B07D741437AL,1UL},{0x677C8B07D741437AL,1UL},{0x677C8B07D741437AL,1UL},{0x677C8B07D741437AL,1UL},{0x677C8B07D741437AL,1UL},{0x677C8B07D741437AL,1UL}};
                VECTOR(uint32_t, 16) l_512 = (VECTOR(uint32_t, 16))(0x502364BDL, (VECTOR(uint32_t, 4))(0x502364BDL, (VECTOR(uint32_t, 2))(0x502364BDL, 4294967295UL), 4294967295UL), 4294967295UL, 0x502364BDL, 4294967295UL, (VECTOR(uint32_t, 2))(0x502364BDL, 4294967295UL), (VECTOR(uint32_t, 2))(0x502364BDL, 4294967295UL), 0x502364BDL, 4294967295UL, 0x502364BDL, 4294967295UL);
                int16_t *l_515[3];
                int32_t *l_516 = (void*)0;
                int32_t *l_517 = &l_473[5][7][0];
                uint16_t *l_519 = (void*)0;
                uint16_t *l_520[6];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_515[i] = (void*)0;
                for (i = 0; i < 6; i++)
                    l_520[i] = &l_25;
                (*l_324) = (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(((((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(p_648->g_497.xx)).xxyyxxyx)).s60)).yxxx, (uint64_t)(**l_325)))).w == (safe_div_func_int8_t_s_s((((void*)0 != p_648->g_500[1]) > (safe_rshift_func_uint16_t_u_s((((l_503[8][1] || (p_648->g_131[1][0] = ((p_648->g_129 == (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((+((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(min(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 8))((l_473[5][2][2] < (safe_add_func_uint64_t_u_u(0xD88BD7C0B786FE8FL, l_473[9][1][1]))), ((VECTOR(uint32_t, 2))(p_648->g_510.s2f)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 2))(1UL, 0x31171470L)).yxyy, ((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(p_648->g_511.s6521)).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_512.s6516)).y, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))((p_648->g_518 = ((safe_rshift_func_int8_t_s_u((((*l_517) = (((l_492 = ((l_515[0] == l_490) , 0x6B59C50CL)) ^ p_648->g_119.s6) , l_503[8][1])) , 0L), 1)) <= p_648->g_131[1][0])), ((VECTOR(uint32_t, 4))(0x4519E2EEL)), 4294967287UL, 0UL, 0UL)).s31)), ((VECTOR(uint32_t, 8))(4294967295UL)), ((VECTOR(uint32_t, 4))(4UL)), 0xFCA679B8L)).s7b))).yyyy, ((VECTOR(uint32_t, 4))(0x0B8D1C64L))))))), 0x2A08B5E7L)).s6734370105512232, ((VECTOR(uint32_t, 16))(0x25ED7C54L)), ((VECTOR(uint32_t, 16))(0x10916CA9L))))).se8))).yxyyxxxx)).s35, ((VECTOR(uint32_t, 2))(1UL))))), ((VECTOR(uint32_t, 4))(0x88D9B036L)), 0UL, 1UL)).s26)).odd) , 0L), 14)), 3))) , 65535UL))) , (void*)0) != (void*)0), 12))), l_503[8][1]))) && 0x583FC6F8L), 7L)), 2));
                (*p_18) ^= 0x7B8534C3L;
            }
            l_460 &= (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(1L, (safe_add_func_int64_t_s_s(((safe_div_func_uint8_t_u_u((((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 2))(65535UL, 0UL)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0xF1CEL, 0xFFE7L)), ((VECTOR(uint16_t, 2))(6UL, 2UL)), l_527, ((VECTOR(uint16_t, 2))(0UL, 65531UL)), 0x4C33L)).s55, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(65535UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_528.yy)), 0x324EL, 8UL)), ((VECTOR(uint16_t, 2))(0UL, 4UL)), 65535UL)).hi)).even))).lo < ((((((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 2))(l_529.yx)).xxyyxyyxyxyyxyxy, (int32_t)((l_530 >= (-5L)) != (safe_rshift_func_uint8_t_u_u(l_473[3][6][1], 4))), (int32_t)0x68F0FC13L))).s7 & (*p_18)) , l_529.x) , (l_492 = (safe_div_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))((l_492 ^ (p_648->g_360.x == GROUP_DIVERGE(2, 1))), (**l_325), 18446744073709551615UL, FAKE_DIVERGE(p_648->group_1_offset, get_group_id(1), 10), (**l_325), p_648->g_78, p_648->g_129, 0UL, ((VECTOR(uint64_t, 2))(9UL)), 18446744073709551615UL, ((VECTOR(uint64_t, 4))(0x77B8FCD80873298AL)), 0xBC2A0AC6CA91A775L)).sc6d0)).odd)).lo , (**l_325)), l_447)) || p_648->g_115), p_648->g_430)))) | l_447)), l_538)) , (*l_324)), l_447)), ((VECTOR(int32_t, 2))(0x38DB6711L)), ((VECTOR(int32_t, 4))(9L)))).s1212500423665037)).s5, p_648->g_276.s6));
        }
        for (l_538 = 0; (l_538 == (-13)); --l_538)
        { /* block id: 178 */
            int32_t *l_543 = &l_492;
            (*l_543) &= (*p_18);
        }
        if ((atomic_inc(&p_648->l_atomic_input[10]) == 5))
        { /* block id: 182 */
            int16_t l_544 = (-1L);
            int64_t l_545 = (-5L);
            uint64_t l_546 = 0xA941CB444F983A8FL;
            l_544 |= 0x2EBEB388L;
            l_546 = l_545;
            unsigned int result = 0;
            result += l_544;
            result += l_545;
            result += l_546;
            atomic_add(&p_648->l_special_values[10], result);
        }
        else
        { /* block id: 185 */
            (1 + 1);
        }
        if ((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_549.yy)), 0xA9A7L, (safe_mul_func_int8_t_s_s(((((((&p_648->g_226 == (void*)0) == l_549.x) | (safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_648->group_0_offset, get_group_id(0), 10), 13))) != ((VECTOR(uint64_t, 16))(0x89219C14A9226173L, ((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(0x968C6B2DD73664B4L, (safe_div_func_int8_t_s_s((FAKE_DIVERGE(p_648->group_0_offset, get_group_id(0), 10) >= l_473[9][1][1]), (safe_add_func_uint16_t_u_u(l_558.s9, ((*p_648->g_390) = (*p_648->g_390)))))), 0UL, 0x9BBDEA25EDF3458FL)).wwyzzzxz)), ((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_559.yxyyxxxx)).s60)).yyyyyyxxxxyyxxyy, (uint64_t)p_648->g_360.w))).lo))), ((VECTOR(uint64_t, 2))(l_560.yx)), ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 16))((((0x258DC786C0215223L || (safe_rshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(((&l_492 == (*l_325)) != (*p_18)), 1)) < l_478.y) || p_648->g_368), 2))) , l_565) , l_529.x), ((VECTOR(uint32_t, 2))(0x3C9DC829L)), 0x43189286L, 0x294665F2L, ((VECTOR(uint32_t, 8))(0x2A61244BL)), ((VECTOR(uint32_t, 2))(0xCE72F0D6L)), 4294967292UL)), ((VECTOR(uint32_t, 16))(0xC6736B84L))))).s37)), GROUP_DIVERGE(0, 1), 18446744073709551606UL, 0x1B785226B452060DL)).s2) > l_566) && l_473[9][1][1]), l_473[9][4][1])), 0xB09FL, 0x2A2CL, 0x4935L, l_447, 65533UL, 0x5B3EL, ((VECTOR(uint16_t, 4))(0xB70CL)), 1UL, 65535UL)).s5a)).even, l_559.y)))
        { /* block id: 189 */
            int64_t **l_572 = &p_648->g_500[1];
            uint64_t *l_575 = &p_648->g_518;
            (*p_18) &= (safe_mul_func_int16_t_s_s(((*p_648->g_390) &= (safe_mul_func_uint8_t_u_u((!0x7CL), l_529.y))), ((l_492 & ((0x524C8D89D8D9F817L & (((*l_572) = l_571) == l_485[0][2][0])) < p_648->g_41.sf)) != ((((l_576 = ((safe_sub_func_uint64_t_u_u((l_575 == &p_648->g_95), p_648->g_206.s3)) | p_648->g_398.x)) , l_538) == FAKE_DIVERGE(p_648->local_0_offset, get_local_id(0), 10)) , l_492))));
        }
        else
        { /* block id: 194 */
            int32_t *l_611 = (void*)0;
            int32_t l_612 = 0L;
            int32_t *l_613 = &l_565;
            int32_t *l_614 = (void*)0;
            int32_t *l_615 = &l_576;
            int32_t *l_616 = (void*)0;
            int32_t *l_617 = (void*)0;
            int32_t *l_618 = &l_576;
            int32_t *l_619[4][2];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 2; j++)
                    l_619[i][j] = &l_576;
            }
            if ((atomic_inc(&p_648->g_atomic_input[21 * get_linear_group_id() + 17]) == 2))
            { /* block id: 196 */
                int32_t l_577 = 0L;
                VECTOR(int32_t, 8) l_609 = (VECTOR(int32_t, 8))(0x45C433ABL, (VECTOR(int32_t, 4))(0x45C433ABL, (VECTOR(int32_t, 2))(0x45C433ABL, 0x5185C93EL), 0x5185C93EL), 0x5185C93EL, 0x45C433ABL, 0x5185C93EL);
                uint64_t l_610 = 0xCB48443B2608B29FL;
                int i;
                for (l_577 = (-8); (l_577 < 5); l_577 = safe_add_func_uint16_t_u_u(l_577, 6))
                { /* block id: 199 */
                    uint32_t l_580 = 4294967295UL;
                    uint8_t l_605 = 0x0EL;
                    uint32_t l_606 = 3UL;
                    uint64_t l_607 = 0UL;
                    int32_t l_608 = 0x05EB8D59L;
                    if (l_580)
                    { /* block id: 200 */
                        int64_t l_581[6][10][1] = {{{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L}},{{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L}},{{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L}},{{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L}},{{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L}},{{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L},{0x6BB734A2EC2C3860L}}};
                        uint8_t l_582 = 0x59L;
                        VECTOR(int64_t, 4) l_583 = (VECTOR(int64_t, 4))(0x30D400EC35639548L, (VECTOR(int64_t, 2))(0x30D400EC35639548L, 1L), 1L);
                        int32_t l_584 = 0x3664C4E1L;
                        uint64_t l_585 = 1UL;
                        int64_t l_588 = 0x69B69080686BE184L;
                        uint8_t l_589 = 0x3EL;
                        int32_t l_590 = 1L;
                        VECTOR(int32_t, 16) l_591 = (VECTOR(int32_t, 16))((-7L), (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), 0x5B1293A3L), 0x5B1293A3L), 0x5B1293A3L, (-7L), 0x5B1293A3L, (VECTOR(int32_t, 2))((-7L), 0x5B1293A3L), (VECTOR(int32_t, 2))((-7L), 0x5B1293A3L), (-7L), 0x5B1293A3L, (-7L), 0x5B1293A3L);
                        uint16_t l_592[9][1][7] = {{{0x60A2L,0xFCDEL,0xFCDEL,0x60A2L,0x60A2L,0xFCDEL,0xFCDEL}},{{0x60A2L,0xFCDEL,0xFCDEL,0x60A2L,0x60A2L,0xFCDEL,0xFCDEL}},{{0x60A2L,0xFCDEL,0xFCDEL,0x60A2L,0x60A2L,0xFCDEL,0xFCDEL}},{{0x60A2L,0xFCDEL,0xFCDEL,0x60A2L,0x60A2L,0xFCDEL,0xFCDEL}},{{0x60A2L,0xFCDEL,0xFCDEL,0x60A2L,0x60A2L,0xFCDEL,0xFCDEL}},{{0x60A2L,0xFCDEL,0xFCDEL,0x60A2L,0x60A2L,0xFCDEL,0xFCDEL}},{{0x60A2L,0xFCDEL,0xFCDEL,0x60A2L,0x60A2L,0xFCDEL,0xFCDEL}},{{0x60A2L,0xFCDEL,0xFCDEL,0x60A2L,0x60A2L,0xFCDEL,0xFCDEL}},{{0x60A2L,0xFCDEL,0xFCDEL,0x60A2L,0x60A2L,0xFCDEL,0xFCDEL}}};
                        int i, j, k;
                        l_582 = (l_581[2][4][0] |= (-1L));
                        l_585--;
                        l_589 = l_588;
                        --l_592[8][0][6];
                    }
                    else
                    { /* block id: 206 */
                        VECTOR(int32_t, 2) l_595 = (VECTOR(int32_t, 2))(6L, 0x1F6D03A8L);
                        uint32_t l_596 = 4294967292UL;
                        int8_t l_597 = 8L;
                        uint64_t l_598 = 18446744073709551615UL;
                        int16_t l_599 = 0x7232L;
                        VECTOR(int32_t, 2) l_600 = (VECTOR(int32_t, 2))(0x6000A83CL, 0x014969BEL);
                        int16_t l_601 = 0x2B82L;
                        uint64_t l_602 = 6UL;
                        int i;
                        l_596 = ((VECTOR(int32_t, 4))(l_595.xyyy)).z;
                        l_598 &= l_597;
                        --l_602;
                    }
                    l_606 = l_605;
                    l_608 = l_607;
                }
                l_610 ^= ((VECTOR(int32_t, 4))(l_609.s1026)).x;
                unsigned int result = 0;
                result += l_577;
                result += l_609.s7;
                result += l_609.s6;
                result += l_609.s5;
                result += l_609.s4;
                result += l_609.s3;
                result += l_609.s2;
                result += l_609.s1;
                result += l_609.s0;
                result += l_610;
                atomic_add(&p_648->g_special_values[21 * get_linear_group_id() + 17], result);
            }
            else
            { /* block id: 215 */
                (1 + 1);
            }
            l_621--;
            --l_627;
        }
    }
    else
    { /* block id: 221 */
        int16_t l_630[5] = {0x2B85L,0x2B85L,0x2B85L,0x2B85L,0x2B85L};
        int i;
        return l_630[3];
    }
    return l_566;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_430 p_648->g_288 p_648->g_9
 * writes: p_648->g_430 p_648->g_9
 */
int32_t  func_19(int32_t * p_20, struct S0 * p_648)
{ /* block id: 134 */
    int32_t *l_427[1][9];
    int32_t l_428 = 0x2BE5FAF8L;
    int16_t l_429 = 0x5F1CL;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
            l_427[i][j] = (void*)0;
    }
    --p_648->g_430;
    (*p_648->g_288) = ((VECTOR(int32_t, 2))(2L, 0x46E65CF4L)).odd;
    return (*p_648->g_288);
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_342 p_648->g_344 p_648->g_100 p_648->g_288 p_648->g_9 p_648->g_360 p_648->g_361 p_648->g_78 p_648->g_266 p_648->g_115 p_648->g_64 p_648->g_131 p_648->g_comm_values p_648->g_95 p_648->g_206 p_648->g_41 p_648->g_226 p_648->g_205 p_648->g_368 p_648->g_119 p_648->g_398 p_648->g_400 p_648->g_390 p_648->g_7
 * writes: p_648->g_368 p_648->g_41 p_648->g_115 p_648->g_128 p_648->g_131 p_648->g_comm_values p_648->g_9 p_648->g_95 p_648->g_103 p_648->g_238 p_648->g_266 p_648->g_389 p_648->g_226 p_648->g_78
 */
int32_t * func_21(uint32_t  p_22, uint64_t  p_23, int32_t * p_24, struct S0 * p_648)
{ /* block id: 109 */
    int64_t l_326 = 0x3143FF0C3E9FAD57L;
    int32_t l_329 = (-1L);
    VECTOR(uint16_t, 2) l_330 = (VECTOR(uint16_t, 2))(0x7D52L, 0xE2C4L);
    int32_t *l_331 = (void*)0;
    int32_t *l_332[8][8][4] = {{{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0}},{{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0}},{{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0}},{{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0}},{{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0}},{{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0}},{{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0}},{{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0},{(void*)0,(void*)0,&p_648->g_9,(void*)0}}};
    int32_t l_333 = 0x071DBE11L;
    VECTOR(int16_t, 4) l_340 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L));
    VECTOR(int16_t, 4) l_341 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 7L), 7L);
    VECTOR(uint32_t, 4) l_343 = (VECTOR(uint32_t, 4))(0xBFA46E38L, (VECTOR(uint32_t, 2))(0xBFA46E38L, 0xBB7E0F2CL), 0xBB7E0F2CL);
    VECTOR(uint32_t, 16) l_351 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
    VECTOR(int8_t, 16) l_362 = (VECTOR(int8_t, 16))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 1L), 1L), 1L, (-10L), 1L, (VECTOR(int8_t, 2))((-10L), 1L), (VECTOR(int8_t, 2))((-10L), 1L), (-10L), 1L, (-10L), 1L);
    VECTOR(int16_t, 16) l_365 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x6D09L), 0x6D09L), 0x6D09L, 0L, 0x6D09L, (VECTOR(int16_t, 2))(0L, 0x6D09L), (VECTOR(int16_t, 2))(0L, 0x6D09L), 0L, 0x6D09L, 0L, 0x6D09L);
    int64_t *l_366 = (void*)0;
    uint64_t *l_367 = &p_648->g_368;
    int16_t l_369[6][2];
    int32_t **l_370 = &l_332[3][4][2];
    uint16_t *l_381[6][6][7] = {{{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]}},{{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]}},{{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]}},{{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]}},{{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]}},{{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]},{&p_648->g_131[1][0],(void*)0,&p_648->g_64[4],&p_648->g_64[4],(void*)0,&p_648->g_64[4],&p_648->g_131[1][0]}}};
    int16_t *l_387[2];
    int16_t **l_386 = &l_387[0];
    int16_t ***l_388[2];
    VECTOR(int32_t, 2) l_394 = (VECTOR(int32_t, 2))(7L, 0x1B52D4AAL);
    VECTOR(int8_t, 8) l_401 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x49L), 0x49L), 0x49L, 0L, 0x49L);
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
            l_369[i][j] = 1L;
    }
    for (i = 0; i < 2; i++)
        l_387[i] = &p_648->g_78;
    for (i = 0; i < 2; i++)
        l_388[i] = &l_386;
    (*l_370) = func_37((l_326 >= (safe_mul_func_uint8_t_u_u((l_329 |= 0x44L), ((l_333 = (l_326 && ((VECTOR(uint16_t, 8))(l_330.xxyxyyyx)).s5)) <= (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 4))(mad_sat(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 4))(l_340.zwxx)).lo, ((VECTOR(int16_t, 2))(l_341.wx))))).xyyy, ((VECTOR(uint16_t, 2))(1UL, 65526UL)).xyyx, ((VECTOR(uint16_t, 16))(0xE0B8L, 0xD67BL, 0x3DB5L, 0x1A61L, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 2))(65535UL, 65532UL)).xyxy, ((VECTOR(uint16_t, 8))(p_648->g_342.zyxwwwxw)).odd))))).yzwxxxzw)))).s4621251103425057)).s75)), ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 2))(0x7B16L, 0UL)).yxyx))), (((*l_367) = (((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 16))(upsample(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 8))(l_343.xxyxywyw)).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_648->g_344.xxxx)).zzzzxzyyzzwwyzzy)).sf623))).hi, ((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 16))(((safe_rshift_func_uint8_t_u_s(0xCDL, (safe_sub_func_int16_t_s_s((!(0xEBL ^ ((((safe_rshift_func_uint16_t_u_s((((VECTOR(uint32_t, 8))(l_351.s22692656)).s0 , p_648->g_100), p_648->g_100)) == (safe_lshift_func_int8_t_s_u((((safe_rshift_func_int8_t_s_u((((VECTOR(int16_t, 2))(0x7D87L, 0x366EL)).odd & ((((((*p_648->g_288) || (safe_rshift_func_int8_t_s_s(((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_648->g_360.ww)), ((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))(p_648->g_361.wzzxwwzx)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_362.sc4)).xyxxyyxy))))), (int8_t)(safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 8))(l_365.s01331099)).s5, 9))))).lo, (int8_t)0x07L))), 0x1FL, 7L)).s6 <= p_23) && 0L), p_22))) == p_648->g_78) & p_648->g_266.x) , l_366) == (void*)0)), FAKE_DIVERGE(p_648->group_2_offset, get_group_id(2), 10))) , 0L) | p_23), p_22))) & p_648->g_9) , 0x5FL))), p_23)))) , 0UL), ((VECTOR(uint32_t, 8))(4294967295UL)), p_22, 0UL, ((VECTOR(uint32_t, 2))(4294967293UL)), 0xC5B149EDL, 1UL, 0x3B7DF9A4L)).lo, ((VECTOR(uint32_t, 8))(4294967288UL)), ((VECTOR(uint32_t, 8))(1UL))))).s16))), 0x3D86FA23L, 1UL)).wzxwwwzywzyyywwy, ((VECTOR(uint32_t, 16))(0xF756B83CL))))).s271b, ((VECTOR(uint64_t, 4))(9UL))))).z != p_22)) , 0x7319L), p_648->g_115, ((VECTOR(uint16_t, 2))(2UL)), 1UL, 1UL)).saeb9))).xzyzywyw, ((VECTOR(uint16_t, 8))(65535UL))))).even)).w != p_648->g_9), l_369[0][1])), p_22)), p_22)))))), p_23, p_23, p_648);
    (*p_648->g_288) ^= ((safe_rshift_func_uint16_t_u_s((p_22 == (((safe_rshift_func_int16_t_s_u((((p_648->g_comm_values[p_648->tid] ^= ((&p_648->g_226 != ((safe_mul_func_uint16_t_u_u((p_22 != p_23), (p_648->g_266.y = (safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(0UL, 0x653331D7L)), 4))))) , l_332[3][4][2])) | (safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((1L < (((p_648->g_389 = l_386) == &p_648->g_390) & 0x63DE92B8589FD9A0L)), p_22)), FAKE_DIVERGE(p_648->local_0_offset, get_local_id(0), 10))))) != p_22) < 0x7707963AC8CD26B8L), p_648->g_368)) , p_648->g_360.x) , p_648->g_119.s2)), 0)) <= p_23);
    for (l_329 = 3; (l_329 == (-6)); l_329 = safe_sub_func_uint64_t_u_u(l_329, 7))
    { /* block id: 120 */
        int64_t l_425 = 1L;
        (*l_370) = (*l_370);
        if (((*p_648->g_288) |= 0x01DD4068L))
        { /* block id: 123 */
            int32_t *l_393 = &l_329;
            return p_24;
        }
        else
        { /* block id: 125 */
            int16_t l_395[3][10][3] = {{{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL}},{{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL}},{{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL},{0x1DAAL,0x0843L,0x333CL}}};
            VECTOR(int8_t, 2) l_399 = (VECTOR(int8_t, 2))(0x26L, 0x34L);
            VECTOR(int8_t, 16) l_402 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int8_t, 2))((-1L), 1L), (VECTOR(int8_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
            uint32_t *l_421 = &p_648->g_226;
            uint8_t *l_424 = (void*)0;
            int32_t l_426 = 0L;
            int i, j, k;
            l_395[0][1][2] ^= ((VECTOR(int32_t, 8))(l_394.yyyyyxxy)).s6;
            l_426 ^= (FAKE_DIVERGE(p_648->group_2_offset, get_group_id(2), 10) | (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 8))(p_648->g_398.xxxyxyyx)).s10, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))((-8L), 0x13L)).yyyyxxyx)).s26))), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_399.xx)), (-1L), 0x1EL)).wzzzxwwzxwxzzwzz)).s55)), 0L, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_648->g_400.s7211777474460334)).s0f6e)).even, ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 4))(l_401.s5373)).xyxywwxz, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))((-4L), 0x45L, 0x1AL, 1L)))).zzzxxyxy))).s45, ((VECTOR(int8_t, 8))(l_402.s0a89abae)).s47))), (-7L))).s0, (((void*)0 != &p_648->g_389) & (p_648->g_9 &= (((*p_648->g_390) = (safe_add_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(rhadd(((VECTOR(uint32_t, 8))(5UL, ((safe_sub_func_int16_t_s_s(l_402.sa, ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((*p_648->g_390), 11)), p_22)) != (safe_sub_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((*l_421) = 4294967295UL), p_648->g_7)), 2)) || GROUP_DIVERGE(0, 1)), (p_22 >= ((safe_sub_func_uint64_t_u_u((l_424 != (void*)0), p_648->g_100)) ^ l_425)))) , 2L), p_22))))) , 0xCC5A38A5L), 0xAAC2DC8AL, ((VECTOR(uint32_t, 2))(0x5795A7F0L)), p_648->g_342.y, 0xBF08B0E0L, 4294967289UL)).lo, ((VECTOR(uint32_t, 4))(2UL))))))), ((VECTOR(uint32_t, 4))(0xFEB69883L))))).w, l_425)), p_22))) , l_402.s0))))));
        }
    }
    return p_24;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_26(uint32_t  p_27, int16_t  p_28, uint32_t  p_29, struct S0 * p_648)
{ /* block id: 101 */
    VECTOR(uint8_t, 16) l_297 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xF3L), 0xF3L), 0xF3L, 255UL, 0xF3L, (VECTOR(uint8_t, 2))(255UL, 0xF3L), (VECTOR(uint8_t, 2))(255UL, 0xF3L), 255UL, 0xF3L, 255UL, 0xF3L);
    int32_t l_298[5][1][9] = {{{0x4C0AFF50L,0L,9L,0x5824F179L,0L,0x5824F179L,9L,0L,0x4C0AFF50L}},{{0x4C0AFF50L,0L,9L,0x5824F179L,0L,0x5824F179L,9L,0L,0x4C0AFF50L}},{{0x4C0AFF50L,0L,9L,0x5824F179L,0L,0x5824F179L,9L,0L,0x4C0AFF50L}},{{0x4C0AFF50L,0L,9L,0x5824F179L,0L,0x5824F179L,9L,0L,0x4C0AFF50L}},{{0x4C0AFF50L,0L,9L,0x5824F179L,0L,0x5824F179L,9L,0L,0x4C0AFF50L}}};
    int32_t l_299 = (-7L);
    int8_t *l_306 = (void*)0;
    int8_t *l_307 = (void*)0;
    int8_t *l_308[9] = {&p_648->g_129,&p_648->g_129,&p_648->g_129,&p_648->g_129,&p_648->g_129,&p_648->g_129,&p_648->g_129,&p_648->g_129,&p_648->g_129};
    VECTOR(int32_t, 8) l_311 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x399BF2CEL), 0x399BF2CEL), 0x399BF2CEL, 1L, 0x399BF2CEL);
    VECTOR(int32_t, 2) l_312 = (VECTOR(int32_t, 2))((-6L), (-5L));
    VECTOR(uint32_t, 8) l_313 = (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0x05DD29C0L), 0x05DD29C0L), 0x05DD29C0L, 4294967288UL, 0x05DD29C0L);
    VECTOR(uint32_t, 4) l_314 = (VECTOR(uint32_t, 4))(0x34079B58L, (VECTOR(uint32_t, 2))(0x34079B58L, 0xB0274BA7L), 0xB0274BA7L);
    VECTOR(int32_t, 4) l_323 = (VECTOR(int32_t, 4))(0x20877215L, (VECTOR(int32_t, 2))(0x20877215L, 0L), 0L);
    int i, j, k;
    l_299 = (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_297.s35)), 2UL, 0x7AL)).z > ((l_298[1][0][3] = p_28) <= l_297.s2));
    l_299 |= (safe_add_func_uint64_t_u_u((0x71C49255DAFD72F7L < ((safe_mod_func_int32_t_s_s(((9L || 0x70BCL) ^ 0UL), ((safe_sub_func_int8_t_s_s((l_298[2][0][5] = p_29), 1UL)) , ((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_311.s61)))).xxyxxxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 8))(l_312.yyyyyxxy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x022BD2BBL, 0x6AE04922L)).xyxy)), 0L, 0x00BFB785L, 0x63175C0BL)).s0b84)).yxywzyzz))).lo, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(0UL, ((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_313.s52675035)).lo)).lo)).yxxy, ((VECTOR(uint32_t, 2))(0UL, 4294967289UL)).yyxx))), 8UL, 0x6DE72D2DL, 0x263B8775L)), 4294967295UL, ((VECTOR(uint32_t, 4))(l_314.zyxy)), 0x336C8BFFL, 0xBA9BD952L, 0x2B6E4F0FL)).s1ad9))).odd)).odd & ((((safe_mul_func_uint8_t_u_u((l_323.y ^= ((((safe_div_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s((l_314.w == (-3L)), FAKE_DIVERGE(p_648->group_0_offset, get_group_id(0), 10))), (-1L))), l_311.s2)) , p_29) , p_29) && 0x30278977L)), p_28)) , l_313.s6) & p_27) <= 0x0D84745D5C67ABFCL)) || 0UL)))) & l_314.z)), p_27));
    return l_323.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_41 p_648->g_7 p_648->g_64 p_648->g_8 p_648->l_comm_values p_648->g_68 p_648->g_90 p_648->g_100 p_648->g_103 p_648->g_95 p_648->g_9 p_648->g_131 p_648->g_comm_values p_648->g_115 p_648->g_205 p_648->g_206 p_648->g_129 p_648->g_78 p_648->g_226 p_648->g_265 p_648->g_266 p_648->g_276 p_648->g_119 p_648->g_288
 * writes: p_648->g_64 p_648->g_9 p_648->g_8 p_648->g_78 p_648->g_95 p_648->g_103 p_648->g_41 p_648->g_115 p_648->g_128 p_648->g_131 p_648->g_comm_values p_648->g_226 p_648->g_238
 */
uint32_t  func_30(int8_t  p_31, struct S0 * p_648)
{ /* block id: 11 */
    uint8_t l_51 = 0x86L;
    int64_t *l_57[3][3][1];
    uint16_t *l_63[10];
    int8_t l_65 = 0x71L;
    int64_t *l_67 = &p_648->g_7;
    int64_t **l_66 = &l_67;
    int32_t *l_287 = (void*)0;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
                l_57[i][j][k] = &p_648->g_7;
        }
    }
    for (i = 0; i < 10; i++)
        l_63[i] = &p_648->g_64[4];
    (*p_648->g_288) = func_32((p_31 , (-1L)), func_37((0x1339L | (((VECTOR(int32_t, 16))(p_648->g_41.s23782ecc90c63b88)).s2 , (+func_42((safe_mod_func_int32_t_s_s((((p_648->g_7 , (safe_mul_func_int16_t_s_s(((l_51 && (safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_int64_t_s(p_31)) ^ (((p_31 , l_57[2][0][0]) != ((*l_66) = ((safe_mod_func_uint8_t_u_u(((((((*p_648->g_8) = (safe_add_func_uint16_t_u_u((p_648->g_64[4] &= (safe_unary_minus_func_int8_t_s(p_648->g_41.s5))), p_31))) & p_648->l_comm_values[(safe_mod_func_uint32_t_u_u(p_648->tid, 110))]) == l_65) , l_57[0][2][0]) != l_57[1][1][0]), l_65)) , &p_648->g_7))) == 0x6569D98E87BB6ABDL)), p_31)), l_65))) , p_31), p_31))) | FAKE_DIVERGE(p_648->local_2_offset, get_local_id(2), 10)) == l_51), 1UL)), &p_648->g_7, l_65, p_31, p_648)))), p_31, p_648->g_41.sc, p_648), p_648->g_206.s6, p_648->g_119.s3, p_648);
    return p_648->g_78;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_32(int64_t  p_33, int32_t * p_34, int32_t  p_35, uint64_t  p_36, struct S0 * p_648)
{ /* block id: 97 */
    VECTOR(uint32_t, 16) l_286 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 4294967295UL), 4294967295UL, 1UL, 4294967295UL, (VECTOR(uint32_t, 2))(1UL, 4294967295UL), (VECTOR(uint32_t, 2))(1UL, 4294967295UL), 1UL, 4294967295UL, 1UL, 4294967295UL);
    int i;
    return l_286.sa;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_90 p_648->g_100 p_648->l_comm_values p_648->g_103 p_648->g_64 p_648->g_95 p_648->g_9 p_648->g_131 p_648->g_comm_values p_648->g_115 p_648->g_205 p_648->g_206 p_648->g_129 p_648->g_78 p_648->g_226 p_648->g_7 p_648->g_41 p_648->g_265 p_648->g_266 p_648->g_276
 * writes: p_648->g_78 p_648->g_95 p_648->g_9 p_648->g_103 p_648->g_41 p_648->g_115 p_648->g_128 p_648->g_131 p_648->g_comm_values p_648->g_226 p_648->g_238
 */
int32_t * func_37(int64_t  p_38, int64_t  p_39, int8_t  p_40, struct S0 * p_648)
{ /* block id: 19 */
    int16_t *l_77 = &p_648->g_78;
    int32_t *l_87 = &p_648->g_9;
    int64_t *l_93[7][4] = {{&p_648->g_7,&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7,&p_648->g_7},{&p_648->g_7,&p_648->g_7,&p_648->g_7,&p_648->g_7}};
    int64_t **l_92 = &l_93[0][0];
    uint64_t *l_94 = &p_648->g_95;
    uint8_t *l_101 = (void*)0;
    uint8_t *l_102 = &p_648->g_103;
    int32_t l_104 = 9L;
    int32_t *l_105[4][4][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
    VECTOR(int8_t, 4) l_202 = (VECTOR(int8_t, 4))(0x32L, (VECTOR(int8_t, 2))(0x32L, 1L), 1L);
    VECTOR(uint64_t, 2) l_203 = (VECTOR(uint64_t, 2))(0x28C4364A3FBE186BL, 0x4CE7E8D0DDF26D26L);
    VECTOR(int16_t, 8) l_204 = (VECTOR(int16_t, 8))(0x1A97L, (VECTOR(int16_t, 4))(0x1A97L, (VECTOR(int16_t, 2))(0x1A97L, (-6L)), (-6L)), (-6L), 0x1A97L, (-6L));
    uint32_t *l_225 = &p_648->g_226;
    uint32_t l_227[2][8][4];
    uint32_t *l_228 = (void*)0;
    int32_t l_229 = 0x5807F1A6L;
    int8_t l_240 = (-4L);
    VECTOR(int8_t, 8) l_241 = (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x30L), 0x30L), 0x30L, 8L, 0x30L);
    int32_t l_284[3][7] = {{(-1L),0x04452A50L,(-1L),(-1L),0x04452A50L,(-1L),(-1L)},{(-1L),0x04452A50L,(-1L),(-1L),0x04452A50L,(-1L),(-1L)},{(-1L),0x04452A50L,(-1L),(-1L),0x04452A50L,(-1L),(-1L)}};
    int32_t *l_285 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
                l_227[i][j][k] = 4294967293UL;
        }
    }
    p_648->g_41.s1 = (l_104 = (GROUP_DIVERGE(2, 1) & ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))((-1L), 0x4EC7L, 0x03FBL, 0x23CBL)), ((VECTOR(int16_t, 8))(((*l_77) = 1L), (-1L), ((*l_77) = (safe_div_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((((*l_102) &= (((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((-1L), (l_87 == (void*)0))), (safe_sub_func_int8_t_s_s((p_648->g_90 != l_92), FAKE_DIVERGE(p_648->group_1_offset, get_group_id(1), 10))))) , (((*l_94) = p_38) > (((-2L) ^ ((safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s(((*l_87) = ((((p_648->g_100 <= 1UL) == (-4L)) & p_648->l_comm_values[(safe_mod_func_uint32_t_u_u(p_648->tid, 110))]) >= 1L)), p_40)), GROUP_DIVERGE(2, 1))) >= 0x76694535L)) || p_39))) , 0x74L)) != l_104), p_648->g_64[4])), p_648->g_100))), p_648->g_95, 0L, 0x358FL, 1L, 0x0818L)).lo, ((VECTOR(int16_t, 4))(0L))))).x));
    for (p_38 = 0; (p_38 <= 15); ++p_38)
    { /* block id: 29 */
        int8_t *l_114[9][6][4] = {{{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115}},{{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115}},{{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115}},{{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115}},{{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115}},{{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115}},{{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115}},{{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115}},{{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115},{&p_648->g_115,&p_648->g_115,&p_648->g_115,&p_648->g_115}}};
        VECTOR(uint64_t, 16) l_118 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint64_t, 2))(0UL, 1UL), (VECTOR(uint64_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
        uint16_t *l_130 = &p_648->g_131[1][0];
        int64_t *l_134 = (void*)0;
        int64_t *l_135 = (void*)0;
        int64_t *l_136 = (void*)0;
        int64_t *l_137[10][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j, k;
        (*l_87) = ((safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((((((((safe_mod_func_int16_t_s_s(((p_648->g_115 = (*l_87)) && (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(l_118.s0c)).hi, ((VECTOR(uint64_t, 8))(p_648->g_119.s45207761)).s0))), p_648->g_9)) >= (p_648->g_64[5] > (safe_add_func_uint16_t_u_u((~(p_648->g_100 & ((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s((p_648->g_comm_values[p_648->tid] |= (255UL != (((p_648->g_128 = l_101) != (void*)0) < ((*l_130)++)))), ((2L == 0x434BL) || (*l_87)))), 7)), FAKE_DIVERGE(p_648->local_1_offset, get_local_id(1), 10))) != 1L))), p_40)))) | p_39) < p_38) , l_118.s4) == 8UL) , 0x9D85L), l_118.s5)), 7)) <= p_40);
        if (p_38)
            continue;
        for (p_39 = 0; (p_39 <= 14); ++p_39)
        { /* block id: 38 */
            int16_t **l_192 = &l_77;
            int32_t *l_196 = &l_104;
            if ((atomic_inc(&p_648->g_atomic_input[21 * get_linear_group_id() + 14]) == 6))
            { /* block id: 40 */
                int32_t l_140 = 0x6CBA468EL;
                int8_t l_180[6];
                uint16_t l_181 = 0xD263L;
                VECTOR(int64_t, 16) l_182 = (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x250FEE80A6DD8FC0L), 0x250FEE80A6DD8FC0L), 0x250FEE80A6DD8FC0L, 1L, 0x250FEE80A6DD8FC0L, (VECTOR(int64_t, 2))(1L, 0x250FEE80A6DD8FC0L), (VECTOR(int64_t, 2))(1L, 0x250FEE80A6DD8FC0L), 1L, 0x250FEE80A6DD8FC0L, 1L, 0x250FEE80A6DD8FC0L);
                VECTOR(int64_t, 2) l_183 = (VECTOR(int64_t, 2))(0x78BA9425BB4C828DL, 0L);
                int32_t l_184[7][6][4] = {{{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L}},{{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L}},{{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L}},{{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L}},{{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L}},{{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L}},{{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L},{0x29327850L,(-8L),(-8L),0x29327850L}}};
                uint32_t l_185 = 6UL;
                int8_t l_186 = (-1L);
                VECTOR(uint32_t, 16) l_187 = (VECTOR(uint32_t, 16))(0x0E41B89AL, (VECTOR(uint32_t, 4))(0x0E41B89AL, (VECTOR(uint32_t, 2))(0x0E41B89AL, 1UL), 1UL), 1UL, 0x0E41B89AL, 1UL, (VECTOR(uint32_t, 2))(0x0E41B89AL, 1UL), (VECTOR(uint32_t, 2))(0x0E41B89AL, 1UL), 0x0E41B89AL, 1UL, 0x0E41B89AL, 1UL);
                int32_t *l_188 = &l_184[3][0][0];
                int32_t *l_189[10][3][6] = {{{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140}},{{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140}},{{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140}},{{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140}},{{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140}},{{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140}},{{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140}},{{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140}},{{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140}},{{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140},{&l_140,&l_140,&l_140,&l_140,(void*)0,&l_140}}};
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_180[i] = 1L;
                for (l_140 = 13; (l_140 >= 21); l_140++)
                { /* block id: 43 */
                    VECTOR(int16_t, 16) l_143 = (VECTOR(int16_t, 16))((-3L), (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), 0L), 0L), 0L, (-3L), 0L, (VECTOR(int16_t, 2))((-3L), 0L), (VECTOR(int16_t, 2))((-3L), 0L), (-3L), 0L, (-3L), 0L);
                    uint8_t l_144[5] = {0x6AL,0x6AL,0x6AL,0x6AL,0x6AL};
                    int32_t l_145 = 0x1850C04FL;
                    int16_t l_146 = 0x562CL;
                    uint16_t l_147 = 0x9AF4L;
                    VECTOR(int16_t, 4) l_148 = (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), (-10L)), (-10L));
                    VECTOR(int16_t, 16) l_149 = (VECTOR(int16_t, 16))(0x6977L, (VECTOR(int16_t, 4))(0x6977L, (VECTOR(int16_t, 2))(0x6977L, 0x4DBCL), 0x4DBCL), 0x4DBCL, 0x6977L, 0x4DBCL, (VECTOR(int16_t, 2))(0x6977L, 0x4DBCL), (VECTOR(int16_t, 2))(0x6977L, 0x4DBCL), 0x6977L, 0x4DBCL, 0x6977L, 0x4DBCL);
                    VECTOR(int16_t, 2) l_150 = (VECTOR(int16_t, 2))((-1L), 0x7C6DL);
                    VECTOR(int32_t, 4) l_151 = (VECTOR(int32_t, 4))(0x2F74B0D3L, (VECTOR(int32_t, 2))(0x2F74B0D3L, 7L), 7L);
                    uint64_t l_152 = 1UL;
                    VECTOR(int16_t, 16) l_153 = (VECTOR(int16_t, 16))(0x04E0L, (VECTOR(int16_t, 4))(0x04E0L, (VECTOR(int16_t, 2))(0x04E0L, (-10L)), (-10L)), (-10L), 0x04E0L, (-10L), (VECTOR(int16_t, 2))(0x04E0L, (-10L)), (VECTOR(int16_t, 2))(0x04E0L, (-10L)), 0x04E0L, (-10L), 0x04E0L, (-10L));
                    VECTOR(uint16_t, 2) l_154 = (VECTOR(uint16_t, 2))(65533UL, 0UL);
                    VECTOR(uint16_t, 4) l_155 = (VECTOR(uint16_t, 4))(0xB41CL, (VECTOR(uint16_t, 2))(0xB41CL, 2UL), 2UL);
                    VECTOR(uint16_t, 4) l_156 = (VECTOR(uint16_t, 4))(0x4783L, (VECTOR(uint16_t, 2))(0x4783L, 0x4F16L), 0x4F16L);
                    uint32_t l_157 = 4294967295UL;
                    int16_t l_158 = (-2L);
                    uint16_t l_159[1];
                    VECTOR(uint64_t, 16) l_160 = (VECTOR(uint64_t, 16))(0x0DCABA12FF2C9FE8L, (VECTOR(uint64_t, 4))(0x0DCABA12FF2C9FE8L, (VECTOR(uint64_t, 2))(0x0DCABA12FF2C9FE8L, 0UL), 0UL), 0UL, 0x0DCABA12FF2C9FE8L, 0UL, (VECTOR(uint64_t, 2))(0x0DCABA12FF2C9FE8L, 0UL), (VECTOR(uint64_t, 2))(0x0DCABA12FF2C9FE8L, 0UL), 0x0DCABA12FF2C9FE8L, 0UL, 0x0DCABA12FF2C9FE8L, 0UL);
                    uint16_t l_161 = 65532UL;
                    uint32_t l_162 = 4294967295UL;
                    uint8_t l_163 = 0xBEL;
                    int8_t l_164 = 0L;
                    uint64_t l_165 = 0x9DD88F5EB5AFFE66L;
                    uint32_t l_166[7][6] = {{0xCDD96B38L,4UL,4UL,0xCDD96B38L,0xA82EBA10L,0UL},{0xCDD96B38L,4UL,4UL,0xCDD96B38L,0xA82EBA10L,0UL},{0xCDD96B38L,4UL,4UL,0xCDD96B38L,0xA82EBA10L,0UL},{0xCDD96B38L,4UL,4UL,0xCDD96B38L,0xA82EBA10L,0UL},{0xCDD96B38L,4UL,4UL,0xCDD96B38L,0xA82EBA10L,0UL},{0xCDD96B38L,4UL,4UL,0xCDD96B38L,0xA82EBA10L,0UL},{0xCDD96B38L,4UL,4UL,0xCDD96B38L,0xA82EBA10L,0UL}};
                    uint64_t l_167 = 18446744073709551615UL;
                    uint32_t l_168 = 0xDB768528L;
                    uint32_t l_169 = 0xAB4BC1DFL;
                    int8_t l_170 = 0L;
                    int64_t l_171 = 0x66F2D236859324BCL;
                    int32_t l_172 = 0x6CC855A6L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_159[i] = 0x380DL;
                    l_144[4] ^= ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(0x07003E30L, (-1L))).yxxy, ((VECTOR(int32_t, 8))(0x0CE6065EL, 0x5AA21049L, l_143.sd, ((VECTOR(int32_t, 4))(0x650B3E28L, 0x3E9EDABCL, 0x75EF6723L, 0x18AA95A0L)), 1L)).lo))).y;
                    l_147 = (l_145 , l_146);
                    if ((l_172 = (((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_148.xy)), ((VECTOR(int16_t, 2))(0x0B67L, 0L)), ((VECTOR(int16_t, 2))(l_149.s26)), 0x34BFL, 0x6CFCL)).even)), ((VECTOR(int16_t, 2))(l_150.xx)).xyxy, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(0x42F0L, (((VECTOR(int32_t, 8))(l_151.yxwyywwy)).s7 , l_152), 0x7F4AL, 0x73CAL)).xyywzwyy)), 0x6DDFL, 0x2BF0L, ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(l_153.s2f56558f)).even, ((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(0x78FDL, 0x3F94L, 0L, 0x6BD3L)))).wyzxzyyw)).s45)).xyxy)))))), 0x3548L, 8L)).s04af))).wxxxwwxx, ((VECTOR(uint16_t, 8))(0UL, ((VECTOR(uint16_t, 2))(l_154.xx)), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(1UL, ((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 16))(l_155.yxxywwwyzxzyzyzw)).sec, ((VECTOR(uint16_t, 16))(l_156.y, (l_168 = (l_167 = (((l_157 , (l_158 , ((l_161 |= (l_159[0] , ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_160.s18220034)).lo)).y)) , (l_164 = (l_163 = (l_162 = 0x1FL)))))) , l_165) , ((VECTOR(uint16_t, 8))(0xEB50L, ((VECTOR(uint16_t, 2))(65533UL, 0x4A8CL)), 0x1043L, l_166[0][4], 0xD4F5L, 0xFF86L, 0x9F67L)).s0))), 0x4331L, l_169, ((VECTOR(uint16_t, 8))(0x6821L)), 1UL, 1UL, 1UL, 0xC1A8L)).s9d, ((VECTOR(uint16_t, 2))(0xCE0EL))))), ((VECTOR(uint16_t, 2))(0xCEF5L))))), 0xA54BL, ((VECTOR(uint16_t, 4))(65531UL)))).s22)).even, 65526UL, l_170, 0UL, 0UL))))).s4 , l_171)))
                    { /* block id: 53 */
                        uint32_t l_173 = 0xCD60B231L;
                        uint16_t l_174 = 0x1E11L;
                        VECTOR(int32_t, 4) l_175 = (VECTOR(int32_t, 4))(0x128183C4L, (VECTOR(int32_t, 2))(0x128183C4L, 0x6DDB92C3L), 0x6DDB92C3L);
                        VECTOR(int32_t, 8) l_176 = (VECTOR(int32_t, 8))(0x574454D5L, (VECTOR(int32_t, 4))(0x574454D5L, (VECTOR(int32_t, 2))(0x574454D5L, 0x0D7730AEL), 0x0D7730AEL), 0x0D7730AEL, 0x574454D5L, 0x0D7730AEL);
                        int i;
                        l_174 = l_173;
                        l_175.w = ((VECTOR(int32_t, 8))(l_175.wywyzwxx)).s7;
                        l_151.y ^= ((VECTOR(int32_t, 8))(l_176.s06111313)).s3;
                    }
                    else
                    { /* block id: 57 */
                        uint16_t l_177 = 7UL;
                        l_177--;
                    }
                }
                l_189[6][2][4] = (((VECTOR(int64_t, 4))(max(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))((l_181 = l_180[2]), ((VECTOR(int64_t, 2))(l_182.sec)), 1L)).hi, ((VECTOR(int64_t, 8))(l_183.yyxyyxxy)).s41))), 1L, 0x498343F8062F8696L)), (int64_t)(l_187.s8 = (l_186 = (l_185 = l_184[0][2][1])))))).z , l_188);
                unsigned int result = 0;
                result += l_140;
                int l_180_i0;
                for (l_180_i0 = 0; l_180_i0 < 6; l_180_i0++) {
                    result += l_180[l_180_i0];
                }
                result += l_181;
                result += l_182.sf;
                result += l_182.se;
                result += l_182.sd;
                result += l_182.sc;
                result += l_182.sb;
                result += l_182.sa;
                result += l_182.s9;
                result += l_182.s8;
                result += l_182.s7;
                result += l_182.s6;
                result += l_182.s5;
                result += l_182.s4;
                result += l_182.s3;
                result += l_182.s2;
                result += l_182.s1;
                result += l_182.s0;
                result += l_183.y;
                result += l_183.x;
                int l_184_i0, l_184_i1, l_184_i2;
                for (l_184_i0 = 0; l_184_i0 < 7; l_184_i0++) {
                    for (l_184_i1 = 0; l_184_i1 < 6; l_184_i1++) {
                        for (l_184_i2 = 0; l_184_i2 < 4; l_184_i2++) {
                            result += l_184[l_184_i0][l_184_i1][l_184_i2];
                        }
                    }
                }
                result += l_185;
                result += l_186;
                result += l_187.sf;
                result += l_187.se;
                result += l_187.sd;
                result += l_187.sc;
                result += l_187.sb;
                result += l_187.sa;
                result += l_187.s9;
                result += l_187.s8;
                result += l_187.s7;
                result += l_187.s6;
                result += l_187.s5;
                result += l_187.s4;
                result += l_187.s3;
                result += l_187.s2;
                result += l_187.s1;
                result += l_187.s0;
                atomic_add(&p_648->g_special_values[21 * get_linear_group_id() + 14], result);
            }
            else
            { /* block id: 66 */
                (1 + 1);
            }
            (*l_87) |= (l_118.s9 , (safe_div_func_int32_t_s_s((((*l_192) = l_77) != l_130), p_40)));
            if ((atomic_inc(&p_648->g_atomic_input[21 * get_linear_group_id() + 20]) == 5))
            { /* block id: 72 */
                int32_t l_195 = (-10L);
                int32_t *l_194 = &l_195;
                int32_t **l_193 = &l_194;
                l_193 = (void*)0;
                unsigned int result = 0;
                result += l_195;
                atomic_add(&p_648->g_special_values[21 * get_linear_group_id() + 20], result);
            }
            else
            { /* block id: 74 */
                (1 + 1);
            }
            return &p_648->g_9;
        }
    }
    p_648->g_41.sb = ((safe_div_func_uint32_t_u_u((p_648->g_95 || (!((safe_unary_minus_func_int16_t_s((safe_add_func_uint8_t_u_u(((p_39 <= ((+((VECTOR(int8_t, 16))(l_202.zyywwwyxxyxyxyww)).sa) || (!(((*l_94) &= ((VECTOR(uint64_t, 2))(l_203.xy)).even) && 4UL)))) < ((((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(((*l_77) = (+p_648->g_115)), (-1L), (-1L), (-1L))).xywxxyyw, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_204.s2305341406617411)).sca5a)).lo, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_648->g_205.yx)).xxyyyxyy)).s4677276364572711)))).s13, ((VECTOR(int16_t, 4))(p_648->g_206.s6073)).odd))).yyxxyyxx)).s15)).yyyyyxxxxxyxyxxx)).hi))).s6605115254245373, (int16_t)((l_229 &= (((*l_87) = (p_648->g_129 , ((VECTOR(uint32_t, 8))(clz(((VECTOR(uint32_t, 4))((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((((+(safe_mul_func_int8_t_s_s((*l_87), ((safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_sub_func_uint16_t_u_u(p_648->g_78, (((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))((safe_div_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((((*l_225) &= (*l_87)) <= p_648->g_115), 0x52L)), p_648->g_131[1][0])), 0xF7L, 0x09L, ((VECTOR(uint8_t, 4))(4UL)), 255UL)).hi)).x, p_648->g_7)) >= 0x19A1FCFAB7493E85L) == p_40))), p_648->g_205.y)), 3)) ^ l_227[0][7][1])))) , &p_40) != &p_40), p_40)), (*l_87))), 0x0C518717L, 0xFB0D7E68L, 0xE8887CC0L)).zxxwzzyy))).s5)) >= 5UL)) < p_38), (int16_t)(*l_87)))).s3 | p_648->g_206.s0) , p_40)), p_648->g_206.s6)))) > FAKE_DIVERGE(p_648->local_0_offset, get_local_id(0), 10)))), 0xB44907AAL)) , p_39);
    if ((safe_lshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u(((*l_102) = (((p_648->g_41.s0 >= p_39) , 7L) > p_38)), (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s((((p_648->g_238[0][9][2] = l_101) != (((((&l_229 == ((p_39 ^ (!l_240)) , &l_104)) , p_40) & p_648->g_226) , 4294967295UL) , l_101)) <= p_648->g_205.y), p_39)), 0)))) != 4294967287UL), 14)))
    { /* block id: 88 */
        int32_t *l_242 = (void*)0;
        int32_t **l_245 = &l_87;
        l_241.s0 &= (*l_87);
        (*l_245) = l_242;
    }
    else
    { /* block id: 91 */
        VECTOR(uint64_t, 2) l_250 = (VECTOR(uint64_t, 2))(0x34C83E2762CEE8C0L, 18446744073709551612UL);
        uint32_t l_283 = 4294967295UL;
        int i;
        (*l_87) = (safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 4))(((*l_77) = (l_250.y && ((safe_lshift_func_int16_t_s_s(p_39, (safe_div_func_uint64_t_u_u((&l_104 == &l_229), (safe_lshift_func_int16_t_s_u((~(+(safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(0x60L, (--(*l_102)))) >= ((((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 16))(p_648->g_265.wyxxzywwyyzwwyxw)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(p_648->g_266.xxxxxxyxxyyxxxxx)).sdb6b)).xyyxzxzzzyzwywzz))).sd | ((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s(((p_38 && (safe_add_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_648->g_276.s28)), 0x50L, 0L)).zwxxyzyz, ((VECTOR(int8_t, 16))((safe_unary_minus_func_int64_t_s((((l_250.x , (safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int64_t_s(p_38)), 7)), (((void*)0 != &p_648->g_129) < 0x76FF0423EBE9DBF2L)))) , 0x4BD7L) | p_648->g_129))), ((VECTOR(int8_t, 4))(0x37L)), 4L, l_250.y, p_648->g_131[2][0], 1L, ((VECTOR(int8_t, 4))(1L)), ((VECTOR(int8_t, 2))(0L)), 0x61L)).odd))).s1363440442713263, ((VECTOR(int8_t, 16))(0x58L))))).s226c)), p_40, 0x5EL, l_250.y, p_40, ((VECTOR(int8_t, 2))(0x18L)), l_250.x, 0x19L, 0x40L, 0x15L, (-1L), 0x15L)).s59)))).yyxxxxyx, ((VECTOR(int8_t, 8))(0x55L))))).s45)).lo | l_283), l_250.x)) | 1L), p_648->l_comm_values[(safe_mod_func_uint32_t_u_u(p_648->tid, 110))]))) >= 0L))), p_648->g_276.s8)), l_284[2][5])) & (*l_87))) != 0x6A80L)), 3)) > p_40), 0x61FB8ACFDB7A5179L)))), 13)))))) < l_283))), ((VECTOR(int16_t, 2))((-1L))), 6L)).yzwyxwwyxywwywwz, ((VECTOR(int16_t, 16))((-2L)))))).s5, p_648->g_226));
    }
    return l_285;
}


/* ------------------------------------------ */
/* 
 * reads : p_648->g_68
 * writes: p_648->g_8
 */
int16_t  func_42(uint64_t  p_43, int64_t * p_44, int32_t  p_45, int32_t  p_46, struct S0 * p_648)
{ /* block id: 15 */
    int32_t *l_69 = &p_648->g_9;
    int32_t *l_70 = &p_648->g_9;
    int32_t *l_71 = &p_648->g_9;
    int32_t *l_72[10] = {&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9,&p_648->g_9};
    int8_t l_73 = 0x67L;
    uint16_t l_74 = 0x468CL;
    int i;
    (*p_648->g_68) = &p_46;
    ++l_74;
    return p_45;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[21];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 21; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[21];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 21; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[110];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 110; i++)
            l_comm_values[i] = 1;
    struct S0 c_649;
    struct S0* p_648 = &c_649;
    struct S0 c_650 = {
        (-3L), // p_648->g_7
        0x54210E16L, // p_648->g_9
        &p_648->g_9, // p_648->g_8
        (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 6L), 6L), 6L, (-8L), 6L, (VECTOR(int32_t, 2))((-8L), 6L), (VECTOR(int32_t, 2))((-8L), 6L), (-8L), 6L, (-8L), 6L), // p_648->g_41
        {65527UL,65527UL,65527UL,65527UL,65527UL,65527UL}, // p_648->g_64
        &p_648->g_8, // p_648->g_68
        1L, // p_648->g_78
        (void*)0, // p_648->g_91
        &p_648->g_91, // p_648->g_90
        0x40D6A9C4ECCF1789L, // p_648->g_95
        3UL, // p_648->g_100
        0x17L, // p_648->g_103
        1L, // p_648->g_115
        (VECTOR(uint64_t, 8))(0x6801FAD3C51E4753L, (VECTOR(uint64_t, 4))(0x6801FAD3C51E4753L, (VECTOR(uint64_t, 2))(0x6801FAD3C51E4753L, 18446744073709551611UL), 18446744073709551611UL), 18446744073709551611UL, 0x6801FAD3C51E4753L, 18446744073709551611UL), // p_648->g_119
        0x25L, // p_648->g_129
        &p_648->g_129, // p_648->g_128
        {{65529UL},{65529UL},{65529UL},{65529UL}}, // p_648->g_131
        (VECTOR(int16_t, 2))(0x713CL, 0L), // p_648->g_205
        (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x2E02L), 0x2E02L), 0x2E02L, 6L, 0x2E02L), // p_648->g_206
        1UL, // p_648->g_226
        0xB6L, // p_648->g_239
        {{{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239}},{{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239},{&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239,&p_648->g_239}}}, // p_648->g_238
        {{{&p_648->g_8,&p_648->g_8,&p_648->g_8,&p_648->g_8},{&p_648->g_8,&p_648->g_8,&p_648->g_8,&p_648->g_8},{&p_648->g_8,&p_648->g_8,&p_648->g_8,&p_648->g_8},{&p_648->g_8,&p_648->g_8,&p_648->g_8,&p_648->g_8},{&p_648->g_8,&p_648->g_8,&p_648->g_8,&p_648->g_8}},{{&p_648->g_8,&p_648->g_8,&p_648->g_8,&p_648->g_8},{&p_648->g_8,&p_648->g_8,&p_648->g_8,&p_648->g_8},{&p_648->g_8,&p_648->g_8,&p_648->g_8,&p_648->g_8},{&p_648->g_8,&p_648->g_8,&p_648->g_8,&p_648->g_8},{&p_648->g_8,&p_648->g_8,&p_648->g_8,&p_648->g_8}}}, // p_648->g_243
        (void*)0, // p_648->g_244
        (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0x1A92L), 0x1A92L), // p_648->g_265
        (VECTOR(uint16_t, 2))(0x824FL, 0x6F1EL), // p_648->g_266
        (VECTOR(int8_t, 16))(0x2CL, (VECTOR(int8_t, 4))(0x2CL, (VECTOR(int8_t, 2))(0x2CL, (-3L)), (-3L)), (-3L), 0x2CL, (-3L), (VECTOR(int8_t, 2))(0x2CL, (-3L)), (VECTOR(int8_t, 2))(0x2CL, (-3L)), 0x2CL, (-3L), 0x2CL, (-3L)), // p_648->g_276
        &p_648->g_9, // p_648->g_288
        (VECTOR(uint16_t, 4))(0x8B3EL, (VECTOR(uint16_t, 2))(0x8B3EL, 0x7059L), 0x7059L), // p_648->g_342
        (VECTOR(uint32_t, 2))(4294967293UL, 4294967295UL), // p_648->g_344
        (VECTOR(int8_t, 4))(0x56L, (VECTOR(int8_t, 2))(0x56L, (-1L)), (-1L)), // p_648->g_360
        (VECTOR(int8_t, 4))(0x22L, (VECTOR(int8_t, 2))(0x22L, 0x3CL), 0x3CL), // p_648->g_361
        18446744073709551615UL, // p_648->g_368
        &p_648->g_78, // p_648->g_390
        &p_648->g_390, // p_648->g_389
        (VECTOR(int8_t, 2))(0x2FL, 0x49L), // p_648->g_398
        (VECTOR(int8_t, 8))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), (-1L)), (-1L)), (-1L), (-5L), (-1L)), // p_648->g_400
        0x77L, // p_648->g_430
        (VECTOR(int32_t, 2))(0L, 0x5D3F216DL), // p_648->g_437
        (VECTOR(uint32_t, 16))(0xE8259A57L, (VECTOR(uint32_t, 4))(0xE8259A57L, (VECTOR(uint32_t, 2))(0xE8259A57L, 0x44F51EB9L), 0x44F51EB9L), 0x44F51EB9L, 0xE8259A57L, 0x44F51EB9L, (VECTOR(uint32_t, 2))(0xE8259A57L, 0x44F51EB9L), (VECTOR(uint32_t, 2))(0xE8259A57L, 0x44F51EB9L), 0xE8259A57L, 0x44F51EB9L, 0xE8259A57L, 0x44F51EB9L), // p_648->g_453
        (VECTOR(uint64_t, 2))(3UL, 0x3982B8EAB4C60860L), // p_648->g_497
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_648->g_500
        (VECTOR(uint32_t, 16))(0x232C712BL, (VECTOR(uint32_t, 4))(0x232C712BL, (VECTOR(uint32_t, 2))(0x232C712BL, 4294967292UL), 4294967292UL), 4294967292UL, 0x232C712BL, 4294967292UL, (VECTOR(uint32_t, 2))(0x232C712BL, 4294967292UL), (VECTOR(uint32_t, 2))(0x232C712BL, 4294967292UL), 0x232C712BL, 4294967292UL, 0x232C712BL, 4294967292UL), // p_648->g_510
        (VECTOR(uint32_t, 8))(0x0BDFCC0DL, (VECTOR(uint32_t, 4))(0x0BDFCC0DL, (VECTOR(uint32_t, 2))(0x0BDFCC0DL, 0UL), 0UL), 0UL, 0x0BDFCC0DL, 0UL), // p_648->g_511
        0UL, // p_648->g_518
        {{{(void*)0,(void*)0}},{{(void*)0,(void*)0}},{{(void*)0,(void*)0}}}, // p_648->g_541
        (void*)0, // p_648->g_542
        0x56L, // p_648->g_626
        (VECTOR(int8_t, 2))(0x3CL, 0L), // p_648->g_636
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xA5L), 0xA5L), 0xA5L, 0UL, 0xA5L), // p_648->g_638
        {{{0UL,5UL},{0UL,5UL},{0UL,5UL},{0UL,5UL},{0UL,5UL},{0UL,5UL},{0UL,5UL},{0UL,5UL}},{{0UL,5UL},{0UL,5UL},{0UL,5UL},{0UL,5UL},{0UL,5UL},{0UL,5UL},{0UL,5UL},{0UL,5UL}}}, // p_648->g_643
        0, // p_648->v_collective
        sequence_input[get_global_id(0)], // p_648->global_0_offset
        sequence_input[get_global_id(1)], // p_648->global_1_offset
        sequence_input[get_global_id(2)], // p_648->global_2_offset
        sequence_input[get_local_id(0)], // p_648->local_0_offset
        sequence_input[get_local_id(1)], // p_648->local_1_offset
        sequence_input[get_local_id(2)], // p_648->local_2_offset
        sequence_input[get_group_id(0)], // p_648->group_0_offset
        sequence_input[get_group_id(1)], // p_648->group_1_offset
        sequence_input[get_group_id(2)], // p_648->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 110)), permutations[0][get_linear_local_id()])), // p_648->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_649 = c_650;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_648);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_648->g_7, "p_648->g_7", print_hash_value);
    transparent_crc(p_648->g_9, "p_648->g_9", print_hash_value);
    transparent_crc(p_648->g_41.s0, "p_648->g_41.s0", print_hash_value);
    transparent_crc(p_648->g_41.s1, "p_648->g_41.s1", print_hash_value);
    transparent_crc(p_648->g_41.s2, "p_648->g_41.s2", print_hash_value);
    transparent_crc(p_648->g_41.s3, "p_648->g_41.s3", print_hash_value);
    transparent_crc(p_648->g_41.s4, "p_648->g_41.s4", print_hash_value);
    transparent_crc(p_648->g_41.s5, "p_648->g_41.s5", print_hash_value);
    transparent_crc(p_648->g_41.s6, "p_648->g_41.s6", print_hash_value);
    transparent_crc(p_648->g_41.s7, "p_648->g_41.s7", print_hash_value);
    transparent_crc(p_648->g_41.s8, "p_648->g_41.s8", print_hash_value);
    transparent_crc(p_648->g_41.s9, "p_648->g_41.s9", print_hash_value);
    transparent_crc(p_648->g_41.sa, "p_648->g_41.sa", print_hash_value);
    transparent_crc(p_648->g_41.sb, "p_648->g_41.sb", print_hash_value);
    transparent_crc(p_648->g_41.sc, "p_648->g_41.sc", print_hash_value);
    transparent_crc(p_648->g_41.sd, "p_648->g_41.sd", print_hash_value);
    transparent_crc(p_648->g_41.se, "p_648->g_41.se", print_hash_value);
    transparent_crc(p_648->g_41.sf, "p_648->g_41.sf", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_648->g_64[i], "p_648->g_64[i]", print_hash_value);

    }
    transparent_crc(p_648->g_78, "p_648->g_78", print_hash_value);
    transparent_crc(p_648->g_95, "p_648->g_95", print_hash_value);
    transparent_crc(p_648->g_100, "p_648->g_100", print_hash_value);
    transparent_crc(p_648->g_103, "p_648->g_103", print_hash_value);
    transparent_crc(p_648->g_115, "p_648->g_115", print_hash_value);
    transparent_crc(p_648->g_119.s0, "p_648->g_119.s0", print_hash_value);
    transparent_crc(p_648->g_119.s1, "p_648->g_119.s1", print_hash_value);
    transparent_crc(p_648->g_119.s2, "p_648->g_119.s2", print_hash_value);
    transparent_crc(p_648->g_119.s3, "p_648->g_119.s3", print_hash_value);
    transparent_crc(p_648->g_119.s4, "p_648->g_119.s4", print_hash_value);
    transparent_crc(p_648->g_119.s5, "p_648->g_119.s5", print_hash_value);
    transparent_crc(p_648->g_119.s6, "p_648->g_119.s6", print_hash_value);
    transparent_crc(p_648->g_119.s7, "p_648->g_119.s7", print_hash_value);
    transparent_crc(p_648->g_129, "p_648->g_129", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_648->g_131[i][j], "p_648->g_131[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_648->g_205.x, "p_648->g_205.x", print_hash_value);
    transparent_crc(p_648->g_205.y, "p_648->g_205.y", print_hash_value);
    transparent_crc(p_648->g_206.s0, "p_648->g_206.s0", print_hash_value);
    transparent_crc(p_648->g_206.s1, "p_648->g_206.s1", print_hash_value);
    transparent_crc(p_648->g_206.s2, "p_648->g_206.s2", print_hash_value);
    transparent_crc(p_648->g_206.s3, "p_648->g_206.s3", print_hash_value);
    transparent_crc(p_648->g_206.s4, "p_648->g_206.s4", print_hash_value);
    transparent_crc(p_648->g_206.s5, "p_648->g_206.s5", print_hash_value);
    transparent_crc(p_648->g_206.s6, "p_648->g_206.s6", print_hash_value);
    transparent_crc(p_648->g_206.s7, "p_648->g_206.s7", print_hash_value);
    transparent_crc(p_648->g_226, "p_648->g_226", print_hash_value);
    transparent_crc(p_648->g_239, "p_648->g_239", print_hash_value);
    transparent_crc(p_648->g_265.x, "p_648->g_265.x", print_hash_value);
    transparent_crc(p_648->g_265.y, "p_648->g_265.y", print_hash_value);
    transparent_crc(p_648->g_265.z, "p_648->g_265.z", print_hash_value);
    transparent_crc(p_648->g_265.w, "p_648->g_265.w", print_hash_value);
    transparent_crc(p_648->g_266.x, "p_648->g_266.x", print_hash_value);
    transparent_crc(p_648->g_266.y, "p_648->g_266.y", print_hash_value);
    transparent_crc(p_648->g_276.s0, "p_648->g_276.s0", print_hash_value);
    transparent_crc(p_648->g_276.s1, "p_648->g_276.s1", print_hash_value);
    transparent_crc(p_648->g_276.s2, "p_648->g_276.s2", print_hash_value);
    transparent_crc(p_648->g_276.s3, "p_648->g_276.s3", print_hash_value);
    transparent_crc(p_648->g_276.s4, "p_648->g_276.s4", print_hash_value);
    transparent_crc(p_648->g_276.s5, "p_648->g_276.s5", print_hash_value);
    transparent_crc(p_648->g_276.s6, "p_648->g_276.s6", print_hash_value);
    transparent_crc(p_648->g_276.s7, "p_648->g_276.s7", print_hash_value);
    transparent_crc(p_648->g_276.s8, "p_648->g_276.s8", print_hash_value);
    transparent_crc(p_648->g_276.s9, "p_648->g_276.s9", print_hash_value);
    transparent_crc(p_648->g_276.sa, "p_648->g_276.sa", print_hash_value);
    transparent_crc(p_648->g_276.sb, "p_648->g_276.sb", print_hash_value);
    transparent_crc(p_648->g_276.sc, "p_648->g_276.sc", print_hash_value);
    transparent_crc(p_648->g_276.sd, "p_648->g_276.sd", print_hash_value);
    transparent_crc(p_648->g_276.se, "p_648->g_276.se", print_hash_value);
    transparent_crc(p_648->g_276.sf, "p_648->g_276.sf", print_hash_value);
    transparent_crc(p_648->g_342.x, "p_648->g_342.x", print_hash_value);
    transparent_crc(p_648->g_342.y, "p_648->g_342.y", print_hash_value);
    transparent_crc(p_648->g_342.z, "p_648->g_342.z", print_hash_value);
    transparent_crc(p_648->g_342.w, "p_648->g_342.w", print_hash_value);
    transparent_crc(p_648->g_344.x, "p_648->g_344.x", print_hash_value);
    transparent_crc(p_648->g_344.y, "p_648->g_344.y", print_hash_value);
    transparent_crc(p_648->g_360.x, "p_648->g_360.x", print_hash_value);
    transparent_crc(p_648->g_360.y, "p_648->g_360.y", print_hash_value);
    transparent_crc(p_648->g_360.z, "p_648->g_360.z", print_hash_value);
    transparent_crc(p_648->g_360.w, "p_648->g_360.w", print_hash_value);
    transparent_crc(p_648->g_361.x, "p_648->g_361.x", print_hash_value);
    transparent_crc(p_648->g_361.y, "p_648->g_361.y", print_hash_value);
    transparent_crc(p_648->g_361.z, "p_648->g_361.z", print_hash_value);
    transparent_crc(p_648->g_361.w, "p_648->g_361.w", print_hash_value);
    transparent_crc(p_648->g_368, "p_648->g_368", print_hash_value);
    transparent_crc(p_648->g_398.x, "p_648->g_398.x", print_hash_value);
    transparent_crc(p_648->g_398.y, "p_648->g_398.y", print_hash_value);
    transparent_crc(p_648->g_400.s0, "p_648->g_400.s0", print_hash_value);
    transparent_crc(p_648->g_400.s1, "p_648->g_400.s1", print_hash_value);
    transparent_crc(p_648->g_400.s2, "p_648->g_400.s2", print_hash_value);
    transparent_crc(p_648->g_400.s3, "p_648->g_400.s3", print_hash_value);
    transparent_crc(p_648->g_400.s4, "p_648->g_400.s4", print_hash_value);
    transparent_crc(p_648->g_400.s5, "p_648->g_400.s5", print_hash_value);
    transparent_crc(p_648->g_400.s6, "p_648->g_400.s6", print_hash_value);
    transparent_crc(p_648->g_400.s7, "p_648->g_400.s7", print_hash_value);
    transparent_crc(p_648->g_430, "p_648->g_430", print_hash_value);
    transparent_crc(p_648->g_437.x, "p_648->g_437.x", print_hash_value);
    transparent_crc(p_648->g_437.y, "p_648->g_437.y", print_hash_value);
    transparent_crc(p_648->g_453.s0, "p_648->g_453.s0", print_hash_value);
    transparent_crc(p_648->g_453.s1, "p_648->g_453.s1", print_hash_value);
    transparent_crc(p_648->g_453.s2, "p_648->g_453.s2", print_hash_value);
    transparent_crc(p_648->g_453.s3, "p_648->g_453.s3", print_hash_value);
    transparent_crc(p_648->g_453.s4, "p_648->g_453.s4", print_hash_value);
    transparent_crc(p_648->g_453.s5, "p_648->g_453.s5", print_hash_value);
    transparent_crc(p_648->g_453.s6, "p_648->g_453.s6", print_hash_value);
    transparent_crc(p_648->g_453.s7, "p_648->g_453.s7", print_hash_value);
    transparent_crc(p_648->g_453.s8, "p_648->g_453.s8", print_hash_value);
    transparent_crc(p_648->g_453.s9, "p_648->g_453.s9", print_hash_value);
    transparent_crc(p_648->g_453.sa, "p_648->g_453.sa", print_hash_value);
    transparent_crc(p_648->g_453.sb, "p_648->g_453.sb", print_hash_value);
    transparent_crc(p_648->g_453.sc, "p_648->g_453.sc", print_hash_value);
    transparent_crc(p_648->g_453.sd, "p_648->g_453.sd", print_hash_value);
    transparent_crc(p_648->g_453.se, "p_648->g_453.se", print_hash_value);
    transparent_crc(p_648->g_453.sf, "p_648->g_453.sf", print_hash_value);
    transparent_crc(p_648->g_497.x, "p_648->g_497.x", print_hash_value);
    transparent_crc(p_648->g_497.y, "p_648->g_497.y", print_hash_value);
    transparent_crc(p_648->g_510.s0, "p_648->g_510.s0", print_hash_value);
    transparent_crc(p_648->g_510.s1, "p_648->g_510.s1", print_hash_value);
    transparent_crc(p_648->g_510.s2, "p_648->g_510.s2", print_hash_value);
    transparent_crc(p_648->g_510.s3, "p_648->g_510.s3", print_hash_value);
    transparent_crc(p_648->g_510.s4, "p_648->g_510.s4", print_hash_value);
    transparent_crc(p_648->g_510.s5, "p_648->g_510.s5", print_hash_value);
    transparent_crc(p_648->g_510.s6, "p_648->g_510.s6", print_hash_value);
    transparent_crc(p_648->g_510.s7, "p_648->g_510.s7", print_hash_value);
    transparent_crc(p_648->g_510.s8, "p_648->g_510.s8", print_hash_value);
    transparent_crc(p_648->g_510.s9, "p_648->g_510.s9", print_hash_value);
    transparent_crc(p_648->g_510.sa, "p_648->g_510.sa", print_hash_value);
    transparent_crc(p_648->g_510.sb, "p_648->g_510.sb", print_hash_value);
    transparent_crc(p_648->g_510.sc, "p_648->g_510.sc", print_hash_value);
    transparent_crc(p_648->g_510.sd, "p_648->g_510.sd", print_hash_value);
    transparent_crc(p_648->g_510.se, "p_648->g_510.se", print_hash_value);
    transparent_crc(p_648->g_510.sf, "p_648->g_510.sf", print_hash_value);
    transparent_crc(p_648->g_511.s0, "p_648->g_511.s0", print_hash_value);
    transparent_crc(p_648->g_511.s1, "p_648->g_511.s1", print_hash_value);
    transparent_crc(p_648->g_511.s2, "p_648->g_511.s2", print_hash_value);
    transparent_crc(p_648->g_511.s3, "p_648->g_511.s3", print_hash_value);
    transparent_crc(p_648->g_511.s4, "p_648->g_511.s4", print_hash_value);
    transparent_crc(p_648->g_511.s5, "p_648->g_511.s5", print_hash_value);
    transparent_crc(p_648->g_511.s6, "p_648->g_511.s6", print_hash_value);
    transparent_crc(p_648->g_511.s7, "p_648->g_511.s7", print_hash_value);
    transparent_crc(p_648->g_518, "p_648->g_518", print_hash_value);
    transparent_crc(p_648->g_626, "p_648->g_626", print_hash_value);
    transparent_crc(p_648->g_636.x, "p_648->g_636.x", print_hash_value);
    transparent_crc(p_648->g_636.y, "p_648->g_636.y", print_hash_value);
    transparent_crc(p_648->g_638.s0, "p_648->g_638.s0", print_hash_value);
    transparent_crc(p_648->g_638.s1, "p_648->g_638.s1", print_hash_value);
    transparent_crc(p_648->g_638.s2, "p_648->g_638.s2", print_hash_value);
    transparent_crc(p_648->g_638.s3, "p_648->g_638.s3", print_hash_value);
    transparent_crc(p_648->g_638.s4, "p_648->g_638.s4", print_hash_value);
    transparent_crc(p_648->g_638.s5, "p_648->g_638.s5", print_hash_value);
    transparent_crc(p_648->g_638.s6, "p_648->g_638.s6", print_hash_value);
    transparent_crc(p_648->g_638.s7, "p_648->g_638.s7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_648->g_643[i][j][k], "p_648->g_643[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_648->v_collective, "p_648->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 21; i++)
            transparent_crc(p_648->g_special_values[i + 21 * get_linear_group_id()], "p_648->g_special_values[i + 21 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 21; i++)
            transparent_crc(p_648->l_special_values[i], "p_648->l_special_values[i]", print_hash_value);
    transparent_crc(p_648->l_comm_values[get_linear_local_id()], "p_648->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_648->g_comm_values[get_linear_group_id() * 110 + get_linear_local_id()], "p_648->g_comm_values[get_linear_group_id() * 110 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
