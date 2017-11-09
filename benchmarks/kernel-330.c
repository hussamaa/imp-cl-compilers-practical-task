// --atomics 72 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 77,14,6 -l 1,7,6
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

__constant uint32_t permutations[10][42] = {
{13,35,4,36,21,33,11,3,20,32,28,19,39,15,30,25,10,8,34,27,0,24,22,7,37,16,26,23,29,40,41,31,38,9,12,6,14,1,18,17,2,5}, // permutation 0
{30,7,38,1,4,13,24,14,6,40,27,21,35,25,28,18,33,12,5,0,3,8,22,11,10,26,20,36,23,9,37,29,39,32,41,2,19,34,31,16,15,17}, // permutation 1
{19,39,12,23,35,27,3,40,33,9,41,20,2,8,26,7,11,6,29,36,32,24,10,15,25,1,21,14,34,37,0,31,22,18,38,17,28,5,30,4,16,13}, // permutation 2
{17,34,15,1,36,19,0,13,25,28,5,11,40,7,18,2,8,33,12,24,32,38,31,26,23,14,10,41,6,20,29,9,37,3,16,4,27,30,39,22,35,21}, // permutation 3
{5,4,38,35,31,15,37,20,3,25,10,8,26,41,23,14,30,16,39,29,7,2,34,19,21,33,17,12,27,13,24,6,28,22,36,0,40,18,1,11,9,32}, // permutation 4
{2,5,26,30,21,13,27,29,14,17,8,20,33,10,25,39,1,7,6,36,31,11,35,32,15,24,3,18,12,4,40,19,38,37,23,16,41,9,22,0,34,28}, // permutation 5
{13,27,1,22,32,30,16,31,15,2,41,0,20,7,26,33,11,21,3,6,24,25,40,19,38,34,23,29,28,5,39,12,14,4,9,18,36,10,17,37,35,8}, // permutation 6
{18,30,6,29,13,14,17,24,21,33,11,3,35,38,37,12,0,9,15,41,1,20,16,36,19,23,40,28,39,2,32,5,34,10,31,8,4,26,25,7,22,27}, // permutation 7
{15,5,41,29,7,33,39,2,34,38,6,28,31,26,14,18,21,11,13,23,25,4,30,32,0,1,20,35,16,3,8,37,22,12,17,36,24,27,19,9,40,10}, // permutation 8
{23,33,29,25,1,18,11,21,7,9,15,30,26,6,5,34,31,10,38,27,35,13,39,19,8,28,16,37,20,41,3,24,22,32,12,0,40,14,36,17,4,2} // permutation 9
};

// Seed: 2796339489

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   uint32_t  f0;
};

struct S1 {
    int32_t g_2;
    int32_t g_5[9];
    volatile VECTOR(uint16_t, 8) g_11;
    volatile VECTOR(uint16_t, 8) g_12;
    volatile VECTOR(uint16_t, 16) g_13;
    int64_t g_19;
    uint64_t g_27;
    int32_t g_34;
    uint32_t g_50;
    uint64_t g_60;
    int8_t g_80;
    int32_t g_83;
    volatile int16_t g_119;
    VECTOR(uint16_t, 8) g_120;
    uint8_t g_130;
    uint8_t g_132;
    struct S0 g_134;
    int32_t *g_139;
    int32_t ** volatile g_138;
    uint32_t *g_140;
    VECTOR(uint32_t, 4) g_150;
    volatile VECTOR(int64_t, 8) g_161;
    struct S0 * volatile g_173;
    int32_t ** volatile g_203;
    int32_t ** volatile g_204;
    VECTOR(uint8_t, 16) g_219;
    uint8_t g_225;
    struct S0 * volatile g_228[4][3][8];
    struct S0 * volatile g_229;
    struct S0 * volatile g_230;
    volatile VECTOR(int8_t, 2) g_237;
    int64_t g_242;
    VECTOR(uint32_t, 2) g_262;
    VECTOR(uint32_t, 8) g_263;
    uint64_t g_290[4][7];
    int32_t g_291;
    volatile VECTOR(int16_t, 8) g_304;
    int16_t g_317;
    struct S0 g_339;
    volatile uint64_t g_355;
    volatile uint64_t *g_354[2];
    volatile uint64_t **g_353;
    int32_t g_374;
    uint16_t g_375;
    uint64_t *g_380;
    volatile int8_t g_390;
    volatile int8_t *g_389;
    int8_t g_392;
    uint8_t g_401;
    int32_t g_419;
    VECTOR(uint16_t, 8) g_443;
    uint8_t g_445;
    VECTOR(uint16_t, 4) g_461;
    VECTOR(uint16_t, 2) g_511;
    int32_t ** volatile g_559;
    uint16_t g_568;
    volatile VECTOR(int16_t, 2) g_577;
    VECTOR(uint16_t, 2) g_587;
    int16_t g_608;
    VECTOR(uint8_t, 8) g_622;
    VECTOR(int64_t, 4) g_634;
    VECTOR(int64_t, 8) g_637;
    VECTOR(int16_t, 2) g_642;
    VECTOR(uint32_t, 4) g_647;
    volatile uint32_t g_669[1][10][6];
    int64_t g_683;
    volatile VECTOR(uint16_t, 8) g_698;
    uint32_t g_717;
    struct S0 **g_723;
    volatile struct S0 g_726[4];
    volatile struct S0 * volatile g_725;
    volatile struct S0 * volatile *g_724;
    VECTOR(uint32_t, 8) g_730;
    VECTOR(uint32_t, 2) g_735;
    int32_t ** volatile g_754;
    volatile VECTOR(int16_t, 8) g_757;
    int64_t * volatile g_789[6][3];
    int64_t * volatile *g_788;
    int64_t g_798;
    int32_t * volatile g_802;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S1 * p_803);
uint8_t  func_14(int32_t  p_15, int16_t  p_16, int32_t  p_17, int32_t  p_18, struct S1 * p_803);
int16_t  func_30(uint8_t  p_31, int32_t  p_32, struct S1 * p_803);
struct S0  func_37(uint64_t * p_38, uint64_t * p_39, uint32_t  p_40, struct S1 * p_803);
uint64_t * func_41(int32_t * p_42, uint32_t  p_43, int32_t * p_44, uint64_t * p_45, struct S1 * p_803);
int32_t * func_51(uint32_t  p_52, uint16_t  p_53, uint32_t * p_54, struct S1 * p_803);
uint32_t * func_87(struct S0  p_88, int64_t  p_89, uint8_t  p_90, uint32_t  p_91, int64_t  p_92, struct S1 * p_803);
struct S0  func_93(uint64_t  p_94, int64_t  p_95, uint64_t * p_96, int32_t * p_97, struct S1 * p_803);
uint64_t  func_98(int8_t  p_99, struct S1 * p_803);
int32_t  func_100(uint64_t  p_101, int8_t * p_102, uint64_t * p_103, uint32_t * p_104, struct S1 * p_803);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_803->g_2 p_803->g_374 p_803->g_419 p_803->g_5 p_803->g_219 p_803->g_290 p_803->g_138 p_803->g_389 p_803->g_390 p_803->g_291 p_803->g_788 p_803->g_263 p_803->g_139 p_803->g_34 p_803->g_132 p_803->g_130 p_803->g_798 p_803->g_511 p_803->g_608 p_803->g_204 p_803->g_339.f0 p_803->g_717 p_803->g_730 p_803->g_802 p_803->g_120
 * writes: p_803->g_2 p_803->g_5 p_803->g_374 p_803->g_419 p_803->g_139 p_803->g_392 p_803->g_34 p_803->g_608 p_803->g_80
 */
int32_t  func_1(struct S1 * p_803)
{ /* block id: 4 */
    VECTOR(uint64_t, 4) l_9 = (VECTOR(uint64_t, 4))(0x1FC2DA8AFC1DA7BCL, (VECTOR(uint64_t, 2))(0x1FC2DA8AFC1DA7BCL, 0x958900FDB6968939L), 0x958900FDB6968939L);
    struct S0 l_420 = {0xA440BE90L};
    int32_t *l_430 = (void*)0;
    uint64_t *l_432[2][8] = {{&p_803->g_290[0][2],&p_803->g_290[0][2],&p_803->g_290[0][2],&p_803->g_60,(void*)0,&p_803->g_60,&p_803->g_290[0][2],&p_803->g_290[0][2]},{&p_803->g_290[0][2],&p_803->g_290[0][2],&p_803->g_290[0][2],&p_803->g_60,(void*)0,&p_803->g_60,&p_803->g_290[0][2],&p_803->g_290[0][2]}};
    VECTOR(uint8_t, 4) l_435 = (VECTOR(uint8_t, 4))(0xBEL, (VECTOR(uint8_t, 2))(0xBEL, 251UL), 251UL);
    int32_t l_486 = 0x5DF39C66L;
    uint16_t *l_503 = (void*)0;
    uint8_t l_508 = 255UL;
    VECTOR(uint64_t, 16) l_633 = (VECTOR(uint64_t, 16))(18446744073709551606UL, (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0x8551256B6028E11AL), 0x8551256B6028E11AL), 0x8551256B6028E11AL, 18446744073709551606UL, 0x8551256B6028E11AL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 0x8551256B6028E11AL), (VECTOR(uint64_t, 2))(18446744073709551606UL, 0x8551256B6028E11AL), 18446744073709551606UL, 0x8551256B6028E11AL, 18446744073709551606UL, 0x8551256B6028E11AL);
    int32_t l_659[9][3];
    int32_t l_663[9][2] = {{7L,0x4256668CL},{7L,0x4256668CL},{7L,0x4256668CL},{7L,0x4256668CL},{7L,0x4256668CL},{7L,0x4256668CL},{7L,0x4256668CL},{7L,0x4256668CL},{7L,0x4256668CL}};
    int32_t **l_771 = &l_430;
    int32_t ***l_770 = &l_771;
    int64_t *l_787 = &p_803->g_19;
    int64_t **l_786 = &l_787;
    int8_t *l_796 = &p_803->g_392;
    int64_t l_797 = 1L;
    uint64_t l_799 = 18446744073709551611UL;
    int16_t *l_800 = &p_803->g_608;
    int8_t *l_801 = &p_803->g_80;
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
            l_659[i][j] = (-2L);
    }
    for (p_803->g_2 = 2; (p_803->g_2 == (-24)); p_803->g_2--)
    { /* block id: 7 */
        VECTOR(uint64_t, 8) l_10 = (VECTOR(uint64_t, 8))(0xB6CD333563700168L, (VECTOR(uint64_t, 4))(0xB6CD333563700168L, (VECTOR(uint64_t, 2))(0xB6CD333563700168L, 0UL), 0UL), 0UL, 0xB6CD333563700168L, 0UL);
        int8_t *l_391 = &p_803->g_392;
        int32_t *l_431 = &p_803->g_34;
        uint16_t *l_438[3];
        int16_t *l_444[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        VECTOR(uint8_t, 2) l_450 = (VECTOR(uint8_t, 2))(0xE8L, 0xC4L);
        int32_t *l_453 = &p_803->g_291;
        uint32_t *l_454 = &p_803->g_339.f0;
        uint64_t *l_455[6][2][9] = {{{&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60,&p_803->g_27,&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60},{&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60,&p_803->g_27,&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60}},{{&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60,&p_803->g_27,&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60},{&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60,&p_803->g_27,&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60}},{{&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60,&p_803->g_27,&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60},{&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60,&p_803->g_27,&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60}},{{&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60,&p_803->g_27,&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60},{&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60,&p_803->g_27,&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60}},{{&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60,&p_803->g_27,&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60},{&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60,&p_803->g_27,&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60}},{{&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60,&p_803->g_27,&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60},{&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60,&p_803->g_27,&p_803->g_27,&p_803->g_60,(void*)0,&p_803->g_60}}};
        struct S0 *l_456 = &l_420;
        int64_t l_474[3][1][2] = {{{(-1L),(-1L)}},{{(-1L),(-1L)}},{{(-1L),(-1L)}}};
        int16_t l_507 = 0L;
        uint8_t l_521 = 0x85L;
        VECTOR(int32_t, 2) l_562 = (VECTOR(int32_t, 2))(1L, 0x274E53D0L);
        VECTOR(uint64_t, 2) l_573 = (VECTOR(uint64_t, 2))(0xCC4E5BD31B5EE364L, 8UL);
        VECTOR(int8_t, 8) l_620 = (VECTOR(int8_t, 8))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x10L), 0x10L), 0x10L, (-2L), 0x10L);
        VECTOR(uint16_t, 4) l_625 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL);
        int16_t l_667 = 0L;
        uint32_t l_678 = 0xD2039BCFL;
        VECTOR(int64_t, 16) l_699 = (VECTOR(int64_t, 16))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 1L), 1L), 1L, (-9L), 1L, (VECTOR(int64_t, 2))((-9L), 1L), (VECTOR(int64_t, 2))((-9L), 1L), (-9L), 1L, (-9L), 1L);
        VECTOR(int32_t, 4) l_712 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x59D131D2L), 0x59D131D2L);
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_438[i] = &p_803->g_375;
        for (p_803->g_5[4] = (-22); (p_803->g_5[4] == 1); ++p_803->g_5[4])
        { /* block id: 10 */
            VECTOR(uint64_t, 16) l_8 = (VECTOR(uint64_t, 16))(0x61D2250DB8561371L, (VECTOR(uint64_t, 4))(0x61D2250DB8561371L, (VECTOR(uint64_t, 2))(0x61D2250DB8561371L, 0xE9FB1C03809D0107L), 0xE9FB1C03809D0107L), 0xE9FB1C03809D0107L, 0x61D2250DB8561371L, 0xE9FB1C03809D0107L, (VECTOR(uint64_t, 2))(0x61D2250DB8561371L, 0xE9FB1C03809D0107L), (VECTOR(uint64_t, 2))(0x61D2250DB8561371L, 0xE9FB1C03809D0107L), 0x61D2250DB8561371L, 0xE9FB1C03809D0107L, 0x61D2250DB8561371L, 0xE9FB1C03809D0107L);
            uint64_t *l_20 = (void*)0;
            uint64_t *l_21 = (void*)0;
            uint64_t *l_22 = (void*)0;
            uint64_t *l_23 = (void*)0;
            uint64_t *l_24 = (void*)0;
            uint64_t *l_25[9];
            int32_t l_26 = 6L;
            int64_t l_416 = 0x28518AC3DCB07F7AL;
            int32_t *l_417 = &p_803->g_374;
            int32_t *l_418 = &p_803->g_419;
            int32_t **l_429[2];
            int i;
            for (i = 0; i < 9; i++)
                l_25[i] = (void*)0;
            for (i = 0; i < 2; i++)
                l_429[i] = &p_803->g_139;
            (*l_418) ^= ((*l_417) ^= (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 8))(l_8.s89328a06)), ((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 2))(sub_sat(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(l_9.wywz)))))).hi, ((VECTOR(uint64_t, 4))(l_10.s3442)).odd))).xxyyxxxy, ((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(18446744073709551611UL, ((VECTOR(uint64_t, 8))(rhadd(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))((((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 8))(65535UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(p_803->g_11.s3300062646530356)).s46)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(p_803->g_12.s36253547)))).s0254101450603423))).scea2)), 0x3E14L)).s13, ((VECTOR(uint16_t, 8))(p_803->g_13.sd437f1bd)).s53))).odd >= 0x4566L), ((+func_14((l_9.z <= (p_803->g_27++)), func_30(p_803->g_comm_values[p_803->tid], l_8.s1, p_803), ((safe_lshift_func_uint16_t_u_s(0x578DL, 9)) || ((safe_div_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(p_803->g_263.s2, ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(0x745FDAD9L, 0x69B4658DL, 0x192B284CL, 0x6C3ED861L)).yyzxzzzx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((p_803->g_389 != l_391) >= 65533UL), p_803->g_120.s0)), p_803->l_comm_values[(safe_mod_func_uint32_t_u_u(p_803->tid, 42))])) , 0x41C1ADFDL), ((VECTOR(int32_t, 2))(0x7F4E7C8DL)), 0x00F0CF19L, ((VECTOR(int32_t, 2))(0x526589F5L)), (-1L), 0x06FE032AL)))), ((VECTOR(int32_t, 8))((-10L)))))), (-2L), ((VECTOR(int32_t, 4))(0x36844008L)), 0x06B61277L, 0x20654CC5L)).s78bd, ((VECTOR(int32_t, 4))(0x78E4D5AAL))))).hi)).yxyx, ((VECTOR(int32_t, 4))(9L))))))).x, p_803->g_comm_values[p_803->tid])) | l_9.z)), l_10.s1, p_803)) != p_803->g_263.s6), 0xAA743340CB0F1A6EL, 0UL, 0x800CC65EF94EA87FL, ((VECTOR(uint64_t, 4))(0x49CCF5684AA2D1A5L)), 0xB29B6947C06B6392L, l_26, ((VECTOR(uint64_t, 4))(0xAF1C2312C8D5EFAAL)), 0xDB96623097A1D36FL)).sd1b1)))).yxwzzwww, ((VECTOR(uint64_t, 8))(18446744073709551615UL))))), 0x4CDEB4E6CA02F0E0L, 4UL, ((VECTOR(uint64_t, 2))(0x7C825F862E142DFAL)), l_416, 0xE2821D64F1DF2DCFL, 0xDB8272E40310098DL)).s11)), 0x2AC1A827954CA517L, 0xD42E128A9A34BC36L)), 0x6B6E503A2894C2EAL, ((VECTOR(uint64_t, 2))(2UL)), 0xDCBF25A782DD4AD8L)).s0560473402004767)).s008b, ((VECTOR(uint64_t, 4))(1UL)), ((VECTOR(uint64_t, 4))(0xE1FB380E904D709AL))))).xyzzyxxw)))))).hi)).y , (-1L)));
            l_431 = (l_430 = func_87(l_420, p_803->g_5[4], (*l_417), l_10.s6, (~(1UL && (l_10.s2 <= (safe_add_func_uint8_t_u_u(((*l_417) , (!1UL)), (safe_mul_func_uint16_t_u_u((safe_mod_func_int8_t_s_s((l_9.w == p_803->g_219.s7), 1UL)), p_803->g_290[0][2]))))))), p_803));
        }
    }
    (*p_803->g_802) = ((((*l_770) = (void*)0) == (((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(0x35D7044FL, 0x1D6FA9D9L)), ((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 4))(6L, ((VECTOR(int32_t, 2))(5L, 0x6413BD4AL)), 0x21ADADB7L)), ((((*l_801) = (!(safe_sub_func_uint32_t_u_u((!0x521718F3L), ((((*l_800) &= (~(safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s((*p_803->g_389), (safe_add_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(p_803->g_291, (((*p_803->g_139) = ((((((l_786 == p_803->g_788) <= ((((((safe_mod_func_uint16_t_u_u((p_803->g_263.s2 < ((safe_sub_func_int16_t_s_s((-1L), ((safe_rshift_func_int8_t_s_u((((*l_796) = p_803->g_5[4]) == 0xDAL), 6)) , l_797))) , l_659[3][1])), 0x726CL)) || (*p_803->g_139)) < l_797) , (void*)0) == (void*)0) && p_803->g_132)) && p_803->g_130) <= p_803->g_798) < 1UL) ^ l_659[6][1])) && 0x6D80A09AL))) != l_799), 0x7B9AL)))), p_803->g_511.x)))) , 0x5C69BF18L) , (**p_803->g_204)))))) ^ p_803->g_339.f0) != p_803->g_717), 0x5DD00123L, ((VECTOR(int32_t, 4))(0L)), 0x37E163F8L, ((VECTOR(int32_t, 4))(0x7C453615L)))).s2a))).hi, 0x6639DA02L)) > 0x11C4A32865DB5F1CL), ((VECTOR(uint16_t, 8))(65530UL)), p_803->g_263.s6, 65535UL, ((VECTOR(uint16_t, 2))(0x8C3AL)), GROUP_DIVERGE(1, 1), 65534UL, 0xF9E6L)).s3, p_803->g_730.s6)) < 0L) , (void*)0)) & l_799);
    return p_803->g_120.s0;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_138 p_803->g_5 p_803->g_401 p_803->g_173 p_803->g_317 p_803->g_139 p_803->g_60 p_803->g_150 p_803->g_134.f0
 * writes: p_803->g_139 p_803->g_134 p_803->g_317 p_803->g_60
 */
uint8_t  func_14(int32_t  p_15, int16_t  p_16, int32_t  p_17, int32_t  p_18, struct S1 * p_803)
{ /* block id: 161 */
    int32_t *l_393 = &p_803->g_5[4];
    int32_t **l_394[8] = {&p_803->g_139,&p_803->g_139,&p_803->g_139,&p_803->g_139,&p_803->g_139,&p_803->g_139,&p_803->g_139,&p_803->g_139};
    int32_t *l_395 = &p_803->g_83;
    struct S0 *l_412[3];
    int i;
    for (i = 0; i < 3; i++)
        l_412[i] = (void*)0;
    l_395 = ((*p_803->g_138) = l_393);
    if (p_15)
    { /* block id: 164 */
        int32_t *l_398 = &p_803->g_5[7];
        int32_t l_400[10] = {8L,8L,8L,8L,8L,8L,8L,8L,8L,8L};
        struct S0 l_402 = {0x0C7360C2L};
        int i;
        for (p_17 = 0; (p_17 != 23); ++p_17)
        { /* block id: 167 */
            int32_t *l_399 = &p_803->g_34;
            l_399 = l_398;
            return l_400[7];
        }
        if ((((!(*l_398)) & p_18) , p_803->g_401))
        { /* block id: 171 */
            struct S0 *l_403[10][8] = {{(void*)0,&p_803->g_339,&p_803->g_134,&p_803->g_134,(void*)0,(void*)0,&p_803->g_134,&p_803->g_134},{(void*)0,&p_803->g_339,&p_803->g_134,&p_803->g_134,(void*)0,(void*)0,&p_803->g_134,&p_803->g_134},{(void*)0,&p_803->g_339,&p_803->g_134,&p_803->g_134,(void*)0,(void*)0,&p_803->g_134,&p_803->g_134},{(void*)0,&p_803->g_339,&p_803->g_134,&p_803->g_134,(void*)0,(void*)0,&p_803->g_134,&p_803->g_134},{(void*)0,&p_803->g_339,&p_803->g_134,&p_803->g_134,(void*)0,(void*)0,&p_803->g_134,&p_803->g_134},{(void*)0,&p_803->g_339,&p_803->g_134,&p_803->g_134,(void*)0,(void*)0,&p_803->g_134,&p_803->g_134},{(void*)0,&p_803->g_339,&p_803->g_134,&p_803->g_134,(void*)0,(void*)0,&p_803->g_134,&p_803->g_134},{(void*)0,&p_803->g_339,&p_803->g_134,&p_803->g_134,(void*)0,(void*)0,&p_803->g_134,&p_803->g_134},{(void*)0,&p_803->g_339,&p_803->g_134,&p_803->g_134,(void*)0,(void*)0,&p_803->g_134,&p_803->g_134},{(void*)0,&p_803->g_339,&p_803->g_134,&p_803->g_134,(void*)0,(void*)0,&p_803->g_134,&p_803->g_134}};
            int32_t *l_406 = &p_803->g_34;
            int i, j;
            (*p_803->g_173) = l_402;
            for (p_803->g_317 = (-28); (p_803->g_317 > (-6)); p_803->g_317 = safe_add_func_uint8_t_u_u(p_803->g_317, 1))
            { /* block id: 175 */
                l_406 = (*p_803->g_138);
            }
            for (p_803->g_60 = (-16); (p_803->g_60 == 60); p_803->g_60++)
            { /* block id: 180 */
                int32_t *l_413 = &p_803->g_5[4];
                for (p_18 = (-23); (p_18 == 14); p_18 = safe_add_func_uint64_t_u_u(p_18, 8))
                { /* block id: 183 */
                    struct S0 **l_411[5][4][7] = {{{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0},{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0},{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0},{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0}},{{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0},{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0},{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0},{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0}},{{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0},{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0},{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0},{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0}},{{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0},{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0},{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0},{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0}},{{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0},{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0},{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0},{&l_403[1][5],(void*)0,&l_403[5][4],&l_403[1][5],&l_403[7][7],&l_403[7][0],(void*)0}}};
                    int i, j, k;
                    l_412[1] = &p_803->g_134;
                    if ((*l_398))
                        break;
                }
                (*p_803->g_138) = l_413;
                return p_15;
            }
        }
        else
        { /* block id: 190 */
            return p_803->g_150.w;
        }
    }
    else
    { /* block id: 193 */
        uint32_t l_414[4];
        int32_t *l_415 = &p_803->g_2;
        int i;
        for (i = 0; i < 4; i++)
            l_414[i] = 1UL;
        l_414[3] &= ((VECTOR(int32_t, 4))(0x704FFF94L, ((VECTOR(int32_t, 2))((-1L), (-3L))), 0x3A6B289DL)).y;
        (*p_803->g_138) = l_415;
    }
    return p_803->g_134.f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_2 p_803->g_13 p_803->g_12 p_803->g_50 p_803->g_5 p_803->g_83 p_803->g_150 p_803->g_204 p_803->g_139 p_803->g_60 p_803->g_291 p_803->g_225 p_803->g_134 p_803->g_263 p_803->g_290 p_803->g_219 p_803->g_161 p_803->g_138 p_803->g_132 p_803->g_34 p_803->g_353 p_803->g_354 p_803->g_355 p_803->g_375 p_803->g_173 p_803->g_80
 * writes: p_803->g_34 p_803->g_80 p_803->g_83 p_803->g_50 p_803->g_60 p_803->g_291 p_803->g_134 p_803->g_139 p_803->g_290 p_803->g_339 p_803->g_132 p_803->g_375 p_803->g_380
 */
int16_t  func_30(uint8_t  p_31, int32_t  p_32, struct S1 * p_803)
{ /* block id: 12 */
    int32_t *l_33 = &p_803->g_34;
    uint32_t *l_56 = (void*)0;
    VECTOR(int16_t, 16) l_346 = (VECTOR(int16_t, 16))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), (-9L)), (-9L)), (-9L), (-10L), (-9L), (VECTOR(int16_t, 2))((-10L), (-9L)), (VECTOR(int16_t, 2))((-10L), (-9L)), (-10L), (-9L), (-10L), (-9L));
    int32_t l_370 = (-4L);
    int32_t l_372 = 5L;
    VECTOR(int32_t, 8) l_373 = (VECTOR(int32_t, 8))(0x6F722533L, (VECTOR(int32_t, 4))(0x6F722533L, (VECTOR(int32_t, 2))(0x6F722533L, 0x74AB8AB8L), 0x74AB8AB8L), 0x74AB8AB8L, 0x6F722533L, 0x74AB8AB8L);
    int i;
    (*l_33) = p_803->g_2;
    for (p_32 = 1; (p_32 <= (-25)); p_32--)
    { /* block id: 16 */
        int32_t *l_48 = &p_803->g_34;
        uint32_t *l_49[2];
        VECTOR(uint16_t, 16) l_55 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint16_t, 2))(1UL, 0UL), (VECTOR(uint16_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
        VECTOR(uint32_t, 8) l_264 = (VECTOR(uint32_t, 8))(0xFD7DF804L, (VECTOR(uint32_t, 4))(0xFD7DF804L, (VECTOR(uint32_t, 2))(0xFD7DF804L, 2UL), 2UL), 2UL, 0xFD7DF804L, 2UL);
        int32_t *l_267 = &p_803->g_2;
        uint64_t *l_268 = &p_803->g_60;
        struct S0 *l_337 = &p_803->g_134;
        struct S0 *l_338 = &p_803->g_339;
        uint32_t l_340 = 0xBBF1EA39L;
        int i;
        for (i = 0; i < 2; i++)
            l_49[i] = &p_803->g_50;
        (*l_338) = ((*l_337) = func_37(func_41((((*l_33) = (FAKE_DIVERGE(p_803->local_2_offset, get_local_id(2), 10) == (safe_lshift_func_uint16_t_u_s((l_48 != &p_32), 3)))) , func_51((18446744073709551609UL && (p_803->g_13.s3 ^ ((VECTOR(uint16_t, 2))(l_55.se7)).even)), p_31, (l_56 = l_49[1]), p_803)), (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 2))(p_803->g_262.yy)).xxxxxyxy, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(0xB983BC1DL, 0x0BE0EC4DL, ((VECTOR(uint32_t, 8))(p_803->g_263.s75461376)), 4294967286UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))(l_264.s2212)))), 1UL)).hi)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0UL, 1UL)), (safe_lshift_func_int8_t_s_s(0x26L, 7)), (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-1L), 0L)).xyxyxyxxxyxyxyxx)).se , ((void*)0 == &p_803->g_134)), 0xE44F0659L, p_803->g_comm_values[p_803->tid], ((VECTOR(uint32_t, 2))(4294967295UL)), l_264.s4, p_32, 4294967295UL, ((VECTOR(uint32_t, 2))(0x97CD4D98L)), p_803->g_19, 4294967293UL, 1UL)).hi))).odd)).xxzzyzyy)).even)), 0x05401C7BL, p_803->g_134.f0, 0x3A2D2EF1L, l_264.s0, 4294967290UL, ((VECTOR(uint32_t, 2))(0UL)), ((VECTOR(uint32_t, 4))(4294967295UL)), 0x1FE1EFF7L)).s3 , p_803->g_150.x), l_267, l_268, p_803), l_268, p_32, p_803));
        if (l_340)
            continue;
    }
    for (p_803->g_132 = (-14); (p_803->g_132 <= 43); p_803->g_132 = safe_add_func_uint32_t_u_u(p_803->g_132, 8))
    { /* block id: 141 */
        struct S0 l_345[3][8][3] = {{{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}}},{{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}}},{{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}},{{0xCB6A6315L},{2UL},{4294967295UL}}}};
        int32_t l_365[1];
        int32_t l_369 = 0x561BF810L;
        int32_t l_371 = 0x108B37DBL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_365[i] = (-1L);
        for (p_803->g_83 = 0; (p_803->g_83 <= 15); p_803->g_83 = safe_add_func_int64_t_s_s(p_803->g_83, 7))
        { /* block id: 144 */
            struct S0 *l_347 = &l_345[2][0][2];
            int32_t l_364 = 0x3DEE22F1L;
            int32_t *l_366 = &p_803->g_291;
            int32_t *l_367 = &l_364;
            int32_t *l_368[1][5][6] = {{{&p_803->g_5[1],&p_803->g_291,&p_803->g_2,(void*)0,&p_803->g_2,&p_803->g_291},{&p_803->g_5[1],&p_803->g_291,&p_803->g_2,(void*)0,&p_803->g_2,&p_803->g_291},{&p_803->g_5[1],&p_803->g_291,&p_803->g_2,(void*)0,&p_803->g_2,&p_803->g_291},{&p_803->g_5[1],&p_803->g_291,&p_803->g_2,(void*)0,&p_803->g_2,&p_803->g_291},{&p_803->g_5[1],&p_803->g_291,&p_803->g_2,(void*)0,&p_803->g_2,&p_803->g_291}}};
            int i, j, k;
            atomic_max(&p_803->g_atomic_reduction[get_linear_group_id()], ((VECTOR(int32_t, 8))(0x63A894B2L, (l_345[2][0][2] , ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 16))(l_346.sd2087a2c82ea3c63)).lo, ((VECTOR(uint16_t, 16))(0x280FL, (&l_345[2][2][0] == l_347), ((safe_unary_minus_func_uint32_t_u(((*l_33) | (safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((*l_33), ((void*)0 == p_803->g_353))) > (safe_mul_func_uint8_t_u_u(p_803->g_60, (((VECTOR(int64_t, 8))(((((safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(l_364, p_31)) | l_345[2][0][2].f0), GROUP_DIVERGE(0, 1))), p_32)) | l_345[2][0][2].f0) == 0x7DL) >= l_345[2][0][2].f0), ((VECTOR(int64_t, 2))(0x244688A73BF47646L)), p_31, 0x7FCF0A8FC1D73C05L, 0x64A37D489A5C862CL, 0L, 0x379D1E072D8E7ED4L)).s4 && (**p_803->g_353))))), GROUP_DIVERGE(2, 1)))))) , l_365[0]), ((VECTOR(uint16_t, 4))(0x7093L)), 65532UL, p_32, l_364, 0xEB38L, ((VECTOR(uint16_t, 2))(0xA4FBL)), 0UL, 0x6F8FL, 65535UL)).hi))).s5), ((VECTOR(int32_t, 4))(0x6D186151L)), 1L, 0x327BCB12L)).s2);
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_803->v_collective += p_803->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_803->g_375++;
            (*l_347) = l_345[2][0][2];
            (*p_803->g_173) = ((p_32 , 0L) , (*l_347));
        }
        return p_32;
    }
    for (p_803->g_80 = 0; (p_803->g_80 <= 3); p_803->g_80++)
    { /* block id: 154 */
        (*l_33) ^= ((p_803->g_380 = (p_31 , &p_803->g_60)) == (*p_803->g_353));
        if ((*l_33))
            continue;
        atomic_and(&p_803->g_atomic_reduction[get_linear_group_id()], p_32);
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        if (get_linear_local_id() == 0)
            p_803->v_collective += p_803->g_atomic_reduction[get_linear_group_id()];
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    }
    return p_31;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_80 p_803->g_204 p_803->g_139 p_803->g_60 p_803->g_291 p_803->g_225 p_803->g_5 p_803->g_134 p_803->g_263 p_803->g_304 p_803->g_237 p_803->g_290 p_803->g_219 p_803->g_50 p_803->g_161 p_803->g_138
 * writes: p_803->g_80 p_803->g_60 p_803->g_291 p_803->g_134 p_803->g_317 p_803->g_139 p_803->g_290
 */
struct S0  func_37(uint64_t * p_38, uint64_t * p_39, uint32_t  p_40, struct S1 * p_803)
{ /* block id: 119 */
    uint64_t *l_289[5] = {&p_803->g_290[0][2],&p_803->g_290[0][2],&p_803->g_290[0][2],&p_803->g_290[0][2],&p_803->g_290[0][2]};
    uint64_t **l_288 = &l_289[1];
    int32_t l_292[8][3][2] = {{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}},{{0L,0L},{0L,0L},{0L,0L}}};
    int32_t *l_294[1];
    VECTOR(uint32_t, 2) l_301 = (VECTOR(uint32_t, 2))(9UL, 0x8C961F25L);
    uint64_t l_318 = 1UL;
    struct S0 l_321[10] = {{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL},{4294967294UL}};
    struct S0 *l_322 = &l_321[6];
    uint16_t *l_325 = (void*)0;
    uint16_t *l_326 = (void*)0;
    int8_t *l_331 = &p_803->g_80;
    int32_t **l_334 = (void*)0;
    int32_t **l_335 = &l_294[0];
    struct S0 l_336 = {5UL};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_294[i] = &p_803->g_5[4];
    for (p_803->g_80 = 0; (p_803->g_80 > (-2)); p_803->g_80--)
    { /* block id: 122 */
        uint8_t l_285 = 0xE0L;
        int32_t *l_293 = &p_803->g_291;
        struct S0 *l_295 = &p_803->g_134;
        uint64_t *l_296 = &p_803->g_290[1][6];
        int16_t *l_315 = (void*)0;
        int16_t *l_316 = &p_803->g_317;
        (*l_295) = func_93((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(1L, (-1L))))).even, (~(safe_lshift_func_int16_t_s_u((safe_div_func_int64_t_s_s((+(p_40 , (safe_sub_func_int32_t_s_s(0x2542E88AL, (((*p_803->g_204) != (void*)0) , p_40))))), (--(*p_39)))), ((0x109C5ACBL > l_285) & (((*l_293) = (((250UL <= ((((safe_add_func_uint64_t_u_u((((void*)0 != l_288) , p_803->g_291), FAKE_DIVERGE(p_803->local_1_offset, get_local_id(1), 10))) && l_285) || 0x1457B160L) , p_40)) == l_285) & l_292[2][0][1])) <= p_803->g_225))))))), p_803->g_5[8], (*l_288), l_294[0], p_803);
        (*l_295) = func_93((((*l_295) , l_296) != (p_803->g_263.s6 , func_41(&l_292[3][2][1], (((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((((VECTOR(uint32_t, 16))(l_301.xyxyyyxxyxyxyxyy)).sd || (*l_293)), (0UL & (*p_38)))), (safe_div_func_uint32_t_u_u((((((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(p_803->g_304.s33)), (-5L), 1L)).hi, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((*l_316) = (safe_mul_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((p_40 = (safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(1L, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(add_sat(((VECTOR(uint8_t, 2))(249UL, 1UL)).xxyx, ((VECTOR(uint8_t, 4))(sub_sat(((VECTOR(uint8_t, 4))((safe_lshift_func_uint8_t_u_s(p_803->g_237.y, (*l_293))), 0xC7L, 5UL, 255UL)), ((VECTOR(uint8_t, 4))(0x2FL)))))))).even)).yxyyyxyx)).s2)), p_40))), p_803->g_60)) && p_40), FAKE_DIVERGE(p_803->group_0_offset, get_group_id(0), 10)))), p_40, 1L, 0x2F42L)).hi)), ((VECTOR(int16_t, 2))(0x6D5BL))))).even == (*l_293)) != 0x346A87F3L) , 4294967295UL), l_318)))) == 0x3F67CCF8L) , p_803->g_290[2][5]), &l_292[2][0][1], &p_803->g_60, p_803))), (*l_293), &p_803->g_60, l_294[0], p_803);
    }
    (*l_322) = func_93((*p_38), ((0x480214DEL <= p_40) > (p_40 <= ((safe_add_func_int8_t_s_s(p_803->g_219.s8, p_803->g_50)) && 0UL))), (*l_288), func_87(l_321[9], p_40, p_803->g_290[0][2], p_40, p_803->g_161.s0, p_803), p_803);
    (*l_335) = func_87((*l_322), p_40, (safe_div_func_uint64_t_u_u(((**l_288) = (l_325 == (l_326 = l_325))), (safe_mul_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(p_40, 2)), 6L)))), (l_331 == l_331), ((0xEB75L || 0L) , 0x4126F55974BC6494L), p_803);
    return l_336;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes: p_803->g_50 p_803->g_339.f0
 */
uint64_t * func_41(int32_t * p_42, uint32_t  p_43, int32_t * p_44, uint64_t * p_45, struct S1 * p_803)
{ /* block id: 115 */
    uint32_t l_269 = 0x41926491L;
    struct S0 *l_270 = &p_803->g_134;
    struct S0 **l_271 = &l_270;
    uint64_t *l_272[2];
    int i;
    for (i = 0; i < 2; i++)
        l_272[i] = &p_803->g_60;
    (*p_42) = l_269;
    (*l_271) = l_270;
    return l_272[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_34 p_803->g_12 p_803->g_50 p_803->g_5 p_803->g_83
 * writes: p_803->g_34 p_803->g_80 p_803->g_83
 */
int32_t * func_51(uint32_t  p_52, uint16_t  p_53, uint32_t * p_54, struct S1 * p_803)
{ /* block id: 19 */
    uint64_t *l_59 = &p_803->g_60;
    int32_t l_61 = 0x7E74C19FL;
    VECTOR(int8_t, 16) l_66 = (VECTOR(int8_t, 16))((-4L), (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0L), 0L), 0L, (-4L), 0L, (VECTOR(int8_t, 2))((-4L), 0L), (VECTOR(int8_t, 2))((-4L), 0L), (-4L), 0L, (-4L), 0L);
    int64_t l_143 = 1L;
    VECTOR(uint32_t, 8) l_146 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
    VECTOR(int64_t, 2) l_162 = (VECTOR(int64_t, 2))(0x440B9AA1BD0BA192L, 0x4583ED9FA11705F1L);
    VECTOR(int32_t, 2) l_182 = (VECTOR(int32_t, 2))(1L, 2L);
    VECTOR(int32_t, 8) l_183 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 8L), 8L), 8L, 1L, 8L);
    int32_t *l_250 = &l_61;
    int32_t *l_251 = &p_803->g_34;
    int32_t *l_252 = &l_61;
    int32_t *l_253 = &l_61;
    int32_t *l_254 = (void*)0;
    int32_t *l_255 = (void*)0;
    int32_t *l_256 = &p_803->g_83;
    int32_t *l_257 = &p_803->g_83;
    int32_t *l_258[7] = {&l_61,&l_61,&l_61,&l_61,&l_61,&l_61,&l_61};
    uint64_t l_259 = 18446744073709551609UL;
    int i;
    for (p_803->g_34 = 12; (p_803->g_34 >= 29); ++p_803->g_34)
    { /* block id: 22 */
        int8_t *l_79 = &p_803->g_80;
        int32_t l_81 = 1L;
        int32_t *l_82 = &p_803->g_83;
        VECTOR(uint16_t, 16) l_128 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x875DL), 0x875DL), 0x875DL, 0UL, 0x875DL, (VECTOR(uint16_t, 2))(0UL, 0x875DL), (VECTOR(uint16_t, 2))(0UL, 0x875DL), 0UL, 0x875DL, 0UL, 0x875DL);
        uint64_t *l_144[6][2] = {{&p_803->g_60,&p_803->g_60},{&p_803->g_60,&p_803->g_60},{&p_803->g_60,&p_803->g_60},{&p_803->g_60,&p_803->g_60},{&p_803->g_60,&p_803->g_60},{&p_803->g_60,&p_803->g_60}};
        int32_t l_223 = 0L;
        int32_t **l_249[5] = {&p_803->g_139,&p_803->g_139,&p_803->g_139,&p_803->g_139,&p_803->g_139};
        int i, j;
        (*l_82) &= (((((void*)0 == l_59) == (l_61 , (p_53 | (((&p_803->g_2 == (((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 4))(l_66.sa11b)).y, p_803->g_12.s3)), (((safe_div_func_int64_t_s_s((safe_mod_func_int64_t_s_s((0L & (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(l_66.s2, ((*l_79) = (((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(p_52, 0UL)), p_53)) , (void*)0) != &p_803->g_60)))), l_66.sa))), 0x7A8F3E709F62D42CL)), p_53)) , 0x427B9F09L) , l_66.s8))) < l_81) , (void*)0)) , p_803->g_50) > (-10L))))) >= 0xCF7A535ACB962FADL) , p_803->g_5[4]);
    }
    l_259--;
    return p_54;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_138
 * writes: p_803->g_139
 */
uint32_t * func_87(struct S0  p_88, int64_t  p_89, uint8_t  p_90, uint32_t  p_91, int64_t  p_92, struct S1 * p_803)
{ /* block id: 42 */
    for (p_91 = (-27); (p_91 == 6); p_91 = safe_add_func_int16_t_s_s(p_91, 2))
    { /* block id: 45 */
        (*p_803->g_138) = &p_803->g_34;
    }
    return &p_803->g_50;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_134
 * writes:
 */
struct S0  func_93(uint64_t  p_94, int64_t  p_95, uint64_t * p_96, int32_t * p_97, struct S1 * p_803)
{ /* block id: 40 */
    return p_803->g_134;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_60 p_803->g_120 p_803->g_12
 * writes: p_803->g_120
 */
uint64_t  func_98(int8_t  p_99, struct S1 * p_803)
{ /* block id: 30 */
    uint64_t *l_105 = (void*)0;
    int32_t l_123 = 0x73862579L;
    l_123 = func_100(p_803->g_60, &p_803->g_80, (l_105 = (void*)0), &p_803->g_50, p_803);
    return p_99;
}


/* ------------------------------------------ */
/* 
 * reads : p_803->g_120 p_803->g_12
 * writes: p_803->g_120
 */
int32_t  func_100(uint64_t  p_101, int8_t * p_102, uint64_t * p_103, uint32_t * p_104, struct S1 * p_803)
{ /* block id: 32 */
    int32_t *l_106 = &p_803->g_83;
    int32_t *l_107 = &p_803->g_83;
    int32_t *l_108 = &p_803->g_83;
    int32_t l_109 = (-8L);
    int32_t *l_110 = &p_803->g_83;
    int32_t *l_111 = &p_803->g_83;
    int32_t *l_112 = &l_109;
    int32_t *l_113 = &p_803->g_83;
    int32_t *l_114 = &p_803->g_83;
    int32_t *l_115 = &p_803->g_83;
    int32_t *l_116 = &p_803->g_83;
    int32_t *l_117 = (void*)0;
    int32_t *l_118[1];
    int i;
    for (i = 0; i < 1; i++)
        l_118[i] = (void*)0;
    --p_803->g_120.s5;
    return p_803->g_12.s6;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[42];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 42; i++)
            l_comm_values[i] = 1;
    struct S1 c_804;
    struct S1* p_803 = &c_804;
    struct S1 c_805 = {
        (-5L), // p_803->g_2
        {3L,3L,3L,3L,3L,3L,3L,3L,3L}, // p_803->g_5
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x6E31L), 0x6E31L), 0x6E31L, 65535UL, 0x6E31L), // p_803->g_11
        (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xB6B7L), 0xB6B7L), 0xB6B7L, 0UL, 0xB6B7L), // p_803->g_12
        (VECTOR(uint16_t, 16))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0x6F37L), 0x6F37L), 0x6F37L, 65529UL, 0x6F37L, (VECTOR(uint16_t, 2))(65529UL, 0x6F37L), (VECTOR(uint16_t, 2))(65529UL, 0x6F37L), 65529UL, 0x6F37L, 65529UL, 0x6F37L), // p_803->g_13
        6L, // p_803->g_19
        0xE2BE8CA404523830L, // p_803->g_27
        0x69719EFCL, // p_803->g_34
        0xB20295D0L, // p_803->g_50
        0xC1B2F0819D5A33B1L, // p_803->g_60
        0x16L, // p_803->g_80
        0L, // p_803->g_83
        1L, // p_803->g_119
        (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0xCECFL), 0xCECFL), 0xCECFL, 65526UL, 0xCECFL), // p_803->g_120
        0x8EL, // p_803->g_130
        7UL, // p_803->g_132
        {0xEE10C307L}, // p_803->g_134
        &p_803->g_5[0], // p_803->g_139
        &p_803->g_139, // p_803->g_138
        &p_803->g_134.f0, // p_803->g_140
        (VECTOR(uint32_t, 4))(0x535F3DCDL, (VECTOR(uint32_t, 2))(0x535F3DCDL, 0UL), 0UL), // p_803->g_150
        (VECTOR(int64_t, 8))(0x6A8B3183DA37F1ACL, (VECTOR(int64_t, 4))(0x6A8B3183DA37F1ACL, (VECTOR(int64_t, 2))(0x6A8B3183DA37F1ACL, (-1L)), (-1L)), (-1L), 0x6A8B3183DA37F1ACL, (-1L)), // p_803->g_161
        &p_803->g_134, // p_803->g_173
        (void*)0, // p_803->g_203
        &p_803->g_139, // p_803->g_204
        (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xE4L), 0xE4L), 0xE4L, 0UL, 0xE4L, (VECTOR(uint8_t, 2))(0UL, 0xE4L), (VECTOR(uint8_t, 2))(0UL, 0xE4L), 0UL, 0xE4L, 0UL, 0xE4L), // p_803->g_219
        0xFFL, // p_803->g_225
        {{{&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134},{&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134},{&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134}},{{&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134},{&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134},{&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134}},{{&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134},{&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134},{&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134}},{{&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134},{&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134},{&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134,&p_803->g_134}}}, // p_803->g_228
        (void*)0, // p_803->g_229
        &p_803->g_134, // p_803->g_230
        (VECTOR(int8_t, 2))(1L, 0x6BL), // p_803->g_237
        0x39176EC824061E38L, // p_803->g_242
        (VECTOR(uint32_t, 2))(1UL, 4294967292UL), // p_803->g_262
        (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x611F6D53L), 0x611F6D53L), 0x611F6D53L, 0UL, 0x611F6D53L), // p_803->g_263
        {{1UL,0x2636119D7EF94F6CL,1UL,1UL,0x2636119D7EF94F6CL,1UL,1UL},{1UL,0x2636119D7EF94F6CL,1UL,1UL,0x2636119D7EF94F6CL,1UL,1UL},{1UL,0x2636119D7EF94F6CL,1UL,1UL,0x2636119D7EF94F6CL,1UL,1UL},{1UL,0x2636119D7EF94F6CL,1UL,1UL,0x2636119D7EF94F6CL,1UL,1UL}}, // p_803->g_290
        3L, // p_803->g_291
        (VECTOR(int16_t, 8))(0x1AD5L, (VECTOR(int16_t, 4))(0x1AD5L, (VECTOR(int16_t, 2))(0x1AD5L, 0x0474L), 0x0474L), 0x0474L, 0x1AD5L, 0x0474L), // p_803->g_304
        0L, // p_803->g_317
        {0UL}, // p_803->g_339
        0x64B511363FC42F59L, // p_803->g_355
        {&p_803->g_355,&p_803->g_355}, // p_803->g_354
        &p_803->g_354[1], // p_803->g_353
        1L, // p_803->g_374
        65526UL, // p_803->g_375
        (void*)0, // p_803->g_380
        (-4L), // p_803->g_390
        &p_803->g_390, // p_803->g_389
        1L, // p_803->g_392
        1UL, // p_803->g_401
        0x38B83E83L, // p_803->g_419
        (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 3UL), 3UL), 3UL, 1UL, 3UL), // p_803->g_443
        248UL, // p_803->g_445
        (VECTOR(uint16_t, 4))(0xFA2DL, (VECTOR(uint16_t, 2))(0xFA2DL, 0x07B8L), 0x07B8L), // p_803->g_461
        (VECTOR(uint16_t, 2))(0x9A53L, 0x3446L), // p_803->g_511
        &p_803->g_139, // p_803->g_559
        0UL, // p_803->g_568
        (VECTOR(int16_t, 2))(0x4B6FL, 0x34E5L), // p_803->g_577
        (VECTOR(uint16_t, 2))(1UL, 6UL), // p_803->g_587
        1L, // p_803->g_608
        (VECTOR(uint8_t, 8))(248UL, (VECTOR(uint8_t, 4))(248UL, (VECTOR(uint8_t, 2))(248UL, 0x33L), 0x33L), 0x33L, 248UL, 0x33L), // p_803->g_622
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x3D3C5D39734E5A01L), 0x3D3C5D39734E5A01L), // p_803->g_634
        (VECTOR(int64_t, 8))((-9L), (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0x0F58ED2C07E66584L), 0x0F58ED2C07E66584L), 0x0F58ED2C07E66584L, (-9L), 0x0F58ED2C07E66584L), // p_803->g_637
        (VECTOR(int16_t, 2))(0x046FL, 0x65FEL), // p_803->g_642
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x5700A146L), 0x5700A146L), // p_803->g_647
        {{{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL}}}, // p_803->g_669
        (-9L), // p_803->g_683
        (VECTOR(uint16_t, 8))(0xFBE0L, (VECTOR(uint16_t, 4))(0xFBE0L, (VECTOR(uint16_t, 2))(0xFBE0L, 65526UL), 65526UL), 65526UL, 0xFBE0L, 65526UL), // p_803->g_698
        1UL, // p_803->g_717
        (void*)0, // p_803->g_723
        {{4294967290UL},{4294967290UL},{4294967290UL},{4294967290UL}}, // p_803->g_726
        &p_803->g_726[2], // p_803->g_725
        &p_803->g_725, // p_803->g_724
        (VECTOR(uint32_t, 8))(0x12AB8CF0L, (VECTOR(uint32_t, 4))(0x12AB8CF0L, (VECTOR(uint32_t, 2))(0x12AB8CF0L, 1UL), 1UL), 1UL, 0x12AB8CF0L, 1UL), // p_803->g_730
        (VECTOR(uint32_t, 2))(0xAF08E0A9L, 0x7AD92928L), // p_803->g_735
        (void*)0, // p_803->g_754
        (VECTOR(int16_t, 8))(0x7E34L, (VECTOR(int16_t, 4))(0x7E34L, (VECTOR(int16_t, 2))(0x7E34L, 0x02F4L), 0x02F4L), 0x02F4L, 0x7E34L, 0x02F4L), // p_803->g_757
        {{&p_803->g_19,&p_803->g_19,&p_803->g_19},{&p_803->g_19,&p_803->g_19,&p_803->g_19},{&p_803->g_19,&p_803->g_19,&p_803->g_19},{&p_803->g_19,&p_803->g_19,&p_803->g_19},{&p_803->g_19,&p_803->g_19,&p_803->g_19},{&p_803->g_19,&p_803->g_19,&p_803->g_19}}, // p_803->g_789
        &p_803->g_789[3][0], // p_803->g_788
        0L, // p_803->g_798
        &p_803->g_419, // p_803->g_802
        0, // p_803->v_collective
        sequence_input[get_global_id(0)], // p_803->global_0_offset
        sequence_input[get_global_id(1)], // p_803->global_1_offset
        sequence_input[get_global_id(2)], // p_803->global_2_offset
        sequence_input[get_local_id(0)], // p_803->local_0_offset
        sequence_input[get_local_id(1)], // p_803->local_1_offset
        sequence_input[get_local_id(2)], // p_803->local_2_offset
        sequence_input[get_group_id(0)], // p_803->group_0_offset
        sequence_input[get_group_id(1)], // p_803->group_1_offset
        sequence_input[get_group_id(2)], // p_803->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 42)), permutations[0][get_linear_local_id()])), // p_803->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_804 = c_805;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_803);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_803->g_2, "p_803->g_2", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_803->g_5[i], "p_803->g_5[i]", print_hash_value);

    }
    transparent_crc(p_803->g_11.s0, "p_803->g_11.s0", print_hash_value);
    transparent_crc(p_803->g_11.s1, "p_803->g_11.s1", print_hash_value);
    transparent_crc(p_803->g_11.s2, "p_803->g_11.s2", print_hash_value);
    transparent_crc(p_803->g_11.s3, "p_803->g_11.s3", print_hash_value);
    transparent_crc(p_803->g_11.s4, "p_803->g_11.s4", print_hash_value);
    transparent_crc(p_803->g_11.s5, "p_803->g_11.s5", print_hash_value);
    transparent_crc(p_803->g_11.s6, "p_803->g_11.s6", print_hash_value);
    transparent_crc(p_803->g_11.s7, "p_803->g_11.s7", print_hash_value);
    transparent_crc(p_803->g_12.s0, "p_803->g_12.s0", print_hash_value);
    transparent_crc(p_803->g_12.s1, "p_803->g_12.s1", print_hash_value);
    transparent_crc(p_803->g_12.s2, "p_803->g_12.s2", print_hash_value);
    transparent_crc(p_803->g_12.s3, "p_803->g_12.s3", print_hash_value);
    transparent_crc(p_803->g_12.s4, "p_803->g_12.s4", print_hash_value);
    transparent_crc(p_803->g_12.s5, "p_803->g_12.s5", print_hash_value);
    transparent_crc(p_803->g_12.s6, "p_803->g_12.s6", print_hash_value);
    transparent_crc(p_803->g_12.s7, "p_803->g_12.s7", print_hash_value);
    transparent_crc(p_803->g_13.s0, "p_803->g_13.s0", print_hash_value);
    transparent_crc(p_803->g_13.s1, "p_803->g_13.s1", print_hash_value);
    transparent_crc(p_803->g_13.s2, "p_803->g_13.s2", print_hash_value);
    transparent_crc(p_803->g_13.s3, "p_803->g_13.s3", print_hash_value);
    transparent_crc(p_803->g_13.s4, "p_803->g_13.s4", print_hash_value);
    transparent_crc(p_803->g_13.s5, "p_803->g_13.s5", print_hash_value);
    transparent_crc(p_803->g_13.s6, "p_803->g_13.s6", print_hash_value);
    transparent_crc(p_803->g_13.s7, "p_803->g_13.s7", print_hash_value);
    transparent_crc(p_803->g_13.s8, "p_803->g_13.s8", print_hash_value);
    transparent_crc(p_803->g_13.s9, "p_803->g_13.s9", print_hash_value);
    transparent_crc(p_803->g_13.sa, "p_803->g_13.sa", print_hash_value);
    transparent_crc(p_803->g_13.sb, "p_803->g_13.sb", print_hash_value);
    transparent_crc(p_803->g_13.sc, "p_803->g_13.sc", print_hash_value);
    transparent_crc(p_803->g_13.sd, "p_803->g_13.sd", print_hash_value);
    transparent_crc(p_803->g_13.se, "p_803->g_13.se", print_hash_value);
    transparent_crc(p_803->g_13.sf, "p_803->g_13.sf", print_hash_value);
    transparent_crc(p_803->g_19, "p_803->g_19", print_hash_value);
    transparent_crc(p_803->g_27, "p_803->g_27", print_hash_value);
    transparent_crc(p_803->g_34, "p_803->g_34", print_hash_value);
    transparent_crc(p_803->g_50, "p_803->g_50", print_hash_value);
    transparent_crc(p_803->g_60, "p_803->g_60", print_hash_value);
    transparent_crc(p_803->g_80, "p_803->g_80", print_hash_value);
    transparent_crc(p_803->g_83, "p_803->g_83", print_hash_value);
    transparent_crc(p_803->g_119, "p_803->g_119", print_hash_value);
    transparent_crc(p_803->g_120.s0, "p_803->g_120.s0", print_hash_value);
    transparent_crc(p_803->g_120.s1, "p_803->g_120.s1", print_hash_value);
    transparent_crc(p_803->g_120.s2, "p_803->g_120.s2", print_hash_value);
    transparent_crc(p_803->g_120.s3, "p_803->g_120.s3", print_hash_value);
    transparent_crc(p_803->g_120.s4, "p_803->g_120.s4", print_hash_value);
    transparent_crc(p_803->g_120.s5, "p_803->g_120.s5", print_hash_value);
    transparent_crc(p_803->g_120.s6, "p_803->g_120.s6", print_hash_value);
    transparent_crc(p_803->g_120.s7, "p_803->g_120.s7", print_hash_value);
    transparent_crc(p_803->g_130, "p_803->g_130", print_hash_value);
    transparent_crc(p_803->g_132, "p_803->g_132", print_hash_value);
    transparent_crc(p_803->g_134.f0, "p_803->g_134.f0", print_hash_value);
    transparent_crc(p_803->g_150.x, "p_803->g_150.x", print_hash_value);
    transparent_crc(p_803->g_150.y, "p_803->g_150.y", print_hash_value);
    transparent_crc(p_803->g_150.z, "p_803->g_150.z", print_hash_value);
    transparent_crc(p_803->g_150.w, "p_803->g_150.w", print_hash_value);
    transparent_crc(p_803->g_161.s0, "p_803->g_161.s0", print_hash_value);
    transparent_crc(p_803->g_161.s1, "p_803->g_161.s1", print_hash_value);
    transparent_crc(p_803->g_161.s2, "p_803->g_161.s2", print_hash_value);
    transparent_crc(p_803->g_161.s3, "p_803->g_161.s3", print_hash_value);
    transparent_crc(p_803->g_161.s4, "p_803->g_161.s4", print_hash_value);
    transparent_crc(p_803->g_161.s5, "p_803->g_161.s5", print_hash_value);
    transparent_crc(p_803->g_161.s6, "p_803->g_161.s6", print_hash_value);
    transparent_crc(p_803->g_161.s7, "p_803->g_161.s7", print_hash_value);
    transparent_crc(p_803->g_219.s0, "p_803->g_219.s0", print_hash_value);
    transparent_crc(p_803->g_219.s1, "p_803->g_219.s1", print_hash_value);
    transparent_crc(p_803->g_219.s2, "p_803->g_219.s2", print_hash_value);
    transparent_crc(p_803->g_219.s3, "p_803->g_219.s3", print_hash_value);
    transparent_crc(p_803->g_219.s4, "p_803->g_219.s4", print_hash_value);
    transparent_crc(p_803->g_219.s5, "p_803->g_219.s5", print_hash_value);
    transparent_crc(p_803->g_219.s6, "p_803->g_219.s6", print_hash_value);
    transparent_crc(p_803->g_219.s7, "p_803->g_219.s7", print_hash_value);
    transparent_crc(p_803->g_219.s8, "p_803->g_219.s8", print_hash_value);
    transparent_crc(p_803->g_219.s9, "p_803->g_219.s9", print_hash_value);
    transparent_crc(p_803->g_219.sa, "p_803->g_219.sa", print_hash_value);
    transparent_crc(p_803->g_219.sb, "p_803->g_219.sb", print_hash_value);
    transparent_crc(p_803->g_219.sc, "p_803->g_219.sc", print_hash_value);
    transparent_crc(p_803->g_219.sd, "p_803->g_219.sd", print_hash_value);
    transparent_crc(p_803->g_219.se, "p_803->g_219.se", print_hash_value);
    transparent_crc(p_803->g_219.sf, "p_803->g_219.sf", print_hash_value);
    transparent_crc(p_803->g_225, "p_803->g_225", print_hash_value);
    transparent_crc(p_803->g_237.x, "p_803->g_237.x", print_hash_value);
    transparent_crc(p_803->g_237.y, "p_803->g_237.y", print_hash_value);
    transparent_crc(p_803->g_242, "p_803->g_242", print_hash_value);
    transparent_crc(p_803->g_262.x, "p_803->g_262.x", print_hash_value);
    transparent_crc(p_803->g_262.y, "p_803->g_262.y", print_hash_value);
    transparent_crc(p_803->g_263.s0, "p_803->g_263.s0", print_hash_value);
    transparent_crc(p_803->g_263.s1, "p_803->g_263.s1", print_hash_value);
    transparent_crc(p_803->g_263.s2, "p_803->g_263.s2", print_hash_value);
    transparent_crc(p_803->g_263.s3, "p_803->g_263.s3", print_hash_value);
    transparent_crc(p_803->g_263.s4, "p_803->g_263.s4", print_hash_value);
    transparent_crc(p_803->g_263.s5, "p_803->g_263.s5", print_hash_value);
    transparent_crc(p_803->g_263.s6, "p_803->g_263.s6", print_hash_value);
    transparent_crc(p_803->g_263.s7, "p_803->g_263.s7", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_803->g_290[i][j], "p_803->g_290[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_803->g_291, "p_803->g_291", print_hash_value);
    transparent_crc(p_803->g_304.s0, "p_803->g_304.s0", print_hash_value);
    transparent_crc(p_803->g_304.s1, "p_803->g_304.s1", print_hash_value);
    transparent_crc(p_803->g_304.s2, "p_803->g_304.s2", print_hash_value);
    transparent_crc(p_803->g_304.s3, "p_803->g_304.s3", print_hash_value);
    transparent_crc(p_803->g_304.s4, "p_803->g_304.s4", print_hash_value);
    transparent_crc(p_803->g_304.s5, "p_803->g_304.s5", print_hash_value);
    transparent_crc(p_803->g_304.s6, "p_803->g_304.s6", print_hash_value);
    transparent_crc(p_803->g_304.s7, "p_803->g_304.s7", print_hash_value);
    transparent_crc(p_803->g_317, "p_803->g_317", print_hash_value);
    transparent_crc(p_803->g_339.f0, "p_803->g_339.f0", print_hash_value);
    transparent_crc(p_803->g_355, "p_803->g_355", print_hash_value);
    transparent_crc(p_803->g_374, "p_803->g_374", print_hash_value);
    transparent_crc(p_803->g_375, "p_803->g_375", print_hash_value);
    transparent_crc(p_803->g_390, "p_803->g_390", print_hash_value);
    transparent_crc(p_803->g_392, "p_803->g_392", print_hash_value);
    transparent_crc(p_803->g_401, "p_803->g_401", print_hash_value);
    transparent_crc(p_803->g_419, "p_803->g_419", print_hash_value);
    transparent_crc(p_803->g_443.s0, "p_803->g_443.s0", print_hash_value);
    transparent_crc(p_803->g_443.s1, "p_803->g_443.s1", print_hash_value);
    transparent_crc(p_803->g_443.s2, "p_803->g_443.s2", print_hash_value);
    transparent_crc(p_803->g_443.s3, "p_803->g_443.s3", print_hash_value);
    transparent_crc(p_803->g_443.s4, "p_803->g_443.s4", print_hash_value);
    transparent_crc(p_803->g_443.s5, "p_803->g_443.s5", print_hash_value);
    transparent_crc(p_803->g_443.s6, "p_803->g_443.s6", print_hash_value);
    transparent_crc(p_803->g_443.s7, "p_803->g_443.s7", print_hash_value);
    transparent_crc(p_803->g_445, "p_803->g_445", print_hash_value);
    transparent_crc(p_803->g_461.x, "p_803->g_461.x", print_hash_value);
    transparent_crc(p_803->g_461.y, "p_803->g_461.y", print_hash_value);
    transparent_crc(p_803->g_461.z, "p_803->g_461.z", print_hash_value);
    transparent_crc(p_803->g_461.w, "p_803->g_461.w", print_hash_value);
    transparent_crc(p_803->g_511.x, "p_803->g_511.x", print_hash_value);
    transparent_crc(p_803->g_511.y, "p_803->g_511.y", print_hash_value);
    transparent_crc(p_803->g_568, "p_803->g_568", print_hash_value);
    transparent_crc(p_803->g_577.x, "p_803->g_577.x", print_hash_value);
    transparent_crc(p_803->g_577.y, "p_803->g_577.y", print_hash_value);
    transparent_crc(p_803->g_587.x, "p_803->g_587.x", print_hash_value);
    transparent_crc(p_803->g_587.y, "p_803->g_587.y", print_hash_value);
    transparent_crc(p_803->g_608, "p_803->g_608", print_hash_value);
    transparent_crc(p_803->g_622.s0, "p_803->g_622.s0", print_hash_value);
    transparent_crc(p_803->g_622.s1, "p_803->g_622.s1", print_hash_value);
    transparent_crc(p_803->g_622.s2, "p_803->g_622.s2", print_hash_value);
    transparent_crc(p_803->g_622.s3, "p_803->g_622.s3", print_hash_value);
    transparent_crc(p_803->g_622.s4, "p_803->g_622.s4", print_hash_value);
    transparent_crc(p_803->g_622.s5, "p_803->g_622.s5", print_hash_value);
    transparent_crc(p_803->g_622.s6, "p_803->g_622.s6", print_hash_value);
    transparent_crc(p_803->g_622.s7, "p_803->g_622.s7", print_hash_value);
    transparent_crc(p_803->g_634.x, "p_803->g_634.x", print_hash_value);
    transparent_crc(p_803->g_634.y, "p_803->g_634.y", print_hash_value);
    transparent_crc(p_803->g_634.z, "p_803->g_634.z", print_hash_value);
    transparent_crc(p_803->g_634.w, "p_803->g_634.w", print_hash_value);
    transparent_crc(p_803->g_637.s0, "p_803->g_637.s0", print_hash_value);
    transparent_crc(p_803->g_637.s1, "p_803->g_637.s1", print_hash_value);
    transparent_crc(p_803->g_637.s2, "p_803->g_637.s2", print_hash_value);
    transparent_crc(p_803->g_637.s3, "p_803->g_637.s3", print_hash_value);
    transparent_crc(p_803->g_637.s4, "p_803->g_637.s4", print_hash_value);
    transparent_crc(p_803->g_637.s5, "p_803->g_637.s5", print_hash_value);
    transparent_crc(p_803->g_637.s6, "p_803->g_637.s6", print_hash_value);
    transparent_crc(p_803->g_637.s7, "p_803->g_637.s7", print_hash_value);
    transparent_crc(p_803->g_642.x, "p_803->g_642.x", print_hash_value);
    transparent_crc(p_803->g_642.y, "p_803->g_642.y", print_hash_value);
    transparent_crc(p_803->g_647.x, "p_803->g_647.x", print_hash_value);
    transparent_crc(p_803->g_647.y, "p_803->g_647.y", print_hash_value);
    transparent_crc(p_803->g_647.z, "p_803->g_647.z", print_hash_value);
    transparent_crc(p_803->g_647.w, "p_803->g_647.w", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_803->g_669[i][j][k], "p_803->g_669[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_803->g_683, "p_803->g_683", print_hash_value);
    transparent_crc(p_803->g_698.s0, "p_803->g_698.s0", print_hash_value);
    transparent_crc(p_803->g_698.s1, "p_803->g_698.s1", print_hash_value);
    transparent_crc(p_803->g_698.s2, "p_803->g_698.s2", print_hash_value);
    transparent_crc(p_803->g_698.s3, "p_803->g_698.s3", print_hash_value);
    transparent_crc(p_803->g_698.s4, "p_803->g_698.s4", print_hash_value);
    transparent_crc(p_803->g_698.s5, "p_803->g_698.s5", print_hash_value);
    transparent_crc(p_803->g_698.s6, "p_803->g_698.s6", print_hash_value);
    transparent_crc(p_803->g_698.s7, "p_803->g_698.s7", print_hash_value);
    transparent_crc(p_803->g_717, "p_803->g_717", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_803->g_726[i].f0, "p_803->g_726[i].f0", print_hash_value);

    }
    transparent_crc(p_803->g_730.s0, "p_803->g_730.s0", print_hash_value);
    transparent_crc(p_803->g_730.s1, "p_803->g_730.s1", print_hash_value);
    transparent_crc(p_803->g_730.s2, "p_803->g_730.s2", print_hash_value);
    transparent_crc(p_803->g_730.s3, "p_803->g_730.s3", print_hash_value);
    transparent_crc(p_803->g_730.s4, "p_803->g_730.s4", print_hash_value);
    transparent_crc(p_803->g_730.s5, "p_803->g_730.s5", print_hash_value);
    transparent_crc(p_803->g_730.s6, "p_803->g_730.s6", print_hash_value);
    transparent_crc(p_803->g_730.s7, "p_803->g_730.s7", print_hash_value);
    transparent_crc(p_803->g_735.x, "p_803->g_735.x", print_hash_value);
    transparent_crc(p_803->g_735.y, "p_803->g_735.y", print_hash_value);
    transparent_crc(p_803->g_757.s0, "p_803->g_757.s0", print_hash_value);
    transparent_crc(p_803->g_757.s1, "p_803->g_757.s1", print_hash_value);
    transparent_crc(p_803->g_757.s2, "p_803->g_757.s2", print_hash_value);
    transparent_crc(p_803->g_757.s3, "p_803->g_757.s3", print_hash_value);
    transparent_crc(p_803->g_757.s4, "p_803->g_757.s4", print_hash_value);
    transparent_crc(p_803->g_757.s5, "p_803->g_757.s5", print_hash_value);
    transparent_crc(p_803->g_757.s6, "p_803->g_757.s6", print_hash_value);
    transparent_crc(p_803->g_757.s7, "p_803->g_757.s7", print_hash_value);
    transparent_crc(p_803->g_798, "p_803->g_798", print_hash_value);
    transparent_crc(p_803->v_collective, "p_803->v_collective", print_hash_value);
    transparent_crc(p_803->l_comm_values[get_linear_local_id()], "p_803->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_803->g_comm_values[get_linear_group_id() * 42 + get_linear_local_id()], "p_803->g_comm_values[get_linear_group_id() * 42 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
