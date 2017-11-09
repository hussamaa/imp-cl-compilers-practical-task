// --atomics 92 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 73,31,1 -l 73,1,1
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

__constant uint32_t permutations[10][73] = {
{23,69,32,47,43,29,13,61,27,66,3,34,8,46,55,64,60,37,4,72,40,25,35,53,36,45,48,51,39,42,15,38,11,33,17,49,21,65,2,41,44,54,56,28,24,16,19,30,63,70,0,9,58,20,71,14,50,12,57,26,7,22,1,5,67,68,31,6,52,59,18,62,10}, // permutation 0
{67,64,23,0,71,4,65,34,52,37,62,29,8,48,68,47,35,43,12,15,22,61,60,5,19,2,38,31,63,54,66,46,1,16,44,40,59,11,30,10,7,21,57,32,18,72,3,41,20,56,33,9,42,70,26,45,28,58,50,39,27,53,69,17,51,49,36,25,13,55,14,6,24}, // permutation 1
{20,48,70,29,68,12,30,59,64,61,54,10,28,71,57,3,36,4,46,13,53,23,5,50,1,16,49,21,37,41,26,25,56,42,34,22,63,40,66,52,43,17,15,14,72,44,65,31,11,8,58,38,69,67,32,33,55,2,51,62,7,35,60,0,24,6,19,27,45,9,39,18,47}, // permutation 2
{59,50,28,70,19,14,13,22,23,10,58,36,71,62,32,66,9,12,17,45,15,48,34,47,30,26,42,49,38,21,40,57,68,33,46,24,5,55,41,1,63,25,52,18,51,53,4,3,43,65,0,37,69,31,8,6,64,67,44,61,29,54,7,20,11,39,72,2,56,16,27,35,60}, // permutation 3
{14,27,28,32,20,11,33,30,34,29,6,2,17,49,22,31,67,3,15,57,26,65,71,53,23,68,41,16,21,43,69,45,46,24,0,8,13,48,63,40,12,59,52,66,55,4,10,44,60,70,7,61,50,72,9,51,39,18,1,37,42,25,38,19,36,62,5,64,56,47,35,54,58}, // permutation 4
{53,69,7,4,33,46,13,12,38,55,24,8,37,14,40,26,45,43,44,41,72,9,31,16,49,6,25,39,0,32,71,50,51,27,58,10,67,1,30,20,52,5,15,2,68,21,47,34,48,64,11,23,62,61,17,18,66,22,35,59,36,70,63,56,60,65,57,28,54,19,29,3,42}, // permutation 5
{52,22,11,9,27,25,54,6,14,31,4,23,7,57,55,66,69,60,43,64,44,39,42,34,40,17,70,58,50,71,72,47,32,13,61,8,24,19,0,15,63,29,46,36,20,5,28,59,2,26,41,1,48,33,68,65,49,67,12,53,30,51,37,16,18,56,10,38,35,21,62,45,3}, // permutation 6
{45,22,72,55,20,57,50,63,66,12,38,48,54,35,23,7,52,68,51,32,16,42,34,46,18,1,49,19,60,5,17,0,25,69,61,47,64,37,44,28,13,3,6,56,59,71,29,2,65,53,39,26,33,70,40,8,67,14,21,41,58,10,9,62,4,27,15,11,36,30,31,43,24}, // permutation 7
{60,4,13,68,20,47,34,52,42,43,8,66,11,71,56,44,37,2,23,41,70,24,21,10,18,61,25,6,48,40,1,64,5,26,57,17,31,16,3,69,53,0,27,51,12,46,54,58,65,9,15,50,28,63,67,59,14,19,33,38,62,72,55,45,30,49,7,29,36,35,39,22,32}, // permutation 8
{12,20,7,44,8,72,3,22,69,4,13,6,25,24,33,65,64,48,34,42,27,40,55,52,18,15,51,46,49,35,10,67,53,0,56,29,70,26,19,50,66,38,2,41,28,21,14,1,68,30,62,63,36,71,23,43,16,17,54,60,45,39,11,59,5,9,57,31,61,58,32,47,37} // permutation 9
};

// Seed: 212783756

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   volatile int32_t  f0;
   int32_t  f1;
   int32_t  f2;
   uint32_t  f3;
   uint64_t  f4;
   int32_t  f5;
   int64_t  f6;
   uint64_t  f7;
   volatile int64_t  f8;
};

struct S1 {
   volatile uint64_t  f0;
};

union U2 {
   int8_t * f0;
   struct S1  f1;
   int8_t * volatile  f2;
   int64_t  f3;
   volatile int32_t  f4;
};

struct S3 {
    uint32_t g_10;
    int32_t g_17;
    uint32_t g_21;
    int64_t g_63;
    uint8_t g_76[1];
    volatile int8_t g_79;
    volatile uint8_t g_80;
    int32_t g_85;
    int32_t ** volatile g_86;
    int32_t *g_88;
    int32_t ** volatile g_87;
    volatile struct S0 g_94;
    VECTOR(int32_t, 4) g_97;
    int32_t *g_106;
    int8_t g_109[7][3][3];
    volatile struct S0 g_293[2][6];
    volatile struct S0 g_294;
    int8_t *g_296;
    int8_t **g_295[6][7];
    int8_t *** volatile g_297;
    uint8_t g_309;
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
uint8_t  func_1(struct S3 * p_318);
int8_t ** func_2(int64_t  p_3, int32_t  p_4, uint8_t  p_5, int8_t  p_6, int16_t  p_7, struct S3 * p_318);
int64_t  func_27(uint32_t * p_28, int32_t * p_29, struct S3 * p_318);
int16_t  func_30(uint64_t  p_31, int32_t  p_32, int16_t  p_33, struct S3 * p_318);
int32_t  func_34(int32_t * p_35, uint32_t  p_36, struct S3 * p_318);
int16_t  func_37(int8_t * p_38, int8_t ** p_39, int8_t * p_40, struct S3 * p_318);
int8_t * func_41(int32_t  p_42, struct S3 * p_318);
int32_t * func_43(uint8_t  p_44, uint16_t  p_45, struct S3 * p_318);
int32_t  func_51(uint32_t  p_52, struct S3 * p_318);
uint8_t  func_66(uint32_t  p_67, uint32_t * p_68, uint32_t * p_69, struct S3 * p_318);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_318->l_comm_values p_318->g_comm_values p_318->g_10 p_318->g_21 p_318->g_17 p_318->g_63 p_318->g_80 p_318->g_85 p_318->g_87 p_318->g_94 p_318->g_97 p_318->g_88 p_318->g_106 p_318->g_76 p_318->g_109 p_318->g_293 p_318->g_295 p_318->g_297 p_318->g_294.f3
 * writes: p_318->g_10 p_318->g_21 p_318->g_17 p_318->g_63 p_318->g_76 p_318->g_80 p_318->g_85 p_318->g_88 p_318->g_294 p_318->g_295 p_318->g_309
 */
uint8_t  func_1(struct S3 * p_318)
{ /* block id: 4 */
    uint32_t *l_9 = &p_318->g_10;
    VECTOR(int32_t, 8) l_13 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 4L), 4L), 4L, 1L, 4L);
    int32_t *l_298 = &p_318->g_85;
    int32_t *l_299 = &p_318->g_85;
    int32_t *l_300 = &p_318->g_85;
    int32_t *l_301 = &p_318->g_17;
    int32_t *l_302 = (void*)0;
    int32_t *l_303[10][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    uint32_t l_304 = 0UL;
    uint8_t *l_307 = &p_318->g_76[0];
    uint8_t *l_308 = &p_318->g_309;
    uint16_t l_315 = 65535UL;
    int64_t l_316[7] = {5L,5L,5L,5L,5L,5L,5L};
    int32_t **l_317 = &l_303[1][0];
    int i, j;
    (*p_318->g_297) = func_2(p_318->l_comm_values[(safe_mod_func_uint32_t_u_u(p_318->tid, 73))], p_318->g_comm_values[p_318->tid], (safe_unary_minus_func_uint32_t_u(((*l_9)++))), l_13.s1, p_318->l_comm_values[(safe_mod_func_uint32_t_u_u(p_318->tid, 73))], p_318);
    l_304++;
    (*l_317) = func_43(((*l_308) = ((*l_307) = p_318->g_293[1][4].f4)), ((safe_div_func_uint16_t_u_u((((*l_301) &= (*l_299)) == ((((0x370EED99L <= ((-7L) <= (p_318->g_97.y && p_318->l_comm_values[(safe_mod_func_uint32_t_u_u(p_318->tid, 73))]))) & ((0x2961FFB1C195E6E4L & p_318->g_97.w) != (safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((*l_298))), p_318->g_109[0][2][0])))) , l_315) | l_316[2])), 0x4D1BL)) < p_318->g_97.y), p_318);
    return p_318->g_294.f3;
}


/* ------------------------------------------ */
/* 
 * reads : p_318->g_10 p_318->g_21 p_318->l_comm_values p_318->g_17 p_318->g_63 p_318->g_comm_values p_318->g_80 p_318->g_85 p_318->g_87 p_318->g_94 p_318->g_97 p_318->g_88 p_318->g_106 p_318->g_76 p_318->g_109 p_318->g_293 p_318->g_295
 * writes: p_318->g_10 p_318->g_21 p_318->g_17 p_318->g_63 p_318->g_76 p_318->g_80 p_318->g_85 p_318->g_88 p_318->g_294
 */
int8_t ** func_2(int64_t  p_3, int32_t  p_4, uint8_t  p_5, int8_t  p_6, int16_t  p_7, struct S3 * p_318)
{ /* block id: 6 */
    int32_t l_26 = 0x223DEC99L;
    uint32_t *l_46 = &p_318->g_10;
    uint32_t l_55 = 1UL;
    int32_t **l_105 = &p_318->g_88;
    int32_t *l_107 = &p_318->g_85;
    int8_t *l_111 = &p_318->g_109[0][2][0];
    int8_t **l_110 = &l_111;
    for (p_318->g_10 = (-11); (p_318->g_10 >= 32); p_318->g_10++)
    { /* block id: 9 */
        int32_t *l_16 = &p_318->g_17;
        int32_t *l_18 = &p_318->g_17;
        int32_t *l_19 = &p_318->g_17;
        int32_t *l_20[4][8] = {{&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17},{&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17},{&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17},{&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17,&p_318->g_17}};
        int i, j;
        p_318->g_21--;
        if (p_3)
            continue;
    }
    (*l_107) = ((safe_div_func_uint16_t_u_u(l_26, FAKE_DIVERGE(p_318->global_1_offset, get_global_id(1), 10))) || (func_27((func_30(p_318->g_10, func_34(&p_318->g_17, ((func_37(func_41(((*l_107) = (((*l_105) = func_43((&p_318->g_10 != l_46), (((safe_mul_func_uint8_t_u_u((p_5 , (~p_318->g_21)), (((safe_mul_func_int16_t_s_s(((func_51(l_26, p_318) , p_4) < l_55), 0x3223L)) , p_318->l_comm_values[(safe_mod_func_uint32_t_u_u(p_318->tid, 73))]) | 0x04BBC184L))) , p_3) , 0x08CDL), p_318)) == p_318->g_106)), p_318), l_110, (*l_110), p_318) > p_318->g_21) ^ p_3), p_318), p_318->g_109[3][1][0], p_318) , l_46), l_107, p_318) || p_318->g_10));
    p_318->g_294 = p_318->g_293[1][4];
    return p_318->g_295[1][6];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int64_t  func_27(uint32_t * p_28, int32_t * p_29, struct S3 * p_318)
{ /* block id: 51 */
    int64_t l_292 = 0x76EC2A1C6CF15C61L;
    if ((atomic_inc(&p_318->l_atomic_input[30]) == 0))
    { /* block id: 53 */
        int16_t l_123 = 0x26ACL;
        int32_t l_124 = 0x7DF7C478L;
        uint8_t l_125 = 0x49L;
        int32_t l_273 = 0x5939E3DAL;
        int32_t *l_272 = &l_273;
        int32_t *l_274 = &l_273;
        struct S1 l_289[9][4] = {{{4UL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{4UL},{4UL}},{{4UL},{4UL},{4UL},{4UL}}};
        VECTOR(int32_t, 2) l_290 = (VECTOR(int32_t, 2))(0x4B4687D5L, 0x3FAAC7D0L);
        int16_t l_291 = 0x41AFL;
        int i, j;
        if (((l_124 = l_123) , l_125))
        { /* block id: 55 */
            int32_t l_127 = 0x2332C83DL;
            int32_t *l_126 = &l_127;
            int32_t *l_128 = &l_127;
            uint32_t l_129 = 4294967292UL;
            int32_t l_130 = (-7L);
            l_128 = l_126;
            l_130 = l_129;
        }
        else
        { /* block id: 58 */
            uint8_t l_131 = 253UL;
            int32_t l_132 = 1L;
            uint8_t l_133 = 1UL;
            uint64_t l_134 = 18446744073709551615UL;
            int16_t l_135 = (-2L);
            if (((((l_131 , l_132) , l_133) , l_134) , l_135))
            { /* block id: 59 */
                int32_t l_136 = (-10L);
                uint16_t l_137 = 0xF55AL;
                uint64_t l_138[4];
                uint32_t l_141 = 0x7EBAEA5EL;
                VECTOR(int8_t, 4) l_142 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x60L), 0x60L);
                int32_t l_143 = 0x113F5BBDL;
                VECTOR(int8_t, 8) l_235 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                VECTOR(int32_t, 2) l_236 = (VECTOR(int32_t, 2))(0x535DFBDCL, 0x33C05E57L);
                int32_t l_237 = 0x0EC8A288L;
                int i;
                for (i = 0; i < 4; i++)
                    l_138[i] = 0x05FF3C1E06D60A08L;
                l_132 |= l_136;
                if (((l_137 , ((++l_138[3]) , l_141)) , (l_142.w , l_143)))
                { /* block id: 62 */
                    int8_t l_144 = 0x73L;
                    uint8_t l_145 = 0x1CL;
                    VECTOR(int32_t, 2) l_157 = (VECTOR(int32_t, 2))(0L, 0L);
                    VECTOR(int32_t, 16) l_158 = (VECTOR(int32_t, 16))(0x044F22EBL, (VECTOR(int32_t, 4))(0x044F22EBL, (VECTOR(int32_t, 2))(0x044F22EBL, 0x6614784EL), 0x6614784EL), 0x6614784EL, 0x044F22EBL, 0x6614784EL, (VECTOR(int32_t, 2))(0x044F22EBL, 0x6614784EL), (VECTOR(int32_t, 2))(0x044F22EBL, 0x6614784EL), 0x044F22EBL, 0x6614784EL, 0x044F22EBL, 0x6614784EL);
                    uint32_t l_159 = 1UL;
                    int i;
                    ++l_145;
                    for (l_144 = 0; (l_144 == 15); l_144++)
                    { /* block id: 66 */
                        uint16_t l_150 = 0x42E7L;
                        uint32_t **l_153 = (void*)0;
                        VECTOR(uint32_t, 2) l_156 = (VECTOR(uint32_t, 2))(4294967295UL, 0xBE54454DL);
                        uint32_t *l_155 = (void*)0;
                        uint32_t **l_154[5][6] = {{&l_155,&l_155,(void*)0,(void*)0,(void*)0,&l_155},{&l_155,&l_155,(void*)0,(void*)0,(void*)0,&l_155},{&l_155,&l_155,(void*)0,(void*)0,(void*)0,&l_155},{&l_155,&l_155,(void*)0,(void*)0,(void*)0,&l_155},{&l_155,&l_155,(void*)0,(void*)0,(void*)0,&l_155}};
                        int i, j;
                        l_150--;
                        l_154[0][5] = l_153;
                    }
                    if (((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_157.xx)).yxyx)).wzwzwwyxxxxwwyyw, ((VECTOR(int32_t, 2))(0x3AC349C0L, 1L)).yxxxyxxxyxyyyyxy))).sa, (-8L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_158.s495f)).hi)), l_159, 0x27731F37L, 0x0FBAA509L)).s4)
                    { /* block id: 70 */
                        struct S0 *l_160 = (void*)0;
                        struct S0 l_162 = {1L,0x1D501A0CL,1L,0UL,0x33E6B62B2D3F7E23L,0x033A2A3AL,0x25CFA702CAF5ADCEL,0x7D4040057C08D5A1L,0x3EBD04F644B9F4E2L};/* VOLATILE GLOBAL l_162 */
                        struct S0 *l_161[1][5];
                        VECTOR(int32_t, 16) l_163 = (VECTOR(int32_t, 16))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, (-2L)), (-2L)), (-2L), 3L, (-2L), (VECTOR(int32_t, 2))(3L, (-2L)), (VECTOR(int32_t, 2))(3L, (-2L)), 3L, (-2L), 3L, (-2L));
                        VECTOR(int32_t, 4) l_164 = (VECTOR(int32_t, 4))(0x7F9883E6L, (VECTOR(int32_t, 2))(0x7F9883E6L, 0x1940662CL), 0x1940662CL);
                        VECTOR(int16_t, 16) l_165 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L, (VECTOR(int16_t, 2))((-1L), 0L), (VECTOR(int16_t, 2))((-1L), 0L), (-1L), 0L, (-1L), 0L);
                        VECTOR(uint8_t, 4) l_166 = (VECTOR(uint8_t, 4))(0xB3L, (VECTOR(uint8_t, 2))(0xB3L, 0x31L), 0x31L);
                        int8_t l_167 = (-7L);
                        VECTOR(uint8_t, 4) l_168 = (VECTOR(uint8_t, 4))(2UL, (VECTOR(uint8_t, 2))(2UL, 0x7DL), 0x7DL);
                        VECTOR(uint16_t, 8) l_169 = (VECTOR(uint16_t, 8))(0x99C8L, (VECTOR(uint16_t, 4))(0x99C8L, (VECTOR(uint16_t, 2))(0x99C8L, 65535UL), 65535UL), 65535UL, 0x99C8L, 65535UL);
                        int64_t l_170 = 0L;
                        VECTOR(uint16_t, 8) l_171 = (VECTOR(uint16_t, 8))(0xC389L, (VECTOR(uint16_t, 4))(0xC389L, (VECTOR(uint16_t, 2))(0xC389L, 1UL), 1UL), 1UL, 0xC389L, 1UL);
                        int8_t *l_173[5][6] = {{&l_167,(void*)0,(void*)0,&l_167,&l_167,&l_167},{&l_167,(void*)0,(void*)0,&l_167,&l_167,&l_167},{&l_167,(void*)0,(void*)0,&l_167,&l_167,&l_167},{&l_167,(void*)0,(void*)0,&l_167,&l_167,&l_167},{&l_167,(void*)0,(void*)0,&l_167,&l_167,&l_167}};
                        int8_t **l_172 = &l_173[0][1];
                        int8_t **l_174 = &l_173[3][3];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_161[i][j] = &l_162;
                        }
                        l_161[0][0] = l_160;
                        l_136 |= ((VECTOR(int32_t, 4))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_163.s14)).yyxy)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(l_164.wzxwwxzxwywyyzxw)).s5, (-5L), 0x4085BF0BL, 0x6D89AF0EL, 0x1F5E4897L, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(l_165.s624c37666566e718)).s45, ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 16))(safe_clamp_func(VECTOR(uint16_t, 16),VECTOR(uint16_t, 16),((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_166.zwzzxywz)), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(0x35L, 0xEDL)).yxxy)), l_167, 255UL, 0x8CL, 1UL)).s5b3c, ((VECTOR(uint8_t, 2))(l_168.yz)).yyyx))).wwzxxyyyywxwyyyz, ((VECTOR(uint16_t, 4))(l_169.s4175)).wxzxwyxxyzzxzyyx, ((VECTOR(uint16_t, 4))(((l_165.sa |= l_170) , (l_137 = 0UL)), 65535UL, 0xC529L, 0x4EA9L)).yyxzwyxxyzwyxzyy))).s6593, ((VECTOR(uint16_t, 8))(l_171.s66265521)).hi))).lo))), (-1L))).even))))).y;
                        l_174 = l_172;
                    }
                    else
                    { /* block id: 76 */
                        VECTOR(int32_t, 16) l_175 = (VECTOR(int32_t, 16))(0x26CA5C41L, (VECTOR(int32_t, 4))(0x26CA5C41L, (VECTOR(int32_t, 2))(0x26CA5C41L, 1L), 1L), 1L, 0x26CA5C41L, 1L, (VECTOR(int32_t, 2))(0x26CA5C41L, 1L), (VECTOR(int32_t, 2))(0x26CA5C41L, 1L), 0x26CA5C41L, 1L, 0x26CA5C41L, 1L);
                        VECTOR(int32_t, 4) l_176 = (VECTOR(int32_t, 4))(0x0C6297A4L, (VECTOR(int32_t, 2))(0x0C6297A4L, 1L), 1L);
                        uint32_t l_177 = 4294967286UL;
                        int32_t l_178[5];
                        uint16_t l_179[7] = {0xBCD3L,0xE6B1L,0xBCD3L,0xBCD3L,0xE6B1L,0xBCD3L,0xBCD3L};
                        VECTOR(int32_t, 4) l_180 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-1L)), (-1L));
                        VECTOR(uint16_t, 8) l_181 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xF48DL), 0xF48DL), 0xF48DL, 65535UL, 0xF48DL);
                        VECTOR(uint16_t, 4) l_182 = (VECTOR(uint16_t, 4))(0UL, (VECTOR(uint16_t, 2))(0UL, 5UL), 5UL);
                        int16_t l_183 = (-1L);
                        VECTOR(uint8_t, 8) l_184 = (VECTOR(uint8_t, 8))(250UL, (VECTOR(uint8_t, 4))(250UL, (VECTOR(uint8_t, 2))(250UL, 0xB5L), 0xB5L), 0xB5L, 250UL, 0xB5L);
                        VECTOR(uint8_t, 8) l_185 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 247UL), 247UL), 247UL, 0UL, 247UL);
                        int i;
                        for (i = 0; i < 5; i++)
                            l_178[i] = (-3L);
                        l_143 = 0x22C6987CL;
                        l_177 = ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 4))(l_175.sc627)), ((VECTOR(int32_t, 8))(l_176.zwyxywyy)).odd))).z;
                        l_143 &= (l_178[0] , (l_158.sa = (l_157.x = ((VECTOR(int32_t, 16))(mad_sat(((VECTOR(int32_t, 2))(max(((VECTOR(int32_t, 2))(1L, (-1L))), (int32_t)l_179[4]))).yyyyyxxxyyyyxyxx, ((VECTOR(int32_t, 2))(l_180.yz)).yxyyxyyyyxyyxyxx, ((VECTOR(int32_t, 8))(upsample(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(5L, 5L)), (-6L), 0x3538L)).zyyxxzyx, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(l_181.s0757)), ((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 8))(l_182.wxzwzyzx)).hi, ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(l_183, 0x7AL, 0UL, 1UL)).even)).xxyx, ((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),uint8_t,((VECTOR(uint8_t, 4))(l_184.s1610)).even, (uint8_t)247UL, (uint8_t)((VECTOR(uint8_t, 16))(l_185.s1252372222015617)).s7))).yyyy))))))))))).s1502330741740366))).s1)));
                    }
                }
                else
                { /* block id: 83 */
                    uint8_t l_186 = 0UL;
                    VECTOR(int32_t, 2) l_187 = (VECTOR(int32_t, 2))((-5L), (-1L));
                    uint32_t l_188 = 4294967295UL;
                    int i;
                    l_136 = l_186;
                    l_132 &= ((VECTOR(int32_t, 8))(l_187.xxxyxxyy)).s6;
                    if (l_188)
                    { /* block id: 86 */
                        uint32_t l_189[8] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                        int32_t l_191 = 0x53FFEB0AL;
                        int32_t *l_190 = &l_191;
                        int32_t *l_192 = &l_191;
                        int i;
                        l_187.x ^= (l_189[3] , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))((-7L), 1L)).yxxyxyyxxyxyxxxy)).sf);
                        l_192 = (l_190 = (void*)0);
                    }
                    else
                    { /* block id: 90 */
                        VECTOR(int32_t, 16) l_193 = (VECTOR(int32_t, 16))(0x42B2746CL, (VECTOR(int32_t, 4))(0x42B2746CL, (VECTOR(int32_t, 2))(0x42B2746CL, 0x788D5B51L), 0x788D5B51L), 0x788D5B51L, 0x42B2746CL, 0x788D5B51L, (VECTOR(int32_t, 2))(0x42B2746CL, 0x788D5B51L), (VECTOR(int32_t, 2))(0x42B2746CL, 0x788D5B51L), 0x42B2746CL, 0x788D5B51L, 0x42B2746CL, 0x788D5B51L);
                        VECTOR(int32_t, 2) l_194 = (VECTOR(int32_t, 2))(0x5B679A5EL, (-5L));
                        uint32_t l_195 = 0x278546D8L;
                        VECTOR(int32_t, 4) l_196 = (VECTOR(int32_t, 4))(0x73FA2BBCL, (VECTOR(int32_t, 2))(0x73FA2BBCL, 0x1824737FL), 0x1824737FL);
                        VECTOR(int32_t, 4) l_197 = (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x39D1B266L), 0x39D1B266L);
                        VECTOR(int32_t, 4) l_198 = (VECTOR(int32_t, 4))(8L, (VECTOR(int32_t, 2))(8L, 0x509527E5L), 0x509527E5L);
                        uint64_t l_199 = 18446744073709551608UL;
                        uint32_t l_202 = 4294967295UL;
                        uint8_t l_203 = 0x4DL;
                        VECTOR(int32_t, 4) l_204 = (VECTOR(int32_t, 4))(0x648DACBCL, (VECTOR(int32_t, 2))(0x648DACBCL, 0x0B4DDBDFL), 0x0B4DDBDFL);
                        int16_t l_205[10][2][10] = {{{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL},{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL}},{{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL},{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL}},{{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL},{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL}},{{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL},{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL}},{{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL},{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL}},{{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL},{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL}},{{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL},{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL}},{{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL},{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL}},{{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL},{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL}},{{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL},{0x7038L,(-3L),0x6B7DL,0x17F8L,0x0172L,(-2L),1L,9L,0x1514L,0x282EL}}};
                        int32_t l_206 = 0L;
                        VECTOR(int32_t, 2) l_207 = (VECTOR(int32_t, 2))(0L, (-7L));
                        VECTOR(int32_t, 16) l_208 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L, (VECTOR(int32_t, 2))((-1L), 1L), (VECTOR(int32_t, 2))((-1L), 1L), (-1L), 1L, (-1L), 1L);
                        VECTOR(int32_t, 8) l_209 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x6B481F41L), 0x6B481F41L), 0x6B481F41L, 0L, 0x6B481F41L);
                        VECTOR(int32_t, 8) l_210 = (VECTOR(int32_t, 8))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0x36AFA11AL), 0x36AFA11AL), 0x36AFA11AL, 5L, 0x36AFA11AL);
                        uint64_t l_211 = 1UL;
                        int8_t l_212 = 0x59L;
                        uint16_t l_213 = 0xD087L;
                        VECTOR(int32_t, 16) l_214 = (VECTOR(int32_t, 16))(0x2B9BB11EL, (VECTOR(int32_t, 4))(0x2B9BB11EL, (VECTOR(int32_t, 2))(0x2B9BB11EL, 0L), 0L), 0L, 0x2B9BB11EL, 0L, (VECTOR(int32_t, 2))(0x2B9BB11EL, 0L), (VECTOR(int32_t, 2))(0x2B9BB11EL, 0L), 0x2B9BB11EL, 0L, 0x2B9BB11EL, 0L);
                        int64_t l_215 = 0x52832AB4624F099CL;
                        uint16_t l_216 = 0xEF4EL;
                        uint32_t l_217 = 0x1FD06F51L;
                        int i, j, k;
                        l_187.x = ((VECTOR(int32_t, 2))(sub_sat(((VECTOR(int32_t, 8))(0L, (-2L), 8L, 1L, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(l_193.sc3764cf3)).odd))).lo)), 0x60AD0774L, 0L)).s36, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_194.xyxyxxyx)), l_195, ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(hadd(((VECTOR(int32_t, 2))(0x0D8DE40DL, (-1L))), ((VECTOR(int32_t, 4))(l_196.wywy)).odd))).yyyx, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_197.wzyxxzxw)).s15)).xxxy))), ((VECTOR(int32_t, 2))(l_198.zz)), 1L)).s70))).even;
                        ++l_199;
                        l_187.y = ((VECTOR(int32_t, 16))((-1L), (-8L), 0x5BFF91A1L, ((VECTOR(int32_t, 4))(0L, 0x7503D315L, 1L, 0x0AAE3D87L)), l_202, ((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_203, 0x6721F199L, 0x37C21472L, 0x79C5B4EDL)), (-3L), ((VECTOR(int32_t, 4))(0x5B04EDA8L, 0x795F43D3L, 0x146C4033L, 0x487F1438L)), ((VECTOR(int32_t, 4))(l_204.zywz)), l_205[9][0][4], 0x0EEBE92DL, 1L)).s3d, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 4),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(0L, l_206, ((VECTOR(int32_t, 4))(l_207.yxxy)), 0x49294EA2L, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_208.s67)), (l_143 |= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_209.s45)), ((VECTOR(int32_t, 2))(0x4C38E0EBL, 8L)), 1L, 0x77C02C53L, 0L, 0x1F37E9A4L)).s45)), ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(l_210.s20)), ((VECTOR(int32_t, 16))((l_211 , (l_212 , (l_132 = (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x2D2A8B1AL, 4294967295UL)), 1UL, ((VECTOR(uint32_t, 8))(0xDB39C2C3L, ((VECTOR(uint32_t, 2))(0x169B939CL)), 0x99576B83L, 0UL, ((VECTOR(uint32_t, 2))(4294967292UL)), 0x91D02A65L)), ((VECTOR(uint32_t, 2))(4294967292UL)), ((VECTOR(uint32_t, 2))(0xDCCF7767L)), 0x192BC719L)).sa , l_213)))), 0x57F6A1A7L, ((VECTOR(int32_t, 4))(0x3D6449BFL)), 0x0E078209L, 0x7C0C68FDL, 0L, ((VECTOR(int32_t, 4))(0x4EFBD567L)), 0L, 0x593E8CAEL, 0L)).s5f, ((VECTOR(int32_t, 2))((-9L)))))), (int32_t)l_214.sd))).yxxx, ((VECTOR(int32_t, 4))(0x241E0B0FL))))).even)), (-1L), 2L, 0x173DCB5AL, ((VECTOR(int32_t, 8))(0x01C1D833L)), l_215, 1L, 1L)).s91))))).yyyxxyyxxyxxxxyx)).sb), 0L, l_216, (-1L), 0x41DD5F38L, 0x29F4418AL)), 0x023D53BCL)))).s850e)), ((VECTOR(int32_t, 4))(0x41A61F3BL)), ((VECTOR(int32_t, 4))(0L))))).lo)), 0L, l_217, 0x76DF1773L, 0L, ((VECTOR(int32_t, 8))(0x504161D7L)), (-9L), 0x56006E27L)).sd5))), ((VECTOR(int32_t, 2))(5L)), ((VECTOR(int32_t, 4))(0x7E1F7ADBL)))).s6;
                    }
                    for (l_187.x = 0; (l_187.x > (-19)); l_187.x--)
                    { /* block id: 99 */
                        uint32_t l_220 = 0x7DD19256L;
                        int8_t l_223 = (-1L);
                        int32_t l_224 = (-1L);
                        int32_t l_225 = 0x49F41406L;
                        int16_t l_226 = 1L;
                        int32_t l_227 = 0x568D3CEBL;
                        int32_t l_228 = 0x4FB073FBL;
                        uint8_t l_229 = 255UL;
                        union U2 l_233 = {0};/* VOLATILE GLOBAL l_233 */
                        union U2 *l_232[10][5] = {{&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233},{&l_233,&l_233,&l_233,&l_233,&l_233}};
                        union U2 *l_234 = &l_233;
                        int i, j;
                        l_132 ^= (-1L);
                        --l_220;
                        l_229++;
                        l_234 = (l_232[4][2] = (void*)0);
                    }
                }
                l_136 ^= (l_235.s1 , ((VECTOR(int32_t, 8))(l_236.yyxyxyxx)).s3);
                if (l_237)
                { /* block id: 108 */
                    VECTOR(int32_t, 16) l_238 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0L), 0L), 0L, 1L, 0L, (VECTOR(int32_t, 2))(1L, 0L), (VECTOR(int32_t, 2))(1L, 0L), 1L, 0L, 1L, 0L);
                    int i;
                    l_236.y |= ((VECTOR(int32_t, 8))(l_238.sb36c267d)).s6;
                }
                else
                { /* block id: 110 */
                    uint64_t l_239 = 0x13E5AC415743580EL;
                    uint32_t l_240[2][5] = {{1UL,1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL,1UL}};
                    struct S0 l_241 = {3L,0x0116017DL,1L,0x1CEDEFB3L,1UL,0x7DFDA9B5L,0x79306F493AA1A88FL,0x0A62E1F7FC175208L,0L};/* VOLATILE GLOBAL l_241 */
                    struct S0 l_242[7][4][6] = {{{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}}},{{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}}},{{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}}},{{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}}},{{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}}},{{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}}},{{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}},{{7L,1L,0x17D7729DL,4294967295UL,0x55C0BEE4B26791B0L,0x4C5BDC9EL,-1L,0x4BCD46B94CA93217L,-1L},{0x3F60CF77L,0x2F1C1144L,0x395E3B4EL,4294967293UL,0xA8C5B16D34A9AF0FL,0x42A3C25BL,0x731839F9090C8C00L,18446744073709551609UL,1L},{-7L,0x2347F5DDL,0L,4294967293UL,1UL,0x380B1608L,0L,0x34005440091062EFL,-1L},{0x2F77C82EL,8L,1L,0x1E3291E4L,18446744073709551615UL,1L,0x149218AC65C24B93L,0UL,1L},{0x6490E6C0L,0x4D1F3700L,0x67CF8B93L,1UL,18446744073709551615UL,-1L,0x64A687B620D7AD1CL,3UL,0x7862F7F560B452CEL},{0x2215A0C2L,0x65F21BAEL,-6L,0xB3167490L,0x479404D5112FE5A6L,0x232C39E3L,1L,0UL,0x7DD560236DFC7E60L}}}};
                    int32_t *l_243 = &l_241.f5;
                    int32_t *l_244 = (void*)0;
                    int i, j, k;
                    l_143 ^= 0x7AC234BBL;
                    l_242[6][0][5] = (l_239 , (l_240[1][4] , l_241));
                    l_244 = l_243;
                }
            }
            else
            { /* block id: 115 */
                int16_t l_245 = 0x693DL;
                uint64_t l_262 = 0xF1C5D5DF71B75FA6L;
                uint16_t l_265 = 3UL;
                VECTOR(uint32_t, 16) l_266 = (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 0UL), 0UL, 4294967295UL, 0UL, (VECTOR(uint32_t, 2))(4294967295UL, 0UL), (VECTOR(uint32_t, 2))(4294967295UL, 0UL), 4294967295UL, 0UL, 4294967295UL, 0UL);
                uint32_t l_267[9] = {0xEEEFE5E0L,0xEEEFE5E0L,0xEEEFE5E0L,0xEEEFE5E0L,0xEEEFE5E0L,0xEEEFE5E0L,0xEEEFE5E0L,0xEEEFE5E0L,0xEEEFE5E0L};
                int8_t **l_268 = (void*)0;
                int8_t l_271 = 0x1AL;
                int8_t *l_270 = &l_271;
                int8_t **l_269 = &l_270;
                int i;
                if ((l_245 , 2L))
                { /* block id: 116 */
                    int32_t l_246[6][7] = {{0L,1L,1L,0L,(-8L),0x25E1BA66L,0x25E1BA66L},{0L,1L,1L,0L,(-8L),0x25E1BA66L,0x25E1BA66L},{0L,1L,1L,0L,(-8L),0x25E1BA66L,0x25E1BA66L},{0L,1L,1L,0L,(-8L),0x25E1BA66L,0x25E1BA66L},{0L,1L,1L,0L,(-8L),0x25E1BA66L,0x25E1BA66L},{0L,1L,1L,0L,(-8L),0x25E1BA66L,0x25E1BA66L}};
                    int i, j;
                    for (l_246[0][0] = 0; (l_246[0][0] == 23); ++l_246[0][0])
                    { /* block id: 119 */
                        int32_t **l_249[1];
                        int32_t **l_250 = (void*)0;
                        int32_t l_253 = (-1L);
                        int32_t *l_252 = &l_253;
                        int32_t **l_251[3];
                        uint8_t l_256 = 0x57L;
                        uint8_t *l_255 = &l_256;
                        uint8_t **l_254 = &l_255;
                        uint8_t **l_257 = &l_255;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_249[i] = (void*)0;
                        for (i = 0; i < 3; i++)
                            l_251[i] = &l_252;
                        l_251[2] = (l_250 = l_249[0]);
                        l_257 = l_254;
                    }
                }
                else
                { /* block id: 124 */
                    int32_t l_258 = (-4L);
                    for (l_258 = (-3); (l_258 <= (-13)); --l_258)
                    { /* block id: 127 */
                        VECTOR(int32_t, 8) l_261 = (VECTOR(int32_t, 8))(0x29C9ED3AL, (VECTOR(int32_t, 4))(0x29C9ED3AL, (VECTOR(int32_t, 2))(0x29C9ED3AL, 6L), 6L), 6L, 0x29C9ED3AL, 6L);
                        int i;
                        l_132 ^= ((VECTOR(int32_t, 2))(l_261.s51)).odd;
                    }
                    l_132 |= 0x322C28FFL;
                }
                --l_262;
                l_132 = 0x02CED354L;
                l_269 = (l_265 , (((l_267[7] = l_266.s8) , 5UL) , l_268));
            }
        }
        l_274 = l_272;
        for (l_124 = (-2); (l_124 >= (-20)); l_124--)
        { /* block id: 141 */
            int32_t l_277 = (-10L);
            uint32_t l_278 = 0xD23D029DL;
            int32_t *l_288 = &l_277;
            --l_278;
            for (l_278 = 0; (l_278 != 17); ++l_278)
            { /* block id: 145 */
                int32_t l_283[7] = {6L,1L,6L,6L,1L,6L,6L};
                int8_t l_284 = 0x03L;
                uint64_t l_285 = 0UL;
                int i;
                ++l_285;
            }
            l_274 = l_288;
        }
        (*l_272) = (l_291 = (l_289[3][1] , ((VECTOR(int32_t, 8))(l_290.yxyyyxxx)).s6));
        unsigned int result = 0;
        result += l_123;
        result += l_124;
        result += l_125;
        result += l_273;
        int l_289_i0, l_289_i1;
        for (l_289_i0 = 0; l_289_i0 < 9; l_289_i0++) {
            for (l_289_i1 = 0; l_289_i1 < 4; l_289_i1++) {
                result += l_289[l_289_i0][l_289_i1].f0;
            }
        }
        result += l_290.y;
        result += l_290.x;
        result += l_291;
        atomic_add(&p_318->l_special_values[30], result);
    }
    else
    { /* block id: 152 */
        (1 + 1);
    }
    return l_292;
}


/* ------------------------------------------ */
/* 
 * reads : p_318->g_88 p_318->g_94.f5
 * writes: p_318->g_10
 */
int16_t  func_30(uint64_t  p_31, int32_t  p_32, int16_t  p_33, struct S3 * p_318)
{ /* block id: 48 */
    (*p_318->g_88) = 0L;
    return p_318->g_94.f5;
}


/* ------------------------------------------ */
/* 
 * reads : p_318->g_21
 * writes:
 */
int32_t  func_34(int32_t * p_35, uint32_t  p_36, struct S3 * p_318)
{ /* block id: 46 */
    return p_318->g_21;
}


/* ------------------------------------------ */
/* 
 * reads : p_318->g_63 p_318->g_87 p_318->g_88 p_318->g_10 p_318->g_76 p_318->g_109
 * writes: p_318->g_63 p_318->g_76
 */
int16_t  func_37(int8_t * p_38, int8_t ** p_39, int8_t * p_40, struct S3 * p_318)
{ /* block id: 34 */
    int32_t l_122[2];
    int i;
    for (i = 0; i < 2; i++)
        l_122[i] = 0x4899101CL;
    for (p_318->g_63 = 16; (p_318->g_63 == (-17)); --p_318->g_63)
    { /* block id: 37 */
        uint8_t *l_116 = &p_318->g_76[0];
        VECTOR(int8_t, 8) l_121 = (VECTOR(int8_t, 8))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 0x5CL), 0x5CL), 0x5CL, 7L, 0x5CL);
        int i, j;
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_318->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 73)), permutations[(safe_mod_func_uint32_t_u_u(((**p_318->g_87) && (safe_add_func_uint8_t_u_u(((*l_116)--), (safe_lshift_func_int8_t_s_s((*p_38), ((VECTOR(int8_t, 2))(l_121.s52)).odd))))), 10))][(safe_mod_func_uint32_t_u_u(p_318->tid, 73))]));
    }
    atomic_min(&p_318->l_atomic_reduction[0], ((0UL < ((VECTOR(uint16_t, 2))(1UL, 0xB2C3L)).odd) && (l_122[1] = FAKE_DIVERGE(p_318->global_0_offset, get_global_id(0), 10))));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_318->v_collective += p_318->l_atomic_reduction[0];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    return l_122[1];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int8_t * func_41(int32_t  p_42, struct S3 * p_318)
{ /* block id: 32 */
    int8_t *l_108[3][3][1] = {{{&p_318->g_109[0][2][0]},{&p_318->g_109[0][2][0]},{&p_318->g_109[0][2][0]}},{{&p_318->g_109[0][2][0]},{&p_318->g_109[0][2][0]},{&p_318->g_109[0][2][0]}},{{&p_318->g_109[0][2][0]},{&p_318->g_109[0][2][0]},{&p_318->g_109[0][2][0]}}};
    int i, j, k;
    return l_108[0][2][0];
}


/* ------------------------------------------ */
/* 
 * reads : p_318->g_17 p_318->g_63 p_318->g_21 p_318->g_comm_values p_318->g_80 p_318->g_85 p_318->g_87 p_318->g_94 p_318->g_97 p_318->g_88 p_318->g_10 p_318->l_comm_values
 * writes: p_318->g_63 p_318->g_76 p_318->g_80 p_318->g_85 p_318->g_88 p_318->g_17
 */
int32_t * func_43(uint8_t  p_44, uint16_t  p_45, struct S3 * p_318)
{ /* block id: 16 */
    VECTOR(int16_t, 4) l_58 = (VECTOR(int16_t, 4))(0x6816L, (VECTOR(int16_t, 2))(0x6816L, (-3L)), (-3L));
    uint32_t *l_61 = &p_318->g_10;
    int64_t *l_62 = &p_318->g_63;
    uint8_t *l_74 = (void*)0;
    uint8_t *l_75 = &p_318->g_76[0];
    int32_t *l_83 = (void*)0;
    int32_t *l_84 = &p_318->g_85;
    VECTOR(uint32_t, 16) l_100 = (VECTOR(uint32_t, 16))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 1UL), 1UL), 1UL, 0UL, 1UL, (VECTOR(uint32_t, 2))(0UL, 1UL), (VECTOR(uint32_t, 2))(0UL, 1UL), 0UL, 1UL, 0UL, 1UL);
    int32_t *l_103 = &p_318->g_85;
    int32_t *l_104 = &p_318->g_17;
    int i;
    (*l_84) ^= ((safe_div_func_int16_t_s_s(((VECTOR(int16_t, 16))(l_58.zywwywxywwwyxxzz)).s4, (p_45 ^= p_318->g_17))) ^ (((*l_62) = (safe_rshift_func_int16_t_s_u((l_58.z , ((void*)0 == l_61)), 13))) , (p_44 || (safe_sub_func_int32_t_s_s((((func_66((((safe_add_func_int64_t_s_s(p_318->g_63, p_44)) || (((*l_75) = (safe_mod_func_int64_t_s_s(((p_318->g_17 ^ (p_318->g_21 == p_44)) < l_58.x), p_318->g_comm_values[p_318->tid]))) || l_58.z)) , l_58.w), l_61, l_61, p_318) || p_44) && p_44) , 1L), 0xA1FE0AFDL)))));
    (*p_318->g_87) = l_61;
    l_84 = l_83;
    (*l_104) = (p_45 , (safe_sub_func_uint8_t_u_u((((-8L) || (safe_unary_minus_func_int32_t_s((1UL | (safe_div_func_int32_t_s_s((&p_318->g_76[0] != (p_318->g_94 , (l_75 = (void*)0))), p_318->g_17)))))) , (safe_rshift_func_uint16_t_u_u(GROUP_DIVERGE(2, 1), 12))), (((VECTOR(int32_t, 16))(p_318->g_97.xxyxwyywxwwyyxwy)).s7 >= ((*l_103) = (~((safe_mul_func_uint16_t_u_u((((VECTOR(uint32_t, 4))(add_sat(((VECTOR(uint32_t, 2))(4294967291UL, 4294967290UL)).xxxy, ((VECTOR(uint32_t, 16))(l_100.s5e53d9b4dc16d461)).s820e))).y , (safe_add_func_int8_t_s_s(((((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 16))(0x03596026DF2D4CE2L, 9UL, ((VECTOR(uint64_t, 16))(p_318->g_17, 0xADD52706CD285881L, 0UL, (0x2C48AE5BL <= (*p_318->g_88)), ((VECTOR(uint64_t, 2))(1UL)), ((VECTOR(uint64_t, 4))(0x4A76911F35E5FA59L)), 0xF2DC12F6744ED4C9L, ((VECTOR(uint64_t, 2))(0x105BDF17F541A3ACL)), ((VECTOR(uint64_t, 2))(0x7196FBAD4E8C8096L)), 18446744073709551609UL)).s5, 18446744073709551613UL, ((VECTOR(uint64_t, 2))(0x28DA27851ED01B0FL)), 2UL, p_45, p_318->g_comm_values[p_318->tid], 0x40C936627CDBDB14L, p_318->g_comm_values[p_318->tid], ((VECTOR(uint64_t, 2))(0UL)), ((VECTOR(uint64_t, 2))(0x922964CB199FC800L)), 0x5E99C33BC337E5C3L))))), ((VECTOR(uint64_t, 16))(0UL))))).s9 != p_318->l_comm_values[(safe_mod_func_uint32_t_u_u(p_318->tid, 73))]) >= p_45), p_44))), 0x1A09L)) > p_44)))))));
    return l_61;
}


/* ------------------------------------------ */
/* 
 * reads : p_318->l_comm_values
 * writes: p_318->g_17
 */
int32_t  func_51(uint32_t  p_52, struct S3 * p_318)
{ /* block id: 13 */
    p_318->g_17 = (safe_rshift_func_int16_t_s_u(p_52, 11));
    return p_318->l_comm_values[(safe_mod_func_uint32_t_u_u(p_318->tid, 73))];
}


/* ------------------------------------------ */
/* 
 * reads : p_318->g_80
 * writes: p_318->g_80
 */
uint8_t  func_66(uint32_t  p_67, uint32_t * p_68, uint32_t * p_69, struct S3 * p_318)
{ /* block id: 20 */
    VECTOR(int32_t, 2) l_77 = (VECTOR(int32_t, 2))(0x008E27FBL, 0x3A2AAC5DL);
    int32_t *l_78[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    --p_318->g_80;
    return p_67;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[92];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 92; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[92];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 92; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[73];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 73; i++)
            l_comm_values[i] = 1;
    struct S3 c_319;
    struct S3* p_318 = &c_319;
    struct S3 c_320 = {
        0x3EC752F6L, // p_318->g_10
        0x5466BC65L, // p_318->g_17
        5UL, // p_318->g_21
        0x5E2E4BCB8161DBFAL, // p_318->g_63
        {255UL}, // p_318->g_76
        1L, // p_318->g_79
        1UL, // p_318->g_80
        0x40F8590CL, // p_318->g_85
        (void*)0, // p_318->g_86
        &p_318->g_17, // p_318->g_88
        &p_318->g_88, // p_318->g_87
        {-2L,-8L,0L,0x7856BCC6L,0x82E5CE9E3C4023A1L,0x770E0EEEL,-1L,18446744073709551613UL,-1L}, // p_318->g_94
        (VECTOR(int32_t, 4))(0x4CDCAC19L, (VECTOR(int32_t, 2))(0x4CDCAC19L, 0x2C0CAA66L), 0x2C0CAA66L), // p_318->g_97
        (void*)0, // p_318->g_106
        {{{2L,0x75L,2L},{2L,0x75L,2L},{2L,0x75L,2L}},{{2L,0x75L,2L},{2L,0x75L,2L},{2L,0x75L,2L}},{{2L,0x75L,2L},{2L,0x75L,2L},{2L,0x75L,2L}},{{2L,0x75L,2L},{2L,0x75L,2L},{2L,0x75L,2L}},{{2L,0x75L,2L},{2L,0x75L,2L},{2L,0x75L,2L}},{{2L,0x75L,2L},{2L,0x75L,2L},{2L,0x75L,2L}},{{2L,0x75L,2L},{2L,0x75L,2L},{2L,0x75L,2L}}}, // p_318->g_109
        {{{0x12418ACEL,0x6FD6B7CAL,-5L,1UL,0xA02D725E3DA1E99BL,0x589F4AD4L,-1L,0xE6BA4F4FAC663682L,0x66CC2278E115F965L},{0x12418ACEL,0x6FD6B7CAL,-5L,1UL,0xA02D725E3DA1E99BL,0x589F4AD4L,-1L,0xE6BA4F4FAC663682L,0x66CC2278E115F965L},{0x12418ACEL,0x6FD6B7CAL,-5L,1UL,0xA02D725E3DA1E99BL,0x589F4AD4L,-1L,0xE6BA4F4FAC663682L,0x66CC2278E115F965L},{0x12418ACEL,0x6FD6B7CAL,-5L,1UL,0xA02D725E3DA1E99BL,0x589F4AD4L,-1L,0xE6BA4F4FAC663682L,0x66CC2278E115F965L},{0x12418ACEL,0x6FD6B7CAL,-5L,1UL,0xA02D725E3DA1E99BL,0x589F4AD4L,-1L,0xE6BA4F4FAC663682L,0x66CC2278E115F965L},{0x12418ACEL,0x6FD6B7CAL,-5L,1UL,0xA02D725E3DA1E99BL,0x589F4AD4L,-1L,0xE6BA4F4FAC663682L,0x66CC2278E115F965L}},{{0x12418ACEL,0x6FD6B7CAL,-5L,1UL,0xA02D725E3DA1E99BL,0x589F4AD4L,-1L,0xE6BA4F4FAC663682L,0x66CC2278E115F965L},{0x12418ACEL,0x6FD6B7CAL,-5L,1UL,0xA02D725E3DA1E99BL,0x589F4AD4L,-1L,0xE6BA4F4FAC663682L,0x66CC2278E115F965L},{0x12418ACEL,0x6FD6B7CAL,-5L,1UL,0xA02D725E3DA1E99BL,0x589F4AD4L,-1L,0xE6BA4F4FAC663682L,0x66CC2278E115F965L},{0x12418ACEL,0x6FD6B7CAL,-5L,1UL,0xA02D725E3DA1E99BL,0x589F4AD4L,-1L,0xE6BA4F4FAC663682L,0x66CC2278E115F965L},{0x12418ACEL,0x6FD6B7CAL,-5L,1UL,0xA02D725E3DA1E99BL,0x589F4AD4L,-1L,0xE6BA4F4FAC663682L,0x66CC2278E115F965L},{0x12418ACEL,0x6FD6B7CAL,-5L,1UL,0xA02D725E3DA1E99BL,0x589F4AD4L,-1L,0xE6BA4F4FAC663682L,0x66CC2278E115F965L}}}, // p_318->g_293
        {8L,0x2EAEA284L,0x3E889EB9L,2UL,18446744073709551615UL,0x77E8F0B8L,0x4EE2F96E446F6918L,0x990EC4276A194898L,0L}, // p_318->g_294
        &p_318->g_109[6][0][2], // p_318->g_296
        {{&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296},{&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296},{&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296},{&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296},{&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296},{&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296,&p_318->g_296}}, // p_318->g_295
        &p_318->g_295[1][6], // p_318->g_297
        0x84L, // p_318->g_309
        0, // p_318->v_collective
        sequence_input[get_global_id(0)], // p_318->global_0_offset
        sequence_input[get_global_id(1)], // p_318->global_1_offset
        sequence_input[get_global_id(2)], // p_318->global_2_offset
        sequence_input[get_local_id(0)], // p_318->local_0_offset
        sequence_input[get_local_id(1)], // p_318->local_1_offset
        sequence_input[get_local_id(2)], // p_318->local_2_offset
        sequence_input[get_group_id(0)], // p_318->group_0_offset
        sequence_input[get_group_id(1)], // p_318->group_1_offset
        sequence_input[get_group_id(2)], // p_318->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 73)), permutations[0][get_linear_local_id()])), // p_318->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_319 = c_320;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_318);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_318->g_10, "p_318->g_10", print_hash_value);
    transparent_crc(p_318->g_17, "p_318->g_17", print_hash_value);
    transparent_crc(p_318->g_21, "p_318->g_21", print_hash_value);
    transparent_crc(p_318->g_63, "p_318->g_63", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(p_318->g_76[i], "p_318->g_76[i]", print_hash_value);

    }
    transparent_crc(p_318->g_79, "p_318->g_79", print_hash_value);
    transparent_crc(p_318->g_80, "p_318->g_80", print_hash_value);
    transparent_crc(p_318->g_85, "p_318->g_85", print_hash_value);
    transparent_crc(p_318->g_94.f0, "p_318->g_94.f0", print_hash_value);
    transparent_crc(p_318->g_94.f1, "p_318->g_94.f1", print_hash_value);
    transparent_crc(p_318->g_94.f2, "p_318->g_94.f2", print_hash_value);
    transparent_crc(p_318->g_94.f3, "p_318->g_94.f3", print_hash_value);
    transparent_crc(p_318->g_94.f4, "p_318->g_94.f4", print_hash_value);
    transparent_crc(p_318->g_94.f5, "p_318->g_94.f5", print_hash_value);
    transparent_crc(p_318->g_94.f6, "p_318->g_94.f6", print_hash_value);
    transparent_crc(p_318->g_94.f7, "p_318->g_94.f7", print_hash_value);
    transparent_crc(p_318->g_94.f8, "p_318->g_94.f8", print_hash_value);
    transparent_crc(p_318->g_97.x, "p_318->g_97.x", print_hash_value);
    transparent_crc(p_318->g_97.y, "p_318->g_97.y", print_hash_value);
    transparent_crc(p_318->g_97.z, "p_318->g_97.z", print_hash_value);
    transparent_crc(p_318->g_97.w, "p_318->g_97.w", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_318->g_109[i][j][k], "p_318->g_109[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_318->g_293[i][j].f0, "p_318->g_293[i][j].f0", print_hash_value);
            transparent_crc(p_318->g_293[i][j].f1, "p_318->g_293[i][j].f1", print_hash_value);
            transparent_crc(p_318->g_293[i][j].f2, "p_318->g_293[i][j].f2", print_hash_value);
            transparent_crc(p_318->g_293[i][j].f3, "p_318->g_293[i][j].f3", print_hash_value);
            transparent_crc(p_318->g_293[i][j].f4, "p_318->g_293[i][j].f4", print_hash_value);
            transparent_crc(p_318->g_293[i][j].f5, "p_318->g_293[i][j].f5", print_hash_value);
            transparent_crc(p_318->g_293[i][j].f6, "p_318->g_293[i][j].f6", print_hash_value);
            transparent_crc(p_318->g_293[i][j].f7, "p_318->g_293[i][j].f7", print_hash_value);
            transparent_crc(p_318->g_293[i][j].f8, "p_318->g_293[i][j].f8", print_hash_value);

        }
    }
    transparent_crc(p_318->g_294.f0, "p_318->g_294.f0", print_hash_value);
    transparent_crc(p_318->g_294.f1, "p_318->g_294.f1", print_hash_value);
    transparent_crc(p_318->g_294.f2, "p_318->g_294.f2", print_hash_value);
    transparent_crc(p_318->g_294.f3, "p_318->g_294.f3", print_hash_value);
    transparent_crc(p_318->g_294.f4, "p_318->g_294.f4", print_hash_value);
    transparent_crc(p_318->g_294.f5, "p_318->g_294.f5", print_hash_value);
    transparent_crc(p_318->g_294.f6, "p_318->g_294.f6", print_hash_value);
    transparent_crc(p_318->g_294.f7, "p_318->g_294.f7", print_hash_value);
    transparent_crc(p_318->g_294.f8, "p_318->g_294.f8", print_hash_value);
    transparent_crc(p_318->g_309, "p_318->g_309", print_hash_value);
    transparent_crc(p_318->v_collective, "p_318->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 92; i++)
            transparent_crc(p_318->l_special_values[i], "p_318->l_special_values[i]", print_hash_value);
    transparent_crc(p_318->l_comm_values[get_linear_local_id()], "p_318->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_318->g_comm_values[get_linear_group_id() * 73 + get_linear_local_id()], "p_318->g_comm_values[get_linear_group_id() * 73 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
