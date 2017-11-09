// --atomics 38 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 8,57,6 -l 1,3,2
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

__constant uint32_t permutations[10][6] = {
{3,0,1,2,5,4}, // permutation 0
{1,2,5,3,0,4}, // permutation 1
{2,3,5,4,0,1}, // permutation 2
{1,5,0,2,3,4}, // permutation 3
{1,5,3,2,4,0}, // permutation 4
{1,0,2,4,3,5}, // permutation 5
{3,2,4,1,5,0}, // permutation 6
{1,2,5,3,4,0}, // permutation 7
{2,0,3,1,4,5}, // permutation 8
{4,2,5,3,1,0} // permutation 9
};

// Seed: 3107216255

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint8_t  f0;
   int16_t  f1;
   uint32_t  f2;
   volatile uint64_t  f3;
};

union U1 {
   int32_t  f0;
   volatile uint8_t  f1;
   uint64_t  f2;
};

struct S2 {
    volatile int32_t g_2;
    int32_t g_3;
    volatile union U0 g_6[9];
    volatile union U1 g_7[5];
    int16_t g_23;
    int32_t g_25;
    int64_t g_27;
    volatile int8_t g_28;
    volatile int32_t g_29;
    volatile int64_t g_30[10];
    volatile uint8_t g_31;
    uint8_t g_52;
    union U0 g_60[8];
    VECTOR(int32_t, 8) g_68;
    VECTOR(int32_t, 16) g_69;
    uint64_t g_84;
    uint32_t g_88;
    uint64_t g_99;
    uint64_t * volatile g_98;
    volatile VECTOR(int64_t, 16) g_103;
    int32_t g_117;
    uint64_t g_122;
    VECTOR(int32_t, 8) g_143;
    uint64_t g_156;
    int32_t *g_159;
    int32_t ** volatile g_158;
    volatile VECTOR(int8_t, 4) g_168;
    VECTOR(uint8_t, 2) g_170;
    VECTOR(uint8_t, 16) g_173;
    VECTOR(uint8_t, 16) g_174;
    int16_t *g_199[10][1][5];
    int16_t **g_198;
    VECTOR(int8_t, 2) g_226;
    union U0 g_235;
    union U0 *g_234;
    VECTOR(int64_t, 4) g_240;
    volatile VECTOR(uint16_t, 8) g_261;
    volatile VECTOR(int64_t, 8) g_262;
    volatile VECTOR(uint64_t, 4) g_335;
    VECTOR(int8_t, 2) g_336;
    uint32_t *g_376;
    uint16_t g_386[6][9];
    uint8_t g_400;
    VECTOR(uint8_t, 4) g_413;
    VECTOR(int64_t, 4) g_416;
    VECTOR(int64_t, 8) g_417;
    int32_t * volatile g_420[7];
    int32_t * volatile g_421;
    int16_t g_451;
    int32_t * volatile g_464;
    volatile uint64_t g_495;
    volatile uint64_t *g_494;
    volatile uint64_t **g_493;
    volatile uint64_t ** volatile *g_492[3];
    uint64_t g_496[5];
    int32_t g_504[8];
    int32_t * volatile *g_513;
    int32_t * volatile ** volatile g_512;
    uint16_t g_525;
    uint32_t g_540;
    volatile VECTOR(int16_t, 8) g_687;
    VECTOR(int16_t, 4) g_703;
    uint64_t g_726;
    VECTOR(uint16_t, 2) g_769;
    VECTOR(uint16_t, 16) g_770;
    VECTOR(uint16_t, 4) g_771;
    VECTOR(int32_t, 2) g_779;
    union U1 g_796;
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
uint64_t  func_1(struct S2 * p_804);
int8_t  func_8(int8_t  p_9, uint32_t  p_10, int32_t  p_11, int16_t  p_12, struct S2 * p_804);
uint32_t  func_14(uint64_t  p_15, struct S2 * p_804);
int32_t  func_34(int16_t * p_35, struct S2 * p_804);
union U0 * func_39(int16_t * p_40, uint8_t  p_41, struct S2 * p_804);
int16_t * func_44(int32_t * p_45, union U0 * p_46, uint8_t  p_47, int32_t * p_48, uint16_t  p_49, struct S2 * p_804);
uint64_t  func_54(union U0 * p_55, int64_t  p_56, int16_t * p_57, uint64_t  p_58, struct S2 * p_804);
int64_t  func_73(int16_t * p_74, int64_t  p_75, struct S2 * p_804);
int16_t * func_76(union U0 * p_77, uint64_t  p_78, int32_t  p_79, int32_t * p_80, struct S2 * p_804);
int64_t  func_93(int64_t  p_94, int32_t * p_95, int32_t * p_96, int32_t * p_97, struct S2 * p_804);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_804->g_3 p_804->g_2 p_804->g_6 p_804->g_7 p_804->g_6.f0 p_804->g_31 p_804->g_comm_values p_804->g_60.f0 p_804->g_23 p_804->g_98 p_804->g_88 p_804->g_30 p_804->g_27 p_804->g_122 p_804->g_68 p_804->g_158 p_804->g_143 p_804->g_168 p_804->g_25 p_804->g_198 p_804->g_159 p_804->g_173 p_804->g_240 p_804->g_226 p_804->g_170 p_804->g_174 p_804->g_386 p_804->g_336 p_804->g_7.f0 p_804->g_421 p_804->g_234 p_804->g_69 p_804->g_451 p_804->g_335 p_804->g_492 p_804->g_496 p_804->g_504 p_804->g_512 p_804->g_513 p_804->g_464 p_804->g_525 p_804->g_99 p_804->g_52 p_804->g_117 p_804->g_687 p_804->g_703 p_804->g_156 p_804->g_84 p_804->g_726 p_804->g_417 p_804->g_103 p_804->g_60 p_804->g_235 p_804->g_769 p_804->g_770 p_804->g_771 p_804->g_779 p_804->g_796 p_804->g_261
 * writes: p_804->g_3 p_804->g_23 p_804->g_31 p_804->g_25 p_804->g_52 p_804->g_84 p_804->g_27 p_804->g_99 p_804->g_88 p_804->g_117 p_804->g_122 p_804->g_68 p_804->l_comm_values p_804->g_156 p_804->g_159 p_804->g_143 p_804->g_2 p_804->g_170 p_804->g_174 p_804->g_386 p_804->g_451 p_804->g_504 p_804->g_513 p_804->g_464 p_804->g_525 p_804->g_540 p_804->g_336 p_804->g_496 p_804->g_69
 */
uint64_t  func_1(struct S2 * p_804)
{ /* block id: 4 */
    uint32_t l_753[8][7][4] = {{{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL}},{{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL}},{{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL}},{{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL}},{{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL}},{{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL}},{{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL}},{{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL},{2UL,1UL,0UL,0UL}}};
    int32_t l_754[10][7] = {{0x39A8CECEL,0x39A8CECEL,0x58EA38DAL,0L,0x2217A400L,2L,0x5936DFB9L},{0x39A8CECEL,0x39A8CECEL,0x58EA38DAL,0L,0x2217A400L,2L,0x5936DFB9L},{0x39A8CECEL,0x39A8CECEL,0x58EA38DAL,0L,0x2217A400L,2L,0x5936DFB9L},{0x39A8CECEL,0x39A8CECEL,0x58EA38DAL,0L,0x2217A400L,2L,0x5936DFB9L},{0x39A8CECEL,0x39A8CECEL,0x58EA38DAL,0L,0x2217A400L,2L,0x5936DFB9L},{0x39A8CECEL,0x39A8CECEL,0x58EA38DAL,0L,0x2217A400L,2L,0x5936DFB9L},{0x39A8CECEL,0x39A8CECEL,0x58EA38DAL,0L,0x2217A400L,2L,0x5936DFB9L},{0x39A8CECEL,0x39A8CECEL,0x58EA38DAL,0L,0x2217A400L,2L,0x5936DFB9L},{0x39A8CECEL,0x39A8CECEL,0x58EA38DAL,0L,0x2217A400L,2L,0x5936DFB9L},{0x39A8CECEL,0x39A8CECEL,0x58EA38DAL,0L,0x2217A400L,2L,0x5936DFB9L}};
    uint32_t l_780 = 0x433D532EL;
    union U0 *l_791[1][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t *l_803 = &p_804->g_25;
    int i, j, k;
    for (p_804->g_3 = 0; (p_804->g_3 > 13); p_804->g_3 = safe_add_func_int32_t_s_s(p_804->g_3, 3))
    { /* block id: 7 */
        uint16_t l_13 = 0x1C09L;
        int32_t l_749[6][5] = {{0x50D0E054L,0x3515BE24L,0x50D0E054L,0x50D0E054L,0x3515BE24L},{0x50D0E054L,0x3515BE24L,0x50D0E054L,0x50D0E054L,0x3515BE24L},{0x50D0E054L,0x3515BE24L,0x50D0E054L,0x50D0E054L,0x3515BE24L},{0x50D0E054L,0x3515BE24L,0x50D0E054L,0x50D0E054L,0x3515BE24L},{0x50D0E054L,0x3515BE24L,0x50D0E054L,0x50D0E054L,0x3515BE24L},{0x50D0E054L,0x3515BE24L,0x50D0E054L,0x50D0E054L,0x3515BE24L}};
        VECTOR(uint16_t, 4) l_768 = (VECTOR(uint16_t, 4))(0xC7C3L, (VECTOR(uint16_t, 2))(0xC7C3L, 0UL), 0UL);
        int i, j;
        if (p_804->g_2)
        { /* block id: 8 */
            uint32_t l_20[4] = {0xCB8F1FE3L,0xCB8F1FE3L,0xCB8F1FE3L,0xCB8F1FE3L};
            int16_t *l_21 = (void*)0;
            int16_t *l_22 = &p_804->g_23;
            int32_t l_748 = 0x292022F6L;
            int i;
            l_754[6][2] ^= (0x664E6DC660F7E730L | (((*l_22) = (((p_804->g_6[5] , p_804->g_7[2]) , func_8(l_13, (l_748 = func_14(((-5L) <= (((*l_22) = (safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((l_13 <= (p_804->g_6[5].f0 == 0x139EL)), (l_13 & GROUP_DIVERGE(1, 1)))), l_20[2]))) >= 0xD7C1L)), p_804)), p_804->g_226.y, l_749[2][0], p_804)) ^ p_804->g_173.sd)) | l_753[0][5][0]));
        }
        else
        { /* block id: 364 */
            if (l_749[2][0])
                break;
        }
        for (p_804->g_25 = 8; (p_804->g_25 <= (-14)); --p_804->g_25)
        { /* block id: 369 */
            int32_t *l_761 = &l_754[6][2];
            int32_t *l_772[9][5] = {{&p_804->g_25,&p_804->g_3,&p_804->g_25,&p_804->g_25,&p_804->g_3},{&p_804->g_25,&p_804->g_3,&p_804->g_25,&p_804->g_25,&p_804->g_3},{&p_804->g_25,&p_804->g_3,&p_804->g_25,&p_804->g_25,&p_804->g_3},{&p_804->g_25,&p_804->g_3,&p_804->g_25,&p_804->g_25,&p_804->g_3},{&p_804->g_25,&p_804->g_3,&p_804->g_25,&p_804->g_25,&p_804->g_3},{&p_804->g_25,&p_804->g_3,&p_804->g_25,&p_804->g_25,&p_804->g_3},{&p_804->g_25,&p_804->g_3,&p_804->g_25,&p_804->g_25,&p_804->g_3},{&p_804->g_25,&p_804->g_3,&p_804->g_25,&p_804->g_25,&p_804->g_3},{&p_804->g_25,&p_804->g_3,&p_804->g_25,&p_804->g_25,&p_804->g_3}};
            uint16_t l_775 = 0xECD1L;
            int8_t *l_776 = (void*)0;
            int8_t *l_777 = (void*)0;
            int8_t *l_778[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j;
            p_804->g_68.s5 ^= (!(safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((*p_804->g_234) , ((*l_761) |= (p_804->g_143.s6 < 0x7E6848F38D208E63L))), (p_804->g_69.s1 &= (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(l_13, ((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 16))(0x18CBL, ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 2))(l_768.zy)).yxyy, (uint16_t)p_804->g_84))), 0xEA81L, 0x37E0L, 65535UL, 0x3DA0L, ((VECTOR(uint16_t, 2))(0x2A8EL, 0x0130L)), ((VECTOR(uint16_t, 4))(p_804->g_769.xyyx)), 1UL)).s56, ((VECTOR(uint16_t, 16))(p_804->g_770.sf0c5cab8012c022b)).saa, ((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 2))(65535UL, 0xEE92L)).yxxxyxxyxxyxyxyy, (uint16_t)((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_804->g_771.yw)), 65534UL, 1UL)).x))).s48))).odd)), l_768.y)) & l_13), 3))))), (p_804->g_336.y ^= (safe_mod_func_int32_t_s_s(((l_749[2][0] ^ l_13) | p_804->g_23), l_775))))));
            atomic_max(&p_804->l_atomic_reduction[0], ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_804->g_779.yx)).xxxx)).y + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_804->v_collective += p_804->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            l_780--;
        }
    }
    (*l_803) |= (safe_add_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((+((safe_sub_func_int32_t_s_s(l_753[0][5][0], ((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))((l_791[0][2] == (void*)0), 0L, ((VECTOR(int8_t, 4))((-1L), 0x17L, 0L, 0x30L)), 1L, 0x18L)))).s2, (safe_add_func_int8_t_s_s(((((65530UL >= ((safe_mod_func_int16_t_s_s((p_804->g_796 , (0x63L > (l_754[6][2] = ((safe_add_func_int8_t_s_s(0x03L, ((((safe_rshift_func_int16_t_s_u((((safe_sub_func_int8_t_s_s(0L, ((*p_804->g_234) , p_804->g_336.y))) ^ p_804->g_226.x) <= 0x07L), p_804->g_771.w)) & l_754[6][2]) & 8L) > 0x38AFF334DF0F37FCL))) >= p_804->g_143.s0)))), 0x5E8EL)) ^ l_753[0][5][0])) != 0xEA750C33L) > 0xEF21L) | 0L), p_804->g_496[1])))) | l_753[0][5][0]))) >= p_804->g_504[2])), 0x4C26B29F2CEDC708L)), l_753[0][5][0]));
    return p_804->g_261.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_804->g_159 p_804->g_7.f0
 * writes: p_804->g_159
 */
int8_t  func_8(int8_t  p_9, uint32_t  p_10, int32_t  p_11, int16_t  p_12, struct S2 * p_804)
{ /* block id: 358 */
    int32_t *l_750[2][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int32_t **l_751 = (void*)0;
    int32_t **l_752 = &p_804->g_159;
    int i, j;
    (*l_752) = l_750[1][4];
    (*l_752) = (*l_752);
    return p_804->g_7[2].f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_804->g_31 p_804->g_25 p_804->g_comm_values p_804->g_60.f0 p_804->g_23 p_804->g_98 p_804->g_6.f0 p_804->g_88 p_804->g_30 p_804->g_27 p_804->g_122 p_804->g_68 p_804->g_3 p_804->g_158 p_804->g_143 p_804->g_168 p_804->g_198 p_804->g_159 p_804->g_173 p_804->g_240 p_804->g_226 p_804->g_2 p_804->g_170 p_804->g_174 p_804->g_386 p_804->g_336 p_804->g_7.f0 p_804->g_421 p_804->g_234 p_804->g_69 p_804->g_451 p_804->g_156 p_804->g_335 p_804->g_492 p_804->g_496 p_804->g_504 p_804->g_512 p_804->g_513 p_804->g_464 p_804->g_525 p_804->g_99 p_804->g_52 p_804->g_117 p_804->g_687 p_804->g_703 p_804->g_84 p_804->g_726 p_804->g_417 p_804->g_103
 * writes: p_804->g_31 p_804->g_25 p_804->g_52 p_804->g_84 p_804->g_27 p_804->g_23 p_804->g_99 p_804->g_88 p_804->g_117 p_804->g_122 p_804->g_68 p_804->l_comm_values p_804->g_156 p_804->g_159 p_804->g_143 p_804->g_2 p_804->g_170 p_804->g_174 p_804->g_386 p_804->g_451 p_804->g_504 p_804->g_513 p_804->g_464 p_804->g_525 p_804->g_540 p_804->g_336 p_804->g_496
 */
uint32_t  func_14(uint64_t  p_15, struct S2 * p_804)
{ /* block id: 10 */
    int32_t *l_24 = &p_804->g_25;
    int32_t *l_26[4][9] = {{&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25},{&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25},{&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25},{&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25,&p_804->g_25}};
    uint32_t l_654 = 0x8C5D7CD6L;
    VECTOR(int16_t, 8) l_668 = (VECTOR(int16_t, 8))(0x5028L, (VECTOR(int16_t, 4))(0x5028L, (VECTOR(int16_t, 2))(0x5028L, (-10L)), (-10L)), (-10L), 0x5028L, (-10L));
    int8_t *l_673 = (void*)0;
    union U0 *l_682 = &p_804->g_60[4];
    VECTOR(int16_t, 8) l_688 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
    int8_t l_705 = 0x3DL;
    int64_t l_712 = 1L;
    uint64_t l_713 = 0xBE7C59CB43C0B496L;
    int i, j;
    p_804->g_31++;
    if (func_34(&p_804->g_23, p_804))
    { /* block id: 245 */
        VECTOR(uint64_t, 4) l_519 = (VECTOR(uint64_t, 4))(0x5CF79224C4DEDE8CL, (VECTOR(uint64_t, 2))(0x5CF79224C4DEDE8CL, 0x22E21727721E3DE3L), 0x22E21727721E3DE3L);
        uint16_t *l_520 = (void*)0;
        uint16_t *l_521 = (void*)0;
        uint16_t *l_524 = &p_804->g_525;
        int32_t l_652 = 1L;
        int32_t l_653[10][6] = {{5L,0x1C7E946BL,5L,5L,0x1C7E946BL,5L},{5L,0x1C7E946BL,5L,5L,0x1C7E946BL,5L},{5L,0x1C7E946BL,5L,5L,0x1C7E946BL,5L},{5L,0x1C7E946BL,5L,5L,0x1C7E946BL,5L},{5L,0x1C7E946BL,5L,5L,0x1C7E946BL,5L},{5L,0x1C7E946BL,5L,5L,0x1C7E946BL,5L},{5L,0x1C7E946BL,5L,5L,0x1C7E946BL,5L},{5L,0x1C7E946BL,5L,5L,0x1C7E946BL,5L},{5L,0x1C7E946BL,5L,5L,0x1C7E946BL,5L},{5L,0x1C7E946BL,5L,5L,0x1C7E946BL,5L}};
        int i, j;
        (*l_24) = (safe_sub_func_uint32_t_u_u(4294967290UL, (((*l_24) <= ((safe_sub_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 8))(l_519.yxwywwwy)).s52)).hi, (((*l_524) |= (p_804->g_386[0][4]--)) == 0x1934L))) | l_519.x)) , ((void*)0 == l_24))));
        for (p_804->g_99 = 9; (p_804->g_99 >= 58); p_804->g_99 = safe_add_func_uint8_t_u_u(p_804->g_99, 1))
        { /* block id: 251 */
            uint8_t *l_528 = &p_804->g_52;
            uint64_t *l_531[8][8] = {{&p_804->g_496[2],(void*)0,&p_804->g_156,&p_804->g_496[0],&p_804->g_156,(void*)0,&p_804->g_496[2],&p_804->g_156},{&p_804->g_496[2],(void*)0,&p_804->g_156,&p_804->g_496[0],&p_804->g_156,(void*)0,&p_804->g_496[2],&p_804->g_156},{&p_804->g_496[2],(void*)0,&p_804->g_156,&p_804->g_496[0],&p_804->g_156,(void*)0,&p_804->g_496[2],&p_804->g_156},{&p_804->g_496[2],(void*)0,&p_804->g_156,&p_804->g_496[0],&p_804->g_156,(void*)0,&p_804->g_496[2],&p_804->g_156},{&p_804->g_496[2],(void*)0,&p_804->g_156,&p_804->g_496[0],&p_804->g_156,(void*)0,&p_804->g_496[2],&p_804->g_156},{&p_804->g_496[2],(void*)0,&p_804->g_156,&p_804->g_496[0],&p_804->g_156,(void*)0,&p_804->g_496[2],&p_804->g_156},{&p_804->g_496[2],(void*)0,&p_804->g_156,&p_804->g_496[0],&p_804->g_156,(void*)0,&p_804->g_496[2],&p_804->g_156},{&p_804->g_496[2],(void*)0,&p_804->g_156,&p_804->g_496[0],&p_804->g_156,(void*)0,&p_804->g_496[2],&p_804->g_156}};
            int32_t l_532 = 0x5EE6AE29L;
            int32_t l_535 = 3L;
            uint32_t *l_536 = &p_804->g_88;
            uint32_t *l_539 = &p_804->g_540;
            uint16_t *l_545 = &p_804->g_525;
            int i, j;
            (*l_24) |= ((--(*l_528)) != ((l_532 = 0UL) <= ((((~((-2L) && (((safe_add_func_uint16_t_u_u(0UL, l_535)) & (9UL != ((*l_539) = (--(*l_536))))) , (safe_lshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((0x23L ^ ((void*)0 != l_539)), (((void*)0 == l_545) || p_15))), 3))))) == l_519.z) , 0xAE58L) , p_804->g_117)));
            if ((atomic_inc(&p_804->l_atomic_input[9]) == 8))
            { /* block id: 258 */
                uint64_t l_546 = 1UL;
                int32_t l_547 = (-1L);
                l_547 &= l_546;
                for (l_547 = 14; (l_547 >= 16); l_547++)
                { /* block id: 262 */
                    uint32_t l_550 = 1UL;
                    uint16_t l_551 = 0x4536L;
                    int8_t l_552 = 0x2AL;
                    int8_t l_553 = 0L;
                    int32_t l_554 = 0x0754166CL;
                    uint32_t l_603 = 0xD005BA0EL;
                    uint32_t l_606 = 3UL;
                    uint8_t l_607 = 5UL;
                    if (((l_554 = ((l_551 = l_550) , ((l_553 = l_552) , ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(18446744073709551614UL, 1UL)).yyyxxxyy)).s0))) , 2L))
                    { /* block id: 266 */
                        int16_t l_555 = 9L;
                        int8_t l_556 = 1L;
                        int32_t l_558 = 0x41FD80DFL;
                        int32_t *l_557 = &l_558;
                        int64_t l_559[6] = {0L,0L,0L,0L,0L,0L};
                        uint32_t l_560 = 0UL;
                        int32_t l_563 = (-1L);
                        int i;
                        l_554 = (l_555 , l_556);
                        l_557 = (void*)0;
                        l_560++;
                        l_554 = l_563;
                    }
                    else
                    { /* block id: 271 */
                        int16_t l_564 = 1L;
                        uint64_t l_565 = 1UL;
                        int32_t *l_566 = (void*)0;
                        int32_t l_568 = 0L;
                        int32_t *l_567 = &l_568;
                        int32_t *l_569 = (void*)0;
                        VECTOR(int32_t, 4) l_570 = (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, (-3L)), (-3L));
                        VECTOR(int32_t, 2) l_571 = (VECTOR(int32_t, 2))(9L, 0L);
                        VECTOR(int16_t, 2) l_572 = (VECTOR(int16_t, 2))((-6L), (-1L));
                        int32_t l_573 = (-1L);
                        VECTOR(int16_t, 16) l_574 = (VECTOR(int16_t, 16))(0x4E76L, (VECTOR(int16_t, 4))(0x4E76L, (VECTOR(int16_t, 2))(0x4E76L, 0x7D63L), 0x7D63L), 0x7D63L, 0x4E76L, 0x7D63L, (VECTOR(int16_t, 2))(0x4E76L, 0x7D63L), (VECTOR(int16_t, 2))(0x4E76L, 0x7D63L), 0x4E76L, 0x7D63L, 0x4E76L, 0x7D63L);
                        VECTOR(uint16_t, 4) l_575 = (VECTOR(uint16_t, 4))(65533UL, (VECTOR(uint16_t, 2))(65533UL, 1UL), 1UL);
                        VECTOR(int32_t, 4) l_576 = (VECTOR(int32_t, 4))(0x40B9F559L, (VECTOR(int32_t, 2))(0x40B9F559L, 0x51E82298L), 0x51E82298L);
                        int32_t l_577 = 0x32EF38BEL;
                        uint64_t l_578 = 0x8581C6CDAB150B41L;
                        VECTOR(int8_t, 16) l_579 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x5BL), 0x5BL), 0x5BL, 1L, 0x5BL, (VECTOR(int8_t, 2))(1L, 0x5BL), (VECTOR(int8_t, 2))(1L, 0x5BL), 1L, 0x5BL, 1L, 0x5BL);
                        VECTOR(uint8_t, 4) l_580 = (VECTOR(uint8_t, 4))(0xCDL, (VECTOR(uint8_t, 2))(0xCDL, 0x84L), 0x84L);
                        VECTOR(uint16_t, 8) l_581 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0UL), 0UL), 0UL, 65526UL, 0UL);
                        VECTOR(int32_t, 2) l_582 = (VECTOR(int32_t, 2))(0x006E340FL, 0x758D46C5L);
                        int32_t l_583 = 0x076FF13BL;
                        int64_t l_584 = 1L;
                        int8_t l_585 = 0x73L;
                        VECTOR(int32_t, 8) l_586 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                        VECTOR(int32_t, 8) l_587 = (VECTOR(int32_t, 8))(0x73AF9794L, (VECTOR(int32_t, 4))(0x73AF9794L, (VECTOR(int32_t, 2))(0x73AF9794L, 0x08C6D6EAL), 0x08C6D6EAL), 0x08C6D6EAL, 0x73AF9794L, 0x08C6D6EAL);
                        VECTOR(int32_t, 4) l_588 = (VECTOR(int32_t, 4))(0x1EE4825CL, (VECTOR(int32_t, 2))(0x1EE4825CL, 1L), 1L);
                        VECTOR(int32_t, 4) l_589 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x134C32D4L), 0x134C32D4L);
                        int64_t l_590 = 0x0D75920B4DB8664FL;
                        uint64_t l_591 = 1UL;
                        uint32_t l_592 = 4294967294UL;
                        int64_t l_593 = 0x13CA9544B1263171L;
                        uint32_t l_594 = 0x7D490F0DL;
                        int64_t l_595[7][2][9] = {{{0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L},{0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L}},{{0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L},{0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L}},{{0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L},{0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L}},{{0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L},{0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L}},{{0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L},{0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L}},{{0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L},{0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L}},{{0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L},{0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L,0x7E24CB67A6AE3FC8L,(-1L),0x7E24CB67A6AE3FC8L}}};
                        uint16_t l_596 = 0x83B9L;
                        int16_t l_597 = 0x3D2DL;
                        uint8_t l_598 = 0UL;
                        int16_t l_599 = 6L;
                        uint16_t l_600 = 65533UL;
                        uint32_t l_601 = 4294967294UL;
                        VECTOR(int32_t, 8) l_602 = (VECTOR(int32_t, 8))(0x3B6EC8DEL, (VECTOR(int32_t, 4))(0x3B6EC8DEL, (VECTOR(int32_t, 2))(0x3B6EC8DEL, 4L), 4L), 4L, 0x3B6EC8DEL, 4L);
                        int i, j, k;
                        l_565 ^= l_564;
                        l_569 = (l_567 = l_566);
                        l_554 ^= ((l_601 ^= (((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(l_570.ww)).yxxxyyxx, ((VECTOR(int32_t, 2))(l_571.yy)).xxxyxxyy))).s43, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(0x29E85445L, ((VECTOR(int32_t, 2))(6L, 2L)), 0L)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_572.y, l_573, ((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(0x6E0D899BL, 0x21A4CAEAL)).xyyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_574.s3678ac9d2b9c7615)).s056e)).lo)).xxyx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(l_575.zywxxzyy)))).hi))).zyzxyzyz, ((VECTOR(int32_t, 8))(l_576.xxywwwzy))))))).hi))), (int32_t)l_577, (int32_t)l_578))), 0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(l_579.s4b22a632)).s0651261430472731, ((VECTOR(uint8_t, 8))(l_580.yxyxyxxx)).s5776622067537407))).sb5, ((VECTOR(uint16_t, 2))(l_581.s24))))), ((VECTOR(int32_t, 2))(l_582.yy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(((l_580.y |= l_583) , l_584), ((VECTOR(int32_t, 8))(l_585, ((VECTOR(int32_t, 4))(l_586.s4712)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_587.s11375531)).s25)), 1L)).s4, (-1L), ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 4))(l_588.wyzx)).xyzyzyyzyyyzxywz, ((VECTOR(int32_t, 4))(l_589.zzzy)).wzwywwzyyyzxxwxy, ((VECTOR(int32_t, 16))(l_590, l_591, 0x73FB98D8L, 0x74EEC131L, ((VECTOR(int32_t, 8))(0L)), l_592, ((VECTOR(int32_t, 2))(0x758E9CADL)), (-2L)))))).s4, 0x553793FEL, l_593, (-9L), 0x53F61AF4L, l_594, 0x7EF3C70FL, 0x439EECBEL, 0x7B71D098L, l_595[3][1][3], 1L, 0x00E6B7F6L, 0x09F1C287L)), ((VECTOR(int32_t, 16))(0x2740F173L))))).s3d)), (-1L), 0x3CB135B7L)), 0L, l_596, l_597, 0x6174DCC3L, l_598, ((VECTOR(int32_t, 2))((-8L))), 0x3DF7DACFL)))).s89)).odd, l_599, ((VECTOR(int32_t, 4))(2L)), ((VECTOR(int32_t, 2))(2L)), (-4L))).s5e, ((VECTOR(int32_t, 2))(1L)), ((VECTOR(int32_t, 2))(7L))))).xyyyyyxy)).s73))).yyxyyxxx, ((VECTOR(int32_t, 8))(0x01FB2E03L))))).s1566222744754110)).sd8, ((VECTOR(int32_t, 2))(0L))))).xyxyyxyy, ((VECTOR(int32_t, 8))(0x3C6C3F3BL))))).s3 , l_600)) , 8L);
                        l_554 ^= ((VECTOR(int32_t, 16))(l_602.s4020153130433550)).se;
                    }
                    ++l_603;
                    l_607 = l_606;
                    for (l_607 = 0; (l_607 <= 27); l_607 = safe_add_func_uint8_t_u_u(l_607, 1))
                    { /* block id: 284 */
                        int32_t l_611 = (-8L);
                        int32_t *l_610[9] = {&l_611,&l_611,&l_611,&l_611,&l_611,&l_611,&l_611,&l_611,&l_611};
                        int32_t *l_612 = &l_611;
                        int32_t *l_613 = &l_611;
                        int32_t *l_614[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_614[i] = &l_611;
                        l_612 = (l_610[7] = l_610[6]);
                        l_614[1] = l_613;
                    }
                }
                for (l_546 = (-10); (l_546 != 52); l_546 = safe_add_func_uint32_t_u_u(l_546, 4))
                { /* block id: 292 */
                    uint8_t l_619 = 251UL;
                    uint8_t *l_618 = &l_619;
                    uint8_t **l_617 = &l_618;
                    uint8_t **l_620 = &l_618;
                    uint8_t **l_621 = &l_618;
                    int8_t l_622[4] = {0x66L,0x66L,0x66L,0x66L};
                    int64_t l_648 = 1L;
                    int8_t l_649[7][5][1] = {{{0x24L},{0x24L},{0x24L},{0x24L},{0x24L}},{{0x24L},{0x24L},{0x24L},{0x24L},{0x24L}},{{0x24L},{0x24L},{0x24L},{0x24L},{0x24L}},{{0x24L},{0x24L},{0x24L},{0x24L},{0x24L}},{{0x24L},{0x24L},{0x24L},{0x24L},{0x24L}},{{0x24L},{0x24L},{0x24L},{0x24L},{0x24L}},{{0x24L},{0x24L},{0x24L},{0x24L},{0x24L}}};
                    uint8_t l_650 = 0x82L;
                    int16_t l_651 = (-1L);
                    int i, j, k;
                    l_621 = (l_617 = (l_620 = l_617));
                    if ((l_547 = l_622[2]))
                    { /* block id: 297 */
                        uint16_t l_623 = 6UL;
                        uint32_t l_624 = 4294967295UL;
                        l_624 = l_623;
                    }
                    else
                    { /* block id: 299 */
                        int32_t l_626 = 5L;
                        int32_t *l_625 = &l_626;
                        int32_t *l_627[9][8] = {{&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626},{&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626},{&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626},{&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626},{&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626},{&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626},{&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626},{&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626},{&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626}};
                        int32_t *l_628 = &l_626;
                        uint32_t l_629 = 4294967294UL;
                        uint32_t l_630 = 4294967292UL;
                        union U1 l_633 = {-10L};/* VOLATILE GLOBAL l_633 */
                        uint8_t l_634 = 1UL;
                        VECTOR(int64_t, 16) l_635 = (VECTOR(int64_t, 16))(8L, (VECTOR(int64_t, 4))(8L, (VECTOR(int64_t, 2))(8L, 0x377DAFDD0E1D93B7L), 0x377DAFDD0E1D93B7L), 0x377DAFDD0E1D93B7L, 8L, 0x377DAFDD0E1D93B7L, (VECTOR(int64_t, 2))(8L, 0x377DAFDD0E1D93B7L), (VECTOR(int64_t, 2))(8L, 0x377DAFDD0E1D93B7L), 8L, 0x377DAFDD0E1D93B7L, 8L, 0x377DAFDD0E1D93B7L);
                        uint64_t l_636 = 1UL;
                        VECTOR(int8_t, 2) l_637 = (VECTOR(int8_t, 2))(1L, 0x2EL);
                        int8_t l_638 = 0x58L;
                        uint16_t l_639 = 0x38E9L;
                        VECTOR(int8_t, 16) l_640 = (VECTOR(int8_t, 16))(0x57L, (VECTOR(int8_t, 4))(0x57L, (VECTOR(int8_t, 2))(0x57L, 7L), 7L), 7L, 0x57L, 7L, (VECTOR(int8_t, 2))(0x57L, 7L), (VECTOR(int8_t, 2))(0x57L, 7L), 0x57L, 7L, 0x57L, 7L);
                        VECTOR(int8_t, 8) l_641 = (VECTOR(int8_t, 8))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), 0x1AL), 0x1AL), 0x1AL, (-7L), 0x1AL);
                        VECTOR(int8_t, 4) l_642 = (VECTOR(int8_t, 4))(0x39L, (VECTOR(int8_t, 2))(0x39L, 0x2FL), 0x2FL);
                        VECTOR(int8_t, 8) l_643 = (VECTOR(int8_t, 8))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x4FL), 0x4FL), 0x4FL, (-1L), 0x4FL);
                        uint64_t l_644 = 0x76AF9C61B267DF6AL;
                        VECTOR(int8_t, 4) l_645 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x0CL), 0x0CL);
                        int16_t l_646 = 0x637DL;
                        uint32_t l_647 = 0x50FE62B6L;
                        int i, j;
                        l_628 = (l_627[4][0] = l_625);
                        l_547 = l_629;
                        ++l_630;
                        (*l_628) &= (l_647 &= (l_633 , (l_646 = (l_645.z = (l_547 = (GROUP_DIVERGE(0, 1) , ((l_634 , ((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),int8_t,((VECTOR(int8_t, 2))(0L, 2L)), (int8_t)(l_622[3] = ((l_636 = ((VECTOR(int64_t, 4))(l_635.sea68)).y) , ((VECTOR(int8_t, 2))(l_637.yx)).odd)), (int8_t)(l_639 ^= l_638)))), ((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(l_640.sd8f264190854e4a7)).sb9, ((VECTOR(int8_t, 2))(l_641.s35))))).xxxyxyyxyxxxxyxy, ((VECTOR(int8_t, 2))(1L, (-1L))).yyyxyyyxxxyxyyyy, ((VECTOR(int8_t, 16))(l_642.zyxxwzxxwyzwyyzw))))).s1a, ((VECTOR(int8_t, 8))(l_643.s25060405)).s23))).xxxyyyxxyyyyyxxx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))((-8L), 0x14L)))).yxyx)).yywwyzwzwxyzzzxw))).s6d, ((VECTOR(int8_t, 2))(0x11L, 0x1DL))))).even) , l_644)))))));
                    }
                    l_649[4][0][0] = l_648;
                    l_651 = l_650;
                }
                unsigned int result = 0;
                result += l_546;
                result += l_547;
                atomic_add(&p_804->l_special_values[9], result);
            }
            else
            { /* block id: 316 */
                (1 + 1);
            }
        }
        --l_654;
        (*l_24) = (&p_804->g_386[1][2] == &p_804->g_525);
    }
    else
    { /* block id: 322 */
        VECTOR(int8_t, 8) l_659 = (VECTOR(int8_t, 8))(0x3FL, (VECTOR(int8_t, 4))(0x3FL, (VECTOR(int8_t, 2))(0x3FL, 0x01L), 0x01L), 0x01L, 0x3FL, 0x01L);
        int8_t *l_660 = (void*)0;
        int8_t *l_661 = (void*)0;
        int8_t *l_662[2];
        int8_t **l_674 = &l_673;
        uint8_t l_704 = 0UL;
        int32_t l_706 = 0x139155B8L;
        uint16_t l_707 = 0UL;
        uint64_t *l_708[7] = {&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156};
        int32_t l_709 = 0x5DC1B845L;
        int16_t *l_710 = (void*)0;
        int16_t *l_711[9][3][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&p_804->g_451}}};
        int16_t l_730 = 0x6D17L;
        int32_t l_734[9];
        int32_t l_740 = (-6L);
        int32_t l_742[3];
        uint16_t l_744 = 0x14ECL;
        VECTOR(int32_t, 16) l_747 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x5639E4F7L), 0x5639E4F7L), 0x5639E4F7L, 0L, 0x5639E4F7L, (VECTOR(int32_t, 2))(0L, 0x5639E4F7L), (VECTOR(int32_t, 2))(0L, 0x5639E4F7L), 0L, 0x5639E4F7L, 0L, 0x5639E4F7L);
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_662[i] = (void*)0;
        for (i = 0; i < 9; i++)
            l_734[i] = (-6L);
        for (i = 0; i < 3; i++)
            l_742[i] = 6L;
        if ((safe_mul_func_int8_t_s_s((p_804->g_336.y = ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(l_659.s21774220)).lo)).x), (safe_unary_minus_func_uint32_t_u(((VECTOR(uint32_t, 8))(6UL, 0x1890C85CL, 0UL, 4294967293UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 4))((safe_mod_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((l_712 = ((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 8))(l_668.s44107643)).s3076460535552147, ((VECTOR(int16_t, 4))(l_659.s5, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))((l_709 = (safe_lshift_func_uint8_t_u_s((((safe_div_func_uint16_t_u_u((l_659.s1 , (((*l_674) = l_673) != (((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((+((safe_unary_minus_func_uint16_t_u((p_15 & (l_659.s0 || (l_682 != ((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s((((((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(p_804->g_687.s7017)).lo, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_688.s4156102052022676)).hi)))).s70))).hi && 0xE0E5L) ^ (l_706 = ((safe_div_func_uint16_t_u_u((((VECTOR(int16_t, 8))(0x0BECL, 1L, (-1L), ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(GROUP_DIVERGE(0, 1), (((((safe_mod_func_uint16_t_u_u((!((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(p_804->g_703.zyzyxxyz)).s4, l_704)) >= l_705)), p_15)) , 1UL) | 0x5AE4L) > l_659.s0) > 4UL))) < p_804->g_240.z), p_804->g_88)), p_804->g_451)), 14)) , 0x3877L), 4L, ((VECTOR(int16_t, 2))(0x32E3L)), 1L)).s7 , p_15), 65535UL)) | p_804->g_156))) >= l_707), 65535UL)), l_659.s6)) , &p_804->g_60[4])))))) == p_804->g_170.x)) < 0x034CL), (*l_24))) | 0UL), 0)), p_15)) , 8UL) , &l_705))), (-1L))) , (void*)0) == l_708[5]), 5))), ((VECTOR(int16_t, 2))(4L)), ((VECTOR(int16_t, 4))((-10L))), (-1L))))).s24)), 2L)).zyyxwwwyxyzyxwyw))).sc), GROUP_DIVERGE(0, 1))) != l_713), (*l_24))), 0xB23D65C4L, 4294967295UL, 0x9E266705L)))))).s6)))))
        { /* block id: 328 */
            l_706 = (p_804->g_226.y || 1L);
        }
        else
        { /* block id: 330 */
            uint64_t **l_722 = &l_708[5];
            int32_t l_725 = 0x5EE07BB6L;
            uint32_t *l_727 = (void*)0;
            uint32_t *l_728 = &p_804->g_88;
            uint64_t *l_729 = &p_804->g_496[1];
            l_730 = ((*l_24) = (((*l_729) &= (safe_lshift_func_uint16_t_u_u(p_15, ((l_709 ^= (((0x005074B7C23B904BL > (safe_lshift_func_int8_t_s_s((l_706 &= ((safe_rshift_func_int8_t_s_s((p_804->g_336.x = (((*l_728) = ((0xF3B7C064F2176537L < ((safe_lshift_func_int8_t_s_s((((p_804->g_386[1][2] ^ ((VECTOR(int8_t, 2))(0x1CL, 0x3AL)).hi) , p_804->g_68.s7) & (&p_804->g_156 == ((*l_722) = &l_713))), ((safe_rshift_func_int16_t_s_s((p_804->g_168.w , (l_725 = (((p_15 && 65533UL) && p_15) <= 0x0BF7L))), 6)) && p_804->g_84))) <= p_15)) ^ p_804->g_726)) != 0x10776E6AL)), p_804->g_417.s5)) , p_15)), 2))) > GROUP_DIVERGE(0, 1)) && l_659.s1)) && p_804->g_103.s2)))) | 18446744073709551606UL));
            return l_725;
        }
        if (p_15)
        { /* block id: 342 */
            int32_t l_735 = 0x228B0A73L;
            int32_t l_736 = 1L;
            int32_t l_737 = 0x1288F652L;
            int32_t l_738 = 1L;
            int32_t l_739 = 4L;
            VECTOR(int32_t, 16) l_741 = (VECTOR(int32_t, 16))(0x4167233DL, (VECTOR(int32_t, 4))(0x4167233DL, (VECTOR(int32_t, 2))(0x4167233DL, 0x28DEF468L), 0x28DEF468L), 0x28DEF468L, 0x4167233DL, 0x28DEF468L, (VECTOR(int32_t, 2))(0x4167233DL, 0x28DEF468L), (VECTOR(int32_t, 2))(0x4167233DL, 0x28DEF468L), 0x4167233DL, 0x28DEF468L, 0x4167233DL, 0x28DEF468L);
            int64_t l_743 = (-1L);
            int i;
            if ((atomic_inc(&p_804->l_atomic_input[29]) == 9))
            { /* block id: 344 */
                VECTOR(uint32_t, 4) l_731 = (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0x5BC43DD4L), 0x5BC43DD4L);
                uint64_t l_732[2][3][4] = {{{18446744073709551608UL,18446744073709551608UL,0x805167F6B9AE5254L,18446744073709551615UL},{18446744073709551608UL,18446744073709551608UL,0x805167F6B9AE5254L,18446744073709551615UL},{18446744073709551608UL,18446744073709551608UL,0x805167F6B9AE5254L,18446744073709551615UL}},{{18446744073709551608UL,18446744073709551608UL,0x805167F6B9AE5254L,18446744073709551615UL},{18446744073709551608UL,18446744073709551608UL,0x805167F6B9AE5254L,18446744073709551615UL},{18446744073709551608UL,18446744073709551608UL,0x805167F6B9AE5254L,18446744073709551615UL}}};
                int8_t l_733 = 0x1CL;
                int i, j, k;
                l_733 = (((VECTOR(uint32_t, 2))(l_731.zw)).odd , l_732[0][1][1]);
                unsigned int result = 0;
                result += l_731.w;
                result += l_731.z;
                result += l_731.y;
                result += l_731.x;
                int l_732_i0, l_732_i1, l_732_i2;
                for (l_732_i0 = 0; l_732_i0 < 2; l_732_i0++) {
                    for (l_732_i1 = 0; l_732_i1 < 3; l_732_i1++) {
                        for (l_732_i2 = 0; l_732_i2 < 4; l_732_i2++) {
                            result += l_732[l_732_i0][l_732_i1][l_732_i2];
                        }
                    }
                }
                result += l_733;
                atomic_add(&p_804->l_special_values[29], result);
            }
            else
            { /* block id: 346 */
                (1 + 1);
            }
            l_744--;
        }
        else
        { /* block id: 350 */
            l_734[1] ^= (*l_24);
            (*l_24) |= 0x76CDF5FDL;
            (*p_804->g_421) = ((VECTOR(int32_t, 4))(l_747.s2a10)).y;
        }
    }
    return p_804->g_687.s6;
}


/* ------------------------------------------ */
/* 
 * reads : p_804->g_25 p_804->g_comm_values p_804->g_60.f0 p_804->g_23 p_804->g_98 p_804->g_6.f0 p_804->g_88 p_804->g_30 p_804->g_27 p_804->g_122 p_804->g_68 p_804->g_3 p_804->g_158 p_804->g_143 p_804->g_168 p_804->g_198 p_804->g_159 p_804->g_173 p_804->g_240 p_804->g_226 p_804->g_2 p_804->g_170 p_804->g_174 p_804->g_386 p_804->g_336 p_804->g_7.f0 p_804->g_421 p_804->g_234 p_804->g_69 p_804->g_451 p_804->g_156 p_804->g_335 p_804->g_492 p_804->g_496 p_804->g_504 p_804->g_512 p_804->g_513 p_804->g_464
 * writes: p_804->g_25 p_804->g_52 p_804->g_84 p_804->g_27 p_804->g_23 p_804->g_99 p_804->g_88 p_804->g_117 p_804->g_122 p_804->g_68 p_804->l_comm_values p_804->g_156 p_804->g_159 p_804->g_143 p_804->g_2 p_804->g_170 p_804->g_174 p_804->g_386 p_804->g_451 p_804->g_504 p_804->g_513 p_804->g_464
 */
int32_t  func_34(int16_t * p_35, struct S2 * p_804)
{ /* block id: 12 */
    int32_t l_38[6];
    int16_t *l_43 = &p_804->g_23;
    union U0 *l_59[4][3] = {{&p_804->g_60[5],(void*)0,&p_804->g_60[5]},{&p_804->g_60[5],(void*)0,&p_804->g_60[5]},{&p_804->g_60[5],(void*)0,&p_804->g_60[5]},{&p_804->g_60[5],(void*)0,&p_804->g_60[5]}};
    int32_t *l_423[7][6][3] = {{{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]}},{{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]}},{{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]}},{{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]}},{{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]}},{{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]}},{{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]},{&p_804->g_25,(void*)0,&l_38[3]}}};
    uint64_t *l_491[5][3][5] = {{{&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,&p_804->g_156},{&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,&p_804->g_156},{&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,&p_804->g_156}},{{&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,&p_804->g_156},{&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,&p_804->g_156},{&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,&p_804->g_156}},{{&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,&p_804->g_156},{&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,&p_804->g_156},{&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,&p_804->g_156}},{{&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,&p_804->g_156},{&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,&p_804->g_156},{&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,&p_804->g_156}},{{&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,&p_804->g_156},{&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,&p_804->g_156},{&p_804->g_156,(void*)0,&p_804->g_156,&p_804->g_156,&p_804->g_156}}};
    uint32_t *l_497 = &p_804->g_60[4].f2;
    uint32_t *l_498 = &p_804->g_235.f2;
    uint32_t *l_499 = &p_804->g_60[4].f2;
    uint32_t *l_500 = &p_804->g_235.f2;
    uint32_t *l_501 = &p_804->g_60[4].f2;
    uint32_t *l_502 = &p_804->g_60[4].f2;
    uint32_t *l_503[3];
    uint32_t l_505 = 4294967295UL;
    uint32_t l_509 = 0xC6C68641L;
    uint16_t l_514 = 0x5093L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_38[i] = (-1L);
    for (i = 0; i < 3; i++)
        l_503[i] = &p_804->g_60[4].f2;
    for (p_804->g_25 = (-16); (p_804->g_25 < 22); p_804->g_25 = safe_add_func_uint64_t_u_u(p_804->g_25, 2))
    { /* block id: 15 */
        int8_t l_42[10];
        uint8_t *l_50 = (void*)0;
        uint8_t *l_51[4];
        int32_t l_53 = 1L;
        int16_t *l_63 = &p_804->g_23;
        union U0 **l_469 = &l_59[0][0];
        int i;
        for (i = 0; i < 10; i++)
            l_42[i] = (-1L);
        for (i = 0; i < 4; i++)
            l_51[i] = &p_804->g_52;
        if (l_38[5])
            break;
        (*l_469) = func_39(((((l_42[8] > ((((&p_804->g_23 != l_43) , (l_38[2] >= (p_35 != (void*)0))) , func_44((((l_53 = p_804->g_comm_values[p_804->tid]) , (func_54((l_59[2][1] = l_59[2][1]), (safe_sub_func_uint64_t_u_u(l_53, p_804->g_60[4].f0)), l_63, p_804->g_23, p_804) || p_804->g_30[5])) , &l_38[5]), p_804->g_234, p_804->g_69.s7, l_423[1][5][0], l_42[8], p_804)) != p_35)) >= 0x409786FF17826CDBL) & 3L) , (void*)0), p_804->g_173.s0, p_804);
        if ((atomic_inc(&p_804->g_atomic_input[38 * get_linear_group_id() + 2]) == 8))
        { /* block id: 217 */
            int8_t l_470 = 0x7BL;
            uint8_t l_471 = 3UL;
            int16_t l_472 = 0x35A8L;
            l_470 &= ((VECTOR(int32_t, 2))(5L, 0x67E326B0L)).odd;
            l_472 ^= l_471;
            unsigned int result = 0;
            result += l_470;
            result += l_471;
            result += l_472;
            atomic_add(&p_804->g_special_values[38 * get_linear_group_id() + 2], result);
        }
        else
        { /* block id: 220 */
            (1 + 1);
        }
        if ((atomic_inc(&p_804->l_atomic_input[8]) == 9))
        { /* block id: 224 */
            int8_t l_473 = 1L;
            uint64_t l_474 = 0x5C7C1333BDE1C3D2L;
            l_474--;
            unsigned int result = 0;
            result += l_473;
            result += l_474;
            atomic_add(&p_804->l_special_values[8], result);
        }
        else
        { /* block id: 226 */
            (1 + 1);
        }
    }
    for (p_804->g_156 = 0; (p_804->g_156 == 4); p_804->g_156 = safe_add_func_int32_t_s_s(p_804->g_156, 9))
    { /* block id: 232 */
        int64_t l_479 = (-2L);
        int32_t l_480 = (-7L);
        l_480 |= l_479;
    }
    if ((safe_mul_func_uint16_t_u_u(((p_804->g_504[7] &= (((p_804->g_25 , ((safe_mul_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((((+(safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), (&p_804->g_156 == l_491[3][2][2])))) , &p_35) != &p_804->g_199[4][0][3]), ((*p_35) = ((p_804->g_335.y , p_804->g_492[0]) != (p_804->g_336.x , (void*)0))))), p_804->g_496[1])), p_804->g_143.s0)) || 0x615AL)) >= p_804->g_3) > p_804->g_173.s7)) , p_804->g_7[2].f0), l_505)))
    { /* block id: 237 */
        uint8_t l_506[2][1][4] = {{{248UL,248UL,248UL,248UL}},{{248UL,248UL,248UL,248UL}}};
        int i, j, k;
        ++l_506[1][0][3];
        l_509--;
    }
    else
    { /* block id: 240 */
        (*p_804->g_512) = &p_804->g_464;
        (*p_804->g_513) = (*p_804->g_513);
    }
    return l_514;
}


/* ------------------------------------------ */
/* 
 * reads : p_804->g_451 p_804->g_143
 * writes: p_804->g_451 p_804->g_117
 */
union U0 * func_39(int16_t * p_40, uint8_t  p_41, struct S2 * p_804)
{ /* block id: 200 */
    int16_t l_458 = 0x5B14L;
    uint64_t *l_462 = &p_804->g_99;
    uint64_t **l_461[1][8][4] = {{{&l_462,&l_462,&l_462,(void*)0},{&l_462,&l_462,&l_462,(void*)0},{&l_462,&l_462,&l_462,(void*)0},{&l_462,&l_462,&l_462,(void*)0},{&l_462,&l_462,&l_462,(void*)0},{&l_462,&l_462,&l_462,(void*)0},{&l_462,&l_462,&l_462,(void*)0},{&l_462,&l_462,&l_462,(void*)0}}};
    int32_t *l_463 = &p_804->g_117;
    int32_t *l_465 = (void*)0;
    int32_t *l_466[9][8] = {{&p_804->g_3,&p_804->g_3,(void*)0,(void*)0,&p_804->g_25,(void*)0,(void*)0,&p_804->g_3},{&p_804->g_3,&p_804->g_3,(void*)0,(void*)0,&p_804->g_25,(void*)0,(void*)0,&p_804->g_3},{&p_804->g_3,&p_804->g_3,(void*)0,(void*)0,&p_804->g_25,(void*)0,(void*)0,&p_804->g_3},{&p_804->g_3,&p_804->g_3,(void*)0,(void*)0,&p_804->g_25,(void*)0,(void*)0,&p_804->g_3},{&p_804->g_3,&p_804->g_3,(void*)0,(void*)0,&p_804->g_25,(void*)0,(void*)0,&p_804->g_3},{&p_804->g_3,&p_804->g_3,(void*)0,(void*)0,&p_804->g_25,(void*)0,(void*)0,&p_804->g_3},{&p_804->g_3,&p_804->g_3,(void*)0,(void*)0,&p_804->g_25,(void*)0,(void*)0,&p_804->g_3},{&p_804->g_3,&p_804->g_3,(void*)0,(void*)0,&p_804->g_25,(void*)0,(void*)0,&p_804->g_3},{&p_804->g_3,&p_804->g_3,(void*)0,(void*)0,&p_804->g_25,(void*)0,(void*)0,&p_804->g_3}};
    int32_t l_467 = 0x0BAFABCAL;
    union U0 *l_468 = &p_804->g_60[4];
    int i, j, k;
    for (p_804->g_451 = 15; (p_804->g_451 > 20); ++p_804->g_451)
    { /* block id: 203 */
        if ((atomic_inc(&p_804->g_atomic_input[38 * get_linear_group_id() + 4]) == 3))
        { /* block id: 205 */
            int32_t l_455 = 2L;
            int64_t l_456 = 0x20700F0F945BE066L;
            int32_t l_457 = (-1L);
            l_457 ^= (l_455 , l_456);
            unsigned int result = 0;
            result += l_455;
            result += l_456;
            result += l_457;
            atomic_add(&p_804->g_special_values[38 * get_linear_group_id() + 4], result);
        }
        else
        { /* block id: 207 */
            (1 + 1);
        }
    }
    l_458 = 1L;
    l_467 = ((*l_463) = (safe_sub_func_uint8_t_u_u(p_804->g_143.s6, (l_461[0][3][3] == (void*)0))));
    return l_468;
}


/* ------------------------------------------ */
/* 
 * reads : p_804->g_84 p_804->g_451
 * writes: p_804->g_84 p_804->g_52 p_804->g_159
 */
int16_t * func_44(int32_t * p_45, union U0 * p_46, uint8_t  p_47, int32_t * p_48, uint16_t  p_49, struct S2 * p_804)
{ /* block id: 182 */
    int32_t l_435 = (-10L);
    VECTOR(uint32_t, 2) l_449 = (VECTOR(uint32_t, 2))(0UL, 0xFC049C03L);
    int16_t *l_452 = &p_804->g_23;
    int i;
    for (p_804->g_84 = 0; (p_804->g_84 < 55); p_804->g_84 = safe_add_func_int8_t_s_s(p_804->g_84, 2))
    { /* block id: 185 */
        int16_t l_440 = 0x76BBL;
        VECTOR(uint64_t, 8) l_444 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0x7A60F732D8D03B18L), 0x7A60F732D8D03B18L), 0x7A60F732D8D03B18L, 0UL, 0x7A60F732D8D03B18L);
        int i;
        for (p_804->g_52 = (-25); (p_804->g_52 != 54); p_804->g_52 = safe_add_func_int32_t_s_s(p_804->g_52, 7))
        { /* block id: 188 */
            int32_t **l_428 = &p_804->g_159;
            VECTOR(int32_t, 16) l_441 = (VECTOR(int32_t, 16))(0x6687C5F0L, (VECTOR(int32_t, 4))(0x6687C5F0L, (VECTOR(int32_t, 2))(0x6687C5F0L, 0x47A8F067L), 0x47A8F067L), 0x47A8F067L, 0x6687C5F0L, 0x47A8F067L, (VECTOR(int32_t, 2))(0x6687C5F0L, 0x47A8F067L), (VECTOR(int32_t, 2))(0x6687C5F0L, 0x47A8F067L), 0x6687C5F0L, 0x47A8F067L, 0x6687C5F0L, 0x47A8F067L);
            uint64_t *l_445 = &p_804->g_122;
            union U0 **l_446 = &p_804->g_234;
            uint64_t *l_450 = &p_804->g_99;
            int i;
            (*l_428) = p_48;
            l_435 = (safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((l_435 , (safe_mod_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(l_440, 3)) & ((((VECTOR(int32_t, 2))(l_441.s94)).hi >= (((((((*l_450) = (((p_804->g_156 = 18446744073709551615UL) > (safe_lshift_func_uint8_t_u_u(1UL, ((((*l_445) = ((VECTOR(uint64_t, 8))(l_444.s43535553)).s4) , &p_804->g_235) == ((*l_446) = &p_804->g_60[2]))))) > (safe_sub_func_int16_t_s_s((((VECTOR(uint32_t, 4))(l_449.xxyx)).w < (*p_45)), p_47)))) , (*l_428)) != p_48) == l_435) || l_449.y) <= 0x560C2CA81169F8CDL)) != p_49)), 1L))) > (*p_45)), 1L)), 0x48C9L)), l_435, 0x3D26L, 0x14A6L, 0x72CAL, l_435, 0x62C9L, 0x15B6L)).s06)).even, p_49));
            if (p_804->g_451)
                continue;
        }
    }
    p_45 = &l_435;
    return l_452;
}


/* ------------------------------------------ */
/* 
 * reads : p_804->g_52 p_804->g_98 p_804->g_23 p_804->g_6.f0 p_804->g_88 p_804->g_30 p_804->g_27 p_804->g_122 p_804->g_68 p_804->g_3 p_804->g_158 p_804->g_143 p_804->g_168 p_804->g_25 p_804->g_198 p_804->g_159 p_804->g_comm_values p_804->g_60.f0 p_804->g_173 p_804->g_240 p_804->g_226 p_804->g_2 p_804->g_170 p_804->g_174 p_804->g_386 p_804->g_336 p_804->g_7.f0 p_804->g_421
 * writes: p_804->g_52 p_804->g_84 p_804->g_27 p_804->g_23 p_804->g_99 p_804->g_88 p_804->g_117 p_804->g_122 p_804->g_68 p_804->l_comm_values p_804->g_156 p_804->g_159 p_804->g_143 p_804->g_2 p_804->g_170 p_804->g_174 p_804->g_386
 */
uint64_t  func_54(union U0 * p_55, int64_t  p_56, int16_t * p_57, uint64_t  p_58, struct S2 * p_804)
{ /* block id: 19 */
    uint32_t *l_90 = (void*)0;
    int32_t *l_100 = (void*)0;
    int16_t l_422 = 1L;
    for (p_804->g_52 = (-3); (p_804->g_52 == 49); p_804->g_52++)
    { /* block id: 22 */
        uint32_t l_157 = 2UL;
        for (p_56 = 15; (p_56 >= (-3)); p_56--)
        { /* block id: 25 */
            uint32_t l_70 = 0xD8A74670L;
            uint64_t *l_83 = &p_804->g_84;
            uint32_t *l_87[7];
            int32_t l_89 = (-1L);
            int64_t *l_153 = (void*)0;
            int64_t *l_154 = (void*)0;
            uint64_t *l_155 = &p_804->g_156;
            int16_t *l_161 = &p_804->g_23;
            int16_t **l_160 = &l_161;
            int i;
            for (i = 0; i < 7; i++)
                l_87[i] = &p_804->g_88;
            l_70 &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_804->g_68.s5370)).z, ((VECTOR(int32_t, 4))(p_804->g_69.s36ee)), ((VECTOR(int32_t, 2))(1L, (-1L))), 0x21C2DF4BL)).s1;
            (*p_804->g_421) = (safe_sub_func_int64_t_s_s(func_73(((*l_160) = func_76(p_55, ((*l_83) = (safe_lshift_func_int8_t_s_u(6L, (0UL > 0x5A511998L)))), (safe_add_func_int64_t_s_s((((l_89 = GROUP_DIVERGE(1, 1)) ^ ((((void*)0 == l_90) && (safe_rshift_func_int8_t_s_u((((((*l_155) = ((p_56 , (!((0UL < GROUP_DIVERGE(1, 1)) ^ ((p_804->l_comm_values[(safe_mod_func_uint32_t_u_u(p_804->tid, 6))] = func_93(((void*)0 == p_804->g_98), l_87[1], l_100, l_87[5], p_804)) && p_58)))) , 18446744073709551613UL)) <= p_56) | l_157) >= 0L), 4))) != 4L)) || p_804->g_23), l_157)), &p_804->g_3, p_804)), p_804->g_143.s3, p_804), p_58));
        }
        if (p_56)
            continue;
        l_422 |= 0x75C5AAE3L;
    }
    return p_804->g_60[4].f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_804->g_88 p_804->g_168 p_804->g_170 p_804->l_comm_values p_804->g_159 p_804->g_3 p_804->g_173 p_804->g_174 p_804->g_25 p_804->g_198 p_804->g_comm_values p_804->g_23 p_804->g_158 p_804->g_60.f0 p_804->g_240 p_804->g_261 p_804->g_262 p_804->g_30 p_804->g_117 p_804->g_226 p_804->g_103 p_804->g_27 p_804->g_2 p_804->g_335 p_804->g_336 p_804->g_143 p_804->g_84 p_804->g_6.f0 p_804->g_122 p_804->g_386 p_804->g_7 p_804->g_400 p_804->g_52 p_804->g_413 p_804->g_416 p_804->g_417 p_804->g_7.f0
 * writes: p_804->g_27 p_804->g_156 p_804->g_68 p_804->g_159 p_804->g_88 p_804->g_143 p_804->g_2 p_804->g_170 p_804->g_174 p_804->g_84 p_804->g_122 p_804->g_386
 */
int64_t  func_73(int16_t * p_74, int64_t  p_75, struct S2 * p_804)
{ /* block id: 74 */
    int32_t **l_162 = &p_804->g_159;
    VECTOR(int8_t, 8) l_165 = (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x51L), 0x51L), 0x51L, 8L, 0x51L);
    VECTOR(uint8_t, 8) l_166 = (VECTOR(uint8_t, 8))(0xF5L, (VECTOR(uint8_t, 4))(0xF5L, (VECTOR(uint8_t, 2))(0xF5L, 0UL), 0UL), 0UL, 0xF5L, 0UL);
    VECTOR(uint8_t, 2) l_167 = (VECTOR(uint8_t, 2))(248UL, 0x70L);
    VECTOR(uint8_t, 16) l_169 = (VECTOR(uint8_t, 16))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x76L), 0x76L), 0x76L, 1UL, 0x76L, (VECTOR(uint8_t, 2))(1UL, 0x76L), (VECTOR(uint8_t, 2))(1UL, 0x76L), 1UL, 0x76L, 1UL, 0x76L);
    int32_t l_231 = 0x23109266L;
    int32_t l_246[3];
    uint64_t *l_295 = &p_804->g_122;
    uint64_t **l_294 = &l_295;
    uint64_t **l_299 = &l_295;
    uint64_t l_314 = 0x176C35AE16F7237BL;
    VECTOR(uint64_t, 2) l_364 = (VECTOR(uint64_t, 2))(0x8F87EE88716B3586L, 0xC8BA5BAC4674FF21L);
    VECTOR(uint32_t, 4) l_406 = (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 4294967291UL), 4294967291UL);
    uint32_t l_410 = 4294967287UL;
    int i;
    for (i = 0; i < 3; i++)
        l_246[i] = 5L;
    if ((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 4))((l_162 == (void*)0), 0xEFL, 1UL, 0x5EL)).even))).yxxxyyxy))), 0xF9L, ((VECTOR(uint8_t, 2))(2UL, 1UL)), 0xF2L, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(0xAFL, (p_804->g_88 , (safe_rshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(l_165.s3544)).y, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_166.s43675614)).even)).lo)).yxxx)).z))), ((VECTOR(uint8_t, 8))(l_167.xyxxxyxy)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 8))(p_804->g_168.yzwxzyzw))))).s22)), 0x46L, ((VECTOR(uint8_t, 2))(l_169.s21)), 0x24L)).s5c12)).even)))), 0xD3L, 0xF6L)).s3 == (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 4))(p_804->g_170.xyyy)).xzywywzy, ((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),VECTOR(uint8_t, 16),((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 2))(0xF6L, 7UL)).xyyyyxxy, (uint8_t)(p_804->l_comm_values[(safe_mod_func_uint32_t_u_u(p_804->tid, 6))] || ((*p_804->g_159) <= (safe_sub_func_int32_t_s_s((*p_804->g_159), GROUP_DIVERGE(0, 1))))), (uint8_t)(**l_162)))).even)).xyzwyxwxxyzxxyyy, ((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(p_804->g_173.s3495de3c))))).odd)).wzwzwzwzwywxyxxz, ((VECTOR(uint8_t, 2))(255UL, 3UL)).yyyyxyxyxxxxyyyx))), ((VECTOR(uint8_t, 8))(p_804->g_174.s23623d71)).s2135475565156066))).even))))).s0 <= p_75)))
    { /* block id: 75 */
        int64_t *l_175 = &p_804->g_27;
        int32_t l_176 = 1L;
        int64_t *l_181 = (void*)0;
        int64_t *l_182 = (void*)0;
        int64_t *l_183 = (void*)0;
        int64_t *l_184 = (void*)0;
        int64_t *l_185 = (void*)0;
        int64_t *l_186[5];
        uint64_t *l_187 = &p_804->g_156;
        int32_t *l_188[2][3][3];
        uint32_t l_200 = 0x93BE6B13L;
        VECTOR(int8_t, 16) l_225 = (VECTOR(int8_t, 16))(0x3AL, (VECTOR(int8_t, 4))(0x3AL, (VECTOR(int8_t, 2))(0x3AL, (-1L)), (-1L)), (-1L), 0x3AL, (-1L), (VECTOR(int8_t, 2))(0x3AL, (-1L)), (VECTOR(int8_t, 2))(0x3AL, (-1L)), 0x3AL, (-1L), 0x3AL, (-1L));
        VECTOR(uint8_t, 4) l_288 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xD7L), 0xD7L);
        uint32_t l_290 = 4294967295UL;
        uint64_t **l_296 = &l_295;
        uint64_t **l_297[9];
        VECTOR(uint8_t, 2) l_338 = (VECTOR(uint8_t, 2))(0x30L, 253UL);
        VECTOR(int32_t, 2) l_342 = (VECTOR(int32_t, 2))((-1L), 0L);
        VECTOR(uint64_t, 4) l_363 = (VECTOR(uint64_t, 4))(0xC2B914E0A851D5CDL, (VECTOR(uint64_t, 2))(0xC2B914E0A851D5CDL, 1UL), 1UL);
        VECTOR(uint64_t, 16) l_365 = (VECTOR(uint64_t, 16))(0x1EE30C656EEAAE4FL, (VECTOR(uint64_t, 4))(0x1EE30C656EEAAE4FL, (VECTOR(uint64_t, 2))(0x1EE30C656EEAAE4FL, 18446744073709551612UL), 18446744073709551612UL), 18446744073709551612UL, 0x1EE30C656EEAAE4FL, 18446744073709551612UL, (VECTOR(uint64_t, 2))(0x1EE30C656EEAAE4FL, 18446744073709551612UL), (VECTOR(uint64_t, 2))(0x1EE30C656EEAAE4FL, 18446744073709551612UL), 0x1EE30C656EEAAE4FL, 18446744073709551612UL, 0x1EE30C656EEAAE4FL, 18446744073709551612UL);
        uint16_t *l_398 = &p_804->g_386[1][2];
        uint64_t l_402[5][1] = {{0UL},{0UL},{0UL},{0UL},{0UL}};
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_186[i] = (void*)0;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
            {
                for (k = 0; k < 3; k++)
                    l_188[i][j][k] = (void*)0;
            }
        }
        for (i = 0; i < 9; i++)
            l_297[i] = &l_295;
        if (((((*l_175) = p_804->g_168.x) | p_75) <= ((p_804->g_68.s0 = (l_176 , (((*l_187) = (safe_sub_func_uint64_t_u_u(p_75, (safe_sub_func_uint64_t_u_u(0UL, (l_176 |= p_75)))))) <= p_804->g_25))) && (safe_unary_minus_func_uint64_t_u((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint64_t_u_u(GROUP_DIVERGE(0, 1), (safe_lshift_func_int8_t_s_u(((((l_200 = (((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 16))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 16),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 16))(clz(((VECTOR(int8_t, 8))(7L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))((0xCA45L <= GROUP_DIVERGE(0, 1)), ((VECTOR(int8_t, 2))(1L)), 8L)))), (-9L), (-4L), 0x35L)).s1060525576346631))).odd, ((VECTOR(uint8_t, 8))(0x0EL))))).s6641231511765136))))), ((VECTOR(int16_t, 16))(0x30D8L)), ((VECTOR(int16_t, 16))(0x4595L))))).s2b, ((VECTOR(int16_t, 2))(5L))))).yyxyyxyx)).odd)))))).w , p_804->g_198) != &p_804->g_199[1][0][3]) && (**l_162))) && 0x71L) && (**l_162)) , p_75), p_804->g_comm_values[p_804->tid])))) != p_75), 11)) && (**l_162)) , FAKE_DIVERGE(p_804->local_0_offset, get_local_id(0), 10)), (*p_74))))))))
        { /* block id: 81 */
            int32_t *l_201 = (void*)0;
            int32_t l_221 = 1L;
            uint8_t l_249 = 255UL;
            VECTOR(uint16_t, 4) l_260 = (VECTOR(uint16_t, 4))(0xB259L, (VECTOR(uint16_t, 2))(0xB259L, 65534UL), 65534UL);
            uint32_t l_275 = 0x98C60677L;
            uint64_t *l_292 = (void*)0;
            VECTOR(int16_t, 4) l_308 = (VECTOR(int16_t, 4))(0x1970L, (VECTOR(int16_t, 2))(0x1970L, 0x78C5L), 0x78C5L);
            int32_t l_310 = 0x305DB9FDL;
            int32_t l_311 = 3L;
            int32_t l_312[8] = {0x7508354CL,0x7508354CL,0x7508354CL,0x7508354CL,0x7508354CL,0x7508354CL,0x7508354CL,0x7508354CL};
            int32_t l_313 = 0L;
            int i;
            (*l_162) = l_201;
            if (p_75)
            { /* block id: 83 */
                uint32_t l_237 = 0x28311FF2L;
                int32_t l_243 = 0x5B16A5F3L;
                int8_t l_244 = 0x75L;
                int32_t l_245 = 1L;
                int32_t l_247 = 0x562BE381L;
                int32_t l_248[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_248[i] = 0x2DB72ABDL;
                for (p_75 = (-3); (p_75 <= 6); p_75++)
                { /* block id: 86 */
                    uint16_t l_236[10] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                    int32_t l_241 = 0x0C90BAB0L;
                    int i;
                    (*l_162) = (*p_804->g_158);
                    for (p_804->g_88 = 0; (p_804->g_88 <= 58); p_804->g_88 = safe_add_func_uint16_t_u_u(p_804->g_88, 2))
                    { /* block id: 90 */
                        int16_t *l_238 = &p_804->g_235.f1;
                        int32_t l_239 = 0x5BBBAEF6L;
                        int32_t l_242 = 0x1964395AL;
                        l_241 |= (((safe_sub_func_uint32_t_u_u(0x80529FFDL, GROUP_DIVERGE(2, 1))) ^ (safe_div_func_int16_t_s_s((safe_sub_func_int16_t_s_s((*p_74), (safe_lshift_func_int8_t_s_u(((GROUP_DIVERGE(2, 1) ^ (safe_mod_func_uint32_t_u_u((((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int64_t_s((safe_add_func_int16_t_s_s(((((l_221 || (safe_unary_minus_func_int64_t_s((safe_mul_func_uint16_t_u_u(8UL, p_804->g_60[4].f0))))) == (((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),VECTOR(int8_t, 16),((VECTOR(int8_t, 16))(l_225.s2321d8d0860c5fd5)), ((VECTOR(int8_t, 4))(rhadd(((VECTOR(int8_t, 2))(p_804->g_226.yx)).yyxx, ((VECTOR(int8_t, 4))((-4L), ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(max(((VECTOR(int8_t, 4))(1L, ((VECTOR(int8_t, 2))(0L, 0x11L)), 0L)), (int8_t)(((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((0xED823630L || (0x45L < l_231)), (((((*l_238) = ((safe_div_func_uint16_t_u_u(((((((void*)0 == p_804->g_234) ^ p_804->g_52) || p_75) , p_75) == l_236[6]), 0x7024L)) >= l_237)) != p_804->g_68.s2) | p_75) , l_237))), l_237)) != 4UL) | 0x75L)))), 0x07L, (-1L), ((VECTOR(int8_t, 2))(8L)), p_75, 0x64L, 0x30L, ((VECTOR(int8_t, 4))(0L)), 1L)).s1e, ((VECTOR(int8_t, 2))(1L))))), (-1L)))))).xwxwyxzwyywwzyxy, ((VECTOR(int8_t, 16))(0x65L))))), ((VECTOR(int8_t, 16))(4L)), ((VECTOR(int8_t, 16))(0L))))).hi)), p_804->g_174.s2, (-3L), ((VECTOR(int8_t, 2))(0x78L)), p_75, 6L, 0x48L, 0x4FL)).s5 || l_237)) && FAKE_DIVERGE(p_804->group_2_offset, get_group_id(2), 10)) , l_239), 0L)))) | 0x1111A74DL), p_75)) >= 0x38L) != l_237), p_804->g_173.s5))) | 0x35L), 0)))), p_804->g_240.z))) < FAKE_DIVERGE(p_804->global_0_offset, get_global_id(0), 10));
                        l_242 ^= l_239;
                    }
                }
                l_243 = l_237;
                atomic_max(&p_804->g_atomic_reduction[get_linear_group_id()], p_75);
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_804->v_collective += p_804->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                ++l_249;
            }
            else
            { /* block id: 99 */
                int16_t *l_256[6][8] = {{&p_804->g_23,(void*)0,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23,&p_804->g_23,(void*)0},{&p_804->g_23,(void*)0,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23,&p_804->g_23,(void*)0},{&p_804->g_23,(void*)0,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23,&p_804->g_23,(void*)0},{&p_804->g_23,(void*)0,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23,&p_804->g_23,(void*)0},{&p_804->g_23,(void*)0,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23,&p_804->g_23,(void*)0},{&p_804->g_23,(void*)0,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23,&p_804->g_23,(void*)0}};
                int32_t l_257[8][7] = {{0x6DCF74D3L,0x0E9A344EL,0x45511DEBL,0x190099BCL,1L,0x190099BCL,0x45511DEBL},{0x6DCF74D3L,0x0E9A344EL,0x45511DEBL,0x190099BCL,1L,0x190099BCL,0x45511DEBL},{0x6DCF74D3L,0x0E9A344EL,0x45511DEBL,0x190099BCL,1L,0x190099BCL,0x45511DEBL},{0x6DCF74D3L,0x0E9A344EL,0x45511DEBL,0x190099BCL,1L,0x190099BCL,0x45511DEBL},{0x6DCF74D3L,0x0E9A344EL,0x45511DEBL,0x190099BCL,1L,0x190099BCL,0x45511DEBL},{0x6DCF74D3L,0x0E9A344EL,0x45511DEBL,0x190099BCL,1L,0x190099BCL,0x45511DEBL},{0x6DCF74D3L,0x0E9A344EL,0x45511DEBL,0x190099BCL,1L,0x190099BCL,0x45511DEBL},{0x6DCF74D3L,0x0E9A344EL,0x45511DEBL,0x190099BCL,1L,0x190099BCL,0x45511DEBL}};
                VECTOR(int64_t, 4) l_267 = (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 6L), 6L);
                uint8_t *l_274 = (void*)0;
                uint8_t *l_289 = &l_249;
                int32_t l_291 = (-1L);
                uint64_t **l_293 = &l_292;
                uint64_t ***l_298 = (void*)0;
                VECTOR(int16_t, 2) l_306 = (VECTOR(int16_t, 2))((-2L), 0L);
                VECTOR(int16_t, 4) l_309 = (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, (-1L)), (-1L));
                int i, j;
                l_291 = ((((safe_div_func_uint16_t_u_u(p_75, (l_257[5][0] &= (safe_lshift_func_int16_t_s_u((*p_74), 0))))) | (safe_mul_func_int16_t_s_s(0x6130L, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(65535UL, 0x84FCL, ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 8))(l_260.yzyxxyzz)).even))).zzwyxywz)).s37, ((VECTOR(uint16_t, 16))(sub_sat(((VECTOR(uint16_t, 4))(p_804->g_261.s1614)).wxxxyxyxyyzzyyxx, ((VECTOR(uint16_t, 8))(7UL, 9UL, (((((VECTOR(int64_t, 16))(p_804->g_262.s4104513323624360)).s2 , (safe_sub_func_int64_t_s_s((~(-1L)), ((GROUP_DIVERGE(1, 1) != ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))((safe_rshift_func_uint8_t_u_s((((VECTOR(int64_t, 8))(l_267.wywwwzww)).s2 >= p_804->g_30[9]), ((safe_div_func_uint64_t_u_u((p_75 >= (((safe_mul_func_uint8_t_u_u((l_275++), (safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_s(p_75, (p_75 || ((safe_mul_func_int16_t_s_s((l_246[0] = (safe_rshift_func_uint8_t_u_s(((((safe_rshift_func_uint8_t_u_u(((*l_289) = ((VECTOR(uint8_t, 4))(l_288.wywx)).z), 5)) ^ 4294967288UL) != GROUP_DIVERGE(0, 1)) , 0x6FL), 4))), p_804->g_173.sc)) , p_804->g_174.s6)))), p_804->g_117)))) || p_75) > p_75)), 8UL)) | p_75))), l_290, 0x0859357AL, p_75, (-1L), ((VECTOR(int32_t, 8))(0x0902CA02L)), 0x0D56A654L, 0L, 0L)).s05)), 0x4FCB8EEFL, 0L)).z) || (-1L))))) , p_804->g_262.s6) != 0x33CDAF9BL), 0UL, ((VECTOR(uint16_t, 4))(0x50B7L)))).s5177265011357225))).s63))), 1UL, 0x6D76L, 0x9D5BL, 0x55AFL)).odd)).z))) , (-4L)) , 1L);
                if (((((*l_293) = l_292) == (void*)0) <= ((l_296 = l_294) != (l_299 = l_297[2]))))
                { /* block id: 108 */
                    VECTOR(int16_t, 4) l_307 = (VECTOR(int16_t, 4))(0x1615L, (VECTOR(int16_t, 2))(0x1615L, 1L), 1L);
                    int i;
                    (*l_162) = (*p_804->g_158);
                    p_804->g_143.s4 = ((((void*)0 != &l_299) > (p_74 == ((0xDBL & ((safe_add_func_uint32_t_u_u((p_804->g_226.x | ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x05L, 0x83L)), 1UL, (safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(0x24C8L, ((*p_74) >= ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_306.yyyx)), (-1L), ((VECTOR(int16_t, 4))(l_307.xxzx)).y, 0x3264L, 2L)), ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(l_308.yywyyzzz)).odd, (int16_t)(*p_74)))).ywzwzxxy))).s7365177555275626)).sb505, ((VECTOR(int16_t, 16))(l_309.zxyyzwxwyyyxxxwz)).s4ca3))).z))) >= (p_804->g_23 <= 0x164280C6L)), 0L)), 254UL, p_804->g_103.s5, 0x9CL, 0xF4L)), 0x23L, ((VECTOR(uint8_t, 4))(0xCEL)), ((VECTOR(uint8_t, 2))(0xB1L)), 0x45L)), ((VECTOR(uint8_t, 16))(1UL))))).sb), 0x0DFA88C2L)) , p_75)) , (void*)0))) ^ p_75);
                    return p_804->g_226.x;
                }
                else
                { /* block id: 112 */
                    ++l_314;
                }
            }
            for (p_804->g_88 = (-27); (p_804->g_88 <= 60); p_804->g_88 = safe_add_func_int32_t_s_s(p_804->g_88, 1))
            { /* block id: 118 */
                int32_t *l_319 = &l_310;
                (*l_162) = l_319;
                for (l_249 = 18; (l_249 > 19); l_249 = safe_add_func_uint64_t_u_u(l_249, 6))
                { /* block id: 122 */
                    uint64_t l_331 = 4UL;
                    uint16_t l_337 = 0UL;
                    int32_t l_339 = 0x24C3B13DL;
                    for (p_804->g_27 = 0; (p_804->g_27 >= (-1)); --p_804->g_27)
                    { /* block id: 125 */
                        uint8_t *l_324 = (void*)0;
                        uint8_t *l_325 = (void*)0;
                        uint8_t *l_326 = (void*)0;
                        uint8_t *l_327 = (void*)0;
                        uint8_t *l_328[4][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
                        uint32_t *l_334 = &l_200;
                        int i, j;
                        (*l_162) = (*l_162);
                        p_804->g_2 |= (*p_804->g_159);
                        (*p_804->g_159) |= (((((p_804->g_170.y++) >= (p_804->g_174.sb ^= (p_75 , (((l_331 & ((*l_334) = (safe_add_func_uint32_t_u_u(l_331, 0xC4BFC57AL)))) & (l_331 , (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(p_804->g_335.xx)))).lo != (((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 2))(0x44L, 0x1DL)).yyyyyxyyyyxyxxyx, ((VECTOR(int8_t, 16))(p_804->g_336.xxyxxxyxxxyyyxxy))))).sa == ((((((void*)0 != &l_292) <= l_337) , (((void*)0 != &p_804->g_52) > 1L)) > p_75) > p_804->g_143.s5))))) > p_75)))) != FAKE_DIVERGE(p_804->global_2_offset, get_global_id(2), 10)) && 255UL) ^ (*p_74));
                        l_339 ^= (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_338.xy)))).lo & 0x76L);
                    }
                    for (p_804->g_84 = 18; (p_804->g_84 == 24); p_804->g_84 = safe_add_func_int8_t_s_s(p_804->g_84, 7))
                    { /* block id: 136 */
                        (*l_319) &= ((VECTOR(int32_t, 8))(l_342.xxyxxyxx)).s3;
                    }
                }
                (**l_162) = (**p_804->g_158);
                return p_804->g_6[5].f0;
            }
            if ((atomic_inc(&p_804->l_atomic_input[27]) == 3))
            { /* block id: 144 */
                uint8_t l_343 = 249UL;
                VECTOR(uint32_t, 16) l_344 = (VECTOR(uint32_t, 16))(0xE41648A3L, (VECTOR(uint32_t, 4))(0xE41648A3L, (VECTOR(uint32_t, 2))(0xE41648A3L, 0xA0C01309L), 0xA0C01309L), 0xA0C01309L, 0xE41648A3L, 0xA0C01309L, (VECTOR(uint32_t, 2))(0xE41648A3L, 0xA0C01309L), (VECTOR(uint32_t, 2))(0xE41648A3L, 0xA0C01309L), 0xE41648A3L, 0xA0C01309L, 0xE41648A3L, 0xA0C01309L);
                uint16_t l_345 = 0xC957L;
                uint32_t l_346 = 0UL;
                VECTOR(uint32_t, 16) l_347 = (VECTOR(uint32_t, 16))(0x01E014CDL, (VECTOR(uint32_t, 4))(0x01E014CDL, (VECTOR(uint32_t, 2))(0x01E014CDL, 0xEE69BDBFL), 0xEE69BDBFL), 0xEE69BDBFL, 0x01E014CDL, 0xEE69BDBFL, (VECTOR(uint32_t, 2))(0x01E014CDL, 0xEE69BDBFL), (VECTOR(uint32_t, 2))(0x01E014CDL, 0xEE69BDBFL), 0x01E014CDL, 0xEE69BDBFL, 0x01E014CDL, 0xEE69BDBFL);
                int32_t l_348 = 0x5C9F7CA3L;
                int32_t l_349 = 0x52332297L;
                int32_t l_351 = 3L;
                int32_t *l_350[2];
                int32_t *l_352 = &l_351;
                uint32_t l_353 = 0UL;
                uint32_t l_354 = 0xF68E8D61L;
                int i;
                for (i = 0; i < 2; i++)
                    l_350[i] = &l_351;
                l_352 = ((l_343 , ((VECTOR(uint32_t, 8))(0UL, 0x91BE6C88L, ((VECTOR(uint32_t, 2))(l_344.s9a)), (l_346 = l_345), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(l_347.s5ac8)).wxxwwzxyyywyyywz)).s62d1))).xxwzyxxx)).s4405736106127274)).sad)), 2UL)).s4) , ((l_349 ^= l_348) , l_350[0]));
                l_354 &= l_353;
                unsigned int result = 0;
                result += l_343;
                result += l_344.sf;
                result += l_344.se;
                result += l_344.sd;
                result += l_344.sc;
                result += l_344.sb;
                result += l_344.sa;
                result += l_344.s9;
                result += l_344.s8;
                result += l_344.s7;
                result += l_344.s6;
                result += l_344.s5;
                result += l_344.s4;
                result += l_344.s3;
                result += l_344.s2;
                result += l_344.s1;
                result += l_344.s0;
                result += l_345;
                result += l_346;
                result += l_347.sf;
                result += l_347.se;
                result += l_347.sd;
                result += l_347.sc;
                result += l_347.sb;
                result += l_347.sa;
                result += l_347.s9;
                result += l_347.s8;
                result += l_347.s7;
                result += l_347.s6;
                result += l_347.s5;
                result += l_347.s4;
                result += l_347.s3;
                result += l_347.s2;
                result += l_347.s1;
                result += l_347.s0;
                result += l_348;
                result += l_349;
                result += l_351;
                result += l_353;
                result += l_354;
                atomic_add(&p_804->l_special_values[27], result);
            }
            else
            { /* block id: 149 */
                (1 + 1);
            }
        }
        else
        { /* block id: 152 */
            uint8_t l_359 = 0xC4L;
            int8_t l_379 = 0x5AL;
            VECTOR(uint16_t, 16) l_391 = (VECTOR(uint16_t, 16))(0x184DL, (VECTOR(uint16_t, 4))(0x184DL, (VECTOR(uint16_t, 2))(0x184DL, 5UL), 5UL), 5UL, 0x184DL, 5UL, (VECTOR(uint16_t, 2))(0x184DL, 5UL), (VECTOR(uint16_t, 2))(0x184DL, 5UL), 0x184DL, 5UL, 0x184DL, 5UL);
            int i;
            for (p_804->g_122 = (-23); (p_804->g_122 != 33); p_804->g_122++)
            { /* block id: 155 */
                int64_t l_362 = 0L;
                uint8_t *l_380[3];
                int8_t *l_381 = (void*)0;
                int8_t *l_382 = (void*)0;
                int8_t *l_383[3][9];
                uint16_t l_384 = 0x2EFDL;
                uint16_t *l_385 = &p_804->g_386[1][2];
                int64_t l_401[2][3] = {{0x3268F7BDA1A9B85FL,0x3268F7BDA1A9B85FL,0x3268F7BDA1A9B85FL},{0x3268F7BDA1A9B85FL,0x3268F7BDA1A9B85FL,0x3268F7BDA1A9B85FL}};
                int32_t l_403[2];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_380[i] = (void*)0;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 9; j++)
                        l_383[i][j] = (void*)0;
                }
                for (i = 0; i < 2; i++)
                    l_403[i] = 0x66AFCAE5L;
                (*l_162) = (*p_804->g_158);
                l_246[0] ^= (safe_add_func_uint64_t_u_u((~p_75), (l_359 < ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 2))(0x6C6DL, 0x27B4L)).hi, (l_362 != (((*l_385) ^= (((((VECTOR(uint64_t, 8))(add_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_363.yyzyxxzyxwzzzxyz)).s69e3)).even)).yxxxxyyx, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(l_364.xx)), 0xDCC6FA711EAD79FBL, 18446744073709551606UL, ((VECTOR(uint64_t, 2))(mad_hi(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 2))(0x83A4A8F0D119D706L, 18446744073709551615UL)).yxyy, ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0x3E5404E3BB2D7024L, 0xB7287B92F76AECB3L)).yyxy)).wyywyzzyzyyzywxx)).sc779))).even, ((VECTOR(uint64_t, 16))(max(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(l_365.sbc6a5ad9)))).s3252072457017276, (uint64_t)((l_384 = ((safe_add_func_int8_t_s_s((+(safe_rshift_func_uint16_t_u_u(p_75, (l_359 || ((FAKE_DIVERGE(p_804->local_1_offset, get_local_id(1), 10) & (safe_mul_func_uint8_t_u_u(((0UL >= ((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((p_804->g_376 = &l_290) != &p_804->g_88), (safe_sub_func_uint8_t_u_u((p_804->g_173.s5 = l_379), 0x36L)))), (-4L))) | p_75)) | 0UL), GROUP_DIVERGE(0, 1)))) < 5UL))))), 0x80L)) || FAKE_DIVERGE(p_804->group_0_offset, get_group_id(0), 10))) >= p_75)))).s09, ((VECTOR(uint64_t, 2))(0xFDC0B5CB705B3227L))))), 0x7332DA7B7EE8495CL, 5UL))))).s7 || 6L) | p_75) , p_75)) >= (*p_74))))) > 1L))));
                for (l_290 = 0; (l_290 <= 2); l_290++)
                { /* block id: 164 */
                    uint64_t l_399 = 0x5071E90B857A8528L;
                    VECTOR(uint32_t, 2) l_407 = (VECTOR(uint32_t, 2))(0xB486E362L, 0x710F1840L);
                    int i;
                    l_403[0] = ((4294967293UL != ((safe_mul_func_int16_t_s_s(2L, ((VECTOR(uint16_t, 16))(l_391.s29fe6b33b2315aea)).s0)) | (safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))((*p_74), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x3FABL, 0x3D52L)), ((p_804->g_7[2] , (p_804->g_335.x , (((p_804->g_103.s7 > (((~0xF9A14C600E59AFEAL) < (l_401[0][1] = ((safe_sub_func_int64_t_s_s(((safe_div_func_uint32_t_u_u((l_398 == &p_804->g_386[1][2]), l_399)) , p_75), p_804->g_400)) < p_804->g_52))) < 0x16693874L)) || l_402[0][0]) && (-1L)))) || p_75), 0x1D44L, l_399, 0x1169L, 0x7277L, (*p_74), ((VECTOR(int16_t, 2))(0L)), (*p_74), 0x5DE2L, ((VECTOR(int16_t, 4))(1L)))).s2330, ((VECTOR(int16_t, 4))(1L))))).zzzzyyzyyxwzzzxw, ((VECTOR(int16_t, 16))((-4L)))))).sd7)), 0x6337L, (**l_162), (-1L), 0x064AL, (*p_74), ((VECTOR(int16_t, 4))(0x4843L)), (*p_74), ((VECTOR(int16_t, 2))(4L)), 2L)).sc7)).lo, 4UL)))) > p_804->g_143.s2);
                    l_246[0] = (p_804->g_336.x != ((**p_804->g_158) < (safe_mod_func_uint64_t_u_u(((((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 4))(l_406.zyzy)).yzzxywxz, ((VECTOR(uint32_t, 4))(l_407.xxxx)).zyywxyzz, ((VECTOR(uint32_t, 16))(((p_75 < ((safe_mod_func_uint16_t_u_u(l_410, (*p_74))) >= (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(p_804->g_413.xw)).lo, (((safe_mod_func_int64_t_s_s((0L || l_407.x), GROUP_DIVERGE(2, 1))) > ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 16))(p_804->g_416.ywyyyzzwwzwyzxxw)).hi, ((VECTOR(int64_t, 2))(p_804->g_417.s44)).xxyxxxyx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(0L, (safe_lshift_func_uint16_t_u_u((((((void*)0 != &p_804->g_159) >= p_804->l_comm_values[(safe_mod_func_uint32_t_u_u(p_804->tid, 6))]) , 0x77B137D5L) == p_75), 6)), 0x0026F99FF59B3E76L, 0L, 0x02D5B5880232EAA1L, 0x08861449FCD687A8L, 4L, 0L))))))).s32)).yxyy)).x) , l_407.x))))) > (**l_162)), ((VECTOR(uint32_t, 4))(1UL)), FAKE_DIVERGE(p_804->global_2_offset, get_global_id(2), 10), ((VECTOR(uint32_t, 8))(0x667F89A7L)), 0xF02FD334L, 4294967287UL)).lo))).s4 | 1L) & (**l_162)), p_75))));
                }
            }
        }
        l_246[0] &= p_75;
    }
    else
    { /* block id: 172 */
        return p_75;
    }
    return p_804->g_7[2].f0;
}


/* ------------------------------------------ */
/* 
 * reads : p_804->g_158
 * writes: p_804->g_159
 */
int16_t * func_76(union U0 * p_77, uint64_t  p_78, int32_t  p_79, int32_t * p_80, struct S2 * p_804)
{ /* block id: 70 */
    (*p_804->g_158) = p_80;
    return &p_804->g_23;
}


/* ------------------------------------------ */
/* 
 * reads : p_804->g_103 p_804->g_23 p_804->g_99 p_804->g_6.f0 p_804->g_30 p_804->g_88 p_804->g_27 p_804->g_122 p_804->g_68 p_804->g_3 p_804->g_143
 * writes: p_804->g_27 p_804->g_23 p_804->g_99 p_804->g_117 p_804->g_88 p_804->g_122 p_804->g_68
 */
int64_t  func_93(int64_t  p_94, int32_t * p_95, int32_t * p_96, int32_t * p_97, struct S2 * p_804)
{ /* block id: 29 */
    int32_t l_104[3][2];
    int64_t *l_105 = (void*)0;
    int64_t *l_106 = (void*)0;
    int64_t *l_107 = &p_804->g_27;
    int64_t l_118 = 0x0FBC845C4EFE4AB8L;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
            l_104[i][j] = 1L;
    }
    if ((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(p_804->g_103.sa76656e8c2baf610)).s6, ((*l_107) = (l_104[2][1] && p_804->g_23)))))
    { /* block id: 31 */
        int32_t *l_124[5][2] = {{&l_104[1][1],&l_104[1][1]},{&l_104[1][1],&l_104[1][1]},{&l_104[1][1],&l_104[1][1]},{&l_104[1][1],&l_104[1][1]},{&l_104[1][1],&l_104[1][1]}};
        VECTOR(uint32_t, 16) l_135 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xA344D227L), 0xA344D227L), 0xA344D227L, 1UL, 0xA344D227L, (VECTOR(uint32_t, 2))(1UL, 0xA344D227L), (VECTOR(uint32_t, 2))(1UL, 0xA344D227L), 1UL, 0xA344D227L, 1UL, 0xA344D227L);
        int8_t l_142 = 0x23L;
        int i, j;
        for (p_804->g_23 = 0; (p_804->g_23 <= (-23)); --p_804->g_23)
        { /* block id: 34 */
            for (p_804->g_99 = 12; (p_804->g_99 == 43); ++p_804->g_99)
            { /* block id: 37 */
                if (p_804->g_6[5].f0)
                    break;
                return p_94;
            }
        }
        for (p_804->g_99 = 0; (p_804->g_99 != 16); ++p_804->g_99)
        { /* block id: 44 */
            uint8_t *l_116 = (void*)0;
            uint64_t *l_121 = &p_804->g_122;
            int32_t l_125 = 0x2FE436B3L;
            VECTOR(int32_t, 2) l_126 = (VECTOR(int32_t, 2))(0x3AE6C0B0L, (-5L));
            uint32_t *l_139[4][2][6] = {{{&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88},{&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88}},{{&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88},{&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88}},{{&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88},{&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88}},{{&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88},{&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88,&p_804->g_88}}};
            uint32_t **l_138 = &l_139[1][1][4];
            int16_t *l_140 = &p_804->g_23;
            uint8_t l_141 = 0x3DL;
            int i, j, k;
            atomic_xor(&p_804->l_atomic_reduction[0], (((p_804->g_117 = p_94) | (((*p_95) ^= p_804->g_30[4]) | l_118)) || (((l_125 &= (((safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_804->group_2_offset, get_group_id(2), 10), 0)) ^ (!(&p_804->g_3 == ((((*l_121) = p_804->g_27) , (~(((p_804->g_68.s4 = (safe_unary_minus_func_uint64_t_u((((l_124[0][0] != &p_804->g_3) >= ((p_94 >= (((((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(7L, p_804->g_122, p_804->g_68.s1, 0x023F5DDD1E68DCC5L, 0x6BF3C664DA59623BL, p_804->g_122, 0x65DEB8F547C474B7L, 0L)).lo)).w || p_94) || p_804->g_3) & 18446744073709551615UL) != 1UL) <= 253UL)) < p_94)) | p_94)))) && GROUP_DIVERGE(0, 1)) , 0x5FL))) , p_97)))) , p_94)) != l_126.y) > FAKE_DIVERGE(p_804->group_0_offset, get_group_id(0), 10))));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_804->v_collective += p_804->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            (*p_95) |= (-10L);
            (*p_97) = (safe_rshift_func_uint8_t_u_s(((65535UL ^ ((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((GROUP_DIVERGE(2, 1) ^ ((VECTOR(uint32_t, 16))(l_135.s3a5a0644ea386fe3)).sa) & p_94), (safe_lshift_func_int16_t_s_s(((*l_140) = (((*l_138) = &p_804->g_88) != (void*)0)), 13)))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(0x40L, 1L)))).xyxx)))).odd)), (-5L), 5L)).w)) >= l_141)) > l_142), 3));
            l_126.x = ((VECTOR(int32_t, 2))(p_804->g_143.s03)).odd;
        }
        if ((atomic_inc(&p_804->g_atomic_input[38 * get_linear_group_id() + 1]) == 6))
        { /* block id: 58 */
            VECTOR(int32_t, 8) l_144 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
            VECTOR(int32_t, 4) l_145 = (VECTOR(int32_t, 4))(0x17FFC2CBL, (VECTOR(int32_t, 2))(0x17FFC2CBL, 1L), 1L);
            VECTOR(int32_t, 2) l_146 = (VECTOR(int32_t, 2))(0x467E8B17L, 0L);
            VECTOR(int32_t, 16) l_147 = (VECTOR(int32_t, 16))(0x61F95ED2L, (VECTOR(int32_t, 4))(0x61F95ED2L, (VECTOR(int32_t, 2))(0x61F95ED2L, 7L), 7L), 7L, 0x61F95ED2L, 7L, (VECTOR(int32_t, 2))(0x61F95ED2L, 7L), (VECTOR(int32_t, 2))(0x61F95ED2L, 7L), 0x61F95ED2L, 7L, 0x61F95ED2L, 7L);
            uint32_t l_148 = 1UL;
            VECTOR(int32_t, 8) l_149 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
            uint16_t l_150 = 1UL;
            int i;
            l_150 &= ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(l_144.s5041717432144650)).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_145.xxyyzzwx)).s47)), ((VECTOR(int32_t, 8))(0x35C934E1L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(1L, 0x29F7A423L)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_146.yyyx)).wxyyywwwwzzzwxxw)).s5c))), 0x28194CA4L, 1L)).x, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_147.sa4)).xyyxxyxy)).s40)).yyyy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 2))(0x01BE33A7L, 0x005E7986L)).yyyy, (int32_t)((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(8L, (-1L))), 0x0D028DA7L, (-1L))).y, (int32_t)l_148))).wzzywwywwxzwyyzx, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(0L, (-1L))).yyyx, ((VECTOR(int32_t, 16))(l_149.s5055204363545253)).s7c3c))).zxwzyyzyzzzzzxww))))).odd)).s10)).yyyy))), 1L, (-6L))).s77))).xxxyxyxy))))).s1;
            unsigned int result = 0;
            result += l_144.s7;
            result += l_144.s6;
            result += l_144.s5;
            result += l_144.s4;
            result += l_144.s3;
            result += l_144.s2;
            result += l_144.s1;
            result += l_144.s0;
            result += l_145.w;
            result += l_145.z;
            result += l_145.y;
            result += l_145.x;
            result += l_146.y;
            result += l_146.x;
            result += l_147.sf;
            result += l_147.se;
            result += l_147.sd;
            result += l_147.sc;
            result += l_147.sb;
            result += l_147.sa;
            result += l_147.s9;
            result += l_147.s8;
            result += l_147.s7;
            result += l_147.s6;
            result += l_147.s5;
            result += l_147.s4;
            result += l_147.s3;
            result += l_147.s2;
            result += l_147.s1;
            result += l_147.s0;
            result += l_148;
            result += l_149.s7;
            result += l_149.s6;
            result += l_149.s5;
            result += l_149.s4;
            result += l_149.s3;
            result += l_149.s2;
            result += l_149.s1;
            result += l_149.s0;
            result += l_150;
            atomic_add(&p_804->g_special_values[38 * get_linear_group_id() + 1], result);
        }
        else
        { /* block id: 60 */
            (1 + 1);
        }
    }
    else
    { /* block id: 63 */
        int32_t *l_151[2][7][9] = {{{&p_804->g_3,(void*)0,(void*)0,(void*)0,&l_104[2][1],&l_104[0][1],&p_804->g_25,(void*)0,(void*)0},{&p_804->g_3,(void*)0,(void*)0,(void*)0,&l_104[2][1],&l_104[0][1],&p_804->g_25,(void*)0,(void*)0},{&p_804->g_3,(void*)0,(void*)0,(void*)0,&l_104[2][1],&l_104[0][1],&p_804->g_25,(void*)0,(void*)0},{&p_804->g_3,(void*)0,(void*)0,(void*)0,&l_104[2][1],&l_104[0][1],&p_804->g_25,(void*)0,(void*)0},{&p_804->g_3,(void*)0,(void*)0,(void*)0,&l_104[2][1],&l_104[0][1],&p_804->g_25,(void*)0,(void*)0},{&p_804->g_3,(void*)0,(void*)0,(void*)0,&l_104[2][1],&l_104[0][1],&p_804->g_25,(void*)0,(void*)0},{&p_804->g_3,(void*)0,(void*)0,(void*)0,&l_104[2][1],&l_104[0][1],&p_804->g_25,(void*)0,(void*)0}},{{&p_804->g_3,(void*)0,(void*)0,(void*)0,&l_104[2][1],&l_104[0][1],&p_804->g_25,(void*)0,(void*)0},{&p_804->g_3,(void*)0,(void*)0,(void*)0,&l_104[2][1],&l_104[0][1],&p_804->g_25,(void*)0,(void*)0},{&p_804->g_3,(void*)0,(void*)0,(void*)0,&l_104[2][1],&l_104[0][1],&p_804->g_25,(void*)0,(void*)0},{&p_804->g_3,(void*)0,(void*)0,(void*)0,&l_104[2][1],&l_104[0][1],&p_804->g_25,(void*)0,(void*)0},{&p_804->g_3,(void*)0,(void*)0,(void*)0,&l_104[2][1],&l_104[0][1],&p_804->g_25,(void*)0,(void*)0},{&p_804->g_3,(void*)0,(void*)0,(void*)0,&l_104[2][1],&l_104[0][1],&p_804->g_25,(void*)0,(void*)0},{&p_804->g_3,(void*)0,(void*)0,(void*)0,&l_104[2][1],&l_104[0][1],&p_804->g_25,(void*)0,(void*)0}}};
        int32_t **l_152 = &l_151[1][3][5];
        int i, j, k;
        (*l_152) = l_151[1][1][0];
        return l_104[0][1];
    }
    return p_94;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[38];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 38; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[38];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 38; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[6];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 6; i++)
            l_comm_values[i] = 1;
    struct S2 c_805;
    struct S2* p_804 = &c_805;
    struct S2 c_806 = {
        0x137A3A11L, // p_804->g_2
        0x7478144AL, // p_804->g_3
        {{255UL},{255UL},{255UL},{255UL},{255UL},{255UL},{255UL},{255UL},{255UL}}, // p_804->g_6
        {{0x189F42C6L},{0x189F42C6L},{0x189F42C6L},{0x189F42C6L},{0x189F42C6L}}, // p_804->g_7
        0x7321L, // p_804->g_23
        0x4C9F71D6L, // p_804->g_25
        0x2FC438F874340CABL, // p_804->g_27
        0x0AL, // p_804->g_28
        3L, // p_804->g_29
        {0x7A766E9B1CC8FFCAL,0x7A766E9B1CC8FFCAL,0x7A766E9B1CC8FFCAL,0x7A766E9B1CC8FFCAL,0x7A766E9B1CC8FFCAL,0x7A766E9B1CC8FFCAL,0x7A766E9B1CC8FFCAL,0x7A766E9B1CC8FFCAL,0x7A766E9B1CC8FFCAL,0x7A766E9B1CC8FFCAL}, // p_804->g_30
        0x8EL, // p_804->g_31
        250UL, // p_804->g_52
        {{255UL},{255UL},{255UL},{255UL},{255UL},{255UL},{255UL},{255UL}}, // p_804->g_60
        (VECTOR(int32_t, 8))(0x73138B78L, (VECTOR(int32_t, 4))(0x73138B78L, (VECTOR(int32_t, 2))(0x73138B78L, 0x19AEFA9AL), 0x19AEFA9AL), 0x19AEFA9AL, 0x73138B78L, 0x19AEFA9AL), // p_804->g_68
        (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x45565C69L), 0x45565C69L), 0x45565C69L, 1L, 0x45565C69L, (VECTOR(int32_t, 2))(1L, 0x45565C69L), (VECTOR(int32_t, 2))(1L, 0x45565C69L), 1L, 0x45565C69L, 1L, 0x45565C69L), // p_804->g_69
        0x3C4E318651235921L, // p_804->g_84
        0x5597267FL, // p_804->g_88
        0x3C1E39B249F0F192L, // p_804->g_99
        &p_804->g_99, // p_804->g_98
        (VECTOR(int64_t, 16))(0x646FD8114BAAC2ECL, (VECTOR(int64_t, 4))(0x646FD8114BAAC2ECL, (VECTOR(int64_t, 2))(0x646FD8114BAAC2ECL, (-1L)), (-1L)), (-1L), 0x646FD8114BAAC2ECL, (-1L), (VECTOR(int64_t, 2))(0x646FD8114BAAC2ECL, (-1L)), (VECTOR(int64_t, 2))(0x646FD8114BAAC2ECL, (-1L)), 0x646FD8114BAAC2ECL, (-1L), 0x646FD8114BAAC2ECL, (-1L)), // p_804->g_103
        (-1L), // p_804->g_117
        0UL, // p_804->g_122
        (VECTOR(int32_t, 8))(0x1794801DL, (VECTOR(int32_t, 4))(0x1794801DL, (VECTOR(int32_t, 2))(0x1794801DL, (-1L)), (-1L)), (-1L), 0x1794801DL, (-1L)), // p_804->g_143
        0x8A95B55B51793055L, // p_804->g_156
        &p_804->g_117, // p_804->g_159
        &p_804->g_159, // p_804->g_158
        (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, (-9L)), (-9L)), // p_804->g_168
        (VECTOR(uint8_t, 2))(255UL, 8UL), // p_804->g_170
        (VECTOR(uint8_t, 16))(0x60L, (VECTOR(uint8_t, 4))(0x60L, (VECTOR(uint8_t, 2))(0x60L, 0x52L), 0x52L), 0x52L, 0x60L, 0x52L, (VECTOR(uint8_t, 2))(0x60L, 0x52L), (VECTOR(uint8_t, 2))(0x60L, 0x52L), 0x60L, 0x52L, 0x60L, 0x52L), // p_804->g_173
        (VECTOR(uint8_t, 16))(252UL, (VECTOR(uint8_t, 4))(252UL, (VECTOR(uint8_t, 2))(252UL, 9UL), 9UL), 9UL, 252UL, 9UL, (VECTOR(uint8_t, 2))(252UL, 9UL), (VECTOR(uint8_t, 2))(252UL, 9UL), 252UL, 9UL, 252UL, 9UL), // p_804->g_174
        {{{&p_804->g_23,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23}},{{&p_804->g_23,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23}},{{&p_804->g_23,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23}},{{&p_804->g_23,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23}},{{&p_804->g_23,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23}},{{&p_804->g_23,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23}},{{&p_804->g_23,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23}},{{&p_804->g_23,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23}},{{&p_804->g_23,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23}},{{&p_804->g_23,(void*)0,&p_804->g_23,(void*)0,&p_804->g_23}}}, // p_804->g_199
        &p_804->g_199[0][0][3], // p_804->g_198
        (VECTOR(int8_t, 2))(0L, 0L), // p_804->g_226
        {255UL}, // p_804->g_235
        &p_804->g_235, // p_804->g_234
        (VECTOR(int64_t, 4))(2L, (VECTOR(int64_t, 2))(2L, 0x679D42AF56C28166L), 0x679D42AF56C28166L), // p_804->g_240
        (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x05BEL), 0x05BEL), 0x05BEL, 65535UL, 0x05BEL), // p_804->g_261
        (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x0C3C7E1C973A6B71L), 0x0C3C7E1C973A6B71L), 0x0C3C7E1C973A6B71L, 1L, 0x0C3C7E1C973A6B71L), // p_804->g_262
        (VECTOR(uint64_t, 4))(18446744073709551609UL, (VECTOR(uint64_t, 2))(18446744073709551609UL, 18446744073709551606UL), 18446744073709551606UL), // p_804->g_335
        (VECTOR(int8_t, 2))(0x64L, 0x37L), // p_804->g_336
        &p_804->g_88, // p_804->g_376
        {{65535UL,65535UL,0xBAE7L,0x9FD0L,0x4380L,0x9FD0L,0xBAE7L,65535UL,65535UL},{65535UL,65535UL,0xBAE7L,0x9FD0L,0x4380L,0x9FD0L,0xBAE7L,65535UL,65535UL},{65535UL,65535UL,0xBAE7L,0x9FD0L,0x4380L,0x9FD0L,0xBAE7L,65535UL,65535UL},{65535UL,65535UL,0xBAE7L,0x9FD0L,0x4380L,0x9FD0L,0xBAE7L,65535UL,65535UL},{65535UL,65535UL,0xBAE7L,0x9FD0L,0x4380L,0x9FD0L,0xBAE7L,65535UL,65535UL},{65535UL,65535UL,0xBAE7L,0x9FD0L,0x4380L,0x9FD0L,0xBAE7L,65535UL,65535UL}}, // p_804->g_386
        0x1FL, // p_804->g_400
        (VECTOR(uint8_t, 4))(6UL, (VECTOR(uint8_t, 2))(6UL, 251UL), 251UL), // p_804->g_413
        (VECTOR(int64_t, 4))((-8L), (VECTOR(int64_t, 2))((-8L), 1L), 1L), // p_804->g_416
        (VECTOR(int64_t, 8))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 0x32E4B229E7DBFF4BL), 0x32E4B229E7DBFF4BL), 0x32E4B229E7DBFF4BL, 4L, 0x32E4B229E7DBFF4BL), // p_804->g_417
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_804->g_420
        &p_804->g_117, // p_804->g_421
        0x5CABL, // p_804->g_451
        (void*)0, // p_804->g_464
        18446744073709551615UL, // p_804->g_495
        &p_804->g_495, // p_804->g_494
        &p_804->g_494, // p_804->g_493
        {&p_804->g_493,&p_804->g_493,&p_804->g_493}, // p_804->g_492
        {0x9FDDD0EC55B4FE92L,0x9FDDD0EC55B4FE92L,0x9FDDD0EC55B4FE92L,0x9FDDD0EC55B4FE92L,0x9FDDD0EC55B4FE92L}, // p_804->g_496
        {0x296DDBD2L,0x296DDBD2L,0x296DDBD2L,0x296DDBD2L,0x296DDBD2L,0x296DDBD2L,0x296DDBD2L,0x296DDBD2L}, // p_804->g_504
        (void*)0, // p_804->g_513
        &p_804->g_513, // p_804->g_512
        65535UL, // p_804->g_525
        1UL, // p_804->g_540
        (VECTOR(int16_t, 8))(0x7215L, (VECTOR(int16_t, 4))(0x7215L, (VECTOR(int16_t, 2))(0x7215L, 0L), 0L), 0L, 0x7215L, 0L), // p_804->g_687
        (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L), // p_804->g_703
        0xF56A5AE75EB9FE96L, // p_804->g_726
        (VECTOR(uint16_t, 2))(0x72C1L, 0xE909L), // p_804->g_769
        (VECTOR(uint16_t, 16))(0x37A7L, (VECTOR(uint16_t, 4))(0x37A7L, (VECTOR(uint16_t, 2))(0x37A7L, 0xC114L), 0xC114L), 0xC114L, 0x37A7L, 0xC114L, (VECTOR(uint16_t, 2))(0x37A7L, 0xC114L), (VECTOR(uint16_t, 2))(0x37A7L, 0xC114L), 0x37A7L, 0xC114L, 0x37A7L, 0xC114L), // p_804->g_770
        (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 1UL), 1UL), // p_804->g_771
        (VECTOR(int32_t, 2))(0x7ACD4E59L, 0x4D0B6F9FL), // p_804->g_779
        {0L}, // p_804->g_796
        0, // p_804->v_collective
        sequence_input[get_global_id(0)], // p_804->global_0_offset
        sequence_input[get_global_id(1)], // p_804->global_1_offset
        sequence_input[get_global_id(2)], // p_804->global_2_offset
        sequence_input[get_local_id(0)], // p_804->local_0_offset
        sequence_input[get_local_id(1)], // p_804->local_1_offset
        sequence_input[get_local_id(2)], // p_804->local_2_offset
        sequence_input[get_group_id(0)], // p_804->group_0_offset
        sequence_input[get_group_id(1)], // p_804->group_1_offset
        sequence_input[get_group_id(2)], // p_804->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 6)), permutations[0][get_linear_local_id()])), // p_804->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_805 = c_806;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_804);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_804->g_2, "p_804->g_2", print_hash_value);
    transparent_crc(p_804->g_3, "p_804->g_3", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_804->g_6[i].f0, "p_804->g_6[i].f0", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_804->g_7[i].f0, "p_804->g_7[i].f0", print_hash_value);

    }
    transparent_crc(p_804->g_23, "p_804->g_23", print_hash_value);
    transparent_crc(p_804->g_25, "p_804->g_25", print_hash_value);
    transparent_crc(p_804->g_27, "p_804->g_27", print_hash_value);
    transparent_crc(p_804->g_28, "p_804->g_28", print_hash_value);
    transparent_crc(p_804->g_29, "p_804->g_29", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_804->g_30[i], "p_804->g_30[i]", print_hash_value);

    }
    transparent_crc(p_804->g_31, "p_804->g_31", print_hash_value);
    transparent_crc(p_804->g_52, "p_804->g_52", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_804->g_60[i].f0, "p_804->g_60[i].f0", print_hash_value);

    }
    transparent_crc(p_804->g_68.s0, "p_804->g_68.s0", print_hash_value);
    transparent_crc(p_804->g_68.s1, "p_804->g_68.s1", print_hash_value);
    transparent_crc(p_804->g_68.s2, "p_804->g_68.s2", print_hash_value);
    transparent_crc(p_804->g_68.s3, "p_804->g_68.s3", print_hash_value);
    transparent_crc(p_804->g_68.s4, "p_804->g_68.s4", print_hash_value);
    transparent_crc(p_804->g_68.s5, "p_804->g_68.s5", print_hash_value);
    transparent_crc(p_804->g_68.s6, "p_804->g_68.s6", print_hash_value);
    transparent_crc(p_804->g_68.s7, "p_804->g_68.s7", print_hash_value);
    transparent_crc(p_804->g_69.s0, "p_804->g_69.s0", print_hash_value);
    transparent_crc(p_804->g_69.s1, "p_804->g_69.s1", print_hash_value);
    transparent_crc(p_804->g_69.s2, "p_804->g_69.s2", print_hash_value);
    transparent_crc(p_804->g_69.s3, "p_804->g_69.s3", print_hash_value);
    transparent_crc(p_804->g_69.s4, "p_804->g_69.s4", print_hash_value);
    transparent_crc(p_804->g_69.s5, "p_804->g_69.s5", print_hash_value);
    transparent_crc(p_804->g_69.s6, "p_804->g_69.s6", print_hash_value);
    transparent_crc(p_804->g_69.s7, "p_804->g_69.s7", print_hash_value);
    transparent_crc(p_804->g_69.s8, "p_804->g_69.s8", print_hash_value);
    transparent_crc(p_804->g_69.s9, "p_804->g_69.s9", print_hash_value);
    transparent_crc(p_804->g_69.sa, "p_804->g_69.sa", print_hash_value);
    transparent_crc(p_804->g_69.sb, "p_804->g_69.sb", print_hash_value);
    transparent_crc(p_804->g_69.sc, "p_804->g_69.sc", print_hash_value);
    transparent_crc(p_804->g_69.sd, "p_804->g_69.sd", print_hash_value);
    transparent_crc(p_804->g_69.se, "p_804->g_69.se", print_hash_value);
    transparent_crc(p_804->g_69.sf, "p_804->g_69.sf", print_hash_value);
    transparent_crc(p_804->g_84, "p_804->g_84", print_hash_value);
    transparent_crc(p_804->g_88, "p_804->g_88", print_hash_value);
    transparent_crc(p_804->g_99, "p_804->g_99", print_hash_value);
    transparent_crc(p_804->g_103.s0, "p_804->g_103.s0", print_hash_value);
    transparent_crc(p_804->g_103.s1, "p_804->g_103.s1", print_hash_value);
    transparent_crc(p_804->g_103.s2, "p_804->g_103.s2", print_hash_value);
    transparent_crc(p_804->g_103.s3, "p_804->g_103.s3", print_hash_value);
    transparent_crc(p_804->g_103.s4, "p_804->g_103.s4", print_hash_value);
    transparent_crc(p_804->g_103.s5, "p_804->g_103.s5", print_hash_value);
    transparent_crc(p_804->g_103.s6, "p_804->g_103.s6", print_hash_value);
    transparent_crc(p_804->g_103.s7, "p_804->g_103.s7", print_hash_value);
    transparent_crc(p_804->g_103.s8, "p_804->g_103.s8", print_hash_value);
    transparent_crc(p_804->g_103.s9, "p_804->g_103.s9", print_hash_value);
    transparent_crc(p_804->g_103.sa, "p_804->g_103.sa", print_hash_value);
    transparent_crc(p_804->g_103.sb, "p_804->g_103.sb", print_hash_value);
    transparent_crc(p_804->g_103.sc, "p_804->g_103.sc", print_hash_value);
    transparent_crc(p_804->g_103.sd, "p_804->g_103.sd", print_hash_value);
    transparent_crc(p_804->g_103.se, "p_804->g_103.se", print_hash_value);
    transparent_crc(p_804->g_103.sf, "p_804->g_103.sf", print_hash_value);
    transparent_crc(p_804->g_117, "p_804->g_117", print_hash_value);
    transparent_crc(p_804->g_122, "p_804->g_122", print_hash_value);
    transparent_crc(p_804->g_143.s0, "p_804->g_143.s0", print_hash_value);
    transparent_crc(p_804->g_143.s1, "p_804->g_143.s1", print_hash_value);
    transparent_crc(p_804->g_143.s2, "p_804->g_143.s2", print_hash_value);
    transparent_crc(p_804->g_143.s3, "p_804->g_143.s3", print_hash_value);
    transparent_crc(p_804->g_143.s4, "p_804->g_143.s4", print_hash_value);
    transparent_crc(p_804->g_143.s5, "p_804->g_143.s5", print_hash_value);
    transparent_crc(p_804->g_143.s6, "p_804->g_143.s6", print_hash_value);
    transparent_crc(p_804->g_143.s7, "p_804->g_143.s7", print_hash_value);
    transparent_crc(p_804->g_156, "p_804->g_156", print_hash_value);
    transparent_crc(p_804->g_168.x, "p_804->g_168.x", print_hash_value);
    transparent_crc(p_804->g_168.y, "p_804->g_168.y", print_hash_value);
    transparent_crc(p_804->g_168.z, "p_804->g_168.z", print_hash_value);
    transparent_crc(p_804->g_168.w, "p_804->g_168.w", print_hash_value);
    transparent_crc(p_804->g_170.x, "p_804->g_170.x", print_hash_value);
    transparent_crc(p_804->g_170.y, "p_804->g_170.y", print_hash_value);
    transparent_crc(p_804->g_173.s0, "p_804->g_173.s0", print_hash_value);
    transparent_crc(p_804->g_173.s1, "p_804->g_173.s1", print_hash_value);
    transparent_crc(p_804->g_173.s2, "p_804->g_173.s2", print_hash_value);
    transparent_crc(p_804->g_173.s3, "p_804->g_173.s3", print_hash_value);
    transparent_crc(p_804->g_173.s4, "p_804->g_173.s4", print_hash_value);
    transparent_crc(p_804->g_173.s5, "p_804->g_173.s5", print_hash_value);
    transparent_crc(p_804->g_173.s6, "p_804->g_173.s6", print_hash_value);
    transparent_crc(p_804->g_173.s7, "p_804->g_173.s7", print_hash_value);
    transparent_crc(p_804->g_173.s8, "p_804->g_173.s8", print_hash_value);
    transparent_crc(p_804->g_173.s9, "p_804->g_173.s9", print_hash_value);
    transparent_crc(p_804->g_173.sa, "p_804->g_173.sa", print_hash_value);
    transparent_crc(p_804->g_173.sb, "p_804->g_173.sb", print_hash_value);
    transparent_crc(p_804->g_173.sc, "p_804->g_173.sc", print_hash_value);
    transparent_crc(p_804->g_173.sd, "p_804->g_173.sd", print_hash_value);
    transparent_crc(p_804->g_173.se, "p_804->g_173.se", print_hash_value);
    transparent_crc(p_804->g_173.sf, "p_804->g_173.sf", print_hash_value);
    transparent_crc(p_804->g_174.s0, "p_804->g_174.s0", print_hash_value);
    transparent_crc(p_804->g_174.s1, "p_804->g_174.s1", print_hash_value);
    transparent_crc(p_804->g_174.s2, "p_804->g_174.s2", print_hash_value);
    transparent_crc(p_804->g_174.s3, "p_804->g_174.s3", print_hash_value);
    transparent_crc(p_804->g_174.s4, "p_804->g_174.s4", print_hash_value);
    transparent_crc(p_804->g_174.s5, "p_804->g_174.s5", print_hash_value);
    transparent_crc(p_804->g_174.s6, "p_804->g_174.s6", print_hash_value);
    transparent_crc(p_804->g_174.s7, "p_804->g_174.s7", print_hash_value);
    transparent_crc(p_804->g_174.s8, "p_804->g_174.s8", print_hash_value);
    transparent_crc(p_804->g_174.s9, "p_804->g_174.s9", print_hash_value);
    transparent_crc(p_804->g_174.sa, "p_804->g_174.sa", print_hash_value);
    transparent_crc(p_804->g_174.sb, "p_804->g_174.sb", print_hash_value);
    transparent_crc(p_804->g_174.sc, "p_804->g_174.sc", print_hash_value);
    transparent_crc(p_804->g_174.sd, "p_804->g_174.sd", print_hash_value);
    transparent_crc(p_804->g_174.se, "p_804->g_174.se", print_hash_value);
    transparent_crc(p_804->g_174.sf, "p_804->g_174.sf", print_hash_value);
    transparent_crc(p_804->g_226.x, "p_804->g_226.x", print_hash_value);
    transparent_crc(p_804->g_226.y, "p_804->g_226.y", print_hash_value);
    transparent_crc(p_804->g_240.x, "p_804->g_240.x", print_hash_value);
    transparent_crc(p_804->g_240.y, "p_804->g_240.y", print_hash_value);
    transparent_crc(p_804->g_240.z, "p_804->g_240.z", print_hash_value);
    transparent_crc(p_804->g_240.w, "p_804->g_240.w", print_hash_value);
    transparent_crc(p_804->g_261.s0, "p_804->g_261.s0", print_hash_value);
    transparent_crc(p_804->g_261.s1, "p_804->g_261.s1", print_hash_value);
    transparent_crc(p_804->g_261.s2, "p_804->g_261.s2", print_hash_value);
    transparent_crc(p_804->g_261.s3, "p_804->g_261.s3", print_hash_value);
    transparent_crc(p_804->g_261.s4, "p_804->g_261.s4", print_hash_value);
    transparent_crc(p_804->g_261.s5, "p_804->g_261.s5", print_hash_value);
    transparent_crc(p_804->g_261.s6, "p_804->g_261.s6", print_hash_value);
    transparent_crc(p_804->g_261.s7, "p_804->g_261.s7", print_hash_value);
    transparent_crc(p_804->g_262.s0, "p_804->g_262.s0", print_hash_value);
    transparent_crc(p_804->g_262.s1, "p_804->g_262.s1", print_hash_value);
    transparent_crc(p_804->g_262.s2, "p_804->g_262.s2", print_hash_value);
    transparent_crc(p_804->g_262.s3, "p_804->g_262.s3", print_hash_value);
    transparent_crc(p_804->g_262.s4, "p_804->g_262.s4", print_hash_value);
    transparent_crc(p_804->g_262.s5, "p_804->g_262.s5", print_hash_value);
    transparent_crc(p_804->g_262.s6, "p_804->g_262.s6", print_hash_value);
    transparent_crc(p_804->g_262.s7, "p_804->g_262.s7", print_hash_value);
    transparent_crc(p_804->g_335.x, "p_804->g_335.x", print_hash_value);
    transparent_crc(p_804->g_335.y, "p_804->g_335.y", print_hash_value);
    transparent_crc(p_804->g_335.z, "p_804->g_335.z", print_hash_value);
    transparent_crc(p_804->g_335.w, "p_804->g_335.w", print_hash_value);
    transparent_crc(p_804->g_336.x, "p_804->g_336.x", print_hash_value);
    transparent_crc(p_804->g_336.y, "p_804->g_336.y", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_804->g_386[i][j], "p_804->g_386[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_804->g_400, "p_804->g_400", print_hash_value);
    transparent_crc(p_804->g_413.x, "p_804->g_413.x", print_hash_value);
    transparent_crc(p_804->g_413.y, "p_804->g_413.y", print_hash_value);
    transparent_crc(p_804->g_413.z, "p_804->g_413.z", print_hash_value);
    transparent_crc(p_804->g_413.w, "p_804->g_413.w", print_hash_value);
    transparent_crc(p_804->g_416.x, "p_804->g_416.x", print_hash_value);
    transparent_crc(p_804->g_416.y, "p_804->g_416.y", print_hash_value);
    transparent_crc(p_804->g_416.z, "p_804->g_416.z", print_hash_value);
    transparent_crc(p_804->g_416.w, "p_804->g_416.w", print_hash_value);
    transparent_crc(p_804->g_417.s0, "p_804->g_417.s0", print_hash_value);
    transparent_crc(p_804->g_417.s1, "p_804->g_417.s1", print_hash_value);
    transparent_crc(p_804->g_417.s2, "p_804->g_417.s2", print_hash_value);
    transparent_crc(p_804->g_417.s3, "p_804->g_417.s3", print_hash_value);
    transparent_crc(p_804->g_417.s4, "p_804->g_417.s4", print_hash_value);
    transparent_crc(p_804->g_417.s5, "p_804->g_417.s5", print_hash_value);
    transparent_crc(p_804->g_417.s6, "p_804->g_417.s6", print_hash_value);
    transparent_crc(p_804->g_417.s7, "p_804->g_417.s7", print_hash_value);
    transparent_crc(p_804->g_451, "p_804->g_451", print_hash_value);
    transparent_crc(p_804->g_495, "p_804->g_495", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_804->g_496[i], "p_804->g_496[i]", print_hash_value);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_804->g_504[i], "p_804->g_504[i]", print_hash_value);

    }
    transparent_crc(p_804->g_525, "p_804->g_525", print_hash_value);
    transparent_crc(p_804->g_540, "p_804->g_540", print_hash_value);
    transparent_crc(p_804->g_687.s0, "p_804->g_687.s0", print_hash_value);
    transparent_crc(p_804->g_687.s1, "p_804->g_687.s1", print_hash_value);
    transparent_crc(p_804->g_687.s2, "p_804->g_687.s2", print_hash_value);
    transparent_crc(p_804->g_687.s3, "p_804->g_687.s3", print_hash_value);
    transparent_crc(p_804->g_687.s4, "p_804->g_687.s4", print_hash_value);
    transparent_crc(p_804->g_687.s5, "p_804->g_687.s5", print_hash_value);
    transparent_crc(p_804->g_687.s6, "p_804->g_687.s6", print_hash_value);
    transparent_crc(p_804->g_687.s7, "p_804->g_687.s7", print_hash_value);
    transparent_crc(p_804->g_703.x, "p_804->g_703.x", print_hash_value);
    transparent_crc(p_804->g_703.y, "p_804->g_703.y", print_hash_value);
    transparent_crc(p_804->g_703.z, "p_804->g_703.z", print_hash_value);
    transparent_crc(p_804->g_703.w, "p_804->g_703.w", print_hash_value);
    transparent_crc(p_804->g_726, "p_804->g_726", print_hash_value);
    transparent_crc(p_804->g_769.x, "p_804->g_769.x", print_hash_value);
    transparent_crc(p_804->g_769.y, "p_804->g_769.y", print_hash_value);
    transparent_crc(p_804->g_770.s0, "p_804->g_770.s0", print_hash_value);
    transparent_crc(p_804->g_770.s1, "p_804->g_770.s1", print_hash_value);
    transparent_crc(p_804->g_770.s2, "p_804->g_770.s2", print_hash_value);
    transparent_crc(p_804->g_770.s3, "p_804->g_770.s3", print_hash_value);
    transparent_crc(p_804->g_770.s4, "p_804->g_770.s4", print_hash_value);
    transparent_crc(p_804->g_770.s5, "p_804->g_770.s5", print_hash_value);
    transparent_crc(p_804->g_770.s6, "p_804->g_770.s6", print_hash_value);
    transparent_crc(p_804->g_770.s7, "p_804->g_770.s7", print_hash_value);
    transparent_crc(p_804->g_770.s8, "p_804->g_770.s8", print_hash_value);
    transparent_crc(p_804->g_770.s9, "p_804->g_770.s9", print_hash_value);
    transparent_crc(p_804->g_770.sa, "p_804->g_770.sa", print_hash_value);
    transparent_crc(p_804->g_770.sb, "p_804->g_770.sb", print_hash_value);
    transparent_crc(p_804->g_770.sc, "p_804->g_770.sc", print_hash_value);
    transparent_crc(p_804->g_770.sd, "p_804->g_770.sd", print_hash_value);
    transparent_crc(p_804->g_770.se, "p_804->g_770.se", print_hash_value);
    transparent_crc(p_804->g_770.sf, "p_804->g_770.sf", print_hash_value);
    transparent_crc(p_804->g_771.x, "p_804->g_771.x", print_hash_value);
    transparent_crc(p_804->g_771.y, "p_804->g_771.y", print_hash_value);
    transparent_crc(p_804->g_771.z, "p_804->g_771.z", print_hash_value);
    transparent_crc(p_804->g_771.w, "p_804->g_771.w", print_hash_value);
    transparent_crc(p_804->g_779.x, "p_804->g_779.x", print_hash_value);
    transparent_crc(p_804->g_779.y, "p_804->g_779.y", print_hash_value);
    transparent_crc(p_804->g_796.f0, "p_804->g_796.f0", print_hash_value);
    transparent_crc(p_804->v_collective, "p_804->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 38; i++)
            transparent_crc(p_804->g_special_values[i + 38 * get_linear_group_id()], "p_804->g_special_values[i + 38 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 38; i++)
            transparent_crc(p_804->l_special_values[i], "p_804->l_special_values[i]", print_hash_value);
    transparent_crc(p_804->l_comm_values[get_linear_local_id()], "p_804->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_804->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()], "p_804->g_comm_values[get_linear_group_id() * 6 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
