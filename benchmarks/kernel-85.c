// --atomics 15 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 47,89,1 -l 47,1,1
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

__constant uint32_t permutations[10][47] = {
{8,45,25,34,38,22,9,27,24,16,39,36,10,44,40,2,1,28,46,7,5,14,20,6,23,13,26,32,33,21,41,30,19,35,18,43,31,15,0,12,3,29,17,11,37,42,4}, // permutation 0
{8,11,42,41,45,25,26,28,30,6,22,20,16,46,7,3,27,0,31,32,19,37,44,2,17,39,35,15,13,33,38,23,14,5,1,12,4,43,40,10,18,36,34,29,9,21,24}, // permutation 1
{45,19,14,0,31,33,7,5,2,21,15,36,12,27,46,25,1,18,39,13,26,29,28,17,38,35,6,8,3,37,4,20,24,40,16,30,41,10,11,22,42,34,44,9,32,43,23}, // permutation 2
{12,6,9,44,5,39,36,24,37,43,15,40,46,23,41,27,4,20,33,17,11,0,22,34,14,21,16,31,28,42,29,26,32,7,10,13,25,19,18,30,8,45,2,3,1,35,38}, // permutation 3
{30,15,42,21,22,36,23,7,37,17,19,13,29,39,3,45,20,25,12,38,8,28,4,6,34,35,18,2,10,9,5,31,44,27,14,1,33,43,24,11,40,46,26,0,32,41,16}, // permutation 4
{44,28,45,14,9,29,7,11,24,16,32,40,23,15,31,19,18,8,35,39,38,43,0,2,26,13,5,36,17,33,22,6,42,3,34,10,20,1,37,46,12,4,27,25,21,30,41}, // permutation 5
{5,29,42,23,8,45,3,17,26,0,4,30,19,2,21,41,24,34,9,37,40,10,44,46,7,15,20,13,11,6,35,1,27,31,22,36,25,39,28,12,14,43,38,16,33,32,18}, // permutation 6
{23,43,16,18,24,5,8,36,39,42,29,40,0,27,33,32,6,34,25,7,19,17,10,20,30,11,1,4,45,14,35,12,2,22,9,31,3,21,41,37,15,38,26,46,44,28,13}, // permutation 7
{46,23,2,4,18,45,31,43,3,40,8,41,27,30,29,15,11,1,14,28,12,34,5,10,16,32,25,37,24,38,44,19,13,17,39,22,21,26,35,9,7,20,0,33,42,6,36}, // permutation 8
{39,24,19,18,26,28,34,36,15,23,42,33,20,2,46,44,8,6,45,41,13,27,1,32,43,40,38,10,7,22,35,30,9,37,17,21,12,29,5,16,14,3,25,0,11,31,4} // permutation 9
};

// Seed: 2406359360

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   uint8_t  f1;
   uint32_t  f2;
   uint64_t  f3;
   int64_t  f4;
};

struct S1 {
    int32_t g_23;
    int32_t *g_27;
    int16_t g_29;
    int16_t g_172;
    volatile int32_t * volatile * volatile g_190;
    int16_t g_201;
    int32_t *g_205;
    int32_t ** volatile g_204;
    uint16_t g_207;
    uint64_t g_209;
    int32_t ** volatile g_213;
    int32_t ** volatile g_214;
    volatile VECTOR(uint64_t, 2) g_241;
    int8_t g_243;
    volatile uint16_t g_246;
    int16_t *g_248;
    int16_t **g_247;
    VECTOR(int64_t, 2) g_263;
    volatile VECTOR(int16_t, 16) g_270;
    uint16_t g_279;
    uint64_t *g_288[6][2][2];
    uint32_t g_295;
    volatile VECTOR(int64_t, 8) g_326;
    uint32_t g_337;
    union U0 g_339;
    volatile VECTOR(int16_t, 16) g_359;
    VECTOR(int16_t, 16) g_367;
    int64_t g_380[2];
    int32_t * volatile g_384;
    int32_t * volatile g_385;
    int32_t g_387;
    int32_t * volatile g_386;
    int32_t ** volatile g_406;
    volatile VECTOR(int8_t, 16) g_412;
    volatile uint32_t g_431[9][2][4];
    VECTOR(uint16_t, 2) g_440;
    VECTOR(uint16_t, 16) g_442;
    VECTOR(uint16_t, 2) g_445;
    int32_t g_449;
    uint32_t g_457;
    volatile VECTOR(int16_t, 16) g_484;
    int32_t **g_502[2][3][2];
    int32_t ***g_501;
    volatile VECTOR(uint16_t, 16) g_539;
    int64_t g_542;
    int64_t g_547[6][9];
    uint16_t g_548;
    union U0 *g_567;
    union U0 ** volatile g_566;
    VECTOR(int16_t, 8) g_571;
    VECTOR(int16_t, 4) g_580;
    volatile int32_t g_628;
    volatile VECTOR(int32_t, 4) g_641;
    volatile VECTOR(int32_t, 4) g_665;
    volatile int64_t ** volatile g_675;
    int64_t *g_677;
    int64_t **g_676;
    volatile int64_t g_693[10][7][3];
    volatile int64_t *g_692[2];
    volatile int64_t **g_691;
    volatile VECTOR(uint8_t, 2) g_716;
    VECTOR(uint8_t, 4) g_717;
    uint64_t g_727;
    volatile uint8_t g_732[1][3][5];
    volatile uint8_t *g_731;
    VECTOR(int8_t, 4) g_741;
    VECTOR(int8_t, 8) g_743;
    VECTOR(int8_t, 8) g_746;
    uint16_t g_754[2][7][4];
    VECTOR(int64_t, 2) g_785;
    volatile VECTOR(int8_t, 8) g_805;
    VECTOR(int8_t, 2) g_809;
    volatile VECTOR(int8_t, 16) g_814;
    VECTOR(int8_t, 8) g_815;
    volatile VECTOR(int8_t, 2) g_817;
    VECTOR(int8_t, 16) g_820;
    VECTOR(int32_t, 2) g_839;
    volatile VECTOR(uint32_t, 4) g_844;
    VECTOR(int8_t, 2) g_852;
    volatile VECTOR(uint8_t, 4) g_872;
    int32_t g_895[5];
    int32_t ** volatile g_899;
    int32_t ** volatile g_924;
    uint32_t g_966;
    int32_t ** volatile g_982[6];
    int32_t ** volatile g_983;
    VECTOR(uint8_t, 2) g_995;
    int64_t g_1046;
    int32_t **g_1092[8][8][3];
    int32_t ** volatile g_1155;
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
uint64_t  func_1(struct S1 * p_1157);
int32_t * func_2(int64_t  p_3, uint64_t  p_4, uint32_t  p_5, struct S1 * p_1157);
union U0  func_11(int8_t  p_12, struct S1 * p_1157);
uint8_t  func_15(int32_t  p_16, int32_t * p_17, int32_t * p_18, int16_t  p_19, struct S1 * p_1157);
int32_t * func_20(int16_t  p_21, struct S1 * p_1157);
int32_t ** func_154(int32_t * p_155, int32_t  p_156, uint32_t  p_157, uint32_t  p_158, struct S1 * p_1157);
int32_t * func_159(int16_t  p_160, int32_t * p_161, struct S1 * p_1157);
int32_t ** func_167(uint32_t  p_168, int16_t ** p_169, struct S1 * p_1157);
int32_t * func_176(int8_t  p_177, int32_t ** p_178, int16_t ** p_179, struct S1 * p_1157);
uint16_t  func_182(int16_t * p_183, uint64_t  p_184, int32_t ** p_185, uint32_t  p_186, uint64_t  p_187, struct S1 * p_1157);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1157->l_comm_values p_1157->g_comm_values p_1157->g_23 p_1157->g_190 p_1157->g_172 p_1157->g_204 p_1157->g_201 p_1157->g_213 p_1157->g_205 p_1157->g_214 p_1157->g_209 p_1157->g_241 p_1157->g_207 p_1157->g_246 p_1157->g_247 p_1157->g_248 p_1157->g_263 p_1157->g_270 p_1157->g_279 p_1157->g_243 p_1157->g_337 p_1157->g_339 p_1157->g_359 p_1157->g_367 p_1157->g_326 p_1157->g_386 p_1157->g_406 p_1157->g_412 p_1157->g_431 p_1157->g_501 p_1157->g_502 p_1157->g_440 p_1157->g_339.f0 p_1157->g_580 p_1157->g_442 p_1157->g_785 p_1157->g_567 p_1157->g_746 p_1157->g_805 p_1157->g_809 p_1157->g_814 p_1157->g_815 p_1157->g_817 p_1157->g_820 p_1157->g_717 p_1157->g_457 p_1157->g_852 p_1157->g_731 p_1157->g_732 p_1157->g_449 p_1157->g_899 p_1157->g_754 p_1157->g_29 p_1157->g_844 p_1157->g_571 p_1157->g_966 p_1157->g_27 p_1157->g_983 p_1157->g_387 p_1157->g_995 p_1157->g_691 p_1157->g_692 p_1157->g_1046 p_1157->g_741 p_1157->g_539 p_1157->g_547 p_1157->g_1155
 * writes: p_1157->g_27 p_1157->g_29 p_1157->g_23 p_1157->g_201 p_1157->g_205 p_1157->g_207 p_1157->g_209 p_1157->g_172 p_1157->g_243 p_1157->g_279 p_1157->g_288 p_1157->g_248 p_1157->g_295 p_1157->g_337 p_1157->g_263 p_1157->g_380 p_1157->g_387 p_1157->g_247 p_1157->g_431 p_1157->g_339.f0 p_1157->g_502 p_1157->g_440 p_1157->g_339 p_1157->g_457 p_1157->g_449 p_1157->g_547 p_1157->g_966 p_1157->g_542 p_1157->g_820 p_1157->g_1092 p_1157->g_754 p_1157->g_815 p_1157->g_717 p_1157->g_995
 */
uint64_t  func_1(struct S1 * p_1157)
{ /* block id: 4 */
    uint8_t l_6 = 0x1DL;
    int32_t *l_24 = &p_1157->g_23;
    int32_t *l_25[3][2] = {{&p_1157->g_23,&p_1157->g_23},{&p_1157->g_23,&p_1157->g_23},{&p_1157->g_23,&p_1157->g_23}};
    int32_t **l_26[6][10] = {{&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0]},{&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0]},{&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0]},{&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0]},{&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0]},{&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0],&l_25[0][0]}};
    int16_t *l_28 = &p_1157->g_29;
    int32_t **l_153 = &l_25[0][1];
    int8_t *l_757 = &p_1157->g_243;
    uint8_t l_800 = 0x51L;
    int16_t l_801 = 0x54E9L;
    int64_t l_802 = 1L;
    int i, j;
    (*p_1157->g_406) = func_2(l_6, (safe_add_func_int8_t_s_s((safe_add_func_int64_t_s_s((((*p_1157->g_567) = func_11(((*l_757) = ((safe_mod_func_int32_t_s_s(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(0L, 0x177A1245L, 0x100C4307L, 0x290611BCL)), ((VECTOR(int32_t, 16))((p_1157->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1157->tid, 47))] && ((func_15(p_1157->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1157->tid, 47))], (l_24 = func_20(p_1157->g_comm_values[p_1157->tid], p_1157)), (p_1157->g_27 = l_25[0][1]), ((*l_28) = ((VECTOR(int16_t, 2))(0x7990L, (-1L))).hi), p_1157) < (l_153 != ((*p_1157->g_501) = func_154(func_159(p_1157->g_comm_values[p_1157->tid], &p_1157->g_23, p_1157), p_1157->g_440.y, p_1157->g_339.f0, p_1157->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1157->tid, 47))], p_1157)))) , (**l_153))), ((VECTOR(int32_t, 8))(1L)), 3L, (-5L), 0x23BB0537L, ((VECTOR(int32_t, 2))(0x07F642E5L)), 0x1A0EBAF7L, 0x3CC07271L)).sbe6b))).wyxyzxzxxzyyyxzy)).s1e)).xyyxxyyxxxxyyxxy)), (int32_t)0x5D303A74L))).s1, p_1157->g_580.x)) <= p_1157->g_367.sf)), p_1157)) , l_800), p_1157->g_746.s6)), l_801)), l_802, p_1157);
    return p_1157->g_817.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1157->g_248 p_1157->g_172 p_1157->g_805 p_1157->g_809 p_1157->g_814 p_1157->g_815 p_1157->g_817 p_1157->g_820 p_1157->g_717 p_1157->g_457 p_1157->g_213 p_1157->g_852 p_1157->g_442 p_1157->g_785 p_1157->g_731 p_1157->g_732 p_1157->g_247 p_1157->g_449 p_1157->g_899 p_1157->g_205 p_1157->g_754 p_1157->g_23 p_1157->g_29 p_1157->g_844 p_1157->g_571 p_1157->g_966 p_1157->g_263 p_1157->g_27 p_1157->g_201 p_1157->g_204 p_1157->g_983 p_1157->g_386 p_1157->g_387 p_1157->g_995 p_1157->g_567 p_1157->g_339 p_1157->g_691 p_1157->g_692 p_1157->g_241 p_1157->g_1046 p_1157->g_741 p_1157->g_501 p_1157->g_502 p_1157->g_539 p_1157->g_746 p_1157->g_547 p_1157->g_1155
 * writes: p_1157->g_457 p_1157->g_205 p_1157->g_172 p_1157->g_440 p_1157->g_449 p_1157->g_27 p_1157->g_23 p_1157->g_547 p_1157->g_279 p_1157->g_966 p_1157->g_542 p_1157->g_207 p_1157->g_29 p_1157->g_387 p_1157->g_820 p_1157->g_339 p_1157->g_1092 p_1157->g_754 p_1157->g_815 p_1157->g_717 p_1157->g_995
 */
int32_t * func_2(int64_t  p_3, uint64_t  p_4, uint32_t  p_5, struct S1 * p_1157)
{ /* block id: 369 */
    VECTOR(int8_t, 8) l_806 = (VECTOR(int8_t, 8))(0x41L, (VECTOR(int8_t, 4))(0x41L, (VECTOR(int8_t, 2))(0x41L, 0x09L), 0x09L), 0x09L, 0x41L, 0x09L);
    VECTOR(int8_t, 4) l_807 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x27L), 0x27L);
    VECTOR(int8_t, 8) l_808 = (VECTOR(int8_t, 8))(0x1EL, (VECTOR(int8_t, 4))(0x1EL, (VECTOR(int8_t, 2))(0x1EL, 0L), 0L), 0L, 0x1EL, 0L);
    VECTOR(int8_t, 2) l_813 = (VECTOR(int8_t, 2))(0L, (-1L));
    VECTOR(int8_t, 16) l_816 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int8_t, 2))(1L, (-1L)), (VECTOR(int8_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L));
    VECTOR(int8_t, 4) l_818 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-4L)), (-4L));
    VECTOR(int8_t, 4) l_819 = (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x0DL), 0x0DL);
    int32_t l_821 = 6L;
    VECTOR(int32_t, 2) l_822 = (VECTOR(int32_t, 2))(8L, 0L);
    int64_t l_864[6][2] = {{0x5EE21071C838518DL,0x5EE21071C838518DL},{0x5EE21071C838518DL,0x5EE21071C838518DL},{0x5EE21071C838518DL,0x5EE21071C838518DL},{0x5EE21071C838518DL,0x5EE21071C838518DL},{0x5EE21071C838518DL,0x5EE21071C838518DL},{0x5EE21071C838518DL,0x5EE21071C838518DL}};
    uint8_t l_874 = 1UL;
    VECTOR(uint16_t, 4) l_902 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x5275L), 0x5275L);
    int32_t *l_926 = &p_1157->g_23;
    int32_t l_986 = (-2L);
    VECTOR(int16_t, 2) l_999 = (VECTOR(int16_t, 2))(0x614FL, 0x1216L);
    union U0 l_1000 = {0x8B932BB6L};
    uint8_t *l_1018 = (void*)0;
    uint32_t l_1023 = 0x78862833L;
    VECTOR(uint8_t, 4) l_1076 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x84L), 0x84L);
    VECTOR(uint8_t, 4) l_1110 = (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0x9CL), 0x9CL);
    VECTOR(int16_t, 4) l_1123 = (VECTOR(int16_t, 4))(0x4B4DL, (VECTOR(int16_t, 2))(0x4B4DL, 8L), 8L);
    int64_t ***l_1130 = &p_1157->g_676;
    int16_t *l_1149 = (void*)0;
    int32_t *l_1153 = &p_1157->g_23;
    uint32_t l_1154 = 0xCCF783A6L;
    int32_t *l_1156 = (void*)0;
    int i, j;
    l_821 ^= ((*p_1157->g_248) ^ (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(p_1157->g_805.s23753722)).odd, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 2))(l_806.s03)).xxxx, ((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(l_807.xy)), ((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(l_808.s3155)).xwyywxzzyyxwxxyw, (int8_t)l_808.s7))).s5f))).xxxx))).hi)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(hadd(((VECTOR(int8_t, 2))(p_1157->g_809.yx)).xyyxxyyy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 2))(4L, (-2L))).xyyy, ((VECTOR(int8_t, 8))(0x20L, (safe_unary_minus_func_int16_t_s(l_808.s6)), (-6L), 0x05L, ((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(((p_3 <= (safe_sub_func_int64_t_s_s((p_3 , l_808.s2), FAKE_DIVERGE(p_1157->group_1_offset, get_group_id(1), 10)))) | 0xC887L), ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(l_813.xxxy)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(p_1157->g_814.s8d)).yxxyxxyxxyyxxyyx)).sebde))).xyywwzzx, ((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(p_1157->g_815.s5733406771110663)).sd9, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(l_816.s395d81a278d3b24a)).sb3, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 4))(p_1157->g_817.xyyx)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_818.wyww))))))).wwyywxzw)).s53, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(l_819.yw)).yxyyxyxy)).s7540011656123130, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_1157->g_820.s20a02dfa)))), 0x23L, p_1157->g_717.z, p_4, 0x17L, ((VECTOR(int8_t, 4))(0x2FL)))).sa257)).yzzyzxywxzzxzxyy))).sd895))).xwywyyyzwxxwzxzw, ((VECTOR(int8_t, 16))(6L))))).s3db1)).lo))))), 1L, 0x28L)).odd))).yxxyyxxy, ((VECTOR(int8_t, 8))(0x69L))))), ((VECTOR(int8_t, 8))(0x6CL)), ((VECTOR(int8_t, 8))(3L))))), ((VECTOR(int8_t, 2))(0x79L)), l_818.z, ((VECTOR(int8_t, 4))((-8L))))).s50c9, (int8_t)p_4))).even, ((VECTOR(int8_t, 2))(0x3AL))))).hi, (-3L), 0x52L, 0x3AL)).lo))))), 0x51L, (-10L), 0x3FL, l_816.s1, 0x35L, (-10L), (-4L), ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))(1L)), (-1L))).even))).s57))))).xxxx))).z, p_3)));
    if (((VECTOR(int32_t, 4))(l_822.xyxx)).x)
    { /* block id: 371 */
        union U0 *l_829 = &p_1157->g_339;
        int64_t *l_830[3][3][4] = {{{&p_1157->g_547[1][6],&p_1157->g_542,(void*)0,(void*)0},{&p_1157->g_547[1][6],&p_1157->g_542,(void*)0,(void*)0},{&p_1157->g_547[1][6],&p_1157->g_542,(void*)0,(void*)0}},{{&p_1157->g_547[1][6],&p_1157->g_542,(void*)0,(void*)0},{&p_1157->g_547[1][6],&p_1157->g_542,(void*)0,(void*)0},{&p_1157->g_547[1][6],&p_1157->g_542,(void*)0,(void*)0}},{{&p_1157->g_547[1][6],&p_1157->g_542,(void*)0,(void*)0},{&p_1157->g_547[1][6],&p_1157->g_542,(void*)0,(void*)0},{&p_1157->g_547[1][6],&p_1157->g_542,(void*)0,(void*)0}}};
        int32_t l_834 = 0x31632ED4L;
        int i, j, k;
        for (p_1157->g_457 = 15; (p_1157->g_457 >= 22); ++p_1157->g_457)
        { /* block id: 374 */
            uint32_t *l_831 = &p_1157->g_295;
            int32_t l_837 = 0L;
            int32_t l_838 = 4L;
            uint8_t *l_847 = &p_1157->g_339.f1;
            uint8_t *l_848 = &p_1157->g_339.f1;
            uint8_t *l_849 = &p_1157->g_339.f1;
            uint8_t *l_850 = &p_1157->g_339.f1;
            uint8_t *l_851 = &p_1157->g_339.f1;
            (*p_1157->g_213) = ((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 4))(((safe_lshift_func_int8_t_s_s(((l_829 == (void*)0) > (((*p_1157->g_676) = l_830[1][1][3]) != ((p_4 ^ ((VECTOR(int16_t, 4))(((--(*l_831)) >= ((l_834 >= ((safe_add_func_int32_t_s_s(l_837, l_838)) <= ((*p_1157->g_205) &= ((VECTOR(int32_t, 16))(p_1157->g_839.xyxxxxxxyyxxyyxx)).s8))) , (safe_sub_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((((VECTOR(uint32_t, 2))(p_1157->g_844.zw)).lo , (safe_lshift_func_uint8_t_u_u((*p_1157->g_731), ((l_821 |= (!p_1157->g_263.x)) , 0xBFL)))), (*p_1157->g_248))), l_837)))), l_838, 0x5FAFL, 0x3C4EL)).y) , l_830[1][1][3]))), p_1157->g_571.s5)) >= (-2L)), GROUP_DIVERGE(0, 1), 1UL, 4UL)).yzyzzywwxzxxwxzy, (uint16_t)FAKE_DIVERGE(p_1157->global_1_offset, get_global_id(1), 10)))).lo)).s5, (-5L))) , (void*)0);
            l_834 = p_4;
        }
    }
    else
    { /* block id: 382 */
        VECTOR(uint8_t, 2) l_853 = (VECTOR(uint8_t, 2))(0xECL, 0xDDL);
        VECTOR(uint8_t, 2) l_854 = (VECTOR(uint8_t, 2))(0xA3L, 0x00L);
        uint64_t **l_855[1][2];
        uint64_t ***l_856 = &l_855[0][1];
        int32_t *l_857 = &p_1157->g_449;
        VECTOR(int32_t, 16) l_878 = (VECTOR(int32_t, 16))(0x7EC37A97L, (VECTOR(int32_t, 4))(0x7EC37A97L, (VECTOR(int32_t, 2))(0x7EC37A97L, (-4L)), (-4L)), (-4L), 0x7EC37A97L, (-4L), (VECTOR(int32_t, 2))(0x7EC37A97L, (-4L)), (VECTOR(int32_t, 2))(0x7EC37A97L, (-4L)), 0x7EC37A97L, (-4L), 0x7EC37A97L, (-4L));
        int8_t *l_892 = (void*)0;
        VECTOR(uint8_t, 16) l_903 = (VECTOR(uint8_t, 16))(0x21L, (VECTOR(uint8_t, 4))(0x21L, (VECTOR(uint8_t, 2))(0x21L, 0x00L), 0x00L), 0x00L, 0x21L, 0x00L, (VECTOR(uint8_t, 2))(0x21L, 0x00L), (VECTOR(uint8_t, 2))(0x21L, 0x00L), 0x21L, 0x00L, 0x21L, 0x00L);
        VECTOR(uint8_t, 2) l_942 = (VECTOR(uint8_t, 2))(0x51L, 0x02L);
        VECTOR(int16_t, 16) l_943 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int16_t, 2))(0L, 0L), (VECTOR(int16_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
        uint32_t l_948 = 0x2D70718BL;
        uint16_t l_956 = 0UL;
        int32_t l_987 = 0x6CCC14CEL;
        VECTOR(uint8_t, 8) l_996 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL);
        uint32_t l_1008[5] = {0UL,0UL,0UL,0UL,0UL};
        VECTOR(int16_t, 2) l_1034 = (VECTOR(int16_t, 2))(7L, 0x5D66L);
        VECTOR(uint64_t, 4) l_1073 = (VECTOR(uint64_t, 4))(0xD75C6B555639D929L, (VECTOR(uint64_t, 2))(0xD75C6B555639D929L, 0x535E209B160C3B78L), 0x535E209B160C3B78L);
        VECTOR(uint8_t, 2) l_1089 = (VECTOR(uint8_t, 2))(0x88L, 0x55L);
        int8_t l_1105 = 0x37L;
        uint16_t l_1139 = 0xD5E4L;
        int64_t ***l_1140 = (void*)0;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_855[i][j] = &p_1157->g_288[0][0][0];
        }
        if ((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(p_1157->g_852.yxyx)))))).x > ((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 16))(l_853.yxyyxyxxyxxyyyxy)), ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 4))(p_5, ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 4))(0xF5L, 0UL, 1UL, 0x5DL)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))((p_4 , ((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_854.xyxy)).xzzzzyyxzxzxwzwy)).s62fb, (uint8_t)((func_11(p_3, p_1157) , (void*)0) != ((*p_1157->g_731) , ((0UL == ((((*l_856) = l_855[0][0]) != (p_1157->g_820.se , &p_1157->g_288[1][1][1])) , p_4)) , l_857)))))).zxwyzwzx, ((VECTOR(uint8_t, 8))(8UL)), ((VECTOR(uint8_t, 8))(255UL))))).s7), 0x77L, ((VECTOR(uint8_t, 4))(5UL)), ((VECTOR(uint8_t, 4))(4UL)), GROUP_DIVERGE(1, 1), 255UL, 0xF5L, ((VECTOR(uint8_t, 2))(0xD7L)), 255UL)).hi)).odd))).odd, ((VECTOR(uint8_t, 2))(1UL))))), 251UL)).yxwyxwwx, ((VECTOR(uint8_t, 8))(0xCEL))))).s4531323523357211, ((VECTOR(uint8_t, 16))(251UL))))).sd))
        { /* block id: 384 */
            union U0 *l_865 = &p_1157->g_339;
            int32_t l_868 = 0x73172EAEL;
            VECTOR(uint8_t, 16) l_871 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xC1L), 0xC1L), 0xC1L, 255UL, 0xC1L, (VECTOR(uint8_t, 2))(255UL, 0xC1L), (VECTOR(uint8_t, 2))(255UL, 0xC1L), 255UL, 0xC1L, 255UL, 0xC1L);
            int32_t ***l_875 = &p_1157->g_502[0][2][1];
            VECTOR(int32_t, 8) l_880 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x21EBAE4DL), 0x21EBAE4DL), 0x21EBAE4DL, 7L, 0x21EBAE4DL);
            VECTOR(uint8_t, 4) l_946 = (VECTOR(uint8_t, 4))(0xE9L, (VECTOR(uint8_t, 2))(0xE9L, 0x23L), 0x23L);
            uint32_t *l_1003 = &p_1157->g_966;
            int16_t l_1004 = 6L;
            uint8_t *l_1005 = (void*)0;
            uint8_t *l_1006 = (void*)0;
            uint8_t *l_1007[6];
            int32_t *l_1009[7][2] = {{&p_1157->g_387,&p_1157->g_387},{&p_1157->g_387,&p_1157->g_387},{&p_1157->g_387,&p_1157->g_387},{&p_1157->g_387,&p_1157->g_387},{&p_1157->g_387,&p_1157->g_387},{&p_1157->g_387,&p_1157->g_387},{&p_1157->g_387,&p_1157->g_387}};
            int8_t *l_1021[1];
            uint64_t l_1022 = 0x22459947312C506BL;
            int i, j;
            for (i = 0; i < 6; i++)
                l_1007[i] = (void*)0;
            for (i = 0; i < 1; i++)
                l_1021[i] = (void*)0;
            if ((((void*)0 != &p_1157->g_246) & ((GROUP_DIVERGE(2, 1) || ((**p_1157->g_247) = (safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((!(safe_rshift_func_uint16_t_u_s(l_864[3][0], (*p_1157->g_248)))), ((p_1157->g_809.x || p_3) ^ (((void*)0 == l_865) >= ((VECTOR(uint32_t, 4))(0xD26304DCL, p_1157->g_457, 0xF6ACC087L, 3UL)).y)))), GROUP_DIVERGE(2, 1))))) <= p_3)))
            { /* block id: 386 */
                int32_t l_898 = 7L;
                int64_t **l_909 = (void*)0;
                int16_t *l_910 = &p_1157->g_29;
                union U0 l_947[8][1][8] = {{{{0x997669C6L},{5UL},{4294967295UL},{0UL},{5UL},{0UL},{4294967295UL},{5UL}}},{{{0x997669C6L},{5UL},{4294967295UL},{0UL},{5UL},{0UL},{4294967295UL},{5UL}}},{{{0x997669C6L},{5UL},{4294967295UL},{0UL},{5UL},{0UL},{4294967295UL},{5UL}}},{{{0x997669C6L},{5UL},{4294967295UL},{0UL},{5UL},{0UL},{4294967295UL},{5UL}}},{{{0x997669C6L},{5UL},{4294967295UL},{0UL},{5UL},{0UL},{4294967295UL},{5UL}}},{{{0x997669C6L},{5UL},{4294967295UL},{0UL},{5UL},{0UL},{4294967295UL},{5UL}}},{{{0x997669C6L},{5UL},{4294967295UL},{0UL},{5UL},{0UL},{4294967295UL},{5UL}}},{{{0x997669C6L},{5UL},{4294967295UL},{0UL},{5UL},{0UL},{4294967295UL},{5UL}}}};
                int32_t l_953 = 0x7626D9FEL;
                int32_t l_954 = 0L;
                VECTOR(int32_t, 4) l_955 = (VECTOR(int32_t, 4))(0x2CB46E03L, (VECTOR(int32_t, 2))(0x2CB46E03L, 0x470C9364L), 0x470C9364L);
                uint32_t l_959 = 7UL;
                uint16_t l_988 = 9UL;
                int i, j, k;
                if ((safe_mul_func_uint16_t_u_u((l_868 && p_1157->g_785.x), (safe_add_func_uint64_t_u_u(0x1BEAD3E4E7037AD0L, p_5)))))
                { /* block id: 387 */
                    (*l_857) &= (+(&p_1157->g_214 == &p_1157->g_406));
                }
                else
                { /* block id: 389 */
                    VECTOR(int32_t, 8) l_873 = (VECTOR(int32_t, 8))(0x1F306A55L, (VECTOR(int32_t, 4))(0x1F306A55L, (VECTOR(int32_t, 2))(0x1F306A55L, 0x453A09BFL), 0x453A09BFL), 0x453A09BFL, 0x1F306A55L, 0x453A09BFL);
                    VECTOR(int32_t, 16) l_879 = (VECTOR(int32_t, 16))(0x04FDA3DEL, (VECTOR(int32_t, 4))(0x04FDA3DEL, (VECTOR(int32_t, 2))(0x04FDA3DEL, 0x2C75D4F7L), 0x2C75D4F7L), 0x2C75D4F7L, 0x04FDA3DEL, 0x2C75D4F7L, (VECTOR(int32_t, 2))(0x04FDA3DEL, 0x2C75D4F7L), (VECTOR(int32_t, 2))(0x04FDA3DEL, 0x2C75D4F7L), 0x04FDA3DEL, 0x2C75D4F7L, 0x04FDA3DEL, 0x2C75D4F7L);
                    VECTOR(int8_t, 4) l_885 = (VECTOR(int8_t, 4))(0x44L, (VECTOR(int8_t, 2))(0x44L, (-3L)), (-3L));
                    uint16_t *l_890 = &p_1157->g_279;
                    int8_t *l_891 = (void*)0;
                    int32_t *l_893 = (void*)0;
                    int32_t *l_894 = &p_1157->g_895[0];
                    uint8_t *l_896 = (void*)0;
                    uint8_t *l_897[3];
                    int32_t *l_927 = &p_1157->g_23;
                    int32_t *l_928 = (void*)0;
                    uint8_t l_929 = 0x13L;
                    int64_t *l_949 = &p_1157->g_547[5][5];
                    int16_t l_950[8][2] = {{0x2FBAL,4L},{0x2FBAL,4L},{0x2FBAL,4L},{0x2FBAL,4L},{0x2FBAL,4L},{0x2FBAL,4L},{0x2FBAL,4L},{0x2FBAL,4L}};
                    int i, j;
                    for (i = 0; i < 3; i++)
                        l_897[i] = (void*)0;
                    (*p_1157->g_899) = &l_821;
                    for (p_5 = (-13); (p_5 < 6); p_5++)
                    { /* block id: 398 */
                        int64_t **l_906 = (void*)0;
                        VECTOR(uint64_t, 2) l_907 = (VECTOR(uint64_t, 2))(0xC8243200B2448B0EL, 0xDA30F01038A67851L);
                        VECTOR(int8_t, 16) l_908 = (VECTOR(int8_t, 16))(0x5EL, (VECTOR(int8_t, 4))(0x5EL, (VECTOR(int8_t, 2))(0x5EL, (-9L)), (-9L)), (-9L), 0x5EL, (-9L), (VECTOR(int8_t, 2))(0x5EL, (-9L)), (VECTOR(int8_t, 2))(0x5EL, (-9L)), 0x5EL, (-9L), 0x5EL, (-9L));
                        int8_t *l_921 = (void*)0;
                        int8_t *l_922 = (void*)0;
                        int8_t *l_923[5][1];
                        int32_t **l_925 = &p_1157->g_205;
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_923[i][j] = (void*)0;
                        }
                        (*p_1157->g_205) = (((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_902.xywzzzyx)))))).hi, ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 8))((~((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 8))(l_903.s0b633248)).hi, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((l_898 = (safe_sub_func_uint32_t_u_u(((p_1157->g_717.y = (l_906 != (((p_4 < ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_907.xx)).xxyxyxxy)).s2) & ((VECTOR(int8_t, 4))(l_908.s7701)).x) , l_909))) & (((*p_1157->g_247) = l_910) != (void*)0)), (((*p_1157->g_731) >= 1UL) > (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s(0x5487C58CL, (((GROUP_DIVERGE(2, 1) >= p_1157->g_548) ^ p_4) ^ p_1157->g_746.s6))), 1L)) & p_3), p_4)), p_1157->g_820.s6)), p_1157->g_440.x)))))), (-1L), 0x7BL, (-2L))).wwzwwxxw)).s11, ((VECTOR(int8_t, 2))(0x16L)), ((VECTOR(int8_t, 2))(8L))))).yyxyxyyxyxyxxyyy, ((VECTOR(int8_t, 16))(0x17L))))), ((VECTOR(uint8_t, 16))(0UL)), ((VECTOR(uint8_t, 16))(0xDAL))))).hi)).lo))).x), 5UL, 1UL, ((VECTOR(uint8_t, 4))(0x4CL)), 253UL)).s6161566344536433, ((VECTOR(uint8_t, 16))(255UL))))).s263e, ((VECTOR(uint16_t, 4))(0x2C75L))))).x ^ p_3);
                        (*l_925) = (*p_1157->g_213);
                        if (p_5)
                            break;
                        (*l_925) = l_926;
                    }
                    ++l_929;
                    if ((((VECTOR(uint64_t, 2))(8UL, 0x1FF8AE5B606D6D67L)).even , (safe_mul_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((*l_890) = (p_1157->g_754[0][5][2] , ((safe_lshift_func_int16_t_s_u((((l_898 != 1L) || (safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_942.yxyxyxxy)).s3, (((*l_949) = ((((VECTOR(int16_t, 16))(l_943.sa8bf727870d331fa)).sc , ((safe_rshift_func_uint8_t_u_s(((((*l_926) &= ((VECTOR(uint8_t, 2))(l_946.xx)).even) <= ((VECTOR(int8_t, 2))((-1L), 0x5BL)).odd) <= (**p_1157->g_247)), p_1157->g_844.w)) < (*l_857))) < (4294967288UL == (l_947[5][0][3] , (l_948 ^ p_1157->g_571.s6))))) == p_3))) & (*p_1157->g_248)), p_1157->g_571.s0))) , (**p_1157->g_247)), p_4)) , p_3))), p_4)), l_950[0][1]))))
                    { /* block id: 411 */
                        int32_t *l_951 = (void*)0;
                        int32_t *l_952[7];
                        uint64_t l_962 = 0x3A3923CA6232BFADL;
                        int32_t l_965 = 0L;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_952[i] = &p_1157->g_23;
                        l_956--;
                        --l_959;
                        l_962--;
                        ++p_1157->g_966;
                    }
                    else
                    { /* block id: 416 */
                        int64_t *l_976 = (void*)0;
                        int64_t *l_977 = &p_1157->g_542;
                        uint32_t *l_978 = (void*)0;
                        uint32_t *l_979[1][4][1] = {{{&l_948},{&l_948},{&l_948},{&l_948}}};
                        int32_t l_980 = 0x122F8593L;
                        int32_t l_981 = (-10L);
                        int32_t **l_984 = &p_1157->g_205;
                        int32_t *l_985[2][1][10];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 10; k++)
                                    l_985[i][j][k] = (void*)0;
                            }
                        }
                        (*p_1157->g_983) = func_176(p_3, &l_928, (((p_3 < (-1L)) >= (((safe_lshift_func_int16_t_s_s((p_3 < (((safe_mul_func_int8_t_s_s((((((l_980 |= (safe_sub_func_uint64_t_u_u((l_871.sf || ((*l_949) = 0L)), ((*l_977) = (p_1157->g_263.y >= (safe_unary_minus_func_uint32_t_u(p_3))))))) <= (**p_1157->g_899)) , 0UL) >= l_981) <= p_1157->g_852.y), 0x48L)) | (*l_857)) | FAKE_DIVERGE(p_1157->local_0_offset, get_local_id(0), 10))), 14)) , 4L) , l_981)) , (void*)0), p_1157);
                        (*l_984) = &l_953;
                        (*l_927) = (*p_1157->g_386);
                        ++l_988;
                    }
                }
            }
            else
            { /* block id: 426 */
                (*l_857) = (safe_add_func_uint8_t_u_u((*p_1157->g_731), ((*p_1157->g_248) , (-10L))));
            }
            (*p_1157->g_386) |= (safe_div_func_uint8_t_u_u((((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 8))(hadd(((VECTOR(uint8_t, 2))(p_1157->g_995.xx)).yxyxyxyy, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_996.s5606612544762772)).even))))).s0532132726075227, (uint8_t)(safe_mod_func_int16_t_s_s(((*p_1157->g_248) ^= ((((VECTOR(int16_t, 16))(l_999.yxxyxyyyxyxxyyyx)).s1 , p_5) < ((p_4 >= (l_1000 , ((((l_1008[2] = (p_1157->g_820.sb || ((((safe_rshift_func_uint16_t_u_s(FAKE_DIVERGE(p_1157->group_2_offset, get_group_id(2), 10), (((*p_1157->g_567) , (*p_1157->g_691)) != (void*)0))) >= (*l_857)) , ((((~(l_1003 == (void*)0)) < p_4) , (*l_857)) <= 18446744073709551608UL)) , l_1004))) == 1L) != (*l_926)) >= 1UL))) | 0x0399D68AB75ACFF9L))), 65530UL)), (uint8_t)(*l_926)))).even, ((VECTOR(uint8_t, 8))(1UL))))).s01, ((VECTOR(uint8_t, 2))(255UL))))).xyyx, ((VECTOR(uint8_t, 4))(0x34L))))).x != 3L), (*l_926)));
            l_1023 ^= (l_822.x ^= ((safe_mod_func_int32_t_s_s((safe_sub_func_int8_t_s_s((p_1157->g_820.sf ^= (l_1022 = ((*l_926) = (safe_lshift_func_int8_t_s_u(((*l_926) >= ((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 2))(0L, 0L)).lo, (((((*l_926) <= ((((l_1018 = &l_874) == (void*)0) > (safe_rshift_func_uint16_t_u_s((*l_926), 11))) == p_4)) ^ p_4) & FAKE_DIVERGE(p_1157->group_0_offset, get_group_id(0), 10)) && (*l_857)))) > p_3)), 3))))), (*p_1157->g_731))), 0x74382D94L)) && p_5));
            l_857 = &l_821;
        }
        else
        { /* block id: 439 */
            uint32_t *l_1041 = &l_1023;
            int32_t l_1047 = (-1L);
            VECTOR(int32_t, 4) l_1050 = (VECTOR(int32_t, 4))(0x2B30A830L, (VECTOR(int32_t, 2))(0x2B30A830L, 1L), 1L);
            int32_t l_1079 = (-1L);
            int64_t l_1082 = 0x6EAD71C77D8B7FE4L;
            VECTOR(int8_t, 16) l_1142 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-7L)), (-7L)), (-7L), 1L, (-7L), (VECTOR(int8_t, 2))(1L, (-7L)), (VECTOR(int8_t, 2))(1L, (-7L)), 1L, (-7L), 1L, (-7L));
            int32_t *l_1152[7][10] = {{&p_1157->g_449,(void*)0,&l_821,&p_1157->g_387,&l_821,(void*)0,&p_1157->g_449,&p_1157->g_23,&p_1157->g_387,&p_1157->g_449},{&p_1157->g_449,(void*)0,&l_821,&p_1157->g_387,&l_821,(void*)0,&p_1157->g_449,&p_1157->g_23,&p_1157->g_387,&p_1157->g_449},{&p_1157->g_449,(void*)0,&l_821,&p_1157->g_387,&l_821,(void*)0,&p_1157->g_449,&p_1157->g_23,&p_1157->g_387,&p_1157->g_449},{&p_1157->g_449,(void*)0,&l_821,&p_1157->g_387,&l_821,(void*)0,&p_1157->g_449,&p_1157->g_23,&p_1157->g_387,&p_1157->g_449},{&p_1157->g_449,(void*)0,&l_821,&p_1157->g_387,&l_821,(void*)0,&p_1157->g_449,&p_1157->g_23,&p_1157->g_387,&p_1157->g_449},{&p_1157->g_449,(void*)0,&l_821,&p_1157->g_387,&l_821,(void*)0,&p_1157->g_449,&p_1157->g_23,&p_1157->g_387,&p_1157->g_449},{&p_1157->g_449,(void*)0,&l_821,&p_1157->g_387,&l_821,(void*)0,&p_1157->g_449,&p_1157->g_23,&p_1157->g_387,&p_1157->g_449}};
            int i, j;
            l_987 |= (safe_sub_func_int8_t_s_s((safe_div_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_s(9L, (safe_add_func_uint64_t_u_u((((VECTOR(uint32_t, 2))(1UL, 1UL)).odd == ((*l_857) , (**p_1157->g_204))), (((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_1034.xxyxyxxy)).s03)), (-9L), (-10L))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(9L, 0x423CL)), 0x0377L, 0x333AL))))).z ^ 0x527EL))))) , (safe_mod_func_int8_t_s_s((+p_1157->g_241.x), (safe_rshift_func_uint16_t_u_u((((*l_1041) = (safe_rshift_func_int16_t_s_u((*p_1157->g_248), 1))) || (((safe_rshift_func_uint16_t_u_s((p_5 <= (safe_rshift_func_uint8_t_u_u(((p_1157->g_852.y ^ (0xC2L <= p_1157->g_1046)) , p_1157->g_741.x), p_3))), (*l_857))) == p_3) >= l_1047)), 2))))), 4294967295UL)), l_1047)), (*l_857)));
            if ((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1050.zxzy)).wwxyxwxzyxxwyyzy)).sa, (safe_div_func_int8_t_s_s(l_1050.z, p_5)))))
            { /* block id: 442 */
                int8_t l_1080 = 0x73L;
                int16_t *l_1081 = &p_1157->g_29;
                int32_t l_1083 = 0x0C89C896L;
                (*l_926) = (safe_mod_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((l_1083 = ((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((8UL && ((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int16_t_s_u((((safe_mul_func_uint8_t_u_u((*p_1157->g_731), ((safe_add_func_uint64_t_u_u(FAKE_DIVERGE(p_1157->global_2_offset, get_global_id(2), 10), 3L)) < ((((VECTOR(uint64_t, 4))(l_1073.xwxz)).x < p_1157->g_815.s0) != (p_3 < ((((**p_1157->g_247) >= ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(2L, ((-6L) == ((FAKE_DIVERGE(p_1157->group_2_offset, get_group_id(2), 10) , ((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_1076.zy)).xyxy)).yxzzzywyxwyyywyz)).s5, 0)) == ((((*p_1157->g_567) = l_1000) , ((safe_div_func_int16_t_s_s(((*l_1081) = ((VECTOR(int16_t, 8))(1L, (p_5 , l_1079), l_1080, (-9L), 0x4D35L, l_1047, 0x5DF2L, 0L)).s1), l_1080)) > (*l_857))) != 0L))) , (*l_926))), 0x5FD5L, (-1L), l_1079, ((VECTOR(int16_t, 4))(0x10DAL)), ((VECTOR(int16_t, 2))(0x1701L)), ((VECTOR(int16_t, 2))(1L)), (**p_1157->g_247), 0L, (-1L))).s62)).xxyx)), ((VECTOR(int16_t, 4))(0x3FC5L)))).s10, ((VECTOR(int16_t, 2))(0x286BL))))).yyxxxyxy)))).s2) , (*l_857)) && FAKE_DIVERGE(p_1157->group_1_offset, get_group_id(1), 10))))))) , &p_1157->g_677) != &p_1157->g_677), 2)) >= p_3), 6)), 0x15L)) && p_4)) ^ 255UL) == GROUP_DIVERGE(1, 1)), (-1L))), p_4)), l_1082)) >= p_5)), 0UL)), p_5));
                (*l_857) = (-1L);
            }
            else
            { /* block id: 448 */
                uint8_t l_1086 = 0xBFL;
                int32_t **l_1091 = &l_926;
                int32_t ***l_1090[10] = {&l_1091,&l_1091,&l_1091,&l_1091,&l_1091,&l_1091,&l_1091,&l_1091,&l_1091,&l_1091};
                uint16_t *l_1106 = &p_1157->g_754[0][6][3];
                uint16_t *l_1107 = &p_1157->g_207;
                int64_t *l_1113[5][2] = {{&p_1157->g_547[1][6],&p_1157->g_542},{&p_1157->g_547[1][6],&p_1157->g_542},{&p_1157->g_547[1][6],&p_1157->g_542},{&p_1157->g_547[1][6],&p_1157->g_542},{&p_1157->g_547[1][6],&p_1157->g_542}};
                int16_t *l_1118 = (void*)0;
                int16_t *l_1119 = (void*)0;
                int16_t *l_1120 = (void*)0;
                int16_t *l_1121 = (void*)0;
                int16_t *l_1122 = &p_1157->g_29;
                uint8_t *l_1124 = (void*)0;
                uint8_t *l_1125 = &l_1000.f1;
                uint8_t *l_1126 = (void*)0;
                uint8_t *l_1127[3][10][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&l_874,(void*)0,(void*)0,(void*)0}}};
                VECTOR(uint64_t, 8) l_1137 = (VECTOR(uint64_t, 8))(18446744073709551613UL, (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 18446744073709551613UL, 18446744073709551614UL);
                VECTOR(uint64_t, 8) l_1138 = (VECTOR(uint64_t, 8))(8UL, (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 8UL, 18446744073709551615UL);
                uint64_t **l_1141 = &p_1157->g_288[0][1][1];
                int i, j, k;
                (*l_857) |= (safe_sub_func_uint16_t_u_u(l_1086, ((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_1089.yxyxyyxy)).s0, ((*p_1157->g_501) == (p_1157->g_1092[6][3][0] = &l_926)))) > (((*l_1107) = ((*l_1106) &= ((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((p_4 >= 0x1CBB4D4784834C0AL) ^ (safe_mod_func_uint16_t_u_u(((*p_1157->g_386) && ((*l_926) = (!((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(0x4249L, (((0xCD24L && ((-10L) && l_1105)) | (*p_1157->g_248)) || 0x65L))), p_3)) & p_5)))), 0x4C6FL))), 3)), p_1157->g_815.s7)) >= 0x2DAE1B2009036596L))) | p_5))));
                l_1050.x = (0x2F17A94FL != ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_1110.xyyx)).y, (p_1157->g_815.s0 = p_1157->g_571.s2))) > (((safe_mul_func_uint8_t_u_u((((*l_857) = (p_3 == (+l_1050.y))) || (safe_sub_func_uint32_t_u_u(((p_1157->g_717.w = (safe_add_func_int16_t_s_s(((*l_1122) = ((**p_1157->g_247) &= (-6L))), ((**l_1091) = ((VECTOR(int16_t, 16))(l_1123.xyzzyxzxzyxyywxx)).s4)))) && ((((VECTOR(int32_t, 2))((-6L), 1L)).odd , ((--p_1157->g_995.y) , l_1130)) != ((((safe_add_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((((&p_1157->g_732[0][1][3] == l_892) | ((VECTOR(uint64_t, 2))(max(((VECTOR(uint64_t, 16))(mad_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_1137.s76)), 0xF7FB0C8462BFBF08L, 4UL)))).yxwzxzyxxxwwwwwx, ((VECTOR(uint64_t, 2))(l_1138.s63)).yyyyxyyyxyyxyyxy, ((VECTOR(uint64_t, 8))((p_1157->g_539.s2 | p_3), 0x0A64A3FC5CAFD98BL, p_5, 18446744073709551607UL, 1UL, 18446744073709551615UL, 0x960901008D23BD79L, 18446744073709551615UL)).s1111053256345314))).s91, (uint64_t)0x74174F0474E31B8DL))).hi) >= (*l_926)), l_1139)) < p_1157->g_263.y), (**l_1091))) | 0x6CCEL) ^ l_1082), l_1050.z)) | p_5) <= p_1157->g_746.s4) , l_1140))), p_1157->g_547[3][6]))), p_3)) && (*l_857)) & p_5)));
                (*l_857) = p_4;
                (*l_857) &= (l_1141 != (((((VECTOR(int8_t, 16))(l_1142.sd31f9fe14d531142)).s6 | ((0x40325D1CCEB5AE14L <= (2L == (**l_1091))) >= (l_1047 || (((safe_lshift_func_uint16_t_u_u(((*l_1106) = ((((((void*)0 != &l_1086) , ((safe_add_func_int8_t_s_s(((l_1120 = l_1149) == ((((safe_lshift_func_uint8_t_u_u(l_1142.s9, GROUP_DIVERGE(2, 1))) , l_1050.y) || (*l_926)) , l_1149)), (*p_1157->g_731))) >= p_4)) , (*l_926)) , p_4) | 0UL)), FAKE_DIVERGE(p_1157->global_0_offset, get_global_id(0), 10))) , (void*)0) == &l_1008[2])))) , 0xFCB89F0DL) , (*l_856)));
            }
            return l_1153;
        }
    }
    l_1154 |= (*l_926);
    (*p_1157->g_1155) = &l_821;
    return l_1156;
}


/* ------------------------------------------ */
/* 
 * reads : p_1157->g_442 p_1157->g_785 p_1157->g_248 p_1157->g_172
 * writes: p_1157->g_172 p_1157->g_440
 */
union U0  func_11(int8_t  p_12, struct S1 * p_1157)
{ /* block id: 360 */
    uint16_t l_760 = 65535UL;
    VECTOR(int8_t, 2) l_769 = (VECTOR(int8_t, 2))(1L, 0x2CL);
    int32_t l_770 = 0x5FFF34A4L;
    VECTOR(int64_t, 8) l_783 = (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-5L)), (-5L)), (-5L), 1L, (-5L));
    VECTOR(int64_t, 8) l_784 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x70BF8FD6C1162D77L), 0x70BF8FD6C1162D77L), 0x70BF8FD6C1162D77L, (-1L), 0x70BF8FD6C1162D77L);
    VECTOR(uint32_t, 4) l_794 = (VECTOR(uint32_t, 4))(0x019E1108L, (VECTOR(uint32_t, 2))(0x019E1108L, 0x449D0AD7L), 0x449D0AD7L);
    union U0 l_795 = {4294967289UL};
    int8_t *l_796[3][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_797 = 0x7938CE74L;
    int32_t l_798 = 0x0C9D563DL;
    int32_t l_799 = 0x77FF9C09L;
    int i, j;
    l_799 = (safe_lshift_func_uint8_t_u_s(((l_760 &= p_12) , (safe_sub_func_uint32_t_u_u((safe_div_func_uint64_t_u_u(18446744073709551615UL, (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((l_770 &= (p_1157->g_442.sc , ((VECTOR(int8_t, 4))(l_769.yxxy)).x)), ((-3L) <= (safe_add_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_int8_t_s_s((((p_12 & ((safe_div_func_uint8_t_u_u(((((safe_sub_func_uint64_t_u_u(l_769.y, ((VECTOR(int64_t, 8))(8L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_783.s2024462671573007)).s3687)), ((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 16))(l_784.s7261726107124570)).s17, ((VECTOR(int64_t, 2))(2L, (-1L))), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(p_1157->g_785.yx)).yyxyxxyy)).s67))), 0x61B0D8C649DA337FL)).s2)) & (l_797 = (safe_rshift_func_uint16_t_u_u((p_1157->g_440.x = ((safe_lshift_func_int16_t_s_u(((*p_1157->g_248) &= (safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s((1L | ((VECTOR(uint32_t, 16))(l_794.zwwyxyzzyyzwxzyz)).sd), (l_795 , p_12))), p_12))), l_795.f0)) == 0x05L)), p_12)))) == p_12) & l_783.s2), 0x72L)) & l_783.s7)) , l_797) , p_12), 0x38L)), 248UL)), l_798)) , p_12), 1UL))))), 13)))), l_798))), 3));
    return l_795;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_15(int32_t  p_16, int32_t * p_17, int32_t * p_18, int16_t  p_19, struct S1 * p_1157)
{ /* block id: 10 */
    if ((atomic_inc(&p_1157->l_atomic_input[14]) == 0))
    { /* block id: 12 */
        int32_t l_32 = 0x0CFF26AFL;
        int32_t *l_31 = &l_32;
        int32_t **l_30 = &l_31;
        int32_t **l_33 = &l_31;
        int32_t *l_34 = &l_32;
        int32_t *l_35 = &l_32;
        int32_t *l_36 = &l_32;
        uint8_t l_37 = 0x63L;
        uint32_t l_38 = 0xBF81606DL;
        uint16_t l_39 = 4UL;
        uint32_t l_40 = 1UL;
        l_33 = (l_30 = (void*)0);
        l_36 = (l_35 = l_34);
        l_40 = (((VECTOR(uint64_t, 4))(0UL, 1UL, 7UL, 0xBDB62B2FAA9634D7L)).y , (l_37 , (l_39 = l_38)));
        for (l_39 = 0; (l_39 >= 12); l_39 = safe_add_func_uint16_t_u_u(l_39, 8))
        { /* block id: 21 */
            int8_t l_43 = 0x50L;
            VECTOR(uint16_t, 4) l_44 = (VECTOR(uint16_t, 4))(0xD4C3L, (VECTOR(uint16_t, 2))(0xD4C3L, 0x1F20L), 0x1F20L);
            uint32_t l_47 = 4294967295UL;
            VECTOR(uint16_t, 2) l_150 = (VECTOR(uint16_t, 2))(0x405DL, 1UL);
            int i;
            l_44.y--;
            if (l_47)
            { /* block id: 23 */
                int32_t l_48 = 0L;
                for (l_48 = (-22); (l_48 <= (-15)); ++l_48)
                { /* block id: 26 */
                    int32_t l_51 = 0x3856A759L;
                    uint8_t l_63 = 255UL;
                    for (l_51 = (-19); (l_51 <= 8); ++l_51)
                    { /* block id: 29 */
                        int32_t l_54[1];
                        uint32_t l_55 = 0xCF58A412L;
                        uint8_t l_56 = 0xD7L;
                        uint32_t l_57 = 0UL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_54[i] = (-4L);
                        l_57 &= (l_56 = (l_55 ^= ((*l_35) &= l_54[0])));
                    }
                    for (l_51 = 0; (l_51 < (-27)); l_51--)
                    { /* block id: 37 */
                        int32_t l_62[1];
                        int32_t *l_61 = &l_62[0];
                        int32_t **l_60 = &l_61;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_62[i] = (-8L);
                        l_60 = l_60;
                    }
                    l_63++;
                }
            }
            else
            { /* block id: 42 */
                int32_t l_66 = 0x46833686L;
                uint8_t l_67[3][10][1] = {{{7UL},{7UL},{7UL},{7UL},{7UL},{7UL},{7UL},{7UL},{7UL},{7UL}},{{7UL},{7UL},{7UL},{7UL},{7UL},{7UL},{7UL},{7UL},{7UL},{7UL}},{{7UL},{7UL},{7UL},{7UL},{7UL},{7UL},{7UL},{7UL},{7UL},{7UL}}};
                int i, j, k;
                l_67[1][7][0]++;
            }
            for (l_43 = 0; (l_43 < 19); l_43 = safe_add_func_uint16_t_u_u(l_43, 5))
            { /* block id: 47 */
                VECTOR(int32_t, 2) l_72 = (VECTOR(int32_t, 2))(0L, 3L);
                VECTOR(int32_t, 8) l_73 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x0B24CEC8L), 0x0B24CEC8L), 0x0B24CEC8L, 9L, 0x0B24CEC8L);
                int32_t l_74 = 0x3D65BDF5L;
                int8_t l_75 = 0L;
                VECTOR(int32_t, 2) l_76 = (VECTOR(int32_t, 2))(1L, 0x5D6DF81FL);
                VECTOR(int32_t, 8) l_77 = (VECTOR(int32_t, 8))(0x15B172C6L, (VECTOR(int32_t, 4))(0x15B172C6L, (VECTOR(int32_t, 2))(0x15B172C6L, (-1L)), (-1L)), (-1L), 0x15B172C6L, (-1L));
                int32_t l_78 = 0x49E3B93FL;
                VECTOR(int32_t, 4) l_79 = (VECTOR(int32_t, 4))(0x15AE89E6L, (VECTOR(int32_t, 2))(0x15AE89E6L, (-8L)), (-8L));
                uint32_t l_80 = 2UL;
                VECTOR(int32_t, 2) l_81 = (VECTOR(int32_t, 2))((-1L), 0x182417F1L);
                VECTOR(int32_t, 8) l_82 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x3AE3B8AEL), 0x3AE3B8AEL), 0x3AE3B8AEL, (-1L), 0x3AE3B8AEL);
                VECTOR(int32_t, 4) l_83 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x19C2354CL), 0x19C2354CL);
                VECTOR(int32_t, 8) l_84 = (VECTOR(int32_t, 8))(0x1F0774A7L, (VECTOR(int32_t, 4))(0x1F0774A7L, (VECTOR(int32_t, 2))(0x1F0774A7L, 2L), 2L), 2L, 0x1F0774A7L, 2L);
                VECTOR(int32_t, 16) l_85 = (VECTOR(int32_t, 16))(0x0D33A129L, (VECTOR(int32_t, 4))(0x0D33A129L, (VECTOR(int32_t, 2))(0x0D33A129L, 0x70B5DC3DL), 0x70B5DC3DL), 0x70B5DC3DL, 0x0D33A129L, 0x70B5DC3DL, (VECTOR(int32_t, 2))(0x0D33A129L, 0x70B5DC3DL), (VECTOR(int32_t, 2))(0x0D33A129L, 0x70B5DC3DL), 0x0D33A129L, 0x70B5DC3DL, 0x0D33A129L, 0x70B5DC3DL);
                VECTOR(int32_t, 4) l_86 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x19E236B7L), 0x19E236B7L);
                int i;
                (1 + 1);
            }
            l_150.y++;
        }
        unsigned int result = 0;
        result += l_32;
        result += l_37;
        result += l_38;
        result += l_39;
        result += l_40;
        atomic_add(&p_1157->l_special_values[14], result);
    }
    else
    { /* block id: 89 */
        (1 + 1);
    }
    return p_16;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_20(int16_t  p_21, struct S1 * p_1157)
{ /* block id: 5 */
    int32_t *l_22 = &p_1157->g_23;
    return l_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_1157->g_339.f0
 * writes: p_1157->g_339.f0 p_1157->g_387
 */
int32_t ** func_154(int32_t * p_155, int32_t  p_156, uint32_t  p_157, uint32_t  p_158, struct S1 * p_1157)
{ /* block id: 233 */
    uint64_t l_517 = 0xF18960604CCA5866L;
    int32_t *l_525 = &p_1157->g_387;
    VECTOR(uint16_t, 2) l_538 = (VECTOR(uint16_t, 2))(1UL, 0x7F05L);
    int32_t l_549 = 6L;
    int32_t l_553[2];
    uint16_t l_560[5];
    int16_t *l_603 = &p_1157->g_201;
    uint32_t *l_656 = &p_1157->g_295;
    int64_t *l_685 = &p_1157->g_380[1];
    VECTOR(int8_t, 16) l_709 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 1L), 1L), 1L, 8L, 1L, (VECTOR(int8_t, 2))(8L, 1L), (VECTOR(int8_t, 2))(8L, 1L), 8L, 1L, 8L, 1L);
    VECTOR(int8_t, 4) l_710 = (VECTOR(int8_t, 4))((-8L), (VECTOR(int8_t, 2))((-8L), 0x5CL), 0x5CL);
    VECTOR(uint8_t, 2) l_715 = (VECTOR(uint8_t, 2))(246UL, 0xBDL);
    VECTOR(uint8_t, 4) l_739 = (VECTOR(uint8_t, 4))(0x18L, (VECTOR(uint8_t, 2))(0x18L, 0x46L), 0x46L);
    VECTOR(int8_t, 8) l_740 = (VECTOR(int8_t, 8))(0x55L, (VECTOR(int8_t, 4))(0x55L, (VECTOR(int8_t, 2))(0x55L, 0x24L), 0x24L), 0x24L, 0x55L, 0x24L);
    VECTOR(int8_t, 8) l_742 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L));
    VECTOR(int8_t, 4) l_745 = (VECTOR(int8_t, 4))(0x74L, (VECTOR(int8_t, 2))(0x74L, 0L), 0L);
    VECTOR(int8_t, 4) l_748 = (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x57L), 0x57L);
    VECTOR(int32_t, 4) l_755 = (VECTOR(int32_t, 4))(0x0A880EF4L, (VECTOR(int32_t, 2))(0x0A880EF4L, 0x4B62EC1EL), 0x4B62EC1EL);
    int32_t **l_756 = (void*)0;
    int i;
    for (i = 0; i < 2; i++)
        l_553[i] = 1L;
    for (i = 0; i < 5; i++)
        l_560[i] = 0x10FDL;
    for (p_1157->g_339.f0 = (-24); (p_1157->g_339.f0 != 20); ++p_1157->g_339.f0)
    { /* block id: 236 */
        uint16_t l_540 = 65535UL;
        int32_t ***l_545 = &p_1157->g_502[1][1][0];
        int32_t l_552 = 0L;
        int32_t l_554 = (-6L);
        int32_t l_558 = 1L;
        int32_t l_559 = 0L;
        VECTOR(int32_t, 4) l_569 = (VECTOR(int32_t, 4))(0x208D5533L, (VECTOR(int32_t, 2))(0x208D5533L, 0x1C69C256L), 0x1C69C256L);
        VECTOR(int16_t, 8) l_577 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x7563L), 0x7563L), 0x7563L, 1L, 0x7563L);
        uint64_t l_597[2];
        int16_t *l_602 = (void*)0;
        uint16_t *l_606 = &p_1157->g_207;
        VECTOR(int16_t, 4) l_611 = (VECTOR(int16_t, 4))(0x2B61L, (VECTOR(int16_t, 2))(0x2B61L, 0x7F50L), 0x7F50L);
        VECTOR(int32_t, 4) l_639 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x7D7C1616L), 0x7D7C1616L);
        int64_t **l_697 = &l_685;
        int i;
        for (i = 0; i < 2; i++)
            l_597[i] = 0UL;
        (1 + 1);
    }
    (*l_525) = ((VECTOR(int32_t, 4))(l_755.yzzx)).x;
    return l_756;
}


/* ------------------------------------------ */
/* 
 * reads : p_1157->g_23 p_1157->g_190 p_1157->l_comm_values p_1157->g_172 p_1157->g_comm_values p_1157->g_204 p_1157->g_201 p_1157->g_213 p_1157->g_205 p_1157->g_214 p_1157->g_209 p_1157->g_241 p_1157->g_207 p_1157->g_246 p_1157->g_247 p_1157->g_248 p_1157->g_263 p_1157->g_270 p_1157->g_279 p_1157->g_243 p_1157->g_337 p_1157->g_339 p_1157->g_359 p_1157->g_367 p_1157->g_326 p_1157->g_386 p_1157->g_406 p_1157->g_412 p_1157->g_431 p_1157->g_501 p_1157->g_502
 * writes: p_1157->g_23 p_1157->g_201 p_1157->g_205 p_1157->g_207 p_1157->g_209 p_1157->g_172 p_1157->g_243 p_1157->g_279 p_1157->g_288 p_1157->g_248 p_1157->g_295 p_1157->g_337 p_1157->g_263 p_1157->g_380 p_1157->g_387 p_1157->g_247 p_1157->g_431
 */
int32_t * func_159(int16_t  p_160, int32_t * p_161, struct S1 * p_1157)
{ /* block id: 93 */
    VECTOR(uint8_t, 4) l_166 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x92L), 0x92L);
    int32_t l_354 = 0x6CF942CEL;
    VECTOR(uint32_t, 16) l_362 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967288UL), 4294967288UL), 4294967288UL, 1UL, 4294967288UL, (VECTOR(uint32_t, 2))(1UL, 4294967288UL), (VECTOR(uint32_t, 2))(1UL, 4294967288UL), 1UL, 4294967288UL, 1UL, 4294967288UL);
    int64_t *l_377 = (void*)0;
    int32_t l_378 = 4L;
    int64_t *l_379 = &p_1157->g_380[0];
    uint64_t **l_381[3][5][9] = {{{&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1],&p_1157->g_288[2][0][0],(void*)0,&p_1157->g_288[2][0][0],&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1]},{&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1],&p_1157->g_288[2][0][0],(void*)0,&p_1157->g_288[2][0][0],&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1]},{&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1],&p_1157->g_288[2][0][0],(void*)0,&p_1157->g_288[2][0][0],&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1]},{&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1],&p_1157->g_288[2][0][0],(void*)0,&p_1157->g_288[2][0][0],&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1]},{&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1],&p_1157->g_288[2][0][0],(void*)0,&p_1157->g_288[2][0][0],&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1]}},{{&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1],&p_1157->g_288[2][0][0],(void*)0,&p_1157->g_288[2][0][0],&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1]},{&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1],&p_1157->g_288[2][0][0],(void*)0,&p_1157->g_288[2][0][0],&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1]},{&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1],&p_1157->g_288[2][0][0],(void*)0,&p_1157->g_288[2][0][0],&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1]},{&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1],&p_1157->g_288[2][0][0],(void*)0,&p_1157->g_288[2][0][0],&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1]},{&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1],&p_1157->g_288[2][0][0],(void*)0,&p_1157->g_288[2][0][0],&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1]}},{{&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1],&p_1157->g_288[2][0][0],(void*)0,&p_1157->g_288[2][0][0],&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1]},{&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1],&p_1157->g_288[2][0][0],(void*)0,&p_1157->g_288[2][0][0],&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1]},{&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1],&p_1157->g_288[2][0][0],(void*)0,&p_1157->g_288[2][0][0],&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1]},{&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1],&p_1157->g_288[2][0][0],(void*)0,&p_1157->g_288[2][0][0],&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1]},{&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1],&p_1157->g_288[2][0][0],(void*)0,&p_1157->g_288[2][0][0],&p_1157->g_288[1][1][1],(void*)0,&p_1157->g_288[1][1][1]}}};
    int8_t *l_382 = (void*)0;
    int8_t *l_383 = &p_1157->g_243;
    VECTOR(int32_t, 4) l_392 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L);
    int32_t l_407 = 0x5BD0D008L;
    int16_t **l_417 = &p_1157->g_248;
    uint16_t l_423 = 3UL;
    VECTOR(uint8_t, 16) l_438 = (VECTOR(uint8_t, 16))(0xD9L, (VECTOR(uint8_t, 4))(0xD9L, (VECTOR(uint8_t, 2))(0xD9L, 8UL), 8UL), 8UL, 0xD9L, 8UL, (VECTOR(uint8_t, 2))(0xD9L, 8UL), (VECTOR(uint8_t, 2))(0xD9L, 8UL), 0xD9L, 8UL, 0xD9L, 8UL);
    union U0 *l_493[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t ***l_503 = &p_1157->g_502[0][2][1];
    uint32_t l_512 = 4294967295UL;
    int i, j, k;
    for (p_160 = 2; (p_160 == (-12)); p_160 = safe_sub_func_int64_t_s_s(p_160, 5))
    { /* block id: 96 */
        int16_t *l_171[10][10] = {{&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,(void*)0,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172},{&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,(void*)0,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172},{&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,(void*)0,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172},{&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,(void*)0,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172},{&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,(void*)0,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172},{&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,(void*)0,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172},{&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,(void*)0,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172},{&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,(void*)0,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172},{&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,(void*)0,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172},{&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,(void*)0,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172,&p_1157->g_172}};
        int16_t **l_170 = &l_171[8][0];
        int i, j;
        for (p_1157->g_23 = 0; (p_1157->g_23 >= 9); ++p_1157->g_23)
        { /* block id: 99 */
            return p_161;
        }
        l_354 &= ((((p_160 != l_166.w) , func_167(p_160, l_170, p_1157)) == (void*)0) < p_1157->g_comm_values[p_1157->tid]);
    }
    (*p_1157->g_386) = (safe_div_func_int16_t_s_s((((safe_sub_func_int8_t_s_s((((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(p_1157->g_359.s7daaf38a70ac51fb)).sb9, ((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(1L, (-1L))), 8L, 2L)))).xwwyyxyyzxzxwxwz)))).even)).lo, ((VECTOR(int16_t, 16))(0L, ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))((((*l_383) = (((-4L) <= (safe_add_func_int16_t_s_s((-3L), (((VECTOR(uint32_t, 8))(l_362.s00594352)).s0 | (*p_161))))) , (safe_add_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(l_354, l_166.x)) , ((VECTOR(int16_t, 16))(p_1157->g_367.s05330b82da26440f)).s5), ((safe_unary_minus_func_int8_t_s(((p_1157->g_207++) < (((((p_1157->g_326.s5 , &p_1157->g_288[1][0][0]) != (((*l_379) = (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(FAKE_DIVERGE(p_1157->global_1_offset, get_global_id(1), 10), (safe_mod_func_uint64_t_u_u(p_160, (l_378 = (((*p_1157->g_205) = (*p_1157->g_205)) , p_160)))))), p_160))) , l_381[0][1][2])) & (**p_1157->g_247)) || 0x066C1D64L) != 0x230CL)))) > p_160))))) & p_160), ((VECTOR(int8_t, 2))(0L)), 0x10L)).zywwzwxw, ((VECTOR(uint8_t, 8))(0xDAL))))).s32))), ((VECTOR(int16_t, 4))(0L)), (**p_1157->g_247), (-1L), 0x3521L, (-2L), (-1L), 1L, 0x600EL, 1L, 0L)).s47f7))), ((VECTOR(int16_t, 4))(0x14F6L)), ((VECTOR(int16_t, 4))(0x4B74L))))).xyzzwwxy))))).s40))), 0x6E1BL, ((VECTOR(int16_t, 4))(0x0608L)), 1L)).lo, ((VECTOR(int16_t, 4))(0L))))).x , l_362.s2), p_160)) < 0x18F5385CL) < (-1L)), l_166.x));
    if (((GROUP_DIVERGE(2, 1) || (l_362.s9 <= (safe_lshift_func_uint8_t_u_u(((void*)0 == l_379), l_354)))) | ((*p_161) ^= ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))((p_160 , (safe_div_func_int16_t_s_s(p_160, 0x5A97L))), ((VECTOR(int32_t, 4))(0x33DC35E9L, ((VECTOR(int32_t, 2))(0x1B52CC8DL, (-8L))), 0x15804805L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_392.zywy)).hi)), (-1L))).lo, (int32_t)((safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(((FAKE_DIVERGE(p_1157->group_2_offset, get_group_id(2), 10) || (safe_div_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((p_160 &= (safe_mul_func_uint8_t_u_u(((void*)0 == (*p_1157->g_247)), l_362.s4))), 3)), l_392.x))) == l_392.z), l_354)), p_1157->g_263.y)) & l_362.s9)))).w)))
    { /* block id: 178 */
        uint32_t l_403 = 0xB588F8B9L;
        ++l_403;
    }
    else
    { /* block id: 180 */
        uint16_t *l_413 = &p_1157->g_279;
        int16_t **l_416[9][2] = {{&p_1157->g_248,&p_1157->g_248},{&p_1157->g_248,&p_1157->g_248},{&p_1157->g_248,&p_1157->g_248},{&p_1157->g_248,&p_1157->g_248},{&p_1157->g_248,&p_1157->g_248},{&p_1157->g_248,&p_1157->g_248},{&p_1157->g_248,&p_1157->g_248},{&p_1157->g_248,&p_1157->g_248},{&p_1157->g_248,&p_1157->g_248}};
        int16_t ***l_418 = &p_1157->g_247;
        int32_t **l_422 = &p_1157->g_205;
        int32_t ***l_421 = &l_422;
        int32_t l_426 = 5L;
        int32_t l_428 = 2L;
        VECTOR(int32_t, 8) l_429 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5B067AF5L), 0x5B067AF5L), 0x5B067AF5L, 0L, 0x5B067AF5L);
        int64_t l_430 = 3L;
        VECTOR(uint16_t, 8) l_439 = (VECTOR(uint16_t, 8))(0x9DA7L, (VECTOR(uint16_t, 4))(0x9DA7L, (VECTOR(uint16_t, 2))(0x9DA7L, 0xE086L), 0xE086L), 0xE086L, 0x9DA7L, 0xE086L);
        VECTOR(uint16_t, 8) l_444 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x40B8L), 0x40B8L), 0x40B8L, 65535UL, 0x40B8L);
        VECTOR(int8_t, 16) l_448 = (VECTOR(int8_t, 16))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x3AL), 0x3AL), 0x3AL, 8L, 0x3AL, (VECTOR(int8_t, 2))(8L, 0x3AL), (VECTOR(int8_t, 2))(8L, 0x3AL), 8L, 0x3AL, 8L, 0x3AL);
        int32_t l_456 = 0x118F0597L;
        int32_t l_462 = 0x53E52C02L;
        int32_t *l_481 = (void*)0;
        union U0 *l_494[5] = {&p_1157->g_339,&p_1157->g_339,&p_1157->g_339,&p_1157->g_339,&p_1157->g_339};
        int i, j;
        (*p_1157->g_406) = (*p_1157->g_213);
        (**p_1157->g_204) = (l_407 == (safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(p_1157->g_412.scc)).yyxxxxyxxxxyxyxy, (int8_t)(6UL | ((*l_413) = ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0UL, 0xB5CAL)), 0x3ECCL, 0x6B12L)).w))))).even)).s1 == p_160) && (safe_lshift_func_uint16_t_u_s(((l_166.x , l_416[4][0]) != ((*l_418) = l_417)), 13))) <= (safe_rshift_func_uint8_t_u_u((GROUP_DIVERGE(2, 1) , l_392.y), (l_378 = ((((*l_421) = &p_1157->g_205) == &p_1157->g_205) > l_423))))), p_160)), 65535UL)));
        for (p_1157->g_23 = 0; (p_1157->g_23 <= 23); p_1157->g_23 = safe_add_func_int32_t_s_s(p_1157->g_23, 9))
        { /* block id: 189 */
            int32_t *l_427[9][4][2] = {{{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354}},{{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354}},{{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354}},{{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354}},{{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354}},{{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354}},{{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354}},{{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354}},{{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354},{&l_407,&l_354}}};
            VECTOR(uint16_t, 16) l_443 = (VECTOR(uint16_t, 16))(65527UL, (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 0UL), 0UL), 0UL, 65527UL, 0UL, (VECTOR(uint16_t, 2))(65527UL, 0UL), (VECTOR(uint16_t, 2))(65527UL, 0UL), 65527UL, 0UL, 65527UL, 0UL);
            int32_t ***l_446 = (void*)0;
            uint32_t *l_447 = &p_1157->g_295;
            VECTOR(uint64_t, 16) l_452 = (VECTOR(uint64_t, 16))(6UL, (VECTOR(uint64_t, 4))(6UL, (VECTOR(uint64_t, 2))(6UL, 8UL), 8UL), 8UL, 6UL, 8UL, (VECTOR(uint64_t, 2))(6UL, 8UL), (VECTOR(uint64_t, 2))(6UL, 8UL), 6UL, 8UL, 6UL, 8UL);
            VECTOR(int16_t, 16) l_485 = (VECTOR(int16_t, 16))(0x69A1L, (VECTOR(int16_t, 4))(0x69A1L, (VECTOR(int16_t, 2))(0x69A1L, 0L), 0L), 0L, 0x69A1L, 0L, (VECTOR(int16_t, 2))(0x69A1L, 0L), (VECTOR(int16_t, 2))(0x69A1L, 0L), 0x69A1L, 0L, 0x69A1L, 0L);
            union U0 *l_490 = (void*)0;
            int i, j, k;
            p_1157->g_431[3][0][2]--;
        }
    }
    for (l_407 = (-29); (l_407 != (-21)); l_407 = safe_add_func_int64_t_s_s(l_407, 7))
    { /* block id: 223 */
        int32_t ***l_499 = (void*)0;
        int32_t ****l_500 = &l_499;
        int32_t l_504 = 0x5E84B6F2L;
        int32_t *l_505 = &p_1157->g_387;
        int32_t *l_506 = &p_1157->g_23;
        int32_t *l_507 = &p_1157->g_387;
        int32_t l_508 = 0x277C0CB2L;
        int32_t *l_509 = &l_504;
        int32_t *l_510 = &p_1157->g_449;
        int32_t *l_511[3][7] = {{&l_508,&l_504,&l_508,&l_508,&l_504,&l_508,&l_508},{&l_508,&l_504,&l_508,&l_508,&l_504,&l_508,&l_508},{&l_508,&l_504,&l_508,&l_508,&l_504,&l_508,&l_508}};
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1157->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 47)), permutations[(safe_mod_func_uint32_t_u_u((((*l_500) = l_499) != (l_503 = p_1157->g_501)), 10))][(safe_mod_func_uint32_t_u_u(p_1157->tid, 47))]));
        --l_512;
        (**l_503) = p_161;
    }
    return (**l_503);
}


/* ------------------------------------------ */
/* 
 * reads : p_1157->g_23 p_1157->g_190 p_1157->l_comm_values p_1157->g_172 p_1157->g_comm_values p_1157->g_204 p_1157->g_201 p_1157->g_213 p_1157->g_205 p_1157->g_214 p_1157->g_209 p_1157->g_241 p_1157->g_207 p_1157->g_246 p_1157->g_247 p_1157->g_248 p_1157->g_263 p_1157->g_270 p_1157->g_279 p_1157->g_243 p_1157->g_337 p_1157->g_339
 * writes: p_1157->g_23 p_1157->g_201 p_1157->g_205 p_1157->g_207 p_1157->g_209 p_1157->g_172 p_1157->g_243 p_1157->g_279 p_1157->g_288 p_1157->g_248 p_1157->g_295 p_1157->g_337 p_1157->g_263
 */
int32_t ** func_167(uint32_t  p_168, int16_t ** p_169, struct S1 * p_1157)
{ /* block id: 102 */
    int32_t *l_175 = &p_1157->g_23;
    int32_t **l_174 = &l_175;
    int32_t ***l_173 = &l_174;
    int16_t l_202[3];
    uint16_t *l_206 = &p_1157->g_207;
    uint64_t *l_208 = &p_1157->g_209;
    int16_t **l_210 = (void*)0;
    uint8_t l_218 = 0xFCL;
    VECTOR(int16_t, 2) l_271 = (VECTOR(int16_t, 2))(0L, (-1L));
    int8_t *l_294 = &p_1157->g_243;
    VECTOR(int32_t, 2) l_317 = (VECTOR(int32_t, 2))(0x21354D59L, 0x44198429L);
    VECTOR(int64_t, 8) l_327 = (VECTOR(int64_t, 8))(7L, (VECTOR(int64_t, 4))(7L, (VECTOR(int64_t, 2))(7L, 4L), 4L), 4L, 7L, 4L);
    int i;
    for (i = 0; i < 3; i++)
        l_202[i] = 0x47DFL;
    (*l_175) = (((*l_173) = (void*)0) != &l_175);
    (*p_1157->g_214) = func_176((((*l_175) && ((*l_208) = (((safe_rshift_func_uint16_t_u_s(((*l_206) = func_182((*p_169), ((*l_175) = ((((safe_rshift_func_int8_t_s_s((((0x05L ^ ((((*l_173) == p_1157->g_190) | (((p_1157->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1157->tid, 47))] == (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(p_1157->g_172, ((!(safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(p_1157->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1157->tid, 47))], (p_1157->g_201 = p_1157->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1157->tid, 47))]))) != p_1157->g_23), (*l_175))), 0x31FFL))) != FAKE_DIVERGE(p_1157->local_1_offset, get_local_id(1), 10)))), p_1157->g_172))) ^ 0x895135FD4661E40CL) || p_168)) == l_202[2])) || 0x56D6DE41467E5DD0L) >= 0x3520L), p_1157->g_172)) && (*l_175)) ^ p_168) < 4294967288UL)), (*l_173), p_1157->g_comm_values[p_1157->tid], p_168, p_1157)), 1)) , 0x10C5504132805034L) , p_168))) ^ p_168), (*l_173), l_210, p_1157);
    for (p_1157->g_172 = (-1); (p_1157->g_172 == 8); p_1157->g_172 = safe_add_func_uint8_t_u_u(p_1157->g_172, 2))
    { /* block id: 122 */
        int32_t *l_217[1][3][2] = {{{&p_1157->g_23,&p_1157->g_23},{&p_1157->g_23,&p_1157->g_23},{&p_1157->g_23,&p_1157->g_23}}};
        VECTOR(int64_t, 2) l_225 = (VECTOR(int64_t, 2))(0x5A230B5BDB629B37L, 0x2D0F761038082337L);
        VECTOR(int16_t, 4) l_238 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x5F79L), 0x5F79L);
        int8_t *l_242 = &p_1157->g_243;
        VECTOR(int64_t, 2) l_262 = (VECTOR(int64_t, 2))(0x7FD7715F622DDEA7L, (-5L));
        uint32_t l_296 = 0x64348B52L;
        union U0 l_316[1][6] = {{{0xAA28A99BL},{0xAA28A99BL},{0xAA28A99BL},{0xAA28A99BL},{0xAA28A99BL},{0xAA28A99BL}}};
        int i, j, k;
        --l_218;
        if ((safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(l_225.x, p_1157->g_209)), ((((safe_lshift_func_int16_t_s_s((-1L), 10)) < (((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s(((*l_242) = (safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(9UL, (+((VECTOR(int16_t, 16))(l_238.yywyxwyyyyxxywyy)).s3))), ((safe_mul_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(p_1157->g_241.yyxy)).w, (65535UL >= 0xE258L))) && p_168)))), 5)) < (p_1157->g_comm_values[p_1157->tid] ^ ((safe_mul_func_uint8_t_u_u(p_168, p_1157->g_201)) > p_1157->g_23))), 4)) ^ (*p_1157->g_205)) > p_1157->g_207)) ^ p_1157->g_207) || p_1157->g_246))))
        { /* block id: 125 */
            int8_t l_249 = (-5L);
            VECTOR(int32_t, 2) l_254 = (VECTOR(int32_t, 2))(0x36782FDEL, 1L);
            int16_t *l_264[7] = {&l_202[2],&l_202[2],&l_202[2],&l_202[2],&l_202[2],&l_202[2],&l_202[2]};
            int32_t *l_267 = &p_1157->g_23;
            uint64_t *l_278[1];
            uint64_t **l_286 = (void*)0;
            uint64_t **l_287[1];
            VECTOR(int16_t, 8) l_291 = (VECTOR(int16_t, 8))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 8L), 8L), 8L, (-9L), 8L);
            int64_t l_301 = 0x7263D768629A8D41L;
            VECTOR(int32_t, 2) l_318 = (VECTOR(int32_t, 2))(0L, (-3L));
            VECTOR(int64_t, 8) l_325 = (VECTOR(int64_t, 8))((-3L), (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 0x452A4E9850E9C848L), 0x452A4E9850E9C848L), 0x452A4E9850E9C848L, (-3L), 0x452A4E9850E9C848L);
            union U0 *l_342 = &l_316[0][1];
            VECTOR(uint16_t, 16) l_343 = (VECTOR(uint16_t, 16))(0x57F4L, (VECTOR(uint16_t, 4))(0x57F4L, (VECTOR(uint16_t, 2))(0x57F4L, 0UL), 0UL), 0UL, 0x57F4L, 0UL, (VECTOR(uint16_t, 2))(0x57F4L, 0UL), (VECTOR(uint16_t, 2))(0x57F4L, 0UL), 0x57F4L, 0UL, 0x57F4L, 0UL);
            int i;
            for (i = 0; i < 1; i++)
                l_278[i] = &p_1157->g_209;
            for (i = 0; i < 1; i++)
                l_287[i] = (void*)0;
            (*p_1157->g_205) |= ((((p_1157->g_247 != (void*)0) || l_249) == FAKE_DIVERGE(p_1157->global_0_offset, get_global_id(0), 10)) > (safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(65535UL, (*p_1157->g_248))), ((((void*)0 != l_242) >= GROUP_DIVERGE(1, 1)) & ((VECTOR(int8_t, 2))(0x4EL, (-5L))).odd))));
            p_1157->g_279 ^= ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(l_254.yyxx)), (int32_t)(safe_unary_minus_func_uint16_t_u(((safe_div_func_uint16_t_u_u(p_168, (safe_lshift_func_int8_t_s_u(p_168, 5)))) & ((((safe_mod_func_uint32_t_u_u((((VECTOR(uint64_t, 8))(abs_diff(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_262.yxyxyxxyyyxxxxxx)).even)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_1157->g_263.yy)), 1L, 0x4EC5ED5C099B40CFL)).xxxwxzxxxyyzyzwy, (int64_t)((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), 0x4EE3L)).yyxy)).w && (p_1157->g_201 ^= (*p_1157->g_248))) == ((*l_175) &= ((safe_lshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1157->global_0_offset, get_global_id(0), 10), 3)) ^ ((l_267 != ((safe_div_func_int32_t_s_s((9UL < ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_1157->g_270.s0d68)).xzyxyxzz)).s3344527420215444)).sea3e, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_271.yyyxxxxxyxxxyyyx)).s078b)).xxxxywxwwywzzzxw)).hi)).even))).z), (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s(p_168, (p_168 != (((((((((void*)0 == l_278[0]) && p_1157->g_263.y) , 0x34L) <= p_1157->g_263.y) , (void*)0) != (*l_173)) , p_1157->g_209) , p_1157->g_263.y)))) , p_168), p_1157->g_172)), p_1157->g_comm_values[p_1157->tid])))) , (void*)0)) ^ p_168))))))).s2ed9)).yzwzxxzx))).s5 , p_1157->g_172), p_1157->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1157->tid, 47))])) && 0x7DL) < p_168) != (-1L)))))))).z;
            if (((&p_1157->g_205 != &l_267) < ((safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((((p_1157->g_288[1][1][1] = &p_1157->g_209) == &p_1157->g_209) ^ p_1157->g_241.x), 6)), (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(0xE690L, (((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_291.s7701242253125046)).lo)), ((VECTOR(int16_t, 4))(0x247BL, ((VECTOR(int16_t, 2))(0x00FDL, 1L)), 0x543BL)).xyxwwwxy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), 0L)), 0x5433L, 6L)).xzyxywzw))).s4 != p_168), (((((*p_1157->g_247) = (*p_1157->g_247)) != ((GROUP_DIVERGE(1, 1) != (l_254.x = ((((((*l_208) |= (p_1157->g_201 >= (((((((*l_267) = (p_1157->g_243 = (safe_div_func_int16_t_s_s((p_1157->g_295 = (&p_1157->g_243 != l_294)), p_168)))) != 7L) <= 0x60402DF225DDFBCAL) > 0xD7D3L) , 255UL) || p_168))) & 1UL) , l_294) == l_294) | GROUP_DIVERGE(1, 1)))) , l_264[3])) == (-9L)) != p_1157->g_207), (*l_267), 65535UL, 0xBE90L, 65526UL, 0xD55FL)))), ((VECTOR(uint16_t, 8))(65535UL))))).hi, ((VECTOR(uint16_t, 4))(65535UL))))).w, p_1157->g_279)))), p_168)) , l_296)))
            { /* block id: 137 */
                int16_t **l_299 = &l_264[6];
                int32_t **l_300[9] = {&l_217[0][2][0],&l_217[0][2][0],&l_217[0][2][0],&l_217[0][2][0],&l_217[0][2][0],&l_217[0][2][0],&l_217[0][2][0],&l_217[0][2][0],&l_217[0][2][0]};
                int i;
                l_175 = func_176(((*l_242) |= (safe_mod_func_int64_t_s_s(p_168, (*l_175)))), &p_1157->g_205, l_299, p_1157);
                l_301 &= (5UL == (~(*l_267)));
            }
            else
            { /* block id: 141 */
                VECTOR(uint16_t, 4) l_309 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 1UL), 1UL);
                int32_t l_331 = 1L;
                int i;
                for (l_218 = (-27); (l_218 > 60); ++l_218)
                { /* block id: 144 */
                    VECTOR(int8_t, 4) l_306 = (VECTOR(int8_t, 4))(0x44L, (VECTOR(int8_t, 2))(0x44L, (-1L)), (-1L));
                    uint8_t *l_330 = &l_316[0][3].f1;
                    int64_t *l_332 = (void*)0;
                    int64_t *l_333 = (void*)0;
                    int64_t *l_334 = (void*)0;
                    int64_t *l_335 = (void*)0;
                    int64_t *l_336[4][9][4] = {{{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301}},{{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301}},{{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301}},{{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301},{&l_301,(void*)0,(void*)0,&l_301}}};
                    int32_t l_338 = 0x557FB40BL;
                    int32_t *l_353 = &p_1157->g_23;
                    int i, j, k;
                    (**p_1157->g_214) = ((p_1157->g_263.x = (!(p_1157->g_337 ^= (safe_lshift_func_int16_t_s_s((((VECTOR(int8_t, 8))(l_306.xyzyzzyw)).s0 ^ ((*l_294) |= ((VECTOR(int8_t, 4))(((((VECTOR(uint16_t, 8))((--(*l_206)), ((VECTOR(uint16_t, 4))(l_309.yyzz)), 0x78A3L, 0xEC0AL, 0x04AFL)).s1 ^ (((p_168 >= (safe_lshift_func_uint8_t_u_u(p_168, 7))) >= (l_331 &= (safe_lshift_func_uint8_t_u_s(((*l_330) = (safe_add_func_int32_t_s_s((l_316[0][3] , ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 16))(l_317.yxxyyxyxxyxyxyyx)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_318.xxxxyyyyyxxxxyxx)).s1a48)).yyxwwzxy))).odd, (int32_t)l_309.x))).z), ((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))((((safe_mul_func_uint16_t_u_u(65531UL, (safe_div_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((((((p_168 , (((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 4))(l_325.s2640)).hi, ((VECTOR(int64_t, 4))(0L, (-3L), 0x1C74D21402CF99B6L, 0L)).hi))).yyyxyyyxyyyxyxyx, ((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 16))(0x7C410BDAC23D5A6EL, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(0x45C005599F8BF951L, 0L, (-7L), 0x6BD6B748E914F0B8L)).zyyxwyzx)), 0x35F61777C7878CAFL, ((VECTOR(int64_t, 2))(p_1157->g_326.s67)), (-1L), ((VECTOR(int64_t, 2))(l_327.s31)), 0x31C91F2F87219A0BL)).se3b2, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x1099EA1FDA284915L, 0x09CC18198BDFED1BL)).xxyy))))).zyxxwwzyzwxxwxwz))).s8 == ((((safe_lshift_func_int8_t_s_u(((p_1157->g_209 != l_306.x) , p_168), 7)) >= p_168) < p_168) , p_168))) | p_1157->g_279) > 0x38L) , l_306.y) ^ p_168), p_1157->g_295)), p_168)))) , p_168) & 1L), ((VECTOR(int16_t, 2))(8L)), ((VECTOR(int16_t, 2))(1L)), 0x0754L, 0x54CEL, l_309.w, ((VECTOR(int16_t, 8))(0x1BD1L)))).s79)).xxyxyyxx))).s3740363626300246, ((VECTOR(uint16_t, 16))(3UL))))).sf))), (*l_267))))) | FAKE_DIVERGE(p_1157->local_0_offset, get_local_id(0), 10))) < 3L), p_1157->g_263.x, 0x28L, 0L)).z)), 13))))) == (*l_267));
                    l_338 &= 0x6D41E486L;
                    if ((p_1157->g_339 , p_168))
                    { /* block id: 153 */
                        union U0 **l_340 = (void*)0;
                        union U0 **l_341 = (void*)0;
                        l_342 = (void*)0;
                        if ((**p_1157->g_213))
                            continue;
                    }
                    else
                    { /* block id: 156 */
                        uint8_t *l_344 = &l_218;
                        l_353 = (((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 2))(l_343.s32)).yxxyyxyx))).s1413043645167543, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))((l_242 != l_344), ((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((((**p_1157->g_214) > ((*l_342) , (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((p_168 == (p_168 != (*p_1157->g_248))), 0)), 8)), ((((*l_330) = (((-1L) & 0xDC753CE2L) > GROUP_DIVERGE(1, 1))) , p_1157->g_279) || (*p_1157->g_205)))))) != 4294967291UL) & 0x0A4678CEL), 1L, 1L, ((VECTOR(int16_t, 2))((-1L))), (**p_1157->g_247), (-1L), 0x4D75L)))), 0L, 0x412DL, 0L, 0x047EL, ((VECTOR(int16_t, 4))(5L)))).s05)), ((VECTOR(int16_t, 2))(0x1553L))))).xxyxyxxyxyxyyxxx, ((VECTOR(int16_t, 16))(0x1633L)), ((VECTOR(int16_t, 16))(0x7981L))))))).sd7, ((VECTOR(int16_t, 2))(0x58E9L))))), 0x929DL)).odd)).yyxyxyyxxyyyxyxy))).s2 , (void*)0);
                    }
                }
            }
            if (p_168)
                continue;
        }
        else
        { /* block id: 163 */
            return &p_1157->g_205;
        }
    }
    return &p_1157->g_205;
}


/* ------------------------------------------ */
/* 
 * reads : p_1157->g_201 p_1157->g_213 p_1157->g_204 p_1157->g_205
 * writes: p_1157->g_207 p_1157->g_205
 */
int32_t * func_176(int8_t  p_177, int32_t ** p_178, int16_t ** p_179, struct S1 * p_1157)
{ /* block id: 112 */
    uint16_t *l_211 = &p_1157->g_207;
    int32_t **l_212 = (void*)0;
    int i, j;
    (*p_1157->g_213) = func_20((p_1157->g_201 != (p_177 | (~((*l_211) = (p_177 | p_177))))), p_1157);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_1157->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 47)), permutations[(safe_mod_func_uint32_t_u_u(1UL, 10))][(safe_mod_func_uint32_t_u_u(p_1157->tid, 47))]));
    return (*p_1157->g_204);
}


/* ------------------------------------------ */
/* 
 * reads : p_1157->g_204
 * writes: p_1157->g_205
 */
uint16_t  func_182(int16_t * p_183, uint64_t  p_184, int32_t ** p_185, uint32_t  p_186, uint64_t  p_187, struct S1 * p_1157)
{ /* block id: 107 */
    uint8_t l_203 = 1UL;
    (*p_1157->g_204) = func_20(l_203, p_1157);
    return p_186;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[15];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 15; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[47];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 47; i++)
            l_comm_values[i] = 1;
    struct S1 c_1158;
    struct S1* p_1157 = &c_1158;
    struct S1 c_1159 = {
        8L, // p_1157->g_23
        (void*)0, // p_1157->g_27
        8L, // p_1157->g_29
        0x3032L, // p_1157->g_172
        (void*)0, // p_1157->g_190
        0L, // p_1157->g_201
        &p_1157->g_23, // p_1157->g_205
        &p_1157->g_205, // p_1157->g_204
        65535UL, // p_1157->g_207
        0xFE2178750D81AABCL, // p_1157->g_209
        &p_1157->g_205, // p_1157->g_213
        &p_1157->g_205, // p_1157->g_214
        (VECTOR(uint64_t, 2))(0xAAA912AE39DF6DFCL, 0x5ABEBF25DA6E1C32L), // p_1157->g_241
        0x36L, // p_1157->g_243
        65535UL, // p_1157->g_246
        &p_1157->g_172, // p_1157->g_248
        &p_1157->g_248, // p_1157->g_247
        (VECTOR(int64_t, 2))(0x69B445DA4C048E1DL, 0x4DD8640970185C4AL), // p_1157->g_263
        (VECTOR(int16_t, 16))(0x29F2L, (VECTOR(int16_t, 4))(0x29F2L, (VECTOR(int16_t, 2))(0x29F2L, 0x4BAEL), 0x4BAEL), 0x4BAEL, 0x29F2L, 0x4BAEL, (VECTOR(int16_t, 2))(0x29F2L, 0x4BAEL), (VECTOR(int16_t, 2))(0x29F2L, 0x4BAEL), 0x29F2L, 0x4BAEL, 0x29F2L, 0x4BAEL), // p_1157->g_270
        0x7F1BL, // p_1157->g_279
        {{{&p_1157->g_209,&p_1157->g_209},{&p_1157->g_209,&p_1157->g_209}},{{&p_1157->g_209,&p_1157->g_209},{&p_1157->g_209,&p_1157->g_209}},{{&p_1157->g_209,&p_1157->g_209},{&p_1157->g_209,&p_1157->g_209}},{{&p_1157->g_209,&p_1157->g_209},{&p_1157->g_209,&p_1157->g_209}},{{&p_1157->g_209,&p_1157->g_209},{&p_1157->g_209,&p_1157->g_209}},{{&p_1157->g_209,&p_1157->g_209},{&p_1157->g_209,&p_1157->g_209}}}, // p_1157->g_288
        0UL, // p_1157->g_295
        (VECTOR(int64_t, 8))(0x3D2869FD2BC7330FL, (VECTOR(int64_t, 4))(0x3D2869FD2BC7330FL, (VECTOR(int64_t, 2))(0x3D2869FD2BC7330FL, (-1L)), (-1L)), (-1L), 0x3D2869FD2BC7330FL, (-1L)), // p_1157->g_326
        0x49E89731L, // p_1157->g_337
        {6UL}, // p_1157->g_339
        (VECTOR(int16_t, 16))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x1C42L), 0x1C42L), 0x1C42L, (-6L), 0x1C42L, (VECTOR(int16_t, 2))((-6L), 0x1C42L), (VECTOR(int16_t, 2))((-6L), 0x1C42L), (-6L), 0x1C42L, (-6L), 0x1C42L), // p_1157->g_359
        (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x7C2EL), 0x7C2EL), 0x7C2EL, 8L, 0x7C2EL, (VECTOR(int16_t, 2))(8L, 0x7C2EL), (VECTOR(int16_t, 2))(8L, 0x7C2EL), 8L, 0x7C2EL, 8L, 0x7C2EL), // p_1157->g_367
        {1L,1L}, // p_1157->g_380
        (void*)0, // p_1157->g_384
        (void*)0, // p_1157->g_385
        0x5D2CE0D3L, // p_1157->g_387
        &p_1157->g_387, // p_1157->g_386
        &p_1157->g_205, // p_1157->g_406
        (VECTOR(int8_t, 16))(0x50L, (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, 0x0CL), 0x0CL), 0x0CL, 0x50L, 0x0CL, (VECTOR(int8_t, 2))(0x50L, 0x0CL), (VECTOR(int8_t, 2))(0x50L, 0x0CL), 0x50L, 0x0CL, 0x50L, 0x0CL), // p_1157->g_412
        {{{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL},{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL}},{{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL},{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL}},{{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL},{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL}},{{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL},{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL}},{{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL},{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL}},{{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL},{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL}},{{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL},{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL}},{{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL},{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL}},{{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL},{1UL,0x5AC124DBL,4294967295UL,0xBC6A34EAL}}}, // p_1157->g_431
        (VECTOR(uint16_t, 2))(65535UL, 0x5611L), // p_1157->g_440
        (VECTOR(uint16_t, 16))(0xFC92L, (VECTOR(uint16_t, 4))(0xFC92L, (VECTOR(uint16_t, 2))(0xFC92L, 0UL), 0UL), 0UL, 0xFC92L, 0UL, (VECTOR(uint16_t, 2))(0xFC92L, 0UL), (VECTOR(uint16_t, 2))(0xFC92L, 0UL), 0xFC92L, 0UL, 0xFC92L, 0UL), // p_1157->g_442
        (VECTOR(uint16_t, 2))(0x2648L, 0xB0CDL), // p_1157->g_445
        0x745F2841L, // p_1157->g_449
        5UL, // p_1157->g_457
        (VECTOR(int16_t, 16))(4L, (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 0L), 0L), 0L, 4L, 0L, (VECTOR(int16_t, 2))(4L, 0L), (VECTOR(int16_t, 2))(4L, 0L), 4L, 0L, 4L, 0L), // p_1157->g_484
        {{{&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205}},{{&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205}}}, // p_1157->g_502
        &p_1157->g_502[0][2][1], // p_1157->g_501
        (VECTOR(uint16_t, 16))(0x281CL, (VECTOR(uint16_t, 4))(0x281CL, (VECTOR(uint16_t, 2))(0x281CL, 0x188FL), 0x188FL), 0x188FL, 0x281CL, 0x188FL, (VECTOR(uint16_t, 2))(0x281CL, 0x188FL), (VECTOR(uint16_t, 2))(0x281CL, 0x188FL), 0x281CL, 0x188FL, 0x281CL, 0x188FL), // p_1157->g_539
        0x6594B63A88789C9BL, // p_1157->g_542
        {{(-8L),3L,0x317E0DDD13931D86L,(-8L),0x392D069136D1B473L,0x317E0DDD13931D86L,0x317E0DDD13931D86L,0x392D069136D1B473L,(-8L)},{(-8L),3L,0x317E0DDD13931D86L,(-8L),0x392D069136D1B473L,0x317E0DDD13931D86L,0x317E0DDD13931D86L,0x392D069136D1B473L,(-8L)},{(-8L),3L,0x317E0DDD13931D86L,(-8L),0x392D069136D1B473L,0x317E0DDD13931D86L,0x317E0DDD13931D86L,0x392D069136D1B473L,(-8L)},{(-8L),3L,0x317E0DDD13931D86L,(-8L),0x392D069136D1B473L,0x317E0DDD13931D86L,0x317E0DDD13931D86L,0x392D069136D1B473L,(-8L)},{(-8L),3L,0x317E0DDD13931D86L,(-8L),0x392D069136D1B473L,0x317E0DDD13931D86L,0x317E0DDD13931D86L,0x392D069136D1B473L,(-8L)},{(-8L),3L,0x317E0DDD13931D86L,(-8L),0x392D069136D1B473L,0x317E0DDD13931D86L,0x317E0DDD13931D86L,0x392D069136D1B473L,(-8L)}}, // p_1157->g_547
        65535UL, // p_1157->g_548
        &p_1157->g_339, // p_1157->g_567
        &p_1157->g_567, // p_1157->g_566
        (VECTOR(int16_t, 8))(0x5FC4L, (VECTOR(int16_t, 4))(0x5FC4L, (VECTOR(int16_t, 2))(0x5FC4L, 0x0852L), 0x0852L), 0x0852L, 0x5FC4L, 0x0852L), // p_1157->g_571
        (VECTOR(int16_t, 4))(0x1004L, (VECTOR(int16_t, 2))(0x1004L, 0x6BFBL), 0x6BFBL), // p_1157->g_580
        6L, // p_1157->g_628
        (VECTOR(int32_t, 4))(0x416A7987L, (VECTOR(int32_t, 2))(0x416A7987L, 0x59133BB1L), 0x59133BB1L), // p_1157->g_641
        (VECTOR(int32_t, 4))(0x2966E77FL, (VECTOR(int32_t, 2))(0x2966E77FL, 0x5A2E331CL), 0x5A2E331CL), // p_1157->g_665
        (void*)0, // p_1157->g_675
        (void*)0, // p_1157->g_677
        &p_1157->g_677, // p_1157->g_676
        {{{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L}},{{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L}},{{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L}},{{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L}},{{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L}},{{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L}},{{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L}},{{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L}},{{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L}},{{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L},{8L,(-10L),6L}}}, // p_1157->g_693
        {&p_1157->g_693[0][6][2],&p_1157->g_693[0][6][2]}, // p_1157->g_692
        &p_1157->g_692[0], // p_1157->g_691
        (VECTOR(uint8_t, 2))(0x13L, 249UL), // p_1157->g_716
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 8UL), 8UL), // p_1157->g_717
        1UL, // p_1157->g_727
        {{{0UL,4UL,255UL,4UL,0UL},{0UL,4UL,255UL,4UL,0UL},{0UL,4UL,255UL,4UL,0UL}}}, // p_1157->g_732
        &p_1157->g_732[0][0][3], // p_1157->g_731
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), // p_1157->g_741
        (VECTOR(int8_t, 8))((-3L), (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0x42L), 0x42L), 0x42L, (-3L), 0x42L), // p_1157->g_743
        (VECTOR(int8_t, 8))(0x7DL, (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, 0x64L), 0x64L), 0x64L, 0x7DL, 0x64L), // p_1157->g_746
        {{{0xDABDL,0x84A9L,0xDABDL,0xDABDL},{0xDABDL,0x84A9L,0xDABDL,0xDABDL},{0xDABDL,0x84A9L,0xDABDL,0xDABDL},{0xDABDL,0x84A9L,0xDABDL,0xDABDL},{0xDABDL,0x84A9L,0xDABDL,0xDABDL},{0xDABDL,0x84A9L,0xDABDL,0xDABDL},{0xDABDL,0x84A9L,0xDABDL,0xDABDL}},{{0xDABDL,0x84A9L,0xDABDL,0xDABDL},{0xDABDL,0x84A9L,0xDABDL,0xDABDL},{0xDABDL,0x84A9L,0xDABDL,0xDABDL},{0xDABDL,0x84A9L,0xDABDL,0xDABDL},{0xDABDL,0x84A9L,0xDABDL,0xDABDL},{0xDABDL,0x84A9L,0xDABDL,0xDABDL},{0xDABDL,0x84A9L,0xDABDL,0xDABDL}}}, // p_1157->g_754
        (VECTOR(int64_t, 2))(0x7433927B4A564F6BL, (-1L)), // p_1157->g_785
        (VECTOR(int8_t, 8))(0x03L, (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, (-2L)), (-2L)), (-2L), 0x03L, (-2L)), // p_1157->g_805
        (VECTOR(int8_t, 2))(0L, 0x01L), // p_1157->g_809
        (VECTOR(int8_t, 16))(0x6DL, (VECTOR(int8_t, 4))(0x6DL, (VECTOR(int8_t, 2))(0x6DL, 7L), 7L), 7L, 0x6DL, 7L, (VECTOR(int8_t, 2))(0x6DL, 7L), (VECTOR(int8_t, 2))(0x6DL, 7L), 0x6DL, 7L, 0x6DL, 7L), // p_1157->g_814
        (VECTOR(int8_t, 8))(0x38L, (VECTOR(int8_t, 4))(0x38L, (VECTOR(int8_t, 2))(0x38L, 4L), 4L), 4L, 0x38L, 4L), // p_1157->g_815
        (VECTOR(int8_t, 2))(1L, 0x10L), // p_1157->g_817
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x4AL), 0x4AL), 0x4AL, (-1L), 0x4AL, (VECTOR(int8_t, 2))((-1L), 0x4AL), (VECTOR(int8_t, 2))((-1L), 0x4AL), (-1L), 0x4AL, (-1L), 0x4AL), // p_1157->g_820
        (VECTOR(int32_t, 2))(1L, 1L), // p_1157->g_839
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xEBE84308L), 0xEBE84308L), // p_1157->g_844
        (VECTOR(int8_t, 2))(0L, 0x19L), // p_1157->g_852
        (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 0x56L), 0x56L), // p_1157->g_872
        {(-9L),(-9L),(-9L),(-9L),(-9L)}, // p_1157->g_895
        &p_1157->g_27, // p_1157->g_899
        (void*)0, // p_1157->g_924
        0UL, // p_1157->g_966
        {&p_1157->g_27,&p_1157->g_27,&p_1157->g_27,&p_1157->g_27,&p_1157->g_27,&p_1157->g_27}, // p_1157->g_982
        &p_1157->g_205, // p_1157->g_983
        (VECTOR(uint8_t, 2))(0xB5L, 0x8FL), // p_1157->g_995
        1L, // p_1157->g_1046
        {{{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205}},{{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205}},{{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205}},{{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205}},{{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205}},{{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205}},{{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205}},{{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205},{&p_1157->g_205,&p_1157->g_205,&p_1157->g_205}}}, // p_1157->g_1092
        &p_1157->g_27, // p_1157->g_1155
        0, // p_1157->v_collective
        sequence_input[get_global_id(0)], // p_1157->global_0_offset
        sequence_input[get_global_id(1)], // p_1157->global_1_offset
        sequence_input[get_global_id(2)], // p_1157->global_2_offset
        sequence_input[get_local_id(0)], // p_1157->local_0_offset
        sequence_input[get_local_id(1)], // p_1157->local_1_offset
        sequence_input[get_local_id(2)], // p_1157->local_2_offset
        sequence_input[get_group_id(0)], // p_1157->group_0_offset
        sequence_input[get_group_id(1)], // p_1157->group_1_offset
        sequence_input[get_group_id(2)], // p_1157->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 47)), permutations[0][get_linear_local_id()])), // p_1157->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1158 = c_1159;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1157);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1157->g_23, "p_1157->g_23", print_hash_value);
    transparent_crc(p_1157->g_29, "p_1157->g_29", print_hash_value);
    transparent_crc(p_1157->g_172, "p_1157->g_172", print_hash_value);
    transparent_crc(p_1157->g_201, "p_1157->g_201", print_hash_value);
    transparent_crc(p_1157->g_207, "p_1157->g_207", print_hash_value);
    transparent_crc(p_1157->g_209, "p_1157->g_209", print_hash_value);
    transparent_crc(p_1157->g_241.x, "p_1157->g_241.x", print_hash_value);
    transparent_crc(p_1157->g_241.y, "p_1157->g_241.y", print_hash_value);
    transparent_crc(p_1157->g_243, "p_1157->g_243", print_hash_value);
    transparent_crc(p_1157->g_246, "p_1157->g_246", print_hash_value);
    transparent_crc(p_1157->g_263.x, "p_1157->g_263.x", print_hash_value);
    transparent_crc(p_1157->g_263.y, "p_1157->g_263.y", print_hash_value);
    transparent_crc(p_1157->g_270.s0, "p_1157->g_270.s0", print_hash_value);
    transparent_crc(p_1157->g_270.s1, "p_1157->g_270.s1", print_hash_value);
    transparent_crc(p_1157->g_270.s2, "p_1157->g_270.s2", print_hash_value);
    transparent_crc(p_1157->g_270.s3, "p_1157->g_270.s3", print_hash_value);
    transparent_crc(p_1157->g_270.s4, "p_1157->g_270.s4", print_hash_value);
    transparent_crc(p_1157->g_270.s5, "p_1157->g_270.s5", print_hash_value);
    transparent_crc(p_1157->g_270.s6, "p_1157->g_270.s6", print_hash_value);
    transparent_crc(p_1157->g_270.s7, "p_1157->g_270.s7", print_hash_value);
    transparent_crc(p_1157->g_270.s8, "p_1157->g_270.s8", print_hash_value);
    transparent_crc(p_1157->g_270.s9, "p_1157->g_270.s9", print_hash_value);
    transparent_crc(p_1157->g_270.sa, "p_1157->g_270.sa", print_hash_value);
    transparent_crc(p_1157->g_270.sb, "p_1157->g_270.sb", print_hash_value);
    transparent_crc(p_1157->g_270.sc, "p_1157->g_270.sc", print_hash_value);
    transparent_crc(p_1157->g_270.sd, "p_1157->g_270.sd", print_hash_value);
    transparent_crc(p_1157->g_270.se, "p_1157->g_270.se", print_hash_value);
    transparent_crc(p_1157->g_270.sf, "p_1157->g_270.sf", print_hash_value);
    transparent_crc(p_1157->g_279, "p_1157->g_279", print_hash_value);
    transparent_crc(p_1157->g_295, "p_1157->g_295", print_hash_value);
    transparent_crc(p_1157->g_326.s0, "p_1157->g_326.s0", print_hash_value);
    transparent_crc(p_1157->g_326.s1, "p_1157->g_326.s1", print_hash_value);
    transparent_crc(p_1157->g_326.s2, "p_1157->g_326.s2", print_hash_value);
    transparent_crc(p_1157->g_326.s3, "p_1157->g_326.s3", print_hash_value);
    transparent_crc(p_1157->g_326.s4, "p_1157->g_326.s4", print_hash_value);
    transparent_crc(p_1157->g_326.s5, "p_1157->g_326.s5", print_hash_value);
    transparent_crc(p_1157->g_326.s6, "p_1157->g_326.s6", print_hash_value);
    transparent_crc(p_1157->g_326.s7, "p_1157->g_326.s7", print_hash_value);
    transparent_crc(p_1157->g_337, "p_1157->g_337", print_hash_value);
    transparent_crc(p_1157->g_339.f0, "p_1157->g_339.f0", print_hash_value);
    transparent_crc(p_1157->g_359.s0, "p_1157->g_359.s0", print_hash_value);
    transparent_crc(p_1157->g_359.s1, "p_1157->g_359.s1", print_hash_value);
    transparent_crc(p_1157->g_359.s2, "p_1157->g_359.s2", print_hash_value);
    transparent_crc(p_1157->g_359.s3, "p_1157->g_359.s3", print_hash_value);
    transparent_crc(p_1157->g_359.s4, "p_1157->g_359.s4", print_hash_value);
    transparent_crc(p_1157->g_359.s5, "p_1157->g_359.s5", print_hash_value);
    transparent_crc(p_1157->g_359.s6, "p_1157->g_359.s6", print_hash_value);
    transparent_crc(p_1157->g_359.s7, "p_1157->g_359.s7", print_hash_value);
    transparent_crc(p_1157->g_359.s8, "p_1157->g_359.s8", print_hash_value);
    transparent_crc(p_1157->g_359.s9, "p_1157->g_359.s9", print_hash_value);
    transparent_crc(p_1157->g_359.sa, "p_1157->g_359.sa", print_hash_value);
    transparent_crc(p_1157->g_359.sb, "p_1157->g_359.sb", print_hash_value);
    transparent_crc(p_1157->g_359.sc, "p_1157->g_359.sc", print_hash_value);
    transparent_crc(p_1157->g_359.sd, "p_1157->g_359.sd", print_hash_value);
    transparent_crc(p_1157->g_359.se, "p_1157->g_359.se", print_hash_value);
    transparent_crc(p_1157->g_359.sf, "p_1157->g_359.sf", print_hash_value);
    transparent_crc(p_1157->g_367.s0, "p_1157->g_367.s0", print_hash_value);
    transparent_crc(p_1157->g_367.s1, "p_1157->g_367.s1", print_hash_value);
    transparent_crc(p_1157->g_367.s2, "p_1157->g_367.s2", print_hash_value);
    transparent_crc(p_1157->g_367.s3, "p_1157->g_367.s3", print_hash_value);
    transparent_crc(p_1157->g_367.s4, "p_1157->g_367.s4", print_hash_value);
    transparent_crc(p_1157->g_367.s5, "p_1157->g_367.s5", print_hash_value);
    transparent_crc(p_1157->g_367.s6, "p_1157->g_367.s6", print_hash_value);
    transparent_crc(p_1157->g_367.s7, "p_1157->g_367.s7", print_hash_value);
    transparent_crc(p_1157->g_367.s8, "p_1157->g_367.s8", print_hash_value);
    transparent_crc(p_1157->g_367.s9, "p_1157->g_367.s9", print_hash_value);
    transparent_crc(p_1157->g_367.sa, "p_1157->g_367.sa", print_hash_value);
    transparent_crc(p_1157->g_367.sb, "p_1157->g_367.sb", print_hash_value);
    transparent_crc(p_1157->g_367.sc, "p_1157->g_367.sc", print_hash_value);
    transparent_crc(p_1157->g_367.sd, "p_1157->g_367.sd", print_hash_value);
    transparent_crc(p_1157->g_367.se, "p_1157->g_367.se", print_hash_value);
    transparent_crc(p_1157->g_367.sf, "p_1157->g_367.sf", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1157->g_380[i], "p_1157->g_380[i]", print_hash_value);

    }
    transparent_crc(p_1157->g_387, "p_1157->g_387", print_hash_value);
    transparent_crc(p_1157->g_412.s0, "p_1157->g_412.s0", print_hash_value);
    transparent_crc(p_1157->g_412.s1, "p_1157->g_412.s1", print_hash_value);
    transparent_crc(p_1157->g_412.s2, "p_1157->g_412.s2", print_hash_value);
    transparent_crc(p_1157->g_412.s3, "p_1157->g_412.s3", print_hash_value);
    transparent_crc(p_1157->g_412.s4, "p_1157->g_412.s4", print_hash_value);
    transparent_crc(p_1157->g_412.s5, "p_1157->g_412.s5", print_hash_value);
    transparent_crc(p_1157->g_412.s6, "p_1157->g_412.s6", print_hash_value);
    transparent_crc(p_1157->g_412.s7, "p_1157->g_412.s7", print_hash_value);
    transparent_crc(p_1157->g_412.s8, "p_1157->g_412.s8", print_hash_value);
    transparent_crc(p_1157->g_412.s9, "p_1157->g_412.s9", print_hash_value);
    transparent_crc(p_1157->g_412.sa, "p_1157->g_412.sa", print_hash_value);
    transparent_crc(p_1157->g_412.sb, "p_1157->g_412.sb", print_hash_value);
    transparent_crc(p_1157->g_412.sc, "p_1157->g_412.sc", print_hash_value);
    transparent_crc(p_1157->g_412.sd, "p_1157->g_412.sd", print_hash_value);
    transparent_crc(p_1157->g_412.se, "p_1157->g_412.se", print_hash_value);
    transparent_crc(p_1157->g_412.sf, "p_1157->g_412.sf", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1157->g_431[i][j][k], "p_1157->g_431[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1157->g_440.x, "p_1157->g_440.x", print_hash_value);
    transparent_crc(p_1157->g_440.y, "p_1157->g_440.y", print_hash_value);
    transparent_crc(p_1157->g_442.s0, "p_1157->g_442.s0", print_hash_value);
    transparent_crc(p_1157->g_442.s1, "p_1157->g_442.s1", print_hash_value);
    transparent_crc(p_1157->g_442.s2, "p_1157->g_442.s2", print_hash_value);
    transparent_crc(p_1157->g_442.s3, "p_1157->g_442.s3", print_hash_value);
    transparent_crc(p_1157->g_442.s4, "p_1157->g_442.s4", print_hash_value);
    transparent_crc(p_1157->g_442.s5, "p_1157->g_442.s5", print_hash_value);
    transparent_crc(p_1157->g_442.s6, "p_1157->g_442.s6", print_hash_value);
    transparent_crc(p_1157->g_442.s7, "p_1157->g_442.s7", print_hash_value);
    transparent_crc(p_1157->g_442.s8, "p_1157->g_442.s8", print_hash_value);
    transparent_crc(p_1157->g_442.s9, "p_1157->g_442.s9", print_hash_value);
    transparent_crc(p_1157->g_442.sa, "p_1157->g_442.sa", print_hash_value);
    transparent_crc(p_1157->g_442.sb, "p_1157->g_442.sb", print_hash_value);
    transparent_crc(p_1157->g_442.sc, "p_1157->g_442.sc", print_hash_value);
    transparent_crc(p_1157->g_442.sd, "p_1157->g_442.sd", print_hash_value);
    transparent_crc(p_1157->g_442.se, "p_1157->g_442.se", print_hash_value);
    transparent_crc(p_1157->g_442.sf, "p_1157->g_442.sf", print_hash_value);
    transparent_crc(p_1157->g_445.x, "p_1157->g_445.x", print_hash_value);
    transparent_crc(p_1157->g_445.y, "p_1157->g_445.y", print_hash_value);
    transparent_crc(p_1157->g_449, "p_1157->g_449", print_hash_value);
    transparent_crc(p_1157->g_457, "p_1157->g_457", print_hash_value);
    transparent_crc(p_1157->g_484.s0, "p_1157->g_484.s0", print_hash_value);
    transparent_crc(p_1157->g_484.s1, "p_1157->g_484.s1", print_hash_value);
    transparent_crc(p_1157->g_484.s2, "p_1157->g_484.s2", print_hash_value);
    transparent_crc(p_1157->g_484.s3, "p_1157->g_484.s3", print_hash_value);
    transparent_crc(p_1157->g_484.s4, "p_1157->g_484.s4", print_hash_value);
    transparent_crc(p_1157->g_484.s5, "p_1157->g_484.s5", print_hash_value);
    transparent_crc(p_1157->g_484.s6, "p_1157->g_484.s6", print_hash_value);
    transparent_crc(p_1157->g_484.s7, "p_1157->g_484.s7", print_hash_value);
    transparent_crc(p_1157->g_484.s8, "p_1157->g_484.s8", print_hash_value);
    transparent_crc(p_1157->g_484.s9, "p_1157->g_484.s9", print_hash_value);
    transparent_crc(p_1157->g_484.sa, "p_1157->g_484.sa", print_hash_value);
    transparent_crc(p_1157->g_484.sb, "p_1157->g_484.sb", print_hash_value);
    transparent_crc(p_1157->g_484.sc, "p_1157->g_484.sc", print_hash_value);
    transparent_crc(p_1157->g_484.sd, "p_1157->g_484.sd", print_hash_value);
    transparent_crc(p_1157->g_484.se, "p_1157->g_484.se", print_hash_value);
    transparent_crc(p_1157->g_484.sf, "p_1157->g_484.sf", print_hash_value);
    transparent_crc(p_1157->g_539.s0, "p_1157->g_539.s0", print_hash_value);
    transparent_crc(p_1157->g_539.s1, "p_1157->g_539.s1", print_hash_value);
    transparent_crc(p_1157->g_539.s2, "p_1157->g_539.s2", print_hash_value);
    transparent_crc(p_1157->g_539.s3, "p_1157->g_539.s3", print_hash_value);
    transparent_crc(p_1157->g_539.s4, "p_1157->g_539.s4", print_hash_value);
    transparent_crc(p_1157->g_539.s5, "p_1157->g_539.s5", print_hash_value);
    transparent_crc(p_1157->g_539.s6, "p_1157->g_539.s6", print_hash_value);
    transparent_crc(p_1157->g_539.s7, "p_1157->g_539.s7", print_hash_value);
    transparent_crc(p_1157->g_539.s8, "p_1157->g_539.s8", print_hash_value);
    transparent_crc(p_1157->g_539.s9, "p_1157->g_539.s9", print_hash_value);
    transparent_crc(p_1157->g_539.sa, "p_1157->g_539.sa", print_hash_value);
    transparent_crc(p_1157->g_539.sb, "p_1157->g_539.sb", print_hash_value);
    transparent_crc(p_1157->g_539.sc, "p_1157->g_539.sc", print_hash_value);
    transparent_crc(p_1157->g_539.sd, "p_1157->g_539.sd", print_hash_value);
    transparent_crc(p_1157->g_539.se, "p_1157->g_539.se", print_hash_value);
    transparent_crc(p_1157->g_539.sf, "p_1157->g_539.sf", print_hash_value);
    transparent_crc(p_1157->g_542, "p_1157->g_542", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1157->g_547[i][j], "p_1157->g_547[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1157->g_548, "p_1157->g_548", print_hash_value);
    transparent_crc(p_1157->g_571.s0, "p_1157->g_571.s0", print_hash_value);
    transparent_crc(p_1157->g_571.s1, "p_1157->g_571.s1", print_hash_value);
    transparent_crc(p_1157->g_571.s2, "p_1157->g_571.s2", print_hash_value);
    transparent_crc(p_1157->g_571.s3, "p_1157->g_571.s3", print_hash_value);
    transparent_crc(p_1157->g_571.s4, "p_1157->g_571.s4", print_hash_value);
    transparent_crc(p_1157->g_571.s5, "p_1157->g_571.s5", print_hash_value);
    transparent_crc(p_1157->g_571.s6, "p_1157->g_571.s6", print_hash_value);
    transparent_crc(p_1157->g_571.s7, "p_1157->g_571.s7", print_hash_value);
    transparent_crc(p_1157->g_580.x, "p_1157->g_580.x", print_hash_value);
    transparent_crc(p_1157->g_580.y, "p_1157->g_580.y", print_hash_value);
    transparent_crc(p_1157->g_580.z, "p_1157->g_580.z", print_hash_value);
    transparent_crc(p_1157->g_580.w, "p_1157->g_580.w", print_hash_value);
    transparent_crc(p_1157->g_628, "p_1157->g_628", print_hash_value);
    transparent_crc(p_1157->g_641.x, "p_1157->g_641.x", print_hash_value);
    transparent_crc(p_1157->g_641.y, "p_1157->g_641.y", print_hash_value);
    transparent_crc(p_1157->g_641.z, "p_1157->g_641.z", print_hash_value);
    transparent_crc(p_1157->g_641.w, "p_1157->g_641.w", print_hash_value);
    transparent_crc(p_1157->g_665.x, "p_1157->g_665.x", print_hash_value);
    transparent_crc(p_1157->g_665.y, "p_1157->g_665.y", print_hash_value);
    transparent_crc(p_1157->g_665.z, "p_1157->g_665.z", print_hash_value);
    transparent_crc(p_1157->g_665.w, "p_1157->g_665.w", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1157->g_693[i][j][k], "p_1157->g_693[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1157->g_716.x, "p_1157->g_716.x", print_hash_value);
    transparent_crc(p_1157->g_716.y, "p_1157->g_716.y", print_hash_value);
    transparent_crc(p_1157->g_717.x, "p_1157->g_717.x", print_hash_value);
    transparent_crc(p_1157->g_717.y, "p_1157->g_717.y", print_hash_value);
    transparent_crc(p_1157->g_717.z, "p_1157->g_717.z", print_hash_value);
    transparent_crc(p_1157->g_717.w, "p_1157->g_717.w", print_hash_value);
    transparent_crc(p_1157->g_727, "p_1157->g_727", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1157->g_732[i][j][k], "p_1157->g_732[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1157->g_741.x, "p_1157->g_741.x", print_hash_value);
    transparent_crc(p_1157->g_741.y, "p_1157->g_741.y", print_hash_value);
    transparent_crc(p_1157->g_741.z, "p_1157->g_741.z", print_hash_value);
    transparent_crc(p_1157->g_741.w, "p_1157->g_741.w", print_hash_value);
    transparent_crc(p_1157->g_743.s0, "p_1157->g_743.s0", print_hash_value);
    transparent_crc(p_1157->g_743.s1, "p_1157->g_743.s1", print_hash_value);
    transparent_crc(p_1157->g_743.s2, "p_1157->g_743.s2", print_hash_value);
    transparent_crc(p_1157->g_743.s3, "p_1157->g_743.s3", print_hash_value);
    transparent_crc(p_1157->g_743.s4, "p_1157->g_743.s4", print_hash_value);
    transparent_crc(p_1157->g_743.s5, "p_1157->g_743.s5", print_hash_value);
    transparent_crc(p_1157->g_743.s6, "p_1157->g_743.s6", print_hash_value);
    transparent_crc(p_1157->g_743.s7, "p_1157->g_743.s7", print_hash_value);
    transparent_crc(p_1157->g_746.s0, "p_1157->g_746.s0", print_hash_value);
    transparent_crc(p_1157->g_746.s1, "p_1157->g_746.s1", print_hash_value);
    transparent_crc(p_1157->g_746.s2, "p_1157->g_746.s2", print_hash_value);
    transparent_crc(p_1157->g_746.s3, "p_1157->g_746.s3", print_hash_value);
    transparent_crc(p_1157->g_746.s4, "p_1157->g_746.s4", print_hash_value);
    transparent_crc(p_1157->g_746.s5, "p_1157->g_746.s5", print_hash_value);
    transparent_crc(p_1157->g_746.s6, "p_1157->g_746.s6", print_hash_value);
    transparent_crc(p_1157->g_746.s7, "p_1157->g_746.s7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_1157->g_754[i][j][k], "p_1157->g_754[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1157->g_785.x, "p_1157->g_785.x", print_hash_value);
    transparent_crc(p_1157->g_785.y, "p_1157->g_785.y", print_hash_value);
    transparent_crc(p_1157->g_805.s0, "p_1157->g_805.s0", print_hash_value);
    transparent_crc(p_1157->g_805.s1, "p_1157->g_805.s1", print_hash_value);
    transparent_crc(p_1157->g_805.s2, "p_1157->g_805.s2", print_hash_value);
    transparent_crc(p_1157->g_805.s3, "p_1157->g_805.s3", print_hash_value);
    transparent_crc(p_1157->g_805.s4, "p_1157->g_805.s4", print_hash_value);
    transparent_crc(p_1157->g_805.s5, "p_1157->g_805.s5", print_hash_value);
    transparent_crc(p_1157->g_805.s6, "p_1157->g_805.s6", print_hash_value);
    transparent_crc(p_1157->g_805.s7, "p_1157->g_805.s7", print_hash_value);
    transparent_crc(p_1157->g_809.x, "p_1157->g_809.x", print_hash_value);
    transparent_crc(p_1157->g_809.y, "p_1157->g_809.y", print_hash_value);
    transparent_crc(p_1157->g_814.s0, "p_1157->g_814.s0", print_hash_value);
    transparent_crc(p_1157->g_814.s1, "p_1157->g_814.s1", print_hash_value);
    transparent_crc(p_1157->g_814.s2, "p_1157->g_814.s2", print_hash_value);
    transparent_crc(p_1157->g_814.s3, "p_1157->g_814.s3", print_hash_value);
    transparent_crc(p_1157->g_814.s4, "p_1157->g_814.s4", print_hash_value);
    transparent_crc(p_1157->g_814.s5, "p_1157->g_814.s5", print_hash_value);
    transparent_crc(p_1157->g_814.s6, "p_1157->g_814.s6", print_hash_value);
    transparent_crc(p_1157->g_814.s7, "p_1157->g_814.s7", print_hash_value);
    transparent_crc(p_1157->g_814.s8, "p_1157->g_814.s8", print_hash_value);
    transparent_crc(p_1157->g_814.s9, "p_1157->g_814.s9", print_hash_value);
    transparent_crc(p_1157->g_814.sa, "p_1157->g_814.sa", print_hash_value);
    transparent_crc(p_1157->g_814.sb, "p_1157->g_814.sb", print_hash_value);
    transparent_crc(p_1157->g_814.sc, "p_1157->g_814.sc", print_hash_value);
    transparent_crc(p_1157->g_814.sd, "p_1157->g_814.sd", print_hash_value);
    transparent_crc(p_1157->g_814.se, "p_1157->g_814.se", print_hash_value);
    transparent_crc(p_1157->g_814.sf, "p_1157->g_814.sf", print_hash_value);
    transparent_crc(p_1157->g_815.s0, "p_1157->g_815.s0", print_hash_value);
    transparent_crc(p_1157->g_815.s1, "p_1157->g_815.s1", print_hash_value);
    transparent_crc(p_1157->g_815.s2, "p_1157->g_815.s2", print_hash_value);
    transparent_crc(p_1157->g_815.s3, "p_1157->g_815.s3", print_hash_value);
    transparent_crc(p_1157->g_815.s4, "p_1157->g_815.s4", print_hash_value);
    transparent_crc(p_1157->g_815.s5, "p_1157->g_815.s5", print_hash_value);
    transparent_crc(p_1157->g_815.s6, "p_1157->g_815.s6", print_hash_value);
    transparent_crc(p_1157->g_815.s7, "p_1157->g_815.s7", print_hash_value);
    transparent_crc(p_1157->g_817.x, "p_1157->g_817.x", print_hash_value);
    transparent_crc(p_1157->g_817.y, "p_1157->g_817.y", print_hash_value);
    transparent_crc(p_1157->g_820.s0, "p_1157->g_820.s0", print_hash_value);
    transparent_crc(p_1157->g_820.s1, "p_1157->g_820.s1", print_hash_value);
    transparent_crc(p_1157->g_820.s2, "p_1157->g_820.s2", print_hash_value);
    transparent_crc(p_1157->g_820.s3, "p_1157->g_820.s3", print_hash_value);
    transparent_crc(p_1157->g_820.s4, "p_1157->g_820.s4", print_hash_value);
    transparent_crc(p_1157->g_820.s5, "p_1157->g_820.s5", print_hash_value);
    transparent_crc(p_1157->g_820.s6, "p_1157->g_820.s6", print_hash_value);
    transparent_crc(p_1157->g_820.s7, "p_1157->g_820.s7", print_hash_value);
    transparent_crc(p_1157->g_820.s8, "p_1157->g_820.s8", print_hash_value);
    transparent_crc(p_1157->g_820.s9, "p_1157->g_820.s9", print_hash_value);
    transparent_crc(p_1157->g_820.sa, "p_1157->g_820.sa", print_hash_value);
    transparent_crc(p_1157->g_820.sb, "p_1157->g_820.sb", print_hash_value);
    transparent_crc(p_1157->g_820.sc, "p_1157->g_820.sc", print_hash_value);
    transparent_crc(p_1157->g_820.sd, "p_1157->g_820.sd", print_hash_value);
    transparent_crc(p_1157->g_820.se, "p_1157->g_820.se", print_hash_value);
    transparent_crc(p_1157->g_820.sf, "p_1157->g_820.sf", print_hash_value);
    transparent_crc(p_1157->g_839.x, "p_1157->g_839.x", print_hash_value);
    transparent_crc(p_1157->g_839.y, "p_1157->g_839.y", print_hash_value);
    transparent_crc(p_1157->g_844.x, "p_1157->g_844.x", print_hash_value);
    transparent_crc(p_1157->g_844.y, "p_1157->g_844.y", print_hash_value);
    transparent_crc(p_1157->g_844.z, "p_1157->g_844.z", print_hash_value);
    transparent_crc(p_1157->g_844.w, "p_1157->g_844.w", print_hash_value);
    transparent_crc(p_1157->g_852.x, "p_1157->g_852.x", print_hash_value);
    transparent_crc(p_1157->g_852.y, "p_1157->g_852.y", print_hash_value);
    transparent_crc(p_1157->g_872.x, "p_1157->g_872.x", print_hash_value);
    transparent_crc(p_1157->g_872.y, "p_1157->g_872.y", print_hash_value);
    transparent_crc(p_1157->g_872.z, "p_1157->g_872.z", print_hash_value);
    transparent_crc(p_1157->g_872.w, "p_1157->g_872.w", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1157->g_895[i], "p_1157->g_895[i]", print_hash_value);

    }
    transparent_crc(p_1157->g_966, "p_1157->g_966", print_hash_value);
    transparent_crc(p_1157->g_995.x, "p_1157->g_995.x", print_hash_value);
    transparent_crc(p_1157->g_995.y, "p_1157->g_995.y", print_hash_value);
    transparent_crc(p_1157->g_1046, "p_1157->g_1046", print_hash_value);
    transparent_crc(p_1157->v_collective, "p_1157->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 15; i++)
            transparent_crc(p_1157->g_special_values[i + 15 * get_linear_group_id()], "p_1157->g_special_values[i + 15 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 15; i++)
            transparent_crc(p_1157->l_special_values[i], "p_1157->l_special_values[i]", print_hash_value);
    transparent_crc(p_1157->l_comm_values[get_linear_local_id()], "p_1157->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1157->g_comm_values[get_linear_group_id() * 47 + get_linear_local_id()], "p_1157->g_comm_values[get_linear_group_id() * 47 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
