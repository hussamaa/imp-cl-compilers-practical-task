// --atomics 49 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 6,96,7 -l 1,16,7
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

__constant uint32_t permutations[10][112] = {
{28,84,104,87,50,16,92,90,111,4,22,61,94,96,47,15,51,56,37,34,32,5,107,38,108,75,99,66,69,98,89,76,6,35,54,2,110,102,13,83,20,62,100,93,33,9,101,64,48,73,71,42,86,0,97,85,31,68,14,45,26,12,39,95,106,65,11,3,88,81,70,79,18,55,63,25,8,19,91,58,41,82,105,80,78,40,77,60,21,1,10,46,74,52,7,30,44,53,57,72,27,23,43,36,29,67,24,109,59,17,103,49}, // permutation 0
{26,92,66,10,39,52,90,69,105,4,84,6,17,16,55,48,24,54,89,32,50,64,31,88,100,33,96,102,25,5,61,8,28,68,41,38,3,63,95,67,18,45,49,20,7,107,85,29,104,56,14,94,106,101,70,19,83,111,0,15,71,80,2,30,91,77,87,97,99,53,108,75,59,51,42,72,11,46,76,98,58,12,1,23,44,81,47,9,27,43,65,62,93,40,36,78,79,22,86,21,34,13,82,35,60,103,57,74,37,109,110,73}, // permutation 1
{51,38,88,99,29,103,37,53,36,45,20,43,50,98,42,81,10,22,44,89,17,56,18,71,101,87,85,79,83,54,27,74,15,2,78,48,33,90,13,58,68,64,40,59,66,102,7,80,28,96,111,106,100,23,92,5,84,93,110,86,4,107,19,62,26,30,72,67,55,47,0,73,94,91,61,104,11,49,21,35,63,70,57,25,109,41,16,65,24,105,3,12,46,76,95,31,14,52,69,97,1,34,9,108,60,32,6,75,77,8,82,39}, // permutation 2
{69,54,31,103,48,92,32,47,13,1,4,34,87,65,82,61,27,95,53,83,12,8,21,17,28,77,35,106,62,23,52,24,88,7,110,94,56,109,90,72,30,5,29,80,49,96,111,104,78,14,79,105,93,99,42,84,33,58,73,101,64,67,40,9,75,11,45,59,71,102,44,22,41,85,66,89,76,63,37,97,108,15,38,100,16,91,55,74,98,2,0,50,57,107,19,36,6,26,46,20,39,25,86,3,60,68,10,18,51,43,81,70}, // permutation 3
{24,56,74,26,19,49,96,9,60,13,53,10,95,65,35,98,47,76,22,15,84,61,20,44,16,52,92,63,99,45,51,40,77,90,25,110,7,83,111,87,91,105,85,38,8,42,57,68,39,108,80,75,23,12,79,21,104,28,101,55,36,6,43,32,34,72,41,97,62,50,71,46,59,54,100,82,89,4,94,31,93,48,37,14,109,5,102,73,27,78,106,18,11,29,66,58,2,64,67,33,69,70,81,0,107,86,3,30,88,17,103,1}, // permutation 4
{39,25,32,91,34,13,8,52,99,2,107,63,31,51,72,106,29,5,10,4,84,20,96,64,102,105,18,53,14,22,59,33,74,69,1,36,95,100,90,98,30,68,77,55,80,16,40,92,54,7,3,11,81,108,45,79,93,15,56,35,103,104,83,50,67,73,44,0,66,89,23,47,58,70,109,61,19,38,17,27,76,71,111,6,88,82,46,87,9,78,48,85,28,37,24,94,65,43,62,101,86,97,75,49,110,57,26,42,60,21,12,41}, // permutation 5
{12,63,33,42,82,28,96,103,39,69,86,48,76,11,0,59,64,84,2,95,27,75,19,20,73,31,67,101,8,30,97,7,65,6,54,15,58,110,49,34,109,37,32,13,80,3,36,74,44,111,18,104,66,4,81,55,29,43,53,16,17,23,56,50,93,41,92,70,105,87,21,108,88,40,100,89,25,52,38,85,62,94,102,14,26,61,9,10,22,1,51,5,72,83,106,68,77,71,60,98,99,78,90,47,24,79,45,57,107,35,46,91}, // permutation 6
{4,65,32,96,14,51,42,50,52,64,8,7,57,34,63,40,75,99,98,97,36,23,9,83,30,111,95,93,89,10,41,102,0,43,53,59,49,22,19,106,108,101,3,69,107,28,11,56,2,13,29,5,88,61,109,54,94,81,82,91,15,6,31,110,20,78,74,35,48,47,45,76,103,104,25,38,24,55,87,58,71,70,46,16,12,86,72,80,105,18,85,1,100,84,62,21,39,27,44,17,33,77,90,79,60,92,73,26,37,68,67,66}, // permutation 7
{108,61,31,91,67,37,65,32,36,64,7,80,29,100,8,85,82,19,52,62,47,55,16,25,81,90,13,15,6,2,57,17,60,12,70,41,75,43,97,38,104,103,45,4,22,89,42,94,77,93,63,46,53,101,27,83,86,87,58,96,110,40,44,34,10,106,33,51,92,30,20,78,24,21,68,1,49,18,102,84,3,26,0,79,107,111,73,39,35,95,105,74,11,48,88,72,28,76,59,98,5,109,99,23,69,56,14,9,50,66,54,71}, // permutation 8
{10,23,47,22,79,85,30,65,96,19,18,109,81,94,89,82,84,64,16,52,17,3,43,49,32,87,88,37,101,105,7,56,66,54,111,63,12,41,29,31,40,75,95,77,86,80,78,57,108,2,51,60,39,62,44,20,13,34,58,24,91,72,48,8,38,15,99,0,110,102,92,55,25,76,106,67,42,93,71,9,11,90,26,103,107,69,28,36,46,1,68,14,21,50,97,4,59,98,35,74,45,73,33,61,83,53,70,100,104,5,6,27} // permutation 9
};

// Seed: 661251894

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    int8_t g_15;
    int32_t g_23;
    uint8_t g_25;
    int32_t g_67;
    VECTOR(int32_t, 8) g_82;
    int32_t **g_93;
    volatile VECTOR(uint8_t, 8) g_132;
    volatile VECTOR(uint8_t, 16) g_133;
    int16_t g_152;
    uint16_t g_155;
    uint64_t g_183;
    int32_t * volatile g_185;
    int32_t * volatile g_186;
    VECTOR(int32_t, 16) g_189;
    volatile int32_t g_199;
    uint32_t g_211;
    uint32_t *g_210;
    uint32_t **g_209;
    uint8_t g_223;
    int32_t *g_268;
    int32_t ** volatile g_267;
    VECTOR(int32_t, 16) g_270;
    VECTOR(uint32_t, 16) g_296;
    VECTOR(int32_t, 4) g_301;
    VECTOR(int32_t, 4) g_303;
    VECTOR(uint32_t, 2) g_318;
    int8_t *g_322;
    int8_t **g_321;
    int8_t ***g_320;
    volatile int8_t * volatile * volatile g_325;
    volatile int8_t * volatile * volatile *g_324;
    VECTOR(uint32_t, 2) g_329;
    int32_t * volatile g_333[4];
    int32_t * volatile g_334;
    int32_t * volatile g_336;
    int32_t g_461;
    int32_t *g_460[10][3];
    volatile VECTOR(uint16_t, 8) g_522;
    volatile VECTOR(uint16_t, 4) g_529;
    VECTOR(int8_t, 2) g_537;
    uint32_t g_546;
    int32_t g_554;
    int8_t * volatile *g_573;
    int8_t * volatile * volatile *g_572;
    int8_t * volatile * volatile * volatile * volatile g_571[9][8];
    VECTOR(uint32_t, 8) g_574;
    volatile VECTOR(int32_t, 16) g_588;
    VECTOR(uint64_t, 8) g_594;
    uint16_t g_600;
    uint16_t *g_611[7][8][4];
    uint16_t **g_610;
    int16_t *g_620;
    int16_t * volatile *g_619[3][10];
    VECTOR(uint8_t, 2) g_626;
    int64_t g_645;
    int16_t g_657;
    VECTOR(int32_t, 16) g_665;
    volatile VECTOR(int16_t, 8) g_685;
    volatile int64_t g_702;
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
int64_t  func_1(struct S0 * p_714);
int32_t  func_2(uint64_t  p_3, uint32_t  p_4, int8_t  p_5, struct S0 * p_714);
int8_t  func_7(uint8_t  p_8, uint16_t  p_9, int8_t  p_10, uint32_t  p_11, struct S0 * p_714);
int32_t * func_26(uint16_t  p_27, int32_t * p_28, int32_t  p_29, int32_t  p_30, uint32_t  p_31, struct S0 * p_714);
int16_t  func_41(int32_t * p_42, int32_t * p_43, int32_t * p_44, struct S0 * p_714);
uint64_t  func_45(int32_t  p_46, int32_t  p_47, int8_t * p_48, uint8_t * p_49, int32_t * p_50, struct S0 * p_714);
int8_t * func_51(int32_t * p_52, struct S0 * p_714);
int32_t  func_68(uint8_t  p_69, int64_t  p_70, struct S0 * p_714);
int64_t  func_84(int64_t  p_85, struct S0 * p_714);
int64_t  func_86(uint8_t  p_87, uint64_t  p_88, struct S0 * p_714);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_714->l_comm_values p_714->g_15 p_714->g_comm_values p_714->g_23 p_714->g_25 p_714->g_67 p_714->g_82 p_714->g_93 p_714->g_132 p_714->g_133 p_714->g_155 p_714->g_152 p_714->g_186 p_714->g_189 p_714->g_209 p_714->g_223 p_714->g_210 p_714->g_211 p_714->g_267 p_714->g_270 p_714->g_183 p_714->g_296 p_714->g_301 p_714->g_303 p_714->g_318 p_714->g_320 p_714->g_324 p_714->g_322 p_714->g_321 p_714->g_329 p_714->g_268 p_714->g_522 p_714->g_529 p_714->g_537 p_714->g_571 p_714->g_574 p_714->g_588 p_714->g_546 p_714->g_594 p_714->g_600 p_714->g_610 p_714->g_619 p_714->g_572 p_714->g_573 p_714->g_620 p_714->g_626 p_714->g_461 p_714->g_645 p_714->g_665 p_714->g_685
 * writes: p_714->g_23 p_714->g_25 p_714->g_15 p_714->g_67 p_714->g_93 p_714->g_152 p_714->g_comm_values p_714->g_155 p_714->g_183 p_714->g_223 p_714->g_268 p_714->g_320 p_714->g_460 p_714->g_211 p_714->g_546 p_714->g_554 p_714->g_645 p_714->g_665
 */
int64_t  func_1(struct S0 * p_714)
{ /* block id: 4 */
    int32_t l_6[7] = {0x43D4E703L,0x43D4E703L,0x43D4E703L,0x43D4E703L,0x43D4E703L,0x43D4E703L,0x43D4E703L};
    int8_t *l_14[5];
    int32_t l_16 = 7L;
    int32_t *l_21 = (void*)0;
    int32_t *l_22 = &p_714->g_23;
    uint8_t *l_24 = &p_714->g_25;
    int32_t *l_664 = (void*)0;
    int32_t *l_666[3][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    int64_t l_669 = 0x2ABC69026184EE6EL;
    int8_t l_681 = 0L;
    VECTOR(int16_t, 2) l_684 = (VECTOR(int16_t, 2))(2L, 5L);
    int32_t l_686 = 1L;
    int8_t l_695 = 8L;
    int64_t l_699[2];
    int16_t l_708 = 0x1A4BL;
    int64_t l_709 = 1L;
    VECTOR(uint8_t, 8) l_710 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL);
    int8_t l_713 = 4L;
    int i, j;
    for (i = 0; i < 5; i++)
        l_14[i] = &p_714->g_15;
    for (i = 0; i < 2; i++)
        l_699[i] = 0L;
    if ((p_714->g_665.s0 ^= func_2(p_714->l_comm_values[(safe_mod_func_uint32_t_u_u(p_714->tid, 112))], ((*p_714->g_210) = ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(7UL, 5UL, 0x4800FA72L, 0x5FCC58A0L)).yzzyywzx)).s0 ^ (((l_6[4] < l_6[4]) == func_7(((*l_24) = ((VECTOR(uint8_t, 4))(abs(((VECTOR(uint8_t, 16))(((safe_mod_func_int8_t_s_s((l_16 = l_6[2]), (safe_add_func_int8_t_s_s(p_714->g_15, ((((4UL >= (safe_add_func_uint16_t_u_u((((*l_22) = (&p_714->g_15 != l_14[1])) , p_714->l_comm_values[(safe_mod_func_uint32_t_u_u(p_714->tid, 112))]), p_714->g_comm_values[p_714->tid]))) , (*l_22)) , 0x4BL) && 0x9CL))))) , 0xC6L), ((VECTOR(uint8_t, 8))(0xD8L)), 255UL, 0xDFL, GROUP_DIVERGE(2, 1), 4UL, p_714->g_comm_values[p_714->tid], 1UL, 0xE5L)).sde2c))).z), p_714->g_15, p_714->g_15, l_6[4], p_714)) , FAKE_DIVERGE(p_714->global_2_offset, get_global_id(2), 10))) & 0x4093L)), l_6[4], p_714)))
    { /* block id: 318 */
        int64_t l_667 = 0x3340C04A8F039361L;
        int32_t l_668[2];
        uint32_t l_670[6][3][7] = {{{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL},{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL},{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL}},{{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL},{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL},{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL}},{{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL},{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL},{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL}},{{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL},{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL},{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL}},{{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL},{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL},{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL}},{{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL},{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL},{4294967292UL,1UL,0xD3804E8EL,4294967287UL,0xAFEB1AFCL,0x5B7AD8FCL,1UL}}};
        uint16_t *l_687 = (void*)0;
        uint16_t *l_688[2][3] = {{&p_714->g_600,&p_714->g_600,&p_714->g_600},{&p_714->g_600,&p_714->g_600,&p_714->g_600}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_668[i] = 9L;
        (*p_714->g_93) = &l_16;
        l_670[2][1][6]--;
        (*p_714->g_268) = ((l_668[1] = ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0x597DL, ((safe_rshift_func_uint16_t_u_s(((((p_714->g_67 , ((l_667 || (safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_714->group_0_offset, get_group_id(0), 10), (safe_rshift_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s(l_667, (9UL >= l_681))) > (((safe_add_func_int32_t_s_s(0x29E566D6L, ((*p_714->g_620) < ((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_684.xyyxxxxyyxxyxxxy)))), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(p_714->g_685.s34577607)).s4722251446603301))))).se))) && ((1L | ((((1UL > (*p_714->g_186)) || 0UL) != l_668[1]) & l_668[1])) & 3L)) != FAKE_DIVERGE(p_714->group_0_offset, get_group_id(0), 10))) , (*l_22)), 3))))) , (*p_714->g_322))) != l_667) == 0xD0205B39BDEF34B8L) > l_668[0]), 2)) < l_686), 0x1355L, 0x6066L)).zwxwxzxx)).s3) > l_670[2][1][6]);
        (*l_22) ^= ((-1L) == (((&l_16 == &l_16) < GROUP_DIVERGE(2, 1)) & (safe_rshift_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), p_714->g_329.x))));
    }
    else
    { /* block id: 324 */
        int32_t l_691 = 0x4191CB1BL;
        int32_t l_692 = (-2L);
        int32_t l_693 = 0x7058AF8FL;
        int32_t l_694 = (-9L);
        int32_t l_696 = (-9L);
        int32_t l_697 = 0x00383165L;
        int32_t l_698 = 0x28770A9FL;
        int32_t l_700 = 0x58828B1EL;
        int32_t l_701[5][2][7] = {{{0x5D0CD937L,(-2L),(-7L),0x5A647F8AL,(-7L),(-2L),0x5D0CD937L},{0x5D0CD937L,(-2L),(-7L),0x5A647F8AL,(-7L),(-2L),0x5D0CD937L}},{{0x5D0CD937L,(-2L),(-7L),0x5A647F8AL,(-7L),(-2L),0x5D0CD937L},{0x5D0CD937L,(-2L),(-7L),0x5A647F8AL,(-7L),(-2L),0x5D0CD937L}},{{0x5D0CD937L,(-2L),(-7L),0x5A647F8AL,(-7L),(-2L),0x5D0CD937L},{0x5D0CD937L,(-2L),(-7L),0x5A647F8AL,(-7L),(-2L),0x5D0CD937L}},{{0x5D0CD937L,(-2L),(-7L),0x5A647F8AL,(-7L),(-2L),0x5D0CD937L},{0x5D0CD937L,(-2L),(-7L),0x5A647F8AL,(-7L),(-2L),0x5D0CD937L}},{{0x5D0CD937L,(-2L),(-7L),0x5A647F8AL,(-7L),(-2L),0x5D0CD937L},{0x5D0CD937L,(-2L),(-7L),0x5A647F8AL,(-7L),(-2L),0x5D0CD937L}}};
        uint8_t l_703 = 255UL;
        int16_t l_706 = 0x1CA7L;
        int32_t l_707 = 0x66ECE080L;
        int i, j, k;
        l_703++;
        --l_710.s2;
    }
    return l_713;
}


/* ------------------------------------------ */
/* 
 * reads : p_714->g_67
 * writes:
 */
int32_t  func_2(uint64_t  p_3, uint32_t  p_4, int8_t  p_5, struct S0 * p_714)
{ /* block id: 313 */
    int32_t l_648 = 0x14CDA965L;
    int32_t l_649 = 4L;
    int32_t *l_650 = &p_714->g_461;
    int32_t *l_651 = &p_714->g_67;
    int32_t *l_652 = &p_714->g_67;
    int32_t *l_653 = &p_714->g_23;
    int32_t *l_654 = &l_649;
    int32_t *l_655 = (void*)0;
    int32_t *l_656[9][5] = {{(void*)0,&l_649,&l_649,(void*)0,&l_649},{(void*)0,&l_649,&l_649,(void*)0,&l_649},{(void*)0,&l_649,&l_649,(void*)0,&l_649},{(void*)0,&l_649,&l_649,(void*)0,&l_649},{(void*)0,&l_649,&l_649,(void*)0,&l_649},{(void*)0,&l_649,&l_649,(void*)0,&l_649},{(void*)0,&l_649,&l_649,(void*)0,&l_649},{(void*)0,&l_649,&l_649,(void*)0,&l_649},{(void*)0,&l_649,&l_649,(void*)0,&l_649}};
    int8_t l_658[5] = {0x61L,0x61L,0x61L,0x61L,0x61L};
    int32_t l_659[10][8][3] = {{{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L}},{{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L}},{{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L}},{{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L}},{{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L}},{{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L}},{{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L}},{{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L}},{{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L}},{{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L},{0L,0L,0x214EB069L}}};
    int64_t l_660 = 0x1E802E6FE4146D6CL;
    uint16_t l_661 = 0UL;
    int i, j, k;
    l_649 = (safe_lshift_func_int8_t_s_u(l_648, p_3));
    --l_661;
    return (*l_652);
}


/* ------------------------------------------ */
/* 
 * reads : p_714->g_25 p_714->g_23 p_714->g_15 p_714->l_comm_values p_714->g_67 p_714->g_82 p_714->g_93 p_714->g_comm_values p_714->g_132 p_714->g_133 p_714->g_155 p_714->g_152 p_714->g_186 p_714->g_189 p_714->g_209 p_714->g_223 p_714->g_210 p_714->g_211 p_714->g_267 p_714->g_270 p_714->g_183 p_714->g_296 p_714->g_301 p_714->g_303 p_714->g_318 p_714->g_320 p_714->g_324 p_714->g_322 p_714->g_321 p_714->g_329 p_714->g_268 p_714->g_522 p_714->g_529 p_714->g_537 p_714->g_571 p_714->g_574 p_714->g_588 p_714->g_546 p_714->g_594 p_714->g_600 p_714->g_610 p_714->g_619 p_714->g_572 p_714->g_573 p_714->g_620 p_714->g_626 p_714->g_461 p_714->g_645
 * writes: p_714->g_23 p_714->g_15 p_714->g_67 p_714->g_93 p_714->g_152 p_714->g_comm_values p_714->g_155 p_714->g_183 p_714->g_223 p_714->g_268 p_714->g_320 p_714->g_460 p_714->g_211 p_714->g_546 p_714->g_554 p_714->g_25 p_714->g_645
 */
int8_t  func_7(uint8_t  p_8, uint16_t  p_9, int8_t  p_10, uint32_t  p_11, struct S0 * p_714)
{ /* block id: 8 */
    VECTOR(uint8_t, 8) l_36 = (VECTOR(uint8_t, 8))(0xEAL, (VECTOR(uint8_t, 4))(0xEAL, (VECTOR(uint8_t, 2))(0xEAL, 249UL), 249UL), 249UL, 0xEAL, 249UL);
    int32_t *l_54 = &p_714->g_23;
    int32_t **l_53 = &l_54;
    int32_t *l_459 = (void*)0;
    int32_t **l_458[8][4] = {{&l_459,&l_459,(void*)0,&l_459},{&l_459,&l_459,(void*)0,&l_459},{&l_459,&l_459,(void*)0,&l_459},{&l_459,&l_459,(void*)0,&l_459},{&l_459,&l_459,(void*)0,&l_459},{&l_459,&l_459,(void*)0,&l_459},{&l_459,&l_459,(void*)0,&l_459},{&l_459,&l_459,(void*)0,&l_459}};
    VECTOR(uint8_t, 2) l_508 = (VECTOR(uint8_t, 2))(8UL, 248UL);
    VECTOR(int32_t, 16) l_520 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-1L)), (-1L)), (-1L), 8L, (-1L), (VECTOR(int32_t, 2))(8L, (-1L)), (VECTOR(int32_t, 2))(8L, (-1L)), 8L, (-1L), 8L, (-1L));
    VECTOR(int16_t, 4) l_521 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L));
    uint32_t l_530 = 0x562B0E5FL;
    int32_t ***l_565 = &l_458[4][0];
    int8_t ***l_581 = &p_714->g_321;
    int8_t ***l_590 = &p_714->g_321;
    int32_t l_593 = 0x7A337841L;
    int32_t l_601 = 0L;
    uint32_t l_603 = 4294967293UL;
    VECTOR(int8_t, 16) l_609 = (VECTOR(int8_t, 16))(0x13L, (VECTOR(int8_t, 4))(0x13L, (VECTOR(int8_t, 2))(0x13L, (-4L)), (-4L)), (-4L), 0x13L, (-4L), (VECTOR(int8_t, 2))(0x13L, (-4L)), (VECTOR(int8_t, 2))(0x13L, (-4L)), 0x13L, (-4L), 0x13L, (-4L));
    uint16_t **l_612 = &p_714->g_611[5][2][2];
    int8_t *l_638 = (void*)0;
    int8_t *l_639 = (void*)0;
    int8_t *l_640[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t l_641 = 0x8AB0L;
    int64_t *l_642 = (void*)0;
    int64_t *l_643 = (void*)0;
    int64_t *l_644[8][3][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int i, j, k;
    (*l_53) = func_26((safe_mod_func_int64_t_s_s(p_714->g_25, (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(l_36.s70)).odd, ((safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(((func_41((func_45(p_9, p_8, func_51(((*l_53) = &p_714->g_23), p_714), &p_714->g_25, (p_714->g_460[7][1] = p_714->g_210), p_714) , ((*p_714->g_267) = (*p_714->g_267))), &p_714->g_461, &p_714->g_461, p_714) | p_11) & p_714->g_318.y), p_714->g_189.s2)), p_11)) | p_714->g_303.w))))), &p_714->g_461, p_11, p_714->g_270.s2, p_11, p_714);
    for (p_714->g_152 = 0; (p_714->g_152 != (-1)); p_714->g_152 = safe_sub_func_int16_t_s_s(p_714->g_152, 8))
    { /* block id: 268 */
        VECTOR(uint8_t, 16) l_509 = (VECTOR(uint8_t, 16))(0x00L, (VECTOR(uint8_t, 4))(0x00L, (VECTOR(uint8_t, 2))(0x00L, 247UL), 247UL), 247UL, 0x00L, 247UL, (VECTOR(uint8_t, 2))(0x00L, 247UL), (VECTOR(uint8_t, 2))(0x00L, 247UL), 0x00L, 247UL, 0x00L, 247UL);
        VECTOR(int16_t, 16) l_542 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
        uint16_t *l_543 = &p_714->g_155;
        uint16_t *l_545 = &p_714->g_155;
        uint16_t **l_544 = &l_545;
        int64_t *l_547 = (void*)0;
        int64_t *l_548 = (void*)0;
        int64_t *l_549 = (void*)0;
        int64_t *l_550 = (void*)0;
        uint32_t l_551 = 4294967288UL;
        int32_t *l_552 = (void*)0;
        int32_t *l_553 = &p_714->g_554;
        int32_t l_556 = 0L;
        int32_t l_560[10][4][4] = {{{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)}},{{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)}},{{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)}},{{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)}},{{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)}},{{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)}},{{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)}},{{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)}},{{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)}},{{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)},{(-1L),(-1L),0x38CAA767L,(-8L)}}};
        uint32_t l_562 = 4294967289UL;
        VECTOR(int16_t, 4) l_568 = (VECTOR(int16_t, 4))(0x372AL, (VECTOR(int16_t, 2))(0x372AL, (-10L)), (-10L));
        int32_t ***l_569 = &l_458[6][1];
        int8_t ****l_570[6][8][5] = {{{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0}},{{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0}},{{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0}},{{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0}},{{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0}},{{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0},{&p_714->g_320,&p_714->g_320,(void*)0,(void*)0,(void*)0}}};
        int8_t l_578 = 0x15L;
        int16_t l_595 = 0x7778L;
        int i, j, k;
        (*l_54) = 0x03288781L;
        (*l_53) = (*p_714->g_267);
        if (((safe_rshift_func_int16_t_s_s(0x6D03L, (safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_508.xyxxyyyy)).s0, ((VECTOR(uint8_t, 4))(l_509.s4c26)).x)))) && (((0xBC9E6862L | (p_11 || (safe_mul_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((((*l_553) = (((safe_rshift_func_uint16_t_u_u((8L || (((**p_714->g_321) = (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 8))(l_520.s008276a4)).s6, (((((*p_714->g_186) = ((**l_53) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(l_521.xxxz)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(65535UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(65535UL, ((VECTOR(uint16_t, 2))(p_714->g_522.s72)), (safe_sub_func_uint32_t_u_u((((l_551 = (safe_sub_func_uint8_t_u_u((+(safe_rshift_func_uint16_t_u_u(((((VECTOR(uint16_t, 16))(p_714->g_529.yyyxzzzzyzzwyywx)).sc ^ ((l_530 && (safe_rshift_func_uint16_t_u_s((&p_714->g_320 == &p_714->g_320), (safe_add_func_int16_t_s_s(((((p_714->g_546 = ((((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 8))(p_714->g_537.yxyyyxxy)).s5, (safe_sub_func_int8_t_s_s((((safe_mul_func_int16_t_s_s(((((VECTOR(int16_t, 2))(l_542.s11)).hi == (((((l_543 != ((*l_544) = &p_9)) | p_11) , p_8) > p_714->g_223) || (-1L))) && p_8), FAKE_DIVERGE(p_714->local_2_offset, get_local_id(2), 10))) > 0x14D9L) && 18446744073709551606UL), p_714->g_301.z)))) , 0x007B898C788529A5L) , (*p_714->g_322)) != p_714->g_82.s0)) , p_10) || GROUP_DIVERGE(0, 1)) > p_714->g_comm_values[p_714->tid]), GROUP_DIVERGE(0, 1)))))) , 0xD95FL)) , p_714->g_189.sc), l_509.se))), p_714->g_comm_values[p_714->tid]))) , l_509.sa) > (*p_714->g_322)), (**p_714->g_209))), 0x6B69L, ((VECTOR(uint16_t, 2))(1UL)), 0x3040L)).s54)), 1UL, 65535UL, 7UL, p_714->g_223, ((VECTOR(uint16_t, 8))(0x5BBBL)), 0xD20CL)).s5e)), 0x8A3BL, 0x95EBL)).yzwxyzwwyzwyyxyx)).se0dd))))).z)) || 0x2A5BDAD4L) , p_11) > 0x9B3DFB78L)))) == 0L)), 15)) >= 0x79BFL) && p_8)) , (**p_714->g_321)), 0x33L)) | p_9), (-1L))) ^ p_11) == p_714->g_296.s4), 1L)))) != 0x786564F05FBD5593L) <= p_714->g_303.y)))
        { /* block id: 278 */
            int8_t l_555 = 7L;
            int32_t l_557 = 9L;
            int32_t l_558 = 0x28593850L;
            int32_t l_559 = 0x4F16C0DBL;
            int32_t l_561 = 0L;
            int32_t ***l_567 = (void*)0;
            int32_t ****l_566 = &l_567;
            VECTOR(uint32_t, 8) l_575 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x1DB2590AL), 0x1DB2590AL), 0x1DB2590AL, 1UL, 0x1DB2590AL);
            int32_t **l_589 = &l_54;
            int32_t l_602 = 0x7E52280AL;
            int i;
            l_562++;
            l_578 ^= ((~((VECTOR(uint32_t, 16))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 16))(0xF4D47D5DL, 0xE082AD80L, (((((*l_566) = (l_565 = &l_458[0][2])) == ((((VECTOR(int16_t, 4))(l_568.yzwz)).z <= p_714->g_318.y) , l_569)) == p_9) && (*p_714->g_210)), 0x18D7D6D9L, (l_570[0][0][2] == p_714->g_571[8][3]), 0x64FD1BE9L, 0x278FF380L, ((VECTOR(uint32_t, 4))(p_714->g_574.s6454)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0xFB8B50E6L, 0x67F70951L)).yxyxyxyxxyxyxyyy)).s6a)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_575.s7604436606641233)).lo)).s66))))), ((VECTOR(uint32_t, 2))(upsample(((VECTOR(uint16_t, 8))((safe_mul_func_int8_t_s_s((p_10 = 0x4BL), p_9)), 9UL, p_8, (**l_53), 0xFFAFL, ((VECTOR(uint16_t, 2))(0x8C42L)), 0x16C7L)).s37, ((VECTOR(uint16_t, 2))(1UL))))), 0UL)), ((VECTOR(uint32_t, 16))(0x2935EA30L))))).sc) | (**l_53));
            if (((((p_11 , &p_10) != &l_555) && (safe_lshift_func_int8_t_s_u((l_581 != ((((p_714->g_25 = ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(p_8, ((void*)0 == &p_714->g_152))), (((p_714->g_546 ^= ((((*l_545) = (((safe_lshift_func_uint16_t_u_s(((((VECTOR(int32_t, 2))(p_714->g_588.s54)).odd || ((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(((**l_566) != (l_589 = (void*)0)), 0L, p_11, p_10, 0x4529AEE8L, 1L, ((VECTOR(int32_t, 8))(0x5A83CB45L)), 8L, 0x1520BD67L)), ((VECTOR(int32_t, 16))(9L)), ((VECTOR(int32_t, 16))(0x1423C714L))))).s0) , p_11), 1)) ^ p_10) > p_714->g_537.x)) < 1L) | p_11)) , 0x3FB8L) , p_714->g_189.se))) && 0xC7C0L)) , p_714->g_546) | FAKE_DIVERGE(p_714->local_2_offset, get_local_id(2), 10)) , l_590)), 1))) != p_714->g_223))
            { /* block id: 288 */
                (**p_714->g_93) = 4L;
                if ((**l_53))
                    break;
                (**p_714->g_93) = (p_8 >= (safe_mod_func_int64_t_s_s((((VECTOR(int64_t, 4))(0x78EB8E9C7C7BED70L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(0x18ED021D886B3AE5L, (l_593 | (((VECTOR(uint64_t, 4))(p_714->g_594.s0177)).y , l_595)), 0x77C6B65CEACA67FEL, (-8L))).wxxyyyzw)).s11)), 0x02C2635781C230ABL)).w != (safe_rshift_func_uint16_t_u_s(p_714->g_574.s4, 0))), (safe_lshift_func_uint16_t_u_u(0x2400L, 3)))));
                (*l_54) = p_714->g_600;
            }
            else
            { /* block id: 293 */
                uint8_t l_606 = 0xF8L;
                l_603++;
                l_606++;
                if (p_9)
                    break;
            }
        }
        else
        { /* block id: 298 */
            int16_t *l_618 = (void*)0;
            int16_t **l_617 = &l_618;
            int8_t *l_621 = (void*)0;
            l_556 &= ((((0xA4L > 9UL) , ((((*l_54) = (((((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_609.s71)), 0x1AL, 0x40L)).yzwyzzxwwxzzyyzx, (int8_t)((p_714->g_610 != l_612) && (safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((-1L), (p_714->g_529.z | (p_714->g_comm_values[p_714->tid] |= (l_617 != p_714->g_619[2][7]))))) , (l_621 == (**p_714->g_572))), 13)))))).s1710)), 0x54L, (*p_714->g_322), (-2L), 0x30L)).s5100171164354333, ((VECTOR(int8_t, 16))((-8L)))))).sed, ((VECTOR(int8_t, 2))((-1L)))))).odd && (*p_714->g_322)) , l_569) == l_569)) >= p_9) != (*p_714->g_620))) | p_714->g_594.s6) > 0xF701B238L);
            (*p_714->g_186) &= 0x68FF0A8CL;
        }
    }
    (**l_53) = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(((void*)0 == l_459), (p_9 = 65535UL))), (((~((VECTOR(uint8_t, 4))(p_714->g_626.xxyx)).x) && (*l_54)) , (((p_714->g_645 ^= ((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u((*l_54), (safe_sub_func_uint8_t_u_u(p_10, (safe_rshift_func_int8_t_s_u((l_641 = ((**p_714->g_321) = (safe_add_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((p_8 <= 254UL))), p_10)))), p_714->g_461)))))) && FAKE_DIVERGE(p_714->group_0_offset, get_group_id(0), 10)), 0)) , p_10)) , (*l_54)) < 0xA11AFA187B746189L))));
    (*p_714->g_93) = (*l_53);
    return (**p_714->g_321);
}


/* ------------------------------------------ */
/* 
 * reads : p_714->g_93 p_714->g_268 p_714->g_267
 * writes: p_714->g_211
 */
int32_t * func_26(uint16_t  p_27, int32_t * p_28, int32_t  p_29, int32_t  p_30, uint32_t  p_31, struct S0 * p_714)
{ /* block id: 262 */
    VECTOR(int32_t, 16) l_501 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L), (VECTOR(int32_t, 2))(0L, (-1L)), (VECTOR(int32_t, 2))(0L, (-1L)), 0L, (-1L), 0L, (-1L));
    int i;
    (**p_714->g_93) = ((VECTOR(int32_t, 2))(l_501.sde)).even;
    return (*p_714->g_267);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int16_t  func_41(int32_t * p_42, int32_t * p_43, int32_t * p_44, struct S0 * p_714)
{ /* block id: 259 */
    uint32_t l_498 = 4294967295UL;
    --l_498;
    return l_498;
}


/* ------------------------------------------ */
/* 
 * reads : p_714->g_23 p_714->g_25 p_714->g_320 p_714->g_321 p_714->g_322 p_714->g_15 p_714->g_211 p_714->g_133 p_714->g_209 p_714->g_210 p_714->g_67 p_714->g_155 p_714->g_186 p_714->g_93
 * writes: p_714->g_93 p_714->g_183 p_714->g_223 p_714->g_152 p_714->g_211 p_714->g_155 p_714->g_67 p_714->g_268
 */
uint64_t  func_45(int32_t  p_46, int32_t  p_47, int8_t * p_48, uint8_t * p_49, int32_t * p_50, struct S0 * p_714)
{ /* block id: 243 */
    int32_t l_462 = 0x62308A67L;
    int32_t ***l_472 = &p_714->g_93;
    int16_t **l_475 = (void*)0;
    int16_t ***l_476 = (void*)0;
    int16_t ***l_477 = &l_475;
    int16_t l_480[7];
    uint8_t *l_481 = &p_714->g_223;
    uint16_t l_482 = 0xE97FL;
    int32_t *l_485 = (void*)0;
    int32_t *l_486 = &l_462;
    int32_t *l_487 = &p_714->g_23;
    int32_t *l_488 = (void*)0;
    int32_t *l_489 = (void*)0;
    int32_t *l_490 = &p_714->g_67;
    int32_t *l_491 = (void*)0;
    int32_t *l_492 = (void*)0;
    int32_t *l_493 = (void*)0;
    int32_t *l_494 = (void*)0;
    uint16_t l_495 = 0x82AFL;
    int i;
    for (i = 0; i < 7; i++)
        l_480[i] = (-5L);
    (*p_50) = ((p_714->g_152 = (((VECTOR(int64_t, 4))(((l_462 < (safe_unary_minus_func_int64_t_s(((safe_div_func_uint32_t_u_u((0x7330L == ((l_462 >= (safe_div_func_int64_t_s_s(p_714->g_23, (safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((((*l_472) = &p_714->g_268) == &p_50), ((((*l_481) = (safe_mod_func_int8_t_s_s((((*l_477) = l_475) != (void*)0), ((safe_rshift_func_uint8_t_u_s(((p_714->g_183 = l_480[1]) , l_480[1]), 2)) , (*p_49))))) <= (***p_714->g_320)) < (*p_50)))), p_714->g_211))))) < p_714->g_133.sc)), (**p_714->g_209))) | l_482)))) != p_714->g_67), ((VECTOR(int64_t, 2))(0x6CFCAF57F61D5CEEL)), 9L)).z & 1UL)) == 1L);
    for (p_714->g_155 = 22; (p_714->g_155 > 55); p_714->g_155 = safe_add_func_int16_t_s_s(p_714->g_155, 9))
    { /* block id: 252 */
        (*p_714->g_186) &= (*p_50);
    }
    (*p_714->g_93) = p_50;
    ++l_495;
    return p_46;
}


/* ------------------------------------------ */
/* 
 * reads : p_714->g_23 p_714->g_15 p_714->l_comm_values p_714->g_67 p_714->g_25 p_714->g_82 p_714->g_93 p_714->g_comm_values p_714->g_132 p_714->g_133 p_714->g_155 p_714->g_152 p_714->g_186 p_714->g_189 p_714->g_209 p_714->g_223 p_714->g_210 p_714->g_211 p_714->g_267 p_714->g_270 p_714->g_183 p_714->g_296 p_714->g_301 p_714->g_303 p_714->g_318 p_714->g_320 p_714->g_324 p_714->g_322 p_714->g_321 p_714->g_329
 * writes: p_714->g_23 p_714->g_15 p_714->g_67 p_714->g_93 p_714->g_152 p_714->g_comm_values p_714->g_155 p_714->g_183 p_714->g_223 p_714->g_268 p_714->g_320
 */
int8_t * func_51(int32_t * p_52, struct S0 * p_714)
{ /* block id: 10 */
    uint32_t l_64 = 4294967286UL;
    uint8_t *l_83 = (void*)0;
    int32_t ***l_94 = &p_714->g_93;
    int8_t *l_103[9][4] = {{&p_714->g_15,&p_714->g_15,&p_714->g_15,&p_714->g_15},{&p_714->g_15,&p_714->g_15,&p_714->g_15,&p_714->g_15},{&p_714->g_15,&p_714->g_15,&p_714->g_15,&p_714->g_15},{&p_714->g_15,&p_714->g_15,&p_714->g_15,&p_714->g_15},{&p_714->g_15,&p_714->g_15,&p_714->g_15,&p_714->g_15},{&p_714->g_15,&p_714->g_15,&p_714->g_15,&p_714->g_15},{&p_714->g_15,&p_714->g_15,&p_714->g_15,&p_714->g_15},{&p_714->g_15,&p_714->g_15,&p_714->g_15,&p_714->g_15},{&p_714->g_15,&p_714->g_15,&p_714->g_15,&p_714->g_15}};
    int64_t *l_272 = (void*)0;
    int64_t *l_273 = (void*)0;
    int64_t *l_274[5][9][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int32_t l_275[10][8][3] = {{{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL}},{{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL}},{{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL}},{{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL}},{{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL}},{{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL}},{{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL}},{{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL}},{{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL}},{{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL},{1L,0L,0x25A11C1BL}}};
    int16_t l_276 = (-3L);
    VECTOR(int32_t, 2) l_299 = (VECTOR(int32_t, 2))((-2L), (-3L));
    int32_t *l_338 = (void*)0;
    int i, j, k;
    for (p_714->g_23 = 12; (p_714->g_23 > (-3)); p_714->g_23 = safe_sub_func_uint8_t_u_u(p_714->g_23, 5))
    { /* block id: 13 */
        int32_t *l_65 = (void*)0;
        int32_t *l_66 = &p_714->g_67;
        for (p_714->g_15 = 14; (p_714->g_15 < 18); p_714->g_15 = safe_add_func_uint16_t_u_u(p_714->g_15, 3))
        { /* block id: 16 */
            int32_t *l_60 = &p_714->g_23;
            int32_t **l_59 = &l_60;
            int32_t l_61[8][3][1] = {{{(-2L)},{(-2L)},{(-2L)}},{{(-2L)},{(-2L)},{(-2L)}},{{(-2L)},{(-2L)},{(-2L)}},{{(-2L)},{(-2L)},{(-2L)}},{{(-2L)},{(-2L)},{(-2L)}},{{(-2L)},{(-2L)},{(-2L)}},{{(-2L)},{(-2L)},{(-2L)}},{{(-2L)},{(-2L)},{(-2L)}}};
            int i, j, k;
            if ((*p_52))
                break;
            l_61[0][2][0] &= (((*l_59) = (void*)0) == (void*)0);
        }
        (*l_66) |= (safe_add_func_uint32_t_u_u(p_714->l_comm_values[(safe_mod_func_uint32_t_u_u(p_714->tid, 112))], l_64));
    }
    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(func_68(l_64, p_714->g_25, p_714), ((VECTOR(int32_t, 2))(p_714->g_82.s75)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((l_83 == (func_68(p_714->g_23, (((l_275[1][0][1] = (func_84(func_86((safe_div_func_uint64_t_u_u(((!(safe_sub_func_uint16_t_u_u(65535UL, (((*l_94) = p_714->g_93) == &p_52)))) ^ ((((safe_lshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s(((safe_div_func_int8_t_s_s((p_714->g_15 = ((safe_lshift_func_int16_t_s_u(5L, 12)) <= l_64)), p_714->g_23)) < 0x58L), l_64)) & l_64), l_64)) != l_64) & p_714->g_82.s7) & l_64)), l_64)), p_714->g_comm_values[p_714->tid], p_714), p_714) , 0L)) <= l_64) > p_714->g_82.s3), p_714) , l_103[7][3])), ((VECTOR(int32_t, 2))(0x4E407AA3L)), 0x7EADD43FL)).yxwwxzzxywyyzxzy)).even)), 0x1697829DL, l_276, ((VECTOR(int32_t, 2))(0x0743956BL)), 2L)).hi)).hi))), ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(0x0044210EL)), (*p_52), 4L, 1L, 0x2EF624EAL)).s2)
    { /* block id: 121 */
        int32_t *l_277[6];
        int i;
        for (i = 0; i < 6; i++)
            l_277[i] = (void*)0;
        l_277[4] = p_52;
    }
    else
    { /* block id: 123 */
        VECTOR(int8_t, 8) l_284 = (VECTOR(int8_t, 8))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x10L), 0x10L), 0x10L, (-4L), 0x10L);
        int16_t *l_298 = &p_714->g_152;
        int16_t **l_297 = &l_298;
        VECTOR(int32_t, 4) l_300 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x5F454982L), 0x5F454982L);
        VECTOR(int32_t, 4) l_302 = (VECTOR(int32_t, 4))(0x2169095EL, (VECTOR(int32_t, 2))(0x2169095EL, 1L), 1L);
        int8_t **l_313 = &l_103[5][2];
        int8_t ***l_312 = &l_313;
        VECTOR(uint8_t, 16) l_319 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0x14L), 0x14L), 0x14L, 0UL, 0x14L, (VECTOR(uint8_t, 2))(0UL, 0x14L), (VECTOR(uint8_t, 2))(0UL, 0x14L), 0UL, 0x14L, 0UL, 0x14L);
        int8_t ****l_323 = &p_714->g_320;
        VECTOR(uint64_t, 16) l_326 = (VECTOR(uint64_t, 16))(0x961AEF1865815058L, (VECTOR(uint64_t, 4))(0x961AEF1865815058L, (VECTOR(uint64_t, 2))(0x961AEF1865815058L, 0UL), 0UL), 0UL, 0x961AEF1865815058L, 0UL, (VECTOR(uint64_t, 2))(0x961AEF1865815058L, 0UL), (VECTOR(uint64_t, 2))(0x961AEF1865815058L, 0UL), 0x961AEF1865815058L, 0UL, 0x961AEF1865815058L, 0UL);
        uint64_t *l_327 = &p_714->g_183;
        int32_t *l_332 = (void*)0;
        int32_t *l_335 = (void*)0;
        int32_t *l_337 = &p_714->g_67;
        int i;
        for (p_714->g_15 = 29; (p_714->g_15 <= 13); p_714->g_15 = safe_sub_func_int8_t_s_s(p_714->g_15, 5))
        { /* block id: 126 */
            uint32_t l_285[2];
            VECTOR(uint16_t, 2) l_286 = (VECTOR(uint16_t, 2))(0x6C04L, 9UL);
            int16_t *l_291 = &p_714->g_152;
            int i;
            for (i = 0; i < 2; i++)
                l_285[i] = 1UL;
            atomic_max(&p_714->g_atomic_reduction[get_linear_group_id()], ((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_284.s1546623170331655)).s3, l_285[1])), ((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_286.xyyxxxyx)).lo)).w >= (l_94 == &p_714->g_267)) , ((((l_285[1] > l_284.s5) , (*p_714->g_210)) | (safe_div_func_int64_t_s_s((((*p_52) < (p_714->g_132.s5 ^ ((!((*l_291) = l_284.s3)) < 0x4EC9L))) < (*p_52)), p_714->g_183))) != FAKE_DIVERGE(p_714->global_1_offset, get_global_id(1), 10))))) && p_714->g_183) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_714->v_collective += p_714->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        (*p_52) = ((((safe_rshift_func_int8_t_s_s(0x79L, ((((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_714->g_296.s2d)).yyxx)).y , l_284.s1) & ((((*l_297) = &l_276) != ((((((!FAKE_DIVERGE(p_714->group_0_offset, get_group_id(0), 10)) , (((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_299.yyxy)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_300.xxyy)).wxzwyzzwywwyxxww)).s5e43, ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(p_714->g_301.wyxyzwxz)), ((VECTOR(int32_t, 8))(l_302.yzwzyyzz)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_714->g_303.yywy)), (p_714->g_152 != ((safe_rshift_func_uint16_t_u_s((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 4))(18446744073709551615UL, (safe_add_func_uint64_t_u_u((((safe_div_func_uint16_t_u_u((l_300.y & (safe_lshift_func_int16_t_s_u((l_284.s0 & (((*l_312) = (void*)0) != ((safe_mod_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((*p_714->g_186), (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_714->g_318.xy)), 4294967290UL, 0xE50D675EL)), 4294967295UL, (((*p_714->g_322) = ((((VECTOR(uint8_t, 4))(l_319.sbb1f)).z == ((+(((*l_323) = p_714->g_320) == p_714->g_324)) != l_302.x)) > 1L)) && p_714->g_25), l_284.s0, 4294967292UL, 1UL, GROUP_DIVERGE(0, 1), ((VECTOR(uint32_t, 4))(0x9DDCA7EEL)), 1UL, 0UL)).s4 && FAKE_DIVERGE(p_714->global_1_offset, get_global_id(1), 10)))), GROUP_DIVERGE(0, 1))) , (**l_323)))), 10))), l_302.x)) , (-1L)) & (*p_714->g_210)), p_714->g_67)), 0x8B28E14CA5DCCD83L, 0x21892F36F2DB3E37L)).lo, ((VECTOR(uint64_t, 2))(18446744073709551615UL))))), 0x7B31BC2CC644FE44L, ((VECTOR(uint64_t, 4))(0x15B8F6BA0B3F7846L)), 9UL)), l_319.s8, l_326.sb, FAKE_DIVERGE(p_714->group_1_offset, get_group_id(1), 10), ((VECTOR(uint64_t, 4))(0x421330A6877B9976L)), 0x2B542AFAB89DAB85L)).sb & 0x23A862AB6F653951L), 4)) , l_326.sd)), ((VECTOR(int32_t, 2))((-1L))), (-1L)))))).even))).z , 0x3FL)) , l_299.x) , l_299.x) != 0L) , (void*)0)) >= 8L)) , 1UL) == 0x1F1E166002CCF0DEL))) , (void*)0) == l_327) <= GROUP_DIVERGE(2, 1));
        (*p_52) = (safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 2))(p_714->g_329.yy)).hi));
        (*l_337) &= ((*p_52) |= (safe_rshift_func_int8_t_s_s((*p_714->g_322), (l_302.x = ((l_300.w = 0x8BL) , (-8L))))));
    }
    l_338 = (void*)0;
    if ((atomic_inc(&p_714->g_atomic_input[49 * get_linear_group_id() + 34]) == 0))
    { /* block id: 143 */
        int32_t l_339 = 0x7548CFD0L;
        uint8_t l_340[10][6][4] = {{{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL}},{{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL}},{{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL}},{{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL}},{{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL}},{{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL}},{{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL}},{{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL}},{{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL}},{{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL},{0x3AL,0x63L,0xBAL,5UL}}};
        uint32_t l_343[2][8] = {{0x07B8569FL,4UL,0xC2BE669AL,4UL,0x07B8569FL,0x07B8569FL,4UL,0xC2BE669AL},{0x07B8569FL,4UL,0xC2BE669AL,4UL,0x07B8569FL,0x07B8569FL,4UL,0xC2BE669AL}};
        int8_t l_344[9][10] = {{0x03L,5L,0x01L,0x03L,0x7AL,0x6CL,0x45L,0x58L,0x45L,0x6CL},{0x03L,5L,0x01L,0x03L,0x7AL,0x6CL,0x45L,0x58L,0x45L,0x6CL},{0x03L,5L,0x01L,0x03L,0x7AL,0x6CL,0x45L,0x58L,0x45L,0x6CL},{0x03L,5L,0x01L,0x03L,0x7AL,0x6CL,0x45L,0x58L,0x45L,0x6CL},{0x03L,5L,0x01L,0x03L,0x7AL,0x6CL,0x45L,0x58L,0x45L,0x6CL},{0x03L,5L,0x01L,0x03L,0x7AL,0x6CL,0x45L,0x58L,0x45L,0x6CL},{0x03L,5L,0x01L,0x03L,0x7AL,0x6CL,0x45L,0x58L,0x45L,0x6CL},{0x03L,5L,0x01L,0x03L,0x7AL,0x6CL,0x45L,0x58L,0x45L,0x6CL},{0x03L,5L,0x01L,0x03L,0x7AL,0x6CL,0x45L,0x58L,0x45L,0x6CL}};
        uint32_t l_345 = 0x301E9A34L;
        int16_t l_346[9][7][4] = {{{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)}},{{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)}},{{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)}},{{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)}},{{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)}},{{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)}},{{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)}},{{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)}},{{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)},{1L,(-3L),0L,(-3L)}}};
        VECTOR(int32_t, 16) l_451 = (VECTOR(int32_t, 16))(0x07233032L, (VECTOR(int32_t, 4))(0x07233032L, (VECTOR(int32_t, 2))(0x07233032L, 0x0C534316L), 0x0C534316L), 0x0C534316L, 0x07233032L, 0x0C534316L, (VECTOR(int32_t, 2))(0x07233032L, 0x0C534316L), (VECTOR(int32_t, 2))(0x07233032L, 0x0C534316L), 0x07233032L, 0x0C534316L, 0x07233032L, 0x0C534316L);
        int16_t l_452 = 0x781DL;
        int32_t l_453[5];
        uint64_t l_454 = 0x973A436A7561D453L;
        int16_t l_455 = 0x7230L;
        int8_t l_456 = 0x71L;
        int8_t l_457 = 0L;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_453[i] = 0L;
        l_340[5][1][3]++;
        if ((l_346[1][1][2] &= (l_345 = (l_344[0][4] = l_343[0][3]))))
        { /* block id: 148 */
            int32_t l_347 = 0x675F5DE7L;
            int32_t l_394 = 0x5DE00927L;
            uint64_t l_395 = 5UL;
            uint64_t l_396 = 18446744073709551615UL;
            int32_t *l_397 = &l_394;
            int32_t *l_398 = (void*)0;
            uint64_t l_399 = 7UL;
            for (l_347 = (-24); (l_347 >= (-21)); l_347++)
            { /* block id: 151 */
                int32_t l_351 = 1L;
                int32_t *l_350 = &l_351;
                l_350 = (void*)0;
                for (l_351 = 0; (l_351 == (-21)); l_351--)
                { /* block id: 155 */
                    uint16_t l_354 = 0x25D7L;
                    int8_t l_355 = 1L;
                    int32_t l_378 = 0x1072F342L;
                    l_354 = 0x68005B0DL;
                    if (l_355)
                    { /* block id: 157 */
                        int32_t l_356 = 1L;
                        uint32_t l_357 = 0x062B610DL;
                        int16_t l_358 = 7L;
                        int32_t *l_359[3][9][9] = {{{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356}},{{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356}},{{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356,(void*)0,(void*)0,&l_356,&l_356,&l_356}}};
                        uint8_t l_360 = 1UL;
                        uint64_t l_361 = 8UL;
                        int32_t *l_362 = &l_356;
                        int32_t *l_363[4][5][8] = {{{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0}},{{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0}},{{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0}},{{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356,(void*)0,&l_356,&l_356,(void*)0}}};
                        int i, j, k;
                        l_358 ^= (l_357 = l_356);
                        l_350 = l_359[0][0][7];
                        l_361 = l_360;
                        l_363[1][3][0] = (l_350 = l_362);
                    }
                    else
                    { /* block id: 164 */
                        int32_t l_364 = 0L;
                        int8_t l_365 = 0L;
                        uint32_t l_366[8] = {4294967294UL,4294967294UL,4294967294UL,4294967294UL,4294967294UL,4294967294UL,4294967294UL,4294967294UL};
                        VECTOR(int8_t, 4) l_369 = (VECTOR(int8_t, 4))(0x0EL, (VECTOR(int8_t, 2))(0x0EL, 1L), 1L);
                        int16_t l_370[7][2];
                        uint16_t l_371 = 0x020FL;
                        uint64_t l_372 = 0x64B51FDB16B39881L;
                        int32_t l_373 = (-10L);
                        int32_t l_374 = 0x572819B0L;
                        uint8_t l_375 = 254UL;
                        int i, j;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_370[i][j] = 5L;
                        }
                        --l_366[5];
                        l_374 = (l_369.w , (l_373 ^= ((l_364 = (l_370[1][1] , l_371)) , l_372)));
                        l_375--;
                    }
                    if (l_378)
                    { /* block id: 171 */
                        int32_t l_379 = 0L;
                        int64_t l_380 = 0x3B2D3290A701CC02L;
                        uint16_t l_381 = 0x9B49L;
                        uint32_t l_384 = 1UL;
                        VECTOR(int32_t, 2) l_385 = (VECTOR(int32_t, 2))(0x7C5A0136L, (-1L));
                        uint32_t l_386 = 0x33E1C00BL;
                        int32_t l_387 = 1L;
                        uint8_t l_388[6][3][10] = {{{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL},{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL},{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL}},{{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL},{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL},{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL}},{{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL},{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL},{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL}},{{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL},{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL},{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL}},{{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL},{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL},{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL}},{{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL},{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL},{0x77L,0xF1L,0xF1L,0x77L,0x5FL,0xEDL,251UL,1UL,1UL,253UL}}};
                        int i, j, k;
                        ++l_381;
                        l_386 &= (l_384 , ((VECTOR(int32_t, 2))(l_385.yx)).odd);
                        ++l_388[3][2][1];
                    }
                    else
                    { /* block id: 175 */
                        uint32_t l_391 = 3UL;
                        ++l_391;
                    }
                }
            }
            l_398 = (l_397 = ((l_395 = l_394) , (l_396 , (void*)0)));
            --l_399;
        }
        else
        { /* block id: 184 */
            int32_t l_402 = 1L;
            if (l_402)
            { /* block id: 185 */
                uint32_t l_403 = 0xC9454914L;
                uint32_t l_419 = 4294967295UL;
                int8_t **l_420 = (void*)0;
                int8_t l_423 = (-2L);
                int8_t *l_422 = &l_423;
                int8_t **l_421 = &l_422;
                VECTOR(int32_t, 4) l_424 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x150289F0L), 0x150289F0L);
                uint8_t l_425 = 3UL;
                int i;
                l_403 = 0x52240731L;
                for (l_403 = 0; (l_403 != 53); ++l_403)
                { /* block id: 189 */
                    int32_t l_406[6] = {1L,1L,1L,1L,1L,1L};
                    int i;
                    if ((l_406[0] , 0x6DEC5EBDL))
                    { /* block id: 190 */
                        int32_t *l_407 = (void*)0;
                        int32_t l_409 = (-1L);
                        int32_t *l_408 = &l_409;
                        int32_t *l_410[6][4][4] = {{{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409}},{{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409}},{{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409}},{{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409}},{{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409}},{{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409},{&l_409,(void*)0,&l_409,&l_409}}};
                        uint32_t l_411 = 0xD08F65F2L;
                        uint64_t l_412 = 0x905BDBDECFF001DEL;
                        int i, j, k;
                        l_410[0][3][3] = (l_408 = l_407);
                        l_411 = 0x1F6AD7B2L;
                        l_412 ^= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x61DFB307L, 0x25AAC76EL, 0x17AA2CE7L, 0x046FD9E5L)).ywywzwxz)).s3;
                    }
                    else
                    { /* block id: 195 */
                        VECTOR(int32_t, 16) l_413 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x72F7C703L), 0x72F7C703L), 0x72F7C703L, (-6L), 0x72F7C703L, (VECTOR(int32_t, 2))((-6L), 0x72F7C703L), (VECTOR(int32_t, 2))((-6L), 0x72F7C703L), (-6L), 0x72F7C703L, (-6L), 0x72F7C703L);
                        int64_t l_414 = 0x4E06F0F367BC0212L;
                        int8_t l_415 = 0x2AL;
                        uint8_t l_416 = 255UL;
                        int32_t l_417 = 0L;
                        uint16_t l_418 = 0x72EDL;
                        int i;
                        l_414 |= ((VECTOR(int32_t, 16))(l_413.s124caedee1e57eb5)).s5;
                        l_415 = (-1L);
                        l_417 = l_416;
                        l_418 = 0x38FFBCA7L;
                    }
                }
                l_421 = (l_420 = ((l_345 = l_419) , (void*)0));
                l_425 ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_424.zzzy)))).z;
            }
            else
            { /* block id: 206 */
                uint32_t l_426 = 4294967292UL;
                int32_t l_427[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_427[i] = 0x57C5119FL;
                l_426 = ((VECTOR(int32_t, 4))(0x29949208L, 0x4F906E96L, 1L, 0x526409F8L)).x;
                l_427[0] |= (-8L);
            }
            for (l_402 = (-27); (l_402 <= 12); l_402++)
            { /* block id: 212 */
                VECTOR(int32_t, 16) l_430 = (VECTOR(int32_t, 16))(0x6A670FE9L, (VECTOR(int32_t, 4))(0x6A670FE9L, (VECTOR(int32_t, 2))(0x6A670FE9L, 4L), 4L), 4L, 0x6A670FE9L, 4L, (VECTOR(int32_t, 2))(0x6A670FE9L, 4L), (VECTOR(int32_t, 2))(0x6A670FE9L, 4L), 0x6A670FE9L, 4L, 0x6A670FE9L, 4L);
                uint64_t l_431 = 0xB9A1B0D18BC3AC4FL;
                int i;
                l_431 ^= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_430.sbb)), 0x1EE787F6L, 1L)))).z;
                for (l_431 = 0; (l_431 <= 5); l_431 = safe_add_func_int32_t_s_s(l_431, 2))
                { /* block id: 216 */
                    int32_t l_434 = 0x5CFA46F0L;
                    VECTOR(int32_t, 2) l_442 = (VECTOR(int32_t, 2))(0x3B4D0AD0L, 5L);
                    int32_t l_443[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_443[i] = 0x06339694L;
                    for (l_434 = 0; (l_434 > 29); l_434 = safe_add_func_uint64_t_u_u(l_434, 5))
                    { /* block id: 219 */
                        VECTOR(int32_t, 4) l_438 = (VECTOR(int32_t, 4))(0x58C539F0L, (VECTOR(int32_t, 2))(0x58C539F0L, 0x620B213DL), 0x620B213DL);
                        int32_t *l_437 = (void*)0;
                        int32_t *l_439[2];
                        int32_t *l_440 = (void*)0;
                        int32_t *l_441 = (void*)0;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_439[i] = (void*)0;
                        l_441 = (l_440 = (l_439[0] = (l_437 = (void*)0)));
                    }
                    l_443[3] = ((VECTOR(int32_t, 2))(l_442.yy)).odd;
                    for (l_442.x = 0; (l_442.x != 23); l_442.x = safe_add_func_uint64_t_u_u(l_442.x, 6))
                    { /* block id: 228 */
                        int64_t l_446[6][10] = {{0x3ECA207B63AC8259L,0L,0L,0x3ECA207B63AC8259L,0x63016100B94CEAFFL,0x1855A01E3A7D100EL,0x1855A01E3A7D100EL,0x63016100B94CEAFFL,0x3ECA207B63AC8259L,0L},{0x3ECA207B63AC8259L,0L,0L,0x3ECA207B63AC8259L,0x63016100B94CEAFFL,0x1855A01E3A7D100EL,0x1855A01E3A7D100EL,0x63016100B94CEAFFL,0x3ECA207B63AC8259L,0L},{0x3ECA207B63AC8259L,0L,0L,0x3ECA207B63AC8259L,0x63016100B94CEAFFL,0x1855A01E3A7D100EL,0x1855A01E3A7D100EL,0x63016100B94CEAFFL,0x3ECA207B63AC8259L,0L},{0x3ECA207B63AC8259L,0L,0L,0x3ECA207B63AC8259L,0x63016100B94CEAFFL,0x1855A01E3A7D100EL,0x1855A01E3A7D100EL,0x63016100B94CEAFFL,0x3ECA207B63AC8259L,0L},{0x3ECA207B63AC8259L,0L,0L,0x3ECA207B63AC8259L,0x63016100B94CEAFFL,0x1855A01E3A7D100EL,0x1855A01E3A7D100EL,0x63016100B94CEAFFL,0x3ECA207B63AC8259L,0L},{0x3ECA207B63AC8259L,0L,0L,0x3ECA207B63AC8259L,0x63016100B94CEAFFL,0x1855A01E3A7D100EL,0x1855A01E3A7D100EL,0x63016100B94CEAFFL,0x3ECA207B63AC8259L,0L}};
                        VECTOR(int32_t, 16) l_447 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
                        uint16_t l_448 = 6UL;
                        uint64_t l_449 = 0x184F1F9B53A6DAAFL;
                        int32_t *l_450 = (void*)0;
                        int i, j;
                        l_450 = ((((l_446[4][4] , ((VECTOR(int32_t, 16))(l_447.s34fb01a28ab1c09b)).sb) , l_448) , l_449) , (void*)0);
                    }
                }
            }
        }
        l_452 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_451.s0c5fcf6f0b6a1a72)).s0b)).lo;
        l_457 ^= (l_453[1] , (l_456 |= (l_455 = l_454)));
        unsigned int result = 0;
        result += l_339;
        int l_340_i0, l_340_i1, l_340_i2;
        for (l_340_i0 = 0; l_340_i0 < 10; l_340_i0++) {
            for (l_340_i1 = 0; l_340_i1 < 6; l_340_i1++) {
                for (l_340_i2 = 0; l_340_i2 < 4; l_340_i2++) {
                    result += l_340[l_340_i0][l_340_i1][l_340_i2];
                }
            }
        }
        int l_343_i0, l_343_i1;
        for (l_343_i0 = 0; l_343_i0 < 2; l_343_i0++) {
            for (l_343_i1 = 0; l_343_i1 < 8; l_343_i1++) {
                result += l_343[l_343_i0][l_343_i1];
            }
        }
        int l_344_i0, l_344_i1;
        for (l_344_i0 = 0; l_344_i0 < 9; l_344_i0++) {
            for (l_344_i1 = 0; l_344_i1 < 10; l_344_i1++) {
                result += l_344[l_344_i0][l_344_i1];
            }
        }
        result += l_345;
        int l_346_i0, l_346_i1, l_346_i2;
        for (l_346_i0 = 0; l_346_i0 < 9; l_346_i0++) {
            for (l_346_i1 = 0; l_346_i1 < 7; l_346_i1++) {
                for (l_346_i2 = 0; l_346_i2 < 4; l_346_i2++) {
                    result += l_346[l_346_i0][l_346_i1][l_346_i2];
                }
            }
        }
        result += l_451.sf;
        result += l_451.se;
        result += l_451.sd;
        result += l_451.sc;
        result += l_451.sb;
        result += l_451.sa;
        result += l_451.s9;
        result += l_451.s8;
        result += l_451.s7;
        result += l_451.s6;
        result += l_451.s5;
        result += l_451.s4;
        result += l_451.s3;
        result += l_451.s2;
        result += l_451.s1;
        result += l_451.s0;
        result += l_452;
        int l_453_i0;
        for (l_453_i0 = 0; l_453_i0 < 5; l_453_i0++) {
            result += l_453[l_453_i0];
        }
        result += l_454;
        result += l_455;
        result += l_456;
        result += l_457;
        atomic_add(&p_714->g_special_values[49 * get_linear_group_id() + 34], result);
    }
    else
    { /* block id: 238 */
        (1 + 1);
    }
    return (**p_714->g_320);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_68(uint8_t  p_69, int64_t  p_70, struct S0 * p_714)
{ /* block id: 23 */
    uint32_t l_81 = 0UL;
    if ((atomic_inc(&p_714->l_atomic_input[29]) == 2))
    { /* block id: 25 */
        int32_t l_72 = 0x0280E44EL;
        int32_t *l_71 = &l_72;
        int32_t *l_73 = &l_72;
        int8_t l_76[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
        int8_t *l_75 = &l_76[6];
        int8_t **l_74 = &l_75;
        uint32_t l_77 = 3UL;
        uint32_t l_78 = 0x85266972L;
        uint32_t l_79[1];
        int32_t l_80 = 0x30F81A68L;
        int i;
        for (i = 0; i < 1; i++)
            l_79[i] = 4294967295UL;
        l_73 = l_71;
        l_74 = (void*)0;
        l_80 = (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x17L, 255UL)), 0x53L, 0xFAL)))), (uint8_t)l_77))).wwxxxwyzxwwwwyzz)).s7b)).hi , (l_79[0] = l_78));
        unsigned int result = 0;
        result += l_72;
        int l_76_i0;
        for (l_76_i0 = 0; l_76_i0 < 9; l_76_i0++) {
            result += l_76[l_76_i0];
        }
        result += l_77;
        result += l_78;
        int l_79_i0;
        for (l_79_i0 = 0; l_79_i0 < 1; l_79_i0++) {
            result += l_79[l_79_i0];
        }
        result += l_80;
        atomic_add(&p_714->l_special_values[29], result);
    }
    else
    { /* block id: 30 */
        (1 + 1);
    }
    return l_81;
}


/* ------------------------------------------ */
/* 
 * reads : p_714->g_155 p_714->l_comm_values p_714->g_132 p_714->g_152 p_714->g_186 p_714->g_189 p_714->g_209 p_714->g_223 p_714->g_210 p_714->g_211 p_714->g_comm_values p_714->g_267 p_714->g_270 p_714->g_67
 * writes: p_714->g_183 p_714->g_67 p_714->g_223 p_714->g_comm_values p_714->g_268
 */
int64_t  func_84(int64_t  p_85, struct S0 * p_714)
{ /* block id: 46 */
    int32_t l_166 = (-4L);
    uint16_t *l_167 = &p_714->g_155;
    VECTOR(int8_t, 8) l_168 = (VECTOR(int8_t, 8))(9L, (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0x3FL), 0x3FL), 0x3FL, 9L, 0x3FL);
    int32_t l_180[4];
    uint64_t *l_181 = (void*)0;
    uint64_t *l_182 = &p_714->g_183;
    uint32_t l_184 = 0UL;
    int8_t l_205 = 1L;
    uint16_t l_206 = 0x99C5L;
    int32_t *l_271[5][2] = {{&p_714->g_67,(void*)0},{&p_714->g_67,(void*)0},{&p_714->g_67,(void*)0},{&p_714->g_67,(void*)0},{&p_714->g_67,(void*)0}};
    int i, j;
    for (i = 0; i < 4; i++)
        l_180[i] = 0x27B1E6F4L;
    (*p_714->g_186) = (safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(4294967288UL, (safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(p_85, (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(l_166, (l_167 == l_167))), ((p_85 && 0UL) | FAKE_DIVERGE(p_714->local_1_offset, get_local_id(1), 10)))))), ((((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 2))((-1L), 0L)).xxxyyxxyyxyxxyyx, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 2))(hadd(((VECTOR(int8_t, 16))(l_168.s7233660644377533)).s59, ((VECTOR(int8_t, 16))(((safe_unary_minus_func_uint32_t_u(((((+(safe_sub_func_uint64_t_u_u((safe_add_func_int32_t_s_s(((safe_sub_func_uint64_t_u_u(((*l_182) = (l_180[0] |= (7UL > ((p_85 && (safe_div_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((p_85 & 0x19L), p_714->g_155)), GROUP_DIVERGE(0, 1)))) < 1UL)))), 0x282263856030E86BL)) == (-4L)), 0xAF4C53DEL)), p_85))) , (void*)0) == (void*)0) >= 4294967290UL))) ^ p_714->l_comm_values[(safe_mod_func_uint32_t_u_u(p_714->tid, 112))]), (-5L), ((VECTOR(int8_t, 2))((-8L))), 8L, 0x07L, 0x7BL, ((VECTOR(int8_t, 8))(1L)), 0x4DL)).s90))).xyxyxxxx, ((VECTOR(int8_t, 8))(3L))))).s4223250207201440)).hi, ((VECTOR(int8_t, 8))(0x3EL))))))).s3607531073522632, ((VECTOR(int8_t, 16))(6L))))).s73)).hi <= p_714->g_132.s4) <= p_714->g_152))), 1UL, 0x04F61B09L)), ((VECTOR(uint32_t, 4))(0x5B142145L)), 0UL, 0x4089B948L, ((VECTOR(uint32_t, 4))(0x993133B8L)), 0x6CBBA219L, 0x38E51102L)).s3, l_184));
    for (p_85 = 3; (p_85 == (-10)); p_85 = safe_sub_func_int64_t_s_s(p_85, 9))
    { /* block id: 52 */
        uint64_t l_190[8][6] = {{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL,1UL}};
        int32_t l_192 = 9L;
        int32_t l_200 = 0x35B230E5L;
        int32_t l_202 = 8L;
        int32_t l_203 = 1L;
        int32_t l_204 = 0x48AB577FL;
        uint8_t l_226 = 255UL;
        int i, j;
        if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_714->g_189.sea98)).yyxzzwxy)).s5)
        { /* block id: 53 */
            int32_t *l_191 = &l_180[0];
            int32_t *l_193 = (void*)0;
            int32_t *l_194 = &l_192;
            int32_t *l_195 = &l_192;
            int32_t *l_196 = &p_714->g_67;
            int32_t *l_197 = &l_180[0];
            int32_t *l_198[9][2] = {{&p_714->g_23,&l_180[0]},{&p_714->g_23,&l_180[0]},{&p_714->g_23,&l_180[0]},{&p_714->g_23,&l_180[0]},{&p_714->g_23,&l_180[0]},{&p_714->g_23,&l_180[0]},{&p_714->g_23,&l_180[0]},{&p_714->g_23,&l_180[0]},{&p_714->g_23,&l_180[0]}};
            int64_t l_201 = 0x24F9D19914BD559EL;
            uint32_t **l_212[4][5] = {{&p_714->g_210,&p_714->g_210,&p_714->g_210,&p_714->g_210,&p_714->g_210},{&p_714->g_210,&p_714->g_210,&p_714->g_210,&p_714->g_210,&p_714->g_210},{&p_714->g_210,&p_714->g_210,&p_714->g_210,&p_714->g_210,&p_714->g_210},{&p_714->g_210,&p_714->g_210,&p_714->g_210,&p_714->g_210,&p_714->g_210}};
            int i, j;
            if (l_190[2][0])
                break;
            l_206++;
            l_212[0][4] = p_714->g_209;
            for (l_206 = (-22); (l_206 == 44); ++l_206)
            { /* block id: 59 */
                VECTOR(uint64_t, 16) l_221 = (VECTOR(uint64_t, 16))(0xD84C9E74196F249CL, (VECTOR(uint64_t, 4))(0xD84C9E74196F249CL, (VECTOR(uint64_t, 2))(0xD84C9E74196F249CL, 0xA0E73B8899DCF5AFL), 0xA0E73B8899DCF5AFL), 0xA0E73B8899DCF5AFL, 0xD84C9E74196F249CL, 0xA0E73B8899DCF5AFL, (VECTOR(uint64_t, 2))(0xD84C9E74196F249CL, 0xA0E73B8899DCF5AFL), (VECTOR(uint64_t, 2))(0xD84C9E74196F249CL, 0xA0E73B8899DCF5AFL), 0xD84C9E74196F249CL, 0xA0E73B8899DCF5AFL, 0xD84C9E74196F249CL, 0xA0E73B8899DCF5AFL);
                uint8_t *l_222 = &p_714->g_223;
                int i;
                atomic_add(&p_714->g_atomic_reduction[get_linear_group_id()], (safe_mod_func_int32_t_s_s((safe_div_func_uint32_t_u_u(1UL, ((l_168.s1 , (safe_div_func_int64_t_s_s((((VECTOR(uint64_t, 8))(l_221.s989aefa6)).s0 ^ ((++(*l_222)) ^ ((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(add_sat(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 2))((-1L), 0x59L))))), ((VECTOR(int8_t, 8))((((*l_182) = ((VECTOR(uint64_t, 8))(mad_sat(((VECTOR(uint64_t, 16))(rhadd(((VECTOR(uint64_t, 4))((&p_714->g_210 == l_212[3][2]), (((VECTOR(uint32_t, 4))(0x8642B3C9L, 2UL, 0x8BEBA228L, 0x2D8EADADL)).x | ((l_226 | 0x1C5E754A42A48A9BL) , (((!0x70L) <= (safe_rshift_func_int16_t_s_u(((void*)0 != &p_714->g_186), 4))) , 4UL))), 0x18E2FD493A947ED1L, 2UL)).xzxxwwzwxzxyxzwy, ((VECTOR(uint64_t, 16))(18446744073709551610UL))))).hi, ((VECTOR(uint64_t, 8))(7UL)), ((VECTOR(uint64_t, 8))(2UL))))).s5) , p_85), ((VECTOR(int8_t, 4))(1L)), 1L, 1L, 7L)).s31))), (-1L), 0x6CL, ((VECTOR(int8_t, 2))(0x66L)), 3L, 0L)).s1426444607644407, ((VECTOR(int8_t, 16))(0x4EL))))).sc)), p_85))) && l_221.s3))), (*p_714->g_210))) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_714->v_collective += p_714->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (l_190[2][0])
                    break;
            }
        }
        else
        { /* block id: 65 */
            return p_714->g_comm_values[p_714->tid];
        }
    }
    for (p_85 = 10; (p_85 <= (-4)); p_85 = safe_sub_func_uint16_t_u_u(p_85, 1))
    { /* block id: 71 */
        VECTOR(uint32_t, 4) l_237 = (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0x390D8EACL), 0x390D8EACL);
        int i;
        for (l_166 = 19; (l_166 >= (-21)); l_166--)
        { /* block id: 74 */
            int16_t l_240[7][2][6] = {{{2L,2L,0x078CL,5L,0x6B3CL,0x5FD5L},{2L,2L,0x078CL,5L,0x6B3CL,0x5FD5L}},{{2L,2L,0x078CL,5L,0x6B3CL,0x5FD5L},{2L,2L,0x078CL,5L,0x6B3CL,0x5FD5L}},{{2L,2L,0x078CL,5L,0x6B3CL,0x5FD5L},{2L,2L,0x078CL,5L,0x6B3CL,0x5FD5L}},{{2L,2L,0x078CL,5L,0x6B3CL,0x5FD5L},{2L,2L,0x078CL,5L,0x6B3CL,0x5FD5L}},{{2L,2L,0x078CL,5L,0x6B3CL,0x5FD5L},{2L,2L,0x078CL,5L,0x6B3CL,0x5FD5L}},{{2L,2L,0x078CL,5L,0x6B3CL,0x5FD5L},{2L,2L,0x078CL,5L,0x6B3CL,0x5FD5L}},{{2L,2L,0x078CL,5L,0x6B3CL,0x5FD5L},{2L,2L,0x078CL,5L,0x6B3CL,0x5FD5L}}};
            int i, j, k;
            l_240[4][0][2] |= (safe_mod_func_int64_t_s_s(p_85, (p_714->g_comm_values[p_714->tid] &= (safe_add_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(l_237.yzwyzwxw)).s5, (safe_lshift_func_uint16_t_u_u(5UL, 8)))))));
        }
        if ((atomic_inc(&p_714->l_atomic_input[1]) == 6))
        { /* block id: 79 */
            int32_t l_241 = 8L;
            uint16_t l_250[9][4] = {{65528UL,0xEE27L,7UL,0UL},{65528UL,0xEE27L,7UL,0UL},{65528UL,0xEE27L,7UL,0UL},{65528UL,0xEE27L,7UL,0UL},{65528UL,0xEE27L,7UL,0UL},{65528UL,0xEE27L,7UL,0UL},{65528UL,0xEE27L,7UL,0UL},{65528UL,0xEE27L,7UL,0UL},{65528UL,0xEE27L,7UL,0UL}};
            int32_t l_251 = 0x56AE3D4CL;
            int64_t l_252 = (-1L);
            int i, j;
            for (l_241 = (-24); (l_241 > (-18)); l_241 = safe_add_func_uint64_t_u_u(l_241, 7))
            { /* block id: 82 */
                int32_t l_244 = 6L;
                for (l_244 = (-28); (l_244 >= 19); l_244 = safe_add_func_int32_t_s_s(l_244, 5))
                { /* block id: 85 */
                    int8_t l_247 = 0x44L;
                    int64_t l_248 = 0x2C0FE8FB8EA65641L;
                    int64_t l_249 = (-1L);
                    l_248 = l_247;
                    l_249 |= 1L;
                }
            }
            l_251 |= l_250[5][2];
            if (l_252)
            { /* block id: 91 */
                int16_t l_253 = 0x6498L;
                int32_t l_254 = (-1L);
                int32_t l_255 = (-8L);
                l_253 = (l_241 = 5L);
                l_241 = (l_254 = 0x53536CF9L);
                l_241 |= l_255;
            }
            else
            { /* block id: 97 */
                int32_t l_256 = 0x699DC055L;
                VECTOR(int32_t, 4) l_262 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x302F4F0BL), 0x302F4F0BL);
                int32_t *l_263 = (void*)0;
                int32_t *l_264 = &l_256;
                int i;
                for (l_256 = 0; (l_256 == (-7)); --l_256)
                { /* block id: 100 */
                    int32_t *l_259 = (void*)0;
                    int32_t l_261 = (-1L);
                    int32_t *l_260 = &l_261;
                    l_260 = l_259;
                }
                l_256 &= (l_251 &= (l_241 |= ((VECTOR(int32_t, 2))(l_262.wy)).even));
                l_264 = l_263;
            }
            unsigned int result = 0;
            result += l_241;
            int l_250_i0, l_250_i1;
            for (l_250_i0 = 0; l_250_i0 < 9; l_250_i0++) {
                for (l_250_i1 = 0; l_250_i1 < 4; l_250_i1++) {
                    result += l_250[l_250_i0][l_250_i1];
                }
            }
            result += l_251;
            result += l_252;
            atomic_add(&p_714->l_special_values[1], result);
        }
        else
        { /* block id: 108 */
            (1 + 1);
        }
        for (l_205 = 0; (l_205 <= (-21)); l_205--)
        { /* block id: 113 */
            uint64_t l_269[4][1];
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_269[i][j] = 1UL;
            }
            (*p_714->g_267) = &l_166;
            if (l_269[1][0])
                continue;
        }
    }
    (*p_714->g_186) ^= ((VECTOR(int32_t, 2))(p_714->g_270.se9)).lo;
    return p_85;
}


/* ------------------------------------------ */
/* 
 * reads : p_714->g_132 p_714->g_133 p_714->g_67 p_714->g_comm_values p_714->g_82 p_714->l_comm_values p_714->g_23 p_714->g_25
 * writes: p_714->g_152 p_714->g_comm_values p_714->g_155 p_714->g_67
 */
int64_t  func_86(uint8_t  p_87, uint64_t  p_88, struct S0 * p_714)
{ /* block id: 36 */
    int32_t *l_104 = (void*)0;
    int32_t l_105 = 0x66909438L;
    int32_t *l_106 = &l_105;
    int32_t *l_107 = (void*)0;
    int32_t *l_108 = (void*)0;
    int32_t *l_109 = (void*)0;
    int32_t l_110 = 0x234FC06BL;
    int32_t *l_111 = &l_110;
    int32_t *l_112[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_113 = 3UL;
    VECTOR(uint16_t, 8) l_120 = (VECTOR(uint16_t, 8))(0x947AL, (VECTOR(uint16_t, 4))(0x947AL, (VECTOR(uint16_t, 2))(0x947AL, 0UL), 0UL), 0UL, 0x947AL, 0UL);
    VECTOR(uint16_t, 8) l_131 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xA8FCL), 0xA8FCL), 0xA8FCL, 1UL, 0xA8FCL);
    uint8_t *l_134 = &p_714->g_25;
    uint32_t *l_142[5][7][5] = {{{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113}},{{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113}},{{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113}},{{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113}},{{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113},{&l_113,&l_113,&l_113,&l_113,&l_113}}};
    int8_t l_143 = 0x42L;
    int8_t l_144 = 0x72L;
    int8_t l_145 = 0x16L;
    int64_t *l_146 = (void*)0;
    int64_t *l_147 = (void*)0;
    int64_t *l_148 = (void*)0;
    int64_t *l_149 = (void*)0;
    int64_t *l_150[7][4][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int16_t *l_151 = &p_714->g_152;
    uint16_t *l_153 = (void*)0;
    uint16_t *l_154 = (void*)0;
    int i, j, k;
    l_113++;
    p_714->g_67 = ((((((safe_mul_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u((p_714->g_155 = ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_120.s4645)), (((safe_rshift_func_int16_t_s_u(p_87, (safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), (safe_mul_func_uint16_t_u_u(0x1A4DL, GROUP_DIVERGE(1, 1))))))) == ((((safe_add_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(min(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_131.s2623)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xAF96L, 65530UL)), 0xE51FL, 65532UL)), 0x8B86L, ((VECTOR(uint16_t, 4))(rhadd(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(p_714->g_132.s71)).yyxx)).yzzywzzx, ((VECTOR(uint8_t, 4))(0xBDL, ((VECTOR(uint8_t, 2))(p_714->g_133.s98)), 255UL)).xwywzxwz))).s0613154044044750, ((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))((l_134 != ((p_714->g_comm_values[p_714->tid] ^= (p_87 || ((&p_714->g_15 != (((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(((*l_151) = ((safe_div_func_uint32_t_u_u((l_143 = (safe_unary_minus_func_uint16_t_u(p_88))), (l_144 = p_88))) | ((*l_111) = ((p_714->g_133.s3 , (0UL || l_145)) && (*l_111))))), p_87)), 5)) , 0xCBF0C4E8L) , (void*)0)) <= p_714->g_67))) , (void*)0)), (-3L), p_714->g_82.s4, ((VECTOR(int8_t, 2))((-9L))), ((VECTOR(int8_t, 8))(5L)), ((VECTOR(int8_t, 2))((-1L))), 0x4BL)).lo)).odd, ((VECTOR(int8_t, 4))(1L))))).even, ((VECTOR(int8_t, 2))(0L))))).yyxxxyyyyyxxyyyx))).sef2f, ((VECTOR(uint16_t, 4))(65535UL))))), ((VECTOR(uint16_t, 2))(0UL)), 65535UL)).even, ((VECTOR(uint16_t, 8))(1UL)), ((VECTOR(uint16_t, 8))(0x1343L))))), ((VECTOR(uint16_t, 8))(0x8235L))))).s1, p_714->l_comm_values[(safe_mod_func_uint32_t_u_u(p_714->tid, 112))])) <= 0L) , p_714->g_82.s3), p_714->g_23)) == 0x5761L) | p_87) && 0xF2B0L)) < p_88), 65532UL, 0xBFB4L, 4UL))))))).lo)).y), FAKE_DIVERGE(p_714->global_0_offset, get_global_id(0), 10))) > p_714->g_25) , p_714->g_132.s0) > p_714->l_comm_values[(safe_mod_func_uint32_t_u_u(p_714->tid, 112))]), 65535UL)) != p_87) | p_714->g_67) , p_714->g_82.s7) >= (*l_106)) & (*l_106));
    return p_88;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[49];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 49; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[49];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 49; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[112];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 112; i++)
            l_comm_values[i] = 1;
    struct S0 c_715;
    struct S0* p_714 = &c_715;
    struct S0 c_716 = {
        0x4DL, // p_714->g_15
        0x013CEF33L, // p_714->g_23
        252UL, // p_714->g_25
        1L, // p_714->g_67
        (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x730BDA1AL), 0x730BDA1AL), 0x730BDA1AL, (-4L), 0x730BDA1AL), // p_714->g_82
        (void*)0, // p_714->g_93
        (VECTOR(uint8_t, 8))(0xC8L, (VECTOR(uint8_t, 4))(0xC8L, (VECTOR(uint8_t, 2))(0xC8L, 0UL), 0UL), 0UL, 0xC8L, 0UL), // p_714->g_132
        (VECTOR(uint8_t, 16))(0xBCL, (VECTOR(uint8_t, 4))(0xBCL, (VECTOR(uint8_t, 2))(0xBCL, 255UL), 255UL), 255UL, 0xBCL, 255UL, (VECTOR(uint8_t, 2))(0xBCL, 255UL), (VECTOR(uint8_t, 2))(0xBCL, 255UL), 0xBCL, 255UL, 0xBCL, 255UL), // p_714->g_133
        7L, // p_714->g_152
        7UL, // p_714->g_155
        0xCA7198ECC7ADD918L, // p_714->g_183
        (void*)0, // p_714->g_185
        &p_714->g_67, // p_714->g_186
        (VECTOR(int32_t, 16))(0x30730238L, (VECTOR(int32_t, 4))(0x30730238L, (VECTOR(int32_t, 2))(0x30730238L, 0L), 0L), 0L, 0x30730238L, 0L, (VECTOR(int32_t, 2))(0x30730238L, 0L), (VECTOR(int32_t, 2))(0x30730238L, 0L), 0x30730238L, 0L, 0x30730238L, 0L), // p_714->g_189
        (-1L), // p_714->g_199
        4294967290UL, // p_714->g_211
        &p_714->g_211, // p_714->g_210
        &p_714->g_210, // p_714->g_209
        255UL, // p_714->g_223
        (void*)0, // p_714->g_268
        &p_714->g_268, // p_714->g_267
        (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 1L), 1L), 1L, 2L, 1L, (VECTOR(int32_t, 2))(2L, 1L), (VECTOR(int32_t, 2))(2L, 1L), 2L, 1L, 2L, 1L), // p_714->g_270
        (VECTOR(uint32_t, 16))(0x0570BC3FL, (VECTOR(uint32_t, 4))(0x0570BC3FL, (VECTOR(uint32_t, 2))(0x0570BC3FL, 4294967288UL), 4294967288UL), 4294967288UL, 0x0570BC3FL, 4294967288UL, (VECTOR(uint32_t, 2))(0x0570BC3FL, 4294967288UL), (VECTOR(uint32_t, 2))(0x0570BC3FL, 4294967288UL), 0x0570BC3FL, 4294967288UL, 0x0570BC3FL, 4294967288UL), // p_714->g_296
        (VECTOR(int32_t, 4))(0x78C02F5CL, (VECTOR(int32_t, 2))(0x78C02F5CL, 3L), 3L), // p_714->g_301
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7F163C79L), 0x7F163C79L), // p_714->g_303
        (VECTOR(uint32_t, 2))(1UL, 0x24582E66L), // p_714->g_318
        &p_714->g_15, // p_714->g_322
        &p_714->g_322, // p_714->g_321
        &p_714->g_321, // p_714->g_320
        (void*)0, // p_714->g_325
        &p_714->g_325, // p_714->g_324
        (VECTOR(uint32_t, 2))(4294967295UL, 4294967286UL), // p_714->g_329
        {&p_714->g_67,&p_714->g_67,&p_714->g_67,&p_714->g_67}, // p_714->g_333
        (void*)0, // p_714->g_334
        (void*)0, // p_714->g_336
        (-5L), // p_714->g_461
        {{(void*)0,&p_714->g_461,&p_714->g_461},{(void*)0,&p_714->g_461,&p_714->g_461},{(void*)0,&p_714->g_461,&p_714->g_461},{(void*)0,&p_714->g_461,&p_714->g_461},{(void*)0,&p_714->g_461,&p_714->g_461},{(void*)0,&p_714->g_461,&p_714->g_461},{(void*)0,&p_714->g_461,&p_714->g_461},{(void*)0,&p_714->g_461,&p_714->g_461},{(void*)0,&p_714->g_461,&p_714->g_461},{(void*)0,&p_714->g_461,&p_714->g_461}}, // p_714->g_460
        (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x4396L), 0x4396L), 0x4396L, 0UL, 0x4396L), // p_714->g_522
        (VECTOR(uint16_t, 4))(0xFF46L, (VECTOR(uint16_t, 2))(0xFF46L, 65534UL), 65534UL), // p_714->g_529
        (VECTOR(int8_t, 2))(0L, (-2L)), // p_714->g_537
        0x8D445506L, // p_714->g_546
        1L, // p_714->g_554
        &p_714->g_322, // p_714->g_573
        &p_714->g_573, // p_714->g_572
        {{&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572},{&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572},{&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572},{&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572},{&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572},{&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572},{&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572},{&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572},{&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572,&p_714->g_572}}, // p_714->g_571
        (VECTOR(uint32_t, 8))(0x31F8D096L, (VECTOR(uint32_t, 4))(0x31F8D096L, (VECTOR(uint32_t, 2))(0x31F8D096L, 0xC1A267EAL), 0xC1A267EAL), 0xC1A267EAL, 0x31F8D096L, 0xC1A267EAL), // p_714->g_574
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L), // p_714->g_588
        (VECTOR(uint64_t, 8))(18446744073709551609UL, (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 0x5625C6D591BE59D8L), 0x5625C6D591BE59D8L), 0x5625C6D591BE59D8L, 18446744073709551609UL, 0x5625C6D591BE59D8L), // p_714->g_594
        0xD78DL, // p_714->g_600
        {{{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155}},{{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155}},{{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155}},{{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155}},{{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155}},{{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155}},{{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155},{&p_714->g_600,&p_714->g_600,&p_714->g_155,&p_714->g_155}}}, // p_714->g_611
        &p_714->g_611[0][0][3], // p_714->g_610
        &p_714->g_152, // p_714->g_620
        {{&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620},{&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620},{&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620,&p_714->g_620}}, // p_714->g_619
        (VECTOR(uint8_t, 2))(0x13L, 0x5DL), // p_714->g_626
        0L, // p_714->g_645
        0x5FE4L, // p_714->g_657
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L), // p_714->g_665
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0L), 0L), 0L, 1L, 0L), // p_714->g_685
        8L, // p_714->g_702
        0, // p_714->v_collective
        sequence_input[get_global_id(0)], // p_714->global_0_offset
        sequence_input[get_global_id(1)], // p_714->global_1_offset
        sequence_input[get_global_id(2)], // p_714->global_2_offset
        sequence_input[get_local_id(0)], // p_714->local_0_offset
        sequence_input[get_local_id(1)], // p_714->local_1_offset
        sequence_input[get_local_id(2)], // p_714->local_2_offset
        sequence_input[get_group_id(0)], // p_714->group_0_offset
        sequence_input[get_group_id(1)], // p_714->group_1_offset
        sequence_input[get_group_id(2)], // p_714->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 112)), permutations[0][get_linear_local_id()])), // p_714->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_715 = c_716;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_714);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_714->g_15, "p_714->g_15", print_hash_value);
    transparent_crc(p_714->g_23, "p_714->g_23", print_hash_value);
    transparent_crc(p_714->g_25, "p_714->g_25", print_hash_value);
    transparent_crc(p_714->g_67, "p_714->g_67", print_hash_value);
    transparent_crc(p_714->g_82.s0, "p_714->g_82.s0", print_hash_value);
    transparent_crc(p_714->g_82.s1, "p_714->g_82.s1", print_hash_value);
    transparent_crc(p_714->g_82.s2, "p_714->g_82.s2", print_hash_value);
    transparent_crc(p_714->g_82.s3, "p_714->g_82.s3", print_hash_value);
    transparent_crc(p_714->g_82.s4, "p_714->g_82.s4", print_hash_value);
    transparent_crc(p_714->g_82.s5, "p_714->g_82.s5", print_hash_value);
    transparent_crc(p_714->g_82.s6, "p_714->g_82.s6", print_hash_value);
    transparent_crc(p_714->g_82.s7, "p_714->g_82.s7", print_hash_value);
    transparent_crc(p_714->g_132.s0, "p_714->g_132.s0", print_hash_value);
    transparent_crc(p_714->g_132.s1, "p_714->g_132.s1", print_hash_value);
    transparent_crc(p_714->g_132.s2, "p_714->g_132.s2", print_hash_value);
    transparent_crc(p_714->g_132.s3, "p_714->g_132.s3", print_hash_value);
    transparent_crc(p_714->g_132.s4, "p_714->g_132.s4", print_hash_value);
    transparent_crc(p_714->g_132.s5, "p_714->g_132.s5", print_hash_value);
    transparent_crc(p_714->g_132.s6, "p_714->g_132.s6", print_hash_value);
    transparent_crc(p_714->g_132.s7, "p_714->g_132.s7", print_hash_value);
    transparent_crc(p_714->g_133.s0, "p_714->g_133.s0", print_hash_value);
    transparent_crc(p_714->g_133.s1, "p_714->g_133.s1", print_hash_value);
    transparent_crc(p_714->g_133.s2, "p_714->g_133.s2", print_hash_value);
    transparent_crc(p_714->g_133.s3, "p_714->g_133.s3", print_hash_value);
    transparent_crc(p_714->g_133.s4, "p_714->g_133.s4", print_hash_value);
    transparent_crc(p_714->g_133.s5, "p_714->g_133.s5", print_hash_value);
    transparent_crc(p_714->g_133.s6, "p_714->g_133.s6", print_hash_value);
    transparent_crc(p_714->g_133.s7, "p_714->g_133.s7", print_hash_value);
    transparent_crc(p_714->g_133.s8, "p_714->g_133.s8", print_hash_value);
    transparent_crc(p_714->g_133.s9, "p_714->g_133.s9", print_hash_value);
    transparent_crc(p_714->g_133.sa, "p_714->g_133.sa", print_hash_value);
    transparent_crc(p_714->g_133.sb, "p_714->g_133.sb", print_hash_value);
    transparent_crc(p_714->g_133.sc, "p_714->g_133.sc", print_hash_value);
    transparent_crc(p_714->g_133.sd, "p_714->g_133.sd", print_hash_value);
    transparent_crc(p_714->g_133.se, "p_714->g_133.se", print_hash_value);
    transparent_crc(p_714->g_133.sf, "p_714->g_133.sf", print_hash_value);
    transparent_crc(p_714->g_152, "p_714->g_152", print_hash_value);
    transparent_crc(p_714->g_155, "p_714->g_155", print_hash_value);
    transparent_crc(p_714->g_183, "p_714->g_183", print_hash_value);
    transparent_crc(p_714->g_189.s0, "p_714->g_189.s0", print_hash_value);
    transparent_crc(p_714->g_189.s1, "p_714->g_189.s1", print_hash_value);
    transparent_crc(p_714->g_189.s2, "p_714->g_189.s2", print_hash_value);
    transparent_crc(p_714->g_189.s3, "p_714->g_189.s3", print_hash_value);
    transparent_crc(p_714->g_189.s4, "p_714->g_189.s4", print_hash_value);
    transparent_crc(p_714->g_189.s5, "p_714->g_189.s5", print_hash_value);
    transparent_crc(p_714->g_189.s6, "p_714->g_189.s6", print_hash_value);
    transparent_crc(p_714->g_189.s7, "p_714->g_189.s7", print_hash_value);
    transparent_crc(p_714->g_189.s8, "p_714->g_189.s8", print_hash_value);
    transparent_crc(p_714->g_189.s9, "p_714->g_189.s9", print_hash_value);
    transparent_crc(p_714->g_189.sa, "p_714->g_189.sa", print_hash_value);
    transparent_crc(p_714->g_189.sb, "p_714->g_189.sb", print_hash_value);
    transparent_crc(p_714->g_189.sc, "p_714->g_189.sc", print_hash_value);
    transparent_crc(p_714->g_189.sd, "p_714->g_189.sd", print_hash_value);
    transparent_crc(p_714->g_189.se, "p_714->g_189.se", print_hash_value);
    transparent_crc(p_714->g_189.sf, "p_714->g_189.sf", print_hash_value);
    transparent_crc(p_714->g_199, "p_714->g_199", print_hash_value);
    transparent_crc(p_714->g_211, "p_714->g_211", print_hash_value);
    transparent_crc(p_714->g_223, "p_714->g_223", print_hash_value);
    transparent_crc(p_714->g_270.s0, "p_714->g_270.s0", print_hash_value);
    transparent_crc(p_714->g_270.s1, "p_714->g_270.s1", print_hash_value);
    transparent_crc(p_714->g_270.s2, "p_714->g_270.s2", print_hash_value);
    transparent_crc(p_714->g_270.s3, "p_714->g_270.s3", print_hash_value);
    transparent_crc(p_714->g_270.s4, "p_714->g_270.s4", print_hash_value);
    transparent_crc(p_714->g_270.s5, "p_714->g_270.s5", print_hash_value);
    transparent_crc(p_714->g_270.s6, "p_714->g_270.s6", print_hash_value);
    transparent_crc(p_714->g_270.s7, "p_714->g_270.s7", print_hash_value);
    transparent_crc(p_714->g_270.s8, "p_714->g_270.s8", print_hash_value);
    transparent_crc(p_714->g_270.s9, "p_714->g_270.s9", print_hash_value);
    transparent_crc(p_714->g_270.sa, "p_714->g_270.sa", print_hash_value);
    transparent_crc(p_714->g_270.sb, "p_714->g_270.sb", print_hash_value);
    transparent_crc(p_714->g_270.sc, "p_714->g_270.sc", print_hash_value);
    transparent_crc(p_714->g_270.sd, "p_714->g_270.sd", print_hash_value);
    transparent_crc(p_714->g_270.se, "p_714->g_270.se", print_hash_value);
    transparent_crc(p_714->g_270.sf, "p_714->g_270.sf", print_hash_value);
    transparent_crc(p_714->g_296.s0, "p_714->g_296.s0", print_hash_value);
    transparent_crc(p_714->g_296.s1, "p_714->g_296.s1", print_hash_value);
    transparent_crc(p_714->g_296.s2, "p_714->g_296.s2", print_hash_value);
    transparent_crc(p_714->g_296.s3, "p_714->g_296.s3", print_hash_value);
    transparent_crc(p_714->g_296.s4, "p_714->g_296.s4", print_hash_value);
    transparent_crc(p_714->g_296.s5, "p_714->g_296.s5", print_hash_value);
    transparent_crc(p_714->g_296.s6, "p_714->g_296.s6", print_hash_value);
    transparent_crc(p_714->g_296.s7, "p_714->g_296.s7", print_hash_value);
    transparent_crc(p_714->g_296.s8, "p_714->g_296.s8", print_hash_value);
    transparent_crc(p_714->g_296.s9, "p_714->g_296.s9", print_hash_value);
    transparent_crc(p_714->g_296.sa, "p_714->g_296.sa", print_hash_value);
    transparent_crc(p_714->g_296.sb, "p_714->g_296.sb", print_hash_value);
    transparent_crc(p_714->g_296.sc, "p_714->g_296.sc", print_hash_value);
    transparent_crc(p_714->g_296.sd, "p_714->g_296.sd", print_hash_value);
    transparent_crc(p_714->g_296.se, "p_714->g_296.se", print_hash_value);
    transparent_crc(p_714->g_296.sf, "p_714->g_296.sf", print_hash_value);
    transparent_crc(p_714->g_301.x, "p_714->g_301.x", print_hash_value);
    transparent_crc(p_714->g_301.y, "p_714->g_301.y", print_hash_value);
    transparent_crc(p_714->g_301.z, "p_714->g_301.z", print_hash_value);
    transparent_crc(p_714->g_301.w, "p_714->g_301.w", print_hash_value);
    transparent_crc(p_714->g_303.x, "p_714->g_303.x", print_hash_value);
    transparent_crc(p_714->g_303.y, "p_714->g_303.y", print_hash_value);
    transparent_crc(p_714->g_303.z, "p_714->g_303.z", print_hash_value);
    transparent_crc(p_714->g_303.w, "p_714->g_303.w", print_hash_value);
    transparent_crc(p_714->g_318.x, "p_714->g_318.x", print_hash_value);
    transparent_crc(p_714->g_318.y, "p_714->g_318.y", print_hash_value);
    transparent_crc(p_714->g_329.x, "p_714->g_329.x", print_hash_value);
    transparent_crc(p_714->g_329.y, "p_714->g_329.y", print_hash_value);
    transparent_crc(p_714->g_461, "p_714->g_461", print_hash_value);
    transparent_crc(p_714->g_522.s0, "p_714->g_522.s0", print_hash_value);
    transparent_crc(p_714->g_522.s1, "p_714->g_522.s1", print_hash_value);
    transparent_crc(p_714->g_522.s2, "p_714->g_522.s2", print_hash_value);
    transparent_crc(p_714->g_522.s3, "p_714->g_522.s3", print_hash_value);
    transparent_crc(p_714->g_522.s4, "p_714->g_522.s4", print_hash_value);
    transparent_crc(p_714->g_522.s5, "p_714->g_522.s5", print_hash_value);
    transparent_crc(p_714->g_522.s6, "p_714->g_522.s6", print_hash_value);
    transparent_crc(p_714->g_522.s7, "p_714->g_522.s7", print_hash_value);
    transparent_crc(p_714->g_529.x, "p_714->g_529.x", print_hash_value);
    transparent_crc(p_714->g_529.y, "p_714->g_529.y", print_hash_value);
    transparent_crc(p_714->g_529.z, "p_714->g_529.z", print_hash_value);
    transparent_crc(p_714->g_529.w, "p_714->g_529.w", print_hash_value);
    transparent_crc(p_714->g_537.x, "p_714->g_537.x", print_hash_value);
    transparent_crc(p_714->g_537.y, "p_714->g_537.y", print_hash_value);
    transparent_crc(p_714->g_546, "p_714->g_546", print_hash_value);
    transparent_crc(p_714->g_554, "p_714->g_554", print_hash_value);
    transparent_crc(p_714->g_574.s0, "p_714->g_574.s0", print_hash_value);
    transparent_crc(p_714->g_574.s1, "p_714->g_574.s1", print_hash_value);
    transparent_crc(p_714->g_574.s2, "p_714->g_574.s2", print_hash_value);
    transparent_crc(p_714->g_574.s3, "p_714->g_574.s3", print_hash_value);
    transparent_crc(p_714->g_574.s4, "p_714->g_574.s4", print_hash_value);
    transparent_crc(p_714->g_574.s5, "p_714->g_574.s5", print_hash_value);
    transparent_crc(p_714->g_574.s6, "p_714->g_574.s6", print_hash_value);
    transparent_crc(p_714->g_574.s7, "p_714->g_574.s7", print_hash_value);
    transparent_crc(p_714->g_588.s0, "p_714->g_588.s0", print_hash_value);
    transparent_crc(p_714->g_588.s1, "p_714->g_588.s1", print_hash_value);
    transparent_crc(p_714->g_588.s2, "p_714->g_588.s2", print_hash_value);
    transparent_crc(p_714->g_588.s3, "p_714->g_588.s3", print_hash_value);
    transparent_crc(p_714->g_588.s4, "p_714->g_588.s4", print_hash_value);
    transparent_crc(p_714->g_588.s5, "p_714->g_588.s5", print_hash_value);
    transparent_crc(p_714->g_588.s6, "p_714->g_588.s6", print_hash_value);
    transparent_crc(p_714->g_588.s7, "p_714->g_588.s7", print_hash_value);
    transparent_crc(p_714->g_588.s8, "p_714->g_588.s8", print_hash_value);
    transparent_crc(p_714->g_588.s9, "p_714->g_588.s9", print_hash_value);
    transparent_crc(p_714->g_588.sa, "p_714->g_588.sa", print_hash_value);
    transparent_crc(p_714->g_588.sb, "p_714->g_588.sb", print_hash_value);
    transparent_crc(p_714->g_588.sc, "p_714->g_588.sc", print_hash_value);
    transparent_crc(p_714->g_588.sd, "p_714->g_588.sd", print_hash_value);
    transparent_crc(p_714->g_588.se, "p_714->g_588.se", print_hash_value);
    transparent_crc(p_714->g_588.sf, "p_714->g_588.sf", print_hash_value);
    transparent_crc(p_714->g_594.s0, "p_714->g_594.s0", print_hash_value);
    transparent_crc(p_714->g_594.s1, "p_714->g_594.s1", print_hash_value);
    transparent_crc(p_714->g_594.s2, "p_714->g_594.s2", print_hash_value);
    transparent_crc(p_714->g_594.s3, "p_714->g_594.s3", print_hash_value);
    transparent_crc(p_714->g_594.s4, "p_714->g_594.s4", print_hash_value);
    transparent_crc(p_714->g_594.s5, "p_714->g_594.s5", print_hash_value);
    transparent_crc(p_714->g_594.s6, "p_714->g_594.s6", print_hash_value);
    transparent_crc(p_714->g_594.s7, "p_714->g_594.s7", print_hash_value);
    transparent_crc(p_714->g_600, "p_714->g_600", print_hash_value);
    transparent_crc(p_714->g_626.x, "p_714->g_626.x", print_hash_value);
    transparent_crc(p_714->g_626.y, "p_714->g_626.y", print_hash_value);
    transparent_crc(p_714->g_645, "p_714->g_645", print_hash_value);
    transparent_crc(p_714->g_657, "p_714->g_657", print_hash_value);
    transparent_crc(p_714->g_665.s0, "p_714->g_665.s0", print_hash_value);
    transparent_crc(p_714->g_665.s1, "p_714->g_665.s1", print_hash_value);
    transparent_crc(p_714->g_665.s2, "p_714->g_665.s2", print_hash_value);
    transparent_crc(p_714->g_665.s3, "p_714->g_665.s3", print_hash_value);
    transparent_crc(p_714->g_665.s4, "p_714->g_665.s4", print_hash_value);
    transparent_crc(p_714->g_665.s5, "p_714->g_665.s5", print_hash_value);
    transparent_crc(p_714->g_665.s6, "p_714->g_665.s6", print_hash_value);
    transparent_crc(p_714->g_665.s7, "p_714->g_665.s7", print_hash_value);
    transparent_crc(p_714->g_665.s8, "p_714->g_665.s8", print_hash_value);
    transparent_crc(p_714->g_665.s9, "p_714->g_665.s9", print_hash_value);
    transparent_crc(p_714->g_665.sa, "p_714->g_665.sa", print_hash_value);
    transparent_crc(p_714->g_665.sb, "p_714->g_665.sb", print_hash_value);
    transparent_crc(p_714->g_665.sc, "p_714->g_665.sc", print_hash_value);
    transparent_crc(p_714->g_665.sd, "p_714->g_665.sd", print_hash_value);
    transparent_crc(p_714->g_665.se, "p_714->g_665.se", print_hash_value);
    transparent_crc(p_714->g_665.sf, "p_714->g_665.sf", print_hash_value);
    transparent_crc(p_714->g_685.s0, "p_714->g_685.s0", print_hash_value);
    transparent_crc(p_714->g_685.s1, "p_714->g_685.s1", print_hash_value);
    transparent_crc(p_714->g_685.s2, "p_714->g_685.s2", print_hash_value);
    transparent_crc(p_714->g_685.s3, "p_714->g_685.s3", print_hash_value);
    transparent_crc(p_714->g_685.s4, "p_714->g_685.s4", print_hash_value);
    transparent_crc(p_714->g_685.s5, "p_714->g_685.s5", print_hash_value);
    transparent_crc(p_714->g_685.s6, "p_714->g_685.s6", print_hash_value);
    transparent_crc(p_714->g_685.s7, "p_714->g_685.s7", print_hash_value);
    transparent_crc(p_714->g_702, "p_714->g_702", print_hash_value);
    transparent_crc(p_714->v_collective, "p_714->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 49; i++)
            transparent_crc(p_714->g_special_values[i + 49 * get_linear_group_id()], "p_714->g_special_values[i + 49 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 49; i++)
            transparent_crc(p_714->l_special_values[i], "p_714->l_special_values[i]", print_hash_value);
    transparent_crc(p_714->l_comm_values[get_linear_local_id()], "p_714->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_714->g_comm_values[get_linear_group_id() * 112 + get_linear_local_id()], "p_714->g_comm_values[get_linear_group_id() * 112 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
