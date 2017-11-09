// --atomics 63 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 44,65,1 -l 1,5,1
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

__constant uint32_t permutations[10][5] = {
{1,3,2,0,4}, // permutation 0
{1,4,2,3,0}, // permutation 1
{1,4,2,0,3}, // permutation 2
{3,0,2,1,4}, // permutation 3
{1,0,2,3,4}, // permutation 4
{4,0,1,3,2}, // permutation 5
{3,0,2,4,1}, // permutation 6
{1,4,2,3,0}, // permutation 7
{4,0,2,3,1}, // permutation 8
{1,2,0,4,3} // permutation 9
};

// Seed: 2721244223

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint32_t  f0;
   uint8_t  f1;
};

union U1 {
   int32_t  f0;
   int16_t  f1;
};

struct S2 {
    int32_t g_2[6][7][6];
    VECTOR(uint8_t, 2) g_19;
    uint32_t g_57;
    int32_t g_61[2];
    int32_t g_89;
    int32_t g_91;
    volatile VECTOR(int32_t, 4) g_95;
    int32_t * volatile g_96;
    int32_t *g_103;
    uint32_t g_107;
    uint32_t *g_106[6][1];
    uint16_t g_119[5][6];
    int32_t *g_133[5][8];
    int32_t * volatile *g_132;
    int32_t * volatile * volatile * volatile g_131;
    int32_t *g_137;
    uint8_t g_140;
    uint16_t g_142;
    uint32_t g_143;
    int32_t g_145;
    volatile VECTOR(uint32_t, 8) g_151;
    VECTOR(uint32_t, 2) g_153;
    volatile VECTOR(uint32_t, 8) g_154;
    VECTOR(int32_t, 2) g_166;
    volatile VECTOR(int32_t, 4) g_167;
    uint32_t *g_171;
    int16_t g_180;
    uint32_t g_181[4][5];
    int8_t g_242;
    int8_t *g_241;
    volatile VECTOR(uint64_t, 4) g_249;
    VECTOR(uint16_t, 2) g_253;
    VECTOR(uint16_t, 4) g_256;
    VECTOR(uint16_t, 8) g_257;
    VECTOR(uint16_t, 8) g_258;
    VECTOR(int16_t, 2) g_266;
    int32_t ** volatile g_280;
    int32_t * volatile g_555;
    VECTOR(uint32_t, 4) g_566;
    union U0 g_576[9][7][3];
    VECTOR(uint32_t, 16) g_588;
    volatile VECTOR(uint8_t, 2) g_648;
    volatile VECTOR(uint8_t, 8) g_649;
    VECTOR(uint16_t, 2) g_653;
    volatile uint64_t g_666;
    uint64_t g_692[7][2];
    volatile uint32_t g_701;
    int64_t *g_709;
    int64_t **g_708;
    VECTOR(uint64_t, 2) g_761;
    int32_t **g_767;
    int64_t g_770;
    volatile VECTOR(int32_t, 8) g_780;
    volatile VECTOR(int8_t, 2) g_808;
    volatile VECTOR(int8_t, 2) g_848;
    volatile VECTOR(int8_t, 4) g_852;
    VECTOR(int8_t, 4) g_864;
    VECTOR(int32_t, 2) g_882;
    volatile VECTOR(int64_t, 8) g_884;
    volatile VECTOR(int64_t, 16) g_886;
    VECTOR(int64_t, 16) g_888;
    volatile VECTOR(int64_t, 2) g_889;
    VECTOR(int32_t, 2) g_890;
    VECTOR(int64_t, 4) g_891;
    VECTOR(int64_t, 4) g_894;
    VECTOR(int64_t, 4) g_896;
    volatile VECTOR(uint8_t, 16) g_907;
    VECTOR(int64_t, 16) g_940;
    union U0 g_944;
    int32_t ** volatile g_946;
    volatile VECTOR(uint32_t, 4) g_961;
    uint64_t g_970;
    VECTOR(int32_t, 2) g_991;
    volatile VECTOR(uint32_t, 16) g_1001;
    VECTOR(uint64_t, 8) g_1032;
    int32_t * volatile g_1295;
    int32_t ** volatile g_1299;
    volatile int16_t g_1314[8][9][1];
    VECTOR(uint8_t, 8) g_1346;
    volatile VECTOR(uint8_t, 2) g_1347;
    volatile uint64_t g_1362[6];
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
int64_t  func_1(struct S2 * p_1371);
uint64_t  func_11(uint32_t  p_12, uint32_t  p_13, int32_t  p_14, struct S2 * p_1371);
int32_t  func_20(uint32_t  p_21, int8_t  p_22, int32_t  p_23, struct S2 * p_1371);
uint8_t  func_32(int8_t  p_33, union U1  p_34, uint16_t  p_35, int8_t  p_36, struct S2 * p_1371);
uint8_t  func_38(uint64_t  p_39, int64_t  p_40, int32_t  p_41, struct S2 * p_1371);
uint32_t  func_42(uint16_t  p_43, int32_t  p_44, uint32_t  p_45, uint8_t  p_46, int8_t  p_47, struct S2 * p_1371);
int64_t  func_51(uint32_t  p_52, int32_t  p_53, uint32_t  p_54, uint32_t  p_55, struct S2 * p_1371);
int16_t  func_64(uint32_t * p_65, int64_t  p_66, uint32_t * p_67, uint8_t  p_68, union U0  p_69, struct S2 * p_1371);
int64_t  func_72(uint64_t  p_73, int32_t * p_74, int32_t  p_75, struct S2 * p_1371);
int32_t * func_76(uint32_t * p_77, uint16_t  p_78, uint8_t  p_79, struct S2 * p_1371);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1371->g_2 p_1371->g_19 p_1371->l_comm_values p_1371->g_61 p_1371->g_57 p_1371->g_89 p_1371->g_91 p_1371->g_95 p_1371->g_96 p_1371->g_106 p_1371->g_119 p_1371->g_131 p_1371->g_107 p_1371->g_142 p_1371->g_140 p_1371->g_143 p_1371->g_145 p_1371->g_151 p_1371->g_153 p_1371->g_154 p_1371->g_166 p_1371->g_167 p_1371->g_137 p_1371->g_180 p_1371->g_103 p_1371->g_comm_values p_1371->g_181 p_1371->g_258 p_1371->g_256 p_1371->g_280 p_1371->g_266 p_1371->g_555 p_1371->g_566 permutations p_1371->g_588 p_1371->g_576 p_1371->g_666 p_1371->g_692 p_1371->g_701 p_1371->g_648 p_1371->g_649 p_1371->g_653 p_1371->g_761 p_1371->g_242 p_1371->g_132 p_1371->g_133 p_1371->g_884 p_1371->g_944 p_1371->g_946 p_1371->g_709 p_1371->g_253 p_1371->g_940 p_1371->g_770 p_1371->g_894 p_1371->g_1295 p_1371->g_1299 p_1371->g_1346 p_1371->g_1347 p_1371->g_890 p_1371->g_991 p_1371->g_1362 p_1371->g_241 p_1371->g_889
 * writes: p_1371->g_2 p_1371->g_57 p_1371->g_61 p_1371->g_89 p_1371->g_91 p_1371->g_103 p_1371->g_119 p_1371->g_137 p_1371->g_140 p_1371->g_142 p_1371->g_143 p_1371->g_145 p_1371->g_106 p_1371->g_171 p_1371->g_180 p_1371->g_181 p_1371->g_107 p_1371->g_133 p_1371->g_666 p_1371->g_692 p_1371->g_701 p_1371->g_708 p_1371->l_comm_values p_1371->g_576.f0 p_1371->g_242 p_1371->g_767 p_1371->g_770 p_1371->g_944.f1 p_1371->g_970 p_1371->g_257
 */
int64_t  func_1(struct S2 * p_1371)
{ /* block id: 4 */
    uint32_t l_37 = 0xA4ACF272L;
    uint32_t l_48[7][10] = {{0x1886A608L,0x1886A608L,1UL,0x2E8C41CEL,1UL,0x2E8C41CEL,1UL,0x1886A608L,0x1886A608L,1UL},{0x1886A608L,0x1886A608L,1UL,0x2E8C41CEL,1UL,0x2E8C41CEL,1UL,0x1886A608L,0x1886A608L,1UL},{0x1886A608L,0x1886A608L,1UL,0x2E8C41CEL,1UL,0x2E8C41CEL,1UL,0x1886A608L,0x1886A608L,1UL},{0x1886A608L,0x1886A608L,1UL,0x2E8C41CEL,1UL,0x2E8C41CEL,1UL,0x1886A608L,0x1886A608L,1UL},{0x1886A608L,0x1886A608L,1UL,0x2E8C41CEL,1UL,0x2E8C41CEL,1UL,0x1886A608L,0x1886A608L,1UL},{0x1886A608L,0x1886A608L,1UL,0x2E8C41CEL,1UL,0x2E8C41CEL,1UL,0x1886A608L,0x1886A608L,1UL},{0x1886A608L,0x1886A608L,1UL,0x2E8C41CEL,1UL,0x2E8C41CEL,1UL,0x1886A608L,0x1886A608L,1UL}};
    int32_t l_1291[7] = {1L,9L,1L,1L,9L,1L,1L};
    int32_t *l_1300 = &p_1371->g_2[5][2][4];
    VECTOR(uint32_t, 16) l_1305 = (VECTOR(uint32_t, 16))(0xD6D9561BL, (VECTOR(uint32_t, 4))(0xD6D9561BL, (VECTOR(uint32_t, 2))(0xD6D9561BL, 7UL), 7UL), 7UL, 0xD6D9561BL, 7UL, (VECTOR(uint32_t, 2))(0xD6D9561BL, 7UL), (VECTOR(uint32_t, 2))(0xD6D9561BL, 7UL), 0xD6D9561BL, 7UL, 0xD6D9561BL, 7UL);
    int32_t *l_1308 = (void*)0;
    int32_t *l_1309 = &p_1371->g_145;
    int32_t *l_1310[3][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int8_t l_1311[3][2] = {{1L,0x2CL},{1L,0x2CL},{1L,0x2CL}};
    int32_t l_1312 = 0x780FDE8DL;
    int64_t l_1313 = (-9L);
    uint64_t l_1315 = 0xA6C83E349B7DB692L;
    int8_t **l_1318[10][8][3] = {{{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241}},{{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241}},{{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241}},{{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241}},{{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241}},{{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241}},{{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241}},{{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241}},{{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241}},{{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241},{&p_1371->g_241,(void*)0,&p_1371->g_241}}};
    int16_t l_1319 = 0x329FL;
    VECTOR(int8_t, 2) l_1327 = (VECTOR(int8_t, 2))(0x54L, 1L);
    uint32_t l_1368[8] = {0x682F4A48L,0x682F4A48L,0x682F4A48L,0x682F4A48L,0x682F4A48L,0x682F4A48L,0x682F4A48L,0x682F4A48L};
    uint32_t **l_1369 = &p_1371->g_106[5][0];
    int32_t **l_1370 = &l_1308;
    int i, j, k;
    for (p_1371->g_2[0][0][5] = 0; (p_1371->g_2[0][0][5] >= 9); p_1371->g_2[0][0][5]++)
    { /* block id: 7 */
        uint32_t *l_56 = &p_1371->g_57;
        int32_t l_58 = (-1L);
        int32_t *l_59 = (void*)0;
        int32_t *l_60 = &p_1371->g_61[0];
        int64_t *l_768 = (void*)0;
        int64_t *l_769 = &p_1371->g_770;
        uint8_t *l_1289 = &p_1371->g_944.f1;
        union U1 l_1290 = {0x709CF3B9L};
        int16_t *l_1297 = &p_1371->g_180;
        uint64_t l_1298 = 0x5EA612AC2213B223L;
        int32_t l_1304[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
        int i;
        if ((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_sub_func_int16_t_s_s(((*l_1297) = (func_11(((safe_add_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(255UL, ((VECTOR(uint8_t, 4))(p_1371->g_19.xyxx)).y)) == func_20((safe_div_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(FAKE_DIVERGE(p_1371->group_1_offset, get_group_id(1), 10), ((safe_lshift_func_uint8_t_u_u(func_32(l_37, ((l_37 | ((*l_1289) = func_38(p_1371->g_19.y, ((*l_769) = (func_42((l_37 ^ l_48[2][0]), p_1371->g_19.y, p_1371->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1371->tid, 5))], (safe_sub_func_int64_t_s_s(func_51(((*l_56) = ((VECTOR(uint32_t, 4))(0xA6DA23AEL, 0x2FC7DF8BL, 0x11E181F3L, 0UL)).z), ((*l_60) = l_58), l_58, p_1371->g_19.x, p_1371), 0x50FB312B20DAB1F3L)), l_48[2][0], p_1371) >= l_48[3][5])), p_1371->g_566.y, p_1371))) , l_1290), l_48[4][4], l_1291[6], p_1371), l_1291[0])) == 0x74E7L))), 0)) >= (-8L)), 0x404175C2L)), l_48[2][0], p_1371->g_153.x, p_1371)), l_48[1][7])) && 0L), p_1371->g_894.y, l_1290.f0, p_1371) && (-10L))), 0x4F10L)) & l_37) , p_1371->g_2[0][0][5]), 0)), l_1298)))
        { /* block id: 657 */
            int32_t **l_1301 = &p_1371->g_103;
            (*p_1371->g_1299) = &l_1291[6];
            (*l_1301) = l_1300;
        }
        else
        { /* block id: 660 */
            int32_t *l_1302 = &l_1291[1];
            int32_t *l_1303[4];
            int i;
            for (i = 0; i < 4; i++)
                l_1303[i] = &l_1291[6];
            l_1305.sc++;
        }
        return (*l_1300);
    }
    l_1315++;
    if ((&p_1371->g_241 != l_1318[9][3][2]))
    { /* block id: 666 */
        (*l_1309) |= ((void*)0 != &l_1312);
        return l_1319;
    }
    else
    { /* block id: 669 */
        uint16_t *l_1334[4][6] = {{&p_1371->g_142,&p_1371->g_119[3][3],&p_1371->g_142,(void*)0,&p_1371->g_119[3][3],(void*)0},{&p_1371->g_142,&p_1371->g_119[3][3],&p_1371->g_142,(void*)0,&p_1371->g_119[3][3],(void*)0},{&p_1371->g_142,&p_1371->g_119[3][3],&p_1371->g_142,(void*)0,&p_1371->g_119[3][3],(void*)0},{&p_1371->g_142,&p_1371->g_119[3][3],&p_1371->g_142,(void*)0,&p_1371->g_119[3][3],(void*)0}};
        int32_t l_1343 = 0x4B6391D5L;
        int32_t l_1363[1][7][5] = {{{1L,1L,0x4318A677L,0L,0x0AEAD689L},{1L,1L,0x4318A677L,0L,0x0AEAD689L},{1L,1L,0x4318A677L,0L,0x0AEAD689L},{1L,1L,0x4318A677L,0L,0x0AEAD689L},{1L,1L,0x4318A677L,0L,0x0AEAD689L},{1L,1L,0x4318A677L,0L,0x0AEAD689L},{1L,1L,0x4318A677L,0L,0x0AEAD689L}}};
        uint32_t *l_1364 = (void*)0;
        uint32_t *l_1365 = (void*)0;
        uint32_t *l_1366 = (void*)0;
        uint32_t *l_1367 = &p_1371->g_57;
        int i, j, k;
        for (p_1371->g_140 = (-1); (p_1371->g_140 <= 9); p_1371->g_140 = safe_add_func_int64_t_s_s(p_1371->g_140, 6))
        { /* block id: 672 */
            uint32_t l_1326[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1326[i] = 4294967287UL;
            (*p_1371->g_555) &= (safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(l_1326[0], ((VECTOR(int8_t, 8))(5L, ((VECTOR(int8_t, 2))(0x34L, (-2L))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(l_1327.xyxy)).wxxywxzw, ((VECTOR(int8_t, 2))((-9L), (-1L))).yyyxxyxx, ((VECTOR(int8_t, 2))(0x64L, (-8L))).yyxyyyxy))).hi)), 0L)).s2)), (safe_rshift_func_uint16_t_u_u(3UL, 10))));
            for (p_1371->g_770 = 27; (p_1371->g_770 >= 2); p_1371->g_770 = safe_sub_func_int8_t_s_s(p_1371->g_770, 1))
            { /* block id: 676 */
                (*l_1309) |= (&p_1371->g_57 == &p_1371->g_107);
            }
        }
        (*l_1309) &= 0x51B36168L;
        (*p_1371->g_103) ^= ((p_1371->g_257.s0 = 65531UL) & ((safe_mod_func_uint32_t_u_u((l_1368[4] = (safe_lshift_func_uint8_t_u_s((((*l_1367) = ((p_1371->g_61[0] >= (((safe_lshift_func_int16_t_s_u((l_1343 == ((safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(safe_clamp_func(VECTOR(uint8_t, 2),VECTOR(uint8_t, 2),((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(p_1371->g_1346.s7571)))), 247UL, 255UL, 0x3BL, 1UL)).s16, ((VECTOR(uint8_t, 16))(p_1371->g_1347.yxxxxxxyxxxxyxxx)).s04, ((VECTOR(uint8_t, 8))((0x68192148L & ((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 16))((((safe_rshift_func_int16_t_s_s(p_1371->g_653.x, (((safe_div_func_uint64_t_u_u(p_1371->g_890.y, l_1343)) != (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((safe_add_func_int64_t_s_s((p_1371->g_991.x <= (4294967295UL || (*l_1300))), l_1343)) ^ l_1343) == 0L), 0x70L)), p_1371->g_107)), l_1343))) | p_1371->g_1362[3]))) && p_1371->g_666) , 0x43E75075L), (*l_1309), ((VECTOR(int32_t, 8))(0x7AEC6DFCL)), ((VECTOR(int32_t, 2))(0L)), ((VECTOR(int32_t, 4))((-1L))))).sb, 0x56301C9CL)) , l_1363[0][6][0])), l_1343, ((VECTOR(uint8_t, 4))(247UL)), 0xA0L, 0xA8L)).s73))).xxyyyxyy)).s6, (*p_1371->g_241))) <= 0x76F69754861E66EEL)), GROUP_DIVERGE(1, 1))) , (*p_1371->g_241)) != 0x69L)) != 0x87175FFCL)) | 4UL), (*p_1371->g_241)))), l_1343)) > 0x7A43D484L));
        (*p_1371->g_103) |= (p_1371->g_944 , ((p_1371->g_889.y , l_1369) != &l_1367));
    }
    (*l_1370) = (void*)0;
    return (*l_1309);
}


/* ------------------------------------------ */
/* 
 * reads : p_1371->g_1295
 * writes: p_1371->g_89
 */
uint64_t  func_11(uint32_t  p_12, uint32_t  p_13, int32_t  p_14, struct S2 * p_1371)
{ /* block id: 653 */
    int8_t l_1296 = 0x6BL;
    (*p_1371->g_1295) = p_14;
    return l_1296;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_20(uint32_t  p_21, int8_t  p_22, int32_t  p_23, struct S2 * p_1371)
{ /* block id: 651 */
    uint8_t l_1294 = 255UL;
    return l_1294;
}


/* ------------------------------------------ */
/* 
 * reads : p_1371->g_143 p_1371->g_253 p_1371->g_884
 * writes: p_1371->g_143
 */
uint8_t  func_32(int8_t  p_33, union U1  p_34, uint16_t  p_35, int8_t  p_36, struct S2 * p_1371)
{ /* block id: 644 */
    for (p_1371->g_143 = 0; (p_1371->g_143 <= 53); p_1371->g_143 = safe_add_func_uint8_t_u_u(p_1371->g_143, 2))
    { /* block id: 647 */
        return p_1371->g_253.x;
    }
    return p_1371->g_884.s7;
}


/* ------------------------------------------ */
/* 
 * reads : p_1371->g_180 p_1371->g_91 p_1371->g_242 p_1371->g_19 p_1371->g_132 p_1371->g_133 p_1371->l_comm_values p_1371->g_884 p_1371->g_649 p_1371->g_57 p_1371->g_96 p_1371->g_944 p_1371->g_946 p_1371->g_709 p_1371->g_253 p_1371->g_940 p_1371->g_142 p_1371->g_140 p_1371->g_89 p_1371->g_61 p_1371->g_770 p_1371->g_145 p_1371->g_258 p_1371->g_143 p_1371->g_280 p_1371->g_256 p_1371->g_653
 * writes: p_1371->g_180 p_1371->g_91 p_1371->g_107 p_1371->g_242 p_1371->g_145 p_1371->g_137 p_1371->g_140 p_1371->g_944.f1 p_1371->g_89 p_1371->g_171 p_1371->g_106 p_1371->g_970
 */
uint8_t  func_38(uint64_t  p_39, int64_t  p_40, int32_t  p_41, struct S2 * p_1371)
{ /* block id: 399 */
    VECTOR(int32_t, 16) l_778 = (VECTOR(int32_t, 16))(2L, (VECTOR(int32_t, 4))(2L, (VECTOR(int32_t, 2))(2L, 0x2E1D2F97L), 0x2E1D2F97L), 0x2E1D2F97L, 2L, 0x2E1D2F97L, (VECTOR(int32_t, 2))(2L, 0x2E1D2F97L), (VECTOR(int32_t, 2))(2L, 0x2E1D2F97L), 2L, 0x2E1D2F97L, 2L, 0x2E1D2F97L);
    VECTOR(int32_t, 2) l_779 = (VECTOR(int32_t, 2))(0L, 0x68A37F1FL);
    VECTOR(int32_t, 2) l_781 = (VECTOR(int32_t, 2))(0x2EA38086L, 0x34FB87F6L);
    int8_t l_784[10][5] = {{0x5EL,0x46L,0L,0x46L,0x46L},{0x5EL,0x46L,0L,0x46L,0x46L},{0x5EL,0x46L,0L,0x46L,0x46L},{0x5EL,0x46L,0L,0x46L,0x46L},{0x5EL,0x46L,0L,0x46L,0x46L},{0x5EL,0x46L,0L,0x46L,0x46L},{0x5EL,0x46L,0L,0x46L,0x46L},{0x5EL,0x46L,0L,0x46L,0x46L},{0x5EL,0x46L,0L,0x46L,0x46L},{0x5EL,0x46L,0L,0x46L,0x46L}};
    int32_t **l_789 = &p_1371->g_133[1][2];
    int16_t l_791 = 0x3A63L;
    int64_t **l_792 = &p_1371->g_709;
    union U1 l_922 = {1L};
    uint32_t l_923 = 0x349C06AFL;
    int64_t *l_962 = (void*)0;
    uint8_t *l_987 = (void*)0;
    VECTOR(uint16_t, 16) l_1022 = (VECTOR(uint16_t, 16))(0x77EDL, (VECTOR(uint16_t, 4))(0x77EDL, (VECTOR(uint16_t, 2))(0x77EDL, 9UL), 9UL), 9UL, 0x77EDL, 9UL, (VECTOR(uint16_t, 2))(0x77EDL, 9UL), (VECTOR(uint16_t, 2))(0x77EDL, 9UL), 0x77EDL, 9UL, 0x77EDL, 9UL);
    VECTOR(uint64_t, 2) l_1031 = (VECTOR(uint64_t, 2))(5UL, 1UL);
    VECTOR(uint64_t, 4) l_1033 = (VECTOR(uint64_t, 4))(0x9A0A8B49E2459D32L, (VECTOR(uint64_t, 2))(0x9A0A8B49E2459D32L, 0UL), 0UL);
    int32_t *l_1285 = (void*)0;
    int32_t *l_1286 = (void*)0;
    int32_t *l_1287[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_1288[10] = {0L,0x7F954FA0L,0x0FD3EFFDL,0x7F954FA0L,0L,0L,0x7F954FA0L,0x0FD3EFFDL,0x7F954FA0L,0L};
    int i, j;
    for (p_1371->g_180 = 0; (p_1371->g_180 <= (-3)); p_1371->g_180--)
    { /* block id: 402 */
        int16_t l_777 = (-1L);
        int32_t ***l_790 = &p_1371->g_767;
        VECTOR(uint8_t, 4) l_816 = (VECTOR(uint8_t, 4))(0x14L, (VECTOR(uint8_t, 2))(0x14L, 0UL), 0UL);
        int8_t l_819 = 8L;
        int32_t l_820 = 8L;
        int32_t l_840 = 9L;
        VECTOR(int8_t, 8) l_862 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x40L), 0x40L), 0x40L, 1L, 0x40L);
        VECTOR(int64_t, 8) l_897 = (VECTOR(int64_t, 8))(0x080A568EDEC19361L, (VECTOR(int64_t, 4))(0x080A568EDEC19361L, (VECTOR(int64_t, 2))(0x080A568EDEC19361L, 0L), 0L), 0L, 0x080A568EDEC19361L, 0L);
        uint16_t l_924 = 8UL;
        int8_t l_925 = 0x18L;
        uint16_t l_1004[9];
        union U0 *l_1019 = &p_1371->g_576[4][4][0];
        union U0 **l_1018[9] = {&l_1019,&l_1019,&l_1019,&l_1019,&l_1019,&l_1019,&l_1019,&l_1019,&l_1019};
        union U0 ***l_1017[9][8] = {{(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6]},{(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6]},{(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6]},{(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6]},{(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6]},{(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6]},{(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6]},{(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6]},{(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6],(void*)0,&l_1018[6]}};
        int32_t l_1085 = 0x0EDEABE1L;
        int32_t l_1086 = 0x44C75358L;
        int i, j;
        for (i = 0; i < 9; i++)
            l_1004[i] = 0UL;
        if ((safe_add_func_uint64_t_u_u((((void*)0 == &p_1371->g_241) <= (((safe_add_func_int64_t_s_s(l_777, (&p_1371->g_709 == (((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(l_778.s6a)).yyxxxxxy)).s4071245102273027, ((VECTOR(int32_t, 16))(l_779.xxxyxyyyyxyyxxxx)), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 4))(p_1371->g_780.s6621)).xyyywxwwxxwwywyx))).lo)))).s2236575575505104, ((VECTOR(int32_t, 8))(l_781.xxxyyyyy)).s5305161322602771, ((VECTOR(int32_t, 16))(0x5872B497L, ((safe_div_func_uint64_t_u_u(((l_784[7][1] && ((safe_sub_func_int16_t_s_s(((safe_div_func_int64_t_s_s((l_789 == ((*l_790) = l_789)), ((VECTOR(int64_t, 16))(mul_hi(((VECTOR(int64_t, 2))(0x7C010241B82B49F3L, 0x1D4020CBD54F8FF3L)).yxyxyyyyxyyxyxyx, ((VECTOR(int64_t, 8))(0x13CEBE3FAF73F638L, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(upsample(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_777, l_779.y, 0x19518B88L, 0x103B59A9L)).zzzyzzxxzwzywzzy)).sc0d6, ((VECTOR(uint32_t, 4))(1UL))))))), ((VECTOR(int64_t, 2))(0x5FF6F62B89A8F3F3L)), 1L)).s0314135461234727))).s3)) ^ p_1371->g_166.x), p_1371->g_701)) < p_39)) > l_791), (-1L))) == p_1371->g_653.x), l_781.x, 0x38019219L, ((VECTOR(int32_t, 8))(0x76A15706L)), (-10L), ((VECTOR(int32_t, 2))(7L)), 0x11BF7756L))))).s72, ((VECTOR(int32_t, 2))(0x78C6C59EL)), ((VECTOR(int32_t, 2))(1L))))), 0x288E6EAEL, 9L)).wzywwzyyywxwzwwy))).s5 , l_792)))) , FAKE_DIVERGE(p_1371->local_1_offset, get_local_id(1), 10)) == l_777)), l_777)))
        { /* block id: 404 */
            int32_t *l_799 = &p_1371->g_91;
            uint64_t l_811 = 9UL;
            int32_t l_842 = 0x2DED793AL;
            VECTOR(int8_t, 16) l_849 = (VECTOR(int8_t, 16))(0x73L, (VECTOR(int8_t, 4))(0x73L, (VECTOR(int8_t, 2))(0x73L, 0L), 0L), 0L, 0x73L, 0L, (VECTOR(int8_t, 2))(0x73L, 0L), (VECTOR(int8_t, 2))(0x73L, 0L), 0x73L, 0L, 0x73L, 0L);
            int32_t l_865 = 0x0715328DL;
            VECTOR(int64_t, 16) l_885 = (VECTOR(int64_t, 16))((-2L), (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 3L), 3L), 3L, (-2L), 3L, (VECTOR(int64_t, 2))((-2L), 3L), (VECTOR(int64_t, 2))((-2L), 3L), (-2L), 3L, (-2L), 3L);
            VECTOR(int64_t, 16) l_893 = (VECTOR(int64_t, 16))(0x3B5CE6DDD5D3120FL, (VECTOR(int64_t, 4))(0x3B5CE6DDD5D3120FL, (VECTOR(int64_t, 2))(0x3B5CE6DDD5D3120FL, (-8L)), (-8L)), (-8L), 0x3B5CE6DDD5D3120FL, (-8L), (VECTOR(int64_t, 2))(0x3B5CE6DDD5D3120FL, (-8L)), (VECTOR(int64_t, 2))(0x3B5CE6DDD5D3120FL, (-8L)), 0x3B5CE6DDD5D3120FL, (-8L), 0x3B5CE6DDD5D3120FL, (-8L));
            VECTOR(int64_t, 2) l_895 = (VECTOR(int64_t, 2))(0x3D55522ECEF5CA89L, 0x7CC85256778F80E2L);
            uint64_t l_900 = 0x89CD189030207274L;
            VECTOR(uint8_t, 2) l_906 = (VECTOR(uint8_t, 2))(250UL, 0xC7L);
            int16_t *l_942 = (void*)0;
            VECTOR(int8_t, 16) l_953 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x10L), 0x10L), 0x10L, 1L, 0x10L, (VECTOR(int8_t, 2))(1L, 0x10L), (VECTOR(int8_t, 2))(1L, 0x10L), 1L, 0x10L, 1L, 0x10L);
            uint32_t **l_963 = &p_1371->g_171;
            int32_t l_971 = 0x0069A89BL;
            union U0 l_986 = {0xC9790471L};
            int i;
            if (((*l_799) = (safe_rshift_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((safe_rshift_func_uint16_t_u_s(0xDEA9L, 7)), 0x4F9B261CC3773A5DL)), 5))))
            { /* block id: 406 */
                uint64_t l_807[5];
                int32_t *l_821 = &p_1371->g_89;
                int32_t *l_822 = &l_820;
                int32_t *l_823 = &p_1371->g_145;
                int32_t *l_824 = (void*)0;
                int32_t *l_825 = &p_1371->g_145;
                int32_t *l_826 = &p_1371->g_145;
                int32_t *l_827[4][10] = {{&l_820,&l_820,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_820,&l_820,(void*)0},{&l_820,&l_820,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_820,&l_820,(void*)0},{&l_820,&l_820,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_820,&l_820,(void*)0},{&l_820,&l_820,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_820,&l_820,(void*)0}};
                uint16_t l_828[8][8][4] = {{{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL}},{{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL}},{{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL}},{{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL}},{{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL}},{{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL}},{{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL}},{{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL},{0x44BBL,0x9F53L,0xDF2DL,65534UL}}};
                VECTOR(int8_t, 8) l_863 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_807[i] = 5UL;
                for (p_1371->g_107 = 0; (p_1371->g_107 == 56); p_1371->g_107 = safe_add_func_uint16_t_u_u(p_1371->g_107, 1))
                { /* block id: 409 */
                    uint8_t l_806 = 0UL;
                    (*l_799) |= 0L;
                    (*l_799) = (l_820 = ((safe_div_func_uint8_t_u_u((l_806 ^ (l_807[0] , (((VECTOR(int8_t, 8))(p_1371->g_808.xxxyxyxy)).s4 < (safe_rshift_func_uint8_t_u_u((p_41 , l_811), 7))))), (safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((p_1371->g_242 &= (7L < (0UL || l_807[0]))), (+(p_1371->g_19.x , ((VECTOR(uint8_t, 4))(l_816.xywz)).x)))), 7)))) <= (safe_mod_func_uint16_t_u_u(l_819, 0xBB77L))));
                }
                --l_828[6][7][3];
                for (p_1371->g_107 = (-8); (p_1371->g_107 == 41); p_1371->g_107 = safe_add_func_int8_t_s_s(p_1371->g_107, 5))
                { /* block id: 418 */
                    VECTOR(int16_t, 8) l_835 = (VECTOR(int16_t, 8))(0x5709L, (VECTOR(int16_t, 4))(0x5709L, (VECTOR(int16_t, 2))(0x5709L, 0x52AAL), 0x52AAL), 0x52AAL, 0x5709L, 0x52AAL);
                    int16_t *l_836 = &l_791;
                    int32_t l_841[8] = {0x1B0DA217L,0x6BDA47BEL,0x1B0DA217L,0x1B0DA217L,0x6BDA47BEL,0x1B0DA217L,0x1B0DA217L,0x6BDA47BEL};
                    VECTOR(int16_t, 8) l_857 = (VECTOR(int16_t, 8))(0x5749L, (VECTOR(int16_t, 4))(0x5749L, (VECTOR(int16_t, 2))(0x5749L, 0x5740L), 0x5740L), 0x5740L, 0x5749L, 0x5740L);
                    int32_t *l_883 = &p_1371->g_61[0];
                    uint64_t *l_898 = (void*)0;
                    uint32_t l_901 = 4294967288UL;
                    int i;
                    if ((safe_sub_func_int16_t_s_s(((*l_836) = ((VECTOR(int16_t, 2))(l_835.s53)).hi), 1L)))
                    { /* block id: 420 */
                        uint32_t l_837[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_837[i] = 4294967286UL;
                        ++l_837[1];
                        (*l_823) = ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0L, 1L)).xxyx)).lo, (int32_t)p_41))).lo;
                        if (l_819)
                            continue;
                        return l_837[1];
                    }
                    else
                    { /* block id: 425 */
                        uint32_t l_843 = 1UL;
                        uint32_t *l_866 = &p_1371->g_57;
                        VECTOR(int32_t, 2) l_867 = (VECTOR(int32_t, 2))(1L, 0x0EB7A4EEL);
                        VECTOR(int64_t, 16) l_887 = (VECTOR(int64_t, 16))(0x2D3A90FF14BB2782L, (VECTOR(int64_t, 4))(0x2D3A90FF14BB2782L, (VECTOR(int64_t, 2))(0x2D3A90FF14BB2782L, (-1L)), (-1L)), (-1L), 0x2D3A90FF14BB2782L, (-1L), (VECTOR(int64_t, 2))(0x2D3A90FF14BB2782L, (-1L)), (VECTOR(int64_t, 2))(0x2D3A90FF14BB2782L, (-1L)), 0x2D3A90FF14BB2782L, (-1L), 0x2D3A90FF14BB2782L, (-1L));
                        VECTOR(int64_t, 16) l_892 = (VECTOR(int64_t, 16))(0x6D7A1A991F559B0BL, (VECTOR(int64_t, 4))(0x6D7A1A991F559B0BL, (VECTOR(int64_t, 2))(0x6D7A1A991F559B0BL, 0x6897D48B1B63D68DL), 0x6897D48B1B63D68DL), 0x6897D48B1B63D68DL, 0x6D7A1A991F559B0BL, 0x6897D48B1B63D68DL, (VECTOR(int64_t, 2))(0x6D7A1A991F559B0BL, 0x6897D48B1B63D68DL), (VECTOR(int64_t, 2))(0x6D7A1A991F559B0BL, 0x6897D48B1B63D68DL), 0x6D7A1A991F559B0BL, 0x6897D48B1B63D68DL, 0x6D7A1A991F559B0BL, 0x6897D48B1B63D68DL);
                        int64_t *l_899[9][2][10] = {{{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0},{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0}},{{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0},{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0}},{{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0},{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0}},{{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0},{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0}},{{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0},{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0}},{{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0},{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0}},{{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0},{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0}},{{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0},{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0}},{{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0},{&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,&p_1371->g_770,(void*)0,(void*)0}}};
                        int i, j, k;
                        l_843--;
                        l_841[6] = ((p_40 ^ ((safe_mod_func_uint8_t_u_u(((void*)0 == (*p_1371->g_132)), ((VECTOR(uint8_t, 2))(0x02L, 0x60L)).hi)) <= (((((((VECTOR(int8_t, 4))(sub_sat(((VECTOR(int8_t, 8))(p_1371->g_848.xyyyxxxx)).odd, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(0L, 9L, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(l_849.s43)), (int8_t)(safe_lshift_func_int8_t_s_u(((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(p_1371->g_852.zx)).yxxx)).odd)).xyyx, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))((safe_mod_func_uint32_t_u_u(((*l_866) = ((safe_lshift_func_uint16_t_u_u((p_1371->g_566.z || (((VECTOR(int16_t, 8))(0x73A0L, p_39, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 2))(l_857.s27)), ((VECTOR(int16_t, 4))((*l_799), ((*l_836) = ((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((VECTOR(int8_t, 2))(0x66L, 0L)).hi, (p_1371->g_864.w = ((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 4))(l_862.s7505)), ((VECTOR(int8_t, 2))(l_863.s34)).xyyy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(p_1371->g_864.zy)).xyxyxxxx)).hi))).z))), (0xFFL | (l_841[3] >= (p_41 < 0x0A837AD6L))))) , p_41)), 0x3F27L, (-1L))).hi))).yyyyxxxyxyyyxxyy)).s853c, ((VECTOR(int16_t, 4))(0x7A34L))))).even)), p_41, ((VECTOR(int16_t, 2))((-1L))), 0L)).s7 || p_39)), 5)) == l_865)), p_40)), 0x44L, (-1L), 0x42L)).hi)).xxyy))), ((VECTOR(int8_t, 4))(0x43L)))).even))).z, p_1371->g_107))))), ((VECTOR(int8_t, 2))(8L)), ((VECTOR(int8_t, 2))(0x1AL))))))).xxyx)), 1L, l_835.s5, 1L, p_1371->g_61[0], l_779.x, 1L, (-9L), ((VECTOR(int8_t, 2))(0L)), 0x09L)).sec)))).xxyy))).y , (void*)0) != &p_1371->g_709) == FAKE_DIVERGE(p_1371->global_2_offset, get_global_id(2), 10)) >= l_843) < (-3L)))) > p_1371->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1371->tid, 5))]);
                        (*l_823) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_867.xy)), 0x1AC57C49L, 8L)).z;
                        (*l_823) = (safe_mod_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((((safe_rshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_add_func_int32_t_s_s(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 2))(p_1371->g_882.yx)).xxxyxxyy, (int32_t)((l_799 == ((*p_1371->g_767) = l_883)) ^ 0L), (int32_t)(0x73F79E0EL != ((p_1371->g_770 = ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(safe_clamp_func(VECTOR(int64_t, 2),VECTOR(int64_t, 2),((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 2))(p_1371->g_884.s27)).xxxxxxyxxyxyxxxy, (int64_t)(-1L)))).sf8, ((VECTOR(int64_t, 16))(l_885.s8c0a314195b13a48)).sd1, ((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(p_1371->g_886.s86)), ((VECTOR(int64_t, 2))(sub_sat(((VECTOR(int64_t, 2))(0L, (-7L))), ((VECTOR(int64_t, 4))(l_887.seaad)).lo))), 0x6E3B51786DCAE37BL, (-10L), 1L, (-10L))).s13, ((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 2))(mul_hi(((VECTOR(int64_t, 4))(p_1371->g_888.sb839)).hi, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(mul_hi(((VECTOR(int64_t, 2))(p_1371->g_889.xy)).yyyx, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x384311951C958B2DL, 1L)), ((VECTOR(int64_t, 2))(1L, 0x1246A8D5980EFE32L)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(0x58A4E0AE5627F0D6L, 0x4CAB6E2A400C8034L)))), (-1L), 1L)).odd))), ((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 16))(upsample(((VECTOR(int32_t, 2))(p_1371->g_890.xx)).yyxyyxyxyxyxxyyx, ((VECTOR(uint32_t, 2))(0x1C4AE537L, 0x111E3402L)).xxyxyyyyxyyyyxxx))).s0a05)).lo, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(max(((VECTOR(int64_t, 16))(p_1371->g_891.yyzxxxxwwyzwwzxx)), ((VECTOR(int64_t, 4))(l_892.sb9f2)).xyyxwywyxzwxyxyx))))).s11))), 7L, (-6L))).s43))).yyxxxyyx, ((VECTOR(int64_t, 8))(l_893.s8055bbfa))))), ((VECTOR(int64_t, 8))(p_1371->g_894.xxzxzxxz)))).s19fc)).even))).yxxxyxxyyxyxxxyy, ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 4))(clz(((VECTOR(int64_t, 16))(0x18456CE3C62FA846L, ((VECTOR(int64_t, 8))(l_895.yyxxyxyy)), ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 8))(min(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(clz(((VECTOR(int64_t, 4))(rhadd(((VECTOR(int64_t, 8))(p_1371->g_896.zzyzyxzz)).odd, ((VECTOR(int64_t, 2))(rotate(((VECTOR(int64_t, 8))(l_897.s36071652)).s34, ((VECTOR(int64_t, 8))(mad_sat(((VECTOR(int64_t, 4))(0x5EB2F32EC811B8C1L, (((0x3EFB1493L <= p_41) != (&l_811 == l_898)) , l_781.y), 0x04733C72CD2AF3D4L, 0x22934C740CEFF148L)).xxwxzyxw, ((VECTOR(int64_t, 8))((-5L))), ((VECTOR(int64_t, 8))(0x42C1E22EEEA8D31FL))))).s20))).xyxx))).zyyzxyyw))).s71)))).xyxxyxxy, ((VECTOR(int64_t, 8))(9L))))), ((VECTOR(int64_t, 8))(7L))))).s35)), 0x66C48755B40960C6L, 1L, ((VECTOR(int64_t, 2))(0x1AACE0A1D289B6B6L)), 0x6C41A55B2D3CFEBEL)).s0682))).even, ((VECTOR(int64_t, 2))((-4L)))))).xyyxyyyy)).s5544226121121241, ((VECTOR(int64_t, 16))(0x72786504AB2D820CL))))).s8c))).xyxyxyyxyyxyyyyy)).s20)), 0L, ((VECTOR(int64_t, 4))(0x23CF7F03FF2DDC81L)), 0x6F7EF8980AEB9C5DL)).s1) , l_900))))).even)).x, 0xE89D6C02L)), p_40)) || GROUP_DIVERGE(2, 1)), p_41)) >= l_901) , 0x6F59L), 8)) <= p_40), p_1371->g_19.x)), 0x1CL)), p_39));
                    }
                }
            }
            else
            { /* block id: 437 */
                int16_t l_926 = 0x1E2AL;
                uint8_t *l_935 = &p_1371->g_140;
                union U1 l_941 = {1L};
                int32_t *l_945 = &p_1371->g_145;
                uint32_t l_973 = 0UL;
                if (((18446744073709551612UL | (((safe_mul_func_int16_t_s_s(0x4203L, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((safe_rshift_func_uint16_t_u_u(4UL, 9)) == ((VECTOR(uint8_t, 8))(max(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_906.yxxy)).ywywwwyx)), ((VECTOR(uint8_t, 16))(p_1371->g_907.s06df5ad6f991b174)).hi))).s2), (safe_mod_func_int32_t_s_s((+(safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 8))(0x1EF7L, 0x7708L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((l_840 , ((((((((*l_799) == (~p_1371->g_848.y)) != p_41) , ((safe_rshift_func_uint8_t_u_s(250UL, 7)) != ((safe_sub_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((l_922 , 0x69L), l_923)), (-3L))) , GROUP_DIVERGE(0, 1)))) , (void*)0) == &p_1371->g_140) == l_923) , p_1371->g_140)) || 0xA89BL), 0x56A2L, ((VECTOR(int16_t, 2))(0x5EB2L)), 0x55CDL, ((VECTOR(int16_t, 2))((-8L))), 0x6C73L)).even)), 1L, 6L)).lo, ((VECTOR(int16_t, 4))((-1L))), ((VECTOR(int16_t, 4))(0x4EFEL))))).z, l_924)), 11)), 3UL))), l_925)), p_1371->g_889.y, ((VECTOR(int16_t, 8))(0x521AL)), ((VECTOR(int16_t, 2))((-4L))), p_41, 0L, 0x3D64L)).s336f)), (int16_t)l_926))).w)) , p_1371->g_884.s6) > (*l_799))) >= p_39))
                { /* block id: 438 */
                    int8_t *l_936 = (void*)0;
                    int8_t *l_937 = &l_819;
                    int16_t **l_943 = &l_942;
                    int32_t l_956 = 0x1592EC6EL;
                    int64_t *l_968 = (void*)0;
                    uint64_t *l_969[6][5][8] = {{{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970}},{{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970}},{{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970}},{{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970}},{{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970}},{{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970},{&p_1371->g_970,(void*)0,(void*)0,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970,&p_1371->g_970}}};
                    int32_t ***l_972[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_972[i] = &p_1371->g_767;
                    (*l_799) |= ((safe_rshift_func_uint16_t_u_s(65531UL, 7)) && ((p_1371->g_649.s2 <= ((VECTOR(int8_t, 2))((-1L), 9L)).hi) < (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(((*l_937) = (&p_1371->g_140 != l_935)), (safe_sub_func_int64_t_s_s(p_40, (((((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 2))(p_1371->g_940.s9e)).yyyx)))).y > p_1371->g_57) & (&p_1371->g_180 != (l_941 , ((*l_943) = l_942)))) , 0xF9C79E6C38B7838DL))))), 7)), p_39))));
                    if ((*p_1371->g_96))
                        continue;
                    (*p_1371->g_946) = (p_1371->g_944 , l_945);
                    if ((safe_lshift_func_int8_t_s_s((l_973 = ((safe_mul_func_int16_t_s_s(((((l_971 = ((safe_sub_func_int8_t_s_s(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_953.s88)).xxxx)).ywzxwzyywxzzxzzx)).s70)), 0x22L, ((VECTOR(int8_t, 2))(0x2AL, (-1L))), 0x40L, 0x1DL, 7L)).s7761266127121117)).hi)).s4, (safe_mod_func_int32_t_s_s(l_956, (safe_rshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((l_840 = ((((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(p_1371->g_961.zz)).yyyy)).y != ((void*)0 == l_962)) , (0UL && (&p_40 == (void*)0)))), ((*l_945) = ((void*)0 == l_963)))), (safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(((!(~((l_968 == p_1371->g_709) >= l_956))) | p_1371->g_253.y), p_39)), 255UL)))))))) >= p_40)) , l_972[0]) != l_790) > p_1371->g_940.sa), p_39)) != p_40)), p_1371->g_142)))
                    { /* block id: 448 */
                        uint32_t *l_974 = (void*)0;
                        uint8_t *l_977 = (void*)0;
                        uint8_t *l_978 = &p_1371->g_576[4][4][0].f1;
                        uint8_t *l_979 = (void*)0;
                        uint8_t *l_980 = (void*)0;
                        uint8_t *l_981 = (void*)0;
                        uint8_t *l_982 = (void*)0;
                        uint32_t **l_983[1][3];
                        int16_t l_988 = (-5L);
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_983[i][j] = &l_974;
                        }
                        (*p_1371->g_280) = func_76(func_76((p_1371->g_106[5][0] = ((*l_963) = func_76(l_974, (*l_799), (l_842 &= (l_778.s4 |= (p_1371->g_944.f1 = (--(*l_935))))), p_1371))), ((safe_rshift_func_uint16_t_u_s((l_986 , (((p_1371->g_770 , (((((&l_777 != ((*l_945) , l_942)) , 8UL) && p_1371->g_258.s5) , l_935) != l_987)) >= p_40) <= l_816.x)), 8)) ^ l_988), l_922.f0, p_1371), (*l_945), p_1371->g_143, p_1371);
                    }
                    else
                    { /* block id: 456 */
                        if (p_40)
                            break;
                    }
                }
                else
                { /* block id: 459 */
                    for (p_1371->g_970 = 0; (p_1371->g_970 <= 43); p_1371->g_970++)
                    { /* block id: 462 */
                        (*l_799) = p_39;
                    }
                }
                if (p_40)
                    continue;
                if ((*l_945))
                    break;
            }
            (*p_1371->g_946) = &l_865;
        }
        else
        { /* block id: 470 */
            uint32_t *l_1000 = &p_1371->g_944.f0;
            int32_t l_1005[9] = {0x1C47D116L,1L,0x1C47D116L,0x1C47D116L,1L,0x1C47D116L,0x1C47D116L,1L,0x1C47D116L};
            int32_t *l_1006 = &p_1371->g_91;
            int i;
            (*l_1006) = ((VECTOR(int32_t, 8))(0x15849B15L, 0x42430261L, ((VECTOR(int32_t, 2))(p_1371->g_991.xx)), ((VECTOR(int32_t, 4))(((safe_sub_func_uint64_t_u_u((p_1371->g_253.x == (safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((((((&p_1371->g_180 == (void*)0) < p_40) || 0x632375D03FD63C97L) ^ p_39) , p_1371->g_91) >= 0L) | (((*l_1000) &= GROUP_DIVERGE(2, 1)) || ((VECTOR(uint32_t, 16))(4294967292UL, ((VECTOR(uint32_t, 4))(p_1371->g_1001.sed19)), 4294967288UL, 0x39FE4A0FL, ((safe_sub_func_uint16_t_u_u((((((l_778.sa = p_1371->g_166.y) & 0x0719L) | 0x78DDCCC3L) == l_1004[5]) > 0x6FL), p_40)) , p_40), l_1005[0], 1UL, 0x86CA972FL, ((VECTOR(uint32_t, 2))(0x51A39D50L)), 0x58E11F1AL, 0UL, 1UL)).s8)), 0xADL)), p_1371->g_882.x)), 0xDBL))), l_924)) < p_1371->g_257.s0), ((VECTOR(int32_t, 2))(0x67512EA5L)), 0x73005539L)))).s1;
        }
        for (l_820 = 0; (l_820 != 17); ++l_820)
        { /* block id: 477 */
            union U0 *l_1016 = &p_1371->g_576[5][6][1];
            union U0 **l_1015 = &l_1016;
            union U0 ***l_1014 = &l_1015;
            union U0 ****l_1013 = &l_1014;
            int8_t *l_1034 = &l_784[7][1];
            int8_t *l_1035[2][9][2] = {{{(void*)0,&l_819},{(void*)0,&l_819},{(void*)0,&l_819},{(void*)0,&l_819},{(void*)0,&l_819},{(void*)0,&l_819},{(void*)0,&l_819},{(void*)0,&l_819},{(void*)0,&l_819}},{{(void*)0,&l_819},{(void*)0,&l_819},{(void*)0,&l_819},{(void*)0,&l_819},{(void*)0,&l_819},{(void*)0,&l_819},{(void*)0,&l_819},{(void*)0,&l_819},{(void*)0,&l_819}}};
            int32_t l_1084[7][7] = {{0x344EE83EL,0x4B7E4AE8L,0x556D1AA7L,0x77DCAEECL,0x556D1AA7L,0x4B7E4AE8L,0x344EE83EL},{0x344EE83EL,0x4B7E4AE8L,0x556D1AA7L,0x77DCAEECL,0x556D1AA7L,0x4B7E4AE8L,0x344EE83EL},{0x344EE83EL,0x4B7E4AE8L,0x556D1AA7L,0x77DCAEECL,0x556D1AA7L,0x4B7E4AE8L,0x344EE83EL},{0x344EE83EL,0x4B7E4AE8L,0x556D1AA7L,0x77DCAEECL,0x556D1AA7L,0x4B7E4AE8L,0x344EE83EL},{0x344EE83EL,0x4B7E4AE8L,0x556D1AA7L,0x77DCAEECL,0x556D1AA7L,0x4B7E4AE8L,0x344EE83EL},{0x344EE83EL,0x4B7E4AE8L,0x556D1AA7L,0x77DCAEECL,0x556D1AA7L,0x4B7E4AE8L,0x344EE83EL},{0x344EE83EL,0x4B7E4AE8L,0x556D1AA7L,0x77DCAEECL,0x556D1AA7L,0x4B7E4AE8L,0x344EE83EL}};
            int32_t l_1089 = 0x1E265FE8L;
            int i, j, k;
            (*p_1371->g_96) = (safe_lshift_func_int8_t_s_u((((safe_mul_func_int16_t_s_s((((*l_1013) = (void*)0) == l_1017[7][0]), ((-1L) || l_897.s5))) & (safe_rshift_func_uint16_t_u_u((l_778.s6 = ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_1022.s954a)).yxzyyxywxwxwzzzz)).s1), (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((((*p_1371->g_96) & (~(safe_lshift_func_int8_t_s_u(((*l_1034) &= (safe_div_func_uint64_t_u_u(p_39, ((VECTOR(uint64_t, 2))(mul_hi(((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(l_1031.yyxx)), ((VECTOR(uint64_t, 2))(p_1371->g_1032.s06)), 0xBDB316DD18DFEAF5L, 0xFE7A893825DCBB0EL)).s07, ((VECTOR(uint64_t, 16))(clz(((VECTOR(uint64_t, 2))(l_1033.yx)).xxxxxxxxyyyyyxxy))).s22))).hi))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(add_sat(((VECTOR(uint8_t, 2))(255UL, 255UL)).yxyxxxyxyxxyxyxx, ((VECTOR(uint8_t, 4))(p_1371->g_882.x, 250UL, 0x98L, 254UL)).yzwwzzwwzzyzzwww))).s5c)))).xyyx)).x)))) < ((p_39 != ((l_840 = p_39) || p_1371->g_256.x)) , l_922.f0)) < p_39), p_1371->g_89)), 3))))) >= p_39), 1));
            if ((atomic_inc(&p_1371->l_atomic_input[3]) == 0))
            { /* block id: 484 */
                uint64_t l_1036 = 0x0635CE144F303E62L;
                VECTOR(int64_t, 8) l_1037 = (VECTOR(int64_t, 8))(0x0E116CE6C4CEA905L, (VECTOR(int64_t, 4))(0x0E116CE6C4CEA905L, (VECTOR(int64_t, 2))(0x0E116CE6C4CEA905L, 0x4D388FAF24437DDEL), 0x4D388FAF24437DDEL), 0x4D388FAF24437DDEL, 0x0E116CE6C4CEA905L, 0x4D388FAF24437DDEL);
                VECTOR(int16_t, 16) l_1038 = (VECTOR(int16_t, 16))(0x1710L, (VECTOR(int16_t, 4))(0x1710L, (VECTOR(int16_t, 2))(0x1710L, 1L), 1L), 1L, 0x1710L, 1L, (VECTOR(int16_t, 2))(0x1710L, 1L), (VECTOR(int16_t, 2))(0x1710L, 1L), 0x1710L, 1L, 0x1710L, 1L);
                VECTOR(uint64_t, 16) l_1039 = (VECTOR(uint64_t, 16))(0x82906597CFBEC184L, (VECTOR(uint64_t, 4))(0x82906597CFBEC184L, (VECTOR(uint64_t, 2))(0x82906597CFBEC184L, 0xF81A1904DAF1312EL), 0xF81A1904DAF1312EL), 0xF81A1904DAF1312EL, 0x82906597CFBEC184L, 0xF81A1904DAF1312EL, (VECTOR(uint64_t, 2))(0x82906597CFBEC184L, 0xF81A1904DAF1312EL), (VECTOR(uint64_t, 2))(0x82906597CFBEC184L, 0xF81A1904DAF1312EL), 0x82906597CFBEC184L, 0xF81A1904DAF1312EL, 0x82906597CFBEC184L, 0xF81A1904DAF1312EL);
                VECTOR(uint8_t, 4) l_1040 = (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 0x38L), 0x38L);
                int16_t l_1041 = 0x1C8AL;
                uint64_t l_1042[4] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                int32_t l_1043 = (-1L);
                VECTOR(uint16_t, 16) l_1044 = (VECTOR(uint16_t, 16))(0xF535L, (VECTOR(uint16_t, 4))(0xF535L, (VECTOR(uint16_t, 2))(0xF535L, 0xAFE6L), 0xAFE6L), 0xAFE6L, 0xF535L, 0xAFE6L, (VECTOR(uint16_t, 2))(0xF535L, 0xAFE6L), (VECTOR(uint16_t, 2))(0xF535L, 0xAFE6L), 0xF535L, 0xAFE6L, 0xF535L, 0xAFE6L);
                VECTOR(uint8_t, 2) l_1045 = (VECTOR(uint8_t, 2))(0x32L, 0x4BL);
                VECTOR(uint16_t, 8) l_1046 = (VECTOR(uint16_t, 8))(0x0C42L, (VECTOR(uint16_t, 4))(0x0C42L, (VECTOR(uint16_t, 2))(0x0C42L, 0xC025L), 0xC025L), 0xC025L, 0x0C42L, 0xC025L);
                VECTOR(uint16_t, 8) l_1047 = (VECTOR(uint16_t, 8))(9UL, (VECTOR(uint16_t, 4))(9UL, (VECTOR(uint16_t, 2))(9UL, 0x75F2L), 0x75F2L), 0x75F2L, 9UL, 0x75F2L);
                VECTOR(uint16_t, 2) l_1048 = (VECTOR(uint16_t, 2))(0x9766L, 0x3961L);
                VECTOR(uint16_t, 2) l_1049 = (VECTOR(uint16_t, 2))(0x869CL, 0x9518L);
                VECTOR(int16_t, 2) l_1050 = (VECTOR(int16_t, 2))(0x7A28L, 0x6FAFL);
                int64_t l_1051 = 0x3C044CF540B54366L;
                VECTOR(int32_t, 2) l_1052 = (VECTOR(int32_t, 2))(3L, 0x779214AAL);
                VECTOR(uint16_t, 8) l_1053 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 1UL), 1UL), 1UL, 65535UL, 1UL);
                int32_t l_1054[8][7][4] = {{{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL}},{{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL}},{{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL}},{{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL}},{{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL}},{{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL}},{{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL}},{{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL},{(-5L),0x53E54159L,0x4D679F87L,0x32143C0AL}}};
                uint16_t l_1055 = 0xF754L;
                VECTOR(uint32_t, 4) l_1056 = (VECTOR(uint32_t, 4))(0x20815653L, (VECTOR(uint32_t, 2))(0x20815653L, 4294967295UL), 4294967295UL);
                uint64_t l_1057 = 0x19515C303A1C3515L;
                int32_t *l_1076 = (void*)0;
                int i, j, k;
                l_1037.s0 &= l_1036;
                if (((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(0x425F76F3L, 0x73C74AEEL)).yyyy)).zwwzyzzz)).s67)), ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(l_1038.s0e)))).xxxy, ((VECTOR(uint16_t, 8))(((((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(0xE30A75F238B17AD2L, 0x09C101E915E89A3FL)).yyyy)).hi)).odd , ((VECTOR(uint64_t, 4))(max(((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 2))(l_1039.s7e)), ((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 4))(0xB475702CDB5D56ECL, (((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_1040.xyzz)))).y , l_1041), 18446744073709551609UL, 2UL)).zyzwzwyxywwywyzz)).s82))).xxyx, ((VECTOR(uint64_t, 4))(1UL, 0x1EA84F16FCDEE926L, 0UL, 0x7FD75A9CD014612EL))))).w) , l_1042[3]), l_1043, ((VECTOR(uint16_t, 2))(rotate(((VECTOR(uint16_t, 4))(l_1044.s87e0)).odd, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(sub_sat(((VECTOR(uint16_t, 16))(hadd(((VECTOR(uint16_t, 4))(rotate(((VECTOR(uint16_t, 2))(0xFC08L, 6UL)).yxxy, ((VECTOR(uint16_t, 2))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_1045.xyyyxyxxyxxxxyyy)))).s3e, ((VECTOR(uint8_t, 2))(255UL, 0xBAL))))).xxyx))).wzxyzzxzywwwzwxz, ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_1046.s6075140253604454))))))).s79, ((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 8))(abs_diff(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_1047.s4307)).xwywwzyyxwzwzzzw)).hi, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))(0UL, ((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 2))(max(((VECTOR(uint16_t, 4))(l_1048.yyxy)).hi, (uint16_t)0x3052L)))))), 0xC33BL)).even)).xxyyxyxx))).even))).hi))), 0x631EL, ((VECTOR(uint16_t, 2))(l_1049.xx)).odd, ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))((((VECTOR(int16_t, 8))(l_1050.yyxyxyxy)).s5 , l_1051), (l_1052.x = 65531UL), 0xC3A2L, ((VECTOR(uint16_t, 8))(l_1053.s66044367)), 0x32ABL, l_1054[4][0][3], 0xE583L, 1UL, 0x7465L)).odd)).s4, ((VECTOR(uint16_t, 8))(0x6070L, ((VECTOR(uint16_t, 4))(l_1055, 0UL, 0x8924L, 0x2780L)), l_1056.w, 65533UL, 0x5137L)), GROUP_DIVERGE(0, 1), 2UL, 0xFB7AL)).sec))), l_1057, 0x0124L, 0xE31EL, 2UL)).odd))).even, ((VECTOR(int32_t, 2))(0x15EE125CL))))).hi)
                { /* block id: 487 */
                    int64_t l_1058 = (-1L);
                    int32_t l_1059 = 0x57C227E1L;
                    int16_t l_1063 = 0x519AL;
                    uint32_t l_1064[6][1][9] = {{{0UL,0UL,0x97DF59BDL,0xA7803613L,0x2014E6B9L,0UL,0x1DCD5C9FL,0x6C3D85DEL,0x1DCD5C9FL}},{{0UL,0UL,0x97DF59BDL,0xA7803613L,0x2014E6B9L,0UL,0x1DCD5C9FL,0x6C3D85DEL,0x1DCD5C9FL}},{{0UL,0UL,0x97DF59BDL,0xA7803613L,0x2014E6B9L,0UL,0x1DCD5C9FL,0x6C3D85DEL,0x1DCD5C9FL}},{{0UL,0UL,0x97DF59BDL,0xA7803613L,0x2014E6B9L,0UL,0x1DCD5C9FL,0x6C3D85DEL,0x1DCD5C9FL}},{{0UL,0UL,0x97DF59BDL,0xA7803613L,0x2014E6B9L,0UL,0x1DCD5C9FL,0x6C3D85DEL,0x1DCD5C9FL}},{{0UL,0UL,0x97DF59BDL,0xA7803613L,0x2014E6B9L,0UL,0x1DCD5C9FL,0x6C3D85DEL,0x1DCD5C9FL}}};
                    int i, j, k;
                    l_1052.x = (l_1058 , l_1059);
                    for (l_1058 = 0; (l_1058 != (-10)); --l_1058)
                    { /* block id: 491 */
                        int8_t l_1062 = (-1L);
                        l_1052.y ^= (l_1059 = l_1062);
                    }
                    l_1064[2][0][1]++;
                }
                else
                { /* block id: 496 */
                    uint32_t l_1067 = 0xF3EC1B81L;
                    int32_t l_1068 = 0x57E52EFFL;
                    int32_t l_1070[2][5][3] = {{{2L,0x73846F47L,0x73846F47L},{2L,0x73846F47L,0x73846F47L},{2L,0x73846F47L,0x73846F47L},{2L,0x73846F47L,0x73846F47L},{2L,0x73846F47L,0x73846F47L}},{{2L,0x73846F47L,0x73846F47L},{2L,0x73846F47L,0x73846F47L},{2L,0x73846F47L,0x73846F47L},{2L,0x73846F47L,0x73846F47L},{2L,0x73846F47L,0x73846F47L}}};
                    int32_t *l_1069[4] = {&l_1070[1][4][2],&l_1070[1][4][2],&l_1070[1][4][2],&l_1070[1][4][2]};
                    int32_t *l_1071 = &l_1070[1][4][2];
                    int i, j, k;
                    l_1068 ^= (l_1052.y |= l_1067);
                    l_1071 = l_1069[0];
                    for (l_1070[1][4][2] = 0; (l_1070[1][4][2] > 21); l_1070[1][4][2]++)
                    { /* block id: 502 */
                        VECTOR(int32_t, 16) l_1075 = (VECTOR(int32_t, 16))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L), (VECTOR(int32_t, 2))((-1L), (-1L)), (VECTOR(int32_t, 2))((-1L), (-1L)), (-1L), (-1L), (-1L), (-1L));
                        int32_t *l_1074 = (void*)0;
                        int i;
                        l_1069[0] = l_1074;
                    }
                }
                l_1076 = (void*)0;
                unsigned int result = 0;
                result += l_1036;
                result += l_1037.s7;
                result += l_1037.s6;
                result += l_1037.s5;
                result += l_1037.s4;
                result += l_1037.s3;
                result += l_1037.s2;
                result += l_1037.s1;
                result += l_1037.s0;
                result += l_1038.sf;
                result += l_1038.se;
                result += l_1038.sd;
                result += l_1038.sc;
                result += l_1038.sb;
                result += l_1038.sa;
                result += l_1038.s9;
                result += l_1038.s8;
                result += l_1038.s7;
                result += l_1038.s6;
                result += l_1038.s5;
                result += l_1038.s4;
                result += l_1038.s3;
                result += l_1038.s2;
                result += l_1038.s1;
                result += l_1038.s0;
                result += l_1039.sf;
                result += l_1039.se;
                result += l_1039.sd;
                result += l_1039.sc;
                result += l_1039.sb;
                result += l_1039.sa;
                result += l_1039.s9;
                result += l_1039.s8;
                result += l_1039.s7;
                result += l_1039.s6;
                result += l_1039.s5;
                result += l_1039.s4;
                result += l_1039.s3;
                result += l_1039.s2;
                result += l_1039.s1;
                result += l_1039.s0;
                result += l_1040.w;
                result += l_1040.z;
                result += l_1040.y;
                result += l_1040.x;
                result += l_1041;
                int l_1042_i0;
                for (l_1042_i0 = 0; l_1042_i0 < 4; l_1042_i0++) {
                    result += l_1042[l_1042_i0];
                }
                result += l_1043;
                result += l_1044.sf;
                result += l_1044.se;
                result += l_1044.sd;
                result += l_1044.sc;
                result += l_1044.sb;
                result += l_1044.sa;
                result += l_1044.s9;
                result += l_1044.s8;
                result += l_1044.s7;
                result += l_1044.s6;
                result += l_1044.s5;
                result += l_1044.s4;
                result += l_1044.s3;
                result += l_1044.s2;
                result += l_1044.s1;
                result += l_1044.s0;
                result += l_1045.y;
                result += l_1045.x;
                result += l_1046.s7;
                result += l_1046.s6;
                result += l_1046.s5;
                result += l_1046.s4;
                result += l_1046.s3;
                result += l_1046.s2;
                result += l_1046.s1;
                result += l_1046.s0;
                result += l_1047.s7;
                result += l_1047.s6;
                result += l_1047.s5;
                result += l_1047.s4;
                result += l_1047.s3;
                result += l_1047.s2;
                result += l_1047.s1;
                result += l_1047.s0;
                result += l_1048.y;
                result += l_1048.x;
                result += l_1049.y;
                result += l_1049.x;
                result += l_1050.y;
                result += l_1050.x;
                result += l_1051;
                result += l_1052.y;
                result += l_1052.x;
                result += l_1053.s7;
                result += l_1053.s6;
                result += l_1053.s5;
                result += l_1053.s4;
                result += l_1053.s3;
                result += l_1053.s2;
                result += l_1053.s1;
                result += l_1053.s0;
                int l_1054_i0, l_1054_i1, l_1054_i2;
                for (l_1054_i0 = 0; l_1054_i0 < 8; l_1054_i0++) {
                    for (l_1054_i1 = 0; l_1054_i1 < 7; l_1054_i1++) {
                        for (l_1054_i2 = 0; l_1054_i2 < 4; l_1054_i2++) {
                            result += l_1054[l_1054_i0][l_1054_i1][l_1054_i2];
                        }
                    }
                }
                result += l_1055;
                result += l_1056.w;
                result += l_1056.z;
                result += l_1056.y;
                result += l_1056.x;
                result += l_1057;
                atomic_add(&p_1371->l_special_values[3], result);
            }
            else
            { /* block id: 507 */
                (1 + 1);
            }
            for (l_923 = 0; (l_923 == 3); l_923 = safe_add_func_int8_t_s_s(l_923, 4))
            { /* block id: 512 */
                int32_t l_1087 = 6L;
                int32_t l_1088 = 0x69985FBFL;
                for (p_1371->g_140 = 0; (p_1371->g_140 > 29); p_1371->g_140 = safe_add_func_uint32_t_u_u(p_1371->g_140, 1))
                { /* block id: 515 */
                    VECTOR(int64_t, 4) l_1090 = (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L));
                    int32_t l_1091 = 0x413D41A2L;
                    uint32_t l_1092 = 0x98DE22C5L;
                    int i;
                    for (l_924 = 0; (l_924 > 42); ++l_924)
                    { /* block id: 518 */
                        int32_t *l_1083[7][7][5] = {{{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0}},{{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0}},{{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0}},{{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0}},{{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0}},{{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0}},{{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0},{&p_1371->g_2[0][0][5],(void*)0,(void*)0,&p_1371->g_2[0][0][5],(void*)0}}};
                        int i, j, k;
                        ++l_1092;
                        return l_1084[0][6];
                    }
                }
            }
            if ((atomic_inc(&p_1371->l_atomic_input[40]) == 6))
            { /* block id: 525 */
                uint64_t l_1095 = 0UL;
                int8_t l_1096[2][2];
                uint32_t l_1097 = 0x1B60E20EL;
                uint64_t l_1098 = 7UL;
                int16_t l_1099[7] = {(-5L),0x3F9AL,(-5L),(-5L),0x3F9AL,(-5L),(-5L)};
                int32_t *l_1153 = (void*)0;
                int64_t l_1154 = 0x39024FBDFAB0A9BAL;
                uint32_t l_1155 = 0xE39507FAL;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1096[i][j] = 0x5BL;
                }
                l_1098 &= (l_1095 , (l_1097 = l_1096[1][0]));
                if ((GROUP_DIVERGE(2, 1) , l_1099[3]))
                { /* block id: 528 */
                    int32_t l_1100 = 0x3D3F9796L;
                    int32_t l_1115 = (-10L);
                    int16_t l_1116 = 0x58A6L;
                    VECTOR(int16_t, 16) l_1117 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 1L), 1L), 1L, 0L, 1L, (VECTOR(int16_t, 2))(0L, 1L), (VECTOR(int16_t, 2))(0L, 1L), 0L, 1L, 0L, 1L);
                    VECTOR(int16_t, 2) l_1118 = (VECTOR(int16_t, 2))(0x5611L, 0x3DD4L);
                    VECTOR(int16_t, 8) l_1119 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x4912L), 0x4912L), 0x4912L, 1L, 0x4912L);
                    VECTOR(int16_t, 2) l_1120 = (VECTOR(int16_t, 2))(0x32ADL, 0x6AB3L);
                    int16_t l_1121 = (-5L);
                    VECTOR(int16_t, 8) l_1122 = (VECTOR(int16_t, 8))(6L, (VECTOR(int16_t, 4))(6L, (VECTOR(int16_t, 2))(6L, 0x1E0FL), 0x1E0FL), 0x1E0FL, 6L, 0x1E0FL);
                    VECTOR(int16_t, 8) l_1123 = (VECTOR(int16_t, 8))(0x00BEL, (VECTOR(int16_t, 4))(0x00BEL, (VECTOR(int16_t, 2))(0x00BEL, 0x3901L), 0x3901L), 0x3901L, 0x00BEL, 0x3901L);
                    VECTOR(int16_t, 16) l_1124 = (VECTOR(int16_t, 16))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x1DE0L), 0x1DE0L), 0x1DE0L, 2L, 0x1DE0L, (VECTOR(int16_t, 2))(2L, 0x1DE0L), (VECTOR(int16_t, 2))(2L, 0x1DE0L), 2L, 0x1DE0L, 2L, 0x1DE0L);
                    VECTOR(int16_t, 16) l_1125 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x25F3L), 0x25F3L), 0x25F3L, 1L, 0x25F3L, (VECTOR(int16_t, 2))(1L, 0x25F3L), (VECTOR(int16_t, 2))(1L, 0x25F3L), 1L, 0x25F3L, 1L, 0x25F3L);
                    VECTOR(int16_t, 16) l_1126 = (VECTOR(int16_t, 16))(0x045BL, (VECTOR(int16_t, 4))(0x045BL, (VECTOR(int16_t, 2))(0x045BL, 0x2E22L), 0x2E22L), 0x2E22L, 0x045BL, 0x2E22L, (VECTOR(int16_t, 2))(0x045BL, 0x2E22L), (VECTOR(int16_t, 2))(0x045BL, 0x2E22L), 0x045BL, 0x2E22L, 0x045BL, 0x2E22L);
                    VECTOR(int16_t, 8) l_1127 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L), 0L, (-1L), 0L);
                    VECTOR(int8_t, 2) l_1128 = (VECTOR(int8_t, 2))((-1L), 5L);
                    VECTOR(int16_t, 8) l_1129 = (VECTOR(int16_t, 8))(0x64ABL, (VECTOR(int16_t, 4))(0x64ABL, (VECTOR(int16_t, 2))(0x64ABL, 0x29D4L), 0x29D4L), 0x29D4L, 0x64ABL, 0x29D4L);
                    VECTOR(int16_t, 4) l_1130 = (VECTOR(int16_t, 4))(0x227DL, (VECTOR(int16_t, 2))(0x227DL, 0x358CL), 0x358CL);
                    VECTOR(int16_t, 4) l_1131 = (VECTOR(int16_t, 4))(4L, (VECTOR(int16_t, 2))(4L, 1L), 1L);
                    VECTOR(int16_t, 16) l_1132 = (VECTOR(int16_t, 16))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), (-1L)), (-1L)), (-1L), (-7L), (-1L), (VECTOR(int16_t, 2))((-7L), (-1L)), (VECTOR(int16_t, 2))((-7L), (-1L)), (-7L), (-1L), (-7L), (-1L));
                    VECTOR(int16_t, 4) l_1133 = (VECTOR(int16_t, 4))(0x3BBAL, (VECTOR(int16_t, 2))(0x3BBAL, 0x3308L), 0x3308L);
                    VECTOR(int16_t, 2) l_1134 = (VECTOR(int16_t, 2))(0x7DA4L, 0x3468L);
                    VECTOR(int16_t, 8) l_1135 = (VECTOR(int16_t, 8))(0x1161L, (VECTOR(int16_t, 4))(0x1161L, (VECTOR(int16_t, 2))(0x1161L, 7L), 7L), 7L, 0x1161L, 7L);
                    uint16_t l_1136 = 1UL;
                    VECTOR(int8_t, 2) l_1137 = (VECTOR(int8_t, 2))(0x34L, 0x33L);
                    VECTOR(uint8_t, 8) l_1138 = (VECTOR(uint8_t, 8))(1UL, (VECTOR(uint8_t, 4))(1UL, (VECTOR(uint8_t, 2))(1UL, 2UL), 2UL), 2UL, 1UL, 2UL);
                    int8_t l_1139 = 3L;
                    int8_t l_1140 = 1L;
                    VECTOR(int16_t, 2) l_1141 = (VECTOR(int16_t, 2))((-1L), 0x57B1L);
                    VECTOR(int16_t, 2) l_1142 = (VECTOR(int16_t, 2))(0x6D3CL, (-2L));
                    VECTOR(int16_t, 8) l_1143 = (VECTOR(int16_t, 8))(0x2868L, (VECTOR(int16_t, 4))(0x2868L, (VECTOR(int16_t, 2))(0x2868L, 9L), 9L), 9L, 0x2868L, 9L);
                    VECTOR(int16_t, 8) l_1144 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, (-1L)), (-1L)), (-1L), 1L, (-1L));
                    VECTOR(int16_t, 2) l_1145 = (VECTOR(int16_t, 2))(4L, 0x4027L);
                    int64_t l_1146 = 0x08A59B44D8501FE2L;
                    uint8_t l_1147 = 0xE8L;
                    int32_t *l_1148 = &l_1100;
                    int32_t *l_1149 = &l_1100;
                    int i;
                    for (l_1100 = (-29); (l_1100 >= 9); l_1100 = safe_add_func_int8_t_s_s(l_1100, 8))
                    { /* block id: 531 */
                        int32_t l_1103 = (-1L);
                        int16_t l_1104 = 0x1846L;
                        uint16_t l_1105 = 1UL;
                        union U0 l_1108 = {1UL};
                        uint64_t l_1109 = 18446744073709551613UL;
                        uint16_t l_1110 = 1UL;
                        uint32_t l_1111 = 3UL;
                        uint32_t l_1114 = 0x78929207L;
                        l_1105--;
                        l_1110 = ((l_1097 = (l_1108 , GROUP_DIVERGE(2, 1))) , l_1109);
                        ++l_1111;
                        l_1103 ^= l_1114;
                    }
                    l_1149 = (((VECTOR(int16_t, 16))(l_1115, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(max(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x3157L, 0x0B7AL)), (l_1116 , ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))((-4L), 0x02A0L)).xxyxxxyyyxxxxyyy)).sa782)).zzwxyyzwyzyzyzxz)))).se), ((VECTOR(int16_t, 2))((-3L), 0x528CL)), (-5L), 2L, 5L)).s0622657350136461)).s8b, ((VECTOR(int16_t, 4))(l_1117.s39b3)).odd))).xyyxxyyyyxyxyyxx, ((VECTOR(int16_t, 4))(0L, 0x7B8CL, 0x60E8L, (-10L))).wxwzwwyzwwwwyxwx, ((VECTOR(int16_t, 8))(sub_sat(((VECTOR(int16_t, 2))(l_1118.yx)).xxxyxyyy, ((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 2))(1L, 0x5E46L)).yyyyyyxy, ((VECTOR(int16_t, 8))(l_1119.s34362120)))))))).s2334266643376710))).s3761, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_1120.xyxy)).odd)).yyyy, (int16_t)l_1121))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 2))(0L, 0x7D12L)).xyxx, ((VECTOR(int16_t, 8))(l_1122.s30003000)).odd))).lo)), 0x70D0L, 0x0997L)).s50, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 8))(l_1123.s47233426)).hi, ((VECTOR(int16_t, 16))(clz(((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 4))(l_1124.s8866)).ywzwzzyw, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))((-10L), 0x1C3AL)), ((VECTOR(int16_t, 2))(l_1125.sc3)).even, (-1L), ((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 4))(l_1126.s1d1b)).xwzywwyz, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(l_1127.s06177746))))))))).s57, (int16_t)l_1128.y))), (-3L), 7L)).s21)), ((VECTOR(int16_t, 2))(l_1129.s76))))), 1L, 0x7376L)).wzzxzwxy))))).s4135240712443000))).sf179))).wxzwyzyx)).s42))).yyxy))))), 0L, ((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(l_1130.wwzx)).wxzxyyxw, ((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 4))(l_1131.zzzw)).even, ((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 16))(l_1132.s12b1459b43cddecc)), ((VECTOR(int16_t, 2))(l_1133.yw)).yyyyyyyyyxxyyyyx))).s8f))).xxyxyyxxxyxyyyyy, ((VECTOR(int16_t, 4))(l_1134.yxyy)).yyxzzxzxxxxxzxyy, ((VECTOR(int16_t, 2))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_1135.s32453352)).s60)), 0x0A8AL, l_1136, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(upsample(((VECTOR(int8_t, 4))(l_1137.xxyy)), ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 16))(min(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(l_1138.s5161640227105011)).s9cb2)), 0x08L, 1UL, 0xF8L, 0xBDL)))).s3264724655110104, (uint8_t)l_1139))).odd)).even))).lo)), 0x3776L, 1L)).s63, ((VECTOR(int16_t, 16))(1L, ((VECTOR(int16_t, 8))(0x66F9L, l_1140, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_1141.xx)).lo, 0x2684L, 7L, 0x2867L)).z, ((VECTOR(int16_t, 2))(0x1AA8L, 0x3C63L)), ((VECTOR(int16_t, 2))(l_1142.yx)), 0x42C5L)), ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(l_1143.s02)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(mad_sat(((VECTOR(int16_t, 4))(l_1144.s0433)).ywzyxyzzzzzwwyxy, ((VECTOR(int16_t, 16))(l_1145.yxyxxyyxyyxxxxxx)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(0x15A6L, 0x24EFL)), (-1L), 1L, ((VECTOR(int16_t, 4))(6L)))).s7646156247040357))).lo)).s51, ((VECTOR(int16_t, 2))(0x5AFAL))))), ((VECTOR(int16_t, 2))(0x4EA7L)), l_1146, 1L, (-7L))).s1e))).xyxxxyxyxyyyxxxx))).even, ((VECTOR(int16_t, 8))(0x0FE0L))))).odd)).yyyzxxyywyxywyzz)).s7df7, ((VECTOR(int16_t, 4))(0x6C5FL))))), 0x1F63L, l_1147, 0x354FL, ((VECTOR(int16_t, 2))(0x049FL)), 0x375FL)).s2 , l_1148);
                }
                else
                { /* block id: 539 */
                    int32_t l_1150 = 0L;
                    uint8_t l_1151[4][2] = {{0x68L,0x68L},{0x68L,0x68L},{0x68L,0x68L},{0x68L,0x68L}};
                    uint64_t l_1152[3][6][3] = {{{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL},{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL},{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL},{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL},{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL},{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL}},{{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL},{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL},{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL},{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL},{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL},{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL}},{{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL},{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL},{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL},{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL},{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL},{0xEF6429E98E50D5E4L,0xEF6429E98E50D5E4L,0UL}}};
                    int i, j, k;
                    l_1152[1][4][1] = ((l_1150 = 6L) , l_1151[3][1]);
                }
                l_1153 = (void*)0;
                l_1155++;
                unsigned int result = 0;
                result += l_1095;
                int l_1096_i0, l_1096_i1;
                for (l_1096_i0 = 0; l_1096_i0 < 2; l_1096_i0++) {
                    for (l_1096_i1 = 0; l_1096_i1 < 2; l_1096_i1++) {
                        result += l_1096[l_1096_i0][l_1096_i1];
                    }
                }
                result += l_1097;
                result += l_1098;
                int l_1099_i0;
                for (l_1099_i0 = 0; l_1099_i0 < 7; l_1099_i0++) {
                    result += l_1099[l_1099_i0];
                }
                result += l_1154;
                result += l_1155;
                atomic_add(&p_1371->l_special_values[40], result);
            }
            else
            { /* block id: 545 */
                (1 + 1);
            }
        }
        if ((atomic_inc(&p_1371->l_atomic_input[7]) == 8))
        { /* block id: 550 */
            VECTOR(uint8_t, 16) l_1158 = (VECTOR(uint8_t, 16))(0x31L, (VECTOR(uint8_t, 4))(0x31L, (VECTOR(uint8_t, 2))(0x31L, 0xCBL), 0xCBL), 0xCBL, 0x31L, 0xCBL, (VECTOR(uint8_t, 2))(0x31L, 0xCBL), (VECTOR(uint8_t, 2))(0x31L, 0xCBL), 0x31L, 0xCBL, 0x31L, 0xCBL);
            uint8_t l_1159 = 250UL;
            int64_t l_1252 = (-8L);
            int i;
            if (((l_1158.sd = 0x5FBF96D7L) , l_1159))
            { /* block id: 552 */
                uint32_t l_1160 = 0xE85962FEL;
                union U0 l_1164 = {0UL};
                union U0 *l_1163 = &l_1164;
                union U0 *l_1165 = (void*)0;
                uint32_t l_1194 = 0x02D5A21FL;
                --l_1160;
                l_1165 = l_1163;
                for (l_1160 = 15; (l_1160 == 25); ++l_1160)
                { /* block id: 557 */
                    uint16_t l_1168 = 65535UL;
                    int16_t l_1188 = (-1L);
                    int16_t l_1189 = 0x12D5L;
                    int32_t l_1190[1];
                    uint32_t l_1191 = 1UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1190[i] = 1L;
                    if (l_1168)
                    { /* block id: 558 */
                        int32_t l_1169 = 8L;
                        uint32_t l_1170 = 0x3AC0FD11L;
                        int32_t *l_1173 = &l_1169;
                        int8_t l_1174 = 0x7AL;
                        uint8_t l_1175 = 0xA1L;
                        uint64_t l_1176 = 0UL;
                        int32_t *l_1177[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1177[i] = (void*)0;
                        l_1170++;
                        l_1173 = l_1173;
                        l_1175 = (l_1174 = (-1L));
                        l_1177[0] = (l_1176 , (void*)0);
                    }
                    else
                    { /* block id: 564 */
                        int32_t l_1178 = 0x070E1508L;
                        uint8_t l_1179 = 8UL;
                        int32_t *l_1180 = &l_1178;
                        int32_t *l_1181[4];
                        int16_t l_1182 = 0x2F04L;
                        uint32_t l_1183 = 0xF6F542E3L;
                        VECTOR(int32_t, 16) l_1186 = (VECTOR(int32_t, 16))(0x606DDAEAL, (VECTOR(int32_t, 4))(0x606DDAEAL, (VECTOR(int32_t, 2))(0x606DDAEAL, 1L), 1L), 1L, 0x606DDAEAL, 1L, (VECTOR(int32_t, 2))(0x606DDAEAL, 1L), (VECTOR(int32_t, 2))(0x606DDAEAL, 1L), 0x606DDAEAL, 1L, 0x606DDAEAL, 1L);
                        uint8_t l_1187 = 1UL;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1181[i] = &l_1178;
                        l_1179 |= l_1178;
                        l_1181[0] = (l_1180 = l_1180);
                        l_1183++;
                        l_1187 ^= ((VECTOR(int32_t, 2))(l_1186.s19)).hi;
                    }
                    l_1191++;
                }
                l_1194 = (-8L);
            }
            else
            { /* block id: 574 */
                int32_t l_1195 = 0x6ADC5A31L;
                int16_t l_1196[5][9] = {{0x5A76L,0x5A76L,0x4A9CL,0x2EE9L,1L,1L,0L,0x3B2AL,0L},{0x5A76L,0x5A76L,0x4A9CL,0x2EE9L,1L,1L,0L,0x3B2AL,0L},{0x5A76L,0x5A76L,0x4A9CL,0x2EE9L,1L,1L,0L,0x3B2AL,0L},{0x5A76L,0x5A76L,0x4A9CL,0x2EE9L,1L,1L,0L,0x3B2AL,0L},{0x5A76L,0x5A76L,0x4A9CL,0x2EE9L,1L,1L,0L,0x3B2AL,0L}};
                VECTOR(int16_t, 4) l_1197 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 9L), 9L);
                VECTOR(int16_t, 16) l_1198 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int16_t, 2))(1L, 1L), (VECTOR(int16_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
                uint8_t l_1199 = 0x19L;
                VECTOR(int16_t, 16) l_1200 = (VECTOR(int16_t, 16))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), (-6L)), (-6L)), (-6L), (-10L), (-6L), (VECTOR(int16_t, 2))((-10L), (-6L)), (VECTOR(int16_t, 2))((-10L), (-6L)), (-10L), (-6L), (-10L), (-6L));
                VECTOR(int16_t, 4) l_1201 = (VECTOR(int16_t, 4))(7L, (VECTOR(int16_t, 2))(7L, 0x6959L), 0x6959L);
                VECTOR(int16_t, 16) l_1202 = (VECTOR(int16_t, 16))(0x6315L, (VECTOR(int16_t, 4))(0x6315L, (VECTOR(int16_t, 2))(0x6315L, 0x0673L), 0x0673L), 0x0673L, 0x6315L, 0x0673L, (VECTOR(int16_t, 2))(0x6315L, 0x0673L), (VECTOR(int16_t, 2))(0x6315L, 0x0673L), 0x6315L, 0x0673L, 0x6315L, 0x0673L);
                VECTOR(int16_t, 2) l_1203 = (VECTOR(int16_t, 2))(0L, 0x6B05L);
                VECTOR(int16_t, 2) l_1204 = (VECTOR(int16_t, 2))(0x1B12L, 0L);
                VECTOR(int16_t, 2) l_1205 = (VECTOR(int16_t, 2))(0x18F9L, 1L);
                VECTOR(int16_t, 8) l_1206 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 5L), 5L), 5L, 0L, 5L);
                VECTOR(int16_t, 4) l_1207 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 0L), 0L);
                uint8_t l_1208 = 1UL;
                uint64_t l_1209 = 0xDC5DF27616883DA4L;
                VECTOR(int16_t, 2) l_1210 = (VECTOR(int16_t, 2))((-3L), 0L);
                VECTOR(int16_t, 4) l_1211 = (VECTOR(int16_t, 4))(0x674BL, (VECTOR(int16_t, 2))(0x674BL, 0x05D8L), 0x05D8L);
                VECTOR(int16_t, 2) l_1212 = (VECTOR(int16_t, 2))(0L, 0x0B4BL);
                int8_t l_1213 = 0x11L;
                uint32_t l_1214 = 0UL;
                int16_t l_1215 = 0x625FL;
                int16_t l_1216 = 0x4DAEL;
                uint32_t l_1217 = 0x8BDFABE3L;
                int64_t l_1244[4][3][10] = {{{0L,1L,7L,9L,2L,(-1L),0x7AE2C642EF79642DL,7L,0x23721D41E5C1EC3DL,0L},{0L,1L,7L,9L,2L,(-1L),0x7AE2C642EF79642DL,7L,0x23721D41E5C1EC3DL,0L},{0L,1L,7L,9L,2L,(-1L),0x7AE2C642EF79642DL,7L,0x23721D41E5C1EC3DL,0L}},{{0L,1L,7L,9L,2L,(-1L),0x7AE2C642EF79642DL,7L,0x23721D41E5C1EC3DL,0L},{0L,1L,7L,9L,2L,(-1L),0x7AE2C642EF79642DL,7L,0x23721D41E5C1EC3DL,0L},{0L,1L,7L,9L,2L,(-1L),0x7AE2C642EF79642DL,7L,0x23721D41E5C1EC3DL,0L}},{{0L,1L,7L,9L,2L,(-1L),0x7AE2C642EF79642DL,7L,0x23721D41E5C1EC3DL,0L},{0L,1L,7L,9L,2L,(-1L),0x7AE2C642EF79642DL,7L,0x23721D41E5C1EC3DL,0L},{0L,1L,7L,9L,2L,(-1L),0x7AE2C642EF79642DL,7L,0x23721D41E5C1EC3DL,0L}},{{0L,1L,7L,9L,2L,(-1L),0x7AE2C642EF79642DL,7L,0x23721D41E5C1EC3DL,0L},{0L,1L,7L,9L,2L,(-1L),0x7AE2C642EF79642DL,7L,0x23721D41E5C1EC3DL,0L},{0L,1L,7L,9L,2L,(-1L),0x7AE2C642EF79642DL,7L,0x23721D41E5C1EC3DL,0L}}};
                uint64_t l_1245 = 0x3CE8E9C95EE5A2C4L;
                int32_t **l_1246 = (void*)0;
                int32_t **l_1247 = (void*)0;
                int32_t *l_1249 = &l_1195;
                int32_t **l_1248 = &l_1249;
                int32_t l_1250 = 0x180A8A53L;
                uint32_t l_1251 = 0xC8DDF8E2L;
                int i, j, k;
                if (((l_1195 = 0x5603C1AAE2137068L) , (l_1217 = (l_1216 &= ((VECTOR(int32_t, 16))(hadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(0x7FCBDC4DL, 1L, 0x1D9CC371L, 0L)).y, l_1196[0][8], 0x588B431CL, ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 2))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 2))(0x55F0CD93L, 1L)), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(0x7CD6DD17L, 0x6B7F5E6CL))))))), ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(l_1197.zxzwwzwz)), ((VECTOR(int16_t, 4))(9L, (-5L), 0L, (-3L))).yxwyxwww, ((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(l_1198.sd82d)).yxwyyyxx, ((VECTOR(int16_t, 16))(0x2F7DL, ((VECTOR(int16_t, 8))(1L, l_1199, 8L, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(hadd(((VECTOR(int16_t, 8))(l_1200.s8ee8402f)).s4616311274552234, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_1201.zxxzywzy)).s2461732473527020))))).s1844)), 0x00F8L)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(l_1202.s27b6)))))), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_1203.yxxyyyyx)).s22)), 0x60F3L)).odd, ((VECTOR(int16_t, 16))(l_1204.xyyxyyyxxyxxxyxx)).lo))).s3241112676032774, (int16_t)(l_1200.sa = ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(l_1205.yy)), ((VECTOR(int16_t, 4))(hadd(((VECTOR(int16_t, 8))(l_1206.s76433533)).even, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(l_1207.zyxzwzxz)).s0034107746370103)).s2162))), 0x33ABL, 0x74CDL)).s5), (int16_t)(l_1202.s8 |= l_1208)))).even))).s6313371541534660, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(0x192AL, 0x764CL, (-3L), 1L)), l_1209, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_1210.yyyx)).xwxzxzxx)), ((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 8))(l_1211.xxzzzzxw)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x7042L, (-7L))).yyxy)).zwzxzzzw, ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_1212.xyxx)).x, l_1213, l_1214, 5L, 0x0EA3L, 0x449EL, ((VECTOR(int16_t, 4))(0x3205L)), l_1215, 8L, ((VECTOR(int16_t, 4))(1L)))).lo, ((VECTOR(int16_t, 8))(0x59BFL)))))))).s40, ((VECTOR(int16_t, 2))(0x415DL))))), 1L)).sc0))).yyxyyyxxyyyxxxyy)))).s9e))), 4L, 1L)).xyzyzywzyxzzyxxx))))).sba00, ((VECTOR(uint16_t, 4))(0x7DDBL))))).odd))), 0x7EB3C79DL, 0x5CBAE4A4L, 0x648839ABL)))).s2164475121353620, ((VECTOR(int32_t, 16))(0x53C00C8CL))))).sf))))
                { /* block id: 580 */
                    int32_t l_1218 = 8L;
                    uint8_t l_1230 = 255UL;
                    uint64_t l_1231 = 18446744073709551615UL;
                    if (l_1218)
                    { /* block id: 581 */
                        int32_t l_1219 = 0x72848E35L;
                        int16_t l_1220 = 0L;
                        uint16_t l_1221 = 0xA7CCL;
                        l_1221--;
                        l_1195 = 0x57FB666DL;
                    }
                    else
                    { /* block id: 584 */
                        VECTOR(int32_t, 16) l_1224 = (VECTOR(int32_t, 16))(0x5104D89EL, (VECTOR(int32_t, 4))(0x5104D89EL, (VECTOR(int32_t, 2))(0x5104D89EL, (-6L)), (-6L)), (-6L), 0x5104D89EL, (-6L), (VECTOR(int32_t, 2))(0x5104D89EL, (-6L)), (VECTOR(int32_t, 2))(0x5104D89EL, (-6L)), 0x5104D89EL, (-6L), 0x5104D89EL, (-6L));
                        uint32_t l_1225 = 5UL;
                        uint32_t l_1226[8][4] = {{4294967288UL,4294967289UL,4294967289UL,4294967288UL},{4294967288UL,4294967289UL,4294967289UL,4294967288UL},{4294967288UL,4294967289UL,4294967289UL,4294967288UL},{4294967288UL,4294967289UL,4294967289UL,4294967288UL},{4294967288UL,4294967289UL,4294967289UL,4294967288UL},{4294967288UL,4294967289UL,4294967289UL,4294967288UL},{4294967288UL,4294967289UL,4294967289UL,4294967288UL},{4294967288UL,4294967289UL,4294967289UL,4294967288UL}};
                        uint16_t l_1227 = 5UL;
                        int32_t *l_1228 = (void*)0;
                        int32_t *l_1229 = (void*)0;
                        int i, j;
                        l_1225 = ((VECTOR(int32_t, 4))(l_1224.s02a4)).x;
                        l_1227 = l_1226[7][2];
                        l_1229 = l_1228;
                    }
                    l_1195 = 0x7D67AABCL;
                    if ((l_1230 , (l_1231 , 6L)))
                    { /* block id: 590 */
                        uint64_t l_1232 = 1UL;
                        l_1232++;
                    }
                    else
                    { /* block id: 592 */
                        int32_t l_1235[3][10][3] = {{{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L}},{{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L}},{{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L},{0x0D8DB5D1L,(-1L),0x0D8DB5D1L}}};
                        int32_t l_1236 = 0x233DE82BL;
                        uint64_t l_1237 = 0xFC37F366C420DC35L;
                        int i, j, k;
                        --l_1237;
                    }
                }
                else
                { /* block id: 595 */
                    int32_t l_1240 = 0x40055AFAL;
                    for (l_1240 = 17; (l_1240 > (-18)); l_1240--)
                    { /* block id: 598 */
                        int32_t l_1243 = 0x20E19C0DL;
                        l_1195 &= l_1243;
                    }
                }
                l_1248 = ((l_1244[2][0][9] , 0xCA6C015FC0011621L) , (l_1247 = (l_1245 , (l_1246 = (void*)0))));
                l_1251 |= l_1250;
            }
            if ((l_1252 , 1L))
            { /* block id: 607 */
                VECTOR(int32_t, 4) l_1253 = (VECTOR(int32_t, 4))(0x1E7BC10DL, (VECTOR(int32_t, 2))(0x1E7BC10DL, 1L), 1L);
                int8_t l_1254 = 9L;
                VECTOR(int32_t, 16) l_1255 = (VECTOR(int32_t, 16))(0x2D5AB6F2L, (VECTOR(int32_t, 4))(0x2D5AB6F2L, (VECTOR(int32_t, 2))(0x2D5AB6F2L, 0x78B8F260L), 0x78B8F260L), 0x78B8F260L, 0x2D5AB6F2L, 0x78B8F260L, (VECTOR(int32_t, 2))(0x2D5AB6F2L, 0x78B8F260L), (VECTOR(int32_t, 2))(0x2D5AB6F2L, 0x78B8F260L), 0x2D5AB6F2L, 0x78B8F260L, 0x2D5AB6F2L, 0x78B8F260L);
                int32_t l_1256 = 1L;
                int32_t l_1257 = 0x2A719719L;
                int64_t l_1258 = (-2L);
                int i;
                l_1254 |= ((VECTOR(int32_t, 8))(l_1253.zwzwwzyy)).s0;
                l_1256 = ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(l_1255.s8f2a44d9)).s61)).hi;
                l_1258 ^= l_1257;
            }
            else
            { /* block id: 611 */
                int32_t l_1260 = 0x700BC058L;
                int32_t *l_1259 = &l_1260;
                int32_t *l_1281[9];
                int16_t l_1282[7];
                int32_t l_1283 = 0x5ABE6D70L;
                uint8_t l_1284 = 0x27L;
                int i;
                for (i = 0; i < 9; i++)
                    l_1281[i] = &l_1260;
                for (i = 0; i < 7; i++)
                    l_1282[i] = 0L;
                l_1259 = (void*)0;
                for (l_1260 = 0; (l_1260 != 20); l_1260 = safe_add_func_int8_t_s_s(l_1260, 2))
                { /* block id: 615 */
                    int32_t l_1263 = 0x5A67A8B0L;
                    int32_t l_1268 = 0x13AC9CDBL;
                    int32_t l_1269 = 0x052F617FL;
                    int64_t l_1270[7] = {0x6D6C2CD42A958E6FL,(-8L),0x6D6C2CD42A958E6FL,0x6D6C2CD42A958E6FL,(-8L),0x6D6C2CD42A958E6FL,0x6D6C2CD42A958E6FL};
                    uint32_t l_1271 = 0x735FCFB2L;
                    int32_t *l_1280 = &l_1263;
                    int i;
                    for (l_1263 = 0; (l_1263 > (-9)); l_1263 = safe_sub_func_uint64_t_u_u(l_1263, 8))
                    { /* block id: 618 */
                        int32_t l_1267 = 8L;
                        int32_t *l_1266 = &l_1267;
                        l_1266 = (l_1259 = (FAKE_DIVERGE(p_1371->group_2_offset, get_group_id(2), 10) , (void*)0));
                    }
                    l_1271--;
                    for (l_1270[6] = 0; (l_1270[6] > (-15)); l_1270[6] = safe_sub_func_int8_t_s_s(l_1270[6], 7))
                    { /* block id: 625 */
                        int32_t l_1276[8][10] = {{6L,6L,0x20C61CBFL,0x4660B4CCL,0x44844B46L,0x4660B4CCL,0x20C61CBFL,6L,6L,0x20C61CBFL},{6L,6L,0x20C61CBFL,0x4660B4CCL,0x44844B46L,0x4660B4CCL,0x20C61CBFL,6L,6L,0x20C61CBFL},{6L,6L,0x20C61CBFL,0x4660B4CCL,0x44844B46L,0x4660B4CCL,0x20C61CBFL,6L,6L,0x20C61CBFL},{6L,6L,0x20C61CBFL,0x4660B4CCL,0x44844B46L,0x4660B4CCL,0x20C61CBFL,6L,6L,0x20C61CBFL},{6L,6L,0x20C61CBFL,0x4660B4CCL,0x44844B46L,0x4660B4CCL,0x20C61CBFL,6L,6L,0x20C61CBFL},{6L,6L,0x20C61CBFL,0x4660B4CCL,0x44844B46L,0x4660B4CCL,0x20C61CBFL,6L,6L,0x20C61CBFL},{6L,6L,0x20C61CBFL,0x4660B4CCL,0x44844B46L,0x4660B4CCL,0x20C61CBFL,6L,6L,0x20C61CBFL},{6L,6L,0x20C61CBFL,0x4660B4CCL,0x44844B46L,0x4660B4CCL,0x20C61CBFL,6L,6L,0x20C61CBFL}};
                        uint64_t l_1277 = 1UL;
                        int i, j;
                        l_1263 = 0x29D365DDL;
                        l_1277--;
                    }
                    l_1259 = l_1280;
                }
                l_1281[6] = (void*)0;
                l_1284 |= (l_1283 = l_1282[2]);
            }
            unsigned int result = 0;
            result += l_1158.sf;
            result += l_1158.se;
            result += l_1158.sd;
            result += l_1158.sc;
            result += l_1158.sb;
            result += l_1158.sa;
            result += l_1158.s9;
            result += l_1158.s8;
            result += l_1158.s7;
            result += l_1158.s6;
            result += l_1158.s5;
            result += l_1158.s4;
            result += l_1158.s3;
            result += l_1158.s2;
            result += l_1158.s1;
            result += l_1158.s0;
            result += l_1159;
            result += l_1252;
            atomic_add(&p_1371->l_special_values[7], result);
        }
        else
        { /* block id: 635 */
            (1 + 1);
        }
    }
    l_1288[4] ^= ((*p_1371->g_96) = (p_39 , (l_779.y &= (!p_39))));
    return p_1371->g_653.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_1371->g_280 p_1371->g_96 p_1371->g_91 p_1371->g_61 p_1371->g_2 p_1371->g_266 p_1371->g_143 p_1371->g_256 p_1371->g_137 p_1371->g_89 p_1371->g_103 p_1371->g_555 p_1371->g_181 p_1371->g_154 p_1371->g_566 p_1371->g_140 permutations p_1371->g_588 p_1371->g_576 p_1371->g_258 p_1371->g_145 p_1371->g_648 p_1371->g_649 p_1371->l_comm_values p_1371->g_653 p_1371->g_666 p_1371->g_692 p_1371->g_701 p_1371->g_761 p_1371->g_151
 * writes: p_1371->g_137 p_1371->g_89 p_1371->g_61 p_1371->g_91 p_1371->g_145 p_1371->g_133 p_1371->g_180 p_1371->g_140 p_1371->l_comm_values p_1371->g_666 p_1371->g_692 p_1371->g_701 p_1371->g_708 p_1371->g_103 p_1371->g_576.f0 p_1371->g_142 p_1371->g_242 p_1371->g_767
 */
uint32_t  func_42(uint16_t  p_43, int32_t  p_44, uint32_t  p_45, uint8_t  p_46, int8_t  p_47, struct S2 * p_1371)
{ /* block id: 105 */
    int64_t l_286 = 0x32511A3D457BA7EDL;
    int32_t l_293 = 0x2C9570B0L;
    int16_t l_294 = (-2L);
    uint32_t **l_549 = &p_1371->g_106[0][0];
    uint32_t **l_551 = &p_1371->g_106[5][0];
    int32_t *l_558 = &p_1371->g_61[1];
    uint16_t *l_564 = &p_1371->g_142;
    union U0 *l_578 = &p_1371->g_576[7][3][2];
    VECTOR(int16_t, 16) l_579 = (VECTOR(int16_t, 16))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x6DBAL), 0x6DBAL), 0x6DBAL, 8L, 0x6DBAL, (VECTOR(int16_t, 2))(8L, 0x6DBAL), (VECTOR(int16_t, 2))(8L, 0x6DBAL), 8L, 0x6DBAL, 8L, 0x6DBAL);
    VECTOR(uint16_t, 8) l_587 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0x2719L), 0x2719L), 0x2719L, 65535UL, 0x2719L);
    int32_t **l_594 = &p_1371->g_103;
    int32_t **l_595 = &p_1371->g_137;
    uint8_t l_610[7][3][1] = {{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL}}};
    int8_t l_664 = (-1L);
    int32_t l_665[3][9] = {{(-7L),0x1D4A5CF9L,0x261958D7L,0x1D4A5CF9L,(-7L),(-7L),0x1D4A5CF9L,0x261958D7L,0x1D4A5CF9L},{(-7L),0x1D4A5CF9L,0x261958D7L,0x1D4A5CF9L,(-7L),(-7L),0x1D4A5CF9L,0x261958D7L,0x1D4A5CF9L},{(-7L),0x1D4A5CF9L,0x261958D7L,0x1D4A5CF9L,(-7L),(-7L),0x1D4A5CF9L,0x261958D7L,0x1D4A5CF9L}};
    int32_t *l_686 = &p_1371->g_61[0];
    int64_t **l_704 = (void*)0;
    int i, j, k;
    for (p_44 = 0; (p_44 > (-7)); p_44 = safe_sub_func_int32_t_s_s(p_44, 1))
    { /* block id: 108 */
        (*p_1371->g_280) = &p_44;
        if ((*p_1371->g_96))
            continue;
    }
    for (p_45 = 21; (p_45 != 43); p_45 = safe_add_func_uint32_t_u_u(p_45, 3))
    { /* block id: 114 */
        uint32_t l_289 = 4294967295UL;
        int32_t l_290 = 1L;
        int32_t **l_291 = (void*)0;
        int32_t *l_292 = (void*)0;
        l_292 = ((((p_1371->g_61[0] , (safe_unary_minus_func_int8_t_s((safe_mod_func_int64_t_s_s(((p_1371->g_2[0][0][5] | ((l_286 != ((p_1371->g_266.x , ((safe_add_func_int64_t_s_s((p_44 | ((l_289 , (l_290 = (p_43 >= p_46))) >= p_1371->g_143)), p_43)) != 0xA11238A77FD89CBBL)) ^ p_44)) ^ p_1371->g_256.w)) ^ 1UL), 0x52F02E2B7761D549L))))) ^ l_286) & 0xA41E4164L) , &l_290);
        l_293 ^= (**p_1371->g_280);
    }
    if (l_294)
    { /* block id: 119 */
        uint32_t **l_550[8];
        int8_t l_554 = (-1L);
        union U0 *l_575 = &p_1371->g_576[4][4][0];
        int64_t *l_591 = &l_286;
        int i;
        for (i = 0; i < 8; i++)
            l_550[i] = &p_1371->g_106[5][0];
        (*p_1371->g_137) = (**p_1371->g_280);
        if ((atomic_inc(&p_1371->g_atomic_input[63 * get_linear_group_id() + 48]) == 7))
        { /* block id: 122 */
            VECTOR(int16_t, 16) l_295 = (VECTOR(int16_t, 16))(0x5755L, (VECTOR(int16_t, 4))(0x5755L, (VECTOR(int16_t, 2))(0x5755L, 0x62D1L), 0x62D1L), 0x62D1L, 0x5755L, 0x62D1L, (VECTOR(int16_t, 2))(0x5755L, 0x62D1L), (VECTOR(int16_t, 2))(0x5755L, 0x62D1L), 0x5755L, 0x62D1L, 0x5755L, 0x62D1L);
            int8_t l_296 = 1L;
            union U1 l_297 = {0L};
            VECTOR(int32_t, 16) l_298 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 1L), 1L), 1L, 1L, 1L, (VECTOR(int32_t, 2))(1L, 1L), (VECTOR(int32_t, 2))(1L, 1L), 1L, 1L, 1L, 1L);
            VECTOR(int32_t, 4) l_299 = (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, (-2L)), (-2L));
            int i;
            if ((l_295.s8 , (((l_296 , l_297) , l_298.sb) , ((VECTOR(int32_t, 16))(l_299.wxyzzywywwwzwxzx)).s7)))
            { /* block id: 123 */
                VECTOR(int8_t, 4) l_300 = (VECTOR(int8_t, 4))(0x1FL, (VECTOR(int8_t, 2))(0x1FL, 0x77L), 0x77L);
                VECTOR(int32_t, 2) l_301 = (VECTOR(int32_t, 2))(1L, 0L);
                VECTOR(uint8_t, 8) l_302 = (VECTOR(uint8_t, 8))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 254UL), 254UL), 254UL, 0UL, 254UL);
                VECTOR(uint8_t, 2) l_303 = (VECTOR(uint8_t, 2))(0xA9L, 0xABL);
                int16_t l_304 = 0L;
                int16_t l_305 = 0x44D5L;
                VECTOR(uint8_t, 2) l_306 = (VECTOR(uint8_t, 2))(0xAAL, 0x38L);
                VECTOR(uint8_t, 8) l_307 = (VECTOR(uint8_t, 8))(0x8BL, (VECTOR(uint8_t, 4))(0x8BL, (VECTOR(uint8_t, 2))(0x8BL, 0UL), 0UL), 0UL, 0x8BL, 0UL);
                int64_t l_308 = 3L;
                VECTOR(uint16_t, 16) l_309 = (VECTOR(uint16_t, 16))(65529UL, (VECTOR(uint16_t, 4))(65529UL, (VECTOR(uint16_t, 2))(65529UL, 0xD85DL), 0xD85DL), 0xD85DL, 65529UL, 0xD85DL, (VECTOR(uint16_t, 2))(65529UL, 0xD85DL), (VECTOR(uint16_t, 2))(65529UL, 0xD85DL), 65529UL, 0xD85DL, 65529UL, 0xD85DL);
                uint32_t l_310 = 4294967292UL;
                uint32_t l_311[8][3][1] = {{{0x19806A1CL},{0x19806A1CL},{0x19806A1CL}},{{0x19806A1CL},{0x19806A1CL},{0x19806A1CL}},{{0x19806A1CL},{0x19806A1CL},{0x19806A1CL}},{{0x19806A1CL},{0x19806A1CL},{0x19806A1CL}},{{0x19806A1CL},{0x19806A1CL},{0x19806A1CL}},{{0x19806A1CL},{0x19806A1CL},{0x19806A1CL}},{{0x19806A1CL},{0x19806A1CL},{0x19806A1CL}},{{0x19806A1CL},{0x19806A1CL},{0x19806A1CL}}};
                VECTOR(int16_t, 4) l_312 = (VECTOR(int16_t, 4))(0x5BB5L, (VECTOR(int16_t, 2))(0x5BB5L, 1L), 1L);
                VECTOR(int16_t, 16) l_313 = (VECTOR(int16_t, 16))(0x60D9L, (VECTOR(int16_t, 4))(0x60D9L, (VECTOR(int16_t, 2))(0x60D9L, (-10L)), (-10L)), (-10L), 0x60D9L, (-10L), (VECTOR(int16_t, 2))(0x60D9L, (-10L)), (VECTOR(int16_t, 2))(0x60D9L, (-10L)), 0x60D9L, (-10L), 0x60D9L, (-10L));
                VECTOR(int16_t, 16) l_314 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x21CCL), 0x21CCL), 0x21CCL, 0L, 0x21CCL, (VECTOR(int16_t, 2))(0L, 0x21CCL), (VECTOR(int16_t, 2))(0L, 0x21CCL), 0L, 0x21CCL, 0L, 0x21CCL);
                VECTOR(int16_t, 16) l_315 = (VECTOR(int16_t, 16))(3L, (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 1L), 1L), 1L, 3L, 1L, (VECTOR(int16_t, 2))(3L, 1L), (VECTOR(int16_t, 2))(3L, 1L), 3L, 1L, 3L, 1L);
                int16_t l_316 = 0L;
                uint8_t l_317 = 4UL;
                int32_t l_319 = (-9L);
                int32_t *l_318 = &l_319;
                int32_t *l_320 = &l_319;
                int32_t *l_321 = &l_319;
                uint32_t l_322 = 2UL;
                int32_t l_323[4] = {0L,0L,0L,0L};
                uint16_t l_324 = 0UL;
                uint64_t l_325[7][10] = {{0xF4AAAAE3DEFE9BEBL,0x55D399895C3FAB13L,0x55D399895C3FAB13L,0xF4AAAAE3DEFE9BEBL,7UL,0x06C9B885049A6010L,18446744073709551614UL,5UL,0x07F7611BAE3C5E76L,0x7E9A953F14E1501EL},{0xF4AAAAE3DEFE9BEBL,0x55D399895C3FAB13L,0x55D399895C3FAB13L,0xF4AAAAE3DEFE9BEBL,7UL,0x06C9B885049A6010L,18446744073709551614UL,5UL,0x07F7611BAE3C5E76L,0x7E9A953F14E1501EL},{0xF4AAAAE3DEFE9BEBL,0x55D399895C3FAB13L,0x55D399895C3FAB13L,0xF4AAAAE3DEFE9BEBL,7UL,0x06C9B885049A6010L,18446744073709551614UL,5UL,0x07F7611BAE3C5E76L,0x7E9A953F14E1501EL},{0xF4AAAAE3DEFE9BEBL,0x55D399895C3FAB13L,0x55D399895C3FAB13L,0xF4AAAAE3DEFE9BEBL,7UL,0x06C9B885049A6010L,18446744073709551614UL,5UL,0x07F7611BAE3C5E76L,0x7E9A953F14E1501EL},{0xF4AAAAE3DEFE9BEBL,0x55D399895C3FAB13L,0x55D399895C3FAB13L,0xF4AAAAE3DEFE9BEBL,7UL,0x06C9B885049A6010L,18446744073709551614UL,5UL,0x07F7611BAE3C5E76L,0x7E9A953F14E1501EL},{0xF4AAAAE3DEFE9BEBL,0x55D399895C3FAB13L,0x55D399895C3FAB13L,0xF4AAAAE3DEFE9BEBL,7UL,0x06C9B885049A6010L,18446744073709551614UL,5UL,0x07F7611BAE3C5E76L,0x7E9A953F14E1501EL},{0xF4AAAAE3DEFE9BEBL,0x55D399895C3FAB13L,0x55D399895C3FAB13L,0xF4AAAAE3DEFE9BEBL,7UL,0x06C9B885049A6010L,18446744073709551614UL,5UL,0x07F7611BAE3C5E76L,0x7E9A953F14E1501EL}};
                int64_t l_326[4] = {(-3L),(-3L),(-3L),(-3L)};
                union U1 l_327 = {0x05C930D0L};
                int64_t l_328 = 0x3857A852831297B8L;
                int i, j, k;
                l_318 = (GROUP_DIVERGE(1, 1) , (((l_297.f0 = (((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_clamp_func(VECTOR(int32_t, 8),int32_t,((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(upsample(((VECTOR(int8_t, 4))(l_300.yzzy)).ywwwyzyz, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(hadd(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(l_301.x, ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 2))(l_302.s52)), 0x82L, 254UL)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(l_303.xyyx)))).odd)))), ((VECTOR(uint8_t, 4))((l_304 , 246UL), (l_305 = FAKE_DIVERGE(p_1371->group_0_offset, get_group_id(0), 10)), 2UL, 0x07L)), ((VECTOR(uint8_t, 2))(0x26L, 0x34L)), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 8))(l_306.xyyyxyxy)).s66)), 0x71L)))).s6b35, ((VECTOR(uint8_t, 2))(l_307.s44)).xyxy))).odd)).xyxxxxyx))).s46)).yxyy, ((VECTOR(int16_t, 4))(l_308, (l_295.s0 |= 1L), 0x19D7L, 1L))))), ((VECTOR(uint16_t, 16))(l_309.sf3e5404e3bb2d702)).s494b))).lo, ((VECTOR(int32_t, 8))(0x12F76AECL, 0L, 1L, ((VECTOR(int32_t, 2))(1L, 0x308C779DL)), (-7L), 0L, 0x1981EE30L)).s46))).yxxxxxxx, (int32_t)(l_310 , l_311[7][2][0]), (int32_t)((VECTOR(int32_t, 16))((((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 2))(l_312.yx)).xxxy, ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_313.s09754e80f6e0e1a0)))).sf9, ((VECTOR(int16_t, 8))(hadd(((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_314.s6d)), 0x42CCL, 0x15AEL)).lo, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0L, 0x395FL)).yyyx)).hi, ((VECTOR(int16_t, 4))(mad_sat(((VECTOR(int16_t, 4))(l_315.s5, 0L, 0x4DB4L, (-8L))), ((VECTOR(int16_t, 4))((-5L))), ((VECTOR(int16_t, 4))((-6L)))))).odd))).yyxxyxyx, ((VECTOR(int16_t, 8))(0L))))).s44, ((VECTOR(int16_t, 2))(0x5758L))))).xyyx))).xxzyxwzy)).s6 , l_316), ((VECTOR(int32_t, 4))(0x3C9B9288L)), 0x1882474FL, 3L, (-5L), ((VECTOR(int32_t, 2))(0x729E2051L)), 0x150F61D7L, ((VECTOR(int32_t, 4))(0L)), 0x6FD35347L)).sa))).hi)).yxyzwyxx)).s35, ((VECTOR(int32_t, 2))((-3L)))))).odd , 0L)) , l_317) , (void*)0));
                l_321 = l_320;
                l_325[0][9] = (l_324 = (l_299.x &= (l_322 , l_323[1])));
                if (((l_326[3] , (l_297 = (l_327 = l_327))) , l_328))
                { /* block id: 134 */
                    uint16_t l_329 = 0xAA78L;
                    VECTOR(int32_t, 4) l_338 = (VECTOR(int32_t, 4))(0x1FB0EF40L, (VECTOR(int32_t, 2))(0x1FB0EF40L, 0x7FDDE3FDL), 0x7FDDE3FDL);
                    int32_t *l_337 = (void*)0;
                    int i;
                    if (l_329)
                    { /* block id: 135 */
                        int32_t l_330 = 1L;
                        uint8_t l_331 = 0x13L;
                        uint16_t l_332 = 0x52EBL;
                        int32_t l_334 = (-2L);
                        int32_t *l_333[8] = {&l_334,&l_334,&l_334,&l_334,&l_334,&l_334,&l_334,&l_334};
                        int i;
                        (*l_321) &= l_330;
                        l_332 = (l_331 &= (-1L));
                        l_333[3] = l_333[3];
                    }
                    else
                    { /* block id: 140 */
                        uint8_t l_335 = 1UL;
                        int8_t l_336 = 6L;
                        l_336 = l_335;
                    }
                    l_337 = (void*)0;
                }
                else
                { /* block id: 144 */
                    union U1 l_339 = {0x21123302L};
                    uint64_t l_340 = 0x7FF8C50C6591D6EEL;
                    l_340 = (((VECTOR(uint32_t, 2))(0x7A82B4F5L, 0x98852E95L)).odd , (l_339 , ((l_297.f0 = 1L) , 0x2E337BEBL)));
                }
            }
            else
            { /* block id: 148 */
                VECTOR(int32_t, 2) l_341 = (VECTOR(int32_t, 2))(0L, 0x29AFF048L);
                int64_t l_384 = 0x2F4E37D576A412FBL;
                uint64_t l_385[9][3];
                uint32_t l_388[4][3] = {{0x0CADBE70L,0UL,0x0CADBE70L},{0x0CADBE70L,0UL,0x0CADBE70L},{0x0CADBE70L,0UL,0x0CADBE70L},{0x0CADBE70L,0UL,0x0CADBE70L}};
                VECTOR(int32_t, 16) l_429 = (VECTOR(int32_t, 16))(0x5A848384L, (VECTOR(int32_t, 4))(0x5A848384L, (VECTOR(int32_t, 2))(0x5A848384L, 0x362B389AL), 0x362B389AL), 0x362B389AL, 0x5A848384L, 0x362B389AL, (VECTOR(int32_t, 2))(0x5A848384L, 0x362B389AL), (VECTOR(int32_t, 2))(0x5A848384L, 0x362B389AL), 0x5A848384L, 0x362B389AL, 0x5A848384L, 0x362B389AL);
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_385[i][j] = 1UL;
                }
                if ((l_299.w = ((VECTOR(int32_t, 16))(l_341.xyyyxxxyyxyxxxxx)).s3))
                { /* block id: 150 */
                    int32_t l_342 = 0x3A2E0405L;
                    for (l_342 = (-5); (l_342 >= 20); l_342 = safe_add_func_uint16_t_u_u(l_342, 4))
                    { /* block id: 153 */
                        VECTOR(uint32_t, 2) l_345 = (VECTOR(uint32_t, 2))(4294967295UL, 0x8EEDA52DL);
                        uint16_t l_346 = 0x21DCL;
                        int8_t l_347 = 0x03L;
                        int16_t l_348 = 0x5612L;
                        uint16_t l_349 = 0UL;
                        int16_t l_350 = 0x06E3L;
                        int16_t l_351 = 8L;
                        int8_t l_352[1][6][4] = {{{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)},{(-6L),(-6L),(-6L),(-6L)}}};
                        uint32_t l_353 = 4294967295UL;
                        int i, j, k;
                        l_299.w &= (FAKE_DIVERGE(p_1371->global_0_offset, get_global_id(0), 10) , (l_346 = l_345.y));
                        l_350 |= (l_347 , (l_348 , l_349));
                        l_352[0][4][3] ^= l_351;
                        l_341.x |= l_353;
                    }
                }
                else
                { /* block id: 160 */
                    uint64_t l_354 = 18446744073709551609UL;
                    int8_t l_357 = 2L;
                    int8_t *l_356 = &l_357;
                    int8_t **l_355 = &l_356;
                    int8_t **l_358[4][7][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356}},{{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356}},{{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356}},{{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,(void*)0,(void*)0,&l_356,&l_356,&l_356,&l_356}}};
                    VECTOR(int16_t, 4) l_359 = (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x0419L), 0x0419L);
                    VECTOR(int16_t, 2) l_360 = (VECTOR(int16_t, 2))(0x5696L, 0x7D3FL);
                    VECTOR(int16_t, 4) l_361 = (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x3588L), 0x3588L);
                    uint64_t l_362 = 18446744073709551615UL;
                    uint32_t l_363 = 0x07F379FCL;
                    VECTOR(int16_t, 8) l_364 = (VECTOR(int16_t, 8))(0x34B9L, (VECTOR(int16_t, 4))(0x34B9L, (VECTOR(int16_t, 2))(0x34B9L, (-1L)), (-1L)), (-1L), 0x34B9L, (-1L));
                    VECTOR(int16_t, 16) l_365 = (VECTOR(int16_t, 16))(0x6DDEL, (VECTOR(int16_t, 4))(0x6DDEL, (VECTOR(int16_t, 2))(0x6DDEL, 0L), 0L), 0L, 0x6DDEL, 0L, (VECTOR(int16_t, 2))(0x6DDEL, 0L), (VECTOR(int16_t, 2))(0x6DDEL, 0L), 0x6DDEL, 0L, 0x6DDEL, 0L);
                    union U0 l_366 = {1UL};
                    union U0 l_367 = {0x27F60FD8L};
                    VECTOR(int16_t, 2) l_368 = (VECTOR(int16_t, 2))(0x6FE6L, 0x487FL);
                    uint16_t l_369 = 0xCCEFL;
                    uint32_t l_370 = 0x6FCB9AD3L;
                    uint32_t l_371[3];
                    int8_t l_372 = 0x23L;
                    uint32_t l_373[6] = {4294967292UL,4294967295UL,4294967292UL,4294967292UL,4294967295UL,4294967292UL};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_371[i] = 4294967295UL;
                    l_341.x = l_354;
                    l_358[1][2][2] = l_355;
                    if (((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(0x232EL, ((VECTOR(int16_t, 2))(0x67DBL, 0x4B4CL)), 0x1062L)), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(l_359.xwzx))))).wzzxwzzwyzwyzxyy)).even, ((VECTOR(int16_t, 2))(0L, 0x2508L)).yxyyyyyy))).even)), ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(l_360.yxyxxxxxxxyyyyyy)).s9b3e, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_361.xz)), l_362, (-10L), ((VECTOR(int16_t, 2))(0x687AL, 4L)), 0x05AAL, l_363, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(8L, 0x4466L)))), ((VECTOR(int16_t, 16))(0x27C8L, ((VECTOR(int16_t, 8))(l_364.s06607516)), (-8L), (l_360.x = (l_295.sc ^= ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x6B04L, 1L)).xyxxyyxxyxxxyyxx)).s3)), ((VECTOR(int16_t, 2))(l_365.sb5)), (l_295.s7 = (l_366 , (((l_367 , ((VECTOR(uint16_t, 4))(abs_diff(((VECTOR(int16_t, 2))(l_368.xy)).xyyy, ((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 2))(0L, 0x6FE1L)).xxxy, ((VECTOR(int16_t, 2))(7L, (-10L))).yyyx)))))).w) , ((l_369 , ((VECTOR(int32_t, 8))(l_370, (-6L), 1L, 0x0F7A6C1FL, 0x683BCC39L, 3L, 6L, 0x1439D96DL)).s2) , l_371[1])) , (l_297.f1 = (l_372 = 0x35B2L))))), 0x789CL, 0x0353L)).s7c))))), 0x6E1DL, ((VECTOR(int16_t, 4))(0x3631L)), 1L)).sde1a)))))), ((VECTOR(int16_t, 4))(9L)), l_373[1], ((VECTOR(int16_t, 2))(0x0B77L)), 0x3639L, 0x3AA4L, ((VECTOR(int16_t, 2))(0x38F9L)), 0x2E42L)), ((VECTOR(int16_t, 16))(7L))))), ((VECTOR(uint16_t, 16))(8UL))))).s687c, ((VECTOR(int32_t, 4))(0x70BD47A8L))))).w)
                    { /* block id: 168 */
                        int32_t l_375 = 9L;
                        int32_t *l_374 = &l_375;
                        l_374 = l_374;
                    }
                    else
                    { /* block id: 170 */
                        int32_t l_377 = 0x70FBA284L;
                        int32_t *l_376 = &l_377;
                        int16_t l_378[2];
                        int32_t l_379 = 0x58D03B18L;
                        int8_t l_380 = 1L;
                        uint16_t l_381 = 65533UL;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_378[i] = 0x796FL;
                        l_299.x = (-1L);
                        l_376 = (void*)0;
                        ++l_381;
                    }
                }
                l_385[4][2]++;
                if ((l_299.x = l_388[3][0]))
                { /* block id: 178 */
                    uint32_t l_389 = 4294967289UL;
                    uint32_t l_390 = 4UL;
                    uint64_t l_402[3][8] = {{18446744073709551612UL,0x066E8DCA194C6A28L,18446744073709551615UL,0x066E8DCA194C6A28L,18446744073709551612UL,18446744073709551612UL,0x066E8DCA194C6A28L,18446744073709551615UL},{18446744073709551612UL,0x066E8DCA194C6A28L,18446744073709551615UL,0x066E8DCA194C6A28L,18446744073709551612UL,18446744073709551612UL,0x066E8DCA194C6A28L,18446744073709551615UL},{18446744073709551612UL,0x066E8DCA194C6A28L,18446744073709551615UL,0x066E8DCA194C6A28L,18446744073709551612UL,18446744073709551612UL,0x066E8DCA194C6A28L,18446744073709551615UL}};
                    int i, j;
                    l_389 |= (-1L);
                    if (l_390)
                    { /* block id: 180 */
                        int16_t l_391 = 0L;
                        int32_t l_392 = 0L;
                        int8_t l_393 = 0x37L;
                        int32_t l_394 = 5L;
                        uint32_t l_395[4];
                        union U0 *l_398 = (void*)0;
                        union U0 l_400 = {0xC8EF328EL};
                        union U0 *l_399[10][1] = {{&l_400},{&l_400},{&l_400},{&l_400},{&l_400},{&l_400},{&l_400},{&l_400},{&l_400},{&l_400}};
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_395[i] = 0xBC09786FL;
                        l_395[2]--;
                        l_341.y = 0L;
                        l_399[8][0] = l_398;
                    }
                    else
                    { /* block id: 184 */
                        int32_t *l_401 = (void*)0;
                        l_401 = l_401;
                    }
                    l_341.x &= l_402[1][7];
                    for (l_390 = 20; (l_390 <= 24); l_390 = safe_add_func_uint32_t_u_u(l_390, 9))
                    { /* block id: 190 */
                        uint8_t l_405 = 251UL;
                        int32_t l_409 = 0L;
                        int32_t *l_408 = &l_409;
                        int32_t *l_410 = &l_409;
                        --l_405;
                        l_408 = (l_410 = l_408);
                    }
                }
                else
                { /* block id: 195 */
                    uint16_t l_411 = 0UL;
                    uint16_t l_412 = 0UL;
                    int64_t l_413 = (-8L);
                    l_412 = l_411;
                    if (l_413)
                    { /* block id: 197 */
                        int32_t l_414 = 0x04A1193FL;
                        uint8_t l_415 = 254UL;
                        uint32_t l_418 = 1UL;
                        VECTOR(uint32_t, 2) l_421 = (VECTOR(uint32_t, 2))(0xC1077556L, 0x9C1664A0L);
                        VECTOR(int8_t, 2) l_424 = (VECTOR(int8_t, 2))(0x59L, 1L);
                        VECTOR(int32_t, 2) l_425 = (VECTOR(int32_t, 2))(0L, 0x2BF87217L);
                        int i;
                        --l_415;
                        l_418--;
                        ++l_421.y;
                        l_341.x |= (((VECTOR(int8_t, 4))(l_424.xyxx)).y , ((VECTOR(int32_t, 2))(l_425.yy)).lo);
                    }
                    else
                    { /* block id: 202 */
                        VECTOR(int64_t, 8) l_426 = (VECTOR(int64_t, 8))(0x0135A82BCB715143L, (VECTOR(int64_t, 4))(0x0135A82BCB715143L, (VECTOR(int64_t, 2))(0x0135A82BCB715143L, 0x7B46A419F96D5C7CL), 0x7B46A419F96D5C7CL), 0x7B46A419F96D5C7CL, 0x0135A82BCB715143L, 0x7B46A419F96D5C7CL);
                        uint8_t l_427 = 0UL;
                        uint16_t l_428 = 0x8D9BL;
                        int i;
                        l_341.y = (((VECTOR(int64_t, 8))(max(((VECTOR(int64_t, 2))(0L, (-1L))).yyyyxxyy, ((VECTOR(int64_t, 2))(((VECTOR(int64_t, 4))(l_426.s1333)).odd)).yxyxyyxy))).s1 , (l_427 , (l_428 , 9L)));
                    }
                }
                l_299.w ^= ((VECTOR(int32_t, 8))(l_429.s1fc0179d)).s2;
            }
            for (l_298.s0 = 0; (l_298.s0 <= 27); l_298.s0 = safe_add_func_int32_t_s_s(l_298.s0, 4))
            { /* block id: 210 */
                VECTOR(int16_t, 8) l_432 = (VECTOR(int16_t, 8))(0x1F08L, (VECTOR(int16_t, 4))(0x1F08L, (VECTOR(int16_t, 2))(0x1F08L, 1L), 1L), 1L, 0x1F08L, 1L);
                VECTOR(uint16_t, 8) l_433 = (VECTOR(uint16_t, 8))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0UL), 0UL), 0UL, 65531UL, 0UL);
                VECTOR(uint8_t, 8) l_434 = (VECTOR(uint8_t, 8))(0x19L, (VECTOR(uint8_t, 4))(0x19L, (VECTOR(uint8_t, 2))(0x19L, 1UL), 1UL), 1UL, 0x19L, 1UL);
                int16_t l_435 = 0x3AF4L;
                uint16_t l_436 = 0x4E63L;
                int64_t l_437 = 3L;
                int32_t l_438 = 0x662544B0L;
                VECTOR(uint8_t, 2) l_439 = (VECTOR(uint8_t, 2))(255UL, 0UL);
                VECTOR(uint8_t, 8) l_440 = (VECTOR(uint8_t, 8))(247UL, (VECTOR(uint8_t, 4))(247UL, (VECTOR(uint8_t, 2))(247UL, 0xFDL), 0xFDL), 0xFDL, 247UL, 0xFDL);
                VECTOR(uint8_t, 16) l_441 = (VECTOR(uint8_t, 16))(0UL, (VECTOR(uint8_t, 4))(0UL, (VECTOR(uint8_t, 2))(0UL, 7UL), 7UL), 7UL, 0UL, 7UL, (VECTOR(uint8_t, 2))(0UL, 7UL), (VECTOR(uint8_t, 2))(0UL, 7UL), 0UL, 7UL, 0UL, 7UL);
                int8_t l_442 = (-6L);
                uint8_t l_443[2];
                int16_t l_444 = 1L;
                int8_t l_445 = 0x23L;
                int32_t l_446 = 0x0E6D7984L;
                uint32_t l_447 = 1UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_443[i] = 1UL;
                if (((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(0x3255L, ((VECTOR(int16_t, 2))(4L, (-1L))), 0x5737L, ((VECTOR(int16_t, 2))(l_432.s16)), (-3L), 1L)).lo, ((VECTOR(uint16_t, 8))(0xFCCAL, ((VECTOR(uint16_t, 2))(l_433.s31)), ((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(l_434.s37427322)).s7255410244666613)).s8fd4, ((VECTOR(uint8_t, 4))((l_436 = l_435), ((VECTOR(uint8_t, 2))(mad_sat(((VECTOR(uint8_t, 4))(l_437, 255UL, 0UL, 0x14L)).even, ((VECTOR(uint8_t, 16))(l_438, 0xD7L, 0x84L, (l_442 = ((VECTOR(uint8_t, 2))(hadd(((VECTOR(uint8_t, 4))(l_439.xxyy)).odd, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 8))(add_sat(((VECTOR(uint8_t, 2))(l_440.s52)).yyxyxyyy, ((VECTOR(uint8_t, 16))(l_441.s20d0018367171bf0)).hi))).even))), 0x31L, 0x13L, 0xABL, 2UL)).s44))).hi), l_443[0], 0xFFL, (((l_444 , (-1L)) , 0x09DE3C02L) , 0x81L), 0x11L, l_445, l_446, l_447, 255UL, ((VECTOR(uint8_t, 2))(247UL)), 1UL, 255UL)).s3b, ((VECTOR(uint8_t, 2))(0x5EL))))), 0x55L))))), 0x067DL)).hi))).xwxzzxzw)).lo))).x)
                { /* block id: 213 */
                    VECTOR(uint64_t, 8) l_448 = (VECTOR(uint64_t, 8))(0xA30328EB3972C608L, (VECTOR(uint64_t, 4))(0xA30328EB3972C608L, (VECTOR(uint64_t, 2))(0xA30328EB3972C608L, 0x6EF23E98FCCAFC29L), 0x6EF23E98FCCAFC29L), 0x6EF23E98FCCAFC29L, 0xA30328EB3972C608L, 0x6EF23E98FCCAFC29L);
                    int16_t l_449 = 0x7BFEL;
                    uint32_t l_450 = 4294967295UL;
                    int i;
                    l_450 = (l_449 = (l_299.w = l_448.s6));
                    for (l_448.s4 = 12; (l_448.s4 != 44); l_448.s4++)
                    { /* block id: 219 */
                        int64_t l_453 = (-1L);
                        uint32_t l_454 = 0xB6FEC613L;
                        int8_t l_455[6][7][1] = {{{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)}},{{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)}},{{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)}},{{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)}},{{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)}},{{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)},{(-10L)}}};
                        uint32_t l_456 = 9UL;
                        int64_t l_457 = 0x71C37C3B93937014L;
                        int i, j, k;
                        l_299.y = l_453;
                        l_456 = (l_454 , l_455[0][4][0]);
                        l_299.w = l_457;
                    }
                }
                else
                { /* block id: 224 */
                    uint16_t l_458 = 0x731CL;
                    uint16_t l_463 = 0x2302L;
                    VECTOR(int32_t, 16) l_464 = (VECTOR(int32_t, 16))((-9L), (VECTOR(int32_t, 4))((-9L), (VECTOR(int32_t, 2))((-9L), 8L), 8L), 8L, (-9L), 8L, (VECTOR(int32_t, 2))((-9L), 8L), (VECTOR(int32_t, 2))((-9L), 8L), (-9L), 8L, (-9L), 8L);
                    uint32_t l_465 = 4294967287UL;
                    VECTOR(int32_t, 4) l_466 = (VECTOR(int32_t, 4))((-3L), (VECTOR(int32_t, 2))((-3L), 0x43074138L), 0x43074138L);
                    int32_t l_467 = 0L;
                    int32_t l_468 = 8L;
                    VECTOR(int16_t, 4) l_469 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 8L), 8L);
                    VECTOR(int16_t, 16) l_470 = (VECTOR(int16_t, 16))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x4213L), 0x4213L), 0x4213L, 0L, 0x4213L, (VECTOR(int16_t, 2))(0L, 0x4213L), (VECTOR(int16_t, 2))(0L, 0x4213L), 0L, 0x4213L, 0L, 0x4213L);
                    VECTOR(int16_t, 8) l_471 = (VECTOR(int16_t, 8))(0x61F6L, (VECTOR(int16_t, 4))(0x61F6L, (VECTOR(int16_t, 2))(0x61F6L, 0x4DD7L), 0x4DD7L), 0x4DD7L, 0x61F6L, 0x4DD7L);
                    VECTOR(int16_t, 8) l_472 = (VECTOR(int16_t, 8))(8L, (VECTOR(int16_t, 4))(8L, (VECTOR(int16_t, 2))(8L, 0x0FC4L), 0x0FC4L), 0x0FC4L, 8L, 0x0FC4L);
                    VECTOR(int16_t, 2) l_473 = (VECTOR(int16_t, 2))(0x6943L, 0x3462L);
                    VECTOR(int16_t, 8) l_474 = (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x587DL), 0x587DL), 0x587DL, 1L, 0x587DL);
                    VECTOR(int16_t, 4) l_475 = (VECTOR(int16_t, 4))(0x4DCFL, (VECTOR(int16_t, 2))(0x4DCFL, 2L), 2L);
                    uint32_t l_476 = 0xAFFCAB07L;
                    VECTOR(int16_t, 16) l_477 = (VECTOR(int16_t, 16))((-9L), (VECTOR(int16_t, 4))((-9L), (VECTOR(int16_t, 2))((-9L), 0x4D2CL), 0x4D2CL), 0x4D2CL, (-9L), 0x4D2CL, (VECTOR(int16_t, 2))((-9L), 0x4D2CL), (VECTOR(int16_t, 2))((-9L), 0x4D2CL), (-9L), 0x4D2CL, (-9L), 0x4D2CL);
                    VECTOR(int16_t, 4) l_478 = (VECTOR(int16_t, 4))(0x059EL, (VECTOR(int16_t, 2))(0x059EL, 1L), 1L);
                    VECTOR(int16_t, 4) l_479 = (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 4L), 4L);
                    VECTOR(int16_t, 2) l_480 = (VECTOR(int16_t, 2))(0L, (-8L));
                    uint32_t l_481[3][3][2];
                    int32_t l_482 = 0x4E31727CL;
                    uint8_t l_483 = 0x97L;
                    uint64_t l_484 = 0xFCA6B8CD343BEAAEL;
                    VECTOR(int16_t, 16) l_485 = (VECTOR(int16_t, 16))(0x4EFAL, (VECTOR(int16_t, 4))(0x4EFAL, (VECTOR(int16_t, 2))(0x4EFAL, 0x74F2L), 0x74F2L), 0x74F2L, 0x4EFAL, 0x74F2L, (VECTOR(int16_t, 2))(0x4EFAL, 0x74F2L), (VECTOR(int16_t, 2))(0x4EFAL, 0x74F2L), 0x4EFAL, 0x74F2L, 0x4EFAL, 0x74F2L);
                    int8_t l_503 = 1L;
                    VECTOR(uint64_t, 16) l_504 = (VECTOR(uint64_t, 16))(1UL, (VECTOR(uint64_t, 4))(1UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551608UL), 18446744073709551608UL), 18446744073709551608UL, 1UL, 18446744073709551608UL, (VECTOR(uint64_t, 2))(1UL, 18446744073709551608UL), (VECTOR(uint64_t, 2))(1UL, 18446744073709551608UL), 1UL, 18446744073709551608UL, 1UL, 18446744073709551608UL);
                    int32_t *l_507 = (void*)0;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_481[i][j][k] = 0x20747F49L;
                        }
                    }
                    if (l_458)
                    { /* block id: 225 */
                        int32_t l_460 = 1L;
                        int32_t *l_459 = &l_460;
                        int32_t *l_461 = &l_460;
                        l_459 = (void*)0;
                        l_461 = (void*)0;
                        l_299.w = 0x13BC3F62L;
                    }
                    else
                    { /* block id: 229 */
                        uint32_t l_462 = 4294967291UL;
                        l_299.w = (-1L);
                        l_299.y |= l_462;
                    }
                    if ((l_463 , ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(l_464.s2172)).hi)), l_465, ((VECTOR(int32_t, 8))((-1L), 0x7486309FL, ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(1L, (-1L), 0L, (-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(l_466.zw)), 2L, 4L)), l_467, 1L, (-7L), ((l_468 , ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(l_469.xwyx)).zwxyzxwwwxyxxwyy)).s7c)), ((VECTOR(int16_t, 16))(0x6F3AL, 0L, 0x7ABCL, ((VECTOR(int16_t, 2))(l_470.s8a)), 0x23EFL, 0x300BL, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(0x6AE2L, ((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 8))(l_471.s36676534)).s47, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0L, 0x2BB8L)), 0x1B9EL, 1L)).odd)), 0x55F5L, 9L)).hi))), ((VECTOR(int16_t, 2))(2L, 1L)), (-7L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x6DF4L, 5L)), 0x2B79L, 0x301FL)).z, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 8))(l_472.s24262670)).s2722544154575106, (int16_t)((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(sub_sat(((VECTOR(int16_t, 16))(rotate(((VECTOR(int16_t, 4))(l_473.yyyy)).yzyzywyyyyyyxwxz, ((VECTOR(int16_t, 16))(l_474.s5205371067567451))))), ((VECTOR(int16_t, 16))(l_475.zyyzyxwzwyywwyyx))))).s58)).even, (int16_t)l_476))).sfd5c, ((VECTOR(int16_t, 2))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_477.s5058c0ca)).hi)).lo, ((VECTOR(int16_t, 8))((-1L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(l_478.zx)), 3L, 0L)).even)), 0x09AAL, ((VECTOR(int16_t, 2))(l_479.wy)), 0x7C28L, (-1L))).s66, ((VECTOR(int16_t, 2))(0x439AL, (-1L)))))).xyyy))).xwywwywxyzzzzwyy)))).sc2d2)), ((VECTOR(int16_t, 4))(l_480.yyxx)), 0L)).even)), 8L)).sb4))).hi) , ((VECTOR(int32_t, 2))(0L, 0x206D5A29L)).hi), l_481[1][1][0], l_482, 0L, 0x51FFD451L)).sa2)).yyyx)).wzzwyxwzxxwxzxzx)).s2, 5L, l_483, 0x32E583A1L, 0x759073BBL, 0L)).s7, l_484, l_485.sf, (-3L), 4L)).s2575121122576642)).s40)).lo))
                    { /* block id: 233 */
                        int32_t l_486 = 0x7C678BB1L;
                        int16_t l_487 = 0x77F6L;
                        uint64_t l_488 = 0xBFD21A4CAEA27702L;
                        l_488++;
                    }
                    else
                    { /* block id: 235 */
                        int8_t l_491[4];
                        int32_t l_492 = 0x6DE8DA16L;
                        int32_t l_493 = 0x0B9F5595L;
                        uint32_t l_494 = 4294967287UL;
                        union U1 l_498[6] = {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}};
                        union U1 *l_497 = &l_498[4];
                        union U1 *l_499 = &l_498[1];
                        uint64_t l_500 = 0x8581C6CDAB150B41L;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_491[i] = 9L;
                        l_494--;
                        l_499 = l_497;
                        l_500++;
                    }
                    --l_504.sc;
                    l_507 = (void*)0;
                }
                for (l_445 = 0; (l_445 == 4); l_445 = safe_add_func_uint32_t_u_u(l_445, 9))
                { /* block id: 245 */
                    int32_t l_510 = 0x7D691631L;
                    uint64_t l_515 = 0x0D2BE2BF3AF97946L;
                    union U0 l_527[3][5][4] = {{{{4294967289UL},{0x8B0B387FL},{4294967289UL},{4294967289UL}},{{4294967289UL},{0x8B0B387FL},{4294967289UL},{4294967289UL}},{{4294967289UL},{0x8B0B387FL},{4294967289UL},{4294967289UL}},{{4294967289UL},{0x8B0B387FL},{4294967289UL},{4294967289UL}},{{4294967289UL},{0x8B0B387FL},{4294967289UL},{4294967289UL}}},{{{4294967289UL},{0x8B0B387FL},{4294967289UL},{4294967289UL}},{{4294967289UL},{0x8B0B387FL},{4294967289UL},{4294967289UL}},{{4294967289UL},{0x8B0B387FL},{4294967289UL},{4294967289UL}},{{4294967289UL},{0x8B0B387FL},{4294967289UL},{4294967289UL}},{{4294967289UL},{0x8B0B387FL},{4294967289UL},{4294967289UL}}},{{{4294967289UL},{0x8B0B387FL},{4294967289UL},{4294967289UL}},{{4294967289UL},{0x8B0B387FL},{4294967289UL},{4294967289UL}},{{4294967289UL},{0x8B0B387FL},{4294967289UL},{4294967289UL}},{{4294967289UL},{0x8B0B387FL},{4294967289UL},{4294967289UL}},{{4294967289UL},{0x8B0B387FL},{4294967289UL},{4294967289UL}}}};
                    union U0 *l_526[10];
                    union U0 *l_528 = &l_527[1][3][0];
                    VECTOR(int32_t, 2) l_529 = (VECTOR(int32_t, 2))(0x541C35FEL, 0L);
                    uint32_t l_530 = 0x8782740FL;
                    uint64_t l_531 = 1UL;
                    int i, j, k;
                    for (i = 0; i < 10; i++)
                        l_526[i] = &l_527[1][3][0];
                    for (l_510 = 8; (l_510 != (-29)); l_510 = safe_sub_func_int64_t_s_s(l_510, 9))
                    { /* block id: 248 */
                        int32_t l_514 = 1L;
                        int32_t *l_513 = &l_514;
                        l_513 = (void*)0;
                        l_299.y |= 0x189DF3C7L;
                    }
                    if (l_515)
                    { /* block id: 252 */
                        int32_t *l_516[4];
                        int32_t l_518[1][5];
                        int32_t *l_517 = &l_518[0][4];
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_516[i] = (void*)0;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_518[i][j] = (-4L);
                        }
                        l_517 = l_516[1];
                    }
                    else
                    { /* block id: 254 */
                        int32_t l_520 = 0x154EB16CL;
                        int32_t *l_519 = &l_520;
                        int32_t *l_521 = (void*)0;
                        int64_t l_522 = 0x0B09F58E9CAD0B04L;
                        uint8_t l_523[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
                        int i;
                        l_521 = l_519;
                        l_523[2]++;
                    }
                    l_528 = l_526[7];
                    if ((l_529.y , (l_529.x |= (FAKE_DIVERGE(p_1371->group_2_offset, get_group_id(2), 10) , (l_531 |= (l_299.w = l_530))))))
                    { /* block id: 262 */
                        int32_t l_533[5] = {0x3FFD4045L,0x3FFD4045L,0x3FFD4045L,0x3FFD4045L,0x3FFD4045L};
                        int32_t *l_532 = &l_533[4];
                        int32_t *l_534 = &l_533[4];
                        int32_t *l_535 = &l_533[0];
                        uint8_t l_536 = 0x4BL;
                        VECTOR(uint16_t, 2) l_539 = (VECTOR(uint16_t, 2))(0xF637L, 1UL);
                        uint64_t l_540 = 0x44B930D4262C2E4EL;
                        uint16_t l_541 = 0x29CEL;
                        int64_t l_542 = 0L;
                        uint16_t l_543 = 0UL;
                        VECTOR(int32_t, 2) l_544 = (VECTOR(int32_t, 2))((-1L), 0x4FC924F7L);
                        VECTOR(int32_t, 8) l_545 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 8L), 8L), 8L, 1L, 8L);
                        int32_t l_546 = 0L;
                        int i;
                        l_535 = (l_534 = l_532);
                        --l_536;
                        (*l_535) |= ((VECTOR(int32_t, 16))((-1L), ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 2))(0x38A2L, 9L)).yyyy, ((VECTOR(uint16_t, 2))(l_539.xy)).yyxx))), (-1L), (-8L), ((VECTOR(int32_t, 2))(0x5C918D87L, 0L)), 0x587573C6L, 0x73B35E36L, l_540, (l_541 , (l_299.z = ((l_542 , FAKE_DIVERGE(p_1371->local_2_offset, get_local_id(2), 10)) , l_543))), ((VECTOR(int32_t, 2))(rotate(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_544.xxyyxyyx)).odd)).xyxyzywywyxxyywz)).s52, ((VECTOR(int32_t, 4))(l_545.s4405)).hi))), (-3L))).sc;
                        l_299.x |= l_546;
                    }
                    else
                    { /* block id: 269 */
                        uint32_t l_547 = 0x5C2C42F8L;
                        int8_t l_548 = 0x0FL;
                        l_548 &= (l_510 = l_547);
                    }
                }
            }
            unsigned int result = 0;
            result += l_295.sf;
            result += l_295.se;
            result += l_295.sd;
            result += l_295.sc;
            result += l_295.sb;
            result += l_295.sa;
            result += l_295.s9;
            result += l_295.s8;
            result += l_295.s7;
            result += l_295.s6;
            result += l_295.s5;
            result += l_295.s4;
            result += l_295.s3;
            result += l_295.s2;
            result += l_295.s1;
            result += l_295.s0;
            result += l_296;
            result += l_297.f0;
            result += l_297.f1;
            result += l_298.sf;
            result += l_298.se;
            result += l_298.sd;
            result += l_298.sc;
            result += l_298.sb;
            result += l_298.sa;
            result += l_298.s9;
            result += l_298.s8;
            result += l_298.s7;
            result += l_298.s6;
            result += l_298.s5;
            result += l_298.s4;
            result += l_298.s3;
            result += l_298.s2;
            result += l_298.s1;
            result += l_298.s0;
            result += l_299.w;
            result += l_299.z;
            result += l_299.y;
            result += l_299.x;
            atomic_add(&p_1371->g_special_values[63 * get_linear_group_id() + 48], result);
        }
        else
        { /* block id: 275 */
            (1 + 1);
        }
        if (((l_549 == (l_551 = l_550[5])) , 0x231234F9L))
        { /* block id: 279 */
            int32_t *l_559 = &p_1371->g_61[0];
            int32_t *l_560 = (void*)0;
            int32_t l_561 = (-5L);
            union U1 l_565 = {0x6C431AF5L};
            int i, j;
            for (p_43 = 23; (p_43 <= 41); p_43++)
            { /* block id: 282 */
                (*p_1371->g_103) = ((l_554 = l_286) || (&p_1371->g_106[5][0] == (void*)0));
                if ((**p_1371->g_280))
                    break;
                (*p_1371->g_555) = ((*p_1371->g_137) = (*p_1371->g_103));
            }
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1371->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 5)), permutations[(safe_mod_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((l_559 = l_558) != (p_1371->g_133[3][4] = l_560)), (l_286 && (((l_561 >= ((void*)0 == &l_294)) && ((p_44 == (p_47 <= ((((safe_div_func_int16_t_s_s((((((&p_1371->g_119[3][0] != l_564) <= p_44) & 6L) , l_565) , p_45), 0x831EL)) , 18446744073709551615UL) != p_1371->g_181[1][4]) | p_1371->g_154.s3))) ^ l_554)) ^ GROUP_DIVERGE(1, 1))))), 10))][(safe_mod_func_uint32_t_u_u(p_1371->tid, 5))]));
        }
        else
        { /* block id: 294 */
            union U0 **l_577[9] = {&l_575,&l_575,&l_575,&l_575,&l_575,&l_575,&l_575,&l_575,&l_575};
            VECTOR(int16_t, 16) l_580 = (VECTOR(int16_t, 16))(0x466AL, (VECTOR(int16_t, 4))(0x466AL, (VECTOR(int16_t, 2))(0x466AL, (-3L)), (-3L)), (-3L), 0x466AL, (-3L), (VECTOR(int16_t, 2))(0x466AL, (-3L)), (VECTOR(int16_t, 2))(0x466AL, (-3L)), 0x466AL, (-3L), 0x466AL, (-3L));
            int16_t *l_581 = (void*)0;
            int16_t *l_582 = &p_1371->g_180;
            int64_t *l_583 = &l_286;
            VECTOR(int32_t, 4) l_586 = (VECTOR(int32_t, 4))(0x75DFF455L, (VECTOR(int32_t, 2))(0x75DFF455L, 1L), 1L);
            int32_t **l_593 = &p_1371->g_103;
            int32_t ***l_592[4] = {&l_593,&l_593,&l_593,&l_593};
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1371->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 5)), permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(p_1371->g_566.xwzwxwzz)).s7, 10))][(safe_mod_func_uint32_t_u_u(p_1371->tid, 5))]));
            (*p_1371->g_103) = (((!((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((((l_578 = l_575) != (void*)0) , ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 16))(l_579.s00ce19401e72a556)).s9b79)), ((VECTOR(int16_t, 8))(l_580.s0a9d91b8)).odd))).even)))).odd) > ((*l_582) = (&p_43 == (void*)0))), p_43)), (7L ^ ((*l_583) = (-1L))))), ((safe_add_func_uint8_t_u_u((((VECTOR(uint32_t, 8))(safe_clamp_func(VECTOR(uint32_t, 8),uint32_t,((VECTOR(uint32_t, 2))(abs(((VECTOR(int32_t, 8))(min(((VECTOR(int32_t, 2))(mul_hi(((VECTOR(int32_t, 2))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 16))(l_586.yzyzyxwxywwyzyyw)).s1f, ((VECTOR(int32_t, 2))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((((VECTOR(uint16_t, 16))(l_587.s2761247445617147)).s2 != (-9L)) , p_1371->g_140), ((VECTOR(int16_t, 4))(0x61F0L)), ((VECTOR(int16_t, 2))(2L)), 0L, ((VECTOR(int16_t, 4))((-2L))), ((VECTOR(int16_t, 2))(0x2239L)), 0x25EFL, 0x7E26L)))).s1b, ((VECTOR(uint16_t, 2))(0x1227L))))), ((VECTOR(int32_t, 2))(5L))))), ((VECTOR(int32_t, 2))(0x501792A9L))))).xyyxxyyx, (int32_t)p_47))).s06))).xyyyxxyy, (uint32_t)l_586.z, (uint32_t)p_43))).s1 > p_46), l_294)) | 0x8ED1498398AF5071L))) != l_579.s2)) < permutations[(safe_mod_func_uint32_t_u_u(((VECTOR(uint32_t, 8))(p_1371->g_566.xwzwxwzz)).s7, 10))][(safe_mod_func_uint32_t_u_u(p_1371->tid, 5))]) >= l_587.s4);
            (**l_595) = (((l_554 && 1UL) | (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(max(((VECTOR(uint32_t, 2))(p_1371->g_588.sf1)).yxxxxxyx, (uint32_t)(((((safe_mod_func_uint64_t_u_u((((0x068C31D1L | l_586.z) || ((((l_583 == l_591) , ((*l_575) , (l_594 = &p_1371->g_137))) == l_595) >= 4L)) == (**l_595)), p_44)) == p_44) > 8UL) == 8L) , l_554)))).s57)), ((VECTOR(uint32_t, 4))(0x8A3DEC29L)), 4294967292UL, 0x877602A7L)).s3 ^ l_554)) <= 0x5B09B305L);
        }
    }
    else
    { /* block id: 305 */
        union U0 **l_598[2][6];
        union U0 **l_600 = &l_578;
        int32_t l_604[3];
        VECTOR(int16_t, 8) l_654 = (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0L), 0L), 0L, 0L, 0L);
        int32_t l_663[4] = {(-1L),(-1L),(-1L),(-1L)};
        union U1 l_685 = {0x7A11D239L};
        union U1 l_697 = {0x01AD51B5L};
        int32_t *l_698 = &p_1371->g_61[1];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
                l_598[i][j] = (void*)0;
        }
        for (i = 0; i < 3; i++)
            l_604[i] = 0L;
        for (p_1371->g_89 = 19; (p_1371->g_89 >= 11); --p_1371->g_89)
        { /* block id: 308 */
            union U0 ***l_599 = &l_598[0][3];
            union U0 ***l_601[3][6][5] = {{{&l_600,(void*)0,&l_600,(void*)0,&l_600},{&l_600,(void*)0,&l_600,(void*)0,&l_600},{&l_600,(void*)0,&l_600,(void*)0,&l_600},{&l_600,(void*)0,&l_600,(void*)0,&l_600},{&l_600,(void*)0,&l_600,(void*)0,&l_600},{&l_600,(void*)0,&l_600,(void*)0,&l_600}},{{&l_600,(void*)0,&l_600,(void*)0,&l_600},{&l_600,(void*)0,&l_600,(void*)0,&l_600},{&l_600,(void*)0,&l_600,(void*)0,&l_600},{&l_600,(void*)0,&l_600,(void*)0,&l_600},{&l_600,(void*)0,&l_600,(void*)0,&l_600},{&l_600,(void*)0,&l_600,(void*)0,&l_600}},{{&l_600,(void*)0,&l_600,(void*)0,&l_600},{&l_600,(void*)0,&l_600,(void*)0,&l_600},{&l_600,(void*)0,&l_600,(void*)0,&l_600},{&l_600,(void*)0,&l_600,(void*)0,&l_600},{&l_600,(void*)0,&l_600,(void*)0,&l_600},{&l_600,(void*)0,&l_600,(void*)0,&l_600}}};
            int32_t l_605[9][8] = {{(-2L),0x75DC1B84L,(-2L),(-10L),(-1L),2L,0x01A9443FL,0x1470EFDEL},{(-2L),0x75DC1B84L,(-2L),(-10L),(-1L),2L,0x01A9443FL,0x1470EFDEL},{(-2L),0x75DC1B84L,(-2L),(-10L),(-1L),2L,0x01A9443FL,0x1470EFDEL},{(-2L),0x75DC1B84L,(-2L),(-10L),(-1L),2L,0x01A9443FL,0x1470EFDEL},{(-2L),0x75DC1B84L,(-2L),(-10L),(-1L),2L,0x01A9443FL,0x1470EFDEL},{(-2L),0x75DC1B84L,(-2L),(-10L),(-1L),2L,0x01A9443FL,0x1470EFDEL},{(-2L),0x75DC1B84L,(-2L),(-10L),(-1L),2L,0x01A9443FL,0x1470EFDEL},{(-2L),0x75DC1B84L,(-2L),(-10L),(-1L),2L,0x01A9443FL,0x1470EFDEL},{(-2L),0x75DC1B84L,(-2L),(-10L),(-1L),2L,0x01A9443FL,0x1470EFDEL}};
            int i, j, k;
            (**l_594) = (((((*l_599) = l_598[0][3]) != (l_600 = l_600)) | (safe_div_func_int16_t_s_s(l_604[1], (l_605[1][2] |= p_1371->g_258.s5)))) || p_44);
            if ((*p_1371->g_555))
                continue;
            (**l_594) = (p_43 , (!(*p_1371->g_137)));
        }
        for (p_1371->g_91 = 6; (p_1371->g_91 == (-25)); p_1371->g_91 = safe_sub_func_uint64_t_u_u(p_1371->g_91, 4))
        { /* block id: 318 */
            int32_t *l_608 = &l_604[1];
            int32_t *l_609[6][9][4] = {{{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89}},{{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89}},{{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89}},{{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89}},{{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89}},{{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89},{(void*)0,(void*)0,&l_293,&p_1371->g_89}}};
            union U1 l_711 = {0x4BE2DA60L};
            VECTOR(uint8_t, 8) l_717 = (VECTOR(uint8_t, 8))(0xDBL, (VECTOR(uint8_t, 4))(0xDBL, (VECTOR(uint8_t, 2))(0xDBL, 0x8BL), 0x8BL), 0x8BL, 0xDBL, 0x8BL);
            union U0 *l_739[3];
            VECTOR(int16_t, 16) l_746 = (VECTOR(int16_t, 16))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x779BL), 0x779BL), 0x779BL, 1L, 0x779BL, (VECTOR(int16_t, 2))(1L, 0x779BL), (VECTOR(int16_t, 2))(1L, 0x779BL), 1L, 0x779BL, 1L, 0x779BL);
            int16_t l_751 = (-10L);
            int32_t l_757 = 0L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_739[i] = &p_1371->g_576[4][4][0];
            l_610[4][1][0]--;
            for (p_43 = 0; (p_43 < 2); p_43 = safe_add_func_uint16_t_u_u(p_43, 4))
            { /* block id: 322 */
                int16_t *l_650 = (void*)0;
                int32_t l_651[10] = {0x0AB581EEL,0x4EA8F46AL,0x7C1EF2FAL,0x4EA8F46AL,0x0AB581EEL,0x0AB581EEL,0x4EA8F46AL,0x7C1EF2FAL,0x4EA8F46AL,0x0AB581EEL};
                int64_t *l_652[3][10][2] = {{{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0}},{{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0}},{{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0},{&l_286,(void*)0}}};
                int32_t l_659 = 0L;
                uint32_t *l_660 = (void*)0;
                uint32_t *l_661 = (void*)0;
                uint32_t *l_662[8][3][7] = {{{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107}},{{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107}},{{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107}},{{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107}},{{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107}},{{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107}},{{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107}},{{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107},{(void*)0,(void*)0,&p_1371->g_107,&p_1371->g_107,(void*)0,&p_1371->g_576[4][4][0].f0,&p_1371->g_107}}};
                int32_t *l_671 = &p_1371->g_61[0];
                int32_t **l_672 = (void*)0;
                int32_t **l_673 = &p_1371->g_133[1][2];
                int8_t *l_682 = &l_664;
                uint16_t l_700[6];
                union U0 l_710 = {1UL};
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_700[i] = 0xCBA8L;
                for (p_1371->g_140 = 23; (p_1371->g_140 <= 51); p_1371->g_140++)
                { /* block id: 325 */
                    VECTOR(int16_t, 8) l_617 = (VECTOR(int16_t, 8))(0x3FD6L, (VECTOR(int16_t, 4))(0x3FD6L, (VECTOR(int16_t, 2))(0x3FD6L, 0L), 0L), 0L, 0x3FD6L, 0L);
                    int i;
                    return l_617.s1;
                }
                atomic_xor(&p_1371->l_atomic_reduction[0], ((p_45 && ((safe_mod_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((p_45 == ((safe_add_func_int8_t_s_s((0xA5AEL && 9L), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(0x29L, 0L, ((l_663[3] |= ((((safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(0x32L, (safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x07L, 0x47L)), 0x7EL, 1L)).wwxzxxwwzwxwzyzy)).sd9)).yxyxxxxxyyyyxxxy, (int8_t)(safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((~(safe_add_func_uint16_t_u_u(p_43, ((safe_mul_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (l_651[9] = (safe_lshift_func_uint8_t_u_s(((VECTOR(uint8_t, 16))(sub_sat(((VECTOR(uint8_t, 16))(p_1371->g_648.xxyyyxxyxxxyxyyy)), ((VECTOR(uint8_t, 2))(min(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(0xF2L, 0x65L)).yyyxyxxxxxxxxyyy)).s48, ((VECTOR(uint8_t, 2))(p_1371->g_649.s40))))).yyyyxxyxyxxxyyxy))).sc, 1))))) <= (p_1371->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1371->tid, 5))] |= p_44))))), ((VECTOR(uint16_t, 2))(p_1371->g_653.xy)).even)), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 2))(l_654.s14)).yxyyyxxyxyyyyxyy, (int16_t)(safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(1UL, p_43)), 1UL))))).s27)).odd)), (int8_t)l_651[9]))).sfbe8, ((VECTOR(int8_t, 4))(1L))))).hi)).xyyy)), 0x60L, 0x2DL, 0x19L, 0x0DL)).s7 || p_46), p_43)), l_659)))), p_46)), l_654.s2)) == p_47), l_604[2])) <= 0L) == p_44) & FAKE_DIVERGE(p_1371->global_0_offset, get_global_id(0), 10))) <= p_43), l_651[9], 0x54L, ((VECTOR(int8_t, 2))((-6L))), 0x58L)).s5426413022136772)).sd)) , l_651[6])), l_654.s0)), (**l_595))) , p_1371->g_653.y)) && 0x3D58L) + get_linear_global_id());
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                if (get_linear_local_id() == 0)
                    p_1371->v_collective += p_1371->l_atomic_reduction[0];
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                ++p_1371->g_666;
                if ((((safe_div_func_uint64_t_u_u(((p_44 >= (((*l_673) = (l_671 = (void*)0)) != (void*)0)) >= (safe_sub_func_int32_t_s_s((l_659 | ((safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((*l_682) |= p_45), p_43)), 1UL)) > (((((safe_rshift_func_int8_t_s_s((+l_663[2]), (l_685 , 0L))) , (*p_1371->g_96)) || l_651[3]) , l_686) == &p_1371->g_61[0]))), (*p_1371->g_103)))), p_47)) & 0x4DD5333509A20B01L) | (-5L)))
                { /* block id: 336 */
                    uint64_t l_687 = 8UL;
                    l_687 |= (**p_1371->g_280);
                }
                else
                { /* block id: 338 */
                    for (l_685.f0 = 0; (l_685.f0 == 4); l_685.f0 = safe_add_func_int32_t_s_s(l_685.f0, 2))
                    { /* block id: 341 */
                        uint64_t *l_690 = (void*)0;
                        uint64_t *l_691[2][5][5] = {{{&p_1371->g_692[5][1],&p_1371->g_692[5][1],&p_1371->g_692[6][0],&p_1371->g_692[4][0],&p_1371->g_692[1][1]},{&p_1371->g_692[5][1],&p_1371->g_692[5][1],&p_1371->g_692[6][0],&p_1371->g_692[4][0],&p_1371->g_692[1][1]},{&p_1371->g_692[5][1],&p_1371->g_692[5][1],&p_1371->g_692[6][0],&p_1371->g_692[4][0],&p_1371->g_692[1][1]},{&p_1371->g_692[5][1],&p_1371->g_692[5][1],&p_1371->g_692[6][0],&p_1371->g_692[4][0],&p_1371->g_692[1][1]},{&p_1371->g_692[5][1],&p_1371->g_692[5][1],&p_1371->g_692[6][0],&p_1371->g_692[4][0],&p_1371->g_692[1][1]}},{{&p_1371->g_692[5][1],&p_1371->g_692[5][1],&p_1371->g_692[6][0],&p_1371->g_692[4][0],&p_1371->g_692[1][1]},{&p_1371->g_692[5][1],&p_1371->g_692[5][1],&p_1371->g_692[6][0],&p_1371->g_692[4][0],&p_1371->g_692[1][1]},{&p_1371->g_692[5][1],&p_1371->g_692[5][1],&p_1371->g_692[6][0],&p_1371->g_692[4][0],&p_1371->g_692[1][1]},{&p_1371->g_692[5][1],&p_1371->g_692[5][1],&p_1371->g_692[6][0],&p_1371->g_692[4][0],&p_1371->g_692[1][1]},{&p_1371->g_692[5][1],&p_1371->g_692[5][1],&p_1371->g_692[6][0],&p_1371->g_692[4][0],&p_1371->g_692[1][1]}}};
                        int32_t *l_699 = &p_1371->g_61[0];
                        int64_t ***l_705 = &l_704;
                        int64_t **l_707 = (void*)0;
                        int64_t ***l_706[2][5];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_706[i][j] = &l_707;
                        }
                        l_700[3] &= (((VECTOR(uint32_t, 2))(0x8D208E63L, 1UL)).hi && ((p_1371->g_692[6][1]--) ^ ((((4294967288UL == ((safe_lshift_func_uint8_t_u_s(FAKE_DIVERGE(p_1371->group_2_offset, get_group_id(2), 10), ((*l_682) = 0L))) < p_45)) , l_697) , (l_698 = &p_1371->g_61[1])) != (p_43 , l_699))));
                        p_1371->g_701++;
                        p_1371->g_708 = ((*l_705) = l_704);
                        (**l_595) = ((l_710 , &p_44) != ((**l_600) , (l_711 , ((*l_594) = &p_44))));
                    }
                    return p_43;
                }
            }
            for (l_664 = (-17); (l_664 != (-25)); --l_664)
            { /* block id: 357 */
                int64_t *l_720 = &l_286;
                int32_t l_721[5];
                int32_t l_755 = 0x25434BF3L;
                int32_t **l_762 = &p_1371->g_133[1][4];
                int32_t ***l_763 = (void*)0;
                int32_t ***l_764 = &l_762;
                int32_t **l_766 = &l_686;
                int32_t ***l_765[9][3][9] = {{{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766}},{{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766}},{{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766}},{{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766}},{{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766}},{{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766}},{{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766}},{{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766}},{{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766},{&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766,&l_766}}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_721[i] = (-5L);
                if ((p_1371->g_154.s1 > (((VECTOR(int64_t, 4))(safe_clamp_func(VECTOR(int64_t, 4),VECTOR(int64_t, 4),((VECTOR(int64_t, 16))(0L, (-8L), ((VECTOR(int64_t, 4))((&p_1371->g_107 == ((p_46 || GROUP_DIVERGE(2, 1)) , &p_45)), 0x61AD6C325BBDE5C8L, 0x055D948BB1547ACDL, (-1L))).x, (-8L), ((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(0x093401FDC1641FF6L, 0L)), (!(safe_unary_minus_func_int32_t_s((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 4))(l_717.s6620)), ((VECTOR(uint8_t, 2))(1UL, 248UL)).yxxy))).x, p_1371->g_142))))), ((*l_720) = (((l_685 , (**l_600)) , ((safe_lshift_func_int16_t_s_u(1L, 8)) == 0x47L)) == FAKE_DIVERGE(p_1371->local_1_offset, get_local_id(1), 10))), 0L, ((VECTOR(int64_t, 2))(0L)), 0L)), l_721[1], ((VECTOR(int64_t, 2))((-2L))), 0x6AEA4B2F0E7FDE83L)).s68aa, ((VECTOR(int64_t, 4))(1L)), ((VECTOR(int64_t, 4))(0x45CC0523618A26E8L))))).w ^ 3UL)))
                { /* block id: 359 */
                    uint32_t *l_752 = &p_1371->g_576[4][4][0].f0;
                    int16_t *l_753 = &p_1371->g_180;
                    int16_t *l_754[4][5][10] = {{{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294}},{{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294}},{{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294}},{{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294},{(void*)0,&l_294,&l_751,&l_751,(void*)0,(void*)0,(void*)0,&l_751,&l_294,&l_294}}};
                    uint64_t l_756 = 0x3E6188FC40339A96L;
                    uint8_t *l_758 = (void*)0;
                    uint8_t *l_759 = &l_610[2][1][0];
                    uint64_t *l_760 = &p_1371->g_692[4][0];
                    int i, j, k;
                    if ((atomic_inc(&p_1371->l_atomic_input[60]) == 5))
                    { /* block id: 361 */
                        int32_t l_723 = 0x2269EE86L;
                        int32_t *l_722 = &l_723;
                        VECTOR(int32_t, 8) l_724 = (VECTOR(int32_t, 8))(0x7C863A7CL, (VECTOR(int32_t, 4))(0x7C863A7CL, (VECTOR(int32_t, 2))(0x7C863A7CL, 0x39E603F2L), 0x39E603F2L), 0x39E603F2L, 0x7C863A7CL, 0x39E603F2L);
                        VECTOR(int32_t, 4) l_725 = (VECTOR(int32_t, 4))(9L, (VECTOR(int32_t, 2))(9L, 0x14941606L), 0x14941606L);
                        uint32_t l_726 = 0xB583DE10L;
                        int8_t l_727 = 0x1AL;
                        int32_t l_728 = 0x34E0E340L;
                        int32_t *l_729[9] = {&l_723,&l_723,&l_723,&l_723,&l_723,&l_723,&l_723,&l_723,&l_723};
                        int32_t *l_730 = &l_723;
                        int32_t *l_731 = &l_723;
                        int32_t *l_732 = (void*)0;
                        int i;
                        l_722 = (void*)0;
                        l_726 = ((VECTOR(int32_t, 16))(clz(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(0x65A1E660L, 0x1E414804L)), ((VECTOR(int32_t, 4))(l_724.s3641)), ((VECTOR(int32_t, 8))(l_725.wxwzwwzx)), 0x745A2508L, 0x0DDE03CBL))))).sa;
                        l_728 = l_727;
                        l_732 = (l_731 = (l_730 = l_729[6]));
                        unsigned int result = 0;
                        result += l_723;
                        result += l_724.s7;
                        result += l_724.s6;
                        result += l_724.s5;
                        result += l_724.s4;
                        result += l_724.s3;
                        result += l_724.s2;
                        result += l_724.s1;
                        result += l_724.s0;
                        result += l_725.w;
                        result += l_725.z;
                        result += l_725.y;
                        result += l_725.x;
                        result += l_726;
                        result += l_727;
                        result += l_728;
                        atomic_add(&p_1371->l_special_values[60], result);
                    }
                    else
                    { /* block id: 368 */
                        (1 + 1);
                    }
                    (*p_1371->g_137) = 1L;
                    (*p_1371->g_555) = (l_663[3] = ((p_1371->g_242 = (((*l_760) = (((((*l_595) = ((p_44 < (safe_sub_func_int64_t_s_s(p_43, (((*l_759) = (safe_div_func_int16_t_s_s((65529UL >= p_44), ((l_604[1] &= (safe_add_func_int16_t_s_s(l_721[1], (((*l_564) = (p_1371->g_576[4][4][0] , (((((void*)0 == l_739[2]) , GROUP_DIVERGE(0, 1)) != (((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((l_755 = ((*l_753) = (safe_mod_func_uint32_t_u_u(((*l_752) = ((((VECTOR(int64_t, 4))(((((((VECTOR(int16_t, 16))(l_746.s863d523d5a480e0c)).s8 == (((VECTOR(int32_t, 2))(0x06E583E1L, 0L)).even , ((((safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((p_1371->g_143 | 0x4D76L), p_43)), 0x7EL)) && 0x95583A0FL) , p_1371->g_576[4][4][0]) , (-8L)))) | p_1371->g_166.y) > 0x44C9L) < 1L), 6L, 0x4635787496D7F179L, 0x7C0EAFCEAC6EE157L)).x > l_751) ^ 0L)), (**l_594))))), l_756)), l_721[1])) != FAKE_DIVERGE(p_1371->group_2_offset, get_group_id(2), 10)) > l_757)) != 0x26039AFFL))) == (-9L))))) || p_45)))) < p_43)))) , l_608)) == (*l_594)) <= 0x21C7CAB9L) <= 0x3FF00E9A0919AF0DL)) >= 0x04301EBE97C080F1L)) < p_45));
                    if (p_43)
                        continue;
                }
                else
                { /* block id: 384 */
                    return p_45;
                }
                barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
                p_1371->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 5)), permutations[(safe_mod_func_uint32_t_u_u(((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 4))(p_1371->g_761.xxxy)))).w == p_1371->g_151.s3) ^ ((p_1371->g_767 = ((*l_764) = l_762)) == &l_686)), 10))][(safe_mod_func_uint32_t_u_u(p_1371->tid, 5))]));
                if ((*l_608))
                    break;
            }
        }
    }
    p_44 = (~(*p_1371->g_103));
    return p_47;
}


/* ------------------------------------------ */
/* 
 * reads : p_1371->g_61 p_1371->g_57 p_1371->g_89 p_1371->g_91 p_1371->g_95 p_1371->g_96 p_1371->g_106 p_1371->g_2 p_1371->g_119 p_1371->g_131 p_1371->g_107 p_1371->l_comm_values p_1371->g_142 p_1371->g_19 p_1371->g_140 p_1371->g_143 p_1371->g_145 p_1371->g_151 p_1371->g_153 p_1371->g_154 p_1371->g_166 p_1371->g_167 p_1371->g_137 p_1371->g_180 p_1371->g_103 p_1371->g_comm_values p_1371->g_181 p_1371->g_258 p_1371->g_256
 * writes: p_1371->g_89 p_1371->g_91 p_1371->g_57 p_1371->g_103 p_1371->g_119 p_1371->g_137 p_1371->g_140 p_1371->g_142 p_1371->g_143 p_1371->g_145 p_1371->g_106 p_1371->g_171 p_1371->g_180 p_1371->g_181 p_1371->g_61 p_1371->g_107
 */
int64_t  func_51(uint32_t  p_52, int32_t  p_53, uint32_t  p_54, uint32_t  p_55, struct S2 * p_1371)
{ /* block id: 10 */
    union U1 l_70 = {-1L};
    uint32_t *l_71 = (void*)0;
    union U0 l_108 = {0x6F03433DL};
    int32_t *l_144[5][2][1] = {{{&p_1371->g_145},{&p_1371->g_145}},{{&p_1371->g_145},{&p_1371->g_145}},{{&p_1371->g_145},{&p_1371->g_145}},{{&p_1371->g_145},{&p_1371->g_145}},{{&p_1371->g_145},{&p_1371->g_145}}};
    VECTOR(uint32_t, 16) l_150 = (VECTOR(uint32_t, 16))(0xE552D92CL, (VECTOR(uint32_t, 4))(0xE552D92CL, (VECTOR(uint32_t, 2))(0xE552D92CL, 1UL), 1UL), 1UL, 0xE552D92CL, 1UL, (VECTOR(uint32_t, 2))(0xE552D92CL, 1UL), (VECTOR(uint32_t, 2))(0xE552D92CL, 1UL), 0xE552D92CL, 1UL, 0xE552D92CL, 1UL);
    VECTOR(uint32_t, 8) l_152 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 0x43E3545AL), 0x43E3545AL), 0x43E3545AL, 0UL, 0x43E3545AL);
    VECTOR(uint32_t, 2) l_155 = (VECTOR(uint32_t, 2))(0x98C3209DL, 0UL);
    int32_t **l_163 = &p_1371->g_133[0][5];
    int32_t ***l_162 = &l_163;
    VECTOR(int32_t, 2) l_164 = (VECTOR(int32_t, 2))(0x4E0AEB5CL, 3L);
    VECTOR(int32_t, 8) l_165 = (VECTOR(int32_t, 8))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x3D71A1B5L), 0x3D71A1B5L), 0x3D71A1B5L, 1L, 0x3D71A1B5L);
    VECTOR(int32_t, 16) l_168 = (VECTOR(int32_t, 16))(0x03759828L, (VECTOR(int32_t, 4))(0x03759828L, (VECTOR(int32_t, 2))(0x03759828L, 4L), 4L), 4L, 0x03759828L, 4L, (VECTOR(int32_t, 2))(0x03759828L, 4L), (VECTOR(int32_t, 2))(0x03759828L, 4L), 0x03759828L, 4L, 0x03759828L, 4L);
    VECTOR(uint32_t, 16) l_169 = (VECTOR(uint32_t, 16))(0xB0DCFB84L, (VECTOR(uint32_t, 4))(0xB0DCFB84L, (VECTOR(uint32_t, 2))(0xB0DCFB84L, 0UL), 0UL), 0UL, 0xB0DCFB84L, 0UL, (VECTOR(uint32_t, 2))(0xB0DCFB84L, 0UL), (VECTOR(uint32_t, 2))(0xB0DCFB84L, 0UL), 0xB0DCFB84L, 0UL, 0xB0DCFB84L, 0UL);
    uint32_t **l_170 = &p_1371->g_106[0][0];
    uint32_t **l_172 = &l_71;
    int16_t *l_175 = &l_70.f1;
    int16_t *l_176 = &l_70.f1;
    int16_t *l_177 = &l_70.f1;
    int16_t *l_178 = &l_70.f1;
    int16_t *l_179[9][10] = {{&p_1371->g_180,(void*)0,&p_1371->g_180,(void*)0,(void*)0,(void*)0,&p_1371->g_180,(void*)0,&p_1371->g_180,&p_1371->g_180},{&p_1371->g_180,(void*)0,&p_1371->g_180,(void*)0,(void*)0,(void*)0,&p_1371->g_180,(void*)0,&p_1371->g_180,&p_1371->g_180},{&p_1371->g_180,(void*)0,&p_1371->g_180,(void*)0,(void*)0,(void*)0,&p_1371->g_180,(void*)0,&p_1371->g_180,&p_1371->g_180},{&p_1371->g_180,(void*)0,&p_1371->g_180,(void*)0,(void*)0,(void*)0,&p_1371->g_180,(void*)0,&p_1371->g_180,&p_1371->g_180},{&p_1371->g_180,(void*)0,&p_1371->g_180,(void*)0,(void*)0,(void*)0,&p_1371->g_180,(void*)0,&p_1371->g_180,&p_1371->g_180},{&p_1371->g_180,(void*)0,&p_1371->g_180,(void*)0,(void*)0,(void*)0,&p_1371->g_180,(void*)0,&p_1371->g_180,&p_1371->g_180},{&p_1371->g_180,(void*)0,&p_1371->g_180,(void*)0,(void*)0,(void*)0,&p_1371->g_180,(void*)0,&p_1371->g_180,&p_1371->g_180},{&p_1371->g_180,(void*)0,&p_1371->g_180,(void*)0,(void*)0,(void*)0,&p_1371->g_180,(void*)0,&p_1371->g_180,&p_1371->g_180},{&p_1371->g_180,(void*)0,&p_1371->g_180,(void*)0,(void*)0,(void*)0,&p_1371->g_180,(void*)0,&p_1371->g_180,&p_1371->g_180}};
    uint8_t *l_191[6];
    VECTOR(int16_t, 16) l_193 = (VECTOR(int16_t, 16))((-4L), (VECTOR(int16_t, 4))((-4L), (VECTOR(int16_t, 2))((-4L), 0x59CAL), 0x59CAL), 0x59CAL, (-4L), 0x59CAL, (VECTOR(int16_t, 2))((-4L), 0x59CAL), (VECTOR(int16_t, 2))((-4L), 0x59CAL), (-4L), 0x59CAL, (-4L), 0x59CAL);
    VECTOR(int64_t, 4) l_208 = (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, 0L), 0L);
    int16_t *l_277 = (void*)0;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_191[i] = (void*)0;
    p_1371->g_145 ^= ((safe_mul_func_uint16_t_u_u((p_1371->g_61[1] && (~func_64((l_70 , l_71), func_72(p_53, func_76(l_71, (l_70.f0 , p_54), ((safe_rshift_func_uint16_t_u_s((FAKE_DIVERGE(p_1371->group_0_offset, get_group_id(0), 10) == (-1L)), p_1371->g_57)) , l_70.f0), p_1371), p_1371->g_61[0], p_1371), p_1371->g_106[5][0], p_54, l_108, p_1371))), 0x4CA4L)) , l_108.f0);
    atomic_xor(&p_1371->g_atomic_reduction[get_linear_group_id()], (((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((p_52 == ((VECTOR(uint64_t, 8))(abs(((VECTOR(int64_t, 8))(p_54, (((VECTOR(uint32_t, 4))(abs(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_150.s5dac)), (~((VECTOR(uint32_t, 4))(p_1371->g_151.s2537)).w), ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 8))(l_152.s53743424)), ((VECTOR(uint32_t, 16))(add_sat(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(0x711031FFL, 0UL, FAKE_DIVERGE(p_1371->local_0_offset, get_local_id(0), 10), ((VECTOR(uint32_t, 4))(p_1371->g_153.xxxy)), 5UL)).s5, ((VECTOR(uint32_t, 2))(p_1371->g_154.s04)), 0x5B7FBA01L, ((VECTOR(uint32_t, 2))(rotate(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 4))(l_155.yxxy)).ywyxwzxx)).s61, ((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(4294967295UL, 2UL)).xyyxxyxyyxxyyxxx)).even)).s62))), 1UL, 0x6C1CAB3FL)).s2216701071617065, ((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 2))(0x1608D42EL, 0x11EB18ADL)).even, ((VECTOR(uint32_t, 2))(0UL, 0x2B18A95BL)), 0xB5179305L, 0UL, ((VECTOR(uint32_t, 2))(add_sat(((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 8))((((+(p_54 <= p_1371->g_153.y)) != (safe_mod_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u(0x64DAL, (safe_mul_func_uint8_t_u_u(p_1371->g_57, ((l_162 == &l_163) == p_1371->g_91))))) | p_54), 0x18F9528EE746F835L))) != p_55), FAKE_DIVERGE(p_1371->group_2_offset, get_group_id(2), 10), p_52, p_54, 0UL, 0xC49BE158L, 4294967295UL, 0UL)).hi)).odd, ((VECTOR(uint32_t, 2))(0UL))))), 0x114BE7DEL, ((VECTOR(uint32_t, 2))(4294967295UL)), p_54, p_53, ((VECTOR(uint32_t, 2))(3UL)), 0xC53095ABL, 4294967292UL))))).lo, ((VECTOR(uint32_t, 8))(0xAE1465BAL))))).s71, ((VECTOR(uint32_t, 2))(0x4F43F576L))))), 0xA5245C12L)).even))).y > p_53), 0x1F8B52B2A35B8B2FL, ((VECTOR(int64_t, 2))(0x4E47DD8A53DBADB8L)), p_1371->g_145, 0x4EF63F154D3D32A3L, (-10L)))))).s0), 65532UL)), GROUP_DIVERGE(0, 1))) , l_70) , p_55) + get_linear_global_id());
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_1371->v_collective += p_1371->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))(rotate(((VECTOR(int32_t, 2))(0x6669E116L, 0x0FD52349L)).yyxy, ((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 16))(l_164.yyyyxyxyxxxxyyyx)).even, ((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 16))(l_165.s4755651560664036)), ((VECTOR(int32_t, 2))((-8L), 0x28A5CC78L)).yxyyxyyxxyyxyxyy))).hi))).s65, ((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 8))((!((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(p_1371->g_166.xy)), 6L, p_55, 0x653AFABAL, ((VECTOR(int32_t, 2))(p_1371->g_167.wx)), 1L)).s2003104642772216)).s1), ((VECTOR(int32_t, 4))((-1L), ((VECTOR(int32_t, 2))(min(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(l_168.s563b7ce2)).s01, ((VECTOR(int32_t, 2))(1L, 0x14C20FC5L))))).xyxy)).lo, (int32_t)(*p_1371->g_96)))), 0x179F2A66L)), 3L, (-1L), 0x6D19666DL)).s37, ((VECTOR(int32_t, 2))(safe_mad24_func_int32_t_s_s_s(VECTOR(int32_t, 2),((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(clz(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))((((((VECTOR(uint32_t, 4))(l_169.sc192)).z , p_1371->g_61[0]) || p_53) , (&p_1371->g_57 != ((*l_172) = (p_1371->g_171 = ((*l_170) = (void*)0))))), 9L, (-4L), (((p_1371->g_181[1][4] = ((0xA4DB2145L < (((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 16))((-3L), (p_1371->g_180 &= (safe_mod_func_uint32_t_u_u(p_53, (*p_1371->g_137)))), 0x3084L, (-1L), 0x1DBCL, ((VECTOR(int16_t, 2))(0x1D31L)), (-6L), p_55, ((VECTOR(int16_t, 2))(1L)), ((VECTOR(int16_t, 2))(0x47A8L)), ((VECTOR(int16_t, 2))(0x2C42L)), (-1L))).s17, ((VECTOR(int16_t, 2))(0x0D05L))))).odd ^ 1UL)) < p_54)) , GROUP_DIVERGE(1, 1)) & p_1371->g_61[0]), 0x58658CB6L, (*p_1371->g_103), 0x15A4DF93L, ((VECTOR(int32_t, 4))(0x1027B924L)), 0x1F024317L, 0x0529FFD0L, 1L, 0x371F549AL, 0x6DF55226L)).s7ba3))))))).lo, ((VECTOR(int32_t, 2))(1L))))))), ((VECTOR(int32_t, 2))(0x66016839L)), 0x45E243C7L, ((VECTOR(int32_t, 2))(0x5F84BDECL)), (-7L))).s36, ((VECTOR(int32_t, 2))(7L)), ((VECTOR(int32_t, 2))(0x6A6B90CAL))))), ((VECTOR(int32_t, 2))(0x67E2266FL))))), ((VECTOR(int32_t, 2))(0x33BD15AEL))))).yyxy))).even)).even)
    { /* block id: 51 */
        int64_t l_194 = 0x17930CD3334BC5BCL;
        for (p_1371->g_57 = (-6); (p_1371->g_57 < 23); p_1371->g_57 = safe_add_func_int16_t_s_s(p_1371->g_57, 1))
        { /* block id: 54 */
            uint8_t *l_189 = &p_1371->g_140;
            uint8_t **l_188 = &l_189;
            union U1 l_190 = {-9L};
            int32_t ***l_192 = &l_163;
            (*p_1371->g_103) ^= ((safe_sub_func_uint64_t_u_u((((((safe_mul_func_uint16_t_u_u(0UL, p_53)) || ((FAKE_DIVERGE(p_1371->group_2_offset, get_group_id(2), 10) == (((*l_188) = &p_1371->g_140) != (l_190 , l_191[1]))) < (l_192 != &l_163))) ^ ((p_55 , (((VECTOR(int16_t, 2))(l_193.s31)).hi != (!(((((l_194 = (0x3866L | 0xD46FL)) != l_190.f0) == p_1371->g_2[0][0][5]) , p_1371->g_142) >= l_190.f0)))) != 0x23EA1DF6L)) | 3L) && (-1L)), GROUP_DIVERGE(0, 1))) || p_53);
        }
    }
    else
    { /* block id: 59 */
        int8_t l_200[6][7] = {{0x29L,1L,1L,0x29L,(-9L),1L,1L},{0x29L,1L,1L,0x29L,(-9L),1L,1L},{0x29L,1L,1L,0x29L,(-9L),1L,1L},{0x29L,1L,1L,0x29L,(-9L),1L,1L},{0x29L,1L,1L,0x29L,(-9L),1L,1L},{0x29L,1L,1L,0x29L,(-9L),1L,1L}};
        VECTOR(int64_t, 16) l_238 = (VECTOR(int64_t, 16))(0x2F0F9C6D283DCE4DL, (VECTOR(int64_t, 4))(0x2F0F9C6D283DCE4DL, (VECTOR(int64_t, 2))(0x2F0F9C6D283DCE4DL, 0x185CDAED423E1309L), 0x185CDAED423E1309L), 0x185CDAED423E1309L, 0x2F0F9C6D283DCE4DL, 0x185CDAED423E1309L, (VECTOR(int64_t, 2))(0x2F0F9C6D283DCE4DL, 0x185CDAED423E1309L), (VECTOR(int64_t, 2))(0x2F0F9C6D283DCE4DL, 0x185CDAED423E1309L), 0x2F0F9C6D283DCE4DL, 0x185CDAED423E1309L, 0x2F0F9C6D283DCE4DL, 0x185CDAED423E1309L);
        union U0 l_252[5][9][3] = {{{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}}},{{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}}},{{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}}},{{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}}},{{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}},{{1UL},{0xA3B41BB8L},{0x809FFDF6L}}}};
        int32_t **l_259 = (void*)0;
        int64_t *l_264 = (void*)0;
        int64_t *l_265 = (void*)0;
        VECTOR(uint32_t, 16) l_272 = (VECTOR(uint32_t, 16))(0x562B396DL, (VECTOR(uint32_t, 4))(0x562B396DL, (VECTOR(uint32_t, 2))(0x562B396DL, 0UL), 0UL), 0UL, 0x562B396DL, 0UL, (VECTOR(uint32_t, 2))(0x562B396DL, 0UL), (VECTOR(uint32_t, 2))(0x562B396DL, 0UL), 0x562B396DL, 0UL, 0x562B396DL, 0UL);
        int i, j, k;
        for (p_1371->g_142 = 29; (p_1371->g_142 < 48); p_1371->g_142++)
        { /* block id: 62 */
            VECTOR(int32_t, 2) l_207 = (VECTOR(int32_t, 2))((-3L), (-1L));
            union U0 l_239 = {4294967295UL};
            VECTOR(uint16_t, 4) l_255 = (VECTOR(uint16_t, 4))(0x33B2L, (VECTOR(uint16_t, 2))(0x33B2L, 65528UL), 65528UL);
            VECTOR(uint32_t, 8) l_271 = (VECTOR(uint32_t, 8))(0x5DB9FDE8L, (VECTOR(uint32_t, 4))(0x5DB9FDE8L, (VECTOR(uint32_t, 2))(0x5DB9FDE8L, 0x1DAA83EEL), 0x1DAA83EEL), 0x1DAA83EEL, 0x5DB9FDE8L, 0x1DAA83EEL);
            int i;
            for (l_70.f1 = 0; (l_70.f1 == (-2)); --l_70.f1)
            { /* block id: 65 */
                VECTOR(int32_t, 8) l_199 = (VECTOR(int32_t, 8))(0x09A512CEL, (VECTOR(int32_t, 4))(0x09A512CEL, (VECTOR(int32_t, 2))(0x09A512CEL, 0x354AA0D5L), 0x354AA0D5L), 0x354AA0D5L, 0x09A512CEL, 0x354AA0D5L);
                int8_t *l_240 = &l_200[2][3];
                int i;
                l_200[2][3] = ((*p_1371->g_103) |= ((VECTOR(int32_t, 4))(l_199.s6323)).x);
                for (p_1371->g_91 = 0; (p_1371->g_91 <= (-12)); p_1371->g_91 = safe_sub_func_int8_t_s_s(p_1371->g_91, 1))
                { /* block id: 70 */
                    union U1 l_213 = {-2L};
                    int64_t *l_214 = (void*)0;
                    int64_t *l_215 = (void*)0;
                    int64_t *l_216 = (void*)0;
                    int64_t *l_217[2];
                    uint32_t *l_218 = &p_1371->g_57;
                    uint32_t *l_219 = &p_1371->g_107;
                    int8_t *l_244 = &p_1371->g_242;
                    int8_t **l_243 = &l_244;
                    VECTOR(uint16_t, 2) l_254 = (VECTOR(uint16_t, 2))(0xF265L, 0UL);
                    int i;
                    for (i = 0; i < 2; i++)
                        l_217[i] = (void*)0;
                    if ((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((((p_55 != (((VECTOR(int32_t, 16))(l_207.yxyyyxxxxyxxxyxy)).s0 && (p_52 , ((~((((p_1371->g_145 == ((((p_52 <= ((((VECTOR(int64_t, 16))(l_208.ywzxwwzwwwwyyxyx)).s0 <= ((((*l_219) ^= ((*l_218) |= (safe_mul_func_int16_t_s_s((p_1371->g_180 = (safe_add_func_int64_t_s_s((l_199.s6 = ((l_213 , (p_1371->g_89 , l_207.x)) >= 0x1D00878CAE2BCC02L)), p_1371->g_61[1]))), 0L)))) >= 0x02936B54L) || 252UL)) < p_1371->g_comm_values[p_1371->tid])) == p_52) && p_55) < FAKE_DIVERGE(p_1371->local_0_offset, get_local_id(0), 10))) || p_53) < p_1371->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1371->tid, 5))]) == p_1371->g_145)) >= (*p_1371->g_96))))) | 0UL) , l_200[2][3]), p_1371->g_153.y)) < 18446744073709551615UL), p_1371->g_181[1][4])))
                    { /* block id: 75 */
                        uint16_t l_220 = 65535UL;
                        uint16_t *l_226 = &p_1371->g_119[3][0];
                        int8_t *l_235 = &l_200[1][3];
                        (*p_1371->g_137) = ((((p_55 || (l_207.x , l_220)) == 0x410667F4L) , (GROUP_DIVERGE(2, 1) || (((safe_mul_func_int8_t_s_s((l_213.f0 ^ (safe_sub_func_uint64_t_u_u((safe_unary_minus_func_int32_t_s((((*l_226)--) ^ p_53))), ((0x289FCA13L <= (safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s(((safe_div_func_int8_t_s_s(((*l_235) = p_52), (p_1371->g_153.x ^ p_54))) || 0x79L), 255UL)), p_54))) , l_200[1][6])))), l_207.y)) , (void*)0) == &p_55))) ^ 2UL);
                    }
                    else
                    { /* block id: 79 */
                        if ((*p_1371->g_103))
                            break;
                        return p_1371->g_119[2][3];
                    }
                    (*p_1371->g_137) ^= (safe_mod_func_int64_t_s_s(((VECTOR(int64_t, 8))(hadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))(rotate(((VECTOR(int64_t, 2))(l_238.s15)).xxyx, ((VECTOR(int64_t, 4))(0x184FCC0D0A29FEBAL, (((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))((!p_54), 0x0972L, 0x7F01L, 2L)).yzyzzxywzyzyxwxx)).sc | (0x4AE5B25DL == ((p_1371->g_241 = (l_239 , l_240)) == ((*l_243) = &p_1371->g_242)))), 0x3D10398B69F1DDACL, 0x2958AF8EF0C7B75EL))))))).wyzwwyyywxzywwxy)).hi, ((VECTOR(int64_t, 8))(((*l_162) == ((safe_div_func_uint8_t_u_u((((VECTOR(uint64_t, 16))(p_1371->g_249.xxzyxyzxxwxzxwxy)).s9 | ((((safe_lshift_func_uint16_t_u_s((l_252[2][2][0] , ((VECTOR(uint16_t, 16))(rotate(((VECTOR(uint16_t, 8))(p_1371->g_253.yxyyyyyy)).s2650113572256302, ((VECTOR(uint16_t, 4))(min(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))(l_254.xyxyyxxxyyxyxyxx)).s9df7)).x, ((VECTOR(uint16_t, 2))(clz(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_255.wzzx)), ((VECTOR(uint16_t, 2))(p_1371->g_256.yz)), ((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))(p_1371->g_257.s1336)), 9UL, 1UL, 65530UL, 0x23E3L)))), 65529UL, 4UL)).s60))), ((VECTOR(uint16_t, 8))(p_1371->g_258.s72034121)), (1L > (((l_199.s0 = ((void*)0 == &p_1371->g_140)) , l_259) == (void*)0)), 65528UL, 65535UL, 1UL, 0x8A1AL)).hi)).s33)).yyxy, (uint16_t)0x54F0L))).zywzxzwzxzyzywzy))).s3), l_213.f0)) && p_52) <= p_54) <= 0xE2F24C83L)), 0x7DL)) , (void*)0)), ((VECTOR(int64_t, 2))((-1L))), ((VECTOR(int64_t, 2))((-4L))), 0x36E3102D01EE0013L, (-1L), 0x5943C458FCD6AC96L))))).s1, 0x380D1956DA36F619L));
                    (*p_1371->g_137) &= 8L;
                    (*p_1371->g_137) &= (65535UL != p_1371->g_258.s5);
                }
                (*p_1371->g_103) |= ((safe_rshift_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(254UL, 255UL, 255UL, 0x16L)).xzxxxzzy)).s7, 4)) ^ p_1371->g_2[0][0][5]);
            }
            for (l_239.f0 = 0; (l_239.f0 < 40); ++l_239.f0)
            { /* block id: 94 */
                return p_1371->g_153.y;
            }
            (*p_1371->g_137) = ((l_265 = l_264) != (((((VECTOR(uint64_t, 16))(safe_clamp_func(VECTOR(uint64_t, 16),uint64_t,((VECTOR(uint64_t, 2))(0xE3E87EE97CD6856DL, 0xBAC56A93AB14B003L)).yyyyyxyxxxyyyyxx, (uint64_t)l_207.x, (uint64_t)p_53))).sb , (p_1371->g_256.x > ((VECTOR(int16_t, 2))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 2),((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 4),((VECTOR(int16_t, 4))(p_1371->g_266.xxxx)), ((VECTOR(int16_t, 8))(add_sat(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0L, 1L)), 0x7E13L, 1L, l_252[2][2][0].f0, (safe_div_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(p_53, (p_1371->g_107 & (((VECTOR(uint32_t, 2))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 2),((VECTOR(uint32_t, 4))(safe_clamp_func(VECTOR(uint32_t, 4),VECTOR(uint32_t, 4),((VECTOR(uint32_t, 2))(3UL, 0x52D0BF3DL)).xxyx, ((VECTOR(uint32_t, 16))(l_271.s6774125716625514)).s1ddc, ((VECTOR(uint32_t, 2))(1UL, 0xB8610D7CL)).xyyx))).odd, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(0xC57C6EB2L, 0UL)))), ((VECTOR(uint32_t, 8))(rhadd(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(l_272.sf4b3a1eb)))), ((VECTOR(uint32_t, 8))(upsample(((VECTOR(uint16_t, 2))(mad_sat(((VECTOR(uint16_t, 2))(65535UL, 0x54CCL)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 16))((safe_add_func_uint8_t_u_u(((l_207.y = ((((VECTOR(uint64_t, 16))(0x7C8F7EC8016601FFL, ((((safe_mod_func_int64_t_s_s((((void*)0 == &p_1371->g_57) & (*p_1371->g_103)), 0x0BFA01428A198A81L)) == p_1371->g_154.s7) , 65535UL) , 5UL), p_53, 0xA53208077E916E1CL, ((VECTOR(uint64_t, 2))(0x208928BFD507D950L)), l_207.y, 18446744073709551614UL, 0xAA0E2BA8C676644AL, 1UL, 2UL, 1UL, 1UL, 0UL, 1UL, 0x1D4287C16215CE27L)).s1 || 18446744073709551611UL) , p_1371->g_2[5][3][5])) & p_1371->g_253.y), p_54)), ((VECTOR(uint16_t, 4))(65534UL)), ((VECTOR(uint16_t, 8))(0x0BD9L)), 65529UL, 0x6D2CL, 65535UL)).sdf70)).even, ((VECTOR(uint16_t, 2))(8UL))))).xxyxyyyx, ((VECTOR(uint16_t, 8))(0x851BL)))))))).s67))).even , p_1371->g_249.w)))), p_1371->g_142)), 0x5A0BL, p_1371->g_256.w, 0x702EL, ((VECTOR(int16_t, 2))(0x0340L)), l_272.sd, ((VECTOR(int16_t, 2))((-2L))), 1L, 0x669EL)))).hi, ((VECTOR(int16_t, 8))(0x2596L))))).hi, ((VECTOR(int16_t, 4))(0x3D96L))))).odd, ((VECTOR(int16_t, 2))(0L))))), ((VECTOR(int16_t, 8))(0L)), ((VECTOR(int16_t, 2))(0x267CL)), ((VECTOR(int16_t, 2))(0x41BDL)), 0x5A77L, (-10L))).sc2, ((VECTOR(int16_t, 2))(0x62F5L)), ((VECTOR(int16_t, 2))(0x2722L))))).hi)) <= p_1371->g_119[1][3]) , (void*)0));
            if ((*p_1371->g_137))
                continue;
        }
    }
    (*p_1371->g_137) |= (FAKE_DIVERGE(p_1371->group_0_offset, get_group_id(0), 10) , (((void*)0 == l_277) && p_1371->g_258.s3));
    return p_52;
}


/* ------------------------------------------ */
/* 
 * reads : p_1371->g_61 p_1371->g_2 p_1371->g_119 p_1371->g_131 p_1371->g_89 p_1371->g_91 p_1371->g_96 p_1371->g_107 p_1371->l_comm_values p_1371->g_142 p_1371->g_19 p_1371->g_140 p_1371->g_143
 * writes: p_1371->g_119 p_1371->g_89 p_1371->g_91 p_1371->g_103 p_1371->g_137 p_1371->g_140 p_1371->g_142 p_1371->g_143
 */
int16_t  func_64(uint32_t * p_65, int64_t  p_66, uint32_t * p_67, uint8_t  p_68, union U0  p_69, struct S2 * p_1371)
{ /* block id: 34 */
    union U1 l_113 = {0x74106BCBL};
    uint16_t *l_118 = &p_1371->g_119[3][0];
    int32_t l_130[7];
    int32_t **l_134 = &p_1371->g_103;
    int32_t *l_136 = (void*)0;
    int32_t **l_135[10][4][6] = {{{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136}},{{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136}},{{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136}},{{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136}},{{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136}},{{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136}},{{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136}},{{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136}},{{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136}},{{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136},{&l_136,&l_136,&l_136,&l_136,&l_136,&l_136}}};
    uint8_t *l_138 = (void*)0;
    uint8_t *l_139 = &p_1371->g_140;
    uint16_t *l_141 = &p_1371->g_142;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_130[i] = 0x76AC36B5L;
    (*p_1371->g_96) = (safe_lshift_func_uint8_t_u_s(p_1371->g_61[0], (safe_mod_func_uint16_t_u_u((p_1371->g_143 ^= (((p_1371->g_2[0][0][5] & ((VECTOR(uint16_t, 16))(((*l_141) &= (l_113 , (safe_sub_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_u(((((*l_118)--) <= ((safe_rshift_func_uint8_t_u_u((((*l_139) = (safe_sub_func_uint64_t_u_u((((safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u(1UL, (l_130[4] = l_113.f0))), ((p_1371->g_137 = ((*l_134) = func_76(p_67, p_66, (4294967293UL | (((l_113.f0 , p_1371->g_131) == &p_1371->g_132) == p_69.f0)), p_1371))) == &p_1371->g_2[0][0][5]))) > (-10L)) == FAKE_DIVERGE(p_1371->local_1_offset, get_local_id(1), 10)), p_66))) || 0L), p_69.f0)) | 65535UL)) , 0x36L), 4)) & p_66) | (*p_67)), p_1371->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1371->tid, 5))])))), 9UL, 0UL, 0xA0FFL, 65535UL, p_1371->g_19.y, 65526UL, p_66, p_1371->g_140, 0xA6FFL, ((VECTOR(uint16_t, 4))(0x49D8L)), 0x3250L, 0xF97CL)).s3) > p_1371->g_19.x) & p_1371->g_2[0][0][5])), p_68))));
    return p_1371->g_142;
}


/* ------------------------------------------ */
/* 
 * reads : p_1371->g_57 p_1371->g_96 p_1371->g_91
 * writes: p_1371->g_57 p_1371->g_103
 */
int64_t  func_72(uint64_t  p_73, int32_t * p_74, int32_t  p_75, struct S2 * p_1371)
{ /* block id: 23 */
    int32_t **l_98 = (void*)0;
    int32_t ***l_97 = &l_98;
    int32_t *l_101 = (void*)0;
    int32_t l_105[8][9] = {{0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL},{0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL},{0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL},{0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL},{0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL},{0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL},{0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL},{0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL,0x281BF5FEL,0L,0x281BF5FEL}};
    int i, j;
    (*l_97) = &p_74;
    for (p_1371->g_57 = 0; (p_1371->g_57 < 51); p_1371->g_57++)
    { /* block id: 27 */
        int32_t **l_102[9][8][3] = {{{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0}},{{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0}},{{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0}},{{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0}},{{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0}},{{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0}},{{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0}},{{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0}},{{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0},{&l_101,&l_101,(void*)0}}};
        VECTOR(int32_t, 16) l_104 = (VECTOR(int32_t, 16))(0x72F9EB2FL, (VECTOR(int32_t, 4))(0x72F9EB2FL, (VECTOR(int32_t, 2))(0x72F9EB2FL, (-5L)), (-5L)), (-5L), 0x72F9EB2FL, (-5L), (VECTOR(int32_t, 2))(0x72F9EB2FL, (-5L)), (VECTOR(int32_t, 2))(0x72F9EB2FL, (-5L)), 0x72F9EB2FL, (-5L), 0x72F9EB2FL, (-5L));
        int i, j, k;
        l_101 = (p_1371->g_103 = l_101);
        if ((*p_1371->g_96))
            continue;
        l_105[4][3] = ((VECTOR(int32_t, 2))(l_104.s8f)).lo;
    }
    return p_75;
}


/* ------------------------------------------ */
/* 
 * reads : p_1371->g_89 p_1371->g_91 p_1371->g_61 p_1371->g_95 p_1371->g_96
 * writes: p_1371->g_89 p_1371->g_91
 */
int32_t * func_76(uint32_t * p_77, uint16_t  p_78, uint8_t  p_79, struct S2 * p_1371)
{ /* block id: 11 */
    int32_t *l_92 = &p_1371->g_89;
    for (p_79 = 0; (p_79 != 44); p_79 = safe_add_func_uint32_t_u_u(p_79, 1))
    { /* block id: 14 */
        VECTOR(int8_t, 4) l_86 = (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x0FL), 0x0FL);
        int32_t *l_87 = (void*)0;
        int32_t *l_88 = &p_1371->g_89;
        int32_t *l_90 = &p_1371->g_91;
        int i;
        (*l_90) &= ((*l_88) &= (((safe_div_func_int16_t_s_s(p_78, 0x2A6BL)) > l_86.x) >= p_78));
        l_92 = p_77;
        if (p_1371->g_61[1])
            break;
        (*l_90) &= ((safe_div_func_uint32_t_u_u(p_1371->g_89, ((VECTOR(int32_t, 4))(p_1371->g_95.wzxz)).w)) , 0L);
    }
    (*p_1371->g_96) = p_79;
    return &p_1371->g_61[0];
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[63];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 63; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[63];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 63; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[5];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 5; i++)
            l_comm_values[i] = 1;
    struct S2 c_1372;
    struct S2* p_1371 = &c_1372;
    struct S2 c_1373 = {
        {{{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L}},{{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L}},{{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L}},{{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L}},{{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L}},{{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L},{0L,5L,(-1L),0L,(-9L),0x46773196L}}}, // p_1371->g_2
        (VECTOR(uint8_t, 2))(0xF3L, 0UL), // p_1371->g_19
        0UL, // p_1371->g_57
        {0x7014566FL,0x7014566FL}, // p_1371->g_61
        0x5A511998L, // p_1371->g_89
        0x06512359L, // p_1371->g_91
        (VECTOR(int32_t, 4))(0x7D047705L, (VECTOR(int32_t, 2))(0x7D047705L, (-1L)), (-1L)), // p_1371->g_95
        &p_1371->g_91, // p_1371->g_96
        &p_1371->g_91, // p_1371->g_103
        4294967295UL, // p_1371->g_107
        {{&p_1371->g_107},{&p_1371->g_107},{&p_1371->g_107},{&p_1371->g_107},{&p_1371->g_107},{&p_1371->g_107}}, // p_1371->g_106
        {{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL},{65535UL,65535UL,65535UL,65535UL,65535UL,65535UL}}, // p_1371->g_119
        {{(void*)0,&p_1371->g_61[1],(void*)0,&p_1371->g_61[0],&p_1371->g_61[1],(void*)0,&p_1371->g_61[0],&p_1371->g_61[0]},{(void*)0,&p_1371->g_61[1],(void*)0,&p_1371->g_61[0],&p_1371->g_61[1],(void*)0,&p_1371->g_61[0],&p_1371->g_61[0]},{(void*)0,&p_1371->g_61[1],(void*)0,&p_1371->g_61[0],&p_1371->g_61[1],(void*)0,&p_1371->g_61[0],&p_1371->g_61[0]},{(void*)0,&p_1371->g_61[1],(void*)0,&p_1371->g_61[0],&p_1371->g_61[1],(void*)0,&p_1371->g_61[0],&p_1371->g_61[0]},{(void*)0,&p_1371->g_61[1],(void*)0,&p_1371->g_61[0],&p_1371->g_61[1],(void*)0,&p_1371->g_61[0],&p_1371->g_61[0]}}, // p_1371->g_133
        &p_1371->g_133[1][2], // p_1371->g_132
        &p_1371->g_132, // p_1371->g_131
        &p_1371->g_89, // p_1371->g_137
        0xA8L, // p_1371->g_140
        0xB056L, // p_1371->g_142
        4294967286UL, // p_1371->g_143
        (-5L), // p_1371->g_145
        (VECTOR(uint32_t, 8))(0xCEF1D68DL, (VECTOR(uint32_t, 4))(0xCEF1D68DL, (VECTOR(uint32_t, 2))(0xCEF1D68DL, 0xC9C74A2BL), 0xC9C74A2BL), 0xC9C74A2BL, 0xCEF1D68DL, 0xC9C74A2BL), // p_1371->g_151
        (VECTOR(uint32_t, 2))(4294967287UL, 0xF8E12263L), // p_1371->g_153
        (VECTOR(uint32_t, 8))(0xAADDF2FAL, (VECTOR(uint32_t, 4))(0xAADDF2FAL, (VECTOR(uint32_t, 2))(0xAADDF2FAL, 4294967288UL), 4294967288UL), 4294967288UL, 0xAADDF2FAL, 4294967288UL), // p_1371->g_154
        (VECTOR(int32_t, 2))(0x3DD02602L, 0x639DAFC3L), // p_1371->g_166
        (VECTOR(int32_t, 4))((-10L), (VECTOR(int32_t, 2))((-10L), 1L), 1L), // p_1371->g_167
        (void*)0, // p_1371->g_171
        0x3510L, // p_1371->g_180
        {{7UL,0x5CB6CCD2L,7UL,7UL,0x5CB6CCD2L},{7UL,0x5CB6CCD2L,7UL,7UL,0x5CB6CCD2L},{7UL,0x5CB6CCD2L,7UL,7UL,0x5CB6CCD2L},{7UL,0x5CB6CCD2L,7UL,7UL,0x5CB6CCD2L}}, // p_1371->g_181
        (-1L), // p_1371->g_242
        &p_1371->g_242, // p_1371->g_241
        (VECTOR(uint64_t, 4))(8UL, (VECTOR(uint64_t, 2))(8UL, 0xB42A1A4B1E32FE72L), 0xB42A1A4B1E32FE72L), // p_1371->g_249
        (VECTOR(uint16_t, 2))(7UL, 0UL), // p_1371->g_253
        (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xC08BL), 0xC08BL), // p_1371->g_256
        (VECTOR(uint16_t, 8))(4UL, (VECTOR(uint16_t, 4))(4UL, (VECTOR(uint16_t, 2))(4UL, 1UL), 1UL), 1UL, 4UL, 1UL), // p_1371->g_257
        (VECTOR(uint16_t, 8))(65527UL, (VECTOR(uint16_t, 4))(65527UL, (VECTOR(uint16_t, 2))(65527UL, 65535UL), 65535UL), 65535UL, 65527UL, 65535UL), // p_1371->g_258
        (VECTOR(int16_t, 2))((-1L), 0x19E6L), // p_1371->g_266
        &p_1371->g_137, // p_1371->g_280
        &p_1371->g_145, // p_1371->g_555
        (VECTOR(uint32_t, 4))(0x08109167L, (VECTOR(uint32_t, 2))(0x08109167L, 1UL), 1UL), // p_1371->g_566
        {{{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}}},{{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}}},{{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}}},{{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}}},{{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}}},{{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}}},{{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}}},{{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}}},{{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}},{{0x92567DFCL},{0x717BC126L},{4294967295UL}}}}, // p_1371->g_576
        (VECTOR(uint32_t, 16))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x77ADBCF5L), 0x77ADBCF5L), 0x77ADBCF5L, 4294967295UL, 0x77ADBCF5L, (VECTOR(uint32_t, 2))(4294967295UL, 0x77ADBCF5L), (VECTOR(uint32_t, 2))(4294967295UL, 0x77ADBCF5L), 4294967295UL, 0x77ADBCF5L, 4294967295UL, 0x77ADBCF5L), // p_1371->g_588
        (VECTOR(uint8_t, 2))(0x27L, 1UL), // p_1371->g_648
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0UL), 0UL), 0UL, 255UL, 0UL), // p_1371->g_649
        (VECTOR(uint16_t, 2))(65535UL, 1UL), // p_1371->g_653
        1UL, // p_1371->g_666
        {{0xC512C45F55DB5BFAL,0xC512C45F55DB5BFAL},{0xC512C45F55DB5BFAL,0xC512C45F55DB5BFAL},{0xC512C45F55DB5BFAL,0xC512C45F55DB5BFAL},{0xC512C45F55DB5BFAL,0xC512C45F55DB5BFAL},{0xC512C45F55DB5BFAL,0xC512C45F55DB5BFAL},{0xC512C45F55DB5BFAL,0xC512C45F55DB5BFAL},{0xC512C45F55DB5BFAL,0xC512C45F55DB5BFAL}}, // p_1371->g_692
        1UL, // p_1371->g_701
        (void*)0, // p_1371->g_709
        &p_1371->g_709, // p_1371->g_708
        (VECTOR(uint64_t, 2))(18446744073709551610UL, 18446744073709551615UL), // p_1371->g_761
        &p_1371->g_133[2][6], // p_1371->g_767
        0x4905EA00CA2DA2C3L, // p_1371->g_770
        (VECTOR(int32_t, 8))((-6L), (VECTOR(int32_t, 4))((-6L), (VECTOR(int32_t, 2))((-6L), 1L), 1L), 1L, (-6L), 1L), // p_1371->g_780
        (VECTOR(int8_t, 2))(0x07L, 0x27L), // p_1371->g_808
        (VECTOR(int8_t, 2))(5L, 7L), // p_1371->g_848
        (VECTOR(int8_t, 4))((-1L), (VECTOR(int8_t, 2))((-1L), 1L), 1L), // p_1371->g_852
        (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x10L), 0x10L), // p_1371->g_864
        (VECTOR(int32_t, 2))(1L, 6L), // p_1371->g_882
        (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), (-1L)), (-1L)), (-1L), (-1L), (-1L)), // p_1371->g_884
        (VECTOR(int64_t, 16))(1L, (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, (-7L)), (-7L)), (-7L), 1L, (-7L), (VECTOR(int64_t, 2))(1L, (-7L)), (VECTOR(int64_t, 2))(1L, (-7L)), 1L, (-7L), 1L, (-7L)), // p_1371->g_886
        (VECTOR(int64_t, 16))(0x2DFF584B3DB38221L, (VECTOR(int64_t, 4))(0x2DFF584B3DB38221L, (VECTOR(int64_t, 2))(0x2DFF584B3DB38221L, 3L), 3L), 3L, 0x2DFF584B3DB38221L, 3L, (VECTOR(int64_t, 2))(0x2DFF584B3DB38221L, 3L), (VECTOR(int64_t, 2))(0x2DFF584B3DB38221L, 3L), 0x2DFF584B3DB38221L, 3L, 0x2DFF584B3DB38221L, 3L), // p_1371->g_888
        (VECTOR(int64_t, 2))((-1L), 0x47737EF0D1B25851L), // p_1371->g_889
        (VECTOR(int32_t, 2))((-1L), 0x254184F3L), // p_1371->g_890
        (VECTOR(int64_t, 4))(0x3839FC38C08A8438L, (VECTOR(int64_t, 2))(0x3839FC38C08A8438L, 1L), 1L), // p_1371->g_891
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 2L), 2L), // p_1371->g_894
        (VECTOR(int64_t, 4))(0L, (VECTOR(int64_t, 2))(0L, (-1L)), (-1L)), // p_1371->g_896
        (VECTOR(uint8_t, 16))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 0xCCL), 0xCCL), 0xCCL, 255UL, 0xCCL, (VECTOR(uint8_t, 2))(255UL, 0xCCL), (VECTOR(uint8_t, 2))(255UL, 0xCCL), 255UL, 0xCCL, 255UL, 0xCCL), // p_1371->g_907
        (VECTOR(int64_t, 16))(0x00FCFD2A94B96823L, (VECTOR(int64_t, 4))(0x00FCFD2A94B96823L, (VECTOR(int64_t, 2))(0x00FCFD2A94B96823L, 0x304937E180EF5819L), 0x304937E180EF5819L), 0x304937E180EF5819L, 0x00FCFD2A94B96823L, 0x304937E180EF5819L, (VECTOR(int64_t, 2))(0x00FCFD2A94B96823L, 0x304937E180EF5819L), (VECTOR(int64_t, 2))(0x00FCFD2A94B96823L, 0x304937E180EF5819L), 0x00FCFD2A94B96823L, 0x304937E180EF5819L, 0x00FCFD2A94B96823L, 0x304937E180EF5819L), // p_1371->g_940
        {0x7C2FA300L}, // p_1371->g_944
        &p_1371->g_137, // p_1371->g_946
        (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 5UL), 5UL), // p_1371->g_961
        0xB91DAC97884B910EL, // p_1371->g_970
        (VECTOR(int32_t, 2))((-1L), 0x621B3BBAL), // p_1371->g_991
        (VECTOR(uint32_t, 16))(0x309E6BD4L, (VECTOR(uint32_t, 4))(0x309E6BD4L, (VECTOR(uint32_t, 2))(0x309E6BD4L, 0UL), 0UL), 0UL, 0x309E6BD4L, 0UL, (VECTOR(uint32_t, 2))(0x309E6BD4L, 0UL), (VECTOR(uint32_t, 2))(0x309E6BD4L, 0UL), 0x309E6BD4L, 0UL, 0x309E6BD4L, 0UL), // p_1371->g_1001
        (VECTOR(uint64_t, 8))(0UL, (VECTOR(uint64_t, 4))(0UL, (VECTOR(uint64_t, 2))(0UL, 0xD47A3ECD864E684DL), 0xD47A3ECD864E684DL), 0xD47A3ECD864E684DL, 0UL, 0xD47A3ECD864E684DL), // p_1371->g_1032
        &p_1371->g_89, // p_1371->g_1295
        &p_1371->g_137, // p_1371->g_1299
        {{{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL}},{{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL}},{{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL}},{{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL}},{{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL}},{{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL}},{{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL}},{{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL},{0x34BEL}}}, // p_1371->g_1314
        (VECTOR(uint8_t, 8))(0xDEL, (VECTOR(uint8_t, 4))(0xDEL, (VECTOR(uint8_t, 2))(0xDEL, 0x1EL), 0x1EL), 0x1EL, 0xDEL, 0x1EL), // p_1371->g_1346
        (VECTOR(uint8_t, 2))(8UL, 0x41L), // p_1371->g_1347
        {0UL,0UL,0UL,0UL,0UL,0UL}, // p_1371->g_1362
        0, // p_1371->v_collective
        sequence_input[get_global_id(0)], // p_1371->global_0_offset
        sequence_input[get_global_id(1)], // p_1371->global_1_offset
        sequence_input[get_global_id(2)], // p_1371->global_2_offset
        sequence_input[get_local_id(0)], // p_1371->local_0_offset
        sequence_input[get_local_id(1)], // p_1371->local_1_offset
        sequence_input[get_local_id(2)], // p_1371->local_2_offset
        sequence_input[get_group_id(0)], // p_1371->group_0_offset
        sequence_input[get_group_id(1)], // p_1371->group_1_offset
        sequence_input[get_group_id(2)], // p_1371->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 5)), permutations[0][get_linear_local_id()])), // p_1371->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1372 = c_1373;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1371);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_1371->g_2[i][j][k], "p_1371->g_2[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1371->g_19.x, "p_1371->g_19.x", print_hash_value);
    transparent_crc(p_1371->g_19.y, "p_1371->g_19.y", print_hash_value);
    transparent_crc(p_1371->g_57, "p_1371->g_57", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_1371->g_61[i], "p_1371->g_61[i]", print_hash_value);

    }
    transparent_crc(p_1371->g_89, "p_1371->g_89", print_hash_value);
    transparent_crc(p_1371->g_91, "p_1371->g_91", print_hash_value);
    transparent_crc(p_1371->g_95.x, "p_1371->g_95.x", print_hash_value);
    transparent_crc(p_1371->g_95.y, "p_1371->g_95.y", print_hash_value);
    transparent_crc(p_1371->g_95.z, "p_1371->g_95.z", print_hash_value);
    transparent_crc(p_1371->g_95.w, "p_1371->g_95.w", print_hash_value);
    transparent_crc(p_1371->g_107, "p_1371->g_107", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_1371->g_119[i][j], "p_1371->g_119[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1371->g_140, "p_1371->g_140", print_hash_value);
    transparent_crc(p_1371->g_142, "p_1371->g_142", print_hash_value);
    transparent_crc(p_1371->g_143, "p_1371->g_143", print_hash_value);
    transparent_crc(p_1371->g_145, "p_1371->g_145", print_hash_value);
    transparent_crc(p_1371->g_151.s0, "p_1371->g_151.s0", print_hash_value);
    transparent_crc(p_1371->g_151.s1, "p_1371->g_151.s1", print_hash_value);
    transparent_crc(p_1371->g_151.s2, "p_1371->g_151.s2", print_hash_value);
    transparent_crc(p_1371->g_151.s3, "p_1371->g_151.s3", print_hash_value);
    transparent_crc(p_1371->g_151.s4, "p_1371->g_151.s4", print_hash_value);
    transparent_crc(p_1371->g_151.s5, "p_1371->g_151.s5", print_hash_value);
    transparent_crc(p_1371->g_151.s6, "p_1371->g_151.s6", print_hash_value);
    transparent_crc(p_1371->g_151.s7, "p_1371->g_151.s7", print_hash_value);
    transparent_crc(p_1371->g_153.x, "p_1371->g_153.x", print_hash_value);
    transparent_crc(p_1371->g_153.y, "p_1371->g_153.y", print_hash_value);
    transparent_crc(p_1371->g_154.s0, "p_1371->g_154.s0", print_hash_value);
    transparent_crc(p_1371->g_154.s1, "p_1371->g_154.s1", print_hash_value);
    transparent_crc(p_1371->g_154.s2, "p_1371->g_154.s2", print_hash_value);
    transparent_crc(p_1371->g_154.s3, "p_1371->g_154.s3", print_hash_value);
    transparent_crc(p_1371->g_154.s4, "p_1371->g_154.s4", print_hash_value);
    transparent_crc(p_1371->g_154.s5, "p_1371->g_154.s5", print_hash_value);
    transparent_crc(p_1371->g_154.s6, "p_1371->g_154.s6", print_hash_value);
    transparent_crc(p_1371->g_154.s7, "p_1371->g_154.s7", print_hash_value);
    transparent_crc(p_1371->g_166.x, "p_1371->g_166.x", print_hash_value);
    transparent_crc(p_1371->g_166.y, "p_1371->g_166.y", print_hash_value);
    transparent_crc(p_1371->g_167.x, "p_1371->g_167.x", print_hash_value);
    transparent_crc(p_1371->g_167.y, "p_1371->g_167.y", print_hash_value);
    transparent_crc(p_1371->g_167.z, "p_1371->g_167.z", print_hash_value);
    transparent_crc(p_1371->g_167.w, "p_1371->g_167.w", print_hash_value);
    transparent_crc(p_1371->g_180, "p_1371->g_180", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1371->g_181[i][j], "p_1371->g_181[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1371->g_242, "p_1371->g_242", print_hash_value);
    transparent_crc(p_1371->g_249.x, "p_1371->g_249.x", print_hash_value);
    transparent_crc(p_1371->g_249.y, "p_1371->g_249.y", print_hash_value);
    transparent_crc(p_1371->g_249.z, "p_1371->g_249.z", print_hash_value);
    transparent_crc(p_1371->g_249.w, "p_1371->g_249.w", print_hash_value);
    transparent_crc(p_1371->g_253.x, "p_1371->g_253.x", print_hash_value);
    transparent_crc(p_1371->g_253.y, "p_1371->g_253.y", print_hash_value);
    transparent_crc(p_1371->g_256.x, "p_1371->g_256.x", print_hash_value);
    transparent_crc(p_1371->g_256.y, "p_1371->g_256.y", print_hash_value);
    transparent_crc(p_1371->g_256.z, "p_1371->g_256.z", print_hash_value);
    transparent_crc(p_1371->g_256.w, "p_1371->g_256.w", print_hash_value);
    transparent_crc(p_1371->g_257.s0, "p_1371->g_257.s0", print_hash_value);
    transparent_crc(p_1371->g_257.s1, "p_1371->g_257.s1", print_hash_value);
    transparent_crc(p_1371->g_257.s2, "p_1371->g_257.s2", print_hash_value);
    transparent_crc(p_1371->g_257.s3, "p_1371->g_257.s3", print_hash_value);
    transparent_crc(p_1371->g_257.s4, "p_1371->g_257.s4", print_hash_value);
    transparent_crc(p_1371->g_257.s5, "p_1371->g_257.s5", print_hash_value);
    transparent_crc(p_1371->g_257.s6, "p_1371->g_257.s6", print_hash_value);
    transparent_crc(p_1371->g_257.s7, "p_1371->g_257.s7", print_hash_value);
    transparent_crc(p_1371->g_258.s0, "p_1371->g_258.s0", print_hash_value);
    transparent_crc(p_1371->g_258.s1, "p_1371->g_258.s1", print_hash_value);
    transparent_crc(p_1371->g_258.s2, "p_1371->g_258.s2", print_hash_value);
    transparent_crc(p_1371->g_258.s3, "p_1371->g_258.s3", print_hash_value);
    transparent_crc(p_1371->g_258.s4, "p_1371->g_258.s4", print_hash_value);
    transparent_crc(p_1371->g_258.s5, "p_1371->g_258.s5", print_hash_value);
    transparent_crc(p_1371->g_258.s6, "p_1371->g_258.s6", print_hash_value);
    transparent_crc(p_1371->g_258.s7, "p_1371->g_258.s7", print_hash_value);
    transparent_crc(p_1371->g_266.x, "p_1371->g_266.x", print_hash_value);
    transparent_crc(p_1371->g_266.y, "p_1371->g_266.y", print_hash_value);
    transparent_crc(p_1371->g_566.x, "p_1371->g_566.x", print_hash_value);
    transparent_crc(p_1371->g_566.y, "p_1371->g_566.y", print_hash_value);
    transparent_crc(p_1371->g_566.z, "p_1371->g_566.z", print_hash_value);
    transparent_crc(p_1371->g_566.w, "p_1371->g_566.w", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(p_1371->g_576[i][j][k].f0, "p_1371->g_576[i][j][k].f0", print_hash_value);

            }
        }
    }
    transparent_crc(p_1371->g_588.s0, "p_1371->g_588.s0", print_hash_value);
    transparent_crc(p_1371->g_588.s1, "p_1371->g_588.s1", print_hash_value);
    transparent_crc(p_1371->g_588.s2, "p_1371->g_588.s2", print_hash_value);
    transparent_crc(p_1371->g_588.s3, "p_1371->g_588.s3", print_hash_value);
    transparent_crc(p_1371->g_588.s4, "p_1371->g_588.s4", print_hash_value);
    transparent_crc(p_1371->g_588.s5, "p_1371->g_588.s5", print_hash_value);
    transparent_crc(p_1371->g_588.s6, "p_1371->g_588.s6", print_hash_value);
    transparent_crc(p_1371->g_588.s7, "p_1371->g_588.s7", print_hash_value);
    transparent_crc(p_1371->g_588.s8, "p_1371->g_588.s8", print_hash_value);
    transparent_crc(p_1371->g_588.s9, "p_1371->g_588.s9", print_hash_value);
    transparent_crc(p_1371->g_588.sa, "p_1371->g_588.sa", print_hash_value);
    transparent_crc(p_1371->g_588.sb, "p_1371->g_588.sb", print_hash_value);
    transparent_crc(p_1371->g_588.sc, "p_1371->g_588.sc", print_hash_value);
    transparent_crc(p_1371->g_588.sd, "p_1371->g_588.sd", print_hash_value);
    transparent_crc(p_1371->g_588.se, "p_1371->g_588.se", print_hash_value);
    transparent_crc(p_1371->g_588.sf, "p_1371->g_588.sf", print_hash_value);
    transparent_crc(p_1371->g_648.x, "p_1371->g_648.x", print_hash_value);
    transparent_crc(p_1371->g_648.y, "p_1371->g_648.y", print_hash_value);
    transparent_crc(p_1371->g_649.s0, "p_1371->g_649.s0", print_hash_value);
    transparent_crc(p_1371->g_649.s1, "p_1371->g_649.s1", print_hash_value);
    transparent_crc(p_1371->g_649.s2, "p_1371->g_649.s2", print_hash_value);
    transparent_crc(p_1371->g_649.s3, "p_1371->g_649.s3", print_hash_value);
    transparent_crc(p_1371->g_649.s4, "p_1371->g_649.s4", print_hash_value);
    transparent_crc(p_1371->g_649.s5, "p_1371->g_649.s5", print_hash_value);
    transparent_crc(p_1371->g_649.s6, "p_1371->g_649.s6", print_hash_value);
    transparent_crc(p_1371->g_649.s7, "p_1371->g_649.s7", print_hash_value);
    transparent_crc(p_1371->g_653.x, "p_1371->g_653.x", print_hash_value);
    transparent_crc(p_1371->g_653.y, "p_1371->g_653.y", print_hash_value);
    transparent_crc(p_1371->g_666, "p_1371->g_666", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1371->g_692[i][j], "p_1371->g_692[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1371->g_701, "p_1371->g_701", print_hash_value);
    transparent_crc(p_1371->g_761.x, "p_1371->g_761.x", print_hash_value);
    transparent_crc(p_1371->g_761.y, "p_1371->g_761.y", print_hash_value);
    transparent_crc(p_1371->g_770, "p_1371->g_770", print_hash_value);
    transparent_crc(p_1371->g_780.s0, "p_1371->g_780.s0", print_hash_value);
    transparent_crc(p_1371->g_780.s1, "p_1371->g_780.s1", print_hash_value);
    transparent_crc(p_1371->g_780.s2, "p_1371->g_780.s2", print_hash_value);
    transparent_crc(p_1371->g_780.s3, "p_1371->g_780.s3", print_hash_value);
    transparent_crc(p_1371->g_780.s4, "p_1371->g_780.s4", print_hash_value);
    transparent_crc(p_1371->g_780.s5, "p_1371->g_780.s5", print_hash_value);
    transparent_crc(p_1371->g_780.s6, "p_1371->g_780.s6", print_hash_value);
    transparent_crc(p_1371->g_780.s7, "p_1371->g_780.s7", print_hash_value);
    transparent_crc(p_1371->g_808.x, "p_1371->g_808.x", print_hash_value);
    transparent_crc(p_1371->g_808.y, "p_1371->g_808.y", print_hash_value);
    transparent_crc(p_1371->g_848.x, "p_1371->g_848.x", print_hash_value);
    transparent_crc(p_1371->g_848.y, "p_1371->g_848.y", print_hash_value);
    transparent_crc(p_1371->g_852.x, "p_1371->g_852.x", print_hash_value);
    transparent_crc(p_1371->g_852.y, "p_1371->g_852.y", print_hash_value);
    transparent_crc(p_1371->g_852.z, "p_1371->g_852.z", print_hash_value);
    transparent_crc(p_1371->g_852.w, "p_1371->g_852.w", print_hash_value);
    transparent_crc(p_1371->g_864.x, "p_1371->g_864.x", print_hash_value);
    transparent_crc(p_1371->g_864.y, "p_1371->g_864.y", print_hash_value);
    transparent_crc(p_1371->g_864.z, "p_1371->g_864.z", print_hash_value);
    transparent_crc(p_1371->g_864.w, "p_1371->g_864.w", print_hash_value);
    transparent_crc(p_1371->g_882.x, "p_1371->g_882.x", print_hash_value);
    transparent_crc(p_1371->g_882.y, "p_1371->g_882.y", print_hash_value);
    transparent_crc(p_1371->g_884.s0, "p_1371->g_884.s0", print_hash_value);
    transparent_crc(p_1371->g_884.s1, "p_1371->g_884.s1", print_hash_value);
    transparent_crc(p_1371->g_884.s2, "p_1371->g_884.s2", print_hash_value);
    transparent_crc(p_1371->g_884.s3, "p_1371->g_884.s3", print_hash_value);
    transparent_crc(p_1371->g_884.s4, "p_1371->g_884.s4", print_hash_value);
    transparent_crc(p_1371->g_884.s5, "p_1371->g_884.s5", print_hash_value);
    transparent_crc(p_1371->g_884.s6, "p_1371->g_884.s6", print_hash_value);
    transparent_crc(p_1371->g_884.s7, "p_1371->g_884.s7", print_hash_value);
    transparent_crc(p_1371->g_886.s0, "p_1371->g_886.s0", print_hash_value);
    transparent_crc(p_1371->g_886.s1, "p_1371->g_886.s1", print_hash_value);
    transparent_crc(p_1371->g_886.s2, "p_1371->g_886.s2", print_hash_value);
    transparent_crc(p_1371->g_886.s3, "p_1371->g_886.s3", print_hash_value);
    transparent_crc(p_1371->g_886.s4, "p_1371->g_886.s4", print_hash_value);
    transparent_crc(p_1371->g_886.s5, "p_1371->g_886.s5", print_hash_value);
    transparent_crc(p_1371->g_886.s6, "p_1371->g_886.s6", print_hash_value);
    transparent_crc(p_1371->g_886.s7, "p_1371->g_886.s7", print_hash_value);
    transparent_crc(p_1371->g_886.s8, "p_1371->g_886.s8", print_hash_value);
    transparent_crc(p_1371->g_886.s9, "p_1371->g_886.s9", print_hash_value);
    transparent_crc(p_1371->g_886.sa, "p_1371->g_886.sa", print_hash_value);
    transparent_crc(p_1371->g_886.sb, "p_1371->g_886.sb", print_hash_value);
    transparent_crc(p_1371->g_886.sc, "p_1371->g_886.sc", print_hash_value);
    transparent_crc(p_1371->g_886.sd, "p_1371->g_886.sd", print_hash_value);
    transparent_crc(p_1371->g_886.se, "p_1371->g_886.se", print_hash_value);
    transparent_crc(p_1371->g_886.sf, "p_1371->g_886.sf", print_hash_value);
    transparent_crc(p_1371->g_888.s0, "p_1371->g_888.s0", print_hash_value);
    transparent_crc(p_1371->g_888.s1, "p_1371->g_888.s1", print_hash_value);
    transparent_crc(p_1371->g_888.s2, "p_1371->g_888.s2", print_hash_value);
    transparent_crc(p_1371->g_888.s3, "p_1371->g_888.s3", print_hash_value);
    transparent_crc(p_1371->g_888.s4, "p_1371->g_888.s4", print_hash_value);
    transparent_crc(p_1371->g_888.s5, "p_1371->g_888.s5", print_hash_value);
    transparent_crc(p_1371->g_888.s6, "p_1371->g_888.s6", print_hash_value);
    transparent_crc(p_1371->g_888.s7, "p_1371->g_888.s7", print_hash_value);
    transparent_crc(p_1371->g_888.s8, "p_1371->g_888.s8", print_hash_value);
    transparent_crc(p_1371->g_888.s9, "p_1371->g_888.s9", print_hash_value);
    transparent_crc(p_1371->g_888.sa, "p_1371->g_888.sa", print_hash_value);
    transparent_crc(p_1371->g_888.sb, "p_1371->g_888.sb", print_hash_value);
    transparent_crc(p_1371->g_888.sc, "p_1371->g_888.sc", print_hash_value);
    transparent_crc(p_1371->g_888.sd, "p_1371->g_888.sd", print_hash_value);
    transparent_crc(p_1371->g_888.se, "p_1371->g_888.se", print_hash_value);
    transparent_crc(p_1371->g_888.sf, "p_1371->g_888.sf", print_hash_value);
    transparent_crc(p_1371->g_889.x, "p_1371->g_889.x", print_hash_value);
    transparent_crc(p_1371->g_889.y, "p_1371->g_889.y", print_hash_value);
    transparent_crc(p_1371->g_890.x, "p_1371->g_890.x", print_hash_value);
    transparent_crc(p_1371->g_890.y, "p_1371->g_890.y", print_hash_value);
    transparent_crc(p_1371->g_891.x, "p_1371->g_891.x", print_hash_value);
    transparent_crc(p_1371->g_891.y, "p_1371->g_891.y", print_hash_value);
    transparent_crc(p_1371->g_891.z, "p_1371->g_891.z", print_hash_value);
    transparent_crc(p_1371->g_891.w, "p_1371->g_891.w", print_hash_value);
    transparent_crc(p_1371->g_894.x, "p_1371->g_894.x", print_hash_value);
    transparent_crc(p_1371->g_894.y, "p_1371->g_894.y", print_hash_value);
    transparent_crc(p_1371->g_894.z, "p_1371->g_894.z", print_hash_value);
    transparent_crc(p_1371->g_894.w, "p_1371->g_894.w", print_hash_value);
    transparent_crc(p_1371->g_896.x, "p_1371->g_896.x", print_hash_value);
    transparent_crc(p_1371->g_896.y, "p_1371->g_896.y", print_hash_value);
    transparent_crc(p_1371->g_896.z, "p_1371->g_896.z", print_hash_value);
    transparent_crc(p_1371->g_896.w, "p_1371->g_896.w", print_hash_value);
    transparent_crc(p_1371->g_907.s0, "p_1371->g_907.s0", print_hash_value);
    transparent_crc(p_1371->g_907.s1, "p_1371->g_907.s1", print_hash_value);
    transparent_crc(p_1371->g_907.s2, "p_1371->g_907.s2", print_hash_value);
    transparent_crc(p_1371->g_907.s3, "p_1371->g_907.s3", print_hash_value);
    transparent_crc(p_1371->g_907.s4, "p_1371->g_907.s4", print_hash_value);
    transparent_crc(p_1371->g_907.s5, "p_1371->g_907.s5", print_hash_value);
    transparent_crc(p_1371->g_907.s6, "p_1371->g_907.s6", print_hash_value);
    transparent_crc(p_1371->g_907.s7, "p_1371->g_907.s7", print_hash_value);
    transparent_crc(p_1371->g_907.s8, "p_1371->g_907.s8", print_hash_value);
    transparent_crc(p_1371->g_907.s9, "p_1371->g_907.s9", print_hash_value);
    transparent_crc(p_1371->g_907.sa, "p_1371->g_907.sa", print_hash_value);
    transparent_crc(p_1371->g_907.sb, "p_1371->g_907.sb", print_hash_value);
    transparent_crc(p_1371->g_907.sc, "p_1371->g_907.sc", print_hash_value);
    transparent_crc(p_1371->g_907.sd, "p_1371->g_907.sd", print_hash_value);
    transparent_crc(p_1371->g_907.se, "p_1371->g_907.se", print_hash_value);
    transparent_crc(p_1371->g_907.sf, "p_1371->g_907.sf", print_hash_value);
    transparent_crc(p_1371->g_940.s0, "p_1371->g_940.s0", print_hash_value);
    transparent_crc(p_1371->g_940.s1, "p_1371->g_940.s1", print_hash_value);
    transparent_crc(p_1371->g_940.s2, "p_1371->g_940.s2", print_hash_value);
    transparent_crc(p_1371->g_940.s3, "p_1371->g_940.s3", print_hash_value);
    transparent_crc(p_1371->g_940.s4, "p_1371->g_940.s4", print_hash_value);
    transparent_crc(p_1371->g_940.s5, "p_1371->g_940.s5", print_hash_value);
    transparent_crc(p_1371->g_940.s6, "p_1371->g_940.s6", print_hash_value);
    transparent_crc(p_1371->g_940.s7, "p_1371->g_940.s7", print_hash_value);
    transparent_crc(p_1371->g_940.s8, "p_1371->g_940.s8", print_hash_value);
    transparent_crc(p_1371->g_940.s9, "p_1371->g_940.s9", print_hash_value);
    transparent_crc(p_1371->g_940.sa, "p_1371->g_940.sa", print_hash_value);
    transparent_crc(p_1371->g_940.sb, "p_1371->g_940.sb", print_hash_value);
    transparent_crc(p_1371->g_940.sc, "p_1371->g_940.sc", print_hash_value);
    transparent_crc(p_1371->g_940.sd, "p_1371->g_940.sd", print_hash_value);
    transparent_crc(p_1371->g_940.se, "p_1371->g_940.se", print_hash_value);
    transparent_crc(p_1371->g_940.sf, "p_1371->g_940.sf", print_hash_value);
    transparent_crc(p_1371->g_961.x, "p_1371->g_961.x", print_hash_value);
    transparent_crc(p_1371->g_961.y, "p_1371->g_961.y", print_hash_value);
    transparent_crc(p_1371->g_961.z, "p_1371->g_961.z", print_hash_value);
    transparent_crc(p_1371->g_961.w, "p_1371->g_961.w", print_hash_value);
    transparent_crc(p_1371->g_970, "p_1371->g_970", print_hash_value);
    transparent_crc(p_1371->g_991.x, "p_1371->g_991.x", print_hash_value);
    transparent_crc(p_1371->g_991.y, "p_1371->g_991.y", print_hash_value);
    transparent_crc(p_1371->g_1001.s0, "p_1371->g_1001.s0", print_hash_value);
    transparent_crc(p_1371->g_1001.s1, "p_1371->g_1001.s1", print_hash_value);
    transparent_crc(p_1371->g_1001.s2, "p_1371->g_1001.s2", print_hash_value);
    transparent_crc(p_1371->g_1001.s3, "p_1371->g_1001.s3", print_hash_value);
    transparent_crc(p_1371->g_1001.s4, "p_1371->g_1001.s4", print_hash_value);
    transparent_crc(p_1371->g_1001.s5, "p_1371->g_1001.s5", print_hash_value);
    transparent_crc(p_1371->g_1001.s6, "p_1371->g_1001.s6", print_hash_value);
    transparent_crc(p_1371->g_1001.s7, "p_1371->g_1001.s7", print_hash_value);
    transparent_crc(p_1371->g_1001.s8, "p_1371->g_1001.s8", print_hash_value);
    transparent_crc(p_1371->g_1001.s9, "p_1371->g_1001.s9", print_hash_value);
    transparent_crc(p_1371->g_1001.sa, "p_1371->g_1001.sa", print_hash_value);
    transparent_crc(p_1371->g_1001.sb, "p_1371->g_1001.sb", print_hash_value);
    transparent_crc(p_1371->g_1001.sc, "p_1371->g_1001.sc", print_hash_value);
    transparent_crc(p_1371->g_1001.sd, "p_1371->g_1001.sd", print_hash_value);
    transparent_crc(p_1371->g_1001.se, "p_1371->g_1001.se", print_hash_value);
    transparent_crc(p_1371->g_1001.sf, "p_1371->g_1001.sf", print_hash_value);
    transparent_crc(p_1371->g_1032.s0, "p_1371->g_1032.s0", print_hash_value);
    transparent_crc(p_1371->g_1032.s1, "p_1371->g_1032.s1", print_hash_value);
    transparent_crc(p_1371->g_1032.s2, "p_1371->g_1032.s2", print_hash_value);
    transparent_crc(p_1371->g_1032.s3, "p_1371->g_1032.s3", print_hash_value);
    transparent_crc(p_1371->g_1032.s4, "p_1371->g_1032.s4", print_hash_value);
    transparent_crc(p_1371->g_1032.s5, "p_1371->g_1032.s5", print_hash_value);
    transparent_crc(p_1371->g_1032.s6, "p_1371->g_1032.s6", print_hash_value);
    transparent_crc(p_1371->g_1032.s7, "p_1371->g_1032.s7", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1371->g_1314[i][j][k], "p_1371->g_1314[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1371->g_1346.s0, "p_1371->g_1346.s0", print_hash_value);
    transparent_crc(p_1371->g_1346.s1, "p_1371->g_1346.s1", print_hash_value);
    transparent_crc(p_1371->g_1346.s2, "p_1371->g_1346.s2", print_hash_value);
    transparent_crc(p_1371->g_1346.s3, "p_1371->g_1346.s3", print_hash_value);
    transparent_crc(p_1371->g_1346.s4, "p_1371->g_1346.s4", print_hash_value);
    transparent_crc(p_1371->g_1346.s5, "p_1371->g_1346.s5", print_hash_value);
    transparent_crc(p_1371->g_1346.s6, "p_1371->g_1346.s6", print_hash_value);
    transparent_crc(p_1371->g_1346.s7, "p_1371->g_1346.s7", print_hash_value);
    transparent_crc(p_1371->g_1347.x, "p_1371->g_1347.x", print_hash_value);
    transparent_crc(p_1371->g_1347.y, "p_1371->g_1347.y", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1371->g_1362[i], "p_1371->g_1362[i]", print_hash_value);

    }
    transparent_crc(p_1371->v_collective, "p_1371->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 63; i++)
            transparent_crc(p_1371->g_special_values[i + 63 * get_linear_group_id()], "p_1371->g_special_values[i + 63 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 63; i++)
            transparent_crc(p_1371->l_special_values[i], "p_1371->l_special_values[i]", print_hash_value);
    transparent_crc(p_1371->l_comm_values[get_linear_local_id()], "p_1371->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1371->g_comm_values[get_linear_group_id() * 5 + get_linear_local_id()], "p_1371->g_comm_values[get_linear_group_id() * 5 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
