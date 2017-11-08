// -g 9,46,18 -l 1,2,3
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


// Seed: 3008933081

#include "CLSmith.h"

/* --- Struct/Union Declarations --- */
struct S0 {
   int16_t  f0;
};

union U1 {
   struct S0  f0;
};

struct S2 {
    volatile int32_t g_7;
    uint32_t g_23;
    int32_t g_43;
    uint8_t g_60;
    int32_t g_75;
    uint32_t g_89;
    int32_t *g_94[5][8][3];
    int32_t **g_125[7];
    struct S0 g_132;
    int8_t g_134;
    uint8_t g_139;
    int64_t g_161;
    int32_t g_207;
    uint16_t g_219;
    uint16_t g_222;
    volatile union U1 g_296[9];
    volatile union U1 *g_295;
    uint64_t g_308;
    uint32_t g_329;
    uint64_t g_380[5];
    int64_t g_392;
    int64_t g_428;
    uint32_t *g_448;
    uint32_t **g_447;
    uint32_t **g_449[3];
    int32_t g_452;
    int16_t g_476;
    uint32_t *g_540;
    uint32_t **g_539[7][9];
    union U1 g_585[7];
    volatile uint64_t g_596;
    volatile uint64_t * volatile g_595[7];
    volatile uint64_t * volatile *g_594;
    volatile uint64_t * volatile * volatile *g_593[4][1];
    uint8_t g_613;
    uint8_t g_644;
    volatile int8_t g_693;
    volatile int8_t *g_692;
    volatile int8_t ** volatile g_691;
    volatile int8_t ** volatile g_694[7];
    volatile int8_t **g_695;
    volatile int8_t ** volatile *g_690[6][7][5];
    uint32_t ** volatile *g_732;
    uint32_t ** volatile **g_731;
    uint32_t g_758;
    uint32_t g_802;
    union U1 *g_853;
    union U1 **g_852;
    uint32_t g_947;
    int32_t g_971;
    uint64_t g_1114[9];
    struct S0 * volatile g_1149;
};


/* --- FORWARD DECLARATIONS --- */
int32_t  func_1(struct S2 * p_1158);
uint64_t  func_11(uint8_t  p_12, uint32_t  p_13, struct S2 * p_1158);
uint16_t  func_17(struct S0  p_18, uint32_t  p_19, uint16_t  p_20, union U1  p_21, struct S2 * p_1158);
struct S0  func_24(uint32_t  p_25, struct S0  p_26, struct S2 * p_1158);
uint64_t  func_29(uint32_t  p_30, int32_t  p_31, struct S2 * p_1158);
int32_t * func_32(int16_t  p_33, int64_t  p_34, int32_t * p_35, union U1  p_36, int32_t * p_37, struct S2 * p_1158);
int64_t  func_39(int32_t * p_40, int32_t * p_41, struct S2 * p_1158);
int32_t * func_44(int32_t * p_45, struct S2 * p_1158);
int32_t * func_46(int32_t * p_47, uint64_t  p_48, int32_t * p_49, int32_t * p_50, struct S2 * p_1158);
int32_t * func_51(int32_t * p_52, int32_t * p_53, struct S2 * p_1158);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : p_1158->g_7 p_1158->g_23 p_1158->g_60 p_1158->g_43 p_1158->g_75 p_1158->g_89 p_1158->g_94 p_1158->g_134 p_1158->g_139 p_1158->g_161 p_1158->g_308 p_1158->g_132.f0 p_1158->g_329 p_1158->g_207 p_1158->g_132 p_1158->g_222 p_1158->g_219 p_1158->g_392 p_1158->g_448 p_1158->g_295 p_1158->g_380 p_1158->g_476 p_1158->g_539 p_1158->g_452 p_1158->g_1114 p_1158->g_758 p_1158->g_644 p_1158->g_585.f0.f0 p_1158->g_1149
 * writes: p_1158->g_60 p_1158->g_23 p_1158->g_43 p_1158->g_75 p_1158->g_89 p_1158->g_94 p_1158->g_125 p_1158->g_134 p_1158->g_139 p_1158->g_161 p_1158->g_132 p_1158->g_329 p_1158->g_380 p_1158->g_207 p_1158->g_222 p_1158->g_447 p_1158->g_449 p_1158->g_295 p_1158->g_392 p_1158->g_476 p_1158->g_219 p_1158->g_308 p_1158->g_428 p_1158->g_1114 p_1158->g_452 p_1158->g_585.f0 p_1158->g_644 p_1158->g_596
 */
int32_t  func_1(struct S2 * p_1158)
{ /* block id: 4 */
    uint8_t l_4 = 255UL;
    struct S0 l_22 = {0x27F4L};
    uint64_t *l_556 = (void*)0;
    int64_t l_557 = 0x6BEC2AEBECDA86C9L;
    union U1 l_1105 = {{0x275BL}};
    uint64_t *l_1113[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t *l_1157 = &p_1158->g_75;
    int i;
    (*l_1157) = (safe_rshift_func_uint8_t_u_s(l_4, (((safe_rshift_func_int8_t_s_u((((p_1158->g_7 && (safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_uint64_t_u(func_11(((p_1158->g_7 == ((!(safe_unary_minus_func_uint64_t_u((p_1158->g_1114[7] |= (safe_rshift_func_int16_t_s_u((func_17(l_22, (p_1158->g_23 || (func_24(((((safe_div_func_uint64_t_u_u(func_29(p_1158->g_23, l_22.f0, p_1158), (l_557 = (p_1158->g_452 , l_4)))) ^ p_1158->g_452) < 0xA8B2L) < l_22.f0), l_22, p_1158) , l_22.f0)), l_4, l_1105, p_1158) & l_22.f0), 4)))))) != p_1158->g_758)) || l_4), p_1158->g_644, p_1158))) & l_22.f0), l_22.f0))) , l_557) ^ l_4), l_1105.f0.f0)) != l_1105.f0.f0) <= 0xE905L)));
    return (*l_1157);
}


/* ------------------------------------------ */
/* 
 * reads : p_1158->g_43 p_1158->g_161 p_1158->g_452 p_1158->g_585.f0.f0 p_1158->g_1149 p_1158->g_644
 * writes: p_1158->g_380 p_1158->g_1114 p_1158->g_132.f0 p_1158->g_452 p_1158->g_134 p_1158->g_585.f0 p_1158->g_644 p_1158->g_43 p_1158->g_596 p_1158->g_94
 */
uint64_t  func_11(uint8_t  p_12, uint32_t  p_13, struct S2 * p_1158)
{ /* block id: 574 */
    uint32_t l_1127 = 4294967288UL;
    int32_t l_1130 = 0x0779302BL;
    uint64_t *l_1131 = &p_1158->g_380[2];
    uint64_t *l_1132 = &p_1158->g_1114[0];
    int16_t *l_1135 = &p_1158->g_132.f0;
    uint32_t *l_1136[10];
    int32_t *l_1140 = (void*)0;
    int32_t *l_1141 = (void*)0;
    int32_t *l_1142 = &p_1158->g_452;
    int8_t *l_1143 = &p_1158->g_134;
    uint16_t l_1144 = 0x3DC1L;
    uint64_t l_1145 = 0x17CB439256F3EE46L;
    uint16_t *l_1146 = &l_1144;
    int8_t l_1147 = 0x4DL;
    int i;
    for (i = 0; i < 10; i++)
        l_1136[i] = &p_1158->g_802;
    if ((p_13 ^ (((safe_mul_func_uint16_t_u_u(((*l_1146) = (((safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((p_13 , ((safe_lshift_func_int8_t_s_s(((*l_1143) = (((((safe_div_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((--l_1127), ((((*l_1132) = ((*l_1131) = l_1130)) || p_1158->g_43) <= ((*l_1142) &= (((((safe_rshift_func_int16_t_s_u(((*l_1135) = p_1158->g_161), 2)) , ((void*)0 != l_1136[0])) <= ((safe_unary_minus_func_int16_t_s(((safe_sub_func_int8_t_s_s((p_13 <= p_12), l_1130)) == p_13))) >= l_1130)) < 1UL) >= 8UL))))), p_1158->g_585[1].f0.f0)) ^ 0x5A1BL) > 0x1B5D42C0L) | p_13) < p_13)), 3)) ^ l_1144)), p_1158->g_161)) || p_13), p_1158->g_161)) == l_1145) <= p_13)), (-2L))) <= l_1147) && 0x60L)))
    { /* block id: 582 */
        struct S0 l_1148 = {-8L};
        (*p_1158->g_1149) = l_1148;
    }
    else
    { /* block id: 584 */
        int32_t *l_1154 = (void*)0;
        int32_t **l_1155 = &p_1158->g_94[0][3][2];
        int32_t **l_1156 = &l_1140;
        for (p_1158->g_452 = 0; (p_1158->g_452 <= 9); p_1158->g_452 += 1)
        { /* block id: 587 */
            if (p_13)
                break;
        }
        (*l_1142) = (-7L);
        for (p_1158->g_644 = (-23); (p_1158->g_644 <= 42); p_1158->g_644 = safe_add_func_int8_t_s_s(p_1158->g_644, 1))
        { /* block id: 593 */
            for (p_1158->g_43 = 29; (p_1158->g_43 <= 23); p_1158->g_43--)
            { /* block id: 596 */
                if (p_13)
                    break;
                for (l_1127 = 0; l_1127 < 5; l_1127 += 1)
                {
                    for (p_12 = 0; p_12 < 8; p_12 += 1)
                    {
                        for (p_1158->g_596 = 0; p_1158->g_596 < 3; p_1158->g_596 += 1)
                        {
                            p_1158->g_94[l_1127][p_12][p_1158->g_596] = (void*)0;
                        }
                    }
                }
            }
        }
        (*l_1156) = ((*l_1155) = l_1154);
    }
    return p_13;
}


/* ------------------------------------------ */
/* 
 * reads : p_1158->g_43 p_1158->g_219
 * writes: p_1158->g_43
 */
uint16_t  func_17(struct S0  p_18, uint32_t  p_19, uint16_t  p_20, union U1  p_21, struct S2 * p_1158)
{ /* block id: 569 */
    int32_t *l_1106 = (void*)0;
    int32_t *l_1107 = (void*)0;
    int32_t *l_1108 = &p_1158->g_43;
    int32_t *l_1109[6] = {&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75};
    uint64_t l_1110 = 0x3C4E9D110AE883E0L;
    int i;
    ++l_1110;
    (*l_1108) |= 0x758E2925L;
    return p_1158->g_219;
}


/* ------------------------------------------ */
/* 
 * reads :
 * writes:
 */
struct S0  func_24(uint32_t  p_25, struct S0  p_26, struct S2 * p_1158)
{ /* block id: 320 */
    int8_t l_558 = 0L;
    uint32_t ***l_559 = (void*)0;
    union U1 *l_584 = &p_1158->g_585[1];
    int32_t l_588 = 0x0B365CF2L;
    int32_t *l_590 = (void*)0;
    int32_t **l_615 = &p_1158->g_94[1][6][2];
    int32_t l_616 = 1L;
    uint64_t **l_620 = (void*)0;
    uint64_t ***l_619 = &l_620;
    int32_t l_641 = 0x46F00460L;
    int32_t l_642 = (-5L);
    int32_t l_643 = 0L;
    int64_t *l_667[7] = {&p_1158->g_161,&p_1158->g_161,&p_1158->g_161,&p_1158->g_161,&p_1158->g_161,&p_1158->g_161,&p_1158->g_161};
    uint16_t l_674 = 65531UL;
    int8_t *l_698 = &l_558;
    int8_t **l_697[10];
    int8_t ***l_696 = &l_697[8];
    uint32_t **l_733 = &p_1158->g_448;
    int32_t l_757 = 0x48C4E313L;
    uint32_t l_795 = 0xC4AC6582L;
    uint8_t l_878[3][7] = {{0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL},{0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL},{0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL,0x0CL}};
    int32_t l_967 = 0x2FB0AA41L;
    int32_t l_968 = 0x1E1D4A8BL;
    int32_t l_975 = (-1L);
    int32_t l_976[2][8][9] = {{{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL},{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL},{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL},{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL},{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL},{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL},{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL},{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL}},{{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL},{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL},{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL},{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL},{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL},{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL},{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL},{0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL,0x7EA2469CL}}};
    uint32_t l_1101[4][2];
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_697[i] = &l_698;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
            l_1101[i][j] = 0x7E3F4778L;
    }
    return p_26;
}


/* ------------------------------------------ */
/* 
 * reads : p_1158->g_60 p_1158->g_23 p_1158->g_43 p_1158->g_75 p_1158->g_89 p_1158->g_94 p_1158->g_134 p_1158->g_139 p_1158->g_161 p_1158->g_308 p_1158->g_132.f0 p_1158->g_329 p_1158->g_207 p_1158->g_132 p_1158->g_222 p_1158->g_219 p_1158->g_392 p_1158->g_448 p_1158->g_295 p_1158->g_380 p_1158->g_476 p_1158->g_539
 * writes: p_1158->g_60 p_1158->g_23 p_1158->g_43 p_1158->g_75 p_1158->g_89 p_1158->g_94 p_1158->g_125 p_1158->g_134 p_1158->g_139 p_1158->g_161 p_1158->g_132 p_1158->g_329 p_1158->g_380 p_1158->g_207 p_1158->g_222 p_1158->g_447 p_1158->g_449 p_1158->g_295 p_1158->g_392 p_1158->g_476 p_1158->g_219 p_1158->g_308 p_1158->g_428
 */
uint64_t  func_29(uint32_t  p_30, int32_t  p_31, struct S2 * p_1158)
{ /* block id: 5 */
    int64_t l_38[4];
    int32_t *l_42 = &p_1158->g_43;
    int32_t *l_54 = &p_1158->g_43;
    int32_t *l_64 = (void*)0;
    int32_t **l_63 = &l_64;
    union U1 l_450[6] = {{{0x76E0L}},{{0x04CCL}},{{0x76E0L}},{{0x76E0L}},{{0x04CCL}},{{0x76E0L}}};
    int32_t *l_451[9][10][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
    struct S0 *l_551[2];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_38[i] = 0x54E2095E04A276ACL;
    for (i = 0; i < 2; i++)
        l_551[i] = &l_450[4].f0;
    (*l_63) = func_32(l_38[2], func_39(l_42, func_44(func_46(func_51(l_54, l_42, p_1158), p_1158->g_23, l_54, ((*l_63) = &p_1158->g_43), p_1158), p_1158), p_1158), p_1158->g_448, l_450[4], l_451[0][3][0], p_1158);
    (*l_63) = (*l_63);
    (*l_63) = (((safe_div_func_int32_t_s_s((((safe_mul_func_int8_t_s_s((l_450[2] , (-1L)), (l_551[1] != (p_30 , &p_1158->g_132)))) , (safe_add_func_int16_t_s_s(p_30, p_1158->g_219))) || (+18446744073709551609UL)), (safe_sub_func_uint64_t_u_u(p_31, 18446744073709551606UL)))) , (*l_42)) , (void*)0);
    (*l_63) = (*l_63);
    return p_1158->g_308;
}


/* ------------------------------------------ */
/* 
 * reads : p_1158->g_295 p_1158->g_222 p_1158->g_392 p_1158->g_139 p_1158->g_380 p_1158->g_75 p_1158->g_329 p_1158->g_132.f0 p_1158->g_134 p_1158->g_476 p_1158->g_207 p_1158->g_43 p_1158->g_219 p_1158->g_308 p_1158->g_539 p_1158->g_448
 * writes: p_1158->g_295 p_1158->g_222 p_1158->g_94 p_1158->g_392 p_1158->g_139 p_1158->g_476 p_1158->g_329 p_1158->g_207 p_1158->g_89 p_1158->g_161 p_1158->g_219 p_1158->g_132.f0 p_1158->g_134 p_1158->g_308 p_1158->g_428 p_1158->g_43
 */
int32_t * func_32(int16_t  p_33, int64_t  p_34, int32_t * p_35, union U1  p_36, int32_t * p_37, struct S2 * p_1158)
{ /* block id: 241 */
    volatile union U1 **l_453 = &p_1158->g_295;
    int32_t *l_457[1];
    int32_t ***l_478[9] = {&p_1158->g_125[6],&p_1158->g_125[6],&p_1158->g_125[6],&p_1158->g_125[6],&p_1158->g_125[6],&p_1158->g_125[6],&p_1158->g_125[6],&p_1158->g_125[6],&p_1158->g_125[6]};
    struct S0 *l_488[7][10][1] = {{{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132}},{{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132}},{{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132}},{{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132}},{{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132}},{{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132}},{{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132},{&p_1158->g_132}}};
    int16_t *l_503 = &p_1158->g_132.f0;
    int32_t *l_532[3][3] = {{&p_1158->g_75,&p_1158->g_75,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_75,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_75,&p_1158->g_75}};
    int32_t *l_534 = &p_1158->g_43;
    int32_t *l_535 = &p_1158->g_43;
    uint32_t **l_541 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_457[i] = &p_1158->g_75;
    (*l_453) = p_1158->g_295;
    for (p_1158->g_222 = 22; (p_1158->g_222 > 38); p_1158->g_222 = safe_add_func_int8_t_s_s(p_1158->g_222, 8))
    { /* block id: 245 */
        int32_t l_456[2][7] = {{0x059B9E4EL,0x3A980C78L,0x059B9E4EL,0x059B9E4EL,0x3A980C78L,0x059B9E4EL,0x059B9E4EL},{0x059B9E4EL,0x3A980C78L,0x059B9E4EL,0x059B9E4EL,0x3A980C78L,0x059B9E4EL,0x059B9E4EL}};
        int32_t l_474 = 7L;
        uint64_t *l_499 = (void*)0;
        uint64_t **l_498 = &l_499;
        uint64_t ***l_497 = &l_498;
        int32_t *l_504 = &p_1158->g_43;
        uint32_t l_529 = 3UL;
        int32_t *l_533 = (void*)0;
        int i, j;
        if (l_456[0][6])
        { /* block id: 246 */
            int32_t **l_458 = &p_1158->g_94[2][6][1];
            (*l_458) = l_457[0];
        }
        else
        { /* block id: 248 */
            uint32_t l_471 = 4294967291UL;
            int32_t l_472[10] = {0x2AC313E8L,0x2AC313E8L,0x2AC313E8L,0x2AC313E8L,0x2AC313E8L,0x2AC313E8L,0x2AC313E8L,0x2AC313E8L,0x2AC313E8L,0x2AC313E8L};
            int64_t l_477 = 1L;
            struct S0 *l_483 = (void*)0;
            uint32_t ***l_494[3];
            int32_t l_496 = 1L;
            int i;
            for (i = 0; i < 3; i++)
                l_494[i] = &p_1158->g_447;
            for (p_1158->g_392 = (-16); (p_1158->g_392 < 23); p_1158->g_392++)
            { /* block id: 251 */
                struct S0 *l_490 = (void*)0;
                struct S0 **l_489 = &l_490;
                int16_t *l_491 = &p_1158->g_476;
                int32_t l_495 = 3L;
                for (p_1158->g_139 = 0; (p_1158->g_139 <= 0); p_1158->g_139 += 1)
                { /* block id: 254 */
                    uint16_t *l_473[3][5][10] = {{{&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222,&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222},{&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222,&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222},{&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222,&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222},{&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222,&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222},{&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222,&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222}},{{&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222,&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222},{&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222,&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222},{&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222,&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222},{&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222,&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222},{&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222,&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222}},{{&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222,&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222},{&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222,&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222},{&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222,&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222},{&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222,&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222},{&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222,&p_1158->g_222,&p_1158->g_219,&p_1158->g_219,&p_1158->g_219,&p_1158->g_222}}};
                    int16_t *l_475 = &p_1158->g_476;
                    int i, j, k;
                    l_477 &= (safe_add_func_int8_t_s_s(((((*l_475) |= (((safe_add_func_uint16_t_u_u((p_1158->g_380[2] , (l_474 = ((((p_1158->g_380[1] , (void*)0) == (void*)0) || 0L) || (l_472[7] |= ((p_1158->g_75 != (safe_add_func_uint32_t_u_u(((+(safe_add_func_uint32_t_u_u(((((safe_add_func_uint16_t_u_u((((l_457[p_1158->g_139] == (p_36.f0.f0 , p_37)) & p_33) < 9L), 3L)) >= p_1158->g_75) == 1UL) & p_1158->g_222), (*p_35)))) , l_471), 0x673BBA9BL))) | p_1158->g_132.f0))))), p_1158->g_75)) != p_33) , p_1158->g_134)) == 1UL) , p_1158->g_207), 0L));
                    if ((*p_35))
                        break;
                    (*p_35) = (l_478[3] != &p_1158->g_125[1]);
                    p_1158->g_295 = (*l_453);
                }
                l_474 = ((*p_35) = (safe_div_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((((void*)0 == l_483) & (l_472[7] , ((*l_491) = (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((*p_35), 0x7DD6E760L)), (l_488[3][2][0] != ((*l_489) = &p_1158->g_132))))))), ((safe_rshift_func_uint8_t_u_u((((void*)0 == l_494[1]) != l_495), l_472[4])) , 0xCAL))), l_471)));
                l_496 = 2L;
            }
        }
        (*l_497) = (void*)0;
        for (p_1158->g_207 = 0; (p_1158->g_207 >= 0); p_1158->g_207 -= 1)
        { /* block id: 273 */
            uint32_t l_506 = 0xF761D017L;
            int32_t l_524 = 1L;
            int32_t l_527 = 0x6D088349L;
            int32_t l_528 = 0x784508EAL;
            for (p_1158->g_89 = 0; (p_1158->g_89 <= 8); p_1158->g_89 += 1)
            { /* block id: 276 */
                int32_t l_500 = 0L;
                uint16_t *l_511 = &p_1158->g_219;
                uint64_t *l_516 = &p_1158->g_308;
                int8_t *l_519 = &p_1158->g_134;
                int16_t *l_525 = &p_1158->g_476;
                int32_t l_526 = 0x41D7BE42L;
                int i;
                (*p_35) = (l_500 | (safe_rshift_func_uint8_t_u_u(((void*)0 != l_503), (p_33 || p_33))));
                for (p_1158->g_161 = 8; (p_1158->g_161 >= 0); p_1158->g_161 -= 1)
                { /* block id: 280 */
                    int32_t l_505 = 0L;
                    int i;
                    l_504 = l_457[p_1158->g_207];
                    for (p_33 = 0; (p_33 >= 0); p_33 -= 1)
                    { /* block id: 284 */
                        return p_37;
                    }
                    l_506++;
                }
                (*p_35) |= ((safe_mod_func_uint16_t_u_u((*l_504), ((*l_511)++))) != (((*l_503) |= (*l_504)) ^ (((((*l_525) ^= ((8UL ^ ((void*)0 != l_516)) ^ (((safe_sub_func_int8_t_s_s(p_33, ((*l_519) &= p_34))) & (safe_add_func_uint64_t_u_u((safe_add_func_int32_t_s_s((l_524 ^= (*l_504)), (p_34 == p_36.f0.f0))), (-1L)))) < p_34))) || p_1158->g_392) || 0x16L) <= l_526)));
                if ((*p_35))
                    continue;
            }
            l_529++;
        }
        l_535 = l_534;
    }
    for (p_1158->g_308 = 0; (p_1158->g_308 == 35); p_1158->g_308++)
    { /* block id: 303 */
        uint32_t **l_542[10] = {&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540};
        int64_t *l_543 = &p_1158->g_428;
        int32_t l_544 = (-4L);
        int i;
        for (p_1158->g_89 = 1; (p_1158->g_89 <= 8); p_1158->g_89 += 1)
        { /* block id: 306 */
            int32_t *l_538[2][3] = {{&p_1158->g_75,&p_1158->g_452,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_452,&p_1158->g_75}};
            int i, j;
            return l_538[1][0];
        }
        (*l_535) |= ((((l_541 = p_1158->g_539[1][0]) != l_542[3]) | ((*l_543) = (p_34 | (p_36.f0.f0 <= (*p_1158->g_448))))) != (&p_1158->g_161 != (((p_1158->g_132.f0 <= l_544) , (safe_add_func_uint8_t_u_u(0UL, p_1158->g_132.f0))) , (void*)0)));
    }
    return p_37;
}


/* ------------------------------------------ */
/* 
 * reads : p_1158->g_132 p_1158->g_222
 * writes: p_1158->g_447 p_1158->g_449
 */
int64_t  func_39(int32_t * p_40, int32_t * p_41, struct S2 * p_1158)
{ /* block id: 236 */
    struct S0 l_443 = {0x4E0CL};
    uint32_t *l_445 = &p_1158->g_23;
    uint32_t **l_444[7][6] = {{(void*)0,(void*)0,&l_445,&l_445,&l_445,&l_445},{(void*)0,(void*)0,&l_445,&l_445,&l_445,&l_445},{(void*)0,(void*)0,&l_445,&l_445,&l_445,&l_445},{(void*)0,(void*)0,&l_445,&l_445,&l_445,&l_445},{(void*)0,(void*)0,&l_445,&l_445,&l_445,&l_445},{(void*)0,(void*)0,&l_445,&l_445,&l_445,&l_445},{(void*)0,(void*)0,&l_445,&l_445,&l_445,&l_445}};
    uint32_t ***l_446[2][3] = {{&l_444[3][3],&l_444[3][3],&l_444[3][3]},{&l_444[3][3],&l_444[3][3],&l_444[3][3]}};
    int i, j;
    l_443 = p_1158->g_132;
    p_1158->g_449[1] = (p_1158->g_447 = l_444[4][5]);
    return p_1158->g_222;
}


/* ------------------------------------------ */
/* 
 * reads : p_1158->g_132.f0 p_1158->g_139 p_1158->g_134 p_1158->g_222 p_1158->g_43 p_1158->g_75
 * writes: p_1158->g_132.f0 p_1158->g_139 p_1158->g_134 p_1158->g_222 p_1158->g_43
 */
int32_t * func_44(int32_t * p_45, struct S2 * p_1158)
{ /* block id: 212 */
    int32_t *l_442 = &p_1158->g_75;
    for (p_1158->g_132.f0 = 0; (p_1158->g_132.f0 != 23); ++p_1158->g_132.f0)
    { /* block id: 215 */
        int32_t *l_440 = &p_1158->g_75;
        int32_t **l_441 = &l_440;
        for (p_1158->g_139 = 0; (p_1158->g_139 <= 2); p_1158->g_139 += 1)
        { /* block id: 218 */
            int32_t *l_439 = &p_1158->g_75;
            for (p_1158->g_134 = 6; (p_1158->g_134 >= 0); p_1158->g_134 -= 1)
            { /* block id: 221 */
                for (p_1158->g_222 = 0; (p_1158->g_222 <= 2); p_1158->g_222 += 1)
                { /* block id: 224 */
                    (*p_45) = (safe_mul_func_int8_t_s_s(0L, (-1L)));
                }
            }
            return l_439;
        }
        (*l_441) = l_440;
        (*l_441) = l_442;
        if ((*p_45))
            break;
    }
    (*p_45) ^= (*l_442);
    return l_442;
}


/* ------------------------------------------ */
/* 
 * reads : p_1158->g_23 p_1158->g_43 p_1158->g_75 p_1158->g_89 p_1158->g_60 p_1158->g_94 p_1158->g_134 p_1158->g_139 p_1158->g_161 p_1158->g_308 p_1158->g_132.f0 p_1158->g_329 p_1158->g_207 p_1158->g_132 p_1158->g_222 p_1158->g_219 p_1158->g_392
 * writes: p_1158->g_23 p_1158->g_60 p_1158->g_43 p_1158->g_75 p_1158->g_89 p_1158->g_94 p_1158->g_125 p_1158->g_134 p_1158->g_139 p_1158->g_161 p_1158->g_132 p_1158->g_329 p_1158->g_380 p_1158->g_207
 */
int32_t * func_46(int32_t * p_47, uint64_t  p_48, int32_t * p_49, int32_t * p_50, struct S2 * p_1158)
{ /* block id: 10 */
    int32_t *l_80 = &p_1158->g_43;
    struct S0 *l_131 = &p_1158->g_132;
    int64_t l_162[1];
    int32_t *l_181[2][8][10] = {{{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0},{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0},{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0},{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0},{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0},{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0},{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0},{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0}},{{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0},{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0},{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0},{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0},{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0},{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0},{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0},{&p_1158->g_43,&p_1158->g_43,&p_1158->g_75,&p_1158->g_75,&p_1158->g_43,&p_1158->g_75,(void*)0,(void*)0,&p_1158->g_43,(void*)0}}};
    int32_t ***l_318 = (void*)0;
    int32_t *l_362 = &p_1158->g_43;
    int32_t *l_381 = (void*)0;
    int64_t *l_426 = &p_1158->g_161;
    uint64_t l_431 = 1UL;
    int32_t *l_434 = &p_1158->g_43;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_162[i] = 0x4820DCB60842E3BEL;
    for (p_1158->g_23 = 0; (p_1158->g_23 != 50); p_1158->g_23 = safe_add_func_uint64_t_u_u(p_1158->g_23, 1))
    { /* block id: 13 */
        uint32_t l_114[9] = {0xC57991EEL,0xC57991EEL,0xC57991EEL,0xC57991EEL,0xC57991EEL,0xC57991EEL,0xC57991EEL,0xC57991EEL,0xC57991EEL};
        struct S0 l_133 = {-2L};
        int32_t l_142[7][7][1] = {{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}},{{0L},{0L},{0L},{0L},{0L},{0L},{0L}}};
        uint8_t l_201 = 0x67L;
        union U1 l_205 = {{-1L}};
        uint8_t l_355[1];
        int32_t **l_388 = (void*)0;
        int32_t **l_389 = &l_181[1][0][0];
        int32_t *l_390 = &l_142[2][2][0];
        int32_t **l_391 = &p_1158->g_94[2][6][1];
        int16_t *l_393 = &l_205.f0.f0;
        int32_t l_418 = 0x3C647758L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_355[i] = 253UL;
        for (p_1158->g_60 = 0; (p_1158->g_60 >= 51); p_1158->g_60 = safe_add_func_uint8_t_u_u(p_1158->g_60, 8))
        { /* block id: 16 */
            struct S0 l_78 = {-7L};
            int32_t l_117 = 2L;
            int32_t l_126 = 0x31537F14L;
            struct S0 *l_140 = (void*)0;
            union U1 l_243 = {{-8L}};
            uint32_t *l_270 = &p_1158->g_89;
            uint8_t l_304 = 255UL;
            int32_t ***l_313 = &p_1158->g_125[6];
            uint32_t l_357 = 4294967289UL;
            for (p_1158->g_43 = 0; (p_1158->g_43 == (-26)); --p_1158->g_43)
            { /* block id: 19 */
                int32_t **l_123 = &p_1158->g_94[3][2][0];
                int32_t l_141[7][9][1] = {{{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L}},{{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L}},{{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L}},{{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L}},{{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L}},{{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L}},{{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L},{0x7D718789L}}};
                int i, j, k;
                for (p_48 = (-3); (p_48 >= 9); p_48 = safe_add_func_uint64_t_u_u(p_48, 8))
                { /* block id: 22 */
                    uint8_t l_73 = 0xD6L;
                    int32_t *l_74 = &p_1158->g_75;
                    (*l_74) = (((void*)0 == &p_50) && l_73);
                    for (p_1158->g_75 = 0; (p_1158->g_75 < (-2)); p_1158->g_75 = safe_sub_func_uint8_t_u_u(p_1158->g_75, 8))
                    { /* block id: 26 */
                        int32_t l_79 = 0x1DE2FC23L;
                        int32_t **l_81 = &l_80;
                        struct S0 *l_82 = &l_78;
                        l_78 = l_78;
                        if (l_79)
                            continue;
                        (*l_81) = l_80;
                        (*l_82) = l_78;
                    }
                    for (p_1158->g_75 = 0; (p_1158->g_75 == 21); p_1158->g_75 = safe_add_func_uint8_t_u_u(p_1158->g_75, 9))
                    { /* block id: 34 */
                        p_1158->g_89 = (p_1158->g_43 >= (p_1158->g_75 ^ (safe_sub_func_uint16_t_u_u(65535UL, (safe_rshift_func_uint16_t_u_s(0x5D11L, 9))))));
                    }
                    if ((p_48 , ((*l_74) = (18446744073709551614UL > (-5L)))))
                    { /* block id: 38 */
                        int32_t *l_90 = &p_1158->g_43;
                        int32_t **l_91[3][7] = {{&l_74,&l_74,&l_74,&l_74,&l_74,&l_74,&l_74},{&l_74,&l_74,&l_74,&l_74,&l_74,&l_74,&l_74},{&l_74,&l_74,&l_74,&l_74,&l_74,&l_74,&l_74}};
                        int i, j;
                        p_49 = l_90;
                        (*l_74) = (*l_80);
                    }
                    else
                    { /* block id: 41 */
                        int32_t **l_92 = (void*)0;
                        int32_t **l_93 = &l_74;
                        int32_t **l_95 = &l_80;
                        (*l_95) = (p_1158->g_94[2][6][1] = ((*l_93) = &p_1158->g_43));
                    }
                }
                for (l_78.f0 = 0; l_78.f0 < 5; l_78.f0 += 1)
                {
                    for (p_1158->g_75 = 0; p_1158->g_75 < 8; p_1158->g_75 += 1)
                    {
                        for (p_1158->g_89 = 0; p_1158->g_89 < 3; p_1158->g_89 += 1)
                        {
                            p_1158->g_94[l_78.f0][p_1158->g_75][p_1158->g_89] = (void*)0;
                        }
                    }
                }
                for (l_78.f0 = 0; (l_78.f0 < (-15)); l_78.f0--)
                { /* block id: 50 */
                    int64_t l_143[4][7][7] = {{{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L}},{{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L}},{{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L}},{{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L},{0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L,0x5D631B42A304AAC6L}}};
                    int64_t *l_160 = &p_1158->g_161;
                    int i, j, k;
                    for (p_48 = 0; (p_48 == 58); p_48 = safe_add_func_uint64_t_u_u(p_48, 7))
                    { /* block id: 53 */
                        int32_t *l_115 = (void*)0;
                        int32_t *l_116 = (void*)0;
                        l_117 |= (safe_mul_func_int8_t_s_s((p_1158->g_75 != 0x64L), ((!0L) != (((safe_lshift_func_int16_t_s_u(0L, ((safe_lshift_func_int16_t_s_u(p_48, 2)) >= (safe_sub_func_int64_t_s_s((((safe_div_func_int32_t_s_s((((void*)0 != l_80) ^ 0x44L), (safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((-1L), 0x0EL)), 3)))) <= 0x4D5F09706B0045B3L) || p_48), p_1158->g_75))))) , l_114[8]) || p_48))));
                    }
                    for (l_117 = 0; (l_117 <= 17); l_117++)
                    { /* block id: 58 */
                        struct S0 *l_122 = &l_78;
                        int32_t ***l_124[3][7][2] = {{{&l_123,&l_123},{&l_123,&l_123},{&l_123,&l_123},{&l_123,&l_123},{&l_123,&l_123},{&l_123,&l_123},{&l_123,&l_123}},{{&l_123,&l_123},{&l_123,&l_123},{&l_123,&l_123},{&l_123,&l_123},{&l_123,&l_123},{&l_123,&l_123},{&l_123,&l_123}},{{&l_123,&l_123},{&l_123,&l_123},{&l_123,&l_123},{&l_123,&l_123},{&l_123,&l_123},{&l_123,&l_123},{&l_123,&l_123}}};
                        uint8_t *l_137 = (void*)0;
                        uint8_t *l_138 = &p_1158->g_139;
                        int i, j, k;
                        l_126 &= (~((((safe_mod_func_int64_t_s_s((((0UL & ((-2L) ^ ((void*)0 == l_122))) <= ((((p_48 , ((p_1158->g_125[1] = l_123) != &p_50)) && (((((0x0EE3L & p_1158->g_89) & 0x47DCL) && p_48) | p_48) || (*p_50))) , 1L) != 0L)) ^ p_1158->g_60), 0x0BAEE16EA25DA633L)) ^ p_1158->g_23) || p_48) ^ p_1158->g_43));
                        l_141[3][4][0] = (p_48 <= ((((*l_138) |= (safe_mul_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((l_131 != (void*)0) > p_1158->g_60), ((p_1158->g_134 &= ((l_133 , (*l_123)) == p_47)) || (safe_div_func_int32_t_s_s((*p_49), l_114[8]))))), (*l_80)))) , (void*)0) != l_140));
                        l_142[2][2][0] |= (*p_50);
                    }
                    l_143[0][2][6] &= (*p_50);
                    l_142[2][2][0] = ((safe_rshift_func_int8_t_s_u(0L, 0)) | (safe_div_func_int16_t_s_s((safe_add_func_uint16_t_u_u(p_48, (((p_48 <= (safe_lshift_func_int16_t_s_u((p_48 ^ (safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(((-1L) & ((((safe_add_func_int16_t_s_s(p_1158->g_43, l_143[0][2][6])) ^ (*l_80)) && ((((safe_add_func_int64_t_s_s(((*l_160) ^= (((((&p_1158->g_132 != &p_1158->g_132) == l_143[2][6][1]) | p_48) || p_48) | 0L)), 1UL)) < (-1L)) || l_141[5][6][0]) , l_162[0])) , l_126)), l_143[0][2][6])) & l_114[8]), p_48))), 8))) > 4UL) , p_1158->g_139))), 65535UL)));
                }
            }
            for (l_117 = 2; (l_117 >= 0); l_117 -= 1)
            { /* block id: 73 */
                int8_t l_167 = 1L;
                int32_t l_200[7];
                int32_t **l_204 = &l_181[0][3][9];
                uint32_t *l_272 = (void*)0;
                union U1 *l_279 = &l_243;
                uint32_t l_301 = 9UL;
                int32_t *l_319 = (void*)0;
                int i;
                for (i = 0; i < 7; i++)
                    l_200[i] = 0x59CB87FCL;
                (1 + 1);
            }
            if (((*p_50) ^= (-1L)))
            { /* block id: 135 */
                int32_t ***l_322[6][3][10] = {{{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0},{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0},{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0}},{{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0},{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0},{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0}},{{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0},{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0},{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0}},{{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0},{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0},{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0}},{{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0},{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0},{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0}},{{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0},{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0},{(void*)0,&p_1158->g_125[4],&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0,&p_1158->g_125[1],&p_1158->g_125[1],&p_1158->g_125[1],(void*)0}}};
                struct S0 l_323 = {4L};
                int i, j, k;
                for (l_117 = 12; (l_117 == 15); l_117 = safe_add_func_uint64_t_u_u(l_117, 8))
                { /* block id: 138 */
                    uint16_t l_327 = 1UL;
                    uint32_t *l_328 = &p_1158->g_329;
                    l_205.f0 = ((*l_131) = ((l_322[2][2][8] == (void*)0) , l_323));
                    for (l_201 = 17; (l_201 == 47); ++l_201)
                    { /* block id: 143 */
                        int16_t l_326 = 0x6F93L;
                        if (l_326)
                            break;
                        if ((*p_50))
                            continue;
                    }
                    if ((0x4A89D1C7L >= ((*l_328) = l_327)))
                    { /* block id: 148 */
                        uint64_t l_330 = 1UL;
                        int32_t *l_333 = &l_142[2][2][0];
                        int16_t *l_354 = &l_133.f0;
                        uint8_t *l_356 = &l_201;
                        --l_330;
                        l_333 = p_49;
                        (*p_49) = (~(safe_add_func_uint8_t_u_u(((((safe_mul_func_uint8_t_u_u(0x04L, ((*l_356) &= ((4L | ((((safe_add_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(((*l_354) = ((((safe_sub_func_uint16_t_u_u(5UL, (safe_sub_func_uint8_t_u_u((p_48 || 0x0A360B77458CF2B4L), p_48)))) , p_1158->g_43) & (safe_rshift_func_int16_t_s_s(((~(((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u(p_1158->g_134, ((l_243 , p_1158->g_308) , p_1158->g_139))) , p_1158->g_132.f0), l_327)) && l_327) || p_1158->g_329)) | (*p_49)), 6))) == p_1158->g_75)), p_48)) <= p_1158->g_161) , p_48), p_48)) & l_355[0]) || p_48) != p_1158->g_89)) != p_1158->g_207)))) <= 0x8B6E1BD89AB3EE1FL) , p_48) & 0x0A7155FC610984C4L), p_48)));
                    }
                    else
                    { /* block id: 154 */
                        l_357--;
                    }
                    for (p_1158->g_75 = 0; (p_1158->g_75 >= 23); p_1158->g_75 = safe_add_func_uint32_t_u_u(p_1158->g_75, 1))
                    { /* block id: 159 */
                        if ((*p_47))
                            break;
                        if (l_327)
                            continue;
                        p_49 = p_47;
                    }
                }
            }
            else
            { /* block id: 165 */
                l_362 = &l_142[6][6][0];
            }
        }
        l_181[0][7][8] = p_49;
        if ((p_48 >= 0x1B09L))
        { /* block id: 170 */
            uint32_t l_367[4][6][7];
            uint32_t *l_378 = &p_1158->g_329;
            uint64_t *l_379 = &p_1158->g_380[2];
            int32_t **l_382 = &l_80;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 7; k++)
                        l_367[i][j][k] = 0x1528362FL;
                }
            }
            (*l_382) = (l_381 = (p_1158->g_132 , ((!((safe_mod_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((p_1158->g_89 && ((l_367[0][2][5] <= p_1158->g_222) ^ (safe_add_func_uint64_t_u_u(((*l_379) = ((*l_131) , ((((*l_378) ^= ((safe_rshift_func_uint8_t_u_u(255UL, (0x9AF5L & ((safe_mul_func_uint16_t_u_u((((p_48 , (((((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s(1L, 1)), p_48)) >= l_114[8]) > p_1158->g_134) | p_48) , 0L)) <= 0x51F61B6968DE9E0AL) && p_1158->g_43), (-9L))) , 0x4D40L)))) , p_1158->g_134)) , 253UL) != p_1158->g_60))), p_1158->g_132.f0)))), p_1158->g_219)), p_48)) ^ p_48)) , p_47)));
            return p_50;
        }
        else
        { /* block id: 176 */
            int32_t *l_383 = (void*)0;
            int32_t **l_384[5][2][3] = {{{&p_1158->g_94[3][3][0],&l_80,&p_1158->g_94[3][3][0]},{&p_1158->g_94[3][3][0],&l_80,&p_1158->g_94[3][3][0]}},{{&p_1158->g_94[3][3][0],&l_80,&p_1158->g_94[3][3][0]},{&p_1158->g_94[3][3][0],&l_80,&p_1158->g_94[3][3][0]}},{{&p_1158->g_94[3][3][0],&l_80,&p_1158->g_94[3][3][0]},{&p_1158->g_94[3][3][0],&l_80,&p_1158->g_94[3][3][0]}},{{&p_1158->g_94[3][3][0],&l_80,&p_1158->g_94[3][3][0]},{&p_1158->g_94[3][3][0],&l_80,&p_1158->g_94[3][3][0]}},{{&p_1158->g_94[3][3][0],&l_80,&p_1158->g_94[3][3][0]},{&p_1158->g_94[3][3][0],&l_80,&p_1158->g_94[3][3][0]}}};
            int32_t *l_385 = (void*)0;
            int i, j, k;
            l_385 = l_383;
        }
    }
    (*p_49) = 0x480BCF21L;
    for (p_1158->g_75 = 0; (p_1158->g_75 >= (-10)); p_1158->g_75--)
    { /* block id: 202 */
        int32_t l_421 = 0x2BC080D4L;
        int32_t *l_424 = &p_1158->g_207;
        int32_t l_425 = 0x3F755DEFL;
        int32_t l_427 = 1L;
        int32_t l_429 = 0x2A896730L;
        int32_t l_430 = 0x7B878663L;
        if ((*p_47))
            break;
        l_427 = (p_1158->g_392 != (l_421 < (((((-7L) == (p_1158->g_23 , ((void*)0 != &p_1158->g_161))) , (l_425 = ((((*l_424) &= (p_48 , (~((safe_rshift_func_int8_t_s_u((((void*)0 == &l_318) >= l_421), p_1158->g_60)) > 0x1942L)))) , 0UL) ^ p_1158->g_60))) , l_426) == &l_162[0])));
        l_431--;
    }
    p_47 = (p_50 = l_80);
    return l_434;
}


/* ------------------------------------------ */
/* 
 * reads : p_1158->g_60
 * writes: p_1158->g_60
 */
int32_t * func_51(int32_t * p_52, int32_t * p_53, struct S2 * p_1158)
{ /* block id: 6 */
    int32_t *l_55 = &p_1158->g_43;
    int32_t *l_56 = (void*)0;
    int32_t *l_57 = &p_1158->g_43;
    int32_t *l_58[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int64_t l_59 = 1L;
    int i;
    --p_1158->g_60;
    return &p_1158->g_43;
}


__kernel void entry(__global ulong *result) {
    int i, j, k;
    struct S2 c_1159;
    struct S2* p_1158 = &c_1159;
    struct S2 c_1160 = {
        0x74C59CDCL, // p_1158->g_7
        9UL, // p_1158->g_23
        0x24F69A75L, // p_1158->g_43
        0x4DL, // p_1158->g_60
        0x0EA3BBE7L, // p_1158->g_75
        1UL, // p_1158->g_89
        {{{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75}},{{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75}},{{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75}},{{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75}},{{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75},{&p_1158->g_75,&p_1158->g_43,&p_1158->g_75}}}, // p_1158->g_94
        {&p_1158->g_94[2][6][1],&p_1158->g_94[2][6][1],&p_1158->g_94[2][6][1],&p_1158->g_94[2][6][1],&p_1158->g_94[2][6][1],&p_1158->g_94[2][6][1],&p_1158->g_94[2][6][1]}, // p_1158->g_125
        {0x1D30L}, // p_1158->g_132
        0x14L, // p_1158->g_134
        255UL, // p_1158->g_139
        0x56E2808CFBF85D4AL, // p_1158->g_161
        1L, // p_1158->g_207
        65534UL, // p_1158->g_219
        65535UL, // p_1158->g_222
        {{{0x504CL}},{{0x34D2L}},{{0x504CL}},{{0x504CL}},{{0x34D2L}},{{0x504CL}},{{0x504CL}},{{0x34D2L}},{{0x504CL}}}, // p_1158->g_296
        &p_1158->g_296[4], // p_1158->g_295
        0x0B19E0C032D97033L, // p_1158->g_308
        0xB846D1FCL, // p_1158->g_329
        {0x852D05FB766F39B9L,0x852D05FB766F39B9L,0x852D05FB766F39B9L,0x852D05FB766F39B9L,0x852D05FB766F39B9L}, // p_1158->g_380
        (-1L), // p_1158->g_392
        (-1L), // p_1158->g_428
        &p_1158->g_329, // p_1158->g_448
        &p_1158->g_448, // p_1158->g_447
        {&p_1158->g_448,&p_1158->g_448,&p_1158->g_448}, // p_1158->g_449
        1L, // p_1158->g_452
        8L, // p_1158->g_476
        &p_1158->g_89, // p_1158->g_540
        {{&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540},{&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540},{&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540},{&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540},{&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540},{&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540},{&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540,&p_1158->g_540}}, // p_1158->g_539
        {{{0x2089L}},{{0x2089L}},{{0x2089L}},{{0x2089L}},{{0x2089L}},{{0x2089L}},{{0x2089L}}}, // p_1158->g_585
        1UL, // p_1158->g_596
        {&p_1158->g_596,&p_1158->g_596,&p_1158->g_596,&p_1158->g_596,&p_1158->g_596,&p_1158->g_596,&p_1158->g_596}, // p_1158->g_595
        &p_1158->g_595[3], // p_1158->g_594
        {{&p_1158->g_594},{&p_1158->g_594},{&p_1158->g_594},{&p_1158->g_594}}, // p_1158->g_593
        1UL, // p_1158->g_613
        0x82L, // p_1158->g_644
        0x59L, // p_1158->g_693
        &p_1158->g_693, // p_1158->g_692
        &p_1158->g_692, // p_1158->g_691
        {&p_1158->g_692,&p_1158->g_692,&p_1158->g_692,&p_1158->g_692,&p_1158->g_692,&p_1158->g_692,&p_1158->g_692}, // p_1158->g_694
        &p_1158->g_692, // p_1158->g_695
        {{{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695}},{{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695}},{{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695}},{{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695}},{{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695}},{{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695},{(void*)0,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695,&p_1158->g_695}}}, // p_1158->g_690
        (void*)0, // p_1158->g_732
        &p_1158->g_732, // p_1158->g_731
        0x27F29C55L, // p_1158->g_758
        0xCE97BC95L, // p_1158->g_802
        &p_1158->g_585[3], // p_1158->g_853
        &p_1158->g_853, // p_1158->g_852
        0x396780CFL, // p_1158->g_947
        (-2L), // p_1158->g_971
        {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL}, // p_1158->g_1114
        &p_1158->g_585[1].f0, // p_1158->g_1149
    };
    c_1159 = c_1160;
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    func_1(p_1158);
    barrier(CLK_LOCAL_MEM_FENCE | CLK_GLOBAL_MEM_FENCE);
    uint64_t crc64_context = 0xFFFFFFFFFFFFFFFFUL;
    int print_hash_value = 0;
    transparent_crc(p_1158->g_7, "p_1158->g_7", print_hash_value);
    transparent_crc(p_1158->g_23, "p_1158->g_23", print_hash_value);
    transparent_crc(p_1158->g_43, "p_1158->g_43", print_hash_value);
    transparent_crc(p_1158->g_60, "p_1158->g_60", print_hash_value);
    transparent_crc(p_1158->g_75, "p_1158->g_75", print_hash_value);
    transparent_crc(p_1158->g_89, "p_1158->g_89", print_hash_value);
    transparent_crc(p_1158->g_132.f0, "p_1158->g_132.f0", print_hash_value);
    transparent_crc(p_1158->g_134, "p_1158->g_134", print_hash_value);
    transparent_crc(p_1158->g_139, "p_1158->g_139", print_hash_value);
    transparent_crc(p_1158->g_161, "p_1158->g_161", print_hash_value);
    transparent_crc(p_1158->g_207, "p_1158->g_207", print_hash_value);
    transparent_crc(p_1158->g_219, "p_1158->g_219", print_hash_value);
    transparent_crc(p_1158->g_222, "p_1158->g_222", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1158->g_296[i].f0.f0, "p_1158->g_296[i].f0.f0", print_hash_value);

    }
    transparent_crc(p_1158->g_308, "p_1158->g_308", print_hash_value);
    transparent_crc(p_1158->g_329, "p_1158->g_329", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(p_1158->g_380[i], "p_1158->g_380[i]", print_hash_value);

    }
    transparent_crc(p_1158->g_392, "p_1158->g_392", print_hash_value);
    transparent_crc(p_1158->g_428, "p_1158->g_428", print_hash_value);
    transparent_crc(p_1158->g_452, "p_1158->g_452", print_hash_value);
    transparent_crc(p_1158->g_476, "p_1158->g_476", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(p_1158->g_585[i].f0.f0, "p_1158->g_585[i].f0.f0", print_hash_value);

    }
    transparent_crc(p_1158->g_596, "p_1158->g_596", print_hash_value);
    transparent_crc(p_1158->g_613, "p_1158->g_613", print_hash_value);
    transparent_crc(p_1158->g_644, "p_1158->g_644", print_hash_value);
    transparent_crc(p_1158->g_693, "p_1158->g_693", print_hash_value);
    transparent_crc(p_1158->g_758, "p_1158->g_758", print_hash_value);
    transparent_crc(p_1158->g_802, "p_1158->g_802", print_hash_value);
    transparent_crc(p_1158->g_947, "p_1158->g_947", print_hash_value);
    transparent_crc(p_1158->g_971, "p_1158->g_971", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(p_1158->g_1114[i], "p_1158->g_1114[i]", print_hash_value);

    }
    result[get_linear_global_id()] = crc64_context ^ 0xFFFFFFFFFFFFFFFFUL;
}
