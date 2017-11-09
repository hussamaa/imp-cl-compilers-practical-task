// --atomics 55 ---atomic_reductions ---fake_divergence ---inter_thread_comm -g 7,93,1 -l 7,1,1
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

__constant uint32_t permutations[10][7] = {
{5,4,0,3,2,1,6}, // permutation 0
{6,0,3,1,5,4,2}, // permutation 1
{5,2,6,0,1,4,3}, // permutation 2
{3,0,1,4,5,6,2}, // permutation 3
{5,3,2,4,0,1,6}, // permutation 4
{1,4,2,0,3,5,6}, // permutation 5
{6,2,5,4,0,3,1}, // permutation 6
{1,5,0,3,6,2,4}, // permutation 7
{1,5,6,3,4,2,0}, // permutation 8
{1,6,3,0,4,5,2} // permutation 9
};

// Seed: 2257907560

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    volatile VECTOR(uint8_t, 2) g_28;
    VECTOR(int32_t, 4) g_31;
    int32_t * volatile g_38;
    int32_t * volatile g_40;
    int32_t * volatile g_41;
    int32_t * volatile g_43;
    int32_t * volatile g_44;
    int32_t *g_49[7][3];
    int32_t **g_48[9];
    int32_t **g_50;
    uint64_t g_55;
    VECTOR(uint32_t, 8) g_67;
    volatile VECTOR(int16_t, 8) g_78;
    volatile VECTOR(uint8_t, 8) g_81;
    volatile VECTOR(uint64_t, 2) g_83;
    VECTOR(uint64_t, 16) g_131;
    uint8_t g_152;
    VECTOR(uint8_t, 8) g_176;
    VECTOR(int32_t, 8) g_182;
    int64_t *g_187;
    uint32_t g_192;
    volatile int8_t g_205;
    volatile int8_t *g_204;
    VECTOR(int64_t, 2) g_206;
    VECTOR(int8_t, 2) g_269;
    VECTOR(uint16_t, 8) g_276;
    VECTOR(int32_t, 4) g_279;
    VECTOR(int8_t, 2) g_347;
    VECTOR(int8_t, 2) g_348;
    VECTOR(int8_t, 2) g_349;
    VECTOR(int8_t, 8) g_351;
    VECTOR(int16_t, 8) g_356;
    VECTOR(int8_t, 4) g_357;
    VECTOR(uint64_t, 4) g_377;
    VECTOR(uint32_t, 2) g_382;
    VECTOR(int32_t, 2) g_397;
    VECTOR(int32_t, 8) g_399;
    VECTOR(int16_t, 16) g_402;
    VECTOR(int64_t, 4) g_406;
    int8_t *g_422;
    int8_t **g_421;
    VECTOR(uint64_t, 4) g_469;
    VECTOR(uint32_t, 2) g_479;
    uint64_t *g_519;
    uint64_t **g_518;
    uint16_t *g_525;
    uint64_t g_528;
    int32_t *g_562;
    volatile VECTOR(uint32_t, 4) g_584;
    uint32_t g_632[8];
    int32_t *g_671;
    int32_t g_686[3][2];
    uint16_t g_699;
    int64_t g_706;
    volatile int32_t g_717;
    volatile int32_t *g_716;
    volatile int32_t **g_715;
    volatile int32_t *** volatile g_714;
    VECTOR(int64_t, 8) g_721;
    VECTOR(uint16_t, 2) g_751;
    volatile VECTOR(uint16_t, 8) g_752;
    uint8_t *g_766;
    volatile VECTOR(int16_t, 8) g_780;
    VECTOR(int16_t, 4) g_783;
    int32_t g_837;
    volatile uint64_t g_863;
    volatile uint64_t g_864;
    volatile uint64_t g_865;
    volatile uint64_t g_866;
    volatile uint64_t g_867;
    volatile uint64_t g_868[6];
    volatile uint64_t g_869;
    volatile uint64_t g_870;
    volatile uint64_t g_871;
    volatile uint64_t g_872;
    volatile uint64_t g_873[6][5];
    volatile uint64_t g_874;
    volatile VECTOR(uint64_t, 8) g_875;
    volatile uint64_t g_876;
    volatile uint64_t g_877;
    volatile uint64_t g_878;
    volatile uint64_t g_879;
    volatile uint64_t g_880;
    volatile uint64_t g_881;
    volatile uint64_t g_882;
    volatile uint64_t g_883;
    volatile uint64_t g_884;
    volatile uint64_t g_885[10];
    volatile uint64_t g_886[9][2];
    volatile uint64_t g_887;
    volatile uint64_t g_888;
    volatile uint64_t g_889;
    volatile uint64_t g_890;
    volatile uint64_t g_891[3];
    volatile uint64_t g_892;
    volatile uint64_t g_893;
    volatile uint64_t g_894;
    volatile uint64_t *g_862[6][10][4];
    volatile uint64_t **g_861;
    VECTOR(int64_t, 4) g_981;
    int64_t * volatile * volatile g_985;
    int64_t * volatile * volatile * volatile g_984[8][4][2];
    int16_t *g_997;
    int16_t **g_996[8][1];
    VECTOR(int8_t, 8) g_1008;
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
    __local volatile uint32_t *l_atomic_reduction;
    __global volatile uint32_t *g_atomic_reduction;
    __local int64_t *l_comm_values;
    __global int64_t *g_comm_values;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S0 * p_1021);
int32_t  func_4(uint64_t  p_5, uint32_t  p_6, int64_t  p_7, struct S0 * p_1021);
int32_t  func_13(uint32_t  p_14, uint16_t  p_15, uint32_t  p_16, struct S0 * p_1021);
int64_t  func_17(uint16_t  p_18, int32_t  p_19, uint64_t  p_20, struct S0 * p_1021);
int16_t  func_32(int64_t  p_33, uint64_t  p_34, uint16_t  p_35, uint8_t  p_36, struct S0 * p_1021);
uint64_t ** func_69(int32_t  p_70, int16_t  p_71, uint16_t  p_72, uint64_t  p_73, uint64_t  p_74, struct S0 * p_1021);
int32_t * func_89(uint64_t  p_90, int64_t  p_91, uint64_t ** p_92, struct S0 * p_1021);
uint64_t ** func_94(int32_t * p_95, uint32_t  p_96, int32_t  p_97, int16_t  p_98, int32_t  p_99, struct S0 * p_1021);
int32_t * func_100(uint32_t  p_101, struct S0 * p_1021);
int32_t ** func_105(int32_t  p_106, uint8_t  p_107, uint64_t ** p_108, int64_t  p_109, struct S0 * p_1021);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1021->g_comm_values p_1021->l_comm_values p_1021->g_28 p_1021->g_31 p_1021->g_55 p_1021->g_67 p_1021->g_78 p_1021->g_81 p_1021->g_83 p_1021->g_131 p_1021->g_176 p_1021->g_182 p_1021->g_187 p_1021->g_204 p_1021->g_206 p_1021->g_269 p_1021->g_356 p_1021->g_192 p_1021->g_397 p_1021->g_399 p_1021->g_402 p_1021->g_406 p_1021->g_49 p_1021->g_205 p_1021->g_469 p_1021->g_276 p_1021->g_479 p_1021->g_357 p_1021->g_347 p_1021->g_279 p_1021->g_518 p_1021->g_525 p_1021->g_528 p_1021->g_562 p_1021->g_152 p_1021->g_519 p_1021->g_671 p_1021->g_686 p_1021->g_348 p_1021->g_699 p_1021->g_377 p_1021->g_382 p_1021->g_714 p_1021->g_721 p_1021->g_716 p_1021->g_717 p_1021->g_751 p_1021->g_752 p_1021->g_632 p_1021->g_706 permutations p_1021->g_38 p_1021->g_766 p_1021->g_837 p_1021->g_861 p_1021->g_862 p_1021->g_584 p_1021->g_981 p_1021->g_984 p_1021->g_996 p_1021->g_1008 p_1021->g_783 p_1021->g_882 p_1021->g_889
 * writes: p_1021->g_31 p_1021->g_48 p_1021->g_50 p_1021->g_55 p_1021->g_152 p_1021->g_192 p_1021->g_176 p_1021->g_131 p_1021->g_377 p_1021->g_382 p_1021->g_421 p_1021->g_357 p_1021->g_406 p_1021->g_276 p_1021->g_518 p_1021->g_67 p_1021->g_528 p_1021->g_269 p_1021->g_519 p_1021->g_699 p_1021->g_706 p_1021->g_351 p_1021->g_766 p_1021->g_49 p_1021->g_717 p_1021->g_686 p_1021->g_837 p_1021->g_751
 */
uint32_t  func_1(struct S0 * p_1021)
{ /* block id: 4 */
    int64_t l_8[4][6] = {{0x526EC17E5C285CE9L,(-1L),0x5BBE56890C544087L,(-1L),0x526EC17E5C285CE9L,0x526EC17E5C285CE9L},{0x526EC17E5C285CE9L,(-1L),0x5BBE56890C544087L,(-1L),0x526EC17E5C285CE9L,0x526EC17E5C285CE9L},{0x526EC17E5C285CE9L,(-1L),0x5BBE56890C544087L,(-1L),0x526EC17E5C285CE9L,0x526EC17E5C285CE9L},{0x526EC17E5C285CE9L,(-1L),0x5BBE56890C544087L,(-1L),0x526EC17E5C285CE9L,0x526EC17E5C285CE9L}};
    VECTOR(int16_t, 4) l_11 = (VECTOR(int16_t, 4))(0x7457L, (VECTOR(int16_t, 2))(0x7457L, 5L), 5L);
    uint8_t l_25 = 0x08L;
    VECTOR(int32_t, 4) l_37 = (VECTOR(int32_t, 4))(0x6520C3D8L, (VECTOR(int32_t, 2))(0x6520C3D8L, 1L), 1L);
    uint64_t *l_54 = &p_1021->g_55;
    int32_t *l_898 = &p_1021->g_686[2][0];
    int32_t l_899 = 0L;
    int32_t l_912 = 0x50C70BABL;
    int32_t l_917 = (-1L);
    uint16_t ***l_942 = (void*)0;
    int64_t l_944 = 0x6B16B216A6C8A071L;
    int i, j;
    l_899 &= (safe_lshift_func_int8_t_s_s(((((*l_898) = func_4(l_8[3][0], (((safe_div_func_uint16_t_u_u(((VECTOR(uint16_t, 2))(abs(((VECTOR(int16_t, 2))(l_11.wx))))).odd, (safe_unary_minus_func_uint8_t_u(p_1021->g_comm_values[p_1021->tid])))) != 0x0DE5L) > func_13(((func_17((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_25, ((safe_lshift_func_int8_t_s_u(l_8[2][3], 4)) <= (p_1021->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1021->tid, 7))] & l_11.y)))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 4))(mad_hi(((VECTOR(uint8_t, 2))(0x9CL, 1UL)).yxyx, ((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(p_1021->g_28.yyyxxyxy)), ((((*l_54) = (((VECTOR(int16_t, 2))(sub_sat(((VECTOR(int16_t, 2))(0x4ACDL, 0x28DAL)), ((VECTOR(int16_t, 4))((safe_sub_func_int32_t_s_s(((VECTOR(int32_t, 4))(p_1021->g_31.xywz)).z, p_1021->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1021->tid, 7))])), func_32(l_37.y, p_1021->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1021->tid, 7))], l_37.z, l_8[3][0], p_1021), (-1L), 0x6B04L)).odd))).even ^ 0L)) || p_1021->g_55) | l_8[3][0]), ((VECTOR(uint8_t, 4))(0x06L)), ((VECTOR(uint8_t, 2))(250UL)), 1UL)))).sc472, ((VECTOR(uint8_t, 4))(0x6AL))))))).x)), l_37.z, p_1021->g_comm_values[p_1021->tid], p_1021) && 0x1E5908BEF20378A6L) == p_1021->g_comm_values[p_1021->tid]), l_8[1][4], l_11.w, p_1021)), l_11.w, p_1021)) , 0x2CL) , 5L), 3));
    for (p_1021->g_152 = 19; (p_1021->g_152 > 49); p_1021->g_152 = safe_add_func_int8_t_s_s(p_1021->g_152, 6))
    { /* block id: 296 */
        int32_t l_915 = (-1L);
        int32_t l_916 = 0x688020DEL;
        uint64_t **l_961 = (void*)0;
        int16_t l_966 = 1L;
        int32_t l_970 = 0x0803BF79L;
        for (p_1021->g_837 = 0; (p_1021->g_837 != (-20)); p_1021->g_837--)
        { /* block id: 299 */
            int16_t l_911[7] = {1L,1L,1L,1L,1L,1L,1L};
            int64_t l_933 = 0L;
            uint32_t l_935 = 4294967292UL;
            int16_t **l_998[6][6] = {{&p_1021->g_997,(void*)0,&p_1021->g_997,(void*)0,&p_1021->g_997,&p_1021->g_997},{&p_1021->g_997,(void*)0,&p_1021->g_997,(void*)0,&p_1021->g_997,&p_1021->g_997},{&p_1021->g_997,(void*)0,&p_1021->g_997,(void*)0,&p_1021->g_997,&p_1021->g_997},{&p_1021->g_997,(void*)0,&p_1021->g_997,(void*)0,&p_1021->g_997,&p_1021->g_997},{&p_1021->g_997,(void*)0,&p_1021->g_997,(void*)0,&p_1021->g_997,&p_1021->g_997},{&p_1021->g_997,(void*)0,&p_1021->g_997,(void*)0,&p_1021->g_997,&p_1021->g_997}};
            uint64_t l_1007[2][10] = {{18446744073709551612UL,8UL,18446744073709551612UL,18446744073709551612UL,8UL,18446744073709551612UL,18446744073709551612UL,8UL,18446744073709551612UL,18446744073709551612UL},{18446744073709551612UL,8UL,18446744073709551612UL,18446744073709551612UL,8UL,18446744073709551612UL,18446744073709551612UL,8UL,18446744073709551612UL,18446744073709551612UL}};
            VECTOR(int32_t, 4) l_1020 = (VECTOR(int32_t, 4))(0x1E5DCE73L, (VECTOR(int32_t, 2))(0x1E5DCE73L, (-1L)), (-1L));
            int i, j;
            for (p_1021->g_528 = 0; (p_1021->g_528 <= 54); p_1021->g_528 = safe_add_func_int64_t_s_s(p_1021->g_528, 8))
            { /* block id: 302 */
                int64_t l_914 = 6L;
                int32_t **l_934[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_934[i] = &p_1021->g_49[3][0];
                for (p_1021->g_706 = 21; (p_1021->g_706 <= (-20)); --p_1021->g_706)
                { /* block id: 305 */
                    int32_t *l_908 = &p_1021->g_686[2][0];
                    int32_t *l_909 = (void*)0;
                    int32_t *l_910[7];
                    int64_t l_913 = (-1L);
                    uint64_t l_918 = 5UL;
                    int8_t l_930[2][5] = {{(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L)}};
                    int16_t *l_943 = (void*)0;
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_910[i] = &p_1021->g_686[1][0];
                    ++l_918;
                    (*l_908) = (2UL <= (safe_div_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((safe_div_func_int64_t_s_s((((((safe_unary_minus_func_int64_t_s(l_930[0][2])) == (((0x07L != 0UL) & ((&l_898 == ((p_1021->g_55 , (safe_div_func_uint8_t_u_u(((0xF5AF8AF5L && l_933) , (*p_1021->g_766)), l_915))) , l_934[0])) <= p_1021->g_356.s6)) | 0x74L)) != 0xDC2D1762L) == l_935) , (*l_898)), (-2L))), 8)), 247UL)), GROUP_DIVERGE(0, 1))));
                    l_908 = func_89(((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((p_1021->g_751.x = ((void*)0 == l_942)), (l_944 |= (*l_898)))), (*p_1021->g_766))), 13)) || (safe_add_func_uint32_t_u_u(((0x6BBA3945D8A5E8F3L > (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u((l_933 && (0xFE9D30E080BD8597L > (safe_rshift_func_uint8_t_u_s(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 2))(rotate(((VECTOR(uint8_t, 8))(mul_hi(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))((1UL == (safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u((!1L), (*p_1021->g_766))) >= (*l_898)), l_916))), (*p_1021->g_766), 0xA6L, 0x96L, 0x78L, 246UL, (*l_898), (*l_898), ((VECTOR(uint8_t, 8))(0UL)))).s96ae)).yzzwwxzx, ((VECTOR(uint8_t, 8))(255UL))))).s02, ((VECTOR(uint8_t, 2))(255UL))))).xyyyxyxy, ((VECTOR(uint8_t, 8))(251UL))))).s4, 7)))), l_911[4])), 0)), l_911[4]))) == (*p_1021->g_766)), (*p_1021->g_716)))), (*l_898), l_961, p_1021);
                    (*p_1021->g_716) |= ((*l_898) = (safe_rshift_func_uint16_t_u_s(l_933, 8)));
                }
                l_915 &= 0L;
                return l_933;
            }
            for (l_933 = (-7); (l_933 == (-21)); l_933--)
            { /* block id: 319 */
                int16_t *l_967 = (void*)0;
                int32_t l_975[8][7] = {{0x0964616CL,0x7DB7683BL,1L,0x6C820890L,1L,0x7DB7683BL,0x0964616CL},{0x0964616CL,0x7DB7683BL,1L,0x6C820890L,1L,0x7DB7683BL,0x0964616CL},{0x0964616CL,0x7DB7683BL,1L,0x6C820890L,1L,0x7DB7683BL,0x0964616CL},{0x0964616CL,0x7DB7683BL,1L,0x6C820890L,1L,0x7DB7683BL,0x0964616CL},{0x0964616CL,0x7DB7683BL,1L,0x6C820890L,1L,0x7DB7683BL,0x0964616CL},{0x0964616CL,0x7DB7683BL,1L,0x6C820890L,1L,0x7DB7683BL,0x0964616CL},{0x0964616CL,0x7DB7683BL,1L,0x6C820890L,1L,0x7DB7683BL,0x0964616CL},{0x0964616CL,0x7DB7683BL,1L,0x6C820890L,1L,0x7DB7683BL,0x0964616CL}};
                int32_t l_976 = (-1L);
                uint32_t l_977 = 0xA72C7541L;
                int32_t l_978 = (-2L);
                int i, j;
                l_978 |= (((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 16))(hadd(((VECTOR(uint32_t, 8))(mad_hi(((VECTOR(uint32_t, 16))(0xD141B90AL, l_935, ((((l_966 , l_967) == ((safe_div_func_int32_t_s_s(l_970, 8L)) , (void*)0)) && 0UL) ^ (((l_976 |= (((((safe_div_func_int32_t_s_s(((safe_mod_func_int16_t_s_s(l_911[4], l_975[5][3])) == p_1021->g_397.y), (*l_898))) || 249UL) != l_916) < GROUP_DIVERGE(1, 1)) , p_1021->g_356.s4)) , l_977) == p_1021->g_399.s2)), 4294967295UL, 0xDA0909A6L, 0UL, p_1021->g_382.x, ((VECTOR(uint32_t, 8))(0x7E4CDABEL)), 0xFF200D5FL)).odd, ((VECTOR(uint32_t, 8))(9UL)), ((VECTOR(uint32_t, 8))(0x5C30E35BL))))).s2553431150470450, ((VECTOR(uint32_t, 16))(0xEB9C37D5L))))).s3e)).hi , l_966);
            }
            for (l_933 = 0; (l_933 > 12); l_933++)
            { /* block id: 325 */
                int16_t ***l_992 = (void*)0;
                int16_t *l_995 = &l_911[1];
                int16_t **l_994[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int16_t ***l_993 = &l_994[6];
                int32_t l_1013 = 1L;
                int8_t l_1014 = 0x4DL;
                uint32_t *l_1015 = (void*)0;
                uint32_t *l_1016 = (void*)0;
                uint32_t *l_1017 = (void*)0;
                uint32_t *l_1018 = (void*)0;
                uint32_t *l_1019 = (void*)0;
                int i;
                (*l_898) = (*l_898);
                l_916 &= (p_1021->g_584.y , (((VECTOR(int64_t, 16))(p_1021->g_981.wwyxwwwzxxwzwyyw)).s8 <= ((safe_mul_func_int16_t_s_s(((VECTOR(int16_t, 4))(0x0D61L, 0x67A0L, (-1L), 8L)).y, ((void*)0 == p_1021->g_984[3][1][1]))) & (safe_rshift_func_int16_t_s_s(((*l_898) , ((VECTOR(int16_t, 16))(mul_hi(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 2))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(0x74L, 0L, ((VECTOR(int8_t, 4))((-2L), ((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((*l_993) = (void*)0) != (l_998[3][4] = p_1021->g_996[5][0])), (*p_1021->g_766))), 1)) & (safe_add_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u((*l_898), (*l_898))) , GROUP_DIVERGE(1, 1)), 9L))), 0x15L, 8L)), 0x4AL, (-1L))).s4, 0L, 1L, 0x19L)).zwzzzyyzwzwzyxwy)).sf9, ((VECTOR(int8_t, 2))(0x30L))))).yyyxxxxyyxxxxxyx)).sff, ((VECTOR(uint8_t, 2))(0x18L))))), ((VECTOR(int16_t, 4))(1L)), 8L, ((VECTOR(int16_t, 4))(0L)), ((VECTOR(int16_t, 4))((-5L))), (-2L))).hi)).s5206142174273243, ((VECTOR(int16_t, 16))(0L))))).se), l_970)))));
                l_1020.x = ((((safe_add_func_uint8_t_u_u(0x35L, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(3L, 0x3CL)).yxyxxyyx)).s1)) & ((((~(safe_add_func_int64_t_s_s((p_1021->g_686[2][0] , ((*p_1021->g_766) || ((((l_1007[0][1] < (((*p_1021->g_204) < ((VECTOR(int8_t, 16))(p_1021->g_1008.s0522662631045513)).s5) == ((p_1021->g_382.y ^= (p_1021->g_67.s1 &= (safe_mul_func_int16_t_s_s((((l_1007[1][0] || l_970) != (FAKE_DIVERGE(p_1021->global_2_offset, get_global_id(2), 10) <= (safe_lshift_func_int8_t_s_u((!l_1013), 1)))) & l_1014), p_1021->g_783.z)))) >= 0L))) > (*p_1021->g_766)) && 0x19E6L) == (-4L)))), l_1007[0][0]))) | 0UL) , l_1013) != p_1021->g_357.z)) , p_1021->g_882) & l_1007[1][6]);
            }
        }
        return l_916;
    }
    return p_1021->g_889;
}


/* ------------------------------------------ */
/* 
 * reads : p_1021->g_67 p_1021->g_31 p_1021->g_78 p_1021->g_81 p_1021->g_83 p_1021->g_55 p_1021->g_comm_values p_1021->g_131 p_1021->l_comm_values p_1021->g_176 p_1021->g_182 p_1021->g_187 p_1021->g_204 p_1021->g_206 p_1021->g_269 p_1021->g_356 p_1021->g_192 p_1021->g_397 p_1021->g_399 p_1021->g_402 p_1021->g_406 p_1021->g_49 p_1021->g_28 p_1021->g_205 p_1021->g_469 p_1021->g_276 p_1021->g_479 p_1021->g_357 p_1021->g_347 p_1021->g_279 p_1021->g_518 p_1021->g_525 p_1021->g_528 p_1021->g_562 p_1021->g_152 p_1021->g_519 p_1021->g_671 p_1021->g_686 p_1021->g_348 p_1021->g_699 p_1021->g_377 p_1021->g_382 p_1021->g_714 p_1021->g_721 p_1021->g_716 p_1021->g_717 p_1021->g_751 p_1021->g_752 p_1021->g_632 p_1021->g_706 permutations p_1021->g_38 p_1021->g_766 p_1021->g_837 p_1021->g_861 p_1021->g_862
 * writes: p_1021->g_152 p_1021->g_192 p_1021->g_176 p_1021->g_131 p_1021->g_377 p_1021->g_382 p_1021->g_421 p_1021->g_357 p_1021->g_406 p_1021->g_276 p_1021->g_518 p_1021->g_67 p_1021->g_528 p_1021->g_269 p_1021->g_519 p_1021->g_699 p_1021->g_706 p_1021->g_351 p_1021->g_766 p_1021->g_49 p_1021->g_717
 */
int32_t  func_4(uint64_t  p_5, uint32_t  p_6, int64_t  p_7, struct S0 * p_1021)
{ /* block id: 22 */
    VECTOR(uint32_t, 4) l_65 = (VECTOR(uint32_t, 4))(0x802A5F00L, (VECTOR(uint32_t, 2))(0x802A5F00L, 0x1DE0336CL), 0x1DE0336CL);
    VECTOR(uint32_t, 4) l_66 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x1D432E6AL), 0x1D432E6AL);
    VECTOR(uint32_t, 4) l_68 = (VECTOR(uint32_t, 4))(4294967295UL, (VECTOR(uint32_t, 2))(4294967295UL, 0x10BACB65L), 0x10BACB65L);
    VECTOR(uint16_t, 2) l_77 = (VECTOR(uint16_t, 2))(0xA47FL, 0xBF26L);
    VECTOR(int16_t, 16) l_79 = (VECTOR(int16_t, 16))(0x3277L, (VECTOR(int16_t, 4))(0x3277L, (VECTOR(int16_t, 2))(0x3277L, 0x5E29L), 0x5E29L), 0x5E29L, 0x3277L, 0x5E29L, (VECTOR(int16_t, 2))(0x3277L, 0x5E29L), (VECTOR(int16_t, 2))(0x3277L, 0x5E29L), 0x3277L, 0x5E29L, 0x3277L, 0x5E29L);
    VECTOR(int8_t, 8) l_80 = (VECTOR(int8_t, 8))(0x03L, (VECTOR(int8_t, 4))(0x03L, (VECTOR(int8_t, 2))(0x03L, 0x3CL), 0x3CL), 0x3CL, 0x03L, 0x3CL);
    VECTOR(uint64_t, 2) l_82 = (VECTOR(uint64_t, 2))(18446744073709551608UL, 18446744073709551615UL);
    int32_t *l_88 = (void*)0;
    uint64_t ***l_859 = (void*)0;
    uint64_t **l_860[5][7] = {{&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519},{&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519},{&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519},{&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519},{&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519,&p_1021->g_519}};
    uint32_t l_895 = 4294967295UL;
    uint64_t ***l_896 = (void*)0;
    int32_t l_897[3];
    int i, j;
    for (i = 0; i < 3; i++)
        l_897[i] = 0x71210F3FL;
    l_860[3][2] = (((VECTOR(uint32_t, 16))(mad_sat(((VECTOR(uint32_t, 8))(sub_sat(((VECTOR(uint32_t, 16))(l_65.yzyxzwyzwxxywzyy)).lo, ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(l_65.w, GROUP_DIVERGE(0, 1), ((VECTOR(uint32_t, 4))(l_66.yzxy)), 0UL, 0x01A7DC5FL)).s57)).xyyxyxxx))).s0023242615053345, ((VECTOR(uint32_t, 4))(p_1021->g_67.s5312)).xxyzzwzywyyyzwxx, ((VECTOR(uint32_t, 4))(FAKE_DIVERGE(p_1021->local_2_offset, get_local_id(2), 10), ((VECTOR(uint32_t, 2))(((VECTOR(uint32_t, 8))(((VECTOR(uint32_t, 2))(l_68.wy)), 1UL, (((VECTOR(int16_t, 2))(hadd(((VECTOR(int16_t, 8))((((p_1021->g_31.x > func_13(l_65.z, p_7, ((((l_860[3][2] = func_69((+(+(safe_div_func_uint8_t_u_u((p_1021->g_31.z & ((VECTOR(uint16_t, 4))(safe_clamp_func(VECTOR(uint16_t, 4),VECTOR(uint16_t, 4),((VECTOR(uint16_t, 8))(hadd(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_77.yx)).yyyxxyyxxxxxxyyx)).even, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(abs_diff(((VECTOR(int16_t, 4))(p_1021->g_78.s2055)).even, ((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(l_79.s3b49)).lo))))), 1UL, 65530UL)).yzxxxyxz))).hi, ((VECTOR(uint16_t, 16))(upsample(((VECTOR(uint8_t, 8))(abs(((VECTOR(int8_t, 2))(l_80.s04)).yyyyxyyx))).s7054462010524253, ((VECTOR(uint8_t, 4))(safe_clamp_func(VECTOR(uint8_t, 4),uint8_t,((VECTOR(uint8_t, 16))(p_1021->g_81.s5023460365527014)).s149a, (uint8_t)p_7, (uint8_t)((p_6 <= ((VECTOR(uint64_t, 8))(mul_hi(((VECTOR(uint64_t, 4))(l_82.yxxx)).zyzzzzzz, ((VECTOR(uint64_t, 16))(hadd(((VECTOR(uint64_t, 2))(p_1021->g_83.xy)).yyyyyyyyyyyxxxxy, ((VECTOR(uint64_t, 8))((((safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s((l_88 == l_88), p_1021->g_83.y)), l_79.s4)) , p_1021->g_55) == 3L), 18446744073709551615UL, p_5, 0x31D57787EE95513FL, ((VECTOR(uint64_t, 4))(0x613173F18198E80CL)))).s1365554052225330))).even))).s1) > p_1021->g_67.s0)))).zzzzzzyxzzzzwzzx))).sd07d, ((VECTOR(uint16_t, 4))(1UL))))).z), 0xA5L)))), p_7, l_80.s5, p_6, p_1021->g_31.x, p_1021)) != p_1021->g_861) , 0x05L) ^ p_6), p_1021)) , (*p_1021->g_861)) != (void*)0), ((VECTOR(int16_t, 4))(9L)), 0x55DEL, (-3L), (-1L))).s03, ((VECTOR(int16_t, 2))(0L))))).hi <= (-1L)), l_895, ((VECTOR(uint32_t, 2))(0x111122FAL)), 0x74FA1C70L)).s21)), 0UL)).yzywzzzzzyyzyywy))).s9 , (void*)0);
    return l_897[1];
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t  func_13(uint32_t  p_14, uint16_t  p_15, uint32_t  p_16, struct S0 * p_1021)
{ /* block id: 14 */
    int8_t l_59[10][9] = {{0x0FL,0L,0x1CL,0L,0x0CL,0x52L,0L,0x19L,0x21L},{0x0FL,0L,0x1CL,0L,0x0CL,0x52L,0L,0x19L,0x21L},{0x0FL,0L,0x1CL,0L,0x0CL,0x52L,0L,0x19L,0x21L},{0x0FL,0L,0x1CL,0L,0x0CL,0x52L,0L,0x19L,0x21L},{0x0FL,0L,0x1CL,0L,0x0CL,0x52L,0L,0x19L,0x21L},{0x0FL,0L,0x1CL,0L,0x0CL,0x52L,0L,0x19L,0x21L},{0x0FL,0L,0x1CL,0L,0x0CL,0x52L,0L,0x19L,0x21L},{0x0FL,0L,0x1CL,0L,0x0CL,0x52L,0L,0x19L,0x21L},{0x0FL,0L,0x1CL,0L,0x0CL,0x52L,0L,0x19L,0x21L},{0x0FL,0L,0x1CL,0L,0x0CL,0x52L,0L,0x19L,0x21L}};
    int32_t *l_60[6][3][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    uint32_t l_61 = 0xA4AC0D40L;
    uint8_t l_64 = 0xE1L;
    int i, j, k;
    for (p_15 = 0; (p_15 < 21); p_15 = safe_add_func_uint16_t_u_u(p_15, 3))
    { /* block id: 17 */
        int32_t l_58 = 5L;
        return l_58;
    }
    ++l_61;
    return l_64;
}


/* ------------------------------------------ */
/* 
 * reads : p_1021->g_28
 * writes:
 */
int64_t  func_17(uint16_t  p_18, int32_t  p_19, uint64_t  p_20, struct S0 * p_1021)
{ /* block id: 12 */
    return p_1021->g_28.y;
}


/* ------------------------------------------ */
/* 
 * reads : p_1021->g_31
 * writes: p_1021->g_31 p_1021->g_48 p_1021->g_50
 */
int16_t  func_32(int64_t  p_33, uint64_t  p_34, uint16_t  p_35, uint8_t  p_36, struct S0 * p_1021)
{ /* block id: 5 */
    int32_t *l_39 = (void*)0;
    int32_t *l_42 = (void*)0;
    int32_t *l_45[3][8][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    int32_t **l_47 = (void*)0;
    int32_t ***l_46[9];
    uint16_t l_51 = 3UL;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_46[i] = &l_47;
    p_1021->g_31.w ^= p_33;
    p_1021->g_50 = (p_1021->g_48[0] = &l_45[2][6][1]);
    l_51++;
    return p_1021->g_31.z;
}


/* ------------------------------------------ */
/* 
 * reads : p_1021->g_83 p_1021->g_31 p_1021->g_comm_values p_1021->g_131 p_1021->l_comm_values p_1021->g_67 p_1021->g_176 p_1021->g_182 p_1021->g_187 p_1021->g_204 p_1021->g_206 p_1021->g_269 p_1021->g_356 p_1021->g_192 p_1021->g_397 p_1021->g_399 p_1021->g_402 p_1021->g_406 p_1021->g_49 p_1021->g_55 p_1021->g_28 p_1021->g_205 p_1021->g_469 p_1021->g_276 p_1021->g_479 p_1021->g_78 p_1021->g_357 p_1021->g_347 p_1021->g_279 p_1021->g_518 p_1021->g_525 p_1021->g_528 p_1021->g_562 p_1021->g_152 p_1021->g_519 p_1021->g_671 p_1021->g_686 p_1021->g_348 p_1021->g_699 p_1021->g_377 p_1021->g_382 p_1021->g_714 p_1021->g_721 p_1021->g_716 p_1021->g_717 p_1021->g_751 p_1021->g_752 p_1021->g_632 p_1021->g_706 permutations p_1021->g_38 p_1021->g_766 p_1021->g_837
 * writes: p_1021->g_152 p_1021->g_192 p_1021->g_176 p_1021->g_131 p_1021->g_377 p_1021->g_382 p_1021->g_421 p_1021->g_357 p_1021->g_406 p_1021->g_276 p_1021->g_518 p_1021->g_67 p_1021->g_528 p_1021->g_269 p_1021->g_519 p_1021->g_699 p_1021->g_706 p_1021->g_351 p_1021->g_766 p_1021->g_49 p_1021->g_717
 */
uint64_t ** func_69(int32_t  p_70, int16_t  p_71, uint16_t  p_72, uint64_t  p_73, uint64_t  p_74, struct S0 * p_1021)
{ /* block id: 23 */
    uint32_t l_93 = 0xEB0A1AFBL;
    VECTOR(int8_t, 4) l_102 = (VECTOR(int8_t, 4))((-5L), (VECTOR(int8_t, 2))((-5L), 0L), 0L);
    int32_t l_103 = (-1L);
    VECTOR(int32_t, 16) l_104 = (VECTOR(int32_t, 16))(0L, (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 7L), 7L), 7L, 0L, 7L, (VECTOR(int32_t, 2))(0L, 7L), (VECTOR(int32_t, 2))(0L, 7L), 0L, 7L, 0L, 7L);
    uint64_t *l_111 = (void*)0;
    uint64_t **l_110 = &l_111;
    int32_t **l_434 = &p_1021->g_49[3][0];
    int8_t *l_435 = (void*)0;
    int8_t *l_436 = (void*)0;
    uint16_t **l_788 = &p_1021->g_525;
    VECTOR(int64_t, 8) l_789 = (VECTOR(int64_t, 8))((-1L), (VECTOR(int64_t, 4))((-1L), (VECTOR(int64_t, 2))((-1L), 0x3FF7DAB5002D288AL), 0x3FF7DAB5002D288AL), 0x3FF7DAB5002D288AL, (-1L), 0x3FF7DAB5002D288AL);
    uint8_t **l_805 = &p_1021->g_766;
    uint32_t l_806 = 0x789BC99BL;
    VECTOR(int32_t, 4) l_811 = (VECTOR(int32_t, 4))(0x74CDC012L, (VECTOR(int32_t, 2))(0x74CDC012L, 1L), 1L);
    int8_t ***l_822 = (void*)0;
    int64_t **l_849 = &p_1021->g_187;
    int64_t ***l_848 = &l_849;
    int64_t ****l_850 = &l_848;
    uint64_t l_851 = 1UL;
    int8_t l_852 = 0x18L;
    uint16_t l_853 = 0UL;
    int8_t *l_854 = (void*)0;
    int8_t *l_855 = (void*)0;
    int8_t *l_856[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_857[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    VECTOR(uint8_t, 16) l_858 = (VECTOR(uint8_t, 16))(0x1CL, (VECTOR(uint8_t, 4))(0x1CL, (VECTOR(uint8_t, 2))(0x1CL, 255UL), 255UL), 255UL, 0x1CL, 255UL, (VECTOR(uint8_t, 2))(0x1CL, 255UL), (VECTOR(uint8_t, 2))(0x1CL, 255UL), 0x1CL, 255UL, 0x1CL, 255UL);
    int i;
    (*l_434) = func_89(l_93, p_70, func_94(((*l_434) = func_100(((((func_17(p_1021->g_83.x, ((p_1021->g_406.y = ((((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 2))(l_102.wy)))).yxyyyxxyyyyyxxyy)).s2, (p_1021->g_357.x = ((((l_103 = func_13(p_70, p_1021->g_31.x, l_102.x, p_1021)) , (((VECTOR(int32_t, 4))(l_104.sfc20)).x , func_105(l_103, (((VECTOR(int16_t, 4))(add_sat(((VECTOR(int16_t, 16))(0x377FL, p_1021->g_31.w, 0x7EA3L, 1L, (-1L), (-1L), l_104.s3, (-1L), ((VECTOR(int16_t, 8))((-1L))))).sa9e6, ((VECTOR(int16_t, 4))(0x6F8CL))))).y ^ 0x991DL), l_110, l_103, p_1021))) != l_434) || (-1L))), 0x69L, 0L, ((VECTOR(int8_t, 2))(0x6DL)), 0x26L, 0x06L)).s6 != p_74) != 0x2D78B653L)) & p_1021->g_206.x), p_1021->g_399.s4, p_1021) >= l_104.sf) , 0x630E1BB7L) & (-1L)) , 0UL), p_1021)), p_1021->g_55, p_70, p_70, p_1021->g_632[5], p_1021), p_1021);
    for (l_103 = 0; (l_103 > (-27)); l_103--)
    { /* block id: 249 */
        VECTOR(int16_t, 2) l_781 = (VECTOR(int16_t, 2))(0L, (-10L));
        VECTOR(int16_t, 16) l_782 = (VECTOR(int16_t, 16))(0x1AABL, (VECTOR(int16_t, 4))(0x1AABL, (VECTOR(int16_t, 2))(0x1AABL, 0x5429L), 0x5429L), 0x5429L, 0x1AABL, 0x5429L, (VECTOR(int16_t, 2))(0x1AABL, 0x5429L), (VECTOR(int16_t, 2))(0x1AABL, 0x5429L), 0x1AABL, 0x5429L, 0x1AABL, 0x5429L);
        uint16_t **l_786 = (void*)0;
        uint16_t ***l_787[7] = {&l_786,&l_786,&l_786,&l_786,&l_786,&l_786,&l_786};
        uint32_t l_794 = 4294967286UL;
        int32_t *l_795 = (void*)0;
        int32_t *l_796 = (void*)0;
        int32_t *l_797[7][3][2] = {{{&l_103,&l_103},{&l_103,&l_103},{&l_103,&l_103}},{{&l_103,&l_103},{&l_103,&l_103},{&l_103,&l_103}},{{&l_103,&l_103},{&l_103,&l_103},{&l_103,&l_103}},{{&l_103,&l_103},{&l_103,&l_103},{&l_103,&l_103}},{{&l_103,&l_103},{&l_103,&l_103},{&l_103,&l_103}},{{&l_103,&l_103},{&l_103,&l_103},{&l_103,&l_103}},{{&l_103,&l_103},{&l_103,&l_103},{&l_103,&l_103}}};
        int8_t ***l_804 = &p_1021->g_421;
        uint64_t **l_828 = &p_1021->g_519;
        int i, j, k;
        l_806 ^= (safe_add_func_uint8_t_u_u((2UL | ((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 4))(p_1021->g_780.s2311)).yywxyzwz, ((VECTOR(int16_t, 8))(mad_sat(((VECTOR(int16_t, 8))(l_781.xxxxxxyx)), ((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(mul_hi(((VECTOR(int16_t, 2))(l_782.scc)).xyyxxyxx, ((VECTOR(int16_t, 4))(p_1021->g_783.yzwy)).wxxwxwyy))))), ((VECTOR(int16_t, 16))(min(((VECTOR(int16_t, 2))(((VECTOR(int16_t, 4))(0L, (-1L), 1L, (-1L))).hi)).yxyxxyyyxxyyyyyy, (int16_t)0x715AL))).odd)))))).s6), (safe_mod_func_uint64_t_u_u(((l_788 = l_786) != ((l_781.y != ((((((VECTOR(int64_t, 16))(rhadd(((VECTOR(int64_t, 2))(1L, (-1L))).xyxyyxyxxyxxyxyx, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 16))(l_789.s1110770050321465))))))).sd <= ((((((VECTOR(int32_t, 4))((safe_lshift_func_uint16_t_u_s(((p_70 = (l_782.s2 ^ (l_781.x >= l_794))) ^ (safe_mul_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u(((safe_add_func_int64_t_s_s((l_804 != &p_1021->g_421), 0x45CA194B0E0F8A24L)) || 6UL), 6)) < p_1021->g_351.s4) >= p_71), p_1021->g_276.s7))), 4)), l_104.s8, 0x2A968C1AL, 0x26EFB31CL)).z <= 0UL) == p_1021->g_356.s7) , &p_1021->g_766) == l_805)) >= p_73) <= 0xE7E40685L) <= FAKE_DIVERGE(p_1021->group_0_offset, get_group_id(0), 10))) , (void*)0)), p_73))));
        (*l_434) = func_100(p_70, p_1021);
        for (p_1021->g_706 = 0; (p_1021->g_706 == 3); p_1021->g_706 = safe_add_func_uint64_t_u_u(p_1021->g_706, 1))
        { /* block id: 256 */
            int i, j;
            barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
            p_1021->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[(safe_mod_func_uint32_t_u_u(4UL, 10))][(safe_mod_func_uint32_t_u_u(p_1021->tid, 7))]));
            (*p_1021->g_716) = permutations[(safe_mod_func_uint32_t_u_u(4UL, 10))][(safe_mod_func_uint32_t_u_u(p_1021->tid, 7))];
            (*l_434) = (void*)0;
        }
        for (p_1021->g_706 = 0; (p_1021->g_706 <= 24); p_1021->g_706 = safe_add_func_uint16_t_u_u(p_1021->g_706, 5))
        { /* block id: 265 */
            int8_t ***l_823 = (void*)0;
            int32_t l_824 = (-5L);
            if (((VECTOR(int32_t, 16))(l_811.xyyyzxxzywwxwzww)).sd)
            { /* block id: 266 */
                l_824 ^= (((((safe_mod_func_int64_t_s_s(p_73, (--p_74))) , 0L) >= ((safe_lshift_func_uint16_t_u_u((p_72++), (safe_sub_func_uint64_t_u_u((((((l_822 != ((((void*)0 != l_111) >= 0x4BCB5756490CADE3L) , l_823)) >= ((p_1021->g_752.s2 <= 0x1308L) , p_1021->g_279.y)) ^ GROUP_DIVERGE(2, 1)) , &p_1021->g_518) == &p_1021->g_518), p_71)))) && (*p_1021->g_204))) ^ p_71) , p_71);
            }
            else
            { /* block id: 270 */
                int32_t l_829 = 0x286D9CEDL;
                int8_t **l_830 = &l_436;
                int8_t ***l_831 = (void*)0;
                int8_t **l_832 = &l_435;
                for (l_93 = (-22); (l_93 < 23); l_93 = safe_add_func_int8_t_s_s(l_93, 2))
                { /* block id: 273 */
                    uint64_t **l_827 = &l_111;
                    return l_828;
                }
                l_829 = ((((void*)0 != p_1021->g_38) || (l_824 | 0x793B99ECL)) > (*p_1021->g_766));
                (*p_1021->g_716) &= (FAKE_DIVERGE(p_1021->local_0_offset, get_local_id(0), 10) , ((p_71 && p_74) <= p_1021->g_276.s1));
                p_70 = ((l_830 == (l_832 = l_830)) >= l_829);
            }
        }
    }
    p_70 |= ((((l_811.x ^= ((safe_lshift_func_uint8_t_u_s(FAKE_DIVERGE(p_1021->local_0_offset, get_local_id(0), 10), 3)) != (safe_sub_func_int16_t_s_s(p_1021->g_837, (((safe_div_func_uint32_t_u_u(p_1021->g_399.s4, (((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(1L, ((p_74 <= (p_74 >= (((p_74 <= p_73) ^ (l_851 = (((p_73 , ((*l_850) = l_848)) != &l_849) != 0xD1994B49L))) == 1L))) >= 0x0BL))), (*p_1021->g_716))), l_852)) <= p_74), (-5L))) , p_1021->g_686[2][1]) , p_71))) < p_1021->g_686[2][0]) < l_853))))) < 1UL) && 8L) ^ 0UL);
    (*p_1021->g_716) = (((VECTOR(uint8_t, 8))(l_858.scf003ced)).s3 ^ p_71);
    return &p_1021->g_519;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
int32_t * func_89(uint64_t  p_90, int64_t  p_91, uint64_t ** p_92, struct S0 * p_1021)
{ /* block id: 243 */
    VECTOR(uint16_t, 16) l_772 = (VECTOR(uint16_t, 16))(0xFBA6L, (VECTOR(uint16_t, 4))(0xFBA6L, (VECTOR(uint16_t, 2))(0xFBA6L, 65535UL), 65535UL), 65535UL, 0xFBA6L, 65535UL, (VECTOR(uint16_t, 2))(0xFBA6L, 65535UL), (VECTOR(uint16_t, 2))(0xFBA6L, 65535UL), 0xFBA6L, 65535UL, 0xFBA6L, 65535UL);
    uint64_t *l_773 = &p_1021->g_528;
    int32_t l_774 = (-7L);
    int32_t *l_775 = &p_1021->g_686[2][0];
    int i;
    l_774 = ((((VECTOR(uint16_t, 4))(l_772.sb7bd)).x , l_773) == (p_90 , l_773));
    return l_775;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
uint64_t ** func_94(int32_t * p_95, uint32_t  p_96, int32_t  p_97, int16_t  p_98, int32_t  p_99, struct S0 * p_1021)
{ /* block id: 241 */
    uint64_t **l_771 = &p_1021->g_519;
    return l_771;
}


/* ------------------------------------------ */
/* 
 * reads : p_1021->g_31 p_1021->g_204 p_1021->g_205 p_1021->g_269 p_1021->g_469 p_1021->g_276 p_1021->g_479 p_1021->g_78 p_1021->g_357 p_1021->g_347 p_1021->g_279 p_1021->g_518 p_1021->g_399 p_1021->g_525 p_1021->g_528 p_1021->g_562 p_1021->g_152 p_1021->g_519 p_1021->g_131 p_1021->g_671 p_1021->g_686 p_1021->g_348 p_1021->g_699 p_1021->g_377 p_1021->g_382 p_1021->g_714 p_1021->g_721 p_1021->g_716 p_1021->g_717 p_1021->g_751 p_1021->g_752 p_1021->g_206
 * writes: p_1021->g_276 p_1021->g_518 p_1021->g_67 p_1021->g_528 p_1021->g_269 p_1021->g_152 p_1021->g_519 p_1021->g_131 p_1021->g_699 p_1021->g_706 p_1021->g_351 p_1021->g_382 p_1021->g_766
 */
int32_t * func_100(uint32_t  p_101, struct S0 * p_1021)
{ /* block id: 126 */
    int8_t **l_445 = &p_1021->g_422;
    int8_t ***l_446 = &p_1021->g_421;
    int8_t ***l_447 = &p_1021->g_421;
    int8_t ***l_448 = &p_1021->g_421;
    int8_t ***l_449 = &p_1021->g_421;
    int8_t ***l_450 = (void*)0;
    int8_t ***l_451 = &p_1021->g_421;
    int8_t **l_452 = &p_1021->g_422;
    int32_t l_453 = 0x178F497EL;
    int32_t *l_454 = (void*)0;
    int32_t *l_455 = (void*)0;
    int32_t *l_456[10][7][3] = {{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}};
    int32_t l_457 = 0x7760177BL;
    VECTOR(int32_t, 2) l_476 = (VECTOR(int32_t, 2))(0x48B6C5BFL, 0x7DBAC537L);
    uint8_t *l_485 = &p_1021->g_152;
    int32_t l_488 = 0x400E13ABL;
    int64_t l_524 = 0x6AA8F1FB75C4A520L;
    uint64_t **l_526 = &p_1021->g_519;
    uint32_t l_554 = 0xC97655F0L;
    int32_t *l_558 = &l_488;
    int32_t *l_560 = &l_453;
    VECTOR(int64_t, 8) l_588 = (VECTOR(int64_t, 8))(0x2B273719B2482D56L, (VECTOR(int64_t, 4))(0x2B273719B2482D56L, (VECTOR(int64_t, 2))(0x2B273719B2482D56L, 0L), 0L), 0L, 0x2B273719B2482D56L, 0L);
    VECTOR(int8_t, 2) l_646 = (VECTOR(int8_t, 2))(0x57L, (-7L));
    uint16_t l_665 = 65526UL;
    int32_t *l_668 = &l_453;
    int16_t *l_705[4];
    uint64_t *l_718[1];
    VECTOR(int64_t, 4) l_719 = (VECTOR(int64_t, 4))((-2L), (VECTOR(int64_t, 2))((-2L), 1L), 1L);
    uint8_t *l_738 = &p_1021->g_152;
    int32_t *l_746 = (void*)0;
    VECTOR(uint16_t, 8) l_753 = (VECTOR(uint16_t, 8))(0xB209L, (VECTOR(uint16_t, 4))(0xB209L, (VECTOR(uint16_t, 2))(0xB209L, 0x8C63L), 0x8C63L), 0x8C63L, 0xB209L, 0x8C63L);
    int16_t l_758 = 1L;
    uint8_t **l_765 = &l_485;
    uint64_t l_767[9][1] = {{0x445780E52CEA99FBL},{0x445780E52CEA99FBL},{0x445780E52CEA99FBL},{0x445780E52CEA99FBL},{0x445780E52CEA99FBL},{0x445780E52CEA99FBL},{0x445780E52CEA99FBL},{0x445780E52CEA99FBL},{0x445780E52CEA99FBL}};
    uint32_t *l_768[2][5][8] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
    uint16_t l_769 = 65526UL;
    int32_t *l_770 = (void*)0;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_705[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_718[i] = &p_1021->g_528;
    if (((safe_add_func_int16_t_s_s((0xD4L >= ((void*)0 != &p_1021->g_205)), ((l_457 &= (l_453 = ((p_1021->g_31.w , ((safe_add_func_uint64_t_u_u((p_101 < (safe_sub_func_int32_t_s_s(0x31CD8A4DL, (safe_rshift_func_int16_t_s_s(((l_445 == (l_452 = &p_1021->g_422)) == 7UL), 4))))), p_101)) ^ (*p_1021->g_204))) >= p_1021->g_269.x))) != 0xBC323B3BL))) || p_101))
    { /* block id: 130 */
        uint8_t l_460 = 0x58L;
        l_460 = ((safe_lshift_func_int8_t_s_u((*p_1021->g_204), 3)) | (-2L));
    }
    else
    { /* block id: 132 */
        uint32_t l_477[1][2][1];
        int32_t l_478 = 0x1D688367L;
        int32_t l_498 = 0L;
        int64_t l_507 = 0x337EEC6D7E4C9B04L;
        uint64_t ***l_520[7] = {&p_1021->g_518,&p_1021->g_518,&p_1021->g_518,&p_1021->g_518,&p_1021->g_518,&p_1021->g_518,&p_1021->g_518};
        uint16_t **l_521 = (void*)0;
        uint16_t *l_523 = (void*)0;
        uint16_t **l_522 = &l_523;
        uint64_t *l_527 = &p_1021->g_528;
        int32_t l_529 = 0x52758AF9L;
        int32_t l_536 = 1L;
        int32_t l_547 = 1L;
        int32_t l_549 = 4L;
        int32_t l_550[7] = {0x278DBE8CL,0x278DBE8CL,0x278DBE8CL,0x278DBE8CL,0x278DBE8CL,0x278DBE8CL,0x278DBE8CL};
        int32_t *l_557 = &l_498;
        int32_t *l_559[6][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
        int32_t *l_669[4][8][4] = {{{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0}},{{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0}},{{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0}},{{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0},{(void*)0,&l_453,(void*)0,(void*)0}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_477[i][j][k] = 4294967286UL;
            }
        }
        for (l_453 = 15; (l_453 <= 8); l_453 = safe_sub_func_uint32_t_u_u(l_453, 7))
        { /* block id: 135 */
            VECTOR(uint16_t, 2) l_463 = (VECTOR(uint16_t, 2))(0UL, 0x0014L);
            VECTOR(uint16_t, 8) l_464 = (VECTOR(uint16_t, 8))(8UL, (VECTOR(uint16_t, 4))(8UL, (VECTOR(uint16_t, 2))(8UL, 65535UL), 65535UL), 65535UL, 8UL, 65535UL);
            uint16_t *l_486 = (void*)0;
            int32_t l_487 = 0x124B3ED1L;
            int32_t **l_495 = (void*)0;
            int i;
            l_488 = ((l_487 = ((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 16))(mul_hi(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(rhadd(((VECTOR(uint16_t, 2))(l_463.xx)).xyxxyyyyyyyxyxxx, ((VECTOR(uint16_t, 16))(l_464.s4227366213350250))))).s7e)).yxxxxyyxxxyxxxyy, ((VECTOR(uint16_t, 4))(abs(((VECTOR(uint16_t, 16))(0x2375L, 0UL, ((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(mad_sat(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 2))(mul_hi(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((~((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 8))(((((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(p_1021->g_469.wyzwzxzz)).s7447467246070452)).s6 > (safe_div_func_int64_t_s_s((p_1021->g_276.s7 , p_101), (safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s(((l_477[0][1][0] = ((VECTOR(int32_t, 16))(l_476.yxxxxyyyxyyxyyyx)).s1) ^ ((l_478 > ((((VECTOR(uint32_t, 4))(p_1021->g_479.xxyy)).z , p_101) != (p_101 >= GROUP_DIVERGE(1, 1)))) < (safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int8_t_s((p_1021->g_469.x && p_101))) | (safe_add_func_int32_t_s_s((l_485 == (void*)0), p_1021->g_276.s5))), p_1021->g_78.s4)))), l_464.s0)), 65527UL))))) || l_464.s4), 1UL, p_1021->g_357.x, ((VECTOR(uint8_t, 4))(0x55L)), 4UL)).s5433055121005005)).s8), l_463.y)), l_464.s5)), 0UL, 65535UL, 65526UL)).zwxxwzyyxxwwxywx)))).s21, ((VECTOR(uint16_t, 2))(0UL))))), ((VECTOR(uint16_t, 2))(65535UL))))).xyxyyyyx)), ((VECTOR(uint16_t, 8))(0x36EFL)), ((VECTOR(uint16_t, 8))(65535UL))))).odd)), GROUP_DIVERGE(1, 1), 0UL, 7UL, 65531UL, 0x6C23L, ((VECTOR(uint16_t, 2))(0x60D7L)), p_101, 65533UL, 0xCFCEL)).s738e))).zwzwyyxwyywyzyyx))), ((VECTOR(uint16_t, 16))(65535UL))))).sc) || p_1021->g_357.y);
            l_487 |= (safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((((~(--p_1021->g_276.s7)) , &l_445) != ((&p_1021->g_38 != l_495) , &p_1021->g_421)) , ((safe_sub_func_int8_t_s_s(((l_498 < FAKE_DIVERGE(p_1021->group_2_offset, get_group_id(2), 10)) , 0x74L), (~p_101))) & (safe_div_func_int8_t_s_s((l_478 |= p_101), (safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(GROUP_DIVERGE(1, 1), (((0x2A42L != p_101) , 0x107C89032DD5BD1EL) & l_477[0][1][0]))) >= p_101) != 0UL), l_507)), (*p_1021->g_204))))))), p_1021->g_347.x)), 5));
        }
        l_498 &= (l_478 |= ((+((*l_527) = (((safe_sub_func_uint64_t_u_u(((((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(p_1021->g_279.y, 0x6F29485CL)), (safe_sub_func_uint16_t_u_u(0x8D70L, (((p_1021->g_67.s0 = (safe_mod_func_int8_t_s_s(((p_1021->g_518 = p_1021->g_518) == ((((*l_522) = (void*)0) == (p_1021->g_399.s0 , (l_524 , p_1021->g_525))) , l_526)), p_101))) > 6UL) | FAKE_DIVERGE(p_1021->local_0_offset, get_local_id(0), 10)))))) , GROUP_DIVERGE(1, 1)) , l_507) , 0x849FAC22516CF802L), 0x7B08E8B46A2E5514L)) & FAKE_DIVERGE(p_1021->local_0_offset, get_local_id(0), 10)) && 0xEE0B626C5D285FF2L))) , l_529));
        if (p_101)
        { /* block id: 149 */
            int64_t l_535 = 0x4EF181832A3B548DL;
            int32_t l_537 = (-9L);
            int32_t l_541 = 0x759319A2L;
            int32_t l_542 = 0x131B35BCL;
            int32_t l_543 = 1L;
            int32_t l_552[3];
            int32_t l_553 = (-1L);
            int32_t *l_561 = &l_550[0];
            int i;
            for (i = 0; i < 3; i++)
                l_552[i] = 0x4305F21DL;
            for (p_1021->g_528 = 0; (p_1021->g_528 != 43); p_1021->g_528 = safe_add_func_uint16_t_u_u(p_1021->g_528, 9))
            { /* block id: 152 */
                int32_t l_534 = (-7L);
                int32_t l_538 = 0x4BB38A69L;
                int32_t l_539 = (-7L);
                int32_t l_540 = 0x095DAD95L;
                int32_t l_544 = 0x0B84368AL;
                int32_t l_545 = 0x1B7D6304L;
                int32_t l_546 = 6L;
                int32_t l_548 = 0x28A911A8L;
                VECTOR(int32_t, 4) l_551 = (VECTOR(int32_t, 4))(4L, (VECTOR(int32_t, 2))(4L, 0x20A6D275L), 0x20A6D275L);
                int i;
                l_536 = (safe_mul_func_uint8_t_u_u(((FAKE_DIVERGE(p_1021->local_2_offset, get_local_id(2), 10) ^ p_1021->g_276.s4) & p_1021->g_205), ((VECTOR(int8_t, 4))(clz(((VECTOR(int8_t, 8))(0x05L, (p_1021->g_269.x = (p_101 > (l_534 | (p_101 != l_498)))), 0x14L, (l_535 &= 0x47L), 0L, ((VECTOR(int8_t, 2))(0x2FL, 2L)), 1L)).odd))).z));
                --l_554;
            }
            l_550[2] = p_101;
            return p_1021->g_562;
        }
        else
        { /* block id: 160 */
            uint32_t l_563 = 0x5393E32AL;
            VECTOR(uint8_t, 4) l_566 = (VECTOR(uint8_t, 4))(0xF9L, (VECTOR(uint8_t, 2))(0xF9L, 0xBAL), 0xBAL);
            VECTOR(int8_t, 2) l_567 = (VECTOR(int8_t, 2))(0L, 0x31L);
            VECTOR(int8_t, 4) l_568 = (VECTOR(int8_t, 4))((-3L), (VECTOR(int8_t, 2))((-3L), 0L), 0L);
            VECTOR(int8_t, 2) l_569 = (VECTOR(int8_t, 2))(0x55L, 0x78L);
            VECTOR(uint32_t, 4) l_582 = (VECTOR(uint32_t, 4))(0x2C07705DL, (VECTOR(uint32_t, 2))(0x2C07705DL, 0x1FB8B826L), 0x1FB8B826L);
            int32_t *l_585 = &l_498;
            int32_t *l_601 = &l_549;
            int32_t **l_613 = &l_456[0][1][0];
            uint32_t l_633 = 0UL;
            int32_t l_658 = 0L;
            int32_t l_659 = 1L;
            int32_t l_660 = 0L;
            int32_t l_661 = 0x0FEB580CL;
            int32_t l_662 = 1L;
            int32_t l_663 = 1L;
            int32_t l_664 = 0L;
            int32_t *l_670 = &l_663;
            int i;
            l_563++;
            if (((((((((*l_485) ^= (p_101 == p_101)) != ((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 8))(l_566.zyxxwwyz)).lo)), 1UL, ((VECTOR(uint8_t, 2))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(abs_diff(((VECTOR(int8_t, 4))(l_567.xyyx)).lo, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(l_568.yw)), 0x32L, 0x43L)).odd))).yyxyyyyxyxyxyyyy)))).sb1)), 248UL)).s3) && ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(0x3DL, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_569.xyyxyxyxyxxxxxxy)).lo)), 6L, (safe_mod_func_int64_t_s_s((((*l_526) = (*p_1021->g_518)) != (p_101 , &p_1021->g_55)), p_101)), ((*l_557) , (l_566.z != p_101)), p_101, (-3L), 0L, 1L)).even)).s76)).xyyyyxyxyyyxyyyy)).s9) , p_1021->g_479.x) >= FAKE_DIVERGE(p_1021->global_1_offset, get_global_id(1), 10)) || p_101) && p_101))
            { /* block id: 164 */
                VECTOR(int32_t, 4) l_589 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x4E91FE5BL), 0x4E91FE5BL);
                int32_t l_592 = 6L;
                int32_t **l_611 = &l_454;
                int32_t *l_616 = &l_478;
                int i;
                for (l_453 = (-6); (l_453 == 1); l_453++)
                { /* block id: 167 */
                    VECTOR(uint32_t, 16) l_583 = (VECTOR(uint32_t, 16))(0x86A41972L, (VECTOR(uint32_t, 4))(0x86A41972L, (VECTOR(uint32_t, 2))(0x86A41972L, 0x83157F95L), 0x83157F95L), 0x83157F95L, 0x86A41972L, 0x83157F95L, (VECTOR(uint32_t, 2))(0x86A41972L, 0x83157F95L), (VECTOR(uint32_t, 2))(0x86A41972L, 0x83157F95L), 0x86A41972L, 0x83157F95L, 0x86A41972L, 0x83157F95L);
                    int64_t *l_597 = &l_507;
                    int32_t *l_599 = &l_453;
                    int32_t *l_600 = &l_488;
                    int32_t *l_602[9] = {&l_457,&l_457,&l_457,&l_457,&l_457,&l_457,&l_457,&l_457,&l_457};
                    int32_t ***l_612[4][6][10] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    uint32_t *l_619 = (void*)0;
                    uint32_t *l_620 = (void*)0;
                    uint32_t *l_621 = (void*)0;
                    uint32_t *l_624 = (void*)0;
                    uint32_t *l_625[9][9][3] = {{{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0}},{{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0}},{{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0}},{{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0}},{{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0}},{{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0}},{{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0}},{{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0}},{{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0},{&l_563,&l_563,(void*)0}}};
                    uint32_t *l_630 = (void*)0;
                    uint32_t *l_631 = &p_1021->g_632[7];
                    int16_t *l_636 = (void*)0;
                    int16_t *l_637 = (void*)0;
                    int16_t *l_638 = (void*)0;
                    int16_t *l_639 = (void*)0;
                    int16_t *l_640 = (void*)0;
                    int16_t *l_641[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int8_t *l_649 = (void*)0;
                    int8_t *l_650 = (void*)0;
                    int8_t *l_651 = (void*)0;
                    int8_t *l_652 = (void*)0;
                    int8_t *l_653 = (void*)0;
                    int8_t *l_654 = (void*)0;
                    int8_t *l_655[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_655[i] = (void*)0;
                    (*l_585) |= ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(p_101, (safe_lshift_func_int8_t_s_s(((((*l_485)++) != ((void*)0 == &p_1021->g_204)) || ((VECTOR(uint64_t, 8))(((VECTOR(uint64_t, 4))(add_sat(((VECTOR(uint64_t, 4))(upsample(((VECTOR(uint32_t, 4))(mad_hi(((VECTOR(uint32_t, 16))(l_582.zzwwzywxzzzwzywy)).s1dcd, ((VECTOR(uint32_t, 4))(l_583.s84a9)), ((VECTOR(uint32_t, 16))(p_1021->g_584.ywxxxzwywxwwwyxz)).s3bba))), ((VECTOR(uint32_t, 16))(0xB208B6A7L, 6UL, 0UL, (l_585 != ((safe_div_func_int64_t_s_s(((VECTOR(int64_t, 16))(l_588.s4426611421721137)).s6, ((((VECTOR(int32_t, 8))(((VECTOR(int32_t, 4))(l_589.wzwy)), ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 16))(((VECTOR(int16_t, 16))((((safe_lshift_func_int16_t_s_s(((l_592 = p_101) && (safe_lshift_func_uint16_t_u_u(0UL, 8))), 9)) , 65527UL) <= (p_1021->g_192 , l_589.y)), p_101, p_1021->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1021->tid, 7))], 0x0657L, p_1021->g_357.w, 0x4319L, ((VECTOR(int16_t, 2))(0x067AL)), p_101, 0x2D7CL, 0x2ADAL, ((VECTOR(int16_t, 4))(1L)), (-3L))))).s2318, ((VECTOR(uint16_t, 4))(0UL))))))).s6 , l_583.se) , p_101))) , l_585)), p_101, 0x77C9DAE0L, 0xD0DB6ACBL, p_1021->g_206.x, ((VECTOR(uint32_t, 2))(0x95614AC2L)), 5UL, 4294967288UL, 0xC5C9034AL, 0UL, 0xB2326E9BL, 0xA3F104B9L)).sceb8))), ((VECTOR(uint64_t, 4))(1UL))))), p_101, 1UL, 9UL, 0xB65CF698FCBB6742L)).s7), 6)))), 2)) && 254UL);
                    if ((safe_add_func_uint64_t_u_u((p_1021->g_131.s7 ^= p_101), ((*l_597) &= ((+p_101) >= GROUP_DIVERGE(1, 1))))))
                    { /* block id: 173 */
                        int32_t *l_598 = &l_457;
                        int32_t *l_603 = (void*)0;
                        return l_603;
                    }
                    else
                    { /* block id: 175 */
                        int32_t **l_604[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_604[i] = &l_559[5][0];
                        l_559[5][1] = &l_592;
                        l_456[0][3][2] = (void*)0;
                    }
                    (*l_601) = ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 8))((-1L), 0x3E27ECB6L, (!((safe_mul_func_int8_t_s_s((-1L), (*l_557))) , 0x7833F779L)), 0x5E283898L, 0x2C8A26EDL, (safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s((((l_613 = l_611) == &l_557) > ((*p_1021->g_204) >= ((((*l_631) = (safe_sub_func_int32_t_s_s((((*l_611) = l_616) != &l_547), (safe_add_func_uint32_t_u_u((p_1021->g_67.s0 = (p_1021->g_382.y--)), (((safe_mod_func_int32_t_s_s((((safe_mod_func_int32_t_s_s(0x1D3FF89DL, (*l_601))) & (*l_600)) ^ (*l_616)), 0x6B00139BL)) , (*l_560)) ^ p_101)))))) , 1L) > 0x6130842529CF2359L))), (*l_601))), l_633)), 0x641586E6L, 0x03A61C61L)))).s4;
                }
            }
            else
            { /* block id: 192 */
                (*l_613) = &l_453;
            }
            l_665--;
            return p_1021->g_671;
        }
    }
    if (((VECTOR(int32_t, 4))(((p_1021->g_269.y , ((*l_668) ^= p_101)) != p_1021->g_205), 0x7121BA45L, (-9L), 3L)).x)
    { /* block id: 200 */
        int64_t l_689[10][3] = {{(-1L),0x5A3771CB90571A4AL,(-1L)},{(-1L),0x5A3771CB90571A4AL,(-1L)},{(-1L),0x5A3771CB90571A4AL,(-1L)},{(-1L),0x5A3771CB90571A4AL,(-1L)},{(-1L),0x5A3771CB90571A4AL,(-1L)},{(-1L),0x5A3771CB90571A4AL,(-1L)},{(-1L),0x5A3771CB90571A4AL,(-1L)},{(-1L),0x5A3771CB90571A4AL,(-1L)},{(-1L),0x5A3771CB90571A4AL,(-1L)},{(-1L),0x5A3771CB90571A4AL,(-1L)}};
        int i, j;
        for (p_101 = 28; (p_101 >= 34); p_101 = safe_add_func_int16_t_s_s(p_101, 9))
        { /* block id: 203 */
            int8_t l_678 = 0x0DL;
            int8_t l_681 = 0x35L;
            int32_t *l_687 = (void*)0;
            int32_t **l_688 = &l_455;
            if (p_101)
                break;
            (*l_560) = (safe_mul_func_uint16_t_u_u((safe_div_func_int16_t_s_s((l_678 , ((VECTOR(int16_t, 4))(0x324AL, (-6L), 0x1397L, 1L)).w), (((safe_mul_func_uint16_t_u_u((l_681 >= ((safe_mod_func_uint32_t_u_u(((!(safe_add_func_int64_t_s_s((*l_560), l_681))) & (~((p_101 >= ((p_1021->g_686[2][0] && ((-1L) ^ (l_678 <= ((((*l_688) = l_687) == (void*)0) & 0x8CA5E51B94CDBB33L)))) || (*l_560))) , 5L))), p_101)) & p_1021->g_78.s0)), l_689[5][1])) | (-1L)) , 0x9688L))), 0x7248L));
        }
    }
    else
    { /* block id: 208 */
        uint8_t **l_694 = &l_485;
        int32_t l_697 = 0x54BB576FL;
        uint16_t *l_698[1];
        VECTOR(uint64_t, 2) l_700 = (VECTOR(uint64_t, 2))(0UL, 0x647654B0AFA796C7L);
        uint8_t *l_701 = &p_1021->g_152;
        int16_t *l_703[2];
        int16_t **l_702 = &l_703[0];
        int8_t **l_704 = &p_1021->g_422;
        uint32_t l_743 = 1UL;
        int i;
        for (i = 0; i < 1; i++)
            l_698[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_703[i] = (void*)0;
        (*l_668) = (safe_lshift_func_uint16_t_u_u((p_1021->g_706 = (((safe_add_func_int16_t_s_s((((((*l_694) = &p_1021->g_152) == (((((*l_702) = ((p_1021->g_348.y >= ((~(safe_mul_func_uint16_t_u_u(0xB59EL, (p_1021->g_699 &= (p_1021->g_276.s1 = l_697))))) ^ ((*l_701) = (((VECTOR(uint64_t, 4))(((VECTOR(uint64_t, 2))(l_700.yy)).yxyx)).z <= (p_101 , FAKE_DIVERGE(p_1021->group_1_offset, get_group_id(1), 10)))))) , l_698[0])) != ((l_704 == l_704) , l_705[0])) ^ p_1021->g_377.y) , (void*)0)) | p_101) | p_101), l_700.y)) , p_1021->g_382.y) , p_101)), p_101));
        for (p_101 = 0; (p_101 != 4); p_101++)
        { /* block id: 218 */
            uint64_t l_709 = 2UL;
            VECTOR(int64_t, 16) l_720 = (VECTOR(int64_t, 16))(0x1E09BA7910031CE4L, (VECTOR(int64_t, 4))(0x1E09BA7910031CE4L, (VECTOR(int64_t, 2))(0x1E09BA7910031CE4L, 0x4BCD851A47809A75L), 0x4BCD851A47809A75L), 0x4BCD851A47809A75L, 0x1E09BA7910031CE4L, 0x4BCD851A47809A75L, (VECTOR(int64_t, 2))(0x1E09BA7910031CE4L, 0x4BCD851A47809A75L), (VECTOR(int64_t, 2))(0x1E09BA7910031CE4L, 0x4BCD851A47809A75L), 0x1E09BA7910031CE4L, 0x4BCD851A47809A75L, 0x1E09BA7910031CE4L, 0x4BCD851A47809A75L);
            uint32_t *l_728 = (void*)0;
            uint32_t *l_729[5][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int i, j;
            l_709++;
            (*l_668) = ((safe_mod_func_uint8_t_u_u((p_1021->g_714 != (void*)0), ((p_1021->g_351.s1 = (&p_1021->g_528 == l_718[0])) , (~(~(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(l_719.xw)), 0x3EB39163B5F7D3C2L, ((VECTOR(int64_t, 2))(l_720.s01)), (-1L), ((VECTOR(int64_t, 4))(p_1021->g_721.s7364)), 1L, (p_1021->g_276.s7 ^ ((255UL == (l_700.x < (safe_sub_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((((p_1021->g_382.x = (safe_add_func_int32_t_s_s(p_101, l_720.s6))) ^ p_101) > (*l_558)), 0x44FDB2557077FF7CL)), l_709)))) , 1L)), 0L, ((VECTOR(int64_t, 2))(0x4BD1B9C4679AE5A4L)), 0x598D91343CF8D004L)).s8 > l_720.s6)))))) < 2UL);
        }
        (*l_558) ^= (((((((FAKE_DIVERGE(p_1021->local_2_offset, get_local_id(2), 10) | 0xF4L) < (p_101 && (((((l_700.x && (((safe_mod_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((((*l_485) |= (*l_560)) && (((((*l_694) = (*l_694)) == l_738) <= ((safe_lshift_func_int8_t_s_s((((VECTOR(uint32_t, 2))(0x3C04A46DL, 0xA9E4C4D7L)).odd , (safe_mul_func_int8_t_s_s((*p_1021->g_204), ((void*)0 != &p_1021->g_204)))), 6)) > p_101)) || p_101)), 6)) == l_700.y), (-1L))), 1UL)) == 8L), p_101)) <= GROUP_DIVERGE(1, 1)) < p_101)) & p_101) < p_1021->g_347.y) , &p_1021->g_528) != &p_1021->g_528))) , 0L) , 0L) , p_101) ^ l_743) != p_101);
        for (p_101 = 0; (p_101 <= 2); p_101++)
        { /* block id: 229 */
            return l_746;
        }
    }
    (*l_560) = (*p_1021->g_716);
    l_769 ^= (((safe_lshift_func_int8_t_s_s((((p_101 >= ((0xEBL != ((*l_560) = ((safe_lshift_func_uint16_t_u_u(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),VECTOR(uint16_t, 2),((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 2))(p_1021->g_751.xx)).xxyxxxyx)).s2, 65528UL, 8UL, 65535UL)).hi, ((VECTOR(uint16_t, 2))(p_1021->g_752.s53)), ((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 16))(l_753.s7326572617202347)))).sbe))))).yxyyxxxyxyyyyyxx)).sc, ((safe_sub_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(l_758, ((p_1021->g_67.s1 = ((safe_mod_func_uint64_t_u_u(((*l_560) >= ((!(((((safe_div_func_uint32_t_u_u(p_101, 0x4C677514L)) && (safe_mul_func_int16_t_s_s(((((((*l_765) = l_738) != (p_1021->g_766 = &p_1021->g_152)) | 9L) > 255UL) , (*l_558)), l_767[0][0]))) & (-1L)) , 0xF1CBF6A65F6A19A2L) > 0x24B20D402CA8518EL)) >= (*l_560))), p_101)) , 0x3D92A920L)) | p_1021->g_206.y))) == p_101), (*l_558))) != 0x010CL))) > GROUP_DIVERGE(1, 1)))) > p_1021->g_469.w)) , (*l_558)) > 0x0520L), 7)) , p_101) <= p_101);
    return l_770;
}


/* ------------------------------------------ */
/* 
 * reads : p_1021->g_comm_values p_1021->g_131 p_1021->l_comm_values p_1021->g_67 p_1021->g_31 p_1021->g_176 p_1021->g_182 p_1021->g_187 p_1021->g_204 p_1021->g_206 p_1021->g_269 p_1021->g_356 p_1021->g_192 p_1021->g_397 p_1021->g_399 p_1021->g_402 p_1021->g_406 p_1021->g_49 p_1021->g_55
 * writes: p_1021->g_152 p_1021->g_192 p_1021->g_176 p_1021->g_131 p_1021->g_377 p_1021->g_382 p_1021->g_421
 */
int32_t ** func_105(int32_t  p_106, uint8_t  p_107, uint64_t ** p_108, int64_t  p_109, struct S0 * p_1021)
{ /* block id: 25 */
    int32_t *l_112 = (void*)0;
    int32_t **l_113 = &l_112;
    int64_t l_153[1];
    int32_t l_155 = (-5L);
    VECTOR(int8_t, 16) l_165 = (VECTOR(int8_t, 16))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, (-4L)), (-4L)), (-4L), 1L, (-4L), (VECTOR(int8_t, 2))(1L, (-4L)), (VECTOR(int8_t, 2))(1L, (-4L)), 1L, (-4L), 1L, (-4L));
    VECTOR(int8_t, 8) l_166 = (VECTOR(int8_t, 8))(0L, (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 9L), 9L), 9L, 0L, 9L);
    VECTOR(int8_t, 2) l_167 = (VECTOR(int8_t, 2))(0x5BL, 0x6DL);
    VECTOR(int64_t, 2) l_202 = (VECTOR(int64_t, 2))(0x412E71CDC07732DFL, 1L);
    int8_t *l_203 = (void*)0;
    int32_t l_216 = 0x486D7869L;
    int32_t l_217 = 0x68C950F7L;
    int32_t l_218 = 0x4B93C2A1L;
    int32_t l_219 = 0x3B3921B8L;
    int32_t l_220 = 0x6DC7A96BL;
    int32_t l_221 = 0x5B358915L;
    int32_t l_222 = 0x035A0E91L;
    int32_t l_223 = 0x7F65B8D7L;
    int32_t l_224 = 0x0A0DF517L;
    int32_t l_225[8];
    uint16_t l_226 = 0x06DDL;
    uint64_t l_230 = 0xC7C140659CFA0F71L;
    uint16_t l_239[3][7][3] = {{{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL}},{{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL}},{{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL},{8UL,8UL,0x96CAL}}};
    int64_t ***l_256 = (void*)0;
    int64_t *l_259 = (void*)0;
    VECTOR(int8_t, 8) l_270 = (VECTOR(int8_t, 8))(8L, (VECTOR(int8_t, 4))(8L, (VECTOR(int8_t, 2))(8L, 0x56L), 0x56L), 0x56L, 8L, 0x56L);
    VECTOR(int8_t, 2) l_273 = (VECTOR(int8_t, 2))((-4L), 0x5AL);
    int32_t l_296 = 0x198B0E24L;
    VECTOR(int8_t, 8) l_342 = (VECTOR(int8_t, 8))(1L, (VECTOR(int8_t, 4))(1L, (VECTOR(int8_t, 2))(1L, 0x63L), 0x63L), 0x63L, 1L, 0x63L);
    VECTOR(int8_t, 16) l_346 = (VECTOR(int8_t, 16))(7L, (VECTOR(int8_t, 4))(7L, (VECTOR(int8_t, 2))(7L, 1L), 1L), 1L, 7L, 1L, (VECTOR(int8_t, 2))(7L, 1L), (VECTOR(int8_t, 2))(7L, 1L), 7L, 1L, 7L, 1L);
    VECTOR(int32_t, 4) l_389 = (VECTOR(int32_t, 4))(0L, (VECTOR(int32_t, 2))(0L, 0x2CA6F14AL), 0x2CA6F14AL);
    uint32_t *l_416 = (void*)0;
    uint32_t *l_417 = (void*)0;
    uint32_t *l_418[5][8][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    int8_t **l_420 = &l_203;
    int8_t ***l_419[8] = {&l_420,&l_420,&l_420,&l_420,&l_420,&l_420,&l_420,&l_420};
    VECTOR(uint16_t, 8) l_423 = (VECTOR(uint16_t, 8))(65535UL, (VECTOR(uint16_t, 4))(65535UL, (VECTOR(uint16_t, 2))(65535UL, 0xA37AL), 0xA37AL), 0xA37AL, 65535UL, 0xA37AL);
    VECTOR(int64_t, 8) l_424 = (VECTOR(int64_t, 8))(0x18D1A84AF8E5DCD8L, (VECTOR(int64_t, 4))(0x18D1A84AF8E5DCD8L, (VECTOR(int64_t, 2))(0x18D1A84AF8E5DCD8L, (-10L)), (-10L)), (-10L), 0x18D1A84AF8E5DCD8L, (-10L));
    VECTOR(int64_t, 4) l_425 = (VECTOR(int64_t, 4))(0x4C0FE5593B035364L, (VECTOR(int64_t, 2))(0x4C0FE5593B035364L, 6L), 6L);
    uint64_t l_430 = 0UL;
    int32_t *l_431[4];
    int32_t l_432 = 6L;
    int32_t **l_433 = &p_1021->g_49[3][0];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_153[i] = 1L;
    for (i = 0; i < 8; i++)
        l_225[i] = 0x6B522DBAL;
    for (i = 0; i < 4; i++)
        l_431[i] = &l_225[3];
    (*l_113) = l_112;
    for (p_106 = 17; (p_106 > (-8)); p_106 = safe_sub_func_int16_t_s_s(p_106, 7))
    { /* block id: 29 */
        uint32_t l_126[5];
        uint32_t l_129 = 4294967295UL;
        VECTOR(uint64_t, 2) l_130 = (VECTOR(uint64_t, 2))(18446744073709551615UL, 18446744073709551614UL);
        uint32_t *l_138[3][4][7] = {{{&l_129,&l_129,&l_129,&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129,&l_129,&l_129,&l_129}},{{&l_129,&l_129,&l_129,&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129,&l_129,&l_129,&l_129}},{{&l_129,&l_129,&l_129,&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129,&l_129,&l_129,&l_129},{&l_129,&l_129,&l_129,&l_129,&l_129,&l_129,&l_129}}};
        int32_t l_139 = (-4L);
        int64_t *l_145 = (void*)0;
        int64_t *l_146 = (void*)0;
        int64_t *l_147 = (void*)0;
        int64_t *l_148 = (void*)0;
        int64_t *l_149 = (void*)0;
        int64_t l_150 = 7L;
        uint8_t *l_151[6][4][6] = {{{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0}},{{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0}},{{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0}},{{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0}},{{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0}},{{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0},{&p_1021->g_152,(void*)0,(void*)0,&p_1021->g_152,&p_1021->g_152,(void*)0}}};
        int32_t *l_154 = (void*)0;
        VECTOR(int8_t, 8) l_168 = (VECTOR(int8_t, 8))(0x48L, (VECTOR(int8_t, 4))(0x48L, (VECTOR(int8_t, 2))(0x48L, 0x05L), 0x05L), 0x05L, 0x48L, 0x05L);
        VECTOR(int8_t, 2) l_169 = (VECTOR(int8_t, 2))(0x14L, 0x4FL);
        VECTOR(int8_t, 8) l_170 = (VECTOR(int8_t, 8))(0x51L, (VECTOR(int8_t, 4))(0x51L, (VECTOR(int8_t, 2))(0x51L, 0x30L), 0x30L), 0x30L, 0x51L, 0x30L);
        VECTOR(int32_t, 8) l_181 = (VECTOR(int32_t, 8))((-1L), (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 1L), 1L), 1L, (-1L), 1L);
        int8_t l_198 = 0x6AL;
        VECTOR(int64_t, 4) l_201 = (VECTOR(int64_t, 4))(0x30F185DDB280B6D5L, (VECTOR(int64_t, 2))(0x30F185DDB280B6D5L, 1L), 1L);
        int32_t *l_209 = &l_139;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_126[i] = 0xE963307FL;
        l_155 &= (safe_div_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(GROUP_DIVERGE(2, 1), (safe_mul_func_uint16_t_u_u(l_126[0], 0x5272L)))), ((((safe_mul_func_int16_t_s_s(((l_129 == (p_1021->g_comm_values[p_1021->tid] , ((VECTOR(uint64_t, 8))(hadd(((VECTOR(uint64_t, 16))(((VECTOR(uint64_t, 8))(l_130.xxyyyxyx)).s6700622740657713)).hi, ((VECTOR(uint64_t, 16))(p_1021->g_131.s48030061f076c89b)).hi))).s4)) , ((safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((0x77B5C9E143BA547CL == (FAKE_DIVERGE(p_1021->local_0_offset, get_local_id(0), 10) > ((l_139 = p_109) && (safe_unary_minus_func_int32_t_s(((p_107 = (p_1021->g_152 = (((((p_1021->g_131.sd > (0x6DL && (safe_sub_func_uint32_t_u_u((((l_139 &= l_129) < p_1021->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1021->tid, 7))]) == p_109), l_150)))) || 1UL) | p_106) != 0UL) <= l_129))) <= 1L)))))), p_109)), 5)) , p_1021->g_67.s3)), l_153[0])) < p_106) != p_1021->g_31.z) == (-1L)))) <= 1L), p_106)) & 0x56ACL), p_106));
        for (l_129 = (-6); (l_129 >= 58); l_129++)
        { /* block id: 37 */
            uint8_t l_171 = 0x0EL;
            uint32_t *l_188 = &l_129;
            int8_t *l_189 = (void*)0;
            int8_t *l_190 = (void*)0;
            int8_t *l_191[3];
            int32_t l_193 = 0L;
            int64_t **l_195 = &l_146;
            int64_t ***l_194 = &l_195;
            int i;
            for (i = 0; i < 3; i++)
                l_191[i] = (void*)0;
            l_193 = ((safe_unary_minus_func_uint16_t_u((250UL | (p_1021->g_176.s3 = (((safe_mul_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 16))(l_165.s51f88785a1aa5757)).s88bf)).x && (p_1021->g_192 = ((VECTOR(int8_t, 16))(0x5BL, ((VECTOR(int8_t, 2))(sub_sat(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(l_166.s53)).xyyyyyyyxxyxyyxx)).s78, ((VECTOR(int8_t, 8))(rotate(((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(l_167.xyxyxyyyyyyxxyxx)).scb)), (int8_t)p_1021->g_comm_values[p_1021->tid]))).yyyyxxyy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(l_168.s0627700163064651)))).even))))).s00))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(safe_clamp_func(VECTOR(int8_t, 16),int8_t,((VECTOR(int8_t, 16))(max(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(p_107, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_169.xxxx)).odd)), ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 16))(l_170.s5614260762377056)).hi)).s4, 0x1AL, l_171, 1L, 0x36L, 0x74L, (+p_1021->g_131.se), ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((p_1021->g_67.s2 <= ((((((VECTOR(uint8_t, 16))(clz(((VECTOR(uint8_t, 8))(p_1021->g_176.s33215277)).s6073115462555305))).s7 | (safe_mod_func_int64_t_s_s(((((safe_mod_func_int16_t_s_s(l_171, (0xFDFEL | ((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 2))(((VECTOR(int32_t, 16))(sub_sat(((VECTOR(int32_t, 4))(l_181.s0410)).xxwwxxxzxyyzzzzy, ((VECTOR(int32_t, 4))(((VECTOR(int32_t, 16))(p_1021->g_182.s6522233730460202)).s5e65)).yywzwwyyywxzwwyw))).s5e)).xxyyxxxxyxyyxyyx)).sc < (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((FAKE_DIVERGE(p_1021->group_0_offset, get_group_id(0), 10) && p_107), 0L)), p_107))) < GROUP_DIVERGE(1, 1))))) , &l_150) == p_1021->g_187) , 0x09D75B0EC12C816AL), 0xAD145C0F2A8A3E8CL))) , FAKE_DIVERGE(p_1021->group_1_offset, get_group_id(1), 10)) , l_188) != l_188)), p_1021->g_182.s2)), 1L)) | p_1021->g_182.s3), 1L, 0x0CL, (-1L), ((VECTOR(int8_t, 4))(2L)), 1L)).sc, l_171, ((VECTOR(int8_t, 2))((-6L))), (-8L))).s02)).yyyxxyxyyxyxyyyx, ((VECTOR(int8_t, 16))(1L))))), (int8_t)0L, (int8_t)p_107))).s7d)), (-4L), 0x20L)), 0L, 1L, 0x12L, l_171, 0x71L, 0x1BL, ((VECTOR(int8_t, 2))(0x60L)), 0x7BL)).sc)), p_1021->g_67.s7)) < (-5L)), p_1021->g_31.y)) < p_1021->g_31.y) , (-6L)), 0x7FL)) | 0x148392DC4278F18DL) >= l_171))))) & p_1021->g_182.s4);
            (*l_194) = &p_1021->g_187;
        }
        (*l_209) = (safe_rshift_func_uint8_t_u_s((l_198 != (safe_div_func_uint64_t_u_u(((VECTOR(uint64_t, 4))(abs(((VECTOR(uint64_t, 4))(0UL, ((VECTOR(uint64_t, 2))(abs_diff(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 2))(add_sat(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(((VECTOR(int64_t, 8))(l_201.xywwxzxw)))).s2545634411113011)).s4f, ((VECTOR(int64_t, 16))(l_202.xyxyyxyyxyxxxyxx)).sf9))).xyxyxyyyyyxyxxxx)).sb5, ((VECTOR(int64_t, 2))(hadd(((VECTOR(int64_t, 16))(min(((VECTOR(int64_t, 4))(((VECTOR(int64_t, 4))((((void*)0 != &p_1021->g_152) > (l_203 == p_1021->g_204)), (-1L), 0x74DF9F6BCFA40011L, (-1L))))).zyzyyzwyxxyzyzzx, ((VECTOR(int64_t, 16))(p_1021->g_206.xxxyxxxxyxyxyyxx))))).s00, ((VECTOR(int64_t, 4))(8L, (-4L), (-8L), 0x1C780D751C81A553L)).lo)))))), 6UL))))).y, (FAKE_DIVERGE(p_1021->local_1_offset, get_local_id(1), 10) & ((void*)0 != &p_107))))), 0));
    }
    if ((safe_mul_func_uint16_t_u_u(((void*)0 == &l_112), p_109)))
    { /* block id: 45 */
        int32_t *l_212 = &l_155;
        int32_t *l_213 = &l_155;
        int32_t *l_214 = (void*)0;
        int32_t *l_215[5] = {&l_155,&l_155,&l_155,&l_155,&l_155};
        int64_t l_229 = 0x0F92EB95AF0C2C90L;
        uint32_t l_257[4][7][5] = {{{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L}},{{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L}},{{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L}},{{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L},{4UL,1UL,4294967293UL,0xEC528DCBL,0x4D2C2721L}}};
        int i, j, k;
        --l_226;
        (*l_213) |= 0x2A63157CL;
        l_230++;
        for (l_220 = (-20); (l_220 == 9); l_220 = safe_add_func_int32_t_s_s(l_220, 7))
        { /* block id: 51 */
            int32_t **l_244[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int32_t l_255 = 0x457AC9F6L;
            int32_t l_258 = 0x03EE92EFL;
            int i;
            for (p_109 = 28; (p_109 >= 6); p_109 = safe_sub_func_uint64_t_u_u(p_109, 7))
            { /* block id: 54 */
                int32_t ***l_245 = &l_244[6];
                int64_t *l_254 = &l_153[0];
                int32_t l_260 = 0x61934FB2L;
                l_239[2][3][0] = ((*l_212) |= (safe_div_func_uint8_t_u_u(0UL, p_1021->g_206.x)));
                l_260 ^= (((0x79D02D4AL || (((safe_rshift_func_int16_t_s_u((&l_215[1] == ((*l_245) = l_244[0])), 7)) >= (!((safe_mul_func_uint8_t_u_u((p_1021->g_204 == p_1021->g_204), (((((safe_rshift_func_int16_t_s_s(p_107, 9)) > ((((safe_add_func_uint32_t_u_u(((-2L) ^ (((void*)0 != l_254) & 0x7CAD9423AF846CCDL)), l_255)) , l_256) == (void*)0) != p_1021->g_182.s5)) & 0x5377L) & 1UL) == l_257[2][2][4]))) , p_106))) , l_258)) , &p_109) == l_259);
            }
        }
    }
    else
    { /* block id: 61 */
        int32_t *l_266 = (void*)0;
        uint64_t l_283 = 0x6651E1C9720F91E9L;
        int32_t l_295[6];
        VECTOR(uint16_t, 2) l_317 = (VECTOR(uint16_t, 2))(0x44B0L, 0x6D13L);
        uint64_t *l_328 = &l_230;
        uint64_t **l_327[1];
        int16_t l_335 = 1L;
        VECTOR(int8_t, 2) l_343 = (VECTOR(int8_t, 2))(0x1EL, 0x57L);
        int32_t l_394 = 0x7C77527AL;
        VECTOR(int32_t, 4) l_400 = (VECTOR(int32_t, 4))(0x1D301022L, (VECTOR(int32_t, 2))(0x1D301022L, 0x1B3402DDL), 0x1B3402DDL);
        VECTOR(int32_t, 16) l_401 = (VECTOR(int32_t, 16))(1L, (VECTOR(int32_t, 4))(1L, (VECTOR(int32_t, 2))(1L, 0x6764611EL), 0x6764611EL), 0x6764611EL, 1L, 0x6764611EL, (VECTOR(int32_t, 2))(1L, 0x6764611EL), (VECTOR(int32_t, 2))(1L, 0x6764611EL), 1L, 0x6764611EL, 1L, 0x6764611EL);
        int i, j;
        for (i = 0; i < 6; i++)
            l_295[i] = 0L;
        for (i = 0; i < 1; i++)
            l_327[i] = &l_328;
        for (p_107 = 0; (p_107 <= 50); p_107 = safe_add_func_uint8_t_u_u(p_107, 2))
        { /* block id: 64 */
            VECTOR(int8_t, 8) l_271 = (VECTOR(int8_t, 8))(0x1CL, (VECTOR(int8_t, 4))(0x1CL, (VECTOR(int8_t, 2))(0x1CL, 0x1CL), 0x1CL), 0x1CL, 0x1CL, 0x1CL);
            VECTOR(int8_t, 4) l_272 = (VECTOR(int8_t, 4))(0x70L, (VECTOR(int8_t, 2))(0x70L, (-1L)), (-1L));
            uint16_t *l_277 = (void*)0;
            uint16_t *l_278 = &l_239[1][3][0];
            uint32_t *l_280 = (void*)0;
            uint32_t *l_281[3];
            int32_t l_282 = 3L;
            int32_t l_291[9] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
            uint64_t *l_307[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            uint64_t **l_306[5][7][5] = {{{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]}},{{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]}},{{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]}},{{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]}},{{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]},{&l_307[6],&l_307[6],&l_307[6],&l_307[5],&l_307[2]}}};
            VECTOR(int8_t, 2) l_345 = (VECTOR(int8_t, 2))(1L, 0x3EL);
            VECTOR(uint8_t, 8) l_358 = (VECTOR(uint8_t, 8))(255UL, (VECTOR(uint8_t, 4))(255UL, (VECTOR(uint8_t, 2))(255UL, 254UL), 254UL), 254UL, 255UL, 254UL);
            VECTOR(uint16_t, 2) l_403 = (VECTOR(uint16_t, 2))(7UL, 0x2296L);
            int8_t *l_409 = (void*)0;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_281[i] = (void*)0;
            for (p_1021->g_152 = (-19); (p_1021->g_152 <= 17); p_1021->g_152 = safe_add_func_int16_t_s_s(p_1021->g_152, 1))
            { /* block id: 67 */
                int32_t *l_265[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_265[i] = (void*)0;
                l_266 = l_265[0];
            }
            if ((safe_div_func_int8_t_s_s(((VECTOR(int8_t, 8))(5L, ((VECTOR(int8_t, 2))(rhadd(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 8))(p_1021->g_269.xxxyxxxx)), 0x14L, (-1L), 0x4BL, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(0x39L, (-1L))).xyxy)), (-4L))).sf8, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 8))(l_270.s33565550)).s07)).yyxyxyxyyyxxyxyy)).sbc))), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 16))(rhadd(((VECTOR(int8_t, 2))(0x43L, 1L)).xxyxxxyyxxxyxyxy, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 2))(0x12L, 1L)), 9L, ((VECTOR(int8_t, 2))(0L, (-8L))), ((VECTOR(int8_t, 2))(safe_clamp_func(VECTOR(int8_t, 2),VECTOR(int8_t, 2),((VECTOR(int8_t, 4))(rotate(((VECTOR(int8_t, 8))(0x10L, (-6L), ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 2))(rotate(((VECTOR(int8_t, 2))(7L, 0x5DL)), ((VECTOR(int8_t, 16))(hadd(((VECTOR(int8_t, 2))(l_271.s27)).xyyxxxxyxxyxyyyy, ((VECTOR(int8_t, 2))(((VECTOR(int8_t, 4))(l_272.xwzy)).even)).xyyyxyyyyxyxyxyx))).s64))).xyyyyyyyyyxyyxyy)).sbc)).yxxx)), 0L, 0x4BL)).hi, ((VECTOR(int8_t, 2))(l_273.yy)).yxyx))).lo, ((VECTOR(int8_t, 2))(max(((VECTOR(int8_t, 4))(min(((VECTOR(int8_t, 16))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 16),((VECTOR(int8_t, 4))(safe_clamp_func(VECTOR(int8_t, 4),int8_t,((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 8))(((p_1021->g_comm_values[p_1021->tid] , ((p_1021->g_152 || (safe_div_func_uint8_t_u_u((((*l_278) = ((VECTOR(uint16_t, 8))(p_1021->g_276.s41104651)).s0) , 0x7BL), l_230))) , (p_109 >= (l_282 = (((p_106 > 0x165DB7B92988B22DL) , ((VECTOR(int32_t, 2))(p_1021->g_279.yz)).even) , (p_1021->g_31.y < 1L)))))) <= 9L), ((VECTOR(int8_t, 4))(0x1AL)), ((VECTOR(int8_t, 2))(0L)), 0x33L)).lo, ((VECTOR(int8_t, 4))(1L))))), (int8_t)(-3L), (int8_t)l_272.z))).xyxxzxxwyxzyzxxx, ((VECTOR(int8_t, 16))(0x07L)), ((VECTOR(int8_t, 16))(0x23L))))).s5a01, ((VECTOR(int8_t, 4))((-10L)))))).hi, (int8_t)l_283))), ((VECTOR(int8_t, 2))(0L))))), (-1L))).s1577501773545702))).s8cf6, ((VECTOR(int8_t, 4))((-9L)))))))), 1L)).s4, 1L)))
            { /* block id: 72 */
                int32_t *l_284 = (void*)0;
                int32_t *l_285 = &l_217;
                int32_t *l_286 = &l_225[0];
                int32_t *l_287 = &l_220;
                int32_t *l_288 = &l_155;
                int32_t *l_289 = &l_225[6];
                int32_t *l_290[4][8][6] = {{{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0}},{{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0}},{{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0}},{{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0},{&l_221,&l_155,&l_224,&l_223,&l_282,(void*)0}}};
                uint32_t l_292 = 4294967295UL;
                uint8_t l_297 = 0x63L;
                uint64_t **l_329 = &l_307[8];
                VECTOR(int8_t, 4) l_344 = (VECTOR(int8_t, 4))(0L, (VECTOR(int8_t, 2))(0L, 0x67L), 0x67L);
                int i, j, k;
                l_292--;
                l_297++;
                for (l_283 = 0; (l_283 == 26); l_283 = safe_add_func_int32_t_s_s(l_283, 9))
                { /* block id: 77 */
                    uint64_t ***l_302 = (void*)0;
                    uint64_t *l_305 = &p_1021->g_55;
                    uint64_t **l_304 = &l_305;
                    uint64_t ***l_303[3][3][1];
                    int32_t l_314 = 4L;
                    int64_t l_326 = (-1L);
                    int8_t *l_330 = (void*)0;
                    int8_t *l_331 = (void*)0;
                    int8_t *l_332 = (void*)0;
                    int8_t *l_333[3];
                    int32_t l_334 = 4L;
                    uint8_t *l_336 = &p_1021->g_152;
                    VECTOR(int8_t, 4) l_350 = (VECTOR(int8_t, 4))(0x72L, (VECTOR(int8_t, 2))(0x72L, 0x04L), 0x04L);
                    uint64_t l_363[8][9] = {{0x13C3EFCFFC4C54A9L,0x3BD23FD2B08F023DL,0x2A2B512E6EF62243L,0x7337421BEB7B710BL,18446744073709551610UL,0xCEF4C9908B0993A4L,18446744073709551615UL,1UL,0x3BD23FD2B08F023DL},{0x13C3EFCFFC4C54A9L,0x3BD23FD2B08F023DL,0x2A2B512E6EF62243L,0x7337421BEB7B710BL,18446744073709551610UL,0xCEF4C9908B0993A4L,18446744073709551615UL,1UL,0x3BD23FD2B08F023DL},{0x13C3EFCFFC4C54A9L,0x3BD23FD2B08F023DL,0x2A2B512E6EF62243L,0x7337421BEB7B710BL,18446744073709551610UL,0xCEF4C9908B0993A4L,18446744073709551615UL,1UL,0x3BD23FD2B08F023DL},{0x13C3EFCFFC4C54A9L,0x3BD23FD2B08F023DL,0x2A2B512E6EF62243L,0x7337421BEB7B710BL,18446744073709551610UL,0xCEF4C9908B0993A4L,18446744073709551615UL,1UL,0x3BD23FD2B08F023DL},{0x13C3EFCFFC4C54A9L,0x3BD23FD2B08F023DL,0x2A2B512E6EF62243L,0x7337421BEB7B710BL,18446744073709551610UL,0xCEF4C9908B0993A4L,18446744073709551615UL,1UL,0x3BD23FD2B08F023DL},{0x13C3EFCFFC4C54A9L,0x3BD23FD2B08F023DL,0x2A2B512E6EF62243L,0x7337421BEB7B710BL,18446744073709551610UL,0xCEF4C9908B0993A4L,18446744073709551615UL,1UL,0x3BD23FD2B08F023DL},{0x13C3EFCFFC4C54A9L,0x3BD23FD2B08F023DL,0x2A2B512E6EF62243L,0x7337421BEB7B710BL,18446744073709551610UL,0xCEF4C9908B0993A4L,18446744073709551615UL,1UL,0x3BD23FD2B08F023DL},{0x13C3EFCFFC4C54A9L,0x3BD23FD2B08F023DL,0x2A2B512E6EF62243L,0x7337421BEB7B710BL,18446744073709551610UL,0xCEF4C9908B0993A4L,18446744073709551615UL,1UL,0x3BD23FD2B08F023DL}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_303[i][j][k] = &l_304;
                        }
                    }
                    for (i = 0; i < 3; i++)
                        l_333[i] = (void*)0;
                    l_306[0][4][1] = (void*)0;
                    (*l_287) = (((*l_336) = (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((l_314 >= ((safe_mul_func_uint8_t_u_u((p_1021->g_182.s3 | ((VECTOR(uint16_t, 16))(l_317.xyxxxxxyxxxxyxyx)).sc), (((safe_lshift_func_uint8_t_u_u((((-1L) > l_314) != (safe_div_func_uint32_t_u_u(4294967290UL, ((((l_282 = (l_334 = ((p_109 , (p_108 = p_108)) != (l_329 = ((safe_add_func_int16_t_s_s(p_106, (((((p_1021->g_131.s6 = (((*l_285) , (*l_288)) != 0x0BL)) & 0L) ^ l_314) > l_326) <= p_1021->g_269.x))) , l_327[0]))))) != 0L) | 1UL) , (*l_286))))), 7)) || p_1021->g_131.s1) == 0x6AF3L))) != 0UL)) <= p_106), p_1021->g_comm_values[p_1021->tid])), l_335)), p_109))) , p_106);
                    (*l_285) = ((safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((VECTOR(int16_t, 16))((safe_unary_minus_func_uint8_t_u((((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(((VECTOR(int8_t, 8))(max(((VECTOR(int8_t, 4))(add_sat(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 2))(mad_sat(((VECTOR(int8_t, 16))(l_342.s2360160170613717)).sa3, ((VECTOR(int8_t, 8))(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(l_343.yyyx)))), (-1L), ((VECTOR(int8_t, 2))(min(((VECTOR(int8_t, 4))(((VECTOR(int8_t, 8))(rhadd(((VECTOR(int8_t, 2))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 2),((VECTOR(int8_t, 8))(l_344.xzyxxxww)).s62, ((VECTOR(int8_t, 16))(l_345.xyyxyyxxyxxxxyxx)).s28, ((VECTOR(int8_t, 8))(l_346.se44e128a)).s72))).xyxyxxxy, ((VECTOR(int8_t, 2))(p_1021->g_347.yy)).xyyxyxyx))).even)).hi, ((VECTOR(int8_t, 2))(p_1021->g_348.yy))))), (-1L))).s23, ((VECTOR(int8_t, 4))(((VECTOR(int8_t, 4))(mad_sat(((VECTOR(int8_t, 8))(p_1021->g_349.yxyyxyyx)).hi, ((VECTOR(int8_t, 8))(safe_mad_hi_func_int8_t_s_s_s(VECTOR(int8_t, 8),((VECTOR(int8_t, 4))(l_350.zxyy)).yzxzxzwx, ((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1021->g_351.s0504451347137446)))).hi, ((VECTOR(int8_t, 4))(0x1DL, (+(p_1021->g_55 & (p_107 && (((p_1021->g_67.s7 == 4L) != (safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u((0xC0F3L | l_282), p_109)), (~(+((VECTOR(uint8_t, 8))(((VECTOR(uint8_t, 2))(255UL, 0x0BL)), 0x49L, 246UL, 252UL, (((VECTOR(int32_t, 16))(upsample(((VECTOR(int16_t, 2))(min(((VECTOR(int16_t, 2))(p_1021->g_356.s24)), ((VECTOR(int16_t, 16))(upsample(((VECTOR(int8_t, 16))(((VECTOR(int8_t, 16))(p_1021->g_357.xyxwyzwzzzxxwyxz)))), ((VECTOR(uint8_t, 4))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 16))(((VECTOR(uint8_t, 2))(l_358.s52)), 0x75L, 0UL, 0x90L, 253UL, (safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((((*l_336) ^= ((*l_285) < p_109)) && p_1021->g_348.y), p_107)), p_1021->g_269.x)), 0xD8L, ((VECTOR(uint8_t, 4))(8UL)), l_363[7][5], 0xD7L, 0x06L, 0x2FL)))).s011f)).ywyxwxwzyxzwwxzy))).sa3))).yyxxyyxyxyyyyyxy, ((VECTOR(uint16_t, 16))(65535UL))))).s1 , l_334), 0xCFL, 1UL)).s2))))) < 0x1DE4403EL)))), 0x18L, 0x09L)).wzyxyxxw))).even, ((VECTOR(int8_t, 4))(0L))))))).even))).xyxx)), ((VECTOR(int8_t, 4))((-1L)))))).zywzywzz, (int8_t)p_107))))).even)))).z != p_109))), p_109, ((VECTOR(int16_t, 4))((-1L))), 0L, 0x281DL, p_1021->g_276.s2, p_1021->g_269.x, (-1L), 0x0E40L, 0x0FADL, (-3L), 0x4FF5L, 0x0516L)).s2, p_1021->g_comm_values[p_1021->tid])) != 2UL), l_363[1][2])) < p_1021->g_356.s0);
                    return &p_1021->g_49[3][0];
                }
                for (p_106 = 23; (p_106 == 27); p_106++)
                { /* block id: 92 */
                    int32_t l_384[4] = {9L,9L,9L,9L};
                    int i;
                    for (l_219 = 0; (l_219 >= 20); l_219 = safe_add_func_uint8_t_u_u(l_219, 2))
                    { /* block id: 95 */
                        uint64_t l_374[2];
                        VECTOR(uint16_t, 16) l_383 = (VECTOR(uint16_t, 16))(1UL, (VECTOR(uint16_t, 4))(1UL, (VECTOR(uint16_t, 2))(1UL, 0xAED6L), 0xAED6L), 0xAED6L, 1UL, 0xAED6L, (VECTOR(uint16_t, 2))(1UL, 0xAED6L), (VECTOR(uint16_t, 2))(1UL, 0xAED6L), 1UL, 0xAED6L, 1UL, 0xAED6L);
                        int16_t *l_385 = &l_335;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_374[i] = 0UL;
                        (*l_288) = ((0x19B6L && (safe_div_func_uint64_t_u_u((((safe_div_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s(p_1021->g_206.x, 1)) | l_374[0]), (safe_sub_func_int8_t_s_s(((p_1021->g_377.x = ((VECTOR(uint64_t, 16))(18446744073709551612UL, 0x8CF5B9688604D18AL, 3UL, ((VECTOR(uint64_t, 2))(p_1021->g_377.wx)), ((VECTOR(uint64_t, 2))(0UL, 0UL)), (safe_div_func_uint32_t_u_u((((((*l_385) = (((safe_mod_func_int8_t_s_s(((((p_1021->l_comm_values[(safe_mod_func_uint32_t_u_u(p_1021->tid, 7))] = (l_374[0] , (((*p_108) = (*p_108)) != (((VECTOR(uint32_t, 8))(p_1021->g_382.yxxyyyxy)).s7 , (*l_329))))) || (p_1021->g_276.s5 && p_1021->g_356.s2)) > (+((VECTOR(uint16_t, 8))(abs(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 4))(l_383.s4050)).wxxwwxyzzxxxyxzw)).hi))).s0)) , 0x25L), 255UL)) & p_109) && l_384[1])) , p_106) != p_1021->g_377.x) | l_272.x), p_109)), 0x01F137BEC9F7D8D2L, ((VECTOR(uint64_t, 2))(18446744073709551615UL)), ((VECTOR(uint64_t, 2))(0x8D71E01D5C4EAB1EL)), 5UL, 0x547BAD13F58BB468L, 0x91B5637BB5E30506L)).s9) && l_374[0]), p_1021->g_192)))) || 0xCE1AAF01L) , GROUP_DIVERGE(1, 1)), l_358.s6))) == p_109);
                        (*l_113) = (void*)0;
                        return &p_1021->g_49[3][0];
                    }
                }
            }
            else
            { /* block id: 105 */
                int32_t *l_386 = &l_291[8];
                VECTOR(int32_t, 4) l_398 = (VECTOR(int32_t, 4))((-1L), (VECTOR(int32_t, 2))((-1L), 0x00AEAC9BL), 0x00AEAC9BL);
                int8_t **l_410 = &l_409;
                int8_t *l_411 = (void*)0;
                int i;
                (*l_113) = l_386;
                if (p_107)
                    continue;
                l_282 = (safe_lshift_func_uint16_t_u_u((((VECTOR(int32_t, 16))(((VECTOR(int32_t, 4))(l_389.yxxx)).ywwwzwxyxywxyxwz)).sd || (safe_lshift_func_uint8_t_u_u((((VECTOR(int16_t, 16))(((VECTOR(int16_t, 4))(((VECTOR(int16_t, 2))(0x3F77L, (-1L))), 0x60A0L, 0L)).zwyxzzyxywwxwwwz)).s3 == ((safe_mod_func_uint32_t_u_u((l_295[2] ^= l_394), (safe_sub_func_uint64_t_u_u((((VECTOR(int32_t, 8))(sub_sat(((VECTOR(int32_t, 16))(mul_hi(((VECTOR(int32_t, 2))(p_1021->g_397.xy)).yxxyxyxxyyxyxxxx, ((VECTOR(int32_t, 8))(l_398.zwwxzwzw)).s0555440765254220))).even, ((VECTOR(int32_t, 16))(safe_clamp_func(VECTOR(int32_t, 16),VECTOR(int32_t, 16),((VECTOR(int32_t, 16))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 16),((VECTOR(int32_t, 4))(((VECTOR(int32_t, 8))(safe_mul24_func_int32_t_s_s(VECTOR(int32_t, 8),((VECTOR(int32_t, 4))(mad_sat(((VECTOR(int32_t, 2))(0x0011AAF8L, (-1L))).yxxy, ((VECTOR(int32_t, 8))(clz(((VECTOR(int32_t, 2))(add_sat(((VECTOR(int32_t, 2))(1L, 0x074DA2EBL)), ((VECTOR(int32_t, 4))(p_1021->g_399.s5661)).even))).xyyyxyyx))).hi, ((VECTOR(int32_t, 8))(l_400.yzxxyzzy)).hi))).yxywxzyx, ((VECTOR(int32_t, 16))(2L, ((VECTOR(int32_t, 2))(rhadd(((VECTOR(int32_t, 4))(min(((VECTOR(int32_t, 2))(l_401.s4c)).yxyx, ((VECTOR(int32_t, 4))(upsample(((VECTOR(int16_t, 8))(((VECTOR(int16_t, 8))(p_1021->g_402.sb3eb47bb)))).lo, ((VECTOR(uint16_t, 8))(l_403.xxxxxxyx)).even)))))).odd, ((VECTOR(int32_t, 8))(((VECTOR(int32_t, 2))(0L, 0x1FD44CB3L)).even, 1L, 7L, ((*l_112) &= 0x66C50B85L), 0x5D3CDA14L, ((VECTOR(int32_t, 2))(0x129D8FA7L, 0x4BCD0DF0L)), 0x765D1B87L)).s25))), ((*l_112) = ((p_1021->g_182.s0 , ((VECTOR(int64_t, 2))(p_1021->g_406.xw)).even) != (p_1021->g_49[2][2] != (void*)0))), (GROUP_DIVERGE(1, 1) != (safe_rshift_func_int8_t_s_u((~((((*l_410) = l_409) != ((p_1021->g_382.y = (*l_386)) , l_411)) > p_107)), (*l_112)))), p_109, (-1L), 0x0BB45D30L, (-3L), l_403.y, 0x7D751CA8L, ((VECTOR(int32_t, 4))(1L)), 2L)).odd))).even)).wxyzxyyyyzxyyxyx, ((VECTOR(int32_t, 16))(1L))))), ((VECTOR(int32_t, 16))(0x4F5E097DL)), ((VECTOR(int32_t, 16))(6L))))).lo))).s5 && p_1021->g_55), p_1021->g_176.s5)))) , (*l_386))), 3))), 8));
            }
        }
        barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
        p_1021->tid = (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[(safe_mod_func_uint32_t_u_u(p_1021->g_67.s5, 10))][(safe_mod_func_uint32_t_u_u(p_1021->tid, 7))]));
    }
    l_432 = (safe_lshift_func_int16_t_s_s((-8L), (4UL & ((safe_add_func_int32_t_s_s(p_107, (p_1021->g_382.x = p_1021->g_356.s5))) >= ((!((VECTOR(uint16_t, 4))(((VECTOR(uint16_t, 2))(safe_clamp_func(VECTOR(uint16_t, 2),uint16_t,((VECTOR(uint16_t, 8))(((VECTOR(uint16_t, 8))(0xA1E9L, ((p_1021->g_421 = &l_203) != &p_1021->g_422), 2UL, ((VECTOR(uint16_t, 2))(((VECTOR(uint16_t, 16))(((VECTOR(uint16_t, 2))(l_423.s07)).xxxxxyyxyyyyxyxx)).s86)), 0x021BL, 65528UL, 0x52B6L)))).s72, (uint16_t)((((VECTOR(int64_t, 16))(safe_mad_hi_func_int64_t_s_s_s(VECTOR(int64_t, 16),((VECTOR(int64_t, 8))(((VECTOR(int64_t, 4))(0x6965FA91E6B59DC3L, ((VECTOR(int64_t, 2))(rhadd(((VECTOR(int64_t, 8))(l_424.s27660324)).s70, ((VECTOR(int64_t, 16))(((VECTOR(int64_t, 8))(rhadd(((VECTOR(int64_t, 16))(((VECTOR(int64_t, 4))(l_425.yxyy)), (safe_sub_func_int8_t_s_s(p_107, (safe_mul_func_uint8_t_u_u((l_203 != (void*)0), p_107)))), p_107, 0x3BB3E524871C7995L, p_106, 9L, 0L, (-2L), ((VECTOR(int64_t, 2))(0L)), 0x120F5B58A31F7E81L, (-1L), 0x0E345194A5632221L)).even, ((VECTOR(int64_t, 8))(0x66651B0485B28F9EL))))), 6L, ((VECTOR(int64_t, 2))(0L)), 0L, l_430, 0x4C71829392E0A511L, (-8L), (-1L))).s95))), (-9L))).z, ((VECTOR(int64_t, 2))(0x6396764F14634736L)), (-1L), p_109, (-1L), 0L, 0x547BA4529255CDB4L)).s3321054075235471, ((VECTOR(int64_t, 16))(0x4EB8FDB3B11B21B4L)), ((VECTOR(int64_t, 16))(0x6FFD799E4C199775L))))).s2 ^ l_218) & p_1021->g_206.y), (uint16_t)p_1021->g_399.s6))).yxyx)).w) && GROUP_DIVERGE(2, 1))))));
    return l_433;
}


__kernel void entry(__global ulong *result, __global volatile uint *g_atomic_input, __global volatile uint *g_special_values, __global volatile int *g_atomic_reduction, __global int *sequence_input, __global long *g_comm_values) {
    int i, j, k;
    __local volatile uint32_t l_atomic_reduction[1];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 1; i++)
            l_atomic_reduction[i] = 0;
    __local int64_t l_comm_values[7];
    if (get_linear_local_id() == 0)
        for (i = 0; i < 7; i++)
            l_comm_values[i] = 1;
    struct S0 c_1022;
    struct S0* p_1021 = &c_1022;
    struct S0 c_1023 = {
        (VECTOR(uint8_t, 2))(0UL, 250UL), // p_1021->g_28
        (VECTOR(int32_t, 4))(0x412D4938L, (VECTOR(int32_t, 2))(0x412D4938L, 0x0A9711F6L), 0x0A9711F6L), // p_1021->g_31
        (void*)0, // p_1021->g_38
        (void*)0, // p_1021->g_40
        (void*)0, // p_1021->g_41
        (void*)0, // p_1021->g_43
        (void*)0, // p_1021->g_44
        {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}}, // p_1021->g_49
        {&p_1021->g_49[3][0],&p_1021->g_49[3][0],&p_1021->g_49[3][0],&p_1021->g_49[3][0],&p_1021->g_49[3][0],&p_1021->g_49[3][0],&p_1021->g_49[3][0],&p_1021->g_49[3][0],&p_1021->g_49[3][0]}, // p_1021->g_48
        &p_1021->g_49[0][2], // p_1021->g_50
        0xFFD6F7C90A92FA66L, // p_1021->g_55
        (VECTOR(uint32_t, 8))(0x13960B7EL, (VECTOR(uint32_t, 4))(0x13960B7EL, (VECTOR(uint32_t, 2))(0x13960B7EL, 0xB60F77C6L), 0xB60F77C6L), 0xB60F77C6L, 0x13960B7EL, 0xB60F77C6L), // p_1021->g_67
        (VECTOR(int16_t, 8))(0L, (VECTOR(int16_t, 4))(0L, (VECTOR(int16_t, 2))(0L, 0x1ABEL), 0x1ABEL), 0x1ABEL, 0L, 0x1ABEL), // p_1021->g_78
        (VECTOR(uint8_t, 8))(254UL, (VECTOR(uint8_t, 4))(254UL, (VECTOR(uint8_t, 2))(254UL, 3UL), 3UL), 3UL, 254UL, 3UL), // p_1021->g_81
        (VECTOR(uint64_t, 2))(0xAD76B04D158891A7L, 18446744073709551614UL), // p_1021->g_83
        (VECTOR(uint64_t, 16))(0x3081A09870BFBD2DL, (VECTOR(uint64_t, 4))(0x3081A09870BFBD2DL, (VECTOR(uint64_t, 2))(0x3081A09870BFBD2DL, 0x9B32BA95D1FD8223L), 0x9B32BA95D1FD8223L), 0x9B32BA95D1FD8223L, 0x3081A09870BFBD2DL, 0x9B32BA95D1FD8223L, (VECTOR(uint64_t, 2))(0x3081A09870BFBD2DL, 0x9B32BA95D1FD8223L), (VECTOR(uint64_t, 2))(0x3081A09870BFBD2DL, 0x9B32BA95D1FD8223L), 0x3081A09870BFBD2DL, 0x9B32BA95D1FD8223L, 0x3081A09870BFBD2DL, 0x9B32BA95D1FD8223L), // p_1021->g_131
        2UL, // p_1021->g_152
        (VECTOR(uint8_t, 8))(0x38L, (VECTOR(uint8_t, 4))(0x38L, (VECTOR(uint8_t, 2))(0x38L, 1UL), 1UL), 1UL, 0x38L, 1UL), // p_1021->g_176
        (VECTOR(int32_t, 8))(3L, (VECTOR(int32_t, 4))(3L, (VECTOR(int32_t, 2))(3L, 0x31A346ECL), 0x31A346ECL), 0x31A346ECL, 3L, 0x31A346ECL), // p_1021->g_182
        (void*)0, // p_1021->g_187
        0xF228F18FL, // p_1021->g_192
        0x4FL, // p_1021->g_205
        &p_1021->g_205, // p_1021->g_204
        (VECTOR(int64_t, 2))(0x1CB6A71BACA6DEC1L, 0x008407F62AD76D7FL), // p_1021->g_206
        (VECTOR(int8_t, 2))(0x00L, 0x16L), // p_1021->g_269
        (VECTOR(uint16_t, 8))(65531UL, (VECTOR(uint16_t, 4))(65531UL, (VECTOR(uint16_t, 2))(65531UL, 0x4296L), 0x4296L), 0x4296L, 65531UL, 0x4296L), // p_1021->g_276
        (VECTOR(int32_t, 4))((-8L), (VECTOR(int32_t, 2))((-8L), 0L), 0L), // p_1021->g_279
        (VECTOR(int8_t, 2))((-1L), (-9L)), // p_1021->g_347
        (VECTOR(int8_t, 2))(0x26L, 0x73L), // p_1021->g_348
        (VECTOR(int8_t, 2))(0x18L, (-2L)), // p_1021->g_349
        (VECTOR(int8_t, 8))((-7L), (VECTOR(int8_t, 4))((-7L), (VECTOR(int8_t, 2))((-7L), (-3L)), (-3L)), (-3L), (-7L), (-3L)), // p_1021->g_351
        (VECTOR(int16_t, 8))(0x1B2DL, (VECTOR(int16_t, 4))(0x1B2DL, (VECTOR(int16_t, 2))(0x1B2DL, 0x1800L), 0x1800L), 0x1800L, 0x1B2DL, 0x1800L), // p_1021->g_356
        (VECTOR(int8_t, 4))(0x30L, (VECTOR(int8_t, 2))(0x30L, 1L), 1L), // p_1021->g_357
        (VECTOR(uint64_t, 4))(0x466E4FA2331ED849L, (VECTOR(uint64_t, 2))(0x466E4FA2331ED849L, 1UL), 1UL), // p_1021->g_377
        (VECTOR(uint32_t, 2))(4294967295UL, 0xD1AA750BL), // p_1021->g_382
        (VECTOR(int32_t, 2))(0x197A383AL, (-10L)), // p_1021->g_397
        (VECTOR(int32_t, 8))(7L, (VECTOR(int32_t, 4))(7L, (VECTOR(int32_t, 2))(7L, 0x1531B93EL), 0x1531B93EL), 0x1531B93EL, 7L, 0x1531B93EL), // p_1021->g_399
        (VECTOR(int16_t, 16))((-10L), (VECTOR(int16_t, 4))((-10L), (VECTOR(int16_t, 2))((-10L), (-1L)), (-1L)), (-1L), (-10L), (-1L), (VECTOR(int16_t, 2))((-10L), (-1L)), (VECTOR(int16_t, 2))((-10L), (-1L)), (-10L), (-1L), (-10L), (-1L)), // p_1021->g_402
        (VECTOR(int64_t, 4))((-3L), (VECTOR(int64_t, 2))((-3L), 1L), 1L), // p_1021->g_406
        (void*)0, // p_1021->g_422
        &p_1021->g_422, // p_1021->g_421
        (VECTOR(uint64_t, 4))(0xB54AA230833C9F53L, (VECTOR(uint64_t, 2))(0xB54AA230833C9F53L, 18446744073709551615UL), 18446744073709551615UL), // p_1021->g_469
        (VECTOR(uint32_t, 2))(4294967293UL, 4294967294UL), // p_1021->g_479
        (void*)0, // p_1021->g_519
        &p_1021->g_519, // p_1021->g_518
        (void*)0, // p_1021->g_525
        0x5ADA764403B18E20L, // p_1021->g_528
        (void*)0, // p_1021->g_562
        (VECTOR(uint32_t, 4))(0xAC3ADD00L, (VECTOR(uint32_t, 2))(0xAC3ADD00L, 4294967295UL), 4294967295UL), // p_1021->g_584
        {0x144A19AEL,0x144A19AEL,0x144A19AEL,0x144A19AEL,0x144A19AEL,0x144A19AEL,0x144A19AEL,0x144A19AEL}, // p_1021->g_632
        (void*)0, // p_1021->g_671
        {{4L,4L},{4L,4L},{4L,4L}}, // p_1021->g_686
        0x997CL, // p_1021->g_699
        0x716117EDA9951DF9L, // p_1021->g_706
        0x0D9F36D2L, // p_1021->g_717
        &p_1021->g_717, // p_1021->g_716
        &p_1021->g_716, // p_1021->g_715
        &p_1021->g_715, // p_1021->g_714
        (VECTOR(int64_t, 8))(0x7B5917A6EFF1A04FL, (VECTOR(int64_t, 4))(0x7B5917A6EFF1A04FL, (VECTOR(int64_t, 2))(0x7B5917A6EFF1A04FL, (-1L)), (-1L)), (-1L), 0x7B5917A6EFF1A04FL, (-1L)), // p_1021->g_721
        (VECTOR(uint16_t, 2))(0xEC55L, 0x6E7BL), // p_1021->g_751
        (VECTOR(uint16_t, 8))(0xE8A3L, (VECTOR(uint16_t, 4))(0xE8A3L, (VECTOR(uint16_t, 2))(0xE8A3L, 65535UL), 65535UL), 65535UL, 0xE8A3L, 65535UL), // p_1021->g_752
        &p_1021->g_152, // p_1021->g_766
        (VECTOR(int16_t, 8))(0x629FL, (VECTOR(int16_t, 4))(0x629FL, (VECTOR(int16_t, 2))(0x629FL, 0x21A1L), 0x21A1L), 0x21A1L, 0x629FL, 0x21A1L), // p_1021->g_780
        (VECTOR(int16_t, 4))(0x03B5L, (VECTOR(int16_t, 2))(0x03B5L, 0x2C6AL), 0x2C6AL), // p_1021->g_783
        0x75F1FF12L, // p_1021->g_837
        0UL, // p_1021->g_863
        0x0DE12A7CCC90822BL, // p_1021->g_864
        18446744073709551612UL, // p_1021->g_865
        0x73A733DB3EBA9AB1L, // p_1021->g_866
        1UL, // p_1021->g_867
        {0x8BC4900F6046A0BAL,0x8BC4900F6046A0BAL,0x8BC4900F6046A0BAL,0x8BC4900F6046A0BAL,0x8BC4900F6046A0BAL,0x8BC4900F6046A0BAL}, // p_1021->g_868
        0x0DFEDF05788D459EL, // p_1021->g_869
        18446744073709551615UL, // p_1021->g_870
        0xA06CDE9AEBC023A2L, // p_1021->g_871
        0xD21E9E43B0F46FE0L, // p_1021->g_872
        {{0x3ABD584522AD3586L,18446744073709551607UL,0x3ABD584522AD3586L,0x3ABD584522AD3586L,18446744073709551607UL},{0x3ABD584522AD3586L,18446744073709551607UL,0x3ABD584522AD3586L,0x3ABD584522AD3586L,18446744073709551607UL},{0x3ABD584522AD3586L,18446744073709551607UL,0x3ABD584522AD3586L,0x3ABD584522AD3586L,18446744073709551607UL},{0x3ABD584522AD3586L,18446744073709551607UL,0x3ABD584522AD3586L,0x3ABD584522AD3586L,18446744073709551607UL},{0x3ABD584522AD3586L,18446744073709551607UL,0x3ABD584522AD3586L,0x3ABD584522AD3586L,18446744073709551607UL},{0x3ABD584522AD3586L,18446744073709551607UL,0x3ABD584522AD3586L,0x3ABD584522AD3586L,18446744073709551607UL}}, // p_1021->g_873
        1UL, // p_1021->g_874
        (VECTOR(uint64_t, 8))(0x82A0DBAE73E37715L, (VECTOR(uint64_t, 4))(0x82A0DBAE73E37715L, (VECTOR(uint64_t, 2))(0x82A0DBAE73E37715L, 18446744073709551610UL), 18446744073709551610UL), 18446744073709551610UL, 0x82A0DBAE73E37715L, 18446744073709551610UL), // p_1021->g_875
        0xE7052EE8F9487CC3L, // p_1021->g_876
        0x4A0C2A998302262FL, // p_1021->g_877
        0x1B4342482FAB1B7EL, // p_1021->g_878
        0x10468C108C04FF55L, // p_1021->g_879
        0x523FC5701F93528BL, // p_1021->g_880
        4UL, // p_1021->g_881
        0xA0CA5A6EFE476909L, // p_1021->g_882
        0x1B05235FEE40E43BL, // p_1021->g_883
        18446744073709551615UL, // p_1021->g_884
        {0xBE828E99870CD520L,0xBE828E99870CD520L,0xBE828E99870CD520L,0xBE828E99870CD520L,0xBE828E99870CD520L,0xBE828E99870CD520L,0xBE828E99870CD520L,0xBE828E99870CD520L,0xBE828E99870CD520L,0xBE828E99870CD520L}, // p_1021->g_885
        {{0x0CC5068118A4DE50L,0x0CC5068118A4DE50L},{0x0CC5068118A4DE50L,0x0CC5068118A4DE50L},{0x0CC5068118A4DE50L,0x0CC5068118A4DE50L},{0x0CC5068118A4DE50L,0x0CC5068118A4DE50L},{0x0CC5068118A4DE50L,0x0CC5068118A4DE50L},{0x0CC5068118A4DE50L,0x0CC5068118A4DE50L},{0x0CC5068118A4DE50L,0x0CC5068118A4DE50L},{0x0CC5068118A4DE50L,0x0CC5068118A4DE50L},{0x0CC5068118A4DE50L,0x0CC5068118A4DE50L}}, // p_1021->g_886
        18446744073709551612UL, // p_1021->g_887
        18446744073709551607UL, // p_1021->g_888
        0xF90FC3245E5A12DFL, // p_1021->g_889
        0x82E9109C259A924AL, // p_1021->g_890
        {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}, // p_1021->g_891
        3UL, // p_1021->g_892
        0x76BE2C316E3D6902L, // p_1021->g_893
        0x4DF2A9E65269E4B1L, // p_1021->g_894
        {{{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882}},{{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882}},{{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882}},{{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882}},{{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882}},{{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882},{&p_1021->g_869,&p_1021->g_894,&p_1021->g_887,&p_1021->g_882}}}, // p_1021->g_862
        &p_1021->g_862[0][7][1], // p_1021->g_861
        (VECTOR(int64_t, 4))(0x1DF0BC91EEE79A2EL, (VECTOR(int64_t, 2))(0x1DF0BC91EEE79A2EL, (-10L)), (-10L)), // p_1021->g_981
        &p_1021->g_187, // p_1021->g_985
        {{{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0}},{{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0}},{{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0}},{{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0}},{{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0}},{{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0}},{{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0}},{{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0},{&p_1021->g_985,(void*)0}}}, // p_1021->g_984
        (void*)0, // p_1021->g_997
        {{&p_1021->g_997},{&p_1021->g_997},{&p_1021->g_997},{&p_1021->g_997},{&p_1021->g_997},{&p_1021->g_997},{&p_1021->g_997},{&p_1021->g_997}}, // p_1021->g_996
        (VECTOR(int8_t, 8))((-10L), (VECTOR(int8_t, 4))((-10L), (VECTOR(int8_t, 2))((-10L), 0x56L), 0x56L), 0x56L, (-10L), 0x56L), // p_1021->g_1008
        0, // p_1021->v_collective
        sequence_input[get_global_id(0)], // p_1021->global_0_offset
        sequence_input[get_global_id(1)], // p_1021->global_1_offset
        sequence_input[get_global_id(2)], // p_1021->global_2_offset
        sequence_input[get_local_id(0)], // p_1021->local_0_offset
        sequence_input[get_local_id(1)], // p_1021->local_1_offset
        sequence_input[get_local_id(2)], // p_1021->local_2_offset
        sequence_input[get_group_id(0)], // p_1021->group_0_offset
        sequence_input[get_group_id(1)], // p_1021->group_1_offset
        sequence_input[get_group_id(2)], // p_1021->group_2_offset
        (safe_add_func_uint32_t_u_u((safe_mul_func_uint32_t_u_u(get_linear_group_id(), 7)), permutations[0][get_linear_local_id()])), // p_1021->tid
        l_atomic_reduction, // l_atomic_reduction
        g_atomic_reduction, // g_atomic_reduction
        l_comm_values, // l_comm_values
        g_comm_values, // g_comm_values
    };
    c_1022 = c_1023;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1021);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1021->g_28.x, "p_1021->g_28.x", print_hash_value);
    transparent_crc(p_1021->g_28.y, "p_1021->g_28.y", print_hash_value);
    transparent_crc(p_1021->g_31.x, "p_1021->g_31.x", print_hash_value);
    transparent_crc(p_1021->g_31.y, "p_1021->g_31.y", print_hash_value);
    transparent_crc(p_1021->g_31.z, "p_1021->g_31.z", print_hash_value);
    transparent_crc(p_1021->g_31.w, "p_1021->g_31.w", print_hash_value);
    transparent_crc(p_1021->g_55, "p_1021->g_55", print_hash_value);
    transparent_crc(p_1021->g_67.s0, "p_1021->g_67.s0", print_hash_value);
    transparent_crc(p_1021->g_67.s1, "p_1021->g_67.s1", print_hash_value);
    transparent_crc(p_1021->g_67.s2, "p_1021->g_67.s2", print_hash_value);
    transparent_crc(p_1021->g_67.s3, "p_1021->g_67.s3", print_hash_value);
    transparent_crc(p_1021->g_67.s4, "p_1021->g_67.s4", print_hash_value);
    transparent_crc(p_1021->g_67.s5, "p_1021->g_67.s5", print_hash_value);
    transparent_crc(p_1021->g_67.s6, "p_1021->g_67.s6", print_hash_value);
    transparent_crc(p_1021->g_67.s7, "p_1021->g_67.s7", print_hash_value);
    transparent_crc(p_1021->g_78.s0, "p_1021->g_78.s0", print_hash_value);
    transparent_crc(p_1021->g_78.s1, "p_1021->g_78.s1", print_hash_value);
    transparent_crc(p_1021->g_78.s2, "p_1021->g_78.s2", print_hash_value);
    transparent_crc(p_1021->g_78.s3, "p_1021->g_78.s3", print_hash_value);
    transparent_crc(p_1021->g_78.s4, "p_1021->g_78.s4", print_hash_value);
    transparent_crc(p_1021->g_78.s5, "p_1021->g_78.s5", print_hash_value);
    transparent_crc(p_1021->g_78.s6, "p_1021->g_78.s6", print_hash_value);
    transparent_crc(p_1021->g_78.s7, "p_1021->g_78.s7", print_hash_value);
    transparent_crc(p_1021->g_81.s0, "p_1021->g_81.s0", print_hash_value);
    transparent_crc(p_1021->g_81.s1, "p_1021->g_81.s1", print_hash_value);
    transparent_crc(p_1021->g_81.s2, "p_1021->g_81.s2", print_hash_value);
    transparent_crc(p_1021->g_81.s3, "p_1021->g_81.s3", print_hash_value);
    transparent_crc(p_1021->g_81.s4, "p_1021->g_81.s4", print_hash_value);
    transparent_crc(p_1021->g_81.s5, "p_1021->g_81.s5", print_hash_value);
    transparent_crc(p_1021->g_81.s6, "p_1021->g_81.s6", print_hash_value);
    transparent_crc(p_1021->g_81.s7, "p_1021->g_81.s7", print_hash_value);
    transparent_crc(p_1021->g_83.x, "p_1021->g_83.x", print_hash_value);
    transparent_crc(p_1021->g_83.y, "p_1021->g_83.y", print_hash_value);
    transparent_crc(p_1021->g_131.s0, "p_1021->g_131.s0", print_hash_value);
    transparent_crc(p_1021->g_131.s1, "p_1021->g_131.s1", print_hash_value);
    transparent_crc(p_1021->g_131.s2, "p_1021->g_131.s2", print_hash_value);
    transparent_crc(p_1021->g_131.s3, "p_1021->g_131.s3", print_hash_value);
    transparent_crc(p_1021->g_131.s4, "p_1021->g_131.s4", print_hash_value);
    transparent_crc(p_1021->g_131.s5, "p_1021->g_131.s5", print_hash_value);
    transparent_crc(p_1021->g_131.s6, "p_1021->g_131.s6", print_hash_value);
    transparent_crc(p_1021->g_131.s7, "p_1021->g_131.s7", print_hash_value);
    transparent_crc(p_1021->g_131.s8, "p_1021->g_131.s8", print_hash_value);
    transparent_crc(p_1021->g_131.s9, "p_1021->g_131.s9", print_hash_value);
    transparent_crc(p_1021->g_131.sa, "p_1021->g_131.sa", print_hash_value);
    transparent_crc(p_1021->g_131.sb, "p_1021->g_131.sb", print_hash_value);
    transparent_crc(p_1021->g_131.sc, "p_1021->g_131.sc", print_hash_value);
    transparent_crc(p_1021->g_131.sd, "p_1021->g_131.sd", print_hash_value);
    transparent_crc(p_1021->g_131.se, "p_1021->g_131.se", print_hash_value);
    transparent_crc(p_1021->g_131.sf, "p_1021->g_131.sf", print_hash_value);
    transparent_crc(p_1021->g_152, "p_1021->g_152", print_hash_value);
    transparent_crc(p_1021->g_176.s0, "p_1021->g_176.s0", print_hash_value);
    transparent_crc(p_1021->g_176.s1, "p_1021->g_176.s1", print_hash_value);
    transparent_crc(p_1021->g_176.s2, "p_1021->g_176.s2", print_hash_value);
    transparent_crc(p_1021->g_176.s3, "p_1021->g_176.s3", print_hash_value);
    transparent_crc(p_1021->g_176.s4, "p_1021->g_176.s4", print_hash_value);
    transparent_crc(p_1021->g_176.s5, "p_1021->g_176.s5", print_hash_value);
    transparent_crc(p_1021->g_176.s6, "p_1021->g_176.s6", print_hash_value);
    transparent_crc(p_1021->g_176.s7, "p_1021->g_176.s7", print_hash_value);
    transparent_crc(p_1021->g_182.s0, "p_1021->g_182.s0", print_hash_value);
    transparent_crc(p_1021->g_182.s1, "p_1021->g_182.s1", print_hash_value);
    transparent_crc(p_1021->g_182.s2, "p_1021->g_182.s2", print_hash_value);
    transparent_crc(p_1021->g_182.s3, "p_1021->g_182.s3", print_hash_value);
    transparent_crc(p_1021->g_182.s4, "p_1021->g_182.s4", print_hash_value);
    transparent_crc(p_1021->g_182.s5, "p_1021->g_182.s5", print_hash_value);
    transparent_crc(p_1021->g_182.s6, "p_1021->g_182.s6", print_hash_value);
    transparent_crc(p_1021->g_182.s7, "p_1021->g_182.s7", print_hash_value);
    transparent_crc(p_1021->g_192, "p_1021->g_192", print_hash_value);
    transparent_crc(p_1021->g_205, "p_1021->g_205", print_hash_value);
    transparent_crc(p_1021->g_206.x, "p_1021->g_206.x", print_hash_value);
    transparent_crc(p_1021->g_206.y, "p_1021->g_206.y", print_hash_value);
    transparent_crc(p_1021->g_269.x, "p_1021->g_269.x", print_hash_value);
    transparent_crc(p_1021->g_269.y, "p_1021->g_269.y", print_hash_value);
    transparent_crc(p_1021->g_276.s0, "p_1021->g_276.s0", print_hash_value);
    transparent_crc(p_1021->g_276.s1, "p_1021->g_276.s1", print_hash_value);
    transparent_crc(p_1021->g_276.s2, "p_1021->g_276.s2", print_hash_value);
    transparent_crc(p_1021->g_276.s3, "p_1021->g_276.s3", print_hash_value);
    transparent_crc(p_1021->g_276.s4, "p_1021->g_276.s4", print_hash_value);
    transparent_crc(p_1021->g_276.s5, "p_1021->g_276.s5", print_hash_value);
    transparent_crc(p_1021->g_276.s6, "p_1021->g_276.s6", print_hash_value);
    transparent_crc(p_1021->g_276.s7, "p_1021->g_276.s7", print_hash_value);
    transparent_crc(p_1021->g_279.x, "p_1021->g_279.x", print_hash_value);
    transparent_crc(p_1021->g_279.y, "p_1021->g_279.y", print_hash_value);
    transparent_crc(p_1021->g_279.z, "p_1021->g_279.z", print_hash_value);
    transparent_crc(p_1021->g_279.w, "p_1021->g_279.w", print_hash_value);
    transparent_crc(p_1021->g_347.x, "p_1021->g_347.x", print_hash_value);
    transparent_crc(p_1021->g_347.y, "p_1021->g_347.y", print_hash_value);
    transparent_crc(p_1021->g_348.x, "p_1021->g_348.x", print_hash_value);
    transparent_crc(p_1021->g_348.y, "p_1021->g_348.y", print_hash_value);
    transparent_crc(p_1021->g_349.x, "p_1021->g_349.x", print_hash_value);
    transparent_crc(p_1021->g_349.y, "p_1021->g_349.y", print_hash_value);
    transparent_crc(p_1021->g_351.s0, "p_1021->g_351.s0", print_hash_value);
    transparent_crc(p_1021->g_351.s1, "p_1021->g_351.s1", print_hash_value);
    transparent_crc(p_1021->g_351.s2, "p_1021->g_351.s2", print_hash_value);
    transparent_crc(p_1021->g_351.s3, "p_1021->g_351.s3", print_hash_value);
    transparent_crc(p_1021->g_351.s4, "p_1021->g_351.s4", print_hash_value);
    transparent_crc(p_1021->g_351.s5, "p_1021->g_351.s5", print_hash_value);
    transparent_crc(p_1021->g_351.s6, "p_1021->g_351.s6", print_hash_value);
    transparent_crc(p_1021->g_351.s7, "p_1021->g_351.s7", print_hash_value);
    transparent_crc(p_1021->g_356.s0, "p_1021->g_356.s0", print_hash_value);
    transparent_crc(p_1021->g_356.s1, "p_1021->g_356.s1", print_hash_value);
    transparent_crc(p_1021->g_356.s2, "p_1021->g_356.s2", print_hash_value);
    transparent_crc(p_1021->g_356.s3, "p_1021->g_356.s3", print_hash_value);
    transparent_crc(p_1021->g_356.s4, "p_1021->g_356.s4", print_hash_value);
    transparent_crc(p_1021->g_356.s5, "p_1021->g_356.s5", print_hash_value);
    transparent_crc(p_1021->g_356.s6, "p_1021->g_356.s6", print_hash_value);
    transparent_crc(p_1021->g_356.s7, "p_1021->g_356.s7", print_hash_value);
    transparent_crc(p_1021->g_357.x, "p_1021->g_357.x", print_hash_value);
    transparent_crc(p_1021->g_357.y, "p_1021->g_357.y", print_hash_value);
    transparent_crc(p_1021->g_357.z, "p_1021->g_357.z", print_hash_value);
    transparent_crc(p_1021->g_357.w, "p_1021->g_357.w", print_hash_value);
    transparent_crc(p_1021->g_377.x, "p_1021->g_377.x", print_hash_value);
    transparent_crc(p_1021->g_377.y, "p_1021->g_377.y", print_hash_value);
    transparent_crc(p_1021->g_377.z, "p_1021->g_377.z", print_hash_value);
    transparent_crc(p_1021->g_377.w, "p_1021->g_377.w", print_hash_value);
    transparent_crc(p_1021->g_382.x, "p_1021->g_382.x", print_hash_value);
    transparent_crc(p_1021->g_382.y, "p_1021->g_382.y", print_hash_value);
    transparent_crc(p_1021->g_397.x, "p_1021->g_397.x", print_hash_value);
    transparent_crc(p_1021->g_397.y, "p_1021->g_397.y", print_hash_value);
    transparent_crc(p_1021->g_399.s0, "p_1021->g_399.s0", print_hash_value);
    transparent_crc(p_1021->g_399.s1, "p_1021->g_399.s1", print_hash_value);
    transparent_crc(p_1021->g_399.s2, "p_1021->g_399.s2", print_hash_value);
    transparent_crc(p_1021->g_399.s3, "p_1021->g_399.s3", print_hash_value);
    transparent_crc(p_1021->g_399.s4, "p_1021->g_399.s4", print_hash_value);
    transparent_crc(p_1021->g_399.s5, "p_1021->g_399.s5", print_hash_value);
    transparent_crc(p_1021->g_399.s6, "p_1021->g_399.s6", print_hash_value);
    transparent_crc(p_1021->g_399.s7, "p_1021->g_399.s7", print_hash_value);
    transparent_crc(p_1021->g_402.s0, "p_1021->g_402.s0", print_hash_value);
    transparent_crc(p_1021->g_402.s1, "p_1021->g_402.s1", print_hash_value);
    transparent_crc(p_1021->g_402.s2, "p_1021->g_402.s2", print_hash_value);
    transparent_crc(p_1021->g_402.s3, "p_1021->g_402.s3", print_hash_value);
    transparent_crc(p_1021->g_402.s4, "p_1021->g_402.s4", print_hash_value);
    transparent_crc(p_1021->g_402.s5, "p_1021->g_402.s5", print_hash_value);
    transparent_crc(p_1021->g_402.s6, "p_1021->g_402.s6", print_hash_value);
    transparent_crc(p_1021->g_402.s7, "p_1021->g_402.s7", print_hash_value);
    transparent_crc(p_1021->g_402.s8, "p_1021->g_402.s8", print_hash_value);
    transparent_crc(p_1021->g_402.s9, "p_1021->g_402.s9", print_hash_value);
    transparent_crc(p_1021->g_402.sa, "p_1021->g_402.sa", print_hash_value);
    transparent_crc(p_1021->g_402.sb, "p_1021->g_402.sb", print_hash_value);
    transparent_crc(p_1021->g_402.sc, "p_1021->g_402.sc", print_hash_value);
    transparent_crc(p_1021->g_402.sd, "p_1021->g_402.sd", print_hash_value);
    transparent_crc(p_1021->g_402.se, "p_1021->g_402.se", print_hash_value);
    transparent_crc(p_1021->g_402.sf, "p_1021->g_402.sf", print_hash_value);
    transparent_crc(p_1021->g_406.x, "p_1021->g_406.x", print_hash_value);
    transparent_crc(p_1021->g_406.y, "p_1021->g_406.y", print_hash_value);
    transparent_crc(p_1021->g_406.z, "p_1021->g_406.z", print_hash_value);
    transparent_crc(p_1021->g_406.w, "p_1021->g_406.w", print_hash_value);
    transparent_crc(p_1021->g_469.x, "p_1021->g_469.x", print_hash_value);
    transparent_crc(p_1021->g_469.y, "p_1021->g_469.y", print_hash_value);
    transparent_crc(p_1021->g_469.z, "p_1021->g_469.z", print_hash_value);
    transparent_crc(p_1021->g_469.w, "p_1021->g_469.w", print_hash_value);
    transparent_crc(p_1021->g_479.x, "p_1021->g_479.x", print_hash_value);
    transparent_crc(p_1021->g_479.y, "p_1021->g_479.y", print_hash_value);
    transparent_crc(p_1021->g_528, "p_1021->g_528", print_hash_value);
    transparent_crc(p_1021->g_584.x, "p_1021->g_584.x", print_hash_value);
    transparent_crc(p_1021->g_584.y, "p_1021->g_584.y", print_hash_value);
    transparent_crc(p_1021->g_584.z, "p_1021->g_584.z", print_hash_value);
    transparent_crc(p_1021->g_584.w, "p_1021->g_584.w", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(p_1021->g_632[i], "p_1021->g_632[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1021->g_686[i][j], "p_1021->g_686[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1021->g_699, "p_1021->g_699", print_hash_value);
    transparent_crc(p_1021->g_706, "p_1021->g_706", print_hash_value);
    transparent_crc(p_1021->g_717, "p_1021->g_717", print_hash_value);
    transparent_crc(p_1021->g_721.s0, "p_1021->g_721.s0", print_hash_value);
    transparent_crc(p_1021->g_721.s1, "p_1021->g_721.s1", print_hash_value);
    transparent_crc(p_1021->g_721.s2, "p_1021->g_721.s2", print_hash_value);
    transparent_crc(p_1021->g_721.s3, "p_1021->g_721.s3", print_hash_value);
    transparent_crc(p_1021->g_721.s4, "p_1021->g_721.s4", print_hash_value);
    transparent_crc(p_1021->g_721.s5, "p_1021->g_721.s5", print_hash_value);
    transparent_crc(p_1021->g_721.s6, "p_1021->g_721.s6", print_hash_value);
    transparent_crc(p_1021->g_721.s7, "p_1021->g_721.s7", print_hash_value);
    transparent_crc(p_1021->g_751.x, "p_1021->g_751.x", print_hash_value);
    transparent_crc(p_1021->g_751.y, "p_1021->g_751.y", print_hash_value);
    transparent_crc(p_1021->g_752.s0, "p_1021->g_752.s0", print_hash_value);
    transparent_crc(p_1021->g_752.s1, "p_1021->g_752.s1", print_hash_value);
    transparent_crc(p_1021->g_752.s2, "p_1021->g_752.s2", print_hash_value);
    transparent_crc(p_1021->g_752.s3, "p_1021->g_752.s3", print_hash_value);
    transparent_crc(p_1021->g_752.s4, "p_1021->g_752.s4", print_hash_value);
    transparent_crc(p_1021->g_752.s5, "p_1021->g_752.s5", print_hash_value);
    transparent_crc(p_1021->g_752.s6, "p_1021->g_752.s6", print_hash_value);
    transparent_crc(p_1021->g_752.s7, "p_1021->g_752.s7", print_hash_value);
    transparent_crc(p_1021->g_780.s0, "p_1021->g_780.s0", print_hash_value);
    transparent_crc(p_1021->g_780.s1, "p_1021->g_780.s1", print_hash_value);
    transparent_crc(p_1021->g_780.s2, "p_1021->g_780.s2", print_hash_value);
    transparent_crc(p_1021->g_780.s3, "p_1021->g_780.s3", print_hash_value);
    transparent_crc(p_1021->g_780.s4, "p_1021->g_780.s4", print_hash_value);
    transparent_crc(p_1021->g_780.s5, "p_1021->g_780.s5", print_hash_value);
    transparent_crc(p_1021->g_780.s6, "p_1021->g_780.s6", print_hash_value);
    transparent_crc(p_1021->g_780.s7, "p_1021->g_780.s7", print_hash_value);
    transparent_crc(p_1021->g_783.x, "p_1021->g_783.x", print_hash_value);
    transparent_crc(p_1021->g_783.y, "p_1021->g_783.y", print_hash_value);
    transparent_crc(p_1021->g_783.z, "p_1021->g_783.z", print_hash_value);
    transparent_crc(p_1021->g_783.w, "p_1021->g_783.w", print_hash_value);
    transparent_crc(p_1021->g_837, "p_1021->g_837", print_hash_value);
    transparent_crc(p_1021->g_863, "p_1021->g_863", print_hash_value);
    transparent_crc(p_1021->g_864, "p_1021->g_864", print_hash_value);
    transparent_crc(p_1021->g_865, "p_1021->g_865", print_hash_value);
    transparent_crc(p_1021->g_866, "p_1021->g_866", print_hash_value);
    transparent_crc(p_1021->g_867, "p_1021->g_867", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(p_1021->g_868[i], "p_1021->g_868[i]", print_hash_value);

    }
    transparent_crc(p_1021->g_869, "p_1021->g_869", print_hash_value);
    transparent_crc(p_1021->g_870, "p_1021->g_870", print_hash_value);
    transparent_crc(p_1021->g_871, "p_1021->g_871", print_hash_value);
    transparent_crc(p_1021->g_872, "p_1021->g_872", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(p_1021->g_873[i][j], "p_1021->g_873[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1021->g_874, "p_1021->g_874", print_hash_value);
    transparent_crc(p_1021->g_875.s0, "p_1021->g_875.s0", print_hash_value);
    transparent_crc(p_1021->g_875.s1, "p_1021->g_875.s1", print_hash_value);
    transparent_crc(p_1021->g_875.s2, "p_1021->g_875.s2", print_hash_value);
    transparent_crc(p_1021->g_875.s3, "p_1021->g_875.s3", print_hash_value);
    transparent_crc(p_1021->g_875.s4, "p_1021->g_875.s4", print_hash_value);
    transparent_crc(p_1021->g_875.s5, "p_1021->g_875.s5", print_hash_value);
    transparent_crc(p_1021->g_875.s6, "p_1021->g_875.s6", print_hash_value);
    transparent_crc(p_1021->g_875.s7, "p_1021->g_875.s7", print_hash_value);
    transparent_crc(p_1021->g_876, "p_1021->g_876", print_hash_value);
    transparent_crc(p_1021->g_877, "p_1021->g_877", print_hash_value);
    transparent_crc(p_1021->g_878, "p_1021->g_878", print_hash_value);
    transparent_crc(p_1021->g_879, "p_1021->g_879", print_hash_value);
    transparent_crc(p_1021->g_880, "p_1021->g_880", print_hash_value);
    transparent_crc(p_1021->g_881, "p_1021->g_881", print_hash_value);
    transparent_crc(p_1021->g_882, "p_1021->g_882", print_hash_value);
    transparent_crc(p_1021->g_883, "p_1021->g_883", print_hash_value);
    transparent_crc(p_1021->g_884, "p_1021->g_884", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(p_1021->g_885[i], "p_1021->g_885[i]", print_hash_value);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(p_1021->g_886[i][j], "p_1021->g_886[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1021->g_887, "p_1021->g_887", print_hash_value);
    transparent_crc(p_1021->g_888, "p_1021->g_888", print_hash_value);
    transparent_crc(p_1021->g_889, "p_1021->g_889", print_hash_value);
    transparent_crc(p_1021->g_890, "p_1021->g_890", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1021->g_891[i], "p_1021->g_891[i]", print_hash_value);

    }
    transparent_crc(p_1021->g_892, "p_1021->g_892", print_hash_value);
    transparent_crc(p_1021->g_893, "p_1021->g_893", print_hash_value);
    transparent_crc(p_1021->g_894, "p_1021->g_894", print_hash_value);
    transparent_crc(p_1021->g_981.x, "p_1021->g_981.x", print_hash_value);
    transparent_crc(p_1021->g_981.y, "p_1021->g_981.y", print_hash_value);
    transparent_crc(p_1021->g_981.z, "p_1021->g_981.z", print_hash_value);
    transparent_crc(p_1021->g_981.w, "p_1021->g_981.w", print_hash_value);
    transparent_crc(p_1021->g_1008.s0, "p_1021->g_1008.s0", print_hash_value);
    transparent_crc(p_1021->g_1008.s1, "p_1021->g_1008.s1", print_hash_value);
    transparent_crc(p_1021->g_1008.s2, "p_1021->g_1008.s2", print_hash_value);
    transparent_crc(p_1021->g_1008.s3, "p_1021->g_1008.s3", print_hash_value);
    transparent_crc(p_1021->g_1008.s4, "p_1021->g_1008.s4", print_hash_value);
    transparent_crc(p_1021->g_1008.s5, "p_1021->g_1008.s5", print_hash_value);
    transparent_crc(p_1021->g_1008.s6, "p_1021->g_1008.s6", print_hash_value);
    transparent_crc(p_1021->g_1008.s7, "p_1021->g_1008.s7", print_hash_value);
    transparent_crc(p_1021->v_collective, "p_1021->v_collective", print_hash_value);
    transparent_crc(p_1021->l_comm_values[get_linear_local_id()], "p_1021->l_comm_values[get_linear_local_id()]", print_hash_value);
    transparent_crc(p_1021->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()], "p_1021->g_comm_values[get_linear_group_id() * 7 + get_linear_local_id()]", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
