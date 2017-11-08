// --atomics 57 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 26,31,3 -l 2,1,1
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

__constant uint32_t permutations[10][2] = {
{1,0}, // permutation 0
{1,0}, // permutation 1
{1,0}, // permutation 2
{1,0}, // permutation 3
{1,0}, // permutation 4
{1,0}, // permutation 5
{1,0}, // permutation 6
{1,0}, // permutation 7
{1,0}, // permutation 8
{1,0} // permutation 9
};

// Seed: 2580227267

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint32_t  f0;
   uint32_t  f1;
   int64_t  f2;
   int64_t  f3;
};

struct S1 {
    int32_t g_3;
    int32_t g_12;
    volatile int64_t g_13;
    volatile int16_t g_14;
    volatile int8_t g_15;
    int64_t g_16;
    volatile uint16_t g_17;
    uint16_t g_24;
    volatile int32_t g_66;
    volatile int32_t g_67[7][2][10];
    int64_t g_69;
    int16_t g_77;
    uint64_t g_120;
    uint16_t g_121;
    int32_t g_157;
    int32_t g_174;
    uint16_t g_205;
    volatile union U0 g_208;
    VECTOR(int8_t, 2) g_218;
    uint8_t g_239;
    int8_t *g_252;
    int8_t ** volatile g_251;
    int8_t ** volatile * volatile g_253;
    volatile VECTOR(uint16_t, 4) g_268;
    int64_t *g_269;
    int64_t g_272;
    int64_t *g_273;
    uint32_t g_356;
    int32_t g_360[3];
    volatile VECTOR(int32_t, 4) g_363;
    int32_t *g_371;
    int32_t **g_370[1][2][8];
    uint32_t *g_378;
    uint32_t * volatile *g_377;
    uint32_t * volatile ** volatile g_380;
    uint32_t g_404;
    int8_t g_416;
    int32_t ** volatile g_425;
    VECTOR(uint8_t, 4) g_441;
    VECTOR(uint8_t, 8) g_442;
    VECTOR(uint8_t, 16) g_443;
    VECTOR(uint8_t, 8) g_446;
    volatile uint16_t g_476;
    int64_t g_479;
    int32_t ** volatile g_486;
    int32_t ** volatile g_488;
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
    __global volatile uint32_t *g_atomic_input;
    __global volatile uint32_t *g_special_values;
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S1 * p_498);
int32_t  func_34(int32_t  p_35, int64_t  p_36, int32_t * p_37, int32_t * p_38, uint8_t  p_39, struct S1 * p_498);
int64_t  func_42(uint16_t * p_43, uint16_t * p_44, int32_t  p_45, uint16_t * p_46, int32_t * p_47, struct S1 * p_498);
uint16_t * func_48(int8_t  p_49, struct S1 * p_498);
int32_t  func_52(uint64_t  p_53, uint64_t  p_54, struct S1 * p_498);
uint64_t  func_55(int64_t  p_56, struct S1 * p_498);
uint32_t  func_108(int32_t  p_109, uint16_t * p_110, int64_t  p_111, int32_t  p_112, uint16_t * p_113, struct S1 * p_498);
int64_t  func_126(int32_t ** p_127, uint16_t  p_128, int32_t  p_129, int32_t * p_130, struct S1 * p_498);
int32_t ** func_131(uint16_t * p_132, uint64_t  p_133, int32_t * p_134, int32_t * p_135, struct S1 * p_498);
uint16_t * func_136(uint8_t  p_137, int32_t  p_138, int16_t  p_139, int32_t  p_140, int32_t  p_141, struct S1 * p_498);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_498->g_17 p_498->g_24 p_498->g_12 p_498->g_486 p_498->g_425 p_498->g_371 p_498->g_488 p_498->g_3
 * writes: p_498->g_17 p_498->g_24 p_498->g_12 p_498->g_69 p_498->g_371 p_498->g_3
 */
uint32_t  func_1(struct S1 * p_498)
{ /* block id: 4 */
    int32_t *l_2 = &p_498->g_3;
    int32_t *l_4 = &p_498->g_3;
    int32_t l_5[6][6] = {{0x37928FBCL,(-1L),0x37928FBCL,0x37928FBCL,(-1L),0x37928FBCL},{0x37928FBCL,(-1L),0x37928FBCL,0x37928FBCL,(-1L),0x37928FBCL},{0x37928FBCL,(-1L),0x37928FBCL,0x37928FBCL,(-1L),0x37928FBCL},{0x37928FBCL,(-1L),0x37928FBCL,0x37928FBCL,(-1L),0x37928FBCL},{0x37928FBCL,(-1L),0x37928FBCL,0x37928FBCL,(-1L),0x37928FBCL},{0x37928FBCL,(-1L),0x37928FBCL,0x37928FBCL,(-1L),0x37928FBCL}};
    int32_t *l_6 = &p_498->g_3;
    int32_t *l_7 = &l_5[0][0];
    int32_t *l_8 = (void*)0;
    int32_t *l_9 = (void*)0;
    int32_t *l_10 = &p_498->g_3;
    int32_t *l_11[8] = {&l_5[4][2],&l_5[4][2],&l_5[4][2],&l_5[4][2],&l_5[4][2],&l_5[4][2],&l_5[4][2],&l_5[4][2]};
    VECTOR(int16_t, 8) l_22 = (VECTOR(int16_t, 8))((-2L), (VECTOR(int16_t, 4))((-2L), (VECTOR(int16_t, 2))((-2L), (-10L)), (-10L)), (-10L), (-2L), (-10L));
    uint16_t *l_23 = &p_498->g_24;
    VECTOR(int32_t, 2) l_31 = (VECTOR(int32_t, 2))(0x54E02302L, 0x13297949L);
    VECTOR(uint8_t, 2) l_445 = (VECTOR(uint8_t, 2))(0xE1L, 0xC2L);
    int32_t l_497 = 0x3A720758L;
    int i, j;
    --p_498->g_17;
    (*l_7) = (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_22.s4206242377163765)))).s9, ((*l_23)--)));
    for (p_498->g_12 = 3; (p_498->g_12 >= 22); ++p_498->g_12)
    { /* block id: 10 */
        uint16_t l_29 = 0xC6DAL;
        VECTOR(int32_t, 8) l_30 = (VECTOR(int32_t, 8))(0x54C01E07L, (VECTOR(int32_t, 4))(0x54C01E07L, (VECTOR(int32_t, 2))(0x54C01E07L, (-4L)), (-4L)), (-4L), 0x54C01E07L, (-4L));
        VECTOR(uint8_t, 2) l_444 = (VECTOR(uint8_t, 2))(1UL, 0x64L);
        int64_t *l_478 = &p_498->g_479;
        int32_t *l_480[9][6][4] = {{{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12}},{{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12}},{{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12}},{{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12}},{{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12}},{{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12}},{{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12}},{{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12}},{{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12},{&p_498->g_12,&p_498->g_12,&p_498->g_12,&p_498->g_12}}};
        int i, j, k;
        if (((VECTOR(int32_t, 16))(l_29, 3L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_30.s52)), (-1L), (-1L))).y, 0x03019C36L, ((VECTOR(int32_t, 2))(0x3D5D5181L, 0x0718302CL)), ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(l_31.xxxxxxyyyyxyxyyx)).lo, ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(0x1768L, 0x78A4L)).yyyxxyxyxyyxyyyx, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(safe_clamp_func(VECTOR(uint16_t, 8),uint16_t,((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0xA324L, 0x9FFFL)), 0UL, 0x2129L)).hi))))).yxxx)).xywyyxwx, (uint16_t)(safe_add_func_uint32_t_u_u(1UL, func_34((safe_lshift_func_uint16_t_u_u(l_30.s2, 8)), ((*l_478) |= func_42(func_48(p_498->g_15, p_498), &l_29, p_498->g_218.y, (((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(p_498->g_441.zw)))).xyyy, ((VECTOR(uint8_t, 8))(sub_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(p_498->g_218.x, ((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 8))(247UL, 0x7BL, ((VECTOR(uint8_t, 2))(p_498->g_442.s74)), 0UL, ((VECTOR(uint8_t, 16))(abs_diff(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(p_498->g_443.s4e)).yxyxyyxxyxxyyyxx)).even, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(mad_hi(((VECTOR(uint8_t, 2))(255UL, 0x66L)).yxxyxxyy, ((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 2))(0xC1L, 0xBDL)).xyxyxyxyyyxxxxyx, ((VECTOR(uint8_t, 8))(l_444.xxxyyxyy)).s2670547200434504))).lo, ((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(1UL, 0x13L)).xyyxyyxxxxxyxyxy)).odd)))))).s01)).yxxyyxyy))).s5557402174663640, ((VECTOR(uint8_t, 2))(l_445.yy)).xxxxyxxxyxyxyxxy))).s1, 6UL, 255UL)).s37, ((VECTOR(uint8_t, 4))(p_498->g_446.s5121)).even))), 0xC5L)), ((!(l_29 || p_498->g_446.s1)) > p_498->g_443.s1), 0x19L, 0xACL, ((VECTOR(uint8_t, 2))(0x5DL)), 0x2EL, p_498->g_218.y, 0x86L, ((VECTOR(uint8_t, 2))(0UL)), 0x02L, 1UL)).lo, ((VECTOR(uint8_t, 8))(1UL))))).hi))).lo, ((VECTOR(uint8_t, 2))(0xF1L)))))))), p_498->g_218.y, 0xEFEBL, FAKE_DIVERGE(p_498->local_0_offset, get_local_id(0), 10), 65529UL, 65530UL, 6UL)).s2, 0x4373L)) && p_498->g_441.z) , (void*)0), &l_5[4][0], p_498)), l_11[1], l_480[8][4][0], p_498->g_441.x, p_498))), (uint16_t)p_498->g_443.sf))))).s0150164130713651, ((VECTOR(uint16_t, 16))(65527UL)))))))))), (int32_t)0x12B63C59L))).s9e, ((VECTOR(int32_t, 2))(0x2070B5AFL))))).xxyy, (int32_t)(*l_10)))))), ((VECTOR(int32_t, 4))(0L))))).xwyyzwwz))).even, (int32_t)(*p_498->g_371)))), 2L, 0x23237DB2L, ((VECTOR(int32_t, 4))(1L)))).sd)
        { /* block id: 199 */
            int32_t **l_489 = &l_11[1];
            for (p_498->g_69 = (-28); (p_498->g_69 == 6); ++p_498->g_69)
            { /* block id: 202 */
                int32_t l_487 = (-1L);
                (*p_498->g_486) = &l_5[2][0];
                if (l_487)
                    break;
            }
            (*p_498->g_488) = (*p_498->g_425);
            (*l_6) = (((VECTOR(uint16_t, 4))(65535UL, 65533UL, 0xA29FL, 65528UL)).y && ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(4UL, 1UL)).xxxx)).z);
            (*l_489) = (*p_498->g_486);
        }
        else
        { /* block id: 209 */
            int32_t **l_495 = (void*)0;
            int32_t **l_496 = &l_4;
            for (p_498->g_69 = (-8); (p_498->g_69 > 15); ++p_498->g_69)
            { /* block id: 212 */
                uint32_t l_492[4][1][7] = {{{1UL,0x1E79E121L,0x1E79E121L,1UL,1UL,0x1E79E121L,0x1E79E121L}},{{1UL,0x1E79E121L,0x1E79E121L,1UL,1UL,0x1E79E121L,0x1E79E121L}},{{1UL,0x1E79E121L,0x1E79E121L,1UL,1UL,0x1E79E121L,0x1E79E121L}},{{1UL,0x1E79E121L,0x1E79E121L,1UL,1UL,0x1E79E121L,0x1E79E121L}}};
                int i, j, k;
                (*p_498->g_488) = (*p_498->g_486);
                l_492[2][0][1]--;
            }
            if ((**p_498->g_486))
                break;
            (*l_496) = (void*)0;
        }
    }
    (*p_498->g_486) = &l_5[4][2];
    return l_497;
}


/* ------------------------------------------ */
/* 
 * reads : p_498->g_425
 * writes: p_498->g_371
 */
int32_t  func_34(int32_t  p_35, int64_t  p_36, int32_t * p_37, int32_t * p_38, uint8_t  p_39, struct S1 * p_498)
{ /* block id: 195 */
    VECTOR(int32_t, 4) l_481 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x157FC927L), 0x157FC927L);
    VECTOR(int32_t, 16) l_482 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x629B8080L), 0x629B8080L), 0x629B8080L, 1L, 0x629B8080L, (VECTOR(int32_t, 2))(1L, 0x629B8080L), (VECTOR(int32_t, 2))(1L, 0x629B8080L), 1L, 0x629B8080L, 1L, 0x629B8080L);
    VECTOR(int32_t, 4) l_483 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x7F21E9F1L), 0x7F21E9F1L);
    int i;
    (*p_37) |= ((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x03A9E6C9L, 1L)))).yyyy)).xwzyyyxy, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_481.xwyxzxyxwyyxzxxx)).even)), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))(l_482.s43b3)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_483.zxxy)).hi)))).xxxx))).yzwwwyyx))).s2;
    (*p_498->g_425) = p_37;
    return l_481.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_498->g_16 p_498->g_360 p_498->g_442 p_498->g_24 p_498->g_476 p_498->g_404 p_498->g_371 p_498->g_3
 * writes: p_498->g_16 p_498->g_3
 */
int64_t  func_42(uint16_t * p_43, uint16_t * p_44, int32_t  p_45, uint16_t * p_46, int32_t * p_47, struct S1 * p_498)
{ /* block id: 184 */
    uint32_t l_449 = 0x6BEF97E6L;
    uint64_t l_458 = 18446744073709551611UL;
    VECTOR(int8_t, 4) l_462 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x36L), 0x36L);
    uint64_t l_463[3][5];
    int16_t *l_475 = &p_498->g_77;
    uint64_t *l_477 = &l_458;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            l_463[i][j] = 0xE19501758127078DL;
    }
    for (p_498->g_16 = (-28); (p_498->g_16 <= (-18)); ++p_498->g_16)
    { /* block id: 187 */
        return p_498->g_360[0];
    }
    (*p_498->g_371) &= ((*p_44) == ((l_449 , (safe_mul_func_uint16_t_u_u(((((*l_477) = (safe_lshift_func_int8_t_s_u(((safe_div_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((((VECTOR(uint8_t, 16))(safe_clamp_func(VECTOR(uint8_t, 16),uint8_t,((VECTOR(uint8_t, 4))((l_458 <= ((safe_unary_minus_func_int8_t_s(((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_462.xzyx)), (l_463[1][0] , (safe_rshift_func_uint16_t_u_s((*p_44), 14))), ((safe_rshift_func_int8_t_s_s(((GROUP_DIVERGE(2, 1) , p_498->g_442.s7) || ((((*p_47) = (safe_div_func_int16_t_s_s((safe_unary_minus_func_int64_t_s(0x2C4EA1641A0010D4L)), (l_463[1][0] && (safe_add_func_int16_t_s_s((p_44 == l_475), p_498->g_24)))))) == l_462.w) == 251UL)), 7)) , l_458), 0L, 3L)), 0x61L, ((VECTOR(int8_t, 2))(0L)), (-1L), p_498->g_476, (-4L), (-1L), 0x5AL)).se, l_462.z)) , l_449))) || l_463[1][0])), 0x5CL, 3UL, 0x34L)).xxwwwyxzwzyxwwyx, (uint8_t)GROUP_DIVERGE(1, 1), (uint8_t)p_498->g_404))).sf >= p_498->g_360[0]), p_45)) && l_458), p_45)) ^ l_449), 7))) ^ l_462.x) >= l_463[0][3]), FAKE_DIVERGE(p_498->local_2_offset, get_local_id(2), 10)))) , p_45));
    return p_498->g_404;
}


/* ------------------------------------------ */
/* 
 * reads : p_498->g_12 p_498->g_24 p_498->g_3 p_498->g_66 p_498->g_comm_values p_498->g_77 p_498->g_16 p_498->g_69 p_498->g_120 p_498->g_121 p_498->g_157 p_498->g_67 p_498->g_174 p_498->g_17 p_498->g_205 p_498->g_239 p_498->g_251 p_498->g_253 p_498->g_252 p_498->g_208 p_498->g_208.f0 p_498->g_268 p_498->l_comm_values p_498->g_218 p_498->g_356 p_498->g_360 p_498->g_363 p_498->g_370 p_498->g_377 p_498->g_380 p_498->g_378 p_498->g_14 p_498->g_371 p_498->g_13
 * writes: p_498->g_24 p_498->g_3 p_498->g_120 p_498->g_121 p_498->g_77 p_498->g_69 p_498->g_157 p_498->g_174 p_498->g_16 p_498->g_205 p_498->g_239 p_498->g_67 p_498->g_251 p_498->g_360 p_498->g_377 p_498->g_356 p_498->g_404 p_498->l_comm_values p_498->g_416
 */
uint16_t * func_48(int8_t  p_49, struct S1 * p_498)
{ /* block id: 11 */
    int32_t *l_51 = &p_498->g_12;
    int32_t **l_50 = &l_51;
    int32_t l_426 = 0x4FD10662L;
    int32_t l_428 = 0x62F98375L;
    int32_t l_429 = 6L;
    int32_t l_430 = 0x1665E3F8L;
    int32_t l_431 = 0L;
    int32_t l_432 = 0x25FE94A9L;
    int32_t l_433 = 0x2687AD1AL;
    uint32_t l_435 = 3UL;
    uint16_t *l_438[9];
    int i;
    for (i = 0; i < 9; i++)
        l_438[i] = &p_498->g_205;
    (*l_50) = &p_498->g_12;
    (*p_498->g_371) = func_52(func_55((*l_51), p_498), (*l_51), p_498);
    for (p_498->g_77 = 1; (p_498->g_77 > (-9)); p_498->g_77--)
    { /* block id: 169 */
        int32_t *l_421 = &p_498->g_12;
        int32_t l_427 = 0x16F8255EL;
        int32_t l_434 = 9L;
        (1 + 1);
    }
    return l_438[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_498->g_371 p_498->g_3
 * writes: p_498->g_416 p_498->g_3
 */
int32_t  func_52(uint64_t  p_53, uint64_t  p_54, struct S1 * p_498)
{ /* block id: 162 */
    int32_t l_415 = 0x456DB661L;
    (*p_498->g_371) ^= (safe_div_func_int8_t_s_s(l_415, (p_498->g_416 = 0x48L)));
    return (*p_498->g_371);
}


/* ------------------------------------------ */
/* 
 * reads : p_498->g_24 p_498->g_3 p_498->g_66 p_498->g_comm_values p_498->g_77 p_498->g_16 p_498->g_69 p_498->g_12 p_498->g_120 p_498->g_121 p_498->g_157 p_498->g_67 p_498->g_174 p_498->g_17 p_498->g_205 p_498->g_239 p_498->g_251 p_498->g_253 p_498->g_252 p_498->g_208 p_498->g_208.f0 p_498->g_268 p_498->l_comm_values p_498->g_218 p_498->g_356 p_498->g_360 p_498->g_363 p_498->g_370 p_498->g_377 p_498->g_380 p_498->g_378 p_498->g_14 p_498->g_371 p_498->g_13
 * writes: p_498->g_24 p_498->g_3 p_498->g_120 p_498->g_121 p_498->g_77 p_498->g_69 p_498->g_157 p_498->g_174 p_498->g_16 p_498->g_205 p_498->g_239 p_498->g_67 p_498->g_251 p_498->g_360 p_498->g_377 p_498->g_356 p_498->g_404 p_498->l_comm_values
 */
uint64_t  func_55(int64_t  p_56, struct S1 * p_498)
{ /* block id: 13 */
    int32_t *l_57 = (void*)0;
    int32_t *l_58 = &p_498->g_3;
    int32_t *l_59 = &p_498->g_3;
    int32_t *l_60 = &p_498->g_3;
    int32_t *l_61 = &p_498->g_3;
    int32_t *l_62 = &p_498->g_3;
    int32_t *l_63 = &p_498->g_3;
    int32_t *l_64 = &p_498->g_3;
    int32_t *l_65[5];
    int16_t l_68 = 6L;
    uint8_t l_70[5][7][1];
    uint8_t l_78 = 0UL;
    VECTOR(int32_t, 4) l_99 = (VECTOR(int32_t, 4))(0x0EC93635L, (VECTOR(int32_t, 2))(0x0EC93635L, 0L), 0L);
    uint16_t *l_117 = &p_498->g_24;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_65[i] = &p_498->g_3;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
                l_70[i][j][k] = 0xFBL;
        }
    }
    --l_70[4][3][0];
    for (p_498->g_24 = (-25); (p_498->g_24 >= 36); p_498->g_24++)
    { /* block id: 17 */
        uint16_t *l_75 = &p_498->g_24;
        VECTOR(int32_t, 4) l_76 = (VECTOR(int32_t, 4))(0x6C73D51CL, (VECTOR(int32_t, 2))(0x6C73D51CL, 0x1B51B9DCL), 0x1B51B9DCL);
        int i;
        (*l_63) |= (l_75 != (void*)0);
        l_78--;
    }
    for (p_498->g_3 = (-21); (p_498->g_3 == (-10)); p_498->g_3 = safe_add_func_uint32_t_u_u(p_498->g_3, 3))
    { /* block id: 23 */
        uint16_t *l_114 = &p_498->g_24;
        int32_t l_119 = (-9L);
        VECTOR(int16_t, 16) l_154 = (VECTOR(int16_t, 16))(0x6103L, (VECTOR(int16_t, 4))(0x6103L, (VECTOR(int16_t, 2))(0x6103L, 0x344CL), 0x344CL), 0x344CL, 0x6103L, 0x344CL, (VECTOR(int16_t, 2))(0x6103L, 0x344CL), (VECTOR(int16_t, 2))(0x6103L, 0x344CL), 0x6103L, 0x344CL, 0x6103L, 0x344CL);
        VECTOR(int8_t, 4) l_155 = (VECTOR(int8_t, 4))(0x19L, (VECTOR(int8_t, 2))(0x19L, 0x2BL), 0x2BL);
        int32_t l_408 = 0x07424775L;
        VECTOR(int32_t, 8) l_412 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-2L)), (-2L)), (-2L), 1L, (-2L));
        int i;
        p_498->g_121 ^= (((((safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((p_498->g_120 &= (((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s((GROUP_DIVERGE(1, 1) ^ (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((*l_59) | ((*l_62) , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_99.yywy)), ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(6L, (safe_div_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(((0x65L == 1L) <= (p_498->g_24 = (func_108(p_498->g_66, l_114, ((safe_mod_func_uint32_t_u_u(p_498->g_comm_values[p_498->tid], p_56)) , p_498->g_77), p_56, l_117, p_498) > p_498->g_77))), p_498->g_3)), l_119)) , 252UL), p_56)), 0x74C9L)), 0x7CA8E68CL, 0x01854AE3L)))), (int32_t)7L))), ((VECTOR(int32_t, 4))(1L)), (-1L), (*l_64), 0L, 0x427DDD56L)).s7)), p_56)), (-5L))), p_498->g_16))), 10)) || 0x350AEA43L), p_498->g_69)) | p_498->g_12) , l_119)), 0xCD85L)), (-1L))), 1L)) & 0L) || p_56) | 0x01L) | p_498->g_3);
        for (l_68 = 10; (l_68 == (-1)); l_68--)
        { /* block id: 31 */
            int16_t *l_148 = &p_498->g_77;
            VECTOR(int16_t, 2) l_153 = (VECTOR(int16_t, 2))((-9L), 0x791BL);
            int32_t *l_318 = &p_498->g_12;
            int32_t **l_411 = &l_60;
            int i;
            for (p_56 = (-4); (p_56 > 26); ++p_56)
            { /* block id: 34 */
                if (p_56)
                    break;
            }
            l_408 &= (func_126(func_131(func_136((safe_rshift_func_int16_t_s_u(1L, 6)), (safe_rshift_func_int16_t_s_u(l_119, p_56)), ((safe_mod_func_uint16_t_u_u((((VECTOR(int16_t, 16))((-1L), ((*l_148) &= p_56), 0x549EL, ((VECTOR(int16_t, 2))((-1L), 1L)), (safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(p_56, p_56)), ((void*)0 != l_58))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(l_153.yyxxyyyxxyxxxyxy)).sec, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), 1L)), 0x7277L, 0x6D0DL)).hi))))))))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_154.s086913b2d3918d4d)).s521e)), 0x0CE7L, ((VECTOR(int16_t, 2))(9L, 0L)), 0x4C8DL)).sa < (((((VECTOR(int8_t, 2))(l_155.xx)).odd < p_498->g_121) & 0x23L) | p_56)), p_498->g_12)) != p_56), l_155.y, p_498->g_comm_values[p_498->tid], p_498), p_498->g_218.x, l_63, l_318, p_498), (*l_318), p_498->g_121, l_318, p_498) >= l_154.s8);
            if ((atomic_inc(&p_498->g_atomic_input[57 * get_linear_group_id() + 20]) == 9))
            { /* block id: 151 */
                VECTOR(int32_t, 2) l_409 = (VECTOR(int32_t, 2))(0x6EB9E782L, 0x298CA530L);
                uint32_t l_410[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_410[i] = 0UL;
                l_410[0] |= l_409.y;
                unsigned int result = 0;
                result += l_409.y;
                result += l_409.x;
                int l_410_i0;
                for (l_410_i0 = 0; l_410_i0 < 2; l_410_i0++) {
                    result += l_410[l_410_i0];
                }
                atomic_add(&p_498->g_special_values[57 * get_linear_group_id() + 20], result);
            }
            else
            { /* block id: 153 */
                (1 + 1);
            }
            (*l_411) = l_62;
        }
        if (p_56)
            break;
        l_412.s5 = ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(l_412.s17)), ((VECTOR(int32_t, 4))(1L, 0x6A88A9FBL, (-1L), 0x65C0BD17L)).lo))).hi;
    }
    return p_56;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t  func_108(int32_t  p_109, uint16_t * p_110, int64_t  p_111, int32_t  p_112, uint16_t * p_113, struct S1 * p_498)
{ /* block id: 24 */
    uint16_t l_118 = 0xF230L;
    return l_118;
}


/* ------------------------------------------ */
/* 
 * reads : p_498->g_377 p_498->g_380 p_498->g_378 p_498->g_14 p_498->g_218 p_498->g_371 p_498->g_3 p_498->g_12 p_498->g_174 p_498->l_comm_values p_498->g_120 p_498->g_157 p_498->g_239 p_498->g_360 p_498->g_13
 * writes: p_498->g_377 p_498->g_356 p_498->g_239 p_498->g_16 p_498->g_404 p_498->l_comm_values p_498->g_360
 */
int64_t  func_126(int32_t ** p_127, uint16_t  p_128, int32_t  p_129, int32_t * p_130, struct S1 * p_498)
{ /* block id: 134 */
    uint64_t *l_373[9] = {&p_498->g_120,&p_498->g_120,&p_498->g_120,&p_498->g_120,&p_498->g_120,&p_498->g_120,&p_498->g_120,&p_498->g_120,&p_498->g_120};
    uint64_t **l_372 = &l_373[6];
    uint64_t ***l_374 = &l_372;
    int32_t l_383[5][5] = {{(-1L),0x6A43AA11L,3L,1L,3L},{(-1L),0x6A43AA11L,3L,1L,3L},{(-1L),0x6A43AA11L,3L,1L,3L},{(-1L),0x6A43AA11L,3L,1L,3L},{(-1L),0x6A43AA11L,3L,1L,3L}};
    VECTOR(int32_t, 16) l_387 = (VECTOR(int32_t, 16))(0x4B3C5D2CL, (VECTOR(int32_t, 4))(0x4B3C5D2CL, (VECTOR(int32_t, 2))(0x4B3C5D2CL, 0x008C3F8BL), 0x008C3F8BL), 0x008C3F8BL, 0x4B3C5D2CL, 0x008C3F8BL, (VECTOR(int32_t, 2))(0x4B3C5D2CL, 0x008C3F8BL), (VECTOR(int32_t, 2))(0x4B3C5D2CL, 0x008C3F8BL), 0x4B3C5D2CL, 0x008C3F8BL, 0x4B3C5D2CL, 0x008C3F8BL);
    uint8_t *l_396 = &p_498->g_239;
    VECTOR(int64_t, 4) l_401 = (VECTOR(int64_t, 4))((-4L), (VECTOR(int64_t, 2))((-4L), 0L), 0L);
    int64_t *l_402 = &p_498->g_16;
    uint32_t *l_403 = &p_498->g_404;
    int8_t l_405[2];
    VECTOR(uint8_t, 2) l_406 = (VECTOR(uint8_t, 2))(0UL, 1UL);
    int32_t *l_407 = &p_498->g_360[2];
    int i, j;
    for (i = 0; i < 2; i++)
        l_405[i] = (-3L);
    (*l_374) = l_372;
    for (p_128 = 12; (p_128 <= 47); p_128 = safe_add_func_int8_t_s_s(p_128, 6))
    { /* block id: 138 */
        uint32_t * volatile **l_379 = (void*)0;
        int32_t *l_381 = &p_498->g_360[2];
        int32_t *l_382[4][9] = {{&p_498->g_360[1],&p_498->g_3,(void*)0,&p_498->g_157,(void*)0,&p_498->g_3,&p_498->g_360[1],(void*)0,&p_498->g_3},{&p_498->g_360[1],&p_498->g_3,(void*)0,&p_498->g_157,(void*)0,&p_498->g_3,&p_498->g_360[1],(void*)0,&p_498->g_3},{&p_498->g_360[1],&p_498->g_3,(void*)0,&p_498->g_157,(void*)0,&p_498->g_3,&p_498->g_360[1],(void*)0,&p_498->g_3},{&p_498->g_360[1],&p_498->g_3,(void*)0,&p_498->g_157,(void*)0,&p_498->g_3,&p_498->g_360[1],(void*)0,&p_498->g_3}};
        uint32_t l_384 = 0x27C0370DL;
        int i, j;
        (*p_498->g_380) = p_498->g_377;
        ++l_384;
    }
    (*l_407) ^= ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(l_387.sb254)).xxzyzxxw, (int32_t)(((((safe_sub_func_uint32_t_u_u(((**p_498->g_377) = (+p_128)), (((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(p_498->g_14, l_383[3][0])), (safe_rshift_func_int16_t_s_s((((~(l_383[2][2] <= ((*l_396) = (0x11L != p_498->g_218.y)))) ^ (*p_498->g_371)) < (((safe_mod_func_int8_t_s_s(((safe_add_func_int64_t_s_s((p_498->l_comm_values[(safe_mod_func_uint32_t_u_u(p_498->tid, 2))] |= ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(l_401.zx)), (int64_t)(((*l_403) = (4L || (~((*l_402) = (6L >= l_387.s9))))) | (*p_130))))))).xyxxxxyyxxxxxxxx)).s59)), p_498->g_174, (-1L), ((VECTOR(int64_t, 4))(0L)))).s5), p_129)) <= p_498->g_120), 9UL)) == l_405[1]) , 1L)), 0)))) || l_406.x) != p_498->g_157))) <= FAKE_DIVERGE(p_498->local_0_offset, get_local_id(0), 10)) ^ l_401.w) , p_498->g_239) == p_498->g_174)))).s1;
    return p_498->g_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_498->g_77 p_498->g_239 p_498->g_3 p_498->g_24 p_498->g_205 p_498->g_comm_values p_498->g_157 p_498->g_356 p_498->g_360 p_498->g_363 p_498->g_370
 * writes: p_498->g_77 p_498->g_239 p_498->g_360
 */
int32_t ** func_131(uint16_t * p_132, uint64_t  p_133, int32_t * p_134, int32_t * p_135, struct S1 * p_498)
{ /* block id: 122 */
    VECTOR(uint64_t, 16) l_348 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4F1B9D264E4A153EL), 0x4F1B9D264E4A153EL), 0x4F1B9D264E4A153EL, 18446744073709551615UL, 0x4F1B9D264E4A153EL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4F1B9D264E4A153EL), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0x4F1B9D264E4A153EL), 18446744073709551615UL, 0x4F1B9D264E4A153EL, 18446744073709551615UL, 0x4F1B9D264E4A153EL);
    VECTOR(int32_t, 4) l_364 = (VECTOR(int32_t, 4))(0x6779FA27L, (VECTOR(int32_t, 2))(0x6779FA27L, (-8L)), (-8L));
    VECTOR(int32_t, 2) l_365 = (VECTOR(int32_t, 2))(3L, 0x516122E8L);
    VECTOR(int32_t, 8) l_366 = (VECTOR(int32_t, 8))(0x2C61693BL, (VECTOR(int32_t, 4))(0x2C61693BL, (VECTOR(int32_t, 2))(0x2C61693BL, 0x172F4141L), 0x172F4141L), 0x172F4141L, 0x2C61693BL, 0x172F4141L);
    int32_t l_367 = 0L;
    int32_t *l_369 = (void*)0;
    int32_t **l_368 = &l_369;
    int i;
    for (p_498->g_77 = 19; (p_498->g_77 == (-20)); --p_498->g_77)
    { /* block id: 125 */
        uint8_t *l_323 = &p_498->g_239;
        VECTOR(uint64_t, 8) l_336 = (VECTOR(uint64_t, 8))(0x656CEF8DB6D265F0L, (VECTOR(uint64_t, 4))(0x656CEF8DB6D265F0L, (VECTOR(uint64_t, 2))(0x656CEF8DB6D265F0L, 0UL), 0UL), 0UL, 0x656CEF8DB6D265F0L, 0UL);
        VECTOR(uint64_t, 8) l_345 = (VECTOR(uint64_t, 8))(18446744073709551614UL, (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 0xC830D6B644CD104CL), 0xC830D6B644CD104CL), 0xC830D6B644CD104CL, 18446744073709551614UL, 0xC830D6B644CD104CL);
        int8_t **l_350 = &p_498->g_252;
        int8_t ***l_349[2];
        int8_t ***l_351 = &l_350;
        int8_t ****l_352 = &l_351;
        uint32_t *l_355[4] = {&p_498->g_356,&p_498->g_356,&p_498->g_356,&p_498->g_356};
        int32_t l_357 = 5L;
        int32_t *l_358 = (void*)0;
        int32_t *l_359 = &p_498->g_360[0];
        int32_t *l_361 = (void*)0;
        int32_t **l_362 = &l_361;
        int i;
        for (i = 0; i < 2; i++)
            l_349[i] = &l_350;
        (*l_359) |= (safe_mul_func_uint8_t_u_u(((*l_323)--), (safe_sub_func_int8_t_s_s((!(safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u((0x28083F44L != (((safe_div_func_int64_t_s_s((p_133 , (-1L)), (safe_sub_func_uint64_t_u_u(9UL, ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_336.s2415)).zwwxyxyz)).s4)))) | (((l_357 = (safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((~(((VECTOR(uint64_t, 8))(l_345.s62526335)).s2 < (safe_add_func_int16_t_s_s(((((((VECTOR(uint64_t, 8))(l_348.scadbdadc)).s6 , l_349[1]) == ((*l_352) = l_351)) <= GROUP_DIVERGE(0, 1)) , p_498->g_3), (p_498->g_24 , (safe_div_func_uint64_t_u_u((((p_498->g_205 && 1L) != p_498->g_comm_values[p_498->tid]) > l_336.s2), l_336.s7))))))) <= p_498->g_205), 2)) != l_348.s5), 0x3E33L)), l_348.sf)), l_348.s8))) <= 0UL) <= p_133)) >= 0x517274A17F9480F9L)), 3UL)) <= p_498->g_157), p_498->g_356))), p_133))));
        (*l_362) = l_361;
    }
    l_367 &= ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(0x6ED0B740L, 0x32C5152FL)).xyyyyyyyxyyyyyxy, ((VECTOR(int32_t, 2))(p_498->g_363.xz)).yyxxyxxxxyyxxyyy, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(l_364.xw)), ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(l_365.xyyyxyyy)), ((VECTOR(int32_t, 2))(l_366.s43)).xxxyyxxy))).s66))).yxyyxyyxyxyyyxyy))).s3;
    return p_498->g_370[0][0][4];
}


/* ------------------------------------------ */
/* 
 * reads : p_498->g_69 p_498->g_157 p_498->g_67 p_498->g_174 p_498->g_3 p_498->g_24 p_498->g_16 p_498->g_comm_values p_498->g_17 p_498->g_205 p_498->g_239 p_498->g_120 p_498->g_12 p_498->g_251 p_498->g_253 p_498->g_252 p_498->g_208 p_498->g_208.f0 p_498->g_268 p_498->g_121 p_498->l_comm_values
 * writes: p_498->g_69 p_498->g_157 p_498->g_174 p_498->g_16 p_498->g_205 p_498->g_239 p_498->g_120 p_498->g_67 p_498->g_251
 */
uint16_t * func_136(uint8_t  p_137, int32_t  p_138, int16_t  p_139, int32_t  p_140, int32_t  p_141, struct S1 * p_498)
{ /* block id: 38 */
    int32_t *l_156 = &p_498->g_157;
    int32_t *l_158 = (void*)0;
    int32_t *l_159 = &p_498->g_157;
    int32_t *l_160 = &p_498->g_157;
    int32_t l_161 = 1L;
    int32_t *l_162[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint64_t l_163[5];
    uint8_t l_199 = 3UL;
    VECTOR(int32_t, 2) l_207 = (VECTOR(int32_t, 2))(7L, 5L);
    int8_t *l_261 = (void*)0;
    uint16_t *l_262 = &p_498->g_205;
    int64_t l_313 = 0x151CF20ECE371252L;
    int i;
    for (i = 0; i < 5; i++)
        l_163[i] = 0xE820DD8AA330C0D3L;
    l_163[3]--;
    for (p_498->g_69 = (-1); (p_498->g_69 >= 21); p_498->g_69 = safe_add_func_int64_t_s_s(p_498->g_69, 1))
    { /* block id: 42 */
        int32_t l_179 = 0x371912AEL;
        int32_t l_225 = 0L;
        int32_t *l_228 = &l_179;
        uint32_t l_230 = 0UL;
        int64_t *l_271 = &p_498->g_272;
        int32_t l_310 = 0x259C8C1FL;
        int32_t l_311[7][9] = {{0x78DF16ABL,0x1686D7C7L,(-1L),0x3CEEDDB5L,(-1L),0x1686D7C7L,0x78DF16ABL,0x645A7A18L,0x7E71D498L},{0x78DF16ABL,0x1686D7C7L,(-1L),0x3CEEDDB5L,(-1L),0x1686D7C7L,0x78DF16ABL,0x645A7A18L,0x7E71D498L},{0x78DF16ABL,0x1686D7C7L,(-1L),0x3CEEDDB5L,(-1L),0x1686D7C7L,0x78DF16ABL,0x645A7A18L,0x7E71D498L},{0x78DF16ABL,0x1686D7C7L,(-1L),0x3CEEDDB5L,(-1L),0x1686D7C7L,0x78DF16ABL,0x645A7A18L,0x7E71D498L},{0x78DF16ABL,0x1686D7C7L,(-1L),0x3CEEDDB5L,(-1L),0x1686D7C7L,0x78DF16ABL,0x645A7A18L,0x7E71D498L},{0x78DF16ABL,0x1686D7C7L,(-1L),0x3CEEDDB5L,(-1L),0x1686D7C7L,0x78DF16ABL,0x645A7A18L,0x7E71D498L},{0x78DF16ABL,0x1686D7C7L,(-1L),0x3CEEDDB5L,(-1L),0x1686D7C7L,0x78DF16ABL,0x645A7A18L,0x7E71D498L}};
        int8_t l_312 = 0x40L;
        VECTOR(int64_t, 2) l_314 = (VECTOR(int64_t, 2))((-1L), 0x234895A382B66F5BL);
        uint16_t l_315 = 0x8BC9L;
        int i, j;
        for (p_498->g_157 = 0; (p_498->g_157 <= 9); p_498->g_157++)
        { /* block id: 45 */
            uint8_t l_170[7] = {0xC7L,0xC7L,0xC7L,0xC7L,0xC7L,0xC7L,0xC7L};
            int32_t l_198 = (-1L);
            VECTOR(int32_t, 4) l_206 = (VECTOR(int32_t, 4))(0x7EF0A5C0L, (VECTOR(int32_t, 2))(0x7EF0A5C0L, 0x6CBD431BL), 0x6CBD431BL);
            uint16_t *l_229 = &p_498->g_24;
            VECTOR(int16_t, 16) l_263 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L), (VECTOR(int16_t, 2))((-1L), (-3L)), (VECTOR(int16_t, 2))((-1L), (-3L)), (-1L), (-3L), (-1L), (-3L));
            int i;
            if (p_137)
                break;
            if (l_170[6])
            { /* block id: 47 */
                uint16_t l_171 = 0UL;
                uint64_t *l_187 = &l_163[3];
                VECTOR(uint32_t, 4) l_188 = (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 1UL), 1UL);
                int64_t *l_197 = (void*)0;
                int64_t *l_200 = &p_498->g_16;
                uint16_t *l_201[2];
                uint8_t l_202 = 249UL;
                VECTOR(int32_t, 8) l_213 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-1L)), (-1L)), (-1L), (-2L), (-1L));
                int32_t *l_226 = &p_498->g_157;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_201[i] = &p_498->g_121;
                --l_171;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_498->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), 10))][(safe_mod_func_uint32_t_u_u(p_498->tid, 2))]));
                p_498->g_174 |= p_498->g_67[2][1][7];
                if (((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s((((l_179 <= p_498->g_3) , (safe_unary_minus_func_uint64_t_u(((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((((p_138 == 65535UL) > (safe_lshift_func_uint8_t_u_u((((*l_187) = 9UL) < 18446744073709551610UL), 5))) , ((VECTOR(uint32_t, 2))(l_188.ww)).lo), p_139)), (safe_mod_func_uint64_t_u_u(l_188.z, (safe_add_func_uint16_t_u_u((l_179 = (safe_mul_func_uint16_t_u_u((((*l_200) &= (((l_198 &= (safe_rshift_func_int16_t_s_s(l_179, 3))) , p_498->g_24) <= l_199)) | FAKE_DIVERGE(p_498->local_0_offset, get_local_id(0), 10)), (-6L)))), p_498->g_3)))))) && GROUP_DIVERGE(1, 1))))) == p_498->g_comm_values[p_498->tid]), l_202)), l_170[6])) , 0x2770DCDAL))
                { /* block id: 57 */
                    VECTOR(int32_t, 4) l_210 = (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), (-1L)), (-1L));
                    int i;
                    for (p_140 = 0; (p_140 >= 25); p_140 = safe_add_func_int16_t_s_s(p_140, 2))
                    { /* block id: 60 */
                        uint16_t l_209 = 0xA0D8L;
                        int32_t **l_227[10];
                        int i;
                        for (i = 0; i < 10; i++)
                            l_227[i] = &l_158;
                        p_498->g_205 &= p_498->g_17;
                        l_198 = ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_206.yyzz)).yzyzzyxwxwzzxwzz)), (int32_t)(((p_498->g_comm_values[p_498->tid] > GROUP_DIVERGE(1, 1)) >= 4294967295UL) == (((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(add_sat(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 16))(1UL, p_139, 0xF4L, 255UL, 0x4AL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))((((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_207.yx)).xyxyyxxyyyxxxyyx, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((p_498->g_208 , l_209), ((VECTOR(int32_t, 2))((-1L), 0L)), 0x65374227L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(0x51DF32BEL, ((VECTOR(int32_t, 2))(0x2D52900FL, 0L)), (-1L))).hi)), 4L, (-4L))))).s7403503767742351, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(l_210.wy)).yyxxyyyyxxxyxyxx))))).sc4f9)))), ((VECTOR(int32_t, 8))((safe_rshift_func_int16_t_s_u(p_498->l_comm_values[(safe_mod_func_uint32_t_u_u(p_498->tid, 2))], 13)), 0x240EAC94L, p_139, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(0x5F90D587L, 0x680F069BL)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 16))(l_213.s2000610477671140)).sb1, (int32_t)(l_206.w |= (((safe_div_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((+(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(p_498->g_218.yyxyyxyy)).even, ((VECTOR(int8_t, 4))((safe_sub_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((l_179 = l_179), (safe_div_func_int16_t_s_s((0xAC9E9ED2L ^ p_498->g_218.y), p_498->g_218.y)))) != l_225), 0xE012L)), p_498->g_67[2][1][7], 0x41L, 0x43L))))).w , l_179)), FAKE_DIVERGE(p_498->global_0_offset, get_global_id(0), 10))), p_139)) , p_498->g_120) ^ p_498->g_24))))).xyyxyyyxyxyxxxyy)).s69))))), (-1L), 2L)).wxzwyyyyzwzzzzyw)).sab, ((VECTOR(int32_t, 2))(8L))))), ((VECTOR(int32_t, 2))(0x4ABA2B94L)), 0x787EAEE4L)).s7, p_498->g_120, 0x0395139BL, 2L)).s1340156236702052, ((VECTOR(int32_t, 16))(9L))))).s2c)).xxxxxyyxxyyyyyyy, ((VECTOR(int32_t, 16))(0x3AEA3D49L))))).s6 | 0xEF58C2C6L), ((VECTOR(uint8_t, 2))(1UL)), 0UL, 255UL, 1UL, 0x22L, 1UL)))).s05, (uint8_t)GROUP_DIVERGE(2, 1)))))), 0xF1L, 255UL, 0xE3L, 0x20L, 0x11L, p_498->g_77, 0x5FL, 0x0EL, 0x78L)).s58, ((VECTOR(uint8_t, 2))(0xA2L))))).xyyxxyyyyyxxyyyx, ((VECTOR(uint16_t, 16))(0x3B5EL))))).odd)), (uint16_t)l_188.y))).s1 | l_170[6])), (int32_t)p_140))).sf58f, ((VECTOR(int32_t, 4))((-1L)))))).z;
                        if (l_210.y)
                            continue;
                        l_228 = l_226;
                    }
                    return l_229;
                }
                else
                { /* block id: 69 */
                    int32_t *l_233 = &l_198;
                    --l_230;
                    l_233 = &p_498->g_3;
                }
            }
            else
            { /* block id: 73 */
                int8_t l_249 = 0x54L;
                int32_t l_254[1];
                int64_t **l_270[9][2] = {{&p_498->g_269,&p_498->g_269},{&p_498->g_269,&p_498->g_269},{&p_498->g_269,&p_498->g_269},{&p_498->g_269,&p_498->g_269},{&p_498->g_269,&p_498->g_269},{&p_498->g_269,&p_498->g_269},{&p_498->g_269,&p_498->g_269},{&p_498->g_269,&p_498->g_269},{&p_498->g_269,&p_498->g_269}};
                uint16_t *l_309 = (void*)0;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_254[i] = 0x3E0D74FEL;
                for (p_140 = 28; (p_140 <= 13); p_140 = safe_sub_func_int64_t_s_s(p_140, 1))
                { /* block id: 76 */
                    uint16_t l_236[8] = {0x8AA9L,0xCA92L,0x8AA9L,0x8AA9L,0xCA92L,0x8AA9L,0x8AA9L,0xCA92L};
                    int8_t *l_244 = (void*)0;
                    int8_t *l_245 = (void*)0;
                    VECTOR(int32_t, 8) l_246 = (VECTOR(int32_t, 8))((-5L), (VECTOR(int32_t, 4))((-5L), (VECTOR(int32_t, 2))((-5L), 0x7857C45BL), 0x7857C45BL), 0x7857C45BL, (-5L), 0x7857C45BL);
                    uint64_t *l_250 = &p_498->g_120;
                    int i;
                    if ((l_236[3] < ((safe_add_func_uint32_t_u_u((p_498->g_239 ^= FAKE_DIVERGE(p_498->local_0_offset, get_local_id(0), 10)), (*l_228))) > ((*l_250) |= (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((l_246.s1 = p_498->g_69), 1)), (safe_mul_func_int16_t_s_s(l_249, 0x7D7EL))))))))
                    { /* block id: 80 */
                        (*l_228) = 8L;
                        if ((*l_160))
                            break;
                        p_498->g_67[2][1][7] &= p_498->g_12;
                        (*p_498->g_253) = p_498->g_251;
                    }
                    else
                    { /* block id: 85 */
                        uint32_t l_255[3][4][10] = {{{1UL,1UL,0x7234B004L,0x474018F8L,0xA73EE16DL,0x474018F8L,0x7234B004L,1UL,1UL,0x7234B004L},{1UL,1UL,0x7234B004L,0x474018F8L,0xA73EE16DL,0x474018F8L,0x7234B004L,1UL,1UL,0x7234B004L},{1UL,1UL,0x7234B004L,0x474018F8L,0xA73EE16DL,0x474018F8L,0x7234B004L,1UL,1UL,0x7234B004L},{1UL,1UL,0x7234B004L,0x474018F8L,0xA73EE16DL,0x474018F8L,0x7234B004L,1UL,1UL,0x7234B004L}},{{1UL,1UL,0x7234B004L,0x474018F8L,0xA73EE16DL,0x474018F8L,0x7234B004L,1UL,1UL,0x7234B004L},{1UL,1UL,0x7234B004L,0x474018F8L,0xA73EE16DL,0x474018F8L,0x7234B004L,1UL,1UL,0x7234B004L},{1UL,1UL,0x7234B004L,0x474018F8L,0xA73EE16DL,0x474018F8L,0x7234B004L,1UL,1UL,0x7234B004L},{1UL,1UL,0x7234B004L,0x474018F8L,0xA73EE16DL,0x474018F8L,0x7234B004L,1UL,1UL,0x7234B004L}},{{1UL,1UL,0x7234B004L,0x474018F8L,0xA73EE16DL,0x474018F8L,0x7234B004L,1UL,1UL,0x7234B004L},{1UL,1UL,0x7234B004L,0x474018F8L,0xA73EE16DL,0x474018F8L,0x7234B004L,1UL,1UL,0x7234B004L},{1UL,1UL,0x7234B004L,0x474018F8L,0xA73EE16DL,0x474018F8L,0x7234B004L,1UL,1UL,0x7234B004L},{1UL,1UL,0x7234B004L,0x474018F8L,0xA73EE16DL,0x474018F8L,0x7234B004L,1UL,1UL,0x7234B004L}}};
                        int32_t l_258[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_258[i] = 1L;
                        ++l_255[1][1][2];
                        if (p_140)
                            break;
                        if (p_140)
                            continue;
                        l_258[1] ^= p_498->g_157;
                    }
                    (*l_228) ^= (l_229 == ((l_246.s4 |= ((safe_lshift_func_uint16_t_u_u(p_137, 1)) | (l_261 == (*p_498->g_251)))) , l_262));
                }
                if (((VECTOR(int32_t, 16))(6L, 0x71CAD6BCL, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(l_263.s4228)).yxxxyzyw, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))((safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((p_498->g_121 ^= (*l_228)), 7UL)), 4)), ((VECTOR(uint16_t, 8))(p_498->g_268.yywzxzww)), ((l_271 = (p_498->g_17 , p_498->g_269)) != (p_498->g_273 = &p_498->g_272)), (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((void*)0 == &p_498->g_14), 1L)), (safe_div_func_int16_t_s_s((FAKE_DIVERGE(p_498->local_0_offset, get_local_id(0), 10) , ((safe_lshift_func_int16_t_s_u(p_137, GROUP_DIVERGE(1, 1))) , p_498->g_120)), l_198)))), ((VECTOR(uint16_t, 2))(0UL)), 0x2733L, 0xF450L, 65535UL)).s9a)))).yyyxxyyy))).s13)), ((VECTOR(int32_t, 8))(2L)), 0x0EEF9D87L, 0L, 0x49F848DFL, (-1L))).s0)
                { /* block id: 97 */
                    uint64_t l_306 = 0x65CCBA45FD23D2D6L;
                    for (p_138 = 27; (p_138 <= 29); p_138 = safe_add_func_uint16_t_u_u(p_138, 9))
                    { /* block id: 100 */
                        uint64_t *l_296 = &p_498->g_120;
                        int64_t *l_297 = (void*)0;
                        int32_t l_298[8][7][4] = {{{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L}},{{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L}},{{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L}},{{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L}},{{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L}},{{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L}},{{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L}},{{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L},{0x583BF83CL,0x4A433A4AL,0L,1L}}};
                        int32_t l_299 = 0x41350130L;
                        int i, j, k;
                        l_198 &= (p_498->g_12 == (safe_sub_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((l_298[2][1][1] = (safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s(((p_498->g_239 >= (3L && (l_254[0] > (p_498->g_208 , (((*l_228) & 0xF8L) < ((((*l_296) ^= (0x2348L <= (p_139 ^= (((((safe_mod_func_int64_t_s_s(0x42335244FC275AE5L, (*l_159))) ^ p_498->g_208.f0) > p_498->g_comm_values[p_498->tid]) && 0x5FDDD8FAL) != 0x1DB4C001L)))) < l_254[0]) != p_498->g_16)))))) <= (*l_160)), l_254[0])), p_138))), p_498->g_174)), l_299)), (*l_160))));
                        l_306 ^= (safe_sub_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_s(p_498->g_268.z, (safe_add_func_int8_t_s_s((l_206.z > p_140), (p_498->g_121 ^ 0x10L))))) , &p_139) != ((p_498->l_comm_values[(safe_mod_func_uint32_t_u_u(p_498->tid, 2))] >= p_140) , &p_498->g_77)), l_254[0]));
                        (*l_228) = (+0x7B0A0D7BL);
                    }
                }
                else
                { /* block id: 108 */
                    l_254[0] |= ((VECTOR(int32_t, 2))((-1L), 0x635F20FCL)).hi;
                }
                for (p_137 = 18; (p_137 != 33); p_137 = safe_add_func_uint8_t_u_u(p_137, 1))
                { /* block id: 113 */
                    return l_309;
                }
            }
        }
        if ((*l_228))
            continue;
        --l_315;
    }
    return &p_498->g_121;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S1 c_499;
    struct S1* p_498 = &c_499;
    struct S1 c_500 = {
        0x2C0D37ADL, // p_498->g_3
        0x768593F9L, // p_498->g_12
        0x62294BB489F7A9D2L, // p_498->g_13
        0x37A7L, // p_498->g_14
        0L, // p_498->g_15
        6L, // p_498->g_16
        3UL, // p_498->g_17
        0UL, // p_498->g_24
        0x45E4BBA6L, // p_498->g_66
        {{{0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L,0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L},{0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L,0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L}},{{0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L,0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L},{0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L,0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L}},{{0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L,0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L},{0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L,0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L}},{{0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L,0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L},{0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L,0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L}},{{0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L,0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L},{0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L,0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L}},{{0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L,0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L},{0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L,0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L}},{{0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L,0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L},{0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L,0x2A25E9F1L,0x25638444L,(-5L),0x25638444L,0x2A25E9F1L}}}, // p_498->g_67
        (-1L), // p_498->g_69
        0x7AF3L, // p_498->g_77
        0x2038209D23E52F82L, // p_498->g_120
        65535UL, // p_498->g_121
        0x12510486L, // p_498->g_157
        0x10CA4D4BL, // p_498->g_174
        65535UL, // p_498->g_205
        {0x20CAB86EL}, // p_498->g_208
        (VECTOR(int8_t, 2))(0x76L, (-10L)), // p_498->g_218
        255UL, // p_498->g_239
        (void*)0, // p_498->g_252
        &p_498->g_252, // p_498->g_251
        &p_498->g_251, // p_498->g_253
        (VECTOR(uint16_t, 4))(65528UL, (VECTOR(uint16_t, 2))(65528UL, 65526UL), 65526UL), // p_498->g_268
        (void*)0, // p_498->g_269
        0L, // p_498->g_272
        &p_498->g_272, // p_498->g_273
        1UL, // p_498->g_356
        {4L,4L,4L}, // p_498->g_360
        (VECTOR(int32_t, 4))(0x76C1B3BAL, (VECTOR(int32_t, 2))(0x76C1B3BAL, 0x28FCBE95L), 0x28FCBE95L), // p_498->g_363
        &p_498->g_3, // p_498->g_371
        {{{&p_498->g_371,(void*)0,&p_498->g_371,&p_498->g_371,(void*)0,&p_498->g_371,&p_498->g_371,(void*)0},{&p_498->g_371,(void*)0,&p_498->g_371,&p_498->g_371,(void*)0,&p_498->g_371,&p_498->g_371,(void*)0}}}, // p_498->g_370
        &p_498->g_356, // p_498->g_378
        &p_498->g_378, // p_498->g_377
        &p_498->g_377, // p_498->g_380
        1UL, // p_498->g_404
        0x7DL, // p_498->g_416
        &p_498->g_371, // p_498->g_425
        (VECTOR(uint8_t, 4))(0xA1L, (VECTOR(uint8_t, 2))(0xA1L, 1UL), 1UL), // p_498->g_441
        (VECTOR(uint8_t, 8))(0x87L, (VECTOR(uint8_t, 4))(0x87L, (VECTOR(uint8_t, 2))(0x87L, 0UL), 0UL), 0UL, 0x87L, 0UL), // p_498->g_442
        (VECTOR(uint8_t, 16))(0x2EL, (VECTOR(uint8_t, 4))(0x2EL, (VECTOR(uint8_t, 2))(0x2EL, 0x2DL), 0x2DL), 0x2DL, 0x2EL, 0x2DL, (VECTOR(uint8_t, 2))(0x2EL, 0x2DL), (VECTOR(uint8_t, 2))(0x2EL, 0x2DL), 0x2EL, 0x2DL, 0x2EL, 0x2DL), // p_498->g_443
        (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL), // p_498->g_446
        65535UL, // p_498->g_476
        0x3E456177F4D5EF80L, // p_498->g_479
        &p_498->g_371, // p_498->g_486
        &p_498->g_371, // p_498->g_488
        0, // p_498->v_collective
        sequence_input[get_global_id(0)], // p_498->global_0_offset
        sequence_input[get_global_id(1)], // p_498->global_1_offset
        sequence_input[get_global_id(2)], // p_498->global_2_offset
        sequence_input[get_local_id(0)], // p_498->local_0_offset
        sequence_input[get_local_id(1)], // p_498->local_1_offset
        sequence_input[get_local_id(2)], // p_498->local_2_offset
        sequence_input[get_group_id(0)], // p_498->group_0_offset
        sequence_input[get_group_id(1)], // p_498->group_1_offset
        sequence_input[get_group_id(2)], // p_498->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_498->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_499 = c_500;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_498);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_498->g_3, "p_498->g_3", print_hash_value);
    transparent_crc(p_498->g_12, "p_498->g_12", print_hash_value);
    transparent_crc(p_498->g_13, "p_498->g_13", print_hash_value);
    transparent_crc(p_498->g_14, "p_498->g_14", print_hash_value);
    transparent_crc(p_498->g_15, "p_498->g_15", print_hash_value);
    transparent_crc(p_498->g_16, "p_498->g_16", print_hash_value);
    transparent_crc(p_498->g_17, "p_498->g_17", print_hash_value);
    transparent_crc(p_498->g_24, "p_498->g_24", print_hash_value);
    transparent_crc(p_498->g_66, "p_498->g_66", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(p_498->g_67[i][j][k], "p_498->g_67[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_498->g_69, "p_498->g_69", print_hash_value);
    transparent_crc(p_498->g_77, "p_498->g_77", print_hash_value);
    transparent_crc(p_498->g_120, "p_498->g_120", print_hash_value);
    transparent_crc(p_498->g_121, "p_498->g_121", print_hash_value);
    transparent_crc(p_498->g_157, "p_498->g_157", print_hash_value);
    transparent_crc(p_498->g_174, "p_498->g_174", print_hash_value);
    transparent_crc(p_498->g_205, "p_498->g_205", print_hash_value);
    transparent_crc(p_498->g_208.f0, "p_498->g_208.f0", print_hash_value);
    transparent_crc(p_498->g_218.x, "p_498->g_218.x", print_hash_value);
    transparent_crc(p_498->g_218.y, "p_498->g_218.y", print_hash_value);
    transparent_crc(p_498->g_239, "p_498->g_239", print_hash_value);
    transparent_crc(p_498->g_268.x, "p_498->g_268.x", print_hash_value);
    transparent_crc(p_498->g_268.y, "p_498->g_268.y", print_hash_value);
    transparent_crc(p_498->g_268.z, "p_498->g_268.z", print_hash_value);
    transparent_crc(p_498->g_268.w, "p_498->g_268.w", print_hash_value);
    transparent_crc(p_498->g_272, "p_498->g_272", print_hash_value);
    transparent_crc(p_498->g_356, "p_498->g_356", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_498->g_360[i], "p_498->g_360[i]", print_hash_value);

    }
    transparent_crc(p_498->g_363.x, "p_498->g_363.x", print_hash_value);
    transparent_crc(p_498->g_363.y, "p_498->g_363.y", print_hash_value);
    transparent_crc(p_498->g_363.z, "p_498->g_363.z", print_hash_value);
    transparent_crc(p_498->g_363.w, "p_498->g_363.w", print_hash_value);
    transparent_crc(p_498->g_404, "p_498->g_404", print_hash_value);
    transparent_crc(p_498->g_416, "p_498->g_416", print_hash_value);
    transparent_crc(p_498->g_441.x, "p_498->g_441.x", print_hash_value);
    transparent_crc(p_498->g_441.y, "p_498->g_441.y", print_hash_value);
    transparent_crc(p_498->g_441.z, "p_498->g_441.z", print_hash_value);
    transparent_crc(p_498->g_441.w, "p_498->g_441.w", print_hash_value);
    transparent_crc(p_498->g_442.s0, "p_498->g_442.s0", print_hash_value);
    transparent_crc(p_498->g_442.s1, "p_498->g_442.s1", print_hash_value);
    transparent_crc(p_498->g_442.s2, "p_498->g_442.s2", print_hash_value);
    transparent_crc(p_498->g_442.s3, "p_498->g_442.s3", print_hash_value);
    transparent_crc(p_498->g_442.s4, "p_498->g_442.s4", print_hash_value);
    transparent_crc(p_498->g_442.s5, "p_498->g_442.s5", print_hash_value);
    transparent_crc(p_498->g_442.s6, "p_498->g_442.s6", print_hash_value);
    transparent_crc(p_498->g_442.s7, "p_498->g_442.s7", print_hash_value);
    transparent_crc(p_498->g_443.s0, "p_498->g_443.s0", print_hash_value);
    transparent_crc(p_498->g_443.s1, "p_498->g_443.s1", print_hash_value);
    transparent_crc(p_498->g_443.s2, "p_498->g_443.s2", print_hash_value);
    transparent_crc(p_498->g_443.s3, "p_498->g_443.s3", print_hash_value);
    transparent_crc(p_498->g_443.s4, "p_498->g_443.s4", print_hash_value);
    transparent_crc(p_498->g_443.s5, "p_498->g_443.s5", print_hash_value);
    transparent_crc(p_498->g_443.s6, "p_498->g_443.s6", print_hash_value);
    transparent_crc(p_498->g_443.s7, "p_498->g_443.s7", print_hash_value);
    transparent_crc(p_498->g_443.s8, "p_498->g_443.s8", print_hash_value);
    transparent_crc(p_498->g_443.s9, "p_498->g_443.s9", print_hash_value);
    transparent_crc(p_498->g_443.sa, "p_498->g_443.sa", print_hash_value);
    transparent_crc(p_498->g_443.sb, "p_498->g_443.sb", print_hash_value);
    transparent_crc(p_498->g_443.sc, "p_498->g_443.sc", print_hash_value);
    transparent_crc(p_498->g_443.sd, "p_498->g_443.sd", print_hash_value);
    transparent_crc(p_498->g_443.se, "p_498->g_443.se", print_hash_value);
    transparent_crc(p_498->g_443.sf, "p_498->g_443.sf", print_hash_value);
    transparent_crc(p_498->g_446.s0, "p_498->g_446.s0", print_hash_value);
    transparent_crc(p_498->g_446.s1, "p_498->g_446.s1", print_hash_value);
    transparent_crc(p_498->g_446.s2, "p_498->g_446.s2", print_hash_value);
    transparent_crc(p_498->g_446.s3, "p_498->g_446.s3", print_hash_value);
    transparent_crc(p_498->g_446.s4, "p_498->g_446.s4", print_hash_value);
    transparent_crc(p_498->g_446.s5, "p_498->g_446.s5", print_hash_value);
    transparent_crc(p_498->g_446.s6, "p_498->g_446.s6", print_hash_value);
    transparent_crc(p_498->g_446.s7, "p_498->g_446.s7", print_hash_value);
    transparent_crc(p_498->g_476, "p_498->g_476", print_hash_value);
    transparent_crc(p_498->g_479, "p_498->g_479", print_hash_value);
    transparent_crc(p_498->v_collective, "p_498->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 57; i++)
            transparent_crc(p_498->g_special_values[i + 57 * get_linear_group_id()], "p_498->g_special_values[i + 57 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_498->l_comm_values[get_linear_local_id()], "p_498->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_498->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_498->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
