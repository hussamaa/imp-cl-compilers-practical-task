// --atomics 75 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 3,33,23 -l 3,1,1
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

__constant uint32_t permutations[10][3] = {
{2,0,1}, // permutation 0
{1,2,0}, // permutation 1
{1,2,0}, // permutation 2
{1,0,2}, // permutation 3
{1,2,0}, // permutation 4
{1,0,2}, // permutation 5
{1,0,2}, // permutation 6
{2,0,1}, // permutation 7
{1,0,2}, // permutation 8
{1,2,0} // permutation 9
};

// Seed: 349040880

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    VECTOR(int64_t, 16) g_27;
    VECTOR(uint64_t, 16) g_29;
    int64_t g_73;
    volatile int32_t g_76;
    volatile int32_t * volatile g_75;
    int8_t g_93;
    VECTOR(int32_t, 16) g_98;
    uint16_t g_117;
    uint16_t g_121;
    VECTOR(int32_t, 8) g_144;
    int32_t g_163;
    int64_t *g_174;
    int64_t ** volatile g_173;
    volatile VECTOR(int8_t, 2) g_175;
    uint32_t g_177;
    uint64_t * volatile * volatile g_241;
    uint64_t * volatile * volatile * volatile g_242;
    volatile VECTOR(int32_t, 4) g_247;
    volatile int32_t ** volatile g_249;
    uint32_t g_257;
    int32_t g_278;
    int32_t * volatile g_279;
    volatile VECTOR(int16_t, 8) g_311;
    VECTOR(int16_t, 2) g_313;
    volatile VECTOR(int64_t, 8) g_323;
    volatile VECTOR(int32_t, 2) g_347;
    int8_t * volatile g_406;
    int8_t g_417;
    uint16_t g_421;
    int32_t * volatile g_436;
    int32_t * volatile g_437;
    VECTOR(int32_t, 4) g_445;
    uint32_t g_447;
    int8_t g_475;
    uint64_t *g_481;
    uint64_t **g_480;
    int32_t *g_489;
    int32_t **g_488;
    VECTOR(uint16_t, 2) g_493;
    volatile VECTOR(int32_t, 2) g_532;
    volatile VECTOR(int32_t, 16) g_533;
    VECTOR(int8_t, 2) g_537;
    volatile VECTOR(int16_t, 8) g_541;
    volatile VECTOR(int8_t, 2) g_554;
    VECTOR(int8_t, 2) g_555;
    volatile VECTOR(int8_t, 2) g_556;
    VECTOR(int8_t, 16) g_557;
    volatile VECTOR(int8_t, 8) g_558;
    int16_t g_569;
    int16_t *g_568;
    int32_t g_584;
    VECTOR(int32_t, 4) g_605;
    int64_t *g_704;
    int64_t **g_703[7];
    volatile VECTOR(uint8_t, 4) g_711;
    VECTOR(uint8_t, 8) g_712;
    VECTOR(uint32_t, 2) g_722;
    volatile int8_t *g_754[1][4];
    volatile int8_t **g_753;
    volatile int8_t ***g_752;
    VECTOR(uint32_t, 8) g_779;
    uint16_t **g_823;
    volatile VECTOR(uint16_t, 8) g_830;
    volatile VECTOR(int8_t, 8) g_913;
    volatile int64_t g_925;
    volatile int64_t *g_924;
    volatile int64_t * volatile *g_923;
    volatile int64_t * volatile * volatile *g_922;
    int32_t ****g_932;
    int32_t *****g_931;
    int32_t * volatile g_934;
    volatile VECTOR(int32_t, 2) g_964;
    volatile VECTOR(uint16_t, 16) g_987;
    VECTOR(int32_t, 16) g_993;
    VECTOR(int16_t, 8) g_1023;
    VECTOR(int16_t, 8) g_1024;
    uint16_t g_1059;
    int64_t g_1270;
    volatile VECTOR(uint64_t, 2) g_1282;
    volatile VECTOR(uint16_t, 4) g_1295;
    volatile VECTOR(int16_t, 2) g_1297;
    volatile VECTOR(int16_t, 8) g_1316;
    VECTOR(int32_t, 4) g_1361;
    VECTOR(int32_t, 2) g_1365;
    uint32_t * volatile g_1402;
    uint32_t * volatile *g_1401;
    uint16_t ** volatile *g_1435[1][3][3];
    uint16_t ** volatile * volatile *g_1434;
    volatile VECTOR(int16_t, 2) g_1450;
    VECTOR(int32_t, 2) g_1452;
    volatile VECTOR(int32_t, 16) g_1453;
    VECTOR(uint16_t, 4) g_1458;
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
int64_t  func_1(struct S0 * p_1469);
int32_t  func_2(uint32_t  p_3, uint32_t  p_4, int64_t  p_5, int32_t  p_6, struct S0 * p_1469);
int64_t  func_7(uint64_t  p_8, uint32_t  p_9, int64_t  p_10, uint64_t  p_11, struct S0 * p_1469);
int64_t  func_13(uint16_t  p_14, int8_t  p_15, int32_t  p_16, uint64_t  p_17, int32_t  p_18, struct S0 * p_1469);
uint32_t  func_31(int64_t  p_32, uint32_t  p_33, uint32_t  p_34, int64_t  p_35, struct S0 * p_1469);
uint64_t  func_38(int32_t  p_39, uint64_t  p_40, uint64_t  p_41, uint64_t  p_42, uint64_t  p_43, struct S0 * p_1469);
uint32_t  func_48(uint64_t  p_49, int64_t  p_50, int8_t  p_51, struct S0 * p_1469);
int8_t  func_52(uint32_t  p_53, int64_t  p_54, int32_t  p_55, uint16_t  p_56, struct S0 * p_1469);
int16_t  func_59(int32_t  p_60, uint32_t  p_61, uint32_t  p_62, uint64_t  p_63, struct S0 * p_1469);
int64_t  func_64(int64_t  p_65, int32_t  p_66, uint16_t  p_67, int32_t  p_68, int32_t  p_69, struct S0 * p_1469);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1469->l_comm_values p_1469->g_comm_values p_1469->g_27 p_1469->g_29 p_1469->g_75 p_1469->g_76 p_1469->g_73 p_1469->g_93 p_1469->g_98 p_1469->g_117 p_1469->g_121 p_1469->g_144 p_1469->g_163 p_1469->g_173 p_1469->g_175 p_1469->g_177 p_1469->g_241 p_1469->g_247 p_1469->g_257 p_1469->g_278 p_1469->g_279 p_1469->g_311 p_1469->g_406 p_1469->g_417 p_1469->g_421 p_1469->g_313 p_1469->g_437 p_1469->g_447 p_1469->g_475 p_1469->g_488 p_1469->g_493 p_1469->g_532 p_1469->g_533 p_1469->g_537 p_1469->g_541 p_1469->g_323 p_1469->g_489 p_1469->g_554 p_1469->g_555 p_1469->g_556 p_1469->g_557 p_1469->g_558 p_1469->g_568 p_1469->g_584 p_1469->g_569 p_1469->g_605 p_1469->g_703 p_1469->g_752 p_1469->g_722 p_1469->g_830 p_1469->g_823 p_1469->g_913 p_1469->g_922 p_1469->g_445 p_1469->g_174 p_1469->g_934 p_1469->g_964 p_1469->g_347 p_1469->g_987 p_1469->g_993 p_1469->g_925 p_1469->g_1023 p_1469->g_1024 p_1469->g_712 p_1469->g_1059 p_1469->g_1282 p_1469->g_779 p_1469->g_1361 p_1469->g_1365 p_1469->g_1401 p_1469->g_754 p_1469->g_1434 p_1469->g_1450 p_1469->g_1452 p_1469->g_1453 p_1469->g_1458
 * writes: p_1469->g_73 p_1469->g_93 p_1469->g_117 p_1469->g_121 p_1469->g_29 p_1469->g_76 p_1469->g_163 p_1469->g_177 p_1469->g_75 p_1469->g_257 p_1469->g_278 p_1469->l_comm_values p_1469->g_313 p_1469->g_421 p_1469->g_447 p_1469->g_480 p_1469->g_488 p_1469->g_489 p_1469->g_584 p_1469->g_27 p_1469->g_703 p_1469->g_98 p_1469->g_569 p_1469->g_823 p_1469->g_537 p_1469->g_417 p_1469->g_931 p_1469->g_174 p_1469->g_1059 p_1469->g_712 p_1469->g_437 p_1469->g_475
 */
int64_t  func_1(struct S0 * p_1469)
{ /* block id: 4 */
    int16_t l_12 = (-3L);
    VECTOR(uint64_t, 2) l_23 = (VECTOR(uint64_t, 2))(18446744073709551607UL, 2UL);
    uint8_t l_24 = 0xA5L;
    int64_t l_1325[5][9][5] = {{{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L}},{{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L}},{{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L}},{{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L}},{{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L},{0x00414921BD59B14EL,(-1L),0x19A99A0F9ACC0D67L,(-1L),7L}}};
    int32_t l_1362 = 1L;
    int32_t l_1447 = 8L;
    uint32_t *l_1451[2][2][1];
    uint16_t *l_1459 = (void*)0;
    uint16_t *l_1460 = &p_1469->g_117;
    int64_t ***l_1463 = &p_1469->g_703[6];
    int64_t ***l_1464 = &p_1469->g_703[5];
    int32_t *l_1465 = (void*)0;
    int32_t l_1466 = 0x16F95932L;
    int32_t *l_1467[4];
    int16_t l_1468 = (-3L);
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_1451[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 4; i++)
        l_1467[i] = (void*)0;
    l_1447 ^= (FAKE_DIVERGE(p_1469->group_0_offset, get_group_id(0), 10) & func_2(((GROUP_DIVERGE(2, 1) , (((l_1362 = func_7(l_12, l_12, func_13((safe_mul_func_int8_t_s_s(1L, (safe_mul_func_uint8_t_u_u((l_12 == ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 16))(l_23.yyyxyyyxyxyxyxyx)).even)).s3), l_12)))), p_1469->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1469->tid, 3))], l_24, p_1469->g_comm_values[p_1469->tid], (l_23.y > FAKE_DIVERGE(p_1469->local_1_offset, get_local_id(1), 10)), p_1469), l_1325[4][6][2], p_1469)) & l_24) < l_23.x)) && l_12), p_1469->g_993.se, p_1469->g_445.y, l_1325[4][6][2], p_1469));
    p_1469->g_98.s3 ^= (l_1466 ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x0AD8FFEDL, 6L, 0x315F9EDEL, (-1L))))), ((VECTOR(int32_t, 2))(0L, 0x5320310CL)).yxxx, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x19C9D1F5L, 0x00948715L)), 0x1A5D0FA2L, 1L)).odd, ((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))((-8L), (-5L))).xxyyxyyyxyyxxxyy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((safe_mul_func_uint16_t_u_u(l_23.x, ((VECTOR(int16_t, 16))(p_1469->g_1450.yxxyxyxyxyyyyxyy)).se)) >= (l_1362 |= 0x91CE7599L)), ((VECTOR(int32_t, 2))(p_1469->g_1452.yx)), 1L, (*p_1469->g_279), 0x263A7942L, 0x0B8E94C6L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_1469->g_1453.sf74ed47bb09c5033)).s9f14)), 0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))((safe_mul_func_int16_t_s_s(0x6CA7L, ((*p_1469->g_568) &= (-1L)))), 6L, (-1L), 5L, ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))((-1L), (-1L))).yxyy, ((VECTOR(int32_t, 4))((-1L), (safe_div_func_int32_t_s_s((((l_1447 && (((((((((*l_1460) = ((VECTOR(uint16_t, 16))(p_1469->g_1458.zzzywwywwywwzyww)).sb) | (safe_sub_func_uint32_t_u_u(l_24, 0L))) , &p_1469->g_173) == &p_1469->g_923) , l_1463) != l_1464) & l_24) != l_1447)) | 0x65L) > l_1325[1][2][3]), 1L)), (-4L), (-10L)))))), (int32_t)(*p_1469->g_279)))).y, 0x230C3852L, 1L, 0x6C7185C2L)).s56)), (-1L), 0x39D079ADL))))))))).sa2))))), 0x1578FE9DL, (-1L))), ((VECTOR(int32_t, 4))(1L)), ((VECTOR(int32_t, 4))(0x181EB4B5L)))))))))).w);
    return l_1468;
}


/* ------------------------------------------ */
/* 
 * reads : p_1469->g_117 p_1469->g_1365 p_1469->g_1401 p_1469->g_406 p_1469->g_93 p_1469->g_163 p_1469->g_447 p_1469->g_488 p_1469->g_754 p_1469->g_1434 p_1469->g_568 p_1469->g_569 p_1469->g_279 p_1469->g_75 p_1469->g_76
 * writes: p_1469->g_117 p_1469->g_163 p_1469->g_475 p_1469->g_489
 */
int32_t  func_2(uint32_t  p_3, uint32_t  p_4, int64_t  p_5, int32_t  p_6, struct S0 * p_1469)
{ /* block id: 534 */
    uint32_t l_1366 = 0x2AA9CDA4L;
    int32_t l_1406 = 0L;
    uint8_t *l_1425[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_1426 = 0x69B4D0D0L;
    uint16_t *l_1431 = &p_1469->g_117;
    uint16_t ***l_1437[6][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint16_t ****l_1436 = &l_1437[1][6];
    uint16_t *****l_1438 = (void*)0;
    uint16_t *****l_1439 = &l_1436;
    int8_t *l_1444 = (void*)0;
    int8_t *l_1445[5][1];
    int32_t *l_1446 = (void*)0;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_1445[i][j] = &p_1469->g_93;
    }
    for (p_1469->g_117 = 22; (p_1469->g_117 > 17); p_1469->g_117 = safe_sub_func_int16_t_s_s(p_1469->g_117, 5))
    { /* block id: 537 */
        uint8_t l_1400[5][9] = {{8UL,0x9CL,2UL,249UL,2UL,0x9CL,8UL,0x84L,1UL},{8UL,0x9CL,2UL,249UL,2UL,0x9CL,8UL,0x84L,1UL},{8UL,0x9CL,2UL,249UL,2UL,0x9CL,8UL,0x84L,1UL},{8UL,0x9CL,2UL,249UL,2UL,0x9CL,8UL,0x84L,1UL},{8UL,0x9CL,2UL,249UL,2UL,0x9CL,8UL,0x84L,1UL}};
        uint32_t *l_1404 = &p_1469->g_447;
        uint32_t **l_1403 = &l_1404;
        VECTOR(int32_t, 16) l_1410 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x61C50888L), 0x61C50888L), 0x61C50888L, 1L, 0x61C50888L, (VECTOR(int32_t, 2))(1L, 0x61C50888L), (VECTOR(int32_t, 2))(1L, 0x61C50888L), 1L, 0x61C50888L, 1L, 0x61C50888L);
        int32_t *l_1411 = &p_1469->g_163;
        int i, j;
        if ((p_6 = ((VECTOR(int32_t, 8))(p_1469->g_1365.xxyyxyyx)).s1))
        { /* block id: 539 */
            return l_1366;
        }
        else
        { /* block id: 541 */
            uint32_t l_1409 = 0xEEF9FE2DL;
            for (p_4 = 0; (p_4 < 31); p_4 = safe_add_func_int8_t_s_s(p_4, 1))
            { /* block id: 544 */
                int32_t *l_1389 = (void*)0;
                int32_t *l_1390 = (void*)0;
                int32_t *l_1391 = &p_1469->g_163;
                int8_t *l_1405 = &p_1469->g_475;
                if ((atomic_inc(&p_1469->g_atomic_input[75 * get_linear_group_id() + 73]) == 7))
                { /* block id: 546 */
                    int64_t l_1369 = 1L;
                    uint16_t l_1370 = 1UL;
                    uint64_t l_1371[1][7] = {{0x36FB27978F0958AEL,0x36FB27978F0958AEL,0x36FB27978F0958AEL,0x36FB27978F0958AEL,0x36FB27978F0958AEL,0x36FB27978F0958AEL,0x36FB27978F0958AEL}};
                    uint32_t l_1372[5] = {0xBFA41715L,0xBFA41715L,0xBFA41715L,0xBFA41715L,0xBFA41715L};
                    int16_t l_1373 = 0x6528L;
                    int32_t l_1375[8] = {0x6C7C5644L,0x7694F639L,0x6C7C5644L,0x6C7C5644L,0x7694F639L,0x6C7C5644L,0x6C7C5644L,0x7694F639L};
                    int32_t *l_1374 = &l_1375[4];
                    int32_t *l_1376[4] = {&l_1375[4],&l_1375[4],&l_1375[4],&l_1375[4]};
                    int32_t *l_1377 = &l_1375[6];
                    uint8_t l_1387 = 255UL;
                    uint16_t l_1388 = 0x460DL;
                    int i, j;
                    l_1372[2] = (l_1369 , (l_1371[0][4] = l_1370));
                    l_1374 = (l_1377 = (l_1376[2] = (l_1373 , l_1374)));
                    for (l_1375[4] = 0; (l_1375[4] <= 29); l_1375[4] = safe_add_func_uint16_t_u_u(l_1375[4], 1))
                    { /* block id: 554 */
                        int32_t l_1381 = 0x68DF877EL;
                        int32_t *l_1380[6][3] = {{&l_1381,&l_1381,&l_1381},{&l_1381,&l_1381,&l_1381},{&l_1381,&l_1381,&l_1381},{&l_1381,&l_1381,&l_1381},{&l_1381,&l_1381,&l_1381},{&l_1381,&l_1381,&l_1381}};
                        int64_t l_1384[7][5][7] = {{{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L}},{{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L}},{{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L}},{{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L}},{{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L}},{{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L}},{{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L},{8L,(-10L),(-2L),0x718738DAA14DADA8L,0x0405A58A9901429FL,0x18B7BA7AD7654BF3L,2L}}};
                        int64_t *l_1383 = &l_1384[2][2][0];
                        int64_t **l_1382 = &l_1383;
                        int64_t **l_1385[10];
                        uint32_t l_1386 = 0xA46B67DFL;
                        int i, j, k;
                        for (i = 0; i < 10; i++)
                            l_1385[i] = &l_1383;
                        l_1377 = l_1380[2][1];
                        l_1377 = (l_1380[0][0] = (void*)0);
                        l_1385[6] = l_1382;
                        l_1386 |= (FAKE_DIVERGE(p_1469->group_1_offset, get_group_id(1), 10) , (FAKE_DIVERGE(p_1469->local_0_offset, get_local_id(0), 10) , 0x6C98ED0DL));
                    }
                    l_1388 = l_1387;
                    unsigned int result = 0;
                    result += l_1369;
                    result += l_1370;
                    int l_1371_i0, l_1371_i1;
                    for (l_1371_i0 = 0; l_1371_i0 < 1; l_1371_i0++) {
                        for (l_1371_i1 = 0; l_1371_i1 < 7; l_1371_i1++) {
                            result += l_1371[l_1371_i0][l_1371_i1];
                        }
                    }
                    int l_1372_i0;
                    for (l_1372_i0 = 0; l_1372_i0 < 5; l_1372_i0++) {
                        result += l_1372[l_1372_i0];
                    }
                    result += l_1373;
                    int l_1375_i0;
                    for (l_1375_i0 = 0; l_1375_i0 < 8; l_1375_i0++) {
                        result += l_1375[l_1375_i0];
                    }
                    result += l_1387;
                    result += l_1388;
                    atomic_add(&p_1469->g_special_values[75 * get_linear_group_id() + 73], result);
                }
                else
                { /* block id: 562 */
                    (1 + 1);
                }
                (*l_1391) = 2L;
                if ((safe_add_func_int32_t_s_s((((safe_add_func_int32_t_s_s(((safe_mod_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(((p_6 <= (l_1400[1][1] <= 1L)) || (p_1469->g_1401 != l_1403)), (l_1406 = ((*l_1405) = (*p_1469->g_406))))) || (safe_add_func_uint16_t_u_u(l_1366, (l_1409 ^= p_3)))), 255UL)) & p_3), l_1400[2][6])) & l_1400[1][1]) >= l_1366), p_5)))
                { /* block id: 569 */
                    (*l_1391) &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1410.s995295fa)).s06)).xyyyyxyy)).s0;
                    l_1411 = l_1404;
                    (*l_1391) = (-1L);
                }
                else
                { /* block id: 573 */
                    if ((atomic_inc(&p_1469->g_atomic_input[75 * get_linear_group_id() + 70]) == 2))
                    { /* block id: 575 */
                        VECTOR(int32_t, 16) l_1412 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
                        uint64_t l_1413 = 18446744073709551612UL;
                        int8_t l_1414 = 0x7CL;
                        uint8_t l_1415 = 8UL;
                        int64_t l_1416[9] = {0L,0x3A690CEC60EF7A31L,0L,0L,0x3A690CEC60EF7A31L,0L,0L,0x3A690CEC60EF7A31L,0L};
                        int32_t *l_1417 = (void*)0;
                        int32_t *l_1418 = (void*)0;
                        int i;
                        l_1414 &= (l_1413 &= ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(l_1412.s7b31)).lo, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0L, (-10L), (-1L), (-1L))))).hi))).even);
                        l_1416[1] = l_1415;
                        l_1418 = l_1417;
                        unsigned int result = 0;
                        result += l_1412.sf;
                        result += l_1412.se;
                        result += l_1412.sd;
                        result += l_1412.sc;
                        result += l_1412.sb;
                        result += l_1412.sa;
                        result += l_1412.s9;
                        result += l_1412.s8;
                        result += l_1412.s7;
                        result += l_1412.s6;
                        result += l_1412.s5;
                        result += l_1412.s4;
                        result += l_1412.s3;
                        result += l_1412.s2;
                        result += l_1412.s1;
                        result += l_1412.s0;
                        result += l_1413;
                        result += l_1414;
                        result += l_1415;
                        int l_1416_i0;
                        for (l_1416_i0 = 0; l_1416_i0 < 9; l_1416_i0++) {
                            result += l_1416[l_1416_i0];
                        }
                        atomic_add(&p_1469->g_special_values[75 * get_linear_group_id() + 70], result);
                    }
                    else
                    { /* block id: 580 */
                        (1 + 1);
                    }
                }
                l_1410.s1 ^= ((!p_5) > (*l_1411));
            }
            (*p_1469->g_488) = &p_6;
            return p_6;
        }
    }
    (*p_1469->g_279) ^= (safe_div_func_int16_t_s_s((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((l_1425[0] != p_1469->g_754[0][0]) > (l_1426 != ((p_5 > (((safe_lshift_func_uint8_t_u_s(((-1L) | (safe_sub_func_uint16_t_u_u(((*l_1431)++), (p_1469->g_1434 == ((*l_1439) = l_1436))))), (~((VECTOR(int8_t, 16))(l_1366, 0x3CL, (l_1406 = (safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(0x4FL, 1)), l_1426))), 0x3CL, ((VECTOR(int8_t, 8))((-7L))), 0x29L, ((VECTOR(int8_t, 2))(5L)), 0x34L)).s4))) < FAKE_DIVERGE(p_1469->global_2_offset, get_global_id(2), 10)) > (*p_1469->g_568))) == 1UL))), 2)), p_3)), 0x7B38L));
    l_1446 = &l_1406;
    return (*p_1469->g_75);
}


/* ------------------------------------------ */
/* 
 * reads : p_1469->g_488 p_1469->g_1282 p_1469->g_73 p_1469->g_406 p_1469->g_93 p_1469->g_779 p_1469->g_568 p_1469->g_75 p_1469->g_1361
 * writes: p_1469->g_417 p_1469->g_489 p_1469->g_421 p_1469->g_73 p_1469->g_569 p_1469->g_76
 */
int64_t  func_7(uint64_t  p_8, uint32_t  p_9, int64_t  p_10, uint64_t  p_11, struct S0 * p_1469)
{ /* block id: 505 */
    VECTOR(int32_t, 2) l_1328 = (VECTOR(int32_t, 2))(0x63DD711CL, 0x16F8F716L);
    int32_t l_1331 = 0x53E1AEF3L;
    int32_t *l_1337 = (void*)0;
    uint16_t l_1338[3][2];
    int32_t l_1347 = 0x62325E7AL;
    VECTOR(int16_t, 16) l_1348 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x3692L), 0x3692L), 0x3692L, (-1L), 0x3692L, (VECTOR(int16_t, 2))((-1L), 0x3692L), (VECTOR(int16_t, 2))((-1L), 0x3692L), (-1L), 0x3692L, (-1L), 0x3692L);
    int8_t *l_1355[8] = {&p_1469->g_417,&p_1469->g_417,&p_1469->g_417,&p_1469->g_417,&p_1469->g_417,&p_1469->g_417,&p_1469->g_417,&p_1469->g_417};
    int32_t ***l_1357 = &p_1469->g_488;
    int32_t ****l_1356 = &l_1357;
    int64_t *l_1358 = &p_1469->g_73;
    uint16_t *l_1359 = (void*)0;
    uint16_t *l_1360[6];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_1338[i][j] = 0UL;
    }
    for (i = 0; i < 6; i++)
        l_1360[i] = &p_1469->g_117;
    for (p_10 = 19; (p_10 > 17); p_10 = safe_sub_func_uint32_t_u_u(p_10, 4))
    { /* block id: 508 */
        int32_t *l_1329 = (void*)0;
        int32_t *l_1330[10][1][6] = {{{&p_1469->g_163,(void*)0,(void*)0,&p_1469->g_163,(void*)0,&p_1469->g_163}},{{&p_1469->g_163,(void*)0,(void*)0,&p_1469->g_163,(void*)0,&p_1469->g_163}},{{&p_1469->g_163,(void*)0,(void*)0,&p_1469->g_163,(void*)0,&p_1469->g_163}},{{&p_1469->g_163,(void*)0,(void*)0,&p_1469->g_163,(void*)0,&p_1469->g_163}},{{&p_1469->g_163,(void*)0,(void*)0,&p_1469->g_163,(void*)0,&p_1469->g_163}},{{&p_1469->g_163,(void*)0,(void*)0,&p_1469->g_163,(void*)0,&p_1469->g_163}},{{&p_1469->g_163,(void*)0,(void*)0,&p_1469->g_163,(void*)0,&p_1469->g_163}},{{&p_1469->g_163,(void*)0,(void*)0,&p_1469->g_163,(void*)0,&p_1469->g_163}},{{&p_1469->g_163,(void*)0,(void*)0,&p_1469->g_163,(void*)0,&p_1469->g_163}},{{&p_1469->g_163,(void*)0,(void*)0,&p_1469->g_163,(void*)0,&p_1469->g_163}}};
        int32_t *l_1334[4] = {&l_1331,&l_1331,&l_1331,&l_1331};
        int i, j, k;
        l_1331 &= ((VECTOR(int32_t, 8))(l_1328.yxyxxyxy)).s2;
        for (p_1469->g_417 = 17; (p_1469->g_417 <= (-5)); p_1469->g_417 = safe_sub_func_int32_t_s_s(p_1469->g_417, 8))
        { /* block id: 512 */
            int32_t l_1340 = 5L;
            (*p_1469->g_488) = l_1334[2];
            for (p_1469->g_421 = 0; (p_1469->g_421 == 19); p_1469->g_421++)
            { /* block id: 516 */
                int32_t l_1339[9][4][1] = {{{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L}}};
                int i, j, k;
                l_1337 = ((*p_1469->g_488) = l_1334[0]);
                l_1339[5][3][0] = l_1338[0][1];
                l_1339[5][3][0] = (l_1340 = 0x4DBC9491L);
            }
            if (p_8)
                continue;
        }
    }
    (*p_1469->g_75) = ((safe_add_func_int16_t_s_s(((*p_1469->g_568) = (safe_div_func_uint16_t_u_u((p_8 ^ (FAKE_DIVERGE(p_1469->group_1_offset, get_group_id(1), 10) == (safe_mul_func_uint16_t_u_u(l_1347, (l_1338[1][1] || ((!p_10) == (~p_10))))))), ((VECTOR(int16_t, 16))(0L, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_1348.seab36e48)))), (GROUP_DIVERGE(1, 1) ^ 0xA9L), (safe_sub_func_int32_t_s_s(((~(safe_mul_func_uint16_t_u_u((l_1328.y |= ((((*l_1358) &= ((l_1331 = 0x7BL) >= (l_1356 == ((((VECTOR(int32_t, 8))(1L, (-8L), 0x36D9AD08L, (-1L), ((VECTOR(int32_t, 2))(0x32DF3783L)), 0x40501EC5L, 0x3FF3B1D0L)).s4 > p_1469->g_1282.x) , &l_1357)))) , (*p_1469->g_406)) <= p_11)), 0UL))) && 0x51435635B02DA706L), p_1469->g_779.s2)), p_8, p_9, 8L, 0x3717L, 3L)).sc))), p_9)) != p_9);
    l_1347 &= ((VECTOR(int32_t, 4))(p_1469->g_1361.wzyw)).y;
    return p_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_1469->g_27 p_1469->g_29 p_1469->g_75 p_1469->g_76 p_1469->l_comm_values p_1469->g_73 p_1469->g_93 p_1469->g_98 p_1469->g_117 p_1469->g_121 p_1469->g_144 p_1469->g_163 p_1469->g_173 p_1469->g_175 p_1469->g_177 p_1469->g_241 p_1469->g_comm_values p_1469->g_247 p_1469->g_257 p_1469->g_278 p_1469->g_279 p_1469->g_311 p_1469->g_406 p_1469->g_417 p_1469->g_421 p_1469->g_313 p_1469->g_437 p_1469->g_447 p_1469->g_475 p_1469->g_488 p_1469->g_493 p_1469->g_532 p_1469->g_533 p_1469->g_537 p_1469->g_541 p_1469->g_323 p_1469->g_489 p_1469->g_554 p_1469->g_555 p_1469->g_556 p_1469->g_557 p_1469->g_558 p_1469->g_568 p_1469->g_584 p_1469->g_569 p_1469->g_605 p_1469->g_703 p_1469->g_752 p_1469->g_722 p_1469->g_830 p_1469->g_823 p_1469->g_913 p_1469->g_922 p_1469->g_445 p_1469->g_174 p_1469->g_934 p_1469->g_964 p_1469->g_347 p_1469->g_987 p_1469->g_993 p_1469->g_925 p_1469->g_1023 p_1469->g_1024 p_1469->g_712 p_1469->g_1059
 * writes: p_1469->g_73 p_1469->g_93 p_1469->g_117 p_1469->g_121 p_1469->g_29 p_1469->g_76 p_1469->g_163 p_1469->g_177 p_1469->g_75 p_1469->g_257 p_1469->g_278 p_1469->l_comm_values p_1469->g_313 p_1469->g_421 p_1469->g_447 p_1469->g_480 p_1469->g_488 p_1469->g_489 p_1469->g_584 p_1469->g_27 p_1469->g_703 p_1469->g_98 p_1469->g_569 p_1469->g_823 p_1469->g_537 p_1469->g_417 p_1469->g_931 p_1469->g_174 p_1469->g_1059 p_1469->g_712 p_1469->g_437
 */
int64_t  func_13(uint16_t  p_14, int8_t  p_15, int32_t  p_16, uint64_t  p_17, int32_t  p_18, struct S0 * p_1469)
{ /* block id: 5 */
    VECTOR(int64_t, 16) l_25 = (VECTOR(int64_t, 16))(0x44DF8E3BF118C84BL, (VECTOR(int64_t, 4))(0x44DF8E3BF118C84BL, (VECTOR(int64_t, 2))(0x44DF8E3BF118C84BL, 0x031966C4779D44F4L), 0x031966C4779D44F4L), 0x031966C4779D44F4L, 0x44DF8E3BF118C84BL, 0x031966C4779D44F4L, (VECTOR(int64_t, 2))(0x44DF8E3BF118C84BL, 0x031966C4779D44F4L), (VECTOR(int64_t, 2))(0x44DF8E3BF118C84BL, 0x031966C4779D44F4L), 0x44DF8E3BF118C84BL, 0x031966C4779D44F4L, 0x44DF8E3BF118C84BL, 0x031966C4779D44F4L);
    VECTOR(int64_t, 4) l_26 = (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, (-1L)), (-1L));
    VECTOR(int64_t, 16) l_28 = (VECTOR(int64_t, 16))(0x4353EA3A7221EBC5L, (VECTOR(int64_t, 4))(0x4353EA3A7221EBC5L, (VECTOR(int64_t, 2))(0x4353EA3A7221EBC5L, 0x3BE41B0CE7AEBB1BL), 0x3BE41B0CE7AEBB1BL), 0x3BE41B0CE7AEBB1BL, 0x4353EA3A7221EBC5L, 0x3BE41B0CE7AEBB1BL, (VECTOR(int64_t, 2))(0x4353EA3A7221EBC5L, 0x3BE41B0CE7AEBB1BL), (VECTOR(int64_t, 2))(0x4353EA3A7221EBC5L, 0x3BE41B0CE7AEBB1BL), 0x4353EA3A7221EBC5L, 0x3BE41B0CE7AEBB1BL, 0x4353EA3A7221EBC5L, 0x3BE41B0CE7AEBB1BL);
    int16_t l_30 = 3L;
    int64_t *l_72 = &p_1469->g_73;
    VECTOR(uint64_t, 2) l_74 = (VECTOR(uint64_t, 2))(0x14D865E429B05364L, 1UL);
    int32_t *l_1260[1][3][5] = {{{&p_1469->g_163,(void*)0,&p_1469->g_163,&p_1469->g_163,(void*)0},{&p_1469->g_163,(void*)0,&p_1469->g_163,&p_1469->g_163,(void*)0},{&p_1469->g_163,(void*)0,&p_1469->g_163,&p_1469->g_163,(void*)0}}};
    VECTOR(int32_t, 16) l_1264 = (VECTOR(int32_t, 16))(0x4706B1B1L, (VECTOR(int32_t, 4))(0x4706B1B1L, (VECTOR(int32_t, 2))(0x4706B1B1L, (-1L)), (-1L)), (-1L), 0x4706B1B1L, (-1L), (VECTOR(int32_t, 2))(0x4706B1B1L, (-1L)), (VECTOR(int32_t, 2))(0x4706B1B1L, (-1L)), 0x4706B1B1L, (-1L), 0x4706B1B1L, (-1L));
    VECTOR(uint8_t, 16) l_1285 = (VECTOR(uint8_t, 16))(251UL, (VECTOR(uint8_t, 4))(251UL, (VECTOR(uint8_t, 2))(251UL, 0UL), 0UL), 0UL, 251UL, 0UL, (VECTOR(uint8_t, 2))(251UL, 0UL), (VECTOR(uint8_t, 2))(251UL, 0UL), 251UL, 0UL, 251UL, 0UL);
    uint16_t *l_1320[9] = {&p_1469->g_121,&p_1469->g_121,&p_1469->g_121,&p_1469->g_121,&p_1469->g_121,&p_1469->g_121,&p_1469->g_121,&p_1469->g_121,&p_1469->g_121};
    uint16_t **l_1319 = &l_1320[3];
    int i, j, k;
    if (((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),VECTOR(int64_t, 16),((VECTOR(int64_t, 8))(l_25.scc511ec1)).s7440271534236373, ((VECTOR(int64_t, 16))(l_26.zzxzzwzxxzwxzyyw)), ((VECTOR(int64_t, 8))(mul_hi(((VECTOR(int64_t, 16))(p_1469->g_27.s065835a7ab5bf7c2)).odd, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(l_28.sb3)), 0L, 0x3709E8E548E01AFEL)).xyzyxwzx))).s1177366261177137))).s0561)).x > (((VECTOR(uint64_t, 16))(p_1469->g_29.sd9d65fe96f77d900)).sd || l_30)) && func_31(l_26.z, ((((VECTOR(int32_t, 8))((safe_mod_func_int8_t_s_s((func_38((safe_sub_func_uint32_t_u_u((!(safe_div_func_uint32_t_u_u(func_48(((func_52(p_14, (safe_rshift_func_int8_t_s_s((func_59(p_15, (func_64(((*l_72) = ((safe_rshift_func_int16_t_s_s(0x6D67L, 12)) || ((~l_25.sc) < l_28.s2))), ((((VECTOR(uint64_t, 16))(l_74.xxxxxxxxxxxyyxxy)).s1 == GROUP_DIVERGE(1, 1)) <= ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))((p_14 , p_1469->g_27.s5), 1L, 1L, ((VECTOR(int64_t, 8))(0x548947DE68BD5E57L)), ((VECTOR(int64_t, 4))(0x15B7D07A12536DE7L)), 0L)).lo)).s7400375700274756)).odd, ((VECTOR(int64_t, 8))(1L)), ((VECTOR(int64_t, 8))(0x03168F1D39FA4EE4L))))).lo)))).x), p_1469->g_29.s2, p_1469->g_27.s9, p_18, p_1469) , p_1469->g_comm_values[p_1469->tid]), l_74.y, p_18, p_1469) == p_14), p_1469->g_27.s4)), p_16, l_30, p_1469) || p_14) , p_1469->g_311.s3), p_14, l_74.x, p_1469), p_16))), l_30)), p_16, p_14, l_26.z, l_74.x, p_1469) , p_14), p_1469->g_555.x)), ((VECTOR(int32_t, 4))(0x2C6A709BL)), 1L, 0x413324A5L, 0x6422BEC6L)).s7 , p_15) , p_1469->g_445.z), l_26.z, p_15, p_1469)))
    { /* block id: 464 */
        int32_t *l_1261 = (void*)0;
        int32_t l_1265[4][6] = {{0L,0x77AC4237L,0L,0L,0x77AC4237L,0L},{0L,0x77AC4237L,0L,0L,0x77AC4237L,0L},{0L,0x77AC4237L,0L,0L,0x77AC4237L,0L},{0L,0x77AC4237L,0L,0L,0x77AC4237L,0L}};
        uint32_t l_1321 = 0UL;
        int i, j;
        l_1261 = l_1260[0][1][4];
        for (p_1469->g_1059 = (-20); (p_1469->g_1059 == 12); ++p_1469->g_1059)
        { /* block id: 468 */
            uint16_t l_1269 = 0xDE08L;
            int64_t **l_1272 = &l_72;
            int64_t ***l_1271 = &l_1272;
            int32_t l_1275 = 1L;
            int32_t **l_1315[1][8][7] = {{{(void*)0,&l_1261,&l_1260[0][1][4],&l_1260[0][1][4],(void*)0,(void*)0,&l_1260[0][1][4]},{(void*)0,&l_1261,&l_1260[0][1][4],&l_1260[0][1][4],(void*)0,(void*)0,&l_1260[0][1][4]},{(void*)0,&l_1261,&l_1260[0][1][4],&l_1260[0][1][4],(void*)0,(void*)0,&l_1260[0][1][4]},{(void*)0,&l_1261,&l_1260[0][1][4],&l_1260[0][1][4],(void*)0,(void*)0,&l_1260[0][1][4]},{(void*)0,&l_1261,&l_1260[0][1][4],&l_1260[0][1][4],(void*)0,(void*)0,&l_1260[0][1][4]},{(void*)0,&l_1261,&l_1260[0][1][4],&l_1260[0][1][4],(void*)0,(void*)0,&l_1260[0][1][4]},{(void*)0,&l_1261,&l_1260[0][1][4],&l_1260[0][1][4],(void*)0,(void*)0,&l_1260[0][1][4]},{(void*)0,&l_1261,&l_1260[0][1][4],&l_1260[0][1][4],(void*)0,(void*)0,&l_1260[0][1][4]}}};
            int i, j, k;
            if ((!(l_1265[0][3] |= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1264.sc16a)).even)).xxxyxxxx)).s5)))
            { /* block id: 470 */
                uint8_t l_1268 = 1UL;
                VECTOR(int16_t, 8) l_1294 = (VECTOR(int16_t, 8))(0x5CF3L, (VECTOR(int16_t, 4))(0x5CF3L, (VECTOR(int16_t, 2))(0x5CF3L, 0x3FB6L), 0x3FB6L), 0x3FB6L, 0x5CF3L, 0x3FB6L);
                int i;
                for (p_1469->g_584 = 0; (p_1469->g_584 < 21); p_1469->g_584 = safe_add_func_uint16_t_u_u(p_1469->g_584, 2))
                { /* block id: 473 */
                    VECTOR(int32_t, 16) l_1293 = (VECTOR(int32_t, 16))(0x4DD5CC76L, (VECTOR(int32_t, 4))(0x4DD5CC76L, (VECTOR(int32_t, 2))(0x4DD5CC76L, (-3L)), (-3L)), (-3L), 0x4DD5CC76L, (-3L), (VECTOR(int32_t, 2))(0x4DD5CC76L, (-3L)), (VECTOR(int32_t, 2))(0x4DD5CC76L, (-3L)), 0x4DD5CC76L, (-3L), 0x4DD5CC76L, (-3L));
                    int i;
                    if (l_1268)
                    { /* block id: 474 */
                        (*p_1469->g_279) = ((VECTOR(int32_t, 16))(0x74234DB4L, 0x0208EE16L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x2C1CE419L, (-1L))), (p_1469->g_1270 ^= l_1269), ((void*)0 != &p_1469->g_703[5]), (((void*)0 != l_1271) , 0x47E7274DL), (l_1275 &= ((safe_rshift_func_int16_t_s_u((((p_16 , p_1469->g_493.x) , 0x6D1EF847E6433F3CL) > p_14), 4)) || 0xA79F21C7L)), 0x2868B00EL, 0x0E49D077L)), ((VECTOR(int32_t, 2))(0x445D4D41L)), 0x506C1C23L, 0x0065C698L, (-1L), 4L)).s2;
                    }
                    else
                    { /* block id: 478 */
                        int32_t l_1276 = (-6L);
                        uint16_t **l_1277 = (void*)0;
                        uint16_t ***l_1278 = &l_1277;
                        uint16_t ***l_1280 = (void*)0;
                        uint16_t ****l_1279 = &l_1280;
                        uint8_t *l_1281 = &l_1268;
                        int32_t l_1292 = 0x75C5FFF3L;
                        l_1292 &= (!((l_1276 , (((((*l_1278) = l_1277) != (void*)0) ^ (&p_1469->g_823 != ((*l_1279) = l_1278))) >= ((*l_1281) ^= p_17))) != ((((VECTOR(uint64_t, 16))(abs(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(p_1469->g_1282.yyxxxyxx)))).s3372277701466733))).s7 , (safe_lshift_func_int16_t_s_u((*p_1469->g_568), (((((VECTOR(uint8_t, 16))(l_1285.sdcf9074d5df1e5b3)).se < ((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((p_14 <= l_1269), p_15)), p_1469->g_421)), 0xDC851C08L)) & l_1275)) , 0x38L) == 1UL)))) >= p_14)));
                        if (l_1269)
                            break;
                        l_1292 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1293.s67)).yxyx)).z;
                    }
                    if (p_18)
                        break;
                    (*p_1469->g_488) = (void*)0;
                    l_1265[0][3] = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x4803AB8DL, (-1L), 0L, 1L)), ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(l_1294.s17)), ((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 2))(p_1469->g_1295.yz)))))))), (-3L), 0x45A65FCBL)).s16)).odd;
                }
            }
            else
            { /* block id: 490 */
                VECTOR(int16_t, 2) l_1296 = (VECTOR(int16_t, 2))(9L, 1L);
                int64_t *l_1310[6][8] = {{(void*)0,&p_1469->g_1270,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1469->g_1270},{(void*)0,&p_1469->g_1270,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1469->g_1270},{(void*)0,&p_1469->g_1270,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1469->g_1270},{(void*)0,&p_1469->g_1270,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1469->g_1270},{(void*)0,&p_1469->g_1270,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1469->g_1270},{(void*)0,&p_1469->g_1270,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_1469->g_1270}};
                int32_t l_1322 = 0x59A65849L;
                int32_t l_1323 = 0x3DF077E9L;
                int i, j;
                p_1469->g_437 = ((*p_1469->g_488) = (((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 2))(0x5DD5L, 0x813CL)).xyxxxxyx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(abs_diff(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(l_1296.xyxx)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x625AL, 1L)), 0x03F6L, (-1L))).xzwyyywz, ((VECTOR(int16_t, 4))(p_1469->g_1297.xxyy)).wwzzxzwy))), (safe_add_func_int16_t_s_s(((((l_1269 ^ (safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(((GROUP_DIVERGE(2, 1) < (l_1323 = (safe_sub_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s(((*p_1469->g_568) = 0x49A1L), (l_1322 = (((safe_div_func_int64_t_s_s((0x41L <= ((VECTOR(uint8_t, 4))(0xFAL, 0xECL, 0UL, 0x46L)).z), (l_1265[0][3] |= 0x2C64B52954E9EF33L))) == (safe_mod_func_int32_t_s_s((((((((safe_sub_func_uint32_t_u_u((((((((l_1315[0][0][3] == (void*)0) == ((VECTOR(int16_t, 16))(p_1469->g_1316.s0052335712157111)).s1) == 0L) && ((((safe_add_func_uint64_t_u_u(((((((0UL ^ 0L) == GROUP_DIVERGE(0, 1)) || p_17) && p_14) == 5L) < p_18), p_16)) , p_14) , l_1319) == (void*)0)) , p_15) , l_1321) < p_15), p_18)) , 0L) < p_15) , p_15) & 0xFFL) | (-1L)) > p_1469->g_584), p_18))) == 0L)))) ^ 5UL), p_18)))) & p_14), p_14)), p_15))) <= 0x34927937080BE6FDL) , &p_15) == (**p_1469->g_752)), 0x41BCL)), ((VECTOR(int16_t, 2))(0x3330L)), 0x5A83L, 0x3800L, ((VECTOR(int16_t, 2))(0x1575L)), 0x2830L)).s2b48, ((VECTOR(int16_t, 4))((-1L)))))).xywzwyzxzwxxzxyz)), ((VECTOR(int16_t, 16))(7L))))).lo))))), (uint16_t)1UL))), 0x9D7FL, 0xA452L, ((VECTOR(uint16_t, 4))(0UL)), 65527UL, 0x9BB4L)).s7 , &l_1323));
                (*p_1469->g_488) = (*p_1469->g_488);
            }
            if (p_14)
                continue;
        }
    }
    else
    { /* block id: 501 */
        int64_t l_1324 = 2L;
        atomic_and(&p_1469->l_atomic_reduction[0], l_1324 + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1469->v_collective += p_1469->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    return p_18;
}


/* ------------------------------------------ */
/* 
 * reads : p_1469->g_173 p_1469->g_174 p_1469->g_934 p_1469->g_722 p_1469->g_93 p_1469->g_278 p_1469->g_163 p_1469->g_964 p_1469->g_347 p_1469->g_537 p_1469->g_406 p_1469->g_437 p_1469->g_987 p_1469->g_445 p_1469->g_98 p_1469->g_993 p_1469->g_568 p_1469->g_569 p_1469->g_313 p_1469->g_557 p_1469->g_488 p_1469->g_925 p_1469->g_144 p_1469->g_1023 p_1469->g_1024 p_1469->g_712 p_1469->g_489
 * writes: p_1469->g_174 p_1469->g_163 p_1469->g_93 p_1469->g_278 p_1469->g_177 p_1469->g_489 p_1469->g_1059 p_1469->g_712
 */
uint32_t  func_31(int64_t  p_32, uint32_t  p_33, uint32_t  p_34, int64_t  p_35, struct S0 * p_1469)
{ /* block id: 337 */
    int64_t **l_933[4];
    VECTOR(int32_t, 2) l_942 = (VECTOR(int32_t, 2))(1L, 1L);
    int32_t *l_944 = &p_1469->g_278;
    int32_t **l_943 = &l_944;
    int8_t *l_945 = (void*)0;
    int32_t l_946 = 0x74C8696DL;
    int8_t *l_949 = &p_1469->g_93;
    uint16_t l_950[9];
    int64_t *l_951[6][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t l_952[4][9] = {{0x78E46737L,0x0C1BDD10L,0x78E46737L,0x78E46737L,0x0C1BDD10L,0x78E46737L,0x78E46737L,0x0C1BDD10L,0x78E46737L},{0x78E46737L,0x0C1BDD10L,0x78E46737L,0x78E46737L,0x0C1BDD10L,0x78E46737L,0x78E46737L,0x0C1BDD10L,0x78E46737L},{0x78E46737L,0x0C1BDD10L,0x78E46737L,0x78E46737L,0x0C1BDD10L,0x78E46737L,0x78E46737L,0x0C1BDD10L,0x78E46737L},{0x78E46737L,0x0C1BDD10L,0x78E46737L,0x78E46737L,0x0C1BDD10L,0x78E46737L,0x78E46737L,0x0C1BDD10L,0x78E46737L}};
    int32_t *l_963[8] = {&l_946,&l_946,&l_946,&l_946,&l_946,&l_946,&l_946,&l_946};
    VECTOR(int16_t, 16) l_969 = (VECTOR(int16_t, 16))(9L, (VECTOR(int16_t, 4))(9L, (VECTOR(int16_t, 2))(9L, 0x1A89L), 0x1A89L), 0x1A89L, 9L, 0x1A89L, (VECTOR(int16_t, 2))(9L, 0x1A89L), (VECTOR(int16_t, 2))(9L, 0x1A89L), 9L, 0x1A89L, 9L, 0x1A89L);
    VECTOR(uint32_t, 4) l_979 = (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 0UL), 0UL);
    VECTOR(int32_t, 4) l_992 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 5L), 5L);
    VECTOR(int32_t, 8) l_994 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x1F4AA4A0L), 0x1F4AA4A0L), 0x1F4AA4A0L, (-5L), 0x1F4AA4A0L);
    uint16_t l_1006 = 0x4D55L;
    VECTOR(int8_t, 4) l_1015 = (VECTOR(int8_t, 4))(0x50L, (VECTOR(int8_t, 2))(0x50L, 1L), 1L);
    VECTOR(int16_t, 2) l_1025 = (VECTOR(int16_t, 2))(0x5FBEL, 0L);
    int i, j;
    for (i = 0; i < 4; i++)
        l_933[i] = &p_1469->g_174;
    for (i = 0; i < 9; i++)
        l_950[i] = 65535UL;
    (*p_1469->g_934) = (((*p_1469->g_173) = (*p_1469->g_173)) != (void*)0);
    if ((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s((l_952[3][0] |= ((safe_unary_minus_func_uint64_t_u(1UL)) >= (((safe_div_func_uint8_t_u_u(p_1469->g_722.x, (((l_942.x != (l_946 |= ((void*)0 != l_943))) , (((safe_div_func_int8_t_s_s((p_33 < (0xA7L == ((*l_949) |= l_942.y))), (p_32 , 2UL))) != p_34) >= 0x150CL)) , l_950[4]))) ^ p_33) == FAKE_DIVERGE(p_1469->global_2_offset, get_global_id(2), 10)))), 18446744073709551615UL)), l_950[4])))
    { /* block id: 343 */
        int32_t *l_953 = &l_952[0][1];
        int32_t *l_954 = &l_952[3][0];
        int32_t *l_955 = (void*)0;
        int32_t *l_956[8][1] = {{&l_946},{&l_946},{&l_946},{&l_946},{&l_946},{&l_946},{&l_946},{&l_946}};
        uint64_t l_957[7][8][4] = {{{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL}},{{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL}},{{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL}},{{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL}},{{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL}},{{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL}},{{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL},{0UL,0x8DBFE438F7ECA6D9L,0x6327FE93448FAF93L,18446744073709551609UL}}};
        int i, j, k;
        (*l_953) |= 0x018F3B60L;
        (*l_953) = (*l_953);
        ++l_957[6][4][0];
    }
    else
    { /* block id: 347 */
        int32_t *l_962 = (void*)0;
        int32_t l_975 = 0x42DEC7E3L;
        int64_t l_976[9] = {(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L),(-8L)};
        VECTOR(uint32_t, 4) l_980 = (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 0x83B49241L), 0x83B49241L);
        VECTOR(uint64_t, 2) l_990 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xF53A45DDB0EDA65FL);
        uint64_t **l_995[4][6][9] = {{{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481}},{{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481}},{{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481}},{{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481},{&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481,&p_1469->g_481,(void*)0,&p_1469->g_481}}};
        VECTOR(int32_t, 2) l_1001 = (VECTOR(int32_t, 2))(1L, 1L);
        uint8_t l_1003 = 0x24L;
        int32_t l_1009 = (-1L);
        VECTOR(int16_t, 4) l_1022 = (VECTOR(int16_t, 4))(0x3631L, (VECTOR(int16_t, 2))(0x3631L, 0x2413L), 0x2413L);
        uint16_t l_1046 = 7UL;
        int64_t ***l_1057[10] = {&p_1469->g_703[6],&p_1469->g_703[6],&p_1469->g_703[6],&p_1469->g_703[6],&p_1469->g_703[6],&p_1469->g_703[6],&p_1469->g_703[6],&p_1469->g_703[6],&p_1469->g_703[6],&p_1469->g_703[6]};
        uint32_t l_1060 = 1UL;
        int i, j, k;
        for (p_1469->g_278 = 0; (p_1469->g_278 > (-10)); p_1469->g_278 = safe_sub_func_uint16_t_u_u(p_1469->g_278, 6))
        { /* block id: 350 */
            return p_33;
        }
        l_963[6] = l_962;
        if ((l_976[3] = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))((-1L), p_32, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((*p_1469->g_934), 5L, (-1L), 0x503BFDFDL)).odd)).yyxxxyyx)))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((-7L), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_1469->g_964.xxyyyyyy)).s34)), 0x0587EA5CL, ((VECTOR(int32_t, 2))((-4L), 0x68194BDBL)), (+(l_975 = (safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u(0x44L, 5)) && (&p_33 == (((((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(l_969.sfd486964)).s32, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 8))((safe_div_func_uint8_t_u_u((p_1469->g_347.x , ((((p_32 != p_34) | (safe_add_func_int64_t_s_s(((safe_unary_minus_func_int8_t_s(l_975)) | p_35), p_33))) , 0xF7A1C1CE3882E85BL) || p_32)), p_1469->g_537.y)), 1L, 0x1BE7L, ((VECTOR(int16_t, 4))(0x493BL)), (-8L))).s41, ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 2))(5L))))), ((VECTOR(int16_t, 2))((-4L)))))).yyxxyyxyyxxyyxxy, ((VECTOR(int16_t, 16))(0x025FL)), ((VECTOR(int16_t, 16))(0x3758L))))).sd >= 0x7029L) && (*p_1469->g_406)) , &p_1469->g_447))), p_32)))), 2L, 0x130D6814L)), 0x7E5883CBL, 0L, (*p_1469->g_437), 0x4A1AB970L, ((VECTOR(int32_t, 2))(0x57B29A99L)), 4L)).sd359)), 0L, 0x3332BBEEL)).even, ((VECTOR(int32_t, 8))(1L))))).odd, ((VECTOR(int32_t, 4))(0x471B046FL))))).xxxxzwxz)).s3))
        { /* block id: 356 */
            VECTOR(uint64_t, 2) l_991 = (VECTOR(uint64_t, 2))(0x0EEB5190745A8BA9L, 0x4E3EBDA0B1D5092AL);
            uint32_t *l_996 = (void*)0;
            uint32_t *l_997 = (void*)0;
            uint32_t *l_998 = (void*)0;
            uint32_t *l_999 = &p_1469->g_177;
            int32_t l_1000 = 0L;
            int32_t l_1002 = (-1L);
            int i;
            atomic_or(&p_1469->l_atomic_reduction[0], (!((safe_add_func_int16_t_s_s((((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 16))(4294967288UL, 1UL, 0UL, 0x20D20904L, 0xDEB575C3L, 0xC4E9E93DL, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 2))(l_979.yw)).yxxxxyyy, ((VECTOR(uint32_t, 2))(0x295FD801L, 0x77148171L)).yyxyxyyy))), ((VECTOR(uint32_t, 2))(0UL, 0xA2009479L)), 4294967293UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_980.ww)), 0UL, 0x90C1C29AL)), 0x1E7BB50FL)).sd, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(0xA20BA2D8L, ((safe_div_func_int32_t_s_s(p_32, (((safe_add_func_int16_t_s_s((0x4E95BF96L == (safe_sub_func_uint16_t_u_u((((((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-3L), 0L)).yyxyyxxx)).s1124510451534240, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(p_1469->g_987.sb6c7)))).wzxzxwzyzywzwzwz))).s8 <= ((*l_999) = ((((0x4DF97D2F1298618FL ^ (safe_lshift_func_int8_t_s_s(((*l_949) = p_1469->g_445.y), 0))) > ((VECTOR(uint64_t, 16))(1UL, 1UL, 0x13DF61B082FECA0BL, 0xCCE700653D6D05D0L, p_33, ((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 2))(l_990.yy))))), ((VECTOR(uint64_t, 2))(l_991.yx)), ((VECTOR(uint64_t, 4))((((l_975 = p_1469->g_98.sb) , ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(l_992.zwyzwzywyxxxyyzy)), (int32_t)(l_975 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_1469->g_993.s89ec)).xzwzxzzxzxzywzzz)).s2)))).sff, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 8))(l_994.s51501543)).s1715527443646731))).s0b53, (int32_t)((l_995[1][5][1] != &p_1469->g_481) ^ ((!((-7L) >= 0x1ED3L)) != l_991.y)), (int32_t)l_991.x))), 0x383749D7L, l_991.y, 1L, (-1L))).s43, ((VECTOR(int32_t, 2))(1L))))).odd) & 6L), 0xDF41D37A166D58E5L, 18446744073709551608UL, 0x906136911883AA7BL)), ((VECTOR(uint64_t, 2))(0xCF7C07BB553E4CF7L)), 1UL)).s5) , l_991.y) == l_991.x))) , (void*)0) != (void*)0), (*p_1469->g_568)))), p_1469->g_313.y)) == FAKE_DIVERGE(p_1469->global_2_offset, get_global_id(2), 10)) | p_1469->g_557.s7))) , l_991.y), ((VECTOR(uint32_t, 2))(0UL)), 4294967286UL, ((VECTOR(uint32_t, 2))(0x7DBF202AL)), 0xE12FA201L)).s35)), 0xB37B397EL, 4UL)), ((VECTOR(uint32_t, 2))(3UL)), ((VECTOR(uint32_t, 2))(0xDBA2D498L)), 0x92CB25B1L)).sdb))).hi , l_975), FAKE_DIVERGE(p_1469->global_1_offset, get_global_id(1), 10))) , (*p_1469->g_437))));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1469->v_collective += p_1469->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            ++l_1003;
            l_1001.y ^= (*p_1469->g_437);
            ++l_1006;
        }
        else
        { /* block id: 365 */
            VECTOR(uint64_t, 8) l_1010 = (VECTOR(uint64_t, 8))(0xE88A9C3866A21D8EL, (VECTOR(uint64_t, 4))(0xE88A9C3866A21D8EL, (VECTOR(uint64_t, 2))(0xE88A9C3866A21D8EL, 0xB679EA7373F32A2FL), 0xB679EA7373F32A2FL), 0xB679EA7373F32A2FL, 0xE88A9C3866A21D8EL, 0xB679EA7373F32A2FL);
            uint16_t *l_1020 = &l_950[4];
            VECTOR(int16_t, 2) l_1021 = (VECTOR(int16_t, 2))(0x6244L, 1L);
            VECTOR(uint8_t, 16) l_1038 = (VECTOR(uint8_t, 16))(0x3EL, (VECTOR(uint8_t, 4))(0x3EL, (VECTOR(uint8_t, 2))(0x3EL, 0x16L), 0x16L), 0x16L, 0x3EL, 0x16L, (VECTOR(uint8_t, 2))(0x3EL, 0x16L), (VECTOR(uint8_t, 2))(0x3EL, 0x16L), 0x3EL, 0x16L, 0x3EL, 0x16L);
            uint8_t *l_1039 = &l_1003;
            int8_t *l_1058[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint8_t *l_1061 = (void*)0;
            int i;
            (*p_1469->g_488) = &l_952[3][0];
            l_1001.x |= ((l_1010.s2 &= ((p_35 , l_1009) && p_1469->g_925)) && (p_32 <= (((((((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(1UL, 0x9ED2L)).lo, (safe_add_func_uint8_t_u_u(p_1469->g_144.s6, ((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(0x51L, 0x4BL)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_1015.xwzxxyxx)))).s71))).even)))) | (((p_33 <= (FAKE_DIVERGE(p_1469->local_0_offset, get_local_id(0), 10) < (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((*p_1469->g_568) > ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 16))(((*l_1020) = (0x2E1CL || 0xE62DL)), ((VECTOR(uint16_t, 8))(65535UL)), 65535UL, 65535UL, l_1010.s4, 1UL, 0UL, 0xD7F8L, 65535UL)).hi, ((VECTOR(uint16_t, 8))(6UL))))).s26)).hi), (*p_1469->g_568))), (*p_1469->g_568))))) & 1L) == 0x1B478B4FL)) ^ 0x74L) , (-1L)) || p_1469->g_993.s3) , l_1009) && p_32)));
            (**p_1469->g_488) = ((!((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(l_1021.xxyyxxxxyyxxxxyx)).sa0, ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 4))(l_1022.xwxz)).xzwzyxzywwywzzzz, ((VECTOR(int16_t, 4))(p_1469->g_1023.s6213)).zzywzxzwxwwzyxyy))).s06))).xyxyyyyy, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x2C4DL, (-1L))))).yxyxyxyy)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_1469->g_1024.s13365373)).s2073630221104012)).even))).hi, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_1025.xyyyxyxyyyyxxyyy)).even)).hi))).zzyyxyzx)).s1) != (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((p_1469->g_712.s7 ^= (safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((*p_1469->g_568), (((((*l_1039) = ((VECTOR(uint8_t, 8))(l_1038.scde2ec34)).s0) ^ ((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(p_33, (+((VECTOR(int8_t, 4))(l_980.w, 1L, 0x5CL, 0x14L)).y))), (safe_rshift_func_uint16_t_u_u(l_1046, (((*l_949) = (safe_mod_func_uint32_t_u_u(l_1021.y, (*p_1469->g_437)))) < (safe_lshift_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((p_1469->g_1059 = ((0xD6L | (safe_sub_func_int64_t_s_s((l_1057[0] != (void*)0), l_1038.sd))) ^ p_35)) & p_33), 1UL)), p_33)) < l_1021.x) ^ p_1469->g_313.y), 5))))))) < 0xE3751A4DE6E9E013L)) >= l_1060) > p_33))), p_35))), 7)), 1L)), (-1L))), p_34)));
            if ((atomic_inc(&p_1469->l_atomic_input[20]) == 1))
            { /* block id: 376 */
                VECTOR(int32_t, 4) l_1062 = (VECTOR(int32_t, 4))(0x1AE13672L, (VECTOR(int32_t, 2))(0x1AE13672L, 7L), 7L);
                VECTOR(uint8_t, 8) l_1067 = (VECTOR(uint8_t, 8))(246UL, (VECTOR(uint8_t, 4))(246UL, (VECTOR(uint8_t, 2))(246UL, 0UL), 0UL), 0UL, 246UL, 0UL);
                uint64_t l_1129[2];
                VECTOR(int32_t, 8) l_1130 = (VECTOR(int32_t, 8))(0x17EDE784L, (VECTOR(int32_t, 4))(0x17EDE784L, (VECTOR(int32_t, 2))(0x17EDE784L, 0x20793C9FL), 0x20793C9FL), 0x20793C9FL, 0x17EDE784L, 0x20793C9FL);
                uint16_t l_1131[4][10][6] = {{{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL}},{{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL}},{{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL}},{{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL},{0x74E9L,0xF500L,0x8DEBL,0UL,0UL,0x8DEBL}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1129[i] = 0x3F96862F8764B57FL;
                for (l_1062.x = 0; (l_1062.x != (-30)); l_1062.x = safe_sub_func_uint64_t_u_u(l_1062.x, 4))
                { /* block id: 379 */
                    int8_t l_1065 = 1L;
                    uint32_t l_1066[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1066[i] = 0x4F198AE7L;
                    l_1066[0] |= l_1065;
                }
                if (l_1067.s7)
                { /* block id: 382 */
                    int32_t l_1068[1];
                    int32_t l_1074 = 0x1DB12A4CL;
                    VECTOR(int32_t, 8) l_1075 = (VECTOR(int32_t, 8))(0x41F30FB7L, (VECTOR(int32_t, 4))(0x41F30FB7L, (VECTOR(int32_t, 2))(0x41F30FB7L, 0x53F9BED6L), 0x53F9BED6L), 0x53F9BED6L, 0x41F30FB7L, 0x53F9BED6L);
                    int16_t l_1076 = 0x5582L;
                    int32_t l_1077 = 0x7AA1BC38L;
                    int8_t l_1078 = 0x6DL;
                    VECTOR(int32_t, 2) l_1079 = (VECTOR(int32_t, 2))(0x2C6D593CL, 7L);
                    uint32_t l_1080 = 0x80E26B0FL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1068[i] = 5L;
                    for (l_1068[0] = 0; (l_1068[0] > 24); l_1068[0] = safe_add_func_int64_t_s_s(l_1068[0], 8))
                    { /* block id: 385 */
                        uint64_t l_1071 = 18446744073709551615UL;
                        uint64_t *l_1073 = (void*)0;
                        uint64_t **l_1072[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_1072[4] = (l_1071 , (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(1L, 0x25226F86L)).xyxxyxyxyxxyxxxx)).sd , l_1072[4]));
                        l_1062.w = 0x0D18A239L;
                        l_1062.z = 0x71EFAF32L;
                    }
                    if ((l_1074 , (((VECTOR(int32_t, 8))((-8L), (l_1078 &= (l_1077 = (l_1076 &= ((VECTOR(int32_t, 2))(l_1075.s23)).hi))), (-1L), ((VECTOR(int32_t, 4))(l_1079.yyyx)), 6L)).s5 , l_1080)))
                    { /* block id: 393 */
                        VECTOR(uint32_t, 2) l_1081 = (VECTOR(uint32_t, 2))(0xF75DDAFDL, 0UL);
                        uint32_t l_1082 = 0x076973CEL;
                        VECTOR(uint32_t, 16) l_1083 = (VECTOR(uint32_t, 16))(0x425D7EDBL, (VECTOR(uint32_t, 4))(0x425D7EDBL, (VECTOR(uint32_t, 2))(0x425D7EDBL, 0x8940C9D1L), 0x8940C9D1L), 0x8940C9D1L, 0x425D7EDBL, 0x8940C9D1L, (VECTOR(uint32_t, 2))(0x425D7EDBL, 0x8940C9D1L), (VECTOR(uint32_t, 2))(0x425D7EDBL, 0x8940C9D1L), 0x425D7EDBL, 0x8940C9D1L, 0x425D7EDBL, 0x8940C9D1L);
                        int8_t l_1084 = 0x35L;
                        uint8_t l_1085[8] = {249UL,249UL,249UL,249UL,249UL,249UL,249UL,249UL};
                        int32_t l_1087[3];
                        int32_t *l_1086 = &l_1087[0];
                        int32_t *l_1088 = &l_1087[0];
                        int32_t *l_1089 = (void*)0;
                        int32_t *l_1090 = &l_1087[0];
                        uint32_t *l_1092 = (void*)0;
                        uint32_t **l_1091 = &l_1092;
                        VECTOR(int32_t, 2) l_1093 = (VECTOR(int32_t, 2))((-4L), 0x61BBE3EBL);
                        VECTOR(int32_t, 8) l_1094 = (VECTOR(int32_t, 8))(0x544D8985L, (VECTOR(int32_t, 4))(0x544D8985L, (VECTOR(int32_t, 2))(0x544D8985L, (-1L)), (-1L)), (-1L), 0x544D8985L, (-1L));
                        int64_t l_1095 = 0x214E05DA0C589E09L;
                        uint32_t l_1096[10][9] = {{4294967289UL,4294967289UL,0x9C9E4A65L,0xE04F8A09L,0x867FCA9FL,1UL,0x86B73278L,0x288FC1B4L,0x86B73278L},{4294967289UL,4294967289UL,0x9C9E4A65L,0xE04F8A09L,0x867FCA9FL,1UL,0x86B73278L,0x288FC1B4L,0x86B73278L},{4294967289UL,4294967289UL,0x9C9E4A65L,0xE04F8A09L,0x867FCA9FL,1UL,0x86B73278L,0x288FC1B4L,0x86B73278L},{4294967289UL,4294967289UL,0x9C9E4A65L,0xE04F8A09L,0x867FCA9FL,1UL,0x86B73278L,0x288FC1B4L,0x86B73278L},{4294967289UL,4294967289UL,0x9C9E4A65L,0xE04F8A09L,0x867FCA9FL,1UL,0x86B73278L,0x288FC1B4L,0x86B73278L},{4294967289UL,4294967289UL,0x9C9E4A65L,0xE04F8A09L,0x867FCA9FL,1UL,0x86B73278L,0x288FC1B4L,0x86B73278L},{4294967289UL,4294967289UL,0x9C9E4A65L,0xE04F8A09L,0x867FCA9FL,1UL,0x86B73278L,0x288FC1B4L,0x86B73278L},{4294967289UL,4294967289UL,0x9C9E4A65L,0xE04F8A09L,0x867FCA9FL,1UL,0x86B73278L,0x288FC1B4L,0x86B73278L},{4294967289UL,4294967289UL,0x9C9E4A65L,0xE04F8A09L,0x867FCA9FL,1UL,0x86B73278L,0x288FC1B4L,0x86B73278L},{4294967289UL,4294967289UL,0x9C9E4A65L,0xE04F8A09L,0x867FCA9FL,1UL,0x86B73278L,0x288FC1B4L,0x86B73278L}};
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_1087[i] = (-7L);
                        l_1090 = ((((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 4))(l_1081.xxyx)).zwzxzzwx, (uint32_t)(((l_1082 , 0x4614AED8L) , ((VECTOR(uint32_t, 16))(l_1083.s0d853abf8b76ff99)).sf) , l_1084)))).s7 , l_1085[5]) , (l_1089 = (l_1088 = l_1086)));
                        l_1091 = l_1091;
                        l_1074 = (l_1068[0] = ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(l_1093.yxxxyxxy)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1094.s5407)).hi)).xxyyyyyy))))).s5);
                        ++l_1096[3][3];
                    }
                    else
                    { /* block id: 401 */
                        VECTOR(int32_t, 2) l_1099 = (VECTOR(int32_t, 2))(2L, 0x1C42B336L);
                        int32_t *l_1100 = (void*)0;
                        int32_t *l_1101 = (void*)0;
                        int64_t l_1102 = 6L;
                        uint64_t l_1103 = 1UL;
                        uint64_t l_1106 = 0xAA7D07078A2C8F9BL;
                        int32_t l_1107[8][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
                        int32_t *l_1108 = &l_1107[2][0];
                        int32_t *l_1109 = (void*)0;
                        int32_t *l_1110 = &l_1107[6][1];
                        int i, j;
                        l_1101 = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1099.yx)), 0x66BCC536L, 0x3A49AEB6L)).yzxwyxxyywywwzzw)).sb , l_1100);
                        ++l_1103;
                        l_1068[0] &= l_1106;
                        l_1110 = (l_1109 = (l_1107[2][0] , l_1108));
                    }
                    for (l_1075.s7 = (-7); (l_1075.s7 < 7); l_1075.s7 = safe_add_func_uint32_t_u_u(l_1075.s7, 3))
                    { /* block id: 410 */
                        uint16_t l_1113[9] = {2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL,2UL};
                        uint32_t l_1116 = 0x7F0F17A2L;
                        int64_t l_1119 = 0x72451C36E3E49D7CL;
                        int64_t l_1120 = 0x41B6190AB0064833L;
                        int8_t l_1121[6] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
                        int32_t l_1122 = 0x0681D24FL;
                        uint32_t l_1123 = 7UL;
                        int i;
                        --l_1113[3];
                        ++l_1116;
                        l_1062.w = l_1119;
                        l_1123--;
                    }
                }
                else
                { /* block id: 416 */
                    int32_t l_1126[2][9][5] = {{{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L}},{{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L},{0L,0x5051AFE7L,0x332E9834L,0x332E9834L,0x5051AFE7L}}};
                    int32_t *l_1127 = &l_1126[0][3][3];
                    int32_t *l_1128 = &l_1126[1][3][0];
                    int i, j, k;
                    l_1062.z ^= l_1126[0][3][3];
                    l_1128 = l_1127;
                }
                if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_1129[1], ((VECTOR(int32_t, 4))(l_1130.s2113)), l_1131[0][0][1], 0x002E4416L, 0x10217284L)))).s5)
                { /* block id: 420 */
                    int32_t l_1133 = 0x5659BB6DL;
                    int32_t *l_1132 = &l_1133;
                    int32_t *l_1134 = &l_1133;
                    uint8_t l_1135 = 0UL;
                    int32_t l_1136 = 4L;
                    int64_t l_1196 = 0x223578135CF4031BL;
                    l_1134 = (l_1132 = (void*)0);
                    l_1062.x |= l_1135;
                    if ((l_1062.z &= l_1136))
                    { /* block id: 425 */
                        VECTOR(uint32_t, 8) l_1137 = (VECTOR(uint32_t, 8))(0x05335159L, (VECTOR(uint32_t, 4))(0x05335159L, (VECTOR(uint32_t, 2))(0x05335159L, 0xF5C2B284L), 0xF5C2B284L), 0xF5C2B284L, 0x05335159L, 0xF5C2B284L);
                        VECTOR(uint16_t, 4) l_1138 = (VECTOR(uint16_t, 4))(0x0892L, (VECTOR(uint16_t, 2))(0x0892L, 65535UL), 65535UL);
                        VECTOR(uint16_t, 2) l_1139 = (VECTOR(uint16_t, 2))(65529UL, 1UL);
                        int16_t l_1140 = (-1L);
                        int32_t l_1141 = (-1L);
                        VECTOR(uint32_t, 4) l_1142 = (VECTOR(uint32_t, 4))(0x2939B3E6L, (VECTOR(uint32_t, 2))(0x2939B3E6L, 0x29FF4B08L), 0x29FF4B08L);
                        int8_t l_1143 = (-1L);
                        VECTOR(uint64_t, 16) l_1144 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL), 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL, 18446744073709551615UL);
                        VECTOR(uint64_t, 16) l_1145 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x89E8C2DF95632405L), 0x89E8C2DF95632405L), 0x89E8C2DF95632405L, 18446744073709551615UL, 0x89E8C2DF95632405L, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x89E8C2DF95632405L), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x89E8C2DF95632405L), 18446744073709551615UL, 0x89E8C2DF95632405L, 18446744073709551615UL, 0x89E8C2DF95632405L);
                        VECTOR(uint64_t, 16) l_1146 = (VECTOR(uint64_t, 16))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 0UL, 18446744073709551606UL, (VECTOR(uint64_t, 2))(0UL, 18446744073709551606UL), (VECTOR(uint64_t, 2))(0UL, 18446744073709551606UL), 0UL, 18446744073709551606UL, 0UL, 18446744073709551606UL);
                        VECTOR(uint64_t, 16) l_1147 = (VECTOR(uint64_t, 16))(0x223D3522CAE8DC83L, (VECTOR(uint64_t, 4))(0x223D3522CAE8DC83L, (VECTOR(uint64_t, 2))(0x223D3522CAE8DC83L, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x223D3522CAE8DC83L, 18446744073709551615UL, (VECTOR(uint64_t, 2))(0x223D3522CAE8DC83L, 18446744073709551615UL), (VECTOR(uint64_t, 2))(0x223D3522CAE8DC83L, 18446744073709551615UL), 0x223D3522CAE8DC83L, 18446744073709551615UL, 0x223D3522CAE8DC83L, 18446744073709551615UL);
                        VECTOR(int16_t, 16) l_1148 = (VECTOR(int16_t, 16))(0x2A95L, (VECTOR(int16_t, 4))(0x2A95L, (VECTOR(int16_t, 2))(0x2A95L, 0x2167L), 0x2167L), 0x2167L, 0x2A95L, 0x2167L, (VECTOR(int16_t, 2))(0x2A95L, 0x2167L), (VECTOR(int16_t, 2))(0x2A95L, 0x2167L), 0x2A95L, 0x2167L, 0x2A95L, 0x2167L);
                        VECTOR(int16_t, 2) l_1149 = (VECTOR(int16_t, 2))(1L, (-8L));
                        VECTOR(int16_t, 2) l_1150 = (VECTOR(int16_t, 2))((-8L), 9L);
                        int32_t l_1151[1][8] = {{0x5B8DF2F2L,0L,0x5B8DF2F2L,0x5B8DF2F2L,0L,0x5B8DF2F2L,0x5B8DF2F2L,0L}};
                        VECTOR(int16_t, 8) l_1152 = (VECTOR(int16_t, 8))(0x7A36L, (VECTOR(int16_t, 4))(0x7A36L, (VECTOR(int16_t, 2))(0x7A36L, 4L), 4L), 4L, 0x7A36L, 4L);
                        uint32_t l_1153 = 1UL;
                        VECTOR(int16_t, 16) l_1154 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x5056L), 0x5056L), 0x5056L, 1L, 0x5056L, (VECTOR(int16_t, 2))(1L, 0x5056L), (VECTOR(int16_t, 2))(1L, 0x5056L), 1L, 0x5056L, 1L, 0x5056L);
                        VECTOR(int16_t, 2) l_1155 = (VECTOR(int16_t, 2))(0x5FDFL, (-3L));
                        VECTOR(int16_t, 2) l_1156 = (VECTOR(int16_t, 2))((-9L), 0x0715L);
                        uint16_t l_1157 = 0x050BL;
                        int64_t l_1158 = 0x759C8FF73F368D97L;
                        VECTOR(int16_t, 16) l_1159 = (VECTOR(int16_t, 16))(0x362DL, (VECTOR(int16_t, 4))(0x362DL, (VECTOR(int16_t, 2))(0x362DL, 0x294CL), 0x294CL), 0x294CL, 0x362DL, 0x294CL, (VECTOR(int16_t, 2))(0x362DL, 0x294CL), (VECTOR(int16_t, 2))(0x362DL, 0x294CL), 0x362DL, 0x294CL, 0x362DL, 0x294CL);
                        VECTOR(int16_t, 2) l_1160 = (VECTOR(int16_t, 2))((-5L), 0x4F03L);
                        VECTOR(int16_t, 8) l_1161 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x65A4L), 0x65A4L), 0x65A4L, 1L, 0x65A4L);
                        VECTOR(int16_t, 8) l_1162 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x36CFL), 0x36CFL), 0x36CFL, (-1L), 0x36CFL);
                        VECTOR(int16_t, 8) l_1163 = (VECTOR(int16_t, 8))(0x6929L, (VECTOR(int16_t, 4))(0x6929L, (VECTOR(int16_t, 2))(0x6929L, 0x560FL), 0x560FL), 0x560FL, 0x6929L, 0x560FL);
                        VECTOR(int16_t, 16) l_1164 = (VECTOR(int16_t, 16))(0x0DD0L, (VECTOR(int16_t, 4))(0x0DD0L, (VECTOR(int16_t, 2))(0x0DD0L, 3L), 3L), 3L, 0x0DD0L, 3L, (VECTOR(int16_t, 2))(0x0DD0L, 3L), (VECTOR(int16_t, 2))(0x0DD0L, 3L), 0x0DD0L, 3L, 0x0DD0L, 3L);
                        VECTOR(int16_t, 2) l_1165 = (VECTOR(int16_t, 2))(1L, (-1L));
                        VECTOR(int16_t, 8) l_1166 = (VECTOR(int16_t, 8))(0x4B8CL, (VECTOR(int16_t, 4))(0x4B8CL, (VECTOR(int16_t, 2))(0x4B8CL, 0x4130L), 0x4130L), 0x4130L, 0x4B8CL, 0x4130L);
                        VECTOR(int16_t, 4) l_1167 = (VECTOR(int16_t, 4))(0x6127L, (VECTOR(int16_t, 2))(0x6127L, 1L), 1L);
                        VECTOR(int16_t, 8) l_1168 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L);
                        VECTOR(int16_t, 8) l_1169 = (VECTOR(int16_t, 8))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L);
                        uint64_t l_1170[2][8] = {{0UL,0UL,0xF8F3F285DBAF4163L,0x21691AC4633230D1L,0xECFBA7FDFBE7CCD6L,0x21691AC4633230D1L,0xF8F3F285DBAF4163L,0UL},{0UL,0UL,0xF8F3F285DBAF4163L,0x21691AC4633230D1L,0xECFBA7FDFBE7CCD6L,0x21691AC4633230D1L,0xF8F3F285DBAF4163L,0UL}};
                        int8_t l_1171[4][1];
                        uint32_t l_1172 = 0UL;
                        int32_t l_1173 = 0L;
                        int64_t l_1174 = 0x56EB000D4C66F985L;
                        uint64_t l_1175 = 0xD276A013BEE4A012L;
                        uint64_t l_1176 = 0x287F438A3245D878L;
                        int32_t *l_1177 = (void*)0;
                        int32_t *l_1178 = (void*)0;
                        VECTOR(int32_t, 8) l_1179 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x6C6E41FEL), 0x6C6E41FEL), 0x6C6E41FEL, 1L, 0x6C6E41FEL);
                        VECTOR(int32_t, 2) l_1180 = (VECTOR(int32_t, 2))(0x49622C3DL, (-1L));
                        VECTOR(int32_t, 2) l_1181 = (VECTOR(int32_t, 2))(0x351E5F87L, 0x0C63EF5FL);
                        int32_t *l_1182 = &l_1141;
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1171[i][j] = (-1L);
                        }
                        l_1178 = (((l_1175 ^= ((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 8))(1UL, ((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_1137.s24)).yyyxyyxyyxxxxyxx)).s102d, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(upsample(((VECTOR(uint16_t, 16))(l_1138.wwywzxzwxxywyxxw)).sbaa0, ((VECTOR(uint16_t, 4))(l_1139.xyxy))))).xxzzwxzzzxzxywxx)).s2f98, ((VECTOR(uint32_t, 8))(0x0142057DL, (l_1141 = l_1140), ((VECTOR(uint32_t, 2))(l_1142.yz)).lo, l_1143, ((VECTOR(uint32_t, 2))(4294967287UL, 0x42EABA37L)), 1UL, 0x865C248EL)).hi))), ((VECTOR(uint32_t, 2))(4294967288UL, 4294967295UL)).yyyx))).zwxwywyxzzwzyzxz, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(18446744073709551613UL, 0xA1F8B801045619ADL)).xyyyxxxx)).s17)).yxyxyyyxxyyyyyxy))).sf5))), 0x9C45B9C3580C8EC2L, ((VECTOR(uint64_t, 4))(mad_hi(((VECTOR(uint64_t, 4))(l_1144.s1b99)), ((VECTOR(uint64_t, 2))(rotate(((VECTOR(uint64_t, 4))(0x587EB87D8A516512L, ((VECTOR(uint64_t, 2))(l_1145.s08)), 0x7A8E52CE7777753FL)).lo, ((VECTOR(uint64_t, 4))(l_1146.s7adb)).lo))).xxxx, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_1147.sf2)), 0xE99F8978869D47BEL, 0xC771937251FE24A1L)), ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 8))(1UL, ((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 8))(l_1148.s5b9654dd)).s6076734574431155, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_1149.xxyyxxyxyyyyyxxy)).lo)).odd, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_1150.yx)), (-1L), 0x5E93L)), ((VECTOR(int16_t, 16))(0x5D53L, (-10L), 0x1134L, (-1L), 2L, 0x0916L, 0x2939L, l_1151[0][4], 0x6140L, (-1L), ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_1152.s3275)).wyxzxzwz)).s14, ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((l_1153 ^= 0L), 0L, ((VECTOR(int16_t, 8))(l_1154.s5b135db5)), ((VECTOR(int16_t, 2))(l_1155.xy)), (-4L), (-1L), 0x1A65L, 0x1EFEL)))).s7b, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_1156.xxxx)))), l_1157, l_1158, (-1L), 0L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_1159.scc)).yyyxxxxxyxxxxyxy)).s2384, ((VECTOR(int16_t, 2))((-1L), 0x0000L)).xyyx, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))(l_1160.xxxyxyyxxyyyyyyy)).sb935, ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 2))(l_1161.s50)).yyyxxyxy, ((VECTOR(int16_t, 16))(l_1162.s4063530721410763)).hi))).lo)).wzwwzxzzywxyzxyz)))).s92, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_1163.s76)))), 0x5DEFL, 1L)).yxwwyzyw)).s17, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_1164.s8a278be7be2ba0fa)))).s8c))).yyyx)).lo)).xxxyxxyyyxxxxxyx, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_1165.yyyyyxxy)).s2332264561062756))))).sf8fe)))))).even)), ((VECTOR(int16_t, 2))(1L, 3L)), 0L, ((VECTOR(int16_t, 2))(l_1166.s73)), (-10L))).sb632)).even)), ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_1167.wy)), 0x2F4BL, (-7L))).zyzzxywx, ((VECTOR(int16_t, 4))((-1L), 0x7EF7L, 1L, (-1L))).wwxwxzxy, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_1168.s3505)))).wyxxzzzz))).s77)))))), ((VECTOR(int16_t, 16))(l_1169.s2027234636704702)).s3, 0x2B3FL, 0x17CBL, (-10L))).s15d1))), 0x265CL, (l_1171[0][0] = l_1170[1][2]), 4L, 0x3815L)).s0206474752132337))).odd, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(0UL, 0UL, 0UL, 1UL, l_1172, l_1173, 65530UL, 65526UL)))).s33)).yxxy)).xzxwxyzz))).hi, ((VECTOR(int32_t, 4))(0x483DE441L)), ((VECTOR(int32_t, 4))(0x1ECF5342L))))), ((VECTOR(uint32_t, 4))(0xBF84CEEAL))))).odd, ((VECTOR(int64_t, 2))(5L))))), 18446744073709551607UL, l_1174, 1UL, 4UL, 0x71F72FEDEF5EA166L)).s37, ((VECTOR(uint64_t, 2))(18446744073709551614UL)), ((VECTOR(uint64_t, 2))(2UL))))), 0UL, 0UL)).even))))).s4765774361241321, ((VECTOR(uint64_t, 16))(7UL))))).sb) , l_1176) , l_1177);
                        l_1130.s5 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_1179.s2372)), 0x359B2B38L, ((VECTOR(int32_t, 2))(l_1180.xy)), 0x08E406EDL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1181.yx)).xxyy)), ((VECTOR(int32_t, 2))((-1L), 0x48339917L)), (-3L), 0x1B453D79L)).s6c)).odd;
                        l_1177 = l_1182;
                    }
                    else
                    { /* block id: 433 */
                        int32_t l_1184 = (-2L);
                        int32_t *l_1183 = &l_1184;
                        int8_t l_1185 = 0L;
                        int16_t l_1186 = 0x7E2FL;
                        uint32_t l_1187 = 4294967289UL;
                        int32_t *l_1190[9][10][1] = {{{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184}},{{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184}},{{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184}},{{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184}},{{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184}},{{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184}},{{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184}},{{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184}},{{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184},{&l_1184}}};
                        int32_t l_1191 = (-1L);
                        uint32_t l_1192 = 0x8BD96B0AL;
                        int16_t l_1195 = 0x7941L;
                        int i, j, k;
                        l_1132 = (l_1134 = l_1183);
                        --l_1187;
                        l_1190[1][4][0] = (void*)0;
                        (*l_1132) = ((l_1192++) , l_1195);
                    }
                    l_1130.s3 = l_1196;
                }
                else
                { /* block id: 442 */
                    VECTOR(int32_t, 16) l_1197 = (VECTOR(int32_t, 16))(0x7626B08BL, (VECTOR(int32_t, 4))(0x7626B08BL, (VECTOR(int32_t, 2))(0x7626B08BL, 0x7132AC27L), 0x7132AC27L), 0x7132AC27L, 0x7626B08BL, 0x7132AC27L, (VECTOR(int32_t, 2))(0x7626B08BL, 0x7132AC27L), (VECTOR(int32_t, 2))(0x7626B08BL, 0x7132AC27L), 0x7626B08BL, 0x7132AC27L, 0x7626B08BL, 0x7132AC27L);
                    uint8_t l_1236 = 0UL;
                    VECTOR(int32_t, 16) l_1237 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 3L), 3L), 3L, 0L, 3L, (VECTOR(int32_t, 2))(0L, 3L), (VECTOR(int32_t, 2))(0L, 3L), 0L, 3L, 0L, 3L);
                    VECTOR(int32_t, 2) l_1238 = (VECTOR(int32_t, 2))((-10L), 0x1525220DL);
                    int16_t l_1239 = 6L;
                    VECTOR(int32_t, 4) l_1240 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x23A89DD0L), 0x23A89DD0L);
                    VECTOR(int32_t, 16) l_1241 = (VECTOR(int32_t, 16))(0x47E92BE7L, (VECTOR(int32_t, 4))(0x47E92BE7L, (VECTOR(int32_t, 2))(0x47E92BE7L, 0x75CA59F6L), 0x75CA59F6L), 0x75CA59F6L, 0x47E92BE7L, 0x75CA59F6L, (VECTOR(int32_t, 2))(0x47E92BE7L, 0x75CA59F6L), (VECTOR(int32_t, 2))(0x47E92BE7L, 0x75CA59F6L), 0x47E92BE7L, 0x75CA59F6L, 0x47E92BE7L, 0x75CA59F6L);
                    VECTOR(int32_t, 8) l_1242 = (VECTOR(int32_t, 8))(0x30A28CA3L, (VECTOR(int32_t, 4))(0x30A28CA3L, (VECTOR(int32_t, 2))(0x30A28CA3L, 0x6A0B63EAL), 0x6A0B63EAL), 0x6A0B63EAL, 0x30A28CA3L, 0x6A0B63EAL);
                    VECTOR(int32_t, 4) l_1243 = (VECTOR(int32_t, 4))(0x23D39158L, (VECTOR(int32_t, 2))(0x23D39158L, 0L), 0L);
                    VECTOR(int32_t, 16) l_1244 = (VECTOR(int32_t, 16))(0x5F461C1DL, (VECTOR(int32_t, 4))(0x5F461C1DL, (VECTOR(int32_t, 2))(0x5F461C1DL, (-1L)), (-1L)), (-1L), 0x5F461C1DL, (-1L), (VECTOR(int32_t, 2))(0x5F461C1DL, (-1L)), (VECTOR(int32_t, 2))(0x5F461C1DL, (-1L)), 0x5F461C1DL, (-1L), 0x5F461C1DL, (-1L));
                    VECTOR(int32_t, 8) l_1245 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x0EA355A8L), 0x0EA355A8L), 0x0EA355A8L, (-2L), 0x0EA355A8L);
                    int16_t l_1246 = (-3L);
                    uint32_t l_1247 = 0xDAE28707L;
                    VECTOR(int32_t, 2) l_1248 = (VECTOR(int32_t, 2))(0x312D6817L, 0x225607B8L);
                    VECTOR(int32_t, 2) l_1249 = (VECTOR(int32_t, 2))(0x7A7D3491L, 0x55B226EAL);
                    int8_t l_1250 = 0x27L;
                    VECTOR(int32_t, 2) l_1251 = (VECTOR(int32_t, 2))((-4L), 3L);
                    VECTOR(int32_t, 16) l_1252 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 6L), 6L), 6L, (-1L), 6L, (VECTOR(int32_t, 2))((-1L), 6L), (VECTOR(int32_t, 2))((-1L), 6L), (-1L), 6L, (-1L), 6L);
                    VECTOR(int32_t, 8) l_1253 = (VECTOR(int32_t, 8))(0x54DEA6A5L, (VECTOR(int32_t, 4))(0x54DEA6A5L, (VECTOR(int32_t, 2))(0x54DEA6A5L, 0x51374D18L), 0x51374D18L), 0x51374D18L, 0x54DEA6A5L, 0x51374D18L);
                    uint8_t l_1254[1];
                    VECTOR(int32_t, 8) l_1255 = (VECTOR(int32_t, 8))(0x7AC00A03L, (VECTOR(int32_t, 4))(0x7AC00A03L, (VECTOR(int32_t, 2))(0x7AC00A03L, 1L), 1L), 1L, 0x7AC00A03L, 1L);
                    uint32_t l_1256 = 0x19381EA9L;
                    uint32_t l_1257 = 0xD5222BDEL;
                    int64_t l_1258[5][3] = {{(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L)}};
                    VECTOR(int32_t, 4) l_1259 = (VECTOR(int32_t, 4))(0x43A2188BL, (VECTOR(int32_t, 2))(0x43A2188BL, 0L), 0L);
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1254[i] = 0x72L;
                    if (((VECTOR(int32_t, 4))(l_1197.s54b5)).y)
                    { /* block id: 443 */
                        int32_t l_1199 = 4L;
                        int32_t *l_1198 = &l_1199;
                        int32_t *l_1200[9] = {&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199,&l_1199};
                        uint32_t l_1201 = 0x5BA66578L;
                        VECTOR(int8_t, 8) l_1202 = (VECTOR(int8_t, 8))(0x6EL, (VECTOR(int8_t, 4))(0x6EL, (VECTOR(int8_t, 2))(0x6EL, 0x6FL), 0x6FL), 0x6FL, 0x6EL, 0x6FL);
                        VECTOR(int8_t, 8) l_1203 = (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 9L), 9L), 9L, 7L, 9L);
                        VECTOR(int8_t, 2) l_1204 = (VECTOR(int8_t, 2))(0x18L, 0x64L);
                        VECTOR(int8_t, 16) l_1205 = (VECTOR(int8_t, 16))(0x0CL, (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, 0x07L), 0x07L), 0x07L, 0x0CL, 0x07L, (VECTOR(int8_t, 2))(0x0CL, 0x07L), (VECTOR(int8_t, 2))(0x0CL, 0x07L), 0x0CL, 0x07L, 0x0CL, 0x07L);
                        VECTOR(int8_t, 8) l_1206 = (VECTOR(int8_t, 8))(0x7DL, (VECTOR(int8_t, 4))(0x7DL, (VECTOR(int8_t, 2))(0x7DL, 0x77L), 0x77L), 0x77L, 0x7DL, 0x77L);
                        int8_t l_1207 = 0x39L;
                        VECTOR(int8_t, 4) l_1208 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-6L)), (-6L));
                        VECTOR(int8_t, 16) l_1209 = (VECTOR(int8_t, 16))(0x65L, (VECTOR(int8_t, 4))(0x65L, (VECTOR(int8_t, 2))(0x65L, 4L), 4L), 4L, 0x65L, 4L, (VECTOR(int8_t, 2))(0x65L, 4L), (VECTOR(int8_t, 2))(0x65L, 4L), 0x65L, 4L, 0x65L, 4L);
                        VECTOR(int8_t, 16) l_1210 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-2L)), (-2L)), (-2L), 1L, (-2L), (VECTOR(int8_t, 2))(1L, (-2L)), (VECTOR(int8_t, 2))(1L, (-2L)), 1L, (-2L), 1L, (-2L));
                        int64_t l_1211[2][9] = {{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)}};
                        int32_t l_1212 = 0x31C7EFE9L;
                        VECTOR(int8_t, 16) l_1213 = (VECTOR(int8_t, 16))(0x24L, (VECTOR(int8_t, 4))(0x24L, (VECTOR(int8_t, 2))(0x24L, (-1L)), (-1L)), (-1L), 0x24L, (-1L), (VECTOR(int8_t, 2))(0x24L, (-1L)), (VECTOR(int8_t, 2))(0x24L, (-1L)), 0x24L, (-1L), 0x24L, (-1L));
                        VECTOR(int8_t, 4) l_1214 = (VECTOR(int8_t, 4))(0x7AL, (VECTOR(int8_t, 2))(0x7AL, 0x14L), 0x14L);
                        VECTOR(int32_t, 2) l_1215 = (VECTOR(int32_t, 2))(0x39A4D8E3L, (-1L));
                        VECTOR(int8_t, 4) l_1216 = (VECTOR(int8_t, 4))(0x19L, (VECTOR(int8_t, 2))(0x19L, 1L), 1L);
                        VECTOR(int8_t, 4) l_1217 = (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, (-1L)), (-1L));
                        VECTOR(int8_t, 2) l_1218 = (VECTOR(int8_t, 2))(0x4BL, 0x15L);
                        uint16_t l_1219 = 0x8BBEL;
                        VECTOR(int8_t, 8) l_1220 = (VECTOR(int8_t, 8))(0x39L, (VECTOR(int8_t, 4))(0x39L, (VECTOR(int8_t, 2))(0x39L, (-1L)), (-1L)), (-1L), 0x39L, (-1L));
                        int16_t l_1221 = (-2L);
                        int8_t l_1222[5][4][10] = {{{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)},{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)},{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)},{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)}},{{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)},{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)},{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)},{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)}},{{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)},{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)},{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)},{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)}},{{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)},{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)},{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)},{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)}},{{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)},{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)},{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)},{(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L),0x5BL,(-1L),(-1L)}}};
                        int32_t l_1223 = 1L;
                        uint32_t l_1224 = 4294967295UL;
                        int8_t l_1225 = 1L;
                        uint64_t l_1228 = 18446744073709551615UL;
                        uint64_t *l_1227 = &l_1228;
                        uint64_t **l_1226 = &l_1227;
                        int i, j, k;
                        l_1200[4] = l_1198;
                        l_1226 = (l_1201 , (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 16))(1L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_1202.s47030730)), ((VECTOR(int8_t, 8))(l_1203.s75046032)))).sba, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x06L, (-9L))), 0x79L, 0L)).hi, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_1204.xx)).yxyy)).lo)), ((VECTOR(int8_t, 4))(0x57L, (-2L), (-1L), (-1L))).even, ((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(l_1205.sb95d)).yxxyyyyxzzwwxwyy, ((VECTOR(int8_t, 4))(l_1206.s1406)).wxxwyxxxxzwxzwzx))).sf7))), 1L, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_1207, ((VECTOR(int8_t, 2))((-5L), 0x6BL)), 0x2CL)).lo)), ((VECTOR(int8_t, 2))(0x73L, (-1L))), 0x2DL)).s66))))).xxyx)), ((VECTOR(int8_t, 4))(0x27L, 0x1CL, 1L, 0x36L)))).s67, ((VECTOR(int8_t, 4))(l_1208.wzyz)).odd))).xxyy)), 0x73L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(0x41L, 0x35L, (-1L), 0x60L, ((VECTOR(int8_t, 4))(l_1209.s8c85)))))), 0x66L, 0x1CL)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),VECTOR(int8_t, 4),((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),int8_t,((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(l_1210.s54)).xyyyyyyyyxxyyxxx, ((VECTOR(int8_t, 8))((l_1211[1][5] , l_1212), ((VECTOR(int8_t, 2))(l_1213.s21)), 0x15L, 0x5FL, (-3L), 2L, 0x5DL)).s1560425243033052))).s9, (l_1214.w = ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_1214.wywy)).hi)).hi), 1L, l_1215.x, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_1216.xyzzxyxyyyxyyyyx)).lo)))), 0x7CL, ((VECTOR(int8_t, 2))(l_1217.xy)), 0x30L)), ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 8))(l_1218.xyxyyxyy)).lo, ((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 4))(1L, l_1219, 0x49L, 0L)).wyyzyxzxyzxxzyzx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_1220.s3144036647127056)).s1d5b)).ywwzyzxwxxzyxzxw, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))((l_1222[4][3][9] = l_1221), ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 2))(2L, 0L)), (int8_t)l_1223, (int8_t)0L))), 0x37L)), 0L, 0x02L, 0x69L, (-4L))).s5251453350211646))).s1baa, ((VECTOR(int8_t, 4))(0x75L))))).yxwwzyyyxywwwxyy))).s85, ((VECTOR(int8_t, 2))((-3L)))))).yyxxyxyx, (int8_t)l_1224, (int8_t)l_1225))).s2317544234760377)).s31, ((VECTOR(int8_t, 2))(0x3BL))))).xxyx, ((VECTOR(int8_t, 4))(3L)), ((VECTOR(int8_t, 4))(0x76L))))).yzzzxxzx)).s3512071216716664))).s6b)), 1L, 8L)).x , (void*)0));
                    }
                    else
                    { /* block id: 448 */
                        int64_t l_1229[3];
                        int32_t l_1230[9] = {(-10L),0x420151FAL,(-10L),(-10L),0x420151FAL,(-10L),(-10L),0x420151FAL,(-10L)};
                        int8_t l_1231 = 6L;
                        uint64_t l_1232 = 0x1AE6D2BEB902A768L;
                        uint16_t l_1235 = 0UL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1229[i] = 0L;
                        l_1130.s3 = l_1229[0];
                        ++l_1232;
                        l_1130.s1 = (l_1062.w = l_1235);
                    }
                    l_1130.s1 = (l_1236 , ((VECTOR(int32_t, 8))(l_1237.sacb3adbd)).s2);
                    l_1130.s6 = ((VECTOR(int32_t, 16))(0x6F2C217FL, ((VECTOR(int32_t, 8))(l_1238.xyyyxxxx)), ((VECTOR(int32_t, 16))(0x2AB5F49CL, 0x6F0962B0L, 0x5541BAF7L, l_1239, 0x07D3A81DL, ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(l_1240.yxzzwywx)).s7745600215215264, ((VECTOR(int32_t, 16))(l_1241.sfe03411d87afb172)), ((VECTOR(int32_t, 16))(l_1242.s7067540010643126))))).hi, ((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x011A1DE4L, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(l_1243.zwyyyzwyyyzyyyyw)).sd6, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(1L, 0x20CE03D3L)).xyxxyyyx)), ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_1244.s1eac)).even)).xxyy)).odd)), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(l_1245.s11)), (int32_t)l_1246))), l_1247, ((FAKE_DIVERGE(p_1469->group_2_offset, get_group_id(2), 10) , (-1L)) , ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(l_1248.xx)).xxyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1249.xy)).yyyx))))).z), ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(0x7A0C64CDL, 6L, l_1250, 0x6FB0D496L, ((VECTOR(int32_t, 2))((-10L), 9L)), 0x6ED57A50L, 0x18E568FFL)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1251.yx)).xxyyxyyy))))), 6L, (-9L))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1252.s62e37ee3ceb60b98)).s52ce)).zywxyxxzxywzyzyw))).s81, ((VECTOR(int32_t, 4))(l_1253.s1206)).lo))).yyxxxyxy, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 16))((-1L), 0x0017F907L, ((VECTOR(int32_t, 8))((l_1254[0] , 0x46C3ED01L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 2))(l_1255.s62)).yyxx, (int32_t)l_1256, (int32_t)(l_1257 , l_1258[1][2])))))), ((VECTOR(int32_t, 2))((-8L))), 0x147B6B67L)), ((VECTOR(int32_t, 2))((-1L))), (-1L), 0L, 0x5AE371B1L, 0L)).hi, ((VECTOR(int32_t, 8))((-7L))), ((VECTOR(int32_t, 8))(4L)))))))).s34))).hi, 0x23ADBE20L, (-1L))).ywxwzywzwxzywxxz)).hi)), ((VECTOR(int32_t, 8))(0x054F2624L))))), ((VECTOR(int32_t, 8))((-1L)))))), l_1259.w, 0x6928BA84L, 0x17675A30L)).s3, ((VECTOR(int32_t, 2))(4L)), ((VECTOR(int32_t, 4))(0x0E560925L)))).sb;
                }
                unsigned int result = 0;
                result += l_1062.w;
                result += l_1062.z;
                result += l_1062.y;
                result += l_1062.x;
                result += l_1067.s7;
                result += l_1067.s6;
                result += l_1067.s5;
                result += l_1067.s4;
                result += l_1067.s3;
                result += l_1067.s2;
                result += l_1067.s1;
                result += l_1067.s0;
                int l_1129_i0;
                for (l_1129_i0 = 0; l_1129_i0 < 2; l_1129_i0++) {
                    result += l_1129[l_1129_i0];
                }
                result += l_1130.s7;
                result += l_1130.s6;
                result += l_1130.s5;
                result += l_1130.s4;
                result += l_1130.s3;
                result += l_1130.s2;
                result += l_1130.s1;
                result += l_1130.s0;
                int l_1131_i0, l_1131_i1, l_1131_i2;
                for (l_1131_i0 = 0; l_1131_i0 < 4; l_1131_i0++) {
                    for (l_1131_i1 = 0; l_1131_i1 < 10; l_1131_i1++) {
                        for (l_1131_i2 = 0; l_1131_i2 < 6; l_1131_i2++) {
                            result += l_1131[l_1131_i0][l_1131_i1][l_1131_i2];
                        }
                    }
                }
                atomic_add(&p_1469->l_special_values[20], result);
            }
            else
            { /* block id: 457 */
                (1 + 1);
            }
        }
        atomic_or(&p_1469->l_atomic_reduction[0], p_32 + get_linear_global_id());
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1469->v_collective += p_1469->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    return p_1469->g_964.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1469->g_568 p_1469->g_913 p_1469->g_922 p_1469->g_93 p_1469->g_98 p_1469->g_279
 * writes: p_1469->g_569 p_1469->g_447 p_1469->g_931 p_1469->g_163
 */
uint64_t  func_38(int32_t  p_39, uint64_t  p_40, uint64_t  p_41, uint64_t  p_42, uint64_t  p_43, struct S0 * p_1469)
{ /* block id: 330 */
    int32_t l_906 = 0x7660C41DL;
    uint16_t **l_909 = (void*)0;
    VECTOR(int8_t, 8) l_912 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L);
    int32_t ***l_920 = &p_1469->g_488;
    int32_t ****l_919 = &l_920;
    int32_t *****l_918 = &l_919;
    VECTOR(uint16_t, 8) l_921 = (VECTOR(uint16_t, 8))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0x3801L), 0x3801L), 0x3801L, 65533UL, 0x3801L);
    uint32_t *l_926 = (void*)0;
    uint32_t *l_927 = &p_1469->g_447;
    int64_t l_928[4];
    int32_t ******l_929 = (void*)0;
    int32_t ******l_930[10] = {&l_918,&l_918,&l_918,&l_918,&l_918,&l_918,&l_918,&l_918,&l_918,&l_918};
    int i;
    for (i = 0; i < 4; i++)
        l_928[i] = 4L;
    l_928[1] = (l_906 <= ((((l_906 < (safe_mul_func_uint16_t_u_u((((l_909 != l_909) <= ((safe_unary_minus_func_int16_t_s(p_43)) || ((*p_1469->g_568) = l_906))) <= (safe_unary_minus_func_int64_t_s((((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x4CL, 7L)).yyxyyyxx)), ((VECTOR(int8_t, 2))(l_912.s53)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1469->g_913.s5446604662210622)))).sbd82)), 4L, 0x3CL)).s1 != (safe_sub_func_uint64_t_u_u((safe_add_func_int8_t_s_s((p_43 > ((*l_927) = (((l_918 != (((((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(sub_sat(((VECTOR(uint16_t, 8))(l_921.s62664641)), ((VECTOR(uint16_t, 2))(0xC04BL, 65535UL)).xyxyxxyx))).even)).zyzyzywwzwwzzyxw, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(0UL, FAKE_DIVERGE(p_1469->group_1_offset, get_group_id(1), 10), 0UL, 65535UL)))).zxywwxzyzwxxxzww))))).s9 > (p_1469->g_922 != (void*)0)) || p_42) , (void*)0)) && p_1469->g_93) , p_1469->g_98.s2))), p_39)), 18446744073709551606UL))) >= 0x7B3AF2D3L) <= GROUP_DIVERGE(2, 1))))), p_42))) || (-4L)) == p_40) , 0x3B868E09AFC13DC7L));
    (*p_1469->g_279) = ((-1L) < (GROUP_DIVERGE(2, 1) <= (&l_919 == (p_1469->g_931 = &l_919))));
    return p_42;
}


/* ------------------------------------------ */
/* 
 * reads : p_1469->g_177 p_1469->g_447 p_1469->g_144 p_1469->g_475 p_1469->g_163 p_1469->g_29 p_1469->g_75 p_1469->g_76 p_1469->g_488 p_1469->g_406 p_1469->g_93 p_1469->g_493 p_1469->g_421 p_1469->g_313 p_1469->g_27 p_1469->g_532 p_1469->g_533 p_1469->g_537 p_1469->g_541 p_1469->g_323 p_1469->g_489 p_1469->g_554 p_1469->g_555 p_1469->g_556 p_1469->g_557 p_1469->g_558 p_1469->g_568 p_1469->g_257 p_1469->g_175 p_1469->g_584 p_1469->g_437 p_1469->g_569 p_1469->g_605 p_1469->g_279 p_1469->g_278 p_1469->g_703 p_1469->g_752 p_1469->g_722 p_1469->g_98 p_1469->g_117 p_1469->g_830 p_1469->g_823 p_1469->g_417
 * writes: p_1469->g_177 p_1469->g_447 p_1469->g_480 p_1469->g_488 p_1469->g_163 p_1469->g_489 p_1469->g_313 p_1469->g_121 p_1469->g_117 p_1469->g_584 p_1469->g_93 p_1469->g_27 p_1469->g_76 p_1469->g_703 p_1469->g_98 p_1469->g_569 p_1469->g_823 p_1469->g_537 p_1469->g_417
 */
uint32_t  func_48(uint64_t  p_49, int64_t  p_50, int8_t  p_51, struct S0 * p_1469)
{ /* block id: 149 */
    uint32_t *l_438 = (void*)0;
    uint32_t *l_439 = (void*)0;
    uint32_t *l_440 = &p_1469->g_177;
    int32_t l_443 = 0x5E29E133L;
    int32_t l_444 = 0L;
    uint32_t *l_446 = &p_1469->g_447;
    VECTOR(uint16_t, 2) l_465 = (VECTOR(uint16_t, 2))(0x89B2L, 0UL);
    int32_t l_476[2][5][2] = {{{(-1L),0x751E6E57L},{(-1L),0x751E6E57L},{(-1L),0x751E6E57L},{(-1L),0x751E6E57L},{(-1L),0x751E6E57L}},{{(-1L),0x751E6E57L},{(-1L),0x751E6E57L},{(-1L),0x751E6E57L},{(-1L),0x751E6E57L},{(-1L),0x751E6E57L}}};
    int32_t l_486 = (-1L);
    uint32_t *l_494 = &p_1469->g_177;
    VECTOR(uint64_t, 4) l_502 = (VECTOR(uint64_t, 4))(0x233C4610211B9D00L, (VECTOR(uint64_t, 2))(0x233C4610211B9D00L, 0xBCEA7A1CA5D67B4BL), 0xBCEA7A1CA5D67B4BL);
    int8_t *l_507[6][5];
    int8_t **l_506 = &l_507[3][3];
    VECTOR(int32_t, 16) l_534 = (VECTOR(int32_t, 16))(0x256CE36EL, (VECTOR(int32_t, 4))(0x256CE36EL, (VECTOR(int32_t, 2))(0x256CE36EL, 6L), 6L), 6L, 0x256CE36EL, 6L, (VECTOR(int32_t, 2))(0x256CE36EL, 6L), (VECTOR(int32_t, 2))(0x256CE36EL, 6L), 0x256CE36EL, 6L, 0x256CE36EL, 6L);
    int16_t *l_566 = (void*)0;
    int32_t **l_567 = &p_1469->g_489;
    uint8_t l_590[9] = {0x18L,0x18L,0x18L,0x18L,0x18L,0x18L,0x18L,0x18L,0x18L};
    VECTOR(int16_t, 16) l_611 = (VECTOR(int16_t, 16))(0x344CL, (VECTOR(int16_t, 4))(0x344CL, (VECTOR(int16_t, 2))(0x344CL, 0x115FL), 0x115FL), 0x115FL, 0x344CL, 0x115FL, (VECTOR(int16_t, 2))(0x344CL, 0x115FL), (VECTOR(int16_t, 2))(0x344CL, 0x115FL), 0x344CL, 0x115FL, 0x344CL, 0x115FL);
    VECTOR(uint16_t, 16) l_637 = (VECTOR(uint16_t, 16))(0x5475L, (VECTOR(uint16_t, 4))(0x5475L, (VECTOR(uint16_t, 2))(0x5475L, 65535UL), 65535UL), 65535UL, 0x5475L, 65535UL, (VECTOR(uint16_t, 2))(0x5475L, 65535UL), (VECTOR(uint16_t, 2))(0x5475L, 65535UL), 0x5475L, 65535UL, 0x5475L, 65535UL);
    VECTOR(uint8_t, 4) l_716 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x8FL), 0x8FL);
    VECTOR(uint8_t, 16) l_725 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL, 1UL, 1UL, 1UL);
    VECTOR(uint8_t, 2) l_744 = (VECTOR(uint8_t, 2))(0x22L, 0x19L);
    VECTOR(int8_t, 8) l_778 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
    VECTOR(int64_t, 2) l_782 = (VECTOR(int64_t, 2))(6L, 0x4F4C7F70555E6BC0L);
    int64_t **l_791[4] = {&p_1469->g_174,&p_1469->g_174,&p_1469->g_174,&p_1469->g_174};
    int32_t ***l_805 = &p_1469->g_488;
    VECTOR(int16_t, 8) l_835 = (VECTOR(int16_t, 8))(0x619BL, (VECTOR(int16_t, 4))(0x619BL, (VECTOR(int16_t, 2))(0x619BL, 0x2888L), 0x2888L), 0x2888L, 0x619BL, 0x2888L);
    int64_t **l_845 = &p_1469->g_704;
    int32_t *l_855 = (void*)0;
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
            l_507[i][j] = &p_1469->g_93;
    }
    if (((--(*l_440)) < ((*l_446)--)))
    { /* block id: 152 */
        uint8_t l_450[4];
        VECTOR(uint16_t, 2) l_463 = (VECTOR(uint16_t, 2))(65535UL, 65535UL);
        VECTOR(uint16_t, 16) l_464 = (VECTOR(uint16_t, 16))(0xE999L, (VECTOR(uint16_t, 4))(0xE999L, (VECTOR(uint16_t, 2))(0xE999L, 0x6A7DL), 0x6A7DL), 0x6A7DL, 0xE999L, 0x6A7DL, (VECTOR(uint16_t, 2))(0xE999L, 0x6A7DL), (VECTOR(uint16_t, 2))(0xE999L, 0x6A7DL), 0xE999L, 0x6A7DL, 0xE999L, 0x6A7DL);
        VECTOR(uint16_t, 8) l_466 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0x7CA8L), 0x7CA8L), 0x7CA8L, 1UL, 0x7CA8L);
        int32_t *l_472 = &p_1469->g_163;
        int32_t **l_471 = &l_472;
        int32_t *l_474 = &l_444;
        int32_t **l_473 = &l_474;
        uint64_t *l_479 = (void*)0;
        uint64_t **l_478 = &l_479;
        uint64_t ***l_477[7] = {&l_478,&l_478,&l_478,&l_478,&l_478,&l_478,&l_478};
        int32_t *l_482 = (void*)0;
        int32_t *l_483 = (void*)0;
        int32_t *l_484 = (void*)0;
        int32_t *l_485 = &l_444;
        int32_t l_487 = (-1L);
        int32_t ***l_490 = (void*)0;
        int32_t l_499 = 0L;
        int i;
        for (i = 0; i < 4; i++)
            l_450[i] = 0x55L;
        l_487 ^= ((l_450[3] && ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(0x62005762L, ((safe_sub_func_uint8_t_u_u((((void*)0 != &p_1469->g_278) ^ (((*l_485) &= (((p_1469->g_480 = ((+((((0x7A46L <= ((safe_add_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((l_450[0] , ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 16))(min(((VECTOR(uint16_t, 8))(l_463.xyxyyyyx)).s6045211307626723, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_464.s8e0714df)).even)), 0UL, 0UL, 0xC0A0L, 0UL)).s7221577144637300))).s271c, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(l_465.yxyy)))), ((VECTOR(uint16_t, 4))(l_466.s6411))))).wyywwwyzwyzzwyzy, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(65535UL, 0x9D02L, (safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_49, (((*l_471) = &l_443) != ((*l_473) = &p_1469->g_163)))), 0x13DBL)), l_465.y, p_1469->g_144.s3, ((VECTOR(uint16_t, 2))(0xD33AL)), 0x4C1FL, 65535UL, ((VECTOR(uint16_t, 4))(1UL)), 0x3325L, 0UL, 0UL)).s7f)).xyyy)).wxyzzxxzxyzxzwzy))).sc, p_1469->g_475)), ((VECTOR(uint8_t, 2))(246UL)), 255UL)).xxywyzwx)))).s6), 0x6BL)), p_50)), (-1L))), l_476[1][3][0])) , p_50)) & 0UL) <= p_49) && (**l_473))) , (void*)0)) != (void*)0) , (**l_471))) | l_486)), p_1469->g_29.sb)) || 0x2FBA1694FD9A4FE0L), 0x414EF2F9L, ((VECTOR(int32_t, 2))(1L)), 0x1B014385L, 0x52CA9F39L, 0x5997242DL)), ((VECTOR(int32_t, 8))(0x02E470AFL)), ((VECTOR(int32_t, 8))(0x2872D6C6L))))).s02)))))).even) , (*p_1469->g_75));
        (*l_473) = (void*)0;
        (*l_472) &= ((&p_1469->g_437 == (p_1469->g_488 = p_1469->g_488)) ^ (((~(~((*p_1469->g_406) , (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(p_1469->g_493.yxxx)).x, (((void*)0 == l_494) , ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((l_476[0][1][1] |= p_49), 1)), l_499)) != ((((safe_lshift_func_uint8_t_u_s((p_51 , (~p_1469->g_421)), 7)) && 0UL) & p_1469->g_313.y) || l_486)))))))) == p_1469->g_27.se) || (*l_485)));
        atomic_xor(&p_1469->l_atomic_reduction[0], (((VECTOR(uint64_t, 4))(l_502.wwzx)).z ^ l_476[1][1][0]));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_1469->v_collective += p_1469->l_atomic_reduction[0];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    else
    { /* block id: 163 */
        int8_t *l_505 = &p_1469->g_417;
        int8_t **l_504 = &l_505;
        int8_t ***l_503 = &l_504;
        int64_t *l_508[4][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        uint64_t *l_509 = (void*)0;
        uint64_t *l_510 = (void*)0;
        uint64_t *l_511 = (void*)0;
        uint64_t *l_512 = (void*)0;
        uint64_t *l_513 = (void*)0;
        uint64_t *l_514 = (void*)0;
        uint64_t *l_515 = (void*)0;
        uint64_t *l_516[10][7][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
        int32_t l_517 = (-1L);
        int32_t l_518 = 0x094B4BF2L;
        VECTOR(int8_t, 8) l_529 = (VECTOR(int8_t, 8))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), (-1L)), (-1L)), (-1L), (-6L), (-1L));
        VECTOR(int16_t, 16) l_540 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
        int32_t *l_585 = (void*)0;
        int32_t *l_586 = &l_476[1][3][0];
        int32_t *l_587 = &l_443;
        int32_t *l_588 = (void*)0;
        int32_t *l_589[5][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,&p_1469->g_163},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1469->g_163},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1469->g_163},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1469->g_163},{(void*)0,(void*)0,(void*)0,(void*)0,&p_1469->g_163}};
        uint32_t l_593 = 0x9E99B898L;
        uint16_t *l_600 = &p_1469->g_117;
        VECTOR(uint16_t, 4) l_635 = (VECTOR(uint16_t, 4))(3UL, (VECTOR(uint16_t, 2))(3UL, 0xE105L), 0xE105L);
        VECTOR(uint16_t, 16) l_636 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x91B8L), 0x91B8L), 0x91B8L, 0UL, 0x91B8L, (VECTOR(uint16_t, 2))(0UL, 0x91B8L), (VECTOR(uint16_t, 2))(0UL, 0x91B8L), 0UL, 0x91B8L, 0UL, 0x91B8L);
        int16_t l_844 = 0L;
        int32_t l_849 = (-7L);
        int i, j, k;
        if ((l_518 &= ((l_476[1][3][0] = (((*l_503) = (void*)0) != l_506)) < (l_517 &= p_51))))
        { /* block id: 168 */
            int32_t l_530 = (-6L);
            VECTOR(int32_t, 8) l_531 = (VECTOR(int32_t, 8))(0x2CDAC53CL, (VECTOR(int32_t, 4))(0x2CDAC53CL, (VECTOR(int32_t, 2))(0x2CDAC53CL, 0x7BDBE7A0L), 0x7BDBE7A0L), 0x7BDBE7A0L, 0x2CDAC53CL, 0x7BDBE7A0L);
            int16_t *l_544 = (void*)0;
            int16_t *l_545 = (void*)0;
            int16_t *l_546 = (void*)0;
            int16_t *l_547 = (void*)0;
            int16_t *l_548 = (void*)0;
            int16_t *l_549[4][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            l_518 = p_49;
            (*p_1469->g_488) = &l_518;
            atomic_min(&p_1469->l_atomic_reduction[0], ((*p_1469->g_489) = (safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(p_1469->g_421, ((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_1469->g_144.s1, (GROUP_DIVERGE(0, 1) < ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(((((!p_49) != (*p_1469->g_406)) , 0x930285C02DEE4480L) == GROUP_DIVERGE(1, 1)), (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 2))(l_529.s64)).xxyyyxxxyyxyxyyy))).sf, l_530)), 0x07020169L, 0L)).yxwyywwz, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(l_531.s35014067)).hi, ((VECTOR(int32_t, 4))(p_1469->g_532.xyxx))))).xzxzzzwx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(p_1469->g_533.sdc0f22350376c1c0)))).odd))), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_534.s009cf3fbfc029d75)).lo)), (int32_t)(safe_mul_func_int8_t_s_s((p_50 < l_518), ((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 4))(p_1469->g_537.xyxy)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 4))((safe_sub_func_int16_t_s_s(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_540.s287e38bc)).hi)).hi, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(p_1469->g_541.s1673)).hi)), ((VECTOR(int16_t, 4))(0x38B3L, (l_534.sb = ((((safe_rshift_func_int8_t_s_u(((l_476[0][1][1] = (((l_540.se , 0xC043797CE3A9792BL) < p_50) , 0x94FDA8D4C7CE3A66L)) | p_50), GROUP_DIVERGE(2, 1))) == p_1469->g_323.s3) ^ p_50) == 0xADL)), (-1L), 0L)).hi))).hi, l_529.s4)), l_531.s6, 0x29L, (-1L))).hi, ((VECTOR(int8_t, 2))((-1L))), ((VECTOR(int8_t, 2))(0x1BL))))), ((VECTOR(int8_t, 4))(0x00L)), l_502.z, (*p_1469->g_406), 0x5FL, ((VECTOR(int8_t, 4))(1L)), p_50, 0x71L, (-5L))))).s6f4c, ((VECTOR(int8_t, 4))(0x46L))))).w)), (int32_t)l_530))))))).s12, (int32_t)2L, (int32_t)1L))).yyxyxxyy))).even, ((VECTOR(int32_t, 4))(0x51AB4A65L))))).wwywxxwx))).s2305607772114754, ((VECTOR(int32_t, 16))(1L))))).sf))), 252UL)) & p_49))), p_1469->g_163))) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1469->v_collective += p_1469->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            (*p_1469->g_488) = (*p_1469->g_488);
        }
        else
        { /* block id: 176 */
            int16_t *l_564 = (void*)0;
            int16_t *l_565 = (void*)0;
            uint16_t *l_578 = &p_1469->g_121;
            int32_t *l_579 = (void*)0;
            int32_t *l_580[6][3][1] = {{{&l_476[1][4][0]},{&l_476[1][4][0]},{&l_476[1][4][0]}},{{&l_476[1][4][0]},{&l_476[1][4][0]},{&l_476[1][4][0]}},{{&l_476[1][4][0]},{&l_476[1][4][0]},{&l_476[1][4][0]}},{{&l_476[1][4][0]},{&l_476[1][4][0]},{&l_476[1][4][0]}},{{&l_476[1][4][0]},{&l_476[1][4][0]},{&l_476[1][4][0]}},{{&l_476[1][4][0]},{&l_476[1][4][0]},{&l_476[1][4][0]}}};
            int64_t l_581[2][6] = {{4L,6L,(-1L),6L,4L,4L},{4L,6L,(-1L),6L,4L,4L}};
            uint16_t *l_582 = (void*)0;
            uint16_t *l_583 = &p_1469->g_117;
            int i, j, k;
            (*p_1469->g_437) = (safe_add_func_uint64_t_u_u((((safe_div_func_uint16_t_u_u((p_1469->g_584 |= ((*l_583) = (((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 16))(p_1469->g_554.yyyyxyxyxyxyxyyy)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_1469->g_555.yyyxyyxy)), ((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 2))((-4L), 1L)).yxxy, (int8_t)(*p_1469->g_406), (int8_t)((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x52L, 1L)).xyxxxyyxyxxxxxxy)).s18)).xxxyxxyyxyyxxxxx, ((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0L, 0x37L)).xyxx)).ywxzxxxyxzxxywxw, (int8_t)((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(p_1469->g_556.xxyxxxyxyyyyyxxx)).s9e57)).xywxxwxyywwzzxyy)).s8))), ((VECTOR(int8_t, 4))(p_1469->g_557.scec7)).zwyyywxyyzywwwzy))).s1))).hi, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_1469->g_558.s45)), ((VECTOR(int8_t, 2))(0x17L, 3L)), (-9L), 0x55L, (-3L), 1L)).s23, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(0x62L, 0L)), 0x35L, (safe_unary_minus_func_uint16_t_u((safe_sub_func_int16_t_s_s((p_1469->g_313.x = (safe_rshift_func_int16_t_s_s(p_49, 4))), (~(l_566 != (((void*)0 == l_567) , p_1469->g_568))))))), (((p_1469->g_177 = (safe_rshift_func_int16_t_s_s(0x1C44L, 7))) & (safe_mod_func_uint32_t_u_u((((l_581[1][1] = (safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s((((*l_578) = 65532UL) ^ (p_50 , l_529.s3)), p_1469->g_447)), p_50))) || (-1L)) == 1UL), p_50))) , (*p_1469->g_406)), p_49, ((VECTOR(int8_t, 8))(0x53L)), 0x3FL, 0x53L)).sb1))), 0x6DL, ((VECTOR(int8_t, 2))(0L)), (-1L), 0x10L, 5L)).s52))), 0x68L, (-8L))).ywywyxzz, ((VECTOR(int8_t, 8))(0x6FL)))))))))).s3, 0x18L, (-2L), ((VECTOR(int8_t, 8))((-1L))), 0x55L, 0x27L, 1L, 0L, 0x55L)))).odd))), p_1469->g_257, ((VECTOR(uint8_t, 2))(6UL)), p_49, 248UL, 0UL, 255UL, 0x71L)).scc98))), ((VECTOR(uint8_t, 4))(0UL))))).zzywwxxwxyxxzzwz))).s8 , p_1469->g_175.y))), p_1469->g_475)) && l_517) == FAKE_DIVERGE(p_1469->group_2_offset, get_group_id(2), 10)), 0x65486BA0ABD9DA40L));
        }
        ++l_590[8];
        if (((l_593 || (p_51 == (safe_mod_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(255UL, 5)), l_444)), ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 4))(0UL, ((p_50 , ((l_600 == (void*)0) == (safe_mul_func_int16_t_s_s(0L, p_50)))) != (-1L)), 4294967295UL, 0UL)).even, ((VECTOR(uint32_t, 2))(0x1B5F7846L))))).lo)))) , p_50))
        { /* block id: 186 */
            VECTOR(int64_t, 16) l_627 = (VECTOR(int64_t, 16))(0x0812D75FF8045EC8L, (VECTOR(int64_t, 4))(0x0812D75FF8045EC8L, (VECTOR(int64_t, 2))(0x0812D75FF8045EC8L, 4L), 4L), 4L, 0x0812D75FF8045EC8L, 4L, (VECTOR(int64_t, 2))(0x0812D75FF8045EC8L, 4L), (VECTOR(int64_t, 2))(0x0812D75FF8045EC8L, 4L), 0x0812D75FF8045EC8L, 4L, 0x0812D75FF8045EC8L, 4L);
            VECTOR(uint16_t, 4) l_634 = (VECTOR(uint16_t, 4))(0x19BEL, (VECTOR(uint16_t, 2))(0x19BEL, 65534UL), 65534UL);
            int16_t l_651 = 0x7A3EL;
            int8_t l_653 = 0x41L;
            int32_t l_655 = (-8L);
            int32_t l_659 = 0x3A8358A7L;
            int32_t l_660 = 1L;
            int32_t l_661 = 4L;
            int32_t l_662[2][8][8] = {{{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L},{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L},{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L},{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L},{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L},{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L},{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L},{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L}},{{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L},{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L},{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L},{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L},{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L},{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L},{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L},{0L,0x12D5D479L,1L,(-3L),0L,0L,(-3L),1L}}};
            uint16_t *l_682[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int64_t l_695 = 0x29A4A2D0645434E3L;
            VECTOR(uint16_t, 2) l_718 = (VECTOR(uint16_t, 2))(0x008EL, 65529UL);
            VECTOR(uint32_t, 16) l_775 = (VECTOR(uint32_t, 16))(0xE2946C63L, (VECTOR(uint32_t, 4))(0xE2946C63L, (VECTOR(uint32_t, 2))(0xE2946C63L, 4294967293UL), 4294967293UL), 4294967293UL, 0xE2946C63L, 4294967293UL, (VECTOR(uint32_t, 2))(0xE2946C63L, 4294967293UL), (VECTOR(uint32_t, 2))(0xE2946C63L, 4294967293UL), 0xE2946C63L, 4294967293UL, 0xE2946C63L, 4294967293UL);
            VECTOR(int16_t, 16) l_834 = (VECTOR(int16_t, 16))(0x5E85L, (VECTOR(int16_t, 4))(0x5E85L, (VECTOR(int16_t, 2))(0x5E85L, (-5L)), (-5L)), (-5L), 0x5E85L, (-5L), (VECTOR(int16_t, 2))(0x5E85L, (-5L)), (VECTOR(int16_t, 2))(0x5E85L, (-5L)), 0x5E85L, (-5L), 0x5E85L, (-5L));
            VECTOR(uint64_t, 2) l_846 = (VECTOR(uint64_t, 2))(0UL, 0x6F49165A4086CAF5L);
            int i, j, k;
            for (p_1469->g_93 = 26; (p_1469->g_93 < 1); p_1469->g_93--)
            { /* block id: 189 */
                int64_t l_654 = 0x186E473533391B8BL;
                VECTOR(int32_t, 8) l_656 = (VECTOR(int32_t, 8))(9L, (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x39F9CE75L), 0x39F9CE75L), 0x39F9CE75L, 9L, 0x39F9CE75L);
                VECTOR(uint64_t, 4) l_663 = (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x8C596373B1F2E293L), 0x8C596373B1F2E293L);
                uint8_t l_668 = 0xC9L;
                int64_t **l_706[9];
                VECTOR(uint16_t, 2) l_717 = (VECTOR(uint16_t, 2))(0x7061L, 65535UL);
                int32_t *l_721[6];
                int32_t ***l_815 = &p_1469->g_488;
                int32_t ****l_814 = &l_815;
                int i;
                for (i = 0; i < 9; i++)
                    l_706[i] = &l_508[2][2];
                for (i = 0; i < 6; i++)
                    l_721[i] = (void*)0;
                if (p_49)
                { /* block id: 190 */
                    VECTOR(uint16_t, 2) l_638 = (VECTOR(uint16_t, 2))(65535UL, 0x1B3FL);
                    int32_t l_657 = 0x2AA95F48L;
                    VECTOR(int32_t, 8) l_658 = (VECTOR(int32_t, 8))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), (-8L)), (-8L)), (-8L), (-9L), (-8L));
                    int i;
                    (*l_587) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_1469->g_605.zzxywwwx)).s3767772703775602)).s2;
                    for (l_518 = 22; (l_518 == 18); --l_518)
                    { /* block id: 194 */
                        uint16_t l_608 = 0x24C9L;
                        if (l_608)
                            break;
                    }
                    for (l_518 = 0; (l_518 >= 24); ++l_518)
                    { /* block id: 199 */
                        uint32_t l_626 = 0UL;
                        int32_t l_652 = (-1L);
                        l_655 &= (((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_611.scb)).xyyyyyxyyyxyxyxy)))).sf && (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(p_1469->g_475, (((!(safe_mul_func_uint16_t_u_u(p_50, p_51))) , (safe_mul_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((safe_div_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(0x26A9L, ((((l_626 && ((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 2))(8L, 0L)).yyyy, ((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 2))(clz(((VECTOR(int64_t, 2))(l_627.s02))))).xyxxyxxy))).hi))).y) ^ (l_652 = (safe_sub_func_int64_t_s_s((((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 4))(((p_49 > (safe_add_func_uint16_t_u_u(((*l_600) ^= ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))((safe_sub_func_int16_t_s_s((*p_1469->g_568), ((VECTOR(uint16_t, 4))(mad_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(mul_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_634.ww)).yyyx)), ((VECTOR(uint16_t, 16))(l_635.zxwwwyxzzwwyzxxy)).secea))), ((VECTOR(uint16_t, 2))(l_636.s30)), 0xAB37L, 0UL)).lo)).odd, ((VECTOR(uint16_t, 2))(65531UL, 65529UL))))), 3UL, 0x6897L)), ((VECTOR(uint16_t, 8))(0x42FBL, ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 8))(l_637.sb5b4717b)).s75, ((VECTOR(uint16_t, 4))(add_sat(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 4))(l_638.yxxx)), ((VECTOR(uint16_t, 4))((safe_add_func_int64_t_s_s((safe_div_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((FAKE_DIVERGE(p_1469->local_1_offset, get_local_id(1), 10) || l_626), (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x4AL, 0x22L)).hi, p_49)))), p_51)) ^ p_1469->g_98.se) ^ l_638.y), 7)) <= 0x83L) || l_627.se) <= 0x7FAA6EBBL), (*p_1469->g_406))), p_1469->g_584)), GROUP_DIVERGE(1, 1), 65535UL, 0x333FL))))), ((VECTOR(uint16_t, 4))(7UL))))).odd))), 0UL, FAKE_DIVERGE(p_1469->global_2_offset, get_global_id(2), 10), p_51, 0x3AE5L, 9UL)).hi, ((VECTOR(uint16_t, 4))(5UL))))).y)), 0x630CL, 8UL, 0UL)).zzwyzwzw)).lo)).z), 1L))) , GROUP_DIVERGE(2, 1)), 0x7166L, 0UL, 65526UL)).xzzzwwxzyyzxwyzx, ((VECTOR(uint16_t, 16))(0x7BE4L)), ((VECTOR(uint16_t, 16))(0xA84EL)))))))))).s2 ^ 0x84CAL), l_651)))) != p_49) && 65535UL))) , p_50), l_653)), (*p_1469->g_568))) && 0xCC170946L), p_51))) & p_1469->g_475))), p_1469->g_605.y))) > l_654) >= p_1469->g_144.s5);
                    }
                    l_663.y--;
                }
                else
                { /* block id: 205 */
                    if ((atomic_inc(&p_1469->g_atomic_input[75 * get_linear_group_id() + 67]) == 7))
                    { /* block id: 207 */
                        int32_t l_667 = 0L;
                        int32_t *l_666 = &l_667;
                        l_666 = (void*)0;
                        unsigned int result = 0;
                        result += l_667;
                        atomic_add(&p_1469->g_special_values[75 * get_linear_group_id() + 67], result);
                    }
                    else
                    { /* block id: 209 */
                        (1 + 1);
                    }
                }
                if ((*p_1469->g_279))
                { /* block id: 213 */
                    uint64_t l_689 = 18446744073709551608UL;
                    int32_t l_694 = 0L;
                    int32_t l_696 = (-1L);
                    int32_t l_699 = 1L;
                    VECTOR(uint8_t, 16) l_745 = (VECTOR(uint8_t, 16))(0xBBL, (VECTOR(uint8_t, 4))(0xBBL, (VECTOR(uint8_t, 2))(0xBBL, 7UL), 7UL), 7UL, 0xBBL, 7UL, (VECTOR(uint8_t, 2))(0xBBL, 7UL), (VECTOR(uint8_t, 2))(0xBBL, 7UL), 0xBBL, 7UL, 0xBBL, 7UL);
                    int8_t ***l_755 = &l_506;
                    VECTOR(uint32_t, 2) l_789 = (VECTOR(uint32_t, 2))(4UL, 0x745D1222L);
                    int64_t ***l_792 = (void*)0;
                    int64_t ***l_793 = (void*)0;
                    int64_t ***l_794 = &l_791[3];
                    int i;
                    (*l_587) = l_668;
                    for (l_660 = 0; (l_660 >= 8); l_660++)
                    { /* block id: 217 */
                        int32_t l_679 = 0x712FA962L;
                        uint16_t **l_683 = &l_682[0];
                        uint8_t *l_686 = &l_668;
                        (*p_1469->g_75) = (+(18446744073709551615UL >= ((p_50 != p_49) | (safe_rshift_func_int16_t_s_u(p_51, ((safe_lshift_func_uint8_t_u_u((((safe_div_func_int64_t_s_s((l_679 = (safe_div_func_uint32_t_u_u(0xD7501CE8L, p_1469->g_257))), ((safe_div_func_uint64_t_u_u(((p_1469->g_27.s1 = (((*l_683) = l_682[0]) == &p_1469->g_421)) , ((safe_mod_func_int8_t_s_s((((*l_686)--) != ((void*)0 == l_566)), 1L)) , p_49)), FAKE_DIVERGE(p_1469->group_2_offset, get_group_id(2), 10))) & 0xACL))) , p_1469->g_278) , FAKE_DIVERGE(p_1469->group_0_offset, get_group_id(0), 10)), p_1469->g_278)) , 65535UL))))));
                        l_689++;
                    }
                    for (l_653 = 0; (l_653 != (-26)); l_653 = safe_sub_func_uint32_t_u_u(l_653, 1))
                    { /* block id: 227 */
                        int16_t l_697 = 0L;
                        int32_t l_698 = 0x0ECB9679L;
                        uint64_t l_700 = 0x5F39CA0C61FE2EA1L;
                        int64_t ***l_705[8] = {&p_1469->g_703[5],&p_1469->g_703[5],&p_1469->g_703[5],&p_1469->g_703[5],&p_1469->g_703[5],&p_1469->g_703[5],&p_1469->g_703[5],&p_1469->g_703[5]};
                        int32_t *l_715[6][7][3] = {{{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0}},{{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0}},{{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0}},{{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0}},{{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0}},{{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0},{&p_1469->g_278,&p_1469->g_278,(void*)0}}};
                        VECTOR(int8_t, 16) l_770 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x31L), 0x31L), 0x31L, 1L, 0x31L, (VECTOR(int8_t, 2))(1L, 0x31L), (VECTOR(int8_t, 2))(1L, 0x31L), 1L, 0x31L, 1L, 0x31L);
                        uint64_t l_790 = 0UL;
                        int i, j, k;
                        l_700++;
                        p_1469->g_703[4] = (l_706[7] = p_1469->g_703[5]);
                        (*l_587) &= ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(p_1469->g_711.xzxzyzxw)).s5, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(p_1469->g_712.s00373246)).s15)))).hi)), (safe_mod_func_uint16_t_u_u(((l_716.z = (-1L)) , ((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 2))(l_717.xx)).yyyxyyyxyyyxxxyy, ((VECTOR(uint16_t, 16))(l_718.yyxyyxxyxxxyxyxy))))).s7), (safe_rshift_func_uint16_t_u_u(((0x75L != ((((*p_1469->g_488) = l_721[4]) == (void*)0) == ((VECTOR(uint32_t, 8))(p_1469->g_722.yxyyxxyx)).s2)) == ((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(l_725.se0)).odd, (safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((((safe_mod_func_int32_t_s_s(((l_655 ^= GROUP_DIVERGE(1, 1)) <= (safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 4))(l_744.xxyy)).yyzwzyxzwxyxzzxz, ((VECTOR(uint8_t, 2))(0x23L, 0UL)).yyyxxyxyxyxxyyyy))).s0, 1UL)) == 247UL), FAKE_DIVERGE(p_1469->global_0_offset, get_global_id(0), 10))), ((((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_745.s899cf0e18f7c115e)).sdc)).xyxx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(254UL, 255UL, 8UL, 1UL)).zxzyxzyxxwzwyxxx)).s6f0c))))).lo, (uint8_t)((((safe_add_func_uint32_t_u_u(p_1469->g_29.s3, ((*l_586) ^= p_1469->g_445.w))) & (-1L)) != p_49) >= 65535UL), (uint8_t)l_697))).odd < 0x89L) >= p_1469->g_584))), 0x07CA375D68F72159L))), p_49)) , 0x5AL) == p_1469->g_537.x) , 0x39845ABADABD413AL) | 0xF90C40A65E290B24L), l_696)), 0x46L)), 0x47B6L)) , l_697), p_1469->g_605.w)))) , 0x7AB9A806L)), 6)))))) >= l_718.y);
                        p_1469->g_98.sc |= (safe_add_func_uint64_t_u_u((((((l_698 = (safe_mul_func_int16_t_s_s(((p_1469->g_752 != l_755) || (safe_mod_func_int64_t_s_s(((((*p_1469->g_568) > (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((*p_1469->g_279), (safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mul_hi(((VECTOR(int8_t, 8))(0L, ((VECTOR(int8_t, 4))(l_770.s4327)), (safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((((*l_587) | (l_699 = ((*l_586) = (((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(1L, 0x43BF055E473C05B1L)))), ((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 2))(6L, 0L)), ((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 16))(l_775.sf059c0111b93bf88)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(0x3FCEA82CL, (safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 2))(l_778.s27)).xyxyxyxxyyyxxxyy))).s8, p_51)), 3UL, 0xC0F3F580L)).wxwxzwwwyxwxwwzz)), ((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 8))(p_1469->g_779.s14573343)), ((VECTOR(uint32_t, 8))((safe_lshift_func_int16_t_s_s((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_782.yxxxyxyy)).s41)).hi & ((safe_mul_func_uint8_t_u_u((((*l_494) = (((((p_1469->g_278 == (p_50 >= (safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(5UL, (*p_1469->g_568))), GROUP_DIVERGE(2, 1))))) , 254UL) & p_49) & 0x4353FB90L) | p_50)) | p_51), p_1469->g_537.y)) , p_50)), (*p_1469->g_568))), p_1469->g_313.y, ((VECTOR(uint32_t, 2))(0xD1BA6204L)), p_1469->g_722.y, ((VECTOR(uint32_t, 2))(0xC8D3E066L)), 0xA03C465FL))))).s6260427331172420))).s6b))), 1L, ((VECTOR(int64_t, 2))(0L)), 0x1958B55643623E44L)).even)).yyzzxwzzzxyyzxyw, ((VECTOR(int64_t, 16))(5L)), ((VECTOR(int64_t, 16))((-6L)))))).s1 | p_50)))) < p_49) >= 0x3CL), l_698)), GROUP_DIVERGE(0, 1))), 0x7FL, 0L)).odd, ((VECTOR(int8_t, 4))(0L))))).yxwzywwx)).s1, FAKE_DIVERGE(p_1469->global_0_offset, get_global_id(0), 10))) ^ p_1469->g_27.s9) || 5L), (*p_1469->g_568))), l_789.y)))), p_1469->g_313.x)), 4294967295UL))) ^ 65535UL) , 5L), l_790))), (-1L)))) | p_50) , p_49) , p_1469->g_722.y) | p_50), 0xFFEE4598235C5C76L));
                    }
                    (*l_794) = l_791[3];
                }
                else
                { /* block id: 243 */
                    int32_t *l_795 = &l_518;
                    VECTOR(int32_t, 16) l_796 = (VECTOR(int32_t, 16))(0x41CBE8B0L, (VECTOR(int32_t, 4))(0x41CBE8B0L, (VECTOR(int32_t, 2))(0x41CBE8B0L, 0L), 0L), 0L, 0x41CBE8B0L, 0L, (VECTOR(int32_t, 2))(0x41CBE8B0L, 0L), (VECTOR(int32_t, 2))(0x41CBE8B0L, 0L), 0x41CBE8B0L, 0L, 0x41CBE8B0L, 0L);
                    int32_t ***l_804 = &l_567;
                    int32_t ****l_803[1];
                    int32_t *****l_816 = &l_803[0];
                    int16_t *l_817 = (void*)0;
                    int16_t *l_818[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    uint32_t l_839[8][1][4] = {{{0xEEE4535CL,0xBC3CB2F1L,4294967290UL,0xBC3CB2F1L}},{{0xEEE4535CL,0xBC3CB2F1L,4294967290UL,0xBC3CB2F1L}},{{0xEEE4535CL,0xBC3CB2F1L,4294967290UL,0xBC3CB2F1L}},{{0xEEE4535CL,0xBC3CB2F1L,4294967290UL,0xBC3CB2F1L}},{{0xEEE4535CL,0xBC3CB2F1L,4294967290UL,0xBC3CB2F1L}},{{0xEEE4535CL,0xBC3CB2F1L,4294967290UL,0xBC3CB2F1L}},{{0xEEE4535CL,0xBC3CB2F1L,4294967290UL,0xBC3CB2F1L}},{{0xEEE4535CL,0xBC3CB2F1L,4294967290UL,0xBC3CB2F1L}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_803[i] = &l_804;
                    (*p_1469->g_488) = l_795;
                    l_655 = ((VECTOR(int32_t, 16))(l_796.s74aac6e2d49c2f07)).se;
                    if (((safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(((safe_div_func_int64_t_s_s((((*p_1469->g_568) = ((l_805 = (void*)0) != ((safe_mul_func_int16_t_s_s(((l_587 != (void*)0) , (safe_add_func_int64_t_s_s(((VECTOR(int64_t, 2))((-1L), 0x157A2701D2FCA568L)).hi, (FAKE_DIVERGE(p_1469->local_1_offset, get_local_id(1), 10) && (safe_lshift_func_uint8_t_u_u(((void*)0 != l_567), 6)))))), (*p_1469->g_568))) , &l_567))) <= (((safe_lshift_func_int16_t_s_s((l_662[1][4][4] ^= (((*l_816) = l_814) == (void*)0)), p_1469->g_421)) == p_49) & (-10L))), 0x7FC1D49B5C7CFC87L)) || 1L), 0x27483BC9L)) && p_49), (*p_1469->g_406))) , (*****l_816)))
                    { /* block id: 250 */
                        int32_t *l_819[10][7][3] = {{{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]}},{{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]}},{{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]}},{{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]}},{{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]}},{{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]}},{{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]}},{{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]}},{{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]}},{{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]},{&p_1469->g_163,&p_1469->g_163,&l_476[1][3][0]}}};
                        int i, j, k;
                        (*l_587) |= p_49;
                        if (p_49)
                            continue;
                        (****l_816) = l_819[8][2][0];
                        if (l_627.s5)
                            continue;
                    }
                    else
                    { /* block id: 255 */
                        uint16_t **l_822 = &l_600;
                        int32_t l_838[10] = {0x705BEA7DL,0x705BEA7DL,0x705BEA7DL,0x705BEA7DL,0x705BEA7DL,0x705BEA7DL,0x705BEA7DL,0x705BEA7DL,0x705BEA7DL,0x705BEA7DL};
                        int i;
                        (*l_587) &= (safe_mod_func_uint16_t_u_u(((*l_600) |= p_50), 65533UL));
                        p_1469->g_823 = l_822;
                        l_838[0] = ((safe_lshift_func_uint16_t_u_s(l_660, (safe_lshift_func_uint8_t_u_s(0xE3L, ((*p_1469->g_568) || (((VECTOR(uint16_t, 4))(p_1469->g_830.s5554)).y && ((*p_1469->g_568) ^= (((**l_804) = (**l_815)) == &l_661)))))))) != ((p_51 && (safe_mul_func_int16_t_s_s((((p_1469->g_537.y = p_1469->g_98.sd) , 3UL) && (l_655 ^= (safe_unary_minus_func_int16_t_s(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_834.sa9a3)))).wwzzwyyzzzxwyzyw, ((VECTOR(int16_t, 16))(l_835.s7350514430725422))))).sd)))), ((safe_mul_func_uint16_t_u_u((**p_1469->g_823), p_50)) == 7L)))) <= (**p_1469->g_823)));
                        ++l_839[1][0][0];
                    }
                    (*l_586) = ((*l_587) &= p_51);
                }
            }
            (*l_587) &= p_51;
            (*l_586) = (((safe_mul_func_int16_t_s_s(p_49, ((FAKE_DIVERGE(p_1469->group_0_offset, get_group_id(0), 10) , (void*)0) != l_515))) | ((l_844 , (l_845 == &p_1469->g_704)) == ((((VECTOR(uint64_t, 16))(mad_sat(((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(0x397D7276E324486BL, 0xB35194DAA4259A17L)).yxyxyyxy)).s00))).xxyx, ((VECTOR(uint64_t, 16))(0xA9E430EFA31B6DADL, ((*p_1469->g_406) || ((*l_505) ^= (*p_1469->g_406))), ((VECTOR(uint64_t, 4))(l_846.xyyx)), (+(safe_lshift_func_uint16_t_u_u(((l_849 = p_49) ^ p_51), p_49))), ((VECTOR(uint64_t, 4))(18446744073709551611UL)), p_51, 1UL, 0x1349CB5660C1EFD8L, 0x98538FEF13E89BA4L, 0UL)).sed41, ((VECTOR(uint64_t, 4))(0xB23F91D8E65F4FF9L))))).yxxxyxzwwzxywxyz, ((VECTOR(uint64_t, 16))(0UL)), ((VECTOR(uint64_t, 16))(0x59B8A43AD4F05D68L))))).se < (*l_586)) , p_1469->g_257))) | 0xBAB4F1374EEB3DFCL);
            for (l_444 = 0; (l_444 < (-5)); l_444 = safe_sub_func_int8_t_s_s(l_444, 1))
            { /* block id: 276 */
                int8_t l_852 = 1L;
                (*l_586) |= (l_852 = ((*l_587) = 0x2C925D0AL));
            }
        }
        else
        { /* block id: 281 */
            int32_t *l_853[4] = {&l_443,&l_443,&l_443,&l_443};
            int32_t **l_854[2][9] = {{&l_589[0][3],&l_587,&l_589[0][3],&l_853[3],&l_587,&l_853[3],&l_589[0][3],&l_587,&l_589[0][3]},{&l_589[0][3],&l_587,&l_589[0][3],&l_853[3],&l_587,&l_853[3],&l_589[0][3],&l_587,&l_589[0][3]}};
            int i, j;
            (*l_567) = (l_585 = (*p_1469->g_488));
            (*l_587) = ((l_855 = ((*p_1469->g_488) = l_853[3])) == &l_849);
            if ((atomic_inc(&p_1469->g_atomic_input[75 * get_linear_group_id() + 55]) == 8))
            { /* block id: 288 */
                int32_t l_856 = (-1L);
                uint8_t l_857 = 6UL;
                uint16_t l_905 = 65528UL;
                if ((l_857 |= l_856))
                { /* block id: 290 */
                    int32_t l_858 = 0x5804A333L;
                    int16_t l_859 = 0x2F17L;
                    int32_t l_860 = 0x02D5329FL;
                    int8_t l_861 = (-3L);
                    int64_t l_862[8] = {(-5L),(-1L),(-5L),(-5L),(-1L),(-5L),(-5L),(-1L)};
                    int32_t l_863 = 0x332DD9D5L;
                    uint8_t l_864 = 0x9AL;
                    int i;
                    l_864--;
                    for (l_863 = (-27); (l_863 != (-22)); l_863 = safe_add_func_int64_t_s_s(l_863, 7))
                    { /* block id: 294 */
                        int32_t l_869 = 0x2AF131DDL;
                        int8_t l_870 = (-9L);
                        uint8_t l_871 = 0x69L;
                        uint32_t l_874[4][3] = {{8UL,8UL,8UL},{8UL,8UL,8UL},{8UL,8UL,8UL},{8UL,8UL,8UL}};
                        int i, j;
                        l_858 = 0x46D2D23DL;
                        l_870 |= l_869;
                        ++l_871;
                        l_858 |= l_874[2][1];
                    }
                    for (l_861 = 0; (l_861 > (-17)); l_861--)
                    { /* block id: 302 */
                        int8_t l_877 = 1L;
                        uint64_t l_878[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_878[i] = 18446744073709551615UL;
                        ++l_878[4];
                    }
                }
                else
                { /* block id: 305 */
                    int16_t l_881 = 0x0CA3L;
                    uint8_t l_882 = 7UL;
                    uint8_t l_883 = 253UL;
                    uint64_t l_884 = 18446744073709551615UL;
                    int32_t l_885 = 1L;
                    l_882 = l_881;
                    if (((l_883 , l_884) , (l_885 , 0x59A58E06L)))
                    { /* block id: 307 */
                        int32_t l_887 = (-2L);
                        int32_t *l_886[10][9][2] = {{{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887}},{{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887}},{{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887}},{{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887}},{{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887}},{{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887}},{{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887}},{{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887}},{{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887}},{{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887},{&l_887,&l_887}}};
                        int32_t *l_888 = &l_887;
                        int32_t *l_889 = (void*)0;
                        int8_t l_890 = 0x35L;
                        int32_t *l_891 = (void*)0;
                        int32_t *l_892[5][6];
                        int32_t *l_893 = &l_887;
                        uint8_t l_894[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                        uint32_t l_895 = 2UL;
                        VECTOR(uint32_t, 8) l_896 = (VECTOR(uint32_t, 8))(0xB959FEBFL, (VECTOR(uint32_t, 4))(0xB959FEBFL, (VECTOR(uint32_t, 2))(0xB959FEBFL, 4294967286UL), 4294967286UL), 4294967286UL, 0xB959FEBFL, 4294967286UL);
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 6; j++)
                                l_892[i][j] = &l_887;
                        }
                        l_889 = (l_888 = l_886[0][0][0]);
                        l_893 = (l_892[3][0] = (l_890 , l_891));
                        l_895 ^= l_894[5];
                        l_896.s6 = 0x1BA6D639L;
                    }
                    else
                    { /* block id: 314 */
                        int32_t l_898 = 0L;
                        int32_t *l_897 = &l_898;
                        int32_t *l_899 = &l_898;
                        VECTOR(int32_t, 16) l_900 = (VECTOR(int32_t, 16))(0x2B6C093DL, (VECTOR(int32_t, 4))(0x2B6C093DL, (VECTOR(int32_t, 2))(0x2B6C093DL, 5L), 5L), 5L, 0x2B6C093DL, 5L, (VECTOR(int32_t, 2))(0x2B6C093DL, 5L), (VECTOR(int32_t, 2))(0x2B6C093DL, 5L), 0x2B6C093DL, 5L, 0x2B6C093DL, 5L);
                        int32_t l_901 = 0x45B3C78FL;
                        uint32_t l_902 = 0xDB7B7CD5L;
                        uint64_t l_903 = 0x3C01CAD269A5C273L;
                        int8_t l_904[6][8] = {{(-1L),0L,0x1AL,0L,(-1L),(-1L),0L,0x1AL},{(-1L),0L,0x1AL,0L,(-1L),(-1L),0L,0x1AL},{(-1L),0L,0x1AL,0L,(-1L),(-1L),0L,0x1AL},{(-1L),0L,0x1AL,0L,(-1L),(-1L),0L,0x1AL},{(-1L),0L,0x1AL,0L,(-1L),(-1L),0L,0x1AL},{(-1L),0L,0x1AL,0L,(-1L),(-1L),0L,0x1AL}};
                        int i, j;
                        l_899 = (l_897 = l_897);
                        l_902 |= (l_901 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_900.sad94a0b6)).even)).xzwzwyzz)).s7);
                        l_904[4][7] |= l_903;
                    }
                }
                l_905 &= 8L;
                unsigned int result = 0;
                result += l_856;
                result += l_857;
                result += l_905;
                atomic_add(&p_1469->g_special_values[75 * get_linear_group_id() + 55], result);
            }
            else
            { /* block id: 323 */
                (1 + 1);
            }
        }
        (*l_587) = (GROUP_DIVERGE(0, 1) < (&l_504 == &l_506));
    }
    return p_49;
}


/* ------------------------------------------ */
/* 
 * reads : p_1469->g_421 p_1469->g_117 p_1469->g_406 p_1469->g_93 p_1469->g_313 p_1469->g_437
 * writes: p_1469->g_121 p_1469->g_421 p_1469->g_117 p_1469->g_163
 */
int8_t  func_52(uint32_t  p_53, int64_t  p_54, int32_t  p_55, uint16_t  p_56, struct S0 * p_1469)
{ /* block id: 143 */
    int32_t *l_424 = (void*)0;
    VECTOR(uint16_t, 16) l_425 = (VECTOR(uint16_t, 16))(0x45A6L, (VECTOR(uint16_t, 4))(0x45A6L, (VECTOR(uint16_t, 2))(0x45A6L, 1UL), 1UL), 1UL, 0x45A6L, 1UL, (VECTOR(uint16_t, 2))(0x45A6L, 1UL), (VECTOR(uint16_t, 2))(0x45A6L, 1UL), 0x45A6L, 1UL, 0x45A6L, 1UL);
    uint16_t *l_426 = &p_1469->g_121;
    uint64_t l_431 = 0x8682CF4E9E4AA952L;
    uint16_t *l_432[4] = {&p_1469->g_117,&p_1469->g_117,&p_1469->g_117,&p_1469->g_117};
    VECTOR(uint64_t, 4) l_435 = (VECTOR(uint64_t, 4))(0x2121FF8510DB3CA8L, (VECTOR(uint64_t, 2))(0x2121FF8510DB3CA8L, 0xE9E254C37D6EB450L), 0xE9E254C37D6EB450L);
    int i;
    (*p_1469->g_437) = (((safe_lshift_func_uint8_t_u_u((((void*)0 != l_424) < (-2L)), ((~(((0x5FL && (((*l_426) = ((VECTOR(uint16_t, 8))(l_425.s0fd68956)).s6) ^ (p_1469->g_117 &= (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((p_1469->g_421 ^= l_431), 1)), (~0x1BCEC03AL)))))) || ((safe_div_func_int8_t_s_s((*p_1469->g_406), p_54)) >= ((VECTOR(uint64_t, 2))(l_435.zx)).even)) , (p_56 & GROUP_DIVERGE(1, 1)))) >= 0xF4L))) , (-7L)) && p_1469->g_313.x);
    return (*p_1469->g_406);
}


/* ------------------------------------------ */
/* 
 * reads : p_1469->g_247 p_1469->g_257 p_1469->g_27 p_1469->g_278 p_1469->g_163 p_1469->g_29 p_1469->g_279 p_1469->g_177 p_1469->g_121 p_1469->g_144 p_1469->g_311 p_1469->g_406 p_1469->g_comm_values p_1469->g_98 p_1469->g_417
 * writes: p_1469->g_75 p_1469->g_257 p_1469->g_278 p_1469->g_177 p_1469->g_163 p_1469->l_comm_values p_1469->g_313 p_1469->g_93 p_1469->g_421
 */
int16_t  func_59(int32_t  p_60, uint32_t  p_61, uint32_t  p_62, uint64_t  p_63, struct S0 * p_1469)
{ /* block id: 82 */
    VECTOR(int32_t, 4) l_246 = (VECTOR(int32_t, 4))(0x609CC275L, (VECTOR(int32_t, 2))(0x609CC275L, 0L), 0L);
    int32_t l_272 = 5L;
    uint8_t l_286 = 1UL;
    VECTOR(int32_t, 8) l_348 = (VECTOR(int32_t, 8))(0x139D9ACDL, (VECTOR(int32_t, 4))(0x139D9ACDL, (VECTOR(int32_t, 2))(0x139D9ACDL, 0x561A88BAL), 0x561A88BAL), 0x561A88BAL, 0x139D9ACDL, 0x561A88BAL);
    uint16_t *l_366[7] = {&p_1469->g_121,&p_1469->g_121,&p_1469->g_121,&p_1469->g_121,&p_1469->g_121,&p_1469->g_121,&p_1469->g_121};
    uint16_t l_391 = 0xD21FL;
    int8_t *l_402[4][7][1];
    int8_t **l_403 = (void*)0;
    int8_t **l_404 = (void*)0;
    int8_t **l_405 = &l_402[0][6][0];
    int32_t **l_407 = (void*)0;
    int32_t *l_409[4][9][1] = {{{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163}},{{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163}},{{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163}},{{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163},{&p_1469->g_163}}};
    int32_t **l_408 = &l_409[2][3][0];
    int32_t *l_410 = &p_1469->g_163;
    int32_t **l_411 = &l_410;
    uint64_t *l_416 = (void*)0;
    uint64_t **l_415[10][5] = {{&l_416,&l_416,&l_416,&l_416,&l_416},{&l_416,&l_416,&l_416,&l_416,&l_416},{&l_416,&l_416,&l_416,&l_416,&l_416},{&l_416,&l_416,&l_416,&l_416,&l_416},{&l_416,&l_416,&l_416,&l_416,&l_416},{&l_416,&l_416,&l_416,&l_416,&l_416},{&l_416,&l_416,&l_416,&l_416,&l_416},{&l_416,&l_416,&l_416,&l_416,&l_416},{&l_416,&l_416,&l_416,&l_416,&l_416},{&l_416,&l_416,&l_416,&l_416,&l_416}};
    uint64_t ***l_414 = &l_415[6][3];
    int16_t *l_418 = (void*)0;
    int16_t *l_419 = (void*)0;
    int16_t *l_420 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
                l_402[i][j][k] = &p_1469->g_93;
        }
    }
    if (((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(l_246.xwxxxxyw)).s07, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(p_1469->g_247.zyxzzxwzzwwwxyzy)))).s0a))).hi)
    { /* block id: 83 */
        volatile int32_t **l_248 = (void*)0;
        int32_t *l_250 = &p_1469->g_163;
        int32_t *l_251 = &p_1469->g_163;
        int32_t l_252[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        int32_t *l_253 = &l_252[3];
        int32_t *l_254 = &l_252[1];
        int32_t *l_255 = &p_1469->g_163;
        int32_t *l_256[5][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        p_1469->g_75 = &p_1469->g_76;
        ++p_1469->g_257;
    }
    else
    { /* block id: 86 */
        uint32_t *l_268 = &p_1469->g_177;
        uint64_t *l_271[5][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        int32_t l_275 = 0x76D7F5B2L;
        uint32_t l_276 = 0xA1822A15L;
        int32_t *l_277 = &p_1469->g_278;
        int32_t *l_281[5][10] = {{&p_1469->g_163,&p_1469->g_163,(void*)0,(void*)0,(void*)0,&p_1469->g_163,&p_1469->g_163,(void*)0,&l_275,&l_272},{&p_1469->g_163,&p_1469->g_163,(void*)0,(void*)0,(void*)0,&p_1469->g_163,&p_1469->g_163,(void*)0,&l_275,&l_272},{&p_1469->g_163,&p_1469->g_163,(void*)0,(void*)0,(void*)0,&p_1469->g_163,&p_1469->g_163,(void*)0,&l_275,&l_272},{&p_1469->g_163,&p_1469->g_163,(void*)0,(void*)0,(void*)0,&p_1469->g_163,&p_1469->g_163,(void*)0,&l_275,&l_272},{&p_1469->g_163,&p_1469->g_163,(void*)0,(void*)0,(void*)0,&p_1469->g_163,&p_1469->g_163,(void*)0,&l_275,&l_272}};
        int32_t **l_280 = &l_281[1][1];
        VECTOR(int16_t, 4) l_309 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L);
        VECTOR(int16_t, 8) l_314 = (VECTOR(int16_t, 8))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0L), 0L), 0L, 7L, 0L);
        VECTOR(int16_t, 16) l_315 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 2L), 2L), 2L, 1L, 2L, (VECTOR(int16_t, 2))(1L, 2L), (VECTOR(int16_t, 2))(1L, 2L), 1L, 2L, 1L, 2L);
        VECTOR(int16_t, 4) l_316 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 7L), 7L);
        uint16_t l_319 = 0x0724L;
        VECTOR(int16_t, 4) l_332 = (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 8L), 8L);
        VECTOR(int16_t, 16) l_333 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x7C2DL), 0x7C2DL), 0x7C2DL, 1L, 0x7C2DL, (VECTOR(int16_t, 2))(1L, 0x7C2DL), (VECTOR(int16_t, 2))(1L, 0x7C2DL), 1L, 0x7C2DL, 1L, 0x7C2DL);
        VECTOR(int32_t, 4) l_349 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x62E5400CL), 0x62E5400CL);
        int i, j;
        (*p_1469->g_279) = (((((*l_268) = (253UL | (safe_div_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((*l_277) &= (+(safe_mod_func_int8_t_s_s(p_62, ((p_61 == ((l_268 != (void*)0) & l_246.w)) ^ ((l_272 = 0x58C7D61086BC35C1L) ^ (((0x036181A78855DD7CL && ((FAKE_DIVERGE(p_1469->group_0_offset, get_group_id(0), 10) > (safe_div_func_uint64_t_u_u((~p_60), l_275))) ^ p_62)) != p_1469->g_27.s9) > l_276))))))) , 0x6844L), p_1469->g_163)), p_1469->g_29.sf)) && l_246.y), p_63)))) , l_246.z) | 5L) || p_60);
        (*l_280) = &l_272;
        for (p_1469->g_177 = 0; (p_1469->g_177 >= 39); p_1469->g_177 = safe_add_func_uint32_t_u_u(p_1469->g_177, 7))
        { /* block id: 94 */
            uint8_t l_292 = 0x1FL;
            VECTOR(int16_t, 8) l_310 = (VECTOR(int16_t, 8))(0x79E4L, (VECTOR(int16_t, 4))(0x79E4L, (VECTOR(int16_t, 2))(0x79E4L, 6L), 6L), 6L, 0x79E4L, 6L);
            int32_t l_321 = 0x2746AA76L;
            VECTOR(int32_t, 16) l_350 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4BE4D16FL), 0x4BE4D16FL), 0x4BE4D16FL, 0L, 0x4BE4D16FL, (VECTOR(int32_t, 2))(0L, 0x4BE4D16FL), (VECTOR(int32_t, 2))(0L, 0x4BE4D16FL), 0L, 0x4BE4D16FL, 0L, 0x4BE4D16FL);
            uint32_t *l_359 = (void*)0;
            int32_t *l_388[5][8][2] = {{{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163}},{{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163}},{{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163}},{{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163}},{{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163},{(void*)0,&p_1469->g_163}}};
            int i, j, k;
            for (p_62 = (-28); (p_62 < 52); p_62 = safe_add_func_uint32_t_u_u(p_62, 2))
            { /* block id: 97 */
                int64_t l_291[2][7];
                int32_t **l_308 = &l_277;
                VECTOR(int16_t, 16) l_312 = (VECTOR(int16_t, 16))(0x1128L, (VECTOR(int16_t, 4))(0x1128L, (VECTOR(int16_t, 2))(0x1128L, 0x33A9L), 0x33A9L), 0x33A9L, 0x1128L, 0x33A9L, (VECTOR(int16_t, 2))(0x1128L, 0x33A9L), (VECTOR(int16_t, 2))(0x1128L, 0x33A9L), 0x1128L, 0x33A9L, 0x1128L, 0x33A9L);
                int64_t *l_320[10] = {&l_291[0][3],&l_291[0][3],&l_291[0][3],&l_291[0][3],&l_291[0][3],&l_291[0][3],&l_291[0][3],&l_291[0][3],&l_291[0][3],&l_291[0][3]};
                VECTOR(int32_t, 8) l_322 = (VECTOR(int32_t, 8))(0x702D1D45L, (VECTOR(int32_t, 4))(0x702D1D45L, (VECTOR(int32_t, 2))(0x702D1D45L, 0x043293D7L), 0x043293D7L), 0x043293D7L, 0x702D1D45L, 0x043293D7L);
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_291[i][j] = 2L;
                }
                l_286--;
                l_246.y = ((((safe_div_func_uint64_t_u_u((l_292--), (p_1469->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1469->tid, 3))] = ((safe_add_func_uint8_t_u_u(1UL, ((safe_rshift_func_int16_t_s_s(p_61, ((safe_unary_minus_func_uint64_t_u((safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s((p_60 >= GROUP_DIVERGE(1, 1)), (((((((0x4E7A1AFC6B86DBEEL ^ p_62) & (safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((&p_1469->g_278 != ((*l_308) = &p_1469->g_278)) >= p_63), (((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_309.xw)))))).xyxyyyyxyyxyyxxx)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_310.s35)))).yxyy)).wwxwxwxxzwyzzyyw, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(p_1469->g_311.s7037634465261231)), ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_312.sfc1b)).even)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_1469->g_313.yxyy)))).hi, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_314.s7361634430760434)))).scb))), 1L, (-2L))).odd, ((VECTOR(int16_t, 2))(l_315.se3))))).xxxyxyxyyxxxxyyy))).odd, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_316.xywz)).lo)), 0x04ECL, 0x343EL, (safe_mod_func_uint64_t_u_u(l_319, 18446744073709551611UL)), 9L, 0x0CC6L, 2L))))).s27, ((VECTOR(int16_t, 2))((-5L))), ((VECTOR(int16_t, 2))(6L))))).yxyxxyxyxxxxxxyy))).s6, 1L, 0x7CF9L, (-1L))).wxwzxzzz)).s05))), (-8L), 0x47DCL)).hi)).odd | p_60))) , l_291[1][4]), 4))) , l_310.s4) || GROUP_DIVERGE(2, 1)) > GROUP_DIVERGE(1, 1)) , FAKE_DIVERGE(p_1469->global_2_offset, get_global_id(2), 10)) , p_1469->g_121))), l_246.w)))) > p_1469->g_177))) > p_1469->g_144.s1))) , p_1469->g_311.s4)))) | p_1469->g_29.sf) , l_272) , p_60);
                l_321 |= (l_292 == p_1469->g_163);
            }
        }
        (*l_280) = &l_272;
    }
    p_1469->g_421 = ((-1L) || (safe_div_func_uint16_t_u_u((p_60 <= ((*p_1469->g_406) = ((safe_rshift_func_int16_t_s_s((p_1469->g_313.y = (((!(safe_lshift_func_uint16_t_u_u(65529UL, 0))) == ((((safe_sub_func_uint32_t_u_u((((+(l_272 = 0xEEA5L)) == ((((*l_405) = l_402[1][1][0]) == p_1469->g_406) & (((*l_408) = (void*)0) == ((*l_411) = l_410)))) >= (safe_add_func_int8_t_s_s(((p_60 , (void*)0) == l_414), p_62))), p_1469->g_comm_values[p_1469->tid])) <= p_62) <= p_1469->g_98.sf) | 4294967286UL)) , p_1469->g_417)), 5)) , 1L))), p_63)));
    atomic_sub(&p_1469->g_atomic_reduction[get_linear_group_id()], (p_62 & p_61) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1469->v_collective += p_1469->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return p_63;
}


/* ------------------------------------------ */
/* 
 * reads : p_1469->g_75 p_1469->g_76 p_1469->l_comm_values p_1469->g_73 p_1469->g_93 p_1469->g_98 p_1469->g_117 p_1469->g_121 p_1469->g_29 p_1469->g_144 p_1469->g_163 p_1469->g_173 p_1469->g_175 p_1469->g_177 p_1469->g_241
 * writes: p_1469->g_93 p_1469->g_117 p_1469->g_121 p_1469->g_29 p_1469->g_76 p_1469->g_163 p_1469->g_177
 */
int64_t  func_64(int64_t  p_65, int32_t  p_66, uint16_t  p_67, int32_t  p_68, int32_t  p_69, struct S0 * p_1469)
{ /* block id: 7 */
    volatile int32_t * volatile l_77 = &p_1469->g_76;/* VOLATILE GLOBAL l_77 */
    int32_t l_78[8][5][6] = {{{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L}},{{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L}},{{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L}},{{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L}},{{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L}},{{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L}},{{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L}},{{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L},{(-1L),(-1L),0x6016E5DCL,0x61B453F4L,0x41BBB80EL,0x61B453F4L}}};
    int32_t l_79 = (-1L);
    VECTOR(int16_t, 4) l_88 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x6B59L), 0x6B59L);
    VECTOR(uint8_t, 16) l_91 = (VECTOR(uint8_t, 16))(0x17L, (VECTOR(uint8_t, 4))(0x17L, (VECTOR(uint8_t, 2))(0x17L, 255UL), 255UL), 255UL, 0x17L, 255UL, (VECTOR(uint8_t, 2))(0x17L, 255UL), (VECTOR(uint8_t, 2))(0x17L, 255UL), 0x17L, 255UL, 0x17L, 255UL);
    int8_t *l_92 = &p_1469->g_93;
    VECTOR(int16_t, 4) l_105 = (VECTOR(int16_t, 4))(0x2813L, (VECTOR(int16_t, 2))(0x2813L, (-9L)), (-9L));
    VECTOR(uint64_t, 2) l_126 = (VECTOR(uint64_t, 2))(0xEF6A3D77AE26BD80L, 18446744073709551613UL);
    VECTOR(int32_t, 4) l_145 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1E949441L), 0x1E949441L);
    int64_t *l_170 = (void*)0;
    int64_t **l_169 = &l_170;
    uint64_t *l_245 = (void*)0;
    uint64_t * volatile * volatile l_244 = &l_245;/* VOLATILE GLOBAL l_244 */
    int i, j, k;
    l_77 = p_1469->g_75;
    if ((((l_78[6][2][1] ^= 0L) & ((*l_77) ^ l_79)) > (p_1469->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1469->tid, 3))] , (safe_sub_func_uint8_t_u_u(l_79, (safe_rshift_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(l_88.wxww)).x, (l_88.y & 1L))), 7)) ^ ((*l_92) = (p_1469->g_73 <= (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(l_91.s7fe4)).z, 4))))) , ((p_67 ^ 18446744073709551615UL) , (void*)0)) != (void*)0), 1)))))))
    { /* block id: 11 */
        VECTOR(int16_t, 16) l_106 = (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0L), 0L), 0L, 8L, 0L, (VECTOR(int16_t, 2))(8L, 0L), (VECTOR(int16_t, 2))(8L, 0L), 8L, 0L, 8L, 0L);
        uint16_t *l_115 = (void*)0;
        uint16_t *l_116 = &p_1469->g_117;
        uint16_t *l_120 = &p_1469->g_121;
        uint64_t *l_131 = (void*)0;
        uint64_t *l_132 = (void*)0;
        uint64_t *l_133 = (void*)0;
        uint64_t *l_134 = (void*)0;
        uint64_t *l_135 = (void*)0;
        uint64_t *l_136[2][10][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
        int32_t *l_137 = &l_79;
        VECTOR(int32_t, 8) l_150 = (VECTOR(int32_t, 8))(0x4FD110C5L, (VECTOR(int32_t, 4))(0x4FD110C5L, (VECTOR(int32_t, 2))(0x4FD110C5L, 0L), 0L), 0L, 0x4FD110C5L, 0L);
        int i, j, k;
        l_78[6][2][1] &= ((*l_137) = (p_1469->g_93 > ((p_66 >= ((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0xABL, 0xF1L)), 0UL, (safe_rshift_func_int8_t_s_u(((0L <= (p_65 > p_69)) == ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 2))(18446744073709551608UL, 0x53F56D1B7A171313L)), ((VECTOR(uint64_t, 16))((((VECTOR(int32_t, 2))(p_1469->g_98.se4)).hi || (safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(0x56L, (safe_div_func_uint64_t_u_u((p_1469->g_76 == ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(l_105.xyyyxywz)).s0257302407147660, ((VECTOR(int16_t, 2))(3L, 1L)).yyxxyyxxyyyxyxxx))).s7427, ((VECTOR(int16_t, 8))(l_106.s67607bbc)).even))).z), (safe_div_func_uint64_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s((((p_1469->g_29.s1 = ((((~(safe_sub_func_uint16_t_u_u((++(*l_116)), (--(*l_120))))) , (safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_126.yy)), 0x6C63C429AA74C462L, 18446744073709551615UL)).y, GROUP_DIVERGE(2, 1)))) & (safe_div_func_int64_t_s_s(((!0x510FED72739EBEB9L) != (safe_lshift_func_int16_t_s_u(p_1469->g_29.s7, 9))), p_1469->g_29.s9))) < 4L)) || 18446744073709551612UL) ^ p_66), FAKE_DIVERGE(p_1469->local_1_offset, get_local_id(1), 10))), p_1469->g_93)), 0x1578ADDDDEF21EC4L)))))), 5))), 0x4CA3D13A51B20E94L, ((VECTOR(uint64_t, 8))(0UL)), FAKE_DIVERGE(p_1469->global_0_offset, get_global_id(0), 10), 18446744073709551608UL, ((VECTOR(uint64_t, 4))(0UL)))).s19, ((VECTOR(uint64_t, 2))(18446744073709551615UL))))).even), p_1469->g_93)), 1UL, 0x00L, 255UL, 0x63L)).s6, p_65)) > l_106.s9)) == 0x81F5L)));
        (*l_77) |= ((*l_137) &= (-1L));
        for (p_67 = 0; (p_67 > 39); ++p_67)
        { /* block id: 21 */
            int64_t *l_161 = &p_1469->g_73;
            if (p_68)
            { /* block id: 22 */
                VECTOR(int32_t, 4) l_151 = (VECTOR(int32_t, 4))(0x4974F601L, (VECTOR(int32_t, 2))(0x4974F601L, 1L), 1L);
                uint32_t *l_176 = &p_1469->g_177;
                int i;
                for (p_68 = 0; (p_68 != 8); p_68 = safe_add_func_int64_t_s_s(p_68, 8))
                { /* block id: 25 */
                    uint8_t l_152 = 255UL;
                    for (p_66 = 0; (p_66 != 2); p_66++)
                    { /* block id: 28 */
                        int64_t *l_160 = &p_1469->g_73;
                        int64_t **l_159 = &l_160;
                        uint8_t l_162[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_162[i] = 0x53L;
                        (*l_77) = ((p_1469->g_163 |= ((p_69 | (((*l_120) &= (((p_69 <= ((VECTOR(int64_t, 2))(0L, 0x55331A3B0D4ED63EL)).odd) , ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(p_1469->g_144.s4405170036126063)), ((VECTOR(int32_t, 16))(l_145.yywyyyyyzyyxxwzw))))).s647b)).even, (int32_t)((p_1469->g_117--) < (safe_sub_func_int8_t_s_s(p_1469->g_73, p_68)))))), ((VECTOR(int32_t, 4))(l_150.s4445)).even))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_151.zz)), 0x1622FFCBL, 0x05FA698EL)).odd, ((VECTOR(int32_t, 4))((l_152 & (((safe_mul_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((p_1469->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1469->tid, 3))] <= (p_66 || ((((~(safe_mul_func_uint16_t_u_u(65533UL, ((((*l_159) = (void*)0) == l_161) ^ p_69)))) == (*l_77)) == 0x39L) || l_162[6]))), p_67)), 0x0FL)) <= 0x5EL) || p_66)), (-1L), 0x5006F50CL, 0x2A60D7D1L)).odd))).odd) < 0x7C989E8BL)) ^ p_1469->g_29.sa)) , l_151.x)) && (-5L));
                    }
                    if ((atomic_inc(&p_1469->g_atomic_input[75 * get_linear_group_id() + 3]) == 8))
                    { /* block id: 36 */
                        uint32_t l_164 = 0xE9FE6B08L;
                        int16_t l_167[10] = {0x2B0BL,0x2B0BL,0x2B0BL,0x2B0BL,0x2B0BL,0x2B0BL,0x2B0BL,0x2B0BL,0x2B0BL,0x2B0BL};
                        uint32_t l_168 = 0UL;
                        int i;
                        --l_164;
                        l_168 = l_167[5];
                        unsigned int result = 0;
                        result += l_164;
                        int l_167_i0;
                        for (l_167_i0 = 0; l_167_i0 < 10; l_167_i0++) {
                            result += l_167[l_167_i0];
                        }
                        result += l_168;
                        atomic_add(&p_1469->g_special_values[75 * get_linear_group_id() + 3], result);
                    }
                    else
                    { /* block id: 39 */
                        (1 + 1);
                    }
                }
                p_68 = (0x3BF28D7AL != (((l_169 != &l_170) > (safe_add_func_uint8_t_u_u(((void*)0 == p_1469->g_173), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(4L, 0L)), 1L, 0x3AL)).y))) , (((VECTOR(int8_t, 4))(p_1469->g_175.xxyx)).z && ((p_65 < ((*l_176) ^= FAKE_DIVERGE(p_1469->local_1_offset, get_local_id(1), 10))) <= (safe_unary_minus_func_int16_t_s((safe_rshift_func_uint8_t_u_u(0UL, (safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((safe_add_func_int64_t_s_s(p_67, GROUP_DIVERGE(0, 1))), (safe_mul_func_uint16_t_u_u(0x02BFL, p_1469->g_76)))), p_1469->g_98.sa)), 5UL))))))))));
                for (p_66 = 0; (p_66 <= (-27)); --p_66)
                { /* block id: 47 */
                    if ((*p_1469->g_75))
                        break;
                }
            }
            else
            { /* block id: 50 */
                if ((atomic_inc(&p_1469->l_atomic_input[72]) == 1))
                { /* block id: 52 */
                    int8_t l_193 = 0x32L;
                    uint32_t l_194[5] = {1UL,1UL,1UL,1UL,1UL};
                    VECTOR(int32_t, 16) l_202 = (VECTOR(int32_t, 16))(0x0AD08EFBL, (VECTOR(int32_t, 4))(0x0AD08EFBL, (VECTOR(int32_t, 2))(0x0AD08EFBL, (-10L)), (-10L)), (-10L), 0x0AD08EFBL, (-10L), (VECTOR(int32_t, 2))(0x0AD08EFBL, (-10L)), (VECTOR(int32_t, 2))(0x0AD08EFBL, (-10L)), 0x0AD08EFBL, (-10L), 0x0AD08EFBL, (-10L));
                    uint16_t l_203 = 65527UL;
                    uint8_t l_204 = 252UL;
                    VECTOR(int32_t, 4) l_205 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x28008291L), 0x28008291L);
                    VECTOR(int32_t, 2) l_206 = (VECTOR(int32_t, 2))((-1L), 0x29163CD0L);
                    VECTOR(int32_t, 2) l_207 = (VECTOR(int32_t, 2))(2L, 1L);
                    VECTOR(int32_t, 16) l_208 = (VECTOR(int32_t, 16))(0x2737E1BAL, (VECTOR(int32_t, 4))(0x2737E1BAL, (VECTOR(int32_t, 2))(0x2737E1BAL, 1L), 1L), 1L, 0x2737E1BAL, 1L, (VECTOR(int32_t, 2))(0x2737E1BAL, 1L), (VECTOR(int32_t, 2))(0x2737E1BAL, 1L), 0x2737E1BAL, 1L, 0x2737E1BAL, 1L);
                    VECTOR(int32_t, 4) l_209 = (VECTOR(int32_t, 4))(0x3F06AC36L, (VECTOR(int32_t, 2))(0x3F06AC36L, (-1L)), (-1L));
                    VECTOR(int32_t, 2) l_210 = (VECTOR(int32_t, 2))(0x405B1F0BL, (-3L));
                    uint8_t l_211[3][1];
                    int32_t l_212[2][2][3] = {{{0x6DE11C7FL,0x358BC3C5L,1L},{0x6DE11C7FL,0x358BC3C5L,1L}},{{0x6DE11C7FL,0x358BC3C5L,1L},{0x6DE11C7FL,0x358BC3C5L,1L}}};
                    uint32_t l_213[2][8][10] = {{{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL},{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL},{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL},{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL},{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL},{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL},{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL},{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL}},{{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL},{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL},{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL},{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL},{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL},{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL},{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL},{1UL,0x3F161DF2L,3UL,0x0C104093L,4294967287UL,2UL,0UL,0UL,1UL,4294967294UL}}};
                    uint32_t l_238[7][6][6] = {{{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL}},{{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL}},{{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL}},{{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL}},{{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL}},{{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL}},{{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL},{0x3CCBC9E5L,4UL,0x76F92318L,0x5B06E9F9L,0x76F92318L,4UL}}};
                    int32_t *l_239[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int32_t *l_240 = (void*)0;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_211[i][j] = 246UL;
                    }
                    if ((l_194[1] = l_193))
                    { /* block id: 54 */
                        uint16_t l_195 = 7UL;
                        l_195 ^= 0x5A3005F4L;
                    }
                    else
                    { /* block id: 56 */
                        uint32_t l_196 = 4294967295UL;
                        uint16_t l_199 = 0x59F8L;
                        int32_t l_200 = 0x70BE373BL;
                        uint8_t l_201 = 0x38L;
                        ++l_196;
                        l_201 |= (l_200 = l_199);
                    }
                    l_212[1][0][1] |= (l_211[1][0] = ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(l_202.sd1)).xxxx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(l_203, l_204, 0x6DA46FE8L, 1L)).zxzyyxzwzzxzxxxy, ((VECTOR(int32_t, 2))(0L, 0L)).yyxyyxxxyyxxyxxy))).s41e8)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(l_205.zzyzyyzxxyyzxyxy)), ((VECTOR(int32_t, 4))(0x64992809L, 1L, 0x076BB3E9L, 1L)).wxyzzxwwyyyxyzxx, ((VECTOR(int32_t, 2))(1L, 0L)).xxxyxxyyxxyxyyxx))).s0b)).yyyxyyxyxyxxxxxy)).s4160, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x736518EEL, ((VECTOR(int32_t, 8))(l_206.yxyxyyxy)), 7L, ((VECTOR(int32_t, 4))(l_207.xyxx)), 0x3D24E930L, 8L)).even)).odd))).xwzwyxxzzyzzzzzz, ((VECTOR(int32_t, 16))(l_208.s59ccd5eb8bac6151))))).odd)).odd, ((VECTOR(int32_t, 16))(l_209.wzywwwyxxxyxwzzx)).s2537))), ((VECTOR(int32_t, 2))(l_210.yx)).yxyx, ((VECTOR(int32_t, 2))((-1L), 8L)).xyxy))).w);
                    if (l_213[0][1][3])
                    { /* block id: 63 */
                        int8_t l_214 = 1L;
                        uint8_t l_215[8];
                        int64_t l_218 = (-1L);
                        int8_t l_219 = 0x4DL;
                        int i;
                        for (i = 0; i < 8; i++)
                            l_215[i] = 0x18L;
                        ++l_215[3];
                        l_202.s9 = (l_218 , l_219);
                    }
                    else
                    { /* block id: 66 */
                        VECTOR(uint64_t, 4) l_220 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x1DF76A9F0FD85092L), 0x1DF76A9F0FD85092L);
                        uint32_t l_221[3][3][5] = {{{0x52EE98ABL,0x52EE98ABL,4294967289UL,0UL,1UL},{0x52EE98ABL,0x52EE98ABL,4294967289UL,0UL,1UL},{0x52EE98ABL,0x52EE98ABL,4294967289UL,0UL,1UL}},{{0x52EE98ABL,0x52EE98ABL,4294967289UL,0UL,1UL},{0x52EE98ABL,0x52EE98ABL,4294967289UL,0UL,1UL},{0x52EE98ABL,0x52EE98ABL,4294967289UL,0UL,1UL}},{{0x52EE98ABL,0x52EE98ABL,4294967289UL,0UL,1UL},{0x52EE98ABL,0x52EE98ABL,4294967289UL,0UL,1UL},{0x52EE98ABL,0x52EE98ABL,4294967289UL,0UL,1UL}}};
                        VECTOR(uint32_t, 8) l_222 = (VECTOR(uint32_t, 8))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 4294967288UL), 4294967288UL), 4294967288UL, 7UL, 4294967288UL);
                        int8_t l_223 = 0x49L;
                        VECTOR(uint32_t, 4) l_224 = (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0x74C5E4DCL), 0x74C5E4DCL);
                        VECTOR(uint32_t, 2) l_225 = (VECTOR(uint32_t, 2))(0xC6678C47L, 4294967287UL);
                        uint32_t l_226 = 0x7FE98B08L;
                        uint32_t l_227[10][5][5] = {{{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L}},{{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L}},{{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L}},{{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L}},{{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L}},{{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L}},{{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L}},{{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L}},{{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L}},{{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L},{0x94BA9F67L,0x00968CA8L,2UL,0x1D9F5035L,0xB0ADA181L}}};
                        VECTOR(uint32_t, 8) l_228 = (VECTOR(uint32_t, 8))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0x97B0590FL), 0x97B0590FL), 0x97B0590FL, 4294967289UL, 0x97B0590FL);
                        VECTOR(uint32_t, 8) l_229 = (VECTOR(uint32_t, 8))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 6UL), 6UL), 6UL, 4294967290UL, 6UL);
                        int32_t l_230 = 0L;
                        int64_t l_231 = (-3L);
                        VECTOR(uint32_t, 16) l_232 = (VECTOR(uint32_t, 16))(4294967287UL, (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 0x334F8885L), 0x334F8885L), 0x334F8885L, 4294967287UL, 0x334F8885L, (VECTOR(uint32_t, 2))(4294967287UL, 0x334F8885L), (VECTOR(uint32_t, 2))(4294967287UL, 0x334F8885L), 4294967287UL, 0x334F8885L, 4294967287UL, 0x334F8885L);
                        VECTOR(uint32_t, 8) l_233 = (VECTOR(uint32_t, 8))(0xA6D7309AL, (VECTOR(uint32_t, 4))(0xA6D7309AL, (VECTOR(uint32_t, 2))(0xA6D7309AL, 0xEF0A7560L), 0xEF0A7560L), 0xEF0A7560L, 0xA6D7309AL, 0xEF0A7560L);
                        VECTOR(uint32_t, 2) l_234 = (VECTOR(uint32_t, 2))(0UL, 0xC5EB3F9AL);
                        VECTOR(uint32_t, 2) l_235 = (VECTOR(uint32_t, 2))(4UL, 4294967293UL);
                        VECTOR(uint32_t, 2) l_236 = (VECTOR(uint32_t, 2))(1UL, 4294967294UL);
                        int16_t l_237 = 0x684CL;
                        int i, j, k;
                        l_210.x ^= ((l_220.z = (-1L)) , (l_221[2][2][0] , (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 16))(l_222.s7572270131510346)).odd, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(0x3202F86EL, (l_223 , (l_213[0][1][3] = ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 16))(l_224.wxwwwyzywzywwzwz)).hi, ((VECTOR(uint32_t, 4))(l_225.yxyx)).xxywzxzy))).s2746131375536465, ((VECTOR(uint32_t, 4))(0x83D353EAL, l_226, 0xBBFA448FL, 4294967286UL)).xywwwzzyyyxyzxww, ((VECTOR(uint32_t, 2))(0x33C69A03L, 4294967293UL)).xxyyxyyyyyxxyxyy))).even)).s65))), 4294967292UL, 4294967295UL)), 0x821AC233L, l_227[7][3][3], GROUP_DIVERGE(2, 1), ((VECTOR(uint32_t, 8))(l_228.s13115260)), 0x85C9947EL)).s1)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(l_229.s4177703155101031)).s1c7d)).xxywwwzwyzzyzwyw)).s5, l_230, l_231, ((VECTOR(uint32_t, 2))(l_232.s73)), 0x9F1F8B01L)).s6617630471007246)).odd))).odd, ((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),VECTOR(uint32_t, 16),((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_233.s52)).yyyxxyyx)).s1515133463035765, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_234.yy)).yyxyxyxxyyyyyxxx)).s53, ((VECTOR(uint32_t, 4))(l_235.yxxy)).odd, ((VECTOR(uint32_t, 8))(l_236.yxxxyxyy)).s75))), 1UL, 0xAA5562F0L)).wyyyzwxyxxywyzzx, ((VECTOR(uint32_t, 2))(0xD73544DAL, 0x2CCA2613L)).xxyyxxxxxxxyyxyx))).s550e, ((VECTOR(uint32_t, 2))(0x890D4C23L, 6UL)).yxyx))).zxyzyyxx)).s1 , l_237)));
                    }
                    l_240 = (l_238[4][1][1] , l_239[5]);
                    unsigned int result = 0;
                    result += l_193;
                    int l_194_i0;
                    for (l_194_i0 = 0; l_194_i0 < 5; l_194_i0++) {
                        result += l_194[l_194_i0];
                    }
                    result += l_202.sf;
                    result += l_202.se;
                    result += l_202.sd;
                    result += l_202.sc;
                    result += l_202.sb;
                    result += l_202.sa;
                    result += l_202.s9;
                    result += l_202.s8;
                    result += l_202.s7;
                    result += l_202.s6;
                    result += l_202.s5;
                    result += l_202.s4;
                    result += l_202.s3;
                    result += l_202.s2;
                    result += l_202.s1;
                    result += l_202.s0;
                    result += l_203;
                    result += l_204;
                    result += l_205.w;
                    result += l_205.z;
                    result += l_205.y;
                    result += l_205.x;
                    result += l_206.y;
                    result += l_206.x;
                    result += l_207.y;
                    result += l_207.x;
                    result += l_208.sf;
                    result += l_208.se;
                    result += l_208.sd;
                    result += l_208.sc;
                    result += l_208.sb;
                    result += l_208.sa;
                    result += l_208.s9;
                    result += l_208.s8;
                    result += l_208.s7;
                    result += l_208.s6;
                    result += l_208.s5;
                    result += l_208.s4;
                    result += l_208.s3;
                    result += l_208.s2;
                    result += l_208.s1;
                    result += l_208.s0;
                    result += l_209.w;
                    result += l_209.z;
                    result += l_209.y;
                    result += l_209.x;
                    result += l_210.y;
                    result += l_210.x;
                    int l_211_i0, l_211_i1;
                    for (l_211_i0 = 0; l_211_i0 < 3; l_211_i0++) {
                        for (l_211_i1 = 0; l_211_i1 < 1; l_211_i1++) {
                            result += l_211[l_211_i0][l_211_i1];
                        }
                    }
                    int l_212_i0, l_212_i1, l_212_i2;
                    for (l_212_i0 = 0; l_212_i0 < 2; l_212_i0++) {
                        for (l_212_i1 = 0; l_212_i1 < 2; l_212_i1++) {
                            for (l_212_i2 = 0; l_212_i2 < 3; l_212_i2++) {
                                result += l_212[l_212_i0][l_212_i1][l_212_i2];
                            }
                        }
                    }
                    int l_213_i0, l_213_i1, l_213_i2;
                    for (l_213_i0 = 0; l_213_i0 < 2; l_213_i0++) {
                        for (l_213_i1 = 0; l_213_i1 < 8; l_213_i1++) {
                            for (l_213_i2 = 0; l_213_i2 < 10; l_213_i2++) {
                                result += l_213[l_213_i0][l_213_i1][l_213_i2];
                            }
                        }
                    }
                    int l_238_i0, l_238_i1, l_238_i2;
                    for (l_238_i0 = 0; l_238_i0 < 7; l_238_i0++) {
                        for (l_238_i1 = 0; l_238_i1 < 6; l_238_i1++) {
                            for (l_238_i2 = 0; l_238_i2 < 6; l_238_i2++) {
                                result += l_238[l_238_i0][l_238_i1][l_238_i2];
                            }
                        }
                    }
                    atomic_add(&p_1469->l_special_values[72], result);
                }
                else
                { /* block id: 72 */
                    (1 + 1);
                }
            }
        }
    }
    else
    { /* block id: 77 */
        uint64_t * volatile * volatile *l_243 = (void*)0;
        l_244 = p_1469->g_241;
        return p_66;
    }
    return (*l_77);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[75];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 75; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[75];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 75; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_comm_values[i] = 1;
    struct S0 c_1470;
    struct S0* p_1469 = &c_1470;
    struct S0 c_1471 = {
        (VECTOR(int64_t, 16))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), (-9L)), (-9L)), (-9L), (-2L), (-9L), (VECTOR(int64_t, 2))((-2L), (-9L)), (VECTOR(int64_t, 2))((-2L), (-9L)), (-2L), (-9L), (-2L), (-9L)), // p_1469->g_27
        (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4895C4B79A97A8D1L), 0x4895C4B79A97A8D1L), 0x4895C4B79A97A8D1L, 18446744073709551615UL, 0x4895C4B79A97A8D1L, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4895C4B79A97A8D1L), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4895C4B79A97A8D1L), 18446744073709551615UL, 0x4895C4B79A97A8D1L, 18446744073709551615UL, 0x4895C4B79A97A8D1L), // p_1469->g_29
        (-8L), // p_1469->g_73
        1L, // p_1469->g_76
        &p_1469->g_76, // p_1469->g_75
        0x26L, // p_1469->g_93
        (VECTOR(int32_t, 16))(0x7F1C7326L, (VECTOR(int32_t, 4))(0x7F1C7326L, (VECTOR(int32_t, 2))(0x7F1C7326L, 0x36FCE132L), 0x36FCE132L), 0x36FCE132L, 0x7F1C7326L, 0x36FCE132L, (VECTOR(int32_t, 2))(0x7F1C7326L, 0x36FCE132L), (VECTOR(int32_t, 2))(0x7F1C7326L, 0x36FCE132L), 0x7F1C7326L, 0x36FCE132L, 0x7F1C7326L, 0x36FCE132L), // p_1469->g_98
        0xAB06L, // p_1469->g_117
        0x1AF3L, // p_1469->g_121
        (VECTOR(int32_t, 8))(0x76335B14L, (VECTOR(int32_t, 4))(0x76335B14L, (VECTOR(int32_t, 2))(0x76335B14L, 1L), 1L), 1L, 0x76335B14L, 1L), // p_1469->g_144
        0x42E77F79L, // p_1469->g_163
        (void*)0, // p_1469->g_174
        &p_1469->g_174, // p_1469->g_173
        (VECTOR(int8_t, 2))((-6L), (-10L)), // p_1469->g_175
        7UL, // p_1469->g_177
        (void*)0, // p_1469->g_241
        (void*)0, // p_1469->g_242
        (VECTOR(int32_t, 4))(0x34A4A15AL, (VECTOR(int32_t, 2))(0x34A4A15AL, (-1L)), (-1L)), // p_1469->g_247
        (void*)0, // p_1469->g_249
        4294967286UL, // p_1469->g_257
        0x397C8A83L, // p_1469->g_278
        &p_1469->g_163, // p_1469->g_279
        (VECTOR(int16_t, 8))(0x1DE7L, (VECTOR(int16_t, 4))(0x1DE7L, (VECTOR(int16_t, 2))(0x1DE7L, (-9L)), (-9L)), (-9L), 0x1DE7L, (-9L)), // p_1469->g_311
        (VECTOR(int16_t, 2))(0x1D5FL, 0L), // p_1469->g_313
        (VECTOR(int64_t, 8))(0x13669B7611907058L, (VECTOR(int64_t, 4))(0x13669B7611907058L, (VECTOR(int64_t, 2))(0x13669B7611907058L, (-9L)), (-9L)), (-9L), 0x13669B7611907058L, (-9L)), // p_1469->g_323
        (VECTOR(int32_t, 2))((-1L), (-2L)), // p_1469->g_347
        &p_1469->g_93, // p_1469->g_406
        1L, // p_1469->g_417
        0x48A9L, // p_1469->g_421
        (void*)0, // p_1469->g_436
        &p_1469->g_163, // p_1469->g_437
        (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x76DA37A3L), 0x76DA37A3L), // p_1469->g_445
        4294967295UL, // p_1469->g_447
        0L, // p_1469->g_475
        (void*)0, // p_1469->g_481
        &p_1469->g_481, // p_1469->g_480
        (void*)0, // p_1469->g_489
        &p_1469->g_489, // p_1469->g_488
        (VECTOR(uint16_t, 2))(0UL, 0xABA0L), // p_1469->g_493
        (VECTOR(int32_t, 2))(0x1D10BFD9L, (-7L)), // p_1469->g_532
        (VECTOR(int32_t, 16))(0x3C614807L, (VECTOR(int32_t, 4))(0x3C614807L, (VECTOR(int32_t, 2))(0x3C614807L, 0x6FD2F073L), 0x6FD2F073L), 0x6FD2F073L, 0x3C614807L, 0x6FD2F073L, (VECTOR(int32_t, 2))(0x3C614807L, 0x6FD2F073L), (VECTOR(int32_t, 2))(0x3C614807L, 0x6FD2F073L), 0x3C614807L, 0x6FD2F073L, 0x3C614807L, 0x6FD2F073L), // p_1469->g_533
        (VECTOR(int8_t, 2))(0L, (-8L)), // p_1469->g_537
        (VECTOR(int16_t, 8))(0x7300L, (VECTOR(int16_t, 4))(0x7300L, (VECTOR(int16_t, 2))(0x7300L, (-4L)), (-4L)), (-4L), 0x7300L, (-4L)), // p_1469->g_541
        (VECTOR(int8_t, 2))((-1L), 0x2FL), // p_1469->g_554
        (VECTOR(int8_t, 2))(0L, 0x72L), // p_1469->g_555
        (VECTOR(int8_t, 2))(1L, 0x5AL), // p_1469->g_556
        (VECTOR(int8_t, 16))(0x73L, (VECTOR(int8_t, 4))(0x73L, (VECTOR(int8_t, 2))(0x73L, 0x3BL), 0x3BL), 0x3BL, 0x73L, 0x3BL, (VECTOR(int8_t, 2))(0x73L, 0x3BL), (VECTOR(int8_t, 2))(0x73L, 0x3BL), 0x73L, 0x3BL, 0x73L, 0x3BL), // p_1469->g_557
        (VECTOR(int8_t, 8))((-6L), (VECTOR(int8_t, 4))((-6L), (VECTOR(int8_t, 2))((-6L), 1L), 1L), 1L, (-6L), 1L), // p_1469->g_558
        0L, // p_1469->g_569
        &p_1469->g_569, // p_1469->g_568
        (-10L), // p_1469->g_584
        (VECTOR(int32_t, 4))(0x5280125AL, (VECTOR(int32_t, 2))(0x5280125AL, 4L), 4L), // p_1469->g_605
        (void*)0, // p_1469->g_704
        {(void*)0,&p_1469->g_704,(void*)0,(void*)0,&p_1469->g_704,(void*)0,(void*)0}, // p_1469->g_703
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x38L), 0x38L), // p_1469->g_711
        (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x31L), 0x31L), 0x31L, 0UL, 0x31L), // p_1469->g_712
        (VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL), // p_1469->g_722
        {{(void*)0,(void*)0,(void*)0,(void*)0}}, // p_1469->g_754
        &p_1469->g_754[0][0], // p_1469->g_753
        &p_1469->g_753, // p_1469->g_752
        (VECTOR(uint32_t, 8))(0x303F75FDL, (VECTOR(uint32_t, 4))(0x303F75FDL, (VECTOR(uint32_t, 2))(0x303F75FDL, 0xD3369FCAL), 0xD3369FCAL), 0xD3369FCAL, 0x303F75FDL, 0xD3369FCAL), // p_1469->g_779
        (void*)0, // p_1469->g_823
        (VECTOR(uint16_t, 8))(0x8A8FL, (VECTOR(uint16_t, 4))(0x8A8FL, (VECTOR(uint16_t, 2))(0x8A8FL, 8UL), 8UL), 8UL, 0x8A8FL, 8UL), // p_1469->g_830
        (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-10L)), (-10L)), (-10L), (-1L), (-10L)), // p_1469->g_913
        6L, // p_1469->g_925
        &p_1469->g_925, // p_1469->g_924
        &p_1469->g_924, // p_1469->g_923
        &p_1469->g_923, // p_1469->g_922
        (void*)0, // p_1469->g_932
        &p_1469->g_932, // p_1469->g_931
        &p_1469->g_163, // p_1469->g_934
        (VECTOR(int32_t, 2))((-8L), 0x2410A304L), // p_1469->g_964
        (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x8A95L), 0x8A95L), 0x8A95L, 0UL, 0x8A95L, (VECTOR(uint16_t, 2))(0UL, 0x8A95L), (VECTOR(uint16_t, 2))(0UL, 0x8A95L), 0UL, 0x8A95L, 0UL, 0x8A95L), // p_1469->g_987
        (VECTOR(int32_t, 16))(0x3F01AF86L, (VECTOR(int32_t, 4))(0x3F01AF86L, (VECTOR(int32_t, 2))(0x3F01AF86L, 0L), 0L), 0L, 0x3F01AF86L, 0L, (VECTOR(int32_t, 2))(0x3F01AF86L, 0L), (VECTOR(int32_t, 2))(0x3F01AF86L, 0L), 0x3F01AF86L, 0L, 0x3F01AF86L, 0L), // p_1469->g_993
        (VECTOR(int16_t, 8))(0x2EC0L, (VECTOR(int16_t, 4))(0x2EC0L, (VECTOR(int16_t, 2))(0x2EC0L, (-1L)), (-1L)), (-1L), 0x2EC0L, (-1L)), // p_1469->g_1023
        (VECTOR(int16_t, 8))(0x67FCL, (VECTOR(int16_t, 4))(0x67FCL, (VECTOR(int16_t, 2))(0x67FCL, 1L), 1L), 1L, 0x67FCL, 1L), // p_1469->g_1024
        0xEA0BL, // p_1469->g_1059
        2L, // p_1469->g_1270
        (VECTOR(uint64_t, 2))(0x910764DCEF990643L, 0xDC36C9A254A4AD89L), // p_1469->g_1282
        (VECTOR(uint16_t, 4))(0xC728L, (VECTOR(uint16_t, 2))(0xC728L, 65528UL), 65528UL), // p_1469->g_1295
        (VECTOR(int16_t, 2))(0x62BDL, 7L), // p_1469->g_1297
        (VECTOR(int16_t, 8))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x1898L), 0x1898L), 0x1898L, 7L, 0x1898L), // p_1469->g_1316
        (VECTOR(int32_t, 4))(0x2AF64F4DL, (VECTOR(int32_t, 2))(0x2AF64F4DL, (-1L)), (-1L)), // p_1469->g_1361
        (VECTOR(int32_t, 2))((-1L), 0L), // p_1469->g_1365
        &p_1469->g_447, // p_1469->g_1402
        &p_1469->g_1402, // p_1469->g_1401
        {{{&p_1469->g_823,&p_1469->g_823,&p_1469->g_823},{&p_1469->g_823,&p_1469->g_823,&p_1469->g_823},{&p_1469->g_823,&p_1469->g_823,&p_1469->g_823}}}, // p_1469->g_1435
        &p_1469->g_1435[0][2][1], // p_1469->g_1434
        (VECTOR(int16_t, 2))(0x3F43L, 0x41EFL), // p_1469->g_1450
        (VECTOR(int32_t, 2))(0L, 0x50359A75L), // p_1469->g_1452
        (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int32_t, 2))(0L, 0L), (VECTOR(int32_t, 2))(0L, 0L), 0L, 0L, 0L, 0L), // p_1469->g_1453
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 65535UL), 65535UL), // p_1469->g_1458
        0, // p_1469->v_collective
        sequence_input[get_global_id(0)], // p_1469->global_0_offset
        sequence_input[get_global_id(1)], // p_1469->global_1_offset
        sequence_input[get_global_id(2)], // p_1469->global_2_offset
        sequence_input[get_local_id(0)], // p_1469->local_0_offset
        sequence_input[get_local_id(1)], // p_1469->local_1_offset
        sequence_input[get_local_id(2)], // p_1469->local_2_offset
        sequence_input[get_group_id(0)], // p_1469->group_0_offset
        sequence_input[get_group_id(1)], // p_1469->group_1_offset
        sequence_input[get_group_id(2)], // p_1469->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[0][get_linear_local_id()])), // p_1469->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1470 = c_1471;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1469);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1469->g_27.s0, "p_1469->g_27.s0", print_hash_value);
    transparent_crc(p_1469->g_27.s1, "p_1469->g_27.s1", print_hash_value);
    transparent_crc(p_1469->g_27.s2, "p_1469->g_27.s2", print_hash_value);
    transparent_crc(p_1469->g_27.s3, "p_1469->g_27.s3", print_hash_value);
    transparent_crc(p_1469->g_27.s4, "p_1469->g_27.s4", print_hash_value);
    transparent_crc(p_1469->g_27.s5, "p_1469->g_27.s5", print_hash_value);
    transparent_crc(p_1469->g_27.s6, "p_1469->g_27.s6", print_hash_value);
    transparent_crc(p_1469->g_27.s7, "p_1469->g_27.s7", print_hash_value);
    transparent_crc(p_1469->g_27.s8, "p_1469->g_27.s8", print_hash_value);
    transparent_crc(p_1469->g_27.s9, "p_1469->g_27.s9", print_hash_value);
    transparent_crc(p_1469->g_27.sa, "p_1469->g_27.sa", print_hash_value);
    transparent_crc(p_1469->g_27.sb, "p_1469->g_27.sb", print_hash_value);
    transparent_crc(p_1469->g_27.sc, "p_1469->g_27.sc", print_hash_value);
    transparent_crc(p_1469->g_27.sd, "p_1469->g_27.sd", print_hash_value);
    transparent_crc(p_1469->g_27.se, "p_1469->g_27.se", print_hash_value);
    transparent_crc(p_1469->g_27.sf, "p_1469->g_27.sf", print_hash_value);
    transparent_crc(p_1469->g_29.s0, "p_1469->g_29.s0", print_hash_value);
    transparent_crc(p_1469->g_29.s1, "p_1469->g_29.s1", print_hash_value);
    transparent_crc(p_1469->g_29.s2, "p_1469->g_29.s2", print_hash_value);
    transparent_crc(p_1469->g_29.s3, "p_1469->g_29.s3", print_hash_value);
    transparent_crc(p_1469->g_29.s4, "p_1469->g_29.s4", print_hash_value);
    transparent_crc(p_1469->g_29.s5, "p_1469->g_29.s5", print_hash_value);
    transparent_crc(p_1469->g_29.s6, "p_1469->g_29.s6", print_hash_value);
    transparent_crc(p_1469->g_29.s7, "p_1469->g_29.s7", print_hash_value);
    transparent_crc(p_1469->g_29.s8, "p_1469->g_29.s8", print_hash_value);
    transparent_crc(p_1469->g_29.s9, "p_1469->g_29.s9", print_hash_value);
    transparent_crc(p_1469->g_29.sa, "p_1469->g_29.sa", print_hash_value);
    transparent_crc(p_1469->g_29.sb, "p_1469->g_29.sb", print_hash_value);
    transparent_crc(p_1469->g_29.sc, "p_1469->g_29.sc", print_hash_value);
    transparent_crc(p_1469->g_29.sd, "p_1469->g_29.sd", print_hash_value);
    transparent_crc(p_1469->g_29.se, "p_1469->g_29.se", print_hash_value);
    transparent_crc(p_1469->g_29.sf, "p_1469->g_29.sf", print_hash_value);
    transparent_crc(p_1469->g_73, "p_1469->g_73", print_hash_value);
    transparent_crc(p_1469->g_76, "p_1469->g_76", print_hash_value);
    transparent_crc(p_1469->g_93, "p_1469->g_93", print_hash_value);
    transparent_crc(p_1469->g_98.s0, "p_1469->g_98.s0", print_hash_value);
    transparent_crc(p_1469->g_98.s1, "p_1469->g_98.s1", print_hash_value);
    transparent_crc(p_1469->g_98.s2, "p_1469->g_98.s2", print_hash_value);
    transparent_crc(p_1469->g_98.s3, "p_1469->g_98.s3", print_hash_value);
    transparent_crc(p_1469->g_98.s4, "p_1469->g_98.s4", print_hash_value);
    transparent_crc(p_1469->g_98.s5, "p_1469->g_98.s5", print_hash_value);
    transparent_crc(p_1469->g_98.s6, "p_1469->g_98.s6", print_hash_value);
    transparent_crc(p_1469->g_98.s7, "p_1469->g_98.s7", print_hash_value);
    transparent_crc(p_1469->g_98.s8, "p_1469->g_98.s8", print_hash_value);
    transparent_crc(p_1469->g_98.s9, "p_1469->g_98.s9", print_hash_value);
    transparent_crc(p_1469->g_98.sa, "p_1469->g_98.sa", print_hash_value);
    transparent_crc(p_1469->g_98.sb, "p_1469->g_98.sb", print_hash_value);
    transparent_crc(p_1469->g_98.sc, "p_1469->g_98.sc", print_hash_value);
    transparent_crc(p_1469->g_98.sd, "p_1469->g_98.sd", print_hash_value);
    transparent_crc(p_1469->g_98.se, "p_1469->g_98.se", print_hash_value);
    transparent_crc(p_1469->g_98.sf, "p_1469->g_98.sf", print_hash_value);
    transparent_crc(p_1469->g_117, "p_1469->g_117", print_hash_value);
    transparent_crc(p_1469->g_121, "p_1469->g_121", print_hash_value);
    transparent_crc(p_1469->g_144.s0, "p_1469->g_144.s0", print_hash_value);
    transparent_crc(p_1469->g_144.s1, "p_1469->g_144.s1", print_hash_value);
    transparent_crc(p_1469->g_144.s2, "p_1469->g_144.s2", print_hash_value);
    transparent_crc(p_1469->g_144.s3, "p_1469->g_144.s3", print_hash_value);
    transparent_crc(p_1469->g_144.s4, "p_1469->g_144.s4", print_hash_value);
    transparent_crc(p_1469->g_144.s5, "p_1469->g_144.s5", print_hash_value);
    transparent_crc(p_1469->g_144.s6, "p_1469->g_144.s6", print_hash_value);
    transparent_crc(p_1469->g_144.s7, "p_1469->g_144.s7", print_hash_value);
    transparent_crc(p_1469->g_163, "p_1469->g_163", print_hash_value);
    transparent_crc(p_1469->g_175.x, "p_1469->g_175.x", print_hash_value);
    transparent_crc(p_1469->g_175.y, "p_1469->g_175.y", print_hash_value);
    transparent_crc(p_1469->g_177, "p_1469->g_177", print_hash_value);
    transparent_crc(p_1469->g_247.x, "p_1469->g_247.x", print_hash_value);
    transparent_crc(p_1469->g_247.y, "p_1469->g_247.y", print_hash_value);
    transparent_crc(p_1469->g_247.z, "p_1469->g_247.z", print_hash_value);
    transparent_crc(p_1469->g_247.w, "p_1469->g_247.w", print_hash_value);
    transparent_crc(p_1469->g_257, "p_1469->g_257", print_hash_value);
    transparent_crc(p_1469->g_278, "p_1469->g_278", print_hash_value);
    transparent_crc(p_1469->g_311.s0, "p_1469->g_311.s0", print_hash_value);
    transparent_crc(p_1469->g_311.s1, "p_1469->g_311.s1", print_hash_value);
    transparent_crc(p_1469->g_311.s2, "p_1469->g_311.s2", print_hash_value);
    transparent_crc(p_1469->g_311.s3, "p_1469->g_311.s3", print_hash_value);
    transparent_crc(p_1469->g_311.s4, "p_1469->g_311.s4", print_hash_value);
    transparent_crc(p_1469->g_311.s5, "p_1469->g_311.s5", print_hash_value);
    transparent_crc(p_1469->g_311.s6, "p_1469->g_311.s6", print_hash_value);
    transparent_crc(p_1469->g_311.s7, "p_1469->g_311.s7", print_hash_value);
    transparent_crc(p_1469->g_313.x, "p_1469->g_313.x", print_hash_value);
    transparent_crc(p_1469->g_313.y, "p_1469->g_313.y", print_hash_value);
    transparent_crc(p_1469->g_323.s0, "p_1469->g_323.s0", print_hash_value);
    transparent_crc(p_1469->g_323.s1, "p_1469->g_323.s1", print_hash_value);
    transparent_crc(p_1469->g_323.s2, "p_1469->g_323.s2", print_hash_value);
    transparent_crc(p_1469->g_323.s3, "p_1469->g_323.s3", print_hash_value);
    transparent_crc(p_1469->g_323.s4, "p_1469->g_323.s4", print_hash_value);
    transparent_crc(p_1469->g_323.s5, "p_1469->g_323.s5", print_hash_value);
    transparent_crc(p_1469->g_323.s6, "p_1469->g_323.s6", print_hash_value);
    transparent_crc(p_1469->g_323.s7, "p_1469->g_323.s7", print_hash_value);
    transparent_crc(p_1469->g_347.x, "p_1469->g_347.x", print_hash_value);
    transparent_crc(p_1469->g_347.y, "p_1469->g_347.y", print_hash_value);
    transparent_crc(p_1469->g_417, "p_1469->g_417", print_hash_value);
    transparent_crc(p_1469->g_421, "p_1469->g_421", print_hash_value);
    transparent_crc(p_1469->g_445.x, "p_1469->g_445.x", print_hash_value);
    transparent_crc(p_1469->g_445.y, "p_1469->g_445.y", print_hash_value);
    transparent_crc(p_1469->g_445.z, "p_1469->g_445.z", print_hash_value);
    transparent_crc(p_1469->g_445.w, "p_1469->g_445.w", print_hash_value);
    transparent_crc(p_1469->g_447, "p_1469->g_447", print_hash_value);
    transparent_crc(p_1469->g_475, "p_1469->g_475", print_hash_value);
    transparent_crc(p_1469->g_493.x, "p_1469->g_493.x", print_hash_value);
    transparent_crc(p_1469->g_493.y, "p_1469->g_493.y", print_hash_value);
    transparent_crc(p_1469->g_532.x, "p_1469->g_532.x", print_hash_value);
    transparent_crc(p_1469->g_532.y, "p_1469->g_532.y", print_hash_value);
    transparent_crc(p_1469->g_533.s0, "p_1469->g_533.s0", print_hash_value);
    transparent_crc(p_1469->g_533.s1, "p_1469->g_533.s1", print_hash_value);
    transparent_crc(p_1469->g_533.s2, "p_1469->g_533.s2", print_hash_value);
    transparent_crc(p_1469->g_533.s3, "p_1469->g_533.s3", print_hash_value);
    transparent_crc(p_1469->g_533.s4, "p_1469->g_533.s4", print_hash_value);
    transparent_crc(p_1469->g_533.s5, "p_1469->g_533.s5", print_hash_value);
    transparent_crc(p_1469->g_533.s6, "p_1469->g_533.s6", print_hash_value);
    transparent_crc(p_1469->g_533.s7, "p_1469->g_533.s7", print_hash_value);
    transparent_crc(p_1469->g_533.s8, "p_1469->g_533.s8", print_hash_value);
    transparent_crc(p_1469->g_533.s9, "p_1469->g_533.s9", print_hash_value);
    transparent_crc(p_1469->g_533.sa, "p_1469->g_533.sa", print_hash_value);
    transparent_crc(p_1469->g_533.sb, "p_1469->g_533.sb", print_hash_value);
    transparent_crc(p_1469->g_533.sc, "p_1469->g_533.sc", print_hash_value);
    transparent_crc(p_1469->g_533.sd, "p_1469->g_533.sd", print_hash_value);
    transparent_crc(p_1469->g_533.se, "p_1469->g_533.se", print_hash_value);
    transparent_crc(p_1469->g_533.sf, "p_1469->g_533.sf", print_hash_value);
    transparent_crc(p_1469->g_537.x, "p_1469->g_537.x", print_hash_value);
    transparent_crc(p_1469->g_537.y, "p_1469->g_537.y", print_hash_value);
    transparent_crc(p_1469->g_541.s0, "p_1469->g_541.s0", print_hash_value);
    transparent_crc(p_1469->g_541.s1, "p_1469->g_541.s1", print_hash_value);
    transparent_crc(p_1469->g_541.s2, "p_1469->g_541.s2", print_hash_value);
    transparent_crc(p_1469->g_541.s3, "p_1469->g_541.s3", print_hash_value);
    transparent_crc(p_1469->g_541.s4, "p_1469->g_541.s4", print_hash_value);
    transparent_crc(p_1469->g_541.s5, "p_1469->g_541.s5", print_hash_value);
    transparent_crc(p_1469->g_541.s6, "p_1469->g_541.s6", print_hash_value);
    transparent_crc(p_1469->g_541.s7, "p_1469->g_541.s7", print_hash_value);
    transparent_crc(p_1469->g_554.x, "p_1469->g_554.x", print_hash_value);
    transparent_crc(p_1469->g_554.y, "p_1469->g_554.y", print_hash_value);
    transparent_crc(p_1469->g_555.x, "p_1469->g_555.x", print_hash_value);
    transparent_crc(p_1469->g_555.y, "p_1469->g_555.y", print_hash_value);
    transparent_crc(p_1469->g_556.x, "p_1469->g_556.x", print_hash_value);
    transparent_crc(p_1469->g_556.y, "p_1469->g_556.y", print_hash_value);
    transparent_crc(p_1469->g_557.s0, "p_1469->g_557.s0", print_hash_value);
    transparent_crc(p_1469->g_557.s1, "p_1469->g_557.s1", print_hash_value);
    transparent_crc(p_1469->g_557.s2, "p_1469->g_557.s2", print_hash_value);
    transparent_crc(p_1469->g_557.s3, "p_1469->g_557.s3", print_hash_value);
    transparent_crc(p_1469->g_557.s4, "p_1469->g_557.s4", print_hash_value);
    transparent_crc(p_1469->g_557.s5, "p_1469->g_557.s5", print_hash_value);
    transparent_crc(p_1469->g_557.s6, "p_1469->g_557.s6", print_hash_value);
    transparent_crc(p_1469->g_557.s7, "p_1469->g_557.s7", print_hash_value);
    transparent_crc(p_1469->g_557.s8, "p_1469->g_557.s8", print_hash_value);
    transparent_crc(p_1469->g_557.s9, "p_1469->g_557.s9", print_hash_value);
    transparent_crc(p_1469->g_557.sa, "p_1469->g_557.sa", print_hash_value);
    transparent_crc(p_1469->g_557.sb, "p_1469->g_557.sb", print_hash_value);
    transparent_crc(p_1469->g_557.sc, "p_1469->g_557.sc", print_hash_value);
    transparent_crc(p_1469->g_557.sd, "p_1469->g_557.sd", print_hash_value);
    transparent_crc(p_1469->g_557.se, "p_1469->g_557.se", print_hash_value);
    transparent_crc(p_1469->g_557.sf, "p_1469->g_557.sf", print_hash_value);
    transparent_crc(p_1469->g_558.s0, "p_1469->g_558.s0", print_hash_value);
    transparent_crc(p_1469->g_558.s1, "p_1469->g_558.s1", print_hash_value);
    transparent_crc(p_1469->g_558.s2, "p_1469->g_558.s2", print_hash_value);
    transparent_crc(p_1469->g_558.s3, "p_1469->g_558.s3", print_hash_value);
    transparent_crc(p_1469->g_558.s4, "p_1469->g_558.s4", print_hash_value);
    transparent_crc(p_1469->g_558.s5, "p_1469->g_558.s5", print_hash_value);
    transparent_crc(p_1469->g_558.s6, "p_1469->g_558.s6", print_hash_value);
    transparent_crc(p_1469->g_558.s7, "p_1469->g_558.s7", print_hash_value);
    transparent_crc(p_1469->g_569, "p_1469->g_569", print_hash_value);
    transparent_crc(p_1469->g_584, "p_1469->g_584", print_hash_value);
    transparent_crc(p_1469->g_605.x, "p_1469->g_605.x", print_hash_value);
    transparent_crc(p_1469->g_605.y, "p_1469->g_605.y", print_hash_value);
    transparent_crc(p_1469->g_605.z, "p_1469->g_605.z", print_hash_value);
    transparent_crc(p_1469->g_605.w, "p_1469->g_605.w", print_hash_value);
    transparent_crc(p_1469->g_711.x, "p_1469->g_711.x", print_hash_value);
    transparent_crc(p_1469->g_711.y, "p_1469->g_711.y", print_hash_value);
    transparent_crc(p_1469->g_711.z, "p_1469->g_711.z", print_hash_value);
    transparent_crc(p_1469->g_711.w, "p_1469->g_711.w", print_hash_value);
    transparent_crc(p_1469->g_712.s0, "p_1469->g_712.s0", print_hash_value);
    transparent_crc(p_1469->g_712.s1, "p_1469->g_712.s1", print_hash_value);
    transparent_crc(p_1469->g_712.s2, "p_1469->g_712.s2", print_hash_value);
    transparent_crc(p_1469->g_712.s3, "p_1469->g_712.s3", print_hash_value);
    transparent_crc(p_1469->g_712.s4, "p_1469->g_712.s4", print_hash_value);
    transparent_crc(p_1469->g_712.s5, "p_1469->g_712.s5", print_hash_value);
    transparent_crc(p_1469->g_712.s6, "p_1469->g_712.s6", print_hash_value);
    transparent_crc(p_1469->g_712.s7, "p_1469->g_712.s7", print_hash_value);
    transparent_crc(p_1469->g_722.x, "p_1469->g_722.x", print_hash_value);
    transparent_crc(p_1469->g_722.y, "p_1469->g_722.y", print_hash_value);
    transparent_crc(p_1469->g_779.s0, "p_1469->g_779.s0", print_hash_value);
    transparent_crc(p_1469->g_779.s1, "p_1469->g_779.s1", print_hash_value);
    transparent_crc(p_1469->g_779.s2, "p_1469->g_779.s2", print_hash_value);
    transparent_crc(p_1469->g_779.s3, "p_1469->g_779.s3", print_hash_value);
    transparent_crc(p_1469->g_779.s4, "p_1469->g_779.s4", print_hash_value);
    transparent_crc(p_1469->g_779.s5, "p_1469->g_779.s5", print_hash_value);
    transparent_crc(p_1469->g_779.s6, "p_1469->g_779.s6", print_hash_value);
    transparent_crc(p_1469->g_779.s7, "p_1469->g_779.s7", print_hash_value);
    transparent_crc(p_1469->g_830.s0, "p_1469->g_830.s0", print_hash_value);
    transparent_crc(p_1469->g_830.s1, "p_1469->g_830.s1", print_hash_value);
    transparent_crc(p_1469->g_830.s2, "p_1469->g_830.s2", print_hash_value);
    transparent_crc(p_1469->g_830.s3, "p_1469->g_830.s3", print_hash_value);
    transparent_crc(p_1469->g_830.s4, "p_1469->g_830.s4", print_hash_value);
    transparent_crc(p_1469->g_830.s5, "p_1469->g_830.s5", print_hash_value);
    transparent_crc(p_1469->g_830.s6, "p_1469->g_830.s6", print_hash_value);
    transparent_crc(p_1469->g_830.s7, "p_1469->g_830.s7", print_hash_value);
    transparent_crc(p_1469->g_913.s0, "p_1469->g_913.s0", print_hash_value);
    transparent_crc(p_1469->g_913.s1, "p_1469->g_913.s1", print_hash_value);
    transparent_crc(p_1469->g_913.s2, "p_1469->g_913.s2", print_hash_value);
    transparent_crc(p_1469->g_913.s3, "p_1469->g_913.s3", print_hash_value);
    transparent_crc(p_1469->g_913.s4, "p_1469->g_913.s4", print_hash_value);
    transparent_crc(p_1469->g_913.s5, "p_1469->g_913.s5", print_hash_value);
    transparent_crc(p_1469->g_913.s6, "p_1469->g_913.s6", print_hash_value);
    transparent_crc(p_1469->g_913.s7, "p_1469->g_913.s7", print_hash_value);
    transparent_crc(p_1469->g_925, "p_1469->g_925", print_hash_value);
    transparent_crc(p_1469->g_964.x, "p_1469->g_964.x", print_hash_value);
    transparent_crc(p_1469->g_964.y, "p_1469->g_964.y", print_hash_value);
    transparent_crc(p_1469->g_987.s0, "p_1469->g_987.s0", print_hash_value);
    transparent_crc(p_1469->g_987.s1, "p_1469->g_987.s1", print_hash_value);
    transparent_crc(p_1469->g_987.s2, "p_1469->g_987.s2", print_hash_value);
    transparent_crc(p_1469->g_987.s3, "p_1469->g_987.s3", print_hash_value);
    transparent_crc(p_1469->g_987.s4, "p_1469->g_987.s4", print_hash_value);
    transparent_crc(p_1469->g_987.s5, "p_1469->g_987.s5", print_hash_value);
    transparent_crc(p_1469->g_987.s6, "p_1469->g_987.s6", print_hash_value);
    transparent_crc(p_1469->g_987.s7, "p_1469->g_987.s7", print_hash_value);
    transparent_crc(p_1469->g_987.s8, "p_1469->g_987.s8", print_hash_value);
    transparent_crc(p_1469->g_987.s9, "p_1469->g_987.s9", print_hash_value);
    transparent_crc(p_1469->g_987.sa, "p_1469->g_987.sa", print_hash_value);
    transparent_crc(p_1469->g_987.sb, "p_1469->g_987.sb", print_hash_value);
    transparent_crc(p_1469->g_987.sc, "p_1469->g_987.sc", print_hash_value);
    transparent_crc(p_1469->g_987.sd, "p_1469->g_987.sd", print_hash_value);
    transparent_crc(p_1469->g_987.se, "p_1469->g_987.se", print_hash_value);
    transparent_crc(p_1469->g_987.sf, "p_1469->g_987.sf", print_hash_value);
    transparent_crc(p_1469->g_993.s0, "p_1469->g_993.s0", print_hash_value);
    transparent_crc(p_1469->g_993.s1, "p_1469->g_993.s1", print_hash_value);
    transparent_crc(p_1469->g_993.s2, "p_1469->g_993.s2", print_hash_value);
    transparent_crc(p_1469->g_993.s3, "p_1469->g_993.s3", print_hash_value);
    transparent_crc(p_1469->g_993.s4, "p_1469->g_993.s4", print_hash_value);
    transparent_crc(p_1469->g_993.s5, "p_1469->g_993.s5", print_hash_value);
    transparent_crc(p_1469->g_993.s6, "p_1469->g_993.s6", print_hash_value);
    transparent_crc(p_1469->g_993.s7, "p_1469->g_993.s7", print_hash_value);
    transparent_crc(p_1469->g_993.s8, "p_1469->g_993.s8", print_hash_value);
    transparent_crc(p_1469->g_993.s9, "p_1469->g_993.s9", print_hash_value);
    transparent_crc(p_1469->g_993.sa, "p_1469->g_993.sa", print_hash_value);
    transparent_crc(p_1469->g_993.sb, "p_1469->g_993.sb", print_hash_value);
    transparent_crc(p_1469->g_993.sc, "p_1469->g_993.sc", print_hash_value);
    transparent_crc(p_1469->g_993.sd, "p_1469->g_993.sd", print_hash_value);
    transparent_crc(p_1469->g_993.se, "p_1469->g_993.se", print_hash_value);
    transparent_crc(p_1469->g_993.sf, "p_1469->g_993.sf", print_hash_value);
    transparent_crc(p_1469->g_1023.s0, "p_1469->g_1023.s0", print_hash_value);
    transparent_crc(p_1469->g_1023.s1, "p_1469->g_1023.s1", print_hash_value);
    transparent_crc(p_1469->g_1023.s2, "p_1469->g_1023.s2", print_hash_value);
    transparent_crc(p_1469->g_1023.s3, "p_1469->g_1023.s3", print_hash_value);
    transparent_crc(p_1469->g_1023.s4, "p_1469->g_1023.s4", print_hash_value);
    transparent_crc(p_1469->g_1023.s5, "p_1469->g_1023.s5", print_hash_value);
    transparent_crc(p_1469->g_1023.s6, "p_1469->g_1023.s6", print_hash_value);
    transparent_crc(p_1469->g_1023.s7, "p_1469->g_1023.s7", print_hash_value);
    transparent_crc(p_1469->g_1024.s0, "p_1469->g_1024.s0", print_hash_value);
    transparent_crc(p_1469->g_1024.s1, "p_1469->g_1024.s1", print_hash_value);
    transparent_crc(p_1469->g_1024.s2, "p_1469->g_1024.s2", print_hash_value);
    transparent_crc(p_1469->g_1024.s3, "p_1469->g_1024.s3", print_hash_value);
    transparent_crc(p_1469->g_1024.s4, "p_1469->g_1024.s4", print_hash_value);
    transparent_crc(p_1469->g_1024.s5, "p_1469->g_1024.s5", print_hash_value);
    transparent_crc(p_1469->g_1024.s6, "p_1469->g_1024.s6", print_hash_value);
    transparent_crc(p_1469->g_1024.s7, "p_1469->g_1024.s7", print_hash_value);
    transparent_crc(p_1469->g_1059, "p_1469->g_1059", print_hash_value);
    transparent_crc(p_1469->g_1270, "p_1469->g_1270", print_hash_value);
    transparent_crc(p_1469->g_1282.x, "p_1469->g_1282.x", print_hash_value);
    transparent_crc(p_1469->g_1282.y, "p_1469->g_1282.y", print_hash_value);
    transparent_crc(p_1469->g_1295.x, "p_1469->g_1295.x", print_hash_value);
    transparent_crc(p_1469->g_1295.y, "p_1469->g_1295.y", print_hash_value);
    transparent_crc(p_1469->g_1295.z, "p_1469->g_1295.z", print_hash_value);
    transparent_crc(p_1469->g_1295.w, "p_1469->g_1295.w", print_hash_value);
    transparent_crc(p_1469->g_1297.x, "p_1469->g_1297.x", print_hash_value);
    transparent_crc(p_1469->g_1297.y, "p_1469->g_1297.y", print_hash_value);
    transparent_crc(p_1469->g_1316.s0, "p_1469->g_1316.s0", print_hash_value);
    transparent_crc(p_1469->g_1316.s1, "p_1469->g_1316.s1", print_hash_value);
    transparent_crc(p_1469->g_1316.s2, "p_1469->g_1316.s2", print_hash_value);
    transparent_crc(p_1469->g_1316.s3, "p_1469->g_1316.s3", print_hash_value);
    transparent_crc(p_1469->g_1316.s4, "p_1469->g_1316.s4", print_hash_value);
    transparent_crc(p_1469->g_1316.s5, "p_1469->g_1316.s5", print_hash_value);
    transparent_crc(p_1469->g_1316.s6, "p_1469->g_1316.s6", print_hash_value);
    transparent_crc(p_1469->g_1316.s7, "p_1469->g_1316.s7", print_hash_value);
    transparent_crc(p_1469->g_1361.x, "p_1469->g_1361.x", print_hash_value);
    transparent_crc(p_1469->g_1361.y, "p_1469->g_1361.y", print_hash_value);
    transparent_crc(p_1469->g_1361.z, "p_1469->g_1361.z", print_hash_value);
    transparent_crc(p_1469->g_1361.w, "p_1469->g_1361.w", print_hash_value);
    transparent_crc(p_1469->g_1365.x, "p_1469->g_1365.x", print_hash_value);
    transparent_crc(p_1469->g_1365.y, "p_1469->g_1365.y", print_hash_value);
    transparent_crc(p_1469->g_1450.x, "p_1469->g_1450.x", print_hash_value);
    transparent_crc(p_1469->g_1450.y, "p_1469->g_1450.y", print_hash_value);
    transparent_crc(p_1469->g_1452.x, "p_1469->g_1452.x", print_hash_value);
    transparent_crc(p_1469->g_1452.y, "p_1469->g_1452.y", print_hash_value);
    transparent_crc(p_1469->g_1453.s0, "p_1469->g_1453.s0", print_hash_value);
    transparent_crc(p_1469->g_1453.s1, "p_1469->g_1453.s1", print_hash_value);
    transparent_crc(p_1469->g_1453.s2, "p_1469->g_1453.s2", print_hash_value);
    transparent_crc(p_1469->g_1453.s3, "p_1469->g_1453.s3", print_hash_value);
    transparent_crc(p_1469->g_1453.s4, "p_1469->g_1453.s4", print_hash_value);
    transparent_crc(p_1469->g_1453.s5, "p_1469->g_1453.s5", print_hash_value);
    transparent_crc(p_1469->g_1453.s6, "p_1469->g_1453.s6", print_hash_value);
    transparent_crc(p_1469->g_1453.s7, "p_1469->g_1453.s7", print_hash_value);
    transparent_crc(p_1469->g_1453.s8, "p_1469->g_1453.s8", print_hash_value);
    transparent_crc(p_1469->g_1453.s9, "p_1469->g_1453.s9", print_hash_value);
    transparent_crc(p_1469->g_1453.sa, "p_1469->g_1453.sa", print_hash_value);
    transparent_crc(p_1469->g_1453.sb, "p_1469->g_1453.sb", print_hash_value);
    transparent_crc(p_1469->g_1453.sc, "p_1469->g_1453.sc", print_hash_value);
    transparent_crc(p_1469->g_1453.sd, "p_1469->g_1453.sd", print_hash_value);
    transparent_crc(p_1469->g_1453.se, "p_1469->g_1453.se", print_hash_value);
    transparent_crc(p_1469->g_1453.sf, "p_1469->g_1453.sf", print_hash_value);
    transparent_crc(p_1469->g_1458.x, "p_1469->g_1458.x", print_hash_value);
    transparent_crc(p_1469->g_1458.y, "p_1469->g_1458.y", print_hash_value);
    transparent_crc(p_1469->g_1458.z, "p_1469->g_1458.z", print_hash_value);
    transparent_crc(p_1469->g_1458.w, "p_1469->g_1458.w", print_hash_value);
    transparent_crc(p_1469->v_collective, "p_1469->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 75; i++)
            transparent_crc(p_1469->g_special_values[i + 75 * get_linear_group_id()], "p_1469->g_special_values[i + 75 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 75; i++)
            transparent_crc(p_1469->l_special_values[i], "p_1469->l_special_values[i]", print_hash_value);
    transparent_crc(p_1469->l_comm_values[get_linear_local_id()], "p_1469->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1469->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()], "p_1469->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
