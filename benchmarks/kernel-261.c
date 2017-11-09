// --atomics 82 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 14,99,7 -l 2,9,1
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

__constant uint32_t permutations[10][18] = {
{1,7,2,17,11,8,14,15,6,10,3,9,12,5,0,16,13,4}, // permutation 0
{4,6,8,0,2,17,9,10,16,14,15,12,1,3,7,5,11,13}, // permutation 1
{17,0,4,5,15,2,7,12,1,14,13,9,16,11,3,10,6,8}, // permutation 2
{3,11,4,17,1,2,12,10,5,9,8,6,15,13,0,14,16,7}, // permutation 3
{7,2,17,6,12,14,16,9,0,4,15,13,10,1,11,3,5,8}, // permutation 4
{17,4,6,16,15,9,10,1,8,12,13,0,14,3,2,11,5,7}, // permutation 5
{8,0,17,10,2,12,13,11,4,1,16,6,14,5,15,3,7,9}, // permutation 6
{11,15,10,14,4,6,0,16,7,5,1,17,8,3,13,9,2,12}, // permutation 7
{14,17,1,0,4,7,10,11,16,6,3,15,13,12,2,9,8,5}, // permutation 8
{6,5,13,12,8,4,9,14,17,1,11,3,10,16,2,7,15,0} // permutation 9
};

// Seed: 3349400395

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   volatile uint32_t  f0;
};

union U1 {
   uint16_t  f0;
   uint32_t  f1;
   uint64_t  f2;
   volatile int64_t  f3;
   int64_t  f4;
};

union U2 {
   volatile int16_t  f0;
   int8_t  f1;
   int64_t  f2;
   int8_t * volatile  f3;
};

union U3 {
   uint32_t  f0;
   volatile uint32_t  f1;
   int16_t  f2;
   uint8_t  f3;
};

union U4 {
   volatile int32_t  f0;
   volatile uint64_t  f1;
   volatile uint8_t  f2;
   uint64_t  f3;
   uint32_t  f4;
};

union U5 {
   volatile int32_t  f0;
   uint64_t  f1;
   uint32_t  f2;
   int8_t * f3;
   volatile uint64_t  f4;
};

struct S6 {
    int8_t g_22;
    uint32_t g_36[4];
    int32_t g_43;
    int32_t g_45;
    int32_t * volatile g_44[9][5][5];
    int32_t * volatile g_46;
    int8_t *g_63;
    volatile union U2 *g_68;
    volatile union U2 g_81;
    uint16_t g_91;
    volatile union U4 g_99;
    int64_t *g_100;
    uint8_t g_109[9][3];
    volatile VECTOR(int16_t, 4) g_113;
    int32_t *g_119;
    volatile union U1 g_120;
    volatile union U5 g_125;
    union U2 g_135;
    uint32_t g_136[2][4][6];
    uint16_t g_153[3];
    uint64_t g_155[10][6];
    VECTOR(int16_t, 4) g_163;
    int32_t g_167;
    int32_t * volatile g_166;
    VECTOR(int8_t, 2) g_171;
    VECTOR(int16_t, 2) g_175;
    VECTOR(int16_t, 8) g_176;
    volatile VECTOR(int16_t, 16) g_178;
    union U1 g_182;
    VECTOR(uint16_t, 4) g_183;
    union U0 g_214;
    union U3 g_267;
    volatile VECTOR(int8_t, 2) g_280;
    VECTOR(uint64_t, 16) g_281;
    int32_t * volatile g_294;
    union U2 g_316;
    VECTOR(uint8_t, 8) g_318;
    uint8_t g_320;
    union U2 g_322;
    union U2 g_323[3];
    uint16_t *g_329;
    uint16_t * volatile *g_328;
    union U1 g_340[2];
    uint32_t *g_343;
    uint32_t *g_347[4];
    uint32_t *g_348;
    volatile VECTOR(uint64_t, 2) g_364;
    int32_t g_493;
    union U3 g_513;
    VECTOR(int64_t, 4) g_514;
    volatile union U2 g_518[6];
    volatile VECTOR(int32_t, 4) g_545;
    VECTOR(uint16_t, 2) g_558;
    int64_t g_565;
    int8_t g_568;
    VECTOR(int64_t, 4) g_578;
    VECTOR(uint8_t, 8) g_581;
    volatile VECTOR(uint8_t, 16) g_582;
    VECTOR(uint32_t, 16) g_583;
    volatile union U5 g_584;
    union U4 g_587;
    union U2 g_591;
    union U3 g_593;
    int32_t * volatile g_602;
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
uint8_t  func_1(struct S6 * p_604);
int32_t  func_2(int8_t * p_3, uint32_t  p_4, struct S6 * p_604);
int8_t * func_5(uint32_t  p_6, uint32_t  p_7, uint32_t  p_8, struct S6 * p_604);
union U2  func_9(int8_t * p_10, int64_t  p_11, struct S6 * p_604);
int8_t * func_12(int8_t * p_13, uint8_t  p_14, struct S6 * p_604);
int8_t * func_15(int32_t  p_16, int8_t * p_17, uint16_t  p_18, int8_t * p_19, struct S6 * p_604);
int8_t * func_23(uint8_t  p_24, int64_t  p_25, uint32_t  p_26, int8_t * p_27, struct S6 * p_604);
union U0  func_30(int64_t  p_31, int8_t * p_32, struct S6 * p_604);
int64_t  func_47(uint32_t * p_48, int8_t * p_49, uint32_t  p_50, int32_t * p_51, struct S6 * p_604);
uint32_t * func_52(int32_t * p_53, uint32_t  p_54, uint32_t  p_55, struct S6 * p_604);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_604->g_comm_values p_604->l_comm_values p_604->g_36 p_604->g_43 p_604->g_46 p_604->g_45 p_604->g_68 p_604->g_163 p_604->g_136 p_604->g_166 p_604->g_167 p_604->g_171 p_604->g_175 p_604->g_176 p_604->g_178 p_604->g_182 p_604->g_183 p_604->g_109 p_604->g_119 p_604->g_214 p_604->g_120 p_604->g_155 p_604->g_22 p_604->g_267 p_604->g_81.f0 p_604->g_280 p_604->g_281 p_604->g_214.f0 p_604->g_318 p_604->g_320 p_604->g_323 p_604->g_91 p_604->g_340 p_604->g_329 p_604->g_182.f2 p_604->g_493 p_604->g_513 p_604->g_514 p_604->g_135.f2 p_604->g_518 p_604->g_513.f2 p_604->g_545 p_604->g_558 p_604->g_565 p_604->g_568 p_604->g_518.f0 p_604->g_578 p_604->g_581 p_604->g_582 p_604->g_583 p_604->g_584 p_604->g_587 p_604->g_343 p_604->g_591 p_604->g_593 p_604->g_602 p_604->g_364
 * writes: p_604->g_36 p_604->g_43 p_604->g_45 p_604->g_63 p_604->g_68 p_604->g_153 p_604->g_167 p_604->g_109 p_604->g_135.f2 p_604->g_22 p_604->g_267.f2 p_604->g_176 p_604->g_182.f0 p_604->g_91 p_604->g_328 p_604->g_343 p_604->g_347 p_604->g_348 p_604->g_182.f2 p_604->g_119 p_604->g_493 p_604->g_513.f2 p_604->g_44 p_604->g_175 p_604->g_587.f3
 */
uint8_t  func_1(struct S6 * p_604)
{ /* block id: 4 */
    uint16_t l_20 = 0x50F6L;
    int8_t *l_21 = &p_604->g_22;
    uint32_t *l_35 = &p_604->g_36[2];
    VECTOR(int32_t, 16) l_41 = (VECTOR(int32_t, 16))(0x24BE18A1L, (VECTOR(int32_t, 4))(0x24BE18A1L, (VECTOR(int32_t, 2))(0x24BE18A1L, 0x492A4153L), 0x492A4153L), 0x492A4153L, 0x24BE18A1L, 0x492A4153L, (VECTOR(int32_t, 2))(0x24BE18A1L, 0x492A4153L), (VECTOR(int32_t, 2))(0x24BE18A1L, 0x492A4153L), 0x24BE18A1L, 0x492A4153L, 0x24BE18A1L, 0x492A4153L);
    int64_t *l_215 = (void*)0;
    int64_t *l_216[1];
    int16_t l_217 = 0x0D2DL;
    uint16_t *l_324 = &p_604->g_91;
    int32_t *l_492 = &p_604->g_493;
    uint64_t l_520 = 0xD58F413C9F25BDDDL;
    int32_t l_603 = 5L;
    int i;
    for (i = 0; i < 1; i++)
        l_216[i] = &p_604->g_135.f2;
    (*l_492) ^= func_2(func_5(p_604->g_comm_values[p_604->tid], (p_604->l_comm_values[(safe_mod_func_uint32_t_u_u(p_604->tid, 18))] != ((*l_324) |= (func_9(func_12(func_15(l_20, l_21, p_604->l_comm_values[(safe_mod_func_uint32_t_u_u(p_604->tid, 18))], func_23(((safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(1, 1), 5)) , 0x9FL), (p_604->g_135.f2 = ((func_30((l_20 < (safe_add_func_int64_t_s_s((l_41.s6 = ((((*l_35) &= (l_20 < FAKE_DIVERGE(p_604->group_2_offset, get_group_id(2), 10))) <= (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((0x70A1L == 0UL), 7)), 13))) != l_20)), l_20))), &p_604->g_22, p_604) , (void*)0) == l_21)), l_217, &p_604->g_22, p_604), p_604), l_20, p_604), p_604->g_281.s9, p_604) , p_604->g_36[0]))), p_604->g_comm_values[p_604->tid], p_604), l_20, p_604);
    (*l_492) = 0x7307FEFBL;
    for (l_20 = (-7); (l_20 != 41); ++l_20)
    { /* block id: 253 */
        int64_t l_496 = 0x776DBFCC0BB5B26FL;
        int32_t l_517 = (-1L);
        int16_t *l_519 = (void*)0;
        int16_t *l_521 = &l_217;
        int32_t l_522 = (-3L);
        int32_t l_567 = 1L;
        uint8_t l_571 = 0x09L;
        int16_t l_577 = 8L;
        int64_t **l_600 = &p_604->g_100;
        if ((l_496 > (((*l_21) = ((VECTOR(int8_t, 8))((l_522 = ((++(*p_604->g_329)) != (safe_sub_func_int16_t_s_s(((*l_521) = (l_520 = (safe_div_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((*l_492), ((~(*l_492)) <= ((VECTOR(int16_t, 2))((-1L), 0x3ED1L)).even))), ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(((((p_604->g_513 , ((((VECTOR(int64_t, 16))(p_604->g_514.yyxxxzyzwwwyyxzw)).s7 , (0xE5L || ((void*)0 == &p_604->g_155[5][2]))) || (((safe_rshift_func_uint8_t_u_u(l_517, 6)) != 0L) | 0UL))) | p_604->g_135.f2) , p_604->g_518[1]) , l_496), (*l_492))), l_496)), p_604->g_183.x)) , FAKE_DIVERGE(p_604->local_0_offset, get_local_id(0), 10)))), p_604->g_183.x)))), 65528UL)))), 1L, (-8L), (-2L), 0x79L, ((VECTOR(int8_t, 2))(0x3BL)), 0L)).s0) == (*l_492))))
        { /* block id: 259 */
            int16_t l_538 = 0x6D67L;
            int32_t l_566 = 0x5FC5F523L;
            uint64_t l_592 = 0x93E3E8C6C349E889L;
            int32_t l_601 = 0x7F6806DCL;
            for (p_604->g_513.f2 = 7; (p_604->g_513.f2 < 27); p_604->g_513.f2 = safe_add_func_int16_t_s_s(p_604->g_513.f2, 3))
            { /* block id: 262 */
                int32_t **l_525 = (void*)0;
                int32_t **l_526 = (void*)0;
                int32_t **l_527[6][8] = {{&l_492,&p_604->g_119,&p_604->g_119,(void*)0,&p_604->g_119,(void*)0,&p_604->g_119,&p_604->g_119},{&l_492,&p_604->g_119,&p_604->g_119,(void*)0,&p_604->g_119,(void*)0,&p_604->g_119,&p_604->g_119},{&l_492,&p_604->g_119,&p_604->g_119,(void*)0,&p_604->g_119,(void*)0,&p_604->g_119,&p_604->g_119},{&l_492,&p_604->g_119,&p_604->g_119,(void*)0,&p_604->g_119,(void*)0,&p_604->g_119,&p_604->g_119},{&l_492,&p_604->g_119,&p_604->g_119,(void*)0,&p_604->g_119,(void*)0,&p_604->g_119,&p_604->g_119},{&l_492,&p_604->g_119,&p_604->g_119,(void*)0,&p_604->g_119,(void*)0,&p_604->g_119,&p_604->g_119}};
                int16_t *l_569 = &p_604->g_267.f2;
                uint64_t *l_570 = &l_520;
                int i, j;
                p_604->g_44[6][3][2] = func_52((p_604->g_119 = (void*)0), p_604->g_281.s3, (p_604->g_171.x ^ (((+(safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_int64_t_s_s((p_604->g_171.y ^ ((safe_div_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(((l_538 && (safe_rshift_func_int8_t_s_s((safe_div_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(p_604->g_545.yzwywyzw)))).s0, (safe_add_func_uint64_t_u_u(((*l_570) &= ((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(0UL, 65527UL)).xxxxxxxx)).s5 > (l_538 , ((*l_569) = (~(((((safe_lshift_func_uint8_t_u_s((0x8582944D843E5330L && (safe_rshift_func_int8_t_s_s((l_566 ^= ((safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_604->g_167, ((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 4))(max(((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(p_604->g_558.yyxyxxyx)).s3626206007051176)).sa394))), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 8))(upsample(((VECTOR(uint8_t, 2))(0xB8L, 0x58L)).yxxxxxyx, ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(0x70L, 1UL)), (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((l_522 ^= (((*l_521) = ((!((*l_492) == p_604->g_565)) < 0x64L)) | (*p_604->g_329))), 7)), (*l_492))), 253UL)), ((VECTOR(uint8_t, 4))(2UL)), 0x41L))))).s75)), 65535UL, 0x6963L))))))).odd, ((VECTOR(uint16_t, 2))(0x5BA3L))))).lo)), p_604->g_136[1][1][3])), 0x50973B9F4689D755L)) != (-6L))), l_567))), 2)) & (*l_492)) | p_604->g_568) , p_604->g_136[0][1][4]) > l_496))))) , 0xF08B5CCA8AE7A560L)), l_517)))), p_604->g_91)), 1))) ^ l_571), p_604->l_comm_values[(safe_mod_func_uint32_t_u_u(p_604->tid, 18))])) , p_604->g_518[1].f0), p_604->g_558.y)) != 1UL)), (*l_492))), 3UL)), 0x6B0FC88DL))) > p_604->g_45) < (*l_492))), p_604);
                if ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(p_604->g_318.s6, 12)), 0)))
                { /* block id: 270 */
                    int32_t *l_576[3][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    (*p_604->g_166) &= (-1L);
                    (*l_492) ^= (p_604->g_171.x , 0x06EF5D35L);
                    p_604->g_44[6][3][2] = l_576[2][0];
                    return l_577;
                }
                else
                { /* block id: 275 */
                    p_604->g_43 |= (((l_571 >= GROUP_DIVERGE(0, 1)) == (((*l_570) = ((0x1288C266L && l_522) ^ 65533UL)) == ((VECTOR(int64_t, 8))(p_604->g_578.xzwwzwxz)).s5)) <= (safe_rshift_func_uint8_t_u_s(((p_604->g_175.x |= (0x1DL <= ((VECTOR(uint8_t, 4))(mul_hi(((VECTOR(uint8_t, 16))(p_604->g_581.s7071473721174426)).s0ba7, ((VECTOR(uint8_t, 16))(p_604->g_582.s778fb3ceb98b1d9c)).s7e77))).w)) && (l_567 &= ((*p_604->g_329) ^= (((VECTOR(uint16_t, 4))(l_538, (((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(p_604->g_583.s10)).xyxyyyyy)).s6 != ((p_604->g_584 , (safe_div_func_uint64_t_u_u((((VECTOR(uint32_t, 8))(4UL, (p_604->g_587 , (~(safe_unary_minus_func_int8_t_s(((safe_mod_func_uint64_t_u_u((p_604->g_587.f3 = l_566), 1UL)) == GROUP_DIVERGE(0, 1)))))), (*p_604->g_343), (*l_492), ((VECTOR(uint32_t, 2))(3UL)), 0x96DD4616L, 0x7A3C22A5L)).s7 | l_566), (-8L)))) > (-1L))), 1UL, 0x4D8CL)).x & FAKE_DIVERGE(p_604->group_2_offset, get_group_id(2), 10))))), 5)));
                    return p_604->g_109[7][1];
                }
            }
            atomic_max(&p_604->g_atomic_reduction[get_linear_group_id()], (*p_604->g_46));
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_604->v_collective += p_604->g_atomic_reduction[get_linear_group_id()];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            (*p_604->g_602) = (((l_601 = (0x12CBL | ((((p_604->g_591 , ((VECTOR(uint64_t, 8))(((((l_592 < (*l_492)) != (p_604->g_593 , 3UL)) , (safe_rshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((*p_604->g_119) = (((*p_604->g_329) |= ((safe_add_func_int64_t_s_s((&p_604->g_100 != l_600), (l_567 = ((*l_492) = p_604->g_81.f0)))) == 0xB649EB273EFB6EB9L)) | l_566)), (-10L))), p_604->g_581.s5))) & 0xF3L), 0xB036045318054A2EL, 0x60012462ABAE2F0EL, p_604->g_175.x, 18446744073709551615UL, 0xDA2C5268BF2593D2L, 0xA8A1DF0CBA8AA056L, 0x4B70BE5A17A4DDB2L)).s6) ^ 18446744073709551615UL) != l_601) && 0x5071L))) != l_217) ^ l_566);
        }
        else
        { /* block id: 292 */
            return l_603;
        }
        if (l_571)
            continue;
    }
    return p_604->g_364.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_604->g_182.f2 p_604->g_22 p_604->g_176 p_604->g_166 p_604->g_167 p_604->g_46 p_604->g_45
 * writes: p_604->g_182.f2 p_604->g_119
 */
int32_t  func_2(int8_t * p_3, uint32_t  p_4, struct S6 * p_604)
{ /* block id: 132 */
    uint32_t l_361 = 0UL;
    VECTOR(uint64_t, 16) l_362 = (VECTOR(uint64_t, 16))(3UL, (VECTOR(uint64_t, 4))(3UL, (VECTOR(uint64_t, 2))(3UL, 18446744073709551614UL), 18446744073709551614UL), 18446744073709551614UL, 3UL, 18446744073709551614UL, (VECTOR(uint64_t, 2))(3UL, 18446744073709551614UL), (VECTOR(uint64_t, 2))(3UL, 18446744073709551614UL), 3UL, 18446744073709551614UL, 3UL, 18446744073709551614UL);
    VECTOR(uint64_t, 2) l_363 = (VECTOR(uint64_t, 2))(1UL, 0x31B738C9D4DB42A1L);
    union U3 *l_365 = &p_604->g_267;
    int32_t *l_378 = &p_604->g_167;
    int i;
    for (p_604->g_182.f2 = 8; (p_604->g_182.f2 > 35); ++p_604->g_182.f2)
    { /* block id: 135 */
        uint16_t l_360 = 1UL;
        uint16_t l_367 = 0x5DB7L;
        union U3 *l_368 = (void*)0;
        int32_t **l_379 = &p_604->g_119;
        if ((safe_lshift_func_int8_t_s_u((&p_604->g_214 != (void*)0), ((safe_sub_func_uint8_t_u_u((p_3 != &p_604->g_320), (+((safe_div_func_int8_t_s_s(l_360, (+((l_361 = (*p_3)) <= ((p_604->g_176.s3 >= 1L) && ((VECTOR(uint64_t, 8))(mad_hi(((VECTOR(uint64_t, 2))(l_362.s58)).yyxxyxyy, ((VECTOR(uint64_t, 2))(0UL, 0x4868CA1A9346788BL)).xyyxxxxy, ((VECTOR(uint64_t, 2))(hadd(((VECTOR(uint64_t, 16))(abs_diff(((VECTOR(uint64_t, 2))(0xACDDE82206229DF0L, 9UL)).xxxyyxyxxyyxyxxx, ((VECTOR(uint64_t, 4))(l_363.yxyy)).zwyxxxyxxzyxxwxy))).sb1, ((VECTOR(uint64_t, 4))(p_604->g_364.xyyx)).even))).yxxxyyxy))).s0))))) || ((*p_3) , l_362.sb))))) | 0x0BL))))
        { /* block id: 137 */
            union U3 **l_366 = &l_365;
            (*l_366) = l_365;
            return p_4;
        }
        else
        { /* block id: 140 */
            if (l_360)
                break;
            atomic_and(&p_604->l_atomic_reduction[0], l_367 + get_linear_global_id());
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if (get_linear_local_id() == 0)
                p_604->v_collective += p_604->l_atomic_reduction[0];
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            if ((*p_604->g_166))
                break;
        }
        if ((l_368 != &p_604->g_267))
        { /* block id: 145 */
            if ((atomic_inc(&p_604->g_atomic_input[82 * get_linear_group_id() + 51]) == 7))
            { /* block id: 147 */
                uint32_t l_369 = 1UL;
                int32_t l_370 = 0x63E81E94L;
                int64_t l_371 = 0L;
                int32_t l_372 = 0x6D605B91L;
                uint32_t l_373 = 0xAECCED3FL;
                VECTOR(uint32_t, 16) l_376 = (VECTOR(uint32_t, 16))(0xB3C9EB31L, (VECTOR(uint32_t, 4))(0xB3C9EB31L, (VECTOR(uint32_t, 2))(0xB3C9EB31L, 0x3EAE890BL), 0x3EAE890BL), 0x3EAE890BL, 0xB3C9EB31L, 0x3EAE890BL, (VECTOR(uint32_t, 2))(0xB3C9EB31L, 0x3EAE890BL), (VECTOR(uint32_t, 2))(0xB3C9EB31L, 0x3EAE890BL), 0xB3C9EB31L, 0x3EAE890BL, 0xB3C9EB31L, 0x3EAE890BL);
                int64_t l_377 = 0x4CE7D3FB5A29FBA2L;
                int i;
                l_369 ^= 0L;
                --l_373;
                l_377 = (((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(1L, ((VECTOR(int32_t, 2))(0x649629A6L, 0x3CE15001L)), 7L)).wxxyzywz)).s2 , l_376.s1);
                unsigned int result = 0;
                result += l_369;
                result += l_370;
                result += l_371;
                result += l_372;
                result += l_373;
                result += l_376.sf;
                result += l_376.se;
                result += l_376.sd;
                result += l_376.sc;
                result += l_376.sb;
                result += l_376.sa;
                result += l_376.s9;
                result += l_376.s8;
                result += l_376.s7;
                result += l_376.s6;
                result += l_376.s5;
                result += l_376.s4;
                result += l_376.s3;
                result += l_376.s2;
                result += l_376.s1;
                result += l_376.s0;
                result += l_377;
                atomic_add(&p_604->g_special_values[82 * get_linear_group_id() + 51], result);
            }
            else
            { /* block id: 151 */
                (1 + 1);
            }
        }
        else
        { /* block id: 154 */
            return l_360;
        }
        (*l_379) = l_378;
        if ((atomic_inc(&p_604->g_atomic_input[82 * get_linear_group_id() + 3]) == 1))
        { /* block id: 159 */
            uint8_t l_380 = 0xCCL;
            int8_t l_401 = 0x2FL;
            int8_t l_402 = 1L;
            VECTOR(int32_t, 8) l_487 = (VECTOR(int32_t, 8))(0x19443554L, (VECTOR(int32_t, 4))(0x19443554L, (VECTOR(int32_t, 2))(0x19443554L, (-2L)), (-2L)), (-2L), 0x19443554L, (-2L));
            int32_t *l_486 = (void*)0;
            int32_t *l_488 = (void*)0;
            int32_t l_489 = 0x156ADEDAL;
            int32_t l_490 = 0x62400A7FL;
            int8_t l_491 = 3L;
            int i;
            if (l_380)
            { /* block id: 160 */
                int8_t l_381[3];
                uint16_t l_382 = 1UL;
                int32_t l_384 = 1L;
                int32_t *l_383 = &l_384;
                int32_t *l_385 = &l_384;
                uint32_t l_386 = 0xC53004C5L;
                int32_t l_387[1];
                int i;
                for (i = 0; i < 3; i++)
                    l_381[i] = (-10L);
                for (i = 0; i < 1; i++)
                    l_387[i] = 1L;
                l_382 = l_381[0];
                l_385 = l_383;
                l_387[0] &= l_386;
            }
            else
            { /* block id: 164 */
                int32_t l_388 = 1L;
                for (l_388 = 0; (l_388 <= 0); ++l_388)
                { /* block id: 167 */
                    int32_t l_391 = 1L;
                    for (l_391 = (-29); (l_391 == (-22)); l_391 = safe_add_func_uint16_t_u_u(l_391, 7))
                    { /* block id: 170 */
                        uint8_t l_396 = 0x1AL;
                        uint8_t *l_395 = &l_396;
                        uint8_t **l_394[5];
                        uint8_t **l_397 = &l_395;
                        int8_t l_398[2][5] = {{0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L}};
                        int8_t l_399[3];
                        uint64_t l_400 = 0xA4444F3FB1149F56L;
                        int i, j;
                        for (i = 0; i < 5; i++)
                            l_394[i] = &l_395;
                        for (i = 0; i < 3; i++)
                            l_399[i] = 1L;
                        l_397 = l_394[4];
                        l_399[0] = l_398[0][0];
                        l_400 ^= 0x1273C6EBL;
                    }
                }
            }
            if ((l_402 = (l_401 = 1L)))
            { /* block id: 179 */
                uint8_t l_403 = 0x5BL;
                union U2 l_406 = {1L};/* VOLATILE GLOBAL l_406 */
                int16_t l_407 = (-3L);
                int32_t l_408 = (-4L);
                uint16_t l_409 = 0x5ED1L;
                uint32_t l_410 = 1UL;
                uint64_t l_411 = 0x3BB712821E90009AL;
                int32_t *l_412 = &l_408;
                int32_t l_414 = 0x6A81BC29L;
                int32_t *l_413 = &l_414;
                l_403++;
                l_413 = ((l_406 , (l_411 |= (((l_408 = l_407) , l_409) , l_410))) , l_412);
                for (l_414 = 0; (l_414 > (-22)); --l_414)
                { /* block id: 186 */
                    int32_t l_418 = 1L;
                    int32_t *l_417 = &l_418;
                    uint64_t l_433 = 0x09730643253158E5L;
                    VECTOR(uint64_t, 2) l_434 = (VECTOR(uint64_t, 2))(0xCA20E88B243DF29BL, 0UL);
                    union U1 l_435 = {1UL};/* VOLATILE GLOBAL l_435 */
                    int8_t l_436 = 0x59L;
                    int i;
                    l_412 = l_417;
                }
            }
            else
            { /* block id: 210 */
                int8_t l_447 = (-1L);
                uint16_t l_448[5][2][5];
                int16_t l_479[7][3] = {{0x41E1L,0x41E1L,0x41E1L},{0x41E1L,0x41E1L,0x41E1L},{0x41E1L,0x41E1L,0x41E1L},{0x41E1L,0x41E1L,0x41E1L},{0x41E1L,0x41E1L,0x41E1L},{0x41E1L,0x41E1L,0x41E1L},{0x41E1L,0x41E1L,0x41E1L}};
                int16_t l_480 = 0x38BBL;
                int16_t l_481[4][7] = {{0x11CBL,0x11CBL,1L,1L,0x6039L,1L,1L},{0x11CBL,0x11CBL,1L,1L,0x6039L,1L,1L},{0x11CBL,0x11CBL,1L,1L,0x6039L,1L,1L},{0x11CBL,0x11CBL,1L,1L,0x6039L,1L,1L}};
                int32_t l_482 = 0x3819832AL;
                uint64_t l_483 = 0x71A235B75E0D4B2EL;
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_448[i][j][k] = 65535UL;
                    }
                }
                l_448[3][1][2] ^= l_447;
                for (l_448[0][0][0] = 0; (l_448[0][0][0] < 57); l_448[0][0][0] = safe_add_func_int16_t_s_s(l_448[0][0][0], 6))
                { /* block id: 214 */
                    int32_t l_451[6][8] = {{0x07BDE3D1L,(-1L),0x07BDE3D1L,0x07BDE3D1L,(-1L),0x07BDE3D1L,0x07BDE3D1L,(-1L)},{0x07BDE3D1L,(-1L),0x07BDE3D1L,0x07BDE3D1L,(-1L),0x07BDE3D1L,0x07BDE3D1L,(-1L)},{0x07BDE3D1L,(-1L),0x07BDE3D1L,0x07BDE3D1L,(-1L),0x07BDE3D1L,0x07BDE3D1L,(-1L)},{0x07BDE3D1L,(-1L),0x07BDE3D1L,0x07BDE3D1L,(-1L),0x07BDE3D1L,0x07BDE3D1L,(-1L)},{0x07BDE3D1L,(-1L),0x07BDE3D1L,0x07BDE3D1L,(-1L),0x07BDE3D1L,0x07BDE3D1L,(-1L)},{0x07BDE3D1L,(-1L),0x07BDE3D1L,0x07BDE3D1L,(-1L),0x07BDE3D1L,0x07BDE3D1L,(-1L)}};
                    int32_t *l_463 = &l_451[0][0];
                    int32_t *l_464 = (void*)0;
                    int i, j;
                    for (l_451[0][0] = 8; (l_451[0][0] >= 19); l_451[0][0]++)
                    { /* block id: 217 */
                        int16_t l_454 = 0x3BC6L;
                        VECTOR(uint32_t, 8) l_455 = (VECTOR(uint32_t, 8))(4294967295UL, (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x01DE58FDL), 0x01DE58FDL), 0x01DE58FDL, 4294967295UL, 0x01DE58FDL);
                        int32_t l_456 = (-8L);
                        union U2 l_457 = {1L};/* VOLATILE GLOBAL l_457 */
                        union U1 l_458 = {1UL};/* VOLATILE GLOBAL l_458 */
                        int32_t l_459 = 0x01A15737L;
                        int32_t l_460[5][6] = {{0x47141335L,0x62179489L,0x281C6CFBL,0x7C126938L,0x281C6CFBL,0x62179489L},{0x47141335L,0x62179489L,0x281C6CFBL,0x7C126938L,0x281C6CFBL,0x62179489L},{0x47141335L,0x62179489L,0x281C6CFBL,0x7C126938L,0x281C6CFBL,0x62179489L},{0x47141335L,0x62179489L,0x281C6CFBL,0x7C126938L,0x281C6CFBL,0x62179489L},{0x47141335L,0x62179489L,0x281C6CFBL,0x7C126938L,0x281C6CFBL,0x62179489L}};
                        uint32_t l_461 = 0x1F27884BL;
                        uint32_t l_462 = 0x23E183BDL;
                        int i, j;
                        l_459 = (((l_454 , ((l_456 = l_455.s1) , l_457)) , l_458) , 0L);
                        l_460[1][4] ^= 0x12C8AFFDL;
                        l_462 ^= l_461;
                    }
                    l_464 = l_463;
                    for (l_451[0][0] = 0; (l_451[0][0] > 17); l_451[0][0]++)
                    { /* block id: 226 */
                        uint8_t l_469[5][1][4] = {{{251UL,255UL,4UL,255UL}},{{251UL,255UL,4UL,255UL}},{{251UL,255UL,4UL,255UL}},{{251UL,255UL,4UL,255UL}},{{251UL,255UL,4UL,255UL}}};
                        uint8_t *l_468 = &l_469[2][0][1];
                        uint8_t **l_467 = &l_468;
                        int i, j, k;
                        l_467 = (void*)0;
                    }
                    for (l_451[0][0] = 0; (l_451[0][0] <= 0); l_451[0][0] = safe_add_func_int64_t_s_s(l_451[0][0], 6))
                    { /* block id: 231 */
                        int32_t l_472[2][9][1] = {{{0x1B3C3671L},{0x1B3C3671L},{0x1B3C3671L},{0x1B3C3671L},{0x1B3C3671L},{0x1B3C3671L},{0x1B3C3671L},{0x1B3C3671L},{0x1B3C3671L}},{{0x1B3C3671L},{0x1B3C3671L},{0x1B3C3671L},{0x1B3C3671L},{0x1B3C3671L},{0x1B3C3671L},{0x1B3C3671L},{0x1B3C3671L},{0x1B3C3671L}}};
                        int8_t l_473 = 0x1AL;
                        uint16_t l_474 = 0x23C4L;
                        uint16_t l_475 = 0UL;
                        uint8_t l_476 = 1UL;
                        int32_t l_477 = 0L;
                        uint32_t l_478 = 0UL;
                        int i, j, k;
                        l_476 ^= (l_475 = (l_474 = (l_473 = l_472[1][8][0])));
                        l_478 |= l_477;
                    }
                }
                l_483++;
            }
            l_488 = l_486;
            l_491 = (l_490 = l_489);
            unsigned int result = 0;
            result += l_380;
            result += l_401;
            result += l_402;
            result += l_487.s7;
            result += l_487.s6;
            result += l_487.s5;
            result += l_487.s4;
            result += l_487.s3;
            result += l_487.s2;
            result += l_487.s1;
            result += l_487.s0;
            result += l_489;
            result += l_490;
            result += l_491;
            atomic_add(&p_604->g_special_values[82 * get_linear_group_id() + 3], result);
        }
        else
        { /* block id: 244 */
            (1 + 1);
        }
    }
    return (*p_604->g_46);
}


/* ------------------------------------------ */
/* 
 * reads : p_604->g_119 p_604->g_340 p_604->g_163 p_604->g_136 p_604->g_329 p_604->g_91 p_604->g_167
 * writes: p_604->g_328 p_604->g_43 p_604->g_343 p_604->g_347 p_604->g_348 p_604->g_36 p_604->g_167
 */
int8_t * func_5(uint32_t  p_6, uint32_t  p_7, uint32_t  p_8, struct S6 * p_604)
{ /* block id: 119 */
    uint16_t *l_327 = &p_604->g_182.f0;
    uint16_t **l_326 = &l_327;
    uint16_t ***l_325[8][10][3] = {{{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0}},{{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0}},{{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0}},{{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0}},{{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0}},{{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0}},{{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0}},{{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0},{&l_326,&l_326,(void*)0}}};
    int32_t l_334[1][7][5] = {{{0x6BDB6385L,0x79F0E615L,0x7704D31BL,9L,7L},{0x6BDB6385L,0x79F0E615L,0x7704D31BL,9L,7L},{0x6BDB6385L,0x79F0E615L,0x7704D31BL,9L,7L},{0x6BDB6385L,0x79F0E615L,0x7704D31BL,9L,7L},{0x6BDB6385L,0x79F0E615L,0x7704D31BL,9L,7L},{0x6BDB6385L,0x79F0E615L,0x7704D31BL,9L,7L},{0x6BDB6385L,0x79F0E615L,0x7704D31BL,9L,7L}}};
    VECTOR(int64_t, 2) l_337 = (VECTOR(int64_t, 2))(0L, 1L);
    uint64_t *l_338 = (void*)0;
    uint64_t **l_339 = &l_338;
    uint32_t *l_341 = &p_604->g_36[2];
    uint32_t **l_342[9][1][1] = {{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}},{{(void*)0}}};
    int32_t **l_344 = (void*)0;
    int32_t *l_345 = &p_604->g_45;
    uint32_t *l_346 = &p_604->g_36[2];
    int32_t *l_349 = (void*)0;
    int32_t l_350 = (-6L);
    int32_t *l_351 = &p_604->g_167;
    int i, j, k;
    p_604->g_328 = (void*)0;
    (*l_351) |= (l_350 |= (!((safe_sub_func_int32_t_s_s(((*p_604->g_119) = 0x5B9C2D89L), (p_604->g_36[2] = ((safe_div_func_int8_t_s_s(l_334[0][6][0], ((FAKE_DIVERGE(p_604->local_0_offset, get_local_id(0), 10) , ((((0xEBD2L ^ (safe_lshift_func_uint16_t_u_u(((((VECTOR(int64_t, 2))(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 4))(p_6, ((VECTOR(int64_t, 2))(0x61D629665A277039L, 0x43ADBF9BB5ACA6F9L)), 0x1B5DCF8F39D724FBL)).even, (int64_t)((VECTOR(int64_t, 2))(l_337.xx)).lo))))).hi > ((((*l_339) = l_338) != (p_604->g_340[1] , &p_604->g_155[4][1])) | ((((p_604->g_343 = l_341) == (p_604->g_348 = (p_604->g_347[1] = (l_346 = func_52((l_345 = &p_604->g_45), p_604->g_163.x, p_8, p_604))))) , p_6) ^ p_604->g_136[1][3][1]))) , (*p_604->g_329)), 7))) != 0xB404D8F7L) | p_604->g_136[1][0][1]) || 0x04C69644BDA8C91DL)) , 0xC8L))) <= p_6)))) > p_604->g_136[0][1][1])));
    return &p_604->g_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_604->g_214.f0 p_604->g_175 p_604->g_136 p_604->g_318 p_604->g_320 p_604->g_163 p_604->g_119 p_604->g_43 p_604->g_323
 * writes: p_604->g_182.f0 p_604->g_43
 */
union U2  func_9(int8_t * p_10, int64_t  p_11, struct S6 * p_604)
{ /* block id: 112 */
    int64_t l_297 = 0x357BA598CCE829D8L;
    int32_t *l_298[7][3][7] = {{{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0},{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0},{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0},{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0},{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0},{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0},{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0},{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0},{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0},{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0},{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0},{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0},{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0}},{{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0},{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0},{(void*)0,(void*)0,(void*)0,&p_604->g_43,&p_604->g_167,&p_604->g_43,(void*)0}}};
    uint16_t l_299 = 1UL;
    VECTOR(int8_t, 16) l_314 = (VECTOR(int8_t, 16))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0L), 0L), 0L, 0L, 0L, (VECTOR(int8_t, 2))(0L, 0L), (VECTOR(int8_t, 2))(0L, 0L), 0L, 0L, 0L, 0L);
    union U2 *l_315 = &p_604->g_316;
    VECTOR(uint8_t, 2) l_319 = (VECTOR(uint8_t, 2))(0xD9L, 0x26L);
    union U2 *l_321 = &p_604->g_322;
    int i, j, k;
    --l_299;
    (*p_604->g_119) ^= (((((((safe_mod_func_uint64_t_u_u(0x8D6F656C4C7388A8L, (safe_rshift_func_int8_t_s_u(0x4BL, 3)))) > (safe_lshift_func_uint16_t_u_u((((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(abs(((VECTOR(uint8_t, 4))(p_604->g_214.f0, 4UL, 255UL, 248UL)).yzxzwxywzyzzywxz))).scb)).even , ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(0x81A8L, 0xE301L)), 0x8F1AL, 1UL)).z), (p_604->g_182.f0 = ((p_604->g_175.x , ((safe_add_func_int64_t_s_s(p_11, (safe_add_func_int8_t_s_s(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_314.sa0f658ccef0c741a)))).sf, p_604->g_136[1][1][4])))) >= (p_11 == ((l_315 = (void*)0) != ((safe_unary_minus_func_uint16_t_u(((VECTOR(uint16_t, 2))(rhadd(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 4))(clz(((VECTOR(uint8_t, 2))(max(((VECTOR(uint8_t, 16))(p_604->g_318.s0656377735642556)).s38, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 4))(l_319.xxyy)).yxwyzxzwzyyxzyyw)).s05))).yxxx))), ((VECTOR(uint8_t, 8))(p_11, 1UL, p_604->g_320, 255UL, 0xC4L, ((VECTOR(uint8_t, 2))(0xC3L)), 246UL)).lo))).even, ((VECTOR(uint16_t, 2))(65535UL))))).odd)) , l_321))))) && FAKE_DIVERGE(p_604->group_0_offset, get_group_id(0), 10)))))) ^ p_11) > 0x77EEC87AL) && p_11) && p_604->g_163.w) >= p_11);
    return p_604->g_323[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_604->g_280 p_604->g_281 p_604->g_155 p_604->g_22 p_604->g_119
 * writes: p_604->g_176 p_604->g_43 p_604->g_45
 */
int8_t * func_12(int8_t * p_13, uint8_t  p_14, struct S6 * p_604)
{ /* block id: 106 */
    VECTOR(uint64_t, 8) l_282 = (VECTOR(uint64_t, 8))(0x4214085D790C8D82L, (VECTOR(uint64_t, 4))(0x4214085D790C8D82L, (VECTOR(uint64_t, 2))(0x4214085D790C8D82L, 0x9D7A8FFE5B919CC3L), 0x9D7A8FFE5B919CC3L), 0x9D7A8FFE5B919CC3L, 0x4214085D790C8D82L, 0x9D7A8FFE5B919CC3L);
    uint64_t *l_283 = (void*)0;
    VECTOR(uint16_t, 4) l_288 = (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xB38DL), 0xB38DL);
    uint32_t *l_291[10] = {(void*)0,&p_604->g_36[2],&p_604->g_36[0],&p_604->g_36[2],(void*)0,(void*)0,&p_604->g_36[2],&p_604->g_36[0],&p_604->g_36[2],(void*)0};
    int32_t l_292[8][10][3] = {{{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L}},{{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L}},{{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L}},{{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L}},{{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L}},{{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L}},{{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L}},{{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L},{0x163DA19FL,(-8L),0x32665406L}}};
    int16_t *l_293[5][6][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    int32_t *l_295 = &p_604->g_45;
    int8_t *l_296[3];
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_296[i] = (void*)0;
    (*l_295) = ((*p_604->g_119) = (safe_mul_func_int16_t_s_s((+p_14), ((((safe_unary_minus_func_uint8_t_u(GROUP_DIVERGE(0, 1))) == (((VECTOR(int8_t, 4))(p_604->g_280.xxxy)).w ^ ((p_604->g_176.s1 = (((((VECTOR(uint64_t, 16))(mul_hi(((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(p_604->g_281.sb9)).xxyy)).xwwzywwwyzwxyxxz, ((VECTOR(uint64_t, 16))(l_282.s7240720550061441))))).s7 <= (((void*)0 != l_283) | p_14)) >= (l_292[0][6][2] = (safe_mul_func_int16_t_s_s(((((GROUP_DIVERGE(2, 1) , (safe_sub_func_uint8_t_u_u((((VECTOR(uint16_t, 8))(l_288.wxxxywzw)).s5 == ((safe_mod_func_uint64_t_u_u(p_14, 0x7A6A502289046EE4L)) | p_604->g_155[5][2])), (l_288.w >= p_14)))) , 0xB7L) ^ (*p_13)) || p_14), l_288.x)))) >= 18446744073709551607UL)) >= p_14))) , l_282.s6) == p_604->g_281.sc))));
    return l_296[1];
}


/* ------------------------------------------ */
/* 
 * reads : p_604->g_120 p_604->g_167 p_604->g_183 p_604->g_36 p_604->g_155 p_604->g_22 p_604->g_267 p_604->g_81.f0 p_604->g_166
 * writes: p_604->g_167 p_604->g_36 p_604->g_22 p_604->g_267.f2
 */
int8_t * func_15(int32_t  p_16, int8_t * p_17, uint16_t  p_18, int8_t * p_19, struct S6 * p_604)
{ /* block id: 84 */
    union U2 *l_234 = &p_604->g_135;
    int32_t *l_235 = &p_604->g_167;
    VECTOR(uint64_t, 4) l_236 = (VECTOR(uint64_t, 4))(0xA423967E32B0C328L, (VECTOR(uint64_t, 2))(0xA423967E32B0C328L, 0xF9EFFBC450B5307EL), 0xF9EFFBC450B5307EL);
    uint32_t l_253 = 1UL;
    uint32_t l_254 = 4294967294UL;
    int32_t **l_255 = (void*)0;
    int32_t **l_256 = &l_235;
    int64_t *l_257 = (void*)0;
    int64_t *l_258[2];
    int32_t l_259 = 0x109E5BC4L;
    uint32_t *l_260 = &p_604->g_36[2];
    VECTOR(uint32_t, 16) l_273 = (VECTOR(uint32_t, 16))(0x3E0D10F8L, (VECTOR(uint32_t, 4))(0x3E0D10F8L, (VECTOR(uint32_t, 2))(0x3E0D10F8L, 0x82EFF8BAL), 0x82EFF8BAL), 0x82EFF8BAL, 0x3E0D10F8L, 0x82EFF8BAL, (VECTOR(uint32_t, 2))(0x3E0D10F8L, 0x82EFF8BAL), (VECTOR(uint32_t, 2))(0x3E0D10F8L, 0x82EFF8BAL), 0x3E0D10F8L, 0x82EFF8BAL, 0x3E0D10F8L, 0x82EFF8BAL);
    int i, j;
    for (i = 0; i < 2; i++)
        l_258[i] = &p_604->g_182.f4;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_604->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 18)), permutations[(safe_mod_func_uint32_t_u_u(((*l_260) = ((+((l_259 = (p_18 < (((*l_256) = func_52(((!(l_234 == (void*)0)) , l_235), (((((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 16))(min(((VECTOR(uint64_t, 16))(sub_sat(((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 2))(0UL, 0x005221912F0F49DFL)))).xyyxxxxxyyyxyxyx, ((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 8))(l_236.zyzzzwzx)).hi)).wyxyxwzxwwzyxwww))), (uint64_t)(((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((((p_604->g_120 , ((0xFA7EEC759BF6B608L || (&p_604->g_43 == l_235)) > (safe_mod_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(((VECTOR(uint16_t, 4))(upsample(((VECTOR(uint8_t, 4))((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((((*l_235) = (*l_235)) , 1UL), GROUP_DIVERGE(1, 1))), p_16)), 0x61L, 6UL, 5UL)), ((VECTOR(uint8_t, 4))(0UL))))).y, 15)) || p_16), l_236.z)))) , p_16) | p_604->g_183.z), l_253)), p_604->g_36[2])), p_604->g_36[2])), 14)) , FAKE_DIVERGE(p_604->global_1_offset, get_global_id(1), 10)) , 1UL)))).sf4ec)).y >= p_16) & 0x551D2FAFL) > l_254), p_16, p_604)) != &p_604->g_45))) || p_18)) , p_604->g_155[5][2])), 10))][(safe_mod_func_uint32_t_u_u(p_604->tid, 18))]));
    if ((atomic_inc(&p_604->l_atomic_input[74]) == 8))
    { /* block id: 93 */
        int32_t l_262 = 7L;
        int32_t *l_261 = &l_262;
        int32_t *l_263 = &l_262;
        int16_t l_264 = (-9L);
        l_263 = l_261;
        l_264 = ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(1L, 0x7224E852L)).yyxyyxxx))).s1;
        unsigned int result = 0;
        result += l_262;
        result += l_264;
        atomic_add(&p_604->l_special_values[74], result);
    }
    else
    { /* block id: 96 */
        (1 + 1);
    }
    for (p_604->g_22 = 0; (p_604->g_22 > (-10)); p_604->g_22 = safe_sub_func_uint64_t_u_u(p_604->g_22, 5))
    { /* block id: 101 */
        VECTOR(uint32_t, 8) l_274 = (VECTOR(uint32_t, 8))(0UL, (VECTOR(uint32_t, 4))(0UL, (VECTOR(uint32_t, 2))(0UL, 4294967295UL), 4294967295UL), 4294967295UL, 0UL, 4294967295UL);
        int16_t *l_275 = (void*)0;
        int16_t *l_276 = &p_604->g_267.f2;
        int i;
        (*p_604->g_166) = (p_604->g_267 , ((p_17 != &p_604->g_109[5][2]) & ((*l_276) = (((0x08L | (*p_17)) , (safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(FAKE_DIVERGE(p_604->group_1_offset, get_group_id(1), 10), FAKE_DIVERGE(p_604->local_1_offset, get_local_id(1), 10))) != 2UL), (safe_unary_minus_func_int8_t_s((*p_19)))))) ^ (((VECTOR(uint32_t, 16))(mul_hi(((VECTOR(uint32_t, 2))(l_273.sf2)).xyyyyxyyxyyyyyyx, ((VECTOR(uint32_t, 8))(l_274.s46267154)).s5077266134463005))).sf > (2L != (((*p_17) || p_604->g_81.f0) ^ GROUP_DIVERGE(1, 1))))))));
    }
    return &p_604->g_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_604->g_119 p_604->g_43 p_604->g_46 p_604->g_167
 * writes: p_604->g_22 p_604->g_43 p_604->g_45 p_604->g_167
 */
int8_t * func_23(uint8_t  p_24, int64_t  p_25, uint32_t  p_26, int8_t * p_27, struct S6 * p_604)
{ /* block id: 67 */
    union U0 *l_231 = &p_604->g_214;
    int32_t *l_233[5] = {&p_604->g_167,&p_604->g_167,&p_604->g_167,&p_604->g_167,&p_604->g_167};
    int i;
    for (p_24 = 26; (p_24 <= 2); p_24--)
    { /* block id: 70 */
        uint32_t l_228[10][2] = {{8UL,0x7B079A7CL},{8UL,0x7B079A7CL},{8UL,0x7B079A7CL},{8UL,0x7B079A7CL},{8UL,0x7B079A7CL},{8UL,0x7B079A7CL},{8UL,0x7B079A7CL},{8UL,0x7B079A7CL},{8UL,0x7B079A7CL},{8UL,0x7B079A7CL}};
        int64_t l_232 = 0x6150EFE6FD8733CBL;
        int i, j;
        for (p_604->g_22 = 0; (p_604->g_22 > (-17)); --p_604->g_22)
        { /* block id: 73 */
            int32_t *l_222 = &p_604->g_45;
            int32_t *l_223 = &p_604->g_167;
            int32_t *l_224 = &p_604->g_167;
            int32_t *l_225 = &p_604->g_167;
            int32_t *l_226 = (void*)0;
            int32_t *l_227 = &p_604->g_43;
            l_228[4][1]++;
            if (l_228[5][1])
                continue;
            l_231 = (void*)0;
        }
        (*p_604->g_119) |= l_232;
    }
    p_604->g_167 &= ((*p_604->g_46) = ((*p_604->g_119) = p_25));
    return p_27;
}


/* ------------------------------------------ */
/* 
 * reads : p_604->g_43 p_604->g_46 p_604->l_comm_values p_604->g_45 p_604->g_36 p_604->g_68 p_604->g_163 p_604->g_136 p_604->g_166 p_604->g_167 p_604->g_171 p_604->g_175 p_604->g_176 p_604->g_178 p_604->g_182 p_604->g_183 p_604->g_109 p_604->g_119 p_604->g_214
 * writes: p_604->g_43 p_604->g_45 p_604->g_36 p_604->g_63 p_604->g_68 p_604->g_153 p_604->g_167 p_604->g_109
 */
union U0  func_30(int64_t  p_31, int8_t * p_32, struct S6 * p_604)
{ /* block id: 7 */
    int32_t *l_42 = &p_604->g_43;
    VECTOR(uint64_t, 4) l_61 = (VECTOR(uint64_t, 4))(0xEAF0AB59A67E99E8L, (VECTOR(uint64_t, 2))(0xEAF0AB59A67E99E8L, 0xC71DA89A03083361L), 0xC71DA89A03083361L);
    int32_t l_198 = 0L;
    int32_t l_199 = 0L;
    int32_t l_200 = 0x540E818FL;
    int32_t l_201 = (-7L);
    VECTOR(int32_t, 8) l_202 = (VECTOR(int32_t, 8))(0x7436AB41L, (VECTOR(int32_t, 4))(0x7436AB41L, (VECTOR(int32_t, 2))(0x7436AB41L, (-3L)), (-3L)), (-3L), 0x7436AB41L, (-3L));
    uint64_t l_203 = 0x242F41EC3F803F65L;
    uint64_t l_207[1][2][1];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_207[i][j][k] = 1UL;
        }
    }
    (*p_604->g_46) = ((*l_42) &= p_31);
    if ((func_47(func_52(l_42, (safe_div_func_int64_t_s_s((p_31 > (p_604->l_comm_values[(safe_mod_func_uint32_t_u_u(p_604->tid, 18))] == (safe_unary_minus_func_uint64_t_u(18446744073709551607UL)))), (-5L))), (p_604->g_36[3] = (safe_add_func_uint64_t_u_u(((VECTOR(uint64_t, 2))(l_61.xz)).lo, ((*p_604->g_46) <= p_604->g_36[2])))), p_604), (p_604->g_63 = (void*)0), p_31, l_42, p_604) > p_31))
    { /* block id: 57 */
        (*p_604->g_46) = p_31;
    }
    else
    { /* block id: 59 */
        int32_t *l_193 = &p_604->g_43;
        int32_t *l_194 = &p_604->g_45;
        int32_t *l_195 = &p_604->g_45;
        int32_t *l_196 = &p_604->g_43;
        int32_t *l_197[10] = {&p_604->g_43,&p_604->g_43,&p_604->g_43,&p_604->g_43,&p_604->g_43,&p_604->g_43,&p_604->g_43,&p_604->g_43,&p_604->g_43,&p_604->g_43};
        VECTOR(int32_t, 16) l_206 = (VECTOR(int32_t, 16))(0x245B7954L, (VECTOR(int32_t, 4))(0x245B7954L, (VECTOR(int32_t, 2))(0x245B7954L, (-1L)), (-1L)), (-1L), 0x245B7954L, (-1L), (VECTOR(int32_t, 2))(0x245B7954L, (-1L)), (VECTOR(int32_t, 2))(0x245B7954L, (-1L)), 0x245B7954L, (-1L), 0x245B7954L, (-1L));
        int16_t l_210 = 9L;
        uint64_t l_211 = 7UL;
        int i;
        l_203--;
        (*l_196) = ((VECTOR(int32_t, 2))(l_206.scb)).lo;
        --l_207[0][0][0];
        --l_211;
    }
    return p_604->g_214;
}


/* ------------------------------------------ */
/* 
 * reads : p_604->g_45 p_604->g_68 p_604->g_43 p_604->g_163 p_604->g_136 p_604->g_166 p_604->g_167 p_604->g_171 p_604->g_175 p_604->g_176 p_604->g_178 p_604->g_182 p_604->g_183 p_604->g_109 p_604->g_119
 * writes: p_604->g_45 p_604->g_68 p_604->g_43 p_604->g_36 p_604->g_153 p_604->g_167 p_604->g_109
 */
int64_t  func_47(uint32_t * p_48, int8_t * p_49, uint32_t  p_50, int32_t * p_51, struct S6 * p_604)
{ /* block id: 14 */
    int32_t *l_64 = &p_604->g_45;
    int32_t **l_65 = &l_64;
    int32_t l_78 = 0x4248BDD0L;
    VECTOR(uint8_t, 16) l_106 = (VECTOR(uint8_t, 16))(7UL, (VECTOR(uint8_t, 4))(7UL, (VECTOR(uint8_t, 2))(7UL, 255UL), 255UL), 255UL, 7UL, 255UL, (VECTOR(uint8_t, 2))(7UL, 255UL), (VECTOR(uint8_t, 2))(7UL, 255UL), 7UL, 255UL, 7UL, 255UL);
    int8_t *l_107 = &p_604->g_22;
    VECTOR(int16_t, 4) l_112 = (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), 1L), 1L);
    VECTOR(uint8_t, 16) l_118 = (VECTOR(uint8_t, 16))(5UL, (VECTOR(uint8_t, 4))(5UL, (VECTOR(uint8_t, 2))(5UL, 247UL), 247UL), 247UL, 5UL, 247UL, (VECTOR(uint8_t, 2))(5UL, 247UL), (VECTOR(uint8_t, 2))(5UL, 247UL), 5UL, 247UL, 5UL, 247UL);
    VECTOR(int8_t, 8) l_126 = (VECTOR(int8_t, 8))(3L, (VECTOR(int8_t, 4))(3L, (VECTOR(int8_t, 2))(3L, (-6L)), (-6L)), (-6L), 3L, (-6L));
    VECTOR(uint16_t, 16) l_129 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 9UL), 9UL), 9UL, 1UL, 9UL, (VECTOR(uint16_t, 2))(1UL, 9UL), (VECTOR(uint16_t, 2))(1UL, 9UL), 1UL, 9UL, 1UL, 9UL);
    int8_t l_148[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    uint16_t *l_151 = (void*)0;
    VECTOR(uint64_t, 4) l_159 = (VECTOR(uint64_t, 4))(18446744073709551614UL, (VECTOR(uint64_t, 2))(18446744073709551614UL, 0x5F48295CE5FD0037L), 0x5F48295CE5FD0037L);
    VECTOR(int16_t, 4) l_174 = (VECTOR(int16_t, 4))(0x1C5CL, (VECTOR(int16_t, 2))(0x1C5CL, (-1L)), (-1L));
    VECTOR(uint16_t, 8) l_184 = (VECTOR(uint16_t, 8))(0x1D8FL, (VECTOR(uint16_t, 4))(0x1D8FL, (VECTOR(uint16_t, 2))(0x1D8FL, 0x0003L), 0x0003L), 0x0003L, 0x1D8FL, 0x0003L);
    int i;
    (*l_65) = l_64;
    for (p_604->g_45 = 0; (p_604->g_45 <= 16); p_604->g_45 = safe_add_func_uint32_t_u_u(p_604->g_45, 6))
    { /* block id: 18 */
        volatile union U2 **l_69 = &p_604->g_68;
        int32_t l_76 = (-2L);
        int32_t *l_77[7];
        uint16_t *l_90 = &p_604->g_91;
        int16_t l_92[7][8] = {{0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL},{0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL},{0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL},{0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL},{0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL},{0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL},{0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL,0x60EFL}};
        int64_t l_93 = 0x5C3605A4DEA92552L;
        int64_t *l_94 = &l_93;
        int64_t l_95 = 0x4957343453D9EB36L;
        int8_t *l_108 = &p_604->g_22;
        VECTOR(int8_t, 2) l_111 = (VECTOR(int8_t, 2))(0x22L, 4L);
        uint32_t *l_132[7] = {&p_604->g_36[2],&p_604->g_36[2],&p_604->g_36[2],&p_604->g_36[2],&p_604->g_36[2],&p_604->g_36[2],&p_604->g_36[2]};
        int i, j;
        for (i = 0; i < 7; i++)
            l_77[i] = (void*)0;
        (*l_69) = p_604->g_68;
    }
    for (p_604->g_43 = 2; (p_604->g_43 >= (-4)); p_604->g_43 = safe_sub_func_uint64_t_u_u(p_604->g_43, 4))
    { /* block id: 39 */
        uint8_t l_143 = 0x36L;
        uint32_t *l_149[9][4][5] = {{{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]}},{{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]}},{{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]}},{{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]}},{{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]}},{{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]}},{{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]}},{{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]}},{{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]},{(void*)0,&p_604->g_36[3],&p_604->g_36[2],(void*)0,&p_604->g_36[2]}}};
        int64_t *l_150 = (void*)0;
        uint16_t **l_152[8][10] = {{&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151},{&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151},{&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151},{&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151},{&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151},{&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151},{&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151},{&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151,&l_151}};
        uint64_t *l_154[5] = {&p_604->g_155[5][2],&p_604->g_155[5][2],&p_604->g_155[5][2],&p_604->g_155[5][2],&p_604->g_155[5][2]};
        int32_t l_156 = 0x1FE8F313L;
        VECTOR(uint32_t, 4) l_168 = (VECTOR(uint32_t, 4))(0x56138988L, (VECTOR(uint32_t, 2))(0x56138988L, 0x16105567L), 0x16105567L);
        VECTOR(int16_t, 2) l_177 = (VECTOR(int16_t, 2))(0x422DL, 0x0161L);
        VECTOR(int16_t, 8) l_179 = (VECTOR(int16_t, 8))(0x0EDFL, (VECTOR(int16_t, 4))(0x0EDFL, (VECTOR(int16_t, 2))(0x0EDFL, 0x3C11L), 0x3C11L), 0x3C11L, 0x0EDFL, 0x3C11L);
        uint8_t *l_191 = &p_604->g_109[0][2];
        int16_t *l_192 = (void*)0;
        int i, j, k;
        (*p_604->g_166) &= (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((0xE2L < (FAKE_DIVERGE(p_604->local_1_offset, get_local_id(1), 10) >= (l_156 = (p_604->g_153[0] = (l_143 < ((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(247UL, 5)), (p_604->g_36[2] = l_148[4]))) , ((*l_64) |= (((l_150 == l_150) , &p_604->g_91) != (l_151 = l_151))))))))), (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 8))(l_159.ywywzzxx)).s0, ((safe_unary_minus_func_uint8_t_u((safe_rshift_func_int16_t_s_s(((VECTOR(int16_t, 16))(rhadd(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(0x1886L, 0x46F2L)).yxxxyxyyyyyxxxyy)).s9524, ((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 4))(4L, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 2))(0x080DL, 0x77E7L)), ((VECTOR(int16_t, 2))(p_604->g_163.xx))))).yxyxyyxxyyyyxyxy)).sb, 0x75B9L, 6L)), ((VECTOR(int16_t, 2))(0x037EL, 0x6DF3L)).xxxx)))))))).yzxyzywxyxwzzzyw)).s31)).yyyxyyyxxyyxxyyx, ((VECTOR(int16_t, 2))(1L, 0x5715L)).yxyxyxxyyyyyxxyy))).s4, (safe_div_func_int32_t_s_s((GROUP_DIVERGE(1, 1) | (p_50 == p_50)), p_604->g_136[1][1][3])))))) || 0xF8C7CC78700D4B8CL))))), p_604->g_163.z));
        (**l_65) ^= (((((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 2))(l_168.zx)))).odd , (l_151 = &p_604->g_91)) != ((*p_604->g_166) , &p_604->g_153[0])) , (safe_mul_func_uint8_t_u_u(p_50, ((VECTOR(int8_t, 4))(p_604->g_171.xxxy)).x)));
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_604->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 18)), permutations[(safe_mod_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(0x56L, (((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(safe_mad_hi_func_int16_t_s_s_s(VECTOR(int16_t, 8),((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 16))(l_174.yzwzzxzxxywzzwyw)).s9db7, ((VECTOR(int16_t, 8))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),VECTOR(int16_t, 8),((VECTOR(int16_t, 16))(p_604->g_175.xyxyxxyyyyxyyyxy)).odd, ((VECTOR(int16_t, 16))(safe_clamp_func(VECTOR(int16_t, 16),int16_t,((VECTOR(int16_t, 16))(((VECTOR(int16_t, 8))(safe_clamp_func(VECTOR(int16_t, 8),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(p_604->g_176.s71)), ((VECTOR(int16_t, 8))(max(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_177.xxxxxxxxyxyyyxxx)).odd)).s02)).yxyyyxyxyxyyyyxy)).even, ((VECTOR(int16_t, 8))(0x074BL, (-1L), ((VECTOR(int16_t, 2))((-1L), 8L)), ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(clz(((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(p_604->g_178.sd7e4635a5d139ed1)).s01, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_179.s52406727)).odd)).wywwwwzz)).s06)))))), 6L, 0x5C95L)).even, ((VECTOR(int16_t, 2))(0L, 1L))))), 0x175FL, 1L))))).s43))).xxyxxyyx)), (int16_t)l_177.x, (int16_t)(p_604->g_175.y == (((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 8))(0xC24DFED3L, ((safe_mod_func_uint16_t_u_u((p_604->g_182 , ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 4))(p_604->g_183.xzyz)).wxwxwxyz, ((VECTOR(uint16_t, 4))(l_184.s5116)).xxwzzwzw))), 65535UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 4))((~(((FAKE_DIVERGE(p_604->local_0_offset, get_local_id(0), 10) <= ((**l_65) = ((safe_mul_func_int16_t_s_s((l_156 = ((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(((*l_191) ^= 1UL), (&l_148[6] != (p_604->g_182 , &p_604->g_22)))) <= (*p_51)), 3)) > l_179.s6)), p_604->g_136[1][1][3])) != 8L))) || (-7L)) <= p_604->g_136[1][1][3])), 65535UL, 2UL, 0xC1DAL)).lo)), l_143, 0x0F82L, 0x610EL, 0xCEB6L, 3UL)).s7), (-1L))) | p_50), (**l_65), ((VECTOR(uint32_t, 2))(1UL)), ((VECTOR(uint32_t, 2))(0UL)), 1UL)))), ((VECTOR(uint32_t, 8))(0x15FF329CL)), ((VECTOR(uint32_t, 8))(0x2B82A313L))))).s7124753626773632)).s9 == (*p_604->g_119)))))).s3504313501574157)), (int16_t)1L, (int16_t)p_50))).odd, ((VECTOR(int16_t, 8))(0x1431L))))).s7374713407730235)).hi, ((VECTOR(int16_t, 8))(0x513FL))))).even))).xyywxzyz, ((VECTOR(int16_t, 8))((-1L))), ((VECTOR(int16_t, 8))(0x5B75L))))))).s60, ((VECTOR(int16_t, 2))(0x1FDFL))))))).yxxyxxxyxyyyyxyx, ((VECTOR(int16_t, 16))(0x4612L))))).sb && l_179.s5))) ^ l_177.x), 10))][(safe_mod_func_uint32_t_u_u(p_604->tid, 18))]));
        return p_50;
    }
    return (**l_65);
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint32_t * func_52(int32_t * p_53, uint32_t  p_54, uint32_t  p_55, struct S6 * p_604)
{ /* block id: 11 */
    uint32_t *l_62 = (void*)0;
    return l_62;
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
    __local int64_t l_comm_values[18];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 18; i++)
            l_comm_values[i] = 1;
    struct S6 c_605;
    struct S6* p_604 = &c_605;
    struct S6 c_606 = {
        0x58L, // p_604->g_22
        {0x2AFDDF34L,0x2AFDDF34L,0x2AFDDF34L,0x2AFDDF34L}, // p_604->g_36
        1L, // p_604->g_43
        0x7468E576L, // p_604->g_45
        {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}}, // p_604->g_44
        &p_604->g_45, // p_604->g_46
        &p_604->g_22, // p_604->g_63
        (void*)0, // p_604->g_68
        {0x3B62L}, // p_604->g_81
        0UL, // p_604->g_91
        {0x40280C15L}, // p_604->g_99
        (void*)0, // p_604->g_100
        {{0x13L,246UL,255UL},{0x13L,246UL,255UL},{0x13L,246UL,255UL},{0x13L,246UL,255UL},{0x13L,246UL,255UL},{0x13L,246UL,255UL},{0x13L,246UL,255UL},{0x13L,246UL,255UL},{0x13L,246UL,255UL}}, // p_604->g_109
        (VECTOR(int16_t, 4))((-8L), (VECTOR(int16_t, 2))((-8L), 0x3C7FL), 0x3C7FL), // p_604->g_113
        &p_604->g_43, // p_604->g_119
        {0x591EL}, // p_604->g_120
        {2L}, // p_604->g_125
        {1L}, // p_604->g_135
        {{{4294967295UL,0xA696F640L,4294967295UL,9UL,4294967295UL,0xA696F640L},{4294967295UL,0xA696F640L,4294967295UL,9UL,4294967295UL,0xA696F640L},{4294967295UL,0xA696F640L,4294967295UL,9UL,4294967295UL,0xA696F640L},{4294967295UL,0xA696F640L,4294967295UL,9UL,4294967295UL,0xA696F640L}},{{4294967295UL,0xA696F640L,4294967295UL,9UL,4294967295UL,0xA696F640L},{4294967295UL,0xA696F640L,4294967295UL,9UL,4294967295UL,0xA696F640L},{4294967295UL,0xA696F640L,4294967295UL,9UL,4294967295UL,0xA696F640L},{4294967295UL,0xA696F640L,4294967295UL,9UL,4294967295UL,0xA696F640L}}}, // p_604->g_136
        {0xD897L,0xD897L,0xD897L}, // p_604->g_153
        {{18446744073709551615UL,0x2E5D3D61C39D5F78L,0x5E1540130CC3C056L,0x548CA7A099D88FCDL,0x45F6C1FB7A5768ADL,0x78804CAD57F617D5L},{18446744073709551615UL,0x2E5D3D61C39D5F78L,0x5E1540130CC3C056L,0x548CA7A099D88FCDL,0x45F6C1FB7A5768ADL,0x78804CAD57F617D5L},{18446744073709551615UL,0x2E5D3D61C39D5F78L,0x5E1540130CC3C056L,0x548CA7A099D88FCDL,0x45F6C1FB7A5768ADL,0x78804CAD57F617D5L},{18446744073709551615UL,0x2E5D3D61C39D5F78L,0x5E1540130CC3C056L,0x548CA7A099D88FCDL,0x45F6C1FB7A5768ADL,0x78804CAD57F617D5L},{18446744073709551615UL,0x2E5D3D61C39D5F78L,0x5E1540130CC3C056L,0x548CA7A099D88FCDL,0x45F6C1FB7A5768ADL,0x78804CAD57F617D5L},{18446744073709551615UL,0x2E5D3D61C39D5F78L,0x5E1540130CC3C056L,0x548CA7A099D88FCDL,0x45F6C1FB7A5768ADL,0x78804CAD57F617D5L},{18446744073709551615UL,0x2E5D3D61C39D5F78L,0x5E1540130CC3C056L,0x548CA7A099D88FCDL,0x45F6C1FB7A5768ADL,0x78804CAD57F617D5L},{18446744073709551615UL,0x2E5D3D61C39D5F78L,0x5E1540130CC3C056L,0x548CA7A099D88FCDL,0x45F6C1FB7A5768ADL,0x78804CAD57F617D5L},{18446744073709551615UL,0x2E5D3D61C39D5F78L,0x5E1540130CC3C056L,0x548CA7A099D88FCDL,0x45F6C1FB7A5768ADL,0x78804CAD57F617D5L},{18446744073709551615UL,0x2E5D3D61C39D5F78L,0x5E1540130CC3C056L,0x548CA7A099D88FCDL,0x45F6C1FB7A5768ADL,0x78804CAD57F617D5L}}, // p_604->g_155
        (VECTOR(int16_t, 4))(0x4C54L, (VECTOR(int16_t, 2))(0x4C54L, 0x3222L), 0x3222L), // p_604->g_163
        1L, // p_604->g_167
        &p_604->g_167, // p_604->g_166
        (VECTOR(int8_t, 2))((-6L), (-4L)), // p_604->g_171
        (VECTOR(int16_t, 2))((-5L), 0L), // p_604->g_175
        (VECTOR(int16_t, 8))(0x0E8BL, (VECTOR(int16_t, 4))(0x0E8BL, (VECTOR(int16_t, 2))(0x0E8BL, 0x5EF8L), 0x5EF8L), 0x5EF8L, 0x0E8BL, 0x5EF8L), // p_604->g_176
        (VECTOR(int16_t, 16))(0x5500L, (VECTOR(int16_t, 4))(0x5500L, (VECTOR(int16_t, 2))(0x5500L, 1L), 1L), 1L, 0x5500L, 1L, (VECTOR(int16_t, 2))(0x5500L, 1L), (VECTOR(int16_t, 2))(0x5500L, 1L), 0x5500L, 1L, 0x5500L, 1L), // p_604->g_178
        {0x9385L}, // p_604->g_182
        (VECTOR(uint16_t, 4))(0x9527L, (VECTOR(uint16_t, 2))(0x9527L, 0UL), 0UL), // p_604->g_183
        {0x3CD1D03BL}, // p_604->g_214
        {0xE96CF2EFL}, // p_604->g_267
        (VECTOR(int8_t, 2))(0x3BL, 1L), // p_604->g_280
        (VECTOR(uint64_t, 16))(18446744073709551608UL, (VECTOR(uint64_t, 4))(18446744073709551608UL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0xCF5C31C67FAAF16EL), 0xCF5C31C67FAAF16EL), 0xCF5C31C67FAAF16EL, 18446744073709551608UL, 0xCF5C31C67FAAF16EL, (VECTOR(uint64_t, 2))(18446744073709551608UL, 0xCF5C31C67FAAF16EL), (VECTOR(uint64_t, 2))(18446744073709551608UL, 0xCF5C31C67FAAF16EL), 18446744073709551608UL, 0xCF5C31C67FAAF16EL, 18446744073709551608UL, 0xCF5C31C67FAAF16EL), // p_604->g_281
        (void*)0, // p_604->g_294
        {0x5AD5L}, // p_604->g_316
        (VECTOR(uint8_t, 8))(0xF1L, (VECTOR(uint8_t, 4))(0xF1L, (VECTOR(uint8_t, 2))(0xF1L, 1UL), 1UL), 1UL, 0xF1L, 1UL), // p_604->g_318
        0UL, // p_604->g_320
        {-4L}, // p_604->g_322
        {{0L},{0L},{0L}}, // p_604->g_323
        &p_604->g_91, // p_604->g_329
        &p_604->g_329, // p_604->g_328
        {{0x5CF9L},{0x5CF9L}}, // p_604->g_340
        (void*)0, // p_604->g_343
        {&p_604->g_267.f0,&p_604->g_267.f0,&p_604->g_267.f0,&p_604->g_267.f0}, // p_604->g_347
        &p_604->g_267.f0, // p_604->g_348
        (VECTOR(uint64_t, 2))(0x44F648BA44CE0D4BL, 18446744073709551606UL), // p_604->g_364
        0x2E8F2A16L, // p_604->g_493
        {0x4C487F7CL}, // p_604->g_513
        (VECTOR(int64_t, 4))(1L, (VECTOR(int64_t, 2))(1L, 0L), 0L), // p_604->g_514
        {{1L},{5L},{1L},{1L},{5L},{1L}}, // p_604->g_518
        (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x43DF33CBL), 0x43DF33CBL), // p_604->g_545
        (VECTOR(uint16_t, 2))(0xB884L, 1UL), // p_604->g_558
        0x6E35C9AF5BEE3D30L, // p_604->g_565
        0x78L, // p_604->g_568
        (VECTOR(int64_t, 4))((-7L), (VECTOR(int64_t, 2))((-7L), 7L), 7L), // p_604->g_578
        (VECTOR(uint8_t, 8))(0x09L, (VECTOR(uint8_t, 4))(0x09L, (VECTOR(uint8_t, 2))(0x09L, 2UL), 2UL), 2UL, 0x09L, 2UL), // p_604->g_581
        (VECTOR(uint8_t, 16))(0xAEL, (VECTOR(uint8_t, 4))(0xAEL, (VECTOR(uint8_t, 2))(0xAEL, 250UL), 250UL), 250UL, 0xAEL, 250UL, (VECTOR(uint8_t, 2))(0xAEL, 250UL), (VECTOR(uint8_t, 2))(0xAEL, 250UL), 0xAEL, 250UL, 0xAEL, 250UL), // p_604->g_582
        (VECTOR(uint32_t, 16))(0x36ABDD02L, (VECTOR(uint32_t, 4))(0x36ABDD02L, (VECTOR(uint32_t, 2))(0x36ABDD02L, 7UL), 7UL), 7UL, 0x36ABDD02L, 7UL, (VECTOR(uint32_t, 2))(0x36ABDD02L, 7UL), (VECTOR(uint32_t, 2))(0x36ABDD02L, 7UL), 0x36ABDD02L, 7UL, 0x36ABDD02L, 7UL), // p_604->g_583
        {-1L}, // p_604->g_584
        {0x5D201F80L}, // p_604->g_587
        {-2L}, // p_604->g_591
        {4294967295UL}, // p_604->g_593
        &p_604->g_45, // p_604->g_602
        0, // p_604->v_collective
        sequence_input[get_global_id(0)], // p_604->global_0_offset
        sequence_input[get_global_id(1)], // p_604->global_1_offset
        sequence_input[get_global_id(2)], // p_604->global_2_offset
        sequence_input[get_local_id(0)], // p_604->local_0_offset
        sequence_input[get_local_id(1)], // p_604->local_1_offset
        sequence_input[get_local_id(2)], // p_604->local_2_offset
        sequence_input[get_group_id(0)], // p_604->group_0_offset
        sequence_input[get_group_id(1)], // p_604->group_1_offset
        sequence_input[get_group_id(2)], // p_604->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 18)), permutations[0][get_linear_local_id()])), // p_604->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        g_atomic_input, // g_atomic_input
        g_special_values, // g_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_605 = c_606;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_604);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_604->g_22, "p_604->g_22", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(p_604->g_36[i], "p_604->g_36[i]", print_hash_value);

    }
    transparent_crc(p_604->g_43, "p_604->g_43", print_hash_value);
    transparent_crc(p_604->g_45, "p_604->g_45", print_hash_value);
    transparent_crc(p_604->g_81.f0, "p_604->g_81.f0", print_hash_value);
    transparent_crc(p_604->g_91, "p_604->g_91", print_hash_value);
    transparent_crc(p_604->g_99.f0, "p_604->g_99.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(p_604->g_109[i][j], "p_604->g_109[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_604->g_113.x, "p_604->g_113.x", print_hash_value);
    transparent_crc(p_604->g_113.y, "p_604->g_113.y", print_hash_value);
    transparent_crc(p_604->g_113.z, "p_604->g_113.z", print_hash_value);
    transparent_crc(p_604->g_113.w, "p_604->g_113.w", print_hash_value);
    transparent_crc(p_604->g_120.f0, "p_604->g_120.f0", print_hash_value);
    transparent_crc(p_604->g_125.f0, "p_604->g_125.f0", print_hash_value);
    transparent_crc(p_604->g_135.f2, "p_604->g_135.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(p_604->g_136[i][j][k], "p_604->g_136[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_604->g_153[i], "p_604->g_153[i]", print_hash_value);

    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(p_604->g_155[i][j], "p_604->g_155[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_604->g_163.x, "p_604->g_163.x", print_hash_value);
    transparent_crc(p_604->g_163.y, "p_604->g_163.y", print_hash_value);
    transparent_crc(p_604->g_163.z, "p_604->g_163.z", print_hash_value);
    transparent_crc(p_604->g_163.w, "p_604->g_163.w", print_hash_value);
    transparent_crc(p_604->g_167, "p_604->g_167", print_hash_value);
    transparent_crc(p_604->g_171.x, "p_604->g_171.x", print_hash_value);
    transparent_crc(p_604->g_171.y, "p_604->g_171.y", print_hash_value);
    transparent_crc(p_604->g_175.x, "p_604->g_175.x", print_hash_value);
    transparent_crc(p_604->g_175.y, "p_604->g_175.y", print_hash_value);
    transparent_crc(p_604->g_176.s0, "p_604->g_176.s0", print_hash_value);
    transparent_crc(p_604->g_176.s1, "p_604->g_176.s1", print_hash_value);
    transparent_crc(p_604->g_176.s2, "p_604->g_176.s2", print_hash_value);
    transparent_crc(p_604->g_176.s3, "p_604->g_176.s3", print_hash_value);
    transparent_crc(p_604->g_176.s4, "p_604->g_176.s4", print_hash_value);
    transparent_crc(p_604->g_176.s5, "p_604->g_176.s5", print_hash_value);
    transparent_crc(p_604->g_176.s6, "p_604->g_176.s6", print_hash_value);
    transparent_crc(p_604->g_176.s7, "p_604->g_176.s7", print_hash_value);
    transparent_crc(p_604->g_178.s0, "p_604->g_178.s0", print_hash_value);
    transparent_crc(p_604->g_178.s1, "p_604->g_178.s1", print_hash_value);
    transparent_crc(p_604->g_178.s2, "p_604->g_178.s2", print_hash_value);
    transparent_crc(p_604->g_178.s3, "p_604->g_178.s3", print_hash_value);
    transparent_crc(p_604->g_178.s4, "p_604->g_178.s4", print_hash_value);
    transparent_crc(p_604->g_178.s5, "p_604->g_178.s5", print_hash_value);
    transparent_crc(p_604->g_178.s6, "p_604->g_178.s6", print_hash_value);
    transparent_crc(p_604->g_178.s7, "p_604->g_178.s7", print_hash_value);
    transparent_crc(p_604->g_178.s8, "p_604->g_178.s8", print_hash_value);
    transparent_crc(p_604->g_178.s9, "p_604->g_178.s9", print_hash_value);
    transparent_crc(p_604->g_178.sa, "p_604->g_178.sa", print_hash_value);
    transparent_crc(p_604->g_178.sb, "p_604->g_178.sb", print_hash_value);
    transparent_crc(p_604->g_178.sc, "p_604->g_178.sc", print_hash_value);
    transparent_crc(p_604->g_178.sd, "p_604->g_178.sd", print_hash_value);
    transparent_crc(p_604->g_178.se, "p_604->g_178.se", print_hash_value);
    transparent_crc(p_604->g_178.sf, "p_604->g_178.sf", print_hash_value);
    transparent_crc(p_604->g_182.f0, "p_604->g_182.f0", print_hash_value);
    transparent_crc(p_604->g_183.x, "p_604->g_183.x", print_hash_value);
    transparent_crc(p_604->g_183.y, "p_604->g_183.y", print_hash_value);
    transparent_crc(p_604->g_183.z, "p_604->g_183.z", print_hash_value);
    transparent_crc(p_604->g_183.w, "p_604->g_183.w", print_hash_value);
    transparent_crc(p_604->g_214.f0, "p_604->g_214.f0", print_hash_value);
    transparent_crc(p_604->g_280.x, "p_604->g_280.x", print_hash_value);
    transparent_crc(p_604->g_280.y, "p_604->g_280.y", print_hash_value);
    transparent_crc(p_604->g_281.s0, "p_604->g_281.s0", print_hash_value);
    transparent_crc(p_604->g_281.s1, "p_604->g_281.s1", print_hash_value);
    transparent_crc(p_604->g_281.s2, "p_604->g_281.s2", print_hash_value);
    transparent_crc(p_604->g_281.s3, "p_604->g_281.s3", print_hash_value);
    transparent_crc(p_604->g_281.s4, "p_604->g_281.s4", print_hash_value);
    transparent_crc(p_604->g_281.s5, "p_604->g_281.s5", print_hash_value);
    transparent_crc(p_604->g_281.s6, "p_604->g_281.s6", print_hash_value);
    transparent_crc(p_604->g_281.s7, "p_604->g_281.s7", print_hash_value);
    transparent_crc(p_604->g_281.s8, "p_604->g_281.s8", print_hash_value);
    transparent_crc(p_604->g_281.s9, "p_604->g_281.s9", print_hash_value);
    transparent_crc(p_604->g_281.sa, "p_604->g_281.sa", print_hash_value);
    transparent_crc(p_604->g_281.sb, "p_604->g_281.sb", print_hash_value);
    transparent_crc(p_604->g_281.sc, "p_604->g_281.sc", print_hash_value);
    transparent_crc(p_604->g_281.sd, "p_604->g_281.sd", print_hash_value);
    transparent_crc(p_604->g_281.se, "p_604->g_281.se", print_hash_value);
    transparent_crc(p_604->g_281.sf, "p_604->g_281.sf", print_hash_value);
    transparent_crc(p_604->g_316.f0, "p_604->g_316.f0", print_hash_value);
    transparent_crc(p_604->g_318.s0, "p_604->g_318.s0", print_hash_value);
    transparent_crc(p_604->g_318.s1, "p_604->g_318.s1", print_hash_value);
    transparent_crc(p_604->g_318.s2, "p_604->g_318.s2", print_hash_value);
    transparent_crc(p_604->g_318.s3, "p_604->g_318.s3", print_hash_value);
    transparent_crc(p_604->g_318.s4, "p_604->g_318.s4", print_hash_value);
    transparent_crc(p_604->g_318.s5, "p_604->g_318.s5", print_hash_value);
    transparent_crc(p_604->g_318.s6, "p_604->g_318.s6", print_hash_value);
    transparent_crc(p_604->g_318.s7, "p_604->g_318.s7", print_hash_value);
    transparent_crc(p_604->g_320, "p_604->g_320", print_hash_value);
    transparent_crc(p_604->g_322.f0, "p_604->g_322.f0", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_604->g_323[i].f0, "p_604->g_323[i].f0", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(p_604->g_340[i].f0, "p_604->g_340[i].f0", print_hash_value);

    }
    transparent_crc(p_604->g_364.x, "p_604->g_364.x", print_hash_value);
    transparent_crc(p_604->g_364.y, "p_604->g_364.y", print_hash_value);
    transparent_crc(p_604->g_493, "p_604->g_493", print_hash_value);
    transparent_crc(p_604->g_513.f0, "p_604->g_513.f0", print_hash_value);
    transparent_crc(p_604->g_514.x, "p_604->g_514.x", print_hash_value);
    transparent_crc(p_604->g_514.y, "p_604->g_514.y", print_hash_value);
    transparent_crc(p_604->g_514.z, "p_604->g_514.z", print_hash_value);
    transparent_crc(p_604->g_514.w, "p_604->g_514.w", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_604->g_518[i].f0, "p_604->g_518[i].f0", print_hash_value);

    }
    transparent_crc(p_604->g_545.x, "p_604->g_545.x", print_hash_value);
    transparent_crc(p_604->g_545.y, "p_604->g_545.y", print_hash_value);
    transparent_crc(p_604->g_545.z, "p_604->g_545.z", print_hash_value);
    transparent_crc(p_604->g_545.w, "p_604->g_545.w", print_hash_value);
    transparent_crc(p_604->g_558.x, "p_604->g_558.x", print_hash_value);
    transparent_crc(p_604->g_558.y, "p_604->g_558.y", print_hash_value);
    transparent_crc(p_604->g_565, "p_604->g_565", print_hash_value);
    transparent_crc(p_604->g_568, "p_604->g_568", print_hash_value);
    transparent_crc(p_604->g_578.x, "p_604->g_578.x", print_hash_value);
    transparent_crc(p_604->g_578.y, "p_604->g_578.y", print_hash_value);
    transparent_crc(p_604->g_578.z, "p_604->g_578.z", print_hash_value);
    transparent_crc(p_604->g_578.w, "p_604->g_578.w", print_hash_value);
    transparent_crc(p_604->g_581.s0, "p_604->g_581.s0", print_hash_value);
    transparent_crc(p_604->g_581.s1, "p_604->g_581.s1", print_hash_value);
    transparent_crc(p_604->g_581.s2, "p_604->g_581.s2", print_hash_value);
    transparent_crc(p_604->g_581.s3, "p_604->g_581.s3", print_hash_value);
    transparent_crc(p_604->g_581.s4, "p_604->g_581.s4", print_hash_value);
    transparent_crc(p_604->g_581.s5, "p_604->g_581.s5", print_hash_value);
    transparent_crc(p_604->g_581.s6, "p_604->g_581.s6", print_hash_value);
    transparent_crc(p_604->g_581.s7, "p_604->g_581.s7", print_hash_value);
    transparent_crc(p_604->g_582.s0, "p_604->g_582.s0", print_hash_value);
    transparent_crc(p_604->g_582.s1, "p_604->g_582.s1", print_hash_value);
    transparent_crc(p_604->g_582.s2, "p_604->g_582.s2", print_hash_value);
    transparent_crc(p_604->g_582.s3, "p_604->g_582.s3", print_hash_value);
    transparent_crc(p_604->g_582.s4, "p_604->g_582.s4", print_hash_value);
    transparent_crc(p_604->g_582.s5, "p_604->g_582.s5", print_hash_value);
    transparent_crc(p_604->g_582.s6, "p_604->g_582.s6", print_hash_value);
    transparent_crc(p_604->g_582.s7, "p_604->g_582.s7", print_hash_value);
    transparent_crc(p_604->g_582.s8, "p_604->g_582.s8", print_hash_value);
    transparent_crc(p_604->g_582.s9, "p_604->g_582.s9", print_hash_value);
    transparent_crc(p_604->g_582.sa, "p_604->g_582.sa", print_hash_value);
    transparent_crc(p_604->g_582.sb, "p_604->g_582.sb", print_hash_value);
    transparent_crc(p_604->g_582.sc, "p_604->g_582.sc", print_hash_value);
    transparent_crc(p_604->g_582.sd, "p_604->g_582.sd", print_hash_value);
    transparent_crc(p_604->g_582.se, "p_604->g_582.se", print_hash_value);
    transparent_crc(p_604->g_582.sf, "p_604->g_582.sf", print_hash_value);
    transparent_crc(p_604->g_583.s0, "p_604->g_583.s0", print_hash_value);
    transparent_crc(p_604->g_583.s1, "p_604->g_583.s1", print_hash_value);
    transparent_crc(p_604->g_583.s2, "p_604->g_583.s2", print_hash_value);
    transparent_crc(p_604->g_583.s3, "p_604->g_583.s3", print_hash_value);
    transparent_crc(p_604->g_583.s4, "p_604->g_583.s4", print_hash_value);
    transparent_crc(p_604->g_583.s5, "p_604->g_583.s5", print_hash_value);
    transparent_crc(p_604->g_583.s6, "p_604->g_583.s6", print_hash_value);
    transparent_crc(p_604->g_583.s7, "p_604->g_583.s7", print_hash_value);
    transparent_crc(p_604->g_583.s8, "p_604->g_583.s8", print_hash_value);
    transparent_crc(p_604->g_583.s9, "p_604->g_583.s9", print_hash_value);
    transparent_crc(p_604->g_583.sa, "p_604->g_583.sa", print_hash_value);
    transparent_crc(p_604->g_583.sb, "p_604->g_583.sb", print_hash_value);
    transparent_crc(p_604->g_583.sc, "p_604->g_583.sc", print_hash_value);
    transparent_crc(p_604->g_583.sd, "p_604->g_583.sd", print_hash_value);
    transparent_crc(p_604->g_583.se, "p_604->g_583.se", print_hash_value);
    transparent_crc(p_604->g_583.sf, "p_604->g_583.sf", print_hash_value);
    transparent_crc(p_604->g_584.f0, "p_604->g_584.f0", print_hash_value);
    transparent_crc(p_604->g_591.f0, "p_604->g_591.f0", print_hash_value);
    transparent_crc(p_604->g_593.f0, "p_604->g_593.f0", print_hash_value);
    transparent_crc(p_604->v_collective, "p_604->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_global_id())
        for (i = 0 ; i < 82; i++)
            transparent_crc(p_604->g_special_values[i + 82 * get_linear_group_id()], "p_604->g_special_values[i + 82 * get_linear_group_id()]", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 82; i++)
            transparent_crc(p_604->l_special_values[i], "p_604->l_special_values[i]", print_hash_value);
    transparent_crc(p_604->l_comm_values[get_linear_local_id()], "p_604->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_604->g_comm_values[get_linear_group_id() * 18 + get_linear_local_id()], "p_604->g_comm_values[get_linear_group_id() * 18 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
