// --atomics 6 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 94,32,1 -l 1,32,1
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

__constant uint32_t permutations[10][32] = {
{5,26,24,4,0,16,2,13,25,9,27,18,21,6,30,20,23,14,10,19,1,8,29,15,28,17,11,12,22,3,31,7}, // permutation 0
{4,5,29,14,2,6,15,27,22,8,0,12,21,26,1,25,23,20,3,30,10,31,28,18,19,11,7,13,16,24,9,17}, // permutation 1
{9,0,21,10,13,29,2,12,3,19,7,1,26,4,5,20,23,30,6,28,8,24,15,17,22,11,25,16,31,18,27,14}, // permutation 2
{20,19,15,5,2,21,27,9,23,18,6,24,16,31,17,22,12,25,29,28,8,11,13,30,10,4,3,26,0,14,1,7}, // permutation 3
{15,0,11,14,28,31,1,5,12,16,27,8,24,29,18,13,7,21,10,25,3,2,30,23,22,6,26,4,20,17,9,19}, // permutation 4
{8,25,12,2,23,27,18,15,16,14,20,28,26,31,9,10,13,22,29,7,17,5,4,19,24,6,11,21,3,0,1,30}, // permutation 5
{27,5,10,31,7,0,17,14,3,20,11,9,8,29,13,23,25,22,12,30,21,1,18,26,16,4,19,15,6,28,24,2}, // permutation 6
{8,2,28,23,7,9,3,12,18,31,24,11,1,0,6,10,29,4,20,17,14,5,16,25,15,27,21,26,13,22,30,19}, // permutation 7
{26,13,30,4,12,29,17,2,6,3,24,21,10,28,25,15,27,19,9,22,20,16,23,1,11,7,8,14,18,31,5,0}, // permutation 8
{13,29,27,1,21,16,8,25,23,24,11,6,14,3,12,30,4,15,10,31,17,9,20,7,19,5,2,18,26,0,28,22} // permutation 9
};

// Seed: 1571264958

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int64_t  f0;
   uint64_t  f1;
   int32_t  f2;
   volatile int32_t  f3;
   int16_t  f4;
   volatile uint64_t  f5;
   int32_t  f6;
   int32_t  f7;
   volatile int32_t  f8;
   volatile uint16_t  f9;
};

struct S1 {
   uint32_t  f0;
   uint32_t  f1;
   int16_t  f2;
   uint64_t  f3;
};

struct S2 {
   volatile int16_t  f0;
   uint64_t  f1;
   volatile int32_t  f2;
   struct S0  f3;
   volatile int64_t  f4;
   uint64_t  f5;
   struct S1  f6;
   volatile struct S1  f7;
   volatile uint32_t  f8;
   volatile int64_t  f9;
};

union U3 {
   volatile uint8_t  f0;
   uint32_t  f1;
   struct S1  f2;
   uint32_t  f3;
};

struct S4 {
    uint64_t g_6[10];
    int32_t g_12;
    volatile union U3 g_18;
    volatile VECTOR(uint32_t, 16) g_21;
    uint64_t *g_46;
    uint64_t **g_45;
    struct S1 g_55;
    int32_t g_58;
    uint8_t g_85;
    uint32_t g_97[7][10][3];
    uint32_t g_105;
    uint16_t g_108;
    VECTOR(uint16_t, 4) g_135;
    int32_t g_138[10];
    uint16_t *g_139[4][4];
    uint16_t *g_141;
    uint64_t g_145;
    uint64_t g_162;
    int32_t g_163;
    volatile uint8_t *g_164;
    VECTOR(int16_t, 4) g_185;
    VECTOR(uint16_t, 8) g_193;
    VECTOR(uint16_t, 16) g_194;
    VECTOR(int8_t, 2) g_195;
    struct S0 g_222;
    VECTOR(int16_t, 16) g_244;
    VECTOR(int8_t, 8) g_247;
    VECTOR(int8_t, 4) g_261;
    VECTOR(int8_t, 16) g_269;
    struct S0 g_275;
    VECTOR(uint64_t, 4) g_288;
    VECTOR(uint64_t, 8) g_289;
    struct S0 g_304[10][9][2];
    struct S0 *g_305;
    VECTOR(uint8_t, 8) g_309;
    uint64_t g_327;
    int32_t *g_331;
    uint64_t g_386;
    struct S2 g_395;
    struct S2 g_398;
    struct S2 *g_397;
    int32_t g_440;
    int32_t ** volatile g_515;
    int32_t * volatile g_516;
    uint16_t g_545[1][7];
    VECTOR(uint64_t, 4) g_566;
    VECTOR(int32_t, 8) g_572;
    VECTOR(uint64_t, 4) g_580;
    VECTOR(uint64_t, 2) g_582;
    VECTOR(uint32_t, 4) g_598;
    int32_t ** volatile g_610;
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
uint32_t  func_1(struct S4 * p_617);
int32_t  func_2(int8_t  p_3, struct S4 * p_617);
uint64_t ** func_9(int32_t  p_10, struct S4 * p_617);
int32_t  func_13(uint64_t  p_14, uint64_t ** p_15, struct S4 * p_617);
uint64_t  func_16(int32_t  p_17, struct S4 * p_617);
uint64_t ** func_27(struct S1  p_28, struct S4 * p_617);
struct S1  func_29(int32_t * p_30, uint64_t ** p_31, int8_t  p_32, uint64_t * p_33, int16_t  p_34, struct S4 * p_617);
int32_t * func_35(int64_t  p_36, int8_t  p_37, uint32_t  p_38, uint16_t  p_39, struct S4 * p_617);
struct S1  func_40(int32_t  p_41, uint64_t * p_42, struct S4 * p_617);
struct S1  func_47(uint64_t ** p_48, uint16_t  p_49, int32_t * p_50, int32_t * p_51, struct S4 * p_617);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_617->g_6 p_617->g_18 p_617->g_21 p_617->g_45 p_617->g_55 p_617->g_58 p_617->g_12 p_617->g_46 p_617->g_97 p_617->l_comm_values p_617->g_108 p_617->g_105 p_617->g_135 p_617->g_138 p_617->g_139 p_617->g_85 p_617->g_164 p_617->g_185 p_617->g_193 p_617->g_194 p_617->g_195 p_617->g_145 p_617->g_163 p_617->g_222.f4 p_617->g_244 p_617->g_247 p_617->g_comm_values p_617->g_261 p_617->g_269 p_617->g_141 p_617->g_222.f2 p_617->g_222.f1 p_617->g_327 p_617->g_304.f2 p_617->g_288 p_617->g_275.f7 p_617->g_386 p_617->g_309 p_617->g_275.f2 p_617->g_398.f3.f6 p_617->g_395.f5 p_617->g_395.f6.f2 p_617->g_304.f7 p_617->g_331 p_617->g_398.f3.f5 p_617->g_275.f8 p_617->g_398.f4 p_617->g_515 p_617->g_516 p_617->g_395.f3.f2 p_617->g_440 p_617->g_395.f3.f3 p_617->g_545 p_617->g_398.f3.f0 p_617->g_398.f3.f4 p_617->g_566 p_617->g_304 p_617->g_398.f6.f2 p_617->g_572 p_617->g_395.f8 p_617->g_398.f8 p_617->g_580 p_617->g_582 p_617->g_598 p_617->g_275.f1 p_617->g_395.f3.f7 p_617->g_610
 * writes: p_617->g_6 p_617->g_12 p_617->g_58 p_617->g_55.f2 p_617->g_85 p_617->g_97 p_617->g_105 p_617->g_108 p_617->l_comm_values p_617->g_138 p_617->g_141 p_617->g_145 p_617->g_162 p_617->g_163 p_617->g_195 p_617->g_222.f7 p_617->g_46 p_617->g_327 p_617->g_331 p_617->g_304.f2 p_617->g_275.f2 p_617->g_275.f7 p_617->g_386 p_617->g_397 p_617->g_398.f3.f4 p_617->g_304.f7 p_617->g_398.f6 p_617->g_395.f6.f3 p_617->g_222.f2 p_617->g_395.f3.f2 p_617->g_45 p_617->g_398.f3.f7 p_617->g_440 p_617->g_304.f0
 */
uint32_t  func_1(struct S4 * p_617)
{ /* block id: 4 */
    uint16_t l_4 = 9UL;
    uint64_t *l_5 = &p_617->g_6[0];
    int32_t *l_529 = &p_617->g_440;
    VECTOR(uint8_t, 2) l_540 = (VECTOR(uint8_t, 2))(0UL, 0xD5L);
    int32_t l_550 = 2L;
    uint64_t l_551 = 0x3C338ECF29B50C77L;
    int8_t l_552 = 8L;
    uint32_t l_553 = 0x273C1C0BL;
    int16_t *l_561[1][2][10] = {{{&p_617->g_395.f3.f4,&p_617->g_55.f2,(void*)0,&p_617->g_55.f2,&p_617->g_395.f3.f4,&p_617->g_395.f3.f4,&p_617->g_55.f2,(void*)0,&p_617->g_55.f2,&p_617->g_395.f3.f4},{&p_617->g_395.f3.f4,&p_617->g_55.f2,(void*)0,&p_617->g_55.f2,&p_617->g_395.f3.f4,&p_617->g_395.f3.f4,&p_617->g_55.f2,(void*)0,&p_617->g_55.f2,&p_617->g_395.f3.f4}}};
    int8_t l_564 = 0x17L;
    VECTOR(int32_t, 16) l_571 = (VECTOR(int32_t, 16))(0x3B230D91L, (VECTOR(int32_t, 4))(0x3B230D91L, (VECTOR(int32_t, 2))(0x3B230D91L, 3L), 3L), 3L, 0x3B230D91L, 3L, (VECTOR(int32_t, 2))(0x3B230D91L, 3L), (VECTOR(int32_t, 2))(0x3B230D91L, 3L), 0x3B230D91L, 3L, 0x3B230D91L, 3L);
    VECTOR(int64_t, 4) l_577 = (VECTOR(int64_t, 4))(0x3831FAA2C6299D31L, (VECTOR(int64_t, 2))(0x3831FAA2C6299D31L, (-1L)), (-1L));
    int i, j, k;
    (*l_529) &= func_2((l_4 ^ (--(*l_5))), p_617);
    if (((((*l_529) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((~0x00L), p_617->g_395.f3.f3)), ((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((*l_529), (((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(l_540.yx)).lo, (safe_div_func_int32_t_s_s(p_617->g_55.f1, ((safe_lshift_func_uint16_t_u_u((((VECTOR(uint16_t, 16))(65528UL, 4UL, ((p_617->g_545[0][6] || (((((*l_529) , (*l_529)) , (p_617->g_398.f3.f0 <= (safe_add_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u(((**p_617->g_45) = ((*l_529) , (*p_617->g_46))), l_550)) ^ (*l_529)) , 0x23L), l_551)))) >= GROUP_DIVERGE(2, 1)) || l_552)) , (*l_529)), ((VECTOR(uint16_t, 2))(65531UL)), l_553, 0x61AEL, (*l_529), 0x22DDL, (*l_529), (*l_529), ((VECTOR(uint16_t, 2))(0x4F1BL)), 2UL, 0x6C43L, 65533UL)).s1 >= (*l_529)), (*l_529))) ^ (*l_529)))))) , p_617->g_440) | (*l_529)))) && p_617->g_398.f3.f4), (*l_529))) || 0L)))) <= p_617->g_398.f3.f0) , (*l_529)))
    { /* block id: 280 */
        struct S2 **l_554 = &p_617->g_397;
        struct S2 ***l_555[7] = {&l_554,&l_554,&l_554,&l_554,&l_554,&l_554,&l_554};
        struct S2 **l_556 = &p_617->g_397;
        int i;
        (*l_529) = ((l_556 = l_554) == &p_617->g_397);
    }
    else
    { /* block id: 283 */
        int64_t *l_565[3][4][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        struct S2 **l_568 = &p_617->g_397;
        struct S2 ***l_567[9];
        VECTOR(uint64_t, 2) l_581 = (VECTOR(uint64_t, 2))(0x40D3EA9C4C778AF8L, 6UL);
        uint16_t **l_604 = &p_617->g_139[2][1];
        int32_t *l_609 = &p_617->g_395.f3.f7;
        int32_t *l_611 = (void*)0;
        int32_t *l_612[2][4][2] = {{{&p_617->g_398.f3.f2,&p_617->g_398.f3.f2},{&p_617->g_398.f3.f2,&p_617->g_398.f3.f2},{&p_617->g_398.f3.f2,&p_617->g_398.f3.f2},{&p_617->g_398.f3.f2,&p_617->g_398.f3.f2}},{{&p_617->g_398.f3.f2,&p_617->g_398.f3.f2},{&p_617->g_398.f3.f2,&p_617->g_398.f3.f2},{&p_617->g_398.f3.f2,&p_617->g_398.f3.f2},{&p_617->g_398.f3.f2,&p_617->g_398.f3.f2}}};
        int32_t l_613 = 4L;
        uint8_t l_614 = 0xD2L;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_567[i] = &l_568;
        (*p_617->g_516) = (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((safe_sub_func_int8_t_s_s((((void*)0 != l_561[0][1][8]) == (((safe_add_func_int64_t_s_s(l_564, p_617->g_275.f2)) < ((p_617->l_comm_values[(safe_mod_func_uint32_t_u_u(p_617->tid, 32))] = ((void*)0 != l_5)) & ((VECTOR(uint64_t, 2))(p_617->g_566.wy)).lo)) && (l_567[2] != (p_617->g_304[6][5][1] , &l_568)))), FAKE_DIVERGE(p_617->global_2_offset, get_global_id(2), 10))), ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 2))(0x0A34A9D7L)), 0x20C5490DL)).even)).zyxxwwzzxxyzxwwx)))).s3, 0x4E74B3A9L));
        (*l_529) = (*l_529);
        for (p_617->g_398.f6.f2 = 22; (p_617->g_398.f6.f2 > 10); --p_617->g_398.f6.f2)
        { /* block id: 289 */
            int64_t l_591 = (-1L);
            int32_t l_601 = (-2L);
            int32_t l_602 = (-1L);
            uint8_t *l_603[3][9] = {{&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85},{&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85},{&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85}};
            uint16_t *l_605 = (void*)0;
            uint16_t *l_606 = &l_4;
            int64_t *l_607 = &p_617->g_304[0][5][0].f0;
            int32_t *l_608 = &p_617->g_398.f3.f7;
            int i, j;
            (*l_608) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_571.s08)))).yyyx)).yzzywwww, ((VECTOR(int32_t, 8))(0x7264C366L, 0x2346FF56L, ((VECTOR(int32_t, 4))(p_617->g_572.s5213)), 0x62A3003AL, 0L))))))).s2, (safe_mod_func_uint32_t_u_u((p_617->g_395.f6.f2 , (safe_sub_func_uint32_t_u_u((((((((VECTOR(int64_t, 8))(0x0E8A31EFCB6B9C06L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_577.wxzw)).hi)).even, p_617->g_395.f8, ((VECTOR(int64_t, 2))(0x5FE22BA838C3AF18L, (-3L))), 3L, 1L, 0x436CC86D3BCFEED4L)).s5 && (*l_529)) && (((*l_607) = (~(0xBAD80BF6A78A79C3L <= (((safe_sub_func_int32_t_s_s(((p_617->g_398.f8 | ((((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 16))(p_617->g_580.zwxwxwwzxzyyxxxw)), ((VECTOR(uint64_t, 16))(l_581.yyxyxxyxyyyxxyxy)), ((VECTOR(uint64_t, 8))(rotate(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 2))(p_617->g_582.yx)), ((VECTOR(uint64_t, 8))(18446744073709551615UL, (((*l_606) = (((safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((*l_529) = (((VECTOR(int64_t, 16))(l_591, (safe_sub_func_uint16_t_u_u((*l_529), (safe_sub_func_uint64_t_u_u(l_591, (safe_div_func_int64_t_s_s(((((((VECTOR(uint32_t, 2))(p_617->g_598.zz)).lo , ((((VECTOR(uint32_t, 2))(0xC79F0937L, 0xD63C9C8AL)).odd | ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))((l_602 = (safe_add_func_uint32_t_u_u((l_601 ^= l_581.y), 0x7B1D4114L))), ((VECTOR(int32_t, 4))(0x52170AB7L)), 0x1587553DL, 0x1211DBD7L, (-5L))).lo)).x) < l_591)) | (*l_529)) && 1L) >= p_617->g_58), 4UL)))))), ((VECTOR(int64_t, 2))(0x1EDF8B9FCA89892DL)), ((VECTOR(int64_t, 8))(0x520B08BE3A4BE1A7L)), p_617->g_304[0][5][0].f0, ((VECTOR(int64_t, 2))(0x2EA2D131CA5FBC2BL)), 1L)).sa | 0x31CC15ACC2182121L)), l_581.x)), p_617->g_275.f1)), 0x35D1L)), p_617->g_395.f3.f7)) , (void*)0) == l_604)) , (**p_617->g_45)), ((VECTOR(uint64_t, 4))(0x22DE7AF8FA790E83L)), 0xAA347D4CFF0893BEL, 0x073672B162687232L)).s21))).yyyy)).ywzywzwz, ((VECTOR(uint64_t, 8))(0xE0E092C6A1823587L))))).s4226361313661424))).sad29, (uint64_t)0xB894470EBF3B3A3FL))).z < 0x41D6B38F3349CE3CL) >= (-1L))) > 8L), l_591)) == p_617->g_395.f3.f7) == p_617->g_327)))) , l_581.x)) < p_617->g_108) , l_581.y) ^ l_591), l_581.x))), l_591)), 5L, 0x13417B81L)).z;
            (*p_617->g_610) = l_609;
            (*l_529) &= (**p_617->g_610);
            return p_617->g_304[0][5][0].f4;
        }
        l_614++;
    }
    return p_617->g_55.f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_18 p_617->g_21 p_617->g_6 p_617->g_45 p_617->g_55 p_617->g_58 p_617->g_12 p_617->g_46 p_617->g_97 p_617->l_comm_values p_617->g_108 p_617->g_105 p_617->g_135 p_617->g_138 p_617->g_139 p_617->g_85 p_617->g_164 p_617->g_185 p_617->g_193 p_617->g_194 p_617->g_195 p_617->g_145 p_617->g_163 p_617->g_222.f4 p_617->g_244 p_617->g_247 p_617->g_comm_values p_617->g_261 p_617->g_269 p_617->g_141 p_617->g_222.f2 p_617->g_222.f1 p_617->g_327 p_617->g_304.f2 p_617->g_288 p_617->g_275.f7 p_617->g_386 p_617->g_309 p_617->g_275.f2 p_617->g_398.f3.f6 p_617->g_395.f5 p_617->g_395.f6.f2 p_617->g_304.f7 p_617->g_331 p_617->g_398.f3.f5 p_617->g_275.f8 p_617->g_398.f4 p_617->g_515 p_617->g_516 p_617->g_395.f3.f2
 * writes: p_617->g_12 p_617->g_58 p_617->g_55.f2 p_617->g_6 p_617->g_85 p_617->g_97 p_617->g_105 p_617->g_108 p_617->l_comm_values p_617->g_138 p_617->g_141 p_617->g_145 p_617->g_162 p_617->g_163 p_617->g_195 p_617->g_222.f7 p_617->g_46 p_617->g_327 p_617->g_331 p_617->g_304.f2 p_617->g_275.f2 p_617->g_275.f7 p_617->g_386 p_617->g_397 p_617->g_398.f3.f4 p_617->g_304.f7 p_617->g_398.f6 p_617->g_395.f6.f3 p_617->g_222.f2 p_617->g_395.f3.f2 p_617->g_45 p_617->g_398.f3.f7
 */
int32_t  func_2(int8_t  p_3, struct S4 * p_617)
{ /* block id: 6 */
    int32_t *l_11 = &p_617->g_12;
    uint64_t ***l_519 = &p_617->g_45;
    uint64_t ***l_525[3];
    uint64_t **l_526 = &p_617->g_46;
    VECTOR(int32_t, 4) l_527 = (VECTOR(int32_t, 4))(0x5241E205L, (VECTOR(int32_t, 2))(0x5241E205L, 3L), 3L);
    int32_t *l_528 = &p_617->g_398.f3.f7;
    int i;
    for (i = 0; i < 3; i++)
        l_525[i] = (void*)0;
    (*l_519) = func_9(((*l_11) = (!(-6L))), p_617);
    if ((atomic_inc(&p_617->l_atomic_input[0]) == 7))
    { /* block id: 267 */
        int32_t l_521 = (-1L);
        int32_t *l_520 = &l_521;
        int32_t *l_522[5];
        uint8_t l_523 = 0x5FL;
        int64_t l_524 = 0x3EC1FFF75394A811L;
        int i;
        for (i = 0; i < 5; i++)
            l_522[i] = &l_521;
        l_522[0] = l_520;
        l_524 |= l_523;
        unsigned int result = 0;
        result += l_521;
        result += l_523;
        result += l_524;
        atomic_add(&p_617->l_special_values[0], result);
    }
    else
    { /* block id: 270 */
        (1 + 1);
    }
    l_526 = (p_617->g_45 = (*l_519));
    (*l_528) = l_527.z;
    return p_3;
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_18 p_617->g_21 p_617->g_6 p_617->g_45 p_617->g_55 p_617->g_58 p_617->g_12 p_617->g_46 p_617->g_97 p_617->l_comm_values p_617->g_108 p_617->g_105 p_617->g_135 p_617->g_138 p_617->g_139 p_617->g_85 p_617->g_164 p_617->g_185 p_617->g_193 p_617->g_194 p_617->g_195 p_617->g_145 p_617->g_163 p_617->g_222.f4 p_617->g_244 p_617->g_247 p_617->g_comm_values p_617->g_261 p_617->g_269 p_617->g_141 p_617->g_222.f2 p_617->g_222.f1 p_617->g_327 p_617->g_304.f2 p_617->g_288 p_617->g_275.f7 p_617->g_386 p_617->g_309 p_617->g_275.f2 p_617->g_398.f3.f6 p_617->g_395.f5 p_617->g_395.f6.f2 p_617->g_304.f7 p_617->g_331 p_617->g_398.f3.f5 p_617->g_275.f8 p_617->g_398.f4 p_617->g_515 p_617->g_516 p_617->g_395.f3.f2
 * writes: p_617->g_58 p_617->g_55.f2 p_617->g_6 p_617->g_85 p_617->g_97 p_617->g_105 p_617->g_108 p_617->l_comm_values p_617->g_138 p_617->g_141 p_617->g_145 p_617->g_162 p_617->g_163 p_617->g_195 p_617->g_222.f7 p_617->g_46 p_617->g_327 p_617->g_331 p_617->g_304.f2 p_617->g_275.f2 p_617->g_275.f7 p_617->g_386 p_617->g_397 p_617->g_398.f3.f4 p_617->g_304.f7 p_617->g_398.f6 p_617->g_395.f6.f3 p_617->g_222.f2 p_617->g_395.f3.f2
 */
uint64_t ** func_9(int32_t  p_10, struct S4 * p_617)
{ /* block id: 8 */
    VECTOR(uint32_t, 4) l_22 = (VECTOR(uint32_t, 4))(0x1A53FDE7L, (VECTOR(uint32_t, 2))(0x1A53FDE7L, 0x4ED09EB8L), 0x4ED09EB8L);
    uint64_t *l_44 = &p_617->g_6[0];
    uint64_t **l_43 = &l_44;
    int32_t *l_52 = &p_617->g_12;
    struct S1 *l_445 = &p_617->g_398.f6;
    uint64_t *l_511 = &p_617->g_395.f6.f3;
    int32_t *l_518[1];
    int i;
    for (i = 0; i < 1; i++)
        l_518[i] = &p_617->g_440;
    p_617->g_395.f3.f2 |= func_13(((*l_511) = func_16((p_617->g_18 , (safe_add_func_int32_t_s_s((0x09D73AE4L >= ((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(p_617->g_21.s44)).xyyxyxxxxyyxxyyy)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_22.yxwxwzzyxwyxwzxy)).odd)).s5202267144545621))).s3), (safe_rshift_func_uint16_t_u_s(((safe_add_func_int64_t_s_s((1L || (((p_617->g_6[3] , func_27(((*l_445) = func_29(func_35(((!l_22.y) & (func_40(((((l_43 != p_617->g_45) || 0x0B8B0E31355901A7L) , (func_47(&l_44, l_22.y, &p_617->g_12, l_52, p_617) , p_10)) , p_617->g_55.f3), (*l_43), p_617) , 0x4BDF713FBC1D3AE5L)), p_617->g_309.s6, p_10, p_10, p_617), &l_44, p_617->g_185.w, (*l_43), p_617->g_288.w, p_617)), p_617)) != &l_44) <= 8UL)), 0x4490DC84F6C87B31L)) != p_617->g_288.z), 6))))), p_617)), &l_44, p_617);
    return &p_617->g_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_275.f7 p_617->g_398.f4 p_617->g_515 p_617->g_516 p_617->g_222.f2
 * writes: p_617->g_275.f7 p_617->g_331 p_617->g_222.f2
 */
int32_t  func_13(uint64_t  p_14, uint64_t ** p_15, struct S4 * p_617)
{ /* block id: 254 */
    int32_t *l_514 = (void*)0;
    int32_t l_517 = 0x615121F4L;
    for (p_617->g_275.f7 = 0; (p_617->g_275.f7 != (-20)); p_617->g_275.f7 = safe_sub_func_int16_t_s_s(p_617->g_275.f7, 1))
    { /* block id: 257 */
        return p_617->g_398.f4;
    }
    (*p_617->g_515) = l_514;
    (*p_617->g_516) ^= p_14;
    return l_517;
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_398.f3.f5 p_617->g_275.f2 p_617->g_275.f8
 * writes: p_617->g_275.f2
 */
uint64_t  func_16(int32_t  p_17, struct S4 * p_617)
{ /* block id: 248 */
    int32_t *l_508 = &p_617->g_304[0][5][0].f7;
    int32_t **l_509 = &l_508;
    int32_t *l_510 = &p_617->g_275.f2;
    (*l_509) = l_508;
    (*l_509) = l_510;
    (**l_509) ^= p_617->g_398.f3.f5;
    return p_617->g_275.f8;
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_331 p_617->g_58 p_617->g_193 p_617->l_comm_values p_617->g_46
 * writes: p_617->g_58 p_617->g_6
 */
uint64_t ** func_27(struct S1  p_28, struct S4 * p_617)
{ /* block id: 183 */
    uint16_t l_448 = 0xFF87L;
    if ((l_448 < ((~((safe_rshift_func_int16_t_s_s(0x2504L, 14)) >= ((((*p_617->g_331) = (*p_617->g_331)) , 1L) ^ (((*p_617->g_46) = (((((-1L) == l_448) ^ p_617->g_193.s0) & p_617->l_comm_values[(safe_mod_func_uint32_t_u_u(p_617->tid, 32))]) < (-1L))) != p_28.f2)))) <= GROUP_DIVERGE(2, 1))))
    { /* block id: 186 */
        uint64_t **l_451 = &p_617->g_46;
        (*p_617->g_331) &= (0x25L <= (!((VECTOR(int8_t, 2))(0x7DL, 1L)).hi));
        return l_451;
    }
    else
    { /* block id: 189 */
        if ((atomic_inc(&p_617->g_atomic_input[6 * get_linear_group_id() + 3]) == 5))
        { /* block id: 191 */
            int32_t l_453 = (-1L);
            int32_t *l_452 = &l_453;
            int32_t l_454 = (-1L);
            l_452 = (void*)0;
            if (l_454)
            { /* block id: 193 */
                struct S1 l_455[1][10][4] = {{{{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL}},{{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL}},{{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL}},{{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL}},{{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL}},{{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL}},{{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL}},{{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL}},{{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL}},{{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL},{3UL,4294967295UL,0x41F6L,1UL}}}};
                struct S1 l_456 = {4294967286UL,0x977415C4L,3L,0x28F907F786621634L};
                int i, j, k;
                l_456 = l_455[0][2][2];
            }
            else
            { /* block id: 195 */
                int8_t l_457 = 0x0CL;
                int32_t l_458 = 0x1EC40891L;
                int64_t l_459 = 0x2ECDC1E5B9317841L;
                uint16_t l_460 = 0UL;
                int64_t l_498 = (-5L);
                l_460++;
                for (l_460 = (-24); (l_460 >= 51); l_460 = safe_add_func_int64_t_s_s(l_460, 7))
                { /* block id: 199 */
                    int32_t l_465 = 0x3B45F67CL;
                    int8_t l_481 = 0x56L;
                    uint64_t l_482 = 18446744073709551606UL;
                    int16_t l_485 = 0L;
                    for (l_465 = 0; (l_465 > 22); l_465 = safe_add_func_uint8_t_u_u(l_465, 6))
                    { /* block id: 202 */
                        uint8_t l_468 = 1UL;
                        int32_t l_471 = 0x2C334EC0L;
                        int32_t l_472 = 8L;
                        VECTOR(uint32_t, 4) l_473 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x9B229A55L), 0x9B229A55L);
                        int i;
                        l_468--;
                        l_473.w ^= (l_472 = (l_471 = (l_453 = (l_471 , l_472))));
                    }
                    for (l_465 = 0; (l_465 > 29); ++l_465)
                    { /* block id: 211 */
                        uint64_t l_476 = 0x4547157CE91CE504L;
                        struct S1 l_477 = {0x613DEB37L,4294967295UL,-3L,5UL};
                        struct S1 l_478 = {0x895564ABL,4294967295UL,4L,0xCE0E0ED0518A9048L};
                        int64_t l_479 = 1L;
                        uint32_t l_480 = 0x2314B616L;
                        l_478 = (l_476 , l_477);
                        l_453 |= (l_480 = l_479);
                    }
                    l_482--;
                    if (l_485)
                    { /* block id: 217 */
                        int64_t l_486 = 0L;
                        int8_t l_487 = 0x39L;
                        int32_t *l_488[2];
                        uint32_t l_489 = 0xAC7B7A6BL;
                        int16_t l_490 = 5L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_488[i] = (void*)0;
                        l_487 |= l_486;
                        l_452 = l_488[0];
                        l_490 &= l_489;
                    }
                    else
                    { /* block id: 221 */
                        struct S2 l_492 = {4L,0UL,-1L,{0x02F4507F2D94C1C4L,0xEDE9BF27C34AF3FAL,0x04CABED4L,-8L,0x780CL,0x05E746CE921E03A8L,0x53070A81L,9L,0L,1UL},0x19E6C7974A7759ECL,18446744073709551615UL,{0xE5DF5083L,1UL,0x264EL,0x526A09F172CA6E8CL},{0UL,0xCB49A64DL,0x5814L,18446744073709551615UL},0UL,-9L};/* VOLATILE GLOBAL l_492 */
                        struct S2 *l_491 = &l_492;
                        struct S2 *l_493 = (void*)0;
                        l_493 = l_491;
                    }
                }
                for (l_457 = 0; (l_457 == 24); ++l_457)
                { /* block id: 227 */
                    uint32_t l_496[9][3] = {{1UL,1UL,0xBEA28F8DL},{1UL,1UL,0xBEA28F8DL},{1UL,1UL,0xBEA28F8DL},{1UL,1UL,0xBEA28F8DL},{1UL,1UL,0xBEA28F8DL},{1UL,1UL,0xBEA28F8DL},{1UL,1UL,0xBEA28F8DL},{1UL,1UL,0xBEA28F8DL},{1UL,1UL,0xBEA28F8DL}};
                    int8_t l_497 = 0x0FL;
                    int i, j;
                    l_453 = (l_497 = l_496[7][2]);
                }
                if (l_498)
                { /* block id: 231 */
                    struct S1 l_499[8][9] = {{{0xE1C0862BL,0x8A13842FL,0L,5UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{1UL,0x45865845L,6L,1UL},{0x60689D0AL,0x87DEFF20L,0L,18446744073709551615UL},{1UL,0x45865845L,6L,1UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{0xE1C0862BL,0x8A13842FL,0L,5UL},{4294967294UL,0xF4395BF1L,0x5976L,0UL},{1UL,4294967286UL,0x686DL,0x6D5F54598C3073A5L}},{{0xE1C0862BL,0x8A13842FL,0L,5UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{1UL,0x45865845L,6L,1UL},{0x60689D0AL,0x87DEFF20L,0L,18446744073709551615UL},{1UL,0x45865845L,6L,1UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{0xE1C0862BL,0x8A13842FL,0L,5UL},{4294967294UL,0xF4395BF1L,0x5976L,0UL},{1UL,4294967286UL,0x686DL,0x6D5F54598C3073A5L}},{{0xE1C0862BL,0x8A13842FL,0L,5UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{1UL,0x45865845L,6L,1UL},{0x60689D0AL,0x87DEFF20L,0L,18446744073709551615UL},{1UL,0x45865845L,6L,1UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{0xE1C0862BL,0x8A13842FL,0L,5UL},{4294967294UL,0xF4395BF1L,0x5976L,0UL},{1UL,4294967286UL,0x686DL,0x6D5F54598C3073A5L}},{{0xE1C0862BL,0x8A13842FL,0L,5UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{1UL,0x45865845L,6L,1UL},{0x60689D0AL,0x87DEFF20L,0L,18446744073709551615UL},{1UL,0x45865845L,6L,1UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{0xE1C0862BL,0x8A13842FL,0L,5UL},{4294967294UL,0xF4395BF1L,0x5976L,0UL},{1UL,4294967286UL,0x686DL,0x6D5F54598C3073A5L}},{{0xE1C0862BL,0x8A13842FL,0L,5UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{1UL,0x45865845L,6L,1UL},{0x60689D0AL,0x87DEFF20L,0L,18446744073709551615UL},{1UL,0x45865845L,6L,1UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{0xE1C0862BL,0x8A13842FL,0L,5UL},{4294967294UL,0xF4395BF1L,0x5976L,0UL},{1UL,4294967286UL,0x686DL,0x6D5F54598C3073A5L}},{{0xE1C0862BL,0x8A13842FL,0L,5UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{1UL,0x45865845L,6L,1UL},{0x60689D0AL,0x87DEFF20L,0L,18446744073709551615UL},{1UL,0x45865845L,6L,1UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{0xE1C0862BL,0x8A13842FL,0L,5UL},{4294967294UL,0xF4395BF1L,0x5976L,0UL},{1UL,4294967286UL,0x686DL,0x6D5F54598C3073A5L}},{{0xE1C0862BL,0x8A13842FL,0L,5UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{1UL,0x45865845L,6L,1UL},{0x60689D0AL,0x87DEFF20L,0L,18446744073709551615UL},{1UL,0x45865845L,6L,1UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{0xE1C0862BL,0x8A13842FL,0L,5UL},{4294967294UL,0xF4395BF1L,0x5976L,0UL},{1UL,4294967286UL,0x686DL,0x6D5F54598C3073A5L}},{{0xE1C0862BL,0x8A13842FL,0L,5UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{1UL,0x45865845L,6L,1UL},{0x60689D0AL,0x87DEFF20L,0L,18446744073709551615UL},{1UL,0x45865845L,6L,1UL},{0x4B1F5EC5L,0UL,-5L,0xBB39516A3D84D7E4L},{0xE1C0862BL,0x8A13842FL,0L,5UL},{4294967294UL,0xF4395BF1L,0x5976L,0UL},{1UL,4294967286UL,0x686DL,0x6D5F54598C3073A5L}}};
                    struct S1 l_500 = {0xF82CA2A6L,4294967295UL,-6L,1UL};
                    int i, j;
                    l_500 = l_499[4][5];
                    for (l_499[4][5].f1 = (-20); (l_499[4][5].f1 < 5); l_499[4][5].f1++)
                    { /* block id: 235 */
                        int32_t *l_503 = (void*)0;
                        l_452 = l_503;
                    }
                }
                else
                { /* block id: 238 */
                    VECTOR(int32_t, 4) l_504 = (VECTOR(int32_t, 4))(0x61B64DB9L, (VECTOR(int32_t, 2))(0x61B64DB9L, 0L), 0L);
                    VECTOR(int32_t, 2) l_505 = (VECTOR(int32_t, 2))(0L, 0x50E855B9L);
                    VECTOR(int32_t, 4) l_506 = (VECTOR(int32_t, 4))(0x48871385L, (VECTOR(int32_t, 2))(0x48871385L, (-1L)), (-1L));
                    int64_t l_507[10][1][7] = {{{0x56E4D0A706D091B2L,0x56E4D0A706D091B2L,0x4F67CCE2951B9CF1L,0x0B2FF928CB157738L,(-1L),0L,0x3FAB067394B78978L}},{{0x56E4D0A706D091B2L,0x56E4D0A706D091B2L,0x4F67CCE2951B9CF1L,0x0B2FF928CB157738L,(-1L),0L,0x3FAB067394B78978L}},{{0x56E4D0A706D091B2L,0x56E4D0A706D091B2L,0x4F67CCE2951B9CF1L,0x0B2FF928CB157738L,(-1L),0L,0x3FAB067394B78978L}},{{0x56E4D0A706D091B2L,0x56E4D0A706D091B2L,0x4F67CCE2951B9CF1L,0x0B2FF928CB157738L,(-1L),0L,0x3FAB067394B78978L}},{{0x56E4D0A706D091B2L,0x56E4D0A706D091B2L,0x4F67CCE2951B9CF1L,0x0B2FF928CB157738L,(-1L),0L,0x3FAB067394B78978L}},{{0x56E4D0A706D091B2L,0x56E4D0A706D091B2L,0x4F67CCE2951B9CF1L,0x0B2FF928CB157738L,(-1L),0L,0x3FAB067394B78978L}},{{0x56E4D0A706D091B2L,0x56E4D0A706D091B2L,0x4F67CCE2951B9CF1L,0x0B2FF928CB157738L,(-1L),0L,0x3FAB067394B78978L}},{{0x56E4D0A706D091B2L,0x56E4D0A706D091B2L,0x4F67CCE2951B9CF1L,0x0B2FF928CB157738L,(-1L),0L,0x3FAB067394B78978L}},{{0x56E4D0A706D091B2L,0x56E4D0A706D091B2L,0x4F67CCE2951B9CF1L,0x0B2FF928CB157738L,(-1L),0L,0x3FAB067394B78978L}},{{0x56E4D0A706D091B2L,0x56E4D0A706D091B2L,0x4F67CCE2951B9CF1L,0x0B2FF928CB157738L,(-1L),0L,0x3FAB067394B78978L}}};
                    int i, j, k;
                    l_453 = ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(l_504.zxwzzzzwzxyxwzxy)).s7f, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(l_505.xx)).xyxy, ((VECTOR(int32_t, 4))(l_506.zxyz))))).odd))).odd;
                    l_452 = (l_507[3][0][3] , (void*)0);
                }
            }
            unsigned int result = 0;
            result += l_453;
            result += l_454;
            atomic_add(&p_617->g_special_values[6 * get_linear_group_id() + 3], result);
        }
        else
        { /* block id: 243 */
            (1 + 1);
        }
        return &p_617->g_46;
    }
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
struct S1  func_29(int32_t * p_30, uint64_t ** p_31, int8_t  p_32, uint64_t * p_33, int16_t  p_34, struct S4 * p_617)
{ /* block id: 179 */
    int32_t *l_434 = &p_617->g_398.f3.f7;
    int32_t *l_435 = &p_617->g_222.f7;
    int32_t l_436[3][1];
    int32_t *l_437 = &p_617->g_395.f3.f2;
    int32_t *l_438 = &p_617->g_398.f3.f7;
    int32_t *l_439[9][2];
    VECTOR(uint8_t, 2) l_441 = (VECTOR(uint8_t, 2))(255UL, 255UL);
    struct S1 l_444 = {0xE5CBAC29L,0UL,0L,18446744073709551615UL};
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_436[i][j] = 0x2B55CDE3L;
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
            l_439[i][j] = &p_617->g_222.f7;
    }
    l_441.y++;
    return l_444;
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_45 p_617->g_46 p_617->g_85 p_617->g_275.f2 p_617->g_398.f3.f6 p_617->g_135 p_617->g_269 p_617->g_395.f5 p_617->g_108 p_617->g_395.f6.f2 p_617->g_304.f7 p_617->g_55
 * writes: p_617->g_397 p_617->g_6 p_617->g_85 p_617->g_108 p_617->g_398.f3.f4 p_617->g_304.f7 p_617->g_398.f6 p_617->g_331
 */
int32_t * func_35(int64_t  p_36, int8_t  p_37, uint32_t  p_38, uint16_t  p_39, struct S4 * p_617)
{ /* block id: 168 */
    struct S2 *l_394 = &p_617->g_395;
    struct S2 **l_396[7] = {(void*)0,&l_394,(void*)0,(void*)0,&l_394,(void*)0,(void*)0};
    int32_t l_401 = 0x6E1C4F50L;
    VECTOR(int32_t, 2) l_404 = (VECTOR(int32_t, 2))(0x244CFE68L, 0x36A30F1FL);
    VECTOR(uint64_t, 8) l_405 = (VECTOR(uint64_t, 8))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 0x16CB2AD70F793893L), 0x16CB2AD70F793893L), 0x16CB2AD70F793893L, 9UL, 0x16CB2AD70F793893L);
    uint8_t *l_406 = &p_617->g_85;
    uint32_t l_407 = 0x7451FBBCL;
    VECTOR(int16_t, 2) l_420 = (VECTOR(int16_t, 2))(0x6FBBL, 0x3E37L);
    int64_t *l_423 = (void*)0;
    int64_t *l_424 = (void*)0;
    int64_t *l_425 = (void*)0;
    int64_t *l_426 = (void*)0;
    int64_t *l_427 = (void*)0;
    int32_t l_428 = 0x6015D54EL;
    uint16_t *l_429 = (void*)0;
    uint16_t *l_430 = &p_617->g_108;
    int16_t *l_431 = &p_617->g_398.f3.f4;
    int32_t *l_432[10][1] = {{&p_617->g_398.f3.f2},{&p_617->g_398.f3.f2},{&p_617->g_398.f3.f2},{&p_617->g_398.f3.f2},{&p_617->g_398.f3.f2},{&p_617->g_398.f3.f2},{&p_617->g_398.f3.f2},{&p_617->g_398.f3.f2},{&p_617->g_398.f3.f2},{&p_617->g_398.f3.f2}};
    int32_t **l_433[10][4] = {{&p_617->g_331,&l_432[6][0],(void*)0,(void*)0},{&p_617->g_331,&l_432[6][0],(void*)0,(void*)0},{&p_617->g_331,&l_432[6][0],(void*)0,(void*)0},{&p_617->g_331,&l_432[6][0],(void*)0,(void*)0},{&p_617->g_331,&l_432[6][0],(void*)0,(void*)0},{&p_617->g_331,&l_432[6][0],(void*)0,(void*)0},{&p_617->g_331,&l_432[6][0],(void*)0,(void*)0},{&p_617->g_331,&l_432[6][0],(void*)0,(void*)0},{&p_617->g_331,&l_432[6][0],(void*)0,(void*)0},{&p_617->g_331,&l_432[6][0],(void*)0,(void*)0}};
    int i, j;
    p_617->g_397 = l_394;
    p_617->g_304[0][5][0].f7 &= (safe_sub_func_uint16_t_u_u(l_401, ((*l_431) = (((safe_mod_func_uint8_t_u_u(((*l_406) |= ((((VECTOR(int32_t, 16))(l_404.yyyyyxyxxxyyxyyx)).s3 , ((**p_617->g_45) = GROUP_DIVERGE(1, 1))) && ((VECTOR(uint64_t, 4))(l_405.s5753)).y)), p_617->g_275.f2)) , (p_39 && (l_407 != p_38))) == (((((*l_430) &= ((safe_mul_func_uint8_t_u_u((GROUP_DIVERGE(1, 1) ^ (l_428 = (safe_mul_func_uint16_t_u_u(p_38, (p_617->g_398.f3.f6 , (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_617->g_135.z, (safe_mod_func_int64_t_s_s(((((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(1L, 0x47CA7AB0L, (-4L), 0x5B6F11A6L)).xyzxyywzyyxzwzxx, ((VECTOR(int32_t, 2))(0x4AA05EF7L, (-1L))).xyyxyxxxyxxxxyxy))).sc4, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(0x4570L, (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(l_420.yy)).even, (((safe_lshift_func_int8_t_s_s((0L & p_36), 2)) , p_36) , p_617->g_269.s9))), ((VECTOR(int16_t, 2))(0x2FCCL)), ((VECTOR(int16_t, 2))((-4L))), 0x2B3DL, 0x77A5L)).s56, ((VECTOR(uint16_t, 2))(0UL))))).yyxyyyxy, ((VECTOR(int32_t, 8))(6L)), ((VECTOR(int32_t, 8))(5L))))).odd)).even))).lo && p_617->g_395.f5) ^ 18446744073709551611UL), 0x08407C3976243422L)))), l_405.s3))))))), FAKE_DIVERGE(p_617->global_2_offset, get_global_id(2), 10))) != 3UL)) ^ 3L) || p_617->g_395.f6.f2) >= l_404.y)))));
    p_617->g_398.f6 = p_617->g_55;
    p_617->g_331 = &p_617->g_58;
    return l_432[4][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_55.f2 p_617->g_58 p_617->g_6 p_617->g_55.f0 p_617->g_12 p_617->g_46 p_617->g_55.f3 p_617->g_97 p_617->l_comm_values p_617->g_108 p_617->g_55.f1 p_617->g_105 p_617->g_55 p_617->g_135 p_617->g_138 p_617->g_139 p_617->g_85 p_617->g_164 p_617->g_185 p_617->g_193 p_617->g_194 p_617->g_195 p_617->g_45 p_617->g_145 p_617->g_163 p_617->g_222.f4 p_617->g_244 p_617->g_247 p_617->g_comm_values p_617->g_261 p_617->g_269 p_617->g_141 p_617->g_222.f2 p_617->g_222.f1 p_617->g_327 p_617->g_304.f2 p_617->g_288 p_617->g_275.f7 p_617->g_386
 * writes: p_617->g_58 p_617->g_55.f2 p_617->g_6 p_617->g_85 p_617->g_97 p_617->g_105 p_617->g_108 p_617->l_comm_values p_617->g_138 p_617->g_141 p_617->g_145 p_617->g_162 p_617->g_163 p_617->g_195 p_617->g_222.f7 p_617->g_46 p_617->g_327 p_617->g_331 p_617->g_304.f2 p_617->g_275.f2 p_617->g_275.f7 p_617->g_386
 */
struct S1  func_40(int32_t  p_41, uint64_t * p_42, struct S4 * p_617)
{ /* block id: 16 */
    int32_t *l_56 = (void*)0;
    int32_t *l_57 = &p_617->g_58;
    VECTOR(int32_t, 8) l_72 = (VECTOR(int32_t, 8))(0x33997603L, (VECTOR(int32_t, 4))(0x33997603L, (VECTOR(int32_t, 2))(0x33997603L, 0x4A4D9408L), 0x4A4D9408L), 0x4A4D9408L, 0x33997603L, 0x4A4D9408L);
    int8_t l_74[6] = {(-3L),0x2CL,(-3L),(-3L),0x2CL,(-3L)};
    uint16_t *l_116 = (void*)0;
    VECTOR(int32_t, 4) l_208 = (VECTOR(int32_t, 4))(0x379E6733L, (VECTOR(int32_t, 2))(0x379E6733L, 0x1C80D2B8L), 0x1C80D2B8L);
    uint64_t **l_216 = &p_617->g_46;
    VECTOR(int8_t, 16) l_262 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x64L), 0x64L), 0x64L, 8L, 0x64L, (VECTOR(int8_t, 2))(8L, 0x64L), (VECTOR(int8_t, 2))(8L, 0x64L), 8L, 0x64L, 8L, 0x64L);
    VECTOR(int8_t, 8) l_271 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0L), 0L), 0L, 1L, 0L);
    int16_t *l_272 = (void*)0;
    struct S0 *l_274 = &p_617->g_275;
    struct S0 **l_273 = &l_274;
    struct S1 l_276 = {0xC6AE76BEL,0xBD6451CCL,0L,0x1BD4E096BAAEF258L};
    uint16_t l_311 = 0UL;
    int i;
    (*l_57) = (-1L);
    for (p_617->g_55.f2 = 17; (p_617->g_55.f2 != 10); p_617->g_55.f2 = safe_sub_func_uint16_t_u_u(p_617->g_55.f2, 2))
    { /* block id: 20 */
        for (p_617->g_58 = 0; (p_617->g_58 > (-20)); p_617->g_58 = safe_sub_func_int16_t_s_s(p_617->g_58, 6))
        { /* block id: 23 */
            uint16_t l_63 = 0xEE77L;
            if (l_63)
                break;
        }
    }
    if (p_41)
    { /* block id: 27 */
        VECTOR(int32_t, 8) l_73 = (VECTOR(int32_t, 8))(0x5940354EL, (VECTOR(int32_t, 4))(0x5940354EL, (VECTOR(int32_t, 2))(0x5940354EL, 0L), 0L), 0L, 0x5940354EL, 0L);
        uint8_t *l_83 = (void*)0;
        uint8_t *l_84 = &p_617->g_85;
        int64_t *l_86 = (void*)0;
        int64_t *l_87 = (void*)0;
        int64_t *l_88 = (void*)0;
        int64_t *l_89 = (void*)0;
        int64_t *l_90 = (void*)0;
        VECTOR(int32_t, 8) l_91 = (VECTOR(int32_t, 8))(0x3368A3BAL, (VECTOR(int32_t, 4))(0x3368A3BAL, (VECTOR(int32_t, 2))(0x3368A3BAL, 1L), 1L), 1L, 0x3368A3BAL, 1L);
        int32_t *l_92 = (void*)0;
        int32_t l_93 = 0x07F61242L;
        uint32_t *l_96 = &p_617->g_97[2][8][0];
        uint32_t *l_104 = &p_617->g_105;
        uint16_t *l_106 = (void*)0;
        uint16_t *l_107 = &p_617->g_108;
        VECTOR(int8_t, 2) l_197 = (VECTOR(int8_t, 2))(0L, 4L);
        int8_t l_209[5];
        uint64_t **l_215 = &p_617->g_46;
        VECTOR(int16_t, 16) l_249 = (VECTOR(int16_t, 16))(0x6B4FL, (VECTOR(int16_t, 4))(0x6B4FL, (VECTOR(int16_t, 2))(0x6B4FL, 0x0FC7L), 0x0FC7L), 0x0FC7L, 0x6B4FL, 0x0FC7L, (VECTOR(int16_t, 2))(0x6B4FL, 0x0FC7L), (VECTOR(int16_t, 2))(0x6B4FL, 0x0FC7L), 0x6B4FL, 0x0FC7L, 0x6B4FL, 0x0FC7L);
        int64_t l_251 = 0x18F75B0E399F6EB0L;
        int i;
        for (i = 0; i < 5; i++)
            l_209[i] = 0x19L;
        l_93 |= (safe_div_func_int64_t_s_s((l_91.s1 = (safe_mod_func_uint64_t_u_u((l_73.s0 = (safe_div_func_int64_t_s_s(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(0x396C7BFB9E2BF2DCL, 0x368B63C96AADB6CDL, (safe_rshift_func_uint16_t_u_u((((*l_84) = ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 8))(l_72.s70626735)).s55, (int32_t)0x6C5B50A7L))), ((VECTOR(int32_t, 2))(l_73.s75))))).xyyxxxxy)).s2 != (l_74[3] != ((!((*p_617->g_46) = (safe_add_func_uint32_t_u_u(p_41, ((4294967288UL == ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(4294967287UL, 1UL, ((*l_57) | (safe_mul_func_int16_t_s_s((((*p_42) < (*l_57)) && (safe_rshift_func_int8_t_s_u(p_617->g_58, 1))), (safe_add_func_int64_t_s_s(((void*)0 != &p_617->g_46), 3L))))), ((VECTOR(uint32_t, 4))(4294967291UL)), 0x0C3E41A7L)).s05)), ((VECTOR(uint32_t, 2))(0x17F253ABL)), 0x5DB8BE44L, p_41, p_617->g_55.f0, 1UL, ((VECTOR(uint32_t, 2))(0xD4865626L)), p_617->g_12, ((VECTOR(uint32_t, 4))(0x83264324L)), 0xCBC132C9L)).s8) | 0xA06974D82229B2ABL))))) , p_41))) && 4UL)) && p_617->g_55.f3), p_617->g_55.f0)), 1L, ((VECTOR(int64_t, 4))(0x2746A0FEE19A6A96L)), (-9L), 0x184BC67B678304AFL, (-1L), ((VECTOR(int64_t, 4))(0x576C9451C119C8BAL)), (-1L))).s83e2)).y, p_41))), (-1L)))), p_41));
        if ((((*l_57) , (p_617->g_55.f0 && (*l_57))) , (((safe_rshift_func_uint16_t_u_s((((~0x520E29191A0FB345L) , p_617->g_46) != (void*)0), 11)) , ((VECTOR(int32_t, 2))(0x7B7DDE48L, 0L)).lo) , (((((2UL >= (0UL < (p_617->g_85 = (((*l_96)++) > (((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(0x591EL, ((*l_107) = (((((((*l_104) = ((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_617->local_0_offset, get_local_id(0), 10), (((*p_42) , (*l_57)) , p_617->g_6[0]))), p_41)) & p_41)) < p_617->g_12) , p_617->g_55.f3) ^ p_617->l_comm_values[(safe_mod_func_uint32_t_u_u(p_617->tid, 32))]) >= p_617->g_55.f0) <= p_617->g_55.f0)), p_617->g_108, ((VECTOR(uint16_t, 2))(1UL)), ((VECTOR(uint16_t, 4))(0x575AL)), ((VECTOR(uint16_t, 2))(0UL)), p_41, 0x6FDCL, ((VECTOR(uint16_t, 2))(0x4074L)), 0x11E6L)))).hi)).s6 <= (*l_57)))))) || p_41) > 0x27D4L) < p_617->g_58) , p_41))))
        { /* block id: 37 */
            uint16_t l_115 = 65535UL;
            int32_t l_130 = 0x2E0B307BL;
            uint16_t **l_140[1][1];
            uint64_t *l_142 = (void*)0;
            uint64_t *l_143 = (void*)0;
            uint64_t *l_144 = &p_617->g_145;
            int32_t *l_146 = &l_93;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_140[i][j] = (void*)0;
            }
            for (p_617->g_58 = 0; (p_617->g_58 <= 8); p_617->g_58 = safe_add_func_int16_t_s_s(p_617->g_58, 6))
            { /* block id: 40 */
                int8_t *l_121 = &l_74[3];
                int32_t l_122 = 0x76804774L;
                int32_t *l_123 = &l_93;
                (*l_123) |= (safe_lshift_func_uint16_t_u_s((l_122 = (safe_sub_func_int8_t_s_s((~((VECTOR(int8_t, 8))(min(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(4L, ((void*)0 != l_56), (((p_41 > ((((+((((-1L) ^ ((l_115 && (l_116 != &p_617->g_108)) , (safe_lshift_func_uint16_t_u_s((((*l_107) = 0xC287L) == (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x15L, 0x62L)).hi, ((*l_121) = p_617->g_55.f1)))), 11)))) != p_41) , p_617->g_97[6][5][2])) < p_41) , &p_617->g_12) != l_56)) != p_41) ^ l_115), ((VECTOR(int8_t, 2))((-1L))), (-1L), 0x34L, ((VECTOR(int8_t, 2))(0x76L)), (*l_57), 1L, (-8L), p_617->g_105, (-3L), 0x3FL, 0x34L)).s1db1)), ((VECTOR(int8_t, 4))((-8L)))))).zyzwyyxy, ((VECTOR(int8_t, 8))(1L))))).s0), p_617->g_55.f1))), (*l_57)));
            }
            for (l_93 = 7; (l_93 == 21); l_93 = safe_add_func_int8_t_s_s(l_93, 6))
            { /* block id: 48 */
                return p_617->g_55;
            }
            (*l_146) ^= ((FAKE_DIVERGE(p_617->global_1_offset, get_global_id(1), 10) || (p_41 ^ (safe_lshift_func_uint16_t_u_s((safe_div_func_int64_t_s_s(p_617->g_6[0], (l_130 |= (p_617->l_comm_values[(safe_mod_func_uint32_t_u_u(p_617->tid, 32))] = 0x4D05A9BBA2A9BA58L)))), ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))(4L, 0L)).xyxxyxxx, ((VECTOR(int16_t, 16))(((safe_lshift_func_uint16_t_u_u(((p_41 | l_115) , (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(p_617->g_135.yz)).hi, (p_617->g_138[7] |= ((*l_107)--))))), (((*l_84) &= (((*l_144) = (p_617->g_139[2][3] == (p_617->g_141 = p_617->g_139[3][3]))) < (!(0x3C2B81452317F37FL && ((((VECTOR(int32_t, 16))((-7L), 0x74A7D6E7L, 0L, (l_140[0][0] == (void*)0), ((VECTOR(int32_t, 8))(6L)), 0x0F39FE94L, (-1L), 5L, 0x06C09E53L)).sf != 0x15E09DB5L) != (*l_57)))))) >= l_115))) & p_617->g_135.y), ((VECTOR(int16_t, 8))(1L)), ((VECTOR(int16_t, 2))(0x62C9L)), 0x1E99L, ((VECTOR(int16_t, 2))(0L)), 0L, 0x4406L)).hi, ((VECTOR(int16_t, 8))(1L))))).s22, (int16_t)p_617->g_85))).xyyxxxxyyxxyyxyx, ((VECTOR(int16_t, 16))(0x12C9L))))).se7, ((VECTOR(int16_t, 2))(0x46D4L))))).even)))) == (*p_617->g_46));
            return p_617->g_55;
        }
        else
        { /* block id: 60 */
            int8_t *l_161[8][7][4] = {{{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]}},{{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]}},{{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]}},{{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]}},{{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]}},{{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]}},{{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]}},{{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]},{&l_74[3],&l_74[0],(void*)0,&l_74[0]}}};
            int64_t **l_167 = (void*)0;
            int64_t **l_168 = &l_86;
            int32_t l_169[6][6][1] = {{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}},{{1L},{1L},{1L},{1L},{1L},{1L}}};
            int16_t *l_170 = &p_617->g_55.f2;
            int64_t *l_171 = (void*)0;
            int64_t *l_172 = (void*)0;
            int64_t *l_173 = (void*)0;
            int64_t *l_174 = (void*)0;
            int64_t *l_175 = (void*)0;
            uint8_t **l_180 = &l_83;
            uint8_t *l_182[4][8] = {{&p_617->g_85,&p_617->g_85,(void*)0,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,(void*)0},{&p_617->g_85,&p_617->g_85,(void*)0,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,(void*)0},{&p_617->g_85,&p_617->g_85,(void*)0,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,(void*)0},{&p_617->g_85,&p_617->g_85,(void*)0,&p_617->g_85,&p_617->g_85,&p_617->g_85,&p_617->g_85,(void*)0}};
            uint8_t **l_181 = &l_182[1][7];
            uint16_t l_188[5] = {65532UL,65532UL,65532UL,65532UL,65532UL};
            VECTOR(int8_t, 2) l_196 = (VECTOR(int8_t, 2))(8L, 0x1AL);
            VECTOR(int64_t, 4) l_202 = (VECTOR(int64_t, 4))(0x5CC298D8505F07D2L, (VECTOR(int64_t, 2))(0x5CC298D8505F07D2L, 6L), 6L);
            uint64_t *l_207 = &p_617->g_162;
            int32_t l_252 = (-1L);
            int32_t l_253 = 0x05F3FDA1L;
            int i, j, k;
            (*l_57) = ((safe_sub_func_uint16_t_u_u((((p_617->l_comm_values[(safe_mod_func_uint32_t_u_u(p_617->tid, 32))] = (safe_sub_func_int16_t_s_s(((*l_170) ^= (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(p_41, 6)), (l_116 == (void*)0))) , ((--(*l_84)) || p_41)) != ((p_617->g_163 = (p_617->g_162 = p_617->g_12)) , (l_161[4][0][3] == p_617->g_164))) && (safe_div_func_int8_t_s_s((((*l_168) = p_42) == p_617->g_46), p_617->g_6[0]))), l_169[2][3][0])), p_41))), p_41))) || l_169[2][3][0]) || p_41), l_169[2][3][0])) & p_617->g_97[2][8][0]);
            if ((safe_sub_func_uint64_t_u_u((safe_div_func_int8_t_s_s((((((*l_181) = (l_84 = ((*l_180) = (void*)0))) != (p_41 , &p_617->g_85)) > (safe_add_func_int16_t_s_s((p_617->g_135.x && ((VECTOR(int16_t, 16))(p_617->g_185.wzzzyxxxzyxwwyyw)).sc), (safe_rshift_func_uint8_t_u_u((--l_188[3]), ((((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(0xDD58L, 3UL, 7UL, ((VECTOR(uint16_t, 8))(65527UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(hadd(((VECTOR(uint16_t, 4))(0UL, ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(uint16_t, 16))(p_617->g_193.s3671434220142430)).s65, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(p_617->g_194.s85ee)), (uint16_t)(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(p_617->g_195.xx)), ((VECTOR(int8_t, 8))(1L, ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 2))((-6L), (-2L))).xyyy, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))((-2L), ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(l_196.xyyyyyyyyyxyyyxx)).s33, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 4))(l_197.xxyx)).xzxxwxxx, ((VECTOR(int8_t, 4))(p_41, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(1L, p_617->g_138[7], ((VECTOR(int8_t, 8))(0x4AL, ((safe_lshift_func_int8_t_s_u((p_41 & (safe_add_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), ((**p_617->g_45) != ((VECTOR(int64_t, 8))(l_202.wyxzxwzx)).s1)))), 0)) & (+((*l_207) = (safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u(((0x4EC908283C7EF234L && 18446744073709551613UL) <= p_41), p_41)), l_196.y))))), (-9L), ((VECTOR(int8_t, 2))(0x24L)), p_41, 0x06L, 0x50L)), 1L, p_617->g_194.s0, l_208.y, ((VECTOR(int8_t, 2))(0x68L)), 0L)).se42b)).even, ((VECTOR(int8_t, 2))(0x4CL))))), 0x10L)).wyzwyxyz))))).s23))), 1L)).lo, ((VECTOR(int8_t, 2))(0x05L))))).yxxy, ((VECTOR(int8_t, 4))(0x52L))))), l_209[1], 0x6BL, 0x08L)).s03))), ((VECTOR(int8_t, 2))(3L))))), ((VECTOR(int8_t, 2))((-1L)))))).even || p_41)))).lo, ((VECTOR(uint16_t, 2))(0xD901L))))))).yyxy)).zwyxwxxwwxwzzwwy)).s0a))), 65529UL)), ((VECTOR(uint16_t, 4))(0xEBF1L))))).hi)), 0xF79CL, ((VECTOR(uint16_t, 2))(0UL)), 0x70DEL, 0x85FCL)).s7, 0UL, ((VECTOR(uint16_t, 4))(0x461CL)), 4UL, 65530UL, 0xD27FL, 9UL, ((VECTOR(uint16_t, 2))(8UL)), 1UL)).sa, 11)) , p_617->g_145) != p_41) < p_617->g_138[7])))))) , (-8L)), p_617->g_55.f2)), (**p_617->g_45))))
            { /* block id: 73 */
                int16_t l_214[9][2][5] = {{{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L},{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L}},{{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L},{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L}},{{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L},{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L}},{{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L},{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L}},{{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L},{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L}},{{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L},{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L}},{{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L},{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L}},{{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L},{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L}},{{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L},{0x5CD8L,0x775CL,0x020CL,0x02AAL,0L}}};
                uint8_t *l_220[3];
                struct S0 *l_221[6];
                struct S0 **l_223 = &l_221[4];
                VECTOR(uint8_t, 16) l_228 = (VECTOR(uint8_t, 16))(0x06L, (VECTOR(uint8_t, 4))(0x06L, (VECTOR(uint8_t, 2))(0x06L, 248UL), 248UL), 248UL, 0x06L, 248UL, (VECTOR(uint8_t, 2))(0x06L, 248UL), (VECTOR(uint8_t, 2))(0x06L, 248UL), 0x06L, 248UL, 0x06L, 248UL);
                VECTOR(uint64_t, 8) l_231 = (VECTOR(uint64_t, 8))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 8UL), 8UL), 8UL, 18446744073709551608UL, 8UL);
                VECTOR(int16_t, 2) l_242 = (VECTOR(int16_t, 2))(0L, 0x1370L);
                int32_t l_243 = 1L;
                int64_t *l_248 = (void*)0;
                int64_t *l_250[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t *l_254 = (void*)0;
                int32_t *l_255 = (void*)0;
                int32_t *l_256 = &p_617->g_222.f7;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_220[i] = (void*)0;
                for (i = 0; i < 6; i++)
                    l_221[i] = &p_617->g_222;
                (*l_57) ^= ((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(((p_41 , l_107) == (void*)0), l_214[4][1][2])) == 0x1CL), ((l_215 = l_215) != l_216))) > (safe_add_func_uint8_t_u_u(((((((((safe_unary_minus_func_int8_t_s(p_617->g_194.s7)) , l_220[2]) == (void*)0) > p_617->g_108) > (-1L)) ^ l_169[2][3][0]) > p_41) , p_41), p_41)));
                (*l_223) = l_221[4];
                for (p_41 = 0; (p_41 < (-29)); p_41--)
                { /* block id: 79 */
                    if (p_41)
                        break;
                    (*l_57) &= p_617->g_163;
                }
                (*l_256) = (((((safe_div_func_uint16_t_u_u((l_253 = ((((~(((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_228.sffb2)).wywwwxxyxyzxyxzx)).s0 ^ (p_617->g_195.y = (safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(0xDFL, 0xF2L)).odd, 5)))) , (**p_617->g_45)) != (((VECTOR(uint64_t, 8))(l_231.s46273265)).s3 < (safe_mod_func_uint16_t_u_u((l_252 = ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0UL, 0xFBE3L)), l_228.s2, (l_251 = ((safe_mul_func_int16_t_s_s(((0x66FAL != (p_617->g_222.f4 | ((safe_lshift_func_uint16_t_u_s((((void*)0 == &p_617->g_12) || ((l_169[2][3][0] = (safe_sub_func_int64_t_s_s((((safe_div_func_int16_t_s_s((((*l_107) = 0xDDA2L) < ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_242.xy)), (l_243 = 0x4EE3L), ((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(p_617->g_244.s84c0950837f9a2b0)).s2e)).xxyxxyyy)).even, (int16_t)(safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_617->g_247.s66044755)).s40)).xxyxxyxxyyxxxxyx)).hi))).s5, 6)), (int16_t)(((~((*l_57) = p_617->g_comm_values[p_617->tid])) && p_617->g_193.s5) ^ 255UL)))), ((VECTOR(int16_t, 8))(0x59DAL)), 0x6FF5L)))).s39b9, ((VECTOR(int16_t, 4))((-5L)))))).xxxzyzzxxxzwyzzx)).se), FAKE_DIVERGE(p_617->global_2_offset, get_global_id(2), 10))) <= p_41) , l_249.sd), 0x6A7DB87A818BF5C9L))) >= p_617->g_185.x)), 12)) == p_617->g_55.f1))) > p_41), l_228.s9)) > 4UL)), ((VECTOR(uint16_t, 2))(0x3F24L)), 0x7640L, 0xEA74L)))).s7), (-1L)))))) < p_617->g_55.f0) , l_202.w) > 9UL)), p_41)) , l_116) != (void*)0) != p_41) | 8UL);
            }
            else
            { /* block id: 92 */
                VECTOR(int8_t, 16) l_270 = (VECTOR(int8_t, 16))(0x7DL, (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, (-5L)), (-5L)), (-5L), 0x7DL, (-5L), (VECTOR(int8_t, 2))(0x7DL, (-5L)), (VECTOR(int8_t, 2))(0x7DL, (-5L)), 0x7DL, (-5L), 0x7DL, (-5L));
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_617->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 32)), permutations[(safe_mod_func_uint32_t_u_u((0xADBC6D1B6C724B24L ^ ((*l_207) = (safe_add_func_int8_t_s_s(0x59L, (((*l_96) = ((((*l_57) = (0xF1FE23A6L & ((*l_104) = (((*p_617->g_45) = p_42) != p_42)))) < p_617->g_55.f2) , (0xE7BCA048C49F85F0L || (((safe_rshift_func_int8_t_s_u((((+((((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 16))(p_617->g_261.yyzxwxwwzzzyxzwz)).hi, ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 8))(l_262.s5cbe1ca6)).s0250135520335675, ((VECTOR(int8_t, 8))((-4L), 0x1DL, 1L, 2L, 0x50L, ((safe_sub_func_uint16_t_u_u(((((*l_170) &= 0x028FL) , ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))((safe_mul_func_int16_t_s_s(((((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0x72EBL, (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_617->g_269.sa611d425)), ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_270.scd)).yyxx)))))).hi, ((VECTOR(int8_t, 4))(0x17L, ((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_271.s70)).xxyyxyxy)), (int8_t)(~((l_272 = l_116) != p_617->g_141)), (int8_t)p_617->g_222.f2))).s4, 0x13L, 1L)).odd))), 0L, ((VECTOR(int8_t, 4))(0x63L)), 0x2BL)).sd, 0L)), 65535UL, 65535UL)).ywyxyzwxzzwzywxz)).se5ad, (uint16_t)l_169[2][4][0]))).x && l_253) , p_617->l_comm_values[(safe_mod_func_uint32_t_u_u(p_617->tid, 32))]), p_617->g_163)), ((VECTOR(uint8_t, 4))(0xDEL)), 0x26L, ((VECTOR(uint8_t, 2))(0xCFL)), ((VECTOR(uint8_t, 4))(0x72L)), 0UL, p_617->g_269.s6, 249UL, 6UL)).odd)).s7) > p_617->g_6[0]), GROUP_DIVERGE(2, 1))) ^ FAKE_DIVERGE(p_617->global_1_offset, get_global_id(1), 10)), 0x41L, 0x08L)).s7261746442567137, ((VECTOR(int8_t, 16))(0x40L))))).odd))).s14, ((VECTOR(uint8_t, 2))(0x7FL)), ((VECTOR(uint8_t, 2))(0x14L))))).odd , l_273) != (void*)0)) <= 4294967290UL) , p_41), p_617->g_85)) == 0L) || p_41)))) > l_270.s0))))), 10))][(safe_mod_func_uint32_t_u_u(p_617->tid, 32))]));
                return l_276;
            }
            p_41 = p_617->g_222.f1;
        }
    }
    else
    { /* block id: 107 */
        VECTOR(uint64_t, 16) l_290 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL, 0UL, 0UL, 0UL);
        int32_t l_291 = 1L;
        VECTOR(int8_t, 4) l_308 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x12L), 0x12L);
        int32_t l_361[2][4] = {{0x2CB0CD7BL,0x2CB0CD7BL,0x2CB0CD7BL,0x2CB0CD7BL},{0x2CB0CD7BL,0x2CB0CD7BL,0x2CB0CD7BL,0x2CB0CD7BL}};
        struct S1 l_369 = {0xA338B530L,4294967290UL,4L,18446744073709551615UL};
        int32_t *l_371 = (void*)0;
        int32_t *l_389[5][9][4] = {{{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]}},{{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]}},{{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]}},{{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]}},{{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]},{&p_617->g_304[0][5][0].f7,&p_617->g_275.f7,&l_291,&l_361[1][3]}}};
        int32_t l_390 = 0x6705EFF9L;
        uint32_t l_391 = 6UL;
        int i, j, k;
        for (p_617->g_145 = 0; (p_617->g_145 == 41); p_617->g_145++)
        { /* block id: 110 */
            uint64_t l_281 = 18446744073709551615UL;
            uint32_t *l_292[7] = {&p_617->g_105,&p_617->g_105,&p_617->g_105,&p_617->g_105,&p_617->g_105,&p_617->g_105,&p_617->g_105};
            struct S0 *l_303 = &p_617->g_304[0][5][0];
            int16_t *l_310 = &l_276.f2;
            int32_t l_312[2];
            struct S1 l_332[4][8][5] = {{{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}}},{{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}}},{{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}}},{{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}},{{8UL,4294967295UL,0x6133L,1UL},{0xC69DDC86L,8UL,0x43DFL,0x4736130EB746EEE3L},{4294967295UL,0xABA8C76FL,0x2B99L,1UL},{0UL,0xACBB774BL,8L,0xC45A794570CF7D08L},{4294967291UL,4294967289UL,0x1B9DL,0xCF0DB2EAB432D33EL}}}};
            VECTOR(int64_t, 16) l_338 = (VECTOR(int64_t, 16))(0x11C5C265BF0EB845L, (VECTOR(int64_t, 4))(0x11C5C265BF0EB845L, (VECTOR(int64_t, 2))(0x11C5C265BF0EB845L, 5L), 5L), 5L, 0x11C5C265BF0EB845L, 5L, (VECTOR(int64_t, 2))(0x11C5C265BF0EB845L, 5L), (VECTOR(int64_t, 2))(0x11C5C265BF0EB845L, 5L), 0x11C5C265BF0EB845L, 5L, 0x11C5C265BF0EB845L, 5L);
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_312[i] = (-7L);
            if ((safe_add_func_int64_t_s_s(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(0x6C2580E91001C77EL, 0x4D637A361F727BE6L, 0x25BF75F0600A8832L, (((p_41 && (l_281 & ((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s(p_617->g_comm_values[p_617->tid], ((*l_310) |= (safe_sub_func_int64_t_s_s(p_41, ((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),uint64_t,((VECTOR(uint64_t, 2))(min(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),uint64_t,((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(p_617->g_288.zwzy)).wyyywxzy)).s2511324721236033, (uint64_t)((VECTOR(uint64_t, 4))(p_617->g_289.s2242)).y, (uint64_t)((VECTOR(uint64_t, 8))(l_290.s683366ff)).s6))).lo, ((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(((((p_617->g_97[1][8][2]--) , (safe_rshift_func_uint16_t_u_u((1UL | ((safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(((p_617->g_305 = l_303) == (void*)0), ((p_41 > ((safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_308.yxwyxxyz)).s5070677213001603)).se7, ((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 16))(p_617->g_309.s0335151564202475)).s7450, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 16))((((((void*)0 != (*l_273)) <= (*l_57)) , p_41) , 0xEDL), p_617->g_55.f3, 0xEDL, ((VECTOR(uint8_t, 4))(251UL)), ((VECTOR(uint8_t, 2))(0x0DL)), p_41, l_308.x, 0xF9L, ((VECTOR(uint8_t, 2))(1UL)), 0xFFL, 0x90L)).hi, ((VECTOR(uint8_t, 8))(9UL))))))).even))).ywxzyxzx, ((VECTOR(uint8_t, 8))(250UL))))).s26))).yyxyyyyyyxxxxyxx, ((VECTOR(int16_t, 16))(1L))))), ((VECTOR(int16_t, 16))((-1L)))))).s7, 5)) , 0UL)) , 0x27L))), p_41)), p_617->g_261.y)) , p_617->g_304[0][5][0].f1)), 4))) , 0x9EL) < 1L), 1UL, 18446744073709551615UL, ((VECTOR(uint64_t, 2))(1UL)), 0UL, l_281, (**p_617->g_45), (*p_42), (*p_42), 1UL, ((VECTOR(uint64_t, 4))(0x378628B04AB8BC22L)), 0x9D37F6176D4EB450L)).lo)), ((VECTOR(uint64_t, 8))(0x6D7A7EDF8D0564FDL)))))))).s3645620647442107, ((VECTOR(uint64_t, 16))(0x0AFC94C86A309E45L))))).odd)).s20, ((VECTOR(uint64_t, 2))(0x7A92931734457725L))))).xxxy, (uint64_t)(**p_617->g_45), (uint64_t)(*p_617->g_46)))).w))))), p_41)) , 255UL))) || l_311) , p_41), 0x3158B2C43F1A4592L, 0x1A75B88AAE05D80DL, 0x01EF6CB8D0E322CDL, l_312[1], ((VECTOR(int64_t, 8))(0x60478C9F5BE769D0L)))))).s6, (**p_617->g_45))))
            { /* block id: 114 */
                int32_t *l_313 = (void*)0;
                int32_t *l_314 = (void*)0;
                int32_t *l_315 = &p_617->g_58;
                int32_t *l_316 = &l_291;
                int32_t *l_317 = (void*)0;
                int32_t *l_318 = &p_617->g_222.f7;
                int32_t *l_319 = (void*)0;
                int32_t *l_320 = &p_617->g_304[0][5][0].f7;
                int32_t l_321 = (-1L);
                int32_t *l_322 = &l_312[1];
                int32_t *l_323 = (void*)0;
                int32_t *l_324 = &p_617->g_304[0][5][0].f2;
                int32_t *l_325 = &p_617->g_304[0][5][0].f2;
                int32_t *l_326 = &p_617->g_304[0][5][0].f7;
                int32_t **l_330[6][3][3] = {{{&l_322,&l_323,&l_320},{&l_322,&l_323,&l_320},{&l_322,&l_323,&l_320}},{{&l_322,&l_323,&l_320},{&l_322,&l_323,&l_320},{&l_322,&l_323,&l_320}},{{&l_322,&l_323,&l_320},{&l_322,&l_323,&l_320},{&l_322,&l_323,&l_320}},{{&l_322,&l_323,&l_320},{&l_322,&l_323,&l_320},{&l_322,&l_323,&l_320}},{{&l_322,&l_323,&l_320},{&l_322,&l_323,&l_320},{&l_322,&l_323,&l_320}},{{&l_322,&l_323,&l_320},{&l_322,&l_323,&l_320},{&l_322,&l_323,&l_320}}};
                int i, j, k;
                p_617->g_327--;
                p_617->g_331 = &l_321;
                return l_332[3][6][2];
            }
            else
            { /* block id: 118 */
                VECTOR(uint32_t, 8) l_337 = (VECTOR(uint32_t, 8))(0x15C9F554L, (VECTOR(uint32_t, 4))(0x15C9F554L, (VECTOR(uint32_t, 2))(0x15C9F554L, 0x4F01BAD7L), 0x4F01BAD7L), 0x4F01BAD7L, 0x15C9F554L, 0x4F01BAD7L);
                int32_t l_344 = 1L;
                int32_t l_345 = (-8L);
                uint16_t l_362[2];
                int32_t *l_375 = (void*)0;
                int32_t *l_376 = &p_617->g_222.f2;
                int32_t *l_377 = &l_291;
                int32_t *l_378 = &p_617->g_275.f7;
                int32_t *l_379 = &l_291;
                int32_t *l_380 = &l_344;
                int32_t *l_381 = &l_312[1];
                int32_t *l_382 = (void*)0;
                int32_t *l_383 = &p_617->g_304[0][5][0].f7;
                int32_t *l_384 = (void*)0;
                int32_t *l_385[2][10] = {{&l_344,&l_344,&l_344,&l_344,&l_344,&l_344,&l_344,&l_344,&l_344,&l_344},{&l_344,&l_344,&l_344,&l_344,&l_344,&l_344,&l_344,&l_344,&l_344,&l_344}};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_362[i] = 0x912BL;
                if (((void*)0 != l_56))
                { /* block id: 119 */
                    int32_t *l_336 = &p_617->g_304[0][5][0].f2;
                    int32_t *l_355 = (void*)0;
                    int32_t *l_356 = &l_312[1];
                    int32_t *l_357 = &p_617->g_222.f7;
                    int32_t *l_358 = &l_312[1];
                    int32_t *l_359 = &p_617->g_275.f7;
                    int32_t *l_360[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_360[i] = &l_291;
                    for (l_276.f3 = (-25); (l_276.f3 > 37); l_276.f3 = safe_add_func_uint16_t_u_u(l_276.f3, 4))
                    { /* block id: 122 */
                        int32_t **l_335 = &l_57;
                        int64_t *l_339 = (void*)0;
                        int64_t *l_340 = (void*)0;
                        int64_t *l_341 = (void*)0;
                        int64_t *l_342 = (void*)0;
                        int64_t *l_343[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        (*l_335) = (void*)0;
                        (*l_335) = l_336;
                        (*l_336) = (((VECTOR(uint32_t, 4))(l_337.s7060)).y && (((**l_335) == p_617->g_288.y) && (l_345 |= (l_344 = ((VECTOR(int64_t, 16))(l_338.s49fcee9452a1ee54)).s7))));
                    }
                    if ((atomic_inc(&p_617->l_atomic_input[5]) == 8))
                    { /* block id: 130 */
                        int32_t l_347 = (-3L);
                        int32_t *l_346 = &l_347;
                        int32_t *l_348 = &l_347;
                        VECTOR(int16_t, 4) l_349 = (VECTOR(int16_t, 4))(0x3C59L, (VECTOR(int16_t, 2))(0x3C59L, 0x0D6AL), 0x0D6AL);
                        uint16_t l_350 = 0x4105L;
                        int32_t l_351 = 0L;
                        int32_t *l_352 = &l_347;
                        int32_t *l_353 = (void*)0;
                        int32_t *l_354 = &l_347;
                        int i;
                        l_346 = (void*)0;
                        l_348 = (void*)0;
                        l_351 = (l_350 = ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_349.zz)), 0x3E53L, 0x1F46L)), ((VECTOR(uint16_t, 2))(7UL, 65533UL)).yyxy))).z);
                        l_354 = (l_353 = l_352);
                        unsigned int result = 0;
                        result += l_347;
                        result += l_349.w;
                        result += l_349.z;
                        result += l_349.y;
                        result += l_349.x;
                        result += l_350;
                        result += l_351;
                        atomic_add(&p_617->l_special_values[5], result);
                    }
                    else
                    { /* block id: 137 */
                        (1 + 1);
                    }
                    l_362[0]--;
                    for (p_617->g_275.f2 = 0; (p_617->g_275.f2 < (-16)); p_617->g_275.f2 = safe_sub_func_int8_t_s_s(p_617->g_275.f2, 2))
                    { /* block id: 143 */
                        int16_t *l_370 = (void*)0;
                        (*l_359) &= ((*l_357) = ((safe_sub_func_int64_t_s_s(((l_369 , (void*)0) != (p_41 , l_370)), (*p_42))) || GROUP_DIVERGE(2, 1)));
                    }
                }
                else
                { /* block id: 147 */
                    int32_t **l_372 = &p_617->g_331;
                    int i, j;
                    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    p_617->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 32)), permutations[(safe_mod_func_uint32_t_u_u((0x73CE3A36L <= (p_41 ^ p_617->g_58)), 10))][(safe_mod_func_uint32_t_u_u(p_617->tid, 32))]));
                    (*l_372) = l_371;
                    (*l_372) = l_57;
                    for (l_276.f2 = (-12); (l_276.f2 != 5); l_276.f2 = safe_add_func_uint32_t_u_u(l_276.f2, 6))
                    { /* block id: 155 */
                        p_41 = l_332[3][6][2].f3;
                        (*l_372) = &p_617->g_58;
                        (*l_372) = l_57;
                        (*l_372) = &p_41;
                    }
                }
                --p_617->g_386;
            }
        }
        --l_391;
    }
    return l_276;
}


/* ------------------------------------------ */
/* 
 * reads : p_617->g_55
 * writes:
 */
struct S1  func_47(uint64_t ** p_48, uint16_t  p_49, int32_t * p_50, int32_t * p_51, struct S4 * p_617)
{ /* block id: 9 */
    for (p_49 = (-30); (p_49 > 8); p_49 = safe_add_func_uint64_t_u_u(p_49, 9))
    { /* block id: 12 */
        return p_617->g_55;
    }
    return p_617->g_55;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[6];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 6; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[6];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 6; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[32];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 32; i++)
            l_comm_values[i] = 1;
    struct S4 c_618;
    struct S4* p_617 = &c_618;
    struct S4 c_619 = {
        {0x747BB7AB61B583DCL,0x747BB7AB61B583DCL,0x747BB7AB61B583DCL,0x747BB7AB61B583DCL,0x747BB7AB61B583DCL,0x747BB7AB61B583DCL,0x747BB7AB61B583DCL,0x747BB7AB61B583DCL,0x747BB7AB61B583DCL,0x747BB7AB61B583DCL}, // p_617->g_6
        1L, // p_617->g_12
        {255UL}, // p_617->g_18
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), 4294967295UL, 0UL, 4294967295UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 0UL, 4294967295UL, 0UL, 4294967295UL), // p_617->g_21
        &p_617->g_6[3], // p_617->g_46
        &p_617->g_46, // p_617->g_45
        {9UL,0x901672C6L,0x16EAL,0xC28D2166A3C8FCBDL}, // p_617->g_55
        0x428827C8L, // p_617->g_58
        0UL, // p_617->g_85
        {{{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL}},{{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL}},{{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL}},{{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL}},{{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL}},{{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL}},{{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL},{0xF8BD7A0FL,4294967288UL,0xAD3E241DL}}}, // p_617->g_97
        0x9DC94FE3L, // p_617->g_105
        0x5346L, // p_617->g_108
        (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0xFD7AL), 0xFD7AL), // p_617->g_135
        {(-1L),0x2737C25DL,(-2L),0x2737C25DL,(-1L),(-1L),0x2737C25DL,(-2L),0x2737C25DL,(-1L)}, // p_617->g_138
        {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}, // p_617->g_139
        (void*)0, // p_617->g_141
        0UL, // p_617->g_145
        18446744073709551615UL, // p_617->g_162
        1L, // p_617->g_163
        (void*)0, // p_617->g_164
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x0D48L), 0x0D48L), // p_617->g_185
        (VECTOR(uint16_t, 8))(0x0E4EL, (VECTOR(uint16_t, 4))(0x0E4EL, (VECTOR(uint16_t, 2))(0x0E4EL, 0x2CDDL), 0x2CDDL), 0x2CDDL, 0x0E4EL, 0x2CDDL), // p_617->g_193
        (VECTOR(uint16_t, 16))(0xBE7CL, (VECTOR(uint16_t, 4))(0xBE7CL, (VECTOR(uint16_t, 2))(0xBE7CL, 0x56FDL), 0x56FDL), 0x56FDL, 0xBE7CL, 0x56FDL, (VECTOR(uint16_t, 2))(0xBE7CL, 0x56FDL), (VECTOR(uint16_t, 2))(0xBE7CL, 0x56FDL), 0xBE7CL, 0x56FDL, 0xBE7CL, 0x56FDL), // p_617->g_194
        (VECTOR(int8_t, 2))((-3L), 0x04L), // p_617->g_195
        {1L,0UL,7L,0x131245EDL,0x7654L,0UL,0x66749929L,0x31249701L,0L,65530UL}, // p_617->g_222
        (VECTOR(int16_t, 16))(0x16BCL, (VECTOR(int16_t, 4))(0x16BCL, (VECTOR(int16_t, 2))(0x16BCL, 0x0F98L), 0x0F98L), 0x0F98L, 0x16BCL, 0x0F98L, (VECTOR(int16_t, 2))(0x16BCL, 0x0F98L), (VECTOR(int16_t, 2))(0x16BCL, 0x0F98L), 0x16BCL, 0x0F98L, 0x16BCL, 0x0F98L), // p_617->g_244
        (VECTOR(int8_t, 8))(0x45L, (VECTOR(int8_t, 4))(0x45L, (VECTOR(int8_t, 2))(0x45L, 0x53L), 0x53L), 0x53L, 0x45L, 0x53L), // p_617->g_247
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-1L)), (-1L)), // p_617->g_261
        (VECTOR(int8_t, 16))(0x07L, (VECTOR(int8_t, 4))(0x07L, (VECTOR(int8_t, 2))(0x07L, (-7L)), (-7L)), (-7L), 0x07L, (-7L), (VECTOR(int8_t, 2))(0x07L, (-7L)), (VECTOR(int8_t, 2))(0x07L, (-7L)), 0x07L, (-7L), 0x07L, (-7L)), // p_617->g_269
        {-8L,6UL,6L,2L,0x2B14L,0x7242F9507A3DEA62L,0L,-5L,0x62A5CB46L,0UL}, // p_617->g_275
        (VECTOR(uint64_t, 4))(0x6E3EFCD1EFC9F5F1L, (VECTOR(uint64_t, 2))(0x6E3EFCD1EFC9F5F1L, 0x015469C467ECA6EFL), 0x015469C467ECA6EFL), // p_617->g_288
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x1C739BD0C10346A9L), 0x1C739BD0C10346A9L), 0x1C739BD0C10346A9L, 18446744073709551615UL, 0x1C739BD0C10346A9L), // p_617->g_289
        {{{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}}},{{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}}},{{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}}},{{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}}},{{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}}},{{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}}},{{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}}},{{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}}},{{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}}},{{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}},{{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL},{0x751EF829056F2F8CL,18446744073709551606UL,1L,-1L,0x34A3L,0UL,0x0BAE10A6L,1L,0x3C77AE55L,9UL}}}}, // p_617->g_304
        (void*)0, // p_617->g_305
        (VECTOR(uint8_t, 8))(0xA1L, (VECTOR(uint8_t, 4))(0xA1L, (VECTOR(uint8_t, 2))(0xA1L, 0x87L), 0x87L), 0x87L, 0xA1L, 0x87L), // p_617->g_309
        0x2092F1E723DD3CE2L, // p_617->g_327
        (void*)0, // p_617->g_331
        0x9F40F52A489A744BL, // p_617->g_386
        {0x24B0L,18446744073709551611UL,0L,{-1L,0xF71317378FAE77A6L,0x52C1A187L,0L,3L,18446744073709551612UL,0x3FCFBDA3L,-1L,2L,6UL},0x455534D4D6729FBCL,1UL,{4294967295UL,9UL,-1L,1UL},{0x80E244A5L,4294967295UL,0x12ACL,0x36DE1EBE8A96D113L},0UL,-1L}, // p_617->g_395
        {-1L,0x511C42960D6F3714L,-7L,{0x72650B9E25248CC5L,0xFA3DF6B23A2A95BBL,0x362FB341L,0L,0x1F0CL,6UL,-1L,0x15C1C7C0L,0x6BAB74C2L,9UL},0x5FDEE746B67564E9L,18446744073709551608UL,{0x59E105EAL,4294967289UL,6L,0UL},{0UL,4294967295UL,0x1F64L,0x7C42227BBEE8F0B9L},0x706303DBL,0L}, // p_617->g_398
        &p_617->g_398, // p_617->g_397
        0x1C4D9DDAL, // p_617->g_440
        &p_617->g_331, // p_617->g_515
        &p_617->g_222.f2, // p_617->g_516
        {{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}}, // p_617->g_545
        (VECTOR(uint64_t, 4))(0xD7A5DAB99DD17AC7L, (VECTOR(uint64_t, 2))(0xD7A5DAB99DD17AC7L, 0xE6D11CAE4B90FA5CL), 0xE6D11CAE4B90FA5CL), // p_617->g_566
        (VECTOR(int32_t, 8))(0x32F5E306L, (VECTOR(int32_t, 4))(0x32F5E306L, (VECTOR(int32_t, 2))(0x32F5E306L, 1L), 1L), 1L, 0x32F5E306L, 1L), // p_617->g_572
        (VECTOR(uint64_t, 4))(0xED29AA1AF67DAA3DL, (VECTOR(uint64_t, 2))(0xED29AA1AF67DAA3DL, 0xD280320C249C038CL), 0xD280320C249C038CL), // p_617->g_580
        (VECTOR(uint64_t, 2))(18446744073709551611UL, 2UL), // p_617->g_582
        (VECTOR(uint32_t, 4))(3UL, (VECTOR(uint32_t, 2))(3UL, 0UL), 0UL), // p_617->g_598
        &p_617->g_331, // p_617->g_610
        0, // p_617->v_collective
        sequence_input[get_global_id(0)], // p_617->global_0_offset
        sequence_input[get_global_id(1)], // p_617->global_1_offset
        sequence_input[get_global_id(2)], // p_617->global_2_offset
        sequence_input[get_local_id(0)], // p_617->local_0_offset
        sequence_input[get_local_id(1)], // p_617->local_1_offset
        sequence_input[get_local_id(2)], // p_617->local_2_offset
        sequence_input[get_group_id(0)], // p_617->group_0_offset
        sequence_input[get_group_id(1)], // p_617->group_1_offset
        sequence_input[get_group_id(2)], // p_617->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 32)), permutations[0][get_linear_local_id()])), // p_617->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_618 = c_619;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_617);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_617->g_6[i], "p_617->g_6[i]", print_hash_value);

    }
    transparent_crc(p_617->g_12, "p_617->g_12", print_hash_value);
    transparent_crc(p_617->g_18.f0, "p_617->g_18.f0", print_hash_value);
    transparent_crc(p_617->g_21.s0, "p_617->g_21.s0", print_hash_value);
    transparent_crc(p_617->g_21.s1, "p_617->g_21.s1", print_hash_value);
    transparent_crc(p_617->g_21.s2, "p_617->g_21.s2", print_hash_value);
    transparent_crc(p_617->g_21.s3, "p_617->g_21.s3", print_hash_value);
    transparent_crc(p_617->g_21.s4, "p_617->g_21.s4", print_hash_value);
    transparent_crc(p_617->g_21.s5, "p_617->g_21.s5", print_hash_value);
    transparent_crc(p_617->g_21.s6, "p_617->g_21.s6", print_hash_value);
    transparent_crc(p_617->g_21.s7, "p_617->g_21.s7", print_hash_value);
    transparent_crc(p_617->g_21.s8, "p_617->g_21.s8", print_hash_value);
    transparent_crc(p_617->g_21.s9, "p_617->g_21.s9", print_hash_value);
    transparent_crc(p_617->g_21.sa, "p_617->g_21.sa", print_hash_value);
    transparent_crc(p_617->g_21.sb, "p_617->g_21.sb", print_hash_value);
    transparent_crc(p_617->g_21.sc, "p_617->g_21.sc", print_hash_value);
    transparent_crc(p_617->g_21.sd, "p_617->g_21.sd", print_hash_value);
    transparent_crc(p_617->g_21.se, "p_617->g_21.se", print_hash_value);
    transparent_crc(p_617->g_21.sf, "p_617->g_21.sf", print_hash_value);
    transparent_crc(p_617->g_55.f0, "p_617->g_55.f0", print_hash_value);
    transparent_crc(p_617->g_55.f1, "p_617->g_55.f1", print_hash_value);
    transparent_crc(p_617->g_55.f2, "p_617->g_55.f2", print_hash_value);
    transparent_crc(p_617->g_55.f3, "p_617->g_55.f3", print_hash_value);
    transparent_crc(p_617->g_58, "p_617->g_58", print_hash_value);
    transparent_crc(p_617->g_85, "p_617->g_85", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_617->g_97[i][j][k], "p_617->g_97[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_617->g_105, "p_617->g_105", print_hash_value);
    transparent_crc(p_617->g_108, "p_617->g_108", print_hash_value);
    transparent_crc(p_617->g_135.x, "p_617->g_135.x", print_hash_value);
    transparent_crc(p_617->g_135.y, "p_617->g_135.y", print_hash_value);
    transparent_crc(p_617->g_135.z, "p_617->g_135.z", print_hash_value);
    transparent_crc(p_617->g_135.w, "p_617->g_135.w", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_617->g_138[i], "p_617->g_138[i]", print_hash_value);

    }
    transparent_crc(p_617->g_145, "p_617->g_145", print_hash_value);
    transparent_crc(p_617->g_162, "p_617->g_162", print_hash_value);
    transparent_crc(p_617->g_163, "p_617->g_163", print_hash_value);
    transparent_crc(p_617->g_185.x, "p_617->g_185.x", print_hash_value);
    transparent_crc(p_617->g_185.y, "p_617->g_185.y", print_hash_value);
    transparent_crc(p_617->g_185.z, "p_617->g_185.z", print_hash_value);
    transparent_crc(p_617->g_185.w, "p_617->g_185.w", print_hash_value);
    transparent_crc(p_617->g_193.s0, "p_617->g_193.s0", print_hash_value);
    transparent_crc(p_617->g_193.s1, "p_617->g_193.s1", print_hash_value);
    transparent_crc(p_617->g_193.s2, "p_617->g_193.s2", print_hash_value);
    transparent_crc(p_617->g_193.s3, "p_617->g_193.s3", print_hash_value);
    transparent_crc(p_617->g_193.s4, "p_617->g_193.s4", print_hash_value);
    transparent_crc(p_617->g_193.s5, "p_617->g_193.s5", print_hash_value);
    transparent_crc(p_617->g_193.s6, "p_617->g_193.s6", print_hash_value);
    transparent_crc(p_617->g_193.s7, "p_617->g_193.s7", print_hash_value);
    transparent_crc(p_617->g_194.s0, "p_617->g_194.s0", print_hash_value);
    transparent_crc(p_617->g_194.s1, "p_617->g_194.s1", print_hash_value);
    transparent_crc(p_617->g_194.s2, "p_617->g_194.s2", print_hash_value);
    transparent_crc(p_617->g_194.s3, "p_617->g_194.s3", print_hash_value);
    transparent_crc(p_617->g_194.s4, "p_617->g_194.s4", print_hash_value);
    transparent_crc(p_617->g_194.s5, "p_617->g_194.s5", print_hash_value);
    transparent_crc(p_617->g_194.s6, "p_617->g_194.s6", print_hash_value);
    transparent_crc(p_617->g_194.s7, "p_617->g_194.s7", print_hash_value);
    transparent_crc(p_617->g_194.s8, "p_617->g_194.s8", print_hash_value);
    transparent_crc(p_617->g_194.s9, "p_617->g_194.s9", print_hash_value);
    transparent_crc(p_617->g_194.sa, "p_617->g_194.sa", print_hash_value);
    transparent_crc(p_617->g_194.sb, "p_617->g_194.sb", print_hash_value);
    transparent_crc(p_617->g_194.sc, "p_617->g_194.sc", print_hash_value);
    transparent_crc(p_617->g_194.sd, "p_617->g_194.sd", print_hash_value);
    transparent_crc(p_617->g_194.se, "p_617->g_194.se", print_hash_value);
    transparent_crc(p_617->g_194.sf, "p_617->g_194.sf", print_hash_value);
    transparent_crc(p_617->g_195.x, "p_617->g_195.x", print_hash_value);
    transparent_crc(p_617->g_195.y, "p_617->g_195.y", print_hash_value);
    transparent_crc(p_617->g_222.f0, "p_617->g_222.f0", print_hash_value);
    transparent_crc(p_617->g_222.f1, "p_617->g_222.f1", print_hash_value);
    transparent_crc(p_617->g_222.f2, "p_617->g_222.f2", print_hash_value);
    transparent_crc(p_617->g_222.f3, "p_617->g_222.f3", print_hash_value);
    transparent_crc(p_617->g_222.f4, "p_617->g_222.f4", print_hash_value);
    transparent_crc(p_617->g_222.f5, "p_617->g_222.f5", print_hash_value);
    transparent_crc(p_617->g_222.f6, "p_617->g_222.f6", print_hash_value);
    transparent_crc(p_617->g_222.f7, "p_617->g_222.f7", print_hash_value);
    transparent_crc(p_617->g_222.f8, "p_617->g_222.f8", print_hash_value);
    transparent_crc(p_617->g_222.f9, "p_617->g_222.f9", print_hash_value);
    transparent_crc(p_617->g_244.s0, "p_617->g_244.s0", print_hash_value);
    transparent_crc(p_617->g_244.s1, "p_617->g_244.s1", print_hash_value);
    transparent_crc(p_617->g_244.s2, "p_617->g_244.s2", print_hash_value);
    transparent_crc(p_617->g_244.s3, "p_617->g_244.s3", print_hash_value);
    transparent_crc(p_617->g_244.s4, "p_617->g_244.s4", print_hash_value);
    transparent_crc(p_617->g_244.s5, "p_617->g_244.s5", print_hash_value);
    transparent_crc(p_617->g_244.s6, "p_617->g_244.s6", print_hash_value);
    transparent_crc(p_617->g_244.s7, "p_617->g_244.s7", print_hash_value);
    transparent_crc(p_617->g_244.s8, "p_617->g_244.s8", print_hash_value);
    transparent_crc(p_617->g_244.s9, "p_617->g_244.s9", print_hash_value);
    transparent_crc(p_617->g_244.sa, "p_617->g_244.sa", print_hash_value);
    transparent_crc(p_617->g_244.sb, "p_617->g_244.sb", print_hash_value);
    transparent_crc(p_617->g_244.sc, "p_617->g_244.sc", print_hash_value);
    transparent_crc(p_617->g_244.sd, "p_617->g_244.sd", print_hash_value);
    transparent_crc(p_617->g_244.se, "p_617->g_244.se", print_hash_value);
    transparent_crc(p_617->g_244.sf, "p_617->g_244.sf", print_hash_value);
    transparent_crc(p_617->g_247.s0, "p_617->g_247.s0", print_hash_value);
    transparent_crc(p_617->g_247.s1, "p_617->g_247.s1", print_hash_value);
    transparent_crc(p_617->g_247.s2, "p_617->g_247.s2", print_hash_value);
    transparent_crc(p_617->g_247.s3, "p_617->g_247.s3", print_hash_value);
    transparent_crc(p_617->g_247.s4, "p_617->g_247.s4", print_hash_value);
    transparent_crc(p_617->g_247.s5, "p_617->g_247.s5", print_hash_value);
    transparent_crc(p_617->g_247.s6, "p_617->g_247.s6", print_hash_value);
    transparent_crc(p_617->g_247.s7, "p_617->g_247.s7", print_hash_value);
    transparent_crc(p_617->g_261.x, "p_617->g_261.x", print_hash_value);
    transparent_crc(p_617->g_261.y, "p_617->g_261.y", print_hash_value);
    transparent_crc(p_617->g_261.z, "p_617->g_261.z", print_hash_value);
    transparent_crc(p_617->g_261.w, "p_617->g_261.w", print_hash_value);
    transparent_crc(p_617->g_269.s0, "p_617->g_269.s0", print_hash_value);
    transparent_crc(p_617->g_269.s1, "p_617->g_269.s1", print_hash_value);
    transparent_crc(p_617->g_269.s2, "p_617->g_269.s2", print_hash_value);
    transparent_crc(p_617->g_269.s3, "p_617->g_269.s3", print_hash_value);
    transparent_crc(p_617->g_269.s4, "p_617->g_269.s4", print_hash_value);
    transparent_crc(p_617->g_269.s5, "p_617->g_269.s5", print_hash_value);
    transparent_crc(p_617->g_269.s6, "p_617->g_269.s6", print_hash_value);
    transparent_crc(p_617->g_269.s7, "p_617->g_269.s7", print_hash_value);
    transparent_crc(p_617->g_269.s8, "p_617->g_269.s8", print_hash_value);
    transparent_crc(p_617->g_269.s9, "p_617->g_269.s9", print_hash_value);
    transparent_crc(p_617->g_269.sa, "p_617->g_269.sa", print_hash_value);
    transparent_crc(p_617->g_269.sb, "p_617->g_269.sb", print_hash_value);
    transparent_crc(p_617->g_269.sc, "p_617->g_269.sc", print_hash_value);
    transparent_crc(p_617->g_269.sd, "p_617->g_269.sd", print_hash_value);
    transparent_crc(p_617->g_269.se, "p_617->g_269.se", print_hash_value);
    transparent_crc(p_617->g_269.sf, "p_617->g_269.sf", print_hash_value);
    transparent_crc(p_617->g_275.f0, "p_617->g_275.f0", print_hash_value);
    transparent_crc(p_617->g_275.f1, "p_617->g_275.f1", print_hash_value);
    transparent_crc(p_617->g_275.f2, "p_617->g_275.f2", print_hash_value);
    transparent_crc(p_617->g_275.f3, "p_617->g_275.f3", print_hash_value);
    transparent_crc(p_617->g_275.f4, "p_617->g_275.f4", print_hash_value);
    transparent_crc(p_617->g_275.f5, "p_617->g_275.f5", print_hash_value);
    transparent_crc(p_617->g_275.f6, "p_617->g_275.f6", print_hash_value);
    transparent_crc(p_617->g_275.f7, "p_617->g_275.f7", print_hash_value);
    transparent_crc(p_617->g_275.f8, "p_617->g_275.f8", print_hash_value);
    transparent_crc(p_617->g_275.f9, "p_617->g_275.f9", print_hash_value);
    transparent_crc(p_617->g_288.x, "p_617->g_288.x", print_hash_value);
    transparent_crc(p_617->g_288.y, "p_617->g_288.y", print_hash_value);
    transparent_crc(p_617->g_288.z, "p_617->g_288.z", print_hash_value);
    transparent_crc(p_617->g_288.w, "p_617->g_288.w", print_hash_value);
    transparent_crc(p_617->g_289.s0, "p_617->g_289.s0", print_hash_value);
    transparent_crc(p_617->g_289.s1, "p_617->g_289.s1", print_hash_value);
    transparent_crc(p_617->g_289.s2, "p_617->g_289.s2", print_hash_value);
    transparent_crc(p_617->g_289.s3, "p_617->g_289.s3", print_hash_value);
    transparent_crc(p_617->g_289.s4, "p_617->g_289.s4", print_hash_value);
    transparent_crc(p_617->g_289.s5, "p_617->g_289.s5", print_hash_value);
    transparent_crc(p_617->g_289.s6, "p_617->g_289.s6", print_hash_value);
    transparent_crc(p_617->g_289.s7, "p_617->g_289.s7", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(p_617->g_304[i][j][k].f0, "p_617->g_304[i][j][k].f0", print_hash_value);
                transparent_crc(p_617->g_304[i][j][k].f1, "p_617->g_304[i][j][k].f1", print_hash_value);
                transparent_crc(p_617->g_304[i][j][k].f2, "p_617->g_304[i][j][k].f2", print_hash_value);
                transparent_crc(p_617->g_304[i][j][k].f3, "p_617->g_304[i][j][k].f3", print_hash_value);
                transparent_crc(p_617->g_304[i][j][k].f4, "p_617->g_304[i][j][k].f4", print_hash_value);
                transparent_crc(p_617->g_304[i][j][k].f5, "p_617->g_304[i][j][k].f5", print_hash_value);
                transparent_crc(p_617->g_304[i][j][k].f6, "p_617->g_304[i][j][k].f6", print_hash_value);
                transparent_crc(p_617->g_304[i][j][k].f7, "p_617->g_304[i][j][k].f7", print_hash_value);
                transparent_crc(p_617->g_304[i][j][k].f8, "p_617->g_304[i][j][k].f8", print_hash_value);
                transparent_crc(p_617->g_304[i][j][k].f9, "p_617->g_304[i][j][k].f9", print_hash_value);

            }
        }
    }
    transparent_crc(p_617->g_309.s0, "p_617->g_309.s0", print_hash_value);
    transparent_crc(p_617->g_309.s1, "p_617->g_309.s1", print_hash_value);
    transparent_crc(p_617->g_309.s2, "p_617->g_309.s2", print_hash_value);
    transparent_crc(p_617->g_309.s3, "p_617->g_309.s3", print_hash_value);
    transparent_crc(p_617->g_309.s4, "p_617->g_309.s4", print_hash_value);
    transparent_crc(p_617->g_309.s5, "p_617->g_309.s5", print_hash_value);
    transparent_crc(p_617->g_309.s6, "p_617->g_309.s6", print_hash_value);
    transparent_crc(p_617->g_309.s7, "p_617->g_309.s7", print_hash_value);
    transparent_crc(p_617->g_327, "p_617->g_327", print_hash_value);
    transparent_crc(p_617->g_386, "p_617->g_386", print_hash_value);
    transparent_crc(p_617->g_395.f0, "p_617->g_395.f0", print_hash_value);
    transparent_crc(p_617->g_395.f1, "p_617->g_395.f1", print_hash_value);
    transparent_crc(p_617->g_395.f2, "p_617->g_395.f2", print_hash_value);
    transparent_crc(p_617->g_395.f3.f0, "p_617->g_395.f3.f0", print_hash_value);
    transparent_crc(p_617->g_395.f3.f1, "p_617->g_395.f3.f1", print_hash_value);
    transparent_crc(p_617->g_395.f3.f2, "p_617->g_395.f3.f2", print_hash_value);
    transparent_crc(p_617->g_395.f3.f3, "p_617->g_395.f3.f3", print_hash_value);
    transparent_crc(p_617->g_395.f3.f4, "p_617->g_395.f3.f4", print_hash_value);
    transparent_crc(p_617->g_395.f3.f5, "p_617->g_395.f3.f5", print_hash_value);
    transparent_crc(p_617->g_395.f3.f6, "p_617->g_395.f3.f6", print_hash_value);
    transparent_crc(p_617->g_395.f3.f7, "p_617->g_395.f3.f7", print_hash_value);
    transparent_crc(p_617->g_395.f3.f8, "p_617->g_395.f3.f8", print_hash_value);
    transparent_crc(p_617->g_395.f3.f9, "p_617->g_395.f3.f9", print_hash_value);
    transparent_crc(p_617->g_395.f4, "p_617->g_395.f4", print_hash_value);
    transparent_crc(p_617->g_395.f5, "p_617->g_395.f5", print_hash_value);
    transparent_crc(p_617->g_395.f6.f0, "p_617->g_395.f6.f0", print_hash_value);
    transparent_crc(p_617->g_395.f6.f1, "p_617->g_395.f6.f1", print_hash_value);
    transparent_crc(p_617->g_395.f6.f2, "p_617->g_395.f6.f2", print_hash_value);
    transparent_crc(p_617->g_395.f6.f3, "p_617->g_395.f6.f3", print_hash_value);
    transparent_crc(p_617->g_395.f7.f0, "p_617->g_395.f7.f0", print_hash_value);
    transparent_crc(p_617->g_395.f7.f1, "p_617->g_395.f7.f1", print_hash_value);
    transparent_crc(p_617->g_395.f7.f2, "p_617->g_395.f7.f2", print_hash_value);
    transparent_crc(p_617->g_395.f7.f3, "p_617->g_395.f7.f3", print_hash_value);
    transparent_crc(p_617->g_395.f8, "p_617->g_395.f8", print_hash_value);
    transparent_crc(p_617->g_395.f9, "p_617->g_395.f9", print_hash_value);
    transparent_crc(p_617->g_398.f0, "p_617->g_398.f0", print_hash_value);
    transparent_crc(p_617->g_398.f1, "p_617->g_398.f1", print_hash_value);
    transparent_crc(p_617->g_398.f2, "p_617->g_398.f2", print_hash_value);
    transparent_crc(p_617->g_398.f3.f0, "p_617->g_398.f3.f0", print_hash_value);
    transparent_crc(p_617->g_398.f3.f1, "p_617->g_398.f3.f1", print_hash_value);
    transparent_crc(p_617->g_398.f3.f2, "p_617->g_398.f3.f2", print_hash_value);
    transparent_crc(p_617->g_398.f3.f3, "p_617->g_398.f3.f3", print_hash_value);
    transparent_crc(p_617->g_398.f3.f4, "p_617->g_398.f3.f4", print_hash_value);
    transparent_crc(p_617->g_398.f3.f5, "p_617->g_398.f3.f5", print_hash_value);
    transparent_crc(p_617->g_398.f3.f6, "p_617->g_398.f3.f6", print_hash_value);
    transparent_crc(p_617->g_398.f3.f7, "p_617->g_398.f3.f7", print_hash_value);
    transparent_crc(p_617->g_398.f3.f8, "p_617->g_398.f3.f8", print_hash_value);
    transparent_crc(p_617->g_398.f3.f9, "p_617->g_398.f3.f9", print_hash_value);
    transparent_crc(p_617->g_398.f4, "p_617->g_398.f4", print_hash_value);
    transparent_crc(p_617->g_398.f5, "p_617->g_398.f5", print_hash_value);
    transparent_crc(p_617->g_398.f6.f0, "p_617->g_398.f6.f0", print_hash_value);
    transparent_crc(p_617->g_398.f6.f1, "p_617->g_398.f6.f1", print_hash_value);
    transparent_crc(p_617->g_398.f6.f2, "p_617->g_398.f6.f2", print_hash_value);
    transparent_crc(p_617->g_398.f6.f3, "p_617->g_398.f6.f3", print_hash_value);
    transparent_crc(p_617->g_398.f7.f0, "p_617->g_398.f7.f0", print_hash_value);
    transparent_crc(p_617->g_398.f7.f1, "p_617->g_398.f7.f1", print_hash_value);
    transparent_crc(p_617->g_398.f7.f2, "p_617->g_398.f7.f2", print_hash_value);
    transparent_crc(p_617->g_398.f7.f3, "p_617->g_398.f7.f3", print_hash_value);
    transparent_crc(p_617->g_398.f8, "p_617->g_398.f8", print_hash_value);
    transparent_crc(p_617->g_398.f9, "p_617->g_398.f9", print_hash_value);
    transparent_crc(p_617->g_440, "p_617->g_440", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_617->g_545[i][j], "p_617->g_545[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_617->g_566.x, "p_617->g_566.x", print_hash_value);
    transparent_crc(p_617->g_566.y, "p_617->g_566.y", print_hash_value);
    transparent_crc(p_617->g_566.z, "p_617->g_566.z", print_hash_value);
    transparent_crc(p_617->g_566.w, "p_617->g_566.w", print_hash_value);
    transparent_crc(p_617->g_572.s0, "p_617->g_572.s0", print_hash_value);
    transparent_crc(p_617->g_572.s1, "p_617->g_572.s1", print_hash_value);
    transparent_crc(p_617->g_572.s2, "p_617->g_572.s2", print_hash_value);
    transparent_crc(p_617->g_572.s3, "p_617->g_572.s3", print_hash_value);
    transparent_crc(p_617->g_572.s4, "p_617->g_572.s4", print_hash_value);
    transparent_crc(p_617->g_572.s5, "p_617->g_572.s5", print_hash_value);
    transparent_crc(p_617->g_572.s6, "p_617->g_572.s6", print_hash_value);
    transparent_crc(p_617->g_572.s7, "p_617->g_572.s7", print_hash_value);
    transparent_crc(p_617->g_580.x, "p_617->g_580.x", print_hash_value);
    transparent_crc(p_617->g_580.y, "p_617->g_580.y", print_hash_value);
    transparent_crc(p_617->g_580.z, "p_617->g_580.z", print_hash_value);
    transparent_crc(p_617->g_580.w, "p_617->g_580.w", print_hash_value);
    transparent_crc(p_617->g_582.x, "p_617->g_582.x", print_hash_value);
    transparent_crc(p_617->g_582.y, "p_617->g_582.y", print_hash_value);
    transparent_crc(p_617->g_598.x, "p_617->g_598.x", print_hash_value);
    transparent_crc(p_617->g_598.y, "p_617->g_598.y", print_hash_value);
    transparent_crc(p_617->g_598.z, "p_617->g_598.z", print_hash_value);
    transparent_crc(p_617->g_598.w, "p_617->g_598.w", print_hash_value);
    transparent_crc(p_617->v_collective, "p_617->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 6; i++)
            transparent_crc(p_617->g_special_values[i + 6 * get_linear_group_id()], "p_617->g_special_values[i + 6 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 6; i++)
            transparent_crc(p_617->l_special_values[i], "p_617->l_special_values[i]", print_hash_value);
    transparent_crc(p_617->l_comm_values[get_linear_local_id()], "p_617->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_617->g_comm_values[get_linear_group_id() * 32 + get_linear_local_id()], "p_617->g_comm_values[get_linear_group_id() * 32 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
