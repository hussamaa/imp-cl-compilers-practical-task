// -g 61,94,1 -l 1,47,1
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


// Seed: 547646185

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
    uint64_t g_13[9][2][5];
    uint32_t g_24;
    uint64_t g_30[4][9];
    int32_t g_42;
    int32_t g_43;
    int32_t g_65;
    int64_t g_83;
    int32_t *g_103;
    int32_t ** volatile g_102;
    int8_t g_106;
    int32_t g_164[9][7];
    uint32_t g_174;
    uint8_t g_177;
    int8_t g_178;
    uint32_t g_180;
    uint32_t g_182;
    uint32_t g_187;
    uint32_t g_191[5];
    int16_t g_201;
    uint64_t g_261[3];
    uint16_t g_267;
    int32_t ** volatile g_291;
    int32_t *g_334;
    int32_t g_368;
    int8_t g_390;
    int8_t g_392;
    int32_t g_394;
    int32_t ** volatile g_395;
    int32_t ** volatile g_396;
    int32_t ** volatile g_397;
    uint32_t g_439;
    int16_t g_460;
    int32_t * volatile g_525[3];
    int32_t ** volatile g_527;
    int32_t ** volatile g_528;
    int32_t ** volatile g_557;
    int8_t *g_565;
    int8_t **g_564;
    int32_t g_607;
    volatile uint64_t g_644;
    volatile uint64_t * volatile g_643[8][9][3];
    volatile uint64_t * volatile *g_642;
    volatile uint64_t * volatile * volatile *g_641;
    uint64_t ***g_645;
    uint16_t g_655;
    int64_t g_657[10][4][1];
    int32_t **g_682;
    int32_t **g_683;
    int16_t g_712;
    int16_t g_714;
    volatile uint8_t * volatile *g_810;
    int8_t *g_842;
    int32_t g_872;
    int8_t g_873;
    int32_t g_875;
    int64_t g_947;
    volatile uint32_t g_963;
    volatile uint32_t * volatile g_962[6];
    volatile uint32_t * volatile *g_961;
    uint32_t g_990;
    int32_t ** volatile g_1001;
    int32_t ***g_1008;
    int32_t g_1056;
    uint32_t g_1057;
    volatile int64_t ***g_1068;
    uint8_t g_1140;
    uint8_t *g_1139;
    int32_t **g_1199;
    volatile uint32_t g_1205;
};


/* --- FORWARD DECLARATIONS --- */
uint32_t  func_1(struct S0 * p_1214);
int8_t  func_4(int32_t  p_5, uint32_t  p_6, uint16_t  p_7, struct S0 * p_1214);
uint32_t  func_18(uint32_t  p_19, uint32_t  p_20, uint32_t  p_21, uint64_t  p_22, uint32_t  p_23, struct S0 * p_1214);
uint16_t  func_25(uint32_t  p_26, uint16_t  p_27, uint16_t  p_28, struct S0 * p_1214);
int32_t * func_34(uint64_t  p_35, struct S0 * p_1214);
uint32_t  func_46(int32_t * p_47, int16_t  p_48, struct S0 * p_1214);
int32_t * func_49(int32_t * p_50, struct S0 * p_1214);
int32_t * func_51(int64_t  p_52, int32_t * p_53, uint8_t  p_54, struct S0 * p_1214);
int32_t * func_57(int32_t * p_58, int32_t  p_59, int8_t  p_60, struct S0 * p_1214);
int32_t * func_68(int32_t ** p_69, int32_t * p_70, int32_t * p_71, int8_t  p_72, uint8_t  p_73, struct S0 * p_1214);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1214->g_24 p_1214->g_42 p_1214->g_30 p_1214->g_65 p_1214->g_102 p_1214->g_83 p_1214->g_103 p_1214->g_106 p_1214->g_164 p_1214->g_177 p_1214->g_178 p_1214->g_174 p_1214->g_187 p_1214->g_180 p_1214->g_261 p_1214->g_201 p_1214->g_267 p_1214->g_291 p_1214->g_334 p_1214->g_191 p_1214->g_182 p_1214->g_368 p_1214->g_390 p_1214->g_392 p_1214->g_394 p_1214->g_397 p_1214->g_460 p_1214->g_557 p_1214->g_528 p_1214->g_43 p_1214->g_565 p_1214->g_641 p_1214->g_645 p_1214->g_564 p_1214->g_657 p_1214->g_655 p_1214->g_13 p_1214->g_683 p_1214->g_810 p_1214->g_842 p_1214->g_714 p_1214->g_947 p_1214->g_644 p_1214->g_961 p_1214->g_439 p_1214->g_990 p_1214->g_1001 p_1214->g_963 p_1214->g_1057 p_1214->g_1068 p_1214->g_872 p_1214->g_1139 p_1214->g_1140 p_1214->g_1205 p_1214->g_712 p_1214->g_1056
 * writes: p_1214->g_13 p_1214->g_30 p_1214->g_42 p_1214->g_43 p_1214->g_65 p_1214->g_83 p_1214->g_103 p_1214->g_106 p_1214->g_164 p_1214->g_174 p_1214->g_177 p_1214->g_178 p_1214->g_180 p_1214->g_182 p_1214->g_187 p_1214->g_201 p_1214->g_267 p_1214->g_368 p_1214->g_390 p_1214->g_392 p_1214->g_394 p_1214->g_334 p_1214->g_439 p_1214->g_564 p_1214->g_460 p_1214->g_607 p_1214->g_655 p_1214->g_24 p_1214->g_712 p_1214->g_714 p_1214->g_683 p_1214->g_565 p_1214->g_842 p_1214->g_872 p_1214->g_873 p_1214->g_875 p_1214->g_990 p_1214->g_1008 p_1214->g_1057 p_1214->g_1205 p_1214->g_1056
 */
uint32_t  func_1(struct S0 * p_1214)
{ /* block id: 4 */
    uint64_t l_8 = 1UL;
    uint64_t *l_29 = &p_1214->g_30[0][2];
    uint64_t l_31 = 18446744073709551613UL;
    int8_t *l_1211[7][3] = {{&p_1214->g_178,&p_1214->g_873,&p_1214->g_873},{&p_1214->g_178,&p_1214->g_873,&p_1214->g_873},{&p_1214->g_178,&p_1214->g_873,&p_1214->g_873},{&p_1214->g_178,&p_1214->g_873,&p_1214->g_873},{&p_1214->g_178,&p_1214->g_873,&p_1214->g_873},{&p_1214->g_178,&p_1214->g_873,&p_1214->g_873},{&p_1214->g_178,&p_1214->g_873,&p_1214->g_873}};
    int32_t l_1212 = 3L;
    int32_t *l_1213 = &p_1214->g_1056;
    int i, j;
    (*l_1213) ^= (65532UL != (safe_sub_func_int8_t_s_s((l_1212 = (~((func_4(l_8, (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((p_1214->g_13[1][1][3] = l_8), ((safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(func_18(p_1214->g_24, l_8, ((1L && func_25((((*l_29) = 0UL) ^ l_8), l_8, l_31, p_1214)) , 0xDAF3B30EL), l_8, p_1214->g_460, p_1214), l_8)), 2)) , l_8))), l_31)), p_1214->g_191[1], p_1214) , p_1214->g_164[3][6]) && l_31))), l_31)));
    return (*l_1213);
}


/* ------------------------------------------ */
/* 
 * reads : p_1214->g_394 p_1214->g_334 p_1214->g_164 p_1214->g_65 p_1214->g_201 p_1214->g_177 p_1214->g_657 p_1214->g_655 p_1214->g_565 p_1214->g_392 p_1214->g_13 p_1214->g_261 p_1214->g_187 p_1214->g_42 p_1214->g_683 p_1214->g_103 p_1214->g_191 p_1214->g_810 p_1214->g_106 p_1214->g_460 p_1214->g_30 p_1214->g_182 p_1214->g_180 p_1214->g_842 p_1214->g_714 p_1214->g_174 p_1214->g_368 p_1214->g_178 p_1214->g_947 p_1214->g_43 p_1214->g_644 p_1214->g_961 p_1214->g_439 p_1214->g_990 p_1214->g_1001 p_1214->g_397 p_1214->g_24 p_1214->g_963 p_1214->g_267 p_1214->g_1057 p_1214->g_1068 p_1214->g_872 p_1214->g_390 p_1214->g_1139 p_1214->g_1140 p_1214->g_1205 p_1214->g_712
 * writes: p_1214->g_394 p_1214->g_460 p_1214->g_164 p_1214->g_65 p_1214->g_439 p_1214->g_201 p_1214->g_712 p_1214->g_83 p_1214->g_267 p_1214->g_103 p_1214->g_714 p_1214->g_683 p_1214->g_177 p_1214->g_392 p_1214->g_565 p_1214->g_842 p_1214->g_43 p_1214->g_872 p_1214->g_873 p_1214->g_875 p_1214->g_368 p_1214->g_180 p_1214->g_30 p_1214->g_106 p_1214->g_990 p_1214->g_1008 p_1214->g_24 p_1214->g_182 p_1214->g_655 p_1214->g_13 p_1214->g_1057 p_1214->g_187 p_1214->g_1205
 */
int8_t  func_4(int32_t  p_5, uint32_t  p_6, uint16_t  p_7, struct S0 * p_1214)
{ /* block id: 275 */
    uint32_t l_693[3];
    int32_t l_715 = (-7L);
    int32_t l_723 = 1L;
    int32_t l_731 = 0L;
    int32_t l_733 = 0x5466C99FL;
    int32_t l_739 = 0x06AA04AEL;
    uint64_t l_780 = 0UL;
    int16_t *l_786 = &p_1214->g_460;
    int32_t ***l_803 = &p_1214->g_683;
    uint8_t *l_804 = (void*)0;
    uint8_t *l_805 = &p_1214->g_177;
    uint8_t **l_811 = &l_805;
    int16_t l_839 = 0x04A7L;
    int32_t l_843 = (-9L);
    int32_t *l_905 = &p_1214->g_607;
    int32_t l_929 = 0L;
    int64_t *l_942 = &p_1214->g_657[3][1][0];
    int64_t *l_1067 = &p_1214->g_947;
    int64_t **l_1066 = &l_1067;
    int64_t ***l_1065[9] = {&l_1066,&l_1066,&l_1066,&l_1066,&l_1066,&l_1066,&l_1066,&l_1066,&l_1066};
    int8_t **l_1082 = &p_1214->g_565;
    int64_t l_1088 = 4L;
    int8_t l_1117 = (-1L);
    int16_t l_1151 = 0x417CL;
    int32_t *l_1152 = &p_1214->g_65;
    int i;
    for (i = 0; i < 3; i++)
        l_693[i] = 0xCB0F8582L;
    for (p_1214->g_394 = 0; (p_1214->g_394 <= (-19)); --p_1214->g_394)
    { /* block id: 278 */
        int32_t l_710 = 0L;
        int32_t l_721 = 0L;
        int32_t l_725 = 0x0AF824F6L;
        int32_t l_726 = 4L;
        int32_t l_728 = 0x2E2FAAC0L;
        int32_t l_732[2][9];
        int16_t l_737 = 8L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 9; j++)
                l_732[i][j] = 1L;
        }
        for (p_1214->g_460 = 0; (p_1214->g_460 == 1); p_1214->g_460 = safe_add_func_int32_t_s_s(p_1214->g_460, 7))
        { /* block id: 281 */
            (*p_1214->g_334) = (safe_mod_func_int32_t_s_s(0x018ADF89L, p_7));
        }
        for (p_1214->g_439 = (-5); (p_1214->g_439 > 51); p_1214->g_439++)
        { /* block id: 286 */
            int32_t l_709[2][1][1];
            int32_t l_724 = 0x7CE26A64L;
            int32_t l_727 = 0x4AAA63CCL;
            int32_t l_729 = (-8L);
            int32_t l_730[10] = {0x6BD913B3L,(-4L),0x6BD913B3L,0x6BD913B3L,(-4L),0x6BD913B3L,0x6BD913B3L,(-4L),0x6BD913B3L,0x6BD913B3L};
            uint16_t l_740 = 0x7587L;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_709[i][j][k] = 1L;
                }
            }
            (*p_1214->g_334) |= p_6;
            if (l_693[0])
                continue;
            for (p_1214->g_460 = 2; (p_1214->g_460 >= 0); p_1214->g_460 -= 1)
            { /* block id: 291 */
                uint32_t l_700 = 0x58A97961L;
                int16_t *l_711 = &p_1214->g_712;
                int16_t *l_713[3];
                int64_t *l_716 = (void*)0;
                int64_t *l_717 = &p_1214->g_83;
                int32_t l_722[9] = {0x66B54152L,0x66B54152L,0x66B54152L,0x66B54152L,0x66B54152L,0x66B54152L,0x66B54152L,0x66B54152L,0x66B54152L};
                uint32_t l_734 = 4294967289UL;
                int i;
                for (i = 0; i < 3; i++)
                    l_713[i] = &p_1214->g_714;
                if (((0x40C6E315BBAEB020L & ((*l_717) = (safe_add_func_int16_t_s_s((-5L), (safe_rshift_func_int16_t_s_s((p_1214->g_201 &= p_5), (l_715 = ((*l_711) = ((safe_lshift_func_uint8_t_u_u(((l_700 , ((p_6 > (((((*p_1214->g_334) = ((safe_rshift_func_int16_t_s_u((-1L), 11)) & (safe_div_func_uint8_t_u_u(p_6, ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(0x5951L, 11)), ((((18446744073709551615UL && p_7) , p_1214->g_177) <= p_1214->g_657[4][1][0]) != p_1214->g_655))) || 0UL))))) == 1UL) , 0x1CL) || (*p_1214->g_565))) == l_709[0][0][0])) , l_710), 1)) == p_1214->g_13[3][1][3]))))))))) < 0x45CBL))
                { /* block id: 297 */
                    int32_t *l_718 = &p_1214->g_42;
                    int32_t *l_719 = &p_1214->g_42;
                    int32_t *l_720[5][9][2];
                    int32_t l_738 = 0x291AF364L;
                    uint16_t *l_745 = &p_1214->g_267;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 9; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_720[i][j][k] = (void*)0;
                        }
                    }
                    l_734--;
                    ++l_740;
                    (*p_1214->g_683) = ((((p_1214->g_261[1] , ((*l_711) = (-1L))) != ((*l_745) = (safe_sub_func_uint64_t_u_u(0UL, p_7)))) , ((safe_rshift_func_uint8_t_u_s((p_7 , (safe_mul_func_int16_t_s_s(p_6, (safe_lshift_func_int8_t_s_s(((safe_mod_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((safe_lshift_func_int16_t_s_s(((((((safe_mod_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_729 != (((p_7 & l_722[8]) , p_6) ^ p_1214->g_187)), p_7)), 3)), p_7)) , p_1214->g_394) , (-3L)) , 0UL) >= p_5) < p_1214->g_657[5][3][0]), 0)))), 65528UL)) && (*l_718)), l_726))))), 6)) >= l_726)) , &l_724);
                }
                else
                { /* block id: 303 */
                    uint8_t *l_776 = &p_1214->g_177;
                    uint8_t **l_775 = &l_776;
                    uint8_t **l_777 = (void*)0;
                    uint8_t *l_779[3];
                    uint8_t **l_778 = &l_779[1];
                    uint32_t l_781 = 0UL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_779[i] = &p_1214->g_177;
                    p_5 = ((((l_726 &= ((*p_1214->g_334) = ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(p_5, ((*l_711) = ((p_6 != ((p_5 , (safe_lshift_func_int16_t_s_u(((safe_rshift_func_int16_t_s_s(p_1214->g_13[1][0][1], (safe_lshift_func_uint8_t_u_s(p_1214->g_164[2][5], 0)))) , ((safe_mod_func_int16_t_s_s((l_722[3] && ((((((p_6 >= (((((*l_778) = ((*l_775) = &p_1214->g_177)) == (void*)0) & p_6) || (-7L))) || p_6) ^ 0UL) >= 0x2846471AL) != p_7) > 0x848E75372B091EFDL)), p_5)) & 0xA0DAD47CL)), 9))) , p_1214->g_392)) > l_727)))), l_780)) >= l_781))) <= (-1L)) , l_722[6]) , l_729);
                }
            }
            for (p_1214->g_714 = (-6); (p_1214->g_714 == (-24)); p_1214->g_714 = safe_sub_func_int16_t_s_s(p_1214->g_714, 7))
            { /* block id: 314 */
                uint64_t *l_797 = &p_1214->g_30[1][0];
                uint16_t *l_798 = (void*)0;
                int32_t l_799 = 0x07097A37L;
                int16_t *l_800 = &p_1214->g_712;
                (*p_1214->g_683) = &p_5;
                if (p_6)
                    break;
                (**p_1214->g_683) ^= p_7;
            }
        }
    }
    if (((((safe_mod_func_int16_t_s_s(((*l_786) = (((*l_803) = (void*)0) == &p_1214->g_103)), 0x14E6L)) || 1L) <= (p_7 > ((*l_805) = 0x68L))) > p_1214->g_191[3]))
    { /* block id: 329 */
        int8_t *l_826 = &p_1214->g_392;
        int32_t l_828 = 0x1F8467B1L;
        int64_t l_902 = (-1L);
        uint8_t l_903 = 249UL;
        int8_t l_928[10][9][2] = {{{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L}},{{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L}},{{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L}},{{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L}},{{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L}},{{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L}},{{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L}},{{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L}},{{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L}},{{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L},{(-2L),0x76L}}};
        uint32_t *l_960 = &l_693[0];
        uint32_t **l_959[7] = {&l_960,&l_960,&l_960,&l_960,&l_960,&l_960,&l_960};
        int32_t *l_1011[3];
        uint8_t **l_1026[2];
        uint64_t l_1116 = 18446744073709551606UL;
        int32_t l_1204 = 0L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1011[i] = (void*)0;
        for (i = 0; i < 2; i++)
            l_1026[i] = (void*)0;
        if (((*p_1214->g_334) = (safe_rshift_func_uint16_t_u_u(((p_1214->g_13[0][0][0] || (safe_mod_func_uint16_t_u_u((((((p_1214->g_261[0] , (p_1214->g_810 != l_811)) , ((&l_715 == &l_733) >= (safe_rshift_func_uint8_t_u_u(0x3FL, 1)))) , (safe_rshift_func_int16_t_s_u(1L, 11))) == (safe_rshift_func_uint16_t_u_s((0x167EFB5B29890A64L & p_5), 3))) | 0x5FL), p_6))) >= p_7), 12))))
        { /* block id: 331 */
            int8_t **l_827 = &p_1214->g_565;
            int8_t *l_841 = (void*)0;
            int8_t **l_840[2];
            int64_t *l_844 = &p_1214->g_83;
            int32_t l_860 = 8L;
            int32_t l_864 = 0x2427EC55L;
            int8_t l_945 = 8L;
            int32_t *l_981 = &p_1214->g_164[2][5];
            int32_t ***l_1006 = &p_1214->g_683;
            uint16_t **l_1020[9];
            uint8_t **l_1027 = &l_804;
            uint32_t **l_1062 = &l_960;
            int i;
            for (i = 0; i < 2; i++)
                l_840[i] = &l_841;
            for (i = 0; i < 9; i++)
                l_1020[i] = (void*)0;
            if (((*p_1214->g_334) &= (safe_rshift_func_int8_t_s_u(((((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((*p_1214->g_565) = 1L), 1)), p_1214->g_106)) , ((~(safe_mul_func_uint8_t_u_u((((((*l_844) = (((*l_827) = l_826) != ((((**l_811)++) | ((safe_mul_func_int16_t_s_s((p_6 , (safe_sub_func_uint16_t_u_u((0x39L ^ (safe_sub_func_uint64_t_u_u((((safe_sub_func_int8_t_s_s(((p_1214->g_842 = (((((void*)0 != &p_6) , p_1214->g_394) < ((l_839 |= (0x501BL < p_1214->g_460)) > l_828)) , l_805)) != (void*)0), l_843)) < 0x13L) & 0x8EF62316L), 0L))), p_7))), p_1214->g_30[0][2])) | p_1214->g_30[0][2])) , l_826))) && l_828) != p_1214->g_182) != 0x2EB9L), p_5))) , 0xF22A449A37BDEE3EL)) != 9UL) ^ l_828), 3))))
            { /* block id: 339 */
                int32_t l_859 = 0x2FD6BE05L;
                uint32_t l_863 = 0xB3F3F6C3L;
                uint32_t *l_869 = &l_693[0];
                uint32_t **l_868 = &l_869;
                int32_t *l_870 = &p_1214->g_43;
                int32_t *l_871 = &p_1214->g_872;
                int32_t *l_874 = &p_1214->g_875;
                int8_t l_941 = 1L;
                int64_t *l_943 = (void*)0;
                uint64_t l_944 = 18446744073709551615UL;
                uint8_t *l_971[1];
                int32_t *l_979 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_971[i] = (void*)0;
                if ((safe_lshift_func_uint16_t_u_s((p_1214->g_180 | ((((*l_874) = (p_1214->g_873 = ((*l_871) = ((*l_870) = (safe_rshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((*p_1214->g_842) = (safe_rshift_func_uint16_t_u_u((l_859 == p_5), (l_828 , ((((((+(*p_1214->g_842)) , l_860) & (safe_div_func_int8_t_s_s((l_864 = (l_863 = ((*p_1214->g_565) = 0x39L))), (safe_div_func_uint64_t_u_u(((p_5 < (safe_unary_minus_func_uint64_t_u(((((*l_868) = &l_693[0]) == &l_693[0]) , l_860)))) != p_1214->g_714), 0x7034D2ADCAA5FC89L))))) == 0x0ABCA51AL) & p_1214->g_13[7][0][2]) && p_1214->g_394))))), l_859)), p_5)), 3)) ^ l_859), l_859)) <= p_1214->g_191[1]), 8)))))) , p_6) != 65531UL)), p_1214->g_174)))
                { /* block id: 349 */
                    int32_t *l_904 = &p_1214->g_368;
                    int64_t **l_940 = (void*)0;
                    int64_t ***l_939 = &l_940;
                    uint64_t *l_946[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_946[i] = &p_1214->g_13[2][0][4];
                    for (l_739 = 13; (l_739 >= 0); l_739--)
                    { /* block id: 352 */
                        uint32_t l_882 = 0x4AA9B14EL;
                        uint64_t *l_897 = (void*)0;
                        uint64_t *l_898 = &p_1214->g_261[0];
                        uint32_t *l_899 = (void*)0;
                        uint32_t *l_900 = (void*)0;
                        uint32_t *l_901 = &p_1214->g_180;
                        l_904 = &l_828;
                    }
                    (*l_904) = ((0L < (&p_1214->g_564 != (void*)0)) ^ ((void*)0 == l_905));
                    for (p_1214->g_180 = 0; (p_1214->g_180 <= 4); p_1214->g_180 += 1)
                    { /* block id: 367 */
                        int64_t *l_912 = &l_902;
                        uint16_t *l_927 = &p_1214->g_267;
                        int i;
                        (*p_1214->g_334) &= (safe_mul_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((1UL | p_1214->g_191[p_1214->g_180]), 0)), 4)) == ((*l_844) = p_1214->g_191[p_1214->g_180])) <= l_903), (l_859 > ((*l_912) = 0L))));
                        (*l_904) = ((l_864 , (-3L)) < (p_7 = (p_1214->g_191[p_1214->g_180] > (safe_mod_func_int8_t_s_s((l_803 == &p_1214->g_528), ((+((safe_rshift_func_int16_t_s_s(((((*l_927) = (((*l_805) ^= 0x9DL) & ((((safe_add_func_int64_t_s_s(((p_5 | (safe_lshift_func_int16_t_s_u((((safe_div_func_int64_t_s_s((safe_add_func_int8_t_s_s((l_859 = (l_860 |= l_828)), (safe_mul_func_uint8_t_u_u(249UL, p_6)))), p_7)) , 65535UL) | p_5), 7))) , l_859), p_6)) < p_1214->g_657[6][2][0]) , p_7) ^ p_7))) != 0x3DA6L) ^ p_1214->g_191[p_1214->g_180]), p_1214->g_191[p_1214->g_180])) > l_928[4][1][0])) , 6UL))))));
                    }
                    (*l_904) = ((((+((l_929 == (((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((((*l_844) = ((((((((l_859 = (safe_mod_func_int64_t_s_s(((((0x0F2609C0B18E991EL != ((safe_sub_func_int8_t_s_s(p_6, ((((((+(*l_904)) == (((safe_sub_func_int8_t_s_s(0x38L, ((((*l_939) = (void*)0) == (void*)0) , l_941))) , l_942) == l_943)) == l_944) == l_945) && (*l_904)) , p_7))) && p_1214->g_201)) , 0x17876E7DL) >= p_7) <= l_944), l_945))) >= l_944) | (*l_904)) , (-1L)) <= p_1214->g_178) & p_6) | 0x635E5ECBL) & p_5)) , p_7))), 6)) , p_5) && p_1214->g_947)) == 0L)) | 255UL) , (*p_1214->g_565)) <= 1L);
                }
                else
                { /* block id: 382 */
                    int64_t l_978 = (-4L);
                    p_5 = (!1L);
                    if (l_828)
                    { /* block id: 384 */
                        uint64_t *l_964 = &p_1214->g_30[0][2];
                        uint64_t ****l_969 = &p_1214->g_645;
                        uint64_t *l_970[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        (*p_1214->g_334) ^= (l_864 ^ (safe_rshift_func_uint8_t_u_u((65533UL < (((*l_811) = ((((p_1214->g_43 , (((l_860 = ((*l_826) = (((*l_786) = (safe_sub_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((l_828 = ((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((safe_div_func_int64_t_s_s(((((l_959[2] != (p_1214->g_644 , p_1214->g_961)) , ((++(*l_964)) , p_1214->g_439)) != p_6) > ((((safe_mul_func_int16_t_s_s((l_969 == &p_1214->g_641), p_6)) >= p_5) , &p_1214->g_392) != (void*)0)), l_902)))), p_1214->g_106)) != p_1214->g_191[1])), 18446744073709551615UL)), p_6))) & p_6))) != p_1214->g_177) & l_859)) <= p_7) || (-10L)) , (*l_811))) == l_971[0])), 3)));
                        return p_5;
                    }
                    else
                    { /* block id: 393 */
                        int32_t **l_980[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_980[i] = &p_1214->g_103;
                        p_5 = (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((*p_1214->g_565), ((safe_mul_func_uint16_t_u_u(p_6, ((*l_786) = (-4L)))) , l_978))), 7));
                        l_979 = (void*)0;
                        l_981 = &p_5;
                    }
                    (*l_981) |= 0x48CE1645L;
                }
                return p_7;
            }
            else
            { /* block id: 402 */
                int32_t l_984 = 1L;
                int32_t l_987 = 0x62420084L;
                int32_t l_988 = 9L;
                int64_t *l_1036 = &p_1214->g_947;
                uint8_t *l_1087 = (void*)0;
                int8_t **l_1089 = &l_826;
                for (p_1214->g_106 = 25; (p_1214->g_106 >= (-7)); p_1214->g_106 = safe_sub_func_uint16_t_u_u(p_1214->g_106, 2))
                { /* block id: 405 */
                    int32_t ****l_1007[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1007[i] = &l_1006;
                    for (p_7 = 0; (p_7 <= 1); p_7 += 1)
                    { /* block id: 408 */
                        int32_t *l_985 = &l_860;
                        int32_t *l_986[10][4][3] = {{{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828}},{{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828}},{{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828}},{{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828}},{{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828}},{{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828}},{{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828}},{{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828}},{{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828}},{{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828},{&l_739,(void*)0,&l_828}}};
                        int8_t l_989 = (-9L);
                        int i, j, k;
                        ++p_1214->g_990;
                        (*p_1214->g_334) ^= ((*l_985) = l_828);
                        (*l_981) ^= (p_6 && ((*l_844) = ((((&l_903 != ((*l_811) = &p_1214->g_177)) > 1L) <= (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((*l_985), 4)), ((18446744073709551609UL < 18446744073709551611UL) <= 0x1CL)))) ^ (safe_mul_func_uint8_t_u_u(p_7, (*p_1214->g_565))))));
                    }
                    for (p_1214->g_65 = 1; (p_1214->g_65 >= 0); p_1214->g_65 -= 1)
                    { /* block id: 418 */
                        uint32_t l_999[7][4][4] = {{{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL}},{{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL}},{{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL}},{{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL}},{{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL}},{{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL}},{{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL},{0xDCBAFA56L,0xA74E2599L,0x91084E23L,4294967295UL}}};
                        int32_t *l_1000 = &l_864;
                        int i, j, k;
                        if (l_999[5][2][1])
                            break;
                        (*p_1214->g_1001) = l_1000;
                    }
                    (*p_1214->g_334) = ((safe_add_func_uint8_t_u_u(p_7, (1UL > (((l_903 , 6UL) == (l_903 && ((p_5 == (safe_div_func_int16_t_s_s(((p_1214->g_1008 = l_1006) == (void*)0), (safe_lshift_func_uint8_t_u_u((p_1214->g_655 && 65526UL), p_6))))) , p_1214->g_644))) , p_1214->g_990)))) > 5L);
                }
                l_1011[1] = (*p_1214->g_397);
                if ((*p_1214->g_334))
                { /* block id: 426 */
                    uint32_t *l_1012 = &p_1214->g_24;
                    uint32_t *l_1013[5][8][6] = {{{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0}},{{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0}},{{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0}},{{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0}},{{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0},{&p_1214->g_990,&p_1214->g_990,&p_1214->g_182,(void*)0,(void*)0,(void*)0}}};
                    int i, j, k;
                    p_5 = ((*p_1214->g_334) = (**p_1214->g_397));
                    if ((((*l_1012) &= p_1214->g_460) >= (--p_1214->g_182)))
                    { /* block id: 431 */
                        return l_988;
                    }
                    else
                    { /* block id: 433 */
                        int32_t *l_1016 = &p_1214->g_394;
                        l_1016 = &p_5;
                    }
                    for (p_6 = 0; (p_6 <= 6); p_6 += 1)
                    { /* block id: 438 */
                        (*p_1214->g_334) = (((0L | (safe_unary_minus_func_uint8_t_u((p_1214->g_177 = (safe_mul_func_int16_t_s_s(p_1214->g_963, p_1214->g_439)))))) <= l_984) >= (l_987 & (p_6 & ((void*)0 == l_1020[6]))));
                        (*l_981) = 0x5212EF1EL;
                        if (p_6)
                            break;
                        return p_7;
                    }
                }
                else
                { /* block id: 445 */
                    uint64_t *l_1025[2][4] = {{&p_1214->g_30[3][5],&p_1214->g_30[3][5],&p_1214->g_30[3][5],&p_1214->g_30[3][5]},{&p_1214->g_30[3][5],&p_1214->g_30[3][5],&p_1214->g_30[3][5],&p_1214->g_30[3][5]}};
                    int32_t l_1037 = 0x28C2B053L;
                    int32_t l_1055[4] = {1L,1L,1L,1L};
                    int32_t **l_1061 = &l_1011[1];
                    int i, j;
                    if (((p_1214->g_267 |= (++p_1214->g_655)) & (l_1037 |= ((safe_mul_func_int8_t_s_s(0x53L, ((l_739 ^= 0UL) || (l_1026[1] != l_1027)))) & (safe_sub_func_int32_t_s_s(((+((safe_sub_func_int8_t_s_s(0x1EL, ((((safe_sub_func_uint16_t_u_u(0xDECFL, (0xF0452530E44308A9L <= ((safe_lshift_func_int8_t_s_u(p_5, 0)) && l_984)))) , l_1036) == &l_902) < p_6))) == p_7)) ^ p_6), l_987))))))
                    { /* block id: 450 */
                        l_1037 ^= p_5;
                    }
                    else
                    { /* block id: 452 */
                        int32_t *l_1042 = &l_929;
                        int16_t *l_1053 = &p_1214->g_714;
                        int32_t l_1054[10] = {5L,0x73506406L,(-1L),0x73506406L,5L,5L,0x73506406L,(-1L),0x73506406L,5L};
                        int i;
                        l_988 ^= (0x3FL == ((p_1214->g_30[0][2] = (safe_lshift_func_int8_t_s_u(((!(p_5 ^ p_7)) & ((*l_805) = ((((*l_1053) ^= (!(p_7 < ((safe_mod_func_uint32_t_u_u((((p_1214->g_872 = ((*l_1042) = p_7)) , (safe_add_func_int64_t_s_s(((((safe_sub_func_uint8_t_u_u((((*l_981) = ((*l_786) = (((safe_lshift_func_uint8_t_u_u(((p_1214->g_13[1][1][3] = ((safe_add_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u((l_987 || p_5), (l_1025[0][1] == l_1025[0][1]))) , p_1214->g_368) , l_1037), (-9L))) != p_5)) , p_5), 3)) || p_6) , 0x3B55L))) && p_5), l_1037)) >= 1UL) , 0xE726L) ^ l_1037), (-3L)))) , l_984), p_5)) == 0x67L)))) , (-8L)) <= l_1054[4]))), 4))) <= p_1214->g_65));
                        if (p_1214->g_368)
                            goto lbl_1060;
lbl_1060:
                        p_1214->g_1057--;
                        if (p_1214->g_187)
                            goto lbl_1069;
                        (*l_1061) = func_68(l_1061, ((*l_1061) = &l_864), &p_5, ((&p_1214->g_962[1] != l_1062) , (safe_rshift_func_int8_t_s_u(((l_828 , l_1065[5]) == p_1214->g_1068), 1))), (*l_981), p_1214);
                        (*p_1214->g_334) = p_5;
                    }
lbl_1069:
                    l_1011[0] = (*l_1061);
                    (*l_981) = (safe_mod_func_int64_t_s_s(p_5, (((safe_sub_func_int64_t_s_s(7L, (safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_5, (safe_lshift_func_int8_t_s_s((((p_6 & (p_1214->g_106 , (l_1082 == (((((((p_6 < (((safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(0x33L, (&p_1214->g_177 == l_1087))), p_5)) < p_6) < l_1088)) || p_1214->g_644) ^ 5L) ^ 0x23L) & 0x5937L) != p_7) , l_1089)))) & 0x766DD3ECL) , (*p_1214->g_565)), 6)))), p_1214->g_394)), p_6)))) , 0xF9L) || 0x00L)));
                }
            }
        }
        else
        { /* block id: 473 */
            uint32_t l_1101 = 0x145EE85EL;
            int32_t l_1119 = 0x7CFF0513L;
            int32_t l_1122 = (-1L);
            int32_t l_1123 = 1L;
            int32_t l_1124 = 0x506A1AD9L;
            int64_t l_1126 = 2L;
            uint64_t l_1127 = 0UL;
            uint64_t ****l_1143 = (void*)0;
            int32_t l_1200 = 0x1B43330CL;
            int32_t l_1202 = 0x234E799FL;
            int32_t l_1203 = 0L;
            for (p_1214->g_187 = 21; (p_1214->g_187 < 28); p_1214->g_187++)
            { /* block id: 476 */
                int32_t **l_1092 = (void*)0;
                int32_t **l_1093 = &l_1011[2];
                int32_t *l_1097 = &p_1214->g_368;
                int32_t *l_1098[7][6][3] = {{{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368}},{{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368}},{{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368}},{{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368}},{{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368}},{{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368}},{{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368},{&p_1214->g_164[2][5],(void*)0,&p_1214->g_368}}};
                int i, j, k;
                (*l_1093) = (void*)0;
                if (p_6)
                    break;
                for (p_1214->g_177 = 0; (p_1214->g_177 <= 31); p_1214->g_177 = safe_add_func_uint64_t_u_u(p_1214->g_177, 3))
                { /* block id: 481 */
                    int32_t **l_1096 = &l_1011[2];
                    int32_t l_1120 = 0x6A749CDDL;
                    int32_t l_1125 = 0x43075F9BL;
                    uint8_t *l_1138 = &l_903;
                    (*l_1093) = func_68(l_1096, l_1097, l_1098[5][5][0], (((~l_1101) || (0L && (safe_mul_func_uint16_t_u_u(p_5, (((safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_s((0x2FF0A976L || (safe_mod_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(p_1214->g_644, (safe_rshift_func_int16_t_s_s(((*l_786) = (safe_lshift_func_uint8_t_u_s(((void*)0 != &l_929), 1))), p_1214->g_30[2][6])))), p_1214->g_872))), p_1214->g_13[1][1][3])) == p_1214->g_390) , p_7) <= l_1116), p_1214->g_174)) <= p_7) | p_7))))) , l_1117), p_7, p_1214);
                    for (p_1214->g_714 = 4; (p_1214->g_714 >= 0); p_1214->g_714 -= 1)
                    { /* block id: 486 */
                        int32_t l_1118 = 0x0A951C2CL;
                        int32_t l_1121[4][3] = {{0x0835705CL,0x07DB9E6AL,0x0835705CL},{0x0835705CL,0x07DB9E6AL,0x0835705CL},{0x0835705CL,0x07DB9E6AL,0x0835705CL},{0x0835705CL,0x07DB9E6AL,0x0835705CL}};
                        int32_t *l_1148 = (void*)0;
                        uint32_t *l_1150 = &p_1214->g_990;
                        uint32_t **l_1149 = &l_1150;
                        int i, j;
                        l_1127++;
                        (*l_1096) = &l_828;
                    }
                }
                return p_6;
            }
            for (p_1214->g_1057 = 0; (p_1214->g_1057 <= 2); p_1214->g_1057 += 1)
            { /* block id: 498 */
                uint64_t *l_1154 = &p_1214->g_13[7][1][0];
                int32_t **l_1181 = &l_905;
                uint16_t *l_1194 = &p_1214->g_655;
                uint16_t *l_1195[4];
                int32_t l_1196 = 0x4B69D4BBL;
                int32_t l_1201[7];
                int i;
                for (i = 0; i < 4; i++)
                    l_1195[i] = &p_1214->g_267;
                for (i = 0; i < 7; i++)
                    l_1201[i] = 1L;
                (*p_1214->g_334) = (safe_unary_minus_func_uint64_t_u(((*l_1154) = l_693[p_1214->g_1057])));
                l_1196 &= ((safe_div_func_uint8_t_u_u((((safe_div_func_uint64_t_u_u((safe_sub_func_int64_t_s_s((safe_add_func_int32_t_s_s((l_1123 &= (safe_mod_func_uint16_t_u_u((p_7 = (((safe_lshift_func_uint16_t_u_u((((*l_1152) &= (safe_sub_func_uint64_t_u_u(((*l_1154) |= l_693[p_1214->g_1057]), (+p_6)))) , ((*l_1194) = (safe_mod_func_int64_t_s_s(((safe_add_func_uint16_t_u_u(((-2L) | ((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(((~(0x7BL & ((*p_1214->g_842) = (safe_div_func_int32_t_s_s((0xFDL & ((*p_1214->g_565) = (safe_sub_func_int64_t_s_s(((((*l_1181) = (void*)0) != (void*)0) | (0x7E22L != (safe_mul_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((((safe_mod_func_int8_t_s_s((((++(*l_1154)) == (safe_mod_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((p_1214->g_460 , (*l_1152)), (-3L))) , 0x219BL), 0x74E9L))) , l_693[p_1214->g_1057]), (*p_1214->g_565))) != l_1124) == l_693[p_1214->g_1057]), p_1214->g_177)), 6L)))), p_1214->g_368)))), p_7))))) && (*p_1214->g_1139)), (**p_1214->g_397))), 4294967290UL)) == (-5L))), p_6)) , p_6), 18446744073709551615UL)))), 9)) >= p_6) , 0xC7BFL)), 0x7C42L))), l_1126)), p_5)), 8UL)) , &p_1214->g_657[0][0][0]) != (void*)0), l_1101)) || p_7);
                l_1011[2] = (*p_1214->g_397);
                ++p_1214->g_1205;
            }
        }
    }
    else
    { /* block id: 515 */
        for (p_1214->g_712 = 24; (p_1214->g_712 >= 7); p_1214->g_712 = safe_sub_func_uint64_t_u_u(p_1214->g_712, 6))
        { /* block id: 518 */
            int32_t *l_1210 = &l_731;
            l_1210 = (void*)0;
        }
    }
    return p_5;
}


/* ------------------------------------------ */
/* 
 * reads : p_1214->g_390 p_1214->g_24 p_1214->g_191 p_1214->g_392 p_1214->g_103 p_1214->g_164 p_1214->g_397 p_1214->g_334 p_1214->g_30 p_1214->g_65 p_1214->g_557 p_1214->g_106 p_1214->g_528 p_1214->g_261 p_1214->g_177 p_1214->g_267 p_1214->g_42 p_1214->g_460 p_1214->g_43 p_1214->g_291 p_1214->g_565 p_1214->g_187 p_1214->g_83 p_1214->g_641 p_1214->g_645 p_1214->g_178 p_1214->g_564 p_1214->g_180
 * writes: p_1214->g_65 p_1214->g_83 p_1214->g_103 p_1214->g_106 p_1214->g_564 p_1214->g_177 p_1214->g_267 p_1214->g_460 p_1214->g_392 p_1214->g_607 p_1214->g_187 p_1214->g_42 p_1214->g_655 p_1214->g_24 p_1214->g_164 p_1214->g_30 p_1214->g_178
 */
uint32_t  func_18(uint32_t  p_19, uint32_t  p_20, uint32_t  p_21, uint64_t  p_22, uint32_t  p_23, struct S0 * p_1214)
{ /* block id: 189 */
    int16_t *l_535 = &p_1214->g_460;
    int32_t l_544 = 1L;
    int32_t **l_570 = &p_1214->g_103;
    int16_t *l_628[7] = {&p_1214->g_460,&p_1214->g_460,&p_1214->g_460,&p_1214->g_460,&p_1214->g_460,&p_1214->g_460,&p_1214->g_460};
    uint64_t *l_649 = &p_1214->g_30[0][2];
    uint64_t **l_648[8][3] = {{(void*)0,&l_649,&l_649},{(void*)0,&l_649,&l_649},{(void*)0,&l_649,&l_649},{(void*)0,&l_649,&l_649},{(void*)0,&l_649,&l_649},{(void*)0,&l_649,&l_649},{(void*)0,&l_649,&l_649},{(void*)0,&l_649,&l_649}};
    uint64_t ***l_647 = &l_648[0][1];
    uint16_t l_679 = 1UL;
    int32_t ***l_681[6][8] = {{&l_570,&l_570,(void*)0,&l_570,(void*)0,&l_570,(void*)0,&l_570},{&l_570,&l_570,(void*)0,&l_570,(void*)0,&l_570,(void*)0,&l_570},{&l_570,&l_570,(void*)0,&l_570,(void*)0,&l_570,(void*)0,&l_570},{&l_570,&l_570,(void*)0,&l_570,(void*)0,&l_570,(void*)0,&l_570},{&l_570,&l_570,(void*)0,&l_570,(void*)0,&l_570,(void*)0,&l_570},{&l_570,&l_570,(void*)0,&l_570,(void*)0,&l_570,(void*)0,&l_570}};
    int64_t l_684 = 0x3915E5722D4C829AL;
    int i, j;
    if (((0x20L < 0x5BL) > ((safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(((((safe_sub_func_int8_t_s_s((((void*)0 != l_535) <= (safe_lshift_func_uint8_t_u_s(((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s((0x0C9DDC45L | ((l_544 || (safe_lshift_func_uint16_t_u_u(l_544, 15))) != (safe_mod_func_uint8_t_u_u((safe_div_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(((((-1L) & 0x6591C3279948CF31L) ^ 0x23E39D77L) || 1UL), 5)), l_544)), p_1214->g_390)))), 0x7C65L)) < l_544) || p_21), l_544)), 7UL)) > 0x824622A7AA39FBE9L), 1))), p_1214->g_24)) <= 0x7A8B3001L) , l_544) == p_23), p_19)), p_1214->g_191[0])) ^ p_1214->g_392)))
    { /* block id: 190 */
        uint64_t l_555 = 0xD53F475382431276L;
        int32_t *l_556[1][4] = {{&p_1214->g_164[2][5],&p_1214->g_164[2][5],&p_1214->g_164[2][5],&p_1214->g_164[2][5]}};
        int32_t **l_558 = &l_556[0][0];
        uint8_t *l_577 = &p_1214->g_177;
        int8_t **l_596 = &p_1214->g_565;
        int8_t **l_608[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_608[i] = &p_1214->g_565;
        (*p_1214->g_557) = func_68(((((void*)0 == l_535) ^ (4294967289UL >= ((*p_1214->g_103) = l_555))) , &p_1214->g_103), l_556[0][2], (p_1214->g_164[2][5] , (*p_1214->g_397)), l_544, l_544, p_1214);
        (*l_558) = l_556[0][2];
        for (p_1214->g_106 = (-12); (p_1214->g_106 > (-29)); p_1214->g_106 = safe_sub_func_uint64_t_u_u(p_1214->g_106, 1))
        { /* block id: 196 */
            int8_t *l_562 = &p_1214->g_392;
            int8_t **l_561 = &l_562;
            int8_t ***l_563[4][3][2] = {{{&l_561,&l_561},{&l_561,&l_561},{&l_561,&l_561}},{{&l_561,&l_561},{&l_561,&l_561},{&l_561,&l_561}},{{&l_561,&l_561},{&l_561,&l_561},{&l_561,&l_561}},{{&l_561,&l_561},{&l_561,&l_561},{&l_561,&l_561}}};
            int i, j, k;
            p_1214->g_564 = l_561;
        }
        if ((safe_mul_func_int8_t_s_s((((**p_1214->g_528) < ((-6L) != (safe_rshift_func_int8_t_s_s((l_570 != (((safe_add_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((p_19 > (p_1214->g_390 , (safe_rshift_func_int16_t_s_u((**l_570), 5)))) && p_1214->g_261[2]), ((*l_577)--))), p_1214->g_261[0])) != p_20) , &p_1214->g_334)), 6)))) , 0x58L), p_22)))
        { /* block id: 200 */
lbl_586:
            for (p_1214->g_267 = (-6); (p_1214->g_267 >= 9); p_1214->g_267++)
            { /* block id: 203 */
                for (p_22 = 0; (p_22 <= 54); ++p_22)
                { /* block id: 206 */
                    return p_1214->g_42;
                }
            }
            for (p_1214->g_460 = 0; (p_1214->g_460 > (-1)); --p_1214->g_460)
            { /* block id: 212 */
                return (**l_570);
            }
            if (p_1214->g_65)
                goto lbl_586;
        }
        else
        { /* block id: 216 */
            uint8_t l_587[3];
            int32_t l_588 = 2L;
            int16_t *l_627 = &p_1214->g_201;
            uint64_t ****l_646[4][5] = {{(void*)0,&p_1214->g_645,(void*)0,(void*)0,&p_1214->g_645},{(void*)0,&p_1214->g_645,(void*)0,(void*)0,&p_1214->g_645},{(void*)0,&p_1214->g_645,(void*)0,(void*)0,&p_1214->g_645},{(void*)0,&p_1214->g_645,(void*)0,(void*)0,&p_1214->g_645}};
            int16_t **l_652 = &l_628[4];
            uint16_t *l_653 = &p_1214->g_267;
            uint16_t *l_654 = &p_1214->g_655;
            int64_t *l_656[5];
            uint32_t *l_658[1];
            uint16_t l_659 = 1UL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_587[i] = 0x15L;
            for (i = 0; i < 5; i++)
                l_656[i] = &p_1214->g_657[6][2][0];
            for (i = 0; i < 1; i++)
                l_658[i] = &p_1214->g_174;
            if ((l_587[0] ^= ((void*)0 != &l_555)))
            { /* block id: 218 */
                uint32_t l_589[6];
                uint16_t *l_592 = &p_1214->g_267;
                uint16_t **l_593 = &l_592;
                int i;
                for (i = 0; i < 6; i++)
                    l_589[i] = 0x170EF278L;
                --l_589[3];
                (*p_1214->g_103) &= (((*l_593) = l_592) != (void*)0);
                for (p_19 = 0; (p_19 <= 2); p_19 += 1)
                { /* block id: 224 */
                    int i;
                    return p_1214->g_261[p_19];
                }
            }
            else
            { /* block id: 227 */
                int8_t ***l_594 = &p_1214->g_564;
                int8_t ***l_595[9] = {&p_1214->g_564,&p_1214->g_564,&p_1214->g_564,&p_1214->g_564,&p_1214->g_564,&p_1214->g_564,&p_1214->g_564,&p_1214->g_564,&p_1214->g_564};
                int32_t l_605 = 5L;
                int32_t *l_606[9][5][5] = {{{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607}},{{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607}},{{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607}},{{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607}},{{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607}},{{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607}},{{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607}},{{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607}},{{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607},{&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607,&p_1214->g_607}}};
                int i, j, k;
                l_544 ^= ((l_596 = &p_1214->g_565) != (p_1214->g_43 , (l_608[1] = ((0x6BB6L < (65535UL ^ (safe_div_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u(((((p_1214->g_607 = ((+((((*p_1214->g_565) = ((safe_mul_func_uint8_t_u_u((((((&p_1214->g_187 == (((9L | l_588) == (0UL <= (*p_1214->g_103))) , l_556[0][3])) <= 0xBC14L) < (**p_1214->g_291)) ^ l_605) != p_20), 0x46L)) < 0x89C33635L)) <= p_22) , p_22)) >= p_20)) , l_606[6][4][1]) == l_556[0][2]) < l_587[2]), l_605)) , l_587[0]), 8)) && p_22), 4294967295UL)))) , &p_1214->g_565))));
                for (p_1214->g_187 = 12; (p_1214->g_187 <= 21); p_1214->g_187++)
                { /* block id: 235 */
                    int32_t l_621 = 0x773BFB42L;
                    for (p_1214->g_65 = 0; (p_1214->g_65 != 19); p_1214->g_65++)
                    { /* block id: 238 */
                        return l_587[0];
                    }
                    (*p_1214->g_103) = (safe_mod_func_uint64_t_u_u((p_1214->g_164[2][5] , (((safe_add_func_uint64_t_u_u(((safe_add_func_int8_t_s_s(((*p_1214->g_565) = (65535UL && (safe_add_func_int64_t_s_s(2L, (((*p_1214->g_103) , (p_1214->g_390 , (p_20 <= (*p_1214->g_565)))) == (&p_1214->g_565 != &p_1214->g_565)))))), 0x7EL)) || (**l_570)), p_1214->g_83)) <= l_621) && 0xA81BL)), 0x34E30B5206E8D93BL));
                    for (p_1214->g_42 = 0; (p_1214->g_42 == 14); p_1214->g_42++)
                    { /* block id: 245 */
                        uint64_t *l_626 = &l_555;
                        uint64_t **l_625[10] = {&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626,&l_626};
                        uint64_t ***l_624 = &l_625[2];
                        int i;
                        (*l_624) = (void*)0;
                    }
                }
            }
            (*l_558) = ((((((l_535 != (l_628[4] = l_627)) , (safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((+(p_1214->g_24 ^= (((safe_add_func_int16_t_s_s(p_22, 0x0E31L)) && ((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s((p_19 <= (p_1214->g_641 != (l_647 = p_1214->g_645))), (((**l_570) = (safe_lshift_func_uint16_t_u_s(((*l_654) = ((*l_653) = (&p_1214->g_460 != ((*l_652) = &p_1214->g_201)))), p_1214->g_30[0][0]))) , p_20))), p_23)) | p_1214->g_178)) & 1L))) | 0x0CF93D0FL), 7)), 2)), l_659))) >= p_1214->g_83) , 0x1858231EL) || l_587[0]) , &l_588);
            (*l_570) = (void*)0;
        }
    }
    else
    { /* block id: 260 */
        int32_t l_673 = 0x4CD6B76CL;
        uint16_t *l_674 = (void*)0;
        int32_t *l_675 = (void*)0;
        int32_t l_676 = (-4L);
        int8_t *l_677 = &p_1214->g_178;
        uint8_t *l_678 = &p_1214->g_177;
        int32_t l_680[5];
        int i;
        for (i = 0; i < 5; i++)
            l_680[i] = 0x4BDC9DC0L;
        l_680[0] = ((safe_sub_func_uint8_t_u_u((p_1214->g_191[1] , (safe_lshift_func_uint16_t_u_u((((**p_1214->g_564) = p_23) <= ((*l_678) = ((safe_mul_func_int16_t_s_s((p_21 >= ((*l_677) = (~(p_1214->g_191[2] >= ((*l_649) = ((safe_sub_func_int16_t_s_s((-1L), (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((l_676 &= ((*p_1214->g_334) |= (safe_add_func_uint16_t_u_u((l_673 = (l_673 > p_22)), p_1214->g_180)))))), 9)))) & (p_1214->g_178 , p_21))))))), p_23)) | 65534UL))), p_21))), 0x00L)) <= l_679);
    }
    (*l_570) = (*l_570);
    return p_22;
}


/* ------------------------------------------ */
/* 
 * reads : p_1214->g_24 p_1214->g_42 p_1214->g_30 p_1214->g_65 p_1214->g_102 p_1214->g_83 p_1214->g_103 p_1214->g_106 p_1214->g_164 p_1214->g_177 p_1214->g_178 p_1214->g_174 p_1214->g_187 p_1214->g_180 p_1214->g_261 p_1214->g_201 p_1214->g_267 p_1214->g_291 p_1214->g_334 p_1214->g_191 p_1214->g_182 p_1214->g_368 p_1214->g_390 p_1214->g_392 p_1214->g_394 p_1214->g_397
 * writes: p_1214->g_42 p_1214->g_43 p_1214->g_65 p_1214->g_83 p_1214->g_103 p_1214->g_106 p_1214->g_164 p_1214->g_174 p_1214->g_177 p_1214->g_178 p_1214->g_180 p_1214->g_182 p_1214->g_187 p_1214->g_201 p_1214->g_267 p_1214->g_368 p_1214->g_390 p_1214->g_392 p_1214->g_394 p_1214->g_334 p_1214->g_439
 */
uint16_t  func_25(uint32_t  p_26, uint16_t  p_27, uint16_t  p_28, struct S0 * p_1214)
{ /* block id: 7 */
    int64_t l_408 = 8L;
    int32_t l_409 = 0x60D8FBE2L;
    int32_t l_410 = (-1L);
    int32_t l_411[8][1][6] = {{{0L,(-2L),(-2L),0L,0L,(-2L)}},{{0L,(-2L),(-2L),0L,0L,(-2L)}},{{0L,(-2L),(-2L),0L,0L,(-2L)}},{{0L,(-2L),(-2L),0L,0L,(-2L)}},{{0L,(-2L),(-2L),0L,0L,(-2L)}},{{0L,(-2L),(-2L),0L,0L,(-2L)}},{{0L,(-2L),(-2L),0L,0L,(-2L)}},{{0L,(-2L),(-2L),0L,0L,(-2L)}}};
    uint64_t **l_461 = (void*)0;
    int32_t l_468[7][6] = {{0x64F99940L,0x4F0182DFL,0x64F99940L,0x64F99940L,0x4F0182DFL,0x64F99940L},{0x64F99940L,0x4F0182DFL,0x64F99940L,0x64F99940L,0x4F0182DFL,0x64F99940L},{0x64F99940L,0x4F0182DFL,0x64F99940L,0x64F99940L,0x4F0182DFL,0x64F99940L},{0x64F99940L,0x4F0182DFL,0x64F99940L,0x64F99940L,0x4F0182DFL,0x64F99940L},{0x64F99940L,0x4F0182DFL,0x64F99940L,0x64F99940L,0x4F0182DFL,0x64F99940L},{0x64F99940L,0x4F0182DFL,0x64F99940L,0x64F99940L,0x4F0182DFL,0x64F99940L},{0x64F99940L,0x4F0182DFL,0x64F99940L,0x64F99940L,0x4F0182DFL,0x64F99940L}};
    int32_t l_475 = 0x1C8440BDL;
    uint32_t *l_485 = &p_1214->g_182;
    uint32_t l_516 = 0xE2B892E4L;
    int8_t l_522 = 0x14L;
    int i, j, k;
    if ((safe_rshift_func_int16_t_s_u(p_27, 13)))
    { /* block id: 8 */
        int32_t *l_398 = &p_1214->g_394;
        int32_t *l_399 = &p_1214->g_42;
        int32_t *l_400 = &p_1214->g_368;
        int32_t *l_401 = &p_1214->g_164[2][5];
        int32_t *l_402 = &p_1214->g_42;
        int32_t *l_403 = &p_1214->g_164[2][5];
        int32_t *l_404 = &p_1214->g_65;
        int32_t *l_405 = &p_1214->g_394;
        int32_t *l_406 = &p_1214->g_65;
        int32_t *l_407[8][7] = {{&p_1214->g_42,&p_1214->g_65,&p_1214->g_65,&p_1214->g_42,&p_1214->g_164[2][5],&p_1214->g_164[2][5],&p_1214->g_164[2][5]},{&p_1214->g_42,&p_1214->g_65,&p_1214->g_65,&p_1214->g_42,&p_1214->g_164[2][5],&p_1214->g_164[2][5],&p_1214->g_164[2][5]},{&p_1214->g_42,&p_1214->g_65,&p_1214->g_65,&p_1214->g_42,&p_1214->g_164[2][5],&p_1214->g_164[2][5],&p_1214->g_164[2][5]},{&p_1214->g_42,&p_1214->g_65,&p_1214->g_65,&p_1214->g_42,&p_1214->g_164[2][5],&p_1214->g_164[2][5],&p_1214->g_164[2][5]},{&p_1214->g_42,&p_1214->g_65,&p_1214->g_65,&p_1214->g_42,&p_1214->g_164[2][5],&p_1214->g_164[2][5],&p_1214->g_164[2][5]},{&p_1214->g_42,&p_1214->g_65,&p_1214->g_65,&p_1214->g_42,&p_1214->g_164[2][5],&p_1214->g_164[2][5],&p_1214->g_164[2][5]},{&p_1214->g_42,&p_1214->g_65,&p_1214->g_65,&p_1214->g_42,&p_1214->g_164[2][5],&p_1214->g_164[2][5],&p_1214->g_164[2][5]},{&p_1214->g_42,&p_1214->g_65,&p_1214->g_65,&p_1214->g_42,&p_1214->g_164[2][5],&p_1214->g_164[2][5],&p_1214->g_164[2][5]}};
        uint32_t l_412 = 4UL;
        uint16_t *l_421 = &p_1214->g_267;
        uint32_t *l_437 = (void*)0;
        uint32_t *l_438 = &p_1214->g_439;
        int i, j;
        (*p_1214->g_397) = func_34(p_1214->g_24, p_1214);
        --l_412;
        (*l_405) ^= (safe_mul_func_uint16_t_u_u((p_1214->g_261[0] != ((void*)0 == l_403)), ((*l_421) |= (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(p_1214->g_164[2][5], 0x08C3L)), 13)))));
        (*l_402) |= (safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u(p_1214->g_106, p_27)), (((safe_add_func_uint64_t_u_u((safe_div_func_int8_t_s_s((l_408 | p_1214->g_24), (((*l_438) = (0x27L >= (safe_add_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((0x6FB3L > (((safe_unary_minus_func_uint64_t_u(0x9CA24B9B603D8F40L)) != ((p_1214->g_30[0][2] | ((safe_rshift_func_int8_t_s_u(p_1214->g_182, 3)) , l_409)) && 0x5E57C99EL)) , p_1214->g_187)), p_1214->g_368)) | 0x6AB972FC3278C0F1L), p_28)))) , p_26))), p_1214->g_65)) ^ p_28) || p_1214->g_394)));
    }
    else
    { /* block id: 144 */
        int16_t *l_440 = &p_1214->g_201;
        (*p_1214->g_103) = (((*l_440) ^= 0L) | 65535UL);
    }
    for (p_1214->g_180 = 1; (p_1214->g_180 <= 4); p_1214->g_180 += 1)
    { /* block id: 150 */
        int32_t *l_442 = (void*)0;
        uint32_t l_454 = 0xB994DF0DL;
        uint8_t l_457 = 255UL;
        uint64_t *l_481 = &p_1214->g_30[1][5];
        uint64_t **l_480 = &l_481;
        int16_t *l_514 = &p_1214->g_201;
        int16_t *l_515[4][1] = {{&p_1214->g_201},{&p_1214->g_201},{&p_1214->g_201},{&p_1214->g_201}};
        int8_t *l_523[9] = {&l_522,&l_522,&l_522,&l_522,&l_522,&l_522,&l_522,&l_522,&l_522};
        int i, j;
        (1 + 1);
    }
    return l_410;
}


/* ------------------------------------------ */
/* 
 * reads : p_1214->g_42 p_1214->g_30 p_1214->g_24 p_1214->g_65 p_1214->g_102 p_1214->g_83 p_1214->g_103 p_1214->g_106 p_1214->g_164 p_1214->g_177 p_1214->g_178 p_1214->g_174 p_1214->g_187 p_1214->g_180 p_1214->g_261 p_1214->g_201 p_1214->g_267 p_1214->g_291 p_1214->g_334 p_1214->g_191 p_1214->g_182 p_1214->g_368 p_1214->g_390 p_1214->g_392 p_1214->g_394
 * writes: p_1214->g_42 p_1214->g_43 p_1214->g_65 p_1214->g_83 p_1214->g_103 p_1214->g_106 p_1214->g_164 p_1214->g_174 p_1214->g_177 p_1214->g_178 p_1214->g_180 p_1214->g_182 p_1214->g_187 p_1214->g_201 p_1214->g_267 p_1214->g_368 p_1214->g_390 p_1214->g_392 p_1214->g_394
 */
int32_t * func_34(uint64_t  p_35, struct S0 * p_1214)
{ /* block id: 9 */
    uint32_t l_40 = 0xCBF698BAL;
    int32_t *l_41[10][9] = {{(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42,(void*)0,(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42},{(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42,(void*)0,(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42},{(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42,(void*)0,(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42},{(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42,(void*)0,(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42},{(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42,(void*)0,(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42},{(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42,(void*)0,(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42},{(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42,(void*)0,(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42},{(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42,(void*)0,(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42},{(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42,(void*)0,(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42},{(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42,(void*)0,(void*)0,&p_1214->g_42,&p_1214->g_42,&p_1214->g_42}};
    int32_t **l_61 = &l_41[2][0];
    uint32_t l_62[7][4] = {{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}};
    uint16_t *l_389 = &p_1214->g_267;
    int8_t *l_391 = &p_1214->g_392;
    int32_t *l_393 = &p_1214->g_394;
    int i, j;
    (*l_393) |= (safe_mod_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((+(p_1214->g_42 &= l_40)) >= (p_1214->g_43 = (&p_1214->g_30[0][5] != (p_1214->g_30[1][2] , (void*)0)))), ((*l_391) &= (safe_div_func_uint32_t_u_u((((((p_1214->g_390 &= (!((*l_389) = (!(func_46(func_49(func_51((p_35 , (safe_lshift_func_uint8_t_u_s(0x67L, p_1214->g_30[0][2]))), func_57(((*l_61) = l_41[2][1]), (l_62[0][1] , p_35), p_35, p_1214), p_1214->g_267, p_1214), p_1214), p_35, p_1214) , 1UL))))) < p_35) , p_1214->g_261[2]) , p_1214->g_178) ^ p_35), p_1214->g_261[0]))))), 0x2A783BB0L));
    return (*p_1214->g_291);
}


/* ------------------------------------------ */
/* 
 * reads : p_1214->g_174
 * writes:
 */
uint32_t  func_46(int32_t * p_47, int16_t  p_48, struct S0 * p_1214)
{ /* block id: 130 */
    int32_t *l_369 = (void*)0;
    int32_t *l_370 = &p_1214->g_164[2][5];
    int32_t *l_371 = &p_1214->g_368;
    int32_t l_372 = (-9L);
    int32_t *l_373 = (void*)0;
    int32_t *l_374 = &p_1214->g_368;
    int32_t *l_375 = &l_372;
    int32_t *l_376 = &l_372;
    int32_t *l_377 = &p_1214->g_368;
    int32_t l_378 = 0x6A09C1CFL;
    int32_t *l_379 = &p_1214->g_65;
    int32_t l_380 = 0x5DC7E0B9L;
    int32_t *l_381 = &p_1214->g_65;
    int32_t *l_382 = (void*)0;
    int32_t *l_383[4] = {&p_1214->g_164[2][3],&p_1214->g_164[2][3],&p_1214->g_164[2][3],&p_1214->g_164[2][3]};
    int16_t l_384 = 0x6D08L;
    int32_t l_385 = 0L;
    uint64_t l_386 = 0x84D41BEAE02E96E1L;
    int i;
    l_386--;
    return p_1214->g_174;
}


/* ------------------------------------------ */
/* 
 * reads : p_1214->g_164 p_1214->g_30 p_1214->g_177 p_1214->g_106 p_1214->g_191 p_1214->g_267 p_1214->g_174 p_1214->g_65 p_1214->g_261 p_1214->g_102 p_1214->g_103 p_1214->g_24 p_1214->g_182 p_1214->g_178 p_1214->g_201 p_1214->g_291 p_1214->g_368
 * writes: p_1214->g_177 p_1214->g_182 p_1214->g_267 p_1214->g_368
 */
int32_t * func_49(int32_t * p_50, struct S0 * p_1214)
{ /* block id: 124 */
    int32_t l_343 = 0x2EAD1E69L;
    uint8_t *l_363[1][9][3] = {{{&p_1214->g_177,&p_1214->g_177,&p_1214->g_177},{&p_1214->g_177,&p_1214->g_177,&p_1214->g_177},{&p_1214->g_177,&p_1214->g_177,&p_1214->g_177},{&p_1214->g_177,&p_1214->g_177,&p_1214->g_177},{&p_1214->g_177,&p_1214->g_177,&p_1214->g_177},{&p_1214->g_177,&p_1214->g_177,&p_1214->g_177},{&p_1214->g_177,&p_1214->g_177,&p_1214->g_177},{&p_1214->g_177,&p_1214->g_177,&p_1214->g_177},{&p_1214->g_177,&p_1214->g_177,&p_1214->g_177}}};
    int32_t **l_364 = (void*)0;
    uint32_t *l_365 = &p_1214->g_182;
    int64_t l_366 = 0x139AF61B770DA58DL;
    int32_t *l_367 = &p_1214->g_368;
    int i, j, k;
    (*l_367) |= ((safe_rshift_func_int8_t_s_u((&p_1214->g_24 == (void*)0), (((safe_mul_func_int8_t_s_s((((*p_50) , ((safe_mod_func_int16_t_s_s((((l_343 && (((safe_lshift_func_int16_t_s_u(6L, (safe_sub_func_uint16_t_u_u((p_1214->g_267 = (safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((l_343 && l_343) & (safe_div_func_uint32_t_u_u(((*l_365) ^= (+(safe_unary_minus_func_int64_t_s((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((((safe_rshift_func_uint8_t_u_u(((((((((((p_1214->g_177 |= ((2L != (-6L)) , p_1214->g_30[0][8])) & l_343) , l_364) == l_364) || p_1214->g_106) == 65535UL) >= p_1214->g_191[0]) , p_1214->g_267) | 18446744073709551615UL) || 0xDAL), p_1214->g_174)) & p_1214->g_65) != p_1214->g_261[0]) | 1L), (**p_1214->g_102))), p_1214->g_24)))))), 0x31D3F4D9L))), l_343)), p_1214->g_174)) <= 0x4AL), l_343))), p_1214->g_30[0][2])))) & p_1214->g_164[2][5]) == l_366)) >= l_366) && p_1214->g_178), 0x6AE8L)) || 0x0233L)) != (*p_50)), 255UL)) ^ l_366) , p_1214->g_201))) && (**p_1214->g_291));
    return (*p_1214->g_291);
}


/* ------------------------------------------ */
/* 
 * reads : p_1214->g_83 p_1214->g_291 p_1214->g_261 p_1214->g_103 p_1214->g_201 p_1214->g_187 p_1214->g_30 p_1214->g_174 p_1214->g_65 p_1214->g_334
 * writes: p_1214->g_83 p_1214->g_103 p_1214->g_65 p_1214->g_201
 */
int32_t * func_51(int64_t  p_52, int32_t * p_53, uint8_t  p_54, struct S0 * p_1214)
{ /* block id: 107 */
    int32_t l_292 = 0x1987D1B0L;
    int32_t l_294 = 0x014A3567L;
    int32_t l_295 = 8L;
    int32_t l_296 = 0x533BB9B5L;
    int32_t l_297 = (-7L);
    int32_t l_298 = (-1L);
    int32_t l_299 = 0x645BFEF9L;
    int32_t l_300 = 3L;
    int32_t l_301 = 1L;
    int32_t l_302 = 0x0CA60B45L;
    int32_t l_303 = (-6L);
    int32_t l_304 = 0x02121E1FL;
    int32_t l_305[10][10] = {{1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL},{1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL},{1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL},{1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL},{1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL},{1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL},{1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL},{1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL},{1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL},{1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL,0x4D047A3CL,1L,1L,0x4D047A3CL}};
    uint64_t l_306 = 0x1A5F3C5497D5CC35L;
    int32_t **l_313[4][7] = {{&p_1214->g_103,&p_1214->g_103,(void*)0,(void*)0,&p_1214->g_103,(void*)0,(void*)0},{&p_1214->g_103,&p_1214->g_103,(void*)0,(void*)0,&p_1214->g_103,(void*)0,(void*)0},{&p_1214->g_103,&p_1214->g_103,(void*)0,(void*)0,&p_1214->g_103,(void*)0,(void*)0},{&p_1214->g_103,&p_1214->g_103,(void*)0,(void*)0,&p_1214->g_103,(void*)0,(void*)0}};
    int16_t *l_318 = (void*)0;
    int16_t *l_319 = &p_1214->g_201;
    int64_t l_332 = (-5L);
    int32_t l_333[4];
    int i, j;
    for (i = 0; i < 4; i++)
        l_333[i] = 0x50ED0B7EL;
    for (p_1214->g_83 = 0; (p_1214->g_83 <= 2); p_1214->g_83 += 1)
    { /* block id: 110 */
        int32_t *l_293[4];
        int i;
        for (i = 0; i < 4; i++)
            l_293[i] = &p_1214->g_164[2][5];
        for (p_52 = 2; (p_52 >= 0); p_52 -= 1)
        { /* block id: 113 */
            int32_t *l_290 = &p_1214->g_65;
            int i;
            (*p_1214->g_291) = l_290;
            if (p_1214->g_261[p_1214->g_83])
                continue;
            (*p_1214->g_103) = p_1214->g_261[p_1214->g_83];
        }
        l_306--;
        if (p_1214->g_261[p_1214->g_83])
            continue;
    }
    (*p_1214->g_103) ^= (0L & (((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((&p_53 == l_313[0][0]), (safe_lshift_func_int16_t_s_u(0x7594L, ((safe_mul_func_int16_t_s_s(((*l_319) ^= (!p_52)), p_54)) | (safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(p_1214->g_187, (safe_rshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((!(((p_52 != (safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(p_52, p_54)), p_1214->g_30[1][5]))) | p_52) & l_332)), p_1214->g_30[0][2])) > 1UL), p_52)))), l_333[3]))))))), p_1214->g_174)) , &l_306) == &p_1214->g_30[2][8]));
    return p_1214->g_334;
}


/* ------------------------------------------ */
/* 
 * reads : p_1214->g_30 p_1214->g_24 p_1214->g_65 p_1214->g_102 p_1214->g_83 p_1214->g_103 p_1214->g_106 p_1214->g_164 p_1214->g_177 p_1214->g_178 p_1214->g_174 p_1214->g_187 p_1214->g_180 p_1214->g_261 p_1214->g_201
 * writes: p_1214->g_65 p_1214->g_83 p_1214->g_103 p_1214->g_106 p_1214->g_164 p_1214->g_174 p_1214->g_177 p_1214->g_178 p_1214->g_180 p_1214->g_182 p_1214->g_187 p_1214->g_201
 */
int32_t * func_57(int32_t * p_58, int32_t  p_59, int8_t  p_60, struct S0 * p_1214)
{ /* block id: 13 */
    int64_t l_63 = 0x31C11D73CB4EA996L;
    int32_t *l_64 = &p_1214->g_65;
    int32_t **l_104 = &l_64;
    int8_t *l_107 = (void*)0;
    int64_t *l_144[3];
    int64_t l_148 = 0x0037973C544D90D5L;
    uint32_t *l_212 = &p_1214->g_174;
    int32_t l_248 = 0x1382D277L;
    uint16_t *l_266 = &p_1214->g_267;
    int32_t l_271 = 0x79292164L;
    int32_t l_273[1];
    int i;
    for (i = 0; i < 3; i++)
        l_144[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_273[i] = 2L;
lbl_119:
    (*l_64) = l_63;
    for (l_63 = 1; (l_63 >= 28); ++l_63)
    { /* block id: 17 */
        int64_t *l_82 = &p_1214->g_83;
        (*p_1214->g_102) = (p_1214->g_30[0][2] , func_68(&p_58, &p_1214->g_65, &p_59, ((&p_1214->g_65 != (void*)0) > (((safe_lshift_func_int8_t_s_u(1L, 2)) & ((*l_82) = (safe_mul_func_int8_t_s_s(p_1214->g_24, (safe_rshift_func_uint8_t_u_u(0x32L, 2)))))) != p_59)), p_1214->g_24, p_1214));
        l_104 = &p_58;
    }
    if ((*l_64))
    { /* block id: 27 */
        int8_t *l_105 = &p_1214->g_106;
        int32_t l_112 = 2L;
        uint16_t l_113 = 0UL;
        int64_t *l_116 = (void*)0;
        int16_t *l_229[9] = {&p_1214->g_201,&p_1214->g_201,&p_1214->g_201,&p_1214->g_201,&p_1214->g_201,&p_1214->g_201,&p_1214->g_201,&p_1214->g_201,&p_1214->g_201};
        int16_t l_272 = 0x230DL;
        int32_t l_279[9][7][4] = {{{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L}},{{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L}},{{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L}},{{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L}},{{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L}},{{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L}},{{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L}},{{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L}},{{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L},{0x6921FB09L,(-1L),(-1L),0x6EDBC130L}}};
        int i, j, k;
        (*l_64) = ((0x02L && ((l_107 = l_105) == l_105)) , (p_59 < (((+(((safe_div_func_int64_t_s_s((((((((((safe_mod_func_int8_t_s_s((l_112 | ((l_113 || ((((safe_lshift_func_uint16_t_u_u(((((p_59 >= (l_116 != (void*)0)) , p_1214->g_65) , (*l_64)) < (-8L)), 2)) , &p_58) != &l_64) & 0x86306CF3CB9137EFL)) && p_1214->g_30[0][2])), 255UL)) | p_59) , p_1214->g_83) ^ p_60) ^ p_59) && p_60) >= p_60) <= p_59) != p_60), p_60)) , p_59) & p_59)) >= p_1214->g_83) >= p_60)));
        for (p_60 = 0; (p_60 > (-14)); --p_60)
        { /* block id: 32 */
            (*p_1214->g_103) = 0x0D5F6D39L;
        }
        if ((*p_1214->g_103))
        { /* block id: 35 */
            int32_t *l_120[5];
            int i;
            for (i = 0; i < 5; i++)
                l_120[i] = &p_1214->g_65;
            if (l_113)
                goto lbl_119;
            (*l_104) = l_120[1];
        }
        else
        { /* block id: 38 */
            int32_t *l_121[4];
            uint64_t l_122[6] = {1UL,0xE9BC94048DEE8705L,1UL,1UL,0xE9BC94048DEE8705L,1UL};
            int64_t **l_167 = &l_144[0];
            uint8_t l_183 = 0xBAL;
            int64_t l_199 = 0L;
            uint64_t l_208[9][5][3] = {{{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL}},{{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL}},{{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL}},{{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL}},{{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL}},{{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL}},{{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL}},{{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL}},{{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL},{8UL,18446744073709551614UL,4UL}}};
            uint16_t l_230 = 0xBF02L;
            int8_t l_231 = 0x03L;
            uint64_t *l_256 = &l_122[1];
            uint64_t **l_255 = &l_256;
            int64_t l_274 = (-7L);
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_121[i] = (void*)0;
            --l_122[1];
            for (l_112 = 3; (l_112 >= 0); l_112 -= 1)
            { /* block id: 42 */
                int64_t *l_142 = &p_1214->g_83;
                int i;
                (*l_64) = l_122[l_112];
                if ((+(*p_1214->g_103)))
                { /* block id: 44 */
                    uint32_t l_131[3][1][2];
                    int64_t **l_143[1];
                    uint16_t *l_147 = &l_113;
                    uint32_t *l_163 = (void*)0;
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_131[i][j][k] = 0xD635786DL;
                        }
                    }
                    for (i = 0; i < 1; i++)
                        l_143[i] = &l_116;
                    if ((*p_1214->g_103))
                        break;
                    l_148 &= (p_60 | ((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((-1L), (*l_64))), 3)) , l_131[2][0][0]) < (((safe_mul_func_uint16_t_u_u((~(((l_131[0][0][1] > p_59) != (safe_add_func_int8_t_s_s((+(safe_mul_func_uint16_t_u_u(((*l_147) = (((*l_105) = (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((l_142 != (l_144[0] = &p_1214->g_83)) , (safe_mul_func_uint8_t_u_u(p_1214->g_65, 0x19L))), l_131[2][0][0])), 1L))) & p_60)), p_1214->g_30[0][2]))), p_1214->g_24))) ^ 0x2B8C224E53AA939EL)), 65532UL)) < p_1214->g_83) != p_1214->g_24)), p_59)) < (*p_1214->g_103)));
                    (*p_1214->g_103) = (safe_add_func_int32_t_s_s((**p_1214->g_102), (p_1214->g_164[2][5] = (!(safe_mul_func_int16_t_s_s((((safe_mul_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((*l_64), 0)), ((((((*p_1214->g_103) && (safe_div_func_uint64_t_u_u(((&p_60 != (void*)0) | ((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(p_60, 4)) == p_59), 0x0990B5A7L)) , (0x218209F7L || p_59))), 0x3489FCF5468D3076L))) == p_1214->g_30[1][1]) < 0x716AL) , p_1214->g_30[0][2]) < l_113))) > p_1214->g_106) > 1L), 0L))))));
                    (*p_1214->g_102) = (*p_1214->g_102);
                }
                else
                { /* block id: 53 */
                    int64_t *l_193 = (void*)0;
                    int32_t l_198 = 0x5A751AEEL;
                    uint16_t l_234 = 0xB2E1L;
                    for (p_1214->g_106 = 5; (p_1214->g_106 >= 1); p_1214->g_106 -= 1)
                    { /* block id: 56 */
                        uint32_t *l_172 = (void*)0;
                        uint32_t *l_173 = &p_1214->g_174;
                        uint8_t *l_175 = (void*)0;
                        uint8_t *l_176 = &p_1214->g_177;
                        uint32_t *l_179 = &p_1214->g_180;
                        uint32_t *l_181 = &p_1214->g_182;
                        uint32_t *l_186 = &p_1214->g_187;
                        uint32_t *l_190[10][2] = {{(void*)0,&p_1214->g_191[1]},{(void*)0,&p_1214->g_191[1]},{(void*)0,&p_1214->g_191[1]},{(void*)0,&p_1214->g_191[1]},{(void*)0,&p_1214->g_191[1]},{(void*)0,&p_1214->g_191[1]},{(void*)0,&p_1214->g_191[1]},{(void*)0,&p_1214->g_191[1]},{(void*)0,&p_1214->g_191[1]},{(void*)0,&p_1214->g_191[1]}};
                        int32_t l_192 = 0x5A230DB6L;
                        int16_t *l_200 = &p_1214->g_201;
                        int32_t l_202 = (-6L);
                        int32_t **l_205 = &l_64;
                        int i, j;
                        (*l_64) = ((safe_rshift_func_int8_t_s_u((((((void*)0 != l_167) >= p_1214->g_83) >= ((*l_64) >= ((*p_1214->g_103) <= (safe_rshift_func_uint16_t_u_u(((((9L < ((*l_181) = ((*l_179) = (safe_div_func_int64_t_s_s(((p_1214->g_178 |= (((*l_176) &= (((p_60 , p_1214->g_164[4][1]) != ((*l_173) = (p_59 != p_59))) | (**p_1214->g_102))) > (-1L))) != 0x7891B7C00FEE9B74L), p_1214->g_83))))) <= p_59) != (*p_1214->g_103)) , 9UL), 11))))) , p_1214->g_174), l_183)) <= (-10L));
                        l_202 |= (((p_60 > ((*l_200) = (((safe_rshift_func_int16_t_s_s(0x2EDBL, (((((*l_179) = ((l_192 = (p_1214->g_30[0][2] , (++(*l_186)))) , ((l_142 != (p_59 , l_193)) ^ (&l_183 == ((safe_sub_func_int32_t_s_s(p_60, ((safe_rshift_func_int8_t_s_s((p_1214->g_180 <= p_59), 1)) > p_1214->g_164[2][5]))) , l_107))))) ^ p_60) <= 65529UL) , (-6L)))) || l_198) < l_199))) ^ p_59) , (**p_1214->g_102));
                        (**p_1214->g_102) = (safe_add_func_uint16_t_u_u(1UL, (l_205 != &p_58)));
                        (*l_205) = &p_59;
                    }
                    for (l_113 = 1; (l_113 <= 5); l_113 += 1)
                    { /* block id: 73 */
                        uint32_t *l_211 = &p_1214->g_180;
                        uint16_t *l_232 = (void*)0;
                        uint16_t *l_233 = &l_230;
                        (*p_1214->g_103) = (safe_mul_func_uint16_t_u_u((((*l_233) = (l_208[6][0][1] | ((((safe_add_func_int8_t_s_s(((*l_105) ^= ((+(p_58 == (l_212 = l_211))) <= (safe_add_func_int32_t_s_s((6L | (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_add_func_int16_t_s_s(p_59, (((safe_mod_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_s((p_59 , p_59), (safe_add_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((p_1214->g_83 ^= ((p_60 , l_229[3]) != &p_1214->g_201)) ^ p_60), l_198)) & l_230), l_231)))) | 0xDE33CD1C29661A5AL), p_1214->g_178)) > p_1214->g_164[2][5]) != 0x99962292L))) & (*p_1214->g_103)) <= p_59), p_59)), 0x7D206CC4AA5344E3L))), 0x02241FD8L)))), 0x1DL)) & p_59) < (*l_64)) & p_1214->g_177))) == p_1214->g_177), l_198));
                        return l_121[l_112];
                    }
                    l_234--;
                }
            }
            l_112 |= (safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((((p_1214->g_180 == (p_59 == (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((-1L) == (safe_unary_minus_func_uint8_t_u((+(((p_1214->g_178 = p_1214->g_177) & ((*l_105) = (((safe_mul_func_int16_t_s_s((((l_248 = p_59) , (safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(p_60, ((safe_div_func_uint8_t_u_u((p_1214->g_83 , (((*l_255) = (void*)0) != ((((safe_mod_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_s(p_59, 12)) >= p_60) , (*l_64)), (-1L))) ^ p_1214->g_83) < p_60) , l_144[0]))), p_59)) , p_60))) <= p_1214->g_261[0]), l_113))) & p_1214->g_30[3][7]), l_113)) & p_60) || 0x66142BF08DCBE901L))) == (*p_1214->g_103)))))), p_1214->g_201)), p_60)))) , 254UL) , p_60) , 0xA197L), p_1214->g_180)), 10));
            for (l_248 = 0; (l_248 > 6); l_248++)
            { /* block id: 91 */
                int8_t l_269 = 0x50L;
                int32_t l_270 = 0L;
                uint64_t l_275 = 0xBF98332E96C87760L;
                int32_t l_278 = 0x6EFE5F60L;
                int32_t l_280 = (-5L);
                int32_t l_281 = 0x48CE0E9AL;
                int32_t l_282 = 0x1151AA0EL;
                int32_t l_283[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
                uint64_t l_284 = 0x34E97EDA3FD96416L;
                int i;
                (*l_64) = (safe_rshift_func_int16_t_s_s(p_1214->g_65, ((&p_1214->g_30[3][0] != ((((void*)0 != l_266) <= p_1214->g_177) , l_144[0])) , (p_1214->g_180 || (safe_unary_minus_func_uint8_t_u((((l_269 = (-1L)) | p_60) < 0L)))))));
                ++l_275;
                ++l_284;
            }
        }
        for (l_248 = 24; (l_248 < (-21)); l_248--)
        { /* block id: 100 */
            return (*p_1214->g_102);
        }
    }
    else
    { /* block id: 103 */
        int32_t *l_289 = (void*)0;
        return l_289;
    }
    return (*p_1214->g_102);
}


/* ------------------------------------------ */
/* 
 * reads : p_1214->g_30 p_1214->g_65
 * writes: p_1214->g_83 p_1214->g_65
 */
int32_t * func_68(int32_t ** p_69, int32_t * p_70, int32_t * p_71, int8_t  p_72, uint8_t  p_73, struct S0 * p_1214)
{ /* block id: 19 */
    uint64_t *l_86 = &p_1214->g_30[0][2];
    int8_t *l_93 = (void*)0;
    int32_t l_94 = 0L;
    int32_t l_100 = 0L;
    int64_t *l_101 = &p_1214->g_83;
    p_1214->g_65 = ((safe_add_func_int16_t_s_s(((void*)0 == l_86), (safe_add_func_int32_t_s_s(0x60F42E90L, ((safe_div_func_int64_t_s_s(((*l_101) = ((safe_sub_func_int8_t_s_s((l_94 = 0x2CL), (0xF3AEL != (p_72 , (safe_lshift_func_int16_t_s_s(((((((void*)0 != l_93) > (safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_s(l_100, 1))))) & (-3L)) >= p_1214->g_30[0][2]) , p_72), p_72)))))) > l_100)), l_100)) <= 1L))))) , p_1214->g_65);
    return &p_1214->g_65;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S0 c_1215;
    struct S0* p_1214 = &c_1215;
    struct S0 c_1216 = {
        {{{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL},{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL}},{{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL},{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL}},{{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL},{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL}},{{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL},{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL}},{{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL},{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL}},{{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL},{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL}},{{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL},{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL}},{{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL},{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL}},{{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL},{18446744073709551609UL,0x4A6F44401D1B9849L,0xC1B6EAB3CF81320FL,0x93E75CB5542AFA01L,1UL}}}, // p_1214->g_13
        0x17C7128AL, // p_1214->g_24
        {{0x673ED13222C7E12FL,0x673ED13222C7E12FL,0xEED050B7F45B6D4FL,2UL,0x5C6A81D68C2AFE24L,2UL,0xEED050B7F45B6D4FL,0x673ED13222C7E12FL,0x673ED13222C7E12FL},{0x673ED13222C7E12FL,0x673ED13222C7E12FL,0xEED050B7F45B6D4FL,2UL,0x5C6A81D68C2AFE24L,2UL,0xEED050B7F45B6D4FL,0x673ED13222C7E12FL,0x673ED13222C7E12FL},{0x673ED13222C7E12FL,0x673ED13222C7E12FL,0xEED050B7F45B6D4FL,2UL,0x5C6A81D68C2AFE24L,2UL,0xEED050B7F45B6D4FL,0x673ED13222C7E12FL,0x673ED13222C7E12FL},{0x673ED13222C7E12FL,0x673ED13222C7E12FL,0xEED050B7F45B6D4FL,2UL,0x5C6A81D68C2AFE24L,2UL,0xEED050B7F45B6D4FL,0x673ED13222C7E12FL,0x673ED13222C7E12FL}}, // p_1214->g_30
        0x1E864ADBL, // p_1214->g_42
        (-6L), // p_1214->g_43
        4L, // p_1214->g_65
        0x33C83373E763FF63L, // p_1214->g_83
        &p_1214->g_65, // p_1214->g_103
        &p_1214->g_103, // p_1214->g_102
        (-10L), // p_1214->g_106
        {{(-5L),9L,0x472062B2L,2L,1L,2L,0x472062B2L},{(-5L),9L,0x472062B2L,2L,1L,2L,0x472062B2L},{(-5L),9L,0x472062B2L,2L,1L,2L,0x472062B2L},{(-5L),9L,0x472062B2L,2L,1L,2L,0x472062B2L},{(-5L),9L,0x472062B2L,2L,1L,2L,0x472062B2L},{(-5L),9L,0x472062B2L,2L,1L,2L,0x472062B2L},{(-5L),9L,0x472062B2L,2L,1L,2L,0x472062B2L},{(-5L),9L,0x472062B2L,2L,1L,2L,0x472062B2L},{(-5L),9L,0x472062B2L,2L,1L,2L,0x472062B2L}}, // p_1214->g_164
        0xE1121B7DL, // p_1214->g_174
        255UL, // p_1214->g_177
        1L, // p_1214->g_178
        0x5B7F529EL, // p_1214->g_180
        4294967295UL, // p_1214->g_182
        0xBA9940DBL, // p_1214->g_187
        {0x445FDDC1L,0x445FDDC1L,0x445FDDC1L,0x445FDDC1L,0x445FDDC1L}, // p_1214->g_191
        0L, // p_1214->g_201
        {0xF5C2DFBD6A78B015L,0xF5C2DFBD6A78B015L,0xF5C2DFBD6A78B015L}, // p_1214->g_261
        0x01E4L, // p_1214->g_267
        &p_1214->g_103, // p_1214->g_291
        &p_1214->g_164[5][0], // p_1214->g_334
        0x64CC13EDL, // p_1214->g_368
        (-6L), // p_1214->g_390
        1L, // p_1214->g_392
        0x224C9806L, // p_1214->g_394
        (void*)0, // p_1214->g_395
        (void*)0, // p_1214->g_396
        &p_1214->g_334, // p_1214->g_397
        0x458813C3L, // p_1214->g_439
        0x20C8L, // p_1214->g_460
        {&p_1214->g_394,&p_1214->g_394,&p_1214->g_394}, // p_1214->g_525
        (void*)0, // p_1214->g_527
        &p_1214->g_103, // p_1214->g_528
        &p_1214->g_103, // p_1214->g_557
        &p_1214->g_392, // p_1214->g_565
        &p_1214->g_565, // p_1214->g_564
        0x645AE664L, // p_1214->g_607
        18446744073709551615UL, // p_1214->g_644
        {{{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644}},{{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644}},{{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644}},{{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644}},{{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644}},{{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644}},{{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644}},{{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644},{(void*)0,(void*)0,&p_1214->g_644}}}, // p_1214->g_643
        &p_1214->g_643[4][5][2], // p_1214->g_642
        &p_1214->g_642, // p_1214->g_641
        (void*)0, // p_1214->g_645
        0UL, // p_1214->g_655
        {{{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L}},{{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L}},{{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L}},{{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L}},{{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L}},{{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L}},{{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L}},{{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L}},{{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L}},{{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L},{0x0D8B63A41344BDE6L}}}, // p_1214->g_657
        (void*)0, // p_1214->g_682
        &p_1214->g_103, // p_1214->g_683
        1L, // p_1214->g_712
        0x0DEBL, // p_1214->g_714
        (void*)0, // p_1214->g_810
        &p_1214->g_106, // p_1214->g_842
        1L, // p_1214->g_872
        1L, // p_1214->g_873
        0L, // p_1214->g_875
        (-1L), // p_1214->g_947
        1UL, // p_1214->g_963
        {&p_1214->g_963,&p_1214->g_963,&p_1214->g_963,&p_1214->g_963,&p_1214->g_963,&p_1214->g_963}, // p_1214->g_962
        &p_1214->g_962[4], // p_1214->g_961
        4294967288UL, // p_1214->g_990
        &p_1214->g_103, // p_1214->g_1001
        &p_1214->g_683, // p_1214->g_1008
        0x05997B37L, // p_1214->g_1056
        4294967287UL, // p_1214->g_1057
        (void*)0, // p_1214->g_1068
        0xE5L, // p_1214->g_1140
        &p_1214->g_1140, // p_1214->g_1139
        (void*)0, // p_1214->g_1199
        4294967295UL, // p_1214->g_1205
    };
    c_1215 = c_1216;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1214);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(p_1214->g_13[i][j][k], "p_1214->g_13[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1214->g_24, "p_1214->g_24", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(p_1214->g_30[i][j], "p_1214->g_30[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1214->g_42, "p_1214->g_42", print_hash_value);
    transparent_crc(p_1214->g_43, "p_1214->g_43", print_hash_value);
    transparent_crc(p_1214->g_65, "p_1214->g_65", print_hash_value);
    transparent_crc(p_1214->g_83, "p_1214->g_83", print_hash_value);
    transparent_crc(p_1214->g_106, "p_1214->g_106", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(p_1214->g_164[i][j], "p_1214->g_164[i][j]", print_hash_value);

        }
    }
    transparent_crc(p_1214->g_174, "p_1214->g_174", print_hash_value);
    transparent_crc(p_1214->g_177, "p_1214->g_177", print_hash_value);
    transparent_crc(p_1214->g_178, "p_1214->g_178", print_hash_value);
    transparent_crc(p_1214->g_180, "p_1214->g_180", print_hash_value);
    transparent_crc(p_1214->g_182, "p_1214->g_182", print_hash_value);
    transparent_crc(p_1214->g_187, "p_1214->g_187", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1214->g_191[i], "p_1214->g_191[i]", print_hash_value);

    }
    transparent_crc(p_1214->g_201, "p_1214->g_201", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(p_1214->g_261[i], "p_1214->g_261[i]", print_hash_value);

    }
    transparent_crc(p_1214->g_267, "p_1214->g_267", print_hash_value);
    transparent_crc(p_1214->g_368, "p_1214->g_368", print_hash_value);
    transparent_crc(p_1214->g_390, "p_1214->g_390", print_hash_value);
    transparent_crc(p_1214->g_392, "p_1214->g_392", print_hash_value);
    transparent_crc(p_1214->g_394, "p_1214->g_394", print_hash_value);
    transparent_crc(p_1214->g_439, "p_1214->g_439", print_hash_value);
    transparent_crc(p_1214->g_460, "p_1214->g_460", print_hash_value);
    transparent_crc(p_1214->g_607, "p_1214->g_607", print_hash_value);
    transparent_crc(p_1214->g_644, "p_1214->g_644", print_hash_value);
    transparent_crc(p_1214->g_655, "p_1214->g_655", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(p_1214->g_657[i][j][k], "p_1214->g_657[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(p_1214->g_712, "p_1214->g_712", print_hash_value);
    transparent_crc(p_1214->g_714, "p_1214->g_714", print_hash_value);
    transparent_crc(p_1214->g_872, "p_1214->g_872", print_hash_value);
    transparent_crc(p_1214->g_873, "p_1214->g_873", print_hash_value);
    transparent_crc(p_1214->g_875, "p_1214->g_875", print_hash_value);
    transparent_crc(p_1214->g_947, "p_1214->g_947", print_hash_value);
    transparent_crc(p_1214->g_963, "p_1214->g_963", print_hash_value);
    transparent_crc(p_1214->g_990, "p_1214->g_990", print_hash_value);
    transparent_crc(p_1214->g_1056, "p_1214->g_1056", print_hash_value);
    transparent_crc(p_1214->g_1057, "p_1214->g_1057", print_hash_value);
    transparent_crc(p_1214->g_1140, "p_1214->g_1140", print_hash_value);
    transparent_crc(p_1214->g_1205, "p_1214->g_1205", print_hash_value);
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
