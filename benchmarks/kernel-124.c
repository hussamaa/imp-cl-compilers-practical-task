// --atomics 87 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 49,43,1 -l 1,1,1
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

__constant uint32_t permutations[10][1] = {
{0}, // permutation 0
{0}, // permutation 1
{0}, // permutation 2
{0}, // permutation 3
{0}, // permutation 4
{0}, // permutation 5
{0}, // permutation 6
{0}, // permutation 7
{0}, // permutation 8
{0} // permutation 9
};

// Seed: 1471371524

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int32_t g_6;
    VECTOR(uint16_t, 4) g_19;
    uint16_t g_48;
    int8_t g_52;
    int8_t g_56;
    volatile uint32_t g_63;
    VECTOR(uint8_t, 2) g_73;
    VECTOR(uint64_t, 8) g_78;
    int32_t * volatile g_92;
    int16_t g_116;
    uint32_t g_120;
    VECTOR(uint32_t, 4) g_133;
    volatile VECTOR(uint32_t, 16) g_134;
    volatile int8_t g_161;
    uint8_t g_162;
    volatile VECTOR(int16_t, 4) g_178;
    uint16_t g_186;
    VECTOR(int32_t, 4) g_191;
    volatile int64_t g_194;
    volatile int64_t *g_193;
    volatile int64_t **g_192;
    volatile VECTOR(int16_t, 2) g_195;
    int64_t g_197;
    int32_t *g_203;
    int32_t ** volatile g_202;
    volatile uint16_t g_218;
    int32_t *g_221;
    VECTOR(uint32_t, 4) g_222;
    VECTOR(uint32_t, 4) g_223;
    VECTOR(int16_t, 16) g_239;
    int32_t ** volatile g_306[6];
    int32_t ** volatile g_307;
    volatile VECTOR(uint8_t, 4) g_378;
    VECTOR(uint8_t, 2) g_389;
    uint64_t g_398;
    volatile VECTOR(int8_t, 2) g_402;
    VECTOR(int16_t, 2) g_409;
    VECTOR(int16_t, 4) g_410;
    int32_t g_411;
    int64_t g_444;
    volatile VECTOR(int16_t, 16) g_465;
    volatile VECTOR(int8_t, 4) g_471;
    VECTOR(int32_t, 2) g_483;
    int8_t g_487;
    volatile VECTOR(int64_t, 16) g_517;
    VECTOR(int8_t, 16) g_523;
    VECTOR(uint8_t, 2) g_533;
    int32_t ** volatile g_537[9];
    volatile VECTOR(uint8_t, 8) g_540;
    VECTOR(uint32_t, 8) g_550;
    VECTOR(uint32_t, 16) g_551;
    VECTOR(uint32_t, 2) g_552;
    volatile VECTOR(uint32_t, 16) g_558;
    int32_t ** volatile g_566;
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
uint32_t  func_1(struct S0 * p_567);
int32_t * func_2(int64_t  p_3, struct S0 * p_567);
int16_t  func_7(uint16_t  p_8, struct S0 * p_567);
uint16_t  func_9(uint32_t  p_10, int16_t  p_11, int32_t * p_12, int32_t * p_13, struct S0 * p_567);
int32_t * func_14(uint32_t  p_15, int32_t  p_16, int32_t * p_17, struct S0 * p_567);
int32_t  func_20(int32_t * p_21, uint16_t  p_22, struct S0 * p_567);
int32_t * func_23(int32_t * p_24, int32_t * p_25, int64_t  p_26, int32_t  p_27, struct S0 * p_567);
int32_t * func_28(uint32_t  p_29, uint32_t  p_30, struct S0 * p_567);
uint32_t  func_33(uint32_t  p_34, int32_t * p_35, int32_t  p_36, int32_t * p_37, int32_t * p_38, struct S0 * p_567);
int64_t  func_41(uint16_t  p_42, int32_t  p_43, uint64_t  p_44, int16_t  p_45, int32_t * p_46, struct S0 * p_567);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_567->l_comm_values p_567->g_6 p_567->g_comm_values p_567->g_19 p_567->g_48 p_567->g_52 p_567->g_63 p_567->g_73 p_567->g_78 p_567->g_56 p_567->g_92 p_567->g_133 p_567->g_134 p_567->g_120 p_567->g_162 p_567->g_161 p_567->g_178 p_567->g_186 p_567->g_191 p_567->g_192 p_567->g_195 p_567->g_197 p_567->g_202 p_567->g_218 p_567->g_194 p_567->g_221 p_567->g_203 p_567->g_222 p_567->g_223 p_567->g_239 p_567->g_116 p_567->g_193 p_567->g_307 p_567->g_378 p_567->g_389 p_567->g_398 p_567->g_402 p_567->g_409 p_567->g_410 p_567->g_411 p_567->g_444 p_567->g_465 p_567->g_471 p_567->g_483 p_567->g_487 p_567->g_517 p_567->g_523 p_567->g_533 p_567->g_540 p_567->g_550 p_567->g_551 p_567->g_552 p_567->g_558 p_567->g_566
 * writes: p_567->g_6 p_567->g_48 p_567->g_52 p_567->g_63 p_567->l_comm_values p_567->g_78 p_567->g_116 p_567->g_120 p_567->g_162 p_567->g_56 p_567->g_186 p_567->g_197 p_567->g_203 p_567->g_218 p_567->g_comm_values p_567->g_191 p_567->g_73 p_567->g_221 p_567->g_398 p_567->g_239 p_567->g_444 p_567->g_19
 */
uint32_t  func_1(struct S0 * p_567)
{ /* block id: 4 */
    uint32_t l_545[6] = {0x5AD94323L,0x5AD94323L,0x5AD94323L,0x5AD94323L,0x5AD94323L,0x5AD94323L};
    VECTOR(uint32_t, 16) l_553 = (VECTOR(uint32_t, 16))(8UL, (VECTOR(uint32_t, 4))(8UL, (VECTOR(uint32_t, 2))(8UL, 0x9F019B49L), 0x9F019B49L), 0x9F019B49L, 8UL, 0x9F019B49L, (VECTOR(uint32_t, 2))(8UL, 0x9F019B49L), (VECTOR(uint32_t, 2))(8UL, 0x9F019B49L), 8UL, 0x9F019B49L, 8UL, 0x9F019B49L);
    int16_t *l_563 = &p_567->g_116;
    int32_t *l_564 = &p_567->g_6;
    int32_t *l_565[9][9][3] = {{{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0}},{{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0}},{{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0}},{{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0}},{{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0}},{{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0}},{{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0}},{{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0}},{{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0},{&p_567->g_411,(void*)0,(void*)0}}};
    int i, j, k;
    (*p_567->g_307) = func_2(p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 1))], p_567);
    (*l_564) = ((&p_567->g_186 != (p_567->g_222.x , &p_567->g_186)) , (((safe_add_func_int64_t_s_s((((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 4))(p_567->g_540.s1000)), ((VECTOR(uint8_t, 4))((safe_div_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((65528UL & ((l_545[1] = 65533UL) & (!(safe_sub_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_567->g_550.s60053610)).lo)).yxzxwwwxzxxyxxyy)).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 16))(p_567->g_551.s6bd9b00e596d2a9b)).s46ae, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 16))(p_567->g_552.xyxxyxyyyxyxyyxy)).sf7, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(4294967295UL, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(l_553.sc38cd11b)).s20))).yxxyxyyy)), (((safe_mod_func_int16_t_s_s(((p_567->g_19.x++) == l_553.s2), ((*l_563) ^= (((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 4))(1UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(sub_sat(((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 2))(4294967295UL, 1UL)).xxyxxxxx, ((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 4))(p_567->g_558.se74d)).wwzxxxyzxzyyzyyy, ((VECTOR(uint32_t, 16))(((((safe_lshift_func_int16_t_s_s(((0xD2AB8A5AL == ((+((safe_mod_func_uint8_t_u_u((l_553.sa == p_567->g_186), p_567->g_63)) < p_567->g_6)) == FAKE_DIVERGE(p_567->local_0_offset, get_local_id(0), 10))) != l_553.sd), 8)) ^ p_567->g_389.x) ^ 0x41L) >= p_567->g_223.w), 9UL, ((VECTOR(uint32_t, 8))(2UL)), p_567->g_444, ((VECTOR(uint32_t, 4))(1UL)), 4294967295UL))))).even))).s5257075057753163, ((VECTOR(uint32_t, 16))(0x2B57E506L))))).s43, ((VECTOR(uint32_t, 2))(0UL))))))), 0UL)).wxzxxwzxzwzyzxyw, ((VECTOR(uint32_t, 16))(7UL))))).even, ((VECTOR(uint32_t, 8))(0x2DF8A6FAL))))).s7 && l_553.s9)))) || l_553.s0) == p_567->g_239.s9), ((VECTOR(uint32_t, 2))(0x70F7698DL)), l_553.s2, 0UL, 0x0D104D15L, 0UL)).se095)).hi, ((VECTOR(uint32_t, 2))(0x4205B8AFL))))), ((VECTOR(uint32_t, 2))(1UL))))).even, 4294967290UL, ((VECTOR(uint32_t, 4))(4294967295UL)), 0xA0EFBEF0L, 0xFBEC16E0L)))).hi))).zwxxzxxwxxyxzwyx)).odd))).s3, l_553.se)), 0x56C8B0C396979ABBL))))) | 4UL), FAKE_DIVERGE(p_567->global_1_offset, get_global_id(1), 10))), l_553.sf)), p_567->g_195.x, 255UL, 0xBDL))))).z & FAKE_DIVERGE(p_567->group_0_offset, get_group_id(0), 10)), GROUP_DIVERGE(2, 1))) , l_545[4]) , l_553.sf));
    (*p_567->g_566) = l_565[6][7][2];
    return p_567->g_161;
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_6 p_567->g_comm_values p_567->g_19 p_567->g_48 p_567->g_52 p_567->g_63 p_567->l_comm_values p_567->g_73 p_567->g_78 p_567->g_56 p_567->g_92 p_567->g_133 p_567->g_134 p_567->g_120 p_567->g_162 p_567->g_161 p_567->g_178 p_567->g_186 p_567->g_191 p_567->g_192 p_567->g_195 p_567->g_197 p_567->g_202 p_567->g_218 p_567->g_194 p_567->g_221 p_567->g_203 p_567->g_222 p_567->g_223 p_567->g_239 p_567->g_116 p_567->g_193 p_567->g_307 p_567->g_378 p_567->g_389 p_567->g_398 p_567->g_402 p_567->g_409 p_567->g_410 p_567->g_411 p_567->g_444 p_567->g_465 p_567->g_471 p_567->g_483 p_567->g_487 p_567->g_517 p_567->g_523 p_567->g_533
 * writes: p_567->g_6 p_567->g_48 p_567->g_52 p_567->g_63 p_567->l_comm_values p_567->g_78 p_567->g_116 p_567->g_120 p_567->g_162 p_567->g_56 p_567->g_186 p_567->g_197 p_567->g_203 p_567->g_218 p_567->g_comm_values p_567->g_191 p_567->g_73 p_567->g_221 p_567->g_398 p_567->g_239 p_567->g_444
 */
int32_t * func_2(int64_t  p_3, struct S0 * p_567)
{ /* block id: 5 */
    int32_t *l_4 = (void*)0;
    int32_t *l_5 = &p_567->g_6;
    VECTOR(uint16_t, 8) l_18 = (VECTOR(uint16_t, 8))(4UL, (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 4UL), 4UL), 4UL, 4UL, 4UL);
    uint16_t *l_47 = &p_567->g_48;
    int8_t *l_51 = &p_567->g_52;
    int8_t *l_55[6][9] = {{&p_567->g_56,&p_567->g_56,(void*)0,&p_567->g_56,&p_567->g_56,&p_567->g_56,(void*)0,&p_567->g_56,&p_567->g_56},{&p_567->g_56,&p_567->g_56,(void*)0,&p_567->g_56,&p_567->g_56,&p_567->g_56,(void*)0,&p_567->g_56,&p_567->g_56},{&p_567->g_56,&p_567->g_56,(void*)0,&p_567->g_56,&p_567->g_56,&p_567->g_56,(void*)0,&p_567->g_56,&p_567->g_56},{&p_567->g_56,&p_567->g_56,(void*)0,&p_567->g_56,&p_567->g_56,&p_567->g_56,(void*)0,&p_567->g_56,&p_567->g_56},{&p_567->g_56,&p_567->g_56,(void*)0,&p_567->g_56,&p_567->g_56,&p_567->g_56,(void*)0,&p_567->g_56,&p_567->g_56},{&p_567->g_56,&p_567->g_56,(void*)0,&p_567->g_56,&p_567->g_56,&p_567->g_56,(void*)0,&p_567->g_56,&p_567->g_56}};
    uint8_t l_57 = 0x83L;
    int64_t *l_66[5][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
    int32_t *l_67 = (void*)0;
    int32_t **l_233 = &l_67;
    int32_t **l_234[5][7] = {{&l_5,(void*)0,&l_4,&p_567->g_221,&l_5,&l_5,&p_567->g_221},{&l_5,(void*)0,&l_4,&p_567->g_221,&l_5,&l_5,&p_567->g_221},{&l_5,(void*)0,&l_4,&p_567->g_221,&l_5,&l_5,&p_567->g_221},{&l_5,(void*)0,&l_4,&p_567->g_221,&l_5,&l_5,&p_567->g_221},{&l_5,(void*)0,&l_4,&p_567->g_221,&l_5,&l_5,&p_567->g_221}};
    int i, j;
    (*l_5) ^= 0x404EE7D2L;
    (*l_233) = (((func_7((func_9(p_567->g_comm_values[p_567->tid], p_3, ((*p_567->g_202) = ((*l_233) = func_14((0x0980L ^ ((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 2))(l_18.s13)).xyyx, ((VECTOR(uint16_t, 16))(p_567->g_19.yzwywwyyyzywxzyw)).s42f3))).y), (func_20(func_23(func_28((safe_div_func_uint32_t_u_u(((void*)0 == &p_567->g_6), func_33((safe_lshift_func_int16_t_s_s(((p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 1))] ^= func_41((0x511EL > (--(*l_47))), (((*l_51) ^= ((void*)0 == &p_567->g_6)) & (((((safe_div_func_int8_t_s_s(((*l_5) = p_3), p_3)) == l_18.s7) < p_3) | 1UL) | l_57)), p_567->g_19.z, p_567->g_19.y, l_5, p_567)) ^ 0x3232AF72DA61EB61L), p_3)), l_67, p_3, l_67, l_67, p_567))), p_567->g_19.z, p_567), l_4, p_567->g_19.x, p_3, p_567), p_3, p_567) , 0L), p_567->g_221, p_567))), p_567->g_221, p_567) != 5L), p_567) , 0x2F574023D23097B7L) == 0UL) , (*p_567->g_202));
    (*l_233) = (*l_233);
    return (*p_567->g_202);
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_398 p_567->g_192 p_567->g_193 p_567->g_194 p_567->g_389 p_567->g_444 p_567->g_56 p_567->g_52 p_567->g_63 p_567->g_6 p_567->g_78 p_567->g_73 p_567->l_comm_values p_567->g_162 p_567->g_186 p_567->g_92 p_567->g_202 p_567->g_465 p_567->g_471 p_567->g_48 p_567->g_203 p_567->g_402 p_567->g_191 p_567->g_120 p_567->g_197 p_567->g_222 p_567->g_483 p_567->g_487 p_567->g_comm_values p_567->g_517 p_567->g_523 p_567->g_378 p_567->g_533 p_567->g_19
 * writes: p_567->g_398 p_567->g_444 p_567->g_120 p_567->g_6 p_567->g_48 p_567->g_116 p_567->g_162 p_567->g_56 p_567->g_186 p_567->g_203 p_567->g_239 p_567->g_52 p_567->g_191
 */
int16_t  func_7(uint16_t  p_8, struct S0 * p_567)
{ /* block id: 163 */
    uint64_t *l_449 = &p_567->g_398;
    int32_t *l_454 = &p_567->g_6;
    VECTOR(int32_t, 4) l_461 = (VECTOR(int32_t, 4))(0x50E2C84CL, (VECTOR(int32_t, 2))(0x50E2C84CL, 8L), 8L);
    VECTOR(int16_t, 8) l_464 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x2ABBL), 0x2ABBL), 0x2ABBL, (-1L), 0x2ABBL);
    VECTOR(uint32_t, 2) l_468 = (VECTOR(uint32_t, 2))(4294967287UL, 4UL);
    uint16_t l_476 = 0xB33DL;
    VECTOR(int32_t, 2) l_484 = (VECTOR(int32_t, 2))(0x135F2D92L, 0L);
    int16_t l_490[9] = {0x599CL,5L,0x599CL,0x599CL,5L,0x599CL,0x599CL,5L,0x599CL};
    VECTOR(uint16_t, 2) l_494 = (VECTOR(uint16_t, 2))(0x3228L, 0x62F4L);
    VECTOR(uint16_t, 4) l_495 = (VECTOR(uint16_t, 4))(0xD5B0L, (VECTOR(uint16_t, 2))(0xD5B0L, 0x6ED1L), 0x6ED1L);
    uint32_t l_510[7][7] = {{0UL,4294967292UL,7UL,0x3872E544L,4294967292UL,0x3872E544L,7UL},{0UL,4294967292UL,7UL,0x3872E544L,4294967292UL,0x3872E544L,7UL},{0UL,4294967292UL,7UL,0x3872E544L,4294967292UL,0x3872E544L,7UL},{0UL,4294967292UL,7UL,0x3872E544L,4294967292UL,0x3872E544L,7UL},{0UL,4294967292UL,7UL,0x3872E544L,4294967292UL,0x3872E544L,7UL},{0UL,4294967292UL,7UL,0x3872E544L,4294967292UL,0x3872E544L,7UL},{0UL,4294967292UL,7UL,0x3872E544L,4294967292UL,0x3872E544L,7UL}};
    VECTOR(int8_t, 16) l_529 = (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x76L), 0x76L), 0x76L, (-4L), 0x76L, (VECTOR(int8_t, 2))((-4L), 0x76L), (VECTOR(int8_t, 2))((-4L), 0x76L), (-4L), 0x76L, (-4L), 0x76L);
    VECTOR(int8_t, 4) l_530 = (VECTOR(int8_t, 4))(0x57L, (VECTOR(int8_t, 2))(0x57L, 0x6FL), 0x6FL);
    int i, j;
    if (((0x0FF149474F03E896L | ((*l_449)++)) | (**p_567->g_192)))
    { /* block id: 165 */
        return p_567->g_389.y;
    }
    else
    { /* block id: 167 */
        int32_t *l_456 = (void*)0;
        int32_t l_478 = 0x42755363L;
        uint16_t *l_491[10] = {(void*)0,(void*)0,&p_567->g_186,(void*)0,(void*)0,(void*)0,(void*)0,&p_567->g_186,(void*)0,(void*)0};
        VECTOR(uint64_t, 8) l_496 = (VECTOR(uint64_t, 8))(0xADEC67F501E10A44L, (VECTOR(uint64_t, 4))(0xADEC67F501E10A44L, (VECTOR(uint64_t, 2))(0xADEC67F501E10A44L, 18446744073709551609UL), 18446744073709551609UL), 18446744073709551609UL, 0xADEC67F501E10A44L, 18446744073709551609UL);
        int32_t **l_503 = &p_567->g_203;
        int32_t l_511 = 6L;
        VECTOR(int32_t, 4) l_516 = (VECTOR(int32_t, 4))(0x7CEF86F5L, (VECTOR(int32_t, 2))(0x7CEF86F5L, 0x6A57D849L), 0x6A57D849L);
        int16_t *l_518 = (void*)0;
        VECTOR(uint8_t, 16) l_524 = (VECTOR(uint8_t, 16))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0xA3L), 0xA3L), 0xA3L, 254UL, 0xA3L, (VECTOR(uint8_t, 2))(254UL, 0xA3L), (VECTOR(uint8_t, 2))(254UL, 0xA3L), 254UL, 0xA3L, 254UL, 0xA3L);
        int32_t ****l_527 = (void*)0;
        int32_t ***l_528 = (void*)0;
        uint32_t l_534 = 0xFFD5A77EL;
        uint32_t *l_535[10][3][8] = {{{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]}},{{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]}},{{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]}},{{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]}},{{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]}},{{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]}},{{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]}},{{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]}},{{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]}},{{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]},{&p_567->g_120,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))],(void*)0,(void*)0,&l_534,(void*)0,(void*)0,&permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]}}};
        uint8_t *l_536 = &p_567->g_162;
        int i, j, k;
        for (p_567->g_444 = (-10); (p_567->g_444 == 24); p_567->g_444 = safe_add_func_uint16_t_u_u(p_567->g_444, 9))
        { /* block id: 170 */
            int32_t **l_455 = (void*)0;
            int32_t **l_457 = &l_454;
            int32_t **l_458 = &l_456;
            int16_t *l_477[5];
            uint8_t *l_479 = (void*)0;
            uint8_t *l_480 = (void*)0;
            uint8_t *l_481 = (void*)0;
            uint8_t *l_482[10] = {&p_567->g_162,&p_567->g_162,&p_567->g_162,&p_567->g_162,&p_567->g_162,&p_567->g_162,&p_567->g_162,&p_567->g_162,&p_567->g_162,&p_567->g_162};
            int i;
            for (i = 0; i < 5; i++)
                l_477[i] = (void*)0;
            (*l_457) = (l_456 = l_454);
            l_454 = func_23((*l_457), ((*l_458) = (void*)0), p_8, p_8, p_567);
            l_478 &= ((~(safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(l_461.xxwywxzxxxwxwyyw)).s0a2a, ((VECTOR(int32_t, 2))(1L, 0L)).yyyx))).zzxzyzzxwwyyywwx)))).s5, (((*l_454) = (p_567->g_239.s8 = ((((**l_457) && (p_567->g_389.x || ((safe_lshift_func_int16_t_s_s((((*l_449) |= ((((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(0x2AB2L, ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_464.s5016)).lo)).xyxyxyyyyyyxyxyx)))).s7285, (int16_t)p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]))), ((VECTOR(int16_t, 4))(p_567->g_465.s1056)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(0x70DFL, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 4))(0x72L, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(min(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))((safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_468.xxxxxyyx)).s31)).even, (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xDEAEL, 65535UL)), 0xB6DAL, 1UL)).x, p_8)))), 0L, ((VECTOR(int8_t, 4))(p_567->g_471.yxxx)), 0x50L, 5L)).s02)).xxyyxxyy, ((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 2))(1L, 0x2FL)).xxxx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_8, (p_8 >= GROUP_DIVERGE(0, 1)), 0x39L, 0x1AL)).even)).xyxyyxyy)).s2616371144677232)).sffb3))).yyyxyyzx))).s6145337523343111)), (int8_t)(safe_mul_func_uint8_t_u_u((((((((*l_454) == (safe_sub_func_uint8_t_u_u(p_8, ((((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(0x51E4D2387FEA2396L, 0x64EA5317C6E4623FL, (-10L), 0L)).lo)).even & (**p_567->g_192)) > 3UL) == p_567->g_48) > GROUP_DIVERGE(1, 1))))) , (*p_567->g_202)) != l_454) || 4L) < 0x9C6DL) , 1UL), p_8))))).s90, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))((-2L)))))), 0x1CL)).yzwzxyxwyywzywxx, ((VECTOR(uint8_t, 16))(0xE6L))))).s41)), p_8, (*l_454), p_567->g_465.s0, (-8L), 0x708DL)).s36)), 0x60BFL, (-1L)))))).xwzywyxy)).even, ((VECTOR(int16_t, 4))(0x6C7BL))))), p_567->g_402.y, 0x4700L, 0x233CL)), ((VECTOR(int16_t, 8))(2L)), ((VECTOR(int16_t, 8))((-3L)))))).odd, ((VECTOR(int16_t, 4))(0x7594L))))).x < 8L) != 0L)) ^ p_8), p_567->g_191.x)) == p_567->g_120))) || p_567->g_197) != l_476))) , 0x1524FEAAL)))) , p_8);
            (*l_458) = func_28(p_567->g_222.x, (p_8 && ((*l_454) = GROUP_DIVERGE(1, 1))), p_567);
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_567->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(p_567->g_483.xxyxxxxxxyyyxxyx)).odd, ((VECTOR(int32_t, 8))(l_484.yxxyyxxy))))).even)).odd))).hi, 10))][(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]));
        l_511 |= (((safe_rshift_func_int8_t_s_u(p_567->g_487, (safe_add_func_uint16_t_u_u(((*l_454) = (p_8 = l_490[6])), ((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(l_494.xy)).hi, ((VECTOR(uint16_t, 16))(l_495.zxxzyzxwxzywwywz)).sc)) ^ ((VECTOR(uint8_t, 16))(0x56L, ((VECTOR(uint8_t, 2))(1UL, 0x9CL)), 1UL, ((((VECTOR(uint64_t, 16))(l_496.s4614342514104644)).se | ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(((l_496.s1 & GROUP_DIVERGE(0, 1)) < (safe_sub_func_int32_t_s_s(((((*l_503) = l_456) != (void*)0) && ((safe_lshift_func_uint16_t_u_s((+(p_567->g_48 , (safe_mod_func_int64_t_s_s((safe_add_func_uint16_t_u_u(((((void*)0 != &p_567->g_197) , 0x3EDC5DBAL) , p_567->g_63), p_567->g_191.w)), 18446744073709551607UL)))), 0)) ^ 0x556D9011149A5197L)), l_510[1][6]))), p_567->g_comm_values[p_567->tid])), 3)) ^ l_490[2])) && 0x7330F852L), ((VECTOR(uint8_t, 2))(0x98L)), 0xB6L, ((VECTOR(uint8_t, 2))(1UL)), ((VECTOR(uint8_t, 2))(0x9EL)), 250UL, 252UL, 0x81L, 0xC2L)).sc))))) | (-1L)) , 0x5575C45DL);
        p_567->g_191.x |= (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))(0L, 0x5DL, ((safe_mod_func_int16_t_s_s((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_516.zyywywxx)))).s7672725567732234)).s79f1)).yzzzwxzz)).s1 != (p_8 & (p_8 >= ((p_8 , (p_567->g_116 = ((*l_454) < ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(p_567->g_517.s6b)).yyxxyyyx)).s5))) , ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(p_567->g_523.s1978a6306044cdd3)).s30, ((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_524.sfd45)))), ((VECTOR(uint8_t, 4))(((*l_536) = (((p_8 > ((safe_lshift_func_int8_t_s_u(((l_528 = &l_503) == ((((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_529.s6c9992c4)).s5331046040324645)).s73, ((VECTOR(int8_t, 4))(l_530.wwzx)).even))).odd < p_567->g_378.y) , ((((*l_454) = (safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(p_567->g_533.yyxxxxxy))))))).s30, ((VECTOR(uint8_t, 16))((*l_454), ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))((((p_8 == p_8) <= p_567->g_162) > l_534), (*l_454), 0UL, 1UL)), 0x0CL, 0x3BL, 0x13L, 0x4EL)).s5407476165353007)).sda36, ((VECTOR(uint8_t, 4))(0x5AL))))).z, 0UL, 0x82L, ((VECTOR(uint8_t, 4))(0xA4L)), 250UL, ((VECTOR(uint8_t, 4))(254UL)), 0UL, 0x09L, 0xCBL)).sb8))).xyyxxxyyxxyxxxxx, ((VECTOR(uint8_t, 16))(0x34L))))).sf, (-1L)))) | 0x15925BCBL) , (void*)0))), 5)) < p_8)) , 0x73L) ^ p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 1))])), 0x90L, 5UL, 0x1BL))))))), ((VECTOR(uint8_t, 8))(0x9EL))))).s0032325102307033, ((VECTOR(uint8_t, 16))(0x39L))))).sa9))), 4L, 1L)).wxywzywx)).odd, ((VECTOR(int16_t, 4))(0L))))).even)).yyyy, ((VECTOR(int16_t, 4))(0x798FL)), ((VECTOR(int16_t, 4))(6L))))), 0x422FL, (-1L), 0x3E0BL, 0L)).s2225250717536543)).sd, p_8)), 0x0309387DL)) != 0x7BL))))), p_567->g_comm_values[p_567->tid])) != p_8), ((VECTOR(int8_t, 4))(0x06L)), p_8, 0x64L, 0L, (*l_454), p_8, p_567->g_471.x, 8L, 0x7BL, 0x0CL)).s1, 7L));
    }
    return p_567->g_19.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_239 p_567->g_202 p_567->g_203 p_567->g_6 p_567->g_78 p_567->g_116 p_567->l_comm_values p_567->g_222 p_567->g_223 p_567->g_195 p_567->g_161 p_567->g_191 p_567->g_197 p_567->g_133 p_567->g_192 p_567->g_193 p_567->g_194 p_567->g_92 p_567->g_307 p_567->g_19 p_567->g_378 p_567->g_389 p_567->g_398 p_567->g_178 p_567->g_402 p_567->g_409 p_567->g_410 p_567->g_73 p_567->g_411 p_567->g_162 p_567->g_56 p_567->g_444
 * writes: p_567->g_comm_values p_567->g_6 p_567->g_56 p_567->g_191 p_567->g_197 p_567->g_73 p_567->g_116 p_567->g_221 p_567->g_48 p_567->g_186 p_567->g_398 p_567->g_239 p_567->g_52 p_567->g_444 p_567->g_162
 */
uint16_t  func_9(uint32_t  p_10, int16_t  p_11, int32_t * p_12, int32_t * p_13, struct S0 * p_567)
{ /* block id: 66 */
    int8_t l_237 = 0x69L;
    VECTOR(int16_t, 4) l_238 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L));
    VECTOR(int16_t, 4) l_240 = (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0x1FC5L), 0x1FC5L);
    int64_t *l_249 = (void*)0;
    int64_t *l_250 = (void*)0;
    uint32_t *l_266 = (void*)0;
    int32_t l_278 = 0x6A2760B0L;
    int16_t *l_364 = &p_567->g_116;
    VECTOR(int8_t, 16) l_375 = (VECTOR(int8_t, 16))(0x31L, (VECTOR(int8_t, 4))(0x31L, (VECTOR(int8_t, 2))(0x31L, (-1L)), (-1L)), (-1L), 0x31L, (-1L), (VECTOR(int8_t, 2))(0x31L, (-1L)), (VECTOR(int8_t, 2))(0x31L, (-1L)), 0x31L, (-1L), 0x31L, (-1L));
    VECTOR(int16_t, 4) l_407 = (VECTOR(int16_t, 4))(0x42A7L, (VECTOR(int16_t, 2))(0x42A7L, (-7L)), (-7L));
    uint8_t *l_413 = (void*)0;
    uint64_t l_418 = 0x4F1A7D4CA4C91CA7L;
    int32_t l_432 = 1L;
    int32_t l_434 = 6L;
    int32_t l_435 = 0x5BBE8E49L;
    int32_t l_437 = (-4L);
    int32_t l_440[9] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
    uint32_t l_441 = 0xF892D86CL;
    VECTOR(uint32_t, 4) l_445 = (VECTOR(uint32_t, 4))(0x1ABF37FEL, (VECTOR(uint32_t, 2))(0x1ABF37FEL, 0xAD2ECBA2L), 0xAD2ECBA2L);
    int i;
    if (((safe_lshift_func_int8_t_s_u(l_237, ((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0x72AAL, ((VECTOR(int16_t, 2))(0L, 8L)), 0x46FDL, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0L, 0x7087L)).xxxy)), ((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(l_238.yxyyyxxw)), ((VECTOR(int16_t, 16))(p_567->g_239.sa8872964999978f1)).lo, ((VECTOR(int16_t, 2))(l_240.zw)).xxxyxyyx))))).hi)).s5 != p_11) >= (((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(0x2507C90EL, (**p_567->g_202))), (safe_add_func_uint16_t_u_u((0UL | (l_240.y , p_567->g_78.s3)), ((l_250 = l_249) != (((((safe_rshift_func_uint16_t_u_u((0L | p_11), 6)) , l_240.x) <= GROUP_DIVERGE(2, 1)) ^ l_238.y) , l_249)))))), p_567->g_116)) <= p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]) >= 0x8BCDL)))) == 0x4BB4250DDC316358L))
    { /* block id: 68 */
        VECTOR(int32_t, 2) l_257 = (VECTOR(int32_t, 2))(0L, 4L);
        int64_t *l_260 = (void*)0;
        int8_t *l_261[5][9];
        int32_t *l_262 = (void*)0;
        uint32_t **l_263 = (void*)0;
        uint32_t *l_265[2][7][4] = {{{&p_567->g_120,(void*)0,&p_567->g_120,(void*)0},{&p_567->g_120,(void*)0,&p_567->g_120,(void*)0},{&p_567->g_120,(void*)0,&p_567->g_120,(void*)0},{&p_567->g_120,(void*)0,&p_567->g_120,(void*)0},{&p_567->g_120,(void*)0,&p_567->g_120,(void*)0},{&p_567->g_120,(void*)0,&p_567->g_120,(void*)0},{&p_567->g_120,(void*)0,&p_567->g_120,(void*)0}},{{&p_567->g_120,(void*)0,&p_567->g_120,(void*)0},{&p_567->g_120,(void*)0,&p_567->g_120,(void*)0},{&p_567->g_120,(void*)0,&p_567->g_120,(void*)0},{&p_567->g_120,(void*)0,&p_567->g_120,(void*)0},{&p_567->g_120,(void*)0,&p_567->g_120,(void*)0},{&p_567->g_120,(void*)0,&p_567->g_120,(void*)0},{&p_567->g_120,(void*)0,&p_567->g_120,(void*)0}}};
        uint32_t **l_264[3];
        int32_t *l_267 = (void*)0;
        int32_t *l_268 = (void*)0;
        int32_t *l_269 = (void*)0;
        int32_t *l_270 = (void*)0;
        int32_t *l_271 = (void*)0;
        int32_t *l_272 = (void*)0;
        int32_t *l_273 = (void*)0;
        int32_t *l_274 = (void*)0;
        int32_t *l_275[1][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_344 = 0x157AEFCEL;
        int8_t l_356 = (-6L);
        VECTOR(int8_t, 16) l_372 = (VECTOR(int8_t, 16))(0x10L, (VECTOR(int8_t, 4))(0x10L, (VECTOR(int8_t, 2))(0x10L, (-8L)), (-8L)), (-8L), 0x10L, (-8L), (VECTOR(int8_t, 2))(0x10L, (-8L)), (VECTOR(int8_t, 2))(0x10L, (-8L)), 0x10L, (-8L), 0x10L, (-8L));
        VECTOR(int8_t, 4) l_377 = (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), (-5L)), (-5L));
        VECTOR(int16_t, 16) l_408 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x5503L), 0x5503L), 0x5503L, (-1L), 0x5503L, (VECTOR(int16_t, 2))((-1L), 0x5503L), (VECTOR(int16_t, 2))((-1L), 0x5503L), (-1L), 0x5503L, (-1L), 0x5503L);
        int32_t l_436 = (-1L);
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 9; j++)
                l_261[i][j] = &p_567->g_56;
        }
        for (i = 0; i < 3; i++)
            l_264[i] = &l_265[0][1][1];
        p_567->g_191.w ^= ((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 4))(l_257.yyxy)).x, 1UL)), ((l_266 = func_14(l_257.y, ((((((((void*)0 != &p_567->g_161) & 0x045419E4L) > (p_567->g_comm_values[p_567->tid] = (safe_add_func_int8_t_s_s(((-1L) || l_257.y), (l_237 <= 0L))))) >= FAKE_DIVERGE(p_567->global_1_offset, get_global_id(1), 10)) , l_261[2][0]) != &l_237) , l_257.y), l_262, p_567)) == &p_567->g_120))) >= p_11);
        (*p_12) ^= (-3L);
        for (p_567->g_197 = 0; (p_567->g_197 < 0); p_567->g_197++)
        { /* block id: 75 */
            uint64_t l_279[2][10] = {{18446744073709551610UL,6UL,0xBFDBCE61AD2DF6ABL,18446744073709551615UL,6UL,18446744073709551615UL,0xBFDBCE61AD2DF6ABL,6UL,18446744073709551610UL,18446744073709551610UL},{18446744073709551610UL,6UL,0xBFDBCE61AD2DF6ABL,18446744073709551615UL,6UL,18446744073709551615UL,0xBFDBCE61AD2DF6ABL,6UL,18446744073709551610UL,18446744073709551610UL}};
            int32_t **l_285 = &l_271;
            int32_t ***l_284 = &l_285;
            uint8_t *l_290[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_290[i] = (void*)0;
            l_279[1][6]++;
            (*p_567->g_92) = (((l_278 , ((p_567->g_56 = (safe_add_func_uint8_t_u_u((((*l_284) = &p_12) != &p_12), (safe_add_func_uint8_t_u_u((p_567->g_73.y = (0x3A4BC744L && (safe_lshift_func_uint8_t_u_u(p_567->g_133.y, 4)))), (safe_sub_func_int16_t_s_s(((void*)0 != &p_567->g_56), (p_567->g_222.w == ((((safe_add_func_uint32_t_u_u(((((safe_div_func_int32_t_s_s(l_278, p_10)) | l_279[1][6]) , (*p_12)) || 0x7FAB5EF2L), p_567->g_78.s5)) > (**p_567->g_192)) , FAKE_DIVERGE(p_567->local_1_offset, get_local_id(1), 10)) < l_278))))))))) != 0x09L)) >= p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]) == FAKE_DIVERGE(p_567->local_0_offset, get_local_id(0), 10));
            for (p_567->g_116 = 0; (p_567->g_116 > (-5)); --p_567->g_116)
            { /* block id: 83 */
                (*l_285) = (*p_567->g_202);
            }
        }
        if (l_240.z)
        { /* block id: 87 */
            for (l_237 = (-22); (l_237 >= (-21)); l_237 = safe_add_func_int8_t_s_s(l_237, 5))
            { /* block id: 90 */
                int32_t *l_305 = &l_278;
                for (p_11 = 15; (p_11 == (-28)); --p_11)
                { /* block id: 93 */
                    (*p_567->g_307) = l_305;
                }
            }
            if ((atomic_inc(&p_567->l_atomic_input[32]) == 5))
            { /* block id: 98 */
                int32_t l_309 = (-3L);
                int32_t *l_308 = &l_309;
                int32_t *l_310 = &l_309;
                l_310 = l_308;
                unsigned int result = 0;
                result += l_309;
                atomic_add(&p_567->l_special_values[32], result);
            }
            else
            { /* block id: 100 */
                (1 + 1);
            }
            return p_10;
        }
        else
        { /* block id: 104 */
            int32_t l_347 = 2L;
            int32_t l_367[10] = {0x69B14FCFL,0x48AD3A0BL,0x2DCA3AB2L,0x48AD3A0BL,0x69B14FCFL,0x69B14FCFL,0x48AD3A0BL,0x2DCA3AB2L,0x48AD3A0BL,0x69B14FCFL};
            int16_t *l_399 = (void*)0;
            int64_t **l_412 = &l_260;
            int16_t l_415 = 2L;
            int i;
            if ((((0x57L | l_237) > 18446744073709551615UL) > (p_567->g_78.s4 < p_11)))
            { /* block id: 105 */
                uint32_t l_361 = 0x327FB038L;
                uint16_t *l_362 = &p_567->g_48;
                int32_t l_363 = 0x64CB1B0AL;
                uint64_t *l_365 = (void*)0;
                uint64_t *l_366 = (void*)0;
                if ((atomic_inc(&p_567->g_atomic_input[87 * get_linear_group_id() + 71]) == 7))
                { /* block id: 107 */
                    int32_t l_311 = (-1L);
                    for (l_311 = 0; (l_311 <= (-17)); l_311--)
                    { /* block id: 110 */
                        VECTOR(uint32_t, 4) l_314 = (VECTOR(uint32_t, 4))(0x2DBB7D8DL, (VECTOR(uint32_t, 2))(0x2DBB7D8DL, 4294967295UL), 4294967295UL);
                        uint16_t l_315 = 0x3A5FL;
                        int32_t l_316 = (-5L);
                        uint64_t l_317 = 0x5C2B326AB20B747AL;
                        VECTOR(int64_t, 16) l_318 = (VECTOR(int64_t, 16))(0x1F560C18B8C5D578L, (VECTOR(int64_t, 4))(0x1F560C18B8C5D578L, (VECTOR(int64_t, 2))(0x1F560C18B8C5D578L, 0x025E4AB4E5E8EE7CL), 0x025E4AB4E5E8EE7CL), 0x025E4AB4E5E8EE7CL, 0x1F560C18B8C5D578L, 0x025E4AB4E5E8EE7CL, (VECTOR(int64_t, 2))(0x1F560C18B8C5D578L, 0x025E4AB4E5E8EE7CL), (VECTOR(int64_t, 2))(0x1F560C18B8C5D578L, 0x025E4AB4E5E8EE7CL), 0x1F560C18B8C5D578L, 0x025E4AB4E5E8EE7CL, 0x1F560C18B8C5D578L, 0x025E4AB4E5E8EE7CL);
                        VECTOR(int64_t, 16) l_319 = (VECTOR(int64_t, 16))(0x67082AE79FE34874L, (VECTOR(int64_t, 4))(0x67082AE79FE34874L, (VECTOR(int64_t, 2))(0x67082AE79FE34874L, (-1L)), (-1L)), (-1L), 0x67082AE79FE34874L, (-1L), (VECTOR(int64_t, 2))(0x67082AE79FE34874L, (-1L)), (VECTOR(int64_t, 2))(0x67082AE79FE34874L, (-1L)), 0x67082AE79FE34874L, (-1L), 0x67082AE79FE34874L, (-1L));
                        int64_t l_320[1];
                        int32_t l_321 = 0x529C9424L;
                        int32_t *l_322 = &l_316;
                        int32_t *l_323 = (void*)0;
                        int32_t *l_324 = &l_316;
                        int32_t *l_325 = &l_316;
                        int32_t *l_326 = &l_316;
                        int32_t *l_327[8][4] = {{&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316},{&l_316,&l_316,&l_316,&l_316}};
                        uint32_t l_328 = 0x707FB6F4L;
                        uint16_t l_329[3];
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_320[i] = 0x3F7D86DE9C2F8F8DL;
                        for (i = 0; i < 3; i++)
                            l_329[i] = 0xCBE0L;
                        l_327[2][0] = (((((VECTOR(uint64_t, 2))(upsample(((VECTOR(uint32_t, 2))(l_314.zx)), ((VECTOR(uint32_t, 4))(4294967295UL, 0x6200000DL, 4294967291UL, 0x867CB1D9L)).lo))).lo , (l_315 , (l_316 , ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 2))(0x0BC1A63A098A3ABFL, 0x4F1744BD78593C3BL)).yxyxyxxx, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(1L, l_317, ((VECTOR(int64_t, 8))(0x0F93FCF1142FC66CL, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_318.s522f)).xzywxzxywwywzxxz)).sd392)).hi)), (-1L), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0L, 1L)), (-1L), 0L)))), ((VECTOR(int64_t, 2))((-1L), (-9L))), ((VECTOR(int64_t, 2))(l_319.s38)), 0x7D29463CFA9A2799L, 0L)).s5ab2)).odd)).yyyyxxxx))).s61)))).lo))) , l_320[0]) , (l_326 = (l_325 = (l_321 , (l_324 = (l_323 = l_322))))));
                        l_328 = 0L;
                        l_329[2] = ((VECTOR(int32_t, 2))(1L, 0x58AC76A5L)).odd;
                    }
                    for (l_311 = (-8); (l_311 != (-2)); l_311 = safe_add_func_int32_t_s_s(l_311, 2))
                    { /* block id: 121 */
                        int32_t l_333 = 1L;
                        int32_t *l_332 = &l_333;
                        l_332 = (void*)0;
                    }
                    unsigned int result = 0;
                    result += l_311;
                    atomic_add(&p_567->g_special_values[87 * get_linear_group_id() + 71], result);
                }
                else
                { /* block id: 124 */
                    (1 + 1);
                }
                l_367[2] = (((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u((l_344 , (((*p_12) ^ (*p_567->g_203)) & ((safe_div_func_uint32_t_u_u((((((p_11 || l_347) ^ ((((safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((((l_278 = (((((((!((safe_mod_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((!(l_356 , ((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(1L, (safe_rshift_func_int16_t_s_u(((l_363 = (((*l_362) = (((+(*p_567->g_203)) < ((safe_mul_func_uint8_t_u_u(p_567->g_194, (0x7D05L > p_567->g_78.s3))) , l_361)) ^ p_11)) >= 0x114CL)) & 0UL), GROUP_DIVERGE(2, 1))), 0x2A00L, 0x11C0L)), l_361, ((VECTOR(int16_t, 2))(0x189AL)), 0x7CDCL)).s5577463365066514, ((VECTOR(int16_t, 16))((-2L)))))).s3677)))), ((VECTOR(int16_t, 4))(0x7971L))))).x)), l_237)), GROUP_DIVERGE(0, 1))) < (-5L))) || GROUP_DIVERGE(1, 1)) , l_364) == &p_567->g_116) && p_10) , l_347) <= l_361)) < p_567->g_116) , 0x0B21F527L) , (*p_567->g_203)), l_240.y)), p_567->g_19.y)) , p_567->g_191.z) , 0xF390243D90F6367CL) , l_367[7])) & p_11) , 0x6D78B7F5A9B57CE6L) == 0x7FBFAA622FA75F79L), l_361)) < l_361))), l_367[7])), 3)), p_11)) <= (*p_567->g_203)), 12)), l_367[7])) || p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]) , 0x0F69DFE5L);
                return p_567->g_191.w;
            }
            else
            { /* block id: 132 */
                VECTOR(uint8_t, 16) l_376 = (VECTOR(uint8_t, 16))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0UL), 0UL), 0UL, 250UL, 0UL, (VECTOR(uint8_t, 2))(250UL, 0UL), (VECTOR(uint8_t, 2))(250UL, 0UL), 250UL, 0UL, 250UL, 0UL);
                uint16_t *l_394 = &p_567->g_186;
                uint8_t *l_395[7][9] = {{(void*)0,&p_567->g_162,&p_567->g_162,(void*)0,&p_567->g_162,&p_567->g_162,&p_567->g_162,&p_567->g_162,(void*)0},{(void*)0,&p_567->g_162,&p_567->g_162,(void*)0,&p_567->g_162,&p_567->g_162,&p_567->g_162,&p_567->g_162,(void*)0},{(void*)0,&p_567->g_162,&p_567->g_162,(void*)0,&p_567->g_162,&p_567->g_162,&p_567->g_162,&p_567->g_162,(void*)0},{(void*)0,&p_567->g_162,&p_567->g_162,(void*)0,&p_567->g_162,&p_567->g_162,&p_567->g_162,&p_567->g_162,(void*)0},{(void*)0,&p_567->g_162,&p_567->g_162,(void*)0,&p_567->g_162,&p_567->g_162,&p_567->g_162,&p_567->g_162,(void*)0},{(void*)0,&p_567->g_162,&p_567->g_162,(void*)0,&p_567->g_162,&p_567->g_162,&p_567->g_162,&p_567->g_162,(void*)0},{(void*)0,&p_567->g_162,&p_567->g_162,(void*)0,&p_567->g_162,&p_567->g_162,&p_567->g_162,&p_567->g_162,(void*)0}};
                int32_t l_396 = 0x3735F19FL;
                uint64_t *l_397 = &p_567->g_398;
                int i, j;
                (*p_12) = (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 2))(l_372.sf9)).hi, ((~(safe_mul_func_uint16_t_u_u((((VECTOR(int8_t, 4))(l_375.sa65f)).z & ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_376.sd10b64af)), ((VECTOR(uint8_t, 2))(abs(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 16))(l_377.wzwzzzwzzwxyywyz)), ((VECTOR(int8_t, 2))(8L, 0x69L)).yxyyyyyyxyxyyyxx))).s33))), ((VECTOR(uint8_t, 2))(0xCEL, 0x45L)), ((VECTOR(uint8_t, 2))(p_567->g_378.zz)), 246UL, 0xF4L)).sea0d)).z), (safe_rshift_func_uint16_t_u_s((((safe_div_func_int32_t_s_s((0x00L & (((*l_397) ^= ((safe_add_func_int8_t_s_s(p_567->g_191.x, (safe_mul_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((&p_567->g_6 != (p_10 , &p_567->g_6)), (l_396 = ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(rhadd(((VECTOR(uint8_t, 2))(p_567->g_389.yx)).yxyyyyyxxyyyyxxx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(2UL, 0xE8L)), 250UL, 0x8FL)), ((safe_div_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((18446744073709551610UL && (((*l_394) = (p_11 , (p_567->g_222.y || 0x18L))) >= GROUP_DIVERGE(2, 1))), p_567->g_78.s3)), (*p_567->g_203))) == (-1L)), ((VECTOR(uint8_t, 2))(254UL)), 255UL)).s2375521074724464))))))).hi)).s60))))).xyyyxxyx, ((VECTOR(uint8_t, 8))(252UL))))).s5))) < (*p_12)), 0x0BL)))) & l_375.sc)) >= GROUP_DIVERGE(1, 1))), 0x4BF4F27DL)) <= (-7L)) < 0x3DDBE7DDL), l_240.y))))) | l_367[3]))) > 0x6C73FF8FL), l_376.sb));
            }
            if (((~(l_399 != (void*)0)) ^ ((((p_567->g_239.s8 = (!(((void*)0 != l_261[4][2]) , p_567->g_178.x))) || (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(p_567->g_402.xyxyyyxx)))).s27)), ((VECTOR(int8_t, 8))(((((safe_add_func_int16_t_s_s((safe_sub_func_int64_t_s_s((+(*p_567->g_193)), ((((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_407.zxwz)), (-1L), ((VECTOR(int16_t, 2))(l_408.saa)), 0x34AAL)), ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),int16_t,((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 2))(p_567->g_409.yy)).yyxxxxxxyxxyyyxy, ((VECTOR(int16_t, 2))(p_567->g_410.wx)).xxxyxyyyyyxxyxxy, ((VECTOR(int16_t, 2))((-1L), 3L)).xxxxxxxyxyxxyxyx))).sf885, (int16_t)(p_567->g_410.y >= ((+(((p_567->g_19.x , p_567->g_73.y) != l_347) ^ l_347)) ^ (-1L))), (int16_t)p_567->g_411))), ((VECTOR(int16_t, 4))((-1L)))))).ywzxzywz, ((VECTOR(int16_t, 8))((-7L)))))).s2 && (-8L)) , GROUP_DIVERGE(0, 1)))), 0xAAF3L)) , l_412) != (void*)0) < FAKE_DIVERGE(p_567->local_2_offset, get_local_id(2), 10)), p_11, 0x2FL, 1L, ((VECTOR(int8_t, 2))((-6L))), (-1L), 1L)), (-1L), ((VECTOR(int8_t, 2))((-3L))), ((VECTOR(int8_t, 2))(4L)), (-1L))).s5c)).lo, 2L))) , l_413) == (void*)0)))
            { /* block id: 139 */
                int64_t l_414[6] = {0x7FB923446A4278E4L,0x7FB923446A4278E4L,0x7FB923446A4278E4L,0x7FB923446A4278E4L,0x7FB923446A4278E4L,0x7FB923446A4278E4L};
                int32_t l_416 = 0L;
                int32_t l_417[10][7];
                int i, j;
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_417[i][j] = 7L;
                }
                ++l_418;
            }
            else
            { /* block id: 141 */
                int32_t **l_421 = &l_267;
                int32_t l_422 = (-1L);
                int32_t l_428 = (-9L);
                VECTOR(int32_t, 4) l_438 = (VECTOR(int32_t, 4))(0x4AC15239L, (VECTOR(int32_t, 2))(0x4AC15239L, 0x0DFDC1F9L), 0x0DFDC1F9L);
                int i;
                (*l_421) = func_28(p_567->g_162, l_238.z, p_567);
                (*l_421) = (void*)0;
                l_422 = ((void*)0 == &p_11);
                for (p_567->g_56 = 0; (p_567->g_56 >= 3); ++p_567->g_56)
                { /* block id: 147 */
                    int8_t l_425 = 1L;
                    int32_t l_426 = 0L;
                    int32_t l_427 = 0x4239623EL;
                    int32_t l_429 = 0x3AF5DD97L;
                    int32_t l_430 = 4L;
                    int32_t l_431 = 0x21100970L;
                    int32_t l_433[5] = {0x4F0B7FF9L,0x4F0B7FF9L,0x4F0B7FF9L,0x4F0B7FF9L,0x4F0B7FF9L};
                    int8_t l_439 = 0x7DL;
                    int i;
                    ++l_441;
                }
            }
        }
    }
    else
    { /* block id: 152 */
        int32_t **l_446 = &p_567->g_221;
        (*l_446) = func_14((p_567->g_444 &= 4294967295UL), (6L < ((VECTOR(uint32_t, 8))(l_445.zyxxyzyy)).s6), p_12, p_567);
        return p_10;
    }
    for (p_567->g_162 = 19; (p_567->g_162 > 29); p_567->g_162 = safe_add_func_int64_t_s_s(p_567->g_162, 1))
    { /* block id: 159 */
        return p_11;
    }
    return p_567->g_195.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_203 p_567->g_222 p_567->g_223 p_567->g_195 p_567->g_161 p_567->g_6 p_567->g_202
 * writes: p_567->g_6 p_567->g_56
 */
int32_t * func_14(uint32_t  p_15, int32_t  p_16, int32_t * p_17, struct S0 * p_567)
{ /* block id: 58 */
    int16_t l_224 = 0x6BD7L;
    int8_t *l_227 = &p_567->g_56;
    uint32_t *l_228[6];
    int32_t l_229 = 1L;
    VECTOR(int32_t, 4) l_232 = (VECTOR(int32_t, 4))(0x3AC443F8L, (VECTOR(int32_t, 2))(0x3AC443F8L, 1L), 1L);
    int i;
    for (i = 0; i < 6; i++)
        l_228[i] = (void*)0;
    (*p_567->g_203) = (-3L);
    (*p_567->g_203) &= (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(p_567->g_222.yzxz)), ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),uint32_t,((VECTOR(uint32_t, 2))(p_567->g_223.xz)), (uint32_t)((+l_224) == 4294967286UL), (uint32_t)(!(l_229 = (((*l_227) = p_567->g_195.x) != (p_17 == &p_567->g_120))))))), ((VECTOR(uint32_t, 16))(0xED5903DEL, 0xE61C9D4DL, 0UL, ((&p_567->g_116 == &p_567->g_116) != (safe_mod_func_int8_t_s_s(((((VECTOR(int32_t, 4))(l_232.xzyw)).y , ((void*)0 == l_227)) == l_232.z), p_15))), p_567->g_161, 0x388EDDE4L, 0xA1405790L, 0x43C2FE3EL, ((VECTOR(uint32_t, 4))(7UL)), l_229, 0x8C78E407L, 0xA71606EBL, 4294967292UL)).s49, ((VECTOR(uint32_t, 2))(4294967295UL))))), 0x34EDFAD6L, ((VECTOR(uint32_t, 4))(0x37AEF03BL)), GROUP_DIVERGE(2, 1), 0xC49F8FF0L, 0UL, 4294967288UL, 0xBF83AA05L)).sc <= GROUP_DIVERGE(1, 1));
    return (*p_567->g_202);
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_218 p_567->g_194
 * writes: p_567->g_218
 */
int32_t  func_20(int32_t * p_21, uint16_t  p_22, struct S0 * p_567)
{ /* block id: 54 */
    int32_t *l_204 = (void*)0;
    int32_t *l_205 = &p_567->g_6;
    int32_t *l_206 = (void*)0;
    int32_t *l_207 = (void*)0;
    int32_t *l_208 = (void*)0;
    int32_t *l_209 = (void*)0;
    int32_t *l_210 = &p_567->g_6;
    int32_t *l_211[5][8][5] = {{{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6}},{{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6}},{{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6}},{{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6}},{{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6},{&p_567->g_6,&p_567->g_6,&p_567->g_6,(void*)0,&p_567->g_6}}};
    int8_t l_212 = 0x69L;
    int32_t l_213 = (-1L);
    int16_t l_214 = 0L;
    uint16_t l_215[9];
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_215[i] = 0x7409L;
    l_215[0]++;
    p_567->g_218++;
    return p_567->g_194;
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_56 p_567->g_52 p_567->g_63 p_567->g_6 p_567->g_78 p_567->g_133 p_567->g_134 p_567->g_19 p_567->g_120 p_567->g_48 p_567->g_comm_values p_567->g_73 p_567->l_comm_values p_567->g_162 p_567->g_92 p_567->g_161 p_567->g_178 p_567->g_186 p_567->g_191 p_567->g_192 p_567->g_195 p_567->g_197 p_567->g_202
 * writes: p_567->g_116 p_567->g_120 p_567->g_6 p_567->g_48 p_567->g_162 p_567->g_56 p_567->g_186 p_567->g_197 p_567->g_203
 */
int32_t * func_23(int32_t * p_24, int32_t * p_25, int64_t  p_26, int32_t  p_27, struct S0 * p_567)
{ /* block id: 31 */
    uint32_t l_93 = 4294967295UL;
    int64_t *l_100 = (void*)0;
    int64_t **l_101 = &l_100;
    int64_t *l_103 = (void*)0;
    int64_t **l_102 = &l_103;
    int64_t *l_105 = (void*)0;
    int64_t **l_104 = &l_105;
    int16_t *l_114 = (void*)0;
    int16_t *l_115 = &p_567->g_116;
    int32_t *l_117[1];
    int16_t l_118 = 0x0979L;
    int16_t *l_119[8][3][7] = {{{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118}},{{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118}},{{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118}},{{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118}},{{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118}},{{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118}},{{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118}},{{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118},{&l_118,(void*)0,&l_118,&l_118,&l_118,&l_118,&l_118}}};
    VECTOR(uint32_t, 2) l_131 = (VECTOR(uint32_t, 2))(4294967295UL, 9UL);
    VECTOR(uint32_t, 2) l_132 = (VECTOR(uint32_t, 2))(4294967289UL, 2UL);
    VECTOR(uint32_t, 2) l_135 = (VECTOR(uint32_t, 2))(0x0DEC899BL, 0UL);
    uint8_t l_156 = 1UL;
    uint16_t *l_157 = &p_567->g_48;
    int8_t *l_158 = (void*)0;
    int32_t l_159 = 1L;
    uint64_t l_160[4];
    VECTOR(uint32_t, 16) l_175 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), 4294967295UL, 4294967295UL, 4294967295UL, 4294967295UL);
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_117[i] = &p_567->g_6;
    for (i = 0; i < 4; i++)
        l_160[i] = 0UL;
    (*p_24) ^= (l_93 , (p_567->g_56 || (safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((((p_567->g_120 = ((safe_add_func_int64_t_s_s(((((*l_101) = l_100) != ((*l_104) = ((*l_102) = &p_26))) < ((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0UL, (safe_div_func_uint64_t_u_u(0xBB253DC1765D423DL, (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(0xBEL, 0)), 10)))), 0x43L, 1UL)))).w, 255UL)) | ((VECTOR(uint64_t, 4))(18446744073709551606UL, (((*l_115) = l_93) ^ (((((p_27 >= (-6L)) , p_25) == l_117[0]) && 0x31C4CF87L) ^ p_27)), 0x9CD7CB0FD4E32F9EL, 1UL)).x)), l_118)) >= p_567->g_52)) > p_567->g_63) <= GROUP_DIVERGE(1, 1)), p_567->g_52)), p_567->g_52))));
    if ((((safe_lshift_func_uint16_t_u_s(p_567->g_78.s0, ((*l_115) = (safe_mod_func_int8_t_s_s(((((p_27 != ((p_26 & ((((safe_lshift_func_uint16_t_u_u(((*l_157) = ((safe_add_func_uint32_t_u_u(((((safe_div_func_uint32_t_u_u(((+((((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(l_131.yxyxyyyx)).s7013074575746415, ((VECTOR(uint32_t, 8))(0x84F9EDA7L, ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 2))(4294967295UL, 0x7F419F44L)).xxxxxxxy, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_132.xx)).yyyx)).xwwxwwwz, ((VECTOR(uint32_t, 16))(p_567->g_133.xzxywwzzzwyyyzyw)).even))), ((VECTOR(uint32_t, 2))(1UL, 4294967290UL)).xyyyyxxx, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_567->g_134.s3fe4262a)).even)).lo)).xxxyyyyx))).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_135.yxyx)))), 0x92C6C47EL, (((p_27 & (safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((!(safe_div_func_uint16_t_u_u((0x3F2F4379L || (((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(p_567->g_19.y, (safe_rshift_func_int16_t_s_u(p_567->g_120, ((0x109A6A1CL <= (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))((-7L), 0x3FBD44C0915FC1EAL, p_567->g_48, ((VECTOR(int64_t, 4))((-2L))), p_567->g_56, p_567->g_comm_values[p_567->tid], ((VECTOR(int64_t, 2))(0x7CF51585644E6105L)), ((VECTOR(int64_t, 4))(0x3EC00BEEA7B122D0L)), 0x0A051B88579843EBL)).s03)).lo, p_567->g_133.w))) & 0x06L))))), l_156)), p_567->g_134.sf)) , p_26) <= 0x3390L)), p_26))), 0)), p_567->g_73.x)), 0x6C4FL))) , FAKE_DIVERGE(p_567->group_0_offset, get_group_id(0), 10)) == p_567->g_19.y), 0UL, 4294967290UL)).s10, ((VECTOR(uint32_t, 2))(0xE42A3435L))))).yxyxyxxxyyyxxyxy)).s7593))), 0xC5E52BB3L, 0UL, 0x2A2E4431L)).s5536663514154701))).s9, ((VECTOR(uint32_t, 8))(1UL)), p_567->g_134.s1, p_27, ((VECTOR(uint32_t, 2))(0xFA214550L)), ((VECTOR(uint32_t, 2))(0xE8BE43F0L)), 0xF5B55EC7L)).s14a4)), ((VECTOR(uint32_t, 4))(1UL)), ((VECTOR(uint32_t, 4))(0xC417BC72L))))).x < p_567->g_73.y) , p_26)) == 0L), p_26)) , (-6L)) | FAKE_DIVERGE(p_567->local_2_offset, get_local_id(2), 10)) , p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]), 1L)) ^ p_567->g_56)), 2)) , &p_567->g_52) == l_158) , l_159)) , 4294967288UL)) , p_26) , l_105) == l_103), p_26))))) , 1L) >= l_160[1]))
    { /* block id: 40 */
        int8_t l_179[9][1][3] = {{{0x7CL,0x7CL,(-1L)}},{{0x7CL,0x7CL,(-1L)}},{{0x7CL,0x7CL,(-1L)}},{{0x7CL,0x7CL,(-1L)}},{{0x7CL,0x7CL,(-1L)}},{{0x7CL,0x7CL,(-1L)}},{{0x7CL,0x7CL,(-1L)}},{{0x7CL,0x7CL,(-1L)}},{{0x7CL,0x7CL,(-1L)}}};
        uint32_t *l_180 = (void*)0;
        uint32_t *l_181[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_182 = 0L;
        int8_t *l_183 = (void*)0;
        int8_t *l_184[1][4] = {{&p_567->g_52,&p_567->g_52,&p_567->g_52,&p_567->g_52}};
        uint8_t *l_185 = &l_156;
        int64_t *l_196 = &p_567->g_197;
        int i, j, k;
        --p_567->g_162;
        p_567->g_186 &= ((GROUP_DIVERGE(0, 1) && ((((p_567->g_73.x & (safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(((*l_185) ^= (safe_mod_func_int32_t_s_s(((p_567->g_56 = ((safe_sub_func_int32_t_s_s((p_26 | (l_158 == l_158)), ((VECTOR(uint32_t, 8))(l_175.s61942f87)).s6)) | (p_567->g_78.s1 , (safe_mul_func_int16_t_s_s((-1L), ((l_182 &= ((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 16))(1L, (*p_567->g_92), (p_567->g_161 , (((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(p_567->g_178.xzxy)).ywywxzyy)))).s40, ((VECTOR(int16_t, 8))(((*l_115) = (l_179[5][0][1] = (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(0x8EFAL, 1UL, 0x70B5L, 6UL)))))).even, ((VECTOR(uint16_t, 2))(0x4B9FL))))).yxyxxyxyyxxyxyyy)).s2230)).x > 0xD9DDL))), ((VECTOR(int16_t, 2))(0x4F50L)), ((VECTOR(int16_t, 2))((-5L))), 0x4601L, 1L, 0x0687L)).s72))), 0x0424L, 5L)), (int16_t)p_26))).y , 0x588CF5AAL)), (-9L), 0x0A552695L, (*p_567->g_92), 0x4B8FFC6AL, 0L, 0x7B04F094L, 1L, ((VECTOR(int32_t, 2))(0x0D558BC8L)), (*p_24), 0x7C66632CL, 0L, 1L)).s25))).xxyyxxyx)).odd, ((VECTOR(uint32_t, 4))(4294967292UL)), ((VECTOR(uint32_t, 4))(5UL))))).w) , p_26)))))) != 0x50L), 0x160438E2L))), 5)) & p_26), 11))) >= 65535UL) > p_567->g_73.x) > p_567->g_6)) & FAKE_DIVERGE(p_567->group_0_offset, get_group_id(0), 10));
        (*p_567->g_92) = ((safe_sub_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(p_567->g_52, (((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(7L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x00904A3EL, ((VECTOR(int32_t, 2))(p_567->g_191.wx)), ((l_179[0][0][1] != ((((FAKE_DIVERGE(p_567->local_0_offset, get_local_id(0), 10) , &p_26) != (((*l_196) |= (((p_567->g_192 != &l_100) > ((VECTOR(uint16_t, 16))(abs(((VECTOR(int16_t, 4))(p_567->g_195.xxxy)).yzzyxyyzxywzzzxy))).sb) && (*p_567->g_92))) , &p_26)) , 0L) != (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(((void*)0 == l_158), p_27)) ^ p_26), l_179[5][0][1])))) ^ p_567->g_19.y), ((VECTOR(int32_t, 2))(0x72CBD32DL)), (*p_24), 0L, (*p_567->g_92), ((VECTOR(int32_t, 4))(2L)), ((VECTOR(int32_t, 2))(0x09C1C668L)), 0x05B39BC7L)).s31)), ((VECTOR(int32_t, 2))(1L))))))), ((VECTOR(int32_t, 4))(4L)), 0x1A248FCCL)).lo)), 0x6AB918B3L, ((VECTOR(int32_t, 4))(0x732E4EA2L)), l_182, l_179[8][0][0], 0x6963C0F9L, l_179[7][0][1], ((VECTOR(int32_t, 2))(0x217AF234L)), 0x68B8525EL)).s4907))).xxxwyzxwxzxyzyxz)).s6e))).even == l_182))), 3L)) == 5UL);
    }
    else
    { /* block id: 50 */
        (*p_567->g_202) = &p_567->g_6;
    }
    return p_24;
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_52 p_567->g_73 p_567->g_6 p_567->g_78 p_567->g_19 p_567->g_48 p_567->g_56 p_567->l_comm_values p_567->g_92
 * writes: p_567->g_52 p_567->g_78 p_567->g_48 p_567->g_6
 */
int32_t * func_28(uint32_t  p_29, uint32_t  p_30, struct S0 * p_567)
{ /* block id: 22 */
    int32_t l_91 = 4L;
    for (p_567->g_52 = 4; (p_567->g_52 < (-20)); p_567->g_52 = safe_sub_func_int32_t_s_s(p_567->g_52, 2))
    { /* block id: 25 */
        uint64_t *l_77 = (void*)0;
        int32_t l_79 = (-2L);
        uint16_t *l_80 = (void*)0;
        uint32_t l_87 = 4294967295UL;
        uint16_t *l_88 = &p_567->g_48;
        (*p_567->g_92) = (safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 8))(p_567->g_73.yyyyyyxy)).lo, ((VECTOR(uint8_t, 16))((p_567->g_6 == ((VECTOR(int32_t, 8))(0x7D1FA943L, (-2L), (safe_unary_minus_func_int32_t_s(((p_30 && (safe_add_func_uint64_t_u_u((p_567->g_78.s7 &= GROUP_DIVERGE(2, 1)), l_79))) <= (l_80 == ((safe_rshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(p_567->g_19.w, ((safe_sub_func_uint8_t_u_u(((l_87 , (((VECTOR(int32_t, 4))(p_29, 0L, 9L, 0x1E6AC9C4L)).w | (((*l_88) = ((VECTOR(uint16_t, 2))(0x6AE9L, 0x5C28L)).odd) && ((p_567->g_48 , (safe_div_func_int16_t_s_s((l_91 , p_567->g_56), l_79))) >= 0L)))) >= p_567->g_52), l_91)) <= p_567->g_19.y))), 2)) , (void*)0))))), p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 1))], ((VECTOR(int32_t, 4))(0x39BE98DFL)))).s1), p_29, 0xDFL, ((VECTOR(uint8_t, 4))(1UL)), 0x91L, 0x81L, 250UL, ((VECTOR(uint8_t, 2))(246UL)), 255UL, ((VECTOR(uint8_t, 2))(0UL)), 250UL)).s8274))).zzyxzyzwxxxzwzyw, ((VECTOR(uint8_t, 16))(0x3CL))))).sa, p_567->l_comm_values[(safe_mod_func_uint32_t_u_u(p_567->tid, 1))]));
    }
    return &p_567->g_6;
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_48 p_567->g_6
 * writes: p_567->g_6
 */
uint32_t  func_33(uint32_t  p_34, int32_t * p_35, int32_t  p_36, int32_t * p_37, int32_t * p_38, struct S0 * p_567)
{ /* block id: 19 */
    int32_t *l_68 = &p_567->g_6;
    (*l_68) = p_567->g_48;
    return (*l_68);
}


/* ------------------------------------------ */
/* 
 * reads : p_567->g_63 p_567->g_comm_values
 * writes: p_567->g_6 p_567->g_63
 */
int64_t  func_41(uint16_t  p_42, int32_t  p_43, uint64_t  p_44, int16_t  p_45, int32_t * p_46, struct S0 * p_567)
{ /* block id: 10 */
    for (p_45 = 16; (p_45 > 14); p_45 = safe_sub_func_uint8_t_u_u(p_45, 8))
    { /* block id: 13 */
        uint32_t l_60 = 0xDEC53312L;
        int32_t *l_61[5][7] = {{(void*)0,&p_567->g_6,&p_567->g_6,(void*)0,(void*)0,&p_567->g_6,&p_567->g_6},{(void*)0,&p_567->g_6,&p_567->g_6,(void*)0,(void*)0,&p_567->g_6,&p_567->g_6},{(void*)0,&p_567->g_6,&p_567->g_6,(void*)0,(void*)0,&p_567->g_6,&p_567->g_6},{(void*)0,&p_567->g_6,&p_567->g_6,(void*)0,(void*)0,&p_567->g_6,&p_567->g_6},{(void*)0,&p_567->g_6,&p_567->g_6,(void*)0,(void*)0,&p_567->g_6,&p_567->g_6}};
        int64_t l_62 = 0x6767E7924A04C7C9L;
        int i, j;
        p_567->g_6 = l_60;
        p_567->g_63--;
    }
    return p_567->g_comm_values[p_567->tid];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i;
    __local volatile uint32_t l_atomic_input[87];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 87; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[87];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 87; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_comm_values[i] = 1;
    struct S0 c_568;
    struct S0* p_567 = &c_568;
    struct S0 c_569 = {
        (-1L), // p_567->g_6
        (VECTOR(uint16_t, 4))(0x3672L, (VECTOR(uint16_t, 2))(0x3672L, 65535UL), 65535UL), // p_567->g_19
        1UL, // p_567->g_48
        1L, // p_567->g_52
        0x71L, // p_567->g_56
        0x01006516L, // p_567->g_63
        (VECTOR(uint8_t, 2))(0x20L, 247UL), // p_567->g_73
        (VECTOR(uint64_t, 8))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xC4AE3B72CD76E668L), 0xC4AE3B72CD76E668L), 0xC4AE3B72CD76E668L, 18446744073709551615UL, 0xC4AE3B72CD76E668L), // p_567->g_78
        &p_567->g_6, // p_567->g_92
        (-1L), // p_567->g_116
        0x58A6D508L, // p_567->g_120
        (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 6UL), 6UL), // p_567->g_133
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xF81C38EEL), 0xF81C38EEL), 0xF81C38EEL, 4294967295UL, 0xF81C38EEL, (VECTOR(uint32_t, 2))(4294967295UL, 0xF81C38EEL), (VECTOR(uint32_t, 2))(4294967295UL, 0xF81C38EEL), 4294967295UL, 0xF81C38EEL, 4294967295UL, 0xF81C38EEL), // p_567->g_134
        0x2CL, // p_567->g_161
        0UL, // p_567->g_162
        (VECTOR(int16_t, 4))(0x3E31L, (VECTOR(int16_t, 2))(0x3E31L, 1L), 1L), // p_567->g_178
        5UL, // p_567->g_186
        (VECTOR(int32_t, 4))(0x738ED03EL, (VECTOR(int32_t, 2))(0x738ED03EL, 0x358170A9L), 0x358170A9L), // p_567->g_191
        (-5L), // p_567->g_194
        &p_567->g_194, // p_567->g_193
        &p_567->g_193, // p_567->g_192
        (VECTOR(int16_t, 2))(0x6CA2L, 0x0AEBL), // p_567->g_195
        0x2B730275B194EF10L, // p_567->g_197
        &p_567->g_6, // p_567->g_203
        &p_567->g_203, // p_567->g_202
        0xB995L, // p_567->g_218
        (void*)0, // p_567->g_221
        (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x9CF447D9L), 0x9CF447D9L), // p_567->g_222
        (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 4294967295UL), 4294967295UL), // p_567->g_223
        (VECTOR(int16_t, 16))(0x5960L, (VECTOR(int16_t, 4))(0x5960L, (VECTOR(int16_t, 2))(0x5960L, 0x2179L), 0x2179L), 0x2179L, 0x5960L, 0x2179L, (VECTOR(int16_t, 2))(0x5960L, 0x2179L), (VECTOR(int16_t, 2))(0x5960L, 0x2179L), 0x5960L, 0x2179L, 0x5960L, 0x2179L), // p_567->g_239
        {&p_567->g_203,&p_567->g_203,&p_567->g_203,&p_567->g_203,&p_567->g_203,&p_567->g_203}, // p_567->g_306
        &p_567->g_221, // p_567->g_307
        (VECTOR(uint8_t, 4))(0x72L, (VECTOR(uint8_t, 2))(0x72L, 252UL), 252UL), // p_567->g_378
        (VECTOR(uint8_t, 2))(0UL, 0UL), // p_567->g_389
        0x558930E7A6A168FFL, // p_567->g_398
        (VECTOR(int8_t, 2))(0x6AL, 0x70L), // p_567->g_402
        (VECTOR(int16_t, 2))((-1L), 0x5F16L), // p_567->g_409
        (VECTOR(int16_t, 4))(0x0BC0L, (VECTOR(int16_t, 2))(0x0BC0L, (-4L)), (-4L)), // p_567->g_410
        (-5L), // p_567->g_411
        0L, // p_567->g_444
        (VECTOR(int16_t, 16))(0x34FAL, (VECTOR(int16_t, 4))(0x34FAL, (VECTOR(int16_t, 2))(0x34FAL, 1L), 1L), 1L, 0x34FAL, 1L, (VECTOR(int16_t, 2))(0x34FAL, 1L), (VECTOR(int16_t, 2))(0x34FAL, 1L), 0x34FAL, 1L, 0x34FAL, 1L), // p_567->g_465
        (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), (-3L)), (-3L)), // p_567->g_471
        (VECTOR(int32_t, 2))(0L, 9L), // p_567->g_483
        1L, // p_567->g_487
        (VECTOR(int64_t, 16))(0x27225B9827F73DBDL, (VECTOR(int64_t, 4))(0x27225B9827F73DBDL, (VECTOR(int64_t, 2))(0x27225B9827F73DBDL, 0L), 0L), 0L, 0x27225B9827F73DBDL, 0L, (VECTOR(int64_t, 2))(0x27225B9827F73DBDL, 0L), (VECTOR(int64_t, 2))(0x27225B9827F73DBDL, 0L), 0x27225B9827F73DBDL, 0L, 0x27225B9827F73DBDL, 0L), // p_567->g_517
        (VECTOR(int8_t, 16))(0x11L, (VECTOR(int8_t, 4))(0x11L, (VECTOR(int8_t, 2))(0x11L, 0L), 0L), 0L, 0x11L, 0L, (VECTOR(int8_t, 2))(0x11L, 0L), (VECTOR(int8_t, 2))(0x11L, 0L), 0x11L, 0L, 0x11L, 0L), // p_567->g_523
        (VECTOR(uint8_t, 2))(255UL, 0xEFL), // p_567->g_533
        {&p_567->g_203,&p_567->g_203,&p_567->g_203,&p_567->g_203,&p_567->g_203,&p_567->g_203,&p_567->g_203,&p_567->g_203,&p_567->g_203}, // p_567->g_537
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 249UL), 249UL), 249UL, 1UL, 249UL), // p_567->g_540
        (VECTOR(uint32_t, 8))(0xA61B5463L, (VECTOR(uint32_t, 4))(0xA61B5463L, (VECTOR(uint32_t, 2))(0xA61B5463L, 0UL), 0UL), 0UL, 0xA61B5463L, 0UL), // p_567->g_550
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967290UL), 4294967290UL), 4294967290UL, 0UL, 4294967290UL, (VECTOR(uint32_t, 2))(0UL, 4294967290UL), (VECTOR(uint32_t, 2))(0UL, 4294967290UL), 0UL, 4294967290UL, 0UL, 4294967290UL), // p_567->g_551
        (VECTOR(uint32_t, 2))(0x38BC08ABL, 0xD8B112A1L), // p_567->g_552
        (VECTOR(uint32_t, 16))(0x79D87065L, (VECTOR(uint32_t, 4))(0x79D87065L, (VECTOR(uint32_t, 2))(0x79D87065L, 0x99B62703L), 0x99B62703L), 0x99B62703L, 0x79D87065L, 0x99B62703L, (VECTOR(uint32_t, 2))(0x79D87065L, 0x99B62703L), (VECTOR(uint32_t, 2))(0x79D87065L, 0x99B62703L), 0x79D87065L, 0x99B62703L, 0x79D87065L, 0x99B62703L), // p_567->g_558
        &p_567->g_221, // p_567->g_566
        0, // p_567->v_collective
        sequence_input[get_global_id(0)], // p_567->global_0_offset
        sequence_input[get_global_id(1)], // p_567->global_1_offset
        sequence_input[get_global_id(2)], // p_567->global_2_offset
        sequence_input[get_local_id(0)], // p_567->local_0_offset
        sequence_input[get_local_id(1)], // p_567->local_1_offset
        sequence_input[get_local_id(2)], // p_567->local_2_offset
        sequence_input[get_group_id(0)], // p_567->group_0_offset
        sequence_input[get_group_id(1)], // p_567->group_1_offset
        sequence_input[get_group_id(2)], // p_567->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 1)), permutations[0][get_linear_local_id()])), // p_567->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_568 = c_569;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_567);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_567->g_6, "p_567->g_6", print_hash_value);
    transparent_crc(p_567->g_19.x, "p_567->g_19.x", print_hash_value);
    transparent_crc(p_567->g_19.y, "p_567->g_19.y", print_hash_value);
    transparent_crc(p_567->g_19.z, "p_567->g_19.z", print_hash_value);
    transparent_crc(p_567->g_19.w, "p_567->g_19.w", print_hash_value);
    transparent_crc(p_567->g_48, "p_567->g_48", print_hash_value);
    transparent_crc(p_567->g_52, "p_567->g_52", print_hash_value);
    transparent_crc(p_567->g_56, "p_567->g_56", print_hash_value);
    transparent_crc(p_567->g_63, "p_567->g_63", print_hash_value);
    transparent_crc(p_567->g_73.x, "p_567->g_73.x", print_hash_value);
    transparent_crc(p_567->g_73.y, "p_567->g_73.y", print_hash_value);
    transparent_crc(p_567->g_78.s0, "p_567->g_78.s0", print_hash_value);
    transparent_crc(p_567->g_78.s1, "p_567->g_78.s1", print_hash_value);
    transparent_crc(p_567->g_78.s2, "p_567->g_78.s2", print_hash_value);
    transparent_crc(p_567->g_78.s3, "p_567->g_78.s3", print_hash_value);
    transparent_crc(p_567->g_78.s4, "p_567->g_78.s4", print_hash_value);
    transparent_crc(p_567->g_78.s5, "p_567->g_78.s5", print_hash_value);
    transparent_crc(p_567->g_78.s6, "p_567->g_78.s6", print_hash_value);
    transparent_crc(p_567->g_78.s7, "p_567->g_78.s7", print_hash_value);
    transparent_crc(p_567->g_116, "p_567->g_116", print_hash_value);
    transparent_crc(p_567->g_120, "p_567->g_120", print_hash_value);
    transparent_crc(p_567->g_133.x, "p_567->g_133.x", print_hash_value);
    transparent_crc(p_567->g_133.y, "p_567->g_133.y", print_hash_value);
    transparent_crc(p_567->g_133.z, "p_567->g_133.z", print_hash_value);
    transparent_crc(p_567->g_133.w, "p_567->g_133.w", print_hash_value);
    transparent_crc(p_567->g_134.s0, "p_567->g_134.s0", print_hash_value);
    transparent_crc(p_567->g_134.s1, "p_567->g_134.s1", print_hash_value);
    transparent_crc(p_567->g_134.s2, "p_567->g_134.s2", print_hash_value);
    transparent_crc(p_567->g_134.s3, "p_567->g_134.s3", print_hash_value);
    transparent_crc(p_567->g_134.s4, "p_567->g_134.s4", print_hash_value);
    transparent_crc(p_567->g_134.s5, "p_567->g_134.s5", print_hash_value);
    transparent_crc(p_567->g_134.s6, "p_567->g_134.s6", print_hash_value);
    transparent_crc(p_567->g_134.s7, "p_567->g_134.s7", print_hash_value);
    transparent_crc(p_567->g_134.s8, "p_567->g_134.s8", print_hash_value);
    transparent_crc(p_567->g_134.s9, "p_567->g_134.s9", print_hash_value);
    transparent_crc(p_567->g_134.sa, "p_567->g_134.sa", print_hash_value);
    transparent_crc(p_567->g_134.sb, "p_567->g_134.sb", print_hash_value);
    transparent_crc(p_567->g_134.sc, "p_567->g_134.sc", print_hash_value);
    transparent_crc(p_567->g_134.sd, "p_567->g_134.sd", print_hash_value);
    transparent_crc(p_567->g_134.se, "p_567->g_134.se", print_hash_value);
    transparent_crc(p_567->g_134.sf, "p_567->g_134.sf", print_hash_value);
    transparent_crc(p_567->g_161, "p_567->g_161", print_hash_value);
    transparent_crc(p_567->g_162, "p_567->g_162", print_hash_value);
    transparent_crc(p_567->g_178.x, "p_567->g_178.x", print_hash_value);
    transparent_crc(p_567->g_178.y, "p_567->g_178.y", print_hash_value);
    transparent_crc(p_567->g_178.z, "p_567->g_178.z", print_hash_value);
    transparent_crc(p_567->g_178.w, "p_567->g_178.w", print_hash_value);
    transparent_crc(p_567->g_186, "p_567->g_186", print_hash_value);
    transparent_crc(p_567->g_191.x, "p_567->g_191.x", print_hash_value);
    transparent_crc(p_567->g_191.y, "p_567->g_191.y", print_hash_value);
    transparent_crc(p_567->g_191.z, "p_567->g_191.z", print_hash_value);
    transparent_crc(p_567->g_191.w, "p_567->g_191.w", print_hash_value);
    transparent_crc(p_567->g_194, "p_567->g_194", print_hash_value);
    transparent_crc(p_567->g_195.x, "p_567->g_195.x", print_hash_value);
    transparent_crc(p_567->g_195.y, "p_567->g_195.y", print_hash_value);
    transparent_crc(p_567->g_197, "p_567->g_197", print_hash_value);
    transparent_crc(p_567->g_218, "p_567->g_218", print_hash_value);
    transparent_crc(p_567->g_222.x, "p_567->g_222.x", print_hash_value);
    transparent_crc(p_567->g_222.y, "p_567->g_222.y", print_hash_value);
    transparent_crc(p_567->g_222.z, "p_567->g_222.z", print_hash_value);
    transparent_crc(p_567->g_222.w, "p_567->g_222.w", print_hash_value);
    transparent_crc(p_567->g_223.x, "p_567->g_223.x", print_hash_value);
    transparent_crc(p_567->g_223.y, "p_567->g_223.y", print_hash_value);
    transparent_crc(p_567->g_223.z, "p_567->g_223.z", print_hash_value);
    transparent_crc(p_567->g_223.w, "p_567->g_223.w", print_hash_value);
    transparent_crc(p_567->g_239.s0, "p_567->g_239.s0", print_hash_value);
    transparent_crc(p_567->g_239.s1, "p_567->g_239.s1", print_hash_value);
    transparent_crc(p_567->g_239.s2, "p_567->g_239.s2", print_hash_value);
    transparent_crc(p_567->g_239.s3, "p_567->g_239.s3", print_hash_value);
    transparent_crc(p_567->g_239.s4, "p_567->g_239.s4", print_hash_value);
    transparent_crc(p_567->g_239.s5, "p_567->g_239.s5", print_hash_value);
    transparent_crc(p_567->g_239.s6, "p_567->g_239.s6", print_hash_value);
    transparent_crc(p_567->g_239.s7, "p_567->g_239.s7", print_hash_value);
    transparent_crc(p_567->g_239.s8, "p_567->g_239.s8", print_hash_value);
    transparent_crc(p_567->g_239.s9, "p_567->g_239.s9", print_hash_value);
    transparent_crc(p_567->g_239.sa, "p_567->g_239.sa", print_hash_value);
    transparent_crc(p_567->g_239.sb, "p_567->g_239.sb", print_hash_value);
    transparent_crc(p_567->g_239.sc, "p_567->g_239.sc", print_hash_value);
    transparent_crc(p_567->g_239.sd, "p_567->g_239.sd", print_hash_value);
    transparent_crc(p_567->g_239.se, "p_567->g_239.se", print_hash_value);
    transparent_crc(p_567->g_239.sf, "p_567->g_239.sf", print_hash_value);
    transparent_crc(p_567->g_378.x, "p_567->g_378.x", print_hash_value);
    transparent_crc(p_567->g_378.y, "p_567->g_378.y", print_hash_value);
    transparent_crc(p_567->g_378.z, "p_567->g_378.z", print_hash_value);
    transparent_crc(p_567->g_378.w, "p_567->g_378.w", print_hash_value);
    transparent_crc(p_567->g_389.x, "p_567->g_389.x", print_hash_value);
    transparent_crc(p_567->g_389.y, "p_567->g_389.y", print_hash_value);
    transparent_crc(p_567->g_398, "p_567->g_398", print_hash_value);
    transparent_crc(p_567->g_402.x, "p_567->g_402.x", print_hash_value);
    transparent_crc(p_567->g_402.y, "p_567->g_402.y", print_hash_value);
    transparent_crc(p_567->g_409.x, "p_567->g_409.x", print_hash_value);
    transparent_crc(p_567->g_409.y, "p_567->g_409.y", print_hash_value);
    transparent_crc(p_567->g_410.x, "p_567->g_410.x", print_hash_value);
    transparent_crc(p_567->g_410.y, "p_567->g_410.y", print_hash_value);
    transparent_crc(p_567->g_410.z, "p_567->g_410.z", print_hash_value);
    transparent_crc(p_567->g_410.w, "p_567->g_410.w", print_hash_value);
    transparent_crc(p_567->g_411, "p_567->g_411", print_hash_value);
    transparent_crc(p_567->g_444, "p_567->g_444", print_hash_value);
    transparent_crc(p_567->g_465.s0, "p_567->g_465.s0", print_hash_value);
    transparent_crc(p_567->g_465.s1, "p_567->g_465.s1", print_hash_value);
    transparent_crc(p_567->g_465.s2, "p_567->g_465.s2", print_hash_value);
    transparent_crc(p_567->g_465.s3, "p_567->g_465.s3", print_hash_value);
    transparent_crc(p_567->g_465.s4, "p_567->g_465.s4", print_hash_value);
    transparent_crc(p_567->g_465.s5, "p_567->g_465.s5", print_hash_value);
    transparent_crc(p_567->g_465.s6, "p_567->g_465.s6", print_hash_value);
    transparent_crc(p_567->g_465.s7, "p_567->g_465.s7", print_hash_value);
    transparent_crc(p_567->g_465.s8, "p_567->g_465.s8", print_hash_value);
    transparent_crc(p_567->g_465.s9, "p_567->g_465.s9", print_hash_value);
    transparent_crc(p_567->g_465.sa, "p_567->g_465.sa", print_hash_value);
    transparent_crc(p_567->g_465.sb, "p_567->g_465.sb", print_hash_value);
    transparent_crc(p_567->g_465.sc, "p_567->g_465.sc", print_hash_value);
    transparent_crc(p_567->g_465.sd, "p_567->g_465.sd", print_hash_value);
    transparent_crc(p_567->g_465.se, "p_567->g_465.se", print_hash_value);
    transparent_crc(p_567->g_465.sf, "p_567->g_465.sf", print_hash_value);
    transparent_crc(p_567->g_471.x, "p_567->g_471.x", print_hash_value);
    transparent_crc(p_567->g_471.y, "p_567->g_471.y", print_hash_value);
    transparent_crc(p_567->g_471.z, "p_567->g_471.z", print_hash_value);
    transparent_crc(p_567->g_471.w, "p_567->g_471.w", print_hash_value);
    transparent_crc(p_567->g_483.x, "p_567->g_483.x", print_hash_value);
    transparent_crc(p_567->g_483.y, "p_567->g_483.y", print_hash_value);
    transparent_crc(p_567->g_487, "p_567->g_487", print_hash_value);
    transparent_crc(p_567->g_517.s0, "p_567->g_517.s0", print_hash_value);
    transparent_crc(p_567->g_517.s1, "p_567->g_517.s1", print_hash_value);
    transparent_crc(p_567->g_517.s2, "p_567->g_517.s2", print_hash_value);
    transparent_crc(p_567->g_517.s3, "p_567->g_517.s3", print_hash_value);
    transparent_crc(p_567->g_517.s4, "p_567->g_517.s4", print_hash_value);
    transparent_crc(p_567->g_517.s5, "p_567->g_517.s5", print_hash_value);
    transparent_crc(p_567->g_517.s6, "p_567->g_517.s6", print_hash_value);
    transparent_crc(p_567->g_517.s7, "p_567->g_517.s7", print_hash_value);
    transparent_crc(p_567->g_517.s8, "p_567->g_517.s8", print_hash_value);
    transparent_crc(p_567->g_517.s9, "p_567->g_517.s9", print_hash_value);
    transparent_crc(p_567->g_517.sa, "p_567->g_517.sa", print_hash_value);
    transparent_crc(p_567->g_517.sb, "p_567->g_517.sb", print_hash_value);
    transparent_crc(p_567->g_517.sc, "p_567->g_517.sc", print_hash_value);
    transparent_crc(p_567->g_517.sd, "p_567->g_517.sd", print_hash_value);
    transparent_crc(p_567->g_517.se, "p_567->g_517.se", print_hash_value);
    transparent_crc(p_567->g_517.sf, "p_567->g_517.sf", print_hash_value);
    transparent_crc(p_567->g_523.s0, "p_567->g_523.s0", print_hash_value);
    transparent_crc(p_567->g_523.s1, "p_567->g_523.s1", print_hash_value);
    transparent_crc(p_567->g_523.s2, "p_567->g_523.s2", print_hash_value);
    transparent_crc(p_567->g_523.s3, "p_567->g_523.s3", print_hash_value);
    transparent_crc(p_567->g_523.s4, "p_567->g_523.s4", print_hash_value);
    transparent_crc(p_567->g_523.s5, "p_567->g_523.s5", print_hash_value);
    transparent_crc(p_567->g_523.s6, "p_567->g_523.s6", print_hash_value);
    transparent_crc(p_567->g_523.s7, "p_567->g_523.s7", print_hash_value);
    transparent_crc(p_567->g_523.s8, "p_567->g_523.s8", print_hash_value);
    transparent_crc(p_567->g_523.s9, "p_567->g_523.s9", print_hash_value);
    transparent_crc(p_567->g_523.sa, "p_567->g_523.sa", print_hash_value);
    transparent_crc(p_567->g_523.sb, "p_567->g_523.sb", print_hash_value);
    transparent_crc(p_567->g_523.sc, "p_567->g_523.sc", print_hash_value);
    transparent_crc(p_567->g_523.sd, "p_567->g_523.sd", print_hash_value);
    transparent_crc(p_567->g_523.se, "p_567->g_523.se", print_hash_value);
    transparent_crc(p_567->g_523.sf, "p_567->g_523.sf", print_hash_value);
    transparent_crc(p_567->g_533.x, "p_567->g_533.x", print_hash_value);
    transparent_crc(p_567->g_533.y, "p_567->g_533.y", print_hash_value);
    transparent_crc(p_567->g_540.s0, "p_567->g_540.s0", print_hash_value);
    transparent_crc(p_567->g_540.s1, "p_567->g_540.s1", print_hash_value);
    transparent_crc(p_567->g_540.s2, "p_567->g_540.s2", print_hash_value);
    transparent_crc(p_567->g_540.s3, "p_567->g_540.s3", print_hash_value);
    transparent_crc(p_567->g_540.s4, "p_567->g_540.s4", print_hash_value);
    transparent_crc(p_567->g_540.s5, "p_567->g_540.s5", print_hash_value);
    transparent_crc(p_567->g_540.s6, "p_567->g_540.s6", print_hash_value);
    transparent_crc(p_567->g_540.s7, "p_567->g_540.s7", print_hash_value);
    transparent_crc(p_567->g_550.s0, "p_567->g_550.s0", print_hash_value);
    transparent_crc(p_567->g_550.s1, "p_567->g_550.s1", print_hash_value);
    transparent_crc(p_567->g_550.s2, "p_567->g_550.s2", print_hash_value);
    transparent_crc(p_567->g_550.s3, "p_567->g_550.s3", print_hash_value);
    transparent_crc(p_567->g_550.s4, "p_567->g_550.s4", print_hash_value);
    transparent_crc(p_567->g_550.s5, "p_567->g_550.s5", print_hash_value);
    transparent_crc(p_567->g_550.s6, "p_567->g_550.s6", print_hash_value);
    transparent_crc(p_567->g_550.s7, "p_567->g_550.s7", print_hash_value);
    transparent_crc(p_567->g_551.s0, "p_567->g_551.s0", print_hash_value);
    transparent_crc(p_567->g_551.s1, "p_567->g_551.s1", print_hash_value);
    transparent_crc(p_567->g_551.s2, "p_567->g_551.s2", print_hash_value);
    transparent_crc(p_567->g_551.s3, "p_567->g_551.s3", print_hash_value);
    transparent_crc(p_567->g_551.s4, "p_567->g_551.s4", print_hash_value);
    transparent_crc(p_567->g_551.s5, "p_567->g_551.s5", print_hash_value);
    transparent_crc(p_567->g_551.s6, "p_567->g_551.s6", print_hash_value);
    transparent_crc(p_567->g_551.s7, "p_567->g_551.s7", print_hash_value);
    transparent_crc(p_567->g_551.s8, "p_567->g_551.s8", print_hash_value);
    transparent_crc(p_567->g_551.s9, "p_567->g_551.s9", print_hash_value);
    transparent_crc(p_567->g_551.sa, "p_567->g_551.sa", print_hash_value);
    transparent_crc(p_567->g_551.sb, "p_567->g_551.sb", print_hash_value);
    transparent_crc(p_567->g_551.sc, "p_567->g_551.sc", print_hash_value);
    transparent_crc(p_567->g_551.sd, "p_567->g_551.sd", print_hash_value);
    transparent_crc(p_567->g_551.se, "p_567->g_551.se", print_hash_value);
    transparent_crc(p_567->g_551.sf, "p_567->g_551.sf", print_hash_value);
    transparent_crc(p_567->g_552.x, "p_567->g_552.x", print_hash_value);
    transparent_crc(p_567->g_552.y, "p_567->g_552.y", print_hash_value);
    transparent_crc(p_567->g_558.s0, "p_567->g_558.s0", print_hash_value);
    transparent_crc(p_567->g_558.s1, "p_567->g_558.s1", print_hash_value);
    transparent_crc(p_567->g_558.s2, "p_567->g_558.s2", print_hash_value);
    transparent_crc(p_567->g_558.s3, "p_567->g_558.s3", print_hash_value);
    transparent_crc(p_567->g_558.s4, "p_567->g_558.s4", print_hash_value);
    transparent_crc(p_567->g_558.s5, "p_567->g_558.s5", print_hash_value);
    transparent_crc(p_567->g_558.s6, "p_567->g_558.s6", print_hash_value);
    transparent_crc(p_567->g_558.s7, "p_567->g_558.s7", print_hash_value);
    transparent_crc(p_567->g_558.s8, "p_567->g_558.s8", print_hash_value);
    transparent_crc(p_567->g_558.s9, "p_567->g_558.s9", print_hash_value);
    transparent_crc(p_567->g_558.sa, "p_567->g_558.sa", print_hash_value);
    transparent_crc(p_567->g_558.sb, "p_567->g_558.sb", print_hash_value);
    transparent_crc(p_567->g_558.sc, "p_567->g_558.sc", print_hash_value);
    transparent_crc(p_567->g_558.sd, "p_567->g_558.sd", print_hash_value);
    transparent_crc(p_567->g_558.se, "p_567->g_558.se", print_hash_value);
    transparent_crc(p_567->g_558.sf, "p_567->g_558.sf", print_hash_value);
    transparent_crc(p_567->v_collective, "p_567->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 87; i++)
            transparent_crc(p_567->g_special_values[i + 87 * get_linear_group_id()], "p_567->g_special_values[i + 87 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 87; i++)
            transparent_crc(p_567->l_special_values[i], "p_567->l_special_values[i]", print_hash_value);
    transparent_crc(p_567->l_comm_values[get_linear_local_id()], "p_567->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_567->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()], "p_567->g_comm_values[get_linear_group_id() * 1 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
