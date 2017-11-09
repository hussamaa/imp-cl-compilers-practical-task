// --atomics 43 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 86,91,1 -l 2,1,1
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

// Seed: 1064454379

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
union U0 {
   uint64_t  f0;
   uint32_t  f1;
   int16_t  f2;
   volatile int32_t  f3;
   uint32_t  f4;
};

struct S1 {
    int32_t g_8;
    int32_t *g_7[7][10];
    uint32_t g_15;
    int64_t g_21;
    uint8_t g_27;
    volatile VECTOR(uint8_t, 8) g_30;
    uint8_t g_34;
    VECTOR(uint8_t, 4) g_73;
    int32_t g_91;
    int32_t *g_90[8][2][7];
    VECTOR(uint32_t, 8) g_101;
    VECTOR(int16_t, 8) g_248;
    VECTOR(uint32_t, 2) g_251;
    uint16_t g_261;
    uint16_t g_263;
    uint16_t g_266;
    int32_t g_268;
    uint64_t g_278;
    uint32_t g_279;
    uint8_t *g_316[1];
    VECTOR(int8_t, 8) g_338;
    VECTOR(int8_t, 2) g_342;
    int32_t * volatile g_376;
    int32_t * volatile g_379;
    int32_t * volatile g_380;
    int32_t ** volatile g_381;
    volatile VECTOR(uint32_t, 4) g_465;
    union U0 g_484;
    union U0 ** volatile g_485;
    volatile int16_t g_496;
    volatile VECTOR(int32_t, 16) g_586;
    volatile uint16_t g_608;
    volatile uint16_t *g_607;
    volatile uint16_t * volatile *g_606[9][10][2];
    uint16_t **g_609;
    uint32_t *g_619;
    uint32_t **g_618;
    union U0 g_639[8];
    VECTOR(uint16_t, 2) g_659;
    uint32_t *g_674;
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
uint32_t  func_1(struct S1 * p_685);
int32_t * func_2(int32_t * p_3, int64_t  p_4, int32_t * p_5, int64_t  p_6, struct S1 * p_685);
int32_t * func_11(uint32_t  p_12, int32_t  p_13, struct S1 * p_685);
int32_t  func_16(uint32_t * p_17, int8_t  p_18, int32_t  p_19, uint32_t * p_20, struct S1 * p_685);
int16_t  func_38(int32_t  p_39, uint8_t * p_40, int32_t * p_41, uint32_t * p_42, int64_t * p_43, struct S1 * p_685);
uint8_t * func_44(int32_t * p_45, uint32_t  p_46, struct S1 * p_685);
int64_t  func_48(uint64_t  p_49, int32_t  p_50, int32_t  p_51, struct S1 * p_685);
uint16_t  func_58(uint32_t  p_59, int32_t * p_60, int32_t  p_61, uint16_t  p_62, int32_t  p_63, struct S1 * p_685);
int64_t  func_64(int32_t * p_65, uint64_t  p_66, uint8_t  p_67, struct S1 * p_685);
uint64_t  func_76(int32_t * p_77, struct S1 * p_685);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_685->g_7 p_685->g_15 p_685->l_comm_values p_685->g_8 p_685->g_27 p_685->g_comm_values p_685->g_316 p_685->g_73 p_685->g_21 p_685->g_91 p_685->g_101 p_685->g_248 p_685->g_251 p_685->g_261 p_685->g_266 p_685->g_268 p_685->g_376 p_685->g_380 p_685->g_381 p_685->g_34 p_685->g_279 p_685->g_278 p_685->g_338 p_685->g_263 p_685->g_586 p_685->g_606 p_685->g_609 p_685->g_607 p_685->g_608 p_685->g_618 p_685->g_465 p_685->g_639 p_685->g_659 p_685->g_674 p_685->g_342
 * writes: p_685->g_15 p_685->g_21 p_685->g_8 p_685->g_27 p_685->g_90 p_685->g_91 p_685->g_101 p_685->g_261 p_685->g_263 p_685->g_266 p_685->g_268 p_685->g_278 p_685->g_279 p_685->g_248 p_685->g_34 p_685->g_251 p_685->g_comm_values p_685->g_338
 */
uint32_t  func_1(struct S1 * p_685)
{ /* block id: 4 */
    int32_t l_9[8][4] = {{0x28ACE4B0L,0x6DAD94E8L,1L,0x6DAD94E8L},{0x28ACE4B0L,0x6DAD94E8L,1L,0x6DAD94E8L},{0x28ACE4B0L,0x6DAD94E8L,1L,0x6DAD94E8L},{0x28ACE4B0L,0x6DAD94E8L,1L,0x6DAD94E8L},{0x28ACE4B0L,0x6DAD94E8L,1L,0x6DAD94E8L},{0x28ACE4B0L,0x6DAD94E8L,1L,0x6DAD94E8L},{0x28ACE4B0L,0x6DAD94E8L,1L,0x6DAD94E8L},{0x28ACE4B0L,0x6DAD94E8L,1L,0x6DAD94E8L}};
    int32_t l_10[1];
    uint32_t *l_14 = &p_685->g_15;
    uint16_t *l_611 = &p_685->g_266;
    uint16_t **l_610 = &l_611;
    uint32_t *l_617 = (void*)0;
    uint32_t **l_616 = &l_617;
    uint32_t l_620 = 4UL;
    uint16_t l_621 = 2UL;
    uint32_t l_644[9][9] = {{0UL,0UL,4294967291UL,0x8CF7F299L,5UL,0x8CF7F299L,4294967291UL,0UL,0UL},{0UL,0UL,4294967291UL,0x8CF7F299L,5UL,0x8CF7F299L,4294967291UL,0UL,0UL},{0UL,0UL,4294967291UL,0x8CF7F299L,5UL,0x8CF7F299L,4294967291UL,0UL,0UL},{0UL,0UL,4294967291UL,0x8CF7F299L,5UL,0x8CF7F299L,4294967291UL,0UL,0UL},{0UL,0UL,4294967291UL,0x8CF7F299L,5UL,0x8CF7F299L,4294967291UL,0UL,0UL},{0UL,0UL,4294967291UL,0x8CF7F299L,5UL,0x8CF7F299L,4294967291UL,0UL,0UL},{0UL,0UL,4294967291UL,0x8CF7F299L,5UL,0x8CF7F299L,4294967291UL,0UL,0UL},{0UL,0UL,4294967291UL,0x8CF7F299L,5UL,0x8CF7F299L,4294967291UL,0UL,0UL},{0UL,0UL,4294967291UL,0x8CF7F299L,5UL,0x8CF7F299L,4294967291UL,0UL,0UL}};
    uint8_t l_684 = 0UL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_10[i] = 0x34BDAC84L;
    (*p_685->g_381) = func_2(p_685->g_7[6][8], (&p_685->g_8 == ((l_10[0] &= l_9[2][1]) , func_11(((*l_14) ^= 0xE9A07B30L), func_16(l_14, (p_685->g_21 = p_685->l_comm_values[(safe_mod_func_uint32_t_u_u(p_685->tid, 2))]), p_685->l_comm_values[(safe_mod_func_uint32_t_u_u(p_685->tid, 2))], p_685->g_7[6][8], p_685), p_685))), p_685->g_7[1][4], p_685->g_73.w, p_685);
    for (p_685->g_279 = 0; (p_685->g_279 >= 4); ++p_685->g_279)
    { /* block id: 336 */
        int32_t l_603 = 0x7C377CF3L;
        uint8_t *l_624 = &p_685->g_34;
        int64_t *l_635[3][1][9] = {{{(void*)0,(void*)0,&p_685->g_21,(void*)0,(void*)0,(void*)0,(void*)0,&p_685->g_21,(void*)0}},{{(void*)0,(void*)0,&p_685->g_21,(void*)0,(void*)0,(void*)0,(void*)0,&p_685->g_21,(void*)0}},{{(void*)0,(void*)0,&p_685->g_21,(void*)0,(void*)0,(void*)0,(void*)0,&p_685->g_21,(void*)0}}};
        int32_t l_636 = 0x4C1FD8E0L;
        uint8_t *l_645 = &p_685->g_27;
        uint16_t l_646 = 0xFA23L;
        int32_t *l_647 = &p_685->g_8;
        int i, j, k;
        l_621 = (((safe_add_func_uint16_t_u_u((l_603 <= ((safe_add_func_uint16_t_u_u(1UL, (p_685->g_606[3][0][0] == (l_610 = p_685->g_609)))) >= (safe_rshift_func_uint16_t_u_s((*p_685->g_607), 8)))), (safe_mod_func_uint8_t_u_u((l_616 != (l_10[0] , p_685->g_618)), l_620)))) == 0L) && l_603);
        (*l_647) = ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(0x0447849BL, 0x34F6529FL, 0x1C4130F0L, ((VECTOR(int32_t, 4))((p_685->g_465.z , ((safe_add_func_int8_t_s_s(((((((((*l_645) = (~((((*l_624) = 8UL) >= l_10[0]) || (safe_mod_func_int32_t_s_s((((safe_sub_func_uint16_t_u_u(GROUP_DIVERGE(0, 1), (safe_sub_func_uint8_t_u_u((((p_685->g_comm_values[p_685->tid] &= (safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s((((l_10[0] = ((&p_685->g_7[3][6] != (void*)0) && (l_9[2][1] = l_620))) >= (l_636 = 5L)) > (safe_sub_func_uint8_t_u_u((p_685->g_639[3] , (GROUP_DIVERGE(1, 1) | (((VECTOR(int16_t, 2))(0x5455L, 0x649BL)).odd >= (safe_mod_func_int32_t_s_s(((((l_644[4][7] ^ l_603) > (*p_685->g_607)) <= p_685->g_8) & 2UL), l_603))))), l_603))), l_603)), l_603))) , (void*)0) == &p_685->g_15), p_685->g_251.y)))) ^ l_603) , (*p_685->g_380)), l_644[7][8]))))) ^ p_685->g_266) <= p_685->g_338.s3) , l_621) & 1UL) , l_646) ^ GROUP_DIVERGE(2, 1)), l_603)) || (-4L))), ((VECTOR(int32_t, 2))(0x48B33E8FL)), 0x40392D4EL)), (-8L))).s31)), 1L, 0x222C979BL)).y;
        for (l_603 = (-16); (l_603 == 16); ++l_603)
        { /* block id: 348 */
            VECTOR(uint64_t, 8) l_656 = (VECTOR(uint64_t, 8))(0x6CF87F221E67A749L, (VECTOR(uint64_t, 4))(0x6CF87F221E67A749L, (VECTOR(uint64_t, 2))(0x6CF87F221E67A749L, 0xD7896F251D434297L), 0xD7896F251D434297L), 0xD7896F251D434297L, 0x6CF87F221E67A749L, 0xD7896F251D434297L);
            int32_t l_675 = 0x55C0DCD0L;
            int i;
            for (p_685->g_21 = (-16); (p_685->g_21 <= (-24)); --p_685->g_21)
            { /* block id: 351 */
                uint16_t *l_664 = (void*)0;
                int32_t l_666 = (-7L);
                for (p_685->g_8 = 20; (p_685->g_8 < 3); p_685->g_8 = safe_sub_func_int8_t_s_s(p_685->g_8, 6))
                { /* block id: 354 */
                    int8_t *l_654 = (void*)0;
                    int8_t *l_655 = (void*)0;
                    int32_t l_665 = 0x3F9DFDE9L;
                    int32_t l_682 = 1L;
                    int32_t *l_683 = &l_9[2][1];
                    l_666 &= (((p_685->g_338.s5 |= 0x5BL) , (((VECTOR(uint64_t, 2))(((VECTOR(uint64_t, 4))(l_656.s0026)).odd)).hi || (safe_mul_func_uint8_t_u_u((((VECTOR(uint16_t, 16))((0xB7B6B593L && (((((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 4))((1L & p_685->g_465.z), ((VECTOR(uint16_t, 2))(0x6A16L, 0x947DL)), 0x66D7L)), ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(p_685->g_659.yy)), 0x3ECDL, 65534UL)))).s0 >= (safe_div_func_int8_t_s_s((safe_add_func_int64_t_s_s((((l_620 && l_656.s6) , &l_646) != l_664), p_685->g_27)), l_665))) > 0x7D65L) & 0xA0FDL)), l_10[0], 0x55ADL, 1UL, l_656.s6, ((VECTOR(uint16_t, 4))(0UL)), 4UL, 0x7CB7L, ((VECTOR(uint16_t, 2))(0x559DL)), ((VECTOR(uint16_t, 2))(65535UL)), 0xB5E4L)).s8 < p_685->g_338.s7), 0x23L)))) , l_665);
                    (*l_683) ^= (((safe_add_func_uint8_t_u_u((((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 16))(((VECTOR(uint32_t, 8))(safe_mad24_func_uint32_t_u_u_u(VECTOR(uint32_t, 8),((VECTOR(uint32_t, 4))(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 4))((((safe_add_func_int64_t_s_s(0x0C088541975C6857L, l_665)) , (l_682 &= (~(((*p_685->g_376) > ((safe_unary_minus_func_int8_t_s(((VECTOR(int8_t, 4))(0x2AL, 3L, 0L, (-1L))).z)) , (l_666 > ((!FAKE_DIVERGE(p_685->local_0_offset, get_local_id(0), 10)) | (safe_div_func_int8_t_s_s((l_675 ^= (p_685->g_674 != (void*)0)), (safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))((safe_rshift_func_uint16_t_u_s((!l_665), (safe_sub_func_int64_t_s_s(0x63F62817C3378489L, (((0x7900CE85L | 0x3E589A7DL) != l_665) ^ 9UL))))), 0x37L, ((VECTOR(uint8_t, 4))(8UL)), 9UL, 0xAAL)).s2, p_685->g_342.x)))))))) , 0x430A953CL)))) <= l_665), ((VECTOR(uint32_t, 2))(4294967295UL)), 0xA37A2616L)).even)), 0xDCB904DFL, 0x2990EC69L)).zxzzzzwz, ((VECTOR(uint32_t, 8))(4294967295UL)), ((VECTOR(uint32_t, 8))(0UL))))).s7612224513355504)))).s8 | l_665), l_665)) == 0x5DL) != 0x5431CD234099079AL);
                }
                if ((*l_647))
                    continue;
            }
        }
    }
    l_10[0] ^= l_684;
    return p_685->g_73.w;
}


/* ------------------------------------------ */
/* 
 * reads : p_685->g_376 p_685->g_91 p_685->g_278 p_685->g_586 p_685->g_380 p_685->g_8 p_685->g_34 p_685->g_101
 * writes: p_685->g_91 p_685->g_278 p_685->g_261 p_685->g_263
 */
int32_t * func_2(int32_t * p_3, int64_t  p_4, int32_t * p_5, int64_t  p_6, struct S1 * p_685)
{ /* block id: 274 */
    int16_t l_502 = (-9L);
    int32_t *l_503[8][8][2] = {{{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91}},{{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91}},{{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91}},{{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91}},{{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91}},{{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91}},{{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91}},{{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91},{&p_685->g_91,&p_685->g_91}}};
    int64_t l_573 = 0x1E965270BC9F9970L;
    int16_t l_574 = 0L;
    int8_t l_575 = 0x24L;
    uint64_t l_577 = 6UL;
    uint16_t *l_584 = &p_685->g_261;
    uint16_t *l_585 = &p_685->g_263;
    uint64_t *l_588 = &p_685->g_278;
    VECTOR(uint32_t, 4) l_592 = (VECTOR(uint32_t, 4))(0xEF88E1E7L, (VECTOR(uint32_t, 2))(0xEF88E1E7L, 1UL), 1UL);
    uint32_t l_597 = 4294967288UL;
    uint32_t l_598 = 0x3193CBAEL;
    int i, j, k;
    (*p_685->g_376) ^= (safe_sub_func_uint32_t_u_u(l_502, l_502));
    for (p_685->g_278 = (-7); (p_685->g_278 == 53); p_685->g_278 = safe_add_func_int8_t_s_s(p_685->g_278, 5))
    { /* block id: 278 */
        int32_t l_568 = 1L;
        int32_t l_569 = 0x3FDDC460L;
        int32_t l_570 = 0x187606F5L;
        int32_t l_571[8][6] = {{0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL},{0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL},{0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL},{0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL},{0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL},{0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL},{0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL},{0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL,0x383AA70EL}};
        int32_t l_572 = 0x2A702445L;
        int32_t l_576 = 0x5BB81BC1L;
        int i, j;
        if ((atomic_inc(&p_685->l_atomic_input[34]) == 7))
        { /* block id: 280 */
            int32_t l_506[3];
            uint16_t l_511 = 4UL;
            uint16_t l_512 = 0xFE77L;
            VECTOR(int64_t, 8) l_564 = (VECTOR(int64_t, 8))(0x4716EBED2152099FL, (VECTOR(int64_t, 4))(0x4716EBED2152099FL, (VECTOR(int64_t, 2))(0x4716EBED2152099FL, 0x1034977EEB9D50C6L), 0x1034977EEB9D50C6L), 0x1034977EEB9D50C6L, 0x4716EBED2152099FL, 0x1034977EEB9D50C6L);
            int16_t l_565 = 0L;
            int64_t l_566 = 0x30DAD9982DB74436L;
            int8_t l_567 = 9L;
            int i;
            for (i = 0; i < 3; i++)
                l_506[i] = (-1L);
            for (l_506[2] = 16; (l_506[2] > 24); l_506[2] = safe_add_func_int64_t_s_s(l_506[2], 1))
            { /* block id: 283 */
                int32_t l_509 = 0x04F7A7D5L;
                int8_t l_510 = 0x31L;
                l_509 = 0x4025476FL;
                l_510 |= (-7L);
            }
            l_512 = l_511;
            for (l_506[1] = 0; (l_506[1] <= 22); ++l_506[1])
            { /* block id: 290 */
                uint16_t l_515[8] = {0UL,0x3EDAL,0UL,0UL,0x3EDAL,0UL,0UL,0x3EDAL};
                int32_t l_516 = 0L;
                uint8_t l_517 = 3UL;
                VECTOR(int32_t, 4) l_518 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, (-7L)), (-7L));
                VECTOR(int32_t, 8) l_519 = (VECTOR(int32_t, 8))(0x22F94751L, (VECTOR(int32_t, 4))(0x22F94751L, (VECTOR(int32_t, 2))(0x22F94751L, 0x6725D763L), 0x6725D763L), 0x6725D763L, 0x22F94751L, 0x6725D763L);
                VECTOR(int64_t, 2) l_520 = (VECTOR(int64_t, 2))(1L, 2L);
                uint32_t l_521 = 0UL;
                int32_t l_524 = 0x17E85365L;
                int32_t l_525 = 0x76968637L;
                VECTOR(int32_t, 8) l_526 = (VECTOR(int32_t, 8))(0x5E75DC28L, (VECTOR(int32_t, 4))(0x5E75DC28L, (VECTOR(int32_t, 2))(0x5E75DC28L, (-1L)), (-1L)), (-1L), 0x5E75DC28L, (-1L));
                VECTOR(int32_t, 4) l_527 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 2L), 2L);
                VECTOR(int32_t, 8) l_528 = (VECTOR(int32_t, 8))(0x6217B703L, (VECTOR(int32_t, 4))(0x6217B703L, (VECTOR(int32_t, 2))(0x6217B703L, (-6L)), (-6L)), (-6L), 0x6217B703L, (-6L));
                int8_t l_529 = 5L;
                uint8_t l_530 = 249UL;
                VECTOR(int32_t, 8) l_531 = (VECTOR(int32_t, 8))(0x36B368BDL, (VECTOR(int32_t, 4))(0x36B368BDL, (VECTOR(int32_t, 2))(0x36B368BDL, 0x57E29BA3L), 0x57E29BA3L), 0x57E29BA3L, 0x36B368BDL, 0x57E29BA3L);
                int16_t l_532 = 0x6785L;
                uint8_t l_533 = 1UL;
                VECTOR(int32_t, 2) l_534 = (VECTOR(int32_t, 2))(0x4E88D1E1L, 1L);
                VECTOR(int32_t, 8) l_535 = (VECTOR(int32_t, 8))(0x6031EF99L, (VECTOR(int32_t, 4))(0x6031EF99L, (VECTOR(int32_t, 2))(0x6031EF99L, 0x753F1FFBL), 0x753F1FFBL), 0x753F1FFBL, 0x6031EF99L, 0x753F1FFBL);
                VECTOR(int32_t, 4) l_536 = (VECTOR(int32_t, 4))(0x59C6DD86L, (VECTOR(int32_t, 2))(0x59C6DD86L, 1L), 1L);
                VECTOR(uint32_t, 4) l_537 = (VECTOR(uint32_t, 4))(4294967292UL, (VECTOR(uint32_t, 2))(4294967292UL, 0x9685EDD1L), 0x9685EDD1L);
                int64_t l_538[6][8] = {{0x6E364B7E15D36307L,0L,0x6E364B7E15D36307L,0x6E364B7E15D36307L,0L,0x6E364B7E15D36307L,0x6E364B7E15D36307L,0L},{0x6E364B7E15D36307L,0L,0x6E364B7E15D36307L,0x6E364B7E15D36307L,0L,0x6E364B7E15D36307L,0x6E364B7E15D36307L,0L},{0x6E364B7E15D36307L,0L,0x6E364B7E15D36307L,0x6E364B7E15D36307L,0L,0x6E364B7E15D36307L,0x6E364B7E15D36307L,0L},{0x6E364B7E15D36307L,0L,0x6E364B7E15D36307L,0x6E364B7E15D36307L,0L,0x6E364B7E15D36307L,0x6E364B7E15D36307L,0L},{0x6E364B7E15D36307L,0L,0x6E364B7E15D36307L,0x6E364B7E15D36307L,0L,0x6E364B7E15D36307L,0x6E364B7E15D36307L,0L},{0x6E364B7E15D36307L,0L,0x6E364B7E15D36307L,0x6E364B7E15D36307L,0L,0x6E364B7E15D36307L,0x6E364B7E15D36307L,0L}};
                int32_t l_539 = (-1L);
                int16_t l_540 = 1L;
                VECTOR(uint8_t, 8) l_541 = (VECTOR(uint8_t, 8))(0xEAL, (VECTOR(uint8_t, 4))(0xEAL, (VECTOR(uint8_t, 2))(0xEAL, 0x56L), 0x56L), 0x56L, 0xEAL, 0x56L);
                uint32_t l_542 = 0x184328EFL;
                int8_t l_543 = 0L;
                int i, j;
                l_515[7] = 1L;
                if (((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))((l_516 ^= ((VECTOR(int32_t, 2))(0x770D470AL, 1L)).hi), l_517, ((VECTOR(int32_t, 4))(l_518.wyxw)), 0x2618E881L, (-6L))).s3457054047117005, ((VECTOR(int32_t, 8))(safe_mad_hi_func_int32_t_s_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 16))(rotate(((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 2))(l_519.s73)).yyxyyxxxyyyxxyyx, (int32_t)(((VECTOR(int64_t, 2))(l_520.xx)).even , ((l_524 |= (l_521++)) , (l_518.z = l_525)))))), ((VECTOR(int32_t, 4))(rhadd(((VECTOR(int32_t, 16))(l_526.s0535750631273476)).s8e38, ((VECTOR(int32_t, 8))(l_527.zxxzxwzz)).lo))).xwyyzyyyzyxwyzyy))).hi, ((VECTOR(int32_t, 16))(0x35FD8686L, 0x425ED30AL, (l_529 |= (((VECTOR(uint32_t, 2))(4294967295UL, 4294967295UL)).odd , ((VECTOR(int32_t, 4))(mul_hi(((VECTOR(int32_t, 2))(3L, 0x6009E80AL)).yyyx, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(l_528.s57525556)).lo))))))).w)), ((VECTOR(int32_t, 2))(0L, 0L)), 0x27852181L, (-8L), 0x4F83818CL, (l_533 = (l_532 = (l_530 , ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))(l_531.s73032245)).s2532047021046473)))).sb))), 0x7645EE6AL, 0L, (((VECTOR(uint64_t, 2))(0x4EE7AE3FF43B408AL, 0x4805DFEA5A935538L)).odd , ((VECTOR(int32_t, 16))(max(((VECTOR(int32_t, 8))(mul_hi(((VECTOR(int32_t, 2))(l_534.yy)).xyyyxxxx, ((VECTOR(int32_t, 4))(l_535.s3160)).wwzwywxy))).s5571334646454363, ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 4))((-8L), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 2))(safe_clamp_func(VECTOR(int32_t, 2),int32_t,((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_536.ywyy)).yzxxxxwz)).s31)), (int32_t)0x7474F2FAL, (int32_t)(l_534.x = (((VECTOR(uint32_t, 2))(l_537.xx)).even , l_538[0][1]))))))), 6L)).even)).xyyyyyyxyxxxxxyx))).s1), ((((l_539 , ((VECTOR(int16_t, 4))((l_540 = 0L), (-5L), 0x602CL, 0L)).z) , ((VECTOR(uint8_t, 16))(l_541.s6414233446456260)).sc) , 4UL) , l_542), 0x41A25945L, 1L, 6L)).even, ((VECTOR(int32_t, 8))(0x67087D29L))))).s3642512144505325))))).s7, ((VECTOR(int32_t, 4))(0x72B63331L)), 9L, (-1L), 0x4EE0C770L)))), ((VECTOR(int32_t, 2))((-9L))), l_543, ((VECTOR(int32_t, 4))((-10L))), 0x4C451EB6L)).sb)
                { /* block id: 301 */
                    int32_t *l_544 = (void*)0;
                    l_544 = l_544;
                }
                else
                { /* block id: 303 */
                    int32_t l_545 = 0x1A807433L;
                    uint32_t l_561 = 0x292FF89AL;
                    uint32_t *l_560[6][7][3] = {{{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0}},{{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0}},{{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0}},{{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0}},{{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0}},{{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0},{&l_561,&l_561,(void*)0}}};
                    uint32_t **l_559[9][3][9] = {{{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]}},{{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]}},{{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]}},{{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]}},{{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]}},{{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]}},{{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]}},{{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]}},{{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]},{&l_560[5][4][0],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[0][0][2],&l_560[0][0][2],(void*)0,&l_560[0][0][2],&l_560[5][4][0]}}};
                    uint32_t **l_562 = &l_560[4][1][0];
                    uint16_t l_563 = 1UL;
                    int i, j, k;
                    l_519.s5 |= 3L;
                    for (l_545 = 19; (l_545 > (-14)); l_545--)
                    { /* block id: 307 */
                        uint32_t l_548 = 8UL;
                        uint32_t l_549 = 4294967295UL;
                        uint64_t l_550 = 0UL;
                        uint16_t l_551 = 0x225FL;
                        int16_t l_552 = (-4L);
                        int64_t l_553[8];
                        int32_t l_554 = 0x227A274FL;
                        uint64_t l_555 = 18446744073709551608UL;
                        uint64_t l_558[9] = {0xF15DA8F40165F3CCL,0xF15DA8F40165F3CCL,0xF15DA8F40165F3CCL,0xF15DA8F40165F3CCL,0xF15DA8F40165F3CCL,0xF15DA8F40165F3CCL,0xF15DA8F40165F3CCL,0xF15DA8F40165F3CCL,0xF15DA8F40165F3CCL};
                        int i;
                        for (i = 0; i < 8; i++)
                            l_553[i] = 1L;
                        l_528.s1 = (((l_532 = l_548) , (l_550 &= l_549)) , l_551);
                        l_555++;
                        l_535.s5 |= 9L;
                        l_518.y ^= l_558[7];
                    }
                    l_562 = l_559[0][1][8];
                    l_519.s7 = l_563;
                }
            }
            l_567 = ((l_565 |= ((VECTOR(int64_t, 2))(l_564.s03)).lo) , l_566);
            unsigned int result = 0;
            int l_506_i0;
            for (l_506_i0 = 0; l_506_i0 < 3; l_506_i0++) {
                result += l_506[l_506_i0];
            }
            result += l_511;
            result += l_512;
            result += l_564.s7;
            result += l_564.s6;
            result += l_564.s5;
            result += l_564.s4;
            result += l_564.s3;
            result += l_564.s2;
            result += l_564.s1;
            result += l_564.s0;
            result += l_565;
            result += l_566;
            result += l_567;
            atomic_add(&p_685->l_special_values[34], result);
        }
        else
        { /* block id: 321 */
            (1 + 1);
        }
        l_577--;
    }
    l_598 = (safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(((*l_584) = p_6), ((*l_585) = GROUP_DIVERGE(1, 1)))), (((VECTOR(int32_t, 8))(add_sat(((VECTOR(int32_t, 8))((-10L), 0x6805412CL, ((*p_685->g_376) ^= p_4), ((VECTOR(int32_t, 4))(max(((VECTOR(int32_t, 4))(p_685->g_586.s621c)), ((VECTOR(int32_t, 2))(0x3BEE8066L, 0x010ADB70L)).xxyx))), 0L)), ((VECTOR(int32_t, 2))((-5L), 3L)).yyyyxyxy))).s0 , (((VECTOR(int32_t, 2))(0x1E80B20CL, 0L)).even < ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 8))((safe_unary_minus_func_uint64_t_u((--(*l_588)))), (safe_unary_minus_func_uint64_t_u(((+((*p_685->g_376) = (((VECTOR(uint32_t, 2))(clz(((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(l_592.wwyxwzywzxxzyxyy)).s72))))).hi , (*p_685->g_380)))) == ((VECTOR(int32_t, 2))(0L, 0x131D03EAL)).lo))), 0L, 8L, (((safe_mod_func_uint16_t_u_u((p_6 <= ((1UL > (safe_mul_func_uint8_t_u_u((6L < (*p_685->g_380)), (p_6 <= (((+(((+(+(p_6 < p_4))) ^ p_685->g_34) || l_597)) > 0x5FB7L) | p_685->g_101.s3))))) < p_4)), p_6)) == 0x2427L) < 65529UL), ((VECTOR(int32_t, 2))((-5L))), 0L)).s7626523053654153)).s9516)).y))));
    return l_503[3][3][1];
}


/* ------------------------------------------ */
/* 
 * reads : p_685->g_27 p_685->g_34 p_685->g_251 p_685->g_279 p_685->g_8 p_685->g_15 p_685->l_comm_values p_685->g_278 p_685->g_248 p_685->g_338 p_685->g_comm_values p_685->g_376 p_685->g_91 p_685->g_263 p_685->g_266 p_685->g_380
 * writes: p_685->g_27 p_685->g_263 p_685->g_261 p_685->g_34 p_685->g_251 p_685->g_8 p_685->g_248 p_685->g_278 p_685->g_101 p_685->g_266
 */
int32_t * func_11(uint32_t  p_12, int32_t  p_13, struct S1 * p_685)
{ /* block id: 215 */
    uint16_t *l_383 = &p_685->g_261;
    int32_t l_384[10] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
    VECTOR(uint32_t, 8) l_399 = (VECTOR(uint32_t, 8))(0xF83154AAL, (VECTOR(uint32_t, 4))(0xF83154AAL, (VECTOR(uint32_t, 2))(0xF83154AAL, 4294967293UL), 4294967293UL), 4294967293UL, 0xF83154AAL, 4294967293UL);
    VECTOR(int32_t, 16) l_462 = (VECTOR(int32_t, 16))(0x30D1E064L, (VECTOR(int32_t, 4))(0x30D1E064L, (VECTOR(int32_t, 2))(0x30D1E064L, 0x00FEEB22L), 0x00FEEB22L), 0x00FEEB22L, 0x30D1E064L, 0x00FEEB22L, (VECTOR(int32_t, 2))(0x30D1E064L, 0x00FEEB22L), (VECTOR(int32_t, 2))(0x30D1E064L, 0x00FEEB22L), 0x30D1E064L, 0x00FEEB22L, 0x30D1E064L, 0x00FEEB22L);
    union U0 *l_483 = &p_685->g_484;
    int i;
    l_384[7] &= (l_383 != (void*)0);
    for (p_685->g_27 = 0; (p_685->g_27 >= 35); p_685->g_27 = safe_add_func_uint16_t_u_u(p_685->g_27, 6))
    { /* block id: 219 */
        VECTOR(uint16_t, 16) l_407 = (VECTOR(uint16_t, 16))(0x2933L, (VECTOR(uint16_t, 4))(0x2933L, (VECTOR(uint16_t, 2))(0x2933L, 0x7128L), 0x7128L), 0x7128L, 0x2933L, 0x7128L, (VECTOR(uint16_t, 2))(0x2933L, 0x7128L), (VECTOR(uint16_t, 2))(0x2933L, 0x7128L), 0x2933L, 0x7128L, 0x2933L, 0x7128L);
        int32_t *l_415[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int16_t l_476 = 0x08C2L;
        int64_t l_494[4];
        int i;
        for (i = 0; i < 4; i++)
            l_494[i] = 0L;
        for (p_685->g_263 = (-22); (p_685->g_263 <= 41); p_685->g_263 = safe_add_func_int32_t_s_s(p_685->g_263, 1))
        { /* block id: 222 */
            int64_t l_421 = 0x4070D7A744778557L;
            uint32_t *l_428[6] = {&p_685->g_15,&p_685->g_15,&p_685->g_15,&p_685->g_15,&p_685->g_15,&p_685->g_15};
            int32_t l_436 = (-1L);
            int32_t l_487 = (-1L);
            int32_t l_488 = 0L;
            int32_t l_489 = 1L;
            int32_t l_490 = 0x1F41DDB1L;
            int32_t l_491 = 1L;
            int32_t l_492 = 0x3649EB27L;
            int32_t l_493[10] = {0x2F314B03L,0x04531805L,0x2F314B03L,0x2F314B03L,0x04531805L,0x2F314B03L,0x2F314B03L,0x04531805L,0x2F314B03L,0x2F314B03L};
            int8_t l_495 = 0x67L;
            VECTOR(uint8_t, 16) l_497 = (VECTOR(uint8_t, 16))(0x0EL, (VECTOR(uint8_t, 4))(0x0EL, (VECTOR(uint8_t, 2))(0x0EL, 7UL), 7UL), 7UL, 0x0EL, 7UL, (VECTOR(uint8_t, 2))(0x0EL, 7UL), (VECTOR(uint8_t, 2))(0x0EL, 7UL), 0x0EL, 7UL, 0x0EL, 7UL);
            int i;
            for (p_685->g_261 = 0; (p_685->g_261 == 22); p_685->g_261 = safe_add_func_uint16_t_u_u(p_685->g_261, 8))
            { /* block id: 225 */
                uint8_t *l_395 = (void*)0;
                uint8_t *l_396 = &p_685->g_34;
                int8_t *l_402 = (void*)0;
                int8_t *l_403 = (void*)0;
                int8_t *l_404 = (void*)0;
                int8_t *l_405 = (void*)0;
                VECTOR(uint64_t, 4) l_408 = (VECTOR(uint64_t, 4))(0x1B1972A57CDB615CL, (VECTOR(uint64_t, 2))(0x1B1972A57CDB615CL, 0xB2C221E806D19C9CL), 0xB2C221E806D19C9CL);
                int32_t *l_416 = &p_685->g_8;
                uint32_t *l_417 = (void*)0;
                uint32_t *l_418 = (void*)0;
                uint32_t *l_419 = (void*)0;
                uint32_t *l_420[2][8];
                int32_t l_453 = 0x710339B1L;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 8; j++)
                        l_420[i][j] = (void*)0;
                }
                if ((safe_div_func_uint32_t_u_u(((((((VECTOR(uint32_t, 2))(0UL, 0x02028855L)).hi < 0x699B928AL) ^ (+(p_685->g_251.x = ((((safe_mul_func_int32_t_s_s(((!((*l_396) &= l_384[7])) , (safe_rshift_func_int8_t_s_s((((VECTOR(uint32_t, 2))(l_399.s77)).even , (safe_rshift_func_uint8_t_u_s(FAKE_DIVERGE(p_685->group_0_offset, get_group_id(0), 10), 7))), (+(l_384[7] = p_13))))), (((VECTOR(int32_t, 8))((-1L), ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 2))((-1L), 0x3C6EB0B0L)), 6L, 0x4F3FB114L)), ((((0xF2L != 0x14L) ^ 0x1AA8235BL) <= ((safe_unary_minus_func_int64_t_s(((VECTOR(int64_t, 2))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 2))(min(((VECTOR(int64_t, 16))(0L, ((VECTOR(int64_t, 8))(((p_685->g_278 ^ p_13) || ((((~((VECTOR(uint16_t, 8))(l_407.s21e90009)).s2) | (((((VECTOR(uint64_t, 2))(l_408.yy)).odd == (((safe_sub_func_uint64_t_u_u((safe_mod_func_int64_t_s_s((((((safe_mod_func_int64_t_s_s(p_685->g_101.s4, p_13)) <= l_407.s5) && 0x2C9533D4027059EFL) && 0x73C6C6B4AFF16D93L) == 0x067FL), p_685->g_73.w)), 0L)) ^ p_685->g_342.y) && p_12)) != p_12) == 0UL)) , p_12) > 0x58L)), l_399.s6, l_407.sb, 1L, ((VECTOR(int64_t, 4))((-1L))))), 0x156D2CA097306432L, (-5L), ((VECTOR(int64_t, 2))(0L)), 1L, 0x209F52B307CCA20EL, 0x3243DF29B417A8A7L)).sa8, (int64_t)p_12))), ((VECTOR(int64_t, 4))(4L)), (-1L), 1L)).s62)).lo)) | l_407.s1)) > p_685->g_8), 0x497466D9L, 0x45186435L)).s2 > (-2L)))) , l_415[1]) == l_416) < l_399.s3)))) | l_399.s0) ^ p_685->g_27), l_421)))
                { /* block id: 229 */
                    int8_t *l_429 = (void*)0;
                    int8_t *l_430 = (void*)0;
                    int8_t *l_431 = (void*)0;
                    int8_t *l_432 = (void*)0;
                    int8_t *l_433 = (void*)0;
                    int8_t *l_434 = (void*)0;
                    int8_t *l_435[9][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int16_t *l_445[6][7][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int32_t l_446 = 0L;
                    int32_t l_454[5][9][3] = {{{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL}},{{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL}},{{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL}},{{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL}},{{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL},{0x5BFECE15L,0x20C84568L,0x003A273AL}}};
                    int32_t l_459 = 8L;
                    int32_t l_460 = 0L;
                    int32_t l_461 = 0x5732030FL;
                    uint16_t **l_468 = &l_383;
                    uint64_t *l_475[6] = {&p_685->g_278,&p_685->g_278,&p_685->g_278,&p_685->g_278,&p_685->g_278,&p_685->g_278};
                    int i, j, k;
                    if ((atomic_inc(&p_685->l_atomic_input[33]) == 3))
                    { /* block id: 231 */
                        uint16_t l_422 = 0x3425L;
                        int32_t l_423 = 8L;
                        int32_t *l_424 = &l_423;
                        int32_t *l_425 = &l_423;
                        l_423 &= l_422;
                        l_425 = (l_424 = l_424);
                        unsigned int result = 0;
                        result += l_422;
                        result += l_423;
                        atomic_add(&p_685->l_special_values[33], result);
                    }
                    else
                    { /* block id: 235 */
                        (1 + 1);
                    }
                    (*l_416) = (~(safe_mod_func_int8_t_s_s((l_436 ^= (l_428[1] != (void*)0)), 1UL)));
                    l_461 ^= (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u(p_685->g_251.y, 0x9D17L)), (safe_rshift_func_int16_t_s_u((l_446 ^= 0x4D67L), (safe_sub_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((((((p_13 ^ ((VECTOR(int32_t, 2))(0x73C7DC82L, 0x3D14C5C3L)).lo) < p_685->g_279) | ((l_459 &= (p_685->g_248.s7 = (safe_div_func_uint8_t_u_u(((VECTOR(uint8_t, 16))(1UL, (l_384[7] = ((l_454[0][8][0] ^= (l_453 = ((*l_416) = l_436))) || (l_399.s5 , (safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(1UL, 7)), 2UL))))), ((VECTOR(uint8_t, 2))(255UL)), ((VECTOR(uint8_t, 2))(253UL)), ((VECTOR(uint8_t, 4))(0xB4L)), ((VECTOR(uint8_t, 2))(1UL)), 0x70L, ((VECTOR(uint8_t, 2))(1UL)), 0xA4L)).s7, p_12)))) && (*l_416))) & l_399.s5) != l_460), p_12)), l_421)))))), 5));
                    (*l_416) = (((+((VECTOR(int32_t, 16))(l_462.s7f45578ed2dda715)).s2) || (safe_sub_func_uint16_t_u_u((((((VECTOR(uint32_t, 8))(add_sat(((VECTOR(uint32_t, 16))(p_685->g_465.yzxzxzxyxywwwywx)).even, ((VECTOR(uint32_t, 2))(4294967295UL, 0x5C877AC8L)).xxyxyyxy))).s7 > p_685->g_15) | p_685->l_comm_values[(safe_mod_func_uint32_t_u_u(p_685->tid, 2))]) <= l_421), (((((((((safe_lshift_func_int8_t_s_u(((((*l_468) = (void*)0) == (void*)0) ^ (safe_div_func_int32_t_s_s(9L, (++p_685->g_251.y)))), (safe_sub_func_uint64_t_u_u(((p_685->g_279 ^ (((p_685->g_278 |= (p_12 < (p_13 <= 0x66L))) > p_685->g_248.s7) ^ p_12)) == p_685->g_338.s2), 8L)))) >= p_12) != p_13) || p_685->g_338.s6) ^ 8L) & 7UL) && (*l_416)) < 3UL) | l_462.s5)))) <= p_685->g_comm_values[p_685->tid]);
                }
                else
                { /* block id: 252 */
                    (*l_416) = ((~p_685->g_248.s4) & (l_476 >= ((safe_div_func_uint32_t_u_u((p_685->g_101.s0 = FAKE_DIVERGE(p_685->group_2_offset, get_group_id(2), 10)), (*p_685->g_376))) ^ p_685->g_263)));
                    return &p_685->g_8;
                }
                if (l_421)
                    break;
                for (l_453 = 0; (l_453 >= 29); l_453 = safe_add_func_uint8_t_u_u(l_453, 2))
                { /* block id: 260 */
                    union U0 *l_486 = (void*)0;
                    for (p_685->g_266 = 2; (p_685->g_266 <= 24); p_685->g_266 = safe_add_func_uint16_t_u_u(p_685->g_266, 1))
                    { /* block id: 263 */
                        l_486 = l_483;
                        if ((*p_685->g_380))
                            continue;
                    }
                    return &p_685->g_91;
                }
            }
            --l_497.s3;
        }
    }
    return &p_685->g_8;
}


/* ------------------------------------------ */
/* 
 * reads : p_685->g_8 p_685->g_27 p_685->g_comm_values p_685->g_316 p_685->l_comm_values p_685->g_73 p_685->g_21 p_685->g_91 p_685->g_101 p_685->g_248 p_685->g_251 p_685->g_261 p_685->g_266 p_685->g_7 p_685->g_268 p_685->g_376 p_685->g_380 p_685->g_381
 * writes: p_685->g_8 p_685->g_27 p_685->g_90 p_685->g_21 p_685->g_91 p_685->g_101 p_685->g_261 p_685->g_263 p_685->g_266 p_685->g_268 p_685->g_278 p_685->g_279 p_685->g_248
 */
int32_t  func_16(uint32_t * p_17, int8_t  p_18, int32_t  p_19, uint32_t * p_20, struct S1 * p_685)
{ /* block id: 8 */
    uint64_t l_35 = 8UL;
    int32_t l_36 = 1L;
    int32_t **l_382 = &p_685->g_90[5][1][1];
    for (p_685->g_8 = 0; (p_685->g_8 < 18); ++p_685->g_8)
    { /* block id: 11 */
        int64_t l_37 = 0x36EA4182467468E5L;
        for (p_18 = 0; (p_18 > (-9)); p_18 = safe_sub_func_uint64_t_u_u(p_18, 3))
        { /* block id: 14 */
            uint8_t *l_26 = &p_685->g_27;
            int64_t *l_33[10] = {&p_685->g_21,&p_685->g_21,&p_685->g_21,&p_685->g_21,&p_685->g_21,&p_685->g_21,&p_685->g_21,&p_685->g_21,&p_685->g_21,&p_685->g_21};
            int32_t *l_47 = &p_685->g_8;
            int i;
            (*p_685->g_376) = (((((*l_26) &= GROUP_DIVERGE(1, 1)) != (safe_mod_func_uint8_t_u_u(((VECTOR(uint8_t, 8))(p_685->g_30.s33527321)).s5, ((VECTOR(uint8_t, 4))((FAKE_DIVERGE(p_685->group_0_offset, get_group_id(0), 10) && (safe_sub_func_uint64_t_u_u((((p_685->g_34 = p_685->g_8) != (l_36 &= l_35)) < ((void*)0 == &p_685->g_8)), l_37))), ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 2))(248UL, 255UL)))).xyxyyxyyyyyyyxyx)).s90)), 0xF4L)).x))) , 0xB1F0L) > func_38(p_685->g_8, func_44(l_47, (l_35 , p_685->g_comm_values[p_685->tid]), p_685), p_20, p_685->g_7[2][6], &l_37, p_685));
        }
    }
    (*p_685->g_380) ^= (safe_mul_func_uint8_t_u_u(0xFDL, 0xD8L));
    (*p_685->g_381) = &l_36;
    (*l_382) = p_20;
    return p_685->g_101.s4;
}


/* ------------------------------------------ */
/* 
 * reads : p_685->g_279 p_685->g_338 p_685->g_91 p_685->g_268 p_685->g_342
 * writes: p_685->g_279 p_685->g_248 p_685->g_278 p_685->g_91 p_685->g_268
 */
int16_t  func_38(int32_t  p_39, uint8_t * p_40, int32_t * p_41, uint32_t * p_42, int64_t * p_43, struct S1 * p_685)
{ /* block id: 177 */
    int32_t *l_322 = &p_685->g_268;
    int32_t l_329 = (-4L);
    int32_t l_330 = (-6L);
    int32_t l_332[3][2][6] = {{{(-3L),(-3L),(-7L),0x56FD0D4BL,0x798D623EL,0x56FD0D4BL},{(-3L),(-3L),(-7L),0x56FD0D4BL,0x798D623EL,0x56FD0D4BL}},{{(-3L),(-3L),(-7L),0x56FD0D4BL,0x798D623EL,0x56FD0D4BL},{(-3L),(-3L),(-7L),0x56FD0D4BL,0x798D623EL,0x56FD0D4BL}},{{(-3L),(-3L),(-7L),0x56FD0D4BL,0x798D623EL,0x56FD0D4BL},{(-3L),(-3L),(-7L),0x56FD0D4BL,0x798D623EL,0x56FD0D4BL}}};
    VECTOR(uint64_t, 16) l_339 = (VECTOR(uint64_t, 16))(0x20808413C5CF9498L, (VECTOR(uint64_t, 4))(0x20808413C5CF9498L, (VECTOR(uint64_t, 2))(0x20808413C5CF9498L, 1UL), 1UL), 1UL, 0x20808413C5CF9498L, 1UL, (VECTOR(uint64_t, 2))(0x20808413C5CF9498L, 1UL), (VECTOR(uint64_t, 2))(0x20808413C5CF9498L, 1UL), 0x20808413C5CF9498L, 1UL, 0x20808413C5CF9498L, 1UL);
    int16_t *l_345[8][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
    uint64_t *l_346 = &p_685->g_278;
    int i, j, k;
    for (p_685->g_279 = (-10); (p_685->g_279 > 53); p_685->g_279 = safe_add_func_uint64_t_u_u(p_685->g_279, 1))
    { /* block id: 180 */
        int32_t *l_319 = &p_685->g_91;
        int32_t **l_320 = (void*)0;
        int32_t **l_321 = (void*)0;
        int32_t *l_323 = &p_685->g_268;
        int32_t *l_324 = &p_685->g_91;
        int32_t *l_325[5][6][8] = {{{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268}},{{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268}},{{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268}},{{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268}},{{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268},{&p_685->g_268,&p_685->g_268,&p_685->g_268,&p_685->g_91,&p_685->g_268,&p_685->g_91,&p_685->g_91,&p_685->g_268}}};
        uint32_t l_326 = 0UL;
        int64_t l_331[8][7][4] = {{{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL}},{{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL}},{{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL}},{{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL}},{{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL}},{{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL}},{{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL}},{{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL},{0x45AD507E42EB2ACDL,0x3307EA0F658CCEF0L,(-1L),0x46347E4C8D6F656CL}}};
        uint64_t l_333 = 0UL;
        int i, j, k;
        l_322 = l_319;
        if (p_39)
            break;
        l_326--;
        ++l_333;
    }
    (*l_322) = ((safe_mul_func_int8_t_s_s(((VECTOR(int8_t, 16))(p_685->g_338.s3266555477104123)).sc, FAKE_DIVERGE(p_685->local_0_offset, get_local_id(0), 10))) & (((VECTOR(uint64_t, 16))(l_339.s066d70805a6e97c8)).sc > ((*l_346) = (((((p_43 == (void*)0) | (0x7321L == (p_685->g_248.s4 = ((((*l_322) & (((safe_mul_func_int8_t_s_s(((void*)0 == l_322), ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(p_685->g_342.xxxyxxyyyxxxyyyy)).s57)).even)) , (safe_add_func_uint64_t_u_u((((void*)0 != &p_41) <= (*l_322)), 18446744073709551615UL))) <= 0x56D2L)) | (*l_322)) , 1L)))) || (*l_322)) , 0x10L) || p_39))));
    if ((atomic_inc(&p_685->l_atomic_input[5]) == 5))
    { /* block id: 190 */
        int32_t l_347 = 1L;
        int32_t l_361 = (-1L);
        int32_t l_362 = 0x5440D284L;
        int64_t l_363[7];
        int32_t l_364 = 0x438B039CL;
        int8_t l_365[10] = {1L,(-8L),0x08L,(-8L),1L,1L,(-8L),0x08L,(-8L),1L};
        uint16_t l_366 = 0x0CC3L;
        int32_t *l_369[7][9][1] = {{{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364}},{{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364}},{{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364}},{{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364}},{{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364}},{{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364}},{{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364},{&l_364}}};
        int32_t *l_370 = &l_364;
        int16_t l_371 = 2L;
        int64_t l_372[10][6] = {{0x4A1A9346788B6936L,0x548A3C778831B738L,0x6E277210A90C2D0CL,0x4A1A9346788B6936L,0x60F30A380BEEFADDL,0x6E277210A90C2D0CL},{0x4A1A9346788B6936L,0x548A3C778831B738L,0x6E277210A90C2D0CL,0x4A1A9346788B6936L,0x60F30A380BEEFADDL,0x6E277210A90C2D0CL},{0x4A1A9346788B6936L,0x548A3C778831B738L,0x6E277210A90C2D0CL,0x4A1A9346788B6936L,0x60F30A380BEEFADDL,0x6E277210A90C2D0CL},{0x4A1A9346788B6936L,0x548A3C778831B738L,0x6E277210A90C2D0CL,0x4A1A9346788B6936L,0x60F30A380BEEFADDL,0x6E277210A90C2D0CL},{0x4A1A9346788B6936L,0x548A3C778831B738L,0x6E277210A90C2D0CL,0x4A1A9346788B6936L,0x60F30A380BEEFADDL,0x6E277210A90C2D0CL},{0x4A1A9346788B6936L,0x548A3C778831B738L,0x6E277210A90C2D0CL,0x4A1A9346788B6936L,0x60F30A380BEEFADDL,0x6E277210A90C2D0CL},{0x4A1A9346788B6936L,0x548A3C778831B738L,0x6E277210A90C2D0CL,0x4A1A9346788B6936L,0x60F30A380BEEFADDL,0x6E277210A90C2D0CL},{0x4A1A9346788B6936L,0x548A3C778831B738L,0x6E277210A90C2D0CL,0x4A1A9346788B6936L,0x60F30A380BEEFADDL,0x6E277210A90C2D0CL},{0x4A1A9346788B6936L,0x548A3C778831B738L,0x6E277210A90C2D0CL,0x4A1A9346788B6936L,0x60F30A380BEEFADDL,0x6E277210A90C2D0CL},{0x4A1A9346788B6936L,0x548A3C778831B738L,0x6E277210A90C2D0CL,0x4A1A9346788B6936L,0x60F30A380BEEFADDL,0x6E277210A90C2D0CL}};
        uint32_t l_373[10];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_363[i] = 0x466E6F554CB47455L;
        for (i = 0; i < 10; i++)
            l_373[i] = 0x6E60CDF7L;
        for (l_347 = 19; (l_347 >= (-13)); l_347 = safe_sub_func_uint32_t_u_u(l_347, 4))
        { /* block id: 193 */
            VECTOR(int32_t, 8) l_350 = (VECTOR(int32_t, 8))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 1L), 1L), 1L, 0L, 1L);
            VECTOR(int32_t, 2) l_351 = (VECTOR(int32_t, 2))(0x5B737E6BL, 0x341D5E5CL);
            uint16_t l_352[4][2][5] = {{{8UL,8UL,65529UL,0x4C07L,6UL},{8UL,8UL,65529UL,0x4C07L,6UL}},{{8UL,8UL,65529UL,0x4C07L,6UL},{8UL,8UL,65529UL,0x4C07L,6UL}},{{8UL,8UL,65529UL,0x4C07L,6UL},{8UL,8UL,65529UL,0x4C07L,6UL}},{{8UL,8UL,65529UL,0x4C07L,6UL},{8UL,8UL,65529UL,0x4C07L,6UL}}};
            int64_t l_353 = 0x67D672569070D5EAL;
            uint32_t l_354 = 0UL;
            int8_t l_355 = (-10L);
            int32_t l_356 = 0x1D76BE41L;
            uint64_t l_357 = 18446744073709551608UL;
            uint8_t l_358 = 0x65L;
            int i, j, k;
            l_351.y = l_350.s5;
            l_355 |= (l_354 = (l_353 &= l_352[2][0][2]));
            l_357 = l_356;
            --l_358;
        }
        l_366--;
        l_370 = l_369[5][0][0];
        l_373[9]++;
        unsigned int result = 0;
        result += l_347;
        result += l_361;
        result += l_362;
        int l_363_i0;
        for (l_363_i0 = 0; l_363_i0 < 7; l_363_i0++) {
            result += l_363[l_363_i0];
        }
        result += l_364;
        int l_365_i0;
        for (l_365_i0 = 0; l_365_i0 < 10; l_365_i0++) {
            result += l_365[l_365_i0];
        }
        result += l_366;
        result += l_371;
        int l_372_i0, l_372_i1;
        for (l_372_i0 = 0; l_372_i0 < 10; l_372_i0++) {
            for (l_372_i1 = 0; l_372_i1 < 6; l_372_i1++) {
                result += l_372[l_372_i0][l_372_i1];
            }
        }
        int l_373_i0;
        for (l_373_i0 = 0; l_373_i0 < 10; l_373_i0++) {
            result += l_373[l_373_i0];
        }
        atomic_add(&p_685->l_special_values[5], result);
    }
    else
    { /* block id: 204 */
        (1 + 1);
    }
    return (*l_322);
}


/* ------------------------------------------ */
/* 
 * reads : p_685->l_comm_values p_685->g_comm_values p_685->g_73 p_685->g_21 p_685->g_8 p_685->g_91 p_685->g_101 p_685->g_248 p_685->g_251 p_685->g_261 p_685->g_266 p_685->g_316
 * writes: p_685->g_21 p_685->g_90 p_685->g_91 p_685->g_101 p_685->g_261 p_685->g_263 p_685->g_266 p_685->g_268 p_685->g_278 p_685->g_279
 */
uint8_t * func_44(int32_t * p_45, uint32_t  p_46, struct S1 * p_685)
{ /* block id: 18 */
    int64_t l_68 = 0x2329B61F2865603BL;
    uint32_t *l_100 = (void*)0;
    uint32_t *l_102 = (void*)0;
    uint32_t *l_103 = (void*)0;
    uint32_t *l_104 = (void*)0;
    int32_t *l_311[5][6][8] = {{{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0}},{{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0}},{{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0}},{{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0}},{{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0},{(void*)0,&p_685->g_268,&p_685->g_268,(void*)0,(void*)0,&p_685->g_268,&p_685->g_268,(void*)0}}};
    int8_t l_312 = 0x35L;
    uint64_t l_313 = 4UL;
    int i, j, k;
    atomic_xor(&p_685->g_atomic_reduction[get_linear_group_id()], ((func_48((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(p_685->l_comm_values[(safe_mod_func_uint32_t_u_u(p_685->tid, 2))], func_58((p_685->g_101.s7 = ((func_64((l_68 , p_45), ((safe_div_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(p_685->g_comm_values[p_685->tid], ((VECTOR(uint8_t, 4))(p_685->g_73.xzxw)).x)), (safe_rshift_func_int8_t_s_s(1L, 3)))) , func_76(p_45, p_685)), p_46, p_685) , p_685->g_8) , p_685->g_comm_values[p_685->tid])), p_45, p_685->l_comm_values[(safe_mod_func_uint32_t_u_u(p_685->tid, 2))], p_685->g_73.x, l_68, p_685))), p_685->g_8)), 0x19L)), l_68, l_68, p_685) || p_46) == 1L));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (get_linear_local_id() == 0)
        p_685->v_collective += p_685->g_atomic_reduction[get_linear_group_id()];
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_685->g_90[1][0][5] = (void*)0;
    l_313--;
    return p_685->g_316[0];
}


/* ------------------------------------------ */
/* 
 * reads : p_685->g_251
 * writes: p_685->g_90
 */
int64_t  func_48(uint64_t  p_49, int32_t  p_50, int32_t  p_51, struct S1 * p_685)
{ /* block id: 169 */
    int32_t **l_298 = &p_685->g_90[7][1][3];
    int32_t *l_299 = (void*)0;
    int32_t *l_300 = &p_685->g_91;
    int32_t *l_301 = &p_685->g_91;
    int32_t *l_302 = (void*)0;
    int32_t *l_303 = &p_685->g_91;
    int32_t *l_304 = &p_685->g_268;
    int32_t *l_305[9] = {&p_685->g_91,&p_685->g_91,&p_685->g_91,&p_685->g_91,&p_685->g_91,&p_685->g_91,&p_685->g_91,&p_685->g_91,&p_685->g_91};
    int32_t l_306 = 0x0DBBB141L;
    int8_t l_307 = 0x75L;
    uint32_t l_308 = 0x9AD657C2L;
    int i;
    (*l_298) = &p_51;
    --l_308;
    return p_685->g_251.x;
}


/* ------------------------------------------ */
/* 
 * reads : p_685->g_8 p_685->g_101 p_685->g_248 p_685->g_251 p_685->g_73 p_685->g_261 p_685->g_266 p_685->g_91
 * writes: p_685->g_21 p_685->g_91 p_685->g_261 p_685->g_263 p_685->g_266 p_685->g_268 p_685->g_278 p_685->g_279
 */
uint16_t  func_58(uint32_t  p_59, int32_t * p_60, int32_t  p_61, uint16_t  p_62, int32_t  p_63, struct S1 * p_685)
{ /* block id: 45 */
    VECTOR(uint32_t, 4) l_244 = (VECTOR(uint32_t, 4))(0xE842E0D8L, (VECTOR(uint32_t, 2))(0xE842E0D8L, 1UL), 1UL);
    int64_t *l_258 = &p_685->g_21;
    int32_t *l_259 = &p_685->g_91;
    uint16_t *l_260 = &p_685->g_261;
    uint16_t *l_262 = &p_685->g_263;
    uint16_t *l_264 = (void*)0;
    uint16_t *l_265 = &p_685->g_266;
    int32_t *l_267 = &p_685->g_268;
    uint64_t *l_277 = &p_685->g_278;
    uint32_t *l_290 = (void*)0;
    int16_t *l_291 = (void*)0;
    int16_t *l_292 = (void*)0;
    int16_t *l_293 = (void*)0;
    int16_t *l_294 = (void*)0;
    int16_t *l_295 = (void*)0;
    int16_t *l_296[7][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    VECTOR(uint8_t, 16) l_297 = (VECTOR(uint8_t, 16))(0xB3L, (VECTOR(uint8_t, 4))(0xB3L, (VECTOR(uint8_t, 2))(0xB3L, 0xEFL), 0xEFL), 0xEFL, 0xB3L, 0xEFL, (VECTOR(uint8_t, 2))(0xB3L, 0xEFL), (VECTOR(uint8_t, 2))(0xB3L, 0xEFL), 0xB3L, 0xEFL, 0xB3L, 0xEFL);
    int i, j;
    if ((atomic_inc(&p_685->l_atomic_input[41]) == 3))
    { /* block id: 47 */
        uint64_t l_105[5] = {0x78F42CBA3753CE46L,0x78F42CBA3753CE46L,0x78F42CBA3753CE46L,0x78F42CBA3753CE46L,0x78F42CBA3753CE46L};
        uint32_t l_237[6][8][5] = {{{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L}},{{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L}},{{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L}},{{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L}},{{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L}},{{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L},{0UL,0UL,1UL,0xB586D941L,0x74035108L}}};
        uint16_t l_238[4] = {65535UL,65535UL,65535UL,65535UL};
        int i, j, k;
        if (l_105[2])
        { /* block id: 48 */
            int32_t l_107 = (-6L);
            int32_t *l_106 = &l_107;
            uint32_t l_108[3][10][1] = {{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}},{{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}}};
            uint64_t l_109[5];
            uint32_t l_110 = 0UL;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_109[i] = 0UL;
            l_106 = (void*)0;
            l_109[2] ^= l_108[2][8][0];
            if (l_110)
            { /* block id: 51 */
                uint32_t l_111 = 4294967287UL;
                int32_t *l_118 = (void*)0;
                int32_t l_120 = (-1L);
                int32_t *l_119 = &l_120;
                int32_t *l_121 = &l_120;
                uint32_t l_122 = 1UL;
                if (l_111)
                { /* block id: 52 */
                    int32_t *l_112[2];
                    VECTOR(uint64_t, 16) l_113 = (VECTOR(uint64_t, 16))(7UL, (VECTOR(uint64_t, 4))(7UL, (VECTOR(uint64_t, 2))(7UL, 0xF95FD10891863936L), 0xF95FD10891863936L), 0xF95FD10891863936L, 7UL, 0xF95FD10891863936L, (VECTOR(uint64_t, 2))(7UL, 0xF95FD10891863936L), (VECTOR(uint64_t, 2))(7UL, 0xF95FD10891863936L), 7UL, 0xF95FD10891863936L, 7UL, 0xF95FD10891863936L);
                    VECTOR(int32_t, 8) l_116 = (VECTOR(int32_t, 8))(0x1A7C9710L, (VECTOR(int32_t, 4))(0x1A7C9710L, (VECTOR(int32_t, 2))(0x1A7C9710L, 0x5E5FF039L), 0x5E5FF039L), 0x5E5FF039L, 0x1A7C9710L, 0x5E5FF039L);
                    int16_t l_117 = 0x0921L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_112[i] = (void*)0;
                    l_106 = l_112[1];
                    l_113.s8--;
                    l_107 = (l_117 |= ((VECTOR(int32_t, 4))(l_116.s4001)).w);
                    l_107 = 0x74102D43L;
                }
                else
                { /* block id: 58 */
                    l_107 = 6L;
                }
                l_118 = (void*)0;
                l_121 = (l_106 = l_119);
                (*l_106) |= l_122;
            }
            else
            { /* block id: 65 */
                int32_t l_123[8][3][5] = {{{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L}},{{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L}},{{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L}},{{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L}},{{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L}},{{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L}},{{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L}},{{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L},{1L,0x4494E200L,0x0B002579L,0x4494E200L,1L}}};
                VECTOR(int32_t, 4) l_135 = (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0x76407DB5L), 0x76407DB5L);
                int8_t l_136 = (-1L);
                uint64_t l_137 = 0UL;
                int i, j, k;
                for (l_123[2][2][1] = 24; (l_123[2][2][1] <= 19); --l_123[2][2][1])
                { /* block id: 68 */
                    VECTOR(int32_t, 2) l_126 = (VECTOR(int32_t, 2))(0x54216E3AL, 0L);
                    VECTOR(int32_t, 2) l_127 = (VECTOR(int32_t, 2))(0L, 0x7E5926A3L);
                    int i;
                    l_107 &= ((VECTOR(int32_t, 2))(l_126.yx)).hi;
                    if ((l_107 = ((VECTOR(int32_t, 8))(1L, 0x6B43B7A3L, ((VECTOR(int32_t, 16))(l_127.xxxyxxxyxyyyyyyy)).s1, 0x3FE914D0L, 7L, (-1L), 0x7C8BC829L, (-1L))).s1))
                    { /* block id: 71 */
                        int32_t l_129 = (-1L);
                        int32_t *l_128 = &l_129;
                        uint16_t l_130 = 0x9E42L;
                        l_128 = l_128;
                        l_130--;
                    }
                    else
                    { /* block id: 74 */
                        VECTOR(int32_t, 2) l_133 = (VECTOR(int32_t, 2))(9L, 0x2947FBA1L);
                        int32_t l_134[10][4][6] = {{{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL}},{{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL}},{{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL}},{{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL}},{{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL}},{{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL}},{{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL}},{{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL}},{{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL}},{{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL},{0L,0L,0x5D3C7E7FL,0L,0L,0x5D3C7E7FL}}};
                        int i, j, k;
                        l_134[3][2][5] = ((VECTOR(int32_t, 16))(l_133.yxyyyyyyxyyxyyyy)).sb;
                    }
                }
                l_107 = ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_135.xzyy)).yxxzwxzwxyyyywwz)).s6;
                l_136 = 1L;
                l_135.w = l_137;
            }
        }
        else
        { /* block id: 82 */
            int32_t *l_138[1];
            int32_t l_140[2][5] = {{0x6C2AC01EL,1L,0x2B80D103L,1L,0x6C2AC01EL},{0x6C2AC01EL,1L,0x2B80D103L,1L,0x6C2AC01EL}};
            int32_t *l_139 = &l_140[0][4];
            int32_t **l_141 = &l_138[0];
            int32_t **l_142[9][3] = {{&l_139,&l_139,&l_139},{&l_139,&l_139,&l_139},{&l_139,&l_139,&l_139},{&l_139,&l_139,&l_139},{&l_139,&l_139,&l_139},{&l_139,&l_139,&l_139},{&l_139,&l_139,&l_139},{&l_139,&l_139,&l_139},{&l_139,&l_139,&l_139}};
            int32_t **l_143 = &l_138[0];
            int32_t l_144[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
            uint64_t l_145 = 18446744073709551609UL;
            int i, j;
            for (i = 0; i < 1; i++)
                l_138[i] = (void*)0;
            l_139 = (((VECTOR(int32_t, 2))((-1L), 0x14862D36L)).odd , l_138[0]);
            l_143 = (l_142[5][2] = l_141);
            l_145 = l_144[3];
            for (l_140[0][4] = 0; (l_140[0][4] <= 25); l_140[0][4] = safe_add_func_int8_t_s_s(l_140[0][4], 8))
            { /* block id: 89 */
                int64_t l_148[5][5] = {{0L,0x460D9B1443286D55L,0L,0L,0x460D9B1443286D55L},{0L,0x460D9B1443286D55L,0L,0L,0x460D9B1443286D55L},{0L,0x460D9B1443286D55L,0L,0L,0x460D9B1443286D55L},{0L,0x460D9B1443286D55L,0L,0L,0x460D9B1443286D55L},{0L,0x460D9B1443286D55L,0L,0L,0x460D9B1443286D55L}};
                int16_t l_149[1][4][7] = {{{1L,0x7045L,1L,0L,1L,0x7045L,1L},{1L,0x7045L,1L,0L,1L,0x7045L,1L},{1L,0x7045L,1L,0L,1L,0x7045L,1L},{1L,0x7045L,1L,0L,1L,0x7045L,1L}}};
                int8_t l_150 = 0x1EL;
                uint64_t l_151 = 0xB49327924F713FB6L;
                int8_t l_154 = 0x5DL;
                VECTOR(int32_t, 2) l_155 = (VECTOR(int32_t, 2))(0x15B68552L, 8L);
                int i, j, k;
                if ((((l_149[0][1][6] = l_148[3][3]) , 0x83L) , (l_155.x = ((VECTOR(int32_t, 8))(0x224BEAC1L, ((l_151++) , l_154), ((VECTOR(int32_t, 2))(l_155.yy)), ((VECTOR(int32_t, 2))(0x7FF49AF3L, (-1L))), 0L, 0x69BA4906L)).s7)))
                { /* block id: 93 */
                    uint32_t l_156 = 0x2E9BE69EL;
                    int32_t l_158 = 6L;
                    int32_t *l_157[10] = {(void*)0,&l_158,(void*)0,(void*)0,&l_158,(void*)0,(void*)0,&l_158,(void*)0,(void*)0};
                    int32_t *l_159 = &l_158;
                    int32_t l_160 = 0x543B0378L;
                    uint8_t l_161 = 0x6BL;
                    int8_t l_164 = 2L;
                    int i;
                    l_157[1] = ((*l_141) = (l_156 , l_157[1]));
                    l_157[1] = ((*l_143) = l_159);
                    if (((*l_159) = ((l_161--) , l_164)))
                    { /* block id: 100 */
                        uint32_t l_165[5] = {0x564F80C1L,0x564F80C1L,0x564F80C1L,0x564F80C1L,0x564F80C1L};
                        int i;
                        (*l_141) = (void*)0;
                        (*l_159) = l_165[4];
                    }
                    else
                    { /* block id: 103 */
                        int32_t l_167 = 0x4750F7EAL;
                        int32_t *l_166 = &l_167;
                        l_166 = l_166;
                    }
                }
                else
                { /* block id: 106 */
                    int32_t l_169 = (-1L);
                    int32_t *l_168 = &l_169;
                    uint32_t l_170 = 0xB32EB6C4L;
                    l_168 = l_168;
                    l_170--;
                    for (l_169 = 0; (l_169 >= 13); ++l_169)
                    { /* block id: 111 */
                        int8_t l_175[6];
                        VECTOR(int32_t, 4) l_176 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x59140E63L), 0x59140E63L);
                        uint32_t l_177[6][2] = {{0x775A945BL,0x775A945BL},{0x775A945BL,0x775A945BL},{0x775A945BL,0x775A945BL},{0x775A945BL,0x775A945BL},{0x775A945BL,0x775A945BL},{0x775A945BL,0x775A945BL}};
                        uint32_t l_178 = 1UL;
                        int16_t l_181 = 7L;
                        VECTOR(int32_t, 2) l_182 = (VECTOR(int32_t, 2))(0L, (-1L));
                        VECTOR(int32_t, 2) l_183 = (VECTOR(int32_t, 2))(0x01A4B010L, (-4L));
                        VECTOR(uint8_t, 2) l_184 = (VECTOR(uint8_t, 2))(0x89L, 0x31L);
                        VECTOR(int16_t, 4) l_185 = (VECTOR(int16_t, 4))((-3L), (VECTOR(int16_t, 2))((-3L), (-1L)), (-1L));
                        VECTOR(int16_t, 4) l_186 = (VECTOR(int16_t, 4))(0x4426L, (VECTOR(int16_t, 2))(0x4426L, 0x2F29L), 0x2F29L);
                        VECTOR(int16_t, 8) l_187 = (VECTOR(int16_t, 8))(2L, (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, (-5L)), (-5L)), (-5L), 2L, (-5L));
                        VECTOR(int16_t, 8) l_188 = (VECTOR(int16_t, 8))(0x16B2L, (VECTOR(int16_t, 4))(0x16B2L, (VECTOR(int16_t, 2))(0x16B2L, 0x6849L), 0x6849L), 0x6849L, 0x16B2L, 0x6849L);
                        VECTOR(int16_t, 16) l_189 = (VECTOR(int16_t, 16))(0x7ED4L, (VECTOR(int16_t, 4))(0x7ED4L, (VECTOR(int16_t, 2))(0x7ED4L, (-4L)), (-4L)), (-4L), 0x7ED4L, (-4L), (VECTOR(int16_t, 2))(0x7ED4L, (-4L)), (VECTOR(int16_t, 2))(0x7ED4L, (-4L)), 0x7ED4L, (-4L), 0x7ED4L, (-4L));
                        VECTOR(int8_t, 2) l_190 = (VECTOR(int8_t, 2))(0x69L, 0L);
                        VECTOR(uint8_t, 2) l_191 = (VECTOR(uint8_t, 2))(1UL, 0x29L);
                        VECTOR(int16_t, 4) l_192 = (VECTOR(int16_t, 4))(2L, (VECTOR(int16_t, 2))(2L, 0x1E9FL), 0x1E9FL);
                        uint32_t l_193 = 1UL;
                        VECTOR(int16_t, 8) l_194 = (VECTOR(int16_t, 8))((-7L), (VECTOR(int16_t, 4))((-7L), (VECTOR(int16_t, 2))((-7L), 8L), 8L), 8L, (-7L), 8L);
                        VECTOR(int16_t, 8) l_195 = (VECTOR(int16_t, 8))(0x2C12L, (VECTOR(int16_t, 4))(0x2C12L, (VECTOR(int16_t, 2))(0x2C12L, (-5L)), (-5L)), (-5L), 0x2C12L, (-5L));
                        VECTOR(int16_t, 4) l_196 = (VECTOR(int16_t, 4))(3L, (VECTOR(int16_t, 2))(3L, 0x2C8EL), 0x2C8EL);
                        VECTOR(int16_t, 16) l_197 = (VECTOR(int16_t, 16))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-3L)), (-3L)), (-3L), (-1L), (-3L), (VECTOR(int16_t, 2))((-1L), (-3L)), (VECTOR(int16_t, 2))((-1L), (-3L)), (-1L), (-3L), (-1L), (-3L));
                        int32_t l_198[7];
                        VECTOR(int16_t, 2) l_199 = (VECTOR(int16_t, 2))(9L, (-5L));
                        VECTOR(int16_t, 8) l_200 = (VECTOR(int16_t, 8))((-1L), (VECTOR(int16_t, 4))((-1L), (VECTOR(int16_t, 2))((-1L), (-8L)), (-8L)), (-8L), (-1L), (-8L));
                        VECTOR(int16_t, 16) l_201 = (VECTOR(int16_t, 16))(0x7952L, (VECTOR(int16_t, 4))(0x7952L, (VECTOR(int16_t, 2))(0x7952L, 0x3D98L), 0x3D98L), 0x3D98L, 0x7952L, 0x3D98L, (VECTOR(int16_t, 2))(0x7952L, 0x3D98L), (VECTOR(int16_t, 2))(0x7952L, 0x3D98L), 0x7952L, 0x3D98L, 0x7952L, 0x3D98L);
                        VECTOR(int16_t, 16) l_202 = (VECTOR(int16_t, 16))(0x1072L, (VECTOR(int16_t, 4))(0x1072L, (VECTOR(int16_t, 2))(0x1072L, 5L), 5L), 5L, 0x1072L, 5L, (VECTOR(int16_t, 2))(0x1072L, 5L), (VECTOR(int16_t, 2))(0x1072L, 5L), 0x1072L, 5L, 0x1072L, 5L);
                        uint64_t l_203 = 0xCF85E0D763C7C4FDL;
                        VECTOR(int32_t, 4) l_204 = (VECTOR(int32_t, 4))(0x76C6B0B3L, (VECTOR(int32_t, 2))(0x76C6B0B3L, 0x124C9F92L), 0x124C9F92L);
                        uint64_t l_205 = 18446744073709551615UL;
                        VECTOR(int16_t, 2) l_206 = (VECTOR(int16_t, 2))(0x7994L, 0x7911L);
                        VECTOR(int16_t, 2) l_207 = (VECTOR(int16_t, 2))(4L, 0x13D0L);
                        uint16_t l_208[1][10][2] = {{{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL},{1UL,1UL}}};
                        int32_t l_209 = 2L;
                        int64_t l_210[1][2];
                        int32_t l_211 = (-4L);
                        int32_t l_212 = 0x39832730L;
                        uint32_t l_213 = 0x56E283C5L;
                        uint64_t l_214 = 0x77308337835E58A2L;
                        uint8_t l_215[1][8][3];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_175[i] = 0x5CL;
                        for (i = 0; i < 7; i++)
                            l_198[i] = (-7L);
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_210[i][j] = 0L;
                        }
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 8; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_215[i][j][k] = 253UL;
                            }
                        }
                        l_175[2] &= 0x322A78F6L;
                        l_177[2][1] ^= ((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_176.wwyx)).zwxyyyxxxyzwwwzw)).s4;
                        ++l_178;
                        l_215[0][0][0] |= ((VECTOR(int32_t, 4))((l_176.w = l_181), ((VECTOR(int32_t, 2))(((VECTOR(int32_t, 8))(mad_sat(((VECTOR(int32_t, 2))(l_182.yx)).xxxyxxyx, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(mad_sat(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(((VECTOR(int32_t, 4))(l_183.xyyx)))), (((l_184.x , (l_212 = ((VECTOR(int16_t, 16))(add_sat(((VECTOR(int16_t, 16))(l_185.xwxxwyyzzzxyxyyw)), ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(l_186.yz)).even, 0x46CAL, 0x0FB0L, ((VECTOR(int16_t, 2))(l_187.s50)), ((VECTOR(int16_t, 2))(9L, 1L)), 1L, ((VECTOR(int16_t, 2))(0L, 0x693FL)), 0x474FL, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 4))(sub_sat(((VECTOR(int16_t, 2))(rotate(((VECTOR(int16_t, 4))(l_188.s3267)).even, ((VECTOR(int16_t, 16))(l_189.s49fb201579889665)).s09))).xxyy, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(mul_hi(((VECTOR(int16_t, 4))(safe_clamp_func(VECTOR(int16_t, 4),VECTOR(int16_t, 4),((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 8))(l_190.xxxxyxxx)).s3225670712750673, ((VECTOR(uint8_t, 2))(l_191.xx)).xxyxxxyxyxxxxxxx))).seb61, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 4))(l_192.yyzw)), l_193, 0x0903L, 0x41A9L, 0x38F4L)).odd)), ((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(l_194.s0550074775764635)).sa5, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))(l_195.s3760)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(l_196.wzwzwywwwwzzxzyz)).lo)).hi))).lo))), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 4))(clz(((VECTOR(int16_t, 2))(l_197.s8c)).yyyy))))), 0x0C43L, l_198[6], ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 8))(l_199.yyxyyyyx)).hi)))).s87ee, ((VECTOR(int16_t, 8))(l_200.s45765307)).even))), ((VECTOR(int16_t, 2))(rhadd(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(0x5B51L, ((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),int16_t,((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(add_sat(((VECTOR(int16_t, 16))(l_201.s29634f4fc1adae8a)).s34, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(safe_clamp_func(VECTOR(int16_t, 2),VECTOR(int16_t, 2),((VECTOR(int16_t, 2))(0x599EL, 0L)), ((VECTOR(int16_t, 8))(0x72A3L, ((VECTOR(int16_t, 4))(min(((VECTOR(int16_t, 4))((-8L), ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 8))(l_202.sa7637066)).s74)), 0x1D09L)), (int16_t)l_203))), (-9L), 8L, 0x02BDL)).s23, ((VECTOR(int16_t, 8))(0x5982L, (((VECTOR(int32_t, 16))(l_204.zxxxzwxywwwwyxww)).s9 , (FAKE_DIVERGE(p_685->global_1_offset, get_global_id(1), 10) , (l_149[0][1][6] = l_205))), (l_149[0][3][0] = 1L), ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))((-1L), 0x1F41L)), (-2L), 0x41DAL)), 0x74A2L)).s25))).xxyx)).lo))).xxxx)).zyxzwyxz, ((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))(l_206.xxxyyyxxyyxyxxxy)))).hi, ((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(1L, 0x0522L)), (-3L), 0x767EL)).yywwwzyx))).s2230223137124753, ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(l_207.xyyyyxyy)), ((VECTOR(int16_t, 16))(max(((VECTOR(int16_t, 4))((-1L), 0x5236L, (-1L), 0x317BL)).wxwywxxwwwxzwywy, (int16_t)l_208[0][7][1]))).even, ((VECTOR(int16_t, 8))(0x1829L))))))).s2663075536327461))).s2, 0x6F09L, (-3L), l_209, l_210[0][1], ((VECTOR(int16_t, 2))(0L)), (-4L))).s34, (int16_t)0x4735L, (int16_t)(-2L)))), 0x7740L)).xywzzxxxyxxxxxyw)).s19, ((VECTOR(int16_t, 2))(0L))))).yxxy))), ((VECTOR(int16_t, 4))(1L))))))))))).wzzwwwwwzxzyzwyy)).sf, 0x7E89L, (-6L), 0x3FEAL, 0x39C3L, (-1L), 0x1A3AL, ((VECTOR(int16_t, 4))(0x1CA5L)), 0L, ((VECTOR(int16_t, 2))(0x719FL)), 4L, 3L)).s85, (int16_t)l_211))))), ((VECTOR(int16_t, 2))(0x337FL)), 1L))))).se)) , 0x548BEFD3L) , l_213), (-1L), 0x18445C7BL, 0x5E14EDE7L, 0L, 0x3F3ED43DL, 0x3E0949E5L, ((VECTOR(int32_t, 4))(3L)), 0x4E02B9B1L)).s88da)).w, ((VECTOR(int32_t, 8))(0x1F6784C0L)), ((VECTOR(int32_t, 2))(0L)), l_214, ((VECTOR(int32_t, 2))(0x67BABF17L)), (-9L), 0x470D5BA4L)).s51)), ((VECTOR(int32_t, 2))(0x7C9DFD79L)), ((VECTOR(int32_t, 2))(0x2B91921AL))))).yyxxyxxy)).s03, ((VECTOR(int32_t, 2))(0x04847963L))))).yyyyyxyy, ((VECTOR(int32_t, 8))((-4L)))))).s31)), (-10L))).z;
                    }
                }
                for (l_148[3][2] = 0; (l_148[3][2] < 8); l_148[3][2]++)
                { /* block id: 124 */
                    int32_t l_219[2][3][7] = {{{(-1L),0x05894678L,0x76631531L,2L,0x05894678L,2L,0x76631531L},{(-1L),0x05894678L,0x76631531L,2L,0x05894678L,2L,0x76631531L},{(-1L),0x05894678L,0x76631531L,2L,0x05894678L,2L,0x76631531L}},{{(-1L),0x05894678L,0x76631531L,2L,0x05894678L,2L,0x76631531L},{(-1L),0x05894678L,0x76631531L,2L,0x05894678L,2L,0x76631531L},{(-1L),0x05894678L,0x76631531L,2L,0x05894678L,2L,0x76631531L}}};
                    int32_t *l_218 = &l_219[0][0][0];
                    int i, j, k;
                    l_218 = ((*l_143) = l_218);
                    for (l_219[0][1][0] = 2; (l_219[0][1][0] > (-29)); --l_219[0][1][0])
                    { /* block id: 129 */
                        int8_t l_222 = 0L;
                        uint64_t l_223 = 0x136AD47CF242F41EL;
                        ++l_223;
                    }
                    for (l_219[0][2][3] = 27; (l_219[0][2][3] > 1); l_219[0][2][3]--)
                    { /* block id: 134 */
                        int64_t l_228 = 1L;
                        int32_t l_229 = 2L;
                        int32_t l_230 = (-1L);
                        int16_t l_231 = 0L;
                        l_229 = l_228;
                        l_229 = l_230;
                        l_229 = l_231;
                    }
                    for (l_219[1][0][5] = 0; (l_219[1][0][5] > 7); l_219[1][0][5] = safe_add_func_int32_t_s_s(l_219[1][0][5], 8))
                    { /* block id: 141 */
                        uint32_t l_234[8][9] = {{0x8B0FE1E5L,1UL,0xF351D795L,1UL,4294967291UL,1UL,0xF351D795L,1UL,0x8B0FE1E5L},{0x8B0FE1E5L,1UL,0xF351D795L,1UL,4294967291UL,1UL,0xF351D795L,1UL,0x8B0FE1E5L},{0x8B0FE1E5L,1UL,0xF351D795L,1UL,4294967291UL,1UL,0xF351D795L,1UL,0x8B0FE1E5L},{0x8B0FE1E5L,1UL,0xF351D795L,1UL,4294967291UL,1UL,0xF351D795L,1UL,0x8B0FE1E5L},{0x8B0FE1E5L,1UL,0xF351D795L,1UL,4294967291UL,1UL,0xF351D795L,1UL,0x8B0FE1E5L},{0x8B0FE1E5L,1UL,0xF351D795L,1UL,4294967291UL,1UL,0xF351D795L,1UL,0x8B0FE1E5L},{0x8B0FE1E5L,1UL,0xF351D795L,1UL,4294967291UL,1UL,0xF351D795L,1UL,0x8B0FE1E5L},{0x8B0FE1E5L,1UL,0xF351D795L,1UL,4294967291UL,1UL,0xF351D795L,1UL,0x8B0FE1E5L}};
                        int i, j;
                        l_234[6][2]--;
                    }
                }
            }
        }
        l_238[2] |= (l_237[1][1][1] |= 0x08F7C297L);
        unsigned int result = 0;
        int l_105_i0;
        for (l_105_i0 = 0; l_105_i0 < 5; l_105_i0++) {
            result += l_105[l_105_i0];
        }
        int l_237_i0, l_237_i1, l_237_i2;
        for (l_237_i0 = 0; l_237_i0 < 6; l_237_i0++) {
            for (l_237_i1 = 0; l_237_i1 < 8; l_237_i1++) {
                for (l_237_i2 = 0; l_237_i2 < 5; l_237_i2++) {
                    result += l_237[l_237_i0][l_237_i1][l_237_i2];
                }
            }
        }
        int l_238_i0;
        for (l_238_i0 = 0; l_238_i0 < 4; l_238_i0++) {
            result += l_238[l_238_i0];
        }
        atomic_add(&p_685->l_special_values[41], result);
    }
    else
    { /* block id: 149 */
        (1 + 1);
    }
    (*l_267) = (safe_unary_minus_func_uint32_t_u(((((safe_add_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((p_685->g_8 , (((VECTOR(uint32_t, 2))(l_244.wy)).lo , FAKE_DIVERGE(p_685->group_2_offset, get_group_id(2), 10))) >= (safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint8_t_u_s(GROUP_DIVERGE(0, 1), 4))))), p_685->g_8)), ((p_685->g_101.s0 != ((void*)0 == &p_60)) > ((VECTOR(int16_t, 16))(p_685->g_248.s7613617535462262)).s0))) , ((+0x1DL) >= ((safe_mod_func_uint16_t_u_u(((((*l_265) ^= ((*l_262) = ((((VECTOR(uint32_t, 2))(p_685->g_251.yx)).even , &p_60) != (((*l_260) ^= (safe_rshift_func_int8_t_s_u(((((7UL && ((GROUP_DIVERGE(1, 1) , ((*l_259) = (((VECTOR(uint8_t, 16))((((*l_258) = ((safe_mod_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u(l_244.y, p_685->g_73.y)) >= p_62) == 0x2D1FED27L), p_62)) >= p_61)) == 0x7E6FD8733CB2E228L), ((VECTOR(uint8_t, 4))(0x5CL)), ((VECTOR(uint8_t, 2))(253UL)), 0UL, 0x2EL, 0x34L, 0UL, 0UL, ((VECTOR(uint8_t, 2))(255UL)), 0UL, 0x95L)).sb ^ l_244.y))) == 0x2AFDE5E6L)) , p_63) & p_59) >= p_61), 4))) , &p_60)))) && p_62) , 1UL), 0x985CL)) && 0x1C300522L))) && p_685->g_251.x) > p_685->g_251.x)));
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    p_685->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[(safe_mod_func_uint32_t_u_u((((safe_div_func_uint16_t_u_u(((*l_262) = (safe_add_func_int8_t_s_s((((((-8L) ^ ((((safe_sub_func_uint64_t_u_u((p_685->g_279 = ((*l_277) = p_685->g_101.s6)), ((safe_add_func_uint8_t_u_u(((VECTOR(uint8_t, 2))(0xA3L, 252UL)).hi, (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((FAKE_DIVERGE(p_685->global_2_offset, get_global_id(2), 10) == ((*l_259) ^= (FAKE_DIVERGE(p_685->local_1_offset, get_local_id(1), 10) | ((safe_div_func_int8_t_s_s((GROUP_DIVERGE(2, 1) >= (p_62 <= ((&p_59 != l_267) , p_61))), (-1L))) , ((*l_260) &= p_685->g_73.x))))), (safe_mod_func_int16_t_s_s(((VECTOR(int16_t, 8))(((*l_267) = ((((l_290 != &p_59) , 4294967295UL) , l_259) == &p_685->g_268)), p_59, ((VECTOR(int16_t, 4))(0x6545L)), 0x2323L, 4L)).s2, 0x8489L)))), 0x7460L)))) , (-1L)))) != 0x5EEBCE1EL) , l_277) != l_277)) >= p_61) ^ p_63) , (-6L)), 0x31L))), FAKE_DIVERGE(p_685->group_0_offset, get_group_id(0), 10))) == p_685->g_8) < 4L), 10))][(safe_mod_func_uint32_t_u_u(p_685->tid, 2))]));
    (*l_259) ^= (((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(l_297.sc900)).zwwyzxwx)).s2 , (*p_60));
    return (*l_259);
}


/* ------------------------------------------ */
/* 
 * reads : p_685->g_21 p_685->g_91
 * writes: p_685->g_21 p_685->g_90 p_685->g_91
 */
int64_t  func_64(int32_t * p_65, uint64_t  p_66, uint8_t  p_67, struct S1 * p_685)
{ /* block id: 28 */
    int32_t *l_98 = &p_685->g_8;
    int32_t **l_99 = &p_685->g_90[1][0][5];
    for (p_685->g_21 = (-9); (p_685->g_21 > (-25)); p_685->g_21 = safe_sub_func_int16_t_s_s(p_685->g_21, 1))
    { /* block id: 31 */
        int32_t *l_94 = &p_685->g_91;
        int32_t **l_96 = &p_685->g_90[1][0][5];
        int32_t **l_97[5][3][4] = {{{(void*)0,&p_685->g_7[6][8],(void*)0,(void*)0},{(void*)0,&p_685->g_7[6][8],(void*)0,(void*)0},{(void*)0,&p_685->g_7[6][8],(void*)0,(void*)0}},{{(void*)0,&p_685->g_7[6][8],(void*)0,(void*)0},{(void*)0,&p_685->g_7[6][8],(void*)0,(void*)0},{(void*)0,&p_685->g_7[6][8],(void*)0,(void*)0}},{{(void*)0,&p_685->g_7[6][8],(void*)0,(void*)0},{(void*)0,&p_685->g_7[6][8],(void*)0,(void*)0},{(void*)0,&p_685->g_7[6][8],(void*)0,(void*)0}},{{(void*)0,&p_685->g_7[6][8],(void*)0,(void*)0},{(void*)0,&p_685->g_7[6][8],(void*)0,(void*)0},{(void*)0,&p_685->g_7[6][8],(void*)0,(void*)0}},{{(void*)0,&p_685->g_7[6][8],(void*)0,(void*)0},{(void*)0,&p_685->g_7[6][8],(void*)0,(void*)0},{(void*)0,&p_685->g_7[6][8],(void*)0,(void*)0}}};
        int i, j, k;
        p_685->g_90[1][0][5] = p_65;
        for (p_67 = 6; (p_67 > 47); p_67 = safe_add_func_int32_t_s_s(p_67, 8))
        { /* block id: 35 */
            int32_t **l_95 = &p_685->g_90[1][0][5];
            (*l_95) = l_94;
            (*l_94) = (*l_94);
        }
        p_65 = ((*l_96) = p_65);
    }
    (*l_99) = l_98;
    return p_66;
}


/* ------------------------------------------ */
/* 
 * reads : p_685->g_21 p_685->g_8 p_685->g_73
 * writes: p_685->g_21
 */
uint64_t  func_76(int32_t * p_77, struct S1 * p_685)
{ /* block id: 19 */
    VECTOR(int64_t, 2) l_80 = (VECTOR(int64_t, 2))((-1L), 0x5F97F748928FFEA0L);
    int32_t l_81 = 0x6AAF2C41L;
    int32_t *l_82 = &l_81;
    int32_t *l_83 = &l_81;
    int32_t *l_84[4];
    uint32_t l_85 = 4294967295UL;
    int i;
    for (i = 0; i < 4; i++)
        l_84[i] = (void*)0;
    for (p_685->g_21 = 0; (p_685->g_21 != 17); ++p_685->g_21)
    { /* block id: 22 */
        if (l_80.y)
            break;
        if ((*p_77))
            continue;
    }
    ++l_85;
    return p_685->g_73.x;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_input[43];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 43; i++)
            l_atomic_input[i] = 0;
    __local volatile uint32_t l_special_values[43];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 43; i++)
            l_special_values[i] = 0;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[2];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 2; i++)
            l_comm_values[i] = 1;
    struct S1 c_686;
    struct S1* p_685 = &c_686;
    struct S1 c_687 = {
        0L, // p_685->g_8
        {{&p_685->g_8,&p_685->g_8,&p_685->g_8,&p_685->g_8,&p_685->g_8,(void*)0,(void*)0,&p_685->g_8,&p_685->g_8,&p_685->g_8},{&p_685->g_8,&p_685->g_8,&p_685->g_8,&p_685->g_8,&p_685->g_8,(void*)0,(void*)0,&p_685->g_8,&p_685->g_8,&p_685->g_8},{&p_685->g_8,&p_685->g_8,&p_685->g_8,&p_685->g_8,&p_685->g_8,(void*)0,(void*)0,&p_685->g_8,&p_685->g_8,&p_685->g_8},{&p_685->g_8,&p_685->g_8,&p_685->g_8,&p_685->g_8,&p_685->g_8,(void*)0,(void*)0,&p_685->g_8,&p_685->g_8,&p_685->g_8},{&p_685->g_8,&p_685->g_8,&p_685->g_8,&p_685->g_8,&p_685->g_8,(void*)0,(void*)0,&p_685->g_8,&p_685->g_8,&p_685->g_8},{&p_685->g_8,&p_685->g_8,&p_685->g_8,&p_685->g_8,&p_685->g_8,(void*)0,(void*)0,&p_685->g_8,&p_685->g_8,&p_685->g_8},{&p_685->g_8,&p_685->g_8,&p_685->g_8,&p_685->g_8,&p_685->g_8,(void*)0,(void*)0,&p_685->g_8,&p_685->g_8,&p_685->g_8}}, // p_685->g_7
        4294967295UL, // p_685->g_15
        0x64CE34AAFBEBF0A0L, // p_685->g_21
        0x83L, // p_685->g_27
        (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 253UL), 253UL), 253UL, 255UL, 253UL), // p_685->g_30
        255UL, // p_685->g_34
        (VECTOR(uint8_t, 4))(0x0AL, (VECTOR(uint8_t, 2))(0x0AL, 1UL), 1UL), // p_685->g_73
        1L, // p_685->g_91
        {{{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8},{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8}},{{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8},{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8}},{{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8},{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8}},{{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8},{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8}},{{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8},{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8}},{{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8},{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8}},{{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8},{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8}},{{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8},{&p_685->g_91,&p_685->g_8,(void*)0,&p_685->g_91,(void*)0,&p_685->g_91,&p_685->g_8}}}, // p_685->g_90
        (VECTOR(uint32_t, 8))(4294967291UL, (VECTOR(uint32_t, 4))(4294967291UL, (VECTOR(uint32_t, 2))(4294967291UL, 4294967295UL), 4294967295UL), 4294967295UL, 4294967291UL, 4294967295UL), // p_685->g_101
        (VECTOR(int16_t, 8))(1L, (VECTOR(int16_t, 4))(1L, (VECTOR(int16_t, 2))(1L, 0x0346L), 0x0346L), 0x0346L, 1L, 0x0346L), // p_685->g_248
        (VECTOR(uint32_t, 2))(0UL, 4294967295UL), // p_685->g_251
        1UL, // p_685->g_261
        65529UL, // p_685->g_263
        0xB3D6L, // p_685->g_266
        0L, // p_685->g_268
        8UL, // p_685->g_278
        0xD104157AL, // p_685->g_279
        {(void*)0}, // p_685->g_316
        (VECTOR(int8_t, 8))((-9L), (VECTOR(int8_t, 4))((-9L), (VECTOR(int8_t, 2))((-9L), 0L), 0L), 0L, (-9L), 0L), // p_685->g_338
        (VECTOR(int8_t, 2))(0x1CL, 5L), // p_685->g_342
        &p_685->g_91, // p_685->g_376
        (void*)0, // p_685->g_379
        &p_685->g_8, // p_685->g_380
        &p_685->g_90[1][0][5], // p_685->g_381
        (VECTOR(uint32_t, 4))(0x378815BEL, (VECTOR(uint32_t, 2))(0x378815BEL, 0x4176D0AAL), 0x4176D0AAL), // p_685->g_465
        {1UL}, // p_685->g_484
        (void*)0, // p_685->g_485
        0x23F5L, // p_685->g_496
        (VECTOR(int32_t, 16))(5L, (VECTOR(int32_t, 4))(5L, (VECTOR(int32_t, 2))(5L, 0L), 0L), 0L, 5L, 0L, (VECTOR(int32_t, 2))(5L, 0L), (VECTOR(int32_t, 2))(5L, 0L), 5L, 0L, 5L, 0L), // p_685->g_586
        0xCBF3L, // p_685->g_608
        &p_685->g_608, // p_685->g_607
        {{{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607}},{{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607}},{{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607}},{{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607}},{{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607}},{{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607}},{{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607}},{{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607}},{{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607},{(void*)0,&p_685->g_607}}}, // p_685->g_606
        (void*)0, // p_685->g_609
        (void*)0, // p_685->g_619
        &p_685->g_619, // p_685->g_618
        {{4UL},{4UL},{4UL},{4UL},{4UL},{4UL},{4UL},{4UL}}, // p_685->g_639
        (VECTOR(uint16_t, 2))(0UL, 7UL), // p_685->g_659
        (void*)0, // p_685->g_674
        0, // p_685->v_collective
        sequence_input[get_global_id(0)], // p_685->global_0_offset
        sequence_input[get_global_id(1)], // p_685->global_1_offset
        sequence_input[get_global_id(2)], // p_685->global_2_offset
        sequence_input[get_local_id(0)], // p_685->local_0_offset
        sequence_input[get_local_id(1)], // p_685->local_1_offset
        sequence_input[get_local_id(2)], // p_685->local_2_offset
        sequence_input[get_group_id(0)], // p_685->group_0_offset
        sequence_input[get_group_id(1)], // p_685->group_1_offset
        sequence_input[get_group_id(2)], // p_685->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 2)), permutations[0][get_linear_local_id()])), // p_685->tid
        l_atomic_input, // l_atomic_input
        l_special_values, // l_special_values
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_686 = c_687;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_685);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_685->g_8, "p_685->g_8", print_hash_value);
    transparent_crc(p_685->g_15, "p_685->g_15", print_hash_value);
    transparent_crc(p_685->g_21, "p_685->g_21", print_hash_value);
    transparent_crc(p_685->g_27, "p_685->g_27", print_hash_value);
    transparent_crc(p_685->g_30.s0, "p_685->g_30.s0", print_hash_value);
    transparent_crc(p_685->g_30.s1, "p_685->g_30.s1", print_hash_value);
    transparent_crc(p_685->g_30.s2, "p_685->g_30.s2", print_hash_value);
    transparent_crc(p_685->g_30.s3, "p_685->g_30.s3", print_hash_value);
    transparent_crc(p_685->g_30.s4, "p_685->g_30.s4", print_hash_value);
    transparent_crc(p_685->g_30.s5, "p_685->g_30.s5", print_hash_value);
    transparent_crc(p_685->g_30.s6, "p_685->g_30.s6", print_hash_value);
    transparent_crc(p_685->g_30.s7, "p_685->g_30.s7", print_hash_value);
    transparent_crc(p_685->g_34, "p_685->g_34", print_hash_value);
    transparent_crc(p_685->g_73.x, "p_685->g_73.x", print_hash_value);
    transparent_crc(p_685->g_73.y, "p_685->g_73.y", print_hash_value);
    transparent_crc(p_685->g_73.z, "p_685->g_73.z", print_hash_value);
    transparent_crc(p_685->g_73.w, "p_685->g_73.w", print_hash_value);
    transparent_crc(p_685->g_91, "p_685->g_91", print_hash_value);
    transparent_crc(p_685->g_101.s0, "p_685->g_101.s0", print_hash_value);
    transparent_crc(p_685->g_101.s1, "p_685->g_101.s1", print_hash_value);
    transparent_crc(p_685->g_101.s2, "p_685->g_101.s2", print_hash_value);
    transparent_crc(p_685->g_101.s3, "p_685->g_101.s3", print_hash_value);
    transparent_crc(p_685->g_101.s4, "p_685->g_101.s4", print_hash_value);
    transparent_crc(p_685->g_101.s5, "p_685->g_101.s5", print_hash_value);
    transparent_crc(p_685->g_101.s6, "p_685->g_101.s6", print_hash_value);
    transparent_crc(p_685->g_101.s7, "p_685->g_101.s7", print_hash_value);
    transparent_crc(p_685->g_248.s0, "p_685->g_248.s0", print_hash_value);
    transparent_crc(p_685->g_248.s1, "p_685->g_248.s1", print_hash_value);
    transparent_crc(p_685->g_248.s2, "p_685->g_248.s2", print_hash_value);
    transparent_crc(p_685->g_248.s3, "p_685->g_248.s3", print_hash_value);
    transparent_crc(p_685->g_248.s4, "p_685->g_248.s4", print_hash_value);
    transparent_crc(p_685->g_248.s5, "p_685->g_248.s5", print_hash_value);
    transparent_crc(p_685->g_248.s6, "p_685->g_248.s6", print_hash_value);
    transparent_crc(p_685->g_248.s7, "p_685->g_248.s7", print_hash_value);
    transparent_crc(p_685->g_251.x, "p_685->g_251.x", print_hash_value);
    transparent_crc(p_685->g_251.y, "p_685->g_251.y", print_hash_value);
    transparent_crc(p_685->g_261, "p_685->g_261", print_hash_value);
    transparent_crc(p_685->g_263, "p_685->g_263", print_hash_value);
    transparent_crc(p_685->g_266, "p_685->g_266", print_hash_value);
    transparent_crc(p_685->g_268, "p_685->g_268", print_hash_value);
    transparent_crc(p_685->g_278, "p_685->g_278", print_hash_value);
    transparent_crc(p_685->g_279, "p_685->g_279", print_hash_value);
    transparent_crc(p_685->g_338.s0, "p_685->g_338.s0", print_hash_value);
    transparent_crc(p_685->g_338.s1, "p_685->g_338.s1", print_hash_value);
    transparent_crc(p_685->g_338.s2, "p_685->g_338.s2", print_hash_value);
    transparent_crc(p_685->g_338.s3, "p_685->g_338.s3", print_hash_value);
    transparent_crc(p_685->g_338.s4, "p_685->g_338.s4", print_hash_value);
    transparent_crc(p_685->g_338.s5, "p_685->g_338.s5", print_hash_value);
    transparent_crc(p_685->g_338.s6, "p_685->g_338.s6", print_hash_value);
    transparent_crc(p_685->g_338.s7, "p_685->g_338.s7", print_hash_value);
    transparent_crc(p_685->g_342.x, "p_685->g_342.x", print_hash_value);
    transparent_crc(p_685->g_342.y, "p_685->g_342.y", print_hash_value);
    transparent_crc(p_685->g_465.x, "p_685->g_465.x", print_hash_value);
    transparent_crc(p_685->g_465.y, "p_685->g_465.y", print_hash_value);
    transparent_crc(p_685->g_465.z, "p_685->g_465.z", print_hash_value);
    transparent_crc(p_685->g_465.w, "p_685->g_465.w", print_hash_value);
    transparent_crc(p_685->g_484.f0, "p_685->g_484.f0", print_hash_value);
    transparent_crc(p_685->g_496, "p_685->g_496", print_hash_value);
    transparent_crc(p_685->g_586.s0, "p_685->g_586.s0", print_hash_value);
    transparent_crc(p_685->g_586.s1, "p_685->g_586.s1", print_hash_value);
    transparent_crc(p_685->g_586.s2, "p_685->g_586.s2", print_hash_value);
    transparent_crc(p_685->g_586.s3, "p_685->g_586.s3", print_hash_value);
    transparent_crc(p_685->g_586.s4, "p_685->g_586.s4", print_hash_value);
    transparent_crc(p_685->g_586.s5, "p_685->g_586.s5", print_hash_value);
    transparent_crc(p_685->g_586.s6, "p_685->g_586.s6", print_hash_value);
    transparent_crc(p_685->g_586.s7, "p_685->g_586.s7", print_hash_value);
    transparent_crc(p_685->g_586.s8, "p_685->g_586.s8", print_hash_value);
    transparent_crc(p_685->g_586.s9, "p_685->g_586.s9", print_hash_value);
    transparent_crc(p_685->g_586.sa, "p_685->g_586.sa", print_hash_value);
    transparent_crc(p_685->g_586.sb, "p_685->g_586.sb", print_hash_value);
    transparent_crc(p_685->g_586.sc, "p_685->g_586.sc", print_hash_value);
    transparent_crc(p_685->g_586.sd, "p_685->g_586.sd", print_hash_value);
    transparent_crc(p_685->g_586.se, "p_685->g_586.se", print_hash_value);
    transparent_crc(p_685->g_586.sf, "p_685->g_586.sf", print_hash_value);
    transparent_crc(p_685->g_608, "p_685->g_608", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_685->g_639[i].f0, "p_685->g_639[i].f0", print_hash_value);

    }
    transparent_crc(p_685->g_659.x, "p_685->g_659.x", print_hash_value);
    transparent_crc(p_685->g_659.y, "p_685->g_659.y", print_hash_value);
    transparent_crc(p_685->v_collective, "p_685->v_collective", print_hash_value);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    if (!get_linear_local_id())
        for (i = 0; i < 43; i++)
            transparent_crc(p_685->l_special_values[i], "p_685->l_special_values[i]", print_hash_value);
    transparent_crc(p_685->l_comm_values[get_linear_local_id()], "p_685->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_685->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()], "p_685->g_comm_values[get_linear_group_id() * 2 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
