// --atomics 3 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 83,29,3 -l 83,1,1
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

__constant uint32_t permutations[10][83] = {
{82,44,48,50,46,75,33,61,30,65,54,74,66,25,57,0,68,45,27,76,23,21,67,47,8,2,11,38,58,1,71,28,78,40,36,9,41,49,64,42,59,70,5,34,22,72,77,32,43,79,60,69,7,29,10,37,6,13,62,55,81,15,31,73,17,51,56,3,53,14,20,52,16,18,12,35,80,4,24,63,26,39,19}, // permutation 0
{20,46,50,4,8,21,5,62,16,57,64,39,38,31,36,58,1,72,28,60,81,45,59,35,42,66,6,69,24,67,65,43,22,13,61,12,82,34,19,63,0,74,11,32,55,41,56,53,73,79,80,10,47,70,23,44,27,40,75,18,17,7,51,9,25,29,30,52,14,2,71,26,68,54,15,48,37,78,76,49,33,3,77}, // permutation 1
{46,6,61,74,77,73,32,48,69,70,75,31,16,18,15,14,80,5,54,17,27,7,1,34,82,26,76,57,63,40,33,12,67,68,22,29,45,60,28,8,35,41,79,59,62,20,49,30,56,81,10,39,53,36,4,11,52,21,25,37,47,19,66,13,43,3,78,58,2,55,24,0,64,72,51,38,71,9,23,44,65,50,42}, // permutation 2
{46,56,47,29,72,80,9,60,11,6,36,53,24,16,26,25,57,75,77,68,2,39,48,69,70,64,13,17,12,7,19,22,27,23,66,61,21,34,59,33,74,1,76,45,54,28,10,81,0,3,49,67,8,78,15,40,52,71,18,63,44,79,43,82,62,51,42,65,14,50,58,41,35,73,31,55,32,20,37,4,38,5,30}, // permutation 3
{3,5,34,39,7,42,73,20,41,45,52,47,28,69,38,50,37,6,56,49,81,51,61,13,15,74,36,19,54,10,26,62,44,40,29,79,75,4,57,18,59,80,67,32,14,24,70,0,72,43,2,27,65,71,8,11,31,66,68,33,35,76,25,78,9,64,53,16,46,12,58,63,60,1,77,22,82,23,17,21,48,30,55}, // permutation 4
{62,82,19,27,16,74,80,28,44,1,4,47,30,70,21,55,33,6,48,78,26,11,20,46,64,43,65,38,63,72,61,49,24,59,12,42,0,67,18,41,3,50,32,15,51,5,14,68,56,9,36,69,29,52,22,34,79,23,45,10,8,81,53,54,17,57,2,60,39,35,31,40,66,71,25,76,13,58,75,77,37,7,73}, // permutation 5
{13,82,74,55,57,44,21,38,4,39,62,16,45,6,78,59,26,12,77,70,80,8,68,28,60,81,7,52,79,31,11,42,66,27,14,51,54,72,58,10,53,20,3,5,46,2,37,73,17,43,64,32,22,61,15,0,29,34,50,9,41,65,71,30,36,23,56,63,1,69,48,47,40,76,35,18,19,67,24,33,25,49,75}, // permutation 6
{1,79,33,40,55,77,63,27,35,31,81,30,58,29,34,15,8,5,70,62,69,20,4,42,82,0,17,7,51,44,13,11,57,32,39,64,3,14,24,45,36,59,72,80,49,37,47,41,22,71,54,43,66,76,25,26,18,28,56,53,73,6,9,21,12,68,75,65,50,48,10,46,61,19,78,67,38,60,23,74,2,16,52}, // permutation 7
{73,60,17,34,26,14,57,2,29,64,72,69,43,77,23,9,36,28,24,66,0,4,65,40,1,22,7,48,31,44,35,30,46,39,37,70,78,74,81,51,12,56,47,68,19,21,18,71,8,6,50,62,67,27,42,11,32,58,76,79,80,15,54,38,13,5,82,53,25,33,59,55,49,10,3,16,41,52,45,20,63,75,61}, // permutation 8
{38,69,46,14,60,67,2,26,44,42,43,55,15,11,34,1,79,9,70,51,49,41,54,32,76,39,59,53,24,50,66,72,58,31,77,0,65,71,7,27,23,40,13,3,56,28,19,6,20,68,29,10,25,57,47,75,62,33,4,63,52,17,22,61,48,81,37,8,80,18,5,35,78,45,64,82,30,74,73,36,12,21,16} // permutation 9
};

// Seed: 3486655920

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile VECTOR(int32_t, 2) g_4;
    VECTOR(int32_t, 2) g_5;
    VECTOR(int32_t, 8) g_6;
    VECTOR(int32_t, 16) g_7;
    VECTOR(int32_t, 16) g_9;
    VECTOR(int32_t, 4) g_11;
    uint32_t g_27;
    VECTOR(int8_t, 16) g_79;
    volatile VECTOR(int8_t, 16) g_83;
    uint32_t g_90;
    volatile VECTOR(uint64_t, 8) g_92;
    volatile VECTOR(uint64_t, 2) g_98;
    volatile VECTOR(uint64_t, 4) g_100;
    VECTOR(uint64_t, 8) g_104;
    volatile VECTOR(uint64_t, 8) g_105;
    volatile VECTOR(uint64_t, 2) g_106;
    int32_t * volatile g_111;
    int32_t * volatile g_112;
    int32_t * volatile g_113[4][7];
    int32_t g_125;
    uint32_t g_140;
    int32_t ** volatile g_163;
    int32_t *g_165;
    int32_t ** volatile g_164;
    int32_t ** volatile g_172;
    uint64_t g_175;
    VECTOR(uint16_t, 2) g_179;
    volatile VECTOR(uint16_t, 4) g_180;
    VECTOR(uint16_t, 2) g_181;
    VECTOR(int32_t, 16) g_196;
    int32_t ** volatile g_212;
    volatile VECTOR(int8_t, 8) g_219;
    int16_t g_222;
    int64_t g_228;
    uint8_t g_233;
    VECTOR(int16_t, 16) g_243;
    volatile int8_t * volatile g_259;
    uint32_t *g_269[2][3];
    uint32_t **g_268;
    VECTOR(int32_t, 8) g_283;
    uint32_t g_311;
    int32_t * volatile g_315[8];
    volatile VECTOR(uint32_t, 8) g_348;
    VECTOR(uint8_t, 8) g_349;
    int8_t g_369;
    VECTOR(int64_t, 8) g_370;
    int32_t * volatile g_373[9];
    int32_t * volatile g_374;
    volatile VECTOR(uint64_t, 16) g_386;
    int32_t g_405;
    volatile VECTOR(uint32_t, 2) g_410;
    volatile VECTOR(uint32_t, 4) g_413;
    VECTOR(uint32_t, 16) g_414;
    VECTOR(uint32_t, 16) g_415;
    volatile VECTOR(int64_t, 8) g_422;
    volatile VECTOR(int16_t, 16) g_440;
    volatile VECTOR(int16_t, 16) g_492;
    volatile VECTOR(int32_t, 4) g_503;
    volatile VECTOR(int32_t, 4) g_504;
    VECTOR(int32_t, 16) g_505;
    int32_t **g_557[9][10];
    uint64_t g_566;
    uint64_t g_568;
    volatile uint64_t g_570[8][1];
    volatile VECTOR(int64_t, 8) g_589;
    int8_t *g_606;
    int8_t **g_605[8][9][3];
    int8_t *** volatile g_604[5][1];
    int8_t *** volatile g_607;
    VECTOR(uint64_t, 2) g_650;
    int64_t *** volatile g_658;
    int32_t *g_677;
    int32_t *g_678[10][1];
    uint16_t *g_694;
    VECTOR(int16_t, 4) g_697;
    uint16_t * volatile g_698;
    volatile VECTOR(int64_t, 2) g_727;
    volatile VECTOR(int64_t, 2) g_728;
    volatile VECTOR(uint8_t, 16) g_760;
    int32_t * volatile g_762[8][4];
    uint8_t *g_765;
    VECTOR(int64_t, 4) g_783;
    VECTOR(int64_t, 4) g_788;
    uint8_t *g_790;
    uint8_t * volatile *g_789[2];
    volatile int8_t g_798;
    int32_t * volatile g_847;
    int32_t * volatile g_848;
    int32_t * volatile g_850;
    int32_t ** volatile g_851;
    VECTOR(int64_t, 2) g_917;
    volatile VECTOR(int32_t, 8) g_934;
    volatile VECTOR(int32_t, 16) g_951;
    VECTOR(uint64_t, 4) g_955;
    int64_t g_980;
    volatile VECTOR(uint32_t, 2) g_982;
    uint8_t g_1000;
    volatile VECTOR(uint8_t, 16) g_1069;
    volatile VECTOR(int32_t, 2) g_1075;
    VECTOR(int32_t, 16) g_1130;
    uint32_t ** volatile * volatile g_1142;
    uint32_t ** volatile * volatile *g_1141;
    volatile VECTOR(uint32_t, 16) g_1218;
    uint8_t **g_1259;
    uint8_t *** volatile g_1258;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S0 * p_1296);
int32_t  func_12(uint32_t  p_13, int16_t  p_14, struct S0 * p_1296);
uint32_t ** func_38(uint32_t  p_39, struct S0 * p_1296);
int32_t  func_44(uint64_t  p_45, int64_t  p_46, int32_t * p_47, uint32_t ** p_48, struct S0 * p_1296);
int8_t  func_50(int16_t  p_51, uint64_t  p_52, uint32_t ** p_53, uint32_t * p_54, struct S0 * p_1296);
uint32_t ** func_55(uint32_t * p_56, int64_t  p_57, uint64_t  p_58, int8_t  p_59, int32_t * p_60, struct S0 * p_1296);
int64_t  func_61(uint32_t  p_62, int32_t * p_63, int16_t  p_64, uint64_t  p_65, struct S0 * p_1296);
int32_t * func_67(int16_t  p_68, struct S0 * p_1296);
uint16_t  func_70(uint64_t  p_71, struct S0 * p_1296);
int64_t  func_72(int32_t * p_73, uint32_t * p_74, uint32_t * p_75, uint16_t  p_76, int64_t  p_77, struct S0 * p_1296);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1296->g_4 p_1296->g_5 p_1296->g_6 p_1296->g_7 p_1296->g_9 p_1296->g_11 p_1296->g_27 p_1296->g_comm_values p_1296->g_125 p_1296->g_104 p_1296->g_175 p_1296->g_164 p_1296->g_165 p_1296->g_765 p_1296->g_233 p_1296->g_269 p_1296->g_677 p_1296->g_405
 * writes: p_1296->g_27 p_1296->g_6 p_1296->g_605 p_1296->g_222
 */
int32_t  func_1(struct S0 * p_1296)
{ /* block id: 4 */
    VECTOR(int32_t, 16) l_8 = (VECTOR(int32_t, 16))(0x62C4DF8EL, (VECTOR(int32_t, 4))(0x62C4DF8EL, (VECTOR(int32_t, 2))(0x62C4DF8EL, 0x7118C84BL), 0x7118C84BL), 0x7118C84BL, 0x62C4DF8EL, 0x7118C84BL, (VECTOR(int32_t, 2))(0x62C4DF8EL, 0x7118C84BL), (VECTOR(int32_t, 2))(0x62C4DF8EL, 0x7118C84BL), 0x62C4DF8EL, 0x7118C84BL, 0x62C4DF8EL, 0x7118C84BL);
    VECTOR(int32_t, 4) l_10 = (VECTOR(int32_t, 4))(0x258D0336L, (VECTOR(int32_t, 2))(0x258D0336L, 0L), 0L);
    uint32_t *l_26[3][5][10] = {{{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27},{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27},{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27},{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27},{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27}},{{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27},{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27},{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27},{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27},{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27}},{{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27},{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27},{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27},{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27},{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27,&p_1296->g_27}}};
    int32_t l_1271 = 1L;
    uint16_t l_1272 = 0x4258L;
    uint16_t l_1273 = 65529UL;
    uint32_t *l_1283 = (void*)0;
    uint32_t **l_1282 = &l_1283;
    int8_t **l_1290 = &p_1296->g_606;
    int8_t ***l_1291 = &p_1296->g_605[3][8][0];
    int32_t l_1292 = 2L;
    int16_t *l_1293 = &p_1296->g_222;
    int32_t *l_1294[1];
    int8_t l_1295[5][3] = {{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1294[i] = (void*)0;
    l_1273 = ((((safe_mod_func_uint32_t_u_u(6UL, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(p_1296->g_4.yyxy)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0x02DAFBBDL, 0x7084BC9CL)).yyxxyyxy)).hi)), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 4))(p_1296->g_5.yxyx)), ((VECTOR(int32_t, 16))(min(((VECTOR(int32_t, 8))(p_1296->g_6.s60710550)).s1350331450747230, (int32_t)(-1L)))).s770b))), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 8))(p_1296->g_7.s55261fc4)).s27, ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 2))((-1L), (-6L))).yxyxxyxyyyyyxyyy, ((VECTOR(int32_t, 16))(l_8.s7b831966c4779d44))))).sf4))).xxyy)))))))).hi, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(p_1296->g_9.s718b9628eaf6082f)).hi, ((VECTOR(int32_t, 8))(hadd(((VECTOR(int32_t, 16))(l_10.xwyzwzwywwwxzyyz)).hi, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(p_1296->g_11.xywx)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(func_12((+(safe_rshift_func_uint16_t_u_s(p_1296->g_11.y, 7))), (safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(3UL, (0x6ED73489L | ((-1L) >= (FAKE_DIVERGE(p_1296->group_1_offset, get_group_id(1), 10) == (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u((p_1296->g_27 |= (l_8.s0 >= p_1296->g_7.s2)))), p_1296->g_comm_values[p_1296->tid])), FAKE_DIVERGE(p_1296->global_1_offset, get_global_id(1), 10)))))))), l_8.sa)), p_1296), (-5L), 0x00069E47L, 0L)), 0x58268599L, (-6L), 1L, l_8.sf, ((VECTOR(int32_t, 2))(0x79EA64DEL)), ((VECTOR(int32_t, 2))(0x3B6744EAL)), (-7L), 0x692473F9L, (-3L), 1L)).s3d)).xxyx, ((VECTOR(int32_t, 4))(0x37B96CA4L))))), 4L, ((VECTOR(int32_t, 2))(0x201276ACL)), ((VECTOR(int32_t, 8))(0x199597BCL)), 0x26182F2DL)).odd)))))))).s05))))), 0L, 0x18A59357L)), 1L, l_1271, l_10.y, l_10.w, 0L, ((VECTOR(int32_t, 2))(0L)), (-5L))).odd)).s5732766522025467)).lo)), ((VECTOR(int32_t, 8))(0x16DEFE3CL))))))).s0)) >= 3UL) || l_1272) , l_1272);
    l_1295[2][1] |= ((+l_8.sd) < ((safe_div_func_int16_t_s_s(7L, l_10.z)) < ((safe_mod_func_uint16_t_u_u(65535UL, ((*l_1293) = (safe_mod_func_uint64_t_u_u((safe_sub_func_int32_t_s_s((((*l_1282) = func_67(l_8.s2, p_1296)) == (((*p_1296->g_765) & (safe_div_func_int16_t_s_s((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 16))(((safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s((((*l_1291) = (l_1290 = &p_1296->g_606)) != &p_1296->g_606), l_1272)), (-1L))) , l_8.s3), ((VECTOR(uint16_t, 4))(0x4022L)), l_1271, ((VECTOR(uint16_t, 2))(0x10D2L)), ((VECTOR(uint16_t, 2))(0xC7EEL)), l_8.sb, ((VECTOR(uint16_t, 2))(1UL)), 65531UL, 65535UL, 1UL)).lo, ((VECTOR(uint16_t, 8))(0xB6A0L))))).s74)).odd && 0x548D9D3EL), l_1271))) , p_1296->g_269[1][0])), l_1292)), l_10.y))))) != l_10.w)));
    return (*p_1296->g_677);
}


/* ------------------------------------------ */
/* 
 * reads : p_1296->g_6 p_1296->g_125
 * writes:
 */
int32_t  func_12(uint32_t  p_13, int16_t  p_14, struct S0 * p_1296)
{ /* block id: 6 */
    uint64_t l_28 = 0xAB95DFEA44E0C42EL;
    int32_t l_29 = 8L;
    uint32_t l_66 = 4294967295UL;
    uint32_t **l_334 = &p_1296->g_269[1][0];
    uint32_t **l_434[6];
    uint16_t l_661 = 0xC4EFL;
    VECTOR(uint32_t, 8) l_857 = (VECTOR(uint32_t, 8))(0xD3FAAD40L, (VECTOR(uint32_t, 4))(0xD3FAAD40L, (VECTOR(uint32_t, 2))(0xD3FAAD40L, 0xCFDACC83L), 0xCFDACC83L), 0xCFDACC83L, 0xD3FAAD40L, 0xCFDACC83L);
    int32_t l_881 = 0x4BC0DBBCL;
    int32_t l_883 = (-1L);
    int32_t l_884 = (-3L);
    int32_t l_887 = 0x3A65CE9AL;
    VECTOR(int64_t, 2) l_918 = (VECTOR(int64_t, 2))(0x716D0D446AEAB8D4L, 0x7A037728DDF03590L);
    int64_t **l_960 = (void*)0;
    int64_t ***l_959 = &l_960;
    int32_t *l_985 = &p_1296->g_125;
    int32_t l_994 = 4L;
    int32_t l_995 = 0L;
    int32_t l_996 = 0L;
    int32_t l_997 = (-4L);
    int32_t l_999 = (-4L);
    uint8_t **l_1015 = &p_1296->g_765;
    int32_t l_1023 = (-1L);
    VECTOR(uint32_t, 16) l_1036 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 0x122B1642L), 0x122B1642L), 0x122B1642L, 1UL, 0x122B1642L, (VECTOR(uint32_t, 2))(1UL, 0x122B1642L), (VECTOR(uint32_t, 2))(1UL, 0x122B1642L), 1UL, 0x122B1642L, 1UL, 0x122B1642L);
    VECTOR(uint8_t, 4) l_1066 = (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xB6L), 0xB6L);
    VECTOR(uint8_t, 2) l_1067 = (VECTOR(uint8_t, 2))(1UL, 7UL);
    VECTOR(int32_t, 8) l_1073 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1B13591CL), 0x1B13591CL), 0x1B13591CL, (-1L), 0x1B13591CL);
    VECTOR(int32_t, 4) l_1074 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x2F26A95AL), 0x2F26A95AL);
    int32_t **l_1085 = &p_1296->g_678[7][0];
    int16_t *l_1089 = (void*)0;
    int16_t **l_1088 = &l_1089;
    VECTOR(int32_t, 2) l_1162 = (VECTOR(int32_t, 2))((-1L), 0x246817D5L);
    VECTOR(uint16_t, 16) l_1180 = (VECTOR(uint16_t, 16))(0xD9C8L, (VECTOR(uint16_t, 4))(0xD9C8L, (VECTOR(uint16_t, 2))(0xD9C8L, 65534UL), 65534UL), 65534UL, 0xD9C8L, 65534UL, (VECTOR(uint16_t, 2))(0xD9C8L, 65534UL), (VECTOR(uint16_t, 2))(0xD9C8L, 65534UL), 0xD9C8L, 65534UL, 0xD9C8L, 65534UL);
    uint32_t l_1216[10][6][4] = {{{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL}},{{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL}},{{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL}},{{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL}},{{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL}},{{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL}},{{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL}},{{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL}},{{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL}},{{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL},{4294967292UL,0xB7FEF51FL,4294967290UL,1UL}}};
    VECTOR(uint32_t, 8) l_1217 = (VECTOR(uint32_t, 8))(0xB94DDC54L, (VECTOR(uint32_t, 4))(0xB94DDC54L, (VECTOR(uint32_t, 2))(0xB94DDC54L, 0UL), 0UL), 0UL, 0xB94DDC54L, 0UL);
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_434[i] = &p_1296->g_269[0][1];
    l_29 &= l_28;
    l_29 &= p_1296->g_6.s2;
    for (l_28 = (-10); (l_28 >= 38); l_28++)
    { /* block id: 11 */
        int32_t l_32 = 0x06F6EC37L;
        int32_t *l_33 = &l_29;
        (*l_33) |= l_32;
    }
    for (p_13 = 20; (p_13 != 9); p_13--)
    { /* block id: 16 */
        uint8_t l_49 = 246UL;
        VECTOR(uint8_t, 8) l_858 = (VECTOR(uint8_t, 8))(0xA1L, (VECTOR(uint8_t, 4))(0xA1L, (VECTOR(uint8_t, 2))(0xA1L, 248UL), 248UL), 248UL, 0xA1L, 248UL);
        int8_t *l_867 = &p_1296->g_369;
        int32_t l_869 = 0x53A45DDBL;
        int32_t l_882[4];
        uint32_t l_907 = 0x457DFBE8L;
        VECTOR(int64_t, 16) l_916 = (VECTOR(int64_t, 16))(0x6AEF076CAAE22E4EL, (VECTOR(int64_t, 4))(0x6AEF076CAAE22E4EL, (VECTOR(int64_t, 2))(0x6AEF076CAAE22E4EL, 8L), 8L), 8L, 0x6AEF076CAAE22E4EL, 8L, (VECTOR(int64_t, 2))(0x6AEF076CAAE22E4EL, 8L), (VECTOR(int64_t, 2))(0x6AEF076CAAE22E4EL, 8L), 0x6AEF076CAAE22E4EL, 8L, 0x6AEF076CAAE22E4EL, 8L);
        VECTOR(int64_t, 2) l_919 = (VECTOR(int64_t, 2))(3L, (-1L));
        int32_t ***l_944[1][7][9] = {{{(void*)0,(void*)0,&p_1296->g_557[4][2],&p_1296->g_557[4][2],&p_1296->g_557[1][1],&p_1296->g_557[4][2],&p_1296->g_557[4][2],(void*)0,(void*)0},{(void*)0,(void*)0,&p_1296->g_557[4][2],&p_1296->g_557[4][2],&p_1296->g_557[1][1],&p_1296->g_557[4][2],&p_1296->g_557[4][2],(void*)0,(void*)0},{(void*)0,(void*)0,&p_1296->g_557[4][2],&p_1296->g_557[4][2],&p_1296->g_557[1][1],&p_1296->g_557[4][2],&p_1296->g_557[4][2],(void*)0,(void*)0},{(void*)0,(void*)0,&p_1296->g_557[4][2],&p_1296->g_557[4][2],&p_1296->g_557[1][1],&p_1296->g_557[4][2],&p_1296->g_557[4][2],(void*)0,(void*)0},{(void*)0,(void*)0,&p_1296->g_557[4][2],&p_1296->g_557[4][2],&p_1296->g_557[1][1],&p_1296->g_557[4][2],&p_1296->g_557[4][2],(void*)0,(void*)0},{(void*)0,(void*)0,&p_1296->g_557[4][2],&p_1296->g_557[4][2],&p_1296->g_557[1][1],&p_1296->g_557[4][2],&p_1296->g_557[4][2],(void*)0,(void*)0},{(void*)0,(void*)0,&p_1296->g_557[4][2],&p_1296->g_557[4][2],&p_1296->g_557[1][1],&p_1296->g_557[4][2],&p_1296->g_557[4][2],(void*)0,(void*)0}}};
        int8_t l_991 = 0x10L;
        int16_t l_998 = 0L;
        uint8_t **l_1014 = &p_1296->g_790;
        uint32_t *l_1097[3][4][10] = {{{&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311},{&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311},{&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311},{&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311}},{{&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311},{&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311},{&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311},{&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311}},{{&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311},{&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311},{&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311},{&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,&p_1296->g_311,(void*)0,&p_1296->g_311,&p_1296->g_311}}};
        int32_t l_1107[8][3][4] = {{{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L}},{{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L}},{{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L}},{{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L}},{{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L}},{{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L}},{{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L}},{{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L},{0x36C757AEL,0x50B02BBFL,(-3L),1L}}};
        VECTOR(int32_t, 4) l_1161 = (VECTOR(int32_t, 4))(0x3DE0FEDBL, (VECTOR(int32_t, 2))(0x3DE0FEDBL, 0x57362334L), 0x57362334L);
        int64_t *l_1175[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int64_t **l_1174[10] = {&l_1175[1],&l_1175[1],&l_1175[1],&l_1175[1],&l_1175[1],&l_1175[1],&l_1175[1],&l_1175[1],&l_1175[1],&l_1175[1]};
        int16_t l_1178 = 0x4C4FL;
        uint16_t l_1211 = 0xBD0AL;
        uint32_t l_1255 = 4294967295UL;
        int32_t l_1266 = 0x5B7B8A7AL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_882[i] = 0x44373CC6L;
        for (l_29 = 0; (l_29 < 3); l_29 = safe_add_func_uint16_t_u_u(l_29, 1))
        { /* block id: 19 */
            uint8_t l_69[1][8];
            int32_t *l_209 = (void*)0;
            uint32_t ***l_333[8][6] = {{&p_1296->g_268,&p_1296->g_268,(void*)0,&p_1296->g_268,(void*)0,&p_1296->g_268},{&p_1296->g_268,&p_1296->g_268,(void*)0,&p_1296->g_268,(void*)0,&p_1296->g_268},{&p_1296->g_268,&p_1296->g_268,(void*)0,&p_1296->g_268,(void*)0,&p_1296->g_268},{&p_1296->g_268,&p_1296->g_268,(void*)0,&p_1296->g_268,(void*)0,&p_1296->g_268},{&p_1296->g_268,&p_1296->g_268,(void*)0,&p_1296->g_268,(void*)0,&p_1296->g_268},{&p_1296->g_268,&p_1296->g_268,(void*)0,&p_1296->g_268,(void*)0,&p_1296->g_268},{&p_1296->g_268,&p_1296->g_268,(void*)0,&p_1296->g_268,(void*)0,&p_1296->g_268},{&p_1296->g_268,&p_1296->g_268,(void*)0,&p_1296->g_268,(void*)0,&p_1296->g_268}};
            int64_t l_662 = (-1L);
            VECTOR(uint8_t, 4) l_856 = (VECTOR(uint8_t, 4))(249UL, (VECTOR(uint8_t, 2))(249UL, 253UL), 253UL);
            int8_t **l_860[8][4] = {{&p_1296->g_606,&p_1296->g_606,&p_1296->g_606,&p_1296->g_606},{&p_1296->g_606,&p_1296->g_606,&p_1296->g_606,&p_1296->g_606},{&p_1296->g_606,&p_1296->g_606,&p_1296->g_606,&p_1296->g_606},{&p_1296->g_606,&p_1296->g_606,&p_1296->g_606,&p_1296->g_606},{&p_1296->g_606,&p_1296->g_606,&p_1296->g_606,&p_1296->g_606},{&p_1296->g_606,&p_1296->g_606,&p_1296->g_606,&p_1296->g_606},{&p_1296->g_606,&p_1296->g_606,&p_1296->g_606,&p_1296->g_606},{&p_1296->g_606,&p_1296->g_606,&p_1296->g_606,&p_1296->g_606}};
            int32_t l_880[7][4] = {{0x041EF2E7L,0x55B21EDDL,0x57E67AB5L,0x0BB7D342L},{0x041EF2E7L,0x55B21EDDL,0x57E67AB5L,0x0BB7D342L},{0x041EF2E7L,0x55B21EDDL,0x57E67AB5L,0x0BB7D342L},{0x041EF2E7L,0x55B21EDDL,0x57E67AB5L,0x0BB7D342L},{0x041EF2E7L,0x55B21EDDL,0x57E67AB5L,0x0BB7D342L},{0x041EF2E7L,0x55B21EDDL,0x57E67AB5L,0x0BB7D342L},{0x041EF2E7L,0x55B21EDDL,0x57E67AB5L,0x0BB7D342L}};
            uint16_t l_894[7][3][10] = {{{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL},{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL},{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL}},{{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL},{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL},{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL}},{{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL},{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL},{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL}},{{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL},{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL},{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL}},{{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL},{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL},{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL}},{{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL},{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL},{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL}},{{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL},{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL},{0xA84DL,0UL,6UL,0x5AD4L,65535UL,0xEC60L,6UL,0x1708L,65535UL,4UL}}};
            uint32_t l_964 = 0xFEE5C4A5L;
            VECTOR(uint32_t, 4) l_981 = (VECTOR(uint32_t, 4))(4294967287UL, (VECTOR(uint32_t, 2))(4294967287UL, 1UL), 1UL);
            int16_t l_984 = 0x0F9BL;
            int32_t l_993 = 0x31AD8A27L;
            VECTOR(uint64_t, 2) l_1027 = (VECTOR(uint64_t, 2))(0xB24338A21F995D91L, 0xF96A3B0B81EDD1D6L);
            VECTOR(uint32_t, 2) l_1037 = (VECTOR(uint32_t, 2))(0x9AAF3A37L, 0x0FC0991BL);
            VECTOR(uint32_t, 4) l_1038 = (VECTOR(uint32_t, 4))(0x55EEA670L, (VECTOR(uint32_t, 2))(0x55EEA670L, 0x418BB42DL), 0x418BB42DL);
            int64_t **l_1049 = (void*)0;
            uint8_t **l_1054[6][3][5] = {{{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765},{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765},{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765}},{{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765},{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765},{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765}},{{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765},{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765},{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765}},{{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765},{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765},{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765}},{{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765},{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765},{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765}},{{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765},{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765},{&p_1296->g_790,&p_1296->g_790,&p_1296->g_765,&p_1296->g_790,&p_1296->g_765}}};
            uint8_t **l_1055 = (void*)0;
            int8_t l_1056 = 0x16L;
            uint32_t l_1057 = 5UL;
            int16_t l_1065 = 0x4FF5L;
            VECTOR(uint8_t, 16) l_1068 = (VECTOR(uint8_t, 16))(0xD0L, (VECTOR(uint8_t, 4))(0xD0L, (VECTOR(uint8_t, 2))(0xD0L, 0xE9L), 0xE9L), 0xE9L, 0xD0L, 0xE9L, (VECTOR(uint8_t, 2))(0xD0L, 0xE9L), (VECTOR(uint8_t, 2))(0xD0L, 0xE9L), 0xD0L, 0xE9L, 0xD0L, 0xE9L);
            VECTOR(uint8_t, 4) l_1070 = (VECTOR(uint8_t, 4))(0xA7L, (VECTOR(uint8_t, 2))(0xA7L, 255UL), 255UL);
            VECTOR(uint16_t, 2) l_1182 = (VECTOR(uint16_t, 2))(0x36E0L, 0x20EEL);
            int32_t l_1188[2][9][7] = {{{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L}},{{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L},{4L,0x3A76138DL,4L,4L,0x3A76138DL,4L,4L}}};
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 8; j++)
                    l_69[i][j] = 2UL;
            }
            (1 + 1);
        }
    }
    return (*l_985);
}


/* ------------------------------------------ */
/* 
 * reads : p_1296->g_650 p_1296->g_422 p_1296->g_243 p_1296->g_104 p_1296->g_694 p_1296->g_697 p_1296->g_698 p_1296->g_175 p_1296->g_6 p_1296->g_164 p_1296->g_165 p_1296->g_727 p_1296->g_728 p_1296->g_606 p_1296->g_413 p_1296->g_196 p_1296->g_181 p_1296->g_348 p_1296->g_140 p_1296->g_760 p_1296->g_11 p_1296->g_386 p_1296->g_369 p_1296->g_783 p_1296->g_788 p_1296->g_789 p_1296->g_414 p_1296->g_9 p_1296->g_268 p_1296->g_269 p_1296->g_568 p_1296->g_503 p_1296->g_222 p_1296->g_566 p_1296->g_850 p_1296->g_851
 * writes: p_1296->g_222 p_1296->g_677 p_1296->g_678 p_1296->g_650 p_1296->g_694 p_1296->g_27 p_1296->g_6 p_1296->g_165 p_1296->g_369 p_1296->g_140 p_1296->g_181 p_1296->g_765 p_1296->g_243 p_1296->g_568 p_1296->g_566 p_1296->g_125
 */
uint32_t ** func_38(uint32_t  p_39, struct S0 * p_1296)
{ /* block id: 269 */
    uint64_t *l_669 = (void*)0;
    int8_t ***l_670 = &p_1296->g_605[1][6][1];
    int16_t *l_673 = &p_1296->g_222;
    int32_t *l_674 = (void*)0;
    int32_t **l_675[1];
    int32_t *l_676 = &p_1296->g_405;
    uint64_t *l_679 = (void*)0;
    uint64_t *l_680[9][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int64_t l_681 = (-5L);
    int32_t l_682 = 1L;
    int32_t l_683 = 1L;
    VECTOR(int32_t, 4) l_686 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 6L), 6L);
    int32_t *l_689 = (void*)0;
    VECTOR(int32_t, 2) l_714 = (VECTOR(int32_t, 2))((-1L), 0x16677B9AL);
    VECTOR(int64_t, 4) l_732 = (VECTOR(int64_t, 4))(5L, (VECTOR(int64_t, 2))(5L, 0x4B0BD293433DE9FFL), 0x4B0BD293433DE9FFL);
    int8_t l_795 = 0x0CL;
    int32_t l_796[2];
    uint8_t l_800 = 255UL;
    uint32_t l_811[3][10][7] = {{{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL}},{{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL}},{{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL},{0x6327FE93L,0x8200867CL,1UL,6UL,0xC4288001L,4294967295UL,4294967295UL}}};
    uint8_t l_820 = 8UL;
    int32_t *l_846 = (void*)0;
    int32_t *l_849 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_675[i] = &l_674;
    for (i = 0; i < 2; i++)
        l_796[i] = 0L;
    if ((safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((((p_39 >= ((safe_sub_func_int8_t_s_s((!((void*)0 == l_669)), ((void*)0 != l_670))) && (safe_mul_func_uint8_t_u_u((+(((((*l_673) = 0x235CL) == (((p_1296->g_677 = (l_676 = l_674)) == (p_1296->g_678[4][0] = &p_1296->g_405)) != (p_1296->g_650.y--))) ^ ((((VECTOR(int32_t, 2))(l_686.xw)).hi , (l_683 = (safe_lshift_func_int8_t_s_s(((void*)0 == l_674), l_682)))) ^ p_39)) && p_1296->g_422.s2)), 0x86L)))) ^ (-1L)) , p_1296->g_243.s5), (-4L))), p_1296->g_104.s1)))
    { /* block id: 276 */
        int16_t *l_703[8];
        int16_t **l_702 = &l_703[4];
        uint16_t l_704 = 0UL;
        int32_t l_721[8] = {0x0EFA6E2FL,0x0EFA6E2FL,0x0EFA6E2FL,0x0EFA6E2FL,0x0EFA6E2FL,0x0EFA6E2FL,0x0EFA6E2FL,0x0EFA6E2FL};
        VECTOR(int64_t, 2) l_725 = (VECTOR(int64_t, 2))(0x724B386A61352ED2L, 0x789FECDFE7FC159BL);
        VECTOR(int64_t, 8) l_726 = (VECTOR(int64_t, 8))((-5L), (VECTOR(int64_t, 4))((-5L), (VECTOR(int64_t, 2))((-5L), (-4L)), (-4L)), (-4L), (-5L), (-4L));
        int32_t l_742 = 1L;
        int32_t l_749 = 0x7ECF7C6AL;
        uint8_t *l_766 = &p_1296->g_233;
        VECTOR(int64_t, 8) l_780 = (VECTOR(int64_t, 8))(0x23C0572ED5FD24BBL, (VECTOR(int64_t, 4))(0x23C0572ED5FD24BBL, (VECTOR(int64_t, 2))(0x23C0572ED5FD24BBL, 0x325F133F7266AEADL), 0x325F133F7266AEADL), 0x325F133F7266AEADL, 0x23C0572ED5FD24BBL, 0x325F133F7266AEADL);
        VECTOR(int64_t, 8) l_781 = (VECTOR(int64_t, 8))(0x353AA30E917D9A58L, (VECTOR(int64_t, 4))(0x353AA30E917D9A58L, (VECTOR(int64_t, 2))(0x353AA30E917D9A58L, 0L), 0L), 0L, 0x353AA30E917D9A58L, 0L);
        VECTOR(int64_t, 8) l_782 = (VECTOR(int64_t, 8))(0x417F5D11DCDCA015L, (VECTOR(int64_t, 4))(0x417F5D11DCDCA015L, (VECTOR(int64_t, 2))(0x417F5D11DCDCA015L, 0x6B8B9EDD8A2E8445L), 0x6B8B9EDD8A2E8445L), 0x6B8B9EDD8A2E8445L, 0x417F5D11DCDCA015L, 0x6B8B9EDD8A2E8445L);
        int i;
        for (i = 0; i < 8; i++)
            l_703[i] = (void*)0;
        if (p_39)
        { /* block id: 277 */
            int16_t l_707 = (-1L);
            VECTOR(int64_t, 4) l_724 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0x2B77AC6CAA75A06DL), 0x2B77AC6CAA75A06DL);
            VECTOR(int64_t, 8) l_729 = (VECTOR(int64_t, 8))(0x24E039621BE15A11L, (VECTOR(int64_t, 4))(0x24E039621BE15A11L, (VECTOR(int64_t, 2))(0x24E039621BE15A11L, 0x684165B44A2DEA83L), 0x684165B44A2DEA83L), 0x684165B44A2DEA83L, 0x24E039621BE15A11L, 0x684165B44A2DEA83L);
            int64_t *l_730[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_731 = 9L;
            VECTOR(int32_t, 2) l_733 = (VECTOR(int32_t, 2))(9L, 0x6C583CB8L);
            int8_t *l_741 = (void*)0;
            VECTOR(int8_t, 4) l_743 = (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), (-1L)), (-1L));
            uint16_t *l_748 = &l_704;
            int i;
            for (l_683 = 0; (l_683 >= 12); l_683++)
            { /* block id: 280 */
                uint16_t **l_695 = &p_1296->g_694;
                int16_t **l_696 = &l_673;
                uint32_t ***l_701[1];
                int32_t l_705 = (-1L);
                int32_t **l_706 = &p_1296->g_165;
                int i;
                for (i = 0; i < 1; i++)
                    l_701[i] = &p_1296->g_268;
                (*l_706) = func_67((l_705 = (l_704 = ((p_39 != (((*l_695) = p_1296->g_694) == ((((*l_696) = &p_1296->g_222) == (((VECTOR(int16_t, 2))(p_1296->g_697.xz)).hi , &p_1296->g_222)) , p_1296->g_698))) < (p_1296->g_650.y = ((safe_lshift_func_uint8_t_u_s((l_701[0] == ((l_702 != (void*)0) , l_701[0])), p_39)) >= p_39))))), p_1296);
                l_707 |= p_39;
                return &p_1296->g_269[1][0];
            }
            l_749 = (((safe_mod_func_int64_t_s_s((((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(0xD1L, (safe_mul_func_int8_t_s_s((p_39 || (safe_mul_func_int8_t_s_s((((VECTOR(int32_t, 4))(l_714.yxxy)).y , ((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(mad_hi(((VECTOR(uint8_t, 4))(((l_721[0] = 3UL) == (safe_sub_func_int64_t_s_s(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 2))(1L, 0x766E9C88E1006192L)).xxxxxxyyxyxxxyxy, ((VECTOR(int64_t, 16))(0L, 0x71199B2F423E4167L, ((VECTOR(int64_t, 2))(l_724.wx)), ((VECTOR(int64_t, 2))(l_725.xy)), l_725.x, ((VECTOR(int64_t, 4))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 8))(l_726.s13205616)).s43, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 8))(p_1296->g_727.yyxxxxyy)), ((VECTOR(int64_t, 4))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 4),((VECTOR(int64_t, 2))(p_1296->g_728.xy)).yxxx, ((VECTOR(int64_t, 16))(p_39, ((VECTOR(int64_t, 4))(l_729.s7537)), (l_731 = (0xC6A2L & p_39)), ((VECTOR(int64_t, 2))(0x39614B8EA3862938L, 1L)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(l_732.xwxwwxyzwxzwzxzw)).s0a74)), 0x53E19F5EF4D02C5AL, (((VECTOR(int32_t, 2))(l_733.yy)).hi , (safe_lshift_func_uint16_t_u_u(l_726.s4, (safe_unary_minus_func_int16_t_s((safe_rshift_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(hadd(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(1L, 0x66L)), ((VECTOR(int8_t, 2))(8L, 0x1EL)), 1L, (l_742 = (((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0x32L, 0x80L)).yyyxxyxxyyyyxxxx)).s77)))).even <= (safe_rshift_func_int8_t_s_s(((*p_1296->g_606) = l_725.y), (l_731 = ((VECTOR(int8_t, 2))(0x5EL, 0x45L)).even))))), 0x56L, 0x3FL)).even, ((VECTOR(int8_t, 8))(l_743.zxzyywyz)).hi))), 0x72L, ((((safe_mul_func_uint16_t_u_u(((*l_748) |= (safe_mod_func_uint64_t_u_u(((p_1296->g_413.z , 0x9AL) < p_1296->g_697.z), p_1296->g_196.s9))), 0L)) , 0x3E67A4A8L) < 0x772551D3L) , p_39), 0x03L, 1L))))))))).odd)), 0x2AL, 0x3DL, 0x0FL, ((VECTOR(int8_t, 8))(0x2EL)), 0x6FL)).se, 1))))))), 0x0755B955E56BB2A1L, 0x6FF795D2A6BB9479L)).s855d, ((VECTOR(int64_t, 4))(0L))))).wzyxywzw, ((VECTOR(int64_t, 8))((-1L)))))), p_39, p_39, ((VECTOR(int64_t, 2))(0L)), p_39, ((VECTOR(int64_t, 2))((-1L))), 2L)).s2f))), ((VECTOR(int64_t, 2))(0x5D3EBB8039D4A683L))))).yyxxxyyx)).lo, ((VECTOR(int64_t, 4))(0x75C9758D03E52F1AL))))), l_733.x, ((VECTOR(int64_t, 2))(0x7255051C500E7AD3L)), (-1L), 0x505963B3D6F0A8A4L))))).s5d64, ((VECTOR(int64_t, 4))(0x6964D08754C70B16L))))).w, 0x6EC402760D71F396L))), p_1296->g_181.x, 0UL, 0x3CL)).wzxywwzzywyxzxzy, ((VECTOR(uint8_t, 16))(0x85L)), ((VECTOR(uint8_t, 16))(0xFBL))))))).s4, l_724.z)), 8)), l_725.y)) , 9L)), 5UL))), 6UL)), ((VECTOR(uint8_t, 4))(0xA1L)), p_1296->g_348.s3, l_733.x, 0xCAL, ((VECTOR(uint8_t, 2))(2UL)), 0xA7L, p_1296->g_181.y, 0UL, 253UL, 0xCFL)).se6)).lo < 0L) & l_726.s7) > p_39), p_39)) || l_729.s4) > 0x25473F3FL);
        }
        else
        { /* block id: 297 */
            int32_t l_757 = 0x7F95C085L;
            uint8_t **l_764 = (void*)0;
            uint8_t l_773[10] = {1UL,7UL,1UL,1UL,7UL,1UL,1UL,7UL,1UL,1UL};
            uint16_t *l_778 = (void*)0;
            uint16_t *l_779 = (void*)0;
            int32_t *l_791 = &l_721[6];
            int i;
            for (p_1296->g_140 = 0; (p_1296->g_140 >= 8); p_1296->g_140 = safe_add_func_uint8_t_u_u(p_1296->g_140, 7))
            { /* block id: 300 */
                uint16_t *l_754[2];
                int32_t l_755 = 0x2F81CEB3L;
                int32_t l_756 = 0x1BA45BD1L;
                int64_t l_761 = (-8L);
                int32_t *l_763[5];
                int i;
                for (i = 0; i < 2; i++)
                    l_754[i] = (void*)0;
                for (i = 0; i < 5; i++)
                    l_763[i] = &l_756;
                l_749 = (((p_1296->g_181.y++) > (((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 2))(0x5CL, 0xB4L)), ((VECTOR(uint8_t, 16))(p_1296->g_760.s1ae88d8a30412e0c)).se9))).odd != l_755)) , (l_721[0] = ((&l_683 != (void*)0) <= l_761)));
                return &p_1296->g_269[0][1];
            }
            l_757 = (p_1296->g_11.w | (((*l_791) = (((p_1296->g_765 = &p_1296->g_233) == l_766) != ((**p_1296->g_268) = (((safe_sub_func_int16_t_s_s((p_1296->g_243.s2 = p_1296->g_386.sd), ((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))((safe_lshift_func_uint8_t_u_s((l_773[7] ^ (p_1296->g_181.y = (safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((*p_1296->g_606) = (*p_1296->g_606)), 6)), (-1L))))), 7)), ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 8))(safe_clamp_func(VECTOR(int64_t, 8),int64_t,((VECTOR(int64_t, 16))(sub_sat(((VECTOR(int64_t, 2))(mad_sat(((VECTOR(int64_t, 8))(l_780.s33051624)).s24, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(l_781.s4575046631501263)).s09, ((VECTOR(int64_t, 2))(0x0E7EBEEBF676A2DFL, 0x673548FD02FC5386L)), ((VECTOR(int64_t, 2))(0x59114CD0BAFB5FA9L, (-5L)))))), ((VECTOR(int64_t, 2))(0x7AB86B2A6EEB155CL, 0x1AC6FF8F26A08A7FL))))), 0L, 1L)).even, ((VECTOR(int64_t, 2))(l_782.s37))))).yxyyxxyxyyyxxyyx, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(0x2F0CD7D9BA6D6391L, (-1L), ((VECTOR(int64_t, 2))(p_1296->g_783.zx)), 0x042F3B8AABBF1F13L, 1L, ((VECTOR(int64_t, 2))(0x1EADCE9C2B6C093DL, (-1L))), ((safe_lshift_func_int8_t_s_s((+((safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(0xADEE523C01CAD269L, ((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(safe_clamp_func(VECTOR(int64_t, 16),int64_t,((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(p_1296->g_788.yzyx)).even)).yxyxxxxxyxxyyyyx, (int64_t)((((void*)0 != p_1296->g_789[0]) & 250UL) >= (-5L)), (int64_t)p_1296->g_414.s7))))))))).even))))).s1, ((VECTOR(uint64_t, 4))(18446744073709551615UL)), 0x42147E642D413413L, 18446744073709551615UL)).hi)).w, p_39)) == l_781.s5)), (*p_1296->g_606))) || p_39), 0x4401171E2E4A8073L, p_1296->g_140, 4L, 0x42C723BF97733494L, 0x099AC330DF3BA891L, (-4L), (-7L))).s2a)).yxyxyyxxyxyxxxyy))).lo, (int64_t)p_39, (int64_t)(-2L)))).hi)), p_1296->g_9.s7, 0x5C9222DBF207C322L, p_1296->g_414.s2, ((VECTOR(int64_t, 2))(0x0FA2CCD6BDBB613DL)), 0x43C48465B9E0A153L, 5L, ((VECTOR(int64_t, 4))(0x3DCA926C7CDCCEE0L)))).sc, p_1296->g_104.s0)) | GROUP_DIVERGE(0, 1)))) ^ l_773[7]) == 251UL)))) == (-1L)));
        }
        l_714.x = 8L;
    }
    else
    { /* block id: 315 */
        int32_t *l_792 = (void*)0;
        int32_t *l_793 = (void*)0;
        int32_t *l_794[3][1][1];
        int32_t l_797 = 0x39B2A242L;
        int32_t l_799 = 0x3A795DADL;
        uint16_t **l_821 = &p_1296->g_694;
        int64_t *l_837 = (void*)0;
        int64_t **l_836 = &l_837;
        int64_t ***l_835 = &l_836;
        int16_t l_839 = 0x516FL;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_794[i][j][k] = &l_683;
            }
        }
        l_800++;
        l_796[1] = p_39;
        for (p_1296->g_568 = 13; (p_1296->g_568 == 9); p_1296->g_568 = safe_sub_func_uint64_t_u_u(p_1296->g_568, 7))
        { /* block id: 320 */
            int32_t l_809 = 0x11E55E54L;
            int32_t l_810 = 1L;
            VECTOR(uint32_t, 16) l_816 = (VECTOR(uint32_t, 16))(0xFE3E2DD0L, (VECTOR(uint32_t, 4))(0xFE3E2DD0L, (VECTOR(uint32_t, 2))(0xFE3E2DD0L, 7UL), 7UL), 7UL, 0xFE3E2DD0L, 7UL, (VECTOR(uint32_t, 2))(0xFE3E2DD0L, 7UL), (VECTOR(uint32_t, 2))(0xFE3E2DD0L, 7UL), 0xFE3E2DD0L, 7UL, 0xFE3E2DD0L, 7UL);
            VECTOR(uint32_t, 4) l_817 = (VECTOR(uint32_t, 4))(0x7811C452L, (VECTOR(uint32_t, 2))(0x7811C452L, 2UL), 2UL);
            int64_t *l_832 = (void*)0;
            int64_t **l_831 = &l_832;
            int64_t ***l_830 = &l_831;
            int64_t l_838 = 0L;
            int i;
            for (l_683 = 0; (l_683 > (-2)); l_683--)
            { /* block id: 323 */
                int16_t l_807 = (-5L);
                int32_t l_808 = 0x230328D5L;
                int64_t ****l_833 = (void*)0;
                int64_t ****l_834 = &l_830;
                int32_t **l_840 = &p_1296->g_165;
                l_811[1][8][6]++;
                l_809 |= (((safe_div_func_int16_t_s_s((((p_39 , (((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(safe_mul24_func_uint32_t_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(l_816.sfdbd)).yxzxwyxw, ((VECTOR(uint32_t, 16))(l_817.yxzxwzxyxzwxxxxy)).hi))).even)).w == FAKE_DIVERGE(p_1296->global_1_offset, get_global_id(1), 10))) >= l_816.sc) >= (safe_mul_func_int16_t_s_s(((*l_673) ^= ((~(l_820 = 18446744073709551608UL)) == (p_39 , ((p_1296->g_503.x , l_821) == (void*)0)))), ((((safe_lshift_func_int8_t_s_u(p_39, 6)) < ((*p_1296->g_606) = (+(safe_sub_func_int64_t_s_s((safe_div_func_uint16_t_u_u(FAKE_DIVERGE(p_1296->local_0_offset, get_local_id(0), 10), (safe_add_func_int16_t_s_s(((((((*l_834) = l_830) == l_835) <= FAKE_DIVERGE(p_1296->global_2_offset, get_global_id(2), 10)) <= l_838) , p_39), 0L)))), p_1296->g_414.s9))))) || FAKE_DIVERGE(p_1296->local_1_offset, get_local_id(1), 10)) > (-9L))))), l_839)) >= p_39) > (-3L));
                (*l_840) = &l_683;
                l_682 |= p_39;
            }
        }
    }
    for (p_1296->g_566 = 15; (p_1296->g_566 == 44); p_1296->g_566 = safe_add_func_int32_t_s_s(p_1296->g_566, 8))
    { /* block id: 337 */
        int32_t **l_845 = &l_689;
        (*l_845) = func_67((safe_lshift_func_int8_t_s_u(p_39, 6)), p_1296);
        (*l_845) = (*l_845);
    }
    (*p_1296->g_850) = (p_1296->g_243.sf && (l_680[6][6][1] == (void*)0));
    (*p_1296->g_851) = &l_796[1];
    return &p_1296->g_269[0][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_1296->g_268 p_1296->g_269 p_1296->g_27 p_1296->g_414 p_1296->g_440 p_1296->g_243 p_1296->g_422 p_1296->g_11 p_1296->g_6 p_1296->g_125 p_1296->g_410 p_1296->g_5 p_1296->g_405 p_1296->g_492 p_1296->g_104 p_1296->g_175 p_1296->g_164 p_1296->g_165 p_1296->g_503 p_1296->g_504 p_1296->g_505 p_1296->g_98 p_1296->g_196 p_1296->g_7 p_1296->g_79 p_1296->g_181 p_1296->g_589 p_1296->g_179 p_1296->g_92 p_1296->g_570 p_1296->g_370 p_1296->g_212 p_1296->g_607 p_1296->g_222 p_1296->g_650
 * writes: p_1296->g_269 p_1296->g_125 p_1296->g_405 p_1296->g_165 p_1296->g_369 p_1296->g_27 p_1296->g_6 p_1296->g_179 p_1296->g_181 p_1296->g_370 p_1296->g_222 p_1296->g_605 p_1296->g_175
 */
int32_t  func_44(uint64_t  p_45, int64_t  p_46, int32_t * p_47, uint32_t ** p_48, struct S0 * p_1296)
{ /* block id: 147 */
    VECTOR(uint32_t, 8) l_439 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL);
    VECTOR(int16_t, 16) l_441 = (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0L), 0L), 0L, (-9L), 0L, (VECTOR(int16_t, 2))((-9L), 0L), (VECTOR(int16_t, 2))((-9L), 0L), (-9L), 0L, (-9L), 0L);
    VECTOR(int16_t, 16) l_444 = (VECTOR(int16_t, 16))(0x04C3L, (VECTOR(int16_t, 4))(0x04C3L, (VECTOR(int16_t, 2))(0x04C3L, (-1L)), (-1L)), (-1L), 0x04C3L, (-1L), (VECTOR(int16_t, 2))(0x04C3L, (-1L)), (VECTOR(int16_t, 2))(0x04C3L, (-1L)), 0x04C3L, (-1L), 0x04C3L, (-1L));
    VECTOR(int16_t, 8) l_447 = (VECTOR(int16_t, 8))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, (-10L)), (-10L)), (-10L), 8L, (-10L));
    VECTOR(int16_t, 16) l_448 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int16_t, 2))(0L, 0L), (VECTOR(int16_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
    int32_t *l_453 = (void*)0;
    int32_t *l_454 = &p_1296->g_125;
    VECTOR(int8_t, 16) l_465 = (VECTOR(int8_t, 16))(0x6DL, (VECTOR(int8_t, 4))(0x6DL, (VECTOR(int8_t, 2))(0x6DL, 0x0EL), 0x0EL), 0x0EL, 0x6DL, 0x0EL, (VECTOR(int8_t, 2))(0x6DL, 0x0EL), (VECTOR(int8_t, 2))(0x6DL, 0x0EL), 0x6DL, 0x0EL, 0x6DL, 0x0EL);
    VECTOR(int8_t, 16) l_466 = (VECTOR(int8_t, 16))(0x64L, (VECTOR(int8_t, 4))(0x64L, (VECTOR(int8_t, 2))(0x64L, 0L), 0L), 0L, 0x64L, 0L, (VECTOR(int8_t, 2))(0x64L, 0L), (VECTOR(int8_t, 2))(0x64L, 0L), 0x64L, 0L, 0x64L, 0L);
    VECTOR(int8_t, 4) l_467 = (VECTOR(int8_t, 4))(4L, (VECTOR(int8_t, 2))(4L, 0x74L), 0x74L);
    VECTOR(int8_t, 16) l_468 = (VECTOR(int8_t, 16))(0x28L, (VECTOR(int8_t, 4))(0x28L, (VECTOR(int8_t, 2))(0x28L, 0x7CL), 0x7CL), 0x7CL, 0x28L, 0x7CL, (VECTOR(int8_t, 2))(0x28L, 0x7CL), (VECTOR(int8_t, 2))(0x28L, 0x7CL), 0x28L, 0x7CL, 0x28L, 0x7CL);
    VECTOR(uint32_t, 16) l_490 = (VECTOR(uint32_t, 16))(0x1E914F3DL, (VECTOR(uint32_t, 4))(0x1E914F3DL, (VECTOR(uint32_t, 2))(0x1E914F3DL, 0xDA48ACD9L), 0xDA48ACD9L), 0xDA48ACD9L, 0x1E914F3DL, 0xDA48ACD9L, (VECTOR(uint32_t, 2))(0x1E914F3DL, 0xDA48ACD9L), (VECTOR(uint32_t, 2))(0x1E914F3DL, 0xDA48ACD9L), 0x1E914F3DL, 0xDA48ACD9L, 0x1E914F3DL, 0xDA48ACD9L);
    int32_t *l_528[1];
    VECTOR(int32_t, 8) l_539 = (VECTOR(int32_t, 8))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x5DBE7C7EL), 0x5DBE7C7EL), 0x5DBE7C7EL, 2L, 0x5DBE7C7EL);
    int16_t l_540 = 0x1110L;
    uint32_t l_600[8][3][2] = {{{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L}},{{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L}},{{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L}},{{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L}},{{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L}},{{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L}},{{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L}},{{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L},{4294967292UL,0xBE0410B7L}}};
    int8_t **l_603 = (void*)0;
    VECTOR(int32_t, 16) l_615 = (VECTOR(int32_t, 16))(0x6949A19CL, (VECTOR(int32_t, 4))(0x6949A19CL, (VECTOR(int32_t, 2))(0x6949A19CL, 0x6039BC21L), 0x6039BC21L), 0x6039BC21L, 0x6949A19CL, 0x6039BC21L, (VECTOR(int32_t, 2))(0x6949A19CL, 0x6039BC21L), (VECTOR(int32_t, 2))(0x6949A19CL, 0x6039BC21L), 0x6949A19CL, 0x6039BC21L, 0x6949A19CL, 0x6039BC21L);
    int32_t ***l_637 = &p_1296->g_557[8][2];
    int8_t *l_639[1];
    uint32_t ***l_647[2];
    int64_t *l_656 = &p_1296->g_228;
    int64_t **l_655 = &l_656;
    int64_t ***l_657 = &l_655;
    int64_t **l_660 = &l_656;
    int64_t ***l_659 = &l_660;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_528[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_639[i] = (void*)0;
    for (i = 0; i < 2; i++)
        l_647[i] = &p_1296->g_268;
    (*l_454) &= (safe_add_func_int8_t_s_s((((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(0x552CL, 9L, 0x3D99L, (safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_439.s1661562020461724)).s5d)).hi, (**p_1296->g_268))), p_1296->g_414.s5, ((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 4))(p_1296->g_440.s0975)), ((VECTOR(int16_t, 2))(9L, 8L)).xyxx))).lo))), 0x5A6DL, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_441.safac)).lo)), ((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(0x22A0L, 0x4BC5L)))), 0x1360L, (-1L), 7L, (((p_45 , GROUP_DIVERGE(2, 1)) | (safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 4))(l_444.sf31d)).zzxwxywzywwzxwyx, (int16_t)(safe_mul_func_uint8_t_u_u((((*p_1296->g_268) = (*p_48)) != (void*)0), 0x88L))))).s15, ((VECTOR(int16_t, 4))(l_447.s0654)).lo))))).yxyyxyxx, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_448.sf4)).xyxxxyxx))))).odd, ((VECTOR(int16_t, 2))(1L, 0x0AE1L)).xyyy))).z, (~((VECTOR(uint16_t, 16))(5UL, (safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((((((!(p_46 > ((VECTOR(uint8_t, 4))(FAKE_DIVERGE(p_1296->local_1_offset, get_local_id(1), 10), 254UL, 0x08L, 0xE6L)).x)) | ((0x4131L <= 2UL) == 0x53L)) == p_46) || p_45) != p_45), p_1296->g_243.s6)) ^ 0UL), 0xE3L)), GROUP_DIVERGE(0, 1), 0x6BE3L, 65527UL, p_1296->g_422.s0, 0xF5FFL, p_45, 0x086AL, ((VECTOR(uint16_t, 2))(0x8E15L)), 0xD9B2L, l_441.s6, p_45, 0xC8F2L, 0UL)).s6)))) ^ p_1296->g_11.w), (-1L), 0x400AL)), ((VECTOR(int16_t, 8))(0x57EFL))))).hi, ((VECTOR(int16_t, 4))((-6L)))))), 0x2802L, 0L)).s02d0)).z < p_1296->g_6.s6), 0x72L));
    if (((safe_div_func_uint8_t_u_u((((*l_454) == (((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((p_46 && p_1296->g_410.y), ((*l_454) , (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 4))(l_465.sf00b)).even, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_466.sbf8956b9)).s1464272662474237)).s14))))).yxxxyyyx)).s75, ((VECTOR(int8_t, 8))(l_467.wwzyxzww)).s67, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_468.sf3)), 0x2CL, 1L)).even))).even >= ((((((safe_mod_func_int64_t_s_s((0UL == 0x01951E72DBE2B603L), (safe_div_func_int64_t_s_s((*l_454), p_1296->g_414.s4)))) && p_46) | (-6L)) , &l_454) == &p_47) <= p_1296->g_5.y)), 4)), 0L))))), 8UL)) | 0x40E521611C5A6D94L) , (*l_454))) | 0x426D6BB7L), p_46)) | (*l_454)))
    { /* block id: 150 */
        uint32_t l_477 = 0x50C4C096L;
        uint32_t l_478 = 0x01C551F6L;
        VECTOR(int32_t, 4) l_483 = (VECTOR(int32_t, 4))(0x4E0E6CCAL, (VECTOR(int32_t, 2))(0x4E0E6CCAL, 0x15428825L), 0x15428825L);
        VECTOR(int32_t, 16) l_502 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 4L), 4L), 4L, 1L, 4L, (VECTOR(int32_t, 2))(1L, 4L), (VECTOR(int32_t, 2))(1L, 4L), 1L, 4L, 1L, 4L);
        int32_t *l_510 = (void*)0;
        uint32_t **l_525 = &p_1296->g_269[0][1];
        int16_t *l_533 = (void*)0;
        int16_t *l_534 = &p_1296->g_222;
        uint32_t *l_536 = (void*)0;
        uint32_t **l_535 = &l_536;
        int32_t **l_541 = &l_510;
        int32_t **l_542 = &l_528[0];
        int64_t *l_564 = (void*)0;
        uint16_t l_610 = 65535UL;
        int32_t *l_614 = (void*)0;
        int i;
        for (p_1296->g_405 = 0; (p_1296->g_405 < (-11)); p_1296->g_405 = safe_sub_func_int8_t_s_s(p_1296->g_405, 9))
        { /* block id: 153 */
            int32_t **l_475 = &p_1296->g_165;
            int32_t **l_476[9];
            uint32_t **l_523[7];
            int i;
            for (i = 0; i < 9; i++)
                l_476[i] = (void*)0;
            for (i = 0; i < 7; i++)
                l_523[i] = &p_1296->g_269[0][1];
            p_47 = ((*l_475) = p_47);
            if ((!l_477))
            { /* block id: 156 */
                (*l_475) = p_47;
                (*l_454) &= l_478;
                if (l_477)
                    continue;
            }
            else
            { /* block id: 160 */
                uint8_t l_491 = 4UL;
                int8_t *l_495 = (void*)0;
                int8_t *l_496 = &p_1296->g_369;
                uint32_t *l_497 = (void*)0;
                uint16_t *l_498[9][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
                int32_t l_499 = (-9L);
                int32_t l_527[1][7] = {{1L,1L,1L,1L,1L,1L,1L}};
                int i, j;
                (*l_454) &= p_46;
                if (p_45)
                    continue;
                l_499 = (safe_sub_func_uint32_t_u_u(((((p_1296->g_181.x = (((safe_sub_func_uint32_t_u_u((**p_48), l_477)) || ((p_1296->g_179.y = ((((VECTOR(int32_t, 2))(l_483.zx)).even , func_67((safe_mul_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(p_46, ((((safe_div_func_uint8_t_u_u((((((VECTOR(uint32_t, 2))(l_490.s5a)).lo , (l_491 , func_67((((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 2))(4L, (-3L))).yyxyyyxyyyyxyxyy, ((VECTOR(int16_t, 4))(p_1296->g_492.sc293)).wyywxxxyzzzxyxyx))).s1 <= (safe_div_func_int8_t_s_s(((*l_496) = (((**p_48) > (**p_48)) , 0x70L)), p_45))), p_1296))) == l_497) > 65531UL), l_477)) , p_45) , (void*)0) == &p_1296->g_228))) , 0L), (*l_454))), p_1296)) != (void*)0)) != l_491)) < p_45)) <= l_491) , p_46) | 0x11L), l_483.y));
                for (p_1296->g_125 = 0; (p_1296->g_125 <= 16); p_1296->g_125++)
                { /* block id: 169 */
                    int8_t l_517 = 0x3DL;
                    if (l_499)
                    { /* block id: 170 */
                        (*l_475) = &l_499;
                        if (l_499)
                            continue;
                        if ((*l_454))
                            continue;
                        if (p_46)
                            continue;
                    }
                    else
                    { /* block id: 175 */
                        int64_t *l_515 = (void*)0;
                        int64_t *l_516[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        VECTOR(int8_t, 2) l_518 = (VECTOR(int8_t, 2))(0x19L, 0x0CL);
                        uint32_t ***l_524[8][5][6] = {{{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]}},{{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]}},{{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]}},{{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]}},{{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]}},{{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]}},{{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]}},{{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]},{&p_1296->g_268,&l_523[2],&p_1296->g_268,(void*)0,&p_1296->g_268,&l_523[5]}}};
                        int32_t l_526 = 0L;
                        int i, j, k;
                        atomic_or(&p_1296->l_atomic_reduction[0], ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_502.s2eb7)).wwxzywzw)), ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 4))(add_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 8))(rhadd(((VECTOR(int32_t, 8))(0L, 0L, 0x54CF4DD7L, ((VECTOR(int32_t, 2))((-2L), 0x5DFB355AL)), ((VECTOR(int32_t, 2))(p_1296->g_503.yz)), (-1L))), ((VECTOR(int32_t, 2))(p_1296->g_504.yx)).xxyyxyxx))), ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x5F3DBC0FL, 2L)), 0x0F772194L, 0x46E0F800L)), ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(p_1296->g_505.s30330809)).s06, ((VECTOR(int32_t, 4))(sub_sat(((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((void*)0 == l_510), ((safe_lshift_func_int8_t_s_s(((VECTOR(int8_t, 4))(0x4BL, ((VECTOR(int8_t, 16))((((safe_sub_func_int64_t_s_s((-6L), p_46)) > (p_1296->g_370.s7 = 3L)) , ((*l_496) = l_517)), ((VECTOR(int8_t, 2))(l_518.xy)), ((VECTOR(int8_t, 4))(6L, (((((l_526 = (((safe_lshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s((GROUP_DIVERGE(2, 1) < p_46), ((((l_525 = l_523[2]) == (void*)0) == l_491) , GROUP_DIVERGE(2, 1)))), 12)) == p_1296->g_98.x) <= p_1296->g_196.sb)) < 0L) ^ p_1296->g_7.s7) != p_45) || p_45), 0x1FL, 0x5EL)), ((VECTOR(int8_t, 8))((-5L))), 0x78L)).s6, 2L, (-7L))).z, l_518.x)) , 9UL))), p_1296->g_7.sd)) || FAKE_DIVERGE(p_1296->global_1_offset, get_global_id(1), 10)), 3L, 0x43E7A56EL, 0x57B54B75L)).xxwyyywyyxxwzyzx)), (int32_t)p_45))), ((VECTOR(int32_t, 16))((-7L))), ((VECTOR(int32_t, 16))(0x0A0189A8L))))).sa8c5, ((VECTOR(int32_t, 4))(1L))))).hi, ((VECTOR(int32_t, 2))(0x4173825CL))))).xxyx))).wwyzwwxx, ((VECTOR(int32_t, 8))((-5L)))))).s7372053314165662)).hi, ((VECTOR(int32_t, 8))((-3L))), ((VECTOR(int32_t, 8))(0x1B524519L))))))), (int32_t)l_527[0][0], (int32_t)l_527[0][0]))))), ((VECTOR(int32_t, 8))(0x1CFF8ACFL))))).odd, ((VECTOR(int32_t, 4))(0x5F9A7BFFL))))).yzwxyxzy)).odd, ((VECTOR(int32_t, 4))(0x7F6DCC7BL))))).even)).yyxx, ((VECTOR(int32_t, 4))(6L))))).lo, ((VECTOR(int32_t, 2))(8L))))), 1L, 1L)).zxwxxxzyzzwxyxxz, ((VECTOR(int32_t, 16))(0x71CC9824L))))).odd))).s22, ((VECTOR(int32_t, 2))((-1L)))))).lo);
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                        if (get_linear_local_id() == 0)
                            p_1296->v_collective += p_1296->l_atomic_reduction[0];
                        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                    }
                    (*p_1296->g_164) = p_47;
                }
            }
            (*l_475) = l_528[0];
        }
        if ((safe_add_func_int16_t_s_s((((*l_542) = ((*l_541) = func_67((FAKE_DIVERGE(p_1296->global_2_offset, get_global_id(2), 10) , ((safe_mod_func_int8_t_s_s(((((((*p_1296->g_268) != ((*l_535) = (FAKE_DIVERGE(p_1296->local_1_offset, get_local_id(1), 10) , func_67(((*l_534) = (-10L)), p_1296)))) >= p_46) < (safe_lshift_func_uint16_t_u_u((p_1296->g_79.s1 & (((VECTOR(int32_t, 4))(l_539.s0224)).x && p_45)), 10))) , (p_48 == (void*)0)) == 0L), l_540)) != 0xECDB26DBL)), p_1296))) == p_47), p_1296->g_414.s0)))
        { /* block id: 191 */
            (*l_454) &= (((*l_534) = ((safe_mul_func_uint16_t_u_u(p_46, (-7L))) , 0x2DB6L)) || 0xB626L);
        }
        else
        { /* block id: 194 */
            uint32_t l_571[10] = {0xE966114DL,0xE966114DL,0xE966114DL,0xE966114DL,0xE966114DL,0xE966114DL,0xE966114DL,0xE966114DL,0xE966114DL,0xE966114DL};
            int32_t *l_592[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_599 = 0x7E89724EL;
            uint16_t l_613 = 65535UL;
            int i;
            for (l_477 = (-22); (l_477 != 57); ++l_477)
            { /* block id: 197 */
                int32_t ***l_555 = (void*)0;
                int32_t ***l_556[5] = {&l_541,&l_541,&l_541,&l_541,&l_541};
                uint64_t *l_565 = &p_1296->g_566;
                uint64_t *l_567 = &p_1296->g_568;
                int64_t *l_569 = (void*)0;
                int i;
                if ((((safe_div_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(0UL, 0UL, 1UL, 4294967295UL, ((((safe_mul_func_int8_t_s_s(((((p_1296->g_comm_values[p_1296->tid] = (safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), ((p_46 | ((p_45 > ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),uint16_t,((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((p_1296->g_557[4][2] = &p_47) != (((*l_567) ^= ((*l_565) &= (((0x7F9EL | p_1296->g_9.s1) > ((p_1296->g_6.s6 != ((safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((((**p_48) >= ((p_1296->g_228 ^= (GROUP_DIVERGE(1, 1) | (p_1296->g_104.s2 | (safe_div_func_int8_t_s_s(((void*)0 != l_564), p_45))))) > p_46)) == p_1296->g_98.y), p_1296->g_369)), 7UL)) , 65535UL)) , p_46)) == 0xB437L))) , (void*)0)), 0x89D3L, 1UL, 65532UL)).zxywzwwyxzwwyxxz)), (uint16_t)p_1296->g_196.sd, (uint16_t)p_46))).s17b7)).yyzyyywy)).s2) < p_45)) && 0UL)))) < p_46) , p_1296->g_570[0][0]) || 0x00L), 0x06L)) && 0x7AL) , p_1296->g_92.s2) , l_571[1]), FAKE_DIVERGE(p_1296->local_0_offset, get_local_id(0), 10), 1UL, 9UL)))).s2, l_571[6])) > 0x0AL) >= l_571[1]))
                { /* block id: 203 */
                    VECTOR(int32_t, 8) l_574 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x08097E1EL), 0x08097E1EL), 0x08097E1EL, 0L, 0x08097E1EL);
                    uint8_t *l_590[6];
                    int32_t *l_591[1][5] = {{&p_1296->g_405,&p_1296->g_405,&p_1296->g_405,&p_1296->g_405,&p_1296->g_405}};
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_590[i] = &p_1296->g_233;
                    if (((safe_lshift_func_int16_t_s_s(0L, (((VECTOR(int32_t, 4))(l_574.s7413)).y | (safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u((p_1296->g_181.x <= (l_574.s3 >= (((~p_45) < (((**p_1296->g_268) & (!(safe_mul_func_uint16_t_u_u(((((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(((*l_454) |= (GROUP_DIVERGE(2, 1) < (((((void*)0 != &p_45) & (((safe_sub_func_int16_t_s_s((safe_mod_func_int16_t_s_s(((0UL ^ (((safe_mod_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((((VECTOR(int64_t, 16))(p_1296->g_589.s7721604350355154)).s9 >= (&p_1296->g_233 != l_590[1])), p_46)), (-8L))) == p_45) ^ 1UL)) | 0xF94FF3F0L), p_1296->g_179.x)), 7L)) ^ p_45) <= 0x02L)) , (void*)0) != &p_1296->g_165))), ((VECTOR(int32_t, 4))(0x7AE71FC0L)), p_1296->g_92.s4, 0x1018BFE8L, p_1296->g_410.x, ((VECTOR(int32_t, 4))(0x0439E718L)), p_46, p_1296->g_570[0][0], 0x000303EDL, 0x31C3A1BDL)).s0a46, ((VECTOR(int32_t, 4))(0L))))).y , (void*)0) != &l_528[0]), p_1296->g_370.s7)))) < l_574.s5)) , (**p_48)))), FAKE_DIVERGE(p_1296->group_1_offset, get_group_id(1), 10))), 0))))) , 0x15CF84AFL))
                    { /* block id: 205 */
                        (*p_1296->g_212) = (*l_542);
                        if (l_571[1])
                            continue;
                    }
                    else
                    { /* block id: 208 */
                        l_592[6] = p_47;
                    }
                    if ((atomic_inc(&p_1296->l_atomic_input[0]) == 0))
                    { /* block id: 212 */
                        uint32_t l_593 = 1UL;
                        int32_t *l_594 = (void*)0;
                        int32_t *l_595 = (void*)0;
                        VECTOR(int32_t, 4) l_597 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L);
                        int32_t *l_596 = (void*)0;
                        int32_t *l_598 = (void*)0;
                        int i;
                        l_595 = (l_593 , l_594);
                        l_598 = l_596;
                        unsigned int result = 0;
                        result += l_593;
                        result += l_597.w;
                        result += l_597.z;
                        result += l_597.y;
                        result += l_597.x;
                        atomic_add(&p_1296->l_special_values[0], result);
                    }
                    else
                    { /* block id: 215 */
                        (1 + 1);
                    }
                    l_600[5][2][1]++;
                }
                else
                { /* block id: 219 */
                    (*p_1296->g_607) = l_603;
                }
                (*l_454) = p_45;
                for (p_1296->g_175 = 0; (p_1296->g_175 <= 18); p_1296->g_175 = safe_add_func_uint16_t_u_u(p_1296->g_175, 6))
                { /* block id: 225 */
                    if (l_610)
                        break;
                    for (p_1296->g_222 = 0; (p_1296->g_222 >= (-4)); p_1296->g_222 = safe_sub_func_int8_t_s_s(p_1296->g_222, 1))
                    { /* block id: 229 */
                        (*l_542) = (void*)0;
                    }
                    return p_45;
                }
            }
            (*l_454) = l_613;
        }
        l_528[0] = l_614;
    }
    else
    { /* block id: 238 */
        uint64_t l_616 = 0x6E21F3381FBCB653L;
        int8_t *l_638 = (void*)0;
        uint32_t ***l_646 = &p_1296->g_268;
        uint32_t ****l_645[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_645[i] = &l_646;
        l_616 = ((VECTOR(int32_t, 8))(l_615.s679c5268)).s4;
        if ((atomic_inc(&p_1296->l_atomic_input[1]) == 2))
        { /* block id: 241 */
            int32_t l_617 = 0L;
            int32_t *l_636 = &l_617;
            for (l_617 = 2; (l_617 < 14); l_617 = safe_add_func_int64_t_s_s(l_617, 4))
            { /* block id: 244 */
                uint64_t l_620 = 0x1874EA3E4E7249FCL;
                uint16_t l_621 = 0UL;
                uint16_t l_622 = 0xA289L;
                int32_t l_623 = 0x54B0CD47L;
                int32_t l_625 = 0x01A2656AL;
                int32_t *l_624 = &l_625;
                int32_t *l_626[3];
                int32_t *l_627 = &l_625;
                int32_t l_628 = 0L;
                int32_t l_629 = 0x21BF23D4L;
                uint32_t l_630 = 0xDF48808FL;
                int32_t l_631 = (-5L);
                int32_t l_632 = 4L;
                uint16_t l_633 = 0x7BDBL;
                int i;
                for (i = 0; i < 3; i++)
                    l_626[i] = &l_625;
                l_627 = (l_626[0] = (l_624 = ((l_623 = (l_620 , (l_622 |= (l_621 , 7L)))) , (void*)0)));
                l_629 ^= l_628;
                l_630 = 0x7F7B220AL;
                --l_633;
            }
            l_636 = (void*)0;
            unsigned int result = 0;
            result += l_617;
            atomic_add(&p_1296->l_special_values[1], result);
        }
        else
        { /* block id: 255 */
            (1 + 1);
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1296->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 83)), permutations[(safe_mod_func_uint32_t_u_u((p_1296->g_414.s3 , ((p_46 , ((l_647[0] = (((l_637 = l_637) != (((((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551615UL)).yxxxyyxy)).s4 , ((l_638 == l_639[0]) , (safe_unary_minus_func_uint8_t_u(((l_616 && (safe_sub_func_uint8_t_u_u(0x62L, ((FAKE_DIVERGE(p_1296->group_2_offset, get_group_id(2), 10) < (l_616 > (p_1296->g_6.s1 && 0xFD74L))) < (*l_454))))) | p_46))))) & (**p_48)) , &p_1296->g_172)) , &p_48)) == (void*)0)) , (**p_48))), 10))][(safe_mod_func_uint32_t_u_u(p_1296->tid, 83))]));
    }
    (*l_659) = ((safe_mod_func_uint64_t_u_u(((VECTOR(uint64_t, 16))(p_1296->g_650.xxyyyxxyyxxyyyxx)).s2, (((safe_mul_func_int8_t_s_s(1L, 0xE0L)) > (safe_div_func_uint64_t_u_u(GROUP_DIVERGE(2, 1), 1UL))) || p_45))) , ((*l_657) = l_655));
    (*l_454) |= 0x1EBA8847L;
    return p_45;
}


/* ------------------------------------------ */
/* 
 * reads : p_1296->g_348 p_1296->g_349 p_1296->g_268 p_1296->g_269 p_1296->g_27 p_1296->g_369 p_1296->g_370 p_1296->g_140 p_1296->g_283 p_1296->g_104 p_1296->g_222 p_1296->g_6 p_1296->g_386 p_1296->g_196 p_1296->g_179 p_1296->g_243 p_1296->g_405 p_1296->l_comm_values p_1296->g_410 p_1296->g_413 p_1296->g_414 p_1296->g_415 p_1296->g_11 p_1296->g_422
 * writes: p_1296->g_27 p_1296->g_79 p_1296->g_369 p_1296->g_370 p_1296->g_175 p_1296->g_179 p_1296->g_181 p_1296->g_405
 */
int8_t  func_50(int16_t  p_51, uint64_t  p_52, uint32_t ** p_53, uint32_t * p_54, struct S0 * p_1296)
{ /* block id: 129 */
    int64_t l_341 = 0x0786122984D524F1L;
    VECTOR(uint8_t, 2) l_356 = (VECTOR(uint8_t, 2))(0xCAL, 255UL);
    VECTOR(uint16_t, 16) l_361 = (VECTOR(uint16_t, 16))(0xB852L, (VECTOR(uint16_t, 4))(0xB852L, (VECTOR(uint16_t, 2))(0xB852L, 0x33D5L), 0x33D5L), 0x33D5L, 0xB852L, 0x33D5L, (VECTOR(uint16_t, 2))(0xB852L, 0x33D5L), (VECTOR(uint16_t, 2))(0xB852L, 0x33D5L), 0xB852L, 0x33D5L, 0xB852L, 0x33D5L);
    int32_t l_362 = 0x086C669DL;
    int8_t *l_363 = (void*)0;
    int8_t *l_364 = (void*)0;
    int8_t *l_365 = (void*)0;
    int8_t *l_366 = (void*)0;
    int8_t *l_367 = (void*)0;
    int8_t *l_368 = &p_1296->g_369;
    uint64_t *l_371 = (void*)0;
    uint64_t *l_372 = &p_1296->g_175;
    VECTOR(int32_t, 4) l_375 = (VECTOR(int32_t, 4))(0x17D30F8CL, (VECTOR(int32_t, 2))(0x17D30F8CL, 0L), 0L);
    uint16_t *l_397 = (void*)0;
    uint16_t *l_398 = (void*)0;
    uint16_t *l_399 = (void*)0;
    uint16_t *l_400 = (void*)0;
    uint16_t *l_401 = (void*)0;
    uint16_t *l_402 = (void*)0;
    uint16_t *l_403 = (void*)0;
    uint64_t l_404 = 1UL;
    VECTOR(uint32_t, 2) l_416 = (VECTOR(uint32_t, 2))(2UL, 0UL);
    VECTOR(uint32_t, 2) l_417 = (VECTOR(uint32_t, 2))(1UL, 1UL);
    VECTOR(uint32_t, 2) l_418 = (VECTOR(uint32_t, 2))(0UL, 0x87225E02L);
    VECTOR(int64_t, 8) l_421 = (VECTOR(int64_t, 8))(0x29461080B7E39FFCL, (VECTOR(int64_t, 4))(0x29461080B7E39FFCL, (VECTOR(int64_t, 2))(0x29461080B7E39FFCL, (-9L)), (-9L)), (-9L), 0x29461080B7E39FFCL, (-9L));
    uint32_t *l_423 = &p_1296->g_27;
    VECTOR(int64_t, 8) l_424 = (VECTOR(int64_t, 8))(4L, (VECTOR(int64_t, 4))(4L, (VECTOR(int64_t, 2))(4L, 0x0E869EB95906845AL), 0x0E869EB95906845AL), 0x0E869EB95906845AL, 4L, 0x0E869EB95906845AL);
    VECTOR(int64_t, 2) l_425 = (VECTOR(int64_t, 2))(1L, 0x4C0A0851C7AA1577L);
    uint32_t l_432 = 0x4502B8F4L;
    int32_t *l_433 = (void*)0;
    int i;
    l_375.w = (((safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_s(0x52L, 6)) , ((*l_372) = ((((GROUP_DIVERGE(0, 1) < l_341) < ((p_1296->g_370.s5 |= (((safe_sub_func_int32_t_s_s((safe_mod_func_int64_t_s_s((safe_mod_func_int32_t_s_s((l_341 & (p_52 | l_341)), ((VECTOR(uint32_t, 8))(p_1296->g_348.s26124242)).s7)), ((((((VECTOR(uint8_t, 16))(p_1296->g_349.s7727323647062064)).s7 | (p_54 == (void*)0)) , (safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((*l_368) &= (p_1296->g_79.s8 = (safe_lshift_func_uint16_t_u_u((((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(0x14L, 0x5FL)).xxxxxxxyyxxxxyxx, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_356.yyyxxyxy)).even)).zyxyxyyzwzwxzwwz))).even)))).lo))).x , (safe_mul_func_int8_t_s_s(1L, ((((VECTOR(int16_t, 2))(0x72B8L, (-6L))).lo , (--(**p_1296->g_268))) == (l_362 = (((VECTOR(uint16_t, 4))(l_361.sac11)).x | (((+p_52) , p_51) >= l_356.x))))))), FAKE_DIVERGE(p_1296->local_2_offset, get_local_id(2), 10))))), l_356.x)), 0xC8A00150L))) <= 1UL) , l_341))), 0L)) >= l_356.x) <= FAKE_DIVERGE(p_1296->local_0_offset, get_local_id(0), 10))) == 0x57L)) == p_52) >= p_1296->g_140))), p_1296->g_283.s7)), p_51)) != 65535UL) || p_1296->g_104.s0);
    l_362 |= (p_1296->g_222 > ((p_52 && (p_1296->g_369 ^= l_361.s6)) , (safe_div_func_uint64_t_u_u((p_1296->g_6.s4 | (&p_1296->g_369 == l_366)), (safe_sub_func_uint16_t_u_u((p_1296->g_405 ^= (safe_rshift_func_uint8_t_u_s((((safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(p_1296->g_386.s11)).hi, 18446744073709551611UL)), (l_375.w ^= (safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((l_361.sb == (p_1296->g_181.y = (p_1296->g_179.y |= ((safe_rshift_func_int16_t_s_u((((*l_368) = (safe_mod_func_uint64_t_u_u((l_356.y != 0x5E8BFD0AA506325FL), 18446744073709551614UL))) == p_1296->g_196.s2), 14)) != l_361.s1)))) < p_1296->g_243.s0), p_52)), p_52)), l_404))))) <= 0x02E538EF27D77C0FL) != l_404), p_52))), p_1296->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1296->tid, 83))]))))));
    l_375.w = (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(mul_hi(((VECTOR(uint32_t, 2))(p_1296->g_410.xy)), ((VECTOR(uint32_t, 8))((safe_lshift_func_int16_t_s_u(((((((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(mad_sat(((VECTOR(uint32_t, 16))(p_1296->g_413.wyxzyzxxxzxwwzwy)).se4, ((VECTOR(uint32_t, 4))(1UL, 4UL, 0x682CF4E9L, 4294967292UL)).even, ((VECTOR(uint32_t, 4))(sub_sat(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(safe_clamp_func(VECTOR(uint32_t, 16),VECTOR(uint32_t, 16),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))(p_1296->g_414.s7981bcec)).odd)).wzzzywwzwxxwywww, ((VECTOR(uint32_t, 16))(p_1296->g_415.s12121ff8510db3ca)), ((VECTOR(uint32_t, 2))(l_416.xx)).yxyxxxyyxyxxxyyx))).s5b)).xyxy, ((VECTOR(uint32_t, 16))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_417.yx)).yxyxyyxx)).s4360533373340417, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_418.xy)).yyyxyxxy)).s6405756226002206, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 4))(abs(((VECTOR(int32_t, 16))((((((*l_368) &= 0x13L) <= (safe_mul_func_uint16_t_u_u(p_1296->g_11.x, (((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 8))(0L, 0x5F13AFF845CD436BL, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 8))(l_421.s03361003)).s01, ((VECTOR(int64_t, 8))((-4L), 0L, 0x425BB62341F96CBDL, 0x1B7FC4CAE8720D5BL, ((VECTOR(int64_t, 4))(p_1296->g_422.s0416)))).s62))), (l_423 == (*p_1296->g_268)), 0x3EEF292DE6B79C51L, 0x6C8A5133EA072E6FL, 0x30C2AA728D905983L)).s5141623735737723, ((VECTOR(int64_t, 8))(l_424.s11307626)).s7236721022550756))).odd, ((VECTOR(int64_t, 4))((-8L), ((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),int64_t,((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 2))(l_425.yx)), (int64_t)(safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(1UL, 0x41L)), ((((safe_div_func_uint64_t_u_u((0x077EBAD1L != (-4L)), l_417.x)) <= l_425.y) < 0xBB00E7C497983858L) , 9L)))))).xyyyxxxxxyyyyyxx)).sb7, (int64_t)0x7305E0515BC77D33L, (int64_t)p_52))), 0x071125067DC0E57DL)).yzzyzwww, ((VECTOR(int64_t, 8))(0x58146954A7FEDD17L))))), ((VECTOR(int64_t, 8))(0x1A2C8A0D642B21CBL))))).s2 & l_432)))) != p_1296->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1296->tid, 83))]) , l_356.y), p_52, 0L, 0x6BC46E08L, 0x4DB6751EL, ((VECTOR(int32_t, 8))(0x77B36FF8L)), 0x05D57CABL, 1L, 0x54FC97C9L)).s12f7))).xywzxxyxxyyzzxxy))))).s19b9))).hi))), p_1296->g_370.s1, p_1296->g_6.s1, 1UL, ((VECTOR(uint32_t, 2))(0xB10A7BF9L)), 0UL)).s7 , p_51) , (void*)0) != (void*)0) > p_1296->g_196.s9), p_52)), 4294967288UL, 0xAAFF28D7L, ((VECTOR(uint32_t, 4))(3UL)), 1UL)).s37))).yyxxxyxy)).s0, (*p_54))), l_361.sa));
    return l_356.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1296->g_212 p_1296->g_219 p_1296->g_9 p_1296->g_228 p_1296->g_6 p_1296->g_179 p_1296->g_125 p_1296->g_233 p_1296->g_100 p_1296->g_243 p_1296->g_27 p_1296->g_165 p_1296->g_181 p_1296->g_259 p_1296->g_268 p_1296->g_222 p_1296->g_283 p_1296->g_269 p_1296->g_90 p_1296->g_5 p_1296->g_11 p_1296->g_311
 * writes: p_1296->g_165 p_1296->g_222 p_1296->g_233 p_1296->g_27 p_1296->g_311
 */
uint32_t ** func_55(uint32_t * p_56, int64_t  p_57, uint64_t  p_58, int8_t  p_59, int32_t * p_60, struct S0 * p_1296)
{ /* block id: 83 */
    uint32_t l_225[10][3][8] = {{{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL}},{{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL}},{{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL}},{{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL}},{{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL}},{{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL}},{{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL}},{{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL}},{{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL}},{{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL},{8UL,0x62508654L,1UL,0x62508654L,8UL,8UL,0x62508654L,1UL}}};
    int64_t *l_248 = &p_1296->g_228;
    uint32_t *l_266 = &l_225[1][0][7];
    uint32_t **l_265 = &l_266;
    uint32_t **l_270 = &p_1296->g_269[0][2];
    VECTOR(uint64_t, 8) l_282 = (VECTOR(uint64_t, 8))(0x41395B5183514E3EL, (VECTOR(uint64_t, 4))(0x41395B5183514E3EL, (VECTOR(uint64_t, 2))(0x41395B5183514E3EL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 0x41395B5183514E3EL, 18446744073709551614UL);
    uint32_t l_303 = 3UL;
    VECTOR(uint32_t, 16) l_321 = (VECTOR(uint32_t, 16))(1UL, (VECTOR(uint32_t, 4))(1UL, (VECTOR(uint32_t, 2))(1UL, 3UL), 3UL), 3UL, 1UL, 3UL, (VECTOR(uint32_t, 2))(1UL, 3UL), (VECTOR(uint32_t, 2))(1UL, 3UL), 1UL, 3UL, 1UL, 3UL);
    int16_t *l_328 = &p_1296->g_222;
    int16_t *l_329 = &p_1296->g_222;
    int i, j, k;
    for (p_57 = 0; (p_57 != 4); p_57 = safe_add_func_uint8_t_u_u(p_57, 4))
    { /* block id: 86 */
        uint32_t *l_220[10];
        int16_t *l_221 = &p_1296->g_222;
        int32_t l_231 = 0L;
        uint8_t *l_232 = &p_1296->g_233;
        VECTOR(uint8_t, 16) l_257 = (VECTOR(uint8_t, 16))(0x14L, (VECTOR(uint8_t, 4))(0x14L, (VECTOR(uint8_t, 2))(0x14L, 0xC9L), 0xC9L), 0xC9L, 0x14L, 0xC9L, (VECTOR(uint8_t, 2))(0x14L, 0xC9L), (VECTOR(uint8_t, 2))(0x14L, 0xC9L), 0x14L, 0xC9L, 0x14L, 0xC9L);
        VECTOR(uint8_t, 4) l_260 = (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0UL), 0UL);
        VECTOR(uint64_t, 16) l_285 = (VECTOR(uint64_t, 16))(18446744073709551615UL, (VECTOR(uint64_t, 4))(18446744073709551615UL, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xBFB580818782F027L), 0xBFB580818782F027L), 0xBFB580818782F027L, 18446744073709551615UL, 0xBFB580818782F027L, (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xBFB580818782F027L), (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xBFB580818782F027L), 18446744073709551615UL, 0xBFB580818782F027L, 18446744073709551615UL, 0xBFB580818782F027L);
        int32_t **l_302 = (void*)0;
        VECTOR(int32_t, 8) l_318 = (VECTOR(int32_t, 8))(0x7954FDB4L, (VECTOR(int32_t, 4))(0x7954FDB4L, (VECTOR(int32_t, 2))(0x7954FDB4L, 0L), 0L), 0L, 0x7954FDB4L, 0L);
        int32_t l_332 = 1L;
        int i;
        for (i = 0; i < 10; i++)
            l_220[i] = (void*)0;
        (*p_1296->g_212) = p_56;
        if ((((*l_232) |= ((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), ((((((safe_add_func_int16_t_s_s(((*l_221) = (((VECTOR(int8_t, 4))(p_1296->g_219.s7646)).y <= ((void*)0 != l_220[8]))), ((safe_lshift_func_uint8_t_u_u((l_225[1][0][7] == p_1296->g_9.s2), 7)) , ((((VECTOR(uint8_t, 2))(255UL, 1UL)).lo & 0x5BL) , (-1L))))) ^ (safe_lshift_func_int16_t_s_s((0x06BCL & p_1296->g_228), 10))) == ((FAKE_DIVERGE(p_1296->global_0_offset, get_global_id(0), 10) <= (((p_1296->g_6.s3 || p_1296->g_179.x) > p_1296->g_125) == p_58)) , l_225[8][2][0])) > l_231) && l_225[1][0][7]) != p_59))), 4)) != 65535UL)) <= p_1296->g_179.y))
        { /* block id: 90 */
            uint64_t l_242 = 0xA839D5F4DBD0332FL;
            int32_t l_246[5][1] = {{(-1L)},{(-1L)},{(-1L)},{(-1L)},{(-1L)}};
            int64_t *l_247 = &p_1296->g_228;
            VECTOR(uint8_t, 8) l_261 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 0xA1L), 0xA1L), 0xA1L, 0UL, 0xA1L);
            VECTOR(uint8_t, 8) l_263 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0x63L), 0x63L), 0x63L, 255UL, 0x63L);
            int i, j;
            if (((((l_225[1][0][7] && ((*l_221) = ((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(p_1296->g_100.z, (((0x71A0L || (safe_lshift_func_uint16_t_u_s((l_242 > GROUP_DIVERGE(2, 1)), 1))) != ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(p_1296->g_243.s2992fd4c5296ec3b)), ((VECTOR(int16_t, 2))(1L, 0x35FEL)).xxxyxxyxyxxxxxyy))).sa) >= (*p_56)))) , ((l_246[1][0] = ((*p_1296->g_165) &= l_242)) <= (l_247 != l_248))), (safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_58, 0L)), (-1L))))) >= 0x482958C2794FBEF7L))) == l_225[1][0][7]) , (-1L)) ^ p_1296->g_181.y))
            { /* block id: 94 */
                VECTOR(uint8_t, 8) l_258 = (VECTOR(uint8_t, 8))(4UL, (VECTOR(uint8_t, 4))(4UL, (VECTOR(uint8_t, 2))(4UL, 0xD1L), 0xD1L), 0xD1L, 4UL, 0xD1L);
                VECTOR(uint8_t, 8) l_262 = (VECTOR(uint8_t, 8))(0xC5L, (VECTOR(uint8_t, 4))(0xC5L, (VECTOR(uint8_t, 2))(0xC5L, 0xC8L), 0xC8L), 0xC8L, 0xC5L, 0xC8L);
                int32_t *l_264 = (void*)0;
                uint32_t **l_267 = &l_220[8];
                int i;
                l_246[1][0] |= (safe_mod_func_int8_t_s_s(0x70L, ((safe_sub_func_uint16_t_u_u(GROUP_DIVERGE(1, 1), (p_1296->g_27 || 0x11L))) , ((VECTOR(uint8_t, 8))(mad_sat(((VECTOR(uint8_t, 2))(0x51L, 3UL)).yyxyxyyy, ((VECTOR(uint8_t, 8))(l_257.s10ca1bca)), ((VECTOR(uint8_t, 4))(min(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(mad_sat(((VECTOR(uint8_t, 4))(max(((VECTOR(uint8_t, 4))(l_258.s7420)), (uint8_t)((((void*)0 != p_1296->g_259) , &p_1296->g_140) == (void*)0)))).yzwxywwzwwwzzyyy, ((VECTOR(uint8_t, 4))(l_260.wxzz)).yxwxzwwwwyzywxzx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x7DL, 251UL)).xxxyxyyx)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(l_261.s2746306536645224)).s61)), ((VECTOR(uint8_t, 4))(rhadd(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(250UL, 0x10L)).yxyx)), ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_262.s24)).yyyyxyxyxyyyyxyy)).s9e5d))), 255UL, 0xD1L))))).s7797)).even)).yxyx, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(l_263.s00)))).yyyy))).xyxxxyyy))).s1)));
                return p_1296->g_268;
            }
            else
            { /* block id: 97 */
                uint32_t **l_271[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_271[i] = (void*)0;
                (*p_1296->g_165) &= ((l_270 = &p_1296->g_269[1][0]) == (void*)0);
                return l_271[0];
            }
        }
        else
        { /* block id: 102 */
            uint32_t l_286 = 4294967295UL;
            int32_t l_293[7];
            int64_t l_304[9][10][2] = {{{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L}},{{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L}},{{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L}},{{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L}},{{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L}},{{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L}},{{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L}},{{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L}},{{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L},{0x2D42B0A2042FC192L,0L}}};
            int i, j, k;
            for (i = 0; i < 7; i++)
                l_293[i] = (-6L);
            for (p_1296->g_222 = 0; (p_1296->g_222 == 24); ++p_1296->g_222)
            { /* block id: 105 */
                VECTOR(int32_t, 4) l_284 = (VECTOR(int32_t, 4))(0x7711359FL, (VECTOR(int32_t, 2))(0x7711359FL, 0x01631843L), 0x01631843L);
                int i;
                l_284.x = (safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(((((safe_rshift_func_int16_t_s_u((((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 8))(max(((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_282.s70354004)).s1170230401135310)).sc5, ((VECTOR(uint64_t, 4))(((((!((!((((((p_57 , 0x7C2D7BC30966FC5EL) & ((((!(((VECTOR(int32_t, 16))(9L, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(p_1296->g_283.s42)).yyxy)), ((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(l_284.wxxwzwzzzwxxzxzx)).sfd7e, ((VECTOR(int32_t, 2))(0L, 0x4A718A48L)).xxyy))), (((l_286 = ((VECTOR(uint64_t, 4))(l_285.s9ffe)).w) & ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(6L, (l_257.s1 < (**p_1296->g_212)), (-8L), 0x7BDB857C05AC7BDAL)))), 0x03D6566E9846EECEL, 1L, (safe_div_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(l_293[1], 2)), ((*l_232)--))), (safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((&l_231 == &l_231) , (!(safe_mod_func_uint64_t_u_u(((void*)0 == l_302), l_225[1][0][7])))), 255UL)), l_303)))), l_284.y, 0x44E1FA5839F48289L, p_57, 0x72213736988ECCBEL, 0x13FE0352624A3151L, 1L, l_293[0], 0x3C6BA4E8C0178596L, (-7L))).s0) >= p_57), (-10L), ((VECTOR(int32_t, 2))(0x354FA31EL)), (-1L), (-1L), 0L)).s1 <= (*p_1296->g_165))) && l_284.x) | l_284.w) < (-7L))) , (**p_1296->g_268)) <= 0x788BC820L) , p_59) , FAKE_DIVERGE(p_1296->global_1_offset, get_global_id(1), 10))) | p_1296->g_90)) & p_1296->g_5.y) , (*p_56)) <= 0x4478303DL), 0UL, 0x008E1B90CF8EDB4FL, 0x0E97A36D6CFD9D4AL)).odd))).yyxxyxxy, ((VECTOR(uint64_t, 8))(18446744073709551615UL))))).s7513073763514456, ((VECTOR(uint64_t, 16))(0xACD056996B4E3A92L))))).sf != p_1296->g_283.s6), l_282.s0)) ^ l_225[8][0][0]) == 0x4110L) & 0xBBA5L), l_304[4][6][0])), p_59)), p_1296->g_11.z));
                for (p_1296->g_233 = 0; (p_1296->g_233 != 26); p_1296->g_233++)
                { /* block id: 111 */
                    int32_t l_317 = 0x59CE2155L;
                    for (p_58 = 0; (p_58 >= 28); p_58 = safe_add_func_int16_t_s_s(p_58, 8))
                    { /* block id: 114 */
                        int32_t **l_309 = &p_1296->g_165;
                        uint32_t *l_310 = &p_1296->g_311;
                        int32_t *l_314 = (void*)0;
                        int32_t *l_316 = (void*)0;
                        l_317 = (((*l_309) = ((0x3A9A3610L && l_293[0]) , (void*)0)) != ((++(*l_310)) , p_56));
                        (*l_309) = p_56;
                    }
                    if (p_59)
                        continue;
                }
            }
        }
        (*p_1296->g_165) = ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(rhadd(((VECTOR(int32_t, 4))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_318.s16233356)).s50)), 0x3CA81243L, 0x4CDAB08DL)).zxwyzxzw)).odd, ((VECTOR(int32_t, 4))(0x6E431F0FL, (-3L), 0L, 0x02CEF046L))))).yyzzwzzxxxyxxzyy, ((VECTOR(int32_t, 8))(((*p_1296->g_165) ^ l_303), (safe_rshift_func_uint8_t_u_u((p_58 , 1UL), (((!(((VECTOR(uint32_t, 16))(l_321.s095fa5061781a15d)).s7 <= ((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((l_328 = l_221) == l_329), ((void*)0 == l_220[8]))), 6)), 2)) ^ (safe_sub_func_int16_t_s_s(p_1296->g_243.s7, 1L))))) & 0x26D1L) <= l_332))), 0x521F7CC3L, (-4L), 0x448F3110L, 9L, 0x6C177AAEL, (-1L))).s1217477447267237))), ((VECTOR(int32_t, 16))(0x50C5A400L))))).sf;
    }
    return &p_1296->g_269[1][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_1296->g_5
 * writes:
 */
int64_t  func_61(uint32_t  p_62, int32_t * p_63, int16_t  p_64, uint64_t  p_65, struct S0 * p_1296)
{ /* block id: 81 */
    return p_1296->g_5.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1296->g_179 p_1296->g_180 p_1296->g_181 p_1296->g_196 p_1296->g_11 p_1296->g_104 p_1296->g_175 p_1296->g_6 p_1296->g_164 p_1296->g_165
 * writes: p_1296->g_27 p_1296->g_6
 */
int32_t * func_67(int16_t  p_68, struct S0 * p_1296)
{ /* block id: 73 */
    int8_t *l_184 = (void*)0;
    int8_t *l_185[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t l_186 = 0x3A9F67F97CAD44DEL;
    int32_t l_191 = 8L;
    VECTOR(int32_t, 8) l_192 = (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 0x05C9947EL), 0x05C9947EL), 0x05C9947EL, (-6L), 0x05C9947EL);
    uint32_t l_195 = 0UL;
    VECTOR(int32_t, 4) l_197 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x1F7334F8L), 0x1F7334F8L);
    VECTOR(int32_t, 8) l_198 = (VECTOR(int32_t, 8))(0x26D7309AL, (VECTOR(int32_t, 4))(0x26D7309AL, (VECTOR(int32_t, 2))(0x26D7309AL, 0x6F0A7560L), 0x6F0A7560L), 0x6F0A7560L, 0x26D7309AL, 0x6F0A7560L);
    int32_t *l_203 = (void*)0;
    int32_t *l_204[8] = {&l_191,(void*)0,&l_191,&l_191,(void*)0,&l_191,&l_191,(void*)0};
    int64_t l_205 = (-4L);
    uint32_t *l_206 = &p_1296->g_27;
    int32_t l_207 = 5L;
    uint8_t l_208 = 0UL;
    int i;
    p_1296->g_6.s0 &= (safe_mul_func_uint32_t_u_u(GROUP_DIVERGE(1, 1), (((VECTOR(int16_t, 2))((-1L), (-6L))).lo == (((-2L) > (safe_unary_minus_func_int64_t_s((((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(p_1296->g_179.yyyx)))).xxxwxzxxxywwwzzy)).even, ((VECTOR(uint16_t, 4))(p_1296->g_180.zyzx)).wzyxwzzy, ((VECTOR(uint16_t, 16))(p_1296->g_181.yyxyyxxxyyyyyxxx)).odd))).s2423313114450374)))))))).se <= (safe_mul_func_int8_t_s_s((l_186 &= (-1L)), (safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), (((((*l_206) = (safe_lshift_func_uint8_t_u_u((((VECTOR(int32_t, 8))(l_191, ((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 16))(p_68, 0x3AC577DDL, 0x72826348L, 0x5D971F16L, ((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0x1923D834L, 0x4139FA89L)), ((VECTOR(int32_t, 16))((-6L), ((VECTOR(int32_t, 4))(l_192.s1472)), (safe_sub_func_int16_t_s_s(0L, l_195)), ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(p_1296->g_196.se6da)))).wywywzyz)), 1L, 0x618F1FB9L)).sc7))), ((VECTOR(int32_t, 4))(l_197.xxyw)), ((VECTOR(int32_t, 2))(0x1F8B01E6L, 0x638CF908L)), 0x464EB96BL, ((VECTOR(int32_t, 2))(l_198.s52)), 0x78E15215L)).hi, (int32_t)(l_205 = ((safe_mul_func_uint8_t_u_u((((VECTOR(int32_t, 16))((safe_mod_func_int64_t_s_s((&l_195 == (void*)0), ((0L || p_1296->g_11.x) | p_68))), 0x79D7EAA5L, p_68, 0x544DA8E2L, 1L, ((VECTOR(int32_t, 8))(0L)), ((VECTOR(int32_t, 2))(0L)), (-9L))).s5 , p_68), 0xD4L)) , l_197.x)), (int32_t)(-1L)))).s7003360701553066, ((VECTOR(int32_t, 16))(0x79F4B579L))))).lo))).s35, ((VECTOR(int32_t, 2))(0x096354CBL)), ((VECTOR(int32_t, 2))(8L))))), ((VECTOR(int32_t, 2))(0x40483999L)), p_68, 0x00F96E11L, 0x1A217AB7L)).s4 , p_68), p_68))) <= 0x33597BFAL) , p_1296->g_104.s6) , 65535UL))))))))) , p_1296->g_175))));
    l_208 = (l_207 = p_68);
    return (*p_1296->g_164);
}


/* ------------------------------------------ */
/* 
 * reads : p_1296->g_79 p_1296->g_83 p_1296->g_7 p_1296->g_6 p_1296->g_27 p_1296->g_11 p_1296->g_92 p_1296->g_98 p_1296->g_100 p_1296->g_104 p_1296->g_105 p_1296->g_106 p_1296->g_9 p_1296->g_90 p_1296->g_140 p_1296->g_125 p_1296->g_5 p_1296->g_164 p_1296->g_175
 * writes: p_1296->g_79 p_1296->g_27 p_1296->g_9 p_1296->g_90 p_1296->g_125 p_1296->g_140 p_1296->g_165
 */
uint16_t  func_70(uint64_t  p_71, struct S0 * p_1296)
{ /* block id: 20 */
    int32_t *l_78 = (void*)0;
    VECTOR(int8_t, 2) l_80 = (VECTOR(int8_t, 2))(0L, 2L);
    VECTOR(int8_t, 2) l_81 = (VECTOR(int8_t, 2))(0x25L, 0x3CL);
    VECTOR(int8_t, 4) l_82 = (VECTOR(int8_t, 4))(0x28L, (VECTOR(int8_t, 2))(0x28L, 0x37L), 0x37L);
    int8_t *l_84[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_117 = (void*)0;
    int32_t *l_118[3][9];
    VECTOR(int32_t, 8) l_153 = (VECTOR(int32_t, 8))(0x42537462L, (VECTOR(int32_t, 4))(0x42537462L, (VECTOR(int32_t, 2))(0x42537462L, 0x05B1F0BCL), 0x05B1F0BCL), 0x05B1F0BCL, 0x42537462L, 0x05B1F0BCL);
    int8_t l_174 = 0L;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
            l_118[i][j] = (void*)0;
    }
    p_1296->g_9.s9 ^= (func_72(l_78, &p_1296->g_27, &p_1296->g_27, (0xD3C1L & ((VECTOR(int16_t, 8))(rotate(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(6L, ((VECTOR(int8_t, 2))(p_1296->g_79.s7b)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(l_80.xxyyxxxy)).hi, ((VECTOR(int8_t, 16))(0x33L, ((0x089E4E2CL == FAKE_DIVERGE(p_1296->global_1_offset, get_global_id(1), 10)) & (-5L)), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mul_hi(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(l_81.yyxxyyyy)))).s07)))), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(l_82.yyzxyyyw)).s1476357436010533)).s29))), 0x30L, 1L)), 0x35L, ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 16))(p_1296->g_83.sdeca68eb2a14d58f)).s1af8))), 0x68L, 0x7EL, (p_1296->g_7.s9 < ((p_1296->g_79.s5 = p_71) != p_1296->g_7.s3)), 0L, 9L)).s2037))))), 0x2AL)).hi)).yxwwwywz, ((VECTOR(uint8_t, 8))(255UL))))), ((VECTOR(int16_t, 8))(9L))))).s2), p_1296->g_6.s0, p_1296) , 0x293C712BL);
    l_118[2][3] = l_118[2][3];
    for (p_71 = 26; (p_71 > 31); p_71 = safe_add_func_uint16_t_u_u(p_71, 2))
    { /* block id: 31 */
        int32_t l_129 = 0x2B78B995L;
        int32_t l_145 = 0x70341802L;
        VECTOR(uint8_t, 8) l_148 = (VECTOR(uint8_t, 8))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0x9CL), 0x9CL), 0x9CL, 9UL, 0x9CL);
        int32_t l_157 = 1L;
        int i;
        for (p_1296->g_90 = (-11); (p_1296->g_90 <= 9); p_1296->g_90++)
        { /* block id: 34 */
            int64_t l_128 = 0x459F809E6970BE37L;
            int32_t l_146 = 0x71A2FFDFL;
            int32_t l_158 = (-1L);
            uint8_t l_162 = 0xF7L;
            for (p_1296->g_27 = 13; (p_1296->g_27 > 51); ++p_1296->g_27)
            { /* block id: 37 */
                uint32_t l_130 = 4294967295UL;
                int32_t *l_171 = (void*)0;
                for (p_1296->g_125 = 0; (p_1296->g_125 > 21); p_1296->g_125 = safe_add_func_int8_t_s_s(p_1296->g_125, 9))
                { /* block id: 40 */
                    uint32_t l_159 = 1UL;
                    --l_130;
                    for (l_128 = 29; (l_128 <= (-28)); l_128 = safe_sub_func_uint16_t_u_u(l_128, 8))
                    { /* block id: 44 */
                        uint32_t *l_139 = &p_1296->g_140;
                        int32_t l_147 = 1L;
                        int64_t *l_154 = (void*)0;
                        int64_t *l_155 = (void*)0;
                        int64_t *l_156[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_158 = ((safe_sub_func_int64_t_s_s((l_157 = (safe_mul_func_int16_t_s_s(((((*l_139)++) > FAKE_DIVERGE(p_1296->local_0_offset, get_local_id(0), 10)) <= 0UL), ((!(p_1296->g_125 , (l_146 = (l_145 = (p_1296->g_79.s6 = (p_1296->g_5.y <= (safe_lshift_func_int8_t_s_u(0L, 0)))))))) < ((l_147 | l_129) < ((((((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(abs(((VECTOR(uint8_t, 2))(l_148.s46)).xyxxxxxx))).s7270627376132740)).s1 & 0xCDL) , (safe_div_func_uint32_t_u_u(0x1DFD7D1BL, (safe_rshift_func_int16_t_s_s((l_153.s7 != 0xD12E868B81BE9AE6L), 15))))) , l_129) || 0x25L)))))), 1L)) > p_71);
                        --l_159;
                    }
                }
                if ((p_1296->g_9.s2 < l_162))
                { /* block id: 54 */
                    int32_t **l_166 = (void*)0;
                    int32_t **l_167 = (void*)0;
                    int32_t **l_168 = &l_78;
                    (*p_1296->g_164) = &p_1296->g_125;
                    (*l_168) = (void*)0;
                }
                else
                { /* block id: 57 */
                    uint32_t l_173 = 0x1C7C29BAL;
                    for (l_162 = (-1); (l_162 <= 32); ++l_162)
                    { /* block id: 60 */
                        (*p_1296->g_164) = l_171;
                        l_173 = 1L;
                        if (p_71)
                            break;
                    }
                }
            }
            return l_146;
        }
        l_157 = l_148.s2;
    }
    l_174 = 0x6C84C521L;
    return p_1296->g_175;
}


/* ------------------------------------------ */
/* 
 * reads : p_1296->g_27 p_1296->g_11 p_1296->g_92 p_1296->g_98 p_1296->g_100 p_1296->g_104 p_1296->g_105 p_1296->g_106 p_1296->g_83
 * writes: p_1296->g_27
 */
int64_t  func_72(int32_t * p_73, uint32_t * p_74, uint32_t * p_75, uint16_t  p_76, int64_t  p_77, struct S0 * p_1296)
{ /* block id: 22 */
    uint32_t *l_89[3];
    int32_t l_91 = 0L;
    VECTOR(int32_t, 8) l_97 = (VECTOR(int32_t, 8))((-2L), (VECTOR(int32_t, 4))((-2L), (VECTOR(int32_t, 2))((-2L), 0x4272ABD0L), 0x4272ABD0L), 0x4272ABD0L, (-2L), 0x4272ABD0L);
    VECTOR(uint64_t, 16) l_99 = (VECTOR(uint64_t, 16))(18446744073709551607UL, (VECTOR(uint64_t, 4))(18446744073709551607UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 18446744073709551607UL, 18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551607UL, 18446744073709551608UL), (VECTOR(uint64_t, 2))(18446744073709551607UL, 18446744073709551608UL), 18446744073709551607UL, 18446744073709551608UL, 18446744073709551607UL, 18446744073709551608UL);
    VECTOR(uint64_t, 4) l_101 = (VECTOR(uint64_t, 4))(0xEEC2988D6DCB7496L, (VECTOR(uint64_t, 2))(0xEEC2988D6DCB7496L, 1UL), 1UL);
    VECTOR(uint64_t, 2) l_102 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 0xE195E0419DFFB93CL);
    VECTOR(uint64_t, 4) l_103 = (VECTOR(uint64_t, 4))(0x652091CAA3E211E8L, (VECTOR(uint64_t, 2))(0x652091CAA3E211E8L, 0x3535970AEDAF9C58L), 0x3535970AEDAF9C58L);
    VECTOR(uint64_t, 4) l_107 = (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 0x66E863DC2C33A66AL), 0x66E863DC2C33A66AL);
    VECTOR(uint64_t, 2) l_108 = (VECTOR(uint64_t, 2))(8UL, 0xA8BA31763EEA7E5BL);
    VECTOR(uint64_t, 16) l_109 = (VECTOR(uint64_t, 16))(0xF6C78DD8142B0CC6L, (VECTOR(uint64_t, 4))(0xF6C78DD8142B0CC6L, (VECTOR(uint64_t, 2))(0xF6C78DD8142B0CC6L, 9UL), 9UL), 9UL, 0xF6C78DD8142B0CC6L, 9UL, (VECTOR(uint64_t, 2))(0xF6C78DD8142B0CC6L, 9UL), (VECTOR(uint64_t, 2))(0xF6C78DD8142B0CC6L, 9UL), 0xF6C78DD8142B0CC6L, 9UL, 0xF6C78DD8142B0CC6L, 9UL);
    VECTOR(uint64_t, 8) l_110 = (VECTOR(uint64_t, 8))(18446744073709551610UL, (VECTOR(uint64_t, 4))(18446744073709551610UL, (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551613UL), 18446744073709551613UL), 18446744073709551613UL, 18446744073709551610UL, 18446744073709551613UL);
    int32_t *l_114 = (void*)0;
    int32_t *l_115[1];
    int16_t l_116 = 0x37B0L;
    int i;
    for (i = 0; i < 3; i++)
        l_89[i] = &p_1296->g_90;
    for (i = 0; i < 1; i++)
        l_115[i] = (void*)0;
    l_116 = (1L ^ ((safe_sub_func_int32_t_s_s(((((0xFF1C7326L && (l_91 = ((*p_75)--))) && (p_1296->g_11.w || ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(mad_sat(((VECTOR(uint64_t, 16))(7UL, ((VECTOR(uint64_t, 4))(1UL, ((VECTOR(uint64_t, 2))(p_1296->g_92.s73)), 18446744073709551610UL)), (safe_add_func_int16_t_s_s(p_77, (safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 8))(l_97.s46235546)).s7, l_97.s4)))), 0x2C87538C74B559E0L, ((VECTOR(uint64_t, 2))(safe_clamp_func(VECTOR(uint64_t, 2),VECTOR(uint64_t, 2),((VECTOR(uint64_t, 8))(1UL, p_76, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(p_1296->g_98.yyyyyyyxyxyxxyyy)).s9bb0)), 0xC768A6AAB061D97AL, 0UL)).s54, ((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 16))(18446744073709551609UL, 0xFA35296D32418DFCL, ((VECTOR(uint64_t, 8))(l_99.s26bd8041)), 0xD7DB6C63C429AA74L, 0x62F11252BC438EE5L, ((VECTOR(uint64_t, 4))(p_1296->g_100.wzyy)))).s5e)), ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(safe_clamp_func(VECTOR(uint64_t, 4),VECTOR(uint64_t, 4),((VECTOR(uint64_t, 16))(l_101.zwwwxywwyzwwwzyz)).s520e, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(l_102.yyxyxxxxyxyyxyyy)).s718c)), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(l_103.zxzx)).xzzywzxwwxxxwwww)).se8cb))).wzzwwwyxywwwxwwy)).s9205)))).lo))), ((VECTOR(uint64_t, 2))(p_1296->g_104.s41)), 18446744073709551615UL, ((VECTOR(uint64_t, 4))(min(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 8))(p_1296->g_105.s13673243)))).odd, (uint64_t)((VECTOR(uint64_t, 8))(p_1296->g_106.xxyyxyyy)).s2))))).s8a2d, ((VECTOR(uint64_t, 4))(l_107.wwwz)), ((VECTOR(uint64_t, 16))(add_sat(((VECTOR(uint64_t, 16))(l_108.xyyyyxyyyyxxxxxx)), ((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 16))(0xCD50E3CEE9F7D83AL, ((VECTOR(uint64_t, 8))(l_109.sd366ba46)), 0x3A1CE40C6877B01FL, ((VECTOR(uint64_t, 4))(abs(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x55586372135583E1L, 0x25E79E523DBDA42FL)).yxyyxxxy)).odd))), 7UL, 0xB60DBC482750ABA6L)).s5527, ((VECTOR(uint64_t, 16))(l_110.s6274356152526447)).sdf4e))).yyzyyyxyyxzzwwyw))).s702e))).lo)), (p_1296->g_83.s3 , l_101.y), 0x175D022AC7DB9AC0L, p_1296->g_100.z, ((VECTOR(uint64_t, 2))(4UL)), 0UL)).even, (uint64_t)p_76))), FAKE_DIVERGE(p_1296->global_2_offset, get_global_id(2), 10), 0x0E94A997FCA46356L, 1UL, 0x92F19563820F0242L)).s2)) , 7UL) < 0x1155L), 1L)) != l_110.s0));
    return p_76;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[3];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 3; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[83];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 83; i++)
            l_comm_values[i] = 1;
    struct S0 c_1297;
    struct S0* p_1296 = &c_1297;
    struct S0 c_1298 = {
        (VECTOR(int32_t, 2))(0x4DDD1D8FL, 0x576C5165L), // p_1296->g_4
        (VECTOR(int32_t, 2))(0x4B8F6C21L, 1L), // p_1296->g_5
        (VECTOR(int32_t, 8))(0x722BA7B7L, (VECTOR(int32_t, 4))(0x722BA7B7L, (VECTOR(int32_t, 2))(0x722BA7B7L, (-9L)), (-9L)), (-9L), 0x722BA7B7L, (-9L)), // p_1296->g_6
        (VECTOR(int32_t, 16))(8L, (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x4129B857L), 0x4129B857L), 0x4129B857L, 8L, 0x4129B857L, (VECTOR(int32_t, 2))(8L, 0x4129B857L), (VECTOR(int32_t, 2))(8L, 0x4129B857L), 8L, 0x4129B857L, 8L, 0x4129B857L), // p_1296->g_7
        (VECTOR(int32_t, 16))(0x15342363L, (VECTOR(int32_t, 4))(0x15342363L, (VECTOR(int32_t, 2))(0x15342363L, 0x30477AE2L), 0x30477AE2L), 0x30477AE2L, 0x15342363L, 0x30477AE2L, (VECTOR(int32_t, 2))(0x15342363L, 0x30477AE2L), (VECTOR(int32_t, 2))(0x15342363L, 0x30477AE2L), 0x15342363L, 0x30477AE2L, 0x15342363L, 0x30477AE2L), // p_1296->g_9
        (VECTOR(int32_t, 4))(0x221EBC5FL, (VECTOR(int32_t, 2))(0x221EBC5FL, 1L), 1L), // p_1296->g_11
        5UL, // p_1296->g_27
        (VECTOR(int8_t, 16))(0x35L, (VECTOR(int8_t, 4))(0x35L, (VECTOR(int8_t, 2))(0x35L, 0x38L), 0x38L), 0x38L, 0x35L, 0x38L, (VECTOR(int8_t, 2))(0x35L, 0x38L), (VECTOR(int8_t, 2))(0x35L, 0x38L), 0x35L, 0x38L, 0x35L, 0x38L), // p_1296->g_79
        (VECTOR(int8_t, 16))((-1L), (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), (-9L)), (-9L)), (-9L), (-1L), (-9L), (VECTOR(int8_t, 2))((-1L), (-9L)), (VECTOR(int8_t, 2))((-1L), (-9L)), (-1L), (-9L), (-1L), (-9L)), // p_1296->g_83
        5UL, // p_1296->g_90
        (VECTOR(uint64_t, 8))(9UL, (VECTOR(uint64_t, 4))(9UL, (VECTOR(uint64_t, 2))(9UL, 1UL), 1UL), 1UL, 9UL, 1UL), // p_1296->g_92
        (VECTOR(uint64_t, 2))(0xF63C109E68FEE394L, 9UL), // p_1296->g_98
        (VECTOR(uint64_t, 4))(18446744073709551606UL, (VECTOR(uint64_t, 2))(18446744073709551606UL, 5UL), 5UL), // p_1296->g_100
        (VECTOR(uint64_t, 8))(5UL, (VECTOR(uint64_t, 4))(5UL, (VECTOR(uint64_t, 2))(5UL, 18446744073709551615UL), 18446744073709551615UL), 18446744073709551615UL, 5UL, 18446744073709551615UL), // p_1296->g_104
        (VECTOR(uint64_t, 8))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 0x53FC6319732EC2C2L), 0x53FC6319732EC2C2L), 0x53FC6319732EC2C2L, 3UL, 0x53FC6319732EC2C2L), // p_1296->g_105
        (VECTOR(uint64_t, 2))(1UL, 0xFAC948D72D271054L), // p_1296->g_106
        (void*)0, // p_1296->g_111
        (void*)0, // p_1296->g_112
        {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}, // p_1296->g_113
        1L, // p_1296->g_125
        2UL, // p_1296->g_140
        (void*)0, // p_1296->g_163
        (void*)0, // p_1296->g_165
        &p_1296->g_165, // p_1296->g_164
        (void*)0, // p_1296->g_172
        18446744073709551615UL, // p_1296->g_175
        (VECTOR(uint16_t, 2))(65535UL, 0x080AL), // p_1296->g_179
        (VECTOR(uint16_t, 4))(0x345EL, (VECTOR(uint16_t, 2))(0x345EL, 0UL), 0UL), // p_1296->g_180
        (VECTOR(uint16_t, 2))(6UL, 65535UL), // p_1296->g_181
        (VECTOR(int32_t, 16))(0x47D0813BL, (VECTOR(int32_t, 4))(0x47D0813BL, (VECTOR(int32_t, 2))(0x47D0813BL, 3L), 3L), 3L, 0x47D0813BL, 3L, (VECTOR(int32_t, 2))(0x47D0813BL, 3L), (VECTOR(int32_t, 2))(0x47D0813BL, 3L), 0x47D0813BL, 3L, 0x47D0813BL, 3L), // p_1296->g_196
        &p_1296->g_165, // p_1296->g_212
        (VECTOR(int8_t, 8))(0x4BL, (VECTOR(int8_t, 4))(0x4BL, (VECTOR(int8_t, 2))(0x4BL, 0x60L), 0x60L), 0x60L, 0x4BL, 0x60L), // p_1296->g_219
        4L, // p_1296->g_222
        0x408D80014CE8C8A5L, // p_1296->g_228
        0x3CL, // p_1296->g_233
        (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0x42EDL), 0x42EDL), 0x42EDL, (-1L), 0x42EDL, (VECTOR(int16_t, 2))((-1L), 0x42EDL), (VECTOR(int16_t, 2))((-1L), 0x42EDL), (-1L), 0x42EDL, (-1L), 0x42EDL), // p_1296->g_243
        (void*)0, // p_1296->g_259
        {{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27},{&p_1296->g_27,&p_1296->g_27,&p_1296->g_27}}, // p_1296->g_269
        &p_1296->g_269[1][0], // p_1296->g_268
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x734E5C46L), 0x734E5C46L), 0x734E5C46L, 0L, 0x734E5C46L), // p_1296->g_283
        4294967286UL, // p_1296->g_311
        {&p_1296->g_125,&p_1296->g_125,&p_1296->g_125,&p_1296->g_125,&p_1296->g_125,&p_1296->g_125,&p_1296->g_125,&p_1296->g_125}, // p_1296->g_315
        (VECTOR(uint32_t, 8))(0x853086DBL, (VECTOR(uint32_t, 4))(0x853086DBL, (VECTOR(uint32_t, 2))(0x853086DBL, 0UL), 0UL), 0UL, 0x853086DBL, 0UL), // p_1296->g_348
        (VECTOR(uint8_t, 8))(0xDCL, (VECTOR(uint8_t, 4))(0xDCL, (VECTOR(uint8_t, 2))(0xDCL, 255UL), 255UL), 255UL, 0xDCL, 255UL), // p_1296->g_349
        0x0AL, // p_1296->g_369
        (VECTOR(int64_t, 8))(0x3D615530713DA440L, (VECTOR(int64_t, 4))(0x3D615530713DA440L, (VECTOR(int64_t, 2))(0x3D615530713DA440L, 0x7EDD1D08C08D05BDL), 0x7EDD1D08C08D05BDL), 0x7EDD1D08C08D05BDL, 0x3D615530713DA440L, 0x7EDD1D08C08D05BDL), // p_1296->g_370
        {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}, // p_1296->g_373
        (void*)0, // p_1296->g_374
        (VECTOR(uint64_t, 16))(0x3D4229B64416E39AL, (VECTOR(uint64_t, 4))(0x3D4229B64416E39AL, (VECTOR(uint64_t, 2))(0x3D4229B64416E39AL, 0x12191CCB3189EFC5L), 0x12191CCB3189EFC5L), 0x12191CCB3189EFC5L, 0x3D4229B64416E39AL, 0x12191CCB3189EFC5L, (VECTOR(uint64_t, 2))(0x3D4229B64416E39AL, 0x12191CCB3189EFC5L), (VECTOR(uint64_t, 2))(0x3D4229B64416E39AL, 0x12191CCB3189EFC5L), 0x3D4229B64416E39AL, 0x12191CCB3189EFC5L, 0x3D4229B64416E39AL, 0x12191CCB3189EFC5L), // p_1296->g_386
        1L, // p_1296->g_405
        (VECTOR(uint32_t, 2))(0xB55C7C47L, 0UL), // p_1296->g_410
        (VECTOR(uint32_t, 4))(4UL, (VECTOR(uint32_t, 2))(4UL, 0x6C98CE44L), 0x6C98CE44L), // p_1296->g_413
        (VECTOR(uint32_t, 16))(4294967289UL, (VECTOR(uint32_t, 4))(4294967289UL, (VECTOR(uint32_t, 2))(4294967289UL, 0x93B1CDB3L), 0x93B1CDB3L), 0x93B1CDB3L, 4294967289UL, 0x93B1CDB3L, (VECTOR(uint32_t, 2))(4294967289UL, 0x93B1CDB3L), (VECTOR(uint32_t, 2))(4294967289UL, 0x93B1CDB3L), 4294967289UL, 0x93B1CDB3L, 4294967289UL, 0x93B1CDB3L), // p_1296->g_414
        (VECTOR(uint32_t, 16))(0x9D565244L, (VECTOR(uint32_t, 4))(0x9D565244L, (VECTOR(uint32_t, 2))(0x9D565244L, 0UL), 0UL), 0UL, 0x9D565244L, 0UL, (VECTOR(uint32_t, 2))(0x9D565244L, 0UL), (VECTOR(uint32_t, 2))(0x9D565244L, 0UL), 0x9D565244L, 0UL, 0x9D565244L, 0UL), // p_1296->g_415
        (VECTOR(int64_t, 8))(3L, (VECTOR(int64_t, 4))(3L, (VECTOR(int64_t, 2))(3L, 0L), 0L), 0L, 3L, 0L), // p_1296->g_422
        (VECTOR(int16_t, 16))(0x2506L, (VECTOR(int16_t, 4))(0x2506L, (VECTOR(int16_t, 2))(0x2506L, 2L), 2L), 2L, 0x2506L, 2L, (VECTOR(int16_t, 2))(0x2506L, 2L), (VECTOR(int16_t, 2))(0x2506L, 2L), 0x2506L, 2L, 0x2506L, 2L), // p_1296->g_440
        (VECTOR(int16_t, 16))(0x0154L, (VECTOR(int16_t, 4))(0x0154L, (VECTOR(int16_t, 2))(0x0154L, (-5L)), (-5L)), (-5L), 0x0154L, (-5L), (VECTOR(int16_t, 2))(0x0154L, (-5L)), (VECTOR(int16_t, 2))(0x0154L, (-5L)), 0x0154L, (-5L), 0x0154L, (-5L)), // p_1296->g_492
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), // p_1296->g_503
        (VECTOR(int32_t, 4))(0x0DA8A8BEL, (VECTOR(int32_t, 2))(0x0DA8A8BEL, 0x23D42749L), 0x23D42749L), // p_1296->g_504
        (VECTOR(int32_t, 16))(0x00FA0365L, (VECTOR(int32_t, 4))(0x00FA0365L, (VECTOR(int32_t, 2))(0x00FA0365L, (-1L)), (-1L)), (-1L), 0x00FA0365L, (-1L), (VECTOR(int32_t, 2))(0x00FA0365L, (-1L)), (VECTOR(int32_t, 2))(0x00FA0365L, (-1L)), 0x00FA0365L, (-1L), 0x00FA0365L, (-1L)), // p_1296->g_505
        {{&p_1296->g_165,&p_1296->g_165,(void*)0,(void*)0,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165},{&p_1296->g_165,&p_1296->g_165,(void*)0,(void*)0,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165},{&p_1296->g_165,&p_1296->g_165,(void*)0,(void*)0,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165},{&p_1296->g_165,&p_1296->g_165,(void*)0,(void*)0,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165},{&p_1296->g_165,&p_1296->g_165,(void*)0,(void*)0,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165},{&p_1296->g_165,&p_1296->g_165,(void*)0,(void*)0,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165},{&p_1296->g_165,&p_1296->g_165,(void*)0,(void*)0,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165},{&p_1296->g_165,&p_1296->g_165,(void*)0,(void*)0,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165},{&p_1296->g_165,&p_1296->g_165,(void*)0,(void*)0,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165,(void*)0,&p_1296->g_165}}, // p_1296->g_557
        0x10568F7FDC6A77D6L, // p_1296->g_566
        0x19E10E3891B8304EL, // p_1296->g_568
        {{0xA462E102CABD1F33L},{0xA462E102CABD1F33L},{0xA462E102CABD1F33L},{0xA462E102CABD1F33L},{0xA462E102CABD1F33L},{0xA462E102CABD1F33L},{0xA462E102CABD1F33L},{0xA462E102CABD1F33L}}, // p_1296->g_570
        (VECTOR(int64_t, 8))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0x1C2E0EA15B5A567FL), 0x1C2E0EA15B5A567FL), 0x1C2E0EA15B5A567FL, 1L, 0x1C2E0EA15B5A567FL), // p_1296->g_589
        &p_1296->g_369, // p_1296->g_606
        {{{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606}},{{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606}},{{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606}},{{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606}},{{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606}},{{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606}},{{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606}},{{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606},{&p_1296->g_606,(void*)0,&p_1296->g_606}}}, // p_1296->g_605
        {{&p_1296->g_605[2][8][1]},{&p_1296->g_605[2][8][1]},{&p_1296->g_605[2][8][1]},{&p_1296->g_605[2][8][1]},{&p_1296->g_605[2][8][1]}}, // p_1296->g_604
        &p_1296->g_605[2][8][1], // p_1296->g_607
        (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551609UL), // p_1296->g_650
        (void*)0, // p_1296->g_658
        &p_1296->g_405, // p_1296->g_677
        {{&p_1296->g_405},{&p_1296->g_405},{&p_1296->g_405},{&p_1296->g_405},{&p_1296->g_405},{&p_1296->g_405},{&p_1296->g_405},{&p_1296->g_405},{&p_1296->g_405},{&p_1296->g_405}}, // p_1296->g_678
        (void*)0, // p_1296->g_694
        (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x6F58L), 0x6F58L), // p_1296->g_697
        (void*)0, // p_1296->g_698
        (VECTOR(int64_t, 2))(0x646AC218F3C34368L, 1L), // p_1296->g_727
        (VECTOR(int64_t, 2))((-3L), 1L), // p_1296->g_728
        (VECTOR(uint8_t, 16))(0xEBL, (VECTOR(uint8_t, 4))(0xEBL, (VECTOR(uint8_t, 2))(0xEBL, 0xFCL), 0xFCL), 0xFCL, 0xEBL, 0xFCL, (VECTOR(uint8_t, 2))(0xEBL, 0xFCL), (VECTOR(uint8_t, 2))(0xEBL, 0xFCL), 0xEBL, 0xFCL, 0xEBL, 0xFCL), // p_1296->g_760
        {{(void*)0,(void*)0,&p_1296->g_125,(void*)0},{(void*)0,(void*)0,&p_1296->g_125,(void*)0},{(void*)0,(void*)0,&p_1296->g_125,(void*)0},{(void*)0,(void*)0,&p_1296->g_125,(void*)0},{(void*)0,(void*)0,&p_1296->g_125,(void*)0},{(void*)0,(void*)0,&p_1296->g_125,(void*)0},{(void*)0,(void*)0,&p_1296->g_125,(void*)0},{(void*)0,(void*)0,&p_1296->g_125,(void*)0}}, // p_1296->g_762
        &p_1296->g_233, // p_1296->g_765
        (VECTOR(int64_t, 4))(0x3F8ACCC628CFB1B3L, (VECTOR(int64_t, 2))(0x3F8ACCC628CFB1B3L, (-1L)), (-1L)), // p_1296->g_783
        (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 6L), 6L), // p_1296->g_788
        &p_1296->g_233, // p_1296->g_790
        {&p_1296->g_790,&p_1296->g_790}, // p_1296->g_789
        0x1CL, // p_1296->g_798
        (void*)0, // p_1296->g_847
        (void*)0, // p_1296->g_848
        &p_1296->g_125, // p_1296->g_850
        &p_1296->g_165, // p_1296->g_851
        (VECTOR(int64_t, 2))(0x68A94D6F2EEDFDFDL, 0L), // p_1296->g_917
        (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x6BC9DBE3L), 0x6BC9DBE3L), 0x6BC9DBE3L, 0L, 0x6BC9DBE3L), // p_1296->g_934
        (VECTOR(int32_t, 16))(0x41C682D9L, (VECTOR(int32_t, 4))(0x41C682D9L, (VECTOR(int32_t, 2))(0x41C682D9L, 9L), 9L), 9L, 0x41C682D9L, 9L, (VECTOR(int32_t, 2))(0x41C682D9L, 9L), (VECTOR(int32_t, 2))(0x41C682D9L, 9L), 0x41C682D9L, 9L, 0x41C682D9L, 9L), // p_1296->g_951
        (VECTOR(uint64_t, 4))(18446744073709551613UL, (VECTOR(uint64_t, 2))(18446744073709551613UL, 0UL), 0UL), // p_1296->g_955
        0x19C3F56E9C45B9C3L, // p_1296->g_980
        (VECTOR(uint32_t, 2))(4294967288UL, 4294967289UL), // p_1296->g_982
        0x81L, // p_1296->g_1000
        (VECTOR(uint8_t, 16))(9UL, (VECTOR(uint8_t, 4))(9UL, (VECTOR(uint8_t, 2))(9UL, 0xB1L), 0xB1L), 0xB1L, 9UL, 0xB1L, (VECTOR(uint8_t, 2))(9UL, 0xB1L), (VECTOR(uint8_t, 2))(9UL, 0xB1L), 9UL, 0xB1L, 9UL, 0xB1L), // p_1296->g_1069
        (VECTOR(int32_t, 2))(0x3708E4C9L, 0x3C5CF0C0L), // p_1296->g_1075
        (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-9L)), (-9L)), (-9L), (-1L), (-9L), (VECTOR(int32_t, 2))((-1L), (-9L)), (VECTOR(int32_t, 2))((-1L), (-9L)), (-1L), (-9L), (-1L), (-9L)), // p_1296->g_1130
        &p_1296->g_268, // p_1296->g_1142
        &p_1296->g_1142, // p_1296->g_1141
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 1UL), 1UL, 4294967295UL, 1UL, (VECTOR(uint32_t, 2))(4294967295UL, 1UL), (VECTOR(uint32_t, 2))(4294967295UL, 1UL), 4294967295UL, 1UL, 4294967295UL, 1UL), // p_1296->g_1218
        &p_1296->g_790, // p_1296->g_1259
        &p_1296->g_1259, // p_1296->g_1258
        0, // p_1296->v_collective
        sequence_input[get_global_id(0)], // p_1296->global_0_offset
        sequence_input[get_global_id(1)], // p_1296->global_1_offset
        sequence_input[get_global_id(2)], // p_1296->global_2_offset
        sequence_input[get_local_id(0)], // p_1296->local_0_offset
        sequence_input[get_local_id(1)], // p_1296->local_1_offset
        sequence_input[get_local_id(2)], // p_1296->local_2_offset
        sequence_input[get_group_id(0)], // p_1296->group_0_offset
        sequence_input[get_group_id(1)], // p_1296->group_1_offset
        sequence_input[get_group_id(2)], // p_1296->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 83)), permutations[0][get_linear_local_id()])), // p_1296->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1297 = c_1298;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1296);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1296->g_4.x, "p_1296->g_4.x", print_hash_value);
    transparent_crc(p_1296->g_4.y, "p_1296->g_4.y", print_hash_value);
    transparent_crc(p_1296->g_5.x, "p_1296->g_5.x", print_hash_value);
    transparent_crc(p_1296->g_5.y, "p_1296->g_5.y", print_hash_value);
    transparent_crc(p_1296->g_6.s0, "p_1296->g_6.s0", print_hash_value);
    transparent_crc(p_1296->g_6.s1, "p_1296->g_6.s1", print_hash_value);
    transparent_crc(p_1296->g_6.s2, "p_1296->g_6.s2", print_hash_value);
    transparent_crc(p_1296->g_6.s3, "p_1296->g_6.s3", print_hash_value);
    transparent_crc(p_1296->g_6.s4, "p_1296->g_6.s4", print_hash_value);
    transparent_crc(p_1296->g_6.s5, "p_1296->g_6.s5", print_hash_value);
    transparent_crc(p_1296->g_6.s6, "p_1296->g_6.s6", print_hash_value);
    transparent_crc(p_1296->g_6.s7, "p_1296->g_6.s7", print_hash_value);
    transparent_crc(p_1296->g_7.s0, "p_1296->g_7.s0", print_hash_value);
    transparent_crc(p_1296->g_7.s1, "p_1296->g_7.s1", print_hash_value);
    transparent_crc(p_1296->g_7.s2, "p_1296->g_7.s2", print_hash_value);
    transparent_crc(p_1296->g_7.s3, "p_1296->g_7.s3", print_hash_value);
    transparent_crc(p_1296->g_7.s4, "p_1296->g_7.s4", print_hash_value);
    transparent_crc(p_1296->g_7.s5, "p_1296->g_7.s5", print_hash_value);
    transparent_crc(p_1296->g_7.s6, "p_1296->g_7.s6", print_hash_value);
    transparent_crc(p_1296->g_7.s7, "p_1296->g_7.s7", print_hash_value);
    transparent_crc(p_1296->g_7.s8, "p_1296->g_7.s8", print_hash_value);
    transparent_crc(p_1296->g_7.s9, "p_1296->g_7.s9", print_hash_value);
    transparent_crc(p_1296->g_7.sa, "p_1296->g_7.sa", print_hash_value);
    transparent_crc(p_1296->g_7.sb, "p_1296->g_7.sb", print_hash_value);
    transparent_crc(p_1296->g_7.sc, "p_1296->g_7.sc", print_hash_value);
    transparent_crc(p_1296->g_7.sd, "p_1296->g_7.sd", print_hash_value);
    transparent_crc(p_1296->g_7.se, "p_1296->g_7.se", print_hash_value);
    transparent_crc(p_1296->g_7.sf, "p_1296->g_7.sf", print_hash_value);
    transparent_crc(p_1296->g_9.s0, "p_1296->g_9.s0", print_hash_value);
    transparent_crc(p_1296->g_9.s1, "p_1296->g_9.s1", print_hash_value);
    transparent_crc(p_1296->g_9.s2, "p_1296->g_9.s2", print_hash_value);
    transparent_crc(p_1296->g_9.s3, "p_1296->g_9.s3", print_hash_value);
    transparent_crc(p_1296->g_9.s4, "p_1296->g_9.s4", print_hash_value);
    transparent_crc(p_1296->g_9.s5, "p_1296->g_9.s5", print_hash_value);
    transparent_crc(p_1296->g_9.s6, "p_1296->g_9.s6", print_hash_value);
    transparent_crc(p_1296->g_9.s7, "p_1296->g_9.s7", print_hash_value);
    transparent_crc(p_1296->g_9.s8, "p_1296->g_9.s8", print_hash_value);
    transparent_crc(p_1296->g_9.s9, "p_1296->g_9.s9", print_hash_value);
    transparent_crc(p_1296->g_9.sa, "p_1296->g_9.sa", print_hash_value);
    transparent_crc(p_1296->g_9.sb, "p_1296->g_9.sb", print_hash_value);
    transparent_crc(p_1296->g_9.sc, "p_1296->g_9.sc", print_hash_value);
    transparent_crc(p_1296->g_9.sd, "p_1296->g_9.sd", print_hash_value);
    transparent_crc(p_1296->g_9.se, "p_1296->g_9.se", print_hash_value);
    transparent_crc(p_1296->g_9.sf, "p_1296->g_9.sf", print_hash_value);
    transparent_crc(p_1296->g_11.x, "p_1296->g_11.x", print_hash_value);
    transparent_crc(p_1296->g_11.y, "p_1296->g_11.y", print_hash_value);
    transparent_crc(p_1296->g_11.z, "p_1296->g_11.z", print_hash_value);
    transparent_crc(p_1296->g_11.w, "p_1296->g_11.w", print_hash_value);
    transparent_crc(p_1296->g_27, "p_1296->g_27", print_hash_value);
    transparent_crc(p_1296->g_79.s0, "p_1296->g_79.s0", print_hash_value);
    transparent_crc(p_1296->g_79.s1, "p_1296->g_79.s1", print_hash_value);
    transparent_crc(p_1296->g_79.s2, "p_1296->g_79.s2", print_hash_value);
    transparent_crc(p_1296->g_79.s3, "p_1296->g_79.s3", print_hash_value);
    transparent_crc(p_1296->g_79.s4, "p_1296->g_79.s4", print_hash_value);
    transparent_crc(p_1296->g_79.s5, "p_1296->g_79.s5", print_hash_value);
    transparent_crc(p_1296->g_79.s6, "p_1296->g_79.s6", print_hash_value);
    transparent_crc(p_1296->g_79.s7, "p_1296->g_79.s7", print_hash_value);
    transparent_crc(p_1296->g_79.s8, "p_1296->g_79.s8", print_hash_value);
    transparent_crc(p_1296->g_79.s9, "p_1296->g_79.s9", print_hash_value);
    transparent_crc(p_1296->g_79.sa, "p_1296->g_79.sa", print_hash_value);
    transparent_crc(p_1296->g_79.sb, "p_1296->g_79.sb", print_hash_value);
    transparent_crc(p_1296->g_79.sc, "p_1296->g_79.sc", print_hash_value);
    transparent_crc(p_1296->g_79.sd, "p_1296->g_79.sd", print_hash_value);
    transparent_crc(p_1296->g_79.se, "p_1296->g_79.se", print_hash_value);
    transparent_crc(p_1296->g_79.sf, "p_1296->g_79.sf", print_hash_value);
    transparent_crc(p_1296->g_83.s0, "p_1296->g_83.s0", print_hash_value);
    transparent_crc(p_1296->g_83.s1, "p_1296->g_83.s1", print_hash_value);
    transparent_crc(p_1296->g_83.s2, "p_1296->g_83.s2", print_hash_value);
    transparent_crc(p_1296->g_83.s3, "p_1296->g_83.s3", print_hash_value);
    transparent_crc(p_1296->g_83.s4, "p_1296->g_83.s4", print_hash_value);
    transparent_crc(p_1296->g_83.s5, "p_1296->g_83.s5", print_hash_value);
    transparent_crc(p_1296->g_83.s6, "p_1296->g_83.s6", print_hash_value);
    transparent_crc(p_1296->g_83.s7, "p_1296->g_83.s7", print_hash_value);
    transparent_crc(p_1296->g_83.s8, "p_1296->g_83.s8", print_hash_value);
    transparent_crc(p_1296->g_83.s9, "p_1296->g_83.s9", print_hash_value);
    transparent_crc(p_1296->g_83.sa, "p_1296->g_83.sa", print_hash_value);
    transparent_crc(p_1296->g_83.sb, "p_1296->g_83.sb", print_hash_value);
    transparent_crc(p_1296->g_83.sc, "p_1296->g_83.sc", print_hash_value);
    transparent_crc(p_1296->g_83.sd, "p_1296->g_83.sd", print_hash_value);
    transparent_crc(p_1296->g_83.se, "p_1296->g_83.se", print_hash_value);
    transparent_crc(p_1296->g_83.sf, "p_1296->g_83.sf", print_hash_value);
    transparent_crc(p_1296->g_90, "p_1296->g_90", print_hash_value);
    transparent_crc(p_1296->g_92.s0, "p_1296->g_92.s0", print_hash_value);
    transparent_crc(p_1296->g_92.s1, "p_1296->g_92.s1", print_hash_value);
    transparent_crc(p_1296->g_92.s2, "p_1296->g_92.s2", print_hash_value);
    transparent_crc(p_1296->g_92.s3, "p_1296->g_92.s3", print_hash_value);
    transparent_crc(p_1296->g_92.s4, "p_1296->g_92.s4", print_hash_value);
    transparent_crc(p_1296->g_92.s5, "p_1296->g_92.s5", print_hash_value);
    transparent_crc(p_1296->g_92.s6, "p_1296->g_92.s6", print_hash_value);
    transparent_crc(p_1296->g_92.s7, "p_1296->g_92.s7", print_hash_value);
    transparent_crc(p_1296->g_98.x, "p_1296->g_98.x", print_hash_value);
    transparent_crc(p_1296->g_98.y, "p_1296->g_98.y", print_hash_value);
    transparent_crc(p_1296->g_100.x, "p_1296->g_100.x", print_hash_value);
    transparent_crc(p_1296->g_100.y, "p_1296->g_100.y", print_hash_value);
    transparent_crc(p_1296->g_100.z, "p_1296->g_100.z", print_hash_value);
    transparent_crc(p_1296->g_100.w, "p_1296->g_100.w", print_hash_value);
    transparent_crc(p_1296->g_104.s0, "p_1296->g_104.s0", print_hash_value);
    transparent_crc(p_1296->g_104.s1, "p_1296->g_104.s1", print_hash_value);
    transparent_crc(p_1296->g_104.s2, "p_1296->g_104.s2", print_hash_value);
    transparent_crc(p_1296->g_104.s3, "p_1296->g_104.s3", print_hash_value);
    transparent_crc(p_1296->g_104.s4, "p_1296->g_104.s4", print_hash_value);
    transparent_crc(p_1296->g_104.s5, "p_1296->g_104.s5", print_hash_value);
    transparent_crc(p_1296->g_104.s6, "p_1296->g_104.s6", print_hash_value);
    transparent_crc(p_1296->g_104.s7, "p_1296->g_104.s7", print_hash_value);
    transparent_crc(p_1296->g_105.s0, "p_1296->g_105.s0", print_hash_value);
    transparent_crc(p_1296->g_105.s1, "p_1296->g_105.s1", print_hash_value);
    transparent_crc(p_1296->g_105.s2, "p_1296->g_105.s2", print_hash_value);
    transparent_crc(p_1296->g_105.s3, "p_1296->g_105.s3", print_hash_value);
    transparent_crc(p_1296->g_105.s4, "p_1296->g_105.s4", print_hash_value);
    transparent_crc(p_1296->g_105.s5, "p_1296->g_105.s5", print_hash_value);
    transparent_crc(p_1296->g_105.s6, "p_1296->g_105.s6", print_hash_value);
    transparent_crc(p_1296->g_105.s7, "p_1296->g_105.s7", print_hash_value);
    transparent_crc(p_1296->g_106.x, "p_1296->g_106.x", print_hash_value);
    transparent_crc(p_1296->g_106.y, "p_1296->g_106.y", print_hash_value);
    transparent_crc(p_1296->g_125, "p_1296->g_125", print_hash_value);
    transparent_crc(p_1296->g_140, "p_1296->g_140", print_hash_value);
    transparent_crc(p_1296->g_175, "p_1296->g_175", print_hash_value);
    transparent_crc(p_1296->g_179.x, "p_1296->g_179.x", print_hash_value);
    transparent_crc(p_1296->g_179.y, "p_1296->g_179.y", print_hash_value);
    transparent_crc(p_1296->g_180.x, "p_1296->g_180.x", print_hash_value);
    transparent_crc(p_1296->g_180.y, "p_1296->g_180.y", print_hash_value);
    transparent_crc(p_1296->g_180.z, "p_1296->g_180.z", print_hash_value);
    transparent_crc(p_1296->g_180.w, "p_1296->g_180.w", print_hash_value);
    transparent_crc(p_1296->g_181.x, "p_1296->g_181.x", print_hash_value);
    transparent_crc(p_1296->g_181.y, "p_1296->g_181.y", print_hash_value);
    transparent_crc(p_1296->g_196.s0, "p_1296->g_196.s0", print_hash_value);
    transparent_crc(p_1296->g_196.s1, "p_1296->g_196.s1", print_hash_value);
    transparent_crc(p_1296->g_196.s2, "p_1296->g_196.s2", print_hash_value);
    transparent_crc(p_1296->g_196.s3, "p_1296->g_196.s3", print_hash_value);
    transparent_crc(p_1296->g_196.s4, "p_1296->g_196.s4", print_hash_value);
    transparent_crc(p_1296->g_196.s5, "p_1296->g_196.s5", print_hash_value);
    transparent_crc(p_1296->g_196.s6, "p_1296->g_196.s6", print_hash_value);
    transparent_crc(p_1296->g_196.s7, "p_1296->g_196.s7", print_hash_value);
    transparent_crc(p_1296->g_196.s8, "p_1296->g_196.s8", print_hash_value);
    transparent_crc(p_1296->g_196.s9, "p_1296->g_196.s9", print_hash_value);
    transparent_crc(p_1296->g_196.sa, "p_1296->g_196.sa", print_hash_value);
    transparent_crc(p_1296->g_196.sb, "p_1296->g_196.sb", print_hash_value);
    transparent_crc(p_1296->g_196.sc, "p_1296->g_196.sc", print_hash_value);
    transparent_crc(p_1296->g_196.sd, "p_1296->g_196.sd", print_hash_value);
    transparent_crc(p_1296->g_196.se, "p_1296->g_196.se", print_hash_value);
    transparent_crc(p_1296->g_196.sf, "p_1296->g_196.sf", print_hash_value);
    transparent_crc(p_1296->g_219.s0, "p_1296->g_219.s0", print_hash_value);
    transparent_crc(p_1296->g_219.s1, "p_1296->g_219.s1", print_hash_value);
    transparent_crc(p_1296->g_219.s2, "p_1296->g_219.s2", print_hash_value);
    transparent_crc(p_1296->g_219.s3, "p_1296->g_219.s3", print_hash_value);
    transparent_crc(p_1296->g_219.s4, "p_1296->g_219.s4", print_hash_value);
    transparent_crc(p_1296->g_219.s5, "p_1296->g_219.s5", print_hash_value);
    transparent_crc(p_1296->g_219.s6, "p_1296->g_219.s6", print_hash_value);
    transparent_crc(p_1296->g_219.s7, "p_1296->g_219.s7", print_hash_value);
    transparent_crc(p_1296->g_222, "p_1296->g_222", print_hash_value);
    transparent_crc(p_1296->g_228, "p_1296->g_228", print_hash_value);
    transparent_crc(p_1296->g_233, "p_1296->g_233", print_hash_value);
    transparent_crc(p_1296->g_243.s0, "p_1296->g_243.s0", print_hash_value);
    transparent_crc(p_1296->g_243.s1, "p_1296->g_243.s1", print_hash_value);
    transparent_crc(p_1296->g_243.s2, "p_1296->g_243.s2", print_hash_value);
    transparent_crc(p_1296->g_243.s3, "p_1296->g_243.s3", print_hash_value);
    transparent_crc(p_1296->g_243.s4, "p_1296->g_243.s4", print_hash_value);
    transparent_crc(p_1296->g_243.s5, "p_1296->g_243.s5", print_hash_value);
    transparent_crc(p_1296->g_243.s6, "p_1296->g_243.s6", print_hash_value);
    transparent_crc(p_1296->g_243.s7, "p_1296->g_243.s7", print_hash_value);
    transparent_crc(p_1296->g_243.s8, "p_1296->g_243.s8", print_hash_value);
    transparent_crc(p_1296->g_243.s9, "p_1296->g_243.s9", print_hash_value);
    transparent_crc(p_1296->g_243.sa, "p_1296->g_243.sa", print_hash_value);
    transparent_crc(p_1296->g_243.sb, "p_1296->g_243.sb", print_hash_value);
    transparent_crc(p_1296->g_243.sc, "p_1296->g_243.sc", print_hash_value);
    transparent_crc(p_1296->g_243.sd, "p_1296->g_243.sd", print_hash_value);
    transparent_crc(p_1296->g_243.se, "p_1296->g_243.se", print_hash_value);
    transparent_crc(p_1296->g_243.sf, "p_1296->g_243.sf", print_hash_value);
    transparent_crc(p_1296->g_283.s0, "p_1296->g_283.s0", print_hash_value);
    transparent_crc(p_1296->g_283.s1, "p_1296->g_283.s1", print_hash_value);
    transparent_crc(p_1296->g_283.s2, "p_1296->g_283.s2", print_hash_value);
    transparent_crc(p_1296->g_283.s3, "p_1296->g_283.s3", print_hash_value);
    transparent_crc(p_1296->g_283.s4, "p_1296->g_283.s4", print_hash_value);
    transparent_crc(p_1296->g_283.s5, "p_1296->g_283.s5", print_hash_value);
    transparent_crc(p_1296->g_283.s6, "p_1296->g_283.s6", print_hash_value);
    transparent_crc(p_1296->g_283.s7, "p_1296->g_283.s7", print_hash_value);
    transparent_crc(p_1296->g_311, "p_1296->g_311", print_hash_value);
    transparent_crc(p_1296->g_348.s0, "p_1296->g_348.s0", print_hash_value);
    transparent_crc(p_1296->g_348.s1, "p_1296->g_348.s1", print_hash_value);
    transparent_crc(p_1296->g_348.s2, "p_1296->g_348.s2", print_hash_value);
    transparent_crc(p_1296->g_348.s3, "p_1296->g_348.s3", print_hash_value);
    transparent_crc(p_1296->g_348.s4, "p_1296->g_348.s4", print_hash_value);
    transparent_crc(p_1296->g_348.s5, "p_1296->g_348.s5", print_hash_value);
    transparent_crc(p_1296->g_348.s6, "p_1296->g_348.s6", print_hash_value);
    transparent_crc(p_1296->g_348.s7, "p_1296->g_348.s7", print_hash_value);
    transparent_crc(p_1296->g_349.s0, "p_1296->g_349.s0", print_hash_value);
    transparent_crc(p_1296->g_349.s1, "p_1296->g_349.s1", print_hash_value);
    transparent_crc(p_1296->g_349.s2, "p_1296->g_349.s2", print_hash_value);
    transparent_crc(p_1296->g_349.s3, "p_1296->g_349.s3", print_hash_value);
    transparent_crc(p_1296->g_349.s4, "p_1296->g_349.s4", print_hash_value);
    transparent_crc(p_1296->g_349.s5, "p_1296->g_349.s5", print_hash_value);
    transparent_crc(p_1296->g_349.s6, "p_1296->g_349.s6", print_hash_value);
    transparent_crc(p_1296->g_349.s7, "p_1296->g_349.s7", print_hash_value);
    transparent_crc(p_1296->g_369, "p_1296->g_369", print_hash_value);
    transparent_crc(p_1296->g_370.s0, "p_1296->g_370.s0", print_hash_value);
    transparent_crc(p_1296->g_370.s1, "p_1296->g_370.s1", print_hash_value);
    transparent_crc(p_1296->g_370.s2, "p_1296->g_370.s2", print_hash_value);
    transparent_crc(p_1296->g_370.s3, "p_1296->g_370.s3", print_hash_value);
    transparent_crc(p_1296->g_370.s4, "p_1296->g_370.s4", print_hash_value);
    transparent_crc(p_1296->g_370.s5, "p_1296->g_370.s5", print_hash_value);
    transparent_crc(p_1296->g_370.s6, "p_1296->g_370.s6", print_hash_value);
    transparent_crc(p_1296->g_370.s7, "p_1296->g_370.s7", print_hash_value);
    transparent_crc(p_1296->g_386.s0, "p_1296->g_386.s0", print_hash_value);
    transparent_crc(p_1296->g_386.s1, "p_1296->g_386.s1", print_hash_value);
    transparent_crc(p_1296->g_386.s2, "p_1296->g_386.s2", print_hash_value);
    transparent_crc(p_1296->g_386.s3, "p_1296->g_386.s3", print_hash_value);
    transparent_crc(p_1296->g_386.s4, "p_1296->g_386.s4", print_hash_value);
    transparent_crc(p_1296->g_386.s5, "p_1296->g_386.s5", print_hash_value);
    transparent_crc(p_1296->g_386.s6, "p_1296->g_386.s6", print_hash_value);
    transparent_crc(p_1296->g_386.s7, "p_1296->g_386.s7", print_hash_value);
    transparent_crc(p_1296->g_386.s8, "p_1296->g_386.s8", print_hash_value);
    transparent_crc(p_1296->g_386.s9, "p_1296->g_386.s9", print_hash_value);
    transparent_crc(p_1296->g_386.sa, "p_1296->g_386.sa", print_hash_value);
    transparent_crc(p_1296->g_386.sb, "p_1296->g_386.sb", print_hash_value);
    transparent_crc(p_1296->g_386.sc, "p_1296->g_386.sc", print_hash_value);
    transparent_crc(p_1296->g_386.sd, "p_1296->g_386.sd", print_hash_value);
    transparent_crc(p_1296->g_386.se, "p_1296->g_386.se", print_hash_value);
    transparent_crc(p_1296->g_386.sf, "p_1296->g_386.sf", print_hash_value);
    transparent_crc(p_1296->g_405, "p_1296->g_405", print_hash_value);
    transparent_crc(p_1296->g_410.x, "p_1296->g_410.x", print_hash_value);
    transparent_crc(p_1296->g_410.y, "p_1296->g_410.y", print_hash_value);
    transparent_crc(p_1296->g_413.x, "p_1296->g_413.x", print_hash_value);
    transparent_crc(p_1296->g_413.y, "p_1296->g_413.y", print_hash_value);
    transparent_crc(p_1296->g_413.z, "p_1296->g_413.z", print_hash_value);
    transparent_crc(p_1296->g_413.w, "p_1296->g_413.w", print_hash_value);
    transparent_crc(p_1296->g_414.s0, "p_1296->g_414.s0", print_hash_value);
    transparent_crc(p_1296->g_414.s1, "p_1296->g_414.s1", print_hash_value);
    transparent_crc(p_1296->g_414.s2, "p_1296->g_414.s2", print_hash_value);
    transparent_crc(p_1296->g_414.s3, "p_1296->g_414.s3", print_hash_value);
    transparent_crc(p_1296->g_414.s4, "p_1296->g_414.s4", print_hash_value);
    transparent_crc(p_1296->g_414.s5, "p_1296->g_414.s5", print_hash_value);
    transparent_crc(p_1296->g_414.s6, "p_1296->g_414.s6", print_hash_value);
    transparent_crc(p_1296->g_414.s7, "p_1296->g_414.s7", print_hash_value);
    transparent_crc(p_1296->g_414.s8, "p_1296->g_414.s8", print_hash_value);
    transparent_crc(p_1296->g_414.s9, "p_1296->g_414.s9", print_hash_value);
    transparent_crc(p_1296->g_414.sa, "p_1296->g_414.sa", print_hash_value);
    transparent_crc(p_1296->g_414.sb, "p_1296->g_414.sb", print_hash_value);
    transparent_crc(p_1296->g_414.sc, "p_1296->g_414.sc", print_hash_value);
    transparent_crc(p_1296->g_414.sd, "p_1296->g_414.sd", print_hash_value);
    transparent_crc(p_1296->g_414.se, "p_1296->g_414.se", print_hash_value);
    transparent_crc(p_1296->g_414.sf, "p_1296->g_414.sf", print_hash_value);
    transparent_crc(p_1296->g_415.s0, "p_1296->g_415.s0", print_hash_value);
    transparent_crc(p_1296->g_415.s1, "p_1296->g_415.s1", print_hash_value);
    transparent_crc(p_1296->g_415.s2, "p_1296->g_415.s2", print_hash_value);
    transparent_crc(p_1296->g_415.s3, "p_1296->g_415.s3", print_hash_value);
    transparent_crc(p_1296->g_415.s4, "p_1296->g_415.s4", print_hash_value);
    transparent_crc(p_1296->g_415.s5, "p_1296->g_415.s5", print_hash_value);
    transparent_crc(p_1296->g_415.s6, "p_1296->g_415.s6", print_hash_value);
    transparent_crc(p_1296->g_415.s7, "p_1296->g_415.s7", print_hash_value);
    transparent_crc(p_1296->g_415.s8, "p_1296->g_415.s8", print_hash_value);
    transparent_crc(p_1296->g_415.s9, "p_1296->g_415.s9", print_hash_value);
    transparent_crc(p_1296->g_415.sa, "p_1296->g_415.sa", print_hash_value);
    transparent_crc(p_1296->g_415.sb, "p_1296->g_415.sb", print_hash_value);
    transparent_crc(p_1296->g_415.sc, "p_1296->g_415.sc", print_hash_value);
    transparent_crc(p_1296->g_415.sd, "p_1296->g_415.sd", print_hash_value);
    transparent_crc(p_1296->g_415.se, "p_1296->g_415.se", print_hash_value);
    transparent_crc(p_1296->g_415.sf, "p_1296->g_415.sf", print_hash_value);
    transparent_crc(p_1296->g_422.s0, "p_1296->g_422.s0", print_hash_value);
    transparent_crc(p_1296->g_422.s1, "p_1296->g_422.s1", print_hash_value);
    transparent_crc(p_1296->g_422.s2, "p_1296->g_422.s2", print_hash_value);
    transparent_crc(p_1296->g_422.s3, "p_1296->g_422.s3", print_hash_value);
    transparent_crc(p_1296->g_422.s4, "p_1296->g_422.s4", print_hash_value);
    transparent_crc(p_1296->g_422.s5, "p_1296->g_422.s5", print_hash_value);
    transparent_crc(p_1296->g_422.s6, "p_1296->g_422.s6", print_hash_value);
    transparent_crc(p_1296->g_422.s7, "p_1296->g_422.s7", print_hash_value);
    transparent_crc(p_1296->g_440.s0, "p_1296->g_440.s0", print_hash_value);
    transparent_crc(p_1296->g_440.s1, "p_1296->g_440.s1", print_hash_value);
    transparent_crc(p_1296->g_440.s2, "p_1296->g_440.s2", print_hash_value);
    transparent_crc(p_1296->g_440.s3, "p_1296->g_440.s3", print_hash_value);
    transparent_crc(p_1296->g_440.s4, "p_1296->g_440.s4", print_hash_value);
    transparent_crc(p_1296->g_440.s5, "p_1296->g_440.s5", print_hash_value);
    transparent_crc(p_1296->g_440.s6, "p_1296->g_440.s6", print_hash_value);
    transparent_crc(p_1296->g_440.s7, "p_1296->g_440.s7", print_hash_value);
    transparent_crc(p_1296->g_440.s8, "p_1296->g_440.s8", print_hash_value);
    transparent_crc(p_1296->g_440.s9, "p_1296->g_440.s9", print_hash_value);
    transparent_crc(p_1296->g_440.sa, "p_1296->g_440.sa", print_hash_value);
    transparent_crc(p_1296->g_440.sb, "p_1296->g_440.sb", print_hash_value);
    transparent_crc(p_1296->g_440.sc, "p_1296->g_440.sc", print_hash_value);
    transparent_crc(p_1296->g_440.sd, "p_1296->g_440.sd", print_hash_value);
    transparent_crc(p_1296->g_440.se, "p_1296->g_440.se", print_hash_value);
    transparent_crc(p_1296->g_440.sf, "p_1296->g_440.sf", print_hash_value);
    transparent_crc(p_1296->g_492.s0, "p_1296->g_492.s0", print_hash_value);
    transparent_crc(p_1296->g_492.s1, "p_1296->g_492.s1", print_hash_value);
    transparent_crc(p_1296->g_492.s2, "p_1296->g_492.s2", print_hash_value);
    transparent_crc(p_1296->g_492.s3, "p_1296->g_492.s3", print_hash_value);
    transparent_crc(p_1296->g_492.s4, "p_1296->g_492.s4", print_hash_value);
    transparent_crc(p_1296->g_492.s5, "p_1296->g_492.s5", print_hash_value);
    transparent_crc(p_1296->g_492.s6, "p_1296->g_492.s6", print_hash_value);
    transparent_crc(p_1296->g_492.s7, "p_1296->g_492.s7", print_hash_value);
    transparent_crc(p_1296->g_492.s8, "p_1296->g_492.s8", print_hash_value);
    transparent_crc(p_1296->g_492.s9, "p_1296->g_492.s9", print_hash_value);
    transparent_crc(p_1296->g_492.sa, "p_1296->g_492.sa", print_hash_value);
    transparent_crc(p_1296->g_492.sb, "p_1296->g_492.sb", print_hash_value);
    transparent_crc(p_1296->g_492.sc, "p_1296->g_492.sc", print_hash_value);
    transparent_crc(p_1296->g_492.sd, "p_1296->g_492.sd", print_hash_value);
    transparent_crc(p_1296->g_492.se, "p_1296->g_492.se", print_hash_value);
    transparent_crc(p_1296->g_492.sf, "p_1296->g_492.sf", print_hash_value);
    transparent_crc(p_1296->g_503.x, "p_1296->g_503.x", print_hash_value);
    transparent_crc(p_1296->g_503.y, "p_1296->g_503.y", print_hash_value);
    transparent_crc(p_1296->g_503.z, "p_1296->g_503.z", print_hash_value);
    transparent_crc(p_1296->g_503.w, "p_1296->g_503.w", print_hash_value);
    transparent_crc(p_1296->g_504.x, "p_1296->g_504.x", print_hash_value);
    transparent_crc(p_1296->g_504.y, "p_1296->g_504.y", print_hash_value);
    transparent_crc(p_1296->g_504.z, "p_1296->g_504.z", print_hash_value);
    transparent_crc(p_1296->g_504.w, "p_1296->g_504.w", print_hash_value);
    transparent_crc(p_1296->g_505.s0, "p_1296->g_505.s0", print_hash_value);
    transparent_crc(p_1296->g_505.s1, "p_1296->g_505.s1", print_hash_value);
    transparent_crc(p_1296->g_505.s2, "p_1296->g_505.s2", print_hash_value);
    transparent_crc(p_1296->g_505.s3, "p_1296->g_505.s3", print_hash_value);
    transparent_crc(p_1296->g_505.s4, "p_1296->g_505.s4", print_hash_value);
    transparent_crc(p_1296->g_505.s5, "p_1296->g_505.s5", print_hash_value);
    transparent_crc(p_1296->g_505.s6, "p_1296->g_505.s6", print_hash_value);
    transparent_crc(p_1296->g_505.s7, "p_1296->g_505.s7", print_hash_value);
    transparent_crc(p_1296->g_505.s8, "p_1296->g_505.s8", print_hash_value);
    transparent_crc(p_1296->g_505.s9, "p_1296->g_505.s9", print_hash_value);
    transparent_crc(p_1296->g_505.sa, "p_1296->g_505.sa", print_hash_value);
    transparent_crc(p_1296->g_505.sb, "p_1296->g_505.sb", print_hash_value);
    transparent_crc(p_1296->g_505.sc, "p_1296->g_505.sc", print_hash_value);
    transparent_crc(p_1296->g_505.sd, "p_1296->g_505.sd", print_hash_value);
    transparent_crc(p_1296->g_505.se, "p_1296->g_505.se", print_hash_value);
    transparent_crc(p_1296->g_505.sf, "p_1296->g_505.sf", print_hash_value);
    transparent_crc(p_1296->g_566, "p_1296->g_566", print_hash_value);
    transparent_crc(p_1296->g_568, "p_1296->g_568", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(p_1296->g_570[i][j], "p_1296->g_570[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1296->g_589.s0, "p_1296->g_589.s0", print_hash_value);
    transparent_crc(p_1296->g_589.s1, "p_1296->g_589.s1", print_hash_value);
    transparent_crc(p_1296->g_589.s2, "p_1296->g_589.s2", print_hash_value);
    transparent_crc(p_1296->g_589.s3, "p_1296->g_589.s3", print_hash_value);
    transparent_crc(p_1296->g_589.s4, "p_1296->g_589.s4", print_hash_value);
    transparent_crc(p_1296->g_589.s5, "p_1296->g_589.s5", print_hash_value);
    transparent_crc(p_1296->g_589.s6, "p_1296->g_589.s6", print_hash_value);
    transparent_crc(p_1296->g_589.s7, "p_1296->g_589.s7", print_hash_value);
    transparent_crc(p_1296->g_650.x, "p_1296->g_650.x", print_hash_value);
    transparent_crc(p_1296->g_650.y, "p_1296->g_650.y", print_hash_value);
    transparent_crc(p_1296->g_697.x, "p_1296->g_697.x", print_hash_value);
    transparent_crc(p_1296->g_697.y, "p_1296->g_697.y", print_hash_value);
    transparent_crc(p_1296->g_697.z, "p_1296->g_697.z", print_hash_value);
    transparent_crc(p_1296->g_697.w, "p_1296->g_697.w", print_hash_value);
    transparent_crc(p_1296->g_727.x, "p_1296->g_727.x", print_hash_value);
    transparent_crc(p_1296->g_727.y, "p_1296->g_727.y", print_hash_value);
    transparent_crc(p_1296->g_728.x, "p_1296->g_728.x", print_hash_value);
    transparent_crc(p_1296->g_728.y, "p_1296->g_728.y", print_hash_value);
    transparent_crc(p_1296->g_760.s0, "p_1296->g_760.s0", print_hash_value);
    transparent_crc(p_1296->g_760.s1, "p_1296->g_760.s1", print_hash_value);
    transparent_crc(p_1296->g_760.s2, "p_1296->g_760.s2", print_hash_value);
    transparent_crc(p_1296->g_760.s3, "p_1296->g_760.s3", print_hash_value);
    transparent_crc(p_1296->g_760.s4, "p_1296->g_760.s4", print_hash_value);
    transparent_crc(p_1296->g_760.s5, "p_1296->g_760.s5", print_hash_value);
    transparent_crc(p_1296->g_760.s6, "p_1296->g_760.s6", print_hash_value);
    transparent_crc(p_1296->g_760.s7, "p_1296->g_760.s7", print_hash_value);
    transparent_crc(p_1296->g_760.s8, "p_1296->g_760.s8", print_hash_value);
    transparent_crc(p_1296->g_760.s9, "p_1296->g_760.s9", print_hash_value);
    transparent_crc(p_1296->g_760.sa, "p_1296->g_760.sa", print_hash_value);
    transparent_crc(p_1296->g_760.sb, "p_1296->g_760.sb", print_hash_value);
    transparent_crc(p_1296->g_760.sc, "p_1296->g_760.sc", print_hash_value);
    transparent_crc(p_1296->g_760.sd, "p_1296->g_760.sd", print_hash_value);
    transparent_crc(p_1296->g_760.se, "p_1296->g_760.se", print_hash_value);
    transparent_crc(p_1296->g_760.sf, "p_1296->g_760.sf", print_hash_value);
    transparent_crc(p_1296->g_783.x, "p_1296->g_783.x", print_hash_value);
    transparent_crc(p_1296->g_783.y, "p_1296->g_783.y", print_hash_value);
    transparent_crc(p_1296->g_783.z, "p_1296->g_783.z", print_hash_value);
    transparent_crc(p_1296->g_783.w, "p_1296->g_783.w", print_hash_value);
    transparent_crc(p_1296->g_788.x, "p_1296->g_788.x", print_hash_value);
    transparent_crc(p_1296->g_788.y, "p_1296->g_788.y", print_hash_value);
    transparent_crc(p_1296->g_788.z, "p_1296->g_788.z", print_hash_value);
    transparent_crc(p_1296->g_788.w, "p_1296->g_788.w", print_hash_value);
    transparent_crc(p_1296->g_798, "p_1296->g_798", print_hash_value);
    transparent_crc(p_1296->g_917.x, "p_1296->g_917.x", print_hash_value);
    transparent_crc(p_1296->g_917.y, "p_1296->g_917.y", print_hash_value);
    transparent_crc(p_1296->g_934.s0, "p_1296->g_934.s0", print_hash_value);
    transparent_crc(p_1296->g_934.s1, "p_1296->g_934.s1", print_hash_value);
    transparent_crc(p_1296->g_934.s2, "p_1296->g_934.s2", print_hash_value);
    transparent_crc(p_1296->g_934.s3, "p_1296->g_934.s3", print_hash_value);
    transparent_crc(p_1296->g_934.s4, "p_1296->g_934.s4", print_hash_value);
    transparent_crc(p_1296->g_934.s5, "p_1296->g_934.s5", print_hash_value);
    transparent_crc(p_1296->g_934.s6, "p_1296->g_934.s6", print_hash_value);
    transparent_crc(p_1296->g_934.s7, "p_1296->g_934.s7", print_hash_value);
    transparent_crc(p_1296->g_951.s0, "p_1296->g_951.s0", print_hash_value);
    transparent_crc(p_1296->g_951.s1, "p_1296->g_951.s1", print_hash_value);
    transparent_crc(p_1296->g_951.s2, "p_1296->g_951.s2", print_hash_value);
    transparent_crc(p_1296->g_951.s3, "p_1296->g_951.s3", print_hash_value);
    transparent_crc(p_1296->g_951.s4, "p_1296->g_951.s4", print_hash_value);
    transparent_crc(p_1296->g_951.s5, "p_1296->g_951.s5", print_hash_value);
    transparent_crc(p_1296->g_951.s6, "p_1296->g_951.s6", print_hash_value);
    transparent_crc(p_1296->g_951.s7, "p_1296->g_951.s7", print_hash_value);
    transparent_crc(p_1296->g_951.s8, "p_1296->g_951.s8", print_hash_value);
    transparent_crc(p_1296->g_951.s9, "p_1296->g_951.s9", print_hash_value);
    transparent_crc(p_1296->g_951.sa, "p_1296->g_951.sa", print_hash_value);
    transparent_crc(p_1296->g_951.sb, "p_1296->g_951.sb", print_hash_value);
    transparent_crc(p_1296->g_951.sc, "p_1296->g_951.sc", print_hash_value);
    transparent_crc(p_1296->g_951.sd, "p_1296->g_951.sd", print_hash_value);
    transparent_crc(p_1296->g_951.se, "p_1296->g_951.se", print_hash_value);
    transparent_crc(p_1296->g_951.sf, "p_1296->g_951.sf", print_hash_value);
    transparent_crc(p_1296->g_955.x, "p_1296->g_955.x", print_hash_value);
    transparent_crc(p_1296->g_955.y, "p_1296->g_955.y", print_hash_value);
    transparent_crc(p_1296->g_955.z, "p_1296->g_955.z", print_hash_value);
    transparent_crc(p_1296->g_955.w, "p_1296->g_955.w", print_hash_value);
    transparent_crc(p_1296->g_980, "p_1296->g_980", print_hash_value);
    transparent_crc(p_1296->g_982.x, "p_1296->g_982.x", print_hash_value);
    transparent_crc(p_1296->g_982.y, "p_1296->g_982.y", print_hash_value);
    transparent_crc(p_1296->g_1000, "p_1296->g_1000", print_hash_value);
    transparent_crc(p_1296->g_1069.s0, "p_1296->g_1069.s0", print_hash_value);
    transparent_crc(p_1296->g_1069.s1, "p_1296->g_1069.s1", print_hash_value);
    transparent_crc(p_1296->g_1069.s2, "p_1296->g_1069.s2", print_hash_value);
    transparent_crc(p_1296->g_1069.s3, "p_1296->g_1069.s3", print_hash_value);
    transparent_crc(p_1296->g_1069.s4, "p_1296->g_1069.s4", print_hash_value);
    transparent_crc(p_1296->g_1069.s5, "p_1296->g_1069.s5", print_hash_value);
    transparent_crc(p_1296->g_1069.s6, "p_1296->g_1069.s6", print_hash_value);
    transparent_crc(p_1296->g_1069.s7, "p_1296->g_1069.s7", print_hash_value);
    transparent_crc(p_1296->g_1069.s8, "p_1296->g_1069.s8", print_hash_value);
    transparent_crc(p_1296->g_1069.s9, "p_1296->g_1069.s9", print_hash_value);
    transparent_crc(p_1296->g_1069.sa, "p_1296->g_1069.sa", print_hash_value);
    transparent_crc(p_1296->g_1069.sb, "p_1296->g_1069.sb", print_hash_value);
    transparent_crc(p_1296->g_1069.sc, "p_1296->g_1069.sc", print_hash_value);
    transparent_crc(p_1296->g_1069.sd, "p_1296->g_1069.sd", print_hash_value);
    transparent_crc(p_1296->g_1069.se, "p_1296->g_1069.se", print_hash_value);
    transparent_crc(p_1296->g_1069.sf, "p_1296->g_1069.sf", print_hash_value);
    transparent_crc(p_1296->g_1075.x, "p_1296->g_1075.x", print_hash_value);
    transparent_crc(p_1296->g_1075.y, "p_1296->g_1075.y", print_hash_value);
    transparent_crc(p_1296->g_1130.s0, "p_1296->g_1130.s0", print_hash_value);
    transparent_crc(p_1296->g_1130.s1, "p_1296->g_1130.s1", print_hash_value);
    transparent_crc(p_1296->g_1130.s2, "p_1296->g_1130.s2", print_hash_value);
    transparent_crc(p_1296->g_1130.s3, "p_1296->g_1130.s3", print_hash_value);
    transparent_crc(p_1296->g_1130.s4, "p_1296->g_1130.s4", print_hash_value);
    transparent_crc(p_1296->g_1130.s5, "p_1296->g_1130.s5", print_hash_value);
    transparent_crc(p_1296->g_1130.s6, "p_1296->g_1130.s6", print_hash_value);
    transparent_crc(p_1296->g_1130.s7, "p_1296->g_1130.s7", print_hash_value);
    transparent_crc(p_1296->g_1130.s8, "p_1296->g_1130.s8", print_hash_value);
    transparent_crc(p_1296->g_1130.s9, "p_1296->g_1130.s9", print_hash_value);
    transparent_crc(p_1296->g_1130.sa, "p_1296->g_1130.sa", print_hash_value);
    transparent_crc(p_1296->g_1130.sb, "p_1296->g_1130.sb", print_hash_value);
    transparent_crc(p_1296->g_1130.sc, "p_1296->g_1130.sc", print_hash_value);
    transparent_crc(p_1296->g_1130.sd, "p_1296->g_1130.sd", print_hash_value);
    transparent_crc(p_1296->g_1130.se, "p_1296->g_1130.se", print_hash_value);
    transparent_crc(p_1296->g_1130.sf, "p_1296->g_1130.sf", print_hash_value);
    transparent_crc(p_1296->g_1218.s0, "p_1296->g_1218.s0", print_hash_value);
    transparent_crc(p_1296->g_1218.s1, "p_1296->g_1218.s1", print_hash_value);
    transparent_crc(p_1296->g_1218.s2, "p_1296->g_1218.s2", print_hash_value);
    transparent_crc(p_1296->g_1218.s3, "p_1296->g_1218.s3", print_hash_value);
    transparent_crc(p_1296->g_1218.s4, "p_1296->g_1218.s4", print_hash_value);
    transparent_crc(p_1296->g_1218.s5, "p_1296->g_1218.s5", print_hash_value);
    transparent_crc(p_1296->g_1218.s6, "p_1296->g_1218.s6", print_hash_value);
    transparent_crc(p_1296->g_1218.s7, "p_1296->g_1218.s7", print_hash_value);
    transparent_crc(p_1296->g_1218.s8, "p_1296->g_1218.s8", print_hash_value);
    transparent_crc(p_1296->g_1218.s9, "p_1296->g_1218.s9", print_hash_value);
    transparent_crc(p_1296->g_1218.sa, "p_1296->g_1218.sa", print_hash_value);
    transparent_crc(p_1296->g_1218.sb, "p_1296->g_1218.sb", print_hash_value);
    transparent_crc(p_1296->g_1218.sc, "p_1296->g_1218.sc", print_hash_value);
    transparent_crc(p_1296->g_1218.sd, "p_1296->g_1218.sd", print_hash_value);
    transparent_crc(p_1296->g_1218.se, "p_1296->g_1218.se", print_hash_value);
    transparent_crc(p_1296->g_1218.sf, "p_1296->g_1218.sf", print_hash_value);
    transparent_crc(p_1296->v_collective, "p_1296->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 3; i++)
            transparent_crc(p_1296->l_special_values[i], "p_1296->l_special_values[i]", print_hash_value);
    transparent_crc(p_1296->l_comm_values[get_linear_local_id()], "p_1296->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1296->g_comm_values[get_linear_group_id() * 83 + get_linear_local_id()], "p_1296->g_comm_values[get_linear_group_id() * 83 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
