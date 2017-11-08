// --atomics 82 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 17,43,13 -l 17,1,1
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

__constant uint32_t permutations[10][17] = {
{9,2,8,3,6,12,0,14,5,1,4,10,15,7,11,13,16}, // permutation 0
{3,14,10,7,1,15,9,2,5,6,16,13,0,12,8,11,4}, // permutation 1
{7,10,1,3,2,5,8,6,15,11,9,0,4,16,14,12,13}, // permutation 2
{4,0,11,8,6,16,2,14,15,10,13,1,7,3,9,12,5}, // permutation 3
{14,6,12,16,3,4,7,8,0,2,11,13,15,10,1,9,5}, // permutation 4
{9,8,3,4,15,13,1,6,14,5,0,10,12,7,2,16,11}, // permutation 5
{15,0,14,12,13,10,5,7,11,8,2,6,1,16,3,4,9}, // permutation 6
{4,3,7,5,1,6,9,15,12,2,13,10,16,0,14,11,8}, // permutation 7
{3,5,2,9,16,7,6,4,11,14,8,15,13,0,1,12,10}, // permutation 8
{8,10,3,11,14,6,5,9,1,16,2,12,15,4,7,13,0} // permutation 9
};

// Seed: 208418252

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int32_t  f0;
   volatile uint32_t  f1;
   uint32_t  f2;
   uint32_t  f3;
   int32_t  f4;
};

struct S1 {
   uint64_t  f0;
};

struct S2 {
   volatile uint16_t  f0;
   uint64_t  f1;
};

struct S3 {
   uint32_t  f0;
   int32_t  f1;
   struct S2  f2;
   uint16_t  f3;
};

struct S4 {
   volatile int32_t  f0;
   uint64_t  f1;
   int32_t  f2;
   volatile int64_t  f3;
   volatile uint32_t  f4;
   uint8_t  f5;
   int32_t  f6;
};

struct S5 {
    VECTOR(int32_t, 2) g_11;
    uint32_t g_16;
    int32_t *g_39;
    int32_t g_40;
    volatile int32_t g_43;
    int32_t g_44;
    uint16_t g_56;
    VECTOR(int64_t, 16) g_64;
    int64_t g_66;
    int32_t ** volatile g_71;
    uint8_t g_86;
    int32_t ** volatile g_95;
    int32_t *** volatile g_98;
    struct S4 g_117;
    uint32_t g_120;
    VECTOR(int32_t, 4) g_125;
    int16_t g_129[7];
    VECTOR(uint64_t, 8) g_133;
    volatile int32_t g_147;
    volatile int32_t g_148;
    volatile int32_t g_149;
    volatile int32_t g_150;
    volatile int32_t g_151;
    volatile int32_t g_152;
    volatile int32_t g_153[3];
    volatile int32_t g_154;
    volatile VECTOR(int32_t, 4) g_155;
    volatile int32_t g_156;
    volatile int32_t g_157[5][7];
    volatile int32_t g_158;
    volatile int32_t *g_146[6][1][5];
    volatile int32_t **g_145;
    volatile int32_t ***g_144[1][6][10];
    int32_t g_162;
    uint64_t *** volatile g_165;
    uint64_t *g_168[9];
    uint64_t **g_167;
    uint64_t *** volatile g_166[6];
    volatile struct S2 g_172;
    volatile uint8_t g_183;
    volatile VECTOR(int16_t, 16) g_191;
    VECTOR(int16_t, 16) g_192;
    int16_t g_196;
    struct S1 g_197[8];
    uint64_t ***g_198;
    struct S2 g_212;
    struct S2 *g_213[5];
    uint64_t g_239;
    volatile int16_t g_272;
    uint16_t *g_291;
    uint16_t **g_290;
    volatile int32_t g_310[4][2][5];
    VECTOR(uint8_t, 2) g_326;
    struct S3 g_353;
    struct S3 * volatile g_354;
    volatile VECTOR(int8_t, 8) g_393;
    volatile VECTOR(uint8_t, 2) g_401;
    volatile VECTOR(uint8_t, 8) g_403;
    struct S2 g_420;
    volatile VECTOR(int32_t, 2) g_464;
    struct S0 g_473;
    VECTOR(int32_t, 16) g_492;
    struct S4 *g_528;
    struct S4 ** volatile g_527;
    VECTOR(uint16_t, 8) g_532;
    volatile VECTOR(int32_t, 8) g_556;
    volatile VECTOR(int32_t, 4) g_558;
    VECTOR(int32_t, 2) g_566;
    struct S0 g_570;
    struct S2 g_571[1];
    VECTOR(uint32_t, 16) g_573;
    VECTOR(uint32_t, 8) g_574;
    volatile VECTOR(uint32_t, 2) g_575;
    volatile struct S3 g_600;
    volatile struct S4 g_610[10][3];
    volatile struct S4 g_616[10];
    int8_t g_632;
    VECTOR(int8_t, 8) g_637;
    VECTOR(int8_t, 2) g_639;
    struct S3 g_645;
    volatile VECTOR(uint32_t, 16) g_652;
    volatile struct S4 g_654;
    struct S2 g_668[4][3][3];
    struct S1 g_686;
    int32_t ** volatile g_688[6][2];
    uint8_t g_696;
    int32_t **g_709;
    int32_t ***g_708[3][4][6];
    struct S2 g_712[1][4][8];
    struct S2 g_714;
    struct S0 g_721;
    volatile struct S0 g_729;
    uint16_t *** volatile g_764;
    volatile VECTOR(int64_t, 16) g_774;
    struct S0 g_799;
    int32_t g_810;
    struct S3 g_812;
    VECTOR(int64_t, 16) g_819;
    volatile VECTOR(int64_t, 8) g_820;
    uint32_t g_831[8][10];
    struct S1 * volatile g_920;
    struct S1 g_934;
    int32_t g_1056;
    int16_t *g_1093;
    int16_t **g_1092;
    int32_t * volatile g_1096;
    int32_t * volatile g_1097[6];
    int32_t * volatile g_1098;
    volatile struct S2 g_1100[8];
    volatile struct S2 g_1102[10];
    struct S2 g_1103;
    struct S2 g_1104;
    int32_t *g_1105;
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
uint64_t  func_1(struct S5 * p_1301);
int32_t * func_2(int64_t  p_3, struct S5 * p_1301);
uint8_t * func_25(int32_t  p_26, uint8_t * p_27, struct S5 * p_1301);
int32_t  func_28(uint8_t  p_29, struct S5 * p_1301);
uint8_t  func_30(int64_t  p_31, int32_t  p_32, struct S1  p_33, uint32_t  p_34, struct S5 * p_1301);
uint8_t  func_37(int32_t * p_38, struct S5 * p_1301);
struct S1  func_47(uint32_t  p_48, int32_t  p_49, uint8_t * p_50, struct S5 * p_1301);
uint8_t  func_58(int64_t  p_59, int64_t  p_60, struct S1  p_61, uint16_t * p_62, struct S1  p_63, struct S5 * p_1301);
struct S1  func_67(uint32_t  p_68, struct S5 * p_1301);
int32_t  func_72(int64_t * p_73, uint8_t  p_74, int32_t * p_75, uint32_t  p_76, struct S5 * p_1301);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1301->l_comm_values p_1301->g_16 p_1301->g_1056 p_1301->g_920 p_1301->g_197 p_1301->g_1092 p_1301->g_1098 p_1301->g_1100 p_1301->g_1103 p_1301->g_1105 p_1301->g_709 p_1301->g_645.f1 p_1301->g_39 p_1301->g_117.f2
 * writes: p_1301->g_11 p_1301->g_16 p_1301->g_1056 p_1301->g_1102 p_1301->g_1104 p_1301->g_39 p_1301->g_645.f1 p_1301->g_354 p_1301->g_117.f2
 */
uint64_t  func_1(struct S5 * p_1301)
{ /* block id: 4 */
    int32_t l_4[6][6][7] = {{{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L}},{{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L}},{{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L}},{{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L}},{{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L}},{{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L},{0L,0x21E124DCL,0x21E124DCL,0L,(-2L),0x515466BCL,0x7C2657A7L}}};
    int i, j, k;
    (*p_1301->g_709) = func_2(l_4[0][1][6], p_1301);
    for (p_1301->g_645.f1 = (-16); (p_1301->g_645.f1 == (-17)); p_1301->g_645.f1 = safe_sub_func_int64_t_s_s(p_1301->g_645.f1, 1))
    { /* block id: 561 */
        int64_t l_1108 = 0x23193607FCA47908L;
        p_1301->g_354 = (void*)0;
        return l_1108;
    }
    (*p_1301->g_39) |= l_4[0][1][6];
    if ((atomic_inc(&p_1301->g_atomic_input[82 * get_linear_group_id() + 79]) == 3))
    { /* block id: 567 */
        uint64_t l_1109 = 2UL;
        uint16_t l_1254 = 0xCBF6L;
        VECTOR(int32_t, 2) l_1255 = (VECTOR(int32_t, 2))(0x01EC39C7L, 0x59B1A57BL);
        VECTOR(uint32_t, 4) l_1256 = (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0x48874DB0L), 0x48874DB0L);
        VECTOR(int32_t, 2) l_1257 = (VECTOR(int32_t, 2))(0x43BC5DCBL, 0x5F10EA7EL);
        VECTOR(int32_t, 2) l_1258 = (VECTOR(int32_t, 2))(0x7F38BFA6L, 0x0D396766L);
        VECTOR(int32_t, 4) l_1259 = (VECTOR(int32_t, 4))(0x30AAC352L, (VECTOR(int32_t, 2))(0x30AAC352L, 0x3BBECBCDL), 0x3BBECBCDL);
        int32_t l_1260 = (-7L);
        uint8_t l_1261 = 246UL;
        int64_t l_1262 = 0x1A39A6CA14090BCDL;
        VECTOR(int32_t, 2) l_1263 = (VECTOR(int32_t, 2))(1L, 0L);
        VECTOR(int32_t, 2) l_1264 = (VECTOR(int32_t, 2))(0x08CE8D8DL, 1L);
        VECTOR(int32_t, 16) l_1265 = (VECTOR(int32_t, 16))(0x234B3E8BL, (VECTOR(int32_t, 4))(0x234B3E8BL, (VECTOR(int32_t, 2))(0x234B3E8BL, 0x13D19CC4L), 0x13D19CC4L), 0x13D19CC4L, 0x234B3E8BL, 0x13D19CC4L, (VECTOR(int32_t, 2))(0x234B3E8BL, 0x13D19CC4L), (VECTOR(int32_t, 2))(0x234B3E8BL, 0x13D19CC4L), 0x234B3E8BL, 0x13D19CC4L, 0x234B3E8BL, 0x13D19CC4L);
        VECTOR(int32_t, 16) l_1266 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-3L)), (-3L)), (-3L), 0L, (-3L), (VECTOR(int32_t, 2))(0L, (-3L)), (VECTOR(int32_t, 2))(0L, (-3L)), 0L, (-3L), 0L, (-3L));
        VECTOR(int32_t, 2) l_1267 = (VECTOR(int32_t, 2))(0L, 0x1F6DF503L);
        VECTOR(int32_t, 16) l_1268 = (VECTOR(int32_t, 16))(0x31897143L, (VECTOR(int32_t, 4))(0x31897143L, (VECTOR(int32_t, 2))(0x31897143L, 0x3669D66CL), 0x3669D66CL), 0x3669D66CL, 0x31897143L, 0x3669D66CL, (VECTOR(int32_t, 2))(0x31897143L, 0x3669D66CL), (VECTOR(int32_t, 2))(0x31897143L, 0x3669D66CL), 0x31897143L, 0x3669D66CL, 0x31897143L, 0x3669D66CL);
        VECTOR(int16_t, 2) l_1269 = (VECTOR(int16_t, 2))(0L, 1L);
        VECTOR(int8_t, 4) l_1270 = (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x5CL), 0x5CL);
        VECTOR(uint16_t, 16) l_1271 = (VECTOR(uint16_t, 16))(0xCCCBL, (VECTOR(uint16_t, 4))(0xCCCBL, (VECTOR(uint16_t, 2))(0xCCCBL, 0x823FL), 0x823FL), 0x823FL, 0xCCCBL, 0x823FL, (VECTOR(uint16_t, 2))(0xCCCBL, 0x823FL), (VECTOR(uint16_t, 2))(0xCCCBL, 0x823FL), 0xCCCBL, 0x823FL, 0xCCCBL, 0x823FL);
        VECTOR(uint16_t, 8) l_1272 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65528UL), 65528UL), 65528UL, 65535UL, 65528UL);
        VECTOR(uint16_t, 4) l_1273 = (VECTOR(uint16_t, 4))(0x56B3L, (VECTOR(uint16_t, 2))(0x56B3L, 0UL), 0UL);
        VECTOR(int32_t, 2) l_1274 = (VECTOR(int32_t, 2))(0x738A88B9L, 0x26BDFF3FL);
        struct S4 l_1275 = {0x026024CBL,0UL,6L,-1L,0x8D5D1AD6L,253UL,0L};/* VOLATILE GLOBAL l_1275 */
        uint64_t l_1276 = 18446744073709551607UL;
        VECTOR(int32_t, 4) l_1277 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 5L), 5L);
        VECTOR(uint8_t, 16) l_1278 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL, (VECTOR(uint8_t, 2))(255UL, 0UL), (VECTOR(uint8_t, 2))(255UL, 0UL), 255UL, 0UL, 255UL, 0UL);
        VECTOR(uint16_t, 16) l_1279 = (VECTOR(uint16_t, 16))(0x8AEDL, (VECTOR(uint16_t, 4))(0x8AEDL, (VECTOR(uint16_t, 2))(0x8AEDL, 65527UL), 65527UL), 65527UL, 0x8AEDL, 65527UL, (VECTOR(uint16_t, 2))(0x8AEDL, 65527UL), (VECTOR(uint16_t, 2))(0x8AEDL, 65527UL), 0x8AEDL, 65527UL, 0x8AEDL, 65527UL);
        uint16_t l_1280 = 0x32E1L;
        uint32_t l_1281 = 0x01789981L;
        VECTOR(int32_t, 4) l_1282 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
        VECTOR(int32_t, 4) l_1283 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x53CB0EE7L), 0x53CB0EE7L);
        VECTOR(int32_t, 2) l_1284 = (VECTOR(int32_t, 2))(0L, 0x48C2523CL);
        VECTOR(int32_t, 8) l_1285 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x58401747L), 0x58401747L), 0x58401747L, (-1L), 0x58401747L);
        int64_t l_1286 = (-10L);
        int8_t l_1287 = (-6L);
        uint8_t l_1288 = 1UL;
        int8_t l_1289 = 0x0BL;
        uint64_t l_1290 = 0x35C3A951A646B16DL;
        uint32_t l_1291 = 0UL;
        int32_t l_1292 = (-10L);
        int i;
        if (l_1109)
        { /* block id: 568 */
            int32_t l_1110 = 0x3E73BC48L;
            for (l_1110 = (-1); (l_1110 <= 4); l_1110 = safe_add_func_uint64_t_u_u(l_1110, 2))
            { /* block id: 571 */
                int32_t l_1113 = 0x3768501FL;
                struct S4 l_1128 = {0x3C8EF974L,0xA99D66560E2C6131L,0x3E4D77EEL,-1L,0UL,1UL,-1L};/* VOLATILE GLOBAL l_1128 */
                struct S4 l_1129 = {0x4E738AB8L,7UL,0x3C590BEFL,0x0C86DED7D0AFC12FL,4294967295UL,248UL,-10L};/* VOLATILE GLOBAL l_1129 */
                int16_t l_1151 = (-1L);
                uint32_t l_1152 = 0x46783124L;
                int16_t l_1153 = 0x00F9L;
                VECTOR(uint32_t, 4) l_1154 = (VECTOR(uint32_t, 4))(0x6448E7C1L, (VECTOR(uint32_t, 2))(0x6448E7C1L, 1UL), 1UL);
                VECTOR(uint32_t, 2) l_1155 = (VECTOR(uint32_t, 2))(0x77A74096L, 0UL);
                VECTOR(uint32_t, 8) l_1156 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0xB234239BL), 0xB234239BL), 0xB234239BL, 1UL, 0xB234239BL);
                int16_t l_1157 = 0x2B12L;
                VECTOR(uint32_t, 8) l_1158 = (VECTOR(uint32_t, 8))(0x0A8CD4D4L, (VECTOR(uint32_t, 4))(0x0A8CD4D4L, (VECTOR(uint32_t, 2))(0x0A8CD4D4L, 0x5BB0ECC6L), 0x5BB0ECC6L), 0x5BB0ECC6L, 0x0A8CD4D4L, 0x5BB0ECC6L);
                VECTOR(uint32_t, 4) l_1159 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 4294967286UL), 4294967286UL);
                VECTOR(uint32_t, 16) l_1160 = (VECTOR(uint32_t, 16))(0x5059AE34L, (VECTOR(uint32_t, 4))(0x5059AE34L, (VECTOR(uint32_t, 2))(0x5059AE34L, 4294967289UL), 4294967289UL), 4294967289UL, 0x5059AE34L, 4294967289UL, (VECTOR(uint32_t, 2))(0x5059AE34L, 4294967289UL), (VECTOR(uint32_t, 2))(0x5059AE34L, 4294967289UL), 0x5059AE34L, 4294967289UL, 0x5059AE34L, 4294967289UL);
                VECTOR(uint32_t, 8) l_1161 = (VECTOR(uint32_t, 8))(0x19D9AB02L, (VECTOR(uint32_t, 4))(0x19D9AB02L, (VECTOR(uint32_t, 2))(0x19D9AB02L, 0UL), 0UL), 0UL, 0x19D9AB02L, 0UL);
                int8_t l_1162 = 1L;
                VECTOR(uint32_t, 2) l_1163 = (VECTOR(uint32_t, 2))(0UL, 0x06C61E6CL);
                VECTOR(uint32_t, 8) l_1164 = (VECTOR(uint32_t, 8))(5UL, (VECTOR(uint32_t, 4))(5UL, (VECTOR(uint32_t, 2))(5UL, 0x962664BAL), 0x962664BAL), 0x962664BAL, 5UL, 0x962664BAL);
                VECTOR(uint32_t, 2) l_1165 = (VECTOR(uint32_t, 2))(4294967290UL, 0UL);
                VECTOR(uint32_t, 4) l_1166 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x2A664F8CL), 0x2A664F8CL);
                VECTOR(uint32_t, 16) l_1167 = (VECTOR(uint32_t, 16))(4294967290UL, (VECTOR(uint32_t, 4))(4294967290UL, (VECTOR(uint32_t, 2))(4294967290UL, 1UL), 1UL), 1UL, 4294967290UL, 1UL, (VECTOR(uint32_t, 2))(4294967290UL, 1UL), (VECTOR(uint32_t, 2))(4294967290UL, 1UL), 4294967290UL, 1UL, 4294967290UL, 1UL);
                VECTOR(uint32_t, 8) l_1168 = (VECTOR(uint32_t, 8))(0x5C57E324L, (VECTOR(uint32_t, 4))(0x5C57E324L, (VECTOR(uint32_t, 2))(0x5C57E324L, 0x576C9A90L), 0x576C9A90L), 0x576C9A90L, 0x5C57E324L, 0x576C9A90L);
                VECTOR(uint32_t, 8) l_1169 = (VECTOR(uint32_t, 8))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 0UL), 0UL), 0UL, 7UL, 0UL);
                int32_t l_1170 = 0x6FE21281L;
                int32_t l_1171 = (-7L);
                VECTOR(uint32_t, 16) l_1172 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x6BF2EE4AL), 0x6BF2EE4AL), 0x6BF2EE4AL, 4294967295UL, 0x6BF2EE4AL, (VECTOR(uint32_t, 2))(4294967295UL, 0x6BF2EE4AL), (VECTOR(uint32_t, 2))(4294967295UL, 0x6BF2EE4AL), 4294967295UL, 0x6BF2EE4AL, 4294967295UL, 0x6BF2EE4AL);
                VECTOR(int32_t, 2) l_1173 = (VECTOR(int32_t, 2))(0x304D6BABL, 0L);
                uint32_t l_1174[2];
                int8_t l_1175 = 1L;
                uint8_t l_1176 = 0x9CL;
                int64_t l_1177[5][3][4] = {{{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1174[i] = 0x43A13312L;
                for (l_1113 = 0; (l_1113 < (-23)); --l_1113)
                { /* block id: 574 */
                    int32_t l_1117 = (-1L);
                    int32_t *l_1116 = &l_1117;
                    int16_t l_1118 = 0L;
                    uint64_t l_1119 = 0xDE5739146402A4BCL;
                    uint16_t l_1120 = 0x2398L;
                    VECTOR(int32_t, 8) l_1121 = (VECTOR(int32_t, 8))(0x5282225FL, (VECTOR(int32_t, 4))(0x5282225FL, (VECTOR(int32_t, 2))(0x5282225FL, 0x39A8B029L), 0x39A8B029L), 0x39A8B029L, 0x5282225FL, 0x39A8B029L);
                    uint64_t l_1122 = 1UL;
                    VECTOR(int32_t, 4) l_1123 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x4DCF378FL), 0x4DCF378FL);
                    uint8_t l_1124 = 0UL;
                    struct S4 l_1125 = {0L,18446744073709551615UL,0x3840FC01L,6L,0x16B2CD8AL,255UL,0x27AD6476L};/* VOLATILE GLOBAL l_1125 */
                    struct S4 l_1126 = {0x5519EF8FL,18446744073709551607UL,-3L,0x5B98EF377AFD9643L,0x5C583389L,0UL,0L};/* VOLATILE GLOBAL l_1126 */
                    struct S4 l_1127 = {-6L,0x1FD0564BB1688628L,0x40C0E149L,0x05EC532E6FECA970L,0x6808C155L,0xCAL,0x67F0F3CAL};/* VOLATILE GLOBAL l_1127 */
                    int i;
                    l_1116 = (void*)0;
                    l_1127 = ((((l_1120 ^= (l_1119 &= (l_1118 ^= 3L))) , (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_1121.s16224036)).s6206737500776472)).s6597)).w , (((l_1122 , FAKE_DIVERGE(p_1301->local_1_offset, get_local_id(1), 10)) , 0UL) , ((VECTOR(int32_t, 2))(l_1123.wz)).even))) , l_1124) , (l_1125 , l_1126));
                }
                l_1129 = l_1128;
                for (l_1128.f5 = 6; (l_1128.f5 < 1); l_1128.f5--)
                { /* block id: 584 */
                    int32_t l_1132 = (-8L);
                    for (l_1132 = 0; (l_1132 < (-14)); l_1132 = safe_sub_func_uint32_t_u_u(l_1132, 4))
                    { /* block id: 587 */
                        int32_t l_1136 = 0x4596BA7CL;
                        int32_t *l_1135[3][4] = {{&l_1136,&l_1136,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136,&l_1136},{&l_1136,&l_1136,&l_1136,&l_1136}};
                        struct S3 l_1137[4] = {{0xC215734EL,-3L,{0UL,0UL},0x6B16L},{0xC215734EL,-3L,{0UL,0UL},0x6B16L},{0xC215734EL,-3L,{0UL,0UL},0x6B16L},{0xC215734EL,-3L,{0UL,0UL},0x6B16L}};
                        int32_t l_1138 = 7L;
                        int32_t l_1139 = (-4L);
                        uint16_t l_1140 = 0x5B65L;
                        uint32_t l_1141 = 0x14661242L;
                        struct S3 *l_1142 = &l_1137[0];
                        struct S3 *l_1143 = &l_1137[3];
                        struct S3 *l_1144 = &l_1137[3];
                        struct S3 *l_1145[5][2] = {{&l_1137[0],&l_1137[0]},{&l_1137[0],&l_1137[0]},{&l_1137[0],&l_1137[0]},{&l_1137[0],&l_1137[0]},{&l_1137[0],&l_1137[0]}};
                        int64_t l_1146[1];
                        int32_t l_1147[2];
                        uint8_t l_1148 = 4UL;
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_1146[i] = 0x6609839406EA63B1L;
                        for (i = 0; i < 2; i++)
                            l_1147[i] = 0L;
                        l_1135[2][0] = (void*)0;
                        l_1145[3][1] = (l_1142 = (l_1144 = (l_1137[0] , (l_1143 = (l_1138 , (((l_1140 = l_1139) , l_1141) , l_1142))))));
                        ++l_1148;
                    }
                }
                if ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(mad_hi(((VECTOR(uint32_t, 8))(0x7B4F92B4L, ((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 8))(((l_1152 &= l_1151) , 4294967295UL), l_1153, ((VECTOR(uint32_t, 4))(l_1154.zwwz)), 0UL, 4294967288UL)).s64, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(1UL, 1UL, 0x2DBBD76BL, 7UL)).yyyzzxxzwwxzyxzy)).sec))), ((VECTOR(uint32_t, 4))(l_1155.xxxy)), 0x9920E2F7L)).s60, ((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),uint32_t,((VECTOR(uint32_t, 16))(rhadd(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x5054FE9FL, 0x1D2D5D82L)))).xxyyxxxxxyxyyxyx, ((VECTOR(uint32_t, 4))(l_1156.s7304)).zzxwxzxwzxwyzxyy))), (uint32_t)l_1157, (uint32_t)(l_1155.x = (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(0xB20A7A42L, GROUP_DIVERGE(1, 1), 0x4F579B3BL, 4294967287UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_1158.s02)))), 0x95FFACD6L, ((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 2))(rhadd(((VECTOR(uint32_t, 8))(1UL, 0x034B7B88L, 0UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_1159.yzwzxxyw)), ((VECTOR(uint32_t, 8))(abs_diff(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_1160.s80384f106efe94b7)).sc5)))), ((VECTOR(uint32_t, 2))(l_1161.s43)), 4294967295UL, l_1162, 0UL, 4294967294UL)), ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_1163.yyxxxyyx)))).s55)).yxyx, ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 16))(l_1164.s4765046111407516)).even, ((VECTOR(uint32_t, 2))(l_1165.yy)).xxyyyyyx, ((VECTOR(uint32_t, 2))(l_1166.zw)).xyyyxxxy))), ((VECTOR(uint32_t, 2))(l_1167.s52)).yxyyyxyx))).even))).xyzyxwyy))).s7, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0xD09631E6L, 0x70AB03B4L)))).yxyy)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_1168.s76734115)).s53)), 4294967289UL)).s4fd9, ((VECTOR(uint32_t, 16))(l_1169.s7765423245776421)).s233a))).hi)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(4294967292UL, 0xE779222FL)))), 4294967295UL)).s50, ((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 8))(min(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))((l_1171 = (l_1167.s5 = l_1170)), ((VECTOR(uint32_t, 2))(7UL, 0xEB2DFED2L)), 0x3D7CB99CL)).hi)).yyxxxyxx, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(4294967292UL, 0x2C1DD7A0L)).xyxxxxyy)).s14)), 4294967291UL, 0xBDB7ADFAL)).xxxwxywy))).s73, ((VECTOR(uint32_t, 16))(4294967292UL, ((VECTOR(uint32_t, 8))(rotate(((VECTOR(uint32_t, 2))(l_1172.s03)).xxxxxyxy, ((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(l_1173.xx)), ((VECTOR(int32_t, 8))(l_1174[1], ((VECTOR(int32_t, 4))(1L, (-6L), 0x1BDB8E95L, 0x1FC8CCA0L)), l_1175, 0x35D5192FL, 0x44A1E293L)).s22))).yxxyyyxy, ((VECTOR(int32_t, 8))(0x3A25C161L)), ((VECTOR(int32_t, 8))((-1L)))))).s52))).yxxxxyxx))), l_1176, ((VECTOR(uint32_t, 4))(0x8AB184EAL)), 0xA7FD467EL, 1UL)).s2b)))))), ((VECTOR(uint32_t, 2))(0xB7A2811BL))))), 0x6109EB33L, ((VECTOR(uint32_t, 4))(0xAB5A2DBBL)), 0x32983BC2L, 0xD9CF959CL)).s75)).odd , l_1177[3][2][3]))))).s50, ((VECTOR(uint32_t, 2))(0xA7689DC9L))))).yyyyxyxy)).s5 , 1L))
                { /* block id: 601 */
                    struct S2 l_1178 = {0x9170L,18446744073709551613UL};/* VOLATILE GLOBAL l_1178 */
                    struct S1 l_1179[9][5][2] = {{{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}}},{{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}}},{{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}}},{{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}}},{{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}}},{{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}}},{{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}}},{{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}}},{{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}},{{18446744073709551606UL},{1UL}}}};
                    struct S1 l_1180 = {9UL};
                    uint32_t l_1181 = 0x66ED5E08L;
                    int8_t l_1184 = (-7L);
                    int i, j, k;
                    l_1180 = (l_1178 , l_1179[0][2][0]);
                    l_1181++;
                    l_1128.f6 |= (l_1184 &= ((VECTOR(int32_t, 2))(0x026DC39DL, 0x2281CB73L)).hi);
                    for (l_1184 = 0; (l_1184 <= 29); ++l_1184)
                    { /* block id: 608 */
                        uint16_t l_1187 = 0x5140L;
                        VECTOR(uint32_t, 8) l_1190 = (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x8A076E21L), 0x8A076E21L), 0x8A076E21L, 1UL, 0x8A076E21L);
                        int32_t l_1192 = (-1L);
                        int32_t *l_1191 = &l_1192;
                        int32_t *l_1193 = &l_1192;
                        int32_t *l_1194 = &l_1192;
                        int i;
                        l_1187++;
                        l_1194 = (l_1193 = (((VECTOR(uint32_t, 8))(l_1190.s51552200)).s1 , l_1191));
                        l_1113 &= 0x393287DFL;
                        l_1129.f0 = 0x0BBE04A8L;
                    }
                }
                else
                { /* block id: 615 */
                    struct S1 l_1195 = {1UL};
                    struct S1 l_1196 = {4UL};
                    struct S1 l_1197 = {9UL};
                    int16_t l_1198[6] = {(-4L),(-10L),(-4L),(-4L),(-10L),(-4L)};
                    uint64_t l_1199 = 4UL;
                    uint64_t l_1200 = 0x8DB89EE3342B8A48L;
                    int i;
                    l_1197 = (l_1196 = l_1195);
                    l_1171 &= l_1198[3];
                    l_1200 &= l_1199;
                }
            }
            for (l_1110 = (-20); (l_1110 >= 11); l_1110 = safe_add_func_uint8_t_u_u(l_1110, 7))
            { /* block id: 624 */
                VECTOR(int16_t, 4) l_1203 = (VECTOR(int16_t, 4))(0x24FEL, (VECTOR(int16_t, 2))(0x24FEL, 0x4BCFL), 0x4BCFL);
                VECTOR(uint16_t, 16) l_1204 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65530UL), 65530UL), 65530UL, 65535UL, 65530UL, (VECTOR(uint16_t, 2))(65535UL, 65530UL), (VECTOR(uint16_t, 2))(65535UL, 65530UL), 65535UL, 65530UL, 65535UL, 65530UL);
                VECTOR(int32_t, 4) l_1205 = (VECTOR(int32_t, 4))(0x263F2536L, (VECTOR(int32_t, 2))(0x263F2536L, (-10L)), (-10L));
                VECTOR(int32_t, 4) l_1206 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
                uint8_t l_1207 = 0x27L;
                uint8_t l_1208[1][6][6] = {{{0xDDL,0x60L,0UL,0x60L,0xDDL,0xDDL},{0xDDL,0x60L,0UL,0x60L,0xDDL,0xDDL},{0xDDL,0x60L,0UL,0x60L,0xDDL,0xDDL},{0xDDL,0x60L,0UL,0x60L,0xDDL,0xDDL},{0xDDL,0x60L,0UL,0x60L,0xDDL,0xDDL},{0xDDL,0x60L,0UL,0x60L,0xDDL,0xDDL}}};
                int64_t l_1209 = 1L;
                int i, j, k;
                l_1207 &= ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(l_1203.zxyxzzzzzwwxyzwz)).s529a, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(l_1204.sb5)).yxyyyyyy)).lo))).odd, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_1205.xyxxxwxyywwwyyyz)).even)).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_1206.yw)).yyxx))))).yzzzwyyzxzzzywxz)).s68, ((VECTOR(int32_t, 2))(0x04754FB0L, (-1L))))))))).hi;
                l_1209 = l_1208[0][4][4];
            }
        }
        else
        { /* block id: 628 */
            int32_t l_1210 = (-3L);
            int32_t l_1211 = 0x339F7284L;
            uint16_t l_1212 = 65535UL;
            int64_t l_1215 = 3L;
            l_1212--;
            if (l_1215)
            { /* block id: 630 */
                uint16_t l_1216 = 1UL;
                if (l_1216)
                { /* block id: 631 */
                    int8_t l_1217[6] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
                    int32_t l_1219[10][3][4] = {{{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L}},{{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L}},{{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L}},{{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L}},{{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L}},{{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L}},{{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L}},{{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L}},{{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L}},{{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L},{0x6012E756L,1L,0x154DD881L,0x1CCD33D3L}}};
                    int32_t *l_1218[8][6][5] = {{{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]}},{{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]}},{{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]}},{{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]}},{{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]}},{{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]}},{{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]}},{{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]},{&l_1219[9][0][3],&l_1219[0][1][3],&l_1219[4][1][2],(void*)0,&l_1219[0][1][3]}}};
                    int16_t l_1220 = 3L;
                    VECTOR(int8_t, 16) l_1221 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 7L), 7L), 7L, (-1L), 7L, (VECTOR(int8_t, 2))((-1L), 7L), (VECTOR(int8_t, 2))((-1L), 7L), (-1L), 7L, (-1L), 7L);
                    int32_t l_1222[6] = {(-3L),0x0E058E50L,(-3L),(-3L),0x0E058E50L,(-3L)};
                    int8_t l_1223[10][7][3] = {{{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL}},{{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL}},{{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL}},{{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL}},{{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL}},{{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL}},{{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL}},{{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL}},{{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL}},{{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL},{0x70L,0x06L,0x7FL}}};
                    int i, j, k;
                    l_1211 = l_1217[4];
                    l_1218[6][2][2] = (void*)0;
                    l_1222[0] = (l_1211 = (l_1221.s0 &= l_1220));
                    l_1211 ^= (l_1223[3][6][1] , (-7L));
                }
                else
                { /* block id: 638 */
                    uint32_t l_1224 = 0x51D12EDEL;
                    int32_t l_1225[5][8] = {{1L,0x1D7ECD41L,0x1D7ECD41L,1L,0x1E28AED7L,0x60681009L,0x60681009L,0x1E28AED7L},{1L,0x1D7ECD41L,0x1D7ECD41L,1L,0x1E28AED7L,0x60681009L,0x60681009L,0x1E28AED7L},{1L,0x1D7ECD41L,0x1D7ECD41L,1L,0x1E28AED7L,0x60681009L,0x60681009L,0x1E28AED7L},{1L,0x1D7ECD41L,0x1D7ECD41L,1L,0x1E28AED7L,0x60681009L,0x60681009L,0x1E28AED7L},{1L,0x1D7ECD41L,0x1D7ECD41L,1L,0x1E28AED7L,0x60681009L,0x60681009L,0x1E28AED7L}};
                    uint16_t l_1226 = 0xD038L;
                    int i, j;
                    if ((l_1226 = (l_1225[4][5] = l_1224)))
                    { /* block id: 641 */
                        int32_t l_1228 = 0x785048BDL;
                        int32_t *l_1227[10][4] = {{(void*)0,&l_1228,&l_1228,&l_1228},{(void*)0,&l_1228,&l_1228,&l_1228},{(void*)0,&l_1228,&l_1228,&l_1228},{(void*)0,&l_1228,&l_1228,&l_1228},{(void*)0,&l_1228,&l_1228,&l_1228},{(void*)0,&l_1228,&l_1228,&l_1228},{(void*)0,&l_1228,&l_1228,&l_1228},{(void*)0,&l_1228,&l_1228,&l_1228},{(void*)0,&l_1228,&l_1228,&l_1228},{(void*)0,&l_1228,&l_1228,&l_1228}};
                        int32_t *l_1229[8][6][5] = {{{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228}},{{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228}},{{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228}},{{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228}},{{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228}},{{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228}},{{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228}},{{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228},{(void*)0,&l_1228,&l_1228,(void*)0,&l_1228}}};
                        int16_t l_1230 = 0x0FD6L;
                        VECTOR(uint8_t, 8) l_1231 = (VECTOR(uint8_t, 8))(0x67L, (VECTOR(uint8_t, 4))(0x67L, (VECTOR(uint8_t, 2))(0x67L, 250UL), 250UL), 250UL, 0x67L, 250UL);
                        int32_t *l_1232 = (void*)0;
                        int32_t *l_1233 = &l_1228;
                        int32_t *l_1234[2][5][5] = {{{&l_1228,&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228,&l_1228}},{{&l_1228,&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228,&l_1228}}};
                        int i, j, k;
                        l_1211 |= ((VECTOR(int32_t, 2))((-1L), 0x4EE1B304L)).odd;
                        l_1229[6][2][0] = (((VECTOR(int8_t, 2))(4L, 1L)).lo , l_1227[7][1]);
                        l_1211 = (l_1231.s0 &= l_1230);
                        l_1234[0][1][3] = (GROUP_DIVERGE(0, 1) , (l_1233 = l_1232));
                    }
                    else
                    { /* block id: 648 */
                        uint64_t l_1235 = 0xA9C0F9BC284948C2L;
                        --l_1235;
                    }
                }
            }
            else
            { /* block id: 652 */
                struct S1 *l_1238 = (void*)0;
                struct S1 l_1240 = {0xE2279E89C273AAADL};
                struct S1 *l_1239 = &l_1240;
                int32_t l_1247 = 0x4E76579BL;
                int32_t *l_1248 = (void*)0;
                uint64_t l_1249 = 0x1976BF77C9BF115BL;
                int32_t *l_1250 = &l_1247;
                l_1239 = (l_1238 = (void*)0);
                for (l_1240.f0 = 24; (l_1240.f0 != 48); ++l_1240.f0)
                { /* block id: 657 */
                    struct S2 l_1245 = {0UL,0x3E04982A4EF8E6C8L};/* VOLATILE GLOBAL l_1245 */
                    struct S2 *l_1244 = &l_1245;
                    struct S2 **l_1243 = &l_1244;
                    struct S2 **l_1246 = &l_1244;
                    l_1246 = l_1243;
                }
                l_1248 = (l_1247 , (void*)0);
                l_1250 = (l_1249 , (void*)0);
            }
            for (l_1212 = 0; (l_1212 < 12); ++l_1212)
            { /* block id: 665 */
                uint16_t l_1253 = 0x9966L;
                l_1211 |= l_1253;
            }
        }
        if (((VECTOR(int32_t, 4))(l_1254, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 2))(0x6773D19EL, 0x3F6891FFL)).yxyxxxyyxyyxxyyx, ((VECTOR(int32_t, 8))(l_1255.xxyyyyxy)).s4451140111222771))).sc, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(l_1256.x, 0x620C34EEL, 0x58A72BA2L, 0x0AC93548L)), ((VECTOR(int32_t, 4))(l_1257.yxxy)), ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(0x78F505D4L, ((VECTOR(int32_t, 2))(l_1258.xx)), 0x451A3026L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_1259.yy)))))).xyyx)))))).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x5EE440B2L, 0x109C6FA0L)), 6L, (-2L))), (l_1262 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((l_1261 = l_1260), (-1L), 0x1C3DFC9EL, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 5L)), 3L, 2L)), 3L)).s7410754132172320)).s7), ((VECTOR(int32_t, 2))(0x2715C65FL, 0x70A318D9L)), (-8L))).s74, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), (-1L))), 0x4C559ED4L, 9L)).lo))), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(l_1263.xxxyyxxxxyxxxyyy)).sea, ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 4))((-3L), 4L, 0x1C7D2921L, 7L)), ((VECTOR(int32_t, 4))(l_1264.yyxx))))).zwxzxxxzyxxzzzyy)))).odd, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_1265.s95c0)))))).xyzzzwwy))).s42, ((VECTOR(int32_t, 16))(l_1266.se38ca4676376edff)).s86)))))), ((VECTOR(int32_t, 4))(l_1267.xxxx)).even))))), (-9L), ((VECTOR(int32_t, 8))(l_1268.s0c6bc491)), 1L, 0x351D69EAL, 0x36F4AB40L)).s1, 0x197B6AB4L, 1L)).zzxzzxzx, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(l_1269.xyxx)).xyyzzyyw, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))((((VECTOR(int8_t, 4))(l_1270.yzyy)).x , ((VECTOR(uint16_t, 2))(l_1271.se9)).hi), ((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 8))(l_1272.s75027373)).s10, ((VECTOR(uint16_t, 8))(l_1273.yzzzwyww)).s33))), 0x9E8DL)))).wzyzxyyx))).s31, ((VECTOR(int32_t, 16))(l_1274.xyyxyyyxxyxyxxyx)).sc7, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 8))(1L, ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 8))(0x74220441L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0x3681E27AL, (l_1275 , l_1276), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x756FF05BL, (-5L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(l_1277.xyxy)), ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x40L, 0x5BL)).yyxyyxxy)))).s12, ((VECTOR(uint8_t, 4))(l_1278.se636)).lo))).xxxyyyyxxxxxyxxx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_1279.s070f)).xxyyywzz)).s5400072302152740))).s9d3f))).ywywzyww)).odd)), (l_1281 = l_1280), 0x35A57594L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(l_1282.xzwywwxxzwxwzzyz)).even, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(0x1F6077A8L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(l_1283.zyxy)).even, ((VECTOR(int32_t, 4))(l_1284.xxxy)).lo))), 0x5497221AL)).lo, ((VECTOR(int32_t, 8))(l_1285.s17101717)).s70))).yyyyyxxyyxyyyyyy)).odd))).s4, ((VECTOR(int32_t, 2))((-1L), 0x5DC5561DL)), (l_1285.s2 &= (l_1286 , (l_1287 , (l_1288 , 0x27916E41L)))), l_1289, l_1290, 1L, (-2L))).s72, ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 2))(0x6DFBC369L))))), 0x03A9C0CBL, 0x05332812L)))).zxwywxxz)))).sf59a)), (-1L), 0x02446C0DL)).lo)).lo)).yyxx)), l_1291, (-8L), 0x3493BC58L)).s55, (int32_t)l_1292))), ((VECTOR(int32_t, 2))(0x1DD4DBF5L)), (-1L), 0x350A5D80L, 0x15C9577BL))))).s12))).yyxyxxxy))).s47, ((VECTOR(int32_t, 2))((-1L)))))), ((VECTOR(int32_t, 2))(1L))))), 0x45BB45AAL)).y)
        { /* block id: 673 */
            uint64_t l_1293 = 0xC4F97C0C22986920L;
            --l_1293;
        }
        else
        { /* block id: 675 */
            int32_t l_1296 = 1L;
            VECTOR(int64_t, 2) l_1297 = (VECTOR(int64_t, 2))(0x36A04FB7872870C9L, 1L);
            VECTOR(int32_t, 8) l_1298 = (VECTOR(int32_t, 8))(0x34C298E6L, (VECTOR(int32_t, 4))(0x34C298E6L, (VECTOR(int32_t, 2))(0x34C298E6L, (-1L)), (-1L)), (-1L), 0x34C298E6L, (-1L));
            int i;
            l_1268.sa = l_1296;
            l_1265.s5 = (((VECTOR(int64_t, 8))(l_1297.xxyxxxyx)).s2 , ((VECTOR(int32_t, 2))(l_1298.s17)).hi);
        }
        for (l_1282.z = (-26); (l_1282.z < (-23)); l_1282.z = safe_add_func_uint16_t_u_u(l_1282.z, 7))
        { /* block id: 681 */
            l_1277.y &= 0x04F42499L;
        }
        unsigned int result = 0;
        result += l_1109;
        result += l_1254;
        result += l_1255.y;
        result += l_1255.x;
        result += l_1256.w;
        result += l_1256.z;
        result += l_1256.y;
        result += l_1256.x;
        result += l_1257.y;
        result += l_1257.x;
        result += l_1258.y;
        result += l_1258.x;
        result += l_1259.w;
        result += l_1259.z;
        result += l_1259.y;
        result += l_1259.x;
        result += l_1260;
        result += l_1261;
        result += l_1262;
        result += l_1263.y;
        result += l_1263.x;
        result += l_1264.y;
        result += l_1264.x;
        result += l_1265.sf;
        result += l_1265.se;
        result += l_1265.sd;
        result += l_1265.sc;
        result += l_1265.sb;
        result += l_1265.sa;
        result += l_1265.s9;
        result += l_1265.s8;
        result += l_1265.s7;
        result += l_1265.s6;
        result += l_1265.s5;
        result += l_1265.s4;
        result += l_1265.s3;
        result += l_1265.s2;
        result += l_1265.s1;
        result += l_1265.s0;
        result += l_1266.sf;
        result += l_1266.se;
        result += l_1266.sd;
        result += l_1266.sc;
        result += l_1266.sb;
        result += l_1266.sa;
        result += l_1266.s9;
        result += l_1266.s8;
        result += l_1266.s7;
        result += l_1266.s6;
        result += l_1266.s5;
        result += l_1266.s4;
        result += l_1266.s3;
        result += l_1266.s2;
        result += l_1266.s1;
        result += l_1266.s0;
        result += l_1267.y;
        result += l_1267.x;
        result += l_1268.sf;
        result += l_1268.se;
        result += l_1268.sd;
        result += l_1268.sc;
        result += l_1268.sb;
        result += l_1268.sa;
        result += l_1268.s9;
        result += l_1268.s8;
        result += l_1268.s7;
        result += l_1268.s6;
        result += l_1268.s5;
        result += l_1268.s4;
        result += l_1268.s3;
        result += l_1268.s2;
        result += l_1268.s1;
        result += l_1268.s0;
        result += l_1269.y;
        result += l_1269.x;
        result += l_1270.w;
        result += l_1270.z;
        result += l_1270.y;
        result += l_1270.x;
        result += l_1271.sf;
        result += l_1271.se;
        result += l_1271.sd;
        result += l_1271.sc;
        result += l_1271.sb;
        result += l_1271.sa;
        result += l_1271.s9;
        result += l_1271.s8;
        result += l_1271.s7;
        result += l_1271.s6;
        result += l_1271.s5;
        result += l_1271.s4;
        result += l_1271.s3;
        result += l_1271.s2;
        result += l_1271.s1;
        result += l_1271.s0;
        result += l_1272.s7;
        result += l_1272.s6;
        result += l_1272.s5;
        result += l_1272.s4;
        result += l_1272.s3;
        result += l_1272.s2;
        result += l_1272.s1;
        result += l_1272.s0;
        result += l_1273.w;
        result += l_1273.z;
        result += l_1273.y;
        result += l_1273.x;
        result += l_1274.y;
        result += l_1274.x;
        result += l_1275.f0;
        result += l_1275.f1;
        result += l_1275.f2;
        result += l_1275.f3;
        result += l_1275.f4;
        result += l_1275.f5;
        result += l_1275.f6;
        result += l_1276;
        result += l_1277.w;
        result += l_1277.z;
        result += l_1277.y;
        result += l_1277.x;
        result += l_1278.sf;
        result += l_1278.se;
        result += l_1278.sd;
        result += l_1278.sc;
        result += l_1278.sb;
        result += l_1278.sa;
        result += l_1278.s9;
        result += l_1278.s8;
        result += l_1278.s7;
        result += l_1278.s6;
        result += l_1278.s5;
        result += l_1278.s4;
        result += l_1278.s3;
        result += l_1278.s2;
        result += l_1278.s1;
        result += l_1278.s0;
        result += l_1279.sf;
        result += l_1279.se;
        result += l_1279.sd;
        result += l_1279.sc;
        result += l_1279.sb;
        result += l_1279.sa;
        result += l_1279.s9;
        result += l_1279.s8;
        result += l_1279.s7;
        result += l_1279.s6;
        result += l_1279.s5;
        result += l_1279.s4;
        result += l_1279.s3;
        result += l_1279.s2;
        result += l_1279.s1;
        result += l_1279.s0;
        result += l_1280;
        result += l_1281;
        result += l_1282.w;
        result += l_1282.z;
        result += l_1282.y;
        result += l_1282.x;
        result += l_1283.w;
        result += l_1283.z;
        result += l_1283.y;
        result += l_1283.x;
        result += l_1284.y;
        result += l_1284.x;
        result += l_1285.s7;
        result += l_1285.s6;
        result += l_1285.s5;
        result += l_1285.s4;
        result += l_1285.s3;
        result += l_1285.s2;
        result += l_1285.s1;
        result += l_1285.s0;
        result += l_1286;
        result += l_1287;
        result += l_1288;
        result += l_1289;
        result += l_1290;
        result += l_1291;
        result += l_1292;
        atomic_add(&p_1301->g_special_values[82 * get_linear_group_id() + 79], result);
    }
    else
    { /* block id: 684 */
        (1 + 1);
    }
    return l_4[4][3][5];
}


/* ------------------------------------------ */
/* 
 * reads : p_1301->l_comm_values p_1301->g_16 p_1301->g_1056 p_1301->g_920 p_1301->g_197 p_1301->g_1092 p_1301->g_1098 p_1301->g_1100 p_1301->g_1103 p_1301->g_1105
 * writes: p_1301->g_11 p_1301->g_16 p_1301->g_1056 p_1301->g_1102 p_1301->g_1104
 */
int32_t * func_2(int64_t  p_3, struct S5 * p_1301)
{ /* block id: 5 */
    uint8_t l_9 = 1UL;
    int32_t l_12 = 0x480B0DEBL;
    int32_t l_1064 = 0x53079099L;
    int32_t l_1070 = (-1L);
    int32_t l_1071 = 0x2FC38B86L;
    int32_t l_1073[8][3][3];
    uint64_t l_1082 = 18446744073709551611UL;
    int16_t **l_1094[7][8] = {{&p_1301->g_1093,&p_1301->g_1093,(void*)0,(void*)0,(void*)0,&p_1301->g_1093,&p_1301->g_1093,&p_1301->g_1093},{&p_1301->g_1093,&p_1301->g_1093,(void*)0,(void*)0,(void*)0,&p_1301->g_1093,&p_1301->g_1093,&p_1301->g_1093},{&p_1301->g_1093,&p_1301->g_1093,(void*)0,(void*)0,(void*)0,&p_1301->g_1093,&p_1301->g_1093,&p_1301->g_1093},{&p_1301->g_1093,&p_1301->g_1093,(void*)0,(void*)0,(void*)0,&p_1301->g_1093,&p_1301->g_1093,&p_1301->g_1093},{&p_1301->g_1093,&p_1301->g_1093,(void*)0,(void*)0,(void*)0,&p_1301->g_1093,&p_1301->g_1093,&p_1301->g_1093},{&p_1301->g_1093,&p_1301->g_1093,(void*)0,(void*)0,(void*)0,&p_1301->g_1093,&p_1301->g_1093,&p_1301->g_1093},{&p_1301->g_1093,&p_1301->g_1093,(void*)0,(void*)0,(void*)0,&p_1301->g_1093,&p_1301->g_1093,&p_1301->g_1093}};
    int i, j, k;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                l_1073[i][j][k] = 9L;
        }
    }
    for (p_3 = 0; (p_3 != 1); p_3 = safe_add_func_uint8_t_u_u(p_3, 7))
    { /* block id: 8 */
        int32_t *l_10 = (void*)0;
        int32_t *l_13 = (void*)0;
        int32_t l_1065 = 0x421E820EL;
        int32_t l_1069 = 0x1DE22C48L;
        int32_t l_1074 = 4L;
        int32_t l_1075 = 0x47D3CAE4L;
        int32_t l_1078 = (-10L);
        int32_t l_1079 = 6L;
        int32_t l_1080 = 0x4C4C6452L;
        int32_t l_1081 = 1L;
        uint16_t ***l_1089 = &p_1301->g_290;
        uint16_t *l_1095 = &p_1301->g_353.f3;
        struct S1 l_1099 = {1UL};
        if ((p_1301->g_11.y = (l_12 |= (safe_div_func_uint64_t_u_u(FAKE_DIVERGE(p_1301->local_0_offset, get_local_id(0), 10), l_9)))))
        { /* block id: 11 */
            int32_t l_14 = 0L;
            uint8_t *l_15[3][6] = {{&l_9,&l_9,&l_9,&l_9,(void*)0,&l_9},{&l_9,&l_9,&l_9,&l_9,(void*)0,&l_9},{&l_9,&l_9,&l_9,&l_9,(void*)0,&l_9}};
            int8_t *l_932 = (void*)0;
            int8_t *l_933 = &p_1301->g_632;
            uint8_t *l_1055[4];
            uint8_t **l_1054 = &l_1055[3];
            int32_t l_1066 = 0L;
            int32_t l_1067 = (-9L);
            int32_t l_1068 = 0L;
            int32_t l_1072 = (-1L);
            int32_t l_1076 = 0x023BA467L;
            int32_t l_1077 = (-1L);
            uint16_t ****l_1090 = (void*)0;
            uint16_t ****l_1091 = &l_1089;
            int i, j;
            for (i = 0; i < 4; i++)
                l_1055[i] = &l_9;
            if (((p_1301->g_1056 ^= (l_14 , ((p_1301->g_16 &= p_1301->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1301->tid, 17))]) >= ((FAKE_DIVERGE(p_1301->local_2_offset, get_local_id(2), 10) , (safe_add_func_uint16_t_u_u(p_3, ((VECTOR(uint16_t, 8))(0xA0F9L, (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_1301->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1301->tid, 17))], (safe_rshift_func_uint16_t_u_u((l_15[2][0] != ((*l_1054) = func_25(func_28(func_30((safe_rshift_func_int8_t_s_u(((*l_933) = (p_1301->g_comm_values[p_1301->tid] > (func_37(p_1301->g_39, p_1301) < p_1301->g_812.f3))), p_1301->g_721.f3)), l_12, p_1301->g_934, p_1301->g_532.s1, p_1301), p_1301), l_15[2][0], p_1301))), 6)))), 1UL)), ((VECTOR(uint16_t, 4))(65526UL)), 9UL, 65535UL)).s1))) ^ p_3)))) || (-1L)))
            { /* block id: 544 */
                int32_t *l_1057 = (void*)0;
                int32_t *l_1058 = &p_1301->g_721.f4;
                int32_t *l_1059 = &p_1301->g_570.f4;
                int32_t l_1060[4];
                int32_t *l_1061 = &p_1301->g_473.f4;
                int32_t *l_1062 = &p_1301->g_721.f4;
                int32_t *l_1063[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int i;
                for (i = 0; i < 4; i++)
                    l_1060[i] = 5L;
                if (p_3)
                    break;
                --l_1082;
            }
            else
            { /* block id: 547 */
                if (p_3)
                    break;
            }
            (*p_1301->g_1098) = ((l_1073[7][0][1] < 0x34E815B82D5726C9L) || (((*p_1301->g_920) , ((((safe_add_func_uint64_t_u_u((((safe_add_func_uint64_t_u_u((&p_1301->g_290 == ((*l_1091) = l_1089)), (0x7491B9EA771C6838L <= FAKE_DIVERGE(p_1301->local_1_offset, get_local_id(1), 10)))) & (+l_1077)) , (p_1301->g_1092 == l_1094[4][6])), 2L)) < p_3) , (void*)0) == l_1095)) & p_3));
        }
        else
        { /* block id: 552 */
            volatile struct S2 *l_1101[9] = {&p_1301->g_600.f2,&p_1301->g_600.f2,&p_1301->g_600.f2,&p_1301->g_600.f2,&p_1301->g_600.f2,&p_1301->g_600.f2,&p_1301->g_600.f2,&p_1301->g_600.f2,&p_1301->g_600.f2};
            int i;
            p_1301->g_1102[2] = (l_1099 , p_1301->g_1100[5]);
        }
        p_1301->g_1104 = p_1301->g_1103;
    }
    return p_1301->g_1105;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t * func_25(int32_t  p_26, uint8_t * p_27, struct S5 * p_1301)
{ /* block id: 539 */
    uint8_t l_1051 = 0UL;
    l_1051++;
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_1301->g_709
 * writes: p_1301->g_39
 */
int32_t  func_28(uint8_t  p_29, struct S5 * p_1301)
{ /* block id: 454 */
    uint16_t l_942 = 0x15C0L;
    int32_t l_1049 = 1L;
    if (l_942)
    { /* block id: 455 */
        VECTOR(uint32_t, 16) l_1048 = (VECTOR(uint32_t, 16))(0x063B6978L, (VECTOR(uint32_t, 4))(0x063B6978L, (VECTOR(uint32_t, 2))(0x063B6978L, 0x00D61CD9L), 0x00D61CD9L), 0x00D61CD9L, 0x063B6978L, 0x00D61CD9L, (VECTOR(uint32_t, 2))(0x063B6978L, 0x00D61CD9L), (VECTOR(uint32_t, 2))(0x063B6978L, 0x00D61CD9L), 0x063B6978L, 0x00D61CD9L, 0x063B6978L, 0x00D61CD9L);
        int i, j;
        if ((atomic_inc(&p_1301->l_atomic_input[74]) == 7))
        { /* block id: 457 */
            uint16_t l_943 = 0xE47CL;
            int8_t l_960[4];
            uint16_t l_961 = 0x6EC2L;
            int32_t l_962 = 1L;
            int32_t l_963 = 0L;
            int8_t l_964 = 0x6CL;
            uint64_t l_965 = 1UL;
            int i;
            for (i = 0; i < 4; i++)
                l_960[i] = 0L;
            if (l_943)
            { /* block id: 458 */
                int32_t *l_944 = (void*)0;
                int32_t l_946 = 0x69EAF04CL;
                int32_t *l_945 = &l_946;
                uint64_t l_947 = 18446744073709551615UL;
                int8_t l_948 = (-1L);
                l_945 = l_944;
                l_948 ^= (l_947 = 0x6D25B472L);
            }
            else
            { /* block id: 462 */
                struct S3 l_949 = {4UL,0x5560CB9CL,{1UL,0xBC5B33756B45089BL},65535UL};/* VOLATILE GLOBAL l_949 */
                struct S3 l_950 = {4294967295UL,0x643E6CDFL,{0x8DA2L,0xDBA8C2DDFF3C684BL},9UL};/* VOLATILE GLOBAL l_950 */
                int16_t l_951 = 0L;
                int16_t l_952 = 0x0EBEL;
                int16_t l_953 = 6L;
                int32_t l_954 = 0x56DE319FL;
                int32_t l_955 = 3L;
                int32_t l_956 = 0x7352FFD2L;
                uint16_t l_957 = 0xC53EL;
                l_950 = l_949;
                l_957--;
            }
            l_961 |= l_960[3];
            l_964 = (l_963 = l_962);
            if (l_965)
            { /* block id: 469 */
                int8_t l_966 = 1L;
                uint32_t l_967 = 4294967292UL;
                int8_t l_994 = 0L;
                VECTOR(int32_t, 16) l_1025 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x5FA0A946L), 0x5FA0A946L), 0x5FA0A946L, (-1L), 0x5FA0A946L, (VECTOR(int32_t, 2))((-1L), 0x5FA0A946L), (VECTOR(int32_t, 2))((-1L), 0x5FA0A946L), (-1L), 0x5FA0A946L, (-1L), 0x5FA0A946L);
                VECTOR(int32_t, 2) l_1026 = (VECTOR(int32_t, 2))(0x726A4AEAL, 0x7D5CDB0DL);
                VECTOR(int32_t, 16) l_1027 = (VECTOR(int32_t, 16))(0x1355B306L, (VECTOR(int32_t, 4))(0x1355B306L, (VECTOR(int32_t, 2))(0x1355B306L, 0x6BF8C842L), 0x6BF8C842L), 0x6BF8C842L, 0x1355B306L, 0x6BF8C842L, (VECTOR(int32_t, 2))(0x1355B306L, 0x6BF8C842L), (VECTOR(int32_t, 2))(0x1355B306L, 0x6BF8C842L), 0x1355B306L, 0x6BF8C842L, 0x1355B306L, 0x6BF8C842L);
                int16_t l_1028[5] = {0x2851L,0x2851L,0x2851L,0x2851L,0x2851L};
                uint16_t l_1029 = 0x3C5EL;
                uint16_t l_1030 = 1UL;
                int i;
                --l_967;
                for (l_966 = 21; (l_966 <= 9); --l_966)
                { /* block id: 473 */
                    VECTOR(int64_t, 4) l_972 = (VECTOR(int64_t, 4))((-9L), (VECTOR(int64_t, 2))((-9L), 0x25D4B8780C5CB915L), 0x25D4B8780C5CB915L);
                    uint32_t l_973 = 0x0E1CA54EL;
                    uint8_t l_974 = 5UL;
                    uint16_t l_975 = 4UL;
                    int32_t l_985 = 0x5ACFF76DL;
                    int i;
                    if ((((VECTOR(int64_t, 2))(l_972.wy)).even , ((l_962 |= (l_963 = (l_973 , l_974))) , l_975)))
                    { /* block id: 476 */
                        uint8_t l_976 = 0x0DL;
                        struct S0 l_977 = {0x7A4D9B00L,8UL,4294967295UL,0x047E1A86L,-6L};/* VOLATILE GLOBAL l_977 */
                        struct S0 l_978 = {0x590D5C84L,0x66B84C73L,0xE11D5A3BL,4294967287UL,1L};/* VOLATILE GLOBAL l_978 */
                        uint16_t l_979 = 0x4A9BL;
                        l_976 = (-1L);
                        l_978 = l_977;
                        ++l_979;
                    }
                    else
                    { /* block id: 480 */
                        int32_t l_982 = 0x010ED79AL;
                        VECTOR(uint32_t, 16) l_983 = (VECTOR(uint32_t, 16))(0xBC32ABB1L, (VECTOR(uint32_t, 4))(0xBC32ABB1L, (VECTOR(uint32_t, 2))(0xBC32ABB1L, 0x8724CDDBL), 0x8724CDDBL), 0x8724CDDBL, 0xBC32ABB1L, 0x8724CDDBL, (VECTOR(uint32_t, 2))(0xBC32ABB1L, 0x8724CDDBL), (VECTOR(uint32_t, 2))(0xBC32ABB1L, 0x8724CDDBL), 0xBC32ABB1L, 0x8724CDDBL, 0xBC32ABB1L, 0x8724CDDBL);
                        uint32_t l_984 = 0xFA67E999L;
                        int i;
                        l_982 |= 0x377EAF54L;
                        l_984 &= ((VECTOR(int32_t, 4))(l_983.se, 0x1D3D9B19L, 0x783CEB49L, 4L)).z;
                    }
                    if (l_985)
                    { /* block id: 484 */
                        int8_t l_986 = (-1L);
                        l_985 &= l_986;
                    }
                    else
                    { /* block id: 486 */
                        VECTOR(int32_t, 4) l_987 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 6L), 6L);
                        int32_t *l_988 = (void*)0;
                        int32_t *l_989 = (void*)0;
                        uint32_t l_990 = 0x66042AFCL;
                        int32_t *l_993 = (void*)0;
                        int i;
                        l_985 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_987.wxzyywzz)).s7643365202124461)).s2;
                        l_989 = l_988;
                        --l_990;
                        l_993 = (void*)0;
                    }
                }
                if (l_994)
                { /* block id: 493 */
                    int32_t l_995[9] = {(-1L),0x4382EBC5L,(-1L),(-1L),0x4382EBC5L,(-1L),(-1L),0x4382EBC5L,(-1L)};
                    int i;
                    for (l_995[5] = 0; (l_995[5] == 2); l_995[5]++)
                    { /* block id: 496 */
                        VECTOR(int32_t, 16) l_998 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x48E6412CL), 0x48E6412CL), 0x48E6412CL, (-1L), 0x48E6412CL, (VECTOR(int32_t, 2))((-1L), 0x48E6412CL), (VECTOR(int32_t, 2))((-1L), 0x48E6412CL), (-1L), 0x48E6412CL, (-1L), 0x48E6412CL);
                        int32_t l_999 = 0x2A8BC494L;
                        int16_t *l_1001 = (void*)0;
                        int16_t **l_1000 = &l_1001;
                        int i;
                        l_1000 = (((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_998.sfd0f)))))).xwwyxyxyyxyxwzzz, (int32_t)l_999))).s2 , (void*)0);
                    }
                }
                else
                { /* block id: 499 */
                    int16_t l_1002[8] = {0x3E6EL,0x5CE7L,0x3E6EL,0x3E6EL,0x5CE7L,0x3E6EL,0x3E6EL,0x5CE7L};
                    uint16_t l_1003 = 0x759BL;
                    uint16_t l_1004 = 65535UL;
                    int i;
                    if ((l_1002[6] , (l_1004 &= ((VECTOR(int32_t, 4))((-1L), l_1003, (-6L), 0x279FAE91L)).x)))
                    { /* block id: 501 */
                        VECTOR(int32_t, 4) l_1006 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x6834EE72L), 0x6834EE72L);
                        int32_t *l_1005[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        VECTOR(int16_t, 8) l_1007 = (VECTOR(int16_t, 8))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, (-10L)), (-10L)), (-10L), 7L, (-10L));
                        VECTOR(uint16_t, 8) l_1008 = (VECTOR(uint16_t, 8))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL), 0UL, 1UL, 0UL);
                        uint32_t l_1009 = 0xC14F4ACEL;
                        int i;
                        l_1005[7] = (void*)0;
                        l_1009 ^= ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(l_1007.s4220262250615406)).s98)).yyxy, ((VECTOR(uint16_t, 8))(65535UL, ((VECTOR(uint16_t, 4))(l_1008.s0264)), ((VECTOR(uint16_t, 2))(0x68B9L, 9UL)), 3UL)).hi))).y;
                    }
                    else
                    { /* block id: 504 */
                        uint32_t l_1010 = 0x4770B6FBL;
                        uint32_t l_1011 = 0x0F5DED85L;
                        int64_t l_1012 = 0x3DF772153CCFAA31L;
                        int16_t l_1013 = (-2L);
                        struct S4 l_1014 = {0x41826366L,0UL,0x6CB02CD5L,-5L,0x9DBB1374L,0UL,-8L};/* VOLATILE GLOBAL l_1014 */
                        struct S3 l_1017 = {0xD0BF5C82L,-5L,{9UL,8UL},0x76EDL};/* VOLATILE GLOBAL l_1017 */
                        struct S4 *l_1018 = &l_1014;
                        struct S4 *l_1019 = &l_1014;
                        struct S4 *l_1020[1];
                        VECTOR(int8_t, 8) l_1021 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L));
                        int32_t *l_1022[2];
                        int32_t *l_1023 = (void*)0;
                        int32_t *l_1024 = &l_1014.f2;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1020[i] = (void*)0;
                        for (i = 0; i < 2; i++)
                            l_1022[i] = &l_1017.f1;
                        l_1012 = (l_1011 = l_1010);
                        l_1020[0] = (l_1019 = ((((l_1013 , l_1014) , (--l_1010)) , l_1017) , (l_1018 = (void*)0)));
                        l_1024 = (((VECTOR(int8_t, 8))(l_1021.s63502375)).s7 , (l_1023 = l_1022[1]));
                    }
                }
                l_1030 = (l_1029 ^= (((VECTOR(int32_t, 8))(0x7FCFC0F1L, ((VECTOR(int32_t, 2))(l_1025.sb9)), (-10L), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(l_1026.yxyxyxxxxxyxyyyy)).s64, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_1027.s1d8c14a0f3e8ffcb)).s8d83)).yzyxwzwx)).s31))), 0x339B6290L, 0x35B5289DL)).s0 , l_1028[1]));
            }
            else
            { /* block id: 517 */
                int16_t l_1031 = 0x6BE1L;
                uint64_t l_1032 = 9UL;
                int32_t *l_1033 = (void*)0;
                int32_t l_1035 = 8L;
                int32_t *l_1034[1];
                int32_t *l_1036 = &l_1035;
                int32_t *l_1037 = (void*)0;
                struct S2 *l_1038 = (void*)0;
                int64_t l_1039 = 0x1A6CBE7A5E9AAA76L;
                int32_t l_1040 = 0x7375F919L;
                VECTOR(int32_t, 8) l_1041 = (VECTOR(int32_t, 8))(0x13C2A2FAL, (VECTOR(int32_t, 4))(0x13C2A2FAL, (VECTOR(int32_t, 2))(0x13C2A2FAL, 0x65A19F84L), 0x65A19F84L), 0x65A19F84L, 0x13C2A2FAL, 0x65A19F84L);
                uint64_t l_1042 = 0UL;
                VECTOR(uint8_t, 4) l_1043 = (VECTOR(uint8_t, 4))(0xADL, (VECTOR(uint8_t, 2))(0xADL, 0xC4L), 0xC4L);
                struct S1 l_1045 = {0x765412498D54A04FL};
                struct S1 *l_1044 = &l_1045;
                struct S1 *l_1046 = &l_1045;
                struct S1 *l_1047 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_1034[i] = &l_1035;
                l_1037 = (l_1036 = (l_1031 , (l_1034[0] = (l_1032 , l_1033))));
                l_1038 = l_1038;
                l_1043.y ^= (l_1042 = ((VECTOR(int32_t, 4))((l_1040 = l_1039), ((VECTOR(int32_t, 2))(l_1041.s34)), 0x225A100CL)).w);
                l_1047 = (l_1046 = l_1044);
            }
            unsigned int result = 0;
            result += l_943;
            int l_960_i0;
            for (l_960_i0 = 0; l_960_i0 < 4; l_960_i0++) {
                result += l_960[l_960_i0];
            }
            result += l_961;
            result += l_962;
            result += l_963;
            result += l_964;
            result += l_965;
            atomic_add(&p_1301->l_special_values[74], result);
        }
        else
        { /* block id: 528 */
            (1 + 1);
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1301->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(1UL, ((VECTOR(uint32_t, 2))(4294967295UL, 0x8C3B4D60L)), 0xB299B8F9L)), ((VECTOR(uint32_t, 4))(l_1048.s4018)))).s6, 10))][(safe_mod_func_uint32_t_u_u(p_1301->tid, 17))]));
    }
    else
    { /* block id: 534 */
        int32_t *l_1050 = &p_1301->g_721.f4;
        l_1049 = l_942;
        (*p_1301->g_709) = l_1050;
    }
    return l_1049;
}


/* ------------------------------------------ */
/* 
 * reads : p_1301->g_799.f4
 * writes:
 */
uint8_t  func_30(int64_t  p_31, int32_t  p_32, struct S1  p_33, uint32_t  p_34, struct S5 * p_1301)
{ /* block id: 450 */
    uint64_t l_939 = 1UL;
    VECTOR(int32_t, 16) l_940 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 5L), 5L), 5L, (-1L), 5L, (VECTOR(int32_t, 2))((-1L), 5L), (VECTOR(int32_t, 2))((-1L), 5L), (-1L), 5L, (-1L), 5L);
    int32_t l_941 = 0x4A118A70L;
    int i;
    l_939 = (safe_rshift_func_int16_t_s_s((0xCFF17B90L != (safe_lshift_func_int16_t_s_s(p_32, 14))), 14));
    l_941 &= ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(l_940.sca8c3909)).s21, ((VECTOR(int32_t, 4))((-1L), 0x1D0FD769L, 0x0572B1E9L, 0x4C99BE7AL)).odd))).xyyx)).z;
    return p_1301->g_799.f4;
}


/* ------------------------------------------ */
/* 
 * reads : p_1301->g_40 p_1301->g_570.f4 p_1301->g_712 p_1301->g_721 p_1301->g_125 p_1301->g_326 p_1301->g_764 p_1301->g_709 p_1301->g_197 p_1301->g_129 p_1301->g_696 p_1301->g_71 p_1301->g_44 p_1301->g_86 p_1301->g_64 p_1301->g_39 p_1301->g_95 p_1301->l_comm_values p_1301->g_43 p_1301->g_117 p_1301->g_120 p_1301->g_133 p_1301->g_144 p_1301->g_162 p_1301->g_172 p_1301->g_183 p_1301->g_196 p_1301->g_239 p_1301->g_156 p_1301->g_310 p_1301->g_147 p_1301->g_353 p_1301->g_354 p_1301->g_191 p_1301->g_145 p_1301->g_403 p_1301->g_473 p_1301->g_212.f0 p_1301->g_11 p_1301->g_212.f1 p_1301->g_527 p_1301->g_192 p_1301->g_492 p_1301->g_146 p_1301->g_600 p_1301->g_610 p_1301->g_616 p_1301->g_528 p_1301->g_645 p_1301->g_637 p_1301->g_652 p_1301->g_654 p_1301->g_668 p_1301->g_575 p_1301->g_570.f3 p_1301->g_799 p_1301->g_420.f1 p_1301->g_558 p_1301->g_158 p_1301->g_810 p_1301->g_812 p_1301->g_66 p_1301->g_686 p_1301->g_920
 * writes: p_1301->g_40 p_1301->g_44 p_1301->g_708 p_1301->g_570.f4 p_1301->g_714 p_1301->g_570.f3 p_1301->g_473 p_1301->g_721.f4 p_1301->g_213 p_1301->g_712.f1 p_1301->g_290 p_1301->g_39 p_1301->g_420.f1 p_1301->g_129 p_1301->g_196 p_1301->g_86 p_1301->g_43 p_1301->g_120 p_1301->g_117.f1 p_1301->g_133 p_1301->g_183 p_1301->g_198 p_1301->g_212.f1 p_1301->g_239 p_1301->g_117.f2 p_1301->g_117.f5 p_1301->g_353 p_1301->g_197.f0 p_1301->g_326 p_1301->g_146 p_1301->g_125 p_1301->g_117 p_1301->g_645 p_1301->g_686 p_1301->g_197 p_1301->g_799.f4
 */
uint8_t  func_37(int32_t * p_38, struct S5 * p_1301)
{ /* block id: 13 */
    int8_t l_57 = (-2L);
    VECTOR(uint32_t, 8) l_69 = (VECTOR(uint32_t, 8))(0x0E0EEEF6L, (VECTOR(uint32_t, 4))(0x0E0EEEF6L, (VECTOR(uint32_t, 2))(0x0E0EEEF6L, 4294967295UL), 4294967295UL), 4294967295UL, 0x0E0EEEF6L, 4294967295UL);
    uint64_t l_930 = 2UL;
    int32_t *l_931 = &p_1301->g_799.f4;
    int i;
    for (p_1301->g_40 = 28; (p_1301->g_40 < 15); p_1301->g_40 = safe_sub_func_uint64_t_u_u(p_1301->g_40, 1))
    { /* block id: 16 */
        uint32_t l_693[10] = {0x72D07CF0L,0x72D07CF0L,0x72D07CF0L,0x72D07CF0L,0x72D07CF0L,0x72D07CF0L,0x72D07CF0L,0x72D07CF0L,0x72D07CF0L,0x72D07CF0L};
        int i;
        for (p_1301->g_44 = 0; (p_1301->g_44 <= (-26)); p_1301->g_44 = safe_sub_func_uint16_t_u_u(p_1301->g_44, 8))
        { /* block id: 19 */
            uint16_t *l_55[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int64_t *l_65 = &p_1301->g_66;
            uint64_t ***l_692 = &p_1301->g_167;
            int32_t l_694 = 4L;
            uint8_t *l_695 = &p_1301->g_696;
            int i;
            (*p_1301->g_920) = func_47((!(safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 2))(1L, 0x031552AE0D08F1B1L)).even, ((VECTOR(int64_t, 4))((safe_rshift_func_uint16_t_u_u((l_57 = 6UL), 9)), (GROUP_DIVERGE(1, 1) || func_58(p_1301->g_56, ((*l_65) |= ((VECTOR(int64_t, 4))(p_1301->g_64.s92fd)).y), func_67((p_1301->g_44 >= ((VECTOR(uint32_t, 8))(l_69.s21724137)).s6), p_1301), l_55[4], p_1301->g_686, p_1301)), 1L, 3L)).y))), (!(((safe_mul_func_int8_t_s_s((((+((&p_1301->g_167 != l_692) & (-1L))) > l_693[4]) || 0xDFE1L), p_1301->g_570.f4)) | l_694) || l_69.s2)), l_695, p_1301);
            if ((atomic_inc(&p_1301->l_atomic_input[6]) == 5))
            { /* block id: 438 */
                VECTOR(int32_t, 4) l_921 = (VECTOR(int32_t, 4))((-4L), (VECTOR(int32_t, 2))((-4L), (-2L)), (-2L));
                uint8_t l_922 = 0xB0L;
                uint32_t l_923 = 4294967292UL;
                int64_t l_924 = (-5L);
                int32_t l_925[9][4];
                uint8_t l_926 = 0xBFL;
                uint16_t l_929 = 0x925AL;
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_925[i][j] = 0x7F6618D4L;
                }
                l_923 = ((VECTOR(int32_t, 8))((-1L), (FAKE_DIVERGE(p_1301->global_2_offset, get_global_id(2), 10) , ((VECTOR(int32_t, 4))(0x44CCD0DCL, (-5L), 0x37701734L, 0x235DE7AAL)).z), 0x313B386EL, ((VECTOR(int32_t, 2))(l_921.xw)), (GROUP_DIVERGE(2, 1) , l_922), 8L, 0L)).s3;
                --l_926;
                l_929 = ((VECTOR(int32_t, 2))(0x614179DEL, 0x428C3A6DL)).hi;
                unsigned int result = 0;
                result += l_921.w;
                result += l_921.z;
                result += l_921.y;
                result += l_921.x;
                result += l_922;
                result += l_923;
                result += l_924;
                int l_925_i0, l_925_i1;
                for (l_925_i0 = 0; l_925_i0 < 9; l_925_i0++) {
                    for (l_925_i1 = 0; l_925_i1 < 4; l_925_i1++) {
                        result += l_925[l_925_i0][l_925_i1];
                    }
                }
                result += l_926;
                result += l_929;
                atomic_add(&p_1301->l_special_values[6], result);
            }
            else
            { /* block id: 442 */
                (1 + 1);
            }
        }
    }
    (*l_931) ^= l_930;
    return (*l_931);
}


/* ------------------------------------------ */
/* 
 * reads : p_1301->g_570.f4 p_1301->g_712 p_1301->g_721 p_1301->g_125 p_1301->g_326 p_1301->g_764 p_1301->g_709 p_1301->g_197 p_1301->g_420.f1 p_1301->g_774 p_1301->g_129 p_1301->g_696 p_1301->g_71 p_1301->g_40 p_1301->g_44 p_1301->g_86 p_1301->g_64 p_1301->g_39 p_1301->g_95 p_1301->l_comm_values p_1301->g_43 p_1301->g_117 p_1301->g_120 p_1301->g_133 p_1301->g_144 p_1301->g_162 p_1301->g_172 p_1301->g_183 p_1301->g_196 p_1301->g_239 p_1301->g_156 p_1301->g_310 p_1301->g_147 p_1301->g_353 p_1301->g_354 p_1301->g_191 p_1301->g_145 p_1301->g_403 p_1301->g_473 p_1301->g_212.f0 p_1301->g_11 p_1301->g_212.f1 p_1301->g_527 p_1301->g_192 p_1301->g_492 p_1301->g_146 p_1301->g_600 p_1301->g_610 p_1301->g_616 p_1301->g_528 p_1301->g_645 p_1301->g_637 p_1301->g_652 p_1301->g_654 p_1301->g_668 p_1301->g_575 p_1301->g_570.f3 p_1301->g_799 p_1301->g_558 p_1301->g_158 p_1301->g_810 p_1301->g_812 p_1301->g_819 p_1301->g_820 p_1301->g_831 p_1301->g_157 p_1301->g_66 p_1301->g_686
 * writes: p_1301->g_708 p_1301->g_570.f4 p_1301->g_714 p_1301->g_570.f3 p_1301->g_473 p_1301->g_721.f4 p_1301->g_213 p_1301->g_712.f1 p_1301->g_290 p_1301->g_39 p_1301->g_420.f1 p_1301->g_129 p_1301->g_196 p_1301->g_86 p_1301->g_43 p_1301->g_120 p_1301->g_117.f1 p_1301->g_133 p_1301->g_183 p_1301->g_198 p_1301->g_212.f1 p_1301->g_239 p_1301->g_117.f2 p_1301->g_117.f5 p_1301->g_353 p_1301->g_197.f0 p_1301->g_326 p_1301->g_146 p_1301->g_125 p_1301->g_117 p_1301->g_645 p_1301->g_686 p_1301->g_831 p_1301->g_632
 */
struct S1  func_47(uint32_t  p_48, int32_t  p_49, uint8_t * p_50, struct S5 * p_1301)
{ /* block id: 294 */
    uint16_t *l_697 = &p_1301->g_645.f3;
    int32_t l_698 = (-7L);
    int32_t *l_699 = (void*)0;
    int32_t **l_701 = &p_1301->g_39;
    int32_t ***l_700 = &l_701;
    int32_t ***l_703 = &l_701;
    int32_t ****l_702 = &l_703;
    int32_t ***l_705 = &l_701;
    int32_t ****l_704 = &l_705;
    int32_t ***l_707 = (void*)0;
    int32_t ****l_706[7] = {&l_707,&l_707,&l_707,&l_707,&l_707,&l_707,&l_707};
    struct S2 *l_750 = &p_1301->g_668[0][0][1];
    uint16_t l_809 = 0x0A2AL;
    VECTOR(int64_t, 4) l_821 = (VECTOR(int64_t, 4))(0x085EB9982099CB30L, (VECTOR(int64_t, 2))(0x085EB9982099CB30L, (-6L)), (-6L));
    VECTOR(uint16_t, 2) l_835 = (VECTOR(uint16_t, 2))(0xD12AL, 0x63E2L);
    int i;
    l_698 = ((void*)0 != l_697);
    l_699 = &l_698;
    if ((l_700 != (p_1301->g_708[2][2][0] = ((*l_704) = ((*l_702) = &l_701)))))
    { /* block id: 300 */
        int64_t l_736 = (-1L);
        int32_t l_741 = 0x7BB0B0A7L;
        int32_t l_742 = 1L;
        VECTOR(int16_t, 16) l_760 = (VECTOR(int16_t, 16))((-6L), (VECTOR(int16_t, 4))((-6L), (VECTOR(int16_t, 2))((-6L), 0x2E7CL), 0x2E7CL), 0x2E7CL, (-6L), 0x2E7CL, (VECTOR(int16_t, 2))((-6L), 0x2E7CL), (VECTOR(int16_t, 2))((-6L), 0x2E7CL), (-6L), 0x2E7CL, (-6L), 0x2E7CL);
        int32_t *l_765 = (void*)0;
        int i;
        for (p_1301->g_570.f4 = 0; (p_1301->g_570.f4 >= 16); p_1301->g_570.f4 = safe_add_func_int8_t_s_s(p_1301->g_570.f4, 5))
        { /* block id: 303 */
            struct S2 *l_713[3][8] = {{&p_1301->g_353.f2,(void*)0,&p_1301->g_353.f2,&p_1301->g_353.f2,(void*)0,&p_1301->g_353.f2,&p_1301->g_353.f2,(void*)0},{&p_1301->g_353.f2,(void*)0,&p_1301->g_353.f2,&p_1301->g_353.f2,(void*)0,&p_1301->g_353.f2,&p_1301->g_353.f2,(void*)0},{&p_1301->g_353.f2,(void*)0,&p_1301->g_353.f2,&p_1301->g_353.f2,(void*)0,&p_1301->g_353.f2,&p_1301->g_353.f2,(void*)0}};
            int32_t l_724 = 1L;
            int32_t l_733 = (-1L);
            int32_t l_735 = 0x0FF6DC0AL;
            int32_t l_738 = 0x7B862F56L;
            uint32_t l_743 = 0x71BB9214L;
            VECTOR(int16_t, 16) l_761 = (VECTOR(int16_t, 16))(0x29FBL, (VECTOR(int16_t, 4))(0x29FBL, (VECTOR(int16_t, 2))(0x29FBL, 0x7C0DL), 0x7C0DL), 0x7C0DL, 0x29FBL, 0x7C0DL, (VECTOR(int16_t, 2))(0x29FBL, 0x7C0DL), (VECTOR(int16_t, 2))(0x29FBL, 0x7C0DL), 0x29FBL, 0x7C0DL, 0x29FBL, 0x7C0DL);
            uint8_t l_763[5];
            int i, j;
            for (i = 0; i < 5; i++)
                l_763[i] = 3UL;
            p_1301->g_714 = p_1301->g_712[0][3][1];
            for (p_1301->g_570.f3 = 11; (p_1301->g_570.f3 <= 2); p_1301->g_570.f3--)
            { /* block id: 307 */
                VECTOR(int8_t, 2) l_730 = (VECTOR(int8_t, 2))(0x77L, 1L);
                int32_t l_734 = 0x2C320FBBL;
                int32_t l_737 = 7L;
                int32_t l_739 = (-2L);
                int32_t l_740 = 0L;
                int64_t *l_755[10] = {&p_1301->g_66,&p_1301->g_66,&p_1301->g_66,&p_1301->g_66,&p_1301->g_66,&p_1301->g_66,&p_1301->g_66,&p_1301->g_66,&p_1301->g_66,&p_1301->g_66};
                int64_t **l_754 = &l_755[4];
                int i, j;
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1301->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[(safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(1UL, 3)), p_48)), 10))][(safe_mod_func_uint32_t_u_u(p_1301->tid, 17))]));
                p_1301->g_473 = p_1301->g_721;
                for (p_1301->g_721.f4 = (-10); (p_1301->g_721.f4 != (-27)); --p_1301->g_721.f4)
                { /* block id: 314 */
                    if (l_724)
                        break;
                }
                if ((0x98L && (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 8))(min(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0UL, 0UL)).yxyy)).zywyxwwx, (uint8_t)p_1301->g_129[6]))).s52, (uint8_t)(safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((l_724 <= (+GROUP_DIVERGE(0, 1))), 4)), (p_1301->g_729 , 1L))), (uint8_t)FAKE_DIVERGE(p_1301->local_2_offset, get_local_id(2), 10)))), 0x39L, 255UL)).z || ((VECTOR(int8_t, 4))(l_730.yxyx)).z)))
                { /* block id: 317 */
                    int32_t l_731 = 0x10335D68L;
                    int32_t l_732[8][2] = {{(-1L),0x09526A79L},{(-1L),0x09526A79L},{(-1L),0x09526A79L},{(-1L),0x09526A79L},{(-1L),0x09526A79L},{(-1L),0x09526A79L},{(-1L),0x09526A79L},{(-1L),0x09526A79L}};
                    int i, j;
                    ++l_743;
                    for (l_743 = 0; (l_743 != 1); l_743 = safe_add_func_int32_t_s_s(l_743, 8))
                    { /* block id: 321 */
                        uint64_t l_748 = 1UL;
                        struct S2 *l_749 = &p_1301->g_571[0];
                        struct S2 **l_751 = &p_1301->g_213[2];
                        uint64_t *l_762 = &p_1301->g_712[0][3][1].f1;
                        l_742 |= 0x17D04F34L;
                        if (l_748)
                            break;
                        (*l_751) = (l_750 = l_749);
                        (*p_1301->g_764) = ((safe_rshift_func_int8_t_s_s(((((void*)0 == l_754) | (((*l_699) ^= (l_741 &= ((((+(((((*l_762) = ((safe_sub_func_uint8_t_u_u(1UL, (safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 2))((-6L), 0L)).yyxyxxyy, ((VECTOR(int16_t, 4))(l_760.s4291)).yywxxyww, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))((p_1301->g_129[0] = (!(-10L))), ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(l_761.sc0))))), (-1L))).yzwwwzzx))))).even))).wwwwyxyzxxyxyyxy, ((VECTOR(int16_t, 16))(p_48, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_730.x, l_734, 0x39FEL, 2L)))), 6L, (l_740 = ((l_742 <= ((**l_754) = (l_732[3][1] = 9L))) || p_1301->g_310[2][1][1])), 0x4BE3L, ((VECTOR(int16_t, 4))((-1L))), 0x326CL, ((VECTOR(int16_t, 2))(0x070AL)), 0x381BL))))).s3, 1UL)))) == 0x04ECL)) == l_760.s0) , l_748) > p_48)) >= p_1301->g_125.x) == p_48) > p_1301->g_326.y))) == 0x75FACA8FL)) >= l_733), l_763[4])) , &l_697);
                    }
                    l_765 = ((*p_1301->g_709) = &l_741);
                    (*l_765) ^= p_48;
                }
                else
                { /* block id: 338 */
                    uint32_t l_771 = 0UL;
                    for (p_48 = (-18); (p_48 >= 28); p_48 = safe_add_func_uint64_t_u_u(p_48, 4))
                    { /* block id: 341 */
                        uint16_t l_768 = 0xC158L;
                        if (l_740)
                            break;
                        l_735 = p_49;
                        l_768--;
                    }
                    l_771 = (p_49 ^ (-1L));
                    (*l_699) = p_49;
                }
            }
        }
        (**l_703) = &l_741;
        return p_1301->g_197[6];
    }
    else
    { /* block id: 353 */
        uint32_t l_782[4][8][2] = {{{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L}},{{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L}},{{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L}},{{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L},{4294967291UL,0xE0AA4845L}}};
        VECTOR(int16_t, 8) l_787 = (VECTOR(int16_t, 8))(0x176DL, (VECTOR(int16_t, 4))(0x176DL, (VECTOR(int16_t, 2))(0x176DL, 0x1FCDL), 0x1FCDL), 0x1FCDL, 0x176DL, 0x1FCDL);
        int32_t l_811 = (-7L);
        VECTOR(uint16_t, 8) l_834 = (VECTOR(uint16_t, 8))(0xB97AL, (VECTOR(uint16_t, 4))(0xB97AL, (VECTOR(uint16_t, 2))(0xB97AL, 0xEB23L), 0xEB23L), 0xEB23L, 0xB97AL, 0xEB23L);
        int32_t l_851 = (-4L);
        int i, j, k;
        for (p_1301->g_420.f1 = 20; (p_1301->g_420.f1 <= 52); ++p_1301->g_420.f1)
        { /* block id: 356 */
            int16_t *l_779 = &p_1301->g_129[3];
            int16_t *l_788 = &p_1301->g_196;
            uint16_t ***l_789 = &p_1301->g_290;
            struct S1 *l_790 = &p_1301->g_686;
            int16_t **l_806 = &l_788;
            int32_t l_807 = 0x1136D32FL;
            uint32_t *l_808 = &p_1301->g_353.f0;
            uint32_t *l_830 = &p_1301->g_831[7][0];
            int8_t *l_846 = &p_1301->g_632;
            int64_t *l_848[10] = {&p_1301->g_66,&p_1301->g_66,&p_1301->g_66,&p_1301->g_66,&p_1301->g_66,&p_1301->g_66,&p_1301->g_66,&p_1301->g_66,&p_1301->g_66,&p_1301->g_66};
            int64_t **l_847 = &l_848[8];
            int8_t *l_849 = (void*)0;
            int8_t *l_850 = (void*)0;
            int i;
            (*l_790) = func_67(((((~((VECTOR(int64_t, 16))(p_1301->g_774.s3fe869fad19d899c)).sd) ^ ((safe_sub_func_int32_t_s_s((0UL == ((safe_rshift_func_int16_t_s_s(((*l_779) |= (-10L)), ((*l_788) = ((safe_mod_func_uint8_t_u_u((l_782[2][3][1] && 18446744073709551614UL), (safe_mod_func_uint8_t_u_u((*p_50), (safe_div_func_uint16_t_u_u(p_49, ((VECTOR(int16_t, 8))(l_787.s71471636)).s2)))))) <= (0L != p_48))))) && ((void*)0 != l_789))), 0x7AF11F06L)) , 0x546FFC7F6633A2FBL)) && 0x5B630CB745E87C39L) , 4294967288UL), p_1301);
            l_811 ^= ((0x4EL || (safe_mod_func_int64_t_s_s((safe_div_func_uint16_t_u_u(((((*l_699) = (-4L)) != 0x3BB0AE01L) != ((safe_lshift_func_uint8_t_u_s((l_787.s0 >= (p_1301->g_645.f3 == ((safe_mul_func_int16_t_s_s((p_1301->g_799 , (((*l_808) = (safe_sub_func_uint64_t_u_u(0xC463D6A2F06B8EFEL, ((0xACFCL && (~(((((safe_sub_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_s((((*l_806) = l_788) == &p_1301->g_196), 1)) >= p_49), l_807)) >= l_807) | p_48) || 0x78L) < p_1301->g_420.f1))) , p_1301->g_558.x)))) | l_807)), l_809)) || p_1301->g_158))), 6)) , p_48)), p_1301->g_810)), p_1301->g_810))) < p_1301->g_117.f2);
            (*p_1301->g_354) = p_1301->g_812;
            l_851 ^= (safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))((safe_lshift_func_uint8_t_u_u((((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(max(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(p_1301->g_819.s26)))))), ((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_1301->g_820.s30)).xyxy)).lo, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(l_821.xzzwzxzz)).s7621343273765711)).s27, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(min(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 16))(mad_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))((((p_1301->g_125.z >= (&p_1301->g_632 != &p_1301->g_632)) & p_49) != (l_811 |= ((((((*l_846) = (safe_lshift_func_int8_t_s_s(((*p_50) , ((safe_rshift_func_int16_t_s_u((((safe_div_func_uint16_t_u_u(((++(*l_830)) , ((((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(l_834.s32212631)).s12)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 4))(l_835.xxyx)), ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 4))(((safe_sub_func_int64_t_s_s((-3L), (safe_mul_func_int16_t_s_s(l_807, ((p_48 && (safe_div_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((safe_mul_func_uint16_t_u_u((((safe_unary_minus_func_uint16_t_u(l_807)) <= p_1301->g_157[3][6]) <= 0x2FL), l_787.s3)))), 4L))) || 0x104BA470L))))) <= l_834.s2), 0x49L, 4UL, 0x71L)).wwywyzxyzxwxxzzx))).s0550)), ((VECTOR(uint8_t, 4))(253UL)))))))))).odd))), 0UL, 0x9136L)).z , 1UL) | 0xDA4A9AC025078C1CL) , l_779) != (void*)0)), p_48)) || 0x0CFCC306D2E278EDL) | 0L), 2)) < p_48)), p_49))) >= FAKE_DIVERGE(p_1301->global_2_offset, get_global_id(2), 10)) , (void*)0) != l_847) & 0x4CFDL))), ((VECTOR(int64_t, 2))(6L)), 1L)), l_807, ((VECTOR(int64_t, 2))(0x4C821D1D21C06B1BL)), (-1L))).s4162431733046227, ((VECTOR(int64_t, 16))(0x2877F272E329D39AL)), ((VECTOR(int64_t, 16))(0x78F7E6C2ABB39C1FL))))).lo, ((VECTOR(int64_t, 8))(0x4A38C933C54CCBA8L)), ((VECTOR(int64_t, 8))((-6L)))))).s1634673254741653)).s7a14, ((VECTOR(int64_t, 4))(0x0E255BB07DACC391L))))).xwyxyxxzxxyzwzzz)).s1d)).yyxyyyyx)).s12))).xxxx)).lo))), (-10L), 0x07BECE8A9C5FC059L)).odd)).yyyxxxyx, ((VECTOR(int64_t, 8))(0x0F680075F1BCE69CL))))).s3011652705154434))).s67))).yyxyxyyyxxyxxyyy)).sc ^ p_49), l_787.s7)), 0L, ((VECTOR(int8_t, 2))(1L)), ((VECTOR(int8_t, 2))(7L)), 6L, ((VECTOR(int8_t, 8))(0x74L)), 0x29L)))).s8, p_1301->g_66)), p_1301->g_668[0][0][1].f1));
        }
        (*l_699) = p_48;
    }
    if ((atomic_inc(&p_1301->l_atomic_input[0]) == 4))
    { /* block id: 373 */
        int16_t l_852[2];
        struct S2 l_918 = {1UL,18446744073709551609UL};/* VOLATILE GLOBAL l_918 */
        struct S2 *l_917 = &l_918;
        struct S2 *l_919 = &l_918;
        int i;
        for (i = 0; i < 2; i++)
            l_852[i] = (-6L);
        if ((l_852[1] = ((VECTOR(int32_t, 2))(0L, 0x7D73904FL)).lo))
        { /* block id: 375 */
            int32_t l_853 = 0x412240A3L;
            int32_t l_862 = 5L;
            uint32_t l_863[2];
            int i;
            for (i = 0; i < 2; i++)
                l_863[i] = 0x41E3066EL;
            for (l_853 = 9; (l_853 != (-18)); l_853--)
            { /* block id: 378 */
                int32_t l_856 = 0x19E25F30L;
                for (l_856 = 12; (l_856 >= 12); l_856 = safe_add_func_int8_t_s_s(l_856, 3))
                { /* block id: 381 */
                    struct S0 l_860 = {0x15DA23ABL,4294967294UL,9UL,0xDF2696BFL,3L};/* VOLATILE GLOBAL l_860 */
                    struct S0 *l_859 = &l_860;
                    struct S0 *l_861 = &l_860;
                    l_861 = l_859;
                }
            }
            --l_863[0];
        }
        else
        { /* block id: 386 */
            int16_t l_866 = 0L;
            uint64_t l_867 = 0xBEA884EFE105584FL;
            int64_t l_868 = 0x170E8880C3B8530CL;
            if ((l_868 ^= (l_867 = l_866)))
            { /* block id: 389 */
                uint32_t l_869 = 0x66DF067FL;
                int32_t l_870 = (-8L);
                l_870 |= (l_869 , (-6L));
                for (l_869 = 0; (l_869 <= 8); l_869++)
                { /* block id: 393 */
                    struct S4 l_873 = {0x3ACFD9FDL,0x4843E54AB8C2E051L,-1L,0x1C0B9CACDE950B63L,0x64674193L,0x90L,0L};/* VOLATILE GLOBAL l_873 */
                    struct S4 l_874 = {0x600F76A6L,0x0784B5954A3DB594L,0x7842D9D4L,-1L,0xBD0C717DL,0xC8L,0x72B4AFC1L};/* VOLATILE GLOBAL l_874 */
                    int32_t l_875 = 1L;
                    int8_t l_876 = 1L;
                    uint16_t l_877 = 65535UL;
                    uint64_t l_880 = 0x4CD4C719C1C742B4L;
                    l_874 = l_873;
                    l_876 ^= l_875;
                    l_877++;
                    l_873.f0 |= l_880;
                }
            }
            else
            { /* block id: 399 */
                int32_t l_881 = 1L;
                struct S0 l_904 = {0x03DB7DDAL,1UL,4UL,0x01334F00L,0x00CDE481L};/* VOLATILE GLOBAL l_904 */
                int32_t *l_905[2][8][1] = {{{&l_904.f4},{&l_904.f4},{&l_904.f4},{&l_904.f4},{&l_904.f4},{&l_904.f4},{&l_904.f4},{&l_904.f4}},{{&l_904.f4},{&l_904.f4},{&l_904.f4},{&l_904.f4},{&l_904.f4},{&l_904.f4},{&l_904.f4},{&l_904.f4}}};
                int i, j, k;
                for (l_881 = (-1); (l_881 < (-12)); l_881--)
                { /* block id: 402 */
                    uint8_t l_884 = 0x52L;
                    int64_t l_885 = 0x3DF68A32E6FABE92L;
                    VECTOR(int32_t, 4) l_886 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
                    VECTOR(int32_t, 4) l_887 = (VECTOR(int32_t, 4))(0x7BA810BCL, (VECTOR(int32_t, 2))(0x7BA810BCL, 0x70106482L), 0x70106482L);
                    VECTOR(int32_t, 4) l_888 = (VECTOR(int32_t, 4))(0x4381AF4FL, (VECTOR(int32_t, 2))(0x4381AF4FL, 1L), 1L);
                    VECTOR(int32_t, 16) l_889 = (VECTOR(int32_t, 16))(0x1CB47B53L, (VECTOR(int32_t, 4))(0x1CB47B53L, (VECTOR(int32_t, 2))(0x1CB47B53L, (-2L)), (-2L)), (-2L), 0x1CB47B53L, (-2L), (VECTOR(int32_t, 2))(0x1CB47B53L, (-2L)), (VECTOR(int32_t, 2))(0x1CB47B53L, (-2L)), 0x1CB47B53L, (-2L), 0x1CB47B53L, (-2L));
                    VECTOR(uint16_t, 16) l_890 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 65532UL), 65532UL), 65532UL, 65535UL, 65532UL, (VECTOR(uint16_t, 2))(65535UL, 65532UL), (VECTOR(uint16_t, 2))(65535UL, 65532UL), 65535UL, 65532UL, 65535UL, 65532UL);
                    uint16_t l_891 = 65531UL;
                    int32_t l_892 = (-9L);
                    VECTOR(int32_t, 16) l_893 = (VECTOR(int32_t, 16))(0x2DBC85C6L, (VECTOR(int32_t, 4))(0x2DBC85C6L, (VECTOR(int32_t, 2))(0x2DBC85C6L, 0x7FEE5BE8L), 0x7FEE5BE8L), 0x7FEE5BE8L, 0x2DBC85C6L, 0x7FEE5BE8L, (VECTOR(int32_t, 2))(0x2DBC85C6L, 0x7FEE5BE8L), (VECTOR(int32_t, 2))(0x2DBC85C6L, 0x7FEE5BE8L), 0x2DBC85C6L, 0x7FEE5BE8L, 0x2DBC85C6L, 0x7FEE5BE8L);
                    VECTOR(int32_t, 4) l_894 = (VECTOR(int32_t, 4))(0x0B348690L, (VECTOR(int32_t, 2))(0x0B348690L, (-5L)), (-5L));
                    int i;
                    if (((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))((-6L), (l_885 = (l_884 = 0x287CE8C3L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(l_886.xwyxxwwxxwzzyzyx)).sedc2, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_887.xxxyzyxz)).s0040042453542150)).sf5dd))).zxywwxxwxzwzxxyz, ((VECTOR(int32_t, 2))(l_888.zz)).yyxyyxyyxxyyyxyy))).sc6)), ((l_891 = (((VECTOR(int32_t, 8))(l_889.s5c968747)).s1 , ((VECTOR(uint16_t, 2))(abs(((VECTOR(uint16_t, 8))(l_890.sba2c8481)).s63))).odd)) , l_892), ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))((-1L), 1L)), ((VECTOR(int32_t, 16))(l_893.scf3655d2f981d46c)).sa2))).even, 0x2F279E19L, 0x138B0777L)).s64, ((VECTOR(int32_t, 8))(l_894.xwzwwwww)).s66))), 0x21F6D378L, 0L)).w)
                    { /* block id: 406 */
                        int32_t l_896 = (-9L);
                        int32_t *l_895 = &l_896;
                        struct S4 *l_897 = (void*)0;
                        VECTOR(uint32_t, 4) l_898 = (VECTOR(uint32_t, 4))(0x6F686970L, (VECTOR(uint32_t, 2))(0x6F686970L, 0x26FEB795L), 0x26FEB795L);
                        VECTOR(uint8_t, 2) l_899 = (VECTOR(uint8_t, 2))(1UL, 6UL);
                        struct S0 l_900 = {0L,4294967295UL,6UL,0x6D4D90F4L,7L};/* VOLATILE GLOBAL l_900 */
                        struct S0 l_901 = {7L,8UL,5UL,0xF41F457BL,6L};/* VOLATILE GLOBAL l_901 */
                        int i;
                        l_895 = (void*)0;
                        l_897 = (void*)0;
                        l_901 = (((VECTOR(uint32_t, 8))(l_898.zxwzzxwz)).s0 , (l_899.y , l_900));
                    }
                    else
                    { /* block id: 410 */
                        struct S3 *l_903 = (void*)0;
                        struct S3 **l_902 = &l_903;
                        l_902 = (void*)0;
                    }
                }
                l_905[1][0][0] = (l_904 , (void*)0);
            }
            for (l_866 = 0; (l_866 != 8); l_866 = safe_add_func_int32_t_s_s(l_866, 7))
            { /* block id: 418 */
                VECTOR(int64_t, 2) l_908 = (VECTOR(int64_t, 2))(0x1EF96D363C2A47A2L, 0x7516D15CA31571C3L);
                uint16_t l_909 = 65533UL;
                int32_t l_910 = 0x0DF15B22L;
                int32_t l_911[5][7] = {{0x281B2084L,0x3807BE53L,1L,0x3807BE53L,0x281B2084L,0x281B2084L,0x3807BE53L},{0x281B2084L,0x3807BE53L,1L,0x3807BE53L,0x281B2084L,0x281B2084L,0x3807BE53L},{0x281B2084L,0x3807BE53L,1L,0x3807BE53L,0x281B2084L,0x281B2084L,0x3807BE53L},{0x281B2084L,0x3807BE53L,1L,0x3807BE53L,0x281B2084L,0x281B2084L,0x3807BE53L},{0x281B2084L,0x3807BE53L,1L,0x3807BE53L,0x281B2084L,0x281B2084L,0x3807BE53L}};
                int32_t *l_912 = &l_910;
                int32_t *l_913 = &l_910;
                int i, j;
                l_913 = (l_912 = ((l_909 |= (l_868 = ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_908.xxyxyxyy)).s43)).yxxyyyxy)).s0)) , ((l_911[1][2] = l_910) , (void*)0)));
                for (l_908.x = 10; (l_908.x <= 13); l_908.x++)
                { /* block id: 426 */
                    int32_t l_916 = (-7L);
                    l_916 = (-1L);
                }
            }
        }
        l_919 = l_917;
        unsigned int result = 0;
        int l_852_i0;
        for (l_852_i0 = 0; l_852_i0 < 2; l_852_i0++) {
            result += l_852[l_852_i0];
        }
        result += l_918.f0;
        result += l_918.f1;
        atomic_add(&p_1301->l_special_values[0], result);
    }
    else
    { /* block id: 432 */
        (1 + 1);
    }
    return p_1301->g_686;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint8_t  func_58(int64_t  p_59, int64_t  p_60, struct S1  p_61, uint16_t * p_62, struct S1  p_63, struct S5 * p_1301)
{ /* block id: 291 */
    int32_t *l_687 = &p_1301->g_570.f4;
    int32_t **l_689 = &l_687;
    (*l_689) = l_687;
    return p_60;
}


/* ------------------------------------------ */
/* 
 * reads : p_1301->g_71 p_1301->g_40 p_1301->g_44 p_1301->g_86 p_1301->g_64 p_1301->g_39 p_1301->g_95 p_1301->l_comm_values p_1301->g_43 p_1301->g_117 p_1301->g_120 p_1301->g_133 p_1301->g_144 p_1301->g_162 p_1301->g_172 p_1301->g_183 p_1301->g_196 p_1301->g_197 p_1301->g_239 p_1301->g_125 p_1301->g_156 p_1301->g_310 p_1301->g_147 p_1301->g_353 p_1301->g_354 p_1301->g_326 p_1301->g_191 p_1301->g_145 p_1301->g_403 p_1301->g_464 p_1301->g_473 p_1301->g_492 p_1301->g_212.f0 p_1301->g_11 p_1301->g_212.f1 p_1301->g_527 p_1301->g_532 p_1301->g_420.f1 p_1301->g_192 p_1301->g_556 p_1301->g_558 p_1301->g_566 p_1301->g_570 p_1301->g_571 p_1301->g_573 p_1301->g_574 p_1301->g_575 p_1301->g_158 p_1301->g_129 p_1301->g_146 p_1301->g_600 p_1301->g_610 p_1301->g_616 p_1301->g_528 p_1301->g_637 p_1301->g_639 p_1301->g_56 p_1301->g_645 p_1301->g_652 p_1301->g_654 p_1301->g_668
 * writes: p_1301->g_39 p_1301->g_86 p_1301->g_43 p_1301->g_120 p_1301->g_117.f1 p_1301->g_133 p_1301->g_183 p_1301->g_196 p_1301->g_198 p_1301->g_213 p_1301->g_212.f1 p_1301->g_239 p_1301->g_290 p_1301->g_117.f2 p_1301->g_117.f5 p_1301->g_353 p_1301->g_197.f0 p_1301->g_326 p_1301->g_146 p_1301->g_125 p_1301->g_473.f4 p_1301->g_11 p_1301->g_473.f2 p_1301->g_117 p_1301->g_473.f3 p_1301->g_632 p_1301->g_645
 */
struct S1  func_67(uint32_t  p_68, struct S5 * p_1301)
{ /* block id: 22 */
    int64_t *l_77[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_80 = 1L;
    int32_t l_84 = 0x081B6A48L;
    int32_t l_452[10];
    uint16_t ***l_471 = &p_1301->g_290;
    VECTOR(int64_t, 4) l_480 = (VECTOR(int64_t, 4))(0x05D3337A8E780E60L, (VECTOR(int64_t, 2))(0x05D3337A8E780E60L, 3L), 3L);
    VECTOR(int8_t, 8) l_481 = (VECTOR(int8_t, 8))(0x7FL, (VECTOR(int8_t, 4))(0x7FL, (VECTOR(int8_t, 2))(0x7FL, (-4L)), (-4L)), (-4L), 0x7FL, (-4L));
    int64_t l_508 = 0x6FCE9EB4E3BCDA69L;
    int32_t **l_517 = (void*)0;
    int32_t ***l_516 = &l_517;
    int64_t l_547 = (-5L);
    VECTOR(int32_t, 8) l_561 = (VECTOR(int32_t, 8))(0x792074D7L, (VECTOR(int32_t, 4))(0x792074D7L, (VECTOR(int32_t, 2))(0x792074D7L, 0x04EABBD0L), 0x04EABBD0L), 0x04EABBD0L, 0x792074D7L, 0x04EABBD0L);
    VECTOR(int32_t, 16) l_562 = (VECTOR(int32_t, 16))(0x05A2723EL, (VECTOR(int32_t, 4))(0x05A2723EL, (VECTOR(int32_t, 2))(0x05A2723EL, 0L), 0L), 0L, 0x05A2723EL, 0L, (VECTOR(int32_t, 2))(0x05A2723EL, 0L), (VECTOR(int32_t, 2))(0x05A2723EL, 0L), 0x05A2723EL, 0L, 0x05A2723EL, 0L);
    VECTOR(int32_t, 2) l_563 = (VECTOR(int32_t, 2))((-1L), 0x75AA67A1L);
    VECTOR(int32_t, 8) l_564 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
    VECTOR(int32_t, 4) l_565 = (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 1L), 1L);
    VECTOR(int32_t, 2) l_567 = (VECTOR(int32_t, 2))(0x4720C4D9L, 7L);
    struct S1 l_592[4] = {{0x71007EA5881B4924L},{0x71007EA5881B4924L},{0x71007EA5881B4924L},{0x71007EA5881B4924L}};
    VECTOR(uint64_t, 16) l_625 = (VECTOR(uint64_t, 16))(18446744073709551610UL, (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 0x46DF4ED8497D0297L), 0x46DF4ED8497D0297L), 0x46DF4ED8497D0297L, 18446744073709551610UL, 0x46DF4ED8497D0297L, (VECTOR(uint64_t, 2))(18446744073709551610UL, 0x46DF4ED8497D0297L), (VECTOR(uint64_t, 2))(18446744073709551610UL, 0x46DF4ED8497D0297L), 18446744073709551610UL, 0x46DF4ED8497D0297L, 18446744073709551610UL, 0x46DF4ED8497D0297L);
    uint16_t l_635 = 0x2DBCL;
    VECTOR(int8_t, 4) l_638 = (VECTOR(int8_t, 4))(9L, (VECTOR(int8_t, 2))(9L, (-1L)), (-1L));
    int16_t *l_641 = (void*)0;
    uint64_t l_642 = 0x6D3AADE1FC13B727L;
    int16_t l_643 = 0x4768L;
    VECTOR(int16_t, 2) l_653 = (VECTOR(int16_t, 2))(0x5B49L, 0x2FE0L);
    VECTOR(uint32_t, 4) l_671 = (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0UL), 0UL);
    VECTOR(uint32_t, 8) l_672 = (VECTOR(uint32_t, 8))(0xD390449EL, (VECTOR(uint32_t, 4))(0xD390449EL, (VECTOR(uint32_t, 2))(0xD390449EL, 0x30A6A755L), 0x30A6A755L), 0x30A6A755L, 0xD390449EL, 0x30A6A755L);
    VECTOR(uint32_t, 4) l_673 = (VECTOR(uint32_t, 4))(0x04349771L, (VECTOR(uint32_t, 2))(0x04349771L, 7UL), 7UL);
    VECTOR(uint32_t, 4) l_674 = (VECTOR(uint32_t, 4))(0xCA5CC917L, (VECTOR(uint32_t, 2))(0xCA5CC917L, 0x00D16B97L), 0x00D16B97L);
    VECTOR(uint32_t, 8) l_675 = (VECTOR(uint32_t, 8))(4UL, (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0UL), 0UL), 0UL, 4UL, 0UL);
    VECTOR(uint32_t, 16) l_676 = (VECTOR(uint32_t, 16))(0x96185C91L, (VECTOR(uint32_t, 4))(0x96185C91L, (VECTOR(uint32_t, 2))(0x96185C91L, 0UL), 0UL), 0UL, 0x96185C91L, 0UL, (VECTOR(uint32_t, 2))(0x96185C91L, 0UL), (VECTOR(uint32_t, 2))(0x96185C91L, 0UL), 0x96185C91L, 0UL, 0x96185C91L, 0UL);
    uint64_t **l_677[4];
    VECTOR(uint16_t, 8) l_680 = (VECTOR(uint16_t, 8))(0xD591L, (VECTOR(uint16_t, 4))(0xD591L, (VECTOR(uint16_t, 2))(0xD591L, 1UL), 1UL), 1UL, 0xD591L, 1UL);
    int16_t l_681[5] = {9L,9L,9L,9L,9L};
    uint16_t *l_682 = (void*)0;
    uint16_t *l_683 = (void*)0;
    uint16_t *l_684 = (void*)0;
    uint16_t *l_685 = &p_1301->g_353.f3;
    int i;
    for (i = 0; i < 10; i++)
        l_452[i] = 0x4F723EE9L;
    for (i = 0; i < 4; i++)
        l_677[i] = (void*)0;
    if (p_68)
    { /* block id: 23 */
        int32_t *l_70[10][6] = {{&p_1301->g_44,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44},{&p_1301->g_44,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44},{&p_1301->g_44,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44},{&p_1301->g_44,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44},{&p_1301->g_44,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44},{&p_1301->g_44,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44},{&p_1301->g_44,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44},{&p_1301->g_44,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44},{&p_1301->g_44,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44},{&p_1301->g_44,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44,&p_1301->g_40,&p_1301->g_44}};
        uint8_t *l_83 = (void*)0;
        uint8_t *l_85[4] = {&p_1301->g_86,&p_1301->g_86,&p_1301->g_86,&p_1301->g_86};
        int8_t l_451[3][4] = {{(-1L),0x6DL,(-1L),(-1L)},{(-1L),0x6DL,(-1L),(-1L)},{(-1L),0x6DL,(-1L),(-1L)}};
        int64_t l_463[3][5] = {{0x6D47D2626C4F8377L,0x3C8B079C3388573FL,0x6D47D2626C4F8377L,0x6D47D2626C4F8377L,0x3C8B079C3388573FL},{0x6D47D2626C4F8377L,0x3C8B079C3388573FL,0x6D47D2626C4F8377L,0x6D47D2626C4F8377L,0x3C8B079C3388573FL},{0x6D47D2626C4F8377L,0x3C8B079C3388573FL,0x6D47D2626C4F8377L,0x6D47D2626C4F8377L,0x3C8B079C3388573FL}};
        uint64_t *l_498 = &p_1301->g_212.f1;
        int32_t *l_513 = (void*)0;
        int32_t l_546 = 0x62AD7732L;
        int i, j;
        (*p_1301->g_71) = l_70[2][0];
        l_452[8] &= (func_72(l_77[6], (p_1301->g_40 == ((p_68 | 0x5E53D9B4L) <= (l_80 == p_1301->g_44))), l_70[2][0], (FAKE_DIVERGE(p_1301->group_2_offset, get_group_id(2), 10) & ((((((l_84 |= (--p_1301->g_86)) > 0x3BL) >= (safe_rshift_func_uint8_t_u_u((8UL >= l_80), p_1301->g_64.s6))) | p_68) <= p_68) >= 0x7BF50803L)), p_1301) | l_451[1][3]);
        for (p_1301->g_239 = 0; (p_1301->g_239 > 53); p_1301->g_239++)
        { /* block id: 206 */
            uint8_t l_455 = 0x19L;
            int64_t *l_478 = (void*)0;
            int32_t l_489 = 1L;
            struct S4 *l_526 = &p_1301->g_117;
            struct S4 **l_525 = &l_526;
            VECTOR(uint16_t, 8) l_531 = (VECTOR(uint16_t, 8))(65532UL, (VECTOR(uint16_t, 4))(65532UL, (VECTOR(uint16_t, 2))(65532UL, 1UL), 1UL), 1UL, 65532UL, 1UL);
            int i;
            l_455++;
            for (p_1301->g_117.f1 = 0; (p_1301->g_117.f1 != 47); p_1301->g_117.f1 = safe_add_func_int8_t_s_s(p_1301->g_117.f1, 2))
            { /* block id: 210 */
                VECTOR(int32_t, 8) l_462 = (VECTOR(int32_t, 8))(0x5F8ECD94L, (VECTOR(int32_t, 4))(0x5F8ECD94L, (VECTOR(int32_t, 2))(0x5F8ECD94L, 0x0E240D78L), 0x0E240D78L), 0x0E240D78L, 0x5F8ECD94L, 0x0E240D78L);
                int i;
                p_1301->g_125.y &= (p_1301->g_403.s0 < p_68);
                l_463[2][2] &= (!(safe_rshift_func_int8_t_s_s((!(((VECTOR(int32_t, 4))(l_462.s3115)).z , 9L)), 2)));
            }
            if ((l_452[8] = (p_68 >= ((VECTOR(int32_t, 16))(p_1301->g_464.xyxxyxyyxxxyyxyx)).sc)))
            { /* block id: 215 */
                uint32_t *l_472 = &p_1301->g_120;
                int64_t *l_474[1][1];
                VECTOR(uint64_t, 8) l_475 = (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0UL), 0UL), 0UL, 0UL, 0UL);
                int64_t **l_479 = &l_478;
                int16_t *l_484 = (void*)0;
                int16_t *l_485 = &p_1301->g_196;
                int32_t l_488 = (-5L);
                uint32_t l_502 = 0xAE58D9E5L;
                int32_t l_505 = 0x7EF2868EL;
                int32_t l_506[3];
                int32_t **l_512[2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_474[i][j] = &l_463[0][1];
                }
                for (i = 0; i < 3; i++)
                    l_506[i] = 0x553BBED7L;
                for (i = 0; i < 2; i++)
                    l_512[i] = (void*)0;
                l_84 |= (safe_sub_func_uint64_t_u_u((((safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((l_471 == &p_1301->g_290) >= ((*l_472) ^= 0x84094472L)), ((p_1301->g_473 , (l_474[0][0] != ((--l_475.s5) , ((*l_479) = l_478)))) < ((*l_485) = (((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(l_480.xzywzxyzyyxzwwxy)).even)).s5 & ((~(p_1301->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1301->tid, 17))] ^ ((VECTOR(int8_t, 2))(l_481.s55)).hi)) <= (safe_rshift_func_int8_t_s_u(p_1301->g_473.f3, 6)))))))), (safe_mul_func_uint16_t_u_u(((!l_452[8]) & l_488), p_68)))) >= p_1301->g_117.f6) != p_68), 3L));
                l_489 = 1L;
                for (p_1301->g_473.f4 = (-30); (p_1301->g_473.f4 != 27); p_1301->g_473.f4 = safe_add_func_int16_t_s_s(p_1301->g_473.f4, 4))
                { /* block id: 224 */
                    int8_t l_507 = 2L;
                    uint16_t l_509 = 1UL;
                    if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0x11CCCAC3L, ((VECTOR(int32_t, 2))(p_1301->g_492.sc0)), 0x38FDEB50L)).wxxzywxwxxwzywyw)).s9)
                    { /* block id: 225 */
                        uint8_t l_493 = 0UL;
                        if (l_493)
                            break;
                        l_80 |= (safe_mul_func_int8_t_s_s(p_1301->g_212.f0, (((safe_mul_func_int16_t_s_s(((~(l_452[4] = p_1301->g_197[6].f0)) <= (p_68 , (p_68 >= l_475.s4))), (((p_68 , (((VECTOR(int32_t, 8))((-1L), 0x114379E5L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((((l_498 == (void*)0) >= ((safe_add_func_int32_t_s_s(1L, 0x1F5040F1L)) , p_68)) != 0x30L), 0x30D2835DL, ((VECTOR(int32_t, 2))(0x777DCDE9L)), 2L, 0x78AF9F7AL, 1L, ((VECTOR(int32_t, 4))(0x261E3B67L)), 1L, 0x4A449F2DL, ((VECTOR(int32_t, 2))(4L)), 0x7B8A8094L)).s89dc)), 0x595F98FDL, 0x17174AF1L)).s5 || p_1301->g_11.x)) == p_1301->g_86) , 0x5BE7L))) , l_455) ^ p_1301->g_212.f1)));
                    }
                    else
                    { /* block id: 229 */
                        int32_t l_501 = (-1L);
                        l_452[0] = l_455;
                        if (l_501)
                            break;
                        l_502--;
                        ++l_509;
                    }
                }
                l_489 ^= (l_70[2][0] == (l_513 = (void*)0));
            }
            else
            { /* block id: 238 */
                VECTOR(int8_t, 16) l_522 = (VECTOR(int8_t, 16))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, 0x20L), 0x20L), 0x20L, 3L, 0x20L, (VECTOR(int8_t, 2))(3L, 0x20L), (VECTOR(int8_t, 2))(3L, 0x20L), 3L, 0x20L, 3L, 0x20L);
                VECTOR(int64_t, 2) l_537 = (VECTOR(int64_t, 2))(0x1D4DBBD2AD1DD060L, 0x0D6A918A31959F33L);
                uint16_t *l_544 = &p_1301->g_353.f3;
                int32_t l_545 = 0x2D234402L;
                struct S1 l_548[9] = {{1UL},{18446744073709551615UL},{1UL},{1UL},{18446744073709551615UL},{1UL},{1UL},{18446744073709551615UL},{1UL}};
                int i;
                l_545 = (safe_sub_func_int64_t_s_s((((&p_1301->g_145 != l_516) != ((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(1, 1), ((VECTOR(int8_t, 2))(l_522.s5a)).lo)) ^ (safe_mul_func_uint8_t_u_u((l_525 != p_1301->g_527), (((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_531.s03)), 0UL, ((VECTOR(uint16_t, 2))(p_1301->g_532.s00)), ((*l_544) = (+(((!(p_1301->g_11.x = (l_531.s7 != ((safe_rshift_func_uint8_t_u_u(0x04L, 7)) != ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 8))(l_537.xyyyxxxy)).s6545555023376375, (int64_t)((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((((1UL & l_537.x) || ((safe_add_func_uint8_t_u_u(p_1301->g_420.f1, 0x76L)) , p_68)) <= p_68) != 1UL), 0x3DL)), 7)) || p_68), (int64_t)0x1ED04D9F6AEFDF64L))).s5647)).z)))) ^ 4294967295UL) ^ 0x1839L))), ((VECTOR(uint16_t, 4))(0UL)), FAKE_DIVERGE(p_1301->local_0_offset, get_local_id(0), 10), GROUP_DIVERGE(1, 1), 0UL, p_68, 0x9012L, 3UL)).even, ((VECTOR(uint16_t, 8))(0x9C42L))))).s7, p_68)) && 0x97345322BE84C258L) != p_1301->g_64.s2)))), p_1301->g_192.s2)) ^ p_68)) == p_1301->g_326.y), p_68));
                l_547 ^= (l_545 ^= l_546);
                return l_548[0];
            }
        }
        l_80 ^= 1L;
    }
    else
    { /* block id: 248 */
        uint64_t *l_553 = (void*)0;
        uint64_t *l_554 = &p_1301->g_212.f1;
        VECTOR(int32_t, 4) l_555 = (VECTOR(int32_t, 4))(0x225009DCL, (VECTOR(int32_t, 2))(0x225009DCL, 5L), 5L);
        VECTOR(int32_t, 8) l_557 = (VECTOR(int32_t, 8))(0x50949D85L, (VECTOR(int32_t, 4))(0x50949D85L, (VECTOR(int32_t, 2))(0x50949D85L, (-2L)), (-2L)), (-2L), 0x50949D85L, (-2L));
        VECTOR(int32_t, 8) l_559 = (VECTOR(int32_t, 8))(0x3090B093L, (VECTOR(int32_t, 4))(0x3090B093L, (VECTOR(int32_t, 2))(0x3090B093L, 1L), 1L), 1L, 0x3090B093L, 1L);
        VECTOR(int32_t, 2) l_560 = (VECTOR(int32_t, 2))(1L, 0x4CD81706L);
        VECTOR(uint32_t, 4) l_572 = (VECTOR(uint32_t, 4))(6UL, (VECTOR(uint32_t, 2))(6UL, 0UL), 0UL);
        int16_t *l_580 = (void*)0;
        int16_t *l_581 = &p_1301->g_196;
        uint32_t *l_582 = (void*)0;
        int32_t *l_583 = (void*)0;
        int32_t *l_584 = &p_1301->g_473.f4;
        uint32_t l_599 = 0xDE0BD5AAL;
        int32_t *l_659 = (void*)0;
        int32_t *l_660 = (void*)0;
        int32_t *l_661 = &l_84;
        int32_t *l_662 = (void*)0;
        int32_t *l_663 = &p_1301->g_117.f2;
        int32_t *l_664[4][4] = {{(void*)0,(void*)0,&l_452[5],(void*)0},{(void*)0,(void*)0,&l_452[5],(void*)0},{(void*)0,(void*)0,&l_452[5],(void*)0},{(void*)0,(void*)0,&l_452[5],(void*)0}};
        uint8_t l_665 = 0UL;
        int i, j;
        if (((*l_584) = (safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s((p_1301->g_40 | ((((*l_554) = 0xF1C627E15830EE4BL) >= (((((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 2))(l_555.yx)).xyyxxyxyyxxxxxyy, ((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(p_1301->g_556.s2202)))), ((VECTOR(int32_t, 16))(l_557.s1520054573257717)).s8f7e, ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(p_1301->g_558.yxww)).hi)), ((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 8))(0x6D819638L, l_557.s5, ((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_559.s6220354576226043)).sc876, ((VECTOR(int32_t, 4))(0x6E70E82BL, 0x5A8B1559L, 0x592F4CDAL, (-10L))), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(0L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 8))(l_560.xxyxyyxy)).s1626420546570604, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_561.s2414407511675121)))).sc3, ((VECTOR(int32_t, 4))(l_562.sfca2)).even, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(1L, 0x6C0DDDB5L)), 0x236B9FFAL, 0x0416CA58L)).zwxwzyzyzzxxwxxw)).s7d, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 4))(l_563.yxyy)).lo, ((VECTOR(int32_t, 8))(l_564.s05044642)).s07))).xxyy)).hi))), 0x7188BBA9L, (-1L))).lo))).xyyyyyyxxyxxxyxx)).s4d, ((VECTOR(int32_t, 16))(l_565.zxzwywxwxyxwyyxy)).s32, ((VECTOR(int32_t, 16))(p_1301->g_566.yyyyyyxxxxyyxxxy)).s52))).xxxxyxyxyyxxxyyx))).s09f3, ((VECTOR(int32_t, 4))(0L, (p_68 > l_555.x), 0x18344BBAL, 0x563BCA59L)), ((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(l_567.yxyxxxyxxxxyyxxy)).sd63f)).zzwwwywy, ((VECTOR(int32_t, 4))(0x5AF51C15L, 0x0E0200E8L, 0L, 1L)).wzxzzxzz))).even))).even)), (-5L))).yxyzyzwzyzxwywzx)))).s6d1e))), 0x4FB26B7CL, (-1L))), ((VECTOR(int32_t, 4))((safe_mul_func_uint16_t_u_u((p_1301->g_570 , ((p_1301->g_571[0] , ((VECTOR(uint32_t, 8))(mad_sat(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 16))(l_572.wxwyyxxwxxwyyyww)).sf54c, ((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(p_1301->g_573.s31b20b65e5a978b7)))), ((VECTOR(uint32_t, 2))(p_1301->g_574.s21)).xyxxyxxxxxyyyyyy, ((VECTOR(uint32_t, 8))(p_1301->g_575.yxyxxyxx)).s4254041077523077))).lo, ((VECTOR(uint32_t, 4))(9UL, 0x9524EBB9L, 0x11A08AC5L, 4294967291UL)).zzyywzxw))).even, ((VECTOR(uint32_t, 8))((p_68 = (safe_div_func_uint32_t_u_u((((!(((safe_rshift_func_int16_t_s_s(((*l_581) = p_1301->g_158), 12)) && ((p_68 != p_1301->g_403.s7) == (-1L))) | GROUP_DIVERGE(2, 1))) <= 0UL) && p_1301->g_326.y), 0x24DC75D9L))), ((VECTOR(uint32_t, 4))(0xD839D274L)), p_68, 1UL, 0xE8977CCBL)).odd))).xzyywzxz, ((VECTOR(uint32_t, 8))(4294967295UL)), ((VECTOR(uint32_t, 8))(6UL))))).s7) , p_68)), l_560.y)), 0x0E41D213L, 0x7736595EL, 0L)).yzwzwxyz))), 1L, 0x379E0209L, ((VECTOR(int32_t, 4))(8L)))))), ((VECTOR(int32_t, 16))(6L))))).s8c5f))).yzywyzzyxwxyxwzy))).s8 & FAKE_DIVERGE(p_1301->global_1_offset, get_global_id(1), 10)) > 0x545DL) & GROUP_DIVERGE(1, 1))) , p_1301->g_492.s4)), p_1301->g_129[0])), FAKE_DIVERGE(p_1301->global_0_offset, get_global_id(0), 10)))))
        { /* block id: 253 */
            int32_t **l_588 = &l_583;
            for (p_1301->g_473.f4 = (-30); (p_1301->g_473.f4 <= (-4)); p_1301->g_473.f4 = safe_add_func_uint64_t_u_u(p_1301->g_473.f4, 3))
            { /* block id: 256 */
                int16_t l_587 = (-6L);
                (*p_1301->g_145) = (*p_1301->g_145);
                l_587 = 0L;
            }
            (*p_1301->g_145) = (*p_1301->g_145);
            (*l_588) = l_584;
        }
        else
        { /* block id: 262 */
            uint64_t l_589 = 0x4A8DEB865DDA4836L;
            l_589++;
            return l_592[3];
        }
        for (p_1301->g_473.f2 = 0; (p_1301->g_473.f2 != 33); p_1301->g_473.f2 = safe_add_func_int32_t_s_s(p_1301->g_473.f2, 5))
        { /* block id: 268 */
            uint16_t *l_597 = (void*)0;
            uint16_t *l_598[1][9];
            VECTOR(uint16_t, 4) l_609 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 3UL), 3UL);
            uint8_t *l_615 = &p_1301->g_86;
            VECTOR(uint64_t, 2) l_626 = (VECTOR(uint64_t, 2))(0UL, 18446744073709551607UL);
            VECTOR(int8_t, 4) l_631 = (VECTOR(int8_t, 4))(2L, (VECTOR(int8_t, 2))(2L, 0x74L), 0x74L);
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 9; j++)
                    l_598[i][j] = (void*)0;
            }
            (*l_584) = (safe_mul_func_uint16_t_u_u((l_599 = 0x98EBL), (((0xCFABL && (-3L)) == (((p_1301->g_600 , (((safe_rshift_func_uint8_t_u_s(((safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(l_609.zzwzxxxx)).s2, (!(&l_584 == (p_1301->g_610[5][0] , (*l_516)))))), ((*l_615) = (((((safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(0, 1), 0)) <= 0xF9872919507B0076L) == ((safe_rshift_func_uint16_t_u_s((l_609.w ^ p_68), 6)) < p_1301->g_473.f3)) , 0x1790C80330130A1CL) || (*l_584))))), l_609.y)) ^ p_1301->g_473.f4), 2)) , GROUP_DIVERGE(0, 1)) == p_1301->g_117.f6)) <= p_68) , l_609.w)) || 18446744073709551615UL)));
            (*p_1301->g_528) = (p_1301->g_616[6] , (**p_1301->g_527));
            for (p_1301->g_473.f3 = 0; (p_1301->g_473.f3 < 44); ++p_1301->g_473.f3)
            { /* block id: 275 */
                uint16_t *l_633 = &p_1301->g_353.f3;
                VECTOR(uint8_t, 2) l_634 = (VECTOR(uint8_t, 2))(0UL, 1UL);
                VECTOR(int8_t, 2) l_636 = (VECTOR(int8_t, 2))(0x56L, 1L);
                VECTOR(int8_t, 8) l_640 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x2CL), 0x2CL), 0x2CL, 1L, 0x2CL);
                int32_t l_644 = 0x2A3C0166L;
                struct S3 *l_646 = &p_1301->g_645;
                uint32_t *l_649 = &p_1301->g_120;
                int i;
                l_644 ^= (safe_lshift_func_int16_t_s_u((((FAKE_DIVERGE(p_1301->local_0_offset, get_local_id(0), 10) , FAKE_DIVERGE(p_1301->global_0_offset, get_global_id(0), 10)) != (safe_rshift_func_uint16_t_u_u(((*l_633) = ((safe_mod_func_int64_t_s_s(p_1301->g_600.f2.f1, ((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 4))(rotate(((VECTOR(uint64_t, 16))(l_625.s294881b9f4721648)).s96c0, ((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 8))(abs(((VECTOR(uint64_t, 16))(l_626.xyxyyxyyxyyyxyyy)).even))).s1655670124502056))).s05aa))).wwyxwwyw, (uint64_t)(safe_mod_func_uint64_t_u_u((((safe_mul_func_uint16_t_u_u(((((p_1301->g_632 = (0x4BL == ((VECTOR(int8_t, 8))(l_631.xyxyyyzz)).s0)) , (((l_633 == (((((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_634.yyxxyxyx)).even)).lo)), (p_1301->g_353.f3 && l_635), ((VECTOR(uint8_t, 4))(abs_diff(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(l_636.yxxx)), ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 2))(clz(((VECTOR(int8_t, 8))(p_1301->g_637.s27635234)).s63))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(0x57L, 1L, ((VECTOR(int8_t, 2))(l_638.xy)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 2))(0x6DL, 0x70L)).xyyxxyxy, ((VECTOR(int8_t, 16))(0x74L, 6L, ((VECTOR(int8_t, 2))(p_1301->g_639.xy)), 0x07L, p_1301->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1301->tid, 17))], 0x58L, ((VECTOR(int8_t, 2))(l_640.s50)), (((p_68 >= (((((p_1301->g_56 > l_636.y) || p_1301->g_64.sc) == p_68) , l_581) != l_641)) ^ 0x1887C445DD7BB88CL) ^ 0x76B3L), ((VECTOR(int8_t, 4))((-1L))), 0x2BL, 0x5FL)).odd))))).s40, ((VECTOR(int8_t, 2))(0x19L))))))), 1L, 0x12L)).hi)).hi))).yyyy))), ((VECTOR(int8_t, 4))(0x6AL))))), 255UL)).lo)).x <= (*l_584)) ^ p_68) , (void*)0)) > 0x7AL) || p_1301->g_566.y)) , 1L) && 0x6CD8313CL), p_68)) , l_642) ^ p_68), (*l_584)))))).s5)) >= 0xD575D29AL)), p_68))) || l_643), l_609.z));
                (*l_646) = p_1301->g_645;
                atomic_xor(&p_1301->g_atomic_reduction[get_linear_group_id()], ((*l_583) = (safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((((*l_649)++) == (p_1301->g_637.s5 || (!l_640.s0))) || (~(((VECTOR(uint32_t, 8))(p_1301->g_652.s8b2d1515)).s3 , ((VECTOR(int16_t, 16))(3L, ((*l_584) | ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_653.xxxxyyxxyyxxxyxy)).odd)).s1), 0x7584L, 0L, ((!GROUP_DIVERGE(1, 1)) ^ (l_631.x || ((p_1301->g_654 , ((p_68 == p_68) | (((((safe_mod_func_uint16_t_u_u((p_68 & ((safe_mul_func_uint8_t_u_u(l_626.x, FAKE_DIVERGE(p_1301->group_1_offset, get_group_id(1), 10))) <= l_636.y)), p_68)) <= l_80) <= 0x1A0CE339CD8AD3F9L) <= 0x43D4A5DBC654F72AL) & 1L))) || 0x2DL))), ((VECTOR(int16_t, 2))(0x50C1L)), 0x4A5CL, (-7L), p_68, 0x53B9L, ((VECTOR(int16_t, 4))(0x6382L)), 0x2729L)).s1))), 0x6553L, ((VECTOR(uint16_t, 4))(0x4AB0L)), 0x5415L, l_634.x, 0xEC31L, ((VECTOR(uint16_t, 4))(0xD98BL)), p_1301->g_616[6].f3, 0xEC37L, 0x8BB1L)).even)).s7, 0x9A9EL))) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1301->v_collective += p_1301->g_atomic_reduction[get_linear_group_id()];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            }
            if (p_68)
                break;
        }
        ++l_665;
    }
    l_565.y = (p_1301->g_668[0][0][1] , ((safe_rshift_func_uint8_t_u_s((p_1301->g_575.x > ((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_671.yxwzyzyy)), 0xE410044CL, ((VECTOR(uint32_t, 16))(0xF0ACD565L, ((VECTOR(uint32_t, 8))(mul_hi(((VECTOR(uint32_t, 8))(l_672.s33773232)), ((VECTOR(uint32_t, 2))(4294967295UL, 3UL)).yxyyxxxx))), ((VECTOR(uint32_t, 2))(1UL, 0x1CA729DFL)), 0xB50A7164L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_673.wwwyxyyz)).s02)), 0xC0EA5979L, 6UL)).s2, 0xCC6A0511L, 7UL, 0xF5F9BCA5L, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0xCFA89CA6L, 0xBD0990BFL)), 0xE146A85CL, ((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0x1125ED1BL, 4294967291UL)), 0xDA336877L, 4294967295UL)), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0x7A0B84F8L, 0x8590E45DL)))).xyyy))), 0x74EE2780L)).s25)), 0xFB96343AL)).odd, ((VECTOR(uint32_t, 16))(l_674.xyxwyxwyzwxwxzxz)).even))), ((VECTOR(uint32_t, 2))(l_675.s71)).xxyyyxxy, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(l_676.s4b)).xyxyxyyxyyxxxyxy)).even))))).s4 , (void*)0) == l_677[2])), (0x4A862512L != p_1301->g_40))) != (((safe_mul_func_uint16_t_u_u(((p_1301->g_212.f1 , 1UL) , ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_680.s4677)), ((*l_685) |= (p_1301->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1301->tid, 17))] & l_681[2])), 0xD8EDL, 0x08ACL, 0UL)).s6), p_68)) < p_1301->g_570.f3) | 4UL)));
    return l_592[3];
}


/* ------------------------------------------ */
/* 
 * reads : p_1301->g_71 p_1301->g_39 p_1301->g_95 p_1301->l_comm_values p_1301->g_43 p_1301->g_44 p_1301->g_117 p_1301->g_120 p_1301->g_133 p_1301->g_144 p_1301->g_162 p_1301->g_172 p_1301->g_183 p_1301->g_196 p_1301->g_197 p_1301->g_64 p_1301->g_239 p_1301->g_125 p_1301->g_156 p_1301->g_310 p_1301->g_147 p_1301->g_353 p_1301->g_354 p_1301->g_326 p_1301->g_191 p_1301->g_145
 * writes: p_1301->g_39 p_1301->g_43 p_1301->g_120 p_1301->g_117.f1 p_1301->g_133 p_1301->g_183 p_1301->g_196 p_1301->g_198 p_1301->g_213 p_1301->g_212.f1 p_1301->g_239 p_1301->g_290 p_1301->g_117.f2 p_1301->g_117.f5 p_1301->g_353 p_1301->g_197.f0 p_1301->g_326 p_1301->g_146
 */
int32_t  func_72(int64_t * p_73, uint8_t  p_74, int32_t * p_75, uint32_t  p_76, struct S5 * p_1301)
{ /* block id: 27 */
    int16_t l_94 = 0L;
    int32_t l_96 = 0x4337E5C3L;
    VECTOR(int8_t, 4) l_103 = (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x47L), 0x47L);
    uint16_t *l_111 = &p_1301->g_56;
    int16_t l_181 = 0x363CL;
    int32_t l_224 = (-7L);
    int32_t l_227 = 0x0C370A02L;
    int32_t l_228 = 0x41FB209AL;
    int32_t l_229 = 0x3D784E6EL;
    int32_t l_231 = 1L;
    int32_t l_232 = 0x1A88FA0AL;
    int32_t l_234 = (-8L);
    int32_t l_235 = 0x46F841FFL;
    int32_t l_236 = 0x48218CD9L;
    int32_t l_237[5] = {0x79090C8CL,0x79090C8CL,0x79090C8CL,0x79090C8CL,0x79090C8CL};
    int32_t l_260 = (-10L);
    int32_t l_271 = 0L;
    int16_t l_278 = 0x1B0EL;
    int32_t l_279 = 1L;
    int64_t l_378[6] = {7L,7L,7L,7L,7L,7L};
    VECTOR(uint8_t, 8) l_409 = (VECTOR(uint8_t, 8))(0x4FL, (VECTOR(uint8_t, 4))(0x4FL, (VECTOR(uint8_t, 2))(0x4FL, 1UL), 1UL), 1UL, 0x4FL, 1UL);
    uint8_t *l_414[5] = {&p_1301->g_86,&p_1301->g_86,&p_1301->g_86,&p_1301->g_86,&p_1301->g_86};
    int i;
    for (p_74 = 0; (p_74 < 30); p_74 = safe_add_func_int16_t_s_s(p_74, 7))
    { /* block id: 30 */
        int32_t l_93 = 0x4DBDB142L;
        int32_t **l_100 = &p_1301->g_39;
        int32_t ***l_99 = &l_100;
        int32_t *l_106[1][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        uint16_t *l_110 = &p_1301->g_56;
        uint16_t **l_109 = &l_110;
        uint16_t **l_112 = &l_111;
        uint32_t l_118 = 0x59D2773DL;
        int8_t *l_119 = (void*)0;
        VECTOR(uint16_t, 16) l_135 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xACFBL), 0xACFBL), 0xACFBL, 0UL, 0xACFBL, (VECTOR(uint16_t, 2))(0UL, 0xACFBL), (VECTOR(uint16_t, 2))(0UL, 0xACFBL), 0UL, 0xACFBL, 0UL, 0xACFBL);
        uint64_t **l_169 = &p_1301->g_168[6];
        uint64_t l_208 = 0x0B3376282E646FBAL;
        VECTOR(int32_t, 8) l_225 = (VECTOR(int32_t, 8))(0x4850E0C1L, (VECTOR(int32_t, 4))(0x4850E0C1L, (VECTOR(int32_t, 2))(0x4850E0C1L, (-1L)), (-1L)), (-1L), 0x4850E0C1L, (-1L));
        int8_t l_238[4];
        int i, j;
        for (i = 0; i < 4; i++)
            l_238[i] = (-1L);
        if ((p_75 != (*p_1301->g_71)))
        { /* block id: 31 */
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1301->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[(safe_mod_func_uint32_t_u_u(l_93, 10))][(safe_mod_func_uint32_t_u_u(p_1301->tid, 17))]));
            if (l_94)
                continue;
        }
        else
        { /* block id: 36 */
            int32_t l_97 = 1L;
            (*p_1301->g_95) = (*p_1301->g_71);
            l_96 |= l_93;
            if (l_97)
                break;
        }
        (*l_99) = &p_1301->g_39;
        p_1301->g_43 |= (safe_div_func_int8_t_s_s(((VECTOR(int8_t, 16))(l_103.yyzyxwwwxzzwwwyy)).s1, (safe_lshift_func_int8_t_s_u(p_1301->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1301->tid, 17))], 4))));
        if ((safe_add_func_uint64_t_u_u(((((*l_109) = &p_1301->g_56) != ((*l_112) = l_111)) , ((+(~(((p_1301->g_120 &= ((0x72896A24L || (((void*)0 != l_111) > (safe_add_func_uint64_t_u_u(1UL, ((safe_mod_func_uint64_t_u_u(18446744073709551615UL, p_1301->g_44)) < (p_1301->g_117 , p_76)))))) | l_118)) && l_103.y) == 0xEAF73BA8L))) < p_74)), l_96)))
        { /* block id: 46 */
            uint64_t l_128 = 1UL;
            VECTOR(int64_t, 2) l_130 = (VECTOR(int64_t, 2))(0x5CE3446011D501A0L, 0x47AF3233E6B62B2DL);
            VECTOR(int32_t, 8) l_131 = (VECTOR(int32_t, 8))(0x08D5A12BL, (VECTOR(int32_t, 4))(0x08D5A12BL, (VECTOR(int32_t, 2))(0x08D5A12BL, 1L), 1L), 1L, 0x08D5A12BL, 1L);
            int32_t l_138 = (-1L);
            int32_t l_139 = 1L;
            int8_t l_159 = 0x47L;
            uint32_t l_175 = 0UL;
            int32_t l_179 = 1L;
            int32_t l_182 = 0x024737F3L;
            VECTOR(int16_t, 16) l_190 = (VECTOR(int16_t, 16))(0x4616L, (VECTOR(int16_t, 4))(0x4616L, (VECTOR(int16_t, 2))(0x4616L, 1L), 1L), 1L, 0x4616L, 1L, (VECTOR(int16_t, 2))(0x4616L, 1L), (VECTOR(int16_t, 2))(0x4616L, 1L), 0x4616L, 1L, 0x4616L, 1L);
            uint64_t ***l_206 = (void*)0;
            int i;
            for (p_1301->g_117.f1 = 0; (p_1301->g_117.f1 <= 29); p_1301->g_117.f1++)
            { /* block id: 49 */
                uint64_t *l_164 = &l_128;
                uint64_t **l_163 = &l_164;
                int32_t l_180 = 0x6F6D4199L;
                VECTOR(int16_t, 2) l_207 = (VECTOR(int16_t, 2))((-9L), 0L);
                int i;
                for (p_1301->g_120 = 5; (p_1301->g_120 == 40); ++p_1301->g_120)
                { /* block id: 52 */
                    VECTOR(int32_t, 8) l_126 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x7455E0D3L), 0x7455E0D3L), 0x7455E0D3L, 1L, 0x7455E0D3L);
                    int32_t l_127[1];
                    VECTOR(uint32_t, 2) l_132 = (VECTOR(uint32_t, 2))(0x575A0834L, 0x3BFC78DCL);
                    int i;
                    for (i = 0; i < 1; i++)
                        l_127[i] = (-3L);
                    l_96 ^= (l_127[0] &= ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1301->g_125.yxyx)), 5L, ((VECTOR(int32_t, 2))(l_126.s67)), 0x34E9F7E8L)).s6);
                    (**l_99) = (*p_1301->g_95);
                    if (l_128)
                    { /* block id: 56 */
                        uint64_t *l_134[4] = {&l_128,&l_128,&l_128,&l_128};
                        struct S4 *l_161 = &p_1301->g_117;
                        struct S4 **l_160 = &l_161;
                        int i;
                        (*l_99) = &p_1301->g_39;
                        l_139 |= (((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((p_1301->g_129[0] = p_74) < (((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(l_130.yyyxxyxxyyxxxyxy)).s25)).xyxyxxxx)).s75, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(upsample(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_131.s47)).xxxy)).hi, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(l_132.xxxyyxxy)).s2206054420667071)).sb0))).yxyxxxyy)).s14))))).xyxyyyyy)).s4601216777117623))))).s6e)), 0x0875917A22F150D1L, 0x4DD5D329C145D4FDL)).y == (l_96 = ((VECTOR(uint64_t, 16))(p_1301->g_133.s0734643171120350)).se))), ((VECTOR(uint16_t, 4))(l_135.s1e1f)), ((VECTOR(uint16_t, 2))(65535UL, 0xC376L)), 0UL)).odd)).z , ((((safe_lshift_func_int16_t_s_s((l_138 = ((FAKE_DIVERGE(p_1301->global_1_offset, get_global_id(1), 10) <= p_1301->g_43) , p_1301->g_117.f6)), 2)) , (p_1301->g_133.s5--)) >= (safe_lshift_func_int16_t_s_s(((void*)0 == p_1301->g_144[0][2][2]), 13))) ^ l_159));
                        (*l_160) = &p_1301->g_117;
                        if (p_1301->g_162)
                            break;
                    }
                    else
                    { /* block id: 65 */
                        l_169 = l_163;
                        return l_126.s5;
                    }
                }
                if ((safe_div_func_int64_t_s_s(((p_1301->g_172 , (safe_mul_func_int8_t_s_s(((-2L) | 0x9F7B3F3958A3B074L), l_103.z))) && l_175), 0x079C38A45CE233F4L)))
                { /* block id: 70 */
                    uint32_t l_176 = 3UL;
                    l_176++;
                    ++p_1301->g_183;
                    if (l_180)
                        continue;
                }
                else
                { /* block id: 74 */
                    int64_t *l_195 = (void*)0;
                    int32_t l_205 = 0x07189E9FL;
                    l_180 = (l_205 = ((safe_rshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),VECTOR(int16_t, 16),((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_190.s0c)).xxyxxxxx)).s3116165033500737, ((VECTOR(int16_t, 8))(p_1301->g_191.sb88e0c3c)).s7725550333103664, ((VECTOR(int16_t, 2))(p_1301->g_192.s1a)).yxxyyyyyyxyyxyyy))).s1, (((p_1301->g_196 ^= 0L) ^ 0L) ^ p_74))), 7)) & ((p_1301->g_197[6] , ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0UL, 3UL)).yxyy)).x) , ((l_190.s3 > ((~(((p_1301->g_198 = &l_169) == (((6L || (safe_add_func_uint16_t_u_u((p_1301->g_64.s6 , (safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s((l_180 != l_130.x), l_180)), l_205))), 0x53DAL))) || 7L) , l_206)) == l_207.y)) & p_74)) | 0x57L))));
                }
                l_208 = p_74;
                for (p_76 = (-3); (p_76 != 51); p_76 = safe_add_func_int32_t_s_s(p_76, 7))
                { /* block id: 83 */
                    struct S2 *l_211 = &p_1301->g_212;
                    int32_t l_214 = (-1L);
                    uint32_t l_219 = 0UL;
                    p_1301->g_213[2] = l_211;
                    l_96 = l_214;
                    for (p_1301->g_212.f1 = 0; (p_1301->g_212.f1 <= 16); p_1301->g_212.f1++)
                    { /* block id: 88 */
                        int32_t l_217 = (-3L);
                        int32_t l_218 = 0x339C2C3BL;
                        l_219++;
                        return l_214;
                    }
                }
            }
            for (l_139 = 0; (l_139 >= 2); l_139++)
            { /* block id: 96 */
                if (l_103.y)
                    break;
                if (p_74)
                    continue;
                l_224 = (p_1301->g_117 , p_74);
            }
            if (l_224)
                break;
        }
        else
        { /* block id: 102 */
            int64_t l_226 = 1L;
            int32_t l_230 = 0x2238EC8AL;
            int32_t l_233[3];
            int i;
            for (i = 0; i < 3; i++)
                l_233[i] = 0L;
            p_1301->g_239--;
        }
    }
    if (p_76)
    { /* block id: 106 */
        int16_t l_268[1][4];
        int32_t l_270[2];
        int8_t l_277[1][10] = {{0x3FL,(-2L),8L,(-2L),0x3FL,0x3FL,(-2L),8L,(-2L),0x3FL}};
        uint16_t **l_288 = &l_111;
        uint64_t ***l_302 = &p_1301->g_167;
        uint64_t ***l_303 = &p_1301->g_167;
        uint32_t l_314 = 0x719C6E35L;
        int8_t l_345 = 0x30L;
        uint32_t l_349 = 4294967295UL;
        int32_t *l_355 = &p_1301->g_353.f1;
        struct S3 *l_374 = &p_1301->g_353;
        int64_t l_375 = 0x1A4990B94084294CL;
        VECTOR(int8_t, 4) l_394 = (VECTOR(int8_t, 4))(0x71L, (VECTOR(int8_t, 2))(0x71L, 0x07L), 0x07L);
        struct S2 *l_396[10] = {&p_1301->g_212,&p_1301->g_212,&p_1301->g_212,&p_1301->g_212,&p_1301->g_212,&p_1301->g_212,&p_1301->g_212,&p_1301->g_212,&p_1301->g_212,&p_1301->g_212};
        uint64_t *l_442 = &p_1301->g_197[6].f0;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_268[i][j] = 0x1356L;
        }
        for (i = 0; i < 2; i++)
            l_270[i] = (-3L);
        if ((atomic_inc(&p_1301->g_atomic_input[82 * get_linear_group_id() + 20]) == 0))
        { /* block id: 108 */
            VECTOR(int64_t, 2) l_242 = (VECTOR(int64_t, 2))(0x435AC691DC7A7DE5L, 0x67E6AB817C311D1FL);
            uint8_t l_243[3][2] = {{1UL,0x39L},{1UL,0x39L},{1UL,0x39L}};
            int i, j;
            ++l_243[2][0];
            for (l_242.x = 29; (l_242.x != (-16)); l_242.x--)
            { /* block id: 112 */
                int32_t l_249 = 8L;
                int32_t *l_248 = &l_249;
                int32_t *l_250 = &l_249;
                struct S2 l_253 = {0x143FL,1UL};/* VOLATILE GLOBAL l_253 */
                struct S2 *l_252 = &l_253;
                struct S2 **l_251 = &l_252;
                struct S2 **l_254 = &l_252;
                struct S2 **l_255 = &l_252;
                struct S4 l_256[8] = {{0x151541BCL,4UL,-7L,-5L,0x9ECFBAD7L,0x28L,0x321BDCFDL},{0x151541BCL,4UL,-7L,-5L,0x9ECFBAD7L,0x28L,0x321BDCFDL},{0x151541BCL,4UL,-7L,-5L,0x9ECFBAD7L,0x28L,0x321BDCFDL},{0x151541BCL,4UL,-7L,-5L,0x9ECFBAD7L,0x28L,0x321BDCFDL},{0x151541BCL,4UL,-7L,-5L,0x9ECFBAD7L,0x28L,0x321BDCFDL},{0x151541BCL,4UL,-7L,-5L,0x9ECFBAD7L,0x28L,0x321BDCFDL},{0x151541BCL,4UL,-7L,-5L,0x9ECFBAD7L,0x28L,0x321BDCFDL},{0x151541BCL,4UL,-7L,-5L,0x9ECFBAD7L,0x28L,0x321BDCFDL}};
                struct S4 l_257 = {0x275AC898L,18446744073709551612UL,-1L,0x7C43C31ED0AED94CL,0xC3EFF14AL,0xFDL,0x36A248ADL};/* VOLATILE GLOBAL l_257 */
                int i;
                l_250 = l_248;
                l_255 = (l_254 = l_251);
                l_257 = l_256[4];
            }
            unsigned int result = 0;
            result += l_242.y;
            result += l_242.x;
            int l_243_i0, l_243_i1;
            for (l_243_i0 = 0; l_243_i0 < 3; l_243_i0++) {
                for (l_243_i1 = 0; l_243_i1 < 2; l_243_i1++) {
                    result += l_243[l_243_i0][l_243_i1];
                }
            }
            atomic_add(&p_1301->g_special_values[82 * get_linear_group_id() + 20], result);
        }
        else
        { /* block id: 118 */
            (1 + 1);
        }
        if ((safe_add_func_uint64_t_u_u(l_260, (safe_add_func_int8_t_s_s(p_1301->g_125.x, l_232)))))
        { /* block id: 121 */
            int32_t *l_263 = &l_96;
            int32_t *l_264 = &p_1301->g_117.f2;
            int32_t *l_265 = &l_231;
            int32_t *l_266 = (void*)0;
            int32_t *l_267 = (void*)0;
            int32_t *l_269[10] = {&p_1301->g_44,&p_1301->g_44,(void*)0,&p_1301->g_44,&p_1301->g_44,&p_1301->g_44,&p_1301->g_44,(void*)0,&p_1301->g_44,&p_1301->g_44};
            uint8_t l_273 = 0x73L;
            int8_t l_276 = 0x38L;
            int32_t l_280 = 0x1D81B07AL;
            uint32_t l_281 = 0xE8037975L;
            VECTOR(int64_t, 4) l_292 = (VECTOR(int64_t, 4))(9L, (VECTOR(int64_t, 2))(9L, 0x05734E106A8AA536L), 0x05734E106A8AA536L);
            VECTOR(uint8_t, 8) l_321 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 255UL), 255UL), 255UL, 0UL, 255UL);
            int i;
            ++l_273;
            l_281++;
            if ((l_232 && FAKE_DIVERGE(p_1301->global_0_offset, get_global_id(0), 10)))
            { /* block id: 124 */
                uint16_t ***l_289[2][1];
                uint64_t *l_297 = &p_1301->g_212.f1;
                uint64_t ****l_298 = &p_1301->g_198;
                uint64_t ****l_299 = (void*)0;
                uint64_t ****l_300 = &p_1301->g_198;
                uint64_t ****l_301[8] = {&p_1301->g_198,&p_1301->g_198,&p_1301->g_198,&p_1301->g_198,&p_1301->g_198,&p_1301->g_198,&p_1301->g_198,&p_1301->g_198};
                int32_t l_304 = (-8L);
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_289[i][j] = &l_288;
                }
                (*l_264) &= (safe_div_func_int32_t_s_s(((p_76 != (l_270[0] &= ((l_302 = (((*l_297) = (((safe_rshift_func_int8_t_s_u(((p_1301->g_290 = l_288) != l_288), 2)) >= (p_76 == (((VECTOR(int64_t, 8))(l_292.yyzxyxxw)).s4 && (safe_rshift_func_int16_t_s_s(0x70EAL, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-2L), (-1L))).xyxxyxxyxyxxxxxy)).s0))))) >= ((safe_sub_func_uint16_t_u_u(l_277[0][2], p_1301->g_156)) != (l_227 ^ (&l_270[1] == p_75))))) , (void*)0)) != l_303))) , l_237[3]), l_304));
            }
            else
            { /* block id: 130 */
                uint64_t l_305[2][6][3] = {{{0x35DA6D287245DA1EL,0xC9F266AB6485BB7CL,0x0633A6073A74014EL},{0x35DA6D287245DA1EL,0xC9F266AB6485BB7CL,0x0633A6073A74014EL},{0x35DA6D287245DA1EL,0xC9F266AB6485BB7CL,0x0633A6073A74014EL},{0x35DA6D287245DA1EL,0xC9F266AB6485BB7CL,0x0633A6073A74014EL},{0x35DA6D287245DA1EL,0xC9F266AB6485BB7CL,0x0633A6073A74014EL},{0x35DA6D287245DA1EL,0xC9F266AB6485BB7CL,0x0633A6073A74014EL}},{{0x35DA6D287245DA1EL,0xC9F266AB6485BB7CL,0x0633A6073A74014EL},{0x35DA6D287245DA1EL,0xC9F266AB6485BB7CL,0x0633A6073A74014EL},{0x35DA6D287245DA1EL,0xC9F266AB6485BB7CL,0x0633A6073A74014EL},{0x35DA6D287245DA1EL,0xC9F266AB6485BB7CL,0x0633A6073A74014EL},{0x35DA6D287245DA1EL,0xC9F266AB6485BB7CL,0x0633A6073A74014EL},{0x35DA6D287245DA1EL,0xC9F266AB6485BB7CL,0x0633A6073A74014EL}}};
                int32_t l_335 = 0x7312E624L;
                int32_t l_336 = 0x32E43DBFL;
                int32_t l_338[4][3][6] = {{{0x5AF52770L,0x5F730857L,0x2FA23F84L,1L,0x3D511CD5L,1L},{0x5AF52770L,0x5F730857L,0x2FA23F84L,1L,0x3D511CD5L,1L},{0x5AF52770L,0x5F730857L,0x2FA23F84L,1L,0x3D511CD5L,1L}},{{0x5AF52770L,0x5F730857L,0x2FA23F84L,1L,0x3D511CD5L,1L},{0x5AF52770L,0x5F730857L,0x2FA23F84L,1L,0x3D511CD5L,1L},{0x5AF52770L,0x5F730857L,0x2FA23F84L,1L,0x3D511CD5L,1L}},{{0x5AF52770L,0x5F730857L,0x2FA23F84L,1L,0x3D511CD5L,1L},{0x5AF52770L,0x5F730857L,0x2FA23F84L,1L,0x3D511CD5L,1L},{0x5AF52770L,0x5F730857L,0x2FA23F84L,1L,0x3D511CD5L,1L}},{{0x5AF52770L,0x5F730857L,0x2FA23F84L,1L,0x3D511CD5L,1L},{0x5AF52770L,0x5F730857L,0x2FA23F84L,1L,0x3D511CD5L,1L},{0x5AF52770L,0x5F730857L,0x2FA23F84L,1L,0x3D511CD5L,1L}}};
                uint16_t l_346 = 0UL;
                int i, j, k;
                ++l_305[1][0][2];
                for (p_1301->g_239 = 18; (p_1301->g_239 > 9); p_1301->g_239 = safe_sub_func_int8_t_s_s(p_1301->g_239, 1))
                { /* block id: 134 */
                    int32_t **l_311 = &l_269[7];
                    (*l_265) |= p_1301->g_310[3][1][3];
                    (*l_311) = &l_227;
                }
                for (p_1301->g_117.f5 = 3; (p_1301->g_117.f5 <= 24); p_1301->g_117.f5 = safe_add_func_uint64_t_u_u(p_1301->g_117.f5, 5))
                { /* block id: 140 */
                    VECTOR(uint8_t, 4) l_327 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 253UL), 253UL);
                    uint8_t *l_328 = (void*)0;
                    int32_t l_339 = (-1L);
                    int32_t l_340 = 0x563C8F50L;
                    int32_t l_341 = 0x564F3D65L;
                    int32_t l_342 = 1L;
                    int32_t l_343 = 0x03CE96C0L;
                    int32_t l_344[10][1][4];
                    int i, j, k;
                    for (i = 0; i < 10; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 4; k++)
                                l_344[i][j][k] = 0x65DAE554L;
                        }
                    }
                    --l_314;
                    (*l_263) &= (safe_div_func_uint64_t_u_u(p_76, (safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(l_321.s10531540)).s0, 3))));
                    if ((((safe_add_func_int16_t_s_s((p_75 != p_75), (safe_sub_func_uint32_t_u_u((((((p_1301->g_64.s3 ^ 7UL) < (-10L)) > ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 2))(p_1301->g_326.xy)).xxxx, ((VECTOR(uint8_t, 16))(l_327.xxzwywxxzyxzxxzz)).scd49, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))((p_74 = p_1301->g_212.f0), (safe_div_func_uint32_t_u_u(p_74, (safe_rshift_func_int8_t_s_u(((~(p_74 < (p_1301->g_157[0][1] , p_74))) == l_270[1]), 7)))), 1UL, 0x50L)).even)).xyxy))).zxxwwzywxwwwyyxx)).s5364, ((VECTOR(uint8_t, 4))(0xDFL)), ((VECTOR(uint8_t, 4))(251UL))))).w) , p_1301->g_147) ^ 0L), p_1301->g_44)))) != p_1301->g_125.z) , l_305[1][0][2]))
                    { /* block id: 144 */
                        int64_t l_333 = 0x142E84A6A01E2B20L;
                        int32_t l_334 = 4L;
                        int32_t l_337[9][8][3] = {{{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L}},{{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L}},{{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L}},{{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L}},{{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L}},{{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L}},{{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L}},{{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L}},{{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L},{(-7L),(-9L),1L}}};
                        int i, j, k;
                        l_346--;
                        --l_349;
                        return l_237[3];
                    }
                    else
                    { /* block id: 148 */
                        int32_t *l_352[7][3] = {{&l_270[0],&l_270[1],&l_270[1]},{&l_270[0],&l_270[1],&l_270[1]},{&l_270[0],&l_270[1],&l_270[1]},{&l_270[0],&l_270[1],&l_270[1]},{&l_270[0],&l_270[1],&l_270[1]},{&l_270[0],&l_270[1],&l_270[1]},{&l_270[0],&l_270[1],&l_270[1]}};
                        int i, j;
                        (*p_1301->g_71) = l_352[3][1];
                        if (p_74)
                            break;
                        (*p_1301->g_354) = p_1301->g_353;
                    }
                    l_355 = p_75;
                }
            }
            return p_74;
        }
        else
        { /* block id: 157 */
            VECTOR(uint8_t, 4) l_402 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0xD2L), 0xD2L);
            int32_t l_432 = 0x3B37CA7FL;
            int32_t l_433 = 5L;
            uint32_t l_434 = 4294967292UL;
            int i;
            for (l_260 = 0; (l_260 >= 5); ++l_260)
            { /* block id: 160 */
                int8_t l_377 = 0x5BL;
                int32_t l_425[4] = {0x7612125BL,0x7612125BL,0x7612125BL,0x7612125BL};
                int i;
                for (l_224 = 0; (l_224 < 18); ++l_224)
                { /* block id: 163 */
                    uint16_t *l_364[8][7] = {{&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56,&p_1301->g_56,&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56},{&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56,&p_1301->g_56,&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56},{&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56,&p_1301->g_56,&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56},{&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56,&p_1301->g_56,&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56},{&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56,&p_1301->g_56,&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56},{&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56,&p_1301->g_56,&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56},{&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56,&p_1301->g_56,&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56},{&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56,&p_1301->g_56,&p_1301->g_56,&p_1301->g_353.f3,&p_1301->g_56}};
                    int32_t l_365 = 0L;
                    int32_t l_366 = (-5L);
                    uint64_t *l_371 = &p_1301->g_197[6].f0;
                    uint8_t *l_376 = &p_1301->g_117.f5;
                    int32_t *l_379 = &l_236;
                    VECTOR(int8_t, 16) l_392 = (VECTOR(int8_t, 16))(0x0CL, (VECTOR(int8_t, 4))(0x0CL, (VECTOR(int8_t, 2))(0x0CL, 0x3EL), 0x3EL), 0x3EL, 0x0CL, 0x3EL, (VECTOR(int8_t, 2))(0x0CL, 0x3EL), (VECTOR(int8_t, 2))(0x0CL, 0x3EL), 0x0CL, 0x3EL, 0x0CL, 0x3EL);
                    int32_t **l_437 = &l_379;
                    int i, j;
                    (*l_379) |= (safe_rshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(p_1301->g_353.f1, (l_365 ^= p_74))) <= (((l_366 && (((*l_376) = (safe_div_func_uint32_t_u_u((((safe_mul_func_uint8_t_u_u(0x58L, (0x6EL > ((((((--(*l_371)) == (((((((void*)0 == &p_75) >= p_74) , &l_302) != (void*)0) >= (*l_355)) , 0x3F86E2D0F3BAF9ABL)) && p_1301->g_117.f2) , &p_1301->g_353) == l_374) < p_1301->g_326.x)))) > l_375) == 0x5EL), 0x63A0E2B9L))) >= l_377)) < l_378[5]) && (*l_355))), (*l_355)));
                    for (p_1301->g_117.f2 = 0; (p_1301->g_117.f2 == 11); p_1301->g_117.f2 = safe_add_func_uint64_t_u_u(p_1301->g_117.f2, 7))
                    { /* block id: 170 */
                        (*l_355) = (*l_355);
                        return (*l_355);
                    }
                    for (p_1301->g_212.f1 = 0; (p_1301->g_212.f1 >= 37); p_1301->g_212.f1 = safe_add_func_int8_t_s_s(p_1301->g_212.f1, 5))
                    { /* block id: 176 */
                        VECTOR(int8_t, 2) l_395 = (VECTOR(int8_t, 2))(0x71L, (-5L));
                        uint32_t *l_406 = &l_349;
                        int64_t *l_417 = (void*)0;
                        int64_t *l_418[5][8] = {{&l_378[5],&l_375,(void*)0,&l_378[5],&l_375,&l_378[5],(void*)0,&l_375},{&l_378[5],&l_375,(void*)0,&l_378[5],&l_375,&l_378[5],(void*)0,&l_375},{&l_378[5],&l_375,(void*)0,&l_378[5],&l_375,&l_378[5],(void*)0,&l_375},{&l_378[5],&l_375,(void*)0,&l_378[5],&l_375,&l_378[5],(void*)0,&l_375},{&l_378[5],&l_375,(void*)0,&l_378[5],&l_375,&l_378[5],(void*)0,&l_375}};
                        struct S2 *l_419 = &p_1301->g_420;
                        struct S2 **l_421 = &p_1301->g_213[2];
                        struct S2 **l_422 = &l_419;
                        int16_t l_423 = 9L;
                        int32_t l_424 = (-1L);
                        int32_t *l_426 = &l_231;
                        int32_t *l_427 = &l_96;
                        int32_t *l_428 = &l_227;
                        int32_t *l_429 = (void*)0;
                        int32_t *l_430 = &p_1301->g_117.f2;
                        int32_t *l_431[4][2] = {{&l_365,&l_424},{&l_365,&l_424},{&l_365,&l_424},{&l_365,&l_424}};
                        int i, j;
                        l_425[0] = (l_424 = ((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(mul_hi(((VECTOR(int8_t, 2))(0x4CL, (-1L))).yxxyyxyyyxyyyyxx, ((VECTOR(int8_t, 8))((-4L), ((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 8))(mul_hi(((VECTOR(int8_t, 16))(add_sat(((VECTOR(int8_t, 16))(l_392.s258f22aed1b82ac7)), ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(p_1301->g_393.s4104623223033544)).odd)))).s5020665016324103))).hi, ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(l_394.wxwz)), ((VECTOR(int8_t, 2))(0x4FL, 0L)).yyxx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(l_395.yyxy)).xzzxwwxx)).odd))))).zzwwzxwx)).s26, ((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(0x41L, ((VECTOR(int8_t, 16))((l_396[4] != ((*l_422) = ((*l_421) = ((((safe_div_func_uint32_t_u_u(((((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 2))(mad_hi(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 8))(rhadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1301->g_401.yyxxyxxx)).s7251741162313515)).odd, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_402.wywxzwwwzzxxywxw)).s646d)).xxxwywyw))))).s60, ((VECTOR(uint8_t, 2))(p_1301->g_403.s73))))).yyyxyyxx)).odd, (uint8_t)p_76))).even, ((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(0xA7L, (safe_sub_func_uint64_t_u_u((l_402.x | ((((l_402.x <= (--(*l_406))) || (((VECTOR(uint8_t, 2))(clz(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(mul_hi(((VECTOR(uint8_t, 2))(4UL, 0x3EL)).xxxxyyyyyyxxyxxy, ((VECTOR(uint8_t, 8))(0x0EL, 0x37L, 8UL, ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 2))(l_409.s15)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(((--p_74) >= (safe_sub_func_int64_t_s_s((((p_1301->g_162 , l_414[2]) == &p_1301->g_86) ^ ((safe_add_func_int64_t_s_s(((*l_355) = 0x6882120FC2177D76L), (-6L))) != p_1301->g_11.y)), l_402.x))), p_1301->g_43, 255UL, 1UL)))).hi))), p_1301->g_157[4][5], 0x6AL, 246UL)).s7644231043143354))), ((VECTOR(uint8_t, 16))(0x63L))))).sdc20, ((VECTOR(uint8_t, 4))(0x62L)), ((VECTOR(uint8_t, 4))(249UL))))).even))))).lo >= p_76)) , 0x65C42B68L) && p_76)), l_402.w)), 0xBDL, 5UL)))).xxwyxwwwxyyxxxzy))).s78, ((VECTOR(uint8_t, 2))(0x37L))))).yxyxxxyyyyyxxxyy, ((VECTOR(uint8_t, 16))(0x02L))))).saf, ((VECTOR(uint8_t, 2))(255UL))))).lo, 14)) , (void*)0) == l_419) , p_74), (-1L))) | p_76) && (*l_379)) , &p_1301->g_420)))), p_76, 0x66L, 0x0EL, ((VECTOR(int8_t, 2))(0x2FL)), p_1301->g_420.f0, 0x36L, ((VECTOR(int8_t, 2))(1L)), (-3L), ((VECTOR(int8_t, 4))(0x10L)), 0x5EL)).s7, ((VECTOR(int8_t, 4))(1L)), 0x07L, 0x5AL)).s14, ((VECTOR(int8_t, 2))(0L)), ((VECTOR(int8_t, 2))((-1L))))))))).yyyxyxyxyyyyxyxy)).s3a57, ((VECTOR(int8_t, 4))(8L)), ((VECTOR(int8_t, 4))(5L))))).ywxxyzyy))).odd, (int8_t)(-1L)))), 1L, 0x24L, 0x78L)).s0605042437666611))).s9b)).yxxyyyyxxxxyyyyy)).s3b47)).y, 7)), l_423)), FAKE_DIVERGE(p_1301->global_2_offset, get_global_id(2), 10))) ^ p_76), 65531UL)) || p_1301->g_117.f5));
                        --l_434;
                    }
                    (*l_437) = &l_270[0];
                }
            }
        }
        (*l_355) = (0x75153FCFF7DF80AAL < (l_232 != (safe_lshift_func_uint8_t_u_s(GROUP_DIVERGE(1, 1), (safe_add_func_uint64_t_u_u((++(*l_442)), (safe_mul_func_uint8_t_u_u((p_1301->g_326.x ^= 0x1BL), p_1301->g_191.sd))))))));
        for (l_271 = 0; (l_271 > 18); l_271 = safe_add_func_uint64_t_u_u(l_271, 1))
        { /* block id: 195 */
            uint32_t l_449 = 4294967286UL;
            if (l_449)
                break;
            (*p_1301->g_145) = (void*)0;
        }
    }
    else
    { /* block id: 199 */
        int32_t **l_450[7];
        int i;
        for (i = 0; i < 7; i++)
            l_450[i] = &p_1301->g_39;
        p_75 = (*p_1301->g_71);
    }
    return l_409.s6;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[82];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 82; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[82];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 82; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[17];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 17; i++)
            l_comm_values[i] = 1;
    struct S5 c_1302;
    struct S5* p_1301 = &c_1302;
    struct S5 c_1303 = {
        (VECTOR(int32_t, 2))((-1L), 0x228C51F7L), // p_1301->g_11
        3UL, // p_1301->g_16
        (void*)0, // p_1301->g_39
        (-1L), // p_1301->g_40
        0x3B84767EL, // p_1301->g_43
        0x741179D7L, // p_1301->g_44
        0xFDD7L, // p_1301->g_56
        (VECTOR(int64_t, 16))(0x6F6B910F8796DE13L, (VECTOR(int64_t, 4))(0x6F6B910F8796DE13L, (VECTOR(int64_t, 2))(0x6F6B910F8796DE13L, 5L), 5L), 5L, 0x6F6B910F8796DE13L, 5L, (VECTOR(int64_t, 2))(0x6F6B910F8796DE13L, 5L), (VECTOR(int64_t, 2))(0x6F6B910F8796DE13L, 5L), 0x6F6B910F8796DE13L, 5L, 0x6F6B910F8796DE13L, 5L), // p_1301->g_64
        0x4A0DA2B3C28C6498L, // p_1301->g_66
        &p_1301->g_39, // p_1301->g_71
        0UL, // p_1301->g_86
        &p_1301->g_39, // p_1301->g_95
        (void*)0, // p_1301->g_98
        {0x2332C83DL,0x1EB91146B1AA685BL,-1L,1L,0x85D38864L,0x00L,0x011DC0D2L}, // p_1301->g_117
        0xF3C1E06DL, // p_1301->g_120
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L)), // p_1301->g_125
        {9L,9L,9L,9L,9L,9L,9L}, // p_1301->g_129
        (VECTOR(uint64_t, 8))(0x7F9883E658994066L, (VECTOR(uint64_t, 4))(0x7F9883E658994066L, (VECTOR(uint64_t, 2))(0x7F9883E658994066L, 0UL), 0UL), 0UL, 0x7F9883E658994066L, 0UL), // p_1301->g_133
        (-1L), // p_1301->g_147
        0x086712C9L, // p_1301->g_148
        (-6L), // p_1301->g_149
        0x4295DAE6L, // p_1301->g_150
        (-7L), // p_1301->g_151
        0L, // p_1301->g_152
        {8L,8L,8L}, // p_1301->g_153
        0x47A2C698L, // p_1301->g_154
        (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 0x64F93B81L), 0x64F93B81L), // p_1301->g_155
        0x26CA5C41L, // p_1301->g_156
        {{0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L},{0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L},{0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L},{0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L},{0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L,0x6C6276A1L}}, // p_1301->g_157
        0x11F0B045L, // p_1301->g_158
        {{{(void*)0,(void*)0,&p_1301->g_156,&p_1301->g_152,&p_1301->g_158}},{{(void*)0,(void*)0,&p_1301->g_156,&p_1301->g_152,&p_1301->g_158}},{{(void*)0,(void*)0,&p_1301->g_156,&p_1301->g_152,&p_1301->g_158}},{{(void*)0,(void*)0,&p_1301->g_156,&p_1301->g_152,&p_1301->g_158}},{{(void*)0,(void*)0,&p_1301->g_156,&p_1301->g_152,&p_1301->g_158}},{{(void*)0,(void*)0,&p_1301->g_156,&p_1301->g_152,&p_1301->g_158}}}, // p_1301->g_146
        &p_1301->g_146[4][0][2], // p_1301->g_145
        {{{&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145},{&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145},{&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145},{&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145},{&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145},{&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145,&p_1301->g_145}}}, // p_1301->g_144
        0x478AF0DFL, // p_1301->g_162
        (void*)0, // p_1301->g_165
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1301->g_168
        &p_1301->g_168[6], // p_1301->g_167
        {&p_1301->g_167,&p_1301->g_167,&p_1301->g_167,&p_1301->g_167,&p_1301->g_167,&p_1301->g_167}, // p_1301->g_166
        {65535UL,0xACB5969875F21B87L}, // p_1301->g_172
        254UL, // p_1301->g_183
        (VECTOR(int16_t, 16))(7L, (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x1A9AL), 0x1A9AL), 0x1A9AL, 7L, 0x1A9AL, (VECTOR(int16_t, 2))(7L, 0x1A9AL), (VECTOR(int16_t, 2))(7L, 0x1A9AL), 7L, 0x1A9AL, 7L, 0x1A9AL), // p_1301->g_191
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 3L), 3L), 3L, (-1L), 3L, (VECTOR(int16_t, 2))((-1L), 3L), (VECTOR(int16_t, 2))((-1L), 3L), (-1L), 3L, (-1L), 3L), // p_1301->g_192
        0x4D48L, // p_1301->g_196
        {{18446744073709551608UL},{18446744073709551608UL},{18446744073709551608UL},{18446744073709551608UL},{18446744073709551608UL},{18446744073709551608UL},{18446744073709551608UL},{18446744073709551608UL}}, // p_1301->g_197
        &p_1301->g_167, // p_1301->g_198
        {0x039AL,0x74F5C35F3DD4075EL}, // p_1301->g_212
        {&p_1301->g_212,&p_1301->g_212,&p_1301->g_212,&p_1301->g_212,&p_1301->g_212}, // p_1301->g_213
        1UL, // p_1301->g_239
        0x508FL, // p_1301->g_272
        (void*)0, // p_1301->g_291
        &p_1301->g_291, // p_1301->g_290
        {{{(-8L),0x2474208FL,0x3C26C68AL,0x314A1338L,0x2474208FL},{(-8L),0x2474208FL,0x3C26C68AL,0x314A1338L,0x2474208FL}},{{(-8L),0x2474208FL,0x3C26C68AL,0x314A1338L,0x2474208FL},{(-8L),0x2474208FL,0x3C26C68AL,0x314A1338L,0x2474208FL}},{{(-8L),0x2474208FL,0x3C26C68AL,0x314A1338L,0x2474208FL},{(-8L),0x2474208FL,0x3C26C68AL,0x314A1338L,0x2474208FL}},{{(-8L),0x2474208FL,0x3C26C68AL,0x314A1338L,0x2474208FL},{(-8L),0x2474208FL,0x3C26C68AL,0x314A1338L,0x2474208FL}}}, // p_1301->g_310
        (VECTOR(uint8_t, 2))(0xF0L, 1UL), // p_1301->g_326
        {0UL,0x4E8F4463L,{0UL,0x07B63C334EAA2BFFL},65535UL}, // p_1301->g_353
        &p_1301->g_353, // p_1301->g_354
        (VECTOR(int8_t, 8))(0x52L, (VECTOR(int8_t, 4))(0x52L, (VECTOR(int8_t, 2))(0x52L, (-10L)), (-10L)), (-10L), 0x52L, (-10L)), // p_1301->g_393
        (VECTOR(uint8_t, 2))(0x9FL, 0xA7L), // p_1301->g_401
        (VECTOR(uint8_t, 8))(0x5FL, (VECTOR(uint8_t, 4))(0x5FL, (VECTOR(uint8_t, 2))(0x5FL, 0xD4L), 0xD4L), 0xD4L, 0x5FL, 0xD4L), // p_1301->g_403
        {0UL,1UL}, // p_1301->g_420
        (VECTOR(int32_t, 2))(1L, (-1L)), // p_1301->g_464
        {1L,4294967289UL,0UL,0xDD7DF3C3L,0x09A31501L}, // p_1301->g_473
        (VECTOR(int32_t, 16))(0x78B7CE9BL, (VECTOR(int32_t, 4))(0x78B7CE9BL, (VECTOR(int32_t, 2))(0x78B7CE9BL, 2L), 2L), 2L, 0x78B7CE9BL, 2L, (VECTOR(int32_t, 2))(0x78B7CE9BL, 2L), (VECTOR(int32_t, 2))(0x78B7CE9BL, 2L), 0x78B7CE9BL, 2L, 0x78B7CE9BL, 2L), // p_1301->g_492
        &p_1301->g_117, // p_1301->g_528
        &p_1301->g_528, // p_1301->g_527
        (VECTOR(uint16_t, 8))(0x1BE8L, (VECTOR(uint16_t, 4))(0x1BE8L, (VECTOR(uint16_t, 2))(0x1BE8L, 0x61EBL), 0x61EBL), 0x61EBL, 0x1BE8L, 0x61EBL), // p_1301->g_532
        (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x7BC864DCL), 0x7BC864DCL), 0x7BC864DCL, (-1L), 0x7BC864DCL), // p_1301->g_556
        (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x01D334EDL), 0x01D334EDL), // p_1301->g_558
        (VECTOR(int32_t, 2))(0x7290DEA5L, (-1L)), // p_1301->g_566
        {2L,4294967295UL,0x16155BD3L,0xDB91C75AL,0x7A3D99A1L}, // p_1301->g_570
        {{0UL,0xB4B1A72D6D333E8BL}}, // p_1301->g_571
        (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967286UL), 4294967286UL), 4294967286UL, 0UL, 4294967286UL, (VECTOR(uint32_t, 2))(0UL, 4294967286UL), (VECTOR(uint32_t, 2))(0UL, 4294967286UL), 0UL, 4294967286UL, 0UL, 4294967286UL), // p_1301->g_573
        (VECTOR(uint32_t, 8))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 1UL), 1UL), 1UL, 1UL, 1UL), // p_1301->g_574
        (VECTOR(uint32_t, 2))(0x782AB858L, 1UL), // p_1301->g_575
        {9UL,0x283A119EL,{5UL,0UL},0x5D45L}, // p_1301->g_600
        {{{0x51C29C0EL,0x50B3269EF70869D6L,0x6AA4CB54L,0x569A9DB7E15BDB17L,0xDC0F28BDL,1UL,0x26A778ACL},{0x03D0C84FL,0xA7474D6F881C7EA1L,0x41ED9F1BL,0L,7UL,255UL,0x4DEE1B3FL},{0x5779C80FL,18446744073709551608UL,0x352FCFC7L,-4L,0xA59DF1B1L,8UL,8L}},{{0x51C29C0EL,0x50B3269EF70869D6L,0x6AA4CB54L,0x569A9DB7E15BDB17L,0xDC0F28BDL,1UL,0x26A778ACL},{0x03D0C84FL,0xA7474D6F881C7EA1L,0x41ED9F1BL,0L,7UL,255UL,0x4DEE1B3FL},{0x5779C80FL,18446744073709551608UL,0x352FCFC7L,-4L,0xA59DF1B1L,8UL,8L}},{{0x51C29C0EL,0x50B3269EF70869D6L,0x6AA4CB54L,0x569A9DB7E15BDB17L,0xDC0F28BDL,1UL,0x26A778ACL},{0x03D0C84FL,0xA7474D6F881C7EA1L,0x41ED9F1BL,0L,7UL,255UL,0x4DEE1B3FL},{0x5779C80FL,18446744073709551608UL,0x352FCFC7L,-4L,0xA59DF1B1L,8UL,8L}},{{0x51C29C0EL,0x50B3269EF70869D6L,0x6AA4CB54L,0x569A9DB7E15BDB17L,0xDC0F28BDL,1UL,0x26A778ACL},{0x03D0C84FL,0xA7474D6F881C7EA1L,0x41ED9F1BL,0L,7UL,255UL,0x4DEE1B3FL},{0x5779C80FL,18446744073709551608UL,0x352FCFC7L,-4L,0xA59DF1B1L,8UL,8L}},{{0x51C29C0EL,0x50B3269EF70869D6L,0x6AA4CB54L,0x569A9DB7E15BDB17L,0xDC0F28BDL,1UL,0x26A778ACL},{0x03D0C84FL,0xA7474D6F881C7EA1L,0x41ED9F1BL,0L,7UL,255UL,0x4DEE1B3FL},{0x5779C80FL,18446744073709551608UL,0x352FCFC7L,-4L,0xA59DF1B1L,8UL,8L}},{{0x51C29C0EL,0x50B3269EF70869D6L,0x6AA4CB54L,0x569A9DB7E15BDB17L,0xDC0F28BDL,1UL,0x26A778ACL},{0x03D0C84FL,0xA7474D6F881C7EA1L,0x41ED9F1BL,0L,7UL,255UL,0x4DEE1B3FL},{0x5779C80FL,18446744073709551608UL,0x352FCFC7L,-4L,0xA59DF1B1L,8UL,8L}},{{0x51C29C0EL,0x50B3269EF70869D6L,0x6AA4CB54L,0x569A9DB7E15BDB17L,0xDC0F28BDL,1UL,0x26A778ACL},{0x03D0C84FL,0xA7474D6F881C7EA1L,0x41ED9F1BL,0L,7UL,255UL,0x4DEE1B3FL},{0x5779C80FL,18446744073709551608UL,0x352FCFC7L,-4L,0xA59DF1B1L,8UL,8L}},{{0x51C29C0EL,0x50B3269EF70869D6L,0x6AA4CB54L,0x569A9DB7E15BDB17L,0xDC0F28BDL,1UL,0x26A778ACL},{0x03D0C84FL,0xA7474D6F881C7EA1L,0x41ED9F1BL,0L,7UL,255UL,0x4DEE1B3FL},{0x5779C80FL,18446744073709551608UL,0x352FCFC7L,-4L,0xA59DF1B1L,8UL,8L}},{{0x51C29C0EL,0x50B3269EF70869D6L,0x6AA4CB54L,0x569A9DB7E15BDB17L,0xDC0F28BDL,1UL,0x26A778ACL},{0x03D0C84FL,0xA7474D6F881C7EA1L,0x41ED9F1BL,0L,7UL,255UL,0x4DEE1B3FL},{0x5779C80FL,18446744073709551608UL,0x352FCFC7L,-4L,0xA59DF1B1L,8UL,8L}},{{0x51C29C0EL,0x50B3269EF70869D6L,0x6AA4CB54L,0x569A9DB7E15BDB17L,0xDC0F28BDL,1UL,0x26A778ACL},{0x03D0C84FL,0xA7474D6F881C7EA1L,0x41ED9F1BL,0L,7UL,255UL,0x4DEE1B3FL},{0x5779C80FL,18446744073709551608UL,0x352FCFC7L,-4L,0xA59DF1B1L,8UL,8L}}}, // p_1301->g_610
        {{0L,0x42D871063C7C2912L,0x30D43356L,4L,0x82076512L,1UL,0x6257BBDCL},{0x005B8643L,1UL,0x399214D8L,-9L,1UL,251UL,1L},{-8L,0xDE75C2B5CDD2FB71L,0L,-4L,0xDC6685C2L,0x46L,0x723811CFL},{0x005B8643L,1UL,0x399214D8L,-9L,1UL,251UL,1L},{0L,0x42D871063C7C2912L,0x30D43356L,4L,0x82076512L,1UL,0x6257BBDCL},{0L,0x42D871063C7C2912L,0x30D43356L,4L,0x82076512L,1UL,0x6257BBDCL},{0x005B8643L,1UL,0x399214D8L,-9L,1UL,251UL,1L},{-8L,0xDE75C2B5CDD2FB71L,0L,-4L,0xDC6685C2L,0x46L,0x723811CFL},{0x005B8643L,1UL,0x399214D8L,-9L,1UL,251UL,1L},{0L,0x42D871063C7C2912L,0x30D43356L,4L,0x82076512L,1UL,0x6257BBDCL}}, // p_1301->g_616
        0x06L, // p_1301->g_632
        (VECTOR(int8_t, 8))(0x04L, (VECTOR(int8_t, 4))(0x04L, (VECTOR(int8_t, 2))(0x04L, 0x23L), 0x23L), 0x23L, 0x04L, 0x23L), // p_1301->g_637
        (VECTOR(int8_t, 2))(0x00L, 0x29L), // p_1301->g_639
        {0x2E410399L,0x77AB08A0L,{65535UL,1UL},6UL}, // p_1301->g_645
        (VECTOR(uint32_t, 16))(0xED39FCDBL, (VECTOR(uint32_t, 4))(0xED39FCDBL, (VECTOR(uint32_t, 2))(0xED39FCDBL, 0UL), 0UL), 0UL, 0xED39FCDBL, 0UL, (VECTOR(uint32_t, 2))(0xED39FCDBL, 0UL), (VECTOR(uint32_t, 2))(0xED39FCDBL, 0UL), 0xED39FCDBL, 0UL, 0xED39FCDBL, 0UL), // p_1301->g_652
        {0x7EE4F4E1L,0xE0567A499855C971L,0x729B4CE2L,-9L,4UL,0xF6L,0x1ED4D714L}, // p_1301->g_654
        {{{{0x40A0L,0UL},{0x40A0L,0UL},{0x40A0L,0UL}},{{0x40A0L,0UL},{0x40A0L,0UL},{0x40A0L,0UL}},{{0x40A0L,0UL},{0x40A0L,0UL},{0x40A0L,0UL}}},{{{0x40A0L,0UL},{0x40A0L,0UL},{0x40A0L,0UL}},{{0x40A0L,0UL},{0x40A0L,0UL},{0x40A0L,0UL}},{{0x40A0L,0UL},{0x40A0L,0UL},{0x40A0L,0UL}}},{{{0x40A0L,0UL},{0x40A0L,0UL},{0x40A0L,0UL}},{{0x40A0L,0UL},{0x40A0L,0UL},{0x40A0L,0UL}},{{0x40A0L,0UL},{0x40A0L,0UL},{0x40A0L,0UL}}},{{{0x40A0L,0UL},{0x40A0L,0UL},{0x40A0L,0UL}},{{0x40A0L,0UL},{0x40A0L,0UL},{0x40A0L,0UL}},{{0x40A0L,0UL},{0x40A0L,0UL},{0x40A0L,0UL}}}}, // p_1301->g_668
        {9UL}, // p_1301->g_686
        {{(void*)0,&p_1301->g_39},{(void*)0,&p_1301->g_39},{(void*)0,&p_1301->g_39},{(void*)0,&p_1301->g_39},{(void*)0,&p_1301->g_39},{(void*)0,&p_1301->g_39}}, // p_1301->g_688
        1UL, // p_1301->g_696
        &p_1301->g_39, // p_1301->g_709
        {{{&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709},{&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709},{&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709},{&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709}},{{&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709},{&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709},{&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709},{&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709}},{{&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709},{&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709},{&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709},{&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709,&p_1301->g_709}}}, // p_1301->g_708
        {{{{0x3883L,18446744073709551609UL},{65535UL,0x01C2458F3584BCE9L},{0xC8DEL,0x9ECCE292F9182039L},{0xBC5CL,18446744073709551614UL},{65535UL,0x01C2458F3584BCE9L},{0xBC5CL,18446744073709551614UL},{0xC8DEL,0x9ECCE292F9182039L},{65535UL,0x01C2458F3584BCE9L}},{{0x3883L,18446744073709551609UL},{65535UL,0x01C2458F3584BCE9L},{0xC8DEL,0x9ECCE292F9182039L},{0xBC5CL,18446744073709551614UL},{65535UL,0x01C2458F3584BCE9L},{0xBC5CL,18446744073709551614UL},{0xC8DEL,0x9ECCE292F9182039L},{65535UL,0x01C2458F3584BCE9L}},{{0x3883L,18446744073709551609UL},{65535UL,0x01C2458F3584BCE9L},{0xC8DEL,0x9ECCE292F9182039L},{0xBC5CL,18446744073709551614UL},{65535UL,0x01C2458F3584BCE9L},{0xBC5CL,18446744073709551614UL},{0xC8DEL,0x9ECCE292F9182039L},{65535UL,0x01C2458F3584BCE9L}},{{0x3883L,18446744073709551609UL},{65535UL,0x01C2458F3584BCE9L},{0xC8DEL,0x9ECCE292F9182039L},{0xBC5CL,18446744073709551614UL},{65535UL,0x01C2458F3584BCE9L},{0xBC5CL,18446744073709551614UL},{0xC8DEL,0x9ECCE292F9182039L},{65535UL,0x01C2458F3584BCE9L}}}}, // p_1301->g_712
        {65531UL,18446744073709551606UL}, // p_1301->g_714
        {0x7D74FDDEL,0x3E150F2BL,0x220D2079L,6UL,0x52EAD3E6L}, // p_1301->g_721
        {0x0EA7AF24L,1UL,4UL,9UL,-8L}, // p_1301->g_729
        &p_1301->g_290, // p_1301->g_764
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x5D41403B611D3D39L), 0x5D41403B611D3D39L), 0x5D41403B611D3D39L, 1L, 0x5D41403B611D3D39L, (VECTOR(int64_t, 2))(1L, 0x5D41403B611D3D39L), (VECTOR(int64_t, 2))(1L, 0x5D41403B611D3D39L), 1L, 0x5D41403B611D3D39L, 1L, 0x5D41403B611D3D39L), // p_1301->g_774
        {0x1CDC1F08L,0UL,0x58CB1F47L,0x85F032ACL,0x52C785CCL}, // p_1301->g_799
        4L, // p_1301->g_810
        {0x7B9CAD50L,4L,{0x034BL,18446744073709551615UL},0x146EL}, // p_1301->g_812
        (VECTOR(int64_t, 16))(0x2456EC39BCB633E4L, (VECTOR(int64_t, 4))(0x2456EC39BCB633E4L, (VECTOR(int64_t, 2))(0x2456EC39BCB633E4L, (-1L)), (-1L)), (-1L), 0x2456EC39BCB633E4L, (-1L), (VECTOR(int64_t, 2))(0x2456EC39BCB633E4L, (-1L)), (VECTOR(int64_t, 2))(0x2456EC39BCB633E4L, (-1L)), 0x2456EC39BCB633E4L, (-1L), 0x2456EC39BCB633E4L, (-1L)), // p_1301->g_819
        (VECTOR(int64_t, 8))(0x18A33B1E4B04BD99L, (VECTOR(int64_t, 4))(0x18A33B1E4B04BD99L, (VECTOR(int64_t, 2))(0x18A33B1E4B04BD99L, 0x4557776C49BFFED2L), 0x4557776C49BFFED2L), 0x4557776C49BFFED2L, 0x18A33B1E4B04BD99L, 0x4557776C49BFFED2L), // p_1301->g_820
        {{0xA926E28BL,8UL,0xA4198143L,1UL,4294967295UL,0xAD972547L,1UL,0x103544D8L,8UL,2UL},{0xA926E28BL,8UL,0xA4198143L,1UL,4294967295UL,0xAD972547L,1UL,0x103544D8L,8UL,2UL},{0xA926E28BL,8UL,0xA4198143L,1UL,4294967295UL,0xAD972547L,1UL,0x103544D8L,8UL,2UL},{0xA926E28BL,8UL,0xA4198143L,1UL,4294967295UL,0xAD972547L,1UL,0x103544D8L,8UL,2UL},{0xA926E28BL,8UL,0xA4198143L,1UL,4294967295UL,0xAD972547L,1UL,0x103544D8L,8UL,2UL},{0xA926E28BL,8UL,0xA4198143L,1UL,4294967295UL,0xAD972547L,1UL,0x103544D8L,8UL,2UL},{0xA926E28BL,8UL,0xA4198143L,1UL,4294967295UL,0xAD972547L,1UL,0x103544D8L,8UL,2UL},{0xA926E28BL,8UL,0xA4198143L,1UL,4294967295UL,0xAD972547L,1UL,0x103544D8L,8UL,2UL}}, // p_1301->g_831
        &p_1301->g_197[6], // p_1301->g_920
        {0UL}, // p_1301->g_934
        3L, // p_1301->g_1056
        &p_1301->g_129[0], // p_1301->g_1093
        &p_1301->g_1093, // p_1301->g_1092
        (void*)0, // p_1301->g_1096
        {&p_1301->g_353.f1,(void*)0,&p_1301->g_353.f1,&p_1301->g_353.f1,(void*)0,&p_1301->g_353.f1}, // p_1301->g_1097
        &p_1301->g_1056, // p_1301->g_1098
        {{0xF80AL,1UL},{0xF80AL,1UL},{0xF80AL,1UL},{0xF80AL,1UL},{0xF80AL,1UL},{0xF80AL,1UL},{0xF80AL,1UL},{0xF80AL,1UL}}, // p_1301->g_1100
        {{0xC360L,0x786A870278185459L},{65527UL,0xC97AA69C4A5F8DE3L},{0xC360L,0x786A870278185459L},{0xC360L,0x786A870278185459L},{65527UL,0xC97AA69C4A5F8DE3L},{0xC360L,0x786A870278185459L},{0xC360L,0x786A870278185459L},{65527UL,0xC97AA69C4A5F8DE3L},{0xC360L,0x786A870278185459L},{0xC360L,0x786A870278185459L}}, // p_1301->g_1102
        {0x86EDL,18446744073709551615UL}, // p_1301->g_1103
        {3UL,0x50F7ECFB904B7ADDL}, // p_1301->g_1104
        &p_1301->g_117.f2, // p_1301->g_1105
        0, // p_1301->v_collective
        sequence_input[get_global_id(0)], // p_1301->global_0_offset
        sequence_input[get_global_id(1)], // p_1301->global_1_offset
        sequence_input[get_global_id(2)], // p_1301->global_2_offset
        sequence_input[get_local_id(0)], // p_1301->local_0_offset
        sequence_input[get_local_id(1)], // p_1301->local_1_offset
        sequence_input[get_local_id(2)], // p_1301->local_2_offset
        sequence_input[get_group_id(0)], // p_1301->group_0_offset
        sequence_input[get_group_id(1)], // p_1301->group_1_offset
        sequence_input[get_group_id(2)], // p_1301->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 17)), permutations[0][get_linear_local_id()])), // p_1301->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1302 = c_1303;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1301);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1301->g_11.x, "p_1301->g_11.x", print_hash_value);
    transparent_crc(p_1301->g_11.y, "p_1301->g_11.y", print_hash_value);
    transparent_crc(p_1301->g_16, "p_1301->g_16", print_hash_value);
    transparent_crc(p_1301->g_40, "p_1301->g_40", print_hash_value);
    transparent_crc(p_1301->g_43, "p_1301->g_43", print_hash_value);
    transparent_crc(p_1301->g_44, "p_1301->g_44", print_hash_value);
    transparent_crc(p_1301->g_56, "p_1301->g_56", print_hash_value);
    transparent_crc(p_1301->g_64.s0, "p_1301->g_64.s0", print_hash_value);
    transparent_crc(p_1301->g_64.s1, "p_1301->g_64.s1", print_hash_value);
    transparent_crc(p_1301->g_64.s2, "p_1301->g_64.s2", print_hash_value);
    transparent_crc(p_1301->g_64.s3, "p_1301->g_64.s3", print_hash_value);
    transparent_crc(p_1301->g_64.s4, "p_1301->g_64.s4", print_hash_value);
    transparent_crc(p_1301->g_64.s5, "p_1301->g_64.s5", print_hash_value);
    transparent_crc(p_1301->g_64.s6, "p_1301->g_64.s6", print_hash_value);
    transparent_crc(p_1301->g_64.s7, "p_1301->g_64.s7", print_hash_value);
    transparent_crc(p_1301->g_64.s8, "p_1301->g_64.s8", print_hash_value);
    transparent_crc(p_1301->g_64.s9, "p_1301->g_64.s9", print_hash_value);
    transparent_crc(p_1301->g_64.sa, "p_1301->g_64.sa", print_hash_value);
    transparent_crc(p_1301->g_64.sb, "p_1301->g_64.sb", print_hash_value);
    transparent_crc(p_1301->g_64.sc, "p_1301->g_64.sc", print_hash_value);
    transparent_crc(p_1301->g_64.sd, "p_1301->g_64.sd", print_hash_value);
    transparent_crc(p_1301->g_64.se, "p_1301->g_64.se", print_hash_value);
    transparent_crc(p_1301->g_64.sf, "p_1301->g_64.sf", print_hash_value);
    transparent_crc(p_1301->g_66, "p_1301->g_66", print_hash_value);
    transparent_crc(p_1301->g_86, "p_1301->g_86", print_hash_value);
    transparent_crc(p_1301->g_117.f0, "p_1301->g_117.f0", print_hash_value);
    transparent_crc(p_1301->g_117.f1, "p_1301->g_117.f1", print_hash_value);
    transparent_crc(p_1301->g_117.f2, "p_1301->g_117.f2", print_hash_value);
    transparent_crc(p_1301->g_117.f3, "p_1301->g_117.f3", print_hash_value);
    transparent_crc(p_1301->g_117.f4, "p_1301->g_117.f4", print_hash_value);
    transparent_crc(p_1301->g_117.f5, "p_1301->g_117.f5", print_hash_value);
    transparent_crc(p_1301->g_117.f6, "p_1301->g_117.f6", print_hash_value);
    transparent_crc(p_1301->g_120, "p_1301->g_120", print_hash_value);
    transparent_crc(p_1301->g_125.x, "p_1301->g_125.x", print_hash_value);
    transparent_crc(p_1301->g_125.y, "p_1301->g_125.y", print_hash_value);
    transparent_crc(p_1301->g_125.z, "p_1301->g_125.z", print_hash_value);
    transparent_crc(p_1301->g_125.w, "p_1301->g_125.w", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1301->g_129[i], "p_1301->g_129[i]", print_hash_value);

    }
    transparent_crc(p_1301->g_133.s0, "p_1301->g_133.s0", print_hash_value);
    transparent_crc(p_1301->g_133.s1, "p_1301->g_133.s1", print_hash_value);
    transparent_crc(p_1301->g_133.s2, "p_1301->g_133.s2", print_hash_value);
    transparent_crc(p_1301->g_133.s3, "p_1301->g_133.s3", print_hash_value);
    transparent_crc(p_1301->g_133.s4, "p_1301->g_133.s4", print_hash_value);
    transparent_crc(p_1301->g_133.s5, "p_1301->g_133.s5", print_hash_value);
    transparent_crc(p_1301->g_133.s6, "p_1301->g_133.s6", print_hash_value);
    transparent_crc(p_1301->g_133.s7, "p_1301->g_133.s7", print_hash_value);
    transparent_crc(p_1301->g_147, "p_1301->g_147", print_hash_value);
    transparent_crc(p_1301->g_148, "p_1301->g_148", print_hash_value);
    transparent_crc(p_1301->g_149, "p_1301->g_149", print_hash_value);
    transparent_crc(p_1301->g_150, "p_1301->g_150", print_hash_value);
    transparent_crc(p_1301->g_151, "p_1301->g_151", print_hash_value);
    transparent_crc(p_1301->g_152, "p_1301->g_152", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1301->g_153[i], "p_1301->g_153[i]", print_hash_value);

    }
    transparent_crc(p_1301->g_154, "p_1301->g_154", print_hash_value);
    transparent_crc(p_1301->g_155.x, "p_1301->g_155.x", print_hash_value);
    transparent_crc(p_1301->g_155.y, "p_1301->g_155.y", print_hash_value);
    transparent_crc(p_1301->g_155.z, "p_1301->g_155.z", print_hash_value);
    transparent_crc(p_1301->g_155.w, "p_1301->g_155.w", print_hash_value);
    transparent_crc(p_1301->g_156, "p_1301->g_156", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1301->g_157[i][j], "p_1301->g_157[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1301->g_158, "p_1301->g_158", print_hash_value);
    transparent_crc(p_1301->g_162, "p_1301->g_162", print_hash_value);
    transparent_crc(p_1301->g_172.f0, "p_1301->g_172.f0", print_hash_value);
    transparent_crc(p_1301->g_172.f1, "p_1301->g_172.f1", print_hash_value);
    transparent_crc(p_1301->g_183, "p_1301->g_183", print_hash_value);
    transparent_crc(p_1301->g_191.s0, "p_1301->g_191.s0", print_hash_value);
    transparent_crc(p_1301->g_191.s1, "p_1301->g_191.s1", print_hash_value);
    transparent_crc(p_1301->g_191.s2, "p_1301->g_191.s2", print_hash_value);
    transparent_crc(p_1301->g_191.s3, "p_1301->g_191.s3", print_hash_value);
    transparent_crc(p_1301->g_191.s4, "p_1301->g_191.s4", print_hash_value);
    transparent_crc(p_1301->g_191.s5, "p_1301->g_191.s5", print_hash_value);
    transparent_crc(p_1301->g_191.s6, "p_1301->g_191.s6", print_hash_value);
    transparent_crc(p_1301->g_191.s7, "p_1301->g_191.s7", print_hash_value);
    transparent_crc(p_1301->g_191.s8, "p_1301->g_191.s8", print_hash_value);
    transparent_crc(p_1301->g_191.s9, "p_1301->g_191.s9", print_hash_value);
    transparent_crc(p_1301->g_191.sa, "p_1301->g_191.sa", print_hash_value);
    transparent_crc(p_1301->g_191.sb, "p_1301->g_191.sb", print_hash_value);
    transparent_crc(p_1301->g_191.sc, "p_1301->g_191.sc", print_hash_value);
    transparent_crc(p_1301->g_191.sd, "p_1301->g_191.sd", print_hash_value);
    transparent_crc(p_1301->g_191.se, "p_1301->g_191.se", print_hash_value);
    transparent_crc(p_1301->g_191.sf, "p_1301->g_191.sf", print_hash_value);
    transparent_crc(p_1301->g_192.s0, "p_1301->g_192.s0", print_hash_value);
    transparent_crc(p_1301->g_192.s1, "p_1301->g_192.s1", print_hash_value);
    transparent_crc(p_1301->g_192.s2, "p_1301->g_192.s2", print_hash_value);
    transparent_crc(p_1301->g_192.s3, "p_1301->g_192.s3", print_hash_value);
    transparent_crc(p_1301->g_192.s4, "p_1301->g_192.s4", print_hash_value);
    transparent_crc(p_1301->g_192.s5, "p_1301->g_192.s5", print_hash_value);
    transparent_crc(p_1301->g_192.s6, "p_1301->g_192.s6", print_hash_value);
    transparent_crc(p_1301->g_192.s7, "p_1301->g_192.s7", print_hash_value);
    transparent_crc(p_1301->g_192.s8, "p_1301->g_192.s8", print_hash_value);
    transparent_crc(p_1301->g_192.s9, "p_1301->g_192.s9", print_hash_value);
    transparent_crc(p_1301->g_192.sa, "p_1301->g_192.sa", print_hash_value);
    transparent_crc(p_1301->g_192.sb, "p_1301->g_192.sb", print_hash_value);
    transparent_crc(p_1301->g_192.sc, "p_1301->g_192.sc", print_hash_value);
    transparent_crc(p_1301->g_192.sd, "p_1301->g_192.sd", print_hash_value);
    transparent_crc(p_1301->g_192.se, "p_1301->g_192.se", print_hash_value);
    transparent_crc(p_1301->g_192.sf, "p_1301->g_192.sf", print_hash_value);
    transparent_crc(p_1301->g_196, "p_1301->g_196", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1301->g_197[i].f0, "p_1301->g_197[i].f0", print_hash_value);

    }
    transparent_crc(p_1301->g_212.f0, "p_1301->g_212.f0", print_hash_value);
    transparent_crc(p_1301->g_212.f1, "p_1301->g_212.f1", print_hash_value);
    transparent_crc(p_1301->g_239, "p_1301->g_239", print_hash_value);
    transparent_crc(p_1301->g_272, "p_1301->g_272", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1301->g_310[i][j][k], "p_1301->g_310[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1301->g_326.x, "p_1301->g_326.x", print_hash_value);
    transparent_crc(p_1301->g_326.y, "p_1301->g_326.y", print_hash_value);
    transparent_crc(p_1301->g_353.f0, "p_1301->g_353.f0", print_hash_value);
    transparent_crc(p_1301->g_353.f1, "p_1301->g_353.f1", print_hash_value);
    transparent_crc(p_1301->g_353.f2.f0, "p_1301->g_353.f2.f0", print_hash_value);
    transparent_crc(p_1301->g_353.f2.f1, "p_1301->g_353.f2.f1", print_hash_value);
    transparent_crc(p_1301->g_353.f3, "p_1301->g_353.f3", print_hash_value);
    transparent_crc(p_1301->g_393.s0, "p_1301->g_393.s0", print_hash_value);
    transparent_crc(p_1301->g_393.s1, "p_1301->g_393.s1", print_hash_value);
    transparent_crc(p_1301->g_393.s2, "p_1301->g_393.s2", print_hash_value);
    transparent_crc(p_1301->g_393.s3, "p_1301->g_393.s3", print_hash_value);
    transparent_crc(p_1301->g_393.s4, "p_1301->g_393.s4", print_hash_value);
    transparent_crc(p_1301->g_393.s5, "p_1301->g_393.s5", print_hash_value);
    transparent_crc(p_1301->g_393.s6, "p_1301->g_393.s6", print_hash_value);
    transparent_crc(p_1301->g_393.s7, "p_1301->g_393.s7", print_hash_value);
    transparent_crc(p_1301->g_401.x, "p_1301->g_401.x", print_hash_value);
    transparent_crc(p_1301->g_401.y, "p_1301->g_401.y", print_hash_value);
    transparent_crc(p_1301->g_403.s0, "p_1301->g_403.s0", print_hash_value);
    transparent_crc(p_1301->g_403.s1, "p_1301->g_403.s1", print_hash_value);
    transparent_crc(p_1301->g_403.s2, "p_1301->g_403.s2", print_hash_value);
    transparent_crc(p_1301->g_403.s3, "p_1301->g_403.s3", print_hash_value);
    transparent_crc(p_1301->g_403.s4, "p_1301->g_403.s4", print_hash_value);
    transparent_crc(p_1301->g_403.s5, "p_1301->g_403.s5", print_hash_value);
    transparent_crc(p_1301->g_403.s6, "p_1301->g_403.s6", print_hash_value);
    transparent_crc(p_1301->g_403.s7, "p_1301->g_403.s7", print_hash_value);
    transparent_crc(p_1301->g_420.f0, "p_1301->g_420.f0", print_hash_value);
    transparent_crc(p_1301->g_420.f1, "p_1301->g_420.f1", print_hash_value);
    transparent_crc(p_1301->g_464.x, "p_1301->g_464.x", print_hash_value);
    transparent_crc(p_1301->g_464.y, "p_1301->g_464.y", print_hash_value);
    transparent_crc(p_1301->g_473.f0, "p_1301->g_473.f0", print_hash_value);
    transparent_crc(p_1301->g_473.f1, "p_1301->g_473.f1", print_hash_value);
    transparent_crc(p_1301->g_473.f2, "p_1301->g_473.f2", print_hash_value);
    transparent_crc(p_1301->g_473.f3, "p_1301->g_473.f3", print_hash_value);
    transparent_crc(p_1301->g_473.f4, "p_1301->g_473.f4", print_hash_value);
    transparent_crc(p_1301->g_492.s0, "p_1301->g_492.s0", print_hash_value);
    transparent_crc(p_1301->g_492.s1, "p_1301->g_492.s1", print_hash_value);
    transparent_crc(p_1301->g_492.s2, "p_1301->g_492.s2", print_hash_value);
    transparent_crc(p_1301->g_492.s3, "p_1301->g_492.s3", print_hash_value);
    transparent_crc(p_1301->g_492.s4, "p_1301->g_492.s4", print_hash_value);
    transparent_crc(p_1301->g_492.s5, "p_1301->g_492.s5", print_hash_value);
    transparent_crc(p_1301->g_492.s6, "p_1301->g_492.s6", print_hash_value);
    transparent_crc(p_1301->g_492.s7, "p_1301->g_492.s7", print_hash_value);
    transparent_crc(p_1301->g_492.s8, "p_1301->g_492.s8", print_hash_value);
    transparent_crc(p_1301->g_492.s9, "p_1301->g_492.s9", print_hash_value);
    transparent_crc(p_1301->g_492.sa, "p_1301->g_492.sa", print_hash_value);
    transparent_crc(p_1301->g_492.sb, "p_1301->g_492.sb", print_hash_value);
    transparent_crc(p_1301->g_492.sc, "p_1301->g_492.sc", print_hash_value);
    transparent_crc(p_1301->g_492.sd, "p_1301->g_492.sd", print_hash_value);
    transparent_crc(p_1301->g_492.se, "p_1301->g_492.se", print_hash_value);
    transparent_crc(p_1301->g_492.sf, "p_1301->g_492.sf", print_hash_value);
    transparent_crc(p_1301->g_532.s0, "p_1301->g_532.s0", print_hash_value);
    transparent_crc(p_1301->g_532.s1, "p_1301->g_532.s1", print_hash_value);
    transparent_crc(p_1301->g_532.s2, "p_1301->g_532.s2", print_hash_value);
    transparent_crc(p_1301->g_532.s3, "p_1301->g_532.s3", print_hash_value);
    transparent_crc(p_1301->g_532.s4, "p_1301->g_532.s4", print_hash_value);
    transparent_crc(p_1301->g_532.s5, "p_1301->g_532.s5", print_hash_value);
    transparent_crc(p_1301->g_532.s6, "p_1301->g_532.s6", print_hash_value);
    transparent_crc(p_1301->g_532.s7, "p_1301->g_532.s7", print_hash_value);
    transparent_crc(p_1301->g_556.s0, "p_1301->g_556.s0", print_hash_value);
    transparent_crc(p_1301->g_556.s1, "p_1301->g_556.s1", print_hash_value);
    transparent_crc(p_1301->g_556.s2, "p_1301->g_556.s2", print_hash_value);
    transparent_crc(p_1301->g_556.s3, "p_1301->g_556.s3", print_hash_value);
    transparent_crc(p_1301->g_556.s4, "p_1301->g_556.s4", print_hash_value);
    transparent_crc(p_1301->g_556.s5, "p_1301->g_556.s5", print_hash_value);
    transparent_crc(p_1301->g_556.s6, "p_1301->g_556.s6", print_hash_value);
    transparent_crc(p_1301->g_556.s7, "p_1301->g_556.s7", print_hash_value);
    transparent_crc(p_1301->g_558.x, "p_1301->g_558.x", print_hash_value);
    transparent_crc(p_1301->g_558.y, "p_1301->g_558.y", print_hash_value);
    transparent_crc(p_1301->g_558.z, "p_1301->g_558.z", print_hash_value);
    transparent_crc(p_1301->g_558.w, "p_1301->g_558.w", print_hash_value);
    transparent_crc(p_1301->g_566.x, "p_1301->g_566.x", print_hash_value);
    transparent_crc(p_1301->g_566.y, "p_1301->g_566.y", print_hash_value);
    transparent_crc(p_1301->g_570.f0, "p_1301->g_570.f0", print_hash_value);
    transparent_crc(p_1301->g_570.f1, "p_1301->g_570.f1", print_hash_value);
    transparent_crc(p_1301->g_570.f2, "p_1301->g_570.f2", print_hash_value);
    transparent_crc(p_1301->g_570.f3, "p_1301->g_570.f3", print_hash_value);
    transparent_crc(p_1301->g_570.f4, "p_1301->g_570.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_1301->g_571[i].f0, "p_1301->g_571[i].f0", print_hash_value);
        transparent_crc(p_1301->g_571[i].f1, "p_1301->g_571[i].f1", print_hash_value);

    }
    transparent_crc(p_1301->g_573.s0, "p_1301->g_573.s0", print_hash_value);
    transparent_crc(p_1301->g_573.s1, "p_1301->g_573.s1", print_hash_value);
    transparent_crc(p_1301->g_573.s2, "p_1301->g_573.s2", print_hash_value);
    transparent_crc(p_1301->g_573.s3, "p_1301->g_573.s3", print_hash_value);
    transparent_crc(p_1301->g_573.s4, "p_1301->g_573.s4", print_hash_value);
    transparent_crc(p_1301->g_573.s5, "p_1301->g_573.s5", print_hash_value);
    transparent_crc(p_1301->g_573.s6, "p_1301->g_573.s6", print_hash_value);
    transparent_crc(p_1301->g_573.s7, "p_1301->g_573.s7", print_hash_value);
    transparent_crc(p_1301->g_573.s8, "p_1301->g_573.s8", print_hash_value);
    transparent_crc(p_1301->g_573.s9, "p_1301->g_573.s9", print_hash_value);
    transparent_crc(p_1301->g_573.sa, "p_1301->g_573.sa", print_hash_value);
    transparent_crc(p_1301->g_573.sb, "p_1301->g_573.sb", print_hash_value);
    transparent_crc(p_1301->g_573.sc, "p_1301->g_573.sc", print_hash_value);
    transparent_crc(p_1301->g_573.sd, "p_1301->g_573.sd", print_hash_value);
    transparent_crc(p_1301->g_573.se, "p_1301->g_573.se", print_hash_value);
    transparent_crc(p_1301->g_573.sf, "p_1301->g_573.sf", print_hash_value);
    transparent_crc(p_1301->g_574.s0, "p_1301->g_574.s0", print_hash_value);
    transparent_crc(p_1301->g_574.s1, "p_1301->g_574.s1", print_hash_value);
    transparent_crc(p_1301->g_574.s2, "p_1301->g_574.s2", print_hash_value);
    transparent_crc(p_1301->g_574.s3, "p_1301->g_574.s3", print_hash_value);
    transparent_crc(p_1301->g_574.s4, "p_1301->g_574.s4", print_hash_value);
    transparent_crc(p_1301->g_574.s5, "p_1301->g_574.s5", print_hash_value);
    transparent_crc(p_1301->g_574.s6, "p_1301->g_574.s6", print_hash_value);
    transparent_crc(p_1301->g_574.s7, "p_1301->g_574.s7", print_hash_value);
    transparent_crc(p_1301->g_575.x, "p_1301->g_575.x", print_hash_value);
    transparent_crc(p_1301->g_575.y, "p_1301->g_575.y", print_hash_value);
    transparent_crc(p_1301->g_600.f0, "p_1301->g_600.f0", print_hash_value);
    transparent_crc(p_1301->g_600.f1, "p_1301->g_600.f1", print_hash_value);
    transparent_crc(p_1301->g_600.f2.f0, "p_1301->g_600.f2.f0", print_hash_value);
    transparent_crc(p_1301->g_600.f2.f1, "p_1301->g_600.f2.f1", print_hash_value);
    transparent_crc(p_1301->g_600.f3, "p_1301->g_600.f3", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_1301->g_610[i][j].f0, "p_1301->g_610[i][j].f0", print_hash_value);
            transparent_crc(p_1301->g_610[i][j].f1, "p_1301->g_610[i][j].f1", print_hash_value);
            transparent_crc(p_1301->g_610[i][j].f2, "p_1301->g_610[i][j].f2", print_hash_value);
            transparent_crc(p_1301->g_610[i][j].f3, "p_1301->g_610[i][j].f3", print_hash_value);
            transparent_crc(p_1301->g_610[i][j].f4, "p_1301->g_610[i][j].f4", print_hash_value);
            transparent_crc(p_1301->g_610[i][j].f5, "p_1301->g_610[i][j].f5", print_hash_value);
            transparent_crc(p_1301->g_610[i][j].f6, "p_1301->g_610[i][j].f6", print_hash_value);

        }
    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1301->g_616[i].f0, "p_1301->g_616[i].f0", print_hash_value);
        transparent_crc(p_1301->g_616[i].f1, "p_1301->g_616[i].f1", print_hash_value);
        transparent_crc(p_1301->g_616[i].f2, "p_1301->g_616[i].f2", print_hash_value);
        transparent_crc(p_1301->g_616[i].f3, "p_1301->g_616[i].f3", print_hash_value);
        transparent_crc(p_1301->g_616[i].f4, "p_1301->g_616[i].f4", print_hash_value);
        transparent_crc(p_1301->g_616[i].f5, "p_1301->g_616[i].f5", print_hash_value);
        transparent_crc(p_1301->g_616[i].f6, "p_1301->g_616[i].f6", print_hash_value);

    }
    transparent_crc(p_1301->g_632, "p_1301->g_632", print_hash_value);
    transparent_crc(p_1301->g_637.s0, "p_1301->g_637.s0", print_hash_value);
    transparent_crc(p_1301->g_637.s1, "p_1301->g_637.s1", print_hash_value);
    transparent_crc(p_1301->g_637.s2, "p_1301->g_637.s2", print_hash_value);
    transparent_crc(p_1301->g_637.s3, "p_1301->g_637.s3", print_hash_value);
    transparent_crc(p_1301->g_637.s4, "p_1301->g_637.s4", print_hash_value);
    transparent_crc(p_1301->g_637.s5, "p_1301->g_637.s5", print_hash_value);
    transparent_crc(p_1301->g_637.s6, "p_1301->g_637.s6", print_hash_value);
    transparent_crc(p_1301->g_637.s7, "p_1301->g_637.s7", print_hash_value);
    transparent_crc(p_1301->g_639.x, "p_1301->g_639.x", print_hash_value);
    transparent_crc(p_1301->g_639.y, "p_1301->g_639.y", print_hash_value);
    transparent_crc(p_1301->g_645.f0, "p_1301->g_645.f0", print_hash_value);
    transparent_crc(p_1301->g_645.f1, "p_1301->g_645.f1", print_hash_value);
    transparent_crc(p_1301->g_645.f2.f0, "p_1301->g_645.f2.f0", print_hash_value);
    transparent_crc(p_1301->g_645.f2.f1, "p_1301->g_645.f2.f1", print_hash_value);
    transparent_crc(p_1301->g_645.f3, "p_1301->g_645.f3", print_hash_value);
    transparent_crc(p_1301->g_652.s0, "p_1301->g_652.s0", print_hash_value);
    transparent_crc(p_1301->g_652.s1, "p_1301->g_652.s1", print_hash_value);
    transparent_crc(p_1301->g_652.s2, "p_1301->g_652.s2", print_hash_value);
    transparent_crc(p_1301->g_652.s3, "p_1301->g_652.s3", print_hash_value);
    transparent_crc(p_1301->g_652.s4, "p_1301->g_652.s4", print_hash_value);
    transparent_crc(p_1301->g_652.s5, "p_1301->g_652.s5", print_hash_value);
    transparent_crc(p_1301->g_652.s6, "p_1301->g_652.s6", print_hash_value);
    transparent_crc(p_1301->g_652.s7, "p_1301->g_652.s7", print_hash_value);
    transparent_crc(p_1301->g_652.s8, "p_1301->g_652.s8", print_hash_value);
    transparent_crc(p_1301->g_652.s9, "p_1301->g_652.s9", print_hash_value);
    transparent_crc(p_1301->g_652.sa, "p_1301->g_652.sa", print_hash_value);
    transparent_crc(p_1301->g_652.sb, "p_1301->g_652.sb", print_hash_value);
    transparent_crc(p_1301->g_652.sc, "p_1301->g_652.sc", print_hash_value);
    transparent_crc(p_1301->g_652.sd, "p_1301->g_652.sd", print_hash_value);
    transparent_crc(p_1301->g_652.se, "p_1301->g_652.se", print_hash_value);
    transparent_crc(p_1301->g_652.sf, "p_1301->g_652.sf", print_hash_value);
    transparent_crc(p_1301->g_654.f0, "p_1301->g_654.f0", print_hash_value);
    transparent_crc(p_1301->g_654.f1, "p_1301->g_654.f1", print_hash_value);
    transparent_crc(p_1301->g_654.f2, "p_1301->g_654.f2", print_hash_value);
    transparent_crc(p_1301->g_654.f3, "p_1301->g_654.f3", print_hash_value);
    transparent_crc(p_1301->g_654.f4, "p_1301->g_654.f4", print_hash_value);
    transparent_crc(p_1301->g_654.f5, "p_1301->g_654.f5", print_hash_value);
    transparent_crc(p_1301->g_654.f6, "p_1301->g_654.f6", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1301->g_668[i][j][k].f0, "p_1301->g_668[i][j][k].f0", print_hash_value);
                transparent_crc(p_1301->g_668[i][j][k].f1, "p_1301->g_668[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(p_1301->g_686.f0, "p_1301->g_686.f0", print_hash_value);
    transparent_crc(p_1301->g_696, "p_1301->g_696", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(p_1301->g_712[i][j][k].f0, "p_1301->g_712[i][j][k].f0", print_hash_value);
                transparent_crc(p_1301->g_712[i][j][k].f1, "p_1301->g_712[i][j][k].f1", print_hash_value);

            }
        }
    }
    transparent_crc(p_1301->g_714.f0, "p_1301->g_714.f0", print_hash_value);
    transparent_crc(p_1301->g_714.f1, "p_1301->g_714.f1", print_hash_value);
    transparent_crc(p_1301->g_721.f0, "p_1301->g_721.f0", print_hash_value);
    transparent_crc(p_1301->g_721.f1, "p_1301->g_721.f1", print_hash_value);
    transparent_crc(p_1301->g_721.f2, "p_1301->g_721.f2", print_hash_value);
    transparent_crc(p_1301->g_721.f3, "p_1301->g_721.f3", print_hash_value);
    transparent_crc(p_1301->g_721.f4, "p_1301->g_721.f4", print_hash_value);
    transparent_crc(p_1301->g_729.f0, "p_1301->g_729.f0", print_hash_value);
    transparent_crc(p_1301->g_729.f1, "p_1301->g_729.f1", print_hash_value);
    transparent_crc(p_1301->g_729.f2, "p_1301->g_729.f2", print_hash_value);
    transparent_crc(p_1301->g_729.f3, "p_1301->g_729.f3", print_hash_value);
    transparent_crc(p_1301->g_729.f4, "p_1301->g_729.f4", print_hash_value);
    transparent_crc(p_1301->g_774.s0, "p_1301->g_774.s0", print_hash_value);
    transparent_crc(p_1301->g_774.s1, "p_1301->g_774.s1", print_hash_value);
    transparent_crc(p_1301->g_774.s2, "p_1301->g_774.s2", print_hash_value);
    transparent_crc(p_1301->g_774.s3, "p_1301->g_774.s3", print_hash_value);
    transparent_crc(p_1301->g_774.s4, "p_1301->g_774.s4", print_hash_value);
    transparent_crc(p_1301->g_774.s5, "p_1301->g_774.s5", print_hash_value);
    transparent_crc(p_1301->g_774.s6, "p_1301->g_774.s6", print_hash_value);
    transparent_crc(p_1301->g_774.s7, "p_1301->g_774.s7", print_hash_value);
    transparent_crc(p_1301->g_774.s8, "p_1301->g_774.s8", print_hash_value);
    transparent_crc(p_1301->g_774.s9, "p_1301->g_774.s9", print_hash_value);
    transparent_crc(p_1301->g_774.sa, "p_1301->g_774.sa", print_hash_value);
    transparent_crc(p_1301->g_774.sb, "p_1301->g_774.sb", print_hash_value);
    transparent_crc(p_1301->g_774.sc, "p_1301->g_774.sc", print_hash_value);
    transparent_crc(p_1301->g_774.sd, "p_1301->g_774.sd", print_hash_value);
    transparent_crc(p_1301->g_774.se, "p_1301->g_774.se", print_hash_value);
    transparent_crc(p_1301->g_774.sf, "p_1301->g_774.sf", print_hash_value);
    transparent_crc(p_1301->g_799.f0, "p_1301->g_799.f0", print_hash_value);
    transparent_crc(p_1301->g_799.f1, "p_1301->g_799.f1", print_hash_value);
    transparent_crc(p_1301->g_799.f2, "p_1301->g_799.f2", print_hash_value);
    transparent_crc(p_1301->g_799.f3, "p_1301->g_799.f3", print_hash_value);
    transparent_crc(p_1301->g_799.f4, "p_1301->g_799.f4", print_hash_value);
    transparent_crc(p_1301->g_810, "p_1301->g_810", print_hash_value);
    transparent_crc(p_1301->g_812.f0, "p_1301->g_812.f0", print_hash_value);
    transparent_crc(p_1301->g_812.f1, "p_1301->g_812.f1", print_hash_value);
    transparent_crc(p_1301->g_812.f2.f0, "p_1301->g_812.f2.f0", print_hash_value);
    transparent_crc(p_1301->g_812.f2.f1, "p_1301->g_812.f2.f1", print_hash_value);
    transparent_crc(p_1301->g_812.f3, "p_1301->g_812.f3", print_hash_value);
    transparent_crc(p_1301->g_819.s0, "p_1301->g_819.s0", print_hash_value);
    transparent_crc(p_1301->g_819.s1, "p_1301->g_819.s1", print_hash_value);
    transparent_crc(p_1301->g_819.s2, "p_1301->g_819.s2", print_hash_value);
    transparent_crc(p_1301->g_819.s3, "p_1301->g_819.s3", print_hash_value);
    transparent_crc(p_1301->g_819.s4, "p_1301->g_819.s4", print_hash_value);
    transparent_crc(p_1301->g_819.s5, "p_1301->g_819.s5", print_hash_value);
    transparent_crc(p_1301->g_819.s6, "p_1301->g_819.s6", print_hash_value);
    transparent_crc(p_1301->g_819.s7, "p_1301->g_819.s7", print_hash_value);
    transparent_crc(p_1301->g_819.s8, "p_1301->g_819.s8", print_hash_value);
    transparent_crc(p_1301->g_819.s9, "p_1301->g_819.s9", print_hash_value);
    transparent_crc(p_1301->g_819.sa, "p_1301->g_819.sa", print_hash_value);
    transparent_crc(p_1301->g_819.sb, "p_1301->g_819.sb", print_hash_value);
    transparent_crc(p_1301->g_819.sc, "p_1301->g_819.sc", print_hash_value);
    transparent_crc(p_1301->g_819.sd, "p_1301->g_819.sd", print_hash_value);
    transparent_crc(p_1301->g_819.se, "p_1301->g_819.se", print_hash_value);
    transparent_crc(p_1301->g_819.sf, "p_1301->g_819.sf", print_hash_value);
    transparent_crc(p_1301->g_820.s0, "p_1301->g_820.s0", print_hash_value);
    transparent_crc(p_1301->g_820.s1, "p_1301->g_820.s1", print_hash_value);
    transparent_crc(p_1301->g_820.s2, "p_1301->g_820.s2", print_hash_value);
    transparent_crc(p_1301->g_820.s3, "p_1301->g_820.s3", print_hash_value);
    transparent_crc(p_1301->g_820.s4, "p_1301->g_820.s4", print_hash_value);
    transparent_crc(p_1301->g_820.s5, "p_1301->g_820.s5", print_hash_value);
    transparent_crc(p_1301->g_820.s6, "p_1301->g_820.s6", print_hash_value);
    transparent_crc(p_1301->g_820.s7, "p_1301->g_820.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_1301->g_831[i][j], "p_1301->g_831[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1301->g_934.f0, "p_1301->g_934.f0", print_hash_value);
    transparent_crc(p_1301->g_1056, "p_1301->g_1056", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1301->g_1100[i].f0, "p_1301->g_1100[i].f0", print_hash_value);
        transparent_crc(p_1301->g_1100[i].f1, "p_1301->g_1100[i].f1", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1301->g_1102[i].f0, "p_1301->g_1102[i].f0", print_hash_value);
        transparent_crc(p_1301->g_1102[i].f1, "p_1301->g_1102[i].f1", print_hash_value);

    }
    transparent_crc(p_1301->g_1103.f0, "p_1301->g_1103.f0", print_hash_value);
    transparent_crc(p_1301->g_1103.f1, "p_1301->g_1103.f1", print_hash_value);
    transparent_crc(p_1301->g_1104.f0, "p_1301->g_1104.f0", print_hash_value);
    transparent_crc(p_1301->g_1104.f1, "p_1301->g_1104.f1", print_hash_value);
    transparent_crc(p_1301->v_collective, "p_1301->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 82; i++)
            transparent_crc(p_1301->g_special_values[i + 82 * get_linear_group_id()], "p_1301->g_special_values[i + 82 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 82; i++)
            transparent_crc(p_1301->l_special_values[i], "p_1301->l_special_values[i]", print_hash_value);
    transparent_crc(p_1301->l_comm_values[get_linear_local_id()], "p_1301->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1301->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()], "p_1301->g_comm_values[get_linear_group_id() * 17 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
