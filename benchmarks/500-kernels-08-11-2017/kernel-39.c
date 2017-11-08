// --atomics 51 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 41,38,4 -l 1,19,1
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

__constant uint32_t permutations[10][19] = {
{14,15,18,2,6,11,10,7,8,12,3,16,1,9,13,4,0,5,17}, // permutation 0
{1,18,4,15,9,6,17,14,11,5,16,2,7,8,10,12,13,0,3}, // permutation 1
{10,3,18,13,5,6,17,4,15,16,2,11,14,9,12,8,7,0,1}, // permutation 2
{1,5,2,15,0,7,6,13,11,4,16,17,8,9,3,10,12,18,14}, // permutation 3
{13,11,8,1,4,9,17,14,12,7,16,10,5,6,18,3,15,2,0}, // permutation 4
{9,13,7,2,16,6,14,4,10,17,15,8,5,3,0,1,12,18,11}, // permutation 5
{5,12,11,16,0,1,15,2,18,9,17,3,13,14,8,4,6,7,10}, // permutation 6
{5,9,18,2,0,7,13,1,3,14,11,6,15,10,17,8,4,12,16}, // permutation 7
{1,6,0,13,17,8,4,15,18,11,3,2,14,12,7,9,16,10,5}, // permutation 8
{7,16,15,18,10,9,13,1,11,2,5,14,0,12,17,6,3,8,4} // permutation 9
};

// Seed: 2915057689

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   uint64_t  f1;
   uint32_t  f2;
   volatile uint64_t  f3;
   volatile int16_t  f4;
   volatile uint32_t  f5;
   int32_t  f6;
};

union U1 {
   int64_t  f0;
   volatile uint64_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   int8_t  f4;
};

struct S2 {
    volatile int32_t g_2;
    int32_t g_3[3];
    int32_t g_11;
    volatile VECTOR(int8_t, 16) g_33;
    volatile VECTOR(int8_t, 8) g_34;
    uint8_t g_38[6];
    uint64_t g_40;
    uint64_t g_171;
    int16_t g_175;
    volatile VECTOR(uint32_t, 4) g_190;
    volatile int32_t *g_209;
    volatile int32_t * volatile *g_208;
    int8_t g_213;
    uint32_t g_220[3];
    uint32_t g_232;
    uint16_t g_252;
    int64_t g_253;
    VECTOR(uint16_t, 8) g_255;
    volatile uint16_t g_260;
    volatile uint16_t *g_259;
    volatile uint16_t ** volatile g_258;
    volatile struct S0 g_312;
    VECTOR(int8_t, 4) g_322;
    struct S0 g_337;
    VECTOR(uint32_t, 2) g_358;
    struct S0 g_363;
    volatile union U1 g_382;
    volatile union U1 g_383;
    struct S0 g_390;
    volatile struct S0 g_399;
    VECTOR(uint16_t, 16) g_404;
    int32_t *g_413;
    int32_t ** volatile g_412;
    volatile struct S0 g_436;
    uint64_t g_453;
    struct S0 g_459[10];
    struct S0 g_462[5][10];
    volatile struct S0 g_465[1];
    VECTOR(uint8_t, 8) g_490;
    VECTOR(uint16_t, 8) g_500;
    uint32_t g_544;
    struct S0 g_553;
    VECTOR(uint8_t, 2) g_564;
    volatile struct S0 g_587;
    volatile VECTOR(int64_t, 16) g_610;
    int16_t g_612;
    volatile VECTOR(int8_t, 4) g_634;
    struct S0 g_663;
    uint8_t g_675;
    volatile struct S0 g_698;
    volatile uint64_t **g_704;
    volatile int8_t * volatile g_899[7][10];
    volatile int8_t * volatile *g_898;
    volatile VECTOR(int32_t, 16) g_903;
    volatile int32_t g_904;
    VECTOR(uint8_t, 16) g_964;
    uint32_t *g_967;
    uint32_t **g_966[9];
    uint32_t *** volatile g_965;
    volatile VECTOR(int32_t, 2) g_978;
    VECTOR(uint8_t, 16) g_985;
    uint32_t *g_994;
    uint32_t * volatile * volatile g_993;
    VECTOR(int8_t, 16) g_1008;
    int32_t ** volatile g_1056;
    int32_t * volatile g_1057;
    struct S0 *g_1067;
    struct S0 ** volatile g_1066;
    int32_t ** volatile g_1098;
    struct S0 g_1099;
    VECTOR(int32_t, 2) g_1130;
    VECTOR(uint16_t, 2) g_1134;
    struct S0 g_1151;
    VECTOR(uint8_t, 8) g_1155;
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
uint64_t  func_1(struct S2 * p_1242);
int32_t * func_6(uint32_t  p_7, struct S2 * p_1242);
uint8_t  func_12(uint32_t  p_13, struct S2 * p_1242);
uint64_t  func_14(int32_t * p_15, struct S2 * p_1242);
int32_t * func_16(int32_t * p_17, int32_t * p_18, int32_t * p_19, int32_t * p_20, struct S2 * p_1242);
int32_t * func_22(uint16_t  p_23, int8_t  p_24, int32_t * p_25, uint16_t  p_26, struct S2 * p_1242);
int32_t  func_180(uint8_t  p_181, int64_t  p_182, uint64_t * p_183, struct S2 * p_1242);
struct S0  func_184(int32_t * p_185, uint32_t  p_186, int16_t * p_187, int32_t  p_188, uint64_t * p_189, struct S2 * p_1242);
uint32_t  func_192(uint8_t * p_193, uint64_t * p_194, uint8_t  p_195, struct S2 * p_1242);
int32_t  func_201(int32_t  p_202, int16_t  p_203, uint8_t * p_204, int8_t  p_205, int32_t * p_206, struct S2 * p_1242);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1242->g_3 p_1242->g_comm_values p_1242->g_11 p_1242->g_33 p_1242->g_34 p_1242->g_171 p_1242->g_190 p_1242->g_208 p_1242->g_213 p_1242->g_175 p_1242->g_38 p_1242->g_209 p_1242->g_2 p_1242->g_255 p_1242->g_258 p_1242->g_40 p_1242->g_253 p_1242->g_252 p_1242->g_259 p_1242->g_260 p_1242->g_312 p_1242->l_comm_values p_1242->g_220 p_1242->g_322 p_1242->g_232 p_1242->g_363 p_1242->g_337.f6 p_1242->g_337.f2 p_1242->g_337.f0 p_1242->g_382 p_1242->g_383 p_1242->g_399 p_1242->g_404 p_1242->g_412 p_1242->g_436 p_1242->g_453 p_1242->g_390.f2 p_1242->g_413 p_1242->g_459 p_1242->g_462 p_1242->g_465 p_1242->g_358 p_1242->g_544 p_1242->g_553 p_1242->g_564 p_1242->g_587 p_1242->g_490 p_1242->g_610 p_1242->g_390.f1 p_1242->g_634 p_1242->g_663 p_1242->g_675 p_1242->g_698 p_1242->g_704 p_1242->g_500 p_1242->g_337.f1 p_1242->g_390.f0 p_1242->g_898 p_1242->g_904 p_1242->g_965 p_1242->g_390.f5 p_1242->g_1056 p_1242->g_1066 p_1242->g_1098 p_1242->g_1099 p_1242->g_967 p_1242->g_964 p_1242->g_1130 p_1242->g_1134 p_1242->g_1151 p_1242->g_1155 p_1242->g_612
 * writes: p_1242->g_3 p_1242->g_38 p_1242->g_40 p_1242->g_171 p_1242->g_175 p_1242->g_213 p_1242->g_220 p_1242->g_232 p_1242->g_252 p_1242->g_253 p_1242->g_2 p_1242->g_255 p_1242->l_comm_values p_1242->g_322 p_1242->g_358 p_1242->g_363 p_1242->g_337.f6 p_1242->g_337.f2 p_1242->g_390 p_1242->g_413 p_1242->g_453 p_1242->g_399 p_1242->g_337.f0 p_1242->g_544 p_1242->g_490 p_1242->g_209 p_1242->g_612 p_1242->g_553 p_1242->g_459.f0 p_1242->g_675 p_1242->g_704 p_1242->g_663.f1 p_1242->g_337.f1 p_1242->g_966 p_1242->g_663.f2 p_1242->g_993 p_1242->g_1067 p_1242->g_663 p_1242->g_964 p_1242->g_11
 */
uint64_t  func_1(struct S2 * p_1242)
{ /* block id: 4 */
    int32_t *l_10 = &p_1242->g_11;
    int16_t *l_1158 = &p_1242->g_612;
    for (p_1242->g_3[1] = 0; (p_1242->g_3[1] == (-15)); p_1242->g_3[1] = safe_sub_func_uint8_t_u_u(p_1242->g_3[1], 3))
    { /* block id: 7 */
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1242->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 19)), permutations[(safe_mod_func_uint32_t_u_u(p_1242->g_comm_values[p_1242->tid], 10))][(safe_mod_func_uint32_t_u_u(p_1242->tid, 19))]));
        l_10 = func_6((safe_add_func_uint32_t_u_u(6UL, (&p_1242->g_3[2] == (void*)0))), p_1242);
    }
    (*l_10) = ((func_12((*l_10), p_1242) < (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x7AL, 5UL)), 0xB2L, 251UL)).even, ((VECTOR(uint8_t, 16))(p_1242->g_1155.s7700417534363260)).s62))).odd, 6))) || (safe_mul_func_uint16_t_u_u((**p_1242->g_258), ((*l_1158) |= ((-4L) >= 0xE8F84460L)))));
    if ((atomic_inc(&p_1242->g_atomic_input[51 * get_linear_group_id() + 25]) == 2))
    { /* block id: 558 */
        struct S0 l_1159 = {-9L,0xBA5AB0A34277FE29L,0x33EB0C3AL,18446744073709551615UL,-8L,0x0AAB6C81L,-1L};/* VOLATILE GLOBAL l_1159 */
        struct S0 l_1160 = {-1L,6UL,0UL,0x3ED919EA3C76CB57L,0L,0x1050A17DL,0x01EF54ABL};/* VOLATILE GLOBAL l_1160 */
        l_1160 = l_1159;
        for (l_1160.f0 = 7; (l_1160.f0 >= 10); l_1160.f0 = safe_add_func_uint32_t_u_u(l_1160.f0, 8))
        { /* block id: 562 */
            uint8_t l_1163 = 0xB2L;
            uint32_t l_1239 = 0x939B5937L;
            if (l_1163)
            { /* block id: 563 */
                int32_t l_1164[6][8][5] = {{{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)}},{{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)}},{{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)}},{{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)}},{{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)}},{{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)},{0x72301E49L,(-1L),0x6254BA24L,0x72301E49L,(-2L)}}};
                int i, j, k;
                if (l_1164[3][6][2])
                { /* block id: 564 */
                    uint16_t l_1167 = 0x66BFL;
                    uint16_t *l_1166 = &l_1167;
                    uint16_t **l_1165[2];
                    uint64_t l_1168 = 18446744073709551611UL;
                    int32_t l_1169 = 0x13D1EBBEL;
                    uint8_t l_1170 = 251UL;
                    int64_t l_1171 = 0L;
                    uint64_t l_1172 = 2UL;
                    uint32_t l_1173 = 0xC77001F4L;
                    uint16_t l_1204 = 0x8F5EL;
                    uint64_t l_1205 = 0x42C616F871C3C46EL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1165[i] = &l_1166;
                    l_1165[0] = (void*)0;
                    l_1172 = (((l_1169 |= l_1168) , (FAKE_DIVERGE(p_1242->local_2_offset, get_local_id(2), 10) , l_1170)) , l_1171);
                    if (l_1173)
                    { /* block id: 568 */
                        VECTOR(int32_t, 8) l_1174 = (VECTOR(int32_t, 8))(0x1980BDAAL, (VECTOR(int32_t, 4))(0x1980BDAAL, (VECTOR(int32_t, 2))(0x1980BDAAL, 0x6F165EAEL), 0x6F165EAEL), 0x6F165EAEL, 0x1980BDAAL, 0x6F165EAEL);
                        int32_t l_1175[5] = {0x1842E397L,0x1842E397L,0x1842E397L,0x1842E397L,0x1842E397L};
                        union U1 l_1176 = {0x3F40B9AF27E47ED7L};/* VOLATILE GLOBAL l_1176 */
                        uint64_t l_1177 = 0xD4225E61C779B1D6L;
                        int16_t l_1178[1][9] = {{0L,0L,0L,0L,0L,0L,0L,0L,0L}};
                        int8_t l_1179 = 0x62L;
                        int32_t l_1180 = 0x17C86079L;
                        VECTOR(int32_t, 2) l_1181 = (VECTOR(int32_t, 2))(0x73AD91A5L, 0x63CD9663L);
                        int32_t l_1182 = 3L;
                        VECTOR(int32_t, 4) l_1183 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-3L)), (-3L));
                        uint32_t l_1184 = 0x8A89888AL;
                        int32_t l_1185[2][2];
                        uint32_t l_1186 = 0x244DE406L;
                        uint16_t l_1187[9][3] = {{65529UL,0x0CB1L,7UL},{65529UL,0x0CB1L,7UL},{65529UL,0x0CB1L,7UL},{65529UL,0x0CB1L,7UL},{65529UL,0x0CB1L,7UL},{65529UL,0x0CB1L,7UL},{65529UL,0x0CB1L,7UL},{65529UL,0x0CB1L,7UL},{65529UL,0x0CB1L,7UL}};
                        uint8_t l_1190[10][6] = {{0xB0L,252UL,0xB0L,0xB0L,252UL,0xB0L},{0xB0L,252UL,0xB0L,0xB0L,252UL,0xB0L},{0xB0L,252UL,0xB0L,0xB0L,252UL,0xB0L},{0xB0L,252UL,0xB0L,0xB0L,252UL,0xB0L},{0xB0L,252UL,0xB0L,0xB0L,252UL,0xB0L},{0xB0L,252UL,0xB0L,0xB0L,252UL,0xB0L},{0xB0L,252UL,0xB0L,0xB0L,252UL,0xB0L},{0xB0L,252UL,0xB0L,0xB0L,252UL,0xB0L},{0xB0L,252UL,0xB0L,0xB0L,252UL,0xB0L},{0xB0L,252UL,0xB0L,0xB0L,252UL,0xB0L}};
                        int32_t l_1191 = 1L;
                        uint32_t l_1194 = 0xEB17CC06L;
                        uint32_t *l_1193 = &l_1194;
                        uint32_t **l_1192[7] = {&l_1193,(void*)0,&l_1193,&l_1193,(void*)0,&l_1193,&l_1193};
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_1185[i][j] = 0x37DE793AL;
                        }
                        l_1174.s5 = ((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 4))(l_1174.s4561)).hi, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))((-1L), l_1175[3], 0x1F7B2200L, 0x45EE24B1L)).xyyxzwxx))).s2, ((l_1176 , (l_1177 , 0x54630367L)) , l_1178[0][5]), 0x77ED2BBAL, (l_1179 , l_1180), ((VECTOR(int32_t, 4))(l_1181.xxyx)))).lo, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_1182, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(l_1183.wyyw)), (int32_t)(-8L), (int32_t)l_1184))), l_1185[0][1], 0L, (-1L), 0L, 0x18F1BEE2L, ((VECTOR(int32_t, 2))((-10L))), ((VECTOR(int32_t, 4))(0x0A83E539L)))).s1a)).yyxxxxyy, (int32_t)l_1186, (int32_t)0x311521D4L))).even))).lo)))), 0x57030274L, (-9L))), ((VECTOR(int32_t, 4))(1L))))).hi))).lo;
                        l_1187[5][0]--;
                        l_1160.f6 &= l_1190[3][4];
                        l_1192[4] = (l_1191 , l_1192[3]);
                    }
                    else
                    { /* block id: 573 */
                        int64_t l_1195 = 0x127656D22AE73CE3L;
                        VECTOR(int32_t, 8) l_1196 = (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x32FECFF1L), 0x32FECFF1L), 0x32FECFF1L, 7L, 0x32FECFF1L);
                        uint32_t l_1197 = 1UL;
                        VECTOR(uint16_t, 16) l_1198 = (VECTOR(uint16_t, 16))(65533UL, (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 0xBAB2L), 0xBAB2L), 0xBAB2L, 65533UL, 0xBAB2L, (VECTOR(uint16_t, 2))(65533UL, 0xBAB2L), (VECTOR(uint16_t, 2))(65533UL, 0xBAB2L), 65533UL, 0xBAB2L, 65533UL, 0xBAB2L);
                        int32_t *l_1199[4];
                        int32_t *l_1200 = (void*)0;
                        uint32_t l_1201 = 0x58309729L;
                        uint32_t l_1202 = 1UL;
                        struct S0 l_1203[2] = {{-1L,0x9CE18DCD8B7E37AAL,0x7C50B50DL,18446744073709551615UL,0x08B6L,1UL,0L},{-1L,0x9CE18DCD8B7E37AAL,0x7C50B50DL,18446744073709551615UL,0x08B6L,1UL,0L}};
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1199[i] = (void*)0;
                        l_1197 = (l_1160.f6 = (l_1195 , (l_1164[3][6][2] ^= (l_1159.f0 |= (l_1159.f6 = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1196.s54)), 0x5D865265L, (-4L))).x)))));
                        l_1200 = (l_1198.s1 , l_1199[1]);
                        l_1159.f0 &= (l_1201 , (l_1164[3][3][2] ^= l_1202));
                        l_1159 = l_1203[1];
                    }
                    if ((l_1204 , (l_1159.f0 = l_1205)))
                    { /* block id: 585 */
                        uint16_t l_1206 = 0UL;
                        VECTOR(int32_t, 8) l_1209 = (VECTOR(int32_t, 8))(0x3C84B084L, (VECTOR(int32_t, 4))(0x3C84B084L, (VECTOR(int32_t, 2))(0x3C84B084L, 3L), 3L), 3L, 0x3C84B084L, 3L);
                        int8_t l_1210 = 0x15L;
                        VECTOR(uint16_t, 4) l_1211 = (VECTOR(uint16_t, 4))(0x1664L, (VECTOR(uint16_t, 2))(0x1664L, 0xDF65L), 0xDF65L);
                        VECTOR(uint8_t, 16) l_1212 = (VECTOR(uint8_t, 16))(0xB5L, (VECTOR(uint8_t, 4))(0xB5L, (VECTOR(uint8_t, 2))(0xB5L, 0x43L), 0x43L), 0x43L, 0xB5L, 0x43L, (VECTOR(uint8_t, 2))(0xB5L, 0x43L), (VECTOR(uint8_t, 2))(0xB5L, 0x43L), 0xB5L, 0x43L, 0xB5L, 0x43L);
                        uint32_t l_1213 = 0UL;
                        VECTOR(uint8_t, 4) l_1214 = (VECTOR(uint8_t, 4))(0x00L, (VECTOR(uint8_t, 2))(0x00L, 1UL), 1UL);
                        VECTOR(uint8_t, 16) l_1215 = (VECTOR(uint8_t, 16))(0x38L, (VECTOR(uint8_t, 4))(0x38L, (VECTOR(uint8_t, 2))(0x38L, 0UL), 0UL), 0UL, 0x38L, 0UL, (VECTOR(uint8_t, 2))(0x38L, 0UL), (VECTOR(uint8_t, 2))(0x38L, 0UL), 0x38L, 0UL, 0x38L, 0UL);
                        uint64_t l_1216[7][3][1] = {{{0x10C9A619E8518556L},{0x10C9A619E8518556L},{0x10C9A619E8518556L}},{{0x10C9A619E8518556L},{0x10C9A619E8518556L},{0x10C9A619E8518556L}},{{0x10C9A619E8518556L},{0x10C9A619E8518556L},{0x10C9A619E8518556L}},{{0x10C9A619E8518556L},{0x10C9A619E8518556L},{0x10C9A619E8518556L}},{{0x10C9A619E8518556L},{0x10C9A619E8518556L},{0x10C9A619E8518556L}},{{0x10C9A619E8518556L},{0x10C9A619E8518556L},{0x10C9A619E8518556L}},{{0x10C9A619E8518556L},{0x10C9A619E8518556L},{0x10C9A619E8518556L}}};
                        VECTOR(uint8_t, 8) l_1217 = (VECTOR(uint8_t, 8))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0xA4L), 0xA4L), 0xA4L, 247UL, 0xA4L);
                        uint8_t l_1218 = 248UL;
                        uint32_t l_1219 = 1UL;
                        int64_t l_1220 = 0x5C151E9C6EC053F0L;
                        VECTOR(uint8_t, 2) l_1221 = (VECTOR(uint8_t, 2))(0x90L, 0xB7L);
                        int8_t l_1222 = 2L;
                        int64_t l_1223 = 0x61B6757FB73A6984L;
                        int64_t l_1224[5][10][2] = {{{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L}},{{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L}},{{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L}},{{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L}},{{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L},{0x64D96F15CC83F75BL,8L}}};
                        uint16_t l_1225 = 65528UL;
                        struct S0 l_1226 = {0x0E20817CL,7UL,0xA5904711L,0xD633A2111AC69BC8L,0x45E1L,0UL,-5L};/* VOLATILE GLOBAL l_1226 */
                        struct S0 l_1227 = {1L,0UL,0x3BCC71B2L,4UL,0x7641L,0xDD75DCE6L,0x54074A77L};/* VOLATILE GLOBAL l_1227 */
                        int i, j, k;
                        l_1206--;
                        l_1159.f0 &= (l_1209.s7 = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_1209.s02)).yyyxxxyx)).s7);
                        l_1159.f0 ^= (((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(0UL, ((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(0xA2EFL, ((*l_1166) &= l_1210), 0x31C0L, ((VECTOR(uint16_t, 8))(mul_hi(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_1211.zzww)).even)).yyyyxyyxyxyyxxxy, ((VECTOR(uint16_t, 8))(add_sat(((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_1212.s478912ec)).s1330707333443632)).s1fd0)).even, ((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 16))(l_1213, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_1214.zwywwxwxxwzzyxzy)).lo)), ((VECTOR(uint8_t, 2))(0xFEL, 0x0BL)), ((VECTOR(uint8_t, 16))(l_1215.sdc5877d1437d9e67)).s6, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(5UL, 0xFAL)).yyyx)))).lo, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_1216[5][0][0], 0x20L, FAKE_DIVERGE(p_1242->global_2_offset, get_global_id(2), 10), ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 2))(l_1217.s12)).xxxx, ((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 8))(255UL, 0x36L, 0x57L, 249UL, 253UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x3FL, 0xBCL)), 0x28L, 253UL)).even)), 5UL)).s0330433752527522, (uint8_t)l_1218, (uint8_t)(l_1219 , l_1220)))).s2abd))).x, 0xDBL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(max(((VECTOR(uint8_t, 8))(l_1221.yyyyxyxy)).s5551417443600747, (uint8_t)l_1222))).sf1)), 7UL)).s0037134331521276)).s054f)).zwwyyzxz))).s70))), 0xAD4BL, 0xCC98L)).even)), (uint16_t)l_1223))).yyxyxyyx, ((VECTOR(uint16_t, 8))(9UL))))).s0576171254044402))).hi, (uint16_t)1UL, (uint16_t)l_1224[1][6][0]))), ((VECTOR(uint16_t, 8))(0x59FDL))))), ((VECTOR(uint16_t, 4))(0x0FE2L)), 0x31E9L)).s83))))), 0x2D49L)).ywxwyzyyzwzwywyw)).s63)).odd , l_1225);
                        l_1227 = l_1226;
                    }
                    else
                    { /* block id: 592 */
                        VECTOR(int32_t, 16) l_1228 = (VECTOR(int32_t, 16))(0x5F30DBFFL, (VECTOR(int32_t, 4))(0x5F30DBFFL, (VECTOR(int32_t, 2))(0x5F30DBFFL, 1L), 1L), 1L, 0x5F30DBFFL, 1L, (VECTOR(int32_t, 2))(0x5F30DBFFL, 1L), (VECTOR(int32_t, 2))(0x5F30DBFFL, 1L), 0x5F30DBFFL, 1L, 0x5F30DBFFL, 1L);
                        int i;
                        l_1159.f0 ^= (l_1159.f6 &= ((VECTOR(int32_t, 2))(l_1228.s12)).lo);
                    }
                }
                else
                { /* block id: 596 */
                    int8_t l_1229[6][7] = {{3L,(-1L),0x36L,4L,0x0BL,3L,4L},{3L,(-1L),0x36L,4L,0x0BL,3L,4L},{3L,(-1L),0x36L,4L,0x0BL,3L,4L},{3L,(-1L),0x36L,4L,0x0BL,3L,4L},{3L,(-1L),0x36L,4L,0x0BL,3L,4L},{3L,(-1L),0x36L,4L,0x0BL,3L,4L}};
                    int64_t l_1230 = 0x54AF6D54E71C0965L;
                    uint32_t l_1231 = 0xA5709313L;
                    struct S0 l_1234 = {0x2513D7D8L,0UL,6UL,0x0DBD1C6A53CAA950L,-1L,1UL,0x0F7C49C2L};/* VOLATILE GLOBAL l_1234 */
                    struct S0 l_1235[10] = {{0x7E919331L,0UL,0xD5AE3A33L,18446744073709551607UL,9L,4294967295UL,0x73127A0CL},{-7L,1UL,0xF5A9176DL,18446744073709551611UL,0x0727L,6UL,0x559E42C8L},{0x7E919331L,0UL,0xD5AE3A33L,18446744073709551607UL,9L,4294967295UL,0x73127A0CL},{0x7E919331L,0UL,0xD5AE3A33L,18446744073709551607UL,9L,4294967295UL,0x73127A0CL},{-7L,1UL,0xF5A9176DL,18446744073709551611UL,0x0727L,6UL,0x559E42C8L},{0x7E919331L,0UL,0xD5AE3A33L,18446744073709551607UL,9L,4294967295UL,0x73127A0CL},{0x7E919331L,0UL,0xD5AE3A33L,18446744073709551607UL,9L,4294967295UL,0x73127A0CL},{-7L,1UL,0xF5A9176DL,18446744073709551611UL,0x0727L,6UL,0x559E42C8L},{0x7E919331L,0UL,0xD5AE3A33L,18446744073709551607UL,9L,4294967295UL,0x73127A0CL},{0x7E919331L,0UL,0xD5AE3A33L,18446744073709551607UL,9L,4294967295UL,0x73127A0CL}};
                    int i, j;
                    ++l_1231;
                    l_1235[3] = l_1234;
                }
            }
            else
            { /* block id: 600 */
                int16_t l_1236 = 5L;
                int64_t l_1237 = 0x157415DEDC375494L;
                uint8_t l_1238 = 0xB9L;
                l_1160.f6 ^= (l_1159.f6 = (((l_1236 ^= 0L) , l_1237) , l_1238));
            }
            l_1239++;
        }
        unsigned int result = 0;
        result += l_1159.f0;
        result += l_1159.f1;
        result += l_1159.f2;
        result += l_1159.f3;
        result += l_1159.f4;
        result += l_1159.f5;
        result += l_1159.f6;
        result += l_1160.f0;
        result += l_1160.f1;
        result += l_1160.f2;
        result += l_1160.f3;
        result += l_1160.f4;
        result += l_1160.f5;
        result += l_1160.f6;
        atomic_add(&p_1242->g_special_values[51 * get_linear_group_id() + 25], result);
    }
    else
    { /* block id: 607 */
        (1 + 1);
    }
    return (*l_10);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_6(uint32_t  p_7, struct S2 * p_1242)
{ /* block id: 11 */
    return &p_1242->g_3[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_3 p_1242->g_33 p_1242->g_34 p_1242->g_comm_values p_1242->g_11 p_1242->g_171 p_1242->g_190 p_1242->g_208 p_1242->g_213 p_1242->g_175 p_1242->g_38 p_1242->g_209 p_1242->g_2 p_1242->g_255 p_1242->g_258 p_1242->g_40 p_1242->g_253 p_1242->g_252 p_1242->g_259 p_1242->g_260 p_1242->g_312 p_1242->l_comm_values p_1242->g_220 p_1242->g_322 p_1242->g_232 p_1242->g_363 p_1242->g_337.f6 p_1242->g_337.f2 p_1242->g_337.f0 p_1242->g_382 p_1242->g_383 p_1242->g_399 p_1242->g_404 p_1242->g_412 p_1242->g_436 p_1242->g_453 p_1242->g_390.f2 p_1242->g_413 p_1242->g_459 p_1242->g_462 p_1242->g_465 p_1242->g_358 p_1242->g_544 p_1242->g_553 p_1242->g_564 p_1242->g_587 p_1242->g_490 p_1242->g_610 p_1242->g_390.f1 p_1242->g_634 p_1242->g_663 p_1242->g_675 p_1242->g_698 p_1242->g_704 p_1242->g_500 p_1242->g_337.f1 p_1242->g_390.f0 p_1242->g_898 p_1242->g_904 p_1242->g_965 p_1242->g_390.f5 p_1242->g_1056 p_1242->g_1066 p_1242->g_1098 p_1242->g_1099 p_1242->g_967 p_1242->g_964 p_1242->g_1130 p_1242->g_1134 p_1242->g_1151
 * writes: p_1242->g_38 p_1242->g_40 p_1242->g_171 p_1242->g_175 p_1242->g_213 p_1242->g_220 p_1242->g_232 p_1242->g_252 p_1242->g_253 p_1242->g_2 p_1242->g_255 p_1242->l_comm_values p_1242->g_322 p_1242->g_358 p_1242->g_363 p_1242->g_337.f6 p_1242->g_337.f2 p_1242->g_390 p_1242->g_413 p_1242->g_453 p_1242->g_399 p_1242->g_337.f0 p_1242->g_544 p_1242->g_490 p_1242->g_209 p_1242->g_612 p_1242->g_553 p_1242->g_459.f0 p_1242->g_675 p_1242->g_3 p_1242->g_704 p_1242->g_663.f1 p_1242->g_337.f1 p_1242->g_966 p_1242->g_663.f2 p_1242->g_993 p_1242->g_1067 p_1242->g_663 p_1242->g_964
 */
uint8_t  func_12(uint32_t  p_13, struct S2 * p_1242)
{ /* block id: 15 */
    int32_t *l_21 = &p_1242->g_3[1];
    uint8_t *l_37 = &p_1242->g_38[1];
    uint64_t *l_39 = &p_1242->g_40;
    struct S0 **l_1012 = (void*)0;
    uint32_t **l_1079 = &p_1242->g_994;
    VECTOR(int32_t, 2) l_1129 = (VECTOR(int32_t, 2))(1L, 2L);
    uint16_t *l_1147 = (void*)0;
    uint16_t *l_1148 = (void*)0;
    uint16_t *l_1149 = (void*)0;
    uint16_t *l_1150 = (void*)0;
    struct S0 *l_1152[9][5];
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
            l_1152[i][j] = &p_1242->g_553;
    }
    if ((1UL <= (func_14(func_16(func_6(p_13, p_1242), func_6(p_1242->g_3[1], p_1242), l_21, func_22((safe_div_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), (safe_mod_func_uint64_t_u_u(((*l_39) = ((safe_mul_func_uint8_t_u_u((*l_21), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(p_1242->g_33.s9e6a0122d800f4d4)).hi)).s2015604227624116, ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(0L, 0L)).yyxyyxyy, ((VECTOR(int8_t, 16))(p_1242->g_34.s1560402103363127)).odd))).s6505037745365475))).lo, ((VECTOR(int8_t, 4))(p_13, (safe_mul_func_uint8_t_u_u(((*l_37) = (!((!p_1242->g_comm_values[p_1242->tid]) ^ p_1242->g_comm_values[p_1242->tid]))), p_1242->g_11)), 6L, 8L)).wzzwzxxz))).s04, (int8_t)p_1242->g_3[0]))).odd, p_13, ((VECTOR(int8_t, 2))(0x5CL)), (-7L), (*l_21), 1L, 0x5AL, ((VECTOR(int8_t, 8))((-4L))))).sb)) , p_1242->g_34.s6)), p_1242->g_3[1])))), p_13, &p_1242->g_3[1], p_13, p_1242), p_1242), p_1242) > p_1242->g_11)))
    { /* block id: 452 */
        uint64_t *l_998 = &p_1242->g_453;
        uint64_t **l_997 = &l_998;
        uint64_t ***l_999 = &l_997;
        int32_t l_1002 = 0x4AA014CCL;
        VECTOR(int8_t, 4) l_1003 = (VECTOR(int8_t, 4))(0x6BL, (VECTOR(int8_t, 2))(0x6BL, 0L), 0L);
        int32_t l_1009[8][4];
        int16_t *l_1013 = &p_1242->g_612;
        struct S0 *l_1014 = &p_1242->g_553;
        int32_t *l_1058 = &l_1009[2][1];
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 4; j++)
                l_1009[i][j] = 0x22AC7564L;
        }
        (*l_1014) = ((safe_div_func_int16_t_s_s((p_1242->g_704 == ((*l_999) = l_997)), 0x20EDL)) , p_1242->g_363);
        if (p_13)
        { /* block id: 456 */
            uint64_t l_1015 = 18446744073709551615UL;
            (*l_21) |= (-2L);
            --l_1015;
        }
        else
        { /* block id: 459 */
            if ((atomic_inc(&p_1242->l_atomic_input[7]) == 4))
            { /* block id: 461 */
                int32_t l_1018 = (-5L);
                int32_t l_1020 = 0x2A7D0962L;
                int32_t *l_1019 = &l_1020;
                int32_t *l_1021 = &l_1020;
                int32_t *l_1022[4][1][9] = {{{&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020}},{{&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020}},{{&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020}},{{&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020,&l_1020}}};
                uint32_t l_1023 = 2UL;
                uint32_t l_1024 = 0UL;
                int i, j, k;
                l_1022[2][0][3] = (l_1021 = (l_1018 , l_1019));
                (*l_1019) = 0x164C433DL;
                l_1024 = l_1023;
                for (l_1023 = (-21); (l_1023 < 21); l_1023 = safe_add_func_uint8_t_u_u(l_1023, 2))
                { /* block id: 468 */
                    uint32_t l_1027 = 0xE70EE8C4L;
                    int32_t l_1040[2];
                    int32_t *l_1039 = &l_1040[0];
                    int32_t **l_1038 = &l_1039;
                    int32_t **l_1041 = &l_1039;
                    uint32_t l_1042[8][5] = {{0x416006C8L,4294967287UL,0x3F61540DL,4294967287UL,0x416006C8L},{0x416006C8L,4294967287UL,0x3F61540DL,4294967287UL,0x416006C8L},{0x416006C8L,4294967287UL,0x3F61540DL,4294967287UL,0x416006C8L},{0x416006C8L,4294967287UL,0x3F61540DL,4294967287UL,0x416006C8L},{0x416006C8L,4294967287UL,0x3F61540DL,4294967287UL,0x416006C8L},{0x416006C8L,4294967287UL,0x3F61540DL,4294967287UL,0x416006C8L},{0x416006C8L,4294967287UL,0x3F61540DL,4294967287UL,0x416006C8L},{0x416006C8L,4294967287UL,0x3F61540DL,4294967287UL,0x416006C8L}};
                    uint64_t l_1054 = 1UL;
                    int16_t l_1055 = 0x2C42L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_1040[i] = (-9L);
                    (1 + 1);
                }
                unsigned int result = 0;
                result += l_1018;
                result += l_1020;
                result += l_1023;
                result += l_1024;
                atomic_add(&p_1242->l_special_values[7], result);
            }
            else
            { /* block id: 495 */
                (1 + 1);
            }
        }
        (*p_1242->g_1056) = func_6(p_13, p_1242);
        (*l_1058) &= (*l_21);
    }
    else
    { /* block id: 501 */
        uint16_t l_1059[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1059[i] = 0x4BB2L;
        return l_1059[0];
    }
    for (p_1242->g_337.f2 = 0; (p_1242->g_337.f2 == 44); ++p_1242->g_337.f2)
    { /* block id: 506 */
        struct S0 *l_1064 = &p_1242->g_663;
        uint32_t **l_1078 = &p_1242->g_994;
        uint32_t ***l_1077 = &l_1078;
        int8_t *l_1082 = (void*)0;
        int8_t *l_1083 = &p_1242->g_213;
        VECTOR(int8_t, 2) l_1084 = (VECTOR(int8_t, 2))(0x6DL, 0x66L);
        int16_t l_1096 = (-1L);
        int32_t *l_1097 = (void*)0;
        struct S0 **l_1113 = (void*)0;
        VECTOR(int32_t, 16) l_1128 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0B859BB9L), 0x0B859BB9L), 0x0B859BB9L, 1L, 0x0B859BB9L, (VECTOR(int32_t, 2))(1L, 0x0B859BB9L), (VECTOR(int32_t, 2))(1L, 0x0B859BB9L), 1L, 0x0B859BB9L, 1L, 0x0B859BB9L);
        int i;
        for (p_1242->g_663.f2 = (-16); (p_1242->g_663.f2 > 42); p_1242->g_663.f2 = safe_add_func_uint8_t_u_u(p_1242->g_663.f2, 7))
        { /* block id: 509 */
            struct S0 **l_1065 = (void*)0;
            (*p_1242->g_1066) = l_1064;
        }
        if (((safe_unary_minus_func_int64_t_s((safe_mul_func_uint8_t_u_u((0x6EFC8F0D59D4E865L == (safe_div_func_int32_t_s_s((safe_div_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(FAKE_DIVERGE(p_1242->local_0_offset, get_local_id(0), 10), ((*l_21) = (2L >= ((((((*l_1077) = &p_1242->g_994) != l_1079) != (safe_lshift_func_uint16_t_u_u((**p_1242->g_258), 5))) != (((VECTOR(int8_t, 8))(sub_sat(((VECTOR(int8_t, 16))(((*l_1083) = ((-1L) | (0x8B3DBF1DL & (*p_1242->g_413)))), ((VECTOR(int8_t, 8))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(l_1084.xxyx)).yxyzzxzzyzwwwyzw)).even, ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 16))(0x40L, 0L, (*l_21), ((VECTOR(int8_t, 4))(0x0AL)), ((VECTOR(int8_t, 2))(1L)), l_1084.x, p_1242->g_220[1], p_1242->g_255.s6, 0x1BL, 5L, 0x3FL, (-1L)))))), ((VECTOR(int8_t, 16))(0x47L))))).odd, ((VECTOR(int8_t, 8))(0x7BL))))), ((VECTOR(int8_t, 2))(0x10L)), (-5L), (*l_21), ((VECTOR(int8_t, 2))(0x3CL)), 1L)).even, ((VECTOR(int8_t, 8))(0x44L))))).s2 == (-1L))) | p_13))))), p_13)), 0x573C7FA9L))), p_1242->g_459[6].f0)))) , p_13))
        { /* block id: 515 */
            int32_t *l_1085[7][8] = {{&p_1242->g_553.f6,&p_1242->g_390.f6,&p_1242->g_390.f6,&p_1242->g_553.f6,&p_1242->g_553.f6,&p_1242->g_553.f0,&p_1242->g_553.f0,&p_1242->g_553.f6},{&p_1242->g_553.f6,&p_1242->g_390.f6,&p_1242->g_390.f6,&p_1242->g_553.f6,&p_1242->g_553.f6,&p_1242->g_553.f0,&p_1242->g_553.f0,&p_1242->g_553.f6},{&p_1242->g_553.f6,&p_1242->g_390.f6,&p_1242->g_390.f6,&p_1242->g_553.f6,&p_1242->g_553.f6,&p_1242->g_553.f0,&p_1242->g_553.f0,&p_1242->g_553.f6},{&p_1242->g_553.f6,&p_1242->g_390.f6,&p_1242->g_390.f6,&p_1242->g_553.f6,&p_1242->g_553.f6,&p_1242->g_553.f0,&p_1242->g_553.f0,&p_1242->g_553.f6},{&p_1242->g_553.f6,&p_1242->g_390.f6,&p_1242->g_390.f6,&p_1242->g_553.f6,&p_1242->g_553.f6,&p_1242->g_553.f0,&p_1242->g_553.f0,&p_1242->g_553.f6},{&p_1242->g_553.f6,&p_1242->g_390.f6,&p_1242->g_390.f6,&p_1242->g_553.f6,&p_1242->g_553.f6,&p_1242->g_553.f0,&p_1242->g_553.f0,&p_1242->g_553.f6},{&p_1242->g_553.f6,&p_1242->g_390.f6,&p_1242->g_390.f6,&p_1242->g_553.f6,&p_1242->g_553.f6,&p_1242->g_553.f0,&p_1242->g_553.f0,&p_1242->g_553.f6}};
            int16_t *l_1090[4][4][4] = {{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}};
            VECTOR(int8_t, 8) l_1093 = (VECTOR(int8_t, 8))(0x72L, (VECTOR(int8_t, 4))(0x72L, (VECTOR(int8_t, 2))(0x72L, 0x00L), 0x00L), 0x00L, 0x72L, 0x00L);
            int32_t **l_1100 = &l_1097;
            int i, j, k;
            (*p_1242->g_1098) = func_16(l_1097, (*p_1242->g_412), l_21, l_21, p_1242);
            (*l_1064) = p_1242->g_1099;
            if ((*l_21))
                continue;
            (*l_1100) = l_1085[4][5];
        }
        else
        { /* block id: 525 */
            int16_t *l_1116[6][7][6] = {{{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0}},{{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0}},{{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0}},{{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0}},{{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0}},{{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0},{&p_1242->g_612,&p_1242->g_612,(void*)0,&p_1242->g_612,&p_1242->g_612,(void*)0}}};
            int32_t l_1117 = 0x6A06BBD0L;
            uint8_t l_1131 = 0x8DL;
            int i, j, k;
            if ((((safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((0x7DE5L && (p_1242->g_612 = ((l_1012 == (l_1113 = ((((*p_1242->g_967)--) ^ ((FAKE_DIVERGE(p_1242->group_0_offset, get_group_id(0), 10) || ((GROUP_DIVERGE(1, 1) , &p_1242->g_1067) != l_1012)) > ((safe_mul_func_uint8_t_u_u((--p_1242->g_964.s8), 3L)) >= 0x2DEC2B194A7D9CD9L))) , &l_1064))) > (safe_mod_func_int32_t_s_s((*l_21), FAKE_DIVERGE(p_1242->group_1_offset, get_group_id(1), 10)))))), ((VECTOR(int32_t, 2))(0x0C83230CL, (-6L))).lo)), 0x20L)) && p_1242->g_436.f6) , l_1117))
            { /* block id: 530 */
                if ((atomic_inc(&p_1242->l_atomic_input[35]) == 2))
                { /* block id: 532 */
                    int32_t l_1118 = 0x2251AE20L;
                    VECTOR(uint32_t, 8) l_1119 = (VECTOR(uint32_t, 8))(0xFEAB23B1L, (VECTOR(uint32_t, 4))(0xFEAB23B1L, (VECTOR(uint32_t, 2))(0xFEAB23B1L, 0x316042BBL), 0x316042BBL), 0x316042BBL, 0xFEAB23B1L, 0x316042BBL);
                    int32_t *l_1120 = (void*)0;
                    int32_t *l_1121 = &l_1118;
                    int32_t l_1122 = 6L;
                    uint8_t l_1123 = 255UL;
                    int i;
                    l_1121 = (l_1118 , (((VECTOR(uint32_t, 2))(l_1119.s14)).lo , (l_1120 = (void*)0)));
                    l_1123 ^= l_1122;
                    unsigned int result = 0;
                    result += l_1118;
                    result += l_1119.s7;
                    result += l_1119.s6;
                    result += l_1119.s5;
                    result += l_1119.s4;
                    result += l_1119.s3;
                    result += l_1119.s2;
                    result += l_1119.s1;
                    result += l_1119.s0;
                    result += l_1122;
                    result += l_1123;
                    atomic_add(&p_1242->l_special_values[35], result);
                }
                else
                { /* block id: 536 */
                    (1 + 1);
                }
            }
            else
            { /* block id: 539 */
                int32_t l_1141 = 0L;
                int8_t **l_1143 = &l_1083;
                int8_t ***l_1142 = &l_1143;
                uint8_t l_1146 = 0x09L;
                for (p_1242->g_337.f1 = (-3); (p_1242->g_337.f1 <= 28); ++p_1242->g_337.f1)
                { /* block id: 542 */
                    int64_t l_1144 = 6L;
                    int32_t l_1145[5][5] = {{0L,0x70AB3111L,0x53386F1CL,0x70AB3111L,0L},{0L,0x70AB3111L,0x53386F1CL,0x70AB3111L,0L},{0L,0x70AB3111L,0x53386F1CL,0x70AB3111L,0L},{0L,0x70AB3111L,0x53386F1CL,0x70AB3111L,0L},{0L,0x70AB3111L,0x53386F1CL,0x70AB3111L,0L}};
                    int i, j;
                    l_1146 = (((p_1242->g_175 ^= (l_1145[3][1] &= ((((((safe_mul_func_int16_t_s_s(p_1242->g_436.f0, (((0x61L || (((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_1128.s1c6966cb5fc751a7)))).sca)), ((VECTOR(int32_t, 16))(l_1129.xyyyxxyyxxyxyyxy)).s7d))).lo ^ ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(p_1242->g_1130.yyyxxyxy)).s3500775121140243)).sed))).odd)) & p_1242->g_1130.y) != (((l_1131 , (p_1242->g_462[4][8].f1 && (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 16))(p_1242->g_1134.xyxyyyxxyyyxyyyx)).sa, 0)))) ^ ((safe_lshift_func_int16_t_s_u(((((safe_div_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), (safe_sub_func_int16_t_s_s(0x02F9L, l_1141)))) && ((+(p_1242->g_459[6].f6 < (((void*)0 == l_1142) <= 0x72L))) , 1UL)) >= (*p_1242->g_413)) | GROUP_DIVERGE(1, 1)), FAKE_DIVERGE(p_1242->local_2_offset, get_local_id(2), 10))) == p_13)) , p_13)))) & p_1242->g_544) & l_1144) ^ (*p_1242->g_967)) != FAKE_DIVERGE(p_1242->global_0_offset, get_global_id(0), 10)) == p_13))) || (*p_1242->g_259)) > p_13);
                }
            }
            return p_1242->g_399.f5;
        }
        if ((*p_1242->g_413))
            break;
    }
    p_1242->g_663 = p_1242->g_1151;
    return p_1242->g_459[6].f4;
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_704 p_1242->g_399.f4 p_1242->g_3 p_1242->g_38 p_1242->g_255 p_1242->g_459.f0 p_1242->g_175 p_1242->g_11 p_1242->g_337.f2 p_1242->g_171 p_1242->g_412 p_1242->g_413 p_1242->g_553.f2 p_1242->g_663.f5 p_1242->g_587.f4 p_1242->g_436.f5 p_1242->g_258 p_1242->g_259 p_1242->g_260 p_1242->g_500 p_1242->l_comm_values p_1242->g_337.f1 p_1242->g_40 p_1242->g_363.f6 p_1242->g_390.f0 p_1242->g_898 p_1242->g_904 p_1242->g_587.f0 p_1242->g_965 p_1242->g_363.f1 p_1242->g_404 p_1242->g_390.f1 p_1242->g_390.f5
 * writes: p_1242->g_704 p_1242->g_663.f1 p_1242->g_337.f1 p_1242->g_337.f2 p_1242->g_171 p_1242->g_553.f2 p_1242->g_337.f0 p_1242->g_252 p_1242->g_220 p_1242->g_175 p_1242->g_363.f2 p_1242->g_675 p_1242->g_553.f6 p_1242->g_966 p_1242->g_363.f1 p_1242->g_663.f2 p_1242->g_213 p_1242->g_390.f1 p_1242->g_993
 */
uint64_t  func_14(int32_t * p_15, struct S2 * p_1242)
{ /* block id: 303 */
    int32_t *l_700[5] = {&p_1242->g_337.f6,&p_1242->g_337.f6,&p_1242->g_337.f6,&p_1242->g_337.f6,&p_1242->g_337.f6};
    uint64_t l_701 = 0x7DE0D166464E416FL;
    volatile uint64_t ***l_705 = &p_1242->g_704;
    VECTOR(int64_t, 4) l_709 = (VECTOR(int64_t, 4))(0x537FB4052D6831F5L, (VECTOR(int64_t, 2))(0x537FB4052D6831F5L, (-1L)), (-1L));
    int32_t **l_711 = &l_700[4];
    int32_t ***l_710 = &l_711;
    uint8_t l_716 = 1UL;
    uint64_t *l_718[10] = {&p_1242->g_337.f1,&p_1242->g_337.f1,&p_1242->g_337.f1,&p_1242->g_337.f1,&p_1242->g_337.f1,&p_1242->g_337.f1,&p_1242->g_337.f1,&p_1242->g_337.f1,&p_1242->g_337.f1,&p_1242->g_337.f1};
    uint64_t **l_717 = &l_718[4];
    uint8_t l_719 = 0xC9L;
    VECTOR(uint32_t, 4) l_868 = (VECTOR(uint32_t, 4))(0xE10C36F1L, (VECTOR(uint32_t, 2))(0xE10C36F1L, 0x1B2CF0BFL), 0x1B2CF0BFL);
    uint32_t *l_874 = (void*)0;
    uint64_t *l_883 = &p_1242->g_363.f1;
    uint32_t **l_885 = (void*)0;
    uint8_t l_890 = 250UL;
    int64_t l_945 = (-1L);
    int8_t *l_981 = &p_1242->g_213;
    int i;
    ++l_701;
    (*l_705) = p_1242->g_704;
    if (((p_1242->g_399.f4 < ((safe_rshift_func_uint8_t_u_s(p_1242->g_3[1], (((0x7F7DL > (safe_unary_minus_func_uint64_t_u(((**l_717) = (((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 4))(add_sat(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 4))(l_709.zwzx)).even, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 4))(1L, ((l_710 == ((safe_rshift_func_uint16_t_u_s((((((safe_rshift_func_uint8_t_u_u(p_1242->g_38[1], 6)) , l_716) || (((void*)0 == &p_1242->g_253) && (l_717 != &l_718[0]))) >= l_719) != p_1242->g_255.s1), p_1242->g_459[6].f0)) , (void*)0)) < (-10L)), 0L, 0x65ED7561969935DCL)).lo, ((VECTOR(int64_t, 2))(0x42AACBB9C92CDE89L))))), 0x32687F1A176F0E4EL, (-6L), ((VECTOR(int64_t, 2))(6L)), 0L, 1L)).s32))).xyxy, ((VECTOR(int64_t, 4))(0x342038DAC59416A1L))))), ((VECTOR(int64_t, 4))((-1L)))))).even, ((VECTOR(int64_t, 2))(0x5FF8C47BF2F0F15EL))))).even < (-3L)))))) , 4294967295UL) && GROUP_DIVERGE(0, 1)))) | p_1242->g_175)) || p_1242->g_11))
    { /* block id: 307 */
        int32_t l_724[6][1][8] = {{{1L,0L,0x301FDD98L,0L,1L,1L,0L,0x301FDD98L}},{{1L,0L,0x301FDD98L,0L,1L,1L,0L,0x301FDD98L}},{{1L,0L,0x301FDD98L,0L,1L,1L,0L,0x301FDD98L}},{{1L,0L,0x301FDD98L,0L,1L,1L,0L,0x301FDD98L}},{{1L,0L,0x301FDD98L,0L,1L,1L,0L,0x301FDD98L}},{{1L,0L,0x301FDD98L,0L,1L,1L,0L,0x301FDD98L}}};
        int32_t l_737 = 0x2FB1B2DBL;
        int i, j, k;
        for (p_1242->g_337.f2 = 0; (p_1242->g_337.f2 > 28); p_1242->g_337.f2++)
        { /* block id: 310 */
            int32_t l_722 = 0x1DE29DB7L;
            int32_t l_723 = 0x675A6A40L;
            VECTOR(int32_t, 4) l_725 = (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 6L), 6L);
            int32_t l_726 = 1L;
            uint32_t l_727 = 0xE4B21A42L;
            int i;
            --l_727;
            if (l_724[1][0][3])
                break;
        }
        for (p_1242->g_171 = 0; (p_1242->g_171 >= 19); p_1242->g_171 = safe_add_func_int8_t_s_s(p_1242->g_171, 7))
        { /* block id: 316 */
            atomic_sub(&p_1242->l_atomic_reduction[0], (((*l_711) = (*p_1242->g_412)) == p_15) + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1242->v_collective += p_1242->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        }
        for (p_1242->g_553.f2 = 0; (p_1242->g_553.f2 >= 4); p_1242->g_553.f2 = safe_add_func_uint16_t_u_u(p_1242->g_553.f2, 4))
        { /* block id: 322 */
            int64_t l_734 = 0x4A90632D01C64B43L;
            int32_t l_738 = 0x58C2F0C9L;
            (*l_711) = func_6(l_734, p_1242);
            p_1242->g_337.f0 = (l_724[5][0][6] = (l_738 |= ((p_1242->g_663.f5 < (safe_lshift_func_int8_t_s_u(l_734, 0))) && l_737)));
        }
    }
    else
    { /* block id: 328 */
        int32_t l_873 = 0L;
        uint32_t *l_876 = &p_1242->g_232;
        uint32_t **l_875 = &l_876;
        uint16_t *l_880 = &p_1242->g_252;
        uint16_t **l_879 = &l_880;
        int32_t l_884 = 0x11518A13L;
        uint32_t *l_887 = (void*)0;
        uint32_t **l_886 = &l_887;
        uint64_t l_888 = 0xCCEC42C397675F57L;
        int16_t l_889 = (-1L);
        int16_t l_931 = 0x0023L;
        int32_t l_941 = 0x4D789B96L;
        int32_t l_946 = (-1L);
        int32_t l_947 = 0x296A7412L;
        VECTOR(int8_t, 8) l_962 = (VECTOR(int8_t, 8))(0x15L, (VECTOR(int8_t, 4))(0x15L, (VECTOR(int8_t, 2))(0x15L, 0x69L), 0x69L), 0x69L, 0x15L, 0x69L);
        int i;
        if ((atomic_inc(&p_1242->l_atomic_input[3]) == 2))
        { /* block id: 330 */
            int32_t l_739 = 3L;
            VECTOR(int16_t, 4) l_852 = (VECTOR(int16_t, 4))(0x2E46L, (VECTOR(int16_t, 2))(0x2E46L, 0L), 0L);
            uint32_t l_853 = 0UL;
            int32_t *l_856 = &l_739;
            int32_t *l_857[8][5] = {{&l_739,&l_739,&l_739,&l_739,(void*)0},{&l_739,&l_739,&l_739,&l_739,(void*)0},{&l_739,&l_739,&l_739,&l_739,(void*)0},{&l_739,&l_739,&l_739,&l_739,(void*)0},{&l_739,&l_739,&l_739,&l_739,(void*)0},{&l_739,&l_739,&l_739,&l_739,(void*)0},{&l_739,&l_739,&l_739,&l_739,(void*)0},{&l_739,&l_739,&l_739,&l_739,(void*)0}};
            int64_t l_858 = 1L;
            uint64_t l_859 = 0xEBB41607F80A9C09L;
            int i, j;
            for (l_739 = 0; (l_739 <= 13); ++l_739)
            { /* block id: 333 */
                VECTOR(int32_t, 4) l_742 = (VECTOR(int32_t, 4))(0x6B6B953EL, (VECTOR(int32_t, 2))(0x6B6B953EL, 9L), 9L);
                VECTOR(int32_t, 8) l_762 = (VECTOR(int32_t, 8))(0x07038234L, (VECTOR(int32_t, 4))(0x07038234L, (VECTOR(int32_t, 2))(0x07038234L, 1L), 1L), 1L, 0x07038234L, 1L);
                VECTOR(int32_t, 2) l_763 = (VECTOR(int32_t, 2))(0x550632A0L, (-1L));
                uint64_t l_764 = 0x0B9C659A444F0FE9L;
                VECTOR(uint16_t, 2) l_765 = (VECTOR(uint16_t, 2))(1UL, 0x80E5L);
                uint64_t l_766 = 0xA1DEFC02657E797BL;
                VECTOR(int32_t, 4) l_767 = (VECTOR(int32_t, 4))(0x7A218533L, (VECTOR(int32_t, 2))(0x7A218533L, 1L), 1L);
                VECTOR(int32_t, 4) l_768 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7641F7E8L), 0x7641F7E8L);
                VECTOR(int32_t, 4) l_769 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
                VECTOR(int32_t, 2) l_770 = (VECTOR(int32_t, 2))((-9L), 0x3FDDA10DL);
                VECTOR(int32_t, 2) l_771 = (VECTOR(int32_t, 2))(3L, 0x561ED5A1L);
                uint64_t l_772 = 0x7D8D8F2901B82497L;
                VECTOR(int16_t, 16) l_773 = (VECTOR(int16_t, 16))((-5L), (VECTOR(int16_t, 4))((-5L), (VECTOR(int16_t, 2))((-5L), 0L), 0L), 0L, (-5L), 0L, (VECTOR(int16_t, 2))((-5L), 0L), (VECTOR(int16_t, 2))((-5L), 0L), (-5L), 0L, (-5L), 0L);
                VECTOR(int32_t, 8) l_774 = (VECTOR(int32_t, 8))((-10L), (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 0x0422B9F1L), 0x0422B9F1L), 0x0422B9F1L, (-10L), 0x0422B9F1L);
                uint16_t l_775 = 0x3F2DL;
                int32_t l_776 = (-5L);
                VECTOR(int32_t, 4) l_777 = (VECTOR(int32_t, 4))(0x0FF1E1DFL, (VECTOR(int32_t, 2))(0x0FF1E1DFL, 0x1E47385BL), 0x1E47385BL);
                VECTOR(int16_t, 16) l_778 = (VECTOR(int16_t, 16))(0x591CL, (VECTOR(int16_t, 4))(0x591CL, (VECTOR(int16_t, 2))(0x591CL, 0x7AC9L), 0x7AC9L), 0x7AC9L, 0x591CL, 0x7AC9L, (VECTOR(int16_t, 2))(0x591CL, 0x7AC9L), (VECTOR(int16_t, 2))(0x591CL, 0x7AC9L), 0x591CL, 0x7AC9L, 0x591CL, 0x7AC9L);
                VECTOR(int32_t, 8) l_779 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                VECTOR(int32_t, 8) l_780 = (VECTOR(int32_t, 8))(0x0CFDBF2BL, (VECTOR(int32_t, 4))(0x0CFDBF2BL, (VECTOR(int32_t, 2))(0x0CFDBF2BL, (-5L)), (-5L)), (-5L), 0x0CFDBF2BL, (-5L));
                VECTOR(int16_t, 4) l_781 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-7L)), (-7L));
                VECTOR(uint16_t, 4) l_782 = (VECTOR(uint16_t, 4))(0x6279L, (VECTOR(uint16_t, 2))(0x6279L, 0xDE3BL), 0xDE3BL);
                int32_t l_783 = 0x6F24DC5BL;
                VECTOR(int32_t, 2) l_784 = (VECTOR(int32_t, 2))(0L, (-1L));
                VECTOR(int32_t, 4) l_785 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L);
                int16_t l_786 = 0x3009L;
                int32_t l_787[4][6][9] = {{{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L}},{{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L}},{{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L}},{{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L},{0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L,0x0EC166D7L,0x0EC166D7L,0x53147538L,0x4A4F3BA1L,0x53147538L}}};
                uint8_t l_788[10][8][3] = {{{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL}},{{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL}},{{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL}},{{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL}},{{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL}},{{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL}},{{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL}},{{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL}},{{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL}},{{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL},{9UL,0UL,0UL}}};
                VECTOR(int32_t, 2) l_789 = (VECTOR(int32_t, 2))(0x6E0A5450L, (-1L));
                VECTOR(int32_t, 4) l_790 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 5L), 5L);
                VECTOR(uint32_t, 4) l_791 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x1FD6C5B0L), 0x1FD6C5B0L);
                int64_t l_792[6] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
                int16_t l_793 = 0x77BAL;
                uint32_t l_794 = 0x800D7C19L;
                int64_t l_795 = 0L;
                int16_t l_796 = 0L;
                int i, j, k;
                if (((VECTOR(int32_t, 16))(l_742.xwzxwywzyxyyyyyy)).s9)
                { /* block id: 334 */
                    uint32_t l_743 = 0x8AF37024L;
                    if (l_743)
                    { /* block id: 335 */
                        uint16_t l_744 = 65531UL;
                        int32_t l_748 = 0x40EC5F8EL;
                        int32_t *l_747 = &l_748;
                        struct S0 l_749 = {0x6D4BAFC4L,1UL,0xE368DCC1L,0x6D03826B864951EDL,0x6F7EL,4294967295UL,0L};/* VOLATILE GLOBAL l_749 */
                        struct S0 l_750 = {-1L,0x46959230FC933B7BL,0xE4B958D1L,18446744073709551615UL,0x1C56L,4294967294UL,0x2CAF64DDL};/* VOLATILE GLOBAL l_750 */
                        l_742.w ^= 0x22637B0EL;
                        --l_744;
                        l_747 = (void*)0;
                        l_750 = l_749;
                    }
                    else
                    { /* block id: 340 */
                        int8_t l_753 = 6L;
                        int8_t *l_752[5];
                        int8_t **l_751 = &l_752[1];
                        uint8_t l_754 = 0xF1L;
                        int32_t *l_755 = (void*)0;
                        int i;
                        for (i = 0; i < 5; i++)
                            l_752[i] = &l_753;
                        l_751 = l_751;
                        l_755 = (l_754 , l_755);
                    }
                }
                else
                { /* block id: 344 */
                    uint32_t l_756 = 0x72D2A599L;
                    uint8_t l_759 = 6UL;
                    l_756++;
                    l_759--;
                }
                l_796 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0x25422D74L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_762.s15)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(0x1B507D62L, 0x0E021D22L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_763.xx)))), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((-5L), l_764, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))((-1L), l_765.y, 0x7695815DL, (l_776 |= (l_766 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_767.xx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_768.ywyw)).lo)), ((VECTOR(int32_t, 4))(l_769.zwxy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_770.xy)))).yyxxyxxx)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_771.xxxy)), 0x063C2213L, l_772, 0x0C95F635L, (-3L))))))).s0d)), ((VECTOR(int32_t, 2))(0x0D71A331L, (-4L))), (-8L), (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_773.s4c)))), 3L, 4L)).x , (l_775 = ((VECTOR(int32_t, 8))(l_774.s07534434)).s4)), 6L, 6L)).sc)), 1L, ((VECTOR(int32_t, 4))(l_777.xwxx)).w, 0x7AE64C24L, 7L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(l_778.s402c)).zxwxxxwx, ((VECTOR(uint16_t, 2))(0x6716L, 0xF8A5L)).xxyxyyyx))))))).s1d, ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_779.s21)))).yyxy, ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_780.s4400070357616413)).lo, ((VECTOR(int32_t, 2))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_781.wy)), 0x04B7L, 0x7B27L)).hi, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(l_782.yyyw)).lo))))).xyyyxxyxyxyyyxxx)).s4d))).yxxyyyyx, ((VECTOR(int32_t, 8))(l_783, 0L, ((VECTOR(int32_t, 4))(l_784.yyyx)), 0L, (-1L)))))).even))).odd))).xyxxyyyx, ((VECTOR(int32_t, 2))((-1L), 0x50BC9458L)).xyxyxyyx, ((VECTOR(int32_t, 4))(l_785.xxxy)).xwwxywzw))), (l_787[1][5][1] = l_786), (-1L), l_788[8][6][2], ((VECTOR(int32_t, 16))(l_789.yyyyxyyxxyxxyxyx)).se, (-5L), (-1L))).sbe)), ((VECTOR(int32_t, 2))(1L, 0x53C833DBL)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_790.xxwy)).lo)).xyyy)), 1L, (-7L), 0x654504F1L, 0x55A53642L, ((VECTOR(int32_t, 4))(6L)))).s1d, ((VECTOR(int32_t, 2))((-2L))), ((VECTOR(int32_t, 2))(0x26C843B3L))))), l_791.y, 0x5C140069L, l_792[4], (-7L), 0x34808B45L, 8L, 5L, 1L, 0x499CEBC6L, 1L)).s6e)))).hi, 0L, l_793, ((VECTOR(int32_t, 2))(0L)), 0L)), 0x6DD6B62CL, l_794, l_795, ((VECTOR(int32_t, 2))(0x1E2787ADL)), 0x7C708F24L, (-9L))))).sa;
                if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-4L), 1L)))).even)
                { /* block id: 352 */
                    VECTOR(int32_t, 8) l_797 = (VECTOR(int32_t, 8))(0x5DDEC09DL, (VECTOR(int32_t, 4))(0x5DDEC09DL, (VECTOR(int32_t, 2))(0x5DDEC09DL, (-8L)), (-8L)), (-8L), 0x5DDEC09DL, (-8L));
                    VECTOR(int32_t, 16) l_798 = (VECTOR(int32_t, 16))(0x101D875EL, (VECTOR(int32_t, 4))(0x101D875EL, (VECTOR(int32_t, 2))(0x101D875EL, 0L), 0L), 0L, 0x101D875EL, 0L, (VECTOR(int32_t, 2))(0x101D875EL, 0L), (VECTOR(int32_t, 2))(0x101D875EL, 0L), 0x101D875EL, 0L, 0x101D875EL, 0L);
                    VECTOR(int32_t, 16) l_799 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x0594BD9BL), 0x0594BD9BL), 0x0594BD9BL, 1L, 0x0594BD9BL, (VECTOR(int32_t, 2))(1L, 0x0594BD9BL), (VECTOR(int32_t, 2))(1L, 0x0594BD9BL), 1L, 0x0594BD9BL, 1L, 0x0594BD9BL);
                    VECTOR(int32_t, 16) l_800 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x0AEEE2FFL), 0x0AEEE2FFL), 0x0AEEE2FFL, (-1L), 0x0AEEE2FFL, (VECTOR(int32_t, 2))((-1L), 0x0AEEE2FFL), (VECTOR(int32_t, 2))((-1L), 0x0AEEE2FFL), (-1L), 0x0AEEE2FFL, (-1L), 0x0AEEE2FFL);
                    uint32_t l_801 = 4294967287UL;
                    VECTOR(int32_t, 2) l_802 = (VECTOR(int32_t, 2))((-1L), 0x4CF6A0A8L);
                    VECTOR(int32_t, 2) l_803 = (VECTOR(int32_t, 2))(0L, 0x0B622571L);
                    int32_t l_804 = (-1L);
                    VECTOR(int32_t, 2) l_805 = (VECTOR(int32_t, 2))(0x7B191901L, 1L);
                    VECTOR(int32_t, 2) l_806 = (VECTOR(int32_t, 2))(0x551F8D3CL, 0x0C026557L);
                    uint32_t l_807 = 4294967293UL;
                    int8_t l_808 = 1L;
                    int8_t l_809[9][10][1] = {{{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L}},{{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L}},{{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L}},{{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L}},{{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L}},{{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L}},{{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L}},{{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L}},{{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L},{0x48L}}};
                    int64_t l_832 = 0x11D36B79FC0D6437L;
                    uint32_t *l_834 = &l_801;
                    uint32_t **l_833 = &l_834;
                    uint32_t **l_835 = &l_834;
                    int i, j, k;
                    l_779.s4 = ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_797.s22030336)).s64, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(l_798.scc0c)), ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(l_799.sf3)).yyxyxxxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_800.s5de4)), 2L, 0L, 3L, 0L)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x619F1541L, 0x1A8EE3CAL)), 0x0AA410BBL, 8L)).xyywxxxw))).lo, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))((l_774.s5 = l_801), ((VECTOR(int32_t, 2))(l_802.xy)), 1L)).lo, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_803.yxxx)).xxwwzxyy)).s32))).yyyyyxxyyyyyxxxy)).sbe43))).hi, ((VECTOR(int32_t, 2))((-1L), 5L))))).yyxx)).yyzxyywzwzwzzzxw, (int32_t)l_804, (int32_t)((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_805.xy)), (-5L), 0L)).z))).sd0)).yyyx, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_806.xxxyyyxyyyyyxyyy)).s72)), (-9L), 0x786F62E7L)).ywywyzwzzxwyyzxz)))).s8a28))).w;
                    if (((l_807 , l_808) , (l_779.s7 ^= l_809[8][8][0])))
                    { /* block id: 356 */
                        union U1 l_811 = {3L};/* VOLATILE GLOBAL l_811 */
                        union U1 *l_810 = &l_811;
                        union U1 *l_812 = &l_811;
                        struct S0 l_813[2][5][7] = {{{{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{3L,4UL,0x3DC78BFBL,0x20312577D64BE20FL,0x78F4L,4294967293UL,1L},{0x196F66B4L,0x5A97D4984511A45FL,0x9D949F6AL,6UL,1L,1UL,1L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L},{1L,18446744073709551615UL,0x8FB2BBCCL,0UL,-7L,0UL,0x303A2F16L},{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L}},{{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{3L,4UL,0x3DC78BFBL,0x20312577D64BE20FL,0x78F4L,4294967293UL,1L},{0x196F66B4L,0x5A97D4984511A45FL,0x9D949F6AL,6UL,1L,1UL,1L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L},{1L,18446744073709551615UL,0x8FB2BBCCL,0UL,-7L,0UL,0x303A2F16L},{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L}},{{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{3L,4UL,0x3DC78BFBL,0x20312577D64BE20FL,0x78F4L,4294967293UL,1L},{0x196F66B4L,0x5A97D4984511A45FL,0x9D949F6AL,6UL,1L,1UL,1L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L},{1L,18446744073709551615UL,0x8FB2BBCCL,0UL,-7L,0UL,0x303A2F16L},{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L}},{{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{3L,4UL,0x3DC78BFBL,0x20312577D64BE20FL,0x78F4L,4294967293UL,1L},{0x196F66B4L,0x5A97D4984511A45FL,0x9D949F6AL,6UL,1L,1UL,1L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L},{1L,18446744073709551615UL,0x8FB2BBCCL,0UL,-7L,0UL,0x303A2F16L},{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L}},{{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{3L,4UL,0x3DC78BFBL,0x20312577D64BE20FL,0x78F4L,4294967293UL,1L},{0x196F66B4L,0x5A97D4984511A45FL,0x9D949F6AL,6UL,1L,1UL,1L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L},{1L,18446744073709551615UL,0x8FB2BBCCL,0UL,-7L,0UL,0x303A2F16L},{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L}}},{{{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{3L,4UL,0x3DC78BFBL,0x20312577D64BE20FL,0x78F4L,4294967293UL,1L},{0x196F66B4L,0x5A97D4984511A45FL,0x9D949F6AL,6UL,1L,1UL,1L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L},{1L,18446744073709551615UL,0x8FB2BBCCL,0UL,-7L,0UL,0x303A2F16L},{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L}},{{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{3L,4UL,0x3DC78BFBL,0x20312577D64BE20FL,0x78F4L,4294967293UL,1L},{0x196F66B4L,0x5A97D4984511A45FL,0x9D949F6AL,6UL,1L,1UL,1L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L},{1L,18446744073709551615UL,0x8FB2BBCCL,0UL,-7L,0UL,0x303A2F16L},{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L}},{{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{3L,4UL,0x3DC78BFBL,0x20312577D64BE20FL,0x78F4L,4294967293UL,1L},{0x196F66B4L,0x5A97D4984511A45FL,0x9D949F6AL,6UL,1L,1UL,1L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L},{1L,18446744073709551615UL,0x8FB2BBCCL,0UL,-7L,0UL,0x303A2F16L},{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L}},{{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{3L,4UL,0x3DC78BFBL,0x20312577D64BE20FL,0x78F4L,4294967293UL,1L},{0x196F66B4L,0x5A97D4984511A45FL,0x9D949F6AL,6UL,1L,1UL,1L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L},{1L,18446744073709551615UL,0x8FB2BBCCL,0UL,-7L,0UL,0x303A2F16L},{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L}},{{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{3L,4UL,0x3DC78BFBL,0x20312577D64BE20FL,0x78F4L,4294967293UL,1L},{0x196F66B4L,0x5A97D4984511A45FL,0x9D949F6AL,6UL,1L,1UL,1L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L},{1L,18446744073709551615UL,0x8FB2BBCCL,0UL,-7L,0UL,0x303A2F16L},{0x42D0256BL,0xCD8015F55DD6E38AL,1UL,18446744073709551615UL,0x157CL,0xC704206FL,8L},{-2L,4UL,0xECD6560CL,1UL,5L,0x08C53E8DL,0L}}}};
                        uint32_t l_814 = 0x69ECA158L;
                        int32_t l_815 = 0x5A88F357L;
                        int i, j, k;
                        l_812 = l_810;
                        l_813[1][1][4] = l_813[0][3][2];
                        l_762.s6 = (l_814 , l_815);
                    }
                    else
                    { /* block id: 360 */
                        VECTOR(int32_t, 16) l_816 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 9L), 9L), 9L, (-1L), 9L, (VECTOR(int32_t, 2))((-1L), 9L), (VECTOR(int32_t, 2))((-1L), 9L), (-1L), 9L, (-1L), 9L);
                        VECTOR(int32_t, 4) l_817 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
                        VECTOR(int32_t, 4) l_818 = (VECTOR(int32_t, 4))(0x239FAD31L, (VECTOR(int32_t, 2))(0x239FAD31L, 0x691A5940L), 0x691A5940L);
                        int32_t *l_819 = (void*)0;
                        int i;
                        l_789.x |= (l_770.y &= (-1L));
                        l_767.z &= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_816.s34)))))), ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 8))(0x63BA6920L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_817.zz)))).xyxy)))), 7L, 0x102109CCL, 0x4ADF3B0AL)).s0257727466572056, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_818.xz)))).xxyxxyxxxxxyyxyx))).s57))).xyxxyyxxxxyyxyxx)).sd;
                        l_819 = (void*)0;
                    }
                    if ((l_770.y = 0x1B7FB881L))
                    { /* block id: 367 */
                        struct S0 l_820 = {-7L,0x6337633FCFA3CF5CL,0xA947501DL,0xAF9349EC64927812L,0x4D2CL,0xF76AE1CFL,0x39C73124L};/* VOLATILE GLOBAL l_820 */
                        struct S0 l_821[2][10][6] = {{{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}}},{{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}},{{-1L,18446744073709551614UL,4294967295UL,18446744073709551609UL,0x4C19L,0x1C348EE5L,0x6CA64F08L},{1L,0xB82680A3D25E3682L,0UL,7UL,0x1815L,4294967293UL,-8L},{-8L,0x895D8C873722D3F5L,0xDCD84ADBL,0x2EAE24EB508C1B59L,-2L,0x4B7A6F34L,8L},{5L,18446744073709551615UL,0x8531230CL,0x0D26999F4ED6A246L,0x7DDEL,0x4DA94D3DL,-1L},{0x73151B5FL,1UL,0xE09961BFL,18446744073709551611UL,1L,0xBDB6E391L,0x6239C008L},{1L,0x1F6FBE7FB9FF591BL,1UL,18446744073709551615UL,0x3917L,1UL,-1L}}}};
                        int i, j, k;
                        l_821[0][7][3] = l_820;
                    }
                    else
                    { /* block id: 369 */
                        int32_t l_822 = (-1L);
                        int32_t l_823[6] = {0x37F15E3AL,1L,0x37F15E3AL,0x37F15E3AL,1L,0x37F15E3AL};
                        uint16_t l_824 = 0UL;
                        int32_t *l_827[7];
                        int32_t *l_828[7][4][3] = {{{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]}},{{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]}},{{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]}},{{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]}},{{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]}},{{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]}},{{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]},{&l_823[4],(void*)0,&l_823[4]}}};
                        uint16_t l_829 = 65535UL;
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                            l_827[i] = &l_823[1];
                        ++l_824;
                        l_828[6][0][0] = (l_827[1] = (void*)0);
                        l_829++;
                    }
                    l_835 = (l_832 , l_833);
                }
                else
                { /* block id: 376 */
                    uint32_t l_836 = 0UL;
                    int32_t l_837 = 0x39C00308L;
                    if ((l_837 = (l_836 = 0x2D3AF3F5L)))
                    { /* block id: 379 */
                        int32_t l_839 = 5L;
                        int32_t *l_838[9][7] = {{&l_839,&l_839,&l_839,&l_839,(void*)0,&l_839,&l_839},{&l_839,&l_839,&l_839,&l_839,(void*)0,&l_839,&l_839},{&l_839,&l_839,&l_839,&l_839,(void*)0,&l_839,&l_839},{&l_839,&l_839,&l_839,&l_839,(void*)0,&l_839,&l_839},{&l_839,&l_839,&l_839,&l_839,(void*)0,&l_839,&l_839},{&l_839,&l_839,&l_839,&l_839,(void*)0,&l_839,&l_839},{&l_839,&l_839,&l_839,&l_839,(void*)0,&l_839,&l_839},{&l_839,&l_839,&l_839,&l_839,(void*)0,&l_839,&l_839},{&l_839,&l_839,&l_839,&l_839,(void*)0,&l_839,&l_839}};
                        int32_t *l_840 = &l_839;
                        int32_t *l_841 = &l_839;
                        int32_t *l_842 = &l_839;
                        int i, j;
                        l_840 = l_838[8][2];
                        l_842 = l_841;
                    }
                    else
                    { /* block id: 382 */
                        int8_t l_843 = 0x22L;
                        uint16_t l_844 = 0xAC41L;
                        l_844--;
                    }
                    for (l_836 = 15; (l_836 <= 46); l_836 = safe_add_func_int16_t_s_s(l_836, 1))
                    { /* block id: 387 */
                        int32_t l_850 = (-5L);
                        int32_t *l_849[4][4][5] = {{{&l_850,&l_850,(void*)0,&l_850,&l_850},{&l_850,&l_850,(void*)0,&l_850,&l_850},{&l_850,&l_850,(void*)0,&l_850,&l_850},{&l_850,&l_850,(void*)0,&l_850,&l_850}},{{&l_850,&l_850,(void*)0,&l_850,&l_850},{&l_850,&l_850,(void*)0,&l_850,&l_850},{&l_850,&l_850,(void*)0,&l_850,&l_850},{&l_850,&l_850,(void*)0,&l_850,&l_850}},{{&l_850,&l_850,(void*)0,&l_850,&l_850},{&l_850,&l_850,(void*)0,&l_850,&l_850},{&l_850,&l_850,(void*)0,&l_850,&l_850},{&l_850,&l_850,(void*)0,&l_850,&l_850}},{{&l_850,&l_850,(void*)0,&l_850,&l_850},{&l_850,&l_850,(void*)0,&l_850,&l_850},{&l_850,&l_850,(void*)0,&l_850,&l_850},{&l_850,&l_850,(void*)0,&l_850,&l_850}}};
                        int32_t *l_851[1];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_851[i] = &l_850;
                        l_851[0] = l_849[0][2][0];
                    }
                }
            }
            l_857[4][1] = ((l_853--) , l_856);
            l_859--;
            unsigned int result = 0;
            result += l_739;
            result += l_852.w;
            result += l_852.z;
            result += l_852.y;
            result += l_852.x;
            result += l_853;
            result += l_858;
            result += l_859;
            atomic_add(&p_1242->l_special_values[3], result);
        }
        else
        { /* block id: 395 */
            (1 + 1);
        }
        l_890 = ((safe_rshift_func_int8_t_s_s(((p_1242->g_587.f4 || (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_868.xy)))).yxxyxyxxxyxyxxxy)))).sb , (p_1242->g_436.f5 , (((safe_mod_func_uint16_t_u_u((((((**l_717) = (((0x01D7A9CBL > (p_1242->g_220[0] = ((safe_mul_func_uint8_t_u_u((l_873 = FAKE_DIVERGE(p_1242->group_2_offset, get_group_id(2), 10)), (l_874 != ((*l_875) = &p_1242->g_232)))) | (safe_mul_func_uint16_t_u_u((**p_1242->g_258), ((*l_880) = ((l_879 = l_879) == &p_1242->g_259))))))) > ((safe_rshift_func_int8_t_s_s(((((((p_1242->g_500.s7 > 0xC5L) , l_883) == &p_1242->g_40) >= l_884) , p_1242->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1242->tid, 19))]) & p_1242->g_337.f1), l_884)) < 0UL)) >= GROUP_DIVERGE(0, 1))) > l_884) , 0x7AF731DEL) , 65534UL), 0x7338L)) || (*p_1242->g_259)) , l_885))) != l_886), p_1242->g_40)) & p_1242->g_363.f6), l_884))) && l_888), p_1242->g_390.f0)) == l_889);
        for (p_1242->g_175 = (-8); (p_1242->g_175 <= (-2)); p_1242->g_175 = safe_add_func_uint16_t_u_u(p_1242->g_175, 9))
        { /* block id: 407 */
            int32_t l_893 = 0L;
            int8_t *l_901 = (void*)0;
            int8_t **l_900 = &l_901;
            int8_t ***l_902 = &l_900;
            int32_t l_942 = 0x26CDD421L;
            int32_t l_943 = 0x4ABB3A94L;
            int32_t l_944 = 1L;
            l_884 = (l_893 , l_893);
            if (((((void*)0 == &p_1242->g_587) > (l_893 = (safe_mod_func_int64_t_s_s(((-8L) >= (p_1242->g_898 != ((*l_902) = l_900))), (~0x2152ADFA57051FB2L))))) , ((VECTOR(int32_t, 16))(p_1242->g_903.s83ed827868372ffd)).s1))
            { /* block id: 411 */
                int32_t ****l_911 = &l_710;
                int32_t l_937 = 0x0D2BFBB0L;
                VECTOR(int32_t, 8) l_938 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 6L), 6L), 6L, 0L, 6L);
                uint8_t *l_957 = &l_890;
                VECTOR(uint8_t, 8) l_963 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xBAL), 0xBAL), 0xBAL, 255UL, 0xBAL);
                int i;
                if (p_1242->g_904)
                    break;
                for (p_1242->g_363.f2 = 0; (p_1242->g_363.f2 <= 38); p_1242->g_363.f2 = safe_add_func_uint8_t_u_u(p_1242->g_363.f2, 3))
                { /* block id: 415 */
                    int32_t l_935 = 0x0E152D20L;
                    int32_t l_939 = 2L;
                    VECTOR(int32_t, 2) l_940 = (VECTOR(int32_t, 2))(6L, 0x7477D769L);
                    uint32_t l_948 = 0x900F984DL;
                    int i;
                    for (l_888 = 0; (l_888 < 24); l_888++)
                    { /* block id: 418 */
                        if (l_889)
                            break;
                    }
                    for (p_1242->g_675 = 0; (p_1242->g_675 != 21); p_1242->g_675 = safe_add_func_int64_t_s_s(p_1242->g_675, 3))
                    { /* block id: 423 */
                        uint8_t l_932[5][8] = {{1UL,0x25L,1UL,0xA5L,0x25L,0xA5L,1UL,0x25L},{1UL,0x25L,1UL,0xA5L,0x25L,0xA5L,1UL,0x25L},{1UL,0x25L,1UL,0xA5L,0x25L,0xA5L,1UL,0x25L},{1UL,0x25L,1UL,0xA5L,0x25L,0xA5L,1UL,0x25L},{1UL,0x25L,1UL,0xA5L,0x25L,0xA5L,1UL,0x25L}};
                        int32_t ****l_936 = &l_710;
                        int i, j;
                        atomic_add(&p_1242->l_atomic_reduction[0], ((0x6672L || (l_911 != ((GROUP_DIVERGE(0, 1) > (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((safe_lshift_func_int8_t_s_u((l_873 == (safe_mul_func_int16_t_s_s((0x5DC2L ^ l_889), (FAKE_DIVERGE(p_1242->global_1_offset, get_global_id(1), 10) ^ (((safe_rshift_func_uint16_t_u_u((l_884 = (safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u(FAKE_DIVERGE(p_1242->local_0_offset, get_local_id(0), 10), l_931)) , l_893), l_932[1][7])), (safe_div_func_int32_t_s_s((l_888 == l_935), 0x4D1FC109L))))), l_935)) < l_932[2][5]) < 8L))))), 2)))), l_893)), FAKE_DIVERGE(p_1242->local_0_offset, get_local_id(0), 10)))) , l_936))) , p_1242->g_255.s5) + get_linear_global_id());
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1242->v_collective += p_1242->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        return p_1242->g_587.f0;
                    }
                    if (l_884)
                        break;
                    --l_948;
                }
                p_1242->g_553.f6 = (safe_sub_func_int8_t_s_s((l_941 = (FAKE_DIVERGE(p_1242->local_2_offset, get_local_id(2), 10) & (safe_add_func_uint8_t_u_u(((*l_957) = (safe_rshift_func_int16_t_s_s((&p_1242->g_220[2] != &p_1242->g_220[0]), l_942))), (safe_rshift_func_uint16_t_u_s(0xFC9BL, (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_962.s2106)).lo)).hi, ((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 4))(rotate(((VECTOR(uint8_t, 2))(9UL, 255UL)).xyyx, ((VECTOR(uint8_t, 2))(l_963.s67)).yyyy))).yywwzyzy, ((VECTOR(uint8_t, 16))(p_1242->g_964.s1ccea7dd301866dd)).even))).s4)))))))), l_884));
                (*p_1242->g_965) = &l_887;
            }
            else
            { /* block id: 435 */
                uint16_t l_968 = 0x7678L;
                int32_t l_969[8][3][5] = {{{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L}},{{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L}},{{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L}},{{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L}},{{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L}},{{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L}},{{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L}},{{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L},{(-3L),(-1L),0x239B58B6L,0x5A9653A7L,0L}}};
                int8_t *l_982 = &p_1242->g_213;
                uint32_t *l_987 = &p_1242->g_663.f2;
                int32_t l_988 = 0x6884A6E1L;
                int i, j, k;
                l_969[4][1][4] &= l_968;
                l_988 |= (((l_873 <= ((l_889 ^ (((*l_981) = (safe_sub_func_int64_t_s_s((l_969[4][1][4] ^ FAKE_DIVERGE(p_1242->local_2_offset, get_local_id(2), 10)), (((safe_sub_func_uint64_t_u_u(((*l_883)--), (safe_lshift_func_int16_t_s_u((((VECTOR(int32_t, 4))((-5L), ((VECTOR(int32_t, 2))(p_1242->g_978.yx)), 1L)).x ^ (&l_900 == (((*l_987) = (safe_mod_func_uint64_t_u_u((((*l_900) = l_981) == l_982), ((safe_mod_func_int32_t_s_s(l_969[4][1][4], 0x77393219L)) & (((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(p_1242->g_985.s2a)))).xyxyxxyy)).hi)).y && (safe_unary_minus_func_uint8_t_u(l_969[1][2][3]))) >= 0L) > l_942))))) , &p_1242->g_898))), l_968)))) <= l_969[4][1][4]) && FAKE_DIVERGE(p_1242->local_0_offset, get_local_id(0), 10))))) & l_969[4][1][4])) & p_1242->g_404.s7)) == 0x23L) >= l_962.s4);
                if (l_893)
                    break;
            }
        }
        for (p_1242->g_390.f1 = (-15); (p_1242->g_390.f1 == 14); p_1242->g_390.f1++)
        { /* block id: 447 */
            uint32_t ***l_991 = (void*)0;
            uint32_t ***l_992[3];
            int i;
            for (i = 0; i < 3; i++)
                l_992[i] = &l_875;
            p_1242->g_993 = (void*)0;
        }
    }
    return p_1242->g_390.f5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_363.f0 p_1242->g_436.f1 p_1242->g_698 p_1242->g_3 p_1242->g_412 p_1242->g_413
 * writes: p_1242->g_3
 */
int32_t * func_16(int32_t * p_17, int32_t * p_18, int32_t * p_19, int32_t * p_20, struct S2 * p_1242)
{ /* block id: 299 */
    uint32_t l_686 = 0x52B2671CL;
    VECTOR(int32_t, 2) l_697 = (VECTOR(int32_t, 2))(8L, 0x261C91F7L);
    int32_t l_699[6] = {0x70BEEA81L,0x70BEEA81L,0x70BEEA81L,0x70BEEA81L,0x70BEEA81L,0x70BEEA81L};
    int i;
    (*p_18) = (safe_rshift_func_uint16_t_u_s(GROUP_DIVERGE(1, 1), 10));
    l_699[3] &= (safe_mul_func_uint8_t_u_u(0xBAL, ((safe_mod_func_uint32_t_u_u(l_686, (safe_lshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((+1L), 9)) || ((l_686 == (safe_rshift_func_int8_t_s_s(1L, l_686))) >= p_1242->g_363.f0)), (safe_lshift_func_uint8_t_u_s(p_1242->g_436.f1, 7)))) || ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(0x6D0D6F38L, 0x750F193DL, ((VECTOR(int32_t, 2))(l_697.yx)), 0x4D6EBC2CL, ((l_697.x , p_1242->g_698) , (*p_19)), 1L, 0x3A31FAA8L)))).s4556621673465672, ((VECTOR(int32_t, 16))(0x6FC95B56L))))))).odd, ((VECTOR(int32_t, 8))(0x3370E272L))))).s0), 6)))) < l_686)));
    return (*p_1242->g_412);
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_171 p_1242->g_190 p_1242->g_208 p_1242->g_213 p_1242->g_175 p_1242->g_38 p_1242->g_3 p_1242->g_comm_values p_1242->g_209 p_1242->g_2 p_1242->g_11 p_1242->g_255 p_1242->g_258 p_1242->g_40 p_1242->g_253 p_1242->g_252 p_1242->g_259 p_1242->g_260 p_1242->g_312 p_1242->l_comm_values p_1242->g_220 p_1242->g_322 p_1242->g_232 p_1242->g_363 p_1242->g_337.f6 p_1242->g_337.f2 p_1242->g_337.f0 p_1242->g_382 p_1242->g_383 p_1242->g_399 p_1242->g_404 p_1242->g_412 p_1242->g_436 p_1242->g_453 p_1242->g_390.f2 p_1242->g_413 p_1242->g_459 p_1242->g_462 p_1242->g_465 p_1242->g_358 p_1242->g_544 p_1242->g_553 p_1242->g_564 p_1242->g_587 p_1242->g_490 p_1242->g_610 p_1242->g_390.f1 p_1242->g_634 p_1242->g_663 p_1242->g_675
 * writes: p_1242->g_171 p_1242->g_175 p_1242->g_213 p_1242->g_220 p_1242->g_232 p_1242->g_252 p_1242->g_253 p_1242->g_2 p_1242->g_255 p_1242->g_40 p_1242->g_38 p_1242->l_comm_values p_1242->g_322 p_1242->g_358 p_1242->g_363 p_1242->g_337.f6 p_1242->g_337.f2 p_1242->g_390 p_1242->g_413 p_1242->g_453 p_1242->g_399 p_1242->g_337.f0 p_1242->g_544 p_1242->g_490 p_1242->g_209 p_1242->g_612 p_1242->g_553 p_1242->g_459.f0 p_1242->g_675
 */
int32_t * func_22(uint16_t  p_23, int8_t  p_24, int32_t * p_25, uint16_t  p_26, struct S2 * p_1242)
{ /* block id: 18 */
    int16_t *l_174 = &p_1242->g_175;
    VECTOR(uint32_t, 4) l_191 = (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4UL), 4UL);
    uint8_t *l_196 = &p_1242->g_38[2];
    uint64_t *l_197 = (void*)0;
    uint32_t *l_671[6][9][4] = {{{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0}},{{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0}},{{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0}},{{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0}},{{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0}},{{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0},{&p_1242->g_220[0],(void*)0,&p_1242->g_220[2],(void*)0}}};
    int32_t l_672 = (-1L);
    int32_t l_673 = (-3L);
    uint8_t *l_674 = &p_1242->g_675;
    int32_t **l_676 = &p_1242->g_413;
    int32_t *l_678 = &p_1242->g_553.f0;
    int32_t **l_677 = &l_678;
    int32_t *l_679 = &p_1242->g_337.f6;
    int i, j, k;
    if ((atomic_inc(&p_1242->g_atomic_input[51 * get_linear_group_id() + 48]) == 1))
    { /* block id: 20 */
        int32_t l_41 = 0x2955E316L;
        uint16_t l_166 = 0xBBA9L;
        struct S0 l_167 = {0L,0xF727E752563AE6E0L,1UL,0xCE56ED2C106F47B0L,0x098BL,4294967295UL,5L};/* VOLATILE GLOBAL l_167 */
        struct S0 l_168 = {0x6F68BACAL,0UL,4294967294UL,0x152C7461230A905DL,-9L,4294967295UL,-1L};/* VOLATILE GLOBAL l_168 */
        for (l_41 = 0; (l_41 >= (-30)); l_41--)
        { /* block id: 23 */
            uint64_t l_44 = 0xDC75DF642D949044L;
            uint32_t l_45 = 4UL;
            int16_t l_46 = 0x1CE3L;
            int8_t l_47 = (-1L);
            uint8_t l_48[5] = {255UL,255UL,255UL,255UL,255UL};
            uint32_t l_49 = 4294967295UL;
            uint32_t l_50[1][4] = {{0xE1C21029L,0xE1C21029L,0xE1C21029L,0xE1C21029L}};
            int i, j;
            l_45 = l_44;
            l_47 |= l_46;
            l_50[0][0] ^= (l_49 = l_48[1]);
            for (l_50[0][0] = (-17); (l_50[0][0] <= 31); ++l_50[0][0])
            { /* block id: 30 */
                int32_t l_53 = 0x4007DFDCL;
                for (l_53 = 0; (l_53 != (-18)); l_53--)
                { /* block id: 33 */
                    int16_t l_56 = 0L;
                    uint64_t l_89 = 0x906C131537F146A4L;
                    int64_t l_107 = 0x3F8350F044E6814EL;
                    int64_t l_108 = 0x1F1BF98911890E32L;
                    uint32_t l_109 = 6UL;
                    union U1 l_110 = {1L};/* VOLATILE GLOBAL l_110 */
                    VECTOR(int8_t, 2) l_111 = (VECTOR(int8_t, 2))(1L, 0x71L);
                    uint32_t l_112[4][1] = {{0xD917EEAFL},{0xD917EEAFL},{0xD917EEAFL},{0xD917EEAFL}};
                    int8_t l_113 = 0x7BL;
                    int i, j;
                    if (l_56)
                    { /* block id: 34 */
                        int32_t l_58 = 0x72060300L;
                        int32_t *l_57 = &l_58;
                        int32_t *l_59 = &l_58;
                        int32_t *l_60[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        uint64_t l_61 = 18446744073709551615UL;
                        uint16_t l_62 = 0x7E3BL;
                        int32_t l_63[7][5] = {{0x4439D3FDL,0x772A6DD7L,0x4439D3FDL,0x4439D3FDL,0x772A6DD7L},{0x4439D3FDL,0x772A6DD7L,0x4439D3FDL,0x4439D3FDL,0x772A6DD7L},{0x4439D3FDL,0x772A6DD7L,0x4439D3FDL,0x4439D3FDL,0x772A6DD7L},{0x4439D3FDL,0x772A6DD7L,0x4439D3FDL,0x4439D3FDL,0x772A6DD7L},{0x4439D3FDL,0x772A6DD7L,0x4439D3FDL,0x4439D3FDL,0x772A6DD7L},{0x4439D3FDL,0x772A6DD7L,0x4439D3FDL,0x4439D3FDL,0x772A6DD7L},{0x4439D3FDL,0x772A6DD7L,0x4439D3FDL,0x4439D3FDL,0x772A6DD7L}};
                        VECTOR(int32_t, 4) l_64 = (VECTOR(int32_t, 4))(0x6BC8B8ECL, (VECTOR(int32_t, 2))(0x6BC8B8ECL, 0x22F50FADL), 0x22F50FADL);
                        int64_t l_65 = 0x340BBFB6FEB77EBEL;
                        uint32_t l_66 = 0x858521EBL;
                        int32_t l_67[5][9] = {{(-1L),0x624E94FAL,0x798E375BL,0x3A40B105L,0x798E375BL,0x624E94FAL,(-1L),7L,1L},{(-1L),0x624E94FAL,0x798E375BL,0x3A40B105L,0x798E375BL,0x624E94FAL,(-1L),7L,1L},{(-1L),0x624E94FAL,0x798E375BL,0x3A40B105L,0x798E375BL,0x624E94FAL,(-1L),7L,1L},{(-1L),0x624E94FAL,0x798E375BL,0x3A40B105L,0x798E375BL,0x624E94FAL,(-1L),7L,1L},{(-1L),0x624E94FAL,0x798E375BL,0x3A40B105L,0x798E375BL,0x624E94FAL,(-1L),7L,1L}};
                        int32_t l_68 = 0x2010857BL;
                        int64_t l_69 = (-1L);
                        uint64_t l_70[8][5] = {{0xDB2BF7FA13A89CE6L,0x752EB69FE4373440L,0x06B0045B34FEB13CL,0x752EB69FE4373440L,0xDB2BF7FA13A89CE6L},{0xDB2BF7FA13A89CE6L,0x752EB69FE4373440L,0x06B0045B34FEB13CL,0x752EB69FE4373440L,0xDB2BF7FA13A89CE6L},{0xDB2BF7FA13A89CE6L,0x752EB69FE4373440L,0x06B0045B34FEB13CL,0x752EB69FE4373440L,0xDB2BF7FA13A89CE6L},{0xDB2BF7FA13A89CE6L,0x752EB69FE4373440L,0x06B0045B34FEB13CL,0x752EB69FE4373440L,0xDB2BF7FA13A89CE6L},{0xDB2BF7FA13A89CE6L,0x752EB69FE4373440L,0x06B0045B34FEB13CL,0x752EB69FE4373440L,0xDB2BF7FA13A89CE6L},{0xDB2BF7FA13A89CE6L,0x752EB69FE4373440L,0x06B0045B34FEB13CL,0x752EB69FE4373440L,0xDB2BF7FA13A89CE6L},{0xDB2BF7FA13A89CE6L,0x752EB69FE4373440L,0x06B0045B34FEB13CL,0x752EB69FE4373440L,0xDB2BF7FA13A89CE6L},{0xDB2BF7FA13A89CE6L,0x752EB69FE4373440L,0x06B0045B34FEB13CL,0x752EB69FE4373440L,0xDB2BF7FA13A89CE6L}};
                        int i, j;
                        l_57 = (void*)0;
                        l_60[4] = l_59;
                        l_67[0][7] ^= ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 0x77DD1A1FL)).yxyxxyyy)).s73, ((VECTOR(int32_t, 8))(l_61, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(l_62, l_63[4][1], (-7L), 1L)), ((VECTOR(int32_t, 2))((-6L), 0x53C4A2FBL)).xxxy))).xzzxwxyz, ((VECTOR(int32_t, 8))(l_64.zxwwwwzw))))).s7, 0x79CF818AL, (l_65 , l_66), 0x1C0D400CL, ((VECTOR(int32_t, 2))((-1L), 0x47519AD3L)), 1L)).s23))).lo;
                        ++l_70[3][1];
                    }
                    else
                    { /* block id: 39 */
                        int32_t l_73 = 0x5C57991EL;
                        int8_t l_74 = 0x5FL;
                        int8_t l_75 = 0x19L;
                        uint16_t l_76[9][1][10] = {{{65535UL,0x6262L,0x6262L,65535UL,0x2272L,65533UL,65533UL,0x2272L,65535UL,0x6262L}},{{65535UL,0x6262L,0x6262L,65535UL,0x2272L,65533UL,65533UL,0x2272L,65535UL,0x6262L}},{{65535UL,0x6262L,0x6262L,65535UL,0x2272L,65533UL,65533UL,0x2272L,65535UL,0x6262L}},{{65535UL,0x6262L,0x6262L,65535UL,0x2272L,65533UL,65533UL,0x2272L,65535UL,0x6262L}},{{65535UL,0x6262L,0x6262L,65535UL,0x2272L,65533UL,65533UL,0x2272L,65535UL,0x6262L}},{{65535UL,0x6262L,0x6262L,65535UL,0x2272L,65533UL,65533UL,0x2272L,65535UL,0x6262L}},{{65535UL,0x6262L,0x6262L,65535UL,0x2272L,65533UL,65533UL,0x2272L,65535UL,0x6262L}},{{65535UL,0x6262L,0x6262L,65535UL,0x2272L,65533UL,65533UL,0x2272L,65535UL,0x6262L}},{{65535UL,0x6262L,0x6262L,65535UL,0x2272L,65533UL,65533UL,0x2272L,65535UL,0x6262L}}};
                        struct S0 l_79 = {-7L,0xBEE77D733C455447L,0xFCA48CC9L,18446744073709551615UL,0x1442L,0xF1C2FFF4L,-5L};/* VOLATILE GLOBAL l_79 */
                        struct S0 l_80 = {0x012DD28DL,0x14EF7FEE68117D14L,0UL,1UL,-1L,4294967295UL,0L};/* VOLATILE GLOBAL l_80 */
                        VECTOR(uint32_t, 8) l_81 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0xBABBD54EL), 0xBABBD54EL), 0xBABBD54EL, 0UL, 0xBABBD54EL);
                        uint16_t l_82 = 65527UL;
                        uint8_t l_83[5][8] = {{0UL,0x2FL,253UL,0x2FL,0UL,0UL,0x2FL,253UL},{0UL,0x2FL,253UL,0x2FL,0UL,0UL,0x2FL,253UL},{0UL,0x2FL,253UL,0x2FL,0UL,0UL,0x2FL,253UL},{0UL,0x2FL,253UL,0x2FL,0UL,0UL,0x2FL,253UL},{0UL,0x2FL,253UL,0x2FL,0UL,0UL,0x2FL,253UL}};
                        uint16_t l_84 = 0xAD0BL;
                        int8_t l_85[2];
                        uint64_t l_86 = 0x80E459F6D150EB8EL;
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_85[i] = 4L;
                        --l_76[6][0][9];
                        l_80 = l_79;
                        l_84 ^= ((l_74 &= (((VECTOR(uint32_t, 4))(l_81.s5755)).z , l_82)) , l_83[3][7]);
                        l_86++;
                    }
                    if (l_89)
                    { /* block id: 46 */
                        int32_t l_90 = 0L;
                        int16_t l_91 = 0x6E93L;
                        l_91 ^= l_90;
                    }
                    else
                    { /* block id: 48 */
                        int8_t l_92 = 0L;
                        uint16_t l_93[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                        struct S0 l_95 = {0x69D30BDFL,1UL,0xC6A208CAL,0x2D9FAADC8FC35A00L,1L,0UL,-1L};/* VOLATILE GLOBAL l_95 */
                        struct S0 *l_94 = &l_95;
                        int i;
                        l_93[0] &= l_92;
                        l_94 = (void*)0;
                    }
                    for (l_89 = 8; (l_89 == 24); l_89 = safe_add_func_uint8_t_u_u(l_89, 1))
                    { /* block id: 54 */
                        int32_t l_98 = 0x622502BEL;
                        int64_t l_99 = 3L;
                        struct S0 *l_100 = (void*)0;
                        struct S0 l_102[5] = {{-1L,18446744073709551615UL,9UL,0x4CD61341C8C05660L,0x0D18L,0xFE3DBA41L,-7L},{-1L,18446744073709551615UL,9UL,0x4CD61341C8C05660L,0x0D18L,0xFE3DBA41L,-7L},{-1L,18446744073709551615UL,9UL,0x4CD61341C8C05660L,0x0D18L,0xFE3DBA41L,-7L},{-1L,18446744073709551615UL,9UL,0x4CD61341C8C05660L,0x0D18L,0xFE3DBA41L,-7L},{-1L,18446744073709551615UL,9UL,0x4CD61341C8C05660L,0x0D18L,0xFE3DBA41L,-7L}};
                        struct S0 *l_101 = &l_102[2];
                        uint32_t l_103 = 4294967295UL;
                        int8_t l_104 = (-1L);
                        int64_t l_105 = (-4L);
                        uint32_t l_106 = 4294967292UL;
                        int i;
                        l_99 &= l_98;
                        l_101 = l_100;
                        l_104 = l_103;
                        l_106 &= l_105;
                    }
                    l_113 ^= ((l_44 &= l_107) , ((((l_46 |= ((l_108 , l_109) , 0x1002L)) , l_110) , (l_111.y , (l_112[1][0] = FAKE_DIVERGE(p_1242->local_1_offset, get_local_id(1), 10)))) , 1L));
                }
                for (l_53 = (-20); (l_53 >= 9); l_53 = safe_add_func_uint8_t_u_u(l_53, 7))
                { /* block id: 67 */
                    uint32_t l_116 = 2UL;
                    uint32_t l_117 = 0xDB221B16L;
                    uint8_t l_118 = 4UL;
                    int32_t l_148[10][7] = {{1L,(-1L),1L,1L,0x5F446B02L,1L,1L},{1L,(-1L),1L,1L,0x5F446B02L,1L,1L},{1L,(-1L),1L,1L,0x5F446B02L,1L,1L},{1L,(-1L),1L,1L,0x5F446B02L,1L,1L},{1L,(-1L),1L,1L,0x5F446B02L,1L,1L},{1L,(-1L),1L,1L,0x5F446B02L,1L,1L},{1L,(-1L),1L,1L,0x5F446B02L,1L,1L},{1L,(-1L),1L,1L,0x5F446B02L,1L,1L},{1L,(-1L),1L,1L,0x5F446B02L,1L,1L},{1L,(-1L),1L,1L,0x5F446B02L,1L,1L}};
                    uint16_t l_149 = 0x6CA3L;
                    int i, j;
                    l_117 ^= l_116;
                    if (l_118)
                    { /* block id: 69 */
                        int64_t l_119[9][2][5] = {{{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L},{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L}},{{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L},{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L}},{{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L},{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L}},{{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L},{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L}},{{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L},{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L}},{{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L},{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L}},{{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L},{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L}},{{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L},{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L}},{{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L},{0x14D135FA0D3B926AL,5L,0x2B6A97F434AC2647L,1L,0x2B6A97F434AC2647L}}};
                        int32_t l_120 = 1L;
                        uint32_t l_121 = 0xBDA19A23L;
                        uint32_t l_124 = 0x5BA64AAAL;
                        int32_t l_127 = 8L;
                        uint16_t l_128 = 65528UL;
                        int i, j, k;
                        l_121--;
                        ++l_124;
                        l_120 &= l_127;
                        ++l_128;
                    }
                    else
                    { /* block id: 74 */
                        VECTOR(uint64_t, 4) l_131 = (VECTOR(uint64_t, 4))(0xD4ADB4F9E29D7D8EL, (VECTOR(uint64_t, 2))(0xD4ADB4F9E29D7D8EL, 1UL), 1UL);
                        int32_t l_133 = 0L;
                        int32_t *l_132[9] = {&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133,&l_133};
                        int32_t *l_134 = (void*)0;
                        uint32_t l_135 = 0x0861E0F1L;
                        int16_t l_136 = 8L;
                        uint64_t *l_138[1];
                        uint64_t **l_137[2][9] = {{&l_138[0],&l_138[0],&l_138[0],&l_138[0],&l_138[0],&l_138[0],&l_138[0],&l_138[0],&l_138[0]},{&l_138[0],&l_138[0],&l_138[0],&l_138[0],&l_138[0],&l_138[0],&l_138[0],&l_138[0],&l_138[0]}};
                        uint64_t **l_139 = &l_138[0];
                        int32_t l_140 = 0L;
                        int32_t l_141[1][9][4] = {{{0x735C8EA5L,0x735C8EA5L,0L,0L},{0x735C8EA5L,0x735C8EA5L,0L,0L},{0x735C8EA5L,0x735C8EA5L,0L,0L},{0x735C8EA5L,0x735C8EA5L,0L,0L},{0x735C8EA5L,0x735C8EA5L,0L,0L},{0x735C8EA5L,0x735C8EA5L,0L,0L},{0x735C8EA5L,0x735C8EA5L,0L,0L},{0x735C8EA5L,0x735C8EA5L,0L,0L},{0x735C8EA5L,0x735C8EA5L,0L,0L}}};
                        int32_t l_142 = 0x2FFBA643L;
                        int32_t l_143 = 0x355EDAC4L;
                        int32_t l_144 = 1L;
                        uint32_t l_145 = 4294967288UL;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_138[i] = (void*)0;
                        l_134 = (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(l_131.xxxyzwyyzwwxwzxz)).s27)).lo , (l_132[0] = l_132[0]));
                        l_139 = ((l_135 , l_136) , (l_137[1][4] = (void*)0));
                        l_141[0][1][2] = l_140;
                        l_145++;
                    }
                    l_149 |= l_148[3][3];
                    for (l_148[3][3] = 0; (l_148[3][3] <= 25); ++l_148[3][3])
                    { /* block id: 85 */
                        struct S0 l_152 = {0L,0x3FCEAC483EC63F9EL,0xC7BD3F7DL,18446744073709551615UL,0L,0x16E8ACDDL,0L};/* VOLATILE GLOBAL l_152 */
                        uint8_t l_153[10][3] = {{255UL,253UL,252UL},{255UL,253UL,252UL},{255UL,253UL,252UL},{255UL,253UL,252UL},{255UL,253UL,252UL},{255UL,253UL,252UL},{255UL,253UL,252UL},{255UL,253UL,252UL},{255UL,253UL,252UL},{255UL,253UL,252UL}};
                        int i, j;
                        l_153[1][1] = (l_152 , 0x7B358CFBL);
                    }
                }
                for (l_53 = 28; (l_53 < 10); l_53 = safe_sub_func_int64_t_s_s(l_53, 2))
                { /* block id: 91 */
                    uint16_t l_156 = 0xE79BL;
                    uint16_t l_159 = 0x4321L;
                    uint32_t l_162 = 0x18E3F265L;
                    int64_t l_163[5][3] = {{0x6CBAA91CE0F09638L,0x02B22ED0F463211CL,0x6CBAA91CE0F09638L},{0x6CBAA91CE0F09638L,0x02B22ED0F463211CL,0x6CBAA91CE0F09638L},{0x6CBAA91CE0F09638L,0x02B22ED0F463211CL,0x6CBAA91CE0F09638L},{0x6CBAA91CE0F09638L,0x02B22ED0F463211CL,0x6CBAA91CE0F09638L},{0x6CBAA91CE0F09638L,0x02B22ED0F463211CL,0x6CBAA91CE0F09638L}};
                    uint32_t l_164 = 0x54994F79L;
                    uint8_t l_165 = 5UL;
                    int i, j;
                    l_156--;
                    --l_159;
                    l_163[3][1] ^= l_162;
                    l_165 = l_164;
                }
            }
        }
        l_166 &= 0x5A4D2AB8L;
        l_168 = l_167;
        unsigned int result = 0;
        result += l_41;
        result += l_166;
        result += l_167.f0;
        result += l_167.f1;
        result += l_167.f2;
        result += l_167.f3;
        result += l_167.f4;
        result += l_167.f5;
        result += l_167.f6;
        result += l_168.f0;
        result += l_168.f1;
        result += l_168.f2;
        result += l_168.f3;
        result += l_168.f4;
        result += l_168.f5;
        result += l_168.f6;
        atomic_add(&p_1242->g_special_values[51 * get_linear_group_id() + 48], result);
    }
    else
    { /* block id: 101 */
        (1 + 1);
    }
    (*l_679) = (((*l_677) = ((*l_676) = ((((*l_674) |= ((safe_mul_func_int16_t_s_s((p_1242->g_171 = 1L), ((*l_174) = (safe_sub_func_uint64_t_u_u(p_24, 8UL))))) , (((l_673 = (l_672 = (0x04L > (safe_div_func_uint32_t_u_u((p_1242->g_358.y = (8L > (safe_add_func_int32_t_s_s(func_180((func_184(func_6((p_1242->g_171 , ((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(0x82345026L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(p_1242->g_190.wz)))), 0x18CD6108L)).yyxzxxyzzwwywxyx, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_191.zyzzxxyz)).lo)).zxxwyxyzwzwzwxyx, ((VECTOR(uint32_t, 4))(func_192(l_196, l_197, p_23, p_1242), ((VECTOR(uint32_t, 2))(4294967293UL)), 4294967286UL)).wzzywyxyzwwzzyww))).s0), p_1242), p_1242->g_337.f0, l_174, p_1242->g_337.f0, l_197, p_1242) , 0x00L), p_1242->g_663.f0, l_197, p_1242), p_23)))), l_191.y))))) & 0x5A0C59CAL) || 0x75BFL))) == 0x45L) , (void*)0))) != &p_1242->g_11);
    return (*p_1242->g_412);
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_208 p_1242->g_209 p_1242->g_412 p_1242->g_413 p_1242->g_3 p_1242->g_11
 * writes: p_1242->g_209 p_1242->g_390.f0 p_1242->g_459.f0
 */
int32_t  func_180(uint8_t  p_181, int64_t  p_182, uint64_t * p_183, struct S2 * p_1242)
{ /* block id: 283 */
    uint16_t *l_665 = &p_1242->g_252;
    uint16_t **l_664 = &l_665;
    uint16_t *l_667 = &p_1242->g_252;
    uint16_t **l_666 = &l_667;
    int32_t *l_668[7] = {&p_1242->g_459[6].f6,&p_1242->g_459[6].f6,&p_1242->g_459[6].f6,&p_1242->g_459[6].f6,&p_1242->g_459[6].f6,&p_1242->g_459[6].f6,&p_1242->g_459[6].f6};
    struct S0 *l_670 = &p_1242->g_363;
    struct S0 **l_669 = &l_670;
    int i;
    (*p_1242->g_208) = (*p_1242->g_208);
    p_1242->g_390.f0 = (((*l_664) = &p_1242->g_252) == ((*l_666) = &p_1242->g_252));
    p_1242->g_459[6].f0 = (**p_1242->g_412);
    (*l_669) = &p_1242->g_459[6];
    return p_181;
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_382 p_1242->g_383 p_1242->g_322 p_1242->g_190 p_1242->g_175 p_1242->g_3 p_1242->g_312.f0 p_1242->g_comm_values p_1242->g_255 p_1242->g_363.f1 p_1242->g_363 p_1242->g_209 p_1242->g_2 p_1242->g_399 p_1242->g_404 p_1242->g_252 p_1242->g_412 p_1242->g_436 p_1242->g_453 p_1242->g_390.f2 p_1242->g_413 p_1242->g_38 p_1242->g_258 p_1242->g_259 p_1242->g_260 p_1242->g_213 p_1242->g_459 p_1242->g_171 p_1242->g_462 p_1242->g_465 p_1242->g_337.f6 p_1242->g_358 p_1242->g_337.f0 p_1242->g_208 p_1242->g_544 p_1242->g_553 p_1242->g_564 p_1242->g_11 p_1242->g_587 p_1242->g_490 p_1242->g_610 p_1242->g_40 p_1242->g_390.f1 p_1242->g_312.f6 p_1242->g_634 p_1242->g_663
 * writes: p_1242->g_390 p_1242->g_175 p_1242->g_337.f6 p_1242->g_413 p_1242->g_453 p_1242->g_213 p_1242->g_171 p_1242->g_399 p_1242->g_363.f2 p_1242->g_38 p_1242->g_255 p_1242->g_337.f0 p_1242->g_2 p_1242->g_544 p_1242->g_490 p_1242->g_40 p_1242->g_209 p_1242->g_612 p_1242->g_553
 */
struct S0  func_184(int32_t * p_185, uint32_t  p_186, int16_t * p_187, int32_t  p_188, uint64_t * p_189, struct S2 * p_1242)
{ /* block id: 181 */
    uint16_t l_381 = 0UL;
    int64_t *l_388 = (void*)0;
    volatile int32_t l_391[10] = {(-1L),0x3B084F6EL,0x5EAE4379L,0x3B084F6EL,(-1L),(-1L),0x3B084F6EL,0x5EAE4379L,0x3B084F6EL,(-1L)};
    VECTOR(int32_t, 4) l_406 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-7L)), (-7L));
    uint8_t *l_410 = &p_1242->g_38[0];
    uint16_t l_419 = 6UL;
    VECTOR(int32_t, 4) l_427 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, (-2L)), (-2L));
    VECTOR(uint16_t, 8) l_433 = (VECTOR(uint16_t, 8))(0xAD79L, (VECTOR(uint16_t, 4))(0xAD79L, (VECTOR(uint16_t, 2))(0xAD79L, 0x35F0L), 0x35F0L), 0x35F0L, 0xAD79L, 0x35F0L);
    uint16_t *l_444 = &l_381;
    uint16_t **l_443[7];
    VECTOR(uint32_t, 16) l_451 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xA2058FA4L), 0xA2058FA4L), 0xA2058FA4L, 4294967295UL, 0xA2058FA4L, (VECTOR(uint32_t, 2))(4294967295UL, 0xA2058FA4L), (VECTOR(uint32_t, 2))(4294967295UL, 0xA2058FA4L), 4294967295UL, 0xA2058FA4L, 4294967295UL, 0xA2058FA4L);
    uint64_t *l_456 = &p_1242->g_171;
    int8_t **l_493 = (void*)0;
    int32_t *l_526 = &p_1242->g_337.f0;
    VECTOR(int32_t, 4) l_538 = (VECTOR(int32_t, 4))(0x4D750943L, (VECTOR(int32_t, 2))(0x4D750943L, 0x5693481BL), 0x5693481BL);
    int64_t l_582[2];
    int64_t l_583 = 0L;
    uint16_t l_584 = 0UL;
    VECTOR(int32_t, 4) l_604 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L);
    VECTOR(uint32_t, 16) l_605 = (VECTOR(uint32_t, 16))(0xF06A783AL, (VECTOR(uint32_t, 4))(0xF06A783AL, (VECTOR(uint32_t, 2))(0xF06A783AL, 4294967287UL), 4294967287UL), 4294967287UL, 0xF06A783AL, 4294967287UL, (VECTOR(uint32_t, 2))(0xF06A783AL, 4294967287UL), (VECTOR(uint32_t, 2))(0xF06A783AL, 4294967287UL), 0xF06A783AL, 4294967287UL, 0xF06A783AL, 4294967287UL);
    int32_t l_620 = 7L;
    VECTOR(int32_t, 4) l_631 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x4BDA6B7DL), 0x4BDA6B7DL);
    int32_t **l_662 = &l_526;
    int i;
    for (i = 0; i < 7; i++)
        l_443[i] = &l_444;
    for (i = 0; i < 2; i++)
        l_582[i] = 4L;
    if ((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(0x5FC6L, GROUP_DIVERGE(1, 1), (!(((safe_div_func_int32_t_s_s(((l_381 < ((((p_1242->g_382 , p_1242->g_383) , ((safe_mod_func_int16_t_s_s(p_1242->g_322.y, (((((!(l_381 <= (0x429BEF84BF2157EBL & (p_1242->g_190.z == l_381)))) , ((safe_mod_func_uint32_t_u_u((((l_388 != (void*)0) | (*p_187)) & l_381), p_186)) == (*p_185))) | 0x56FCE88CL) && p_1242->g_312.f0) ^ p_1242->g_comm_values[p_1242->tid]))) > 4294967287UL)) < 4294967295UL) | 8L)) <= p_1242->g_255.s6), l_381)) && l_381) != 1UL)), 0x3849L, ((VECTOR(uint16_t, 4))(1UL)))).s5, p_1242->g_363.f1)))
    { /* block id: 182 */
        struct S0 *l_389[1][2][1];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_389[i][j][k] = (void*)0;
            }
        }
        p_1242->g_390 = p_1242->g_363;
        l_391[7] = (*p_1242->g_209);
    }
    else
    { /* block id: 185 */
        VECTOR(int16_t, 8) l_394 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 7L), 7L), 7L, 1L, 7L);
        uint16_t *l_405 = &l_381;
        VECTOR(uint16_t, 8) l_409 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x5DC7L), 0x5DC7L), 0x5DC7L, 65535UL, 0x5DC7L);
        int32_t *l_411 = &p_1242->g_337.f6;
        int32_t *l_414 = &p_1242->g_337.f0;
        int32_t *l_415 = &p_1242->g_337.f6;
        int32_t *l_416 = (void*)0;
        int32_t *l_417 = &p_1242->g_363.f6;
        int32_t *l_418[4] = {&p_1242->g_390.f6,&p_1242->g_390.f6,&p_1242->g_390.f6,&p_1242->g_390.f6};
        VECTOR(int32_t, 16) l_428 = (VECTOR(int32_t, 16))(0x0BEF974EL, (VECTOR(int32_t, 4))(0x0BEF974EL, (VECTOR(int32_t, 2))(0x0BEF974EL, 0x20CFDCC5L), 0x20CFDCC5L), 0x20CFDCC5L, 0x0BEF974EL, 0x20CFDCC5L, (VECTOR(int32_t, 2))(0x0BEF974EL, 0x20CFDCC5L), (VECTOR(int32_t, 2))(0x0BEF974EL, 0x20CFDCC5L), 0x0BEF974EL, 0x20CFDCC5L, 0x0BEF974EL, 0x20CFDCC5L);
        uint16_t ***l_445 = &l_443[0];
        uint16_t ***l_446 = (void*)0;
        uint16_t **l_448 = &l_444;
        uint16_t ***l_447 = &l_448;
        uint16_t **l_450[7] = {&l_405,&l_405,&l_405,&l_405,&l_405,&l_405,&l_405};
        uint16_t ***l_449 = &l_450[0];
        uint64_t *l_452 = &p_1242->g_453;
        uint64_t *l_455 = &p_1242->g_337.f1;
        uint64_t **l_454[9] = {&l_455,&l_455,&l_455,&l_455,&l_455,&l_455,&l_455,&l_455,&l_455};
        int8_t *l_480 = &p_1242->g_213;
        uint8_t l_535 = 0x36L;
        int i;
        (*p_1242->g_412) = func_6((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_394.s3122054566715560)).s37)), ((((*l_411) = ((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u(0UL, (p_1242->g_399 , (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((*l_405) = ((VECTOR(uint16_t, 4))(p_1242->g_404.s918a)).y), 14)), 2))))), (p_1242->g_252 ^ (((l_406.y > (!((l_394.s1 > ((VECTOR(uint16_t, 16))(l_409.s5562364441365130)).s1) <= ((*p_187) = (&p_1242->g_38[5] != l_410))))) , &p_1242->g_253) == &p_1242->g_253)))) || (-1L))) < p_188) <= l_406.x), 0x1506L, ((VECTOR(int16_t, 2))(0x2935L)), 0x54F6L, (-1L))).s3, p_1242->g_322.w)), p_1242);
        l_419--;
        if (((((safe_rshift_func_uint16_t_u_s((((l_406.z < ((safe_unary_minus_func_int32_t_s((safe_rshift_func_int16_t_s_u(((p_1242->g_382 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_427.zzxzxzwxzxxzyzwx)).hi)).s3046134262506136)).s7a10)).xwyzxyyxwwyyzxyy)).s4, 0x7987C3B3L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_428.s49)).yyyy)).zzxyzxzw)), ((VECTOR(int32_t, 4))(0x61D31090L, (-8L), 0x56F078F2L, 0x5E619A9DL)).zyzzwzzy, ((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x63B8242CL, 0x7BE1634EL)), 0L, 0x412483F0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(0x093C56C5L, 6L)).xyxyxxyxyyyyxxyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(p_186, ((((((VECTOR(uint16_t, 16))(l_433.s0410036115040326)).s4 | (safe_mod_func_int64_t_s_s(((p_1242->g_436 , (((*l_415) = (+(safe_rshift_func_uint8_t_u_u(((l_391[3] >= (safe_sub_func_int32_t_s_s(((((p_1242->g_363.f0 , ((!((safe_add_func_int64_t_s_s((GROUP_DIVERGE(1, 1) < (((*l_447) = ((*l_445) = l_443[0])) == ((*l_449) = &l_444))), ((l_456 = (((((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(l_451.s2ca8eed6)).hi)).zwwxzxwwyxxxzwzw, (uint32_t)(((*l_452) &= p_188) , l_406.z), (uint32_t)0x94D08F56L))).sa , 1L) && p_1242->g_390.f2) , &p_1242->g_40)) != p_189))) | l_451.s0)) & (*l_417))) | 0UL) >= l_451.s5) , l_406.w), l_406.w))) ^ p_188), p_1242->g_175)))) || 0x713EB596L)) == 0x41L), 0x61D5E69071BF38D9L))) >= (*p_1242->g_413)) , &l_444) == &l_444))), 4)), ((VECTOR(int32_t, 2))(0x3AB0485FL)), ((VECTOR(int32_t, 4))(0L)), (*p_185), 0x45FF5A73L, ((VECTOR(int32_t, 2))(0x6FFDCFF3L)), ((VECTOR(int32_t, 4))(0x1A00A277L)), 1L)), ((VECTOR(int32_t, 16))(5L)), ((VECTOR(int32_t, 16))(0x1681FEF7L))))).s17)))).yxyy)).even, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(9L))))).xxyxxyyyyyyyyxxx)).s9673)), ((VECTOR(int32_t, 2))(3L)), 0L, (-1L))))))).s5476500606655073, ((VECTOR(int32_t, 16))((-1L)))))).odd, ((VECTOR(int32_t, 8))(0x78663F07L)), ((VECTOR(int32_t, 8))((-1L)))))).even)), (-1L), 0x1E0A8F7FL, 0x71C9CAF5L)).s27, ((VECTOR(int32_t, 2))(0x290E59BDL))))))), 0x3E61E8B4L, (-3L))).s40, ((VECTOR(int32_t, 2))(0x39DF99D8L))))).xxyxxyxy))).even)), 0x45095AC9L, (*p_185), ((VECTOR(int32_t, 2))((-3L))), ((VECTOR(int32_t, 2))(0x6E7F0830L)), ((VECTOR(int32_t, 4))(0x58A5A8DEL)))).s8) , (-10L)), FAKE_DIVERGE(p_1242->global_2_offset, get_global_id(2), 10))))) < p_1242->g_255.s2)) | p_1242->g_175) == (-1L)), 0)) == p_1242->g_38[0]) , (**p_1242->g_258)) , l_406.x))
        { /* block id: 197 */
            int32_t l_475 = (-1L);
            uint32_t *l_503 = &p_1242->g_232;
            int32_t l_513 = (-1L);
            for (p_1242->g_213 = 0; (p_1242->g_213 != 2); ++p_1242->g_213)
            { /* block id: 200 */
                return p_1242->g_459[6];
            }
            for (p_1242->g_171 = (-6); (p_1242->g_171 != 3); p_1242->g_171 = safe_add_func_int8_t_s_s(p_1242->g_171, 3))
            { /* block id: 205 */
                return p_1242->g_462[4][8];
            }
            for (p_1242->g_213 = 0; (p_1242->g_213 >= (-10)); p_1242->g_213--)
            { /* block id: 210 */
                volatile struct S0 *l_466[10];
                int8_t *l_496[9] = {&p_1242->g_213,&p_1242->g_213,&p_1242->g_213,&p_1242->g_213,&p_1242->g_213,&p_1242->g_213,&p_1242->g_213,&p_1242->g_213,&p_1242->g_213};
                int8_t **l_495 = &l_496[7];
                int32_t l_509 = 0x0FB3DC5EL;
                int32_t l_515 = 0x42F0A182L;
                int32_t **l_525[7] = {(void*)0,&l_411,(void*)0,(void*)0,&l_411,(void*)0,(void*)0};
                int i;
                for (i = 0; i < 10; i++)
                    l_466[i] = &p_1242->g_436;
                p_1242->g_399 = p_1242->g_465[0];
                for (p_1242->g_363.f2 = 0; (p_1242->g_363.f2 == 37); p_1242->g_363.f2 = safe_add_func_uint8_t_u_u(p_1242->g_363.f2, 3))
                { /* block id: 214 */
                    int8_t **l_481 = &l_480;
                    int8_t *l_483[2];
                    int8_t **l_482 = &l_483[0];
                    int8_t ***l_494 = &l_493;
                    int32_t l_497[6][3][1] = {{{0x30CFE1D1L},{0x30CFE1D1L},{0x30CFE1D1L}},{{0x30CFE1D1L},{0x30CFE1D1L},{0x30CFE1D1L}},{{0x30CFE1D1L},{0x30CFE1D1L},{0x30CFE1D1L}},{{0x30CFE1D1L},{0x30CFE1D1L},{0x30CFE1D1L}},{{0x30CFE1D1L},{0x30CFE1D1L},{0x30CFE1D1L}},{{0x30CFE1D1L},{0x30CFE1D1L},{0x30CFE1D1L}}};
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_483[i] = (void*)0;
                    for (p_1242->g_453 = 16; (p_1242->g_453 == 6); p_1242->g_453 = safe_sub_func_int32_t_s_s(p_1242->g_453, 3))
                    { /* block id: 217 */
                        (*l_411) |= ((safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(0x3D59L, (l_475 & 0x5785F38BC77891ECL))), 0xC4L)) & 0x04AFDCC5L);
                    }
                    if ((*p_1242->g_413))
                        continue;
                    if (((*p_1242->g_258) != (((safe_rshift_func_int16_t_s_s((((safe_mod_func_int64_t_s_s((((*l_481) = l_480) != ((*l_482) = &p_1242->g_213)), FAKE_DIVERGE(p_1242->group_1_offset, get_group_id(1), 10))) > ((safe_mul_func_int16_t_s_s((p_186 >= ((VECTOR(uint8_t, 2))(249UL, 0UL)).lo), (safe_sub_func_uint8_t_u_u(((*l_410)++), (((VECTOR(uint8_t, 16))(8UL, ((VECTOR(uint8_t, 2))(p_1242->g_490.s24)), 0xD4L, ((((-1L) || (!p_186)) && ((VECTOR(uint32_t, 2))(1UL, 0x3A61ADB1L)).even) < (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(0x2DL, (((*l_494) = l_493) != l_495), p_186, (-1L), (-1L), ((VECTOR(int8_t, 4))(0x28L)), 0x55L, (-9L), ((VECTOR(int8_t, 4))(0x09L)), 0x69L)).s3, l_433.s5, 0x1BL, 0x47L, 0x0AL, (-10L), 0x50L, (-4L))).s3, 0x5EL))), 1UL, ((VECTOR(uint8_t, 8))(1UL)), 1UL, 0xB5L)).se == p_188))))) , l_497[5][0][0])) < p_188), 4)) || p_1242->g_255.s4) , (void*)0)))
                    { /* block id: 225 */
                        uint32_t *l_506[1];
                        int32_t **l_511 = &l_414;
                        int32_t ***l_510 = &l_511;
                        int32_t l_512 = (-1L);
                        uint8_t *l_514[2];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_506[i] = (void*)0;
                        for (i = 0; i < 2; i++)
                            l_514[i] = (void*)0;
                        (*l_414) = (((p_1242->g_255.s0 = (((l_515 &= ((VECTOR(uint8_t, 8))(((((safe_add_func_int32_t_s_s((((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 2))(1UL, 65532UL)).xyyyxxxxyyyyxxxy, ((VECTOR(uint16_t, 4))(p_1242->g_500.s7332)).zxzyyzzxzxxyzwwy))).s6 == (((safe_lshift_func_uint16_t_u_s((*p_1242->g_259), (l_503 != &p_1242->g_232))) > (+(5L && (l_513 = (((((*l_510) = (((safe_mul_func_uint16_t_u_u(0x2083L, (((p_1242->g_358.x = 9UL) <= ((safe_mul_func_int16_t_s_s(l_509, l_475)) || ((*l_455) = ((*p_185) | l_497[3][2][0])))) < 0x06L))) , 18446744073709551615UL) , (void*)0)) == (void*)0) & p_1242->g_220[0]) ^ l_512))))) | 3L)), 0xC0D08B35L)) | l_451.sb) >= p_1242->g_38[5]) == p_1242->g_11), 255UL, 1UL, 253UL, ((VECTOR(uint8_t, 2))(0x8CL)), 0xB9L, 9UL)).s6) || p_186) != p_1242->g_255.s6)) < (*p_187)) < (*p_187));
                    }
                    else
                    { /* block id: 233 */
                        uint32_t l_518 = 0x09EF9008L;
                        int32_t l_521 = 0L;
                        int i, j;
                        (*l_414) |= (((**p_1242->g_412) && (safe_lshift_func_int8_t_s_s(p_1242->g_399.f1, l_475))) ^ (p_1242->g_213 & (0x50FCL == p_1242->g_358.y)));
                        (**p_1242->g_208) = (l_518 > (safe_add_func_int8_t_s_s((l_521 &= p_186), p_1242->g_465[0].f5)));
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        p_1242->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 19)), permutations[(safe_mod_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(p_188)) || l_513), 11)), 10))][(safe_mod_func_uint32_t_u_u(p_1242->tid, 19))]));
                    }
                }
                l_526 = func_6(p_188, p_1242);
                l_513 = ((*l_415) < (**p_1242->g_258));
            }
        }
        else
        { /* block id: 245 */
            uint8_t l_527 = 0UL;
            volatile struct S0 **l_530 = (void*)0;
            volatile struct S0 *l_532 = &p_1242->g_465[0];
            volatile struct S0 **l_531 = &l_532;
            int32_t l_533 = (-7L);
            int32_t l_534[8][4] = {{(-1L),5L,1L,0x2BECC50FL},{(-1L),5L,1L,0x2BECC50FL},{(-1L),5L,1L,0x2BECC50FL},{(-1L),5L,1L,0x2BECC50FL},{(-1L),5L,1L,0x2BECC50FL},{(-1L),5L,1L,0x2BECC50FL},{(-1L),5L,1L,0x2BECC50FL},{(-1L),5L,1L,0x2BECC50FL}};
            int i, j;
            l_527--;
            (*l_531) = &p_1242->g_399;
            ++l_535;
        }
    }
    if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_538.wx)).yyxx)).yxxwwwwy)).s2)
    { /* block id: 251 */
        int16_t l_539 = (-1L);
        int32_t l_540 = 0x090F8DB9L;
        int32_t *l_541[9] = {&p_1242->g_390.f0,&p_1242->g_390.f0,&p_1242->g_390.f0,&p_1242->g_390.f0,&p_1242->g_390.f0,&p_1242->g_390.f0,&p_1242->g_390.f0,&p_1242->g_390.f0,&p_1242->g_390.f0};
        int8_t l_542 = 1L;
        int32_t l_543 = (-2L);
        uint8_t *l_560 = (void*)0;
        VECTOR(uint8_t, 4) l_563 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL);
        uint64_t **l_567 = (void*)0;
        uint64_t *l_568 = &p_1242->g_453;
        int i;
        p_1242->g_544++;
        if ((safe_mul_func_int8_t_s_s(((void*)0 == &l_444), (safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((p_1242->g_553 , (safe_mul_func_int8_t_s_s(((p_1242->g_459[6] , (((*l_444) = (**p_1242->g_258)) <= (~(((safe_mul_func_uint8_t_u_u((p_1242->g_490.s2 = ((*l_410)--)), ((safe_div_func_int8_t_s_s((((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))((*l_526), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_563.zz)).yyxx)).odd)), 0xF0L)))).xzwwxwwxxyyxyzyw, ((VECTOR(uint8_t, 4))(p_1242->g_564.xyyx)).xywxxwzxyyyzyzwz))).sc , ((*l_526) | ((FAKE_DIVERGE(p_1242->local_1_offset, get_local_id(1), 10) ^ ((l_568 = &p_1242->g_453) != ((((*l_456) = ((safe_mod_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(0xDE2EL, 1L)), 18446744073709551609UL)), p_1242->g_252)), p_186)) > p_186)) && 18446744073709551611UL) , &p_1242->g_453))) < GROUP_DIVERGE(1, 1)))), p_1242->g_363.f1)) > (*l_526)))) || FAKE_DIVERGE(p_1242->group_1_offset, get_group_id(1), 10)) | (*p_1242->g_413))))) != 0x95DDEEF999191E11L), p_188))), (*p_1242->g_413))) == p_1242->g_363.f2), p_186)))))
        { /* block id: 258 */
            int16_t l_577[1][7] = {{0L,0L,0L,0L,0L,0L,0L}};
            int32_t l_578 = 0x17A97F76L;
            int32_t l_579 = 0x26EEC4CEL;
            int32_t l_580[5][9] = {{0x4EEF3472L,0x4EEF3472L,7L,0x5B929EA6L,1L,0x5B929EA6L,7L,0x4EEF3472L,0x4EEF3472L},{0x4EEF3472L,0x4EEF3472L,7L,0x5B929EA6L,1L,0x5B929EA6L,7L,0x4EEF3472L,0x4EEF3472L},{0x4EEF3472L,0x4EEF3472L,7L,0x5B929EA6L,1L,0x5B929EA6L,7L,0x4EEF3472L,0x4EEF3472L},{0x4EEF3472L,0x4EEF3472L,7L,0x5B929EA6L,1L,0x5B929EA6L,7L,0x4EEF3472L,0x4EEF3472L},{0x4EEF3472L,0x4EEF3472L,7L,0x5B929EA6L,1L,0x5B929EA6L,7L,0x4EEF3472L,0x4EEF3472L}};
            int32_t l_581 = 7L;
            int i, j;
            (*p_1242->g_209) = (**p_1242->g_208);
            ++l_584;
        }
        else
        { /* block id: 261 */
            int16_t l_588 = 0x1A31L;
            int32_t l_589[1];
            int32_t l_590[7][8][1] = {{{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL}},{{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL}},{{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL}},{{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL}},{{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL}},{{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL}},{{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL},{0x0788B60BL}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_589[i] = 8L;
            (*p_1242->g_208) = (void*)0;
            l_590[2][6][0] = (l_589[0] = (p_1242->g_587 , l_588));
        }
    }
    else
    { /* block id: 266 */
        uint8_t l_599 = 248UL;
        int32_t l_608 = 1L;
        VECTOR(int64_t, 2) l_609 = (VECTOR(int64_t, 2))(1L, 0x688161ED40E12224L);
        int16_t *l_611 = &p_1242->g_612;
        VECTOR(uint64_t, 8) l_627 = (VECTOR(uint64_t, 8))(0x415482C445F3BBA1L, (VECTOR(uint64_t, 4))(0x415482C445F3BBA1L, (VECTOR(uint64_t, 2))(0x415482C445F3BBA1L, 0xACDA1D167B9DDE7EL), 0xACDA1D167B9DDE7EL), 0xACDA1D167B9DDE7EL, 0x415482C445F3BBA1L, 0xACDA1D167B9DDE7EL);
        VECTOR(uint64_t, 8) l_628 = (VECTOR(uint64_t, 8))(0x017858C43BCDA63FL, (VECTOR(uint64_t, 4))(0x017858C43BCDA63FL, (VECTOR(uint64_t, 2))(0x017858C43BCDA63FL, 18446744073709551606UL), 18446744073709551606UL), 18446744073709551606UL, 0x017858C43BCDA63FL, 18446744073709551606UL);
        uint64_t *l_647 = &p_1242->g_453;
        int32_t l_660 = 0x4C031022L;
        uint16_t l_661 = 0UL;
        int i;
        if ((((safe_sub_func_uint64_t_u_u((safe_div_func_int32_t_s_s((((*l_611) = ((safe_sub_func_uint8_t_u_u(p_188, p_188)) , ((*p_187) = (safe_div_func_uint32_t_u_u(l_599, (+(safe_div_func_int16_t_s_s((*l_526), (((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x42L, 1L)), 0x77L, 0x5AL)).z ^ ((((((safe_sub_func_int32_t_s_s(1L, ((VECTOR(int32_t, 16))(l_604.zzyzwwxyzwzxzxyx)).s4)) || ((VECTOR(uint32_t, 8))(l_605.s9eba4290)).s7) != (safe_sub_func_int16_t_s_s((~(p_186 , (p_1242->g_490.s3 != ((VECTOR(int64_t, 16))((!l_608), ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),VECTOR(int64_t, 8),((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_609.xyxxyyyxxxyyxxyy)).s4f)).xxyxyyyy, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x1654AD9ECFBB326BL, 0x59E36013EEDE902DL)), 3L, 0x05DA9C9087BE189FL)).lo, ((VECTOR(int64_t, 8))(0L, 0x66FD03C968471B58L, 0x7820E0F92412AF69L, ((VECTOR(int64_t, 4))(p_1242->g_610.s0540)), 5L)).s64))).yxxy, (int64_t)p_186))))).zxzxwywy, ((VECTOR(int64_t, 8))(0x0F90D0AB969DB850L))))).s06, ((VECTOR(int64_t, 2))((-1L)))))), 8L, p_186, (-9L), ((VECTOR(int64_t, 4))((-7L))), ((VECTOR(int64_t, 4))(0L)), 1L, (-1L))).s1))), (*l_526)))) == (*p_187)) | 0UL) | l_609.y)))))))))) >= p_1242->g_40), l_609.x)), p_1242->g_390.f1)) , 0x18L) ^ (-1L)))
        { /* block id: 269 */
            struct S0 *l_613 = &p_1242->g_553;
            p_185 = p_185;
            (*l_613) = p_1242->g_459[2];
            (*p_1242->g_209) |= (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((0x5EE2L >= ((void*)0 == p_189)), 1)) & (safe_rshift_func_uint8_t_u_u(l_620, 0))), l_599));
        }
        else
        { /* block id: 273 */
            atomic_or(&p_1242->g_atomic_reduction[get_linear_group_id()], ((safe_div_func_uint16_t_u_u(l_609.x, p_186)) | (safe_mul_func_int16_t_s_s(p_1242->g_462[4][8].f6, (FAKE_DIVERGE(p_1242->local_2_offset, get_local_id(2), 10) & (safe_lshift_func_int16_t_s_u((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 2))(l_627.s76)).yxyxyxxxyyxyyyyx, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 8))(p_1242->g_587.f6, ((VECTOR(uint64_t, 2))(l_628.s60)), ((VECTOR(uint64_t, 2))(abs(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(add_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(0x15088B19D6DFAA5CL, l_609.x, 0x2451264884E80ADBL, (-5L))), (((((0x8000F51CL && p_1242->g_312.f6) || ((safe_lshift_func_uint8_t_u_u((0x645CED53L >= ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))((-10L), ((VECTOR(int32_t, 2))(l_631.wx)), 1L)).wywzyzyx)).s35)).lo), 6)) ^ 0xBE1B5A2E3C95C438L)) <= 0xF2DA7360L) == p_1242->g_459[6].f1) | p_186), ((VECTOR(int64_t, 2))(8L)), 0x52126ACAB1ABC84EL)), ((VECTOR(int64_t, 8))((-1L)))))).even)), ((VECTOR(int64_t, 4))(0x32638A8C449C38A6L))))).even))), FAKE_DIVERGE(p_1242->group_2_offset, get_group_id(2), 10), 0x1CF3F44565E7B742L, 0xC4B9E0F150A325ABL)).even, ((VECTOR(uint64_t, 4))(0xB4882D0AF8413FABL))))).lo)).xxxyyyyxyxxxyxxy))).sf1)).xyxy)).z | (*l_526)), GROUP_DIVERGE(1, 1))))))));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_1242->v_collective += p_1242->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            return p_1242->g_436;
        }
        (*p_1242->g_209) = ((safe_mod_func_int64_t_s_s((((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(p_1242->g_634.wwwx)), 0L, ((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(1L, (p_188 != (((((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(((((*l_444)--) < (l_647 != p_189)) >= (((p_1242->g_390.f1 == (safe_lshift_func_int8_t_s_u((((l_660 &= (safe_add_func_uint32_t_u_u((0x50L > ((safe_div_func_int64_t_s_s(p_186, (safe_add_func_uint8_t_u_u((+GROUP_DIVERGE(2, 1)), (*l_526))))) && (p_1242->g_462[4][8] , (safe_mod_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u(p_186, p_1242->g_610.s9)) < p_1242->g_564.y), 9UL))))), (-9L)))) && 1L) >= l_628.s0), 6))) != 0x3D84A99DL) , p_1242->g_587.f6)), 1L)), 10)), p_1242->g_363.f0)), p_1242->g_175)) != 0x3DL) & p_1242->g_564.x) | p_1242->g_363.f6) | l_609.x)), ((VECTOR(int8_t, 2))(6L)), 0x45L, ((VECTOR(int8_t, 2))(6L)), 0L))))), (-8L), 0x2BL, (-4L))).s4 == p_1242->g_363.f0), (*l_526))) > l_661);
    }
    (*l_662) = p_185;
    return p_1242->g_663;
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_208 p_1242->g_190 p_1242->g_213 p_1242->g_175 p_1242->g_38 p_1242->g_3 p_1242->g_comm_values p_1242->g_209 p_1242->g_2 p_1242->g_11 p_1242->g_255 p_1242->g_258 p_1242->g_40 p_1242->g_253 p_1242->g_171 p_1242->g_252 p_1242->g_259 p_1242->g_260 p_1242->g_312 p_1242->l_comm_values p_1242->g_220 p_1242->g_322 p_1242->g_232 p_1242->g_363 p_1242->g_337.f6 p_1242->g_337.f2
 * writes: p_1242->g_175 p_1242->g_213 p_1242->g_220 p_1242->g_232 p_1242->g_252 p_1242->g_253 p_1242->g_2 p_1242->g_255 p_1242->g_40 p_1242->g_38 p_1242->l_comm_values p_1242->g_322 p_1242->g_358 p_1242->g_363 p_1242->g_337.f6 p_1242->g_337.f2
 */
uint32_t  func_192(uint8_t * p_193, uint64_t * p_194, uint8_t  p_195, struct S2 * p_1242)
{ /* block id: 106 */
    int32_t **l_198 = (void*)0;
    int32_t *l_200[5];
    int32_t **l_199 = &l_200[0];
    int32_t ***l_207 = &l_199;
    int8_t *l_212 = &p_1242->g_213;
    int32_t l_216 = 7L;
    int32_t ***l_218 = (void*)0;
    int32_t ****l_217 = &l_218;
    int32_t ***l_219 = &l_198;
    int64_t l_376 = (-3L);
    int i;
    for (i = 0; i < 5; i++)
        l_200[i] = &p_1242->g_11;
    (*l_199) = (void*)0;
    p_1242->g_255.s5 |= (((FAKE_DIVERGE(p_1242->local_0_offset, get_local_id(0), 10) > func_201(((1L != 18446744073709551609UL) & (((*l_207) = &l_200[1]) != p_1242->g_208)), (p_1242->g_175 = (safe_lshift_func_uint8_t_u_s((FAKE_DIVERGE(p_1242->group_1_offset, get_group_id(1), 10) ^ p_195), 2))), &p_1242->g_38[3], ((*l_212) = 0x43L), func_6((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(((p_1242->g_220[0] = (l_216 , (((l_219 = ((*l_217) = (void*)0)) == &l_198) , p_195))) , p_195), ((VECTOR(uint32_t, 2))(4294967286UL)), 0x941245A1L)).w, p_1242->g_190.z)), p_1242), p_1242)) & 0x99E6CCCAL) | 255UL);
    for (p_1242->g_213 = 0; (p_1242->g_213 <= (-1)); p_1242->g_213 = safe_sub_func_int32_t_s_s(p_1242->g_213, 3))
    { /* block id: 125 */
        volatile uint16_t ** volatile l_261 = &p_1242->g_259;/* VOLATILE GLOBAL l_261 */
        int32_t l_262 = 8L;
        VECTOR(int64_t, 8) l_324 = (VECTOR(int64_t, 8))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, (-1L)), (-1L)), (-1L), 4L, (-1L));
        struct S0 *l_336[7][4] = {{(void*)0,(void*)0,&p_1242->g_337,&p_1242->g_337},{(void*)0,(void*)0,&p_1242->g_337,&p_1242->g_337},{(void*)0,(void*)0,&p_1242->g_337,&p_1242->g_337},{(void*)0,(void*)0,&p_1242->g_337,&p_1242->g_337},{(void*)0,(void*)0,&p_1242->g_337,&p_1242->g_337},{(void*)0,(void*)0,&p_1242->g_337,&p_1242->g_337},{(void*)0,(void*)0,&p_1242->g_337,&p_1242->g_337}};
        int i, j;
        l_261 = p_1242->g_258;
        l_262 ^= (**p_1242->g_208);
        for (p_1242->g_40 = 0; (p_1242->g_40 > 4); p_1242->g_40 = safe_add_func_int64_t_s_s(p_1242->g_40, 4))
        { /* block id: 130 */
            int32_t ****l_281 = &l_219;
            int32_t l_286[5][2] = {{0x50EC6785L,0x50EC6785L},{0x50EC6785L,0x50EC6785L},{0x50EC6785L,0x50EC6785L},{0x50EC6785L,0x50EC6785L},{0x50EC6785L,0x50EC6785L}};
            VECTOR(uint16_t, 16) l_303 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), 65535UL), 65535UL, 0UL, 65535UL, (VECTOR(uint16_t, 2))(0UL, 65535UL), (VECTOR(uint16_t, 2))(0UL, 65535UL), 0UL, 65535UL, 0UL, 65535UL);
            VECTOR(uint16_t, 16) l_304 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL, (VECTOR(uint16_t, 2))(1UL, 0UL), (VECTOR(uint16_t, 2))(1UL, 0UL), 1UL, 0UL, 1UL, 0UL);
            uint8_t l_332 = 255UL;
            int i, j;
            for (p_1242->g_253 = 0; (p_1242->g_253 >= 23); p_1242->g_253 = safe_add_func_uint32_t_u_u(p_1242->g_253, 6))
            { /* block id: 133 */
                uint16_t *l_270 = &p_1242->g_252;
                uint16_t **l_269 = &l_270;
                int16_t *l_282 = (void*)0;
                int16_t *l_283 = (void*)0;
                int16_t *l_284 = &p_1242->g_175;
                int32_t l_285 = (-1L);
                int64_t *l_287 = (void*)0;
                int64_t *l_288 = (void*)0;
                VECTOR(uint16_t, 16) l_297 = (VECTOR(uint16_t, 16))(65527UL, (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 0x3157L), 0x3157L), 0x3157L, 65527UL, 0x3157L, (VECTOR(uint16_t, 2))(65527UL, 0x3157L), (VECTOR(uint16_t, 2))(65527UL, 0x3157L), 65527UL, 0x3157L, 65527UL, 0x3157L);
                int32_t l_311 = 0x50F53552L;
                VECTOR(int8_t, 16) l_323 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 5L), 5L), 5L, (-1L), 5L, (VECTOR(int8_t, 2))((-1L), 5L), (VECTOR(int8_t, 2))((-1L), 5L), (-1L), 5L, (-1L), 5L);
                int32_t **l_333 = &l_200[3];
                int i;
                if ((safe_mul_func_uint8_t_u_u(((l_269 == (((safe_sub_func_uint32_t_u_u((0x3AL ^ (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((**l_269) = (safe_mul_func_uint8_t_u_u(FAKE_DIVERGE(p_1242->group_2_offset, get_group_id(2), 10), ((safe_rshift_func_int8_t_s_u((l_281 == &l_207), ((l_285 = ((4294967293UL < (((*l_284) = p_195) > p_1242->g_171)) <= ((((p_1242->g_252 < l_285) > (*p_1242->g_259)) > l_286[3][0]) & p_1242->g_38[5]))) >= p_195))) , l_262)))), GROUP_DIVERGE(0, 1))), 12))), p_195)) <= l_262) , &p_1242->g_259)) , 0UL), p_195)))
                { /* block id: 137 */
                    int64_t *l_300 = (void*)0;
                    int64_t *l_301 = (void*)0;
                    int64_t *l_302 = (void*)0;
                    int32_t l_313 = 0x20240F32L;
                    l_286[3][0] |= (safe_lshift_func_uint8_t_u_s(((*p_193) |= (safe_lshift_func_int16_t_s_s((p_195 == 0x62L), 2))), (safe_div_func_int32_t_s_s(p_195, (safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0x7453L, 0xE24EL, 1UL, 65530UL)).wwzyxwyz)).s42, ((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 16))(l_297.sa548168c1b913420)), ((VECTOR(uint16_t, 16))(0x36BCL, 0xD9B2L, (safe_mul_func_int16_t_s_s(p_1242->g_255.s1, (p_195 ^ (p_1242->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1242->tid, 19))] = l_297.s0)))), ((VECTOR(uint16_t, 2))(min(((VECTOR(uint16_t, 4))(l_303.sa9f2)).odd, ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(clz(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_304.s6aafb0fe))))))).s4672554511217360)).sb4fa))).hi))), 7UL, ((safe_mul_func_int8_t_s_s((+((safe_add_func_int64_t_s_s((l_285 ^= (p_1242->g_comm_values[p_1242->tid] , 0x1212966B7A651336L)), (((**l_269) = ((((safe_mul_func_uint8_t_u_u((l_311 = 0xECL), 255UL)) == 0x31L) , p_1242->g_312) , 0UL)) == p_1242->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1242->tid, 19))]))) , p_1242->g_220[0])), 1UL)) == l_313), GROUP_DIVERGE(1, 1), ((VECTOR(uint16_t, 2))(0UL)), ((VECTOR(uint16_t, 2))(0x742BL)), p_195, ((VECTOR(uint16_t, 2))(65532UL)), 0xE952L))))).s91, ((VECTOR(uint16_t, 2))(65535UL))))).even, 0))))));
                }
                else
                { /* block id: 144 */
                    int64_t *l_325 = (void*)0;
                    int64_t *l_326 = (void*)0;
                    int64_t *l_327 = (void*)0;
                    int64_t *l_328 = (void*)0;
                    int64_t *l_329 = (void*)0;
                    int64_t *l_330 = (void*)0;
                    int64_t *l_331[1][9] = {{(void*)0,&p_1242->g_253,(void*)0,(void*)0,&p_1242->g_253,(void*)0,(void*)0,&p_1242->g_253,(void*)0}};
                    int32_t l_344 = 1L;
                    int32_t l_356 = 0x6C4FD2FFL;
                    uint32_t *l_357 = (void*)0;
                    uint32_t *l_359 = (void*)0;
                    uint32_t *l_360 = (void*)0;
                    uint32_t *l_361[7][7] = {{&p_1242->g_220[0],&p_1242->g_220[0],(void*)0,(void*)0,&p_1242->g_220[0],(void*)0,(void*)0},{&p_1242->g_220[0],&p_1242->g_220[0],(void*)0,(void*)0,&p_1242->g_220[0],(void*)0,(void*)0},{&p_1242->g_220[0],&p_1242->g_220[0],(void*)0,(void*)0,&p_1242->g_220[0],(void*)0,(void*)0},{&p_1242->g_220[0],&p_1242->g_220[0],(void*)0,(void*)0,&p_1242->g_220[0],(void*)0,(void*)0},{&p_1242->g_220[0],&p_1242->g_220[0],(void*)0,(void*)0,&p_1242->g_220[0],(void*)0,(void*)0},{&p_1242->g_220[0],&p_1242->g_220[0],(void*)0,(void*)0,&p_1242->g_220[0],(void*)0,(void*)0},{&p_1242->g_220[0],&p_1242->g_220[0],(void*)0,(void*)0,&p_1242->g_220[0],(void*)0,(void*)0}};
                    int32_t l_362 = 2L;
                    int i, j;
                    for (p_1242->g_252 = (-16); (p_1242->g_252 == 52); p_1242->g_252++)
                    { /* block id: 147 */
                        if (p_195)
                            break;
                        return p_195;
                    }
                    (*p_1242->g_209) = ((safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s((safe_div_func_int16_t_s_s(p_1242->g_38[1], p_195)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(p_1242->g_322.zx)))).yxxy)).xzzzwwxx)), (int8_t)((VECTOR(int8_t, 4))(l_323.sce10)).y))).s74, (int8_t)((void*)0 == p_193), (int8_t)((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_324.s35541151)).s2206435323522323)).sb ^ (l_332 = p_1242->g_171)) , (p_1242->g_252 != (p_1242->g_322.y = (&p_1242->g_209 != l_333))))))))).lo)), (safe_div_func_uint32_t_u_u((l_336[3][0] != &p_1242->g_312), (**p_1242->g_208))))) && (-1L));
                    l_362 |= (p_195 & (0x77340E4FL <= (safe_lshift_func_int8_t_s_u((((VECTOR(int16_t, 8))(clz(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 2))(0x653BL, 0L)).xyyyxyyx, ((VECTOR(int16_t, 8))(0x52B7L, (safe_mul_func_int16_t_s_s((((p_1242->g_322.y >= (**p_1242->g_258)) == (safe_lshift_func_int8_t_s_s((FAKE_DIVERGE(p_1242->global_1_offset, get_global_id(1), 10) <= ((p_1242->g_220[2] & (l_344 = (~p_1242->g_38[0]))) >= (safe_mul_func_int16_t_s_s((p_195 , ((VECTOR(int16_t, 4))(((*l_284) = ((p_1242->g_358.y = ((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(((0xC9EDL < ((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 4))(255UL, 0x25L, 0x3EL, 1UL)).w, ((((((safe_lshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s((((void*)0 == &p_1242->g_40) , p_195), FAKE_DIVERGE(p_1242->global_2_offset, get_global_id(2), 10))), l_356)) >= 0x0214L) , p_1242->g_255.s6) , p_195) , p_1242->g_3[1]) | p_1242->g_232))) || 1L)) | p_1242->g_11))), 0)) , p_195)) | 0x3FC81AF6L)), ((VECTOR(int16_t, 2))(8L)), 0x19D0L)).w), 0x5F61L)))), p_1242->g_11))) < p_1242->g_213), l_356)), ((VECTOR(int16_t, 2))(9L)), (-1L), 0x0A36L, 0x7745L, 0x72B4L)))))))).s3 , (-5L)), l_262))));
                    p_1242->g_363 = p_1242->g_363;
                }
            }
        }
    }
    for (p_1242->g_363.f2 = 0; (p_1242->g_363.f2 != 4); p_1242->g_363.f2++)
    { /* block id: 165 */
        uint32_t l_368 = 0x7C07444DL;
        int32_t l_375 = 7L;
        for (p_1242->g_337.f6 = 3; (p_1242->g_337.f6 != 0); p_1242->g_337.f6--)
        { /* block id: 168 */
            int32_t *l_369 = &p_1242->g_337.f0;
            l_369 = func_6(l_368, p_1242);
        }
        for (p_1242->g_337.f2 = 9; (p_1242->g_337.f2 <= 17); ++p_1242->g_337.f2)
        { /* block id: 173 */
            uint32_t l_372 = 3UL;
            if (l_372)
                break;
            (*p_1242->g_209) |= l_368;
        }
        (*p_1242->g_209) ^= p_195;
        l_375 |= (safe_sub_func_uint16_t_u_u((**p_1242->g_258), p_1242->g_255.s7));
    }
    return l_376;
}


/* ------------------------------------------ */
/* 
 * reads : p_1242->g_213 p_1242->g_175 p_1242->g_38 p_1242->g_3 p_1242->g_comm_values p_1242->g_209 p_1242->g_2 p_1242->g_11
 * writes: p_1242->g_232 p_1242->g_175 p_1242->g_252 p_1242->g_253 p_1242->g_2
 */
int32_t  func_201(int32_t  p_202, int16_t  p_203, uint8_t * p_204, int8_t  p_205, int32_t * p_206, struct S2 * p_1242)
{ /* block id: 114 */
    int32_t l_223 = 0L;
    VECTOR(uint8_t, 8) l_224 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 4UL), 4UL), 4UL, 0UL, 4UL);
    VECTOR(uint8_t, 8) l_225 = (VECTOR(uint8_t, 8))(0x11L, (VECTOR(uint8_t, 4))(0x11L, (VECTOR(uint8_t, 2))(0x11L, 0xE0L), 0xE0L), 0xE0L, 0x11L, 0xE0L);
    uint32_t *l_230 = (void*)0;
    uint32_t *l_231[9][5] = {{&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232},{&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232},{&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232},{&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232},{&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232},{&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232},{&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232},{&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232},{&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232,&p_1242->g_232}};
    int32_t *l_238[3];
    int32_t **l_237 = &l_238[1];
    int32_t ***l_239 = &l_237;
    int16_t *l_248 = &p_1242->g_175;
    uint16_t *l_249 = (void*)0;
    uint16_t *l_250 = (void*)0;
    uint16_t *l_251[5];
    int8_t l_254 = (-5L);
    int i, j;
    for (i = 0; i < 3; i++)
        l_238[i] = &p_1242->g_11;
    for (i = 0; i < 5; i++)
        l_251[i] = &p_1242->g_252;
    (*p_1242->g_209) = ((((!((safe_div_func_int32_t_s_s((+(l_223 , (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0x44F47581L, 5UL)), 0x675CE39CL, 0x7F16BB94L, ((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 2))(5UL, 0UL)).xxyyyxxyyyxxyyyy, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(l_224.s5310124023261743)).odd)))), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_225.s7214656357420217)))).lo))).s1132525416155607)), ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))((safe_add_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((p_1242->g_232 = p_1242->g_213) , ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((p_1242->g_213 , &p_1242->g_209) == ((*l_239) = l_237)) <= (safe_sub_func_int16_t_s_s((p_1242->g_253 = (safe_mul_func_int8_t_s_s(((p_1242->g_252 = ((0x2E6BA0D8L & ((FAKE_DIVERGE(p_1242->global_0_offset, get_global_id(0), 10) != (safe_mul_func_uint8_t_u_u(((((*l_248) &= (safe_mod_func_int64_t_s_s((&p_1242->g_232 == &p_1242->g_232), GROUP_DIVERGE(1, 1)))) <= 5L) , p_1242->g_38[1]), (-1L)))) == 4294967295UL)) || 0x868DB944L)) , p_1242->g_3[2]), p_1242->g_38[1]))), 1UL))), 6)), p_1242->g_comm_values[p_1242->tid])) < p_202)), 18446744073709551615UL)), l_254)), 0xAA00L, 1UL, 0x2D27L)).yxwwxyywzxwzxzxx)).s9d49, ((VECTOR(uint16_t, 4))(0x514BL))))).zwzyywzyywwyxzyw)))))))).s3, 4294967286UL, 1UL, 0xC0E798E6L)).s5 ^ (*p_206)))), (*p_1242->g_209))) & p_202)) == 3L) && (**l_237)) <= p_205);
    return (*p_206);
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j;
    __local volatile uint32_t l_atomic_input[51];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 51; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[51];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 51; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[19];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 19; i++)
            l_comm_values[i] = 1;
    struct S2 c_1243;
    struct S2* p_1242 = &c_1243;
    struct S2 c_1244 = {
        4L, // p_1242->g_2
        {0x2285FAAFL,0x2285FAAFL,0x2285FAAFL}, // p_1242->g_3
        0x45CCB972L, // p_1242->g_11
        (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L), (VECTOR(int8_t, 2))(1L, (-1L)), (VECTOR(int8_t, 2))(1L, (-1L)), 1L, (-1L), 1L, (-1L)), // p_1242->g_33
        (VECTOR(int8_t, 8))(0x69L, (VECTOR(int8_t, 4))(0x69L, (VECTOR(int8_t, 2))(0x69L, 2L), 2L), 2L, 0x69L, 2L), // p_1242->g_34
        {255UL,255UL,255UL,255UL,255UL,255UL}, // p_1242->g_38
        0UL, // p_1242->g_40
        18446744073709551613UL, // p_1242->g_171
        0x79DCL, // p_1242->g_175
        (VECTOR(uint32_t, 4))(0x15999812L, (VECTOR(uint32_t, 2))(0x15999812L, 0x7174AD0AL), 0x7174AD0AL), // p_1242->g_190
        &p_1242->g_2, // p_1242->g_209
        &p_1242->g_209, // p_1242->g_208
        0x67L, // p_1242->g_213
        {0xA111EAA1L,0xA111EAA1L,0xA111EAA1L}, // p_1242->g_220
        4294967287UL, // p_1242->g_232
        1UL, // p_1242->g_252
        7L, // p_1242->g_253
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x5F0FL), 0x5F0FL), 0x5F0FL, 65535UL, 0x5F0FL), // p_1242->g_255
        65535UL, // p_1242->g_260
        &p_1242->g_260, // p_1242->g_259
        &p_1242->g_259, // p_1242->g_258
        {-7L,0UL,0x2C13680DL,1UL,1L,4294967295UL,0x7BAC7EA1L}, // p_1242->g_312
        (VECTOR(int8_t, 4))(0x37L, (VECTOR(int8_t, 2))(0x37L, 0x29L), 0x29L), // p_1242->g_322
        {3L,1UL,1UL,0xE7049906E010D127L,0x4500L,0x3740FB63L,1L}, // p_1242->g_337
        (VECTOR(uint32_t, 2))(0x3973B306L, 0UL), // p_1242->g_358
        {1L,0UL,0UL,0xA2019C03D5967396L,5L,4294967295UL,0x0B0BCD4CL}, // p_1242->g_363
        {-9L}, // p_1242->g_382
        {0x6F1872BA1E27FDB5L}, // p_1242->g_383
        {0x5CE8F086L,0UL,0x48FED2C1L,0xF31FAF59C0206790L,1L,0UL,0x2D18D5C2L}, // p_1242->g_390
        {0x19280769L,0x278F0932EC395B7CL,1UL,0x1B6968DE9E0AD68CL,-2L,0xC04C6FC8L,4L}, // p_1242->g_399
        (VECTOR(uint16_t, 16))(0xB766L, (VECTOR(uint16_t, 4))(0xB766L, (VECTOR(uint16_t, 2))(0xB766L, 65533UL), 65533UL), 65533UL, 0xB766L, 65533UL, (VECTOR(uint16_t, 2))(0xB766L, 65533UL), (VECTOR(uint16_t, 2))(0xB766L, 65533UL), 0xB766L, 65533UL, 0xB766L, 65533UL), // p_1242->g_404
        &p_1242->g_11, // p_1242->g_413
        &p_1242->g_413, // p_1242->g_412
        {0x7B7334A7L,0xF643CFA673B5942FL,4294967294UL,0x9546FF733E19E8B5L,8L,9UL,0x048B8223L}, // p_1242->g_436
        18446744073709551615UL, // p_1242->g_453
        {{0x03D51DBBL,0UL,1UL,18446744073709551614UL,5L,0UL,0x6F17E24AL},{0x03D51DBBL,0UL,1UL,18446744073709551614UL,5L,0UL,0x6F17E24AL},{0x03D51DBBL,0UL,1UL,18446744073709551614UL,5L,0UL,0x6F17E24AL},{0x03D51DBBL,0UL,1UL,18446744073709551614UL,5L,0UL,0x6F17E24AL},{0x03D51DBBL,0UL,1UL,18446744073709551614UL,5L,0UL,0x6F17E24AL},{0x03D51DBBL,0UL,1UL,18446744073709551614UL,5L,0UL,0x6F17E24AL},{0x03D51DBBL,0UL,1UL,18446744073709551614UL,5L,0UL,0x6F17E24AL},{0x03D51DBBL,0UL,1UL,18446744073709551614UL,5L,0UL,0x6F17E24AL},{0x03D51DBBL,0UL,1UL,18446744073709551614UL,5L,0UL,0x6F17E24AL},{0x03D51DBBL,0UL,1UL,18446744073709551614UL,5L,0UL,0x6F17E24AL}}, // p_1242->g_459
        {{{6L,0x9AC1EDD4D42CCD14L,0xAA7512BAL,0xEA97BF32AAA48F82L,3L,4294967289UL,0x3498909DL},{0L,0x39E85AC3EFE719F6L,0xFBD7C555L,18446744073709551615UL,0x7D49L,4294967294UL,1L},{0L,0x39E85AC3EFE719F6L,0xFBD7C555L,18446744073709551615UL,0x7D49L,4294967294UL,1L},{6L,0x9AC1EDD4D42CCD14L,0xAA7512BAL,0xEA97BF32AAA48F82L,3L,4294967289UL,0x3498909DL},{-3L,0UL,0x4FF5EB4CL,0xA0F89E9E98AA75FDL,0x3D6AL,0x94427D57L,1L},{1L,0xF38AF548DC20C867L,2UL,3UL,0x657FL,4294967294UL,1L},{0x41A5AA99L,18446744073709551615UL,0UL,18446744073709551609UL,-3L,4UL,0x33298365L},{0x69CE8A91L,18446744073709551615UL,0x0C17E8F0L,18446744073709551609UL,0x0AB4L,6UL,0L},{1L,18446744073709551607UL,0UL,0xE2D8CB35601EB904L,0L,4294967290UL,-3L},{0x46A068D9L,18446744073709551615UL,0xCDD8DD23L,18446744073709551615UL,0L,0x073B8233L,0x58A9DCF0L}},{{6L,0x9AC1EDD4D42CCD14L,0xAA7512BAL,0xEA97BF32AAA48F82L,3L,4294967289UL,0x3498909DL},{0L,0x39E85AC3EFE719F6L,0xFBD7C555L,18446744073709551615UL,0x7D49L,4294967294UL,1L},{0L,0x39E85AC3EFE719F6L,0xFBD7C555L,18446744073709551615UL,0x7D49L,4294967294UL,1L},{6L,0x9AC1EDD4D42CCD14L,0xAA7512BAL,0xEA97BF32AAA48F82L,3L,4294967289UL,0x3498909DL},{-3L,0UL,0x4FF5EB4CL,0xA0F89E9E98AA75FDL,0x3D6AL,0x94427D57L,1L},{1L,0xF38AF548DC20C867L,2UL,3UL,0x657FL,4294967294UL,1L},{0x41A5AA99L,18446744073709551615UL,0UL,18446744073709551609UL,-3L,4UL,0x33298365L},{0x69CE8A91L,18446744073709551615UL,0x0C17E8F0L,18446744073709551609UL,0x0AB4L,6UL,0L},{1L,18446744073709551607UL,0UL,0xE2D8CB35601EB904L,0L,4294967290UL,-3L},{0x46A068D9L,18446744073709551615UL,0xCDD8DD23L,18446744073709551615UL,0L,0x073B8233L,0x58A9DCF0L}},{{6L,0x9AC1EDD4D42CCD14L,0xAA7512BAL,0xEA97BF32AAA48F82L,3L,4294967289UL,0x3498909DL},{0L,0x39E85AC3EFE719F6L,0xFBD7C555L,18446744073709551615UL,0x7D49L,4294967294UL,1L},{0L,0x39E85AC3EFE719F6L,0xFBD7C555L,18446744073709551615UL,0x7D49L,4294967294UL,1L},{6L,0x9AC1EDD4D42CCD14L,0xAA7512BAL,0xEA97BF32AAA48F82L,3L,4294967289UL,0x3498909DL},{-3L,0UL,0x4FF5EB4CL,0xA0F89E9E98AA75FDL,0x3D6AL,0x94427D57L,1L},{1L,0xF38AF548DC20C867L,2UL,3UL,0x657FL,4294967294UL,1L},{0x41A5AA99L,18446744073709551615UL,0UL,18446744073709551609UL,-3L,4UL,0x33298365L},{0x69CE8A91L,18446744073709551615UL,0x0C17E8F0L,18446744073709551609UL,0x0AB4L,6UL,0L},{1L,18446744073709551607UL,0UL,0xE2D8CB35601EB904L,0L,4294967290UL,-3L},{0x46A068D9L,18446744073709551615UL,0xCDD8DD23L,18446744073709551615UL,0L,0x073B8233L,0x58A9DCF0L}},{{6L,0x9AC1EDD4D42CCD14L,0xAA7512BAL,0xEA97BF32AAA48F82L,3L,4294967289UL,0x3498909DL},{0L,0x39E85AC3EFE719F6L,0xFBD7C555L,18446744073709551615UL,0x7D49L,4294967294UL,1L},{0L,0x39E85AC3EFE719F6L,0xFBD7C555L,18446744073709551615UL,0x7D49L,4294967294UL,1L},{6L,0x9AC1EDD4D42CCD14L,0xAA7512BAL,0xEA97BF32AAA48F82L,3L,4294967289UL,0x3498909DL},{-3L,0UL,0x4FF5EB4CL,0xA0F89E9E98AA75FDL,0x3D6AL,0x94427D57L,1L},{1L,0xF38AF548DC20C867L,2UL,3UL,0x657FL,4294967294UL,1L},{0x41A5AA99L,18446744073709551615UL,0UL,18446744073709551609UL,-3L,4UL,0x33298365L},{0x69CE8A91L,18446744073709551615UL,0x0C17E8F0L,18446744073709551609UL,0x0AB4L,6UL,0L},{1L,18446744073709551607UL,0UL,0xE2D8CB35601EB904L,0L,4294967290UL,-3L},{0x46A068D9L,18446744073709551615UL,0xCDD8DD23L,18446744073709551615UL,0L,0x073B8233L,0x58A9DCF0L}},{{6L,0x9AC1EDD4D42CCD14L,0xAA7512BAL,0xEA97BF32AAA48F82L,3L,4294967289UL,0x3498909DL},{0L,0x39E85AC3EFE719F6L,0xFBD7C555L,18446744073709551615UL,0x7D49L,4294967294UL,1L},{0L,0x39E85AC3EFE719F6L,0xFBD7C555L,18446744073709551615UL,0x7D49L,4294967294UL,1L},{6L,0x9AC1EDD4D42CCD14L,0xAA7512BAL,0xEA97BF32AAA48F82L,3L,4294967289UL,0x3498909DL},{-3L,0UL,0x4FF5EB4CL,0xA0F89E9E98AA75FDL,0x3D6AL,0x94427D57L,1L},{1L,0xF38AF548DC20C867L,2UL,3UL,0x657FL,4294967294UL,1L},{0x41A5AA99L,18446744073709551615UL,0UL,18446744073709551609UL,-3L,4UL,0x33298365L},{0x69CE8A91L,18446744073709551615UL,0x0C17E8F0L,18446744073709551609UL,0x0AB4L,6UL,0L},{1L,18446744073709551607UL,0UL,0xE2D8CB35601EB904L,0L,4294967290UL,-3L},{0x46A068D9L,18446744073709551615UL,0xCDD8DD23L,18446744073709551615UL,0L,0x073B8233L,0x58A9DCF0L}}}, // p_1242->g_462
        {{-8L,0UL,0xBC06E232L,0xE0097DD6E7609E35L,0x1D36L,0x1F65CFEAL,0x504B8664L}}, // p_1242->g_465
        (VECTOR(uint8_t, 8))(253UL, (VECTOR(uint8_t, 4))(253UL, (VECTOR(uint8_t, 2))(253UL, 0xEDL), 0xEDL), 0xEDL, 253UL, 0xEDL), // p_1242->g_490
        (VECTOR(uint16_t, 8))(0x5353L, (VECTOR(uint16_t, 4))(0x5353L, (VECTOR(uint16_t, 2))(0x5353L, 0x946EL), 0x946EL), 0x946EL, 0x5353L, 0x946EL), // p_1242->g_500
        4294967295UL, // p_1242->g_544
        {-8L,0UL,6UL,9UL,1L,0UL,0x21D7B833L}, // p_1242->g_553
        (VECTOR(uint8_t, 2))(0xF9L, 3UL), // p_1242->g_564
        {0x76302099L,0UL,0x69C96E57L,18446744073709551613UL,2L,0x76BD69A6L,0x0504405BL}, // p_1242->g_587
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x0DEF5F75F21DE3E4L), 0x0DEF5F75F21DE3E4L), 0x0DEF5F75F21DE3E4L, (-1L), 0x0DEF5F75F21DE3E4L, (VECTOR(int64_t, 2))((-1L), 0x0DEF5F75F21DE3E4L), (VECTOR(int64_t, 2))((-1L), 0x0DEF5F75F21DE3E4L), (-1L), 0x0DEF5F75F21DE3E4L, (-1L), 0x0DEF5F75F21DE3E4L), // p_1242->g_610
        (-9L), // p_1242->g_612
        (VECTOR(int8_t, 4))(0x33L, (VECTOR(int8_t, 2))(0x33L, 8L), 8L), // p_1242->g_634
        {-1L,0x58FE24823B7ECBD4L,0xF46AE2ECL,0xBB2338270AC7E758L,0x5253L,0x06760E6EL,0L}, // p_1242->g_663
        1UL, // p_1242->g_675
        {0x47FD870EL,0xC90F7C7EF360CC79L,0x07CC51C5L,0x5C4F5446C5D5B3A3L,0x1927L,0xEC5C4540L,7L}, // p_1242->g_698
        (void*)0, // p_1242->g_704
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_1242->g_899
        &p_1242->g_899[1][2], // p_1242->g_898
        (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-1L)), (-1L)), (-1L), 3L, (-1L), (VECTOR(int32_t, 2))(3L, (-1L)), (VECTOR(int32_t, 2))(3L, (-1L)), 3L, (-1L), 3L, (-1L)), // p_1242->g_903
        0x0E36AF53L, // p_1242->g_904
        (VECTOR(uint8_t, 16))(2UL, (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0x75L), 0x75L), 0x75L, 2UL, 0x75L, (VECTOR(uint8_t, 2))(2UL, 0x75L), (VECTOR(uint8_t, 2))(2UL, 0x75L), 2UL, 0x75L, 2UL, 0x75L), // p_1242->g_964
        &p_1242->g_220[0], // p_1242->g_967
        {&p_1242->g_967,&p_1242->g_967,&p_1242->g_967,&p_1242->g_967,&p_1242->g_967,&p_1242->g_967,&p_1242->g_967,&p_1242->g_967,&p_1242->g_967}, // p_1242->g_966
        &p_1242->g_966[0], // p_1242->g_965
        (VECTOR(int32_t, 2))(0x00C33F74L, 1L), // p_1242->g_978
        (VECTOR(uint8_t, 16))(0xDEL, (VECTOR(uint8_t, 4))(0xDEL, (VECTOR(uint8_t, 2))(0xDEL, 0x2BL), 0x2BL), 0x2BL, 0xDEL, 0x2BL, (VECTOR(uint8_t, 2))(0xDEL, 0x2BL), (VECTOR(uint8_t, 2))(0xDEL, 0x2BL), 0xDEL, 0x2BL, 0xDEL, 0x2BL), // p_1242->g_985
        &p_1242->g_232, // p_1242->g_994
        &p_1242->g_994, // p_1242->g_993
        (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x32L), 0x32L), 0x32L, 0L, 0x32L, (VECTOR(int8_t, 2))(0L, 0x32L), (VECTOR(int8_t, 2))(0L, 0x32L), 0L, 0x32L, 0L, 0x32L), // p_1242->g_1008
        &p_1242->g_413, // p_1242->g_1056
        (void*)0, // p_1242->g_1057
        (void*)0, // p_1242->g_1067
        &p_1242->g_1067, // p_1242->g_1066
        &p_1242->g_413, // p_1242->g_1098
        {0x5CCE4404L,0x9D15784FE7FC2C5DL,0xED675802L,18446744073709551609UL,0x15F9L,4294967291UL,1L}, // p_1242->g_1099
        (VECTOR(int32_t, 2))((-1L), 0L), // p_1242->g_1130
        (VECTOR(uint16_t, 2))(0x8363L, 0xA5A4L), // p_1242->g_1134
        {-1L,1UL,4294967295UL,18446744073709551615UL,0x7A83L,0x31780578L,0x29C073A4L}, // p_1242->g_1151
        (VECTOR(uint8_t, 8))(0xF6L, (VECTOR(uint8_t, 4))(0xF6L, (VECTOR(uint8_t, 2))(0xF6L, 0x94L), 0x94L), 0x94L, 0xF6L, 0x94L), // p_1242->g_1155
        0, // p_1242->v_collective
        sequence_input[get_global_id(0)], // p_1242->global_0_offset
        sequence_input[get_global_id(1)], // p_1242->global_1_offset
        sequence_input[get_global_id(2)], // p_1242->global_2_offset
        sequence_input[get_local_id(0)], // p_1242->local_0_offset
        sequence_input[get_local_id(1)], // p_1242->local_1_offset
        sequence_input[get_local_id(2)], // p_1242->local_2_offset
        sequence_input[get_group_id(0)], // p_1242->group_0_offset
        sequence_input[get_group_id(1)], // p_1242->group_1_offset
        sequence_input[get_group_id(2)], // p_1242->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 19)), permutations[0][get_linear_local_id()])), // p_1242->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1243 = c_1244;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1242);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1242->g_2, "p_1242->g_2", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1242->g_3[i], "p_1242->g_3[i]", print_hash_value);

    }
    transparent_crc(p_1242->g_11, "p_1242->g_11", print_hash_value);
    transparent_crc(p_1242->g_33.s0, "p_1242->g_33.s0", print_hash_value);
    transparent_crc(p_1242->g_33.s1, "p_1242->g_33.s1", print_hash_value);
    transparent_crc(p_1242->g_33.s2, "p_1242->g_33.s2", print_hash_value);
    transparent_crc(p_1242->g_33.s3, "p_1242->g_33.s3", print_hash_value);
    transparent_crc(p_1242->g_33.s4, "p_1242->g_33.s4", print_hash_value);
    transparent_crc(p_1242->g_33.s5, "p_1242->g_33.s5", print_hash_value);
    transparent_crc(p_1242->g_33.s6, "p_1242->g_33.s6", print_hash_value);
    transparent_crc(p_1242->g_33.s7, "p_1242->g_33.s7", print_hash_value);
    transparent_crc(p_1242->g_33.s8, "p_1242->g_33.s8", print_hash_value);
    transparent_crc(p_1242->g_33.s9, "p_1242->g_33.s9", print_hash_value);
    transparent_crc(p_1242->g_33.sa, "p_1242->g_33.sa", print_hash_value);
    transparent_crc(p_1242->g_33.sb, "p_1242->g_33.sb", print_hash_value);
    transparent_crc(p_1242->g_33.sc, "p_1242->g_33.sc", print_hash_value);
    transparent_crc(p_1242->g_33.sd, "p_1242->g_33.sd", print_hash_value);
    transparent_crc(p_1242->g_33.se, "p_1242->g_33.se", print_hash_value);
    transparent_crc(p_1242->g_33.sf, "p_1242->g_33.sf", print_hash_value);
    transparent_crc(p_1242->g_34.s0, "p_1242->g_34.s0", print_hash_value);
    transparent_crc(p_1242->g_34.s1, "p_1242->g_34.s1", print_hash_value);
    transparent_crc(p_1242->g_34.s2, "p_1242->g_34.s2", print_hash_value);
    transparent_crc(p_1242->g_34.s3, "p_1242->g_34.s3", print_hash_value);
    transparent_crc(p_1242->g_34.s4, "p_1242->g_34.s4", print_hash_value);
    transparent_crc(p_1242->g_34.s5, "p_1242->g_34.s5", print_hash_value);
    transparent_crc(p_1242->g_34.s6, "p_1242->g_34.s6", print_hash_value);
    transparent_crc(p_1242->g_34.s7, "p_1242->g_34.s7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1242->g_38[i], "p_1242->g_38[i]", print_hash_value);

    }
    transparent_crc(p_1242->g_40, "p_1242->g_40", print_hash_value);
    transparent_crc(p_1242->g_171, "p_1242->g_171", print_hash_value);
    transparent_crc(p_1242->g_175, "p_1242->g_175", print_hash_value);
    transparent_crc(p_1242->g_190.x, "p_1242->g_190.x", print_hash_value);
    transparent_crc(p_1242->g_190.y, "p_1242->g_190.y", print_hash_value);
    transparent_crc(p_1242->g_190.z, "p_1242->g_190.z", print_hash_value);
    transparent_crc(p_1242->g_190.w, "p_1242->g_190.w", print_hash_value);
    transparent_crc(p_1242->g_213, "p_1242->g_213", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1242->g_220[i], "p_1242->g_220[i]", print_hash_value);

    }
    transparent_crc(p_1242->g_232, "p_1242->g_232", print_hash_value);
    transparent_crc(p_1242->g_252, "p_1242->g_252", print_hash_value);
    transparent_crc(p_1242->g_253, "p_1242->g_253", print_hash_value);
    transparent_crc(p_1242->g_255.s0, "p_1242->g_255.s0", print_hash_value);
    transparent_crc(p_1242->g_255.s1, "p_1242->g_255.s1", print_hash_value);
    transparent_crc(p_1242->g_255.s2, "p_1242->g_255.s2", print_hash_value);
    transparent_crc(p_1242->g_255.s3, "p_1242->g_255.s3", print_hash_value);
    transparent_crc(p_1242->g_255.s4, "p_1242->g_255.s4", print_hash_value);
    transparent_crc(p_1242->g_255.s5, "p_1242->g_255.s5", print_hash_value);
    transparent_crc(p_1242->g_255.s6, "p_1242->g_255.s6", print_hash_value);
    transparent_crc(p_1242->g_255.s7, "p_1242->g_255.s7", print_hash_value);
    transparent_crc(p_1242->g_260, "p_1242->g_260", print_hash_value);
    transparent_crc(p_1242->g_312.f0, "p_1242->g_312.f0", print_hash_value);
    transparent_crc(p_1242->g_312.f1, "p_1242->g_312.f1", print_hash_value);
    transparent_crc(p_1242->g_312.f2, "p_1242->g_312.f2", print_hash_value);
    transparent_crc(p_1242->g_312.f3, "p_1242->g_312.f3", print_hash_value);
    transparent_crc(p_1242->g_312.f4, "p_1242->g_312.f4", print_hash_value);
    transparent_crc(p_1242->g_312.f5, "p_1242->g_312.f5", print_hash_value);
    transparent_crc(p_1242->g_312.f6, "p_1242->g_312.f6", print_hash_value);
    transparent_crc(p_1242->g_322.x, "p_1242->g_322.x", print_hash_value);
    transparent_crc(p_1242->g_322.y, "p_1242->g_322.y", print_hash_value);
    transparent_crc(p_1242->g_322.z, "p_1242->g_322.z", print_hash_value);
    transparent_crc(p_1242->g_322.w, "p_1242->g_322.w", print_hash_value);
    transparent_crc(p_1242->g_337.f0, "p_1242->g_337.f0", print_hash_value);
    transparent_crc(p_1242->g_337.f1, "p_1242->g_337.f1", print_hash_value);
    transparent_crc(p_1242->g_337.f2, "p_1242->g_337.f2", print_hash_value);
    transparent_crc(p_1242->g_337.f3, "p_1242->g_337.f3", print_hash_value);
    transparent_crc(p_1242->g_337.f4, "p_1242->g_337.f4", print_hash_value);
    transparent_crc(p_1242->g_337.f5, "p_1242->g_337.f5", print_hash_value);
    transparent_crc(p_1242->g_337.f6, "p_1242->g_337.f6", print_hash_value);
    transparent_crc(p_1242->g_358.x, "p_1242->g_358.x", print_hash_value);
    transparent_crc(p_1242->g_358.y, "p_1242->g_358.y", print_hash_value);
    transparent_crc(p_1242->g_363.f0, "p_1242->g_363.f0", print_hash_value);
    transparent_crc(p_1242->g_363.f1, "p_1242->g_363.f1", print_hash_value);
    transparent_crc(p_1242->g_363.f2, "p_1242->g_363.f2", print_hash_value);
    transparent_crc(p_1242->g_363.f3, "p_1242->g_363.f3", print_hash_value);
    transparent_crc(p_1242->g_363.f4, "p_1242->g_363.f4", print_hash_value);
    transparent_crc(p_1242->g_363.f5, "p_1242->g_363.f5", print_hash_value);
    transparent_crc(p_1242->g_363.f6, "p_1242->g_363.f6", print_hash_value);
    transparent_crc(p_1242->g_382.f0, "p_1242->g_382.f0", print_hash_value);
    transparent_crc(p_1242->g_383.f0, "p_1242->g_383.f0", print_hash_value);
    transparent_crc(p_1242->g_390.f0, "p_1242->g_390.f0", print_hash_value);
    transparent_crc(p_1242->g_390.f1, "p_1242->g_390.f1", print_hash_value);
    transparent_crc(p_1242->g_390.f2, "p_1242->g_390.f2", print_hash_value);
    transparent_crc(p_1242->g_390.f3, "p_1242->g_390.f3", print_hash_value);
    transparent_crc(p_1242->g_390.f4, "p_1242->g_390.f4", print_hash_value);
    transparent_crc(p_1242->g_390.f5, "p_1242->g_390.f5", print_hash_value);
    transparent_crc(p_1242->g_390.f6, "p_1242->g_390.f6", print_hash_value);
    transparent_crc(p_1242->g_399.f0, "p_1242->g_399.f0", print_hash_value);
    transparent_crc(p_1242->g_399.f1, "p_1242->g_399.f1", print_hash_value);
    transparent_crc(p_1242->g_399.f2, "p_1242->g_399.f2", print_hash_value);
    transparent_crc(p_1242->g_399.f3, "p_1242->g_399.f3", print_hash_value);
    transparent_crc(p_1242->g_399.f4, "p_1242->g_399.f4", print_hash_value);
    transparent_crc(p_1242->g_399.f5, "p_1242->g_399.f5", print_hash_value);
    transparent_crc(p_1242->g_399.f6, "p_1242->g_399.f6", print_hash_value);
    transparent_crc(p_1242->g_404.s0, "p_1242->g_404.s0", print_hash_value);
    transparent_crc(p_1242->g_404.s1, "p_1242->g_404.s1", print_hash_value);
    transparent_crc(p_1242->g_404.s2, "p_1242->g_404.s2", print_hash_value);
    transparent_crc(p_1242->g_404.s3, "p_1242->g_404.s3", print_hash_value);
    transparent_crc(p_1242->g_404.s4, "p_1242->g_404.s4", print_hash_value);
    transparent_crc(p_1242->g_404.s5, "p_1242->g_404.s5", print_hash_value);
    transparent_crc(p_1242->g_404.s6, "p_1242->g_404.s6", print_hash_value);
    transparent_crc(p_1242->g_404.s7, "p_1242->g_404.s7", print_hash_value);
    transparent_crc(p_1242->g_404.s8, "p_1242->g_404.s8", print_hash_value);
    transparent_crc(p_1242->g_404.s9, "p_1242->g_404.s9", print_hash_value);
    transparent_crc(p_1242->g_404.sa, "p_1242->g_404.sa", print_hash_value);
    transparent_crc(p_1242->g_404.sb, "p_1242->g_404.sb", print_hash_value);
    transparent_crc(p_1242->g_404.sc, "p_1242->g_404.sc", print_hash_value);
    transparent_crc(p_1242->g_404.sd, "p_1242->g_404.sd", print_hash_value);
    transparent_crc(p_1242->g_404.se, "p_1242->g_404.se", print_hash_value);
    transparent_crc(p_1242->g_404.sf, "p_1242->g_404.sf", print_hash_value);
    transparent_crc(p_1242->g_436.f0, "p_1242->g_436.f0", print_hash_value);
    transparent_crc(p_1242->g_436.f1, "p_1242->g_436.f1", print_hash_value);
    transparent_crc(p_1242->g_436.f2, "p_1242->g_436.f2", print_hash_value);
    transparent_crc(p_1242->g_436.f3, "p_1242->g_436.f3", print_hash_value);
    transparent_crc(p_1242->g_436.f4, "p_1242->g_436.f4", print_hash_value);
    transparent_crc(p_1242->g_436.f5, "p_1242->g_436.f5", print_hash_value);
    transparent_crc(p_1242->g_436.f6, "p_1242->g_436.f6", print_hash_value);
    transparent_crc(p_1242->g_453, "p_1242->g_453", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1242->g_459[i].f0, "p_1242->g_459[i].f0", print_hash_value);
        transparent_crc(p_1242->g_459[i].f1, "p_1242->g_459[i].f1", print_hash_value);
        transparent_crc(p_1242->g_459[i].f2, "p_1242->g_459[i].f2", print_hash_value);
        transparent_crc(p_1242->g_459[i].f3, "p_1242->g_459[i].f3", print_hash_value);
        transparent_crc(p_1242->g_459[i].f4, "p_1242->g_459[i].f4", print_hash_value);
        transparent_crc(p_1242->g_459[i].f5, "p_1242->g_459[i].f5", print_hash_value);
        transparent_crc(p_1242->g_459[i].f6, "p_1242->g_459[i].f6", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1242->g_462[i][j].f0, "p_1242->g_462[i][j].f0", print_hash_value);
            transparent_crc(p_1242->g_462[i][j].f1, "p_1242->g_462[i][j].f1", print_hash_value);
            transparent_crc(p_1242->g_462[i][j].f2, "p_1242->g_462[i][j].f2", print_hash_value);
            transparent_crc(p_1242->g_462[i][j].f3, "p_1242->g_462[i][j].f3", print_hash_value);
            transparent_crc(p_1242->g_462[i][j].f4, "p_1242->g_462[i][j].f4", print_hash_value);
            transparent_crc(p_1242->g_462[i][j].f5, "p_1242->g_462[i][j].f5", print_hash_value);
            transparent_crc(p_1242->g_462[i][j].f6, "p_1242->g_462[i][j].f6", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1242->g_465[i].f0, "p_1242->g_465[i].f0", print_hash_value);
        transparent_crc(p_1242->g_465[i].f1, "p_1242->g_465[i].f1", print_hash_value);
        transparent_crc(p_1242->g_465[i].f2, "p_1242->g_465[i].f2", print_hash_value);
        transparent_crc(p_1242->g_465[i].f3, "p_1242->g_465[i].f3", print_hash_value);
        transparent_crc(p_1242->g_465[i].f4, "p_1242->g_465[i].f4", print_hash_value);
        transparent_crc(p_1242->g_465[i].f5, "p_1242->g_465[i].f5", print_hash_value);
        transparent_crc(p_1242->g_465[i].f6, "p_1242->g_465[i].f6", print_hash_value);

    }
    transparent_crc(p_1242->g_490.s0, "p_1242->g_490.s0", print_hash_value);
    transparent_crc(p_1242->g_490.s1, "p_1242->g_490.s1", print_hash_value);
    transparent_crc(p_1242->g_490.s2, "p_1242->g_490.s2", print_hash_value);
    transparent_crc(p_1242->g_490.s3, "p_1242->g_490.s3", print_hash_value);
    transparent_crc(p_1242->g_490.s4, "p_1242->g_490.s4", print_hash_value);
    transparent_crc(p_1242->g_490.s5, "p_1242->g_490.s5", print_hash_value);
    transparent_crc(p_1242->g_490.s6, "p_1242->g_490.s6", print_hash_value);
    transparent_crc(p_1242->g_490.s7, "p_1242->g_490.s7", print_hash_value);
    transparent_crc(p_1242->g_500.s0, "p_1242->g_500.s0", print_hash_value);
    transparent_crc(p_1242->g_500.s1, "p_1242->g_500.s1", print_hash_value);
    transparent_crc(p_1242->g_500.s2, "p_1242->g_500.s2", print_hash_value);
    transparent_crc(p_1242->g_500.s3, "p_1242->g_500.s3", print_hash_value);
    transparent_crc(p_1242->g_500.s4, "p_1242->g_500.s4", print_hash_value);
    transparent_crc(p_1242->g_500.s5, "p_1242->g_500.s5", print_hash_value);
    transparent_crc(p_1242->g_500.s6, "p_1242->g_500.s6", print_hash_value);
    transparent_crc(p_1242->g_500.s7, "p_1242->g_500.s7", print_hash_value);
    transparent_crc(p_1242->g_544, "p_1242->g_544", print_hash_value);
    transparent_crc(p_1242->g_553.f0, "p_1242->g_553.f0", print_hash_value);
    transparent_crc(p_1242->g_553.f1, "p_1242->g_553.f1", print_hash_value);
    transparent_crc(p_1242->g_553.f2, "p_1242->g_553.f2", print_hash_value);
    transparent_crc(p_1242->g_553.f3, "p_1242->g_553.f3", print_hash_value);
    transparent_crc(p_1242->g_553.f4, "p_1242->g_553.f4", print_hash_value);
    transparent_crc(p_1242->g_553.f5, "p_1242->g_553.f5", print_hash_value);
    transparent_crc(p_1242->g_553.f6, "p_1242->g_553.f6", print_hash_value);
    transparent_crc(p_1242->g_564.x, "p_1242->g_564.x", print_hash_value);
    transparent_crc(p_1242->g_564.y, "p_1242->g_564.y", print_hash_value);
    transparent_crc(p_1242->g_587.f0, "p_1242->g_587.f0", print_hash_value);
    transparent_crc(p_1242->g_587.f1, "p_1242->g_587.f1", print_hash_value);
    transparent_crc(p_1242->g_587.f2, "p_1242->g_587.f2", print_hash_value);
    transparent_crc(p_1242->g_587.f3, "p_1242->g_587.f3", print_hash_value);
    transparent_crc(p_1242->g_587.f4, "p_1242->g_587.f4", print_hash_value);
    transparent_crc(p_1242->g_587.f5, "p_1242->g_587.f5", print_hash_value);
    transparent_crc(p_1242->g_587.f6, "p_1242->g_587.f6", print_hash_value);
    transparent_crc(p_1242->g_610.s0, "p_1242->g_610.s0", print_hash_value);
    transparent_crc(p_1242->g_610.s1, "p_1242->g_610.s1", print_hash_value);
    transparent_crc(p_1242->g_610.s2, "p_1242->g_610.s2", print_hash_value);
    transparent_crc(p_1242->g_610.s3, "p_1242->g_610.s3", print_hash_value);
    transparent_crc(p_1242->g_610.s4, "p_1242->g_610.s4", print_hash_value);
    transparent_crc(p_1242->g_610.s5, "p_1242->g_610.s5", print_hash_value);
    transparent_crc(p_1242->g_610.s6, "p_1242->g_610.s6", print_hash_value);
    transparent_crc(p_1242->g_610.s7, "p_1242->g_610.s7", print_hash_value);
    transparent_crc(p_1242->g_610.s8, "p_1242->g_610.s8", print_hash_value);
    transparent_crc(p_1242->g_610.s9, "p_1242->g_610.s9", print_hash_value);
    transparent_crc(p_1242->g_610.sa, "p_1242->g_610.sa", print_hash_value);
    transparent_crc(p_1242->g_610.sb, "p_1242->g_610.sb", print_hash_value);
    transparent_crc(p_1242->g_610.sc, "p_1242->g_610.sc", print_hash_value);
    transparent_crc(p_1242->g_610.sd, "p_1242->g_610.sd", print_hash_value);
    transparent_crc(p_1242->g_610.se, "p_1242->g_610.se", print_hash_value);
    transparent_crc(p_1242->g_610.sf, "p_1242->g_610.sf", print_hash_value);
    transparent_crc(p_1242->g_612, "p_1242->g_612", print_hash_value);
    transparent_crc(p_1242->g_634.x, "p_1242->g_634.x", print_hash_value);
    transparent_crc(p_1242->g_634.y, "p_1242->g_634.y", print_hash_value);
    transparent_crc(p_1242->g_634.z, "p_1242->g_634.z", print_hash_value);
    transparent_crc(p_1242->g_634.w, "p_1242->g_634.w", print_hash_value);
    transparent_crc(p_1242->g_663.f0, "p_1242->g_663.f0", print_hash_value);
    transparent_crc(p_1242->g_663.f1, "p_1242->g_663.f1", print_hash_value);
    transparent_crc(p_1242->g_663.f2, "p_1242->g_663.f2", print_hash_value);
    transparent_crc(p_1242->g_663.f3, "p_1242->g_663.f3", print_hash_value);
    transparent_crc(p_1242->g_663.f4, "p_1242->g_663.f4", print_hash_value);
    transparent_crc(p_1242->g_663.f5, "p_1242->g_663.f5", print_hash_value);
    transparent_crc(p_1242->g_663.f6, "p_1242->g_663.f6", print_hash_value);
    transparent_crc(p_1242->g_675, "p_1242->g_675", print_hash_value);
    transparent_crc(p_1242->g_698.f0, "p_1242->g_698.f0", print_hash_value);
    transparent_crc(p_1242->g_698.f1, "p_1242->g_698.f1", print_hash_value);
    transparent_crc(p_1242->g_698.f2, "p_1242->g_698.f2", print_hash_value);
    transparent_crc(p_1242->g_698.f3, "p_1242->g_698.f3", print_hash_value);
    transparent_crc(p_1242->g_698.f4, "p_1242->g_698.f4", print_hash_value);
    transparent_crc(p_1242->g_698.f5, "p_1242->g_698.f5", print_hash_value);
    transparent_crc(p_1242->g_698.f6, "p_1242->g_698.f6", print_hash_value);
    transparent_crc(p_1242->g_903.s0, "p_1242->g_903.s0", print_hash_value);
    transparent_crc(p_1242->g_903.s1, "p_1242->g_903.s1", print_hash_value);
    transparent_crc(p_1242->g_903.s2, "p_1242->g_903.s2", print_hash_value);
    transparent_crc(p_1242->g_903.s3, "p_1242->g_903.s3", print_hash_value);
    transparent_crc(p_1242->g_903.s4, "p_1242->g_903.s4", print_hash_value);
    transparent_crc(p_1242->g_903.s5, "p_1242->g_903.s5", print_hash_value);
    transparent_crc(p_1242->g_903.s6, "p_1242->g_903.s6", print_hash_value);
    transparent_crc(p_1242->g_903.s7, "p_1242->g_903.s7", print_hash_value);
    transparent_crc(p_1242->g_903.s8, "p_1242->g_903.s8", print_hash_value);
    transparent_crc(p_1242->g_903.s9, "p_1242->g_903.s9", print_hash_value);
    transparent_crc(p_1242->g_903.sa, "p_1242->g_903.sa", print_hash_value);
    transparent_crc(p_1242->g_903.sb, "p_1242->g_903.sb", print_hash_value);
    transparent_crc(p_1242->g_903.sc, "p_1242->g_903.sc", print_hash_value);
    transparent_crc(p_1242->g_903.sd, "p_1242->g_903.sd", print_hash_value);
    transparent_crc(p_1242->g_903.se, "p_1242->g_903.se", print_hash_value);
    transparent_crc(p_1242->g_903.sf, "p_1242->g_903.sf", print_hash_value);
    transparent_crc(p_1242->g_904, "p_1242->g_904", print_hash_value);
    transparent_crc(p_1242->g_964.s0, "p_1242->g_964.s0", print_hash_value);
    transparent_crc(p_1242->g_964.s1, "p_1242->g_964.s1", print_hash_value);
    transparent_crc(p_1242->g_964.s2, "p_1242->g_964.s2", print_hash_value);
    transparent_crc(p_1242->g_964.s3, "p_1242->g_964.s3", print_hash_value);
    transparent_crc(p_1242->g_964.s4, "p_1242->g_964.s4", print_hash_value);
    transparent_crc(p_1242->g_964.s5, "p_1242->g_964.s5", print_hash_value);
    transparent_crc(p_1242->g_964.s6, "p_1242->g_964.s6", print_hash_value);
    transparent_crc(p_1242->g_964.s7, "p_1242->g_964.s7", print_hash_value);
    transparent_crc(p_1242->g_964.s8, "p_1242->g_964.s8", print_hash_value);
    transparent_crc(p_1242->g_964.s9, "p_1242->g_964.s9", print_hash_value);
    transparent_crc(p_1242->g_964.sa, "p_1242->g_964.sa", print_hash_value);
    transparent_crc(p_1242->g_964.sb, "p_1242->g_964.sb", print_hash_value);
    transparent_crc(p_1242->g_964.sc, "p_1242->g_964.sc", print_hash_value);
    transparent_crc(p_1242->g_964.sd, "p_1242->g_964.sd", print_hash_value);
    transparent_crc(p_1242->g_964.se, "p_1242->g_964.se", print_hash_value);
    transparent_crc(p_1242->g_964.sf, "p_1242->g_964.sf", print_hash_value);
    transparent_crc(p_1242->g_978.x, "p_1242->g_978.x", print_hash_value);
    transparent_crc(p_1242->g_978.y, "p_1242->g_978.y", print_hash_value);
    transparent_crc(p_1242->g_985.s0, "p_1242->g_985.s0", print_hash_value);
    transparent_crc(p_1242->g_985.s1, "p_1242->g_985.s1", print_hash_value);
    transparent_crc(p_1242->g_985.s2, "p_1242->g_985.s2", print_hash_value);
    transparent_crc(p_1242->g_985.s3, "p_1242->g_985.s3", print_hash_value);
    transparent_crc(p_1242->g_985.s4, "p_1242->g_985.s4", print_hash_value);
    transparent_crc(p_1242->g_985.s5, "p_1242->g_985.s5", print_hash_value);
    transparent_crc(p_1242->g_985.s6, "p_1242->g_985.s6", print_hash_value);
    transparent_crc(p_1242->g_985.s7, "p_1242->g_985.s7", print_hash_value);
    transparent_crc(p_1242->g_985.s8, "p_1242->g_985.s8", print_hash_value);
    transparent_crc(p_1242->g_985.s9, "p_1242->g_985.s9", print_hash_value);
    transparent_crc(p_1242->g_985.sa, "p_1242->g_985.sa", print_hash_value);
    transparent_crc(p_1242->g_985.sb, "p_1242->g_985.sb", print_hash_value);
    transparent_crc(p_1242->g_985.sc, "p_1242->g_985.sc", print_hash_value);
    transparent_crc(p_1242->g_985.sd, "p_1242->g_985.sd", print_hash_value);
    transparent_crc(p_1242->g_985.se, "p_1242->g_985.se", print_hash_value);
    transparent_crc(p_1242->g_985.sf, "p_1242->g_985.sf", print_hash_value);
    transparent_crc(p_1242->g_1008.s0, "p_1242->g_1008.s0", print_hash_value);
    transparent_crc(p_1242->g_1008.s1, "p_1242->g_1008.s1", print_hash_value);
    transparent_crc(p_1242->g_1008.s2, "p_1242->g_1008.s2", print_hash_value);
    transparent_crc(p_1242->g_1008.s3, "p_1242->g_1008.s3", print_hash_value);
    transparent_crc(p_1242->g_1008.s4, "p_1242->g_1008.s4", print_hash_value);
    transparent_crc(p_1242->g_1008.s5, "p_1242->g_1008.s5", print_hash_value);
    transparent_crc(p_1242->g_1008.s6, "p_1242->g_1008.s6", print_hash_value);
    transparent_crc(p_1242->g_1008.s7, "p_1242->g_1008.s7", print_hash_value);
    transparent_crc(p_1242->g_1008.s8, "p_1242->g_1008.s8", print_hash_value);
    transparent_crc(p_1242->g_1008.s9, "p_1242->g_1008.s9", print_hash_value);
    transparent_crc(p_1242->g_1008.sa, "p_1242->g_1008.sa", print_hash_value);
    transparent_crc(p_1242->g_1008.sb, "p_1242->g_1008.sb", print_hash_value);
    transparent_crc(p_1242->g_1008.sc, "p_1242->g_1008.sc", print_hash_value);
    transparent_crc(p_1242->g_1008.sd, "p_1242->g_1008.sd", print_hash_value);
    transparent_crc(p_1242->g_1008.se, "p_1242->g_1008.se", print_hash_value);
    transparent_crc(p_1242->g_1008.sf, "p_1242->g_1008.sf", print_hash_value);
    transparent_crc(p_1242->g_1099.f0, "p_1242->g_1099.f0", print_hash_value);
    transparent_crc(p_1242->g_1099.f1, "p_1242->g_1099.f1", print_hash_value);
    transparent_crc(p_1242->g_1099.f2, "p_1242->g_1099.f2", print_hash_value);
    transparent_crc(p_1242->g_1099.f3, "p_1242->g_1099.f3", print_hash_value);
    transparent_crc(p_1242->g_1099.f4, "p_1242->g_1099.f4", print_hash_value);
    transparent_crc(p_1242->g_1099.f5, "p_1242->g_1099.f5", print_hash_value);
    transparent_crc(p_1242->g_1099.f6, "p_1242->g_1099.f6", print_hash_value);
    transparent_crc(p_1242->g_1130.x, "p_1242->g_1130.x", print_hash_value);
    transparent_crc(p_1242->g_1130.y, "p_1242->g_1130.y", print_hash_value);
    transparent_crc(p_1242->g_1134.x, "p_1242->g_1134.x", print_hash_value);
    transparent_crc(p_1242->g_1134.y, "p_1242->g_1134.y", print_hash_value);
    transparent_crc(p_1242->g_1151.f0, "p_1242->g_1151.f0", print_hash_value);
    transparent_crc(p_1242->g_1151.f1, "p_1242->g_1151.f1", print_hash_value);
    transparent_crc(p_1242->g_1151.f2, "p_1242->g_1151.f2", print_hash_value);
    transparent_crc(p_1242->g_1151.f3, "p_1242->g_1151.f3", print_hash_value);
    transparent_crc(p_1242->g_1151.f4, "p_1242->g_1151.f4", print_hash_value);
    transparent_crc(p_1242->g_1151.f5, "p_1242->g_1151.f5", print_hash_value);
    transparent_crc(p_1242->g_1151.f6, "p_1242->g_1151.f6", print_hash_value);
    transparent_crc(p_1242->g_1155.s0, "p_1242->g_1155.s0", print_hash_value);
    transparent_crc(p_1242->g_1155.s1, "p_1242->g_1155.s1", print_hash_value);
    transparent_crc(p_1242->g_1155.s2, "p_1242->g_1155.s2", print_hash_value);
    transparent_crc(p_1242->g_1155.s3, "p_1242->g_1155.s3", print_hash_value);
    transparent_crc(p_1242->g_1155.s4, "p_1242->g_1155.s4", print_hash_value);
    transparent_crc(p_1242->g_1155.s5, "p_1242->g_1155.s5", print_hash_value);
    transparent_crc(p_1242->g_1155.s6, "p_1242->g_1155.s6", print_hash_value);
    transparent_crc(p_1242->g_1155.s7, "p_1242->g_1155.s7", print_hash_value);
    transparent_crc(p_1242->v_collective, "p_1242->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 51; i++)
            transparent_crc(p_1242->g_special_values[i + 51 * get_linear_group_id()], "p_1242->g_special_values[i + 51 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 51; i++)
            transparent_crc(p_1242->l_special_values[i], "p_1242->l_special_values[i]", print_hash_value);
    transparent_crc(p_1242->l_comm_values[get_linear_local_id()], "p_1242->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1242->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()], "p_1242->g_comm_values[get_linear_group_id() * 19 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
