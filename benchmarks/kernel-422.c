// --atomics 73 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 60,41,1 -l 3,1,1
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
{1,2,0}, // permutation 3
{1,0,2}, // permutation 4
{1,0,2}, // permutation 5
{1,2,0}, // permutation 6
{2,0,1}, // permutation 7
{1,0,2}, // permutation 8
{1,2,0} // permutation 9
};

// Seed: 44047239

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile uint32_t  f0;
   volatile int32_t  f1;
   uint32_t  f2;
   int64_t  f3;
   int32_t  f4;
};

struct S1 {
   int64_t  f0;
   int32_t  f1;
   volatile uint32_t  f2;
   int32_t  f3;
   volatile uint32_t  f4;
};

struct S2 {
    int32_t g_10[8][6][4];
    int32_t *g_9;
    volatile int32_t g_11;
    volatile int32_t g_12;
    int32_t g_13;
    volatile int32_t g_120;
    volatile int32_t g_121;
    volatile VECTOR(int32_t, 4) g_122;
    VECTOR(int32_t, 8) g_123;
    struct S0 g_141;
    struct S0 *g_140;
    int16_t g_162[9];
    struct S0 g_164;
    struct S1 g_168;
    struct S1 * volatile g_169[1][2][9];
    struct S1 * volatile g_171;
    volatile VECTOR(int32_t, 8) g_179;
    VECTOR(int32_t, 4) g_209;
    volatile VECTOR(uint8_t, 16) g_213;
    int32_t ** volatile g_225;
    int32_t g_234;
    struct S0 g_242[8][6][3];
    struct S0 *g_241;
    int32_t ** volatile g_244;
    struct S1 g_261;
    struct S0 g_262[1];
    VECTOR(uint16_t, 2) g_285;
    VECTOR(int8_t, 16) g_288;
    uint8_t g_298;
    struct S1 *g_304[9];
    struct S1 **g_303;
    struct S1 *** volatile g_302;
    uint32_t g_315;
    int32_t **g_376;
    int32_t ***g_375;
    VECTOR(int16_t, 8) g_384;
    uint32_t g_398;
    struct S0 ** volatile g_407;
    int16_t *g_410;
    volatile VECTOR(int64_t, 2) g_411;
    VECTOR(uint32_t, 4) g_413;
    VECTOR(int16_t, 2) g_430;
    struct S1 ***g_446;
    int32_t ** volatile g_453;
    VECTOR(uint32_t, 2) g_465;
    VECTOR(uint8_t, 2) g_475;
    struct S0 g_491;
    int8_t * volatile g_506;
    struct S0 g_539[9][10];
    uint8_t *g_546;
    uint8_t * volatile * volatile g_545;
    volatile VECTOR(int8_t, 2) g_578;
    volatile VECTOR(uint8_t, 4) g_593;
    volatile struct S0 g_605;
    uint16_t g_607;
    VECTOR(uint16_t, 8) g_654;
    volatile int8_t g_674;
    volatile struct S1 g_718;
    volatile struct S1 g_719;
    int32_t * volatile g_729[8];
    volatile struct S1 g_733;
    VECTOR(int32_t, 8) g_738;
    uint64_t g_744;
    VECTOR(int16_t, 2) g_763;
    volatile struct S0 g_787[3];
    volatile VECTOR(int32_t, 8) g_821;
    struct S1 g_823;
    volatile struct S0 g_832;
    volatile struct S1 g_842;
    VECTOR(uint16_t, 8) g_843;
    VECTOR(uint16_t, 8) g_845;
    VECTOR(int32_t, 2) g_852;
    volatile VECTOR(uint64_t, 16) g_854;
    VECTOR(int16_t, 4) g_868;
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
int32_t  func_1(struct S2 * p_888);
int32_t * func_2(int64_t  p_3, int32_t * p_4, int32_t * p_5, struct S2 * p_888);
uint64_t  func_6(int32_t * p_7, int32_t * p_8, struct S2 * p_888);
struct S1  func_130(uint64_t  p_131, uint32_t  p_132, int32_t  p_133, struct S2 * p_888);
uint32_t  func_135(struct S0 * p_136, uint64_t  p_137, uint32_t  p_138, int64_t  p_139, struct S2 * p_888);
struct S0 * func_143(uint8_t  p_144, int32_t  p_145, uint32_t  p_146, struct S0 * p_147, struct S0 * p_148, struct S2 * p_888);
int32_t  func_174(int16_t  p_175, struct S2 * p_888);
struct S0 * func_176(int32_t  p_177, struct S2 * p_888);
struct S1 * func_196(int16_t * p_197, uint16_t  p_198, uint64_t  p_199, uint32_t  p_200, struct S2 * p_888);
uint8_t  func_218(int32_t * p_219, uint16_t  p_220, int32_t  p_221, struct S2 * p_888);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_888->g_9 p_888->g_13 p_888->g_123 p_888->g_605.f1 p_888->g_832 p_888->g_140 p_888->g_842 p_888->g_843 p_888->g_845 p_888->g_852 p_888->g_10 p_888->g_854 p_888->g_298 p_888->g_465 p_888->g_744 p_888->g_209 p_888->g_242.f3 p_888->g_738 p_888->g_261.f2 p_888->g_868 p_888->g_410 p_888->g_162 p_888->g_491.f4 p_888->g_262.f4 p_888->g_654 p_888->g_546
 * writes: p_888->g_13 p_888->g_123 p_888->g_10 p_888->g_744 p_888->g_141 p_888->g_738 p_888->g_298
 */
int32_t  func_1(struct S2 * p_888)
{ /* block id: 4 */
    uint64_t *l_827 = &p_888->g_744;
    int32_t *l_828[7] = {&p_888->g_234,&p_888->g_234,&p_888->g_234,&p_888->g_234,&p_888->g_234,&p_888->g_234,&p_888->g_234};
    int32_t **l_829 = &l_828[5];
    int32_t *l_830 = (void*)0;
    int32_t *l_831[5][7][4] = {{{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3}},{{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3}},{{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3}},{{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3}},{{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3},{&p_888->g_168.f3,(void*)0,(void*)0,&p_888->g_823.f3}}};
    VECTOR(uint8_t, 16) l_857 = (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xAEL), 0xAEL), 0xAEL, 255UL, 0xAEL, (VECTOR(uint8_t, 2))(255UL, 0xAEL), (VECTOR(uint8_t, 2))(255UL, 0xAEL), 255UL, 0xAEL, 255UL, 0xAEL);
    VECTOR(uint16_t, 4) l_869 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x1E0DL), 0x1E0DL);
    int8_t *l_872 = (void*)0;
    int8_t *l_873 = (void*)0;
    int8_t *l_874 = (void*)0;
    int8_t *l_875 = (void*)0;
    int8_t *l_876 = (void*)0;
    int8_t *l_877 = (void*)0;
    int8_t *l_878 = (void*)0;
    int8_t *l_879 = (void*)0;
    int8_t *l_880 = (void*)0;
    int8_t *l_881 = (void*)0;
    int8_t *l_882[10][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    uint32_t l_883 = 0UL;
    uint16_t l_884 = 0xA091L;
    uint32_t l_885 = 0x4729BF41L;
    int8_t l_886 = 0L;
    int32_t l_887 = (-1L);
    int i, j, k;
    (*l_829) = func_2(((((*l_827) = func_6(p_888->g_9, &p_888->g_10[2][4][0], p_888)) , ((*l_829) = l_828[6])) != &p_888->g_234), (GROUP_DIVERGE(0, 1) , l_830), l_831[4][2][2], p_888);
    (*l_829) = func_2(p_888->g_261.f2, ((~(((*p_888->g_546) = ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(0xB5L, ((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 8))(l_857.scdd72566)), ((VECTOR(uint8_t, 4))(1UL, (((0xA3AAB93FL == ((safe_lshift_func_uint16_t_u_s((p_888->g_843.s4 | (-10L)), 1)) <= (safe_sub_func_uint8_t_u_u((((VECTOR(uint8_t, 2))(0xF0L, 255UL)).odd < ((safe_mod_func_uint8_t_u_u(((((safe_lshift_func_int8_t_s_s(((3L || (!((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((-1L), (safe_lshift_func_int8_t_s_s(p_888->g_10[2][4][0], (p_888->g_465.y , (l_883 ^= (((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 8))(p_888->g_868.xywyxyxw)).s41, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_869.wx)).xxyy)).even))).even < ((safe_add_func_uint64_t_u_u((0x0E5974ECL >= (*p_888->g_9)), 0xFC5C4ADECDF67DE2L)) || p_888->g_738.s0)))))), ((VECTOR(int16_t, 2))((-6L))), l_884, ((VECTOR(int16_t, 4))(3L)), 4L, 0x1AE4L, (*p_888->g_410), (*p_888->g_410), (*p_888->g_410), 0x0DBDL, 0x35B7L)))).s8d, ((VECTOR(int16_t, 2))(0x42CAL))))).yxyyxxxxyyxxyyyy)).s4)) , p_888->g_738.s1), 0)) , l_885) == p_888->g_491.f4) < (*p_888->g_410)), l_886)) > p_888->g_262[0].f4)), p_888->g_654.s4)))) , 0x38L) , GROUP_DIVERGE(2, 1)), 0xF7L, 0x98L)).xzxxzyzz))), 250UL, ((VECTOR(uint8_t, 2))(0x3EL)), 0x14L, ((VECTOR(uint8_t, 2))(255UL)), 3UL)).s35c4)).y) <= p_888->g_843.s2)) , (*l_829)), (*l_829), p_888);
    return l_887;
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_832 p_888->g_140 p_888->g_842 p_888->g_843 p_888->g_845 p_888->g_852 p_888->g_9 p_888->g_10 p_888->g_854 p_888->g_298 p_888->g_465 p_888->g_744 p_888->g_209 p_888->g_242.f3 p_888->g_738
 * writes: p_888->g_141 p_888->g_10 p_888->g_744 p_888->g_738
 */
int32_t * func_2(int64_t  p_3, int32_t * p_4, int32_t * p_5, struct S2 * p_888)
{ /* block id: 383 */
    int8_t *l_835 = (void*)0;
    VECTOR(uint16_t, 16) l_840 = (VECTOR(uint16_t, 16))(0xB9C3L, (VECTOR(uint16_t, 4))(0xB9C3L, (VECTOR(uint16_t, 2))(0xB9C3L, 0x51A0L), 0x51A0L), 0x51A0L, 0xB9C3L, 0x51A0L, (VECTOR(uint16_t, 2))(0xB9C3L, 0x51A0L), (VECTOR(uint16_t, 2))(0xB9C3L, 0x51A0L), 0xB9C3L, 0x51A0L, 0xB9C3L, 0x51A0L);
    VECTOR(int32_t, 16) l_841 = (VECTOR(int32_t, 16))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0L), 0L), 0L, (-6L), 0L, (VECTOR(int32_t, 2))((-6L), 0L), (VECTOR(int32_t, 2))((-6L), 0L), (-6L), 0L, (-6L), 0L);
    VECTOR(uint16_t, 8) l_844 = (VECTOR(uint16_t, 8))(0x29C3L, (VECTOR(uint16_t, 4))(0x29C3L, (VECTOR(uint16_t, 2))(0x29C3L, 1UL), 1UL), 1UL, 0x29C3L, 1UL);
    VECTOR(uint16_t, 4) l_846 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x1D6AL), 0x1D6AL);
    VECTOR(uint16_t, 4) l_847 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 0x7C06L), 0x7C06L);
    VECTOR(uint16_t, 8) l_853 = (VECTOR(uint16_t, 8))(0xBB59L, (VECTOR(uint16_t, 4))(0xBB59L, (VECTOR(uint16_t, 2))(0xBB59L, 65535UL), 65535UL), 65535UL, 0xBB59L, 65535UL);
    uint64_t *l_855 = &p_888->g_744;
    int32_t *l_856[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    (*p_888->g_140) = p_888->g_832;
    p_888->g_738.s1 &= (((+((safe_sub_func_int16_t_s_s((8UL < ((void*)0 != l_835)), ((safe_div_func_int8_t_s_s((((*l_855) |= (safe_add_func_int32_t_s_s((((VECTOR(uint16_t, 16))(l_840.sfd121a816c154b52)).s8 != (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_841.s674d)).yywwxxyzyzxwwwzw)))).even)).s6 , (p_888->g_842 , ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(mad_hi(((VECTOR(uint16_t, 8))(p_888->g_843.s33013727)), ((VECTOR(uint16_t, 4))(clz(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_844.s6631)).zxxxzzxx)).hi))).yxxwyxzw, ((VECTOR(uint16_t, 8))(max(((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(uint16_t, 4))(p_888->g_845.s5661)), ((VECTOR(uint16_t, 16))(l_846.zwzxwwywyxwwyzxy)).s5e5d))).xzwzzyxy, ((VECTOR(uint16_t, 16))(65535UL, ((VECTOR(uint16_t, 4))(l_847.xyxw)), 65535UL, 4UL, (safe_div_func_int16_t_s_s(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x4D11L, 0x6BAFL)))).lo, (safe_mod_func_int32_t_s_s(l_840.sa, p_3)))), (((*p_888->g_9) ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(p_888->g_852.yyyy)).zywwywywzwwyxxwx)).sf) >= l_841.s7), ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(1UL, ((VECTOR(uint16_t, 2))(l_853.s62)), 8UL)).odd)), 0x7E0AL, 0x9705L)).even)), 3UL, ((((VECTOR(uint16_t, 8))(FAKE_DIVERGE(p_888->local_1_offset, get_local_id(1), 10), 1UL, (((VECTOR(uint64_t, 8))(p_888->g_854.sc079937f)).s4 ^ (l_840.sf || 7L)), ((VECTOR(uint16_t, 2))(65532UL)), p_888->g_298, 0x7FCFL, 5UL)).s3 ^ p_888->g_465.y) ^ l_846.z), ((VECTOR(uint16_t, 2))(0xF573L)), 65535UL)).lo)))))).s52)))).xxxx)))).hi)), GROUP_DIVERGE(2, 1), p_3, 0x07CFL, p_3, 0xF0E3L, 0UL)).s3110773771214721)).sf8e4)).w))), l_847.x))) | l_844.s5), 0x23L)) <= p_888->g_209.y))) ^ p_888->g_242[4][5][2].f3)) ^ 0x1E94574FL) >= l_846.y);
    return p_4;
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_13 p_888->g_123 p_888->g_605.f1
 * writes: p_888->g_13 p_888->g_123 p_888->g_10
 */
uint64_t  func_6(int32_t * p_7, int32_t * p_8, struct S2 * p_888)
{ /* block id: 5 */
    int32_t l_134 = 0x5A57FCB6L;
    struct S0 *l_142 = (void*)0;
    int32_t l_160 = 0x186E39A0L;
    struct S0 *l_715 = &p_888->g_262[0];
    int32_t l_825[5][1] = {{0x2DD79AAAL},{0x2DD79AAAL},{0x2DD79AAAL},{0x2DD79AAAL},{0x2DD79AAAL}};
    int i, j;
    for (p_888->g_13 = 0; (p_888->g_13 > (-8)); --p_888->g_13)
    { /* block id: 8 */
        uint32_t l_126 = 4UL;
        struct S0 *l_127 = (void*)0;
        if ((atomic_inc(&p_888->g_atomic_input[73 * get_linear_group_id() + 58]) == 7))
        { /* block id: 10 */
            uint8_t l_16 = 249UL;
            uint32_t l_17 = 1UL;
            VECTOR(int16_t, 2) l_18 = (VECTOR(int16_t, 2))(0x6522L, 0x2A2CL);
            VECTOR(int16_t, 4) l_19 = (VECTOR(int16_t, 4))(0x1300L, (VECTOR(int16_t, 2))(0x1300L, 0x351AL), 0x351AL);
            uint8_t l_20 = 0UL;
            VECTOR(uint8_t, 8) l_21 = (VECTOR(uint8_t, 8))(0xFDL, (VECTOR(uint8_t, 4))(0xFDL, (VECTOR(uint8_t, 2))(0xFDL, 6UL), 6UL), 6UL, 0xFDL, 6UL);
            VECTOR(uint8_t, 2) l_22 = (VECTOR(uint8_t, 2))(0UL, 255UL);
            VECTOR(int16_t, 2) l_23 = (VECTOR(int16_t, 2))(1L, 0L);
            VECTOR(int16_t, 2) l_24 = (VECTOR(int16_t, 2))(0x547FL, 0x3BADL);
            uint32_t l_25 = 0xA6DE4522L;
            int64_t l_34 = 0x70526E61A645CCAEL;
            uint32_t l_35[1];
            int64_t l_36 = 0x5EA95504247EC8A5L;
            uint32_t l_37 = 1UL;
            uint8_t l_38 = 255UL;
            VECTOR(int32_t, 4) l_39 = (VECTOR(int32_t, 4))(0x273D9AADL, (VECTOR(int32_t, 2))(0x273D9AADL, 0x4F5132FCL), 0x4F5132FCL);
            int i;
            for (i = 0; i < 1; i++)
                l_35[i] = 0x8DDFA37AL;
            l_25 |= ((l_16 , ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 8))(0x10A8L, 1L, (-1L), l_17, ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 4))(l_18.yxxx)), ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))((-2L), (-1L))))), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_19.yywxxyyw)).s6763576573626166)).sd0, ((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 4))(0x18L, 0x0FL, 0x1FL, 0x50L)).lo, ((VECTOR(uint8_t, 8))((FAKE_DIVERGE(p_888->group_1_offset, get_group_id(1), 10) , ((l_20 = (((VECTOR(int8_t, 2))(0x00L, 0x77L)).lo , FAKE_DIVERGE(p_888->local_1_offset, get_local_id(1), 10))) , ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_21.s02)).yxxx)).xyzxzxwy)).s4)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_22.yxyxyyxy)).hi)), 255UL, 1UL, 0xFDL)).s52)))))).xyxx))).y, (-8L), (-1L), 0x3C92L)).s46, ((VECTOR(int16_t, 16))(1L, (-1L), 0x1DB4L, ((VECTOR(int16_t, 8))(l_23.yxyxxxxy)), ((VECTOR(int16_t, 4))(0x1945L, 9L, (-9L), (-2L))), 0x43CBL)).s87, ((VECTOR(int16_t, 2))(3L, 0x6168L))))).yyxx, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_24.yyxx)).wxzyzzyy)).s47)).xxxx))).y) , 1L);
            for (l_23.x = (-4); (l_23.x == 9); ++l_23.x)
            { /* block id: 15 */
                int32_t *l_28 = (void*)0;
                VECTOR(int16_t, 4) l_29 = (VECTOR(int16_t, 4))(0x5720L, (VECTOR(int16_t, 2))(0x5720L, (-5L)), (-5L));
                VECTOR(int16_t, 4) l_30 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x0D37L), 0x0D37L);
                VECTOR(int16_t, 8) l_31 = (VECTOR(int16_t, 8))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 9L), 9L), 9L, (-9L), 9L);
                VECTOR(int32_t, 8) l_32 = (VECTOR(int32_t, 8))(0x213DB237L, (VECTOR(int32_t, 4))(0x213DB237L, (VECTOR(int32_t, 2))(0x213DB237L, 0x4A82E93BL), 0x4A82E93BL), 0x4A82E93BL, 0x213DB237L, 0x4A82E93BL);
                uint32_t l_33[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_33[i] = 4294967287UL;
                l_28 = (void*)0;
                l_33[3] = (((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_29.xwyxzxwx)).s6114241754076304)).hi, ((VECTOR(int16_t, 8))(l_30.yzwwwzxz)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_31.s52422266)).s57)).xyyyxyxy))).s1 , ((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_32.s62335755)).even)).zzwxzyyx)), ((VECTOR(int32_t, 2))(0x4CFB42DEL, (-2L))).xxyxxxxx))).s0);
            }
            if ((((l_34 , ((l_35[0] , l_36) , l_37)) , l_38) , ((VECTOR(int32_t, 8))(l_39.yyzwxyyz)).s3))
            { /* block id: 19 */
                int32_t l_40 = 0x11560F21L;
                struct S0 l_60[1] = {{0x403142C0L,1L,0xE8BA164AL,0x0A31C558FEE06207L,0x64EBAA9AL}};
                struct S0 l_61 = {4UL,0x1E1E60B5L,0UL,-1L,0x64B19773L};/* VOLATILE GLOBAL l_61 */
                int64_t l_107 = (-2L);
                int i;
                for (l_40 = 0; (l_40 <= (-9)); l_40 = safe_sub_func_uint32_t_u_u(l_40, 4))
                { /* block id: 22 */
                    uint32_t l_43[3][10][3] = {{{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L}},{{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L}},{{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L},{0x17126B21L,0xEF7C86B8L,0xF7833775L}}};
                    uint32_t l_44 = 0x39BFC11CL;
                    uint32_t l_45[9] = {0x2EEAF0C9L,0x2EEAF0C9L,0x2EEAF0C9L,0x2EEAF0C9L,0x2EEAF0C9L,0x2EEAF0C9L,0x2EEAF0C9L,0x2EEAF0C9L,0x2EEAF0C9L};
                    VECTOR(int32_t, 4) l_46 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-1L)), (-1L));
                    int16_t l_47 = 0x5679L;
                    uint16_t l_48[9][1][9] = {{{0xB49DL,0xB49DL,0xDB6AL,0x27A3L,65527UL,65532UL,0UL,1UL,0UL}},{{0xB49DL,0xB49DL,0xDB6AL,0x27A3L,65527UL,65532UL,0UL,1UL,0UL}},{{0xB49DL,0xB49DL,0xDB6AL,0x27A3L,65527UL,65532UL,0UL,1UL,0UL}},{{0xB49DL,0xB49DL,0xDB6AL,0x27A3L,65527UL,65532UL,0UL,1UL,0UL}},{{0xB49DL,0xB49DL,0xDB6AL,0x27A3L,65527UL,65532UL,0UL,1UL,0UL}},{{0xB49DL,0xB49DL,0xDB6AL,0x27A3L,65527UL,65532UL,0UL,1UL,0UL}},{{0xB49DL,0xB49DL,0xDB6AL,0x27A3L,65527UL,65532UL,0UL,1UL,0UL}},{{0xB49DL,0xB49DL,0xDB6AL,0x27A3L,65527UL,65532UL,0UL,1UL,0UL}},{{0xB49DL,0xB49DL,0xDB6AL,0x27A3L,65527UL,65532UL,0UL,1UL,0UL}}};
                    uint16_t l_49[4][4];
                    uint32_t l_50 = 4294967293UL;
                    int32_t *l_51 = (void*)0;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_49[i][j] = 0xAE86L;
                    }
                    l_49[0][3] |= (l_48[3][0][3] &= (l_47 &= ((l_45[5] = (l_44 |= l_43[0][7][1])) , ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_46.yx)).yyyxyyxx)).s2)));
                    l_51 = ((l_50 = GROUP_DIVERGE(2, 1)) , (void*)0);
                    for (l_43[0][7][1] = (-23); (l_43[0][7][1] > 11); l_43[0][7][1] = safe_add_func_uint64_t_u_u(l_43[0][7][1], 8))
                    { /* block id: 32 */
                        struct S0 l_55 = {0x4AAFB9A3L,0x5481B400L,0x5A62595BL,0x4608F1A9DB3BFA59L,0L};/* VOLATILE GLOBAL l_55 */
                        struct S0 *l_54[8][2] = {{&l_55,&l_55},{&l_55,&l_55},{&l_55,&l_55},{&l_55,&l_55},{&l_55,&l_55},{&l_55,&l_55},{&l_55,&l_55},{&l_55,&l_55}};
                        struct S0 *l_56 = &l_55;
                        uint64_t l_57[5];
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_57[i] = 1UL;
                        l_56 = l_54[7][0];
                        l_57[2]--;
                    }
                }
                l_61 = l_60[0];
                for (l_40 = 0; (l_40 == (-3)); --l_40)
                { /* block id: 40 */
                    uint16_t l_64[5][10][3] = {{{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L}},{{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L}},{{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L}},{{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L}},{{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L},{0UL,0x682CL,0x8771L}}};
                    VECTOR(int32_t, 16) l_65 = (VECTOR(int32_t, 16))(0x0996282FL, (VECTOR(int32_t, 4))(0x0996282FL, (VECTOR(int32_t, 2))(0x0996282FL, (-8L)), (-8L)), (-8L), 0x0996282FL, (-8L), (VECTOR(int32_t, 2))(0x0996282FL, (-8L)), (VECTOR(int32_t, 2))(0x0996282FL, (-8L)), 0x0996282FL, (-8L), 0x0996282FL, (-8L));
                    uint32_t l_66 = 0x824128E3L;
                    VECTOR(int32_t, 8) l_67 = (VECTOR(int32_t, 8))(0x0F377315L, (VECTOR(int32_t, 4))(0x0F377315L, (VECTOR(int32_t, 2))(0x0F377315L, 8L), 8L), 8L, 0x0F377315L, 8L);
                    VECTOR(int32_t, 2) l_68 = (VECTOR(int32_t, 2))((-1L), 1L);
                    VECTOR(int32_t, 16) l_69 = (VECTOR(int32_t, 16))(6L, (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 9L), 9L), 9L, 6L, 9L, (VECTOR(int32_t, 2))(6L, 9L), (VECTOR(int32_t, 2))(6L, 9L), 6L, 9L, 6L, 9L);
                    VECTOR(int32_t, 2) l_70 = (VECTOR(int32_t, 2))(3L, 0x642A8B0CL);
                    VECTOR(int32_t, 16) l_71 = (VECTOR(int32_t, 16))(0x6F4093C7L, (VECTOR(int32_t, 4))(0x6F4093C7L, (VECTOR(int32_t, 2))(0x6F4093C7L, 0x45A9D5DDL), 0x45A9D5DDL), 0x45A9D5DDL, 0x6F4093C7L, 0x45A9D5DDL, (VECTOR(int32_t, 2))(0x6F4093C7L, 0x45A9D5DDL), (VECTOR(int32_t, 2))(0x6F4093C7L, 0x45A9D5DDL), 0x6F4093C7L, 0x45A9D5DDL, 0x6F4093C7L, 0x45A9D5DDL);
                    int32_t l_72 = 0L;
                    VECTOR(int32_t, 2) l_73 = (VECTOR(int32_t, 2))(1L, (-3L));
                    VECTOR(int32_t, 2) l_74 = (VECTOR(int32_t, 2))(0x7B2A022FL, (-2L));
                    VECTOR(int32_t, 2) l_75 = (VECTOR(int32_t, 2))(8L, (-1L));
                    VECTOR(int32_t, 2) l_76 = (VECTOR(int32_t, 2))((-1L), (-3L));
                    VECTOR(int32_t, 8) l_77 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x40A70E4CL), 0x40A70E4CL), 0x40A70E4CL, 0L, 0x40A70E4CL);
                    VECTOR(int32_t, 8) l_78 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x3BE867F3L), 0x3BE867F3L), 0x3BE867F3L, 0L, 0x3BE867F3L);
                    VECTOR(int32_t, 16) l_79 = (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x591B73B2L), 0x591B73B2L), 0x591B73B2L, 8L, 0x591B73B2L, (VECTOR(int32_t, 2))(8L, 0x591B73B2L), (VECTOR(int32_t, 2))(8L, 0x591B73B2L), 8L, 0x591B73B2L, 8L, 0x591B73B2L);
                    int64_t l_80 = 0x3B7C96881A2BA53DL;
                    VECTOR(int32_t, 4) l_81 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x34B4E14DL), 0x34B4E14DL);
                    VECTOR(int32_t, 2) l_82 = (VECTOR(int32_t, 2))(1L, (-1L));
                    VECTOR(int32_t, 2) l_83 = (VECTOR(int32_t, 2))((-4L), (-10L));
                    VECTOR(int32_t, 2) l_84 = (VECTOR(int32_t, 2))(0x1BC1C916L, (-8L));
                    VECTOR(int32_t, 8) l_85 = (VECTOR(int32_t, 8))(0x372F02FFL, (VECTOR(int32_t, 4))(0x372F02FFL, (VECTOR(int32_t, 2))(0x372F02FFL, 0x34FB26F9L), 0x34FB26F9L), 0x34FB26F9L, 0x372F02FFL, 0x34FB26F9L);
                    VECTOR(int32_t, 16) l_86 = (VECTOR(int32_t, 16))(0x2EA050EFL, (VECTOR(int32_t, 4))(0x2EA050EFL, (VECTOR(int32_t, 2))(0x2EA050EFL, 0L), 0L), 0L, 0x2EA050EFL, 0L, (VECTOR(int32_t, 2))(0x2EA050EFL, 0L), (VECTOR(int32_t, 2))(0x2EA050EFL, 0L), 0x2EA050EFL, 0L, 0x2EA050EFL, 0L);
                    uint32_t l_87[10] = {0x5CED9F99L,0x5CED9F99L,0x5CED9F99L,0x5CED9F99L,0x5CED9F99L,0x5CED9F99L,0x5CED9F99L,0x5CED9F99L,0x5CED9F99L,0x5CED9F99L};
                    VECTOR(int16_t, 4) l_88 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x2E4BL), 0x2E4BL);
                    VECTOR(uint16_t, 8) l_89 = (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 1UL), 1UL), 1UL, 8UL, 1UL);
                    int8_t l_90 = (-1L);
                    uint64_t l_91 = 0x8F2B1258CBBCEAA7L;
                    int16_t l_92 = 0x6971L;
                    int16_t l_93 = 0x6BA4L;
                    uint16_t l_94 = 8UL;
                    uint64_t l_95[8];
                    int32_t l_96 = 0x3D5290F8L;
                    uint16_t l_97 = 0x6FCFL;
                    int32_t *l_98 = (void*)0;
                    int32_t *l_99 = &l_96;
                    struct S0 l_101[3][1][8] = {{{{0xC839BF05L,8L,0xA3CB0796L,-1L,0x78E45F19L},{4294967295UL,0x789EDA74L,0x2D96CCF5L,1L,1L},{4294967295UL,0x789EDA74L,0x2D96CCF5L,1L,1L},{0xC839BF05L,8L,0xA3CB0796L,-1L,0x78E45F19L},{0xC839BF05L,8L,0xA3CB0796L,-1L,0x78E45F19L},{4294967295UL,0x789EDA74L,0x2D96CCF5L,1L,1L},{4294967295UL,0x789EDA74L,0x2D96CCF5L,1L,1L},{0xC839BF05L,8L,0xA3CB0796L,-1L,0x78E45F19L}}},{{{0xC839BF05L,8L,0xA3CB0796L,-1L,0x78E45F19L},{4294967295UL,0x789EDA74L,0x2D96CCF5L,1L,1L},{4294967295UL,0x789EDA74L,0x2D96CCF5L,1L,1L},{0xC839BF05L,8L,0xA3CB0796L,-1L,0x78E45F19L},{0xC839BF05L,8L,0xA3CB0796L,-1L,0x78E45F19L},{4294967295UL,0x789EDA74L,0x2D96CCF5L,1L,1L},{4294967295UL,0x789EDA74L,0x2D96CCF5L,1L,1L},{0xC839BF05L,8L,0xA3CB0796L,-1L,0x78E45F19L}}},{{{0xC839BF05L,8L,0xA3CB0796L,-1L,0x78E45F19L},{4294967295UL,0x789EDA74L,0x2D96CCF5L,1L,1L},{4294967295UL,0x789EDA74L,0x2D96CCF5L,1L,1L},{0xC839BF05L,8L,0xA3CB0796L,-1L,0x78E45F19L},{0xC839BF05L,8L,0xA3CB0796L,-1L,0x78E45F19L},{4294967295UL,0x789EDA74L,0x2D96CCF5L,1L,1L},{4294967295UL,0x789EDA74L,0x2D96CCF5L,1L,1L},{0xC839BF05L,8L,0xA3CB0796L,-1L,0x78E45F19L}}}};
                    struct S0 *l_100 = &l_101[1][0][4];
                    struct S0 *l_102 = &l_101[0][0][6];
                    int8_t l_103[3];
                    uint64_t l_104 = 0x728AACDA7B0075A8L;
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                        l_95[i] = 7UL;
                    for (i = 0; i < 3; i++)
                        l_103[i] = (-1L);
                    l_97 ^= (l_64[2][5][0] , ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_clamp_func(VECTOR(int32_t, 4),int32_t,((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_65.sa81e9da6)).even, ((VECTOR(int32_t, 16))((l_66 = (l_39.w = 0x0FBAE07AL)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(add_sat(((VECTOR(int32_t, 16))(l_67.s1337527666457152)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 16))(l_68.yyxxyyyxxyyyyxyx)).sc9, ((VECTOR(int32_t, 2))(l_69.sb9))))))), 5L, 0L)).xwwxyxwwzywwzzzx))).s4f45)).xzzywywzxwwwzzxy, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 8))(l_70.xyxyyxyy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_71.s3f)))).yyyy)))).xwxxwzwz))).s0441572640314225))).sdfad)), (-6L), ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(0x5F4E7881L, (l_39.w = l_72), 4L, (-1L), ((VECTOR(int32_t, 8))(0x14615860L, ((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(l_73.yyxyyyyy)).even, ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(l_74.xyxx)).xywzxxxzyyxzyxxw, ((VECTOR(int32_t, 4))(l_75.yxyx)).yzzxxyxyzzwxxyzx, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_76.xxyx)).yyxzzwzwywyywzzx)).s32)).xyxxxxyyyxxxyyxy, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 2))(0x5782E0D5L, 1L)), ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(l_77.s0651335333060756)))).scd, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(0x1A790D78L, 1L)).yyyxyyyx, ((VECTOR(int32_t, 8))(l_78.s14633023))))).lo, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(l_79.s2a784f90)).s27, ((VECTOR(int32_t, 8))(l_80, (-8L), 0x7DE8CF94L, 0x4B043313L, ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 16))(l_81.xyxywzwwzwxzxxyz)).sbdca, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_82.xyyx)).xzwzywyyzyxyxzxy)).seb29))))).s16))).yyxx, ((VECTOR(int32_t, 16))(l_83.xyxxyyyyyyxxyyyx)).sc1e0))).even))))).yxyxxxyxyyyyxyxy, ((VECTOR(int32_t, 8))(l_84.yyxyxyyy)).s0706032552566622))).s0b)), 2L, (-3L))).zwzwwxwxwwzzxyzw, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))((-1L), 0x27C8495BL)))).yyyxxxxx))).s1266113636610640))).s58))))))).yyyyyxxyxxyxxxyy))).sad36)).yyxxwzxyyxwyzwzx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(0x2042DA0BL, ((VECTOR(int32_t, 4))(l_85.s6221)), ((VECTOR(int32_t, 4))(l_86.sd2b4)), 1L, (-1L), ((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(9L, (-10L))).yxxx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(0x5CE17B37L, l_87[9], 0x61D3DFD4L, 0x66471088L))))))), (-6L))).s14bf)).zwxxzzwwwzyyxzzw))).hi, (int32_t)7L))).s3122016766466245))), ((VECTOR(int32_t, 2))(0x0381DB17L, 0x413F3823L)).yyxyyyxxxxyyyyxx))).s16ff, ((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 8))(l_88.wzzwzwyy)).s0006256121502555, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 16))(l_89.s6154554351642230)).sa3c7, ((VECTOR(uint16_t, 4))(0x9179L, ((VECTOR(uint16_t, 2))(1UL)), 1UL)), ((VECTOR(uint16_t, 4))(65535UL))))).yyxzzwww)), l_90, 65527UL, l_91, ((VECTOR(uint16_t, 2))(0xFDBFL)), 65526UL, 0x2854L, 7UL))))).s2ad6))).yzzwzyzz, ((VECTOR(int32_t, 8))(0x174D9EF0L)), ((VECTOR(int32_t, 8))(0x1E7EE258L))))).s2176354030731326, ((VECTOR(int32_t, 16))(0L)), ((VECTOR(int32_t, 16))((-1L)))))).s0561, ((VECTOR(int32_t, 4))(0x5176A3A7L)), ((VECTOR(int32_t, 4))((-5L)))))))).hi, ((VECTOR(int32_t, 2))(0x53CF96F6L))))), l_92, 0x1FC20E1EL, 1L, 0x023A7359L, 0x7176E7A2L)), l_93, 0x23ED1E9FL, (-1L), 4L)).odd)).s3600176754167503, ((VECTOR(int32_t, 16))(1L))))).sacc9, ((VECTOR(int32_t, 4))(0x5F4F152AL))))).even, ((VECTOR(int32_t, 2))(0x255A8A43L)), ((VECTOR(int32_t, 2))(0L))))), 0x59127033L, (-1L), l_94, 0x2F90C535L, 0L, 0x25AC4A75L, 0x673D7E6FL, 0x367A671BL)).s5e5f))).yxwyyzyyyzxzzxxw, ((VECTOR(int32_t, 16))(3L))))).se4ea, (int32_t)l_95[5], (int32_t)l_96))))).z);
                    l_99 = l_98;
                    l_102 = l_100;
                    l_104--;
                }
                l_39.y = l_107;
            }
            else
            { /* block id: 50 */
                int8_t l_108 = 0L;
                struct S1 l_109 = {-1L,0x380F9459L,0x54DC735DL,9L,4294967286UL};/* VOLATILE GLOBAL l_109 */
                struct S1 l_110 = {-2L,1L,0xCA9C0FA1L,-9L,4294967295UL};/* VOLATILE GLOBAL l_110 */
                int32_t l_111 = (-1L);
                int16_t l_112 = (-1L);
                VECTOR(uint16_t, 8) l_113 = (VECTOR(uint16_t, 8))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0x4E1DL), 0x4E1DL), 0x4E1DL, 65529UL, 0x4E1DL);
                VECTOR(uint16_t, 2) l_114 = (VECTOR(uint16_t, 2))(0xD0B8L, 9UL);
                VECTOR(uint16_t, 4) l_115 = (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0UL), 0UL);
                int32_t *l_116 = &l_110.f3;
                int32_t *l_117 = &l_111;
                int32_t *l_118 = &l_110.f3;
                int32_t *l_119 = &l_111;
                int i;
                l_39.w = l_108;
                l_110 = l_109;
                l_117 = (l_116 = ((((VECTOR(int32_t, 8))(max(((VECTOR(int32_t, 4))(1L, 0x2139966AL, 0x67E0747AL, 2L)).yzxwyzxw, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(4L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x3C8F1202L, 0x77A4CD5AL)), (-1L), 0x6E2B266AL)), l_111, 0x741F752DL, (-7L))).s27)).xyxxxyxy))).s5 , l_112) , (((VECTOR(uint16_t, 16))(0x4660L, 0UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(l_113.s77)), 0x3DCDL, 0xFE3AL)), 65529UL, 0UL, 0xCA40L, ((VECTOR(uint16_t, 4))(l_114.xyyx)), ((VECTOR(uint16_t, 2))(l_115.yx)), 65535UL)).sf , (void*)0)));
                l_119 = (l_117 = l_118);
            }
            unsigned int result = 0;
            result += l_16;
            result += l_17;
            result += l_18.y;
            result += l_18.x;
            result += l_19.w;
            result += l_19.z;
            result += l_19.y;
            result += l_19.x;
            result += l_20;
            result += l_21.s7;
            result += l_21.s6;
            result += l_21.s5;
            result += l_21.s4;
            result += l_21.s3;
            result += l_21.s2;
            result += l_21.s1;
            result += l_21.s0;
            result += l_22.y;
            result += l_22.x;
            result += l_23.y;
            result += l_23.x;
            result += l_24.y;
            result += l_24.x;
            result += l_25;
            result += l_34;
            int l_35_i0;
            for (l_35_i0 = 0; l_35_i0 < 1; l_35_i0++) {
                result += l_35[l_35_i0];
            }
            result += l_36;
            result += l_37;
            result += l_38;
            result += l_39.w;
            result += l_39.z;
            result += l_39.y;
            result += l_39.x;
            atomic_add(&p_888->g_special_values[73 * get_linear_group_id() + 58], result);
        }
        else
        { /* block id: 58 */
            (1 + 1);
        }
        for (p_888->g_123.s0 = 6; (p_888->g_123.s0 == 8); ++p_888->g_123.s0)
        { /* block id: 63 */
            return l_126;
        }
        (*p_7) = ((void*)0 != l_127);
    }
    for (p_888->g_13 = 0; (p_888->g_13 != (-1)); p_888->g_13 = safe_sub_func_int16_t_s_s(p_888->g_13, 2))
    { /* block id: 70 */
        int32_t l_149 = (-2L);
        int16_t *l_161 = &p_888->g_162[7];
        struct S0 *l_163 = &p_888->g_164;
        struct S0 **l_714[8] = {&l_163,&l_163,&l_163,&l_163,&l_163,&l_163,&l_163,&l_163};
        uint64_t *l_824 = &p_888->g_744;
        int32_t *l_826 = &p_888->g_13;
        int i;
        (1 + 1);
    }
    return p_888->g_605.f1;
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_234 p_888->g_10 p_888->g_261.f0 p_888->g_821 p_888->g_823
 * writes: p_888->g_234 p_888->g_10 p_888->g_261.f0
 */
struct S1  func_130(uint64_t  p_131, uint32_t  p_132, int32_t  p_133, struct S2 * p_888)
{ /* block id: 360 */
    uint8_t l_794 = 7UL;
    int32_t l_807 = 0x261CDC8EL;
    int32_t l_808 = (-7L);
    int32_t l_809 = (-8L);
    int32_t l_810 = 0x468BBFCBL;
    int32_t l_814 = 0x68440C47L;
    int32_t l_815 = 0x508E297BL;
    int32_t l_816 = 0x6603C3FFL;
    VECTOR(int32_t, 2) l_817 = (VECTOR(int32_t, 2))((-8L), (-1L));
    uint32_t l_818 = 0x0ADF32BCL;
    int32_t *l_822 = &p_888->g_168.f3;
    int i;
    for (p_888->g_234 = (-6); (p_888->g_234 <= 22); ++p_888->g_234)
    { /* block id: 363 */
        int32_t *l_791 = &p_888->g_10[5][0][3];
        int32_t l_804 = 0x5D90113AL;
        int32_t l_805 = 1L;
        int16_t l_806 = 0L;
        int32_t l_811 = (-5L);
        int32_t l_812 = 0x7C66575EL;
        int32_t l_813[4][1];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_813[i][j] = 0x699CE824L;
        }
        (*l_791) ^= 0x24F0587EL;
        for (p_888->g_261.f0 = (-13); (p_888->g_261.f0 == (-5)); ++p_888->g_261.f0)
        { /* block id: 367 */
            int32_t *l_797 = &p_888->g_261.f3;
            int32_t *l_798 = &p_888->g_10[3][5][3];
            int32_t *l_799 = &p_888->g_10[2][4][0];
            int32_t *l_800 = &p_888->g_10[2][4][0];
            int32_t *l_801 = (void*)0;
            int32_t *l_802 = (void*)0;
            int32_t *l_803[2];
            int i;
            for (i = 0; i < 2; i++)
                l_803[i] = (void*)0;
            --l_794;
            l_818--;
        }
        (*l_791) ^= ((VECTOR(int32_t, 4))(p_888->g_821.s7617)).x;
    }
    l_822 = (void*)0;
    return p_888->g_823;
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_164.f3 p_888->g_718 p_888->g_141.f2 p_888->g_10
 * writes: p_888->g_164.f3 p_888->g_719 p_888->g_9 p_888->g_141.f2
 */
uint32_t  func_135(struct S0 * p_136, uint64_t  p_137, uint32_t  p_138, int64_t  p_139, struct S2 * p_888)
{ /* block id: 314 */
    uint16_t l_739 = 1UL;
    int8_t *l_740 = (void*)0;
    int32_t l_747 = (-3L);
    VECTOR(int16_t, 8) l_764 = (VECTOR(int16_t, 8))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), (-10L)), (-10L)), (-10L), (-10L), (-10L));
    int32_t l_783 = 1L;
    int i;
    for (p_888->g_164.f3 = (-4); (p_888->g_164.f3 > (-14)); p_888->g_164.f3--)
    { /* block id: 317 */
        int32_t **l_720 = &p_888->g_9;
        struct S1 **l_774 = &p_888->g_304[5];
        int32_t l_779 = 0x6F88452DL;
        int32_t l_780[9] = {0x3CFF4485L,0x3CFF4485L,0x3CFF4485L,0x3CFF4485L,0x3CFF4485L,0x3CFF4485L,0x3CFF4485L,0x3CFF4485L,0x3CFF4485L};
        uint32_t l_784 = 4294967286UL;
        int i;
        p_888->g_719 = p_888->g_718;
        (*l_720) = (void*)0;
        for (p_888->g_141.f2 = 0; (p_888->g_141.f2 != 39); p_888->g_141.f2++)
        { /* block id: 322 */
            uint16_t l_725 = 0x2ED6L;
            VECTOR(uint8_t, 2) l_734 = (VECTOR(uint8_t, 2))(0x28L, 0x7DL);
            int32_t l_742 = (-7L);
            int32_t l_746[9][4] = {{0x7DE4BDC7L,0x33E18152L,0L,0x33E18152L},{0x7DE4BDC7L,0x33E18152L,0L,0x33E18152L},{0x7DE4BDC7L,0x33E18152L,0L,0x33E18152L},{0x7DE4BDC7L,0x33E18152L,0L,0x33E18152L},{0x7DE4BDC7L,0x33E18152L,0L,0x33E18152L},{0x7DE4BDC7L,0x33E18152L,0L,0x33E18152L},{0x7DE4BDC7L,0x33E18152L,0L,0x33E18152L},{0x7DE4BDC7L,0x33E18152L,0L,0x33E18152L},{0x7DE4BDC7L,0x33E18152L,0L,0x33E18152L}};
            VECTOR(int16_t, 8) l_762 = (VECTOR(int16_t, 8))(0x2B4BL, (VECTOR(int16_t, 4))(0x2B4BL, (VECTOR(int16_t, 2))(0x2B4BL, 0x42BBL), 0x42BBL), 0x42BBL, 0x2B4BL, 0x42BBL);
            struct S0 *l_767 = &p_888->g_262[0];
            int32_t *l_788 = &l_746[2][0];
            int i, j;
            if (p_139)
                break;
        }
    }
    return p_888->g_10[7][2][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_141.f2 p_888->g_168 p_888->g_171 p_888->g_9 p_888->g_10 p_888->g_13 p_888->g_141.f3 p_888->g_122 p_888->g_261 p_888->g_262 p_888->g_209 p_888->g_123 p_888->g_302 p_888->g_315 p_888->g_375 p_888->g_12 p_888->g_398 p_888->g_407 p_888->g_413 p_888->g_140 p_888->g_578 p_888->g_546 p_888->g_298 p_888->g_593 p_888->g_comm_values p_888->g_605 p_888->g_545 p_888->g_607 p_888->g_241 p_888->g_162 p_888->g_539.f2 p_888->g_654 p_888->g_674 p_888->g_288 p_888->g_164.f3 p_888->g_164.f2 p_888->g_430
 * writes: p_888->g_141.f2 p_888->g_168 p_888->g_10 p_888->g_164.f2 p_888->g_141.f3 p_888->g_209 p_888->g_261.f0 p_888->g_303 p_888->g_315 p_888->g_288 p_888->g_375 p_888->g_398 p_888->g_241 p_888->g_410 p_888->g_413 p_888->g_162 p_888->g_298 p_888->g_607 p_888->g_430
 */
struct S0 * func_143(uint8_t  p_144, int32_t  p_145, uint32_t  p_146, struct S0 * p_147, struct S0 * p_148, struct S2 * p_888)
{ /* block id: 74 */
    int32_t l_167[2][9][2] = {{{8L,8L},{8L,8L},{8L,8L},{8L,8L},{8L,8L},{8L,8L},{8L,8L},{8L,8L},{8L,8L}},{{8L,8L},{8L,8L},{8L,8L},{8L,8L},{8L,8L},{8L,8L},{8L,8L},{8L,8L},{8L,8L}}};
    struct S0 *l_552 = (void*)0;
    int32_t l_617 = 0x7EEF7B80L;
    int32_t l_618 = (-1L);
    int32_t l_619 = 0x19FE60FEL;
    int32_t l_620[5] = {0x6A7FF9F0L,0x6A7FF9F0L,0x6A7FF9F0L,0x6A7FF9F0L,0x6A7FF9F0L};
    uint8_t l_621[3];
    int32_t *l_626 = (void*)0;
    VECTOR(uint64_t, 2) l_645 = (VECTOR(uint64_t, 2))(0xBF8F507E75D679B4L, 0x586162DDD87F55EEL);
    VECTOR(int16_t, 2) l_657 = (VECTOR(int16_t, 2))(0L, (-6L));
    int8_t *l_675 = (void*)0;
    int32_t *l_676 = (void*)0;
    int32_t *l_677 = &l_619;
    int16_t *l_678 = (void*)0;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_621[i] = 0x2FL;
    for (p_888->g_141.f2 = 0; (p_888->g_141.f2 <= 11); p_888->g_141.f2 = safe_add_func_uint16_t_u_u(p_888->g_141.f2, 2))
    { /* block id: 77 */
        struct S1 *l_170 = (void*)0;
        int32_t l_178 = (-3L);
        if (l_167[1][7][0])
            break;
        (*p_888->g_171) = p_888->g_168;
        for (p_145 = 0; (p_145 != 17); p_145 = safe_add_func_int8_t_s_s(p_145, 3))
        { /* block id: 82 */
            struct S0 **l_551[10];
            int32_t l_608 = 0x5AFB1995L;
            int i;
            for (i = 0; i < 10; i++)
                l_551[i] = &p_888->g_241;
            p_888->g_607 &= func_174(((l_552 = func_176(l_178, p_888)) == p_148), p_888);
            l_608 = (&p_888->g_303 != &p_888->g_303);
        }
    }
    if ((safe_div_func_int8_t_s_s(p_888->g_262[0].f4, (~p_146))))
    { /* block id: 288 */
        int32_t *l_611 = (void*)0;
        int32_t *l_612 = (void*)0;
        int32_t *l_613 = &p_888->g_168.f3;
        int32_t *l_614 = (void*)0;
        int32_t *l_615 = &p_888->g_234;
        int32_t *l_616[5][3][9] = {{{(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3,&p_888->g_234,(void*)0,&p_888->g_234,&p_888->g_261.f3,&p_888->g_234},{(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3,&p_888->g_234,(void*)0,&p_888->g_234,&p_888->g_261.f3,&p_888->g_234},{(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3,&p_888->g_234,(void*)0,&p_888->g_234,&p_888->g_261.f3,&p_888->g_234}},{{(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3,&p_888->g_234,(void*)0,&p_888->g_234,&p_888->g_261.f3,&p_888->g_234},{(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3,&p_888->g_234,(void*)0,&p_888->g_234,&p_888->g_261.f3,&p_888->g_234},{(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3,&p_888->g_234,(void*)0,&p_888->g_234,&p_888->g_261.f3,&p_888->g_234}},{{(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3,&p_888->g_234,(void*)0,&p_888->g_234,&p_888->g_261.f3,&p_888->g_234},{(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3,&p_888->g_234,(void*)0,&p_888->g_234,&p_888->g_261.f3,&p_888->g_234},{(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3,&p_888->g_234,(void*)0,&p_888->g_234,&p_888->g_261.f3,&p_888->g_234}},{{(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3,&p_888->g_234,(void*)0,&p_888->g_234,&p_888->g_261.f3,&p_888->g_234},{(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3,&p_888->g_234,(void*)0,&p_888->g_234,&p_888->g_261.f3,&p_888->g_234},{(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3,&p_888->g_234,(void*)0,&p_888->g_234,&p_888->g_261.f3,&p_888->g_234}},{{(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3,&p_888->g_234,(void*)0,&p_888->g_234,&p_888->g_261.f3,&p_888->g_234},{(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3,&p_888->g_234,(void*)0,&p_888->g_234,&p_888->g_261.f3,&p_888->g_234},{(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3,&p_888->g_234,(void*)0,&p_888->g_234,&p_888->g_261.f3,&p_888->g_234}}};
        int i, j, k;
        l_621[1]++;
    }
    else
    { /* block id: 290 */
        int16_t **l_628 = &p_888->g_410;
        int16_t ***l_627 = &l_628;
        for (p_144 = (-11); (p_144 > 60); p_144 = safe_add_func_int64_t_s_s(p_144, 9))
        { /* block id: 293 */
            return (*p_888->g_407);
        }
        l_626 = &l_617;
        (*l_627) = &p_888->g_410;
    }
    if ((((safe_sub_func_uint32_t_u_u(((safe_mul_func_int8_t_s_s(p_145, p_888->g_162[7])) | p_144), l_621[1])) > (p_888->g_430.y = (safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((((((*l_677) = ((*p_888->g_9) &= (safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(p_888->g_539[0][1].f2, (safe_mod_func_int64_t_s_s((((VECTOR(int64_t, 8))(0x68C4240CE2B17023L, ((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(l_645.yyyxxyxy)).s6, FAKE_DIVERGE(p_888->local_1_offset, get_local_id(1), 10))) , ((safe_sub_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(p_888->g_654.s7324)).z, (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_657.xyyyxyxy)).s21)).yyyyyxyy)).s0, ((p_888->g_288.s3 |= (((GROUP_DIVERGE(0, 1) & (((((((safe_lshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u((*p_888->g_546), l_617)) && ((safe_mod_func_int16_t_s_s((p_145 , (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(sub_sat(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 2))(65535UL, 0xB2B9L)).xyyxxyxxxxxyxyxy, ((VECTOR(uint16_t, 8))(0xC0ECL, (safe_mod_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((**p_888->g_545), p_145)), p_144)), p_888->g_141.f3, GROUP_DIVERGE(1, 1), l_621[1], ((VECTOR(uint16_t, 2))(0x7D71L)), 65535UL)).s6107073736414003))).s8a7f, ((VECTOR(uint16_t, 4))(3UL))))).xzwzzyxxwxxxwwyz)).sd, 65533UL)), p_146)), p_888->g_413.x))), p_144)) || p_145)), 2)) < (*p_888->g_546)) <= 0x45C32578L) , p_888->g_674) > p_144) == 0x75EE0450L) > (*p_888->g_546))) > 0x1EAC33C1L) ^ p_145)) != FAKE_DIVERGE(p_888->local_2_offset, get_local_id(2), 10)))))), 0x96L)), p_888->g_261.f3)) > 0L)), ((VECTOR(int64_t, 2))(1L)), ((VECTOR(int64_t, 2))((-1L))), 0x5FD6A6394BBD1E0AL, 0x68AF363FB7F5AA10L)).s2 | p_888->g_comm_values[p_888->tid]), p_888->g_164.f3)))), (-7L))))) , 0x7B5B47C5L) == p_145) && 0xCCL), p_888->g_164.f2)), 1UL)))) , (-1L)))
    { /* block id: 303 */
        int8_t l_684[2];
        int16_t *l_696 = (void*)0;
        int16_t *l_697 = &p_888->g_162[8];
        int8_t *l_698 = (void*)0;
        int8_t *l_699 = (void*)0;
        int8_t *l_700 = (void*)0;
        int8_t *l_701 = (void*)0;
        int8_t *l_702 = (void*)0;
        int8_t *l_703 = (void*)0;
        int8_t *l_704 = (void*)0;
        int8_t *l_705 = (void*)0;
        int8_t *l_706 = (void*)0;
        int8_t *l_707 = (void*)0;
        int8_t *l_708 = (void*)0;
        int8_t *l_709 = (void*)0;
        int8_t *l_710 = (void*)0;
        int8_t *l_711[2];
        int64_t *l_712 = &p_888->g_168.f0;
        int32_t l_713 = (-1L);
        int i;
        for (i = 0; i < 2; i++)
            l_684[i] = 0x46L;
        for (i = 0; i < 2; i++)
            l_711[i] = (void*)0;
        (*p_888->g_9) |= ((safe_unary_minus_func_uint32_t_u(((safe_mul_func_int8_t_s_s((l_713 = (safe_sub_func_int64_t_s_s(((*l_712) = ((0xCEEEBB1CEE09CEA0L >= (((0x48D492E4L < (p_146 | (*l_677))) , l_684[1]) <= 0UL)) > (+(safe_unary_minus_func_uint16_t_u(((safe_mod_func_int64_t_s_s(p_145, ((safe_sub_func_int8_t_s_s((p_888->g_288.sc = ((safe_add_func_int64_t_s_s((l_684[1] != ((safe_div_func_uint64_t_u_u((((*l_697) = (9L > l_684[0])) , FAKE_DIVERGE(p_888->global_2_offset, get_global_id(2), 10)), (*l_677))) <= p_888->g_261.f1)), l_684[1])) >= p_888->g_430.x)), p_145)) , p_888->g_262[0].f1))) < 8L)))))), l_684[1]))), l_684[1])) != p_888->g_168.f3))) == FAKE_DIVERGE(p_888->global_0_offset, get_global_id(0), 10));
        return l_552;
    }
    else
    { /* block id: 310 */
        return (*p_888->g_407);
    }
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_578 p_888->g_9 p_888->g_546 p_888->g_298 p_888->g_593 p_888->g_comm_values p_888->g_605 p_888->g_545 p_888->g_10
 * writes: p_888->g_162 p_888->g_10 p_888->g_298
 */
int32_t  func_174(int16_t  p_175, struct S2 * p_888)
{ /* block id: 256 */
    int16_t l_581 = 0x2349L;
    int16_t *l_582 = &p_888->g_162[7];
    uint8_t **l_586[6][7] = {{(void*)0,(void*)0,(void*)0,&p_888->g_546,&p_888->g_546,&p_888->g_546,(void*)0},{(void*)0,(void*)0,(void*)0,&p_888->g_546,&p_888->g_546,&p_888->g_546,(void*)0},{(void*)0,(void*)0,(void*)0,&p_888->g_546,&p_888->g_546,&p_888->g_546,(void*)0},{(void*)0,(void*)0,(void*)0,&p_888->g_546,&p_888->g_546,&p_888->g_546,(void*)0},{(void*)0,(void*)0,(void*)0,&p_888->g_546,&p_888->g_546,&p_888->g_546,(void*)0},{(void*)0,(void*)0,(void*)0,&p_888->g_546,&p_888->g_546,&p_888->g_546,(void*)0}};
    uint8_t ***l_585 = &l_586[2][2];
    int32_t l_589 = 0x79961E45L;
    VECTOR(uint8_t, 16) l_592 = (VECTOR(uint8_t, 16))(0xDFL, (VECTOR(uint8_t, 4))(0xDFL, (VECTOR(uint8_t, 2))(0xDFL, 0x7EL), 0x7EL), 0x7EL, 0xDFL, 0x7EL, (VECTOR(uint8_t, 2))(0xDFL, 0x7EL), (VECTOR(uint8_t, 2))(0xDFL, 0x7EL), 0xDFL, 0x7EL, 0xDFL, 0x7EL);
    VECTOR(int16_t, 2) l_594 = (VECTOR(int16_t, 2))(0x262CL, 0x307EL);
    VECTOR(int16_t, 4) l_595 = (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x1F36L), 0x1F36L);
    uint16_t *l_598 = (void*)0;
    uint32_t l_606 = 0x1AAB65C0L;
    int i, j;
    if ((atomic_inc(&p_888->g_atomic_input[73 * get_linear_group_id() + 70]) == 8))
    { /* block id: 258 */
        int32_t l_553 = 0L;
        uint64_t l_561 = 0xE2166CF4EB7BD160L;
        uint16_t l_571[4] = {1UL,1UL,1UL,1UL};
        struct S1 l_572 = {0x01A9305AB6771473L,0x41238AC8L,0xDD4F796DL,-4L,0x40B05923L};/* VOLATILE GLOBAL l_572 */
        struct S1 *l_573 = &l_572;
        int i;
        for (l_553 = (-18); (l_553 != (-30)); --l_553)
        { /* block id: 261 */
            int8_t l_556 = (-1L);
            int32_t l_557 = 0x7BB719CDL;
            uint32_t l_558 = 0x7B484E72L;
            ++l_558;
        }
        if (l_561)
        { /* block id: 264 */
            int8_t l_562 = 0x65L;
            VECTOR(int64_t, 8) l_563 = (VECTOR(int64_t, 8))(0x6A412763E0D5A9B4L, (VECTOR(int64_t, 4))(0x6A412763E0D5A9B4L, (VECTOR(int64_t, 2))(0x6A412763E0D5A9B4L, 0L), 0L), 0L, 0x6A412763E0D5A9B4L, 0L);
            int32_t l_565 = 0x37D54340L;
            int32_t *l_564 = &l_565;
            int32_t *l_566 = &l_565;
            int32_t *l_567 = &l_565;
            VECTOR(int32_t, 8) l_568 = (VECTOR(int32_t, 8))(0x1B3F0EB6L, (VECTOR(int32_t, 4))(0x1B3F0EB6L, (VECTOR(int32_t, 2))(0x1B3F0EB6L, (-3L)), (-3L)), (-3L), 0x1B3F0EB6L, (-3L));
            VECTOR(int32_t, 4) l_569 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, (-7L)), (-7L));
            int i;
            l_553 = l_562;
            l_567 = (((VECTOR(int64_t, 4))(l_563.s4166)).w , (l_566 = l_564));
            l_553 = ((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_568.s06)).yxyxxxyx)).s71)).xyxy, ((VECTOR(int32_t, 8))(l_569.zxzwzwwx)).even))).w;
        }
        else
        { /* block id: 269 */
            uint8_t l_570 = 0x0CL;
            l_553 = l_570;
        }
        l_573 = ((l_571[3] , l_572) , (void*)0);
        unsigned int result = 0;
        result += l_553;
        result += l_561;
        int l_571_i0;
        for (l_571_i0 = 0; l_571_i0 < 4; l_571_i0++) {
            result += l_571[l_571_i0];
        }
        result += l_572.f0;
        result += l_572.f1;
        result += l_572.f2;
        result += l_572.f3;
        result += l_572.f4;
        atomic_add(&p_888->g_special_values[73 * get_linear_group_id() + 70], result);
    }
    else
    { /* block id: 273 */
        (1 + 1);
    }
    (*p_888->g_9) = ((safe_lshift_func_int16_t_s_u(((*l_582) = ((((safe_rshift_func_uint8_t_u_s((p_175 , p_175), 5)) && ((VECTOR(int8_t, 16))(p_888->g_578.yxxxyyyyxxyxyxyx)).s0) , 0x33A903391BAC1A7AL) & ((safe_div_func_uint32_t_u_u(l_581, p_175)) , l_581))), (!p_175))) ^ ((safe_mul_func_int16_t_s_s((l_585 == &l_586[2][6]), 0xCE6CL)) , 0x33CB4895L));
    (*p_888->g_9) ^= (safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((*p_888->g_546)++), 255UL, 253UL, 246UL)).wyxxxxxx)).s40)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_592.s60e0)).yzxzyzyzxxzzzxyw)).s80, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(clz(((VECTOR(uint8_t, 8))(p_888->g_593.yyxwzxwx))))).s5, p_175, ((((((p_888->g_comm_values[p_888->tid] ^ ((((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(l_594.yxyyyxxy)).even, ((VECTOR(int16_t, 4))(l_595.wzxz))))).y , 0x02A6633CL) == p_175)) , ((l_592.s6 | ((safe_rshift_func_uint16_t_u_u((l_589 = (((*l_582) = 1L) <= (&l_586[2][0] != &l_586[2][2]))), (safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s(((**p_888->g_545) = ((((p_888->g_605 , 0x6C11L) >= p_175) < l_595.w) , l_595.z)), p_175)) | GROUP_DIVERGE(2, 1)), l_595.y)), 2)))) < (-1L))) , 249UL)) < p_175) == 0x033E97C3C9279B2BL) || l_592.sf) > l_594.y), 0x0DL, ((VECTOR(uint8_t, 4))(0xBCL)), (**p_888->g_545), 9UL, 0x90L, ((VECTOR(uint8_t, 4))(0x77L)), 0x64L)))).s131b)).odd))), ((VECTOR(uint8_t, 2))(6UL)), ((VECTOR(uint8_t, 2))(247UL))))).xxyx, ((VECTOR(uint8_t, 4))(255UL))))).yzxzzyzwxxyzxzxw)).odd, ((VECTOR(uint8_t, 8))(255UL))))))).s0, l_606));
    return p_175;
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_179 p_888->g_9 p_888->g_10 p_888->g_13 p_888->g_141.f3 p_888->g_122 p_888->g_261 p_888->g_262 p_888->g_209 p_888->g_123 p_888->g_302 p_888->g_315 p_888->g_375 p_888->g_12 p_888->g_398 p_888->g_168.f3 p_888->g_407 p_888->g_413 p_888->g_140
 * writes: p_888->g_10 p_888->g_164.f2 p_888->g_141.f3 p_888->g_209 p_888->g_261.f0 p_888->g_303 p_888->g_315 p_888->g_288 p_888->g_375 p_888->g_168.f1 p_888->g_398 p_888->g_241 p_888->g_410 p_888->g_413 p_888->g_168.f3
 */
struct S0 * func_176(int32_t  p_177, struct S2 * p_888)
{ /* block id: 83 */
    VECTOR(int32_t, 4) l_180 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0L), 0L);
    int32_t *l_181 = (void*)0;
    int32_t *l_182 = &p_888->g_168.f3;
    int32_t *l_183 = &p_888->g_10[2][4][0];
    int32_t *l_184 = &p_888->g_168.f3;
    int32_t *l_185 = &p_888->g_168.f3;
    int32_t *l_186 = (void*)0;
    int32_t *l_187[7][5] = {{&p_888->g_10[2][4][0],(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3},{&p_888->g_10[2][4][0],(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3},{&p_888->g_10[2][4][0],(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3},{&p_888->g_10[2][4][0],(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3},{&p_888->g_10[2][4][0],(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3},{&p_888->g_10[2][4][0],(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3},{&p_888->g_10[2][4][0],(void*)0,(void*)0,&p_888->g_10[2][4][0],&p_888->g_168.f3}};
    uint64_t l_188 = 1UL;
    int16_t *l_201 = &p_888->g_162[5];
    struct S0 **l_408 = &p_888->g_140;
    struct S1 ***l_447 = &p_888->g_303;
    uint32_t l_490 = 0x0533139FL;
    struct S1 *l_527 = &p_888->g_261;
    uint8_t * volatile * volatile l_548 = &p_888->g_546;/* VOLATILE GLOBAL l_548 */
    int i, j;
    (*p_888->g_9) &= ((VECTOR(int32_t, 8))(p_888->g_179.s75270161)).s2;
    (*p_888->g_9) = (+((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(l_180.yw)))).yxxxxxyxxyxyyyxy)), (int32_t)l_180.x))).s5);
    --l_188;
    for (l_188 = 0; (l_188 > 3); l_188 = safe_add_func_uint64_t_u_u(l_188, 9))
    { /* block id: 89 */
        struct S1 **l_402[10] = {&p_888->g_304[8],&p_888->g_304[8],&p_888->g_304[8],&p_888->g_304[8],&p_888->g_304[8],&p_888->g_304[8],&p_888->g_304[8],&p_888->g_304[8],&p_888->g_304[8],&p_888->g_304[8]};
        struct S1 *l_403 = (void*)0;
        int32_t l_404 = 0L;
        struct S0 *l_405 = &p_888->g_262[0];
        struct S0 **l_406 = &l_405;
        int16_t **l_409 = &l_201;
        uint32_t *l_412 = (void*)0;
        uint32_t *l_414 = (void*)0;
        uint32_t *l_415 = (void*)0;
        uint32_t *l_416 = (void*)0;
        uint32_t *l_417 = (void*)0;
        uint32_t *l_418[3];
        int32_t l_455 = 0x26256DB0L;
        struct S1 ****l_460 = &p_888->g_446;
        int32_t l_466 = 0x08DF0045L;
        int32_t l_489 = 0x0037AAB5L;
        int i;
        for (i = 0; i < 3; i++)
            l_418[i] = (void*)0;
        l_404 ^= (safe_lshift_func_int8_t_s_u(((safe_unary_minus_func_uint16_t_u(p_177)) >= 0L), ((((l_403 = func_196((p_888->g_13 , l_201), p_888->g_141.f3, p_177, p_888->g_122.y, p_888)) != (void*)0) > (*l_185)) & 0xC1L)));
        (*p_888->g_407) = ((*l_406) = l_405);
        if (((1L == p_177) >= (p_888->g_413.w &= (+(((void*)0 == l_408) , (((((*l_409) = l_201) == (p_888->g_410 = (void*)0)) & 0xF5A0C9A96D5ED112L) != ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(abs(((VECTOR(int64_t, 8))(p_888->g_411.yxxxyxyy)).hi))).wzwzwwyzxxywyyzx)).sf))))))
        { /* block id: 168 */
            uint32_t l_421[8][6][2] = {{{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL}},{{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL}},{{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL}},{{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL}},{{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL}},{{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL}},{{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL}},{{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL},{0x5FD7A10CL,0x5FD7A10CL}}};
            int i, j, k;
            (*l_184) ^= ((*l_183) = (safe_sub_func_int8_t_s_s(0x1EL, l_421[6][2][0])));
        }
        else
        { /* block id: 171 */
            (*l_183) ^= ((*l_182) |= p_177);
        }
        for (l_404 = (-10); (l_404 != (-24)); --l_404)
        { /* block id: 177 */
            struct S0 *l_425[7];
            int32_t l_426 = 0x31FC93F7L;
            int32_t l_437 = 0L;
            VECTOR(int16_t, 4) l_484 = (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-10L)), (-10L));
            struct S1 *l_526[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t *l_544 = &p_888->g_10[3][1][1];
            int i;
            for (i = 0; i < 7; i++)
                l_425[i] = &p_888->g_242[2][4][2];
            (1 + 1);
        }
    }
    return (*l_408);
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_261 p_888->g_262 p_888->g_209 p_888->g_122 p_888->g_123 p_888->g_9 p_888->g_302 p_888->g_315 p_888->g_375 p_888->g_12 p_888->g_13 p_888->g_384 p_888->g_242.f4 p_888->g_comm_values p_888->g_10 p_888->g_168.f1 p_888->g_398
 * writes: p_888->g_164.f2 p_888->g_141.f3 p_888->g_209 p_888->g_261.f0 p_888->g_10 p_888->g_303 p_888->g_315 p_888->g_288 p_888->g_375 p_888->g_comm_values p_888->g_168.f1 p_888->g_398
 */
struct S1 * func_196(int16_t * p_197, uint16_t  p_198, uint64_t  p_199, uint32_t  p_200, struct S2 * p_888)
{ /* block id: 90 */
    VECTOR(int32_t, 16) l_208 = (VECTOR(int32_t, 16))((-8L), (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 8L), 8L), 8L, (-8L), 8L, (VECTOR(int32_t, 2))((-8L), 8L), (VECTOR(int32_t, 2))((-8L), 8L), (-8L), 8L, (-8L), 8L);
    VECTOR(uint8_t, 8) l_214 = (VECTOR(uint8_t, 8))(0x21L, (VECTOR(uint8_t, 4))(0x21L, (VECTOR(uint8_t, 2))(0x21L, 0x15L), 0x15L), 0x15L, 0x21L, 0x15L);
    VECTOR(uint8_t, 16) l_215 = (VECTOR(uint8_t, 16))(8UL, (VECTOR(uint8_t, 4))(8UL, (VECTOR(uint8_t, 2))(8UL, 3UL), 3UL), 3UL, 8UL, 3UL, (VECTOR(uint8_t, 2))(8UL, 3UL), (VECTOR(uint8_t, 2))(8UL, 3UL), 8UL, 3UL, 8UL, 3UL);
    int32_t *l_222 = (void*)0;
    struct S1 *l_301 = &p_888->g_261;
    struct S1 **l_300[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t ****l_377 = (void*)0;
    int32_t ****l_378 = &p_888->g_375;
    int32_t ***l_379 = &p_888->g_376;
    VECTOR(uint16_t, 16) l_382 = (VECTOR(uint16_t, 16))(0xC874L, (VECTOR(uint16_t, 4))(0xC874L, (VECTOR(uint16_t, 2))(0xC874L, 65535UL), 65535UL), 65535UL, 0xC874L, 65535UL, (VECTOR(uint16_t, 2))(0xC874L, 65535UL), (VECTOR(uint16_t, 2))(0xC874L, 65535UL), 0xC874L, 65535UL, 0xC874L, 65535UL);
    int64_t *l_383 = (void*)0;
    int32_t l_385[4][9][4] = {{{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L}},{{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L}},{{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L}},{{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L},{0x24FB01B8L,0x24FB01B8L,1L,0L}}};
    int32_t *l_388 = (void*)0;
    int32_t *l_389 = &p_888->g_10[2][4][0];
    int32_t *l_390 = &p_888->g_261.f3;
    int32_t *l_391 = (void*)0;
    int32_t *l_392 = &p_888->g_234;
    int32_t *l_393 = &p_888->g_10[5][0][3];
    int32_t *l_394 = &p_888->g_261.f3;
    int32_t *l_395 = &p_888->g_10[3][3][2];
    int32_t *l_396 = &p_888->g_234;
    int32_t *l_397[7][9][3] = {{{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]}},{{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]}},{{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]}},{{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]}},{{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]}},{{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]}},{{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]},{&p_888->g_10[2][4][0],&p_888->g_13,&p_888->g_10[3][0][1]}}};
    struct S1 *l_401 = &p_888->g_261;
    int i, j, k;
    for (p_198 = 14; (p_198 == 43); p_198 = safe_add_func_uint64_t_u_u(p_198, 5))
    { /* block id: 93 */
        uint16_t l_223 = 0x59E2L;
        VECTOR(int32_t, 8) l_281 = (VECTOR(int32_t, 8))(4L, (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0L), 0L), 0L, 4L, 0L);
        uint8_t l_348 = 0xE3L;
        struct S1 *l_352[4][7][8] = {{{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261}},{{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261}},{{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261}},{{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261},{&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261,&p_888->g_261,&p_888->g_168,&p_888->g_168,&p_888->g_261}}};
        uint16_t l_368 = 0x394AL;
        int i, j, k;
        for (p_888->g_164.f2 = (-21); (p_888->g_164.f2 != 55); p_888->g_164.f2 = safe_add_func_uint8_t_u_u(p_888->g_164.f2, 6))
        { /* block id: 96 */
            VECTOR(uint8_t, 8) l_212 = (VECTOR(uint8_t, 8))(0xC1L, (VECTOR(uint8_t, 4))(0xC1L, (VECTOR(uint8_t, 2))(0xC1L, 0UL), 0UL), 0UL, 0xC1L, 0UL);
            int16_t l_276[2][3] = {{0x4F4AL,0x1B06L,0x4F4AL},{0x4F4AL,0x1B06L,0x4F4AL}};
            int32_t l_277 = 0x551A227BL;
            int32_t l_313 = 0x17216964L;
            int64_t l_320 = 0L;
            int32_t l_328 = (-1L);
            int32_t l_332 = 0x01FA7C76L;
            int32_t l_334 = 0L;
            struct S1 *l_351 = &p_888->g_261;
            int32_t *l_353 = &l_334;
            int32_t *l_354 = &l_313;
            int32_t *l_355 = &l_332;
            int32_t *l_356 = &l_328;
            int32_t *l_357 = &p_888->g_234;
            int32_t *l_358 = &l_313;
            int32_t *l_359 = &l_332;
            int32_t *l_360 = &p_888->g_10[2][4][0];
            int32_t *l_361 = &l_277;
            int32_t *l_362 = &p_888->g_10[2][4][0];
            int32_t *l_363 = &l_328;
            int32_t *l_364 = (void*)0;
            int32_t *l_365 = &p_888->g_10[4][2][0];
            int32_t *l_366 = &p_888->g_234;
            int32_t *l_367[5];
            int i, j;
            for (i = 0; i < 5; i++)
                l_367[i] = &l_313;
            for (p_888->g_141.f3 = 3; (p_888->g_141.f3 == (-19)); --p_888->g_141.f3)
            { /* block id: 99 */
                VECTOR(int32_t, 2) l_249 = (VECTOR(int32_t, 2))(0x533D4563L, 5L);
                int32_t **l_254[3];
                VECTOR(int32_t, 4) l_280 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-10L)), (-10L));
                int i;
                for (i = 0; i < 3; i++)
                    l_254[i] = &l_222;
                if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 2))(0x03FDC593L, 0x7597B5B3L)).xyxy, ((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 8))(l_208.sc0a989a4)), (int32_t)((VECTOR(int32_t, 2))(7L, 0x5578ADA6L)).odd))).even))).xxyxxzxz, ((VECTOR(int32_t, 16))(p_888->g_209.wzzyxzzwxxywwwzx)).lo))), 0x7123524AL, 0L, 0L, ((VECTOR(int32_t, 4))(((safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(1UL, 1UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_212.s67531331)).s74)), ((VECTOR(uint8_t, 4))(mad_sat(((VECTOR(uint8_t, 4))(p_888->g_213.s39f1)), ((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 8))(0UL, 0x34L, ((VECTOR(uint8_t, 2))(l_214.s43)), 0UL, ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 16))(l_215.saa0b9c9fa5d63d91)).sa6, (uint8_t)0x14L, (uint8_t)(safe_rshift_func_uint8_t_u_u(func_218(l_222, l_223, l_212.s2, p_888), 3))))), 255UL)).s76, ((VECTOR(uint8_t, 8))(1UL, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x7AL, 5UL)).hi, 3UL, 253UL, 5UL)), ((VECTOR(uint8_t, 2))(sub_sat(((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 2))(0UL, 255UL)).yxyy, (uint8_t)(0xC22EL == ((((safe_rshift_func_uint8_t_u_s(((((l_215.sa < ((safe_rshift_func_uint16_t_u_u((((VECTOR(int32_t, 4))(l_249.yxxy)).y >= ((safe_lshift_func_uint8_t_u_s((((VECTOR(uint16_t, 16))((p_200 < 0x6FL), 65527UL, ((VECTOR(uint16_t, 4))(0x1B9CL)), 8UL, p_888->l_comm_values[(safe_mod_func_uint32_t_u_u(p_888->tid, 3))], 1UL, ((VECTOR(uint16_t, 4))(65530UL)), 5UL, 0x8A45L, 0x0DFDL)).s6 , l_208.s8), 5)) , 0UL)), p_888->g_141.f4)) <= p_888->g_comm_values[p_888->tid])) || (*p_197)) || 0xBE6D4DE3L) , FAKE_DIVERGE(p_888->global_1_offset, get_global_id(1), 10)), 4)) ^ 9UL) | p_200) , l_249.x))))).even, ((VECTOR(uint8_t, 2))(0x1BL))))), 0xD8L)).s77))).xyxy, ((VECTOR(uint8_t, 4))(0xCBL))))), p_199, ((VECTOR(uint8_t, 4))(255UL)), 0x23L, 0xA9L, 0x98L)).odd)).s7, 0xF3L)) < p_888->g_10[2][4][0]), 0x5DE97BBAL, (-1L), 0L)), 1L)))).s457f)).even)).odd)
                { /* block id: 109 */
                    int32_t **l_253 = (void*)0;
                    int32_t ***l_252[3];
                    int16_t l_275 = 0x3940L;
                    VECTOR(int64_t, 4) l_278 = (VECTOR(int64_t, 4))(0x4720E6E700B07BD4L, (VECTOR(int64_t, 2))(0x4720E6E700B07BD4L, 0x2FE624849E123084L), 0x2FE624849E123084L);
                    struct S1 *l_299[4][1][3] = {{{&p_888->g_168,&p_888->g_261,&p_888->g_168}},{{&p_888->g_168,&p_888->g_261,&p_888->g_168}},{{&p_888->g_168,&p_888->g_261,&p_888->g_168}},{{&p_888->g_168,&p_888->g_261,&p_888->g_168}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_252[i] = &l_253;
                    l_254[1] = &p_888->g_9;
                    for (p_200 = 0; (p_200 < 28); p_200++)
                    { /* block id: 113 */
                        int32_t **l_263 = &p_888->g_9;
                        uint16_t *l_264 = &l_223;
                        int64_t *l_279 = &p_888->g_261.f0;
                        int32_t ***l_284 = &l_254[1];
                        uint8_t *l_295 = (void*)0;
                        uint8_t *l_296 = (void*)0;
                        uint8_t *l_297[3][7][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
                        int i, j, k;
                        p_888->g_209.y ^= (l_277 &= (((((safe_rshift_func_int16_t_s_u((((safe_mod_func_uint8_t_u_u(255UL, 0x44L)) >= (((p_888->g_261 , (p_888->g_262[0] , l_263)) != &p_888->g_9) > GROUP_DIVERGE(1, 1))) || ((++(*l_264)) , ((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((((VECTOR(int16_t, 16))(0x162FL, ((*p_197) = (safe_rshift_func_uint8_t_u_s((safe_div_func_int32_t_s_s((*p_888->g_9), l_212.s7)), p_888->g_242[4][5][2].f3))), 0x57CBL, ((VECTOR(int16_t, 4))(1L)), 7L, l_275, (-7L), ((VECTOR(int16_t, 2))(0x0419L)), (**l_263), p_888->g_12, 0x085EL, (-10L))).s6 <= p_200), 10)), 0x6F83L)) <= FAKE_DIVERGE(p_888->local_2_offset, get_local_id(2), 10)))), 9)) <= 1L) & 1UL) >= p_199) < l_276[0][2]));
                        (**l_263) = (l_281.s7 = (((*l_279) |= (+((VECTOR(int64_t, 4))(l_278.wzwz)).w)) != ((!(p_888->g_122.x < ((~((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_280.wz)), (-4L), 0x5EEB5D9EL)))), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_281.s46162026)).odd)), (int32_t)(((safe_rshift_func_uint16_t_u_u(((l_284 != (void*)0) >= ((*p_197) = ((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(max(((VECTOR(uint16_t, 2))(p_888->g_285.yy)).xxxxyxxyyxyyxyxx, (uint16_t)(((((void*)0 != &p_888->g_10[2][4][0]) , (*p_197)) && p_888->g_162[7]) != ((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 8))(p_888->g_288.s2b1f338f)).s0, 0x54L)) | (((safe_mul_func_uint8_t_u_u(((~(safe_mod_func_int16_t_s_s(((((VECTOR(int16_t, 2))((-10L), 9L)).hi , (safe_sub_func_uint8_t_u_u((p_888->g_298 |= p_888->g_262[0].f2), GROUP_DIVERGE(0, 1)))) < 4L), p_198))) & p_199), p_199)) , 1UL) != (**l_263))))))))).s3 , p_888->g_comm_values[p_888->tid]) || p_888->g_298))), 14)) , &p_888->g_162[7]) == l_264)))).yzywwzxx))))).s4635554336205301, ((VECTOR(int32_t, 16))((-1L)))))).even)).odd))))).xwywwxyz, ((VECTOR(int32_t, 8))(0x04CFD87DL))))).s1) != l_276[0][0]))) > p_888->g_123.s7)));
                        return l_299[0][0][1];
                    }
                }
                else
                { /* block id: 125 */
                    uint16_t l_307 = 0xAFFAL;
                    int32_t l_309 = 0x21C734B7L;
                    int32_t l_310 = (-6L);
                    int32_t l_322 = 0x410E5D80L;
                    int32_t l_323 = 0x0AF38509L;
                    int32_t l_327 = 0x054BB99AL;
                    int32_t l_330 = 0x3924AC93L;
                    int32_t l_333 = 6L;
                    int32_t l_335 = 0x03310E41L;
                    int32_t l_336 = (-1L);
                    VECTOR(uint32_t, 4) l_337 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL);
                    int i;
                    (*p_888->g_9) = 0x24496965L;
                    (*p_888->g_302) = l_300[5];
                    for (l_277 = 0; (l_277 <= 6); l_277 = safe_add_func_int8_t_s_s(l_277, 7))
                    { /* block id: 130 */
                        int16_t l_308 = 7L;
                        int32_t l_311 = (-7L);
                        int32_t l_312 = 0x0F46643FL;
                        int32_t l_314 = 0x68563FC5L;
                        if (l_307)
                            break;
                        --p_888->g_315;
                    }
                    for (l_310 = 0; (l_310 >= (-26)); l_310 = safe_sub_func_int8_t_s_s(l_310, 2))
                    { /* block id: 136 */
                        int32_t l_321 = 0x02123E1AL;
                        int32_t l_324 = 0L;
                        int32_t l_325 = 0x7ABD1335L;
                        int32_t l_326 = 0x7694111EL;
                        int32_t l_329 = 0x1AC9D4FEL;
                        int32_t l_331[9][9] = {{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L,0L,0L,0L}};
                        uint16_t *l_342 = &l_223;
                        int8_t *l_345 = (void*)0;
                        int8_t *l_346 = (void*)0;
                        int8_t *l_347 = (void*)0;
                        int i, j;
                        --l_337.w;
                        l_330 = ((*p_888->g_9) = (safe_div_func_int32_t_s_s((p_200 != 5UL), ((p_888->g_288.se = (((*l_342) &= 2UL) & (safe_sub_func_int16_t_s_s(0x21DFL, 0x2A1BL)))) | (0x6E74L != GROUP_DIVERGE(2, 1))))));
                    }
                }
                l_348++;
            }
            l_352[3][6][3] = l_351;
            ++l_368;
        }
    }
    (*p_888->g_9) = (((p_200 | (safe_div_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((((*l_378) = p_888->g_375) != l_379), p_888->g_12)), (safe_rshift_func_uint16_t_u_s(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_382.sc2b5f0ce3b68c28c)).sf70a)).wzzyzwywxwxyxzzy, ((VECTOR(uint16_t, 2))(5UL, 0x8AF0L)).yyxxyxyyxyyxxxyx))).s40)), 65531UL, ((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(((p_888->g_comm_values[p_888->tid] = p_888->g_13) <= ((((VECTOR(int32_t, 8))(0x20657CEAL, (-4L), (&l_379 != (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(p_888->g_384.s03)), ((VECTOR(int16_t, 2))(0x10D7L, 0x64D2L)), ((VECTOR(int16_t, 2))(0x34DFL, 0x4E19L)), 0x4993L, (-6L))).lo)).zxwxzxzxxwxyxzyw)).s8 , (((l_385[3][3][2] == (255UL ^ 246UL)) , p_888->g_384.s6) , &l_379))), ((VECTOR(int32_t, 4))(0x097ABAA8L)), (-5L))).s2 , p_200) , 0x8216E74DEEF493C7L)), 0x5C0AL, 1UL, 0x6CB9L)).hi)), p_198, ((VECTOR(uint16_t, 2))(0x453BL)), ((VECTOR(uint16_t, 2))(0x33D3L)), 8UL)).s6235106165770645)).s6446, ((VECTOR(uint16_t, 4))(0x1BC0L))))), p_888->g_242[4][5][2].f4, 0x31C4L, ((VECTOR(uint16_t, 4))(65535UL)), p_888->g_comm_values[p_888->tid], 0x1085L, 9UL)).sd6)).even, ((VECTOR(uint16_t, 2))(0x38DFL)), p_888->g_123.s3, ((VECTOR(uint16_t, 2))(0x6E58L)), 0x1C31L, 0xE027L)))).s5, 6))))) , (*p_888->g_9)) | 0x302CAC63L);
    for (p_888->g_168.f1 = 0; (p_888->g_168.f1 >= (-22)); p_888->g_168.f1 = safe_sub_func_uint8_t_u_u(p_888->g_168.f1, 4))
    { /* block id: 155 */
        (*p_888->g_9) = (p_200 , (~1L));
        (*p_888->g_9) |= (-1L);
    }
    ++p_888->g_398;
    return l_401;
}


/* ------------------------------------------ */
/* 
 * reads : p_888->g_225
 * writes: p_888->g_9 p_888->g_241
 */
uint8_t  func_218(int32_t * p_219, uint16_t  p_220, int32_t  p_221, struct S2 * p_888)
{ /* block id: 100 */
    int32_t *l_224 = &p_888->g_10[4][4][0];
    int32_t *l_226 = &p_888->g_10[2][4][0];
    int32_t *l_227 = &p_888->g_10[4][0][0];
    int32_t *l_228 = &p_888->g_168.f3;
    int32_t *l_229 = &p_888->g_10[3][5][2];
    int32_t *l_230 = (void*)0;
    int32_t *l_231 = &p_888->g_168.f3;
    int32_t *l_232[10];
    int32_t l_233 = (-3L);
    uint64_t l_235[5] = {0x8F309BEB5F73051EL,0x8F309BEB5F73051EL,0x8F309BEB5F73051EL,0x8F309BEB5F73051EL,0x8F309BEB5F73051EL};
    struct S0 *l_238 = &p_888->g_141;
    struct S0 **l_239 = &l_238;
    struct S0 *l_240[10][2][2];
    int32_t **l_243 = &l_224;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_232[i] = &p_888->g_10[3][0][0];
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
                l_240[i][j][k] = &p_888->g_164;
        }
    }
    (*p_888->g_225) = l_224;
    p_219 = l_224;
    l_235[4]++;
    p_219 = (((((((*l_239) = l_238) != (p_888->g_241 = l_240[2][1][0])) , &p_219) != &p_888->g_9) != (!((VECTOR(uint8_t, 2))(0x88L, 251UL)).odd)) , ((*l_243) = p_219));
    return p_220;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_comm_values[i] = 1;
    struct S2 c_889;
    struct S2* p_888 = &c_889;
    struct S2 c_890 = {
        {{{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL}},{{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL}},{{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL}},{{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL}},{{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL}},{{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL}},{{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL}},{{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL},{0x465CD386L,0L,0x0CF86511L,0x59B504DBL}}}, // p_888->g_10
        &p_888->g_10[2][4][0], // p_888->g_9
        1L, // p_888->g_11
        (-1L), // p_888->g_12
        (-1L), // p_888->g_13
        0x48127907L, // p_888->g_120
        0L, // p_888->g_121
        (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-9L)), (-9L)), // p_888->g_122
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x43F5AAB5L), 0x43F5AAB5L), 0x43F5AAB5L, 0L, 0x43F5AAB5L), // p_888->g_123
        {4294967286UL,7L,0xDE121EC4L,0x44DE95602A4F98EEL,0L}, // p_888->g_141
        &p_888->g_141, // p_888->g_140
        {0x5288L,(-6L),0x5288L,0x5288L,(-6L),0x5288L,0x5288L,(-6L),0x5288L}, // p_888->g_162
        {7UL,0x469016A6L,0UL,0L,3L}, // p_888->g_164
        {0x71C7DB9B2C804060L,0x50DC36EFL,4294967286UL,0x1FB8D8D9L,0UL}, // p_888->g_168
        {{{&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168},{&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168}}}, // p_888->g_169
        &p_888->g_168, // p_888->g_171
        (VECTOR(int32_t, 8))(0x37F32763L, (VECTOR(int32_t, 4))(0x37F32763L, (VECTOR(int32_t, 2))(0x37F32763L, 0x65DDD435L), 0x65DDD435L), 0x65DDD435L, 0x37F32763L, 0x65DDD435L), // p_888->g_179
        (VECTOR(int32_t, 4))(6L, (VECTOR(int32_t, 2))(6L, 1L), 1L), // p_888->g_209
        (VECTOR(uint8_t, 16))(0xA3L, (VECTOR(uint8_t, 4))(0xA3L, (VECTOR(uint8_t, 2))(0xA3L, 253UL), 253UL), 253UL, 0xA3L, 253UL, (VECTOR(uint8_t, 2))(0xA3L, 253UL), (VECTOR(uint8_t, 2))(0xA3L, 253UL), 0xA3L, 253UL, 0xA3L, 253UL), // p_888->g_213
        &p_888->g_9, // p_888->g_225
        0x2B257DA4L, // p_888->g_234
        {{{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}}},{{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}}},{{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}}},{{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}}},{{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}}},{{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}}},{{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}}},{{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}},{{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{0x9634626FL,0x3A5198DDL,4294967288UL,0L,0x205E8528L},{4294967295UL,0x47E8EC34L,4294967291UL,-1L,0x28BBC1E5L}}}}, // p_888->g_242
        &p_888->g_242[4][5][2], // p_888->g_241
        (void*)0, // p_888->g_244
        {1L,0x4CB3F389L,0xCA54A0DFL,-5L,0x8DEA454EL}, // p_888->g_261
        {{0x73DE580AL,-1L,0UL,0L,1L}}, // p_888->g_262
        (VECTOR(uint16_t, 2))(0x8F1AL, 0x6E9CL), // p_888->g_285
        (VECTOR(int8_t, 16))((-2L), (VECTOR(int8_t, 4))((-2L), (VECTOR(int8_t, 2))((-2L), 7L), 7L), 7L, (-2L), 7L, (VECTOR(int8_t, 2))((-2L), 7L), (VECTOR(int8_t, 2))((-2L), 7L), (-2L), 7L, (-2L), 7L), // p_888->g_288
        0x00L, // p_888->g_298
        {&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168,&p_888->g_168}, // p_888->g_304
        &p_888->g_304[5], // p_888->g_303
        &p_888->g_303, // p_888->g_302
        0UL, // p_888->g_315
        (void*)0, // p_888->g_376
        &p_888->g_376, // p_888->g_375
        (VECTOR(int16_t, 8))(0x1B72L, (VECTOR(int16_t, 4))(0x1B72L, (VECTOR(int16_t, 2))(0x1B72L, 0x21F0L), 0x21F0L), 0x21F0L, 0x1B72L, 0x21F0L), // p_888->g_384
        7UL, // p_888->g_398
        &p_888->g_241, // p_888->g_407
        &p_888->g_162[7], // p_888->g_410
        (VECTOR(int64_t, 2))((-1L), 0x618E62DF6B9FBA11L), // p_888->g_411
        (VECTOR(uint32_t, 4))(0xA83B3694L, (VECTOR(uint32_t, 2))(0xA83B3694L, 4UL), 4UL), // p_888->g_413
        (VECTOR(int16_t, 2))(0L, (-5L)), // p_888->g_430
        (void*)0, // p_888->g_446
        &p_888->g_9, // p_888->g_453
        (VECTOR(uint32_t, 2))(4294967288UL, 4294967295UL), // p_888->g_465
        (VECTOR(uint8_t, 2))(9UL, 1UL), // p_888->g_475
        {0xF119E503L,-3L,1UL,-1L,0x0DA169C3L}, // p_888->g_491
        (void*)0, // p_888->g_506
        {{{0UL,0x272D48ECL,4294967295UL,-1L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0UL,0x272D48ECL,4294967295UL,-1L,-1L}},{{0UL,0x272D48ECL,4294967295UL,-1L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0UL,0x272D48ECL,4294967295UL,-1L,-1L}},{{0UL,0x272D48ECL,4294967295UL,-1L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0UL,0x272D48ECL,4294967295UL,-1L,-1L}},{{0UL,0x272D48ECL,4294967295UL,-1L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0UL,0x272D48ECL,4294967295UL,-1L,-1L}},{{0UL,0x272D48ECL,4294967295UL,-1L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0UL,0x272D48ECL,4294967295UL,-1L,-1L}},{{0UL,0x272D48ECL,4294967295UL,-1L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0UL,0x272D48ECL,4294967295UL,-1L,-1L}},{{0UL,0x272D48ECL,4294967295UL,-1L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0UL,0x272D48ECL,4294967295UL,-1L,-1L}},{{0UL,0x272D48ECL,4294967295UL,-1L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0UL,0x272D48ECL,4294967295UL,-1L,-1L}},{{0UL,0x272D48ECL,4294967295UL,-1L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{5UL,0x4D7BD106L,0x0B80D885L,0x5EA2FB830327289EL,0x4E9E235FL},{0xBA97B785L,-6L,4294967290UL,0L,0x58C45904L},{0xCAFF8029L,0x6E1D3659L,0x5C6CB903L,0x5CA87E0965BC0387L,-1L},{1UL,-9L,0x5563733FL,0x49991215B3AA4666L,0x0D5D0C41L},{0UL,0x272D48ECL,4294967295UL,-1L,-1L}}}, // p_888->g_539
        &p_888->g_298, // p_888->g_546
        &p_888->g_546, // p_888->g_545
        (VECTOR(int8_t, 2))(1L, 1L), // p_888->g_578
        (VECTOR(uint8_t, 4))(0x0DL, (VECTOR(uint8_t, 2))(0x0DL, 0xDAL), 0xDAL), // p_888->g_593
        {0xB433212DL,0x1BDDB66FL,0x81FEC596L,0L,0x07FEEDBAL}, // p_888->g_605
        4UL, // p_888->g_607
        (VECTOR(uint16_t, 8))(0UL, (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 5UL), 5UL), 5UL, 0UL, 5UL), // p_888->g_654
        1L, // p_888->g_674
        {0L,1L,0xC88B2CD9L,0x398C057FL,0x45D65D13L}, // p_888->g_718
        {1L,-9L,0x4CB6CC2AL,0x62963B76L,4294967295UL}, // p_888->g_719
        {&p_888->g_10[3][5][2],&p_888->g_10[3][5][2],&p_888->g_10[3][5][2],&p_888->g_10[3][5][2],&p_888->g_10[3][5][2],&p_888->g_10[3][5][2],&p_888->g_10[3][5][2],&p_888->g_10[3][5][2]}, // p_888->g_729
        {0x20CB86EE840C7CB4L,-7L,4294967290UL,0x0F0D098FL,0x649632BCL}, // p_888->g_733
        (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x1DB082BEL), 0x1DB082BEL), 0x1DB082BEL, 2L, 0x1DB082BEL), // p_888->g_738
        0UL, // p_888->g_744
        (VECTOR(int16_t, 2))((-8L), 0L), // p_888->g_763
        {{0x1BC970FBL,0x78D2C65CL,6UL,-6L,0x180FFB1FL},{0x1BC970FBL,0x78D2C65CL,6UL,-6L,0x180FFB1FL},{0x1BC970FBL,0x78D2C65CL,6UL,-6L,0x180FFB1FL}}, // p_888->g_787
        (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x6A085E99L), 0x6A085E99L), 0x6A085E99L, 1L, 0x6A085E99L), // p_888->g_821
        {0L,0x3CA948EFL,4294967294UL,1L,0x00163CBBL}, // p_888->g_823
        {0xD6232198L,0x3620460AL,3UL,0x3C658DD0467AD23FL,0L}, // p_888->g_832
        {0x0F90AF2B7FB60F5EL,-2L,0xB6DA049CL,0x53AFE63CL,0x1583C35DL}, // p_888->g_842
        (VECTOR(uint16_t, 8))(0x46EAL, (VECTOR(uint16_t, 4))(0x46EAL, (VECTOR(uint16_t, 2))(0x46EAL, 0x38A0L), 0x38A0L), 0x38A0L, 0x46EAL, 0x38A0L), // p_888->g_843
        (VECTOR(uint16_t, 8))(0x592FL, (VECTOR(uint16_t, 4))(0x592FL, (VECTOR(uint16_t, 2))(0x592FL, 0x8DD3L), 0x8DD3L), 0x8DD3L, 0x592FL, 0x8DD3L), // p_888->g_845
        (VECTOR(int32_t, 2))(0x70AA3028L, 0x3A1BEDDEL), // p_888->g_852
        (VECTOR(uint64_t, 16))(18446744073709551613UL, (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 1UL), 1UL), 1UL, 18446744073709551613UL, 1UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 1UL), (VECTOR(uint64_t, 2))(18446744073709551613UL, 1UL), 18446744073709551613UL, 1UL, 18446744073709551613UL, 1UL), // p_888->g_854
        (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0L), 0L), // p_888->g_868
        0, // p_888->v_collective
        sequence_input[get_global_id(0)], // p_888->global_0_offset
        sequence_input[get_global_id(1)], // p_888->global_1_offset
        sequence_input[get_global_id(2)], // p_888->global_2_offset
        sequence_input[get_local_id(0)], // p_888->local_0_offset
        sequence_input[get_local_id(1)], // p_888->local_1_offset
        sequence_input[get_local_id(2)], // p_888->local_2_offset
        sequence_input[get_group_id(0)], // p_888->group_0_offset
        sequence_input[get_group_id(1)], // p_888->group_1_offset
        sequence_input[get_group_id(2)], // p_888->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 3)), permutations[0][get_linear_local_id()])), // p_888->tid
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_889 = c_890;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_888);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(p_888->g_10[i][j][k], "p_888->g_10[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_888->g_11, "p_888->g_11", print_hash_value);
    transparent_crc(p_888->g_12, "p_888->g_12", print_hash_value);
    transparent_crc(p_888->g_13, "p_888->g_13", print_hash_value);
    transparent_crc(p_888->g_120, "p_888->g_120", print_hash_value);
    transparent_crc(p_888->g_121, "p_888->g_121", print_hash_value);
    transparent_crc(p_888->g_122.x, "p_888->g_122.x", print_hash_value);
    transparent_crc(p_888->g_122.y, "p_888->g_122.y", print_hash_value);
    transparent_crc(p_888->g_122.z, "p_888->g_122.z", print_hash_value);
    transparent_crc(p_888->g_122.w, "p_888->g_122.w", print_hash_value);
    transparent_crc(p_888->g_123.s0, "p_888->g_123.s0", print_hash_value);
    transparent_crc(p_888->g_123.s1, "p_888->g_123.s1", print_hash_value);
    transparent_crc(p_888->g_123.s2, "p_888->g_123.s2", print_hash_value);
    transparent_crc(p_888->g_123.s3, "p_888->g_123.s3", print_hash_value);
    transparent_crc(p_888->g_123.s4, "p_888->g_123.s4", print_hash_value);
    transparent_crc(p_888->g_123.s5, "p_888->g_123.s5", print_hash_value);
    transparent_crc(p_888->g_123.s6, "p_888->g_123.s6", print_hash_value);
    transparent_crc(p_888->g_123.s7, "p_888->g_123.s7", print_hash_value);
    transparent_crc(p_888->g_141.f0, "p_888->g_141.f0", print_hash_value);
    transparent_crc(p_888->g_141.f1, "p_888->g_141.f1", print_hash_value);
    transparent_crc(p_888->g_141.f2, "p_888->g_141.f2", print_hash_value);
    transparent_crc(p_888->g_141.f3, "p_888->g_141.f3", print_hash_value);
    transparent_crc(p_888->g_141.f4, "p_888->g_141.f4", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_888->g_162[i], "p_888->g_162[i]", print_hash_value);

    }
    transparent_crc(p_888->g_164.f0, "p_888->g_164.f0", print_hash_value);
    transparent_crc(p_888->g_164.f1, "p_888->g_164.f1", print_hash_value);
    transparent_crc(p_888->g_164.f2, "p_888->g_164.f2", print_hash_value);
    transparent_crc(p_888->g_164.f3, "p_888->g_164.f3", print_hash_value);
    transparent_crc(p_888->g_164.f4, "p_888->g_164.f4", print_hash_value);
    transparent_crc(p_888->g_168.f0, "p_888->g_168.f0", print_hash_value);
    transparent_crc(p_888->g_168.f1, "p_888->g_168.f1", print_hash_value);
    transparent_crc(p_888->g_168.f2, "p_888->g_168.f2", print_hash_value);
    transparent_crc(p_888->g_168.f3, "p_888->g_168.f3", print_hash_value);
    transparent_crc(p_888->g_168.f4, "p_888->g_168.f4", print_hash_value);
    transparent_crc(p_888->g_179.s0, "p_888->g_179.s0", print_hash_value);
    transparent_crc(p_888->g_179.s1, "p_888->g_179.s1", print_hash_value);
    transparent_crc(p_888->g_179.s2, "p_888->g_179.s2", print_hash_value);
    transparent_crc(p_888->g_179.s3, "p_888->g_179.s3", print_hash_value);
    transparent_crc(p_888->g_179.s4, "p_888->g_179.s4", print_hash_value);
    transparent_crc(p_888->g_179.s5, "p_888->g_179.s5", print_hash_value);
    transparent_crc(p_888->g_179.s6, "p_888->g_179.s6", print_hash_value);
    transparent_crc(p_888->g_179.s7, "p_888->g_179.s7", print_hash_value);
    transparent_crc(p_888->g_209.x, "p_888->g_209.x", print_hash_value);
    transparent_crc(p_888->g_209.y, "p_888->g_209.y", print_hash_value);
    transparent_crc(p_888->g_209.z, "p_888->g_209.z", print_hash_value);
    transparent_crc(p_888->g_209.w, "p_888->g_209.w", print_hash_value);
    transparent_crc(p_888->g_213.s0, "p_888->g_213.s0", print_hash_value);
    transparent_crc(p_888->g_213.s1, "p_888->g_213.s1", print_hash_value);
    transparent_crc(p_888->g_213.s2, "p_888->g_213.s2", print_hash_value);
    transparent_crc(p_888->g_213.s3, "p_888->g_213.s3", print_hash_value);
    transparent_crc(p_888->g_213.s4, "p_888->g_213.s4", print_hash_value);
    transparent_crc(p_888->g_213.s5, "p_888->g_213.s5", print_hash_value);
    transparent_crc(p_888->g_213.s6, "p_888->g_213.s6", print_hash_value);
    transparent_crc(p_888->g_213.s7, "p_888->g_213.s7", print_hash_value);
    transparent_crc(p_888->g_213.s8, "p_888->g_213.s8", print_hash_value);
    transparent_crc(p_888->g_213.s9, "p_888->g_213.s9", print_hash_value);
    transparent_crc(p_888->g_213.sa, "p_888->g_213.sa", print_hash_value);
    transparent_crc(p_888->g_213.sb, "p_888->g_213.sb", print_hash_value);
    transparent_crc(p_888->g_213.sc, "p_888->g_213.sc", print_hash_value);
    transparent_crc(p_888->g_213.sd, "p_888->g_213.sd", print_hash_value);
    transparent_crc(p_888->g_213.se, "p_888->g_213.se", print_hash_value);
    transparent_crc(p_888->g_213.sf, "p_888->g_213.sf", print_hash_value);
    transparent_crc(p_888->g_234, "p_888->g_234", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_888->g_242[i][j][k].f0, "p_888->g_242[i][j][k].f0", print_hash_value);
                transparent_crc(p_888->g_242[i][j][k].f1, "p_888->g_242[i][j][k].f1", print_hash_value);
                transparent_crc(p_888->g_242[i][j][k].f2, "p_888->g_242[i][j][k].f2", print_hash_value);
                transparent_crc(p_888->g_242[i][j][k].f3, "p_888->g_242[i][j][k].f3", print_hash_value);
                transparent_crc(p_888->g_242[i][j][k].f4, "p_888->g_242[i][j][k].f4", print_hash_value);

            }
        }
    }
    transparent_crc(p_888->g_261.f0, "p_888->g_261.f0", print_hash_value);
    transparent_crc(p_888->g_261.f1, "p_888->g_261.f1", print_hash_value);
    transparent_crc(p_888->g_261.f2, "p_888->g_261.f2", print_hash_value);
    transparent_crc(p_888->g_261.f3, "p_888->g_261.f3", print_hash_value);
    transparent_crc(p_888->g_261.f4, "p_888->g_261.f4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_888->g_262[i].f0, "p_888->g_262[i].f0", print_hash_value);
        transparent_crc(p_888->g_262[i].f1, "p_888->g_262[i].f1", print_hash_value);
        transparent_crc(p_888->g_262[i].f2, "p_888->g_262[i].f2", print_hash_value);
        transparent_crc(p_888->g_262[i].f3, "p_888->g_262[i].f3", print_hash_value);
        transparent_crc(p_888->g_262[i].f4, "p_888->g_262[i].f4", print_hash_value);

    }
    transparent_crc(p_888->g_285.x, "p_888->g_285.x", print_hash_value);
    transparent_crc(p_888->g_285.y, "p_888->g_285.y", print_hash_value);
    transparent_crc(p_888->g_288.s0, "p_888->g_288.s0", print_hash_value);
    transparent_crc(p_888->g_288.s1, "p_888->g_288.s1", print_hash_value);
    transparent_crc(p_888->g_288.s2, "p_888->g_288.s2", print_hash_value);
    transparent_crc(p_888->g_288.s3, "p_888->g_288.s3", print_hash_value);
    transparent_crc(p_888->g_288.s4, "p_888->g_288.s4", print_hash_value);
    transparent_crc(p_888->g_288.s5, "p_888->g_288.s5", print_hash_value);
    transparent_crc(p_888->g_288.s6, "p_888->g_288.s6", print_hash_value);
    transparent_crc(p_888->g_288.s7, "p_888->g_288.s7", print_hash_value);
    transparent_crc(p_888->g_288.s8, "p_888->g_288.s8", print_hash_value);
    transparent_crc(p_888->g_288.s9, "p_888->g_288.s9", print_hash_value);
    transparent_crc(p_888->g_288.sa, "p_888->g_288.sa", print_hash_value);
    transparent_crc(p_888->g_288.sb, "p_888->g_288.sb", print_hash_value);
    transparent_crc(p_888->g_288.sc, "p_888->g_288.sc", print_hash_value);
    transparent_crc(p_888->g_288.sd, "p_888->g_288.sd", print_hash_value);
    transparent_crc(p_888->g_288.se, "p_888->g_288.se", print_hash_value);
    transparent_crc(p_888->g_288.sf, "p_888->g_288.sf", print_hash_value);
    transparent_crc(p_888->g_298, "p_888->g_298", print_hash_value);
    transparent_crc(p_888->g_315, "p_888->g_315", print_hash_value);
    transparent_crc(p_888->g_384.s0, "p_888->g_384.s0", print_hash_value);
    transparent_crc(p_888->g_384.s1, "p_888->g_384.s1", print_hash_value);
    transparent_crc(p_888->g_384.s2, "p_888->g_384.s2", print_hash_value);
    transparent_crc(p_888->g_384.s3, "p_888->g_384.s3", print_hash_value);
    transparent_crc(p_888->g_384.s4, "p_888->g_384.s4", print_hash_value);
    transparent_crc(p_888->g_384.s5, "p_888->g_384.s5", print_hash_value);
    transparent_crc(p_888->g_384.s6, "p_888->g_384.s6", print_hash_value);
    transparent_crc(p_888->g_384.s7, "p_888->g_384.s7", print_hash_value);
    transparent_crc(p_888->g_398, "p_888->g_398", print_hash_value);
    transparent_crc(p_888->g_411.x, "p_888->g_411.x", print_hash_value);
    transparent_crc(p_888->g_411.y, "p_888->g_411.y", print_hash_value);
    transparent_crc(p_888->g_413.x, "p_888->g_413.x", print_hash_value);
    transparent_crc(p_888->g_413.y, "p_888->g_413.y", print_hash_value);
    transparent_crc(p_888->g_413.z, "p_888->g_413.z", print_hash_value);
    transparent_crc(p_888->g_413.w, "p_888->g_413.w", print_hash_value);
    transparent_crc(p_888->g_430.x, "p_888->g_430.x", print_hash_value);
    transparent_crc(p_888->g_430.y, "p_888->g_430.y", print_hash_value);
    transparent_crc(p_888->g_465.x, "p_888->g_465.x", print_hash_value);
    transparent_crc(p_888->g_465.y, "p_888->g_465.y", print_hash_value);
    transparent_crc(p_888->g_475.x, "p_888->g_475.x", print_hash_value);
    transparent_crc(p_888->g_475.y, "p_888->g_475.y", print_hash_value);
    transparent_crc(p_888->g_491.f0, "p_888->g_491.f0", print_hash_value);
    transparent_crc(p_888->g_491.f1, "p_888->g_491.f1", print_hash_value);
    transparent_crc(p_888->g_491.f2, "p_888->g_491.f2", print_hash_value);
    transparent_crc(p_888->g_491.f3, "p_888->g_491.f3", print_hash_value);
    transparent_crc(p_888->g_491.f4, "p_888->g_491.f4", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(p_888->g_539[i][j].f0, "p_888->g_539[i][j].f0", print_hash_value);
            transparent_crc(p_888->g_539[i][j].f1, "p_888->g_539[i][j].f1", print_hash_value);
            transparent_crc(p_888->g_539[i][j].f2, "p_888->g_539[i][j].f2", print_hash_value);
            transparent_crc(p_888->g_539[i][j].f3, "p_888->g_539[i][j].f3", print_hash_value);
            transparent_crc(p_888->g_539[i][j].f4, "p_888->g_539[i][j].f4", print_hash_value);

        }
    }
    transparent_crc(p_888->g_578.x, "p_888->g_578.x", print_hash_value);
    transparent_crc(p_888->g_578.y, "p_888->g_578.y", print_hash_value);
    transparent_crc(p_888->g_593.x, "p_888->g_593.x", print_hash_value);
    transparent_crc(p_888->g_593.y, "p_888->g_593.y", print_hash_value);
    transparent_crc(p_888->g_593.z, "p_888->g_593.z", print_hash_value);
    transparent_crc(p_888->g_593.w, "p_888->g_593.w", print_hash_value);
    transparent_crc(p_888->g_605.f0, "p_888->g_605.f0", print_hash_value);
    transparent_crc(p_888->g_605.f1, "p_888->g_605.f1", print_hash_value);
    transparent_crc(p_888->g_605.f2, "p_888->g_605.f2", print_hash_value);
    transparent_crc(p_888->g_605.f3, "p_888->g_605.f3", print_hash_value);
    transparent_crc(p_888->g_605.f4, "p_888->g_605.f4", print_hash_value);
    transparent_crc(p_888->g_607, "p_888->g_607", print_hash_value);
    transparent_crc(p_888->g_654.s0, "p_888->g_654.s0", print_hash_value);
    transparent_crc(p_888->g_654.s1, "p_888->g_654.s1", print_hash_value);
    transparent_crc(p_888->g_654.s2, "p_888->g_654.s2", print_hash_value);
    transparent_crc(p_888->g_654.s3, "p_888->g_654.s3", print_hash_value);
    transparent_crc(p_888->g_654.s4, "p_888->g_654.s4", print_hash_value);
    transparent_crc(p_888->g_654.s5, "p_888->g_654.s5", print_hash_value);
    transparent_crc(p_888->g_654.s6, "p_888->g_654.s6", print_hash_value);
    transparent_crc(p_888->g_654.s7, "p_888->g_654.s7", print_hash_value);
    transparent_crc(p_888->g_674, "p_888->g_674", print_hash_value);
    transparent_crc(p_888->g_718.f0, "p_888->g_718.f0", print_hash_value);
    transparent_crc(p_888->g_718.f1, "p_888->g_718.f1", print_hash_value);
    transparent_crc(p_888->g_718.f2, "p_888->g_718.f2", print_hash_value);
    transparent_crc(p_888->g_718.f3, "p_888->g_718.f3", print_hash_value);
    transparent_crc(p_888->g_718.f4, "p_888->g_718.f4", print_hash_value);
    transparent_crc(p_888->g_719.f0, "p_888->g_719.f0", print_hash_value);
    transparent_crc(p_888->g_719.f1, "p_888->g_719.f1", print_hash_value);
    transparent_crc(p_888->g_719.f2, "p_888->g_719.f2", print_hash_value);
    transparent_crc(p_888->g_719.f3, "p_888->g_719.f3", print_hash_value);
    transparent_crc(p_888->g_719.f4, "p_888->g_719.f4", print_hash_value);
    transparent_crc(p_888->g_733.f0, "p_888->g_733.f0", print_hash_value);
    transparent_crc(p_888->g_733.f1, "p_888->g_733.f1", print_hash_value);
    transparent_crc(p_888->g_733.f2, "p_888->g_733.f2", print_hash_value);
    transparent_crc(p_888->g_733.f3, "p_888->g_733.f3", print_hash_value);
    transparent_crc(p_888->g_733.f4, "p_888->g_733.f4", print_hash_value);
    transparent_crc(p_888->g_738.s0, "p_888->g_738.s0", print_hash_value);
    transparent_crc(p_888->g_738.s1, "p_888->g_738.s1", print_hash_value);
    transparent_crc(p_888->g_738.s2, "p_888->g_738.s2", print_hash_value);
    transparent_crc(p_888->g_738.s3, "p_888->g_738.s3", print_hash_value);
    transparent_crc(p_888->g_738.s4, "p_888->g_738.s4", print_hash_value);
    transparent_crc(p_888->g_738.s5, "p_888->g_738.s5", print_hash_value);
    transparent_crc(p_888->g_738.s6, "p_888->g_738.s6", print_hash_value);
    transparent_crc(p_888->g_738.s7, "p_888->g_738.s7", print_hash_value);
    transparent_crc(p_888->g_744, "p_888->g_744", print_hash_value);
    transparent_crc(p_888->g_763.x, "p_888->g_763.x", print_hash_value);
    transparent_crc(p_888->g_763.y, "p_888->g_763.y", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_888->g_787[i].f0, "p_888->g_787[i].f0", print_hash_value);
        transparent_crc(p_888->g_787[i].f1, "p_888->g_787[i].f1", print_hash_value);
        transparent_crc(p_888->g_787[i].f2, "p_888->g_787[i].f2", print_hash_value);
        transparent_crc(p_888->g_787[i].f3, "p_888->g_787[i].f3", print_hash_value);
        transparent_crc(p_888->g_787[i].f4, "p_888->g_787[i].f4", print_hash_value);

    }
    transparent_crc(p_888->g_821.s0, "p_888->g_821.s0", print_hash_value);
    transparent_crc(p_888->g_821.s1, "p_888->g_821.s1", print_hash_value);
    transparent_crc(p_888->g_821.s2, "p_888->g_821.s2", print_hash_value);
    transparent_crc(p_888->g_821.s3, "p_888->g_821.s3", print_hash_value);
    transparent_crc(p_888->g_821.s4, "p_888->g_821.s4", print_hash_value);
    transparent_crc(p_888->g_821.s5, "p_888->g_821.s5", print_hash_value);
    transparent_crc(p_888->g_821.s6, "p_888->g_821.s6", print_hash_value);
    transparent_crc(p_888->g_821.s7, "p_888->g_821.s7", print_hash_value);
    transparent_crc(p_888->g_823.f0, "p_888->g_823.f0", print_hash_value);
    transparent_crc(p_888->g_823.f1, "p_888->g_823.f1", print_hash_value);
    transparent_crc(p_888->g_823.f2, "p_888->g_823.f2", print_hash_value);
    transparent_crc(p_888->g_823.f3, "p_888->g_823.f3", print_hash_value);
    transparent_crc(p_888->g_823.f4, "p_888->g_823.f4", print_hash_value);
    transparent_crc(p_888->g_832.f0, "p_888->g_832.f0", print_hash_value);
    transparent_crc(p_888->g_832.f1, "p_888->g_832.f1", print_hash_value);
    transparent_crc(p_888->g_832.f2, "p_888->g_832.f2", print_hash_value);
    transparent_crc(p_888->g_832.f3, "p_888->g_832.f3", print_hash_value);
    transparent_crc(p_888->g_832.f4, "p_888->g_832.f4", print_hash_value);
    transparent_crc(p_888->g_842.f0, "p_888->g_842.f0", print_hash_value);
    transparent_crc(p_888->g_842.f1, "p_888->g_842.f1", print_hash_value);
    transparent_crc(p_888->g_842.f2, "p_888->g_842.f2", print_hash_value);
    transparent_crc(p_888->g_842.f3, "p_888->g_842.f3", print_hash_value);
    transparent_crc(p_888->g_842.f4, "p_888->g_842.f4", print_hash_value);
    transparent_crc(p_888->g_843.s0, "p_888->g_843.s0", print_hash_value);
    transparent_crc(p_888->g_843.s1, "p_888->g_843.s1", print_hash_value);
    transparent_crc(p_888->g_843.s2, "p_888->g_843.s2", print_hash_value);
    transparent_crc(p_888->g_843.s3, "p_888->g_843.s3", print_hash_value);
    transparent_crc(p_888->g_843.s4, "p_888->g_843.s4", print_hash_value);
    transparent_crc(p_888->g_843.s5, "p_888->g_843.s5", print_hash_value);
    transparent_crc(p_888->g_843.s6, "p_888->g_843.s6", print_hash_value);
    transparent_crc(p_888->g_843.s7, "p_888->g_843.s7", print_hash_value);
    transparent_crc(p_888->g_845.s0, "p_888->g_845.s0", print_hash_value);
    transparent_crc(p_888->g_845.s1, "p_888->g_845.s1", print_hash_value);
    transparent_crc(p_888->g_845.s2, "p_888->g_845.s2", print_hash_value);
    transparent_crc(p_888->g_845.s3, "p_888->g_845.s3", print_hash_value);
    transparent_crc(p_888->g_845.s4, "p_888->g_845.s4", print_hash_value);
    transparent_crc(p_888->g_845.s5, "p_888->g_845.s5", print_hash_value);
    transparent_crc(p_888->g_845.s6, "p_888->g_845.s6", print_hash_value);
    transparent_crc(p_888->g_845.s7, "p_888->g_845.s7", print_hash_value);
    transparent_crc(p_888->g_852.x, "p_888->g_852.x", print_hash_value);
    transparent_crc(p_888->g_852.y, "p_888->g_852.y", print_hash_value);
    transparent_crc(p_888->g_854.s0, "p_888->g_854.s0", print_hash_value);
    transparent_crc(p_888->g_854.s1, "p_888->g_854.s1", print_hash_value);
    transparent_crc(p_888->g_854.s2, "p_888->g_854.s2", print_hash_value);
    transparent_crc(p_888->g_854.s3, "p_888->g_854.s3", print_hash_value);
    transparent_crc(p_888->g_854.s4, "p_888->g_854.s4", print_hash_value);
    transparent_crc(p_888->g_854.s5, "p_888->g_854.s5", print_hash_value);
    transparent_crc(p_888->g_854.s6, "p_888->g_854.s6", print_hash_value);
    transparent_crc(p_888->g_854.s7, "p_888->g_854.s7", print_hash_value);
    transparent_crc(p_888->g_854.s8, "p_888->g_854.s8", print_hash_value);
    transparent_crc(p_888->g_854.s9, "p_888->g_854.s9", print_hash_value);
    transparent_crc(p_888->g_854.sa, "p_888->g_854.sa", print_hash_value);
    transparent_crc(p_888->g_854.sb, "p_888->g_854.sb", print_hash_value);
    transparent_crc(p_888->g_854.sc, "p_888->g_854.sc", print_hash_value);
    transparent_crc(p_888->g_854.sd, "p_888->g_854.sd", print_hash_value);
    transparent_crc(p_888->g_854.se, "p_888->g_854.se", print_hash_value);
    transparent_crc(p_888->g_854.sf, "p_888->g_854.sf", print_hash_value);
    transparent_crc(p_888->g_868.x, "p_888->g_868.x", print_hash_value);
    transparent_crc(p_888->g_868.y, "p_888->g_868.y", print_hash_value);
    transparent_crc(p_888->g_868.z, "p_888->g_868.z", print_hash_value);
    transparent_crc(p_888->g_868.w, "p_888->g_868.w", print_hash_value);
    transparent_crc(p_888->v_collective, "p_888->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 73; i++)
            transparent_crc(p_888->g_special_values[i + 73 * get_linear_group_id()], "p_888->g_special_values[i + 73 * get_linear_group_id()]", print_hash_value);
    transparent_crc(p_888->l_comm_values[get_linear_local_id()], "p_888->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_888->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()], "p_888->g_comm_values[get_linear_group_id() * 3 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
