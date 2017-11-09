// --atomics 88 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 5,82,10 -l 1,2,1
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
{0,1}, // permutation 4
{1,0}, // permutation 5
{1,0}, // permutation 6
{1,0}, // permutation 7
{1,0}, // permutation 8
{1,0} // permutation 9
};

// Seed: 4238686009

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile VECTOR(int32_t, 4) g_12;
    int32_t g_16;
    volatile VECTOR(uint16_t, 8) g_21;
    volatile VECTOR(uint16_t, 8) g_22;
    uint32_t g_25;
    VECTOR(uint16_t, 16) g_26;
    volatile VECTOR(uint16_t, 4) g_27;
    int32_t *g_81[8];
    int32_t **g_80;
    uint8_t g_96;
    VECTOR(int64_t, 8) g_105;
    int64_t * volatile g_128;
    VECTOR(int64_t, 8) g_130;
    int64_t g_131;
    volatile int8_t g_153;
    VECTOR(uint16_t, 8) g_159;
    VECTOR(uint8_t, 16) g_162;
    int16_t g_182;
    VECTOR(int64_t, 2) g_189;
    VECTOR(uint8_t, 16) g_260;
    volatile VECTOR(uint8_t, 4) g_261;
    volatile VECTOR(uint8_t, 16) g_262;
    int64_t g_273;
    uint8_t *g_278;
    uint8_t **g_277;
    uint8_t *** volatile g_276;
    VECTOR(int32_t, 16) g_284;
    uint16_t *g_294;
    uint16_t *g_295;
    volatile VECTOR(int32_t, 16) g_296;
    VECTOR(uint32_t, 8) g_297;
    uint32_t g_300;
    int32_t * volatile g_351;
    int32_t * volatile g_353;
    VECTOR(int32_t, 4) g_356;
    int32_t * volatile g_358;
    int32_t * volatile g_360;
    int32_t * volatile g_361;
    int32_t * volatile g_362;
    int32_t * volatile g_364;
    int32_t *** volatile g_366;
    volatile VECTOR(int16_t, 16) g_384;
    VECTOR(int16_t, 2) g_386;
    volatile VECTOR(int16_t, 8) g_387;
    VECTOR(uint16_t, 16) g_409;
    volatile VECTOR(uint16_t, 16) g_410;
    VECTOR(int32_t, 2) g_422;
    VECTOR(int8_t, 2) g_493;
    VECTOR(uint64_t, 2) g_497;
    VECTOR(uint16_t, 4) g_539;
    volatile VECTOR(int64_t, 8) g_589;
    volatile VECTOR(uint8_t, 8) g_600;
    VECTOR(uint32_t, 2) g_649;
    volatile int64_t g_652;
    volatile VECTOR(int64_t, 16) g_683;
    int8_t g_699;
    volatile uint32_t g_708;
    uint8_t g_719;
    volatile VECTOR(uint8_t, 4) g_723;
    volatile VECTOR(int64_t, 8) g_745;
    VECTOR(int8_t, 8) g_746;
    uint8_t *g_747;
    int32_t * volatile * volatile g_762;
    int32_t * volatile *g_763;
    int32_t * volatile * volatile * volatile g_761[4][2][7];
    int32_t * volatile * volatile * volatile *g_760;
    VECTOR(int8_t, 4) g_787;
    VECTOR(int8_t, 4) g_788;
    volatile VECTOR(int8_t, 2) g_789;
    volatile VECTOR(int8_t, 2) g_790;
    volatile VECTOR(int8_t, 4) g_791;
    int64_t *g_812;
    volatile VECTOR(uint8_t, 2) g_843;
    volatile VECTOR(uint64_t, 8) g_872;
    int16_t *g_882;
    int32_t *g_913[8][4];
    volatile VECTOR(int32_t, 2) g_924;
    volatile VECTOR(int32_t, 4) g_926;
    volatile VECTOR(int64_t, 16) g_932;
    VECTOR(uint32_t, 2) g_943;
    VECTOR(int16_t, 2) g_953;
    VECTOR(int32_t, 8) g_970;
    VECTOR(uint64_t, 2) g_997;
    volatile VECTOR(uint32_t, 2) g_1019;
    volatile VECTOR(uint32_t, 2) g_1021;
    volatile VECTOR(uint16_t, 4) g_1023;
    VECTOR(uint32_t, 8) g_1024;
    volatile uint16_t g_1027;
    int32_t * volatile **g_1040;
    int32_t * volatile ***g_1039;
    volatile VECTOR(uint32_t, 8) g_1055;
    volatile VECTOR(uint32_t, 2) g_1056;
    VECTOR(int64_t, 8) g_1058;
    int32_t *g_1080[3];
    VECTOR(uint16_t, 16) g_1118;
    VECTOR(int8_t, 2) g_1135;
    int8_t *g_1152;
    volatile VECTOR(int32_t, 2) g_1153;
    volatile VECTOR(int32_t, 2) g_1154;
    VECTOR(int16_t, 16) g_1155;
    VECTOR(uint16_t, 4) g_1156;
    int32_t g_1200;
    volatile VECTOR(uint32_t, 4) g_1223;
    volatile uint32_t g_1229;
    volatile uint32_t *g_1228;
    volatile uint32_t **g_1227[3];
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
int32_t  func_1(struct S0 * p_1271);
int32_t * func_2(int32_t  p_3, uint32_t  p_4, int32_t * p_5, int64_t  p_6, struct S0 * p_1271);
int64_t  func_9(uint32_t  p_10, struct S0 * p_1271);
uint8_t  func_13(int32_t * p_14, struct S0 * p_1271);
uint16_t  func_28(int32_t * p_29, int32_t  p_30, struct S0 * p_1271);
int32_t * func_31(uint32_t  p_32, struct S0 * p_1271);
int32_t ** func_39(int32_t * p_40, uint64_t  p_41, int8_t  p_42, struct S0 * p_1271);
int32_t * func_43(int32_t * p_44, uint64_t  p_45, int32_t  p_46, uint32_t  p_47, uint64_t  p_48, struct S0 * p_1271);
int32_t * func_49(int32_t * p_50, int32_t ** p_51, int32_t ** p_52, int16_t  p_53, uint64_t  p_54, struct S0 * p_1271);
uint16_t  func_62(int32_t * p_63, int32_t * p_64, int32_t ** p_65, uint64_t  p_66, int32_t ** p_67, struct S0 * p_1271);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1271->g_comm_values p_1271->g_12 p_1271->g_16 p_1271->g_21 p_1271->g_22 p_1271->g_25 p_1271->g_26 p_1271->g_27 p_1271->g_80 p_1271->g_81 p_1271->g_105 p_1271->g_297 p_1271->g_262 p_1271->g_384 p_1271->g_386 p_1271->g_387 p_1271->g_296 p_1271->g_273 p_1271->g_182 p_1271->g_356 p_1271->g_497 p_1271->g_600 p_1271->g_260 p_1271->g_261 p_1271->g_159 p_1271->g_539 p_1271->g_130 p_1271->g_649 p_1271->g_278 p_1271->g_96 p_1271->g_787 p_1271->g_788 p_1271->g_789 p_1271->g_790 p_1271->g_791 p_1271->g_277 p_1271->g_276 p_1271->g_763 p_1271->g_683 p_1271->g_762 p_1271->g_493 p_1271->g_843 p_1271->g_409 p_1271->g_872 p_1271->g_882 p_1271->g_284 p_1271->l_comm_values p_1271->g_913 p_1271->g_1080 p_1271->g_1040 p_1271->g_699 p_1271->g_970 p_1271->g_1200 p_1271->g_589 p_1271->g_131
 * writes: p_1271->g_16 p_1271->g_273 p_1271->g_131 p_1271->g_295 p_1271->g_182 p_1271->g_81 p_1271->g_26 p_1271->g_386 p_1271->g_25 p_1271->g_96 p_1271->g_699 p_1271->g_812 p_1271->g_497 p_1271->g_409 p_1271->g_539 p_1271->g_189 p_1271->g_882 p_1271->g_80 p_1271->g_649 p_1271->g_719 p_1271->g_1200
 */
int32_t  func_1(struct S0 * p_1271)
{ /* block id: 4 */
    VECTOR(uint16_t, 2) l_11 = (VECTOR(uint16_t, 2))(65532UL, 65530UL);
    int32_t *l_15[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    uint16_t l_1270 = 0x9CB4L;
    int i;
    (**p_1271->g_1040) = func_2((((((safe_div_func_int64_t_s_s(func_9((((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 2))(0UL, 0x5FE4L)), ((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 8))(p_1271->g_comm_values[p_1271->tid], ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(l_11.yyxyyxyyyyxyxxyy)).s72))).yxxy, ((VECTOR(uint16_t, 16))((((VECTOR(int32_t, 2))(p_1271->g_12.xx)).even , ((((VECTOR(int8_t, 2))(0x62L, (-1L))).even == 8UL) == func_13(l_15[6], p_1271))), ((VECTOR(uint16_t, 2))(add_sat(((VECTOR(uint16_t, 4))(p_1271->g_21.s4610)).odd, ((VECTOR(uint16_t, 2))(0x42C7L, 0xF8A6L))))), ((VECTOR(uint16_t, 4))(p_1271->g_22.s2375)), (safe_lshift_func_uint16_t_u_s((p_1271->g_25 , p_1271->g_12.y), 0)), 0UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_1271->g_26.s77)), 0xFB65L, 0UL)), 0xF69AL, 0x015EL, 0x0A10L)).s3363))), 4UL, 0x8D83L, 0xCD3EL)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(p_1271->g_27.xzywzwxxwzywxxyy)).se40c)).xxwxwwwz))).s47))).xyyyyyxyyyxyxxxy, ((VECTOR(uint16_t, 8))(0xBC75L, func_28(func_31((((safe_mod_func_uint32_t_u_u(0xC6A3F0BDL, (~((1UL || (-6L)) , p_1271->g_27.x)))) , FAKE_DIVERGE(p_1271->group_0_offset, get_group_id(0), 10)) , 2UL), p_1271), p_1271->g_comm_values[p_1271->tid], p_1271), 0UL, ((VECTOR(uint16_t, 4))(65534UL)), 65535UL)).s2176717147374456))).s5 >= 4294967290UL), p_1271), p_1271->g_493.x)) , (void*)0) != l_15[6]) == FAKE_DIVERGE(p_1271->local_2_offset, get_local_id(2), 10)) == p_1271->g_130.s7), p_1271->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1271->tid, 2))], p_1271->g_913[1][1], p_1271->g_284.s3, p_1271);
    for (p_1271->g_131 = 0; (p_1271->g_131 > (-29)); --p_1271->g_131)
    { /* block id: 440 */
        uint16_t l_1267 = 0xA8E1L;
        ++l_1267;
        return l_1267;
    }
    return l_1270;
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_182 p_1271->g_277 p_1271->g_278 p_1271->g_96 p_1271->g_22 p_1271->g_649 p_1271->g_1080 p_1271->g_80 p_1271->g_1040 p_1271->g_763 p_1271->g_16 p_1271->g_262 p_1271->g_699 p_1271->g_882 p_1271->g_970 p_1271->g_1200 p_1271->g_497 p_1271->g_589 p_1271->g_159 p_1271->g_683
 * writes: p_1271->g_182 p_1271->g_96 p_1271->g_80 p_1271->g_649 p_1271->g_16 p_1271->g_81 p_1271->g_699 p_1271->g_719 p_1271->g_1200 p_1271->g_497 p_1271->g_273
 */
int32_t * func_2(int32_t  p_3, uint32_t  p_4, int32_t * p_5, int64_t  p_6, struct S0 * p_1271)
{ /* block id: 335 */
    int32_t *l_914 = &p_1271->g_16;
    int32_t l_915 = 1L;
    int32_t *l_916 = &l_915;
    int32_t *l_917[9][3] = {{(void*)0,(void*)0,&l_915},{(void*)0,(void*)0,&l_915},{(void*)0,(void*)0,&l_915},{(void*)0,(void*)0,&l_915},{(void*)0,(void*)0,&l_915},{(void*)0,(void*)0,&l_915},{(void*)0,(void*)0,&l_915},{(void*)0,(void*)0,&l_915},{(void*)0,(void*)0,&l_915}};
    int32_t l_918[10];
    uint32_t l_919 = 0x8CAB60B1L;
    VECTOR(int32_t, 8) l_925 = (VECTOR(int32_t, 8))(0x160FE84BL, (VECTOR(int32_t, 4))(0x160FE84BL, (VECTOR(int32_t, 2))(0x160FE84BL, (-1L)), (-1L)), (-1L), 0x160FE84BL, (-1L));
    int8_t l_946 = (-1L);
    VECTOR(int32_t, 16) l_972 = (VECTOR(int32_t, 16))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x2D0410CDL), 0x2D0410CDL), 0x2D0410CDL, 4L, 0x2D0410CDL, (VECTOR(int32_t, 2))(4L, 0x2D0410CDL), (VECTOR(int32_t, 2))(4L, 0x2D0410CDL), 4L, 0x2D0410CDL, 4L, 0x2D0410CDL);
    int8_t l_992 = 0x13L;
    VECTOR(uint32_t, 4) l_1015 = (VECTOR(uint32_t, 4))(0x772912D9L, (VECTOR(uint32_t, 2))(0x772912D9L, 0UL), 0UL);
    int32_t **l_1101 = &p_1271->g_81[0];
    VECTOR(int8_t, 16) l_1136 = (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x21L), 0x21L), 0x21L, (-1L), 0x21L, (VECTOR(int8_t, 2))((-1L), 0x21L), (VECTOR(int8_t, 2))((-1L), 0x21L), (-1L), 0x21L, (-1L), 0x21L);
    VECTOR(int32_t, 8) l_1164 = (VECTOR(int32_t, 8))(0x46E4B738L, (VECTOR(int32_t, 4))(0x46E4B738L, (VECTOR(int32_t, 2))(0x46E4B738L, 0x761165E9L), 0x761165E9L), 0x761165E9L, 0x46E4B738L, 0x761165E9L);
    uint32_t l_1170[6];
    VECTOR(int16_t, 16) l_1224 = (VECTOR(int16_t, 16))((-8L), (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x5036L), 0x5036L), 0x5036L, (-8L), 0x5036L, (VECTOR(int16_t, 2))((-8L), 0x5036L), (VECTOR(int16_t, 2))((-8L), 0x5036L), (-8L), 0x5036L, (-8L), 0x5036L);
    int8_t l_1231 = 0x30L;
    VECTOR(int32_t, 4) l_1237 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 5L), 5L);
    uint64_t l_1239 = 0x10223AC497E10BA6L;
    uint32_t l_1240[3][5] = {{0x6E7B50F6L,0x35607528L,4294967295UL,0x35607528L,0x6E7B50F6L},{0x6E7B50F6L,0x35607528L,4294967295UL,0x35607528L,0x6E7B50F6L},{0x6E7B50F6L,0x35607528L,4294967295UL,0x35607528L,0x6E7B50F6L}};
    uint32_t l_1246 = 4294967292UL;
    int16_t *l_1261[10][8][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    int64_t l_1262 = (-9L);
    int64_t *l_1263 = &p_1271->g_273;
    uint64_t *l_1264 = &l_1239;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_918[i] = (-1L);
    for (i = 0; i < 6; i++)
        l_1170[i] = 0xE443EFE4L;
    ++l_919;
    for (p_1271->g_182 = (-24); (p_1271->g_182 < (-15)); p_1271->g_182++)
    { /* block id: 339 */
        VECTOR(int16_t, 8) l_929 = (VECTOR(int16_t, 8))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 0x594AL), 0x594AL), 0x594AL, (-10L), 0x594AL);
        int16_t *l_933 = &p_1271->g_182;
        VECTOR(int32_t, 2) l_971 = (VECTOR(int32_t, 2))(0x129BB3BDL, 0x6602851AL);
        VECTOR(int32_t, 2) l_973 = (VECTOR(int32_t, 2))(0x491E61BAL, 2L);
        int32_t **l_977 = &l_917[8][2];
        int32_t ***l_976 = &l_977;
        int32_t ****l_975 = &l_976;
        int32_t *****l_974 = &l_975;
        uint8_t l_982 = 0xFCL;
        VECTOR(uint64_t, 2) l_995 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xD87392C56E198ECDL);
        VECTOR(uint32_t, 4) l_1014 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0xFC000945L), 0xFC000945L);
        uint8_t l_1099 = 0x4BL;
        int64_t **l_1129[2];
        VECTOR(int8_t, 16) l_1134 = (VECTOR(int8_t, 16))((-5L), (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0x33L), 0x33L), 0x33L, (-5L), 0x33L, (VECTOR(int8_t, 2))((-5L), 0x33L), (VECTOR(int8_t, 2))((-5L), 0x33L), (-5L), 0x33L, (-5L), 0x33L);
        int64_t **l_1143 = &p_1271->g_812;
        int8_t *l_1157 = (void*)0;
        uint32_t *l_1184 = &p_1271->g_300;
        VECTOR(uint16_t, 4) l_1232 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 6UL), 6UL);
        uint32_t l_1238[6];
        VECTOR(uint8_t, 16) l_1245 = (VECTOR(uint8_t, 16))(0xBDL, (VECTOR(uint8_t, 4))(0xBDL, (VECTOR(uint8_t, 2))(0xBDL, 0xDBL), 0xDBL), 0xDBL, 0xBDL, 0xDBL, (VECTOR(uint8_t, 2))(0xBDL, 0xDBL), (VECTOR(uint8_t, 2))(0xBDL, 0xDBL), 0xBDL, 0xDBL, 0xBDL, 0xDBL);
        int i;
        for (i = 0; i < 2; i++)
            l_1129[i] = &p_1271->g_812;
        for (i = 0; i < 6; i++)
            l_1238[i] = 2UL;
        if ((!((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(0L, (-5L))), ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(2L, (-5L), ((VECTOR(int32_t, 2))(p_1271->g_924.yx)), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_925.s71)), ((VECTOR(int32_t, 2))(p_1271->g_926.wz)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-3L), 0x377F199AL)).yyyy)))).s4474745362777603)).s02, (int32_t)(safe_lshift_func_int16_t_s_u(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(l_929.s4613364361211052)).sed21, ((VECTOR(int16_t, 8))((-4L), 0x0A35L, p_4, (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-7L), 0x7477L)).xyyy)), (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(clz(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(p_1271->g_932.s1c533a77)).s77)).yyyxyyyyyxxxxxyy))))).s7, (!((0xB2L <= (l_933 == ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(((safe_add_func_int32_t_s_s((l_929.s3 && p_3), (p_4 , (*l_916)))) <= ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x4FCCL, 0L)).xxyx)).y))), p_4)), ((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(p_1271->g_943.yy)).odd, (((safe_mod_func_uint8_t_u_u((((((VECTOR(uint16_t, 8))(0x8965L, 65528UL, ((VECTOR(uint16_t, 4))(0xB449L)), 1UL, 0x072CL)).s6 && p_4) || p_1271->g_746.s3) < GROUP_DIVERGE(2, 1)), p_1271->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1271->tid, 2))])) & 0x0056L) , p_3))) && 65530UL))) , (void*)0))) | p_1271->g_comm_values[p_1271->tid])))), 0L, (*p_1271->g_882), (-8L), 0x70BBL, ((VECTOR(int16_t, 2))((-10L))), 0x2314L, ((VECTOR(int16_t, 2))(0x3032L)), (-5L), 0x4B40L)).s5 != 0x6E29L), ((VECTOR(int16_t, 4))((-7L))))).lo, ((VECTOR(int16_t, 4))(0x06B9L))))).z, 5)), (int32_t)(-6L)))), 0x22E127D6L, 0L)).s66)), ((VECTOR(int32_t, 2))(0L))))).xyxy)).odd, (int32_t)0x22C34D78L)))))).hi))
        { /* block id: 340 */
            uint64_t *l_947 = (void*)0;
            uint64_t *l_948 = (void*)0;
            int32_t l_949 = (-9L);
            VECTOR(int32_t, 8) l_969 = (VECTOR(int32_t, 8))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x68521B6EL), 0x68521B6EL), 0x68521B6EL, (-8L), 0x68521B6EL);
            VECTOR(uint64_t, 4) l_996 = (VECTOR(uint64_t, 4))(18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 0x0751E98620E14713L), 0x0751E98620E14713L);
            VECTOR(uint64_t, 2) l_999 = (VECTOR(uint64_t, 2))(0x4F90E232CD58729BL, 1UL);
            VECTOR(uint8_t, 16) l_1002 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x8EL), 0x8EL), 0x8EL, 255UL, 0x8EL, (VECTOR(uint8_t, 2))(255UL, 0x8EL), (VECTOR(uint8_t, 2))(255UL, 0x8EL), 255UL, 0x8EL, 255UL, 0x8EL);
            VECTOR(uint16_t, 2) l_1022 = (VECTOR(uint16_t, 2))(65535UL, 0UL);
            int32_t **l_1045 = &l_917[2][2];
            VECTOR(uint32_t, 2) l_1057 = (VECTOR(uint32_t, 2))(0x81D189D1L, 0xE041A981L);
            VECTOR(int16_t, 8) l_1074 = (VECTOR(int16_t, 8))(0x1E1BL, (VECTOR(int16_t, 4))(0x1E1BL, (VECTOR(int16_t, 2))(0x1E1BL, 1L), 1L), 1L, 0x1E1BL, 1L);
            int64_t l_1076 = 1L;
            int32_t l_1098 = (-10L);
            int32_t *l_1102 = (void*)0;
            int32_t *l_1169 = &l_918[0];
            int i;
            if ((l_946 || (l_949 = 0x7E8B4C512E8A6CDDL)))
            { /* block id: 342 */
                VECTOR(int64_t, 16) l_950 = (VECTOR(int64_t, 16))(0x53473434ABB3A948L, (VECTOR(int64_t, 4))(0x53473434ABB3A948L, (VECTOR(int64_t, 2))(0x53473434ABB3A948L, (-2L)), (-2L)), (-2L), 0x53473434ABB3A948L, (-2L), (VECTOR(int64_t, 2))(0x53473434ABB3A948L, (-2L)), (VECTOR(int64_t, 2))(0x53473434ABB3A948L, (-2L)), 0x53473434ABB3A948L, (-2L), 0x53473434ABB3A948L, (-2L));
                int32_t **l_956 = &l_917[2][2];
                int32_t **l_957 = &l_917[2][2];
                int32_t ***l_958 = &p_1271->g_80;
                VECTOR(uint16_t, 8) l_961 = (VECTOR(uint16_t, 8))(7UL, (VECTOR(uint16_t, 4))(7UL, (VECTOR(uint16_t, 2))(7UL, 0xB5D4L), 0xB5D4L), 0xB5D4L, 7UL, 0xB5D4L);
                VECTOR(int32_t, 8) l_968 = (VECTOR(int32_t, 8))(0x296A7412L, (VECTOR(int32_t, 4))(0x296A7412L, (VECTOR(int32_t, 2))(0x296A7412L, 5L), 5L), 5L, 0x296A7412L, 5L);
                uint8_t *l_978 = (void*)0;
                uint8_t *l_979 = (void*)0;
                uint8_t *l_980 = (void*)0;
                uint8_t *l_981 = &p_1271->g_719;
                uint32_t *l_987 = (void*)0;
                uint32_t *l_988 = (void*)0;
                uint32_t *l_989[4][5] = {{&p_1271->g_300,&p_1271->g_25,&p_1271->g_300,&p_1271->g_25,&p_1271->g_300},{&p_1271->g_300,&p_1271->g_25,&p_1271->g_300,&p_1271->g_25,&p_1271->g_300},{&p_1271->g_300,&p_1271->g_25,&p_1271->g_300,&p_1271->g_25,&p_1271->g_300},{&p_1271->g_300,&p_1271->g_25,&p_1271->g_300,&p_1271->g_25,&p_1271->g_300}};
                VECTOR(uint64_t, 2) l_998 = (VECTOR(uint64_t, 2))(0UL, 0UL);
                VECTOR(uint32_t, 2) l_1020 = (VECTOR(uint32_t, 2))(1UL, 0x03189D3FL);
                VECTOR(uint16_t, 2) l_1062 = (VECTOR(uint16_t, 2))(0x950EL, 0xC1BCL);
                VECTOR(uint16_t, 2) l_1063 = (VECTOR(uint16_t, 2))(0x6D26L, 0UL);
                int32_t *l_1077 = (void*)0;
                int32_t **l_1081 = &p_1271->g_913[1][1];
                int64_t l_1086 = 0x4102CC13BAA7C9E4L;
                int i, j;
                l_982 &= (((VECTOR(int64_t, 4))(l_950.s0a29)).x > (((++(**p_1271->g_277)) >= ((p_4 | ((VECTOR(int16_t, 4))(p_1271->g_953.yxxx)).w) >= ((safe_mod_func_int16_t_s_s(((l_950.s7 , ((l_956 = &p_5) != ((*l_958) = l_957))) < ((0xC67D7B3D7035980FL != (safe_mod_func_uint32_t_u_u((((((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(0xD77DL, p_3, 3UL, 1UL)).hi, ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 4))(p_6, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(clz(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(l_961.s2402)), (uint16_t)((255UL && ((*l_981) = (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(((*l_914) = ((*l_916) = ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(l_968.s1201761553663335)).sae)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(l_969.s53)), ((VECTOR(int32_t, 2))(0L, 0x780FB8CBL))))), 0x73CCCE19L, 0x7984DF45L)).odd))), ((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(p_1271->g_970.s0013062300272051)).s1a, ((VECTOR(int32_t, 16))(l_971.xxxxxyyyxyyyyyyx)).sb9))).xyyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_972.sd8319fc9)).even))))).even))), 0L, 0x6B739A43L)), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 2))(0x413CADBAL, 0x4C54BF7AL)).xyxy, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x3D153B69L, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_973.xy)))).yxxy)).xywwwzzxxwxxwzww)).s3b02, (int32_t)((void*)0 != l_974)))).hi, ((VECTOR(int32_t, 2))(0x10E914ABL)), ((VECTOR(int32_t, 2))((-1L)))))))).yxxx)), ((VECTOR(int32_t, 4))(0x45468767L))))), ((VECTOR(int32_t, 4))(3L))))), 0x696F6AAFL, 0x74C4E0AAL, (-1L))).s2265745153517257)).saa45)))))).x)), p_6)), 13)), GROUP_DIVERGE(0, 1))))) >= l_949)))).xwxzyzxxzxzwwywy))).s9c)), 0x9385L)).hi, ((VECTOR(uint16_t, 2))(1UL)))))))).yyyy)).x & l_969.s7) | 0UL) <= l_969.s6), p_3))) > p_3)), p_4)) ^ p_1271->g_22.s3))) < p_3));
                if (((safe_rshift_func_uint16_t_u_u((((+((GROUP_DIVERGE(0, 1) == 254UL) && ((l_969.s1 && (safe_lshift_func_int8_t_s_s(p_4, p_4))) ^ ((p_1271->g_649.x++) <= (l_992 < ((safe_lshift_func_int16_t_s_s(((VECTOR(int16_t, 16))((-7L), 0x2F6AL, (((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),VECTOR(uint64_t, 16),((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(min(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(clz(((VECTOR(uint64_t, 4))(l_995.yyyx)).lo))), 0xC0CAFA9B75989CF3L, 0xF7C02DFB7E3F551CL, 5UL, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(l_996.wx)))), 1UL)).s3663204233010465)).odd, ((VECTOR(uint64_t, 16))(p_1271->g_997.yxxyyyyxxxxyyyxy)).even))))).s2105511004254154, ((VECTOR(uint64_t, 4))(l_998.yyxy)).xwyzxxwxyxwyyzyy, ((VECTOR(uint64_t, 8))(l_999.xyyxyxyx)).s1016275522034627))).s03ed, (uint64_t)((((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xD1L, 0xF4L)), ((VECTOR(uint8_t, 8))(l_1002.se9365a39)), ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 2))(0xC1L, 4UL)), ((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 8))(0UL, 9UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 4))(0x3BL, ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(1UL, 0x6EL)))))), 0xA2L, 0x8DL)).hi, ((VECTOR(uint8_t, 8))((p_1271->g_162.s4 ^ 7UL), 0xB9L, (safe_mod_func_uint32_t_u_u((p_5 != (void*)0), l_1002.se)), ((VECTOR(uint8_t, 4))(0x75L)), 0UL)).s30))), 0x03L)), (uint8_t)0xABL))))), 0UL, 255UL)).s3132274052165352))).s02, ((VECTOR(uint8_t, 2))(246UL))))), ((VECTOR(uint8_t, 2))(254UL)), ((VECTOR(uint8_t, 2))(7UL))))), 0UL, 0x9DL, 0xEBL, 0UL)).s974c, ((VECTOR(uint8_t, 4))(0xC1L))))).yxwwwzyx, ((VECTOR(uint8_t, 8))(0x12L))))).s2530172414416431, ((VECTOR(uint8_t, 16))(255UL))))).s6, 1UL)) , l_933) == (void*)0) & (***p_1271->g_276))))).w >= FAKE_DIVERGE(p_1271->local_0_offset, get_local_id(0), 10)), (-1L), (-1L), (-1L), 0x4433L, 0x646FL, ((VECTOR(int16_t, 2))(0x4EC3L)), p_6, 0x6D0EL, (*p_1271->g_882), p_3, 0x7107L, 1L)).s3, 15)) == 0xEE8CL)))))) ^ p_3) || 0xD1BAL), GROUP_DIVERGE(1, 1))) | p_6))
                { /* block id: 351 */
                    VECTOR(uint32_t, 8) l_1011 = (VECTOR(uint32_t, 8))(0xBA603065L, (VECTOR(uint32_t, 4))(0xBA603065L, (VECTOR(uint32_t, 2))(0xBA603065L, 0x356B644AL), 0x356B644AL), 0x356B644AL, 0xBA603065L, 0x356B644AL);
                    VECTOR(uint32_t, 2) l_1012 = (VECTOR(uint32_t, 2))(8UL, 2UL);
                    VECTOR(uint16_t, 2) l_1013 = (VECTOR(uint16_t, 2))(0x300AL, 0x6176L);
                    int32_t *l_1044 = (void*)0;
                    VECTOR(int64_t, 16) l_1060 = (VECTOR(int64_t, 16))(0x2C845B64A0CBC26EL, (VECTOR(int64_t, 4))(0x2C845B64A0CBC26EL, (VECTOR(int64_t, 2))(0x2C845B64A0CBC26EL, 1L), 1L), 1L, 0x2C845B64A0CBC26EL, 1L, (VECTOR(int64_t, 2))(0x2C845B64A0CBC26EL, 1L), (VECTOR(int64_t, 2))(0x2C845B64A0CBC26EL, 1L), 0x2C845B64A0CBC26EL, 1L, 0x2C845B64A0CBC26EL, 1L);
                    VECTOR(uint16_t, 8) l_1065 = (VECTOR(uint16_t, 8))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 0xAA04L), 0xAA04L), 0xAA04L, 65526UL, 0xAA04L);
                    int16_t l_1075 = 0x2025L;
                    int32_t **l_1078 = &p_1271->g_81[4];
                    int32_t **l_1079 = &l_917[6][0];
                    int i;
                    (*l_916) |= p_4;
                    if (l_969.s7)
                    { /* block id: 353 */
                        VECTOR(uint32_t, 8) l_1018 = (VECTOR(uint32_t, 8))(7UL, (VECTOR(uint32_t, 4))(7UL, (VECTOR(uint32_t, 2))(7UL, 4294967290UL), 4294967290UL), 4294967290UL, 7UL, 4294967290UL);
                        int16_t *l_1028 = (void*)0;
                        int16_t *l_1029 = (void*)0;
                        int16_t *l_1030[8][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                        int32_t **l_1043[2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_1043[i] = &p_1271->g_81[3];
                        (*l_914) = (safe_sub_func_uint8_t_u_u((*p_1271->g_278), ((0x29L == ((VECTOR(uint8_t, 16))(hadd(((VECTOR(uint8_t, 2))(1UL, 255UL)).yyxyxxyxyxyyyxxy, ((VECTOR(uint8_t, 4))(0xE4L, (safe_sub_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 4))(l_1011.s6563)).wyxzyzzwwxxywxyw, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(4294967288UL, 0x1C23106DL)).yyyx)).ywyzwzwxyyxwzxzy, ((VECTOR(uint32_t, 4))(l_1012.yxxx)).xzzxzxyyywxxwyyw))), ((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 4))(rotate(((VECTOR(uint32_t, 16))(upsample(((VECTOR(uint16_t, 2))(8UL, 0x3F00L)).yyxxyxyyxxyxxxxy, ((VECTOR(uint16_t, 8))(l_1013.yxxxxyxy)).s5001174546505705))).s5f95, ((VECTOR(uint32_t, 2))(0UL, 1UL)).yxyx))), ((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 16))(min(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_1014.zx)), 0xFB2AB91AL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_1271->g_21.s5, ((VECTOR(uint32_t, 2))(max(((VECTOR(uint32_t, 4))((p_4 , (p_1271->g_105.s2 , p_3)), ((VECTOR(uint32_t, 2))(hadd(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 8))(l_1015.yywyyyxy)), ((VECTOR(uint32_t, 8))((p_1271->g_649.y &= (++p_1271->g_943.x)), ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(mul_hi(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(1UL, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 16))(abs_diff(((VECTOR(uint32_t, 4))(max(((VECTOR(uint32_t, 2))(0UL, 0xE1C1EDAFL)).xyxy, ((VECTOR(uint32_t, 2))(l_1018.s16)).yyxy))).zzwwxwyzzzxwxxwx, ((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 8))(p_1271->g_1019.xyxxyyxy)).even, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(l_1020.yxyy)).even, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(GROUP_DIVERGE(1, 1), ((VECTOR(uint32_t, 4))(p_1271->g_1021.xyxy)), GROUP_DIVERGE(2, 1), 0x6BD0B96CL, 0x48858555L)).even)).hi))))).xxxyyyyy)).odd))).zwxwxzyzxxyywzxx))), ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(l_1011.s1, 0x4A92CF0AL, 0x4CCCA333L, 0UL)).hi)).xxyyyyyyxyyxyyxx)), ((VECTOR(uint32_t, 4))(hadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 16))(sub_sat(((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 2))(65535UL, 0UL)).xyxyxyxy, ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(l_1022.yxyxyxxx)).lo, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(p_1271->g_1023.ywwzwzxz)).s2101140333507140)).s9275))).wzyyyyxw))).lo, ((VECTOR(uint32_t, 16))(0x2248EA44L, ((((p_1271->g_649.x = ((VECTOR(uint32_t, 16))(p_1271->g_1024.s7746225520736703)).sa) == ((*l_916) ^= 0x0D77864FL)) < (p_1271->g_953.x ^= (safe_add_func_int8_t_s_s(((p_3 , p_1271->g_1027) | (-1L)), 0x19L)))) != 3L), ((VECTOR(uint32_t, 2))(4294967295UL)), p_4, 8UL, ((VECTOR(uint32_t, 8))(9UL)), 3UL, 0xE987B154L)).se8e8, ((VECTOR(uint32_t, 4))(1UL))))).wyzzxywx, ((VECTOR(uint32_t, 8))(0x29D798C4L)), ((VECTOR(uint32_t, 8))(0x70FF659CL))))).s16))).xxyxxyyyyyyxyyxy, ((VECTOR(uint32_t, 16))(0x7300F4FFL))))).sb09f)).lo)).yxyxxyxy)).odd, ((VECTOR(uint32_t, 4))(1UL))))).xxwxyyyyxzxzywyx))).s33)), 0x2B9399D6L, 0x05C9B58CL, p_1271->g_970.s4, 1UL, ((VECTOR(uint32_t, 4))(0UL)), 0xE6F626FBL, 0UL, 0x19301900L, 4294967295UL, 0x1323E957L)))).s7ec1)), ((VECTOR(uint32_t, 4))(4294967291UL))))).lo)).xxyy)).z, 4294967295UL, ((VECTOR(uint32_t, 4))(0x28398BEFL)), 0x8EF263FFL))))).s7541052574255734)).s59, ((VECTOR(uint32_t, 2))(4294967295UL))))), 0xFBFF7166L)).odd, (uint32_t)p_4))), ((VECTOR(uint32_t, 2))(4294967286UL)), 1UL, 0x8B3DBF1DL, 7UL)).even)), 4294967292UL)).even)).xzzwzwxywyywwzyx, ((VECTOR(uint32_t, 16))(0xE60ADA54L))))).s16, ((VECTOR(uint32_t, 2))(4294967295UL))))).xyxy, ((VECTOR(uint32_t, 4))(4294967287UL))))).zwwwxwwwwywxxyxx))).even)).s7440227674302230))).se97c, ((VECTOR(uint32_t, 4))(0x4E30FE5CL))))).y, p_4)), l_1011.s2)), 0UL, 0x10L)).yxwywyzzyyzyzzwz))).s4) ^ 252UL)));
                        (*l_956) = p_5;
                        if (p_4)
                            continue;
                        return l_1044;
                    }
                    else
                    { /* block id: 364 */
                        VECTOR(int64_t, 2) l_1059 = (VECTOR(int64_t, 2))(5L, 0L);
                        int32_t *l_1061 = (void*)0;
                        VECTOR(uint16_t, 8) l_1064 = (VECTOR(uint16_t, 8))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0xE87AL), 0xE87AL), 0xE87AL, 65529UL, 0xE87AL);
                        int i;
                        (*l_1078) = ((**l_976) = (*l_1045));
                        return p_1271->g_1080[1];
                    }
                }
                else
                { /* block id: 370 */
                    int32_t *l_1082[1];
                    int32_t *l_1085 = (void*)0;
                    uint8_t l_1100 = 0UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1082[i] = &l_915;
                    (*p_1271->g_80) = l_1085;
                    (*l_916) = l_1086;
                    (**p_1271->g_1040) = l_1085;
                    for (l_915 = 0; (l_915 < (-27)); --l_915)
                    { /* block id: 376 */
                        VECTOR(uint16_t, 2) l_1091 = (VECTOR(uint16_t, 2))(0xF55CL, 0xB14BL);
                        int i;
                        (*l_914) ^= p_6;
                        l_1100 |= (safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(l_1091.yy)).odd, (p_1271->g_262.s0 || ((VECTOR(int32_t, 8))((safe_div_func_int64_t_s_s(((p_6 , p_6) && (((safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((p_3 | p_3) == (l_1098 ^ (-1L))), (p_4 , (l_1099 , p_3)))), p_6)) && GROUP_DIVERGE(0, 1)) , p_3)), 0x31AA8006F28CFD60L)), (-5L), p_4, ((VECTOR(int32_t, 4))((-1L))), (-1L))).s0)));
                    }
                }
                if (p_3)
                    continue;
            }
            else
            { /* block id: 382 */
                uint16_t *l_1103[1][7][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                int32_t l_1104 = 0x3805B84EL;
                uint64_t *l_1111 = (void*)0;
                uint64_t *l_1112 = (void*)0;
                uint64_t *l_1113[7][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t l_1114 = 0x4981835EL;
                uint32_t l_1115 = 4294967292UL;
                int64_t **l_1128[4][1][2] = {{{&p_1271->g_812,&p_1271->g_812}},{{&p_1271->g_812,&p_1271->g_812}},{{&p_1271->g_812,&p_1271->g_812}},{{&p_1271->g_812,&p_1271->g_812}}};
                int64_t ***l_1127[2][7];
                int8_t *l_1137 = &p_1271->g_699;
                uint32_t *l_1140 = (void*)0;
                uint32_t *l_1141 = (void*)0;
                uint32_t *l_1142[8];
                VECTOR(uint32_t, 8) l_1146 = (VECTOR(uint32_t, 8))(4294967288UL, (VECTOR(uint32_t, 4))(4294967288UL, (VECTOR(uint32_t, 2))(4294967288UL, 1UL), 1UL), 1UL, 4294967288UL, 1UL);
                int8_t *l_1151 = (void*)0;
                int8_t **l_1150[4] = {&l_1151,&l_1151,&l_1151,&l_1151};
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_1127[i][j] = &l_1128[1][0][0];
                }
                for (i = 0; i < 8; i++)
                    l_1142[i] = (void*)0;
                (**p_1271->g_1040) = (*l_1045);
                (*l_916) &= (p_3 > (safe_mul_func_uint16_t_u_u((p_6 , ((VECTOR(uint16_t, 8))(p_1271->g_1118.s483d0c2c)).s0), ((safe_rshift_func_uint16_t_u_u((((**p_1271->g_277) = (l_1114 , ((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_u((0x053F5A55L || ((l_1129[0] = (void*)0) == ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_1271->group_2_offset, get_group_id(2), 10), ((*l_1137) |= ((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(sub_sat(((VECTOR(int8_t, 2))(l_1134.s14)).xxyxyyxyyyyxyxxx, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1271->g_1135.xyxxxyxxyyxyxyxy)))).s6399)).xxwyzzzzzwyzyzzz))).scd)).xyyyyxyy)).lo, ((VECTOR(int8_t, 8))(l_1136.s026e5a4c)).odd))).x))), (l_1114 = (safe_lshift_func_uint16_t_u_u(0x9842L, 3))))) , l_1143))), p_3)), (FAKE_DIVERGE(p_1271->global_2_offset, get_global_id(2), 10) ^ (!l_969.s1)))), 7)) >= p_3))) , GROUP_DIVERGE(0, 1)), p_4)) == 0x0EC30F07E21A0930L))));
                (*l_914) &= (safe_div_func_int16_t_s_s(((VECTOR(int16_t, 4))(0x3CD9L, 0x3261L, 0x6A8CL, 0L)).z, (((VECTOR(uint32_t, 16))(l_1146.s6661165234355173)).s1 , (safe_unary_minus_func_int8_t_s(((((-10L) & l_1146.s6) >= (*p_1271->g_882)) , l_1115))))));
                l_1104 = ((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),VECTOR(int32_t, 8),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(9L, 0x0A83E539L)), ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(0x33E98966L, 0x57841422L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((safe_div_func_int16_t_s_s((l_1137 == (p_1271->g_1152 = &l_992)), (0L | (p_4 && p_4)))), ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(p_1271->g_1153.yxxyyxyyxxyyyxxx)).lo)).s50, ((VECTOR(int32_t, 4))(0x6A6961DFL, 9L, 0x4C063E44L, (-1L))).hi))), (-1L), 3L)).xzxwyzxz, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(0L, 0x1127656DL, ((VECTOR(int32_t, 4))(p_1271->g_1154.xxyy)), 0x38CFF70EL, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 2))(p_1271->g_1155.sd4)), ((VECTOR(uint16_t, 16))(p_1271->g_1156.xwzyzzyxzxzwxxyz)).s92))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(0L, (((&p_1271->g_699 != l_1157) , 0x64453CF625381859L) > p_1271->g_1154.x), 0x5A707C0FL, p_4, p_3, 0x4607F0C6L, 0x59CE18DCL, 0x37E37AA5L)).odd)), l_1146.s7, 0x10A1F3E5L, 1L)).s3977, ((VECTOR(int32_t, 4))(0x13B383B3L))))))).xxwzzyzw))).s25, ((VECTOR(int32_t, 2))((-1L))), ((VECTOR(int32_t, 2))((-1L)))))), 0x5F20BF3DL)).odd))))), ((VECTOR(int32_t, 4))((-1L))))).hi)).lo)).xxxyyyyy, ((VECTOR(int32_t, 8))(0x6C9602C6L)), ((VECTOR(int32_t, 8))(6L))))).s7;
            }
            (****l_974) = p_5;
            if (p_3)
                continue;
            return p_5;
        }
        else
        { /* block id: 401 */
            uint16_t l_1181 = 65535UL;
            int32_t **l_1185 = &l_914;
            uint32_t **l_1186 = (void*)0;
            uint32_t *l_1188[7][5] = {{&p_1271->g_300,&p_1271->g_25,&p_1271->g_300,&p_1271->g_300,&p_1271->g_25},{&p_1271->g_300,&p_1271->g_25,&p_1271->g_300,&p_1271->g_300,&p_1271->g_25},{&p_1271->g_300,&p_1271->g_25,&p_1271->g_300,&p_1271->g_300,&p_1271->g_25},{&p_1271->g_300,&p_1271->g_25,&p_1271->g_300,&p_1271->g_300,&p_1271->g_25},{&p_1271->g_300,&p_1271->g_25,&p_1271->g_300,&p_1271->g_300,&p_1271->g_25},{&p_1271->g_300,&p_1271->g_25,&p_1271->g_300,&p_1271->g_300,&p_1271->g_25},{&p_1271->g_300,&p_1271->g_25,&p_1271->g_300,&p_1271->g_300,&p_1271->g_25}};
            uint32_t **l_1187 = &l_1188[6][2];
            int32_t *l_1203[1][6][2] = {{{&l_918[4],&l_918[3]},{&l_918[4],&l_918[3]},{&l_918[4],&l_918[3]},{&l_918[4],&l_918[3]},{&l_918[4],&l_918[3]},{&l_918[4],&l_918[3]}}};
            int i, j, k;
            (**l_976) = (((~(safe_rshift_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u(p_1271->g_970.s5, ((0x51E9C6EC053F02ABL <= 0x5B9ACF0C06B88E90L) & 0x73DD1EB09DD51497L))) , (safe_rshift_func_uint8_t_u_u((p_4 < GROUP_DIVERGE(2, 1)), 7))), (safe_div_func_int16_t_s_s((p_3 ^ (safe_rshift_func_int16_t_s_u(((VECTOR(int16_t, 2))(0x3C1BL, 0x67DBL)).even, 11))), l_1181))))) ^ ((safe_lshift_func_int16_t_s_s((((**p_1271->g_277) |= (((l_1184 = &p_1271->g_25) == ((*l_1187) = &p_1271->g_25)) , 0x10L)) || p_6), (**l_1185))) != GROUP_DIVERGE(1, 1))) , (**l_976));
            for (p_1271->g_719 = 0; (p_1271->g_719 <= 22); p_1271->g_719 = safe_add_func_int64_t_s_s(p_1271->g_719, 5))
            { /* block id: 408 */
                int32_t *l_1199 = &p_1271->g_1200;
                int32_t l_1206 = (-1L);
                int8_t *l_1211[8];
                int32_t l_1212 = (-3L);
                uint32_t **l_1230 = &l_1184;
                int i;
                for (i = 0; i < 8; i++)
                    l_1211[i] = &l_946;
                for (p_1271->g_16 = 0; (p_1271->g_16 >= (-30)); p_1271->g_16 = safe_sub_func_int64_t_s_s(p_1271->g_16, 7))
                { /* block id: 411 */
                    uint16_t **l_1193 = &p_1271->g_295;
                    uint16_t ***l_1194 = &l_1193;
                    (*l_1194) = l_1193;
                }
                (*l_916) &= ((*l_914) = (safe_sub_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u((((*l_1199) ^= 1L) , (~(p_1271->g_497.x |= (p_4 ^ (&l_918[4] != l_1203[0][0][0]))))), (safe_mul_func_uint8_t_u_u(((**l_1185) == 0x706F826DL), l_1206)))) <= (+(safe_div_func_uint64_t_u_u((!l_1206), ((l_1212 = (safe_mod_func_int16_t_s_s(0x36EEL, p_1271->g_589.s7))) , p_1271->g_159.s7))))), FAKE_DIVERGE(p_1271->group_1_offset, get_group_id(1), 10))));
                (*l_1101) = p_5;
            }
        }
        (*p_1271->g_80) = p_5;
        l_1240[1][4]--;
        (*l_914) = (~(p_6 <= (safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(l_1245.s13)).lo, 5))));
    }
    --l_1246;
    (*l_916) = ((((*p_1271->g_882) &= ((p_6 <= p_4) < p_3)) & (((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(0x63A8L, ((0x7CAE150EL != (((*l_1264) = ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 8))(safe_clamp_func(VECTOR(uint8_t, 8),uint8_t,((VECTOR(uint8_t, 2))(0x7FL, 7UL)).xxyyyyyy, (uint8_t)((safe_add_func_int32_t_s_s((*l_914), ((0x4FF91171L > p_4) == (7UL & ((*l_1263) = ((safe_div_func_int8_t_s_s(((l_1262 |= p_1271->g_683.sd) & p_3), (*p_1271->g_278))) <= p_6)))))) , FAKE_DIVERGE(p_1271->global_1_offset, get_global_id(1), 10)), (uint8_t)1UL))), ((VECTOR(uint8_t, 8))(0UL))))))).s6, p_6)), GROUP_DIVERGE(0, 1))) == FAKE_DIVERGE(p_1271->global_0_offset, get_global_id(0), 10))) >= p_4)) == 0x6A41456AACF4760AL), 8UL, 65535UL)).wzwxxwyw)).s56, ((VECTOR(uint16_t, 2))(65527UL)), ((VECTOR(uint16_t, 2))(0x0CC3L))))).xxyyyxyx, ((VECTOR(uint16_t, 8))(0xEA57L)), ((VECTOR(uint16_t, 8))(0x37C5L))))).s5 > 7L)) <= (*l_916));
    return p_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_80 p_1271->g_81 p_1271->g_182 p_1271->g_356 p_1271->g_497 p_1271->g_600 p_1271->g_260 p_1271->g_386 p_1271->g_261 p_1271->g_159 p_1271->g_539 p_1271->g_26 p_1271->g_130 p_1271->g_25 p_1271->g_649 p_1271->g_22 p_1271->g_278 p_1271->g_96 p_1271->g_273 p_1271->g_787 p_1271->g_788 p_1271->g_789 p_1271->g_790 p_1271->g_791 p_1271->g_277 p_1271->g_comm_values p_1271->g_276 p_1271->g_296 p_1271->g_105 p_1271->g_763 p_1271->g_16 p_1271->g_683 p_1271->g_762 p_1271->g_493 p_1271->g_843 p_1271->g_409 p_1271->g_297 p_1271->g_262 p_1271->g_872 p_1271->g_882 p_1271->g_284
 * writes: p_1271->g_16 p_1271->g_182 p_1271->g_386 p_1271->g_81 p_1271->g_25 p_1271->g_96 p_1271->g_699 p_1271->g_812 p_1271->g_497 p_1271->g_409 p_1271->g_539 p_1271->g_273 p_1271->g_131 p_1271->g_295 p_1271->g_189 p_1271->g_882
 */
int64_t  func_9(uint32_t  p_10, struct S0 * p_1271)
{ /* block id: 213 */
    VECTOR(uint32_t, 4) l_596 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 3UL), 3UL);
    uint8_t ***l_597 = &p_1271->g_277;
    VECTOR(int16_t, 8) l_645 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x3465L), 0x3465L), 0x3465L, 0L, 0x3465L);
    uint64_t *l_660 = (void*)0;
    int32_t l_677 = 0x553DB0AAL;
    VECTOR(uint32_t, 4) l_686 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL);
    int32_t l_706 = 0x09B7C622L;
    int32_t l_707[5][6] = {{1L,0x70D5B613L,0x78A02417L,8L,0x70D5B613L,8L},{1L,0x70D5B613L,0x78A02417L,8L,0x70D5B613L,8L},{1L,0x70D5B613L,0x78A02417L,8L,0x70D5B613L,8L},{1L,0x70D5B613L,0x78A02417L,8L,0x70D5B613L,8L},{1L,0x70D5B613L,0x78A02417L,8L,0x70D5B613L,8L}};
    VECTOR(uint32_t, 16) l_749 = (VECTOR(uint32_t, 16))(0x1F7E8DF9L, (VECTOR(uint32_t, 4))(0x1F7E8DF9L, (VECTOR(uint32_t, 2))(0x1F7E8DF9L, 0x7A6D1451L), 0x7A6D1451L), 0x7A6D1451L, 0x1F7E8DF9L, 0x7A6D1451L, (VECTOR(uint32_t, 2))(0x1F7E8DF9L, 0x7A6D1451L), (VECTOR(uint32_t, 2))(0x1F7E8DF9L, 0x7A6D1451L), 0x1F7E8DF9L, 0x7A6D1451L, 0x1F7E8DF9L, 0x7A6D1451L);
    int64_t l_765 = 0x2BEE0D4C080F8B57L;
    VECTOR(uint64_t, 8) l_772 = (VECTOR(uint64_t, 8))(0x93D44180948B379CL, (VECTOR(uint64_t, 4))(0x93D44180948B379CL, (VECTOR(uint64_t, 2))(0x93D44180948B379CL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0x93D44180948B379CL, 18446744073709551615UL);
    VECTOR(uint8_t, 4) l_773 = (VECTOR(uint8_t, 4))(0x0AL, (VECTOR(uint8_t, 2))(0x0AL, 0UL), 0UL);
    VECTOR(uint8_t, 8) l_774 = (VECTOR(uint8_t, 8))(0xC6L, (VECTOR(uint8_t, 4))(0xC6L, (VECTOR(uint8_t, 2))(0xC6L, 255UL), 255UL), 255UL, 0xC6L, 255UL);
    VECTOR(uint8_t, 4) l_775 = (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 0x1CL), 0x1CL);
    int32_t ***l_783[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t ****l_782 = &l_783[0];
    VECTOR(uint8_t, 16) l_784 = (VECTOR(uint8_t, 16))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0x7AL), 0x7AL), 0x7AL, 9UL, 0x7AL, (VECTOR(uint8_t, 2))(9UL, 0x7AL), (VECTOR(uint8_t, 2))(9UL, 0x7AL), 9UL, 0x7AL, 9UL, 0x7AL);
    int8_t *l_792 = (void*)0;
    int8_t *l_793 = (void*)0;
    int8_t *l_794 = &p_1271->g_699;
    uint8_t *l_795[7][1][1] = {{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}}};
    int8_t l_796 = 0x3CL;
    uint32_t l_797 = 0x89A92017L;
    uint32_t l_798 = 0x0F7E5EC8L;
    uint32_t l_799 = 0x5B4D35DEL;
    VECTOR(uint8_t, 16) l_805 = (VECTOR(uint8_t, 16))(0x46L, (VECTOR(uint8_t, 4))(0x46L, (VECTOR(uint8_t, 2))(0x46L, 0x95L), 0x95L), 0x95L, 0x46L, 0x95L, (VECTOR(uint8_t, 2))(0x46L, 0x95L), (VECTOR(uint8_t, 2))(0x46L, 0x95L), 0x46L, 0x95L, 0x46L, 0x95L);
    int64_t *l_813 = &p_1271->g_273;
    VECTOR(int16_t, 2) l_840 = (VECTOR(int16_t, 2))((-1L), (-5L));
    uint16_t l_864 = 0x7490L;
    VECTOR(uint64_t, 8) l_871 = (VECTOR(uint64_t, 8))(0xB195D598535BA8BAL, (VECTOR(uint64_t, 4))(0xB195D598535BA8BAL, (VECTOR(uint64_t, 2))(0xB195D598535BA8BAL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 0xB195D598535BA8BAL, 18446744073709551615UL);
    VECTOR(uint32_t, 8) l_884 = (VECTOR(uint32_t, 8))(0x0A9E222BL, (VECTOR(uint32_t, 4))(0x0A9E222BL, (VECTOR(uint32_t, 2))(0x0A9E222BL, 0x4A569FB0L), 0x4A569FB0L), 0x4A569FB0L, 0x0A9E222BL, 0x4A569FB0L);
    uint16_t l_889 = 0x466DL;
    VECTOR(int8_t, 4) l_892 = (VECTOR(int8_t, 4))(0x66L, (VECTOR(int8_t, 2))(0x66L, 0x00L), 0x00L);
    VECTOR(int32_t, 2) l_893 = (VECTOR(int32_t, 2))(0x5DB1780AL, (-7L));
    VECTOR(int16_t, 16) l_906 = (VECTOR(int16_t, 16))(0x663EL, (VECTOR(int16_t, 4))(0x663EL, (VECTOR(int16_t, 2))(0x663EL, (-1L)), (-1L)), (-1L), 0x663EL, (-1L), (VECTOR(int16_t, 2))(0x663EL, (-1L)), (VECTOR(int16_t, 2))(0x663EL, (-1L)), 0x663EL, (-1L), 0x663EL, (-1L));
    VECTOR(int8_t, 2) l_911 = (VECTOR(int8_t, 2))((-1L), 0x5BL);
    int16_t l_912 = 1L;
    int i, j, k;
    (**p_1271->g_80) = (p_10 , 0x7B4882D0L);
    for (p_1271->g_182 = 0; (p_1271->g_182 >= 13); ++p_1271->g_182)
    { /* block id: 217 */
        int16_t *l_601[2][5];
        int32_t l_610[5] = {0x778D5BACL,0x778D5BACL,0x778D5BACL,0x778D5BACL,0x778D5BACL};
        VECTOR(int64_t, 8) l_682 = (VECTOR(int64_t, 8))(0x3A185A2F596CEAE8L, (VECTOR(int64_t, 4))(0x3A185A2F596CEAE8L, (VECTOR(int64_t, 2))(0x3A185A2F596CEAE8L, 9L), 9L), 9L, 0x3A185A2F596CEAE8L, 9L);
        int8_t *l_696 = (void*)0;
        int32_t ***l_720 = &p_1271->g_80;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
                l_601[i][j] = (void*)0;
        }
        if ((l_596.z < (((p_1271->g_386.x &= ((0x0FEFEAD66D3353D2L ^ ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))((((VECTOR(int32_t, 8))((-6L), l_596.y, 1L, ((void*)0 == l_597), 1L, ((safe_lshift_func_int16_t_s_u(((p_1271->g_356.z == ((((p_1271->g_497.y , (3L > ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 2))(mul_hi(((VECTOR(uint8_t, 2))(255UL, 0x7CL)), ((VECTOR(uint8_t, 4))(p_1271->g_600.s5153)).odd))), (uint8_t)(((((0x1074L == p_10) >= 1UL) && p_1271->g_260.s3) == FAKE_DIVERGE(p_1271->global_1_offset, get_global_id(1), 10)) , p_10)))).yxyyxyyxxxxyxyyy)).s2c2e, ((VECTOR(uint8_t, 4))(0xD4L))))).yxzwyxwzxyyzyxyx)).s8)) != p_10) <= 0x33L) & 0x18C3DCA345CC0310L)) != p_10), l_596.z)) & p_10), 0x1DAADD9BL, 0L)).s4 ^ l_596.y), l_596.z, 0L, (-4L))), ((VECTOR(int64_t, 4))(0x5C9DA3C3F8D6F4D5L)), 0x0D88BC01D367C810L, 3L, ((VECTOR(int64_t, 4))(1L)), (-3L), 0L)).se9)))).yxxyxyyxyxxxxxyy)).sb) < GROUP_DIVERGE(1, 1))) || p_1271->g_261.y) != p_1271->g_159.s6)))
        { /* block id: 219 */
            VECTOR(int32_t, 2) l_615 = (VECTOR(int32_t, 2))(0L, (-1L));
            int i;
            if ((safe_lshift_func_uint8_t_u_u(0UL, ((((safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(p_10, 3)), ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(0xE140BF33L, 0xF296BF6FL)), p_10, p_1271->g_539.w, 0xA8921C41L, 0xDDD6E5B3L, 4294967287UL, 9UL)))).s6)) != (safe_rshift_func_int8_t_s_s((!l_610[3]), 3))) > ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(0x6D0FL, (-6L), (p_1271->g_26.sa & (FAKE_DIVERGE(p_1271->local_2_offset, get_local_id(2), 10) || (((((safe_rshift_func_int8_t_s_s(p_1271->g_159.s4, 2)) , (safe_rshift_func_int8_t_s_u(0x0DL, l_610[3]))) > 0x03FA73667349DE67L) > 0L) | p_1271->g_130.s6))), 0L, ((VECTOR(int16_t, 2))(0x796DL)), l_596.y, ((VECTOR(int16_t, 2))(0L)), 0x64A7L, ((VECTOR(int16_t, 2))(8L)), p_1271->g_356.x, ((VECTOR(int16_t, 2))(0x2B9BL)), 0x1643L)))).s1) || l_610[3]))))
            { /* block id: 220 */
                int32_t l_616 = 0x51F26FBAL;
                (**p_1271->g_80) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_615.xxyx)), l_616, 0L, 7L, (-4L))).s5;
            }
            else
            { /* block id: 222 */
                uint8_t l_619 = 0UL;
                if (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x12F1F9A8L, 0L, 0x247EBA00L, 3L)).xxzwxwzw)))).s4)
                { /* block id: 223 */
                    int32_t *l_620 = (void*)0;
                    if (p_10)
                        break;
                    (*p_1271->g_80) = (void*)0;
                    (*p_1271->g_80) = ((safe_sub_func_uint32_t_u_u(p_1271->g_182, ((+l_619) != 1L))) , l_620);
                }
                else
                { /* block id: 227 */
                    int32_t *l_621[9][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
                    int i, j;
                    (*p_1271->g_80) = l_621[8][0];
                }
                (*p_1271->g_80) = (void*)0;
            }
        }
        else
        { /* block id: 232 */
            int32_t l_648 = 0x2CAC172DL;
            int32_t l_655 = 1L;
            int32_t l_670 = 1L;
            uint64_t l_675 = 8UL;
            int32_t l_697 = 0x79C76842L;
            int8_t l_705 = 0x24L;
            int32_t l_722 = (-1L);
            uint32_t *l_728 = (void*)0;
            VECTOR(int64_t, 2) l_764 = (VECTOR(int64_t, 2))(0x59E3DD91CFD7AC94L, (-4L));
            int i;
            for (p_1271->g_25 = 0; (p_1271->g_25 > 5); ++p_1271->g_25)
            { /* block id: 235 */
                uint64_t l_626 = 0xD2BFEEE76742DC68L;
                int32_t l_666 = 0x42AACBB9L;
                int32_t l_668 = 3L;
                int32_t l_669 = (-1L);
                int32_t l_671 = (-1L);
                int32_t ***l_721[1];
                uint16_t **l_743 = &p_1271->g_295;
                uint16_t ***l_744 = &l_743;
                VECTOR(uint32_t, 16) l_748 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint32_t, 2))(0UL, 1UL), (VECTOR(uint32_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
                int32_t ****l_757 = &l_720;
                int32_t *****l_756 = &l_757;
                int32_t ****l_759[9][3] = {{&l_720,&l_721[0],&l_720},{&l_720,&l_721[0],&l_720},{&l_720,&l_721[0],&l_720},{&l_720,&l_721[0],&l_720},{&l_720,&l_721[0],&l_720},{&l_720,&l_721[0],&l_720},{&l_720,&l_721[0],&l_720},{&l_720,&l_721[0],&l_720},{&l_720,&l_721[0],&l_720}};
                int32_t *****l_758 = &l_759[6][1];
                uint32_t *l_766 = (void*)0;
                uint32_t *l_767[7][5] = {{(void*)0,&p_1271->g_300,&p_1271->g_300,(void*)0,(void*)0},{(void*)0,&p_1271->g_300,&p_1271->g_300,(void*)0,(void*)0},{(void*)0,&p_1271->g_300,&p_1271->g_300,(void*)0,(void*)0},{(void*)0,&p_1271->g_300,&p_1271->g_300,(void*)0,(void*)0},{(void*)0,&p_1271->g_300,&p_1271->g_300,(void*)0,(void*)0},{(void*)0,&p_1271->g_300,&p_1271->g_300,(void*)0,(void*)0},{(void*)0,&p_1271->g_300,&p_1271->g_300,(void*)0,(void*)0}};
                int i, j;
                for (i = 0; i < 1; i++)
                    l_721[i] = &p_1271->g_80;
                (1 + 1);
            }
        }
        return p_1271->g_649.y;
    }
    if ((safe_mod_func_uint8_t_u_u(((l_799 = (((~((safe_mul_func_uint8_t_u_u(((VECTOR(uint8_t, 16))((((l_798 = (l_797 = ((l_796 ^= (((((VECTOR(uint64_t, 8))(l_772.s60122320)).s3 == ((p_1271->g_22.s4 , ((*p_1271->g_278) = (*p_1271->g_278))) || ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x80L, 1UL)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(add_sat(((VECTOR(uint8_t, 8))(rotate(((VECTOR(uint8_t, 16))(l_773.xyzxyyyyxwwzzyzz)).even, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_774.s50)))).xxyyxxyy))).s40, ((VECTOR(uint8_t, 16))(l_775.wzwyyywxxwyzzyyy)).s81))))), 0x68L, ((safe_div_func_uint64_t_u_u((((((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))((-7L), (-6L))), (int32_t)p_10, (int32_t)((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((void*)0 == l_782), (p_10 == ((VECTOR(uint8_t, 2))(l_784.s1f)).hi))), p_1271->g_273)) < ((**p_1271->g_80) = (((*l_794) = ((safe_lshift_func_uint8_t_u_u(p_10, 6)) , ((VECTOR(int8_t, 16))(0L, ((VECTOR(int8_t, 8))(p_1271->g_787.yxzyzxzy)), 0L, ((VECTOR(int8_t, 2))(p_1271->g_788.wx)), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 4),((VECTOR(int8_t, 16))(p_1271->g_789.xyxyxxxyxyxxxyyy)).s8f00, ((VECTOR(int8_t, 16))(p_1271->g_790.xxyyyyxxyxxxxyyx)).s2d51, ((VECTOR(int8_t, 2))(p_1271->g_791.xx)).yyxx))).lo)), 0x20L, 0x3BL)).se)) != FAKE_DIVERGE(p_1271->local_1_offset, get_local_id(1), 10))))))), 8L, 7L)).x , ((void*)0 == (**l_597))) | p_10) ^ p_10), 1UL)) , 252UL), p_10, ((VECTOR(uint8_t, 2))(8UL)), 246UL)).s5534003232033314))).sb79f)), 0UL, 0xCAL)).s7)) < p_1271->g_comm_values[p_1271->tid]) , p_10)) < 0x6DL))) , (void*)0) != &p_1271->g_81[4]), ((VECTOR(uint8_t, 4))(8UL)), (**p_1271->g_277), (***p_1271->g_276), p_10, (*p_1271->g_278), FAKE_DIVERGE(p_1271->local_2_offset, get_local_id(2), 10), p_10, 0x64L, 0x72L, 0x1BL, 0x9DL, 6UL)).s4, p_10)) , p_1271->g_296.sc)) <= GROUP_DIVERGE(1, 1)) < p_1271->g_105.s3)) || p_1271->g_386.y), 250UL)))
    { /* block id: 287 */
        int8_t l_814 = 0x71L;
        int32_t l_815 = 4L;
        int16_t *l_825[4] = {&p_1271->g_182,&p_1271->g_182,&p_1271->g_182,&p_1271->g_182};
        int16_t **l_824 = &l_825[1];
        int32_t ***l_835[3];
        uint8_t l_865 = 0xFEL;
        VECTOR(int64_t, 2) l_873 = (VECTOR(int64_t, 2))(7L, (-7L));
        int i;
        for (i = 0; i < 3; i++)
            l_835[i] = &p_1271->g_80;
        for (l_706 = (-15); (l_706 <= (-23)); l_706 = safe_sub_func_uint64_t_u_u(l_706, 6))
        { /* block id: 290 */
            uint64_t l_804 = 0x0256BACD8015F55DL;
            int64_t *l_811 = (void*)0;
            int64_t **l_810[6] = {&l_811,&l_811,&l_811,&l_811,&l_811,&l_811};
            int i;
            l_815 &= (((safe_mul_func_int16_t_s_s((((p_10 | l_804) , ((VECTOR(uint8_t, 8))(l_805.s7cbc7042)).s0) >= 0xDAL), (safe_sub_func_int32_t_s_s(((((*l_794) = p_10) && (((+18446744073709551608UL) , (**p_1271->g_763)) <= ((((p_1271->g_683.sb ^ ((&p_1271->g_131 != (l_813 = (p_1271->g_812 = (void*)0))) <= 0x697A2731L)) != FAKE_DIVERGE(p_1271->global_1_offset, get_global_id(1), 10)) , 0x411CL) || 0x679AL))) < l_814), (**p_1271->g_763))))) , p_1271->g_159.s6) < 0x6E0EL);
        }
        for (l_796 = 0; (l_796 > (-7)); --l_796)
        { /* block id: 298 */
            if ((**p_1271->g_762))
                break;
            return l_815;
        }
        for (l_815 = 17; (l_815 >= (-21)); l_815 = safe_sub_func_int8_t_s_s(l_815, 4))
        { /* block id: 304 */
            int16_t **l_826 = (void*)0;
            int32_t l_836 = 0x2FA0E475L;
            int32_t **l_861 = (void*)0;
            VECTOR(uint64_t, 4) l_870 = (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 1UL), 1UL);
            int16_t *l_879 = &p_1271->g_182;
            int16_t *l_881 = (void*)0;
            int16_t **l_880 = &l_881;
            int16_t l_883 = 0x63E2L;
            int i;
            if (((p_1271->g_493.y ^ (safe_rshift_func_int16_t_s_s(l_815, 12))) <= ((~(((safe_lshift_func_uint16_t_u_s(p_10, 15)) || (l_824 == l_826)) == ((p_10 && (safe_mul_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u((4294967288UL | 0x6D3C79CBL), (safe_sub_func_int64_t_s_s(((p_1271->g_497.y++) & p_10), 0x54AB0172B67356B6L)))) , l_835[0]) != (void*)0) && 0x67834482L), (-10L)))) < p_10))) >= l_836)))
            { /* block id: 306 */
                uint32_t l_837[7][10] = {{0x07DA49F8L,0x4A4A8B42L,0x3873DBCBL,0xFA714590L,0xC5C9B3E5L,0x07DA49F8L,0xFA714590L,0xF6B39036L,0xFA714590L,0x07DA49F8L},{0x07DA49F8L,0x4A4A8B42L,0x3873DBCBL,0xFA714590L,0xC5C9B3E5L,0x07DA49F8L,0xFA714590L,0xF6B39036L,0xFA714590L,0x07DA49F8L},{0x07DA49F8L,0x4A4A8B42L,0x3873DBCBL,0xFA714590L,0xC5C9B3E5L,0x07DA49F8L,0xFA714590L,0xF6B39036L,0xFA714590L,0x07DA49F8L},{0x07DA49F8L,0x4A4A8B42L,0x3873DBCBL,0xFA714590L,0xC5C9B3E5L,0x07DA49F8L,0xFA714590L,0xF6B39036L,0xFA714590L,0x07DA49F8L},{0x07DA49F8L,0x4A4A8B42L,0x3873DBCBL,0xFA714590L,0xC5C9B3E5L,0x07DA49F8L,0xFA714590L,0xF6B39036L,0xFA714590L,0x07DA49F8L},{0x07DA49F8L,0x4A4A8B42L,0x3873DBCBL,0xFA714590L,0xC5C9B3E5L,0x07DA49F8L,0xFA714590L,0xF6B39036L,0xFA714590L,0x07DA49F8L},{0x07DA49F8L,0x4A4A8B42L,0x3873DBCBL,0xFA714590L,0xC5C9B3E5L,0x07DA49F8L,0xFA714590L,0xF6B39036L,0xFA714590L,0x07DA49F8L}};
                VECTOR(uint8_t, 4) l_842 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL);
                VECTOR(uint64_t, 4) l_854 = (VECTOR(uint64_t, 4))(0xC1297B7B9DC3A058L, (VECTOR(uint64_t, 2))(0xC1297B7B9DC3A058L, 0x2F9A22985CE72701L), 0x2F9A22985CE72701L);
                uint64_t *l_859[4][8][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                uint16_t *l_860[7][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                int32_t *l_863 = (void*)0;
                int32_t **l_862 = &l_863;
                int i, j, k;
                l_837[1][7]--;
                l_865 = (((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_840.xx)), 0x146AL, 7L)).y || ((safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 8))(l_842.xzxxxxzz)).lo, ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 2))(p_1271->g_843.yy)).xxxx, (uint8_t)(((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(l_836, (safe_div_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(p_1271->g_789.x, (safe_add_func_int32_t_s_s(((**p_1271->g_80) ^= p_10), ((((VECTOR(uint64_t, 4))(l_854.yxzy)).z , (++p_1271->g_409.s1)) <= (+(p_1271->g_539.w |= (((safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 2))(251UL, 0x39L)).hi, 0)) & (!(p_1271->g_497.y = 0xC734FD4619093E3BL))) || p_10)))))))) == ((l_862 = l_861) == &p_1271->g_81[4])), l_864)))), 7)) && ((65535UL | p_1271->g_22.s1) == p_10)) , p_10))))))).z)) && FAKE_DIVERGE(p_1271->local_0_offset, get_local_id(0), 10)));
            }
            else
            { /* block id: 314 */
                int32_t l_878 = 1L;
                (*p_1271->g_80) = func_31(p_1271->g_comm_values[p_1271->tid], p_1271);
                l_836 |= (safe_mod_func_int32_t_s_s((safe_mod_func_int64_t_s_s((((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 4))(l_870.wwxx)).hi, ((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 4))(l_871.s7325)).yzzxywyy, (uint64_t)((VECTOR(uint64_t, 2))(p_1271->g_872.s72)).even))).s43))))).odd != 0x4197398D08465280L) & (p_1271->g_189.y = ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x584E462018AC5899L, (-1L))).yxyx)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_873.xxyyyxxy)).s02)), (((safe_add_func_int16_t_s_s(0x0706L, ((p_1271->g_788.y > (p_10 , ((l_878 ^ p_1271->g_356.x) != (p_10 && (((4294967295UL ^ p_10) | FAKE_DIVERGE(p_1271->global_0_offset, get_global_id(0), 10)) && l_878))))) & p_10))) || p_10) > 1L), ((VECTOR(int64_t, 4))((-5L))), 0L, ((VECTOR(int64_t, 2))(0x6FB3DB8AD71E1881L)), 0x67630C9C15FF0EB1L, 1L)).se)) ^ p_10), p_1271->g_297.s6)), 0x5B2FDFA7L));
            }
            (**p_1271->g_80) = ((p_10 , l_879) != (p_1271->g_882 = ((*l_880) = ((*l_824) = &p_1271->g_182))));
            ++l_884.s6;
        }
        (**p_1271->g_763) &= (safe_add_func_int16_t_s_s((p_1271->g_386.x = ((**l_824) &= (p_10 & (p_10 < 0x60C99620L)))), (((l_889 = ((VECTOR(int16_t, 2))(0x0896L, 0x4001L)).lo) ^ (&p_1271->g_366 != (void*)0)) , (safe_mod_func_int8_t_s_s(0x00L, ((VECTOR(int8_t, 2))(l_892.yw)).even)))));
    }
    else
    { /* block id: 329 */
        (**p_1271->g_763) = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_893.xyxxyyyx)).s76)).yxxyyyxxyxyyyxyx)).sb;
    }
    (**p_1271->g_763) = (l_912 = ((safe_mul_func_uint8_t_u_u(((*p_1271->g_80) == (void*)0), (safe_div_func_uint64_t_u_u((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((!(((safe_div_func_uint8_t_u_u((**p_1271->g_277), ((*p_1271->g_882) | ((VECTOR(int16_t, 2))(l_906.s56)).hi))) <= p_10) && p_1271->g_284.s6)) , (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s(((((VECTOR(int8_t, 4))(l_911.xyxx)).x & p_10) >= p_10), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 16))(1L, 1L, ((VECTOR(int32_t, 2))(5L, (-1L))).odd, ((VECTOR(int32_t, 8))((0L != p_10), 6L, (-5L), (-3L), p_10, ((VECTOR(int32_t, 2))(1L)), (-6L))), ((VECTOR(int32_t, 4))(0x3263DB01L)), 0x29CB5253L)).sf0af, ((VECTOR(int32_t, 4))((-1L)))))).w)), (***p_1271->g_276)))), 15)) && 0xA77BA9EE3CF89A68L), p_10)) & 0x021C8671L), (**p_1271->g_277))), 0x9981FDC4AD4557D2L)))) < p_1271->g_788.z));
    return p_10;
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_16
 * writes: p_1271->g_16
 */
uint8_t  func_13(int32_t * p_14, struct S0 * p_1271)
{ /* block id: 5 */
    uint32_t l_19 = 4294967291UL;
    for (p_1271->g_16 = (-23); (p_1271->g_16 > 11); ++p_1271->g_16)
    { /* block id: 8 */
        int32_t l_20 = 0x703ACB6DL;
        if (l_19)
            break;
        if (l_20)
            continue;
    }
    return l_19;
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_80 p_1271->g_81
 * writes: p_1271->g_81
 */
uint16_t  func_28(int32_t * p_29, int32_t  p_30, struct S0 * p_1271)
{ /* block id: 208 */
    VECTOR(int32_t, 4) l_593 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 6L), 6L);
    int i;
    l_593.y = ((VECTOR(int32_t, 4))(l_593.xyxw)).w;
    p_29 = (*p_1271->g_80);
    (*p_1271->g_80) = p_29;
    return l_593.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_16 p_1271->g_26 p_1271->g_80 p_1271->g_81 p_1271->g_105 p_1271->g_297 p_1271->g_262 p_1271->g_384 p_1271->g_386 p_1271->g_387 p_1271->g_296 p_1271->g_273 p_1271->g_182
 * writes: p_1271->g_16 p_1271->g_273 p_1271->g_131 p_1271->g_295 p_1271->g_182 p_1271->g_81 p_1271->g_26
 */
int32_t * func_31(uint32_t  p_32, struct S0 * p_1271)
{ /* block id: 13 */
    int32_t *l_55 = &p_1271->g_16;
    int32_t **l_367 = &l_55;
    int32_t l_368 = 0x51D96047L;
    int32_t l_372 = 4L;
    int32_t l_373 = 0x55D3777BL;
    int32_t l_374 = 0x30682DF1L;
    int32_t l_375 = (-1L);
    int32_t l_376 = 0x3BBAC509L;
    int32_t l_377[5] = {0x0EEE7F08L,0x0EEE7F08L,0x0EEE7F08L,0x0EEE7F08L,0x0EEE7F08L};
    int32_t l_378 = 0x3A15A904L;
    int32_t l_379 = 0x1B21DE09L;
    int8_t l_380 = 0x3DL;
    uint32_t l_381 = 0xF3960AAAL;
    VECTOR(int16_t, 8) l_385 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x51FCL), 0x51FCL), 0x51FCL, (-1L), 0x51FCL);
    uint16_t *l_396[8][2][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    uint16_t l_403 = 0xBD5FL;
    int8_t *l_404 = &l_380;
    VECTOR(int32_t, 16) l_423 = (VECTOR(int32_t, 16))(0x232CE009L, (VECTOR(int32_t, 4))(0x232CE009L, (VECTOR(int32_t, 2))(0x232CE009L, 0L), 0L), 0L, 0x232CE009L, 0L, (VECTOR(int32_t, 2))(0x232CE009L, 0L), (VECTOR(int32_t, 2))(0x232CE009L, 0L), 0x232CE009L, 0L, 0x232CE009L, 0L);
    int16_t l_446[9] = {0x4A3DL,0x4A3DL,0x4A3DL,0x4A3DL,0x4A3DL,0x4A3DL,0x4A3DL,0x4A3DL,0x4A3DL};
    VECTOR(uint8_t, 2) l_489 = (VECTOR(uint8_t, 2))(0x17L, 255UL);
    uint32_t l_518 = 0x4F8746B4L;
    VECTOR(uint16_t, 4) l_537 = (VECTOR(uint16_t, 4))(0xE52FL, (VECTOR(uint16_t, 2))(0xE52FL, 0x98ECL), 0x98ECL);
    VECTOR(int64_t, 4) l_590 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x2F2D123D4B781852L), 0x2F2D123D4B781852L);
    VECTOR(int64_t, 2) l_591 = (VECTOR(int64_t, 2))(0x287C658257C9D91CL, 9L);
    int i, j, k;
    for (p_1271->g_16 = 24; (p_1271->g_16 <= (-12)); --p_1271->g_16)
    { /* block id: 16 */
        int32_t **l_56 = &l_55;
        VECTOR(uint16_t, 16) l_70 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x8C33L), 0x8C33L), 0x8C33L, 0UL, 0x8C33L, (VECTOR(uint16_t, 2))(0UL, 0x8C33L), (VECTOR(uint16_t, 2))(0UL, 0x8C33L), 0UL, 0x8C33L, 0UL, 0x8C33L);
        int32_t l_73 = (-1L);
        int32_t *l_369 = (void*)0;
        int32_t *l_370 = &l_368;
        int32_t *l_371[3];
        int i;
        for (i = 0; i < 3; i++)
            l_371[i] = &l_368;
        for (p_32 = 0; (p_32 != 53); p_32++)
        { /* block id: 19 */
            int32_t **l_57 = &l_55;
            uint16_t *l_71 = (void*)0;
            uint16_t *l_72 = (void*)0;
            uint16_t *l_74 = (void*)0;
            uint16_t *l_75 = (void*)0;
            uint16_t *l_76[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint16_t l_77 = 0UL;
            int i;
            l_367 = func_39(((*l_57) = func_43(func_49(l_55, l_56, l_57, p_1271->g_26.s9, ((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint16_t_u_u(((VECTOR(uint16_t, 8))(65530UL, 0xE30EL, 1UL, func_62((*l_57), (*l_57), ((safe_mul_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 16))(l_70.s0c202eab385fae11)).sb4, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((l_77--) <= 0x2A6DL), GROUP_DIVERGE(0, 1), 4UL, 65527UL)).hi))))), 0UL, 65526UL)).w, FAKE_DIVERGE(p_1271->global_2_offset, get_global_id(2), 10))) , p_1271->g_80), (safe_lshift_func_uint16_t_u_s((1UL && GROUP_DIVERGE(1, 1)), (**l_56))), l_56, p_1271), ((VECTOR(uint16_t, 2))(0xAC34L)), 0xF214L, 0xDF22L)).s3, (**l_57))) != p_32), 7)) >= 0x6D6AL), p_1271), p_1271->g_16, (**l_56), (**l_57), (*l_55), p_1271)), p_32, p_32, p_1271);
        }
        l_368 = 0x68506E85L;
        l_381--;
    }
    l_372 |= (((*l_404) = ((p_1271->g_262.sc , ((*l_55) = ((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(1L, 0x4149L)).xxxxxxxy)).s1437563747651565, ((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(p_1271->g_384.s7e1a8b63)), ((VECTOR(int16_t, 4))(l_385.s6733)).wxwxxwww, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(max(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(p_1271->g_386.xxyx)))).wyxxyyxz, ((VECTOR(int16_t, 2))(p_1271->g_387.s36)).yyyyxyyy))).s73, ((VECTOR(int16_t, 4))(rotate(((VECTOR(int16_t, 4))((((safe_rshift_func_uint16_t_u_u((l_403 |= ((safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((p_32 , ((65535UL || (p_1271->g_296.sf >= (++p_1271->g_26.s1))) & (&l_396[3][0][1] != &l_396[1][0][1]))), (*l_55))), (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((*l_55) || (p_1271->g_273 ^ 0x1F89F00264FF5EB4L)) , FAKE_DIVERGE(p_1271->global_2_offset, get_global_id(2), 10)), 1UL)), 6)))) , p_32)), (*l_55))) || p_32) <= 254UL), ((VECTOR(int16_t, 2))(0x5657L)), 0L)), ((VECTOR(int16_t, 4))(0x2B90L))))).odd))), ((VECTOR(int16_t, 2))((-1L)))))).xxyy, ((VECTOR(int16_t, 4))(4L))))).ywyzwzwxywzxyzww)).even))).s6142243136035074))))).s88))).hi)) > p_32)) && (**l_367));
    for (p_1271->g_182 = 24; (p_1271->g_182 == 5); p_1271->g_182 = safe_sub_func_uint16_t_u_u(p_1271->g_182, 1))
    { /* block id: 129 */
        int8_t *l_413 = &l_380;
        int16_t *l_421 = &p_1271->g_182;
        int16_t **l_420 = &l_421;
        int32_t l_435 = 0x4B005072L;
        int32_t l_449 = 0x57FDC5D3L;
        VECTOR(uint8_t, 8) l_492 = (VECTOR(uint8_t, 8))(3UL, (VECTOR(uint8_t, 4))(3UL, (VECTOR(uint8_t, 2))(3UL, 249UL), 249UL), 249UL, 3UL, 249UL);
        int32_t l_512 = 0x2C6D1A82L;
        VECTOR(uint16_t, 8) l_524 = (VECTOR(uint16_t, 8))(6UL, (VECTOR(uint16_t, 4))(6UL, (VECTOR(uint16_t, 2))(6UL, 0x71D2L), 0x71D2L), 0x71D2L, 6UL, 0x71D2L);
        int64_t *l_530 = &p_1271->g_131;
        int64_t **l_529 = &l_530;
        uint8_t l_561 = 4UL;
        int32_t l_568 = 1L;
        int32_t l_569[9] = {0x68D519A9L,0x279BBBD6L,0x68D519A9L,0x68D519A9L,0x279BBBD6L,0x68D519A9L,0x68D519A9L,0x279BBBD6L,0x68D519A9L};
        VECTOR(int32_t, 2) l_573 = (VECTOR(int32_t, 2))(0x0F062F36L, (-5L));
        int32_t *l_592 = &l_568;
        int i;
        (1 + 1);
    }
    return (*p_1271->g_80);
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_80 p_1271->g_16
 * writes: p_1271->g_81
 */
int32_t ** func_39(int32_t * p_40, uint64_t  p_41, int8_t  p_42, struct S0 * p_1271)
{ /* block id: 113 */
    int32_t *l_357 = (void*)0;
    int32_t *l_359 = (void*)0;
    int32_t *l_363 = (void*)0;
    int32_t l_365[10][1][3] = {{{0x13EB5960L,0x13EB5960L,0x41119426L}},{{0x13EB5960L,0x13EB5960L,0x41119426L}},{{0x13EB5960L,0x13EB5960L,0x41119426L}},{{0x13EB5960L,0x13EB5960L,0x41119426L}},{{0x13EB5960L,0x13EB5960L,0x41119426L}},{{0x13EB5960L,0x13EB5960L,0x41119426L}},{{0x13EB5960L,0x13EB5960L,0x41119426L}},{{0x13EB5960L,0x13EB5960L,0x41119426L}},{{0x13EB5960L,0x13EB5960L,0x41119426L}},{{0x13EB5960L,0x13EB5960L,0x41119426L}}};
    int i, j, k;
    (*p_1271->g_80) = p_40;
    l_365[0][0][2] |= (*p_40);
    return &p_1271->g_81[4];
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_131 p_1271->g_105 p_1271->g_297 p_1271->g_356 p_1271->g_80 p_1271->g_81
 * writes: p_1271->g_131 p_1271->g_295 p_1271->g_182
 */
int32_t * func_43(int32_t * p_44, uint64_t  p_45, int32_t  p_46, uint32_t  p_47, uint64_t  p_48, struct S0 * p_1271)
{ /* block id: 99 */
    uint16_t *l_331 = (void*)0;
    int32_t l_332 = 0L;
    VECTOR(uint16_t, 16) l_337 = (VECTOR(uint16_t, 16))(0x847EL, (VECTOR(uint16_t, 4))(0x847EL, (VECTOR(uint16_t, 2))(0x847EL, 0xE80EL), 0xE80EL), 0xE80EL, 0x847EL, 0xE80EL, (VECTOR(uint16_t, 2))(0x847EL, 0xE80EL), (VECTOR(uint16_t, 2))(0x847EL, 0xE80EL), 0x847EL, 0xE80EL, 0x847EL, 0xE80EL);
    int i;
    for (p_1271->g_131 = 15; (p_1271->g_131 != (-3)); p_1271->g_131 = safe_sub_func_uint16_t_u_u(p_1271->g_131, 2))
    { /* block id: 102 */
        uint16_t *l_320 = (void*)0;
        uint16_t **l_321 = &p_1271->g_294;
        uint16_t **l_322 = &p_1271->g_294;
        uint16_t **l_323 = &p_1271->g_294;
        uint16_t **l_324 = (void*)0;
        uint16_t **l_325 = &p_1271->g_294;
        uint16_t **l_326 = &p_1271->g_294;
        uint16_t **l_327 = (void*)0;
        uint16_t **l_328 = &p_1271->g_294;
        uint16_t **l_329 = &p_1271->g_294;
        uint16_t **l_330[3][6] = {{&p_1271->g_294,&p_1271->g_294,&p_1271->g_294,&p_1271->g_294,&p_1271->g_294,&p_1271->g_294},{&p_1271->g_294,&p_1271->g_294,&p_1271->g_294,&p_1271->g_294,&p_1271->g_294,&p_1271->g_294},{&p_1271->g_294,&p_1271->g_294,&p_1271->g_294,&p_1271->g_294,&p_1271->g_294,&p_1271->g_294}};
        int32_t l_338 = 1L;
        int16_t *l_339[6] = {&p_1271->g_182,(void*)0,&p_1271->g_182,&p_1271->g_182,(void*)0,&p_1271->g_182};
        uint8_t ***l_342 = &p_1271->g_277;
        VECTOR(int16_t, 2) l_343 = (VECTOR(int16_t, 2))(0x00C5L, 1L);
        int32_t *l_350 = (void*)0;
        int32_t *l_352 = (void*)0;
        int32_t *l_354 = (void*)0;
        int32_t *l_355 = &l_332;
        int i, j;
        (*l_355) = (p_46 ^= (safe_mod_func_int8_t_s_s((l_320 == (l_331 = (p_1271->g_295 = l_320))), (~((l_332 | (safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(l_337.sd322)).y, p_1271->g_105.s3)), ((l_338 = p_45) < (p_1271->g_182 = l_337.s6))))) & (safe_sub_func_int16_t_s_s(((p_47 , l_342) == ((((VECTOR(uint32_t, 16))(abs(((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 2))(l_343.xx)).xxxyxxyx, ((VECTOR(uint16_t, 2))(65535UL, 65532UL)).xxxyyyxy))).s5044452057613564))).s5 , ((safe_mod_func_uint64_t_u_u(FAKE_DIVERGE(p_1271->group_2_offset, get_group_id(2), 10), ((safe_rshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((p_45 , (-1L)), p_48)), 0)) | p_1271->g_297.s2))) <= 0xF471L)) , (void*)0)), p_45)))))));
        p_46 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(p_1271->g_356.wwxzxwwy)).s04)))).even;
    }
    return (*p_1271->g_80);
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_80 p_1271->g_81 p_1271->g_16 p_1271->g_273
 * writes: p_1271->g_273
 */
int32_t * func_49(int32_t * p_50, int32_t ** p_51, int32_t ** p_52, int16_t  p_53, uint64_t  p_54, struct S0 * p_1271)
{ /* block id: 91 */
    uint32_t l_301 = 0UL;
    int32_t l_308 = 1L;
    int32_t l_311 = 0x1EB45384L;
    int32_t l_312 = 0x79E8D903L;
    uint64_t l_313 = 0x369DAE4ED920BD9BL;
    l_301 |= (**p_1271->g_80);
    for (p_1271->g_273 = 0; (p_1271->g_273 < 16); p_1271->g_273++)
    { /* block id: 95 */
        int32_t *l_304 = (void*)0;
        int32_t *l_305 = (void*)0;
        int32_t *l_306 = (void*)0;
        int32_t *l_307 = (void*)0;
        int32_t *l_309 = (void*)0;
        int32_t *l_310[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int i;
        --l_313;
    }
    return (*p_52);
}


/* ------------------------------------------ */
/* 
 * reads : p_1271->g_21 p_1271->g_26 p_1271->g_comm_values p_1271->g_105 p_1271->l_comm_values p_1271->g_25 p_1271->g_16 p_1271->g_128 p_1271->g_130 p_1271->g_131 p_1271->g_153 p_1271->g_284 p_1271->g_81 p_1271->g_295 p_1271->g_296 p_1271->g_297 p_1271->g_22 p_1271->g_80
 * writes: p_1271->g_96 p_1271->g_105 p_1271->g_comm_values p_1271->g_130 p_1271->g_131 p_1271->g_294 p_1271->g_300
 */
uint16_t  func_62(int32_t * p_63, int32_t * p_64, int32_t ** p_65, uint64_t  p_66, int32_t ** p_67, struct S0 * p_1271)
{ /* block id: 21 */
    VECTOR(uint16_t, 16) l_86 = (VECTOR(uint16_t, 16))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xB6FEL), 0xB6FEL), 0xB6FEL, 0UL, 0xB6FEL, (VECTOR(uint16_t, 2))(0UL, 0xB6FEL), (VECTOR(uint16_t, 2))(0UL, 0xB6FEL), 0UL, 0xB6FEL, 0UL, 0xB6FEL);
    uint8_t *l_95 = &p_1271->g_96;
    int32_t l_97[10][4][1] = {{{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)}},{{(-1L)},{(-1L)},{(-1L)},{(-1L)}}};
    int32_t l_98 = 9L;
    VECTOR(int64_t, 4) l_104 = (VECTOR(int64_t, 4))(0x0AD72A742272BDBEL, (VECTOR(int64_t, 2))(0x0AD72A742272BDBEL, 0x68A7D7D4B9274591L), 0x68A7D7D4B9274591L);
    int32_t *l_118[6];
    VECTOR(int8_t, 4) l_119 = (VECTOR(int8_t, 4))(5L, (VECTOR(int8_t, 2))(5L, 1L), 1L);
    int64_t *l_126 = (void*)0;
    VECTOR(uint16_t, 16) l_160 = (VECTOR(uint16_t, 16))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x94BCL), 0x94BCL), 0x94BCL, 65535UL, 0x94BCL, (VECTOR(uint16_t, 2))(65535UL, 0x94BCL), (VECTOR(uint16_t, 2))(65535UL, 0x94BCL), 65535UL, 0x94BCL, 65535UL, 0x94BCL);
    VECTOR(uint32_t, 8) l_161 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x5583D22DL), 0x5583D22DL), 0x5583D22DL, 4294967295UL, 0x5583D22DL);
    VECTOR(uint8_t, 16) l_163 = (VECTOR(uint8_t, 16))(0x00L, (VECTOR(uint8_t, 4))(0x00L, (VECTOR(uint8_t, 2))(0x00L, 0x19L), 0x19L), 0x19L, 0x00L, 0x19L, (VECTOR(uint8_t, 2))(0x00L, 0x19L), (VECTOR(uint8_t, 2))(0x00L, 0x19L), 0x00L, 0x19L, 0x00L, 0x19L);
    int64_t l_232 = (-1L);
    int16_t l_236 = 0x6B29L;
    uint16_t l_274 = 0xB4B9L;
    VECTOR(int32_t, 4) l_283 = (VECTOR(int32_t, 4))(0x46A146E6L, (VECTOR(int32_t, 2))(0x46A146E6L, 8L), 8L);
    uint64_t l_285 = 1UL;
    VECTOR(int32_t, 16) l_286 = (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x3BFE93EFL), 0x3BFE93EFL), 0x3BFE93EFL, 5L, 0x3BFE93EFL, (VECTOR(int32_t, 2))(5L, 0x3BFE93EFL), (VECTOR(int32_t, 2))(5L, 0x3BFE93EFL), 5L, 0x3BFE93EFL, 5L, 0x3BFE93EFL);
    VECTOR(int32_t, 16) l_287 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int32_t, 2))((-1L), 0L), (VECTOR(int32_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
    VECTOR(int32_t, 16) l_288 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1C80154BL), 0x1C80154BL), 0x1C80154BL, (-1L), 0x1C80154BL, (VECTOR(int32_t, 2))((-1L), 0x1C80154BL), (VECTOR(int32_t, 2))((-1L), 0x1C80154BL), (-1L), 0x1C80154BL, (-1L), 0x1C80154BL);
    VECTOR(int16_t, 8) l_289 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x04C4L), 0x04C4L), 0x04C4L, 0L, 0x04C4L);
    VECTOR(uint32_t, 16) l_298 = (VECTOR(uint32_t, 16))(0x1DF9AF5EL, (VECTOR(uint32_t, 4))(0x1DF9AF5EL, (VECTOR(uint32_t, 2))(0x1DF9AF5EL, 0x23DDB08EL), 0x23DDB08EL), 0x23DDB08EL, 0x1DF9AF5EL, 0x23DDB08EL, (VECTOR(uint32_t, 2))(0x1DF9AF5EL, 0x23DDB08EL), (VECTOR(uint32_t, 2))(0x1DF9AF5EL, 0x23DDB08EL), 0x1DF9AF5EL, 0x23DDB08EL, 0x1DF9AF5EL, 0x23DDB08EL);
    int16_t l_299 = 7L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_118[i] = &l_97[4][1][0];
    if (((l_98 = ((safe_rshift_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(l_86.sb7)).odd, p_1271->g_21.s1)) , (safe_lshift_func_int16_t_s_s((((p_1271->g_26.s4 != l_86.sd) && (safe_sub_func_uint8_t_u_u(p_66, l_86.s7))) == (safe_mod_func_uint8_t_u_u((p_66 & (safe_div_func_int16_t_s_s((-4L), p_1271->g_21.s7))), (l_97[4][1][0] = ((*l_95) = 1UL))))), p_1271->g_comm_values[p_1271->tid])))) & l_86.sb))
    { /* block id: 25 */
        VECTOR(int64_t, 2) l_103 = (VECTOR(int64_t, 2))(4L, 6L);
        int64_t *l_106 = (void*)0;
        int64_t *l_109 = (void*)0;
        int64_t *l_110 = (void*)0;
        int64_t *l_111 = (void*)0;
        int64_t *l_112 = (void*)0;
        int64_t *l_113 = (void*)0;
        int64_t **l_127 = &l_109;
        int8_t *l_129[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t l_132 = 0x0CF39239L;
        VECTOR(int32_t, 2) l_133 = (VECTOR(int32_t, 2))((-4L), 0x50F0C8DFL);
        int i;
        l_132 |= (safe_mul_func_int8_t_s_s((p_1271->g_131 &= (GROUP_DIVERGE(2, 1) , (p_1271->g_130.s2 |= (((safe_sub_func_int64_t_s_s(((p_1271->g_105.s5 = ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_103.yyyyyxxyxyxyyyyy)).sd833)).yywyzwzz)).s26, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(l_104.zxwywxwx)).s30)).yyyxxyxy)).s26))), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(0x49AA352C7534BEE7L, 0x733C455447BFCA48L)), 0x1215A14429F1C2FFL, (-1L))), l_97[8][0][0], 0x7D3B875039639DBCL, 0x42E186B95FE78F14L, 0x734C63812DD28D51L)).s46))))), ((VECTOR(int64_t, 8))(p_1271->g_105.s60037403)).s5, ((VECTOR(int64_t, 2))(0x6992D143BF1F8E40L, (-5L))), 0L, 0x49426B2C3BF42E13L, 0x2512995B858EE3BAL)).s3) ^ (safe_div_func_int64_t_s_s((GROUP_DIVERGE(2, 1) == l_103.y), (p_1271->g_comm_values[p_1271->tid] = p_1271->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1271->tid, 2))])))), (safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_u((((*l_127) = ((((l_118[2] == (((((((l_103.y != (-5L)) >= ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_119.xzxz)).lo)).xxxxxyxy)).s1) ^ (((safe_div_func_uint32_t_u_u((((safe_sub_func_int8_t_s_s(((p_66 ^ (GROUP_DIVERGE(2, 1) ^ ((safe_div_func_int16_t_s_s(l_103.y, p_1271->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1271->tid, 2))])) != 0xEEE7CDA8L))) , (-1L)), 0x13L)) || 0x66L) , p_1271->g_25), 4294967295UL)) < (*p_64)) , p_1271->g_26.s3)) , 0x04L) > p_66) || 0x4F86L) , (void*)0)) >= 0x66C6174CE2EAA375L) < 0x5B71L) , l_126)) != p_1271->g_128), 3)) != p_66), 12)))) && l_103.x) || l_103.y)))), p_1271->g_25));
        l_132 = 0x2251F1BFL;
        l_133.x = (l_132 &= (-6L));
        l_132 &= l_103.x;
    }
    else
    { /* block id: 36 */
        int16_t l_134 = (-6L);
        l_134 = (-1L);
    }
    for (l_98 = 0; (l_98 <= (-10)); --l_98)
    { /* block id: 41 */
        uint16_t l_139[3][2][4] = {{{65531UL,0UL,65531UL,65531UL},{65531UL,0UL,65531UL,65531UL}},{{65531UL,0UL,65531UL,65531UL},{65531UL,0UL,65531UL,65531UL}},{{65531UL,0UL,65531UL,65531UL},{65531UL,0UL,65531UL,65531UL}}};
        int64_t *l_146 = (void*)0;
        VECTOR(uint16_t, 4) l_151 = (VECTOR(uint16_t, 4))(0x1747L, (VECTOR(uint16_t, 2))(0x1747L, 0xE05BL), 0xE05BL);
        int64_t *l_152 = &p_1271->g_131;
        int32_t l_154 = 0L;
        VECTOR(uint8_t, 2) l_164 = (VECTOR(uint8_t, 2))(0xEAL, 0x83L);
        int8_t *l_179 = (void*)0;
        int8_t *l_180 = (void*)0;
        int8_t *l_181[3][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        uint16_t *l_183 = &l_139[2][0][2];
        uint16_t *l_184 = (void*)0;
        uint16_t *l_185 = (void*)0;
        uint16_t *l_186 = (void*)0;
        int16_t l_190[3];
        int32_t l_212 = 8L;
        int32_t l_218 = 0x30AA003EL;
        int32_t l_219 = 0x4F682585L;
        int32_t l_220 = 0x1CEA7703L;
        int32_t l_222 = 1L;
        int32_t l_224[10][2];
        int64_t l_227 = 0x14374FFD2AC4DE56L;
        int8_t l_230 = 0x3FL;
        uint32_t l_238 = 0x740FB637L;
        uint8_t **l_275[5][5][8] = {{{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0}},{{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0}},{{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0}},{{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0}},{{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0},{(void*)0,(void*)0,&l_95,&l_95,(void*)0,&l_95,&l_95,(void*)0}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_190[i] = 0x7EC2L;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 2; j++)
                l_224[i][j] = 0x48006E1EL;
        }
        l_154 = ((safe_mod_func_int64_t_s_s(0L, l_139[2][0][2])) , ((safe_mul_func_int16_t_s_s((p_66 <= 0L), (safe_lshift_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u((l_146 != (void*)0), (safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 2))((-2L), 0x28L)).even, p_1271->g_105.s2)))) ^ (((*l_152) = (safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(l_151.xw)).hi, p_66))) < p_66)) , l_139[2][0][2]), p_1271->g_16)))) & p_1271->g_153));
    }
    p_1271->g_300 = (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(0x36A53D2CL, ((VECTOR(int32_t, 2))(0x68358677L, 0x407444D8L)), (safe_add_func_int8_t_s_s((((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 16))(0x0CF6ABFEL, ((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_283.xzzyxxwwwywyxxwy)).s1c8d, ((VECTOR(int32_t, 4))(p_1271->g_284.sf834)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 4))((l_285 = 6L), 0x4FACC17FL, 1L, 0x5E429BEFL)).xxwwzyyw, ((VECTOR(int32_t, 8))(l_286.s1349d586))))).odd, ((VECTOR(int32_t, 2))(l_287.s83)).yxyx))))).hi)), (**p_65), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x6F619C15L, 1L)).yyyxyyxx)).lo)), (-8L), ((VECTOR(int32_t, 4))(0x55E7E408L, 0x28FA942DL, (-10L), 1L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_288.sb3cd95a64db2faf0)))).s40, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_289.s72)), 0x596EL, 0L)), ((VECTOR(uint16_t, 2))(0xB525L, 0x33B4L)).xyxy))).even))).yxyy)).odd)), 0x4EEA6090L, 0x5560D8D6L)).hi)).lo))), (safe_rshift_func_int8_t_s_u(p_66, (safe_rshift_func_uint8_t_u_u(((p_1271->g_294 = &l_274) != p_1271->g_295), 4)))), 7L, ((p_1271->g_295 != &l_274) , ((p_1271->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1271->tid, 2))] || ((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(p_1271->g_296.s2d18d5c22f33b187)))), ((VECTOR(uint32_t, 8))(hadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(p_1271->g_297.s15)).xxyxxyxy)), ((VECTOR(uint32_t, 16))(4294967295UL, 4294967286UL, ((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(0xA1AAE140L, 0x8A4CEA6CL)).xxyx)).y, 0x9A696F85L, 0xB084F6E2L, ((VECTOR(uint32_t, 4))(l_298.sbd55)), p_66, GROUP_DIVERGE(2, 1), 4294967293UL, p_1271->g_22.s2, 0x37642CCEL, 4294967295UL, 0x48BD2AA8L)).lo))).s6243776611076111))).sd992)).xxwzywzw)).s0701326431537451, ((VECTOR(int64_t, 16))(0x61B6968DE9E0AD68L))))).sc) >= l_299)), (**p_67), 0x794D402DL, ((VECTOR(int32_t, 4))(6L)), 0L, (-10L))).lo, (int32_t)1L))).s7 || (**p_1271->g_80)), p_66)), 0x0A12C193L, (-3L), 0x230E264AL, 0x606BC8ABL)).s3220442327562511)).s4908, ((VECTOR(int32_t, 4))((-7L)))))), ((VECTOR(int32_t, 4))((-1L))), ((VECTOR(int32_t, 4))(0x52F8A94DL))))))).yxzwywzxywxxyzzw)).sc741, ((VECTOR(int32_t, 4))(0x135EF491L))))).wzxyyxwyyzzwzxxx)).s9 , (*p_64));
    l_118[3] = (void*)0;
    return p_66;
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
    struct S0 c_1272;
    struct S0* p_1271 = &c_1272;
    struct S0 c_1273 = {
        (VECTOR(int32_t, 4))(0x27289FFFL, (VECTOR(int32_t, 2))(0x27289FFFL, 0L), 0L), // p_1271->g_12
        0x3F5F40E1L, // p_1271->g_16
        (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xF903L), 0xF903L), 0xF903L, 0UL, 0xF903L), // p_1271->g_21
        (VECTOR(uint16_t, 8))(0xD727L, (VECTOR(uint16_t, 4))(0xD727L, (VECTOR(uint16_t, 2))(0xD727L, 1UL), 1UL), 1UL, 0xD727L, 1UL), // p_1271->g_22
        6UL, // p_1271->g_25
        (VECTOR(uint16_t, 16))(65534UL, (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 65535UL), 65535UL), 65535UL, 65534UL, 65535UL, (VECTOR(uint16_t, 2))(65534UL, 65535UL), (VECTOR(uint16_t, 2))(65534UL, 65535UL), 65534UL, 65535UL, 65534UL, 65535UL), // p_1271->g_26
        (VECTOR(uint16_t, 4))(65534UL, (VECTOR(uint16_t, 2))(65534UL, 1UL), 1UL), // p_1271->g_27
        {&p_1271->g_16,&p_1271->g_16,&p_1271->g_16,&p_1271->g_16,&p_1271->g_16,&p_1271->g_16,&p_1271->g_16,&p_1271->g_16}, // p_1271->g_81
        &p_1271->g_81[4], // p_1271->g_80
        0x94L, // p_1271->g_96
        (VECTOR(int64_t, 8))(0x117D142722C044B2L, (VECTOR(int64_t, 4))(0x117D142722C044B2L, (VECTOR(int64_t, 2))(0x117D142722C044B2L, 0x5D766400F4CAC200L), 0x5D766400F4CAC200L), 0x5D766400F4CAC200L, 0x117D142722C044B2L, 0x5D766400F4CAC200L), // p_1271->g_105
        (void*)0, // p_1271->g_128
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 5L), 5L), 5L, 0L, 5L), // p_1271->g_130
        (-1L), // p_1271->g_131
        0x34L, // p_1271->g_153
        (VECTOR(uint16_t, 8))(0x530EL, (VECTOR(uint16_t, 4))(0x530EL, (VECTOR(uint16_t, 2))(0x530EL, 0UL), 0UL), 0UL, 0x530EL, 0UL), // p_1271->g_159
        (VECTOR(uint8_t, 16))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0x6CL), 0x6CL), 0x6CL, 5UL, 0x6CL, (VECTOR(uint8_t, 2))(5UL, 0x6CL), (VECTOR(uint8_t, 2))(5UL, 0x6CL), 5UL, 0x6CL, 5UL, 0x6CL), // p_1271->g_162
        0x1D30L, // p_1271->g_182
        (VECTOR(int64_t, 2))(2L, 0x3B9C06754C7A3936L), // p_1271->g_189
        (VECTOR(uint8_t, 16))(0xC9L, (VECTOR(uint8_t, 4))(0xC9L, (VECTOR(uint8_t, 2))(0xC9L, 252UL), 252UL), 252UL, 0xC9L, 252UL, (VECTOR(uint8_t, 2))(0xC9L, 252UL), (VECTOR(uint8_t, 2))(0xC9L, 252UL), 0xC9L, 252UL, 0xC9L, 252UL), // p_1271->g_260
        (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xCBL), 0xCBL), // p_1271->g_261
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL), 255UL, 255UL, 255UL, (VECTOR(uint8_t, 2))(255UL, 255UL), (VECTOR(uint8_t, 2))(255UL, 255UL), 255UL, 255UL, 255UL, 255UL), // p_1271->g_262
        (-1L), // p_1271->g_273
        &p_1271->g_96, // p_1271->g_278
        &p_1271->g_278, // p_1271->g_277
        &p_1271->g_277, // p_1271->g_276
        (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x174FB513L), 0x174FB513L), 0x174FB513L, (-6L), 0x174FB513L, (VECTOR(int32_t, 2))((-6L), 0x174FB513L), (VECTOR(int32_t, 2))((-6L), 0x174FB513L), (-6L), 0x174FB513L, (-6L), 0x174FB513L), // p_1271->g_284
        (void*)0, // p_1271->g_294
        (void*)0, // p_1271->g_295
        (VECTOR(int32_t, 16))(0x06790D0DL, (VECTOR(int32_t, 4))(0x06790D0DL, (VECTOR(int32_t, 2))(0x06790D0DL, (-1L)), (-1L)), (-1L), 0x06790D0DL, (-1L), (VECTOR(int32_t, 2))(0x06790D0DL, (-1L)), (VECTOR(int32_t, 2))(0x06790D0DL, (-1L)), 0x06790D0DL, (-1L), 0x06790D0DL, (-1L)), // p_1271->g_296
        (VECTOR(uint32_t, 8))(4294967287UL, (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 4294967290UL), 4294967290UL), 4294967290UL, 4294967287UL, 4294967290UL), // p_1271->g_297
        0xFF188E0FL, // p_1271->g_300
        (void*)0, // p_1271->g_351
        (void*)0, // p_1271->g_353
        (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0L), 0L), // p_1271->g_356
        (void*)0, // p_1271->g_358
        (void*)0, // p_1271->g_360
        (void*)0, // p_1271->g_361
        (void*)0, // p_1271->g_362
        (void*)0, // p_1271->g_364
        (void*)0, // p_1271->g_366
        (VECTOR(int16_t, 16))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), 5L), 5L), 5L, (-10L), 5L, (VECTOR(int16_t, 2))((-10L), 5L), (VECTOR(int16_t, 2))((-10L), 5L), (-10L), 5L, (-10L), 5L), // p_1271->g_384
        (VECTOR(int16_t, 2))((-10L), (-5L)), // p_1271->g_386
        (VECTOR(int16_t, 8))(0x19DCL, (VECTOR(int16_t, 4))(0x19DCL, (VECTOR(int16_t, 2))(0x19DCL, 0x0AA2L), 0x0AA2L), 0x0AA2L, 0x19DCL, 0x0AA2L), // p_1271->g_387
        (VECTOR(uint16_t, 16))(0xFA74L, (VECTOR(uint16_t, 4))(0xFA74L, (VECTOR(uint16_t, 2))(0xFA74L, 0xF048L), 0xF048L), 0xF048L, 0xFA74L, 0xF048L, (VECTOR(uint16_t, 2))(0xFA74L, 0xF048L), (VECTOR(uint16_t, 2))(0xFA74L, 0xF048L), 0xFA74L, 0xF048L, 0xFA74L, 0xF048L), // p_1271->g_409
        (VECTOR(uint16_t, 16))(65526UL, (VECTOR(uint16_t, 4))(65526UL, (VECTOR(uint16_t, 2))(65526UL, 1UL), 1UL), 1UL, 65526UL, 1UL, (VECTOR(uint16_t, 2))(65526UL, 1UL), (VECTOR(uint16_t, 2))(65526UL, 1UL), 65526UL, 1UL, 65526UL, 1UL), // p_1271->g_410
        (VECTOR(int32_t, 2))(0x4F3AF963L, (-1L)), // p_1271->g_422
        (VECTOR(int8_t, 2))(0x10L, 6L), // p_1271->g_493
        (VECTOR(uint64_t, 2))(0xFC30919068C3CC51L, 0x80C63F33336D6B7CL), // p_1271->g_497
        (VECTOR(uint16_t, 4))(2UL, (VECTOR(uint16_t, 2))(2UL, 0x4D50L), 0x4D50L), // p_1271->g_539
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), (-1L), 0L, (-1L)), // p_1271->g_589
        (VECTOR(uint8_t, 8))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 0x2BL), 0x2BL), 0x2BL, 5UL, 0x2BL), // p_1271->g_600
        (VECTOR(uint32_t, 2))(0xE97CD007L, 4294967295UL), // p_1271->g_649
        0x47D4FFA292C1837BL, // p_1271->g_652
        (VECTOR(int64_t, 16))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x1DA7DDB7C73044D1L), 0x1DA7DDB7C73044D1L), 0x1DA7DDB7C73044D1L, (-1L), 0x1DA7DDB7C73044D1L, (VECTOR(int64_t, 2))((-1L), 0x1DA7DDB7C73044D1L), (VECTOR(int64_t, 2))((-1L), 0x1DA7DDB7C73044D1L), (-1L), 0x1DA7DDB7C73044D1L, (-1L), 0x1DA7DDB7C73044D1L), // p_1271->g_683
        0x5DL, // p_1271->g_699
        0x944481B8L, // p_1271->g_708
        0xB0L, // p_1271->g_719
        (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL), // p_1271->g_723
        (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x2A00766EE2EDD8B1L), 0x2A00766EE2EDD8B1L), 0x2A00766EE2EDD8B1L, 1L, 0x2A00766EE2EDD8B1L), // p_1271->g_745
        (VECTOR(int8_t, 8))(0x1CL, (VECTOR(int8_t, 4))(0x1CL, (VECTOR(int8_t, 2))(0x1CL, 4L), 4L), 4L, 0x1CL, 4L), // p_1271->g_746
        (void*)0, // p_1271->g_747
        &p_1271->g_81[4], // p_1271->g_762
        &p_1271->g_81[4], // p_1271->g_763
        {{{&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763},{&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763}},{{&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763},{&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763}},{{&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763},{&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763}},{{&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763},{&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763,(void*)0,&p_1271->g_763,&p_1271->g_763}}}, // p_1271->g_761
        &p_1271->g_761[1][0][6], // p_1271->g_760
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 0x41L), 0x41L), // p_1271->g_787
        (VECTOR(int8_t, 4))(0x36L, (VECTOR(int8_t, 2))(0x36L, 0x62L), 0x62L), // p_1271->g_788
        (VECTOR(int8_t, 2))(0x76L, 0x2AL), // p_1271->g_789
        (VECTOR(int8_t, 2))(0x45L, 0x4BL), // p_1271->g_790
        (VECTOR(int8_t, 4))((-4L), (VECTOR(int8_t, 2))((-4L), 0x5EL), 0x5EL), // p_1271->g_791
        &p_1271->g_273, // p_1271->g_812
        (VECTOR(uint8_t, 2))(1UL, 0x47L), // p_1271->g_843
        (VECTOR(uint64_t, 8))(0x32D69188B32494C5L, (VECTOR(uint64_t, 4))(0x32D69188B32494C5L, (VECTOR(uint64_t, 2))(0x32D69188B32494C5L, 0x0F05FAA95B88A157L), 0x0F05FAA95B88A157L), 0x0F05FAA95B88A157L, 0x32D69188B32494C5L, 0x0F05FAA95B88A157L), // p_1271->g_872
        &p_1271->g_182, // p_1271->g_882
        {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}}, // p_1271->g_913
        (VECTOR(int32_t, 2))(9L, 0x52F14554L), // p_1271->g_924
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-8L)), (-8L)), // p_1271->g_926
        (VECTOR(int64_t, 16))(0x522B37876ED56466L, (VECTOR(int64_t, 4))(0x522B37876ED56466L, (VECTOR(int64_t, 2))(0x522B37876ED56466L, 1L), 1L), 1L, 0x522B37876ED56466L, 1L, (VECTOR(int64_t, 2))(0x522B37876ED56466L, 1L), (VECTOR(int64_t, 2))(0x522B37876ED56466L, 1L), 0x522B37876ED56466L, 1L, 0x522B37876ED56466L, 1L), // p_1271->g_932
        (VECTOR(uint32_t, 2))(6UL, 4294967287UL), // p_1271->g_943
        (VECTOR(int16_t, 2))(1L, 0x2D44L), // p_1271->g_953
        (VECTOR(int32_t, 8))(0x4D552187L, (VECTOR(int32_t, 4))(0x4D552187L, (VECTOR(int32_t, 2))(0x4D552187L, (-1L)), (-1L)), (-1L), 0x4D552187L, (-1L)), // p_1271->g_970
        (VECTOR(uint64_t, 2))(0x41ABB8E884A6E1DBL, 0UL), // p_1271->g_997
        (VECTOR(uint32_t, 2))(0x10AB08B9L, 4UL), // p_1271->g_1019
        (VECTOR(uint32_t, 2))(0xD1A21019L, 0x1AD5A7A0L), // p_1271->g_1021
        (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0xEA63L), 0xEA63L), // p_1271->g_1023
        (VECTOR(uint32_t, 8))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 0x777E92E0L), 0x777E92E0L), 0x777E92E0L, 4294967291UL, 0x777E92E0L), // p_1271->g_1024
        65534UL, // p_1271->g_1027
        &p_1271->g_763, // p_1271->g_1040
        &p_1271->g_1040, // p_1271->g_1039
        (VECTOR(uint32_t, 8))(4294967294UL, (VECTOR(uint32_t, 4))(4294967294UL, (VECTOR(uint32_t, 2))(4294967294UL, 0xC7BA1F77L), 0xC7BA1F77L), 0xC7BA1F77L, 4294967294UL, 0xC7BA1F77L), // p_1271->g_1055
        (VECTOR(uint32_t, 2))(0x84FE7FC2L, 0xD3ED6758L), // p_1271->g_1056
        (VECTOR(int64_t, 8))(0L, (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x55F552C181D50CAAL), 0x55F552C181D50CAAL), 0x55F552C181D50CAAL, 0L, 0x55F552C181D50CAAL), // p_1271->g_1058
        {(void*)0,(void*)0,(void*)0}, // p_1271->g_1080
        (VECTOR(uint16_t, 16))(0xF54EL, (VECTOR(uint16_t, 4))(0xF54EL, (VECTOR(uint16_t, 2))(0xF54EL, 8UL), 8UL), 8UL, 0xF54EL, 8UL, (VECTOR(uint16_t, 2))(0xF54EL, 8UL), (VECTOR(uint16_t, 2))(0xF54EL, 8UL), 0xF54EL, 8UL, 0xF54EL, 8UL), // p_1271->g_1118
        (VECTOR(int8_t, 2))(0x77L, 0L), // p_1271->g_1135
        (void*)0, // p_1271->g_1152
        (VECTOR(int32_t, 2))(0x0D4FD6CCL, 0x1E5794F0L), // p_1271->g_1153
        (VECTOR(int32_t, 2))(0L, 9L), // p_1271->g_1154
        (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0x4FF1L), 0x4FF1L), 0x4FF1L, (-4L), 0x4FF1L, (VECTOR(int16_t, 2))((-4L), 0x4FF1L), (VECTOR(int16_t, 2))((-4L), 0x4FF1L), (-4L), 0x4FF1L, (-4L), 0x4FF1L), // p_1271->g_1155
        (VECTOR(uint16_t, 4))(0x5265L, (VECTOR(uint16_t, 2))(0x5265L, 1UL), 1UL), // p_1271->g_1156
        8L, // p_1271->g_1200
        (VECTOR(uint32_t, 4))(4294967286UL, (VECTOR(uint32_t, 2))(4294967286UL, 0x5A9176DEL), 0x5A9176DEL), // p_1271->g_1223
        4294967295UL, // p_1271->g_1229
        &p_1271->g_1229, // p_1271->g_1228
        {&p_1271->g_1228,&p_1271->g_1228,&p_1271->g_1228}, // p_1271->g_1227
        0, // p_1271->v_collective
        sequence_input[get_global_id(0)], // p_1271->global_0_offset
        sequence_input[get_global_id(1)], // p_1271->global_1_offset
        sequence_input[get_global_id(2)], // p_1271->global_2_offset
        sequence_input[get_local_id(0)], // p_1271->local_0_offset
        sequence_input[get_local_id(1)], // p_1271->local_1_offset
        sequence_input[get_local_id(2)], // p_1271->local_2_offset
        sequence_input[get_group_id(0)], // p_1271->group_0_offset
        sequence_input[get_group_id(1)], // p_1271->group_1_offset
        sequence_input[get_group_id(2)], // p_1271->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_1271->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1272 = c_1273;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1271);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1271->g_12.x, "p_1271->g_12.x", print_hash_value);
    transparent_crc(p_1271->g_12.y, "p_1271->g_12.y", print_hash_value);
    transparent_crc(p_1271->g_12.z, "p_1271->g_12.z", print_hash_value);
    transparent_crc(p_1271->g_12.w, "p_1271->g_12.w", print_hash_value);
    transparent_crc(p_1271->g_16, "p_1271->g_16", print_hash_value);
    transparent_crc(p_1271->g_21.s0, "p_1271->g_21.s0", print_hash_value);
    transparent_crc(p_1271->g_21.s1, "p_1271->g_21.s1", print_hash_value);
    transparent_crc(p_1271->g_21.s2, "p_1271->g_21.s2", print_hash_value);
    transparent_crc(p_1271->g_21.s3, "p_1271->g_21.s3", print_hash_value);
    transparent_crc(p_1271->g_21.s4, "p_1271->g_21.s4", print_hash_value);
    transparent_crc(p_1271->g_21.s5, "p_1271->g_21.s5", print_hash_value);
    transparent_crc(p_1271->g_21.s6, "p_1271->g_21.s6", print_hash_value);
    transparent_crc(p_1271->g_21.s7, "p_1271->g_21.s7", print_hash_value);
    transparent_crc(p_1271->g_22.s0, "p_1271->g_22.s0", print_hash_value);
    transparent_crc(p_1271->g_22.s1, "p_1271->g_22.s1", print_hash_value);
    transparent_crc(p_1271->g_22.s2, "p_1271->g_22.s2", print_hash_value);
    transparent_crc(p_1271->g_22.s3, "p_1271->g_22.s3", print_hash_value);
    transparent_crc(p_1271->g_22.s4, "p_1271->g_22.s4", print_hash_value);
    transparent_crc(p_1271->g_22.s5, "p_1271->g_22.s5", print_hash_value);
    transparent_crc(p_1271->g_22.s6, "p_1271->g_22.s6", print_hash_value);
    transparent_crc(p_1271->g_22.s7, "p_1271->g_22.s7", print_hash_value);
    transparent_crc(p_1271->g_25, "p_1271->g_25", print_hash_value);
    transparent_crc(p_1271->g_26.s0, "p_1271->g_26.s0", print_hash_value);
    transparent_crc(p_1271->g_26.s1, "p_1271->g_26.s1", print_hash_value);
    transparent_crc(p_1271->g_26.s2, "p_1271->g_26.s2", print_hash_value);
    transparent_crc(p_1271->g_26.s3, "p_1271->g_26.s3", print_hash_value);
    transparent_crc(p_1271->g_26.s4, "p_1271->g_26.s4", print_hash_value);
    transparent_crc(p_1271->g_26.s5, "p_1271->g_26.s5", print_hash_value);
    transparent_crc(p_1271->g_26.s6, "p_1271->g_26.s6", print_hash_value);
    transparent_crc(p_1271->g_26.s7, "p_1271->g_26.s7", print_hash_value);
    transparent_crc(p_1271->g_26.s8, "p_1271->g_26.s8", print_hash_value);
    transparent_crc(p_1271->g_26.s9, "p_1271->g_26.s9", print_hash_value);
    transparent_crc(p_1271->g_26.sa, "p_1271->g_26.sa", print_hash_value);
    transparent_crc(p_1271->g_26.sb, "p_1271->g_26.sb", print_hash_value);
    transparent_crc(p_1271->g_26.sc, "p_1271->g_26.sc", print_hash_value);
    transparent_crc(p_1271->g_26.sd, "p_1271->g_26.sd", print_hash_value);
    transparent_crc(p_1271->g_26.se, "p_1271->g_26.se", print_hash_value);
    transparent_crc(p_1271->g_26.sf, "p_1271->g_26.sf", print_hash_value);
    transparent_crc(p_1271->g_27.x, "p_1271->g_27.x", print_hash_value);
    transparent_crc(p_1271->g_27.y, "p_1271->g_27.y", print_hash_value);
    transparent_crc(p_1271->g_27.z, "p_1271->g_27.z", print_hash_value);
    transparent_crc(p_1271->g_27.w, "p_1271->g_27.w", print_hash_value);
    transparent_crc(p_1271->g_96, "p_1271->g_96", print_hash_value);
    transparent_crc(p_1271->g_105.s0, "p_1271->g_105.s0", print_hash_value);
    transparent_crc(p_1271->g_105.s1, "p_1271->g_105.s1", print_hash_value);
    transparent_crc(p_1271->g_105.s2, "p_1271->g_105.s2", print_hash_value);
    transparent_crc(p_1271->g_105.s3, "p_1271->g_105.s3", print_hash_value);
    transparent_crc(p_1271->g_105.s4, "p_1271->g_105.s4", print_hash_value);
    transparent_crc(p_1271->g_105.s5, "p_1271->g_105.s5", print_hash_value);
    transparent_crc(p_1271->g_105.s6, "p_1271->g_105.s6", print_hash_value);
    transparent_crc(p_1271->g_105.s7, "p_1271->g_105.s7", print_hash_value);
    transparent_crc(p_1271->g_130.s0, "p_1271->g_130.s0", print_hash_value);
    transparent_crc(p_1271->g_130.s1, "p_1271->g_130.s1", print_hash_value);
    transparent_crc(p_1271->g_130.s2, "p_1271->g_130.s2", print_hash_value);
    transparent_crc(p_1271->g_130.s3, "p_1271->g_130.s3", print_hash_value);
    transparent_crc(p_1271->g_130.s4, "p_1271->g_130.s4", print_hash_value);
    transparent_crc(p_1271->g_130.s5, "p_1271->g_130.s5", print_hash_value);
    transparent_crc(p_1271->g_130.s6, "p_1271->g_130.s6", print_hash_value);
    transparent_crc(p_1271->g_130.s7, "p_1271->g_130.s7", print_hash_value);
    transparent_crc(p_1271->g_131, "p_1271->g_131", print_hash_value);
    transparent_crc(p_1271->g_153, "p_1271->g_153", print_hash_value);
    transparent_crc(p_1271->g_159.s0, "p_1271->g_159.s0", print_hash_value);
    transparent_crc(p_1271->g_159.s1, "p_1271->g_159.s1", print_hash_value);
    transparent_crc(p_1271->g_159.s2, "p_1271->g_159.s2", print_hash_value);
    transparent_crc(p_1271->g_159.s3, "p_1271->g_159.s3", print_hash_value);
    transparent_crc(p_1271->g_159.s4, "p_1271->g_159.s4", print_hash_value);
    transparent_crc(p_1271->g_159.s5, "p_1271->g_159.s5", print_hash_value);
    transparent_crc(p_1271->g_159.s6, "p_1271->g_159.s6", print_hash_value);
    transparent_crc(p_1271->g_159.s7, "p_1271->g_159.s7", print_hash_value);
    transparent_crc(p_1271->g_162.s0, "p_1271->g_162.s0", print_hash_value);
    transparent_crc(p_1271->g_162.s1, "p_1271->g_162.s1", print_hash_value);
    transparent_crc(p_1271->g_162.s2, "p_1271->g_162.s2", print_hash_value);
    transparent_crc(p_1271->g_162.s3, "p_1271->g_162.s3", print_hash_value);
    transparent_crc(p_1271->g_162.s4, "p_1271->g_162.s4", print_hash_value);
    transparent_crc(p_1271->g_162.s5, "p_1271->g_162.s5", print_hash_value);
    transparent_crc(p_1271->g_162.s6, "p_1271->g_162.s6", print_hash_value);
    transparent_crc(p_1271->g_162.s7, "p_1271->g_162.s7", print_hash_value);
    transparent_crc(p_1271->g_162.s8, "p_1271->g_162.s8", print_hash_value);
    transparent_crc(p_1271->g_162.s9, "p_1271->g_162.s9", print_hash_value);
    transparent_crc(p_1271->g_162.sa, "p_1271->g_162.sa", print_hash_value);
    transparent_crc(p_1271->g_162.sb, "p_1271->g_162.sb", print_hash_value);
    transparent_crc(p_1271->g_162.sc, "p_1271->g_162.sc", print_hash_value);
    transparent_crc(p_1271->g_162.sd, "p_1271->g_162.sd", print_hash_value);
    transparent_crc(p_1271->g_162.se, "p_1271->g_162.se", print_hash_value);
    transparent_crc(p_1271->g_162.sf, "p_1271->g_162.sf", print_hash_value);
    transparent_crc(p_1271->g_182, "p_1271->g_182", print_hash_value);
    transparent_crc(p_1271->g_189.x, "p_1271->g_189.x", print_hash_value);
    transparent_crc(p_1271->g_189.y, "p_1271->g_189.y", print_hash_value);
    transparent_crc(p_1271->g_260.s0, "p_1271->g_260.s0", print_hash_value);
    transparent_crc(p_1271->g_260.s1, "p_1271->g_260.s1", print_hash_value);
    transparent_crc(p_1271->g_260.s2, "p_1271->g_260.s2", print_hash_value);
    transparent_crc(p_1271->g_260.s3, "p_1271->g_260.s3", print_hash_value);
    transparent_crc(p_1271->g_260.s4, "p_1271->g_260.s4", print_hash_value);
    transparent_crc(p_1271->g_260.s5, "p_1271->g_260.s5", print_hash_value);
    transparent_crc(p_1271->g_260.s6, "p_1271->g_260.s6", print_hash_value);
    transparent_crc(p_1271->g_260.s7, "p_1271->g_260.s7", print_hash_value);
    transparent_crc(p_1271->g_260.s8, "p_1271->g_260.s8", print_hash_value);
    transparent_crc(p_1271->g_260.s9, "p_1271->g_260.s9", print_hash_value);
    transparent_crc(p_1271->g_260.sa, "p_1271->g_260.sa", print_hash_value);
    transparent_crc(p_1271->g_260.sb, "p_1271->g_260.sb", print_hash_value);
    transparent_crc(p_1271->g_260.sc, "p_1271->g_260.sc", print_hash_value);
    transparent_crc(p_1271->g_260.sd, "p_1271->g_260.sd", print_hash_value);
    transparent_crc(p_1271->g_260.se, "p_1271->g_260.se", print_hash_value);
    transparent_crc(p_1271->g_260.sf, "p_1271->g_260.sf", print_hash_value);
    transparent_crc(p_1271->g_261.x, "p_1271->g_261.x", print_hash_value);
    transparent_crc(p_1271->g_261.y, "p_1271->g_261.y", print_hash_value);
    transparent_crc(p_1271->g_261.z, "p_1271->g_261.z", print_hash_value);
    transparent_crc(p_1271->g_261.w, "p_1271->g_261.w", print_hash_value);
    transparent_crc(p_1271->g_262.s0, "p_1271->g_262.s0", print_hash_value);
    transparent_crc(p_1271->g_262.s1, "p_1271->g_262.s1", print_hash_value);
    transparent_crc(p_1271->g_262.s2, "p_1271->g_262.s2", print_hash_value);
    transparent_crc(p_1271->g_262.s3, "p_1271->g_262.s3", print_hash_value);
    transparent_crc(p_1271->g_262.s4, "p_1271->g_262.s4", print_hash_value);
    transparent_crc(p_1271->g_262.s5, "p_1271->g_262.s5", print_hash_value);
    transparent_crc(p_1271->g_262.s6, "p_1271->g_262.s6", print_hash_value);
    transparent_crc(p_1271->g_262.s7, "p_1271->g_262.s7", print_hash_value);
    transparent_crc(p_1271->g_262.s8, "p_1271->g_262.s8", print_hash_value);
    transparent_crc(p_1271->g_262.s9, "p_1271->g_262.s9", print_hash_value);
    transparent_crc(p_1271->g_262.sa, "p_1271->g_262.sa", print_hash_value);
    transparent_crc(p_1271->g_262.sb, "p_1271->g_262.sb", print_hash_value);
    transparent_crc(p_1271->g_262.sc, "p_1271->g_262.sc", print_hash_value);
    transparent_crc(p_1271->g_262.sd, "p_1271->g_262.sd", print_hash_value);
    transparent_crc(p_1271->g_262.se, "p_1271->g_262.se", print_hash_value);
    transparent_crc(p_1271->g_262.sf, "p_1271->g_262.sf", print_hash_value);
    transparent_crc(p_1271->g_273, "p_1271->g_273", print_hash_value);
    transparent_crc(p_1271->g_284.s0, "p_1271->g_284.s0", print_hash_value);
    transparent_crc(p_1271->g_284.s1, "p_1271->g_284.s1", print_hash_value);
    transparent_crc(p_1271->g_284.s2, "p_1271->g_284.s2", print_hash_value);
    transparent_crc(p_1271->g_284.s3, "p_1271->g_284.s3", print_hash_value);
    transparent_crc(p_1271->g_284.s4, "p_1271->g_284.s4", print_hash_value);
    transparent_crc(p_1271->g_284.s5, "p_1271->g_284.s5", print_hash_value);
    transparent_crc(p_1271->g_284.s6, "p_1271->g_284.s6", print_hash_value);
    transparent_crc(p_1271->g_284.s7, "p_1271->g_284.s7", print_hash_value);
    transparent_crc(p_1271->g_284.s8, "p_1271->g_284.s8", print_hash_value);
    transparent_crc(p_1271->g_284.s9, "p_1271->g_284.s9", print_hash_value);
    transparent_crc(p_1271->g_284.sa, "p_1271->g_284.sa", print_hash_value);
    transparent_crc(p_1271->g_284.sb, "p_1271->g_284.sb", print_hash_value);
    transparent_crc(p_1271->g_284.sc, "p_1271->g_284.sc", print_hash_value);
    transparent_crc(p_1271->g_284.sd, "p_1271->g_284.sd", print_hash_value);
    transparent_crc(p_1271->g_284.se, "p_1271->g_284.se", print_hash_value);
    transparent_crc(p_1271->g_284.sf, "p_1271->g_284.sf", print_hash_value);
    transparent_crc(p_1271->g_296.s0, "p_1271->g_296.s0", print_hash_value);
    transparent_crc(p_1271->g_296.s1, "p_1271->g_296.s1", print_hash_value);
    transparent_crc(p_1271->g_296.s2, "p_1271->g_296.s2", print_hash_value);
    transparent_crc(p_1271->g_296.s3, "p_1271->g_296.s3", print_hash_value);
    transparent_crc(p_1271->g_296.s4, "p_1271->g_296.s4", print_hash_value);
    transparent_crc(p_1271->g_296.s5, "p_1271->g_296.s5", print_hash_value);
    transparent_crc(p_1271->g_296.s6, "p_1271->g_296.s6", print_hash_value);
    transparent_crc(p_1271->g_296.s7, "p_1271->g_296.s7", print_hash_value);
    transparent_crc(p_1271->g_296.s8, "p_1271->g_296.s8", print_hash_value);
    transparent_crc(p_1271->g_296.s9, "p_1271->g_296.s9", print_hash_value);
    transparent_crc(p_1271->g_296.sa, "p_1271->g_296.sa", print_hash_value);
    transparent_crc(p_1271->g_296.sb, "p_1271->g_296.sb", print_hash_value);
    transparent_crc(p_1271->g_296.sc, "p_1271->g_296.sc", print_hash_value);
    transparent_crc(p_1271->g_296.sd, "p_1271->g_296.sd", print_hash_value);
    transparent_crc(p_1271->g_296.se, "p_1271->g_296.se", print_hash_value);
    transparent_crc(p_1271->g_296.sf, "p_1271->g_296.sf", print_hash_value);
    transparent_crc(p_1271->g_297.s0, "p_1271->g_297.s0", print_hash_value);
    transparent_crc(p_1271->g_297.s1, "p_1271->g_297.s1", print_hash_value);
    transparent_crc(p_1271->g_297.s2, "p_1271->g_297.s2", print_hash_value);
    transparent_crc(p_1271->g_297.s3, "p_1271->g_297.s3", print_hash_value);
    transparent_crc(p_1271->g_297.s4, "p_1271->g_297.s4", print_hash_value);
    transparent_crc(p_1271->g_297.s5, "p_1271->g_297.s5", print_hash_value);
    transparent_crc(p_1271->g_297.s6, "p_1271->g_297.s6", print_hash_value);
    transparent_crc(p_1271->g_297.s7, "p_1271->g_297.s7", print_hash_value);
    transparent_crc(p_1271->g_300, "p_1271->g_300", print_hash_value);
    transparent_crc(p_1271->g_356.x, "p_1271->g_356.x", print_hash_value);
    transparent_crc(p_1271->g_356.y, "p_1271->g_356.y", print_hash_value);
    transparent_crc(p_1271->g_356.z, "p_1271->g_356.z", print_hash_value);
    transparent_crc(p_1271->g_356.w, "p_1271->g_356.w", print_hash_value);
    transparent_crc(p_1271->g_384.s0, "p_1271->g_384.s0", print_hash_value);
    transparent_crc(p_1271->g_384.s1, "p_1271->g_384.s1", print_hash_value);
    transparent_crc(p_1271->g_384.s2, "p_1271->g_384.s2", print_hash_value);
    transparent_crc(p_1271->g_384.s3, "p_1271->g_384.s3", print_hash_value);
    transparent_crc(p_1271->g_384.s4, "p_1271->g_384.s4", print_hash_value);
    transparent_crc(p_1271->g_384.s5, "p_1271->g_384.s5", print_hash_value);
    transparent_crc(p_1271->g_384.s6, "p_1271->g_384.s6", print_hash_value);
    transparent_crc(p_1271->g_384.s7, "p_1271->g_384.s7", print_hash_value);
    transparent_crc(p_1271->g_384.s8, "p_1271->g_384.s8", print_hash_value);
    transparent_crc(p_1271->g_384.s9, "p_1271->g_384.s9", print_hash_value);
    transparent_crc(p_1271->g_384.sa, "p_1271->g_384.sa", print_hash_value);
    transparent_crc(p_1271->g_384.sb, "p_1271->g_384.sb", print_hash_value);
    transparent_crc(p_1271->g_384.sc, "p_1271->g_384.sc", print_hash_value);
    transparent_crc(p_1271->g_384.sd, "p_1271->g_384.sd", print_hash_value);
    transparent_crc(p_1271->g_384.se, "p_1271->g_384.se", print_hash_value);
    transparent_crc(p_1271->g_384.sf, "p_1271->g_384.sf", print_hash_value);
    transparent_crc(p_1271->g_386.x, "p_1271->g_386.x", print_hash_value);
    transparent_crc(p_1271->g_386.y, "p_1271->g_386.y", print_hash_value);
    transparent_crc(p_1271->g_387.s0, "p_1271->g_387.s0", print_hash_value);
    transparent_crc(p_1271->g_387.s1, "p_1271->g_387.s1", print_hash_value);
    transparent_crc(p_1271->g_387.s2, "p_1271->g_387.s2", print_hash_value);
    transparent_crc(p_1271->g_387.s3, "p_1271->g_387.s3", print_hash_value);
    transparent_crc(p_1271->g_387.s4, "p_1271->g_387.s4", print_hash_value);
    transparent_crc(p_1271->g_387.s5, "p_1271->g_387.s5", print_hash_value);
    transparent_crc(p_1271->g_387.s6, "p_1271->g_387.s6", print_hash_value);
    transparent_crc(p_1271->g_387.s7, "p_1271->g_387.s7", print_hash_value);
    transparent_crc(p_1271->g_409.s0, "p_1271->g_409.s0", print_hash_value);
    transparent_crc(p_1271->g_409.s1, "p_1271->g_409.s1", print_hash_value);
    transparent_crc(p_1271->g_409.s2, "p_1271->g_409.s2", print_hash_value);
    transparent_crc(p_1271->g_409.s3, "p_1271->g_409.s3", print_hash_value);
    transparent_crc(p_1271->g_409.s4, "p_1271->g_409.s4", print_hash_value);
    transparent_crc(p_1271->g_409.s5, "p_1271->g_409.s5", print_hash_value);
    transparent_crc(p_1271->g_409.s6, "p_1271->g_409.s6", print_hash_value);
    transparent_crc(p_1271->g_409.s7, "p_1271->g_409.s7", print_hash_value);
    transparent_crc(p_1271->g_409.s8, "p_1271->g_409.s8", print_hash_value);
    transparent_crc(p_1271->g_409.s9, "p_1271->g_409.s9", print_hash_value);
    transparent_crc(p_1271->g_409.sa, "p_1271->g_409.sa", print_hash_value);
    transparent_crc(p_1271->g_409.sb, "p_1271->g_409.sb", print_hash_value);
    transparent_crc(p_1271->g_409.sc, "p_1271->g_409.sc", print_hash_value);
    transparent_crc(p_1271->g_409.sd, "p_1271->g_409.sd", print_hash_value);
    transparent_crc(p_1271->g_409.se, "p_1271->g_409.se", print_hash_value);
    transparent_crc(p_1271->g_409.sf, "p_1271->g_409.sf", print_hash_value);
    transparent_crc(p_1271->g_410.s0, "p_1271->g_410.s0", print_hash_value);
    transparent_crc(p_1271->g_410.s1, "p_1271->g_410.s1", print_hash_value);
    transparent_crc(p_1271->g_410.s2, "p_1271->g_410.s2", print_hash_value);
    transparent_crc(p_1271->g_410.s3, "p_1271->g_410.s3", print_hash_value);
    transparent_crc(p_1271->g_410.s4, "p_1271->g_410.s4", print_hash_value);
    transparent_crc(p_1271->g_410.s5, "p_1271->g_410.s5", print_hash_value);
    transparent_crc(p_1271->g_410.s6, "p_1271->g_410.s6", print_hash_value);
    transparent_crc(p_1271->g_410.s7, "p_1271->g_410.s7", print_hash_value);
    transparent_crc(p_1271->g_410.s8, "p_1271->g_410.s8", print_hash_value);
    transparent_crc(p_1271->g_410.s9, "p_1271->g_410.s9", print_hash_value);
    transparent_crc(p_1271->g_410.sa, "p_1271->g_410.sa", print_hash_value);
    transparent_crc(p_1271->g_410.sb, "p_1271->g_410.sb", print_hash_value);
    transparent_crc(p_1271->g_410.sc, "p_1271->g_410.sc", print_hash_value);
    transparent_crc(p_1271->g_410.sd, "p_1271->g_410.sd", print_hash_value);
    transparent_crc(p_1271->g_410.se, "p_1271->g_410.se", print_hash_value);
    transparent_crc(p_1271->g_410.sf, "p_1271->g_410.sf", print_hash_value);
    transparent_crc(p_1271->g_422.x, "p_1271->g_422.x", print_hash_value);
    transparent_crc(p_1271->g_422.y, "p_1271->g_422.y", print_hash_value);
    transparent_crc(p_1271->g_493.x, "p_1271->g_493.x", print_hash_value);
    transparent_crc(p_1271->g_493.y, "p_1271->g_493.y", print_hash_value);
    transparent_crc(p_1271->g_497.x, "p_1271->g_497.x", print_hash_value);
    transparent_crc(p_1271->g_497.y, "p_1271->g_497.y", print_hash_value);
    transparent_crc(p_1271->g_539.x, "p_1271->g_539.x", print_hash_value);
    transparent_crc(p_1271->g_539.y, "p_1271->g_539.y", print_hash_value);
    transparent_crc(p_1271->g_539.z, "p_1271->g_539.z", print_hash_value);
    transparent_crc(p_1271->g_539.w, "p_1271->g_539.w", print_hash_value);
    transparent_crc(p_1271->g_589.s0, "p_1271->g_589.s0", print_hash_value);
    transparent_crc(p_1271->g_589.s1, "p_1271->g_589.s1", print_hash_value);
    transparent_crc(p_1271->g_589.s2, "p_1271->g_589.s2", print_hash_value);
    transparent_crc(p_1271->g_589.s3, "p_1271->g_589.s3", print_hash_value);
    transparent_crc(p_1271->g_589.s4, "p_1271->g_589.s4", print_hash_value);
    transparent_crc(p_1271->g_589.s5, "p_1271->g_589.s5", print_hash_value);
    transparent_crc(p_1271->g_589.s6, "p_1271->g_589.s6", print_hash_value);
    transparent_crc(p_1271->g_589.s7, "p_1271->g_589.s7", print_hash_value);
    transparent_crc(p_1271->g_600.s0, "p_1271->g_600.s0", print_hash_value);
    transparent_crc(p_1271->g_600.s1, "p_1271->g_600.s1", print_hash_value);
    transparent_crc(p_1271->g_600.s2, "p_1271->g_600.s2", print_hash_value);
    transparent_crc(p_1271->g_600.s3, "p_1271->g_600.s3", print_hash_value);
    transparent_crc(p_1271->g_600.s4, "p_1271->g_600.s4", print_hash_value);
    transparent_crc(p_1271->g_600.s5, "p_1271->g_600.s5", print_hash_value);
    transparent_crc(p_1271->g_600.s6, "p_1271->g_600.s6", print_hash_value);
    transparent_crc(p_1271->g_600.s7, "p_1271->g_600.s7", print_hash_value);
    transparent_crc(p_1271->g_649.x, "p_1271->g_649.x", print_hash_value);
    transparent_crc(p_1271->g_649.y, "p_1271->g_649.y", print_hash_value);
    transparent_crc(p_1271->g_652, "p_1271->g_652", print_hash_value);
    transparent_crc(p_1271->g_683.s0, "p_1271->g_683.s0", print_hash_value);
    transparent_crc(p_1271->g_683.s1, "p_1271->g_683.s1", print_hash_value);
    transparent_crc(p_1271->g_683.s2, "p_1271->g_683.s2", print_hash_value);
    transparent_crc(p_1271->g_683.s3, "p_1271->g_683.s3", print_hash_value);
    transparent_crc(p_1271->g_683.s4, "p_1271->g_683.s4", print_hash_value);
    transparent_crc(p_1271->g_683.s5, "p_1271->g_683.s5", print_hash_value);
    transparent_crc(p_1271->g_683.s6, "p_1271->g_683.s6", print_hash_value);
    transparent_crc(p_1271->g_683.s7, "p_1271->g_683.s7", print_hash_value);
    transparent_crc(p_1271->g_683.s8, "p_1271->g_683.s8", print_hash_value);
    transparent_crc(p_1271->g_683.s9, "p_1271->g_683.s9", print_hash_value);
    transparent_crc(p_1271->g_683.sa, "p_1271->g_683.sa", print_hash_value);
    transparent_crc(p_1271->g_683.sb, "p_1271->g_683.sb", print_hash_value);
    transparent_crc(p_1271->g_683.sc, "p_1271->g_683.sc", print_hash_value);
    transparent_crc(p_1271->g_683.sd, "p_1271->g_683.sd", print_hash_value);
    transparent_crc(p_1271->g_683.se, "p_1271->g_683.se", print_hash_value);
    transparent_crc(p_1271->g_683.sf, "p_1271->g_683.sf", print_hash_value);
    transparent_crc(p_1271->g_699, "p_1271->g_699", print_hash_value);
    transparent_crc(p_1271->g_708, "p_1271->g_708", print_hash_value);
    transparent_crc(p_1271->g_719, "p_1271->g_719", print_hash_value);
    transparent_crc(p_1271->g_723.x, "p_1271->g_723.x", print_hash_value);
    transparent_crc(p_1271->g_723.y, "p_1271->g_723.y", print_hash_value);
    transparent_crc(p_1271->g_723.z, "p_1271->g_723.z", print_hash_value);
    transparent_crc(p_1271->g_723.w, "p_1271->g_723.w", print_hash_value);
    transparent_crc(p_1271->g_745.s0, "p_1271->g_745.s0", print_hash_value);
    transparent_crc(p_1271->g_745.s1, "p_1271->g_745.s1", print_hash_value);
    transparent_crc(p_1271->g_745.s2, "p_1271->g_745.s2", print_hash_value);
    transparent_crc(p_1271->g_745.s3, "p_1271->g_745.s3", print_hash_value);
    transparent_crc(p_1271->g_745.s4, "p_1271->g_745.s4", print_hash_value);
    transparent_crc(p_1271->g_745.s5, "p_1271->g_745.s5", print_hash_value);
    transparent_crc(p_1271->g_745.s6, "p_1271->g_745.s6", print_hash_value);
    transparent_crc(p_1271->g_745.s7, "p_1271->g_745.s7", print_hash_value);
    transparent_crc(p_1271->g_746.s0, "p_1271->g_746.s0", print_hash_value);
    transparent_crc(p_1271->g_746.s1, "p_1271->g_746.s1", print_hash_value);
    transparent_crc(p_1271->g_746.s2, "p_1271->g_746.s2", print_hash_value);
    transparent_crc(p_1271->g_746.s3, "p_1271->g_746.s3", print_hash_value);
    transparent_crc(p_1271->g_746.s4, "p_1271->g_746.s4", print_hash_value);
    transparent_crc(p_1271->g_746.s5, "p_1271->g_746.s5", print_hash_value);
    transparent_crc(p_1271->g_746.s6, "p_1271->g_746.s6", print_hash_value);
    transparent_crc(p_1271->g_746.s7, "p_1271->g_746.s7", print_hash_value);
    transparent_crc(p_1271->g_787.x, "p_1271->g_787.x", print_hash_value);
    transparent_crc(p_1271->g_787.y, "p_1271->g_787.y", print_hash_value);
    transparent_crc(p_1271->g_787.z, "p_1271->g_787.z", print_hash_value);
    transparent_crc(p_1271->g_787.w, "p_1271->g_787.w", print_hash_value);
    transparent_crc(p_1271->g_788.x, "p_1271->g_788.x", print_hash_value);
    transparent_crc(p_1271->g_788.y, "p_1271->g_788.y", print_hash_value);
    transparent_crc(p_1271->g_788.z, "p_1271->g_788.z", print_hash_value);
    transparent_crc(p_1271->g_788.w, "p_1271->g_788.w", print_hash_value);
    transparent_crc(p_1271->g_789.x, "p_1271->g_789.x", print_hash_value);
    transparent_crc(p_1271->g_789.y, "p_1271->g_789.y", print_hash_value);
    transparent_crc(p_1271->g_790.x, "p_1271->g_790.x", print_hash_value);
    transparent_crc(p_1271->g_790.y, "p_1271->g_790.y", print_hash_value);
    transparent_crc(p_1271->g_791.x, "p_1271->g_791.x", print_hash_value);
    transparent_crc(p_1271->g_791.y, "p_1271->g_791.y", print_hash_value);
    transparent_crc(p_1271->g_791.z, "p_1271->g_791.z", print_hash_value);
    transparent_crc(p_1271->g_791.w, "p_1271->g_791.w", print_hash_value);
    transparent_crc(p_1271->g_843.x, "p_1271->g_843.x", print_hash_value);
    transparent_crc(p_1271->g_843.y, "p_1271->g_843.y", print_hash_value);
    transparent_crc(p_1271->g_872.s0, "p_1271->g_872.s0", print_hash_value);
    transparent_crc(p_1271->g_872.s1, "p_1271->g_872.s1", print_hash_value);
    transparent_crc(p_1271->g_872.s2, "p_1271->g_872.s2", print_hash_value);
    transparent_crc(p_1271->g_872.s3, "p_1271->g_872.s3", print_hash_value);
    transparent_crc(p_1271->g_872.s4, "p_1271->g_872.s4", print_hash_value);
    transparent_crc(p_1271->g_872.s5, "p_1271->g_872.s5", print_hash_value);
    transparent_crc(p_1271->g_872.s6, "p_1271->g_872.s6", print_hash_value);
    transparent_crc(p_1271->g_872.s7, "p_1271->g_872.s7", print_hash_value);
    transparent_crc(p_1271->g_924.x, "p_1271->g_924.x", print_hash_value);
    transparent_crc(p_1271->g_924.y, "p_1271->g_924.y", print_hash_value);
    transparent_crc(p_1271->g_926.x, "p_1271->g_926.x", print_hash_value);
    transparent_crc(p_1271->g_926.y, "p_1271->g_926.y", print_hash_value);
    transparent_crc(p_1271->g_926.z, "p_1271->g_926.z", print_hash_value);
    transparent_crc(p_1271->g_926.w, "p_1271->g_926.w", print_hash_value);
    transparent_crc(p_1271->g_932.s0, "p_1271->g_932.s0", print_hash_value);
    transparent_crc(p_1271->g_932.s1, "p_1271->g_932.s1", print_hash_value);
    transparent_crc(p_1271->g_932.s2, "p_1271->g_932.s2", print_hash_value);
    transparent_crc(p_1271->g_932.s3, "p_1271->g_932.s3", print_hash_value);
    transparent_crc(p_1271->g_932.s4, "p_1271->g_932.s4", print_hash_value);
    transparent_crc(p_1271->g_932.s5, "p_1271->g_932.s5", print_hash_value);
    transparent_crc(p_1271->g_932.s6, "p_1271->g_932.s6", print_hash_value);
    transparent_crc(p_1271->g_932.s7, "p_1271->g_932.s7", print_hash_value);
    transparent_crc(p_1271->g_932.s8, "p_1271->g_932.s8", print_hash_value);
    transparent_crc(p_1271->g_932.s9, "p_1271->g_932.s9", print_hash_value);
    transparent_crc(p_1271->g_932.sa, "p_1271->g_932.sa", print_hash_value);
    transparent_crc(p_1271->g_932.sb, "p_1271->g_932.sb", print_hash_value);
    transparent_crc(p_1271->g_932.sc, "p_1271->g_932.sc", print_hash_value);
    transparent_crc(p_1271->g_932.sd, "p_1271->g_932.sd", print_hash_value);
    transparent_crc(p_1271->g_932.se, "p_1271->g_932.se", print_hash_value);
    transparent_crc(p_1271->g_932.sf, "p_1271->g_932.sf", print_hash_value);
    transparent_crc(p_1271->g_943.x, "p_1271->g_943.x", print_hash_value);
    transparent_crc(p_1271->g_943.y, "p_1271->g_943.y", print_hash_value);
    transparent_crc(p_1271->g_953.x, "p_1271->g_953.x", print_hash_value);
    transparent_crc(p_1271->g_953.y, "p_1271->g_953.y", print_hash_value);
    transparent_crc(p_1271->g_970.s0, "p_1271->g_970.s0", print_hash_value);
    transparent_crc(p_1271->g_970.s1, "p_1271->g_970.s1", print_hash_value);
    transparent_crc(p_1271->g_970.s2, "p_1271->g_970.s2", print_hash_value);
    transparent_crc(p_1271->g_970.s3, "p_1271->g_970.s3", print_hash_value);
    transparent_crc(p_1271->g_970.s4, "p_1271->g_970.s4", print_hash_value);
    transparent_crc(p_1271->g_970.s5, "p_1271->g_970.s5", print_hash_value);
    transparent_crc(p_1271->g_970.s6, "p_1271->g_970.s6", print_hash_value);
    transparent_crc(p_1271->g_970.s7, "p_1271->g_970.s7", print_hash_value);
    transparent_crc(p_1271->g_997.x, "p_1271->g_997.x", print_hash_value);
    transparent_crc(p_1271->g_997.y, "p_1271->g_997.y", print_hash_value);
    transparent_crc(p_1271->g_1019.x, "p_1271->g_1019.x", print_hash_value);
    transparent_crc(p_1271->g_1019.y, "p_1271->g_1019.y", print_hash_value);
    transparent_crc(p_1271->g_1021.x, "p_1271->g_1021.x", print_hash_value);
    transparent_crc(p_1271->g_1021.y, "p_1271->g_1021.y", print_hash_value);
    transparent_crc(p_1271->g_1023.x, "p_1271->g_1023.x", print_hash_value);
    transparent_crc(p_1271->g_1023.y, "p_1271->g_1023.y", print_hash_value);
    transparent_crc(p_1271->g_1023.z, "p_1271->g_1023.z", print_hash_value);
    transparent_crc(p_1271->g_1023.w, "p_1271->g_1023.w", print_hash_value);
    transparent_crc(p_1271->g_1024.s0, "p_1271->g_1024.s0", print_hash_value);
    transparent_crc(p_1271->g_1024.s1, "p_1271->g_1024.s1", print_hash_value);
    transparent_crc(p_1271->g_1024.s2, "p_1271->g_1024.s2", print_hash_value);
    transparent_crc(p_1271->g_1024.s3, "p_1271->g_1024.s3", print_hash_value);
    transparent_crc(p_1271->g_1024.s4, "p_1271->g_1024.s4", print_hash_value);
    transparent_crc(p_1271->g_1024.s5, "p_1271->g_1024.s5", print_hash_value);
    transparent_crc(p_1271->g_1024.s6, "p_1271->g_1024.s6", print_hash_value);
    transparent_crc(p_1271->g_1024.s7, "p_1271->g_1024.s7", print_hash_value);
    transparent_crc(p_1271->g_1027, "p_1271->g_1027", print_hash_value);
    transparent_crc(p_1271->g_1055.s0, "p_1271->g_1055.s0", print_hash_value);
    transparent_crc(p_1271->g_1055.s1, "p_1271->g_1055.s1", print_hash_value);
    transparent_crc(p_1271->g_1055.s2, "p_1271->g_1055.s2", print_hash_value);
    transparent_crc(p_1271->g_1055.s3, "p_1271->g_1055.s3", print_hash_value);
    transparent_crc(p_1271->g_1055.s4, "p_1271->g_1055.s4", print_hash_value);
    transparent_crc(p_1271->g_1055.s5, "p_1271->g_1055.s5", print_hash_value);
    transparent_crc(p_1271->g_1055.s6, "p_1271->g_1055.s6", print_hash_value);
    transparent_crc(p_1271->g_1055.s7, "p_1271->g_1055.s7", print_hash_value);
    transparent_crc(p_1271->g_1056.x, "p_1271->g_1056.x", print_hash_value);
    transparent_crc(p_1271->g_1056.y, "p_1271->g_1056.y", print_hash_value);
    transparent_crc(p_1271->g_1058.s0, "p_1271->g_1058.s0", print_hash_value);
    transparent_crc(p_1271->g_1058.s1, "p_1271->g_1058.s1", print_hash_value);
    transparent_crc(p_1271->g_1058.s2, "p_1271->g_1058.s2", print_hash_value);
    transparent_crc(p_1271->g_1058.s3, "p_1271->g_1058.s3", print_hash_value);
    transparent_crc(p_1271->g_1058.s4, "p_1271->g_1058.s4", print_hash_value);
    transparent_crc(p_1271->g_1058.s5, "p_1271->g_1058.s5", print_hash_value);
    transparent_crc(p_1271->g_1058.s6, "p_1271->g_1058.s6", print_hash_value);
    transparent_crc(p_1271->g_1058.s7, "p_1271->g_1058.s7", print_hash_value);
    transparent_crc(p_1271->g_1118.s0, "p_1271->g_1118.s0", print_hash_value);
    transparent_crc(p_1271->g_1118.s1, "p_1271->g_1118.s1", print_hash_value);
    transparent_crc(p_1271->g_1118.s2, "p_1271->g_1118.s2", print_hash_value);
    transparent_crc(p_1271->g_1118.s3, "p_1271->g_1118.s3", print_hash_value);
    transparent_crc(p_1271->g_1118.s4, "p_1271->g_1118.s4", print_hash_value);
    transparent_crc(p_1271->g_1118.s5, "p_1271->g_1118.s5", print_hash_value);
    transparent_crc(p_1271->g_1118.s6, "p_1271->g_1118.s6", print_hash_value);
    transparent_crc(p_1271->g_1118.s7, "p_1271->g_1118.s7", print_hash_value);
    transparent_crc(p_1271->g_1118.s8, "p_1271->g_1118.s8", print_hash_value);
    transparent_crc(p_1271->g_1118.s9, "p_1271->g_1118.s9", print_hash_value);
    transparent_crc(p_1271->g_1118.sa, "p_1271->g_1118.sa", print_hash_value);
    transparent_crc(p_1271->g_1118.sb, "p_1271->g_1118.sb", print_hash_value);
    transparent_crc(p_1271->g_1118.sc, "p_1271->g_1118.sc", print_hash_value);
    transparent_crc(p_1271->g_1118.sd, "p_1271->g_1118.sd", print_hash_value);
    transparent_crc(p_1271->g_1118.se, "p_1271->g_1118.se", print_hash_value);
    transparent_crc(p_1271->g_1118.sf, "p_1271->g_1118.sf", print_hash_value);
    transparent_crc(p_1271->g_1135.x, "p_1271->g_1135.x", print_hash_value);
    transparent_crc(p_1271->g_1135.y, "p_1271->g_1135.y", print_hash_value);
    transparent_crc(p_1271->g_1153.x, "p_1271->g_1153.x", print_hash_value);
    transparent_crc(p_1271->g_1153.y, "p_1271->g_1153.y", print_hash_value);
    transparent_crc(p_1271->g_1154.x, "p_1271->g_1154.x", print_hash_value);
    transparent_crc(p_1271->g_1154.y, "p_1271->g_1154.y", print_hash_value);
    transparent_crc(p_1271->g_1155.s0, "p_1271->g_1155.s0", print_hash_value);
    transparent_crc(p_1271->g_1155.s1, "p_1271->g_1155.s1", print_hash_value);
    transparent_crc(p_1271->g_1155.s2, "p_1271->g_1155.s2", print_hash_value);
    transparent_crc(p_1271->g_1155.s3, "p_1271->g_1155.s3", print_hash_value);
    transparent_crc(p_1271->g_1155.s4, "p_1271->g_1155.s4", print_hash_value);
    transparent_crc(p_1271->g_1155.s5, "p_1271->g_1155.s5", print_hash_value);
    transparent_crc(p_1271->g_1155.s6, "p_1271->g_1155.s6", print_hash_value);
    transparent_crc(p_1271->g_1155.s7, "p_1271->g_1155.s7", print_hash_value);
    transparent_crc(p_1271->g_1155.s8, "p_1271->g_1155.s8", print_hash_value);
    transparent_crc(p_1271->g_1155.s9, "p_1271->g_1155.s9", print_hash_value);
    transparent_crc(p_1271->g_1155.sa, "p_1271->g_1155.sa", print_hash_value);
    transparent_crc(p_1271->g_1155.sb, "p_1271->g_1155.sb", print_hash_value);
    transparent_crc(p_1271->g_1155.sc, "p_1271->g_1155.sc", print_hash_value);
    transparent_crc(p_1271->g_1155.sd, "p_1271->g_1155.sd", print_hash_value);
    transparent_crc(p_1271->g_1155.se, "p_1271->g_1155.se", print_hash_value);
    transparent_crc(p_1271->g_1155.sf, "p_1271->g_1155.sf", print_hash_value);
    transparent_crc(p_1271->g_1156.x, "p_1271->g_1156.x", print_hash_value);
    transparent_crc(p_1271->g_1156.y, "p_1271->g_1156.y", print_hash_value);
    transparent_crc(p_1271->g_1156.z, "p_1271->g_1156.z", print_hash_value);
    transparent_crc(p_1271->g_1156.w, "p_1271->g_1156.w", print_hash_value);
    transparent_crc(p_1271->g_1200, "p_1271->g_1200", print_hash_value);
    transparent_crc(p_1271->g_1223.x, "p_1271->g_1223.x", print_hash_value);
    transparent_crc(p_1271->g_1223.y, "p_1271->g_1223.y", print_hash_value);
    transparent_crc(p_1271->g_1223.z, "p_1271->g_1223.z", print_hash_value);
    transparent_crc(p_1271->g_1223.w, "p_1271->g_1223.w", print_hash_value);
    transparent_crc(p_1271->g_1229, "p_1271->g_1229", print_hash_value);
    transparent_crc(p_1271->v_collective, "p_1271->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 88; i++)
            transparent_crc(p_1271->g_special_values[i + 88 * get_linear_group_id()], "p_1271->g_special_values[i + 88 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_1271->l_comm_values[get_linear_local_id()], "p_1271->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1271->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_1271->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
