// --atomics 91 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 92,14,1 -l 4,14,1
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

__constant uint32_t permutations[10][56] = {
{4,8,27,6,43,53,37,7,30,22,33,25,38,48,1,20,23,34,0,24,21,29,49,26,31,50,51,17,28,52,19,44,9,11,18,5,55,10,54,45,2,42,3,14,16,35,32,40,41,15,47,12,36,46,13,39}, // permutation 0
{42,0,6,34,21,50,9,32,25,55,45,49,52,44,53,22,4,27,39,29,15,12,17,31,33,28,3,20,13,8,37,38,1,35,18,47,30,11,43,54,2,7,14,24,19,51,41,16,48,40,23,5,36,46,10,26}, // permutation 1
{44,23,10,50,5,15,54,20,3,49,55,32,47,17,26,19,28,1,53,7,38,6,40,12,2,4,27,41,11,37,25,33,51,8,43,21,18,16,39,46,24,35,0,22,30,45,34,9,42,14,36,52,13,48,31,29}, // permutation 2
{27,11,8,20,29,39,6,13,12,18,37,4,24,53,46,52,43,38,47,35,49,50,45,25,44,1,0,23,5,7,51,32,19,41,54,36,21,33,48,17,42,14,26,55,31,34,10,22,3,30,40,15,2,9,16,28}, // permutation 3
{9,11,40,10,29,7,38,44,6,14,50,55,46,30,41,21,37,8,42,19,48,43,53,5,34,13,16,18,23,3,47,54,22,26,49,20,12,15,28,35,39,4,24,33,1,25,52,17,51,2,45,36,0,27,32,31}, // permutation 4
{1,13,55,19,4,25,51,18,2,32,10,8,27,46,43,20,52,47,36,40,22,23,48,7,33,42,11,9,49,6,16,35,14,53,45,38,39,54,31,0,50,24,15,5,3,41,29,28,21,44,17,34,12,26,30,37}, // permutation 5
{32,35,10,43,52,50,21,8,19,14,48,49,51,17,27,4,34,6,30,28,37,23,40,3,24,13,29,25,11,55,1,20,16,2,53,9,5,33,7,31,15,54,26,42,0,18,47,44,41,46,38,39,45,12,22,36}, // permutation 6
{37,32,44,5,39,11,51,4,18,34,2,27,12,0,8,14,19,1,17,50,31,30,48,21,46,49,26,16,20,15,9,55,42,38,36,13,40,41,22,35,53,52,45,29,23,33,28,3,7,54,24,10,43,6,47,25}, // permutation 7
{7,54,43,5,3,41,51,24,20,36,9,44,19,15,17,8,38,32,27,16,37,1,4,49,2,55,14,30,28,31,52,42,26,46,35,39,12,18,0,6,48,11,40,21,22,10,33,34,45,53,13,23,47,25,50,29}, // permutation 8
{4,55,20,37,50,7,34,1,9,0,28,46,44,23,45,38,5,30,27,31,33,3,32,12,48,52,11,6,47,40,16,15,24,43,41,42,10,22,2,54,39,49,26,17,36,18,19,35,21,53,14,29,25,51,13,8} // permutation 9
};

// Seed: 3919677890

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint64_t  f0;
   uint64_t  f1;
};

struct S1 {
    volatile int32_t g_2;
    volatile int32_t g_3;
    volatile int32_t g_4;
    volatile int32_t g_5;
    int32_t g_6[8];
    volatile int32_t g_9;
    int32_t g_10;
    VECTOR(int64_t, 4) g_13;
    volatile VECTOR(int64_t, 2) g_14;
    VECTOR(int64_t, 2) g_17;
    volatile VECTOR(int64_t, 4) g_18;
    volatile VECTOR(int64_t, 16) g_20;
    VECTOR(uint64_t, 2) g_23;
    VECTOR(int32_t, 2) g_36;
    uint64_t g_49;
    int16_t g_53;
    VECTOR(int16_t, 8) g_73;
    uint32_t g_100;
    int64_t g_126;
    uint64_t g_134;
    VECTOR(uint32_t, 2) g_152;
    int32_t g_159;
    int32_t g_214;
    VECTOR(int8_t, 16) g_224;
    uint32_t g_225;
    int8_t g_232;
    VECTOR(uint16_t, 2) g_245;
    uint16_t g_247;
    VECTOR(int32_t, 2) g_273;
    VECTOR(int16_t, 8) g_274;
    volatile uint64_t g_278;
    volatile uint64_t *g_277;
    volatile uint64_t **g_276;
    uint16_t g_293;
    uint64_t *g_297;
    VECTOR(int32_t, 16) g_301;
    VECTOR(int32_t, 2) g_302;
    int16_t *g_322;
    int16_t **g_321;
    int32_t *g_339[7];
    int32_t g_375[10][1];
    VECTOR(uint8_t, 8) g_384;
    VECTOR(int8_t, 4) g_385;
    VECTOR(int8_t, 8) g_387;
    VECTOR(int8_t, 8) g_388;
    VECTOR(int8_t, 4) g_427;
    uint64_t g_440;
    VECTOR(uint32_t, 2) g_454;
    volatile uint16_t * volatile g_468;
    volatile uint16_t * volatile *g_467[7];
    VECTOR(int32_t, 4) g_487;
    VECTOR(int32_t, 4) g_488;
    uint32_t g_494;
    int8_t *g_501[4][2];
    VECTOR(uint32_t, 8) g_508;
    int16_t **g_522;
    int32_t g_739;
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
int16_t  func_1(struct S1 * p_758);
uint16_t  func_25(int16_t  p_26, uint32_t  p_27, int64_t  p_28, uint8_t  p_29, int64_t  p_30, struct S1 * p_758);
int32_t  func_55(int16_t * p_56, struct S1 * p_758);
int16_t * func_57(uint64_t * p_58, int32_t  p_59, int32_t  p_60, struct S1 * p_758);
int64_t  func_64(uint64_t * p_65, uint64_t  p_66, uint8_t  p_67, int16_t  p_68, uint64_t * p_69, struct S1 * p_758);
uint64_t * func_74(int8_t  p_75, uint64_t  p_76, struct S1 * p_758);
int8_t  func_82(int16_t * p_83, int16_t * p_84, struct S1 * p_758);
int16_t * func_85(uint8_t  p_86, uint8_t  p_87, uint64_t * p_88, uint64_t  p_89, struct S1 * p_758);
uint64_t  func_94(uint32_t  p_95, uint8_t  p_96, int64_t  p_97, uint16_t  p_98, struct S1 * p_758);
uint16_t  func_118(int64_t  p_119, int16_t ** p_120, struct S1 * p_758);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_758->g_6 p_758->g_385 p_758->g_739 p_758->g_49 p_758->g_375
 * writes: p_758->g_6 p_758->g_10 p_758->g_739 p_758->g_49
 */
int16_t  func_1(struct S1 * p_758)
{ /* block id: 4 */
    VECTOR(int64_t, 16) l_16 = (VECTOR(int64_t, 16))((-3L), (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), (-1L)), (-1L)), (-1L), (-3L), (-1L), (VECTOR(int64_t, 2))((-3L), (-1L)), (VECTOR(int64_t, 2))((-3L), (-1L)), (-3L), (-1L), (-3L), (-1L));
    VECTOR(int32_t, 16) l_41 = (VECTOR(int32_t, 16))(0x161AC8BEL, (VECTOR(int32_t, 4))(0x161AC8BEL, (VECTOR(int32_t, 2))(0x161AC8BEL, (-1L)), (-1L)), (-1L), 0x161AC8BEL, (-1L), (VECTOR(int32_t, 2))(0x161AC8BEL, (-1L)), (VECTOR(int32_t, 2))(0x161AC8BEL, (-1L)), 0x161AC8BEL, (-1L), 0x161AC8BEL, (-1L));
    int i;
    for (p_758->g_6[0] = (-26); (p_758->g_6[0] < 18); ++p_758->g_6[0])
    { /* block id: 7 */
        int32_t l_19 = 0x6F2B5D06L;
        VECTOR(int32_t, 2) l_35 = (VECTOR(int32_t, 2))(1L, 1L);
        VECTOR(int32_t, 16) l_38 = (VECTOR(int32_t, 16))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 1L), 1L), 1L, (-4L), 1L, (VECTOR(int32_t, 2))((-4L), 1L), (VECTOR(int32_t, 2))((-4L), 1L), (-4L), 1L, (-4L), 1L);
        VECTOR(int32_t, 8) l_39 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0L), 0L), 0L, (-8L), 0L);
        uint32_t l_50 = 0x63D46B2EL;
        int32_t l_54 = 0x50622311L;
        int32_t l_740 = (-8L);
        int i, j;
        for (p_758->g_10 = 8; (p_758->g_10 < 17); ++p_758->g_10)
        { /* block id: 10 */
            VECTOR(int64_t, 4) l_15 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L));
            VECTOR(int64_t, 4) l_24 = (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), (-10L)), (-10L));
            VECTOR(int32_t, 8) l_37 = (VECTOR(int32_t, 8))((-4L), (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), 0x28409D7FL), 0x28409D7FL), 0x28409D7FL, (-4L), 0x28409D7FL);
            VECTOR(int32_t, 2) l_40 = (VECTOR(int32_t, 2))(0x6E8584DFL, 0x1B5E3525L);
            uint64_t *l_48[9];
            int16_t *l_51 = (void*)0;
            int16_t *l_52 = &p_758->g_53;
            int32_t *l_738 = &p_758->g_739;
            int i;
            for (i = 0; i < 9; i++)
                l_48[i] = &p_758->g_49;
            (*l_738) &= (((VECTOR(int64_t, 4))(1L, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(0x1214A9BACDE9E843L, ((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 4))(0x5D1C58BDFADF6285L, 1L, (-1L), 0x4C4B7C7008B15E31L)).even, ((VECTOR(int64_t, 8))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 8),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(p_758->g_13.xy)).xxxxyyxx)))))), ((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(0x16D402DA3C3D2146L, ((VECTOR(int64_t, 2))(p_758->g_14.xy)), 0x14CC5C6A3F1540EEL)).odd)).yxyy, ((VECTOR(int64_t, 4))(l_15.zzxy)), ((VECTOR(int64_t, 16))(l_16.sc6f79b347d17017a)).s68fa))).wxyzwzyz, ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x7874ACC0136EF6F0L, 0x5A550E8F7CF8FB6FL)), ((VECTOR(int64_t, 4))(p_758->g_17.xxxy)), 0x5F2DDFDAF0B56FE1L, 0x52E84CBF7762406CL)).odd, ((VECTOR(int64_t, 4))(hadd(((VECTOR(int64_t, 8))(p_758->g_18.yxxzwzxw)).lo, ((VECTOR(int64_t, 8))((-7L), l_19, 0x21E525036FFE6170L, ((VECTOR(int64_t, 2))(0x2244F8A3D35555D5L, 0x5B04CE9D0615A034L)), ((VECTOR(int64_t, 2))(0x0512ED4033E270BBL, 4L)), 0x6A6B93DCEDB1A73BL)).odd))), ((VECTOR(int64_t, 8))(0x5E47E5F8F0B53CF5L, (p_758->g_5 < (p_758->g_6[0] & (-9L))), ((VECTOR(int64_t, 4))(((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(p_758->g_20.s9a2d)))))).y <= ((safe_lshift_func_int16_t_s_u((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_19, ((VECTOR(uint64_t, 8))(p_758->g_23.yxyxyyxx)).s5, 0xDCDEDC29BFBD42F9L, 0x2B81468F30040642L)).even)).xyxxxyxxyxyyxyyy)).se < (((VECTOR(int64_t, 16))(l_24.wwzzywwwwxzxzwww)).s0 > (0x059BL < p_758->g_10))), func_25(((*l_52) = (safe_mod_func_int64_t_s_s((~((safe_sub_func_int8_t_s_s((((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(0x17358D0DL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 16))(l_35.yxyxyxxyxyxyxxxy)).s586f, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_758->g_36.xxyy)), 0x7EBA052CL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(3L, 0x78D320CDL)))), 0L)))).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_37.s77)).yyxxyyyx)).even, ((VECTOR(int32_t, 4))(0x31EF36A5L, 0x004519F0L, 0x642CDC50L, 1L)))))))), ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 0x71B59594L)))), ((VECTOR(int32_t, 8))(l_38.s657e6ff2)).s70))), (l_37.s4 = ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(l_39.s2511735730662276)).even, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_40.xxxx)).hi)).yxxxxxyx))).even)), ((VECTOR(int32_t, 2))(l_41.s05)).xxxy))).xzxyzxxx)).hi)).wxxwywxyyzzwywwy, (int32_t)(FAKE_DIVERGE(p_758->global_1_offset, get_global_id(1), 10) , ((VECTOR(int32_t, 8))(((safe_add_func_int64_t_s_s((safe_mod_func_uint64_t_u_u((l_50 = (safe_mod_func_uint32_t_u_u(p_758->g_17.x, p_758->g_23.x))), p_758->g_36.y)), p_758->g_17.y)) <= l_38.s8), 0x35E3094FL, l_15.w, (-1L), ((VECTOR(int32_t, 2))(1L)), (-3L), 0x51F38FA4L)).s4)))).se), ((VECTOR(int32_t, 2))(0x64EC4FEFL)), 0x6F1EF3A5L, (-6L), p_758->g_comm_values[p_758->tid], ((VECTOR(int32_t, 4))((-1L))))).s681d, ((VECTOR(int32_t, 4))(0x125A641CL)), ((VECTOR(int32_t, 4))(0x4C2FCF81L))))).odd)), 0x475790E3L, l_39.s0, ((VECTOR(int32_t, 2))(0x64E9E256L)), (-4L))), ((VECTOR(int32_t, 8))(0x75B2801FL))))).s5 > p_758->g_36.y), p_758->g_23.y)) <= p_758->g_36.x)), l_38.sf))), p_758->g_13.x, l_41.s5, l_54, p_758->g_36.y, p_758))) , p_758->g_384.s0)) < 4UL), ((VECTOR(int64_t, 2))(0x5C0328FACE59B561L)), 0x51C992C85C006849L)), 0x51CC495B9DED5D10L, (-1L))).even))).xzzwxxzx))).s02))), 4L)).yyxwzyzwyzxwxzzy)).s98)), 0x7901D0DA1A27DC9DL)).z == p_758->g_385.x);
            l_35.x |= ((~(l_740 && 0x1AL)) || (safe_mod_func_uint64_t_u_u(FAKE_DIVERGE(p_758->local_0_offset, get_local_id(0), 10), l_38.sf)));
            for (p_758->g_49 = (-6); (p_758->g_49 != 43); p_758->g_49 = safe_add_func_int8_t_s_s(p_758->g_49, 6))
            { /* block id: 330 */
                VECTOR(uint64_t, 8) l_754 = (VECTOR(uint64_t, 8))(0xACA0E395C367401CL, (VECTOR(uint64_t, 4))(0xACA0E395C367401CL, (VECTOR(uint64_t, 2))(0xACA0E395C367401CL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xACA0E395C367401CL, 18446744073709551615UL);
                int32_t *l_755 = (void*)0;
                int32_t *l_756 = (void*)0;
                int32_t *l_757 = (void*)0;
                int i;
                if ((atomic_inc(&p_758->l_atomic_input[83]) == 7))
                { /* block id: 332 */
                    VECTOR(int8_t, 16) l_745 = (VECTOR(int8_t, 16))(0x69L, (VECTOR(int8_t, 4))(0x69L, (VECTOR(int8_t, 2))(0x69L, 0x78L), 0x78L), 0x78L, 0x69L, 0x78L, (VECTOR(int8_t, 2))(0x69L, 0x78L), (VECTOR(int8_t, 2))(0x69L, 0x78L), 0x69L, 0x78L, 0x69L, 0x78L);
                    uint32_t l_746 = 0xF175BF84L;
                    int32_t l_747 = 0x220A60E0L;
                    VECTOR(int32_t, 2) l_748 = (VECTOR(int32_t, 2))(1L, 0L);
                    uint32_t l_749 = 9UL;
                    int32_t l_750 = 0x48013925L;
                    int32_t l_751[7][2][8] = {{{(-3L),(-1L),3L,1L,4L,(-7L),3L,(-3L)},{(-3L),(-1L),3L,1L,4L,(-7L),3L,(-3L)}},{{(-3L),(-1L),3L,1L,4L,(-7L),3L,(-3L)},{(-3L),(-1L),3L,1L,4L,(-7L),3L,(-3L)}},{{(-3L),(-1L),3L,1L,4L,(-7L),3L,(-3L)},{(-3L),(-1L),3L,1L,4L,(-7L),3L,(-3L)}},{{(-3L),(-1L),3L,1L,4L,(-7L),3L,(-3L)},{(-3L),(-1L),3L,1L,4L,(-7L),3L,(-3L)}},{{(-3L),(-1L),3L,1L,4L,(-7L),3L,(-3L)},{(-3L),(-1L),3L,1L,4L,(-7L),3L,(-3L)}},{{(-3L),(-1L),3L,1L,4L,(-7L),3L,(-3L)},{(-3L),(-1L),3L,1L,4L,(-7L),3L,(-3L)}},{{(-3L),(-1L),3L,1L,4L,(-7L),3L,(-3L)},{(-3L),(-1L),3L,1L,4L,(-7L),3L,(-3L)}}};
                    int i, j, k;
                    l_747 = (l_745.sb , l_746);
                    l_751[3][0][3] &= ((((VECTOR(int32_t, 16))(l_748.xxxyxxxxxyyxyyyx)).s9 , l_749) , ((l_750 = 0x0AACL) , (-1L)));
                    unsigned int result = 0;
                    result += l_745.sf;
                    result += l_745.se;
                    result += l_745.sd;
                    result += l_745.sc;
                    result += l_745.sb;
                    result += l_745.sa;
                    result += l_745.s9;
                    result += l_745.s8;
                    result += l_745.s7;
                    result += l_745.s6;
                    result += l_745.s5;
                    result += l_745.s4;
                    result += l_745.s3;
                    result += l_745.s2;
                    result += l_745.s1;
                    result += l_745.s0;
                    result += l_746;
                    result += l_747;
                    result += l_748.y;
                    result += l_748.x;
                    result += l_749;
                    result += l_750;
                    int l_751_i0, l_751_i1, l_751_i2;
                    for (l_751_i0 = 0; l_751_i0 < 7; l_751_i0++) {
                        for (l_751_i1 = 0; l_751_i1 < 2; l_751_i1++) {
                            for (l_751_i2 = 0; l_751_i2 < 8; l_751_i2++) {
                                result += l_751[l_751_i0][l_751_i1][l_751_i2];
                            }
                        }
                    }
                    atomic_add(&p_758->l_special_values[83], result);
                }
                else
                { /* block id: 336 */
                    (1 + 1);
                }
                (*l_738) = l_16.se;
                l_35.y = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((*l_738) |= (((safe_add_func_uint64_t_u_u(l_754.s4, 18446744073709551615UL)) < l_754.s5) < 0xB5C3L)), ((VECTOR(int32_t, 2))(0x3195E2C1L, 0x397A0AB6L)), 1L)).zxwxzyzyzwwywyzx)).s5;
                (*l_738) ^= l_16.sa;
            }
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_758->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 56)), permutations[(safe_mod_func_uint32_t_u_u(p_758->g_375[1][0], 10))][(safe_mod_func_uint32_t_u_u(p_758->tid, 56))]));
    }
    return l_16.s4;
}


/* ------------------------------------------ */
/* 
 * reads : p_758->g_73 p_758->g_23 p_758->g_49 p_758->g_53 p_758->g_6 p_758->g_126 p_758->g_134 p_758->g_152 p_758->g_36 p_758->g_159 p_758->g_comm_values p_758->g_224 p_758->g_245 p_758->g_225 p_758->g_17 p_758->g_13 p_758->g_273 p_758->g_274 p_758->g_276 p_758->g_10 p_758->g_277 p_758->g_293 p_758->g_297 p_758->g_301 p_758->g_302 p_758->g_100 p_758->g_321 p_758->g_322 p_758->g_375 p_758->g_384 p_758->g_385 p_758->g_387 p_758->g_388 p_758->g_427 p_758->g_440 p_758->g_454 p_758->g_467 p_758->g_339 p_758->g_487 p_758->g_488 p_758->g_494 p_758->g_508
 * writes: p_758->g_100 p_758->g_49 p_758->g_36 p_758->g_126 p_758->g_134 p_758->g_152 p_758->g_159 p_758->g_53 p_758->g_225 p_758->g_232 p_758->g_245 p_758->g_247 p_758->g_13 p_758->g_274 p_758->g_293 p_758->g_224 p_758->g_339 p_758->g_322 p_758->g_375 p_758->g_494 p_758->g_501 p_758->g_73 p_758->g_321 p_758->g_522
 */
uint16_t  func_25(int16_t  p_26, uint32_t  p_27, int64_t  p_28, uint8_t  p_29, int64_t  p_30, struct S1 * p_758)
{ /* block id: 14 */
    int32_t l_63 = 0x54FDB33FL;
    VECTOR(int16_t, 4) l_70 = (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x1F70L), 0x1F70L);
    int16_t *l_81 = (void*)0;
    uint32_t *l_99 = &p_758->g_100;
    int16_t l_142 = 0x43A7L;
    uint64_t *l_143 = (void*)0;
    uint64_t **l_296 = &l_143;
    int32_t *l_374[4][4][4] = {{{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]},{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]},{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]},{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]}},{{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]},{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]},{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]},{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]}},{{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]},{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]},{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]},{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]}},{{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]},{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]},{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]},{(void*)0,&p_758->g_6[0],&l_63,&p_758->g_6[0]}}};
    int32_t **l_376 = &p_758->g_339[6];
    VECTOR(uint64_t, 16) l_377 = (VECTOR(uint64_t, 16))(0x9A6C4772AB65F3D5L, (VECTOR(uint64_t, 4))(0x9A6C4772AB65F3D5L, (VECTOR(uint64_t, 2))(0x9A6C4772AB65F3D5L, 1UL), 1UL), 1UL, 0x9A6C4772AB65F3D5L, 1UL, (VECTOR(uint64_t, 2))(0x9A6C4772AB65F3D5L, 1UL), (VECTOR(uint64_t, 2))(0x9A6C4772AB65F3D5L, 1UL), 0x9A6C4772AB65F3D5L, 1UL, 0x9A6C4772AB65F3D5L, 1UL);
    VECTOR(int8_t, 8) l_386 = (VECTOR(int8_t, 8))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 2L), 2L), 2L, (-10L), 2L);
    VECTOR(int8_t, 8) l_389 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x50L), 0x50L), 0x50L, 0L, 0x50L);
    VECTOR(int8_t, 8) l_392 = (VECTOR(int8_t, 8))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), (-1L)), (-1L)), (-1L), (-10L), (-1L));
    int64_t l_398 = 0x632DEB9C04E9FF84L;
    int64_t l_402[8][8] = {{0x305ADD13F3FB402EL,(-1L),0x4FC4073BF84B31CFL,0x78D22C9B9D7CA3E4L,0x360B09C2FB2684DEL,0x305ADD13F3FB402EL,0x78D22C9B9D7CA3E4L,(-6L)},{0x305ADD13F3FB402EL,(-1L),0x4FC4073BF84B31CFL,0x78D22C9B9D7CA3E4L,0x360B09C2FB2684DEL,0x305ADD13F3FB402EL,0x78D22C9B9D7CA3E4L,(-6L)},{0x305ADD13F3FB402EL,(-1L),0x4FC4073BF84B31CFL,0x78D22C9B9D7CA3E4L,0x360B09C2FB2684DEL,0x305ADD13F3FB402EL,0x78D22C9B9D7CA3E4L,(-6L)},{0x305ADD13F3FB402EL,(-1L),0x4FC4073BF84B31CFL,0x78D22C9B9D7CA3E4L,0x360B09C2FB2684DEL,0x305ADD13F3FB402EL,0x78D22C9B9D7CA3E4L,(-6L)},{0x305ADD13F3FB402EL,(-1L),0x4FC4073BF84B31CFL,0x78D22C9B9D7CA3E4L,0x360B09C2FB2684DEL,0x305ADD13F3FB402EL,0x78D22C9B9D7CA3E4L,(-6L)},{0x305ADD13F3FB402EL,(-1L),0x4FC4073BF84B31CFL,0x78D22C9B9D7CA3E4L,0x360B09C2FB2684DEL,0x305ADD13F3FB402EL,0x78D22C9B9D7CA3E4L,(-6L)},{0x305ADD13F3FB402EL,(-1L),0x4FC4073BF84B31CFL,0x78D22C9B9D7CA3E4L,0x360B09C2FB2684DEL,0x305ADD13F3FB402EL,0x78D22C9B9D7CA3E4L,(-6L)},{0x305ADD13F3FB402EL,(-1L),0x4FC4073BF84B31CFL,0x78D22C9B9D7CA3E4L,0x360B09C2FB2684DEL,0x305ADD13F3FB402EL,0x78D22C9B9D7CA3E4L,(-6L)}};
    VECTOR(uint32_t, 4) l_421 = (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0x6474AD59L), 0x6474AD59L);
    VECTOR(int8_t, 8) l_433 = (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x7CL), 0x7CL), 0x7CL, 8L, 0x7CL);
    VECTOR(int8_t, 4) l_434 = (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x00L), 0x00L);
    uint16_t *l_438 = &p_758->g_293;
    uint16_t **l_437 = &l_438;
    VECTOR(uint64_t, 4) l_461 = (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 0x14A6E320B6A89F8EL), 0x14A6E320B6A89F8EL);
    int32_t l_466 = (-8L);
    VECTOR(int32_t, 4) l_490 = (VECTOR(int32_t, 4))((-7L), (VECTOR(int32_t, 2))((-7L), (-2L)), (-2L));
    VECTOR(uint8_t, 4) l_519 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x76L), 0x76L);
    int i, j, k;
    p_758->g_375[0][0] |= func_55(((*p_758->g_321) = func_57((((safe_lshift_func_uint8_t_u_s(l_63, ((l_63 , func_64(&p_758->g_49, (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_70.zz)).yxyx)).yyxywwzx, ((VECTOR(int16_t, 2))((-7L), 1L)).yxxyxxxy))))).s2661472070023434)).s6 <= (safe_add_func_int16_t_s_s((~(((VECTOR(int16_t, 2))(p_758->g_73.s60)).odd & (((*l_296) = func_74(l_63, (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(0x7B07L, (((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-2L), 0x500CL)), 0x5D84L, (-10L))).x <= ((!(((void*)0 != l_81) , (((func_82(func_85((safe_div_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(func_94(((*l_99) = 0UL), l_70.w, p_758->g_23.x, p_26, p_758), p_758->g_73.s6)), l_142)), l_70.z, l_143, l_63, p_758), &p_758->g_53, p_758) || l_70.w) < p_758->g_comm_values[p_758->tid]) | p_26))) != p_758->g_6[0])) || 0xA494EFE83E42A8C7L) , 0xD6D2L))), p_758->g_23.x)), p_758)) == (void*)0))), l_70.z))), p_758->g_73.s0, p_758->g_23.y, p_758->g_297, p_758)) != l_142))) , 0UL) , (*l_296)), p_28, l_142, p_758)), p_758);
    (*l_376) = &p_758->g_10;
    if ((((p_30 | ((VECTOR(int16_t, 2))(0x02F7L, (-1L))).lo) <= ((**l_296) &= ((VECTOR(uint64_t, 16))(l_377.sd9ee3f82900532ac)).s9)) && ((((p_28 >= ((VECTOR(int64_t, 4))(mad_sat(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 8))(1L, 0x54856B311D65B831L, (safe_add_func_int32_t_s_s(p_29, (safe_rshift_func_uint16_t_u_s((safe_div_func_int8_t_s_s((((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 4))(p_758->g_384.s0763)).hi, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(abs_diff(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(p_758->g_385.wywy)).odd)), 0x46L, p_29, ((VECTOR(int8_t, 8))(l_386.s11606444)).s3, (!((VECTOR(int8_t, 16))(rotate(((VECTOR(int8_t, 4))(p_758->g_387.s2615)).wwxzwzywyxwwwzxz, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(p_758->g_388.s3220021041754726)).sc2, ((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(l_389.s47)).xyyxxxxxyyxyyyxy, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 16))(0L, (safe_sub_func_uint16_t_u_u(p_27, 0x37A4L)), 0x58L, 7L, (GROUP_DIVERGE(1, 1) , p_758->g_6[0]), 3L, ((VECTOR(int8_t, 8))(l_392.s72142523)), 3L, 0x32L)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 8))(p_28, 0x11L, p_27, ((VECTOR(int8_t, 4))(0x1EL)), (-8L))), ((VECTOR(int8_t, 8))(0x57L))))).s7421321112004305, ((VECTOR(int8_t, 16))((-1L)))))).s41e5)).xwzyzwyxzxxwxyzz))))), ((VECTOR(int8_t, 16))(0x2EL))))).s12))).xxyxxxxxyyyxxxxx))).s8), 5L, 0x53L)), ((VECTOR(int8_t, 8))(0x39L))))).hi)).odd))).even > 0x25L), GROUP_DIVERGE(0, 1))), 4)))), ((VECTOR(int64_t, 2))(0x219AD1B7D556F109L)), 0x64A2F1890C6F0F1DL, 1L, 0x0DF23D0AE8697D12L)).s77, ((VECTOR(int64_t, 2))((-9L))), ((VECTOR(int64_t, 2))((-1L)))))), p_26, 0x77AB2EC52D49B9EAL, ((VECTOR(int64_t, 2))(0x1031F31D62F5436BL)), p_28, ((VECTOR(int64_t, 4))(0x77FD64744DF4F4DEL)), ((VECTOR(int64_t, 2))(0x550BE7E9B71E8BBEL)), 0x26C7F9A8B570551EL, 0x3C1C51A8732FA958L, 8L)).sd3)), (int64_t)p_758->g_152.y))).xyyx, ((VECTOR(int64_t, 4))(0x0660A0A072F32C32L)), ((VECTOR(int64_t, 4))(0x2FC07FF9CE346E09L))))).z) > p_758->g_100) , FAKE_DIVERGE(p_758->local_2_offset, get_local_id(2), 10)) <= GROUP_DIVERGE(0, 1))))
    { /* block id: 130 */
        int8_t l_395 = 5L;
        int32_t l_397 = 0x2D959840L;
        int32_t l_399 = (-2L);
        int32_t l_400 = 0x69731E87L;
        int32_t l_401 = (-9L);
        int32_t l_403 = 0x62367775L;
        int32_t l_404 = 9L;
        int32_t l_405 = (-7L);
        int32_t l_406 = 1L;
        int32_t l_407 = 0x1BCFB18BL;
        int32_t l_408 = 0x5D9AC16DL;
        int32_t l_409 = 0x6228CDCAL;
        int32_t l_410 = 0x3DC42C84L;
        int32_t l_411[9][9] = {{0x38FD9038L,0x06EB6938L,2L,0x06EB6938L,0x38FD9038L,0x38FD9038L,0x06EB6938L,2L,0x06EB6938L},{0x38FD9038L,0x06EB6938L,2L,0x06EB6938L,0x38FD9038L,0x38FD9038L,0x06EB6938L,2L,0x06EB6938L},{0x38FD9038L,0x06EB6938L,2L,0x06EB6938L,0x38FD9038L,0x38FD9038L,0x06EB6938L,2L,0x06EB6938L},{0x38FD9038L,0x06EB6938L,2L,0x06EB6938L,0x38FD9038L,0x38FD9038L,0x06EB6938L,2L,0x06EB6938L},{0x38FD9038L,0x06EB6938L,2L,0x06EB6938L,0x38FD9038L,0x38FD9038L,0x06EB6938L,2L,0x06EB6938L},{0x38FD9038L,0x06EB6938L,2L,0x06EB6938L,0x38FD9038L,0x38FD9038L,0x06EB6938L,2L,0x06EB6938L},{0x38FD9038L,0x06EB6938L,2L,0x06EB6938L,0x38FD9038L,0x38FD9038L,0x06EB6938L,2L,0x06EB6938L},{0x38FD9038L,0x06EB6938L,2L,0x06EB6938L,0x38FD9038L,0x38FD9038L,0x06EB6938L,2L,0x06EB6938L},{0x38FD9038L,0x06EB6938L,2L,0x06EB6938L,0x38FD9038L,0x38FD9038L,0x06EB6938L,2L,0x06EB6938L}};
        uint32_t l_412 = 0x1038A51DL;
        int i, j;
        for (p_28 = 4; (p_28 < (-7)); p_28 = safe_sub_func_int64_t_s_s(p_28, 9))
        { /* block id: 133 */
            uint16_t l_396 = 65535UL;
            l_396 &= (l_395 |= p_27);
        }
        ++l_412;
    }
    else
    { /* block id: 138 */
        VECTOR(int64_t, 4) l_420 = (VECTOR(int64_t, 4))(0x25C264EB62DA6856L, (VECTOR(int64_t, 2))(0x25C264EB62DA6856L, 0x5DCE03BAAA19CD7CL), 0x5DCE03BAAA19CD7CL);
        VECTOR(int8_t, 2) l_426 = (VECTOR(int8_t, 2))(0x57L, 6L);
        uint16_t *l_429[6] = {&p_758->g_293,(void*)0,&p_758->g_293,&p_758->g_293,(void*)0,&p_758->g_293};
        uint16_t **l_428 = &l_429[3];
        VECTOR(int8_t, 4) l_430 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x63L), 0x63L);
        VECTOR(int8_t, 16) l_431 = (VECTOR(int8_t, 16))(0x4AL, (VECTOR(int8_t, 4))(0x4AL, (VECTOR(int8_t, 2))(0x4AL, 0x54L), 0x54L), 0x54L, 0x4AL, 0x54L, (VECTOR(int8_t, 2))(0x4AL, 0x54L), (VECTOR(int8_t, 2))(0x4AL, 0x54L), 0x4AL, 0x54L, 0x4AL, 0x54L);
        VECTOR(int8_t, 16) l_432 = (VECTOR(int8_t, 16))(0x7CL, (VECTOR(int8_t, 4))(0x7CL, (VECTOR(int8_t, 2))(0x7CL, 0x0CL), 0x0CL), 0x0CL, 0x7CL, 0x0CL, (VECTOR(int8_t, 2))(0x7CL, 0x0CL), (VECTOR(int8_t, 2))(0x7CL, 0x0CL), 0x7CL, 0x0CL, 0x7CL, 0x0CL);
        uint8_t *l_439[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
        uint32_t l_458 = 1UL;
        int32_t l_463 = (-1L);
        VECTOR(int32_t, 8) l_489 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 2L), 2L), 2L, 7L, 2L);
        int16_t **l_520 = &p_758->g_322;
        int i;
        if (((((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((safe_div_func_uint64_t_u_u((0UL | 7UL), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(0L, ((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_420.xzzwyxxwzzzyyzxy)).s22)).yxxyyxyxxyxyyyxx)).odd)), ((VECTOR(int64_t, 8))((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(l_421.yw)), 5UL, 0UL)), ((p_26 > (p_29 = (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 8))(add_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(safe_clamp_func(VECTOR(int8_t, 8),VECTOR(int8_t, 8),((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_426.xy)))))), 0x77L, 0x6CL)).hi, ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(0x46L, 1L)).yxxyxyyyyxxxyyyx, ((VECTOR(int8_t, 16))(p_758->g_427.yxwzxzwyywywxyyz)), ((VECTOR(int8_t, 4))(0x1BL, (p_27 >= (((*l_428) = l_81) != (void*)0)), 8L, (-2L))).yywwzwwzzxxywzyx))).odd))).s33))))).xyyyxyyxxyyyxyxx)).s74, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_430.wxzwwyzx)).s7326145525476260)).s66f9, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_431.s70638f9a5b9e4a3a)).lo)).hi))).wzxxwxzyzzyxyxzy, ((VECTOR(int8_t, 2))(l_432.s40)).xxyyyyxxyyyxxyyy))).sd14f, ((VECTOR(int8_t, 8))(l_433.s66432434)).lo))).xxyxxxzx)).s15))), (-6L), 1L, (-1L), ((VECTOR(int8_t, 2))(l_434.yz)), 0x10L)))).s05)).yxxxxyxy, ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 16))(mad_sat(((VECTOR(int8_t, 16))((safe_add_func_uint32_t_u_u((((void*)0 != l_437) && l_430.y), p_758->g_53)), 0x11L, ((VECTOR(int8_t, 4))(1L)), ((VECTOR(int8_t, 2))(0x44L)), ((VECTOR(int8_t, 2))(1L)), (-1L), 0x02L, ((VECTOR(int8_t, 4))(0x4CL)))), ((VECTOR(int8_t, 16))(0x61L)), ((VECTOR(int8_t, 16))(0x6EL))))).s91aa, ((VECTOR(int8_t, 4))(0x55L))))).xxxzyyxy, ((VECTOR(int8_t, 8))((-1L)))))).even)).xxzyxyxxwwwywwyx)).hi, ((VECTOR(int8_t, 8))(0L))))).s4, 4L)), p_29)))) ^ p_28), p_27, 4294967287UL, 0x73BB9EFFL)).s4 <= 0x1342A853L), ((VECTOR(int64_t, 2))(0x6E7A8C3F23F24446L)), 0x4FB5E5A144A0A09CL, 0x57658509CE3AA3CBL, p_758->g_440, 8L, 0x1FC333DC7F703EACL)))).sda)).hi | 0x8C72BF445B9AE019L) && p_26), 0x61569F60906D568FL, 0x3A23549DB6C7FFDDL)).wxxxzzxw)).s1)))), p_758->g_100)) <= p_30) != GROUP_DIVERGE(2, 1)) && 9L))
        { /* block id: 141 */
            int16_t ***l_443 = &p_758->g_321;
            int32_t **l_449 = &p_758->g_339[0];
            int32_t l_451 = 0x3F1EE9FCL;
            int64_t *l_457 = &l_398;
            int16_t *l_462[1][9];
            int8_t *l_497 = (void*)0;
            VECTOR(int32_t, 8) l_509 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x74BFAF81L), 0x74BFAF81L), 0x74BFAF81L, (-6L), 0x74BFAF81L);
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 9; j++)
                    l_462[i][j] = (void*)0;
            }
            for (l_398 = (-13); (l_398 < (-29)); l_398 = safe_sub_func_uint16_t_u_u(l_398, 9))
            { /* block id: 144 */
                int16_t ***l_444 = &p_758->g_321;
                int16_t ***l_446[7][1] = {{&p_758->g_321},{&p_758->g_321},{&p_758->g_321},{&p_758->g_321},{&p_758->g_321},{&p_758->g_321},{&p_758->g_321}};
                int16_t ****l_445 = &l_446[1][0];
                int32_t l_447 = 7L;
                int64_t *l_448 = &l_402[6][7];
                int32_t ***l_450 = &l_376;
                int i, j;
                l_447 |= ((((&p_758->g_321 != l_443) , FAKE_DIVERGE(p_758->local_2_offset, get_local_id(2), 10)) , l_444) != ((*l_445) = l_443));
                (*l_450) = (((((*l_448) |= l_447) , p_26) <= (p_758->g_384.s6 , p_30)) , l_449);
                l_451 = ((*p_758->g_276) != (void*)0);
            }
            l_451 = ((-1L) < ((((*l_143) = p_27) == p_28) ^ (((l_420.w , ((safe_div_func_uint8_t_u_u((p_29 = (((VECTOR(uint32_t, 8))(1UL, ((VECTOR(uint32_t, 16))(p_758->g_454.xyxyyxyxyxyyyxyy)).s1, (((*l_457) = (((safe_add_func_uint32_t_u_u(l_426.x, p_29)) , p_758->g_245.y) ^ (((*p_758->g_321) == (void*)0) , 0x1A7674EDA1890E1CL))) >= GROUP_DIVERGE(2, 1)), p_758->g_274.s6, ((VECTOR(uint32_t, 2))(4UL)), 1UL, 4294967289UL)).s7 > FAKE_DIVERGE(p_758->group_0_offset, get_group_id(0), 10))), p_758->g_385.y)) , l_458)) < p_26) == p_758->g_100)));
            l_451 = ((p_26 = (l_463 = ((safe_lshift_func_int8_t_s_u(p_28, 2)) != (((p_758->g_17.x > (p_29 |= p_758->g_273.y)) >= (l_461.w , p_30)) , p_758->g_49)))) < (safe_rshift_func_uint8_t_u_u((l_466 == (((((VECTOR(uint32_t, 2))(0x2C6847F2L, 0xA09B3E91L)).lo == (&l_438 != (void*)0)) , (void*)0) == p_758->g_467[4])), FAKE_DIVERGE(p_758->local_2_offset, get_local_id(2), 10))));
            for (l_63 = (-29); (l_63 >= (-22)); l_63++)
            { /* block id: 161 */
                uint32_t *l_493 = &p_758->g_494;
                int8_t *l_498 = (void*)0;
                int8_t **l_499 = (void*)0;
                int8_t **l_500 = &l_498;
                VECTOR(int32_t, 4) l_510 = (VECTOR(int32_t, 4))(0x7F0F120DL, (VECTOR(int32_t, 2))(0x7F0F120DL, (-2L)), (-2L));
                int i;
                for (l_398 = (-20); (l_398 < (-15)); l_398 = safe_add_func_uint16_t_u_u(l_398, 8))
                { /* block id: 164 */
                    uint8_t l_477 = 0UL;
                    for (p_26 = 0; (p_26 < 22); p_26 = safe_add_func_uint8_t_u_u(p_26, 1))
                    { /* block id: 167 */
                        int8_t l_482 = (-1L);
                        uint64_t l_483 = 0UL;
                        int32_t *l_486[5][2][9] = {{{&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0]},{&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0]}},{{&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0]},{&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0]}},{{&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0]},{&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0]}},{{&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0]},{&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0]}},{{&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0]},{&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0],&p_758->g_6[0]}}};
                        int i, j, k;
                        l_482 = ((((p_28 & (safe_add_func_int32_t_s_s(((VECTOR(int32_t, 2))(0x3D0FEBB2L, 0x5648D923L)).odd, (l_477 <= ((VECTOR(int32_t, 4))(0x13C05644L, 3L, 0x2D74B826L, 0L)).y)))) && p_758->g_301.s9) , ((VECTOR(uint64_t, 2))(0x66663467F17F234EL, 1UL)).hi) != (safe_rshift_func_uint8_t_u_u((((*l_99) = p_758->g_comm_values[p_758->tid]) & (p_30 , (0x047F0E2F77D4676CL && 0UL))), 2)));
                        --l_483;
                        l_486[0][0][5] = (*l_449);
                    }
                }
                l_510.w = ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(p_758->g_487.yw)).xxyy, ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(p_758->g_488.wwxz)), ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(l_489.s50)).yxxxyxxx, ((VECTOR(int32_t, 16))(l_490.zwywzxyzwzxxyxwx)).odd, ((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((safe_add_func_uint16_t_u_u((((++(*l_493)) , l_497) != (p_758->g_501[1][0] = ((*l_500) = l_498))), (p_758->g_73.s2 &= (safe_mod_func_int64_t_s_s(((void*)0 != &p_758->g_100), GROUP_DIVERGE(2, 1)))))) && ((p_28 && (l_458 < (safe_mul_func_uint8_t_u_u((p_28 >= (safe_lshift_func_uint8_t_u_s((((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 2))(p_758->g_508.s50)).xxyxxxyxyxxyxyxy, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 16),((VECTOR(uint32_t, 2))(3UL, 4294967293UL)).xxxxyxyxyyyxyyxx, ((VECTOR(uint32_t, 2))(0x43307F74L, 4294967295UL)).xyxyxyxxxxyxxxyy, ((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_509.s21)))).xyyyyyxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x1D784B3FL, (!(l_431.s5 < l_510.y)), ((VECTOR(int32_t, 4))(0x4FCC9D2CL)), p_30, ((VECTOR(int32_t, 8))((-5L))), 0x70C81A8AL)))).hi))))).s2473311003725473)))))))).s8ede, ((VECTOR(uint32_t, 4))(0x9AAB5031L)), ((VECTOR(uint32_t, 4))(4UL))))).y != p_30), 7))), p_26)))) || 1L)), (-1L), 0x69A09EB9L, 0x45FB70E8L))))).wzzzyyyw))).even)))))).wzzxzwyw, ((VECTOR(int32_t, 8))(0x4BB31F39L))))).s3;
            }
        }
        else
        { /* block id: 180 */
            int16_t ***l_521[9][7][4] = {{{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520}},{{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520}},{{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520}},{{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520}},{{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520}},{{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520}},{{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520}},{{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520}},{{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520},{&l_520,&l_520,&l_520,&l_520}}};
            int32_t l_523 = 0x15C18AB4L;
            int32_t l_524 = 0x0A6858B2L;
            int i, j, k;
            l_524 &= (p_28 ^ ((&p_758->g_276 == ((safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s((p_758->g_comm_values[p_758->tid] | (((0x437439B5L <= (safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_519.xzzwwxyx)).s0123322434337444)).sa2)).odd, (((void*)0 == &p_758->g_321) > ((((p_758->g_321 = &p_758->g_322) != (p_758->g_522 = l_520)) > (p_29 |= ((((!(l_523 && p_758->g_73.s3)) , l_439[3]) != l_439[1]) > 0x5200F32C25B13E29L))) ^ p_26))))) , p_758->g_427.z) < p_30)), p_27)), 6UL)) , (void*)0)) <= 255UL));
        }
        if ((atomic_inc(&p_758->g_atomic_input[91 * get_linear_group_id() + 3]) == 0))
        { /* block id: 187 */
            int32_t l_525 = 0x71045BBEL;
            int64_t l_663 = 0x29A1A3CE8F76E35CL;
            uint64_t l_729 = 0x61991B1EC0D26CA1L;
            uint16_t l_730 = 0UL;
            int32_t l_731 = 0x4D44DEE4L;
            uint32_t l_732[3];
            int i;
            for (i = 0; i < 3; i++)
                l_732[i] = 0xA669A6D0L;
            for (l_525 = 0; (l_525 != (-10)); l_525--)
            { /* block id: 190 */
                uint32_t l_528 = 0x63CB8925L;
                int32_t l_610 = 0x3F50A6BEL;
                uint64_t l_611 = 0x2AF77D0B30D15D7CL;
                if (l_528)
                { /* block id: 191 */
                    uint32_t l_529 = 4294967295UL;
                    int16_t l_530 = (-6L);
                    VECTOR(uint32_t, 2) l_531 = (VECTOR(uint32_t, 2))(0x163D03C2L, 4294967295UL);
                    uint64_t l_581[3][4];
                    VECTOR(int32_t, 4) l_582 = (VECTOR(int32_t, 4))(0x44927A11L, (VECTOR(int32_t, 2))(0x44927A11L, 0x7ADD80DDL), 0x7ADD80DDL);
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_581[i][j] = 6UL;
                    }
                    l_530 ^= l_529;
                    if ((FAKE_DIVERGE(p_758->global_0_offset, get_global_id(0), 10) , (((VECTOR(uint32_t, 4))(clz(((VECTOR(uint32_t, 4))(l_531.xyyy))))).y , 0x0FB2D1BAL)))
                    { /* block id: 193 */
                        int32_t l_533[2][1][8] = {{{0x31EC7DACL,0x57E92CD0L,0L,0x57E92CD0L,0x31EC7DACL,0x31EC7DACL,0x57E92CD0L,0L}},{{0x31EC7DACL,0x57E92CD0L,0L,0x57E92CD0L,0x31EC7DACL,0x31EC7DACL,0x57E92CD0L,0L}}};
                        int32_t *l_532 = &l_533[0][0][3];
                        uint32_t l_534 = 0xC4AE6DF3L;
                        uint16_t l_537 = 0xD65BL;
                        int64_t l_540[2];
                        uint32_t l_541[3];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_540[i] = 9L;
                        for (i = 0; i < 3; i++)
                            l_541[i] = 0xFDFCA8BCL;
                        l_532 = (void*)0;
                        l_534++;
                        l_537++;
                        l_541[2] = l_540[1];
                    }
                    else
                    { /* block id: 198 */
                        uint32_t l_542 = 0UL;
                        int32_t l_543 = (-1L);
                        int16_t l_544 = 0x209AL;
                        uint32_t l_545 = 0UL;
                        uint8_t l_546 = 253UL;
                        l_542 = (-1L);
                        l_546 = (l_543 , (l_545 &= l_544));
                    }
                    for (l_530 = (-15); (l_530 != (-16)); --l_530)
                    { /* block id: 205 */
                        VECTOR(uint32_t, 4) l_549 = (VECTOR(uint32_t, 4))(0x56A652C4L, (VECTOR(uint32_t, 2))(0x56A652C4L, 9UL), 9UL);
                        uint32_t l_550 = 0xF5C6648EL;
                        VECTOR(uint32_t, 2) l_551 = (VECTOR(uint32_t, 2))(4294967291UL, 8UL);
                        uint8_t l_552 = 0xF8L;
                        VECTOR(uint32_t, 16) l_553 = (VECTOR(uint32_t, 16))(0x3103D107L, (VECTOR(uint32_t, 4))(0x3103D107L, (VECTOR(uint32_t, 2))(0x3103D107L, 4294967286UL), 4294967286UL), 4294967286UL, 0x3103D107L, 4294967286UL, (VECTOR(uint32_t, 2))(0x3103D107L, 4294967286UL), (VECTOR(uint32_t, 2))(0x3103D107L, 4294967286UL), 0x3103D107L, 4294967286UL, 0x3103D107L, 4294967286UL);
                        VECTOR(uint32_t, 8) l_554 = (VECTOR(uint32_t, 8))(9UL, (VECTOR(uint32_t, 4))(9UL, (VECTOR(uint32_t, 2))(9UL, 4294967294UL), 4294967294UL), 4294967294UL, 9UL, 4294967294UL);
                        VECTOR(uint32_t, 2) l_555 = (VECTOR(uint32_t, 2))(1UL, 4294967292UL);
                        VECTOR(uint32_t, 8) l_556 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), 4294967295UL, 0UL, 4294967295UL);
                        VECTOR(uint16_t, 4) l_557 = (VECTOR(uint16_t, 4))(0x8C14L, (VECTOR(uint16_t, 2))(0x8C14L, 0x9242L), 0x9242L);
                        VECTOR(int16_t, 4) l_558 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-2L)), (-2L));
                        VECTOR(int16_t, 8) l_559 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x08BBL), 0x08BBL), 0x08BBL, (-1L), 0x08BBL);
                        VECTOR(uint8_t, 2) l_560 = (VECTOR(uint8_t, 2))(250UL, 0x4EL);
                        uint32_t l_561 = 0xB931A92CL;
                        int8_t l_562 = (-1L);
                        uint16_t l_563 = 1UL;
                        uint16_t l_564 = 0x381BL;
                        int32_t l_565[9][1] = {{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L},{9L}};
                        VECTOR(int16_t, 16) l_566 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 5L), 5L), 5L, 0L, 5L, (VECTOR(int16_t, 2))(0L, 5L), (VECTOR(int16_t, 2))(0L, 5L), 0L, 5L, 0L, 5L);
                        int32_t l_567 = 0x698BA581L;
                        VECTOR(int8_t, 8) l_568 = (VECTOR(int8_t, 8))(0x2AL, (VECTOR(int8_t, 4))(0x2AL, (VECTOR(int8_t, 2))(0x2AL, 4L), 4L), 4L, 0x2AL, 4L);
                        uint64_t l_569 = 0xC4A7F20FDEC57A34L;
                        int8_t l_570 = (-1L);
                        uint32_t l_571 = 0x67FE97EDL;
                        uint16_t l_572[2];
                        int32_t l_573 = 0x714F0333L;
                        int8_t l_574 = 0x01L;
                        int64_t l_575 = 1L;
                        uint32_t l_576 = 0x15803BB5L;
                        int32_t l_577 = (-5L);
                        VECTOR(uint8_t, 8) l_578 = (VECTOR(uint8_t, 8))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 1UL), 1UL), 1UL, 250UL, 1UL);
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_572[i] = 0xDD25L;
                        l_576 = (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 4))(l_549.wwwx)).xwzxywww, (uint32_t)((l_550 , FAKE_DIVERGE(p_758->global_2_offset, get_global_id(2), 10)) , ((VECTOR(uint32_t, 4))(l_551.yyxx)).w)))).hi, ((VECTOR(uint32_t, 8))(l_552, ((VECTOR(uint32_t, 2))(l_553.s79)), 0xA0565BD2L, ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(mad_sat(((VECTOR(uint32_t, 4))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(l_554.s2442)), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_555.xxyyyyxx)).s7753715773265724)).sb6a0, ((VECTOR(uint32_t, 2))(safe_clamp_func(VECTOR(uint32_t, 2),VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(l_556.s0070)).even, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 8))(rotate(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(hadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(l_557.xxwzwzyyzxzwzzwx)).s0b)), ((VECTOR(uint16_t, 8))(abs(((VECTOR(int16_t, 8))(4L, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_558.xxxwzxyx)).s43)).hi, ((VECTOR(int16_t, 4))(l_559.s2346)), 0x3420L, 2L))))).s70))).xxxxxyxy)), ((VECTOR(uint16_t, 8))(0x5FFEL, 0x20C3L, ((VECTOR(uint16_t, 4))(abs(((VECTOR(int16_t, 16))(4L, (-8L), 0L, ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(0x3A52L, (l_564 = (l_563 |= (((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 2))(l_560.yx)).xxyyyyyxxxxyyxxy, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x8DL, 0xC3L)).yxxxxyyxxyyxyxxx))))).s0 , (l_562 = l_561)))), 0x0A2FL, 1L, l_565[6][0], 1L, ((VECTOR(int16_t, 2))(l_566.s0b)), ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))((l_567 |= 1L), ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(l_568.s2753041433351704)).s6682, (int8_t)0L))).hi, ((VECTOR(uint8_t, 2))(0x67L))))), 0x5E04L, ((VECTOR(int16_t, 2))(0x6E96L)), 0x5AABL, 0x0982L)).hi)).zzywwwyy)).s52))))).odd, l_569, (-1L), 5L, 0x78AEL, 1L, (-1L), 0L)).sd95b, ((VECTOR(int16_t, 4))(0x554CL))))), l_570, (-1L), 0x4A8EL, l_571, 0x64B8L, 0x5578L, (-1L), 0x50D3L, (-10L))).s1858))), 0xCE2CL, 0xCDAEL))))).s5362332736741165, ((VECTOR(uint16_t, 16))(65535UL))))).sfe)), ((VECTOR(uint32_t, 2))(0x25780BD7L))))).xxyx))), ((VECTOR(uint32_t, 4))(2UL)), ((VECTOR(uint32_t, 4))(0xEFD19273L))))).y, l_572[1], ((VECTOR(uint32_t, 2))(0xF0C68FBFL)), GROUP_DIVERGE(1, 1), l_573, 4294967287UL, 4294967288UL)).s4 , (-1L)) , l_574), 4294967286UL, 0x69D72103L, 4UL)).even))), 0x9206C312L, ((VECTOR(uint32_t, 4))(0x4D0F8756L)), 0x25658A59L, 0x79BDD449L, ((VECTOR(uint32_t, 2))(1UL)), ((VECTOR(uint32_t, 2))(1UL)), 0UL)).se , l_575);
                        ++l_578.s4;
                    }
                    if (((VECTOR(int32_t, 8))(0x0C5ECC0BL, l_581[2][2], 1L, ((VECTOR(int32_t, 4))(l_582.ywzx)).y, 0x1B0A5244L, 0L, (-1L), 0x79CD0B7DL)).s3)
                    { /* block id: 213 */
                        int16_t l_583 = 1L;
                        uint8_t l_584 = 0x75L;
                        l_584 = (l_582.x |= l_583);
                    }
                    else
                    { /* block id: 216 */
                        int32_t l_585 = 3L;
                        VECTOR(int32_t, 16) l_586 = (VECTOR(int32_t, 16))(0x7337257FL, (VECTOR(int32_t, 4))(0x7337257FL, (VECTOR(int32_t, 2))(0x7337257FL, (-5L)), (-5L)), (-5L), 0x7337257FL, (-5L), (VECTOR(int32_t, 2))(0x7337257FL, (-5L)), (VECTOR(int32_t, 2))(0x7337257FL, (-5L)), 0x7337257FL, (-5L), 0x7337257FL, (-5L));
                        int32_t l_587 = (-1L);
                        uint32_t l_588 = 4UL;
                        int i;
                        l_587 = (l_585 , (((VECTOR(int32_t, 16))(l_586.s3b8db698deaf8487)).s9 , l_587));
                        --l_588;
                    }
                }
                else
                { /* block id: 220 */
                    int32_t l_591 = 0x2A4103BFL;
                    int32_t *l_608 = &l_591;
                    int32_t *l_609 = &l_591;
                    for (l_591 = 1; (l_591 >= (-8)); l_591 = safe_sub_func_int64_t_s_s(l_591, 7))
                    { /* block id: 223 */
                        int8_t l_594 = 0L;
                        int8_t l_595 = 3L;
                        uint32_t l_596 = 4294967293UL;
                        int32_t l_600 = 0x165A999CL;
                        int32_t *l_599[1][10][10] = {{{&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600},{&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600},{&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600},{&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600},{&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600},{&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600},{&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600},{&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600},{&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600},{&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600,&l_600}}};
                        int32_t *l_601 = (void*)0;
                        int i, j, k;
                        ++l_596;
                        l_601 = (l_599[0][8][2] = l_599[0][1][6]);
                    }
                    for (l_591 = 0; (l_591 == 21); l_591++)
                    { /* block id: 230 */
                        VECTOR(int32_t, 4) l_604 = (VECTOR(int32_t, 4))(0x55D78821L, (VECTOR(int32_t, 2))(0x55D78821L, 0x51CC2A50L), 0x51CC2A50L);
                        int8_t l_605 = 0L;
                        uint32_t l_606 = 0x20C2EBD7L;
                        uint64_t l_607[3][4] = {{0xBA4AC4F6832BF311L,0x5DE36200EC2829E7L,0xBA4AC4F6832BF311L,0xBA4AC4F6832BF311L},{0xBA4AC4F6832BF311L,0x5DE36200EC2829E7L,0xBA4AC4F6832BF311L,0xBA4AC4F6832BF311L},{0xBA4AC4F6832BF311L,0x5DE36200EC2829E7L,0xBA4AC4F6832BF311L,0xBA4AC4F6832BF311L}};
                        int i, j;
                        l_605 ^= ((VECTOR(int32_t, 16))(l_604.zyxzyzyywywzyxyw)).s9;
                        l_607[0][2] = l_606;
                    }
                    l_609 = l_608;
                }
                l_610 ^= (-2L);
                if ((l_611 , 0x288FD127L))
                { /* block id: 237 */
                    int64_t l_612 = 0x04D7575A78120618L;
                    int16_t l_613 = 0x6F6BL;
                    uint16_t l_614[4] = {0x1D01L,0x1D01L,0x1D01L,0x1D01L};
                    int i;
                    l_614[1] |= (l_612 , l_613);
                }
                else
                { /* block id: 239 */
                    int32_t l_616 = 7L;
                    int32_t *l_615 = &l_616;
                    int32_t *l_617 = &l_616;
                    int16_t l_618 = 8L;
                    int32_t l_619 = 0x4F40DFD0L;
                    uint8_t l_620 = 0UL;
                    int64_t l_640 = 0x2AAC405227435A8EL;
                    int32_t l_641 = 0x1AB72084L;
                    uint8_t l_642 = 0x53L;
                    int64_t l_643 = 0x6CECDC24560EFE04L;
                    l_617 = (l_615 = (void*)0);
                    l_620 ^= (FAKE_DIVERGE(p_758->local_1_offset, get_local_id(1), 10) , ((VECTOR(int32_t, 4))(l_618, l_619, (-3L), 0x1B6696A5L)).y);
                    for (l_616 = 0; (l_616 <= (-11)); l_616--)
                    { /* block id: 245 */
                        uint64_t l_623 = 0UL;
                        uint64_t l_624 = 0UL;
                        int16_t l_625 = (-1L);
                        uint8_t l_626 = 0xC6L;
                        int8_t l_627[2];
                        int8_t l_628 = 0x13L;
                        uint64_t l_629 = 0xA0966B6D2B5558B9L;
                        int64_t l_632 = 5L;
                        VECTOR(int32_t, 16) l_633 = (VECTOR(int32_t, 16))(0x6C147B9DL, (VECTOR(int32_t, 4))(0x6C147B9DL, (VECTOR(int32_t, 2))(0x6C147B9DL, 0L), 0L), 0L, 0x6C147B9DL, 0L, (VECTOR(int32_t, 2))(0x6C147B9DL, 0L), (VECTOR(int32_t, 2))(0x6C147B9DL, 0L), 0x6C147B9DL, 0L, 0x6C147B9DL, 0L);
                        int16_t l_634 = 0x4CDFL;
                        int16_t l_635 = 1L;
                        int16_t l_636 = 0x0CF1L;
                        uint64_t l_637 = 9UL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_627[i] = 0x68L;
                        l_619 &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_623, (l_624 = 0x11C9A84FL), l_625, 0x3BE9E153L, l_626, ((VECTOR(int32_t, 2))(0x45FBC892L, 0x1B878F18L)), 0x457BE274L)).s1453103330630301)).sf;
                        l_629--;
                        l_637--;
                    }
                    if ((l_640 , ((l_643 = (l_642 &= l_641)) , ((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(7L, 0L)), 0x74DDD4EDL)).y)))
                    { /* block id: 253 */
                        int32_t *l_644 = (void*)0;
                        uint32_t l_647 = 4294967291UL;
                        uint16_t l_648 = 65535UL;
                        int64_t l_649 = 0x35373DBA5F2A55FEL;
                        VECTOR(uint32_t, 8) l_650 = (VECTOR(uint32_t, 8))(0xDA418A18L, (VECTOR(uint32_t, 4))(0xDA418A18L, (VECTOR(uint32_t, 2))(0xDA418A18L, 0xE49E060BL), 0xE49E060BL), 0xE49E060BL, 0xDA418A18L, 0xE49E060BL);
                        int8_t l_651 = 0L;
                        VECTOR(int32_t, 2) l_652 = (VECTOR(int32_t, 2))(0x1B1F1EC1L, 0x6A0C9F14L);
                        uint16_t l_653 = 0xDE42L;
                        uint16_t l_654 = 65535UL;
                        int32_t l_655 = 0L;
                        int32_t *l_656 = &l_655;
                        int i;
                        l_617 = l_644;
                        l_615 = (void*)0;
                        l_619 = ((((VECTOR(uint32_t, 4))(0x363EBECDL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(abs_diff(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 4),((VECTOR(uint32_t, 16))(3UL, (++l_528), (l_647 , l_648), 0UL, ((l_649 , FAKE_DIVERGE(p_758->global_0_offset, get_global_id(0), 10)) , 0x6AC18676L), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(0x1A17918FL, 0x6F225DB9L, FAKE_DIVERGE(p_758->group_1_offset, get_group_id(1), 10), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(l_650.s4026032345650662)).lo)).lo)), 0UL, 0x3696D1E3L, 0xB7AE98D9L, (l_651 , (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(l_652.xxxyyyyx)))).hi)).w , 0x00004A05L)), l_653, 1UL, l_654, 4294967295UL, 1UL)).hi)), 4294967295UL, 0xE87D54E5L, 4294967287UL)).s448f, ((VECTOR(uint32_t, 4))(0xB834A144L))))).xzxyxzxw)).even, ((VECTOR(uint32_t, 4))(0x773C48BCL))))).odd)), 0xAFAEA1DCL)).z , 1UL) , l_655);
                        l_615 = l_656;
                    }
                    else
                    { /* block id: 259 */
                        int32_t *l_657 = (void*)0;
                        uint64_t l_658 = 0xA23556051A4ECF37L;
                        int32_t *l_659 = (void*)0;
                        VECTOR(int32_t, 16) l_660 = (VECTOR(int32_t, 16))(0x70DD6B15L, (VECTOR(int32_t, 4))(0x70DD6B15L, (VECTOR(int32_t, 2))(0x70DD6B15L, 0x634020F1L), 0x634020F1L), 0x634020F1L, 0x70DD6B15L, 0x634020F1L, (VECTOR(int32_t, 2))(0x70DD6B15L, 0x634020F1L), (VECTOR(int32_t, 2))(0x70DD6B15L, 0x634020F1L), 0x70DD6B15L, 0x634020F1L, 0x70DD6B15L, 0x634020F1L);
                        VECTOR(int32_t, 8) l_661 = (VECTOR(int32_t, 8))(0x5E3A6647L, (VECTOR(int32_t, 4))(0x5E3A6647L, (VECTOR(int32_t, 2))(0x5E3A6647L, (-1L)), (-1L)), (-1L), 0x5E3A6647L, (-1L));
                        VECTOR(int32_t, 16) l_662 = (VECTOR(int32_t, 16))(0x7B9D5866L, (VECTOR(int32_t, 4))(0x7B9D5866L, (VECTOR(int32_t, 2))(0x7B9D5866L, 1L), 1L), 1L, 0x7B9D5866L, 1L, (VECTOR(int32_t, 2))(0x7B9D5866L, 1L), (VECTOR(int32_t, 2))(0x7B9D5866L, 1L), 0x7B9D5866L, 1L, 0x7B9D5866L, 1L);
                        int i;
                        l_615 = l_657;
                        l_658 = 0x54C4730CL;
                        l_617 = l_659;
                        l_616 = ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 8))(l_660.s727a1969)).s6517345101267073, ((VECTOR(int32_t, 8))(l_661.s24430342)).s2676756523721734, ((VECTOR(int32_t, 4))(l_662.s908e)).wwxwxwxzxzzxyxwx))).sd;
                    }
                }
            }
            if (l_663)
            { /* block id: 267 */
                int32_t l_665 = (-1L);
                int32_t *l_664[4][4] = {{&l_665,&l_665,&l_665,&l_665},{&l_665,&l_665,&l_665,&l_665},{&l_665,&l_665,&l_665,&l_665},{&l_665,&l_665,&l_665,&l_665}};
                int32_t *l_666[5] = {&l_665,&l_665,&l_665,&l_665,&l_665};
                int32_t *l_667 = &l_665;
                int i, j;
                l_667 = (l_664[1][0] = (l_666[0] = l_664[1][0]));
            }
            else
            { /* block id: 271 */
                uint32_t l_668 = 1UL;
                VECTOR(int32_t, 4) l_669 = (VECTOR(int32_t, 4))(0x166834C3L, (VECTOR(int32_t, 2))(0x166834C3L, 1L), 1L);
                int32_t l_670 = 0x37795B08L;
                VECTOR(int32_t, 2) l_716 = (VECTOR(int32_t, 2))(0x6EBF95A1L, 1L);
                uint8_t l_717 = 0x36L;
                uint64_t l_718 = 18446744073709551612UL;
                VECTOR(int16_t, 2) l_719 = (VECTOR(int16_t, 2))(0L, 0x3F27L);
                uint32_t l_720 = 0x6D3A244AL;
                int16_t l_721 = (-1L);
                VECTOR(uint16_t, 4) l_722 = (VECTOR(uint16_t, 4))(0x4F93L, (VECTOR(uint16_t, 2))(0x4F93L, 0xD338L), 0xD338L);
                VECTOR(int32_t, 8) l_723 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x4C5664A8L), 0x4C5664A8L), 0x4C5664A8L, (-2L), 0x4C5664A8L);
                VECTOR(int32_t, 4) l_724 = (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x538D9B60L), 0x538D9B60L);
                uint16_t l_725 = 0xE893L;
                VECTOR(int32_t, 2) l_726 = (VECTOR(int32_t, 2))(1L, 0L);
                uint16_t l_727[9] = {0x1CA0L,0x1CA0L,0x1CA0L,0x1CA0L,0x1CA0L,0x1CA0L,0x1CA0L,0x1CA0L,0x1CA0L};
                int64_t l_728 = 0x22061A089184CE0DL;
                int i;
                if ((l_668 , (l_670 &= (l_525 |= (l_669.y = ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0L, 0x6F365C1CL)), ((VECTOR(int32_t, 16))(l_669.zwywxzzxwzyyzzyw)).sb3))).odd)))))
                { /* block id: 275 */
                    uint64_t l_671 = 0UL;
                    int32_t l_674 = 5L;
                    ++l_671;
                    l_669.z |= l_674;
                }
                else
                { /* block id: 278 */
                    uint8_t l_675 = 0x0CL;
                    uint8_t l_676 = 8UL;
                    VECTOR(int32_t, 16) l_677 = (VECTOR(int32_t, 16))(0x75D920C5L, (VECTOR(int32_t, 4))(0x75D920C5L, (VECTOR(int32_t, 2))(0x75D920C5L, (-1L)), (-1L)), (-1L), 0x75D920C5L, (-1L), (VECTOR(int32_t, 2))(0x75D920C5L, (-1L)), (VECTOR(int32_t, 2))(0x75D920C5L, (-1L)), 0x75D920C5L, (-1L), 0x75D920C5L, (-1L));
                    VECTOR(uint16_t, 4) l_678 = (VECTOR(uint16_t, 4))(65530UL, (VECTOR(uint16_t, 2))(65530UL, 0x9C20L), 0x9C20L);
                    int64_t l_679 = 1L;
                    uint64_t l_680 = 0x3627A5D7919B631FL;
                    VECTOR(int32_t, 16) l_681 = (VECTOR(int32_t, 16))(0x4DF75768L, (VECTOR(int32_t, 4))(0x4DF75768L, (VECTOR(int32_t, 2))(0x4DF75768L, (-2L)), (-2L)), (-2L), 0x4DF75768L, (-2L), (VECTOR(int32_t, 2))(0x4DF75768L, (-2L)), (VECTOR(int32_t, 2))(0x4DF75768L, (-2L)), 0x4DF75768L, (-2L), 0x4DF75768L, (-2L));
                    int32_t l_682 = 0L;
                    VECTOR(int32_t, 2) l_683 = (VECTOR(int32_t, 2))(0x552D9163L, (-1L));
                    VECTOR(int32_t, 2) l_684 = (VECTOR(int32_t, 2))((-4L), 1L);
                    uint64_t l_685 = 1UL;
                    VECTOR(int32_t, 16) l_686 = (VECTOR(int32_t, 16))(0x245BBA3BL, (VECTOR(int32_t, 4))(0x245BBA3BL, (VECTOR(int32_t, 2))(0x245BBA3BL, 0x01B57FCBL), 0x01B57FCBL), 0x01B57FCBL, 0x245BBA3BL, 0x01B57FCBL, (VECTOR(int32_t, 2))(0x245BBA3BL, 0x01B57FCBL), (VECTOR(int32_t, 2))(0x245BBA3BL, 0x01B57FCBL), 0x245BBA3BL, 0x01B57FCBL, 0x245BBA3BL, 0x01B57FCBL);
                    VECTOR(int32_t, 16) l_687 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x5D7E90C2L), 0x5D7E90C2L), 0x5D7E90C2L, 8L, 0x5D7E90C2L, (VECTOR(int32_t, 2))(8L, 0x5D7E90C2L), (VECTOR(int32_t, 2))(8L, 0x5D7E90C2L), 8L, 0x5D7E90C2L, 8L, 0x5D7E90C2L);
                    int32_t l_688 = 0x36AF7B2CL;
                    VECTOR(int32_t, 16) l_689 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 9L), 9L), 9L, 1L, 9L, (VECTOR(int32_t, 2))(1L, 9L), (VECTOR(int32_t, 2))(1L, 9L), 1L, 9L, 1L, 9L);
                    VECTOR(int32_t, 2) l_690 = (VECTOR(int32_t, 2))(0x14BC287BL, 0x692F5B59L);
                    uint32_t l_691 = 4294967294UL;
                    int32_t l_692 = 0x664417ACL;
                    uint32_t l_693 = 1UL;
                    uint32_t l_694 = 0xA00BDF4FL;
                    int16_t l_695 = (-1L);
                    uint16_t l_696 = 0xA152L;
                    uint32_t l_697 = 4UL;
                    int32_t l_698[9][9] = {{0x0B1582DBL,0x38CF1D4EL,1L,1L,0x38CF1D4EL,0x0B1582DBL,0x60ADD76FL,1L,0x37BFD36FL},{0x0B1582DBL,0x38CF1D4EL,1L,1L,0x38CF1D4EL,0x0B1582DBL,0x60ADD76FL,1L,0x37BFD36FL},{0x0B1582DBL,0x38CF1D4EL,1L,1L,0x38CF1D4EL,0x0B1582DBL,0x60ADD76FL,1L,0x37BFD36FL},{0x0B1582DBL,0x38CF1D4EL,1L,1L,0x38CF1D4EL,0x0B1582DBL,0x60ADD76FL,1L,0x37BFD36FL},{0x0B1582DBL,0x38CF1D4EL,1L,1L,0x38CF1D4EL,0x0B1582DBL,0x60ADD76FL,1L,0x37BFD36FL},{0x0B1582DBL,0x38CF1D4EL,1L,1L,0x38CF1D4EL,0x0B1582DBL,0x60ADD76FL,1L,0x37BFD36FL},{0x0B1582DBL,0x38CF1D4EL,1L,1L,0x38CF1D4EL,0x0B1582DBL,0x60ADD76FL,1L,0x37BFD36FL},{0x0B1582DBL,0x38CF1D4EL,1L,1L,0x38CF1D4EL,0x0B1582DBL,0x60ADD76FL,1L,0x37BFD36FL},{0x0B1582DBL,0x38CF1D4EL,1L,1L,0x38CF1D4EL,0x0B1582DBL,0x60ADD76FL,1L,0x37BFD36FL}};
                    uint32_t l_699 = 0UL;
                    uint16_t l_700[10][3] = {{0x3A01L,0x1171L,0x3A01L},{0x3A01L,0x1171L,0x3A01L},{0x3A01L,0x1171L,0x3A01L},{0x3A01L,0x1171L,0x3A01L},{0x3A01L,0x1171L,0x3A01L},{0x3A01L,0x1171L,0x3A01L},{0x3A01L,0x1171L,0x3A01L},{0x3A01L,0x1171L,0x3A01L},{0x3A01L,0x1171L,0x3A01L},{0x3A01L,0x1171L,0x3A01L}};
                    int32_t l_701[5] = {0x37D87543L,0x37D87543L,0x37D87543L,0x37D87543L,0x37D87543L};
                    int16_t l_702[6][5] = {{0x6232L,0x0C2FL,0x71A2L,0x1FE4L,0x0D44L},{0x6232L,0x0C2FL,0x71A2L,0x1FE4L,0x0D44L},{0x6232L,0x0C2FL,0x71A2L,0x1FE4L,0x0D44L},{0x6232L,0x0C2FL,0x71A2L,0x1FE4L,0x0D44L},{0x6232L,0x0C2FL,0x71A2L,0x1FE4L,0x0D44L},{0x6232L,0x0C2FL,0x71A2L,0x1FE4L,0x0D44L}};
                    int i, j;
                    l_669.z = ((l_676 = l_675) , 0x196FBD84L);
                    l_701[2] = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))((l_669.z = 0L), 0x482D822AL, 0L, 0x7E4FF816L)), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x0B8D3F87L, 0x7CA30983L, ((VECTOR(int32_t, 2))(l_677.sa5)), (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_678.wxxwyxyxyywzwyyx)))).s33)).odd , (l_698[5][5] = ((l_679 , l_680) , (l_697 = (l_696 = ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(l_681.sc2c739ff345c4cf0)).s90, ((VECTOR(int32_t, 4))((l_525 = l_682), ((VECTOR(int32_t, 2))(l_683.yy)), 0x67A01526L)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(l_684.yxyxyyxyyxxxxxxy)).sf13e, (int32_t)l_685, (int32_t)(l_525 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_686.s25)), 0x61D3E159L, (-1L))).w)))), (-10L), ((VECTOR(int32_t, 4))(l_687.seafd)), l_688, (-8L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_689.s38)))), ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))((-5L), 0x71B36E0EL)), ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(l_690.yxxxyyxx)).s71, ((VECTOR(int32_t, 8))(((l_669.x &= l_691) , 0x34D60BCFL), l_692, ((VECTOR(int32_t, 2))(0x2D15F42AL)), ((VECTOR(int32_t, 4))((-1L))))).s67))).yyxyxyyyxxyxxyyx, ((VECTOR(int32_t, 16))(0x50A40560L))))).s6b))), 0x7F7A5DFAL)).sfac8)).odd, (int32_t)l_693, (int32_t)l_694))), l_695, 0x0BC33A65L, ((VECTOR(int32_t, 2))(0L)), (-4L), 0x5C65C408L)).s74))).odd))))), 0x1C32C5BCL, 0x08D0AF12L, 0x7E40CBB2L)).s4332506316416011)).s3fdd, ((VECTOR(int32_t, 4))(0x59CB8154L))))), 1L, l_699, l_700[8][1], 0x4C0F29A1L, ((VECTOR(int32_t, 2))(0x53B1AC6EL)), (-1L), 0x4EF55EE4L)).s7;
                    if (l_702[0][3])
                    { /* block id: 289 */
                        int16_t l_703 = 0x4C20L;
                        uint32_t l_704 = 0UL;
                        int16_t l_705 = 9L;
                        uint32_t l_706 = 0xBACAA0B2L;
                        l_683.y = (-2L);
                        l_677.s6 |= (l_703 , (l_669.w = (l_689.s0 |= (l_704 = 0x4C7A95C1L))));
                        ++l_706;
                    }
                    else
                    { /* block id: 296 */
                        uint32_t l_709 = 0x407106CDL;
                        l_690.x = l_709;
                    }
                    for (l_686.s5 = 17; (l_686.s5 >= (-22)); l_686.s5--)
                    { /* block id: 301 */
                        VECTOR(int32_t, 2) l_712 = (VECTOR(int32_t, 2))(5L, 0x7E1D3945L);
                        VECTOR(int8_t, 4) l_713 = (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, 0x25L), 0x25L);
                        int32_t l_714[6][5] = {{(-1L),(-1L),1L,7L,(-10L)},{(-1L),(-1L),1L,7L,(-10L)},{(-1L),(-1L),1L,7L,(-10L)},{(-1L),(-1L),1L,7L,(-10L)},{(-1L),(-1L),1L,7L,(-10L)},{(-1L),(-1L),1L,7L,(-10L)}};
                        VECTOR(int8_t, 4) l_715 = (VECTOR(int8_t, 4))(0x0EL, (VECTOR(int8_t, 2))(0x0EL, 0x4AL), 0x4AL);
                        int i, j;
                        l_669.w = ((VECTOR(int32_t, 2))(l_712.yx)).even;
                        l_687.se = l_713.y;
                        l_712.y ^= l_714[4][4];
                        l_715.x &= 0x3AF2A0A1L;
                    }
                }
                l_728 &= ((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(l_716.yxyxyyyy)), ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(0x548DE31AL, ((VECTOR(int32_t, 4))(l_717, l_718, 6L, 0x3F90BF6DL)).w, (-2L), 0x7E19F098L)), ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))((l_720 = ((VECTOR(int16_t, 4))(0x7DD7L, ((VECTOR(int16_t, 2))(l_719.xx)), 1L)).x), l_721, (-2L), 1L)).zyxyyzxw, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(l_722.xxyzyxzw)).odd)).xyyyzzwy))).hi))).zyyzzzxy, ((VECTOR(int32_t, 16))(0x2AD6DD0FL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))((-3L), (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x0545F89AL, 0x0508E381L)))).lo , (-1L)), (-4L), (-1L))))), 8L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0x3F5BFA82L, 0x6D9D51CCL)), ((VECTOR(int32_t, 2))(l_723.s32)), ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_724.zwzyzzywzyyzyyzx)))).s19, ((VECTOR(int32_t, 8))((l_525 = l_725), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0L, 0x25FB4A26L)))).lo, 0x23DC72D0L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_726.xy)), 0L, (-1L))).lo, ((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 16))((l_727[7] , 7L), 0x68D96940L, ((VECTOR(int32_t, 4))(0x1E7843DDL)), (-10L), 0L, ((VECTOR(int32_t, 2))((-4L))), 0x6FC41E34L, 0x4E3E1EF9L, 0x4357B5BDL, 0x073FB0FDL, (-7L), 0x2C540303L)), ((VECTOR(int32_t, 16))((-2L)))))).s1c))), (-1L), 0x427B2F9AL)), 0L)).s13, ((VECTOR(int32_t, 2))(0x666DA250L)))))))))).xxxxxyxy, ((VECTOR(int32_t, 8))(0x079FC469L)), ((VECTOR(int32_t, 8))(0x602EC428L))))).s2535367502136276, ((VECTOR(int32_t, 16))((-1L)))))).s34)))), (-2L), 0L, ((VECTOR(int32_t, 2))(0x5BC8B8F2L)), 0x632500ABL, ((VECTOR(int32_t, 2))(1L)), 0x743067EAL)).hi))).s7;
            }
            l_731 = (l_730 = l_729);
            if (l_732[0])
            { /* block id: 314 */
                uint8_t l_733 = 0xD0L;
                --l_733;
            }
            else
            { /* block id: 316 */
                uint32_t l_736 = 0x1C645E68L;
                uint8_t l_737 = 9UL;
                l_525 = l_736;
                l_525 = l_737;
            }
            unsigned int result = 0;
            result += l_525;
            result += l_663;
            result += l_729;
            result += l_730;
            result += l_731;
            int l_732_i0;
            for (l_732_i0 = 0; l_732_i0 < 3; l_732_i0++) {
                result += l_732[l_732_i0];
            }
            atomic_add(&p_758->g_special_values[91 * get_linear_group_id() + 3], result);
        }
        else
        { /* block id: 320 */
            (1 + 1);
        }
    }
    (*l_376) = (void*)0;
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_758->g_159
 * writes:
 */
int32_t  func_55(int16_t * p_56, struct S1 * p_758)
{ /* block id: 124 */
    int32_t *l_373 = (void*)0;
    l_373 = &p_758->g_159;
    return (*l_373);
}


/* ------------------------------------------ */
/* 
 * reads : p_758->g_321 p_758->g_322
 * writes:
 */
int16_t * func_57(uint64_t * p_58, int32_t  p_59, int32_t  p_60, struct S1 * p_758)
{ /* block id: 120 */
    int32_t *l_355 = &p_758->g_159;
    int32_t *l_356 = &p_758->g_159;
    int32_t l_357 = 0x4633D413L;
    int32_t *l_358 = (void*)0;
    int32_t *l_359 = &l_357;
    int32_t l_360 = 0x7F3B15B7L;
    int32_t *l_361 = (void*)0;
    int32_t *l_362 = (void*)0;
    int32_t *l_363 = &l_357;
    int32_t *l_364 = (void*)0;
    int32_t *l_365 = (void*)0;
    int32_t *l_366 = (void*)0;
    int32_t *l_367[10][8][3] = {{{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360}},{{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360}},{{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360}},{{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360}},{{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360}},{{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360}},{{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360}},{{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360}},{{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360}},{{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360},{(void*)0,(void*)0,&l_360}}};
    int32_t l_368 = 3L;
    VECTOR(int8_t, 8) l_369 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
    uint16_t l_370 = 1UL;
    int i, j, k;
    --l_370;
    return (*p_758->g_321);
}


/* ------------------------------------------ */
/* 
 * reads : p_758->g_301 p_758->g_302 p_758->g_53 p_758->g_152 p_758->g_100 p_758->g_49 p_758->g_321 p_758->g_273 p_758->g_6 p_758->g_17 p_758->g_36 p_758->g_126 p_758->g_245 p_758->g_159
 * writes: p_758->g_49 p_758->g_159 p_758->g_247 p_758->g_224 p_758->g_339 p_758->g_126
 */
int64_t  func_64(uint64_t * p_65, uint64_t  p_66, uint8_t  p_67, int16_t  p_68, uint64_t * p_69, struct S1 * p_758)
{ /* block id: 96 */
    VECTOR(int64_t, 2) l_300 = (VECTOR(int64_t, 2))(0L, 0L);
    VECTOR(int32_t, 4) l_303 = (VECTOR(int32_t, 4))(0x38F4CC29L, (VECTOR(int32_t, 2))(0x38F4CC29L, 0x7D51CBB7L), 0x7D51CBB7L);
    int16_t *l_305 = (void*)0;
    int16_t **l_304 = &l_305;
    int16_t ***l_306 = &l_304;
    int16_t **l_307 = &l_305;
    int16_t **l_308 = &l_305;
    int32_t *l_323 = (void*)0;
    int32_t *l_324 = &p_758->g_159;
    VECTOR(uint16_t, 4) l_329 = (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0x375BL), 0x375BL);
    int64_t *l_334 = (void*)0;
    int64_t *l_335 = (void*)0;
    int64_t *l_336 = (void*)0;
    int8_t *l_337[7][10] = {{&p_758->g_232,(void*)0,&p_758->g_232,&p_758->g_232,&p_758->g_232,(void*)0,&p_758->g_232,(void*)0,&p_758->g_232,&p_758->g_232},{&p_758->g_232,(void*)0,&p_758->g_232,&p_758->g_232,&p_758->g_232,(void*)0,&p_758->g_232,(void*)0,&p_758->g_232,&p_758->g_232},{&p_758->g_232,(void*)0,&p_758->g_232,&p_758->g_232,&p_758->g_232,(void*)0,&p_758->g_232,(void*)0,&p_758->g_232,&p_758->g_232},{&p_758->g_232,(void*)0,&p_758->g_232,&p_758->g_232,&p_758->g_232,(void*)0,&p_758->g_232,(void*)0,&p_758->g_232,&p_758->g_232},{&p_758->g_232,(void*)0,&p_758->g_232,&p_758->g_232,&p_758->g_232,(void*)0,&p_758->g_232,(void*)0,&p_758->g_232,&p_758->g_232},{&p_758->g_232,(void*)0,&p_758->g_232,&p_758->g_232,&p_758->g_232,(void*)0,&p_758->g_232,(void*)0,&p_758->g_232,&p_758->g_232},{&p_758->g_232,(void*)0,&p_758->g_232,&p_758->g_232,&p_758->g_232,(void*)0,&p_758->g_232,(void*)0,&p_758->g_232,&p_758->g_232}};
    uint64_t **l_345 = &p_758->g_297;
    VECTOR(int16_t, 8) l_350 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L));
    int i, j;
    (*l_324) = (safe_mod_func_int32_t_s_s(l_300.y, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 2))(p_758->g_301.s88))))).xxyxxyyy)).s50, ((VECTOR(int32_t, 4))(p_758->g_302.yyxx)).even, ((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_303.xx)))).yyxxxxyy, ((VECTOR(int32_t, 16))(((l_308 = (l_307 = ((*l_306) = l_304))) != ((((safe_lshift_func_int16_t_s_u((&p_758->g_159 != ((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((((*p_65) |= (safe_sub_func_uint16_t_u_u((p_758->g_53 , l_303.x), ((!p_67) && ((l_303.w & (-1L)) >= (((safe_mod_func_int64_t_s_s(p_758->g_152.y, p_758->g_100)) & 0x1393L) < 0x6FL)))))) || p_66), p_67)), 1)), p_68)) , &p_758->g_6[3])), 4)) , l_303.w) , 0x4645E51C51A60707L) , p_758->g_321)), 0x1C20E4FEL, 4L, 5L, ((VECTOR(int32_t, 4))(0x5FD0021AL)), ((VECTOR(int32_t, 8))(0x5D1A0559L)))).lo))).s11))).yxxy)).w));
    if ((((*p_65) = FAKE_DIVERGE(p_758->group_1_offset, get_group_id(1), 10)) & (((safe_add_func_uint32_t_u_u(p_758->g_273.y, p_758->g_6[0])) >= ((safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(l_329.xxww)).z, (p_68 = 0x5FECL))) < ((-1L) & ((safe_div_func_uint32_t_u_u(8UL, p_758->g_17.y)) && (p_758->g_224.s3 = ((safe_mul_func_uint16_t_u_u((p_758->g_247 = (((GROUP_DIVERGE(1, 1) & (&p_758->g_322 == (void*)0)) < (((*l_324) = p_758->g_36.y) != 0xC4BEDB2D02CD6996L)) , p_758->g_17.x)), p_67)) | p_66)))))) < 248UL)))
    { /* block id: 107 */
        int32_t **l_338[1][10][9] = {{{&l_324,&l_323,&l_323,&l_323,&l_324,&l_324,&l_323,&l_323,&l_323},{&l_324,&l_323,&l_323,&l_323,&l_324,&l_324,&l_323,&l_323,&l_323},{&l_324,&l_323,&l_323,&l_323,&l_324,&l_324,&l_323,&l_323,&l_323},{&l_324,&l_323,&l_323,&l_323,&l_324,&l_324,&l_323,&l_323,&l_323},{&l_324,&l_323,&l_323,&l_323,&l_324,&l_324,&l_323,&l_323,&l_323},{&l_324,&l_323,&l_323,&l_323,&l_324,&l_324,&l_323,&l_323,&l_323},{&l_324,&l_323,&l_323,&l_323,&l_324,&l_324,&l_323,&l_323,&l_323},{&l_324,&l_323,&l_323,&l_323,&l_324,&l_324,&l_323,&l_323,&l_323},{&l_324,&l_323,&l_323,&l_323,&l_324,&l_324,&l_323,&l_323,&l_323},{&l_324,&l_323,&l_323,&l_323,&l_324,&l_324,&l_323,&l_323,&l_323}}};
        int i, j, k;
        l_324 = (p_758->g_339[3] = &p_758->g_10);
    }
    else
    { /* block id: 110 */
        int64_t *l_342 = (void*)0;
        int64_t *l_343[4][9][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
        int32_t l_344 = 6L;
        uint64_t ***l_346[6] = {&l_345,(void*)0,&l_345,&l_345,(void*)0,&l_345};
        int32_t l_349 = 0x53411EFAL;
        uint16_t *l_353 = &p_758->g_247;
        int32_t l_354 = 0x38866C02L;
        int i, j, k;
        l_349 = (safe_lshift_func_uint8_t_u_s(p_66, (p_758->g_224.sc = ((l_344 = 1L) | ((&p_758->g_126 != ((((l_345 = l_345) == &p_65) > (((((safe_mul_func_int16_t_s_s(l_349, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_350.s6122527077513057)).hi)).s3)) && (safe_rshift_func_uint16_t_u_s(((*l_353) = (l_349 & (p_758->g_126 &= (-1L)))), ((l_354 = ((((0xC07CL != (-1L)) && l_349) , p_68) ^ l_349)) && p_758->g_245.y)))) & 0x00L) != (*l_324)) && p_67)) , (void*)0)) | 0x3ABBL)))));
    }
    return p_67;
}


/* ------------------------------------------ */
/* 
 * reads : p_758->g_49 p_758->g_6 p_758->g_73 p_758->g_159 p_758->g_224 p_758->g_36 p_758->g_53 p_758->g_245 p_758->g_126 p_758->g_225 p_758->g_17 p_758->g_13 p_758->g_comm_values p_758->g_273 p_758->g_274 p_758->g_276 p_758->g_10 p_758->g_277 p_758->g_293
 * writes: p_758->g_49 p_758->g_159 p_758->g_53 p_758->g_225 p_758->g_36 p_758->g_232 p_758->g_245 p_758->g_247 p_758->g_126 p_758->g_13 p_758->g_274 p_758->g_293
 */
uint64_t * func_74(int8_t  p_75, uint64_t  p_76, struct S1 * p_758)
{ /* block id: 44 */
    int32_t *l_164 = (void*)0;
    int32_t **l_165 = &l_164;
    uint32_t *l_242[5][2][3] = {{{&p_758->g_100,&p_758->g_100,&p_758->g_100},{&p_758->g_100,&p_758->g_100,&p_758->g_100}},{{&p_758->g_100,&p_758->g_100,&p_758->g_100},{&p_758->g_100,&p_758->g_100,&p_758->g_100}},{{&p_758->g_100,&p_758->g_100,&p_758->g_100},{&p_758->g_100,&p_758->g_100,&p_758->g_100}},{{&p_758->g_100,&p_758->g_100,&p_758->g_100},{&p_758->g_100,&p_758->g_100,&p_758->g_100}},{{&p_758->g_100,&p_758->g_100,&p_758->g_100},{&p_758->g_100,&p_758->g_100,&p_758->g_100}}};
    int32_t l_289 = 0x7555241AL;
    int32_t l_290 = 0x0147CAB0L;
    VECTOR(int32_t, 16) l_291 = (VECTOR(int32_t, 16))(0x230B7022L, (VECTOR(int32_t, 4))(0x230B7022L, (VECTOR(int32_t, 2))(0x230B7022L, (-1L)), (-1L)), (-1L), 0x230B7022L, (-1L), (VECTOR(int32_t, 2))(0x230B7022L, (-1L)), (VECTOR(int32_t, 2))(0x230B7022L, (-1L)), 0x230B7022L, (-1L), 0x230B7022L, (-1L));
    int i, j, k;
    (*l_165) = l_164;
    for (p_758->g_49 = 27; (p_758->g_49 >= 10); p_758->g_49--)
    { /* block id: 48 */
        uint8_t l_204 = 0x40L;
        int32_t *l_218 = &p_758->g_159;
        uint16_t *l_259 = (void*)0;
        int32_t *l_288[1][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int64_t l_292[7][5] = {{(-1L),(-4L),0x23A13F9ECF20EEF6L,(-1L),(-3L)},{(-1L),(-4L),0x23A13F9ECF20EEF6L,(-1L),(-3L)},{(-1L),(-4L),0x23A13F9ECF20EEF6L,(-1L),(-3L)},{(-1L),(-4L),0x23A13F9ECF20EEF6L,(-1L),(-3L)},{(-1L),(-4L),0x23A13F9ECF20EEF6L,(-1L),(-3L)},{(-1L),(-4L),0x23A13F9ECF20EEF6L,(-1L),(-3L)},{(-1L),(-4L),0x23A13F9ECF20EEF6L,(-1L),(-3L)}};
        int i, j;
        for (p_76 = 0; (p_76 != 21); p_76++)
        { /* block id: 51 */
            VECTOR(uint8_t, 16) l_196 = (VECTOR(uint8_t, 16))(0x31L, (VECTOR(uint8_t, 4))(0x31L, (VECTOR(uint8_t, 2))(0x31L, 9UL), 9UL), 9UL, 0x31L, 9UL, (VECTOR(uint8_t, 2))(0x31L, 9UL), (VECTOR(uint8_t, 2))(0x31L, 9UL), 0x31L, 9UL, 0x31L, 9UL);
            int32_t l_221 = 0L;
            int32_t l_222[9][7][4] = {{{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L}},{{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L}},{{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L}},{{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L}},{{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L}},{{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L}},{{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L}},{{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L}},{{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L},{0L,0x0B06B825L,0L,0L}}};
            VECTOR(int32_t, 4) l_237 = (VECTOR(int32_t, 4))(0x1752853BL, (VECTOR(int32_t, 2))(0x1752853BL, 1L), 1L);
            int i, j, k;
            for (p_758->g_159 = 13; (p_758->g_159 >= (-23)); --p_758->g_159)
            { /* block id: 54 */
                union U0 l_188 = {0UL};
                int32_t l_213 = 0x02C3EB71L;
                uint32_t l_215[1][3];
                VECTOR(int16_t, 2) l_226 = (VECTOR(int16_t, 2))((-9L), 1L);
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_215[i][j] = 4294967295UL;
                }
                for (p_758->g_53 = 0; (p_758->g_53 >= (-13)); --p_758->g_53)
                { /* block id: 57 */
                    VECTOR(int16_t, 2) l_176 = (VECTOR(int16_t, 2))(0x7C9AL, 9L);
                    VECTOR(uint64_t, 16) l_195 = (VECTOR(uint64_t, 16))(0x22CA6194124E36C9L, (VECTOR(uint64_t, 4))(0x22CA6194124E36C9L, (VECTOR(uint64_t, 2))(0x22CA6194124E36C9L, 0UL), 0UL), 0UL, 0x22CA6194124E36C9L, 0UL, (VECTOR(uint64_t, 2))(0x22CA6194124E36C9L, 0UL), (VECTOR(uint64_t, 2))(0x22CA6194124E36C9L, 0UL), 0x22CA6194124E36C9L, 0UL, 0x22CA6194124E36C9L, 0UL);
                    int32_t *l_219[6][3] = {{&p_758->g_10,(void*)0,(void*)0},{&p_758->g_10,(void*)0,(void*)0},{&p_758->g_10,(void*)0,(void*)0},{&p_758->g_10,(void*)0,(void*)0},{&p_758->g_10,(void*)0,(void*)0},{&p_758->g_10,(void*)0,(void*)0}};
                    int i, j;
                    if ((0UL | (safe_lshift_func_int16_t_s_s((GROUP_DIVERGE(1, 1) == ((VECTOR(int16_t, 2))(l_176.xy)).even), 2))))
                    { /* block id: 58 */
                        atomic_add(&p_758->g_atomic_reduction[get_linear_group_id()], (safe_unary_minus_func_int32_t_s(p_758->g_6[0])) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_758->v_collective += p_758->g_atomic_reduction[get_linear_group_id()];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (p_758->g_6[0])
                            break;
                        if (l_176.y)
                            continue;
                        (*l_165) = &p_758->g_6[1];
                    }
                    else
                    { /* block id: 63 */
                        uint32_t l_199 = 0x73E2F334L;
                        int32_t *l_205 = (void*)0;
                        int32_t *l_206 = (void*)0;
                        int32_t *l_207[1][3];
                        uint8_t *l_210 = (void*)0;
                        uint8_t *l_211 = (void*)0;
                        uint8_t *l_212[1];
                        int64_t *l_220 = &p_758->g_126;
                        int8_t *l_223 = (void*)0;
                        int16_t *l_227 = (void*)0;
                        int16_t *l_228 = (void*)0;
                        int16_t *l_229 = (void*)0;
                        int16_t *l_230 = (void*)0;
                        int16_t *l_231[6][5][6] = {{{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0}},{{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0}},{{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0}},{{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0}},{{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0}},{{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0},{&p_758->g_53,(void*)0,&p_758->g_53,(void*)0,&p_758->g_53,(void*)0}}};
                        uint16_t *l_246 = (void*)0;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_207[i][j] = (void*)0;
                        }
                        for (i = 0; i < 1; i++)
                            l_212[i] = (void*)0;
                        p_758->g_225 = ((safe_rshift_func_uint16_t_u_u((0xB0B6E22C6D3FC99DL > (((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 8))((safe_add_func_uint64_t_u_u(((safe_sub_func_int8_t_s_s((p_75 = (safe_mod_func_int32_t_s_s(((l_188 , (safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(l_195.s62)).lo, ((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_196.s2f)), (l_222[7][3][0] = (((safe_lshift_func_uint8_t_u_u((((((l_199 ^ ((safe_mul_func_int16_t_s_s((safe_sub_func_int32_t_s_s((p_758->g_36.x = (p_758->g_36.y ^ l_204)), (((safe_sub_func_int32_t_s_s(((l_221 = ((*l_220) = ((2L != (l_215[0][2]++)) || (((((*l_165) = (p_75 , l_218)) != l_219[0][2]) , 0x69L) && p_758->g_23.x)))) & p_758->g_134), 0L)) >= 0x7C17B509B9A7E04EL) , (-1L)))), 7UL)) < l_196.sd)) != p_758->g_6[1]) , p_758->g_126) ^ GROUP_DIVERGE(0, 1)) & GROUP_DIVERGE(2, 1)), p_75)) || p_758->g_100) || p_758->g_13.z)), ((VECTOR(uint8_t, 4))(0x4AL)), 254UL, 4UL, 0x3AL, ((VECTOR(uint8_t, 2))(0xD9L)), 0x53L, p_758->g_23.y, 0x04L, 0x48L)).s7 | p_758->g_152.x) && p_75))), GROUP_DIVERGE(1, 1))), 0x1E70E9D857B65FDDL))) >= 0x58L), 4294967295UL))), p_758->g_13.x)) & 0x20422CCCL), p_758->g_73.s5)), GROUP_DIVERGE(0, 1), 0x40L, 0UL, 0xBEL, l_222[8][3][2], 253UL, 0xFAL)).s6, 0x03L)) , p_758->g_73.s3) & 3UL)), 15)) | (*l_218));
                        p_758->g_36.y &= (((void*)0 == l_205) || ((p_758->g_224.se == ((VECTOR(int16_t, 2))(5L, 0x4C8BL)).even) || p_75));
                        (*l_165) = (((p_758->g_232 = ((VECTOR(int16_t, 4))(l_226.xxyx)).x) & ((VECTOR(uint16_t, 2))(0xA0ACL, 0x12F5L)).even) , &p_758->g_6[0]);
                        p_758->g_247 = (((~((safe_sub_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(((p_758->g_36.x |= ((VECTOR(int32_t, 2))(l_237.zz)).hi) || p_758->g_6[1]), 0x3E11B61AL)), 0UL)) == p_75)) | ((safe_div_func_uint8_t_u_u(FAKE_DIVERGE(p_758->global_1_offset, get_global_id(1), 10), p_758->g_53)) || (p_758->g_245.x = (safe_lshift_func_uint8_t_u_s((l_242[0][0][2] == (void*)0), (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x29D7L, 1UL)).xxxy)))), ((VECTOR(uint16_t, 4))(p_758->g_245.yxyx))))).lo))))).even, (0xC627L > p_75)))))))) , p_76);
                    }
                }
            }
            for (p_758->g_126 = (-7); (p_758->g_126 > (-14)); p_758->g_126 = safe_sub_func_int8_t_s_s(p_758->g_126, 1))
            { /* block id: 83 */
                uint64_t **l_254 = (void*)0;
                uint64_t *l_256 = (void*)0;
                uint64_t **l_255 = &l_256;
                int32_t l_260 = 1L;
                VECTOR(uint16_t, 8) l_275 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 3UL), 3UL), 3UL, 1UL, 3UL);
                int64_t *l_279 = (void*)0;
                int64_t *l_280 = (void*)0;
                int64_t *l_281 = (void*)0;
                int64_t *l_282 = (void*)0;
                int64_t *l_283 = (void*)0;
                int64_t *l_284 = (void*)0;
                int64_t *l_285[7][1][8] = {{{&p_758->g_126,&p_758->g_126,(void*)0,&p_758->g_126,(void*)0,(void*)0,(void*)0,&p_758->g_126}},{{&p_758->g_126,&p_758->g_126,(void*)0,&p_758->g_126,(void*)0,(void*)0,(void*)0,&p_758->g_126}},{{&p_758->g_126,&p_758->g_126,(void*)0,&p_758->g_126,(void*)0,(void*)0,(void*)0,&p_758->g_126}},{{&p_758->g_126,&p_758->g_126,(void*)0,&p_758->g_126,(void*)0,(void*)0,(void*)0,&p_758->g_126}},{{&p_758->g_126,&p_758->g_126,(void*)0,&p_758->g_126,(void*)0,(void*)0,(void*)0,&p_758->g_126}},{{&p_758->g_126,&p_758->g_126,(void*)0,&p_758->g_126,(void*)0,(void*)0,(void*)0,&p_758->g_126}},{{&p_758->g_126,&p_758->g_126,(void*)0,&p_758->g_126,(void*)0,(void*)0,(void*)0,&p_758->g_126}}};
                int16_t *l_286 = (void*)0;
                int16_t *l_287 = &p_758->g_53;
                int i, j, k;
                (*l_218) = (safe_div_func_uint64_t_u_u(((+(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 16))(6UL, 0xA5L, 0x8FL, ((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(251UL, ((VECTOR(uint8_t, 2))(rhadd(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 8))((safe_mod_func_uint32_t_u_u((0x1CAD6A60L > ((void*)0 == &p_76)), (((((*l_255) = &p_758->g_134) == &p_76) > (((safe_add_func_int32_t_s_s(((((void*)0 != l_259) <= l_237.x) & p_75), p_758->g_159)) == p_758->g_224.s7) == (*l_218))) & p_758->g_225))), ((VECTOR(uint8_t, 2))(0xA3L)), l_260, ((VECTOR(uint8_t, 2))(255UL)), 8UL, 1UL)).s21, ((VECTOR(uint8_t, 2))(255UL))))), 0UL, 0x81L, ((VECTOR(uint8_t, 4))(0x63L)))).s67, ((VECTOR(uint8_t, 2))(0x3CL))))), 248UL)))).zzwyxzyx, ((VECTOR(uint8_t, 8))(255UL))))), ((VECTOR(uint8_t, 2))(0x91L)), 1UL, 0x81L, 252UL)).s235a, ((VECTOR(uint8_t, 4))(0x23L)), ((VECTOR(uint8_t, 4))(0xE8L))))), ((VECTOR(uint8_t, 2))(1UL)), 255UL, 1UL, 1UL, 0x83L, p_758->g_17.x, l_196.se, p_76, p_758->g_13.x, 246UL, 3UL)).s562e, ((VECTOR(uint8_t, 4))(5UL)), ((VECTOR(uint8_t, 4))(6UL))))).y ^ 0x4DL)) > l_222[0][2][3]), l_260));
                (*l_218) = (~((((safe_mod_func_int64_t_s_s((+(((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),uint32_t,((VECTOR(uint32_t, 2))(4294967294UL, 0x671228F4L)).xxxy, (uint32_t)((safe_mod_func_int16_t_s_s((p_758->g_274.s4 = ((*l_287) = ((safe_mod_func_int64_t_s_s((p_758->g_13.w = ((p_758->g_13.w | (((safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_758->global_2_offset, get_global_id(2), 10), p_758->g_224.s3)) < (safe_lshift_func_uint8_t_u_s(FAKE_DIVERGE(p_758->group_1_offset, get_group_id(1), 10), (safe_rshift_func_uint16_t_u_s(p_758->g_comm_values[p_758->tid], (((((VECTOR(int8_t, 2))(0x3CL, (-9L))).hi , (((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 2))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 2),((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))((-2L), 1L, 0x291F54A6L, 9L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 8))(p_758->g_273.yyxyxxyy)), ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(0x459AL, (-9L), ((VECTOR(int16_t, 8))(p_758->g_274.s14500003)).s4, 1L, (-4L), ((((&l_256 == (void*)0) == 0x4CL) | ((((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_275.s07047245)))).s6 | ((void*)0 == p_758->g_276)) , &p_758->g_126) == (void*)0) & 250UL)) && 4294967287UL), 0x29F0L, 0x1654L)).s1061155624174555, ((VECTOR(uint16_t, 16))(65526UL))))).even, ((VECTOR(int32_t, 8))(0L))))).hi)).hi, ((VECTOR(int32_t, 2))((-1L)))))).xyxx)))).s35, ((VECTOR(int32_t, 2))(0x791718A4L))))), (-5L))).lo)), (-3L), 1L)), ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(0x367363E0L))))), ((VECTOR(uint32_t, 4))(0UL))))).hi, ((VECTOR(int64_t, 2))(0x443F57216A0719E0L)), ((VECTOR(int64_t, 2))(0x65D9F7D41789B288L))))).yxyx, ((VECTOR(int64_t, 4))(0x309E31F1BBC2B7E8L)), ((VECTOR(int64_t, 4))(0x6E8106C009CDC397L))))), ((VECTOR(int64_t, 4))(1L))))).z , p_76)) , FAKE_DIVERGE(p_758->group_0_offset, get_group_id(0), 10)) , (*l_218))))))) || p_758->g_73.s4)) , p_75)), 0xC272FBF6197B71F3L)) || 1UL))), p_76)) || 0x8B528FC71B94F097L), (uint32_t)p_758->g_10))), ((VECTOR(uint32_t, 2))(3UL)), 9UL, 0xADA30994L)), ((VECTOR(uint32_t, 8))(0x28E4C5F0L))))).hi, ((VECTOR(uint32_t, 4))(0x2562DD2EL))))).x ^ l_237.w)), p_76)) , (*p_758->g_276)) == (void*)0) > 0x29L));
            }
        }
        ++p_758->g_293;
    }
    return &p_758->g_49;
}


/* ------------------------------------------ */
/* 
 * reads : p_758->g_159 p_758->g_49
 * writes: p_758->g_159
 */
int8_t  func_82(int16_t * p_83, int16_t * p_84, struct S1 * p_758)
{ /* block id: 37 */
    VECTOR(int64_t, 8) l_163 = (VECTOR(int64_t, 8))(0x4D660517FABF1FC1L, (VECTOR(int64_t, 4))(0x4D660517FABF1FC1L, (VECTOR(int64_t, 2))(0x4D660517FABF1FC1L, 0L), 0L), 0L, 0x4D660517FABF1FC1L, 0L);
    int i;
    for (p_758->g_159 = 0; (p_758->g_159 <= (-28)); --p_758->g_159)
    { /* block id: 40 */
        return l_163.s6;
    }
    return p_758->g_49;
}


/* ------------------------------------------ */
/* 
 * reads : p_758->g_6 p_758->g_73 p_758->g_152 p_758->g_36 p_758->g_159
 * writes: p_758->g_100 p_758->g_152 p_758->g_36 p_758->g_159
 */
int16_t * func_85(uint8_t  p_86, uint8_t  p_87, uint64_t * p_88, uint64_t  p_89, struct S1 * p_758)
{ /* block id: 31 */
    uint16_t l_146[6] = {0xFF56L,0xFF56L,0xFF56L,0xFF56L,0xFF56L,0xFF56L};
    uint32_t *l_151 = (void*)0;
    uint32_t *l_153 = (void*)0;
    uint64_t *l_154[6] = {&p_758->g_49,(void*)0,&p_758->g_49,&p_758->g_49,(void*)0,&p_758->g_49};
    uint32_t l_155 = 5UL;
    int32_t *l_156 = (void*)0;
    int32_t *l_157 = (void*)0;
    int32_t *l_158[8][5][6] = {{{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]}},{{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]}},{{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]}},{{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]}},{{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]}},{{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]}},{{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]}},{{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]},{&p_758->g_159,&p_758->g_10,&p_758->g_10,&p_758->g_10,&p_758->g_6[6],&p_758->g_6[0]}}};
    int16_t *l_160 = (void*)0;
    int i, j, k;
    p_758->g_159 ^= ((p_758->g_6[0] , (safe_lshift_func_int8_t_s_s(l_146[2], p_758->g_73.s7))) , (p_758->g_36.x = ((l_146[2] & (safe_rshift_func_int16_t_s_s(((+(safe_mod_func_uint64_t_u_u(((p_758->g_152.x ^= (p_758->g_100 = FAKE_DIVERGE(p_758->local_1_offset, get_local_id(1), 10))) <= ((((void*)0 != l_154[4]) , l_155) , p_758->g_73.s7)), ((p_758->g_36.x , FAKE_DIVERGE(p_758->global_1_offset, get_global_id(1), 10)) && (-2L))))) , 1L), p_89))) < l_146[2])));
    return l_160;
}


/* ------------------------------------------ */
/* 
 * reads : p_758->g_49 p_758->g_53 p_758->g_6 p_758->g_126 p_758->g_134
 * writes: p_758->g_49 p_758->g_36 p_758->g_126 p_758->g_134
 */
uint64_t  func_94(uint32_t  p_95, uint8_t  p_96, int64_t  p_97, uint16_t  p_98, struct S1 * p_758)
{ /* block id: 16 */
    int32_t *l_101 = (void*)0;
    int32_t l_102 = (-10L);
    int32_t *l_103[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint32_t l_104 = 0x86218FE4L;
    int16_t *l_109 = (void*)0;
    int64_t l_137[4][8] = {{0L,0L,0x5B89021812832912L,6L,0x09ECF18C14CA5645L,6L,0x5B89021812832912L,0L},{0L,0L,0x5B89021812832912L,6L,0x09ECF18C14CA5645L,6L,0x5B89021812832912L,0L},{0L,0L,0x5B89021812832912L,6L,0x09ECF18C14CA5645L,6L,0x5B89021812832912L,0L},{0L,0L,0x5B89021812832912L,6L,0x09ECF18C14CA5645L,6L,0x5B89021812832912L,0L}};
    int32_t l_138 = 0x6876E851L;
    VECTOR(uint16_t, 8) l_139 = (VECTOR(uint16_t, 8))(0x881FL, (VECTOR(uint16_t, 4))(0x881FL, (VECTOR(uint16_t, 2))(0x881FL, 0xD568L), 0xD568L), 0xD568L, 0x881FL, 0xD568L);
    int i, j;
    --l_104;
    for (p_758->g_49 = 0; (p_758->g_49 != 55); ++p_758->g_49)
    { /* block id: 20 */
        int16_t *l_110 = (void*)0;
        int16_t **l_111 = (void*)0;
        int16_t **l_112 = (void*)0;
        int16_t *l_113 = &p_758->g_53;
        int32_t l_127 = 0x684E38CDL;
        int32_t l_128 = 0x470CACEDL;
        int32_t l_129 = 0x68D107E3L;
        int32_t l_130 = 1L;
        int32_t l_131 = (-1L);
        int32_t l_132 = (-2L);
        int32_t l_133 = (-8L);
        p_758->g_126 ^= (((((l_109 != (l_113 = (l_110 = l_110))) == 0x53F318A4EB99B808L) ^ (safe_sub_func_int32_t_s_s(p_758->g_53, (safe_mul_func_uint16_t_u_u(func_118(p_96, &l_109, p_758), 65535UL))))) | p_95) >= p_758->g_6[0]);
        ++p_758->g_134;
    }
    l_139.s2++;
    return p_95;
}


/* ------------------------------------------ */
/* 
 * reads : p_758->g_6
 * writes: p_758->g_36
 */
uint16_t  func_118(int64_t  p_119, int16_t ** p_120, struct S1 * p_758)
{ /* block id: 23 */
    int32_t *l_121 = (void*)0;
    int32_t *l_122 = (void*)0;
    int32_t *l_123 = (void*)0;
    int32_t *l_124 = (void*)0;
    int32_t *l_125[1];
    int i;
    for (i = 0; i < 1; i++)
        l_125[i] = (void*)0;
    p_758->g_36.x = p_758->g_6[7];
    return p_119;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[91];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 91; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[91];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 91; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[56];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 56; i++)
            l_comm_values[i] = 1;
    struct S1 c_759;
    struct S1* p_758 = &c_759;
    struct S1 c_760 = {
        0x58D32FFAL, // p_758->g_2
        (-4L), // p_758->g_3
        0L, // p_758->g_4
        6L, // p_758->g_5
        {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)}, // p_758->g_6
        1L, // p_758->g_9
        (-1L), // p_758->g_10
        (VECTOR(int64_t, 4))(0x54309642E40C18ABL, (VECTOR(int64_t, 2))(0x54309642E40C18ABL, 0x279A20B28787D636L), 0x279A20B28787D636L), // p_758->g_13
        (VECTOR(int64_t, 2))(0x4653FFD03B15A8DFL, (-1L)), // p_758->g_14
        (VECTOR(int64_t, 2))(0x1A0197CBB4028481L, 6L), // p_758->g_17
        (VECTOR(int64_t, 4))(0x36062CF9E8BFA085L, (VECTOR(int64_t, 2))(0x36062CF9E8BFA085L, (-9L)), (-9L)), // p_758->g_18
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 2L), 2L), 2L, 1L, 2L, (VECTOR(int64_t, 2))(1L, 2L), (VECTOR(int64_t, 2))(1L, 2L), 1L, 2L, 1L, 2L), // p_758->g_20
        (VECTOR(uint64_t, 2))(0x74357240E60136B8L, 18446744073709551615UL), // p_758->g_23
        (VECTOR(int32_t, 2))((-7L), (-6L)), // p_758->g_36
        18446744073709551615UL, // p_758->g_49
        (-1L), // p_758->g_53
        (VECTOR(int16_t, 8))(0x0FEBL, (VECTOR(int16_t, 4))(0x0FEBL, (VECTOR(int16_t, 2))(0x0FEBL, (-3L)), (-3L)), (-3L), 0x0FEBL, (-3L)), // p_758->g_73
        0x3CA6ABCEL, // p_758->g_100
        0x2AA0BFB30C423CDDL, // p_758->g_126
        3UL, // p_758->g_134
        (VECTOR(uint32_t, 2))(0UL, 1UL), // p_758->g_152
        0L, // p_758->g_159
        0L, // p_758->g_214
        (VECTOR(int8_t, 16))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 0x6AL), 0x6AL), 0x6AL, (-2L), 0x6AL, (VECTOR(int8_t, 2))((-2L), 0x6AL), (VECTOR(int8_t, 2))((-2L), 0x6AL), (-2L), 0x6AL, (-2L), 0x6AL), // p_758->g_224
        4294967295UL, // p_758->g_225
        1L, // p_758->g_232
        (VECTOR(uint16_t, 2))(5UL, 0x5929L), // p_758->g_245
        0x2146L, // p_758->g_247
        (VECTOR(int32_t, 2))(0x0F2240E8L, 2L), // p_758->g_273
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x2094L), 0x2094L), 0x2094L, 1L, 0x2094L), // p_758->g_274
        0xD2610EC7228BB2A3L, // p_758->g_278
        &p_758->g_278, // p_758->g_277
        &p_758->g_277, // p_758->g_276
        65535UL, // p_758->g_293
        (void*)0, // p_758->g_297
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x557D6955L), 0x557D6955L), 0x557D6955L, 1L, 0x557D6955L, (VECTOR(int32_t, 2))(1L, 0x557D6955L), (VECTOR(int32_t, 2))(1L, 0x557D6955L), 1L, 0x557D6955L, 1L, 0x557D6955L), // p_758->g_301
        (VECTOR(int32_t, 2))(0x00C27F9AL, 9L), // p_758->g_302
        (void*)0, // p_758->g_322
        &p_758->g_322, // p_758->g_321
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_758->g_339
        {{0x017CEA4CL},{0x017CEA4CL},{0x017CEA4CL},{0x017CEA4CL},{0x017CEA4CL},{0x017CEA4CL},{0x017CEA4CL},{0x017CEA4CL},{0x017CEA4CL},{0x017CEA4CL}}, // p_758->g_375
        (VECTOR(uint8_t, 8))(0xA8L, (VECTOR(uint8_t, 4))(0xA8L, (VECTOR(uint8_t, 2))(0xA8L, 3UL), 3UL), 3UL, 0xA8L, 3UL), // p_758->g_384
        (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, (-1L)), (-1L)), // p_758->g_385
        (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 1L), 1L), 1L, 1L, 1L), // p_758->g_387
        (VECTOR(int8_t, 8))(0x58L, (VECTOR(int8_t, 4))(0x58L, (VECTOR(int8_t, 2))(0x58L, (-1L)), (-1L)), (-1L), 0x58L, (-1L)), // p_758->g_388
        (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), (-6L)), (-6L)), // p_758->g_427
        0x259B2B5E31D234B7L, // p_758->g_440
        (VECTOR(uint32_t, 2))(0xD87DCD4CL, 0x09B75BFFL), // p_758->g_454
        (void*)0, // p_758->g_468
        {(void*)0,&p_758->g_468,(void*)0,(void*)0,&p_758->g_468,(void*)0,(void*)0}, // p_758->g_467
        (VECTOR(int32_t, 4))(0x60B7B219L, (VECTOR(int32_t, 2))(0x60B7B219L, (-1L)), (-1L)), // p_758->g_487
        (VECTOR(int32_t, 4))(0x1D98DE09L, (VECTOR(int32_t, 2))(0x1D98DE09L, (-9L)), (-9L)), // p_758->g_488
        4294967292UL, // p_758->g_494
        {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}, // p_758->g_501
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967294UL), 4294967294UL), 4294967294UL, 1UL, 4294967294UL), // p_758->g_508
        &p_758->g_322, // p_758->g_522
        0x3740E355L, // p_758->g_739
        0, // p_758->v_collective
        sequence_input[get_global_id(0)], // p_758->global_0_offset
        sequence_input[get_global_id(1)], // p_758->global_1_offset
        sequence_input[get_global_id(2)], // p_758->global_2_offset
        sequence_input[get_local_id(0)], // p_758->local_0_offset
        sequence_input[get_local_id(1)], // p_758->local_1_offset
        sequence_input[get_local_id(2)], // p_758->local_2_offset
        sequence_input[get_group_id(0)], // p_758->group_0_offset
        sequence_input[get_group_id(1)], // p_758->group_1_offset
        sequence_input[get_group_id(2)], // p_758->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 56)), permutations[0][get_linear_local_id()])), // p_758->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_759 = c_760;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_758);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_758->g_2, "p_758->g_2", print_hash_value);
    transparent_crc(p_758->g_3, "p_758->g_3", print_hash_value);
    transparent_crc(p_758->g_4, "p_758->g_4", print_hash_value);
    transparent_crc(p_758->g_5, "p_758->g_5", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_758->g_6[i], "p_758->g_6[i]", print_hash_value);

    }
    transparent_crc(p_758->g_9, "p_758->g_9", print_hash_value);
    transparent_crc(p_758->g_10, "p_758->g_10", print_hash_value);
    transparent_crc(p_758->g_13.x, "p_758->g_13.x", print_hash_value);
    transparent_crc(p_758->g_13.y, "p_758->g_13.y", print_hash_value);
    transparent_crc(p_758->g_13.z, "p_758->g_13.z", print_hash_value);
    transparent_crc(p_758->g_13.w, "p_758->g_13.w", print_hash_value);
    transparent_crc(p_758->g_14.x, "p_758->g_14.x", print_hash_value);
    transparent_crc(p_758->g_14.y, "p_758->g_14.y", print_hash_value);
    transparent_crc(p_758->g_17.x, "p_758->g_17.x", print_hash_value);
    transparent_crc(p_758->g_17.y, "p_758->g_17.y", print_hash_value);
    transparent_crc(p_758->g_18.x, "p_758->g_18.x", print_hash_value);
    transparent_crc(p_758->g_18.y, "p_758->g_18.y", print_hash_value);
    transparent_crc(p_758->g_18.z, "p_758->g_18.z", print_hash_value);
    transparent_crc(p_758->g_18.w, "p_758->g_18.w", print_hash_value);
    transparent_crc(p_758->g_20.s0, "p_758->g_20.s0", print_hash_value);
    transparent_crc(p_758->g_20.s1, "p_758->g_20.s1", print_hash_value);
    transparent_crc(p_758->g_20.s2, "p_758->g_20.s2", print_hash_value);
    transparent_crc(p_758->g_20.s3, "p_758->g_20.s3", print_hash_value);
    transparent_crc(p_758->g_20.s4, "p_758->g_20.s4", print_hash_value);
    transparent_crc(p_758->g_20.s5, "p_758->g_20.s5", print_hash_value);
    transparent_crc(p_758->g_20.s6, "p_758->g_20.s6", print_hash_value);
    transparent_crc(p_758->g_20.s7, "p_758->g_20.s7", print_hash_value);
    transparent_crc(p_758->g_20.s8, "p_758->g_20.s8", print_hash_value);
    transparent_crc(p_758->g_20.s9, "p_758->g_20.s9", print_hash_value);
    transparent_crc(p_758->g_20.sa, "p_758->g_20.sa", print_hash_value);
    transparent_crc(p_758->g_20.sb, "p_758->g_20.sb", print_hash_value);
    transparent_crc(p_758->g_20.sc, "p_758->g_20.sc", print_hash_value);
    transparent_crc(p_758->g_20.sd, "p_758->g_20.sd", print_hash_value);
    transparent_crc(p_758->g_20.se, "p_758->g_20.se", print_hash_value);
    transparent_crc(p_758->g_20.sf, "p_758->g_20.sf", print_hash_value);
    transparent_crc(p_758->g_23.x, "p_758->g_23.x", print_hash_value);
    transparent_crc(p_758->g_23.y, "p_758->g_23.y", print_hash_value);
    transparent_crc(p_758->g_36.x, "p_758->g_36.x", print_hash_value);
    transparent_crc(p_758->g_36.y, "p_758->g_36.y", print_hash_value);
    transparent_crc(p_758->g_49, "p_758->g_49", print_hash_value);
    transparent_crc(p_758->g_53, "p_758->g_53", print_hash_value);
    transparent_crc(p_758->g_73.s0, "p_758->g_73.s0", print_hash_value);
    transparent_crc(p_758->g_73.s1, "p_758->g_73.s1", print_hash_value);
    transparent_crc(p_758->g_73.s2, "p_758->g_73.s2", print_hash_value);
    transparent_crc(p_758->g_73.s3, "p_758->g_73.s3", print_hash_value);
    transparent_crc(p_758->g_73.s4, "p_758->g_73.s4", print_hash_value);
    transparent_crc(p_758->g_73.s5, "p_758->g_73.s5", print_hash_value);
    transparent_crc(p_758->g_73.s6, "p_758->g_73.s6", print_hash_value);
    transparent_crc(p_758->g_73.s7, "p_758->g_73.s7", print_hash_value);
    transparent_crc(p_758->g_100, "p_758->g_100", print_hash_value);
    transparent_crc(p_758->g_126, "p_758->g_126", print_hash_value);
    transparent_crc(p_758->g_134, "p_758->g_134", print_hash_value);
    transparent_crc(p_758->g_152.x, "p_758->g_152.x", print_hash_value);
    transparent_crc(p_758->g_152.y, "p_758->g_152.y", print_hash_value);
    transparent_crc(p_758->g_159, "p_758->g_159", print_hash_value);
    transparent_crc(p_758->g_214, "p_758->g_214", print_hash_value);
    transparent_crc(p_758->g_224.s0, "p_758->g_224.s0", print_hash_value);
    transparent_crc(p_758->g_224.s1, "p_758->g_224.s1", print_hash_value);
    transparent_crc(p_758->g_224.s2, "p_758->g_224.s2", print_hash_value);
    transparent_crc(p_758->g_224.s3, "p_758->g_224.s3", print_hash_value);
    transparent_crc(p_758->g_224.s4, "p_758->g_224.s4", print_hash_value);
    transparent_crc(p_758->g_224.s5, "p_758->g_224.s5", print_hash_value);
    transparent_crc(p_758->g_224.s6, "p_758->g_224.s6", print_hash_value);
    transparent_crc(p_758->g_224.s7, "p_758->g_224.s7", print_hash_value);
    transparent_crc(p_758->g_224.s8, "p_758->g_224.s8", print_hash_value);
    transparent_crc(p_758->g_224.s9, "p_758->g_224.s9", print_hash_value);
    transparent_crc(p_758->g_224.sa, "p_758->g_224.sa", print_hash_value);
    transparent_crc(p_758->g_224.sb, "p_758->g_224.sb", print_hash_value);
    transparent_crc(p_758->g_224.sc, "p_758->g_224.sc", print_hash_value);
    transparent_crc(p_758->g_224.sd, "p_758->g_224.sd", print_hash_value);
    transparent_crc(p_758->g_224.se, "p_758->g_224.se", print_hash_value);
    transparent_crc(p_758->g_224.sf, "p_758->g_224.sf", print_hash_value);
    transparent_crc(p_758->g_225, "p_758->g_225", print_hash_value);
    transparent_crc(p_758->g_232, "p_758->g_232", print_hash_value);
    transparent_crc(p_758->g_245.x, "p_758->g_245.x", print_hash_value);
    transparent_crc(p_758->g_245.y, "p_758->g_245.y", print_hash_value);
    transparent_crc(p_758->g_247, "p_758->g_247", print_hash_value);
    transparent_crc(p_758->g_273.x, "p_758->g_273.x", print_hash_value);
    transparent_crc(p_758->g_273.y, "p_758->g_273.y", print_hash_value);
    transparent_crc(p_758->g_274.s0, "p_758->g_274.s0", print_hash_value);
    transparent_crc(p_758->g_274.s1, "p_758->g_274.s1", print_hash_value);
    transparent_crc(p_758->g_274.s2, "p_758->g_274.s2", print_hash_value);
    transparent_crc(p_758->g_274.s3, "p_758->g_274.s3", print_hash_value);
    transparent_crc(p_758->g_274.s4, "p_758->g_274.s4", print_hash_value);
    transparent_crc(p_758->g_274.s5, "p_758->g_274.s5", print_hash_value);
    transparent_crc(p_758->g_274.s6, "p_758->g_274.s6", print_hash_value);
    transparent_crc(p_758->g_274.s7, "p_758->g_274.s7", print_hash_value);
    transparent_crc(p_758->g_278, "p_758->g_278", print_hash_value);
    transparent_crc(p_758->g_293, "p_758->g_293", print_hash_value);
    transparent_crc(p_758->g_301.s0, "p_758->g_301.s0", print_hash_value);
    transparent_crc(p_758->g_301.s1, "p_758->g_301.s1", print_hash_value);
    transparent_crc(p_758->g_301.s2, "p_758->g_301.s2", print_hash_value);
    transparent_crc(p_758->g_301.s3, "p_758->g_301.s3", print_hash_value);
    transparent_crc(p_758->g_301.s4, "p_758->g_301.s4", print_hash_value);
    transparent_crc(p_758->g_301.s5, "p_758->g_301.s5", print_hash_value);
    transparent_crc(p_758->g_301.s6, "p_758->g_301.s6", print_hash_value);
    transparent_crc(p_758->g_301.s7, "p_758->g_301.s7", print_hash_value);
    transparent_crc(p_758->g_301.s8, "p_758->g_301.s8", print_hash_value);
    transparent_crc(p_758->g_301.s9, "p_758->g_301.s9", print_hash_value);
    transparent_crc(p_758->g_301.sa, "p_758->g_301.sa", print_hash_value);
    transparent_crc(p_758->g_301.sb, "p_758->g_301.sb", print_hash_value);
    transparent_crc(p_758->g_301.sc, "p_758->g_301.sc", print_hash_value);
    transparent_crc(p_758->g_301.sd, "p_758->g_301.sd", print_hash_value);
    transparent_crc(p_758->g_301.se, "p_758->g_301.se", print_hash_value);
    transparent_crc(p_758->g_301.sf, "p_758->g_301.sf", print_hash_value);
    transparent_crc(p_758->g_302.x, "p_758->g_302.x", print_hash_value);
    transparent_crc(p_758->g_302.y, "p_758->g_302.y", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_758->g_375[i][j], "p_758->g_375[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_758->g_384.s0, "p_758->g_384.s0", print_hash_value);
    transparent_crc(p_758->g_384.s1, "p_758->g_384.s1", print_hash_value);
    transparent_crc(p_758->g_384.s2, "p_758->g_384.s2", print_hash_value);
    transparent_crc(p_758->g_384.s3, "p_758->g_384.s3", print_hash_value);
    transparent_crc(p_758->g_384.s4, "p_758->g_384.s4", print_hash_value);
    transparent_crc(p_758->g_384.s5, "p_758->g_384.s5", print_hash_value);
    transparent_crc(p_758->g_384.s6, "p_758->g_384.s6", print_hash_value);
    transparent_crc(p_758->g_384.s7, "p_758->g_384.s7", print_hash_value);
    transparent_crc(p_758->g_385.x, "p_758->g_385.x", print_hash_value);
    transparent_crc(p_758->g_385.y, "p_758->g_385.y", print_hash_value);
    transparent_crc(p_758->g_385.z, "p_758->g_385.z", print_hash_value);
    transparent_crc(p_758->g_385.w, "p_758->g_385.w", print_hash_value);
    transparent_crc(p_758->g_387.s0, "p_758->g_387.s0", print_hash_value);
    transparent_crc(p_758->g_387.s1, "p_758->g_387.s1", print_hash_value);
    transparent_crc(p_758->g_387.s2, "p_758->g_387.s2", print_hash_value);
    transparent_crc(p_758->g_387.s3, "p_758->g_387.s3", print_hash_value);
    transparent_crc(p_758->g_387.s4, "p_758->g_387.s4", print_hash_value);
    transparent_crc(p_758->g_387.s5, "p_758->g_387.s5", print_hash_value);
    transparent_crc(p_758->g_387.s6, "p_758->g_387.s6", print_hash_value);
    transparent_crc(p_758->g_387.s7, "p_758->g_387.s7", print_hash_value);
    transparent_crc(p_758->g_388.s0, "p_758->g_388.s0", print_hash_value);
    transparent_crc(p_758->g_388.s1, "p_758->g_388.s1", print_hash_value);
    transparent_crc(p_758->g_388.s2, "p_758->g_388.s2", print_hash_value);
    transparent_crc(p_758->g_388.s3, "p_758->g_388.s3", print_hash_value);
    transparent_crc(p_758->g_388.s4, "p_758->g_388.s4", print_hash_value);
    transparent_crc(p_758->g_388.s5, "p_758->g_388.s5", print_hash_value);
    transparent_crc(p_758->g_388.s6, "p_758->g_388.s6", print_hash_value);
    transparent_crc(p_758->g_388.s7, "p_758->g_388.s7", print_hash_value);
    transparent_crc(p_758->g_427.x, "p_758->g_427.x", print_hash_value);
    transparent_crc(p_758->g_427.y, "p_758->g_427.y", print_hash_value);
    transparent_crc(p_758->g_427.z, "p_758->g_427.z", print_hash_value);
    transparent_crc(p_758->g_427.w, "p_758->g_427.w", print_hash_value);
    transparent_crc(p_758->g_440, "p_758->g_440", print_hash_value);
    transparent_crc(p_758->g_454.x, "p_758->g_454.x", print_hash_value);
    transparent_crc(p_758->g_454.y, "p_758->g_454.y", print_hash_value);
    transparent_crc(p_758->g_487.x, "p_758->g_487.x", print_hash_value);
    transparent_crc(p_758->g_487.y, "p_758->g_487.y", print_hash_value);
    transparent_crc(p_758->g_487.z, "p_758->g_487.z", print_hash_value);
    transparent_crc(p_758->g_487.w, "p_758->g_487.w", print_hash_value);
    transparent_crc(p_758->g_488.x, "p_758->g_488.x", print_hash_value);
    transparent_crc(p_758->g_488.y, "p_758->g_488.y", print_hash_value);
    transparent_crc(p_758->g_488.z, "p_758->g_488.z", print_hash_value);
    transparent_crc(p_758->g_488.w, "p_758->g_488.w", print_hash_value);
    transparent_crc(p_758->g_494, "p_758->g_494", print_hash_value);
    transparent_crc(p_758->g_508.s0, "p_758->g_508.s0", print_hash_value);
    transparent_crc(p_758->g_508.s1, "p_758->g_508.s1", print_hash_value);
    transparent_crc(p_758->g_508.s2, "p_758->g_508.s2", print_hash_value);
    transparent_crc(p_758->g_508.s3, "p_758->g_508.s3", print_hash_value);
    transparent_crc(p_758->g_508.s4, "p_758->g_508.s4", print_hash_value);
    transparent_crc(p_758->g_508.s5, "p_758->g_508.s5", print_hash_value);
    transparent_crc(p_758->g_508.s6, "p_758->g_508.s6", print_hash_value);
    transparent_crc(p_758->g_508.s7, "p_758->g_508.s7", print_hash_value);
    transparent_crc(p_758->g_739, "p_758->g_739", print_hash_value);
    transparent_crc(p_758->v_collective, "p_758->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 91; i++)
            transparent_crc(p_758->g_special_values[i + 91 * get_linear_group_id()], "p_758->g_special_values[i + 91 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 91; i++)
            transparent_crc(p_758->l_special_values[i], "p_758->l_special_values[i]", print_hash_value);
    transparent_crc(p_758->l_comm_values[get_linear_local_id()], "p_758->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_758->g_comm_values[get_linear_group_id() * 56 + get_linear_local_id()], "p_758->g_comm_values[get_linear_group_id() * 56 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
